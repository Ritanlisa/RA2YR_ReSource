// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BlitTransLucent25Alpha_ushort {
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
    unsigned int *__pad_0;
    unsigned int m_8;
// --- flat members (END) ---
    BlitTransLucent25Alpha_ushort * Blit(char a2);
    int CallBlit0(int a2, int a3, int a4, int a5, int a6, int a7, int a8);
    int CallBlit0_0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
    int CallBlit0_1(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
    std::locale::facet * Constructor_Blitter(char a2);
};

} // namespace gamemd
