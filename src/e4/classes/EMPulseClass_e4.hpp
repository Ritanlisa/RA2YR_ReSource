// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct EMPulseClass {
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    unsigned int __pad_010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    char __pad_20[4];  // 0x20
    unsigned short u16_24;  // 0x24
    unsigned short u16_26;  // 0x26
    unsigned int u32_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    unsigned int u32_30;  // 0x30
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int IterateCellsInRadius(int pThis);
    EMPulseClass * CopyTo(void * a2, char a3);
    int StubReturn52();
    int StubReturn55();
};

} // namespace gamemd
