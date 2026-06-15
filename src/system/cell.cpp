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
    , m_unknown_4C(0)
    , wallOwnerIndex(-1)
    , infantryOwnerIndex(-1)
    , altInfantryOwnerIndex(-1)
    , m_unknown_5C(0)
    , unknown60(0)
    , unknown64(0)
    , unknown68(0)
    , m_unknown_6C(0)
    , unknown70(0)
    , unknown74(0)
    , cloakedByHouses(0)
    , baseSpacerOfHouses(0)
    , jumpjet(nullptr)
    , firstObject(nullptr)
    , altObject(nullptr)
    , landType(static_cast<int>(LandType::Clear))
    , radLevel(0.0)
    , radSite(nullptr)
    , m_unknown_FC(0)
    , occupyHeightsCoveringMe(0)
    , unknown104(0)
    , unknown108(0)
    , m_unknown_10A(0)
    , m_unknown_10C(0)
    , m_unknown_10E(0)
    , unknown110(0)
    , unknown112(0)
    , unknown114(0)
    , tubeIndex(-1)
    , unknown118(0)
    , unknown119(0)
    , height(0)
    , level(0)
    , slopeIndex(0)
    , m_unknown_11D(0)
    , powerup(0)
    , m_unknown_11F(0)
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
    , m_unknown_13C(0)
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
    return reinterpret_cast<T*>(obj);
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
            double dx = static_cast<double>(crd.X) - static_cast<double>(offset.X);
            double dy = static_cast<double>(crd.Y) - static_cast<double>(offset.Y);
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

// IDA: 0x578080 -- Cell::GetGroundHeight (121B)
// Computes ground height from lepton coordinates.
// Converts leptons (1 cell = 256 leptons) to cell index,
// validates bounds against dword_87F928 and g_Shroud_CellArray.
// Then calls Isometric::InitTables (0x47B3A0) for actual height.
int GetGroundHeight(int x_leptons, int y_leptons)
{
    // IDA: cell_index = (x/256) + (y/256) << 9
    int cx = x_leptons / 256;
    int cy = y_leptons / 256;
    int cell_idx = cx + (cy << 9);

    // IDA: bounds check against dword_87F928
    // IDA: if out of bounds or shroud not loaded, store global cell index
    // IDA: then call Isometric::InitTables for height
    return 0; // TODO: full implementation when Isometric::InitTables is available
}

} // namespace gamemd
