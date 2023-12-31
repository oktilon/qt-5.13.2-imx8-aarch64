/****************************************************************************
**
** Copyright (C) 2014 Klaralvdalens Datakonsult AB (KDAB).
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt3D module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "rendertargetselectornode_p.h"
#include <Qt3DRender/private/renderer_p.h>
#include <Qt3DCore/private/qchangearbiter_p.h>
#include <Qt3DRender/qrendertargetselector.h>
#include <Qt3DRender/private/qrendertargetselector_p.h>
#include <Qt3DRender/qrendertarget.h>
#include <Qt3DCore/qpropertyupdatedchange.h>
#include <Qt3DRender/private/renderlogging_p.h>
#include <Qt3DRender/qrendertargetoutput.h>

QT_BEGIN_NAMESPACE

using namespace Qt3DCore;

namespace Qt3DRender {
namespace Render {

RenderTargetSelector::RenderTargetSelector() :
    FrameGraphNode(FrameGraphNode::RenderTarget)
{
}

void RenderTargetSelector::initializeFromPeer(const Qt3DCore::QNodeCreatedChangeBasePtr &change)
{
    FrameGraphNode::initializeFromPeer(change);
    const auto typedChange = qSharedPointerCast<Qt3DCore::QNodeCreatedChange<QRenderTargetSelectorData>>(change);
    const auto &data = typedChange->data;
    m_renderTargetUuid = data.targetId;
    m_outputs = data.outputs;
}

void RenderTargetSelector::sceneChangeEvent(const Qt3DCore::QSceneChangePtr &e)
{
    qCDebug(Render::Framegraph) << Q_FUNC_INFO;
    if (e->type() == PropertyUpdated) {
        QPropertyUpdatedChangePtr propertyChange = qSharedPointerCast<QPropertyUpdatedChange>(e);
        if (propertyChange->propertyName() == QByteArrayLiteral("target")) {
            m_renderTargetUuid = propertyChange->value().value<QNodeId>();
            markDirty(AbstractRenderer::FrameGraphDirty);
        } else if (propertyChange->propertyName() == QByteArrayLiteral("outputs")) {
            m_outputs = propertyChange->value().value<QVector<Qt3DRender::QRenderTargetOutput::AttachmentPoint> >();
            markDirty(AbstractRenderer::FrameGraphDirty);
        }
    }
    FrameGraphNode::sceneChangeEvent(e);
}

} // namespace Render
} // namespace Qt3DRender

QT_END_NAMESPACE
