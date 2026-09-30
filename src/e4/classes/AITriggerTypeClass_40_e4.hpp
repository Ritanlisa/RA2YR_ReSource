// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AITriggerTypeClass_40 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned int __pad_0;
// --- flat members (END) ---
    void ClearBuffer();  // 0x420370
    int Seek(int a2);  // 0x4203C0
    char AddRef(int a2);  // 0x4203D0
    char Release(int a2, unsigned int * a3);  // 0x420410
    void ddtor(unsigned int * Block, char a2);  // 0x4204C0
    int Read(unsigned int * a2);  // 0x4204F0
    char SetCapacity(int a2, unsigned int * a3);  // 0x420550
    int FindItem(unsigned int * a2);  // 0x420600
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x420630
    DynamicVector * Constructor_VectorClass_AlphaLightingRemapClass___(char a2);  // 0x420680
    unsigned int PointerToIndex(int a2);  // 0x4203A0
    unsigned int Write(int a2);  // 0x420530
};
} // namespace gamemd
