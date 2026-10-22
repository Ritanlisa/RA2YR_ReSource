// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct StreamClass {
    char __pad_0[4];  // 0x0
    void * m_Data;  // 0x4
    unsigned int m_Position;  // 0x8
    char m_Size[4];  // 0xC
    int StreamClass_field_0C;  // 0x10
    unsigned int u32_14;  // 0x14
    char __pad_18[4];  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
// --- flat members (BEGIN) ---
// --- flat members (END) ---
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
};

} // namespace gamemd
