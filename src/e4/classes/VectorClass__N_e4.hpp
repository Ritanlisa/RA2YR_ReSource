// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass__N {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    char  Remove(signed int Size, char * a3);  // 0x50F9E0
    char  SetCapacity(signed int Size, char * a3);  // 0x50FB20
    int  Destroy_0(unsigned char * a2);  // 0x50FBD0
    VectorClass_flat *  Constructor_VectorClass_bool_(char a2);  // 0x510360
    int Clear(void *a1_1);  // 0x50E700
    char  AddRef(int a2);  // 0x50F9A0
    wchar_t * ddtor(void *a1_1);  // 0x50FA90
    int  GetSize(unsigned char * a2);  // 0x50FAC0
    int  Get(int a2, void *a1 = 0);  // 0x50FB00
};
} // namespace gamemd
