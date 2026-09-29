// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct StreamClass {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* m_Data;  // 0x4
    unsigned int u32_8;  // 0x8
    char m_Size[4];  // 0xC
    char StreamClass_field_0C[4];  // 0x10
    unsigned int __pad_0;
    unsigned int q014;
    unsigned int u32_14;
    unsigned int u32_1C;
// --- flat members (END) ---
    BOOL IsInactive(IUnknown * aP0);
    char GetDirty(int a1);
    int ClearDirty(unsigned char * a1);
    int ResetPosition(LocomotionClass * aP0, int a2);
    int Set(IUnknown * aP1, void *a2 = 0, void *a1 = 0);
    int Set2(unsigned int * a2);
    int SetDirty(unsigned char * a1);
    int Vt32Thunk(int a1);
    int WriteBytes(unsigned short a2, char a3, int a4, int a5, int a6);
    unsigned int ReadAndSeek(MouseClass * aP1, MouseClass * aP2);
};

} // namespace gamemd
