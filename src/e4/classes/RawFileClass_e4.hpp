// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#ifndef GAMEMD_E4_FLAT_RawFileClass
#define GAMEMD_E4_FLAT_RawFileClass 1  // G57c2: suppress minimal_carriers.hpp twin
#endif

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_RawFileClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_RawFileClass_DEF 1
struct RawFileClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    int FilePointer;  // 0x4
    int FileSize;  // 0x8
    void* Handle;  // 0xC
    unsigned int FileName;  // 0x10
    char FileTimeDateLo[2];  // 0x14
    char FileTimeDateHi[2];  // 0x16
    bool FileNameAllocated;  // 0x18
    unsigned char tail_19;  // 0x19
// --- flat members (END) ---
    int Close(int a2, int a3);
    int Dtor(void *a1 = 0);
     unsigned int * Construct(int a2, void *a1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    int Write(void *a1 = 0);
    char __tail_0[4];  // 0x0 (ml)
    static double CacheReadAhead(...);  // plateau: C2039/C3861 stub
};
#endif  // GAMEMD_G2_RawFileClass_DEF

} // namespace gamemd
