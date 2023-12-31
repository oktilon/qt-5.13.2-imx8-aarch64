// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "extensions/renderer/i18n_hooks_util.h"

#include <vector>

#include "base/logging.h"
#include "base/macros.h"
#include "base/metrics/histogram_macros.h"
#include "content/public/renderer/render_frame.h"
#include "extensions/common/extension_messages.h"
#include "extensions/common/message_bundle.h"
#include "gin/data_object_builder.h"
#if !defined(TOOLKIT_QT)
#include "third_party/cld_3/src/src/nnet_language_identifier.h"
#endif // !defined(TOOLKIT_QT)

namespace extensions {
namespace i18n_hooks {

namespace {

// Max number of languages to detect.
const int kCldNumLangs = 3;

// CLD3 minimum reliable byte threshold. Predictions for inputs below this size
// in bytes will be considered unreliable.
const int kCld3MinimumByteThreshold = 50;

struct DetectedLanguage {
  DetectedLanguage(const std::string& language, int percentage)
      : language(language), percentage(percentage) {}

  // Returns a new v8::Local<v8::Value> representing the serialized form of
  // this DetectedLanguage object.
  v8::Local<v8::Value> ToV8(v8::Isolate* isolate) const;

  std::string language;
  int percentage;
};

// LanguageDetectionResult object that holds detected langugae reliability and
// array of DetectedLanguage
struct LanguageDetectionResult {
  LanguageDetectionResult() {}
  ~LanguageDetectionResult() {}

  // Returns a new v8::Local<v8::Value> representing the serialized form of
  // this Result object.
  v8::Local<v8::Value> ToV8(v8::Local<v8::Context> context) const;

  // CLD detected language reliability
  bool is_reliable = false;

  // Array of detectedLanguage of size 1-3. The null is returned if
  // there were no languages detected
  std::vector<DetectedLanguage> languages;

 private:
  DISALLOW_COPY_AND_ASSIGN(LanguageDetectionResult);
};

v8::Local<v8::Value> DetectedLanguage::ToV8(v8::Isolate* isolate) const {
  return gin::DataObjectBuilder(isolate)
      .Set("language", language)
      .Set("percentage", percentage)
      .Build();
}

v8::Local<v8::Value> LanguageDetectionResult::ToV8(
    v8::Local<v8::Context> context) const {
  v8::Isolate* isolate = context->GetIsolate();
  DCHECK(isolate->GetCurrentContext() == context);

  v8::Local<v8::Array> v8_languages = v8::Array::New(isolate, languages.size());
  for (uint32_t i = 0; i < languages.size(); ++i) {
    bool success =
        v8_languages->CreateDataProperty(context, i, languages[i].ToV8(isolate))
            .ToChecked();
    DCHECK(success) << "CreateDataProperty() should never fail.";
  }
  return gin::DataObjectBuilder(isolate)
      .Set("isReliable", is_reliable)
      .Set("languages", v8_languages.As<v8::Value>())
      .Build();
}

#if !defined(TOOLKIT_QT)
void InitDetectedLanguages(
    const std::vector<chrome_lang_id::NNetLanguageIdentifier::Result>&
        lang_results,
    LanguageDetectionResult* result) {
  std::vector<DetectedLanguage>* detected_languages = &result->languages;
  DCHECK(detected_languages->empty());
  bool* is_reliable = &result->is_reliable;

  // is_reliable is set to "true", so that the reliability can be calculated by
  // &&'ing the reliability of each predicted language.
  *is_reliable = true;
  for (const auto& lang_result : lang_results) {
    const std::string& language_code = lang_result.language;

    // If a language is kUnknown, then the remaining ones are also kUnknown.
    if (language_code == chrome_lang_id::NNetLanguageIdentifier::kUnknown) {
      break;
    }

    // The list of languages supported by CLD3 is saved in kLanguageNames
    // in the following file:
    // //src/third_party/cld_3/src/src/task_context_params.cc
    // Among the entries in this list are transliterated languages
    // (called xx-Latn) which don't belong to the spec ISO639-1 used by
    // the previous model, CLD2. Thus, to maintain backwards compatibility,
    // xx-Latn predictions are ignored for now.
    if (base::EndsWith(language_code, "-Latn",
                       base::CompareCase::INSENSITIVE_ASCII)) {
      continue;
    }

    *is_reliable = *is_reliable && lang_result.is_reliable;
    const int percent = static_cast<int>(100 * lang_result.proportion);
    detected_languages->emplace_back(language_code, percent);
  }

  if (detected_languages->empty())
    *is_reliable = false;
}
#endif // !defined(TOOLKIT_QT)

}  // namespace

v8::Local<v8::Value> GetI18nMessage(const std::string& message_name,
                                    const std::string& extension_id,
                                    v8::Local<v8::Value> v8_substitutions,
                                    content::RenderFrame* render_frame,
                                    v8::Local<v8::Context> context) {
  v8::Isolate* isolate = context->GetIsolate();
  L10nMessagesMap* l10n_messages = nullptr;
  {
    ExtensionToL10nMessagesMap& messages_map = *GetExtensionToL10nMessagesMap();
    auto iter = messages_map.find(extension_id);
    if (iter != messages_map.end()) {
      l10n_messages = &iter->second;
    } else {
      if (!render_frame)
        return v8::Undefined(isolate);

      l10n_messages = &messages_map[extension_id];
      // A sync call to load message catalogs for current extension.
      // TODO(devlin): Wait, what?! A synchronous call to the browser to perform
      // potentially blocking work reading files from disk? That's Bad.
      {
        SCOPED_UMA_HISTOGRAM_TIMER("Extensions.SyncGetMessageBundle");
        render_frame->Send(
            new ExtensionHostMsg_GetMessageBundle(extension_id, l10n_messages));
      }
    }
  }

  std::string message =
      MessageBundle::GetL10nMessage(message_name, *l10n_messages);

  std::vector<std::string> substitutions;
  // For now, we just suppress all errors, but that's really not the best.
  // See https://crbug.com/807769.
  v8::TryCatch try_catch(isolate);
  if (v8_substitutions->IsArray()) {
    // chrome.i18n.getMessage("message_name", ["more", "params"]);
    v8::Local<v8::Array> placeholders = v8_substitutions.As<v8::Array>();
    uint32_t count = placeholders->Length();
    if (count > 9)
      return v8::Undefined(isolate);

    for (uint32_t i = 0; i < count; ++i) {
      v8::Local<v8::Value> placeholder;
      if (!placeholders->Get(context, i).ToLocal(&placeholder))
        return v8::Undefined(isolate);
      // Note: this tries to convert each entry to a JS string, which can fail.
      // If it does, String::Utf8Value() catches the error and doesn't surface
      // it to the calling script (though the call may still be observable,
      // since this goes through an object's toString() method). If it fails,
      // we just silently ignore the value.
      v8::String::Utf8Value string_value(isolate, placeholder);
      if (*string_value)
        substitutions.push_back(*string_value);
    }
  } else if (v8_substitutions->IsString()) {
    // chrome.i18n.getMessage("message_name", "one param");
    substitutions.push_back(gin::V8ToString(isolate, v8_substitutions));
  }
  // TODO(devlin): We currently just ignore any non-string, non-array values
  // for substitutions, but the type is documented as 'any'. We should either
  // enforce type more heavily, or throw an error here.

  // NOTE: We call ReplaceStringPlaceholders even if |substitutions| is empty
  // because we substitute $$ to be $ (in order to display a dollar sign in a
  // message). See https://crbug.com/127243.
  message = base::ReplaceStringPlaceholders(message, substitutions, nullptr);
  return gin::StringToV8(isolate, message);
}

v8::Local<v8::Value> DetectTextLanguage(v8::Local<v8::Context> context,
                                        const std::string& text) {
#if !defined(TOOLKIT_QT)
  chrome_lang_id::NNetLanguageIdentifier nnet_lang_id(/*min_num_bytes=*/0,
                                                      /*max_num_bytes=*/512);
  std::vector<chrome_lang_id::NNetLanguageIdentifier::Result> lang_results =
      nnet_lang_id.FindTopNMostFreqLangs(text, kCldNumLangs);

  // is_reliable is set to false if we believe the input is too short to be
  // accurately identified by the current model.
  if (text.size() < kCld3MinimumByteThreshold) {
    for (auto& result : lang_results)
      result.is_reliable = false;
  }
#endif // !defined(TOOLKIT_QT)

  LanguageDetectionResult result;

#if !defined(TOOLKIT_QT)
  // Populate LanguageDetectionResult with prediction reliability, languages,
  // and the corresponding percentages.
  InitDetectedLanguages(lang_results, &result);
#endif // !defined(TOOLKIT_QT)
  return result.ToV8(context);
}

}  // namespace i18n_hooks
}  // namespace extensions
