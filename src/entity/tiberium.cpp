#include "entity/tiberium.hpp"
#include "type/overlay_type.hpp"
#include "type/anim_type.hpp"
#include "core/vector.hpp"

#include <cstring>

namespace gamemd
{
namespace {

constexpr uint32_t kTiberiumFlag = 0x2Eu;

} // anonymous namespace

TiberiumClass::TiberiumClass(const CellStruct& cell,
                             int spread, int growth,
                             int value, int power) noexcept
{
    ArrayIndex        = 0;
    Spread            = spread;
    SpreadPercentage  = 0.0;
    Growth            = growth;
    GrowthPercentage  = 0.0;
    Value             = value;
    Power             = power;
    Color             = 0;

    std::memset(&Debris, 0, sizeof(Debris));

    Image      = nullptr;
    NumFrames  = 0;
    NumImages  = 0;
    field_EC   = 0;
    field_F0   = 0;
    field_F4   = 0;
    field_F8   = 0;
    field_FC   = 0;

    std::memset(&SpreadTimer, 0, sizeof(SpreadTimer));
    std::memset(&GrowthTimer, 0, sizeof(GrowthTimer));

    field_10C  = 0;
    field_110  = 0;
    field_114  = 0;
    field_118  = 0;

    abstractFlags = kTiberiumFlag;

    // TODO: complete implementation
    // - Register with owning cell
    // - Initialize tib growth/spread timers
}

} // namespace gamemd
