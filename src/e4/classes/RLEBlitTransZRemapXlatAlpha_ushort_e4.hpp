// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct RLEBlitTransZRemapXlatAlpha_ushort {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned int __pad_0;
    unsigned int m_4;
    unsigned int m_8;
    unsigned int m_C;
// --- flat members (END) ---
    RLEBlitTransZRemapXlatAlpha_ushort * QueryInterface(unsigned int * Block, char a2);
    int CallBlit0_1(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
    int Release(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
    std::locale::facet * Constructor_RLEBlitter(char a2);
    std::locale::facet * Constructor_RLEBlitter_0(char a2);
    std::locale::facet * Constructor_RLEBlitter_1(char a2);
    unsigned short * AddRef(int arg0, unsigned __int8 * a2, int a4, void * aP4, int a6, int _2C, unsigned __int16 * a7, int a9, int a10, int a11);
};

} // namespace gamemd
