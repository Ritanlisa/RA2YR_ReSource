// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct FrameSnapshot {
    unsigned char ptr_0;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    unsigned int u32_8;  // 0x8
    char __pad_C[4];  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned short u16_14;  // 0x14
    char __pad_16[2];  // 0x16
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned short * Init(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);
    unsigned short * InitMax(int a2, void *a1 = 0);
};

} // namespace gamemd
