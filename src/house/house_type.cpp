#include "house/house_type.hpp"
#include "house/side.hpp"
#include "type/infantry_type.hpp"
#include "type/unit_type.hpp"
#include "type/aircraft_type.hpp"

#include <cstring>

namespace gamemd
{

HouseTypeClass::HouseTypeClass() noexcept
    : m_zero_3C(0)
    , uiName(nullptr)
    , arrayIndex(-1)
    , arrayIndex2(-1)
    , sideIndex(-1)
    , colorSchemeIndex(-1)
    , m_align_C4(0)
    , firepowerMult(1.0)
    , groundspeedMult(1.0)
    , airspeedMult(1.0)
    , armorMult(1.0)
    , rofMult(1.0)
    , costMult(1.0)
    , buildtimeMult(1.0)
    , armorInfantryMult(1.0f)
    , armorUnitsMult(1.0f)
    , armorAircraftMult(1.0f)
    , armorBuildingsMult(1.0f)
    , armorDefensesMult(1.0f)
    , costInfantryMult(1.0f)
    , costUnitsMult(1.0f)
    , costAircraftMult(1.0f)
    , costBuildingsMult(1.0f)
    , costDefensesMult(1.0f)
    , currentSpeed_infantry_mult(1.0f)
    , currentSpeed_units_mult(1.0f)
    , currentSpeed_aircraft_mult(1.0f)
    , buildtimeInfantryMult(1.0f)
    , buildtimeUnitsMult(1.0f)
    , buildtimeAircraftMult(1.0f)
    , buildtimeBuildingsMult(1.0f)
    , buildtimeDefensesMult(1.0f)
    , incomeMult(1.0f)
    , veteranInfantry(nullptr)
    , veteranInfantryCount(0)
    , veteranUnits(nullptr)
    , veteranUnitsCount(0)
    , veteranAircraft(nullptr)
    , veteranAircraftCount(0)
    , prefix(0)
    , multiplay(false)
    , multiplayPassive(false)
    , wallOwner(false)
    , smartAi(false)
{
    std::memset(id, 0, sizeof(id));
    std::memset(uiNameLabel, 0, sizeof(uiNameLabel));
    std::memset(name, 0, sizeof(name));
    std::memset(parentCountry, 0, sizeof(parentCountry));
    std::memset(suffix, 0, sizeof(suffix));
    std::memset(m_padding_1A9, 0, sizeof(m_padding_1A9));
    std::memset(&m_align_B1, 0, sizeof(m_align_B1));
}

// IDA 0x6A46D0 — HouseTypeClass::Find: linear search global type list by name
//   Iterates dword_8B4124 array, comparing object+36 (id field) via _strcmpi
//   Returns index or -1 if not found
static int FindHouseTypeByName(const char* name)
{
    // Global type list: dword_8B4124 holds array of HouseTypeClass*, g_ObjectTypeList holds count
    extern uint32_t g_ObjectTypeList; // 0x8b4130
    // The type array pointer is at 0x8b4124, 12 bytes before g_ObjectTypeList
    extern HouseTypeClass** g_HouseTypeArray; // dword_8B4124

    if (!name || !*name) return -1;
    for (uint32_t i = 0; i < g_ObjectTypeList; ++i)
    {
        HouseTypeClass* ht = g_HouseTypeArray[i];
        if (ht && std::strcmp(ht->id, name) == 0)
            return static_cast<int>(i);
    }
    return -1;
}

HouseTypeClass* HouseTypeClass::FindParentCountry() const
{
    int idx = FindHouseTypeByName(parentCountry);
    if (idx < 0) return nullptr;
    extern HouseTypeClass** g_HouseTypeArray;
    return g_HouseTypeArray[idx];
}

int HouseTypeClass::FindParentCountryIndex() const
{
    return FindHouseTypeByName(parentCountry);
}

int HouseTypeClass::FindIndexOfName(const char* name)
{
    return FindHouseTypeByName(name);
}

} // namespace gamemd
