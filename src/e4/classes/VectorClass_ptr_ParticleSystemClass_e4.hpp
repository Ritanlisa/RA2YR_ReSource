// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_ParticleSystemClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
// --- flat members (END) ---
    int Get(int a2, void *a2_2);  // 0x4E86B0
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x4EAB40
    char  Release(int a2, unsigned int * a3);  // 0x4EAB80
    void Remove(void *a1_1, void *a1 = 0);  // 0x4EAC30
    int  GetSize(unsigned int * a2);  // 0x4EAC60
    unsigned int  GetCapacity(int a2);  // 0x4EACA0
    VectorClass_flat *  QueryInterface(char a2);  // 0x4EFB70
    unsigned char __pad_00E;  // 0xE [X30:canon]
};
} // namespace gamemd
