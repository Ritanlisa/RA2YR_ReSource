// G57w10 D-类体 supply: ControlClass::ctor (raw 0x48E520; canon ControlClass size=16)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ControlClass {
    void* ptr_0;  // 0x0
    int __pad_004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int * Construct(void *aP1, int a2, int a3, int a4, int a5, int a6, int a7, char a8);
};
} // namespace gamemd
