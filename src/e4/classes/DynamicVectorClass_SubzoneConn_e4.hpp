// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct DynamicVectorClass_SubzoneConn {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    unsigned int Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
    unsigned int *__pad_5;
    unsigned int __tail_10;
    unsigned int *m_1;
    unsigned int m_C;
// --- flat members (END) ---
    AbstractClass * * Release(int a2, char * a3);  // 0x589190
    DynamicVector * Add(unsigned int * Block, char a2, void *a3_1);  // 0x5890B0
    int GetSize(unsigned int * a2);  // 0x5892D0
    unsigned int Remove(int a2);  // 0x588CC0
};
} // namespace gamemd
