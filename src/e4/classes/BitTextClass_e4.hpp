// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply

struct BitTextClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    CampaignClass * ptr_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int m_FontBitmap;
    unsigned int u32_18;
    unsigned int u32_1C;
    unsigned int u32_24;
    unsigned int u32_28;
    unsigned int u32_2C;
    unsigned int u32_40;
    unsigned int u32_41;
// --- flat members (END) ---
    int ParseFontData(char * Source, void *a2);
    unsigned int * LoadFont();
};

} // namespace gamemd
