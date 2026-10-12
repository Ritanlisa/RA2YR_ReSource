// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MapClass;  // fix_fwd_type_supply
struct RadarClass;  // fix_fwd_type_supply

struct Shroud {
// --- flat members (BEGIN) ---
    MapClass * ptr_1490;  // 0x1490
    MapClass * ptr_1494;  // 0x1494
    MapClass * ptr_1498;  // 0x1498
// --- flat members (END) ---
    RadarClass * * ProcessCellVisibility(MouseClass * aP1);
    unsigned char __pad_14A0;  // 0x14A0 (offset-truth)
    unsigned char __pad_14A8;  // 0x14A8 (offset-truth)
    unsigned char __pad_C0;  // 0xC0 (offset-truth)
    unsigned int q1490;  // 0x1490 (offset-truth)
    unsigned int q1494;  // 0x1494 (offset-truth)
    unsigned int q1498;  // 0x1498 (offset-truth)
    unsigned int q149C;  // 0x149C (offset-truth)
    unsigned int q14A4;  // 0x14A4 (offset-truth)
};

} // namespace gamemd
