// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SHPStruct;  // fix_fwd_type_supply
struct OverlayTypeClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct SomeVoxelCache;  // fix_fwd_type_supply
struct WarheadTypeClass;  // fix_fwd_type_supply
struct ScenarioClass;  // fix_fwd_type_supply

struct AnimTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned char uniqueId;  // 0x10
    unsigned char alignmentPadding_3;  // 0x11
    int MiddleFrameHeight;  // 0x12
    bool IsAllocated;  // 0x13
    double abstractFlags;  // 0x14
    SHPStruct* nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    int NeedsSaveOrLink;  // 0x20
int LoopStart;  // 0x24 [X35-L7 kind=int]
    int LoopEnd;  // 0x28
    int End;  // 0x2C
    int LoopCount;  // 0x30
    int Start;  // 0x32
    AnimTypeClass* Next;  // 0x34
    int SpawnsParticle;  // 0x38
    int zero_3C;  // 0x3C
    unsigned char UINameLabel;  // 0x3D
    int DetailLevel;  // 0x40
    int TranslucencyDetailLevel;  // 0x44
    char RandomLoopDelay[4];  // 0x48
    char RandomRate[4];  // 0x4C
    int Translucency;  // 0x50
    AnimTypeClass* Spawns;  // 0x54
    int SpawnCount;  // 0x58
    int Report;  // 0x5C
    int UIName;  // 0x60
    AnimTypeClass* Name;  // 0x64
    AnimTypeClass* ExpireAnim;  // 0x68
    AnimTypeClass* TrailerAnim;  // 0x6C
    int TrailerSeperation;  // 0x70
    double Elasticity;  // 0x74
    double MinZVel;  // 0x7C
    unsigned int tail_95;  // 0x95
    int StopSound;  // 0x96
    ObjectClass * ptr_98;  // 0x98
    unsigned char unused_9B;  // 0x9B
    unsigned int Armor;  // 0x9C
    int Strength;  // 0xA0
    AbstractClass* Image;  // 0xA4 [X30:type_map]
    char ImageAllocated;  // 0xA8
    void * AlphaImage;  // 0xAC
    unsigned int MainVoxel;  // 0xB0
    unsigned int TurretVoxel;  // 0xB4
    unsigned int BarrelVoxel;  // 0xB8
    unsigned char ChargerTurrets;  // 0xBC
    AnimTypeClass* BounceAnim;  // 0x100
    unsigned char ChargerBarrels;  // 0x104
    unsigned char NoSpawnAlt;  // 0x14C
    unsigned int u32_C0;  // 0xC0
    int MaxDimension;  // 0x1EC
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    char ImageFile;  // 0x1F8
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
    unsigned char AlternateArcticArt_d;  // 0x211
    unsigned char ArcticArtInUse_d;  // 0x212
    unsigned char AlphaImageFile;  // 0x213
    char Theater_d;  // 0x22C
    unsigned char Insignificant_d;  // 0x232
    unsigned char Voxel_d;  // 0x236
    bool NewTheater_d;  // 0x237
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches[80];  // 0x244
    int MiddleFrameIndex;  // 0x294
    int MiddleFrameWidth;  // 0x298
    AbstractTypeClass* MiddleFrameHeight_d;  // 0x29C [X30:type_map]
    unsigned char AnimTypeClass_field_2A4;  // 0x2A4
    double Damage;  // 0x2A8
    int Rate;  // 0x2B0
    int Damage_d;  // 0x2B4
    int LoopStart_d;  // 0x2B8
    int LoopEnd_d;  // 0x2BC
    int End_d;  // 0x2C0
    void* LoopCount_d;  // 0x2C4 [X30:type_map]
    AnimTypeClass* Next_d;  // 0x2C8
    ParticleTypeClass* SpawnsParticle_d;  // 0x2CC [X30:type_map]
    int NumParticles;  // 0x2D0
    int DetailLevel_d;  // 0x2D4
    int TranslucencyDetailLevel_d;  // 0x2D8
    char RandomLoopDelay_d[8];  // 0x2DC
    char RandomRate_d[8];  // 0x2E4
    int Translucency_d;  // 0x2EC
    AnimTypeClass* Spawns_d;  // 0x2F0
    void* SpawnCount_d;  // 0x2F4 [X30:type_map]
    int Report_d;  // 0x2F8
    int StopSound_d;  // 0x2FC
    AnimTypeClass* BounceAnim_d;  // 0x300
    AnimTypeClass* ExpireAnim_d;  // 0x304
    AnimTypeClass* TrailerAnim_d;  // 0x308
    void* TrailerSeperation_d;  // 0x30C [X30:type_map]
    double Elasticity_d;  // 0x310
    double MinZVel_d;  // 0x318
    double AnimTypeClass_field_double_320;  // 0x320
    double MaxXYVel;  // 0x328
    WarheadTypeClass* Warhead;  // 0x330
int DamageRadius;  // 0x334 [X35-L7 kind=int]
    OverlayTypeClass* TiberiumSpawnType;  // 0x338
    void* TiberiumSpreadRadius;  // 0x33C [X30:type_map]
int YSortAdjust;  // 0x340 [X35-L7 kind=int]
int YDrawOffset;  // 0x344 [X35-L7 kind=int]
int ZAdjust;  // 0x348 [X35-L7 kind=int]
    void* MakeInfantry;  // 0x34C [X30:type_map]
    int RunningFrames;  // 0x350
    bool IsFlamingGuy;  // 0x354
    bool IsVeins;  // 0x355
    bool IsMeteor;  // 0x356
    bool TiberiumChainReaction;  // 0x357
    bool IsTiberium;  // 0x358
    bool HideIfNoOre;  // 0x359
    bool Bouncer;  // 0x35A
    bool Tiled;  // 0x35B
    bool ShouldUseCellDrawer;  // 0x35C
    bool UseNormalLight;  // 0x35D
    bool DemandLoad;  // 0x35E
    bool FreeLoad;  // 0x35F
    bool IsAnimatedTiberium;  // 0x360
    bool AltPalette;  // 0x361
    bool Normalized;  // 0x362
    void* Layer;  // 0x364 [X30:type_map]
    bool DoubleThick;  // 0x368
    bool Flat;  // 0x369
    bool Translucent;  // 0x36A
    bool Scorch;  // 0x36B
    bool Flamer;  // 0x36C
    bool Crater;  // 0x36D
    bool ForceBigCraters;  // 0x36E
    bool Sticky;  // 0x36F
    bool PingPong;  // 0x370
    bool Reverse;  // 0x371
    bool Shadow;  // 0x372
    bool PsiWarning;  // 0x373
    bool ShouldFogRemove;  // 0x374
    unsigned char tail_375;  // 0x375
// --- flat members (END) ---
    AnimTypeClass * * FindOrCreate(char *Source);
    AnimTypeClass * ddtor(char a2, int aP0, int aP1, int aP2, int a1, int a3);
    ScenarioClass * * SaveLoad_Prefix(int a1, int a2);
    char GetLoopCount(int a2);
    char Stub(int a1, int a2);
    int FindIndex(void *a1 = 0);
    int GetAnimData(int a2, int a3);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetDamage();
    int GetObjectSize();
    int LoadFromINI(uint8_t *** a2, void *a2_2);
    int LookupByName(void *a1 = 0);
    int PowerDrainUpdate(int * a2);
    int ReadINIString(uint8_t *a3, uint8_t *aP1, unsigned int a2, void *a4 = 0);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2);
    int StubReturnFalse(int a1);
    int Thunk_AnimTypeClass_sub_428E40();
    int Thunk_AnimTypeClass_sub_428E50();
    AnimTypeClass * Construct(char *aP1, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    unsigned int * Construct2(char *Source, void *a2 = 0);
    void* GetWarhead(int a2);
    AnimTypeClass * * FindOrCreate(char *Source, int a2, int aP0, int aP1, int aP2, int a1, int a3);
    int ReadINIString(uint8_t *a3, uint8_t *aP1, unsigned int a2);
bool Flat_flag;  // 0x369 [X35-L7 kind=bool]
    char __pad_98[3];  // 0x98 (ml)
int q024;  // 0x24 [X35-L7 kind=int]

    unsigned char __pad_2A0;  // X10 supply (csp_canon_members)
    IUnknown* q0C4;  // X10 supply (member_lookup)
    IUnknown* q0CC;  // X10 supply (member_lookup)
    unsigned char q0D0;  // X10 supply (member_lookup)
    VectorClass* q0D8;  // X10 supply (member_lookup)
    VectorClass* q0E0;  // X10 supply (member_lookup)
    AnimTypeClass* q108;  // X10 supply (member_lookup)
    unsigned int u32_C8;  // X10 supply (member_lookup)
    uint32_t u32_D4;  // X10 supply (member_lookup)
    unsigned int u32_DC;  // X10 supply (member_lookup)
    unsigned char __pad_0A9;  // 0xA9 [X30:canon]
    unsigned char __pad_14D;  // 0x14D [X30:canon]
    unsigned char __pad_22D;  // 0x22D [X30:canon]
char __pad_233;  // 0x233 [X35-L7 kind=char]
char __pad_238;  // 0x238 [X35-L7 kind=char]
    unsigned char __pad_2A5;  // 0x2A5 [X30:canon]
    unsigned char __pad_363;  // 0x363 [X30:canon]
    unsigned int AllowCellContent_d;  // [X30:default]
    unsigned int FootClass_E0;  // [X30:default]
    unsigned int Immune_d;  // [X30:default]
    unsigned int IsLogic_d;  // [X30:default]
    unsigned int LegalTarget_d;  // [X30:default]
    unsigned int RadarInvisible_d;  // [X30:default]
    unsigned int Selectable_d;  // [X30:default]
};

} // namespace gamemd
