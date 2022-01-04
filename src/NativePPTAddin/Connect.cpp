// Connect.cpp: CConnect 的实现

#include "pch.h"
#include "Connect.h"
#include <gdiplus.h>
#include "LoginDialog.h"

namespace {
void ShowLoginDialog()
{
    DuiLib::CPaintManagerUI::SetInstance(g_hInstance);
    TCHAR szPath[MAX_PATH] = { 0 };
    GetModuleFileName(g_hInstance, szPath, _countof(szPath));
    *_tcsrchr(szPath, _T('\\')) = 0;
    DuiLib::CPaintManagerUI::SetResourcePath(szPath);
    LoginDialog dialog;
    dialog.Create(::GetActiveWindow(), _T("登录"), UI_WNDSTYLE_DIALOG, WS_EX_WINDOWEDGE);
    dialog.CenterWindow();
    dialog.ShowModal();
    //DuiLib::CPaintManagerUI::MessageLoop();
}
} // End of anonymous namespace

// CConnect

CConnect::CConnect()
{
}

HRESULT CConnect::FinalConstruct()
{
    return S_OK;
}

void CConnect::FinalRelease()
{
}

STDMETHODIMP_(HRESULT __stdcall) CConnect::OnConnection(LPDISPATCH Application, ext_ConnectMode ConnectMode, LPDISPATCH AddInInst, SAFEARRAY** custom)
{
    LOG_INFO("");
    return S_OK;
}

STDMETHODIMP_(HRESULT __stdcall) CConnect::OnDisconnection(ext_DisconnectMode RemoveMode, SAFEARRAY** custom)
{
    LOG_INFO("");
    return S_OK;
}

STDMETHODIMP_(HRESULT __stdcall) CConnect::OnAddInsUpdate(SAFEARRAY** custom)
{
    LOG_INFO("");
    return S_OK;
}

STDMETHODIMP_(HRESULT __stdcall) CConnect::OnStartupComplete(SAFEARRAY** custom)
{
    LOG_INFO("");
    return S_OK;
}

STDMETHODIMP_(HRESULT __stdcall) CConnect::OnBeginShutdown(SAFEARRAY** custom)
{
    LOG_INFO("");
    return S_OK;
}

STDMETHODIMP_(HRESULT __stdcall) CConnect::GetCustomUI(BSTR RibbonID, BSTR* RibbonXml)
{
    if (!RibbonXml)
        return E_POINTER;
    *RibbonXml = ResourceUtil::GetXMLResource(IDR_XML1);
    return S_OK;
}

STDMETHODIMP_(HRESULT __stdcall) CConnect::ButtonClicked(IDispatch* control)
{
    CComQIPtr<IRibbonControl> ribbonCtl(control);
    CComBSTR idStr;
    if (ribbonCtl->get_Id(&idStr) != S_OK)
        return S_FALSE;
    if (idStr == OLESTR("loginButton")) {
        ShowLoginDialog();
    } else if (idStr == OLESTR("uploadButton")) {
        WCHAR msg[64];
        swprintf_s(msg, L"I am uploadButton");
        MessageBoxW(NULL, msg, L"NativePPTAddin", MB_OK);
    }
    return S_OK;
}

STDMETHODIMP_(HRESULT __stdcall) CConnect::GetLabel(IDispatch* control, BSTR* returnedVal)
{
    CComQIPtr<IRibbonControl> ribbonCtl(control);
    CComBSTR idStr;
    if (ribbonCtl->get_Id(&idStr) != S_OK)
        return S_FALSE;
    CComBSTR ret;
    if (idStr == OLESTR("loginButton")) {
        ret = OLESTR("登录");
    } else if (idStr == OLESTR("uploadButton")) {
        ret = OLESTR("上传");
    } else if (idStr == OLESTR("updateButton")) {
        ret = OLESTR("更新");
    }
    *returnedVal = ret.Detach();
    return S_OK;
}

STDMETHODIMP_(HRESULT __stdcall) CConnect::GetVisible(IDispatch* control, VARIANT_BOOL* returnedVal)
{
    CComQIPtr<IRibbonControl> ribbonCtl(control);
    CComBSTR idStr;
    if (ribbonCtl->get_Id(&idStr) != S_OK)
        return S_FALSE;
    if (idStr == OLESTR("loginButton")) {
        *returnedVal = VARIANT_TRUE;
    } else if (idStr == OLESTR("uploadButton")) {
        *returnedVal = VARIANT_TRUE;
    } else {
        *returnedVal = VARIANT_TRUE;
    }
    return S_OK;
}

STDMETHODIMP_(HRESULT __stdcall) CConnect::GetImage(IDispatch* control, IPictureDisp** returnedVal)
{
    CComQIPtr<IRibbonControl> ribbonCtl(control);
    CComBSTR idStr;
    if (ribbonCtl->get_Id(&idStr) != S_OK)
        return S_FALSE;
    if (idStr == OLESTR("loginButton")) {
        // do nothing
        // 登录按钮使用image属性定义
    } else if (idStr == OLESTR("uploadButton")) {
        return ResourceUtil::HrGetImageFromResource(IDB_PNG_UPLOAD, TEXT("PNG"), returnedVal);
    } else if (idStr == OLESTR("updateButton")) {
        wstring bmp = PathUtil::GetImageDir() + L"update.bmp";
        return ResourceUtil::HrGetImageFromLocal(bmp.c_str(), returnedVal);
    }
    return S_OK;
}

STDMETHODIMP_(HRESULT __stdcall) CConnect::CustomUILoadImage(BSTR* imageId, IPictureDisp** returnedVal)
{
    return ResourceUtil::HrGetImageFromResource(_wtoi(*imageId), TEXT("PNG"), returnedVal);
}
