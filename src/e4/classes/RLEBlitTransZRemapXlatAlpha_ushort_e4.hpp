// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct RLEBlitTransZRemapXlatAlpha_ushort {
    void* ptr_0;  // 0x0
    unsigned int m_4;  // 0x4
    unsigned int q008;  // 0x8
    unsigned int u32_C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    int q02C;  // 0x2C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    RLEBlitTransZRemapXlatAlpha_ushort * QueryInterface(unsigned int * Block, char a2);
    int CallBlit0_1(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
    int Release(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
    std::locale::facet * Constructor_RLEBlitter(char a2);
    std::locale::facet * Constructor_RLEBlitter_0(char a2);
    std::locale::facet * Constructor_RLEBlitter_1(char a2);
    unsigned short * AddRef(int arg0, unsigned char * a2, int a4, RLEBlitTransZRemapXlatAlpha_ushort * aP4, int a6, int _2C, unsigned short * a7, int a9, int a10, int a11);
};

} // namespace gamemd
