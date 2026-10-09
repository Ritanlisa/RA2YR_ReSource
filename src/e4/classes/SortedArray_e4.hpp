// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SortedArray {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int u32_20;  // 0x20
// --- flat members (END) ---
    ObjectClass * * RemoveByKey(DynamicVector * aP1);
    int Append(DynamicVector * aP1, unsigned int * a2);
    int BinarySearch(int *aP1);
    int FindPair(int * a2);
    static int CheckCache(SortedArray * aP1, unsigned int *a2);  // G57w10-S raw 0x0052B600 (was C2597 interim stub)
     void * FindValue(int *a2);  // G57w10-S raw 0x0052B430 (was C2597 interim stub)
    int Find(int *a2);  // 0x52b170
    void * BinarySearch2(int *a2); // N_fix R5 supply (cache truth)
};

} // namespace gamemd
