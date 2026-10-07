// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SHPStruct;  // fix_fwd_type_supply
struct Color;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct OverlayTypeClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct SomeVoxelCache;  // fix_fwd_type_supply
struct BulletTypeClass;  // fix_fwd_type_supply

struct ObjectTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    int Strength;  // 0x12
    bool IsAllocated;  // 0x13
    bool abstractFlags;  // 0x14
    unsigned char q015;  // 0x15
    SHPStruct* Image;  // 0x16
    SHPStruct* nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    char NeedsSaveOrLink[4];  // 0x20
    char BarrelVoxel[4];  // 0x24
    bool q02B;  // 0x2B
    unsigned char q031;  // 0x31
    char TurretVoxel[4];  // 0x32
    unsigned char q034;  // 0x34
    int u32_38;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned char UINameLabel;  // 0x3D
    char q040[4];  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int u32_50;  // 0x50
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
    unsigned int u32_88;  // 0x88
    void* q08C;  // 0x8C
    Color* q098;  // 0x98
    unsigned char __pad_98[69];  // 0x98
    char Armor[4];  // 0x9C
    int q0A0;  // 0xA0
    SHPStruct* q0A4;  // 0xA4
    bool ImageAllocated;  // 0xA8
    SHPStruct* AlphaImage;  // 0xAC
    char MainVoxel[4];  // 0xB0
    char q0B4[4];  // 0xB4
    char ChargerTurrets[72];  // 0xBC
    CampaignClass* q0C4;  // 0xC4
    unsigned int u32_C8;  // 0xC8
    unsigned char q0D0;  // 0xD0
    unsigned int u32_D4;  // 0xD4
    void* q0D8;  // 0xD8
    void* q0E0;  // 0xE0
    unsigned int u32_E4;  // 0xE4
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
    void * q164;  // 0x164
    char q168;  // 0x168
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
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
    char AlphaImageFile;  // 0x213
    int LineTrailColorDecrement;  // 0x240
    unsigned int VoxelCaches_4;  // 0x244
    SomeVoxelCache* q258;  // 0x258
    unsigned int q264;  // 0x264
    SomeVoxelCache* q26C;  // 0x26C
    SomeVoxelCache* q280;  // 0x280
    unsigned int VoxelCaches;
    unsigned int __pad_14D;
    unsigned int ParticleSystemTypeClass_field_0x0;
    unsigned int ParticleSystemTypeClass_field_0x4;
    unsigned int ParticleSystemTypeClass_field_0x8;
    unsigned int SpawnCount;
    unsigned int ImageFile;
    unsigned int *__pad_0;
    void* TechnoTypeClass;  // 0x0 (no offset truth)
// --- flat members (END) ---
    AbstractClass * * Load2DArt();
    BOOL loadTypeMember_5717AE0();
    BulletTypeClass * FindOrCreate(ObjectClass * Source);
    ObjectTypeClass * Destru_vt08(char a2);
    SHPStruct * * SelectArtOrAlt();
    SomeVoxelCache * * Destruct();
    char ReadBool(INIClass * Block, INIClass * aP2, int a4);
    char ReadBool2(INIClass * Block, INIClass * aP2, short * a4);
    char ReadString(INIClass * Block, INIClass * aP2, unsigned char * a4);
    char ReadTypeListINI(unsigned char * Block, char * a2, ObjectTypeClass * aP3);
    int ConstructFull(char *aP1);
    int CreateInstance(int aP1, int aP2);
    int DeserializeArrays();
    int FindByName();
    int FreeLoaderBuffer();
    static int LoadCleanup(ObjectTypeClass *aP1, int a2);  // G57w10-S raw 0x005F9720 IUnknown 占位清除
    int LoadExtras(CCINIClass * aP0, void * _38C, unsigned char *** a2);  // G57w11: double→void*（__userpurge st0 伪影；raw 调用侧 0x41cc3b/0x5240c4 传 ini 指针）
    int ReadBool3(INIClass * aP1, unsigned char * a2, void * a4);
    int ReadDestroyAnim();
    int ReadDouble(unsigned char * a2, unsigned char * a3, int a4);
    int ReadDouble2(INIClass * aP1, unsigned char * a2, void * a4);
    int ReadInt(unsigned char * a2, unsigned char * a3, int a4);
    int ReadPrerequisite(unsigned char * a2, unsigned char * a3, int a4);
    int loadTypeMember_473980();
    int loadTypeMember_476FC0(CCINIClass * aP1, unsigned char * a2, CCINIClass * aP3);
    int loadTypeMember_48DFF0();
    int loadTypeMember_5474940(CCINIClass * aP1, unsigned char * a2, int a4);
    int loadTypeMember_54749E0(CCINIClass * aP1, unsigned char * a2, unsigned int a4);
    int loadTypeMember_5474E40(INIClass * aP1, unsigned char * a2, int a4);
    int loadTypeMember_5477590(CCINIClass * aP1, unsigned char * a2, CCINIClass * aP3);
    int loadTypeMember_5717820();
    int loadTypeMember_57179D0(WeaponTypeClass * aP1, CCINIClass * aP2);
    int loadTypeMember_5717A30(int a2);
    int loadTypeMember_5717A50(int a2);
    int loadTypeMember_5717A70();
    int loadTypeMember_5717A80(int a2);
    int loadTypeMember_5717AA0();
    int loadTypeMember_5717AB0(int a2);
    int loadTypeMember_5717AD0();
    unsigned char ** ReadSoundList(unsigned char ** a2, unsigned char * a3, unsigned char * a4, unsigned char ** a5);
    unsigned int * CheckFlag(int aP1);  // 0x717BF0 IDA truth: _DWORD* __thiscall(this, int); old ObjectTypeClass* param was double-counted receiver (G57e1 B3)
    BulletTypeClass * Construct(int aP1);
    unsigned int * Copy(unsigned int * a0, ObjectTypeClass * aP1);
    unsigned int * InitTripleTen(unsigned int * a1);
    unsigned int * loadTypeMember_5717C00(unsigned int * a2);
    unsigned int * vt_entry_7C(unsigned int * a1);
    void CleanupWeapons();
    void ReleaseWaveAndString(void *a1);
    int SetRTTI71();
    void UnloadPipsSHP();
    void* LoadFromINI(uint8_t ***aP1);
    ObjectTypeClass * Destru_vt08(void * Block, char a2);
};

} // namespace gamemd
