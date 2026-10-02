// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SHPStruct;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct ObjectClass;  // fix_fwd_type_supply
struct WeaponTypeClass;  // fix_fwd_type_supply
struct AbstractClass;  // fix_fwd_type_supply

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
    unsigned int q01A;  // 0x1A
    char referenceCount[4];  // 0x1C
    bool q01D;  // 0x1D
    SHPStruct* NeedsSaveOrLink;  // 0x20
    char ActionValue[4];  // 0x24
    unsigned int SpecialSound;  // 0x28
    bool q02B;  // 0x2B
    unsigned int StartSound;  // 0x2C
    BuildingTypeClass* AuxBuilding;  // 0x30
    unsigned char q031;  // 0x31
    SHPStruct* SidebarImage;  // 0x32
    char SidebarImageFile_0x18;  // 0x34
    unsigned char zero_E4;  // 0x35
    bool UseChargeDrain;  // 0x36
    bool IsPowered;  // 0x37
    bool DisableableFromShell;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    char zero_3C[1];  // 0x3C
    unsigned char UINameLabel;  // 0x3D
    bool AIDefendAgainst;  // 0x40
    bool PreClick;  // 0x41
    bool PostClick;  // 0x42
    unsigned int PreDependent;  // 0x44
    bool ShowTimer;  // 0x48
    bool ManualControl;  // 0x49
    bool q04A;  // 0x4A
    float Range;  // 0x4C
    unsigned char q04F;  // 0x4F
    char LineMultiplier[4];  // 0x50
    bool q054;  // 0x54
    void* q057;  // 0x57
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned char q05D;  // 0x5D
    void * UIName;  // 0x60
    unsigned char Name;  // 0x64
    char q068[4];  // 0x68
    ObjectClass* q06C;  // 0x6C
    unsigned char q070;  // 0x70
    bool q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    char q080[4];  // 0x80
    bool q084;  // 0x84
    unsigned char q088;  // 0x88
    void* q08C;  // 0x8C
    unsigned int u32_90;  // 0x90
    unsigned int q094;  // 0x94
    unsigned int tail_95;  // 0x95
    unsigned int ArrayIndex;  // 0x98
    WeaponTypeClass* WeaponType;  // 0x9C
    char RechargeVoice[4];  // 0xA0
    char q0A4[4];  // 0xA4
    char q0A8[4];  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    char SuspendVoice[4];  // 0xAC
    char RechargeTime[4];  // 0xB0
    BuildingTypeClass* Type;  // 0xB4
    SHPStruct* q0B8;  // 0xB8
    unsigned char q0B9;  // 0xB9
    char q0BC[4];  // 0xBC
    unsigned int q0C0;  // 0xC0
    unsigned int q0C3;  // 0xC3
    unsigned int q0C4;  // 0xC4
    BuildingTypeClass* q0C8;  // 0xC8
    char SidebarImageFile;  // 0xCC
    unsigned char q0D0;  // 0xD0
    unsigned int u32_D4;  // 0xD4
    void* q0D8;  // 0xD8
    void* q0DC;  // 0xDC
    void* q0E0;  // 0xE0
    unsigned char q0E4;  // 0xE4
    bool q0E5;  // 0xE5
    bool q0E6;  // 0xE6
    bool q0E7;  // 0xE7
    unsigned int FlashSidebarTabFrames;  // 0xE8
    bool q0EC;  // 0xEC
    bool q0ED;  // 0xED
    bool q0EE;  // 0xEE
    unsigned char q0EF;  // 0xEF
    char q0F0[4];  // 0xF0
    bool q0F4;  // 0xF4
    bool q0F5;  // 0xF5
    unsigned char q0F6;  // 0xF6
    void* q0F7;  // 0xF7
    float q0F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    char q0FC[4];  // 0xFC
    unsigned int AbstractTypeClass;
    unsigned int buildtimeUnitsMult0;
    unsigned int currentSpeed_units_mult2;
    unsigned int q100;
    unsigned int q104;
    unsigned int q108;
    unsigned int q10C;
    unsigned int q110;
    unsigned int q114;
    unsigned int q118;
    unsigned int q11C;
    unsigned int q120;
    unsigned int q124;
    unsigned int q128;
    unsigned int q12C;
    unsigned int q130;
    unsigned int q134;
    unsigned int q138;
    unsigned int q13C;
    unsigned int q140;
    unsigned int q144;
    unsigned int q148;
    unsigned int q14C;
    unsigned int q15C;
    unsigned int q160;
    unsigned int q168;
    unsigned int q184;
    unsigned int q194;
    unsigned int q198;
    unsigned int q1A0;
    unsigned int q1A4;
    unsigned int q1A8;
    unsigned int u32_158;
    unsigned int u32_178;
    unsigned int u32_17C;
    unsigned int vtable46;
// --- flat members (END) ---
    AbstractClass * * IsAvailable();
    SuperWeaponTypeClass * SDDTOR(char a2);
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
    int Construct(AbstractClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6);
    void* SD_vt25(unsigned char *** aP1);
};

} // namespace gamemd
