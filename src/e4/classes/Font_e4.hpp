// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Font {
// --- flat members (BEGIN) ---
    void* m_FontData;  // 0x0
    char Font_field_04[4];  // 0x4
    char Font_field_08[4];  // 0x8
// --- flat members (END) ---
    int GetGlyphDataForChar(void * aP1);
    int Print(void * aP0, void * aP1, void * aP2, int aP1a, void * aP4, void * aP5, void * aP6, void * aP7, void * aP8, void * aP9);
};

} // namespace gamemd
