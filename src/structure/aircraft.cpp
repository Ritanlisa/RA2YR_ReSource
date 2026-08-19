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
// [IDA decompile]
int __thiscall AircraftClass::Mission_Attack(int *this)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  char v5; // al
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int *v12; // edi
  int v13; // edi
  int v14; // edi
  int *v15; // eax
  int v16; // edx
  int *v17; // edi
  int *v18; // eax
  double v19; // st7
  int *v20; // ebx
  int *v21; // eax
  int *v22; // eax
  int v23; // edi
  int v24; // eax
  int v25; // edi
  int v26; // ebp
  int v27; // eax
  int v28; // edi
  int v29; // eax
  int v30; // edi
  int v31; // eax
  _DWORD *v32; // eax
  _DWORD *v33; // eax
  int v34; // edx
  int v35; // eax
  bool v36; // zf
  bool v37; // sf
  int v38; // eax
  int *v39; // eax
  int *v40; // eax
  int v41; // edi
  int v42; // eax
  int v43; // eax
  int v44; // edi
  int v45; // eax
  _DWORD *v46; // eax
  _DWORD *v47; // eax
  int v48; // eax
  int v49; // edi
  int v50; // eax
  int v51; // edi
  int v52; // ecx
  _DWORD *v53; // eax
  _DWORD *v54; // eax
  int v55; // edx
  int v56; // eax
  int v57; // edi
  int v58; // eax
  int v59; // edi
  _DWORD *v60; // eax
  _DWORD *v61; // eax
  int v62; // edx
  int v63; // eax
  int v64; // edi
  int v65; // eax
  int v66; // edi
  _DWORD *v67; // eax
  _DWORD *v68; // eax
  int v69; // edx
  int v70; // eax
  int v71; // edi
  int v72; // eax
  int v73; // edi
  int v74; // ecx
  _DWORD *v75; // eax
  _DWORD *v76; // eax
  int v77; // edx
  char v78; // al
  int v79; // eax
  unsigned int *v80; // ecx
  unsigned int TransitionCount; // eax
  int *OpenNeighbor; // eax
  int v83; // edi
  void *v84; // eax
  int v85; // eax
  char *MissionControl; // eax
  int v87; // esi
  int v88; // [esp+28h] [ebp-E4h]
  int v89; // [esp+2Ch] [ebp-E0h]
  int v90; // [esp+2Ch] [ebp-E0h]
  int v91; // [esp+2Ch] [ebp-E0h]
  int v92; // [esp+2Ch] [ebp-E0h]
  int v93; // [esp+30h] [ebp-DCh]
  int v94; // [esp+30h] [ebp-DCh]
  int v95; // [esp+30h] [ebp-DCh]
  int v96; // [esp+30h] [ebp-DCh]
  int v97; // [esp+30h] [ebp-DCh]
  int v98; // [esp+34h] [ebp-D8h]
  char v99; // [esp+38h] [ebp-D4h]
  int v100; // [esp+44h] [ebp-C8h] BYREF
  _DWORD v101[2]; // [esp+48h] [ebp-C4h] BYREF
  _DWORD v102[5]; // [esp+50h] [ebp-BCh] BYREF
  _DWORD v103[3]; // [esp+64h] [ebp-A8h] BYREF
  int v104; // [esp+70h] [ebp-9Ch] BYREF
  int v105; // [esp+74h] [ebp-98h] BYREF
  int v106; // [esp+78h] [ebp-94h]
  int v107; // [esp+7Ch] [ebp-90h]
  _DWORD v108[5]; // [esp+80h] [ebp-8Ch] BYREF
  int v109; // [esp+94h] [ebp-78h] BYREF
  int v110; // [esp+98h] [ebp-74h] BYREF
  int v111; // [esp+9Ch] [ebp-70h] BYREF
  int v112; // [esp+A0h] [ebp-6Ch] BYREF
  int v113; // [esp+A4h] [ebp-68h] BYREF
  int v114; // [esp+A8h] [ebp-64h] BYREF
  _BYTE v115[4]; // [esp+ACh] [ebp-60h] BYREF
  _BYTE v116[20]; // [esp+B0h] [ebp-5Ch] BYREF
  _BYTE v117[4]; // [esp+C4h] [ebp-48h] BYREF
  _BYTE v118[24]; // [esp+C8h] [ebp-44h] BYREF
  _BYTE v119[20]; // [esp+E0h] [ebp-2Ch] BYREF
  _BYTE v120[24]; // [esp+F4h] [ebp-18h] BYREF

  switch ( *(this + 47) )
  {
    case 0:
      v2 = *(this + 173);
      *((_BYTE *)this + 1746) = 0;
      v3 = -(v2 != 0);
      LOBYTE(v3) = v3 & 0xF7;
      *(this + 47) = v3 + 10;
      return 1;
    case 1:
      v5 = *((_BYTE *)this + 1736);
      *((_BYTE *)this + 1746) = 0;
      if ( v5 )
      {
        v6 = *(this + 191);
        *((_BYTE *)this + 1736) = 0;
        *(this + 191) = v6 - 1;
      }
      v7 = *(this + 173);
      if ( v7 && *(this + 191) )
      {
        v8 = *this;
        v9 = ((int (__stdcall *)(int))FindSpiralMoveTarget)(v7);
        (*(void (__thiscall **)(int *, int, int))(v8 + 1152))(this, v9, 1);
        *(this + 47) = *(this + 361) != 0 ? 3 : 10;
      }
      else
      {
LABEL_107:
        *(this + 47) = 10;
      }
      goto LABEL_108;
    case 3:
      if ( *((_BYTE *)this + 1736) )
      {
        v10 = *(this + 191);
        *((_BYTE *)this + 1736) = 0;
        *(this + 191) = v10 - 1;
      }
      v11 = *(this + 173);
      *((_BYTE *)this + 1746) = 0;
      if ( !v11 || !*(this + 191) )
        goto LABEL_83;
      v12 = this + 432;
      if ( (*(int (__stdcall **)(int *))(*(this + 432) + 24))(this + 432) )
      {
        v13 = *(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(*this + 1016))(this, 0);
        if ( ObjectClass::ComputeDistance(this, *(this + 173)) < *(_DWORD *)(v13 + 180) )
        {
LABEL_14:
          *(this + 47) = 4;
          return 1;
        }
        (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, *(this + 173), 1);
      }
      else
      {
        if ( (*(int (__stdcall **)(int *))(*v12 + 28))(this + 432) )
          goto LABEL_14;
        if ( !*(this + 413) )
          WinAPI::Wrapper(-2147467261);
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 128))(*(this + 413)) )
          goto LABEL_14;
      }
      if ( *(this + 361) )
      {
        v14 = ObjectClass::ComputeDistance(this, *(this + 361));
        if ( v14 >= 512 )
        {
          v17 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)*(this + 361) + 72))(*(this + 361), v117);
          v18 = (int *)(*(int (__thiscall **)(int *, _BYTE *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 176))(
                         this,
                         v115,
                         0,
                         0,
                         0,
                         0);
          if ( *v18 == *v17 && v18[1] == v17[1] )
            LOWORD(v100) = 0;
          v19 = Math::CalcAngle((double)v18[1] - (double)v17[1], (double)*v17 - (double)*v18);
          LOWORD(v100) = Math::RoundToInt((v19 - 1.570796326794897) * -10430.06004058427);
          FacingClass::Update((char *)this + 928, &v100);
          return 1;
        }
        else
        {
          v15 = ObjectClass::CalcTargetFacing(this, &v113, *(this + 173));
          FacingClass::Update((char *)this + 928, v15);
          if ( v14 >= 16 )
          {
            return 1;
          }
          else
          {
            v16 = *this;
            *(this + 47) = 4;
            (*(void (__thiscall **)(int *, _DWORD, int))(v16 + 1152))(this, 0, 1);
            return 1;
          }
        }
      }
      else
      {
        *(this + 47) = 1;
        return 1;
      }
    case 4:
      if ( !*(this + 173) || !*(this + 191) )
        goto LABEL_83;
      v20 = this + 432;
      if ( !(*(int (__stdcall **)(int *))(*(this + 432) + 24))(this + 432) )
      {
        v21 = ObjectClass::CalcTargetFacing(this, &v109, *(this + 173));
        FacingClass::Update((char *)this + 904, v21);
        v22 = ObjectClass::CalcTargetFacing(this, &v112, *(this + 173));
        FacingClass::Update((char *)this + 928, v22);
      }
      v23 = *this;
      v24 = (*(int (__thiscall **)(int *, _DWORD, int))(*this + 740))(this, *(this + 173), 1);
      switch ( (*(int (__thiscall **)(int *, _DWORD, int))(v23 + 960))(this, *(this + 173), v24) )
      {
        case 0:
          v25 = *this;
          v93 = *(this + 173);
          *((_BYTE *)this + 1736) = 1;
          v26 = 0;
          v27 = (*(int (__thiscall **)(int *, int))(v25 + 740))(this, v93);
          if ( *(int *)(*(_DWORD *)(*(int (__thiscall **)(int *, int))(v25 + 1016))(this, v27) + 156) > 0 )
          {
            do
            {
              v28 = *this;
              v29 = (*(int (__thiscall **)(int *, _DWORD))(*this + 740))(this, *(this + 173));
              (*(void (__thiscall **)(int *, _DWORD, int))(v28 + 972))(this, *(this + 173), v29);
              v30 = *this;
              ++v26;
              v31 = (*(int (__thiscall **)(int *, _DWORD))(*this + 740))(this, *(this + 173));
            }
            while ( v26 < *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, int))(v30 + 1016))(this, v31) + 156) );
          }
          v103[0] = *(this + 39);
          v103[1] = *(this + 40);
          v103[2] = *(this + 41);
          v32 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *, _DWORD *))(*(_DWORD *)*(this + 173) + 72))(
                            *(this + 173),
                            v120,
                            v103);
          v33 = Coord::To_Cell(MEMORY[0x87F7E8], v32);
          Cell::ApplyDamage(v33, 1, 0, 0, v98);
          if ( (*(int (__cdecl **)(int *))(*v20 + 24))(this + 432) )
          {
            v34 = *this;
            *(this + 47) = 6;
            *((_BYTE *)this + 1746) = 1;
            return *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(v34 + 1016))(this, 0) + 176);
          }
          if ( !(*(int (__stdcall **)(int *))(*v20 + 28))(this + 432) )
            goto LABEL_54;
          v35 = *(this + 191);
          v36 = v35 == 0;
          v37 = v35 < 0;
          v38 = *this;
          *((_BYTE *)this + 1746) = 1;
          *(this + 47) = !v37 && !v36 ? 1 : 10;
          return *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(v38 + 1016))(this, 0) + 176);
        case 2:
          if ( !*(this + 191) )
          {
            *(this + 47) = 10;
            return 1;
          }
          if ( !(*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*this + 940))(this, *(this + 173))
            || (*(int (__stdcall **)(int *))(*v20 + 24))(this + 432) )
          {
            *(this + 47) = 1;
          }
          else if ( (*(int (__stdcall **)(int *))(*v20 + 28))(this + 432) )
          {
            *(this + 47) = 4;
          }
          else
          {
            *(this + 47) = *(_BYTE *)(MEMORY[0x87F7E8][7806] + 6113) != 0 ? 1 : 4;
          }
          if ( !(*(int (__stdcall **)(int *))(*v20 + 24))(this + 432) )
            return 1;
          return 45;
        case 3:
          return 1;
        case 9:
          (*(void (__thiscall **)(int *, _DWORD))(*this + 1116))(this, 0);
          return 1;
        default:
          if ( !*(this + 191) )
          {
            *(this + 47) = 10;
            return 1;
          }
          if ( (*(int (__stdcall **)(int *))(*v20 + 24))(this + 432) )
            return 1;
LABEL_54:
          *(this + 47) = 5;
          result = 1;
          break;
      }
      return result;
    case 5:
      if ( *(this + 173) )
      {
        v39 = ObjectClass::CalcTargetFacing(this, &v114, *(this + 173));
        FacingClass::Update((char *)this + 904, v39);
        v40 = ObjectClass::CalcTargetFacing(this, &v111, *(this + 173));
        FacingClass::Update((char *)this + 928, v40);
        v41 = *this;
        v42 = (*(int (__thiscall **)(int *, _DWORD, int))(*this + 740))(this, *(this + 173), 1);
        switch ( (*(unsigned int (__thiscall **)(int *, _DWORD, int))(v41 + 960))(this, *(this + 173), v42) )
        {
          case 0u:
            v44 = *this;
            v45 = (*(int (__thiscall **)(int *, _DWORD))(*this + 740))(this, *(this + 173));
            (*(void (__thiscall **)(int *, _DWORD, int))(v44 + 972))(this, *(this + 173), v45);
            v105 = *(this + 39);
            v106 = *(this + 40);
            v107 = *(this + 41);
            v46 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 173) + 72))(*(this + 173));
            v47 = Coord::To_Cell(MEMORY[0x87F7E8], v46);
            Cell::ApplyDamage(v47, (int)v119, (int)&v105, 1, 0);
            if ( !*(this + 191) )
              goto LABEL_107;
            *(this + 47) = *(_BYTE *)(MEMORY[0x87F7E8][7806] + 6113) != 0 ? 1 : 4;
            goto LABEL_108;
          case 2u:
            if ( !*(this + 191) )
              goto LABEL_107;
            if ( !(*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*this + 940))(this, *(this + 173))
              || (*(int (__stdcall **)(int *))(*(this + 432) + 24))(this + 432) )
            {
              *(this + 47) = 1;
            }
            else
            {
              v43 = -(*(_BYTE *)(MEMORY[0x87F7E8][7806] + 6113) != 0);
              LOBYTE(v43) = v43 & 0xFD;
              *(this + 47) = v43 + 4;
            }
            if ( !(*(int (__stdcall **)(int *))(*(this + 432) + 24))(this + 432) )
              goto LABEL_108;
            result = 45;
            break;
          case 3u:
            goto LABEL_108;
          case 9u:
            (*(void (__thiscall **)(int *, _DWORD))(*this + 1116))(this, 0);
            goto LABEL_108;
          default:
            if ( !*(this + 191) )
              goto LABEL_107;
            if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*this + 940))(this, *(this + 173)) )
              *(this + 47) = *(_BYTE *)(MEMORY[0x87F7E8][7806] + 6113) != 0 ? 1 : 4;
            else
              *(this + 47) = 1;
            goto LABEL_108;
        }
      }
      else
      {
        *(this + 47) = 10;
        return 1;
      }
      return result;
    case 6:
      v48 = *(this + 173);
      if ( v48 )
      {
        v49 = *this;
        v50 = (*(int (__thiscall **)(int *, int, int))(*this + 740))(this, v48, 1);
        switch ( (*(int (__thiscall **)(int *, _DWORD, int))(v49 + 960))(this, *(this + 173), v50) )
        {
          case 0:
          case 2:
          case 9:
            break;
          case 8:
            (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, *(this + 173), 1);
            break;
          default:
            goto LABEL_91;
        }
        v51 = *this;
        v94 = (*(int (__thiscall **)(int *, _DWORD))(*this + 740))(this, *(this + 173));
        v89 = *(this + 173);
        (*(void (__thiscall **)(int *))(v51 + 972))(this);
        v100 = *(this + 39);
        v52 = *(this + 173);
        v101[0] = *(this + 40);
        v101[1] = *(this + 41);
        v53 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, int *, int, _DWORD, _DWORD))(*(_DWORD *)v52 + 72))(
                          v52,
                          v116,
                          &v100,
                          1,
                          0,
                          0);
        v54 = Coord::To_Cell(MEMORY[0x87F7E8], v53);
        Cell::ApplyDamage(v54, v89, v94, v98, v99);
        (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, *(this + 173), 1);
        v55 = *this;
        *(this + 47) = 7;
        return *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(v55 + 1016))(this, 0) + 176);
      }
      else
      {
        *(this + 47) = 10;
        return 1;
      }
    case 7:
      v56 = *(this + 173);
      if ( v56 )
      {
        v57 = *this;
        v58 = (*(int (__thiscall **)(int *, int, int))(*this + 740))(this, v56, 1);
        switch ( (*(unsigned int (__thiscall **)(int *, _DWORD, int))(v57 + 960))(this, *(this + 173), v58) )
        {
          case 0u:
          case 2u:
          case 9u:
            break;
          case 8u:
            (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, *(this + 173), 1);
            break;
          default:
            goto LABEL_91;
        }
        v59 = *this;
        v95 = (*(int (__thiscall **)(int *, _DWORD))(*this + 740))(this, *(this + 173));
        v90 = *(this + 173);
        (*(void (__thiscall **)(int *))(v59 + 972))(this);
        v108[0] = *(this + 39);
        v108[1] = *(this + 40);
        v108[2] = *(this + 41);
        v60 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *, _DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)*(this + 173)
                                                                                              + 72))(
                          *(this + 173),
                          v118,
                          v108,
                          1,
                          0,
                          0);
        v61 = Coord::To_Cell(MEMORY[0x87F7E8], v60);
        Cell::ApplyDamage(v61, v90, v95, v98, v99);
        (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, *(this + 173), 1);
        v62 = *this;
        *(this + 47) = 8;
        return *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(v62 + 1016))(this, 0) + 176);
      }
      else
      {
        *(this + 47) = 10;
        return 1;
      }
    case 8:
      v63 = *(this + 173);
      if ( v63 )
      {
        v64 = *this;
        v65 = (*(int (__thiscall **)(int *, int, int))(*this + 740))(this, v63, 1);
        switch ( (*(unsigned int (__thiscall **)(int *, _DWORD, int))(v64 + 960))(this, *(this + 173), v65) )
        {
          case 0u:
          case 2u:
          case 9u:
            break;
          case 8u:
            (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, *(this + 173), 1);
            break;
          default:
            goto LABEL_91;
        }
        v66 = *this;
        v96 = (*(int (__thiscall **)(int *, _DWORD))(*this + 740))(this, *(this + 173));
        v91 = *(this + 173);
        (*(void (__thiscall **)(int *))(v66 + 972))(this);
        v102[0] = *(this + 39);
        v102[1] = *(this + 40);
        v102[2] = *(this + 41);
        v67 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *, _DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)*(this + 173)
                                                                                              + 72))(
                          *(this + 173),
                          v119,
                          v102,
                          1,
                          0,
                          0);
        v68 = Coord::To_Cell(MEMORY[0x87F7E8], v67);
        Cell::ApplyDamage(v68, v91, v96, v98, v99);
        (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, *(this + 173), 1);
        v69 = *this;
        *(this + 47) = 9;
        return *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(v69 + 1016))(this, 0) + 176);
      }
      else
      {
LABEL_83:
        *(this + 47) = 10;
        return 1;
      }
    case 9:
      v70 = *(this + 173);
      if ( v70 )
      {
        v71 = *this;
        v72 = (*(int (__thiscall **)(int *, int, int))(*this + 740))(this, v70, 1);
        switch ( (*(unsigned int (__thiscall **)(int *, _DWORD, int))(v71 + 960))(this, *(this + 173), v72) )
        {
          case 0u:
          case 2u:
          case 8u:
          case 9u:
            v73 = *this;
            v97 = *(this + 173);
            v92 = (*(int (__thiscall **)(int *))(*this + 740))(this);
            v88 = *(this + 173);
            (*(void (__thiscall **)(int *))(v73 + 972))(this);
            v104 = *(this + 39);
            v105 = *(this + 40);
            v74 = *(this + 173);
            v106 = *(this + 41);
            v75 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, int *, int, _DWORD, _DWORD))(*(_DWORD *)v74 + 72))(
                              v74,
                              v120,
                              &v104,
                              1,
                              0,
                              0);
            v76 = Coord::To_Cell(MEMORY[0x87F7E8], v75);
            Cell::ApplyDamage(v76, v88, v92, v97, v98);
            v77 = *this;
            *(this + 47) = 3;
            result = (*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(v77 + 1016))(this, 0) + 180) + 1024)
                   / *(_DWORD *)(*(this + 433) + 1656);
            break;
          default:
LABEL_91:
            if ( !*(this + 191) )
            {
              *(this + 47) = 10;
              *((_BYTE *)this + 1746) = 0;
            }
            return 1;
        }
      }
      else
      {
        *(this + 47) = 10;
        return 1;
      }
      return result;
    case 10:
      v78 = *((_BYTE *)this + 1736);
      *((_BYTE *)this + 1746) = 0;
      if ( v78 )
      {
        v79 = *(this + 191);
        *((_BYTE *)this + 1736) = 0;
        if ( v79 > 0 )
          *(this + 191) = v79 - 1;
      }
      if ( *(this + 191) )
      {
        if ( *(this + 173) )
        {
          *(this + 47) = 1;
          return 1;
        }
      }
      else if ( *((_BYTE *)this + 980) || (unsigned __int8)House::IsCurrentPlayer((#375 *)*(this + 135)) )
      {
        (*(void (__thiscall **)(int *, _DWORD))(*this + 968))(this, 0);
      }
      v80 = (unsigned int *)*(this + 135);
      *((_BYTE *)this + 1746) = 0;
      TransitionCount = HouseClass::GetTransitionCount(v80);
      OpenNeighbor = CellClass::FindOpenNeighbor(
                       MEMORY[0x87F7E8],
                       &v110,
                       TransitionCount,
                       (int)&MEMORY[0x87F7E8][10656],
                       (int)&MEMORY[0x87F7E8][10656],
                       4,
                       1,
                       0);
      v83 = *this;
      v101[0] = *OpenNeighbor;
      v84 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)v101);
      (*(void (__thiscall **)(int *, void *, int))(v83 + 1152))(this, v84, 1);
      v85 = *(this + 165);
      *((_BYTE *)this + 1749) = 0;
      if ( v85 && *(this + 191) > 0 )
      {
        (*(void (__thiscall **)(int *, int, _DWORD))(*this + 488))(this, 4, 0);
        *((_BYTE *)this + 1749) = 1;
        return 1;
      }
      else
      {
        (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1156))(this, 0, 1);
        *((_BYTE *)this + 1749) = 1;
        return 1;
      }
    default:
LABEL_108:
      MissionControl = MissionClass::GetMissionControl(this);
      v87 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
      return v87 + Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 2);
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
// [IDA decompile]
int __usercall AircraftClass::_vt139@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>, int a5@<esi>)
{
  int result; // eax
  int v7; // eax
  char *MissionControl; // eax
  int v9; // esi
  int v10; // edi
  void *NearbyCell; // eax
  int v12; // ecx
  _DWORD *v13; // eax
  int v14; // ecx
  int *v15; // eax
  int v16; // edx
  int v17; // edi
  int *v18; // eax
  int Element; // eax
  int *v20; // eax
  int v21; // ecx
  _DWORD *v22; // eax
  int v23; // edi
  int v24; // ebx
  _WORD *v25; // eax
  int v26; // ecx
  _DWORD *v27; // eax
  int v28; // ecx
  _DWORD *v29; // eax
  int v30; // edi
  int v31; // ebx
  _WORD *v32; // eax
  int v33; // ecx
  _DWORD *v34; // eax
  int v35; // [esp+0h] [ebp-60h]
  int v36; // [esp+4h] [ebp-5Ch]
  int v39; // [esp+1Ch] [ebp-44h]
  int v40; // [esp+1Ch] [ebp-44h]
  int v41; // [esp+20h] [ebp-40h] BYREF
  int v42; // [esp+24h] [ebp-3Ch] BYREF
  _BYTE v43[4]; // [esp+28h] [ebp-38h] BYREF
  int v44; // [esp+2Ch] [ebp-34h] BYREF
  int v45[2]; // [esp+30h] [ebp-30h] BYREF
  int v46; // [esp+38h] [ebp-28h]
  _BYTE v47[12]; // [esp+3Ch] [ebp-24h] BYREF
  _BYTE v48[12]; // [esp+48h] [ebp-18h] BYREF
  _DWORD v49[3]; // [esp+54h] [ebp-Ch] BYREF

  if ( *(_BYTE *)(*(_DWORD *)(a1 + 1732) + 3580) )
    return Carryall::MissionStateMachine(a1);
  switch ( *(_DWORD *)(a1 + 188) )
  {
    case 0:
      v7 = *(_DWORD *)(a1 + 1444);
      if ( v7 )
      {
        v10 = *(_DWORD *)a1;
        NearbyCell = InfantryClass::FindNearbyCell((_DWORD *)a1, v7);
        (*(void (__thiscall **)(int, void *, int))(v10 + 1152))(a1, NearbyCell, 1);
        *(_DWORD *)(a1 + 188) = 1;
      }
      else
      {
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1156))(a1, 0, 1);
      }
      goto LABEL_6;
    case 1:
      v12 = *(_DWORD *)(a1 + 1444);
      if ( !v12 )
        goto LABEL_29;
      v13 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, int, int, int, int, int))(*(_DWORD *)v12 + 76))(
                        v12,
                        v47,
                        a1,
                        a4,
                        a5,
                        a3,
                        a2);
      if ( !*(_DWORD *)(a1 + 1652) )
        WinAPI::Wrapper(-2147467261);
      (*(void (__cdecl **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 1652) + 68))(*(_DWORD *)(a1 + 1652), *v13);
      *(_DWORD *)(a1 + 188) = 2;
      return 1;
    case 2:
      if ( *(_DWORD *)(a1 + 1312) != -1 )
      {
        v14 = *(_DWORD *)(a1 + 1444);
        if ( !v14 )
          goto LABEL_15;
        v15 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v14 + 72))(v14, v48);
        v16 = *v15;
        v17 = v15[1];
        v46 = v15[2];
        a2 = *(_DWORD *)(a1 + 164);
        v36 = *(_DWORD *)(a1 + 160) - v17;
        v35 = *(_DWORD *)(a1 + 156) - v16;
        v46 = a2;
        v18 = Coord::Subtract(v49, v35, v36, 0);
        v45[0] = *v18;
        v45[1] = v18[1];
        v46 = v18[2];
        if ( (int)Coord::Length(v45) < 256 )
        {
LABEL_15:
          Element = Array::GetElement(
                      *((_DWORD **)MEMORY[0xA83D4C] + *(_DWORD *)(a1 + 1312) + 132),
                      *(char *)(a1 + 1670));
          v20 = (int *)VectorClass::GetAtChecked(*((int **)MEMORY[0xA83D4C] + *(_DWORD *)(a1 + 1312) + 132), Element);
          BuildingClass::ValidateFoundation_0(a1, a2, a3, v20, a4, a5);
        }
      }
      if ( !*(_DWORD *)(a1 + 1652) )
        WinAPI::Wrapper(-2147467261);
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 16))(*(_DWORD *)(a1 + 1652)) )
        goto LABEL_40;
      v21 = *(_DWORD *)(a1 + 1444);
      if ( v21 )
      {
        v22 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v21 + 76))(v21, v49, a1);
        v23 = *v22 / 256;
        v24 = v22[1] / 256;
        v25 = (_WORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 440))(a1, v43);
        if ( (_WORD)v23 == *v25 && (_WORD)v24 == v25[1] )
          goto LABEL_40;
      }
      v26 = *(_DWORD *)(a1 + 1444);
      if ( v26 )
      {
        v27 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v26 + 76))(v26, v49, a1);
        LOWORD(v39) = *v27 / 256;
        HIWORD(v39) = v27[1] / 256;
        v41 = v39;
        if ( !Cell::IsOccupied((void **)a1, (__int16 *)&v41, 1) )
          goto LABEL_24;
      }
      *(_DWORD *)(a1 + 188) = 4;
      return 1;
    case 3:
      if ( !*(_DWORD *)(a1 + 1652) )
        WinAPI::Wrapper(-2147467261);
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 16))(*(_DWORD *)(a1 + 1652)) )
LABEL_29:
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1156))(a1, 0, 1);
      return 1;
    case 4:
      if ( !*(_DWORD *)(a1 + 1652) )
        WinAPI::Wrapper(-2147467261);
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 16))(*(_DWORD *)(a1 + 1652))
        || (v28 = *(_DWORD *)(a1 + 1444)) != 0
        && (v29 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v28 + 76))(v28, v49, a1),
            v30 = *v29 / 256,
            v31 = v29[1] / 256,
            v32 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 440))(a1, &v44),
            (_WORD)v30 == *v32)
        && (_WORD)v31 == v32[1] )
      {
LABEL_40:
        *(_DWORD *)(a1 + 188) = 3;
      }
      else
      {
        v33 = *(_DWORD *)(a1 + 1444);
        if ( v33 )
        {
          v34 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v33 + 76))(v33, v49, a1);
          LOWORD(v40) = *v34 / 256;
          HIWORD(v40) = v34[1] / 256;
          v42 = v40;
          if ( !Cell::IsOccupied((void **)a1, (__int16 *)&v42, 1) )
          {
LABEL_24:
            *(_DWORD *)(a1 + 188) = 0;
            return 1;
          }
        }
      }
      result = 1;
      break;
    default:
LABEL_6:
      MissionControl = MissionClass::GetMissionControl((_DWORD *)a1);
      v9 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
      return v9 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2);
  }
  return result;
}

/* ASM:
mov     eax, [ecx+6C4h]
mov     dl, [eax+0DFCh]
test    dl, dl
jz      short loc_4166D5
jmp     Carryall__MissionStateMachine
; ---------------------------------------------------------------------------

loc_4166D5:                             ; CODE XREF: AircraftClass__Mission_Enter+E↑j
jmp     loc_4166E0
; ---------------------------------------------------------------------------
align 10h

loc_4166E0:                             ; CODE XREF: AircraftClass__Mission_Enter:loc_4166D5↑j
sub     esp, 44h
push    ebx
push    ebp
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi+0BCh]
cmp     eax, 4          ; switch 5 cases
ja      short def_4166F4 ; jumptable 004166F4 default case
jmp     ds:jpt_4166F4[eax*4] ; switch jump
; ---------------------------------------------------------------------------

loc_4166FB:                             ; CODE XREF: AircraftClass__Mission_Enter+34↑j
; DATA XREF: .text:jpt_4166F4↓o
mov     eax, [esi+5A4h] ; jumptable 004166F4 case 0
test    eax, eax
jnz     short loc_416748
mov     eax, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [eax+484h]

def_4166F4:                             ; CODE XREF: AircraftClass__Mission_Enter+32↑j
; AircraftClass__Mission_Enter+A7↓j
mov     ecx, esi        ; jumptable 004166F4 default case
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
add     esp, 44h
retn
; ---------------------------------------------------------------------------

loc_416748:                             ; CODE XREF: AircraftClass__Mission_Enter+43↑j
mov     edi, [esi]
push    1
push    eax
mov     ecx, esi
call    InfantryClass__FindNearbyCell
push    eax
mov     ecx, esi
call    dword ptr [edi+480h]
mov     dword ptr [esi+0BCh], 1
jmp     short def_4166F4 ; jumptable 004166F4 default case
; ---------------------------------------------------------------------------

loc_416769:                             ; CODE XREF: AircraftClass__Mission_Enter+34↑j
; DATA XREF: .text:jpt_4166F4↓o
mov     ecx, [esi+5A4h] ; jumptable 004166F4 case 1
test    ecx, ecx
jz      loc_4169B2
mov     eax, [ecx]
lea     edx, [esp+54h+var_24]
push    esi
push    edx
call    dword ptr [eax+4Ch]
mov     edi, [eax]
mov     ebx, [eax+4]
mov     ebp, [eax+8]
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_41679E
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_41679E:                             ; CODE XREF: AircraftClass__Mission_Enter+D2↑j
mov     eax, [esi+674h]
sub     esp, 0Ch
mov     edx, esp
mov     ecx, [eax]
push    eax
mov     [edx], edi
mov     [edx+4], ebx
mov     [edx+8], ebp
call    dword ptr [ecx+44h]
mov     dword ptr [esi+0BCh], 2
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 44h
retn
; ---------------------------------------------------------------------------

loc_4167CE:                             ; CODE XREF: AircraftClass__Mission_Enter+34↑j
; DATA XREF: .text:jpt_4166F4↓o
cmp     dword ptr [esi+520h], 0FFFFFFFFh ; jumptable 004166F4 case 2
jz      loc_41688A
mov     ecx, [esi+5A4h]
test    ecx, ecx
jz      short loc_416849
mov     eax, [ecx]
lea     edx, [esp+54h+var_18]
push    edx
call    dword ptr [eax+48h]
mov     edx, [eax]
lea     ecx, [esi+9Ch]
mov     ebx, ecx
push    0
mov     edi, [eax+4]
mov     eax, [eax+8]
mov     [esp+58h+var_28], eax
mov     eax, [ebx]
sub     eax, edx
mov     ecx, [ebx+4]
sub     ecx, edi
mov     ebx, [ebx+8]
push    ecx
push    eax
lea     ecx, [esp+60h+var_C]
mov     [esp+60h+var_28], ebx
call    Coord__Subtract
mov     edx, [eax]
mov     [esp+54h+var_30], edx
mov     ecx, [eax+4]
mov     [esp+54h+var_2C], ecx
lea     ecx, [esp+54h+var_30]
mov     edx, [eax+8]
mov     [esp+54h+var_28], edx
call    Coord__Length
cmp     eax, 100h
setl    al
test    al, al
jz      short loc_41688A

loc_416849:                             ; CODE XREF: AircraftClass__Mission_Enter+123↑j
movsx   eax, byte ptr [esi+686h]
mov     ecx, [esi+520h]
mov     edx, ds:0A83D4Ch
push    eax
mov     ecx, [edx+ecx*4+210h]
call    Array__GetElement
mov     ecx, ds:0A83D4Ch
push    eax
mov     eax, [esi+520h]
mov     ecx, [ecx+eax*4+210h]
call    VectorClass__GetAtChecked
push    eax
mov     ecx, esi
call    BuildingClass__ValidateFoundation_0

loc_41688A:                             ; CODE XREF: AircraftClass__Mission_Enter+115↑j
; AircraftClass__Mission_Enter+187↑j
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_41689E
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_41689E:                             ; CODE XREF: AircraftClass__Mission_Enter+1D2↑j
mov     eax, [esi+674h]
push    eax
mov     edx, [eax]
call    dword ptr [edx+10h]
test    al, al
jz      loc_416AB6
mov     ecx, [esi+5A4h]
test    ecx, ecx
jz      short loc_416908
mov     eax, [ecx]
lea     edx, [esp+54h+var_C]
push    esi
push    edx
call    dword ptr [eax+4Ch]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
mov     edi, eax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
lea     ecx, [esp+54h+var_38]
add     eax, edx
push    ecx
mov     ebx, eax
mov     eax, [esi]
mov     ecx, esi
sar     edi, 8
sar     ebx, 8
call    dword ptr [eax+1B8h]
cmp     di, [eax]
jnz     short loc_416908
cmp     bx, [eax+2]
jz      loc_416AB6

loc_416908:                             ; CODE XREF: AircraftClass__Mission_Enter+1FA↑j
; AircraftClass__Mission_Enter+23C↑j
mov     ecx, [esi+5A4h]
test    ecx, ecx
jz      short loc_416977
mov     edx, [ecx]
lea     eax, [esp+54h+var_C]
push    esi
push    eax
call    dword ptr [edx+4Ch]
mov     ecx, eax
push    1
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+58h+var_44], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+58h+var_40]
sar     eax, 8
mov     word ptr [esp+58h+var_44+2], ax
mov     ecx, [esp+58h+var_44]
mov     [esp+58h+var_40], ecx
push    edx
mov     ecx, esi
call    Cell__IsOccupied
test    al, al
jnz     short loc_416977
mov     dword ptr [esi+0BCh], 0
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 44h
retn
; ---------------------------------------------------------------------------

loc_416977:                             ; CODE XREF: AircraftClass__Mission_Enter+250↑j
; AircraftClass__Mission_Enter+29E↑j
mov     dword ptr [esi+0BCh], 4
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 44h
retn
; ---------------------------------------------------------------------------

loc_41698E:                             ; CODE XREF: AircraftClass__Mission_Enter+34↑j
; DATA XREF: .text:jpt_4166F4↓o
mov     eax, [esi+674h] ; jumptable 004166F4 case 3
test    eax, eax
jnz     short loc_4169A2
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_4169A2:                             ; CODE XREF: AircraftClass__Mission_Enter+2D6↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jnz     short loc_4169C0

loc_4169B2:                             ; CODE XREF: AircraftClass__Mission_Enter+B1↑j
mov     edx, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [edx+484h]

loc_4169C0:                             ; CODE XREF: AircraftClass__Mission_Enter+2F0↑j
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 44h
retn
; ---------------------------------------------------------------------------

loc_4169CD:                             ; CODE XREF: AircraftClass__Mission_Enter+34↑j
; DATA XREF: .text:jpt_4166F4↓o
mov     eax, [esi+674h] ; jumptable 004166F4 case 4
test    eax, eax
jnz     short loc_4169E1
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_4169E1:                             ; CODE XREF: AircraftClass__Mission_Enter+315↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jz      loc_416AB6
mov     ecx, [esi+5A4h]
test    ecx, ecx
jz      short loc_416A47
mov     edx, [ecx]
lea     eax, [esp+54h+var_C]
push    esi
push    eax
call    dword ptr [edx+4Ch]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
mov     edi, eax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
mov     ecx, esi
add     eax, edx
mov     edx, [esi]
mov     ebx, eax
lea     eax, [esp+54h+var_34]
push    eax
sar     edi, 8
sar     ebx, 8
call    dword ptr [edx+1B8h]
cmp     di, [eax]
jnz     short loc_416A47
cmp     bx, [eax+2]
jz      short loc_416AB6

loc_416A47:                             ; CODE XREF: AircraftClass__Mission_Enter+33D↑j
; AircraftClass__Mission_Enter+37F↑j
mov     ecx, [esi+5A4h]
test    ecx, ecx
jz      short loc_416AC0
mov     edx, [ecx]
lea     eax, [esp+54h+var_C]
push    esi
push    eax
call    dword ptr [edx+4Ch]
mov     ecx, eax
push    1
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+58h+var_44], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+58h+var_3C]
sar     eax, 8
mov     word ptr [esp+58h+var_44+2], ax
mov     ecx, [esp+58h+var_44]
mov     [esp+58h+var_3C], ecx
push    edx
mov     ecx, esi
call    Cell__IsOccupied
test    al, al
jnz     short loc_416AC0
mov     dword ptr [esi+0BCh], 0
mov     eax, 1
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 44h
retn
; ---------------------------------------------------------------------------

loc_416AB6:                             ; CODE XREF: AircraftClass__Mission_Enter+1EC↑j
; AircraftClass__Mission_Enter+242↑j ...
mov     dword ptr [esi+0BCh], 3

loc_416AC0:                             ; CODE XREF: AircraftClass__Mission_Enter+38F↑j
; AircraftClass__Mission_Enter+3DD↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 44h
retn
*/
}

// IDA: 0x419C80 (Mission_Transport, 1215B)
// 0x419c80
int AircraftClass::Mission_Transport()
{
// [IDA decompile]
int __usercall AircraftClass::Mission_Transport@<eax>(int a1@<ecx>, int a2@<ebp>)
{
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // edx
  int result; // eax
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  int v11; // edi
  int *v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // edx
  int v19; // edi
  int v20; // edx
  int v21; // edx
  int v22; // eax
  int Member; // eax
  int v24; // ebx
  _DWORD *v25; // edi
  int v26; // edi
  void *ClosestPlacementCell; // eax
  _DWORD v28[3]; // [esp+Ch] [ebp-30h] BYREF
  _BYTE v29[12]; // [esp+18h] [ebp-24h] BYREF
  _BYTE v30[20]; // [esp+24h] [ebp-18h] BYREF
  int v31; // [esp+38h] [ebp-4h]

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1)
    || !*(_BYTE *)(*(_DWORD *)(a1 + 1732) + 3597)
    || !*(_DWORD *)(a1 + 1444)
    || (v3 = *(_DWORD **)(a1 + 1444),
        v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1),
        v3 == Cell::IsBridge(v4)) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1) > 0 )
    {
      v8 = *(_DWORD *)(a1 + 1444);
      if ( *(_DWORD *)(a1 + 1740) != v8 && v8 && (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(v8) == 6 )
      {
        v9 = *(_DWORD *)(a1 + 1444);
        if ( v9 )
          v10 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v9 + 44))(*(_DWORD *)(a1 + 1444)) == 6 ? v9 : 0;
        else
          v10 = 0;
        *(_DWORD *)(a1 + 1740) = v10;
      }
    }
    if ( *(_DWORD *)(a1 + 1444)
      || (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 120))(a1) == 2
      || (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 14) == 1
      || TechnoClass::PlaceAtCell((int *)a1) )
    {
      switch ( *(_DWORD *)(a1 + 188) )
      {
        case 0:
          *(_DWORD *)(a1 + 188) = 6;
          goto LABEL_24;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
LABEL_24:
          *(_BYTE *)(a1 + 1748) = 1;
          return 1;
        case 6:
          if ( *(_BYTE *)(*(_DWORD *)(a1 + 1732) + 3597) && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1) )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 14);
          if ( Team::AllMembersValid((int *)a1) )
          {
            if ( !*(_DWORD *)(a1 + 1652) )
              WinAPI::Wrapper(-2147467261);
            if ( (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 144))(*(_DWORD *)(a1 + 1652)) == 1
              || *(_BYTE *)(*(_DWORD *)(a1 + 1732) + 3597) && !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1) )
            {
              *(_DWORD *)(a1 + 188) = 7;
              *(_BYTE *)(a1 + 1748) = 0;
            }
            result = 3;
          }
          else
          {
            if ( !TechnoClass::PlaceAtCell((int *)a1) )
            {
              if ( !*(_DWORD *)(a1 + 1652) )
                WinAPI::Wrapper(-2147467261);
              if ( (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 144))(*(_DWORD *)(a1 + 1652)) == 1 )
              {
                *(_DWORD *)(a1 + 188) = 7;
                *(_BYTE *)(a1 + 1748) = 1;
              }
              if ( *(_DWORD *)(a1 + 180) == -1 )
              {
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1152))(a1, 0, 1);
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1156))(a1, 0, 1);
                *(_BYTE *)(a1 + 1748) = 1;
                return 1;
              }
              *(_BYTE *)(a1 + 1748) = 1;
            }
            *(_BYTE *)(a1 + 1748) = 1;
            result = 1;
          }
          break;
        case 7:
          if ( !*(_DWORD *)(a1 + 1652) )
            WinAPI::Wrapper(-2147467261);
          if ( (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 144))(*(_DWORD *)(a1 + 1652)) == 1 )
          {
            v11 = *(_DWORD *)(a1 + 1444);
            if ( v11 )
            {
              if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v11 + 44))(*(_DWORD *)(a1 + 1444)) == 6 )
                v12 = (int *)(*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v11 + 168))(v11, v29, a1);
              else
                v12 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(a1 + 1444) + 72))(
                               *(_DWORD *)(a1 + 1444),
                               v30);
              v13 = *v12;
              v14 = v12[1];
              v31 = v12[2];
              v15 = *(_DWORD *)(a1 + 156);
              v16 = v13 - v15;
              v17 = *(_DWORD *)(a1 + 160);
              v18 = v14 - v17;
              v28[2] = *(_DWORD *)(a1 + 164);
              if ( v16 <= 0 )
              {
                if ( v16 < -5 )
                  v16 = -5;
              }
              else if ( v16 > 5 )
              {
                v16 = 5;
              }
              if ( v18 <= 0 )
              {
                if ( v18 < -5 )
                  v18 = -5;
              }
              else if ( v18 > 5 )
              {
                v18 = 5;
              }
              v19 = v18 + v17;
              v20 = *(_DWORD *)a1;
              v28[0] = v16 + v15;
              v28[1] = v19;
              (*(void (__thiscall **)(int, _DWORD *))(v20 + 436))(a1, v28);
            }
            *(_BYTE *)(a1 + 1748) = 1;
            return 1;
          }
          else
          {
            v21 = *(_DWORD *)a1;
            *(_BYTE *)(a1 + 1748) = 1;
            v22 = (*(int (__thiscall **)(int, int))(v21 + 628))(a1, 21) - 1;
            if ( v22 )
            {
              if ( v22 == 4 )
              {
                (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 212))(a1);
                Member = Team::GetMember((_DWORD *)a1, 0);
                CellClass::AddObject((_DWORD *)(Member + 276), (_DWORD *)a1);
              }
              else
              {
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1156))(a1, 0, 1);
              }
              return 1;
            }
            else if ( *(_BYTE *)(*(_DWORD *)(a1 + 1732) + 3580) && *(_DWORD *)(a1 + 280) )
            {
              v24 = Team::GetMember((_DWORD *)a1, 0);
              v25 = (_DWORD *)LinkedList::Pop((_DWORD *)(a1 + 276));
              (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 628))(a1, 3, a2);
              if ( (*(int (__thiscall **)(_DWORD *, int, int))(*v25 + 632))(v25, 2, v24) == 1 )
              {
                CellClass::AddObject((_DWORD *)(a1 + 276), v25);
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 292))(a1, 0);
                FootClass::MissionMoveCarryallLand((int *)a1);
                (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 292))(a1, 1);
              }
              else
              {
                v26 = *(_DWORD *)a1;
                ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((int *)a1);
                (*(void (__thiscall **)(int, void *))(v26 + 1152))(a1, ClosestPlacementCell);
              }
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 488))(a1, 2, 0);
              return 1;
            }
            else
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 488))(a1, 5, 0);
              return 1;
            }
          }
        default:
          return 1;
      }
    }
    else
    {
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1156))(a1, 0, 1);
      return 1;
    }
  }
  else
  {
    if ( v3 )
      v5 = (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3) == 6 ? v3 : 0;
    else
      v5 = 0;
    v6 = *(_DWORD *)a1;
    *(_DWORD *)(a1 + 1740) = v5;
    (*(void (__thiscall **)(int, int))(v6 + 628))(a1, 3);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 488))(a1, 2, 1);
    return 1;
  }
  return result;
}

/* ASM:
sub     esp, 30h
push    ebx
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi]
call    dword ptr [eax+1C8h]
test    eax, eax
jnz     short loc_419D0B
mov     ecx, [esi+6C4h]
mov     al, [ecx+0E0Dh]
test    al, al
jz      short loc_419D0B
mov     eax, [esi+5A4h]
test    eax, eax
jz      short loc_419D0B
mov     edx, [esi]
mov     ecx, esi
mov     edi, eax
call    dword ptr [edx+1BCh]
mov     ecx, eax
call    Cell__IsBridge
cmp     edi, eax
jz      short loc_419D0B
test    edi, edi
jnz     short loc_419CCD
xor     eax, eax
jmp     short loc_419CDF
; ---------------------------------------------------------------------------

loc_419CCD:                             ; CODE XREF: AircraftClass__Mission_Transport+47↑j
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
sub     eax, 6
neg     eax
sbb     eax, eax
not     eax
and     eax, edi

loc_419CDF:                             ; CODE XREF: AircraftClass__Mission_Transport+4B↑j
mov     edx, [esi]
push    3
mov     ecx, esi
mov     [esi+6CCh], eax
call    dword ptr [edx+274h]
mov     eax, [esi]
push    1
push    2
mov     ecx, esi
call    dword ptr [eax+1E8h]
pop     edi
pop     esi
mov     eax, 1
pop     ebx
add     esp, 30h
retn
; ---------------------------------------------------------------------------

loc_419D0B:                             ; CODE XREF: AircraftClass__Mission_Transport+12↑j
; AircraftClass__Mission_Transport+22↑j ...
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1C8h]
test    eax, eax
jle     short loc_419D5D
mov     ecx, [esi+5A4h]
mov     eax, [esi+6CCh]
cmp     eax, ecx
jz      short loc_419D5D
test    ecx, ecx
jz      short loc_419D5D
mov     eax, [ecx]
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     short loc_419D5D
mov     edi, [esi+5A4h]
test    edi, edi
jnz     short loc_419D45
xor     eax, eax
jmp     short loc_419D57
; ---------------------------------------------------------------------------

loc_419D45:                             ; CODE XREF: AircraftClass__Mission_Transport+BF↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
sub     eax, 6
neg     eax
sbb     eax, eax
not     eax
and     eax, edi

loc_419D57:                             ; CODE XREF: AircraftClass__Mission_Transport+C3↑j
mov     [esi+6CCh], eax

loc_419D5D:                             ; CODE XREF: AircraftClass__Mission_Transport+97↑j
; AircraftClass__Mission_Transport+A7↑j ...
mov     eax, [esi+5A4h]
test    eax, eax
jnz     short loc_419DA9
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+78h]
cmp     eax, 2
jz      short loc_419DA9
mov     edx, [esi]
push    0Eh
mov     ecx, esi
call    dword ptr [edx+274h]
cmp     eax, 1
jz      short loc_419DA9
mov     ecx, esi
call    TechnoClass__PlaceAtCell
test    al, al
jnz     short loc_419DA9
mov     eax, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [eax+484h]
pop     edi
pop     esi
mov     eax, 1
pop     ebx
add     esp, 30h
retn
; ---------------------------------------------------------------------------

loc_419DA9:                             ; CODE XREF: AircraftClass__Mission_Transport+E5↑j
; AircraftClass__Mission_Transport+F1↑j ...
mov     eax, [esi+0BCh]
mov     edi, 7
cmp     eax, edi        ; switch 8 cases
ja      def_419DBC      ; jumptable 00419DBC default case
jmp     ds:jpt_419DBC[eax*4] ; switch jump
; ---------------------------------------------------------------------------

loc_419DC3:                             ; CODE XREF: AircraftClass__Mission_Transport+13C↑j
; DATA XREF: .text:jpt_419DBC↓o
mov     dword ptr [esi+0BCh], 6 ; jumptable 00419DBC case 0

loc_419DCD:                             ; CODE XREF: AircraftClass__Mission_Transport+13C↑j
; DATA XREF: .text:jpt_419DBC↓o
mov     byte ptr [esi+6D4h], 1 ; jumptable 00419DBC cases 1-5
pop     edi
pop     esi
mov     eax, 1
pop     ebx
add     esp, 30h
retn
; ---------------------------------------------------------------------------

loc_419DE0:                             ; CODE XREF: AircraftClass__Mission_Transport+13C↑j
; DATA XREF: .text:jpt_419DBC↓o
mov     ecx, [esi+6C4h] ; jumptable 00419DBC case 6
mov     al, [ecx+0E0Dh]
test    al, al
jz      short loc_419E0A
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1C8h]
test    eax, eax
jz      short loc_419E0A
mov     eax, [esi]
push    0Eh
mov     ecx, esi
call    dword ptr [eax+274h]

loc_419E0A:                             ; CODE XREF: AircraftClass__Mission_Transport+16E↑j
; AircraftClass__Mission_Transport+17C↑j
mov     ecx, esi
call    Team__AllMembersValid
test    al, al
jnz     loc_419EAA
mov     ecx, esi
call    TechnoClass__PlaceAtCell
test    al, al
jnz     short loc_419E97
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_419E38
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_419E38:                             ; CODE XREF: AircraftClass__Mission_Transport+1AC↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+90h]
cmp     eax, 1
jnz     short loc_419E58
mov     [esi+0BCh], edi
mov     [esi+6D4h], al

loc_419E58:                             ; CODE XREF: AircraftClass__Mission_Transport+1CA↑j
cmp     dword ptr [esi+0B4h], 0FFFFFFFFh
jnz     short loc_419E90
mov     edx, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [edx+480h]
mov     eax, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [eax+484h]
mov     byte ptr [esi+6D4h], 1
pop     edi
pop     esi
mov     eax, 1
pop     ebx
add     esp, 30h
retn
; ---------------------------------------------------------------------------

loc_419E90:                             ; CODE XREF: AircraftClass__Mission_Transport+1DF↑j
mov     byte ptr [esi+6D4h], 1

loc_419E97:                             ; CODE XREF: AircraftClass__Mission_Transport+1A2↑j
mov     byte ptr [esi+6D4h], 1
pop     edi
pop     esi
mov     eax, 1
pop     ebx
add     esp, 30h
retn
; ---------------------------------------------------------------------------

loc_419EAA:                             ; CODE XREF: AircraftClass__Mission_Transport+193↑j
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_419EBE
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_419EBE:                             ; CODE XREF: AircraftClass__Mission_Transport+232↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+90h]
cmp     eax, 1
jz      short loc_419EF0
mov     edx, [esi+6C4h]
mov     al, [edx+0E0Dh]
test    al, al
jz      short loc_419EFD
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1C8h]
test    eax, eax
jnz     short loc_419EFD

loc_419EF0:                             ; CODE XREF: AircraftClass__Mission_Transport+250↑j
mov     [esi+0BCh], edi
mov     byte ptr [esi+6D4h], 0

loc_419EFD:                             ; CODE XREF: AircraftClass__Mission_Transport+260↑j
; AircraftClass__Mission_Transport+26E↑j
pop     edi
pop     esi
mov     eax, 3
pop     ebx
add     esp, 30h
retn
; ---------------------------------------------------------------------------

loc_419F09:                             ; CODE XREF: AircraftClass__Mission_Transport+13C↑j
; DATA XREF: .text:jpt_419DBC↓o
mov     eax, [esi+674h] ; jumptable 00419DBC case 7
test    eax, eax
jnz     short loc_419F1D
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_419F1D:                             ; CODE XREF: AircraftClass__Mission_Transport+291↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+90h]
cmp     eax, 1
jnz     loc_419FF7
mov     edi, [esi+5A4h]
test    edi, edi
jz      loc_419FE4
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_419F61
mov     eax, [edi]
lea     ecx, [esp+3Ch+var_24]
push    esi
push    ecx
mov     ecx, edi
call    dword ptr [eax+0A8h]
jmp     short loc_419F71
; ---------------------------------------------------------------------------

loc_419F61:                             ; CODE XREF: AircraftClass__Mission_Transport+2CD↑j
mov     ecx, [esi+5A4h]
lea     eax, [esp+3Ch+var_18]
push    eax
mov     edx, [ecx]
call    dword ptr [edx+48h]

loc_419F71:                             ; CODE XREF: AircraftClass__Mission_Transport+2DF↑j
mov     ecx, [eax]
mov     edx, [eax+4]
mov     eax, [eax+8]
mov     [esp+3Ch+var_4], eax
lea     eax, [esi+9Ch]
mov     ebx, eax
mov     eax, [ebx]
sub     ecx, eax
mov     edi, [ebx+4]
sub     edx, edi
mov     ebx, [ebx+8]
test    ecx, ecx
mov     dword ptr [esp+3Ch+var_28], ebx
jle     short loc_419FA5
cmp     ecx, 5
jle     short loc_419FAF
mov     ecx, 5
jmp     short loc_419FAF
; ---------------------------------------------------------------------------

loc_419FA5:                             ; CODE XREF: AircraftClass__Mission_Transport+317↑j
cmp     ecx, 0FFFFFFFBh
jge     short loc_419FAF
mov     ecx, 0FFFFFFFBh

loc_419FAF:                             ; CODE XREF: AircraftClass__Mission_Transport+31C↑j
; AircraftClass__Mission_Transport+323↑j ...
test    edx, edx
jle     short loc_419FBF
cmp     edx, 5
jle     short loc_419FC9
mov     edx, 5
jmp     short loc_419FC9
; ---------------------------------------------------------------------------

loc_419FBF:                             ; CODE XREF: AircraftClass__Mission_Transport+331↑j
cmp     edx, 0FFFFFFFBh
jge     short loc_419FC9
mov     edx, 0FFFFFFFBh

loc_419FC9:                             ; CODE XREF: AircraftClass__Mission_Transport+336↑j
; AircraftClass__Mission_Transport+33D↑j ...
add     eax, ecx
add     edi, edx
mov     edx, [esi]
mov     [esp+3Ch+var_30], eax
lea     eax, [esp+3Ch+var_30]
mov     ecx, esi
push    eax
mov     [esp+40h+var_2C], edi
call    dword ptr [edx+1B4h]

loc_419FE4:                             ; CODE XREF: AircraftClass__Mission_Transport+2BD↑j
mov     byte ptr [esi+6D4h], 1
pop     edi
pop     esi
mov     eax, 1
pop     ebx
add     esp, 30h
retn
; ---------------------------------------------------------------------------

loc_419FF7:                             ; CODE XREF: AircraftClass__Mission_Transport+2AF↑j
mov     edx, [esi]
push    15h
mov     ecx, esi
mov     byte ptr [esi+6D4h], 1
call    dword ptr [edx+274h]
dec     eax
jz      short loc_41A059
sub     eax, 4
jz      short loc_41A02C
mov     eax, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [eax+484h]
pop     edi
pop     esi
mov     eax, 1
pop     ebx
add     esp, 30h
retn
; ---------------------------------------------------------------------------

loc_41A02C:                             ; CODE XREF: AircraftClass__Mission_Transport+390↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+0D4h]
push    esi
push    0
mov     ecx, esi
call    Team__GetMember
mov     ecx, eax
add     ecx, 114h
call    CellClass__AddObject
pop     edi
pop     esi
mov     eax, 1
pop     ebx
add     esp, 30h
retn
; ---------------------------------------------------------------------------

loc_41A059:                             ; CODE XREF: AircraftClass__Mission_Transport+38B↑j
mov     eax, [esi+6C4h]
mov     cl, [eax+0DFCh]
test    cl, cl
jz      loc_41A125
mov     eax, [esi+118h]
test    eax, eax
jz      loc_41A125
push    ebp
push    0
mov     ecx, esi
call    Team__GetMember
lea     ebp, [esi+114h]
mov     ebx, eax
mov     ecx, ebp
call    LinkedList__Pop
mov     edx, [esi]
push    3
mov     ecx, esi
mov     edi, eax
call    dword ptr [edx+274h]
mov     eax, [edi]
push    ebx
push    2
mov     ecx, edi
call    dword ptr [eax+278h]
cmp     eax, 1
jnz     short loc_41A0F6
push    edi
mov     ecx, ebp
call    CellClass__AddObject
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+124h]
mov     ecx, esi
call    FootClass__MissionMoveCarryallLand
mov     eax, [esi]
push    1
mov     ecx, esi
call    dword ptr [eax+124h]
mov     edx, [esi]
push    0
push    2
mov     ecx, esi
call    dword ptr [edx+1E8h]
pop     ebp
pop     edi
pop     esi
mov     eax, 1
pop     ebx
add     esp, 30h
retn
; ---------------------------------------------------------------------------

loc_41A0F6:                             ; CODE XREF: AircraftClass__Mission_Transport+432↑j
mov     edi, [esi]
push    1
mov     ecx, esi
call    TechnoClass__FindClosestPlacementCell
push    eax
mov     ecx, esi
call    dword ptr [edi+480h]
mov     edx, [esi]
push    0
push    2
mov     ecx, esi
call    dword ptr [edx+1E8h]
pop     ebp
pop     edi
pop     esi
mov     eax, 1
pop     ebx
add     esp, 30h
retn
; ---------------------------------------------------------------------------

loc_41A125:                             ; CODE XREF: AircraftClass__Mission_Transport+3E7↑j
; AircraftClass__Mission_Transport+3F5↑j
mov     eax, [esi]
push    0
push    5
mov     ecx, esi
call    dword ptr [eax+1E8h]

def_419DBC:                             ; CODE XREF: AircraftClass__Mission_Transport+136↑j
pop     edi             ; jumptable 00419DBC default case
pop     esi
mov     eax, 1
pop     ebx
add     esp, 30h
retn
*/
}

// IDA: 0x4190B0 (MissionDispatch, 1147B)
// 0x4190b0
int AircraftClass::MissionDispatch()
{
// [IDA decompile]
int __thiscall AircraftClass::MissionDispatch(int this, _DWORD *a2, int a3, void **a4)
{
  int result; // eax
  int v6; // ebx
  void *ClosestPlacementCell; // eax
  void *v8; // edi
  int v9; // ebx
  void *v10; // eax
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  int Member; // eax
  int v16; // eax

  switch ( *(_DWORD *)(this + 172) )
  {
    case 4:
    case 0x1A:
    case 0x1B:
    case 0x1E:
    case 0x1F:
      if ( *(_DWORD *)(this + 660) )
        goto LABEL_4;
LABEL_3:
      result = 0;
      break;
    default:
LABEL_4:
      switch ( a3 )
      {
        case 8:
          if ( !*(_BYTE *)(*(_DWORD *)(this + 1732) + 3580)
            || (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) != 2
            || !*(_BYTE *)(this + 1048)
            || (!*(_DWORD *)(this + 280) || (_DWORD *)CCINIClass::GetDB((_DWORD *)(this + 276)) != a2)
            && *(_DWORD **)(this + 1444) != a2 )
          {
            return FootClass::MissionDispatch((int *)this, a2, a3, a4);
          }
          return 10;
        case 14:
          v14 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1504);
          if ( v14 <= 0 || *(_DWORD *)(this + 276) >= v14 )
            return FootClass::MissionDispatch((int *)this, a2, a3, a4);
          FootClass::MissionDispatch((int *)this, a2, a3, a4);
          if ( !*(_DWORD *)(this + 1652) )
            WinAPI::Wrapper(-2147467261);
          if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) )
            return 1;
          RateScaler::Init((_BYTE *)(this + 848), *(double *)(*(_DWORD *)(this + 1732) + 968));
          if ( (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)this + 632))(this, 19, a2) != 1 )
            return 1;
          *a4 = (void *)this;
          if ( (*(int (__thiscall **)(int, int, void **, _DWORD *))(*(_DWORD *)this + 636))(this, 18, a4, a2) == 1 )
          {
            Member = Team::GetMember((_DWORD *)this, 0);
            (*(void (__thiscall **)(int))(*(_DWORD *)Member + 336))(Member);
            return 1;
          }
          else
          {
            (*(void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)this + 632))(this, 3, a2);
            return 1;
          }
        case 15:
          if ( !*(_DWORD *)(*(_DWORD *)(this + 1732) + 1504)
            || !a2
            || !Object::IsAlliedWithObjectHouse(*(_DWORD **)(this + 540), (int)a2) )
          {
            goto LABEL_3;
          }
          v16 = (*(_DWORD *)(this + 276) >= *(_DWORD *)(*(_DWORD *)(this + 1732) + 1504)) - 1;
          LOBYTE(v16) = v16 & 0xF7;
          return v16 + 10;
        case 18:
          FootClass::MissionDispatch((int *)this, a2, a3, a4);
          v8 = *a4;
          if ( *a4 && (*(int (__thiscall **)(void *))(*(_DWORD *)v8 + 44))(v8) == 6 )
          {
            v9 = *(_DWORD *)this;
            v10 = AbstractClass::IsTechnoType(v8);
            if ( (*(int (__thiscall **)(int, int, void *))(v9 + 632))(this, 15, v10) != 1 )
              return 10;
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 488))(this, 7, 0);
          }
          else
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 488))(this, 2, 0);
          }
          (*(void (__thiscall **)(int, void *, int))(*(_DWORD *)this + 1152))(this, v8, 1);
          (*(void (__thiscall **)(int))(*(_DWORD *)this + 492))(this);
          result = 1;
          break;
        case 19:
          FootClass::MissionDispatch((int *)this, a2, a3, a4);
          if ( !*(_DWORD *)(this + 1652) )
            WinAPI::Wrapper(-2147467261);
          if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) )
            return 1;
          v11 = *(_DWORD *)(this + 1444);
          if ( !v11 )
            return 1;
          if ( *(_BYTE *)(*(_DWORD *)(this + 1732) + 3597)
            && (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) == 11
            && *(_DWORD *)(this + 1444) == (*(int (__thiscall **)(int))(*(_DWORD *)this + 444))(this) )
          {
            return 1;
          }
          else
          {
            return 10;
          }
        case 21:
          v12 = *(_DWORD *)(this + 1732);
          if ( *(_DWORD *)(this + 276) == *(_DWORD *)(v12 + 1504) )
            Timer::StartDouble((_BYTE *)(this + 848), *(double *)(v12 + 968));
          if ( a2 )
          {
            v13 = (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) == 15 ? a2 : 0;
            if ( v13 )
            {
              if ( *(_BYTE *)(v13[432] + 3777) && !*((_BYTE *)v13 + 1753) )
              {
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 968))(this, 0);
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 1152))(this, 0, 1);
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 488))(this, 4, 0);
              }
            }
          }
          return 5;
        case 23:
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 488))(this, 2, 0);
          v6 = *(_DWORD *)this;
          ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((int *)this);
          (*(void (__thiscall **)(int, void *, int))(v6 + 1152))(this, ClosestPlacementCell, 1);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 628))(this, 3);
          return FootClass::MissionDispatch((int *)this, a2, a3, a4);
        case 29:
          if ( *(_DWORD *)(this + 692) )
            return 10;
          else
            return *(_DWORD *)(*(_DWORD *)(this + 1732) + 1668) != *(_DWORD *)(this + 764) ? 10 : 1;
        case 31:
          if ( *(_DWORD *)(this + 764) >= *(_DWORD *)(*(_DWORD *)(this + 1732) + 1668) / 2 && *(_DWORD *)(this + 692) )
            return 1;
          else
            return FootClass::MissionDispatch((int *)this, a2, a3, a4);
        case 33:
          return *(_DWORD *)(*(_DWORD *)(this + 1732) + 1668) != *(_DWORD *)(this + 764) ? 10 : 1;
        default:
          return FootClass::MissionDispatch((int *)this, a2, a3, a4);
      }
      break;
  }
  return result;
}

/* ASM:
push    ebx
push    ebp
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi+0ACh]
add     eax, 0FFFFFFFCh ; switch 28 cases
cmp     eax, 1Bh
ja      short def_4190CC ; jumptable 004190CC default case, cases 5-25,28,29
xor     ecx, ecx
mov     cl, ds:byte_419534[eax]
jmp     ds:jpt_4190CC[ecx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_4190D3:                             ; CODE XREF: AircraftClass__MissionDispatch+1C↑j
; DATA XREF: .text:jpt_4190CC↓o
mov     eax, [esi+294h] ; jumptable 004190CC cases 4,26,27,30,31
test    eax, eax
jnz     short def_4190CC ; jumptable 004190CC default case, cases 5-25,28,29

loc_4190DD:                             ; CODE XREF: AircraftClass__MissionDispatch+3C9↓j
; AircraftClass__MissionDispatch+3D5↓j ...
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

def_4190CC:                             ; CODE XREF: AircraftClass__MissionDispatch+12↑j
; AircraftClass__MissionDispatch+1C↑j ...
mov     ebp, [esp+10h+arg_4] ; jumptable 004190CC default case, cases 5-25,28,29
mov     edi, [esp+10h+arg_0]
lea     eax, [ebp-8]    ; switch 26 cases
cmp     eax, 19h
ja      def_419102      ; jumptable 00419102 default case, cases 9-13,16,17,20,22,24-28,30,32
xor     edx, edx
mov     dl, ds:byte_41957C[eax]
jmp     ds:jpt_419102[edx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_419109:                             ; CODE XREF: AircraftClass__MissionDispatch+52↑j
; DATA XREF: .text:jpt_419102↓o
mov     eax, [esi+6C4h] ; jumptable 00419102 case 31
mov     ecx, [esi+2FCh]
mov     eax, [eax+684h]
cdq
sub     eax, edx
sar     eax, 1
cmp     ecx, eax
jl      short loc_41913A
mov     eax, [esi+2B4h]
test    eax, eax
jz      short loc_41913A
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_41913A:                             ; CODE XREF: AircraftClass__MissionDispatch+72↑j
; AircraftClass__MissionDispatch+7C↑j
mov     ecx, [esp+10h+arg_8]
mov     edx, [esp+10h+arg_0]
push    ecx
push    ebp
push    edx
mov     ecx, esi
call    FootClass__MissionDispatch
pop     edi
pop     esi
pop     ebp
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_419153:                             ; CODE XREF: AircraftClass__MissionDispatch+52↑j
; DATA XREF: .text:jpt_419102↓o
mov     eax, [esi+2B4h] ; jumptable 00419102 case 29
test    eax, eax
jz      short loc_419169
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_419169:                             ; CODE XREF: AircraftClass__MissionDispatch+AB↑j
mov     ecx, [esi+6C4h]
mov     eax, [esi+2FCh]
mov     edi, [ecx+684h]
sub     eax, edi
pop     edi
neg     eax
sbb     eax, eax
pop     esi
and     eax, 9
pop     ebp
inc     eax
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_41918C:                             ; CODE XREF: AircraftClass__MissionDispatch+52↑j
; DATA XREF: .text:jpt_419102↓o
mov     edx, [esi+6C4h] ; jumptable 00419102 case 33
mov     eax, [esi+2FCh]
mov     edi, [edx+684h]
sub     eax, edi
pop     edi
neg     eax
sbb     eax, eax
pop     esi
and     eax, 9
pop     ebp
inc     eax
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_4191AF:                             ; CODE XREF: AircraftClass__MissionDispatch+52↑j
; DATA XREF: .text:jpt_419102↓o
mov     eax, [esi]      ; jumptable 00419102 case 23
push    0
push    2
mov     ecx, esi
call    dword ptr [eax+1E8h]
mov     ebx, [esi]
push    1
mov     ecx, esi
call    TechnoClass__FindClosestPlacementCell
push    eax
mov     ecx, esi
call    dword ptr [ebx+480h]
mov     edx, [esi]
push    3
mov     ecx, esi
call    dword ptr [edx+274h]

def_419102:                             ; CODE XREF: AircraftClass__MissionDispatch+44↑j
; AircraftClass__MissionDispatch+52↑j ...
mov     eax, [esp+10h+arg_8] ; jumptable 00419102 default case, cases 9-13,16,17,20,22,24-28,30,32
mov     ecx, esi
push    eax
push    ebp
push    edi
call    FootClass__MissionDispatch
pop     edi
pop     esi
pop     ebp
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_4191F2:                             ; CODE XREF: AircraftClass__MissionDispatch+52↑j
; DATA XREF: .text:jpt_419102↓o
mov     edi, [esp+10h+arg_8] ; jumptable 00419102 case 18
mov     eax, [esp+10h+arg_0]
push    edi
push    ebp
push    eax
mov     ecx, esi
call    FootClass__MissionDispatch
mov     edi, [edi]
test    edi, edi
jz      short loc_419243
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_419243
mov     ebx, [esi]
mov     ecx, edi
call    AbstractClass__IsTechnoType
push    eax
push    0Fh
mov     ecx, esi
call    dword ptr [ebx+278h]
cmp     eax, 1
jz      short loc_41923B
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_41923B:                             ; CODE XREF: AircraftClass__MissionDispatch+17D↑j
mov     eax, [esi]
push    0
push    7
jmp     short loc_419249
; ---------------------------------------------------------------------------

loc_419243:                             ; CODE XREF: AircraftClass__MissionDispatch+158↑j
; AircraftClass__MissionDispatch+164↑j
mov     eax, [esi]
push    0
push    2

loc_419249:                             ; CODE XREF: AircraftClass__MissionDispatch+191↑j
mov     ecx, esi
call    dword ptr [eax+1E8h]
mov     edx, [esi]
push    1
push    edi
mov     ecx, esi
call    dword ptr [edx+480h]
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1ECh]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_419274:                             ; CODE XREF: AircraftClass__MissionDispatch+52↑j
; DATA XREF: .text:jpt_419102↓o
mov     ecx, [esp+10h+arg_8] ; jumptable 00419102 case 19
mov     edx, [esp+10h+arg_0]
push    ecx
push    ebp
push    edx
mov     ecx, esi
call    FootClass__MissionDispatch
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_41929A
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_41929A:                             ; CODE XREF: AircraftClass__MissionDispatch+1DE↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jz      loc_41945F
mov     ecx, [esi+5A4h]
test    ecx, ecx
jz      loc_41945F
mov     edx, [esi+6C4h]
mov     al, [edx+0E0Dh]
test    al, al
jz      loc_41951F
mov     eax, [ecx]
call    dword ptr [eax+2Ch]
cmp     eax, 0Bh
jnz     loc_41951F
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1BCh]
cmp     [esi+5A4h], eax
jnz     loc_41951F
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_419300:                             ; CODE XREF: AircraftClass__MissionDispatch+52↑j
; DATA XREF: .text:jpt_419102↓o
mov     eax, [esi+6C4h] ; jumptable 00419102 case 21
mov     ecx, [esi+114h]
cmp     ecx, [eax+5E0h]
jnz     short loc_41932D
mov     edx, [eax+3CCh]
mov     eax, [eax+3C8h]
push    edx
push    eax             ; double
lea     ecx, [esi+350h]
call    Timer__StartDouble

loc_41932D:                             ; CODE XREF: AircraftClass__MissionDispatch+262↑j
mov     edi, [esp+10h+arg_0]
test    edi, edi
jz      short loc_41938B
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
sub     eax, 0Fh
neg     eax
sbb     eax, eax
not     eax
and     eax, edi
jz      short loc_41938B
mov     ecx, [eax+6C0h]
mov     dl, [ecx+0EC1h]
test    dl, dl
jz      short loc_41938B
mov     cl, [eax+6D9h]
test    cl, cl
jnz     short loc_41938B
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+3C8h]
mov     eax, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [eax+480h]
mov     edx, [esi]
push    0
push    4
mov     ecx, esi
call    dword ptr [edx+1E8h]

loc_41938B:                             ; CODE XREF: AircraftClass__MissionDispatch+283↑j
; AircraftClass__MissionDispatch+297↑j ...
pop     edi
pop     esi
pop     ebp
mov     eax, 5
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_419397:                             ; CODE XREF: AircraftClass__MissionDispatch+52↑j
; DATA XREF: .text:jpt_419102↓o
mov     eax, [esi+6C4h] ; jumptable 00419102 case 14
mov     eax, [eax+5E0h]
test    eax, eax
jle     def_419102      ; jumptable 00419102 default case, cases 9-13,16,17,20,22,24-28,30,32
cmp     [esi+114h], eax
jge     def_419102      ; jumptable 00419102 default case, cases 9-13,16,17,20,22,24-28,30,32
mov     ebx, [esp+10h+arg_8]
mov     edi, [esp+10h+arg_0]
push    ebx
push    ebp
push    edi
mov     ecx, esi
call    FootClass__MissionDispatch
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_4193DD
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_4193DD:                             ; CODE XREF: AircraftClass__MissionDispatch+321↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jnz     short loc_41945F
mov     edx, [esi+6C4h]
mov     eax, [edx+3CCh]
push    eax
mov     ecx, [edx+3C8h]
push    ecx             ; double
lea     ecx, [esi+350h]
call    RateScaler__Init
mov     edx, [esi]
push    edi
push    13h
mov     ecx, esi
call    dword ptr [edx+278h]
cmp     eax, 1
jnz     short loc_41945F
mov     [ebx], esi
mov     eax, [esi]
push    edi
push    ebx
push    12h
mov     ecx, esi
call    dword ptr [eax+27Ch]
cmp     eax, 1
jz      short loc_41944C
mov     edx, [esi]
push    edi
push    3
mov     ecx, esi
call    dword ptr [edx+278h]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_41944C:                             ; CODE XREF: AircraftClass__MissionDispatch+381↑j
push    0
mov     ecx, esi
call    Team__GetMember
mov     edx, [eax]
mov     ecx, eax
call    dword ptr [edx+150h]

loc_41945F:                             ; CODE XREF: AircraftClass__MissionDispatch+1F8↑j
; AircraftClass__MissionDispatch+206↑j ...
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_41946B:                             ; CODE XREF: AircraftClass__MissionDispatch+52↑j
; DATA XREF: .text:jpt_419102↓o
mov     eax, [esi+6C4h] ; jumptable 00419102 case 15
mov     ecx, [eax+5E0h]
test    ecx, ecx
jz      loc_4190DD
mov     eax, [esp+10h+arg_0]
test    eax, eax
jz      loc_4190DD
mov     ecx, [esi+21Ch]
push    eax
call    Object__IsAlliedWithObjectHouse
test    al, al
jz      loc_4190DD
mov     ecx, [esi+6C4h]
mov     edx, [esi+114h]
xor     eax, eax
mov     edi, [ecx+5E0h]
cmp     edx, edi
pop     edi
setnl   al
dec     eax
pop     esi
and     al, 0F7h
pop     ebp
add     eax, 0Ah
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_4194C5:                             ; CODE XREF: AircraftClass__MissionDispatch+52↑j
; DATA XREF: .text:jpt_419102↓o
mov     eax, [esi+6C4h] ; jumptable 00419102 case 8
mov     cl, [eax+0DFCh]
test    cl, cl
jz      def_419102      ; jumptable 00419102 default case, cases 9-13,16,17,20,22,24-28,30,32
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 2
jnz     def_419102      ; jumptable 00419102 default case, cases 9-13,16,17,20,22,24-28,30,32
mov     al, [esi+418h]
test    al, al
jz      def_419102      ; jumptable 00419102 default case, cases 9-13,16,17,20,22,24-28,30,32
mov     eax, [esi+118h]
test    eax, eax
jz      short loc_419513
lea     ecx, [esi+114h]
call    CCINIClass__GetDB
cmp     eax, edi
jz      short loc_41951F

loc_419513:                             ; CODE XREF: AircraftClass__MissionDispatch+452↑j
cmp     [esi+5A4h], edi
jnz     def_419102      ; jumptable 00419102 default case, cases 9-13,16,17,20,22,24-28,30,32

loc_41951F:                             ; CODE XREF: AircraftClass__MissionDispatch+21A↑j
; AircraftClass__MissionDispatch+228↑j ...
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
retn    0Ch
*/
}

// ============================================================
// Phase 3: Flight Paths
// ============================================================

// IDA: 0x414310 (MoveTo, 406B)
// 0x414310
int AircraftClass::MoveTo()
{
// [IDA decompile]
char __thiscall sub_414310(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // ebx
  int v5; // ecx
  int v6; // edi
  int v7; // ebx
  char v8; // bl
  int v9; // eax
  __int16 v10; // dx
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  int v15; // [esp+Ch] [ebp-Ch] BYREF
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]

  v3 = a2;
  v15 = *a2;
  v5 = *(this + 433);
  v16 = a2[1];
  v17 = a2[2];
  if ( !*(_BYTE *)(v5 + 3432) )
  {
    if ( *((_BYTE *)this + 980) || !(unsigned __int8)IsCoordVisibleMap(a2) )
    {
      v6 = *(this + 433);
      v7 = Cell::GetGroundHeight(v3);
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 188))(v6) + v7;
    }
    else
    {
      v17 = Cell::GetGroundHeight(v3);
    }
  }
  v8 = a3;
  if ( !(unsigned __int8)FootClass::DispatchInput(&v15, a3) )
    return 0;
  v9 = *(this + 433);
  if ( !*(_BYTE *)(v9 + 560)
    || !*(_BYTE *)(v9 + 3594)
    || *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1016))(this, 0)
    && *(_BYTE *)(*(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1016))(this, 0) + 327) )
  {
    *((_BYTE *)this + 980) = 1;
  }
  if ( *(this + 70) )
    *((_BYTE *)this + 1737) = 1;
  LOBYTE(v10) = 0;
  HIBYTE(v10) = v8;
  LOWORD(a2) = v10;
  FacingClass::Set_SyncLog(&a2);
  *(this + 64) = MEMORY[0xA8ED84];
  v11 = v16;
  *(this + 67) = 1;
  *(this + 65) = v11;
  *(this + 66) = 1;
  v12 = *(this + 433);
  *(this + 62) = 0;
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 188))(v12);
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 456))(this) == v13 )
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1348))(this, 0, 1072693248);
  else
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 1348))(this, 0, 0);
  return 1;
}

/* ASM:
sub     esp, 0Ch
push    ebx
mov     ebx, [esp+10h+arg_0]
push    esi
mov     eax, ebx
mov     esi, ecx
push    edi
mov     ecx, [eax]
mov     [esp+18h+var_C], ecx
mov     ecx, [esi+6C4h]
mov     edx, [eax+4]
mov     [esp+18h+var_8], edx
mov     eax, [eax+8]
mov     [esp+18h+var_4], eax
mov     al, [ecx+0D68h]
test    al, al
jnz     short loc_41438F
mov     al, [esi+3D4h]
test    al, al
jnz     short loc_41436C
push    ebx
mov     ecx, 87F7E8h
call    IsCoordVisibleMap
test    al, al
jz      short loc_41436C
push    ebx
mov     ecx, 87F7E8h
call    Cell__GetGroundHeight
mov     [esp+18h+var_4], eax
jmp     short loc_41438F
; ---------------------------------------------------------------------------

loc_41436C:                             ; CODE XREF: AircraftClass__MoveTo+3A↑j
; AircraftClass__MoveTo+49↑j
mov     edi, [esi+6C4h]
push    ebx
mov     ecx, 87F7E8h
call    Cell__GetGroundHeight
mov     edx, [edi]
mov     ecx, edi
mov     ebx, eax
call    dword ptr [edx+0BCh]
add     ebx, eax
mov     [esp+18h+var_4], ebx

loc_41438F:                             ; CODE XREF: AircraftClass__MoveTo+30↑j
; AircraftClass__MoveTo+5A↑j
mov     ebx, [esp+18h+arg_4]
lea     eax, [esp+18h+var_C]
push    ebx
push    eax
mov     ecx, esi
call    FootClass__DispatchInput
test    al, al
jz      loc_41449B
mov     eax, [esi+6C4h]
mov     cl, [eax+230h]
test    cl, cl
jz      short loc_4143EB
mov     cl, [eax+0E0Ah]
test    cl, cl
jz      short loc_4143EB
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+3F8h]
cmp     dword ptr [eax], 0
jz      short loc_4143F2
mov     eax, [esi]
push    0
mov     ecx, esi
call    dword ptr [eax+3F8h]
mov     ecx, [eax]
mov     al, [ecx+147h]
test    al, al
jz      short loc_4143F2

loc_4143EB:                             ; CODE XREF: AircraftClass__MoveTo+A6↑j
; AircraftClass__MoveTo+B0↑j
mov     byte ptr [esi+3D4h], 1

loc_4143F2:                             ; CODE XREF: AircraftClass__MoveTo+C1↑j
; AircraftClass__MoveTo+D9↑j
mov     eax, [esi+118h]
test    eax, eax
jz      short loc_414403
mov     byte ptr [esi+6C9h], 1

loc_414403:                             ; CODE XREF: AircraftClass__MoveTo+EA↑j
xor     edx, edx
lea     eax, [esp+18h+arg_0]
mov     dh, bl
push    eax
lea     ecx, [esi+3A0h]
mov     word ptr [esp+1Ch+arg_0], dx
call    FacingClass__Set_SyncLog
mov     eax, dword_A8ED54+30h
lea     edx, [esi+100h]
mov     ecx, 1
mov     [edx], eax
mov     eax, [esp+18h+var_8]
mov     [esi+10Ch], ecx
mov     [edx+4], eax
mov     [edx+8], ecx
mov     ecx, [esi+6C4h]
mov     dword ptr [esi+0F8h], 0
mov     edx, [ecx]
call    dword ptr [edx+0BCh]
mov     edi, eax
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1C8h]
cmp     eax, edi
jnz     short loc_414482
mov     edx, [esi]
push    3FF00000h
push    0
mov     ecx, esi
call    dword ptr [edx+544h]
pop     edi
pop     esi
mov     al, 1
pop     ebx
add     esp, 0Ch
retn    8
; ---------------------------------------------------------------------------

loc_414482:                             ; CODE XREF: AircraftClass__MoveTo+154↑j
mov     eax, [esi]
push    0
push    0
mov     ecx, esi
call    dword ptr [eax+544h]
pop     edi
pop     esi
mov     al, 1
pop     ebx
add     esp, 0Ch
retn    8
; ---------------------------------------------------------------------------

loc_41449B:                             ; CODE XREF: AircraftClass__MoveTo+92↑j
pop     edi
pop     esi
xor     al, al
pop     ebx
add     esp, 0Ch
retn    8
*/
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
// [IDA decompile]
int __thiscall AircraftClass::_vt122(int this, int a2, int a3)
{
  int result; // eax

  switch ( *(_DWORD *)(this + 172) )
  {
    case 4:
    case 0x1A:
    case 0x1B:
    case 0x1E:
    case 0x1F:
      if ( *(_DWORD *)(this + 660) )
        goto LABEL_4;
      result = a2 - 4;
      switch ( a2 )
      {
        case 4:
        case 26:
        case 27:
        case 30:
        case 31:
          goto LABEL_4;
        default:
          return result;
      }
    default:
LABEL_4:
      result = ParticleClass::MissionDispatch((#377 *)this);
      break;
  }
  return result;
}

/* ASM:
mov     eax, [ecx+0ACh]
push    esi
mov     esi, [esp+4+arg_0]
add     eax, 0FFFFFFFCh ; switch 28 cases
cmp     eax, 1Bh
ja      short def_41BAAB ; jumptable 0041BAAB default case, cases 5-25,28,29
; jumptable 0041BACC cases 4,26,27,30,31
xor     edx, edx
mov     dl, ds:byte_41BAEC[eax]
jmp     ds:jpt_41BAAB[edx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_41BAB2:                             ; CODE XREF: AircraftClass__ProcessLanding+1B↑j
; DATA XREF: .text:jpt_41BAAB↓o
mov     eax, [ecx+294h] ; jumptable 0041BAAB cases 4,26,27,30,31
test    eax, eax
jnz     short def_41BAAB ; jumptable 0041BAAB default case, cases 5-25,28,29
; jumptable 0041BACC cases 4,26,27,30,31
lea     eax, [esi-4]    ; switch 28 cases
cmp     eax, 1Bh
ja      short def_41BACC ; jumptable 0041BACC default case, cases 5-25,28,29
xor     edx, edx
mov     dl, ds:byte_41BB10[eax]
jmp     ds:jpt_41BACC[edx*4] ; switch jump
; ---------------------------------------------------------------------------

def_41BAAB:                             ; CODE XREF: AircraftClass__ProcessLanding+11↑j
; AircraftClass__ProcessLanding+1B↑j ...
mov     eax, [esp+4+arg_4] ; jumptable 0041BAAB default case, cases 5-25,28,29
; jumptable 0041BACC cases 4,26,27,30,31
push    eax
push    esi
call    ParticleClass__MissionDispatch

def_41BACC:                             ; CODE XREF: AircraftClass__ProcessLanding+32↑j
; AircraftClass__ProcessLanding+3C↑j
; DATA XREF: ...
pop     esi             ; jumptable 0041BACC default case, cases 5-25,28,29
retn    8
*/
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
// [IDA decompile]
int __thiscall AircraftClass::_vt140(unsigned int **this)
{
  unsigned int *v2; // ecx
  unsigned int TransitionCount; // eax
  unsigned int *v4; // edi
  void *v5; // eax
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF

  if ( *(this + 361) )
  {
    if ( *(this + 361) == (unsigned int *)((int (__thiscall *)(unsigned int **))(*this)[111])(this) )
      ((void (__thiscall *)(unsigned int **, _DWORD, int))(*this)[288])(this, 0, 1);
  }
  else
  {
    v2 = *(this + 135);
    TransitionCount = v2[120];
    if ( TransitionCount >= 4 )
      TransitionCount = HouseClass::GetTransitionCount(v2);
    v7 = *CellClass::FindOpenNeighbor(
            (int *)&MEMORY[0x87F7E8],
            &v8,
            TransitionCount,
            (int)&MEMORY[0x889E68],
            (int)&MEMORY[0x889E68],
            4,
            1,
            0);
    if ( v7 != MEMORY[0x889E68] )
    {
      v4 = *this;
      v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v7);
      ((void (__thiscall *)(unsigned int **, void *, int))v4[288])(this, v5, 1);
      return 3;
    }
  }
  return 3;
}

/* ASM:
sub     esp, 8
push    esi
mov     esi, ecx
mov     eax, [esi+5A4h]
test    eax, eax
jnz     short loc_415ADF
mov     ecx, [esi+21Ch]
mov     eax, [ecx+1E0h]
test    eax, eax
jl      short loc_415A75
cmp     eax, 3
jle     short loc_415A7A

loc_415A75:                             ; CODE XREF: AircraftClass__ProcessReturnToBase+1E↑j
call    HouseClass__GetTransitionCount

loc_415A7A:                             ; CODE XREF: AircraftClass__ProcessReturnToBase+23↑j
push    0
push    1
push    4
push    889E68h
push    889E68h
push    eax
lea     eax, [esp+24h+var_4]
mov     ecx, 87F7E8h
push    eax
call    CellClass__FindOpenNeighbor
mov     eax, [eax]
cmp     ax, ds:889E68h
mov     [esp+0Ch+var_8], eax
jnz     short loc_415AB7
mov     cx, word ptr [esp+0Ch+var_8+2]
cmp     cx, ds:889E6Ah
jz      short loc_415AFF

loc_415AB7:                             ; CODE XREF: AircraftClass__ProcessReturnToBase+57↑j
push    edi
mov     edi, [esi]
lea     edx, [esp+10h+var_8]
push    1
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
push    eax
mov     ecx, esi
call    dword ptr [edi+480h]
pop     edi
mov     eax, 3
pop     esi
add     esp, 8
retn
; ---------------------------------------------------------------------------

loc_415ADF:                             ; CODE XREF: AircraftClass__ProcessReturnToBase+E↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1BCh]
cmp     [esi+5A4h], eax
jnz     short loc_415AFF
mov     edx, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [edx+480h]

loc_415AFF:                             ; CODE XREF: AircraftClass__ProcessReturnToBase+65↑j
; AircraftClass__ProcessReturnToBase+9F↑j
mov     eax, 3
pop     esi
add     esp, 8
retn
*/
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
// [IDA decompile]
int __thiscall AircraftClass::_vt123(#377 *this)
{
  if ( *((_DWORD *)this + 43) != 30 )
    *((_BYTE *)this + 1746) = 0;
  return MissionClass::AdvanceState(this);
}

/* ASM:
cmp     dword ptr [ecx+0ACh], 1Eh
jz      short loc_41B880
mov     byte ptr [ecx+6D2h], 0

loc_41B880:                             ; CODE XREF: AircraftClass__ProcessPassengerEjection+7↑j
jmp     MissionClass__AdvanceState
*/
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
// [IDA decompile]
int __thiscall AircraftClass::_vt10(int *this, int *a2, int *a3)
{
  int result; // eax

  FootClass::HandleTargetDestroyed(this, a2, a3);
  result = 0;
  if ( (int *)*(this + 435) == a2 )
    *(this + 435) = 0;
  if ( (int *)*(this + 433) == a2 )
    *(this + 433) = 0;
  return result;
}

/* ASM:
mov     eax, [esp+arg_4]
push    esi
push    edi
mov     edi, [esp+8+arg_0]
push    eax
mov     esi, ecx
push    edi
call    FootClass__HandleTargetDestroyed
mov     ecx, [esi+6CCh]
xor     eax, eax
cmp     ecx, edi
jnz     short loc_41B685
mov     [esi+6CCh], eax

loc_41B685:                             ; CODE XREF: AircraftClass__HandleTargetDestroyed+1D↑j
cmp     [esi+6C4h], edi
jnz     short loc_41B693
mov     [esi+6C4h], eax

loc_41B693:                             ; CODE XREF: AircraftClass__HandleTargetDestroyed+2B↑j
pop     edi
pop     esi
retn    8
*/
}

// IDA: 0x414A80 (ProcessMissionTimeout, 302B)
// 0x414a80
int AircraftClass::ProcessMissionTimeout()
{
// [IDA decompile]
int __thiscall AircraftClass::ProcessMissionTimeout(_DWORD *this)
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

  if ( *(this + 191) )
  {
    if ( *(this + 173) )
      goto LABEL_12;
    if ( MEMORY[0xA8B238][0] )
    {
      v5 = *this;
      v9 = *(this + 39);
      v10 = *(this + 40);
      v11 = *(this + 41);
      v6 = (*(int (__thiscall **)(_DWORD *, int, int *, _DWORD))(v5 + 964))(this, 64, &v9, 0);
      (*(void (__thiscall **)(_DWORD *, int))(v5 + 968))(this, v6);
    }
    if ( !*(this + 173) )
    {
      v7 = *this;
      v9 = *(this + 39);
      v10 = *(this + 40);
      v11 = *(this + 41);
      v8 = (*(int (__thiscall **)(_DWORD *, _DWORD, int *, _DWORD))(v7 + 964))(this, 0, &v9, 0);
      (*(void (__thiscall **)(_DWORD *, int))(v7 + 968))(this, v8);
    }
    if ( *(this + 173) )
    {
LABEL_12:
      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 1, 0);
      return 1;
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1156))(this, 0, 1);
      return 1;
    }
  }
  else
  {
    if ( *(this + 373) )
      TeamClass::LiberateMember_Start(this, -1, 0);
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1156))(this, 0, 1);
    MissionControl = MissionClass::GetMissionControl(this);
    v3 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
    return v3 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2);
  }
}

/* ASM:
sub     esp, 0Ch
push    esi
mov     esi, ecx
mov     eax, [esi+2FCh]
test    eax, eax
jnz     short loc_414AE5
mov     ecx, [esi+5D4h]
test    ecx, ecx
jz      short loc_414AA4
push    0
push    0FFFFFFFFh
push    esi
call    TeamClass__LiberateMember_Start

loc_414AA4:                             ; CODE XREF: AircraftClass__ProcessMissionTimeout+18↑j
mov     eax, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [eax+484h]
mov     ecx, esi
call    MissionClass__GetMissionControl
fld     qword ptr [eax+10h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
mov     ecx, ds:0A8B230h
push    2
push    0
add     ecx, 218h
mov     esi, eax
call    Random__Range
add     eax, esi
pop     esi
add     esp, 0Ch
retn
; ---------------------------------------------------------------------------

loc_414AE5:                             ; CODE XREF: AircraftClass__ProcessMissionTimeout+E↑j
mov     eax, [esi+2B4h]
test    eax, eax
jnz     loc_414B96
mov     eax, ds:0A8B238h
push    edi
test    eax, eax
jz      short loc_414B33
lea     edx, [esi+9Ch]
mov     edi, [esi]
push    0
mov     eax, [edx]
mov     [esp+18h+var_C], eax
lea     eax, [esp+18h+var_C]
mov     ecx, [edx+4]
push    eax
mov     [esp+1Ch+var_8], ecx
push    40h ; '@'
mov     edx, [edx+8]
mov     ecx, esi
mov     [esp+20h+var_4], edx
call    dword ptr [edi+3C4h]
push    eax
mov     ecx, esi
call    dword ptr [edi+3C8h]

loc_414B33:                             ; CODE XREF: AircraftClass__ProcessMissionTimeout+7B↑j
mov     eax, [esi+2B4h]
test    eax, eax
jnz     short loc_414B73
lea     ecx, [esi+9Ch]
mov     edi, [esi]
push    0
mov     edx, [ecx]
mov     [esp+18h+var_C], edx
lea     edx, [esp+18h+var_C]
mov     eax, [ecx+4]
push    edx
push    0
mov     [esp+20h+var_8], eax
mov     ecx, [ecx+8]
mov     [esp+20h+var_4], ecx
mov     ecx, esi
call    dword ptr [edi+3C4h]
push    eax
mov     ecx, esi
call    dword ptr [edi+3C8h]

loc_414B73:                             ; CODE XREF: AircraftClass__ProcessMissionTimeout+BB↑j
mov     eax, [esi+2B4h]
pop     edi
test    eax, eax
jnz     short loc_414B96
mov     eax, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [eax+484h]
mov     eax, 1
pop     esi
add     esp, 0Ch
retn
; ---------------------------------------------------------------------------

loc_414B96:                             ; CODE XREF: AircraftClass__ProcessMissionTimeout+6D↑j
; AircraftClass__ProcessMissionTimeout+FC↑j
mov     edx, [esi]
push    0
push    1
mov     ecx, esi
call    dword ptr [edx+1E8h]
mov     eax, 1
pop     esi
add     esp, 0Ch
retn
*/
}

// IDA: 0x41A5C0 (GetMissionTimer, 886B)
// 0x41a5c0
int AircraftClass::GetMissionTimer()
{
// [IDA decompile]
int __thiscall AircraftClass::GetMissionTimer(int this)
{
  int v2; // edi
  int v3; // eax
  char *MissionControl; // eax
  int v6; // edi
  void *v7; // eax
  int v8; // eax
  int v9; // ecx
  int Member; // eax
  int v11; // edi
  int v12; // eax
  char *v13; // eax
  int v14; // esi
  int v15; // [esp+8h] [ebp-Ch] BYREF
  int v16; // [esp+Ch] [ebp-8h]
  int v17; // [esp+10h] [ebp-4h]

  v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1732) + 188))(*(_DWORD *)(this + 1732));
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 456))(this) == v2 )
  {
    if ( *(_DWORD *)(this + 1492) )
    {
      if ( *(_DWORD *)(this + 1444) )
      {
        v3 = *(_DWORD *)this;
        *(_BYTE *)(this + 1748) = 1;
        (*(void (__thiscall **)(int, int, _DWORD))(v3 + 488))(this, 2, 0);
      }
      MissionControl = MissionClass::GetMissionControl((_DWORD *)this);
      return Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
    }
    else if ( *(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(this, 0) )
    {
      if ( !*(_DWORD *)(this + 1492) )
      {
        v8 = *(_DWORD *)this;
        *(_BYTE *)(this + 1748) = 1;
        (*(void (__thiscall **)(int, _DWORD, int))(v8 + 1156))(this, 0, 1);
      }
      return 1;
    }
    else
    {
      v6 = *(_DWORD *)this;
      v15 = *(_DWORD *)(this + 156);
      v16 = *(_DWORD *)(this + 160);
      v17 = *(_DWORD *)(this + 164);
      v7 = Coord::To_Cell(&MEMORY[0x87F7E8], &v15);
      (*(void (__thiscall **)(int, void *, int))(v6 + 1152))(this, v7, 1);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 488))(this, 2, 0);
      return 1;
    }
  }
  if ( MEMORY[0x889ECC] )
  {
    if ( *(_DWORD *)(this + 764) || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 684))(this) )
      goto LABEL_14;
LABEL_26:
    if ( !Team::AllMembersValid((int *)this) )
    {
      v11 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)this + 1320))(
              this,
              *(_DWORD *)(this + 1732) + 1000,
              0,
              0);
      if ( v11 )
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 488))(this, 7, 0);
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 1152))(this, v11, 1);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 968))(this, 0);
        return 1;
      }
    }
    goto LABEL_14;
  }
  if ( MEMORY[0x889ECD] )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 684))(this)
      && *(_DWORD *)(this + 764) < *(_DWORD *)(*(_DWORD *)(this + 1732) + 1668) / 2 )
    {
      goto LABEL_26;
    }
  }
  else if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 684))(this)
         && *(_DWORD *)(this + 764) < *(_DWORD *)(*(_DWORD *)(this + 1732) + 1668) )
  {
    goto LABEL_26;
  }
LABEL_14:
  v9 = *(_DWORD *)(this + 764);
  if ( v9 != -1 && v9 < *(_DWORD *)(*(_DWORD *)(this + 1732) + 1668) / 2 )
  {
    if ( Team::AllMembersValid((int *)this) )
    {
      Member = Team::GetMember((_DWORD *)this, 0);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6 )
      {
        if ( *(_BYTE *)(*(_DWORD *)(Team::GetMember((_DWORD *)this, 0) + 1312) + 5802) )
          return 1;
      }
    }
  }
  if ( *(_DWORD *)(this + 692) )
  {
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 488))(this, 1, 0);
    return 1;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 684))(this) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 456))(this) || Team::AllMembersValid((int *)this) )
    {
      if ( !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) )
      {
        v15 = *(_DWORD *)(this + 156);
        v16 = *(_DWORD *)(this + 160);
        v17 = *(_DWORD *)(this + 164);
        v12 = CellClass::ScanOccupiers(&v15);
        if ( v12 )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 968))(this, v12);
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 488))(this, 1, 0);
        }
      }
      if ( !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540))
        || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 84))(this) )
      {
        return FootClass::FindMovePosition(this);
      }
      else
      {
        v13 = MissionClass::GetMissionControl((_DWORD *)this);
        v14 = Math::RoundToInt(*((double *)v13 + 2) * 900.0);
        return v14 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2);
      }
    }
    else
    {
      return 45;
    }
  }
  else
  {
    return 45;
  }
}

/* ASM:
sub     esp, 0Ch
push    esi
mov     esi, ecx
push    edi
mov     ecx, [esi+6C4h]
mov     eax, [ecx]
call    dword ptr [eax+0BCh]
mov     edx, [esi]
mov     ecx, esi
mov     edi, eax
call    dword ptr [edx+1C8h]
cmp     eax, edi
jnz     loc_41A6B7
mov     eax, [esi+5D4h]
test    eax, eax
jz      short loc_41A62D
mov     eax, [esi+5A4h]
test    eax, eax
jz      short loc_41A612
mov     eax, [esi]
push    0
push    2
mov     ecx, esi
mov     byte ptr [esi+6D4h], 1
call    dword ptr [eax+1E8h]

loc_41A612:                             ; CODE XREF: AircraftClass__GetMissionTimer+3B↑j
mov     ecx, esi
call    MissionClass__GetMissionControl
fld     qword ptr [eax+10h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
pop     edi
pop     esi
add     esp, 0Ch
retn
; ---------------------------------------------------------------------------

loc_41A62D:                             ; CODE XREF: AircraftClass__GetMissionTimer+31↑j
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+3F8h]
cmp     dword ptr [eax], 0
jnz     short loc_41A68D
lea     eax, [esi+9Ch]
mov     edi, [esi]
push    1
mov     ecx, [eax]
mov     [esp+18h+var_C], ecx
lea     ecx, [esp+18h+var_C]
mov     edx, [eax+4]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+1Ch+var_8], edx
mov     eax, [eax+8]
mov     [esp+1Ch+var_4], eax
call    Coord__To_Cell
push    eax
mov     ecx, esi
call    dword ptr [edi+480h]
mov     edx, [esi]
push    0
push    2
mov     ecx, esi
call    dword ptr [edx+1E8h]
pop     edi
mov     eax, 1
pop     esi
add     esp, 0Ch
retn
; ---------------------------------------------------------------------------

loc_41A68D:                             ; CODE XREF: AircraftClass__GetMissionTimer+7C↑j
mov     eax, [esi+5D4h]
test    eax, eax
jnz     short loc_41A6AC
mov     eax, [esi]
push    1
push    0
mov     ecx, esi
mov     byte ptr [esi+6D4h], 1
call    dword ptr [eax+484h]

loc_41A6AC:                             ; CODE XREF: AircraftClass__GetMissionTimer+D5↑j
pop     edi
mov     eax, 1
pop     esi
add     esp, 0Ch
retn
; ---------------------------------------------------------------------------

loc_41A6B7:                             ; CODE XREF: AircraftClass__GetMissionTimer+23↑j
mov     al, ds:889ECCh
test    al, al
jz      loc_41A758
mov     eax, [esi+2FCh]
test    eax, eax
jnz     short loc_41A6E0
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2ACh]
test    al, al
jnz     loc_41A7BD

loc_41A6E0:                             ; CODE XREF: AircraftClass__GetMissionTimer+10C↑j
; AircraftClass__GetMissionTimer+1AD↓j ...
mov     ecx, [esi+2FCh]
cmp     ecx, 0FFFFFFFFh
jz      loc_41A822
mov     eax, [esi+6C4h]
mov     eax, [eax+684h]
cdq
sub     eax, edx
sar     eax, 1
cmp     ecx, eax
jge     loc_41A822
mov     ecx, esi
call    Team__AllMembersValid
test    al, al
jz      loc_41A822
push    0
mov     ecx, esi
call    Team__GetMember
mov     edx, [eax]
mov     ecx, eax
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     loc_41A822
push    0
mov     ecx, esi
call    Team__GetMember
mov     eax, [eax+520h]
mov     cl, [eax+16AAh]
test    cl, cl
jz      loc_41A822
pop     edi
mov     eax, 1
pop     esi
add     esp, 0Ch
retn
; ---------------------------------------------------------------------------

loc_41A758:                             ; CODE XREF: AircraftClass__GetMissionTimer+FE↑j
mov     al, ds:889ECDh
test    al, al
jz      short loc_41A793
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2ACh]
test    al, al
jz      loc_41A6E0
mov     ecx, [esi+6C4h]
mov     eax, [ecx+684h]
mov     ecx, [esi+2FCh]
cdq
sub     eax, edx
sar     eax, 1
cmp     ecx, eax
jl      short loc_41A7BD
jmp     loc_41A6E0
; ---------------------------------------------------------------------------

loc_41A793:                             ; CODE XREF: AircraftClass__GetMissionTimer+19F↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2ACh]
test    al, al
jz      loc_41A6E0
mov     eax, [esi+6C4h]
mov     ecx, [esi+2FCh]
cmp     ecx, [eax+684h]
jge     loc_41A6E0

loc_41A7BD:                             ; CODE XREF: AircraftClass__GetMissionTimer+11A↑j
; AircraftClass__GetMissionTimer+1CC↑j
mov     ecx, esi
call    Team__AllMembersValid
test    al, al
jnz     loc_41A6E0
mov     eax, [esi+6C4h]
mov     edx, [esi]
push    0
add     eax, 3E8h
push    0
push    eax
mov     ecx, esi
call    dword ptr [edx+528h]
mov     edi, eax
test    edi, edi
jz      loc_41A6E0
mov     edx, [esi]
push    0
push    7
mov     ecx, esi
call    dword ptr [edx+1E8h]
mov     eax, [esi]
push    1
push    edi
mov     ecx, esi
call    dword ptr [eax+480h]
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+3C8h]
pop     edi
mov     eax, 1
pop     esi
add     esp, 0Ch
retn
; ---------------------------------------------------------------------------

loc_41A822:                             ; CODE XREF: AircraftClass__GetMissionTimer+129↑j
; AircraftClass__GetMissionTimer+142↑j ...
mov     eax, [esi+2B4h]
test    eax, eax
jz      short loc_41A845
mov     edx, [esi]
push    0
push    1
mov     ecx, esi
call    dword ptr [edx+1E8h]
pop     edi
mov     eax, 1
pop     esi
add     esp, 0Ch
retn
; ---------------------------------------------------------------------------

loc_41A845:                             ; CODE XREF: AircraftClass__GetMissionTimer+26A↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2ACh]
test    al, al
jnz     short loc_41A85E
pop     edi
mov     eax, 2Dh ; '-'
pop     esi
add     esp, 0Ch
retn
; ---------------------------------------------------------------------------

loc_41A85E:                             ; CODE XREF: AircraftClass__GetMissionTimer+291↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1C8h]
test    eax, eax
jnz     short loc_41A882
mov     ecx, esi
call    Team__AllMembersValid
test    al, al
jnz     short loc_41A882
pop     edi
mov     eax, 2Dh ; '-'
pop     esi
add     esp, 0Ch
retn
; ---------------------------------------------------------------------------

loc_41A882:                             ; CODE XREF: AircraftClass__GetMissionTimer+2AA↑j
; AircraftClass__GetMissionTimer+2B5↑j
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     short loc_41A8DC
lea     eax, [esi+9Ch]
mov     ecx, [esi+9Ch]
mov     [esp+14h+var_C], ecx
lea     ecx, [esp+14h+var_C]
mov     edx, [eax+4]
push    ecx
mov     ecx, [esi+21Ch]
mov     [esp+18h+var_8], edx
mov     eax, [eax+8]
mov     [esp+18h+var_4], eax
call    CellClass__ScanOccupiers
test    eax, eax
jz      short loc_41A8DC
mov     edx, [esi]
push    eax
mov     ecx, esi
call    dword ptr [edx+3C8h]
mov     eax, [esi]
push    0
push    1
mov     ecx, esi
call    dword ptr [eax+1E8h]

loc_41A8DC:                             ; CODE XREF: AircraftClass__GetMissionTimer+2CF↑j
; AircraftClass__GetMissionTimer+301↑j
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jz      short loc_41A929
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+54h]
test    al, al
jnz     short loc_41A929
mov     ecx, esi
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
add     esp, 0Ch
retn
; ---------------------------------------------------------------------------

loc_41A929:                             ; CODE XREF: AircraftClass__GetMissionTimer+329↑j
; AircraftClass__GetMissionTimer+334↑j
mov     ecx, esi
call    FootClass__FindMovePosition
pop     edi
pop     esi
add     esp, 0Ch
retn
*/
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
// [IDA decompile]
int __thiscall AircraftClass::Destruct(void **this)
{
  void **v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int Vtable3; // eax
  int v7; // ebx
  int v8; // ebp
  int v9; // esi
  void **v10; // edx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  _DWORD *v14; // eax
  void **v16; // [esp+10h] [ebp-4h] BYREF

  v2 = this + 1;
  *this = &AircraftClass::`vftable';
  *(this + 2) = &AircraftClass::`vftable';
  *(this + 3) = &AircraftClass::`vftable';
  *(this + 1) = &AircraftClass::`vftable';
  *(this + 432) = &AircraftClass::`vftable';
  if ( LOBYTE(MEMORY[0x87F7E8][539758]) )
  {
    v3 = (int)*(this + 433);
    if ( v3 )
    {
      if ( HouseClass::CanBuild(*(this + 135), v3, 0, 0) == -1 )
        *((_BYTE *)*(this + 135) + 508) = 1;
      TechnoClass::CleanupAll(this, 0);
      v4 = (int)*(this + 373);
      if ( v4 )
      {
        TeamClass::LiberateMember_Start(v4, (int)this, 0xFFFFFFFF, 0);
        *(this + 373) = 0;
      }
      HouseClass::DecrementUnitCount(*(this + 135), this);
      TechnoClass::CleanupDirection(this);
      *(this + 433) = 0;
    }
  }
  AbstractClass::AnnounceExpiredPointer(this, 1);
  v16 = this;
  v5 = (*(int (__thiscall **)(_DWORD *, void ***))(MEMORY[0x87F7E8][539370] + 16))(&MEMORY[0x87F7E8][539370], &v16);
  if ( v5 != -1 && v5 < MEMORY[0x87F7E8][539374] )
  {
    --MEMORY[0x87F7E8][539374];
    for ( ;
          v5 < MEMORY[0x87F7E8][539374];
          *(_DWORD *)(MEMORY[0x87F7E8][539371] + 4 * v5 - 4) = *(_DWORD *)(MEMORY[0x87F7E8][539371] + 4 * v5) )
    {
      ++v5;
    }
  }
  Vtable3 = AbstractClass::GetVtable3((int)v2);
  v7 = dword_A8ED54[130748];
  v16 = (void **)Vtable3;
  if ( dword_A8ED54[130748] )
  {
    if ( !LOBYTE(dword_A8ED54[130750]) )
    {
      qsort((void *)dword_A8ED54[130747], dword_A8ED54[130748], 8, CompareFunction);
      v7 = dword_A8ED54[130748];
      dword_A8ED54[130751] = 0;
      LOBYTE(dword_A8ED54[130750]) = 1;
    }
    v8 = dword_A8ED54[130747];
    v9 = v7;
    while ( v9 > 0 )
    {
      v10 = *(void ***)(v8 + 8 * (v9 / 2));
      v11 = v8 + 8 * (v9 / 2);
      if ( (int)v16 >= (int)v10 )
      {
        if ( v10 == v16 )
        {
          if ( v11 )
          {
            v12 = (v11 - dword_A8ED54[130747]) >> 3;
            if ( v12 != -1 )
            {
              v13 = v12 + 1;
              if ( v13 < v7 )
              {
                do
                {
                  v14 = (_DWORD *)(dword_A8ED54[130747] + 8 * v13++);
                  *(v14 - 2) = *v14;
                  *(v14 - 1) = v14[1];
                  v7 = dword_A8ED54[130748];
                }
                while ( v13 < dword_A8ED54[130748] );
              }
              dword_A8ED54[130748] = v7 - 1;
              *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748]) = 0;
              *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748] + 4) = 0;
              dword_A8ED54[130751] = 0;
            }
          }
          break;
        }
        v8 = v11 + 8;
        v9 += -1 - v9 / 2;
      }
      else
      {
        v9 /= 2;
      }
    }
  }
  *((_BYTE *)this + 144) = 0;
  return FootClass::Destruct(this);
}

/* ASM:
push    ecx
push    ebx
push    ebp
push    esi
push    edi
mov     edi, ecx
lea     esi, [edi+4]
mov     dword ptr [edi], offset ??_7AircraftClass@@6B@ ; const AircraftClass::`vftable'
mov     dword ptr [edi+8], offset ??_7AircraftClass@@6B@_1 ; const AircraftClass::`vftable'
mov     dword ptr [edi+0Ch], offset ??_7AircraftClass@@6B@_2 ; const AircraftClass::`vftable'
mov     dword ptr [esi], offset ??_7AircraftClass@@6B@_0 ; const AircraftClass::`vftable'
mov     dword ptr [edi+6C0h], offset ??_7AircraftClass@@6B@_3 ; const AircraftClass::`vftable'
mov     al, ds:0A8E9A0h
test    al, al
jz      short loc_41411F
mov     eax, [edi+6C4h]
xor     ebp, ebp
cmp     eax, ebp
jz      short loc_414121
mov     ecx, [edi+21Ch]
push    ebp
push    ebp
push    eax
call    HouseClass__CanBuild
cmp     eax, 0FFFFFFFFh
jnz     short loc_4140E3
mov     eax, [edi+21Ch]
mov     byte ptr [eax+1FCh], 1

loc_4140E3:                             ; CODE XREF: AircraftClass__Destruct+54↑j
push    ebp
mov     ecx, edi
call    TechnoClass__CleanupAll
mov     ecx, [edi+5D4h]
cmp     ecx, ebp
jz      short loc_414104
push    ebp
push    0FFFFFFFFh
push    edi
call    TeamClass__LiberateMember_Start
mov     [edi+5D4h], ebp

loc_414104:                             ; CODE XREF: AircraftClass__Destruct+73↑j
mov     ecx, [edi+21Ch]
push    edi
call    HouseClass__DecrementUnitCount
mov     ecx, edi
call    TechnoClass__CleanupDirection
mov     [edi+6C4h], ebp
jmp     short loc_414121
; ---------------------------------------------------------------------------

loc_41411F:                             ; CODE XREF: AircraftClass__Destruct+35↑j
xor     ebp, ebp

loc_414121:                             ; CODE XREF: AircraftClass__Destruct+41↑j
; AircraftClass__Destruct+9D↑j
mov     dl, 1
mov     ecx, edi        ; void **
call    AbstractClass__AnnounceExpiredPointer
mov     edx, ds:0A8E390h
lea     ecx, [esp+14h+var_4]
push    ecx
mov     ecx, 0A8E390h
mov     [esp+18h+var_4], edi
call    dword ptr [edx+10h]
cmp     eax, 0FFFFFFFFh
jz      short loc_414173
mov     ecx, ds:0A8E3A0h
cmp     eax, ecx
jge     short loc_414173
dec     ecx
cmp     eax, ecx
mov     ds:0A8E3A0h, ecx
jge     short loc_414173

loc_41415B:                             ; CODE XREF: AircraftClass__Destruct+F1↓j
mov     ecx, ds:0A8E394h
inc     eax
mov     edx, [ecx+eax*4]
mov     [ecx+eax*4-4], edx
mov     ecx, ds:0A8E3A0h
cmp     eax, ecx
jl      short loc_41415B

loc_414173:                             ; CODE XREF: AircraftClass__Destruct+C4↑j
; AircraftClass__Destruct+CE↑j ...
push    esi
call    AbstractClass__GetVtable3
mov     ebx, dword_A8ED54+7FAF0h
mov     [esp+14h+var_4], eax
cmp     ebx, ebp
jz      loc_41426D
mov     al, byte ptr dword_A8ED54+7FAF8h
test    al, al
jnz     short loc_4141BD
mov     eax, dword_A8ED54+7FAECh
push    offset CompareFunction ; CompareFunction
push    8               ; SizeOfElements
push    ebx             ; NumOfElements
push    eax             ; Base
call    _qsort
mov     ebx, dword_A8ED54+7FAF0h
add     esp, 10h
mov     dword_A8ED54+7FAFCh, ebp
mov     byte ptr dword_A8ED54+7FAF8h, 1

loc_4141BD:                             ; CODE XREF: AircraftClass__Destruct+112↑j
mov     ebp, dword_A8ED54+7FAECh
mov     esi, ebx
test    esi, esi
jle     loc_41426D

loc_4141CD:                             ; CODE XREF: AircraftClass__Destruct+178↓j
mov     eax, esi
cdq
sub     eax, edx
sar     eax, 1
mov     edx, [ebp+eax*8+0]
lea     ecx, [ebp+eax*8+0]
cmp     [esp+14h+var_4], edx
jge     short loc_4141E6
mov     esi, eax
jmp     short loc_4141F6
; ---------------------------------------------------------------------------

loc_4141E6:                             ; CODE XREF: AircraftClass__Destruct+160↑j
cmp     edx, [esp+14h+var_4]
jz      short loc_41420E
lea     ebp, [ecx+8]
or      ecx, 0FFFFFFFFh
sub     ecx, eax
add     esi, ecx

loc_4141F6:                             ; CODE XREF: AircraftClass__Destruct+164↑j
test    esi, esi
jg      short loc_4141CD
mov     ecx, edi
mov     byte ptr [edi+90h], 0
call    FootClass__Destruct
pop     edi
pop     esi
pop     ebp
pop     ebx
pop     ecx
retn
; ---------------------------------------------------------------------------

loc_41420E:                             ; CODE XREF: AircraftClass__Destruct+16A↑j
test    ecx, ecx
jz      short loc_41426D
sub     ecx, dword_A8ED54+7FAECh
sar     ecx, 3
cmp     ecx, 0FFFFFFFFh
jz      short loc_41426D
inc     ecx
cmp     ecx, ebx
jge     short loc_414244

loc_414225:                             ; CODE XREF: AircraftClass__Destruct+1C2↓j
mov     edx, dword_A8ED54+7FAECh
lea     eax, [edx+ecx*8]
inc     ecx
mov     edx, [eax]
mov     [eax-8], edx
mov     edx, [eax+4]
mov     [eax-4], edx
mov     ebx, dword_A8ED54+7FAF0h
cmp     ecx, ebx
jl      short loc_414225

loc_414244:                             ; CODE XREF: AircraftClass__Destruct+1A3↑j
mov     edx, dword_A8ED54+7FAECh
dec     ebx
xor     ecx, ecx
xor     eax, eax
mov     dword_A8ED54+7FAF0h, ebx
mov     [edx+ebx*8], eax
mov     eax, dword_A8ED54+7FAF0h
mov     edx, dword_A8ED54+7FAECh
mov     [edx+eax*8+4], ecx
mov     dword_A8ED54+7FAFCh, ecx

loc_41426D:                             ; CODE XREF: AircraftClass__Destruct+105↑j
; AircraftClass__Destruct+147↑j ...
mov     ecx, edi
mov     byte ptr [edi+90h], 0
call    FootClass__Destruct
pop     edi
pop     esi
pop     ebp
pop     ebx
pop     ecx
retn
*/
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
// [IDA decompile]
bool __thiscall AircraftClass::_vt21(_BYTE *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 433);
  if ( v1 != *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1248) && v1 != *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1300) )
    return ObjectClass::IsHeightAboveThreshold_0((#374 *)this);
  if ( !*((_DWORD *)this + 413) )
    WinAPI::Wrapper(-2147467261);
  return (*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 128))(*((_DWORD *)this + 413)) != 0;
}

/* ASM:
push    esi
mov     esi, ecx
mov     ecx, ds:8871E0h
mov     eax, [esi+6C4h]
cmp     eax, [ecx+4E0h]
jz      short loc_41B948
cmp     eax, [ecx+514h]
jz      short loc_41B948
mov     ecx, esi        ; this
call    ObjectClass__IsHeightAboveThreshold_0
pop     esi
retn
; ---------------------------------------------------------------------------

loc_41B948:                             ; CODE XREF: AircraftClass__IsHeightAboveThreshold+15↑j
; AircraftClass__IsHeightAboveThreshold+1D↑j
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_41B95C
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_41B95C:                             ; CODE XREF: AircraftClass__IsHeightAboveThreshold+30↑j
mov     esi, [esi+674h]
push    esi
mov     eax, [esi]
call    dword ptr [eax+80h]
neg     al
sbb     eax, eax
pop     esi
neg     eax
retn
*/
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
