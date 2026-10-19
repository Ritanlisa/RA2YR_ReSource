// G57w10 D-类体 supply: LZOPipe::ctor (raw 0x55C2B0; canon LZOPipe size=8)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct LZOPipe {
    void* ptr_0;  // 0x0
    int __pad_004;  // 0x4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int * Constructor(void *aP1, int a2, int a3);
    static int Destructor(void *aP1);
};
} // namespace gamemd
