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
// G42.42m FULL implementation (live IDA truth 0x417FE0, til-typed): the
// aircraft attack state machine (seed/approach/chase/fire/strafe/three
// bombing passes/release/return + timeout default).
int AircraftClass::Mission_Attack()
{
    int coords[3];
    int myCoords[3];
    unsigned char buf1[24];
    unsigned char buf2[24];
    int outInts[5];

    unsigned int weaponCtl = *(unsigned int *)((char *)this + 0x6C0);
    unsigned char elevByte1 = *(unsigned char *)((char *)dword_8871E0 + 0x17E0 + 1);
    #define AC_VT(idx) (*(unsigned int **)this + (idx))

    switch (missionStatus)
    {
    case 0:
    {
        int v4 = -(target != nullptr);
        AircraftClass_field_bool_6D2 = false;
        missionStatus = (char)(v4 & 0xF7) + 10;
        return 1;
    }
    case 1:
    {
        bool v6 = AircraftClass_field_bool_6C8;
        AircraftClass_field_bool_6D2 = false;
        if (v6)
        {
            AircraftClass_field_bool_6C8 = false;
            ammo = ammo - 1;
        }
        if (target != nullptr && ammo != 0)
        {
            void *spiral = FindSpiralMoveTarget((int)this, target);
            (*(void (__thiscall **)(AircraftClass *, void *, int))AC_VT(288))(this, spiral, 1);
            missionStatus = movementDestination != nullptr ? 3 : 10;
        }
        else
        {
            missionStatus = 10;
        }
        break;  // -> timeout
    }
    case 3:
    {
        if (AircraftClass_field_bool_6C8)
        {
            AircraftClass_field_bool_6C8 = false;
            ammo = ammo - 1;
        }
        AircraftClass_field_bool_6D2 = false;
        if (target == nullptr || ammo == 0)
        {
            missionStatus = 10;
            return 1;
        }
        if ((*(int (__stdcall **)(unsigned int))(*(unsigned int *)weaponCtl + 24))(weaponCtl) != 0)
        {
            int v14 = SelectWeaponSlot(0);
            if (ObjectClass_ComputeDistance((int)this, target) < *(int *)(v14 + 180))
            {
                missionStatus = 4;
                return 1;
            }
            (*(void (__thiscall **)(AircraftClass *, int, int))AC_VT(288))(this, (int)target, 1);
        }
        else
        {
            if ((*(int (__stdcall **)(unsigned int))(*(unsigned int *)weaponCtl + 28))(weaponCtl) != 0)
            {
                missionStatus = 4;
                return 1;
            }
            unsigned int loco = *(unsigned int *)&locomotor;
            if (loco == 0)
                WinAPI_Wrapper((int)0x80004003);
            if ((*(unsigned char (__stdcall **)(unsigned int))(*(unsigned int *)loco + 128))(loco) == 0)
            {
                missionStatus = 4;
                return 1;
            }
        }
        if (movementDestination == nullptr)
        {
            missionStatus = 1;
            return 1;
        }
        int v15 = ObjectClass_ComputeDistance((int)this, movementDestination);
        if (v15 >= 512)
        {
            int *destC = (*(int *(__thiscall **)(void *, void *))(*(unsigned int **)(void *)movementDestination + 72))(movementDestination, buf1);
            int *myC = (*(int *(__thiscall **)(AircraftClass *, void *, int, int, int, int))AC_VT(176))(this, buf2, 0, 0, 0, 0);
            short v102;
            if (myC[0] == destC[0] && myC[1] == destC[1])
                v102 = 0;
            else
                v102 = (short)Math::RoundToInt(Math_CalcAngle((double)myC[1] - (double)destC[1],
                                                              (double)destC[0] - (double)myC[0]) * 65536.0 / 360.0 - 8192.0);
            FacingClass_Update((void *)&secondaryFacing, (void *)&v102);
            (void)myCoords;
            return 1;
        }
        int *v16 = ObjectClass_CalcTargetFacing((int)this, myCoords, target);
        FacingClass_Update((void *)&secondaryFacing, v16);
        if (v15 >= 16)
            return 1;
        missionStatus = 4;
        (*(void (__thiscall **)(AircraftClass *, int, int))AC_VT(288))(this, 0, 1);
        return 1;
    }
    case 4:
    {
        if (target == nullptr || ammo == 0)
        {
            missionStatus = 10;
            return 1;
        }
        if ((*(int (__stdcall **)(unsigned int))(*(unsigned int *)weaponCtl + 24))(weaponCtl) == 0)
        {
            int *v21 = ObjectClass_CalcTargetFacing((int)this, myCoords, target);
            FacingClass_Update((void *)&primaryFacing, v21);
            int *v22 = ObjectClass_CalcTargetFacing((int)this, coords, target);
            FacingClass_Update((void *)&secondaryFacing, v22);
        }
        int v24 = (*(int (__thiscall **)(AircraftClass *, int, int))AC_VT(185))(this, (int)target, 1);
        switch ((*(int (__thiscall **)(AircraftClass *, int, int))AC_VT(240))(this, (int)target, v24))
        {
        case 0:
        {
            AircraftClass_field_bool_6C8 = true;
            int shots = 0;
            int v27 = (*(int (__thiscall **)(AircraftClass *, int))AC_VT(185))(this, (int)target);
            for (;;)
            {
                int v29 = (*(int (__thiscall **)(AircraftClass *, int))AC_VT(185))(this, (int)target);
                (*(void (__thiscall **)(AircraftClass *, int, int))AC_VT(243))(this, (int)target, v29);
                ++shots;
                int v31 = (*(int (__thiscall **)(AircraftClass *, int))AC_VT(185))(this, (int)target);
                if (shots >= *(int *)(*(int *)SelectWeaponSlot(v27) + 156))
                    break;
            }
            int loc[3];
            loc[0] = *(int *)((char *)this + 0x9C);
            loc[1] = *(int *)((char *)this + 0xA0);
            loc[2] = *(int *)((char *)this + 0xA4);
            int *v32 = (*(int *(__thiscall **)(void *, void *, int *))(*(unsigned int **)(void *)target + 72))(target, buf2, loc);
            void *v33 = ((Coord *)&dword_87F7E8)->To_Cell((unsigned int *)v32);
            Cell_ApplyDamage(v33, 1, 0, 0, (int)outInts);
            if ((*(int (__stdcall **)(unsigned int))(*(unsigned int *)weaponCtl + 24))(weaponCtl) != 0)
            {
                missionStatus = 6;
                AircraftClass_field_bool_6D2 = true;
                return *(int *)(SelectWeaponSlot(0) + 176);
            }
            if ((*(int (__stdcall **)(unsigned int))(*(unsigned int *)weaponCtl + 28))(weaponCtl) == 0)
            {
                missionStatus = 5;
                return 1;
            }
            AircraftClass_field_bool_6D2 = true;
            missionStatus = ammo > 0 ? 1 : 10;
            return *(int *)(SelectWeaponSlot(0) + 176);
        }
        case 2:
            if (ammo == 0)
            {
                missionStatus = 10;
                return 1;
            }
            if ((*(unsigned char (__thiscall **)(AircraftClass *, int))AC_VT(235))(this, (int)target) == 0
             || (*(int (__stdcall **)(unsigned int))(*(unsigned int *)weaponCtl + 24))(weaponCtl) != 0)
                missionStatus = 1;
            else if ((*(int (__stdcall **)(unsigned int))(*(unsigned int *)weaponCtl + 28))(weaponCtl) != 0)
                missionStatus = 4;
            else
                missionStatus = elevByte1 != 0 ? 1 : 4;
            if ((*(int (__stdcall **)(unsigned int))(*(unsigned int *)weaponCtl + 24))(weaponCtl) == 0)
                return 1;
            return 45;
        case 3:
            return 1;
        case 9:
            (*(void (__thiscall **)(AircraftClass *, int))AC_VT(279))(this, 0);
            return 1;
        default:
            if (ammo == 0)
            {
                missionStatus = 10;
                return 1;
            }
            if ((*(int (__stdcall **)(unsigned int))(*(unsigned int *)weaponCtl + 24))(weaponCtl) != 0)
                return 1;
            missionStatus = 5;
            return 1;
        }
    }
    case 5:
    {
        if (target == nullptr)
        {
            missionStatus = 10;
            return 1;
        }
        int *v39 = ObjectClass_CalcTargetFacing((int)this, myCoords, target);
        FacingClass_Update((void *)&primaryFacing, v39);
        int *v40 = ObjectClass_CalcTargetFacing((int)this, coords, target);
        FacingClass_Update((void *)&secondaryFacing, v40);
        int v42 = (*(int (__thiscall **)(AircraftClass *, int, int))AC_VT(185))(this, (int)target, 1);
        switch ((*(unsigned int (__thiscall **)(AircraftClass *, int, int))AC_VT(240))(this, (int)target, v42))
        {
        case 0u:
        {
            int v45 = (*(int (__thiscall **)(AircraftClass *, int))AC_VT(185))(this, (int)target);
            (*(void (__thiscall **)(AircraftClass *, int, int))AC_VT(243))(this, (int)target, v45);
            int loc[3];
            loc[0] = *(int *)((char *)this + 0x9C);
            loc[1] = *(int *)((char *)this + 0xA0);
            loc[2] = *(int *)((char *)this + 0xA4);
            int *v46 = (*(int *(__thiscall **)(void *))(*(unsigned int **)(void *)target + 72))(target);
            void *v47 = ((Coord *)&dword_87F7E8)->To_Cell((unsigned int *)v46);
            Cell_ApplyDamage(v47, (int)outInts, (int)loc, 1, 0);
            if (ammo == 0)
            {
                missionStatus = 10;
                break;
            }
            missionStatus = elevByte1 != 0 ? 1 : 4;
            break;
        }
        case 2u:
            if (ammo == 0)
            {
                missionStatus = 10;
                break;
            }
            if ((*(unsigned char (__thiscall **)(AircraftClass *, int))AC_VT(235))(this, (int)target) == 0
             || (*(int (__stdcall **)(unsigned int))(*(unsigned int *)weaponCtl + 24))(weaponCtl) != 0)
                missionStatus = 1;
            else
            {
                int v43 = -(elevByte1 != 0);
                missionStatus = (char)(v43 & 0xFD) + 4;
            }
            if ((*(int (__stdcall **)(unsigned int))(*(unsigned int *)weaponCtl + 24))(weaponCtl) != 0)
                return 45;
            break;
        case 3u:
            break;
        case 9u:
            (*(void (__thiscall **)(AircraftClass *, int))AC_VT(279))(this, 0);
            break;
        default:
            if (ammo == 0)
            {
                missionStatus = 10;
                break;
            }
            if ((*(unsigned char (__thiscall **)(AircraftClass *, int))AC_VT(235))(this, (int)target) != 0)
                missionStatus = elevByte1 != 0 ? 1 : 4;
            else
                missionStatus = 1;
            break;
        }
        break;  // -> timeout
    }
    case 6:
    case 7:
    case 8:
    {
        // bombing passes 6->7->8: fire-error gate (0/2/9 pass, 8 requeue),
        // single shot + ApplyDamage, advance to next pass.
        if (target == nullptr)
        {
            missionStatus = 10;
            return 1;
        }
        int v50 = (*(int (__thiscall **)(AircraftClass *, int, int))AC_VT(185))(this, (int)target, 1);
        int fireErr = (*(int (__thiscall **)(AircraftClass *, int, int))AC_VT(240))(this, (int)target, v50);
        if (fireErr != 0 && fireErr != 2 && fireErr != 9)
        {
            if (fireErr == 8)
                (*(void (__thiscall **)(AircraftClass *, int, int))AC_VT(288))(this, (int)target, 1);
            else
            {
                if (ammo == 0)
                {
                    missionStatus = 10;
                    AircraftClass_field_bool_6D2 = false;
                }
                return 1;
            }
        }
        int v96 = (*(int (__thiscall **)(AircraftClass *, int))AC_VT(185))(this, (int)target);
        (*(void (__thiscall **)(AircraftClass *))AC_VT(243))(this);
        int loc[3];
        loc[0] = *(int *)((char *)this + 0x9C);
        loc[1] = *(int *)((char *)this + 0xA0);
        loc[2] = *(int *)((char *)this + 0xA4);
        int *v53 = (*(int *(__thiscall **)(void *, void *, int *, int, unsigned int, unsigned int))(*(unsigned int **)(void *)target + 72))(target, buf1, loc, 1, 0, 0);
        void *v54 = ((Coord *)&dword_87F7E8)->To_Cell((unsigned int *)v53);
        Cell_ApplyDamage(v54, (int)target, v96, (int)outInts, (int)buf2);
        (*(void (__thiscall **)(AircraftClass *, int, int))AC_VT(288))(this, (int)target, 1);
        missionStatus = missionStatus == 6 ? 7 : (missionStatus == 7 ? 8 : 9);
        return *(int *)(SelectWeaponSlot(0) + 176);
    }
    case 9:
    {
        if (target == nullptr)
        {
            missionStatus = 10;
            return 1;
        }
        int v72 = (*(int (__thiscall **)(AircraftClass *, int, int))AC_VT(185))(this, (int)target, 1);
        int fireErr = (*(unsigned int (__thiscall **)(AircraftClass *, int, int))AC_VT(240))(this, (int)target, v72);
        if (fireErr != 0 && fireErr != 2 && fireErr != 8 && fireErr != 9)
        {
            if (ammo == 0)
            {
                missionStatus = 10;
                AircraftClass_field_bool_6D2 = false;
            }
            return 1;
        }
        int v94 = (*(int (__thiscall **)(AircraftClass *))AC_VT(185))(this);
        (*(void (__thiscall **)(AircraftClass *))AC_VT(243))(this);
        int loc[3];
        loc[0] = *(int *)((char *)this + 0x9C);
        loc[1] = *(int *)((char *)this + 0xA0);
        loc[2] = *(int *)((char *)this + 0xA4);
        int *v75 = (*(int *(__thiscall **)(void *, void *, int *, int, unsigned int, unsigned int))(*(unsigned int **)(void *)target + 72))(target, buf2, loc, 1, 0, 0);
        void *v76 = ((Coord *)&dword_87F7E8)->To_Cell((unsigned int *)v75);
        Cell_ApplyDamage(v76, (int)target, v94, (int)target, (int)outInts);
        missionStatus = 3;
        return (*(int *)(SelectWeaponSlot(0) + 180) + 1024) / *(int *)((char *)Type + 0x678);
    }
    case 10:
    {
        bool v78 = AircraftClass_field_bool_6C8;
        AircraftClass_field_bool_6D2 = false;
        if (v78)
        {
            AircraftClass_field_bool_6C8 = false;
            if (ammo > 0)
                ammo = ammo - 1;
        }
        if (ammo != 0)
        {
            if (target != nullptr)
            {
                missionStatus = 1;
                return 1;
            }
        }
        else if (isALoaner || owner->IsCurrentPlayer())
        {
            (*(void (__thiscall **)(AircraftClass *, int))AC_VT(242))(this, 0);
        }
        AircraftClass_field_bool_6D2 = false;
        int transitionCount = *(int *)((char *)owner + 0x1E0);
        if (transitionCount < 0 || transitionCount > 3)
            transitionCount = owner->GetTransitionCount();
        __int16 openCell[2];
        ((CellClass *)&dword_87F7E8)->FindOpenNeighbor(
            (void *)openCell, transitionCount,
            (int)&g_AircraftStatusFlag, (int)&g_AircraftStatusFlag,
            4, 1, 0);
        void *v84 = CellCoord::To_CellObj((void *)&dword_87F7E8, (void *)openCell);
        (*(void (__thiscall **)(AircraftClass *, void *, int))AC_VT(288))(this, v84, 1);
        AircraftClass_field_bool_6D5 = false;
        if (airstrike != nullptr && ammo > 0)
        {
            (*(void (__thiscall **)(AircraftClass *, int, int))AC_VT(122))(this, 4, 0);
            AircraftClass_field_bool_6D5 = true;
            return 1;
        }
        (*(void (__thiscall **)(AircraftClass *, int, int))AC_VT(289))(this, 0, 1);
        AircraftClass_field_bool_6D5 = true;
        return 1;
    }
    default:
        break;
    }
    void *mc = GetMissionControl();
    return (int)Math::RoundToInt(*((double *)mc + 2) * 900.0)
         + Random::Range((void *)((char *)&dword_A8B230 + 0x218), 0, 2);
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
// G42.42h FULL implementation (truth 0x4166C0; offsets disasm-decoded):
//   carryall-family types (Type+3580) use the dedicated state machine; the
//   generic enter is a 5-state machine on missionStatus (0xBC): 0 = pick the
//   approach (nearby cell of the destination, or bail to mission 289), 1 =
//   hand the destination coords to the locomotor (vt+68), 2 = proximity
//   check (dist<256 -> dock validation through the Rules dock array),
//   arrival/cell-occupied transitions, 3 = wait for locomotor stop, 4 =
//   final arrival checks.  Unmatched/default -> mission-control timeout
//   (RoundToInt(sec*900) + Random 0..2).
int AircraftClass::Mission_Enter()
{
    if (*(unsigned char *)((char *)Type + 3580) != 0)
        return AircraftClass_MissionStateMachine();

    unsigned int loco;
    int *destCoords;
    int destCell[3];
    __int16 myCellBuf[4];
    __int16 *myCell;
    int rel[3];

    switch (missionStatus)
    {
    case 0:
        if (movementDestination != nullptr)
        {
            void *nearbyCell = AircraftClass_FindNearbyCell((void *)movementDestination);
            (*(void (__thiscall **)(AircraftClass *, void *, int))(*(unsigned int **)this + 288))(this, nearbyCell, 1);
            missionStatus = 1;
        }
        else
        {
            (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 289))(this, 0, 1);
        }
        break;

    case 1:
        if (movementDestination == nullptr)
        {
            (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 289))(this, 0, 1);
            return 1;
        }
        destCoords = (*(int *(__thiscall **)(void *, int *))(*(unsigned int **)(void *)movementDestination + 19))((void *)movementDestination, destCell);
        loco = *(unsigned int *)&locomotor;
        if (loco == 0)
            WinAPI_Wrapper((int)0x80004003);
        (*(void (__cdecl **)(unsigned int, int))(*(unsigned int *)loco + 68))(loco, *destCoords);
        missionStatus = 2;
        return 1;

    case 2:
        if (*(int *)((char *)this + 0x520) != -1)
        {
            bool needValidate = false;
            if (movementDestination != nullptr)
            {
                destCoords = (*(int *(__thiscall **)(void *, int *))(*(unsigned int **)(void *)movementDestination + 18))((void *)movementDestination, destCell);
                ((Coord *)rel)->Subtract(*(int *)((char *)this + 0x9C) - destCoords[0],
                                         *(int *)((char *)this + 0xA0) - destCoords[1], 0);
                if (((Coord *)rel)->Length() < 256)
                    needValidate = true;
            }
            else
            {
                needValidate = true;
            }
            if (needValidate)
            {
                unsigned int dockArr = *(unsigned int *)((char *)&dword_A83D4C + 4 * *(int *)((char *)this + 0x520) + 208);
                int element = Array_GetElement((void *)dockArr, *(char *)((char *)this + 0x686));
                int *entry = VectorClass_GetAtChecked((void *)dockArr, element);
                BuildingClass_ValidateFoundation_0((int)this, 0, 0, entry, 0, 0);
            }
        }
        loco = *(unsigned int *)&locomotor;
        if (loco == 0)
            WinAPI_Wrapper((int)0x80004003);
        if ((*(unsigned char (__stdcall **)(unsigned int))(*(unsigned int *)loco + 16))(loco) == 0)
        {
            missionStatus = 3;
            return 1;
        }
        if (movementDestination != nullptr)
        {
            destCoords = (*(int *(__thiscall **)(void *, int *))(*(unsigned int **)(void *)movementDestination + 19))((void *)movementDestination, destCell);
            myCell = (__int16 *)(*(void **(__thiscall **)(AircraftClass *, void *))(*(unsigned int **)this + 110))(this, myCellBuf);
            if (destCoords[0] / 256 == myCell[0] && destCoords[1] / 256 == myCell[1])
            {
                missionStatus = 3;
                return 1;
            }
        }
        if (movementDestination != nullptr)
        {
            destCoords = (*(int *(__thiscall **)(void *, int *))(*(unsigned int **)(void *)movementDestination + 19))((void *)movementDestination, destCell);
            __int16 targetCell[2];
            targetCell[0] = (__int16)(destCoords[0] / 256);
            targetCell[1] = (__int16)(destCoords[1] / 256);
            if (Cell_IsOccupied((int)this, (void *)targetCell, 1) == 0)
            {
                missionStatus = 0;
                return 1;
            }
        }
        missionStatus = 4;
        return 1;

    case 3:
        loco = *(unsigned int *)&locomotor;
        if (loco == 0)
            WinAPI_Wrapper((int)0x80004003);
        if ((*(unsigned char (__stdcall **)(unsigned int))(*(unsigned int *)loco + 16))(loco) == 0)
            (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 289))(this, 0, 1);
        return 1;

    case 4:
        loco = *(unsigned int *)&locomotor;
        if (loco == 0)
            WinAPI_Wrapper((int)0x80004003);
        if ((*(unsigned char (__stdcall **)(unsigned int))(*(unsigned int *)loco + 16))(loco) == 0
         || movementDestination != nullptr
            && (destCoords = (*(int *(__thiscall **)(void *, int *))(*(unsigned int **)(void *)movementDestination + 19))((void *)movementDestination, destCell),
                myCell = (__int16 *)(*(void **(__thiscall **)(AircraftClass *, void *))(*(unsigned int **)this + 110))(this, myCellBuf),
                destCoords[0] / 256 == myCell[0] && destCoords[1] / 256 == myCell[1]))
        {
            missionStatus = 3;
        }
        else
        {
            if (movementDestination != nullptr)
            {
                destCoords = (*(int *(__thiscall **)(void *, int *))(*(unsigned int **)(void *)movementDestination + 19))((void *)movementDestination, destCell);
                __int16 targetCell[2];
                targetCell[0] = (__int16)(destCoords[0] / 256);
                targetCell[1] = (__int16)(destCoords[1] / 256);
                if (Cell_IsOccupied((int)this, (void *)targetCell, 1) == 0)
                {
                    missionStatus = 0;
                    return 1;
                }
            }
        }
        return 1;

    default:
        break;
    }
    void *mc = GetMissionControl();
    int base = (int)Math::RoundToInt(*((double *)mc + 2) * 900.0);
    return base + Random::Range((void *)((char *)&dword_A8B230 + 0x218), 0, 2);
} // G42.42d: pending full translation (offsets decoded; queue position 13)
// 0x419c80
// G42.42i FULL implementation (truth 0x419C80; overlay decoded): airborne
// transport mission.  Grounded/bridge-destination case re-targets through
// field_6CC (building dest) + mission 3 + vt122(2,1).  Airborne path updates
// the building-destination cache while flying, then runs the state machine on
// missionStatus (0xBC): 0 -> 6; 1..5 -> set 0x6D4 flag, wait; 6 = team
// validation split (all-valid: wait locomotor end -> 7, else place/queue
// fallback); 7 = final delivery (clamp +-5 approach, team member handoff via
// LinkedList pop + FindClosestPlacementCell fallback).
#define AC_VT(idx) (*(unsigned int **)this + (idx))
#define AC_VT_CALL(idx, sig, ...) ((*(sig)AC_VT(idx))(this, ##__VA_ARGS__))

int AircraftClass::Mission_Transport()
{
    unsigned int loco;
    int *coords;
    int coordOut[3];

    void *curCell = (*(void *(__thiscall **)(AircraftClass *))(*(unsigned int **)this + 111))(this);
    if (GetZAboveGround(0) == 0
     && *(unsigned char *)((char *)Type + 3597) != 0
     && movementDestination != nullptr
     && (void *)movementDestination != Cell_IsBridge(curCell))
    {
        unsigned char *dest = (unsigned char *)movementDestination;
        void *buildingDest = nullptr;
        if (dest != nullptr && (*(int (__thiscall **)(void *))(*(unsigned int **)dest + 11))(dest) == 6)
            buildingDest = dest;
        AircraftClass_field_6CC = (unsigned int)buildingDest;
        (*(void (__thiscall **)(AircraftClass *, int))(*(unsigned int **)this + 157))(this, 3);
        (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 122))(this, 2, 1);
        return 1;
    }

    if (GetZAboveGround(0) > 0)
    {
        void *v9 = movementDestination;
        if ((void *)AircraftClass_field_6CC != v9 && v9 != nullptr
         && (*(int (__thiscall **)(void *))(*(unsigned int **)(void *)v9 + 11))(v9) == 6)
        {
            void *v11 = nullptr;
            if (v9 != nullptr && (*(int (__thiscall **)(void *))(*(unsigned int **)(void *)v9 + 11))(v9) == 6)
                v11 = v9;
            AircraftClass_field_6CC = (unsigned int)v11;
        }
    }

    if (movementDestination != nullptr
     || (*(int (__thiscall **)(AircraftClass *))(*(unsigned int **)this + 30))(this) == 2
     || (*(int (__thiscall **)(AircraftClass *, int))(*(unsigned int **)this + 157))(this, 14) == 1
     || TechnoClass_PlaceAtCell((int)this) != 0)
    {
        switch (missionStatus)
        {
        case 0:
            missionStatus = 6;
            /* fall through */
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            AircraftClass_field_bool_6D4 = true;
            return 1;

        case 6:
        {
            if (*(unsigned char *)((char *)Type + 3597) != 0 && GetZAboveGround(0) != 0)
                (*(void (__thiscall **)(AircraftClass *, int))(*(unsigned int **)this + 157))(this, 14);
            if (Team_AllMembersValid((int)this) != 0)
            {
                loco = *(unsigned int *)&locomotor;
                if (loco == 0)
                    WinAPI_Wrapper((int)0x80004003);
                if ((*(int (__stdcall **)(unsigned int))(*(unsigned int *)loco + 36))(loco) == 1
                 || (*(unsigned char *)((char *)Type + 3597) != 0 && GetZAboveGround(0) == 0))
                {
                    missionStatus = 7;
                    AircraftClass_field_bool_6D4 = false;
                }
                return 3;
            }
            if (TechnoClass_PlaceAtCell((int)this) == 0)
            {
                loco = *(unsigned int *)&locomotor;
                if (loco == 0)
                    WinAPI_Wrapper((int)0x80004003);
                if ((*(int (__stdcall **)(unsigned int))(*(unsigned int *)loco + 36))(loco) == 1)
                {
                    missionStatus = 7;
                    AircraftClass_field_bool_6D4 = true;
                }
                if (*(int *)((char *)this + 0xB4) == -1)
                {
                    (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 288))(this, 0, 1);
                    (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 289))(this, 0, 1);
                    AircraftClass_field_bool_6D4 = true;
                    return 1;
                }
                AircraftClass_field_bool_6D4 = true;
            }
            AircraftClass_field_bool_6D4 = true;
            return 1;
        }

        case 7:
        {
            loco = *(unsigned int *)&locomotor;
            if (loco == 0)
                WinAPI_Wrapper((int)0x80004003);
            if ((*(int (__stdcall **)(unsigned int))(*(unsigned int *)loco + 36))(loco) == 1)
            {
                if (movementDestination != nullptr)
                {
                    unsigned char *dest = (unsigned char *)movementDestination;
                    if ((*(int (__thiscall **)(void *))(*(unsigned int **)dest + 11))(dest) == 6)
                        coords = (*(int *(__thiscall **)(void *, void *, int *))(*(unsigned int **)dest + 42))(dest, coordOut, (int *)this);
                    else
                        coords = (*(int *(__thiscall **)(void *, void *))(*(unsigned int **)dest + 18))(dest, coordOut);
                    int rel[3];
                    int dx = coords[0] - *(int *)((char *)this + 0x9C);
                    int dy = coords[1] - *(int *)((char *)this + 0xA0);
                    if (dx > 5) dx = 5; else if (dx < -5) dx = -5;
                    if (dy > 5) dy = 5; else if (dy < -5) dy = -5;
                    rel[0] = *(int *)((char *)this + 0x9C) + dx;
                    rel[1] = *(int *)((char *)this + 0xA0) + dy;
                    rel[2] = *(int *)((char *)this + 0xA4);
                    (*(void (__thiscall **)(AircraftClass *, int *))(*(unsigned int **)this + 109))(this, rel);
                }
                AircraftClass_field_bool_6D4 = true;
                return 1;
            }
            int v23 = (*(int (__thiscall **)(AircraftClass *, int))(*(unsigned int **)this + 157))(this, 21) - 1;
            if (v23 != 0)
            {
                if (v23 == 4)
                {
                    (*(void (__thiscall **)(AircraftClass *))(*(unsigned int **)this + 53))(this);
                    int member = Team_GetMember((int)this, 0);
                    CellClass_AddObject((void *)(member + 276), (void *)this);
                }
                else
                {
                    (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 289))(this, 0, 1);
                }
                return 1;
            }
            if (*(unsigned char *)((char *)Type + 3580) != 0 && *(int *)((char *)this + 280) != 0)
            {
                int v25 = Team_GetMember((int)this, 0);
                void *v26 = LinkedList_Pop((void *)((char *)this + 92));
                (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 157))(this, 3, 0);
                if ((*(int (__thiscall **)(void *, int, int))(*(unsigned int **)v26 + 158))(v26, 2, v25) == 1)
                {
                    CellClass_AddObject((void *)((char *)this + 276), v26);
                    (*(void (__thiscall **)(AircraftClass *, int))(*(unsigned int **)this + 73))(this, 0);
                    FootClass_MissionMoveCarryallLand((int)this);
                    (*(void (__thiscall **)(AircraftClass *, int))(*(unsigned int **)this + 73))(this, 1);
                }
                else
                {
                    void *cpc = TechnoClass_FindClosestPlacementCell((int)this);
                    (*(void (__thiscall **)(AircraftClass *, void *))(*(unsigned int **)this + 288))(this, cpc);
                }
                (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 122))(this, 2, 0);
                return 1;
            }
            (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 122))(this, 5, 0);
            return 1;
        }

        default:
            return 1;
        }
    }
    (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 289))(this, 0, 1);
    return 1;
}
// 0x4190b0
// G42.42l FULL implementation (truth 0x4190B0; disasm-verified).  Outer
// gate on currentMission@0xAC (codes 4/26/27/30/31 with no live airstrike
// return 0); inner dispatch on the requested mission a3 with the aircraft
// special cases: 8 enter-ok checks (type flag + vt97==2 + archive/dest
// match), 14 reload (ammo@0x114 vs Type+0x5E0, locomotor stop, rate scaler
// on Type+0x3C8 double, radio chain vt158/vt159 + team member kick),
// 15 dock-return arithmetic, 18 building-enter split, 19 stop checks,
// 21 timer restart + landing handoff, 23 placement, 29/31/33 ammo ladder.
int AircraftClass::MissionDispatch(void * a2, int a3, void ** a4)
{
    unsigned int loco;
    switch (*(int *)((char *)this + 0xAC))
    {
    case 4:
    case 26:
    case 27:
    case 30:
    case 31:
        if (airstrike != nullptr)
            break;  // -> inner switch
        return 0;
    default:
        break;      // -> inner switch
    }

    switch (a3)
    {
    case 8:
        if (*(unsigned char *)((char *)Type + 0xDFC) != 0
         && (*(int (__thiscall **)(AircraftClass *))(*(unsigned int **)this + 97))(this) == 2
         && *(unsigned char *)((char *)this + 0x418) != 0
         && (*(int *)((char *)this + 0x118) == 0
             ? (void *)movementDestination == a2
             : CCINIClass_GetDB((void *)((char *)this + 0x114)) == a2))
        {
            return 10;
        }
        return FootClass::MissionDispatch(a2, a3, a4);

    case 14:
    {
        int cap = *(int *)((char *)Type + 0x5E0);
        if (cap <= 0 || *(int *)((char *)this + 0x114) >= cap)
            return FootClass::MissionDispatch(a2, a3, a4);
        FootClass::MissionDispatch(a2, a3, a4);
        loco = *(unsigned int *)&locomotor;
        if (loco == 0)
            WinAPI_Wrapper((int)0x80004003);
        if ((*(unsigned char (__stdcall **)(unsigned int))(*(unsigned int *)loco + 16))(loco) != 0)
            return 1;
        RateScaler_Init((void *)((char *)this + 0x350), *(double *)((char *)Type + 0x3C8));
        if ((*(int (__thiscall **)(AircraftClass *, int, void *))(*(unsigned int **)this + 158))(this, 19, a2) != 1)
            return 1;
        *a4 = this;
        if ((*(int (__thiscall **)(AircraftClass *, int, void **, void *))(*(unsigned int **)this + 159))(this, 18, a4, a2) == 1)
        {
            int member = Team_GetMember((int)this, 0);
            (*(void (__thiscall **)(int))(*(unsigned int **)(void *)member + 336))(member);
            return 1;
        }
        (*(void (__thiscall **)(AircraftClass *, int, void *))(*(unsigned int **)this + 158))(this, 3, a2);
        return 1;
    }

    case 15:
    {
        int cap = *(int *)((char *)Type + 0x5E0);
        if (cap == 0 || a2 == 0
         || Object_IsAlliedWithObjectHouse(owner, (int)a2) == 0)
            return FootClass::MissionDispatch(a2, a3, a4);
        int v16 = (*(int *)((char *)this + 0x114) >= cap) - 1;
        return (char)(v16 & 0xF7) + 10;
    }

    case 18:
    {
        int baseResult = FootClass::MissionDispatch(a2, a3, a4);
        void *v8 = *a4;
        if (*a4 != nullptr && (*(int (__thiscall **)(void *))(*(unsigned int **)v8 + 11))(v8) == 6)
        {
            int v10 = AbstractClass_IsTechnoType(v8);
            if ((*(int (__thiscall **)(AircraftClass *, int, void *))(*(unsigned int **)this + 158))(this, 15, (void *)v10) != 1)
                return 10;
            (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 122))(this, 7, 0);
        }
        else
        {
            (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 122))(this, 2, 0);
        }
        (void)baseResult;
        (*(void (__thiscall **)(AircraftClass *, void *, int))(*(unsigned int **)this + 288))(this, v8, 1);
        (*(void (__thiscall **)(AircraftClass *))(*(unsigned int **)this + 123))(this);
        return 1;
    }

    case 19:
    {
        int baseResult = FootClass::MissionDispatch(a2, a3, a4);
        loco = *(unsigned int *)&locomotor;
        if (loco == 0)
            WinAPI_Wrapper((int)0x80004003);
        if ((*(unsigned char (__stdcall **)(unsigned int))(*(unsigned int *)loco + 16))(loco) == 0)
            return 1;
        if (movementDestination == nullptr)
            return 1;
        if (*(unsigned char *)((char *)Type + 0x13D) != 0
         && movementDestination != nullptr
         && (*(int (__thiscall **)(void *))(*(unsigned int **)(void *)movementDestination + 11))(movementDestination) == 11
         && (void *)*(int *)((char *)this + 0x2B4) == (*(void *(__thiscall **)(AircraftClass *))(*(unsigned int **)this + 111))(this))
        {
            return 1;
        }
        return 10;
        (void)baseResult;
    }

    case 21:
    {
        if (*(int *)((char *)this + 0x114) == *(int *)((char *)Type + 0x5E0))
            Timer_StartDouble((void *)((char *)this + 0x350), *(double *)((char *)Type + 0x3C8));
        if (a2 != nullptr)
        {
            void *v13 = (*(int (__thiscall **)(void *))(*(unsigned int **)(void *)a2 + 44))(a2) == 15 ? a2 : nullptr;
            if (v13 != nullptr)
            {
                if (*(unsigned char *)(*(int *)((char *)v13 + 0x6C0) + 3777) != 0
                 && *(unsigned char *)((char *)v13 + 1753) == 0)
                {
                    (*(void (__thiscall **)(AircraftClass *, int))(*(unsigned int **)this + 242))(this, 0);
                    (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 288))(this, 0, 1);
                    (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 122))(this, 4, 0);
                }
            }
        }
        return 5;
    }

    case 23:
    {
        (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 122))(this, 2, 0);
        void *cpc = TechnoClass_FindClosestPlacementCell((int)this);
        (*(void (__thiscall **)(AircraftClass *, void *, int))(*(unsigned int **)this + 288))(this, cpc, 1);
        (*(void (__thiscall **)(AircraftClass *, int))(*(unsigned int **)this + 157))(this, 3);
        return FootClass::MissionDispatch(a2, a3, a4);
    }

    case 29:
        if (*(void **)((char *)this + 0x2B4) != nullptr)
            return 10;
        return *(int *)((char *)Type + 0x684) != *(int *)((char *)this + 0x2FC) ? 10 : 1;

    case 31:
        if (*(int *)((char *)this + 0x2FC) < *(int *)((char *)Type + 0x684) / 2
         || *(void **)((char *)this + 0x2B4) == nullptr)
            return FootClass::MissionDispatch(a2, a3, a4);
        return 1;

    case 33:
        return *(int *)((char *)Type + 0x684) != *(int *)((char *)this + 0x2FC) ? 10 : 1;

    default:
        return FootClass::MissionDispatch(a2, a3, a4);
    }
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
// G42.42j FULL implementation (truth 0x41A5C0; disasm 41A5C0-41A92B):
//   At flight ceiling (GetZAboveGround == Type max flight): with a team wait
//   for the dock timer (mission-control seconds * 900); teamless routes to
//   the weapon-slot check (ammo in slot -> guard requeue with 0x6D4 flag,
//   else To_Cell dispatch of current location + mission 2).  Below ceiling:
//   the ammo/threshold ladder (byte_889ECC/ECD mode split on Type+0x684 and
//   its half) can trigger the fallback landing search (vt528 at Type+0x3E8,
//   mission 7 + dispatch + radio release).  Common tail: radio-partner check,
//   team/hunt validation, non-current-player occupier scan, and the
//   FindMovePosition / mission-control-timeout split.
int AircraftClass::GetMissionTimer()
{
    int maxFlight = (*(int (__thiscall **)(AircraftTypeClass *))(*(unsigned int **)Type + 47))(Type);
    int ammo = *(int *)((char *)this + 0x2FC);
    int capacity = *(int *)((char *)Type + 0x684);

    if (GetZAboveGround(0) == maxFlight)
    {
        if (team != nullptr)
        {
            if (movementDestination != nullptr)
            {
                (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 122))(this, 2, 0);
                AircraftClass_field_bool_6D4 = true;
            }
            void *mc = GetMissionControl();
            return (int)Math::RoundToInt(*((double *)mc + 2) * 900.0);
        }
        int slot = SelectWeaponSlot(0);
        if (slot != 0 && *(int *)slot == 0)
        {
            slot = SelectWeaponSlot(0);
        }
        if (*(int *)(slot = SelectWeaponSlot(0)) != 0 || slot == 0)
        {
            // slot holds ammo (or absent): guard requeue
            if (team == nullptr)
            {
                (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 289))(this, 0, 1);
                AircraftClass_field_bool_6D4 = true;
            }
            return 1;
        }
        int coords[3];
        coords[0] = *(int *)((char *)this + 0x9C);
        coords[1] = *(int *)((char *)this + 0xA0);
        coords[2] = *(int *)((char *)this + 0xA4);
        void *cell = ((Coord *)&dword_87F7E8)->To_Cell((unsigned int *)coords);
        (*(void (__thiscall **)(AircraftClass *, void *, int))(*(unsigned int **)this + 288))(this, cell, 1);
        (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 122))(this, 2, 0);
        return 1;
    }

    // below ceiling
    bool goFallback = false;
    if (byte_889ECC != 0)
    {
        if (ammo != 0 || (*(unsigned char (__thiscall **)(AircraftClass *))(*(unsigned int **)this + 171))(this) != 0)
        {
            if (ammo != -1 && ammo < capacity / 2)
            {
                if (Team_AllMembersValid((int)this) != 0)
                {
                    int member = Team_GetMember((int)this, 0);
                    if ((*(int (__thiscall **)(void *))(*(unsigned int **)(void *)member + 11))((void *)member) == 6
                     && *(unsigned char *)(*(int *)((char *)member + 0x520) + 0x16AA) != 0)
                        return 1;
                }
            }
        }
        else
        {
            goFallback = true;
        }
    }
    else if (byte_889ECD != 0)
    {
        if ((*(unsigned char (__thiscall **)(AircraftClass *))(*(unsigned int **)this + 171))(this) != 0
         && ammo < capacity / 2)
            goFallback = true;
    }
    else
    {
        if ((*(unsigned char (__thiscall **)(AircraftClass *))(*(unsigned int **)this + 171))(this) != 0
         && ammo < capacity)
            goFallback = true;
    }

    if (goFallback)
    {
        if (Team_AllMembersValid((int)this) == 0)
        {
            void *found = (*(void **(__thiscall **)(AircraftClass *, void *, int, int))(*(unsigned int **)this + 132))(this, (void *)((char *)Type + 0x3E8), 0, 0);
            if (found != nullptr)
            {
                (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 122))(this, 7, 0);
                (*(void (__thiscall **)(AircraftClass *, void *, int))(*(unsigned int **)this + 288))(this, found, 1);
                (*(void (__thiscall **)(AircraftClass *, int))(*(unsigned int **)this + 242))(this, 0);
                return 1;
            }
        }
    }

    if (*(void **)((char *)this + 0x2B4) != nullptr)
    {
        (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 122))(this, 1, 0);
        return 1;
    }
    if ((*(unsigned char (__thiscall **)(AircraftClass *))(*(unsigned int **)this + 171))(this) == 0)
        return 45;
    if (GetZAboveGround(0) == 0 && Team_AllMembersValid((int)this) == 0)
        return 45;
    if (owner != nullptr && !owner->IsCurrentPlayer())
    {
        int coords[3];
        coords[0] = *(int *)((char *)this + 0x9C);
        coords[1] = *(int *)((char *)this + 0xA0);
        coords[2] = *(int *)((char *)this + 0xA4);
        void *occ = ((CellClass *)&dword_87F7E8)->ScanOccupiers((void *)coords);
        if (occ != nullptr)
        {
            (*(void (__thiscall **)(AircraftClass *, void *))(*(unsigned int **)this + 242))(this, occ);
            (*(void (__thiscall **)(AircraftClass *, int, int))(*(unsigned int **)this + 122))(this, 1, 0);
        }
    }
    if (owner == nullptr || !owner->IsCurrentPlayer()
     || (*(unsigned char (__thiscall **)(AircraftClass *))(*(unsigned int **)this + 21))(this) != 0)
        return FootClass::FindMovePosition();
    void *mc = GetMissionControl();
    return (int)Math::RoundToInt(*((double *)mc + 2) * 900.0)
         + Random::Range((void *)((char *)&dword_A8B230 + 0x218), 0, 2);
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
// G42.42k FULL implementation (truth 0x414080 + disasm): deleting-destructor.
//   Installs the five AircraftClass sub-vtables, then under the init-phase
//   guard: tech-tree recheck when the type became unbuildable, full techno
//   cleanup, team liberation, house unit-count decrement, direction cleanup.
//   Removes the object from the aircraft index (A8E390 family: index lookup +
//   shift-compact) and from the building load queue (lazy qsort + binary
//   search pair-removal), clears 0x6CC, and finishes with FootClass::Destruct.
void AircraftClass::Destruct()
{
    unsigned int self = (unsigned int)this;
    *(unsigned int *)(self) = (unsigned int)vt_AircraftClass_5;          // 0x7E22A4
    *(unsigned int *)(self + 8) = (unsigned int)vt_AircraftClass_3;      // 0x7E2280
    *(unsigned int *)(self + 0xC) = (unsigned int)vt_AircraftClass_2;    // 0x7E2278
    *(unsigned int *)(self + 4) = (unsigned int)vt_AircraftClass_4;      // 0x7E2288
    *(unsigned int *)(self + 0x6C0) = (unsigned int)vt_AircraftClass_6;  // 0x7E2250

    if (byte_A8E9A0 != 0)
    {
        if (Type != nullptr)
        {
            if (HouseClass_CanBuild(owner, (int)Type, 0, 0) == -1)
                *(unsigned char *)((char *)owner + 0x2D1) = 1;  // owner->recheckTechTree
            TechnoClass_CleanupAll((int)this, 0);
            if (team != nullptr)
            {
                ((gamemd::TeamClass *)team)->LiberateMember_Start(this, -1, 0);
                team = nullptr;
            }
            HouseClass_DecrementUnitCount(owner, this);
            TechnoClass_CleanupDirection((int)this);
            Type = nullptr;
        }
    }
    AbstractClass_AnnounceExpiredPointer((void *)this, 1);

    // aircraft index removal (A8E390 container: vt+16 lookup, shift-compact)
    {
        unsigned int me = self;
        int idx = (*(int (__thiscall **)(unsigned int *, unsigned int *))(*(unsigned int **)dword_A8E390 + 4))(&dword_A8E390, &me);
        --dword_A8E3A0;
        if (idx != -1 && idx < (int)dword_A8E3A0)
        {
            do
            {
                ++idx;
                *((unsigned int *)dword_A8E394 + idx - 1) = *((unsigned int *)dword_A8E394 + idx);
            }
            while (idx < (int)dword_A8E3A0);
        }
    }

    // building load queue removal (lazy qsort + binary search on pairs)
    {
        int vtable3 = AbstractClass_GetVtable3((void *)(self + 4));
        unsigned int queue = (unsigned int)&g_BuildingLoadQueue_Array;
        unsigned int items = *(unsigned int *)(queue + 4);
        unsigned int count = *(unsigned int *)(queue + 8);
        unsigned char sorted = *(unsigned char *)(queue + 12);
        if (count != 0)
        {
            if (sorted == 0)
            {
                qsort((void *)items, (unsigned int)count, 8u, CompareFunction_41C610);
                count = *(unsigned int *)(queue + 8);
                *(unsigned int *)(queue + 8) = count;
                *(unsigned char *)(queue + 12) = 1;
            }
            unsigned int *arr = (unsigned int *)items;
            int lo = (int)count;
            while (lo > 0)
            {
                int half = lo / 2;
                unsigned int cand = arr[2 * half];
                unsigned int *slot = &arr[2 * half];
                if ((unsigned int)vtable3 >= cand)
                {
                    if (cand == (unsigned int)vtable3)
                    {
                        if (slot != nullptr)
                        {
                            int pos = (int)(((char *)slot - (char *)items) >> 3);
                            if (pos != -1)
                            {
                                int k = pos + 1;
                                while (k < (int)count)
                                {
                                    unsigned int *dst = (unsigned int *)((char *)items + 8 * k);
                                    ++k;
                                    *(dst - 2) = *dst;
                                    *(dst - 1) = dst[1];
                                }
                                --count;
                                *(unsigned int *)(queue + 8) = (unsigned int)count;
                                *((unsigned int *)items + 2 * count) = 0;
                                *((unsigned int *)items + 2 * count + 1) = 0;
                                *(unsigned char *)(queue + 12) = 0;
                            }
                        }
                        break;
                    }
                    arr = (unsigned int *)((char *)slot + 8);
                    lo += -1 - lo / 2;
                }
                else
                {
                    lo /= 2;
                }
            }
        }
    }
    AircraftClass_field_6CC = 0;
    this->FootClass::~FootClass();  // G42.42k: base deleting-dtor tail (0x4D3590)
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
