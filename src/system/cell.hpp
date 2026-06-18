#pragma once

#include <cstdint>
#include "object/abstract.hpp"
#include "core/enums.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_CoordStruct
#define GAMEMD_USING_CoordStruct
using ra2::game::CoordStruct;
#endif
#ifndef GAMEMD_USING_CellStruct
#define GAMEMD_USING_CellStruct
using ra2::game::CellStruct;
#endif
#ifndef GAMEMD_USING_Point2D
#define GAMEMD_USING_Point2D
using ra2::game::Point2D;
#endif
#ifndef GAMEMD_USING_RectangleStruct
#define GAMEMD_USING_RectangleStruct
using ra2::game::RectangleStruct;
#endif
#ifndef GAMEMD_USING_TimerStruct
#define GAMEMD_USING_TimerStruct
using ra2::game::TimerStruct;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif

class BuildingClass;
class BuildingTypeClass;
class UnitClass;
class InfantryClass;
class AircraftClass;
class TerrainClass;
class FootClass;
class HouseClass;
class LightConvertClass;
class RadSiteClass;
class TubeClass;
class FoggedObjectClass;
class TagClass;
#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif
#ifndef GAMEMD_USING_TechnoClass
#define GAMEMD_USING_TechnoClass
using ra2::game::TechnoClass;
#endif

enum class LandType : int;
enum class SpeedType : int;

struct CellData
{
    uint32_t occupationFlags;
    uint32_t altOccupationFlags;
};

enum class CellFlags : uint32_t
{
    None                        = 0x00000000,
    IsCenterPlot                = 0x00000001,
    CellFlags_field_02                  = 0x00000002,
    CellFlags_field_04                  = 0x00000004,
    CellFlags_field_08                  = 0x00000008,
    CellFlags_field_10                  = 0x00000010,
    CellFlags_field_20                  = 0x00000020,
    CellFlags_field_40                  = 0x00000040,
    CellFlags_field_80                  = 0x00000080,
    CellFlags_field_100                 = 0x00000100,
    CellFlags_field_200                 = 0x00000200,
    Flat                        = 0x00000400,
    CellFlags_field_800                 = 0x00000800,
    CellFlags_field_1000                = 0x00001000,
    CellFlags_field_2000                = 0x00002000,
    CellFlags_field_4000                = 0x00004000,
    Bridge                      = 0x00008000,
    CellFlags_field_10000               = 0x00010000,
    CellFlags_field_20000               = 0x00020000,
    CellFlags_field_40000               = 0x00040000,
    CellFlags_field_80000               = 0x00080000,
    CellFlags_field_100000              = 0x00100000,
    CellFlags_field_200000              = 0x00200000,
    CellFlags_field_400000              = 0x00400000,
    CellFlags_field_800000              = 0x00800000,
    CellFlags_field_1000000             = 0x01000000,
    CellFlags_field_2000000             = 0x02000000,
    CellFlags_field_4000000             = 0x04000000,
    DestroyableCliff            = 0x08000000,
    CellFlags_field_10000000            = 0x10000000,
    HasCrater                   = 0x20000000,
    CellFlags_field_40000000            = 0x40000000,
    CellFlags_field_80000000            = 0x80000000,
};

class CellClass
{
public:
    static constexpr int kBridgeLevels = 4;
    static constexpr int kBridgeHeight = kBridgeLevels * 60;

    ~CellClass() = default;

    AbstractType whatAmI() const { return AbstractType::Cell; }

    CoordStruct fetchCoordinatesHere() const { return Cell2Coord(mapCoords, height); }

    static CoordStruct Cell2Coord(const CellStruct& cell, int z = 0)
    {
        return CoordStruct(cell.X * 256 + 128, cell.Y * 256 + 128, z);
    }

    static CellStruct Coord2Cell(const CoordStruct& crd)
    {
        return CellStruct(static_cast<int16_t>(crd.X / 256), static_cast<int16_t>(crd.Y / 256));
    }

    TechnoClass* FindTechnoNearestTo(const Point2D& offset, bool alt, const TechnoClass* exclude = nullptr) const;
    ObjectClass* FindObjectOfType(AbstractType type, bool alt) const;
    BuildingClass* GetBuilding() const;
    UnitClass* GetUnit(bool alt) const;
    InfantryClass* GetInfantry(bool alt) const;
    AircraftClass* GetAircraft(bool alt) const;
    TerrainClass* GetTerrain(bool alt) const;
    ObjectClass* GetSomeObject(const CoordStruct& coords, bool alt) const;

    void SetWallOwner();
    bool IsShrouded() const;
    void Unshroud();
    void SetupLAT();
    void Setup(uint32_t unk);
    void BlowUpBridge();
    bool CanThisExistHere(SpeedType speed, BuildingTypeClass* object, HouseClass* owner) const;
    void ScatterContent(const CoordStruct& crd, bool ignore_mission, bool ignore_dest, bool alt);
    CellClass* GetNeighbourCell(unsigned int direction) const;
    void UpdateThreat(unsigned int source_house, int threat_level);
    void CollectCrate(FootClass* collector);
    void ProcessColourComponents(int* arg0, int* intensity, int* ambient, int* a5, int* a6, int* tint_r, int* tint_g, int* tint_b);
    TubeClass* GetTunnel();
    RectangleStruct* GetContainingRect(RectangleStruct* dest) const;
    const wchar_t* GetUIName() const;
    bool ConnectsToOverlay(int idx_overlay = -1, int direction = -1) const;
    int GetContainedTiberiumIndex() const;
    int GetContainedTiberiumValue() const;
    bool IncreaseTiberium(int idx_tiberium, int amount);
    void ReduceTiberium(int amount);
    void SetMapCoords(const CoordStruct& coords);
    int GetFloorHeight(const Point2D& subcoords) const;
    CoordStruct* GetCenterCoords(CoordStruct* out) const;
    CoordStruct GetCenterCoords() const { CoordStruct buf; GetCenterCoords(&buf); return buf; }
    void ActivateVeins();
    bool DrawObjectsCloaked(int owner_house_idx) const;

    bool CloakGen_InclHouse(unsigned int idx) const { return (cloakedByHouses & (1u << idx)) != 0; }
    void CloakGen_AddHouse(unsigned int idx) { cloakedByHouses |= 1u << idx; }
    void CloakGen_RemHouse(unsigned int idx) { cloakedByHouses &= ~(1u << idx); }

    bool Sensors_InclHouse(unsigned int idx) const;
    void Sensors_AddOfHouse(unsigned int idx);
    void Sensors_RemOfHouse(unsigned int idx);

    bool DisguiseSensors_InclHouse(unsigned int idx) const;
    void DisguiseSensors_AddOfHouse(unsigned int idx);
    void DisguiseSensors_RemOfHouse(unsigned int idx);

    void SetRadSite(RadSiteClass* rad) { radSite = rad; }
    RadSiteClass* GetRadSite() const { return radSite; }
    bool IsRadiated() const;
    int GetRadLevel() const;
    void RadLevelIncrease(double amount);
    void RadLevelDecrease(double amount);

    bool ContainsBridge() const { return (static_cast<uint32_t>(flags) & 0x8000u) != 0; }
    ObjectClass* GetContent() const { return ContainsBridge() ? altObject : firstObject; }
    int GetLevel() const { return level + (ContainsBridge() ? kBridgeLevels : 0); }

    bool Tile_Is_Tunnel() const;
    bool Tile_Is_Water() const;
    bool Tile_Is_Blank() const;
    bool Tile_Is_Ramp() const;
    bool Tile_Is_Cliff() const;
    bool Tile_Is_Shore() const;
    bool Tile_Is_Wet() const;
    bool Tile_Is_Pave() const;
    bool Tile_Is_DirtRoad() const;
    bool Tile_Is_PavedRoad() const;
    bool Tile_Is_PavedRoadEnd() const;
    bool Tile_Is_PavedRoadSlope() const;
    bool Tile_Is_Median() const;
    bool Tile_Is_Bridge() const;
    bool Tile_Is_WoodBridge() const;
    bool Tile_Is_Green() const;
    bool Tile_Is_NotWater() const;
    bool Tile_Is_DestroyableCliff() const;

    CoordStruct FixHeight(CoordStruct crd) const
    {
        if (ContainsBridge()) crd.Z += kBridgeHeight;
        return crd;
    }

    CoordStruct GetCoordsWithBridge() const
    {
        return FixHeight(fetchCoordinatesHere());
    }

    void MarkForRedraw();
    void ChainReaction();
    void Draw(const Point2D* screen_pos, const RectangleStruct* bounds) const;
    void DrawDispatch(const Point2D* screen_pos, const RectangleStruct* bounds) const;
    void DrawWithFlags(const Point2D* screen_pos, const RectangleStruct* bounds, int flags) const;
    RectangleStruct* GetScreenRect(RectangleStruct* out) const;
    void RegisterForRedraw();
    void DrawWrapper(const Point2D* screen_pos, const RectangleStruct* bounds) const;
    bool QuickPassable() const;
    CoordStruct* FindInfantrySubposition(CoordStruct* out, const CoordStruct& coords, bool ignore_contents, bool alt, bool use_cell_coords);
    CoordStruct FindInfantrySubposition(const CoordStruct& coords, bool ignore_contents, bool alt, bool use_cell_coords)
    {
        CoordStruct buf;
        FindInfantrySubposition(&buf, coords, ignore_contents, alt, use_cell_coords);
        return buf;
    }
    bool TryAssignJumpjet(FootClass* object);
    void AddContent(ObjectClass* content, bool on_bridge);
    void RemoveContent(ObjectClass* content, bool on_bridge);
    void ReplaceTag(TagClass* tag);

    CellStruct              mapCoords;
    void*                   foggedObjects;
    CellClass*              bridgeOwnerCell;
    uint32_t                unknown30;
    LightConvertClass*      lightConvert;
    int                     isoTileTypeIndex;
    TagClass*               attachedTag;
    BuildingTypeClass*      rubble;
    int                     overlayTypeIndex;
    int                     smudgeTypeIndex;
    uint32_t                CellClass_field_4C;
    int                     wallOwnerIndex;
    int                     infantryOwnerIndex;
    int                     altInfantryOwnerIndex;
    uint32_t                CellClass_field_5C;
    uint32_t                unknown60;
    uint32_t                unknown64;
    uint32_t                unknown68;
    uint32_t                CellClass_field_6C;
    uint32_t                unknown70;
    uint32_t                unknown74;
    uint32_t                cloakedByHouses;

    unsigned short          sensorsOfHouses[24];
    unsigned short          disguiseAsType_sensors_of_houses[24];

    uint32_t                baseSpacerOfHouses;
    FootClass*              jumpjet;
    ObjectClass*            firstObject;
    ObjectClass*            altObject;
    int                     landType;
    double                  radLevel;
    RadSiteClass*           radSite;
    uint32_t                CellClass_field_FC;
    int                     occupyHeightsCoveringMe;
    uint32_t                unknown104;
    uint16_t                unknown108;
    uint16_t                CellClass_field_10A;
    uint16_t                CellClass_field_10C;
    uint16_t                CellClass_field_10E;
    uint16_t                unknown110;
    uint16_t                unknown112;
    uint16_t                unknown114;
    int16_t                 tubeIndex;
    int8_t                  unknown118;
    int8_t                  unknown119;
    int8_t                  height;
    int8_t                  level;
    uint8_t                 slopeIndex;
    uint8_t                 CellClass_field_11D;
    uint8_t                 powerup;
    uint8_t                 CellClass_field_11F;
    int8_t                  shroudedness;
    int8_t                  foggedness;
    uint8_t                 blockedNeighbours;
    uint8_t                 align123;
    uint32_t                occupationFlags;
    uint32_t                altOccupationFlags;
    int32_t                 copyFlags;
    int32_t                 shroudCounter;
    uint32_t                gapsCoveringThisCell;
    bool                    visibilityChanged;
    uint8_t                 align139[3];
    uint32_t                CellClass_field_13C;
    CellFlags               flags;
    uint8_t                 padding144[4];

protected:
    CellClass();
};

} // namespace gamemd
