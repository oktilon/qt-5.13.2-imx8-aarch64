// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
#include "services/tracing/public/cpp/perfetto/traced_value_proto_writer.h"

#include <stack>

#include "base/hash.h"
#include "base/json/string_escape.h"
#include "base/trace_event/trace_event.h"
#include "base/trace_event/traced_value.h"
#include "base/values.h"
#include "third_party/perfetto/include/perfetto/protozero/message_handle.h"
#include "third_party/perfetto/include/perfetto/protozero/scattered_heap_buffer.h"
#include "third_party/perfetto/include/perfetto/protozero/scattered_stream_writer.h"
#include "third_party/perfetto/protos/perfetto/trace/chrome/chrome_trace_event.pbzero.h"

using TracedValue = base::trace_event::TracedValue;
using ChromeTracedValue = perfetto::protos::pbzero::ChromeTracedValue;
using TracedValueHandle =
    protozero::MessageHandle<perfetto::protos::pbzero::ChromeTracedValue>;
using TraceEvent = base::trace_event::TraceEvent;

namespace tracing {

PerfettoProtoAppender::PerfettoProtoAppender(
    perfetto::protos::pbzero::ChromeTraceEvent_Arg* proto)
    : proto_(proto) {}

PerfettoProtoAppender::~PerfettoProtoAppender() = default;

void PerfettoProtoAppender::AddBuffer(uint8_t* begin, uint8_t* end) {
  ranges_.emplace_back();
  ranges_.back().begin = begin;
  ranges_.back().end = end;
}

size_t PerfettoProtoAppender::Finalize(uint32_t field_id) {
  return proto_->AppendScatteredBytes(field_id, ranges_.data(), ranges_.size());
}

namespace {

constexpr size_t kDefaultSliceSize = 128;

class ProtoWriter final : public TracedValue::Writer {
 public:
  explicit ProtoWriter(size_t initial_slice_size_bytes)
      : buffer_(initial_slice_size_bytes ? initial_slice_size_bytes
                                         : kDefaultSliceSize),
        stream_(&buffer_) {
    proto_.Reset(&stream_);
    buffer_.set_writer(&stream_);
    node_stack_.emplace(TracedValueHandle(&proto_));
    proto_.set_nested_type(perfetto::protos::pbzero::ChromeTracedValue::DICT);
  }

  ~ProtoWriter() override {
    // At this point there should just be the root dict still open if any,
    // which can happen if the TracedValue is created but never
    // used (i.e. proto never gets finalized).
    if (!node_stack_.empty()) {
      node_stack_.pop();
    }

    DCHECK(node_stack_.empty());
  }

  bool IsPickleWriter() const override { return false; }
  bool IsProtoWriter() const override { return true; }

  void SetInteger(const char* name, int value) override {
    AddDictEntry(name)->set_int_value(value);
  }

  void SetIntegerWithCopiedName(base::StringPiece name, int value) override {
    AddDictEntry(name)->set_int_value(value);
  }

  void SetDouble(const char* name, double value) override {
    AddDictEntry(name)->set_double_value(value);
  }

  void SetDoubleWithCopiedName(base::StringPiece name, double value) override {
    AddDictEntry(name)->set_double_value(value);
  }

  void SetBoolean(const char* name, bool value) override {
    AddDictEntry(name)->set_bool_value(value);
  }

  void SetBooleanWithCopiedName(base::StringPiece name, bool value) override {
    AddDictEntry(name)->set_bool_value(value);
  }

  void SetString(const char* name, base::StringPiece value) override {
    AddDictEntry(name)->set_string_value(value.data(), value.size());
  }

  void SetStringWithCopiedName(base::StringPiece name,
                               base::StringPiece value) override {
    AddDictEntry(name)->set_string_value(value.data(), value.size());
  }

  void SetValue(const char* name, Writer* value) override {
    DCHECK(value->IsProtoWriter());
    ProtoWriter* child_proto_writer = static_cast<ProtoWriter*>(value);

    uint32_t full_child_size = child_proto_writer->Finalize();

    DCHECK(!node_stack_.empty());
    node_stack_.top()->add_dict_keys(name);

    std::vector<protozero::ContiguousMemoryRange> ranges;
    for (auto& slice : child_proto_writer->buffer_.slices()) {
      ranges.emplace_back(slice.GetUsedRange());
    }

    size_t appended_size = node_stack_.top()->AppendScatteredBytes(
        perfetto::protos::pbzero::ChromeTracedValue::kDictValuesFieldNumber,
        ranges.data(), ranges.size());
    DCHECK_EQ(full_child_size, appended_size);
  }

  void SetValueWithCopiedName(base::StringPiece name, Writer* value) override {
    SetValue(name.as_string().c_str(), value);
  }

  void BeginArray() override {
    node_stack_.emplace(TracedValueHandle(AddArrayEntry()));
    node_stack_.top()->set_nested_type(
        perfetto::protos::pbzero::ChromeTracedValue::ARRAY);
  }

  void BeginDictionary() override {
    node_stack_.emplace(TracedValueHandle(AddArrayEntry()));
    node_stack_.top()->set_nested_type(
        perfetto::protos::pbzero::ChromeTracedValue::DICT);
  }

  void BeginDictionary(const char* name) override {
    node_stack_.emplace(TracedValueHandle(AddDictEntry(name)));
    node_stack_.top()->set_nested_type(
        perfetto::protos::pbzero::ChromeTracedValue::DICT);
  }

  void BeginDictionaryWithCopiedName(base::StringPiece name) override {
    node_stack_.emplace(TracedValueHandle(AddDictEntry(name)));
    node_stack_.top()->set_nested_type(
        perfetto::protos::pbzero::ChromeTracedValue::DICT);
  }

  void BeginArray(const char* name) override {
    node_stack_.emplace(TracedValueHandle(AddDictEntry(name)));
    node_stack_.top()->set_nested_type(
        perfetto::protos::pbzero::ChromeTracedValue::ARRAY);
  }

  void BeginArrayWithCopiedName(base::StringPiece name) override {
    node_stack_.emplace(TracedValueHandle(AddDictEntry(name)));
    node_stack_.top()->set_nested_type(
        perfetto::protos::pbzero::ChromeTracedValue::ARRAY);
  }

  void EndDictionary() override {
    DCHECK_GE(node_stack_.size(), 2u);
    node_stack_.pop();
  }

  void EndArray() override {
    DCHECK_GE(node_stack_.size(), 2u);
    node_stack_.pop();
  }

  void AppendInteger(int value) override {
    AddArrayEntry()->set_int_value(value);
  }

  void AppendDouble(double value) override {
    AddArrayEntry()->set_double_value(value);
  }

  void AppendBoolean(bool value) override {
    AddArrayEntry()->set_bool_value(value);
  }

  void AppendString(base::StringPiece value) override {
    AddArrayEntry()->set_string_value(value.data(), value.size());
  }

  uint32_t Finalize() {
    if (!node_stack_.empty()) {
      node_stack_.pop();
    }

    DCHECK(node_stack_.empty());
    uint32_t full_size = proto_.Finalize();
    buffer_.AdjustUsedSizeOfCurrentSlice();

    return full_size;
  }

  void AppendAsTraceFormat(std::string* out) const override { NOTREACHED(); }

  bool AppendToProto(
      base::trace_event::TracedValue::ProtoAppender* appender) override {
    uint32_t full_size = Finalize();

    for (auto& slice : buffer_.slices()) {
      appender->AddBuffer(slice.start(),
                          slice.start() + slice.size() - slice.unused_bytes());
    }

    size_t appended_size =
        appender->Finalize(perfetto::protos::pbzero::ChromeTraceEvent_Arg::
                               kTracedValueFieldNumber);
    DCHECK_EQ(full_size, appended_size);
    return true;
  }

  void EstimateTraceMemoryOverhead(
      base::trace_event::TraceEventMemoryOverhead* overhead) override {
    overhead->Add(base::trace_event::TraceEventMemoryOverhead::kTracedValue,
                  /* allocated size */
                  buffer_.GetTotalSize(),
                  /* resident size */
                  buffer_.GetTotalSize());
  }

  std::unique_ptr<base::Value> ToBaseValue() const override {
    base::Value root(base::Value::Type::DICTIONARY);
    return base::Value::ToUniquePtrValue(std::move(root));
  }

 private:
  ChromeTracedValue* AddDictEntry(const char* name) {
    DCHECK(!node_stack_.empty() && !node_stack_.top()->is_finalized());
    node_stack_.top()->add_dict_keys(name);
    return node_stack_.top()->add_dict_values();
  }

  ChromeTracedValue* AddDictEntry(base::StringPiece name) {
    DCHECK(!node_stack_.empty() && !node_stack_.top()->is_finalized());
    node_stack_.top()->add_dict_keys(name.data(), name.length());
    return node_stack_.top()->add_dict_values();
  }

  ChromeTracedValue* AddArrayEntry() {
    DCHECK(!node_stack_.empty() && !node_stack_.top()->is_finalized());
    return node_stack_.top()->add_array_values();
  }

  std::stack<TracedValueHandle> node_stack_;

  perfetto::protos::pbzero::ChromeTracedValue proto_;
  protozero::ScatteredHeapBuffer buffer_;
  protozero::ScatteredStreamWriter stream_;
};

std::unique_ptr<TracedValue::Writer> CreateProtoWriter(
    size_t initial_slice_size_bytes) {
  return std::make_unique<ProtoWriter>(initial_slice_size_bytes);
}

}  // namespace

void RegisterTracedValueProtoWriter(bool enable) {
  TracedValue::SetWriterFactoryCallback(enable ? &CreateProtoWriter : nullptr);
}

}  // namespace tracing