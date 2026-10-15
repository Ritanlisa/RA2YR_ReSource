// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct JumpjetLocomotionClass_26 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
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

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    int q010;  // X10 supply (member_lookup)
    unsigned char __pad_011;  // 0x11 [X30:canon]
};
} // namespace gamemd
