// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct ParticleSystemClass_16 {
    unsigned int __pad_0;  // 0x0
    int q004;  // 0x4
    unsigned int m_8;  // 0x8
    unsigned int m_C;  // 0xC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int  Write(int a2);  // 0x4E87D0
    char  AddRef(int a2);  // 0x4EB260
    char  Release(int a2, unsigned int * a3);  // 0x4EB2A0
    void ddtor(void *a1 = 0);  // 0x4EB350
    int  Init(unsigned int * a2, void *a1 = 0, void *a3_1 = 0, void *a4_1 = 0, void *a5_1 = 0, void *a6_1 = 0, void *a7_1 = 0, void *a8_1 = 0);  // 0x4EB380
    VectorClass_flat *  QueryInterface(char a2);  // 0x4EFD50
    unsigned int Read(int a2, void *a2_2, void *a3 = 0);  // 0x4EB3C0
};
} // namespace gamemd
