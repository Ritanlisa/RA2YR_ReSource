// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct DynamicVectorClass_SubzoneConn {
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    unsigned int Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char __pad_00E;  // 0xE
    char __pad_F[1];  // 0xF
    int Count;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * *  Release(int a2, char * a3);  // 0x589190
    DynamicVector *  Add(char a2, void *a1 = 0, void *a3 = 0);  // 0x5890B0
    int  GetSize(unsigned int * a2);  // 0x5892D0
    unsigned int Remove(int a2, void *a2_1 = 0);  // 0x588CC0
};
} // namespace gamemd
