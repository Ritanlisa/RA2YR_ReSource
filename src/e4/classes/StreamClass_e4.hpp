// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct StreamClass {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* m_Data;  // 0x4
    unsigned int u32_8;  // 0x8
    int m_Size;  // 0xC
    char StreamClass_field_0C[4];  // 0x10
    unsigned int *__pad_0;
    unsigned int q014;
    unsigned int u32_14;
    unsigned int u32_1C;
    void* m_Position;  // 0x0 (no offset truth)
// --- flat members (END) ---
    BOOL IsInactive(void * aP0);
    static char GetDirty(int a1);
    int ClearDirty(unsigned char * a1);
    static int ResetPosition(LocomotionClass * aP0, int a2);
    int Set(unsigned int *aP1);
    int Set2(unsigned int * a2);
    int SetDirty(unsigned char * a1);
    int Vt32Thunk(int a1);
    int WriteBytes(unsigned short a2, char a3, int a4, int a5, int a6);
    unsigned int ReadAndSeek(int aP1, int aP2);
    BOOL IsInactive(IUnknown * aP0);
    // --- W16G3 supply (BEGIN) ---
    char u32_5[4];  // @0x4114c9 decay (W16G3 raw-usage vocab)
    unsigned int u32_7;  // @0x4b4cxx (W16G3 raw-usage vocab)
    // --- W16G3 supply (END) ---

};

} // namespace gamemd
