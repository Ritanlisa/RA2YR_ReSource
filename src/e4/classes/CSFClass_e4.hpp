// G57w10 D-类体 supply: CSFClass (raw-anchored; canon size=12)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CSFClass {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
// --- flat members (END) ---
    unsigned char q000[12];  // 0x0 (canon size filler)
    static int LoadFile(const char *aP1);  // 0x7346A0 raw: int CSFClass_LoadFile(const char* this)
};
} // namespace gamemd
