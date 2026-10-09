// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Conflict {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    Territory* Attacker;  // 0x4
    Territory* Defender;  // 0x8
    int Outcome;  // 0xC
    unsigned int referenceCount;  // 0x10
    unsigned int q014;  // 0x14
// --- flat members (END) ---
    int GetOwnerHouse();
};

} // namespace gamemd
