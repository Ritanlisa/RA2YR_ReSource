// G57w10 D-类体 supply: ToggleClass::ctor (raw 0x723E60; canon ToggleClass size=8)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ToggleClass {
    void * ptr_0;  // 0x0
    unsigned int __pad_004;  // 0x4
    char __pad_8[4];  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    char __pad_1C[16];  // 0x1C
    unsigned char u8_2C;  // 0x2C
    unsigned char u8_2D;  // 0x2D
    char __pad_2E[2];  // 0x2E
    unsigned int u32_30;  // 0x30
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int Construct(int aP1, int a2, int a3, int a4, int a5, int a6);
};
} // namespace gamemd
