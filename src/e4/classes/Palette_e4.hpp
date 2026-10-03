// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Palette {
// --- flat members (BEGIN) ---
    unsigned int m_Colors;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    char Palette_field_400[4];  // 0x400
    unsigned int Palette_6BitTo16Bit;
// --- flat members (END) ---
    int CalcColorDistance(unsigned char * a2, void *a2_2);
    int FindClosestColor(Palette *a2);
    int LoadFile();
    unsigned char * ConvertIndices(int a2);
    unsigned char * SixBitTo16Bit(char a2, char a3, char a4);  // 0x4355b0
    unsigned char * Palette_6BitTo16Bit(char a2, char a3, char a4);
};

} // namespace gamemd
