// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct TeamTypeClass_28 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    AbstractClass * *  Release(int a2, int * a3);  // 0x6F22F0
    AbstractClass * *  SetCapacity(int a2, int * a3);  // 0x6F24B0
    void ClearBuffer(void *a1_1);  // 0x6F21B0
    unsigned int *  Seek(unsigned int * a2, int a3);  // 0x6F2210
    char  AddRef(int a2);  // 0x6F2290
    wchar_t * ddtor(void *a1_1, void *a2_1);  // 0x6F2400
    int  Read(unsigned int * a2, void *a1 = 0, void *a3 = 0);  // 0x6F2440
    int  FindItem(unsigned int * a2);  // 0x6F2640
    VectorClass_flat *  QueryInterface(char a2);  // 0x6F2680
    DynamicVector *  Constructor(char a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x6F2720
    unsigned int  PointerToIndex(int a2);  // 0x6F21F0
    unsigned int  Write(int a2);  // 0x6F2490
};
} // namespace gamemd
