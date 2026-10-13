// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Vector3 {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    int AddAssign(float *a2, void *a1 = 0);
    int * Subtract(int *a2, unsigned int *a3, void *a1 = 0, void *a4 = 0);
    int Magnitude();  // 0x41c3c0
    double q008;  // G42.39 data supply (Sqrt operand)
    double q040;  // G42.39 data supply (Sqrt operand)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
};

} // namespace gamemd
