// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DynamicArray {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    char Resize(int *a1, unsigned int *aP2, void *a2 = 0);
    char  Remove(int a2, void *a1 = 0);  // 0x7acd60
    static char Grow(void *aP0);
    int __pad_000;  // 0x0 [X30:type_map]
};

} // namespace gamemd
