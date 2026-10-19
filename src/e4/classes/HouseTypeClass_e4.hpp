// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct InfantryTypeClass;  // fix_fwd_type_supply
struct UnitTypeClass;  // fix_fwd_type_supply
struct AircraftTypeClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply

struct HouseTypeClass {
    void * ptr_0;  // 0x0
    void* ptr_4;  // 0x4
    void* ptr_8;  // 0x8
    void* ptr_C;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    unsigned int referenceCount;  // 0x1C
    int NeedsSaveOrLink;  // 0x20
    int id[6];  // 0x24
    unsigned char m_zero_3C;  // 0x3C
    char uiNameLabel[32];  // 0x3D
    char __pad_5D[3];  // 0x5D
    int uiName;  // 0x60
    char name[49];  // 0x64
    char parentCountry[25];  // 0x95
    char __pad_AE[2];  // 0xAE
    char __pad_B0[1];  // 0xB0
    char m_align_B1[3];  // 0xB1
    int arrayIndex;  // 0xB4
    int arrayIndex2;  // 0xB8
    unsigned int suffix_4;  // 0xBC
    int colorSchemeIndex;  // 0xC0
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
    int veteranInfantryCount_d;  // 0x150
    UnitTypeClass** veteranUnits_d;  // 0x154
    int veteranUnitsCount_d;  // 0x158
    AircraftTypeClass** veteranAircraft_d;  // 0x15C
    int veteranAircraftCount_d;  // 0x160
    int suffix;  // 0x164
    char prefix_d;  // 0x168
    bool multiplay_d;  // 0x169
    bool multiplayPassive_d;  // 0x16A
    bool wallOwner_d;  // 0x16B
    bool smartAi_d;  // 0x16C
    char pad_16D[58];  // 0x16D
    bool WallOwner;  // 0x1A7
    unsigned char SmartAI;  // 0x1A8
    char m_padding_1A9[7];  // 0x1A9
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * Dtor(void *a1);
    AbstractClass * * ProcessPower(int * a2, void *a2_1 = 0);
    HouseTypeClass * Destructor(char a2);
    char readPowerPlants(TypeList_flat * a2);
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
    int loadCountryData(uint8_t *a2, uint8_t *a3, int a4, void *a4_1 = 0);
    int readAiBuildLists(int a1);
    int readBaseDefenses(int a1, const void * a2, unsigned int * a3);
    int readLoadoutData(int a1);
    unsigned int * loadVeteranWeapons(HouseTypeClass * a2);
    unsigned int * readAllowedUnits(InfantryTypeClass * a2);
    unsigned int * readBaseDefense(VectorClass_flat * a2);
    unsigned int * readDefaultAlly(int a2, int a3);
    unsigned int * readParaDropTypes(VectorClass_flat * a2);
    unsigned int * readStartInfantry(unsigned int * a2, void *a2_1 = 0);
    unsigned int * readStartUnit();
    unsigned int loadBuildLimits();
    void * ReadCountryName(int a1, unsigned char *** edx0, INIClass * a3, unsigned char * a4, unsigned int * a5);
    AbstractClass * LoadFromINI(uint8_t *** aP1, void *a2);
};

} // namespace gamemd
