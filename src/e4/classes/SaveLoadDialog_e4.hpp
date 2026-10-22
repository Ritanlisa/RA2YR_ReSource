// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SaveLoadDialog {
    int __pad_000;  // 0x0
    int q004;  // 0x4
    int q008;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    char __pad_1C[4];  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int u32_24;  // 0x24
    char __pad_28[8];  // 0x28
    unsigned int u32_30;  // 0x30
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    bool DlgProc(void *a1 = 0);
};

} // namespace gamemd
