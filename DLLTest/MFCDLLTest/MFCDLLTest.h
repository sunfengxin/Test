// MFCDLLTest.h : MFCDLLTest DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCDLLTestApp
// �йش���ʵ�ֵ���Ϣ������� MFCDLLTest.cpp
//

class CMFCDLLTestApp : public CWinApp
{
public:
	CMFCDLLTestApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
