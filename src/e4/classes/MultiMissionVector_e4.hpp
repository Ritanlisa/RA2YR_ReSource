// G57w10 D-类体 supply: MultiMissionVector::ctor (raw 0x5EF0B0; canon MultiMissionVector size=4)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MultiMissionVector {
    unsigned char q000[4];  // 0x0 (canon size filler)
    static unsigned int * Constructor(void *aP1, int a2, int a3);  // 0x5EF0B0 raw: _DWORD* Constructor(MultiMissionVector*, int, int)
};
} // namespace gamemd
