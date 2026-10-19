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
    void * ptr_0;  // 0x0
    void* ptr_4;  // 0x4
    void* ptr_8;  // 0x8
    void* ptr_C;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    SHPStruct* nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    int NeedsSaveOrLink;  // 0x20
    char __pad_24[12];  // 0x24
    int LoopCount;  // 0x30
    char __pad_34[4];  // 0x34
    int SpawnsParticle;  // 0x38
    char zero_3C[1];  // 0x3C
    char UINameLabel[32];  // 0x3D
    char __pad_5D[3];  // 0x5D
    int UIName;  // 0x60
    char Name[49];  // 0x64
    char tail_95[3];  // 0x95
    char ptr_98[3];  // 0x98
    unsigned char unused_9B;  // 0x9B
    unsigned int Armor;  // 0x9C
    int Strength;  // 0xA0
    AbstractClass* Image;  // 0xA4
    char ImageAllocated;  // 0xA8
    char __pad_0A9[3];  // 0xA9
    void * AlphaImage;  // 0xAC
    unsigned int MainVoxel;  // 0xB0
    unsigned int TurretVoxel;  // 0xB4
    unsigned int BarrelVoxel;  // 0xB8
    int ChargerTurrets[18];  // 0xBC
    int ChargerBarrels[18];  // 0x104
    unsigned char NoSpawnAlt;  // 0x14C
    unsigned char __pad_14D;  // 0x14D
    char __pad_14E[155];  // 0x14E
    char align_1E9[3];  // 0x1E9
    int MaxDimension;  // 0x1EC
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    char ImageFile[25];  // 0x1F8
    unsigned char AlternateArcticArt_d;  // 0x211
    unsigned char ArcticArtInUse_d;  // 0x212
    char AlphaImageFile[25];  // 0x213
    char Theater_d;  // 0x22C
    unsigned char __pad_22D;  // 0x22D
    char Bombable[1];  // 0x22E
    char RadarInvisible[1];  // 0x22F
    char Selectable[1];  // 0x230
    char LegalTarget[1];  // 0x231
    unsigned char Insignificant_d;  // 0x232
    char __pad_233;  // 0x233
    char IsLogic[1];  // 0x234
    char AllowCellContent[1];  // 0x235
    unsigned char Voxel_d;  // 0x236
    bool NewTheater_d;  // 0x237
    char __pad_238;  // 0x238
    char IgnoresFirestorm[1];  // 0x239
    char UseLineTrail[1];  // 0x23A
    char LineTrailColor[3];  // 0x23B
    char align_23E[2];  // 0x23E
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches[80];  // 0x244
    int MiddleFrameIndex;  // 0x294
    int MiddleFrameWidth;  // 0x298
    AbstractTypeClass* MiddleFrameHeight_d;  // 0x29C
    unsigned char __pad_2A0;  // 0x2A0
    char __pad_2A1[3];  // 0x2A1
    unsigned char AnimTypeClass_field_2A4;  // 0x2A4
    unsigned char __pad_2A5;  // 0x2A5
    char __pad_2A6[2];  // 0x2A6
    double Damage;  // 0x2A8
    int Rate;  // 0x2B0
    int Damage_d;  // 0x2B4
    int LoopStart_d;  // 0x2B8
    int LoopEnd_d;  // 0x2BC
    int End_d;  // 0x2C0
    void* LoopCount_d;  // 0x2C4
    AnimTypeClass* Next_d;  // 0x2C8
    ParticleTypeClass* SpawnsParticle_d;  // 0x2CC
    int NumParticles;  // 0x2D0
    int DetailLevel_d;  // 0x2D4
    int TranslucencyDetailLevel_d;  // 0x2D8
    char RandomLoopDelay_d[8];  // 0x2DC
    char RandomRate_d[8];  // 0x2E4
    int Translucency_d;  // 0x2EC
    AnimTypeClass* Spawns_d;  // 0x2F0
    void* SpawnCount_d;  // 0x2F4
    int Report_d;  // 0x2F8
    int StopSound_d;  // 0x2FC
    AnimTypeClass* BounceAnim_d;  // 0x300
    AnimTypeClass* ExpireAnim_d;  // 0x304
    AnimTypeClass* TrailerAnim_d;  // 0x308
    void* TrailerSeperation_d;  // 0x30C
    double Elasticity_d;  // 0x310
    double MinZVel_d;  // 0x318
    double AnimTypeClass_field_double_320;  // 0x320
    double MaxXYVel;  // 0x328
    WarheadTypeClass* Warhead;  // 0x330
    int DamageRadius;  // 0x334
    OverlayTypeClass* TiberiumSpawnType;  // 0x338
    void* TiberiumSpreadRadius;  // 0x33C
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
    unsigned char __pad_363;  // 0x363
    void* Layer;  // 0x364
    bool DoubleThick;  // 0x368
    bool Flat_flag;  // 0x369
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
    char tail_375[3];  // 0x375
// --- flat members (BEGIN) ---
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
};

} // namespace gamemd
