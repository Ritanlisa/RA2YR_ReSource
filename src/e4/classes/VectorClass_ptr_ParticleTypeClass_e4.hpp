// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_ParticleTypeClass {
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
    DynamicVector * Constructor_VectorClass_ParticleTypeClass___(unsigned int * Block, char a2);  // 0x4F0CA0
    DynamicVector * Constructor_VectorClass_ParticleSystemTypeClass___(unsigned int * Block, char a2);  // 0x4F0D40
    DynamicVector * Constructor_VectorClass_SuperWeaponTypeClass___(unsigned int * Block, char a2);  // 0x4F0DE0
    void Destroy(void *a1_1);  // 0x4E9080
    unsigned int GetItemIndex(int a2);  // 0x4E90B0
    int Get(int a2, void *a2_2);  // 0x4E90D0
    void Destroy_0();  // 0x4E90E0
    unsigned int GetItemIndex_0(int a2);  // 0x4E9110
    void Destroy_1();  // 0x4E9140
    unsigned int GetItemIndex_1(int a2);  // 0x4E9170
    char Add(int a2, void *a2_2, void *a3_1);  // 0x4EEB60
    char Release(int a2, unsigned int * a3);  // 0x4EEBA0
    void Remove(void *a1_1);  // 0x4EEC50
    int GetSize(unsigned int * a2);  // 0x4EEC80
    unsigned int LoadTypeData(int a2);  // 0x4EECC0
    char SetCapacity(int a2, unsigned int * a3);  // 0x4EECE0
    int FindItemIndex(unsigned int * a2);  // 0x4EED90
    char SetCapacity_0(int a2, unsigned int * a3);  // 0x4EEF40
    int FindItemIndex_0(unsigned int * a2);  // 0x4EEFF0
    char SetCapacity_1(int a2, unsigned int * a3);  // 0x4EF1A0
    int FindItemIndex_1(unsigned int * a2);  // 0x4EF250
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x4F0C50
};
} // namespace gamemd
