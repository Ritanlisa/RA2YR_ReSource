#pragma once

#include "object/abstract.hpp"

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
#ifndef GAMEMD_USING_CoordStruct
#define GAMEMD_USING_CoordStruct
using ra2::game::CoordStruct;
#endif
#ifndef GAMEMD_USING_Point2D
#define GAMEMD_USING_Point2D
using ra2::game::Point2D;
#endif
#ifndef GAMEMD_USING_CellStruct
#define GAMEMD_USING_CellStruct
using ra2::game::CellStruct;
#endif
#ifndef GAMEMD_USING_RectangleStruct
#define GAMEMD_USING_RectangleStruct
using ra2::game::RectangleStruct;
#endif









class CellClass;
class BuildingClass;
// ObjectClass - use the ra2::game namespace version
#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif
struct ColorScheme;

class TacticalClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::TacticalMap;

    // design: inline accessor, inlined at all call sites
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    // design: inline accessor, inlined at all call sites
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    // design: inline accessor, inlined at all call sites
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TacticalClass() = default;

    // design: inline accessor, inlined at all call sites
    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::TacticalMap; }
    // design: inline accessor, inlined at all call sites
    virtual int objectSize() const override { return 0; }

    // design: no binary equivalent found in IDA
    bool CoordsToClient(const CoordStruct& coords, Point2D* out_client) const;
    // design: no binary equivalent found in IDA
    CoordStruct* ClientToCoords(CoordStruct* out, const Point2D& client) const;
    CoordStruct ClientToCoords(const Point2D& client) const
    {
        CoordStruct buf;
        ClientToCoords(&buf, client);
        return buf;
    }

    // Coordinate transforms
    // design: no binary equivalent found in IDA
    CoordStruct* Coord_To_Screen(const CoordStruct& world, Point2D* out) const;

    // design: no binary equivalent found in IDA
    int GetOcclusion(const CellStruct& cell, bool fog) const;
    Point2D* AdjustForZShapeMove(Point2D* dest, Point2D* client);  // 0x6D1FE0
    static int AdjustForZ(int height);  // 0x6D1FE0

    // Viewport management
    // wrapper: delegates to TacticalClass::AdjustForZShapeMove at 0x6D1FE0
    void FocusOn(CoordStruct* dest, int velocity);
    // wrapper: delegates to TacticalClass::AdjustForZShapeMove at 0x6D1FE0
    void RegisterDirtyArea(RectangleStruct area, bool unk);
    // wrapper: delegates to TacticalClass::AdjustForZShapeMove at 0x6D1FE0
    void RegisterCellAsVisible(CellClass* cell);
    void SetView(int view_x, int view_y, int view_width, int view_height);  // 0x483E30
    void SetViewDimensions(int width, int height);  // 0x4A8960
    void InitView(); // 0x537620
    void SetViewportPosition(int x, int y);  // 0x6D5F60
    void ScrollViewport(int dx, int dy);  // 0x6D2540
    void CalcViewportCells();  // 0x6D8B30
    void updateVisibility(); // 0x5090A0
    void InterpolateView();  // 0x4AE290

    // Rendering pipeline
    void Render(ObjectClass* obj); // 0x74D490
    void RenderFrame();  // 0x4f45b0
    void RenderCells();  // 0x550260
    void RenderIsometric(const RectangleStruct& viewRect, int flags);  // 0x6D7560
    void RenderIsometricOverlay(const RectangleStruct& viewRect);  // 0x6D2DE0
    void RenderCellFogOfWar(int cx, int cy);  // 0x4801F0
    void renderOverlay();  // 0x658780

    // Map drawing
    void DrawMap(const RectangleStruct& viewRect, RectangleStruct* bounds);  // 0x6D7840
    void DrawTerrain(const RectangleStruct& viewRect);  // 0x6D7C00
    void DrawTerrainPartial(const RectangleStruct& rect);  // 0x6D3040
    void DrawCellTerrainOverlay(int cx, int cy, RectangleStruct* bounds);  // 0x4802A0
    void DrawCellOverlay(int cx, int cy, int flags);  // 0x547230
    void DrawBuildings(const RectangleStruct& viewRect);  // 0x4D1890
    void DrawBuildingsInView(const RectangleStruct& viewRect);  // 0x6D6D10
    void DrawBuildingPlacement(BuildingClass* building, int state); // 0x47F510
    void DrawPlacementCircles(ObjectClass* obj, int range, int color);  // 0x6DBE20

    // Draw queue
    void AddToDrawQueue(ObjectClass* obj, int screen_x, int screen_y);  // 0x6D9EF0
    void CalcAllDrawPositions();  // 0x6D3660
    Point2D* CalcBuildingDrawPos(Point2D* out, BuildingClass* building);  // 0x6D71E0

    // Cell visibility
    void CheckCellVisibility(const Point2D& screen_pos, int flags, bool unk);  // 0x480350
    bool PixelToCellCheck(const Point2D& pixel, CellStruct* out_cell) const;  // 0x653760
    CellStruct ScreenToCellLookup(const Point2D& screen) const;  // 0x656750
    bool IsOccupiedByTechno(const CellStruct& cell) const;  // 0x6DA380
    bool CheckUnitOverlap(const CellStruct& cell, int facing) const;  // 0x6D9B50

    // Input
    void ProcessScroll(); // 0x4AC380
    void MouseInput(int x, int y, int buttons);  // 0x653850
    void ProcessMouseClick(int x, int y);  // 0x6539D0

    // Helpers
    Point2D TransformPixel(const Point2D& pixel) const;  // 0x6D2280
    uint32_t InterpolateColor(uint32_t elapsed_ms);  // 0x631E50
    bool DecrementCounter(uint32_t delta); // 0x631EE0
    void MapSpecialDrawMode();  // 0x70F0B0
    // wrapper: delegates to TacticalClass::MapSpecialDrawMode at 0x70F0B0
    static int DrawTimer(int index, ColorScheme* scheme, int time, const wchar_t* text, const Point2D* xy1, const Point2D* xy2);

    uint32_t        field24;
    uint32_t        field28;
    uint32_t        TacticalClass_field_2C;
    uint32_t        field30;
    uint32_t        field34;
    uint32_t        field38;
    uint32_t        TacticalClass_field_3C;
    uint32_t        field40;
    uint32_t        field44;
    uint32_t        field48;
    uint32_t        TacticalClass_field_4C;
    uint32_t        field50;
    uint32_t        field54;
    uint32_t        field58;
    uint32_t        TacticalClass_field_5C;
    uint32_t        field60;
    uint32_t        field64;
    uint32_t        field68;
    uint32_t        TacticalClass_field_6C;
    uint32_t        field70;
    uint32_t        field74;
    uint32_t        field78;
    uint32_t        TacticalClass_field_7C;
    uint32_t        field80;
    uint32_t        field84;
    uint32_t        field88;
    uint32_t        TacticalClass_field_8C;
    uint32_t        field90;
    uint32_t        field94;
    uint32_t        field98;
    uint32_t        TacticalClass_field_9C;
    uint32_t        TacticalClass_field_A0;
    uint32_t        TacticalClass_field_A4;
    uint32_t        TacticalClass_field_A8;
    bool            TacticalClass_field_AC;
    bool            TacticalClass_field_AD;
    RectangleStruct visibleArea;
    double          zoomInFactor;
    uint32_t        TacticalClass_field_C8;
    uint32_t        TacticalClass_field_CC;
    uint32_t        TacticalClass_field_D0;
    uint32_t        TacticalClass_field_D4;
    uint32_t        TacticalClass_field_D8;
    uint32_t        TacticalClass_field_DC;
    uint32_t        visibleCellCount;
    CellClass*      visibleCells[800];
    uint32_t        TacticalClass_field_D64;
    uint32_t        TacticalClass_field_D68;
    uint32_t        TacticalClass_field_D6C;
    uint32_t        TacticalClass_field_D70;
    uint32_t        TacticalClass_field_D74;
    uint32_t        TacticalClass_field_D78;
    bool            TacticalClass_field_D7C;
    bool            redrawing;
    uint32_t        TacticalClass_field_D80;
    uint32_t        TacticalClass_field_D84;
    uint32_t        TacticalClass_field_D88;
    uint32_t        TacticalClass_field_D8C;
    uint32_t        TacticalClass_field_D90;
    uint32_t        TacticalClass_field_D94;
    uint32_t        TacticalClass_field_D98;
    uint32_t        TacticalClass_field_D9C;
    uint32_t        mouseFrameIndex;
    uint32_t        startTime;
    uint32_t        TacticalClass_field_DA8;
    uint32_t        TacticalClass_field_DAC;
    float           floats[12];
    RectangleStruct TacticalClass_field_DE4;
    uint32_t        TacticalClass_field_DF4;
    double          TacticalClass_field_DF8;
    uint32_t        TacticalClass_field_E00;
    uint32_t        TacticalClass_field_E04;
    double          TacticalClass_field_E08;
    uint32_t        TacticalClass_field_E10;
    uint32_t        TacticalClass_field_E14;

protected:
    TacticalClass() noexcept;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int FillScanlinesTransparent(int a1, int a2, int a3, int a4);  // 0x411330
    int ProcessFrame();  // 0x41BFA0
    int CheckAction();  // 0x41C030
    bool ProcessTick();  // 0x41C050
    void* ProcessTick2(void* a1);  // 0x41C150
    int ProcessTick3(int a1);  // 0x41C160
    int initTacticalMap(void* a1, void* a2);  // 0x45F1D0
    int DispatchMode(int a1);  // 0x4AAD30
    int HandlePlayerAction(void* a1, int a2, void* a3, int a4, int a5);  // 0x4AAE90
    int SetObserverMode(int a1);  // 0x4AC820
    int Initialize();  // 0x4AE450
    int SetCameraPosition(int a1, int a2, int a3);  // 0x540D10
    int UpdateScrollTarget(int a1, int a2, int a3, int a4, int a5);  // 0x554AA0
    int ScrollView(int a1);  // 0x554AF0
    int GetField();  // 0x556B30
    void ClearVector();  // 0x5C0A70
    int ProbeCalling(int a1);  // 0x5C0AA0
    int ProbeCalling2(int a1);  // 0x5C0AC0
    int CompareVector(int a1);  // 0x5C0AD0
    int ReallocVector(int a1, void* a2);  // 0x5C0C50
    int FindInVector(void* a1);  // 0x5C0D00
    void* DestroyVector(int a1);  // 0x5C0D80
    int processInput(int a1);  // 0x5D4AD0
    void* saveConfig(int a1);  // 0x631E30
    void FreeResources();  // 0x655A90
    void ProcessChronoEffect();  // 0x6578F0
    int UpdateObjects();  // 0x65ACE0
    void ProcessView();  // 0x692F30
    int SetPosition(void* a1, int a2);  // 0x6D2420
    int ClickFindBuilding(void* a1, void* a2, int a3);  // 0x6D3870
    int ClickFindOverlay(void* a1, void* a2, int a3);  // 0x6D3AC0
    int InitScrollBounds(void* a1);  // 0x6D9F80
    int UpdateScrollMaxBounds(void* a1);  // 0x6D9FC0
    int ResetScrollBounds();  // 0x6DA160
    int Get(int a1, int a2);  // 0x6EE100
    int SetObserverView();  // 0x7311C0
    int ResetView();  // 0x7313A0
    void* updateScroll(int a1, int a2);  // 0x7343E0
    void* CalcInverseAlpha(int a1, float a2);  // 0x75F5C0
    // --- gap2 auto-generated stub declarations (END) ---
};

} // namespace gamemd

