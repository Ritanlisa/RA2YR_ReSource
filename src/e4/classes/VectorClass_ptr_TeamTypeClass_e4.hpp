// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_TeamTypeClass {
    unsigned int ptr_0;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned short __pad_00E;  // 0xE
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Get(int a2, void *a2_2);  // 0x4E8BF0
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x4ECC80
    char  Release(int a2, unsigned int * a3);  // 0x4ECCC0
    void Remove(void *a1_1, void *a1 = 0);  // 0x4ECD70
    int  GetSize(unsigned int * a2);  // 0x4ECDA0
    unsigned int  LoadTypeData(int a2);  // 0x4ECDE0
    VectorClass_flat *  QueryInterface(char a2);  // 0x4F0430
};
} // namespace gamemd
