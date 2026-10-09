// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_ptr_RadBeam {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    int Destroy(void *a1_1);  // 0x65A1E0
    unsigned int GetItemIndex(int a2);  // 0x65A210
    int Constructor_VectorClass_RadBeam___(int a2, void *a2_2);  // 0x65A230
    char Constructor_VectorClass_RadBeam___(int a2, void *a2_2, void *a3_1);  // 0x65A240
    char Constructor_VectorClass_RadBeam___(int a2, unsigned int * a3);  // 0x65A280
    void Constructor_VectorClass_RadBeam___(void *a1_1);  // 0x65A330
    int Constructor_VectorClass_RadBeam___(unsigned int * a2);  // 0x65A360
    unsigned int Constructor_VectorClass_RadBeam___(int a2);  // 0x65A3A0
    char Constructor_VectorClass_RadBeam___(int a2, unsigned int * a3);  // 0x65A3C0
    int Constructor_VectorClass_RadBeam___(unsigned int * a2);  // 0x65A470
    VectorClass_flat * Constructor_VectorClass_RadBeam___(unsigned int * Block, char a2);  // 0x65A4A0
    DynamicVector * Constructor_VectorClass_RadBeam___(unsigned int * Block, char a2);  // 0x65A4F0
};
} // namespace gamemd
