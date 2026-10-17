// G57w10 D-类体 supply: MapResourceClass::ctor (raw 0x595740; canon MapResourceClass size=4)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MapResourceClass {
    unsigned int tail_0;  // 0x0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int Constructor(void *aP1);
};
} // namespace gamemd
