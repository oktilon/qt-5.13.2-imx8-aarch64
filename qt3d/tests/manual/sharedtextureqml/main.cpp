/****************************************************************************
**
** Copyright (C) 2018 Klaralvdalens Datakonsult AB (KDAB).
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt3D module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QApplication>
#include <QtQml/QQmlContext>
#include <QtQuick/QQuickView>
#include <Qt3DRender/QAbstractTexture>
#include <QWindow>
#include <QTimer>

#include <QQuickView>
#include "videoplayer.h"


template<typename Obj>
QHash<int, QString> enumToNameMap(const char *enumName)
{
    const QMetaObject metaObj = Obj::staticMetaObject;
    const int indexOfEnum = metaObj.indexOfEnumerator(enumName);
    const QMetaEnum metaEnum = metaObj.enumerator(indexOfEnum);
    const int keysCount = metaEnum.keyCount();

    QHash<int, QString> v;
    v.reserve(keysCount);
    for (int i = 0; i < keysCount; ++i)
        v[metaEnum.value(i)] = metaEnum.key(i);
    return v;
}


class EnumNameMapper : public QObject
{
    Q_OBJECT

public:
    Q_INVOKABLE QString statusName(int v) const { return m_statusMap.value(v); }
    Q_INVOKABLE QString formatName(int v) const { return m_formatMap.value(v); }
    Q_INVOKABLE QString targetName(int v) const { return m_targetMap.value(v); }

private:
    const QHash<int, QString> m_statusMap = enumToNameMap<Qt3DRender::QAbstractTexture>("Status");
    const QHash<int, QString> m_formatMap = enumToNameMap<Qt3DRender::QAbstractTexture>("TextureFormat");
    const QHash<int, QString> m_targetMap = enumToNameMap<Qt3DRender::QAbstractTexture>("Target");
};

int main(int argc, char* argv[])
{
    QSurfaceFormat format = QSurfaceFormat::defaultFormat();
    format.setMajorVersion(4);
    format.setMinorVersion(5);
    format.setDepthBufferSize(16);
    format.setStencilBufferSize(8);
    format.setProfile(QSurfaceFormat::CoreProfile);
    format.setRenderableType(QSurfaceFormat::OpenGL);
    QSurfaceFormat::setDefaultFormat(format);


    // Make the OpenGLWidget's shared context be qt_gl_global_share_context
    QApplication::setAttribute(Qt::AA_ShareOpenGLContexts);
    QApplication app(argc, argv);

    // Multimedia player
    TextureWidget textureWidget;
    VideoPlayerThread *videoPlayer = new VideoPlayerThread(&textureWidget);
    videoPlayer->start();

    textureWidget.resize(800, 600);
    textureWidget.show();

    // Qt3D QtQuick Scene (uses qt_global_share_context by default)
    QQuickView view;
    QQmlContext *ctx = view.rootContext();
    EnumNameMapper mapper;
    ctx->setContextProperty(QStringLiteral("_nameMapper"), &mapper);
    ctx->setContextProperty(QStringLiteral("_textureWidget"), &textureWidget);

    view.resize(800, 600);
    view.setSource(QUrl("qrc:/main.qml"));
    view.show();

    return app.exec();
}

#include "main.moc"
