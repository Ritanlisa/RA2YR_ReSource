// G57w10 D-类体 supply: SymbolTable (raw-anchored; canon size=8)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SymbolTable {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
// --- flat members (END) ---
    unsigned char q000[8];  // 0x0 (canon size filler)
    static char Insert(void *aP1, void *a2);
    static int Rebuild(...);  // w16g4 C3861 static supply (raw 0x006234B0)  // 0x624530 site-form 2-arg (raw 3-param receiver-elided variant)
};
} // namespace gamemd
