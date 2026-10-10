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
    int Translate(float aP1, void *a1 = 0);
    static double q004(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
