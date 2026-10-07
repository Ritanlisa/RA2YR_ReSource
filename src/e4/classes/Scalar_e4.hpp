// G57w10 D-类体 supply: Scalar (raw-anchored; canon size=4)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Scalar {
    unsigned char q000[4];  // 0x0 (canon size filler)
    static void ** Dtor(void *aP1, char a2);  // 0x5AC340 raw: void** Dtor(Scalar*, char)
};
} // namespace gamemd
