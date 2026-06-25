#include "structure/aircraft.hpp"

#include <cstring>
#include <cmath>

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
    enum { VALIDATE_AZ, PICK_LOCATION, TAKEOFF, FLY_TO, FIRE1, FIRE2, RTB };

    switch (missionStatus)
    {
    case VALIDATE_AZ:
        if (!target)
        {
            missionStatus = RTB;
        }
        else
        {
            missionStatus = PICK_LOCATION;
        }
        return 5;

    case PICK_LOCATION:
        if (!target)
        {
            missionStatus = RTB;
        }
        else
        {
            // Pick good fire location
            if (movementDestination)
                missionStatus = TAKEOFF;
            else
                missionStatus = RTB;
        }
        return 5;

    case TAKEOFF:
        if (!target)
        {
            missionStatus = RTB;
            return 5;
        }
        missionStatus = FLY_TO;
        return 5;

    case FLY_TO:
        if (!target)
        {
            missionStatus = RTB;
            return 5;
        }
        missionStatus = FIRE1;
        return 5;

    case FIRE1:
    {
        if (!target || !IsCloseEnoughToAttack(target))
        {
            missionStatus = PICK_LOCATION;
            return 5;
        }

        auto fire_err = GetFireError(target, 0, false);
        if ((int)(fire_err) == (int)(gamemd::FireError::NONE))
        {
            Fire(target, 0);
            missionStatus = FIRE2;
        }
        else if ((int)(fire_err) == (int)(gamemd::FireError::CLOAKED))
        {
            Uncloak(true);
        }
        else if ((int)(fire_err) == (int)(gamemd::FireError::AMMO))
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
        if ((int)(fire_err) == (int)(gamemd::FireError::NONE))
        {
            Fire(target, 0);
            if (ammo > 0)
                missionStatus = FIRE1;
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
        if (ammo <= 0)
            target = nullptr;
        movementDestination = nullptr;
        queueMission((ra2::game::Mission)((int)(gamemd::Mission::Return)), true);
        return 10;
    }

    return 10;
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

// IDA: 0x4151E0 (Mission_Unload_full, 1015B)
int AircraftClass::Mission_Unload()
{
    // Paradrop troops / unload cargo
    if (!HasPassengers)
        return 0;

    HasPassengers = false;
    return 5;
}

// IDA: 0x414A80 (ProcessMissionTimeout, 302B)
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
    // Enter building/helipad for docking
    return 10;
}

// IDA: 0x419C80 (Mission_Transport, 1215B)
// 0x419c80
int AircraftClass::Mission_Transport()
{
    // Transport mission (carryall logic)
    return 10;
}

// IDA: 0x4190B0 (MissionDispatch, 1147B)
// 0x4190b0
int AircraftClass::MissionDispatch()
{
    // Dispatch to correct mission handler based on current mission
    // IDA: checks current_mission field against 7 mission types
    return FootClass::MissionDispatch();
}

// ============================================================
// Phase 3: Flight Paths
// ============================================================

// IDA: 0x414310 (MoveTo, 406B)
// 0x414310
int AircraftClass::MoveTo()
{
    // Move aircraft to target coordinates via flight path
    if (!Type) return 0;

    // Process flight path movement
    // Check altitude, speed, waypoints
    return 0;
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
    // Process landing sequence
    if (!Type) return 0;

    // Decrease altitude, align with landing pad
    // When at ground level, complete landing
    return 0;
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
    // Return to base (helipad/airfield)
    if (!Type) return 0;

    // Fly toward home airfield
    // When close enough, begin landing
    return 0;
}

// IDA: 0x41A590 (CheckLandingClearance, 33B)
int AircraftClass::CheckLandingClearance()
{
    // Check landing area is clear
    return 0;
}

// IDA: 0x4151E0 (Mission_Unload_full, 1015B)
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
    // Eject passengers from aircraft
    HasPassengers = false;
    return 0;
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

// IDA: 0x41ADF0 (ProcessDockCheck, 37B)
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

// IDA: 0x41C010 (CheckReloadState, 7B)
int AircraftClass::CheckReloadState()
{
    // Check reload state
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

int AircraftClass::PowerDrainUpdate(int a2)
{
    // Per-frame power for aircraft (vt13). a2 is the COM-stub context, unused.
    return 0;
}

// IDA: 0x41B660 (HandleTargetDestroyed, 56B)
// 0x41b660
int AircraftClass::HandleTargetDestroyed()
{
    // Handle when target is destroyed
    target = nullptr;
    return 0;
}

// IDA: 0x414A80 (ProcessMissionTimeout, 302B)
// 0x414a80
int AircraftClass::ProcessMissionTimeout()
{
    // Process mission timeout for aircraft
    return 0;
}

// IDA: 0x41A5C0 (GetMissionTimer, 886B)
// 0x41a5c0
int AircraftClass::GetMissionTimer()
{
    // Get mission timer value
    return 100;
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
    // Clean up aircraft resources
    Type = nullptr;
}

// ============================================================
// Phase 3: Cursor & State
// ============================================================

// IDA: 0x417CC0 (GetCursorOverObject, 692B)
int AircraftClass::GetCursorOverObject()
{
    // Get cursor type when hovering over this aircraft
    return 0;
}

// IDA: 0x41B920 (IsHeightAboveThreshold, 83B)
// 0x41b920
int AircraftClass::IsHeightAboveThreshold()
{
    // Check if aircraft is above height threshold
    return 1;
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

bool AircraftClass::StubReturnFalse2() { return false; }
bool AircraftClass::StubReturnFalse3() { return false; }
bool AircraftClass::StubReturnFalse4() { return false; }
bool AircraftClass::StubReturnTrue()  { return true; }
int AircraftClass::MissionStubReturnZero()  { return 0; }
int AircraftClass::MissionStubReturnZero2() { return 0; }
int AircraftClass::MissionStubReturnZero3() { return 0; }

// ============================================================
// Phase 3: Drawing
// ============================================================

void AircraftClass::Draw(Point2D* screen_pos, RectangleStruct* bounds) const
{
    if (!screen_pos || !Type)
        return;

    (void)bounds;
}

void AircraftClass::DrawShadow(Point2D* screen_pos, RectangleStruct* bounds) const
{
    (void)screen_pos;
    (void)bounds;
}

void AircraftClass::DrawJetExhaust(Point2D* screen_pos) const
{
    (void)screen_pos;
}

} // namespace gamemd

#include "structure/aircraft.hpp"

namespace gamemd {

// --- StageClass ---

int __stdcall StageClass::Landing_Altitude() { return 0; }
int __stdcall StageClass::Landing_Direction() { return 0; }
long __stdcall StageClass::Is_Loaded() { return 0; }
long __stdcall StageClass::Is_Strafe() { return 0; }
long __stdcall StageClass::Is_Fighter() { return 0; }
long __stdcall StageClass::Is_Locked() { return 0; }

// --- AircraftClass ---

int __stdcall AircraftClass::Landing_Altitude() { return 0; }
int __stdcall AircraftClass::Landing_Direction() { return 0; }
long __stdcall AircraftClass::Is_Loaded() { return 0; }
long __stdcall AircraftClass::Is_Strafe() { return 0; }
long __stdcall AircraftClass::Is_Fighter() { return 0; }
long __stdcall AircraftClass::Is_Locked() { return 0; }
HRESULT __stdcall AircraftClass::QueryInterface(const IID& iid, void** ppvObject) { return E_NOINTERFACE; }
ULONG __stdcall AircraftClass::AddRef() { return 0; }
ULONG __stdcall AircraftClass::Release() { return 0; }
HRESULT __stdcall AircraftClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
HRESULT __stdcall AircraftClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall AircraftClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall AircraftClass::whatAmI() const { return kObjectTypeId; }
int AircraftClass::objectSize() const { return sizeof(AircraftClass); }

} // namespace gamemd
