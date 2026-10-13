// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SortedArray {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    ObjectClass * * RemoveByKey(DynamicVector * aP1);
    int Append(DynamicVector * aP1, unsigned int * a2);
    int BinarySearch(int *aP1, void *a1 = 0);
    int FindPair(int * a2);
    static int CheckCache(SortedArray * aP1, unsigned int *a2);
     void * FindValue(int *a2, void *a1 = 0);
    int  Find(int * a2, void *a1 = 0);  // 0x52b170
    void * BinarySearch2(int *a2, void *a1 = 0);
    unsigned char q0046;  // 0x46 (offset-truth)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned char q040;  // X10 supply (member_lookup)
    unsigned int u32_10;  // X10 supply (member_lookup)
    int u32_20;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
};

} // namespace gamemd
