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
    int CellIteratorNext(void *a1 = 0);
    int CellIteratorReset(void *a1 = 0);
    int CoordinatesLegal(void* aP1, void *a1 = 0);
    int IsWithinUsableArea(IUnknown * aP1, TechnoClass * aP2);
    unsigned int * Pathfinding_Find(void* aP0, void* aP1, void* aP2, void* aP3, void* aP4, void* aP5, void* aP6, void* aP7, void* aP8, void* aP9, void* aP10, void* aP11, void* aP12, void* aP13, void* aP14, MouseClass * aP15, char a17);
    void * Reveal(int a2);
    void* DestroyCliff(int * a1, int a2, int a3);
    static double Save(...);  // C2597 interim stub
};

} // namespace gamemd
