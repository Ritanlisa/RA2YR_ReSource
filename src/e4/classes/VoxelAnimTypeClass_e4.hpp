// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SHPStruct;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct OverlayTypeClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct SomeVoxelCache;  // fix_fwd_type_supply
struct AnimTypeClass;  // fix_fwd_type_supply
struct WarheadTypeClass;  // fix_fwd_type_supply
struct ParticleSystemTypeClass;  // fix_fwd_type_supply

struct VoxelAnimTypeClass {
#pragma pack(push, 1)  // X60: binary-packed layout
    void* ptr_0;  // 0x0
    void* ptr_4;  // 0x4
    void* ptr_8;  // 0x8
    void* ptr_C;  // 0xC
    SHPStruct* uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    SHPStruct* nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    char NeedsSaveOrLink[4];  // 0x20
    char __pad_24[4];  // 0x24
    char ChargerTurrets_0x12[4];  // 0x28
    char ChargerBarrels_0x12[4];  // 0x2C
    char __pad_30[1];  // 0x30
    char __pad_31[1];  // 0x31
    char __pad_32[4];  // 0x32
    unsigned char __pad_036;  // 0x36
    char __pad_37[5];  // 0x37
    unsigned char zero_3C;  // 0x3C
    char UINameLabel[32];  // 0x3D
    unsigned char __pad_05D;  // 0x5D
    char __pad_5E[2];  // 0x5E
    void * UIName;  // 0x60
    char Name[49];  // 0x64
    char tail_95[3];  // 0x95
    char __pad_98[1];  // 0x98
    unsigned char __pad_099;  // 0x99
    char __pad_9A[1];  // 0x9A
    unsigned char unused_9B;  // 0x9B
    unsigned int Armor;  // 0x9C
    int Strength_d;  // 0xA0
    void * Image_d;  // 0xA4
    char ImageAllocated;  // 0xA8
    char __pad_0A9[3];  // 0xA9
    void * AlphaImage;  // 0xAC
    void* MainVoxel;  // 0xB0
    int TurretVoxel_d;  // 0xB4
    unsigned int __pad_0B8;  // 0xB8
    int ChargerTurrets[18];  // 0xBC
    int ChargerBarrels[18];  // 0x104
    unsigned char __pad_14C;  // 0x14C
    char __pad_14D[41];  // 0x14D
    unsigned char voxelSlot176;  // 0x176
    char __pad_177[3];  // 0x177
    unsigned char __pad_17A;  // 0x17A
    char __pad_17B[5];  // 0x17B
    int voxelSlot180;  // 0x180
    unsigned char __pad_184;  // 0x184
    char __pad_185[100];  // 0x185
    char align_1E9[3];  // 0x1E9
    int MaxDimension;  // 0x1EC
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    char ImageFile[25];  // 0x1F8
    char __pad_211;  // 0x211
    unsigned char ArcticArtInUse_d;  // 0x212
    char AlphaImageFile[25];  // 0x213
    unsigned char __pad_22C;  // 0x22C
    char Crushable[1];  // 0x22D
    char Bombable[1];  // 0x22E
    char RadarInvisible[1];  // 0x22F
    char Selectable[1];  // 0x230
    char LegalTarget[1];  // 0x231
    unsigned char Insignificant_d;  // 0x232
    char Immune[1];  // 0x233
    char IsLogic[1];  // 0x234
    char AllowCellContent[1];  // 0x235
    unsigned char Voxel_d;  // 0x236
    char __pad_237;  // 0x237
    char HasRadialIndicator[1];  // 0x238
    char IgnoresFirestorm[1];  // 0x239
    char UseLineTrail[1];  // 0x23A
    char LineTrailColor[3];  // 0x23B
    char align_23E[2];  // 0x23E
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches[80];  // 0x244
    bool Normalized;  // 0x294
    bool Translucent;  // 0x295
    bool SourceShared;  // 0x296
    unsigned char __pad_297;  // 0x297
    int32_t VoxelIndex;  // 0x298
    int Duration;  // 0x29C
    double Elasticity;  // 0x2A0
    double MinAngularVelocity;  // 0x2A8
    double MaxAngularVelocity;  // 0x2B0
    double MinZVel;  // 0x2B8
    double MaxZVel;  // 0x2C0
    double MaxXYVel;  // 0x2C8
    bool IsMeteor;  // 0x2D0
    char __pad_2D1[3];  // 0x2D1
    VoxelAnimTypeClass* Spawns;  // 0x2D4
    int SpawnCount;  // 0x2D8
    int StartSound;  // 0x2DC
    int StopSound;  // 0x2E0
    AnimTypeClass* BounceAnim;  // 0x2E4
    AnimTypeClass* ExpireAnim;  // 0x2E8
    AnimTypeClass* TrailerAnim;  // 0x2EC
    int Damage;  // 0x2F0
    int DamageRadius;  // 0x2F4
    WarheadTypeClass* Warhead;  // 0x2F8
    ParticleSystemTypeClass* AttachedSystem;  // 0x2FC
    bool IsTiberium;  // 0x300
    char __pad_301[3];  // 0x301
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    VoxelAnimTypeClass * LoadFromINI(uint8_t *** a2, void *a2_2);
    VoxelAnimTypeClass * ddtor(char a2);
    char Stub(int a1, int a2);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int PowerDrainUpdate(int * a2);
    int SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2);
    int StubReturnFalse(int a1);
    long long GetData(ObjectTypeClass * aP1, int a3);
    VoxelAnimTypeClass * Constructor(char *Source, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    VoxelAnimTypeClass * ddtor(void ** Block, char a2);
#pragma pack(pop)
};

} // namespace gamemd
