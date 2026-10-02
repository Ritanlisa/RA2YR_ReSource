// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct CStreamClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char __pad_0[87];  // 0x0
    void* vtable2;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned char q014;  // 0x14
    int Count;  // 0x16
    unsigned char q018;  // 0x18
    unsigned int q01A;  // 0x1A
    unsigned char q01C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int q033;  // 0x33
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned char q03C;  // 0x3C
    unsigned int q03D;  // 0x3D
    unsigned char q040;  // 0x40
    bool q042;  // 0x42
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned char q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned char q050;  // 0x50
    unsigned int IsEmpty;
// --- flat members (END) ---
    CStreamClass * ddtor(int a2, char a3);
    LONG IStreamAddRef(int a1);
    LONG IStreamRelease(int a1);
    int CopyStreamToBuffer(int a1, IStream * Src, signed int Size, size_t * a4);
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
    unsigned char m_8[64];  // pad compile-supply (G41.47)
    unsigned char m_10[64];  // pad compile-supply (G41.47)
    unsigned char m_1[64];  // pad compile-supply (G41.47)
};

} // namespace gamemd
