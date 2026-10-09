// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_Random_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_Random_DEF 1
struct Random {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
// --- flat members (END) ---
    int __thiscall AdvanceRandomBytes(char a2);
    static int Range(Random * aP1, int a2, int a3);  // G57w10-S raw 0x0065C7E0 (was C2597 interim stub)
    int State();
    static int State(void *aP0);  // G57a1 static-form sync (Random::State(&Randomizer_Global) sites)
    static int Gaussian(void *aP0);  // G57a1 static-form sync (RandomMap 0x59c2c1+)
    static int AdvanceRandomBytes(void *aP0);  // G57a1 static-form sync
    unsigned int u32_24;  // 0x24 (offset-truth supply)
};
    int AdvanceRandomBytes();  // G57w19k2 C2661 supply
#endif  // GAMEMD_G2_Random_DEF

} // namespace gamemd
