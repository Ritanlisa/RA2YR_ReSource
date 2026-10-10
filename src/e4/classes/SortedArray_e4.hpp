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
    static double SortedArray_field_0x04(...);  // plateau: C2039/C3861 stub
    static double SortedArray_field_0x0C(...);  // plateau: C2039/C3861 stub
    static double SortedArray_field_0x10(...);  // plateau: C2039/C3861 stub
    static double __pad_0(...);  // plateau: C2039/C3861 stub
    static double u32_10(...);  // plateau: C2039/C3861 stub
    static double u32_20(...);  // plateau: C2039/C3861 stub
    static double u32_4(...);  // plateau: C2039/C3861 stub
    static double u32_C(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
