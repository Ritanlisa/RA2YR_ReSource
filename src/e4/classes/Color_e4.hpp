// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Color {
// --- flat members (BEGIN) ---
    char Color_field_00[4];  // 0x0
// --- flat members (END) ---
    int ConvertToRGB(int a2, void *a1 = 0);
    unsigned char * Lerp2(int a2, int a3, float a4);
    unsigned char * ScaleRGB(unsigned char * a2, float a3);
    unsigned char Lerp(uint8_t aP1, uint8_t *a2, void *a1 = 0);
    unsigned int * RGBFromFloat(int a2, float a3, void *a1 = 0);  // G57w10-S raw 0x0075F540 IUnknown 占位清除
    unsigned int u32_4;  // 0x4 (offset-truth)
    unsigned int u32_8;  // 0x8 (offset-truth)

    int u32_1;  // X10 supply (member_lookup)
    int u32_2;  // X10 supply (member_lookup)
};

} // namespace gamemd
