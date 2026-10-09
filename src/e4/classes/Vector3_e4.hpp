// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Vector3 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
// --- flat members (END) ---
    int AddAssign(float *a2);
    int * Subtract(int *a2, unsigned int *a3);
    int Magnitude();  // 0x41c3c0
    double q008;  // G42.39 data supply (Sqrt operand)
    double q040;  // G42.39 data supply (Sqrt operand)
};

} // namespace gamemd
