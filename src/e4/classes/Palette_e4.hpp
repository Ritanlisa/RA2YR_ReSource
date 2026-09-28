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
// --- flat members (END) ---
    int CalcColorDistance(unsigned char * a2);
    int FindClosestColor(int a2);
    int LoadFile();
    unsigned char * ConvertIndices(int a2);
};

} // namespace gamemd
