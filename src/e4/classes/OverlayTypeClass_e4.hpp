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
    void * ptr_0;  // 0x0
    void* ptr_4;  // 0x4
    void* ptr_8;  // 0x8
    void* ptr_C;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    int NeedsSaveOrLink;  // 0x20
    char __pad_24[4];  // 0x24
    char ChargerTurrets_0x12[4];  // 0x28
    char ChargerBarrels_0x12[4];  // 0x2C
    char __pad_30[1];  // 0x30
    char __pad_31[1];  // 0x31
    char __pad_32[1];  // 0x32
    char __pad_33[3];  // 0x33
    unsigned char __pad_036;  // 0x36
    char __pad_37[5];  // 0x37
    char zero_3C;  // 0x3C
    char UINameLabel[32];  // 0x3D
    unsigned char __pad_05D;  // 0x5D
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
    unsigned char __pad_237;  // 0x237
    char HasRadialIndicator[1];  // 0x238
    char IgnoresFirestorm[1];  // 0x239
    char UseLineTrail[1];  // 0x23A
    char LineTrailColor[3];  // 0x23B
    char align_23E[2];  // 0x23E
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches[80];  // 0x244
    void* LandType;  // 0x294
    AnimTypeClass* CellAnim;  // 0x298
    int CellAnim_d;  // 0x29C
    void* Strength_2;  // 0x2A0
    bool Strength_d;  // 0x2A4
    bool Tiberium_d;  // 0x2A5
    bool Crate_d;  // 0x2A6
    bool CrateTrigger_d;  // 0x2A7
    char NoUseTileLandType[1];  // 0x2A8
    bool Tiberium_2;  // 0x2A9
    bool Crate_2;  // 0x2AA
    bool CrateTrigger_2;  // 0x2AB
    char Explodes[1];  // 0x2AC
    bool IsVeinholeMonster_d;  // 0x2AD
    bool IsVeins_d;  // 0x2AE
    bool DrawFlat_d;  // 0x2AF
    char IsRubble[1];  // 0x2B0
    bool ChainReaction_d;  // 0x2B1
    char Overrides_d[3];  // 0x2B2
    unsigned char __tail_2B5[3];  // 0x2B5
// --- flat members (BEGIN) ---
// --- flat members (END) ---
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
};

} // namespace gamemd
