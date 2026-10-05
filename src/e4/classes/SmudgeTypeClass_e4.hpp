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
struct SmudgeClass;  // fix_fwd_type_supply

struct SmudgeTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    unsigned char q015;  // 0x15
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
    unsigned int q044;  // 0x44
    unsigned int q048;  // 0x48
    unsigned int q04C;  // 0x4C
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
    unsigned int q12C;  // 0x12C
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
    char q264[4];  // 0x264
    SomeVoxelCache* q26C;  // 0x26C
    unsigned int q280;  // 0x280
    int ArrayIndex;  // 0x294
    int Width;  // 0x298
    bool Height;  // 0x29C
    bool Burn;  // 0x29D
    bool q2A0;  // 0x2A0
    bool q2A1;  // 0x2A1
// --- flat members (END) ---
    SmudgeTypeClass(char *Source, int a2, int a3, int a4, int a5, int a6, int aP1, int aP0, int aP2, int a1);
    SmudgeClass * GetFlag(int a2);
    SmudgeTypeClass *  ddtor(void * a2, char a3);
    bool GetType(short * a2, int a3);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetSize(uint8_t *** aP1);
    int GetTypeIdentifier();
    int  LoadTypeData(ObjectTypeClass * aP0, int aP1);
    int PowerDrainUpdate(int * a2);
    int SaveToINI(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2);
    void vt_entry_A0(int * a2, int * a3, int a4, int a5, short * a6);
    unsigned int Crater;  // 0x1650
    unsigned int q_22F;  // +0x22F flat supply (three-ban reform)
};

} // namespace gamemd
