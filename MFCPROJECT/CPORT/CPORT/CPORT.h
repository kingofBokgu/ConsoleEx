
// CPORT.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CCPORTApp:
// �� Ŭ������ ������ ���ؼ��� CPORT.cpp�� �����Ͻʽÿ�.
//

class CCPORTApp : public CWinApp
{
public:
	CCPORTApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CCPORTApp theApp;