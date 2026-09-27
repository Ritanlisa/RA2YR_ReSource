// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TypeList_Infantry {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    unsigned int q008;  // 0x8
    unsigned int q00C;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    unsigned int ;  // 0x10
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
    unsigned int IsInitialized;
    unsigned int Capacity;
    unsigned int Items2;
    unsigned int Count;
// --- flat members (END) ---
    void ddtor();  // 0x5128A0
    unsigned int GetIndex(int a2);  // 0x5128D0
    int Clear(int a2);  // 0x5128F0
    TypeList_flat * Add(char a2);  // 0x5129F0
    char AddRef(int a2);  // 0x512C40
    DynamicVector * Constructor(char a2);  // 0x512E20
    char Remove(int a2,  unsigned int * a3);    // 0x512E70
    int GetSize(unsigned int * a2);  // 0x512F70
    DynamicVector * Constructor_0(char a2);  // 0x5131F0
    DynamicVector * Constructor_1(char a2);  // 0x5135C0
};
} // namespace gamemd
