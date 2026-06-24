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
    // design: static function, no direct binary match in IDA
    static void SetControlText(HWND hDlg, int32_t ctrlID, const wchar_t* text);

    int32_t     Control_field_00;       // 0x00
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* CreateControlDialog();  // 0x60CF00
    // --- gap2 auto-generated stub declarations (END) ---
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
    // design: static function, no direct binary match in IDA
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
    // wrapper: delegates to Font::GetGlyphDataForChar at 0x4346C0
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
    static void LoadINI();  // 0x533D20
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
    virtual ~LinkClass();

    // IDA 0x48B2A0 area
    void Destroy();  // 0x4E1480
    void Destru_vt00();  // 0x4E1AD0
    void Destruct();  // 0x5565A0

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
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BitArray() = default;

    virtual void TestBit() {} // 0x54A950

};
// 1 methods in IDA
class Bitmap
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Bitmap() = default;

    virtual void GetNumberBitmapWOL() {} // 0x783A90

};
// 1 methods in IDA
class BitmapClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BitmapClass() = default;

    virtual void ProcessFrame() {} // 0x42DF90

};
// 1 methods in IDA
class ButtonClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ButtonClass() = default;

    virtual void SetState() {} // 0x69DEA0

};
// 1 methods in IDA
class ButtonOwnerDraw
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ButtonOwnerDraw() = default;

    virtual void DlgProc() {} // 0x616980

};
// 1 methods in IDA
class CampaignCoop
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CampaignCoop() = default;

    virtual void Setup() {} // 0x5c21d0 -- CampaignCoop::Setup
};
// 1 methods in IDA
class CampaignMenu
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CampaignMenu() = default;

    virtual void DlgProc() {} // 0x52D640

};
// 1 methods in IDA
class CampaignProperties_WorldDominationTour
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CampaignProperties_WorldDominationTour() = default;

    virtual void QueryInterface() {} // 0x76C030

};
// 9 methods in IDA
class CampaignScore
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CampaignScore() = default;

    virtual void DialogProc() {} // 0x46DFD0
    virtual void ProcessScreen() {} // 0x46FC00
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
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int LookupDialogHash();  // 0x60CBA0
    int FindDialogTemplate();  // 0x60CC00
    int LoadCampaignScoreAssetsGame();  // 0x72D300
    void* LoadScreenAssets();  // 0x72D460
    // --- gap2 auto-generated stub declarations (END) ---
};
// 2 methods in IDA
class CampaignSelect
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CampaignSelect() = default;

    virtual void LookupByName() {} // 0x46CC90
    virtual void DlgProc() {} // 0x52EC00

    uint8_t CampaignSelect_field_0x04[4];
};
// 1 methods in IDA
class Campaign_WorldDominationTour
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~Campaign_WorldDominationTour() = default;

    virtual void QueryInterface() {} // 0x765600

};
// 39 methods in IDA
class CheckListClass
{
public:
    virtual ~CheckListClass() = default;  // 0x557E10

    virtual void vt_method_488310() {} // 0x488310
    virtual void Clear() {} // 0x488350
    virtual void ScrollUp() {} // 0x488360
    virtual void GetSelected() {} // 0x488380
    virtual void SetItemData() {} // 0x4883F0
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
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int GetItem(int a1, void* a2, int a3);  // 0x4884A0
    int SelectItem(int a1);  // 0x4886C0
    int SetFocus(int a1);  // 0x4886D0
    void* QueryInterface(int a1);  // 0x4886E0
    void initList();  // 0x556EB0
    int addItem(int a1);  // 0x556EE0
    int removeItem(int a1, void* a2);  // 0x557090
    int checkItem(void* a1);  // 0x557140
    void* toggleItem(int a1);  // 0x5571C0
    int RemoveItem(int a1, int a2);  // 0x557570
    int SetItemState(int a1);  // 0x557A20
    int OnKeyUp(int a1);  // 0x557A70
    int GetItemCount();  // 0x557B00
    int OnKeyDown(int a1);  // 0x557B70
    int GetItemData();  // 0x557CB0
    int KillFocus(int a1);  // 0x557D10
    void* HitTest(int a1);  // 0x557E60
    int Draw(int a1);  // 0x557EB0
    int OnDblClick();  // 0x557F00
    int ScrollDown(int a1);  // 0x557FB0
    void AddItem();  // 0x557FD0
    void* drawList(int a1);  // 0x558130
    void scrollList();  // 0x5581E0
    int selectItem(int a1);  // 0x558210
    int clearList(int a1, void* a2);  // 0x5583C0
    int getItemCount(void* a1);  // 0x558470
    // --- gap2 auto-generated stub declarations (END) ---
};
// 1 methods in IDA
class CheckSum
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CheckSum() = default;

    virtual void AccumulateModulo() {} // 0x632C40

};
// 1 methods in IDA
class Checkbox
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Checkbox() = default;

    virtual void WndProc() {} // 0x6163A0

};
// 1 methods in IDA
class Checksum
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Checksum() = default;

    virtual void AddString() {} // 0x4A1DB0

};
// 1 methods in IDA
class ComboBoxDropDown
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ComboBoxDropDown() = default;

    virtual void WndProc() {} // 0x617250

};
// 7 methods in IDA
class ComboBoxOwnerDraw
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ComboBoxOwnerDraw() = default;

    virtual void GetWidthHeight() {} // 0x600670
    virtual void MatchDimensions() {} // 0x600680
    virtual void DlgProc() {} // 0x610CA0
    virtual void SortItems() {} // 0x6252F0
    virtual void ComputeMask() {} // 0x625390
    // +2 more virtual methods

    uint8_t ComboBoxOwnerDraw_field_0x04[4];
    uint8_t ComboBoxOwnerDraw_field_0x08[4];
    uint8_t ComboBoxOwnerDraw_field_0x0C[4];
    uint8_t ComboBoxOwnerDraw_field_0x10[4];
    uint8_t ComboBoxOwnerDraw_field_0x14[4];
    uint8_t ComboBoxOwnerDraw_field_0x18[4];
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void SetCapacity();  // 0x6258E0
    int GrowBuffer();  // 0x625990
    // --- gap2 auto-generated stub declarations (END) ---
};
// 4 methods in IDA
class ControlClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ControlClass() = default;

    virtual void Construct() {} // 0x48E520
    virtual void CtorFromData() {} // 0x48E570
    virtual void QueryInterface() {} // 0x48E660
    virtual void Constructor() {} // 0x4E1340

    uint8_t ControlClass_field_0x04[4];
    uint8_t ControlClass_field_0x08[4];
    uint8_t ControlClass_field_0x0C[4];
};
// 2 methods in IDA
class CreditsPower
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CreditsPower() = default;

    virtual void sub_4C3D00() {} // 0x4C3D00
    virtual void Display() {} // 0x4C3E30

    uint8_t CreditsPower_field_0x04[4];
};
// 4 methods in IDA
class DialogControl
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DialogControl() = default;

    virtual void Hide() {} // 0x4E1450
    virtual void Show() {} // 0x4E1460
    virtual void IsHidden() {} // 0x4E1470
    virtual void Constructor() {} // 0x623340

    uint8_t DialogControl_field_0x04[4];
    uint8_t DialogControl_field_0x08[4];
    uint8_t DialogControl_field_0x0C[4];
};
// 2 methods in IDA
class DialogQueue
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DialogQueue() = default;

    virtual void PushEntry() {} // 0x5D4E70
    virtual void RemoveEntry() {} // 0x5D4ED0

    uint8_t DialogQueue_field_0x04[4];
};
// 25 methods in IDA
class DropListClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DropListClass() = default;

    virtual void OnClick() {} // 0x4B4EE0
    virtual void vt_method_4B4F20() {} // 0x4B4F20
    virtual void Draw() {} // 0x4B4F40
    virtual void HitTest() {} // 0x4B4F60
    virtual void OnDblClick() {} // 0x4B4F80
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
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int SetFocus(void* a1);  // 0x4B4FB0
    int KillFocus();  // 0x4B4FF0
    int GetItemData();  // 0x4B5010
    int AddItem();  // 0x4B50A0
    int Open(int a1, void* a2, void* a3);  // 0x4B50C0
    int RemoveItem(int a1, int a2);  // 0x4B54E0
    void OnKeyDown(void* a1);  // 0x4B5530
    int ScrollUp();  // 0x4B55B0
    int ScrollDown(int a1);  // 0x4B55D0
    void* QueryInterface(int a1);  // 0x4B55F0
    int Constructor();  // 0x4C30B0
    int SelectItem(void* a1, int a2);  // 0x4C30E0
    int GetItem(int a1);  // 0x4C3110
    int GetCount(int a1, void* a2, int a3);  // 0x4C3190
    int GetSelected();  // 0x4C32A0
    void* GetItemText(void* a1);  // 0x4C32E0
    int SetItemText(int a1);  // 0x4C3420
    int Close();  // 0x4C3570
    // --- gap2 auto-generated stub declarations (END) ---
};
// 1 methods in IDA
class DropPod
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DropPod() = default;

    virtual void ProcessLanding() {} // 0x4CE840

};
// 1 methods in IDA
class EditClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~EditClass() = default;

    virtual void QueryInterface() {} // 0x4B57D0

};
// 2 methods in IDA
class EditControl
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~EditControl() = default;

    virtual void WndProc() {} // 0x614B30
    virtual void GrowBuffer() {} // 0x7B72F0

    uint8_t EditControl_field_0x04[4];
};
// 6 methods in IDA
class FontClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FontClass() = default;

    virtual void RenderGlyph() {} // 0x434120
    virtual void RenderText() {} // 0x434500
    virtual void GetPixelData() {} // 0x4349B0
    virtual void LoadFontResources() {} // 0x5D2E90
    virtual void CreateGlyphColor() {} // 0x68C3B0
    // +1 more virtual methods

    uint8_t FontClass_field_0x04[4];
    uint8_t FontClass_field_0x08[4];
    uint8_t FontClass_field_0x0C[4];
    uint8_t FontClass_field_0x10[4];
    uint8_t FontClass_field_0x14[4];
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* InitMetrics(void* a1, int a2, int a3, int a4, int a5, int a6);  // 0x68C710
    // --- gap2 auto-generated stub declarations (END) ---
};
// 2 methods in IDA
class FontRenderer
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FontRenderer() = default;

    virtual void InitContext() {} // 0x4348F0
    virtual void DrawText() {} // 0x434B90

    uint8_t FontRenderer_field_0x04[4];
};
// 2 methods in IDA
class GadgetGrid
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~GadgetGrid() = default;

    virtual void InsertItem() {} // 0x4134A0
    virtual void RemoveItem() {} // 0x4135D0

    uint8_t GadgetGrid_field_0x04[4];
};
// 5 methods in IDA
class InputManager
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~InputManager() = default;

    virtual void sub_4E15A0() {} // 0x4E15A0
    virtual void ProcessEvents() {} // 0x4E1640
    virtual void sub_54F2F0() {} // 0x54F2F0
    virtual void PushInputEvent() {} // 0x54F670
    virtual void WndProc() {} // 0x54F790

    uint8_t InputManager_field_0x04[4];
    uint8_t InputManager_field_0x08[4];
    uint8_t InputManager_field_0x0C[4];
    uint8_t InputManager_field_0x10[4];
};
// 5 methods in IDA
class InputManager_ProcessEvents
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~InputManager_ProcessEvents() = default;

    virtual void AddRef() {} // 0x40D230
    virtual void Release() {} // 0x40D240
    virtual void StubReturnFalse() {} // 0x4AEBD0
    virtual void Stub() {} // 0x4AEBE0
    virtual void Vtable() {} // 0x4F4320

    uint8_t InputManager_ProcessEvents_field_0x04[4];
    uint8_t InputManager_ProcessEvents_field_0x08[4];
    uint8_t InputManager_ProcessEvents_field_0x0C[4];
    uint8_t InputManager_ProcessEvents_field_0x10[4];
};
// 1 methods in IDA
class Keyboard
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Keyboard() = default;

    virtual void MapKey() {} // 0x54F450

};
// 1 methods in IDA
class List
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~List() = default;

    virtual void FindByValue() {} // 0x5943E0

};
// 8 methods in IDA
class ListBox
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ListBox() = default;

    virtual void Constructor() {} // 0x5C1030
    virtual void FillEntries() {} // 0x5D6450
    virtual void Refresh() {} // 0x5D64C0
    virtual void FillPlayers() {} // 0x5D6540
    virtual void AddEntries() {} // 0x5D6690
    // +3 more virtual methods

    uint8_t ListBox_field_0x04[4];
    uint8_t ListBox_field_0x08[4];
    uint8_t ListBox_field_0x0C[4];
    uint8_t ListBox_field_0x10[4];
    uint8_t ListBox_field_0x14[4];
    uint8_t ListBox_field_0x18[4];
    uint8_t ListBox_field_0x1C[4];
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Clear();  // 0x623840
    int SetCustomEntry();  // 0x6969C0
    // --- gap2 auto-generated stub declarations (END) ---
};
// 8 methods in IDA
class ListClass
{
public:
    virtual ~ListClass() = default;  // 0x557600

    virtual void Constructor() {} // 0x4E2500
    virtual void Construct() {} // 0x557230
    virtual void Destruct() {} // 0x557600
    virtual void AddItem() {} // 0x5576A0
    virtual void RemoveItem() {} // 0x557730
    // +3 more virtual methods

    uint8_t ListClass_field_0x04[4];
    uint8_t ListClass_field_0x08[4];
    uint8_t ListClass_field_0x0C[4];
    uint8_t ListClass_field_0x10[4];
    uint8_t ListClass_field_0x14[4];
    uint8_t ListClass_field_0x18[4];
    uint8_t ListClass_field_0x1C[4];
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Destru_vt43(int a1);  // 0x557800
    void* Destru_vt50(int a1, int a2, int a3, int a4, int a5);  // 0x557D20
    void* Destru_vt00(int a1);  // 0x558060
    // --- gap2 auto-generated stub declarations (END) ---
};
// 1 methods in IDA
class ListNode
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ListNode() = default;

    virtual void Alloc() {} // 0x5A9A20

};
// 1 methods in IDA
class Main
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Main() = default;

    virtual void CreateDialog() {} // 0x4E1D00

};
// 1 methods in IDA
class ProgressAnim
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ProgressAnim() = default;

    virtual void Init() {} // 0x642A60

};
// 1 methods in IDA
class Slider
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Slider() = default;

    virtual void CalcPosition() {} // 0x412A40

};
// 13 methods in IDA
class SliderClass
{
public:
    virtual ~SliderClass() = default; // 0x6B1D00

    virtual void vt_method_558120() {} // 0x558120
    virtual void QueryInterface() {} // 0x558180
    virtual void Constructor() {} // 0x6B1B20
    virtual void Destructor() {} // 0x6B1D00
    virtual void GetValue() {} // 0x6B1D40
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
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int OnClick(int a1);  // 0x6B1DC0
    int Draw(int a1);  // 0x6B1E50
    int SetValue(int a1, void* a2, int a3);  // 0x6B1F50
    int OnTrack(int a1);  // 0x6B2000
    int OnRelease(int a1);  // 0x6B2040
    int HitTest();  // 0x6B2070
    int GetRange(int a1);  // 0x6B20F0
    int SetRange(int a1, int a2, int a3);  // 0x6B2160
    // --- gap2 auto-generated stub declarations (END) ---
};
// 1 methods in IDA
class TabCameoListClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TabCameoListClass() = default;

    virtual void AddCameo_ReplaceItAll() {} // 0x6A8710

};
// 2 methods in IDA
class TabControl
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TabControl() = default;

    virtual void WndProc() {} // 0x612B70
    virtual void DlgProc() {} // 0x61D950

    uint8_t TabControl_field_0x04[4];
};
// 14 methods in IDA
class ToolTipClass
{
public:
    virtual ~ToolTipClass() = default;  // 0x724C30

    virtual void updateString() {} // 0x7240B0
    virtual void initString() {} // 0x724AD0
    virtual void Destructor() {} // 0x724C10
    virtual void ddtor() {} // 0x724C30
    virtual void write() {} // 0x724C60
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
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int seek(int a1);  // 0x724C80
    int addRef(int a1);  // 0x724C90
    int readString(int a1, void* a2);  // 0x724CD0
    void writeString();  // 0x724D80
    int seekString(void* a1);  // 0x724DB0
    int setString(int a1);  // 0x724DF0
    int release(int a1, void* a2);  // 0x724E10
    int read(void* a1);  // 0x724EC0
    void* compareString(int a1);  // 0x724EF0
    // --- gap2 auto-generated stub declarations (END) ---
};
// 1 methods in IDA
class Tooltip
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Tooltip() = default;

    virtual void Enable() {}

    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int Enable(int a1);  // 0x7241a0 -- Tooltip::Enable
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class TooltipClass
{
public:
    virtual ~TooltipClass() = default;  // 0x724C30

    virtual void GetText() {} // 0x7248C0

};

} // namespace gamemd
