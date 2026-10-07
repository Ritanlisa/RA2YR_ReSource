// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_Wstring {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    unsigned int Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
// --- flat members (END) ---
    char **  Clear(char ** a2, int a3);  // 0x69C580
    char AddRef(int a2);  // 0x69C970
    char Release(int a2, unsigned int * a3);  // 0x69C9C0
    static wchar_t * ddtor(void *a1_1);  // 0x69CB00 [w16g2] static per raw receiver-first
    int GetSize(const char ** a2);  // 0x69CB50
    unsigned int GetCapacity(int a2);  // 0x69CBA0
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x69D4B0
    bool SetCapacity(const char ** a2);  // 0x7B4860
};
} // namespace gamemd
