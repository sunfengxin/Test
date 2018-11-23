// DlgHello.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCDLLTest.h"
#include "DlgHello.h"
#include "afxdialogex.h"


// CDlgHello 对话框

IMPLEMENT_DYNAMIC(CDlgHello, CDialogEx)

CDlgHello::CDlgHello(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgHello::IDD, pParent)
{

}

CDlgHello::~CDlgHello()
{
}

void CDlgHello::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, m_ComBox1);
	DDX_Control(pDX, IDC_COMBO2, m_ComBox2);
}


BEGIN_MESSAGE_MAP(CDlgHello, CDialogEx)
	ON_BN_CLICKED(IDC_BT_HELLO, &CDlgHello::OnBnClickedBtHello)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CDlgHello::OnCbnSelchangeCombo1)
	ON_CBN_SELCHANGE(IDC_COMBO2, &CDlgHello::OnCbnSelchangeCombo2)
END_MESSAGE_MAP()


// CDlgHello 消息处理程序
BOOL CDlgHello::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	m_ComBox1.AddString(_T("1"));
	m_ComBox1.AddString(_T("2"));
	m_ComBox2.AddString(_T("a"));
	m_ComBox2.AddString(_T("b"));
	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}

void CDlgHello::OnBnClickedBtHello()
{
	// TODO: 在此添加控件通知处理程序代码
	MessageBox(_T("Hello World!"));
}





void CDlgHello::OnCbnSelchangeCombo1()
{
	// TODO: 在此添加控件通知处理程序代码
	m_ComBox2.SetCurSel(m_ComBox1.GetCurSel());
}


void CDlgHello::OnCbnSelchangeCombo2()
{
	// TODO: 在此添加控件通知处理程序代码
	m_ComBox1.SetCurSel(m_ComBox2.GetCurSel());
}
