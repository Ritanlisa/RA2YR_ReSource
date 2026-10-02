// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct DynamicVectorClass_ptr_NodeNameType {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    unsigned char m_1[4];  // 0x1
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    void ddtor(void *a1_1);  // 0x5C5070
    int Clear(int a2);  // 0x5C50C0
    char AddRef(int a2);  // 0x5C5390
    char Remove(int a2, unsigned int * a3);  // 0x5C5510
    int GetSize(unsigned int * a2);  // 0x5C55C0
    DynamicVector * Add(unsigned int * Block, char a2, void *a3_1);  // 0x5C58F0
    unsigned int Get(int a2, void *a2_2);  // 0x5C50A0
};
} // namespace gamemd
