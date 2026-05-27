#include "gamemd/system/map.hpp"
#include "gamemd/system/cell.hpp"

#include <cstring>

namespace gamemd
{

MapClass::MapClass() noexcept
    : m_unknown_10(0)
    , m_unknown_pointer_14(nullptr)
    , m_unknown_4C(0)
    , m_zone_connections(nullptr)
    , m_zone_connection_count(0)
    , m_zone_connection_capacity(0)
    , m_unknown_array_68(nullptr)
    , m_num_items_in_68(0)
    , m_unknown_70(0)
    , m_unknown_74(0)
    , m_unknown_78(0)
    , m_unknown_7C(0)
    , m_subzone_tracking_1(nullptr)
    , m_subzone_tracking_1_count(0)
    , m_subzone_tracking_1_capacity(0)
    , m_subzone_tracking_2(nullptr)
    , m_subzone_tracking_2_count(0)
    , m_subzone_tracking_2_capacity(0)
    , m_subzone_tracking_3(nullptr)
    , m_subzone_tracking_3_count(0)
    , m_subzone_tracking_3_capacity(0)
    , m_cell_structs_1(nullptr)
    , m_cell_structs_1_count(0)
    , m_cell_structs_1_capacity(0)
    , m_cell_iterator_next_x(0)
    , m_cell_iterator_next_y(0)
    , m_cell_iterator_current_y(0)
    , m_cell_iterator_next_cell(nullptr)
    , m_unknown_11C(0)
    , m_unknown_120(0)
    , m_unknown_134(0)
    , m_cells(nullptr)
    , m_cells_count(0)
    , m_cells_capacity(0)
    , m_max_width(0)
    , m_max_height(0)
    , m_max_num_cells(0)
    , m_padding_01(0)
    , m_padding_02(0)
    , m_tagged_cells(nullptr)
    , m_tagged_cells_count(0)
    , m_tagged_cells_capacity(0)
{
    std::memset(m_unknown_pointer_array_18, 0, sizeof(m_unknown_pointer_array_18));
    std::memset(m_unknown_80, 0, sizeof(m_unknown_80));
    std::memset(&m_map_rect, 0, sizeof(m_map_rect));
    std::memset(&m_visible_rect, 0, sizeof(m_visible_rect));
    std::memset(&m_map_coord_bounds, 0, sizeof(m_map_coord_bounds));
    std::memset(m_crates, 0, sizeof(m_crates));
}

// TODO: complete implementation

CellClass* MapClass::TryGetCellAt(const CellStruct& map_coords) const
{
    int idx = GetCellIndex(map_coords);
    if (idx >= 0 && idx < m_cells_count && m_cells)
        return m_cells[idx];
    return nullptr;
}

CellClass* MapClass::TryGetCellAt(const CoordStruct& crd) const
{
    CellStruct cell = { static_cast<int16_t>(crd.X / 256), static_cast<int16_t>(crd.Y / 256) };
    return TryGetCellAt(cell);
}

CellClass* MapClass::GetCellAt(const CellStruct& map_coords) const
{
    return m_cells[GetCellIndex(map_coords)];
}

CellClass* MapClass::GetCellAt(const CoordStruct& crd) const
{
    CellStruct cell = { static_cast<int16_t>(crd.X / 256), static_cast<int16_t>(crd.Y / 256) };
    return GetCellAt(cell);
}

bool MapClass::CellExists(const CellStruct& map_coords) const
{
    int idx = GetCellIndex(map_coords);
    return idx >= 0 && idx < m_cells_count && m_cells && m_cells[idx] != nullptr;
}

int MapClass::GetThreatPosed(const CellStruct& cell, HouseClass* house) const
{
    (void)cell;
    (void)house;
    return 0;
}

bool MapClass::IsLocationShrouded(const CoordStruct& crd) const
{
    auto* cell = TryGetCellAt(crd);
    if (!cell)
        return true;
    // TODO: check cell shroudedness
    (void)crd;
    return true;
}

CoordStruct* MapClass::GetRandomCoordsNear(CoordStruct& out, const CoordStruct& coords, int distance, bool center)
{
    // TODO: random coords within distance of center coords
    (void)coords;
    (void)distance;
    (void)center;
    out = {};
    return &out;
}

CoordStruct* MapClass::PickInfantrySublocation(CoordStruct& out, const CoordStruct& coords, bool ignore_contents)
{
    // TODO: pick valid infantry sub-cell position
    (void)coords;
    (void)ignore_contents;
    out = {};
    return &out;
}

void MapClass::CellIteratorReset()
{
    m_cell_iterator_next_x = m_map_rect.X;
    m_cell_iterator_next_y = m_map_rect.Y;
    m_cell_iterator_current_y = m_map_rect.Y;
    m_cell_iterator_next_cell = nullptr;
}

CellClass* MapClass::CellIteratorNext()
{
    // TODO: linear cell iterator over visible area
    return nullptr;
}

DamageAreaResult MapClass::DamageArea(const CoordStruct& coords, int damage, TechnoClass* source, WarheadTypeClass* wh, bool affects_tiberium, HouseClass* source_house)
{
    (void)coords;
    (void)damage;
    (void)source;
    (void)wh;
    (void)affects_tiberium;
    (void)source_house;
    return {};
}

AnimTypeClass* MapClass::SelectDamageAnimation(int damage, WarheadTypeClass* wh, LandType land_type, const CoordStruct& coords)
{
    (void)damage;
    (void)wh;
    (void)land_type;
    (void)coords;
    return nullptr;
}

void MapClass::FlashbangWarheadAt(int damage, WarheadTypeClass* wh, CoordStruct coords, bool force, int cl_disable_flags)
{
    (void)damage;
    (void)wh;
    (void)coords;
    (void)force;
    (void)cl_disable_flags;
}

int MapClass::GetTotalDamage(int damage, const WarheadTypeClass* warhead, Armor armor, int distance)
{
    (void)warhead;
    (void)armor;
    (void)distance;
    return damage;
}

int MapClass::GetCellFloorHeight(const CoordStruct& crd) const
{
    auto* cell = TryGetCellAt(crd);
    if (!cell)
        return 0;
    // TODO: return cell floor height
    (void)crd;
    return 0;
}

CellStruct* MapClass::PickCellOnEdge(CellStruct& buffer, Edge edge, const CellStruct& current_location, const CellStruct& fallback, SpeedType speed, bool validate_reachability, MovementZone mov_zone) const
{
    (void)edge;
    (void)current_location;
    (void)fallback;
    (void)speed;
    (void)validate_reachability;
    (void)mov_zone;
    buffer = {};
    return &buffer;
}

void MapClass::Update_Pathfinding_1()
{
}

void MapClass::Update_Pathfinding_2(const CellStruct* where, int count)
{
    (void)where;
    (void)count;
}

CellStruct* MapClass::Pathfinding_Find(CellStruct& out, const CellStruct& position, SpeedType speed, int a5, MovementZone mov_zone, bool alt, int space_size_x, int space_size_y, bool disallow_overlay, bool a11, bool require_burrowable, bool allow_bridge, const CellStruct& close_to, bool a15, bool buildable)
{
    (void)position;
    (void)speed;
    (void)a5;
    (void)mov_zone;
    (void)alt;
    (void)space_size_x;
    (void)space_size_y;
    (void)disallow_overlay;
    (void)a11;
    (void)require_burrowable;
    (void)allow_bridge;
    (void)close_to;
    (void)a15;
    (void)buildable;
    out = {};
    return &out;
}

void MapClass::AddContentAt(CellStruct* coords, TechnoClass* content)
{
    (void)coords;
    (void)content;
}

void MapClass::RemoveContentAt(CellStruct* coords, TechnoClass* content)
{
    (void)coords;
    (void)content;
}

bool MapClass::IsWithinUsableArea(const CellStruct& cell, bool check_level) const
{
    (void)cell;
    (void)check_level;
    return false;
}

bool MapClass::IsWithinUsableArea(CellClass* cell, bool check_level) const
{
    (void)cell;
    (void)check_level;
    return false;
}

bool MapClass::IsWithinUsableArea(const CoordStruct& coords) const
{
    (void)coords;
    return false;
}

bool MapClass::CoordinatesLegal(const CellStruct& cell) const
{
    return TryGetCellAt(cell) != nullptr;
}

CoordStruct* MapClass::FindFirstFirestorm(CoordStruct* out, const CoordStruct& start, const CoordStruct& end, const HouseClass* house) const
{
    (void)start;
    (void)end;
    (void)house;
    *out = {};
    return out;
}

void MapClass::RevealArea1(CoordStruct* coords, int radius, HouseClass* owner, CellStruct arg4, uint8_t reveal_by_height, uint8_t arg6, uint8_t arg7, uint8_t arg8)
{
    (void)coords;
    (void)radius;
    (void)owner;
    (void)arg4;
    (void)reveal_by_height;
    (void)arg6;
    (void)arg7;
    (void)arg8;
}

void MapClass::RevealArea2(CoordStruct* coords, int radius, HouseClass* owner, uint32_t arg4, uint8_t reveal_by_height, uint8_t arg6, uint8_t arg7, uint8_t arg8)
{
    (void)coords;
    (void)radius;
    (void)owner;
    (void)arg4;
    (void)reveal_by_height;
    (void)arg6;
    (void)arg7;
    (void)arg8;
}

void MapClass::RevealArea3(CoordStruct* coords, int height, int radius, bool skip_reveal)
{
    (void)coords;
    (void)height;
    (void)radius;
    (void)skip_reveal;
}

void MapClass::Reveal(HouseClass* house)
{
    (void)house;
}

void MapClass::Reshroud(HouseClass* house)
{
    (void)house;
}

void MapClass::RedrawSidebar(int mode)
{
    (void)mode;
}

void MapClass::SetTogglePowerMode(int mode)
{
    (void)mode;
}

void MapClass::SetPlaceBeaconMode(int mode)
{
    (void)mode;
}

void MapClass::SetSellMode(int mode)
{
    (void)mode;
}

void MapClass::SetRepairMode(int mode)
{
    (void)mode;
}

void MapClass::DestroyCliff(CellClass* cell)
{
    (void)cell;
}

bool MapClass::MakeTraversable(const ObjectClass* visitor, const CellStruct& cell) const
{
    (void)visitor;
    (void)cell;
    return false;
}

} // namespace gamemd
