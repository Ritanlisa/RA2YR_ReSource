// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Progress {
// --- flat members (BEGIN) ---
    float m_Values;  // 0x0
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_61;
    unsigned int *__pad_0;
// --- flat members (END) ---
    int GetAverage();
    int GetWeighted(int a2);
};

} // namespace gamemd
