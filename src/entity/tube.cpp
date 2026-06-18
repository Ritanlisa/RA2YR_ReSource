#include "entity/tube.hpp"
#include "core/vector.hpp"

namespace gamemd
{

namespace {

constexpr uint32_t kTubeFlag = 0x35u;

} // anonymous namespace

TubeClass::TubeClass() noexcept
{
    TubeClass_field_AC = 0;
    TubeClass_field_B0 = 0;
    TubeClass_field_B4 = 0;
    TubeClass_field_B8 = 0;
    TubeClass_field_BC = 0;
    TubeClass_field_C0 = 0;
    TubeClass_field_C4 = 0;

    abstractFlags = kTubeFlag;
}

} // namespace gamemd
