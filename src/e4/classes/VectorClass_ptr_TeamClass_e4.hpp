// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_ptr_TeamClass {
    unsigned int ptr_0;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char __pad_00E;  // 0xE
    char __pad_F[1];  // 0xF
    void* Count;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Get(int a2, void *a2_2);  // 0x4E84D0
    void Destroy_0();  // 0x4E8960
    unsigned int  GetItemIndex_0(int a2);  // 0x4E8990
    void Destroy_1();  // 0x4E89C0
    unsigned int  GetItemIndex_1(int a2);  // 0x4E89F0
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x4EA040
    char  Release(int a2, unsigned int * a3);  // 0x4EA080
    void Remove(void *a1_1, void *a1 = 0);  // 0x4EA130
    int  GetSize(unsigned int * a2);  // 0x4EA160
    unsigned int  GetCapacity(int a2);  // 0x4EA1A0
    char  SetCapacity(int a2, unsigned int * a3);  // 0x4EA1C0
    int  FindItemIndex(unsigned int * a2);  // 0x4EA270
    char  SetCapacity_0(int a2, unsigned int * a3);  // 0x4EBFC0
    int  FindItemIndex_0(unsigned int * a2);  // 0x4EC070
    char  SetCapacity_1(int a2, unsigned int * a3);  // 0x4EC220
    int  FindItemIndex_1(unsigned int * a2);  // 0x4EC2D0
    VectorClass_flat *  Constructor_VectorClass_TeamClass___(char a2);  // 0x4EF8A0
    DynamicVector *  Constructor_VectorClass_AnimClass___(char a2);  // 0x4F00C0
    DynamicVector *  Constructor_VectorClass_FactoryClass___(char a2);  // 0x4F0160
};
} // namespace gamemd
