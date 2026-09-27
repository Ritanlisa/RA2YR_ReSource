// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ConnectionPointClass_9 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    void* pad_008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
    bool q018;  // 0x18
    unsigned char q01C;  // 0x1C
    bool q024;  // 0x24
    unsigned int q0042;
    unsigned int q008;
// --- flat members (END) ---
    char Release(int a2,  unsigned int * a3);    // 0x4A1280
    int EnumConnections(int a2);  // 0x4A0F70
    char AddRef(int a2);  // 0x4A1240
    int Advise(unsigned int * a2);  // 0x4A1360
    VectorClass_flat * QueryInterface(char a2);  // 0x4A14F0
    unsigned int Unadvise(int a2);  // 0x4A13A0
};
} // namespace gamemd
