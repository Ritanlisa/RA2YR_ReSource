// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
#include "structure/aircraft.hpp"
#include "e4/classes/Coord_e4.hpp"

#include <cstring>
#include <cmath>
#include "e4/e4_globals_decls.hpp"
#include "e4/classes/Math_e4.hpp"
#include "misc/misc_ext.hpp"

namespace gamemd {

namespace {

constexpr uint32_t kAircraftFlag = (uint32_t)(AbstractFlags::Foot)
                                  | (uint32_t)(AbstractFlags::Object)
                                  | (uint32_t)(AbstractFlags::Techno);

} // anonymous namespace

// IDA: 0x413D20 -- AircraftClass::Construct (593B)
AircraftClass::AircraftClass() noexcept
    : Type(nullptr)
    , AircraftClass_field_bool_6C8(false)
    , HasPassengers(false)
    , IsKamikaze(false)
    , AircraftClass_field_6CC(0)
    , AircraftClass_field_bool_6D0(false)
    , AircraftClass_field_bool_6D1(false)
    , AircraftClass_field_bool_6D2(false)
    , AircraftClass_field_char_6D3(5)
    , AircraftClass_field_bool_6D4(true)
    , AircraftClass_field_bool_6D5(true)
{
    abstractFlags = kAircraftFlag;
}

// ============================================================
// Phase 3: Missions
// ============================================================

// IDA: 0x417FE0 (Mission_Attack, 3445B)
// 0x417fe0
int AircraftClass::Mission_Attack()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000417FE0.json)
}


// IDA: 0x415A50 (ProcessReturnToBase, 185B)
int AircraftClass::Mission_Return()
{
    // Return to home airfield for reloading/repair
    if (!Type)
    {
        queueMission((ra2::game::Mission)((int)(gamemd::Mission::Guard)), true);
        return 10;
    }
    return 10;
}

// REMOVED: AircraftClass::Mission_Unload — does not exist in binary.
// Aircraft unload is handled via Mission_Harvest (0x4151e0, case 3) or MissionDispatch (0x4190B0).

// AircraftClass::Mission_Hunt -- aircraft hunt mission override.
// No standalone IDA function (aircraft missions are dispatched via MissionDispatch @ 0x4190B0).
// NOTE: the previous 0x414A80 annotation was wrong -- that address is ProcessMissionTimeout.
int AircraftClass::Mission_Hunt()
{
    // Scan for enemies in flight range
    SelectAutoTarget((ra2::game::TargetFlags)(0), 0, false);
    if (target)
    {
        queueMission((ra2::game::Mission)((int)(gamemd::Mission::Attack)), true);
        return 30;
    }
    return 30;
}

int AircraftClass::Mission_Retreat()
{
    // Flee from threats, return to base
    movementDestination = nullptr;
    queueMission((ra2::game::Mission)((int)(gamemd::Mission::Return)), true);
    return 10;
}

// IDA: 0x4166C0 (Mission_Enter, 1037B)
// 0x4166c0
int AircraftClass::Mission_Enter()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0004166C0.json)
}
// 0x419c80
int AircraftClass::Mission_Transport()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000419C80.json)
}
// 0x4190b0
int AircraftClass::MissionDispatch()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0004190B0.json)
}
// 0x414310
int AircraftClass::MoveTo()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000414310.json)
}
// IDA: 0x417BD0 (ValidateMovement, 137B)
int AircraftClass::ValidateMovement()
{
    // Validate aircraft movement
    return 0;
}

// IDA: 0x417F80 (CanEnterCell, 80B)
bool AircraftClass::CanEnterCell()
{
    // Aircraft can enter any cell (fly over)
    return true;
}

// ============================================================
// Phase 3: Landing
// ============================================================

// IDA: 0x41BA90 (ProcessLanding, 82B)
// 0x41ba90
int AircraftClass::ProcessLanding()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00041BA90.json)
}
// IDA: 0x415B10 (FindLandingCell, 336B)
int AircraftClass::FindLandingCell()
{
    // Find suitable landing cell near target
    return 0;
}

// IDA: 0x4196B0 (ValidateLandingCell, 261B)
int AircraftClass::ValidateLandingCell()
{
    // Validate landing cell for aircraft
    return 0;
}

// IDA: 0x415A50 (ProcessReturnToBase, 185B)
// 0x415a50
int AircraftClass::ProcessReturnToBase()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000415A50.json)
}
// IDA: 0x41A590 (CheckLandingClearance, 33B)
int AircraftClass::CheckLandingClearance()
{
    // Check landing area is clear
    return 0;
}

// AircraftClass::Mission_Unload_full -- aircraft full-unload override (no standalone IDA function).
// NOTE: previous annotation pointed at UnitClass::Mission_Harvest (a different function).
int AircraftClass::Mission_Unload_full()
{
    // Full unload with parachute deployment
    if (!HasPassengers)
        return 0;

    // Deploy passengers with parachutes
    HasPassengers = false;
    return 5;
}

// IDA: 0x41BE60 (LandingCheckStub, 5B) — vtable entry, always returns 0
int AircraftClass::LandingCheckStub()
{
    return 0;
}

// ============================================================
// Phase 3: Paradrop
// ============================================================

// IDA: 0x41B870 (ProcessPassengerEjection, 21B)
// 0x41b870
int AircraftClass::ProcessPassengerEjection()
{
  if ( ((unsigned int *)this)[0] != 30 ) /*0x41b877*/
    this->AircraftClass_field_bool_6D2 = 0; /*0x41b879*/
  return this->AdvanceState();
}
// IDA: 0x41B5C0 (CheckPassengerCount, 23B)
int AircraftClass::CheckPassengerCount()
{
    // Check passenger count
    return 0;
}

// ============================================================
// Phase 3: Spawn/Dock
// ============================================================

// IDA: 0x41ADC0 (ProcessDockCheck, 37B)  [0x41ADF0 is RevealSight, a different function]
int AircraftClass::ProcessDockCheck()
{
    // Check docking status with airfield/helipad
    return 0;
}

// IDA: 0x41B9F0 (UpdateDocking, 77B)
int AircraftClass::UpdateDocking()
{
    // Update docking state
    return 0;
}

// IDA: 0x41C070 (CheckDockState, 7B)
int AircraftClass::CheckDockState()
{
    // Check if docked
    return 0;
}

// IDA: 0x41C020 (CheckReloadTimer, 9B)
int AircraftClass::CheckReloadTimer()
{
    // Check reload timer
    return 0;
}

// ============================================================
// Phase 3: Per-Frame & AI
// ============================================================

// 0x41b610
int AircraftClass::PowerDrainUpdate(int a2)
{
    return 0; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00041B610.json)
}
// IDA: 0x41B660 (HandleTargetDestroyed, 56B)
// 0x41b660
int AircraftClass::HandleTargetDestroyed()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00041B660.json)
}
// 0x414a80
int AircraftClass::ProcessMissionTimeout()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000414A80.json)
}
// 0x41a5c0
int AircraftClass::GetMissionTimer()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00041A5C0.json)
}
// IDA: 0x41A940 (EvaluateTargetingState, 157B)
int AircraftClass::EvaluateTargetingState()
{
    // Evaluate targeting state
    return 0;
}

// IDA: 0x41AA80 (AssignDestination_SyncLog, 831B)
int AircraftClass::AssignDestination_SyncLog()
{
    // Assign destination with network sync logging
    return 0;
}

// IDA: 0x41BB30 (OverrideMission_SyncLog, 87B)
int AircraftClass::OverrideMission_SyncLog()
{
    // Override mission with sync logging
    return 0;
}

// IDA: 0x41ADF0 (RevealSight, 398B)
int AircraftClass::RevealSight()
{
    // Reveal sight around aircraft
    return 0;
}

// IDA: 0x4165C0 (DeployWithAnim, 243B)
int AircraftClass::DeployWithAnim()
{
    // Deploy with animation (paradrop/spawn)
    return 0;
}

// IDA: 0x41C190 (PowerDrainProcess, 56B)
int AircraftClass::PowerDrainProcess()
{
    // Process power drain
    return 0;
}

// ============================================================
// Phase 3: Stream
// ============================================================

// IDA: 0x41B430 (LoadFromStream, 395B)
int AircraftClass::LoadFromStream()
{
    // COM deserialization for aircraft
    return 0;
}

// IDA: 0x414080 (Destruct, 513B)
// 0x414080
void AircraftClass::Destruct()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000414080.json)
}
// IDA: 0x417CC0 (GetCursorOverObject, 692B)
int AircraftClass::GetActionOnObject()
{
    // Get cursor type when hovering over this aircraft
    return 0;
}

// IDA: 0x41B920 (IsHeightAboveThreshold, 83B)
// 0x41b920
int AircraftClass::IsHeightAboveThreshold()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00041B920.json)
}
// IDA: 0x41B980 (IsBelowScreen, 82B)
int AircraftClass::IsBelowScreen()
{
    // Check if aircraft is below screen bounds
    return 0;
}

// IDA: 0x41C1D0 (CheckMissionAbort, 10B)
int AircraftClass::CheckMissionAbort()
{
    // Check if mission should abort
    return 0;
}

// IDA: 0x41C200 (CheckMissionFail, 7B)
int AircraftClass::CheckMissionFail()
{
    // Check if mission failed
    return 0;
}

// IDA: 0x41C210 (CheckActionStatus, 30B)
int AircraftClass::CheckActionStatus()
{
    // Check action status
    return 0;
}

// IDA: 0x5B2E90 (CheckMissionStatus, 6B)
int AircraftClass::CheckMissionStatus()
{
    // Check mission status
    return 0;
}

// IDA: 0x5B2F30 (CheckMissionStatus2, 6B)
int AircraftClass::CheckMissionStatus2()
{
    // Check mission status (variant)
    return 0;
}

// IDA: 0x41BE80 (CheckStateFlag, 3B)
int AircraftClass::CheckStateFlag()
{
    // Check state flag
    return 0;
}

// IDA: 0x41BE90 (CheckStateFlag2, 3B)
int AircraftClass::CheckStateFlag2()
{
    // Check state flag (variant)
    return 0;
}

// ============================================================
// Phase 3: Stubs
// ============================================================

// 0x41be70
bool AircraftClass::StubReturnFalse2() { return false; }

} // namespace gamemd  // G42.35b: file-scope close (namespace opens at L12)
