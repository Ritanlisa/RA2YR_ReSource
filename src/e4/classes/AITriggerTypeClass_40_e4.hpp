// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct AITriggerTypeClass_40 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned int *__pad_0;
// --- flat members (END) ---
    void ClearBuffer(void *a1_1);  // 0x420370
    wchar_t * Seek(int a2, void *a2_2, void *a3_1);  // 0x4203C0
    char AddRef(int a2);  // 0x4203D0
    char Release(int a2, unsigned int * a3);  // 0x420410
    wchar_t * ddtor();  // 0x4204C0
    int Read(unsigned int * a2, void *a2_2);  // 0x4204F0
    char SetCapacity(int a2, unsigned int * a3);  // 0x420550
    int FindItem(unsigned int * a2);  // 0x420600
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x420630
    DynamicVector * Constructor_VectorClass_AlphaLightingRemapClass___(unsigned int * Block, char a2);  // 0x420680
    unsigned int PointerToIndex(int a2);  // 0x4203A0
    unsigned int Write(int a2);  // 0x420530
    unsigned int *m_1;  // supplied (C2039)
    unsigned int *m_10;  // supplied (C2039)
    unsigned int *m_8;  // supplied (C2039)
    unsigned int *m_C;  // supplied (C2039)
};
} // namespace gamemd
