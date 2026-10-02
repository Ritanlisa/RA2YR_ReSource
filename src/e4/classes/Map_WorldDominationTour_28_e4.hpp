// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct Map_WorldDominationTour_28 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    char AddRef(int a2);  // 0x76A130
    char Release(int a2, unsigned int * a3);  // 0x76A170
    wchar_t * ddtor(void *a1_1);  // 0x76A220
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x76A6D0
    int Seek(int a2, void *a2_2, void *a3_1);  // 0x769D20
    int Read(unsigned int * a2, void *a2_2);  // 0x76A250
    unsigned int Write(int a2);  // 0x76A290
};
} // namespace gamemd
