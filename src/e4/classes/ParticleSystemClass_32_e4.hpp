// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ParticleSystemClass_32 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned int *m_1;
    unsigned int m_10;
    unsigned int m_8;
    unsigned int m_C;
    unsigned int *__pad_0;
// --- flat members (END) ---
    void ClearBuffer(void *a1 = 0);  // 0x4E82F0
    void Destroy(void *a1 = 0);  // 0x4E87E0
    int  Write(int a2);  // 0x4E8830
    void ReleaseBuffer(void *a1 = 0, void *a2 = 0);  // 0x4E8840
    char  SetCapacity(int a2, unsigned int * a3);  // 0x4E95E0
    int  FindItem(unsigned int * a2);  // 0x4E9690
    char  AddRef(int a2);  // 0x4EB4C0
    char  Release(int a2, unsigned int * a3);  // 0x4EB500
    void ddtor(void *a1 = 0);  // 0x4EB5B0
    int  Init(unsigned int * a2, void *a1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);  // 0x4EB5E0
    char  CopyParticles2(int a2, unsigned int * a3);  // 0x4EB640
    int  FindParticle2(unsigned int * a2);  // 0x4EB6F0
    DynamicVector *  Constructor_VectorClass_BuildingClass___(unsigned int * Block, char a2);  // 0x4EF5D0
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x4EFDF0
    DynamicVector *  Constructor_VectorClass_TerrainClass___(unsigned int * Block, char a2);  // 0x4EFE40
    DynamicVector *  Constructor_VectorClass_AircraftClass___(unsigned int * Block, char a2);  // 0x4EFEE0
    unsigned int  PointerToIndex(int a2);  // 0x4E8320
    unsigned int  GetIndex2(int a2);  // 0x4E8810
    unsigned int  Read(int a2, void *a1 = 0);  // 0x4EB620
};
} // namespace gamemd
