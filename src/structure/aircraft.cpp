// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
#include "structure/aircraft.hpp"
#include "e4/classes/Coord_e4.hpp"

#include <cstring>
#include <cmath>
#include "e4/e4_globals_decls.hpp"
#include "e4/classes/Math_e4.hpp"
#include "misc/misc_ext.hpp"
#include "ui/power.hpp"  // G42.42d: PowerClass FlagProcess/TimerProcess
#include "house/house.hpp"  // G42.42d: owner->IsHumanPlayer (CanEnterCell)
#include "system/cell.hpp"  // G42.42e: CellClass::FindOpenNeighbor (ProcessReturnToBase)
#include "e4/classes/Random_e4.hpp"  // G42.42e: Random::Range (ProcessMissionTimeout)
#include "team/team.hpp"  // G42.42e: TeamClass::LiberateMember (ProcessMissionTimeout)
#include "e4/classes/Cell_e4.hpp"  // G42.42f: CellClass::GetGroundHeight static (MoveTo)
#include "e4/classes/E4Recv_5785F0_e4.hpp"  // G42.42f: IsCoordVisibleMap (MoveTo)
#include "misc/locomotion.hpp"  // G42.42f: FacingClass::Set_SyncLog (MoveTo)

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
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00417FE0.json)
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
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004166C0.json)
} // G42.42d: pending full translation (offsets decoded; queue position 13)
// 0x419c80
int AircraftClass::Mission_Transport()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00419C80.json)
}
// 0x4190b0
int AircraftClass::MissionDispatch()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004190B0.json)
}
// 0x414310
// G42.42f FULL implementation (truth 0x414310): height-aware dispatch.
//   Non-autocarry types (Type+3432 == 0): loaners or invisible-map targets
//   add the type's max flight altitude (Type vt+188) onto ground height.
//   FootClass::DispatchInput acceptance drives the acceptance bookkeeping:
//   loaner re-flag (Type+560/+3594/SelectWeaponSlot rules), passengers flag,
//   secondary-facing sync (v8<<8), animation seed (dword_A8ED84) + the
//   destination Y, and the ascent-target compare (GetZAboveGround vs Type
//   vt+188) selecting the vt1348 float argument (0x3FE00000 = .5f else 0).
int AircraftClass::MoveTo(int* a2, int a3)
{
    int coord[3];
    coord[0] = a2[0];
    coord[1] = a2[1];
    coord[2] = a2[2];
    if (*(unsigned char *)((char *)Type + 3432) == 0)
    {
        if (isALoaner || !((E4Recv_5785F0 *)&dword_87F7E8)->IsCoordVisibleMap((void *)a2))
            coord[2] = (*(int (__thiscall **)(AircraftTypeClass *))(*(unsigned int **)Type + 188))(Type)
                     + Cell::GetGroundHeight((void *)a2);  // G42.42f: static (Cell_e4.hpp)
        else
            coord[2] = Cell::GetGroundHeight((void *)a2);
    }
    char v8 = (char)a3;
    if (FootClass::DispatchInput(coord, a3) != 0)
    {
        int slot = SelectWeaponSlot(0);
        if (*(unsigned char *)((char *)Type + 560) == 0
         || *(unsigned char *)((char *)Type + 3594) == 0
         || (slot != 0 && *(unsigned char *)(slot + 327) != 0))
        {
            isALoaner = true;
        }
        if (((int *)&passengers)[1] != 0)
            HasPassengers = true;
        unsigned int facingArg = (unsigned int)((unsigned char)v8 << 8);
        ((FacingClass *)&secondaryFacing)->Set_SyncLog(&facingArg);
        unsigned int *anim = (unsigned int *)&animation;
        anim[2] = dword_A8ED84;
        anim[5] = 1;
        anim[3] = coord[1];
        anim[4] = 1;
        anim[0] = 0;
        int maxHeight = (*(int (__thiscall **)(AircraftTypeClass *))(*(unsigned int **)Type + 188))(Type);
        if (GetZAboveGround(0) == maxHeight)
            (*(int (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 1348))(this, 0, 0x3FE00000);
        else
            (*(int (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 1348))(this, 0, 0);
        return 1;
    }
    return 0;
}
// IDA: 0x417BD0 (ValidateMovement, 137B)
int AircraftClass::ValidateMovement()
{
    // Validate aircraft movement
    return 0;
}

// IDA: 0x417F80 (CanEnterCell, 80B)
// G42.42d FULL implementation (truth 0x417F80; disasm-verified):
//   owner (this+0x21C) must be human; base HandleCursorWithCheck; when the
//   result is 5 (enter-ok) additionally require SelectWeaponSlot(vt+1016)(0).
int AircraftClass::CanEnterCell(__int16* a2, char a3, char a4)
{
    if (owner == nullptr || !owner->IsHumanPlayer())
        return 0;
    int v6 = FootClass::HandleCursorWithCheck(a2, a3, a4);
    if (v6 == 5 && SelectWeaponSlot(0) == 0)
        return 0;
    return v6;
}

// ============================================================
// Phase 3: Landing
// ============================================================

// IDA: 0x41BA90 (ProcessLanding, 82B)
// 0x41ba90
// G42.42d FULL implementation (truth 0x41BA90; disasm-verified):
//   switch on currentMission (this+0xAC); cases 4/26/27/30/31 check airstrike
//   (this+0x294); second switch on a2 with same case set; base dispatch
//   ParticleClass::MissionDispatch == MissionClass::MissionDispatch (0x5B35E0).
int AircraftClass::ProcessLanding(int a2, int a3)
{
    switch (currentMission)
    {
    case 4:
    case 26:
    case 27:
    case 30:
    case 31:
        if (airstrike != nullptr)
            break;
        switch (a2)
        {
        case 4:
        case 26:
        case 27:
        case 30:
        case 31:
            break;
        default:
            return a2 - 4;
        }
        break;
    default:
        break;
    }
    return MissionClass::MissionDispatch(a2, a3);
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
// G42.42e FULL implementation (truth 0x415A50; disasm-verified): with a live
// movement destination re-queue when it matches the object's current target
// (vt[111]); otherwise ask the owner house for the airfield transition count
// (clamped 0..3 else GetTransitionCount), find an open neighbor cell on the
// map (dword_87F7E8) matching g_AircraftStatusFlag, and dispatch the found
// cell through vt[288].  Mission result is always 3 (frames per tick).
int AircraftClass::ProcessReturnToBase()
{
    if (movementDestination != nullptr)
    {
        void *cur = (*(void ** (__thiscall **)(AircraftClass *))(*(unsigned int **)this + 111))(this);
        if (movementDestination == (AbstractClass *)cur)
            (*(void (__thiscall **)(AircraftClass *, void *, int))(*(unsigned int **)this + 288))(this, 0, 1);
    }
    else
    {
        HouseClass *own = owner;
        int transitionCount = *(int *)((char *)own + 0x1E0);
        if (transitionCount < 0 || transitionCount > 3)
            transitionCount = own->GetTransitionCount();
        __int16 foundCell[2];
        ((CellClass *)&dword_87F7E8)->FindOpenNeighbor(
            (void *)foundCell, transitionCount,
            (int)&g_AircraftStatusFlag, (int)&g_AircraftStatusFlag,
            4, 1, 0);
        if (foundCell[0] != *(__int16 *)&g_AircraftStatusFlag
         || foundCell[1] != *((__int16 *)&g_AircraftStatusFlag + 1))
        {
            void *cellObj = CellCoord::To_CellObj((void *)&dword_87F7E8, (void *)foundCell);  // G42.42e: static 2-arg (core/cellcoord.hpp)
            (*(void (__thiscall **)(AircraftClass *, void *, int))(*(unsigned int **)this + 288))(this, cellObj, 1);
        }
    }
    return 3;
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
// G42.42d FULL implementation (truth 0x41B610; disasm-verified):
//   BeginPowerUpdate(this,a2) then FlagProcess(a2, HasPassengers@0x6C9 /
//   flag@0x6D0 / flag@0x6D1), tail TimerProcess(a2, (signed char)0x6D3).
int AircraftClass::PowerDrainUpdate(int* a2)
{
    FootClass::BeginPowerUpdate(a2);
    ((PowerClass *)a2)->FlagProcess(HasPassengers);
    ((PowerClass *)a2)->FlagProcess(AircraftClass_field_bool_6D0);
    ((PowerClass *)a2)->FlagProcess(AircraftClass_field_bool_6D1);
    return ((PowerClass *)a2)->TimerProcess((signed char)AircraftClass_field_char_6D3);
}
// IDA: 0x41B660 (HandleTargetDestroyed, 56B)
// 0x41b660
// G42.42d FULL implementation (truth 0x41B660): base call, then clear
// AircraftClass_field_6CC / Type when they reference the destroyed object.
int AircraftClass::HandleTargetDestroyed(int* a2, int* a3)
{
    FootClass::HandleTargetDestroyed(a2, a3);
    if ((int *)AircraftClass_field_6CC == a2)
        AircraftClass_field_6CC = 0;
    if ((int *)Type == a2)
        Type = 0;
    return 0;
}
// 0x414a80
// G42.42e FULL implementation (truth 0x414A80; disasm-verified):
//   pitchAngle@0x2FC non-zero -> radio-connected path: when the radio partner
//   (0x2B4) is live jump straight to the re-queue (vt122(1,0)); while in
//   campaign mode (dword_A8B238) also transmit coords (0x9C..0xA8) via the
//   radio send pair (vt241/vt242, message 64 then 0); fallthrough picks
//   vt122(1,0) if partner appeared else vt289(0,1); both return 1.
//   Otherwise: liberate from team (team@0x5D4 -> TeamClass::LiberateMember),
//   re-queue vt289(0,1), timeout = RoundToInt(MissionControl[+0x10]*900.0)
//   + Random::Range(dword_A8B230+0x218, 0, 2).
int AircraftClass::ProcessMissionTimeout()
{
    if (pitchAngle != 0.0f)
    {
        bool partnerLive = *(void **)((char *)this + 0x2B4) != nullptr;
        if (!partnerLive)
        {
            if (dword_A8B238 != 0)
            {
                int coord[3];
                coord[0] = *(int *)((char *)this + 0x9C);
                coord[1] = *(int *)((char *)this + 0xA0);
                coord[2] = *(int *)((char *)this + 0xA4);
                int r = (*(int (__thiscall **)(AircraftClass *, int, int *, int))(*(unsigned int **)this + 241))(this, 64, coord, 0);
                (*(void (__thiscall **)(AircraftClass *, int))(*(unsigned int **)this + 242))(this, r);
            }
            partnerLive = *(void **)((char *)this + 0x2B4) != nullptr;
            if (!partnerLive)
            {
                int coord[3];
                coord[0] = *(int *)((char *)this + 0x9C);
                coord[1] = *(int *)((char *)this + 0xA0);
                coord[2] = *(int *)((char *)this + 0xA4);
                int r = (*(int (__thiscall **)(AircraftClass *, int, int *, int))(*(unsigned int **)this + 241))(this, 0, coord, 0);
                (*(void (__thiscall **)(AircraftClass *, int))(*(unsigned int **)this + 242))(this, r);
            }
        }
        if (*(void **)((char *)this + 0x2B4) != nullptr)
        {
            (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 122))(this, 1, 0);
            return 1;
        }
        (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 289))(this, 0, 1);
        return 1;
    }
    if (team != nullptr)
        ((gamemd::TeamClass *)team)->LiberateMember_Start(this, -1, 0);  // G42.42e: gamemd carrier (ra2::game fwd-only)
    (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 289))(this, 0, 1);
    void *missionControl = GetMissionControl();
    int base = (int)Math::RoundToInt(*((double *)missionControl + 2) * 900.0);
    return base + Random::Range((void *)((char *)&dword_A8B230 + 0x218), 0, 2);
}
// 0x41a5c0
int AircraftClass::GetMissionTimer()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041A5C0.json)
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
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00414080.json)
}
// IDA: 0x417CC0 (GetCursorOverObject, 692B)
int AircraftClass::GetActionOnObject()
{
    // Get cursor type when hovering over this aircraft
    return 0;
}

// IDA: 0x41B920 (IsHeightAboveThreshold, 83B)
// 0x41b920
// G42.42e FULL implementation (truth 0x41B920; disasm-verified): the two
// Rules-owned aircraft types (Rules+0x4E0 / +0x514, camera/spy-plane family)
// delegate the height check to the locomotor (this+0x674, vt+128) with an
// E_POINTER fail-fast; every other type uses the ObjectClass base form.
int AircraftClass::IsHeightAboveThreshold()
{
    unsigned int rules = dword_8871E0;
    unsigned int special1 = *(unsigned int *)((char *)rules + 0x4E0);
    unsigned int special2 = *(unsigned int *)((char *)rules + 0x514);
    if ((unsigned int)Type != special1 && (unsigned int)Type != special2)
        return ObjectClass::IsHeightAboveThreshold();
    unsigned int loco = *(unsigned int *)&locomotor;
    if (loco == 0)
        WinAPI_Wrapper((int)0x80004003);
    return (*(unsigned char (__stdcall **)(int))(*(unsigned int *)loco + 128))((int)loco) != 0;
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
