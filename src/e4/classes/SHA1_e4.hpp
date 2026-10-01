// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SHA1 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned int Compute;
    unsigned int ProcessBlock;
    unsigned int SHA1_field_0x04;
    unsigned int SHA1_field_0x0C;
    unsigned int *__pad_0;
    unsigned int u32_2C;
// --- flat members (END) ---
    int ComputeThunk(char *aP1);
};

} // namespace gamemd
