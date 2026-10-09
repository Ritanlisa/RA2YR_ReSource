// G57w10 D-类体 supply: ControlClass::ctor (raw 0x48E520; canon ControlClass size=16)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ControlClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
// --- flat members (END) ---
    unsigned char q000[16];  // 0x0 (canon size filler)
    static unsigned int * Construct(void *aP1, int a2, int a3, int a4, int a5, int a6, int a7, char a8);  // 0x48E520 raw: _DWORD* Construct(ControlClass*, int, int, int, int, int, int, char)
};
} // namespace gamemd
