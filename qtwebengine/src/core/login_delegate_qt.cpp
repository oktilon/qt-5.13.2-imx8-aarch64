/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtWebEngine module of the Qt Toolkit.
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

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE.Chromium file.

#include "login_delegate_qt.h"

#include "base/task/post_task.h"
#include "content/browser/web_contents/web_contents_impl.h"
#include "content/public/browser/browser_task_traits.h"
#include "content/public/browser/browser_thread.h"
#include "content/public/browser/render_view_host.h"
#include "content/public/browser/resource_dispatcher_host.h"
#include "content/public/browser/resource_request_info.h"
#include "content/public/browser/stream_info.h"
#include "extensions/buildflags/buildflags.h"
#if BUILDFLAG(ENABLE_EXTENSIONS)
#include "extensions/browser/info_map.h"
#include "extensions/common/extension.h"
#include "extensions/common/manifest_handlers/mime_types_handler.h"
#endif // BUILDFLAG(ENABLE_EXTENSIONS)

#include "net/url_request/url_request.h"

#include "authentication_dialog_controller.h"
#include "authentication_dialog_controller_p.h"
#if BUILDFLAG(ENABLE_EXTENSIONS)
#include "extensions/extension_system_qt.h"
#endif // BUILDFLAG(ENABLE_EXTENSIONS)
#include "resource_context_qt.h"
#include "type_conversion.h"
#include "web_contents_view_qt.h"
#include "web_engine_context.h"

namespace QtWebEngineCore {

LoginDelegateQt::LoginDelegateQt(
        net::AuthChallengeInfo *authInfo,
        content::ResourceRequestInfo::WebContentsGetter web_contents_getter,
        GURL url,
        bool first_auth_attempt,
        LoginAuthRequiredCallback auth_required_callback)
    : m_authInfo(authInfo)
    , m_url(url)
    , m_auth_required_callback(std::move(auth_required_callback))
    , m_webContentsGetter(web_contents_getter)
{
    Q_ASSERT(content::BrowserThread::CurrentlyOn(content::BrowserThread::IO));
}

LoginDelegateQt::~LoginDelegateQt()
{
    Q_ASSERT(m_dialogController.isNull());
}

void LoginDelegateQt::triggerDialog()
{
    base::PostTaskWithTraits(
            FROM_HERE, { content::BrowserThread::UI },
            base::BindOnce(&LoginDelegateQt::triggerDialogOnUI, this));
}

void LoginDelegateQt::OnRequestCancelled()
{
    destroy();
    // TODO: this should close native dialog, since page can be navigated somewhere else
}

QUrl LoginDelegateQt::url() const
{
    return toQt(m_url);
}

QString LoginDelegateQt::realm() const
{
    return QString::fromStdString(m_authInfo->realm);
}

QString LoginDelegateQt::host() const
{
    return QString::fromStdString(m_authInfo->challenger.host());
}

int LoginDelegateQt::port() const
{
    return m_authInfo->challenger.port();
}

bool LoginDelegateQt::isProxy() const
{
    return m_authInfo->is_proxy;
}

void LoginDelegateQt::triggerDialogOnUI()
{
    Q_ASSERT(content::BrowserThread::CurrentlyOn(content::BrowserThread::UI));

    if (isProxy()) {
        // workaround for 'ws' redefined symbols when including QNetworkProxy
        auto authentication = WebEngineContext::qProxyNetworkAuthentication(host(), port());
        if (std::get<0>(authentication)) {
            base::PostTaskWithTraits(
                    FROM_HERE, { content::BrowserThread::IO },
                    base::BindOnce(&LoginDelegateQt::sendAuthToRequester, this, true,
                                   std::get<1>(authentication), std::get<2>(authentication)));

            return;
        }
    }
    content::WebContentsImpl *webContents =
            static_cast<content::WebContentsImpl *>(m_webContentsGetter.Run());
    if (!webContents)
        return;
    WebContentsAdapterClient *client = WebContentsViewQt::from(webContents->GetView())->client();

    AuthenticationDialogControllerPrivate *dialogControllerData = new AuthenticationDialogControllerPrivate(this);
    m_dialogController.reset(new AuthenticationDialogController(dialogControllerData));
    client->authenticationRequired(m_dialogController);
}

void LoginDelegateQt::sendAuthToRequester(bool success, const QString &user, const QString &password)
{
    Q_ASSERT(content::BrowserThread::CurrentlyOn(content::BrowserThread::IO));

    if (!m_auth_required_callback.is_null()) {
        if (success)
            std::move(m_auth_required_callback).Run(net::AuthCredentials(toString16(user), toString16(password)));
        else
            std::move(m_auth_required_callback).Run(base::nullopt);
    }

    destroy();
}

void LoginDelegateQt::destroy()
{
    m_dialogController.reset();
    m_auth_required_callback.Reset();
}

} // namespace QtWebEngineCore
