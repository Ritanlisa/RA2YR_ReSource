#include "gamemd/render/display.hpp"

#include <cstring>

namespace gamemd
{

DisplayClass::DisplayClass() noexcept
    : CurrentFoundation_CenterCell{}
    , CurrentFoundation_TopLeftOffset{}
    , CurrentFoundation_Data(nullptr)
    , unknown_1180(false)
    , unknown_1181(false)
    , CurrentFoundationCopy_CenterCell{}
    , CurrentFoundationCopy_TopLeftOffset{}
    , CurrentFoundationCopy_Data(nullptr)
    , unknown_1190(0)
    , unknown_1194(0)
    , unknown_1198(0)
    , FollowObject(false)
    , ObjectToFollow(nullptr)
    , CurrentBuilding(nullptr)
    , CurrentBuildingType(nullptr)
    , unknown_11AC(0)
    , RepairMode(false)
    , SellMode(false)
    , PowerToggleMode(false)
    , PlanningMode(false)
    , PlaceBeaconMode(false)
    , CurrentSWTypeIndex(-1)
    , unknown_11BC(0)
    , unknown_11C0(0)
    , unknown_11C4(0)
    , unknown_11C8(0)
    , unknown_bool_11CC(false)
    , unknown_bool_11CD(false)
    , unknown_bool_11CE(false)
    , DraggingRectangle(false)
    , unknown_bool_11D0(false)
    , unknown_bool_11D1(false)
    , unknown_11D4(0)
    , unknown_11D8(0)
    , unknown_11DC(0)
    , unknown_11E0(0)
    , padding_11E4(0)
{
}

bool DisplayClass::ProcessClickCoords(
    Point2D* src,
    CellStruct* xy_dst,
    CoordStruct* xyz_dst,
    ObjectClass** target,
    byte* a5,
    byte* a6)
{
    (void)src;
    (void)xy_dst;
    (void)xyz_dst;
    (void)target;
    (void)a5;
    (void)a6;
    return false;
}

void DisplayClass::SetActiveFoundation(CellStruct* coords)
{
    (void)coords;
}

Action DisplayClass::DecideAction(
    const CellStruct& cell,
    ObjectClass* object,
    uint32_t unk)
{
    (void)cell;
    (void)object;
    (void)unk;
    return static_cast<Action>(0);
}

CellStruct* DisplayClass::FoundationBoundsSize(
    CellStruct& out,
    const CellStruct* foundation_data) const
{
    (void)foundation_data;
    out = {};
    return &out;
}

CellStruct DisplayClass::FoundationBoundsSize(
    const CellStruct* foundation_data) const
{
    CellStruct buf;
    FoundationBoundsSize(buf, foundation_data);
    return buf;
}

void DisplayClass::MarkFoundation(CellStruct* base_cell, bool mark)
{
    (void)base_cell;
    (void)mark;
}

// TODO: complete DisplayClass implementation

} // namespace gamemd
