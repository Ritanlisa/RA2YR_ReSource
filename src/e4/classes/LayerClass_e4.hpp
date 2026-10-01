// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LayerClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned int count;  // 0x4
    char capacity[4];  // 0x8
    char q00B[4];  // 0xB
// --- flat members (END) ---
    int CellIteratorNext(void *a1);
    int CellIteratorReset(void *a1);
    int CoordinatesLegal(IUnknown * aP1, void *a2);
    int IsWithinUsableArea(IUnknown * aP1, TechnoClass * aP2, void *a3);
    int Pathfinding_Find(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, IUnknown * aP6, IUnknown * aP7, IUnknown * aP8, IUnknown * aP9, IUnknown * aP10, IUnknown * aP11, IUnknown * aP12, IUnknown * aP13, IUnknown * aP14, MouseClass * aP15, char a17);
    void * Reveal(int a2);
    void* DestroyCliff(int * a1, int a2, int a3);
    static double Save(...);  // C2597 interim stub
};

} // namespace gamemd
