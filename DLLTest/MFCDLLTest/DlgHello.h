#pragma once
#include "afxwin.h"


// CDlgHello �Ի���

class CDlgHello : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgHello)

public:
	CDlgHello(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgHello();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtHello();
	virtual BOOL OnInitDialog();
	CComboBox m_ComBox1;
	CComboBox m_ComBox2;
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnCbnSelchangeCombo2();
};
