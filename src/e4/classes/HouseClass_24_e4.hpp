// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct HouseClass_24 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    int Seek(int a2, void *a1 = 0);  // 0x4F28A0
    char AddRef(int a2);  // 0x4F28E0
    char Release(int a2,  unsigned int * a3);    // 0x4F2920
    void ddtor(void *a1 = 0);  // 0x4F29D0
    int Read(unsigned int * a2, void *a1 = 0);  // 0x4F2A00
    VectorClass_flat * QueryInterface(char a2);  // 0x4F2B60
    unsigned int Write(int a2);  // 0x4F2A40
};
} // namespace gamemd
