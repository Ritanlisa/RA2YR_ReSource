// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_PlanningBranchClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
// --- flat members (END) ---
    char  Release(int a2, unsigned int * a3);  // 0x63E090
    int  Clear(int a2);  // 0x63DC10
    char  Add(int a2);  // 0x63E050
    int  GetSize(unsigned int * a2);  // 0x63E170
    unsigned int  Remove(int a2);  // 0x63E1B0
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x63ECF0
};
} // namespace gamemd
