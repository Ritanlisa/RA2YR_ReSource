// G57w10 D-类体 supply: StartCombo (raw-anchored; canon size=4)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct StartCombo {
    unsigned char q000[4];  // 0x0 (canon size filler)
    static int IDToIndex(void *aP1);  // 0x4E4230 raw: int IDToIndex(StartCombo*)
};
} // namespace gamemd
