// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct WDTState_4 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int Capacity;  // 0x8
    unsigned int q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    unsigned char q014;  // 0x14
    int Count;  // 0x16
    unsigned int q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int q024;  // 0x24
    unsigned char q028;  // 0x28
    int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int IsInitialized;
    unsigned int Items;
    unsigned int q0042;
    unsigned int q0043;
    unsigned int q008;
// --- flat members (END) ---
    char Release(int a2,  unsigned int * a3);    // 0x76BA70
    int ddtor();  // 0x76B710
    int Read(int a2);  // 0x76BB90
    DynamicVector * QueryInterface(char a2);  // 0x76BC10
    unsigned int Write(int a2);  // 0x76B740
    unsigned int * Constructor();  // 0x76BC60
};
} // namespace gamemd
