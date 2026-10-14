// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct SomeVoxelCache;  // fix_fwd_type_supply
struct AnimTypeClass;  // fix_fwd_type_supply
struct Color;  // fix_fwd_type_supply
struct OverlayClass;  // fix_fwd_type_supply
struct ScenarioClass;  // fix_fwd_type_supply

struct OverlayTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    unsigned char alignmentPadding_3;  // 0x11
    int DamageLevels;  // 0x12
    bool IsAllocated;  // 0x13
    bool abstractFlags;  // 0x14
    bool Tiberium;  // 0x15
    bool Crate;  // 0x16
    bool CrateTrigger;  // 0x17
    bool nextArrayIndex;  // 0x18
    bool IsVeinholeMonster;  // 0x19
    bool IsVeins;  // 0x1A
    bool ImageLoaded;  // 0x1B
    bool referenceCount;  // 0x1C
    bool ChainReaction;  // 0x1D
    bool Overrides;  // 0x1E
    bool DrawFlat;  // 0x1F
    bool NeedsSaveOrLink;  // 0x20
    bool IsARock;  // 0x21
    char RadarColor[4];  // 0x24
    char ChargerTurrets_0x12[4];  // 0x28
    char ChargerBarrels_0x12[4];  // 0x2C
    bool NoSpawnAlt;  // 0x30
    bool IsRubble;  // 0x32
    char zero_3C;  // 0x3C
    unsigned char UINameLabel;  // 0x3D
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
    char LandType[4];  // 0x294
    AnimTypeClass* CellAnim;  // 0x298
    int CellAnim_d;  // 0x29C
    int DamageLevels_d;  // 0x2A0
    bool Strength_d;  // 0x2A4
    bool Tiberium_d;  // 0x2A5
    bool Crate_d;  // 0x2A6
    bool CrateTrigger_d;  // 0x2A7
    bool Wall;  // 0x2A8
    bool Tiberium_2;  // 0x2A9
    bool Crate_2;  // 0x2AA
    bool CrateTrigger_2;  // 0x2AB
    bool NoUseTileLandType;  // 0x2AC
    bool IsVeinholeMonster_d;  // 0x2AD
    bool IsVeins_d;  // 0x2AE
    bool DrawFlat_d;  // 0x2AF
    bool Explodes;  // 0x2B0
    bool ChainReaction_d;  // 0x2B1
    char Overrides_d[3];  // 0x2B2
    unsigned char DrawFlat_2;  // 0x2B3
    Color* IsRubble_d;  // 0x2B4
    unsigned char IsARock_d;  // 0x2B5
// --- flat members (END) ---
    unsigned char __tail_2B5[3];  // 0x2B5 (W13A til; ctor zeros 3 bytes, ASM 0x5fe2d8)
    AnimTypeClass * * GetCategory();
    AnimTypeClass * * LoadFromINI(unsigned char *** aP1, void *a2);
    OverlayClass * GetDamage(int a2);
OverlayTypeClass * ddtor(void ** Block, char a2);
    ScenarioClass * * SaveLoad_Prefix(int a1, int a2);
    bool GetType(int16_t *aP2, int a3);  // G57w10-S raw 0x005FE530 IUnknown 占位清除
    int * GetTile(int a1);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetRadarColor(int a2, unsigned int a3);
    int GetTypeIdentifier();
    int LookupByName(void *a1 = 0);
    int PowerDrainUpdate(int * a2);
    int ReadINIString(uint8_t * a2, uint8_t * a3, unsigned int a4, void *a4_1 = 0);
    int   SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2);
    unsigned int *  Construct(char *aP1, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
OverlayTypeClass(ObjectClass * aP1);
    unsigned int * vt_entry_6C(unsigned int * a0, OverlayTypeClass * aP1);
    void GetLandType(unsigned int * a2, int * a3, unsigned int a4);
    int Strength_2;  // 0x2A0 (ml)
    unsigned int u32_2B8;  // 0x2B8 (offset-truth)
    unsigned int u32_2BC;  // 0x2BC (offset-truth)
    unsigned int u32_2C4;  // 0x2C4 (offset-truth)
    unsigned int u32_2C8;  // 0x2C8 (offset-truth)
    unsigned int u32_2CC;  // 0x2CC (offset-truth)
    unsigned int u32_2D4;  // 0x2D4 (offset-truth)
    unsigned int u32_2D8;  // 0x2D8 (offset-truth)
    unsigned int u32_2DC;  // 0x2DC (offset-truth)
    unsigned int u32_2E8;  // 0x2E8 (offset-truth)
    unsigned int u32_2EC;  // 0x2EC (offset-truth)
    unsigned int u32_2F4;  // 0x2F4 (offset-truth)
    unsigned int u32_2F8;  // 0x2F8 (offset-truth)
    unsigned int u32_2FC;  // 0x2FC (offset-truth)
    unsigned int u32_300;  // 0x300 (offset-truth)
    unsigned int u32_304;  // 0x304 (offset-truth)
    unsigned int u32_308;  // 0x308 (offset-truth)
    unsigned char u32_309;  // 0x309 (offset-truth)
    unsigned char u32_30A;  // 0x30A (offset-truth)
    unsigned char u32_30B;  // 0x30B (offset-truth)

    unsigned char q2C0;  // X10 supply (member_lookup)
    unsigned char q2E0;  // X10 supply (member_lookup)
    uint32_t u32_2D0;  // X10 supply (member_lookup)
    unsigned int u32_2E4;  // X10 supply (member_lookup)
    int u32_2F0;  // X10 supply (member_lookup)
    unsigned int u32_30C;  // X10 supply (member_lookup)
};

} // namespace gamemd
