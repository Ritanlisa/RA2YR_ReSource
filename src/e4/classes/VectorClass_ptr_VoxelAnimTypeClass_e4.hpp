// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_VoxelAnimTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector *  Constructor_VectorClass_VoxelAnimTypeClass___(unsigned int * Block, char a2);  // 0x4F0B60
    DynamicVector *  Constructor_VectorClass_IsometricTileTypeClass___(unsigned int * Block, char a2);  // 0x4F0C00
    void Destroy(void *a1 = 0);  // 0x4E8FC0
    unsigned int  GetItemIndex(int a2);  // 0x4E8FF0
    int  Get(int a2, void *a1 = 0);  // 0x4E9010
    void Destroy_0();  // 0x4E9020
    unsigned int  GetItemIndex_0(int a2);  // 0x4E9050
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x4EE6A0
    char  Release(int a2, unsigned int * a3);  // 0x4EE6E0
    void Remove(void *a1 = 0);  // 0x4EE790
    int  GetSize(unsigned int * a2);  // 0x4EE7C0
    unsigned int  LoadTypeData(int a2);  // 0x4EE800
    char  SetCapacity(int a2, unsigned int * a3);  // 0x4EE820
    int  FindItemIndex(unsigned int * a2);  // 0x4EE8D0
    char  SetCapacity_0(int a2, unsigned int * a3);  // 0x4EEA80
    int  FindItemIndex_0(unsigned int * a2);  // 0x4EEB30
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x4F0B10
};
} // namespace gamemd
