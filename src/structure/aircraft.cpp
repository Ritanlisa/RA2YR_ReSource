#include "gamemd/structure/aircraft.hpp"

namespace gamemd {

namespace {

constexpr uint32_t kAircraftFlag = static_cast<uint32_t>(AbstractFlags::Foot)
                                  | static_cast<uint32_t>(AbstractFlags::Object)
                                  | static_cast<uint32_t>(AbstractFlags::Techno);

} // anonymous namespace

AircraftClass::AircraftClass() noexcept
    : Type(nullptr)
    , unknown_bool_6C8(false)
    , HasPassengers(false)
    , IsKamikaze(false)
    , unknown_6CC(0)
    , unknown_bool_6D0(false)
    , unknown_bool_6D1(false)
    , unknown_bool_6D2(false)
    , unknown_char_6D3(0)
    , unknown_bool_6D4(false)
    , unknown_bool_6D5(false)
{
    m_abstract_flags = kAircraftFlag;
}

} // namespace gamemd
