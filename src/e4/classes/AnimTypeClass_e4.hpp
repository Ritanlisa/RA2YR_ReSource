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
    int MiddleFrameHeight;  // 0x12
    bool IsAllocated;  // 0x13
    double abstractFlags;  // 0x14
    unsigned char q015;  // 0x15
    SHPStruct* nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    int NeedsSaveOrLink;  // 0x20
    int LoopStart;  // 0x24
    int LoopEnd;  // 0x28
    bool q02B;  // 0x2B
    int End;  // 0x2C
    int LoopCount;  // 0x30
    unsigned char q031;  // 0x31
    int Start;  // 0x32
    AnimTypeClass* Next;  // 0x34
    int SpawnsParticle;  // 0x38
    unsigned char q03A;  // 0x3A
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
    unsigned char q078;  // 0x78
    double MinZVel;  // 0x7C
    int q080;  // 0x80
    void* q08C;  // 0x8C
    int StopSound;  // 0x96
    unsigned int Armor;  // 0x9C
    int Strength;  // 0xA0
    char ImageAllocated;  // 0xA8
    void * AlphaImage;  // 0xAC
    unsigned int MainVoxel;  // 0xB0
    unsigned int TurretVoxel;  // 0xB4
    unsigned int BarrelVoxel;  // 0xB8
    unsigned char ChargerTurrets;  // 0xBC
    void* q0C4;  // 0xC4
    unsigned int u32_C8;  // 0xC8
    unsigned char q0D0;  // 0xD0
    void* q0D8;  // 0xD8
    void* q0E0;  // 0xE0
    unsigned int u32_E4;  // 0xE4
    void* q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    OverlayTypeClass* q0F8;  // 0xF8
    AnimTypeClass* BounceAnim;  // 0x100
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
    void * q164;  // 0x164
    char q168;  // 0x168
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    char ImageFile;  // 0x1F8
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
    unsigned char AlphaImageFile;  // 0x213
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches[80];  // 0x244
    unsigned char q258;  // 0x258
    unsigned int q264;  // 0x264
    SomeVoxelCache* q26C;  // 0x26C
    unsigned int q280;  // 0x280
    int MiddleFrameIndex;  // 0x294
    int MiddleFrameWidth;  // 0x298
    unsigned char AnimTypeClass_field_2A4;  // 0x2A4
    double Damage;  // 0x2A8
    int Rate;  // 0x2B0
    int q2B4;  // 0x2B4
    int NumParticles;  // 0x2D0
    char q2E4[8];  // 0x2E4
    AnimTypeClass* q300;  // 0x300
    AnimTypeClass* q308;  // 0x308
    double AnimTypeClass_field_double_320;  // 0x320
    unsigned int q324;  // 0x324
    double MaxXYVel;  // 0x328
    WarheadTypeClass* Warhead;  // 0x330
    int DamageRadius;  // 0x334
    OverlayTypeClass* TiberiumSpawnType;  // 0x338
    int TiberiumSpreadRadius;  // 0x33C
    int YSortAdjust;  // 0x340
    int YDrawOffset;  // 0x344
    int ZAdjust;  // 0x348
    int MakeInfantry;  // 0x34C
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
    char Layer[4];  // 0x364
    bool DoubleThick;  // 0x368
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
    unsigned int Flat_flag;
    unsigned int __pad_2A0;
    unsigned int Image;
    unsigned int q2A0;
// --- flat members (END) ---
    static AnimTypeClass * * FindOrCreate(char *Source);
    AnimTypeClass * ddtor(char a2, int aP0, int aP1, int aP2, int a1, int a3);
    ScenarioClass * * SaveLoad_Prefix(int a1, int a2);
    char GetLoopCount(int a2);
    char Stub(int a1, int a2);
    int FindIndex();
    int GetAnimData(int a2, int a3);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetDamage();
    int GetObjectSize();
    int LoadFromINI(uint8_t *** a2, void *a2_2);
    int LookupByName();
    int PowerDrainUpdate(int * a2);
    int ReadINIString(INIClass * aP1, unsigned char * a2, void * Layer);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2);
    int StubReturnFalse(int a1);
    int Thunk_AnimTypeClass_sub_428E40();
    int Thunk_AnimTypeClass_sub_428E50();
    AnimTypeClass * Construct(char *aP1);
    unsigned int * Construct2(char *Source);
    void* GetWarhead(int a2);
    AnimTypeClass * * FindOrCreate(char *Source, int a2, int aP0, int aP1, int aP2, int a1, int a3);
    int ReadINIString(unsigned __int8 *a3, unsigned __int8 *aP1, unsigned int a2);
};

} // namespace gamemd
