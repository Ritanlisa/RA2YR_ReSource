// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct ParticleSystemClass_32 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
// --- flat members (END) ---
    void ClearBuffer(void *a1_1);  // 0x4E82F0
    void Destroy(void *a1 = 0);  // 0x4E87E0
    int  Write(int a2);  // 0x4E8830
    void ReleaseBuffer(void *a1_1, void *a2_1);  // 0x4E8840
    char  SetCapacity(int a2, unsigned int * a3);  // 0x4E95E0
    int  FindItem(unsigned int * a2);  // 0x4E9690
    char  AddRef(int a2);  // 0x4EB4C0
    char  Release(int a2, unsigned int * a3);  // 0x4EB500
    void ddtor(void *a1 = 0);  // 0x4EB5B0
    int  Init(unsigned int * a2, void *a1 = 0, void *a3_1 = 0, void *a4_1 = 0, void *a5_1 = 0, void *a6_1 = 0, void *a7_1 = 0, void *a8_1 = 0);  // 0x4EB5E0
    char  CopyParticles2(int a2, unsigned int * a3);  // 0x4EB640
    int  FindParticle2(unsigned int * a2);  // 0x4EB6F0
    DynamicVector *  Constructor_VectorClass_BuildingClass___(char a2);  // 0x4EF5D0
    VectorClass_flat *  QueryInterface(char a2);  // 0x4EFDF0
    DynamicVector *  Constructor_VectorClass_TerrainClass___(char a2);  // 0x4EFE40
    DynamicVector *  Constructor_VectorClass_AircraftClass___(char a2);  // 0x4EFEE0
    unsigned int  PointerToIndex(int a2);  // 0x4E8320
    unsigned int  GetIndex2(int a2);  // 0x4E8810
    unsigned int Read(int a2, void *a2_2, void *a3 = 0);  // 0x4EB620
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_10;  // 0x10 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
};
} // namespace gamemd
