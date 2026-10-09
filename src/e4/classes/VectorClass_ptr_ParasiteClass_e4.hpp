// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_ParasiteClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector * Constructor_VectorClass_ParasiteClass___(unsigned int * Block, char a2);  // 0x62B380
    int Destroy(void *a1_1);  // 0x62B070
    unsigned int GetItemIndex(int a2);  // 0x62B0A0
    int Constructor_VectorClass_ParasiteClass___(int a2, void *a2_2);  // 0x62B0C0
    char Constructor_VectorClass_ParasiteClass___(int a2, void *a2_2, void *a3_1);  // 0x62B0D0
    char Constructor_VectorClass_ParasiteClass___(int a2, unsigned int * a3);  // 0x62B110
    void Constructor_VectorClass_ParasiteClass___(void *a1_1);  // 0x62B1C0
    int Constructor_VectorClass_ParasiteClass___(unsigned int * a2);  // 0x62B1F0
    unsigned int Constructor_VectorClass_ParasiteClass___(int a2);  // 0x62B230
    char Constructor_VectorClass_ParasiteClass___(int a2, unsigned int * a3);  // 0x62B250
    int Constructor_VectorClass_ParasiteClass___(unsigned int * a2);  // 0x62B300
    VectorClass_flat * Constructor_VectorClass_ParasiteClass___(unsigned int * Block, char a2);  // 0x62B330
};
} // namespace gamemd
