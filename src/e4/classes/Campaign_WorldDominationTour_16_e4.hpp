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
    unsigned int __pad_0;
// --- flat members (END) ---
    char Release(int a2, unsigned int * a3);  // 0x765840
    unsigned int * Seek(unsigned int * a2, int a3);  // 0x7656D0
    void* Constructor(char a2, void *a1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0);  // 0x765710
    void* Constructor_0(char a2, void *a3 = 0, void *a1 = 0);  // 0x765740
    VectorCursor * Constructor_1(char a2);  // 0x765770
    char AddRef();  // 0x7657F0
    int ddtor();  // 0x765960
    int Read(int a2);  // 0x765990
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x765B60
    unsigned int Write(int a2);  // 0x7659D0
};
} // namespace gamemd
