// G57w10 D-类体 supply: GlobalArray (raw 0x422B20; canon size=4)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct GlobalArray {
    unsigned char q000[4];  // 0x0 (canon size filler)
    static int FindString(void *aP1);  // 0x422B20 raw: int FindString(GlobalArray*)
};
} // namespace gamemd
