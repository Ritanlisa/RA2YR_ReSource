// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TypeList_flat;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_BuildingType {
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char __pad_00E;  // 0xE
    char __pad_F[1];  // 0xF
    char __pad_10[4];  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int GetElement(int a2, void *a2_2);  // 0x50E6A0
    TypeList_flat *  Constructor(char a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x50E7E0
    char Set(int a2, unsigned int * a3, void *a3_2);  // 0x50E950
    char  SetCapacity(int a2, unsigned int * a3);  // 0x50F780
    char  SetCapacity_0(int a2, unsigned int * a3);  // 0x50F8C0
    int  FindItemIndex_0(unsigned int * a2);  // 0x50F970
    VectorClass_flat * Get(unsigned int * Block, char a2);  // 0x50FFF0
    VectorClass_flat *  Constructor_0(char a2);  // 0x510310
    int  Count(int a2);  // 0x50E4F0
    int  GetSize(unsigned int * a2);  // 0x50EA30
    unsigned int  GetCapacity(int a2);  // 0x50EA70
    char  CompareVectors(int a2);  // 0x50F740
    int  FindItemIndex(unsigned int * a2);  // 0x50F860
    unsigned int  GetItemIndex_0(int a2);  // 0x50F8A0
};
} // namespace gamemd
