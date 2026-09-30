// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_FactoryClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
// --- flat members (END) ---
    int  Get(int a2);  // 0x4E8A10
    char  Add(int a2);  // 0x4EC0A0
    char  Release(int a2, unsigned int * a3);  // 0x4EC0E0
    void Remove(void *a1 = 0);  // 0x4EC190
    int  GetSize(unsigned int * a2);  // 0x4EC1C0
    unsigned int  GetCapacity(int a2);  // 0x4EC200
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x4F0110
};
} // namespace gamemd
