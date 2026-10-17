// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_K {
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char __pad_00E;  // 0xE
    char __pad_F[1];  // 0xF
    void* Count;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Clear(int a2);  // 0x6BED50
    char  Release(int a2, unsigned int * a3);  // 0x6C6210
    wchar_t * ddtor(void *a1_1);  // 0x6C62C0
    int  GetSize(unsigned int * a2);  // 0x6C62F0
    unsigned int  GetCapacity(int a2);  // 0x6C6330
    char  SetCapacity(int a2, unsigned int * a3);  // 0x6C6350
    int  FindItemIndex(unsigned int * a2);  // 0x6C6450
    VectorClass_flat *  QueryInterface(char a2);  // 0x6C6480
    DynamicVector *  Constructor(char a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x6C64D0
    char  AddRef(int a2);  // 0x6C61D0
};
} // namespace gamemd
