// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_LAYERCLASS_DEF  // X10: first-include-wins twin guard
#define GAMEMD_G2_LAYERCLASS_DEF 1
struct LayerClass {
    void* items;  // 0x0
    int count;  // 0x4
    int capacity;  // 0x8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int Load(int* p0);  // x4:signals@0x551b90
    int CellIteratorNext(void *a1 = 0);
    int CellIteratorReset(void *a1 = 0);
    int CoordinatesLegal(int16_t *aP1);
    int IsWithinUsableArea(int16_t *aP1, char aP2, void *a3 = 0);
    int Pathfinding_Find(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, IUnknown * aP6, IUnknown * aP7, IUnknown * aP8, IUnknown * aP9, IUnknown * aP10, IUnknown * aP11, IUnknown * aP12, IUnknown * aP13, IUnknown * aP14, MouseClass * aP15, char a17);  // G57w10-S raw 0x0056DC20 IUnknown 占位清除
    void * Reveal(int a2);
    static void* DestroyCliff(int * a1, int a2, int a3);
    static int Save(LayerClass * aP1, unsigned int *a2);
    void  Update_Pathfinding_2(int a2);  // 0x586990
    int IsWithinUsableArea(int16_t *aP1, char aP2);
};
#endif  // GAMEMD_G2_LAYERCLASS_DEF (X10)


} // namespace gamemd
