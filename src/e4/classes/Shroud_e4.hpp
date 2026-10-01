// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Shroud {
// --- flat members (BEGIN) ---
struct MapClass;  // fix_fwd_type_supply
struct RadarClass;  // fix_fwd_type_supply
    unsigned int u32_18;  // 0x18
    unsigned int q024;  // 0x24
    unsigned int q054;  // 0x54
    unsigned int u32_F4;  // 0xF4
    unsigned int u32_FC;  // 0xFC
    unsigned int u32_100;  // 0x100
    unsigned int u32_104;  // 0x104
    unsigned int u32_20C;  // 0x20C
    unsigned int u32_210;  // 0x210
    unsigned int q244;  // 0x244
    unsigned int q260;  // 0x260
    unsigned int q524;  // 0x524
    unsigned int q528;  // 0x528
    unsigned int q580;  // 0x580
    unsigned int q594;  // 0x594
    unsigned int q598;  // 0x598
    unsigned int q608;  // 0x608
    unsigned int q1320;  // 0x1320
    unsigned int q1408;  // 0x1408
    unsigned int q1428;  // 0x1428
    MapClass * ptr_1490;  // 0x1490
    MapClass * ptr_1494;  // 0x1494
    MapClass * ptr_1498;  // 0x1498
    unsigned int u32_149C;  // 0x149C
    unsigned int u32_14A0;  // 0x14A0
    unsigned int u32_14A4;  // 0x14A4
    unsigned int u32_14A8;  // 0x14A8
    unsigned int q1544;  // 0x1544
    MapClass * q5264;  // 0x5264
    MapClass * q5268;  // 0x5268
    unsigned int q5280;  // 0x5280
    unsigned int q5284;  // 0x5284
    unsigned int q5288;  // 0x5288
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
