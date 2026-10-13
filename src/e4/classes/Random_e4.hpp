// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_Random_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_Random_DEF 1
struct Random {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    int __thiscall AdvanceRandomBytes(char a2);
    static int Range(Random * aP1, int a2, int a3);
    int State();
    static int State(void *aP0);
    static int Gaussian(void *aP0);
    static int AdvanceRandomBytes(void *aP0);  // G57a1 static-form sync
    unsigned int u32_24;  // 0x24 (offset-truth)

    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
};
    int AdvanceRandomBytes();  // G57w19k2 C2661 supply
#endif  // GAMEMD_G2_Random_DEF

} // namespace gamemd
