// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ParticleSystemClass_16 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
    bool q018;  // 0x18
    unsigned char q01C;  // 0x1C
    bool q024;  // 0x24
    unsigned int q0042;
// --- flat members (END) ---
    int Write(int a2);  // 0x4E87D0
    char AddRef(int a2);  // 0x4EB260
    char Release(int a2, unsigned int * a3);  // 0x4EB2A0
    void ddtor();  // 0x4EB350
    int Init(unsigned int * a2);  // 0x4EB380
    VectorClass_flat * QueryInterface(char a2);  // 0x4EFD50
    unsigned int Read(int a2);  // 0x4EB3C0
};
} // namespace gamemd
