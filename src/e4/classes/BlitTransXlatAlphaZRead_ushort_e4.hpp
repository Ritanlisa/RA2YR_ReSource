// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BlitTransXlatAlphaZRead_ushort {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    AbstractClass * ptr_8;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned int __pad_0;
    unsigned int m_1;
    unsigned int m_4;
    unsigned int m_8;
// --- flat members (END) ---
    BlitTransXlatAlphaZRead_ushort * Blit(char a2);
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
