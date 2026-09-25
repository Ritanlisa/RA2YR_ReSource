// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVectorClass_PAD {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
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
    unsigned int q008;
    unsigned int q010;
    unsigned int Items2;
// --- flat members (END) ---
    void ddtor();  // 0x49E950
    int Clear(int a2);  // 0x49E9A0
    void Clear_49E9B0();  // 0x49E9B0
    char AddRef(int a2);  // 0x49EA30
    char Remove(int a2, unsigned int * a3);  // 0x49EA70
    int GetSize(unsigned int * a2);  // 0x49EB20
    char SetCapacity(int a2, unsigned int * a3);  // 0x49ED30
    int FindItemIndex(unsigned int * a2);  // 0x49EDE0
    DynamicVector * Add(char a2);  // 0x49EE10
    DynamicVector * Destructor(char a2);  // 0x49F040
    unsigned int Get(int a2);  // 0x49E980
    unsigned int GetCount(int a2);  // 0x49E9E0
};
} // namespace gamemd
