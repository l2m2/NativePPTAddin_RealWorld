#include "pch.h"
#include "ResourceUtil.h"

HRESULT ResourceUtil::HrGetResource(int nId, LPCTSTR lpType, LPVOID * ppvResourceData, DWORD * pdwSizeInBytes)
{
    HMODULE hModule = _AtlBaseModule.GetModuleInstance();
    if (!hModule)
        return E_UNEXPECTED;
    HRSRC hRsrc = FindResource(hModule, MAKEINTRESOURCE(nId), lpType);
    if (!hRsrc)
        return HRESULT_FROM_WIN32(GetLastError());
    HGLOBAL hGlobal = LoadResource(hModule, hRsrc);
    if (!hGlobal)
        return HRESULT_FROM_WIN32(GetLastError());
    *pdwSizeInBytes = SizeofResource(hModule, hRsrc);
    *ppvResourceData = LockResource(hGlobal);
    return S_OK;
}

BSTR ResourceUtil::GetXMLResource(int nId)
{
    LPVOID pResourceData = NULL;
    DWORD dwSizeInBytes = 0;
    HRESULT hr = HrGetResource(nId, TEXT("XML"),
        &pResourceData, &dwSizeInBytes);
    if (FAILED(hr))
        return NULL;
    // Assumes that the data is not stored in Unicode.
    CComBSTR cbstr(dwSizeInBytes, reinterpret_cast<LPCSTR>(pResourceData));
    return cbstr.Detach();
}

SAFEARRAY * ResourceUtil::GetOFSResource(int nId)
{
    LPVOID pResourceData = NULL;
    DWORD dwSizeInBytes = 0;
    if (FAILED(HrGetResource(nId, TEXT("OFS"),
        &pResourceData, &dwSizeInBytes)))
        return NULL;
    SAFEARRAY* psa;
    SAFEARRAYBOUND dim = { dwSizeInBytes, 0 };
    psa = SafeArrayCreate(VT_UI1, 1, &dim);
    if (psa == NULL)
        return NULL;
    BYTE* pSafeArrayData;
    SafeArrayAccessData(psa, (void**)&pSafeArrayData);
    memcpy((void*)pSafeArrayData, pResourceData, dwSizeInBytes);
    SafeArrayUnaccessData(psa);
    return psa;
}

HRESULT ResourceUtil::HrGetImageFromResource(int nId, LPCTSTR lpType, IPictureDisp ** ppdispImage)
{
    LPVOID pResourceData = NULL;
    DWORD len = 0;
    HRESULT hr = HrGetResource(nId, lpType, &pResourceData, &len);
    if (FAILED(hr)) {
        return E_UNEXPECTED;
    }

    IStream* pStream = nullptr;
    HGLOBAL hGlobal = nullptr;

    // copy image bytes into a real hglobal memory handle
    hGlobal = ::GlobalAlloc(GHND, len);
    if (hGlobal) {
        void* pBuffer = ::GlobalLock(hGlobal);
        if (pBuffer) {
            memcpy(pBuffer, reinterpret_cast<BYTE*>(pResourceData), len);
            HRESULT hr = CreateStreamOnHGlobal(hGlobal, TRUE, &pStream);
            if (SUCCEEDED(hr)) {
                // pStream now owns the global handle and will invoke GlobalFree on release
                hGlobal = nullptr;

                PICTDESC pic;
                memset(&pic, 0, sizeof pic);
                Gdiplus::Bitmap *png = Gdiplus::Bitmap::FromStream(pStream);
                HBITMAP hMap = NULL;
                png->GetHBITMAP(Gdiplus::Color(), &hMap);
                pic.picType = PICTYPE_BITMAP;
                pic.bmp.hbitmap = hMap;

                OleCreatePictureIndirect(&pic, IID_IPictureDisp, true, (LPVOID*)ppdispImage);
            }
        }
    }

    if (pStream) {
        pStream->Release();
        pStream = nullptr;
    }

    if (hGlobal) {
        GlobalFree(hGlobal);
        hGlobal = nullptr;
    }

    return S_OK;
}

HRESULT ResourceUtil::HrGetImageFromLocal(LPCWSTR pstrFilePath, IPictureDisp ** ppdispImage)
{
    PICTDESC pic;
    memset(&pic, 0, sizeof pic);
    Gdiplus::Bitmap *png = Gdiplus::Bitmap::FromFile(pstrFilePath);
    HBITMAP hMap = NULL;
    png->GetHBITMAP(Gdiplus::Color(), &hMap);
    pic.picType = PICTYPE_BITMAP;
    pic.bmp.hbitmap = hMap;
    OleCreatePictureIndirect(&pic, IID_IPictureDisp, true, (LPVOID*)ppdispImage);
    return S_OK;
}
