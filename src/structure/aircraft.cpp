#include "structure/aircraft.hpp"

namespace gamemd {

namespace {

constexpr uint32_t kAircraftFlag = static_cast<uint32_t>(AbstractFlags::Foot)
                                  | static_cast<uint32_t>(AbstractFlags::Object)
                                  | static_cast<uint32_t>(AbstractFlags::Techno);

} // anonymous namespace

// IDA: 0x413D20 -- AircraftClass::Construct (593B)
// Fields at byte offsets 0x6C4-0x6D5 from full object base
// Note: AircraftClass has 5 vtables (FootClass base + FlasherClass at +0x6C0)
AircraftClass::AircraftClass() noexcept
    : Type(nullptr)              // +0x6C4, set by constructor parameter in IDA
    , AircraftClass_field_bool_6C8(false)    // +0x6C8, IDA: *(BYTE*)(this+0x6C8) = 0
    , HasPassengers(false)       // +0x6C9, IDA: *(BYTE*)(this+0x6C9) = 0
    , IsKamikaze(false)          // +0x6CA, IDA: *(BYTE*)(this+0x6CA) = 0
    , AircraftClass_field_6CC(0)             // +0x6CC, IDA: *(this+0x6CC) = 0
    , AircraftClass_field_bool_6D0(false)    // +0x6D0, IDA: *(BYTE*)(this+0x6D0) = 0
    , AircraftClass_field_bool_6D1(false)    // +0x6D1, IDA: *(BYTE*)(this+0x6D1) = 0
    , AircraftClass_field_bool_6D2(false)    // +0x6D2, IDA: *(BYTE*)(this+0x6D2) = 0
    , AircraftClass_field_char_6D3(5)        // +0x6D3, IDA: *(BYTE*)(this+0x6D3) = 5
    , AircraftClass_field_bool_6D4(true)     // +0x6D4, IDA: *(BYTE*)(this+0x6D4) = 1
    , AircraftClass_field_bool_6D5(true)     // +0x6D5, IDA: *(BYTE*)(this+0x6D5) = 1
{
    abstractFlags = kAircraftFlag;
}

// ============================================================
// Mission_Attack -- RA1 7-state attack pattern
// States: VALIDATE=0->PICK=1->TAKEOFF=2->FLY=3->FIRE1=4->FIRE2=5->RTB=6
// Fixed-wing aircraft delegate to Mission_Hunt (strafing runs)
// ============================================================
int AircraftClass::Mission_Attack()
{
    enum { VALIDATE_AZ, PICK_LOCATION, TAKEOFF, FLY_TO, FIRE1, FIRE2, RTB };

    switch (missionStatus)
    {
    case VALIDATE_AZ:
    {
        if (!target)
        {
            missionStatus = RTB;
        }
        else
        {
            missionStatus = PICK_LOCATION;
        }
        return 5;
    }

    case PICK_LOCATION:
    {
        if (!target)
        {
            missionStatus = RTB;
        }
        else
        {
            // Pick good fire location = Good_Fire_Location(TarCom)
            // movementDestination = GoodFireLocation(target);
            if (movementDestination)
                missionStatus = TAKEOFF;
            else
                missionStatus = RTB;
        }
        return 5;
    }

    case TAKEOFF:
    {
        if (!target)
        {
            missionStatus = RTB;
            return 5;
        }

        // Take off from helipad
        // if (ProcessTakeOff()) {
        //     // Break radio contact with helipad
        //     missionStatus = FLY_TO;
        // }
        missionStatus = FLY_TO;
        return 5;
    }

    case FLY_TO:
    {
        if (!target)
        {
            missionStatus = RTB;
            return 5;
        }

        // Fly toward attack position
        // int dist = Process_Fly_To(true, NavCom);
        // if (dist < 0x0200) {
        //     SetFacing(Direction(TarCom));
        //     if (dist < 0x0010) {
        //         missionStatus = FIRE1;
        //         movementDestination = nullptr;
        //     }
        // }
        missionStatus = FIRE1;
        return 5;
    }

    case FIRE1:
    {
        if (!target || !IsCloseEnoughToAttack(target))
        {
            missionStatus = PICK_LOCATION;
            return 5;
        }

        // Attempt to fire primary weapon
        auto fire_err = GetFireError(target, 0, false);
        if (static_cast<int>(fire_err) == static_cast<int>(gamemd::FireError::NONE))
        {
            Fire(target, 0);
            missionStatus = FIRE2;
        }
        else if (static_cast<int>(fire_err) == static_cast<int>(gamemd::FireError::CLOAKED))
        {
            Uncloak(true);
        }
        else if (static_cast<int>(fire_err) == static_cast<int>(gamemd::FireError::AMMO))
        {
            missionStatus = RTB;
        }
        return 5;
    }

    case FIRE2:
    {
        if (!target || !IsCloseEnoughToAttack(target))
        {
            missionStatus = PICK_LOCATION;
            return 5;
        }

        auto fire_err = GetFireError(target, 0, false);
        if (static_cast<int>(fire_err) == static_cast<int>(gamemd::FireError::NONE))
        {
            Fire(target, 0);
            if (ammo > 0)
                missionStatus = FIRE1; // Loop back for next pass
            else
                missionStatus = RTB;
        }
        else
        {
            if (ammo <= 0)
                missionStatus = RTB;
            else
                missionStatus = PICK_LOCATION;
        }
        return 5;
    }

    case RTB:
    {
        // Return to base
        if (ammo <= 0)
            target = nullptr;
        movementDestination = nullptr;
                queueMission(static_cast<ra2::game::Mission>(static_cast<int>(gamemd::Mission::Return)), true);;
        return 10;
    }
    }

    return 10;
}

int AircraftClass::Mission_Return()
{
    // Return to home airfield for reloading/repair
    // RA1: locate home helipad/airstrip, fly landing pattern
    // Process_Fly_To(airfield_coords) -> Process_Landing()
    // On landing: RADIO_IM_IN -> RADIO_ROGER (guard) or RADIO_ATTACH (attach+limbo)

    // if (!HasHomeAirfield) {
    //     queueMission(Mission::Guard, true);
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
    // for each passenger in passengers:
    //     passenger->HasParachute = true;
    //     passenger->Unlimbo(eject_coord);
    //     passenger->Scatter(0, true);

    HasPassengers = false;
    return 5;
}

int AircraftClass::Mission_Hunt()
{
    // Scan for enemies in flight range
    // If target found -> switch to Mission_Attack
    SelectAutoTarget(static_cast<ra2::game::TargetFlags>(0), 0, false);
    if (target)
    {
        queueMission(static_cast<ra2::game::Mission>(static_cast<int>(gamemd::Mission::Attack)), true);
        return 30;
    }

    return 30;
}

int AircraftClass::Mission_Retreat()
{
    // Flee from threats, return to base at high speed
    movementDestination = nullptr;
            queueMission(static_cast<ra2::game::Mission>(static_cast<int>(gamemd::Mission::Return)), true);;
    return 10;
}

// ============================================================
// AircraftClass_Update -- vtable[9] (IDA 0x413F80, 241B)
// Per-frame update: calls TechnoClass_Update -> power drain
// Checks Type(this+1732) -> House_PowerChanged -> power output
// Updates power fields from Type members (this+108/112/764)
// Delegates to BuildingClass_PowerUpdate(C4AppliedBy)
// ============================================================

// ============================================================
// AircraftClass_LoadFromStream -- vtable[5] (IDA 0x41B430, 395B)
// COM IPersistStream::Load for aircraft deserialization
// ============================================================

} // namespace gamemd
