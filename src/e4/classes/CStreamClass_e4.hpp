// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct CStreamClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
    int Count;  // 0x16
// --- flat members (END) ---
    void* AddRef_slot;  // 0x0 (no offset truth)
    void* QueryInterface_slot;  // 0x0 (no offset truth)
    void* Release_slot;  // 0x0 (no offset truth)
    static LONG Release(CStreamClass *pThis);
    static int QueryInterface(CStreamClass *pThis, const void *a2, unsigned int *a3);
    static BOOL IsEmpty(CStreamClass *pThis, int a2);
    static LONG AddRef(CStreamClass *pThis);
    CStreamClass * ddtor(int a2, char a3);
    LONG IStreamAddRef(int a1);
    LONG IStreamRelease(int a1);
    int CopyStreamToBuffer(IStream *Src, signed int Size, size_t *a4, int a1, int a2, int a3, int a5, int a6);
    int Commit(int a1);
    int IStreamQueryInterface(int a1, const void * a2, unsigned int * a3);
    int LockRegion(int a1, int a2, int a3, int a4, int a5, int a6);
    int Read(int a1, int a2, int a3, int a4, int a5);
    int Revert(int a1, int a2, int a3, int a4, int a5, int a6);
    int Seek(int a1, int a2, int a3, int a4, int a5, int a6);
    int SetSize(int a1, int a2);
    int Stat(int a1, int a2);
    int UnlockRegion(int a1, int a2, int a3);
    int Write(int a1, int a2, int a3);
    unsigned int m_8;  // pad compile-supply (G41.47)
    unsigned int m_10;  // pad compile-supply (G41.47)
    unsigned char m_1[64];  // pad compile-supply (G41.47)
    void* __pad_008;  // 0x8 [X30:type_map]
    int __pad_011;  // 0x11 [X30:type_map]
    unsigned char __pad_01A;  // 0x1A [X30:canon]
};

} // namespace gamemd
