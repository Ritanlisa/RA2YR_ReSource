// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LayerClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char count[4];  // 0x4
    char capacity[4];  // 0x8
// --- flat members (END) ---
    void* Load_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon LayerClass::Load is a method)
    static unsigned int Load(int* p0);  // x4:signals@0x551b90
    void* items;  // 0x0 (no offset truth)
    int CellIteratorNext(void *a1 = 0);
    int CellIteratorReset(void *a1 = 0);
    int CoordinatesLegal(int16_t *aP1);
    static int IsWithinUsableArea(LayerClass * aP1, int16_t *a2, char a3);
    unsigned int * Pathfinding_Find(Type *a1, int a2, unsigned int *a3, int16_t *a4, int a5, int a6, int a7, char a8, int a9, int a10, char a11, char a12, char a13, char a14, int16_t *a15, char a16, char a17);  // G57w10-S raw 0x0056DC20 IUnknown 占位清除
    void * Reveal(int a2);
    void* DestroyCliff(int * a1, int a2, int a3);
    static int Save(LayerClass * aP1, unsigned int *a2);
    void  Update_Pathfinding_2(int a2);  // 0x586990
    int IsWithinUsableArea(int16_t *aP1, char aP2);
    unsigned int u32_100;  // 0x100 (offset-truth)
    unsigned int u32_10C;  // 0x10C (offset-truth)
    unsigned int u32_110;  // 0x110 (offset-truth)
    unsigned int u32_114;  // 0x114 (offset-truth)
    void* ;  // 0x118 (offset-truth)
    unsigned int u32_13C;  // 0x13C (offset-truth)
    unsigned int u32_F4;  // 0xF4 (offset-truth)
    unsigned int u32_F8;  // 0xF8 (offset-truth)
};

} // namespace gamemd
