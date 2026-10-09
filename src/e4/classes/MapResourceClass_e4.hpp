// G57w10 D-类体 supply: MapResourceClass::ctor (raw 0x595740; canon MapResourceClass size=4)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MapResourceClass {
// --- flat members (BEGIN) ---
    void* q000;  // 0x0
// --- flat members (END) ---
    unsigned char q000[4];  // 0x0 (canon size filler)
    static int Constructor(void *aP1);  // 0x595740 raw: int Constructor(MapResourceClass*)
};
} // namespace gamemd
