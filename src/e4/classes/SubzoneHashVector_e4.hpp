// G57w10 D-类体 supply: SubzoneHashVector::ctor (raw 0x58B070; canon SubzoneHashVector size=4)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SubzoneHashVector {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
// --- flat members (END) ---
    unsigned char q000[4];  // 0x0 (canon size filler)
    static unsigned int * Construct(void *aP1, int a2, int a3);  // 0x58B070 raw: _DWORD* Construct(SubzoneHashVector*, int, int)
};
} // namespace gamemd
