// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Connection {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    char __pad_8[48];  // 0x8
    int q038;  // 0x38
    char __pad_3C[12];  // 0x3C
    unsigned int u32_48;  // 0x48
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int GetSpeed();  // 0x5422F0
    int Close(void *a1 = 0, void *a2 = 0);  // 0x543090
};
} // namespace gamemd