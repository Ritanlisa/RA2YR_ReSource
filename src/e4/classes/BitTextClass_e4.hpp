// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply

struct BitTextClass {
    void * m_FontBitmap;  // 0x0
    char m_CharWidth[4];  // 0x4
    CampaignClass * ptr_8;  // 0x8
    unsigned int __pad_00C;  // 0xC
    char __pad_10[8];  // 0x10
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned short u16_24;  // 0x24
    unsigned short u16_26;  // 0x26
    unsigned int u32_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    char __pad_30[16];  // 0x30
    unsigned char u8_40;  // 0x40
    unsigned char u8_41;  // 0x41
    char __pad_42[2];  // 0x42
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int ParseFontData(char * Source, void *a2);
    unsigned int * LoadFont();
};

} // namespace gamemd
