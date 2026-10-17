// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_N {
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
    double Clear(int a2);  // 0x5AC5F0
    char  Release(int a2, unsigned int * a3);  // 0x5AD130
    char  SetCapacity(int a2, unsigned int * a3);  // 0x5AD290
    int  FindItemIndex(double * a2);  // 0x5AD350
    VectorClass_flat *  Constructor_VectorClass_double_(char a2);  // 0x5AD5C0
    char  AddRef(int a2);  // 0x5AD0F0
    wchar_t * ddtor(void *a1_1);  // 0x5AD1F0
    int  GetSize(double * a2);  // 0x5AD220
    unsigned int  GetCapacity(int a2);  // 0x5AD270
};
} // namespace gamemd
