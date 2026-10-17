// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct CStreamClass {
    void* Release_slot;  // 0x0
    unsigned int CStreamClass_field_0x04;  // 0x4
    int CStreamClass_field_0x08;  // 0x8
    int CStreamClass_field_0x0C;  // 0xC
    unsigned int CStreamClass_field_0x10;  // 0x10
    int CStreamClass_field_0x14;  // 0x14
    unsigned int CStreamClass_field_0x18;  // 0x18
    unsigned int CStreamClass_field_0x1C;  // 0x1C
    unsigned int CStreamClass_field_0x20;  // 0x20
    int CStreamClass_field_0x24;  // 0x24
    int CStreamClass_field_0x28;  // 0x28
    int CStreamClass_field_0x2C;  // 0x2C
    int CStreamClass_field_0x30;  // 0x30
    int CStreamClass_field_0x34;  // 0x34
    int CStreamClass_field_0x38;  // 0x38
    int CStreamClass_field_0x3C;  // 0x3C
    int CStreamClass_field_0x40;  // 0x40
    int CStreamClass_field_0x44;  // 0x44
    int CStreamClass_field_0x48;  // 0x48
    int CStreamClass_field_0x4C;  // 0x4C
    int CStreamClass_field_0x50;  // 0x50
// --- flat members (BEGIN) ---
// --- flat members (END) ---
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
};

} // namespace gamemd
