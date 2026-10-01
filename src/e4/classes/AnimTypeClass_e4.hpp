// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SHPStruct;  // fix_fwd_type_supply
struct ObjectClass;  // fix_fwd_type_supply
struct AbstractClass;  // fix_fwd_type_supply
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
    unsigned char q015;  // 0x15
    SHPStruct* nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
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
    unsigned int q03B;  // 0x3B
    int zero_3C;  // 0x3C
    unsigned char UINameLabel;  // 0x3D
    int DetailLevel;  // 0x40
    bool q042;  // 0x42
    int TranslucencyDetailLevel;  // 0x44
    char RandomLoopDelay[4];  // 0x48
    bool q04A;  // 0x4A
    char RandomRate[4];  // 0x4C
    unsigned char q04F;  // 0x4F
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
    AnimTypeClass* q084;  // 0x84
    int q088;  // 0x88
    void* q08C;  // 0x8C
    unsigned int u32_90;  // 0x90
    unsigned int q094;  // 0x94
    unsigned int tail_95;  // 0x95
    int StopSound;  // 0x96
    ObjectClass * ptr_98;  // 0x98
    unsigned char unused_9B;  // 0x9B
    unsigned int Armor;  // 0x9C
    int Strength;  // 0xA0
    unsigned int qA4;  // 0xA4
    char ImageAllocated;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    void * AlphaImage;  // 0xAC
    unsigned int MainVoxel;  // 0xB0
    unsigned int TurretVoxel;  // 0xB4
    unsigned int BarrelVoxel;  // 0xB8
    unsigned char q0B9;  // 0xB9
    unsigned char ChargerTurrets;  // 0xBC
    unsigned int q0C3;  // 0xC3
    void* q0C4;  // 0xC4
    unsigned char q0C7;  // 0xC7
    unsigned int u32_C8;  // 0xC8
    unsigned int q0C9;  // 0xC9
    void* q0CC;  // 0xCC
    unsigned char q0D0;  // 0xD0
    unsigned char u8_D1;  // 0xD1
    unsigned char u8_D2;  // 0xD2
    unsigned char u8_D3;  // 0xD3
    unsigned char u8_D4;  // 0xD4
    void* q0D8;  // 0xD8
    unsigned int u32_DC;  // 0xDC
    void* q0E0;  // 0xE0
    unsigned int u32_E4;  // 0xE4
    AbstractClass* q0E8;  // 0xE8
    unsigned int q0EC;  // 0xEC
    void* q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    void* q0F7;  // 0xF7
    OverlayTypeClass* q0F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    ObjectClass* q0FC;  // 0xFC
    AnimTypeClass* BounceAnim;  // 0x100
    unsigned char ChargerBarrels;  // 0x104
    AnimTypeClass* q108;  // 0x108
    unsigned int q10C;  // 0x10C
    DynamicVector* q110;  // 0x110
    unsigned int q111;  // 0x111
    unsigned int q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned int q11C;  // 0x11C
    unsigned int q120;  // 0x120
    double q124;  // 0x124
    unsigned int q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned int q138;  // 0x138
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q148;  // 0x148
    unsigned char NoSpawnAlt;  // 0x14C
    unsigned char q14D;  // 0x14D
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    void* q158;  // 0x158
    unsigned char q15C;  // 0x15C
    int q160;  // 0x160
    unsigned int q162;  // 0x162
    void * q164;  // 0x164
    unsigned char q166;  // 0x166
    char q168;  // 0x168
    bool q16B;  // 0x16B
    void* q16C;  // 0x16C
    unsigned char q16D;  // 0x16D
    unsigned int q16F;  // 0x16F
    unsigned char q170;  // 0x170
    unsigned char q174;  // 0x174
    unsigned int q180;  // 0x180
    unsigned int q184;  // 0x184
    unsigned char q188;  // 0x188
    unsigned int q190;  // 0x190
    unsigned int q194;  // 0x194
    unsigned char q198;  // 0x198
    unsigned char q19D;  // 0x19D
    bool q1A1;  // 0x1A1
    unsigned int q1A2;  // 0x1A2
    unsigned int q1A5;  // 0x1A5
    unsigned int q1A7;  // 0x1A7
    unsigned char q1AB;  // 0x1AB
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    unsigned int q1B1;  // 0x1B1
    unsigned int q1B5;  // 0x1B5
    unsigned char q1B9;  // 0x1B9
    AbstractTypeClass* q1D4;  // 0x1D4
    AbstractTypeClass* q1E0;  // 0x1E0
    ConnectionPointClass* q1E8;  // 0x1E8
    unsigned char q1E9;  // 0x1E9
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
    unsigned char q210;  // 0x210
    char q211;  // 0x211
    char q212;  // 0x212
    unsigned char AlphaImageFile;  // 0x213
    unsigned int q214;  // 0x214
    AbstractClass* q218;  // 0x218
    AbstractClass* q21C;  // 0x21C
    unsigned int q220;  // 0x220
    void* q224;  // 0x224
    unsigned int q228;  // 0x228
    char q22C;  // 0x22C
    char q22D;  // 0x22D
    char q22E;  // 0x22E
    char q22F;  // 0x22F
    char q230;  // 0x230
    char q231;  // 0x231
    char q232;  // 0x232
    char q233;  // 0x233
    char q234;  // 0x234
    char q235;  // 0x235
    char q236;  // 0x236
    char q237;  // 0x237
    char q238;  // 0x238
    char q239;  // 0x239
    char q23A;  // 0x23A
    unsigned char q23B;  // 0x23B
    bool q23D;  // 0x23D
    unsigned char q23E;  // 0x23E
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches[80];  // 0x244
    unsigned int q248;  // 0x248
    SomeVoxelCache* q24C;  // 0x24C
    void* q254;  // 0x254
    unsigned char q258;  // 0x258
    SomeVoxelCache* q25C;  // 0x25C
    unsigned char q260;  // 0x260
    unsigned int q264;  // 0x264
    unsigned int q268;  // 0x268
    SomeVoxelCache* q26C;  // 0x26C
    SomeVoxelCache* q270;  // 0x270
    int q274;  // 0x274
    unsigned int q278;  // 0x278
    SomeVoxelCache* q27C;  // 0x27C
    unsigned int q280;  // 0x280
    unsigned int q284;  // 0x284
    unsigned int q288;  // 0x288
    unsigned int q28C;  // 0x28C
    unsigned char q290;  // 0x290
    int MiddleFrameIndex;  // 0x294
    int MiddleFrameWidth;  // 0x298
    int q29C;  // 0x29C
    unsigned int q2A0_a;  // 0x2A0
    unsigned char AnimTypeClass_field_2A4;  // 0x2A4
    unsigned char q2A5;  // 0x2A5
    double Damage;  // 0x2A8
    AbstractTypeClass* q2AC;  // 0x2AC
    int Rate;  // 0x2B0
    int q2B4;  // 0x2B4
    int q2B8;  // 0x2B8
    int q2BC;  // 0x2BC
    int q2C0;  // 0x2C0
    int q2C4;  // 0x2C4
    AnimTypeClass* q2C8;  // 0x2C8
    int q2CC;  // 0x2CC
    int NumParticles;  // 0x2D0
    int q2D4;  // 0x2D4
    int q2D8;  // 0x2D8
    char q2DC[8];  // 0x2DC
    AbstractTypeClass* q2E0;  // 0x2E0
    char q2E4[8];  // 0x2E4
    AbstractTypeClass* q2E8;  // 0x2E8
    int q2EC;  // 0x2EC
    AnimTypeClass* q2F0;  // 0x2F0
    int q2F4;  // 0x2F4
    int q2F8;  // 0x2F8
    int q2FC;  // 0x2FC
    AnimTypeClass* q300;  // 0x300
    AnimTypeClass* q304;  // 0x304
    AnimTypeClass* q308;  // 0x308
    unsigned int q30A;  // 0x30A
    int q30C;  // 0x30C
    double q310;  // 0x310
    void* q314;  // 0x314
    double q318;  // 0x318
    unsigned int u32_31C;  // 0x31C
    double AnimTypeClass_field_double_320;  // 0x320
    unsigned int q324;  // 0x324
    double MaxXYVel;  // 0x328
    void* q32C;  // 0x32C
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
    bool q366;  // 0x366
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
    unsigned int DetailLevel4;
    unsigned int Flat_flag;
    unsigned int __pad_2A0;
    unsigned int u32_C84;
    unsigned int vtable46;
    unsigned int Image;
    unsigned int q2A0;
// --- flat members (END) ---
    AnimTypeClass * * FindOrCreate(AbstractClass * Source);
    AnimTypeClass * ddtor(char a2);
    ScenarioClass * * SaveLoad_Prefix(int a1, int a2);
    char GetLoopCount(int a2);
    char Stub(int a1, int a2);
    int FindIndex(void *a1);
    int GetAnimData(int a2, int a3);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetDamage();
    int GetObjectSize();
    int LoadFromINI(uint8_t *** a2, void *a2);
    int LookupByName();
    int PowerDrainUpdate(int * a2);
    int ReadINIString(INIClass * aP1, unsigned char * a2, Layer a3);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2);
    int StubReturnFalse(int a1);
    int Thunk_AnimTypeClass_sub_428E40();
    int Thunk_AnimTypeClass_sub_428E50();
    AnimTypeClass * Construct(AbstractClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6);
    unsigned int * Construct2(char * Source, void *a2, void *a3);
    void* GetWarhead(int a2);
};

} // namespace gamemd
