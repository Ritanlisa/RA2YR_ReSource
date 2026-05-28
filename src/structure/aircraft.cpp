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

// ============================================================
// Mission_Attack — RA1 7-state attack pattern
// States: VALIDATE=0→PICK=1→TAKEOFF=2→FLY=3→FIRE1=4→FIRE2=5→RTB=6
// Fixed-wing aircraft delegate to Mission_Hunt (strafing runs)
// ============================================================
int AircraftClass::Mission_Attack()
{
    enum { VALIDATE_AZ, PICK_LOCATION, TAKEOFF, FLY_TO, FIRE1, FIRE2, RTB };

    switch (m_mission_status)
    {
    case VALIDATE_AZ:
    {
        if (!m_target)
        {
            m_mission_status = RTB;
        }
        else
        {
            m_mission_status = PICK_LOCATION;
        }
        return 5;
    }

    case PICK_LOCATION:
    {
        if (!m_target)
        {
            m_mission_status = RTB;
        }
        else
        {
            // Pick good fire location = Good_Fire_Location(TarCom)
            // m_destination = GoodFireLocation(m_target);
            if (m_destination)
                m_mission_status = TAKEOFF;
            else
                m_mission_status = RTB;
        }
        return 5;
    }

    case TAKEOFF:
    {
        if (!m_target)
        {
            m_mission_status = RTB;
            return 5;
        }

        // Take off from helipad
        // if (ProcessTakeOff()) {
        //     // Break radio contact with helipad
        //     m_mission_status = FLY_TO;
        // }
        m_mission_status = FLY_TO;
        return 5;
    }

    case FLY_TO:
    {
        if (!m_target)
        {
            m_mission_status = RTB;
            return 5;
        }

        // Fly toward attack position
        // int dist = Process_Fly_To(true, NavCom);
        // if (dist < 0x0200) {
        //     SetFacing(Direction(TarCom));
        //     if (dist < 0x0010) {
        //         m_mission_status = FIRE1;
        //         m_destination = nullptr;
        //     }
        // }
        m_mission_status = FIRE1;
        return 5;
    }

    case FIRE1:
    {
        if (!m_target || !IsCloseEnoughToAttack(m_target))
        {
            m_mission_status = PICK_LOCATION;
            return 5;
        }

        // Attempt to fire primary weapon
        auto fire_err = GetFireError(m_target, 0, false);
        if (static_cast<int>(fire_err) == static_cast<int>(gamemd::FireError::NONE))
        {
            Fire(m_target, 0);
            m_mission_status = FIRE2;
        }
        else if (static_cast<int>(fire_err) == static_cast<int>(gamemd::FireError::CLOAKED))
        {
            Uncloak(true);
        }
        else if (static_cast<int>(fire_err) == static_cast<int>(gamemd::FireError::AMMO))
        {
            m_mission_status = RTB;
        }
        return 5;
    }

    case FIRE2:
    {
        if (!m_target || !IsCloseEnoughToAttack(m_target))
        {
            m_mission_status = PICK_LOCATION;
            return 5;
        }

        auto fire_err = GetFireError(m_target, 0, false);
        if (static_cast<int>(fire_err) == static_cast<int>(gamemd::FireError::NONE))
        {
            Fire(m_target, 0);
            if (m_ammo > 0)
                m_mission_status = FIRE1; // Loop back for next pass
            else
                m_mission_status = RTB;
        }
        else
        {
            if (m_ammo <= 0)
                m_mission_status = RTB;
            else
                m_mission_status = PICK_LOCATION;
        }
        return 5;
    }

    case RTB:
    {
        // Return to base
        if (m_ammo <= 0)
            m_target = nullptr;
        m_destination = nullptr;
                QueueMission(static_cast<ra2::game::Mission>(static_cast<int>(gamemd::Mission::Return)), true);;
        return 10;
    }
    }

    return 10;
}

int AircraftClass::Mission_Return()
{
    // Return to home airfield for reloading/repair
    // RA1: locate home helipad/airstrip, fly landing pattern
    // Process_Fly_To(airfield_coords) → Process_Landing()
    // On landing: RADIO_IM_IN → RADIO_ROGER (guard) or RADIO_ATTACH (attach+limbo)

    // if (!HasHomeAirfield) {
    //     QueueMission(Mission::Guard, true);
    //     return 10;
    // }
    return 10;
}

int AircraftClass::Mission_Unload()
{
    // Paradrop troops / unload cargo
    if (!HasPassengers)
        return 0;

    // Eject passengers with parachutes
    // for each passenger in m_passengers:
    //     passenger->HasParachute = true;
    //     passenger->Unlimbo(eject_coord);
    //     passenger->Scatter(0, true);

    HasPassengers = false;
    return 5;
}

int AircraftClass::Mission_Hunt()
{
    // Scan for enemies in flight range
    // If target found → switch to Mission_Attack
    SelectAutoTarget(static_cast<ra2::game::TargetFlags>(0), 0, false);
    if (m_target)
    {
        QueueMission(static_cast<ra2::game::Mission>(static_cast<int>(gamemd::Mission::Attack)), true);
        return 30;
    }

    return 30;
}

int AircraftClass::Mission_Retreat()
{
    // Flee from threats, return to base at high speed
    m_destination = nullptr;
            QueueMission(static_cast<ra2::game::Mission>(static_cast<int>(gamemd::Mission::Return)), true);;
    return 10;
}

} // namespace gamemd
