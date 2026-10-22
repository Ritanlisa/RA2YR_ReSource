// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SHPStruct;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct WeaponTypeClass;  // fix_fwd_type_supply

struct SuperWeaponTypeClass {
    unsigned char vfptr;  // 0x0
    char __pad_1[3];  // 0x1
    int vfptr1;  // 0x4
    int vfptr2;  // 0x8
    int vfptr3;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    SHPStruct* NeedsSaveOrLink;  // 0x20
    unsigned int ActionValue;  // 0x24
    char __pad_28[12];  // 0x28
    char SidebarImageFile_0x18;  // 0x34
    char __pad_35[4];  // 0x35
    char __pad_39[3];  // 0x39
    char zero_3C[1];  // 0x3C
    char UINameLabel[32];  // 0x3D
    unsigned char __pad_05D;  // 0x5D
    char __pad_5E[2];  // 0x5E
    void * UIName;  // 0x60
    char Name[49];  // 0x64
    char tail_95[3];  // 0x95
    int ArrayIndex;  // 0x98
    void * WeaponType;  // 0x9C
    int RechargeVoice;  // 0xA0
    int ChargingVoice_d;  // 0xA4
    int ImpatientVoice_d;  // 0xA8
    int SuspendVoice;  // 0xAC
    int RechargeTime;  // 0xB0
    void * Type;  // 0xB4
    int SidebarImage_d;  // 0xB8
    int ActionValue_d;  // 0xBC
    int SpecialSound_d;  // 0xC0
    int StartSound_d;  // 0xC4
    int AuxBuilding_d;  // 0xC8
    int SidebarImageFile[6];  // 0xCC
    unsigned char zero_E4_d;  // 0xE4
    unsigned char UseChargeDrain_d;  // 0xE5
    unsigned char IsPowered_d;  // 0xE6
    unsigned char DisableableFromShell_d;  // 0xE7
    int FlashSidebarTabFrames;  // 0xE8
    unsigned char AIDefendAgainst_d;  // 0xEC
    unsigned char PreClick_d;  // 0xED
    unsigned char PostClick_d;  // 0xEE
    unsigned char __pad_0EF;  // 0xEF
    int PreDependent_d;  // 0xF0
    unsigned char ShowTimer_d;  // 0xF4
    unsigned char ManualControl_d;  // 0xF5
    unsigned char __pad_0F6;  // 0xF6
    char __pad_F7[1];  // 0xF7
    int Range_d;  // 0xF8
    int LineMultiplier_d;  // 0xFC
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q108;  // 0x108
    unsigned int q10C;  // 0x10C
    unsigned int q110;  // 0x110
    unsigned int q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned int q11C;  // 0x11C
    unsigned int q120;  // 0x120
    unsigned int q124;  // 0x124
    unsigned int q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned int q138;  // 0x138
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q148;  // 0x148
    unsigned int q14C;  // 0x14C
    char __pad_150[8];  // 0x150
    unsigned int u32_158;  // 0x158
    unsigned int q15C;  // 0x15C
    unsigned int q160;  // 0x160
    char __pad_164[4];  // 0x164
    unsigned int q168;  // 0x168
    char __pad_16C[12];  // 0x16C
    unsigned int u32_178;  // 0x178
    unsigned int u32_17C;  // 0x17C
    char __pad_180[4];  // 0x180
    unsigned int q184;  // 0x184
    char __pad_188[12];  // 0x188
    unsigned int q194;  // 0x194
    unsigned int q198;  // 0x198
    char __pad_19C[4];  // 0x19C
    unsigned char q1A0;  // 0x1A0
    char __pad_1A1[3];  // 0x1A1
    unsigned char q1A4;  // 0x1A4
    char __pad_1A5[3];  // 0x1A5
    unsigned char q1A8;  // 0x1A8
    char __pad_1A9[599];  // 0x1A9
    unsigned char q400;  // 0x400
    char __pad_401[1023];  // 0x401
    unsigned int q800;  // 0x800
    char __pad_804[1020];  // 0x804
    unsigned int qC00;  // 0xC00
    char __pad_C04[6140];  // 0xC04
    unsigned int q2400;  // 0x2400
    char __pad_2404[12640];  // 0x2404
    unsigned int q5564;  // 0x5564
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    bool IsAvailable();
    unsigned int * SDDTOR(char a2);
    int FindByName(void *a1 = 0);
    int FindFirstOfAction();
    int FindOrCreate(INIClass * a2, unsigned char * a3, CCINIClass * a4);
    int SD_vt03(int a1, unsigned int * a2);
    int SD_vt11();
    int SD_vt12();
    int SD_vt13(int * a2);
    int SD_vt16();
    int SD_vt27(int a2, int a3);
    int SaveLoad_Prefix(int a1, int a2);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a2, int a3);
    SuperWeaponTypeClass(void * aP1);
    int loadSWProperties(uint8_t * a2, uint8_t * a3, int a4, void *a4_1 = 0);
    int Construct(char *aP1, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    void* SD_vt25(unsigned char *** aP1);
};

} // namespace gamemd
