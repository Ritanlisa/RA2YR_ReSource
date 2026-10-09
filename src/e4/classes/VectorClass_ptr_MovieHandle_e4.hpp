// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_ptr_MovieHandle {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    int Get(void *a1_1);  // 0x75A430
    unsigned int Get(int a2);  // 0x75A460
    int Get(int a2, void *a2_2);  // 0x75A480
    char Constructor_VectorClass_MovieHandle___(int a2, void *a2_2, void *a3_1);  // 0x75A490
    char Constructor_VectorClass_MovieHandle___(int a2, unsigned int * a3);  // 0x75A4D0
    void Constructor_VectorClass_MovieHandle___(void *a1_1);  // 0x75A580
    int Constructor_VectorClass_MovieHandle___(unsigned int * a2);  // 0x75A5B0
    unsigned int Constructor_VectorClass_MovieHandle___(int a2);  // 0x75A5F0
    char Constructor_VectorClass_MovieHandle___(int a2, unsigned int * a3);  // 0x75A610
    int Constructor_VectorClass_MovieHandle___(unsigned int * a2);  // 0x75A6C0
    VectorClass_flat * Constructor_VectorClass_MovieHandle___(unsigned int * Block, char a2);  // 0x75A6F0
    DynamicVector * Constructor_VectorClass_MovieHandle___(unsigned int * Block, char a2);  // 0x75A740
};
} // namespace gamemd
