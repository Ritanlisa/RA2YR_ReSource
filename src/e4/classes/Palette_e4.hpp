// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Palette {
// --- flat members (BEGIN) ---
    unsigned int m_Colors;  // 0x0
    char Palette_field_400[4];  // 0x400
// --- flat members (END) ---
    static int Preview_Generate(void *aP1, int a2, int a3, void *a4);
    static int CalcColorDistance(unsigned char * a2, void *a2_2);
    int FindClosestColor(Palette *a2, void *a2_1 = 0);
    int LoadFile();
    unsigned char * ConvertIndices(int a2);
    unsigned char *  SixBitTo16Bit(char a2, char a3, char a4);  // 0x4355b0
    int LoadFile(char * Source);
    unsigned char * Palette_6BitTo16Bit(char a2, char a3, char a4);  // plateau: def-aligned C2039/C2660
};

} // namespace gamemd
