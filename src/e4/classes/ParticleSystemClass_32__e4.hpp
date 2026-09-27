// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ParticleSystemClass_32_ {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int Capacity;  // 0x8
    void* pad_00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int q010;  // 0x10
    bool IsInitialized;  // 0x12
    int Count;  // 0x16
    bool q018;  // 0x18
    unsigned char q01C;  // 0x1C
    bool q024;  // 0x24
    unsigned char q028;  // 0x28
    int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    bool q054;  // 0x54
    unsigned int q0042;
    unsigned int q00C;
// --- flat members (END) ---
    char ResizeDataArray(int a2,  unsigned int * a3);    // 0x4EB8A0
    int FindElementByValue(unsigned int * a2);  // 0x4EB950
    unsigned int GetElementIndex(int a2);  // 0x4E8870
};
} // namespace gamemd
