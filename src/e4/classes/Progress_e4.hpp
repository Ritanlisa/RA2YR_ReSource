// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Progress {
// --- flat members (BEGIN) ---
    float m_Values;  // 0x0
int m_Index;  // 0x20 [X35-L7 kind=int]
int m_Count;  // 0x24 [X35-L7 kind=int]
// --- flat members (END) ---
    int GetAverage(void *a1 = 0);
    static int GetWeighted(int a2, void *a2_1 = 0);
    unsigned char u32_61;  // 0x61 (offset-truth)
};

} // namespace gamemd
