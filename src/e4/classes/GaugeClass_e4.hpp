// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GaugeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char Enabled;  // 0x15
// --- flat members (END) ---
    GaugeClass * QueryInterface(unsigned int * Block, char a2);
    int Draw(int a2, void *a1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);
    int Stub();
    unsigned char u32_2D;  // 0x2D (offset-truth)
    static double u32_34(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
