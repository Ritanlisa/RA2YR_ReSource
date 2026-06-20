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

    virtual HRESULT Load(IStream* stream);
    virtual HRESULT Save(IStream* stream);

    virtual void LoadFromINI(CCINIClass* ini);
    virtual const wchar_t* GetToolTip(unsigned int dialog_id);
    virtual void CloseWindow();  // 0x7C865C
    virtual void vt_entry_8C();
    virtual bool vt_entry_90(const CellStruct& cell, HouseClass* house); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual bool vt_entry_94(const CellStruct& cell, HouseClass* house, bool unk);  // 0x4A9CA0
    virtual bool vt_entry_98(const CellStruct& cell, HouseClass* house); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual bool vt_entry_9C(const CellStruct& cell, HouseClass* house); // IDA: UNMATCHED — no_callgraph_match, no_git_history
};
#endif

#ifndef GAMEMD_DEF_MapClass
#define GAMEMD_DEF_MapClass
class MapClass : public GScreenClass
{
public:
    virtual ~MapClass() override = default;  // 0x5652C0
};
#endif

class DisplayClass : public MapClass
{
public:
    virtual ~DisplayClass() override = default;  // 0x4A8930

    virtual void LoadFromINI(CCINIClass* ini) override; // IDA: NOT_FOUND
    virtual const wchar_t* GetToolTip(unsigned int dialog_id) override; // IDA: NOT_FOUND
    virtual void CloseWindow() override;  // 0x7C865C
    virtual void vt_entry_8C() override; // IDA: NOT_FOUND
    virtual bool vt_entry_90(const CellStruct& cell, HouseClass* house) override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual bool vt_entry_94(const CellStruct& cell, HouseClass* house, bool unk) override;  // 0x4A9CA0
    virtual bool vt_entry_98(const CellStruct& cell, HouseClass* house) override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual bool vt_entry_9C(const CellStruct& cell, HouseClass* house) override; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    virtual MouseCursorType GetLastMouseCursor() = 0; // IDA: NOT_FOUND
    virtual bool vt_entry_A4(uint32_t unk1, uint32_t unk2, uint32_t unk3); // IDA: NOT_FOUND
    virtual void SetViewDimensions(const RectangleStruct& rect);  // 0x4A8960
    virtual void vt_entry_AC(uint32_t unk);  // 0x40D250
    virtual void vt_entry_B0(uint32_t unk);  // 0x4AAD20
    virtual void vt_entry_B4(Point2D* point); // IDA: NOT_FOUND

    virtual bool ConvertAction( // IDA: UNMATCHED — no_callgraph_match, no_git_history
        const CellStruct& cell,
        bool shrouded,
        ObjectClass* object,
        Action action,
        uint32_t unk) { return false; }

    virtual void LeftMouseButtonDown(const Point2D& point); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void LeftMouseButtonUp( // IDA: UNMATCHED — no_callgraph_match, no_git_history
        const CoordStruct& coords,
        const CellStruct& cell,
        ObjectClass* object,
        Action action,
        uint32_t unk2) {}
    virtual void RightMouseButtonUp(uint32_t unk); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    bool ProcessClickCoords( // IDA: UNMATCHED — no_callgraph_match, no_git_history
        Point2D* src,
        CellStruct* xy_dst,
        CoordStruct* xyz_dst,
        ObjectClass** target,
        byte* a5,
        byte* a6);

    void SetActiveFoundation(CellStruct* coords); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    Action DecideAction( // IDA: UNMATCHED — no_callgraph_match, no_git_history
        const CellStruct& cell,
        ObjectClass* object,
        uint32_t unk);

    CellStruct* FoundationBoundsSize( // IDA: UNMATCHED — no_callgraph_match, no_git_history
        CellStruct& out,
        const CellStruct* foundation_data) const;

    CellStruct FoundationBoundsSize( // IDA: UNMATCHED — no_callgraph_match, no_git_history
        const CellStruct* foundation_data) const;

    void MarkFoundation(CellStruct* base_cell, bool mark); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    CellStruct      CurrentFoundation_CenterCell;
    CellStruct      CurrentFoundation_TopLeftOffset;
    CellStruct*     CurrentFoundation_Data;
    bool            DisplayClass_field_1180;
    bool            DisplayClass_field_1181;
    CellStruct      CurrentFoundationCopy_CenterCell;
    CellStruct      CurrentFoundationCopy_TopLeftOffset;
    CellStruct*     CurrentFoundationCopy_Data;
    uint32_t        DisplayClass_field_1190;
    uint32_t        DisplayClass_field_1194;
    uint32_t        DisplayClass_field_1198;
    bool            FollowObject;
    ObjectClass*    ObjectToFollow;
    ObjectClass*    CurrentBuilding;
    ObjectTypeClass* CurrentBuildingType;
    uint32_t        DisplayClass_field_11AC;
    bool            RepairMode;
    bool            SellMode;
    bool            PowerToggleMode;
    bool            PlanningMode;
    bool            PlaceBeaconMode;
    int32_t         CurrentSWTypeIndex;
    uint32_t        DisplayClass_field_11BC;
    uint32_t        DisplayClass_field_11C0;
    uint32_t        DisplayClass_field_11C4;
    uint32_t        DisplayClass_field_11C8;
    bool            DisplayClass_field_bool_11CC;
    bool            DisplayClass_field_bool_11CD;
    bool            DisplayClass_field_bool_11CE;
    bool            DraggingRectangle;
    bool            DisplayClass_field_bool_11D0;
    bool            DisplayClass_field_bool_11D1;
    uint32_t        DisplayClass_field_11D4;
    uint32_t        DisplayClass_field_11D8;
    uint32_t        DisplayClass_field_11DC;
    uint32_t        DisplayClass_field_11E0;
    uint32_t        padding_11E4;

protected:
    DisplayClass() noexcept;
};

} // namespace gamemd
