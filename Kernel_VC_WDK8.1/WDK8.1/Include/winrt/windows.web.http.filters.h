

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

#ifndef __windows2Eweb2Ehttp2Efilters_h__
#define __windows2Eweb2Ehttp2Efilters_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    interface IHttpFilter;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    interface IHttpCacheControl;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                namespace Filters {
                    interface IHttpBaseProtocolFilter;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Security.Cryptography.Certificates.h"
#include "Windows.Web.Http.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif


/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0000 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0971 */




/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0971 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0971_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0971_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0001 */
/* [local] */ 

#ifndef DEF___FIReference_1_UINT64_USE
#define DEF___FIReference_1_UINT64_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6755e376-53bb-568b-a11d-17239868309e"))
IReference<UINT64> : IReference_impl<UINT64> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IReference`1<UInt64>"; }
};
typedef IReference<UINT64> __FIReference_1_UINT64_t;
#define ____FIReference_1_UINT64_FWD_DEFINED__
#define __FIReference_1_UINT64 ABI::Windows::Foundation::__FIReference_1_UINT64_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIReference_1_UINT64_USE */
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Web {
namespace Http {
class HttpResponseMessage;
} /*Http*/
} /*Web*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Web {
namespace Http {
interface IHttpResponseMessage;
} /*Http*/
} /*Web*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Web {
namespace Http {
struct HttpProgress;
} /*Http*/
} /*Web*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0001 */
/* [local] */ 






extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0972 */




/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0972 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0972_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0972_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0002 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("68e4606a-76ec-5816-b2fe-a04ecde4126a"))
IAsyncOperationProgressHandler<ABI::Windows::Web::Http::HttpResponseMessage*,struct ABI::Windows::Web::Http::HttpProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::HttpResponseMessage*, ABI::Windows::Web::Http::IHttpResponseMessage*>,struct ABI::Windows::Web::Http::HttpProgress> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Web.Http.HttpResponseMessage, Windows.Web.Http.HttpProgress>"; }
};
typedef IAsyncOperationProgressHandler<ABI::Windows::Web::Http::HttpResponseMessage*,struct ABI::Windows::Web::Http::HttpProgress> __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_t;
#define ____FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_FWD_DEFINED__
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_USE */


/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0973 */




/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0973 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0973_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0973_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0003 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("beadb572-f9a3-5e93-b6ca-e311b65933fc"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Http::HttpResponseMessage*,struct ABI::Windows::Web::Http::HttpProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::HttpResponseMessage*, ABI::Windows::Web::Http::IHttpResponseMessage*>,struct ABI::Windows::Web::Http::HttpProgress> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Web.Http.HttpResponseMessage, Windows.Web.Http.HttpProgress>"; }
};
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Http::HttpResponseMessage*,struct ABI::Windows::Web::Http::HttpProgress> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_t;
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_FWD_DEFINED__
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_USE */


/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0974 */




/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0974 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0974_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0974_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0004 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5d144364-77d7-5eca-8b09-936a69446652"))
IAsyncOperationWithProgress<ABI::Windows::Web::Http::HttpResponseMessage*,struct ABI::Windows::Web::Http::HttpProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Http::HttpResponseMessage*, ABI::Windows::Web::Http::IHttpResponseMessage*>,struct ABI::Windows::Web::Http::HttpProgress> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Web.Http.HttpResponseMessage, Windows.Web.Http.HttpProgress>"; }
};
typedef IAsyncOperationWithProgress<ABI::Windows::Web::Http::HttpResponseMessage*,struct ABI::Windows::Web::Http::HttpProgress> __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_t;
#define ____FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_FWD_DEFINED__
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress_USE */

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Security {
namespace Cryptography {
namespace Certificates {
enum ChainValidationResult;
} /*Certificates*/
} /*Cryptography*/
} /*Security*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0004 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0975 */




/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0975 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0975_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0975_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0005 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8bcad2b7-0e3b-5eae-bf69-e1f6d9c888f8"))
IIterator<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IIterator_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; }
};
typedef IIterator<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_FWD_DEFINED__
#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */


/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0005 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0976 */




/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0976 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0976_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0976_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0006 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2628f58f-3f02-54f2-808f-e1117709d6d0"))
IIterable<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IIterable_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; }
};
typedef IIterable<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_FWD_DEFINED__
#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */


/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0006 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0006_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0977 */




/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0977 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0977_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0977_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0007 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cb383486-c2bc-5756-912d-6a708a07e5bd"))
IVectorView<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IVectorView_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; }
};
typedef IVectorView<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_FWD_DEFINED__
#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */


/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0007 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0007_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0978 */




/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0978 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0978_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0978_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0008 */
/* [local] */ 

#ifndef DEF___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d7828cf7-4301-58d3-aab5-06e5eefcf79f"))
IVector<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IVector_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVector`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; }
};
typedef IVector<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define ____FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_FWD_DEFINED__
#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Esecurity2Ecredentials_h__)
#include <Windows.Security.Credentials.h>
#endif // !defined(__windows2Esecurity2Ecredentials_h__)
#if !defined(__windows2Esecurity2Ecryptography2Ecertificates_h__)
#include <Windows.Security.Cryptography.Certificates.h>
#endif // !defined(__windows2Esecurity2Ecryptography2Ecertificates_h__)
#if !defined(__windows2Eweb2Ehttp_h__)
#include <Windows.Web.Http.h>
#endif // !defined(__windows2Eweb2Ehttp_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Security {
namespace Credentials {
class PasswordCredential;
} /*Credentials*/
} /*Security*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Security {
namespace Cryptography {
namespace Certificates {
class Certificate;
} /*Certificates*/
} /*Cryptography*/
} /*Security*/
} /*Windows*/
}
#endif

#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult;


#endif /* end if !defined(__cplusplus) */


#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Web {
namespace Http {
class HttpCookieManager;
} /*Http*/
} /*Web*/
} /*Windows*/
}
#endif

#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHttpProgress __x_ABI_CWindows_CWeb_CHttp_CHttpProgress;

#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Web {
namespace Http {
class HttpRequestMessage;
} /*Http*/
} /*Web*/
} /*Windows*/
}
#endif

#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheReadBehavior __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheReadBehavior;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheWriteBehavior __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheWriteBehavior;


#endif /* end if !defined(__cplusplus) */


#endif



#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Web {
namespace Http {
namespace Filters {
class HttpCacheControl;
} /*Filters*/
} /*Http*/
} /*Web*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Web {
namespace Http {
namespace Filters {
class HttpBaseProtocolFilter;
} /*Filters*/
} /*Http*/
} /*Web*/
} /*Windows*/
}
#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheReadBehavior
    {
        HttpCacheReadBehavior_Default	= 0,
        HttpCacheReadBehavior_MostRecent	= 1,
        HttpCacheReadBehavior_OnlyFromCache	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheWriteBehavior
    {
        HttpCacheWriteBehavior_Default	= 0,
        HttpCacheWriteBehavior_NoCache	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpFilter[] = L"Windows.Web.Http.Filters.IHttpFilter";
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0008 */
/* [local] */ 





#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    
                    typedef enum ChainValidationResult ChainValidationResult;
                    
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
        namespace Web {
            namespace Http {
                
                typedef struct HttpProgress HttpProgress;
                
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
        namespace Web {
            namespace Http {
                namespace Filters {
                    
                    typedef enum HttpCacheReadBehavior HttpCacheReadBehavior;
                    
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
        namespace Web {
            namespace Http {
                namespace Filters {
                    
                    typedef enum HttpCacheWriteBehavior HttpCacheWriteBehavior;
                    
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
        namespace Web {
            namespace Http {
                namespace Filters {
                    
                    /* [v1_enum] */ 
                    enum HttpCacheReadBehavior
                        {
                            HttpCacheReadBehavior_Default	= 0,
                            HttpCacheReadBehavior_MostRecent	= 1,
                            HttpCacheReadBehavior_OnlyFromCache	= 2
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
        namespace Web {
            namespace Http {
                namespace Filters {
                    
                    /* [v1_enum] */ 
                    enum HttpCacheWriteBehavior
                        {
                            HttpCacheWriteBehavior_Default	= 0,
                            HttpCacheWriteBehavior_NoCache	= 1
                        } ;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0008_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter */
/* [uuid][object] */ 



/* interface ABI::Windows::Web::Http::Filters::IHttpFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Web {
                namespace Http {
                    namespace Filters {
                        
                        MIDL_INTERFACE("A4CB6DD5-0902-439E-BFD7-E12552B165CE")
                        IHttpFilter : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE SendRequestAsync( 
                                /* [in] */ __RPC__in_opt ABI::Windows::Web::Http::IHttpRequestMessage *request,
                                /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress **operation) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IHttpFilter = __uuidof(IHttpFilter);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *SendRequestAsync )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage *request,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress **operation);
        
        END_INTERFACE
    } __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilterVtbl;

    interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter
    {
        CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_SendRequestAsync(This,request,operation)	\
    ( (This)->lpVtbl -> SendRequestAsync(This,request,operation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0009 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpCacheControl[] = L"Windows.Web.Http.Filters.IHttpCacheControl";
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0009 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0009_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl */
/* [uuid][object] */ 



/* interface ABI::Windows::Web::Http::Filters::IHttpCacheControl */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Web {
                namespace Http {
                    namespace Filters {
                        
                        MIDL_INTERFACE("C77E1CB4-3CEA-4EB5-AC85-04E186E63AB7")
                        IHttpCacheControl : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReadBehavior( 
                                /* [out][retval] */ __RPC__out ABI::Windows::Web::Http::Filters::HttpCacheReadBehavior *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReadBehavior( 
                                /* [in] */ ABI::Windows::Web::Http::Filters::HttpCacheReadBehavior value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_WriteBehavior( 
                                /* [out][retval] */ __RPC__out ABI::Windows::Web::Http::Filters::HttpCacheWriteBehavior *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_WriteBehavior( 
                                /* [in] */ ABI::Windows::Web::Http::Filters::HttpCacheWriteBehavior value) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IHttpCacheControl = __uuidof(IHttpCacheControl);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReadBehavior )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheReadBehavior *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReadBehavior )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
            /* [in] */ __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheReadBehavior value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_WriteBehavior )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheWriteBehavior *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_WriteBehavior )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
            /* [in] */ __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheWriteBehavior value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControlVtbl;

    interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl
    {
        CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_get_ReadBehavior(This,value)	\
    ( (This)->lpVtbl -> get_ReadBehavior(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_put_ReadBehavior(This,value)	\
    ( (This)->lpVtbl -> put_ReadBehavior(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_get_WriteBehavior(This,value)	\
    ( (This)->lpVtbl -> get_WriteBehavior(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_put_WriteBehavior(This,value)	\
    ( (This)->lpVtbl -> put_WriteBehavior(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0010 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpBaseProtocolFilter[] = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter";
#endif /* !defined(____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0010 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0010_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter */
/* [uuid][object] */ 



/* interface ABI::Windows::Web::Http::Filters::IHttpBaseProtocolFilter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Web {
                namespace Http {
                    namespace Filters {
                        
                        MIDL_INTERFACE("71C89B09-E131-4B54-A53C-EB43FF37E9BB")
                        IHttpBaseProtocolFilter : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AllowAutoRedirect( 
                                /* [out][retval] */ __RPC__out boolean *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AllowAutoRedirect( 
                                /* [in] */ boolean value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AllowUI( 
                                /* [out][retval] */ __RPC__out boolean *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AllowUI( 
                                /* [in] */ boolean value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AutomaticDecompression( 
                                /* [out][retval] */ __RPC__out boolean *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AutomaticDecompression( 
                                /* [in] */ boolean value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CacheControl( 
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Web::Http::Filters::IHttpCacheControl **value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CookieManager( 
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Web::Http::IHttpCookieManager **value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ClientCertificate( 
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate **value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ClientCertificate( 
                                /* [in] */ __RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate *value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IgnorableServerCertificateErrors( 
                                /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult **value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MaxConnectionsPerServer( 
                                /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MaxConnectionsPerServer( 
                                /* [in] */ UINT32 value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProxyCredential( 
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Security::Credentials::IPasswordCredential **value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ProxyCredential( 
                                /* [in] */ __RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential *value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ServerCredential( 
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Security::Credentials::IPasswordCredential **value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ServerCredential( 
                                /* [in] */ __RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential *value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UseProxy( 
                                /* [out][retval] */ __RPC__out boolean *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_UseProxy( 
                                /* [in] */ boolean value) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IHttpBaseProtocolFilter = __uuidof(IHttpBaseProtocolFilter);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowAutoRedirect )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowAutoRedirect )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [in] */ boolean value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowUI )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowUI )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [in] */ boolean value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutomaticDecompression )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutomaticDecompression )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [in] */ boolean value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CacheControl )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CookieManager )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClientCertificate )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate **value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClientCertificate )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IgnorableServerCertificateErrors )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxConnectionsPerServer )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxConnectionsPerServer )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [in] */ UINT32 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyCredential )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential **value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProxyCredential )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServerCredential )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential **value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ServerCredential )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseProxy )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseProxy )( 
            __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
            /* [in] */ boolean value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterVtbl;

    interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter
    {
        CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_AllowAutoRedirect(This,value)	\
    ( (This)->lpVtbl -> get_AllowAutoRedirect(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_put_AllowAutoRedirect(This,value)	\
    ( (This)->lpVtbl -> put_AllowAutoRedirect(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_AllowUI(This,value)	\
    ( (This)->lpVtbl -> get_AllowUI(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_put_AllowUI(This,value)	\
    ( (This)->lpVtbl -> put_AllowUI(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_AutomaticDecompression(This,value)	\
    ( (This)->lpVtbl -> get_AutomaticDecompression(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_put_AutomaticDecompression(This,value)	\
    ( (This)->lpVtbl -> put_AutomaticDecompression(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_CacheControl(This,value)	\
    ( (This)->lpVtbl -> get_CacheControl(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_CookieManager(This,value)	\
    ( (This)->lpVtbl -> get_CookieManager(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_ClientCertificate(This,value)	\
    ( (This)->lpVtbl -> get_ClientCertificate(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_put_ClientCertificate(This,value)	\
    ( (This)->lpVtbl -> put_ClientCertificate(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_IgnorableServerCertificateErrors(This,value)	\
    ( (This)->lpVtbl -> get_IgnorableServerCertificateErrors(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_MaxConnectionsPerServer(This,value)	\
    ( (This)->lpVtbl -> get_MaxConnectionsPerServer(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_put_MaxConnectionsPerServer(This,value)	\
    ( (This)->lpVtbl -> put_MaxConnectionsPerServer(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_ProxyCredential(This,value)	\
    ( (This)->lpVtbl -> get_ProxyCredential(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_put_ProxyCredential(This,value)	\
    ( (This)->lpVtbl -> put_ProxyCredential(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_ServerCredential(This,value)	\
    ( (This)->lpVtbl -> get_ServerCredential(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_put_ServerCredential(This,value)	\
    ( (This)->lpVtbl -> put_ServerCredential(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_get_UseProxy(This,value)	\
    ( (This)->lpVtbl -> get_UseProxy(This,value) ) 

#define __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_put_UseProxy(This,value)	\
    ( (This)->lpVtbl -> put_UseProxy(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0011 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Web_Http_Filters_HttpCacheControl_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Filters_HttpCacheControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Filters_HttpCacheControl[] = L"Windows.Web.Http.Filters.HttpCacheControl";
#endif
#ifndef RUNTIMECLASS_Windows_Web_Http_Filters_HttpBaseProtocolFilter_DEFINED
#define RUNTIMECLASS_Windows_Web_Http_Filters_HttpBaseProtocolFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Filters_HttpBaseProtocolFilter[] = L"Windows.Web.Http.Filters.HttpBaseProtocolFilter";
#endif


/* interface __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0011 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Ehttp2Efilters_0000_0011_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


