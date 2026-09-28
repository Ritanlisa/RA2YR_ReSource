// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Connection {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    unsigned char u8_5;  // 0x5
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int q028;  // 0x28
    unsigned char q02C;  // 0x2C
    void* q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned int q040;  // 0x40
    void* q048;  // 0x48
// --- flat members (END) ---
    int GetSpeed();  // 0x5422F0
    int Close();  // 0x543090
};
} // namespace gamemd
