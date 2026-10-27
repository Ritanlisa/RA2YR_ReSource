// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Matrix3x4 {
    int m_Data[12];  // 0x0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Identity();
    unsigned int * TransformCell(AbstractClass * aP1, AbstractClass * aP2, void *a3);
    int Translate(float aP1, void *a2 = 0);
};

} // namespace gamemd
