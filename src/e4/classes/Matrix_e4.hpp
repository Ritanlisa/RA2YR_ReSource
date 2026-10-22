// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Matrix {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * Copy12Float(int a2);
    int Scale(float a2, void *a1 = 0);
};

} // namespace gamemd
