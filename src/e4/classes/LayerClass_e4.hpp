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
    void* Load;  // 0x0 (no offset truth)
    void* items;  // 0x0 (no offset truth)
// --- flat members (END) ---
    int CellIteratorNext();
    int CellIteratorReset();
    int CoordinatesLegal(int16_t *aP1);
    static int IsWithinUsableArea(LayerClass * aP1, __int16 *a2, char a3);  // G57w10-S raw 0x00578460 (was C2597 interim stub)
    unsigned int * Pathfinding_Find(Type *a1, int a2, unsigned int *a3, __int16 *a4, int a5, int a6, int a7, char a8, int a9, int a10, char a11, char a12, char a13, char a14, __int16 *a15, char a16, char a17);  // G57w10-S raw 0x0056DC20 IUnknown 占位清除
    void * Reveal(int a2);
    void* DestroyCliff(int * a1, int a2, int a3);
    static int Save(LayerClass * aP1, unsigned int *a2);  // G57w10-S raw 0x00551B20 (was C2597 interim stub)
    void Update_Pathfinding_2(int a2);  // 0x586990
    int IsWithinUsableArea(int16_t *aP1, char aP2);
};

} // namespace gamemd
