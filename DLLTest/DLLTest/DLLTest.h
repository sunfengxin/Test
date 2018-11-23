#pragma once

#ifndef EXPORT
#define EXPORT _declspec(dllexport)
#endif

#ifndef IMPORT
#define IMPORT _declspec(dllimport)
#endif

extern "C" int EXPORT add(int x,int y);

