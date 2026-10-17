// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BlitTransXlatAlphaZRead_ushort {
    void* vtable1;  // 0x0
    unsigned int m_4;  // 0x4
    AbstractClass* m_8;  // 0x8
    unsigned int __pad_00C;  // 0xC
    int BlitTransXlatAlphaZRead_ushort_field_0x10;  // 0x10
    int BlitTransXlatAlphaZRead_ushort_field_0x14;  // 0x14
    int BlitTransXlatAlphaZRead_ushort_field_0x18;  // 0x18
    int BlitTransXlatAlphaZRead_ushort_field_0x1C;  // 0x1C
    int BlitTransXlatAlphaZRead_ushort_field_0x20;  // 0x20
    int BlitTransXlatAlphaZRead_ushort_field_0x24;  // 0x24
    int BlitTransXlatAlphaZRead_ushort_field_0x28;  // 0x28
    int BlitTransXlatAlphaZRead_ushort_field_0x2C;  // 0x2C
    int BlitTransXlatAlphaZRead_ushort_field_0x30;  // 0x30
    int BlitTransXlatAlphaZRead_ushort_field_0x34;  // 0x34
    int BlitTransXlatAlphaZRead_ushort_field_0x38;  // 0x38
    int BlitTransXlatAlphaZRead_ushort_field_0x3C;  // 0x3C
    int BlitTransXlatAlphaZRead_ushort_field_0x40;  // 0x40
    int BlitTransXlatAlphaZRead_ushort_field_0x44;  // 0x44
    int BlitTransXlatAlphaZRead_ushort_field_0x48;  // 0x48
    int BlitTransXlatAlphaZRead_ushort_field_0x4C;  // 0x4C
    int BlitTransXlatAlphaZRead_ushort_field_0x50;  // 0x50
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    BlitTransXlatAlphaZRead_ushort * Blit(unsigned int * Block, char a2);
    int AddRef(unsigned short * a2, unsigned char * a3, int a4, int a5, unsigned short * a6, unsigned short * a7, int a8, int a9);
    int BlitRect(unsigned short * a2, unsigned char * a3, int a4, int a5, unsigned short * a6, unsigned short * a7, int a8, int a9, short a10);
    int CallBlit0_10(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
    int CallBlit0_2(int a2, int a3, int a4, int a5, int a6, int a7, int a8);
    int CallBlit0_3(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
    int CallBlit0_4(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
    int CallBlit0_5(int a2, int a3, int a4, int a5, int a6, int a7, int a8);
    int CallBlit0_6(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
    int CallBlit0_7(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
    int CallBlit0_8(int a2, int a3, int a4, int a5, int a6, int a7, int a8);
    int CallBlit0_9(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
    int GetSize(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
    int ddtor(int a2, int a3, int a4, int a5, int a6, int a7, int a8);
    std::locale::facet * Constructor_Blitter(char a2);
    std::locale::facet * Constructor_Blitter_0(char a2);
    std::locale::facet * Constructor_Blitter_1(char a2);
    std::locale::facet * Constructor_Blitter_2(char a2);
    unsigned short * Blit_Alpha_Lucent50(unsigned short * a1, unsigned char * a2, int a4, int a5, int _14, unsigned short * a6, int a8, int a9);
    unsigned short * Blit_Alpha_Lucent50_0(unsigned short * a1, unsigned char * a2, int a4, int a5, int _14, unsigned short * a6, int a8, int a9);
};

} // namespace gamemd
