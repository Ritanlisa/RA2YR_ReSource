#include "gamemd/structure/unit.hpp"

#include <cstring>

namespace gamemd {

namespace {

constexpr uint32_t kUnitFlag = static_cast<uint32_t>(AbstractFlags::Foot)
                              | static_cast<uint32_t>(AbstractFlags::Object)
                              | static_cast<uint32_t>(AbstractFlags::Techno);

} // anonymous namespace

UnitClass::UnitClass() noexcept
    : unknown_int_6C0(0)
    , Type(nullptr)
    , FollowerCar(nullptr)
    , FlagHouseIndex(-1)
    , HasFollowerCar(false)
    , Unloading(false)
    , unknown_bool_6D2(false)
    , TerrainPalette(false)
    , unknown_int_6D4(0)
    , DeathFrameCounter(0)
    , ElectricBolt(nullptr)
    , Deployed(false)
    , Deploying(false)
    , Undeploying(false)
    , NonPassengerCount(0)
{
    std::memset(ToolTipText, 0, sizeof(ToolTipText));

    m_abstract_flags = kUnitFlag;
}

} // namespace gamemd
