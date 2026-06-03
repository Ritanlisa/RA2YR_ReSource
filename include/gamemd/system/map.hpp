#pragma once

#include "..\object\abstract.hpp"
#include "..\ui\g_screen.hpp"

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
    bool        unknown_bool_08;
    CellClass*  cell;

    bool operator==(const ZoneConnectionClass& other) const
    {
        return from_map_coords == other.from_map_coords
            && to_map_coords == other.to_map_coords
            && unknown_bool_08 == other.unknown_bool_08
            && cell == other.cell;
    }
};

struct SubzoneConnectionStruct
{
    uint32_t    unknown_dword_0;
    uint8_t     unknown_byte_4;
};

struct SubzoneTrackingStruct
{
    SubzoneConnectionStruct* subzone_connections;
    int32_t                  subzone_count;
    int32_t                  subzone_capacity;
    uint16_t                 unknown_word_18;
    uint32_t                 unknown_dword_1C;
    uint32_t                 unknown_dword_20;
};

struct TrajectoryHelper
{
    static bool IsCliffHit(const CellClass* source, const CellClass* before, const CellClass* after);
    static bool IsWallHit(const CellClass* source, const CellClass* check, const CellClass* target, const HouseClass* owner);
    static CellClass* GetObstacle(const CellClass* cell_source, const CellClass* cell_target, const CellClass* cell_bullet, CoordStruct crd_cur, const BulletTypeClass* type, const HouseClass* owner);
    static CellClass* FindFirstObstacle(const CoordStruct& crd_src, const CoordStruct& crd_target, const BulletTypeClass* type, const HouseClass* owner);
    static CellClass* FindFirstImpenetrableObstacle(const CoordStruct& crd_src, const CoordStruct& crd_target, const WeaponTypeClass* weapon, const HouseClass* owner);
};

struct LayerClass
{
    ObjectClass**   items;
    int32_t         count;
    int32_t         capacity;
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

    virtual int32_t __stdcall Is_Visible(CellStruct cell) { return 0; }

    virtual ~MapClass() = default;

    virtual void AllocateCells() {}
    virtual void DestructCells() {}
    virtual void ConstructCells() {}
    virtual void PointerGotInvalid(AbstractClass* ptr, bool unk) {}
    virtual bool DraggingInProgress() { return false; }
    virtual void UpdateCrates() {}
    virtual void CreateEmptyMap(const RectangleStruct& map_rect, bool reuse, int8_t n_level, bool unk2) {}
    virtual void SetVisibleRect(const RectangleStruct& map_rect) {}

    static int GetCellIndex(const CellStruct& map_coords)
    {
        return (map_coords.Y << 9) + map_coords.X;
    }

    CellClass* TryGetCellAt(const CellStruct& map_coords) const;
    CellClass* TryGetCellAt(const CoordStruct& crd) const;
    CellClass* GetCellAt(const CellStruct& map_coords) const;
    CellClass* GetCellAt(const CoordStruct& crd) const;
    bool CellExists(const CellStruct& map_coords) const;

    int GetThreatPosed(const CellStruct& cell, HouseClass* house) const;
    bool IsLocationShrouded(const CoordStruct& crd) const;

    static CoordStruct* GetRandomCoordsNear(CoordStruct& out, const CoordStruct& coords, int distance, bool center);
    static CoordStruct GetRandomCoordsNear(const CoordStruct& coords, int distance, bool center)
    {
        CoordStruct out;
        GetRandomCoordsNear(out, coords, distance, center);
        return out;
    }

    static CoordStruct* PickInfantrySublocation(CoordStruct& out, const CoordStruct& coords, bool ignore_contents = false);
    static CoordStruct PickInfantrySublocation(const CoordStruct& coords, bool ignore_contents = false)
    {
        CoordStruct out;
        PickInfantrySublocation(out, coords, ignore_contents);
        return out;
    }

    void CellIteratorReset();
    CellClass* CellIteratorNext();

    static DamageAreaResult DamageArea(const CoordStruct& coords, int damage, TechnoClass* source, WarheadTypeClass* wh, bool affects_tiberium, HouseClass* source_house);
    static AnimTypeClass* SelectDamageAnimation(int damage, WarheadTypeClass* wh, LandType land_type, const CoordStruct& coords);
    static void FlashbangWarheadAt(int damage, WarheadTypeClass* wh, CoordStruct coords, bool force = false, int cl_disable_flags = 0);
    static int GetTotalDamage(int damage, const WarheadTypeClass* warhead, Armor armor, int distance);

    int GetCellFloorHeight(const CoordStruct& crd) const;

    CellStruct* PickCellOnEdge(CellStruct& buffer, Edge edge, const CellStruct& current_location, const CellStruct& fallback, SpeedType speed, bool validate_reachability, MovementZone mov_zone) const;
    CellStruct PickCellOnEdge(Edge edge, const CellStruct& current_location, const CellStruct& fallback, SpeedType speed, bool validate_reachability, MovementZone mov_zone) const
    {
        CellStruct buffer;
        PickCellOnEdge(buffer, edge, current_location, fallback, speed, validate_reachability, mov_zone);
        return buffer;
    }

    void Update_Pathfinding_1();
    void Update_Pathfinding_2(const CellStruct* where, int count);

    CellStruct* Pathfinding_Find(CellStruct& out, const CellStruct& position, SpeedType speed, int a5, MovementZone mov_zone, bool alt, int space_size_x, int space_size_y, bool disallow_overlay, bool a11, bool require_burrowable, bool allow_bridge, const CellStruct& close_to, bool a15, bool buildable);
    CellStruct Pathfinding_Find(const CellStruct& position, SpeedType speed, int a5, MovementZone mov_zone, bool alt, int space_size_x, int space_size_y, bool disallow_overlay, bool a11, bool require_burrowable, bool allow_bridge, const CellStruct& close_to, bool a15, bool buildable)
    {
        CellStruct out;
        Pathfinding_Find(out, position, speed, a5, mov_zone, alt, space_size_x, space_size_y, disallow_overlay, a11, require_burrowable, allow_bridge, close_to, a15, buildable);
        return out;
    }

    void AddContentAt(CellStruct* coords, TechnoClass* content);
    void RemoveContentAt(CellStruct* coords, TechnoClass* content);

    bool IsWithinUsableArea(const CellStruct& cell, bool check_level) const;
    bool IsWithinUsableArea(CellClass* cell, bool check_level) const;
    bool IsWithinUsableArea(const CoordStruct& coords) const;
    bool CoordinatesLegal(const CellStruct& cell) const;

    CoordStruct* FindFirstFirestorm(CoordStruct* out, const CoordStruct& start, const CoordStruct& end, const HouseClass* house = nullptr) const;
    CoordStruct FindFirstFirestorm(const CoordStruct& start, const CoordStruct& end, const HouseClass* house = nullptr) const
    {
        CoordStruct out;
        FindFirstFirestorm(&out, start, end, house);
        return out;
    }

    void RevealArea1(CoordStruct* coords, int radius, HouseClass* owner, CellStruct arg4, uint8_t reveal_by_height, uint8_t arg6, uint8_t arg7, uint8_t arg8);
    void RevealArea2(CoordStruct* coords, int radius, HouseClass* owner, uint32_t arg4, uint8_t reveal_by_height, uint8_t arg6, uint8_t arg7, uint8_t arg8);
    void RevealArea3(CoordStruct* coords, int height, int radius, bool skip_reveal);

    void Reveal(HouseClass* house);
    void Reshroud(HouseClass* house);

    void RedrawSidebar(int mode);
    void SetTogglePowerMode(int mode);
    void SetPlaceBeaconMode(int mode);
    void SetSellMode(int mode);
    void SetRepairMode(int mode);
    void DestroyCliff(CellClass* cell);
    bool MakeTraversable(const ObjectClass* visitor, const CellStruct& cell) const;

    // IDA 0x4F42F0 — MapClass::MarkForRedraw (44B)
    void MarkForRedraw(int flags) { (void)flags; /* TODO: full IDA translation */ }

    uint32_t                        m_unknown_10;
    void*                           m_unknown_pointer_14;
    void*                           m_unknown_pointer_array_18[13];
    uint32_t                        m_unknown_4C;
    ZoneConnectionClass*            m_zone_connections;
    int32_t                         m_zone_connection_count;
    int32_t                         m_zone_connection_capacity;
    void*                           m_unknown_array_68;
    int32_t                         m_num_items_in_68;
    uint32_t                        m_unknown_70;
    uint32_t                        m_unknown_74;
    uint32_t                        m_unknown_78;
    uint32_t                        m_unknown_7C;
    uint32_t                        m_unknown_80[3];
    SubzoneTrackingStruct*          m_subzone_tracking_1;
    int32_t                         m_subzone_tracking_1_count;
    int32_t                         m_subzone_tracking_1_capacity;
    SubzoneTrackingStruct*          m_subzone_tracking_2;
    int32_t                         m_subzone_tracking_2_count;
    int32_t                         m_subzone_tracking_2_capacity;
    SubzoneTrackingStruct*          m_subzone_tracking_3;
    int32_t                         m_subzone_tracking_3_count;
    int32_t                         m_subzone_tracking_3_capacity;
    CellStruct*                     m_cell_structs_1;
    int32_t                         m_cell_structs_1_count;
    int32_t                         m_cell_structs_1_capacity;
    RectangleStruct                 m_map_rect;
    RectangleStruct                 m_visible_rect;
    int32_t                         m_cell_iterator_next_x;
    int32_t                         m_cell_iterator_next_y;
    int32_t                         m_cell_iterator_current_y;
    CellClass*                      m_cell_iterator_next_cell;
    uint32_t                        m_unknown_11C;
    uint32_t                        m_unknown_120;
    LTRBStruct                      m_map_coord_bounds;
    uint32_t                        m_unknown_134;
    CellClass**                     m_cells;
    int32_t                         m_cells_count;
    int32_t                         m_cells_capacity;
    int32_t                         m_max_width;
    int32_t                         m_max_height;
    int32_t                         m_max_num_cells;
    uint32_t                        m_padding_01;
    uint32_t                        m_padding_02;
    Crate                           m_crates[256];
    CellStruct*                     m_tagged_cells;
    int32_t                         m_tagged_cells_count;
    int32_t                         m_tagged_cells_capacity;

protected:
    MapClass() noexcept;
};
#endif

} // namespace gamemd

