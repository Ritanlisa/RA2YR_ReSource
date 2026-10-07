// G57w10 D-类体 supply: LZOPipe::ctor (raw 0x55C2B0; canon LZOPipe size=8)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct LZOPipe {
    unsigned char q000[8];  // 0x0 (canon size filler)
    static unsigned int * Constructor(void *aP1, int a2, int a3);  // 0x55C2B0 raw: _DWORD* Constructor(LZOPipe*, int, int)
    static int Destructor(void *aP1);  // 0x55C310 raw: int Destructor(LZOPipe*)
};
} // namespace gamemd
