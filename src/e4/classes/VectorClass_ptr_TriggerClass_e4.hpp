// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_TriggerClass {
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned short __pad_00E;  // 0xE
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Get(int a2, void *a2_2);  // 0x4E8590
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x4EA420
    char  Release(int a2, unsigned int * a3);  // 0x4EA460
    void Remove(void *a1_1, void *a1 = 0);  // 0x4EA510
    int  GetSize(unsigned int * a2);  // 0x4EA540
    unsigned int  GetCapacity(int a2);  // 0x4EA580
    VectorClass_flat *  QueryInterface(char a2);  // 0x4EF990
};
} // namespace gamemd
