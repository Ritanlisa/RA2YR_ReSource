// G57w10 D-类体 supply: TechnoTypeVector::ctor (raw 0x4CABF0; canon TechnoTypeVector size=8)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TechnoTypeVector {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int * Constructor(void *aP1, int a2, int a3);
};
} // namespace gamemd
