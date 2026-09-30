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
    unsigned int SortedArray_field_0x04;
    unsigned int SortedArray_field_0x0C;
    unsigned int SortedArray_field_0x10;
    unsigned int __pad_0;
    unsigned int q0046;
    unsigned int q040;
// --- flat members (END) ---
    ObjectClass * * RemoveByKey(DynamicVector * aP1);
    int Append(DynamicVector * aP1, unsigned int * a2);
    int BinarySearch(CCINIClass * aP1);
    int FindPair(int * a2);
    static double CheckCache(...);  // C2597 interim stub
     double FindValue(...);  // C2597 interim stub
};

} // namespace gamemd
