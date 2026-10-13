// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct OverlayTypeClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct SomeVoxelCache;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct Color;  // fix_fwd_type_supply

struct ParticleSystemTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int SlowdownDistance;  // 0x10
    unsigned char alignmentPadding_3;  // 0x11
    int SpawnCount;  // 0x12
    bool IsAllocated;  // 0x13
    int ParticleSystemTypeClass_field_29C;  // 0x14
    int ParticleSystemTypeClass_field_2A0;  // 0x18
    float Velocity;  // 0x1C
    char TurretVoxel[4];  // 0x20
    char ChargerTurrets_0x12[4];  // 0x28
    char ChargerBarrels_0x12[4];  // 0x2C
    bool NoSpawnAlt;  // 0x30
    char BarrelVoxel[4];  // 0x36
    unsigned int UINameLabel;  // 0x3D
    void * UIName;  // 0x60
    unsigned int Name;  // 0x64
    unsigned int tail_95;  // 0x95
    unsigned char unused_9B;  // 0x9B
    char Armor[4];  // 0x9C
    int Strength;  // 0xA0
    void * AlphaImage;  // 0xAC
    unsigned int MainVoxel;  // 0xB0
    int MaxDimension;  // 0x1EC
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    char ImageFile_0x19;  // 0x1F8
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
    unsigned int AlphaImageFile;  // 0x213
    int LineTrailColorDecrement;  // 0x240
    char VoxelCaches_4[4];  // 0x244
    int DamageDelay;  // 0x2B0
    int ParticleSystemTypeClass_field_2C0;  // 0x2BC
    int StartScale;  // 0x2C0
    int ParticleSystemTypeClass_field_2C8;  // 0x2C4
    bool Beam;  // 0x2C8
    bool OneFrame;  // 0x2C9
    bool ParticleSystemTypeClass_field_bool_2D4;  // 0x2D4
    unsigned char padding_2D5_3;  // 0x2D5
// --- flat members (END) ---
    int ParticleSystemTypeClass_field_0x2D0;  // 0x2D0 (G57W14E1 til supply)
    int ParticleSystemTypeClass_field_0x2E8;  // 0x2E8 (G57W14E1 til supply)
    char __pad_304[4];  // 0x304 (G57W14E1 til supply)
    int ParticleSystemTypeClass_field_0x308;  // 0x308 (G57W14E1 til supply)
    void ** ddtor(char a2);
    char Stub(int a1, int a2);
    float * ReadXYZFromINI(float * a2, uint8_t * a3, uint8_t * a4, float * a5);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2);
    int StubReturnFalse(int a1);
    void* GetType(unsigned char *** aP1);
    void* PowerDrainUpdate(int * a2);
    ParticleSystemTypeClass * ddtor(void ** Block, char a2);

    unsigned char __pad_2B4;  // X10 supply (csp_canon_members)
    int q294;  // X10 supply (member_lookup)
    unsigned char q298[4];  /* char[4] */  // X10 supply (member_lookup)
    int q29C;  // X10 supply (member_lookup)
    int q2A0;  // X10 supply (member_lookup)
    int q2A4;  // X10 supply (member_lookup)
    int q2A8;  // X10 supply (member_lookup)
    int q2AC;  // X10 supply (member_lookup)
};

} // namespace gamemd
