// G57w10 D-类体 supply: CellLand::IsBuildable (raw 0x4863D0 fn_48.c:3860; canon CellLand size=4)
// Dedicated header: NOT in _tree_full (misc_ext.hpp `class CellLand` twin co-included in
// supplied_bodies.cpp -> C2011); consumer TUs include this explicitly after e4_globals.hpp.
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CellLand {
    unsigned char q000[4];  // 0x0 (canon size=4)
    static int IsBuildable(CellLand *aP1);  // 0x4863D0 raw: int __thiscall IsBuildable(CellLand*)
};
} // namespace gamemd
