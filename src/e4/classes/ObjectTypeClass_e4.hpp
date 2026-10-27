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
    unsigned char vfptr;  // 0x0
    unsigned char u8_1;  // 0x1
    char __pad_2[2];  // 0x2
    int vfptr1;  // 0x4
    int vfptr2;  // 0x8
    unsigned char vfptr3;  // 0xC
    unsigned char u8_D;  // 0xD
    char __pad_E[2];  // 0xE
    SHPStruct * uniqueId;  // 0x10
    char __pad_14[12];  // 0x14
    int NeedsSaveOrLink;  // 0x20
    unsigned int BarrelVoxel;  // 0x24
    char ChargerTurrets_0x12[4];  // 0x28
    char ChargerBarrels_0x12[4];  // 0x2C
    char __pad_30[1];  // 0x30
    unsigned char u32_31;  // 0x31
    char TurretVoxel[4];  // 0x32
    unsigned char __pad_036;  // 0x36
    char __pad_37[1];  // 0x37
    int u32_38;  // 0x38
    void * zero_3C;  // 0x3C
    char __pad_40[29];  // 0x40
    unsigned char __pad_05D;  // 0x5D
    char __pad_5E[2];  // 0x5E
    void * UIName;  // 0x60
    char Name[49];  // 0x64
    char tail_95[3];  // 0x95
    unsigned char u32_98;  // 0x98
    char __pad_99[1];  // 0x99
    unsigned char u32_9A;  // 0x9A
    unsigned char unused_9B;  // 0x9B
    int Armor;  // 0x9C
    int Strength_d;  // 0xA0
    int Image_d;  // 0xA4
    char ImageAllocated;  // 0xA8
    char __pad_0A9[3];  // 0xA9
    void * AlphaImage;  // 0xAC
    int MainVoxel;  // 0xB0
    int TurretVoxel_d;  // 0xB4
    int BarrelVoxel_d;  // 0xB8
    int ChargerTurrets[18];  // 0xBC
    char ChargerBarrels[72];  // 0x104
    bool NoSpawnAlt_d;  // 0x14C
    unsigned char q14D;  // 0x14D
    char __pad_14E[10];  // 0x14E
    unsigned char u32_158;  // 0x158
    char __pad_159[143];  // 0x159
    unsigned char NoSpawnAlt_2;  // 0x1E8
    char align_1E9[3];  // 0x1E9
    int MaxDimension;  // 0x1EC
    int CrushSound;  // 0x1F0
    int AmbientSound;  // 0x1F4
    unsigned int ImageFile_0x19;  // 0x1F8
    char __pad_1FC[4];  // 0x1FC
    unsigned int Selectable;  // 0x200
    char __pad_204[4];  // 0x204
    unsigned int HasRadialIndicator;  // 0x208
    unsigned int LineTrailColor;  // 0x20C
    unsigned char u32_210;  // 0x210
    char AlternateArcticArt_d[1];  // 0x211
    unsigned char ArcticArtInUse_d;  // 0x212
    char AlphaImageFile[25];  // 0x213
    char Theater_d[1];  // 0x22C
    char Crushable_d[1];  // 0x22D
    char Bombable_d[1];  // 0x22E
    char RadarInvisible_d[1];  // 0x22F
    char Selectable_d[1];  // 0x230
    char LegalTarget_d[1];  // 0x231
    char Insignificant_d[1];  // 0x232
    char Immune_d[1];  // 0x233
    unsigned char IsLogic_d;  // 0x234
    unsigned char AllowCellContent_d;  // 0x235
    char Voxel_d[1];  // 0x236
    char NewTheater_d[1];  // 0x237
    char HasRadialIndicator_d[1];  // 0x238
    char IgnoresFirestorm_d[1];  // 0x239
    char UseLineTrail_d[1];  // 0x23A
    char LineTrailColor_d[3];  // 0x23B
    unsigned short __pad_23E;  // 0x23E
    int LineTrailColorDecrement;  // 0x240
    int VoxelCaches_4[20];  // 0x244
    unsigned int q294;  // 0x294
    char __pad_298[368];  // 0x298
    unsigned int q408;  // 0x408
    char __pad_40C[284];  // 0x40C
    unsigned int q528;  // 0x528
    char __pad_52C[452];  // 0x52C
    unsigned int u32_6F0;  // 0x6F0
    char __pad_6F4[28];  // 0x6F4
    unsigned int q710;  // 0x710
    char __pad_714[168];  // 0x714
    unsigned int q7BC;  // 0x7BC
    char __pad_7C0[656];  // 0x7C0
    unsigned int qA50;  // 0xA50
    char __pad_A54[570];  // 0xA54
    unsigned char u8_C8E;  // 0xC8E
    char __pad_C8F[63];  // 0xC8F
    unsigned char u8_CCE;  // 0xCCE
    char __pad_CCF[249];  // 0xCCF
    unsigned char qDC8;  // 0xDC8
    char __pad_DC9[7];  // 0xDC9
    unsigned char qDD0;  // 0xDD0
    char __pad_DD1[31];  // 0xDD1
    unsigned char u32_DF0;  // 0xDF0
    char __pad_DF1[3];  // 0xDF1
    union {
        struct {
        };
    };  // 0x244
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Load2DArt();
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
    unsigned int * g_var_773e90(unsigned int * a1);
    void CleanupWeapons();
    void ReleaseWaveAndString(ObjectTypeClass *a1);
    int SetRTTI71(void *a1 = 0);
    void UnloadPipsSHP();
    void* LoadFromINI(uint8_t ***aP1, void *a2 = 0);
    ObjectTypeClass * Destru_vt08(void * Block, char a2);
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
};

} // namespace gamemd
