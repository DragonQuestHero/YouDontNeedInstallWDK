 
// Copyright (C) Microsoft Corporation. All rights reserved.
#ifndef __WINSTRING_H_
#define __WINSTRING_H_

#ifdef _MSC_VER
#pragma once
#endif  // _MSC_VER

#ifdef _CONTRACT_GEN
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#endif

#include <apiset.h>
#include <apisetcconv.h>
#include <hstring.h>
#include <rpc.h>

/* APISET_NAME: api-ms-win-core-winrt-string-l1 */

#ifndef _APISET_WINRT_STRING_VER
#ifdef _APISET_MINCORE_VERSION
#if _APISET_MINCORE_VERSION >= 0x0100
#define _APISET_WINRT_STRING_VER 0x0100
#endif // _APISET_MINCORE_VERSION >= 0x0100
#endif // _APISET_MINCORE_VERSION
#endif // _APISET_WINRT_STRING_VER

#pragma region Application Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

STDAPI
WindowsCreateString(
    _In_reads_opt_(length) PCNZWCH sourceString,
    UINT32 length,
    _Outptr_result_maybenull_ _Result_nullonfailure_ HSTRING * string
    );

STDAPI
WindowsCreateStringReference(
    _In_reads_opt_(length+1) PCWSTR sourceString,
    UINT32 length,
    _Out_ HSTRING_HEADER * hstringHeader,
    _Outptr_result_maybenull_ _Result_nullonfailure_ HSTRING * string
    );

STDAPI
WindowsDeleteString(
    _In_opt_ HSTRING string
    );

STDAPI
WindowsDuplicateString(
    _In_opt_ HSTRING string,
    _Outptr_result_maybenull_ _Result_nullonfailure_ HSTRING * newString
    );

STDAPI_(UINT32)
WindowsGetStringLen(
    _In_opt_ HSTRING string
    );

STDAPI_(PCWSTR)
WindowsGetStringRawBuffer(
    _In_opt_ HSTRING string,
    _Out_opt_ UINT32 * length
    );

STDAPI_(BOOL)
WindowsIsStringEmpty(
    _In_opt_ HSTRING string
    );

STDAPI
WindowsStringHasEmbeddedNull(
    _In_opt_ HSTRING string,
    _Out_ BOOL * hasEmbedNull
    );

STDAPI
WindowsCompareStringOrdinal(
    _In_opt_ HSTRING string1,
    _In_opt_ HSTRING string2,
    _Out_ INT32 * result
    );

STDAPI
WindowsSubstring(
    _In_opt_ HSTRING string,
    UINT32 startIndex,
    _Outptr_result_maybenull_ _Result_nullonfailure_ HSTRING * newString
    );

STDAPI
WindowsSubstringWithSpecifiedLength(
    _In_opt_ HSTRING string,
    UINT32 startIndex,
    UINT32 length,
    _Outptr_result_maybenull_ _Result_nullonfailure_ HSTRING * newString
    );
  
STDAPI
WindowsConcatString(
    _In_opt_ HSTRING string1,
    _In_opt_ HSTRING string2,
    _Outptr_result_maybenull_ _Result_nullonfailure_ HSTRING * newString
    );

STDAPI
WindowsReplaceString(
    _In_opt_ HSTRING string,
    _In_opt_ HSTRING stringReplaced,
    _In_opt_ HSTRING stringReplaceWith,
    _Outptr_result_maybenull_ _Result_nullonfailure_ HSTRING * newString
    );

STDAPI
WindowsTrimStringStart(
    _In_opt_ HSTRING string,
    _In_opt_ HSTRING trimString,
    _Outptr_result_maybenull_ _Result_nullonfailure_ HSTRING * newString
    );

STDAPI
WindowsTrimStringEnd(
    _In_opt_ HSTRING string,
    _In_opt_ HSTRING trimString,
    _Outptr_result_maybenull_ _Result_nullonfailure_ HSTRING * newString
    );


// Two-phase construction
STDAPI
WindowsPreallocateStringBuffer(
    UINT32 length,
    _Outptr_result_buffer_(length+1) WCHAR ** charBuffer,
    _Outptr_result_maybenull_ _Result_nullonfailure_ HSTRING_BUFFER * bufferHandle
    );

STDAPI
WindowsPromoteStringBuffer(
    _In_ HSTRING_BUFFER bufferHandle,
    _Outptr_result_maybenull_ _Result_nullonfailure_ HSTRING * string
    );

STDAPI
WindowsDeleteStringBuffer(
    _In_opt_ HSTRING_BUFFER bufferHandle
    );


#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#pragma endregion

#pragma region Desktop Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

// HSTRING Inspection
typedef HRESULT (WINAPI *PINSPECT_HSTRING_CALLBACK)(_In_ void* context, UINT_PTR readAddress, UINT32 length, _Out_writes_(length) BYTE* buffer);
STDAPI
WindowsInspectString(
    _In_ UINT_PTR targetHString,
    USHORT machine,
    _In_ PINSPECT_HSTRING_CALLBACK callback,
    _In_opt_ void * context,
    _Out_ UINT32 * length,
    _Out_ UINT_PTR * targetStringAddress
    );


#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma endregion

#pragma region Application Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Windows String Marshaler Exports 
ULONG
__RPC_USER
HSTRING_UserSize(
    __RPC__in ULONG * pFlags,
    ULONG StartingSize,
    __RPC__in HSTRING * ppidl
    );

UCHAR*
__RPC_USER
HSTRING_UserMarshal(
    __RPC__in ULONG * pFlags,
    __RPC__inout_xcount(0) UCHAR * pBuffer,
    __RPC__in HSTRING * ppidl
    );

UCHAR*
__RPC_USER
HSTRING_UserUnmarshal(
    __RPC__in ULONG * pFlags,
    __RPC__in_xcount(0) UCHAR * pBuffer,
    __RPC__out HSTRING * ppidl
    );

void
__RPC_USER
HSTRING_UserFree(
    __RPC__in ULONG * pFlags,
    __RPC__in HSTRING * ppidl
    );



#if defined(_WIN64)
        
ULONG
__RPC_USER
HSTRING_UserSize64(
    __RPC__in ULONG * pFlags,
    ULONG StartingSize,
    __RPC__in HSTRING * ppidl
    );

UCHAR*
__RPC_USER
HSTRING_UserMarshal64(
    __RPC__in ULONG * pFlags,
    __RPC__inout_xcount(0) UCHAR * pBuffer,
    __RPC__in HSTRING * ppidl
    );

UCHAR*
__RPC_USER
HSTRING_UserUnmarshal64(
    __RPC__in ULONG * pFlags,
    __RPC__in_xcount(0) UCHAR * pBuffer,
    __RPC__out HSTRING * ppidl
    );

void
__RPC_USER
HSTRING_UserFree64(
    __RPC__in ULONG * pFlags,
    __RPC__in HSTRING * ppidl
    );


#endif  // defined(_WIN64)

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#pragma endregion

#endif // __WINSTRING_H_

