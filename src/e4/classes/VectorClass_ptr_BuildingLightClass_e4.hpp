// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_BuildingLightClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector * Constructor_VectorClass_BuildingLightClass___(unsigned int * Block, char a2);  // 0x4EF7B0
    DynamicVector * Constructor_VectorClass_ParticleSystemClass___(unsigned int * Block, char a2);  // 0x4EFBC0
    int Get(void *a1_1);  // 0x4E8410
    unsigned int Get(int a2);  // 0x4E8440
    int Get(int a2, void *a2_2);  // 0x4E8460
    void Destroy_0();  // 0x4E8660
    unsigned int GetItemIndex_0(int a2);  // 0x4E8690
    char Add(int a2, void *a2_2, void *a3_1);  // 0x4E9B80
    char Release(int a2, unsigned int * a3);  // 0x4E9BC0
    void Remove(void *a1_1);  // 0x4E9C70
    int GetSize(unsigned int * a2);  // 0x4E9CA0
    unsigned int GetCapacity(int a2);  // 0x4E9CE0
    char SetCapacity(int a2, unsigned int * a3);  // 0x4E9D00
    int FindItemIndex(unsigned int * a2);  // 0x4E9DB0
    char SetCapacity_0(int a2, unsigned int * a3);  // 0x4EACC0
    int FindItemIndex_0(unsigned int * a2);  // 0x4EAD70
    VectorClass_flat * Constructor_VectorClass_BuildingLightClass___(unsigned int * Block, char a2);  // 0x4EF760
};
} // namespace gamemd
