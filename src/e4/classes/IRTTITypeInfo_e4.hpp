// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct IRTTITypeInfo {
    unsigned int tail_0;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char u8_C;  // 0xC
    unsigned char u8_D;  // 0xD
    char __pad_E[2];  // 0xE
    unsigned int u32_10;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int QueryInterface(int a1, const void * a2, unsigned int * a3);
    unsigned int * loc_74F6A0(unsigned int *Block, char a2);
    unsigned int GetOffset();
};

} // namespace gamemd
