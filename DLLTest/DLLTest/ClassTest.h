#pragma once

#ifndef EXPORT
#define EXPORT _declspec(dllexport)
#endif

#ifndef IMPORT
#define IMPORT _declspec(dllimport)
#endif

#ifdef DLL_FILE
class EXPORT CTest
#else
class IMPORT CTest
#endif
{
public:
	CTest();
	~CTest();
	int m_nTest;
};