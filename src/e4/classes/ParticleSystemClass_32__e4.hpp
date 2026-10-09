// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ParticleSystemClass_32_ {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int Capacity;  // 0x8
    void* q00C;  // 0xC
    bool IsAllocated;  // 0xD
    void* q010;  // 0x10
    bool IsInitialized;  // 0x12
// --- flat members (END) ---
    char ResizeDataArray(int a2, unsigned int * a3);  // 0x4EB8A0
    int FindElementByValue(unsigned int * a2);  // 0x4EB950
    unsigned int GetElementIndex(int a2);  // 0x4E8870
    unsigned char m_1;  // 0x1 (offset-truth supply)
    unsigned int m_C;  // 0xC (offset-truth supply)
};
} // namespace gamemd
