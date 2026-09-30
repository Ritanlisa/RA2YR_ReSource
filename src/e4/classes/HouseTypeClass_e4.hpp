// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct HouseTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    char uniqueId[4];  // 0x10
    unsigned char alignmentPadding_3;  // 0x11
    char arrayIndex[4];  // 0x12
    char abstractFlags[4];  // 0x14
    char arrayIndex2[4];  // 0x16
    char nextArrayIndex[4];  // 0x18
    unsigned int q01A;  // 0x1A
    unsigned int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    double NeedsSaveOrLink;  // 0x20
    char id;  // 0x24
    bool IsAllocated;  // 0x25
    double groundspeedMult;  // 0x28
    bool q02B;  // 0x2B
    unsigned int q02C;  // 0x2C
    double airspeedMult;  // 0x30
    unsigned char q031;  // 0x31
    double firepowerMult;  // 0x32
    unsigned char q034;  // 0x34
    double armorMult;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned char m_zero_3C;  // 0x3C
    char uiNameLabel;  // 0x3D
    double rofMult;  // 0x40
    bool q042;  // 0x42
    unsigned int q044;  // 0x44
    double costMult;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    double buildtimeMult;  // 0x50
    unsigned int u32_54;  // 0x54
    float armorInfantryMult;  // 0x58
    float armorUnitsMult;  // 0x5C
    float armorAircraftMult;  // 0x60
    float armorBuildingsMult;  // 0x64
    float armorDefensesMult;  // 0x68
    float costInfantryMult;  // 0x6C
    float costUnitsMult;  // 0x70
    float costAircraftMult;  // 0x74
    float costBuildingsMult;  // 0x78
    float costDefensesMult;  // 0x7C
    float currentSpeed_infantry_mult;  // 0x80
    float currentSpeed_units_mult;  // 0x84
    float currentSpeed_aircraft_mult;  // 0x88
    float buildtimeInfantryMult;  // 0x8C
    float buildtimeUnitsMult;  // 0x90
    float buildtimeAircraftMult;  // 0x94
    char parentCountry;  // 0x95
    float buildtimeBuildingsMult;  // 0x98
    float buildtimeDefensesMult;  // 0x9C
    float incomeMult;  // 0xA0
    InfantryTypeClass** veteranInfantry;  // 0xA4
    char veteranInfantryCount[4];  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    UnitTypeClass** veteranUnits;  // 0xAC
    char veteranUnitsCount[4];  // 0xB0
    unsigned char m_align_B1;  // 0xB1
    AircraftTypeClass** veteranAircraft;  // 0xB4
    char veteranAircraftCount[4];  // 0xB8
    unsigned char q0B9;  // 0xB9
    char suffix_4;  // 0xBC
    char prefix;  // 0xBD
    bool multiplay;  // 0xBE
    bool multiplayPassive;  // 0xBF
    bool wallOwner;  // 0xC0
    bool smartAi;  // 0xC1
    unsigned char m_padding_1A9_7;  // 0xC2
    unsigned int q0C3;  // 0xC3
    unsigned int m_align_C4;  // 0xC4
    double q0C8;  // 0xC8
    AbstractClass* q0CC;  // 0xCC
    double q0D0;  // 0xD0
    unsigned int u32_D4;  // 0xD4
    double q0D8;  // 0xD8
    void* q0DC;  // 0xDC
    double q0E0;  // 0xE0
    AbstractClass* q0E4;  // 0xE4
    double q0E8;  // 0xE8
    unsigned int q0EC;  // 0xEC
    double q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    void* q0F7;  // 0xF7
    double q0F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    AbstractClass* q0FC;  // 0xFC
    float q100;  // 0x100
    float q104;  // 0x104
    float q108;  // 0x108
    float q10C;  // 0x10C
    float q110;  // 0x110
    unsigned int q111;  // 0x111
    float q114;  // 0x114
    float q118;  // 0x118
    float q11C;  // 0x11C
    float q120;  // 0x120
    float q124;  // 0x124
    float q128;  // 0x128
    float q12C;  // 0x12C
    float q130;  // 0x130
    float q134;  // 0x134
    float q138;  // 0x138
    float q13C;  // 0x13C
    float q140;  // 0x140
    float q144;  // 0x144
    float q148;  // 0x148
    InfantryTypeClass** q14C;  // 0x14C
    char q150[4];  // 0x150
    UnitTypeClass** q154;  // 0x154
    char q158[4];  // 0x158
    unsigned char u8_159;  // 0x159
    AircraftTypeClass** q15C;  // 0x15C
    char q160[4];  // 0x160
    unsigned int q162;  // 0x162
    char suffix;  // 0x164
    char q168;  // 0x168
    bool q169;  // 0x169
    bool q16A;  // 0x16A
    bool q16B;  // 0x16B
    bool q16C;  // 0x16C
    unsigned char q16D;  // 0x16D
    unsigned int q16F;  // 0x16F
    unsigned int q170;  // 0x170
    unsigned char q174;  // 0x174
    unsigned char u8_175;  // 0x175
    unsigned int u32_178;  // 0x178
    unsigned int u32_17C;  // 0x17C
    AircraftTypeClass** q180;  // 0x180
    unsigned int q184;  // 0x184
    AbstractTypeClass * q188;  // 0x188
    unsigned int u32_18C;  // 0x18C
    bool q190;  // 0x190
    unsigned int u32_191;  // 0x191
    unsigned char q194;  // 0x194
    unsigned char q198;  // 0x198
    unsigned int q199;  // 0x199
    unsigned int u32_19C;  // 0x19C
    unsigned char q19D;  // 0x19D
    AbstractClass* q1A0;  // 0x1A0
    bool q1A1;  // 0x1A1
    unsigned int q1A2;  // 0x1A2
    char q1A4[4];  // 0x1A4
    unsigned int q1A5;  // 0x1A5
    void* q1A6;  // 0x1A6
    unsigned int q1A7;  // 0x1A7
    char q1A8[4];  // 0x1A8
    unsigned char m_padding_1A9;  // 0x1A9
    unsigned int q1AC;  // 0x1AC
    unsigned int __pad_16D;
// --- flat members (END) ---
    AbstractClass * * Dtor(void *a1 = 0);
    AbstractClass * * ProcessPower(int * a2, void *a1 = 0);
    HouseTypeClass * Destructor(char a2);
    char readPowerPlants(void * aP1);
    int AddRef(int a1);
    int Find(void *a1 = 0);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int LoadHouse(int a1, unsigned int * a2);
    int QueryInterface(int a1, const void * a2, unsigned int * a3);
    int Release(int a1);
    int SaveLoad_Prefix(unsigned int * i, int a2);
    int StubReturnFalse(int a1);
    int loadCountryData(unsigned char * a2, unsigned char * a3, int a4);
    int readAiBuildLists(int a1);
    int readBaseDefenses(int a1, const void * a2, unsigned int * a3);
    int readLoadoutData(int a1);
    unsigned int * loadVeteranWeapons(void * aP1);
    unsigned int * readAllowedUnits(void * aP1);
    unsigned int * readBaseDefense(void * aP1);
    unsigned int * readDefaultAlly(int a2, int a3);
    unsigned int * readParaDropTypes(void * aP1);
    unsigned int * readStartInfantry(void * aP1);
    unsigned int * readStartUnit();
    unsigned int loadBuildLimits();
    void * ReadCountryName(int a1, unsigned char *** edx0, void * aP1, unsigned char * a2, unsigned int * a5);
    void* LoadFromINI(unsigned char *** aP1);
};

} // namespace gamemd
