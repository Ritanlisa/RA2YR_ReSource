#include "entity/tube.hpp"
#include "core/vector.hpp"

namespace gamemd
{

namespace {

constexpr uint32_t kTubeFlag = 0x35u;

} // anonymous namespace

TubeClass::TubeClass() noexcept
{
    field_AC = 0;
    field_B0 = 0;
    field_B4 = 0;
    field_B8 = 0;
    field_BC = 0;
    field_C0 = 0;
    field_C4 = 0;

    abstractFlags = kTubeFlag;

    // TODO: complete implementation
    // - Tubes are tunnel/wormhole path connectors
}

} // namespace gamemd
