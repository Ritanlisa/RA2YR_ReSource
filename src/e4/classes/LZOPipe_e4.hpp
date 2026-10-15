// G57w10 D-类体 supply: LZOPipe::ctor (raw 0x55C2B0; canon LZOPipe size=8)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct LZOPipe {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
// --- flat members (END) ---
    unsigned char q000[8];  // 0x0 (canon size filler)
    static unsigned int * Constructor(void *aP1, int a2, int a3);
    static int Destructor(void *aP1);
    int __pad_004;  // 0x4 [X30:type_map]
};
} // namespace gamemd
