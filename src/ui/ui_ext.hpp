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


// === Batch-generated MISSING class stubs ===

// 1 methods in IDA
class BitArray
{
public:
    virtual ~BitArray() = default;

    virtual void TestBit() {} // 0x54a950

};
// 1 methods in IDA
class Bitmap
{
public:
    virtual ~Bitmap() = default;

    virtual void GetNumberBitmapWOL() {} // 0x783a90

};
// 1 methods in IDA
class BitmapClass
{
public:
    virtual ~BitmapClass() = default;

    virtual void ProcessFrame() {} // 0x42df90

};
// 1 methods in IDA
class ButtonClass
{
public:
    virtual ~ButtonClass() = default;

    virtual void SetState() {} // 0x69dea0

};
// 1 methods in IDA
class ButtonOwnerDraw
{
public:
    virtual ~ButtonOwnerDraw() = default;

    virtual void DlgProc() {} // 0x616980

};
// 1 methods in IDA
class CampaignCoop
{
public:
    virtual ~CampaignCoop() = default;

    virtual void Setup() {} // 0x5c21d0

};
// 1 methods in IDA
class CampaignMenu
{
public:
    virtual ~CampaignMenu() = default;

    virtual void DlgProc() {} // 0x52d640

};
// 1 methods in IDA
class CampaignProperties_WorldDominationTour
{
public:
    virtual ~CampaignProperties_WorldDominationTour() = default;

    virtual void QueryInterface() {} // 0x76c030

};
// 9 methods in IDA
class CampaignScore
{
public:
    virtual ~CampaignScore() = default;

    virtual void DialogProc() {} // 0x46dfd0
    virtual void ProcessScreen() {} // 0x46fc00
    virtual void sub_471420() {} // 0x471420
    virtual void Constructor_CampaignScoreClass() {} // 0x471500
    virtual void Constructor_CampaignEndScoreClass() {} // 0x471520
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

    virtual void LookupByName() {} // 0x46cc90
    virtual void DlgProc() {} // 0x52ec00

    uint8_t CampaignSelect_field_0x04[4];
};
// 1 methods in IDA
class Campaign_WorldDominationTour
{
public:
    virtual ~Campaign_WorldDominationTour() = default;

    virtual void QueryInterface() {} // 0x765600

};
// 39 methods in IDA
class CheckListClass
{
public:
    virtual ~CheckListClass() = default;

    virtual void ?() {} // 0x488310
    virtual void Clear() {} // 0x488350
    virtual void ScrollUp() {} // 0x488360
    virtual void GetSelected() {} // 0x488380
    virtual void SetItemData() {} // 0x4883f0
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

    virtual void AccumulateModulo() {} // 0x632c40

};
// 1 methods in IDA
class Checkbox
{
public:
    virtual ~Checkbox() = default;

    virtual void WndProc() {} // 0x6163a0

};
// 1 methods in IDA
class Checksum
{
public:
    virtual ~Checksum() = default;

    virtual void AddString() {} // 0x4a1db0

};
// 1 methods in IDA
class ComboBoxDropDown
{
public:
    virtual ~ComboBoxDropDown() = default;

    virtual void WndProc() {} // 0x617250

};
// 7 methods in IDA
class ComboBoxOwnerDraw
{
public:
    virtual ~ComboBoxOwnerDraw() = default;

    virtual void GetWidthHeight() {} // 0x600670
    virtual void MatchDimensions() {} // 0x600680
    virtual void DlgProc() {} // 0x610ca0
    virtual void SortItems() {} // 0x6252f0
    virtual void ComputeMask() {} // 0x625390
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

    virtual void Construct() {} // 0x48e520
    virtual void CtorFromData() {} // 0x48e570
    virtual void QueryInterface() {} // 0x48e660
    virtual void Constructor() {} // 0x4e1340

    uint8_t ControlClass_field_0x04[4];
    uint8_t ControlClass_field_0x08[4];
    uint8_t ControlClass_field_0x0C[4];
};
// 2 methods in IDA
class CreditsPower
{
public:
    virtual ~CreditsPower() = default;

    virtual void sub_4C3D00() {} // 0x4c3d00
    virtual void Display() {} // 0x4c3e30

    uint8_t CreditsPower_field_0x04[4];
};
// 4 methods in IDA
class DialogControl
{
public:
    virtual ~DialogControl() = default;

    virtual void Hide() {} // 0x4e1450
    virtual void Show() {} // 0x4e1460
    virtual void IsHidden() {} // 0x4e1470
    virtual void Constructor() {} // 0x623340

    uint8_t DialogControl_field_0x04[4];
    uint8_t DialogControl_field_0x08[4];
    uint8_t DialogControl_field_0x0C[4];
};
// 2 methods in IDA
class DialogQueue
{
public:
    virtual ~DialogQueue() = default;

    virtual void PushEntry() {} // 0x5d4e70
    virtual void RemoveEntry() {} // 0x5d4ed0

    uint8_t DialogQueue_field_0x04[4];
};
// 25 methods in IDA
class DropListClass
{
public:
    virtual ~DropListClass() = default;

    virtual void OnClick() {} // 0x4b4ee0
    virtual void ?() {} // 0x4b4f20
    virtual void Draw() {} // 0x4b4f40
    virtual void HitTest() {} // 0x4b4f60
    virtual void OnDblClick() {} // 0x4b4f80
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

    virtual void ProcessLanding() {} // 0x4ce840

};
// 1 methods in IDA
class EditClass
{
public:
    virtual ~EditClass() = default;

    virtual void QueryInterface() {} // 0x4b57d0

};
// 2 methods in IDA
class EditControl
{
public:
    virtual ~EditControl() = default;

    virtual void WndProc() {} // 0x614b30
    virtual void GrowBuffer() {} // 0x7b72f0

    uint8_t EditControl_field_0x04[4];
};
// 6 methods in IDA
class FontClass
{
public:
    virtual ~FontClass() = default;

    virtual void RenderGlyph() {} // 0x434120
    virtual void RenderText() {} // 0x434500
    virtual void GetPixelData() {} // 0x4349b0
    virtual void LoadFontResources() {} // 0x5d2e90
    virtual void CreateGlyphColor() {} // 0x68c3b0
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

    virtual void InitContext() {} // 0x4348f0
    virtual void DrawText() {} // 0x434b90

    uint8_t FontRenderer_field_0x04[4];
};
// 2 methods in IDA
class GadgetGrid
{
public:
    virtual ~GadgetGrid() = default;

    virtual void InsertItem() {} // 0x4134a0
    virtual void RemoveItem() {} // 0x4135d0

    uint8_t GadgetGrid_field_0x04[4];
};
// 5 methods in IDA
class InputManager
{
public:
    virtual ~InputManager() = default;

    virtual void sub_4E15A0() {} // 0x4e15a0
    virtual void ProcessEvents() {} // 0x4e1640
    virtual void sub_54F2F0() {} // 0x54f2f0
    virtual void PushInputEvent() {} // 0x54f670
    virtual void WndProc() {} // 0x54f790

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

    virtual void AddRef() {} // 0x40d230
    virtual void Release() {} // 0x40d240
    virtual void StubReturnFalse() {} // 0x4aebd0
    virtual void Stub() {} // 0x4aebe0
    virtual void Vtable() {} // 0x4f4320

    uint8_t InputManager_ProcessEvents_field_0x04[4];
    uint8_t InputManager_ProcessEvents_field_0x08[4];
    uint8_t InputManager_ProcessEvents_field_0x0C[4];
    uint8_t InputManager_ProcessEvents_field_0x10[4];
};
// 1 methods in IDA
class Keyboard
{
public:
    virtual ~Keyboard() = default;

    virtual void MapKey() {} // 0x54f450

};
// 1 methods in IDA
class List
{
public:
    virtual ~List() = default;

    virtual void FindByValue() {} // 0x5943e0

};
// 8 methods in IDA
class ListBox
{
public:
    virtual ~ListBox() = default;

    virtual void Constructor() {} // 0x5c1030
    virtual void FillEntries() {} // 0x5d6450
    virtual void Refresh() {} // 0x5d64c0
    virtual void FillPlayers() {} // 0x5d6540
    virtual void AddEntries() {} // 0x5d6690
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
    virtual ~ListClass() = default;

    virtual void Constructor() {} // 0x4e2500
    virtual void Construct() {} // 0x557230
    virtual void Destruct() {} // 0x557600
    virtual void AddItem() {} // 0x5576a0
    virtual void RemoveItem() {} // 0x557730
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

    virtual void Alloc() {} // 0x5a9a20

};
// 1 methods in IDA
class Main
{
public:
    virtual ~Main() = default;

    virtual void CreateDialog() {} // 0x4e1d00

};
// 1 methods in IDA
class ProgressAnim
{
public:
    virtual ~ProgressAnim() = default;

    virtual void Init() {} // 0x642a60

};
// 1 methods in IDA
class Slider
{
public:
    virtual ~Slider() = default;

    virtual void CalcPosition() {} // 0x412a40

};
// 13 methods in IDA
class SliderClass
{
public:
    virtual ~SliderClass() = default;

    virtual void ?() {} // 0x558120
    virtual void QueryInterface() {} // 0x558180
    virtual void Constructor() {} // 0x6b1b20
    virtual void Destructor() {} // 0x6b1d00
    virtual void GetValue() {} // 0x6b1d40
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

    virtual void AddCameo_ReplaceItAll() {} // 0x6a8710

};
// 2 methods in IDA
class TabControl
{
public:
    virtual ~TabControl() = default;

    virtual void WndProc() {} // 0x612b70
    virtual void DlgProc() {} // 0x61d950

    uint8_t TabControl_field_0x04[4];
};
// 14 methods in IDA
class ToolTipClass
{
public:
    virtual ~ToolTipClass() = default;

    virtual void updateString() {} // 0x7240b0
    virtual void initString() {} // 0x724ad0
    virtual void Destructor() {} // 0x724c10
    virtual void ddtor() {} // 0x724c30
    virtual void write() {} // 0x724c60
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
    virtual ~Tooltip() = default;

    virtual void Enable() {} // 0x7241a0

};
// 1 methods in IDA
class TooltipClass
{
public:
    virtual ~TooltipClass() = default;

    virtual void GetText() {} // 0x7248c0

};

} // namespace gamemd