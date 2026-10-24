// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ChatEvent {
    unsigned int tail_0;  // 0x0
    unsigned int q004;  // 0x4
    unsigned int q008;  // 0x8
    unsigned int q00C;  // 0xC
    char __pad_10[4];  // 0x10
    unsigned char u8_14;  // 0x14
    char __pad_15[3];  // 0x15
    unsigned int q018;  // 0x18
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char ProcessStrings(char *a2, int a3, int a4, int a5);
};

} // namespace gamemd
