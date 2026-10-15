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
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    SHPStruct* uniqueId;  // 0x10
    unsigned char alignmentPadding_3;  // 0x11
    int Strength;  // 0x12
    bool IsAllocated;  // 0x13
    bool abstractFlags;  // 0x14
    SHPStruct* Image;  // 0x16
    SHPStruct* nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    char NeedsSaveOrLink[4];  // 0x20
    VoxelStruct* BarrelVoxel;  // 0x24 [X30:type_map]
    char ChargerTurrets_0x12[4];  // 0x28
    char ChargerBarrels_0x12[4];  // 0x2C
    bool NoSpawnAlt;  // 0x30
    char TurretVoxel[4];  // 0x32
    unsigned char zero_3C;  // 0x3C
    unsigned char UINameLabel;  // 0x3D
    void * UIName;  // 0x60
    unsigned char Name;  // 0x64
    unsigned int tail_95;  // 0x95
    unsigned char unused_9B;  // 0x9B
    unsigned int Armor;  // 0x9C
    int Strength_d;  // 0xA0
    void * Image_d;  // 0xA4
    char ImageAllocated;  // 0xA8
    void * AlphaImage;  // 0xAC
    void* MainVoxel;  // 0xB0 [X30:type_map]
    int TurretVoxel_d;  // 0xB4
    unsigned char ChargerTurrets;  // 0xBC
    unsigned char ChargerBarrels;  // 0x104
    int voxelSlot176;  // 0x176
    int voxelSlot180;  // 0x180
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
    unsigned char ArcticArtInUse_d;  // 0x212
    unsigned char AlphaImageFile;  // 0x213
    unsigned char Insignificant_d;  // 0x232
    unsigned char Voxel_d;  // 0x236
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches[80];  // 0x244
    bool Normalized;  // 0x294
    bool Translucent;  // 0x295
    bool SourceShared;  // 0x296
    int ShareBarrelData;  // 0x298 [X30:type_map]
    void* Duration;  // 0x29C [X30:type_map]
    double Elasticity;  // 0x2A0
    double MinAngularVelocity;  // 0x2A8
    double MaxAngularVelocity;  // 0x2B0
    double MinZVel;  // 0x2B8
    double MaxZVel;  // 0x2C0
    double MaxXYVel;  // 0x2C8
    bool IsMeteor;  // 0x2D0
    VoxelAnimTypeClass* Spawns;  // 0x2D4
    void* SpawnCount;  // 0x2D8 [X30:type_map]
    int StartSound;  // 0x2DC [X30:type_map]
    void* StopSound;  // 0x2E0 [X30:type_map]
    AnimTypeClass* BounceAnim;  // 0x2E4
    AnimTypeClass* ExpireAnim;  // 0x2E8
    AnimTypeClass* TrailerAnim;  // 0x2EC
    void* Damage;  // 0x2F0 [X30:type_map]
    int DamageRadius;  // 0x2F4 [X30:type_map]
    WarheadTypeClass* Warhead;  // 0x2F8
    ParticleSystemTypeClass* AttachedSystem;  // 0x2FC
    bool IsTiberium;  // 0x300
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

    int32_t VoxelIndex;  // X10 supply (member_lookup)
    unsigned char __pad_036;  // 0x36 [X30:canon]
    unsigned char __pad_05D;  // 0x5D [X30:canon]
    unsigned char __pad_099;  // 0x99 [X30:canon]
    unsigned char __pad_0A9;  // 0xA9 [X30:canon]
    unsigned char __pad_0B8;  // 0xB8 [X30:canon]
    unsigned char __pad_14C;  // 0x14C [X30:canon]
    unsigned char __pad_17A;  // 0x17A [X30:canon]
    unsigned char __pad_184;  // 0x184 [X30:canon]
    unsigned char __pad_211;  // 0x211 [X30:canon]
    unsigned char __pad_22C;  // 0x22C [X30:canon]
    int __pad_233;  // 0x233 [X30:type_map]
    unsigned char __pad_237;  // 0x237 [X30:canon]
    unsigned char __pad_297;  // 0x297 [X30:canon]
    unsigned char __pad_2D1;  // 0x2D1 [X30:canon]
    unsigned char __pad_301;  // 0x301 [X30:canon]
    unsigned int AllowCellContent_d;  // [X30:default]
    unsigned int Immune_d;  // [X30:default]
    unsigned int IsLogic_d;  // [X30:default]
    unsigned int LegalTarget_d;  // [X30:default]
    unsigned int RadarInvisible_d;  // [X30:default]
    unsigned int Selectable_d;  // [X30:default]
};

} // namespace gamemd
