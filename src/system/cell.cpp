#include "gamemd/system/cell.hpp"
#include "gamemd/object/object.hpp"
#include "gamemd/object/techno.hpp"

#include "gamemd/structure/building.hpp"
#include "gamemd/structure/unit.hpp"
#include "gamemd/structure/infantry.hpp"
#include "gamemd/structure/aircraft.hpp"
#include "gamemd/entity/terrain.hpp"

#include <algorithm>
#include <cmath>
#include <cstring>
#include <limits>

namespace gamemd
{

CellClass::CellClass()
    : m_map_coords{}
    , m_fogged_objects(nullptr)
    , m_bridge_owner_cell(nullptr)
    , m_unknown_30(0)
    , m_light_convert(nullptr)
    , m_iso_tile_type_index(-1)
    , m_attached_tag(nullptr)
    , m_rubble(nullptr)
    , m_overlay_type_index(-1)
    , m_smudge_type_index(-1)
    , m_unknown_4C(0)
    , m_wall_owner_index(-1)
    , m_infantry_owner_index(-1)
    , m_alt_infantry_owner_index(-1)
    , m_unknown_5C(0)
    , m_unknown_60(0)
    , m_unknown_64(0)
    , m_unknown_68(0)
    , m_unknown_6C(0)
    , m_unknown_70(0)
    , m_unknown_74(0)
    , m_cloaked_by_houses(0)
    , m_base_spacer_of_houses(0)
    , m_jumpjet(nullptr)
    , m_first_object(nullptr)
    , m_alt_object(nullptr)
    , m_land_type(static_cast<int>(LandType::Clear))
    , m_rad_level(0.0)
    , m_rad_site(nullptr)
    , m_unknown_FC(0)
    , m_occupy_heights_covering_me(0)
    , m_unknown_104(0)
    , m_unknown_108(0)
    , m_unknown_10A(0)
    , m_unknown_10C(0)
    , m_unknown_10E(0)
    , m_unknown_110(0)
    , m_unknown_112(0)
    , m_unknown_114(0)
    , m_tube_index(-1)
    , m_unknown_118(0)
    , m_unknown_119(0)
    , m_height(0)
    , m_level(0)
    , m_slope_index(0)
    , m_unknown_11D(0)
    , m_powerup(0)
    , m_unknown_11F(0)
    , m_shroudedness(0)
    , m_foggedness(0)
    , m_blocked_neighbours(0)
    , m_align_123(0)
    , m_occupation_flags(0)
    , m_alt_occupation_flags(0)
    , m_copy_flags(0)
    , m_shroud_counter(0)
    , m_gaps_covering_this_cell(0)
    , m_visibility_changed(false)
    , m_unknown_13C(0)
    , m_flags(CellFlags::None)
{
    std::memset(m_sensors_of_houses, 0, sizeof(m_sensors_of_houses));
    std::memset(m_disguise_sensors_of_houses, 0, sizeof(m_disguise_sensors_of_houses));
    std::memset(m_padding_144, 0, sizeof(m_padding_144));
}

namespace {

template <AbstractType TargetType>
ObjectClass* FindFromList(ObjectClass* head)
{
    while (head)
    {
        if (head->WhatAmI() == TargetType)
            return head;
        head = head->m_next_object;
    }
    return nullptr;
}

template <typename T>
T* CastTo(ObjectClass* obj)
{
    return reinterpret_cast<T*>(obj);
}

} // anonymous namespace

BuildingClass* CellClass::GetBuilding() const
{
    auto* obj = FindFromList<AbstractType::Building>(
        m_first_object ? m_first_object : m_alt_object);
    return CastTo<BuildingClass>(obj);
}

UnitClass* CellClass::GetUnit(bool alt) const
{
    auto* obj = FindFromList<AbstractType::Unit>(
        alt ? m_alt_object : m_first_object);
    return CastTo<UnitClass>(obj);
}

InfantryClass* CellClass::GetInfantry(bool alt) const
{
    auto* obj = FindFromList<AbstractType::Infantry>(
        alt ? m_alt_object : m_first_object);
    return CastTo<InfantryClass>(obj);
}

AircraftClass* CellClass::GetAircraft(bool alt) const
{
    auto* obj = FindFromList<AbstractType::Aircraft>(
        alt ? m_alt_object : m_first_object);
    return CastTo<AircraftClass>(obj);
}

TerrainClass* CellClass::GetTerrain(bool alt) const
{
    auto* obj = FindFromList<AbstractType::Terrain>(
        alt ? m_alt_object : m_first_object);
    return CastTo<TerrainClass>(obj);
}

TechnoClass* CellClass::FindTechnoNearestTo(
    const Point2D& offset, bool alt, const TechnoClass* exclude) const
{
    auto* content = alt ? m_alt_object : m_first_object;

    TechnoClass* best  = nullptr;
    double       best_dist = std::numeric_limits<double>::max();

    while (content)
    {
        auto* as_techno = CastTo<TechnoClass>(content);
        if (as_techno && as_techno != exclude)
        {
            CoordStruct crd;
            as_techno->GetCoords(&crd);
            double dx = static_cast<double>(crd.X) - static_cast<double>(offset.X);
            double dy = static_cast<double>(crd.Y) - static_cast<double>(offset.Y);
            double dist = dx * dx + dy * dy;
            if (dist < best_dist)
            {
                best_dist = dist;
                best = as_techno;
            }
        }
        content = content->m_next_object;
    }
    return best;
}

ObjectClass* CellClass::FindObjectOfType(AbstractType type, bool alt) const
{
    auto* content = alt ? m_alt_object : m_first_object;

    while (content)
    {
        if (content->WhatAmI() == type)
            return content;
        content = content->m_next_object;
    }
    return nullptr;
}

} // namespace gamemd
