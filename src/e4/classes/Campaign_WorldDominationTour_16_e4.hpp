// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Campaign_WorldDominationTour_16 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    unsigned int q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int q024;  // 0x24
    unsigned int Capacity;
    unsigned int IsInitialized;
    unsigned int Items;
    unsigned int q0042;
    unsigned int q0043;
// --- flat members (END) ---
    char Release(int a2, unsigned int * a3);  // 0x765840
    unsigned int * Seek(unsigned int * a2, int a3);  // 0x7656D0
    rc_ptr * Constructor(char a2);  // 0x765710
    rc_ptr * Constructor_0(char a2);  // 0x765740
    VectorCursor * Constructor_1(char a2);  // 0x765770
    char AddRef(int a2);  // 0x7657F0
    int ddtor();  // 0x765960
    int Read(int a2);  // 0x765990
    VectorClass_flat * QueryInterface(char a2);  // 0x765B60
    unsigned int Write(int a2);  // 0x7659D0
};
} // namespace gamemd
