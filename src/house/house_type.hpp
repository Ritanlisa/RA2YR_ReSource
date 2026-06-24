#pragma once

#include "object/abstract.hpp"

#include <cstdint>

namespace gamemd {

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif





class InfantryTypeClass;
class UnitTypeClass;
class AircraftTypeClass;

class HouseTypeClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::HouseType;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Load(IStream* stream) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual ~HouseTypeClass() = default;  // 0x5116A0

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const override;  // 0x512720

    // wrapper: delegates to HouseTypeClass::GetObjectSize at 0x512720
    HouseTypeClass* FindParentCountry() const;
    // wrapper: delegates to HouseTypeClass::GetObjectSize at 0x512720
    int FindParentCountryIndex() const;
    // wrapper: delegates to HouseTypeClass::GetObjectSize at 0x512720
    static int FindIndexOfName(const char* name);

    char                    id[24];
    uint8_t                 m_zero_3C;
    char                    uiNameLabel[32];
    const wchar_t*          uiName;
    char                    name[49];

    char                    parentCountry[25];
    uint8_t                 m_align_B1[3];
    int32_t                 arrayIndex;
    int32_t                 arrayIndex2;
    int32_t                 sideIndex;
    int32_t                 colorSchemeIndex;
    uint32_t                m_align_C4;

    double                  firepowerMult;
    double                  groundspeedMult;
    double                  airspeedMult;
    double                  armorMult;
    double                  rofMult;
    double                  costMult;
    double                  buildtimeMult;

    float                   armorInfantryMult;
    float                   armorUnitsMult;
    float                   armorAircraftMult;
    float                   armorBuildingsMult;
    float                   armorDefensesMult;

    float                   costInfantryMult;
    float                   costUnitsMult;
    float                   costAircraftMult;
    float                   costBuildingsMult;
    float                   costDefensesMult;

    float                   currentSpeed_infantry_mult;
    float                   currentSpeed_units_mult;
    float                   currentSpeed_aircraft_mult;

    float                   buildtimeInfantryMult;
    float                   buildtimeUnitsMult;
    float                   buildtimeAircraftMult;
    float                   buildtimeBuildingsMult;
    float                   buildtimeDefensesMult;

    float                   incomeMult;

    InfantryTypeClass**     veteranInfantry;
    int32_t                 veteranInfantryCount;
    UnitTypeClass**         veteranUnits;
    int32_t                 veteranUnitsCount;
    AircraftTypeClass**     veteranAircraft;
    int32_t                 veteranAircraftCount;

    char                    suffix[4];
    char                    prefix;
    bool                    multiplay;
    bool                    multiplayPassive;
    bool                    wallOwner;
    bool                    smartAi;
    uint8_t                 m_padding_1A9[7];

protected:
    HouseTypeClass() noexcept;
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int loadCountryData(int a1, int a2, int a3);  // 0x4756f0 -- HouseTypeClass::loadCountryData
    void* loadVeteranWeapons(int a1);  // 0x511650 -- HouseTypeClass::loadVeteranWeapons
    int ProcessPower(int a1);  // 0x512170 -- HouseTypeClass::ProcessPower
    void* readStartUnit();  // 0x512960 -- HouseTypeClass::readStartUnit
    void* readStartInfantry(int a1);  // 0x512bd0 -- HouseTypeClass::readStartInfantry
    void* readBaseDefense(int a1);  // 0x513370 -- HouseTypeClass::readBaseDefense
    void* readDefaultAlly(int a1, int a2);  // 0x513560 -- HouseTypeClass::readDefaultAlly
    int readPowerPlants(int a1);  // 0x5136c0 -- HouseTypeClass::readPowerPlants
    void* readParaDropTypes(int a1);  // 0x5137d0 -- HouseTypeClass::readParaDropTypes
    void* readAllowedUnits(int a1);  // 0x513860 -- HouseTypeClass::readAllowedUnits
    int Find();  // 0x6a46d0 -- HouseTypeClass::Find
    // === SYMBOL-ANCHOR (END) ===
};

} // namespace gamemd

