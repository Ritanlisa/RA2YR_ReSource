#pragma once

#include <cstdint>
#include <windows.h>
#include "core/enums.hpp"
#include "core/math.hpp"

namespace gamemd
{

class DSurface;
class HouseClass;

// ============================================================================
// Control — dialog control management (4 methods)
// IDA: DispatchClick, RepositionControlsDialog, CheckControlTypeDialog
// ============================================================================
class Control
{
public:
    // IDA 0x48B2A0 area
    static int32_t DispatchClick(HWND hDlg, int32_t ctrlID);
    // IDA 0x48B2A0 area
    static void RepositionControlsDialog(HWND hDlg);
    // IDA 0x48B2A0 area
    static bool CheckControlTypeDialog(HWND hDlg, int32_t ctrlID, int32_t type);
    // IDA 0x48B2A0 area
    static void SetControlText(HWND hDlg, int32_t ctrlID, const wchar_t* text);

    int32_t     Control_field_00;       // 0x00
};

// ============================================================================
// Text — text rendering / layout (4 methods)
// IDA: Layout, MeasureWidth, sub_5BD3D0
// ============================================================================
class Text
{
public:
    // IDA 0x5BD3D0
    static void Layout(const wchar_t* text, int32_t maxWidth);
    // IDA 0x5BD3D0 area
    static int32_t MeasureWidth(const wchar_t* text);
    // IDA 0x5BD3D0 area
    static void sub_5BD3D0();
    // IDA 0x5BD3D0 area
    static void DrawText(DSurface* surface, const wchar_t* text, int32_t x, int32_t y, uint32_t color);

    int32_t     Text_field_00;       // 0x00
};

// ============================================================================
// Font — font management (2 methods)
// IDA: sub_4346C0, Print
// ============================================================================
class Font
{
public:
    // IDA 0x4346C0
    void sub_4346C0();
    // IDA 0x4346C0 area
    void Print(const char* text, int32_t x, int32_t y, uint32_t color);

    void*       m_FontData;     // 0x00
    int32_t     Font_field_04;       // 0x04
    int32_t     Font_field_08;       // 0x08
};

// ============================================================================
// BitTextClass — bitmap text rendering (2 methods)
// IDA: ParseFontData 0x434AD0, LoadFont
// ============================================================================
class BitTextClass
{
public:
    // IDA 0x434AD0
    void ParseFontData(void* mem);
    // IDA 0x434AD0 area
    static void* LoadFont(void* mem);

    void*       m_FontBitmap;   // 0x00
    int32_t     m_CharWidth;    // 0x04
    int32_t     m_CharHeight;   // 0x08
    int32_t     BitTextClass_field_0C;       // 0x0C
};

// ============================================================================
// Window — window management utilities (2 methods)
// IDA: IsVisible, ClampToScreen
// ============================================================================
class Window
{
public:
    // IDA 0x48B2A0 area
    static bool IsVisible(HWND hWnd);
    // IDA 0x48B2A0 area
    static void ClampToScreen(RECT* rect);

    int32_t     Window_field_00;       // 0x00
};

// ============================================================================
// MainMenu — main menu screen (2 methods)
// IDA: Screen, DlgProc
// ============================================================================
class MainMenu
{
public:
    // IDA 0x48B2A0 area
    static void Screen();
    // IDA 0x48B2A0 area
    static int32_t DlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam);

    static int32_t  s_State;        // 0x00
};

// ============================================================================
// Menu — menu state machine (1 method)
// IDA: Reset
// ============================================================================
class Menu
{
public:
    // IDA 0x48B2A0 area
    static void Reset();

    static int32_t  s_MenuState;    // 0x00
};

// ============================================================================
// CreditsScreen — credits screen (2 methods)
// IDA: Init, DlgProc
// ============================================================================
class CreditsScreen
{
public:
    // IDA 0x48B2A0 area
    static void Init();
    // IDA 0x48B2A0 area
    static int32_t DlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam);

    static int32_t  s_ScrollPos;    // 0x00
};

// ============================================================================
// Credits — credit system (1 method)
// IDA: Screen
// ============================================================================
class Credits
{
public:
    // IDA 0x48B2A0 area
    static void Screen();

    static int32_t  s_Credits;      // 0x00
};

// ============================================================================
// CampaignScreen — campaign screen (1 method)
// IDA: Init
// ============================================================================
class CampaignScreen
{
public:
    // IDA 0x48B2A0 area
    static void Init();

    static int32_t  s_MissionIndex; // 0x00
};

// ============================================================================
// Diplomacy — diplomacy dialog (2 methods)
// IDA: GetField, DlgProc
// ============================================================================
class Diplomacy
{
public:
    // IDA 0x48B2A0 area
    int32_t GetField(HouseClass* house) const;
    // IDA 0x48B2A0 area
    static int32_t DlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam);

    int32_t     Diplomacy_field_00;       // 0x00
    int32_t     Diplomacy_field_04;       // 0x04
};

// ============================================================================
// Progress — progress tracking (2 methods)
// IDA: GetAverage, GetWeighted
// ============================================================================
class Progress
{
public:
    // IDA 0x48B2A0 area
    float GetAverage() const;
    // IDA 0x48B2A0 area
    float GetWeighted() const;

    float       m_Values[8];    // 0x00
    int32_t     m_Index;        // 0x20
    int32_t     m_Count;        // 0x24
};

// ============================================================================
// KeyboardConfig — keyboard configuration (2 methods)
// IDA: LoadINI 0x533D20, ReleaseBuffer
// ============================================================================
class KeyboardConfig
{
public:
    // IDA 0x533D20
    static void LoadINI();
    // IDA 0x533D20 area
    static void ReleaseBuffer();

    static int32_t  s_KeyMap[256];  // 0x00
};

// ============================================================================
// HotkeyOptions — hotkey options dialog (1 method)
// IDA: DlgProc 0x5FB320
// ============================================================================
class HotkeyOptions
{
public:
    // IDA 0x5FB320
    static int32_t DlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam);

    static int32_t  s_CurrentKey;   // 0x00
};

// ============================================================================
// LinkClass — linked list node (3 methods)
// IDA: Destroy, Destru_vt00, Destruct
// ============================================================================
class LinkClass
{
public:
    LinkClass() = default;
    virtual ~LinkClass();

    // IDA 0x48B2A0 area
    void Destroy();
    void Destru_vt00();
    void Destruct();

    LinkClass*  m_Next;         // 0x04 (after vtable)
    LinkClass*  m_Prev;         // 0x08
    int32_t     LinkClass_field_0C;       // 0x0C
};

// ============================================================================
// Input — input processing (1 method)
// IDA: OffsetToDirection
// ============================================================================
class Input
{
public:
    // IDA 0x48B2A0 area
    static int32_t OffsetToDirection(int32_t dx, int32_t dy);

    int32_t     Input_field_00;       // 0x00
};

} // namespace gamemd
