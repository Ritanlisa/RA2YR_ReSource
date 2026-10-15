// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Font {
// --- flat members (BEGIN) ---
    void* m_FontData;  // 0x0
    void* Font_field_04;  // 0x4 [X30:type_map]
    char Font_field_08[4];  // 0x8
// --- flat members (END) ---
    int GetGlyphDataForChar(uint16_t aP1);
    int Print(AbstractClass * aP0, AbstractClass * aP1, AbstractClass * aP2, int aP1a, AbstractClass * aP4, AbstractClass * aP5, AbstractClass * aP6, AbstractClass * aP7, AbstractClass * aP8, AbstractClass * aP9);
};

} // namespace gamemd
