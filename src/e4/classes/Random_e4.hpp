// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_Random_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_Random_DEF 1
struct Random {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    unsigned int u32_10;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int __thiscall AdvanceRandomBytes(char a2);
    static int Range(Random * aP1, int a2, int a3);
    int State();
    static int State(void *aP0);
    static int Gaussian(void *aP0);
    static int AdvanceRandomBytes(void *aP0);  // G57a1 static-form sync
};
    int AdvanceRandomBytes();  // G57w19k2 C2661 supply
#endif  // GAMEMD_G2_Random_DEF

} // namespace gamemd
