// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_Wstring {
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    unsigned int Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned short __pad_00E;  // 0xE
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char **   Clear(int a3, void *a2 = 0);  // 0x69C580
    int GetSize(const char ** a2);  // 0x69C970
    unsigned int  GetCapacity(int a2);  // 0x69CBA0
    VectorClass_flat *  QueryInterface(char a2);  // 0x69D4B0
    bool SetCapacity(const char ** a2);  // 0x7B4860
};
} // namespace gamemd
