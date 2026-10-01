// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass__N {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    char Remove(signed int Size, char * a3);  // 0x50F9E0
    char SetCapacity(signed int Size, char * a3);  // 0x50FB20
    int Destroy_0(unsigned char * a2);  // 0x50FBD0
    VectorClass_flat * Add(unsigned int * Block, char a2, void *a3_1);  // 0x510360
    DynamicVector * Constructor_VectorClass_bool_(unsigned int * Block, char a2);  // 0x5103B0
    void Destroy(void *a1_1);  // 0x50E700
    int GetItemIndex(int a2);  // 0x50E730
    char Clear(int a2);  // 0x50E750
    char AddRef(int a2);  // 0x50F9A0
    void ddtor(void *a1_1);  // 0x50FA90
    int GetSize(unsigned char * a2);  // 0x50FAC0
    int Get(int a2, void *a2_2);  // 0x50FB00
};
} // namespace gamemd
