// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct StreamClass {
// --- flat members (BEGIN) ---
    void* m_Data;  // 0x4
    char m_Size[4];  // 0xC
    char StreamClass_field_0C[4];  // 0x10
// --- flat members (END) ---
    void* m_Position;  // 0x0 (no offset truth)
    char GetDirty(int a1);
    int ClearDirty(unsigned char * a1);
    static int ResetPosition(LocomotionClass * aP0, int a2);
    int Set(unsigned int *aP1, void *a2 = 0, void *a3 = 0);
    int Set2(unsigned int * a2, void *a2_1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0);
    int SetDirty(unsigned char * a1);
    int Vt32Thunk(int a1);
    int WriteBytes(unsigned short a2, char a3, int a4, int a5, int a6);
    unsigned int ReadAndSeek(int aP1, int aP2, void *a3 = 0);
    BOOL IsInactive(IUnknown * aP0);
    char u32_5[4];  // @0x4114c9 decay (W16G3 raw-usage vocab)

    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_1C;  // X10 supply (member_lookup)
    unsigned char __pad_000;  // 0x0 [X30:canon]
    unsigned char __pad_008;  // 0x8 [X30:canon]
    char __pad_0[4];  // 0x0 [X30:member_lookup]
};

} // namespace gamemd
