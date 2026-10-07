// G57w10 D-类体 supply: CellSystem (raw-anchored; canon size=4)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CellSystem {
    unsigned char q000[4];  // 0x0 (canon size filler)
    static int UpdateVisibility(void *aP1);  // 0x578100 raw: int UpdateVisibility(CellSystem*)
};
} // namespace gamemd
