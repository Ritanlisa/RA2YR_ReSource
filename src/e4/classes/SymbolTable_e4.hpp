// G57w10 D-类体 supply: SymbolTable (raw-anchored; canon size=8)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SymbolTable {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    unsigned char q000[8];  // 0x0 (canon size filler)
    static char Insert(void *aP1, void *a2);
    static int Rebuild(int** p0);  // x4:signals@0x6234b0
    void* __pad_000;  // 0x0 [X30:type_map]
};
} // namespace gamemd
