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

#ifndef QT3DCORE_QASPECTMANAGER_P_H
#define QT3DCORE_QASPECTMANAGER_P_H

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

#include <Qt3DCore/qnodecreatedchange.h>
#include <QtCore/QObject>
#include <QtCore/QScopedPointer>
#include <QtCore/QSemaphore>
#include <QtCore/QVariant>
#include <QtCore/QVector>

#include <Qt3DCore/private/qt3dcore_global_p.h>

QT_BEGIN_NAMESPACE

class QSurface;

namespace Qt3DCore {

class QNode;
class QEntity;
class QScheduler;
class QChangeArbiter;
class QAbstractAspect;
class QAbstractAspectJobManager;
class QSceneObserverInterface;
class QServiceLocator;

class Q_3DCORE_PRIVATE_EXPORT QAspectManager : public QObject
{
    Q_OBJECT
public:
    explicit QAspectManager(QObject *parent = 0);
    ~QAspectManager();

    void enterSimulationLoop();
    void exitSimulationLoop();

    bool isShuttingDown() const;

public Q_SLOTS:
    void initialize();
    void shutdown();

    void setRootEntity(Qt3DCore::QEntity *root, const QVector<Qt3DCore::QNodeCreatedChangeBasePtr> &changes);
    void registerAspect(Qt3DCore::QAbstractAspect *aspect);
    void unregisterAspect(Qt3DCore::QAbstractAspect *aspect);

    void exec();
    void quit();

public:
    const QVector<QAbstractAspect *> &aspects() const;
    QAbstractAspectJobManager *jobManager() const;
    QChangeArbiter *changeArbiter() const;
    QServiceLocator *serviceLocator() const;

private:
    QVector<QAbstractAspect *> m_aspects;
    QEntity *m_root;
    QVariantMap m_data;
    QScheduler *m_scheduler;
    QAbstractAspectJobManager *m_jobManager;
    QChangeArbiter *m_changeArbiter;
    QAtomicInt m_runSimulationLoop;
    QAtomicInt m_runMainLoop;
    QScopedPointer<QServiceLocator> m_serviceLocator;
    QSemaphore m_waitForEndOfSimulationLoop;
    QSemaphore m_waitForStartOfSimulationLoop;
    QSemaphore m_waitForEndOfExecLoop;
    QSemaphore m_waitForQuit;
};

} // namespace Qt3DCore

QT_END_NAMESPACE

#endif // QT3DCORE_QASPECTMANAGER_P_H
