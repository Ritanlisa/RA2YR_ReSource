// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct InfantryTypeClass;  // fix_fwd_type_supply
struct UnitTypeClass;  // fix_fwd_type_supply
struct AircraftTypeClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply

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
    unsigned int referenceCount;  // 0x1C
    double NeedsSaveOrLink;  // 0x20
    char id;  // 0x24
    bool IsAllocated;  // 0x25
    double groundspeedMult;  // 0x28
    double airspeedMult;  // 0x30
    double firepowerMult;  // 0x32
    double armorMult;  // 0x38
    unsigned char m_zero_3C;  // 0x3C
    char uiNameLabel;  // 0x3D
    double rofMult;  // 0x40
    double costMult;  // 0x48
    double buildtimeMult;  // 0x50
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
    UnitTypeClass** veteranUnits;  // 0xAC
    char veteranUnitsCount[4];  // 0xB0
    unsigned char m_align_B1;  // 0xB1
    AircraftTypeClass** veteranAircraft;  // 0xB4
    char veteranAircraftCount[4];  // 0xB8
    char suffix_4;  // 0xBC
    char prefix;  // 0xBD
    bool multiplay;  // 0xBE
    bool multiplayPassive;  // 0xBF
    bool wallOwner;  // 0xC0
    bool smartAi;  // 0xC1
    unsigned char m_padding_1A9_7;  // 0xC2
    unsigned int m_align_C4;  // 0xC4
    double firepowerMult_d;  // 0xC8
    double groundspeedMult_d;  // 0xD0
    double airspeedMult_d;  // 0xD8
    double armorMult_d;  // 0xE0
    double rofMult_d;  // 0xE8
    double costMult_d;  // 0xF0
    double buildtimeMult_d;  // 0xF8
    float armorInfantryMult_d;  // 0x100
    float armorUnitsMult_d;  // 0x104
    float armorAircraftMult_d;  // 0x108
    float armorBuildingsMult_d;  // 0x10C
    float armorDefensesMult_d;  // 0x110
    float costInfantryMult_d;  // 0x114
    float costUnitsMult_d;  // 0x118
    float costAircraftMult_d;  // 0x11C
    float costBuildingsMult_d;  // 0x120
    float costDefensesMult_d;  // 0x124
    float currentSpeed_infantry_mult_d;  // 0x128
    float currentSpeed_units_mult_d;  // 0x12C
    float currentSpeed_aircraft_mult_d;  // 0x130
    float buildtimeInfantryMult_d;  // 0x134
    float buildtimeUnitsMult_d;  // 0x138
    float buildtimeAircraftMult_d;  // 0x13C
    float buildtimeBuildingsMult_d;  // 0x140
    float buildtimeDefensesMult_d;  // 0x144
    float incomeMult_d;  // 0x148
    InfantryTypeClass** veteranInfantry_d;  // 0x14C
    char veteranInfantryCount_d[4];  // 0x150
    UnitTypeClass** veteranUnits_d;  // 0x154
    char veteranUnitsCount_d[4];  // 0x158
    AircraftTypeClass** veteranAircraft_d;  // 0x15C
    char veteranAircraftCount_d[4];  // 0x160
    char suffix;  // 0x164
    char prefix_d;  // 0x168
    bool multiplay_d;  // 0x169
    bool multiplayPassive_d;  // 0x16A
    bool wallOwner_d;  // 0x16B
    bool smartAi_d;  // 0x16C
    char Prefix[4];  // 0x1A4
    unsigned int Multiplay;  // 0x1A5
    void* MultiplayPassive;  // 0x1A6
    bool WallOwner;  // 0x1A7
    char SmartAI[4];  // 0x1A8
    unsigned char m_padding_1A9;  // 0x1A9
// --- flat members (END) ---
    AbstractClass * Dtor(void *a1);
    AbstractClass * * ProcessPower(int *aP1, void *a1 = 0);
    HouseTypeClass * Destructor(char a2);
    char readPowerPlants(TypeList_flat * aP1);
    int AddRef(int a1);
    int Find(void *a1 = 0, void *a2 = 0);
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int LoadHouse(int a1, unsigned int * a2);
    int QueryInterface(int a1, const void * a2, unsigned int * a3);
    int Release(int a1);
    int SaveLoad_Prefix(unsigned int * i, int a2);
    int StubReturnFalse(int a1);
    int loadCountryData(uint8_t *a2, uint8_t *a3, int a4, void *a1 = 0);
    int readAiBuildLists(int a1);
    int readBaseDefenses(int a1, const void * a2, unsigned int * a3);
    int readLoadoutData(int a1);
    unsigned int * loadVeteranWeapons(HouseTypeClass * aP1);
    unsigned int * readAllowedUnits(InfantryTypeClass * aP1);
    unsigned int * readBaseDefense(VectorClass_flat * aP1);
    unsigned int * readDefaultAlly(int a2, int a3);
    unsigned int * readParaDropTypes(VectorClass_flat * aP1);
    unsigned int * readStartInfantry(unsigned int *aP1, void *a1 = 0);
    unsigned int * readStartUnit();
    unsigned int loadBuildLimits();
    void * ReadCountryName(int a1, unsigned char *** edx0, INIClass * aP1, unsigned char * a2, unsigned int * a5);
    AbstractClass * LoadFromINI(uint8_t *** aP1, void *a2);
    char pad_16D[58];  // 0x16D (ml)
    static double AbstractClass(...);  // plateau: C2039/C3861 stub
    static double __pad_16D(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
