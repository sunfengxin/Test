// DLLCall.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "stdlib.h"
#include "..\\DLLTest\ClassTest.h"
#include <windows.h>
/*-------------------------动态调用---------------------------------------*/

//#include "stdio.h"
//#include "windows.h"
//typedef int(*lpAddFun)(int,int);//定义函数指针类型
//int _tmain(int argc, _TCHAR* argv[])
//{
//	HINSTANCE hDll;//Dll句柄
//	lpAddFun AddFun;//函数指针
//	hDll = LoadLibraryA("..\\Debug\\DLLTest.dll");
//	if (nullptr != hDll)
//	{
//		//AddFun = (lpAddFun)GetProcAddress(hDll,"add");
//		AddFun = (lpAddFun)GetProcAddress(hDll,(LPSTR)MAKEINTRESOURCE(4));
//		if (nullptr != AddFun)
//		{
//			int result = AddFun(2,3);
//			printf("\ncall add in dll:%d",result);			
//		}
//		FreeLibrary(hDll);
//		system("PAUSE");
//	}
//	return 0;
//}

/*-------------------------静态调用---------------------------------------*/
//#pragma comment(lib,"..\\Debug\\DLLTest.lib")
//extern "C" int __declspec(dllimport) add(int x,int y);
////CTest __declspec(dllimport) ;
//int _tmain(int argc, _TCHAR* argv[])
//{
//	CTest test;
//	int result = add(2,3);
//	printf("\n");
//	printf("%d",test.m_nTest);
//	printf("\n");
//	printf("%d",result);
//	printf("\n");
//	system("PAUSE");
//	return 0;
//}

/*-------------------------MFC DLL静态调用---------------------------------------*/
//#pragma comment(lib,"..\\Debug\\MFCDLLTest.lib")
//extern "C" void IMPORT ShowDlg();
//int _tmain(int argc,_TCHAR* argv[])
//{
//	ShowDlg();
//	return 0;
//}


/*-------------------------MFC DLL动态调用---------------------------------------*/

//#include "stdio.h"
//#include "windows.h"
//typedef void(*lpShowDlg)();//定义函数指针类型
//int _tmain(int argc, _TCHAR* argv[])
//{
//	HINSTANCE hDll;//Dll句柄
//	lpShowDlg ShowDlg;
//	hDll = LoadLibraryA("..\\Debug\\MFCDLLTest.dll");
//	if (nullptr != hDll)
//	{
//		//ShowDlg = (lpShowDlg)GetProcAddress(hDll,"ShowDlg");
//		ShowDlg = (lpShowDlg)GetProcAddress(hDll,(LPSTR)MAKEINTRESOURCE(1));
//		if (nullptr != ShowDlg)
//		{
//			ShowDlg();		
//		}
//		FreeLibrary(hDll);
//		//system("PAUSE");
//	}
//	return 0;
//}

#include <iostream>
#using "..\\Debug\\WpfApplication1.dll"
using namespace WpfApplication1;

//typedef void(*lpShowDlg)();//定义函数指针类型


DWORD WINAPI OpenWindow(LPVOID lpParameter)
{
	/*var app = new System.Windows.Applocation();
	var window = new System.Windows.Window();
	app.Run(window);*/
	Class_wpf ^win = gcnew Class_wpf;
	win->classdlg();
	return 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
	//HINSTANCE hDll;//Dll句柄
	//lpShowDlg ShowDlg;
	//hDll = LoadLibraryA("..\\Debug\\WpfApplication1.dll");
	//if (nullptr != hDll)
	//{
	//	//ShowDlg = (lpShowDlg)GetProcAddress(hDll,"ShowDlg");
	//	ShowDlg = (lpShowDlg)GetProcAddress(hDll,(LPSTR)MAKEINTRESOURCE(1));
	//	if (nullptr != ShowDlg)
	//	{
	//		ShowDlg();		
	//	}
	//	FreeLibrary(hDll);
	//	//system("PAUSE");
	//}
	//Class_wpf ^win = gcnew Class_wpf;
	
	/*CreateThread(NULL,0,OpenWindow,NULL,0,NULL);
	system("Pause");*/
	Class_wpf ^win = gcnew Class_wpf;
	win->classdlg();

	

	return 0;
}