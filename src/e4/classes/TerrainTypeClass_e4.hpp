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
    unsigned char q015;  // 0x15
    bool q017;  // 0x17
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    unsigned int alignmentPadding;  // 0x21
    unsigned char q024;  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned int q02C;  // 0x2C
    unsigned char q031;  // 0x31
    unsigned char q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned char UINameLabel;  // 0x3D
    unsigned int q040;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void * UIName;  // 0x60
    unsigned char Name;  // 0x64
    unsigned int q068;  // 0x68
    ObjectClass* q06C;  // 0x6C
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int q080;  // 0x80
    void* q08C;  // 0x8C
    void* q098;  // 0x98
    char Armor[4];  // 0x9C
    int Strength;  // 0xA0
    void * Image;  // 0xA4
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
    ObjectClass* q0E4;  // 0xE4
    void* q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    OverlayTypeClass* q0F8;  // 0xF8
    unsigned int q100;  // 0x100
    unsigned int q10C;  // 0x10C
    unsigned int q114;  // 0x114
    unsigned int q128;  // 0x128
    unsigned int q130;  // 0x130
    unsigned int q138;  // 0x138
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    void* q158;  // 0x158
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    unsigned char ImageFile;  // 0x1F8
    bool AlternateArcticArt;  // 0x1F9
    bool Theater;  // 0x1FC
    bool Crushable;  // 0x1FD
    bool Bombable;  // 0x1FE
    bool RadarInvisible;  // 0x1FF
    bool Immune;  // 0x203
    bool Voxel;  // 0x206
    bool NewTheater;  // 0x207
    bool HasRadialIndicator;  // 0x208
    bool IgnoresFirestorm;  // 0x209
    bool UseLineTrail;  // 0x20A
    char LineTrailColor[4];  // 0x20C
    unsigned char AlphaImageFile;  // 0x213
    char Selectable;  // 0x230
    char LegalTarget;  // 0x231
    char Insignificant;  // 0x232
    int LineTrailColorDecrement;  // 0x240
    unsigned char VoxelCaches;  // 0x244
    unsigned char q258;  // 0x258
    unsigned int q264;  // 0x264
    SomeVoxelCache* q26C;  // 0x26C
    unsigned int q280;  // 0x280
    int ArrayIndex;  // 0x294
    unsigned int Foundation;  // 0x298
    int RadarColor;  // 0x29C
    float AnimationRate;  // 0x2A0
    int AnimationProbability;  // 0x2A4
    int TemperateOccupationBits;  // 0x2A8
    bool SnowOccupationBits;  // 0x2AC
    bool SpawnsTiberium;  // 0x2AD
    bool IsFlammable;  // 0x2AE
    bool IsAnimated;  // 0x2AF
    bool WaterBound;  // 0x2B0
    void* IsVeinhole;  // 0x2B4
    unsigned int FoundationData;
    unsigned int u32_2BC;
    unsigned int u32_2C8;
    unsigned int u32_2F4;
    unsigned int *__pad_0;
// --- flat members (END) ---
    TerrainClass * GetTileIndex(int a2, void *a2_2, void *a3, void *a4);
    TerrainTypeClass * * FindOrCreate(char *Source);
    TerrainTypeClass * ddtor(void * a2, char a3);
    bool  GetHeight(TerrainClass * aP2, int a3);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTileData(int a2, void * a3, signed int * a4, unsigned int * a5, unsigned short * a6, unsigned int * a7);
    int GetTypeIdentifier();
    int LoadFromINI(unsigned __int8 ***a2, int aP1, int aP3, int a3, int a4, int a5, int a6, int a7, int aP2, int a1, int aP0);
    int PowerDrainUpdate(int * a2);
    int  SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2);
    unsigned int * Construct(char *aP1);
    unsigned int *  GetWidth(unsigned int * a1, int * a2);
    TerrainTypeClass(char *Source, int aP1, int aP3, int a2, int a3, int a4, int a5, int a6, int a7, int aP2, int a1, int aP0);
    unsigned int * Construct(int a2, unsigned char a3, unsigned char a4, MapClass * aP4, char a6, void *a6_2);
    int LoadFromINI(unsigned __int8 ***a2, int aP1, int aP3, int a3, int a4, int a5, int a6, int a7, int aP2, int a1, int aP0, void * aAnimationproba, void * aAnimationrate, void * aIsanimated, void * aIsflammable, void * aRadarcolor, void * aSnowoccupation, void * aSpawnstiberium, void * aTemperateoccup, void * aWaterbound);
};

} // namespace gamemd
