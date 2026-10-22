// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SortedArray {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int u32_4;  // 0x4
    int q008;  // 0x8
    unsigned int u32_C;  // 0xC
    int u32_10;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int u32_20;  // 0x20
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    ObjectClass * * RemoveByKey(DynamicVector * aP1);
    int Append(DynamicVector * aP1, unsigned int * a2);
    int BinarySearch(int *aP1, void *a2 = 0);
    int FindPair(int * a2);
    static int CheckCache(SortedArray * aP1, unsigned int *a2);
     void * FindValue(int *a2, void *a1 = 0);
    int  Find(int * a2, void *a1 = 0);  // 0x52b170
    void * BinarySearch2(int *a2, void *a1 = 0);
};

} // namespace gamemd
