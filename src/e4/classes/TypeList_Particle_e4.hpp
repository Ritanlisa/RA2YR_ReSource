// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TypeList_Particle {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    unsigned int q008;  // 0x8
    unsigned int q00C;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned int q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q050;  // 0x50
    unsigned int Capacity;
    unsigned int IsInitialized;
    unsigned int Items2;
// --- flat members (END) ---
    int GetIndex(int a2);  // 0x459FE0
    char AddRef(int a2);  // 0x45A180
    char Remove(int a2,  unsigned int * a3);    // 0x45A1C0
    int GetSize(unsigned int * a2);  // 0x45A2A0
    unsigned int GetCapacity(int a2);  // 0x45A2E0
    VectorClass_flat * Add(char a2);  // 0x45A9C0
};
} // namespace gamemd
