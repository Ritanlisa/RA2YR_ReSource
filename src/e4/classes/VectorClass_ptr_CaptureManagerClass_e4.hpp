// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_CaptureManagerClass {
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char __pad_00E;  // 0xE
    char __pad_F[1];  // 0xF
    void* Count;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    DynamicVector *  Constructor_VectorClass_CaptureManagerClass___(char a2);  // 0x4730F0
    int Destroy(void *a1_1);  // 0x472AE0
    unsigned int  GetItemIndex(int a2);  // 0x472B10
    int Get(int a2, void *a2_2);  // 0x472B30
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x472DA0
    char  Release(int a2, unsigned int * a3);  // 0x472DE0
    void Remove(void *a1_1, void *a1 = 0);  // 0x472E90
    int  GetSize(unsigned int * a2);  // 0x472EC0
    unsigned int  GetCapacity(int a2);  // 0x472F00
    char  SetCapacity(int a2, unsigned int * a3);  // 0x472F20
    int  FindItemIndex(unsigned int * a2);  // 0x472FD0
    VectorClass_flat *  QueryInterface(char a2);  // 0x4730A0
};
} // namespace gamemd
