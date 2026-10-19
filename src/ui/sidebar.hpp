#pragma once

#include <cstdint>
#include <windows.h>

#include "power.hpp"
#include "core/enums.hpp"
#include "core/math.hpp"
#include "object/abstract.hpp"

namespace gamemd
{

class FactoryClass;
class HouseClass;
class ColorScheme;
class SuperClass;
struct ProgressTimer;

static constexpr int32_t kMaxCameosPerTab = 75;
static constexpr int32_t kMaxTabs         = 4;
static constexpr int32_t kMaxDiplomacyHouses = 8;

// YRpp: SidebarClass::StripClass::BuildType
// sizeof = 0x34 (verified: 3988 = header 0x58 + 75 * 0x34)
struct CameoDataStruct
{
    int32_t          ItemIndex;              // 0x00: build queue item index
    AbstractType     ItemType;               // 0x04: build queue item type
    bool             IsAlt;                  // 0x08: alternate cameo (multi-factory buildings)
    uint8_t          _pad_09[3];             // 0x09
    FactoryClass*    CurrentFactory;         // 0x0C: factory producing this item
    uint32_t         CameoDataStruct_field_10;               // 0x10: unknown — YRpp: CameoDataStruct_field_10
    // StageClass Progress (0x1C bytes, embedded):
    int32_t          Progress;               // 0x14: StageClass::Value — gclock animation level (0–54)
    bool             ProgressHasChanged;     // 0x18: StageClass::HasChanged
    uint8_t          _pad_progress[3];       // 0x19
    int32_t          ProgressTimerStart;     // 0x1C: CDTimerClass::StartTime
    int32_t          ProgressTimerCurrent;   // 0x20: CDTimerClass::CurrentTime (FrameTimer, stateless)
    int32_t          ProgressTimerTimeLeft;  // 0x24: CDTimerClass::TimeLeft
    int32_t          ProgressRate;           // 0x28: StageClass::Rate
    int32_t          ProgressStep;           // 0x2C: StageClass::Step (default 1)
    int32_t          FlashEndFrame;          // 0x30: frame when build-complete flash ends

    CameoDataStruct() noexcept;

    CameoDataStruct(int32_t itemIndex, AbstractType itemType) noexcept;

    // unmatched: no callgraph reference and no git history record
    bool operator==(const CameoDataStruct& rhs) const noexcept;

    // unmatched: no callgraph reference and no git history record
    bool operator!=(const CameoDataStruct& rhs) const noexcept;
};

// YRpp: SidebarClass::StripClass
// sizeof = 0xF94 (3988 bytes: 0x58 header + 75 * 0x34 cameos)
struct TabDataStruct
{
    // StageClass Progress (0x1C bytes, embedded):
    int32_t          TabProgressValue;       // 0x00: StageClass::Value
    bool             TabProgressHasChanged;  // 0x04: StageClass::HasChanged
    uint8_t          _pad_05[3];             // 0x05
    int32_t          TabProgressTimerStart;  // 0x08: CDTimerClass::StartTime
    int32_t          TabProgressTimerCur;    // 0x0C: CDTimerClass::CurrentTime
    int32_t          TabProgressTimerLeft;   // 0x10: CDTimerClass::TimeLeft
    int32_t          TabProgressRate;        // 0x14: StageClass::Rate
    int32_t          TabProgressStep;        // 0x18: StageClass::Step

    bool             AllowedToDraw;          // 0x1C: prevents redraw during layout
    uint8_t          _pad_1D[3];             // 0x1D
    Point2D          Location;               // 0x20: tab location on screen
    RectangleStruct  Bounds;                 // 0x28: tab clickable bounds
    int32_t          Index;                  // 0x38: tab index (0–3)
    bool             NeedsRedraw;            // 0x3C: tab needs redraw flag
    uint8_t          TabDataStruct_field_3D;               // 0x3D: unknown (YRpp: TabDataStruct_field_3D)
    uint8_t          TabDataStruct_field_3E;               // 0x3E: unknown (YRpp: TabDataStruct_field_3E)
    uint8_t          TabDataStruct_field_3F;               // 0x3F: unknown (YRpp: TabDataStruct_field_3F)
    uint32_t         TabDataStruct_field_40;               // 0x40: unknown (YRpp: TabDataStruct_field_40)
    int32_t          TopRowIndex;            // 0x44: scroll position — topmost visible row
    uint32_t         TabDataStruct_field_48;               // 0x48: unknown — scroll-related (YRpp: TabDataStruct_field_48)
    uint32_t         TabDataStruct_field_4C;               // 0x4C: unknown (YRpp: TabDataStruct_field_4C)
    uint32_t         TabDataStruct_field_50;               // 0x50: unknown (YRpp: TabDataStruct_field_50)
    int32_t          CameoCount;             // 0x54: number of filled cameo slots
    CameoDataStruct  Cameos[kMaxCameosPerTab]; // 0x58: cameo grid entries (75 * 0x34 = 0xF3C)
};

class SidebarClass : public PowerClass
{
public:
    static SidebarClass* Instance;

    static constexpr uint32_t kTooltipBufferSize = 0x42;
    static wchar_t TooltipBuffer[kTooltipBufferSize];

    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SidebarClass() = default;

    // IDA 0x6A6C30
    virtual void Draw(uint32_t flags) = 0;  // 0x4C9C50 (G42.33 b3: 无基类可 override)
    // IDA 0x6A7590 (SwitchTab)
    // design: pure virtual function, no binary implementation
    virtual bool OnTabClick(int32_t tabIndex) = 0;

    // IDA: inline — sets redraw flags, calls RedrawSidebar + Draw
    // wrapper: delegates to SidebarClass::SwitchTab at 0x6A7590
    void SidebarNeedsRepaint(int32_t mode = 0);
    // IDA 0x6A6300
    bool AddCameo(AbstractType absType, int32_t idxType);  // 0x6A6300
    // IDA 0x6A60A0
    // wrapper: delegates to Sidebar::ActivateTab at 0x6A60A0
    void RepaintSidebar(int32_t tab = 0);
    // IDA 0x6A6C30 (same as Draw)
    // wrapper: delegates to SidebarClass::Redraw at 0x6A6C30
    void RedrawSidebar(int32_t mode);

    // IDA 0x6ABC60
    // wrapper: delegates to HouseClass::GetStatus at 0x6ABC60
    static int32_t GetObjectTabIdx(AbstractType absType, int32_t idxType, int32_t unused);
    // IDA 0x6ABCD0
    // wrapper: delegates to globalHelper_0ABCD0 at 0x6ABCD0
    static int32_t GetObjectTabIdx(AbstractType absType, BuildCat buildCat, bool isNaval);

    TabDataStruct    Tabs[kMaxTabs];            // 0x0000: 4 tabs * 3988 = 0x3E50 bytes (to 0x3E50)
    uint32_t         tabProductionFlashTimer;    // 0x3E50 (YRpp: 0x5394)
    uint32_t         tabProductionFlashState;    // 0x3E54 (YRpp: 0x5398)
    int32_t          ActiveTabIndex;             // 0x3E58 (YRpp: 0x539C)
    uint32_t         scrollOffset;               // 0x3E5C (YRpp: 0x53A0)
    bool             HideObjectNameInTooltip;    // 0x3E60 (YRpp: 0x53A4) — see 0x6A9343
    bool             isScrolling;                // 0x3E61 (YRpp: IsSidebarActive @ 0x53A5)
    bool             SidebarNeedsRedraw;         // 0x3E62
    bool             SidebarBackgroundNeedsRedraw; // 0x3E63
    bool             needsRedrawAll;             // 0x3E64 (YRpp: SidebarClass_field_bool_53A8)

    HouseClass*      DiplomacyHouses[kMaxDiplomacyHouses];     // 0x3E68
    int32_t          DiplomacyKills[kMaxDiplomacyHouses];      // 0x3E88
    int32_t          DiplomacyOwned[kMaxDiplomacyHouses];      // 0x3EA8
    int32_t          DiplomacyPowerDrain[kMaxDiplomacyHouses]; // 0x3EC8
    ColorScheme*     DiplomacyColors[kMaxDiplomacyHouses];     // 0x3EE8
    uint32_t         DiplomacyHouseStates[kMaxDiplomacyHouses];   // 0x3F08 (YRpp: SidebarClass_field_544C)
    uint32_t         DiplomacyHousePowers[kMaxDiplomacyHouses];   // 0x3F28 (YRpp: SidebarClass_field_546C)
    uint32_t         DiplomacyHouseAlliances[kMaxDiplomacyHouses]; // 0x3F48 (YRpp: SidebarClass_field_548C)
    uint32_t         DiplomacyHouseSurrenders[kMaxDiplomacyHouses]; // 0x3F68 (YRpp: SidebarClass_field_54AC)
    uint32_t         DiplomacyHouseCaptures[kMaxDiplomacyHouses];  // 0x3F88 (YRpp: SidebarClass_field_54CC)
    uint32_t         DiplomacyHouseCreditsSpent[kMaxDiplomacyHouses]; // 0x3FA8 (YRpp: SidebarClass_field_54EC)
    uint8_t          diplomacyDrawingState;     // 0x3FC8 (YRpp: SidebarClass_field_550C)
    int32_t          DiplomacyNumHouses;        // 0x3FCC

    bool             stripClassDrawn;           // 0x3FD0 (YRpp: SidebarClass_field_bool_5514)
    bool             stripClassEnabled;         // 0x3FD1 (YRpp: SidebarClass_field_bool_5515)
    uint8_t          padding_5516[2];           // 0x3FD2

    SuperClass*      CurrentSuperWeapon;        // 0x3FD4

protected:
    char initButtons2(); // 0x40D270 thunk -> InitButtons (0x6D03A0)
    unsigned int u32_539C;  // 0x539C
    unsigned int u32_F94;  // 0xF94
    unsigned int u32_53A6;  // 0x53A6
    unsigned int u32_53A7;  // 0x53A7
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* SetFlashEntry(int a1, int a2, int a3, void* a4);  // 0x4C6B60
    int MarkTabForRebuild(int a2, char a3, int a4);  // 0x5005B0
    int getTypeProductionCount(int a2, char a3, int a4);  // 0x500700
    int ResetProductionState();  // 0x637AB0
    int addToList(void* a1);  // 0x63E880
    int Load(int a1);  // 0x6568A0
    int Save(int a1);  // 0x656AC0
    static int Save(void *aP0, int aP1);  // 0x656AC0 G42.35 static-form sync (ui/supplied site 0x6AC5EA)
    int ReadButtonList();  // 0x674650
    int startButtonFlash(int a1, int a2, int a3);  // 0x69DFC0
    int updateFlashTimer();  // 0x69E010
    int Init();  // 0x6A5310
    int UpdateCameoProductionState(void* a1);  // 0x6A5F20
    void UpdateStrips(void* a1, void* a2);  // 0x6A7780
    int InitCameoGrid(int a1);  // 0x6A8220
    int RefreshCameoGrid();  // 0x6A8330
    int sortCameoList();  // 0x6A83E0
    int UpdateCameos(int a1, int a2);  // 0x6A8B30
    int UpdateProduction();  // 0x6AA600
    int ProcessInput(int a1, void* a2, int a3);  // 0x6AAD00
    int saveLoadPrefix(int a1);  // 0x6AC5D0
    int saveLoadPrefix2(int a1);  // 0x6AC5E0
    unsigned int * queryInterface(char a1);  // 0x6AC780
    void* initButtons();  // 0x6AC870
    int GetProductionState();  // 0x6CBEE0
    int findEntryIndexByName();  // 0x6CFCC0
    int LoadButtonSHPs();  // 0x6D02B0
    int InitButtons();  // 0x6D03A0
    int DrawTabs(int a1);  // 0x6D0A20
    int initializeStrip(int a1);  // 0x724520
    int updateStripVisibility();  // 0x724530
    int updateStripPosition();  // 0x724540
    void* calcSidebarRect();  // 0x72AD90
    int registerBuildingType();  // 0x734250
    void* FindProductionData();  // 0x77DA50
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int select();  // 0x6ab990 -- SidebarClass::select
    int deselect();  // 0x6ab9e0 -- SidebarClass::deselect
    int StartSidebarProduction(int a1, int a2, int a3, int a4);  // 0x4fa350 -- Sidebar::StartSidebarProduction
    int Dispatch(int a1, int a2, int a3, int a4);  // 0x5007a0 -- Sidebar::Dispatch
    int ScrollSidebarSkipGame();  // 0x533f50 -- Sidebar::ScrollSidebarSkipGame
    void CancelSidebarProductionQueue();  // 0x636310 -- Sidebar::CancelSidebarProductionQueue
    int RemoveItem(int a1);  // 0x63f040 -- Sidebar::RemoveItem
    int FindProductionType(int a1, int a2, int a3);  // 0x6a6140 -- Sidebar::FindProductionType
    void FlushSidebarTooltip(int a1);  // 0x6a70e0 -- Sidebar::FlushSidebarTooltip
    // === SYMBOL-ANCHOR (END) ===

    unsigned int CellIterator_NextY;  // X10 supply (csp_canon_members)
    unsigned int VisibleRect;  // X10 supply (csp_canon_members)
    unsigned int ZoneIterator_Y;  // X10 supply (csp_canon_members)
    unsigned char __pad_004;  // X10 supply (csp_canon_members)
    unsigned char __pad_0F0;  // X10 supply (csp_canon_members)
    unsigned char __pad_100;  // X10 supply (csp_canon_members)
    unsigned char __pad_CD2;  // X10 supply (member_types)
    TechnoClass * ptr_30;  // X10 supply (csp_canon_members)
    unsigned int q01E;  // X10 supply (member_lookup)
    int q03C;  // X10 supply (member_lookup)
    int q058;  // X10 supply (member_lookup)
    int q064;  // X10 supply (member_lookup)
    unsigned char q074[12];  /* char[12] */  // X10 supply (member_lookup)
    unsigned int q11B0;  // X10 supply (member_lookup)
    unsigned int q11B1;  // X10 supply (member_lookup)
    unsigned char q1228;  // X10 supply (member_lookup)
    unsigned int q1234;  // X10 supply (member_lookup)
    unsigned int q1238;  // X10 supply (member_lookup)
    unsigned char q1260;  // X10 supply (member_lookup)
    unsigned int q126C;  // X10 supply (member_lookup)
    unsigned int q1270;  // X10 supply (member_lookup)
    int q1544;  // X10 supply (member_lookup)
    int q228;  // X10 supply (member_lookup)
    int q22C;  // X10 supply (member_lookup)
    int q520;  // X10 supply (member_lookup)
    unsigned int q5520;  // X10 supply (member_lookup)
    unsigned int q588;  // X10 supply (member_lookup)
    unsigned int u32_1264;  // X10 supply (member_lookup)
    int u32_1568;  // X10 supply (member_lookup)
    int u32_1598;  // X10 supply (member_lookup)
    unsigned int u32_18;  // X10 supply (member_lookup)
    int u32_28;  // X10 supply (member_lookup)
    unsigned int u32_38;  // X10 supply (member_lookup)
    unsigned int u32_443C;  // X10 supply (member_lookup)
    unsigned int u32_4C;  // X10 supply (member_lookup)
    unsigned int u32_5394;  // X10 supply (member_lookup)
    unsigned int u32_5398;  // X10 supply (member_lookup)
    unsigned int u32_53A0;  // X10 supply (member_lookup)
    unsigned int u32_53A5;  // X10 supply (member_lookup)
    unsigned int u32_53AC;  // X10 supply (member_lookup)
    unsigned int u32_53D0;  // X10 supply (member_lookup)
    unsigned int u32_53D1;  // X10 supply (member_lookup)
    unsigned int u32_53D2;  // X10 supply (member_lookup)
    unsigned int u32_53D3;  // X10 supply (member_lookup)
    unsigned int u32_53D4;  // X10 supply (member_lookup)
    unsigned int u32_53D8;  // X10 supply (member_lookup)
    unsigned int u32_54;  // X10 supply (member_lookup)
    unsigned int u32_550C;  // X10 supply (member_lookup)
    unsigned int u32_5510;  // X10 supply (member_lookup)
    unsigned int u32_5514;  // X10 supply (member_lookup)
    unsigned int u32_70;  // X10 supply (member_lookup)
    unsigned int u32_7C;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    unsigned int u32_C5;  // X10 supply (member_lookup)
    unsigned int u32_F4;  // X10 supply (member_lookup)
    unsigned int u32_F8;  // X10 supply (member_lookup)
    int u8_6D;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)

    int q05C;  // X10 supply (member_lookup)
    int u32_2C;  // X10 supply (member_lookup)


    unsigned int __pad_1092;  // 0x1092 [X55 W3 supply (render vocab)]
    unsigned int __pad_B8;  // 0xB8 [X55 W3 supply (render vocab)]
    unsigned int __pad_524;  // 0x524 [X55 W3 supply (render vocab)]
    unsigned int __pad_1452;  // 0x1452 [X55 W3 supply (render vocab)]
    unsigned int __pad_194;  // 0x194 [X55 W3 supply (render vocab)]
};

} // namespace gamemd
