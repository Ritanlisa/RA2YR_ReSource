// G57w10 D-类体 supply: CellLand::IsBuildable (raw 0x4863D0 fn_48.c:3860; canon CellLand size=4)
// Dedicated header: NOT in _tree_full (misc_ext.hpp `class CellLand` twin co-included in
// supplied_bodies.cpp -> C2011); consumer TUs include this explicitly after e4_globals.hpp.
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CellLand {
    unsigned int __tail_0;  // 0x0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int IsBuildable(CellLand *aP1);
};
} // namespace gamemd
