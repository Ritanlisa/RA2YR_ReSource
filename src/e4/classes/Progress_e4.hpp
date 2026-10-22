// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Progress {
    int m_Values[8];  // 0x0
    int m_Index;  // 0x20
    int m_Count;  // 0x24
    char __pad_28[57];  // 0x28
    unsigned char u32_61;  // 0x61
    char __pad_62[2];  // 0x62
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int GetAverage(void *a1 = 0);
    static int GetWeighted(int a2, void *a2_1 = 0);
};

} // namespace gamemd
