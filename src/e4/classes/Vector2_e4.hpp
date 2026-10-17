// GENERATED minimal flat class (fix_c2039_methods) -- G42.33 b3 core/supplied carrier
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Vector2 {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int NormalizeNonZero();  // 0x41C460 G42.33 b3 supplied-body sync
    unsigned int *  Subtract(unsigned int * a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x6DC4C0
};

} // namespace gamemd
