// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_PAG {
    unsigned int ptr_0;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned short __pad_00E;  // 0xE
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int  Count(int a2);  // 0x54A1E0
    char  Get(int a2, void *a1 = 0);  // 0x54A250
    char  Release(int a2, unsigned int * a3);  // 0x54A290
    void Set(void *a1_1, void *a2_1, void *a3_1);  // 0x54A340
    int  GetSize(unsigned int * a2);  // 0x54A370
    unsigned int  GetCapacity(int a2);  // 0x54A3B0
    VectorClass_flat *  QueryInterface(char a2);  // 0x54A710
};
} // namespace gamemd
