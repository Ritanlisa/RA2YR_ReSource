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
    char __pad_10[14];  // 0x10
    unsigned char u32_1E;  // 0x1E
    char __pad_1F[29];  // 0x1F
    unsigned int u32_3C;  // 0x3C
    unsigned int u32_40;  // 0x40
    char __pad_44[24];  // 0x44
    unsigned int u32_5C;  // 0x5C
    char __pad_60[4];  // 0x60
    unsigned int u32_64;  // 0x64
    unsigned int u32_68;  // 0x68
    char __pad_6C[36];  // 0x6C
    unsigned int u32_90;  // 0x90
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Hide();
    int IsHidden();
    int Show(void *a1, void *a2);
    unsigned int * Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
};

} // namespace gamemd
