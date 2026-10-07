// G57w10 D-类体 supply: PlanManager (raw 0x63A230; canon size=4)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct PlanManager {
    unsigned char q000[4];  // 0x0 (canon size filler)
    static int Notify(void *aP1);  // 0x63A230 raw: int Notify(PlanManager*)
};
} // namespace gamemd
