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
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    int SlowdownDistance;  // 0x10
    int ParticleSystemTypeClass_field_29C;  // 0x14
    int ParticleSystemTypeClass_field_2A0;  // 0x18
    float Velocity;  // 0x1C
    char TurretVoxel[4];  // 0x20
    unsigned int __pad_024;  // 0x24
    char ChargerTurrets_0x12[4];  // 0x28
    char ChargerBarrels_0x12[4];  // 0x2C
    int NoSpawnAlt;  // 0x30
    unsigned char __pad_034;  // 0x34
    char __pad_35[1];  // 0x35
    char BarrelVoxel[4];  // 0x36
    unsigned char __pad_03A;  // 0x3A
    char __pad_3B[2];  // 0x3B
    unsigned char UINameLabel;  // 0x3D
    char __pad_3E[3];  // 0x3E
    unsigned char __pad_041;  // 0x41
    char __pad_42[30];  // 0x42
    void * UIName;  // 0x60
    unsigned int Name;  // 0x64
    unsigned char __pad_068;  // 0x68
    char __pad_69[44];  // 0x69
    unsigned char tail_95;  // 0x95
    char __pad_96[3];  // 0x96
    unsigned char __pad_099;  // 0x99
    char __pad_9A[1];  // 0x9A
    unsigned char unused_9B;  // 0x9B
    char Armor[4];  // 0x9C
    int Strength;  // 0xA0
    unsigned char __pad_0A4;  // 0xA4
    char __pad_A5[7];  // 0xA5
    void * AlphaImage;  // 0xAC
    unsigned int MainVoxel;  // 0xB0
    unsigned char __pad_0B4;  // 0xB4
    char __pad_B5[308];  // 0xB5
    char align_1E9_3_[4];  // 0x1E9
    char __pad_1ED[3];  // 0x1ED
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    unsigned int ImageFile_0x19;  // 0x1F8
    int Theater;  // 0x1FC
    int Selectable;  // 0x200
    int IsLogic;  // 0x204
    int HasRadialIndicator;  // 0x208
    char LineTrailColor[4];  // 0x20C
    unsigned char __pad_210;  // 0x210
    char __pad_211[2];  // 0x211
    unsigned char AlphaImageFile;  // 0x213
    char __pad_214[3];  // 0x214
    unsigned char __pad_217;  // 0x217
    char __pad_218[38];  // 0x218
    char align_23E_2_[4];  // 0x23E
    char __pad_242[2];  // 0x242
    char VoxelCaches_4[4];  // 0x244
    unsigned char __pad_248;  // 0x248
    char __pad_249[75];  // 0x249
    int q294;  // 0x294
    unsigned char q298[4];  // 0x298
    int q29C;  // 0x29C
    int q2A0;  // 0x2A0
    int q2A4;  // 0x2A4
    int q2A8;  // 0x2A8
    int q2AC;  // 0x2AC
    int DamageDelay;  // 0x2B0
    unsigned int __pad_2B4;  // 0x2B4
    int q2B8;  // 0x2B8
    void * ParticleSystemTypeClass_field_2C0;  // 0x2BC
    int StartScale;  // 0x2C0
    int ParticleSystemTypeClass_field_2C8;  // 0x2C4
    int Beam;  // 0x2C8
    int q2CC;  // 0x2CC
    IUnknown * q2D0;  // 0x2D0
    int ParticleSystemTypeClass_field_bool_2D4;  // 0x2D4
    char __pad_2D8[1];  // 0x2D8
    unsigned char __pad_2D9;  // 0x2D9
    char __pad_2DA[10];  // 0x2DA
    int q2E4;  // 0x2E4
    IUnknown * q2E8;  // 0x2E8
    char __pad_2EC[20];  // 0x2EC
    int q300;  // 0x300
    char __pad_304[4];  // 0x304
    AnimTypeClass * q308;  // 0x308
    unsigned char u8_30C;  // 0x30C
    char __pad_30D[3];  // 0x30D
// --- flat members (BEGIN) ---
// --- flat members (END) ---
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
};

} // namespace gamemd
