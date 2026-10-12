// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SHPStruct;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct WeaponTypeClass;  // fix_fwd_type_supply

struct SuperWeaponTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    char uniqueId[4];  // 0x10
    unsigned char alignmentPadding_3;  // 0x11
    char ChargingVoice[4];  // 0x12
    bool IsAllocated;  // 0x13
    char abstractFlags[4];  // 0x14
    char ImpatientVoice[4];  // 0x16
    char nextArrayIndex[4];  // 0x18
    char referenceCount[4];  // 0x1C
    SHPStruct* NeedsSaveOrLink;  // 0x20
    char ActionValue[4];  // 0x24
    char SpecialSound[4];  // 0x28
    char StartSound[4];  // 0x2C
    BuildingTypeClass* AuxBuilding;  // 0x30
    SHPStruct* SidebarImage;  // 0x32
    char SidebarImageFile_0x18;  // 0x34
    unsigned char zero_E4;  // 0x35
    bool UseChargeDrain;  // 0x36
    bool IsPowered;  // 0x37
    bool DisableableFromShell;  // 0x38
    char zero_3C[1];  // 0x3C
    unsigned char UINameLabel;  // 0x3D
    bool AIDefendAgainst;  // 0x40
    bool PreClick;  // 0x41
    bool PostClick;  // 0x42
    char PreDependent[4];  // 0x44
    bool ShowTimer;  // 0x48
    bool ManualControl;  // 0x49
    float Range;  // 0x4C
    char LineMultiplier[4];  // 0x50
    void * UIName;  // 0x60
    unsigned char Name;  // 0x64
    unsigned int tail_95;  // 0x95
    char ArrayIndex[4];  // 0x98
    WeaponTypeClass* WeaponType;  // 0x9C
    char RechargeVoice[4];  // 0xA0
    char ChargingVoice_d[4];  // 0xA4
    char ImpatientVoice_d[4];  // 0xA8
    char SuspendVoice[4];  // 0xAC
    char RechargeTime[4];  // 0xB0
    BuildingTypeClass* Type;  // 0xB4
    SHPStruct* SidebarImage_d;  // 0xB8
    char ActionValue_d[4];  // 0xBC
    char SpecialSound_d[4];  // 0xC0
    char StartSound_d[4];  // 0xC4
    BuildingTypeClass* AuxBuilding_d;  // 0xC8
    char SidebarImageFile;  // 0xCC
    unsigned char zero_E4_d;  // 0xE4
    bool UseChargeDrain_d;  // 0xE5
    bool IsPowered_d;  // 0xE6
    bool DisableableFromShell_d;  // 0xE7
    char FlashSidebarTabFrames[4];  // 0xE8
    bool AIDefendAgainst_d;  // 0xEC
    bool PreClick_d;  // 0xED
    bool PostClick_d;  // 0xEE
    char PreDependent_d[4];  // 0xF0
    bool ShowTimer_d;  // 0xF4
    bool ManualControl_d;  // 0xF5
    float Range_d;  // 0xF8
    char LineMultiplier_d[4];  // 0xFC
// --- flat members (END) ---
    AbstractClass * * IsAvailable();
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
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    SuperWeaponTypeClass(void * aP1);
    int loadSWProperties(uint8_t * a2, uint8_t * a3, int a4, void *a1 = 0);
    int Construct(char *aP1, void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);
    void* SD_vt25(unsigned char *** aP1);
    unsigned int q024;  // 0x24 (offset-truth)
    unsigned int q100;  // 0x100 (ml)
    unsigned int q104;  // 0x104 (ml)
    ObjectClass* q108;  // 0x108 (ml)
    unsigned int q10C;  // 0x10C (ml)
    unsigned char q110;  // 0x110 (ml)
    bool q114;  // 0x114 (ml)
    float q118;  // 0x118 (ml)
    unsigned int q11C;  // 0x11C (ml)
    unsigned char q120;  // 0x120 (ml)
    unsigned int q124;  // 0x124 (ml)
    unsigned int q128;  // 0x128 (ml)
    unsigned int q12C;  // 0x12C (ml)
    char q130;  // 0x130 (ml)
    unsigned int q134;  // 0x134 (ml)
    unsigned int q138;  // 0x138 (ml)
    unsigned int q13C;  // 0x13C (ml)
    unsigned int q140;  // 0x140 (ml)
    unsigned int q144;  // 0x144 (ml)
    unsigned int q148;  // 0x148 (ml)
    unsigned int q14C;  // 0x14C (offset-truth)
    unsigned int q15C;  // 0x15C (ml)
    int q160;  // 0x160 (ml)
    int q168;  // 0x168 (ml)
    void * q184;  // 0x184 (ml)
    unsigned int q194;  // 0x194 (ml)
    unsigned char q198;  // 0x198 (ml)
    unsigned int q1A0;  // 0x1A0 (offset-truth)
    unsigned int q1A4;  // 0x1A4 (offset-truth)
    unsigned int q1A8;  // 0x1A8 (offset-truth)
    unsigned int u32_158;  // 0x158 (offset-truth)
    unsigned int u32_178;  // 0x178 (offset-truth)
    unsigned int u32_17C;  // 0x17C (offset-truth)
};

} // namespace gamemd
