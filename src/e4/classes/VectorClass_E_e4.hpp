// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_E {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
// --- flat members (END) ---
    VectorClass_flat *  QueryInterface(char a2);  // 0x74BFA0
    char  Release(signed int Size, char * a3);  // 0x74C030
    void ddtor(void *a1_1);  // 0x74C0E0
    char  Clear(int a2);  // 0x74BF90
    char  AddRef(int a2);  // 0x74BFF0
    int  GetSize(unsigned char * a2);  // 0x74C110
    int  GetCapacity(int a2);  // 0x74C150
};
} // namespace gamemd
