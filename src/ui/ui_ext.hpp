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
    unsigned int * CreateControlDialog();  // 0x60CF00 (G42.35 def truth)
    // --- gap2 auto-generated stub declarations (END) ---
};

// ============================================================================
// Text — text rendering / layout (4 methods)
// IDA: Layout, MeasureWidth, sub_5BD3D0
// ============================================================================
#ifndef GAMEMD_E4_Text  // G42.33 b3: e4 flat carrier wins in opt-in TUs
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
#endif  // GAMEMD_E4_Text

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
// CSP: BitTextClass matched via T1
class BitTextClass
{
public:
    // IDA 0x434AD0
    void ParseFontData(void* mem);  // 0x433880
    // IDA 0x434AD0 area
     void* LoadFont(void* mem);  // 0x434AD0

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
     int Reset();  // 0x4C6140

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
     void Init();  // 0x4A3C00
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
     void Init();  // 0x470D30

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
char * GetField(int a2);  // 0x00656580 g57w12-r raw-sync (def-form)
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
     void ReleaseBuffer();  // 0x538B80

    static int32_t  s_KeyMap[256];  // 0x00


    void * ptr_8;  // 0xC [X55 W3 supply (render vocab)]
    void * ptr_4;  // 0x8 [X55 W3 supply (render vocab)]
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
// CSP: LinkClass matched via T1
class LinkClass
{
public:
    LinkClass() = default;
    virtual ~LinkClass();

    // IDA 0x48B2A0 area
    int Destroy();  // 0x4E1480
    static int Destroy(void *aP0);  // 0x4E1480 G42.35 static-form sync (ui/supplied site 0x4B4FAD)
    void Destru_vt00();  // 0x4E1AD0
    int Destruct();  // 0x5565A0
    static int Destruct(void *aP0);  // 0x5565A0 G42.35 static-form sync (ui/supplied site 0x4E1AAC)
    // G42.35: IDA til "LinkedList::" 三件实为 LinkClass vt 槽 (disasm truth: 0x5566A0 vt+12 / 0x556700 vt+16 / 0x5566D0 vt+20)
    static int InsertAfter(void *aP0, int aP1);  // 0x5566A0 vt+12
    static int Append(void *aP0, int aP1);       // 0x556700 vt+16
    static unsigned int * Attach(void *aP0, int aP1);  // 0x5566D0 vt+20

    LinkClass*  m_Next;         // 0x04 (after ptr_0)
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
     int32_t OffsetToDirection(int32_t dx, int32_t dy);  // 0x4810A0

    int32_t     Input_field_00;       // 0x00
};


// === Batch-generated MISSING class stubs ===

// 1 methods in IDA
// CSP: BitArray matched via T1
class BitArray
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BitArray() = default;

    virtual void TestBit(); // 0x54A950

};
// 1 methods in IDA
// CSP: Bitmap matched via T1
class Bitmap
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Bitmap() = default;

    virtual int GetNumberBitmapWOL(); // 0x783A90 (G42.35 def truth)

};
// 1 methods in IDA
#ifndef GAMEMD_E4_BitmapClass  // G42.33 b3: e4 flat carrier wins in opt-in TUs
class BitmapClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BitmapClass() = default;

virtual size_t ProcessFrame(char *,int,int,int,int);  // 0x42DF90


    unsigned char Base64Straw_14[4];  /* Base64Straw */  // X10 supply (member_lookup)
    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_E4_BitmapClass
// 1 methods in IDA
// CSP: ButtonClass matched via T1
class ButtonClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ButtonClass() = default;

    virtual char SetState(char a2); // 0x69DEA0 (G42.35 def truth)


    unsigned int u32_5C;  // G42.39 data supply
};
// 1 methods in IDA
class ButtonOwnerDraw
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ButtonOwnerDraw() = default;

    virtual void DlgProc(); // 0x616980

};
// 1 methods in IDA
class CampaignCoop
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CampaignCoop() = default;

    virtual void Setup(); // 0x5c21d0 -- CampaignCoop::Setup
};
// 1 methods in IDA
class CampaignMenu
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CampaignMenu() = default;

    virtual void DlgProc(); // 0x52D640

};
// 1 methods in IDA
class CampaignProperties_WorldDominationTour
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CampaignProperties_WorldDominationTour() = default;

    virtual void QueryInterface(); // 0x76C030

};
// 9 methods in IDA
// CSP: CampaignScore matched via T1
#ifndef GAMEMD_E4_CampaignScore  // G42.33 b3: e4 flat carrier wins in opt-in TUs
class CampaignScore
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CampaignScore() = default;

    virtual void DialogProc(); // 0x46DFD0
    virtual void ProcessScreen(); // 0x46FC00
    virtual void InitScoreScreenData(); // 0x471420
    virtual void Constructor_CampaignScoreClass(); // 0x471500
    virtual void Constructor_CampaignEndScoreClass(); // 0x471520
    // +4 more virtual methods

    uint8_t CampaignScore_field_0x04[4];
    uint8_t q008[4];
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


    void * ptr_4;  // 0x8 [X55 W3 supply (render vocab)]
    void * ptr_C;  // 0x10 [X55 W3 supply (render vocab)]
};
#endif  // GAMEMD_E4_CampaignScore
// 2 methods in IDA
#ifndef GAMEMD_E4_CampaignSelect  // G42.33 b3: e4 flat carrier wins in opt-in TUs
class CampaignSelect
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CampaignSelect() = default;

    virtual int LookupByName(); // 0x46CC90
    virtual void DlgProc(); // 0x52EC00

    uint8_t q004[4];

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
};
#endif  // GAMEMD_E4_CampaignSelect
// 1 methods in IDA
class Campaign_WorldDominationTour
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~Campaign_WorldDominationTour() = default;
    virtual void ** QueryInterface(char a2); // 0x765600 (G42.35 def truth)

    virtual void QueryInterface(); // 0x765600


    unsigned char ComPtr_4[4];  /* ComPtr */  // X10 supply (member_lookup)
    unsigned char ObjectClass_12[4];  /* ObjectClass */  // X10 supply (member_lookup)
    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_18;  // X10 supply (member_lookup)
    unsigned int u32_1C;  // X10 supply (member_lookup)
    unsigned int u32_20;  // X10 supply (member_lookup)
    unsigned int u32_25;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
};
// 39 methods in IDA
class CheckListClass
{
public:
    virtual ~CheckListClass() = default;  // 0x557E10

    virtual int g_var_1d7b82(int a2); // 0x488310
    virtual int Clear(); // 0x488350
    virtual int ScrollUp(int a2); // 0x488360
    virtual void GetSelected(wchar_t *String2); // 0x488380
    virtual int SetItemData(wchar_t *String2); // 0x4883F0
    // +34 more virtual methods

    void *Items;  // 0x4 (X137C: binary dword, ptr usage; serves old X alias)
    int Capacity;  // 0x8 (X137C)
    void (*initEvent)();  // 0xC (X137C: call dword ptr [reg+0Ch])
    int Height;  // 0x10 (X137C)
    int Visible;  // 0x14 (X137C)
    int ID;  // 0x18 (X137C: live disasm 0x5575A0 mov edx,[ecx+18h])
    uint8_t q01C[4];
    uint8_t u32_20[4];
    uint8_t q024[4];
    uint8_t q028[4];
    uint8_t q02C[4];
    uint8_t CheckListClass_field_0x30[4];
    uint8_t q034[4];
    uint8_t q038[4];
    uint8_t q03C[4];
    uint8_t q040[4];
    uint8_t CheckListClass_field_0x44[4];
    void (*AddItem_1)();  // 0x48 (X137C: call dword ptr [reg+48h])
    uint8_t q04C[4];
    uint8_t CheckListClass_field_0x50[4];
    unsigned char *__pad_0;  // 0x0
    unsigned int u32_16C;  // 0x16C
    unsigned int u32_174;  // 0x174
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int GetItem(int a1, void* a2, int a3);  // 0x4884A0
    int SelectItem(int a1);  // 0x4886C0
    int SetFocus(int a1);  // 0x4886D0
    void* QueryInterface(int a1);  // 0x4886E0
    void initList();  // 0x556EB0
    void* toggleItem(int a1);  // 0x5571C0
    // L4 正名移出 (ra1audit): 0x556EE0/0x557090/0x557140 → VectorClass_ptr_LineTrail (GetItemIndex/SetCapacity/FindItemIndex);
    // 0x557570/0x557FD0 → ListClass (Set_Position/Flag_To_Redraw)
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
    void* drawList(int a1);  // 0x558130
    void scrollList();  // 0x5581E0
    int selectItem(int a1);  // 0x558210
    int clearList(int a1, void* a2);  // 0x5583C0
    int getItemCount(void* a1);  // 0x558470
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    void* OnClick(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  // 0x488520
    // === FUNCS-MOVE (END) ===

    int Count;  // X10 supply (csp_canon_members)
    char Enabled;  // X10 supply (csp_canon_members)
    bool IsAllocated;  // X10 supply (csp_canon_members)
    bool IsInitialized;  // X10 supply (csp_canon_members)
    unsigned int q019;  // X10 supply (member_lookup)
    int q044;  // X10 supply (member_lookup)
    int q050;  // X10 supply (member_lookup)
    void* q068;  // X10 supply (member_lookup)
    void* q06C;  // X10 supply (member_lookup)
    void* q070;  // X10 supply (member_lookup)
    void* q0C4;  // X10 supply (member_lookup)
    void* q0C8;  // X10 supply (member_lookup)
    void* q0CC;  // X10 supply (member_lookup)
    unsigned int q0D0;  // X10 supply (member_lookup)
    void* q124;  // X10 supply (member_lookup)
    void* q128;  // X10 supply (member_lookup)
    void* q12C;  // X10 supply (member_lookup)
    void* q130;  // X10 supply (member_lookup)
    unsigned int q170;  // X10 supply (member_lookup)
    void * subList1;  // X10 supply (member_lookup)
    unsigned int u32_118;  // X10 supply (member_lookup)
    unsigned int u32_1A8;  // X10 supply (member_types)
    unsigned int u32_30;  // X10 supply (member_lookup)
    unsigned int u32_B8;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)
};
// 1 methods in IDA
class CheckSum
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CheckSum() = default;
    unsigned char __tail_0[1024];  // G42.35: supplied-bodies 尾数组词汇 (0x632C52 family)

    virtual int AccumulateModulo(int16_t a2); // 0x632C40 (G42.35 def truth)


    unsigned int tail_0;  // X10 supply (csp_canon_members)
};
// 1 methods in IDA
class Checkbox
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Checkbox() = default;

    virtual void WndProc(); // 0x6163A0

};
// 1 methods in IDA
class Checksum
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Checksum() = default;

    // G42.33: binary truth 0x4A1DB0 -- AddString(this, uint8_t*) 单参
    virtual int AddString(uint8_t* a1); // 0x4A1DB0 (G42.34: def truth int)

};
// 1 methods in IDA
class ComboBoxDropDown
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ComboBoxDropDown() = default;

    virtual void WndProc(); // 0x617250

};
// 7 methods in IDA
// CSP: ComboBoxOwnerDraw matched via T1
class ComboBoxOwnerDraw
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ComboBoxOwnerDraw() = default;

    virtual int GetWidthHeight(); // 0x600670 (G42.35 def truth)
    virtual bool MatchDimensions(unsigned int *a2); // 0x600680 (G42.35 def truth)
    virtual void DlgProc(); // 0x610CA0
    virtual void SortItems(); // 0x6252F0
    virtual void ComputeMask(); // 0x625390
    // +2 more virtual methods

    uint8_t ComboBoxOwnerDraw_field_0x04[4];
    uint8_t ComboBoxOwnerDraw_field_0x08[4];
    uint8_t ComboBoxOwnerDraw_field_0x0C[4];
    uint8_t q010[4];
    uint8_t ComboBoxOwnerDraw_field_0x14[4];
    uint8_t ComboBoxOwnerDraw_field_0x18[4];
    unsigned int *__pad_0;  // G42.35: supplied-bodies ptr_0 view
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void SetCapacity();  // 0x6258E0
    int GrowBuffer();  // 0x625990
    // --- gap2 auto-generated stub declarations (END) ---

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    int q014;  // X10 supply (member_lookup)
    int q018;  // X10 supply (member_lookup)
    unsigned int u32_30;  // X10 supply (member_lookup)
};
// 4 methods in IDA
// CSP: ControlClass matched via T1
class ControlClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ControlClass() = default;

    virtual unsigned int * Construct(int a2, int a3, int a4, int a5, int a6, int a7, char a8); // 0x48E520
    static unsigned int * Construct(void *aP0, int aP1, int aP2, int aP3, int aP4, int aP5, int aP6, char aP7);  // 0x48E520 G42.35 static-form sync (ui/supplied site 0x4E2524)
    virtual unsigned int * CtorFromData(ControlClass * a2); // 0x48E570 (G42.39 param truth: object)
    virtual unsigned int * QueryInterface(char a2); // 0x48E660
    virtual unsigned int * Constructor(int a2); // 0x4E1340 (G42.34: def truth)
    static unsigned int * Constructor(void *aP0, int aP1);  // 0x4E1340 G42.35 static-form sync (ui/supplied site 0x48E579)

    unsigned int *__pad_0;  // G42.34: supplied-bodies view (0x48E520 family)
    int X;  // 0x4 (X137C: gadget family layout, ambiguous disasm pick 0x4)

    int Y;  // 0x8 (X137C: disasm)

    int Width;  // 0xC (X137C: disasm)


    void * q028;  // G42.39 data supply

    unsigned int u32_24;  // G42.39 data supply

    int m_Next;  // G42.39 data supply

    int Visible;  // 0x14 (X137C: disasm+name-encode; was u32_14)


    unsigned int u32_18;  // G42.39 data supply

    unsigned int u32_1C;  // G42.39 data supply

    unsigned int u32_1D;  // G42.39 data supply

    unsigned int u32_1E;  // G42.39 data supply

    int m_Prev;  // G42.39 data supply

    unsigned int u32_20;  // X10 supply (member_lookup)
    unsigned int u32_28;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)
};
// 2 methods in IDA
// CSP: CreditsPower matched via T1
class CreditsPower
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CreditsPower() = default;

    virtual void DrawCreditsTextLine(); // 0x4C3D00
    virtual void Display(); // 0x4C3E30

    uint8_t q004[4];
};
// 4 methods in IDA
class DialogControl
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DialogControl() = default;

    virtual void Hide();  // 0x4E1450
    virtual void Show();  // 0x4E1460
    virtual bool IsHidden();  // 0x4E1470
    void* Constructor();  // 0x623340

    uint8_t q004[4];
    uint8_t q008[4];
    uint8_t u32_C[4];
};
// 2 methods in IDA
// CSP: DialogQueue matched via T1
class DialogQueue
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DialogQueue() = default;

    virtual void PushEntry(int entryType, int param);  // 0x5D4E70
    virtual int RemoveEntry();  // 0x5D4ED0

    uint8_t q004[4];
};
// 25 methods in IDA
// CSP: DropListClass matched via T1
class DropListClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DropListClass() = default;

    virtual int OnClick(); // 0x4B4EE0 (G42.34: def truth int)
    virtual int g_var_926b49(int a2); // 0x4B4F20 (G42.34: def truth)
    virtual int Draw(int a2); // 0x4B4F40 (G42.34: def truth)
    virtual unsigned int * HitTest(int a2); // 0x4B4F60 (G42.34: def truth)
    virtual int OnDblClick(); // 0x4B4F80 (G42.34: def truth)
    // +20 more virtual methods

    uint8_t DropListClass_field_0x04[4];
    uint8_t u32_8[4];
    uint8_t u32_C[4];
    int Height;  // 0x10 (X137C: disasm)

    uint8_t u32_14[4];
    uint8_t u32_18[4];
    uint8_t q01C[4];
    uint8_t q020[4];
    uint8_t q024[4];
    uint8_t q028[4];
    uint8_t DropListClass_field_0x2C[4];
    uint8_t DropListClass_field_0x30[4];
    uint8_t DropListClass_field_0x34[4];
    uint8_t DropListClass_field_0x38[4];
    uint8_t DropListClass_field_0x3C[4];
    uint8_t DropListClass_field_0x40[4];
    uint8_t DropListClass_field_0x44[4];
    void (*MarkDirty)();  // 0x48 (X137C: call dword ptr [reg+48h] x2)

    uint8_t DropListClass_field_0x4C[4];
    uint8_t DropListClass_field_0x50[4];
    unsigned int q02C;  // 0x2C
    unsigned int q0446;  // 0x446
    unsigned char *__pad_0;  // 0x0
    unsigned int q030;  // 0x30
    unsigned int u32_BC;  // 0xBC
    unsigned int u32_C4;  // 0xC4
    unsigned int u32_C8;  // 0xC8
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int SetFocus(void* a1);  // 0x4B4FB0
    int KillFocus();  // 0x4B4FF0
    int GetItemData();  // 0x4B5010
    int AddItem();  // 0x4B50A0
    int Open(char a2, unsigned int *a3, char *a4);  // 0x4B50C0
    int RemoveItem(int a1, int a2);  // 0x4B54E0
    void OnKeyDown(void* a1);  // 0x4B5530
    int ScrollUp();  // 0x4B55B0
    int ScrollDown(int a1);  // 0x4B55D0
    void* QueryInterface(int a1);  // 0x4B55F0
    int Constructor();  // 0x4C30B0
    static int Constructor(void *aP0);  // 0x4C30B0 G42.35 static-form sync (ui/supplied site 0x4B57D3)
    int SelectItem(void* a1, int a2, wchar_t *String, int a3);  // 0x4C30E0  // g57b5 W4: raw 真值补参
    int GetItem(int a1);  // 0x4C3110
    int GetCount(int a1, void* a2, int a3);  // 0x4C3190
    int GetSelected();  // 0x4C32A0
    void* GetItemText(void* a1);  // 0x4C32E0
    int SetItemText(int C);  // 0x4C3420
    int Close();  // 0x4C3570
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    void* OnKeyUp(int a1, int a2, int a3);  // 0x4b5030
    // === FUNCS-MOVE (END) ===

    char Enabled;  // X10 supply (csp_canon_members)
    int q03C;  // X10 supply (member_lookup)
    unsigned int q045;  // X10 supply (member_lookup)
    int q048;  // X10 supply (member_lookup)
    int q04C;  // X10 supply (member_lookup)
    int q050;  // X10 supply (member_lookup)
    unsigned int u32_34;  // X10 supply (member_lookup)
    unsigned int u32_38;  // X10 supply (member_lookup)
    unsigned int u32_40;  // X10 supply (member_lookup)
    unsigned int u32_44;  // X10 supply (member_lookup)
    unsigned int u32_A8;  // X10 supply (member_lookup)
    unsigned int u32_B0;  // X10 supply (member_lookup)
    unsigned int u32_C0;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)
};
// 1 methods in IDA
// 1 methods in IDA
class EditClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~EditClass() = default;

    virtual unsigned int * QueryInterface(char a2); // 0x4B57D0 (G42.34: def truth)

};
// 2 methods in IDA
class EditControl
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~EditControl() = default;

    virtual void WndProc(); // 0x614B30
    virtual char GrowBuffer(wchar_t a2, size_t a3); // 0x7B72F0 (G42.35 def truth)
    unsigned int *__pad_0;  // G42.35: supplied-bodies ptr_0 view

    uint8_t q004[4];

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
};
// 6 methods in IDA
// CSP: FontClass matched via T1
#ifndef GAMEMD_E4_FontClass  // G42.33 b3: e4 flat carrier wins in opt-in TUs
class FontClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FontClass() = default;

    virtual void RenderGlyph(); // 0x434120
virtual int RenderText(unsigned short *,int,int,int,int);  // 0x434500
virtual int GetPixelData(unsigned short,int);  // 0x4349B0
    virtual void LoadFontResources(); // 0x5D2E90
    virtual void CreateGlyphColor(); // 0x68C3B0
    // +1 more virtual methods

    uint8_t q004[4];
    uint8_t FontClass_field_0x08[4];
    uint8_t FontClass_field_0x0C[4];
    uint8_t ptr_10[4];
    uint8_t FontClass_field_0x14[4];
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* InitMetrics(void* a1, int a2, int a3, int a4, int a5, int a6);  // 0x68C710
    // --- gap2 auto-generated stub declarations (END) ---

    unsigned char __pad_014;  // X10 supply (csp_canon_members)
    unsigned int u32_18;  // X10 supply (member_lookup)
    unsigned int u32_1C;  // X10 supply (member_lookup)
    unsigned int u32_24;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
    unsigned int u32_D;  // X10 supply (member_lookup)
    unsigned int u32_E;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_E4_FontClass
// 2 methods in IDA
#ifndef GAMEMD_E4_FontRenderer  // G42.33 b3: e4 flat carrier wins in opt-in TUs
class FontRenderer
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FontRenderer() = default;

virtual int InitContext(int *,int);  // 0x4348F0
    virtual void DrawText(); // 0x434B90

    uint8_t q004[4];

    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_30;  // X10 supply (member_lookup)
    unsigned int u32_34;  // X10 supply (member_lookup)
    unsigned int u32_38;  // X10 supply (member_lookup)
    unsigned int u32_3C;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_E4_FontRenderer
// 2 methods in IDA
class GadgetGrid
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~GadgetGrid() = default;

    virtual void InsertItem(int index, void* item);  // 0x4134A0
    virtual int RemoveItem(int a2);  // 0x4135D0

    uint8_t q004[4];
};
// 5 methods in IDA
// CSP: InputManager matched via T1
class InputManager
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~InputManager() = default;

    virtual unsigned int * FindBestHitElement(int a2, int a3); // 0x4E15A0 (G42.35: def truth unsigned int* thiscall 2-arg)
    virtual int ProcessEvents(); // 0x4E1640 (G42.35: def truth int thiscall)
    static unsigned int * FindBestHitElement(void *aP0, int aP1, int aP2);  // 0x4E15A0 G42.35 static-form sync (ui/supplied site 0x4E16DF)
    virtual void EnqueueInputEvent(); // 0x54F2F0 (member truth 4-arg thiscall)
    static char EnqueueInputEvent(void *aP0, unsigned short aP1, short aP2, short aP3, char aP4);  // 0x54F2F0 G42.35 static-form sync (ui/supplied sites 0x54FA0D+)
    virtual char PushInputEvent(int16_t a2); // 0x54F670 (G42.35 def truth)
    static char PushInputEvent(void *aP0, int16_t aP1);  // 0x54F670 G42.35 static-form sync (ui/supplied sites 0x54F996)
    virtual int WndProc(HWND a1, UINT, WPARAM, unsigned int a4); // 0x54F790 (G42.35 def truth)

    uint8_t q004[4];
    uint8_t q008[4];
    uint8_t InputManager_field_0x0C[4];
    uint8_t InputManager_field_0x10[4];
    unsigned int *__pad_0;  // G42.35: supplied-bodies ptr_0 view (sites 0x4E1620/0x4E1626)

    unsigned int u32_314;  // G42.39 data supply

    unsigned int u32_318;  // G42.39 data supply

    int q00C;  // X10 supply (member_lookup)
    int q010;  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_18;  // X10 supply (member_lookup)
    unsigned int u32_1E;  // X10 supply (member_lookup)
};
// 5 methods in IDA
// 1 methods in IDA
class Keyboard
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Keyboard() = default;

    virtual int MapKey(uint16_t a2); // 0x54F450 (G42.35 def truth)


    unsigned int u32_24;  // G42.39 data supply

    unsigned int u32_25;  // G42.39 data supply

    unsigned int u32_26;  // G42.39 data supply
};
// 1 methods in IDA
class List
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~List() = default;

    virtual int FindByValue(); // 0x5943E0 (G42.35 def truth)

};
// 8 methods in IDA
// CSP: ListBox matched via T1
class ListBox
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ListBox() = default;

    virtual wchar_t ** Constructor(); // 0x5C1030 (G42.35 def truth)
    virtual int FillEntries(int a2, int a3); // 0x5D6450 (G42.35 def truth, __stdcall form)
    virtual int Refresh(int a2, int a3); // 0x5D64C0 (G42.35 def truth, __stdcall form)
    virtual int FillPlayers(HWND a2, int a3); // 0x5D6540 (G42.35 def truth)
    virtual int AddEntries(); // 0x5D6690 (G42.35 def truth, __stdcall form)
    // +3 more virtual methods

    uint8_t ListBox_field_0x04[4];
    uint8_t ListBox_field_0x08[4];
    uint8_t ListBox_field_0x0C[4];
    uint8_t ListBox_field_0x10[4];
    uint8_t ListBox_field_0x14[4];
    uint8_t ListBox_field_0x18[4];
    uint8_t q01C[4];
    int MultiplayerGameMode_field_0x04;  // G42.35: supplied-bodies vocab (IDA til MultiplayerGameMode fields on ListBox)
    int MultiplayerGameMode_field_0x08;
    int MultiplayerGameMode_field_0x0C;
    int MultiplayerGameMode_field_0x10;
    int MultiplayerGameMode_field_0x14;
    int MultiplayerGameMode_field_0x18;
    unsigned int *__pad_0;  // G42.35: supplied-bodies ptr_0 view (site 0x5D657F)
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Clear();  // 0x623840
    static int Clear(void *aP0);  // 0x623840 G42.35 static-form sync (ui/supplied sites 0x5D2Exx family)
    static wchar_t ** Constructor(void *aP0);  // 0x5C1030 G42.35 static-form sync (ui/supplied site 0x5D6705)
    int SetCustomEntry();  // 0x6969C0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int EditSubclassProc();  // 0x614190
    // === FUNCS-MOVE (END) ===

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    int q010;  // X10 supply (member_lookup)
    int q014;  // X10 supply (member_lookup)
    int q018;  // X10 supply (member_lookup)
};
// 8 methods in IDA
// CSP: ListClass matched via T1
class ListClass
{
public:
    virtual ~ListClass() = default;  // 0x557600

    virtual int Constructor(int a2, int a3, int a4, int a5, int a6); // 0x4E2500 (G42.35 def truth)
    static int Constructor(void *aP0, int aP1, int aP2, int aP3, int aP4, int aP5);  // 0x4E2500 G42.35 static-form sync (ui/supplied site 0x6B1B44)
    virtual int Construct(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9); // 0x557230 (G42.35 def truth)
    virtual int Destruct(); // 0x557600
    virtual int AddItem(int a2); // 0x5576A0 (G42.35 def truth)
    static int AddItem(void *aP0, int aP1);  // 0x5576A0 G42.35 static-form sync (truth: int thiscall(this,int); ui/supplied sites 0x48833C/0x488333)
    virtual void RemoveItem(); // 0x557730
    static char RemoveItem(void *aP0, signed int aP1);  // 0x557730 G42.35 static-form sync (truth: char thiscall(this,sint); ui/supplied site 0x4883CF)
    virtual void Flag_To_Redraw(); // 0x557FD0 (L4 正名: was CheckListClass::AddItem; RA1 Flag_To_Redraw 传播子 gadget)
    virtual int Set_Position(int a1, int a2); // 0x557570 (L4 正名: was CheckListClass::RemoveItem; RA1 Set_Position 摆位 Up/Down/Scroll 三 gadget)
    // +3 more virtual methods

    uint8_t ListClass_field_0x04[4];
    uint8_t u32_8[4];
    uint8_t q00C[4];
    uint8_t u32_10[4];
    int Visible;  // 0x14 (X137C: disasm)

    uint8_t u32_18[4];
    uint8_t u32_1C[4];
    unsigned int *__pad_0;  // G42.35: supplied-bodies ptr_0 view (sites 0x557609/0x55764F)
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Destru_vt43(int a1);  // 0x557800
    void* Destru_vt50(int a1, int a2, int a3, int a4, int a5);  // 0x557D20
    void* Destru_vt00(int a1);  // 0x558060
    // --- gap2 auto-generated stub declarations (END) ---

    int Enabled;  // G42.39 data supply

    unsigned int u32_118;  // G42.39 data supply

    unsigned int u32_12C;  // G42.39 data supply

    unsigned int u32_1C0;  // G42.39 data supply

    unsigned int u32_58;  // G42.39 data supply

    unsigned int u32_88;  // G42.39 data supply

    unsigned int u32_B8;  // G42.39 data supply

    unsigned int u32_38;  // G42.39 data supply

    unsigned int u32_D;  // G42.39 data supply

    unsigned int u32_41;  // G42.39 data supply

    unsigned int u32_3C;  // G42.39 data supply

    unsigned char __pad_019;  // X10 supply (csp_canon_members)
    unsigned int u32_124;  // X10 supply (member_lookup)
    unsigned int u32_128;  // X10 supply (member_lookup)
    unsigned int u32_130;  // X10 supply (member_lookup)
    unsigned int u32_16C;  // X10 supply (member_lookup)
    unsigned int u32_170;  // X10 supply (member_lookup)
    unsigned int u32_2C;  // X10 supply (member_lookup)
    unsigned int u32_2D;  // X10 supply (member_lookup)
    unsigned int u32_2E;  // X10 supply (member_lookup)
    unsigned int u32_30;  // X10 supply (member_lookup)
    unsigned int u32_34;  // X10 supply (member_lookup)
    unsigned int u32_40;  // X10 supply (member_lookup)
    unsigned int u32_44;  // X10 supply (member_lookup)
    unsigned int u32_48;  // X10 supply (member_lookup)
    unsigned int u32_4C;  // X10 supply (member_lookup)
    unsigned int u32_50;  // X10 supply (member_lookup)
    unsigned int u32_6C;  // X10 supply (member_lookup)
    unsigned int u32_70;  // X10 supply (member_lookup)
    unsigned int u32_C4;  // X10 supply (member_lookup)
    unsigned int u32_C8;  // X10 supply (member_lookup)
    unsigned int u32_CC;  // X10 supply (member_lookup)
    unsigned int u32_D0;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)
};
// 1 methods in IDA
// CSP: ListNode matched via T1
class ListNode
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ListNode() = default;

    virtual unsigned int * Alloc(unsigned int *a2); // 0x5A9A20 (G42.35 def truth)


    unsigned int u32_4;  // G42.39 data supply

    unsigned int u32_8;  // X10 supply (member_lookup)
};
// 1 methods in IDA
// 1 methods in IDA
class ProgressAnim
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ProgressAnim() = default;

    virtual void Init(); // 0x642A60

};
// 1 methods in IDA
class Slider
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Slider() = default;

    virtual void CalcPosition(); // 0x412A40

};
// 13 methods in IDA
class SliderClass
{
public:
    virtual ~SliderClass() = default; // 0x6B1D00

    virtual int g_var_d52e84(); // 0x558120 (G42.35 def truth)
    virtual unsigned int * QueryInterface(char a2); // 0x558180 (G42.35 def truth)
    static int Destructor(void *aP0);  // 0x6B1D00 G42.35 static-form sync (ui/supplied sites 0x557658/0x558183)
    virtual int * Constructor(int a2, int a3, int a4, int a5, int a6, int a7); // 0x6B1B20 (G42.35 def truth)
    static int * Constructor(void *aP0, int aP1, int aP2, int aP3, int aP4, int aP5, int aP6);  // 0x6B1B20 G42.35 static-form sync (ui/supplied site 0x5572C3)
    virtual int Destructor(); // 0x6B1D00 (G42.35 def truth)
    virtual int GetValue(int a2); // 0x6B1D40 (G42.35 def truth)
    unsigned int *__pad_0;  // G42.35: supplied-bodies ptr_0 view (site 0x55819A)
    // +8 more virtual methods

    uint8_t SliderClass_field_0x04[4];
    uint8_t q008[4];
    uint8_t q00C[4];
    uint8_t SliderClass_field_0x10[4];
    int Visible;  // 0x14 (X137C: disasm)

    int ID;  // 0x18 (X137C: disasm)

    uint8_t q01C[4];
    uint8_t q020[4];
    uint8_t q024[4];
    uint8_t q028[4];
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

    unsigned int u32_3C;  // G42.39 data supply

    void * q010;  // G42.39 data supply

    int q02C;  // X10 supply (member_lookup)
    int q030;  // X10 supply (member_lookup)
    unsigned int q045;  // X10 supply (member_lookup)
    unsigned int q046;  // X10 supply (member_lookup)
    unsigned int u32_2E;  // X10 supply (member_lookup)
    unsigned int u32_34;  // X10 supply (member_lookup)
    unsigned int u32_40;  // X10 supply (member_lookup)
    unsigned int u32_44;  // X10 supply (member_lookup)
    unsigned int u32_48;  // X10 supply (member_lookup)
    unsigned int u32_4C;  // X10 supply (member_lookup)
    unsigned int u32_50;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)
};
// 1 methods in IDA
// CSP: TabCameoListClass matched via T1
class TabCameoListClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TabCameoListClass() = default;

    virtual int AddCameo_ReplaceItAll(int a2, int a3); // 0x6A8710 (G42.35 def truth)


    unsigned int u32_54;  // G42.39 data supply

    int u32_16;  // X10 supply (member_lookup)
    unsigned int u32_30;  // X10 supply (member_lookup)
};
// 2 methods in IDA
class TabControl
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TabControl() = default;

    virtual void WndProc(); // 0x612B70
    virtual void DlgProc(); // 0x61D950

    uint8_t q004[4];
};
// 14 methods in IDA
// CSP: ToolTipClass matched via T1
#ifndef GAMEMD_E4_ToolTipClass  // G42.33 b3: e4 flat carrier wins in opt-in TUs
class ToolTipClass
{
public:
    virtual ~ToolTipClass() = default;  // 0x724C30

    virtual void updateString(); // 0x7240B0
    virtual void initString(); // 0x724AD0
    virtual void Destructor(); // 0x724C10
    virtual void ddtor(); // 0x724C30
    virtual void write(); // 0x724C60
    // +9 more virtual methods

    int Items;  // 0x4 (X139B: disasm n=10; was X; gadget-family Items)

    int Capacity;  // 0x8 (X139B: disasm n=8; was Y; gadget-family Capacity)

    int initEvent;  // 0xC (X139B: dword slot; was byte[4] field_0x0C; ToolTipText byte-view banked)
    uint8_t q010[4];
    uint8_t q014[4];
    uint8_t q018[4];
    uint8_t q01C[4];
    uint8_t q020[4];
    uint8_t q024[4];
    uint8_t q028[4];
    uint8_t q02C[4];
    uint8_t q030[4];
    uint8_t q034[4];
    unsigned char m_1[4];  // 0x1
    int m_8;  // 0x8
    unsigned int m_C;  // 0xC
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int seek(int a1);  // 0x724C80
    char addRef(int a1);  // 0x724C90
    int readString(int a1, void* a2);  // 0x724CD0
    void writeString();  // 0x724D80
    int seekString(void* a1);  // 0x724DB0
    int setString(int a1);  // 0x724DF0
    int release(int a1, void* a2);  // 0x724E10
    int read(void* a1);  // 0x724EC0
    void* compareString(int a1);  // 0x724EF0
    // --- gap2 auto-generated stub declarations (END) ---

    unsigned int q091;  // G42.39 data supply (usage-typed)
    unsigned int * q08E;  // G42.39 data supply (usage-typed)
    unsigned int * q08D;  // G42.39 data supply (usage-typed)

    int Count;  // X10 supply (csp_canon_members)
    bool IsAllocated;  // X10 supply (csp_canon_members)
    bool IsInitialized;  // X10 supply (csp_canon_members)
};
#endif  // GAMEMD_E4_ToolTipClass
// 1 methods in IDA
class Tooltip
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Tooltip() = default;

    virtual void Enable();

    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int Enable(char a1);  // 0x7241a0 -- Tooltip::Enable (G42.35 def truth char)
    // === SYMBOL-ANCHOR (END) ===

    unsigned int u32_C;  // G42.39 data supply

    unsigned int u32_4;  // G42.39 data supply

    uint32_t u32_8;  // X10 supply (member_lookup)
};
// 1 methods in IDA
class TooltipClass
{
public:
    virtual ~TooltipClass() = default;  // 0x724C30

    virtual char GetText(unsigned int a2, void *a3); // 0x7248C0 (G42.35 def truth)


    unsigned int u32_250;  // G42.39 data supply

    unsigned int u32_25C;  // G42.39 data supply

    unsigned int u32_258;  // G42.39 data supply

    unsigned int u32_24C;  // G42.39 data supply

    unsigned char u32_87[4];  /* void */  // X10 supply (member_lookup)
};

} // namespace gamemd
