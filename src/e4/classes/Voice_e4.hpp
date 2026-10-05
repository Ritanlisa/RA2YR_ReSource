// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BufferIOFileClass;  // fix_fwd_type_supply

struct Voice {
// --- flat members (BEGIN) ---
    unsigned int u32_C;  // 0xC
    unsigned int u32_18;  // 0x18
    unsigned char q024;  // 0x24
    unsigned char q02C;  // 0x2C
    unsigned char q044;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned char q068;  // 0x68
    unsigned int u32_D4;  // 0xD4
    unsigned char q104;  // 0x104
    unsigned int q114;  // 0x114
    unsigned int q130;  // 0x130
    unsigned int q144;  // 0x144
    unsigned char q164;  // 0x164
    unsigned int q324;  // 0x324
// --- flat members (END) ---
    int DetachChannel();
    int Stop();
};

} // namespace gamemd
