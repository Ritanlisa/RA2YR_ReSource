// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_LightConvertClass {
    unsigned int __pad_0;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char __pad_00E;  // 0xE
    char __pad_F[1];  // 0xF
    void* Count;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    DynamicVector *  Constructor_VectorClass_LightConvertClass___(char a2);  // 0x40C540
    int Destroy(void *a1_1);  // 0x40C230
    int  Get(int a2, void *a1 = 0);  // 0x40C280
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x40C290
    char  Release(int a2, unsigned int * a3);  // 0x40C2D0
    void Remove(void *a1_1, void *a1 = 0);  // 0x40C380
    int  GetSize(unsigned int * a2);  // 0x40C3B0
    unsigned int  GetCapacity(int a2);  // 0x40C3F0
    int  FindItemIndex(unsigned int * a2);  // 0x40C4C0
    VectorClass_flat *  QueryInterface(char a2);  // 0x40C4F0
};
} // namespace gamemd
