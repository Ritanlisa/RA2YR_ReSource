// G57w10 D-类体 supply: ToggleClass::ctor (raw 0x723E60; canon ToggleClass size=8)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ToggleClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
// --- flat members (END) ---
    unsigned char q000[8];  // 0x0 (canon size filler)
    static int Construct(int aP1, int a2, int a3, int a4, int a5, int a6);  // 0x723E60 raw: int Construct(int this, int, int, int, int, int) [raw int-this]
};
} // namespace gamemd
