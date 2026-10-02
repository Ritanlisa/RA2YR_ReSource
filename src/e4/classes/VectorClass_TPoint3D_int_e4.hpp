// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_TPoint3D_int {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
// --- flat members (END) ---
    unsigned int * Clear(unsigned int * a2, int a3);  // 0x465DE0
    char AddRef(int a2);  // 0x465E10
    char Release(int a2, char * a3);  // 0x465E70
    wchar_t * ddtor(void *a1_1);  // 0x465F50
    int GetSize(unsigned int * a2);  // 0x465F80
    unsigned int GetCapacity(int a2);  // 0x465FD0
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x466080
};
} // namespace gamemd
