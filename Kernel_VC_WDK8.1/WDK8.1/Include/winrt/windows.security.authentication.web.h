

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

#ifndef __windows2Esecurity2Eauthentication2Eweb_h__
#define __windows2Esecurity2Eauthentication2Eweb_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_FWD_DEFINED__
#define ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult;

#endif 	/* ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    interface IWebAuthenticationResult;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    interface IWebAuthenticationBrokerStatics;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0000 */
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
namespace Authentication {
namespace Web {
class WebAuthenticationResult;
} /*Web*/
} /*Authentication*/
} /*Security*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Security {
namespace Authentication {
namespace Web {
interface IWebAuthenticationResult;
} /*Web*/
} /*Authentication*/
} /*Security*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0247 */




/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0247 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0247_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0247_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0001 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3c1ec44c-e942-54e5-bcd3-e329c951f595"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Web::WebAuthenticationResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::WebAuthenticationResult*, ABI::Windows::Security::Authentication::Web::IWebAuthenticationResult*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.Authentication.Web.WebAuthenticationResult>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Web::WebAuthenticationResult*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_USE */


/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0248 */




/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0248 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0248_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0248_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0002 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b34952ac-265e-5947-8735-e9318f4301ff"))
IAsyncOperation<ABI::Windows::Security::Authentication::Web::WebAuthenticationResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::WebAuthenticationResult*, ABI::Windows::Security::Authentication::Web::IWebAuthenticationResult*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.Authentication.Web.WebAuthenticationResult>"; }
};
typedef IAsyncOperation<ABI::Windows::Security::Authentication::Web::WebAuthenticationResult*> __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_t;
#define ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Foundation {
class Uri;
} /*Foundation*/
} /*Windows*/
}
#endif

#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CWebAuthenticationStatus __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CWebAuthenticationStatus;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CWebAuthenticationOptions __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CWebAuthenticationOptions;


#endif /* end if !defined(__cplusplus) */


#endif



/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0002 */
/* [local] */ 



#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    
                    typedef enum WebAuthenticationStatus WebAuthenticationStatus;
                    
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    
                    typedef enum WebAuthenticationOptions WebAuthenticationOptions;
                    
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0249 */




/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0249 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0249_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0249_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0003 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0003_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3c1ec44c-e942-54e5-bcd3-e329c951f595")
    __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResultVtbl;

    interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0004 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult */


/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0004 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0250 */




/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0250 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0250_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0250_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0005 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0005 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0005_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b34952ac-265e-5947-8735-e9318f4301ff")
    __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Windows::Security::Authentication::Web::IWebAuthenticationResult **results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult **results);
        
        END_INTERFACE
    } __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResultVtbl;

    interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult
    {
        CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0006 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult */
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CWebAuthenticationStatus
    {
        WebAuthenticationStatus_Success	= 0,
        WebAuthenticationStatus_UserCancel	= 1,
        WebAuthenticationStatus_ErrorHttp	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CWebAuthenticationOptions
    {
        WebAuthenticationOptions_None	= 0,
        WebAuthenticationOptions_SilentMode	= 0x1,
        WebAuthenticationOptions_UseTitle	= 0x2,
        WebAuthenticationOptions_UseHttpPost	= 0x4,
        WebAuthenticationOptions_UseCorporateNetwork	= 0x8
    } ;
#endif /* end if !defined(__cplusplus) */

#else
namespace ABI {
namespace Windows {
namespace Security {
namespace Authentication {
namespace Web {
enum WebAuthenticationOptions;
DEFINE_ENUM_FLAG_OPERATORS(WebAuthenticationOptions)
} /*Web*/
} /*Authentication*/
} /*Security*/
} /*Windows*/
}
#endif
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_IWebAuthenticationResult[] = L"Windows.Security.Authentication.Web.IWebAuthenticationResult";
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0006 */
/* [local] */ 

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    
                    /* [v1_enum] */ 
                    enum WebAuthenticationStatus
                        {
                            WebAuthenticationStatus_Success	= 0,
                            WebAuthenticationStatus_UserCancel	= 1,
                            WebAuthenticationStatus_ErrorHttp	= 2
                        } ;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    
                    /* [v1_enum] */ 
                    enum WebAuthenticationOptions
                        {
                            WebAuthenticationOptions_None	= 0,
                            WebAuthenticationOptions_SilentMode	= 0x1,
                            WebAuthenticationOptions_UseTitle	= 0x2,
                            WebAuthenticationOptions_UseHttpPost	= 0x4,
                            WebAuthenticationOptions_UseCorporateNetwork	= 0x8
                        } ;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0006_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult */
/* [uuid][object] */ 



/* interface ABI::Windows::Security::Authentication::Web::IWebAuthenticationResult */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Security {
                namespace Authentication {
                    namespace Web {
                        
                        MIDL_INTERFACE("64002B4B-EDE9-470A-A5CD-0323FAF6E262")
                        IWebAuthenticationResult : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ResponseData( 
                                /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ResponseStatus( 
                                /* [out][retval] */ __RPC__out ABI::Windows::Security::Authentication::Web::WebAuthenticationStatus *value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ResponseErrorDetail( 
                                /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IWebAuthenticationResult = __uuidof(IWebAuthenticationResult);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResponseData )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResponseStatus )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CWebAuthenticationStatus *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResponseErrorDetail )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResultVtbl;

    interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult
    {
        CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_get_ResponseData(This,value)	\
    ( (This)->lpVtbl -> get_ResponseData(This,value) ) 

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_get_ResponseStatus(This,value)	\
    ( (This)->lpVtbl -> get_ResponseStatus(This,value) ) 

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_get_ResponseErrorDetail(This,value)	\
    ( (This)->lpVtbl -> get_ResponseErrorDetail(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0007 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics[] = L"Windows.Security.Authentication.Web.IWebAuthenticationBrokerStatics";
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0007 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0007_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Security {
                namespace Authentication {
                    namespace Web {
                        
                        MIDL_INTERFACE("2F149F1A-E673-40B5-BC22-201A6864A37B")
                        IWebAuthenticationBrokerStatics : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE AuthenticateWithCallbackUriAsync( 
                                /* [in] */ ABI::Windows::Security::Authentication::Web::WebAuthenticationOptions options,
                                /* [in] */ __RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass *requestUri,
                                /* [in] */ __RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass *callbackUri,
                                /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult **asyncInfo) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE AuthenticateWithoutCallbackUriAsync( 
                                /* [in] */ ABI::Windows::Security::Authentication::Web::WebAuthenticationOptions options,
                                /* [in] */ __RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass *requestUri,
                                /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult **asyncInfo) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE GetCurrentApplicationCallbackUri( 
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass **callbackUri) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IWebAuthenticationBrokerStatics = __uuidof(IWebAuthenticationBrokerStatics);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *AuthenticateWithCallbackUriAsync )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics * This,
            /* [in] */ __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CWebAuthenticationOptions options,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass *requestUri,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass *callbackUri,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult **asyncInfo);
        
        HRESULT ( STDMETHODCALLTYPE *AuthenticateWithoutCallbackUriAsync )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics * This,
            /* [in] */ __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CWebAuthenticationOptions options,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass *requestUri,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CWebAuthenticationResult **asyncInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentApplicationCallbackUri )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass **callbackUri);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStaticsVtbl;

    interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics_AuthenticateWithCallbackUriAsync(This,options,requestUri,callbackUri,asyncInfo)	\
    ( (This)->lpVtbl -> AuthenticateWithCallbackUriAsync(This,options,requestUri,callbackUri,asyncInfo) ) 

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics_AuthenticateWithoutCallbackUriAsync(This,options,requestUri,asyncInfo)	\
    ( (This)->lpVtbl -> AuthenticateWithoutCallbackUriAsync(This,options,requestUri,asyncInfo) ) 

#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics_GetCurrentApplicationCallbackUri(This,callbackUri)	\
    ( (This)->lpVtbl -> GetCurrentApplicationCallbackUri(This,callbackUri) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationBrokerStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0008 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_WebAuthenticationResult_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_WebAuthenticationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_WebAuthenticationResult[] = L"Windows.Security.Authentication.Web.WebAuthenticationResult";
#endif
#ifndef RUNTIMECLASS_Windows_Security_Authentication_Web_WebAuthenticationBroker_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Web_WebAuthenticationBroker_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Web_WebAuthenticationBroker[] = L"Windows.Security.Authentication.Web.WebAuthenticationBroker";
#endif


/* interface __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0008 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Eauthentication2Eweb_0000_0008_v0_0_s_ifspec;

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


