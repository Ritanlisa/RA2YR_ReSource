// G57w10 D-类体 supply: TechnoTypeVector::ctor (raw 0x4CABF0; canon TechnoTypeVector size=8)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TechnoTypeVector {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
// --- flat members (END) ---
    unsigned char q000[8];  // 0x0 (canon size filler)
    static unsigned int * Constructor(void *aP1, int a2, int a3);  // 0x4CABF0 raw: _DWORD* Constructor(TechnoTypeVector*, int, int)
};
} // namespace gamemd
