// G57w10 D-类体 supply: SubzoneHashVector::ctor (raw 0x58B070; canon SubzoneHashVector size=4)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SubzoneHashVector {
    unsigned int tail_0;  // 0x0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int * Construct(void *aP1, int a2, int a3);
};
} // namespace gamemd
