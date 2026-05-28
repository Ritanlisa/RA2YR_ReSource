#pragma once

#include "..\object\abstract.hpp"

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
    static constexpr AbstractType kAbsDeriveID = AbstractType::HouseType;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~HouseTypeClass() = default;

    virtual AbstractType __stdcall WhatAmI() const override { return AbstractType::HouseType; }
    virtual int Size() const override { return 0; }

    HouseTypeClass* FindParentCountry() const;
    int FindParentCountryIndex() const;
    static int FindIndexOfName(const char* name);

    char                    m_id[24];
    uint8_t                 m_zero_3C;
    char                    m_ui_name_label[32];
    const wchar_t*          m_ui_name;
    char                    m_name[49];

    char                    m_parent_country[25];
    uint8_t                 m_align_B1[3];
    int32_t                 m_array_index;
    int32_t                 m_array_index2;
    int32_t                 m_side_index;
    int32_t                 m_color_scheme_index;
    uint32_t                m_align_C4;

    double                  m_firepower_mult;
    double                  m_groundspeed_mult;
    double                  m_airspeed_mult;
    double                  m_armor_mult;
    double                  m_rof_mult;
    double                  m_cost_mult;
    double                  m_buildtime_mult;

    float                   m_armor_infantry_mult;
    float                   m_armor_units_mult;
    float                   m_armor_aircraft_mult;
    float                   m_armor_buildings_mult;
    float                   m_armor_defenses_mult;

    float                   m_cost_infantry_mult;
    float                   m_cost_units_mult;
    float                   m_cost_aircraft_mult;
    float                   m_cost_buildings_mult;
    float                   m_cost_defenses_mult;

    float                   m_speed_infantry_mult;
    float                   m_speed_units_mult;
    float                   m_speed_aircraft_mult;

    float                   m_buildtime_infantry_mult;
    float                   m_buildtime_units_mult;
    float                   m_buildtime_aircraft_mult;
    float                   m_buildtime_buildings_mult;
    float                   m_buildtime_defenses_mult;

    float                   m_income_mult;

    InfantryTypeClass**     m_veteran_infantry;
    int32_t                 m_veteran_infantry_count;
    UnitTypeClass**         m_veteran_units;
    int32_t                 m_veteran_units_count;
    AircraftTypeClass**     m_veteran_aircraft;
    int32_t                 m_veteran_aircraft_count;

    char                    m_suffix[4];
    char                    m_prefix;
    bool                    m_multiplay;
    bool                    m_multiplay_passive;
    bool                    m_wall_owner;
    bool                    m_smart_ai;
    uint8_t                 m_padding_1A9[7];

protected:
    HouseTypeClass() noexcept;
};

} // namespace gamemd

