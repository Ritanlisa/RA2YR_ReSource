// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_W4PassabilityType {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    int Clear(int a2);  // 0x588F00
    void Destroy_0();  // 0x588F60
    unsigned int  GetItemIndex_0(int a2);  // 0x588F90
    void Destroy_1();  // 0x588FD0
    unsigned int  GetItemIndex_1(int a2);  // 0x589000
    char  AddRef(int a2);  // 0x589EB0
    char  Release(int a2, unsigned int * a3);  // 0x589EF0
    wchar_t * SetCapacity_1(void *a1_1);  // 0x589FA0
    int  Constructor_0(unsigned int * a2);  // 0x58A3A0
    VectorClass_flat *  Constructor_1(char a2);  // 0x58AA90
};
} // namespace gamemd
