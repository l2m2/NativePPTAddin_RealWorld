#pragma once

#include "pch.h"

struct ResourceUtil
{
    static HRESULT HrGetResource(int nId, LPCTSTR lpType, LPVOID* ppvResourceData, DWORD* pdwSizeInBytes);
    static BSTR GetXMLResource(int nId);
    static SAFEARRAY* GetOFSResource(int nId);
    static HRESULT HrGetImageFromResource(int nId, LPCTSTR lpType, IPictureDisp ** ppdispImage);
    static HRESULT HrGetImageFromLocal(LPCWSTR pstrFilePath, IPictureDisp ** ppdispImage);
};

