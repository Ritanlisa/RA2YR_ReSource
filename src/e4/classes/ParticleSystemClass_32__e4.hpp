// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ParticleSystemClass_32_ {
    unsigned int __pad_0;  // 0x0
    int q004;  // 0x4
    int Capacity;  // 0x8
    unsigned int m_C;  // 0xC
    unsigned int q010;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char  ResizeDataArray(int a2, unsigned int * a3);  // 0x4EB8A0
    int  FindElementByValue(unsigned int * a2);  // 0x4EB950
    unsigned int  GetElementIndex(int a2);  // 0x4E8870
};
} // namespace gamemd
