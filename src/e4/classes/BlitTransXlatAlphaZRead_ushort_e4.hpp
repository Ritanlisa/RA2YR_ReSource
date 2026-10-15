// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BlitTransXlatAlphaZRead_ushort {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    AbstractClass * ptr_8;  // 0x8
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
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_4;  // 0x4 (offset-truth)
    AbstractClass* m_8;  // 0x8 (offset-truth) [X30:type_map]
    unsigned int *q000;  // 0x0 (offset-truth)
    int __pad_004;  // 0x4 [X30:type_map]
    unsigned char __pad_00C;  // 0xC [X30:canon]
    unsigned int Data;  // [X30:default]
};

} // namespace gamemd
