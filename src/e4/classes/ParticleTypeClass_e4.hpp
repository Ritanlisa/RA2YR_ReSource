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
#pragma pack(push, 1)  // X60: binary-packed layout
    void * ArrayIndex;  // 0x0
    void * q28C;  // 0x4
    void * BehavesLike;  // 0x8
    unsigned int ParticleTypeClass_field_0xC;  // 0xC
    char __pad_010[1];  // 0x10
    unsigned short alignmentPadding_3;  // 0x11
    unsigned char IsAllocated;  // 0x13
    int Damage;  // 0x14
    int StartScale;  // 0x18
    int ParticleTypeClass_field_2A4;  // 0x1C
    int StartStateAI;  // 0x20
    unsigned int __pad_024;  // 0x24
    int StateAIAdvance;  // 0x28
    int ParticleTypeClass_field_2B4;  // 0x2C
    int Translucency;  // 0x30
    int ParticleTypeClass_field_2BC;  // 0x34
    int Velocity;  // 0x38
    int ParticleTypeClass_field_2C4;  // 0x3C
    int DeleteOnStateLimit;  // 0x40
    int ParticleTypeClass_field_2CC;  // 0x44
    int WindEffect;  // 0x48
    int Elasticity;  // 0x4C
    int MaxDC;  // 0x50
    int MaxEC;  // 0x54
    int ParticleTypeClass_field_2E0;  // 0x58
    int ParticleTypeClass_field_2E4;  // 0x5C
    unsigned int VelocityRandom;  // 0x60
    unsigned int Regenerate;  // 0x64
    unsigned int SpiralDeltaPerStep;  // 0x68
    int Flamer;  // 0x6C
    char __pad_70[2];  // 0x70
    unsigned char __pad_072;  // 0x72
    char __pad_73[34];  // 0x73
    unsigned char tail_95;  // 0x95
    char __pad_96[3];  // 0x96
    unsigned char __pad_099;  // 0x99
    char __pad_9A[1];  // 0x9A
    unsigned char unused_9B;  // 0x9B
    char Armor[4];  // 0x9C
    int Strength;  // 0xA0
    unsigned char __pad_0A4;  // 0xA4
    char __pad_A5[7];  // 0xA5
    void * AlphaImage;  // 0xAC
    unsigned int MainVoxel;  // 0xB0
    unsigned char __pad_0B4;  // 0xB4
    char __pad_B5[3];  // 0xB5
    char BarrelVoxel[24];  // 0xB8
    char __pad_D0[281];  // 0xD0
    char align_1E9_3_[4];  // 0x1E9
    char __pad_1ED[3];  // 0x1ED
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    unsigned int ImageFile_0x19;  // 0x1F8
    int Theater;  // 0x1FC
    int Selectable;  // 0x200
    int IsLogic;  // 0x204
    int HasRadialIndicator;  // 0x208
    char LineTrailColor[4];  // 0x20C
    unsigned char __pad_210;  // 0x210
    char __pad_211[2];  // 0x211
    unsigned char AlphaImageFile;  // 0x213
    char __pad_214[3];  // 0x214
    unsigned char __pad_217;  // 0x217
    char __pad_218[38];  // 0x218
    char align_23E_2_[4];  // 0x23E
    char __pad_242[2];  // 0x242
    char VoxelCaches_4[4];  // 0x244
    unsigned char __pad_248;  // 0x248
    char __pad_249[75];  // 0x249
    unsigned char q294;  // 0x294
    char __pad_295[3];  // 0x295
    IUnknown * q298;  // 0x298
    unsigned char q29C;  // 0x29C
    char __pad_29D[3];  // 0x29D
    IUnknown * XVelocity;  // 0x2A0
    IUnknown * YVelocity;  // 0x2A4
    void * MinZVelocity;  // 0x2A8
    unsigned int ZVelocityRange;  // 0x2AC
    unsigned int __pad_2B0;  // 0x2B0
    unsigned int ParticleTypeClass_field_0x2B4;  // 0x2B4
    void * q2B8;  // 0x2B8
    CampaignClass * ParticleTypeClass_field_0x2BC;  // 0x2BC
    char __pad_2C0[5];  // 0x2C0
    unsigned char u8_2C5;  // 0x2C5
    char __pad_2C6[2];  // 0x2C6
    int ColorList;  // 0x2C8
    VectorClass * ParticleTypeClass_field_0x2CC;  // 0x2CC
    unsigned char __pad_2D0;  // 0x2D0
    char __pad_2D1[3];  // 0x2D1
    unsigned int q2D4;  // 0x2D4
    char __pad_2D8[1];  // 0x2D8
    unsigned char u8_2D9;  // 0x2D9
    char __pad_2DA[2];  // 0x2DA
    unsigned int MaxDC_d;  // 0x2DC
    void * MaxEC_d;  // 0x2E0
    unsigned int ParticleTypeClass_field_0x2E4;  // 0x2E4
    void * Damage_d;  // 0x2E8
    void * StartFrame;  // 0x2EC
    void * NumLoopFrames;  // 0x2F0
    unsigned int Translucency_d;  // 0x2F4
    unsigned int WindEffect_d;  // 0x2F8
    unsigned char u32_2FC[4];  // 0x2FC
    unsigned char q300;  // 0x300
    bool ParticleTypeClass_field_bool_301;  // 0x301
    bool Translucent;  // 0x302
    bool ShowShadow;  // 0x303
    int Deacc;  // 0x304
    unsigned char DeleteOnStateLimit_d;  // 0x308
    unsigned char EndStateAI_d;  // 0x309
    unsigned char StartStateAI_d;  // 0x30A
    unsigned char StateAIAdvance_d;  // 0x30B
    unsigned char FinalDamageState;  // 0x30C
    unsigned char Translucent25State;  // 0x30D
    unsigned char Translucent50State;  // 0x30E
    unsigned char Normalized;  // 0x30F
    int q310;  // 0x310
    int q314;  // 0x314
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * Release(int a2, char * a3);
    ParticleTypeClass * ddtor(char a2, int a3, int a4, int a5, int a6, int a7, int a8, int aP0, int aP1, int aP2, int a1);
    TypeList_flat * QueryInterface(char a2, int a3, int a4, int a5, int a6, int a7, int a8, int aP0, int aP1, int aP2, int a1);
    char Stub(int a1, int a2);
    int GetObjectSize();
    int GetType(int a2, int a3);
    int GetTypeIdentifier();
    int Init(unsigned char * a2, void *a2_1 = 0);
    int ProcessPower(int *a2, void *a2_1 = 0);
    int SaveLoad_Prefix(int a1, int a2);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int aP1, int aP2);
    int StubReturnFalse(int a1);
    unsigned int * Constructor(int a2, int a3, void *a3_2, void *a4 = 0);
    unsigned int * EnsureCapacity(unsigned int * a2, void *a2_2);
    unsigned int LoadTypeData(int a2);
    void GetClassIdentifier();
    int GetFoundationHeight(char a2);
    void ParticleTypeClass_LoadFromINI(uint8_t *** aP1);  // plateau: def-aligned C2039/C2660
#pragma pack(pop)
};

} // namespace gamemd
