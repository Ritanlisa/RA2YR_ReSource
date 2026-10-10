// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply

struct BitTextClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char m_CharWidth[4];  // 0x4
    CampaignClass * ptr_8;  // 0x8
// --- flat members (END) ---
    int ParseFontData(char * Source, void *a2);
    unsigned int * LoadFont();
    int m_FontBitmap;  // 0x0 (ml)
};

} // namespace gamemd
