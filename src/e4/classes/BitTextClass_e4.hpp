// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BitTextClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char m_CharWidth[4];  // 0x4
    CampaignClass * ptr_8;  // 0x8
    unsigned int u32_C;  // 0xC
// --- flat members (END) ---
    int ParseFontData(char * Source);
    unsigned int * LoadFont();
};

} // namespace gamemd
