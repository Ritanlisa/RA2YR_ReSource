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
    void* ObjectTypeClass;  // 0x0
    void* ptr_4;  // 0x4
    void* ptr_8;  // 0x8
    void* ptr_C;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    int NeedsSaveOrLink;  // 0x20
    unsigned int ShrapnelCount;  // 0x24
    unsigned char __pad_028;  // 0x28
    char __pad_29[7];  // 0x29
    char __pad_30[1];  // 0x30
    char __pad_31[3];  // 0x31
    unsigned char __pad_034;  // 0x34
    char __pad_35[7];  // 0x35
    unsigned char zero_3C;  // 0x3C
    char UINameLabel[32];  // 0x3D
    unsigned char AnimHigh;  // 0x5D
    char __pad_5E[2];  // 0x5E
    void * UIName;  // 0x60
    char Name[49];  // 0x64
    char tail_95[3];  // 0x95
    char __pad_98[1];  // 0x98
    unsigned char __pad_099;  // 0x99
    char __pad_9A[1];  // 0x9A
    char unused_9B;  // 0x9B
    unsigned int Armor;  // 0x9C
    int Strength;  // 0xA0
    void * Image;  // 0xA4
    char ImageAllocated;  // 0xA8
    char __pad_0A9[3];  // 0xA9
    void * AlphaImage;  // 0xAC
    unsigned int MainVoxel;  // 0xB0
    unsigned int TurretVoxel;  // 0xB4
    unsigned int BarrelVoxel;  // 0xB8
    int ChargerTurrets[18];  // 0xBC
    int ChargerBarrels[18];  // 0x104
    unsigned char __pad_14C;  // 0x14C
    char __pad_14D[156];  // 0x14D
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
    char __pad_233;  // 0x233
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
    unsigned short __pad_2AA;  // 0x2AA
    void* cluster;  // 0x2AC
    WeaponTypeClass* airburstWeapon;  // 0x2B0
    WeaponTypeClass* shrapnelWeapon;  // 0x2B4
    void* shrapnelCount;  // 0x2B8
    void* detonationAltitude;  // 0x2BC
    bool Vertical;  // 0x2C0
    char __pad_2C1[7];  // 0x2C1
    double elasticity;  // 0x2C8
    ColorScheme* Elasticity_d;  // 0x2D0
    AnimTypeClass* Color;  // 0x2D4
    WeaponTypeClass* Trailer_d;  // 0x2D8
    int rot;  // 0x2DC
    void* courseLockDuration;  // 0x2E0
    void* SpawnDelay_d;  // 0x2E4
    int scaledSpawnDelay;  // 0x2E8
    unsigned char Scalable_d;  // 0x2EC
    char __pad_2ED[3];  // 0x2ED
    int arm;  // 0x2F0
    unsigned char animLow;  // 0x2F4
    unsigned char animHigh;  // 0x2F5
    unsigned char animRate;  // 0x2F6
    bool Flat_d;  // 0x2F7
// --- flat members (BEGIN) ---
// --- flat members (END) ---
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
};

} // namespace gamemd
