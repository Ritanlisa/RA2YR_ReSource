// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct SwizzleManagerClass_19 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    int  Release(int a2, unsigned int * a3);  // 0x6CF5A0
    AbstractClass * *  SetCapacity(int a2, unsigned int * a3);  // 0x6CF720
    void ClearBuffer(void *a1_1);  // 0x6CF4F0
    unsigned int *  Lookup(unsigned int * a2, int a3);  // 0x6CF540
    char  AddRef(int a2);  // 0x6CF560
    void ddtor(void *a1 = 0);  // 0x6CF690
    int  Init(unsigned int * a2, void *a1 = 0, void *a3_1 = 0, void *a4_1 = 0, void *a5_1 = 0, void *a6_1 = 0, void *a7_1 = 0, void *a8_1 = 0);  // 0x6CF6C0
    int  FindItem(unsigned int * a2);  // 0x6CF820
    VectorClass_flat *  QueryInterface(char a2);  // 0x6CF850
    DynamicVector *  Constructor_VectorClass_SwizzlePointerClass_(char a2);  // 0x6CF8A0
    unsigned int  PointerToIndex(int a2);  // 0x6CF520
    unsigned int Add(int a2, void *a2_2, void *a3_1);  // 0x6CF700
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_10;  // 0x10 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
};
} // namespace gamemd
