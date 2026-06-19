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

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    virtual HRESULT __stdcall Load(IStream* stream) override;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual ~HouseTypeClass() = default;  // 0x5116A0

    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const override;

    HouseTypeClass* FindParentCountry() const;
    int FindParentCountryIndex() const;
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
};

} // namespace gamemd

