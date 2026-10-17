// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Hash {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int Hash_field_0x04;  // 0x4
    int Hash_field_0x08;  // 0x8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int __thiscall ComputeHashSHA1(void *a1 = 0);
    int InsertOrdered(int a2);
    int Reset(void *a1 = 0, void *a2 = 0);
};

} // namespace gamemd
