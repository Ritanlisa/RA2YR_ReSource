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
    int DamageLevels;  // 0x12
    bool IsAllocated;  // 0x13
    bool abstractFlags;  // 0x14
    bool Tiberium;  // 0x15
    bool Crate;  // 0x16
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
    bool q02B;  // 0x2B
    bool IsRubble;  // 0x32
    unsigned char q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned char UINameLabel;  // 0x3D
    char q040[4];  // 0x40
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
    unsigned int Armor;  // 0x9C
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
    unsigned int q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q138;  // 0x138
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    void* q158;  // 0x158
    void * q164;  // 0x164
    char q168;  // 0x168
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    char ImageFile;  // 0x1F8
    bool AlternateArcticArt;  // 0x1F9
    bool Theater;  // 0x1FC
    bool Crushable;  // 0x1FD
    bool Bombable;  // 0x1FE
    bool RadarInvisible;  // 0x1FF
    bool Selectable;  // 0x200
    bool LegalTarget;  // 0x201
    bool Insignificant;  // 0x202
    bool Immune;  // 0x203
    bool Voxel;  // 0x206
    bool NewTheater;  // 0x207
    bool HasRadialIndicator;  // 0x208
    bool IgnoresFirestorm;  // 0x209
    bool UseLineTrail;  // 0x20A
    char LineTrailColor[4];  // 0x20C
    unsigned char AlphaImageFile;  // 0x213
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches[80];  // 0x244
    unsigned char q258;  // 0x258
    char q264[4];  // 0x264
    SomeVoxelCache* q26C;  // 0x26C
    unsigned int q280;  // 0x280
    char LandType[4];  // 0x294
    AnimTypeClass* CellAnim;  // 0x298
    int q2A0;  // 0x2A0
    bool Wall;  // 0x2A4
    bool NoUseTileLandType;  // 0x2A8
    bool Explodes;  // 0x2AC
    Color* q2B4;  // 0x2B4
// --- flat members (END) ---
    AnimTypeClass * * GetCategory();
    AnimTypeClass * * LoadFromINI(unsigned char *** aP1, void *a2);
    OverlayClass * GetDamage(int a2);
    OverlayTypeClass * ddtor(char a2);
    ScenarioClass * * SaveLoad_Prefix(int a1, int a2);
    bool GetType(IUnknown * aP2, int a3);
    int * GetTile(int a1);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetRadarColor(int a2, unsigned int a3);
    int GetTypeIdentifier();
    int LookupByName();
    int PowerDrainUpdate(int * a2);
    int ReadINIString(uint8_t * a2, uint8_t * a3, unsigned int a4);
    int   SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2);
    unsigned int *  Construct(char *aP1);
    OverlayTypeClass(char * aP1);  // G42.41j truth 0x5FE250
    unsigned int * vt_entry_6C(unsigned int * a0, OverlayTypeClass * aP1);
    void GetLandType(unsigned int * a2, int * a3, unsigned int a4);
};

} // namespace gamemd
