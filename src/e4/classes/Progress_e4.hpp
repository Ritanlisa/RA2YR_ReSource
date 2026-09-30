// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Progress {
// --- flat members (BEGIN) ---
    float m_Values;  // 0x0
    unsigned int u32_1C;  // 0x1C
    char m_Index[4];  // 0x20
    char m_Count[4];  // 0x24
    unsigned int u32_1C2;
    unsigned int u32_61;
    unsigned int __pad_0;
    unsigned int field_48;
// --- flat members (END) ---
    int GetAverage();
    int GetWeighted(int a2);
};

} // namespace gamemd
