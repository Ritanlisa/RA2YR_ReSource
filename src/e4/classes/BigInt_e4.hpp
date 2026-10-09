// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BigInt {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
// --- flat members (END) ---
    int __thiscall DecryptBlock(char *Src, int a3, char *a4);
    int __thiscall RSAOperation(char *Src, int a3, char *a4);
};

} // namespace gamemd
