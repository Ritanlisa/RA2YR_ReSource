// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_ObjectTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector * Constructor_VectorClass_ObjectTypeClass___(unsigned int * Block, char a2);  // 0x5F9E30
    int Get(void *a1_1);  // 0x5F9B00
    unsigned int Get(int a2);  // 0x5F9B30
    int Get(int a2, void *a2_2);  // 0x5F9B50
    char Constructor_VectorClass_ObjectTypeClass___(int a2, void *a2_2, void *a3_1);  // 0x5F9B80
    char Constructor_VectorClass_ObjectTypeClass___(int a2, unsigned int * a3);  // 0x5F9BC0
    void Constructor_VectorClass_ObjectTypeClass___(void *a1_1);  // 0x5F9C70
    int Constructor_VectorClass_ObjectTypeClass___(unsigned int * a2);  // 0x5F9CA0
    unsigned int Constructor_VectorClass_ObjectTypeClass___(int a2);  // 0x5F9CE0
    char Constructor_VectorClass_ObjectTypeClass___(int a2, unsigned int * a3);  // 0x5F9D00
    int Constructor_VectorClass_ObjectTypeClass___(unsigned int * a2);  // 0x5F9DB0
    VectorClass_flat * Constructor_VectorClass_ObjectTypeClass___(unsigned int * Block, char a2);  // 0x5F9DE0
};
} // namespace gamemd
