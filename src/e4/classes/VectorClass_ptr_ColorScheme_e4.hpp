// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_ColorScheme {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
// --- flat members (END) ---
    AbstractClass * * SetCapacity_0(CCINIClass * aP1, unsigned char * a2);  // 0x6288F0
    int Get(int a2, void *a2_2);  // 0x627D70
    char Add(int a2, void *a2_2, void *a3_1);  // 0x627E10
    char Constructor_VectorClass_HSVClass_(int a2, unsigned int * a3);  // 0x627E50
    void Constructor_VectorClass_HSVClass_(void *a1_1);  // 0x627F00
    int Constructor_VectorClass_HSVClass_(unsigned int * a2);  // 0x627F30
    unsigned int Constructor_VectorClass_HSVClass_(int a2);  // 0x627F70
    char Constructor_VectorClass_HSVClass_(int a2, char * a3);  // 0x6282E0
    int Constructor_VectorClass_HSVClass_(void *a1_1);  // 0x6283E0
    int Constructor_VectorClass_HSVClass_(int a2);  // 0x628410
    unsigned int Constructor_VectorClass_HSVClass_(int a2);  // 0x628470
    VectorClass_flat * Constructor_VectorClass_HSVClass_(unsigned int * Block, char a2);  // 0x6285F0
    VectorClass_flat * Constructor_VectorClass_HSVClass_(unsigned int * Block, char a2);  // 0x628760
    void Destroy_0();  // 0x628A40
    int SetCapacity_1(int a2);  // 0x628A70
    unsigned int GetItemIndex_0(int a2);  // 0x628AD0
    VectorClass_flat *  Constructor(unsigned int * Block, char a2, void *a3_1);  // 0x628E80
};
} // namespace gamemd
