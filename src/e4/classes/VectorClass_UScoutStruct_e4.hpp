// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_UScoutStruct {
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned short __pad_00E;  // 0xE
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int  Clear(int a2, int a3);  // 0x50E620
    char  AddRef(int a2);  // 0x50F1B0
    char  Release(int a2, char * a3);  // 0x50F210
    wchar_t * ddtor(void *a1_1);  // 0x50F300
    int  GetSize(int a2);  // 0x50F330
    unsigned int  GetCapacity(int a2);  // 0x50F380
    VectorClass_flat *  QueryInterface(char a2);  // 0x5101D0
};
} // namespace gamemd
