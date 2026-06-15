#include "entity/tube.hpp"
#include "core/vector.hpp"

namespace gamemd
{

namespace {

constexpr uint32_t kTubeFlag = 0x35u;

} // anonymous namespace

TubeClass::TubeClass() noexcept
{
    unknown_AC = 0;
    unknown_B0 = 0;
    unknown_B4 = 0;
    unknown_B8 = 0;
    unknown_BC = 0;
    unknown_C0 = 0;
    unknown_C4 = 0;

    abstractFlags = kTubeFlag;

    // TODO: complete implementation
    // - Tubes are tunnel/wormhole path connectors
}

} // namespace gamemd
