// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct CStreamClass {
    void * Release_slot;  // 0x0
    unsigned int CStreamClass_field_0x04;  // 0x4
    int CStreamClass_field_0x08;  // 0x8
    int q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char u8_11;  // 0x11
    char __pad_12[2];  // 0x12
    unsigned char q014;  // 0x14
    char ddtor_15[3];  // 0x15
    unsigned int q018;  // 0x18
    unsigned int q01C;  // 0x1C
    unsigned int q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    int q02C;  // 0x2C
    int q030;  // 0x30
    int q034;  // 0x34
    int q038;  // 0x38
    int q03C;  // 0x3C
    int q040;  // 0x40
    int q044;  // 0x44
    int q048;  // 0x48
    int q04C;  // 0x4C
    int q050;  // 0x50
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
