#pragma once

#include <cstdint>
#include <windows.h>
#include <objidl.h>

#include "..\core\enums.hpp"
#include "..\core\math.hpp"
#include "..\object\object.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif




class CCINIClass;
class HouseClass;
class TacticalClass;
struct RectangleStruct;

class GScreenClass
{
public:
    static GScreenClass* Instance;

    virtual ~GScreenClass() = default;

    virtual void OneTime() {}
    virtual void InitClear() {}
    virtual void GetInputAndUpdate(uint32_t* outKeyCode, int* outMouseX, int* outMouseY) {}
    virtual void Update(const int& keyCode, const Point2D& mouseCoords) {}
    virtual bool OnMessage(uint32_t msg) { return false; }
    virtual void MarkNeedsRedraw(int flags) {}
    virtual void DrawOnTop() {}
    virtual void Draw(uint32_t flags) {}
    virtual void Render() {}
    virtual bool SetCursor(MouseCursorType cursor, bool miniMap) { return false; }
    virtual bool UpdateCursor(MouseCursorType cursor, bool miniMap) { return false; }
    virtual bool RestoreCursor() { return false; }
    virtual void UpdateCursorMinimapState(bool miniMap) {}

    int32_t  ScreenShakeX;
    int32_t  ScreenShakeY;
    int32_t  unknown_0C;
    HWND     hWnd;
    int32_t  ScreenWidth;
    int32_t  ScreenHeight;
    bool     IsWindowed;
    uint8_t  padding_1D[3];

    // TODO: complete DisplayClass, MapClass, RadarClass, PowerClass, SidebarClass, TabClass,
    //       ScrollClass, MouseClass embedded sub-objects and virtual layout

protected:
    GScreenClass() = default;
};

class DisplayClass : public GScreenClass
{
public:
    virtual ~DisplayClass() = default;

    virtual HRESULT Load(IStream* stream) { return S_OK; }
    virtual HRESULT Save(IStream* stream) { return S_OK; }
    virtual void LoadFromINI(CCINIClass* pINI) {}
    virtual const wchar_t* GetToolTip(uint32_t dlgID) { return nullptr; }
    virtual void CloseWindow() {}
    virtual bool IsCellFullyVisible(const CellStruct& cell, HouseClass* pHouse) { return false; }
    virtual bool IsCellShrouded(const CellStruct& cell, HouseClass* pHouse, bool unk) { return false; }
    virtual bool IsCellFogged(const CellStruct& cell, HouseClass* pHouse) { return false; }
    virtual bool IsCellVisible(const CellStruct& cell, HouseClass* pHouse) { return false; }
    virtual void SetViewDimensions(const RectangleStruct& rect) {}
    virtual bool ConvertAction(const CellStruct& cell, bool shrouded, ObjectClass* pObject, Action action, bool unk) { return false; }
    virtual void LeftMouseButtonDown(const Point2D& point) {}
    virtual void LeftMouseButtonUp(const CoordStruct& coords, const CellStruct& cell, ObjectClass* pObject, Action action, uint32_t unk) {}
    virtual void RightMouseButtonUp(uint32_t unk) {}

    CellStruct      CurrentFoundationCenterCell;
    CellStruct      CurrentFoundationTopLeftOffset;
    CellStruct*     CurrentFoundationData;
    bool            FollowObject;
    ObjectClass*    ObjectToFollow;
    ObjectClass*    CurrentBuilding;
    // TODO: complete DisplayClass members

    Action DecideAction(const CellStruct& cell, ObjectClass* pObject, uint32_t flags);
    bool ProcessClickCoords(Point2D* src, CellStruct* cellXY, CoordStruct* coordXYZ,
                            ObjectClass** outTarget, uint8_t* a5, uint8_t* a6);

protected:
    DisplayClass() = default;
};

class MapClass : public DisplayClass
{
public:
    virtual ~MapClass() = default;

    virtual void CreateEmptyMap(const RectangleStruct& mapRect, bool reuse, int8_t level, bool unk) {}
    virtual void SetVisibleRect(const RectangleStruct& mapRect) {}

    // TODO: complete MapClass members

protected:
    MapClass() = default;
};

class RadarClass : public MapClass
{
public:
    virtual ~RadarClass() = default;

    virtual void DisposeOfArt() {}
    virtual void InitForHouse() {}

    bool     IsAvailableNow;
    float    RadarSizeFactor;

    // TODO: complete RadarClass members

protected:
    RadarClass() = default;
};

} // namespace gamemd

