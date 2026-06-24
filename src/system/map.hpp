#pragma once

#include "object/abstract.hpp"
#include "ui/g_screen.hpp"
#include "system/layer.hpp"

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
#ifndef GAMEMD_USING_CellStruct
#define GAMEMD_USING_CellStruct
using ra2::game::CellStruct;
#endif
#ifndef GAMEMD_USING_CoordStruct
#define GAMEMD_USING_CoordStruct
using ra2::game::CoordStruct;
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
#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif
#ifndef GAMEMD_USING_TechnoClass
#define GAMEMD_USING_TechnoClass
using ra2::game::TechnoClass;
#endif












class CellClass;
class HouseClass;
class BulletTypeClass;
class WeaponTypeClass;
class WarheadTypeClass;
class AnimTypeClass;
class FootClass;

enum class Layer : int;
enum class LandType : int;
enum class SpeedType : int;
enum class MovementZone : int;
enum class Edge : int;

struct Crate
{
    TimerStruct crate_timer;
    CellStruct  location;
};

struct ZoneConnectionClass
{
    CellStruct  from_map_coords;
    CellStruct  to_map_coords;
    bool        ZoneConnectionClass_field_bool_08;
    CellClass*  cell;

    // unmatched: no callgraph reference and no git history record
    bool operator==(const ZoneConnectionClass& other) const
    {
        return from_map_coords == other.from_map_coords
            && to_map_coords == other.to_map_coords
            && ZoneConnectionClass_field_bool_08 == other.ZoneConnectionClass_field_bool_08
            && cell == other.cell;
    }
};

struct SubzoneConnectionStruct
{
    uint32_t    SubzoneConnectionStruct_field_dword_0;
    uint8_t     SubzoneConnectionStruct_field_byte_4;
};

struct SubzoneTrackingStruct
{
    SubzoneConnectionStruct* subzone_connections;
    int32_t                  subzone_count;
    int32_t                  subzone_capacity;
    uint16_t                 SubzoneTrackingStruct_field_word_18;
    uint32_t                 SubzoneTrackingStruct_field_dword_1C;
    uint32_t                 SubzoneTrackingStruct_field_dword_20;
};

struct TrajectoryHelper
{
    // unmatched: no callgraph reference and no git history record
    static bool IsCliffHit(const CellClass* source, const CellClass* before, const CellClass* after);
    // unmatched: no callgraph reference and no git history record
    static bool IsWallHit(const CellClass* source, const CellClass* check, const CellClass* target, const HouseClass* owner);
    static CellClass* GetObstacle(const CellClass* cell_source, const CellClass* cell_target, const CellClass* cell_bullet, CoordStruct crd_cur, const BulletTypeClass* type, const HouseClass* owner);  // 0x4CC360
    static CellClass* FindFirstObstacle(const CoordStruct& crd_src, const CoordStruct& crd_target, const BulletTypeClass* type, const HouseClass* owner);  // 0x4CC100
    static CellClass* FindFirstImpenetrableObstacle(const CoordStruct& crd_src, const CoordStruct& crd_target, const WeaponTypeClass* weapon, const HouseClass* owner);  // 0x4CC310
};

class LogicClass : LayerClass
{
};

class GScreenClass;

struct LTRBStruct
{
    int32_t Left;
    int32_t Top;
    int32_t Right;
    int32_t Bottom;
};

#ifndef GAMEMD_DEF_MapClass
#define GAMEMD_DEF_MapClass
class MapClass : public GScreenClass
{
public:
    static constexpr int kMaxCells = 0x40000;

    virtual int32_t __stdcall IsVisible(CellStruct cell) { return 0; }

    virtual ~MapClass() = default;  // 0x5652C0

    virtual void AllocateCells() {}  // 0x5D80B0
    // unmatched: no callgraph reference and no git history record
    virtual void DestructCells() {}
    // unmatched: no callgraph reference and no git history record
    virtual void ConstructCells() {}
    virtual void PointerGotInvalid(AbstractClass* ptr, bool unk) {}
    // unmatched: no callgraph reference and no git history record
    virtual bool DraggingInProgress() { return false; }
    // design: inline accessor, inlined at all call sites
    virtual void UpdateCrates() {}
    // unmatched: no callgraph reference and no git history record
    virtual void CreateEmptyMap(const RectangleStruct& map_rect, bool reuse, int8_t n_level, bool unk2) {}
    // unmatched: no callgraph reference and no git history record
    virtual void SetVisibleRect(const RectangleStruct& map_rect) {}

    static int GetCellIndex(const CellStruct& map_coords)
    {
        return (map_coords.Y << 9) + map_coords.X;
    }

    // design: no binary equivalent found in IDA
    CellClass* TryGetCellAt(const CellStruct& map_coords) const;
    // design: no binary equivalent found in IDA
    CellClass* TryGetCellAt(const CoordStruct& crd) const;
    // design: no binary equivalent found in IDA
    CellClass* GetCellAt(const CellStruct& map_coords) const;
    // design: no binary equivalent found in IDA
    CellClass* GetCellAt(const CoordStruct& crd) const;
    bool CellExists(const CellStruct& map_coords) const;

    // unmatched: no callgraph reference and no git history record
    int GetThreatPosed(const CellStruct& cell, HouseClass* house) const;
    bool IsLocationShrouded(const CoordStruct& crd) const;  // 0x4112D0

    // unmatched: no callgraph reference and no git history record
    static CoordStruct* GetRandomCoordsNear(CoordStruct& out, const CoordStruct& coords, int distance, bool center);
    // unmatched: no callgraph reference and no git history record
    static CoordStruct GetRandomCoordsNear(const CoordStruct& coords, int distance, bool center)
    {
        CoordStruct out;
        GetRandomCoordsNear(out, coords, distance, center);
        return out;
    }

    // unmatched: no callgraph reference and no git history record
    static CoordStruct* PickInfantrySublocation(CoordStruct& out, const CoordStruct& coords, bool ignore_contents = false);
    // unmatched: no callgraph reference and no git history record
    static CoordStruct PickInfantrySublocation(const CoordStruct& coords, bool ignore_contents = false)
    {
        CoordStruct out;
        PickInfantrySublocation(out, coords, ignore_contents);
        return out;
    }

    void CellIteratorReset();
    CellClass* CellIteratorNext();

    static DamageAreaResult DamageArea(const CoordStruct& coords, int damage, TechnoClass* source, WarheadTypeClass* wh, bool affects_tiberium, HouseClass* source_house);
    // unmatched: no callgraph reference and no git history record
    static AnimTypeClass* SelectDamageAnimation(int damage, WarheadTypeClass* wh, LandType land_type, const CoordStruct& coords);
    // unmatched: no callgraph reference and no git history record
    static void FlashbangWarheadAt(int damage, WarheadTypeClass* wh, CoordStruct coords, bool force = false, int cl_disable_flags = 0);
    // unmatched: no callgraph reference and no git history record
    static int GetTotalDamage(int damage, const WarheadTypeClass* warhead, Armor armor, int distance);

    // wrapper: delegates to WaveClass::DamageArea at 0x75F330
    int GetCellFloorHeight(const CoordStruct& crd) const;

    // unmatched: no callgraph reference and no git history record
    CellStruct* PickCellOnEdge(CellStruct& buffer, Edge edge, const CellStruct& current_location, const CellStruct& fallback, SpeedType speed, bool validate_reachability, MovementZone mov_zone) const;
    // unmatched: no callgraph reference and no git history record
    CellStruct PickCellOnEdge(Edge edge, const CellStruct& current_location, const CellStruct& fallback, SpeedType speed, bool validate_reachability, MovementZone mov_zone) const
    {
        CellStruct buffer;
        PickCellOnEdge(buffer, edge, current_location, fallback, speed, validate_reachability, mov_zone);
        return buffer;
    }

    // design: no binary equivalent found in IDA
    void UpdatePathfinding1();
    // unmatched: no callgraph reference and no git history record
    void UpdatePathfinding2(const CellStruct* where, int count);

    // unmatched: no callgraph reference and no git history record
    CellStruct* PathfindingFind(CellStruct& out, const CellStruct& position, SpeedType speed, int a5, MovementZone mov_zone, bool alt, int space_size_x, int space_size_y, bool disallow_overlay, bool a11, bool require_burrowable, bool allow_bridge, const CellStruct& close_to, bool a15, bool buildable);
    // unmatched: no callgraph reference and no git history record
    CellStruct PathfindingFind(const CellStruct& position, SpeedType speed, int a5, MovementZone mov_zone, bool alt, int space_size_x, int space_size_y, bool disallow_overlay, bool a11, bool require_burrowable, bool allow_bridge, const CellStruct& close_to, bool a15, bool buildable)
    {
        CellStruct out;
        PathfindingFind(out, position, speed, a5, mov_zone, alt, space_size_x, space_size_y, disallow_overlay, a11, require_burrowable, allow_bridge, close_to, a15, buildable);
        return out;
    }

    // unmatched: no callgraph reference and no git history record
    void AddContentAt(CellStruct* coords, TechnoClass* content);
    // design: no binary equivalent found in IDA
    void RemoveContentAt(CellStruct* coords, TechnoClass* content);

    bool IsWithinUsableArea(const CellStruct& cell, bool check_level) const;
    bool IsWithinUsableArea(CellClass* cell, bool check_level) const;
    bool IsWithinUsableArea(const CoordStruct& coords) const;
    bool CoordinatesLegal(const CellStruct& cell) const;

    CoordStruct* FindFirstFirestorm(CoordStruct* out, const CoordStruct& start, const CoordStruct& end, const HouseClass* house = nullptr) const;  // 0x5880A0
    CoordStruct FindFirstFirestorm(const CoordStruct& start, const CoordStruct& end, const HouseClass* house = nullptr) const
    {
        CoordStruct out;
        FindFirstFirestorm(&out, start, end, house);  // 0x5880a0
        return out;
    }

    void RevealArea1(CoordStruct* coords, int radius, HouseClass* owner, CellStruct arg4, uint8_t reveal_by_height, uint8_t arg6, uint8_t arg7, uint8_t arg8);  // 0x5678E0
    void RevealArea2(CoordStruct* coords, int radius, HouseClass* owner, uint32_t arg4, uint8_t reveal_by_height, uint8_t arg6, uint8_t arg7, uint8_t arg8);  // 0x567DA0
    // unmatched: no callgraph reference and no git history record
    void RevealArea3(CoordStruct* coords, int height, int radius, bool skip_reveal);

    void Reveal(HouseClass* house);
    void Reshroud(HouseClass* house);  // 0x50BD10

    // wrapper: delegates to HouseClass::ReshroudMap at 0x50BD10
    void RedrawSidebar(int mode);
    // unmatched: no callgraph reference and no git history record
    void SetTogglePowerMode(int mode);
    // unmatched: no callgraph reference and no git history record
    void SetPlaceBeaconMode(int mode);
    // unmatched: no callgraph reference and no git history record
    void SetSellMode(int mode);
    // unmatched: no callgraph reference and no git history record
    void SetRepairMode(int mode);
    void DestroyCliff(CellClass* cell);
    bool MakeTraversable(const ObjectClass* visitor, const CellStruct& cell) const;  // 0x452540

    // IDA 0x4F42F0 -- MapClass::MarkForRedraw (44B)
    void MarkForRedraw(int flags) { (void)flags; /* TODO: full IDA translation */ } // 0x4F42F0

    uint32_t                        unknown10;
    void*                           unknownPointer14;
    void*                           unknownPointerArray18[13];
    uint32_t                        MapClass_field_4C;
    ZoneConnectionClass*            zoneConnections;
    int32_t                         zoneConnectionCount;
    int32_t                         zoneConnectionCapacity;
    void*                           unknownArray68;
    int32_t                         numItemsIn68;
    uint32_t                        unknown70;
    uint32_t                        unknown74;
    uint32_t                        spawnStatus;
    uint32_t                        visibilityFlags;
    uint32_t                        unknown80[3];
    SubzoneTrackingStruct*          subzoneTracking1;
    int32_t                         subzoneTracking1Count;
    int32_t                         subzoneTracking1Capacity;
    SubzoneTrackingStruct*          subzoneTracking2;
    int32_t                         subzoneTracking2Count;
    int32_t                         subzoneTracking2Capacity;
    SubzoneTrackingStruct*          subzoneTracking3;
    int32_t                         subzoneTracking3Count;
    int32_t                         subzoneTracking3Capacity;
    CellStruct*                     cellStructs1;
    int32_t                         cellStructs1Count;
    int32_t                         cellStructs1Capacity;
    RectangleStruct                 mapRect;
    RectangleStruct                 visibleRect;
    int32_t                         cellIteratorNextX;
    int32_t                         cellIteratorNextY;
    int32_t                         cellIteratorCurrentY;
    CellClass*                      cellIteratorNextCell;
    uint32_t                        MapClass_field_11C;
    uint32_t                        unknown120;
    LTRBStruct                      mapCoordBounds;
    uint32_t                        unknown134;
    CellClass**                     cells;
    int32_t                         cellsCount;
    int32_t                         cellsCapacity;
    int32_t                         maxWidth;
    int32_t                         maxHeight;
    int32_t                         maxNumCells;
    uint32_t                        padding01;
    uint32_t                        padding02;
    Crate                           crates[256];
    CellStruct*                     taggedCells;
    int32_t                         taggedCellsCount;
    int32_t                         taggedCellsCapacity;

protected:
    MapClass() noexcept;
};
#endif

} // namespace gamemd

