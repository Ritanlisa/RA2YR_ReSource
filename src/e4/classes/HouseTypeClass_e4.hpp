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
    char arrayIndex[4];  // 0x12
    char abstractFlags[4];  // 0x14
    char arrayIndex2[4];  // 0x16
    char nextArrayIndex[4];  // 0x18
    unsigned int referenceCount;  // 0x1C
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
    double rofMult;  // 0x40
    unsigned int q044;  // 0x44
    double costMult;  // 0x48
    unsigned int q04C;  // 0x4C
    double buildtimeMult;  // 0x50
    unsigned int u32_54;  // 0x54
    InfantryTypeClass** veteranInfantry;  // 0xA4
    int veteranInfantryCount;  // 0xA8
    UnitTypeClass** veteranUnits;  // 0xAC
    char veteranUnitsCount[4];  // 0xB0
    AircraftTypeClass** veteranAircraft;  // 0xB4
    char prefix;  // 0xBD
    bool smartAi;  // 0xC1
    double q0D0;  // 0xD0
    unsigned int u32_D4;  // 0xD4
    double q0D8;  // 0xD8
    double q0E0;  // 0xE0
    AbstractClass* q0E4;  // 0xE4
    double q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    double q0F8;  // 0xF8
    float q100;  // 0x100
    float q104;  // 0x104
    float q10C;  // 0x10C
    float q114;  // 0x114
    float q128;  // 0x128
    float q12C;  // 0x12C
    float q130;  // 0x130
    float q138;  // 0x138
    float q13C;  // 0x13C
    float q140;  // 0x140
    float q144;  // 0x144
    char q150[4];  // 0x150
    UnitTypeClass** q154;  // 0x154
    char q158[4];  // 0x158
    char q168;  // 0x168
    unsigned int u32_19C;  // 0x19C
    unsigned int q1AC;  // 0x1AC
    unsigned int *__pad_16D;
// --- flat members (END) ---
    AbstractClass * Dtor(void *a1);
    AbstractClass * * ProcessPower(int *aP1);
    HouseTypeClass * Destructor(char a2);
    char readPowerPlants(TypeList_flat * aP1);
    int AddRef(int a1);
    int Find();
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
    unsigned int * loadVeteranWeapons(HouseTypeClass * aP1);
    unsigned int * readAllowedUnits(InfantryTypeClass * aP1);
    unsigned int * readBaseDefense(VectorClass_flat * aP1);
    unsigned int * readDefaultAlly(int a2, int a3);
    unsigned int * readParaDropTypes(VectorClass_flat * aP1);
    unsigned int * readStartInfantry(unsigned int *aP1);
    unsigned int * readStartUnit();
    unsigned int loadBuildLimits();
    void * ReadCountryName(int a1, unsigned char *** edx0, INIClass * aP1, unsigned char * a2, unsigned int * a5);
    AbstractClass * LoadFromINI(uint8_t *** aP1, void *a2);
};

} // namespace gamemd
