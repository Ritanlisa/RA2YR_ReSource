// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Conflict {
// --- flat members (BEGIN) ---
    Territory* Attacker;  // 0x4
    Territory* Defender;  // 0x8
    void* Outcome;  // 0xC [X30:type_map]
    unsigned int referenceCount;  // 0x10
// --- flat members (END) ---
    int GetOwnerHouse();
    int __pad_000;  // 0x0 [X30:type_map]
    unsigned char __pad_014;  // 0x14 [X30:canon]
};

} // namespace gamemd
