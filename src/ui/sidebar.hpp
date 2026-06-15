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

struct CameoDataStruct
{
    int32_t          ItemIndex;
    AbstractType     ItemType;
    bool             IsAlt;
    FactoryClass*    CurrentFactory;
    uint32_t         unknown_10;
    int32_t          Progress;
    int32_t          FlashEndFrame;

    CameoDataStruct() noexcept
        : ItemIndex(-1), ItemType(AbstractType::None), IsAlt(false),
          CurrentFactory(nullptr), unknown_10(0), Progress(0), FlashEndFrame(0) {}

    CameoDataStruct(int32_t itemIndex, AbstractType itemType) noexcept
        : ItemIndex(itemIndex), ItemType(itemType), IsAlt(false),
          CurrentFactory(nullptr), unknown_10(0), Progress(0), FlashEndFrame(0) {}

    bool operator==(const CameoDataStruct& rhs) const noexcept
    {
        return ItemIndex == rhs.ItemIndex && ItemType == rhs.ItemType;
    }

    bool operator!=(const CameoDataStruct& rhs) const noexcept
    {
        return ItemIndex != rhs.ItemIndex || ItemType != rhs.ItemType;
    }
};

struct TabDataStruct
{
    int32_t          Progress;
    bool             AllowedToDraw;
    uint8_t          padding_01[3];
    Point2D          Location;
    RectangleStruct  Bounds;
    int32_t          Index;
    bool             NeedsRedraw;
    uint8_t          unknown_3D;
    uint8_t          unknown_3E;
    uint8_t          unknown_3F;
    uint32_t         unknown_40;
    int32_t          TopRowIndex;
    uint32_t         unknown_48;
    uint32_t         unknown_4C;
    uint32_t         unknown_50;
    int32_t          CameoCount;
    CameoDataStruct  Cameos[kMaxCameosPerTab];
};

class SidebarClass : public PowerClass
{
public:
    static SidebarClass* Instance;

    static constexpr uint32_t kTooltipBufferSize = 0x42;
    static wchar_t TooltipBuffer[kTooltipBufferSize];

    virtual ~SidebarClass() = default;

    virtual void Draw(uint32_t flags) override {}
    virtual bool OnTabClick(int32_t tabIndex) { return false; }

    void SidebarNeedsRepaint(int32_t mode = 0);
    bool AddCameo(AbstractType absType, int32_t idxType);
    void RepaintSidebar(int32_t tab = 0);
    void RedrawSidebar(int32_t mode);

    static int32_t GetObjectTabIdx(AbstractType absType, int32_t idxType, int32_t unused);
    static int32_t GetObjectTabIdx(AbstractType absType, BuildCat buildCat, bool isNaval);

    TabDataStruct    Tabs[kMaxTabs];
    uint32_t         unknown_5394;
    uint32_t         unknown_5398;
    int32_t          ActiveTabIndex;
    uint32_t         unknown_53A0;
    bool             HideObjectNameInTooltip;
    bool             unknown_bool_53A5;
    bool             SidebarNeedsRedraw;
    bool             SidebarBackgroundNeedsRedraw;
    bool             unknown_bool_53A8;

    HouseClass*      DiplomacyHouses[kMaxDiplomacyHouses];
    int32_t          DiplomacyKills[kMaxDiplomacyHouses];
    int32_t          DiplomacyOwned[kMaxDiplomacyHouses];
    int32_t          DiplomacyPowerDrain[kMaxDiplomacyHouses];
    ColorScheme*     DiplomacyColors[kMaxDiplomacyHouses];
    uint32_t         Diplomacy_unknown_544C[kMaxDiplomacyHouses];
    uint32_t         Diplomacy_unknown_546C[kMaxDiplomacyHouses];
    uint32_t         Diplomacy_unknown_548C[kMaxDiplomacyHouses];
    uint32_t         Diplomacy_unknown_54AC[kMaxDiplomacyHouses];
    uint32_t         Diplomacy_unknown_54CC[kMaxDiplomacyHouses];
    uint32_t         Diplomacy_unknown_54EC[kMaxDiplomacyHouses];
    uint8_t          Diplomacy_byte_550C;
    int32_t          DiplomacyNumHouses;

    bool             unknown_bool_5514;
    bool             unknown_bool_5515;
    uint8_t          padding_5516[2];

    SuperClass*      CurrentSuperWeapon;

    // TODO: complete SidebarClass members (strip class ref, etc)

protected:
    SidebarClass() = default;
};

} // namespace gamemd
