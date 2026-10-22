// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DialogControl {
    unsigned char __pad_000;  // 0x0
    char __pad_1[1];  // 0x1
    unsigned char u8_2;  // 0x2
    char __pad_3[1];  // 0x3
    int q004;  // 0x4
    int q008;  // 0x8
    int u32_C;  // 0xC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Hide();
    int IsHidden();
    int Show(void *a1, void *a2);
    unsigned int * Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
};

} // namespace gamemd
