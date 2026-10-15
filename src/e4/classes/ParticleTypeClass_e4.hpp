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
    unsigned char alignmentPadding_3;  // 0x11
    bool IsAllocated;  // 0x13
    int Damage;  // 0x14
    int ImpactParticle;  // 0x16
    int StartScale;  // 0x18
    int ParticleTypeClass_field_2A4;  // 0x1C
    int StartStateAI;  // 0x20
    int StateAIAdvance;  // 0x28
    int ParticleTypeClass_field_2B4;  // 0x2C
    int Translucency;  // 0x30
    int ParticleTypeClass_field_2BC;  // 0x34
    int EndStateAI;  // 0x36
    int Velocity;  // 0x38
    int ParticleTypeClass_field_2C4;  // 0x3C
    unsigned int UINameLabel;  // 0x3D
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
    bool Flamer;  // 0x6C
    bool SpawnsFromOwnerCoords;  // 0x6D
    bool OneFrame;  // 0x6E
    unsigned int tail_95;  // 0x95
    unsigned char unused_9B;  // 0x9B
    char Armor[4];  // 0x9C
    int Strength;  // 0xA0
    void * AlphaImage;  // 0xAC
    unsigned int MainVoxel;  // 0xB0
    int MaxDimension;  // 0x1EC
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    char ImageFile_0x19;  // 0x1F8
    bool AlternateArcticArt;  // 0x1F9
    bool ArcticArtInUse;  // 0x1FA
    char AlphaImageFile_0x19;  // 0x1FB
    bool Theater;  // 0x1FC
    bool Crushable;  // 0x1FD
    bool Bombable;  // 0x1FE
    bool RadarInvisible;  // 0x1FF
    bool Selectable;  // 0x200
    bool LegalTarget;  // 0x201
    bool Insignificant;  // 0x202
    bool Immune;  // 0x203
    bool IsLogic;  // 0x204
    bool AllowCellContent;  // 0x205
    bool Voxel;  // 0x206
    bool NewTheater;  // 0x207
    bool HasRadialIndicator;  // 0x208
    bool IgnoresFirestorm;  // 0x209
    bool UseLineTrail;  // 0x20A
    char LineTrailColor[4];  // 0x20C
    unsigned int AlphaImageFile;  // 0x213
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches_4[4];  // 0x244
    IUnknown* XVelocity;  // 0x2A0 [X30:type_map]
    IUnknown* YVelocity;  // 0x2A4 [X30:type_map]
    void* MinZVelocity;  // 0x2A8 [X30:type_map]
    unsigned int ZVelocityRange;  // 0x2AC
    VectorClass* ColorList;  // 0x2C8
    unsigned int MaxDC_d;  // 0x2DC
    void* MaxEC_d;  // 0x2E0 [X30:type_map]
    void* Damage_d;  // 0x2E8 [X30:type_map]
    void* StartFrame;  // 0x2EC [X30:type_map]
    void* NumLoopFrames;  // 0x2F0 [X30:type_map]
    bool Translucency_d;  // 0x2F4
    bool Gas;  // 0x2F5
    bool Spark;  // 0x2F6
    bool Railgun;  // 0x2F7
    bool WindEffect_d;  // 0x2F8
    bool Smoke;  // 0x2F9
    bool SpawnFrames;  // 0x2FA
    bool UpdateUI;  // 0x2FB
    bool ParticleTypeClass_field_bool_301;  // 0x301
    bool Translucent;  // 0x302
    bool ShowShadow;  // 0x303
    int Deacc;  // 0x304
    bool StateAIAdvanceFudgeCalc;  // 0x305
    unsigned char padding_306_2;  // 0x306
    unsigned int DeleteOnStateLimit_d;  // 0x308
    char EndStateAI_d;  // 0x309
    unsigned int StartStateAI_d;  // 0x30A
    char StateAIAdvance_d;  // 0x30B
    ObjectClass* FinalDamageState;  // 0x30C
    unsigned int Translucent25State;  // 0x30D
    unsigned char Translucent50State;  // 0x30E
    unsigned char Normalized;  // 0x30F
// --- flat members (END) ---
    void* ParticleTypeClass_field_0x2B8;  // 0x2B8 (G57W14E1 til supply) [X30:type_map]
    CampaignClass* ParticleTypeClass_field_0x2BC;  // 0x2BC (G57W14E1 til supply) [X30:type_map]
    char __pad_2C0[8];  // 0x2C0 (G57W14E1 til supply)
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
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_10;  // 0x10 (offset-truth)
void* m_8;  // 0x8 [X35-L7 kind=void*]
    unsigned int m_C;  // 0xC (offset-truth)
    void ParticleTypeClass_LoadFromINI(uint8_t *** aP1);  // plateau: def-aligned C2039/C2660

    VectorClass* ParticleTypeClass_field_0x2C8;  // X10 supply (member_types)
    VectorClass* ParticleTypeClass_field_0x2CC;  // X10 supply (member_types)
    unsigned char __pad_2B0;  // X10 supply (csp_canon_members)
    unsigned char __pad_2D0;  // X10 supply (member_types)
    unsigned char __pad_2E4;  // X10 supply (csp_canon_members)
    unsigned char q294;  // X10 supply (member_lookup)
    IUnknown* q298;  // X10 supply (member_lookup)
    unsigned char q29C;  // X10 supply (member_lookup)
    int q2B4;  // X10 supply (member_lookup)
    int q2D4;  // X10 supply (member_lookup)
    int q300;  // X10 supply (member_lookup)
    int q310;  // X10 supply (member_lookup)
    int q314;  // X10 supply (member_lookup)
    unsigned char u32_2FC[4];  /* char[4] */  // X10 supply (member_lookup)
    int u8_2D9;  // X10 supply (member_lookup)

    unsigned int u32_1570;  // X10 supply (member_lookup)
    unsigned int u32_EF0;  // X10 supply (member_lookup)
    unsigned char __pad_010;  // 0x10 [X30:canon]
    unsigned char __pad_024;  // 0x24 [X30:canon]
    unsigned char __pad_072;  // 0x72 [X30:canon]
    unsigned char __pad_099;  // 0x99 [X30:canon]
    unsigned char __pad_0A4;  // 0xA4 [X30:canon]
    unsigned char __pad_0B4;  // 0xB4 [X30:canon]
    unsigned char __pad_210;  // 0x210 [X30:canon]
    unsigned char __pad_217;  // 0x217 [X30:canon]
    unsigned char __pad_248;  // 0x248 [X30:canon]
    void* __pad_2CC;  // 0x2CC [X30:type_map]
    unsigned char __pad_2FF;  // 0x2FF [X30:canon]
    unsigned char __pad_311;  // 0x311 [X30:canon]
    unsigned int BarrelVoxel;  // [X30:default]
    unsigned int ParticleTypeClass_2B8;  // [X30:default]
    int ParticleTypeClass_field_0x314;  // 0x314 [X30:type_map]
    unsigned int uniqueId;  // [X30:default]
};

} // namespace gamemd
