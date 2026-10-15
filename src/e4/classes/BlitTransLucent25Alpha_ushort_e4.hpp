// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BlitTransLucent25Alpha_ushort {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    AbstractClass * ptr_8;  // 0x8
// --- flat members (END) ---
    BlitTransLucent25Alpha_ushort * Blit(char a2);
    int CallBlit0(int a2, int a3, int a4, int a5, int a6, int a7, int a8);
    int CallBlit0_0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
    int CallBlit0_1(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
    std::locale::facet * Constructor_Blitter(char a2);
    AbstractClass* m_8;  // 0x8 (offset-truth) [X30:type_map]
    unsigned int *q000;  // 0x0 (offset-truth)
    int __pad_004;  // 0x4 [X30:type_map]
    unsigned char __pad_00C;  // 0xC [X30:canon]
    char __pad_0[4];  // 0x0 [X30:member_lookup]
};

} // namespace gamemd
