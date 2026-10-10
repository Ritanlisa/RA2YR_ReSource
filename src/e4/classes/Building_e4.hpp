// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct Building {
// --- flat members (BEGIN) ---
    unsigned int tail_2A8;  // 0x2A8
// --- flat members (END) ---
    AnimClass * *  ComputePosition(int * a2);  // 0x425D10
    int GetNthOfType();  // 0x485020
    int GetRenderType();  // 0x772A90
    static unsigned int *  GetFoundationSize(unsigned int * a1, unsigned int a2);  // 0x69E7E0
    static double Building_field_0xA0(...);  // plateau: C2039/C3861 stub
    static double __pad_C(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
