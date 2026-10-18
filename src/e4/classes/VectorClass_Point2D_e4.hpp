// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_Point2D {
    unsigned int ptr_0;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char __pad_00E;  // 0xE
    char __pad_F[1];  // 0xF
    char __pad_10[4];  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int *  Count(int a3, void *a2 = 0);  // 0x5D05F0
    void Set(void *a1_1, void *a2_1, void *a3_1);  // 0x5D07F0
    int  GetSize(unsigned int * a2);  // 0x5D0950
    unsigned int  GetCapacity(int a2);  // 0x5D09A0
    VectorClass_flat *  QueryInterface(char a2);  // 0x5D16C0
    int Destroy(void *a1_1);  // 0x5D2780
    unsigned int  GetItemIndex(int a2);  // 0x5D27B0
    char  SetCapacity(int a2, unsigned int * a3);  // 0x5D2BC0
    int  FindItemIndex(unsigned int * a2);  // 0x5D2C70
    DynamicVector *  Constructor_VectorClass_MSSfx___(char a2);  // 0x5D2D90
};
} // namespace gamemd
