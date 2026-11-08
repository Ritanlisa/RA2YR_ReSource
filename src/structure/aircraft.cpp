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
#include "team/team.hpp"  // G42.42e: TeamClass::LiberateMember (ProcessMissionTimeout)
#include "e4/classes/Cell_e4.hpp"  // G42.42f: CellClass::GetGroundHeight static (MoveTo)
#include "e4/classes/E4Recv_5785F0_e4.hpp"  // G42.42f: IsCoordVisibleMap (MoveTo)
#include "misc/locomotion.hpp"  // G42.42f: FacingClass::Set_SyncLog (MoveTo)
#include "type/aircraft_type.hpp"  // g57w10: gap2 chain carrier (Ammo/Passengers/DeployTime/ChargerBarrels via ml; e4 flat carrier lacked them)
#include "e4/classes/RulesClass_e4.hpp"  // gB C2027 supply

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
int HouseArray_FindHouseByIndex(void *array, void *key);  // 0xA8E390 house-array helper (vt slot 4)
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

    unsigned int weaponCtl = *(unsigned int *)this->ptr_6C0;
    unsigned char elevByte1 = (unsigned char)((((RulesClass *)dword_8871E0)->ElevationIncrement) >> 8);

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
            this->AssignDestination_SyncLog((int)spiral, 1);
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
            this->AssignDestination_SyncLog((int)target, 1);
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
                sub_7DC720((int)0x80004003);
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
            int *destC = ((ObjectClass *)movementDestination)->GetCoords(buf1);
            int *myC = this->GetCostMultiplier((int)(buf2), 0, 0, 0, 0);
            short v102;
            if (myC[0] == destC[0] && myC[1] == destC[1])
                v102 = 0;
            else
                v102 = (short)Math::RoundToInt(Math_CalcAngle((double)myC[1] - (double)destC[1],
                                                              (double)destC[0] - (double)myC[0]) * 65536.0 / 360.0 - 8192.0);
            FacingClass_Update(&secondaryFacing, &v102);
            (void)myCoords;
            return 1;
        }
        int *v16 = ObjectClass_CalcTargetFacing((int)this, myCoords, target);
        FacingClass_Update(&secondaryFacing, v16);
        if (v15 >= 16)
            return 1;
        missionStatus = 4;
        this->AssignDestination_SyncLog(0, 1);
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
            FacingClass_Update(&primaryFacing, v21);
            int *v22 = ObjectClass_CalcTargetFacing((int)this, coords, target);
            FacingClass_Update(&secondaryFacing, v22);
        }
        int v24 = this->SelectWeapon((int)target, 1);
        switch (this->CanFireAtTarget((int)target, v24))
        {
        case 0:
        {
            AircraftClass_field_bool_6C8 = true;
            int shots = 0;
            int v27 = this->SelectWeapon((int)target);
            for (;;)
            {
                int v29 = this->SelectWeapon((int)target);
                this->FlightUpdate((int)target, v29);
                ++shots;
                int v31 = this->SelectWeapon((int)target);
                if (shots >= *(int *)(*(int *)SelectWeaponSlot(v27) + 156))
                    break;
            }
            int loc[3];
            loc[0] = this->location.X;
            loc[1] = this->location.Y;
            loc[2] = this->location.Z;
            int *v32 = ((ObjectClass *)target)->GetCoords(buf2,(int)(loc));
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
            if (this->CheckCellPassable2((int)target) == 0
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
            this->TransitionEffectState(0);
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
        FacingClass_Update(&primaryFacing, v39);
        int *v40 = ObjectClass_CalcTargetFacing((int)this, coords, target);
        FacingClass_Update(&secondaryFacing, v40);
        int v42 = this->SelectWeapon((int)target, 1);
        switch (this->CanFireAtTarget((int)target, v42))
        {
        case 0u:
        {
            int v45 = this->SelectWeapon((int)target);
            this->FlightUpdate((int)target, v45);
            int loc[3];
            loc[0] = this->location.X;
            loc[1] = this->location.Y;
            loc[2] = this->location.Z;
            int *v46 = ((ObjectClass *)target)->GetCoords();
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
            if (this->CheckCellPassable2((int)target) == 0
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
            this->TransitionEffectState(0);
            break;
        default:
            if (ammo == 0)
            {
                missionStatus = 10;
                break;
            }
            if (this->CheckCellPassable2((int)target) != 0)
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
        int v50 = this->SelectWeapon((int)target, 1);
        int fireErr = this->CanFireAtTarget((int)target, v50);
        if (fireErr != 0 && fireErr != 2 && fireErr != 9)
        {
            if (fireErr == 8)
                this->AssignDestination_SyncLog((int)target, 1);
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
        int v96 = this->SelectWeapon((int)target);
        this->FlightUpdate();
        int loc[3];
        loc[0] = this->location.X;
        loc[1] = this->location.Y;
        loc[2] = this->location.Z;
        int *v53 = ((ObjectClass *)target)->GetCoords(buf1,(int)(loc), 1, 0, 0);
        void *v54 = ((Coord *)&dword_87F7E8)->To_Cell((unsigned int *)v53);
        Cell_ApplyDamage(v54, (int)target, v96, (int)outInts, (int)buf2);
        this->AssignDestination_SyncLog((int)target, 1);
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
        int v72 = this->SelectWeapon((int)target, 1);
        int fireErr = this->CanFireAtTarget((int)target, v72);
        if (fireErr != 0 && fireErr != 2 && fireErr != 8 && fireErr != 9)
        {
            if (ammo == 0)
            {
                missionStatus = 10;
                AircraftClass_field_bool_6D2 = false;
            }
            return 1;
        }
        int v94 = this->SelectWeapon();
        this->FlightUpdate();
        int loc[3];
        loc[0] = this->location.X;
        loc[1] = this->location.Y;
        loc[2] = this->location.Z;
        int *v75 = ((ObjectClass *)target)->GetCoords(buf2,(int)(loc), 1, 0, 0);
        void *v76 = ((Coord *)&dword_87F7E8)->To_Cell((unsigned int *)v75);
        Cell_ApplyDamage(v76, (int)target, v94, (int)target, (int)outInts);
        missionStatus = 3;
        return (*(int *)(SelectWeaponSlot(0) + 180) + 1024) / Type->Speed;
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
            this->CanFireAtTarget(0);
        }
        AircraftClass_field_bool_6D2 = false;
        int transitionCount = *(int *)owner->__pad_1E0;
        if (transitionCount < 0 || transitionCount > 3)
            transitionCount = owner->GetTransitionCount();
        int16_t openCell[2];
        ((CellClass *)&dword_87F7E8)->FindOpenNeighbor(
            (void *)openCell, transitionCount,
            (int)&g_AircraftStatusFlag, (int)&g_AircraftStatusFlag,
            4, 1, 0);
        void *v84 = ((CellCoord *)((void *)&dword_87F7E8))->To_CellObj((void *)openCell);
        this->AssignDestination_SyncLog((int)(v84), 1);
        AircraftClass_field_bool_6D5 = false;
        if (airstrike != nullptr && ammo > 0)
        {
            this->MissionDispatch(4, 0);  /* L4 正名: 0x41BA90 (was ProcessLanding) */
            AircraftClass_field_bool_6D5 = true;
            return 1;
        }
        this->HasValidTarget();  /* G57w9: raw 0x5B3A10 is 1-arg thiscall (this only); decl MissionClass::hasValidTarget q000 508 */
        AircraftClass_field_bool_6D5 = true;
        return 1;
    }
    default:
        break;
    }
    void *mc = GetMissionControl();
    return (int)Math::RoundToInt(*((double *)mc + 2) * 900.0)
         + ((Random *)((char *)&dword_A8B230 + 0x218))->Range(0, 2);
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
{
  Carryall *v5; // ecx
  int result; // eax
  int v7; // esi
  int Carryall_field_00; // eax
  char *MissionControl; // eax
  int v10; // eax
  Carryall v11; // edi
  void *NearbyCell; // eax
  int v13; // ecx
  unsigned int *v14; // eax
  int v15; // ecx
  int *v16; // eax
  int v17; // edx
  int v18; // edi
  unsigned int *v19; // eax
  int Element; // eax
  int *v21; // eax
  int v22; // ecx
  unsigned int *v23; // eax
  int v24; // edi
  int v25; // ebx
  unsigned short *v26; // eax
  int v27; // ecx
  unsigned int *v28; // eax
  int v29; // ecx
  unsigned int *v30; // eax
  int v31; // edi
  int v32; // ebx
  unsigned short *v33; // eax
  int v34; // ecx
  unsigned int *v35; // eax
  int v36; // [esp+0h] [ebp-60h]
  int v37; // [esp+4h] [ebp-5Ch]
  int v40; // [esp+1Ch] [ebp-44h]
  int v41; // [esp+1Ch] [ebp-44h]
  int16_t v40[2]; // [esp+20h] [ebp-40h] BYREF
  int16_t v41[2]; // [esp+24h] [ebp-3Ch] BYREF
  unsigned char v44[4]; // [esp+28h] [ebp-38h] BYREF
  int v45; // [esp+2Ch] [ebp-34h] BYREF
  unsigned int v46[2]; // [esp+30h] [ebp-30h] BYREF
  int v47; // [esp+38h] [ebp-28h]
  unsigned char v48[12]; // [esp+3Ch] [ebp-24h] BYREF
  unsigned char v49[12]; // [esp+48h] [ebp-18h] BYREF
  unsigned int v50[3]; // [esp+54h] [ebp-Ch] BYREF

  if ( *(unsigned char *)(v5[433].Carryall_field_00 + 3580) ) /*0x4166c6*/
    return Carryall::MissionStateMachine(v5); /*0x4166d0*/
  v7 = (int)v5; /*0x4166e6*/
  switch ( v5[47].Carryall_field_00 ) /*0x4166f4*/
  {
    case 0: /*0x4166f4*/
      Carryall_field_00 = v5[361].Carryall_field_00; /*0x4166fb*/
      if ( Carryall_field_00 ) /*0x416703*/
      {
        v11.Carryall_field_00 = v5->Carryall_field_00; /*0x416748*/
        NearbyCell = InfantryClass::FindNearbyCell((InfantryClass *)v5, Carryall_field_00); /*0x41674f*/
        v11->vt_slot_1152(v7, NearbyCell, 1); /*0x416757*/
        v7->missionStatus = 1; /*0x41675d*/
      }
      else
      {
        v5->vt_slot_1156(0, 1); /*0x41670d*/
      }
      goto LABEL_6; /*0x41670d*/
    case 1: /*0x4166f4*/
      v13 = v5[361].Carryall_field_00; /*0x416769*/
      if ( !v13 ) /*0x416771*/
        goto LABEL_29; /*0x416771*/
      v14 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *, int, int, int, int, int))(*(unsigned int *)v13 + 76))( /*0x41677f*/
                        v13,
                        v48,
                        v7,
                        a4,
                        a5,
                        a3,
                        a2);
      if ( !v7->locomotor ) /*0x41678a*/
        sub_7DC720(-2147467261); /*0x416799*/
      (*(void (__cdecl **)(unsigned int, unsigned int))(*v7->locomotor + 68))(v7->locomotor, *v14); /*0x4167b4*/
      v7->missionStatus = 2; /*0x4167b7*/
      return 1; /*0x4167cd*/
    case 2: /*0x4166f4*/
      if ( v5[328].Carryall_field_00 != -1 ) /*0x4167d5*/
      {
        v15 = v5[361].Carryall_field_00; /*0x4167db*/
        if ( !v15 ) /*0x4167e3*/
          goto LABEL_15; /*0x4167e3*/
        v16 = (int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v15 + 72))(v15, v49); /*0x4167ec*/
        v17 = *v16; /*0x4167ef*/
        v18 = v16[1]; /*0x4167fb*/
        v47 = v16[2]; /*0x416801*/
        a2 = v7->isImmobilized_d; /*0x41680e*/
        v37 = v7->waveEffect - v18; /*0x416811*/
        v36 = v7->location - v17; /*0x416812*/
        v47 = a2; /*0x416817*/
        v19 = ((Coord *)v50)->Subtract( v36, v37, 0); /*0x41681b*/
        v46[0] = *v19; /*0x416822*/
        v46[1] = v19->u32_4; /*0x416829*/
        v47 = v19->u32_8; /*0x416834*/
        if ( (int)Coord::Length((Coord *)v46) < 256 ) /*0x416847*/
        {
  LABEL_15:
          Element = Array::GetElement( /*0x416864*/
                      *(Array **)&dword_A83D4C->__pad_140[4 * v7->planningPathIdx + 208],
                      v7->waypointIndex);
          v21 = (int *)VectorClass::GetAtChecked( /*0x41687d*/
                         *(VectorClass **)&dword_A83D4C->__pad_140[4 * v7->planningPathIdx + 208],
                         Element);
          BuildingClass::ValidateFoundation_0(v7, a2, a3, v21, a4, a5); /*0x416885*/
        }
      }
      if ( !v7->locomotor ) /*0x41688a*/
        sub_7DC720(-2147467261); /*0x416899*/
      if ( !(*(uint8_t (__stdcall **)(unsigned int))(*v7->locomotor + 16))(v7->locomotor) ) /*0x4168a7*/
        goto LABEL_40; /*0x4168a7*/
      v22 = v7->movementDestination; /*0x4168b2*/
      if ( v22 ) /*0x4168ba*/
      {
        v23 = (unsigned int *)(*(int (__thiscall **)(int, unsigned int *, int))(*(unsigned int *)v22 + 76))(v22, v50, v7); /*0x4168c4*/
        v24 = *v23 / 256; /*0x4168ed*/
        v25 = v23[1] / 256; /*0x4168f0*/
        v26 = (unsigned short *)(*(int (__thiscall **)(int, unsigned char *))(v7->airstrikeTintTimer)(v7, v44); /*0x4168f3*/
        if ( (unsigned short)v24 == *v26 && (unsigned short)v25 == v26[1] ) /*0x416902*/
          goto LABEL_40; /*0x416902*/
      }
      v27 = v7->movementDestination; /*0x416908*/
      if ( v27 ) /*0x416910*/
      {
        v28 = (unsigned int *)(*(int (__thiscall **)(int, unsigned int *, int))(*(unsigned int *)v27 + 76))(v27, v50, v7); /*0x41691a*/
        (*((unsigned short *)&(v40))) = *v28 / 256; /*0x41692f*/
        (*(((unsigned short *)&(v40)) + 1)) = v28[1] / 256; /*0x416947*/
        *(unsigned int *)v40 = v40; /*0x416950*/
        if ( !Cell::IsOccupied((Cell *)v7, v40, 1) ) /*0x416957*/
          goto LABEL_24; /*0x41695e*/
      }
      v7->missionStatus = 4; /*0x416977*/
      return 1; /*0x41698d*/
    case 3: /*0x4166f4*/
      if ( !v5[413].Carryall_field_00 ) /*0x41698e*/
        sub_7DC720(-2147467261); /*0x41699d*/
      if ( !(*(uint8_t (__stdcall **)(int))(*(unsigned int *)v5[413].Carryall_field_00 + 16))(v5[413].Carryall_field_00) ) /*0x4169ab*/
  LABEL_29:
        v7->ValidatePlacement(0, 1); /*0x4169b2*/
      return 1; /*0x4169cc*/
    case 4: /*0x4166f4*/
      if ( !v5[413].Carryall_field_00 ) /*0x4169cd*/
        sub_7DC720(-2147467261); /*0x4169dc*/
      if ( !(*(uint8_t (__stdcall **)(int))(*(unsigned int *)v5[413].Carryall_field_00 + 16))(v5[413].Carryall_field_00) /*0x416a45*/
        || (v29 = v7->movementDestination) != 0
        && (v30 = (unsigned int *)(*(int (__thiscall **)(int, unsigned int *, int))(*(unsigned int *)v29 + 76))(v29, v50, v7),
            v31 = *v30 / 256,
            v32 = v30[1] / 256,
            v33 = (unsigned short *)(*(int (__thiscall **)(int, int *))(v7->airstrikeTintTimer)(v7, &v45),
            (unsigned short)v31 == *v33)
        && (unsigned short)v32 == v33[1] )
      {
  LABEL_40:
        v7->missionStatus = 3; /*0x416ab6*/
      }
      else
      {
        v34 = v7->movementDestination; /*0x416a47*/
        if ( v34 ) /*0x416a4f*/
        {
          v35 = (unsigned int *)(*(int (__thiscall **)(int, unsigned int *, int))(*(unsigned int *)v34 + 76))(v34, v50, v7); /*0x416a59*/
          (*((unsigned short *)&(v41))) = *v35 / 256; /*0x416a6e*/
          (*(((unsigned short *)&(v41)) + 1)) = v35[1] / 256; /*0x416a86*/
          *(unsigned int *)v41 = v41; /*0x416a8f*/
          if ( !Cell::IsOccupied((Cell *)v7, v41, 1) ) /*0x416a96*/
          {
  LABEL_24:
            v7->missionStatus = 0; /*0x416960*/
            return 1; /*0x416976*/
          }
        }
      }
      result = 1; /*0x416ac3*/
      break; /*0x416ac3*/
    default:
  LABEL_6:
      MissionControl = MissionClass::GetMissionControl((MissionClass *)v7); /*0x416713*/
      (*((unsigned short *)&(v10))) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x416723*/
      return v10 + ((Random *)&dword_A8B230[14].NeedsSaveOrLink)->Range(0, 2); /*0x416747*/
  }
  return result; /*0x416747*/
}
// 0x419c80
// G42.42i FULL implementation (truth 0x419C80; overlay decoded): airborne
{
  int *v2; // ecx
  int *v3; // esi
  unsigned int *v4; // edi
  Cell *v5; // eax
  unsigned int *v6; // eax
  int v7; // edx
  int result; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // edi
  int *v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edi
  int v19; // edx
  int v20; // edi
  int v21; // edx
  int v22; // edx
  int v23; // eax
  int Member; // eax
  int v25; // ebx
  unsigned int *v26; // edi
  int v27; // edi
  void *ClosestPlacementCell; // eax
  unsigned int v29[3]; // [esp+Ch] [ebp-30h] BYREF
  unsigned char v30[12]; // [esp+18h] [ebp-24h] BYREF
  unsigned char v31[20]; // [esp+24h] [ebp-18h] BYREF
  int v32; // [esp+38h] [ebp-4h]

  v3 = v2; /*0x419c85*/
  if ( (*(int (**)(void))(*v2 + 456))()
    || !v3->Type->AirportBound_2
    || !v3->movementDestination
    || (v4 = v3->movementDestination, v5 = (Cell *)v3->GetCellCoords(), v4 == Cell::IsBridge(v5)) )
  {
    if ( v3->GetZAboveGround() > 0 )
    {
      v9 = v3->movementDestination; /*0x419d19*/
      if ( v3->AircraftClass_field_6CC != v9 && v9 && (*(int (__thiscall **)(int))(*(unsigned int *)v9 + 44))(v9) == 6 )
      {
        v10 = v3->movementDestination; /*0x419d37*/
        if ( v10 )
          v11 = (*(int (__thiscall **)(int))(*(unsigned int *)v10 + 44))(v3->movementDestination) == 6 ? v10 : 0;
        else
          v11 = 0; /*0x419d41*/
        v3->AircraftClass_field_6CC = v11; /*0x419d57*/
      }
    }
    if ( v3->movementDestination /*0x419d86*/
      || v3->ProcessDockCheck() == 2
      || v3->ThunkTo159x4(14) == 1
      || TechnoClass::PlaceAtCell((TechnoClass *)v3) )
    {
      switch ( v3->missionStatus ) /*0x419dbc*/
      {
        case 0: /*0x419dbc*/
          v3->missionStatus = 6; /*0x419dc3*/
          goto LABEL_24; /*0x419dc3*/
        case 1: /*0x419dbc*/
        case 2: /*0x419dbc*/
        case 3: /*0x419dbc*/
        case 4: /*0x419dbc*/
        case 5: /*0x419dbc*/
  LABEL_24:
          v3->AircraftClass_field_bool_6D4 = 1; /*0x419dcd*/
          return 1; /*0x419ddf*/
        case 6: /*0x419dbc*/
          if ( v3->Type->AirportBound_2 && v3->GetZAboveGround() ) /*0x419df4*/
            v3->ThunkTo159x4(14); /*0x419e04*/
          if ( (uint8_t)Team::AllMembersValid((Team *)v3) ) /*0x419e0c*/
          {
            if ( !v3->locomotor ) /*0x419eaa*/
              sub_7DC720(-2147467261); /*0x419eb9*/
            if ( (*(int (__stdcall **)(int))(*v3->locomotor + 144))(v3->locomotor) == 1 /*0x419ee6*/
              || v3->Type->AirportBound_2 && !v3->GetZAboveGround() )
            {
              v3->missionStatus = 7; /*0x419ef0*/
              v3->AircraftClass_field_bool_6D4 = 0; /*0x419ef6*/
            }
            result = 3; /*0x419eff*/
          }
          else
          {
            if ( !TechnoClass::PlaceAtCell((TechnoClass *)v3) ) /*0x419e1b*/
            {
              if ( !v3->locomotor ) /*0x419e24*/
                sub_7DC720(-2147467261); /*0x419e33*/
              if ( (*(int (__stdcall **)(int))(*v3->locomotor + 144))(v3->locomotor) == 1 ) /*0x419e4a*/
              {
                v3->missionStatus = 7; /*0x419e4c*/
                v3->AircraftClass_field_bool_6D4 = 1; /*0x419e52*/
              }
              if ( v3->queuedMission == -1 ) /*0x419e5f*/
              {
                v3->AssignDestination(0, 1); /*0x419e69*/
                v3->ValidatePlacement(0, 1); /*0x419e77*/
                v3->AircraftClass_field_bool_6D4 = 1; /*0x419e7d*/
                return 1; /*0x419e8f*/
              }
              v3->AircraftClass_field_bool_6D4 = 1; /*0x419e90*/
            }
            v3->AircraftClass_field_bool_6D4 = 1; /*0x419e97*/
            result = 1; /*0x419ea0*/
          }
          break; /*0x419ea9*/
        case 7: /*0x419dbc*/
          if ( !v3->locomotor ) /*0x419f09*/
            sub_7DC720(-2147467261); /*0x419f18*/
          if ( (*(int (__stdcall **)(int))(*v3->locomotor + 144))(v3->locomotor) == 1 ) /*0x419f2f*/
          {
            v12 = v3->movementDestination; /*0x419f35*/
            if ( v12 ) /*0x419f3d*/
            {
              if ( (*(int (__thiscall **)(int))(*(unsigned int *)v12 + 44))(v3->movementDestination) == 6 ) /*0x419f4d*/
                v13 = (int *)(*(int (__thiscall **)(int, unsigned char *, int *))(*(unsigned int *)v12 + 168))(v12, v30, v3); /*0x419f59*/
              else
                v13 = (int *)v3->movementDestination->GetCoords_0(v3->movementDestination, v31); /*0x419f6e*/
              v14 = *v13; /*0x419f71*/
              v15 = v13[1]; /*0x419f73*/
              v32 = v13[2]; /*0x419f79*/
              v16 = v3->location; /*0x419f85*/
              v17 = v14 - v16; /*0x419f87*/
              v18 = v3[40]; /*0x419f89*/
              v19 = v15 - v18; /*0x419f8c*/
              v29[2] = v3[41]; /*0x419f93*/
              if ( v17 <= 0 ) /*0x419f97*/
              {
                if ( v17 < -5 ) /*0x419fa8*/
                  v17 = -5; /*0x419faa*/
              }
              else if ( v17 > 5 ) /*0x419f9c*/
              {
                v17 = 5; /*0x419f9e*/
              }
              if ( v19 <= 0 ) /*0x419fb1*/
              {
                if ( v19 < -5 ) /*0x419fc2*/
                  v19 = -5; /*0x419fc4*/
              }
              else if ( v19 > 5 ) /*0x419fb6*/
              {
                v19 = 5; /*0x419fb8*/
              }
              v20 = v19 + v18; /*0x419fcb*/
              v21 = *v3; /*0x419fcd*/
              v29[0] = v17 + v16; /*0x419fcf*/
              v29[1] = v20; /*0x419fda*/
              v21->SetPosition(v3, v29); /*0x419fde*/
            }
            v3->AircraftClass_field_bool_6D4 = 1; /*0x419fe4*/
            return 1; /*0x419fed*/
          }
          else
          {
            v22 = *v3; /*0x419ff7*/
            v3->AircraftClass_field_bool_6D4 = 1; /*0x419ffd*/
            v23 = v22->ThunkTo159x4(v3, 21) - 1; /*0x41a00a*/
            if ( v23 ) /*0x41a00b*/
            {
              if ( v23 == 4 ) /*0x41a010*/
              {
                v3->CleanupDirection(); /*0x41a030*/
                Member = Team::GetMember((Team *)v3, 0); /*0x41a03b*/
                CellClass::AddObject(&Member->u32_114, v3); /*0x41a048*/
              }
              else
              {
                v3->ValidatePlacement(0, 1); /*0x41a01a*/
              }
              return 1; /*0x41a022*/
            }
            else if ( v3->Type->Carryall_d && v3->q118 ) /*0x41a06d*/
            {
              v25 = Team::GetMember((Team *)v3, 0); /*0x41a08b*/
              v26 = (unsigned int *)LinkedList::Pop((LinkedList *)v3 + 23); /*0x41a09a*/
              v3->ThunkTo159x4(3, a2); /*0x41a09c*/
              if ( v26->vt_slot_632(2, v25) == 1 ) /*0x41a0b2*/
              {
                CellClass::AddObject(&v3->u32_45, v26); /*0x41a0b7*/
                v3->UpdateReveal(0); /*0x41a0c2*/
                FootClass::MissionMoveCarryallLand((FootClass *)v3); /*0x41a0ca*/
                v3->UpdateReveal(1); /*0x41a0d5*/
              }
              else
              {
                v27 = *v3; /*0x41a0f6*/
                ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((TechnoClass *)v3); /*0x41a0fc*/
                v27->Stub(v3, ClosestPlacementCell); /*0x41a104*/
              }
              v3->MissionDispatch(2, 0);  /* L4 正名: 0x41BA90 */ /*0x41a0e3*/
              return 1; /*0x41a0ec*/
            }
            else
            {
              v3->MissionDispatch(5, 0);  /* L4 正名: 0x41BA90 */ /*0x41a12d*/
              return 1; /*0x41a133*/
            }
          }
        default:
          return 1;
      }
    }
    else
    {
      v3->ValidatePlacement(0, 1); /*0x419d97*/
      return 1; /*0x419d9f*/
    }
  }
  else
  {
    if ( v4 )
      v6 = (*(int (__thiscall **)(unsigned int *))(*v4 + 44))(v4) == 6 ? v4 : 0;
    else
      v6 = 0; /*0x419cc9*/
    v7 = *v3; /*0x419cdf*/
    v3->AircraftClass_field_6CC = (int)v6; /*0x419ce5*/
    v7->ThunkTo159x4(v3, 3); /*0x419ceb*/
    v3->MissionDispatch(2, 1);  /* L4 正名: 0x41BA90 */ /*0x419cf9*/
    return 1; /*0x419d01*/
  }
  return result; /*0x419cff*/
}
// 0x4190b0
// G42.42l FULL implementation (truth 0x4190B0; disasm-verified).  Outer
{
  int result; // eax
  void (__thiscall **v6)(AircraftClass *, void *, int); // ebx
  void *ClosestPlacementCell; // eax
  AbstractClass *v8; // edi
  int (__thiscall **ptr_0)(AircraftClass *, int, void *); // ebx
  void *v10; // eax
  AbstractClass *movementDestination; // ecx
  AircraftTypeClass *Type; // eax
  unsigned int *v13; // eax
  int v14; // eax
  int Member; // eax
  int v16; // eax
  unsigned int *v17; // [esp+0h] [ebp-10h]

  switch ( this->currentMission )
  {
    case 4:
    case 0x1A:
    case 0x1B:
    case 0x1E:
    case 0x1F:
      if ( this->airstrike ) /*0x4190d3*/
        goto LABEL_4; /*0x4190db*/
  LABEL_3:
      result = 0; /*0x4190dd*/
      break; /*0x4190e3*/
    default:
  LABEL_4:
      switch ( a3 )
      {
        case 8:
          if ( !this->Type[1].ptr_0[300] /*0x419519*/
            || (*((int (__thiscall **)(AircraftClass *))this->ptr_0 + 97))(this) != 2
            || !this->isTether
            || (!this->passengers[1] || (unsigned int *)CCINIClass::GetDB((CCINIClass *)this->passengers) != a2)
            && this->movementDestination != (AbstractClass *)a2 )
          {
            return FootClass::MissionDispatch((FootClass *)a2, a3, (unsigned int *)a3, (int)a4, v17); /*0x419519*/
          }
          return 10; /*0x419519*/
        case 14:
          v14 = *&this->Type[1504]; /*0x41939d*/
          if ( v14 <= 0 || this->passengers[0] >= v14 ) /*0x4193b1*/
            return FootClass::MissionDispatch((FootClass *)a2, a3, (unsigned int *)a3, (int)a4, v17); /*0x4193b1*/
          FootClass::MissionDispatch((FootClass *)a2, a3, (unsigned int *)a3, (int)a4, v17); /*0x4193c4*/
          if ( !this->locomotor[0] ) /*0x4193c9*/
            sub_7DC720(-2147467261); /*0x4193d8*/
          if ( (*(uint8_t (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 16))(this->locomotor[0]) ) /*0x4193e6*/
            return 1; /*0x4193e6*/
          RateScaler::Init((RateScaler *)this->storedTiberium, *&this->Type[968]); /*0x419407*/
          if ( (*((int (__thiscall **)(AircraftClass *, int, unsigned int *))this->ptr_0 + 158))(this, 19, a2) != 1 ) /*0x41941c*/
            return 1; /*0x41941c*/
          *a4 = this; /*0x41941e*/
          if ( (*((int (__thiscall **)(AircraftClass *, int, void **, unsigned int *))this->ptr_0 + 159))(this, 18, a4, a2) == 1 ) /*0x419431*/
          {
            Member = Team::GetMember((Team *)this, 0); /*0x419450*/
            Member->Remove(); /*0x419459*/
            return 1; /*0x41945f*/
          }
          else
          {
            (*((void (__thiscall **)(AircraftClass *, int, unsigned int *))this->ptr_0 + 158))(this, 3, a2); /*0x41943a*/
            return 1; /*0x419443*/
          }
        case 15:
          if ( !*&this->Type[1504] /*0x419492*/
            || !a2
            || !(uint8_t)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)a2) )
          {
            goto LABEL_3; /*0x419499*/
          }
          v16 = (this->passengers[0] >= *&this->Type[1504]) - 1; /*0x4194b9*/
          (*((unsigned char *)&(v16))) = v16 & 0xF7; /*0x4194bb*/
          return v16 + 10; /*0x4194c2*/
        case 18:
          FootClass::MissionDispatch((FootClass *)a2, a3, (unsigned int *)a3, (int)a4, v17); /*0x4191ff*/
          v8 = (AbstractClass *)*a4; /*0x419204*/
          if ( *a4 && (*((int (__thiscall **)(AbstractClass *))v8->ptr_0 + 11))(v8) == 6 ) /*0x419214*/
          {
            ptr_0 = (int (__thiscall **)(AircraftClass *, int, void *))this->ptr_0; /*0x419216*/
            v10 = AbstractClass::IsTechnoType(v8); /*0x41921a*/
            if ( ptr_0[158](this, 15, v10) != 1 ) /*0x41922d*/
              return 10; /*0x419238*/
            (*((void (__thiscall **)(AircraftClass *, int, unsigned int))this->ptr_0 + 122))(this, 7, 0); /*0x419241*/
          }
          else
          {
            (*((void (__thiscall **)(AircraftClass *, int, unsigned int))this->ptr_0 + 122))(this, 2, 0); /*0x41924b*/
          }
          (*((void (__thiscall **)(AircraftClass *, AbstractClass *, int))this->ptr_0 + 288))(this, v8, 1); /*0x419258*/
          (*((void (__thiscall **)(AircraftClass *))this->ptr_0 + 123))(this); /*0x419262*/
          result = 1; /*0x41926b*/
          break; /*0x419271*/
        case 19:
          FootClass::MissionDispatch((FootClass *)a2, a3, (unsigned int *)a3, (int)a4, v17); /*0x419281*/
          if ( !this->locomotor[0] ) /*0x419286*/
            sub_7DC720(-2147467261); /*0x419295*/
          if ( !(*(uint8_t (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 16))(this->locomotor[0]) ) /*0x4192a3*/
            return 1; /*0x4192a3*/
          movementDestination = this->movementDestination; /*0x4192ae*/
          if ( !movementDestination ) /*0x4192b6*/
            return 1; /*0x4192b6*/
          if ( this->Type[1].ptr_0[317] /*0x4192ee*/
            && (*((int (__thiscall **)(AbstractClass *))movementDestination->ptr_0 + 11))(movementDestination) == 11
            && this->movementDestination == (AbstractClass *)(*((int (__thiscall **)(AircraftClass *))this->ptr_0 + 111))(this) )
          {
            return 1; /*0x4192f7*/
          }
          else
          {
            return 10; /*0x41951f*/
          }
        case 21:
          Type = this->Type; /*0x419300*/
          if ( this->passengers[0] == *&Type->ptr_0 ) /*0x419312*/
            Timer::StartDouble((Timer *)this->storedTiberium, *&Type->ptr_0); /*0x419328*/
          if ( a2 )
          {
            v13 = (*(int (__thiscall **)(unsigned int *))(*a2 + 44))(a2) == 15 ? a2 : 0;
            if ( v13 ) /*0x419347*/
            {
              if ( *(unsigned char *)(v13[432] + 3777) && !*((unsigned char *)v13 + 1753) ) /*0x419359*/
              {
                (*((void (__thiscall **)(AircraftClass *, unsigned int))this->ptr_0 + 242))(this, 0); /*0x419369*/
                (*((void (__thiscall **)(AircraftClass *, unsigned int, int))this->ptr_0 + 288))(this, 0, 1); /*0x419377*/
                (*((void (__thiscall **)(AircraftClass *, int, unsigned int))this->ptr_0 + 122))(this, 4, 0); /*0x419385*/
              }
            }
          }
          return 5; /*0x419394*/
        case 23:
          (*((void (__thiscall **)(AircraftClass *, int, unsigned int))this->ptr_0 + 122))(this, 2, 0); /*0x4191b7*/
          v6 = (void (__thiscall **)(AircraftClass *, void *, int))this->ptr_0; /*0x4191bd*/
          ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((TechnoClass *)this); /*0x4191c3*/
          v6[288](this, ClosestPlacementCell, 1); /*0x4191cb*/
          (*((void (__thiscall **)(AircraftClass *, int))this->ptr_0 + 157))(this, 3); /*0x4191d7*/
          return FootClass::MissionDispatch((FootClass *)a2, a3, (unsigned int *)a3, (int)a4, v17); /*0x4191d7*/
        case 29:
          if ( this->target )
            return 10; /*0x419160*/
          else
            return *&this->Type[1668] != this->ammo ? 10 : 1;
        case 31:
          if ( this->ammo < *&this->Type[1668] / 2 || !this->target ) /*0x419124*/
            return FootClass::MissionDispatch((FootClass *)a2, a3, (unsigned int *)a3, (int)a4, v17); /*0x41912c*/
          return 1; /*0x419137*/
        case 33:
          return *&this->Type[1668] != this->ammo ? 10 : 1;
        default:
          return FootClass::MissionDispatch((FootClass *)a2, a3, (unsigned int *)a3, (int)a4, v17); /*0x4191ef*/
      }
      break; /*0x4191ef*/
  }
  return result; /*0x4190dd*/
}
// 0x414310
// G42.42f FULL implementation (truth 0x414310): height-aware dispatch.
{
  unsigned int *v3; // ebx
  int Type; // ecx
  int v6; // edi
  int GroundHeight; // ebx
  char v8; // bl
  int result; // eax
  int v10; // eax
  int16_t v11; // dx
  int v12; // eax
  int v13; // ecx
  int v14; // edi
  int v15; // [esp+Ch] [ebp-Ch] BYREF
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]

  v3 = a2; /*0x414314*/
  v15 = *a2; /*0x414320*/
  Type = this->Type; /*0x414324*/
  v16 = a2[1]; /*0x41432d*/
  v17 = a2[2]; /*0x414334*/
  if ( !Type->__pad_D68 ) /*0x414338*/
  {
    if ( this->ptr_0.ptr_0.isALoaner[0] || !(uint8_t)IsCoordVisibleMap((ObjectClass *)&dword_87F7E8, a2) ) /*0x414352*/
    {
      v6 = this->Type; /*0x41436c*/
      GroundHeight = Cell::GetGroundHeight(v3); /*0x414381*/
      v17 = v6->GetSightRange() + GroundHeight; /*0x41438b*/
    }
    else
    {
      v17 = Cell::GetGroundHeight(v3); /*0x414366*/
    }
  }
  v8 = a3; /*0x41438f*/
  if ( FootClass::DispatchInput(&this->ptr_0.ptr_0.ptr_0.ptr_0.ptr_0.ptr_0.ptr_0, (int)&v15, a3) ) /*0x41439b*/
  {
    v10 = this->Type; /*0x4143a8*/
    if ( !v10->Selectable_d /*0x4143e1*/
      || !v10->Landable_2
      || *(unsigned int *)this->SelectVocOrSfx(0)
      && *(unsigned char *)(*(unsigned int *)this->SelectVocOrSfx(0)
                  + 327) )
    {
      this->ptr_0.ptr_0.isALoaner[0] = 1; /*0x4143eb*/
    }
    if ( this->ptr_0.ptr_0.passengers[1] ) /*0x4143f2*/
      this->HasPassengers[0] = 1; /*0x4143fc*/
    (*((unsigned char *)&(v11))) = 0; /*0x414403*/
    (*(((unsigned char *)&(v11)) + (sizeof(v11) - 1))) = v8; /*0x414409*/
    (*((unsigned short *)&(a2))) = v11; /*0x414412*/
    FacingClass::Set_SyncLog((char *)this->ptr_0.ptr_0.secondaryFacing, &a2); /*0x414417*/
    this->ptr_0.ptr_0.animation[2] = (int)dword_A8ED84; /*0x41442c*/
    v12 = v16; /*0x41442e*/
    this->ptr_0.ptr_0.animation[5] = 1; /*0x414432*/
    this->ptr_0.ptr_0.animation[3] = v12; /*0x414438*/
    this->ptr_0.ptr_0.animation[4] = 1; /*0x41443b*/
    v13 = this->Type; /*0x41443e*/
    this->ptr_0.ptr_0.animation[0] = 0; /*0x414444*/
    v14 = v13->GetSightRange(); /*0x414456*/
    if ( this->GetZAboveGround() == v14 ) /*0x414464*/
      result = (*(int (__thiscall **)(AircraftClass *, unsigned int, int))(this->ptr_0.ptr_0.ptr_0.ptr_0.ptr_0.ptr_0.ptr_0 /*0x414471*/
                                                                   + 1348))(
                 this,
                 0,
                 1072693248);
    else
      result = (*(int (__thiscall **)(AircraftClass *, unsigned int, unsigned int))(this->ptr_0.ptr_0.ptr_0.ptr_0.ptr_0.ptr_0.ptr_0 /*0x41448a*/
                                                                      + 1348))(
                 this,
                 0,
                 0);
    (*((unsigned char *)&(result))) = 1; /*0x414479*/
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x41449d*/
  }
  return result; /*0x414477*/
}
// IDA: 0x417BD0 (ValidateMovement, 137B)
int AircraftClass::ValidateMovement()
{
    // Validate aircraft movement
    return 0;
}

// IDA: 0x417F80 (CanEnterCell, 80B)
// G42.42d FULL implementation (truth 0x417F80; disasm-verified):
//   owner (&this->hasParachuteC) must be human; base HandleCursorWithCheck; when the
//   result is 5 (enter-ok) additionally require SelectWeaponSlot(vt+1016)(0).
int AircraftClass::CanEnterCell(int16_t* a2, char a3, char a4)
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
{
  int result; // eax

  switch ( this->currentMission ) /*0x41baab*/
  {
    case 4: /*0x41baab*/
    case 0x1A: /*0x41baab*/
    case 0x1B: /*0x41baab*/
    case 0x1E: /*0x41baab*/
    case 0x1F: /*0x41baab*/
      if ( this->airstrike ) /*0x41bab2*/
        goto LABEL_4; /*0x41baba*/
      result = a2 - 4; /*0x41babc*/
      switch ( a2 ) /*0x41bacc*/
      {
        case 4: /*0x41bacc*/
        case 26: /*0x41bacc*/
        case 27: /*0x41bacc*/
        case 30: /*0x41bacc*/
        case 31: /*0x41bacc*/
          goto LABEL_4;
        default:
          return result;
      }
    default:
  LABEL_4:
      result = ParticleClass::MissionDispatch((MissionClass *)this); /*0x41bad3*/
      break; /*0x41bad9*/
  }
  return result; /*0x41bade*/
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
{
  double v1; // st7
  HouseClass *owner; // ecx
  int *TransitionCount; // eax
  void (__thiscall **ptr_0)(AircraftClass *, void *, int); // edi
  void *v6; // eax
  int v8; // [esp+0h] [ebp-Ch]
  int16_t v9[2]; // [esp+4h] [ebp-8h] BYREF
  int v10; // [esp+8h] [ebp-4h] BYREF

  if ( verified->movementDestination ) /*0x415a56*/
  {
    if ( verified->movementDestination == (AbstractClass *)(*((int (__thiscall **)(AircraftClass *))verified->ptr_0 + 111))(verified) ) /*0x415aef*/
      (*((void (__thiscall **)(AircraftClass *, unsigned int, int))verified->ptr_0 + 288))(verified, 0, 1); /*0x415af9*/
  }
  else
  {
    owner = verified->owner; /*0x415a60*/
    TransitionCount = *&owner->__pad_1E0; /*0x415a66*/
    if ( (unsigned int)TransitionCount >= 4 ) /*0x415a6e*/
      TransitionCount = (int *)HouseClass::GetTransitionCount(owner); /*0x415a75*/
    *(unsigned int *)v9 = *CellClass::FindOpenNeighbor( /*0x415aa3*/
                       (CellClass *)&v10,
                       v1,
                       TransitionCount,
                       (int)&g_AircraftStatusFlag,
                       (int)&g_AircraftStatusFlag,
                       4,
                       1,
                       0,
                       v8);
    if ( *(unsigned int *)v9 != g_AircraftStatusFlag ) /*0x415aa7*/
    {
      ptr_0 = (void (__thiscall **)(AircraftClass *, void *, int))verified->ptr_0; /*0x415ab8*/
      v6 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v9); /*0x415ac6*/
      ptr_0[288](verified, v6, 1); /*0x415ace*/
      return 3; /*0x415ade*/
    }
  }
  return 3; /*0x415ada*/
}
// IDA: 0x41A590 (CheckLandingClearance, 33B)
int AircraftClass::CheckLandingClearance()
{
    // Check landing area is clear
    return 0;
}

// AircraftClass::Mission_Unload_full -- aircraft full-unload override (no standalone IDA function).
// NOTE: previous annotation pointed at AircraftClass::ProcessLanding (a different function).
int AircraftClass::Mission_Unload_full()
{
    // Full unload with parachute deployment
    if (!HasPassengers)
        return 0;

    // Deploy passengers with parachutes
    HasPassengers = false;
    return 5;
}

// IDA: 0x41BE60 (LandingCheckStub, 5B) — q000 entry, always returns 0
// 0x41BE60
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
  if ( this->currentMission != 30 ) /*0x41b877*/
    this->AircraftClass_field_bool_6D2 = 0; /*0x41b879*/
  return ((MissionClass *)this)->AdvanceState();
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

// 0x41ADC0
int AircraftClass::ProcessDockCheck()
{
  if ( !this->locomotor[0] ) /*0x41adc3*/
    sub_7DC720(-2147467261); /*0x41add2*/
  return (*(int (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 116))(this->locomotor[0]); /*0x41ade3*/
}

// IDA: 0x41B9F0 (UpdateDocking, 77B)
int AircraftClass::UpdateDocking()
{
    // Update docking state
    return 0;
}

// 0x41C070
int AircraftClass::CheckDockState()
{
  return this->frozenStill; /*0x41c076*/
}

// 0x41C020
int AircraftClass::CheckReloadTimer()
{
  int result; // eax

  (*((unsigned char *)&(result))) = this->isDisguisedFlag; /*0x41c020*/
  return result; /*0x41c026*/
}

// ============================================================
// Phase 3: Per-Frame & AI
// ============================================================

// 0x41b610
// G42.42d FULL implementation (truth 0x41B610; disasm-verified):
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx

  v3 = FootClass::BeginPowerUpdate((FootClass *)this, verified); /*0x41b619*/
  (*((unsigned char *)&(v3))) = this->HasPassengers; /*0x41b61e*/
  Power::FlagProcess((Power *)verified, v3); /*0x41b627*/
  (*((unsigned char *)&(v4))) = this->AircraftClass_field_bool_6D0; /*0x41b62c*/
  Power::FlagProcess((Power *)verified, v4); /*0x41b635*/
  (*((unsigned char *)&(v5))) = this->AircraftClass_field_bool_6D1; /*0x41b63a*/
  Power::FlagProcess((Power *)verified, v5); /*0x41b643*/
  return Power::TimerProcess(this->AircraftClass_field_char_6D3); /*0x41b657*/
}
// IDA: 0x41B660 (HandleTargetDestroyed, 56B)
// 0x41b660
// G42.42d FULL implementation (truth 0x41B660): base call, then clear
{
  int result; // eax

  FootClass::HandleTargetDestroyed((FootClass *)this, a2, a3); /*0x41b66e*/
  result = 0; /*0x41b679*/
  if ( (int *)this->AircraftClass_field_6CC == a2 ) /*0x41b67d*/
    this->AircraftClass_field_6CC = 0; /*0x41b67f*/
  if ( (int *)this->Type == a2 ) /*0x41b68b*/
    this->Type = 0; /*0x41b68d*/
  return result; /*0x41b693*/
}
// 0x414a80
// G42.42e FULL implementation (truth 0x414A80; disasm-verified):
{
  int *team; // ecx
  char *MissionControl; // eax
  int v4; // eax
  int (__thiscall **ptr_0)(AircraftClass *, int, int *, unsigned int); // edi
  int v7; // eax
  void *v8; // edi
  int v9; // eax
  int v10; // [esp+10h] [ebp-Ch] BYREF
  int v11; // [esp+14h] [ebp-8h]
  int v12; // [esp+18h] [ebp-4h]

  if ( verified->ammo ) /*0x414a86*/
  {
    if ( verified->target ) /*0x414ae5*/
      goto LABEL_12; /*0x414ae5*/
    if ( *(unsigned int *)&dword_A8B238 ) /*0x414afb*/
    {
      ptr_0 = (int (__thiscall **)(AircraftClass *, int, int *, unsigned int))verified->ptr_0; /*0x414b03*/
      v10 = verified->location[0]; /*0x414b09*/
      v11 = verified->location[1]; /*0x414b15*/
      v12 = verified->location[2]; /*0x414b20*/
      v7 = ptr_0[241](verified, 64, &v10, 0); /*0x414b24*/
      ((void (__thiscall *)(AircraftClass *, int))ptr_0[242])(verified, v7); /*0x414b2d*/
    }
    if ( !verified->target ) /*0x414b33*/
    {
      v8 = verified->ptr_0; /*0x414b43*/
      v10 = verified->location[0]; /*0x414b49*/
      v11 = verified->location[1]; /*0x414b57*/
      v12 = verified->location[2]; /*0x414b5e*/
      v9 = (*((int (__thiscall **)(AircraftClass *, unsigned int, int *, unsigned int))v8 + 241))(verified, 0, &v10, 0); /*0x414b64*/
      (*((void (__thiscall **)(AircraftClass *, int))v8 + 242))(verified, v9); /*0x414b6d*/
    }
    if ( verified->target ) /*0x414b73*/
    {
  LABEL_12:
      (*((void (__thiscall **)(AircraftClass *, int, unsigned int))verified->ptr_0 + 122))(verified, 1, 0); /*0x414b9e*/
      return 1; /*0x414ba4*/
    }
    else
    {
      (*((void (__thiscall **)(AircraftClass *, unsigned int, int))verified->ptr_0 + 289))(verified, 0, 1); /*0x414b86*/
      return 1; /*0x414b8c*/
    }
  }
  else
  {
    team = (int *)verified->team; /*0x414a90*/
    if ( team ) /*0x414a98*/
      TeamClass::LiberateMember_Start(team, (int)verified, 0xFFFFFFFF, 0); /*0x414a9f*/
    (*((void (__thiscall **)(AircraftClass *, unsigned int, int))verified->ptr_0 + 289))(verified, 0, 1); /*0x414aac*/
    MissionControl = MissionClass::GetMissionControl((MissionClass *)verified); /*0x414ab4*/
    (*((unsigned short *)&(v4))) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x414ac2*/
    return v4 + ((Random *)&dword_A8B230[14].NeedsSaveOrLink)->Range(0, 2); /*0x414ade*/
  }
}
// 0x41a5c0
// G42.42j FULL implementation (truth 0x41A5C0; disasm 41A5C0-41A92B):
{
  int v2; // edi
  void (__thiscall **ptr_0)(AircraftClass *, int, unsigned int); // eax
  char *MissionControl; // eax
  int result; // eax
  void (__thiscall **v6)(AircraftClass *, CellClass *, int); // edi
  CellClass *v7; // eax
  void (__thiscall **v8)(AircraftClass *, unsigned int, int); // eax
  int ammo; // ecx
  int Member; // eax
  int v11; // edi
  CellClass *owner; // ecx
  unsigned int *v13; // eax
  char *v14; // eax
  int v15; // eax
  int v16; // [esp+8h] [ebp-Ch] BYREF
  int v17; // [esp+Ch] [ebp-8h]
  int v18; // [esp+10h] [ebp-4h]

  v2 = A92B->GetSightRange(A92B->Type); /*0x41a5d9*/
  if ( (*((int (__thiscall **)(AircraftClass *))A92B->ptr_0 + 114))(A92B) == v2 ) /*0x41a5e3*/
  {
    if ( A92B->team ) /*0x41a5e9*/
    {
      if ( A92B->movementDestination ) /*0x41a5f3*/
      {
        ptr_0 = (void (__thiscall **)(AircraftClass *, int, unsigned int))A92B->ptr_0; /*0x41a5fd*/
        A92B->AircraftClass_field_bool_6D4 = 1; /*0x41a605*/
        ptr_0[122](A92B, 2, 0); /*0x41a60c*/
      }
      MissionControl = MissionClass::GetMissionControl((MissionClass *)A92B); /*0x41a614*/
      (*((unsigned short *)&(result))) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x41a622*/
    }
    else if ( *(unsigned int *)(*((int (__thiscall **)(AircraftClass *, unsigned int))A92B->ptr_0 + 254))(A92B, 0) ) /*0x41a639*/
    {
      if ( !A92B->team ) /*0x41a68d*/
      {
        v8 = (void (__thiscall **)(AircraftClass *, unsigned int, int))A92B->ptr_0; /*0x41a697*/
        A92B->AircraftClass_field_bool_6D4 = 1; /*0x41a69f*/
        v8[289](A92B, 0, 1); /*0x41a6a6*/
      }
      return 1; /*0x41a6ad*/
    }
    else
    {
      v6 = (void (__thiscall **)(AircraftClass *, CellClass *, int))A92B->ptr_0; /*0x41a644*/
      v16 = A92B->location[0]; /*0x41a64a*/
      v17 = A92B->location[1]; /*0x41a65b*/
      v18 = A92B->location[2]; /*0x41a662*/
      v7 = ((Coord *)&DataGlobal_87F7E8)->To_Cell( &v16); /*0x41a666*/
      v6[288](A92B, v7, 1); /*0x41a66e*/
      (*((void (__thiscall **)(AircraftClass *, int, unsigned int))A92B->ptr_0 + 122))(A92B, 2, 0); /*0x41a67c*/
      return 1; /*0x41a683*/
    }
    return result; /*0x41a62c*/
  }
  if ( byte_889ECC ) /*0x41a6be*/
  {
    if ( A92B->ammo || !(*((uint8_t (__thiscall **)(AircraftClass *))A92B->ptr_0 + 171))(A92B) ) /*0x41a6d2*/
      goto LABEL_14; /*0x41a6da*/
  LABEL_26:
    if ( !(uint8_t)Team::AllMembersValid((Team *)A92B) ) /*0x41a7bf*/
    {
      v11 = (*((int (__thiscall **)(AircraftClass *, unsigned char *, unsigned int, unsigned int))A92B->ptr_0 + 330))( /*0x41a7e6*/
              A92B,
              &A92B->Type->ptr_0[1000],
              0,
              0);
      if ( v11 ) /*0x41a7ea*/
      {
        (*((void (__thiscall **)(AircraftClass *, int, unsigned int))A92B->ptr_0 + 122))(A92B, 7, 0); /*0x41a7f8*/
        (*((void (__thiscall **)(AircraftClass *, int, int))A92B->ptr_0 + 288))(A92B, v11, 1); /*0x41a805*/
        (*((void (__thiscall **)(AircraftClass *, unsigned int))A92B->ptr_0 + 242))(A92B, 0); /*0x41a811*/
        return 1; /*0x41a821*/
      }
    }
    goto LABEL_14; /*0x41a7ea*/
  }
  if ( byte_889ECD ) /*0x41a75f*/
  {
    if ( (*((uint8_t (__thiscall **)(AircraftClass *))A92B->ptr_0 + 171))(A92B) /*0x41a78c*/
      && A92B->ammo < *(unsigned int *)&A92B->Type->ptr_0[1668] / 2 )
    {
      goto LABEL_26; /*0x41a78c*/
    }
  }
  else if ( (*((uint8_t (__thiscall **)(AircraftClass *))A92B->ptr_0 + 171))(A92B) /*0x41a7b7*/
         && A92B->ammo < *(unsigned int *)&A92B->Type->ptr_0[1668] )
  {
    goto LABEL_26; /*0x41a7b7*/
  }
  LABEL_14:
  ammo = A92B->ammo; /*0x41a6e0*/
  if ( ammo != -1 && ammo < *(unsigned int *)&A92B->Type->ptr_0[1668] / 2 ) /*0x41a702*/
  {
    if ( (uint8_t)Team::AllMembersValid((Team *)A92B) ) /*0x41a70a*/
    {
      Member = Team::GetMember((Team *)A92B, 0); /*0x41a71b*/
      if ( Member->ReturnZeroPos() == 6 ) /*0x41a72a*/
      {
        if ( *(unsigned char *)(*(unsigned int *)(Team::GetMember((Team *)A92B, 0) + 1312) + 5802) ) /*0x41a73f*/
          return 1; /*0x41a74e*/
      }
    }
  }
  if ( A92B->target ) /*0x41a822*/
  {
    (*((void (__thiscall **)(AircraftClass *, int, unsigned int))A92B->ptr_0 + 122))(A92B, 1, 0); /*0x41a834*/
    return 1; /*0x41a83b*/
  }
  else if ( (*((uint8_t (__thiscall **)(AircraftClass *))A92B->ptr_0 + 171))(A92B) ) /*0x41a849*/
  {
    if ( (*((int (__thiscall **)(AircraftClass *))A92B->ptr_0 + 114))(A92B) /*0x41a86e*/
      || (uint8_t)Team::AllMembersValid((Team *)A92B) )
    {
      if ( !(uint8_t)House::IsCurrentPlayer((House *)A92B->owner) ) /*0x41a888*/
      {
        v16 = A92B->location[0]; /*0x41a89d*/
        owner = (CellClass *)A92B->owner; /*0x41a8a9*/
        v17 = A92B->location[1]; /*0x41a8af*/
        v18 = A92B->location[2]; /*0x41a8b6*/
        v13 = CellClass::ScanOccupiers(owner, &v16); /*0x41a8ba*/
        if ( v13 ) /*0x41a8c1*/
        {
          (*((void (__thiscall **)(AircraftClass *, unsigned int *))A92B->ptr_0 + 242))(A92B, v13); /*0x41a8c8*/
          (*((void (__thiscall **)(AircraftClass *, int, unsigned int))A92B->ptr_0 + 122))(A92B, 1, 0); /*0x41a8d6*/
        }
      }
      if ( !(uint8_t)House::IsCurrentPlayer((House *)A92B->owner) /*0x41a8ef*/
        || (*((uint8_t (__thiscall **)(AircraftClass *))A92B->ptr_0 + 21))(A92B) )
      {
        return FootClass::FindMovePosition((FootClass *)A92B); /*0x41a92b*/
      }
      else
      {
        v14 = MissionClass::GetMissionControl((MissionClass *)A92B); /*0x41a8f8*/
        (*((unsigned short *)&(v15))) = Math::RoundToInt(*((double *)v14 + 2) * 900.0); /*0x41a906*/
        return v15 + ((Random *)&dword_A8B230[14].NeedsSaveOrLink)->Range(0, 2); /*0x41a921*/
      }
    }
    else
    {
      return 45; /*0x41a878*/
    }
  }
  else
  {
    return 45; /*0x41a854*/
  }
}
// 0x41A940
int AircraftClass::EvaluateTargetingState()
{

  int v2; // edi

  v2 = (*(int (**)(AircraftTypeClass *))(*(unsigned int *)this->Type + 188))(this->Type); /*0x41a956*/
  if ( (*((int (**)(AircraftClass *))this->FootClass + 114))(this) == v2 ) /*0x41a960*/
  {
    if ( !this->team ) /*0x41a962*/
      (*((void (**)(AircraftClass *, unsigned int, int))this->FootClass + 289))(this, 0, 1); /*0x41a974*/
    return 1; /*0x41a97b*/
  }
  else
  {
    if ( !this->focus /*0x41a99c*/
      && (*((unsigned __int8 (**)(AircraftClass *))this->FootClass + 171))(this)
      && !(unsigned __int8)Team::AllMembersValid((Team *)this) )
    {
      (*((void (**)(AircraftClass *, unsigned int, int))this->FootClass + 289))(this, 0, 1); /*0x41a9ad*/
    }
    if ( this->AbstractClass_2B4 ) /*0x41a9b3*/
    {
      (*((void (**)(AircraftClass *, int, unsigned int))this->FootClass + 122))(this, 1, 0); /*0x41a9c5*/
      return 1; /*0x41a9cc*/
    }
    else
    {
      return ((FootClass *)this)->FindAITarget(); /*0x41a9d5*/
    }
  }

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
{
  AbstractClass *p_vtable1; // esi
  AircraftTypeClass *Type; // eax
  int *team; // ecx
  int v5; // eax
  int Vtable3; // eax
  char *ptr_0; // ebx
  unsigned int *ptr_0; // ebp
  int v9; // esi
  AircraftClass *v10; // edx
  char *v11; // ecx
  signed int v12; // ecx
  int v13; // ecx
  unsigned int *v14; // eax
  AircraftClass *v16; // [esp+10h] [ebp-4h] BYREF

  p_vtable1 = (AbstractClass *)&disasm->ptr_1; /*0x414087*/
  /* X11: ptr_0 install elided (implicit via class virtuals 0x41408a) — binary-proven install, was 0 */
  /* X11: ptr_0 install elided (implicit via class virtuals 0x414090) — binary-proven install, was 0 */
  /* X11: ptr_0 install elided (implicit via class virtuals 0x414097) — binary-proven install, was 0 */
  /* X11: ptr_0 install elided (implicit via class virtuals 0x41409e) — binary-proven install, was 0 */
  *(unsigned int *)disasm->__pad_6C0 = 0; /*0x4140a4*/
  if ( byte_A8E9A0 ) /*0x4140b5*/
  {
    Type = disasm->Type; /*0x4140b7*/
    if ( Type ) /*0x4140c1*/
    {
      if ( HouseClass::CanBuild(disasm->owner, (int)Type, 0, 0) == -1 ) /*0x4140d4*/
        disasm->owner->recheckTechTree = 1; /*0x4140dc*/
      TechnoClass::CleanupAll((TechnoClass *)disasm, 0); /*0x4140e6*/
      team = (int *)disasm->team; /*0x4140eb*/
      if ( team ) /*0x4140f3*/
      {
        TeamClass::LiberateMember_Start(team, (int)disasm, 0xFFFFFFFF, 0); /*0x4140f9*/
        disasm->team = 0; /*0x4140fe*/
      }
      HouseClass::DecrementUnitCount(disasm->owner, disasm); /*0x41410b*/
      TechnoClass::CleanupDirection((FootClass *)disasm); /*0x414112*/
      disasm->Type = 0; /*0x414117*/
    }
  }
  AbstractClass::AnnounceExpiredPointer(&disasm->ptr_0, 1); /*0x414125*/
  v16 = disasm; /*0x41413a*/
  v5 = (*(int (__thiscall **)(unsigned int *, AircraftClass **))(dword_A8E390 + 16))(&dword_A8E390, &v16); /*0x41413e*/
  if ( v5 != -1 && v5 < dword_A8E3A0 && v5 < --dword_A8E3A0 ) /*0x414159*/
  {
    do /*0x414171*/
    {
      ++v5; /*0x414161*/
      *((unsigned int *)dword_A8E394 + v5 - 1) = *((unsigned int *)dword_A8E394 + v5); /*0x414165*/
    }
    while ( v5 < dword_A8E3A0 ); /*0x414171*/
  }
  Vtable3 = AbstractClass::GetVtable3(p_vtable1); /*0x414174*/
  ptr_0 = (char *)g_BuildingLoadQueue_Array.ptr_4; /*0x414179*/
  v16 = (AircraftClass *)Vtable3; /*0x41417f*/
  if ( g_BuildingLoadQueue_Array.ptr_4 ) /*0x414185*/
  {
    if ( !(*((unsigned char *)&(g_BuildingLoadQueue_Array.ptr_C))) ) /*0x414192*/
    {
      qsort( /*0x4141a2*/
        g_BuildingLoadQueue_Array.ptr_0,
        (size_t)g_BuildingLoadQueue_Array.ptr_4,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      ptr_0 = (char *)g_BuildingLoadQueue_Array.ptr_4; /*0x4141a7*/
      g_BuildingLoadQueue_Array.uniqueId = 0; /*0x4141b0*/
      (*((unsigned char *)&(g_BuildingLoadQueue_Array.ptr_C))) = 1; /*0x4141b6*/
    }
    ptr_0 = g_BuildingLoadQueue_Array.ptr_0; /*0x4141bd*/
    v9 = (int)ptr_0; /*0x4141c3*/
    while ( v9 > 0 ) /*0x4141c7*/
    {
      v10 = (AircraftClass *)ptr_0[2 * (v9 / 2)]; /*0x4141d4*/
      v11 = (char *)&ptr_0[2 * (v9 / 2)]; /*0x4141d8*/
      if ( (int)v16 >= (int)v10 ) /*0x4141e0*/
      {
        if ( v10 == v16 ) /*0x4141ea*/
        {
          if ( v11 ) /*0x414210*/
          {
            v12 = (v11 - (char *)g_BuildingLoadQueue_Array.ptr_0) >> 3; /*0x414218*/
            if ( v12 != -1 ) /*0x41421e*/
            {
              v13 = v12 + 1; /*0x414220*/
              if ( v13 < (int)ptr_0 ) /*0x414223*/
              {
                do /*0x414242*/
                {
                  v14 = (char *)g_BuildingLoadQueue_Array.ptr_0 + 8 * v13++; /*0x41422b*/
                  *(v14 - 2) = *v14; /*0x414231*/
                  *(v14 - 1) = v14[1]; /*0x414237*/
                  ptr_0 = (char *)g_BuildingLoadQueue_Array.ptr_4; /*0x41423a*/
                }
                while ( v13 < (int)g_BuildingLoadQueue_Array.ptr_4 ); /*0x414242*/
              }
              g_BuildingLoadQueue_Array.ptr_4 = ptr_0 - 1; /*0x41424f*/
              *((unsigned int *)g_BuildingLoadQueue_Array.ptr_0 + 2 * (int)g_BuildingLoadQueue_Array.ptr_4) = 0; /*0x414255*/
              *((unsigned int *)g_BuildingLoadQueue_Array.ptr_0 + 2 * (int)g_BuildingLoadQueue_Array.ptr_4 + 1) = 0; /*0x414263*/
              g_BuildingLoadQueue_Array.uniqueId = 0; /*0x414267*/
            }
          }
          break; /*0x414267*/
        }
        ptr_0 = v11 + 8; /*0x4141ec*/
        v9 += -1 - v9 / 2; /*0x4141f4*/
      }
      else
      {
        v9 /= 2; /*0x4141e2*/
      }
    }
  }
  disasm->isAliveFlag = 0; /*0x41426d*/
  return FootClass::Destruct((FootClass *)disasm); /*0x414208*/
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
{
  AircraftTypeClass *Type; // eax

  Type = verified->Type; /*0x41b929*/
  if ( Type != *(AircraftTypeClass **)(*(unsigned int *)&g_RulesClass_Instance + 1248) /*0x41b93d*/
    && Type != *(AircraftTypeClass **)(*(unsigned int *)&g_RulesClass_Instance + 1300) )
  {
    return ObjectClass::IsHeightAboveThreshold_0((ObjectClass *)verified); /*0x41b941*/
  }
  if ( !verified->locomotor[0] ) /*0x41b948*/
    sub_7DC720(-2147467261); /*0x41b957*/
  return (*(uint8_t (__stdcall **)(int))(*(unsigned int *)verified->locomotor[0] + 128))(verified->locomotor[0]) != 0; /*0x41b946*/
}
// 0x41B980
bool AircraftClass::IsBelowScreen()  // X133: ret synced to base slot 20 (bool)
{

  AircraftTypeClass *Type; // eax

  Type = this->Type; /*0x41b989*/
  if ( Type != *(AircraftTypeClass **)(*(unsigned int *)&g_RulesClass_Instance + 1248) /*0x41b99d*/
    && Type != *(AircraftTypeClass **)(*(unsigned int *)&g_RulesClass_Instance + 1300) )
  {
    return ((IUnknown *)this)->IsBelowScreen(); /*0x41b9a1*/
  }
  if ( !this->locomotor ) /*0x41b9a8*/
    WinAPI::Wrapper(-2147467261); /*0x41b9b7*/
  return (*(unsigned __int8 (**)(int))(*(unsigned int *)this->focus + 128))(this->focus) == 0; /*0x41b9a6*/

}

// 0x41C1D0
int AircraftClass::CheckMissionAbort()
{
  return *&this->Type[96]; /*0x41c1d9*/
}

// 0x41C200
int AircraftClass::CheckMissionFail()
{
  return (int)this->Type; /*0x41c206*/
}

// IDA: 0x41C210 (CheckActionStatus, 30B)
int AircraftClass::CheckActionStatus()
{
    // Check action status
    return 0;
}

// 0x5B2E90
int AircraftClass::CheckMissionStatus()
{
  return 450; /*0x5b2e95*/
}

// 0x5B2F30
int AircraftClass::CheckMissionStatus2()
{
  return 450; /*0x5b2f35*/
}

// 0x41BE80
int AircraftClass::CheckStateFlag()
{
  int result; // eax

  return result; /*0x41be80*/
}

// 0x41BE90
int AircraftClass::CheckStateFlag2()
{
  int result; // eax

  return result; /*0x41be90*/
}

// ============================================================
// Phase 3: Stubs
// ============================================================

// 0x41be70
bool AircraftClass::StubReturnFalse2() { return false; 
  return 0; /*0x41be72*/
}
} // namespace gamemd