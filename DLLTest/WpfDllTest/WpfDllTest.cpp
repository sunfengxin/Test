// WpfDllTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>  
#using "WpfApplication1.dll"  
using namespace std;
using namespace WpfApplication1;

int _tmain(int argc, _TCHAR* argv[])
{
	Class_wpf ^win = gcnew Class_wpf;
	win->classdlg();



	system("pause");
	return 0;
}

