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
    virtual ~GScreenClass();

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
    virtual ~MapClass() override;  // 0x5652C0
// --- e4 declarations (BEGIN) ---
    int isLocationShrouded(unsigned short a2);  // 0x4112D0
    unsigned int * AllocArrays();  // 0x42C1C0
    char isCellAccessible(int a2);  // 0x430F30
    char loadTheaterINI(INIClass * aP1, char * a2, int a4);  // 0x4758C0
    int RemoveCellReference(int a2);  // 0x485130
    int UnselectAll_ClearLimboLaunchers();  // 0x48DC90
    char SetCellFlagsAlongPath(IUnknown * aP1, unsigned short * a2);  // 0x4A95A0
    int ToggleZoom(int a2);  // 0x4AC960
    int ProcessVisibilityFlags();  // 0x4ACAC0
    int ProcessFogTransition();  // 0x4ACBC0
    char RevealCell(MouseClass * aP1);  // 0x4ACDA0
    int SaveCellTagsToINI(char * a2);  // 0x4AD7E0
    int UpdateLightingPostProcess();  // 0x4AE4C0
    int GetScrollMode();  // 0x4AEB10
    bool SetScrollMode(MouseClass * aP1);  // 0x4AEB30
    int MarkForRedraw(int a2);  // 0x4F42F0
    int CalcVisibleCellRange(int a1, int a2, VectorClass * aP2, int * a3);  // 0x506D50
    int LoadFileData();  // 0x547020
    char ScrollOnce(AbstractClass * aP1);  // 0x554A80
    void Destruct();  // 0x5652C0
    int IsCellPassable(int a1, int a2);  // 0x5656D0
    int Destru_vt05();  // 0x565800
    void Destru_vt07();  // 0x5659F0
    int InitCellVector();  // 0x565AA0
    int FreeAllCells();  // 0x565B00
    unsigned int * InitAllCells();  // 0x565BC0
    void FillRevealBuffer(MouseClass * aP1, IUnknown * aP2);  // 0x5683C0
    void ApplyOverlayReveal(MouseClass * aP1, BuildingClass * aP2);  // 0x5687F0
    int PostProcessReveal(char a2);  // 0x568BB0
    int DecompressCellData(MouseClass * aP1);  // 0x56B3F0
    int GetTileIndex(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3);  // 0x56D230
    int ProcessRegion();  // 0x56D6E0
    char ClearRegions(IUnknown * aP1);  // 0x56DAE0
    int TransitionCliff(MouseClass * aP0);  // 0x574780
    void ApplyTerrainDamage(IUnknown *this@<ecx> a1, IUnknown aP1);  // 0x574C20
    int RemoveTriggerRef(AbstractClass * aP1, int a3);  // 0x577920
    void * ClearShroud(HouseClass * aP1);  // 0x577F30
    unsigned int * SpiralSearch();  // 0x578710
    unsigned int * FastCellLookup(short * a2, int a3, char a4);  // 0x578880
    void IncrementRedrawCounter();  // 0x578AC0
    char InitTileData(MouseClass * aP0, int aP3);  // 0x57A0C0
    int BuildTileConnectivityGraph(MapClass * aP1, IUnknown * aP2, IUnknown * aP3);  // 0x57A320
    int TriggerEVA(IUnknown * aP0);  // 0x57B790
    unsigned int * BuildSubzones();  // 0x581F50
    char InitializeTileData(MapClass * aP1);  // 0x5856B0
    char LoadTerrainData(MapClass * aP1);  // 0x585D00
    bool IsAreaFree(int * a2, int a3);  // 0x586780
    MapClass * Destru_vt04(char * Block, char a2);  // 0x588BF0
    unsigned int initCellVectors(int a2);  // 0x588DE0
    int InitCellVe_vt06(int a2);  // 0x588EF0
    VectorClass * InitCellVe_vt00(unsigned int * Block, char a2);  // 0x589060
    char AllocateCellDataBuffer(int a2, char * a3);  // 0x589370
    void allocateCellArrays();  // 0x5894A0
    int FindSubzoneConnectionIndex(unsigned short * a2);  // 0x5894D0
    unsigned int initSubzoneData(int a2);  // 0x589530
    char AllocateMapDataBuffer(int a2, int * a3);  // 0x589A60
    unsigned int * allocateMapBuffers();  // 0x589BD0
    char InitCellVe_vt01(int a2);  // 0x589CA0
    char InitCellVe_vt02(int a2, unsigned int * a3);  // 0x589CE0
    void InitCellVe_vt03();  // 0x589D90
    int InitCellVe_vt04(unsigned int * a2);  // 0x589DC0
    unsigned int InitCellVe_vt05(int a2);  // 0x589E00
    int Cleanup(int a1, int a2);  // 0x594700
    int ProcessTile();  // 0x599530
    MapClass * SetObstruction(short * a0, MapClass * aP1);  // 0x5A0090
    int GetTileDataField14(MapResourceClass * aP0);  // 0x5A00C0
    char GrowLayer(int a2, int a3, int a4);  // 0x5A0410
    int FindPassableNeighbor();  // 0x5A17F0
    void checkCellBounds();  // 0x5AC5A0
    unsigned int validateCellCoord(int a2);  // 0x5AC5D0
    int updatePathfindingGrid(unsigned int * a2);  // 0x5AD0C0
    int SetCellOverlayFlag();  // 0x5F60A0
    int ClearCellOverlayFlag();  // 0x5F6120
    unsigned int TransformCoordToScreen(int a2, unsigned int * a3);  // 0x6D8260
    unsigned int * FindPlacementCellsAlt(IUnknown * aP1, IUnknown * aP2);  // 0x703590
    int isCellShrouded(unsigned short a2);  // 0x7BCF50
// --- e4 declarations (END) ---
};
#endif

class DisplayClass : public MapClass
{
public:
    virtual ~DisplayClass() override;  // 0x4A8930

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
        uint32_t unk);

    // unmatched: no callgraph reference and no git history record
    virtual void LeftMouseButtonDown(const Point2D& point);
    // unmatched: no callgraph reference and no git history record
    virtual void LeftMouseButtonUp(
        const CoordStruct& coords,
        const CellStruct& cell,
        ObjectClass* object,
        Action action,
        uint32_t unk2);
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
// --- e4 declarations (BEGIN) ---
    char ddtor();  // 0x4A8930
    bool SetCoordVisible(IUnknown * aP0, MouseClass * aP1, char a3);  // 0x4A9840
    wchar_t * Draw(int a2);  // 0x4AE4F0
    HWND Render();  // 0x4AE6B0
    int SetSurface(unsigned int * a1);  // 0x4AE6F0
    int GetSurface(unsigned int * a1);  // 0x4AE720
    unsigned int * loc_4AEB50(unsigned int * Block, char a2);  // 0x4AEB50
// --- e4 declarations (END) ---
};

} // namespace gamemd
