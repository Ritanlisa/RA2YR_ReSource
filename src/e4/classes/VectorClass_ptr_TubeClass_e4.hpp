// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_ptr_TubeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    int Get(int a2, void *a2_2);  // 0x4E8600
    void Destroy_0();  // 0x4E86C0
    unsigned int  GetItemIndex_0(int a2);  // 0x4E86F0
    void Destroy_1();  // 0x4E8720
    unsigned int  GetItemIndex_1(int a2);  // 0x4E8750
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x4EA8E0
    char  Release(int a2, unsigned int * a3);  // 0x4EA920
    void Remove(void *a1_1, void *a1 = 0);  // 0x4EA9D0
    int  GetSize(unsigned int * a2);  // 0x4EAA00
    unsigned int  GetCapacity(int a2);  // 0x4EAA40
    char  SetCapacity(int a2, unsigned int * a3);  // 0x4EAA60
    int  FindItemIndex(unsigned int * a2);  // 0x4EAB10
    char  SetCapacity_0(int a2, unsigned int * a3);  // 0x4EAF20
    int  FindItemIndex_0(unsigned int * a2);  // 0x4EAFD0
    char  SetCapacity_1(int a2, unsigned int * a3);  // 0x4EB180
    int  FindItemIndex_1(unsigned int * a2);  // 0x4EB230
    VectorClass_flat *  Constructor_VectorClass_TubeClass___(char a2);  // 0x4EFAD0
    DynamicVector *  Constructor_VectorClass_WaveClass___(char a2);  // 0x4EFC60
    DynamicVector *  Constructor_VectorClass_OverlayClass___(char a2);  // 0x4EFD00
};
} // namespace gamemd
