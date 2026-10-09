// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct SwizzleManagerClass_19 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    unsigned int q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
// --- flat members (END) ---
    int Release(int a2, unsigned int * a3);  // 0x6CF5A0
    AbstractClass * * SetCapacity(int a2, unsigned int * a3);  // 0x6CF720
    void ClearBuffer(void *a1_1);  // 0x6CF4F0
    unsigned int * Lookup(unsigned int * a2, int a3);  // 0x6CF540
    char AddRef(int a2);  // 0x6CF560
    void ddtor();  // 0x6CF690
    int Init(unsigned int * a2, void *a2_2, void *a3_1, void *a4_1, void *a5_1, void *a6_1, void *a7_1, void *a8_1);  // 0x6CF6C0
    int FindItem(unsigned int * a2);  // 0x6CF820
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x6CF850
    DynamicVector * Constructor_VectorClass_SwizzlePointerClass_(unsigned int * Block, char a2);  // 0x6CF8A0
    unsigned int PointerToIndex(int a2);  // 0x6CF520
    unsigned int Add(int a2, void *a2_2, void *a3_1);  // 0x6CF700
    unsigned char m_1;  // 0x1 (offset-truth supply)
    unsigned int m_10;  // 0x10 (offset-truth supply)
    unsigned int m_8;  // 0x8 (offset-truth supply)
    unsigned int m_C;  // 0xC (offset-truth supply)
};
} // namespace gamemd
