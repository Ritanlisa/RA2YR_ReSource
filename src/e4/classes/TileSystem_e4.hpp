// G57w10 D-类体 supply: TileSystem::ctor (raw 0x5AD740; canon TileSystem size=16)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TileSystem {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    unsigned char q000[16];  // 0x0 (canon size filler)
    static unsigned int * Constructor(void *aP1, int a2, int a3);
    static char BuildNodes(void *aP1);
    int __pad_000;  // 0x0 [X30:type_map]
};
} // namespace gamemd
