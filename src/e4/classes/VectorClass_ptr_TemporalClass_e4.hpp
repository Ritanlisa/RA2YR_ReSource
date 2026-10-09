// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_TemporalClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector * Constructor_VectorClass_TemporalClass___(unsigned int * Block, char a2);  // 0x71B550
    int Get(void *a1_1);  // 0x71B240
    unsigned int Get(int a2);  // 0x71B270
    int Get(int a2, void *a2_2);  // 0x71B290
    char Constructor_VectorClass_TemporalClass___(int a2, void *a2_2, void *a3_1);  // 0x71B2A0
    char Constructor_VectorClass_TemporalClass___(int a2, unsigned int * a3);  // 0x71B2E0
    void Constructor_VectorClass_TemporalClass___(void *a1_1);  // 0x71B390
    int Constructor_VectorClass_TemporalClass___(unsigned int * a2);  // 0x71B3C0
    unsigned int Constructor_VectorClass_TemporalClass___(int a2);  // 0x71B400
    char Constructor_VectorClass_TemporalClass___(int a2, unsigned int * a3);  // 0x71B420
    int Constructor_VectorClass_TemporalClass___(unsigned int * a2);  // 0x71B4D0
    VectorClass_flat * Constructor_VectorClass_TemporalClass___(unsigned int * Block, char a2);  // 0x71B500
};
} // namespace gamemd
