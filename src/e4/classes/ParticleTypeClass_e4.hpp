// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct OverlayTypeClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct SomeVoxelCache;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct Color;  // fix_fwd_type_supply
struct TypeList_flat;  // fix_fwd_type_supply

struct ParticleTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* q010;  // 0x10
    bool IsAllocated;  // 0x13
    int Damage;  // 0x14
    unsigned char q015;  // 0x15
    int StartScale;  // 0x18
    int q024;  // 0x24
    bool q02B;  // 0x2B
    int Translucency;  // 0x30
    unsigned char q031;  // 0x31
    unsigned char q03A;  // 0x3A
    unsigned int UINameLabel;  // 0x3D
    int Elasticity;  // 0x4C
    bool Flamer;  // 0x6C
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    int q080;  // 0x80
    unsigned char q08A;  // 0x8A
    void* q08C;  // 0x8C
    unsigned char q090;  // 0x90
    void* q098;  // 0x98
    char Armor[4];  // 0x9C
    int Strength;  // 0xA0
    unsigned int q0A4;  // 0xA4
    void * AlphaImage;  // 0xAC
    unsigned int MainVoxel;  // 0xB0
    unsigned char q0B4;  // 0xB4
    unsigned char q0BD;  // 0xBD
    void* q0C4;  // 0xC4
    unsigned char q0D0;  // 0xD0
    void* q0D8;  // 0xD8
    void* q0E0;  // 0xE0
    ObjectClass* q0E4;  // 0xE4
    unsigned char q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    OverlayTypeClass* q0F8;  // 0xF8
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q10C;  // 0x10C
    unsigned int q114;  // 0x114
    unsigned int q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q138;  // 0x138
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    void* q158;  // 0x158
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    bool AlternateArcticArt;  // 0x1F9
    bool Theater;  // 0x1FC
    bool Crushable;  // 0x1FD
    bool Bombable;  // 0x1FE
    bool RadarInvisible;  // 0x1FF
    bool Selectable;  // 0x200
    bool LegalTarget;  // 0x201
    bool Insignificant;  // 0x202
    bool Immune;  // 0x203
    bool Voxel;  // 0x206
    bool NewTheater;  // 0x207
    bool HasRadialIndicator;  // 0x208
    bool IgnoresFirestorm;  // 0x209
    bool UseLineTrail;  // 0x20A
    char LineTrailColor[4];  // 0x20C
    unsigned int AlphaImageFile;  // 0x213
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches_4[4];  // 0x244
    unsigned char q258;  // 0x258
    char q264[4];  // 0x264
    SomeVoxelCache* q26C;  // 0x26C
    unsigned int q280;  // 0x280
    void* q2A0;  // 0x2A0
    void* q2B4;  // 0x2B4
    void* q2E4;  // 0x2E4
    unsigned int ParticleTypeClass_field_0x2B4;  // 0x2B4
    bool q300;  // 0x300
    bool Translucent;  // 0x302
    Color * q308;  // 0x308
    unsigned int ArrayIndex;
    unsigned int BehavesLike;
    unsigned int ParticleTypeClass_field_0xC;
    unsigned int ParticleTypeClass_field_28C;
    unsigned int *m_1;
    unsigned int m_10;
    unsigned int m_8;
    unsigned int m_C;
    unsigned int ParticleTypeClass_LoadFromINI;
    unsigned char ParticleTypeClass_field_0x2B0;  // 0x2B0
    unsigned char *ParticleTypeClass_field_0x2DC;  // 0x2DC
    unsigned char *ParticleTypeClass_field_0x2E0;  // 0x2E0
    unsigned char *ParticleTypeClass_field_0x2E8;  // 0x2E8
    unsigned char *ParticleTypeClass_field_0x2EC;  // 0x2EC
    unsigned char *ParticleTypeClass_field_0x2F0;  // 0x2F0
    unsigned char ParticleTypeClass_field_0x2F4;  // 0x2F4
    unsigned char ParticleTypeClass_field_0x2F8;  // 0x2F8
    unsigned char __pad_2FC;  // 0x2FC
    unsigned char ParticleTypeClass_field_0x300;  // 0x300
    unsigned char ParticleTypeClass_field_0x304;  // 0x304
    unsigned char *__pad_308;  // 0x308
    unsigned char ParticleTypeClass_field_0x310;  // 0x310
    unsigned char ParticleTypeClass_field_0x314;  // 0x314
// --- flat members (END) ---
    AbstractClass * * Release(int a2, char * a3);
    ParticleTypeClass * ddtor(char a2, int a3, int a4, int a5, int a6, int a7, int a8, int aP0, int aP1, int aP2, int a1);
    TypeList_flat * QueryInterface(char a2, int a3, int a4, int a5, int a6, int a7, int a8, int aP0, int aP1, int aP2, int a1);
    char Stub(int a1, int a2);
    int GetObjectSize();
    int GetType(int a2, int a3);
    int GetTypeIdentifier();
    int Init(unsigned char * aP1);
    int ProcessPower(int *a2);
    int SaveLoad_Prefix(int a1, int a2);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int aP1, int aP2);
    int StubReturnFalse(int a1);
    unsigned int * Constructor(int a2, int a3, void *a3_2);
    _DWORD * EnsureCapacity(unsigned int * a2, void *a2_2);
    unsigned int LoadTypeData(int a2);
    void GetClassIdentifier();
    int GetFoundationHeight(char a2);
};

} // namespace gamemd
