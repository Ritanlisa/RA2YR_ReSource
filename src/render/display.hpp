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
#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif
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
    virtual void CloseWindow();
    virtual void vt_entry_8C();
    // unmatched: no callgraph reference and no git history record
    virtual bool vt_entry_90(const CellStruct& cell, HouseClass* house);
    virtual bool vt_entry_94(const CellStruct& cell, HouseClass* house, bool unk);
    // unmatched: no callgraph reference and no git history record
    virtual bool vt_entry_98(const CellStruct& cell, HouseClass* house);
    // unmatched: no callgraph reference and no git history record
    virtual bool vt_entry_9C(const CellStruct& cell, HouseClass* house);
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

    // wrapper: delegates to DisplayClass::ddtor at 0x4A8930
    virtual void LoadFromINI(CCINIClass* ini) override;
    // wrapper: delegates to DisplayClass::ddtor at 0x4A8930
    virtual const wchar_t* GetToolTip(unsigned int dialog_id) override;
    virtual void CloseWindow() override;
    // wrapper: delegates to CloseWindow at 0x7C865C
    virtual void vt_entry_8C() override;
    // unmatched: no callgraph reference and no git history record
    virtual bool vt_entry_90(const CellStruct& cell, HouseClass* house) override;
    virtual bool vt_entry_94(const CellStruct& cell, HouseClass* house, bool unk) override;
    // unmatched: no callgraph reference and no git history record
    virtual bool vt_entry_98(const CellStruct& cell, HouseClass* house) override;
    // unmatched: no callgraph reference and no git history record
    virtual bool vt_entry_9C(const CellStruct& cell, HouseClass* house) override;

    // design: pure virtual function, no binary implementation
    virtual MouseCursorType GetLastMouseCursor() = 0;
    // wrapper: delegates to DisplayClass::vt_entry_94 at 0x4A9CA0
    virtual bool vt_entry_A4(uint32_t unk1, uint32_t unk2, uint32_t unk3);
    virtual void SetViewDimensions(const RectangleStruct& rect);
    virtual void vt_entry_AC(uint32_t unk);  // 0x40D250
    virtual void vt_entry_B0(uint32_t unk);  // 0x4AAD20
    // wrapper: delegates to DisplayClass::vt_entry_B0 at 0x4AAD20
    virtual void vt_entry_B4(Point2D* point);

    // unmatched: no callgraph reference and no git history record
    virtual bool ConvertAction(
        const CellStruct& cell,
        bool shrouded,
        ObjectClass* object,
        Action action,
        uint32_t unk) { return false; }

    // unmatched: no callgraph reference and no git history record
    virtual void LeftMouseButtonDown(const Point2D& point);
    // unmatched: no callgraph reference and no git history record
    virtual void LeftMouseButtonUp(
        const CoordStruct& coords,
        const CellStruct& cell,
        ObjectClass* object,
        Action action,
        uint32_t unk2) {}
    // unmatched: no callgraph reference and no git history record
    virtual void RightMouseButtonUp(uint32_t unk);

    // unmatched: no callgraph reference and no git history record
    bool ProcessClickCoords(
        Point2D* src,
        CellStruct* xy_dst,
        CoordStruct* xyz_dst,
        ObjectClass** target,
        byte* a5,
        byte* a6);

    // unmatched: no callgraph reference and no git history record
    void SetActiveFoundation(CellStruct* coords);

    // unmatched: no callgraph reference and no git history record
    Action DecideAction(
        const CellStruct& cell,
        ObjectClass* object,
        uint32_t unk);

    // unmatched: no callgraph reference and no git history record
    CellStruct* FoundationBoundsSize(
        CellStruct& out,
        const CellStruct* foundation_data) const;

    // unmatched: no callgraph reference and no git history record
    CellStruct FoundationBoundsSize(
        const CellStruct* foundation_data) const;

    // unmatched: no callgraph reference and no git history record
    void MarkFoundation(CellStruct* base_cell, bool mark);

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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int UpdateDisplayTimer();  // 0x487630 -- DisplayClass::UpdateDisplayTimer
    int AdvanceFrameCounter();  // 0x487690 -- DisplayClass::AdvanceFrameCounter
    int LoadTypeData();  // 0x4a8850 -- DisplayClass::LoadTypeData
    int SetSize();  // 0x4a88c0 -- DisplayClass::SetSize
    void Update(int a1, int a2);  // 0x4a9700 -- DisplayClass::Update
    int UpdateCellPassability(int a1, int a2);  // 0x4a9890 -- DisplayClass::UpdateCellPassability
    int ProcessCellReveal(int a1, int a2);  // 0x4a9dd0 -- DisplayClass::ProcessCellReveal
    bool RevealFogCell(int a1, int a2);  // 0x4aa050 -- DisplayClass::RevealFogCell
    int ProcessTacticalMouseInput(int a1, int a2, int a3);  // 0x4aac10 -- DisplayClass::ProcessTacticalMouseInput
    int InitViewBounds(int a1);  // 0x4ac310 -- DisplayClass::InitViewBounds
    int ExitMode();  // 0x4aead0 -- DisplayClass::ExitMode
    void* updateRenderState(int a1);  // 0x4aebb0 -- DisplayClass::updateRenderState
    void* Read(int a1);  // 0x4aebf0 -- DisplayClass::Read
    void* processDisplayMode(int a1);  // 0x4aec30 -- DisplayClass::processDisplayMode
    bool RenderStatusText(int a1, int a2);  // 0x5519b0 -- DisplayClass::RenderStatusText
    int InsertPriorityText(int a1);  // 0x551a90 -- DisplayClass::InsertPriorityText
    bool checkScreenBounds(int a1);  // 0x5f6220 -- DisplayClass::checkScreenBounds
    int ScrollTacticalView(int a1, int a2);  // 0x6d8530 -- DisplayClass::ScrollTacticalView
    int GetCoordDelta(int a1);  // 0x6da230 -- DisplayClass::GetCoordDelta
    int ReadFromBuffer(int a1, int a2);  // 0x7ba4d0 -- DisplayClass::ReadFromBuffer
    void* GetViewport();  // 0x72ad20 -- Display::GetViewport
    // === SYMBOL-ANCHOR (END) ===
};

} // namespace gamemd
