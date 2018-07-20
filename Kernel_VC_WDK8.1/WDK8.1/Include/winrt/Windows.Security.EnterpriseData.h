

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

#ifndef __windows2Esecurity2Eenterprisedata_h__
#define __windows2Esecurity2Eenterprisedata_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_FWD_DEFINED__
#define ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus;

#endif 	/* ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IFileRevocationManagerStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Security {
namespace EnterpriseData {
enum FileProtectionStatus;
} /*EnterpriseData*/
} /*Security*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0580 */




/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0580 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0580_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0580_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0001 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e104f25b-b957-5ed4-b1c5-1993604cfeae"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Security::EnterpriseData::FileProtectionStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Security::EnterpriseData::FileProtectionStatus> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.EnterpriseData.FileProtectionStatus>"; }
};
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Security::EnterpriseData::FileProtectionStatus> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_USE */


/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0581 */




/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0581 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0581_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0581_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0002 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("033efe7c-709e-53a8-8e64-cdab6bd1ed59"))
IAsyncOperation<enum ABI::Windows::Security::EnterpriseData::FileProtectionStatus> : IAsyncOperation_impl<enum ABI::Windows::Security::EnterpriseData::FileProtectionStatus> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.EnterpriseData.FileProtectionStatus>"; }
};
typedef IAsyncOperation<enum ABI::Windows::Security::EnterpriseData::FileProtectionStatus> __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_t;
#define ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_USE */


/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0582 */




/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0582 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0582_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0582_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0003 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#define DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a"))
IAsyncOperationCompletedHandler<bool> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Boolean>"; }
};
typedef IAsyncOperationCompletedHandler<bool> __FIAsyncOperationCompletedHandler_1_boolean_t;
#define ____FIAsyncOperationCompletedHandler_1_boolean_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_boolean_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_boolean_USE */


/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0583 */




/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0583 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0583_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0583_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0004 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_boolean_USE
#define DEF___FIAsyncOperation_1_boolean_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a"))
IAsyncOperation<bool> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Boolean>"; }
};
typedef IAsyncOperation<bool> __FIAsyncOperation_1_boolean_t;
#define ____FIAsyncOperation_1_boolean_FWD_DEFINED__
#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::__FIAsyncOperation_1_boolean_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_boolean_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Estorage_h__)
#include <Windows.Storage.h>
#endif // !defined(__windows2Estorage_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)

#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CFileProtectionStatus __x_ABI_CWindows_CSecurity_CEnterpriseData_CFileProtectionStatus;


#endif /* end if !defined(__cplusplus) */


#endif



/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0004 */
/* [local] */ 



#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                
                typedef enum FileProtectionStatus FileProtectionStatus;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0584 */




/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0584 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0584_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0584_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0005 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0005 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0005_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e104f25b-b957-5ed4-b1c5-1993604cfeae")
    __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatusVtbl;

    interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0006 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus */


/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0006 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0006_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0585 */




/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0585 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0585_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0585_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0007 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0007 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0007_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("033efe7c-709e-53a8-8e64-cdab6bd1ed59")
    __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__out enum ABI::Windows::Security::EnterpriseData::FileProtectionStatus *results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This,
            /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CFileProtectionStatus *results);
        
        END_INTERFACE
    } __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatusVtbl;

    interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus
    {
        CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0008 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus */
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CFileProtectionStatus
    {
        FileProtectionStatus_Undetermined	= 0,
        FileProtectionStatus_Unprotected	= 1,
        FileProtectionStatus_Revoked	= 2,
        FileProtectionStatus_Protected	= 3,
        FileProtectionStatus_ProtectedByOtherUser	= 4,
        FileProtectionStatus_ProtectedToOtherEnterprise	= 5,
        FileProtectionStatus_NotProtectable	= 6
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileRevocationManagerStatics[] = L"Windows.Security.EnterpriseData.IFileRevocationManagerStatics";
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0008 */
/* [local] */ 

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                
                /* [v1_enum] */ 
                enum FileProtectionStatus
                    {
                        FileProtectionStatus_Undetermined	= 0,
                        FileProtectionStatus_Unprotected	= 1,
                        FileProtectionStatus_Revoked	= 2,
                        FileProtectionStatus_Protected	= 3,
                        FileProtectionStatus_ProtectedByOtherUser	= 4,
                        FileProtectionStatus_ProtectedToOtherEnterprise	= 5,
                        FileProtectionStatus_NotProtectable	= 6
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0008_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Security::EnterpriseData::IFileRevocationManagerStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Security {
                namespace EnterpriseData {
                    
                    MIDL_INTERFACE("256BBC3D-1C5D-4260-8C75-9144CFB78BA9")
                    IFileRevocationManagerStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE ProtectAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::IStorageItem *storageItem,
                            /* [in] */ __RPC__in HSTRING enterpriseIdentity,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus **operation) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CopyProtectionAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::IStorageItem *sourceStorageItem,
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::IStorageItem *targetStorageItem,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_boolean **operation) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE Revoke( 
                            /* [in] */ __RPC__in HSTRING enterpriseIdentity) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GetStatusAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::IStorageItem *storageItem,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus **operation) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IFileRevocationManagerStatics = __uuidof(IFileRevocationManagerStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *ProtectAsync )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem *storageItem,
            /* [in] */ __RPC__in HSTRING enterpriseIdentity,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus **operation);
        
        HRESULT ( STDMETHODCALLTYPE *CopyProtectionAsync )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem *sourceStorageItem,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem *targetStorageItem,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_boolean **operation);
        
        HRESULT ( STDMETHODCALLTYPE *Revoke )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
            /* [in] */ __RPC__in HSTRING enterpriseIdentity);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatusAsync )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem *storageItem,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus **operation);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStaticsVtbl;

    interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_ProtectAsync(This,storageItem,enterpriseIdentity,operation)	\
    ( (This)->lpVtbl -> ProtectAsync(This,storageItem,enterpriseIdentity,operation) ) 

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_CopyProtectionAsync(This,sourceStorageItem,targetStorageItem,operation)	\
    ( (This)->lpVtbl -> CopyProtectionAsync(This,sourceStorageItem,targetStorageItem,operation) ) 

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_Revoke(This,enterpriseIdentity)	\
    ( (This)->lpVtbl -> Revoke(This,enterpriseIdentity) ) 

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_GetStatusAsync(This,storageItem,operation)	\
    ( (This)->lpVtbl -> GetStatusAsync(This,storageItem,operation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0009 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_FileRevocationManager_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_FileRevocationManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_FileRevocationManager[] = L"Windows.Security.EnterpriseData.FileRevocationManager";
#endif


/* interface __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0009 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eenterprisedata_0000_0009_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

unsigned long             __RPC_USER  HSTRING_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree64(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


