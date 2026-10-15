// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct Tactical_42 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
// --- flat members (END) ---
    int  FindItem(unsigned int * a2);  // 0x6E4A80
    unsigned int *  loc_6E4B00(char a2);  // 0x6E4B00
    void ClearBuffer(void *a1_1);  // 0x6E47F0
    int  UpdateView(int a2);  // 0x6E4840
    char  AddRef(int a2);  // 0x6E4850
    char  Release(int a2, unsigned int * a3);  // 0x6E4890
    wchar_t * ddtor(void *a1_1, void *a2_1);  // 0x6E4940
    char  SetCapacity(int a2, unsigned int * a3);  // 0x6E49D0
    VectorClass_flat *  QueryInterface(char a2);  // 0x6E4AB0
    unsigned int  PointerToIndex(int a2);  // 0x6E4820
    unsigned int  InitMap(int a2);  // 0x6E49B0

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    int q010;  // X10 supply (member_lookup)
    unsigned char __pad_011;  // 0x11 [X30:canon]
};
} // namespace gamemd
