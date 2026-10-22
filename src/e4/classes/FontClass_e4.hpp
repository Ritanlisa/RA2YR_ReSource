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
    unsigned int u32_18;  // 0x18
    unsigned char u8_1C;  // 0x1C
    char __pad_1D[3];  // 0x1D
    unsigned int u32_20;  // 0x20
    unsigned short u16_24;  // 0x24
    char __pad_26[2];  // 0x26
    unsigned int u32_28;  // 0x28
    char __pad_2C[21];  // 0x2C
    unsigned char u8_41;  // 0x41
    char __pad_42[706];  // 0x42
    unsigned int u32_304;  // 0x304
    char __pad_308[4];  // 0x308
    unsigned int u32_30C;  // 0x30C
    unsigned int u32_310;  // 0x310
    unsigned int u32_314;  // 0x314
    unsigned int u32_318;  // 0x318
    unsigned int u32_31C;  // 0x31C
    unsigned int u32_320;  // 0x320
    unsigned int u32_324;  // 0x324
    unsigned int u32_328;  // 0x328
    unsigned int u32_32C;  // 0x32C
    unsigned int u32_330;  // 0x330
    unsigned int u32_334;  // 0x334
    unsigned int u32_338;  // 0x338
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static char * InitMetrics(void *aP1, void *a2, int a3, int a4, int a5, int a6, char a7);
    int __thiscall RenderGlyph(unsigned __int16 a2, int xLeft, int yTop, int a5);
    int  RenderText(uint16_t * a2, int xLeft, int yTop, int a5, int a6);  // 0x434500
    int GetPixelData(uint16_t a2);  // 0x4349B0
    char  LoadFontResources(int16_t a2);  // 0x5D2E90
};

} // namespace gamemd
