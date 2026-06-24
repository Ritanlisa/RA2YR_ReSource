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

    // design: inline accessor, inlined at all call sites
    AbstractType whatAmI() const { return AbstractType::Cell; }

    // design: inline accessor, inlined at all call sites
    CoordStruct fetchCoordinatesHere() const { return Cell2Coord(mapCoords, height); }

    static CoordStruct Cell2Coord(const CellStruct& cell, int z = 0)
    {
        return CoordStruct(cell.X * 256 + 128, cell.Y * 256 + 128, z);
    }

    static CellStruct Coord2Cell(const CoordStruct& crd)
    {
        return CellStruct(static_cast<int16_t>(crd.X / 256), static_cast<int16_t>(crd.Y / 256));
    }

    // design: no binary equivalent found in IDA
    TechnoClass* FindTechnoNearestTo(const Point2D& offset, bool alt, const TechnoClass* exclude = nullptr) const;
    // design: no binary equivalent found in IDA
    ObjectClass* FindObjectOfType(AbstractType type, bool alt) const;
    // design: no binary equivalent found in IDA
    BuildingClass* GetBuilding() const;
    // design: no binary equivalent found in IDA
    UnitClass* GetUnit(bool alt) const;
    InfantryClass* GetInfantry(bool alt) const;  // 0x7404B0
    // wrapper: delegates to TechnoClass::GetInfantryCursorAction at 0x7404B0
    AircraftClass* GetAircraft(bool alt) const;
    // wrapper: delegates to TechnoClass::GetInfantryCursorAction at 0x7404B0
    TerrainClass* GetTerrain(bool alt) const;
    // wrapper: delegates to TechnoClass::GetInfantryCursorAction at 0x7404B0
    ObjectClass* GetSomeObject(const CoordStruct& coords, bool alt) const;

    void SetWallOwner();  // 0x47D210
    // wrapper: delegates to CellClass::SetWallOwner at 0x47D210
    bool IsShrouded() const;
    void Unshroud();  // 0x4876F0
    // wrapper: delegates to CellClass::Unshroud at 0x4876F0
    void SetupLAT();
    void Setup(uint32_t unk);
    // wrapper: delegates to CampaignCoop::Setup at 0x5C21D0
    void BlowUpBridge();
    // wrapper: delegates to CampaignCoop::Setup at 0x5C21D0
    bool CanThisExistHere(SpeedType speed, BuildingTypeClass* object, HouseClass* owner) const;
    // wrapper: delegates to CampaignCoop::Setup at 0x5C21D0
    void ScatterContent(const CoordStruct& crd, bool ignore_mission, bool ignore_dest, bool alt);
    // wrapper: delegates to CampaignCoop::Setup at 0x5C21D0
    CellClass* GetNeighbourCell(unsigned int direction) const;
    void UpdateThreat(unsigned int source_house, int threat_level);
    // wrapper: delegates to FootClass::updateThreat at 0x70F7E0
    void CollectCrate(FootClass* collector);
    // wrapper: delegates to FootClass::updateThreat at 0x70F7E0
    void ProcessColourComponents(int* arg0, int* intensity, int* ambient, int* a5, int* a6, int* tint_r, int* tint_g, int* tint_b);
    // wrapper: delegates to FootClass::updateThreat at 0x70F7E0
    TubeClass* GetTunnel();
    // wrapper: delegates to FootClass::updateThreat at 0x70F7E0
    RectangleStruct* GetContainingRect(RectangleStruct* dest) const;
    const wchar_t* GetUIName() const;  // 0x484FF0
    // wrapper: delegates to CellClass::GetUIName at 0x484FF0
    bool ConnectsToOverlay(int idx_overlay = -1, int direction = -1) const;
    // wrapper: delegates to CellClass::GetUIName at 0x484FF0
    int GetContainedTiberiumIndex() const;
    // wrapper: delegates to CellClass::GetUIName at 0x484FF0
    int GetContainedTiberiumValue() const;
    // wrapper: delegates to CellClass::GetUIName at 0x484FF0
    bool IncreaseTiberium(int idx_tiberium, int amount);
    void ReduceTiberium(int amount);  // 0x480A80
    void SetMapCoords(const CoordStruct& coords);
    // wrapper: delegates to AbstractClass::setMapCoords at 0x427270
    int GetFloorHeight(const Point2D& subcoords) const;
    // wrapper: delegates to AbstractClass::setMapCoords at 0x427270
    CoordStruct* GetCenterCoords(CoordStruct* out) const;
    // design: inline accessor, inlined at all call sites
    CoordStruct GetCenterCoords() const { CoordStruct buf; GetCenterCoords(&buf); return buf; }
    // wrapper: delegates to AbstractClass::setMapCoords at 0x427270
    void ActivateVeins();
    // wrapper: delegates to AbstractClass::setMapCoords at 0x427270
    bool DrawObjectsCloaked(int owner_house_idx) const;

    // design: inline accessor, inlined at all call sites
    bool CloakGen_InclHouse(unsigned int idx) const { return (cloakedByHouses & (1u << idx)) != 0; }
    // design: inline accessor, inlined at all call sites
    void CloakGen_AddHouse(unsigned int idx) { cloakedByHouses |= 1u << idx; }
    // design: inline accessor, inlined at all call sites
    void CloakGen_RemHouse(unsigned int idx) { cloakedByHouses &= ~(1u << idx); }

    // design: no binary equivalent found in IDA
    bool Sensors_InclHouse(unsigned int idx) const;
    // design: no binary equivalent found in IDA
    void Sensors_AddOfHouse(unsigned int idx);
    // design: no binary equivalent found in IDA
    void Sensors_RemOfHouse(unsigned int idx);

    // design: no binary equivalent found in IDA
    bool DisguiseSensors_InclHouse(unsigned int idx) const;
    // design: no binary equivalent found in IDA
    void DisguiseSensors_AddOfHouse(unsigned int idx);
    // design: no binary equivalent found in IDA
    void DisguiseSensors_RemOfHouse(unsigned int idx);

    // design: inline accessor, inlined at all call sites
    void SetRadSite(RadSiteClass* rad) { radSite = rad; }
    // design: inline accessor, inlined at all call sites
    RadSiteClass* GetRadSite() const { return radSite; }
    // design: no binary equivalent found in IDA
    bool IsRadiated() const;
    int GetRadLevel() const;
    // wrapper: delegates to RadSiteClass::GetRadLevelAt at 0x65B8F0
    void RadLevelIncrease(double amount);
    // wrapper: delegates to RadSiteClass::GetRadLevelAt at 0x65B8F0
    void RadLevelDecrease(double amount);

    // design: inline accessor, inlined at all call sites
    bool ContainsBridge() const { return (static_cast<uint32_t>(flags) & 0x8000u) != 0; }
    // design: inline accessor, inlined at all call sites
    ObjectClass* GetContent() const { return ContainsBridge() ? altObject : firstObject; }
    // design: inline accessor, inlined at all call sites
    int GetLevel() const { return level + (ContainsBridge() ? kBridgeLevels : 0); }

    // design: no binary equivalent found in IDA
    bool Tile_Is_Tunnel() const;
    // design: no binary equivalent found in IDA
    bool Tile_Is_Water() const;
    // design: no binary equivalent found in IDA
    bool Tile_Is_Blank() const;
    // design: no binary equivalent found in IDA
    bool Tile_Is_Ramp() const;
    // design: no binary equivalent found in IDA
    bool Tile_Is_Cliff() const;
    // design: no binary equivalent found in IDA
    bool Tile_Is_Shore() const;
    // design: no binary equivalent found in IDA
    bool Tile_Is_Wet() const;
    // design: no binary equivalent found in IDA
    bool Tile_Is_Pave() const;
    // design: no binary equivalent found in IDA
    bool Tile_Is_DirtRoad() const;
    // design: no binary equivalent found in IDA
    bool Tile_Is_PavedRoad() const;
    // design: no binary equivalent found in IDA
    bool Tile_Is_PavedRoadEnd() const;
    // design: no binary equivalent found in IDA
    bool Tile_Is_PavedRoadSlope() const;
    // design: no binary equivalent found in IDA
    bool Tile_Is_Median() const;
    // design: no binary equivalent found in IDA
    bool Tile_Is_Bridge() const;
    // design: no binary equivalent found in IDA
    bool Tile_Is_WoodBridge() const;
    // design: no binary equivalent found in IDA
    bool Tile_Is_Green() const;
    // design: no binary equivalent found in IDA
    bool Tile_Is_NotWater() const;
    // design: no binary equivalent found in IDA
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

    // design: no binary equivalent found in IDA
    void MarkForRedraw();
    // design: no binary equivalent found in IDA
    void ChainReaction();
    void Draw(const Point2D* screen_pos, const RectangleStruct* bounds) const;  // 0x48e5a0
    void DrawDispatch(const Point2D* screen_pos, const RectangleStruct* bounds) const;  // 0x4E2830
    void DrawWithFlags(const Point2D* screen_pos, const RectangleStruct* bounds, int flags) const;  // 0x557830
    RectangleStruct* GetScreenRect(RectangleStruct* out) const;  // 0x47FF80
    void RegisterForRedraw();  // 0x7235A0
    void DrawWrapper(const Point2D* screen_pos, const RectangleStruct* bounds) const;  // 0x653F50
    bool QuickPassable() const;  // 0x487950
    // wrapper: delegates to CellClass::QuickPassable at 0x487950
    CoordStruct* FindInfantrySubposition(CoordStruct* out, const CoordStruct& coords, bool ignore_contents, bool alt, bool use_cell_coords);
    CoordStruct FindInfantrySubposition(const CoordStruct& coords, bool ignore_contents, bool alt, bool use_cell_coords)
    {
        CoordStruct buf;
        FindInfantrySubposition(&buf, coords, ignore_contents, alt, use_cell_coords);
        return buf;
    }
    // design: no binary equivalent found in IDA
    bool TryAssignJumpjet(FootClass* object);
    void AddContent(ObjectClass* content, bool on_bridge);  // 0x47E8A0
    void RemoveContent(ObjectClass* content, bool on_bridge);  // 0x47EA90
    // wrapper: delegates to CellClass::RemoveContent at 0x47EA90
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
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int ClearOccupancyGrid();  // 0x42A5B0
    int setOverlayType(int a1);  // 0x42AC00
    int setTileIndex(int a1);  // 0x42E6D0
    bool Get(void* a1);  // 0x452940
    int SetField2C();  // 0x45A170
    bool HasContent();  // 0x4722C0
    void AddObject(void* a1);  // 0x4733A0
    void DTOR();  // 0x47BB60
    void* Construct();  // 0x47BBF0
    void* FindInfantry(int a1);  // 0x47C550
    int IsPassable(int a1, int a2, int a3);  // 0x47C620
    bool DetermineTileType();  // 0x47CA80
    void UpdateAnimations();  // 0x47DD70
    void* FindBuilding(int a1);  // 0x47EBA0
    void* GetCoords(void* a1);  // 0x480A30
    int InitRandomOffsets(int a1, int a2);  // 0x4814F0
    int SetThreatBounds(int a1, int a2);  // 0x481870
    int DamageAllObjects();  // 0x483480
    int SpawnTiberiumTree(int a1);  // 0x483780
    int SaveLoad_Prefix();  // 0x4839F0
    int SaveLoad_Prefix_0();  // 0x483C10
    int ddtor();  // 0x485200
    int GetBridgeBitfield();  // 0x485390
    void ProcessBridgeRepair();  // 0x485590
    bool IsTerrainType();  // 0x4865B0
    bool InMapDataRange();  // 0x486650
    bool InBounds();  // 0x486670
    int GetCellType();  // 0x4867E0
    int GetOccupier();  // 0x486840
    int CheckProperty();  // 0x486890
    bool IsActiveOrNext();  // 0x486900
    int CreateFoggedObjects();  // 0x486A70
    void* UpdateZone();  // 0x486BF0
    int ClearCellContents();  // 0x486C50
    void RadLevel_Increase(double a1);  // 0x487CE0
    void RadLevel_Decrease(double a1);  // 0x487D00
    int AttachObject(int a1);  // 0x487D70
    int CopyTo();  // 0x487E80
    void* clearOccupationFlags(int a1, int a2);  // 0x488080
    int Cleanup();  // 0x4A1750
    int DestroyOverlay();  // 0x4A1AA0
    void* FindOpenNeighbor(void* a1, int a2, int a3, int a4, int a5, int a6, int a7);  // 0x4AA440
    int CheckBuildablePair(void* a1, void* a2, int a3, int a4, int a5);  // 0x4AAB30
    int ProcessVisibility(void* a1);  // 0x4ACC50
    int recalcPassability();  // 0x4D2790
    void* ScanOccupiers(void* a1);  // 0x500300
    int IterateOccupiers(int a1);  // 0x50D250
    int GetTerrainFlag(int a1);  // 0x5471F0
    void* GetScreenCenterOffset(void* a1, void* a2);  // 0x565520
    void UpdateTerrainAndWaypoints(void* a1, int a2, int a3, int a4);  // 0x565C10
    void* BuildPathfindingGraph();  // 0x567110
    int LoadTerrainTiles(int a1);  // 0x56B5A0
    int CreateOverlay(int a1);  // 0x56B780
    int DecompressRawCellData(int a1);  // 0x56B8A0
    int DecompressTerrainDataSimple(int a1);  // 0x56B9A0
    int DecompressTerrainData(int a1);  // 0x56BAC0
    int CreateBuildingCrater(void* a1);  // 0x56C020
    int DetermineTileConnectivity(void* a1);  // 0x56D5A0
    int RecursiveTileUpdate(void* a1, int a2, void* a3);  // 0x570AE0
    int ProcessTileChange(int a1);  // 0x571050
    int PropagateTerrainVariant2(void* a1);  // 0x571490
    int ApplyTerrainModTile(int a1);  // 0x5749C0
    int ApplyCliffMod2(void* a1);  // 0x575220
    int ApplyCliffMod(void* a1);  // 0x575540
    int ApplyTerrainMod2(void* a1);  // 0x575870
    int ApplyTerrainMod(void* a1);  // 0x575BA0
    int RecursiveCraterUpdate(void* a1, int a2, void* a3);  // 0x576200
    int PropagateTerrainVariant5(void* a1);  // 0x576BA0
    int ApplyTileModification(void* a1);  // 0x57BCF0
    int ApplyTileModification2(void* a1);  // 0x57C2B0
    int ApplyTileModification3(void* a1);  // 0x57CF60
    int ApplyTileModification4(void* a1);  // 0x57D530
    void ApplyCliffTileModifications(int a1);  // 0x57F200
    void ApplyTileMod58(int a1);  // 0x57F440
    void ApplyTileModification6(void* a1);  // 0x57F6A0
    void ApplyTileModification7(void* a1);  // 0x57FBC0
    void ApplyTileModification5(void* a1);  // 0x5800D0
    void ApplyTileModification8(void* a1);  // 0x580600
    bool updateLighting();  // 0x580B20
    bool applyTileDamage();  // 0x580B70
    int SetTerrainType(void* a1);  // 0x587180
    int CheckConnectivity(int a1);  // 0x587410
    int CopyNeighborData(int a1);  // 0x588C10
    void* initCellData(void* a1);  // 0x588C40
    int Reset();  // 0x5A38C0
    int ProcessUpdate();  // 0x5A7B40
    int LockSurface();  // 0x5B5EF0
    int SetOccupancy();  // 0x5B9F30
    int GetBridgeIndexThunk();  // 0x5F1EE0
    void RevealFogRect(void* a1);  // 0x6565A0
    int CreateInstance();  // 0x68EC20
    int IsBuildable();  // 0x6B25C0
    int Find(int a1, int a2, int a3, int a4);  // 0x6E18B0
    int ClearCrateStateForAll();  // 0x722AB0
    // --- gap2 auto-generated stub declarations (END) ---
};

} // namespace gamemd
