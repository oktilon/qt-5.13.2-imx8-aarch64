// Copyright 2018 The Dawn Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "common/Assert.h"
#include "dawn/dawncpp.h"
#include "dawn_native/DawnNative.h"
#include "dawn_wire/Wire.h"

#include <vector>

class DevNull : public dawn_wire::CommandSerializer {
  public:
    void* GetCmdSpace(size_t size) override {
        if (size > buf.size()) {
            buf.resize(size);
        }
        return buf.data();
    }
    bool Flush() override {
        return true;
    };

  private:
    std::vector<char> buf;
};

void SkipSwapChainBuilderSetImplementation(dawnSwapChainBuilder builder, uint64_t) {
}

extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
    dawnProcTable procs = dawn_native::GetProcs();
    // SwapChainSetImplementation receives a pointer, skip calls to it as they would be intercepted
    // in embedders or dawn_wire too.
    procs.swapChainBuilderSetImplementation = SkipSwapChainBuilderSetImplementation;
    dawnSetProcs(&procs);

    // Create an instance and find the null adapter to create a device with.
    std::unique_ptr<dawn_native::Instance> instance = std::make_unique<dawn_native::Instance>();
    instance->DiscoverDefaultAdapters();

    std::vector<dawn_native::Adapter> adapters = instance->GetAdapters();

    dawn::Device nullDevice;
    for (dawn_native::Adapter adapter : adapters) {
        if (adapter.GetBackendType() == dawn_native::BackendType::Null) {
            nullDevice = dawn::Device::Acquire(adapter.CreateDevice());
            break;
        }
    }
    ASSERT(nullDevice.Get() != nullptr);

    DevNull devNull;
    std::unique_ptr<dawn_wire::CommandHandler> wireServer(
        dawn_wire::NewServerCommandHandler(nullDevice.Get(), procs, &devNull));

    wireServer->HandleCommands(reinterpret_cast<const char*>(data), size);

    // Fake waiting for all previous commands before destroying the server.
    nullDevice.Tick();

    // Destroy the server before the device because it needs to free all objects.
    wireServer = nullptr;
    nullDevice = nullptr;
    instance = nullptr;

    return 0;
}
