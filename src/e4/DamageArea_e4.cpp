// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4CD600
int DamageArea::ApplyScatter()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DamageArea_ApplyScatter(int this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int *v10; // ecx
  int v11; // edi
  _DWORD *v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int result; // eax
  void **v17; // esi
  int v18; // ebx
  void *VersusMultiplier; // eax
  int *v20; // ecx
  _DWORD *v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ebx
  int v26; // edi
  unsigned int v27; // ebx
  unsigned int v28; // ebp
  double v29; // st7
  double v30; // st7
  int v31; // eax
  int v32; // ecx
  int v33; // edi
  int v34; // eax
  int v35; // eax
  int *v36; // eax
  int v37; // ecx
  int v38; // edi
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // ecx
  _DWORD *v43; // ebp
  int v44; // ebx
  int v45; // ebp
  double v46; // st7
  int v47; // eax
  bool v48; // bl
  int v49; // ebp
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // ebx
  int v54; // ebx
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // edx
  int v59; // eax
  int v60; // eax
  int v61; // edi
  int *v62; // ecx
  int v63; // ecx
  int v64; // kr44_4
  _DWORD *v65; // eax
  int v66; // edi
  double v67; // st7
  unsigned int v68; // ebp
  unsigned int v69; // ebx
  double v70; // st7
  double v71; // st7
  int v72; // ecx
  int *v73; // ecx
  int (__stdcall ***v74)(_DWORD, void *, double *); // eax
  int v75; // edi
  int v76; // eax
  double v77; // st7
  double v78; // st6
  double v79; // st6
  int *v80; // edi
  int v81; // edx
  double v82; // st7
  int v83; // eax
  int v84; // eax
  int v85; // ecx
  double v86; // st7
  int v87; // eax
  int *v88; // ecx
  int v89; // edi
  int v90; // ebx
  _WORD *v91; // eax
  int v92; // eax
  int *v93; // ecx
  double v95; // st7
  char v96; // c0
  double v97; // st7
  __int64 v98; // [esp+30h] [ebp-70h]
  char v99; // [esp+4Bh] [ebp-55h]
  int v100; // [esp+4Ch] [ebp-54h]
  double v101; // [esp+50h] [ebp-50h] BYREF
  double v102; // [esp+58h] [ebp-48h] BYREF
  int v103; // [esp+64h] [ebp-3Ch] BYREF
  double v104; // [esp+68h] [ebp-38h] BYREF
  int v105; // [esp+70h] [ebp-30h]
  double v106; // [esp+78h] [ebp-28h] BYREF
  int v107; // [esp+80h] [ebp-20h]
  double v108; // [esp+88h] [ebp-18h] BYREF
  unsigned int v109; // [esp+90h] [ebp-10h]
  int v110; // [esp+94h] [ebp-Ch] BYREF
  int v111; // [esp+98h] [ebp-8h]
  int v112; // [esp+9Ch] [ebp-4h]

  v2 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 440))(
                    this->q00C,
                    &v106);
  v3 = (_DWORD *)(this->q00C + 1376);
  v103 = v2;
  if ( v2 != *v3 && (*(unsigned __int8 (__stdcall **)(int))(this->q004 + 128))(this + 4) )
    Coord::ToGridIndex((char *)g_CellClassManager, this->q00C, *(_DWORD *)(this->q00C + 1376), v2);
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 388))(this->q00C) == 7
    && *(_BYTE *)(this + 92) )
  {
    *(_BYTE *)(this + 92) = 0;
  }
  v4 = this + 4;
  if ( (*(unsigned __int8 (__stdcall **)(int))(this->q004 + 96))(this + 4)
    && *(_DWORD *)(this->q00C + 108)
    || !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(this->q00C) )
  {
    v20 = *(int **)(this + 12);
    if ( v20[27] > 0 )
    {
      if ( v20[361] )
      {
        if ( (*(int (__thiscall **)(int *))(*v20 + 388))(v20) == 5 )
        {
          v21 = *(_DWORD **)(this + 12);
          if ( v21[45] == -1 && !*(_BYTE *)(this + 24) )
            (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v21 + 488))(v21, 2, 0);
        }
      }
    }
LABEL_34:
    result = (*(int (__stdcall **)(int))(*(_DWORD *)v4 + 16))(this + 4);
    if ( !(_BYTE)result )
      return result;
    v22 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C);
    v23 = this->q00C;
    v103 = v22;
    v99 = *(_BYTE *)(v22 + 3221);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v23 + 292))(v23, 0);
    v24 = this->q00C;
    v108 = *(double *)(v24 + 156);
    v109 = *(_DWORD *)(v24 + 164);
    v25 = *ProgressTimer::GetValue((_WORD *)(v24 + 904), &v106);
    LODWORD(v101) = (*(int (__stdcall **)(int))(*(_DWORD *)v4 + 132))(this + 4);
    if ( SLODWORD(v101) > 0 )
    {
      v26 = v109;
      v104 = (double)((__int16)v25 - 0x3FFF) * -0.00009587672516830327;
      v27 = HIDWORD(v104);
      v28 = LODWORD(v104);
      v102 = (double)SHIDWORD(v108);
      v101 = (double)SLODWORD(v101);
      v29 = Math::SinCos(v104);
      LODWORD(v102) = Math::RoundToInt(v102 - v29 * v101);
      v30 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v27, v28)));
      v31 = Math::RoundToInt(v30 * v101 + (double)SLODWORD(v108));
      Coord::Subtract(&v104, v31, SLODWORD(v102), v26);
      v109 = v105;
      v108 = v104;
      LODWORD(v102) = *(_DWORD *)CellStruct::Set(&v104, SLODWORD(v104) / 256, SHIDWORD(v104) / 256);
      LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v102);
    }
    LOWORD(v102) = SLODWORD(v108) / 256;
    WORD1(v102) = SHIDWORD(v108) / 256;
    if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v102)
      || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 1244))(this->q00C) )
    {
      goto LABEL_50;
    }
    v32 = this->q00C;
    if ( v32 && (*(int (__thiscall **)(int))(*(_DWORD *)v32 + 44))(v32) == 2 )
    {
      v33 = this->q00C;
      v34 = v33 ? ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v33 + 44))(this->q00C) == 2 ? v33 : 0) : 0;
      if ( *(_BYTE *)(*(_DWORD *)(v34 + 1732) + 3595) )
        goto LABEL_50;
    }
    LOWORD(v102) = SLODWORD(v108) / 256;
    WORD1(v102) = SHIDWORD(v108) / 256;
    LODWORD(v101) = LODWORD(v102);
    v35 = (__int16)*(_DWORD *)DamageArea::CalcScatterOffset(&v106, &v101) >= g_AircraftTrackerPool / 2
        ? LODWORD(v108) - 128
        : LODWORD(v108) + 128;
    LODWORD(v108) = v35;
    LOWORD(v102) = v35 / 256;
    WORD1(v102) = SHIDWORD(v108) / 256;
    if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v102)
      || (v36 = RandomCoordScatter(&v110, (int *)&v108, 64, 0),
          v108 = *(double *)v36,
          v109 = v36[2],
          LOWORD(v102) = SLODWORD(v108) / 256,
          WORD1(v102) = SHIDWORD(v108) / 256,
          LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v102)) )
    {
LABEL_50:
      (*(void (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 436))(this->q00C, &v108);
    }
    v37 = this->q00C;
    LODWORD(v101) = 0;
    v38 = (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 456))(v37);
    v39 = this->q00C;
    if ( !*(_BYTE *)(v39 + 140) && v38 >= MEMORY[0x8B3CAC] )
    {
      v40 = v39 + 156;
      v106 = *(double *)v40;
      v107 = *(_DWORD *)(v40 + 8);
      if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v106) + 80) & 0x100) != 0 )
      {
        v38 -= MEMORY[0x8B3CAC];
        LODWORD(v101) = MEMORY[0x8B3CAC];
      }
    }
    v41 = this->q070;
    v42 = this->q008;
    v112 = *(_DWORD *)(this + 36);
    v43 = (_DWORD *)(this->q00C + 156);
    v44 = *(_DWORD *)(this->q00C + 160);
    LODWORD(v106) = v41 - *v43;
    v45 = v43[2];
    HIDWORD(v106) = v42 - v44;
    v112 = v45;
    v46 = Math::Sqrt((double)(v42 - v44) * (double)(v42 - v44) + (double)SLODWORD(v106) * (double)SLODWORD(v106));
    LODWORD(v102) = Math::RoundToInt(v46);
    if ( v38 >= *(_DWORD *)(this + 56) || (v47 = this->q00C, *(int *)(v47 + 108) <= 0) )
    {
      v54 = LODWORD(v101);
    }
    else
    {
      v48 = 0;
      v100 = 0;
      if ( v47 )
      {
        v49 = (**(int (__stdcall ***)(int, void *, double *))v47)(v47, &unk_822410, &v104);
        if ( v49 >= 0 )
        {
          LODWORD(v106) = LODWORD(v104);
          v50 = LODWORD(v104);
        }
        else
        {
          v50 = 0;
        }
        v100 = v50;
        if ( v49 < 0 && v49 != -2147467262 )
          WinAPI::Wrapper(v49);
        if ( v50 )
          v48 = (*(int (__stdcall **)(int))(*(_DWORD *)v50 + 20))(v50) != 0;
      }
      v51 = *(_DWORD *)(this + 56);
      if ( v99 )
      {
        v52 = v51 - v38;
        if ( v52 > 16 )
          v52 = 16;
      }
      else
      {
        v52 = v51 - v38;
        v53 = v48 ? 10 : 20;
        if ( v53 < v52 )
          v52 = v53;
      }
      v54 = LODWORD(v101);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 460))(
        this->q00C,
        LODWORD(v101) + v38 + v52);
      *(_BYTE *)(this->q00C + 140) = 0;
      if ( v100 )
        (*(void (__stdcall **)(int))(*(_DWORD *)v100 + 8))(v100);
    }
    v55 = *(_DWORD *)(this + 56);
    if ( v38 <= v55 && *(_DWORD *)(this->q00C + 108) )
    {
LABEL_114:
      v73 = *(int **)(this + 12);
      if ( v73[27] > 0
        && !*(_BYTE *)(this + 81)
        && (!this->q050 || (*(int (__thiscall **)(int *))(*v73 + 456))(v73) >= *(_DWORD *)(this + 56) / 2)
        && (this->q070 != MEMORY[0x8B3C78]
         || this->q008 != MEMORY[0x8B3C7C]
         || *(_DWORD *)(this + 36) != MEMORY[0x8B3C80]) )
      {
        v74 = *(int (__stdcall ****)(_DWORD, void *, double *))(this + 12);
        v75 = 0;
        if ( v74 )
        {
          v76 = (**v74)(v74, &unk_822410, &v106);
          v75 = v76 < 0 ? 0 : LODWORD(v106);
          if ( v76 < 0 && v76 != -2147467262 )
            WinAPI::Wrapper(v76);
        }
        if ( (unsigned __int8)DamageArea::CheckOccupancyEligibility(this) )
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C) + 3367) )
          {
            if ( this->q050 || !*(_DWORD *)(this->q00C + 692) )
            {
              this->q100 = 0;
              *(_DWORD *)(this + 68) = 0;
            }
            else
            {
              this->q100 = 0;
              *(_DWORD *)(this + 68) = 1072693248;
            }
          }
          else
          {
            v77 = (double)SLODWORD(v102);
            v78 = v77 / (double)*(int *)(v103 + 760);
            if ( v78 > 1.0 )
              v78 = 1.0;
            *(double *)(this + 64) = v78;
            if ( v78 < 0.1 )
            {
              if ( SLODWORD(v102) <= 85 )
              {
                v79 = *(double *)(this + 72) * 0.5;
                this->q100 = 0;
                *(_DWORD *)(this + 68) = 0;
                *(double *)(this + 72) = v79;
              }
              else
              {
                this->q100 = -1717986918;
                *(_DWORD *)(this + 68) = 1069128089;
              }
            }
            if ( v77 < *(double *)(this + 72) )
              *(double *)(this + 72) = v77;
            if ( *(double *)(this + 64) == 0.0 && *(double *)(this + 72) == 0.0 && SLODWORD(v102) > 0 )
            {
              *(_DWORD *)(this + 72) = -1717986918;
              *(_DWORD *)(this + 76) = 1068079513;
            }
          }
        }
        else
        {
          this->q100 = 0;
          *(_DWORD *)(this + 68) = 1072693248;
        }
        if ( v75 )
          (*(void (__stdcall **)(int))(*(_DWORD *)v75 + 8))(v75);
      }
      if ( v99 )
      {
        if ( *(int *)(this->q00C + 108) > 0 && *(double *)(this + 72) > 0.0 && !this->q050 )
        {
          LODWORD(v106) = *(_DWORD *)(v103 + 760);
          if ( SLODWORD(v102) < SLODWORD(v106) )
          {
            v80 = *(int **)(this + 12);
            v81 = *v80;
            v106 = 1.0 - ((double)SLODWORD(v102) - (double)SLODWORD(v106) * 0.6) / ((double)SLODWORD(v106) * 0.4);
            v82 = *(double *)((*(int (__thiscall **)(int *))(v81 + 132))(v80) + 944);
            v83 = *v80;
            v104 = v82;
            v84 = (*(int (__thiscall **)(int *))(v83 + 132))(v80);
            v85 = this->q00C;
            if ( v106 * *(double *)(v84 + 944) <= v104 )
            {
              v87 = (*(int (__thiscall **)(int))(*(_DWORD *)v85 + 132))(v85);
              v86 = v106 * *(double *)(v87 + 944);
            }
            else
            {
              v86 = *(double *)((*(int (__thiscall **)(int))(*(_DWORD *)v85 + 132))(v85) + 944);
            }
            *(float *)(this->q00C + 744) = v86;
          }
        }
      }
      if ( !*(_BYTE *)(this + 92) )
      {
        v88 = *(int **)(this + 12);
        if ( v88[27] > 0 && !*(_BYTE *)(this + 81) && !this->q050 )
        {
          v89 = this->q070 / 256;
          v90 = this->q008 / 256;
          v91 = (_WORD *)(*(int (__thiscall **)(int *, double *))(*v88 + 440))(v88, &v106);
          if ( (_WORD)v89 == *v91 && (_WORD)v90 == v91[1] && *(double *)(this + 64) == 0.0 )
          {
            v92 = this->q00C;
            if ( !*(_DWORD *)(v92 + 692) || !*(_DWORD *)(v92 + 764) )
              LocomotionClass::CheckBridgeBlock(this);
          }
        }
      }
      v93 = *(int **)(this + 12);
      if ( v93[27] <= 0 )
        return (*(int (__thiscall **)(int *, int))(*v93 + 292))(v93, 1);
      v95 = *(double *)(this + 72);
      if ( v96 )
      {
        v97 = v95 + 0.1;
        if ( v97 >= *(double *)(this + 64) )
LABEL_171:
          v97 = *(double *)(this + 64);
      }
      else
      {
        if ( v95 <= *(double *)(this + 64) )
          return (*(int (__thiscall **)(int *, int))(*v93 + 292))(v93, 1);
        v97 = *(double *)(this + 72) - 0.1;
        if ( v97 <= *(double *)(this + 64) )
          goto LABEL_171;
      }
      *(double *)(this + 72) = v97;
      return (*(int (__thiscall **)(int *, int))(*v93 + 292))(v93, 1);
    }
    v56 = v38 - v55;
    if ( v99 )
    {
      if ( !*(_BYTE *)(this + 81) )
      {
        v59 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C);
        if ( *(_DWORD *)(this + 56) == (*(int (__thiscall **)(int))(*(_DWORD *)v59 + 188))(v59) )
        {
          if ( v38 > 16 )
          {
            v56 = 16;
            goto LABEL_97;
          }
        }
        else if ( v38 > 6 )
        {
          v56 = 6;
          goto LABEL_97;
        }
        v56 = v38;
        goto LABEL_97;
      }
      v57 = v56 / 20 + 10;
      v58 = v57;
      if ( v57 >= 48 )
        v58 = 48;
      if ( v58 < v56 )
      {
        if ( v57 >= 48 )
          v56 = 48;
        else
          v56 = v56 / 20 + 10;
      }
    }
    else
    {
      if ( v56 / 20 < v56 )
        v56 /= 20;
      if ( v56 < 50 )
      {
        if ( v56 <= 20 )
          v56 = 20;
      }
      else
      {
        v56 = 50;
      }
    }
LABEL_97:
    v60 = this->q00C;
    v61 = v38 - v56;
    if ( !*(_DWORD *)(v60 + 108) && v61 <= 1 )
    {
      v61 = 1;
      goto LABEL_105;
    }
    if ( v61 >= 0 )
    {
      if ( v61 )
      {
LABEL_105:
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 460))(this->q00C, v54 + v61);
        v62 = *(int **)(this + 12);
        if ( v62[27] > 0
          && (this->q070 != MEMORY[0x8B3C78]
           || this->q008 != MEMORY[0x8B3C7C]
           || *(_DWORD *)(this + 36) != MEMORY[0x8B3C80])
          && ((*(int (__thiscall **)(int *))(*v62 + 388))(v62) != 7
           || (v63 = *(_DWORD *)(this->q00C + 1444)) == 0
           || (*(int (__thiscall **)(int))(*(_DWORD *)v63 + 44))(v63) != 6
           || !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this->q00C + 1444) + 1312) + 5835)) )
        {
          v64 = this->q008;
          v65 = (_DWORD *)(this->q00C + 156);
          v110 = ((__int16)(this->q070 / 256) << 8) + 128;
          LODWORD(v106) = *v65;
          v111 = ((__int16)(v64 / 256) << 8) + 128;
          HIDWORD(v106) = v65[1];
          v101 = (double)SLODWORD(v106);
          v66 = v65[2];
          v104 = (double)SHIDWORD(v106);
          v67 = Math::CalcAngle(v104 - (double)v111, (double)v110 - v101);
          v106 = (double)((__int16)Math::RoundToInt((v67 - 1.570796326794897) * -10430.06004058427) - 0x3FFF)
               * -0.00009587672516830327;
          v68 = HIDWORD(v106);
          v69 = LODWORD(v106);
          v70 = Math::SinCos(v106);
          LODWORD(v106) = Math::RoundToInt(v104 - v70 * 5.0);
          v71 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v68, v69)));
          v110 = Math::RoundToInt(v71 * 5.0 + v101);
          v111 = LODWORD(v106);
          v72 = this->q00C;
          v112 = v66;
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)v72 + 436))(v72, &v110);
        }
        goto LABEL_114;
      }
    }
    else
    {
      v61 = 0;
    }
    if ( v54 > 0 )
    {
      *(_BYTE *)(v60 + 140) = 1;
      v54 = 0;
    }
    goto LABEL_105;
  }
  v5 = this->q00C;
  v6 = *(_DWORD *)(this + 88);
  if ( *(_DWORD *)(v5 + 108) )
    v7 = v6 + 3;
  else
    v7 = v6 + 1;
  v8 = v5 + 156;
  *(_DWORD *)(this + 88) = v7;
  v108 = *(double *)v8;
  v9 = *(_DWORD *)(this + 88);
  v105 = *(_DWORD *)(v8 + 8);
  v104 = v108;
  v109 = v105 - v9;
  Cell::GetGroundHeight(&v108);
  Coord::To_Cell(&MEMORY[0x87F7E8], &v108);
  LOWORD(v102) = SLODWORD(v108) / 256;
  WORD1(v102) = SHIDWORD(v108) / 256;
  v103 = LODWORD(v102);
  if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v103) )
  {
    RemoveTarget(this->q00C);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 292))(this->q00C, 0);
    (*(void (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 436))(this->q00C, &v108);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 292))(this->q00C, 1);
    Targeting::Readd(*(_DWORD **)(this + 12));
  }
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(this->q00C) > 0 )
    goto LABEL_34;
  GadgetGrid::RemoveItem(g_CellClassManager, this->q00C);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(this->q00C, 0);
  v10 = *(int **)(this + 12);
  v11 = v10[27];
  if ( !v11 )
  {
    LOWORD(v102) = SLODWORD(v108) / 256;
    WORD1(v102) = SHIDWORD(v108) / 256;
    v103 = LODWORD(v102);
    TechnoClass::ComputeCombatDamage(v10, 0);
    v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v103);
    v13 = **(_DWORD **)(this + 12);
    if ( v12[59] == 2 )
    {
      v14 = *(_DWORD *)((*(int (**)(void))(v13 + 132))() + 1340);
      if ( v14 != -1 )
        goto LABEL_23;
      v14 = *((_DWORD *)g_RulesClass_Instance + 128);
    }
    else
    {
      v14 = *(_DWORD *)((*(int (**)(void))(v13 + 132))() + 1344);
      if ( v14 != -1 )
        goto LABEL_23;
      v14 = *((_DWORD *)g_RulesClass_Instance + 129);
    }
    if ( v14 == -1 )
      return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 248))(this->q00C);
LABEL_23:
    v15 = this->q00C + 156;
    v106 = *(double *)v15;
    v107 = *(_DWORD *)(v15 + 8);
    StartAudioControllerAt(v14, (int)&v106, 0);
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 248))(this->q00C);
  }
  (*(void (__stdcall **)(int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(*v10 + 364))(
    v10 + 27,
    0,
    *((_DWORD *)g_RulesClass_Instance + 1002),
    0,
    1,
    1,
    0);
  LOWORD(v102) = SLODWORD(v108) / 256;
  WORD1(v102) = SHIDWORD(v108) / 256;
  LODWORD(v101) = LODWORD(v102);
  v17 = (void **)__2_YAPAXI_Z(0x1C8u);
  if ( v17 )
  {
    v18 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v101) + 59);
    v98 = v109;
    LODWORD(v98) = Return::HRESULT_Fail(SLODWORD(v108), SHIDWORD(v108), v109);
    VersusMultiplier = (void *)GetWarheadVersusMultiplier(v11, *((_DWORD *)g_RulesClass_Instance + 1002), v18, &v104);
    AnimClass::ctor(v17, VersusMultiplier, (int *)&v108, 0, 1, (void *)0x2600, (void *)v98, SBYTE4(v98));
  }
  CreateSmokeEffectAt(v11, *((_DWORD *)g_RulesClass_Instance + 1002), SLODWORD(v108), SHIDWORD(v108), v109, 0, 0);
  return PlaySoundEffectAt(&v108, v11, 0, *((_DWORD *)g_RulesClass_Instance + 1002), 1, 0);
}
}

// 0x4D0180
char DamageArea::CheckOccupancyEligibility()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_4D0180(int this)
{
  _DWORD *v2; // esi
  int (__stdcall ***v3)(_DWORD, void *, int *); // ecx
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v8; // [esp+18h] [ebp-8h] BYREF
  int v9; // [esp+1Ch] [ebp-4h] BYREF

  v2 = *(_DWORD **)(this + 12); /*0x4d0187*/
  if ( v2 ) /*0x4d018c*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(*v2 + 44))(this->q00C) == 2 ) /*0x4d0198*/
    {
      if ( (*(int (__stdcall **)(_DWORD *))(v2[432] + 32))(v2 + 432) ) /*0x4d01ab*/
        return 0; /*0x4d01b0*/
    }
    else
    {
      v2 = 0; /*0x4d019a*/
    }
  }
  if ( *(_BYTE *)(this + 81) || !*(_BYTE *)(this + 92) ) /*0x4d01c1*/
    return 1; /*0x4d01c6*/
  if ( !v2 || !*(_BYTE *)(v2[433] + 3595) ) /*0x4d01d6*/
  {
    v3 = *(int (__stdcall ****)(_DWORD, void *, int *))(this + 12); /*0x4d01e4*/
    v4 = 0; /*0x4d01e7*/
    v8 = 0; /*0x4d01eb*/
    if ( v3 ) /*0x4d01ef*/
    {
      v5 = (**v3)(v3, &unk_822410, &v9); /*0x4d0204*/
      if ( v5 >= 0 ) /*0x4d0208*/
      {
        v6 = v9; /*0x4d021c*/
        Release3COM(&v8); /*0x4d0224*/
        v4 = v6; /*0x4d0229*/
        v8 = v6; /*0x4d022c*/
      }
      else
      {
        Release3COM(&v8); /*0x4d020e*/
        v4 = 0; /*0x4d0213*/
        v8 = 0; /*0x4d0215*/
      }
      if ( v5 < 0 && v5 != -2147467262 ) /*0x4d023a*/
        WinAPI::Wrapper(v5); /*0x4d023d*/
      if ( v4 ) /*0x4d0248*/
      {
        if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v4 + 24))(v4) ) /*0x4d024d*/
        {
          if ( !v8 ) /*0x4d025a*/
            WinAPI::Wrapper(-2147467261); /*0x4d0261*/
          if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v8 + 28))(v8) ) /*0x4d026d*/
          {
            v4 = v8; /*0x4d0274*/
            goto LABEL_24; /*0x4d0278*/
          }
        }
        v4 = v8; /*0x4d027a*/
      }
    }
    if ( !*(_DWORD *)(this->q00C + 764) ) /*0x4d0281*/
    {
LABEL_24:
      if ( v4 ) /*0x4d028d*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4d0292*/
      return 1; /*0x4d029c*/
    }
    if ( v4 ) /*0x4d029f*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4d02a4*/
  }
  return 0; /*0x4d0295*/
}
}

// 0x565660
unsigned int * DamageArea::CalcScatterOffset(unsigned int * a2, short * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_565660(_DWORD *this, _DWORD *a2, __int16 *a3)
{
  int v3; // ebx
  int v4; // ebp
  int v5; // esi
  __int16 v6; // di
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v11; // [esp+20h] [ebp+8h]

  v3 = this->q0F4; /*0x565668*/
  v4 = this->q0FC; /*0x56566f*/
  v5 = a3[1]; /*0x565676*/
  v6 = *a3; /*0x56567b*/
  v7 = this->q100; /*0x56567e*/
  v8 = *a3; /*0x565684*/
  if ( (v3 & 1) != 0 ) /*0x56568d*/
    v9 = v8 - v5 + 1; /*0x565691*/
  else
    v9 = v8 - v5; /*0x565694*/
  LOWORD(v11) = v3 / 2 + (v9 >> 1) - v4; /*0x5656b1*/
  HIWORD(v11) = v6 + v5 - v3 - v7; /*0x5656b6*/
  *a2 = v11; /*0x5656c2*/
  return a2; /*0x5656bf*/
}
}
