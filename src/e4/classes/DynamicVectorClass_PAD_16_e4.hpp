// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVectorClass_PAD_16 {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    unsigned int Items;  // 0x4
    void* pad_008;  // 0x8
    unsigned char IsInitialized;  // 0xC
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
    unsigned int Items2;
    unsigned int Capacity;
// --- flat members (END) ---
    int Get(int a2);  // 0x49EA00
    char Add(int a2);  // 0x49EB50
    char Release(int a2,  unsigned int * a3);    // 0x49EB90
    void Remove();  // 0x49EC40
    int GetSize(unsigned int * a2);  // 0x49EC70
    VectorClass_flat * QueryInterface(char a2);  // 0x49EFF0
    unsigned int GetCapacity(int a2);  // 0x49ECB0
};
} // namespace gamemd
