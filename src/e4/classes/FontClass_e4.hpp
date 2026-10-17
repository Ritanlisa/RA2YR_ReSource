// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct FontClass {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    unsigned int q004;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    ConvertClass * ptr_10;  // 0x10
    unsigned int __pad_014;  // 0x14
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static char * InitMetrics(void *aP1, void *a2, int a3, int a4, int a5, int a6, char a7);
    int __thiscall RenderGlyph(unsigned __int16 a2, int xLeft, int yTop, int a5);
    int  RenderText(uint16_t * a2, int xLeft, int yTop, int a5, int a6);  // 0x434500
    int GetPixelData(uint16_t a2);  // 0x4349B0
    char  LoadFontResources(int16_t a2);  // 0x5D2E90
};

} // namespace gamemd
