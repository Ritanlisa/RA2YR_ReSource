// G57w10 D-类体 supply: TileData::ctor (raw 0x58BDC0; canon TileData size=4)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TileData {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int u16_2;  // 0x2
// --- flat members (END) ---
    unsigned char q000[4];  // 0x0 (canon size filler)
    static unsigned int * Constructor(void *aP1);  // 0x58BDC0 raw: _DWORD* Constructor(TileData*)
};
} // namespace gamemd
