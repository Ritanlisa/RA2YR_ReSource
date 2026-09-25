// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVectorClass_SubzoneConn {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    unsigned int Capacity;  // 0x8
    unsigned int q00C;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    unsigned int q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned int q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int Count;
    unsigned int IsInitialized;
    unsigned int Items2;
// --- flat members (END) ---
    char Release(int a2,  char * a3);    // 0x589190
    DynamicVector * Add(char a2);  // 0x5890B0
    int GetSize(unsigned int * a2);  // 0x5892D0
    unsigned int Remove(int a2);  // 0x588CC0
};
} // namespace gamemd
