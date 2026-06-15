#pragma once

#include <unknwn.h>
#include <cstdint>

#include "core/math.hpp"
#include "core/enums.hpp"
#include "fundamentals.hpp"
#include "object/abstract.hpp"

namespace gamemd
{

class CCINIClass;
class ObjectTypeClass;
class HouseClass;
using ra2::game::ObjectClass;
struct SHPStruct;

#ifndef GAMEMD_DEF_GScreenClass
#define GAMEMD_DEF_GScreenClass
class GScreenClass
{
public:
    virtual ~GScreenClass() = default;

    virtual HRESULT Load(IStream* stream) { return S_OK; }
    virtual HRESULT Save(IStream* stream) { return S_OK; }

    virtual void LoadFromINI(CCINIClass* ini) {}
    virtual const wchar_t* GetToolTip(unsigned int dialog_id) { return nullptr; }
    virtual void CloseWindow() {}
    virtual void vt_entry_8C() {}
    virtual bool vt_entry_90(const CellStruct& cell, HouseClass* house) { return false; }
    virtual bool vt_entry_94(const CellStruct& cell, HouseClass* house, bool unk) { return false; }
    virtual bool vt_entry_98(const CellStruct& cell, HouseClass* house) { return false; }
    virtual bool vt_entry_9C(const CellStruct& cell, HouseClass* house) { return false; }
};
#endif

#ifndef GAMEMD_DEF_MapClass
#define GAMEMD_DEF_MapClass
class MapClass : public GScreenClass
{
public:
    virtual ~MapClass() override = default;
};
#endif

class DisplayClass : public MapClass
{
public:
    virtual ~DisplayClass() override = default;

    virtual void LoadFromINI(CCINIClass* ini) override {}
    virtual const wchar_t* GetToolTip(unsigned int dialog_id) override { return nullptr; }
    virtual void CloseWindow() override {}
    virtual void vt_entry_8C() override {}
    virtual bool vt_entry_90(const CellStruct& cell, HouseClass* house) override { return false; }
    virtual bool vt_entry_94(const CellStruct& cell, HouseClass* house, bool unk) override { return false; }
    virtual bool vt_entry_98(const CellStruct& cell, HouseClass* house) override { return false; }
    virtual bool vt_entry_9C(const CellStruct& cell, HouseClass* house) override { return false; }

    virtual MouseCursorType GetLastMouseCursor() = 0;
    virtual bool vt_entry_A4(uint32_t unk1, uint32_t unk2, uint32_t unk3) { return false; }
    virtual void SetViewDimensions(const RectangleStruct& rect) {}
    virtual void vt_entry_AC(uint32_t unk) {}
    virtual void vt_entry_B0(uint32_t unk) {}
    virtual void vt_entry_B4(Point2D* point) {}

    virtual bool ConvertAction(
        const CellStruct& cell,
        bool shrouded,
        ObjectClass* object,
        Action action,
        uint32_t unk) { return false; }

    virtual void LeftMouseButtonDown(const Point2D& point) {}
    virtual void LeftMouseButtonUp(
        const CoordStruct& coords,
        const CellStruct& cell,
        ObjectClass* object,
        Action action,
        uint32_t unk2) {}
    virtual void RightMouseButtonUp(uint32_t unk) {}

    bool ProcessClickCoords(
        Point2D* src,
        CellStruct* xy_dst,
        CoordStruct* xyz_dst,
        ObjectClass** target,
        byte* a5,
        byte* a6);

    void SetActiveFoundation(CellStruct* coords);

    Action DecideAction(
        const CellStruct& cell,
        ObjectClass* object,
        uint32_t unk);

    CellStruct* FoundationBoundsSize(
        CellStruct& out,
        const CellStruct* foundation_data) const;

    CellStruct FoundationBoundsSize(
        const CellStruct* foundation_data) const;

    void MarkFoundation(CellStruct* base_cell, bool mark);

    CellStruct      CurrentFoundation_CenterCell;
    CellStruct      CurrentFoundation_TopLeftOffset;
    CellStruct*     CurrentFoundation_Data;
    bool            unknown_1180;
    bool            unknown_1181;
    CellStruct      CurrentFoundationCopy_CenterCell;
    CellStruct      CurrentFoundationCopy_TopLeftOffset;
    CellStruct*     CurrentFoundationCopy_Data;
    uint32_t        unknown_1190;
    uint32_t        unknown_1194;
    uint32_t        unknown_1198;
    bool            FollowObject;
    ObjectClass*    ObjectToFollow;
    ObjectClass*    CurrentBuilding;
    ObjectTypeClass* CurrentBuildingType;
    uint32_t        unknown_11AC;
    bool            RepairMode;
    bool            SellMode;
    bool            PowerToggleMode;
    bool            PlanningMode;
    bool            PlaceBeaconMode;
    int32_t         CurrentSWTypeIndex;
    uint32_t        unknown_11BC;
    uint32_t        unknown_11C0;
    uint32_t        unknown_11C4;
    uint32_t        unknown_11C8;
    bool            unknown_bool_11CC;
    bool            unknown_bool_11CD;
    bool            unknown_bool_11CE;
    bool            DraggingRectangle;
    bool            unknown_bool_11D0;
    bool            unknown_bool_11D1;
    uint32_t        unknown_11D4;
    uint32_t        unknown_11D8;
    uint32_t        unknown_11DC;
    uint32_t        unknown_11E0;
    uint32_t        padding_11E4;

protected:
    DisplayClass() noexcept;
};

} // namespace gamemd
