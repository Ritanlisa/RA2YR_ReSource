// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply

struct FoggedObject_DrawVector {
    char __pad_0[4];  // 0x0
    int FoggedObject_DrawVector_field_0x04;  // 0x4
    int FoggedObject_DrawVector_field_0x08;  // 0x8
    int FoggedObject_DrawVector_field_0x0C;  // 0xC
    int FoggedObject_DrawVector_field_0x10;  // 0x10
    int FoggedObject_DrawVector_field_0x14;  // 0x14
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    VectorClass_flat * QueryInterface(char a2);
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);
};

} // namespace gamemd
