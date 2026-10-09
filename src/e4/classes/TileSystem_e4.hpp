// G57w10 D-类体 supply: TileSystem::ctor (raw 0x5AD740; canon TileSystem size=16)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TileSystem {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char u8_D;  // 0xD
// --- flat members (END) ---
    unsigned char q000[16];  // 0x0 (canon size filler)
    static unsigned int * Constructor(void *aP1, int a2, int a3);  // 0x5AD740 raw: _DWORD* Constructor(TileSystem*, int, int)
    static char BuildNodes(void *aP1);  // 0x58D620 raw: char BuildNodes(TileSystem*)
};
} // namespace gamemd
