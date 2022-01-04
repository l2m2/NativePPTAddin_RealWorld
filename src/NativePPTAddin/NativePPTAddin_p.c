

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for NativePPTAddin.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "NativePPTAddin_i.h"

#define TYPE_FORMAT_STRING_SIZE   115                               
#define PROC_FORMAT_STRING_SIZE   205                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _NativePPTAddin_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } NativePPTAddin_MIDL_TYPE_FORMAT_STRING;

typedef struct _NativePPTAddin_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } NativePPTAddin_MIDL_PROC_FORMAT_STRING;

typedef struct _NativePPTAddin_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } NativePPTAddin_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const NativePPTAddin_MIDL_TYPE_FORMAT_STRING NativePPTAddin__MIDL_TypeFormatString;
extern const NativePPTAddin_MIDL_PROC_FORMAT_STRING NativePPTAddin__MIDL_ProcFormatString;
extern const NativePPTAddin_MIDL_EXPR_FORMAT_STRING NativePPTAddin__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IConnect_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IConnect_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRibbonCallback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRibbonCallback_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const NativePPTAddin_MIDL_PROC_FORMAT_STRING NativePPTAddin__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure ButtonClicked */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pControl */

/* 24 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLabel */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 52 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 54 */	NdrFcShort( 0x1 ),	/* 1 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pControl */

/* 60 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pbstrReturnedVal */

/* 66 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 72 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 74 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetVisible */

/* 78 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 80 */	NdrFcLong( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x9 ),	/* 9 */
/* 86 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x22 ),	/* 34 */
/* 92 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 94 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pControl */

/* 102 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 106 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pvarReturnedVal */

/* 108 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 110 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 112 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetImage */

/* 120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0xa ),	/* 10 */
/* 128 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 134 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 136 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pControl */

/* 144 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 146 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 148 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter ppdispImage */

/* 150 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 152 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 154 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Return value */

/* 156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 158 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CustomUILoadImage */

/* 162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0xb ),	/* 11 */
/* 170 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 176 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 178 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x1 ),	/* 1 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstrImageId */

/* 186 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 188 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 190 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter ppdispImage */

/* 192 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 194 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 196 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Return value */

/* 198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 200 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const NativePPTAddin_MIDL_TYPE_FORMAT_STRING NativePPTAddin__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  4 */	NdrFcLong( 0x20400 ),	/* 132096 */
/*  8 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 18 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 20 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 22 */	NdrFcShort( 0x26 ),	/* Offset= 38 (60) */
/* 24 */	
			0x13, 0x0,	/* FC_OP */
/* 26 */	NdrFcShort( 0x18 ),	/* Offset= 24 (50) */
/* 28 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 30 */	NdrFcShort( 0x2 ),	/* 2 */
/* 32 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 34 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 36 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 38 */	0x0 , 
			0x0,		/* 0 */
/* 40 */	NdrFcLong( 0x0 ),	/* 0 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 50 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 52 */	NdrFcShort( 0x8 ),	/* 8 */
/* 54 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (28) */
/* 56 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 58 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 60 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x4 ),	/* 4 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (24) */
/* 70 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 72 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 74 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 76 */	NdrFcShort( 0x2 ),	/* Offset= 2 (78) */
/* 78 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 80 */	NdrFcLong( 0x7bf80981 ),	/* 2079852929 */
/* 84 */	NdrFcShort( 0xbf32 ),	/* -16590 */
/* 86 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 88 */	0x8b,		/* 139 */
			0xbb,		/* 187 */
/* 90 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 92 */	0x0,		/* 0 */
			0x30,		/* 48 */
/* 94 */	0xc,		/* 12 */
			0xab,		/* 171 */
/* 96 */	
			0x11, 0x0,	/* FC_RP */
/* 98 */	NdrFcShort( 0x6 ),	/* Offset= 6 (104) */
/* 100 */	
			0x12, 0x0,	/* FC_UP */
/* 102 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (50) */
/* 104 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x4 ),	/* 4 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (100) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IConnect, ver. 0.0,
   GUID={0x3aba0b66,0xa87b,0x45dd,{0x9d,0xed,0xda,0x96,0x37,0xfb,0x88,0xd8}} */

#pragma code_seg(".orpc")
static const unsigned short IConnect_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IConnect_ProxyInfo =
    {
    &Object_StubDesc,
    NativePPTAddin__MIDL_ProcFormatString.Format,
    &IConnect_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IConnect_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    NativePPTAddin__MIDL_ProcFormatString.Format,
    &IConnect_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IConnectProxyVtbl = 
{
    0,
    &IID_IConnect,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IConnect_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IConnectStubVtbl =
{
    &IID_IConnect,
    &IConnect_ServerInfo,
    7,
    &IConnect_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IRibbonCallback, ver. 0.0,
   GUID={0xCE895442,0x9981,0x4315,{0xAA,0x85,0x4B,0x9A,0x5C,0x77,0x39,0xD8}} */

#pragma code_seg(".orpc")
static const unsigned short IRibbonCallback_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    78,
    120,
    162
    };

static const MIDL_STUBLESS_PROXY_INFO IRibbonCallback_ProxyInfo =
    {
    &Object_StubDesc,
    NativePPTAddin__MIDL_ProcFormatString.Format,
    &IRibbonCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRibbonCallback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    NativePPTAddin__MIDL_ProcFormatString.Format,
    &IRibbonCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IRibbonCallbackProxyVtbl = 
{
    &IRibbonCallback_ProxyInfo,
    &IID_IRibbonCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IRibbonCallback::ButtonClicked */ ,
    (void *) (INT_PTR) -1 /* IRibbonCallback::GetLabel */ ,
    (void *) (INT_PTR) -1 /* IRibbonCallback::GetVisible */ ,
    (void *) (INT_PTR) -1 /* IRibbonCallback::GetImage */ ,
    (void *) (INT_PTR) -1 /* IRibbonCallback::CustomUILoadImage */
};


static const PRPC_STUB_FUNCTION IRibbonCallback_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IRibbonCallbackStubVtbl =
{
    &IID_IRibbonCallback,
    &IRibbonCallback_ServerInfo,
    12,
    &IRibbonCallback_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    NativePPTAddin__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _NativePPTAddin_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IRibbonCallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IConnectProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _NativePPTAddin_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IRibbonCallbackStubVtbl,
    ( CInterfaceStubVtbl *) &_IConnectStubVtbl,
    0
};

PCInterfaceName const _NativePPTAddin_InterfaceNamesList[] = 
{
    "IRibbonCallback",
    "IConnect",
    0
};

const IID *  const _NativePPTAddin_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _NativePPTAddin_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _NativePPTAddin, pIID, n)

int __stdcall _NativePPTAddin_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _NativePPTAddin, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _NativePPTAddin, 2, *pIndex )
    
}

const ExtendedProxyFileInfo NativePPTAddin_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _NativePPTAddin_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _NativePPTAddin_StubVtblList,
    (const PCInterfaceName * ) & _NativePPTAddin_InterfaceNamesList,
    (const IID ** ) & _NativePPTAddin_BaseIIDList,
    & _NativePPTAddin_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

