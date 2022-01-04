// dllmain.cpp: DllMain 的实现。

#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "NativePPTAddin_i.h"
#include "dllmain.h"

CNativePPTAddinModule _AtlModule;

HINSTANCE g_hInstance;

// DLL 入口点
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
    // 修复在WPS上无法正常显示图标的问题
    // https://stackoverflow.com/questions/9163372/bitmapfromfile-method-returns-null-on-x86/9165501
    Gdiplus::GdiplusStartupInput gdiplusStartupInput;
    ULONG_PTR gdiplusToken;
    Gdiplus::GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);

    g_hInstance = hInstance;
    return _AtlModule.DllMain(dwReason, lpReserved);
}


