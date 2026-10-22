// G57w10 D-类体 supply: CellLand::IsBuildable (raw 0x4863D0 fn_48.c:3860; canon CellLand size=4)
// Dedicated header: NOT in _tree_full (misc_ext.hpp `class CellLand` twin co-included in
// supplied_bodies.cpp -> C2011); consumer TUs include this explicitly after e4_globals.hpp.
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CellLand {
    char __tail_0[4];  // 0x0
    char __pad_4[52];  // 0x4
    unsigned int u32_38;  // 0x38
    char __pad_3C[222];  // 0x3C
    unsigned char u8_11A;  // 0x11A
    char __pad_11B[1];  // 0x11B
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int IsBuildable(CellLand *aP1);
};
} // namespace gamemd
