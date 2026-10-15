// G57w10 D-类体 supply: ObjectPlacement (raw 0x481180; canon size=8)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ObjectPlacement {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    unsigned char q000[8];  // 0x0 (canon size filler)
    static int * CalcPosition(void *aP1, void *a2, void *a3, char a4, char a5, char a6);
    int __pad_000;  // 0x0 [X30:type_map]
    int ObjectPlacement_field_0x04;  // 0x4 [X30:type_map]
    int __pad_0;  // 0x0 [X30:type_map]
};
} // namespace gamemd
