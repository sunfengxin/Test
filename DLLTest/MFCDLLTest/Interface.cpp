#include "stdafx.h"
#include "MFCDLLTest.h"
#include "Interface.h"
#include "resource.h"
#include "DlgHello.h"
//
void ShowDlg()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	CDlgHello dlgHello;
	dlgHello.DoModal();
}
