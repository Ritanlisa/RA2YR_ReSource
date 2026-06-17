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

    CameoDataStruct() noexcept
        : ItemIndex(-1), ItemType(AbstractType::None), IsAlt(false),
          CurrentFactory(nullptr), CameoDataStruct_field_10(0), Progress(0),
          ProgressHasChanged(false), ProgressTimerStart(-1), ProgressTimerCurrent(0),
          ProgressTimerTimeLeft(0), ProgressRate(0), ProgressStep(1),
          FlashEndFrame(0) {}

    CameoDataStruct(int32_t itemIndex, AbstractType itemType) noexcept
        : ItemIndex(itemIndex), ItemType(itemType), IsAlt(false),
          CurrentFactory(nullptr), CameoDataStruct_field_10(0), Progress(0),
          ProgressHasChanged(false), ProgressTimerStart(-1), ProgressTimerCurrent(0),
          ProgressTimerTimeLeft(0), ProgressRate(0), ProgressStep(1),
          FlashEndFrame(0) {}

    bool operator==(const CameoDataStruct& rhs) const noexcept
    {
        return ItemIndex == rhs.ItemIndex && ItemType == rhs.ItemType;
    }

    bool operator!=(const CameoDataStruct& rhs) const noexcept
    {
        return ItemIndex != rhs.ItemIndex || ItemType != rhs.ItemType;
    }
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

    virtual ~SidebarClass() = default;

    // IDA 0x6A6C30
    virtual void Draw(uint32_t flags) override = 0;
    // IDA 0x6A7590 (SwitchTab)
    virtual bool OnTabClick(int32_t tabIndex) = 0;

    // IDA: inline — sets redraw flags, calls RedrawSidebar + Draw
    void SidebarNeedsRepaint(int32_t mode = 0);
    // IDA 0x6A6300
    bool AddCameo(AbstractType absType, int32_t idxType);
    // IDA 0x6A60A0
    void RepaintSidebar(int32_t tab = 0);
    // IDA 0x6A6C30 (same as Draw)
    void RedrawSidebar(int32_t mode);

    // IDA 0x6ABC60
    static int32_t GetObjectTabIdx(AbstractType absType, int32_t idxType, int32_t unused);
    // IDA 0x6ABCD0
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
    SidebarClass() = default;
};

} // namespace gamemd
