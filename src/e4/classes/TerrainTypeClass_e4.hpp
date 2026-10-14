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
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    unsigned int alignmentPadding;  // 0x21
    bool NoSpawnAlt;  // 0x30
    char zero_3C;  // 0x3C
    unsigned char UINameLabel;  // 0x3D
    void * UIName;  // 0x60
    unsigned char Name;  // 0x64
    char unused_9B;  // 0x9B
    char Armor[4];  // 0x9C
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
    unsigned char ImageFile;  // 0x1F8
    bool AlternateArcticArt;  // 0x1F9
    bool ArcticArtInUse;  // 0x1FA
    char AlphaImageFile_0x19;  // 0x1FB
    bool Theater;  // 0x1FC
    bool Crushable;  // 0x1FD
    bool Bombable;  // 0x1FE
    bool RadarInvisible;  // 0x1FF
    bool Immune;  // 0x203
    bool IsLogic;  // 0x204
    bool AllowCellContent;  // 0x205
    bool Voxel;  // 0x206
    bool NewTheater;  // 0x207
    bool HasRadialIndicator;  // 0x208
    bool IgnoresFirestorm;  // 0x209
    bool UseLineTrail;  // 0x20A
    char LineTrailColor[4];  // 0x20C
    char ArcticArtInUse_d;  // 0x212
    unsigned char AlphaImageFile;  // 0x213
    char Selectable;  // 0x230
    char LegalTarget;  // 0x231
    char Insignificant;  // 0x232
    char Voxel_d;  // 0x236
    int LineTrailColorDecrement;  // 0x240
    unsigned char VoxelCaches;  // 0x244
    int ArrayIndex;  // 0x294
    char Foundation[4];  // 0x298
    int RadarColor;  // 0x29C
    float AnimationRate;  // 0x2A0
    int AnimationProbability;  // 0x2A4
    int AnimationProbability_d;  // 0x2A8
    bool SnowOccupationBits;  // 0x2AC
    bool SpawnsTiberium;  // 0x2AD
    bool IsFlammable;  // 0x2AE
    bool IsAnimated;  // 0x2AF
    bool WaterBound;  // 0x2B0
    bool SpawnsTiberium_d;  // 0x2B1
    bool IsFlammable_d;  // 0x2B2
    bool IsAnimated_d;  // 0x2B3
    CellStruct* IsVeinhole;  // 0x2B4
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
    void *q2B8;  // 0x2B8 (ml)
    unsigned int *q000;  // 0x0 (offset-truth)
};

} // namespace gamemd
