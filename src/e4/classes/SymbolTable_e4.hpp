// G57w10 D-类体 supply: SymbolTable (raw-anchored; canon size=8)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SymbolTable {
    void* __pad_000;  // 0x0
    int q004;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    char __pad_10[4];  // 0x10
    unsigned char u8_14;  // 0x14
    char __pad_15[3];  // 0x15
    unsigned int u32_18;  // 0x18
    char __pad_1C[24];  // 0x1C
    unsigned int u32_34;  // 0x34
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static char Insert(void *aP1, void *a2);
    static int Rebuild(int** p0);  // x4:signals@0x6234b0
};
} // namespace gamemd
