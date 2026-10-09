// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_SlaveManagerClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector * Constructor_VectorClass_SlaveManagerClass___(unsigned int * Block, char a2);  // 0x6B1A20
    int Get(void *a1_1);  // 0x6B1410
    unsigned int Get(int a2);  // 0x6B1440
    int Get(int a2, void *a2_2);  // 0x6B1460
    char Constructor_VectorClass_SlaveManagerClass___(int a2, void *a2_2, void *a3_1);  // 0x6B16D0
    char Constructor_VectorClass_SlaveManagerClass___(int a2, unsigned int * a3);  // 0x6B1710
    void Constructor_VectorClass_SlaveManagerClass___(void *a1_1);  // 0x6B17C0
    int Constructor_VectorClass_SlaveManagerClass___(unsigned int * a2);  // 0x6B17F0
    unsigned int Constructor_VectorClass_SlaveManagerClass___(int a2);  // 0x6B1830
    char Constructor_VectorClass_SlaveManagerClass___(int a2, unsigned int * a3);  // 0x6B1850
    int Constructor_VectorClass_SlaveManagerClass___(unsigned int * a2);  // 0x6B1900
    VectorClass_flat * Constructor_VectorClass_SlaveManagerClass___(unsigned int * Block, char a2);  // 0x6B19D0
};
} // namespace gamemd
