#pragma once

#include <cstdint>
#include "..\object\abstract.hpp"
#include "..\core\enums.hpp"

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
    uint32_t m_occupation_flags;
    uint32_t m_alt_occupation_flags;
};

enum class CellFlags : uint32_t
{
    Empty                       = 0x00000000,
    CenterRevealed              = 0x00000001,
    EdgeRevealed                = 0x00000002,
    IsWaypoint                  = 0x00000004,
    Explored                    = 0x00000008,  // no shroud covering this cell
    FlagPresent                 = 0x00000010,
    FlagToShroud                = 0x00000020,
    IsPlot                      = 0x00000040,
    BridgeOwner                 = 0x00000080,  // repair hut position, see 571FEB
    BridgeHead                  = 0x00000100,  // see 570254
    Flag_00000200               = 0x00000200,  // YRpp: Unknown_200
    BridgeBody                  = 0x00000400,
    BridgeDir                   = 0x00000800,  // see 570288 and 57036D
    PixelFX                     = 0x00001000,  // see 6D7A91
    Flag_00002000               = 0x00002000,  // YRpp: Unknown_2000
    Flag_00004000               = 0x00004000,  // YRpp: Unknown_4000
    Veinhole                    = 0x00008000,  // see 74E4A3
    DrawDarkenIfInAir           = 0x00010000,  // see 51936F and 73D084
    AnimAttached                = 0x00020000,
    Tube                        = 0x00040000,  // see 42B5B8
    EMPPresent                  = 0x00080000,
    HorizontalLineEventTag      = 0x00100000,
    VerticalLineEventTag        = 0x00200000,
    Fogged                      = 0x00400000,
    // Combined flags
    Revealed                    = CenterRevealed | EdgeRevealed,
    Bridge                      = BridgeHead | BridgeBody,
    // Higher-bit flags (TODO: verify if these belong to a separate AltFlags enum)
    DestroyableCliff            = 0x08000000,
    Hashigh_10000000            = 0x10000000,
    HasCrater                   = 0x20000000,
    Hashigh_40000000            = 0x40000000,
    Hashigh_80000000            = 0x80000000,
};

class CellClass
{
public:
    static constexpr int kBridgeLevels = 4;
    static constexpr int kBridgeHeight = kBridgeLevels * 60;

    ~CellClass() = default;

    AbstractType WhatAmI() const { return AbstractType::Cell; }

    CoordStruct GetCoords() const { return Cell2Coord(m_map_coords, m_height); }

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
    bool Draw(int flags, void** out, int a4);   // IDA: 0x48E5A0

    bool CloakGen_InclHouse(unsigned int idx) const { return (m_cloaked_by_houses & (1u << idx)) != 0; }
    void CloakGen_AddHouse(unsigned int idx) { m_cloaked_by_houses |= 1u << idx; }
    void CloakGen_RemHouse(unsigned int idx) { m_cloaked_by_houses &= ~(1u << idx); }

    bool Sensors_InclHouse(unsigned int idx) const;
    void Sensors_AddOfHouse(unsigned int idx);
    void Sensors_RemOfHouse(unsigned int idx);

    bool DisguiseSensors_InclHouse(unsigned int idx) const;
    void DisguiseSensors_AddOfHouse(unsigned int idx);
    void DisguiseSensors_RemOfHouse(unsigned int idx);

    void SetRadSite(RadSiteClass* rad) { m_rad_site = rad; }
    RadSiteClass* GetRadSite() const { return m_rad_site; }
    bool IsRadiated() const;
    int GetRadLevel() const;
    void RadLevelIncrease(double amount);
    void RadLevelDecrease(double amount);

    bool ContainsBridge() const { return (static_cast<uint32_t>(m_flags) & 0x8000u) != 0; }
    ObjectClass* GetContent() const { return ContainsBridge() ? m_alt_object : m_first_object; }
    int GetLevel() const { return m_level + (ContainsBridge() ? kBridgeLevels : 0); }

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
        return FixHeight(GetCoords());
    }

    void MarkForRedraw();
    void ChainReaction();
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

    CellStruct              m_map_coords;
    void*                   m_fogged_objects;
    CellClass*              m_bridge_owner_cell;
    uint32_t                tunnelLinkIndex;      // +0x30, init 0
    LightConvertClass*      m_light_convert;
    int                     m_iso_tile_type_index;
    TagClass*               m_attached_tag;
    BuildingTypeClass*      m_rubble;
    int                     m_overlay_type_index;
    int                     m_smudge_type_index;
    uint32_t                occupancyCounter;     // +0x4C, init 0
    int                     m_wall_owner_index;
    int                     m_infantry_owner_index;
    int                     m_alt_infantry_owner_index;
    // Per-side state data — 8 entries (IDA: dwords 23-30, init to 0)
    uint32_t                sideStateData[8];     // +0x5C to +0x74
    uint32_t                m_cloaked_by_houses;

    unsigned short          m_sensors_of_houses[24];
    unsigned short          m_disguise_sensors_of_houses[24];

    uint32_t                m_base_spacer_of_houses;
    FootClass*              m_jumpjet;
    ObjectClass*            m_first_object;
    ObjectClass*            m_alt_object;
    int                     m_land_type;
    double                  m_rad_level;
    RadSiteClass*           m_rad_site;
    uint32_t                passabilityFlags;     // +0xFC, init 0
    int                     m_occupy_heights_covering_me;
    uint32_t                blockageState;        // +0x104, init 0
    uint16_t                terrainOverlayType0;  // +0x108
    uint16_t                terrainOverlayType1;  // +0x10A
    uint16_t                terrainOverlayType2;  // +0x10C
    uint16_t                terrainOverlayType3;  // +0x10E
    uint16_t                terrainOverlayType4;  // +0x110
    uint16_t                terrainOverlayType5;  // +0x112
    uint16_t                terrainOverlayType6;  // +0x114
    int16_t                 m_tube_index;
    int8_t                  passageDirection1;    // +0x118
    int8_t                  passageDirection2;    // +0x119
    int8_t                  m_height;
    int8_t                  m_level;
    uint8_t                 m_slope_index;
    uint8_t                 bridgeState;          // +0x11D (init 0)
    uint8_t                 m_powerup;
    uint8_t                 radarVisibility;      // +0x11F (init 0)
    int8_t                  m_shroudedness;
    int8_t                  m_foggedness;
    uint8_t                 m_blocked_neighbours;
    uint8_t                 align_123;
    uint32_t                m_occupation_flags;
    uint32_t                m_alt_occupation_flags;
    int32_t                 m_copy_flags;
    int32_t                 m_shroud_counter;
    uint32_t                m_gaps_covering_this_cell;
    bool                    m_visibility_changed;
    uint8_t                 align_139[3];
    uint32_t                morphFlags;           // +0x13C, init 0
    CellFlags               m_flags;
    uint8_t                 padding_144[4];

protected:
    CellClass();
};

} // namespace gamemd
