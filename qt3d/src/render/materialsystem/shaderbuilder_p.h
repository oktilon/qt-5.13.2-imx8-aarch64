/****************************************************************************
**
** Copyright (C) 2017 Klaralvdalens Datakonsult AB (KDAB).
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

#ifndef QT3DRENDER_RENDER_SHADERBUILDER_H
#define QT3DRENDER_RENDER_SHADERBUILDER_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of other Qt classes.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <Qt3DRender/private/backendnode_p.h>
#include <Qt3DRender/private/qgraphicsapifilter_p.h>
#include <Qt3DCore/qpropertyupdatedchange.h>

QT_BEGIN_NAMESPACE

namespace Qt3DRender {

namespace Render {

class Q_3DRENDERSHARED_PRIVATE_EXPORT ShaderBuilder : public BackendNode
{
public:
    enum ShaderType {
        Vertex = 0,
        TessellationControl,
        TessellationEvaluation,
        Geometry,
        Fragment,
        Compute
    };

    static QString getPrototypesFile();
    static void setPrototypesFile(const QString &file);
    static QStringList getPrototypeNames();

    ShaderBuilder();
    ~ShaderBuilder();
    void cleanup();

    Qt3DCore::QNodeId shaderProgramId() const;
    QStringList enabledLayers() const;

    GraphicsApiFilterData graphicsApi() const;
    void setGraphicsApi(const GraphicsApiFilterData &graphicsApi);

    QUrl shaderGraph(ShaderType type) const;
    void setShaderGraph(ShaderType type, const QUrl &url);

    QByteArray shaderCode(ShaderType type) const;
    bool isShaderCodeDirty(ShaderType type) const;

    void generateCode(ShaderType type);

    void sceneChangeEvent(const Qt3DCore::QSceneChangePtr &e) override;

private:
    void initializeFromPeer(const Qt3DCore::QNodeCreatedChangeBasePtr &change) final;
    void setEnabledLayers(const QStringList &layers);

    GraphicsApiFilterData m_graphicsApi;
    Qt3DCore::QNodeId m_shaderProgramId;
    QStringList m_enabledLayers;
    QHash<ShaderType, QUrl> m_graphs;
    QHash<ShaderType, QByteArray> m_codes;
    QSet<ShaderType> m_dirtyTypes;
};

} // namespace Render
} // namespace Qt3DRender

QT_END_NAMESPACE

#endif // QT3DRENDER_RENDER_SHADERBUILDER_H
