// G57w10 D-类体 supply: SymbolTable (raw-anchored; canon size=8)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SymbolTable {
    void* __pad_000;  // 0x0
    int q004;  // 0x4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static char Insert(void *aP1, void *a2);
    static int Rebuild(int** p0);  // x4:signals@0x6234b0
};
} // namespace gamemd
