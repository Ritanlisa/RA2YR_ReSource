// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct Building {
    int __pad_0;  // 0x0
    int Building_field_0x4;  // 0x4
    int Building_field_0x8;  // 0x8
    char __pad_C[56];  // 0xC
    unsigned int u32_44;  // 0x44
    char __pad_48[84];  // 0x48
    unsigned int u32_9C;  // 0x9C
    int q0A0;  // 0xA0
    char __pad_A4[122];  // 0xA4
    unsigned char u32_11E;  // 0x11E
    char __pad_11F[389];  // 0x11F
    int Building_field_0x2A4;  // 0x2A4
    unsigned int tail_2A8;  // 0x2A8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AnimClass * * ComputePosition(int *aP1);  // 0x425D10
    int GetNthOfType();  // 0x485020
    int GetRenderType();  // 0x772A90
    static unsigned int *  GetFoundationSize(unsigned int * a1, unsigned int a2);  // 0x69E7E0
};
} // namespace gamemd
