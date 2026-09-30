// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignProperties_WorldDominationTour_22 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    unsigned int q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int __pad_0;
    unsigned int m_1;
    unsigned int m_8;
    unsigned int m_C;
// --- flat members (END) ---
    int  Seek(int a2);  // 0x5D2770
    int  Read(unsigned int * a2);  // 0x5D2900
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x5D2CA0
    // dup-decl removed: BOOL AddRef();  // 0x76F0F0
    unsigned int * Release();  // 0x76F1A0
    unsigned int * ddtor();  // 0x76F1B0
    unsigned int  Write(int a2);  // 0x5D2940
    int AddRef();  // def-aligned
};
} // namespace gamemd
