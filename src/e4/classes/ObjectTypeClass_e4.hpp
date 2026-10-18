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
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    void* uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    SHPStruct* nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    char NeedsSaveOrLink[4];  // 0x20
    char __pad_24[4];  // 0x24
    char ChargerTurrets_0x12[4];  // 0x28
    char ChargerBarrels_0x12[4];  // 0x2C
    char __pad_30[1];  // 0x30
    unsigned char u32_31;  // 0x31
    char __pad_32[4];  // 0x32
    unsigned char __pad_036;  // 0x36
    char __pad_37[5];  // 0x37
    char zero_3C[1];  // 0x3C
    char UINameLabel[32];  // 0x3D
    unsigned char __pad_05D;  // 0x5D
    char __pad_5E[2];  // 0x5E
    void * UIName;  // 0x60
    char Name[49];  // 0x64
    char tail_95[3];  // 0x95
    char u32_98[3];  // 0x98
    unsigned char unused_9B;  // 0x9B
    void* Armor;  // 0x9C
    void* Strength_d;  // 0xA0
    SHPStruct* Image_d;  // 0xA4
    bool ImageAllocated;  // 0xA8
    char __pad_0A9[3];  // 0xA9
    SHPStruct* AlphaImage;  // 0xAC
    WaveClass* MainVoxel;  // 0xB0
    void* TurretVoxel_d;  // 0xB4
    WaveClass* BarrelVoxel_d;  // 0xB8
    char ChargerTurrets[72];  // 0xBC
    char ChargerBarrels[72];  // 0x104
    bool NoSpawnAlt_d;  // 0x14C
    unsigned char __pad_14D;  // 0x14D
    char __pad_14E[10];  // 0x14E
    unsigned int u32_158;  // 0x158
    char __pad_15C[140];  // 0x15C
    char NoSpawnAlt_2[1];  // 0x1E8
    char align_1E9[3];  // 0x1E9
    int MaxDimension;  // 0x1EC
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    char ImageFile_0x19[25];  // 0x1F8
    bool AlternateArcticArt_d;  // 0x211
    bool ArcticArtInUse_d;  // 0x212
    char AlphaImageFile[25];  // 0x213
    bool Theater_d;  // 0x22C
    bool Crushable_d;  // 0x22D
    bool Bombable_d;  // 0x22E
    bool RadarInvisible_d;  // 0x22F
    bool Selectable_d;  // 0x230
    bool LegalTarget_d;  // 0x231
    bool Insignificant_d;  // 0x232
    bool Immune_d;  // 0x233
    bool IsLogic_d;  // 0x234
    bool AllowCellContent_d;  // 0x235
    bool Voxel_d;  // 0x236
    bool NewTheater_d;  // 0x237
    bool HasRadialIndicator_d;  // 0x238
    bool IgnoresFirestorm_d;  // 0x239
    bool UseLineTrail_d;  // 0x23A
    char LineTrailColor_d[3];  // 0x23B
    unsigned short __pad_23E;  // 0x23E
    int LineTrailColor_2;  // 0x240
    int VoxelCaches[20];  // 0x244
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * Load2DArt(void *a1 = 0);
    BOOL loadTypeMember_5717AE0();
    BulletTypeClass * FindOrCreate(ObjectClass * Source);
    ObjectTypeClass * Destru_vt08(char a2);
    SHPStruct * * SelectArtOrAlt();
    SomeVoxelCache * * Destruct(void *a1 = 0);
    char ReadBool(INIClass * Block, INIClass * aP2, int a4);
    char ReadBool2(INIClass * Block, INIClass * aP2, short * a4);
    char ReadString(INIClass * Block, INIClass * aP2, unsigned char * a4);
    char ReadTypeListINI(unsigned char * Block, char * a2, ObjectTypeClass * aP3);
    int ConstructFull(char *aP1);
    int CreateInstance(int aP1, int aP2, void *a3 = 0);
    int DeserializeArrays();
    int FindByName(void *a1 = 0);
    int FreeLoaderBuffer();
    static int LoadCleanup(ObjectTypeClass *aP0, int aP1);  // G57w10-S raw 0x005F9720 IUnknown 占位清除
    static int LoadExtras(CCINIClass * aP0, void * _38C, unsigned char *** a2);  // G57w11: double→void*（__userpurge st0 伪影；raw 调用侧 0x41cc3b/0x5240c4 传 ini 指针）
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
    unsigned int * CheckFlag(int aP1);
    BulletTypeClass * Construct(int aP1, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    unsigned int * Copy(unsigned int * a0, ObjectTypeClass * aP1);
    unsigned int * InitTripleTen(unsigned int * a1);
    unsigned int * loadTypeMember_5717C00(unsigned int * a2);
    unsigned int * vt_entry_7C(unsigned int * a1);
    void CleanupWeapons();
    void ReleaseWaveAndString(void *a1);
    int SetRTTI71(void *a1 = 0);
    void UnloadPipsSHP();
    void* LoadFromINI(uint8_t ***aP1, void *a2 = 0);
    ObjectTypeClass * Destru_vt08(void * Block, char a2);
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
};

} // namespace gamemd
