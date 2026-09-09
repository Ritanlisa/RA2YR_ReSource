// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct ParticleSystemClass_32 {
    void* vfptr;  // minimal E2 declaration
    void ClearBuffer();  // 0x4E82F0
    unsigned int PointerToIndex(int a2);  // 0x4E8320
    void Destroy();  // 0x4E87E0
    unsigned int GetIndex2(int a2);  // 0x4E8810
    int Write(int a2);  // 0x4E8830
    void ReleaseBuffer();  // 0x4E8840
    char SetCapacity(int a2, unsigned int * a3);  // 0x4E95E0
    int FindItem(unsigned int * a2);  // 0x4E9690
    char AddRef(int a2);  // 0x4EB4C0
    char Release(int a2, unsigned int * a3);  // 0x4EB500
    void ddtor();  // 0x4EB5B0
    int Init(unsigned int * a2);  // 0x4EB5E0
    unsigned int Read(int a2);  // 0x4EB620
    char CopyParticles2(int a2, unsigned int * a3);  // 0x4EB640
    int FindParticle2(unsigned int * a2);  // 0x4EB6F0
    DynamicVector * Constructor_VectorClass_BuildingClass___(unsigned int * Block, char a2);  // 0x4EF5D0
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x4EFDF0
    DynamicVector * Constructor_VectorClass_TerrainClass___(unsigned int * Block, char a2);  // 0x4EFE40
    DynamicVector * Constructor_VectorClass_AircraftClass___(unsigned int * Block, char a2);  // 0x4EFEE0
};
} // namespace gamemd
