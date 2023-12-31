// Copyright 2014 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef XFA_FWL_THEME_CFWL_COMBOBOXTP_H_
#define XFA_FWL_THEME_CFWL_COMBOBOXTP_H_

#include "xfa/fwl/theme/cfwl_widgettp.h"

class CFWL_ComboBoxTP final : public CFWL_WidgetTP {
 public:
  CFWL_ComboBoxTP();
  ~CFWL_ComboBoxTP() override;

  // CFWL_WidgetTP
  void DrawBackground(const CFWL_ThemeBackground& pParams) override;

 private:
  void DrawDropDownButton(const CFWL_ThemeBackground& pParams,
                          uint32_t dwStates,
                          const CFX_Matrix& matrix);
  void DrawStretchHandler(const CFWL_ThemeBackground& pParams,
                          uint32_t dwStates,
                          const CFX_Matrix& matrix);
};

#endif  // XFA_FWL_THEME_CFWL_COMBOBOXTP_H_
