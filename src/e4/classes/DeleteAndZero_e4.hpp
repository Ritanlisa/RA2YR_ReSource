// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DeleteAndZero {
    char __pad_0[2];  // 0x0
    unsigned short ptr_2;  // 0x2
    unsigned int ptr_4;  // 0x4
    unsigned int ptr_8;  // 0x8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Alt(void *a1 = 0);
    int Alt2();
    void ** OrFree(char a2, void *a1 = 0);
};

} // namespace gamemd
