// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SHPStruct;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct WeaponTypeClass;  // fix_fwd_type_supply

struct SuperWeaponTypeClass {
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    SHPStruct* NeedsSaveOrLink;  // 0x20
    char __pad_24[16];  // 0x24
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
    WeaponTypeClass* WeaponType;  // 0x9C
    int RechargeVoice;  // 0xA0
    int ChargingVoice_d;  // 0xA4
    int ImpatientVoice_d;  // 0xA8
    void* SuspendVoice;  // 0xAC
    int RechargeTime;  // 0xB0
    BuildingTypeClass* Type;  // 0xB4
    SHPStruct* SidebarImage_d;  // 0xB8
    void* ActionValue_d;  // 0xBC
    int SpecialSound_d;  // 0xC0
    int StartSound_d;  // 0xC4
    BuildingTypeClass* AuxBuilding_d;  // 0xC8
    int SidebarImageFile[6];  // 0xCC
    unsigned char zero_E4_d;  // 0xE4
    bool UseChargeDrain_d;  // 0xE5
    bool IsPowered_d;  // 0xE6
    bool DisableableFromShell_d;  // 0xE7
    int FlashSidebarTabFrames;  // 0xE8
    bool AIDefendAgainst_d;  // 0xEC
    bool PreClick_d;  // 0xED
    bool PostClick_d;  // 0xEE
    unsigned char __pad_0EF;  // 0xEF
    BuildingTypeClass* PreDependent_d;  // 0xF0
    bool ShowTimer_d;  // 0xF4
    bool ManualControl_d;  // 0xF5
    unsigned char __pad_0F6;  // 0xF6
    char __pad_F7[1];  // 0xF7
    float Range_d;  // 0xF8
    void* LineMultiplier_d;  // 0xFC
// --- flat members (BEGIN) ---
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
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a2, int a3);
    SuperWeaponTypeClass(void * aP1);
    int loadSWProperties(uint8_t * a2, uint8_t * a3, int a4, void *a4_1 = 0);
    int Construct(char *aP1, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    void* SD_vt25(unsigned char *** aP1);
};

} // namespace gamemd
