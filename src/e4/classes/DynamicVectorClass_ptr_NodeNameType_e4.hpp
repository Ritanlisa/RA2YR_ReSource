// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct DynamicVectorClass_ptr_NodeNameType {
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    int Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char __pad_00E;  // 0xE
    char __pad_F[1];  // 0xF
    int Count;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    wchar_t * ddtor(void *a1_1);  // 0x5C5070
    int  Clear(int a2);  // 0x5C50C0
    char  AddRef(int a2);  // 0x5C5390
    char  Remove(int a2, unsigned int * a3);  // 0x5C5510
    int  GetSize(unsigned int * a2);  // 0x5C55C0
    DynamicVector *  Add(char a2, void *a1 = 0, void *a3 = 0);  // 0x5C58F0
    unsigned int  Get(int a2, void *a1 = 0);  // 0x5C50A0
};
} // namespace gamemd
