// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct AITriggerTypeClass_40 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
// --- flat members (END) ---
    void ClearBuffer(void *a1_1);  // 0x420370
    wchar_t *  Seek(int a2);  // 0x4203C0
    char  AddRef(int a2);  // 0x4203D0
    char  Release(int a2, unsigned int * a3);  // 0x420410
    wchar_t * ddtor(void *a1 = 0);  // 0x4204C0
    int  Read(unsigned int * a2, void *a1 = 0, void *a3 = 0);  // 0x4204F0
    char  SetCapacity(int a2, unsigned int * a3);  // 0x420550
    int  FindItem(unsigned int * a2);  // 0x420600
    VectorClass_flat *  QueryInterface(char a2);  // 0x420630
    DynamicVector *  Constructor_VectorClass_AlphaLightingRemapClass___(char a2);  // 0x420680
    unsigned int  PointerToIndex(int a2);  // 0x4203A0
    unsigned int  Write(int a2);  // 0x420530
    unsigned int *m_1;  // supplied (C2039)
    unsigned int *m_10;  // supplied (C2039)
    unsigned int *m_8;  // supplied (C2039)
    unsigned int *m_C;  // supplied (C2039)
    static double q004(...);  // plateau: C2039/C3861 stub
    static double q00C(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
