

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

#ifndef __windows2Esystem_h__
#define __windows2Esystem_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CSystem_CILauncherUIOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CILauncherUIOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CILauncherUIOptions __x_ABI_CWindows_CSystem_CILauncherUIOptions;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            interface ILauncherUIOptions;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CILauncherUIOptions_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSystem_CILauncherOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CILauncherOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CILauncherOptions __x_ABI_CWindows_CSystem_CILauncherOptions;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            interface ILauncherOptions;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CILauncherOptions_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSystem_CILauncherViewOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CILauncherViewOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CILauncherViewOptions __x_ABI_CWindows_CSystem_CILauncherViewOptions;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            interface ILauncherViewOptions;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CILauncherViewOptions_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSystem_CILauncherStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CILauncherStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CILauncherStatics __x_ABI_CWindows_CSystem_CILauncherStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            interface ILauncherStatics;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CILauncherStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.h"
#include "Windows.UI.Popups.h"
#include "Windows.UI.ViewManagement.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Esystem_0000_0000 */
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
namespace Foundation {
struct Point;
} /*Foundation*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Esystem_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esystem_0000_0693 */




/* interface __MIDL_itf_windows2Esystem_0000_0693 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0693_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0693_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esystem_0000_0001 */
/* [local] */ 

#ifndef DEF___FIReference_1_Windows__CFoundation__CPoint_USE
#define DEF___FIReference_1_Windows__CFoundation__CPoint_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("84f14c22-a00a-5272-8d3d-82112e66df00"))
IReference<struct ABI::Windows::Foundation::Point> : IReference_impl<struct ABI::Windows::Foundation::Point> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IReference`1<Windows.Foundation.Point>"; }
};
typedef IReference<struct ABI::Windows::Foundation::Point> __FIReference_1_Windows__CFoundation__CPoint_t;
#define ____FIReference_1_Windows__CFoundation__CPoint_FWD_DEFINED__
#define __FIReference_1_Windows__CFoundation__CPoint ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CPoint_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIReference_1_Windows__CFoundation__CPoint_USE */

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Foundation {
struct Rect;
} /*Foundation*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Esystem_0000_0001 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esystem_0000_0694 */




/* interface __MIDL_itf_windows2Esystem_0000_0694 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0694_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0694_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esystem_0000_0002 */
/* [local] */ 

#ifndef DEF___FIReference_1_Windows__CFoundation__CRect_USE
#define DEF___FIReference_1_Windows__CFoundation__CRect_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("80423f11-054f-5eac-afd3-63b6ce15e77b"))
IReference<struct ABI::Windows::Foundation::Rect> : IReference_impl<struct ABI::Windows::Foundation::Rect> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IReference`1<Windows.Foundation.Rect>"; }
};
typedef IReference<struct ABI::Windows::Foundation::Rect> __FIReference_1_Windows__CFoundation__CRect_t;
#define ____FIReference_1_Windows__CFoundation__CRect_FWD_DEFINED__
#define __FIReference_1_Windows__CFoundation__CRect ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CRect_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIReference_1_Windows__CFoundation__CRect_USE */


/* interface __MIDL_itf_windows2Esystem_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esystem_0000_0695 */




/* interface __MIDL_itf_windows2Esystem_0000_0695 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0695_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0695_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esystem_0000_0003 */
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


/* interface __MIDL_itf_windows2Esystem_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esystem_0000_0696 */




/* interface __MIDL_itf_windows2Esystem_0000_0696 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0696_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0696_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esystem_0000_0004 */
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
#if !defined(__windows2Eui2Epopups_h__)
#include <Windows.UI.Popups.h>
#endif // !defined(__windows2Eui2Epopups_h__)
#if !defined(__windows2Eui2Eviewmanagement_h__)
#include <Windows.UI.ViewManagement.h>
#endif // !defined(__windows2Eui2Eviewmanagement_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;

#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;

#endif
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

typedef enum __x_ABI_CWindows_CUI_CPopups_CPlacement __x_ABI_CWindows_CUI_CPopups_CPlacement;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CSystem_CProcessorArchitecture __x_ABI_CWindows_CSystem_CProcessorArchitecture;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CSystem_CVirtualKeyModifiers __x_ABI_CWindows_CSystem_CVirtualKeyModifiers;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CSystem_CVirtualKey __x_ABI_CWindows_CSystem_CVirtualKey;


#endif /* end if !defined(__cplusplus) */


#endif




#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace System {
class LauncherUIOptions;
} /*System*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace System {
class LauncherOptions;
} /*System*/
} /*Windows*/
}
#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CSystem_CProcessorArchitecture
    {
        ProcessorArchitecture_X86	= 0,
        ProcessorArchitecture_Arm	= 5,
        ProcessorArchitecture_X64	= 9,
        ProcessorArchitecture_Neutral	= 11,
        ProcessorArchitecture_Unknown	= 65535
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CSystem_CVirtualKeyModifiers
    {
        VirtualKeyModifiers_None	= 0,
        VirtualKeyModifiers_Control	= 0x1,
        VirtualKeyModifiers_Menu	= 0x2,
        VirtualKeyModifiers_Shift	= 0x4,
        VirtualKeyModifiers_Windows	= 0x8
    } ;
#endif /* end if !defined(__cplusplus) */

#else
namespace ABI {
namespace Windows {
namespace System {
enum VirtualKeyModifiers;
DEFINE_ENUM_FLAG_OPERATORS(VirtualKeyModifiers)
} /*System*/
} /*Windows*/
}
#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CSystem_CVirtualKey
    {
        VirtualKey_None	= 0,
        VirtualKey_LeftButton	= 1,
        VirtualKey_RightButton	= 2,
        VirtualKey_Cancel	= 3,
        VirtualKey_MiddleButton	= 4,
        VirtualKey_XButton1	= 5,
        VirtualKey_XButton2	= 6,
        VirtualKey_Back	= 8,
        VirtualKey_Tab	= 9,
        VirtualKey_Clear	= 12,
        VirtualKey_Enter	= 13,
        VirtualKey_Shift	= 16,
        VirtualKey_Control	= 17,
        VirtualKey_Menu	= 18,
        VirtualKey_Pause	= 19,
        VirtualKey_CapitalLock	= 20,
        VirtualKey_Kana	= 21,
        VirtualKey_Hangul	= 21,
        VirtualKey_Junja	= 23,
        VirtualKey_Final	= 24,
        VirtualKey_Hanja	= 25,
        VirtualKey_Kanji	= 25,
        VirtualKey_Escape	= 27,
        VirtualKey_Convert	= 28,
        VirtualKey_NonConvert	= 29,
        VirtualKey_Accept	= 30,
        VirtualKey_ModeChange	= 31,
        VirtualKey_Space	= 32,
        VirtualKey_PageUp	= 33,
        VirtualKey_PageDown	= 34,
        VirtualKey_End	= 35,
        VirtualKey_Home	= 36,
        VirtualKey_Left	= 37,
        VirtualKey_Up	= 38,
        VirtualKey_Right	= 39,
        VirtualKey_Down	= 40,
        VirtualKey_Select	= 41,
        VirtualKey_Print	= 42,
        VirtualKey_Execute	= 43,
        VirtualKey_Snapshot	= 44,
        VirtualKey_Insert	= 45,
        VirtualKey_Delete	= 46,
        VirtualKey_Help	= 47,
        VirtualKey_Number0	= 48,
        VirtualKey_Number1	= 49,
        VirtualKey_Number2	= 50,
        VirtualKey_Number3	= 51,
        VirtualKey_Number4	= 52,
        VirtualKey_Number5	= 53,
        VirtualKey_Number6	= 54,
        VirtualKey_Number7	= 55,
        VirtualKey_Number8	= 56,
        VirtualKey_Number9	= 57,
        VirtualKey_A	= 65,
        VirtualKey_B	= 66,
        VirtualKey_C	= 67,
        VirtualKey_D	= 68,
        VirtualKey_E	= 69,
        VirtualKey_F	= 70,
        VirtualKey_G	= 71,
        VirtualKey_H	= 72,
        VirtualKey_I	= 73,
        VirtualKey_J	= 74,
        VirtualKey_K	= 75,
        VirtualKey_L	= 76,
        VirtualKey_M	= 77,
        VirtualKey_N	= 78,
        VirtualKey_O	= 79,
        VirtualKey_P	= 80,
        VirtualKey_Q	= 81,
        VirtualKey_R	= 82,
        VirtualKey_S	= 83,
        VirtualKey_T	= 84,
        VirtualKey_U	= 85,
        VirtualKey_V	= 86,
        VirtualKey_W	= 87,
        VirtualKey_X	= 88,
        VirtualKey_Y	= 89,
        VirtualKey_Z	= 90,
        VirtualKey_LeftWindows	= 91,
        VirtualKey_RightWindows	= 92,
        VirtualKey_Application	= 93,
        VirtualKey_Sleep	= 95,
        VirtualKey_NumberPad0	= 96,
        VirtualKey_NumberPad1	= 97,
        VirtualKey_NumberPad2	= 98,
        VirtualKey_NumberPad3	= 99,
        VirtualKey_NumberPad4	= 100,
        VirtualKey_NumberPad5	= 101,
        VirtualKey_NumberPad6	= 102,
        VirtualKey_NumberPad7	= 103,
        VirtualKey_NumberPad8	= 104,
        VirtualKey_NumberPad9	= 105,
        VirtualKey_Multiply	= 106,
        VirtualKey_Add	= 107,
        VirtualKey_Separator	= 108,
        VirtualKey_Subtract	= 109,
        VirtualKey_Decimal	= 110,
        VirtualKey_Divide	= 111,
        VirtualKey_F1	= 112,
        VirtualKey_F2	= 113,
        VirtualKey_F3	= 114,
        VirtualKey_F4	= 115,
        VirtualKey_F5	= 116,
        VirtualKey_F6	= 117,
        VirtualKey_F7	= 118,
        VirtualKey_F8	= 119,
        VirtualKey_F9	= 120,
        VirtualKey_F10	= 121,
        VirtualKey_F11	= 122,
        VirtualKey_F12	= 123,
        VirtualKey_F13	= 124,
        VirtualKey_F14	= 125,
        VirtualKey_F15	= 126,
        VirtualKey_F16	= 127,
        VirtualKey_F17	= 128,
        VirtualKey_F18	= 129,
        VirtualKey_F19	= 130,
        VirtualKey_F20	= 131,
        VirtualKey_F21	= 132,
        VirtualKey_F22	= 133,
        VirtualKey_F23	= 134,
        VirtualKey_F24	= 135,
        VirtualKey_NumberKeyLock	= 144,
        VirtualKey_Scroll	= 145,
        VirtualKey_LeftShift	= 160,
        VirtualKey_RightShift	= 161,
        VirtualKey_LeftControl	= 162,
        VirtualKey_RightControl	= 163,
        VirtualKey_LeftMenu	= 164,
        VirtualKey_RightMenu	= 165,
        VirtualKey_GoBack	= 166,
        VirtualKey_GoForward	= 167,
        VirtualKey_Refresh	= 168,
        VirtualKey_Stop	= 169,
        VirtualKey_Search	= 170,
        VirtualKey_Favorites	= 171,
        VirtualKey_GoHome	= 172
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CSystem_CILauncherUIOptions_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_ILauncherUIOptions[] = L"Windows.System.ILauncherUIOptions";
#endif /* !defined(____x_ABI_CWindows_CSystem_CILauncherUIOptions_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esystem_0000_0004 */
/* [local] */ 


#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Point Point;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
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
            namespace Popups {
                
                typedef enum Placement Placement;
                
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
            namespace ViewManagement {
                
                typedef enum ViewSizePreference ViewSizePreference;
                
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
        namespace System {
            
            typedef enum ProcessorArchitecture ProcessorArchitecture;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace System {
            
            typedef enum VirtualKeyModifiers VirtualKeyModifiers;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace System {
            
            typedef enum VirtualKey VirtualKey;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif





#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace System {
            
            /* [v1_enum] */ 
            enum ProcessorArchitecture
                {
                    ProcessorArchitecture_X86	= 0,
                    ProcessorArchitecture_Arm	= 5,
                    ProcessorArchitecture_X64	= 9,
                    ProcessorArchitecture_Neutral	= 11,
                    ProcessorArchitecture_Unknown	= 65535
                } ;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace System {
            
            /* [v1_enum] */ 
            enum VirtualKeyModifiers
                {
                    VirtualKeyModifiers_None	= 0,
                    VirtualKeyModifiers_Control	= 0x1,
                    VirtualKeyModifiers_Menu	= 0x2,
                    VirtualKeyModifiers_Shift	= 0x4,
                    VirtualKeyModifiers_Windows	= 0x8
                } ;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace System {
            
            /* [v1_enum] */ 
            enum VirtualKey
                {
                    VirtualKey_None	= 0,
                    VirtualKey_LeftButton	= 1,
                    VirtualKey_RightButton	= 2,
                    VirtualKey_Cancel	= 3,
                    VirtualKey_MiddleButton	= 4,
                    VirtualKey_XButton1	= 5,
                    VirtualKey_XButton2	= 6,
                    VirtualKey_Back	= 8,
                    VirtualKey_Tab	= 9,
                    VirtualKey_Clear	= 12,
                    VirtualKey_Enter	= 13,
                    VirtualKey_Shift	= 16,
                    VirtualKey_Control	= 17,
                    VirtualKey_Menu	= 18,
                    VirtualKey_Pause	= 19,
                    VirtualKey_CapitalLock	= 20,
                    VirtualKey_Kana	= 21,
                    VirtualKey_Hangul	= 21,
                    VirtualKey_Junja	= 23,
                    VirtualKey_Final	= 24,
                    VirtualKey_Hanja	= 25,
                    VirtualKey_Kanji	= 25,
                    VirtualKey_Escape	= 27,
                    VirtualKey_Convert	= 28,
                    VirtualKey_NonConvert	= 29,
                    VirtualKey_Accept	= 30,
                    VirtualKey_ModeChange	= 31,
                    VirtualKey_Space	= 32,
                    VirtualKey_PageUp	= 33,
                    VirtualKey_PageDown	= 34,
                    VirtualKey_End	= 35,
                    VirtualKey_Home	= 36,
                    VirtualKey_Left	= 37,
                    VirtualKey_Up	= 38,
                    VirtualKey_Right	= 39,
                    VirtualKey_Down	= 40,
                    VirtualKey_Select	= 41,
                    VirtualKey_Print	= 42,
                    VirtualKey_Execute	= 43,
                    VirtualKey_Snapshot	= 44,
                    VirtualKey_Insert	= 45,
                    VirtualKey_Delete	= 46,
                    VirtualKey_Help	= 47,
                    VirtualKey_Number0	= 48,
                    VirtualKey_Number1	= 49,
                    VirtualKey_Number2	= 50,
                    VirtualKey_Number3	= 51,
                    VirtualKey_Number4	= 52,
                    VirtualKey_Number5	= 53,
                    VirtualKey_Number6	= 54,
                    VirtualKey_Number7	= 55,
                    VirtualKey_Number8	= 56,
                    VirtualKey_Number9	= 57,
                    VirtualKey_A	= 65,
                    VirtualKey_B	= 66,
                    VirtualKey_C	= 67,
                    VirtualKey_D	= 68,
                    VirtualKey_E	= 69,
                    VirtualKey_F	= 70,
                    VirtualKey_G	= 71,
                    VirtualKey_H	= 72,
                    VirtualKey_I	= 73,
                    VirtualKey_J	= 74,
                    VirtualKey_K	= 75,
                    VirtualKey_L	= 76,
                    VirtualKey_M	= 77,
                    VirtualKey_N	= 78,
                    VirtualKey_O	= 79,
                    VirtualKey_P	= 80,
                    VirtualKey_Q	= 81,
                    VirtualKey_R	= 82,
                    VirtualKey_S	= 83,
                    VirtualKey_T	= 84,
                    VirtualKey_U	= 85,
                    VirtualKey_V	= 86,
                    VirtualKey_W	= 87,
                    VirtualKey_X	= 88,
                    VirtualKey_Y	= 89,
                    VirtualKey_Z	= 90,
                    VirtualKey_LeftWindows	= 91,
                    VirtualKey_RightWindows	= 92,
                    VirtualKey_Application	= 93,
                    VirtualKey_Sleep	= 95,
                    VirtualKey_NumberPad0	= 96,
                    VirtualKey_NumberPad1	= 97,
                    VirtualKey_NumberPad2	= 98,
                    VirtualKey_NumberPad3	= 99,
                    VirtualKey_NumberPad4	= 100,
                    VirtualKey_NumberPad5	= 101,
                    VirtualKey_NumberPad6	= 102,
                    VirtualKey_NumberPad7	= 103,
                    VirtualKey_NumberPad8	= 104,
                    VirtualKey_NumberPad9	= 105,
                    VirtualKey_Multiply	= 106,
                    VirtualKey_Add	= 107,
                    VirtualKey_Separator	= 108,
                    VirtualKey_Subtract	= 109,
                    VirtualKey_Decimal	= 110,
                    VirtualKey_Divide	= 111,
                    VirtualKey_F1	= 112,
                    VirtualKey_F2	= 113,
                    VirtualKey_F3	= 114,
                    VirtualKey_F4	= 115,
                    VirtualKey_F5	= 116,
                    VirtualKey_F6	= 117,
                    VirtualKey_F7	= 118,
                    VirtualKey_F8	= 119,
                    VirtualKey_F9	= 120,
                    VirtualKey_F10	= 121,
                    VirtualKey_F11	= 122,
                    VirtualKey_F12	= 123,
                    VirtualKey_F13	= 124,
                    VirtualKey_F14	= 125,
                    VirtualKey_F15	= 126,
                    VirtualKey_F16	= 127,
                    VirtualKey_F17	= 128,
                    VirtualKey_F18	= 129,
                    VirtualKey_F19	= 130,
                    VirtualKey_F20	= 131,
                    VirtualKey_F21	= 132,
                    VirtualKey_F22	= 133,
                    VirtualKey_F23	= 134,
                    VirtualKey_F24	= 135,
                    VirtualKey_NumberKeyLock	= 144,
                    VirtualKey_Scroll	= 145,
                    VirtualKey_LeftShift	= 160,
                    VirtualKey_RightShift	= 161,
                    VirtualKey_LeftControl	= 162,
                    VirtualKey_RightControl	= 163,
                    VirtualKey_LeftMenu	= 164,
                    VirtualKey_RightMenu	= 165,
                    VirtualKey_GoBack	= 166,
                    VirtualKey_GoForward	= 167,
                    VirtualKey_Refresh	= 168,
                    VirtualKey_Stop	= 169,
                    VirtualKey_Search	= 170,
                    VirtualKey_Favorites	= 171,
                    VirtualKey_GoHome	= 172
                } ;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0004_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSystem_CILauncherUIOptions_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CILauncherUIOptions_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CILauncherUIOptions */
/* [uuid][object] */ 



/* interface ABI::Windows::System::ILauncherUIOptions */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CILauncherUIOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                
                MIDL_INTERFACE("1B25DA6E-8AA6-41E9-8251-4165F5985F49")
                ILauncherUIOptions : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_InvocationPoint( 
                        /* [out][retval] */ __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CPoint **value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_InvocationPoint( 
                        /* [in] */ __RPC__in_opt __FIReference_1_Windows__CFoundation__CPoint *value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SelectionRect( 
                        /* [out][retval] */ __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CRect **value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SelectionRect( 
                        /* [in] */ __RPC__in_opt __FIReference_1_Windows__CFoundation__CRect *value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PreferredPlacement( 
                        /* [out][retval] */ __RPC__out ABI::Windows::UI::Popups::Placement *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PreferredPlacement( 
                        /* [in] */ ABI::Windows::UI::Popups::Placement value) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_ILauncherUIOptions = __uuidof(ILauncherUIOptions);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CILauncherUIOptionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherUIOptions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherUIOptions * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_InvocationPoint )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CPoint **value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_InvocationPoint )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
            /* [in] */ __RPC__in_opt __FIReference_1_Windows__CFoundation__CPoint *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectionRect )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CRect **value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SelectionRect )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
            /* [in] */ __RPC__in_opt __FIReference_1_Windows__CFoundation__CRect *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PreferredPlacement )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CPopups_CPlacement *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PreferredPlacement )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
            /* [in] */ __x_ABI_CWindows_CUI_CPopups_CPlacement value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CILauncherUIOptionsVtbl;

    interface __x_ABI_CWindows_CSystem_CILauncherUIOptions
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CILauncherUIOptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CILauncherUIOptions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CILauncherUIOptions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CILauncherUIOptions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CILauncherUIOptions_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSystem_CILauncherUIOptions_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSystem_CILauncherUIOptions_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSystem_CILauncherUIOptions_get_InvocationPoint(This,value)	\
    ( (This)->lpVtbl -> get_InvocationPoint(This,value) ) 

#define __x_ABI_CWindows_CSystem_CILauncherUIOptions_put_InvocationPoint(This,value)	\
    ( (This)->lpVtbl -> put_InvocationPoint(This,value) ) 

#define __x_ABI_CWindows_CSystem_CILauncherUIOptions_get_SelectionRect(This,value)	\
    ( (This)->lpVtbl -> get_SelectionRect(This,value) ) 

#define __x_ABI_CWindows_CSystem_CILauncherUIOptions_put_SelectionRect(This,value)	\
    ( (This)->lpVtbl -> put_SelectionRect(This,value) ) 

#define __x_ABI_CWindows_CSystem_CILauncherUIOptions_get_PreferredPlacement(This,value)	\
    ( (This)->lpVtbl -> get_PreferredPlacement(This,value) ) 

#define __x_ABI_CWindows_CSystem_CILauncherUIOptions_put_PreferredPlacement(This,value)	\
    ( (This)->lpVtbl -> put_PreferredPlacement(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CILauncherUIOptions_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esystem_0000_0005 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CSystem_CILauncherOptions_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_ILauncherOptions[] = L"Windows.System.ILauncherOptions";
#endif /* !defined(____x_ABI_CWindows_CSystem_CILauncherOptions_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esystem_0000_0005 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0005_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSystem_CILauncherOptions_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CILauncherOptions_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CILauncherOptions */
/* [uuid][object] */ 



/* interface ABI::Windows::System::ILauncherOptions */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CILauncherOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                
                MIDL_INTERFACE("BAFA21D8-B071-4CD8-853E-341203E557D3")
                ILauncherOptions : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TreatAsUntrusted( 
                        /* [out][retval] */ __RPC__out boolean *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TreatAsUntrusted( 
                        /* [in] */ boolean value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DisplayApplicationPicker( 
                        /* [out][retval] */ __RPC__out boolean *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DisplayApplicationPicker( 
                        /* [in] */ boolean value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UI( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::System::ILauncherUIOptions **value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PreferredApplicationPackageFamilyName( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PreferredApplicationPackageFamilyName( 
                        /* [in] */ __RPC__in HSTRING value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PreferredApplicationDisplayName( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PreferredApplicationDisplayName( 
                        /* [in] */ __RPC__in HSTRING value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FallbackUri( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass **value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_FallbackUri( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass *value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ContentType( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ContentType( 
                        /* [in] */ __RPC__in HSTRING value) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_ILauncherOptions = __uuidof(ILauncherOptions);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CILauncherOptionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TreatAsUntrusted )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TreatAsUntrusted )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
            /* [in] */ boolean value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayApplicationPicker )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayApplicationPicker )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
            /* [in] */ boolean value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UI )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CILauncherUIOptions **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PreferredApplicationPackageFamilyName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PreferredApplicationPackageFamilyName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PreferredApplicationDisplayName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PreferredApplicationDisplayName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FallbackUri )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass **value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_FallbackUri )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentType )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContentType )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
            /* [in] */ __RPC__in HSTRING value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CILauncherOptionsVtbl;

    interface __x_ABI_CWindows_CSystem_CILauncherOptions
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CILauncherOptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CILauncherOptions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CILauncherOptions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CILauncherOptions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CILauncherOptions_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSystem_CILauncherOptions_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSystem_CILauncherOptions_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSystem_CILauncherOptions_get_TreatAsUntrusted(This,value)	\
    ( (This)->lpVtbl -> get_TreatAsUntrusted(This,value) ) 

#define __x_ABI_CWindows_CSystem_CILauncherOptions_put_TreatAsUntrusted(This,value)	\
    ( (This)->lpVtbl -> put_TreatAsUntrusted(This,value) ) 

#define __x_ABI_CWindows_CSystem_CILauncherOptions_get_DisplayApplicationPicker(This,value)	\
    ( (This)->lpVtbl -> get_DisplayApplicationPicker(This,value) ) 

#define __x_ABI_CWindows_CSystem_CILauncherOptions_put_DisplayApplicationPicker(This,value)	\
    ( (This)->lpVtbl -> put_DisplayApplicationPicker(This,value) ) 

#define __x_ABI_CWindows_CSystem_CILauncherOptions_get_UI(This,value)	\
    ( (This)->lpVtbl -> get_UI(This,value) ) 

#define __x_ABI_CWindows_CSystem_CILauncherOptions_get_PreferredApplicationPackageFamilyName(This,value)	\
    ( (This)->lpVtbl -> get_PreferredApplicationPackageFamilyName(This,value) ) 

#define __x_ABI_CWindows_CSystem_CILauncherOptions_put_PreferredApplicationPackageFamilyName(This,value)	\
    ( (This)->lpVtbl -> put_PreferredApplicationPackageFamilyName(This,value) ) 

#define __x_ABI_CWindows_CSystem_CILauncherOptions_get_PreferredApplicationDisplayName(This,value)	\
    ( (This)->lpVtbl -> get_PreferredApplicationDisplayName(This,value) ) 

#define __x_ABI_CWindows_CSystem_CILauncherOptions_put_PreferredApplicationDisplayName(This,value)	\
    ( (This)->lpVtbl -> put_PreferredApplicationDisplayName(This,value) ) 

#define __x_ABI_CWindows_CSystem_CILauncherOptions_get_FallbackUri(This,value)	\
    ( (This)->lpVtbl -> get_FallbackUri(This,value) ) 

#define __x_ABI_CWindows_CSystem_CILauncherOptions_put_FallbackUri(This,value)	\
    ( (This)->lpVtbl -> put_FallbackUri(This,value) ) 

#define __x_ABI_CWindows_CSystem_CILauncherOptions_get_ContentType(This,value)	\
    ( (This)->lpVtbl -> get_ContentType(This,value) ) 

#define __x_ABI_CWindows_CSystem_CILauncherOptions_put_ContentType(This,value)	\
    ( (This)->lpVtbl -> put_ContentType(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CILauncherOptions_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esystem_0000_0006 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CSystem_CILauncherViewOptions_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_ILauncherViewOptions[] = L"Windows.System.ILauncherViewOptions";
#endif /* !defined(____x_ABI_CWindows_CSystem_CILauncherViewOptions_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esystem_0000_0006 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0006_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSystem_CILauncherViewOptions_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CILauncherViewOptions_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CILauncherViewOptions */
/* [uuid][object] */ 



/* interface ABI::Windows::System::ILauncherViewOptions */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CILauncherViewOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                
                MIDL_INTERFACE("8A9B29F1-7CA7-49DE-9BD3-3C5B7184F616")
                ILauncherViewOptions : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DesiredRemainingView( 
                        /* [out][retval] */ __RPC__out ABI::Windows::UI::ViewManagement::ViewSizePreference *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DesiredRemainingView( 
                        /* [in] */ ABI::Windows::UI::ViewManagement::ViewSizePreference value) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_ILauncherViewOptions = __uuidof(ILauncherViewOptions);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CILauncherViewOptionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherViewOptions * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherViewOptions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherViewOptions * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherViewOptions * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherViewOptions * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherViewOptions * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesiredRemainingView )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherViewOptions * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesiredRemainingView )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherViewOptions * This,
            /* [in] */ __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CILauncherViewOptionsVtbl;

    interface __x_ABI_CWindows_CSystem_CILauncherViewOptions
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CILauncherViewOptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CILauncherViewOptions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CILauncherViewOptions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CILauncherViewOptions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CILauncherViewOptions_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSystem_CILauncherViewOptions_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSystem_CILauncherViewOptions_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSystem_CILauncherViewOptions_get_DesiredRemainingView(This,value)	\
    ( (This)->lpVtbl -> get_DesiredRemainingView(This,value) ) 

#define __x_ABI_CWindows_CSystem_CILauncherViewOptions_put_DesiredRemainingView(This,value)	\
    ( (This)->lpVtbl -> put_DesiredRemainingView(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CILauncherViewOptions_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esystem_0000_0007 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CSystem_CILauncherStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_ILauncherStatics[] = L"Windows.System.ILauncherStatics";
#endif /* !defined(____x_ABI_CWindows_CSystem_CILauncherStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esystem_0000_0007 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0007_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSystem_CILauncherStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CILauncherStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CILauncherStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::System::ILauncherStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CILauncherStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                
                MIDL_INTERFACE("277151C3-9E3E-42F6-91A4-5DFDEB232451")
                ILauncherStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE LaunchFileAsync( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Storage::IStorageFile *file,
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_boolean **operation) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE LaunchFileWithOptionsAsync( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Storage::IStorageFile *file,
                        /* [in] */ __RPC__in_opt ABI::Windows::System::ILauncherOptions *options,
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_boolean **operation) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE LaunchUriAsync( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass *uri,
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_boolean **operation) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE LaunchUriWithOptionsAsync( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass *uri,
                        /* [in] */ __RPC__in_opt ABI::Windows::System::ILauncherOptions *options,
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_boolean **operation) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_ILauncherStatics = __uuidof(ILauncherStatics);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CILauncherStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *LaunchFileAsync )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile *file,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_boolean **operation);
        
        HRESULT ( STDMETHODCALLTYPE *LaunchFileWithOptionsAsync )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile *file,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CILauncherOptions *options,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_boolean **operation);
        
        HRESULT ( STDMETHODCALLTYPE *LaunchUriAsync )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass *uri,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_boolean **operation);
        
        HRESULT ( STDMETHODCALLTYPE *LaunchUriWithOptionsAsync )( 
            __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass *uri,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CILauncherOptions *options,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_boolean **operation);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CILauncherStaticsVtbl;

    interface __x_ABI_CWindows_CSystem_CILauncherStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CILauncherStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CILauncherStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CILauncherStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CILauncherStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CILauncherStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSystem_CILauncherStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSystem_CILauncherStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSystem_CILauncherStatics_LaunchFileAsync(This,file,operation)	\
    ( (This)->lpVtbl -> LaunchFileAsync(This,file,operation) ) 

#define __x_ABI_CWindows_CSystem_CILauncherStatics_LaunchFileWithOptionsAsync(This,file,options,operation)	\
    ( (This)->lpVtbl -> LaunchFileWithOptionsAsync(This,file,options,operation) ) 

#define __x_ABI_CWindows_CSystem_CILauncherStatics_LaunchUriAsync(This,uri,operation)	\
    ( (This)->lpVtbl -> LaunchUriAsync(This,uri,operation) ) 

#define __x_ABI_CWindows_CSystem_CILauncherStatics_LaunchUriWithOptionsAsync(This,uri,options,operation)	\
    ( (This)->lpVtbl -> LaunchUriWithOptionsAsync(This,uri,options,operation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CILauncherStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esystem_0000_0008 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_System_LauncherUIOptions_DEFINED
#define RUNTIMECLASS_Windows_System_LauncherUIOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_LauncherUIOptions[] = L"Windows.System.LauncherUIOptions";
#endif
#ifndef RUNTIMECLASS_Windows_System_LauncherOptions_DEFINED
#define RUNTIMECLASS_Windows_System_LauncherOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_LauncherOptions[] = L"Windows.System.LauncherOptions";
#endif
#ifndef RUNTIMECLASS_Windows_System_Launcher_DEFINED
#define RUNTIMECLASS_Windows_System_Launcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Launcher[] = L"Windows.System.Launcher";
#endif


/* interface __MIDL_itf_windows2Esystem_0000_0008 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem_0000_0008_v0_0_s_ifspec;

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


