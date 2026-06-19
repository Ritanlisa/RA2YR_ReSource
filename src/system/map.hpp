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

    bool operator==(const ZoneConnectionClass& other) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
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
    static bool IsCliffHit(const CellClass* source, const CellClass* before, const CellClass* after); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    static bool IsWallHit(const CellClass* source, const CellClass* check, const CellClass* target, const HouseClass* owner); // IDA: UNMATCHED — no_callgraph_match, no_git_history
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

    virtual int32_t __stdcall IsVisible(CellStruct cell) { return 0; }  // IDA: 0x4A5110

    virtual ~MapClass() = default;  // 0x5652C0

    virtual void AllocateCells() {}  // IDA: 0x5D80B0
    virtual void DestructCells() {} // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void ConstructCells() {} // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void PointerGotInvalid(AbstractClass* ptr, bool unk) {}  // IDA: 0x4A7900
    virtual bool DraggingInProgress() { return false; } // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void UpdateCrates() {}
    virtual void CreateEmptyMap(const RectangleStruct& map_rect, bool reuse, int8_t n_level, bool unk2) {} // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void SetVisibleRect(const RectangleStruct& map_rect) {} // IDA: UNMATCHED — no_callgraph_match, no_git_history

    static int GetCellIndex(const CellStruct& map_coords)
    {
        return (map_coords.Y << 9) + map_coords.X;
    }

    CellClass* TryGetCellAt(const CellStruct& map_coords) const;
    CellClass* TryGetCellAt(const CoordStruct& crd) const;
    CellClass* GetCellAt(const CellStruct& map_coords) const;
    CellClass* GetCellAt(const CoordStruct& crd) const;
    bool CellExists(const CellStruct& map_coords) const;  // 0x5657E0

    int GetThreatPosed(const CellStruct& cell, HouseClass* house) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    bool IsLocationShrouded(const CoordStruct& crd) const;  // 0x4112D0

    static CoordStruct* GetRandomCoordsNear(CoordStruct& out, const CoordStruct& coords, int distance, bool center); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    static CoordStruct GetRandomCoordsNear(const CoordStruct& coords, int distance, bool center) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        CoordStruct out;
        GetRandomCoordsNear(out, coords, distance, center);
        return out;
    }

    static CoordStruct* PickInfantrySublocation(CoordStruct& out, const CoordStruct& coords, bool ignore_contents = false); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    static CoordStruct PickInfantrySublocation(const CoordStruct& coords, bool ignore_contents = false) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        CoordStruct out;
        PickInfantrySublocation(out, coords, ignore_contents);
        return out;
    }

    void CellIteratorReset();  // 0x578350
    CellClass* CellIteratorNext();  // 0x578290

    static DamageAreaResult DamageArea(const CoordStruct& coords, int damage, TechnoClass* source, WarheadTypeClass* wh, bool affects_tiberium, HouseClass* source_house);  // 0x75F330
    static AnimTypeClass* SelectDamageAnimation(int damage, WarheadTypeClass* wh, LandType land_type, const CoordStruct& coords); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    static void FlashbangWarheadAt(int damage, WarheadTypeClass* wh, CoordStruct coords, bool force = false, int cl_disable_flags = 0); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    static int GetTotalDamage(int damage, const WarheadTypeClass* warhead, Armor armor, int distance); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    int GetCellFloorHeight(const CoordStruct& crd) const;

    CellStruct* PickCellOnEdge(CellStruct& buffer, Edge edge, const CellStruct& current_location, const CellStruct& fallback, SpeedType speed, bool validate_reachability, MovementZone mov_zone) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    CellStruct PickCellOnEdge(Edge edge, const CellStruct& current_location, const CellStruct& fallback, SpeedType speed, bool validate_reachability, MovementZone mov_zone) const // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        CellStruct buffer;
        PickCellOnEdge(buffer, edge, current_location, fallback, speed, validate_reachability, mov_zone);
        return buffer;
    }

    void UpdatePathfinding1();
    void UpdatePathfinding2(const CellStruct* where, int count); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    CellStruct* PathfindingFind(CellStruct& out, const CellStruct& position, SpeedType speed, int a5, MovementZone mov_zone, bool alt, int space_size_x, int space_size_y, bool disallow_overlay, bool a11, bool require_burrowable, bool allow_bridge, const CellStruct& close_to, bool a15, bool buildable); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    CellStruct PathfindingFind(const CellStruct& position, SpeedType speed, int a5, MovementZone mov_zone, bool alt, int space_size_x, int space_size_y, bool disallow_overlay, bool a11, bool require_burrowable, bool allow_bridge, const CellStruct& close_to, bool a15, bool buildable) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        CellStruct out;
        PathfindingFind(out, position, speed, a5, mov_zone, alt, space_size_x, space_size_y, disallow_overlay, a11, require_burrowable, allow_bridge, close_to, a15, buildable);
        return out;
    }

    void AddContentAt(CellStruct* coords, TechnoClass* content); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    void RemoveContentAt(CellStruct* coords, TechnoClass* content);

    bool IsWithinUsableArea(const CellStruct& cell, bool check_level) const;  // 0x578460
    bool IsWithinUsableArea(CellClass* cell, bool check_level) const;  // IDA: 0x578460
    bool IsWithinUsableArea(const CoordStruct& coords) const;  // IDA: 0x578460
    bool CoordinatesLegal(const CellStruct& cell) const;  // 0x568300

    CoordStruct* FindFirstFirestorm(CoordStruct* out, const CoordStruct& start, const CoordStruct& end, const HouseClass* house = nullptr) const;  // 0x5880A0
    CoordStruct FindFirstFirestorm(const CoordStruct& start, const CoordStruct& end, const HouseClass* house = nullptr) const
    {
        CoordStruct out;
        FindFirstFirestorm(&out, start, end, house);
        return out;
    }

    void RevealArea1(CoordStruct* coords, int radius, HouseClass* owner, CellStruct arg4, uint8_t reveal_by_height, uint8_t arg6, uint8_t arg7, uint8_t arg8);  // 0x5678E0
    void RevealArea2(CoordStruct* coords, int radius, HouseClass* owner, uint32_t arg4, uint8_t reveal_by_height, uint8_t arg6, uint8_t arg7, uint8_t arg8);  // 0x567DA0
    void RevealArea3(CoordStruct* coords, int height, int radius, bool skip_reveal); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    void Reveal(HouseClass* house);  // 0x577D90
    void Reshroud(HouseClass* house);  // 0x50BD10

    void RedrawSidebar(int mode);
    void SetTogglePowerMode(int mode); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    void SetPlaceBeaconMode(int mode); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    void SetSellMode(int mode); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    void SetRepairMode(int mode); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    void DestroyCliff(CellClass* cell);  // 0x581140
    bool MakeTraversable(const ObjectClass* visitor, const CellStruct& cell) const;  // 0x452540

    // IDA 0x4F42F0 -- MapClass::MarkForRedraw (44B)
    void MarkForRedraw(int flags) { (void)flags; /* TODO: full IDA translation */ }

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

