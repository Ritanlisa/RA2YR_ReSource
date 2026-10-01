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
    unsigned int *m_1;
    unsigned int m_8;
    unsigned int m_C;
    unsigned int *__pad_0;
// --- flat members (END) ---
struct VectorClass_flat;  // fix_fwd_type_supply
    int Write(int a2);  // 0x4E87D0
    char AddRef(int a2);  // 0x4EB260
    char Release(int a2, unsigned int * a3);  // 0x4EB2A0
    void ddtor(void *a1_1, void *a2_1);  // 0x4EB350
    int Init(unsigned int * a2, void *a2_2, void *a3_1, void *a4_1, void *a5_1, void *a6_1, void *a7_1, void *a8_1);  // 0x4EB380
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x4EFD50
    unsigned int Read(int a2, void *a2_2);  // 0x4EB3C0
};
} // namespace gamemd
