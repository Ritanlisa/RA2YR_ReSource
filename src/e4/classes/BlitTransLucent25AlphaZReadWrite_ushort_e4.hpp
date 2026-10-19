// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct RLEBlitTransXlat;  // fix_fwd_type_supply

struct BlitTransLucent25AlphaZReadWrite_ushort {
    void* ptr_0;  // 0x0
    unsigned int m_4;  // 0x4
    AbstractClass* m_8;  // 0x8
    unsigned int __pad_00C;  // 0xC
    int BlitTransLucent25AlphaZReadWrite_ushort_field_0x10;  // 0x10
    int BlitTransLucent25AlphaZReadWrite_ushort_field_0x14;  // 0x14
    int BlitTransLucent25AlphaZReadWrite_ushort_field_0x18;  // 0x18
    int BlitTransLucent25AlphaZReadWrite_ushort_field_0x1C;  // 0x1C
    int BlitTransLucent25AlphaZReadWrite_ushort_field_0x20;  // 0x20
    int BlitTransLucent25AlphaZReadWrite_ushort_field_0x24;  // 0x24
    int BlitTransLucent25AlphaZReadWrite_ushort_field_0x28;  // 0x28
    int BlitTransLucent25AlphaZReadWrite_ushort_field_0x2C;  // 0x2C
    int BlitTransLucent25AlphaZReadWrite_ushort_field_0x30;  // 0x30
    int BlitTransLucent25AlphaZReadWrite_ushort_field_0x34;  // 0x34
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    BlitTransLucent25AlphaZReadWrite_ushort * Blit(unsigned int * Block, char a2);
    RLEBlitTransXlat * Constructor_RLEBlitter(char a2);
    int Blit_RLE_Remap(int arg0, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
    int CallBlit0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
    int CallBlit0_0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
    int CallBlit0_1(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
    std::locale::facet * Constructor_RLEBlitter_0(char a2);
    std::locale::facet * Constructor_RLEBlitter_1(char a2);
    unsigned short * Blit_RLE_Lucent50(unsigned short * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
};

} // namespace gamemd
