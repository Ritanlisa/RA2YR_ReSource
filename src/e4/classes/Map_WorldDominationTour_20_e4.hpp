// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Map_WorldDominationTour_20 {
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
    char Release(int a2, unsigned int * a3);  // 0x769E30
    rc_ptr_base * Constructor_0(char a2);  // 0x76A610
    VectorCursor * Constructor(char a2);  // 0x769DC0
    char AddRef(int a2);  // 0x769DE0
    int ddtor();  // 0x769F50
    int Read(int a2);  // 0x769F80
    VectorClass_flat * QueryInterface(char a2);  // 0x76A5C0
    unsigned int * Seek(unsigned int * a2, int a3);  // 0x769CA0
    unsigned int Write(int a2);  // 0x769FC0
};
} // namespace gamemd
