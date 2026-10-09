// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_WaypointPathClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector * Constructor_VectorClass_WaypointPathClass___(unsigned int * Block, char a2);  // 0x764710
    int Get(void *a1_1);  // 0x763F90
    unsigned int Get(int a2);  // 0x763FC0
    int Get(int a2, void *a2_2);  // 0x763FE0
    char Constructor_VectorClass_WaypointPathClass___(int a2, void *a2_2, void *a3_1);  // 0x764460
    char Constructor_VectorClass_WaypointPathClass___(int a2, unsigned int * a3);  // 0x7644A0
    void Constructor_VectorClass_WaypointPathClass___(void *a1_1);  // 0x764550
    int Constructor_VectorClass_WaypointPathClass___(unsigned int * a2);  // 0x764580
    unsigned int Constructor_VectorClass_WaypointPathClass___(int a2);  // 0x7645C0
    char Constructor_VectorClass_WaypointPathClass___(int a2, unsigned int * a3);  // 0x7645E0
    int Constructor_VectorClass_WaypointPathClass___(unsigned int * a2);  // 0x764690
    VectorClass_flat * Constructor_VectorClass_WaypointPathClass___(unsigned int * Block, char a2);  // 0x7646C0
};
} // namespace gamemd
