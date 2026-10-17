// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Vector3 {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int AddAssign(float *a2, void *a1 = 0);
    int * Subtract(int *a2, unsigned int *a3, void *a1 = 0, void *a4 = 0);
    int Magnitude();  // 0x41c3c0
};

} // namespace gamemd
