

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IConnect,0x3aba0b66,0xa87b,0x45dd,0x9d,0xed,0xda,0x96,0x37,0xfb,0x88,0xd8);


MIDL_DEFINE_GUID(IID, LIBID_NativePPTAddinLib,0x88a0e8ac,0x0fbd,0x4973,0xa8,0x24,0x21,0x0f,0x27,0x2d,0x52,0x40);


MIDL_DEFINE_GUID(CLSID, CLSID_Connect,0x076d6ae3,0x6180,0x44c1,0x84,0xdb,0x31,0x9a,0x38,0x40,0xce,0xfb);


MIDL_DEFINE_GUID(IID, IID_IRibbonCallback,0xCE895442,0x9981,0x4315,0xAA,0x85,0x4B,0x9A,0x5C,0x77,0x39,0xD8);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



