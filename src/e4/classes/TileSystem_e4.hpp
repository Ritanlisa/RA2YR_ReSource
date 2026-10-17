// G57w10 D-类体 supply: TileSystem::ctor (raw 0x5AD740; canon TileSystem size=16)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TileSystem {
    int __pad_000;  // 0x0
    int TileSystem_field_0x04;  // 0x4
    int TileSystem_field_0x08;  // 0x8
    int TileSystem_field_0x0C;  // 0xC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int * Constructor(void *aP1, int a2, int a3);
    static char BuildNodes(void *aP1);
};
} // namespace gamemd
