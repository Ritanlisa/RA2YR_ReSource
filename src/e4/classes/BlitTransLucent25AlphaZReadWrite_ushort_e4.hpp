// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct RLEBlitTransXlat;  // fix_fwd_type_supply

struct BlitTransLucent25AlphaZReadWrite_ushort {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    AbstractClass * ptr_8;  // 0x8
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
    unsigned char m_2;  // 0x2 (offset-truth)
    unsigned int m_4;  // 0x4 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int *q000;  // 0x0 (offset-truth)
    static double __pad_0(...);  // plateau: C2039/C3861 stub
    static double q004(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
