/****************************************************************************
**
** Copyright (C) 2018 The Qt Company Ltd.
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

#ifndef LOGIN_DELEGATE_QT_H
#define LOGIN_DELEGATE_QT_H

#include "content/public/browser/content_browser_client.h"
#include "content/public/browser/login_delegate.h"
#include "content/public/browser/resource_request_info.h"
#include "url/gurl.h"

#include "web_contents_adapter_client.h"

namespace net {
class AuthChallengeInfo;
class AuthCredentials;
}

namespace QtWebEngineCore {

class AuthenticationDialogController;

class LoginDelegateQt : public content::LoginDelegate {
public:
    LoginDelegateQt(net::AuthChallengeInfo *authInfo,
                    content::ResourceRequestInfo::WebContentsGetter web_contents_getter,
                    GURL url,
                    bool first_auth_attempt,
                    LoginAuthRequiredCallback auth_required_callback);

    ~LoginDelegateQt();

    void triggerDialog();

    // LoginDelegate implementation
    void OnRequestCancelled() override;

    QUrl url() const;
    QString realm() const;
    QString host() const;
    int port() const;
    bool isProxy() const;

    void sendAuthToRequester(bool success, const QString &user, const QString &password);

private:
    void triggerDialogOnUI();
    void destroy();

    scoped_refptr<net::AuthChallengeInfo> m_authInfo;

    GURL m_url;
    LoginAuthRequiredCallback m_auth_required_callback;
    content::ResourceRequestInfo::WebContentsGetter m_webContentsGetter;

    // This member is used to keep authentication dialog controller alive until
    // authorization is sent or cancelled.
    QSharedPointer<AuthenticationDialogController> m_dialogController;
};

} // namespace QtWebEngineCore

#endif // LOGIN_DELEGATE_QT_H
