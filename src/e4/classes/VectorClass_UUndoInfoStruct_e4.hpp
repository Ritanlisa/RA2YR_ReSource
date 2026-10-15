// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_UUndoInfoStruct {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    AbstractClass * *  Release(int a2, unsigned int * a3);  // 0x6B44A0
    AbstractClass * *  SetCapacity(int a2, unsigned int * a3);  // 0x6B4650
    int Constructor_VectorClass_UndoInfoStruct_(void *a1_1);  // 0x6B43B0
    unsigned char __pad_00E;  // 0xE [X30:canon]
};
} // namespace gamemd
