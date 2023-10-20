#pragma once

#ifndef __AFXWIN_H__
#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル

class CTrickApp : public CWinApp
{
public:
	CTrickApp();

public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};

extern CTrickApp theApp;
