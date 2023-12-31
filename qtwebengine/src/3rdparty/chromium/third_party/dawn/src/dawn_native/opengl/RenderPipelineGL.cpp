// Copyright 2017 The Dawn Authors
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

#include "dawn_native/opengl/RenderPipelineGL.h"

#include "dawn_native/opengl/DeviceGL.h"
#include "dawn_native/opengl/Forward.h"
#include "dawn_native/opengl/InputStateGL.h"
#include "dawn_native/opengl/PersistentPipelineStateGL.h"
#include "dawn_native/opengl/UtilsGL.h"

namespace dawn_native { namespace opengl {

    namespace {
        GLenum GLPrimitiveTopology(dawn::PrimitiveTopology primitiveTopology) {
            switch (primitiveTopology) {
                case dawn::PrimitiveTopology::PointList:
                    return GL_POINTS;
                case dawn::PrimitiveTopology::LineList:
                    return GL_LINES;
                case dawn::PrimitiveTopology::LineStrip:
                    return GL_LINE_STRIP;
                case dawn::PrimitiveTopology::TriangleList:
                    return GL_TRIANGLES;
                case dawn::PrimitiveTopology::TriangleStrip:
                    return GL_TRIANGLE_STRIP;
                default:
                    UNREACHABLE();
            }
        }

        GLenum GLBlendFactor(dawn::BlendFactor factor, bool alpha) {
            switch (factor) {
                case dawn::BlendFactor::Zero:
                    return GL_ZERO;
                case dawn::BlendFactor::One:
                    return GL_ONE;
                case dawn::BlendFactor::SrcColor:
                    return GL_SRC_COLOR;
                case dawn::BlendFactor::OneMinusSrcColor:
                    return GL_ONE_MINUS_SRC_COLOR;
                case dawn::BlendFactor::SrcAlpha:
                    return GL_SRC_ALPHA;
                case dawn::BlendFactor::OneMinusSrcAlpha:
                    return GL_ONE_MINUS_SRC_ALPHA;
                case dawn::BlendFactor::DstColor:
                    return GL_DST_COLOR;
                case dawn::BlendFactor::OneMinusDstColor:
                    return GL_ONE_MINUS_DST_COLOR;
                case dawn::BlendFactor::DstAlpha:
                    return GL_DST_ALPHA;
                case dawn::BlendFactor::OneMinusDstAlpha:
                    return GL_ONE_MINUS_DST_ALPHA;
                case dawn::BlendFactor::SrcAlphaSaturated:
                    return GL_SRC_ALPHA_SATURATE;
                case dawn::BlendFactor::BlendColor:
                    return alpha ? GL_CONSTANT_ALPHA : GL_CONSTANT_COLOR;
                case dawn::BlendFactor::OneMinusBlendColor:
                    return alpha ? GL_ONE_MINUS_CONSTANT_ALPHA : GL_ONE_MINUS_CONSTANT_COLOR;
                default:
                    UNREACHABLE();
            }
        }

        GLenum GLBlendMode(dawn::BlendOperation operation) {
            switch (operation) {
                case dawn::BlendOperation::Add:
                    return GL_FUNC_ADD;
                case dawn::BlendOperation::Subtract:
                    return GL_FUNC_SUBTRACT;
                case dawn::BlendOperation::ReverseSubtract:
                    return GL_FUNC_REVERSE_SUBTRACT;
                case dawn::BlendOperation::Min:
                    return GL_MIN;
                case dawn::BlendOperation::Max:
                    return GL_MAX;
                default:
                    UNREACHABLE();
            }
        }

        void ApplyBlendState(uint32_t attachment, const BlendStateDescriptor* descriptor) {
            if (descriptor->blendEnabled) {
                glEnablei(GL_BLEND, attachment);
                glBlendEquationSeparatei(attachment, GLBlendMode(descriptor->colorBlend.operation),
                                         GLBlendMode(descriptor->alphaBlend.operation));
                glBlendFuncSeparatei(attachment,
                                     GLBlendFactor(descriptor->colorBlend.srcFactor, false),
                                     GLBlendFactor(descriptor->colorBlend.dstFactor, false),
                                     GLBlendFactor(descriptor->alphaBlend.srcFactor, true),
                                     GLBlendFactor(descriptor->alphaBlend.dstFactor, true));
            } else {
                glDisablei(GL_BLEND, attachment);
            }
            glColorMaski(attachment, descriptor->colorWriteMask & dawn::ColorWriteMask::Red,
                         descriptor->colorWriteMask & dawn::ColorWriteMask::Green,
                         descriptor->colorWriteMask & dawn::ColorWriteMask::Blue,
                         descriptor->colorWriteMask & dawn::ColorWriteMask::Alpha);
        }

        GLuint OpenGLStencilOperation(dawn::StencilOperation stencilOperation) {
            switch (stencilOperation) {
                case dawn::StencilOperation::Keep:
                    return GL_KEEP;
                case dawn::StencilOperation::Zero:
                    return GL_ZERO;
                case dawn::StencilOperation::Replace:
                    return GL_REPLACE;
                case dawn::StencilOperation::Invert:
                    return GL_INVERT;
                case dawn::StencilOperation::IncrementClamp:
                    return GL_INCR;
                case dawn::StencilOperation::DecrementClamp:
                    return GL_DECR;
                case dawn::StencilOperation::IncrementWrap:
                    return GL_INCR_WRAP;
                case dawn::StencilOperation::DecrementWrap:
                    return GL_DECR_WRAP;
                default:
                    UNREACHABLE();
            }
        }

        void ApplyDepthStencilState(const DepthStencilStateDescriptor* descriptor,
                                    PersistentPipelineState* persistentPipelineState) {
            // Depth writes only occur if depth is enabled
            if (descriptor->depthCompare == dawn::CompareFunction::Always &&
                !descriptor->depthWriteEnabled) {
                glDisable(GL_DEPTH_TEST);
            } else {
                glEnable(GL_DEPTH_TEST);
            }

            if (descriptor->depthWriteEnabled) {
                glDepthMask(GL_TRUE);
            } else {
                glDepthMask(GL_FALSE);
            }

            glDepthFunc(ToOpenGLCompareFunction(descriptor->depthCompare));

            if (StencilTestEnabled(descriptor)) {
                glEnable(GL_STENCIL_TEST);
            } else {
                glDisable(GL_STENCIL_TEST);
            }

            GLenum backCompareFunction = ToOpenGLCompareFunction(descriptor->back.compare);
            GLenum frontCompareFunction = ToOpenGLCompareFunction(descriptor->front.compare);
            persistentPipelineState->SetStencilFuncsAndMask(
                backCompareFunction, frontCompareFunction, descriptor->stencilReadMask);

            glStencilOpSeparate(GL_BACK, OpenGLStencilOperation(descriptor->back.stencilFailOp),
                                OpenGLStencilOperation(descriptor->back.depthFailOp),
                                OpenGLStencilOperation(descriptor->back.passOp));
            glStencilOpSeparate(GL_FRONT, OpenGLStencilOperation(descriptor->front.stencilFailOp),
                                OpenGLStencilOperation(descriptor->front.depthFailOp),
                                OpenGLStencilOperation(descriptor->front.passOp));

            glStencilMask(descriptor->stencilWriteMask);
        }

    }  // anonymous namespace

    RenderPipeline::RenderPipeline(Device* device, const RenderPipelineDescriptor* descriptor)
        : RenderPipelineBase(device, descriptor),
          mGlPrimitiveTopology(GLPrimitiveTopology(GetPrimitiveTopology())) {
        PerStage<const ShaderModule*> modules(nullptr);
        modules[dawn::ShaderStage::Vertex] = ToBackend(descriptor->vertexStage->module);
        modules[dawn::ShaderStage::Fragment] = ToBackend(descriptor->fragmentStage->module);

        PipelineGL::Initialize(ToBackend(GetLayout()), modules);
    }

    GLenum RenderPipeline::GetGLPrimitiveTopology() const {
        return mGlPrimitiveTopology;
    }

    void RenderPipeline::ApplyNow(PersistentPipelineState& persistentPipelineState) {
        PipelineGL::ApplyNow();

        auto inputState = ToBackend(GetInputState());
        glBindVertexArray(inputState->GetVAO());

        ApplyDepthStencilState(GetDepthStencilStateDescriptor(), &persistentPipelineState);

        for (uint32_t attachmentSlot : IterateBitSet(GetColorAttachmentsMask())) {
            ApplyBlendState(attachmentSlot, GetBlendStateDescriptor(attachmentSlot));
        }
    }

}}  // namespace dawn_native::opengl
