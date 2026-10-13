// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Carryall {
// --- flat members (BEGIN) ---
    char Carryall_field_00[4];  // 0x0
// --- flat members (END) ---
    FootClass * * MissionStateMachine();
    unsigned int u32_118;  // 0x118 (offset-truth)
    unsigned int u32_5A4;  // 0x5A4 (offset-truth)
    unsigned int u32_5D4;  // 0x5D4 (offset-truth)
    unsigned int u32_674;  // 0x674 (offset-truth)
    unsigned int u32_BC;  // 0xBC (offset-truth)

    unsigned char Object_21C5[4];  /* Object */  // X10 supply (member_lookup)
    unsigned char u32_114[4];  /* CellClass */  // X10 supply (member_lookup)
    unsigned int u32_293;  // X10 supply (member_lookup)
    unsigned int u32_500;  // X10 supply (member_lookup)
    unsigned int u32_6D4;  // X10 supply (member_lookup)
    unsigned int u32_9C;  // X10 supply (member_lookup)
    unsigned int u32_A0;  // X10 supply (member_lookup)
    unsigned int u32_A4;  // X10 supply (member_lookup)
};

} // namespace gamemd
