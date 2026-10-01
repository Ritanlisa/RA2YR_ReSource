// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_SuperClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
    DynamicVector * Constructor_VectorClass_AbstractTypeClass___(unsigned int * Block, char a2);  // 0x4F0E80
    void Destroy(void *a1_1);  // 0x4E8350
    unsigned int GetItemIndex(int a2);  // 0x4E8380
    int Get(int a2, void *a2_2);  // 0x4E83A0
    void Destroy_0();  // 0x4E91A0
    unsigned int GetItemIndex_0(int a2);  // 0x4E91D0
    char Add(int a2, void *a2_2, void *a3_1);  // 0x4E96C0
    char Release(int a2, unsigned int * a3);  // 0x4E9700
    void Remove(void *a1_1);  // 0x4E97B0
    int GetSize(unsigned int * a2);  // 0x4E97E0
    unsigned int GetCapacity(int a2);  // 0x4E9820
    int FindItemIndex(unsigned int * a2);  // 0x4E98F0
    char SetCapacity(int a2, unsigned int * a3);  // 0x4EF400
    int FindItemIndex_0(unsigned int * a2);  // 0x4EF4B0
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x4EF620
    DynamicVector * Constructor_VectorClass_SuperClass___(unsigned int * Block, char a2);  // 0x4EF670
};
} // namespace gamemd
