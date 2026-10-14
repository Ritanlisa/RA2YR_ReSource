// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct OverlayTypeClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct SomeVoxelCache;  // fix_fwd_type_supply
struct WeaponTypeClass;  // fix_fwd_type_supply
struct ColorScheme;  // fix_fwd_type_supply
struct AnimTypeClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply

struct BulletTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int AG;  // 0x11
    unsigned int Degenerates;  // 0x12
    unsigned int Bouncy;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned char FirersPalette;  // 0x15
    unsigned int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    unsigned char NeedsSaveOrLink;  // 0x20
    unsigned int ShrapnelCount;  // 0x24
    bool NoSpawnAlt;  // 0x30
    unsigned char zero_3C;  // 0x3C
    unsigned char UINameLabel;  // 0x3D
    unsigned int Trailer;  // 0x40
    unsigned int ROT;  // 0x44
    unsigned int CourseLockDuration;  // 0x48
    unsigned int SpawnDelay;  // 0x4C
    unsigned int ScaledSpawnDelay;  // 0x50
    unsigned int Scalable;  // 0x54
    unsigned int Arm;  // 0x58
    unsigned int AnimLow;  // 0x5C
    unsigned int AnimHigh;  // 0x5D
    void * UIName;  // 0x60
    unsigned char Name;  // 0x64
    unsigned int tail_95;  // 0x95
    char unused_9B;  // 0x9B
    unsigned int Armor;  // 0x9C
    int Strength;  // 0xA0
    void * Image;  // 0xA4
    char ImageAllocated;  // 0xA8
    void * AlphaImage;  // 0xAC
    unsigned int MainVoxel;  // 0xB0
    unsigned int TurretVoxel;  // 0xB4
    unsigned int BarrelVoxel;  // 0xB8
    unsigned char ChargerTurrets;  // 0xBC
    unsigned char ChargerBarrels;  // 0x104
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
    bool Airburst;  // 0x294
    bool Floater;  // 0x295
    bool SubjectToCliffs;  // 0x296
    bool SubjectToElevation;  // 0x297
    bool SubjectToWalls;  // 0x298
    bool VeryHigh;  // 0x299
    bool Shadow;  // 0x29A
    bool Arcing;  // 0x29B
    bool Dropping;  // 0x29C
    bool Level;  // 0x29D
    bool Inviso;  // 0x29E
    bool Proximity;  // 0x29F
    bool Ranged;  // 0x2A0
    bool Rotates;  // 0x2A1
    bool Inaccurate;  // 0x2A2
    bool FlakScatter;  // 0x2A3
    bool AA;  // 0x2A4
    bool Degenerates_d;  // 0x2A5
    bool Degenerates_2;  // 0x2A6
    bool Bouncy_d;  // 0x2A7
    bool AnimPalette;  // 0x2A8
    bool FirersPalette_d;  // 0x2A9
    int cluster;  // 0x2AC
    WeaponTypeClass* airburstWeapon;  // 0x2B0
    WeaponTypeClass* shrapnelWeapon;  // 0x2B4
    int shrapnelCount;  // 0x2B8
    int detonationAltitude;  // 0x2BC
    bool Vertical;  // 0x2C0
    double Elasticity;  // 0x2C4
    double elasticity;  // 0x2C8
    int Acceleration;  // 0x2CC
    ColorScheme* Elasticity_d;  // 0x2D0
    AnimTypeClass* Color;  // 0x2D4
    int Trailer_d;  // 0x2D8
    int rot;  // 0x2DC
    int courseLockDuration;  // 0x2E0
    int SpawnDelay_d;  // 0x2E4
    bool scaledSpawnDelay;  // 0x2E8
    int Scalable_d;  // 0x2EC
    unsigned char arm;  // 0x2F0
    unsigned char AnimHigh_d;  // 0x2F1
    unsigned char AnimRate;  // 0x2F2
    bool Flat;  // 0x2F3
    unsigned char animLow;  // 0x2F4
    unsigned char animHigh;  // 0x2F5
    unsigned char animRate;  // 0x2F6
    bool Flat_d;  // 0x2F7
// --- flat members (END) ---
    void* ObjectTypeClass;  // 0x0 (no offset truth)
    static BuildingTypeClass * * ReadArmor();
    BuildingTypeClass * * ReadTrailerAnim();
    BulletTypeClass * ddtor(char a2, int a1, int aP0, int aP1, int aP2, int a3);
    WeaponTypeClass * * LoadFromINI(unsigned char *** a2, void *a2_2);
    char ReadTrajectoryFlags(unsigned char * Block, char * a3, int a4);
    char Stub(int a1, int a2);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int GetWarhead(int a2, int a3);
    int ProcessImpact(int a1);
    int SaveLoad_Prefix(gamemd::ObjectTypeClass* aP0, int aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, gamemd::ObjectTypeClass * aP1, int aP2);
    int StubReturnFalse(int a1);
    unsigned char * Construct(char *aP1, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    unsigned int * GetROF(unsigned int * a1, int * a2);
    int ProcessPower(int * a2, void *a2_2);

    unsigned char AbstractClass_E58[4];  /* AbstractClass */  // X10 supply (member_lookup)
};

} // namespace gamemd
