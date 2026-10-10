// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_MultiplayerTeam {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
// --- flat members (END) ---
    int  Get(int a2, void *a1 = 0);  // 0x5D8100
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x5D82F0
    char  Release(int a2, unsigned int * a3);  // 0x5D8330
    void Remove(void *a1_1, void *a1 = 0);  // 0x5D83E0
    int  GetSize(unsigned int * a2);  // 0x5D8410
    unsigned int  GetCapacity(int a2);  // 0x5D8450
    VectorClass_flat *  QueryInterface(char a2);  // 0x5D8810
};
} // namespace gamemd
