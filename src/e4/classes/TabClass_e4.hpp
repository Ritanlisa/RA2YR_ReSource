// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct TabClass {
    void* ptr_0;  // 0x0
    unsigned int __pad_004;  // 0x4
    int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    int TabClass_field_0x10;  // 0x10
    int TabClass_field_0x14;  // 0x14
    char __pad_18[4];  // 0x18
    int TabClass_field_0x1C;  // 0x1C
    char __pad_20[56];  // 0x20
    int TabClass_field_0x58;  // 0x58
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int DrawPower(void *a1);
    unsigned int * initStripClass();
    int DrawPower(void *a1, void * aGrey);
};

} // namespace gamemd
