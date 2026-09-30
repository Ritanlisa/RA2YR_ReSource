// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Color {
// --- flat members (BEGIN) ---
    char Color_field_00[4];  // 0x0
// --- flat members (END) ---
    int ConvertToRGB(int v9);
    unsigned char * Lerp2(int a2, int a3, float a4);
    unsigned char * ScaleRGB(unsigned char * a2, float a3);
    unsigned char Lerp(void * aP1, unsigned char * a2);
    unsigned int * RGBFromFloat(void* aP1, float a3);
};

} // namespace gamemd
