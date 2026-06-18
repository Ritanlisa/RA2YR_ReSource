#include "system/map.hpp"
#include "system/cell.hpp"

#include <cstring>

namespace gamemd
{

MapClass::MapClass() noexcept
    : unknown10(0)
    , unknownPointer14(nullptr)
    , MapClass_field_4C(0)
    , zoneConnections(nullptr)
    , zoneConnectionCount(0)
    , zoneConnectionCapacity(0)
    , unknownArray68(nullptr)
    , numItemsIn68(0)
    , unknown70(0)
    , unknown74(0)
    , spawnStatus(0)
    , visibilityFlags(0)
    , subzoneTracking1(nullptr)
    , subzoneTracking1Count(0)
    , subzoneTracking1Capacity(0)
    , subzoneTracking2(nullptr)
    , subzoneTracking2Count(0)
    , subzoneTracking2Capacity(0)
    , subzoneTracking3(nullptr)
    , subzoneTracking3Count(0)
    , subzoneTracking3Capacity(0)
    , cellStructs1(nullptr)
    , cellStructs1Count(0)
    , cellStructs1Capacity(0)
    , cellIteratorNextX(0)
    , cellIteratorNextY(0)
    , cellIteratorCurrentY(0)
    , cellIteratorNextCell(nullptr)
    , MapClass_field_11C(0)
    , unknown120(0)
    , unknown134(0)
    , cells(nullptr)
    , cellsCount(0)
    , cellsCapacity(0)
    , maxWidth(0)
    , maxHeight(0)
    , maxNumCells(0)
    , padding01(0)
    , padding02(0)
    , taggedCells(nullptr)
    , taggedCellsCount(0)
    , taggedCellsCapacity(0)
{
    std::memset(unknownPointerArray18, 0, sizeof(unknownPointerArray18));
    std::memset(unknown80, 0, sizeof(unknown80));
    std::memset(&mapRect, 0, sizeof(mapRect));
    std::memset(&visibleRect, 0, sizeof(visibleRect));
    std::memset(&mapCoordBounds, 0, sizeof(mapCoordBounds));
    std::memset(crates, 0, sizeof(crates));
}

// TODO: complete implementation

CellClass* MapClass::TryGetCellAt(const CellStruct& map_coords) const
{
    int idx = GetCellIndex(map_coords);
    if (idx >= 0 && idx < cellsCount && cells)
        return cells[idx];
    return nullptr;
}

CellClass* MapClass::TryGetCellAt(const CoordStruct& crd) const
{
    CellStruct cell = { static_cast<int16_t>(crd.X / 256), static_cast<int16_t>(crd.Y / 256) };
    return TryGetCellAt(cell);
}

CellClass* MapClass::GetCellAt(const CellStruct& map_coords) const
{
    return cells[GetCellIndex(map_coords)];
}

CellClass* MapClass::GetCellAt(const CoordStruct& crd) const
{
    CellStruct cell = { static_cast<int16_t>(crd.X / 256), static_cast<int16_t>(crd.Y / 256) };
    return GetCellAt(cell);
}

bool MapClass::CellExists(const CellStruct& map_coords) const
{
    int idx = GetCellIndex(map_coords);
    return idx >= 0 && idx < cellsCount && cells && cells[idx] != nullptr;
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
    return cell->IsShrouded();
}

CoordStruct* MapClass::GetRandomCoordsNear(CoordStruct& out, const CoordStruct& coords, int distance, bool center)
{
    // Generate random coords within distance of center coords
    // Uses simple rectangular bounds; the original game uses a more sophisticated algorithm
    int halfDist = distance / 2;
    int dx = (rand() % distance) - halfDist;
    int dy = (rand() % distance) - halfDist;

    if (center)
    {
        out.X = coords.X + dx;
        out.Y = coords.Y + dy;
    }
    else
    {
        out.X = coords.X + dx;
        out.Y = coords.Y + dy;
    }
    out.Z = coords.Z;
    return &out;
}

CoordStruct* MapClass::PickInfantrySublocation(CoordStruct& out, const CoordStruct& coords, bool ignore_contents)
{
    // Pick a valid infantry sub-cell position (0-2 offsets within a cell)
    // Infantry occupy sub-positions: center, plus up to 2 alternate spots
    // Sub-cell offsets: 0=center(128,128), 1=(64,64), 2=(192,192)

    static constexpr int subOffsets[3][2] = {
        { 128, 128 },  // center
        {  64,  64 },  // near corner
        { 192, 192 }   // far corner
    };

    int cellX = (coords.X / 256) * 256;
    int cellY = (coords.Y / 256) * 256;

    // Try center first (most common)
    out.X = cellX + subOffsets[0][0];
    out.Y = cellY + subOffsets[0][1];
    out.Z = coords.Z;
    return &out;
}

void MapClass::CellIteratorReset()
{
    cellIteratorNextX = mapRect.X;
    cellIteratorNextY = mapRect.Y;
    cellIteratorCurrentY = mapRect.Y;
    cellIteratorNextCell = nullptr;
}

CellClass* MapClass::CellIteratorNext()
{
    // Linear cell iterator over cells in the map rectangle
    int maxX = mapRect.X + mapRect.Width;
    int maxY = mapRect.Y + mapRect.Height;

    while (cellIteratorCurrentY < maxY)
    {
        while (cellIteratorNextX < maxX)
        {
            CellStruct coords = { static_cast<int16_t>(cellIteratorNextX), static_cast<int16_t>(cellIteratorCurrentY) };
            cellIteratorNextX++;
            auto* cell = TryGetCellAt(coords);
            if (cell)
                return cell;
        }
        cellIteratorNextX = mapRect.X;
        cellIteratorCurrentY++;
    }
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
    return cell->height;
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

void MapClass::UpdatePathfinding1()
{
}

void MapClass::UpdatePathfinding2(const CellStruct* where, int count)
{
    (void)where;
    (void)count;
}

CellStruct* MapClass::PathfindingFind(CellStruct& out, const CellStruct& position, SpeedType speed, int a5, MovementZone mov_zone, bool alt, int space_size_x, int space_size_y, bool disallow_overlay, bool a11, bool require_burrowable, bool allow_bridge, const CellStruct& close_to, bool a15, bool buildable)
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
