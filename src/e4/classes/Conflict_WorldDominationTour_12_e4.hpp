// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct rc_ptr;  // G42.32 fwd supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct Conflict_WorldDominationTour_12 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    int  Release(int a2, unsigned int * a3);  // 0x766C10
    AbstractClass * *  Constructor_1(int a2, unsigned int * a3);  // 0x766DC0
    unsigned int *  Seek(unsigned int * a2, int a3);  // 0x766850
    unsigned int *  Constructor(char a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x766960
    unsigned int *  Constructor_0(char a2);  // 0x766990
    char  AddRef(int a2);  // 0x766BC0
    int ddtor(void *a1 = 0);  // 0x766D30
    int  Read(int a2, void *a1 = 0, void *a3 = 0);  // 0x766D60
    int  IndexOf(int a2);  // 0x766F40
    VectorClass_flat *  QueryInterface(char a2);  // 0x766FC0
    DynamicVector *  Constructor_2(char a2);  // 0x767080
    unsigned int  PointerToIndex(int a2);  // 0x766830
    unsigned int  Write(int a2);  // 0x766DA0
    int Constructor_3(void *a1_1);  // 0x7670D0
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_10;  // 0x10 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned int u32_4;  // X10 supply (member_lookup)
};
} // namespace gamemd
