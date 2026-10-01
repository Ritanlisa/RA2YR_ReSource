// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_AITriggerTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector * Constructor_VectorClass_AITriggerTypeClass___(unsigned int * Block, char a2);  // 0x4EF710
    DynamicVector * Constructor_VectorClass_TriggerClass___(unsigned int * Block, char a2);  // 0x4EF9E0
    DynamicVector * Constructor_VectorClass_TriggerTypeClass___(unsigned int * Block, char a2);  // 0x4EFA80
    void Destroy(void *a1_1);  // 0x4E83B0
    unsigned int GetItemIndex(int a2);  // 0x4E83E0
    int Get(int a2, void *a2_2);  // 0x4E8400
    void Destroy_0();  // 0x4E8540
    unsigned int GetItemIndex_0(int a2);  // 0x4E8570
    void Destroy_1();  // 0x4E85A0
    unsigned int GetItemIndex_1(int a2);  // 0x4E85D0
    char Add(int a2, void *a2_2, void *a3_1);  // 0x4E9920
    char Release(int a2, unsigned int * a3);  // 0x4E9960
    void Remove(void *a1_1);  // 0x4E9A10
    int GetSize(unsigned int * a2);  // 0x4E9A40
    unsigned int LoadTypeData(int a2);  // 0x4E9A80
    char SetCapacity(int a2, unsigned int * a3);  // 0x4E9AA0
    int FindItemIndex(unsigned int * a2);  // 0x4E9B50
    char SetCapacity_0(int a2, unsigned int * a3);  // 0x4EA5A0
    int FindItemIndex_0(unsigned int * a2);  // 0x4EA650
    char SetCapacity_1(int a2, unsigned int * a3);  // 0x4EA800
    int FindItemIndex_1(unsigned int * a2);  // 0x4EA8B0
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x4EF6C0
};
} // namespace gamemd
