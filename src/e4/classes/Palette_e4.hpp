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
    unsigned char q404;  // 0x404
    unsigned char q408;  // 0x408
    unsigned char q40C;  // 0x40C
    unsigned char q410;  // 0x410
    unsigned char q414;  // 0x414
    char q1024[4];  // 0x1024
    unsigned char q1028;  // 0x1028
    unsigned char q102C;  // 0x102C
    unsigned char q1C48;  // 0x1C48
    unsigned char q1C4C;  // 0x1C4C
    unsigned char q7240;  // 0x7240
    unsigned char q7244;  // 0x7244
// --- flat members (END) ---
    int CalcColorDistance(unsigned char * a2);
    int FindClosestColor(int a2);
    int LoadFile();
    unsigned char * ConvertIndices(int a2);
};

} // namespace gamemd
