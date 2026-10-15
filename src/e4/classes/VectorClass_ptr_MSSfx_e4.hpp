// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_MSSfx {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    int Get(int a2, void *a2_2);  // 0x5D2720
    char  FindItemIndex(int a2);  // 0x5D27E0
    char  SetCapacity(int a2, unsigned int * a3);  // 0x5D2820
    void Destroy_0();  // 0x5D28D0
    DynamicVector * Constructor_VectorClass_MSAnim___(unsigned int * Block, char a2);  // 0x5D2960
    VectorClass_flat *  QueryInterface(char a2);  // 0x5D2D40
    unsigned char __pad_00E;  // 0xE [X30:canon]
};
} // namespace gamemd
