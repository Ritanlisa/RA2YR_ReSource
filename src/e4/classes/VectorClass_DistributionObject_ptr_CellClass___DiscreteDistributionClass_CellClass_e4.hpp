// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass {
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
    AbstractClass * *  Release(int a2, int * a3);  // 0x4E0840
    AbstractClass * *  SetCapacity(int a2, int * a3);  // 0x4E0B10
    char  AddRef(int a2);  // 0x4E07E0
    int  FindItemIndex(unsigned int * a2);  // 0x4E0CA0
    VectorClass_flat *  QueryInterface(char a2);  // 0x4E0D80
    DynamicVector *  Constructor(char a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x4E0E20
    unsigned int *  Clear(unsigned int * a2, int a3);  // 0x4E0250
    unsigned int  GetCapacity(int a2);  // 0x4E09E0
    int Destroy(void *a1_1);  // 0x4E0AB0
    unsigned int  GetItemIndex(int a2);  // 0x4E0AF0
    wchar_t * ddtor(void *a1_1);  // 0x4E0950
};

struct _VectorClass_V_DistributionObject_PAVCellClass_DiscreteDistributionClass_VCellClass {
    char __pad_0[1];  // 0x0
    char m_1[4];  // 0x1
    char __pad_5[3];  // 0x5
    int m_8;  // 0x8
    int m_C;  // 0xC
    char __tail_10[4];  // 0x10
    void  VectorClass_DistributionObject_ptr_CellClass___DiscreteDistributionClass_CellClass_GetSize(unsigned int * a2);  // 0x4E0990
};
} // namespace gamemd
