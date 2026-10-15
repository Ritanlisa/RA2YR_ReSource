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
    unsigned char alignmentPadding_3;  // 0x11
    char u32_3;  // 0x3
    int Strength;  // 0x12
    bool IsAllocated;  // 0x13
    bool abstractFlags;  // 0x14
    SHPStruct* Image;  // 0x16
    SHPStruct* nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    char NeedsSaveOrLink[4];  // 0x20
    char BarrelVoxel[4];  // 0x24
    char ChargerTurrets_0x12[4];  // 0x28
    char ChargerBarrels_0x12[4];  // 0x2C
    bool NoSpawnAlt;  // 0x30
    char TurretVoxel[4];  // 0x32
    void* zero_3C;  // 0x3C
    unsigned char UINameLabel;  // 0x3D
    void * UIName;  // 0x60
    unsigned char Name;  // 0x64
    unsigned int tail_95;  // 0x95
    unsigned char unused_9B;  // 0x9B
    char Armor[4];  // 0x9C
    int Strength_d;  // 0xA0
    SHPStruct* Image_d;  // 0xA4
    bool ImageAllocated;  // 0xA8
    SHPStruct* AlphaImage;  // 0xAC
    char MainVoxel[4];  // 0xB0
    char TurretVoxel_d[4];  // 0xB4
    char BarrelVoxel_d[4];  // 0xB8
    char ChargerTurrets[72];  // 0xBC
    char ChargerBarrels[72];  // 0x104
    bool NoSpawnAlt_d;  // 0x14C
    ConnectionPointClass* NoSpawnAlt_2;  // 0x1E8
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
    bool AlternateArcticArt_d;  // 0x211
    bool ArcticArtInUse_d;  // 0x212
    char AlphaImageFile;  // 0x213
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
    int LineTrailColor_2;  // 0x240
    char VoxelCaches_4[80];  // 0x244
// --- flat members (END) ---
    void* TechnoTypeClass;  // 0x0 (no offset truth)
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
    int VoxelCaches[20];  // 0x244 (ml)
    unsigned int q0400;  // 0x400 (offset-truth)
    unsigned char q0401;  // 0x401 (offset-truth)
    unsigned char q0402;  // 0x402 (offset-truth)
    unsigned int q0404;  // 0x404 (offset-truth)
    unsigned int u32_384;  // 0x384 (offset-truth)
    unsigned char u32_385;  // 0x385 (offset-truth)
    unsigned char u32_386;  // 0x386 (offset-truth)
    unsigned char u32_387;  // 0x387 (offset-truth)
    unsigned char u32_389;  // 0x389 (offset-truth)
    unsigned char u32_D41;  // 0xD41 (offset-truth)

    int LineTrailColorDecrement;  // X10 supply (member_lookup)
    unsigned char __pad_099;  // X10 supply (csp_canon_members)
    bool q029;  // X10 supply (member_lookup)
    bool q02B;  // X10 supply (member_lookup)
    int q056;  // X10 supply (member_lookup)
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass* q07C;  // X10 supply (member_lookup)
#else
    void* q07C;  // X10 supply (member_lookup)  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
    IUnknown* q0CC;  // X10 supply (member_lookup)
    SomeVoxelCache* q254;  // X10 supply (member_lookup)
    unsigned char q264[4];  /* VectorClass */  // X10 supply (member_lookup)
    SomeVoxelCache* q26C;  // X10 supply (member_lookup)
    SomeVoxelCache* q270;  // X10 supply (member_lookup)
    SomeVoxelCache* q280;  // X10 supply (member_lookup)
    SomeVoxelCache* q290;  // X10 supply (member_lookup)
    unsigned char q408;  // X10 supply (member_lookup)
    unsigned int q710;  // X10 supply (member_lookup)
    unsigned int u32_158;  // X10 supply (member_lookup)
    unsigned int u32_22B;  // X10 supply (member_lookup)
    unsigned int u32_23C;  // X10 supply (member_lookup)
    unsigned int u32_23D;  // X10 supply (member_lookup)
    unsigned int u32_248;  // X10 supply (member_lookup)
    unsigned int u32_24C;  // X10 supply (member_lookup)
    unsigned int u32_250;  // X10 supply (member_lookup)
    unsigned int u32_258;  // X10 supply (member_lookup)
    unsigned int u32_25C;  // X10 supply (member_lookup)
    unsigned int u32_260;  // X10 supply (member_lookup)
    unsigned int u32_268;  // X10 supply (member_lookup)
    unsigned int u32_274;  // X10 supply (member_lookup)
    unsigned int u32_278;  // X10 supply (member_lookup)
    unsigned int u32_27C;  // X10 supply (member_lookup)
    unsigned int u32_284;  // X10 supply (member_lookup)
    unsigned int u32_288;  // X10 supply (member_lookup)
    unsigned int u32_28C;  // X10 supply (member_lookup)
    char u32_2D;  // X10 supply (member_lookup)
    char u32_2E;  // X10 supply (member_lookup)
    int u32_2F;  // X10 supply (member_lookup)
    unsigned int u32_31;  // X10 supply (member_lookup)
    int u32_6F0;  // X10 supply (member_lookup)
    unsigned int u32_840;  // X10 supply (member_lookup)
    unsigned int u32_90;  // X10 supply (member_lookup)
    unsigned int u32_92;  // X10 supply (member_lookup)
    unsigned int u32_93;  // X10 supply (member_lookup)
    unsigned int u32_96;  // X10 supply (member_lookup)
    unsigned int u32_97;  // X10 supply (member_lookup)
    unsigned char u32_98[4];  /* TypeList */  // X10 supply (member_lookup)
    unsigned int u32_9A;  // X10 supply (member_lookup)
    unsigned int u32_9D;  // X10 supply (member_lookup)
    unsigned int u32_9F;  // X10 supply (member_lookup)
    unsigned int u32_A1;  // X10 supply (member_lookup)
    unsigned int u32_A2;  // X10 supply (member_lookup)
    char u32_C0;  // X10 supply (member_lookup)
    unsigned int u32_DF0;  // X10 supply (member_lookup)
    char u8_27;  // X10 supply (member_lookup)
    char u8_7B;  // X10 supply (member_lookup)
    char u8_7D;  // X10 supply (member_lookup)
    char u8_7E;  // X10 supply (member_lookup)
    char u8_9;  // X10 supply (member_lookup)
    char u8_91;  // X10 supply (member_lookup)
    int u8_C8E;  // X10 supply (member_lookup)
    uint8_t u8_D;  // X10 supply (member_lookup)
    unsigned int u32_E00;  // 0xE00
    unsigned int u32_D2E;  // 0xD2E
};

} // namespace gamemd
