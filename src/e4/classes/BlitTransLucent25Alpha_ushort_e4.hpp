// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BlitTransLucent25Alpha_ushort {
    char __pad_0[4];  // 0x0
    int __pad_004;  // 0x4
    AbstractClass* ptr_8;  // 0x8
    unsigned int __pad_00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    BlitTransLucent25Alpha_ushort * Blit(char a2);
    int CallBlit0(int a2, int a3, int a4, int a5, int a6, int a7, int a8);
    int CallBlit0_0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
    int CallBlit0_1(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
    std::locale::facet * Constructor_Blitter(char a2);
};

} // namespace gamemd
