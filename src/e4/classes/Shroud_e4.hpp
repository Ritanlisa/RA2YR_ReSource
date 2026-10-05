// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MapClass;  // fix_fwd_type_supply
struct RadarClass;  // fix_fwd_type_supply

struct Shroud {
// --- flat members (BEGIN) ---
    unsigned int u32_18;  // 0x18
    unsigned int q024;  // 0x24
    unsigned int q054;  // 0x54
    unsigned int u32_F4;  // 0xF4
    unsigned int u32_FC;  // 0xFC
    unsigned int u32_100;  // 0x100
    unsigned int u32_104;  // 0x104
    unsigned int RadarClass_field_0x1490;
    unsigned int RadarClass_field_0x1494;
    unsigned int RadarClass_field_0x1498;
    unsigned int RadarClass_field_0x149C;
    unsigned int RadarClass_field_0x14A4;
    unsigned int __pad_14A0;
    unsigned int __pad_14A8;
    unsigned int *__pad_C0;
// --- flat members (END) ---
    RadarClass * * ProcessCellVisibility(MouseClass * aP1);
};

} // namespace gamemd
