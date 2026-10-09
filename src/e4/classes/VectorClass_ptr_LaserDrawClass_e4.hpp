// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_LaserDrawClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector * Constructor_VectorClass_LaserDrawClass___(unsigned int * Block, char a2);  // 0x5515E0
    int Get(void *a1_1);  // 0x5512D0
    unsigned int Get(int a2);  // 0x551300
    int Get(int a2, void *a2_2);  // 0x551320
    char Constructor_VectorClass_LaserDrawClass___(int a2, void *a2_2, void *a3_1);  // 0x551330
    char Constructor_VectorClass_LaserDrawClass___(int a2, unsigned int * a3);  // 0x551370
    void Constructor_VectorClass_LaserDrawClass___(void *a1_1);  // 0x551420
    int Constructor_VectorClass_LaserDrawClass___(unsigned int * a2);  // 0x551450
    unsigned int Constructor_VectorClass_LaserDrawClass___(int a2);  // 0x551490
    char Constructor_VectorClass_LaserDrawClass___(int a2, unsigned int * a3);  // 0x5514B0
    int Constructor_VectorClass_LaserDrawClass___(unsigned int * a2);  // 0x551560
    VectorClass_flat * Constructor_VectorClass_LaserDrawClass___(unsigned int * Block, char a2);  // 0x551590
};
} // namespace gamemd
