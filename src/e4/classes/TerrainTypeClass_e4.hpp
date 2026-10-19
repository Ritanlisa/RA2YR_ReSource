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
    void* ptr_0;  // 0x0
    void* ptr_4;  // 0x4
    void* ptr_8;  // 0x8
    void* ptr_C;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    char __pad_24[1];  // 0x24
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
    char Armor[4];  // 0x9C
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
    char ArcticArtInUse_d;  // 0x212
    char AlphaImageFile[25];  // 0x213
    unsigned char __pad_22C;  // 0x22C
    char Crushable[1];  // 0x22D
    char Bombable[1];  // 0x22E
    char RadarInvisible[1];  // 0x22F
    char Selectable;  // 0x230
    char LegalTarget;  // 0x231
    char Insignificant;  // 0x232
    char __pad_233;  // 0x233
    char IsLogic[1];  // 0x234
    char AllowCellContent[1];  // 0x235
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
    Color* Foundation;  // 0x298
    char RadarColor[3];  // 0x29C
    unsigned char __pad_29F;  // 0x29F
    float AnimationRate;  // 0x2A0
    int AnimationProbability;  // 0x2A4
    void* AnimationProbability_d;  // 0x2A8
    int SnowOccupationBits;  // 0x2AC
    bool WaterBound;  // 0x2B0
    bool SpawnsTiberium_d;  // 0x2B1
    bool IsFlammable_d;  // 0x2B2
    bool IsAnimated_d;  // 0x2B3
    char IsVeinhole[1];  // 0x2B4
    unsigned char __pad_2B5;  // 0x2B5
    char __pad_2B6[2];  // 0x2B6
    void * q2B8;  // 0x2B8
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
    unsigned int * Construct(int a2, unsigned char a3, unsigned char a4, MapClass * aP4, char a6, void *a6_2, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    unsigned int *   GetWidth(int * a2, void *a2_1 = 0);
    TerrainTypeClass(char *Source, int aP1, int aP3, int a2, int a3, int a4, int a5, int a6, int a7, int aP2, int a1, int aP0);
    unsigned int * Construct(int a2, unsigned char a3, unsigned char a4, MapClass * aP4, char a6, void *a6_2);
    int LoadFromINI(uint8_t ***a2, int aP1, int aP3, int a3, int a4, int a5, int a6, int a7, int aP2, int a1, int aP0, void * aAnimationproba, void * aAnimationrate, void * aIsanimated, void * aIsflammable, void * aRadarcolor, void * aSnowoccupation, void * aSpawnstiberium, void * aTemperateoccup, void * aWaterbound);
};

} // namespace gamemd
