// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BlitTransLucent25AlphaZReadWrite_ushort {
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
    unsigned int __pad_0;
    unsigned int m_2;
    unsigned int m_4;
    unsigned int m_8;
// --- flat members (END) ---
    BlitTransLucent25AlphaZReadWrite_ushort * Blit(char a2);
    void* Constructor_RLEBlitter(char a2);
    int Blit_RLE_Remap(int arg0, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
    int CallBlit0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
    int CallBlit0_0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
    int CallBlit0_1(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
    std::locale::facet * Constructor_RLEBlitter_0(char a2);
    std::locale::facet * Constructor_RLEBlitter_1(char a2);
    unsigned short * Blit_RLE_Lucent50(unsigned short * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
};

} // namespace gamemd
