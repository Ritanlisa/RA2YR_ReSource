// G57w10 D-类体 supply: MapResourceClass::ctor (raw 0x595740; canon MapResourceClass size=4)
// Dedicated e4 carrier (fwd-only before; consumer TUs include explicitly).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MapResourceClass {
    unsigned int tail_0;  // 0x0
    char __pad_4[372];  // 0x4
    unsigned int u32_178;  // 0x178
    unsigned int u32_17C;  // 0x17C
    unsigned int u32_180;  // 0x180
    unsigned int u32_184;  // 0x184
    char __pad_188[308];  // 0x188
    unsigned int u32_2BC;  // 0x2BC
    unsigned int u32_2C0;  // 0x2C0
    char __pad_2C4[56];  // 0x2C4
    unsigned int u32_2FC;  // 0x2FC
    unsigned char u8_300;  // 0x300
    char __pad_301[3];  // 0x301
    unsigned int u32_304;  // 0x304
    char __pad_308[4];  // 0x308
    unsigned int u32_30C;  // 0x30C
    unsigned char u8_310;  // 0x310
    char __pad_311[3];  // 0x311
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int Constructor(void *aP1);
};
} // namespace gamemd
