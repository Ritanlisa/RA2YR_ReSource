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
    static int32_t DispatchClick(HWND hDlg, int32_t ctrlID);  // 0x48E620
    // IDA 0x48B2A0 area
    static void RepositionControlsDialog(HWND hDlg);  // 0x60B950
    // IDA 0x48B2A0 area
    static bool CheckControlTypeDialog(HWND hDlg, int32_t ctrlID, int32_t type);  // 0x60C540
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
    static void Layout(const wchar_t* text, int32_t maxWidth);  // 0x433CF0
    // IDA 0x5BD3D0 area
    static int32_t MeasureWidth(const wchar_t* text);  // 0x433ED0
    // IDA 0x5BD3D0 area
    static void sub_5BD3D0();
    // IDA 0x5BD3D0 area
    static void DrawText(DSurface* surface, const wchar_t* text, int32_t x, int32_t y, uint32_t color);  // 0x4A61C0

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
    void Print(const char* text, int32_t x, int32_t y, uint32_t color);  // 0x434CD0

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
    void ParseFontData(void* mem);  // 0x433880
    // IDA 0x434AD0 area
    static void* LoadFont(void* mem);  // 0x434AD0

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
    static bool IsVisible(HWND hWnd);  // 0x4A5110
    // IDA 0x48B2A0 area
    static void ClampToScreen(RECT* rect);  // 0x776D80

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
    static void Screen();  // 0x531CC0
    // IDA 0x48B2A0 area
    static int32_t DlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam);  // 0x531F60

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
    static void Reset();  // 0x4C6140

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
    static void Init();  // 0x4A3C00
    // IDA 0x48B2A0 area
    static int32_t DlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam);  // 0x531A00

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
    static void Screen();  // 0x52CB90

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
    static void Init();  // 0x470D30

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
    int32_t GetField(HouseClass* house) const;  // 0x656580
    // IDA 0x48B2A0 area
    static int32_t DlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam);  // 0x657DA0

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
    float GetAverage() const;  // 0x6433D0
    // IDA 0x48B2A0 area
    float GetWeighted() const;  // 0x643E90

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
    static void LoadINI();  // 0x533D20
    // IDA 0x533D20 area
    static void ReleaseBuffer();  // 0x538B80

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
    static int32_t DlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam);  // 0x5FB320

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
    virtual ~LinkClass();  // 0x5565A0

    // IDA 0x48B2A0 area
    void Destroy();  // 0x4E1480
    void Destru_vt00();  // 0x4E1AD0
    void Destruct();  // IDA: 0x5565A0

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
    static int32_t OffsetToDirection(int32_t dx, int32_t dy);  // 0x4810A0

    int32_t     Input_field_00;       // 0x00
};


// === Batch-generated MISSING class stubs ===

// 1 methods in IDA
class BitArray
{
public:
    virtual ~BitArray() = default;

    virtual void TestBit() {} // IDA: 0x54A950

};
// 1 methods in IDA
class Bitmap
{
public:
    virtual ~Bitmap() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void GetNumberBitmapWOL() {} // IDA: 0x783A90

};
// 1 methods in IDA
class BitmapClass
{
public:
    virtual ~BitmapClass() = default;

    virtual void ProcessFrame() {} // IDA: 0x42DF90

};
// 1 methods in IDA
class ButtonClass
{
public:
    virtual ~ButtonClass() = default;

    virtual void SetState() {} // IDA: 0x69DEA0

};
// 1 methods in IDA
class ButtonOwnerDraw
{
public:
    virtual ~ButtonOwnerDraw() = default;

    virtual void DlgProc() {} // IDA: 0x616980

};
// 1 methods in IDA
class CampaignCoop
{
public:
    virtual ~CampaignCoop() = default;

    virtual void Setup() {} // IDA: 0x5C21D0

};
// 1 methods in IDA
class CampaignMenu
{
public:
    virtual ~CampaignMenu() = default;

    virtual void DlgProc() {} // IDA: 0x52D640

};
// 1 methods in IDA
class CampaignProperties_WorldDominationTour
{
public:
    virtual ~CampaignProperties_WorldDominationTour() = default;

    virtual void QueryInterface() {} // IDA: 0x76C030

};
// 9 methods in IDA
class CampaignScore
{
public:
    virtual ~CampaignScore() = default;

    virtual void DialogProc() {} // IDA: 0x46DFD0
    virtual void ProcessScreen() {} // IDA: 0x46FC00
    virtual void sub_471420() {} // IDA: 0x471420
    virtual void Constructor_CampaignScoreClass() {} // IDA: 0x471500
    virtual void Constructor_CampaignEndScoreClass() {} // IDA: 0x471520
    // +4 more virtual methods

    uint8_t CampaignScore_field_0x04[4];
    uint8_t CampaignScore_field_0x08[4];
    uint8_t CampaignScore_field_0x0C[4];
    uint8_t CampaignScore_field_0x10[4];
    uint8_t CampaignScore_field_0x14[4];
    uint8_t CampaignScore_field_0x18[4];
    uint8_t CampaignScore_field_0x1C[4];
    uint8_t CampaignScore_field_0x20[4];
};
// 2 methods in IDA
class CampaignSelect
{
public:
    virtual ~CampaignSelect() = default;

    virtual void LookupByName() {} // IDA: 0x46CC90
    virtual void DlgProc() {} // IDA: 0x52EC00

    uint8_t CampaignSelect_field_0x04[4];
};
// 1 methods in IDA
class Campaign_WorldDominationTour
{
public:
    virtual ~Campaign_WorldDominationTour() = default;

    virtual void QueryInterface() {} // IDA: 0x765600

};
// 39 methods in IDA
class CheckListClass
{
public:
    virtual ~CheckListClass() = default;  // 0x557E10

    virtual void ?() {} // IDA: 0x488310
    virtual void Clear() {} // IDA: 0x488350
    virtual void ScrollUp() {} // IDA: 0x488360
    virtual void GetSelected() {} // IDA: 0x488380
    virtual void SetItemData() {} // IDA: 0x4883F0
    // +34 more virtual methods

    uint8_t CheckListClass_field_0x04[4];
    uint8_t CheckListClass_field_0x08[4];
    uint8_t CheckListClass_field_0x0C[4];
    uint8_t CheckListClass_field_0x10[4];
    uint8_t CheckListClass_field_0x14[4];
    uint8_t CheckListClass_field_0x18[4];
    uint8_t CheckListClass_field_0x1C[4];
    uint8_t CheckListClass_field_0x20[4];
    uint8_t CheckListClass_field_0x24[4];
    uint8_t CheckListClass_field_0x28[4];
    uint8_t CheckListClass_field_0x2C[4];
    uint8_t CheckListClass_field_0x30[4];
    uint8_t CheckListClass_field_0x34[4];
    uint8_t CheckListClass_field_0x38[4];
    uint8_t CheckListClass_field_0x3C[4];
    uint8_t CheckListClass_field_0x40[4];
    uint8_t CheckListClass_field_0x44[4];
    uint8_t CheckListClass_field_0x48[4];
    uint8_t CheckListClass_field_0x4C[4];
    uint8_t CheckListClass_field_0x50[4];
};
// 1 methods in IDA
class CheckSum
{
public:
    virtual ~CheckSum() = default;

    virtual void AccumulateModulo() {} // IDA: 0x632C40

};
// 1 methods in IDA
class Checkbox
{
public:
    virtual ~Checkbox() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void WndProc() {} // IDA: 0x6163A0

};
// 1 methods in IDA
class Checksum
{
public:
    virtual ~Checksum() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void AddString() {} // IDA: 0x4A1DB0

};
// 1 methods in IDA
class ComboBoxDropDown
{
public:
    virtual ~ComboBoxDropDown() = default;

    virtual void WndProc() {} // IDA: 0x617250

};
// 7 methods in IDA
class ComboBoxOwnerDraw
{
public:
    virtual ~ComboBoxOwnerDraw() = default;

    virtual void GetWidthHeight() {} // IDA: 0x600670
    virtual void MatchDimensions() {} // IDA: 0x600680
    virtual void DlgProc() {} // IDA: 0x610CA0
    virtual void SortItems() {} // IDA: 0x6252F0
    virtual void ComputeMask() {} // IDA: 0x625390
    // +2 more virtual methods

    uint8_t ComboBoxOwnerDraw_field_0x04[4];
    uint8_t ComboBoxOwnerDraw_field_0x08[4];
    uint8_t ComboBoxOwnerDraw_field_0x0C[4];
    uint8_t ComboBoxOwnerDraw_field_0x10[4];
    uint8_t ComboBoxOwnerDraw_field_0x14[4];
    uint8_t ComboBoxOwnerDraw_field_0x18[4];
};
// 4 methods in IDA
class ControlClass
{
public:
    virtual ~ControlClass() = default;

    virtual void Construct() {} // IDA: 0x48E520
    virtual void CtorFromData() {} // IDA: 0x48E570
    virtual void QueryInterface() {} // IDA: 0x48E660
    virtual void Constructor() {} // IDA: 0x4E1340

    uint8_t ControlClass_field_0x04[4];
    uint8_t ControlClass_field_0x08[4];
    uint8_t ControlClass_field_0x0C[4];
};
// 2 methods in IDA
class CreditsPower
{
public:
    virtual ~CreditsPower() = default;

    virtual void sub_4C3D00() {} // IDA: 0x4C3D00
    virtual void Display() {} // IDA: 0x4C3E30

    uint8_t CreditsPower_field_0x04[4];
};
// 4 methods in IDA
class DialogControl
{
public:
    virtual ~DialogControl() = default;

    virtual void Hide() {} // IDA: 0x4E1450
    virtual void Show() {} // IDA: 0x4E1460
    virtual void IsHidden() {} // IDA: 0x4E1470
    virtual void Constructor() {} // IDA: 0x623340

    uint8_t DialogControl_field_0x04[4];
    uint8_t DialogControl_field_0x08[4];
    uint8_t DialogControl_field_0x0C[4];
};
// 2 methods in IDA
class DialogQueue
{
public:
    virtual ~DialogQueue() = default;

    virtual void PushEntry() {} // IDA: 0x5D4E70
    virtual void RemoveEntry() {} // IDA: 0x5D4ED0

    uint8_t DialogQueue_field_0x04[4];
};
// 25 methods in IDA
class DropListClass
{
public:
    virtual ~DropListClass() = default;

    virtual void OnClick() {} // IDA: 0x4B4EE0
    virtual void ?() {} // IDA: 0x4B4F20
    virtual void Draw() {} // IDA: 0x4B4F40
    virtual void HitTest() {} // IDA: 0x4B4F60
    virtual void OnDblClick() {} // IDA: 0x4B4F80
    // +20 more virtual methods

    uint8_t DropListClass_field_0x04[4];
    uint8_t DropListClass_field_0x08[4];
    uint8_t DropListClass_field_0x0C[4];
    uint8_t DropListClass_field_0x10[4];
    uint8_t DropListClass_field_0x14[4];
    uint8_t DropListClass_field_0x18[4];
    uint8_t DropListClass_field_0x1C[4];
    uint8_t DropListClass_field_0x20[4];
    uint8_t DropListClass_field_0x24[4];
    uint8_t DropListClass_field_0x28[4];
    uint8_t DropListClass_field_0x2C[4];
    uint8_t DropListClass_field_0x30[4];
    uint8_t DropListClass_field_0x34[4];
    uint8_t DropListClass_field_0x38[4];
    uint8_t DropListClass_field_0x3C[4];
    uint8_t DropListClass_field_0x40[4];
    uint8_t DropListClass_field_0x44[4];
    uint8_t DropListClass_field_0x48[4];
    uint8_t DropListClass_field_0x4C[4];
    uint8_t DropListClass_field_0x50[4];
};
// 1 methods in IDA
class DropPod
{
public:
    virtual ~DropPod() = default;

    virtual void ProcessLanding() {} // IDA: 0x4CE840

};
// 1 methods in IDA
class EditClass
{
public:
    virtual ~EditClass() = default;

    virtual void QueryInterface() {} // IDA: 0x4B57D0

};
// 2 methods in IDA
class EditControl
{
public:
    virtual ~EditControl() = default;

    virtual void WndProc() {} // IDA: 0x614B30
    virtual void GrowBuffer() {} // IDA: 0x7B72F0

    uint8_t EditControl_field_0x04[4];
};
// 6 methods in IDA
class FontClass
{
public:
    virtual ~FontClass() = default;

    virtual void RenderGlyph() {} // IDA: 0x434120
    virtual void RenderText() {} // IDA: 0x434500
    virtual void GetPixelData() {} // IDA: 0x4349B0
    virtual void LoadFontResources() {} // IDA: 0x5D2E90
    virtual void CreateGlyphColor() {} // IDA: 0x68C3B0
    // +1 more virtual methods

    uint8_t FontClass_field_0x04[4];
    uint8_t FontClass_field_0x08[4];
    uint8_t FontClass_field_0x0C[4];
    uint8_t FontClass_field_0x10[4];
    uint8_t FontClass_field_0x14[4];
};
// 2 methods in IDA
class FontRenderer
{
public:
    virtual ~FontRenderer() = default;

    virtual void InitContext() {} // IDA: 0x4348F0
    virtual void DrawText() {} // IDA: 0x434B90

    uint8_t FontRenderer_field_0x04[4];
};
// 2 methods in IDA
class GadgetGrid
{
public:
    virtual ~GadgetGrid() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void InsertItem() {} // IDA: 0x4134A0
    virtual void RemoveItem() {} // IDA: 0x4135D0

    uint8_t GadgetGrid_field_0x04[4];
};
// 5 methods in IDA
class InputManager
{
public:
    virtual ~InputManager() = default;

    virtual void sub_4E15A0() {} // IDA: 0x4E15A0
    virtual void ProcessEvents() {} // IDA: 0x4E1640
    virtual void sub_54F2F0() {} // IDA: 0x54F2F0
    virtual void PushInputEvent() {} // IDA: 0x54F670
    virtual void WndProc() {} // IDA: 0x54F790

    uint8_t InputManager_field_0x04[4];
    uint8_t InputManager_field_0x08[4];
    uint8_t InputManager_field_0x0C[4];
    uint8_t InputManager_field_0x10[4];
};
// 5 methods in IDA
class InputManager_ProcessEvents
{
public:
    virtual ~InputManager_ProcessEvents() = default;

    virtual void AddRef() {} // IDA: 0x40D230
    virtual void Release() {} // IDA: 0x40D240
    virtual void StubReturnFalse() {} // IDA: 0x4AEBD0
    virtual void Stub() {} // IDA: 0x4AEBE0
    virtual void Vtable() {} // IDA: 0x4F4320

    uint8_t InputManager_ProcessEvents_field_0x04[4];
    uint8_t InputManager_ProcessEvents_field_0x08[4];
    uint8_t InputManager_ProcessEvents_field_0x0C[4];
    uint8_t InputManager_ProcessEvents_field_0x10[4];
};
// 1 methods in IDA
class Keyboard
{
public:
    virtual ~Keyboard() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void MapKey() {} // IDA: 0x54F450

};
// 1 methods in IDA
class List
{
public:
    virtual ~List() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void FindByValue() {} // IDA: 0x5943E0

};
// 8 methods in IDA
class ListBox
{
public:
    virtual ~ListBox() = default;

    virtual void Constructor() {} // IDA: 0x5C1030
    virtual void FillEntries() {} // IDA: 0x5D6450
    virtual void Refresh() {} // IDA: 0x5D64C0
    virtual void FillPlayers() {} // IDA: 0x5D6540
    virtual void AddEntries() {} // IDA: 0x5D6690
    // +3 more virtual methods

    uint8_t ListBox_field_0x04[4];
    uint8_t ListBox_field_0x08[4];
    uint8_t ListBox_field_0x0C[4];
    uint8_t ListBox_field_0x10[4];
    uint8_t ListBox_field_0x14[4];
    uint8_t ListBox_field_0x18[4];
    uint8_t ListBox_field_0x1C[4];
};
// 8 methods in IDA
class ListClass
{
public:
    virtual ~ListClass() = default;  // 0x557600

    virtual void Constructor() {} // IDA: 0x4E2500
    virtual void Construct() {} // IDA: 0x557230
    virtual void Destruct() {} // IDA: 0x557600
    virtual void AddItem() {} // IDA: 0x5576A0
    virtual void RemoveItem() {} // IDA: 0x557730
    // +3 more virtual methods

    uint8_t ListClass_field_0x04[4];
    uint8_t ListClass_field_0x08[4];
    uint8_t ListClass_field_0x0C[4];
    uint8_t ListClass_field_0x10[4];
    uint8_t ListClass_field_0x14[4];
    uint8_t ListClass_field_0x18[4];
    uint8_t ListClass_field_0x1C[4];
};
// 1 methods in IDA
class ListNode
{
public:
    virtual ~ListNode() = default;

    virtual void Alloc() {} // IDA: 0x5A9A20

};
// 1 methods in IDA
class Main
{
public:
    virtual ~Main() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void CreateDialog() {} // IDA: 0x4E1D00

};
// 1 methods in IDA
class ProgressAnim
{
public:
    virtual ~ProgressAnim() = default;

    virtual void Init() {} // IDA: 0x642A60

};
// 1 methods in IDA
class Slider
{
public:
    virtual ~Slider() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void CalcPosition() {} // IDA: 0x412A40

};
// 13 methods in IDA
class SliderClass
{
public:
    virtual ~SliderClass() = default; // 0x6B1D00

    virtual void ?() {} // IDA: 0x558120
    virtual void QueryInterface() {} // IDA: 0x558180
    virtual void Constructor() {} // IDA: 0x6B1B20
    virtual void Destructor() {} // IDA: 0x6B1D00
    virtual void GetValue() {} // IDA: 0x6B1D40
    // +8 more virtual methods

    uint8_t SliderClass_field_0x04[4];
    uint8_t SliderClass_field_0x08[4];
    uint8_t SliderClass_field_0x0C[4];
    uint8_t SliderClass_field_0x10[4];
    uint8_t SliderClass_field_0x14[4];
    uint8_t SliderClass_field_0x18[4];
    uint8_t SliderClass_field_0x1C[4];
    uint8_t SliderClass_field_0x20[4];
    uint8_t SliderClass_field_0x24[4];
    uint8_t SliderClass_field_0x28[4];
    uint8_t SliderClass_field_0x2C[4];
    uint8_t SliderClass_field_0x30[4];
};
// 1 methods in IDA
class TabCameoListClass
{
public:
    virtual ~TabCameoListClass() = default;

    virtual void AddCameo_ReplaceItAll() {} // IDA: 0x6A8710

};
// 2 methods in IDA
class TabControl
{
public:
    virtual ~TabControl() = default;

    virtual void WndProc() {} // IDA: 0x612B70
    virtual void DlgProc() {} // IDA: 0x61D950

    uint8_t TabControl_field_0x04[4];
};
// 14 methods in IDA
class ToolTipClass
{
public:
    virtual ~ToolTipClass() = default;  // 0x724C30

    virtual void updateString() {} // IDA: 0x7240B0
    virtual void initString() {} // IDA: 0x724AD0
    virtual void Destructor() {} // IDA: 0x724C10
    virtual void ddtor() {} // IDA: 0x724C30
    virtual void write() {} // IDA: 0x724C60
    // +9 more virtual methods

    uint8_t ToolTipClass_field_0x04[4];
    uint8_t ToolTipClass_field_0x08[4];
    uint8_t ToolTipClass_field_0x0C[4];
    uint8_t ToolTipClass_field_0x10[4];
    uint8_t ToolTipClass_field_0x14[4];
    uint8_t ToolTipClass_field_0x18[4];
    uint8_t ToolTipClass_field_0x1C[4];
    uint8_t ToolTipClass_field_0x20[4];
    uint8_t ToolTipClass_field_0x24[4];
    uint8_t ToolTipClass_field_0x28[4];
    uint8_t ToolTipClass_field_0x2C[4];
    uint8_t ToolTipClass_field_0x30[4];
    uint8_t ToolTipClass_field_0x34[4];
};
// 1 methods in IDA
class Tooltip
{
public:
    virtual ~Tooltip() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void Enable() {} // IDA: 0x7241A0

};
// 1 methods in IDA
class TooltipClass
{
public:
    virtual ~TooltipClass() = default;  // IDA: 0x724C30

    virtual void GetText() {} // IDA: 0x7248C0

};

} // namespace gamemd
