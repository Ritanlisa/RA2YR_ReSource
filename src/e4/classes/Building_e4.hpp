// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct Building {
// --- flat members (BEGIN) ---
    unsigned int tail_2A8;  // 0x2A8
// --- flat members (END) ---
    AnimClass * * ComputePosition(int *aP1);  // 0x425D10
    int GetNthOfType();  // 0x485020
    int GetRenderType();  // 0x772A90
    static unsigned int *  GetFoundationSize(unsigned int * a1, unsigned int a2);  // 0x69E7E0

    int q0A0;  // X10 supply (member_lookup)
    unsigned int u32_11E;  // X10 supply (member_lookup)
    unsigned int u32_44;  // X10 supply (member_lookup)
    unsigned int u32_9C;  // X10 supply (member_lookup)
    int __pad_000;  // 0x0 [X30:type_map]


    int __pad_0;  // 0x0 [X55 W3 supply (render vocab)]
};
} // namespace gamemd
