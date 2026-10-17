// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct RocketLocomotionClass_17 {
    unsigned int __pad_0;  // 0x0
    int q004;  // 0x4
    unsigned int m_8;  // 0x8
    unsigned int m_C;  // 0xC
    int m_10;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    wchar_t * ddtor(void *a1 = 0);  // 0x6647B0
    int  UpdateMovement(int a2);  // 0x664800
    char  AddRef(int a2);  // 0x664810
    char  SetCapacity(int a2, unsigned int * a3);  // 0x664850
    int Destroy(void *a1_1);  // 0x664900
    int  IndexOf(unsigned int * a2);  // 0x664930
    char  Release(int a2, unsigned int * a3);  // 0x664990
    int  Launch(unsigned int * a2);  // 0x664A40
    unsigned int *  Constructor(char a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x664A70
    DynamicVector *  QueryInterface(char a2);  // 0x664AC0
    unsigned int  BeginMove(int a2);  // 0x6647E0
    unsigned int  PointerToIndex(int a2);  // 0x664970
};
} // namespace gamemd
