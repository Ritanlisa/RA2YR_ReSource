// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Coord2D {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * Add(unsigned int *aP1, unsigned int *aP2, void *a1 = 0);
    int *  Sub(int * a2, unsigned int * a3);  // 0x487f20
};

} // namespace gamemd
