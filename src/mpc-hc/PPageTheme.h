/*
 * (C) 2003-2006 Gabest
 * (C) 2006-2012, 2016 see Authors.txt
 *
 * This file is part of MPC-HC.
 *
 * MPC-HC is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * MPC-HC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

// CPPageTheme dialog

#include "CMPCThemePPageBase.h"
#include "CMPCThemeSpinButtonCtrl.h"

class CPPageTheme : public CMPCThemePPageBase
{
    DECLARE_DYNAMIC(CPPageTheme)

private:
    BOOL m_bUseModernTheme;
    int m_iModernSeekbarHeight;
    CMPCThemeSpinButtonCtrl m_ModernSeekbarHeightCtrl;
    CMPCThemeComboBox m_ThemeMode;
    int m_iThemeMode;
public:
    CPPageTheme();
    virtual ~CPPageTheme();

    // Dialog Data
    enum { IDD = IDD_PPAGETHEME };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
    virtual BOOL OnInitDialog();
    virtual BOOL OnApply();

    DECLARE_MESSAGE_MAP()

public:
};
