// GENERATED minimal flat class (fix_c2039_methods) -- G42.33 b3 core/supplied carrier
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Vector2 {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    unsigned int Vector2_field_0x04;  // G42.35 C9 flat-carrier vocab (0x6dc4cd)
    unsigned int *__pad_0;  // G42.35 C9 flat-carrier vocab (0x6dc4d0)
    int NormalizeNonZero();  // 0x41C460 G42.33 b3 supplied-body sync
    unsigned int *  Subtract(unsigned int * a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x6DC4C0
};

} // namespace gamemd
