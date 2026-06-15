#include "gamemd/entity/tube.hpp"
#include "gamemd/core/vector.hpp"

namespace gamemd
{

namespace {

constexpr uint32_t kTubeFlag = 0x35u;

} // anonymous namespace

TubeClass::TubeClass() noexcept
{
    tubeField_AC = 0;
    tubeField_B0 = 0;
    tubeField_B4 = 0;
    tubeField_B8 = 0;
    tubeField_BC = 0;
    tubeField_C0 = 0;
    tubeField_C4 = 0;

    m_abstract_flags = kTubeFlag;

    // TODO: complete implementation
    // - Tubes are tunnel/wormhole path connectors
}

} // namespace gamemd
