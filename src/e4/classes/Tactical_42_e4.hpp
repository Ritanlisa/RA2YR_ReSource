// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct Tactical_42 {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
// --- flat members (BEGIN) ---
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
};
} // namespace gamemd
