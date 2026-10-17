// G57w10 D-类体 supply: CSFClass (raw-anchored; canon size=12)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CSFClass {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int CSFClass_field_0x04;  // 0x4
    int CSFClass_field_0x08;  // 0x8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int LoadFile(const char *aP1);
};
} // namespace gamemd
