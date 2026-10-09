// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Hash {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
// --- flat members (END) ---
    int __thiscall ComputeHashSHA1();
    int InsertOrdered(int a2);
    int Reset(void *a1 = 0, void *a2 = 0);
    int Reset();  // 0x5565F0 G42.33 b3 arity sync (全树 0-arg 调用)
};

} // namespace gamemd
