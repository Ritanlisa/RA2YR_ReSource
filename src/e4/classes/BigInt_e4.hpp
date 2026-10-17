// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BigInt {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int BigInt_field_0x04;  // 0x4
    int BigInt_field_0x08;  // 0x8
    int BigInt_field_0x0C;  // 0xC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int __thiscall DecryptBlock(char *Src, int a3, char *a4, void *a1 = 0);
    int __thiscall RSAOperation(char *Src, int a3, char *a4, void *a1 = 0);
};

} // namespace gamemd
