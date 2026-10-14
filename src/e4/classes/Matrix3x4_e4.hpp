// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Matrix3x4 {
// --- flat members (BEGIN) ---
    float m_Data;  // 0x0
// --- flat members (END) ---
    int Identity(void *a1 = 0);
    unsigned int * TransformCell(AbstractClass * aP1, AbstractClass * aP2, void *a3);
    int Translate(float aP1, void *a2 = 0);

    void* q004;  // X10 supply (member_lookup)
    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_1C;  // X10 supply (member_lookup)
    unsigned int u32_20;  // X10 supply (member_lookup)
    unsigned int u32_2C;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
};

} // namespace gamemd
