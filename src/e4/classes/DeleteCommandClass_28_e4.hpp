// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct DeleteCommandClass_28 {
    unsigned int __pad_0;  // 0x0
    int q004;  // 0x4
    unsigned int m_8;  // 0x8
    unsigned int m_C;  // 0xC
    int m_10;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    void ClearBuffer(void *a1_1);  // 0x53C4C0
    int  Seek(int a2, void *a2_2 = 0, void *a3_1 = 0);  // 0x53C510
    char  AddRef(int a2);  // 0x53C520
    char  Release(int a2, unsigned int * a3);  // 0x53C560
    void ddtor(void *a1 = 0);  // 0x53C610
    int Read(unsigned int * a2, void *a2_2, void *a3 = 0);  // 0x53C640
    char  SetCapacity(int a2, unsigned int * a3);  // 0x53C6A0
    int  FindItem(unsigned int * a2);  // 0x53C750
    VectorClass_flat *  QueryInterface(char a2);  // 0x53C780
    int Constructor(unsigned int * Block, char a2, void *a3_1, void *a4 = 0);  // 0x53C7D0
    unsigned int  PointerToIndex(int a2);  // 0x53C4F0
    unsigned int  Write(int a2);  // 0x53C680
};
} // namespace gamemd
