// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_ColorScheme {
    unsigned int ptr_0;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned short __pad_00E;  // 0xE
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * SetCapacity_0(CCINIClass * aP1, unsigned char * a2);  // 0x6288F0
    int  Get(int a2, void *a1 = 0);  // 0x627D70
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x627E10
    VectorClass_flat * Constructor_VectorClass_HSVClass_(unsigned int * Block, char a2);  // 0x627E50
    void Destroy_0();  // 0x628A40
    int  SetCapacity_1(int a2);  // 0x628A70
    unsigned int  GetItemIndex_0(int a2);  // 0x628AD0
    VectorClass_flat *  Constructor(char a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x628E80
};
} // namespace gamemd
