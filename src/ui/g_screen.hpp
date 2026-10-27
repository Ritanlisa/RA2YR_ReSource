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
#ifndef GAMEMD_G2_GScreenClass_DEF  // g57a5 W2d: twin-definition guard (g_screen GScreenClass)
#define GAMEMD_G2_GScreenClass_DEF 1
class GScreenClass
{
public:
    static GScreenClass* Instance;

    virtual ~GScreenClass() = default;

    virtual void OneTime();
    virtual void InitClear();
    // unmatched: no callgraph reference and no git history record
    virtual void GetInputAndUpdate(uint32_t* outKeyCode, int* outMouseX, int* outMouseY);
    virtual void Update(const int& keyCode, const Point2D& mouseCoords);
    // unmatched: no callgraph reference and no git history record
    virtual bool OnMessage(uint32_t msg);
    // unmatched: no callgraph reference and no git history record
    virtual void MarkNeedsRedraw(int flags);
    // unmatched: no callgraph reference and no git history record
    virtual void DrawOnTop();
    virtual void Draw(uint32_t flags);
    virtual void Render();
    virtual bool SetCursor(MouseCursorType cursor, bool miniMap);
    // unmatched: no callgraph reference and no git history record
    virtual bool UpdateCursor(MouseCursorType cursor, bool miniMap);
    // unmatched: no callgraph reference and no git history record
    virtual bool RestoreCursor();
    virtual void UpdateCursorMinimapState(bool miniMap);

    virtual HRESULT Load(IStream* stream);
    virtual HRESULT Save(IStream* stream);
    virtual void LoadFromINI(CCINIClass* ini);
    virtual const wchar_t* GetToolTip(unsigned int dialog_id);
    int CloseWindow();
    virtual void g_var_5463b9();
    // unmatched: no callgraph reference and no git history record
    virtual bool g_var_487457(const CellStruct& cell, HouseClass* house);
    virtual bool g_var_72f2d5(const CellStruct& cell, HouseClass* house, bool unk);
    // unmatched: no callgraph reference and no git history record
    virtual bool g_var_33fd16(const CellStruct& cell, HouseClass* house);
    // unmatched: no callgraph reference and no git history record
    virtual bool g_var_d6ef1e(const CellStruct& cell, HouseClass* house);

    // x145b: 0x4F4410 vt+48 (csp slot authority); 1-arg 成员形态 = e4 树统一调用样式 (addr6A:147/SidebarClass_e4:589)
    int InsertOrdered(int a1);  // 0x4F4410

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
#endif  // GAMEMD_G2_GScreenClass_DEF

#endif

class DisplayClass;

} // namespace gamemd

