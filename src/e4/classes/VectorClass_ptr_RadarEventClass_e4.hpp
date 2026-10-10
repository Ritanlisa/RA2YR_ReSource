// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_RadarEventClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    int Destroy(void *a1_1);  // 0x660C80
    unsigned int  GetItemIndex(int a2);  // 0x660CB0
    int  loc_660FD0(int a2);  // 0x660CD0
    char  SetCapacity(int a2, unsigned int * a3);  // 0x660E60
    int  FindItemIndex(unsigned int * a2);  // 0x660F50
};
} // namespace gamemd
