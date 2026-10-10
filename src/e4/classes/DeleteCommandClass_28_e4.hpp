// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct DeleteCommandClass_28 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
// --- flat members (END) ---
    void ClearBuffer(void *a1_1);  // 0x53C4C0
    int  Seek(int a2);  // 0x53C510
    char  AddRef(int a2);  // 0x53C520
    char  Release(int a2, unsigned int * a3);  // 0x53C560
    void ddtor(void *a1 = 0);  // 0x53C610
    int  Read(unsigned int * a2, void *a1 = 0, void *a3 = 0);  // 0x53C640
    char  SetCapacity(int a2, unsigned int * a3);  // 0x53C6A0
    int  FindItem(unsigned int * a2);  // 0x53C750
    VectorClass_flat *  QueryInterface(char a2);  // 0x53C780
    int  Constructor(char a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x53C7D0
    unsigned int  PointerToIndex(int a2);  // 0x53C4F0
    unsigned int  Write(int a2);  // 0x53C680
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_10;  // 0x10 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
    static double __pad_0(...);  // plateau: C2039/C3861 stub
    static double q004(...);  // plateau: C2039/C3861 stub
    static double q008(...);  // plateau: C2039/C3861 stub
    static double q00C(...);  // plateau: C2039/C3861 stub
    static double q010(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
