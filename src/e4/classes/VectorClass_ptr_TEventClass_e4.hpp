// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_ptr_TEventClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    int Get(void *a1_1);  // 0x71FBA0
    unsigned int Get(int a2);  // 0x71FBD0
    int Get(int a2, void *a2_2);  // 0x71FBF0
    char Constructor_VectorClass_TEventClass___(int a2, void *a2_2, void *a3_1);  // 0x71FC00
    char Constructor_VectorClass_TEventClass___(int a2, unsigned int * a3);  // 0x71FC40
    void Constructor_VectorClass_TEventClass___(void *a1_1);  // 0x71FCF0
    int Constructor_VectorClass_TEventClass___(unsigned int * a2);  // 0x71FD20
    unsigned int Constructor_VectorClass_TEventClass___(int a2);  // 0x71FD60
    char Constructor_VectorClass_TEventClass___(int a2, unsigned int * a3);  // 0x71FD80
    int Constructor_VectorClass_TEventClass___(unsigned int * a2);  // 0x71FE30
    VectorClass_flat * Constructor_VectorClass_TEventClass___(unsigned int * Block, char a2);  // 0x71FE60
    DynamicVector * Constructor_VectorClass_TEventClass___(unsigned int * Block, char a2);  // 0x71FEB0
};
} // namespace gamemd
