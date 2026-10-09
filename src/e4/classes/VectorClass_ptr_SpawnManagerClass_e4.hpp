// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_SpawnManagerClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector * Constructor_VectorClass_SpawnManagerClass___(unsigned int * Block, char a2);  // 0x6B8830
    int Get(void *a1_1);  // 0x6B81C0
    unsigned int Get(int a2);  // 0x6B81F0
    int Get(int a2, void *a2_2);  // 0x6B8210
    char Constructor_VectorClass_SpawnManagerClass___(int a2, void *a2_2, void *a3_1);  // 0x6B84E0
    char Constructor_VectorClass_SpawnManagerClass___(int a2, unsigned int * a3);  // 0x6B8520
    void Constructor_VectorClass_SpawnManagerClass___(void *a1_1);  // 0x6B85D0
    int Constructor_VectorClass_SpawnManagerClass___(unsigned int * a2);  // 0x6B8600
    unsigned int Constructor_VectorClass_SpawnManagerClass___(int a2);  // 0x6B8640
    char Constructor_VectorClass_SpawnManagerClass___(int a2, unsigned int * a3);  // 0x6B8660
    int Constructor_VectorClass_SpawnManagerClass___(unsigned int * a2);  // 0x6B8710
    VectorClass_flat * Constructor_VectorClass_SpawnManagerClass___(unsigned int * Block, char a2);  // 0x6B87E0
};
} // namespace gamemd
