// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Hash {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    int q008;  // 0x8
    char __pad_C[52];  // 0xC
    unsigned char u8_40;  // 0x40
    char __pad_41[3];  // 0x41
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int __thiscall ComputeHashSHA1(void *a1 = 0);
    int InsertOrdered(int a2);
    int Reset();
};

} // namespace gamemd
