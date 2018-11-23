#pragma once
#include "afxwin.h"


// CDlgHello 对话框

class CDlgHello : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgHello)

public:
	CDlgHello(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgHello();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtHello();
	virtual BOOL OnInitDialog();
	CComboBox m_ComBox1;
	CComboBox m_ComBox2;
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnCbnSelchangeCombo2();
};
