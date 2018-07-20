// ==++==
// 
//   Copyright (c) Microsoft Corporation.  All rights reserved.
// 
// ==--==

#ifndef __RO_METADATA_H__
#define __RO_METADATA_H__

#if NTDDI_VERSION >= NTDDI_WIN8

// Creates dispenser class - interfaces IMetaDataDispenser or IMetaDataDispenserEx.
// Arguments:
//    rclsid - Only CLSID_CorMetaDataDispenser supported.
//    riid   - Interfaces supported: IID_IMetaDataDispenser, IID_IMetaDataDispenserEx.
STDAPI MetaDataGetDispenser(
        __in REFCLSID            rclsid, 
        __in REFIID              riid, 
        __deref_out LPVOID FAR * ppv);

#endif //NTDDI_VERSION >= NTDDI_WIN8

#endif //!__RO_METADATA_H__
