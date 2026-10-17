// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DynamicArray {
    unsigned int __pad_0;  // 0x0
    int DynamicArray_field_0x04;  // 0x4
    int DynamicArray_field_0x08;  // 0x8
    int DynamicArray_field_0x0C;  // 0xC
    unsigned int DynamicArray_field_0x10;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char Resize(int *a1, unsigned int *aP2, void *a2 = 0);
    char  Remove(int a2, void *a1 = 0);  // 0x7acd60
    static char Grow(void *aP0);
};

} // namespace gamemd
