

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __windows2Esystem2Eprofile_h__
#define __windows2Esystem2Eprofile_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface IHardwareToken;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface IHardwareIdentificationStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.Streams.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Esystem2Eprofile_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Estorage2Estreams_h__)
#include <Windows.Storage.Streams.h>
#endif // !defined(__windows2Estorage2Estreams_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)



#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace System {
namespace Profile {
class HardwareToken;
} /*Profile*/
} /*System*/
} /*Windows*/
}
#endif
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IHardwareToken[] = L"Windows.System.Profile.IHardwareToken";
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esystem2Eprofile_0000_0000 */
/* [local] */ 






extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Eprofile_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Eprofile_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken */
/* [uuid][object] */ 



/* interface ABI::Windows::System::Profile::IHardwareToken */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIHardwareToken;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                namespace Profile {
                    
                    MIDL_INTERFACE("28F6D4C0-FB12-40A4-8167-7F4E03D2724C")
                    IHardwareToken : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Signature( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Certificate( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer **value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IHardwareToken = __uuidof(IHardwareToken);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CProfile_CIHardwareTokenVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Signature )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer **value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CProfile_CIHardwareTokenVtbl;

    interface __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIHardwareTokenVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_get_Id(This,value)	\
    ( (This)->lpVtbl -> get_Id(This,value) ) 

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_get_Signature(This,value)	\
    ( (This)->lpVtbl -> get_Signature(This,value) ) 

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_get_Certificate(This,value)	\
    ( (This)->lpVtbl -> get_Certificate(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esystem2Eprofile_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IHardwareIdentificationStatics[] = L"Windows.System.Profile.IHardwareIdentificationStatics";
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esystem2Eprofile_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Eprofile_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Eprofile_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::System::Profile::IHardwareIdentificationStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                namespace Profile {
                    
                    MIDL_INTERFACE("971260E0-F170-4A42-BD55-A900B212DAE2")
                    IHardwareIdentificationStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetPackageSpecificToken( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *nonce,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::System::Profile::IHardwareToken **packageSpecificHardwareToken) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IHardwareIdentificationStatics = __uuidof(IHardwareIdentificationStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageSpecificToken )( 
            __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *nonce,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken **packageSpecificHardwareToken);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStaticsVtbl;

    interface __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_GetPackageSpecificToken(This,nonce,packageSpecificHardwareToken)	\
    ( (This)->lpVtbl -> GetPackageSpecificToken(This,nonce,packageSpecificHardwareToken) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esystem2Eprofile_0000_0002 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_System_Profile_HardwareToken_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_HardwareToken_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_HardwareToken[] = L"Windows.System.Profile.HardwareToken";
#endif
#ifndef RUNTIMECLASS_Windows_System_Profile_HardwareIdentification_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_HardwareIdentification_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_HardwareIdentification[] = L"Windows.System.Profile.HardwareIdentification";
#endif


/* interface __MIDL_itf_windows2Esystem2Eprofile_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Eprofile_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Eprofile_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


