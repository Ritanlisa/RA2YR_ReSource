// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_HouseTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector *  Constructor_VectorClass_HouseTypeClass___(unsigned int * Block, char a2);  // 0x4F0340
    DynamicVector *  Constructor_VectorClass_TaskForceClass___(unsigned int * Block, char a2);  // 0x4F03E0
    DynamicVector *  Constructor_VectorClass_TeamTypeClass___(unsigned int * Block, char a2);  // 0x4F0480
    void Destroy(void *a1 = 0);  // 0x4E8AE0
    unsigned int  GetItemIndex(int a2);  // 0x4E8B10
    int  Get(int a2, void *a1 = 0);  // 0x4E8B30
    void Destroy_0();  // 0x4E8B40
    unsigned int  GetItemIndex_0(int a2);  // 0x4E8B70
    void Destroy_1();  // 0x4E8BA0
    unsigned int  GetItemIndex_1(int a2);  // 0x4E8BD0
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x4EC7C0
    char  Release(int a2, unsigned int * a3);  // 0x4EC800
    void Remove(void *a1 = 0);  // 0x4EC8B0
    int  GetSize(unsigned int * a2);  // 0x4EC8E0
    unsigned int  LoadTypeData(int a2);  // 0x4EC920
    char  SetCapacity(int a2, unsigned int * a3);  // 0x4EC940
    int  FindItemIndex(unsigned int * a2);  // 0x4EC9F0
    char  SetCapacity_0(int a2, unsigned int * a3);  // 0x4ECBA0
    int  FindItemIndex_0(unsigned int * a2);  // 0x4ECC50
    char  SetCapacity_1(int a2, unsigned int * a3);  // 0x4ECE00
    int  FindItemIndex_1(unsigned int * a2);  // 0x4ECEB0
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x4F02F0
};
} // namespace gamemd
