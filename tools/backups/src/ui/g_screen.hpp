#pragma once

#include <cstdint>
#include <windows.h>
#include <objidl.h>

#include "core/enums.hpp"
#include "core/math.hpp"
#include "object/object.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif




class CCINIClass;
class HouseClass;
class TacticalClass;
struct RectangleStruct;

#ifndef GAMEMD_DEF_GScreenClass
#define GAMEMD_DEF_GScreenClass
class GScreenClass
{
public:
    static GScreenClass* Instance;

    virtual ~GScreenClass() = default;

    virtual void OneTime();
    virtual void InitClear();
    virtual void GetInputAndUpdate(uint32_t* outKeyCode, int* outMouseX, int* outMouseY);
    virtual void Update(const int& keyCode, const Point2D& mouseCoords);
    virtual bool OnMessage(uint32_t msg);
    virtual void MarkNeedsRedraw(int flags);
    virtual void DrawOnTop();
    virtual void Draw(uint32_t flags);
    virtual void Render();
    virtual bool SetCursor(MouseCursorType cursor, bool miniMap);  // 0x7C87B8
    virtual bool UpdateCursor(MouseCursorType cursor, bool miniMap);
    virtual bool RestoreCursor();
    virtual void UpdateCursorMinimapState(bool miniMap);

    virtual HRESULT Load(IStream* stream);
    virtual HRESULT Save(IStream* stream);
    virtual void LoadFromINI(CCINIClass* ini);
    virtual const wchar_t* GetToolTip(unsigned int dialog_id);
    virtual void CloseWindow();  // 0x7C865C
    virtual void vt_entry_8C();
    virtual bool vt_entry_90(const CellStruct& cell, HouseClass* house);
    virtual bool vt_entry_94(const CellStruct& cell, HouseClass* house, bool unk);  // 0x4a9ca0
    virtual bool vt_entry_98(const CellStruct& cell, HouseClass* house);
    virtual bool vt_entry_9C(const CellStruct& cell, HouseClass* house);

    int32_t  ScreenShakeX;
    int32_t  ScreenShakeY;
    int32_t  GScreenClass_field_0C;
    HWND     hWnd;
    int32_t  ScreenWidth;
    int32_t  ScreenHeight;
    bool     IsWindowed;
    uint8_t  padding_1D[3];

protected:
    GScreenClass() = default;
};
#endif

class DisplayClass;

} // namespace gamemd

