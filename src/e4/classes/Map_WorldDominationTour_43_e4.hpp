// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Map_WorldDominationTour_43 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    unsigned int q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int q024;  // 0x24
// --- flat members (END) ---
    char Release(int a2, char * a3);  // 0x76A3F0
    char AddRef(int a2);  // 0x76A390
    void ddtor();  // 0x76A4F0
    VectorClass_flat * QueryInterface(char a2);  // 0x76A770
    unsigned int * Seek(unsigned int * a2, int a3);  // 0x769D30
    int Read(unsigned int * a2);  // 0x76A520
    unsigned int Write(int a2);  // 0x76A570
};
} // namespace gamemd
