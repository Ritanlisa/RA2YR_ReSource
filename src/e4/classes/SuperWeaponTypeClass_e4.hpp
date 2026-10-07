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
    char ChargingVoice[4];  // 0x12
    bool IsAllocated;  // 0x13
    char abstractFlags[4];  // 0x14
    char ImpatientVoice[4];  // 0x16
    char nextArrayIndex[4];  // 0x18
    char referenceCount[4];  // 0x1C
    SHPStruct* NeedsSaveOrLink;  // 0x20
    char ActionValue[4];  // 0x24
    unsigned int SpecialSound;  // 0x28
    bool q02B;  // 0x2B
    unsigned int StartSound;  // 0x2C
    BuildingTypeClass* AuxBuilding;  // 0x30
    unsigned char q031;  // 0x31
    SHPStruct* SidebarImage;  // 0x32
    unsigned char zero_E4;  // 0x35
    bool UseChargeDrain;  // 0x36
    bool IsPowered;  // 0x37
    bool DisableableFromShell;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned char UINameLabel;  // 0x3D
    bool AIDefendAgainst;  // 0x40
    bool PreClick;  // 0x41
    bool PostClick;  // 0x42
    unsigned int PreDependent;  // 0x44
    bool ShowTimer;  // 0x48
    bool ManualControl;  // 0x49
    float Range;  // 0x4C
    int LineMultiplier;  // 0x50
    bool q054;  // 0x54
    void* q057;  // 0x57
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void * UIName;  // 0x60
    unsigned char Name;  // 0x64
    char q068[4];  // 0x68
    ObjectClass* q06C;  // 0x6C
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    char q080[4];  // 0x80
    void* q08C;  // 0x8C
    unsigned int ArrayIndex;  // 0x98
    WeaponTypeClass* WeaponType;  // 0x9C
    char RechargeVoice[4];  // 0xA0
    char q0A4[4];  // 0xA4
    char SuspendVoice[4];  // 0xAC
    char RechargeTime[4];  // 0xB0
    BuildingTypeClass* Type;  // 0xB4
    unsigned int q0C4;  // 0xC4
    char SidebarImageFile;  // 0xCC
    unsigned char q0D0;  // 0xD0
    unsigned int u32_D4;  // 0xD4
    void* q0D8;  // 0xD8
    void* q0E0;  // 0xE0
    unsigned char q0E4;  // 0xE4
    unsigned int FlashSidebarTabFrames;  // 0xE8
    char q0F0[4];  // 0xF0
    bool q0F4;  // 0xF4
    float q0F8;  // 0xF8
    unsigned int AbstractTypeClass;
    unsigned int q100;
    unsigned int q104;
    unsigned int q10C;
    unsigned int q114;
    unsigned int q128;
    unsigned int q12C;
    unsigned int q130;
    unsigned int q138;
    unsigned int q13C;
    unsigned int q140;
    unsigned int q144;
    unsigned int q168;
// --- flat members (END) ---
    AbstractClass * * IsAvailable();
    unsigned int * SDDTOR(char a2);
    int FindByName();
    int FindFirstOfAction();
    int FindOrCreate(INIClass * aP1, unsigned char * a2, CCINIClass * aP3);
    int SD_vt03(int a1, unsigned int * a2);
    int SD_vt11();
    int SD_vt12();
    int SD_vt13(int * a2);
    int SD_vt16();
    int SD_vt27(int a2, int a3);
    int SaveLoad_Prefix(int a1, int a2);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    SuperWeaponTypeClass(void * aP1);
    int loadSWProperties(uint8_t * a2, uint8_t * a3, int a4);
    int Construct(char *aP1);
    void* SD_vt25(unsigned char *** aP1);
};

} // namespace gamemd
