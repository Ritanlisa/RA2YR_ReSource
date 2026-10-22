// G57w10 D-类体 supply: TechnoTypeVector::ctor (raw 0x4CABF0; canon TechnoTypeVector size=8)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TechnoTypeVector {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char u8_C;  // 0xC
    unsigned char u8_D;  // 0xD
    char __pad_E[2];  // 0xE
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int * Constructor(void *aP1, int a2, int a3);
};
} // namespace gamemd
