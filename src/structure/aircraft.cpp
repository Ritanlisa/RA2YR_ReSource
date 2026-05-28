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

int AircraftClass::Mission_Attack()
{
    auto* target = m_target;
    if (!target)
        return 0;

    if (!IsCloseEnoughToAttack(target))
    {
        // Fly toward target for bombing/strafing run
        m_destination = target;
        return 0;
    }

    // Fire at target
    int weapon_idx = SelectWeapon(target);
    Fire(target, weapon_idx);

    return 0;
}

int AircraftClass::Mission_Return()
{
    // Return to airfield for reloading/repair
    // TODO: locate home airfield, fly to it, land
    return 10;
}

int AircraftClass::Mission_Unload()
{
    // Paradrop troops / unload cargo
    if (!HasPassengers)
        return 0;

    // TODO: eject passengers with parachutes
    return 5;
}

int AircraftClass::Mission_Hunt()
{
    // Scan for enemies in flight range
    return 30;
}

int AircraftClass::Mission_Retreat()
{
    // Flee from threats, return to base
    return 10;
}

} // namespace gamemd
