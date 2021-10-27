#include "pch.h"
#include "PathUtil.h"

std::wstring PathUtil::GetApplicationDir()
{
    std::wstring temp;
    temp.resize(1024 * 4);
    LPWSTR pcTemp = (LPWSTR)temp.data();
    GetModuleFileName(g_hInstance, pcTemp, 1024);
    *_tcsrchr(pcTemp, _T('\\')) = _T('\0');
    _tcscat_s(pcTemp, 1024, _T("\\"));
    temp.resize(_tcslen(pcTemp));
    return temp;
}

std::wstring PathUtil::GetImageDir()
{
    return GetApplicationDir() + L"image\\";
}

std::wstring PathUtil::GetLogDir()
{
    std::wstring dir = GetApplicationDir() + L"logs\\";
    return dir;
}
