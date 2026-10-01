#include "structure/aircraft.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"

#include <cstring>
#include <cmath>
#include "e4/e4_globals_decls.hpp"

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
AbstractClass * * AircraftClass::Mission_Attack()
{
// 0x417fe0
{
  int result; // eax
  unsigned int TransitionCount; // eax
  int *OpenNeighbor; // eax
  char *MissionControl; // eax

  switch ( this->missionStatus )
  {
  unsigned char v120[24]; // [esp+F4h] [ebp-18h] BYREF
  unsigned char v119[20]; // [esp+E0h] [ebp-2Ch] BYREF
  int v106; // [esp+78h] [ebp-94h]
  int v105; // [esp+74h] [ebp-98h] BYREF
  unsigned int v101[2]; // [esp+48h] [ebp-C4h] BYREF
  int v100; // [esp+44h] [ebp-C8h] BYREF
  char v99; // [esp+38h] [ebp-D4h]
  int v98; // [esp+34h] [ebp-D8h]
    case 0:
      int v2 = (int)(((unsigned char *)(this) + 0x2B4));
      this->AircraftClass_field_bool_6D2 = 0;
      int v3 = -(v2 != 0);
      IDA_LOBYTE(v3) = v3 & 0xF7;
      this->missionStatus = v3 + 10;
      return 1;
    case 1:
      bool v5 = this->AircraftClass_field_bool_6C8;
      this->AircraftClass_field_bool_6D2 = 0;
      if ( v5 )
      {
        bool v6 = ((unsigned char *)(this) + 0x0BF);
        this->AircraftClass_field_bool_6C8 = 0;
        ((unsigned char *)(this) + 0x0BF) = (unsigned char *)(v6 - 1);
      }
      int v7 = (int)(((unsigned char *)(this) + 0x2B4));
      if ( v7 && ((unsigned char *)(this) + 0x0BF) )
      {
        int v8 = (int)(*this);
        int v9 = FindSpiralMoveTarget(v7);
        this->AssignDestination(v9, 1);
        this->missionStatus = ((unsigned char *)(this) + 0x169) != 0 ? 3 : 10;
      }
      else
      {
LABEL_107:
        this->missionStatus = 10;
      }
      goto LABEL_108;
    case 3:
      if ( this->AircraftClass_field_bool_6C8 )
      {
        bool v10 = ((unsigned char *)(this) + 0x0BF);
        this->AircraftClass_field_bool_6C8 = 0;
        ((unsigned char *)(this) + 0x0BF) = (unsigned char *)(v10 - 1);
      }
      int v11 = (int)(((unsigned char *)(this) + 0x2B4));
      this->AircraftClass_field_bool_6D2 = 0;
      if ( !v11 || !((unsigned char *)(this) + 0x0BF) )
        goto LABEL_83;
      ProgressTimer *v12 = &this->vtable5;
      if ( ((unsigned char *)(this) + 0x1B0)->vt_slot_24() )
      {
        int v13 = *(unsigned int *)this->SelectVocOrSfx(0);
        if ( ObjectClass::ComputeDistance(this, ((unsigned char *)(this) + 0x2B4)) < *(unsigned int *)(v13 + 180) )
        {
LABEL_14:
          this->missionStatus = 4;
          return 1;
        }
        this->AssignDestination(((unsigned char *)(this) + 0x2B4), 1);
      }
      else
      {
        if ( v12->vt_slot_28() )
          goto LABEL_14;
        if ( !this->locomotor )
          WinAPI::Wrapper(-2147467261);
        if ( !this->locomotor->Thunk_VtableDispatch4() )
          goto LABEL_14;
      }
      if ( ((unsigned char *)(this) + 0x169) )
      {
        int v14 = ObjectClass::ComputeDistance(this, ((unsigned char *)(this) + 0x169));
        if ( v14 >= 512 )
        {
  unsigned char v117[4]; // [esp+C4h] [ebp-48h] BYREF
          int * v17 = (int *)*(unsigned int *)((unsigned char *)(this) + 0x169)->vt_slot_72(((unsigned char *)(this) + 0x169), v117);
  int *v18; // eax
          v18 = (int *)this->ComputeTransform(unsigned char v115[4]; // [esp+ACh] [ebp-60h] BYREF
                         v115, 0, 0, 0, 0);
          if ( *v18 == *v17 && v18[1] == v17[1] )
            IDA_LOWORD(v100) = 0;
          double v19 = Math::CalcAngle((double)v18[1] - (double)v17[1], (double)*v17 - (double)*v18);
          IDA_LOWORD(v100) = Math::RoundToInt((v19 - 1.570796326794897) * -10430.06004058427);
          this->secondaryFacing.Update(&v100);
          return 1;
        }
        else
        {
  int v113; // [esp+A4h] [ebp-68h] BYREF
          int * v15 = (int *)(ObjectClass::CalcTargetFacing(this, &v113, ((unsigned char *)(this) + 0x2B4)));
          this->secondaryFacing.Update(v15);
          if ( v14 >= 16 )
          {
            return 1;
          }
          else
          {
            int v16 = (int)(*this);
            this->missionStatus = 4;
            this->AssignDestination(0, 1);
            return 1;
          }
        }
      }
      else
      {
        this->missionStatus = 1;
        return 1;
      }
    case 4:
      if ( !((unsigned char *)(this) + 0x2B4) || !((unsigned char *)(this) + 0x0BF) )
        goto LABEL_83;
      ProgressTimer *v20 = &this->vtable5;
      if ( !((unsigned char *)(this) + 0x1B0)->vt_slot_24() )
      {
  int v109; // [esp+94h] [ebp-78h] BYREF
        int * v21 = (int *)(ObjectClass::CalcTargetFacing(this, &v109, ((unsigned char *)(this) + 0x2B4)));
        this->primaryFacing.Update(v21);
  int v112; // [esp+A0h] [ebp-6Ch] BYREF
        int * v22 = (int *)(ObjectClass::CalcTargetFacing(this, &v112, ((unsigned char *)(this) + 0x2B4)));
        this->secondaryFacing.Update(v22);
      }
      int v23 = (int)(*this);
      int v24 = this->SelectWeapon(((unsigned char *)(this) + 0x2B4), 1);
      switch ( this->ReadINI_3(((unsigned char *)(this) + 0x2B4), v24) )
      {
        case 0:
          int v25 = (int)(*this);
          int v93 = (int)(((unsigned char *)(this) + 0x2B4));
          this->AircraftClass_field_bool_6C8 = 1;
          int v26 = 0;
          int v27 = this->SelectWeapon(v93);
          if ( *(int *)(*(unsigned int *)this->SelectVocOrSfx(v27) + 156) > 0 )
          {
  int v31; // eax
            do
            {
              int v28 = (int)(*this);
              int v29 = this->SelectWeapon(((unsigned char *)(this) + 0x2B4));
              this->FireWeapon(((unsigned char *)(this) + 0x2B4), v29);
              int v30 = (int)(*this);
              ++v26;
              v31 = this->SelectWeapon(((unsigned char *)(this) + 0x2B4));
            }
            while ( v26 < *(unsigned int *)(*(unsigned int *)this->SelectVocOrSfx(v31) + 156) );
          }
  unsigned int v103[3]; // [esp+64h] [ebp-A8h] BYREF
          v103[0] = (unsigned int)(((unsigned char *)(this) + 0x027));
          v103[1] = this->owningHouseIndex;
          v103[2] = (unsigned int)(((unsigned char *)(this) + 0x029));
  unsigned int *v32; // eax
          v32 = (unsigned int *)*(unsigned int *)((unsigned char *)(this) + 0x2B4)->GetInvalidCoord(((unsigned char *)(this) + 0x2B4),
                            v120,
                            v103);
          unsigned int * v33 = Coord::To_Cell(DataGlobal_87F7E8, v32);
          Cell::ApplyDamage(v33, 1, 0, 0, v98);
          if ( v20->vt_slot_24() )
          {
            int v34 = (int)(*this);
            this->missionStatus = 6;
            this->AircraftClass_field_bool_6D2 = 1;
            return *(unsigned int *)(*(unsigned int *)this->SelectVocOrSfx(0) + 176);
          }
          if ( !v20->vt_slot_28() )
            goto LABEL_54;
          bool v35 = ((unsigned char *)(this) + 0x0BF);
          bool v36 = v35 == 0;
          bool v37 = v35 < 0;
          int v38 = (int)(*this);
          this->AircraftClass_field_bool_6D2 = 1;
          this->missionStatus = !v37 && !v36 ? 1 : 10;
          return *(unsigned int *)(*(unsigned int *)this->SelectVocOrSfx(0) + 176);
        case 2:
          if ( !((unsigned char *)(this) + 0x0BF) )
          {
            this->missionStatus = 10;
            return 1;
          }
          if ( !this->CheckCellPassable2(((unsigned char *)(this) + 0x2B4))
            || v20->vt_slot_24() )
          {
            this->missionStatus = 1;
          }
          else if ( v20->vt_slot_28() )
          {
            this->missionStatus = 4;
          }
          else
          {
            this->missionStatus = *(unsigned char *)(DataGlobal_87F7E8[7806] + 6113) != 0 ? 1 : 4;
          }
          if ( !v20->vt_slot_24() )
            return 1;
          return 45;
        case 3:
          return 1;
        case 9:
          this->TransitionEffectState(0);
          return 1;
        default:
          if ( !((unsigned char *)(this) + 0x0BF) )
          {
            this->missionStatus = 10;
            return 1;
          }
          if ( v20->vt_slot_24() )
            return 1;
LABEL_54:
          this->missionStatus = 5;
          result = 1;
          break;
      }
      return result;
    case 5:
      if ( ((unsigned char *)(this) + 0x2B4) )
      {
  int v114; // [esp+A8h] [ebp-64h] BYREF
        int * v39 = (int *)(ObjectClass::CalcTargetFacing(this, &v114, ((unsigned char *)(this) + 0x2B4)));
        this->primaryFacing.Update(v39);
  int v111; // [esp+9Ch] [ebp-70h] BYREF
        int * v40 = (int *)(ObjectClass::CalcTargetFacing(this, &v111, ((unsigned char *)(this) + 0x2B4)));
        this->secondaryFacing.Update(v40);
        int v41 = (int)(*this);
        int v42 = this->SelectWeapon(((unsigned char *)(this) + 0x2B4), 1);
        switch ( this->ReadINI_3(((unsigned char *)(this) + 0x2B4), v42) )
        {
          case 0u:
            int v44 = (int)(*this);
            int v45 = this->SelectWeapon(((unsigned char *)(this) + 0x2B4));
            this->FireWeapon(((unsigned char *)(this) + 0x2B4), v45);
            v105 = (int)(((unsigned char *)(this) + 0x027));
            v106 = this->owningHouseIndex;
            int v107 = ((unsigned char *)(this) + 0x029);
            unsigned int * v46 = (unsigned int *)((unsigned char *)(this) + 0x2B4)->GetInvalidCoord();
            unsigned int * v47 = Coord::To_Cell(DataGlobal_87F7E8, v46);
            Cell::ApplyDamage(v47, (int)v119, (int)&v105, 1, 0);
            if ( !((unsigned char *)(this) + 0x0BF) )
              goto LABEL_107;
            this->missionStatus = *(unsigned char *)(DataGlobal_87F7E8[7806] + 6113) != 0 ? 1 : 4;
            goto LABEL_108;
          case 2u:
            if ( !((unsigned char *)(this) + 0x0BF) )
              goto LABEL_107;
            if ( !this->CheckCellPassable2(((unsigned char *)(this) + 0x2B4))
              || ((unsigned char *)(this) + 0x1B0)->vt_slot_24() )
            {
              this->missionStatus = 1;
            }
            else
            {
              int v43 = -(*(unsigned char *)(DataGlobal_87F7E8[7806] + 6113) != 0);
              IDA_LOBYTE(v43) = v43 & 0xFD;
              this->missionStatus = v43 + 4;
            }
            if ( !((unsigned char *)(this) + 0x1B0)->vt_slot_24() )
              goto LABEL_108;
            result = 45;
            break;
          case 3u:
            goto LABEL_108;
          case 9u:
            this->TransitionEffectState(0);
            goto LABEL_108;
          default:
            if ( !((unsigned char *)(this) + 0x0BF) )
              goto LABEL_107;
            if ( this->CheckCellPassable2(((unsigned char *)(this) + 0x2B4)) )
              this->missionStatus = *(unsigned char *)(DataGlobal_87F7E8[7806] + 6113) != 0 ? 1 : 4;
            else
              this->missionStatus = 1;
            goto LABEL_108;
        }
      }
      else
      {
        this->missionStatus = 10;
        return 1;
      }
      return result;
    case 6:
      int v48 = ((unsigned char *)(this) + 0x2B4);
      if ( v48 )
      {
        int v49 = *this;
        int v50 = this->SelectWeapon(v48, 1);
        switch ( this->ReadINI_3(((unsigned char *)(this) + 0x2B4), v50) )
        {
          case 0:
          case 2:
          case 9:
            break;
          case 8:
            this->AssignDestination(((unsigned char *)(this) + 0x2B4), 1);
            break;
          default:
            goto LABEL_91;
        }
        int v51 = *this;
        int v94 = this->SelectWeapon(((unsigned char *)(this) + 0x2B4));
        int v89 = ((unsigned char *)(this) + 0x2B4);
        this->FireWeapon();
        v100 = ((unsigned char *)(this) + 0x027);
        int v52 = ((unsigned char *)(this) + 0x2B4);
        v101[0] = this->owningHouseIndex;
        v101[1] = ((unsigned char *)(this) + 0x029);
  unsigned int *v53; // eax
        v53 = (unsigned int *)(*(int (**)(int, unsigned char *, int *, int, unsigned int, unsigned int))(*(unsigned int *)v52 + 72))(
                          v52,
  unsigned char v116[20]; // [esp+B0h] [ebp-5Ch] BYREF
                          v116,
                          &v100,
                          1,
                          0,
                          0);
        unsigned int * v54 = Coord::To_Cell(DataGlobal_87F7E8, v53);
        Cell::ApplyDamage(v54, v89, v94, v98, v99);
        this->AssignDestination(((unsigned char *)(this) + 0x2B4), 1);
        int v55 = *this;
        this->missionStatus = 7;
        return *(unsigned int *)(*(unsigned int *)this->SelectVocOrSfx(0) + 176);
      }
      else
      {
        this->missionStatus = 10;
        return 1;
      }
    case 7:
      int v56 = ((unsigned char *)(this) + 0x2B4);
      if ( v56 )
      {
        int v57 = *this;
        int v58 = this->SelectWeapon(v56, 1);
        switch ( this->ReadINI_3(((unsigned char *)(this) + 0x2B4), v58) )
        {
          case 0u:
          case 2u:
          case 9u:
            break;
          case 8u:
            this->AssignDestination(((unsigned char *)(this) + 0x2B4), 1);
            break;
          default:
            goto LABEL_91;
        }
        int v59 = *this;
        int v95 = this->SelectWeapon(((unsigned char *)(this) + 0x2B4));
        int v90 = ((unsigned char *)(this) + 0x2B4);
        this->FireWeapon();
  unsigned int v108[5]; // [esp+80h] [ebp-8Ch] BYREF
        v108[0] = ((unsigned char *)(this) + 0x027);
        v108[1] = this->owningHouseIndex;
        v108[2] = ((unsigned char *)(this) + 0x029);
  unsigned int *v60; // eax
        v60 = (unsigned int *)*(unsigned int *)((unsigned char *)(this) + 0x2B4)->GetInvalidCoord(((unsigned char *)(this) + 0x2B4),
  unsigned char v118[24]; // [esp+C8h] [ebp-44h] BYREF
                          v118,
                          v108,
                          1,
                          0,
                          0);
        unsigned int * v61 = Coord::To_Cell(DataGlobal_87F7E8, v60);
        Cell::ApplyDamage(v61, v90, v95, v98, v99);
        this->AssignDestination(((unsigned char *)(this) + 0x2B4), 1);
        int v62 = *this;
        this->missionStatus = 8;
        return *(unsigned int *)(*(unsigned int *)this->SelectVocOrSfx(0) + 176);
      }
      else
      {
        this->missionStatus = 10;
        return 1;
      }
    case 8:
      int v63 = ((unsigned char *)(this) + 0x2B4);
      if ( v63 )
      {
        int v64 = *this;
        int v65 = this->SelectWeapon(v63, 1);
        switch ( this->ReadINI_3(((unsigned char *)(this) + 0x2B4), v65) )
        {
          case 0u:
          case 2u:
          case 9u:
            break;
          case 8u:
            this->AssignDestination(((unsigned char *)(this) + 0x2B4), 1);
            break;
          default:
            goto LABEL_91;
        }
        int v66 = *this;
        int v96 = this->SelectWeapon(((unsigned char *)(this) + 0x2B4));
        int v91 = ((unsigned char *)(this) + 0x2B4);
        this->FireWeapon();
  unsigned int v102[5]; // [esp+50h] [ebp-BCh] BYREF
        v102[0] = ((unsigned char *)(this) + 0x027);
        v102[1] = this->owningHouseIndex;
        v102[2] = ((unsigned char *)(this) + 0x029);
  unsigned int *v67; // eax
        v67 = (unsigned int *)*(unsigned int *)((unsigned char *)(this) + 0x2B4)->GetInvalidCoord(((unsigned char *)(this) + 0x2B4),
                          v119,
                          v102,
                          1,
                          0,
                          0);
        unsigned int * v68 = Coord::To_Cell(DataGlobal_87F7E8, v67);
        Cell::ApplyDamage(v68, v91, v96, v98, v99);
        this->AssignDestination(((unsigned char *)(this) + 0x2B4), 1);
        int v69 = *this;
        this->missionStatus = 9;
        return *(unsigned int *)(*(unsigned int *)this->SelectVocOrSfx(0) + 176);
      }
      else
      {
LABEL_83:
        this->missionStatus = 10;
        return 1;
      }
    case 9:
      int v70 = ((unsigned char *)(this) + 0x2B4);
      if ( v70 )
      {
        int v71 = *this;
        int v72 = this->SelectWeapon(v70, 1);
        switch ( this->ReadINI_3(((unsigned char *)(this) + 0x2B4), v72) )
        {
          case 0u:
          case 2u:
          case 8u:
          case 9u:
            int v73 = *this;
            int v97 = ((unsigned char *)(this) + 0x2B4);
            int v92 = this->SelectWeapon();
            int v88 = ((unsigned char *)(this) + 0x2B4);
            this->FireWeapon();
            int v104 = ((unsigned char *)(this) + 0x027);
            v105 = this->owningHouseIndex;
            int v74 = ((unsigned char *)(this) + 0x2B4);
            v106 = ((unsigned char *)(this) + 0x029);
  unsigned int *v75; // eax
            v75 = (unsigned int *)(*(int (**)(int, unsigned char *, int *, int, unsigned int, unsigned int))(*(unsigned int *)v74 + 72))(
                              v74,
                              v120,
                              &v104,
                              1,
                              0,
                              0);
            unsigned int * v76 = Coord::To_Cell(DataGlobal_87F7E8, v75);
            Cell::ApplyDamage(v76, v88, v92, v97, v98);
            int v77 = *this;
            this->missionStatus = 3;
            result = (*(unsigned int *)(*(unsigned int *)this->SelectVocOrSfx(0) + 180) + 1024)
                   / *(unsigned int *)(this->q1B1 + 1656);
            break;
          default:
LABEL_91:
            if ( !((unsigned char *)(this) + 0x0BF) )
            {
              this->missionStatus = 10;
              this->AircraftClass_field_bool_6D2 = 0;
            }
            return 1;
        }
      }
      else
      {
        this->missionStatus = 10;
        return 1;
      }
      return result;
    case 10:
      bool v78 = this->AircraftClass_field_bool_6C8;
      this->AircraftClass_field_bool_6D2 = 0;
      if ( v78 )
      {
        bool v79 = ((unsigned char *)(this) + 0x0BF);
        this->AircraftClass_field_bool_6C8 = 0;
        if ( v79 > 0 )
          ((unsigned char *)(this) + 0x0BF) = v79 - 1;
      }
      if ( ((unsigned char *)(this) + 0x0BF) )
      {
        if ( ((unsigned char *)(this) + 0x2B4) )
        {
          this->missionStatus = 1;
          return 1;
        }
      }
      else if ( this->isALoaner || (uint8_t)House::IsCurrentPlayer((void *)this->focus) )
      {
        this->AssignTarget_SyncLog(0);
      }
      unsigned int * v80 = (unsigned int *)this->focus;
      this->AircraftClass_field_bool_6D2 = 0;
      TransitionCount = HouseClass::GetTransitionCount(v80);
      OpenNeighbor = CellClass::FindOpenNeighbor(
                       DataGlobal_87F7E8,
  int v110; // [esp+98h] [ebp-74h] BYREF
                       &v110,
                       TransitionCount,
                       (int)&DataGlobal_87F7E8[10656],
                       (int)&DataGlobal_87F7E8[10656],
                       4,
                       1,
                       0);
      int v83 = *this;
      v101[0] = *OpenNeighbor;
      void * v84 = CellCoord::To_CellObj(DataGlobal_87F7E8, (int16_t *)v101);
      this->AssignDestination(v84, 1);
      int v85 = this->airstrike;
      this->AircraftClass_field_bool_6D5 = 0;
      if ( v85 && ((unsigned char *)(this) + 0x0BF) > 0 )
      {
        this->ProcessLanding(4, 0);
        this->AircraftClass_field_bool_6D5 = 1;
        return 1;
      }
      else
      {
        this->ValidatePlacement(0, 1);
        this->AircraftClass_field_bool_6D5 = 1;
        return 1;
      }
    default:
LABEL_108:
      MissionControl = MissionClass::GetMissionControl(this);
      int v87 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
      return v87 + Random::Range((unsigned int *)(DataGlobal_87F7E8[536210] + 536), 0, 2);
  }
}

/* ASM:
sub     esp, 0C8h
push    ebx
push    ebp
push    esi
mov     esi, ecx
mov     ebp, 0Ah
push    edi
mov     eax, [esi+0BCh]
cmp     eax, ebp        ; switch 11 cases
ja      def_417FFF      ; jumptable 00417FFF default case, case 2
; jumptable 0041861C case 3
jmp     ds:jpt_417FFF[eax*4] ; switch jump
; ---------------------------------------------------------------------------

loc_418006:                             ; CODE XREF: AircraftClass__Mission_Attack+1F↑j
; DATA XREF: .text:jpt_417FFF↓o
mov     eax, [esi+2B4h] ; jumptable 00417FFF case 0
mov     byte ptr [esi+6D2h], 0
neg     eax
sbb     eax, eax
and     al, 0F7h
add     eax, ebp
mov     [esi+0BCh], eax
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_418031:                             ; CODE XREF: AircraftClass__Mission_Attack+1F↑j
; DATA XREF: .text:jpt_417FFF↓o
mov     al, [esi+6C8h]  ; jumptable 00417FFF case 1
mov     byte ptr [esi+6D2h], 0
test    al, al
jz      short loc_418056
mov     eax, [esi+2FCh]
mov     byte ptr [esi+6C8h], 0
dec     eax
mov     [esi+2FCh], eax

loc_418056:                             ; CODE XREF: AircraftClass__Mission_Attack+60↑j
mov     eax, [esi+2B4h]
test    eax, eax
jz      loc_418D17
mov     ecx, [esi+2FCh]
test    ecx, ecx
jz      loc_418D17
mov     edi, [esi]
push    1
push    eax
mov     ecx, esi
call    FindSpiralMoveTarget
push    eax
mov     ecx, esi
call    dword ptr [edi+480h]
mov     ecx, [esi+5A4h]
neg     ecx
sbb     ecx, ecx
and     ecx, 0FFFFFFF9h
add     ecx, ebp
mov     [esi+0BCh], ecx
jmp     def_417FFF      ; jumptable 00417FFF default case, case 2
; jumptable 0041861C case 3
; ---------------------------------------------------------------------------

loc_4180A1:                             ; CODE XREF: AircraftClass__Mission_Attack+1F↑j
; DATA XREF: .text:jpt_417FFF↓o
mov     al, [esi+6C8h]  ; jumptable 00417FFF case 3
xor     ebx, ebx
cmp     al, bl
jz      short loc_4180C0
mov     eax, [esi+2FCh]
mov     [esi+6C8h], bl
dec     eax
mov     [esi+2FCh], eax

loc_4180C0:                             ; CODE XREF: AircraftClass__Mission_Attack+CB↑j
mov     eax, [esi+2B4h]
mov     [esi+6D2h], bl
cmp     eax, ebx
jz      loc_4189C5
cmp     [esi+2FCh], ebx
jz      loc_4189C5
mov     edx, [esi+6C0h]
lea     edi, [esi+6C0h]
push    edi
call    dword ptr [edx+18h]
test    eax, eax
jz      short loc_418146
mov     eax, [esi]
push    ebx
mov     ecx, esi
call    dword ptr [eax+3F8h]
mov     ecx, [esi+2B4h]
mov     edi, [eax]
push    ecx
mov     ecx, esi
call    ObjectClass__ComputeDistance
cmp     eax, [edi+0B4h]
jge     short loc_418131

loc_418117:                             ; CODE XREF: AircraftClass__Mission_Attack+16E↓j
; AircraftClass__Mission_Attack+193↓j
mov     dword ptr [esi+0BCh], 4
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_418131:                             ; CODE XREF: AircraftClass__Mission_Attack+135↑j
mov     eax, [esi+2B4h]
mov     edx, [esi]
push    1
push    eax
mov     ecx, esi
call    dword ptr [edx+480h]
jmp     short loc_418175
; ---------------------------------------------------------------------------

loc_418146:                             ; CODE XREF: AircraftClass__Mission_Attack+112↑j
mov     ecx, [edi]
push    edi
call    dword ptr [ecx+1Ch]
test    eax, eax
jnz     short loc_418117
cmp     [esi+674h], ebx
jnz     short loc_418162
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_418162:                             ; CODE XREF: AircraftClass__Mission_Attack+176↑j
mov     eax, [esi+674h]
push    eax
mov     edx, [eax]
call    dword ptr [edx+80h]
test    al, al
jz      short loc_418117

loc_418175:                             ; CODE XREF: AircraftClass__Mission_Attack+164↑j
mov     eax, [esi+5A4h]
cmp     eax, ebx
jnz     short loc_418195
mov     eax, 1
mov     [esi+0BCh], eax
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_418195:                             ; CODE XREF: AircraftClass__Mission_Attack+19D↑j
push    eax
mov     ecx, esi
call    ObjectClass__ComputeDistance
mov     edi, eax
cmp     edi, 200h
jge     short loc_4181F6
mov     eax, [esi+2B4h]
lea     ecx, [esp+0D8h+var_68]
push    eax
push    ecx
mov     ecx, esi
call    ObjectClass__CalcTargetFacing
push    eax
lea     ecx, [esi+3A0h]
call    FacingClass__Update
cmp     edi, 10h
jge     loc_418BDC      ; jumptable 00418345 case 3
mov     edx, [esi]
push    1
push    ebx
mov     ecx, esi
mov     dword ptr [esi+0BCh], 4
call    dword ptr [edx+480h]
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_4181F6:                             ; CODE XREF: AircraftClass__Mission_Attack+1C5↑j
mov     ecx, [esi+5A4h]
lea     edx, [esp+0D8h+var_48]
push    edx
xor     ebp, ebp
mov     eax, [ecx]
call    dword ptr [eax+48h]
sub     esp, 0Ch
mov     edx, [esi]
mov     ecx, esp
mov     edi, eax
xor     eax, eax
push    ebx
mov     [ecx], ebx
mov     [ecx+4], ebp
mov     [ecx+8], eax
lea     eax, [esp+0E8h+var_60]
push    eax
mov     ecx, esi
call    dword ptr [edx+0B0h]
mov     ecx, [eax]
mov     edx, [edi]
cmp     ecx, edx
jnz     short loc_418246
mov     edx, [eax+4]
mov     ecx, [edi+4]
cmp     edx, ecx
jnz     short loc_418246
mov     word ptr [esp+0D8h+var_C8], bx

loc_418246:                             ; CODE XREF: AircraftClass__Mission_Attack+255↑j
; AircraftClass__Mission_Attack+25F↑j
fild    dword ptr [edi]
sub     esp, 8
sub     esp, 8
fisub   dword ptr [eax]
fstp    [esp+0E8h+var_E0] ; double
fild    dword ptr [eax+4]
fisub   dword ptr [edi+4]
fstp    [esp+0E8h+var_E8] ; double
call    Math__CalcAngle
fsub    ds:dbl_7E2820
add     esp, 10h
fmul    ds:dbl_7E2818
call    Math__RoundToInt
lea     ecx, [esp+0D8h+var_C8]
mov     word ptr [esp+0D8h+var_C8], ax
mov     eax, [esp+0D8h+var_C8]
push    ecx
lea     ecx, [esi+3A0h]
mov     [esp+0DCh+var_C8], eax
call    FacingClass__Update
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_4182A3:                             ; CODE XREF: AircraftClass__Mission_Attack+1F↑j
; DATA XREF: .text:jpt_417FFF↓o
mov     eax, [esi+2B4h] ; jumptable 00417FFF case 4
test    eax, eax
jz      loc_4189C5
mov     eax, [esi+2FCh]
test    eax, eax
jz      loc_4189C5
mov     edx, [esi+6C0h]
lea     ebx, [esi+6C0h]
push    ebx
call    dword ptr [edx+18h]
test    eax, eax
jnz     short loc_418311
mov     eax, [esi+2B4h]
lea     ecx, [esp+0D8h+var_78]
push    eax
push    ecx
mov     ecx, esi
call    ObjectClass__CalcTargetFacing
push    eax
lea     ecx, [esi+388h]
call    FacingClass__Update
mov     edx, [esi+2B4h]
lea     eax, [esp+0D8h+var_6C]
push    edx
push    eax
mov     ecx, esi
call    ObjectClass__CalcTargetFacing
push    eax
lea     ecx, [esi+3A0h]
call    FacingClass__Update

loc_418311:                             ; CODE XREF: AircraftClass__Mission_Attack+2F1↑j
mov     ecx, [esi+2B4h]
mov     edi, [esi]
push    1
push    ecx
mov     ecx, esi
call    dword ptr [edi+2E4h]
mov     edx, [esi+2B4h]
push    eax
push    edx
mov     ecx, esi
call    dword ptr [edi+3C0h]
cmp     eax, 9          ; switch 10 cases
ja      def_418345      ; jumptable 00418345 default case, cases 1,4-8
xor     ecx, ecx
mov     cl, ds:byte_418D98[eax]
jmp     ds:jpt_418345[ecx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_41834C:                             ; CODE XREF: AircraftClass__Mission_Attack+365↑j
; DATA XREF: .text:jpt_418345↓o
mov     edx, [esi]      ; jumptable 00418345 case 9
push    0
mov     ecx, esi
call    dword ptr [edx+45Ch]
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_418368:                             ; CODE XREF: AircraftClass__Mission_Attack+365↑j
; DATA XREF: .text:jpt_418345↓o
mov     eax, [esi+2FCh] ; jumptable 00418345 case 2
test    eax, eax
jnz     short loc_418388
mov     [esi+0BCh], ebp
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_418388:                             ; CODE XREF: AircraftClass__Mission_Attack+390↑j
mov     ecx, [esi+2B4h]
mov     eax, [esi]
push    ecx
mov     ecx, esi
call    dword ptr [eax+3ACh]
test    al, al
jz      short loc_4183DB
mov     edx, [ebx]
push    ebx
call    dword ptr [edx+18h]
test    eax, eax
jnz     short loc_4183DB
mov     eax, [ebx]
push    ebx
call    dword ptr [eax+1Ch]
test    eax, eax
jz      short loc_4183BD
mov     dword ptr [esi+0BCh], 4
jmp     short loc_4183E5
; ---------------------------------------------------------------------------

loc_4183BD:                             ; CODE XREF: AircraftClass__Mission_Attack+3CF↑j
mov     ecx, ds:8871E0h
mov     dl, [ecx+17E1h]
neg     dl
sbb     edx, edx
and     edx, 0FFFFFFFDh
add     edx, 4
mov     [esi+0BCh], edx
jmp     short loc_4183E5
; ---------------------------------------------------------------------------

loc_4183DB:                             ; CODE XREF: AircraftClass__Mission_Attack+3BB↑j
; AircraftClass__Mission_Attack+3C5↑j
mov     dword ptr [esi+0BCh], 1

loc_4183E5:                             ; CODE XREF: AircraftClass__Mission_Attack+3DB↑j
; AircraftClass__Mission_Attack+3F9↑j
mov     eax, [ebx]
push    ebx
call    dword ptr [eax+18h]
test    eax, eax
jz      loc_418BDC      ; jumptable 00418345 case 3
mov     eax, 2Dh ; '-'
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_418403:                             ; CODE XREF: AircraftClass__Mission_Attack+365↑j
; DATA XREF: .text:jpt_418345↓o
mov     ecx, [esi+2B4h] ; jumptable 00418345 case 0
mov     edi, [esi]
push    ecx
mov     ecx, esi
mov     byte ptr [esi+6C8h], 1
xor     ebp, ebp
call    dword ptr [edi+2E4h]
push    eax
mov     ecx, esi
call    dword ptr [edi+3F8h]
mov     edx, [eax]
mov     eax, [edx+9Ch]
test    eax, eax
jle     short loc_418478

loc_418432:                             ; CODE XREF: AircraftClass__Mission_Attack+496↓j
mov     eax, [esi+2B4h]
mov     edi, [esi]
push    eax
mov     ecx, esi
call    dword ptr [edi+2E4h]
mov     ecx, [esi+2B4h]
push    eax
push    ecx
mov     ecx, esi
call    dword ptr [edi+3CCh]
mov     edx, [esi+2B4h]
mov     edi, [esi]
push    edx
mov     ecx, esi
inc     ebp
call    dword ptr [edi+2E4h]
push    eax
mov     ecx, esi
call    dword ptr [edi+3F8h]
mov     eax, [eax]
cmp     ebp, [eax+9Ch]
jl      short loc_418432

loc_418478:                             ; CODE XREF: AircraftClass__Mission_Attack+450↑j
lea     ecx, [esi+9Ch]
push    0
push    0
push    1
mov     edx, [ecx]
mov     [esp+0E4h+var_A8], edx
lea     edx, [esp+0E4h+var_A8]
mov     eax, [ecx+4]
push    edx
mov     [esp+0E8h+var_A4], eax
lea     edx, [esp+0E8h+var_18]
mov     ecx, [ecx+8]
push    edx
mov     [esp+0ECh+var_A0], ecx
mov     ecx, [esi+2B4h]
mov     eax, [ecx]
call    dword ptr [eax+48h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    Cell__ApplyDamage
mov     eax, [ebx]
push    ebx
call    dword ptr [eax+18h]
test    eax, eax
jz      short loc_4184FC
mov     edx, [esi]
push    0
mov     ecx, esi
mov     dword ptr [esi+0BCh], 6
mov     byte ptr [esi+6D2h], 1
call    dword ptr [edx+3F8h]
mov     eax, [eax]
mov     eax, [eax+0B0h]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_4184FC:                             ; CODE XREF: AircraftClass__Mission_Attack+4EA↑j
mov     ecx, [ebx]
push    ebx
call    dword ptr [ecx+1Ch]
test    eax, eax
jz      short loc_418572
mov     eax, [esi+2FCh]
xor     edx, edx
test    eax, eax
mov     eax, [esi]
push    0
setnle  dl
dec     edx
mov     ecx, esi
and     edx, 9
mov     byte ptr [esi+6D2h], 1
inc     edx
mov     [esi+0BCh], edx
call    dword ptr [eax+3F8h]
mov     ecx, [eax]
mov     eax, [ecx+0B0h]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

def_418345:                             ; CODE XREF: AircraftClass__Mission_Attack+357↑j
; AircraftClass__Mission_Attack+365↑j
; DATA XREF: ...
mov     eax, [esi+2FCh] ; jumptable 00418345 default case, cases 1,4-8
test    eax, eax
jnz     short loc_418564
mov     [esi+0BCh], ebp
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_418564:                             ; CODE XREF: AircraftClass__Mission_Attack+56C↑j
mov     edx, [ebx]
push    ebx
call    dword ptr [edx+18h]
test    eax, eax
jnz     loc_418BDC      ; jumptable 00418345 case 3

loc_418572:                             ; CODE XREF: AircraftClass__Mission_Attack+524↑j
mov     dword ptr [esi+0BCh], 5
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_41858C:                             ; CODE XREF: AircraftClass__Mission_Attack+1F↑j
; DATA XREF: .text:jpt_417FFF↓o
mov     eax, [esi+2B4h] ; jumptable 00417FFF case 5
test    eax, eax
jnz     short loc_4185AC
mov     [esi+0BCh], ebp
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_4185AC:                             ; CODE XREF: AircraftClass__Mission_Attack+5B4↑j
push    eax
lea     eax, [esp+0DCh+var_64]
push    eax
mov     ecx, esi
call    ObjectClass__CalcTargetFacing
push    eax
lea     ecx, [esi+388h]
call    FacingClass__Update
mov     ecx, [esi+2B4h]
lea     edx, [esp+0D8h+var_70]
push    ecx
push    edx
mov     ecx, esi
call    ObjectClass__CalcTargetFacing
push    eax
lea     ecx, [esi+3A0h]
call    FacingClass__Update
mov     eax, [esi+2B4h]
mov     edi, [esi]
mov     ebx, 1
mov     ecx, esi
push    ebx
push    eax
call    dword ptr [edi+2E4h]
mov     ecx, [esi+2B4h]
push    eax
push    ecx
mov     ecx, esi
call    dword ptr [edi+3C0h]
cmp     eax, 9          ; switch 10 cases
ja      def_41861C      ; jumptable 0041861C default case, cases 1,4-8
xor     edx, edx
mov     dl, ds:byte_418DB8[eax]
jmp     ds:jpt_41861C[edx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_418623:                             ; CODE XREF: AircraftClass__Mission_Attack+63C↑j
; DATA XREF: .text:jpt_41861C↓o
mov     eax, [esi]      ; jumptable 0041861C case 9
push    0
mov     ecx, esi
call    dword ptr [eax+45Ch]
jmp     def_417FFF      ; jumptable 00417FFF default case, case 2
; jumptable 0041861C case 3
; ---------------------------------------------------------------------------

loc_418634:                             ; CODE XREF: AircraftClass__Mission_Attack+63C↑j
; DATA XREF: .text:jpt_41861C↓o
mov     eax, [esi+2FCh] ; jumptable 0041861C case 2
test    eax, eax
jz      loc_418D17
mov     eax, [esi+2B4h]
mov     edx, [esi]
push    eax
mov     ecx, esi
call    dword ptr [edx+3ACh]
test    al, al
jz      short loc_418688
mov     ecx, [esi+6C0h]
lea     eax, [esi+6C0h]
push    eax
call    dword ptr [ecx+18h]
test    eax, eax
jnz     short loc_418688
mov     edx, ds:8871E0h
mov     al, [edx+17E1h]
neg     al
sbb     eax, eax
and     al, 0FDh
add     eax, 4
mov     [esi+0BCh], eax
jmp     short loc_41868E
; ---------------------------------------------------------------------------

loc_418688:                             ; CODE XREF: AircraftClass__Mission_Attack+675↑j
; AircraftClass__Mission_Attack+689↑j
mov     [esi+0BCh], ebx

loc_41868E:                             ; CODE XREF: AircraftClass__Mission_Attack+6A6↑j
mov     ecx, [esi+6C0h]
lea     eax, [esi+6C0h]
push    eax
call    dword ptr [ecx+18h]
test    eax, eax
jz      def_417FFF      ; jumptable 00417FFF default case, case 2
; jumptable 0041861C case 3
mov     eax, 2Dh ; '-'
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_4186B6:                             ; CODE XREF: AircraftClass__Mission_Attack+63C↑j
; DATA XREF: .text:jpt_41861C↓o
mov     edx, [esi+2B4h] ; jumptable 0041861C case 0
mov     edi, [esi]
push    edx
mov     ecx, esi
call    dword ptr [edi+2E4h]
push    eax
mov     eax, [esi+2B4h]
push    eax
mov     ecx, esi
call    dword ptr [edi+3CCh]
lea     ecx, [esi+9Ch]
push    0
push    0
push    ebx
mov     edx, [ecx]
mov     [esp+0E0h+var_98], edx
lea     edx, [esp+0E0h+var_98]
mov     eax, [ecx+4]
push    edx
mov     [esp+0E4h+var_94], eax
lea     edx, [esp+0E4h+var_2C]
mov     ecx, [ecx+8]
push    edx
mov     [esp+0E8h+var_90], ecx
mov     ecx, [esi+2B4h]
mov     eax, [ecx]
call    dword ptr [eax+48h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    Cell__ApplyDamage
mov     eax, [esi+2FCh]
test    eax, eax
jz      loc_418D17
mov     eax, ds:8871E0h
mov     cl, [eax+17E1h]
neg     cl
sbb     ecx, ecx
and     ecx, 0FFFFFFFDh
add     ecx, 4
mov     [esi+0BCh], ecx
jmp     def_417FFF      ; jumptable 00417FFF default case, case 2
; jumptable 0041861C case 3
; ---------------------------------------------------------------------------

def_41861C:                             ; CODE XREF: AircraftClass__Mission_Attack+62E↑j
; AircraftClass__Mission_Attack+63C↑j
; DATA XREF: ...
mov     eax, [esi+2FCh] ; jumptable 0041861C default case, cases 1,4-8
test    eax, eax
jz      loc_418D17
mov     eax, [esi+2B4h]
mov     edx, [esi]
push    eax
mov     ecx, esi
call    dword ptr [edx+3ACh]
test    al, al
jnz     short loc_41877C
mov     [esi+0BCh], ebx
jmp     def_417FFF      ; jumptable 00417FFF default case, case 2
; jumptable 0041861C case 3
; ---------------------------------------------------------------------------

loc_41877C:                             ; CODE XREF: AircraftClass__Mission_Attack+78F↑j
mov     ecx, ds:8871E0h
mov     dl, [ecx+17E1h]
neg     dl
sbb     edx, edx
and     edx, 0FFFFFFFDh
add     edx, 4
mov     [esi+0BCh], edx
jmp     def_417FFF      ; jumptable 00417FFF default case, case 2
; jumptable 0041861C case 3
; ---------------------------------------------------------------------------

loc_41879D:                             ; CODE XREF: AircraftClass__Mission_Attack+1F↑j
; DATA XREF: .text:jpt_417FFF↓o
mov     eax, [esi+2B4h] ; jumptable 00417FFF case 6
test    eax, eax
jnz     short loc_4187BD
mov     [esi+0BCh], ebp
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_4187BD:                             ; CODE XREF: AircraftClass__Mission_Attack+7C5↑j
mov     edi, [esi]
push    1
push    eax
mov     ecx, esi
call    dword ptr [edi+2E4h]
push    eax
mov     eax, [esi+2B4h]
push    eax
mov     ecx, esi
call    dword ptr [edi+3C0h]
cmp     eax, 9          ; switch 10 cases
ja      def_4187EB      ; jumptable 004187EB default case, cases 1,3-7
; jumptable 004188FA default case, cases 1,3-7
; jumptable 00418A09 default case, cases 1,3-7
; jumptable 00418B18 default case, cases 1,3-7
xor     ecx, ecx
mov     cl, ds:byte_418DD0[eax]
jmp     ds:jpt_4187EB[ecx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_4187F2:                             ; CODE XREF: AircraftClass__Mission_Attack+80B↑j
; DATA XREF: .text:jpt_4187EB↓o
mov     eax, [esi+2B4h] ; jumptable 004187EB case 8
mov     edx, [esi]
push    1
push    eax
mov     ecx, esi
call    dword ptr [edx+480h]

loc_418805:                             ; CODE XREF: AircraftClass__Mission_Attack+80B↑j
; DATA XREF: .text:jpt_4187EB↓o
mov     ecx, [esi+2B4h] ; jumptable 004187EB cases 0,2,9
mov     edi, [esi]
push    ecx
mov     ecx, esi
call    dword ptr [edi+2E4h]
mov     edx, [esi+2B4h]
push    eax
push    edx
mov     ecx, esi
call    dword ptr [edi+3CCh]
lea     eax, [esi+9Ch]
push    0
push    0
push    1
mov     ecx, [eax]
mov     [esp+0ECh+var_C8], ecx
mov     ecx, [esi+2B4h]
mov     edx, [eax+4]
mov     [esp+0ECh+var_C4], edx
lea     edx, [esp+0ECh+var_C8]
mov     eax, [eax+8]
push    edx
mov     [esp+0F0h+var_C0], eax
mov     eax, [ecx]
lea     edx, [esp+0F0h+var_5C]
push    edx
call    dword ptr [eax+48h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    Cell__ApplyDamage
mov     ecx, [esi+2B4h]
mov     eax, [esi]
push    1
push    ecx
mov     ecx, esi
call    dword ptr [eax+480h]
mov     edx, [esi]
push    0
mov     ecx, esi
mov     dword ptr [esi+0BCh], 7
call    dword ptr [edx+3F8h]
mov     eax, [eax]
mov     eax, [eax+0B0h]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_4188AC:                             ; CODE XREF: AircraftClass__Mission_Attack+1F↑j
; DATA XREF: .text:jpt_417FFF↓o
mov     eax, [esi+2B4h] ; jumptable 00417FFF case 7
test    eax, eax
jnz     short loc_4188CC
mov     [esi+0BCh], ebp
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_4188CC:                             ; CODE XREF: AircraftClass__Mission_Attack+8D4↑j
mov     edi, [esi]
push    1
push    eax
mov     ecx, esi
call    dword ptr [edi+2E4h]
mov     ecx, [esi+2B4h]
push    eax
push    ecx
mov     ecx, esi
call    dword ptr [edi+3C0h]
cmp     eax, 9          ; switch 10 cases
ja      def_4187EB      ; jumptable 004187EB default case, cases 1,3-7
; jumptable 004188FA default case, cases 1,3-7
; jumptable 00418A09 default case, cases 1,3-7
; jumptable 00418B18 default case, cases 1,3-7
xor     edx, edx
mov     dl, ds:byte_418DE8[eax]
jmp     ds:jpt_4188FA[edx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_418901:                             ; CODE XREF: AircraftClass__Mission_Attack+91A↑j
; DATA XREF: .text:jpt_4188FA↓o
mov     ecx, [esi+2B4h] ; jumptable 004188FA case 8
mov     eax, [esi]
push    1
push    ecx
mov     ecx, esi
call    dword ptr [eax+480h]

loc_418914:                             ; CODE XREF: AircraftClass__Mission_Attack+91A↑j
; DATA XREF: .text:jpt_4188FA↓o
mov     edx, [esi+2B4h] ; jumptable 004188FA cases 0,2,9
mov     edi, [esi]
push    edx
mov     ecx, esi
call    dword ptr [edi+2E4h]
push    eax
mov     eax, [esi+2B4h]
push    eax
mov     ecx, esi
call    dword ptr [edi+3CCh]
lea     ecx, [esi+9Ch]
push    0
push    0
push    1
mov     edx, [ecx]
mov     [esp+0ECh+var_8C], edx
lea     edx, [esp+0ECh+var_8C]
mov     eax, [ecx+4]
push    edx
mov     [esp+0F0h+var_88], eax
lea     edx, [esp+0F0h+var_44]
mov     ecx, [ecx+8]
push    edx
mov     [esp+0F4h+var_84], ecx
mov     ecx, [esi+2B4h]
mov     eax, [ecx]
call    dword ptr [eax+48h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    Cell__ApplyDamage
mov     ecx, [esi+2B4h]
mov     eax, [esi]
push    1
push    ecx
mov     ecx, esi
call    dword ptr [eax+480h]
mov     edx, [esi]
push    0
mov     ecx, esi
mov     dword ptr [esi+0BCh], 8
call    dword ptr [edx+3F8h]
mov     eax, [eax]
mov     eax, [eax+0B0h]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_4189BB:                             ; CODE XREF: AircraftClass__Mission_Attack+1F↑j
; DATA XREF: .text:jpt_417FFF↓o
mov     eax, [esi+2B4h] ; jumptable 00417FFF case 8
test    eax, eax
jnz     short loc_4189DB

loc_4189C5:                             ; CODE XREF: AircraftClass__Mission_Attack+EE↑j
; AircraftClass__Mission_Attack+FA↑j ...
mov     [esi+0BCh], ebp
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_4189DB:                             ; CODE XREF: AircraftClass__Mission_Attack+9E3↑j
mov     edi, [esi]
push    1
push    eax
mov     ecx, esi
call    dword ptr [edi+2E4h]
mov     ecx, [esi+2B4h]
push    eax
push    ecx
mov     ecx, esi
call    dword ptr [edi+3C0h]
cmp     eax, 9          ; switch 10 cases
ja      def_4187EB      ; jumptable 004187EB default case, cases 1,3-7
; jumptable 004188FA default case, cases 1,3-7
; jumptable 00418A09 default case, cases 1,3-7
; jumptable 00418B18 default case, cases 1,3-7
xor     edx, edx
mov     dl, ds:byte_418E00[eax]
jmp     ds:jpt_418A09[edx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_418A10:                             ; CODE XREF: AircraftClass__Mission_Attack+A29↑j
; DATA XREF: .text:jpt_418A09↓o
mov     ecx, [esi+2B4h] ; jumptable 00418A09 case 8
mov     eax, [esi]
push    1
push    ecx
mov     ecx, esi
call    dword ptr [eax+480h]

loc_418A23:                             ; CODE XREF: AircraftClass__Mission_Attack+A29↑j
; DATA XREF: .text:jpt_418A09↓o
mov     edx, [esi+2B4h] ; jumptable 00418A09 cases 0,2,9
mov     edi, [esi]
push    edx
mov     ecx, esi
call    dword ptr [edi+2E4h]
push    eax
mov     eax, [esi+2B4h]
push    eax
mov     ecx, esi
call    dword ptr [edi+3CCh]
lea     ecx, [esi+9Ch]
push    0
push    0
push    1
mov     edx, [ecx]
mov     [esp+0ECh+var_BC], edx
lea     edx, [esp+0ECh+var_BC]
mov     eax, [ecx+4]
push    edx
mov     [esp+0F0h+var_B8], eax
lea     edx, [esp+0F0h+var_2C]
mov     ecx, [ecx+8]
push    edx
mov     [esp+0F4h+var_B4], ecx
mov     ecx, [esi+2B4h]
mov     eax, [ecx]
call    dword ptr [eax+48h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    Cell__ApplyDamage
mov     ecx, [esi+2B4h]
mov     eax, [esi]
push    1
push    ecx
mov     ecx, esi
call    dword ptr [eax+480h]
mov     edx, [esi]
push    0
mov     ecx, esi
mov     dword ptr [esi+0BCh], 9
call    dword ptr [edx+3F8h]
mov     eax, [eax]
mov     eax, [eax+0B0h]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_418ACA:                             ; CODE XREF: AircraftClass__Mission_Attack+1F↑j
; DATA XREF: .text:jpt_417FFF↓o
mov     eax, [esi+2B4h] ; jumptable 00417FFF case 9
test    eax, eax
jnz     short loc_418AEA
mov     [esi+0BCh], ebp
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_418AEA:                             ; CODE XREF: AircraftClass__Mission_Attack+AF2↑j
mov     edi, [esi]
push    1
push    eax
mov     ecx, esi
call    dword ptr [edi+2E4h]
mov     ecx, [esi+2B4h]
push    eax
push    ecx
mov     ecx, esi
call    dword ptr [edi+3C0h]
cmp     eax, 9          ; switch 10 cases
ja      def_4187EB      ; jumptable 004187EB default case, cases 1,3-7
; jumptable 004188FA default case, cases 1,3-7
; jumptable 00418A09 default case, cases 1,3-7
; jumptable 00418B18 default case, cases 1,3-7
xor     edx, edx
mov     dl, ds:byte_418E14[eax]
jmp     ds:jpt_418B18[edx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_418B1F:                             ; CODE XREF: AircraftClass__Mission_Attack+B38↑j
; DATA XREF: .text:jpt_418B18↓o
mov     eax, [esi+2B4h] ; jumptable 00418B18 cases 0,2,8,9
mov     edi, [esi]
push    eax
mov     ecx, esi
call    dword ptr [edi+2E4h]
mov     ecx, [esi+2B4h]
push    eax
push    ecx
mov     ecx, esi
call    dword ptr [edi+3CCh]
lea     edx, [esi+9Ch]
push    0
push    0
push    1
mov     eax, [edx]
mov     [esp+0F0h+var_9C], eax
lea     eax, [esp+0F0h+var_9C]
mov     ecx, [edx+4]
push    eax
mov     [esp+0F4h+var_98], ecx
mov     ecx, [esi+2B4h]
mov     edx, [edx+8]
lea     eax, [esp+0F4h+var_18]
mov     [esp+0F4h+var_94], edx
mov     edx, [ecx]
push    eax
call    dword ptr [edx+48h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    Cell__ApplyDamage
mov     edx, [esi]
push    0
mov     ecx, esi
mov     dword ptr [esi+0BCh], 3
call    dword ptr [edx+3F8h]
mov     eax, [eax]
mov     ecx, [esi+6C4h]
mov     eax, [eax+0B4h]
add     eax, 400h
cdq
idiv    dword ptr [ecx+678h]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

def_4187EB:                             ; CODE XREF: AircraftClass__Mission_Attack+7FD↑j
; AircraftClass__Mission_Attack+80B↑j ...
mov     eax, [esi+2FCh] ; jumptable 004187EB default case, cases 1,3-7
; jumptable 004188FA default case, cases 1,3-7
; jumptable 00418A09 default case, cases 1,3-7
; jumptable 00418B18 default case, cases 1,3-7
test    eax, eax
jnz     short loc_418BDC ; jumptable 00418345 case 3
mov     [esi+0BCh], ebp
mov     byte ptr [esi+6D2h], 0

loc_418BDC:                             ; CODE XREF: AircraftClass__Mission_Attack+1E9↑j
; AircraftClass__Mission_Attack+365↑j ...
mov     eax, 1          ; jumptable 00418345 case 3
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_418BEC:                             ; CODE XREF: AircraftClass__Mission_Attack+1F↑j
; DATA XREF: .text:jpt_417FFF↓o
mov     al, [esi+6C8h]  ; jumptable 00417FFF case 10
xor     ebx, ebx
cmp     al, bl
mov     [esi+6D2h], bl
jz      short loc_418C15
mov     eax, [esi+2FCh]
mov     [esi+6C8h], bl
cmp     eax, ebx
jle     short loc_418C15
dec     eax
mov     [esi+2FCh], eax

loc_418C15:                             ; CODE XREF: AircraftClass__Mission_Attack+C1C↑j
; AircraftClass__Mission_Attack+C2C↑j
cmp     [esi+2FCh], ebx
jnz     loc_418CD1
cmp     [esi+3D4h], bl
jnz     short loc_418C38
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jz      short loc_418C43

loc_418C38:                             ; CODE XREF: AircraftClass__Mission_Attack+C47↑j
mov     edx, [esi]
push    ebx
mov     ecx, esi
call    dword ptr [edx+3C8h]

loc_418C43:                             ; CODE XREF: AircraftClass__Mission_Attack+C56↑j
; AircraftClass__Mission_Attack+CF7↓j
mov     ecx, [esi+21Ch]
mov     [esi+6D2h], bl
call    HouseClass__GetTransitionCount
push    ebx
push    1
push    4
push    889E68h
push    889E68h
push    eax
lea     eax, [esp+0F0h+var_74]
mov     ecx, 87F7E8h
push    eax
call    CellClass__FindOpenNeighbor
mov     ecx, [eax]
mov     edi, [esi]
lea     edx, [esp+0D8h+var_C4]
mov     [esp+0D8h+var_C4], ecx
push    1
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
push    eax
mov     ecx, esi
call    dword ptr [edi+480h]
mov     eax, [esi+294h]
mov     [esi+6D5h], bl
cmp     eax, ebx
jz      short loc_418CF3
cmp     [esi+2FCh], ebx
jle     short loc_418CF3
mov     eax, [esi]
push    ebx
push    4
mov     ecx, esi
call    dword ptr [eax+1E8h]
mov     byte ptr [esi+6D5h], 1
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_418CD1:                             ; CODE XREF: AircraftClass__Mission_Attack+C3B↑j
cmp     [esi+2B4h], ebx
jz      loc_418C43
mov     eax, 1
mov     [esi+0BCh], eax
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_418CF3:                             ; CODE XREF: AircraftClass__Mission_Attack+CC3↑j
; AircraftClass__Mission_Attack+CCB↑j
mov     edx, [esi]
push    1
push    ebx
mov     ecx, esi
call    dword ptr [edx+484h]
mov     byte ptr [esi+6D5h], 1
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
; ---------------------------------------------------------------------------

loc_418D17:                             ; CODE XREF: AircraftClass__Mission_Attack+7E↑j
; AircraftClass__Mission_Attack+8C↑j ...
mov     [esi+0BCh], ebp

def_417FFF:                             ; CODE XREF: AircraftClass__Mission_Attack+19↑j
; AircraftClass__Mission_Attack+1F↑j ...
mov     ecx, esi        ; jumptable 00417FFF default case, case 2
; jumptable 0041861C case 3
call    MissionClass__GetMissionControl
fld     qword ptr [eax+10h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
mov     esi, eax
mov     eax, ds:0A8B230h
push    2
push    0
lea     ecx, [eax+218h]
call    Random__Range
add     eax, esi
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 0C8h
retn
*/
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
// 0x416d50
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
        (*(void (**)(int, void *, int))(v11.Carryall_field_00 + 1152))(v7, NearbyCell, 1); /*0x416757*/
        v7->missionStatus = 1; /*0x41675d*/
      }
      else
      {
        (*(void (**)(Carryall *, unsigned int, int))(v5->Carryall_field_00 + 1156))(v5, 0, 1); /*0x41670d*/
      }
      goto LABEL_6; /*0x41670d*/
    case 1: /*0x4166f4*/
      v13 = v5[361].Carryall_field_00; /*0x416769*/
      if ( !v13 ) /*0x416771*/
        goto LABEL_29; /*0x416771*/
      v14 = (unsigned int *)(*(int (**)(int, unsigned char *, int, int, int, int, int))(*(unsigned int *)v13 + 76))( /*0x41677f*/
                        v13,
                        v48,
                        v7,
                        a4,
                        a5,
                        a3,
                        a2);
      if ( !v7->locomotor ) /*0x41678a*/
        WinAPI::Wrapper(-2147467261); /*0x416799*/
      (*(void (**)(unsigned int, unsigned int))(*v7->locomotor + 68))(v7->locomotor, *v14); /*0x4167b4*/
      v7->missionStatus = 2; /*0x4167b7*/
      return 1; /*0x4167cd*/
    case 2: /*0x4166f4*/
      if ( v5[328].Carryall_field_00 != -1 ) /*0x4167d5*/
      {
        v15 = v5[361].Carryall_field_00; /*0x4167db*/
        if ( !v15 ) /*0x4167e3*/
          goto LABEL_15; /*0x4167e3*/
        v16 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v15 + 72))(v15, v49); /*0x4167ec*/
        v17 = *v16; /*0x4167ef*/
        v18 = v16[1]; /*0x4167fb*/
        v47 = v16[2]; /*0x416801*/
        a2 = v7->q0A4; /*0x41680e*/
        v37 = v7->q0A0 - v18; /*0x416811*/
        v36 = v7->location - v17; /*0x416812*/
        v47 = a2; /*0x416817*/
        v19 = Coord::Subtract((Coord *)v50, v36, v37, 0); /*0x41681b*/
        v46[0] = *v19; /*0x416822*/
        v46[1] = v19[1]; /*0x416829*/
        v47 = v19[2]; /*0x416834*/
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
        WinAPI::Wrapper(-2147467261); /*0x416899*/
      if ( !(*(uint8_t (**)(unsigned int))(*v7->locomotor + 16))(v7->locomotor) ) /*0x4168a7*/
        goto LABEL_40; /*0x4168a7*/
      v22 = v7->movementDestination; /*0x4168b2*/
      if ( v22 ) /*0x4168ba*/
      {
        v23 = (unsigned int *)(*(int (**)(int, unsigned int *, int))(*(unsigned int *)v22 + 76))(v22, v50, v7); /*0x4168c4*/
        v24 = *v23 / 256; /*0x4168ed*/
        v25 = v23[1] / 256; /*0x4168f0*/
        v26 = (unsigned short *)(*(int (**)(int, unsigned char *))(v7->airstrikeTintTimer)(v7, v44); /*0x4168f3*/
        if ( (unsigned short)v24 == *v26 && (unsigned short)v25 == v26[1] ) /*0x416902*/
          goto LABEL_40; /*0x416902*/
      }
      v27 = v7->movementDestination; /*0x416908*/
      if ( v27 ) /*0x416910*/
      {
        v28 = (unsigned int *)(*(int (**)(int, unsigned int *, int))(*(unsigned int *)v27 + 76))(v27, v50, v7); /*0x41691a*/
        IDA_LOWORD(v40) = *v28 / 256; /*0x41692f*/
        IDA_HIWORD(v40) = v28[1] / 256; /*0x416947*/
        *(unsigned int *)v40 = v40; /*0x416950*/
        if ( !Cell::IsOccupied((Cell *)v7, v40, 1) ) /*0x416957*/
          goto LABEL_24; /*0x41695e*/
      }
      v7->missionStatus = 4; /*0x416977*/
      return 1; /*0x41698d*/
    case 3: /*0x4166f4*/
      if ( !v5[413].Carryall_field_00 ) /*0x41698e*/
        WinAPI::Wrapper(-2147467261); /*0x41699d*/
      if ( !(*(uint8_t (**)(int))(*(unsigned int *)v5[413].Carryall_field_00 + 16))(v5[413].Carryall_field_00) ) /*0x4169ab*/
  LABEL_29:
        (*(void (**)(int, unsigned int, int))(v7->q484)(v7, 0, 1); /*0x4169b2*/
      return 1; /*0x4169cc*/
    case 4: /*0x4166f4*/
      if ( !v5[413].Carryall_field_00 ) /*0x4169cd*/
        WinAPI::Wrapper(-2147467261); /*0x4169dc*/
      if ( !(*(uint8_t (**)(int))(*(unsigned int *)v5[413].Carryall_field_00 + 16))(v5[413].Carryall_field_00) /*0x416a45*/
        || (v29 = v7->movementDestination) != 0
        && (v30 = (unsigned int *)(*(int (**)(int, unsigned int *, int))(*(unsigned int *)v29 + 76))(v29, v50, v7),
            v31 = *v30 / 256,
            v32 = v30[1] / 256,
            v33 = (unsigned short *)(*(int (**)(int, int *))(v7->airstrikeTintTimer)(v7, &v45),
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
          v35 = (unsigned int *)(*(int (**)(int, unsigned int *, int))(*(unsigned int *)v34 + 76))(v34, v50, v7); /*0x416a59*/
          IDA_LOWORD(v41) = *v35 / 256; /*0x416a6e*/
          IDA_HIWORD(v41) = v35[1] / 256; /*0x416a86*/
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
      IDA_LOWORD(v10) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x416723*/
      return v10 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x416747*/
  }
  return result; /*0x416747*/
}
// 0x419c80
ILocomotion * * AircraftClass::Mission_Transport()
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
    || !*(unsigned char *)(v3[433] + 3597)
    || !v3[361]
    || (v4 = (unsigned int *)v3[361], v5 = (Cell *)(*(int (**)(int *))(*v3 + 444))(v3), v4 == Cell::IsBridge(v5)) )
  {
    if ( (*(int (**)(int *))(*v3 + 456))(v3) > 0 )
    {
      v9 = v3[361]; /*0x419d19*/
      if ( v3[435] != v9 && v9 && (*(int (**)(int))(*(unsigned int *)v9 + 44))(v9) == 6 )
      {
        v10 = v3[361]; /*0x419d37*/
        if ( v10 )
          v11 = (*(int (**)(int))(*(unsigned int *)v10 + 44))(v3[361]) == 6 ? v10 : 0;
        else
          v11 = 0; /*0x419d41*/
        v3[435] = v11; /*0x419d57*/
      }
    }
    if ( v3[361] /*0x419d86*/
      || (*(int (**)(int *))(*v3 + 120))(v3) == 2
      || (*(int (**)(int *, int))(*v3 + 628))(v3, 14) == 1
      || TechnoClass::PlaceAtCell((TechnoClass *)v3) )
    {
      switch ( v3[47] ) /*0x419dbc*/
      {
        case 0: /*0x419dbc*/
          v3[47] = 6; /*0x419dc3*/
          goto LABEL_24; /*0x419dc3*/
        case 1: /*0x419dbc*/
        case 2: /*0x419dbc*/
        case 3: /*0x419dbc*/
        case 4: /*0x419dbc*/
        case 5: /*0x419dbc*/
  LABEL_24:
          *((unsigned char *)v3 + 1748) = 1; /*0x419dcd*/
          return 1; /*0x419ddf*/
        case 6: /*0x419dbc*/
          if ( *(unsigned char *)(v3[433] + 3597) && (*(int (**)(int *))(*v3 + 456))(v3) ) /*0x419df4*/
            (*(void (**)(int *, int))(*v3 + 628))(v3, 14); /*0x419e04*/
          if ( (uint8_t)Team::AllMembersValid((Team *)v3) ) /*0x419e0c*/
          {
            if ( !v3[413] ) /*0x419eaa*/
              WinAPI::Wrapper(-2147467261); /*0x419eb9*/
            if ( (*(int (**)(int))(*(unsigned int *)v3[413] + 144))(v3[413]) == 1 /*0x419ee6*/
              || *(unsigned char *)(v3[433] + 3597) && !(*(int (**)(int *))(*v3 + 456))(v3) )
            {
              v3[47] = 7; /*0x419ef0*/
              *((unsigned char *)v3 + 1748) = 0; /*0x419ef6*/
            }
            result = 3; /*0x419eff*/
          }
          else
          {
            if ( !TechnoClass::PlaceAtCell((TechnoClass *)v3) ) /*0x419e1b*/
            {
              if ( !v3[413] ) /*0x419e24*/
                WinAPI::Wrapper(-2147467261); /*0x419e33*/
              if ( (*(int (**)(int))(*(unsigned int *)v3[413] + 144))(v3[413]) == 1 ) /*0x419e4a*/
              {
                v3[47] = 7; /*0x419e4c*/
                *((unsigned char *)v3 + 1748) = 1; /*0x419e52*/
              }
              if ( v3[45] == -1 ) /*0x419e5f*/
              {
                (*(void (**)(int *, unsigned int, int))(*v3 + 1152))(v3, 0, 1); /*0x419e69*/
                (*(void (**)(int *, unsigned int, int))(*v3 + 1156))(v3, 0, 1); /*0x419e77*/
                *((unsigned char *)v3 + 1748) = 1; /*0x419e7d*/
                return 1; /*0x419e8f*/
              }
              *((unsigned char *)v3 + 1748) = 1; /*0x419e90*/
            }
            *((unsigned char *)v3 + 1748) = 1; /*0x419e97*/
            result = 1; /*0x419ea0*/
          }
          break; /*0x419ea9*/
        case 7: /*0x419dbc*/
          if ( !v3[413] ) /*0x419f09*/
            WinAPI::Wrapper(-2147467261); /*0x419f18*/
          if ( (*(int (**)(int))(*(unsigned int *)v3[413] + 144))(v3[413]) == 1 ) /*0x419f2f*/
          {
            v12 = v3[361]; /*0x419f35*/
            if ( v12 ) /*0x419f3d*/
            {
              if ( (*(int (**)(int))(*(unsigned int *)v12 + 44))(v3[361]) == 6 ) /*0x419f4d*/
                v13 = (int *)(*(int (**)(int, unsigned char *, int *))(*(unsigned int *)v12 + 168))(v12, v30, v3); /*0x419f59*/
              else
                v13 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v3[361] + 72))(v3[361], v31); /*0x419f6e*/
              v14 = *v13; /*0x419f71*/
              v15 = v13[1]; /*0x419f73*/
              v32 = v13[2]; /*0x419f79*/
              v16 = v3[39]; /*0x419f85*/
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
              (*(void (**)(int *, unsigned int *))(v21 + 436))(v3, v29); /*0x419fde*/
            }
            *((unsigned char *)v3 + 1748) = 1; /*0x419fe4*/
            return 1; /*0x419fed*/
          }
          else
          {
            v22 = *v3; /*0x419ff7*/
            *((unsigned char *)v3 + 1748) = 1; /*0x419ffd*/
            v23 = (*(int (**)(int *, int))(v22 + 628))(v3, 21) - 1; /*0x41a00a*/
            if ( v23 ) /*0x41a00b*/
            {
              if ( v23 == 4 ) /*0x41a010*/
              {
                (*(void (**)(int *))(*v3 + 212))(v3); /*0x41a030*/
                Member = Team::GetMember((Team *)v3, 0); /*0x41a03b*/
                CellClass::AddObject((CellClass *)(Member + 276), v3); /*0x41a048*/
              }
              else
              {
                (*(void (**)(int *, unsigned int, int))(*v3 + 1156))(v3, 0, 1); /*0x41a01a*/
              }
              return 1; /*0x41a022*/
            }
            else if ( *(unsigned char *)(v3[433] + 3580) && v3[70] ) /*0x41a06d*/
            {
              v25 = Team::GetMember((Team *)v3, 0); /*0x41a08b*/
              v26 = (unsigned int *)LinkedList::Pop((LinkedList *)v3 + 23); /*0x41a09a*/
              (*(void (**)(int *, int, int))(*v3 + 628))(v3, 3, a2); /*0x41a09c*/
              if ( (*(int (**)(unsigned int *, int, int))(*v26 + 632))(v26, 2, v25) == 1 ) /*0x41a0b2*/
              {
                CellClass::AddObject((CellClass *)(v3 + 69), v26); /*0x41a0b7*/
                (*(void (**)(int *, unsigned int))(*v3 + 292))(v3, 0); /*0x41a0c2*/
                FootClass::MissionMoveCarryallLand((FootClass *)v3); /*0x41a0ca*/
                (*(void (**)(int *, int))(*v3 + 292))(v3, 1); /*0x41a0d5*/
              }
              else
              {
                v27 = *v3; /*0x41a0f6*/
                ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((TechnoClass *)v3); /*0x41a0fc*/
                (*(void (**)(int *, void *))(v27 + 1152))(v3, ClosestPlacementCell); /*0x41a104*/
              }
              (*(void (**)(int *, int, unsigned int))(*v3 + 488))(v3, 2, 0); /*0x41a0e3*/
              return 1; /*0x41a0ec*/
            }
            else
            {
              (*(void (**)(int *, int, unsigned int))(*v3 + 488))(v3, 5, 0); /*0x41a12d*/
              return 1; /*0x41a133*/
            }
          }
        default:
          return 1;
      }
    }
    else
    {
      (*(void (**)(int *, unsigned int, int))(*v3 + 1156))(v3, 0, 1); /*0x419d97*/
      return 1; /*0x419d9f*/
    }
  }
  else
  {
    if ( v4 )
      v6 = (*(int (**)(unsigned int *))(*v4 + 44))(v4) == 6 ? v4 : 0;
    else
      v6 = 0; /*0x419cc9*/
    v7 = *v3; /*0x419cdf*/
    v3[435] = (int)v6; /*0x419ce5*/
    (*(void (**)(int *, int))(v7 + 628))(v3, 3); /*0x419ceb*/
    (*(void (**)(int *, int, int))(*v3 + 488))(v3, 2, 1); /*0x419cf9*/
    return 1; /*0x419d01*/
  }
  return result; /*0x419cff*/
}
// 0x4190b0
int AircraftClass::MissionDispatch()
{
  int result; // eax
  void (__thiscall **v6)(AircraftClass *, void *, int); // ebx
  void *ClosestPlacementCell; // eax
  AbstractClass *v8; // edi
  int (__thiscall **vtable0)(AircraftClass *, int, void *); // ebx
  void *v10; // eax
  AbstractClass *movementDestination; // ecx
  AircraftTypeClass *Type; // eax
  unsigned int *v13; // eax
  int v14; // eax
  int Member; // eax
  int v16; // eax
  unsigned int *v17; // [esp+0h] [ebp-10h]

  switch ( ((unsigned int *)this)[0] )
  {
    case 4:
    case 0x1A:
    case 0x1B:
    case 0x1E:
    case 0x1F:
      if ( ((unsigned int *)this)[0] ) /*0x4190d3*/
        goto LABEL_4; /*0x4190db*/
  LABEL_3:
      result = 0; /*0x4190dd*/
      break; /*0x4190e3*/
    default:
  LABEL_4:
      switch ( a3 )
      {
        case 8:
          if ( !this->Type[1].TechnoTypeClass[300] /*0x419519*/
            || (*((int (**)(AircraftClass *))this->FootClass + 97))(this) != 2
            || !((unsigned int *)this)[0]
            || (!((unsigned int *)this)[1] || (unsigned int *)CCINIClass::GetDB((CCINIClass *)((unsigned int *)this)[0]) != a2)
            && ((unsigned int *)this)[0] != (AbstractClass *)a2 )
          {
// 0x4d8fb0
            return FootClass::MissionDispatch((FootClass *)a2, a3, (unsigned int *)a3, (int)a4, v17); /*0x419519*/
          }
          return 10; /*0x419519*/
        case 14:
          v14 = *(unsigned int *)&this->Type->TechnoTypeClass[1504]; /*0x41939d*/
          if ( v14 <= 0 || ((unsigned int *)this)[0] >= v14 ) /*0x4193b1*/
// 0x4d8fb0
            return FootClass::MissionDispatch((FootClass *)a2, a3, (unsigned int *)a3, (int)a4, v17); /*0x4193b1*/
          FootClass::MissionDispatch((FootClass *)a2, a3, (unsigned int *)a3, (int)a4, v17); /*0x4193c4*/
          if ( !((unsigned int *)this)[0] ) /*0x4193c9*/
            WinAPI::Wrapper(-2147467261); /*0x4193d8*/
          if ( (*(uint8_t (**)(int))(*(unsigned int *)((unsigned int *)this)[0] + 16))(((unsigned int *)this)[0]) ) /*0x4193e6*/
            return 1; /*0x4193e6*/
          RateScaler::Init((RateScaler *)((unsigned int *)this)[0], *(double *)&this->Type->TechnoTypeClass[968]); /*0x419407*/
          if ( (*((int (**)(AircraftClass *, int, unsigned int *))this->FootClass + 158))(this, 19, a2) != 1 ) /*0x41941c*/
            return 1; /*0x41941c*/
          *a4 = this; /*0x41941e*/
          if ( (*((int (**)(AircraftClass *, int, void **, unsigned int *))this->FootClass + 159))( /*0x419431*/
                 this,
                 18,
                 a4,
                 a2) == 1 )
          {
            Member = Team::GetMember((Team *)this, 0); /*0x419450*/
            (*(void (**)(int))(*(unsigned int *)Member + 336))(Member); /*0x419459*/
            return 1; /*0x41945f*/
          }
          else
          {
            (*((void (**)(AircraftClass *, int, unsigned int *))this->FootClass + 158))(this, 3, a2); /*0x41943a*/
            return 1; /*0x419443*/
          }
        case 15:
          if ( !*(unsigned int *)&this->Type->TechnoTypeClass[1504] /*0x419492*/
            || !a2
            || !(uint8_t)Object::IsAlliedWithObjectHouse((Object *)((unsigned int *)this)[0], (int)a2) )
          {
            goto LABEL_3; /*0x419499*/
          }
          v16 = (((unsigned int *)this)[0] >= *(unsigned int *)&this->Type->TechnoTypeClass[1504]) - 1; /*0x4194b9*/
          IDA_LOBYTE(v16) = v16 & 0xF7; /*0x4194bb*/
          return v16 + 10; /*0x4194c2*/
        case 18:
          FootClass::MissionDispatch((FootClass *)a2, a3, (unsigned int *)a3, (int)a4, v17); /*0x4191ff*/
          v8 = (AbstractClass *)*a4; /*0x419204*/
          if ( *a4 && (*((int (**)(AbstractClass *))v8->vtable0 + 11))(v8) == 6 ) /*0x419214*/
          {
            vtable0 = (int (**)(AircraftClass *, int, void *))this->FootClass; /*0x419216*/
            v10 = AbstractClass::IsTechnoType(v8); /*0x41921a*/
            if ( vtable0[158](this, 15, v10) != 1 ) /*0x41922d*/
              return 10; /*0x419238*/
            (*((void (**)(AircraftClass *, int, unsigned int))this->FootClass + 122))(this, 7, 0); /*0x419241*/
          }
          else
          {
            (*((void (**)(AircraftClass *, int, unsigned int))this->FootClass + 122))(this, 2, 0); /*0x41924b*/
          }
          (*((void (**)(AircraftClass *, AbstractClass *, int))this->FootClass + 288))(this, v8, 1); /*0x419258*/
          (*((void (**)(AircraftClass *))this->FootClass + 123))(this); /*0x419262*/
          result = 1; /*0x41926b*/
          break; /*0x419271*/
        case 19:
          FootClass::MissionDispatch((FootClass *)a2, a3, (unsigned int *)a3, (int)a4, v17); /*0x419281*/
          if ( !((unsigned int *)this)[0] ) /*0x419286*/
            WinAPI::Wrapper(-2147467261); /*0x419295*/
          if ( !(*(uint8_t (**)(int))(*(unsigned int *)((unsigned int *)this)[0] + 16))(((unsigned int *)this)[0]) ) /*0x4192a3*/
            return 1; /*0x4192a3*/
          movementDestination = ((unsigned int *)this)[0]; /*0x4192ae*/
          if ( !movementDestination ) /*0x4192b6*/
            return 1; /*0x4192b6*/
          if ( this->Type[1].TechnoTypeClass[317] /*0x4192ee*/
            && (*((int (**)(AbstractClass *))movementDestination->vtable0 + 11))(movementDestination) == 11
            && ((unsigned int *)this)[0] == (AbstractClass *)(*((int (**)(AircraftClass *))this->FootClass + 111))(this) )
          {
            return 1; /*0x4192f7*/
          }
          else
          {
            return 10; /*0x41951f*/
          }
        case 21:
          Type = this->Type; /*0x419300*/
          if ( ((unsigned int *)this)[0] == *(unsigned int *)&Type->TechnoTypeClass[1504] ) /*0x419312*/
            Timer::StartDouble((Timer *)((unsigned int *)this)[0], *(double *)&Type->TechnoTypeClass[968]); /*0x419328*/
          if ( a2 )
          {
            v13 = (*(int (**)(unsigned int *))(*a2 + 44))(a2) == 15 ? a2 : 0;
            if ( v13 ) /*0x419347*/
            {
              if ( *(unsigned char *)(v13[432] + 3777) && !*((unsigned char *)v13 + 1753) ) /*0x419359*/
              {
                (*((void (**)(AircraftClass *, unsigned int))this->FootClass + 242))(this, 0); /*0x419369*/
                (*((void (**)(AircraftClass *, unsigned int, int))this->FootClass + 288))(this, 0, 1); /*0x419377*/
                (*((void (**)(AircraftClass *, int, unsigned int))this->FootClass + 122))(this, 4, 0); /*0x419385*/
              }
            }
          }
          return 5; /*0x419394*/
        case 23:
          (*((void (**)(AircraftClass *, int, unsigned int))this->FootClass + 122))(this, 2, 0); /*0x4191b7*/
          v6 = (void (**)(AircraftClass *, void *, int))this->FootClass; /*0x4191bd*/
          ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((TechnoClass *)this); /*0x4191c3*/
          v6[288](this, ClosestPlacementCell, 1); /*0x4191cb*/
          (*((void (**)(AircraftClass *, int))this->FootClass + 157))(this, 3); /*0x4191d7*/
// 0x4d8fb0
          return FootClass::MissionDispatch((FootClass *)a2, a3, (unsigned int *)a3, (int)a4, v17); /*0x4191d7*/
        case 29:
          if ( ((unsigned int *)this)[0] )
            return 10; /*0x419160*/
          else
            return *(unsigned int *)&this->Type->TechnoTypeClass[1668] != ((unsigned int *)this)[0] ? 10 : 1;
        case 31:
          if ( ((unsigned int *)this)[0] < *(unsigned int *)&this->Type->TechnoTypeClass[1668] / 2 || !((unsigned int *)this)[0] ) /*0x419124*/
// 0x4d8fb0
            return FootClass::MissionDispatch((FootClass *)a2, a3, (unsigned int *)a3, (int)a4, v17); /*0x41912c*/
          return 1; /*0x419137*/
        case 33:
          return *(unsigned int *)&this->Type->TechnoTypeClass[1668] != ((unsigned int *)this)[0] ? 10 : 1;
        default:
// 0x4d8fb0
          return FootClass::MissionDispatch((FootClass *)a2, a3, (unsigned int *)a3, (int)a4, v17); /*0x4191ef*/
      }
      break; /*0x4191ef*/
  }
  return result; /*0x4190dd*/
}
// 0x414310
int AircraftClass::MoveTo()
{
  int v5; // ecx
  int v6; // edi
  int v7; // ebx
  int v9; // eax
  int16_t v10; // dx
  int v12; // ecx
  int v13; // edi
  int v15; // [esp+Ch] [ebp-Ch] BYREF
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]

  a2 = a2; /*0x414314*/
  v15 = *a2; /*0x414320*/
  v5 = *(&this->currentMission3); /*0x414324*/
  v16 = a2[1]; /*0x41432d*/
  v17 = a2[2]; /*0x414334*/
  if ( !v5->qD68 ) /*0x414338*/
  {
    if ( this->isALoaner || !(uint8_t)IsCoordVisibleMap(a2) ) /*0x414352*/
    {
      v6 = *(&this->currentMission3); /*0x41436c*/
      v7 = Cell::GetGroundHeight(a2); /*0x414381*/
      v17 = (*(int (**)(int))(v6->ChargerTurrets)(v6) + v7; /*0x41438b*/
    }
    else
    {
      v17 = Cell::GetGroundHeight(a2); /*0x414366*/
    }
  }
  a3 = a3; /*0x41438f*/
  if ( !(uint8_t)FootClass::DispatchInput(&v15, a3) ) /*0x41439b*/
    return 0; /*0x41449d*/
  v9 = *(&this->currentMission3); /*0x4143a8*/
  if ( !v9->q230 /*0x4143e1*/
    || !v9->qE0A
    || *(unsigned int *)this->SelectVocOrSfx(0)
    && *(unsigned char *)(*(unsigned int *)this->SelectVocOrSfx(0) + 327) )
  {
    this->isALoaner = 1; /*0x4143eb*/
  }
  if ( *(&this->referenceCount0) ) /*0x4143f2*/
    this->HasPassengers = 1; /*0x4143fc*/
  IDA_LOBYTE(v10) = 0; /*0x414403*/
  IDA_HIBYTE(v10) = a3; /*0x414409*/
  IDA_LOWORD(a2) = v10; /*0x414412*/
  FacingClass::Set_SyncLog(&a2); /*0x414417*/
  *(&this->nextArrayIndex4) = g_CurrentFrame; /*0x41442c*/
  v16 = v16; /*0x41442e*/
  *(&this->nextArrayIndex7) = 1; /*0x414432*/
  *(&this->nextArrayIndex5) = v16; /*0x414438*/
  *(&this->nextArrayIndex6) = 1; /*0x41443b*/
  v12 = *(&this->currentMission3); /*0x41443e*/
  *(&this->nextArrayIndex2) = 0; /*0x414444*/
  v13 = (*(int (**)(int))(v12->ChargerTurrets)(v12); /*0x414456*/
  if ( this->GetZAboveGround() == v13 ) /*0x414464*/
    this->Destru_vt337(0, 1072693248); /*0x414471*/
  else
    this->Destru_vt337(0, 0); /*0x41448a*/
  return 1; /*0x414477*/
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
  int result; // eax

  switch ( ((unsigned int *)this)[0] ) /*0x41baab*/
  {
    case 4: /*0x41baab*/
    case 0x1A: /*0x41baab*/
    case 0x1B: /*0x41baab*/
    case 0x1E: /*0x41baab*/
    case 0x1F: /*0x41baab*/
      if ( ((unsigned int *)this)[0] ) /*0x41bab2*/
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
int AircraftClass::ProcessReturnToBase()
{
  double v1; // st7
  HouseClass *owner; // ecx
  int *TransitionCount; // eax
  void (__thiscall **vtable0)(AircraftClass *, void *, int); // edi
  void *v6; // eax
  int v8; // [esp+0h] [ebp-Ch]
  int16_t v9[2]; // [esp+4h] [ebp-8h] BYREF
  int v10; // [esp+8h] [ebp-4h] BYREF

  if ( ((unsigned int *)this)[0] ) /*0x415a56*/
  {
    if ( ((unsigned int *)this)[0] == (AbstractClass *)(*((int (**)(AircraftClass *))this->FootClass + 111))(this) ) /*0x415aef*/
      (*((void (**)(AircraftClass *, unsigned int, int))this->FootClass + 288))(this, 0, 1); /*0x415af9*/
  }
  else
  {
    owner = ((unsigned int *)this)[0]; /*0x415a60*/
    TransitionCount = *(int **)&owner->__pad_13C[164]; /*0x415a66*/
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
      vtable0 = (void (**)(AircraftClass *, void *, int))this->FootClass; /*0x415ab8*/
      v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9); /*0x415ac6*/
      vtable0[288](this, v6, 1); /*0x415ace*/
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
  return MissionClass::AdvanceState((MissionClass *)this);
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
  int v3; // eax
  int v4; // ecx
  int v5; // edx

  v3 = FootClass::BeginPowerUpdate((FootClass *)this, a2); /*0x41b619*/
  IDA_LOBYTE(v3) = this->HasPassengers; /*0x41b61e*/
  Power::FlagProcess((Power *)a2, v3); /*0x41b627*/
  IDA_LOBYTE(v4) = this->AircraftClass_field_bool_6D0; /*0x41b62c*/
  Power::FlagProcess((Power *)a2, v4); /*0x41b635*/
  IDA_LOBYTE(v5) = this->AircraftClass_field_bool_6D1; /*0x41b63a*/
  Power::FlagProcess((Power *)a2, v5); /*0x41b643*/
// 0x4a1d50
  return Power::TimerProcess(this->AircraftClass_field_char_6D3); /*0x41b657*/
}
// IDA: 0x41B660 (HandleTargetDestroyed, 56B)
// 0x41b660
AircraftTypeClass * * AircraftClass::HandleTargetDestroyed()
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
AbstractClass * * AircraftClass::ProcessMissionTimeout()
{
  char *MissionControl; // eax
  int v3; // esi
  int v5; // edi
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // [esp+10h] [ebp-Ch] BYREF
  int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h]

  if ( *(&this->q04C1) ) /*0x414a86*/
  {
    if ( *(&this->q0443) ) /*0x414ae5*/
      goto LABEL_12; /*0x414ae5*/
    if ( g_GameMode_Current[0] ) /*0x414afb*/
    {
      v5 = *this; /*0x414b03*/
      v9 = *(&this->vtable49); /*0x414b09*/
      v10 = *(&this->uniqueId0); /*0x414b15*/
      v11 = *(&this->uniqueId1); /*0x414b20*/
      v6 = this->SelectAutoTarget_Cloaked(64, &v9, 0); /*0x414b24*/
      this->AssignTarget_SyncLog(v6); /*0x414b2d*/
    }
    if ( !*(&this->q0443) ) /*0x414b33*/
    {
      v7 = *this; /*0x414b43*/
      v9 = *(&this->vtable49); /*0x414b49*/
      v10 = *(&this->uniqueId0); /*0x414b57*/
      v11 = *(&this->uniqueId1); /*0x414b5e*/
      v8 = this->SelectAutoTarget_Cloaked(0, &v9, 0); /*0x414b64*/
      this->AssignTarget_SyncLog(v8); /*0x414b6d*/
    }
    if ( *(&this->q0443) ) /*0x414b73*/
    {
  LABEL_12:
      this->ProcessLanding(1, 0); /*0x414b9e*/
      return 1; /*0x414ba4*/
    }
    else
    {
      this->ValidatePlacement(0, 1); /*0x414b86*/
      return 1; /*0x414b8c*/
    }
  }
  else
  {
    if ( *(&this->lastLayer3) ) /*0x414a90*/
      TeamClass::LiberateMember_Start(this, -1, 0); /*0x414a9f*/
    this->ValidatePlacement(0, 1); /*0x414aac*/
    MissionControl = MissionClass::GetMissionControl(this); /*0x414ab4*/
    v3 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x414ad7*/
    return v3 + Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2); /*0x414ade*/
  }
}
// 0x41a5c0
int AircraftClass::GetMissionTimer()
{
  int v2; // edi
  void (__thiscall **vtable0)(AircraftClass *, int, unsigned int); // eax
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

  v2 = (*(int (**)(AircraftTypeClass *))(this->Type->ChargerTurrets)(this->Type); /*0x41a5d9*/
  if ( (*((int (**)(AircraftClass *))this->FootClass + 114))(this) == v2 ) /*0x41a5e3*/
  {
    if ( ((unsigned int *)this)[0] ) /*0x41a5e9*/
    {
      if ( ((unsigned int *)this)[0] ) /*0x41a5f3*/
      {
        vtable0 = (void (**)(AircraftClass *, int, unsigned int))this->FootClass; /*0x41a5fd*/
        this->AircraftClass_field_bool_6D4 = 1; /*0x41a605*/
        vtable0[122](this, 2, 0); /*0x41a60c*/
      }
      MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x41a614*/
      IDA_LOWORD(result) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x41a622*/
    }
    else if ( *(unsigned int *)(*((int (**)(AircraftClass *, unsigned int))this->FootClass + 254))(this, 0) ) /*0x41a639*/
    {
      if ( !((unsigned int *)this)[0] ) /*0x41a68d*/
      {
        v8 = (void (**)(AircraftClass *, unsigned int, int))this->FootClass; /*0x41a697*/
        this->AircraftClass_field_bool_6D4 = 1; /*0x41a69f*/
        v8[289](this, 0, 1); /*0x41a6a6*/
      }
      return 1; /*0x41a6ad*/
    }
    else
    {
      v6 = (void (**)(AircraftClass *, CellClass *, int))this->FootClass; /*0x41a644*/
      v16 = ((unsigned int *)this)[0]; /*0x41a64a*/
      v17 = ((unsigned int *)this)[1]; /*0x41a65b*/
      v18 = ((unsigned int *)this)[2]; /*0x41a662*/
      v7 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v16); /*0x41a666*/
      v6[288](this, v7, 1); /*0x41a66e*/
      (*((void (**)(AircraftClass *, int, unsigned int))this->FootClass + 122))(this, 2, 0); /*0x41a67c*/
      return 1; /*0x41a683*/
    }
    return result; /*0x41a62c*/
  }
  if ( byte_889ECC ) /*0x41a6be*/
  {
    if ( ((unsigned int *)this)[0] || !(*((uint8_t (**)(AircraftClass *))this->FootClass + 171))(this) ) /*0x41a6d2*/
      goto LABEL_14; /*0x41a6da*/
  LABEL_26:
    if ( !(uint8_t)Team::AllMembersValid((Team *)this) ) /*0x41a7bf*/
    {
      v11 = (*((int (**)(AircraftClass *, unsigned char *, unsigned int, unsigned int))this->FootClass + 330))( /*0x41a7e6*/
              this,
              &this->Type->TechnoTypeClass[1000],
              0,
              0);
      if ( v11 ) /*0x41a7ea*/
      {
        (*((void (**)(AircraftClass *, int, unsigned int))this->FootClass + 122))(this, 7, 0); /*0x41a7f8*/
        (*((void (**)(AircraftClass *, int, int))this->FootClass + 288))(this, v11, 1); /*0x41a805*/
        (*((void (**)(AircraftClass *, unsigned int))this->FootClass + 242))(this, 0); /*0x41a811*/
        return 1; /*0x41a821*/
      }
    }
    goto LABEL_14; /*0x41a7ea*/
  }
  if ( byte_889ECD ) /*0x41a75f*/
  {
    if ( (*((uint8_t (**)(AircraftClass *))this->FootClass + 171))(this) /*0x41a78c*/
      && ((unsigned int *)this)[0] < *(unsigned int *)&this->Type->TechnoTypeClass[1668] / 2 )
    {
      goto LABEL_26; /*0x41a78c*/
    }
  }
  else if ( (*((uint8_t (**)(AircraftClass *))this->FootClass + 171))(this) /*0x41a7b7*/
         && ((unsigned int *)this)[0] < *(unsigned int *)&this->Type->TechnoTypeClass[1668] )
  {
    goto LABEL_26; /*0x41a7b7*/
  }
  LABEL_14:
  ammo = ((unsigned int *)this)[0]; /*0x41a6e0*/
  if ( ammo != -1 && ammo < *(unsigned int *)&this->Type->TechnoTypeClass[1668] / 2 ) /*0x41a702*/
  {
    if ( (uint8_t)Team::AllMembersValid((Team *)this) ) /*0x41a70a*/
    {
      Member = Team::GetMember((Team *)this, 0); /*0x41a71b*/
      if ( (*(int (**)(int))(*(unsigned int *)Member + 44))(Member) == 6 ) /*0x41a72a*/
      {
        if ( *(unsigned char *)(*(unsigned int *)(Team::GetMember((Team *)this, 0) + 1312) + 5802) ) /*0x41a73f*/
          return 1; /*0x41a74e*/
      }
    }
  }
  if ( ((unsigned int *)this)[0] ) /*0x41a822*/
  {
    (*((void (**)(AircraftClass *, int, unsigned int))this->FootClass + 122))(this, 1, 0); /*0x41a834*/
    return 1; /*0x41a83b*/
  }
  else if ( (*((uint8_t (**)(AircraftClass *))this->FootClass + 171))(this) ) /*0x41a849*/
  {
    if ( (*((int (**)(AircraftClass *))this->FootClass + 114))(this) /*0x41a86e*/
      || (uint8_t)Team::AllMembersValid((Team *)this) )
    {
      if ( !(uint8_t)House::IsCurrentPlayer((House *)((unsigned int *)this)[0]) ) /*0x41a888*/
      {
        v16 = ((unsigned int *)this)[0]; /*0x41a89d*/
        owner = (CellClass *)((unsigned int *)this)[0]; /*0x41a8a9*/
        v17 = ((unsigned int *)this)[1]; /*0x41a8af*/
        v18 = ((unsigned int *)this)[2]; /*0x41a8b6*/
        v13 = CellClass::ScanOccupiers(owner, &v16); /*0x41a8ba*/
        if ( v13 ) /*0x41a8c1*/
        {
          (*((void (**)(AircraftClass *, unsigned int *))this->FootClass + 242))(this, v13); /*0x41a8c8*/
          (*((void (**)(AircraftClass *, int, unsigned int))this->FootClass + 122))(this, 1, 0); /*0x41a8d6*/
        }
      }
      if ( !(uint8_t)House::IsCurrentPlayer((House *)((unsigned int *)this)[0]) /*0x41a8ef*/
        || (*((uint8_t (**)(AircraftClass *))this->FootClass + 21))(this) )
      {
// 0x4d5070
        return FootClass::FindMovePosition((FootClass *)this); /*0x41a92b*/
      }
      else
      {
        v14 = MissionClass::GetMissionControl((MissionClass *)this); /*0x41a8f8*/
        IDA_LOWORD(v15) = Math::RoundToInt(*((double *)v14 + 2) * 900.0); /*0x41a906*/
        return v15 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x41a921*/
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
int AircraftClass::Destruct()
{
  AbstractClass *p_vtable1; // esi
  AircraftTypeClass *Type; // eax
  int *team; // ecx
  int v5; // eax
  int Vtable3; // eax
  char *vtable1; // ebx
  unsigned int *vtable0; // ebp
  int v9; // esi
  AircraftClass *v10; // edx
  char *v11; // ecx
  signed int v12; // ecx
  int v13; // ecx
  unsigned int *v14; // eax
  AircraftClass *v16; // [esp+10h] [ebp-4h] BYREF

  p_vtable1 = (AbstractClass *)&((unsigned int *)this)[0]; /*0x414087*/
  this->FootClass = (void *)&AircraftClass_vftable; /*0x41408a*/
  ((unsigned int *)this)[0] = (void *)&AircraftClass_vftable; /*0x414090*/
  ((unsigned int *)this)[0] = (void *)&AircraftClass_vftable; /*0x414097*/
  ((unsigned int *)this)[0] = (void *)&AircraftClass_vftable; /*0x41409e*/
  *(unsigned int *)this->__pad_6C0 = (void *)&AircraftClass_vftable; /*0x4140a4*/
  if ( byte_A8E9A0 ) /*0x4140b5*/
  {
    Type = this->Type; /*0x4140b7*/
    if ( Type ) /*0x4140c1*/
    {
      if ( HouseClass::CanBuild(((unsigned int *)this)[0], (int)Type, 0, 0) == -1 ) /*0x4140d4*/
        ((unsigned int *)this)[0]->recheckTechTree = 1; /*0x4140dc*/
      TechnoClass::CleanupAll((TechnoClass *)this, 0); /*0x4140e6*/
      team = (int *)((unsigned int *)this)[0]; /*0x4140eb*/
      if ( team ) /*0x4140f3*/
      {
        TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x4140f9*/
        ((unsigned int *)this)[0] = 0; /*0x4140fe*/
      }
      HouseClass::DecrementUnitCount(((unsigned int *)this)[0], this); /*0x41410b*/
      TechnoClass::CleanupDirection((FootClass *)this); /*0x414112*/
      this->Type = 0; /*0x414117*/
    }
  }
  AbstractClass::AnnounceExpiredPointer(&this->FootClass, 1); /*0x414125*/
  v16 = this; /*0x41413a*/
  v5 = (*(int (**)(unsigned int *, AircraftClass **))(dword_A8E390 + 16))(&dword_A8E390, &v16); /*0x41413e*/
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
  vtable1 = (char *)((char *)&g_BuildingLoadQueue_Array); /*0x414179*/
  v16 = (AircraftClass *)Vtable3; /*0x41417f*/
  if ( ((char *)&g_BuildingLoadQueue_Array) ) /*0x414185*/
  {
    if ( !IDA_LOBYTE(((char *)&g_BuildingLoadQueue_Array)) ) /*0x414192*/
    {
      qsort( /*0x4141a2*/
        g_BuildingLoadQueue_Array.TechnoTypeClass,
        (size_t)((char *)&g_BuildingLoadQueue_Array),
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      vtable1 = (char *)((char *)&g_BuildingLoadQueue_Array); /*0x4141a7*/
      ((unsigned int *)&g_BuildingLoadQueue_Array)[0] = 0; /*0x4141b0*/
      IDA_LOBYTE(((char *)&g_BuildingLoadQueue_Array)) = 1; /*0x4141b6*/
    }
    vtable0 = g_BuildingLoadQueue_Array.TechnoTypeClass; /*0x4141bd*/
    v9 = (int)vtable1; /*0x4141c3*/
    while ( v9 > 0 ) /*0x4141c7*/
    {
      v10 = (AircraftClass *)vtable0[2 * (v9 / 2)]; /*0x4141d4*/
      v11 = (char *)&vtable0[2 * (v9 / 2)]; /*0x4141d8*/
      if ( (int)v16 >= (int)v10 ) /*0x4141e0*/
      {
        if ( v10 == v16 ) /*0x4141ea*/
        {
          if ( v11 ) /*0x414210*/
          {
            v12 = (v11 - (char *)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x414218*/
            if ( v12 != -1 ) /*0x41421e*/
            {
              v13 = v12 + 1; /*0x414220*/
              if ( v13 < (int)vtable1 ) /*0x414223*/
              {
                do /*0x414242*/
                {
                  v14 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v13++; /*0x41422b*/
                  *(v14 - 2) = *v14; /*0x414231*/
                  *(v14 - 1) = v14[1]; /*0x414237*/
                  vtable1 = (char *)((char *)&g_BuildingLoadQueue_Array); /*0x41423a*/
                }
                while ( v13 < (int)((char *)&g_BuildingLoadQueue_Array) ); /*0x414242*/
              }
              ((unsigned int *)&g_BuildingLoadQueue_Array)[0] = vtable1 - 1; /*0x41424f*/
              *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array)) = 0; /*0x414255*/
              *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array) + 1) = 0; /*0x414263*/
              ((unsigned int *)&g_BuildingLoadQueue_Array)[0] = 0; /*0x414267*/
            }
          }
          break; /*0x414267*/
        }
        vtable0 = v11 + 8; /*0x4141ec*/
        v9 += -1 - v9 / 2; /*0x4141f4*/
      }
      else
      {
        v9 /= 2; /*0x4141e2*/
      }
    }
  }
  ((unsigned int *)this)[0] = 0; /*0x41426d*/
// 0x4d3590
  return FootClass::Destruct((FootClass *)this); /*0x414208*/
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
  int v1; // eax

  v1 = this->Type; /*0x41b929*/
  if ( v1 != IDA_LODWORD(g_RulesClass_Instance->MissileROTVar) && v1 != g_RulesClass_Instance->HoverHeight ) /*0x41b93d*/
// 0x4de620
    return ObjectClass::IsHeightAboveThreshold_0(int a1) ; /*0x41b941*/
  if ( !a1->locomotor ) /*0x41b948*/
    WinAPI::Wrapper(-2147467261); /*0x41b957*/
  return (*(uint8_t (**)(unsigned int))(**((unsigned int **)&a1->q0A43) + 128))(a1->locomotor) != 0; /*0x41b946*/
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
