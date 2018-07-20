

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

#ifndef __windows2Eui2Examl2Emedia2Emedia3d_h__
#define __windows2Eui2Examl2Emedia2Emedia3d_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Media3D {
                        interface IMatrix3DHelper;
                    } /* end namespace */
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Media3D {
                        interface IMatrix3DHelperStatics;
                    } /* end namespace */
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eui2Examl2Emedia2Emedia3d_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D;

#endif


#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Xaml {
namespace Media {
namespace Media3D {
class Matrix3DHelper;
} /*Media3D*/
} /*Media*/
} /*Xaml*/
} /*UI*/
} /*Windows*/
}
#endif
#if !defined(__cplusplus)
struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D
    {
    DOUBLE M11;
    DOUBLE M12;
    DOUBLE M13;
    DOUBLE M14;
    DOUBLE M21;
    DOUBLE M22;
    DOUBLE M23;
    DOUBLE M24;
    DOUBLE M31;
    DOUBLE M32;
    DOUBLE M33;
    DOUBLE M34;
    DOUBLE OffsetX;
    DOUBLE OffsetY;
    DOUBLE OffsetZ;
    DOUBLE M44;
    } ;
#endif
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelper[] = L"Windows.UI.Xaml.Media.Media3D.IMatrix3DHelper";
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eui2Examl2Emedia2Emedia3d_0000_0000 */
/* [local] */ 

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Media3D {
                        
                        typedef struct Matrix3D Matrix3D;
                        
                    } /* end namespace */
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
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Media3D {
                        
                        struct Matrix3D
                            {
                            DOUBLE M11;
                            DOUBLE M12;
                            DOUBLE M13;
                            DOUBLE M14;
                            DOUBLE M21;
                            DOUBLE M22;
                            DOUBLE M23;
                            DOUBLE M24;
                            DOUBLE M31;
                            DOUBLE M32;
                            DOUBLE M33;
                            DOUBLE M34;
                            DOUBLE OffsetX;
                            DOUBLE OffsetY;
                            DOUBLE OffsetZ;
                            DOUBLE M44;
                            } ;
                    } /* end namespace */
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Emedia2Emedia3d_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Emedia2Emedia3d_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper */
/* [uuid][object] */ 



/* interface ABI::Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace UI {
                namespace Xaml {
                    namespace Media {
                        namespace Media3D {
                            
                            MIDL_INTERFACE("E48C10EF-9927-4C9B-8213-07775512BA04")
                            IMatrix3DHelper : public IInspectable
                            {
                            public:
                            };

                            extern const __declspec(selectany) IID & IID_IMatrix3DHelper = __uuidof(IMatrix3DHelper);

                            
                        }  /* end namespace */
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        END_INTERFACE
    } __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperVtbl;

    interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelper_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eui2Examl2Emedia2Emedia3d_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelperStatics[] = L"Windows.UI.Xaml.Media.Media3D.IMatrix3DHelperStatics";
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eui2Examl2Emedia2Emedia3d_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Emedia2Emedia3d_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Emedia2Emedia3d_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace UI {
                namespace Xaml {
                    namespace Media {
                        namespace Media3D {
                            
                            MIDL_INTERFACE("9264545E-E158-4E74-8899-689160BD2F8C")
                            IMatrix3DHelperStatics : public IInspectable
                            {
                            public:
                                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Identity( 
                                    /* [out][retval] */ __RPC__out ABI::Windows::UI::Xaml::Media::Media3D::Matrix3D *value) = 0;
                                
                                virtual HRESULT STDMETHODCALLTYPE Multiply( 
                                    /* [in] */ ABI::Windows::UI::Xaml::Media::Media3D::Matrix3D matrix1,
                                    /* [in] */ ABI::Windows::UI::Xaml::Media::Media3D::Matrix3D matrix2,
                                    /* [out][retval] */ __RPC__out ABI::Windows::UI::Xaml::Media::Media3D::Matrix3D *returnValue) = 0;
                                
                                virtual HRESULT STDMETHODCALLTYPE FromElements( 
                                    /* [in] */ DOUBLE m11,
                                    /* [in] */ DOUBLE m12,
                                    /* [in] */ DOUBLE m13,
                                    /* [in] */ DOUBLE m14,
                                    /* [in] */ DOUBLE m21,
                                    /* [in] */ DOUBLE m22,
                                    /* [in] */ DOUBLE m23,
                                    /* [in] */ DOUBLE m24,
                                    /* [in] */ DOUBLE m31,
                                    /* [in] */ DOUBLE m32,
                                    /* [in] */ DOUBLE m33,
                                    /* [in] */ DOUBLE m34,
                                    /* [in] */ DOUBLE offsetX,
                                    /* [in] */ DOUBLE offsetY,
                                    /* [in] */ DOUBLE offsetZ,
                                    /* [in] */ DOUBLE m44,
                                    /* [out][retval] */ __RPC__out ABI::Windows::UI::Xaml::Media::Media3D::Matrix3D *returnValue) = 0;
                                
                                virtual HRESULT STDMETHODCALLTYPE GetHasInverse( 
                                    /* [in] */ ABI::Windows::UI::Xaml::Media::Media3D::Matrix3D target,
                                    /* [out][retval] */ __RPC__out boolean *value) = 0;
                                
                                virtual HRESULT STDMETHODCALLTYPE GetIsIdentity( 
                                    /* [in] */ ABI::Windows::UI::Xaml::Media::Media3D::Matrix3D target,
                                    /* [out][retval] */ __RPC__out boolean *value) = 0;
                                
                                virtual HRESULT STDMETHODCALLTYPE Invert( 
                                    /* [in] */ ABI::Windows::UI::Xaml::Media::Media3D::Matrix3D target,
                                    /* [out][retval] */ __RPC__out ABI::Windows::UI::Xaml::Media::Media3D::Matrix3D *returnValue) = 0;
                                
                            };

                            extern const __declspec(selectany) IID & IID_IMatrix3DHelperStatics = __uuidof(IMatrix3DHelperStatics);

                            
                        }  /* end namespace */
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D *value);
        
        HRESULT ( STDMETHODCALLTYPE *Multiply )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
            /* [in] */ __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D matrix1,
            /* [in] */ __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D matrix2,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D *returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *FromElements )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
            /* [in] */ DOUBLE m11,
            /* [in] */ DOUBLE m12,
            /* [in] */ DOUBLE m13,
            /* [in] */ DOUBLE m14,
            /* [in] */ DOUBLE m21,
            /* [in] */ DOUBLE m22,
            /* [in] */ DOUBLE m23,
            /* [in] */ DOUBLE m24,
            /* [in] */ DOUBLE m31,
            /* [in] */ DOUBLE m32,
            /* [in] */ DOUBLE m33,
            /* [in] */ DOUBLE m34,
            /* [in] */ DOUBLE offsetX,
            /* [in] */ DOUBLE offsetY,
            /* [in] */ DOUBLE offsetZ,
            /* [in] */ DOUBLE m44,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D *returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasInverse )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
            /* [in] */ __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D target,
            /* [out][retval] */ __RPC__out boolean *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetIsIdentity )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
            /* [in] */ __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D target,
            /* [out][retval] */ __RPC__out boolean *value);
        
        HRESULT ( STDMETHODCALLTYPE *Invert )( 
            __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics * This,
            /* [in] */ __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D target,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CMatrix3D *returnValue);
        
        END_INTERFACE
    } __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStaticsVtbl;

    interface __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_get_Identity(This,value)	\
    ( (This)->lpVtbl -> get_Identity(This,value) ) 

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_Multiply(This,matrix1,matrix2,returnValue)	\
    ( (This)->lpVtbl -> Multiply(This,matrix1,matrix2,returnValue) ) 

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_FromElements(This,m11,m12,m13,m14,m21,m22,m23,m24,m31,m32,m33,m34,offsetX,offsetY,offsetZ,m44,returnValue)	\
    ( (This)->lpVtbl -> FromElements(This,m11,m12,m13,m14,m21,m22,m23,m24,m31,m32,m33,m34,offsetX,offsetY,offsetZ,m44,returnValue) ) 

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_GetHasInverse(This,target,value)	\
    ( (This)->lpVtbl -> GetHasInverse(This,target,value) ) 

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_GetIsIdentity(This,target,value)	\
    ( (This)->lpVtbl -> GetIsIdentity(This,target,value) ) 

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_Invert(This,target,returnValue)	\
    ( (This)->lpVtbl -> Invert(This,target,returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CUI_CXaml_CMedia_CMedia3D_CIMatrix3DHelperStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eui2Examl2Emedia2Emedia3d_0000_0002 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Media3D_Matrix3DHelper_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Media3D_Matrix3DHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Media3D_Matrix3DHelper[] = L"Windows.UI.Xaml.Media.Media3D.Matrix3DHelper";
#endif


/* interface __MIDL_itf_windows2Eui2Examl2Emedia2Emedia3d_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Emedia2Emedia3d_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Emedia2Emedia3d_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


