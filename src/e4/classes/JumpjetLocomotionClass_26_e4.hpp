// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct JumpjetLocomotionClass_26 {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int  FindItem(unsigned int * a2);  // 0x54EB20
    void ClearBuffer(void *a1_1);  // 0x54E890
    char  AddRef(int a2);  // 0x54E8F0
    char  Release(int a2, unsigned int * a3);  // 0x54E930
    wchar_t * ddtor(void *a1 = 0);  // 0x54E9E0
    char  SetCapacity(int a2, unsigned int * a3);  // 0x54EA70
    VectorClass_flat *  QueryInterface(char a2);  // 0x54EB50
    DynamicVector *  Constructor_VectorClass_KamikazeControl___(char a2);  // 0x54EBA0
    unsigned int  PointerToIndex(int a2);  // 0x54E8C0
    int  Seek(int a2, void *a2_2 = 0, void *a3_1 = 0);  // 0x54E8E0
    int Read(unsigned int * a2, void *a2_2, void *a3 = 0);  // 0x54EA10
    unsigned int  Write(int a2);  // 0x54EA50
};
} // namespace gamemd
