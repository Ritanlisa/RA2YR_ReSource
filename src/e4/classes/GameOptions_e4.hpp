// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GameOptions {
    WinModemClass* __pad_000;  // 0x0
    int u32_4;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    char __pad_10[376];  // 0x10
    unsigned int u32_188;  // 0x188
    unsigned int u32_18C;  // 0x18C
    char __pad_190[608];  // 0x190
    unsigned int u32_3F0;  // 0x3F0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int GetEntry();
    char GameSpeedChanged();
    int __thiscall SaveLoad(int *a2);
};

} // namespace gamemd
