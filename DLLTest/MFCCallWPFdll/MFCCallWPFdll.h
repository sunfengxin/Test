
// MFCCallWPFdll.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCCallWPFdllApp:
// �йش����ʵ�֣������ MFCCallWPFdll.cpp
//

class CMFCCallWPFdllApp : public CWinApp
{
public:
	CMFCCallWPFdllApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFCCallWPFdllApp theApp;