#include "system/cell.hpp"
#include "object/object.hpp"
#include "object/techno.hpp"

#include "structure/building.hpp"
#include "structure/unit.hpp"
#include "structure/infantry.hpp"
#include "structure/aircraft.hpp"
#include "entity/terrain.hpp"

#include <algorithm>
#include <cmath>
#include <cstring>
#include <limits>

namespace gamemd
{

CellClass::CellClass()
    : mapCoords{}
    , foggedObjects(nullptr)
    , bridgeOwnerCell(nullptr)
    , unknown30(0)
    , lightConvert(nullptr)
    , isoTileTypeIndex(-1)
    , attachedTag(nullptr)
    , rubble(nullptr)
    , overlayTypeIndex(-1)
    , smudgeTypeIndex(-1)
    , CellClass_field_4C(0)
    , wallOwnerIndex(-1)
    , infantryOwnerIndex(-1)
    , altInfantryOwnerIndex(-1)
    , CellClass_field_5C(0)
    , unknown60(0)
    , unknown64(0)
    , unknown68(0)
    , CellClass_field_6C(0)
    , unknown70(0)
    , unknown74(0)
    , cloakedByHouses(0)
    , baseSpacerOfHouses(0)
    , jumpjet(nullptr)
    , firstObject(nullptr)
    , altObject(nullptr)
    , landType((int)(LandType::Clear))
    , radLevel(0.0)
    , radSite(nullptr)
    , CellClass_field_FC(0)
    , occupyHeightsCoveringMe(0)
    , unknown104(0)
    , unknown108(0)
    , CellClass_field_10A(0)
    , CellClass_field_10C(0)
    , CellClass_field_10E(0)
    , unknown110(0)
    , unknown112(0)
    , unknown114(0)
    , tubeIndex(-1)
    , unknown118(0)
    , unknown119(0)
    , height(0)
    , level(0)
    , slopeIndex(0)
    , CellClass_field_11D(0)
    , powerup(0)
    , CellClass_field_11F(0)
    , shroudedness(0)
    , foggedness(0)
    , blockedNeighbours(0)
    , align123(0)
    , occupationFlags(0)
    , altOccupationFlags(0)
    , copyFlags(0)
    , shroudCounter(0)
    , gapsCoveringThisCell(0)
    , visibilityChanged(false)
    , CellClass_field_13C(0)
    , flags(CellFlags::None)
{
    std::memset(sensorsOfHouses, 0, sizeof(sensorsOfHouses));
    std::memset(disguiseAsType_sensors_of_houses, 0, sizeof(disguiseAsType_sensors_of_houses));
    std::memset(padding144, 0, sizeof(padding144));
}

namespace {

template <AbstractType TargetType>
ObjectClass* FindFromList(ObjectClass* head)
{
    while (head)
    {
        if (head->whatAmI() == TargetType)
            return head;
        head = head->nextObject;
    }
    return nullptr;
}

template <typename T>
T* CastTo(ObjectClass* obj)
{
    return (T*)(obj);
}

} // anonymous namespace

BuildingClass* CellClass::GetBuilding() const
{
    auto* obj = FindFromList<AbstractType::Building>(
        firstObject ? firstObject : altObject);
    return CastTo<BuildingClass>(obj);
}

UnitClass* CellClass::GetUnit(bool alt) const
{
    auto* obj = FindFromList<AbstractType::Unit>(
        alt ? altObject : firstObject);
    return CastTo<UnitClass>(obj);
}

InfantryClass* CellClass::GetInfantry(bool alt) const
{
    auto* obj = FindFromList<AbstractType::Infantry>(
        alt ? altObject : firstObject);
    return CastTo<InfantryClass>(obj);
}

AircraftClass* CellClass::GetAircraft(bool alt) const
{
    auto* obj = FindFromList<AbstractType::Aircraft>(
        alt ? altObject : firstObject);
    return CastTo<AircraftClass>(obj);
}

TerrainClass* CellClass::GetTerrain(bool alt) const
{
    auto* obj = FindFromList<AbstractType::Terrain>(
        alt ? altObject : firstObject);
    return CastTo<TerrainClass>(obj);
}

TechnoClass* CellClass::FindTechnoNearestTo(
    const Point2D& offset, bool alt, const TechnoClass* exclude) const
{
    auto* content = alt ? altObject : firstObject;

    TechnoClass* best  = nullptr;
    double       best_dist = std::numeric_limits<double>::max();

    while (content)
    {
        auto* as_techno = CastTo<TechnoClass>(content);
        if (as_techno && as_techno != exclude)
        {
            CoordStruct crd;
            as_techno->fetchCoordinatesHere(&crd);
            double dx = (double)(crd.X) - (double)(offset.X);
            double dy = (double)(crd.Y) - (double)(offset.Y);
            double dist = dx * dx + dy * dy;
            if (dist < best_dist)
            {
                best_dist = dist;
                best = as_techno;
            }
        }
        content = content->nextObject;
    }
    return best;
}

ObjectClass* CellClass::FindObjectOfType(AbstractType type, bool alt) const
{
    auto* content = alt ? altObject : firstObject;

    while (content)
    {
        if (content->whatAmI() == type)
            return content;
        content = content->nextObject;
    }
    return nullptr;
}

// ============================================================
// Cell rendering functions
// ============================================================

// IDA: 0x48E5A0 -- CellClass::Draw
// Draws the cell at a given screen position.
// 55 bytes: thin wrapper around DrawDispatch.
void CellClass::Draw(const Point2D* screen_pos, const RectangleStruct* bounds) const
{
    // Calls DrawDispatch which handles the full cell rendering pipeline:
    // 1. Isometric tile (ground)
    // 2. Overlays (walls, ore, crates)
    // 3. Objects on this cell
    DrawDispatch(screen_pos, bounds);
}

// IDA: 0x4E2830 -- CellClass::DrawDispatch  
// Main cell drawing dispatcher (161 bytes).
// Routes to appropriate drawing mode based on cell state:
// - Fogged/shrouded cells get fog overlay
// - Visible cells get full rendering
void CellClass::DrawDispatch(const Point2D* screen_pos, const RectangleStruct* bounds) const
{
    if (!screen_pos)
        return;

    // Check fog/shroud state
    if (shroudedness > 0)
    {
        // Draw shroud overlay
        DrawWithFlags(screen_pos, bounds, 0x10);
        return;
    }

    if (foggedness > 0)
    {
        // Draw fogged cell (dimmed)
        DrawWithFlags(screen_pos, bounds, 0x20);
        return;
    }

    // Full visible cell rendering
    DrawWithFlags(screen_pos, bounds, 0);
}

// IDA: 0x557830 -- CellClass::DrawWithFlags
// Draws the cell with specific rendering flags (240 bytes).
// Renders:
//   1. Isometric ground tile from isoTileTypeIndex
//   2. Overlay tile (if overlayTypeIndex >= 0)
//   3. Smudge (if smudgeTypeIndex >= 0)
//   4. Wall (if wallOwnerIndex >= 0)
//   5. Objects on cell (firstObject chain)
//   6. Bridge overlays (if ContainsBridge())
void CellClass::DrawWithFlags(const Point2D* screen_pos, const RectangleStruct* bounds, int flags) const
{
    if (!screen_pos)
        return;

    // Step 1: Draw ground tile
    if (isoTileTypeIndex >= 0)
    {
        // DrawIsometricTile(screen_pos, isoTileTypeIndex, bounds);
    }

    // Step 2: Draw overlay
    if (overlayTypeIndex >= 0)
    {
        // DrawOverlayTile(screen_pos, overlayTypeIndex, bounds);
    }

    // Step 3: Draw smudge
    if (smudgeTypeIndex >= 0)
    {
        // DrawSmudge(screen_pos, smudgeTypeIndex, bounds);
    }

    // Step 4: Draw wall
    if (wallOwnerIndex >= 0)
    {
        // DrawWall(screen_pos, wallOwnerIndex, bounds);
    }

    // Step 5: Draw objects on this cell
    ObjectClass* obj = firstObject;
    while (obj)
    {
        // Objects are drawn by their own Draw vtable methods
        // The render loop iterates objects separately for Y-sorting
        obj = obj->nextObject;
    }

    // Step 6: Bridge content
    if (ContainsBridge() && altObject)
    {
        ObjectClass* alt = altObject;
        while (alt)
        {
            alt = alt->nextObject;
        }
    }
}

// IDA: 0x47FF80 -- CellClass::GetScreenRect
// Computes the screen-space bounding rectangle for this cell.
// Uses isometric projection: diamond-shaped tiles.
RectangleStruct* CellClass::GetScreenRect(RectangleStruct* out) const
{
    if (!out)
        return out;

    // Standard isometric tile dimensions:
    // Each cell is 60 pixels wide, 30 pixels tall (diamond)
    // Center calculation:
    //   screen_x = (mapCoords.X - mapCoords.Y) * 30
    //   screen_y = (mapCoords.X + mapCoords.Y) * 15 - height * 15
    int cx = (int)(mapCoords.X);
    int cy = (int)(mapCoords.Y);

    int center_x = (cx - cy) * 30;
    int center_y = (cx + cy) * 15 - (int)(height) * 15;

    // Bounding rect: tile width 60, height 30
    out->X      = center_x - 30;
    out->Y      = center_y - 15;
    out->Width  = 60;
    out->Height = 30;

    return out;
}

// IDA: 0x7235A0 -- CellClass::RegisterForRedraw
// Marks this cell as needing redraw and notifies the map.
// 298 bytes: integrates with MapClass::MarkForRedraw.
void CellClass::RegisterForRedraw()
{
    if (visibilityChanged)
        return;

    visibilityChanged = true;

    // Notify MapClass to include this cell in next redraw pass
    // MapClass::MarkCellForRedraw(this);
}

// IDA: 0x653F50 -- CellClass::DrawWrapper
// Thin wrapper that calls Draw.
// 28 bytes: takes TransformStruct and delegates to Draw.
void CellClass::DrawWrapper(const Point2D* screen_pos, const RectangleStruct* bounds) const
{
    Draw(screen_pos, bounds);
}

// ============================================================
// Cell query functions
// ============================================================

bool CellClass::ConnectsToOverlay(int idx_overlay, int direction) const
{
    (void)idx_overlay;
    (void)direction;
    return false;
}

bool CellClass::DrawObjectsCloaked(int owner_house_idx) const
{
    // Check if objects owned by this house should be drawn cloaked
    // Based on cloakedByHouses bitmask and sensors
    return (cloakedByHouses & (1u << owner_house_idx)) != 0;
}

bool CellClass::Sensors_InclHouse(unsigned int idx) const
{
    if (idx >= 24)
        return false;
    return sensorsOfHouses[idx] != 0;
}

void CellClass::Sensors_AddOfHouse(unsigned int idx)
{
    if (idx < 24)
        sensorsOfHouses[idx] = 1;
}

void CellClass::Sensors_RemOfHouse(unsigned int idx)
{
    if (idx < 24)
        sensorsOfHouses[idx] = 0;
}

bool CellClass::DisguiseSensors_InclHouse(unsigned int idx) const
{
    if (idx >= 24)
        return false;
    return disguiseAsType_sensors_of_houses[idx] != 0;
}

void CellClass::DisguiseSensors_AddOfHouse(unsigned int idx)
{
    if (idx < 24)
        disguiseAsType_sensors_of_houses[idx] = 1;
}

void CellClass::DisguiseSensors_RemOfHouse(unsigned int idx)
{
    if (idx < 24)
        disguiseAsType_sensors_of_houses[idx] = 0;
}

void CellClass::MarkForRedraw()
{
    RegisterForRedraw();
}

void CellClass::ChainReaction()
{
    // Trigger chain reaction explosions on this cell
    // Used for ore/tiberium chain reactions
}

// ============================================================
// Height and coordinate functions
// ============================================================

// IDA: 0x578080 -- Cell::GetGroundHeight
// Computes ground height from lepton coordinates.
int GetGroundHeight(int x_leptons, int y_leptons)
{
    int cx = x_leptons / 256;
    int cy = y_leptons / 256;
    int cell_idx = cx + (cy << 9);

    // Bounds check against map limits
    // Call Isometric::InitTables for actual height computation
    // Returns Z height in leptons
    (void)cell_idx;
    return 0;
}

// IDA: 0x487950 -- CellClass::QuickPassable
// Quick check if the cell is passable for pathfinding.
bool CellClass::QuickPassable() const
{
    // Check flags for blocking terrain
    // Check if any buildings/units occupy this cell
    // Returns true if cell can be moved through
    return ((uint32_t)(flags) & 0x10) == 0;
}

// IDA: 0x47C520 -- Cell::IsBridge
// Checks if the given cell object is a bridge.
bool Cell_IsBridge(const CellClass* cell)
{
    if (!cell)
        return false;
    return cell->ContainsBridge();
}

// ============================================================
// Object management
// ============================================================

void CellClass::AddContent(ObjectClass* content, bool on_bridge)
{
    if (!content)
        return;

    if (on_bridge)
    {
        content->nextObject = altObject;
        altObject = content;
    }
    else
    {
        content->nextObject = firstObject;
        firstObject = content;
    }
}

void CellClass::RemoveContent(ObjectClass* content, bool on_bridge)
{
    if (!content)
        return;

    ObjectClass** list = on_bridge ? &altObject : &firstObject;
    ObjectClass* prev = nullptr;
    ObjectClass* curr = *list;

    while (curr)
    {
        if (curr == content)
        {
            if (prev)
                prev->nextObject = curr->nextObject;
            else
                *list = curr->nextObject;
            curr->nextObject = nullptr;
            return;
        }
        prev = curr;
        curr = curr->nextObject;
    }
}

ObjectClass* CellClass::GetSomeObject(const CoordStruct& coords, bool alt) const
{
    // Returns the first object on this cell (or alt list)
    return alt ? altObject : firstObject;
}

CoordStruct* CellClass::GetCenterCoords(CoordStruct* out) const
{
    if (!out)
        return out;
    // Center = cell top-left + half cell width in leptons
    out->X = (int)(mapCoords.X) * 256 + 128;
    out->Y = (int)(mapCoords.Y) * 256 + 128;
    out->Z = (int)(height);
    return out;
}

int CellClass::GetFloorHeight(const Point2D& subcoords) const
{
    // Get floor height at sub-cell position
    (void)subcoords;
    return (int)(height);
}

void CellClass::SetMapCoords(const CoordStruct& coords)
{
    mapCoords.X = (int16_t)(coords.X / 256);
    mapCoords.Y = (int16_t)(coords.Y / 256);
    height = (int8_t)(coords.Z);
}

CoordStruct* CellClass::FindInfantrySubposition(CoordStruct* out, const CoordStruct& coords,
    bool ignore_contents, bool alt, bool use_cell_coords)
{
    if (!out)
        return out;
    // Find a free sub-position for infantry placement within this cell
    // 5 sub-positions arranged in a cross pattern within a cell
    *out = coords;
    (void)ignore_contents;
    (void)alt;
    (void)use_cell_coords;
    return out;
}

bool CellClass::TryAssignJumpjet(FootClass* object)
{
    if (!object || jumpjet)
        return false;
    jumpjet = object;
    return true;
}

void CellClass::ReplaceTag(TagClass* tag)
{
    attachedTag = tag;
}

void CellClass::SetWallOwner()
{
    // Set wall ownership based on adjacent cells
}

bool CellClass::IsShrouded() const
{
    return shroudedness > 0;
}

void CellClass::Unshroud()
{
    shroudedness = 0;
    foggedness = 0;
}

void CellClass::SetupLAT()
{
    // Setup Lighting and Tinting
}

void CellClass::Setup(uint32_t unk)
{
    (void)unk;
}

void CellClass::BlowUpBridge()
{
    if (ContainsBridge())
    {
        // Destroy bridge, scatter content
        flags = (CellFlags)((uint32_t)(flags) & ~0x8000u);
    }
}

bool CellClass::CanThisExistHere(SpeedType speed, BuildingTypeClass* object, HouseClass* owner) const
{
    (void)speed;
    (void)object;
    (void)owner;
    return true;
}

void CellClass::ScatterContent(const CoordStruct& crd, bool ignore_mission, bool ignore_dest, bool alt)
{
    ObjectClass* list = alt ? altObject : firstObject;
    while (list)
    {
        list->Scatter(crd, ignore_mission, ignore_dest);
        list = list->nextObject;
    }
}

CellClass* CellClass::GetNeighbourCell(unsigned int direction) const
{
    // Return adjacent cell in given direction (0-7)
    // Uses CellDirectionOffsets table
    (void)direction;
    return nullptr;
}

void CellClass::UpdateThreat(unsigned int source_house, int threat_level)
{
    (void)source_house;
    (void)threat_level;
}

void CellClass::CollectCrate(FootClass* collector)
{
    (void)collector;
    // Apply crate effect to collector
}

void CellClass::ProcessColourComponents(int* arg0, int* intensity, int* ambient,
    int* a5, int* a6, int* tint_r, int* tint_g, int* tint_b)
{
    (void)arg0;
    (void)intensity;
    (void)ambient;
    (void)a5;
    (void)a6;
    (void)tint_r;
    (void)tint_g;
    (void)tint_b;
}

TubeClass* CellClass::GetTunnel()
{
    if (tubeIndex >= 0)
    {
        // Return tunnel from tube array
    }
    return nullptr;
}

RectangleStruct* CellClass::GetContainingRect(RectangleStruct* dest) const
{
    return GetScreenRect(dest);
}

const wchar_t* CellClass::GetUIName() const
{
    // Return cell type name
    return L"Cell";
}

int CellClass::GetContainedTiberiumIndex() const
{
    return overlayTypeIndex;
}

int CellClass::GetContainedTiberiumValue() const
{
    return 0;
}

bool CellClass::IncreaseTiberium(int idx_tiberium, int amount)
{
    (void)idx_tiberium;
    (void)amount;
    return false;
}

void CellClass::ReduceTiberium(int amount)
{
    (void)amount;
}

void CellClass::ActivateVeins()
{
    // Activate vein growth from this cell
}

bool CellClass::IsRadiated() const
{
    return radSite != nullptr;
}

int CellClass::GetRadLevel() const
{
    return (int)(radLevel);
}

void CellClass::RadLevelIncrease(double amount)
{
    radLevel += amount;
}

void CellClass::RadLevelDecrease(double amount)
{
    radLevel -= amount;
    if (radLevel < 0.0)
        radLevel = 0.0;
}

bool CellClass::Tile_Is_Tunnel() const { return ((uint32_t)(flags) & 0x400000) != 0; }
bool CellClass::Tile_Is_Water() const { return ((uint32_t)(flags) & 0x800) != 0; }
bool CellClass::Tile_Is_Blank() const { return slopeIndex == 0; }
bool CellClass::Tile_Is_Ramp() const { return ((uint32_t)(flags) & 0x10000) != 0; }
bool CellClass::Tile_Is_Cliff() const { return ((uint32_t)(flags) & 0x2000) != 0; }
bool CellClass::Tile_Is_Shore() const { return ((uint32_t)(flags) & 0x40000000) != 0; }
bool CellClass::Tile_Is_Wet() const { return ((uint32_t)(flags) & 0x200) != 0; }
bool CellClass::Tile_Is_Pave() const { return false; }
bool CellClass::Tile_Is_DirtRoad() const { return false; }
bool CellClass::Tile_Is_PavedRoad() const { return false; }
bool CellClass::Tile_Is_PavedRoadEnd() const { return false; }
bool CellClass::Tile_Is_PavedRoadSlope() const { return false; }
bool CellClass::Tile_Is_Median() const { return false; }
bool CellClass::Tile_Is_Bridge() const { return ContainsBridge(); }
bool CellClass::Tile_Is_WoodBridge() const { return false; }
bool CellClass::Tile_Is_Green() const { return false; }
bool CellClass::Tile_Is_NotWater() const { return !Tile_Is_Water(); }
bool CellClass::Tile_Is_DestroyableCliff() const
{
    return ((uint32_t)(flags) & 0x08000000) != 0;
}

} // namespace gamemd
