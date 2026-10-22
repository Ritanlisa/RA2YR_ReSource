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
struct TerrainClass;  // fix_fwd_type_supply

struct TerrainTypeClass {
    int vfptr;  // 0x0
    int vfptr1;  // 0x4
    int vfptr2;  // 0x8
    int vfptr3;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char __pad_025;  // 0x25
    char __pad_26[10];  // 0x26
    char __pad_30[1];  // 0x30
    char __pad_31[3];  // 0x31
    unsigned char __pad_034;  // 0x34
    char __pad_35[7];  // 0x35
    char zero_3C;  // 0x3C
    char UINameLabel[32];  // 0x3D
    unsigned char __pad_05D;  // 0x5D
    char __pad_5E[2];  // 0x5E
    void * UIName;  // 0x60
    char Name[49];  // 0x64
    char __pad_095[3];  // 0x95
    char __pad_98[3];  // 0x98
    char unused_9B;  // 0x9B
    int Armor;  // 0x9C
    int Strength;  // 0xA0
    int Image;  // 0xA4
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
    char __pad_1E9[3];  // 0x1E9
    int MaxDimension;  // 0x1EC
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    unsigned int ImageFile;  // 0x1F8
    char __pad_1FC[21];  // 0x1FC
    char __pad_211;  // 0x211
    char ArcticArtInUse_d;  // 0x212
    char AlphaImageFile[25];  // 0x213
    char Theater[1];  // 0x22C
    char Crushable[1];  // 0x22D
    char Bombable[1];  // 0x22E
    unsigned char q22F;  // 0x22F
    unsigned char Selectable;  // 0x230
    char LegalTarget[1];  // 0x231
    unsigned char Insignificant;  // 0x232
    unsigned char Immune;  // 0x233
    char q234[1];  // 0x234
    unsigned char q235;  // 0x235
    char Voxel_d;  // 0x236
    char __pad_237;  // 0x237
    char HasRadialIndicator[1];  // 0x238
    char IgnoresFirestorm[1];  // 0x239
    char UseLineTrail[1];  // 0x23A
    char LineTrailColor[3];  // 0x23B
    char align_23E[2];  // 0x23E
    int LineTrailColorDecrement;  // 0x240
    int VoxelCaches[20];  // 0x244
    int ArrayIndex;  // 0x294
    int Foundation;  // 0x298
    char RadarColor[3];  // 0x29C
    unsigned char __pad_29F;  // 0x29F
    int AnimationRate;  // 0x2A0
    int AnimationProbability;  // 0x2A4
    int TemperateOccupationBits;  // 0x2A8
    int SnowOccupationBits;  // 0x2AC
    char WaterBound[1];  // 0x2B0
    char SpawnsTiberium_d[1];  // 0x2B1
    char IsFlammable_d[1];  // 0x2B2
    char IsAnimated_d[1];  // 0x2B3
    char IsVeinhole[1];  // 0x2B4
    unsigned char __pad_2B5;  // 0x2B5
    char __pad_2B6[2];  // 0x2B6
    int q2B8;  // 0x2B8
    unsigned int u32_2BC;  // 0x2BC
    unsigned int u32_2C0;  // 0x2C0
    unsigned int u32_2C4;  // 0x2C4
    unsigned int u32_2C8;  // 0x2C8
    unsigned int u32_2CC;  // 0x2CC
    unsigned int u32_2D0;  // 0x2D0
    unsigned int u32_2D4;  // 0x2D4
    unsigned int u32_2D8;  // 0x2D8
    unsigned int u32_2DC;  // 0x2DC
    unsigned char u8_2E0;  // 0x2E0
    unsigned char u8_2E1;  // 0x2E1
    unsigned char u8_2E2;  // 0x2E2
    unsigned char u8_2E3;  // 0x2E3
    unsigned int q2E4;  // 0x2E4
    unsigned int q2E8;  // 0x2E8
    unsigned int q2EC;  // 0x2EC
    unsigned int u32_2F0;  // 0x2F0
    unsigned char u32_2F4;  // 0x2F4
    unsigned char q2F5;  // 0x2F5
    char __pad_2F6[15];  // 0x2F6
    unsigned char q305;  // 0x305
    unsigned char q306;  // 0x306
    char __pad_307[1];  // 0x307
    unsigned int q0308;  // 0x308
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    TerrainClass * GetTileIndex(int a2, void *a2_2, void *a3, void *a4);
    TerrainTypeClass * * FindOrCreate(char *Source);
    TerrainTypeClass * ddtor(void * a2, char a3);
    bool   GetHeight(int a3, void *a2 = 0);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTileData(int a2, void * a3, signed int * v10, unsigned int * a5, unsigned short * a6, unsigned int * a7);
    int GetTypeIdentifier();
    int LoadFromINI(uint8_t ***a2, int aP1, int aP3, int a3, int a4, int a5, int a6, int a7, int aP2, int a1, int aP0);
    int PowerDrainUpdate(int * a2);
    int  SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2);
    unsigned int * Construct(int a2, unsigned char a3, unsigned char a4, TerrainTypeClass * aP4, char a6, void *a6_2, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    unsigned int *   GetWidth(int * a2, void *a2_1 = 0);
    TerrainTypeClass(char *Source, int aP1, int aP3, int a2, int a3, int a4, int a5, int a6, int a7, int aP2, int a1, int aP0);
    unsigned int * Construct(int a2, unsigned char a3, unsigned char a4, TerrainTypeClass * aP4, char a6, void *a6_2);
    int LoadFromINI(uint8_t ***a2, int aP1, int aP3, int a3, int a4, int a5, int a6, int a7, int aP2, int a1, int aP0, void * aAnimationproba, void * aAnimationrate, void * aIsanimated, void * aIsflammable, void * aRadarcolor, void * aSnowoccupation, void * aSpawnstiberium, void * aTemperateoccup, void * aWaterbound);
};

} // namespace gamemd
