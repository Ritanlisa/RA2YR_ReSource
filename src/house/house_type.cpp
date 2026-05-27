#include "gamemd/house/house_type.hpp"
#include "gamemd/house/side.hpp"
#include "gamemd/type/infantry_type.hpp"
#include "gamemd/type/unit_type.hpp"
#include "gamemd/type/aircraft_type.hpp"

#include <cstring>

namespace gamemd
{

HouseTypeClass::HouseTypeClass() noexcept
    : m_zero_3C(0)
    , m_ui_name(nullptr)
    , m_array_index(-1)
    , m_array_index2(-1)
    , m_side_index(-1)
    , m_color_scheme_index(-1)
    , m_align_C4(0)
    , m_firepower_mult(1.0)
    , m_groundspeed_mult(1.0)
    , m_airspeed_mult(1.0)
    , m_armor_mult(1.0)
    , m_rof_mult(1.0)
    , m_cost_mult(1.0)
    , m_buildtime_mult(1.0)
    , m_armor_infantry_mult(1.0f)
    , m_armor_units_mult(1.0f)
    , m_armor_aircraft_mult(1.0f)
    , m_armor_buildings_mult(1.0f)
    , m_armor_defenses_mult(1.0f)
    , m_cost_infantry_mult(1.0f)
    , m_cost_units_mult(1.0f)
    , m_cost_aircraft_mult(1.0f)
    , m_cost_buildings_mult(1.0f)
    , m_cost_defenses_mult(1.0f)
    , m_speed_infantry_mult(1.0f)
    , m_speed_units_mult(1.0f)
    , m_speed_aircraft_mult(1.0f)
    , m_buildtime_infantry_mult(1.0f)
    , m_buildtime_units_mult(1.0f)
    , m_buildtime_aircraft_mult(1.0f)
    , m_buildtime_buildings_mult(1.0f)
    , m_buildtime_defenses_mult(1.0f)
    , m_income_mult(1.0f)
    , m_veteran_infantry(nullptr)
    , m_veteran_infantry_count(0)
    , m_veteran_units(nullptr)
    , m_veteran_units_count(0)
    , m_veteran_aircraft(nullptr)
    , m_veteran_aircraft_count(0)
    , m_prefix(0)
    , m_multiplay(false)
    , m_multiplay_passive(false)
    , m_wall_owner(false)
    , m_smart_ai(false)
{
    std::memset(m_id, 0, sizeof(m_id));
    std::memset(m_ui_name_label, 0, sizeof(m_ui_name_label));
    std::memset(m_name, 0, sizeof(m_name));
    std::memset(m_parent_country, 0, sizeof(m_parent_country));
    std::memset(m_suffix, 0, sizeof(m_suffix));
    std::memset(m_padding_1A9, 0, sizeof(m_padding_1A9));
    std::memset(&m_align_B1, 0, sizeof(m_align_B1));
}

HouseTypeClass* HouseTypeClass::FindParentCountry() const
{
    // TODO: search HouseType array for m_parent_country
    return nullptr;
}

int HouseTypeClass::FindParentCountryIndex() const
{
    // TODO: search HouseType array by parent country name
    return -1;
}

int HouseTypeClass::FindIndexOfName(const char* name)
{
    // TODO: linear search HouseType array by ID name
    (void)name;
    return -1;
}

} // namespace gamemd
