// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WalkLocomotion_e4.hpp"

// 0x6A01A0
namespace gamemd {
char WalkLocomotion::MoveTo(IUnknown * aP1, int aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall WalkLocomotion::MoveTo(int this, IUnknown *aP1, int aP3)
{
  IUnknown *v3; // edx
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  _DWORD v18[2]; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+18h] [ebp-Ch] BYREF
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]

  v3 = aP1; /*0x6a01a0*/
  if ( aP1->field_0 != g_OverlayTypeConfig.field_0 /*0x6a01ce*/
    || aP1->field_4 != g_OverlayTypeConfig.field_4
    || (v5 = aP1->field_8, v5 != g_OverlayTypeConfig.field_8) )
  {
    LOBYTE(v5) = *(_BYTE *)(this + 96); /*0x6a01d4*/
    v6 = aP3; /*0x6a01d7*/
    if ( !(_BYTE)v5 ) /*0x6a01dd*/
    {
      v5 = this->WalkLocomotion_field_0x58; /*0x6a01e3*/
      if ( v5 != -1 ) /*0x6a01e9*/
      {
        v5 = byte_7F2A40[12 * v5]; /*0x6a01f2*/
        if ( v5 ) /*0x6a01fc*/
        {
          v7 = 4 * v5; /*0x6a0202*/
          v8 = dword_7F2960[v7]; /*0x6a0205*/
          v5 = dword_7F296C[v7]; /*0x6a020b*/
          if ( v5 > -1 ) /*0x6a0214*/
          {
            v9 = (_DWORD *)(v8 + 12 * v5); /*0x6a021d*/
            aP3 = v9[2]; /*0x6a0223*/
            if ( this->q05C < v5 ) /*0x6a022c*/
            {
              v10 = v9[1]; /*0x6a0234*/
              v18[0] = *v9; /*0x6a0237*/
              v18[1] = v10; /*0x6a023f*/
              v5 = (int)WalkLocomotion::TransformCoords( /*0x6a0250*/
                          (_DWORD *)this,
                          (ObjectClass *)&v19,
                          (IUnknown *)v18,
                          (ObjectClass *)&aP3);
              v11 = *(_DWORD *)v5; /*0x6a0255*/
              v12 = *(_DWORD *)(v5 + 4); /*0x6a0259*/
              if ( !v6 ) /*0x6a025c*/
              {
                v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 464))(this->q00C); /*0x6a0263*/
                v14 = this->q00C; /*0x6a0269*/
                v19 = v11; /*0x6a026c*/
                v20 = v12; /*0x6a0270*/
                v21 = v13; /*0x6a0274*/
                (*(void (__thiscall **)(int, int *))(*(_DWORD *)v14 + 244))(v14, &v19); /*0x6a027f*/
                LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, IUnknown *))(**(_DWORD **)(this + 12) + 244))( /*0x6a028f*/
                               this->q00C,
                               aP1);
                return v5; /*0x6a029c*/
              }
              if ( v6 == 1 || v6 == 3 ) /*0x6a02a7*/
              {
                v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 464))(this->q00C); /*0x6a02ae*/
                v16 = this->q00C; /*0x6a02b4*/
                v21 = v15; /*0x6a02b7*/
                v19 = v11; /*0x6a02bb*/
                v20 = v12; /*0x6a02bf*/
                LOBYTE(v5) = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v16 + 240))(v16, &v19); /*0x6a02ca*/
              }
              v3 = aP1; /*0x6a02d0*/
            }
          }
        }
      }
    }
    if ( v6 ) /*0x6a02d6*/
    {
      if ( v6 == 1 || v6 == 3 ) /*0x6a02f6*/
        LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, IUnknown *))(**(_DWORD **)(this + 12) + 240))( /*0x6a02fe*/
                       this->q00C,
                       v3);
    }
    else
    {
      LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, IUnknown *))(**(_DWORD **)(this + 12) + 244))( /*0x6a02de*/
                     this->q00C,
                     v3);
    }
  }
  return v5; /*0x6a0295*/
}
}
} // namespace gamemd

// 0x6A05F0
namespace gamemd {
char WalkLocomotion::ProcessCollision(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall WalkLocomotion::ProcessCollision(int this, char a2)
{
  int v3; // eax
  int v4; // edx
  bool v5; // al
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // edx
  int v10; // esi
  double v11; // st7
  int v12; // eax
  MouseClass *v13; // ecx
  int v14; // esi
  char v15; // bl
  int v16; // edx
  int v17; // eax
  int v18; // eax
  double v19; // st7
  double v20; // st7
  MouseClass *v21; // ecx
  double v22; // st7
  int v23; // eax
  double v24; // st7
  _DWORD *v25; // esi
  int v26; // eax
  MouseClass *v27; // ecx
  int v28; // edx
  int v29; // eax
  int v30; // edx
  int *v31; // esi
  TechnoClass *v32; // eax
  int v33; // edx
  int v34; // ebx
  int v35; // ecx
  MouseClass *v36; // eax
  int v37; // edx
  _DWORD *v38; // eax
  ObjectClass *Coords; // eax
  _DWORD *v40; // ecx
  int v41; // ecx
  int GroundHeight; // esi
  int v43; // ebx
  char *v45; // esi
  char v46; // dl
  int v47; // edx
  __int16 v48; // cx
  int v49; // eax
  IUnknown *v50; // esi
  int v51; // ecx
  MouseClass *v52; // ecx
  int v53; // eax
  int v54; // edx
  char *v55; // eax
  int v56; // ecx
  int v57; // eax
  _DWORD *v58; // eax
  int v59; // esi
  int *v60; // eax
  int v61; // edi
  MouseClass *v62; // ecx
  int v63; // kr28_4
  int v64; // eax
  int v65; // edi
  IUnknown *v66; // esi
  IUnknown *v67; // ebx
  int v68; // ecx
  int v69; // eax
  MouseClass *v70; // edi
  TechnoClass *v71; // esi
  TechnoClass *v72; // eax
  TechnoClass *v73; // esi
  TechnoClass *nextObject; // ebx
  int v75; // edx
  int v76; // edx
  MouseClass *v77; // ecx
  int v78; // eax
  int v79; // esi
  char v80; // bl
  MouseClass *v81; // eax
  char v82; // bl
  __int16 v83; // cx
  int v84; // eax
  MouseClass *v85; // ecx
  int v86; // eax
  __int16 v87; // dx
  char *v88; // ebx
  char v89; // al
  MouseClass *v90; // ecx
  int *v91; // esi
  int v92; // eax
  int v93; // edx
  int v94; // eax
  int v95; // edi
  TechnoClass *v96; // edx
  int v97; // edi
  void *v98; // eax
  IUnknown *v99; // eax
  int v100; // eax
  bool v101; // zf
  TechnoClass *v102; // eax
  MouseClass *v103; // ecx
  MouseClass *v104; // eax
  int v105; // edx
  TechnoClass *v106; // edx
  int v107; // ecx
  int v108; // edi
  int v109; // edx
  _DWORD *v110; // eax
  _DWORD *eax134; // eax
  MouseClass *v111; // edx
  int ecx137; // ecx
  TechnoClass *v113; // edi
  int v115; // ecx
  _DWORD *v116; // eax
  bool cc140; // cc
  IUnknown *v117; // eax
  _BYTE *v119; // eax
  int eax144; // eax
  MouseClass *v120; // edi
  int *v122; // esi
  int v123; // ecx
  int v124; // edx
  int v125; // eax
  int ebx145; // ebx
  MouseClass *v126; // ecx
  MouseClass *v127; // ebx
  int v129; // eax
  int v130; // ecx
  char al148; // al
  TechnoClass *v131; // eax
  MouseClass *v132; // eax
  int v134; // ecx
  _DWORD *v135; // eax
  int v136; // edi
  int v137; // ebx
  _WORD *v138; // eax
  __int64 rax156; // rax
  MouseClass *v139; // ecx
  int v141; // edx
  int v142; // eax
  int v143; // esi
  int v144; // ecx
  int v145; // eax
  int *v146; // eax
  int v147; // esi
  int v148; // ebx
  int *v149; // eax
  int v150; // ecx
  int v151; // eax
  int v152; // ebx
  int v153; // ecx
  int esi178a; // esi
  TechnoClass *v154; // ebx
  IUnknown *v155; // esi
  double v157; // st7
  int *eax178d; // eax
  TechnoClass *v158; // edx
  IUnknown *v159; // edi
  IUnknown *v161; // eax
  int v162; // ebx
  unsigned int edx178; // edx
  TechnoClass *v163; // ebx
  unsigned __int64 v165; // kr30_8
  void *eax184; // eax
  MouseClass *v166; // ecx
  int v168; // eax
  int v169; // edi
  int v170; // edi
  int fallRate; // ecx
  IUnknown *v171; // eax
  char v173; // bl
  int uniqueId; // [esp+20h] [ebp-104h]
  int LandHeight; // [esp+24h] [ebp-100h]
  AbstractClass *v176; // [esp+2Ch] [ebp-F8h]
  float v177; // [esp+2Ch] [ebp-F8h]
  bool v178; // [esp+43h] [ebp-E1h]
  char v179; // [esp+43h] [ebp-E1h]
  char v180; // [esp+43h] [ebp-E1h]
  ObjectClass *aP4; // [esp+44h] [ebp-E0h] BYREF
  _BYTE v182[12]; // [esp+48h] [ebp-DCh] BYREF
  double varD0; // [esp+54h] [ebp-D0h] BYREF
  IUnknown *v183; // [esp+5Ch] [ebp-C8h]
  ObjectClass aP3; // [esp+60h] [ebp-C4h] BYREF
  _DWORD v186[4]; // [esp+10Ch] [ebp-18h] BYREF
  int v187; // [esp+11Ch] [ebp-8h]
  int v188; // [esp+120h] [ebp-4h]

  if ( (!*(_BYTE *)(this + 99) || this->WalkLocomotion_field_0x58 == -1) && *(_DWORD *)(this->q00C + 1504) != 8
    || *(_BYTE *)(this + 98)
    && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C) + 3233) )
  {
    *(_DWORD *)(this + 76) = 0;
    return 0;
  }
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C);
  v4 = **(_DWORD **)(this + 12);
  if ( *(_BYTE *)(v3 + 3517) )
  {
    v5 = (*(int (**)(void))(v4 + 44))() != 1 || !*(_BYTE *)(*(_DWORD *)(this->q00C + 1732) + 3596);
    if ( this->q058 < 64 && v5 )
    {
      *(_DWORD *)v182 = *(_DWORD *)(this + 52);
      *(_DWORD *)&v182[4] = *(_DWORD *)(this + 56);
      *(_DWORD *)&v182[8] = *(_DWORD *)(this + 60);
      v6 = (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v182) + 80) & 0x100) != 0
         ? g_OverlayTypeConfig.field_34
         : 0;
      v7 = v6 + Cell::GetGroundHeight(v182);
      v8 = (_DWORD *)(this->q00C + 156);
      *(_DWORD *)&v182[8] = v7;
      v9 = v8[1];
      aP3.lastLayer = *v8 - *(_DWORD *)v182;
      v10 = v8[2];
      *(_DWORD *)&aP3.isInLogic = v9 - *(_DWORD *)&v182[4];
      aP3.location[0] = v10 - v7;
      v11 = Math::Sqrt(
              (double)(v10 - v7) * (double)(v10 - v7)
            + (double)(v9 - *(_DWORD *)&v182[4]) * (double)(v9 - *(_DWORD *)&v182[4])
            + (double)aP3.lastLayer * (double)aP3.lastLayer);
      v12 = Math::RoundToInt(v11);
      v13 = *(MouseClass **)(this + 12);
      v14 = v12;
      v15 = 0;
      v16 = *(_DWORD *)&v13->__pad_1D4[936];
      LODWORD(varD0) = *(_DWORD *)&v13->__pad_1D4[932];
      v17 = v13->field_0;
      HIDWORD(varD0) = v16;
      v18 = (*(int (__thiscall **)(MouseClass *))(v17 + 132))(v13);
      if ( v14 >= *(_DWORD *)(v18 + 760) )
      {
        if ( *(_BYTE *)(this->q00C + 973) )
        {
          v20 = varD0 - (double)*(int *)(v18 + 1656) * 0.001500000013038516;
          if ( v20 >= 0.1000000014901161 )
            varD0 = v20;
          else
            varD0 = 0.1000000014901161;
          v15 = 1;
        }
      }
      else
      {
        v15 = 1;
        v19 = varD0 - (double)*(int *)(v18 + 1656) * *(double *)(v18 + 768);
        if ( v19 >= 0.300000011920929 )
          varD0 = v19;
        else
          varD0 = 0.300000011920929;
      }
      v21 = *(MouseClass **)(this + 12);
      if ( v21->__pad_1D4[1249] )
      {
        if ( *(double *)(this + 80) >= 0.2 )
          v22 = 0.2;
        else
          v22 = *(double *)(this + 80);
        varD0 = v22;
        v23 = HIDWORD(varD0);
        *(double *)(this + 80) = v22;
        (*(void (__stdcall **)(_DWORD, int))(v21->field_0 + 1348))(LODWORD(varD0), v23);
      }
      else
      {
        if ( !v15 )
        {
          if ( *(double *)&v21->__pad_1D4[932] >= *(double *)(this + 80) )
          {
            if ( *(double *)&v21->__pad_1D4[932] <= *(double *)(this + 80) )
              goto LABEL_37;
            v24 = *(double *)&v21->__pad_1D4[932] - (double)*(int *)(v18 + 1656) * *(double *)(v18 + 768);
            if ( *(double *)(this + 80) > v24 )
              v24 = *(double *)(this + 80);
          }
          else
          {
            v24 = *(double *)(v18 + 776) + *(double *)&v21->__pad_1D4[932];
            if ( *(double *)(this + 80) < v24 )
              v24 = *(double *)(this + 80);
          }
          varD0 = v24;
          (*(void (__stdcall **)(_DWORD, _DWORD))(v21->field_0 + 1348))(
            LODWORD(v24),
            HIDWORD(*(unsigned __int64 *)&v24));
          goto LABEL_37;
        }
        (*(void (__stdcall **)(_DWORD, _DWORD))(v21->field_0 + 1348))(LODWORD(varD0), HIDWORD(varD0));
      }
LABEL_37:
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(this->q00C) == 1 )
      {
        v25 = *(_DWORD **)(this->q00C + 1736);
        if ( v25 )
        {
          do
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v25 + 1348))(
              v25,
              *(_DWORD *)(this->q00C + 1400),
              *(_DWORD *)(this->q00C + 1404));
            v25 = (_DWORD *)v25[434];
          }
          while ( v25 && v25 != (_DWORD *)v25[434] );
        }
      }
    }
  }
  else
  {
    (*(void (__stdcall **)(_DWORD, _DWORD))(v4 + 1348))(this->q140, *(_DWORD *)(this + 84));
  }
  v26 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 1336))(this->q00C);
  v27 = *(MouseClass **)(this + 12);
  v28 = a2 == 0 ? v26 : 0;
  v29 = *(_DWORD *)&v27->__pad_1D4[1036];
  v30 = *(_DWORD *)(this + 76) + v28;
  *(_DWORD *)&aP3.__pad_0[4] = v30;
  aP3.uniqueId = v29;
  if ( v29 == 8 && this->WalkLocomotion_field_0x58 == -1 )
  {
    (*(void (__thiscall **)(MouseClass *, _DWORD))(v27->field_0 + 292))(v27, 0);
    v31 = (int *)(this + 64);
    if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig.field_0
      || this->WalkLocomotion_field_0x44 != g_OverlayTypeConfig.field_4
      || this->q048 != g_OverlayTypeConfig.field_8 )
    {
      *v31 = g_OverlayTypeConfig.field_0;
      this->WalkLocomotion_field_0x44 = g_OverlayTypeConfig.field_4;
      v32 = (TechnoClass *)g_OverlayTypeConfig.field_8;
      *(_BYTE *)(this + 99) = 0;
      this->q048 = v32;
    }
    v33 = *(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 444))(this->q00C) + 278);
    if ( v33 >= 0 && v33 < *(int *)&MEMORY[0x89F690].__pad_579C[62236] )
    {
      v34 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62224] + 4 * v33);
      aP4 = *(ObjectClass **)(v34 + 40);
      v35 = SHIWORD(aP4) << 8;
      *v31 = ((__int16)aP4 << 8) + 128;
      v36 = *(MouseClass **)(this + 12);
      this->WalkLocomotion_field_0x44 = v35 + 128;
      this->q048 = 0;
      qmemcpy(&v36->__pad_1D4[1036], &v36->__pad_1D4[1040], 0x5Cu);
      *(_DWORD *)(this->q00C + 1596) = -1;
      *(_BYTE *)(this->q00C + 1668) = v33;
      *(_BYTE *)(this->q00C + 1669) = 0;
      v37 = *(_DWORD *)(v34 + 48) & 7;
      aP4 = *(ObjectClass **)(v34 + 36);
      *(_WORD *)&aP3.__pad_0[8] = *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v37) + (_WORD)aP4;
      *(_WORD *)&aP3.__pad_0[10] = HIWORD(aP4) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v37);
      aP4 = *(ObjectClass **)&aP3.__pad_0[8];
      v38 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP4);
      Coords = (ObjectClass *)CellClass::GetCoords(v38, (int *)&aP3.attachedBomb);
      v40 = (_DWORD *)(this->q00C + 1384);
      *v40 = *(_DWORD *)Coords->__pad_0;
      v40[1] = *(_DWORD *)&Coords->__pad_0[4];
      v40[2] = *(_DWORD *)&Coords->__pad_0[8];
      v41 = this->q00C + 156;
      aP3.nextArrayIndex = *(_DWORD *)v41;
      aP3.referenceCount = *(_DWORD *)(v41 + 4);
      aP3.NeedsSaveOrLink = *(void **)(v41 + 8);
      GroundHeight = Cell::GetGroundHeight(&aP3.nextArrayIndex);
      aP4 = *(ObjectClass **)(v34 + 40);
      v43 = *(_DWORD *)(v34 + 448);
      aP3.referenceCount = (SHIWORD(aP4) << 8) + 128;
      aP3.nextArrayIndex = ((__int16)aP4 << 8) + 128;
      aP3.NeedsSaveOrLink = 0;
      *(_DWORD *)(this->q00C + 1392) = GroundHeight
                                                 + (Cell::GetGroundHeight(&aP3.nextArrayIndex) - GroundHeight) / v43;
      *(_BYTE *)(this + 99) = 1;
      this->WalkLocomotion_field_0x58 = -1;
      return 0;
    }
    *(_DWORD *)(this->q00C + 1504) = -1;
    this->WalkLocomotion_field_0x58 = -1;
    *v31 = g_OverlayTypeConfig.field_0;
    this->WalkLocomotion_field_0x44 = g_OverlayTypeConfig.field_4;
    this->q048 = g_OverlayTypeConfig.field_8;
    if ( *v31 != g_OverlayTypeConfig.field_0
      || this->WalkLocomotion_field_0x44 != g_OverlayTypeConfig.field_4
      || this->q048 != g_OverlayTypeConfig.field_8 )
    {
      *v31 = g_OverlayTypeConfig.field_0;
      this->WalkLocomotion_field_0x44 = g_OverlayTypeConfig.field_4;
      this->q048 = g_OverlayTypeConfig.field_8;
      *(_BYTE *)(this + 99) = 0;
      return 0;
    }
    return 0;
  }
  if ( v30 <= 7 )
    goto LABEL_141;
  v45 = (char *)(12 * this->WalkLocomotion_field_0x58 + 8333888);
  v46 = *(_BYTE *)(this + 96);
  *(_DWORD *)&aP3.bombVisible = v45;
  if ( v46 )
    v47 = v45[1];
  else
    v47 = *v45;
  aP3.objectTypeFlags = 16 * v47;
  *(_DWORD *)&aP3.__pad_0[8] = dword_7F2960[4 * v47];
  if ( v29 < -1 || v29 > 8 )
  {
    *(_DWORD *)&v27->__pad_1D4[1036] = -1;
    return 0;
  }
  v178 = 0;
  if ( v29 != 8 && v29 != -1 )
  {
    LOBYTE(v48) = 0;
    HIBYTE(v48) = v45[4];
    LOWORD(aP4) = v48;
    v178 = (((((unsigned int)aP4 >> 12) + 1) >> 1) & 7) != v29;
  }
  while ( 1 )
  {
    v49 = this->q05C;
    v50 = *(IUnknown **)&aP3.__pad_0[8];
    *(_DWORD *)&aP3.__pad_0[4] -= 7;
    v51 = *(_DWORD *)(*(_DWORD *)&aP3.__pad_0[8] + 12 * v49 + 4);
    aP3.health = *(_DWORD *)(*(_DWORD *)&aP3.__pad_0[8] + 12 * v49);
    aP3.estimatedHealth = v51;
    if ( !aP3.health && !v51 && v49 )
      break;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 192))(this->q00C) )
    {
      v52 = *(MouseClass **)(this + 12);
      v186[0] = *(_DWORD *)&v52->__pad_74[40];
      v186[1] = *(_DWORD *)&v52->__pad_74[44];
      v186[2] = *(_DWORD *)&v52->__pad_74[48];
      (*(void (__thiscall **)(MouseClass *, _DWORD *))(v52->field_0 + 244))(v52, v186);
      *(_BYTE *)(this->q00C + 1718) = 0;
      *(_BYTE *)(this->q00C + 1719) = 0;
    }
    v53 = this->q05C;
    if ( v53 )
    {
      v54 = *((_DWORD *)v50 + 3 * v53 - 1);
      v55 = (char *)v50 + 12 * v53;
      aP3.abstractFlags = v54;
      v56 = *((_DWORD *)v55 - 2);
      v57 = *((_DWORD *)v55 - 3);
      aP3.customSound_controller[1] = v56;
      aP3.customSound_controller[0] = v57;
      v58 = WalkLocomotion::TransformCoords(
              (_DWORD *)this,
              (ObjectClass *)&aP3.visibilityFlags,
              (IUnknown *)aP3.customSound_controller,
              (ObjectClass *)&aP3.abstractFlags);
      v59 = v58[1];
      LOWORD(aP3.customSound_controller[4]) = *v58 / 256;
      HIWORD(aP3.customSound_controller[4]) = v59 / 256;
      aP3.customSound_controller[3] = aP3.customSound_controller[4];
    }
    else
    {
      aP3.customSound_controller[3] = *(_DWORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 440))(
                                                   this->q00C,
                                                   &varD0);
    }
    aP3.abstractFlags = *(_DWORD *)(*(_DWORD *)&aP3.__pad_0[8] + 12 * this->q05C + 8);
    v60 = WalkLocomotion::TransformCoords(
            (_DWORD *)this,
            (ObjectClass *)&aP3.lastLayer,
            (IUnknown *)&aP3.health,
            (ObjectClass *)&aP3.abstractFlags);
    v61 = v60[1];
    aP3.nextArrayIndex = *v60;
    aP3.NeedsSaveOrLink = 0;
    v62 = *(MouseClass **)(this + 12);
    aP3.referenceCount = v61;
    v63 = v61;
    v64 = *(_DWORD *)&v62->__pad_74[40];
    v65 = *(_DWORD *)&v62->__pad_74[44];
    *(_WORD *)&aP3.isOnMap = aP3.nextArrayIndex / 256;
    v187 = v65;
    v188 = *(_DWORD *)&v62->__pad_74[48];
    *(_WORD *)&aP3.alignmentPadding75[1] = v63 / 256;
    aP3.nextObject = *(void **)&aP3.isOnMap;
    if ( *(_WORD *)&aP3.isOnMap != (unsigned __int16)(v64 / 256)
      || (unsigned __int16)(v63 / 256) != (unsigned __int16)(v187 / 256) )
    {
      (*(void (__thiscall **)(MouseClass *, _DWORD))(v62->field_0 + 292))(v62, 0);
      (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 436))(
        this->q00C,
        &aP3.nextArrayIndex);
      v66 = (IUnknown *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP3.customSound_controller[3]);
      v67 = (IUnknown *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP3.nextObject);
      v68 = SHIBYTE(v67->field_118);
      v69 = SHIBYTE(v66->field_118) - 4;
      *(_DWORD *)&aP3.__pad_0[12] = v67;
      if ( v68 != v69 )
        goto LABEL_78;
      if ( (v67->field_140 & 0x100) == 0 )
        goto LABEL_79;
      *(_BYTE *)(this->q00C + 140) = 1;
LABEL_78:
      if ( (v67->field_140 & 0x100) == 0 )
      {
LABEL_79:
        if ( (v66->field_140 & 0x100) != 0 )
          *(_BYTE *)(this->q00C + 140) = 0;
      }
      if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C) + 3220) )
      {
        v70 = *(MouseClass **)(this + 12);
        if ( !v70->__pad_1D4[1276] )
        {
          if ( v70->__pad_74[24]
            || (aP3.attachedBomb = *(void **)&v70->__pad_74[40],
                aP3.ambientSoundController[0] = *(_DWORD *)&v70->__pad_74[44],
                v71 = *(TechnoClass **)&v70->__pad_74[48],
                aP3.parachute = *(void **)&v70->__pad_74[40],
                *(_DWORD *)&aP3.onBridge = *(_DWORD *)&v70->__pad_74[44],
                *(_DWORD *)&aP3.isAliveFlag = *(_DWORD *)&v70->__pad_74[48],
                (int)v71 >= g_OverlayTypeConfig.field_34 + Cell::GetGroundHeight(&aP3.parachute)) )
          {
            v72 = (TechnoClass *)*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP3.nextObject) + 58);
          }
          else
          {
            v72 = (TechnoClass *)*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP3.nextObject) + 57);
          }
          v73 = v72;
          if ( v72 )
          {
            do
            {
              nextObject = (TechnoClass *)v73->nextObject;
              if ( !ObjectClass::IsCrushable(v73, *(AbstractClass **)(this + 12)) )
              {
                v75 = *(_DWORD *)v73->__pad_0;
                aP3.attachedTag = (void *)10000;
                (*(void (__thiscall **)(TechnoClass *, void **, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v75 + 364))(
                  v73,
                  &aP3.attachedTag,
                  0,
                  *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4008),
                  0,
                  1,
                  1,
                  0);
                v76 = v70->field_0;
                aP3.attachedTag = (void *)20;
                (*(void (__thiscall **)(MouseClass *, void **, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(v76 + 364))(
                  v70,
                  &aP3.attachedTag,
                  0,
                  *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4008),
                  0,
                  1,
                  0,
                  0);
              }
              v73 = nextObject;
            }
            while ( nextObject );
            v67 = *(IUnknown **)&aP3.__pad_0[12];
          }
        }
      }
      v77 = *(MouseClass **)(this + 12);
      if ( !v77->__pad_74[28] )
        return 0;
      (*(void (__thiscall **)(MouseClass *, int))(v77->field_0 + 292))(v77, 1);
      v78 = v67->field_44;
      if ( v78 != -1 )
      {
        v79 = *(_DWORD *)&g_BuildingTypeClass_Array->__pad_0[4 * v78];
        if ( *(_BYTE *)(this + 100) )
        {
          if ( (*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C)
                         + 3368)
             || TechnoClass::HasVoiceResponse(*(float **)(this + 12), 17))
            && !*(_DWORD *)(v79 + 660) )
          {
            *(_BYTE *)(this->q00C + 1717) = 1;
            if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C)
                          + 3371) )
              *(_DWORD *)(this->q00C + 820) = -1130113270;
          }
        }
      }
      goto LABEL_101;
    }
    v80 = v62->__pad_74[0];
    v62->__pad_74[0] = 0;
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 436))(
      this->q00C,
      &aP3.nextArrayIndex);
    *(_BYTE *)(this->q00C + 116) = v80;
LABEL_101:
    v81 = *(MouseClass **)(this + 12);
    if ( !v81->__pad_74[28] )
      return 0;
    v82 = v81->__pad_74[0];
    v81->__pad_74[0] = 0;
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(this->q00C, 0);
    LOBYTE(v83) = 0;
    *(_BYTE *)(this->q00C + 116) = v82;
    HIBYTE(v83) = aP3.abstractFlags;
    LOWORD(aP3.owningHouseIndex) = v83;
    FacingClass::Set_SyncLog((char *)(this->q00C + 904), &aP3.owningHouseIndex);
    v84 = this->q05C;
    if ( v84 && *(int *)((char *)dword_7F296C + aP3.objectTypeFlags) == v84 )
    {
      v85 = *(MouseClass **)(this + 12);
      aP3.location[1] = *(_DWORD *)&v85->__pad_74[40];
      aP3.location[2] = *(_DWORD *)&v85->__pad_74[44];
      aP3.lineTrailer = *(void **)&v85->__pad_74[48];
      (*(void (__thiscall **)(MouseClass *, int *))(v85->field_0 + 244))(v85, &aP3.location[1]);
    }
    if ( aP3.uniqueId != 8 && aP3.uniqueId != -1 && v178 )
    {
      v86 = this->q05C;
      if ( *(int *)((char *)dword_7F2964 + aP3.objectTypeFlags) == v86 )
      {
        if ( v86 )
        {
          LOBYTE(v87) = 0;
          HIBYTE(v87) = *(_BYTE *)(*(_DWORD *)&aP3.bombVisible + 4);
          LOWORD(aP3.fallRate) = v87;
          *(_DWORD *)&aP3.__pad_0[12] = aP3.uniqueId + 8 * (((((unsigned int)aP3.fallRate >> 12) + 1) >> 1) & 7);
          v88 = (char *)(12 * *(_DWORD *)&aP3.__pad_0[12] + 8333888);
          v89 = byte_7F2A40[12 * *(_DWORD *)&aP3.__pad_0[12]];
          if ( v89 )
          {
            if ( dword_7F2968[4 * v89] )
            {
              v90 = *(MouseClass **)(this + 12);
              v91 = (int *)(this + 64);
              v92 = *(_DWORD *)&v90->__pad_1D4[936];
              aP3.ambientSoundController[2] = *(_DWORD *)&v90->__pad_1D4[932];
              v93 = aP3.uniqueId & 7;
              aP3.ambientSoundController[3] = v92;
              v94 = *(_DWORD *)&MEMORY[0x89F690].__pad_48[8 * v93] + this->WalkLocomotion_field_0x40;
              v95 = this->WalkLocomotion_field_0x44 + *(_DWORD *)&MEMORY[0x89F690].__pad_48[8 * v93 + 4];
              v96 = *(TechnoClass **)(this + 72);
              *(_DWORD *)v182 = v94;
              *(_DWORD *)&v182[8] = v96;
              *(_DWORD *)&v182[4] = v95;
              LOWORD(aP3.customSound) = v94 / 256;
              HIWORD(aP3.customSound) = v95 / 256;
              *(_DWORD *)aP3.__pad_0 = aP3.customSound;
              v97 = v90->field_0;
              LandHeight = ObjectClass::GetLandHeight(v90);
              uniqueId = aP3.uniqueId;
              v98 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)aP3.__pad_0);
              switch ( (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD, int))(v97 + 428))(
                         this->q00C,
                         v98,
                         uniqueId,
                         LandHeight,
                         0,
                         1) )
              {
                case 0:
                case 2:
                  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(this->q00C) == 1
                    && !*(_BYTE *)(*(_DWORD *)(this->q00C + 1732) + 3596) )
                  {
                    break;
                  }
                  v99 = *(IUnknown **)&aP3.__pad_0[12];
                  *(_BYTE *)(this + 96) = 0;
                  this->WalkLocomotion_field_0x58 = v99;
                  *(_DWORD *)&aP3.bombVisible = v88;
                  v100 = 4 * *v88;
                  aP3.objectTypeFlags = v100 * 4;
                  v178 = 0;
                  this->q05C = dword_7F2968[v100] - 1;
                  v101 = *v91 == g_OverlayTypeConfig.field_0;
                  *(_DWORD *)&aP3.__pad_0[8] = dword_7F2960[v100];
                  if ( !v101
                    || this->WalkLocomotion_field_0x44 != g_OverlayTypeConfig.field_4
                    || this->q048 != g_OverlayTypeConfig.field_8 )
                  {
                    *v91 = g_OverlayTypeConfig.field_0;
                    this->WalkLocomotion_field_0x44 = g_OverlayTypeConfig.field_4;
                    v102 = (TechnoClass *)g_OverlayTypeConfig.field_8;
                    *(_BYTE *)(this + 99) = 0;
                    this->q048 = v102;
                  }
                  v103 = *(MouseClass **)(this + 12);
                  *(_BYTE *)(this + 99) = 1;
                  (*(void (__thiscall **)(MouseClass *, int))(v103->field_0 + 396))(v103, 2);
                  v104 = *(MouseClass **)(this + 12);
                  *(_BYTE *)(this + 99) = 0;
                  if ( !v104->__pad_74[28] || v104->__pad_74[13] || v104->__pad_74[25] )
                    return 0;
                  v105 = g_OverlayTypeConfig.field_0;
                  if ( *v91 != g_OverlayTypeConfig.field_0
                    || this->WalkLocomotion_field_0x44 != g_OverlayTypeConfig.field_4
                    || this->q048 != g_OverlayTypeConfig.field_8 )
                  {
                    *v91 = g_OverlayTypeConfig.field_0;
                    this->WalkLocomotion_field_0x44 = g_OverlayTypeConfig.field_4;
                    v106 = (TechnoClass *)g_OverlayTypeConfig.field_8;
                    *(_BYTE *)(this + 99) = 0;
                    this->q048 = v106;
                    v105 = g_OverlayTypeConfig.field_0;
                  }
                  v107 = *(_DWORD *)v182;
                  v108 = *(_DWORD *)&v182[4];
                  v101 = *(_DWORD *)v182 == v105;
                  v109 = *(_DWORD *)&v182[8];
                  if ( !v101
                    || *(_DWORD *)&v182[4] != g_OverlayTypeConfig.field_4
                    || *(_DWORD *)&v182[8] != g_OverlayTypeConfig.field_8 )
                  {
                    v176 = (AbstractClass *)v104;
                    *(_BYTE *)(this + 99) = 1;
                    *v91 = v107;
                    this->WalkLocomotion_field_0x44 = v108;
                    this->q048 = v109;
                    v110 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v182);
                    if ( !CrateClass::ProcessPickup(v110, v176) || *(_BYTE *)(this->q00C + 129) )
                    {
                      if ( *(_BYTE *)(this->q00C + 144) )
                      {
                        *v91 = g_OverlayTypeConfig.field_0;
                        this->WalkLocomotion_field_0x44 = g_OverlayTypeConfig.field_4;
                        this->q048 = g_OverlayTypeConfig.field_8;
                        *(_BYTE *)(this + 99) = 0;
                      }
                    }
                    else
                    {
                      WalkLocomotion::MoveTo(this, (IUnknown *)v182, 1);
                      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 12) + 1348))(
                        this->q00C,
                        aP3.ambientSoundController[2],
                        aP3.ambientSoundController[3]);
                      qmemcpy(
                        (void *)(this->q00C + 1504),
                        (const void *)(this->q00C + 1508),
                        0x5Cu);
                      *(_DWORD *)(this->q00C + 1596) = -1;
                    }
                  }
                  break;
                case 1:
                  eax134 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v182);
                  CellClass::DamageAllObjects(eax134);
                  break;
                case 3:
                  LOWORD(aP3.spawnStatus) = *(_DWORD *)v182 / 256;
                  v111 = *(MouseClass **)(this + 12);
                  HIWORD(aP3.spawnStatus) = *(_DWORD *)&v182[4] / 256;
                  *(_DWORD *)&aP3.__pad_0[12] = aP3.spawnStatus;
                  Cell::IsPassableAllied((int)v111, (__int16 *)&aP3.__pad_0[12]);
                  break;
                case 6:
                  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v182) + 80) & 0x100) == 0
                    || (ecx137 = this->q00C + 156,
                        aP3.attachedBomb = *(void **)ecx137,
                        aP3.ambientSoundController[0] = *(_DWORD *)(ecx137 + 4),
                        v113 = *(TechnoClass **)(ecx137 + 8),
                        v115 = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v182) + 283),
                        LOBYTE(aP4) = 1,
                        (int)abs32((int)v113 / g_OverlayTypeConfig.field_40 - v115) <= 2) )
                  {
                    LOBYTE(aP4) = 0;
                  }
                  v116 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)(this + 64));
                  Cell::ApplyDamage(v116, &g_OverlayTypeConfig, 1, 1, (IUnknown *)aP4);
                  break;
                default:
                  break;
              }
            }
          }
        }
      }
    }
    cc140 = *(_DWORD *)&aP3.__pad_0[4] <= 7;
    ++this->q05C;
    if ( cc140 )
      goto LABEL_141;
  }
  v120 = *(MouseClass **)(this + 12);
  v122 = (int *)(this + 64);
  v123 = *(_DWORD *)&v120->__pad_74[40];
  v124 = *(_DWORD *)&v120->__pad_74[44];
  aP3.ambientSoundController[1] = *(_DWORD *)&v120->__pad_74[48];
  *(_DWORD *)aP3.__pad_0 = abs32(this->WalkLocomotion_field_0x44 - v124) + abs32(this->WalkLocomotion_field_0x40 - v123);
  v125 = Math::RoundToInt((1.0 - (double)*(int *)aP3.__pad_0 * 0.09090909090909091) * 7.0);
  ebx145 = *(_DWORD *)&aP3.__pad_0[4];
  v120->__pad_1D4[1250] = 1;
  v126 = *(MouseClass **)(this + 12);
  *(_DWORD *)&aP3.__pad_0[4] = v125 + ebx145;
  v126->__pad_1D4[1251] = 0;
  v127 = *(MouseClass **)(this + 12);
  v129 = *(_DWORD *)&v127->__pad_74[40];
  v130 = *(_DWORD *)&v127->__pad_74[44];
  aP3.ambientSoundController[1] = *(_DWORD *)&v127->__pad_74[48];
  *(_WORD *)&aP3.__pad_0[2] = v130 / 256;
  if ( (unsigned __int16)(v129 / 256) == (unsigned __int16)(this->WalkLocomotion_field_0x40 / 256)
    && *(_WORD *)&aP3.__pad_0[2] == (unsigned __int16)(this->WalkLocomotion_field_0x44 / 256) )
  {
    al148 = v127->__pad_74[0];
    v127->__pad_74[0] = 0;
    v179 = al148;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 436))(this->q00C, this + 64);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(this->q00C, 0);
    *(_BYTE *)(this->q00C + 116) = v179;
  }
  else
  {
    (*(void (__thiscall **)(MouseClass *, _DWORD))(v127->field_0 + 292))(v127, 0);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 436))(this->q00C, this + 64);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(this->q00C, 0);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 292))(this->q00C, 1);
  }
  if ( *v122 != g_OverlayTypeConfig.field_0
    || this->WalkLocomotion_field_0x44 != g_OverlayTypeConfig.field_4
    || this->q048 != g_OverlayTypeConfig.field_8 )
  {
    *v122 = g_OverlayTypeConfig.field_0;
    this->WalkLocomotion_field_0x44 = g_OverlayTypeConfig.field_4;
    v131 = (TechnoClass *)g_OverlayTypeConfig.field_8;
    *(_BYTE *)(this + 99) = 0;
    this->q048 = v131;
  }
  v132 = *(MouseClass **)(this + 12);
  this->WalkLocomotion_field_0x58 = -1;
  this->q05C = 0;
  v180 = 0;
  v134 = *(_DWORD *)&v132->__pad_1D4[976];
  if ( v134 )
  {
    v135 = (_DWORD *)(*(int (__thiscall **)(int, void **, MouseClass *))(*(_DWORD *)v134 + 76))(
                       v134,
                       &aP3.attachedBomb,
                       v132);
    v136 = *v135 / 256;
    v137 = v135[1] / 256;
    v138 = (_WORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 440))(
                      this->q00C,
                      &varD0);
    if ( *v138 == (_WORD)v136 && v138[1] == (_WORD)v137 )
    {
      rax156 = *(_DWORD *)((*(int (__stdcall **)(void **, _DWORD))(**(_DWORD **)(this + 12) + 76))(
                             &aP3.attachedBomb,
                             this->q00C)
                         + 8)
             - *(_DWORD *)(this + 60);
      if ( (int)((HIDWORD(rax156) ^ rax156) - HIDWORD(rax156)) < 2 * g_OverlayTypeConfig.field_40 )
      {
        v180 = 1;
        *(_DWORD *)(this + 52) = g_OverlayTypeConfig.field_0;
        *(_DWORD *)(this + 56) = g_OverlayTypeConfig.field_4;
        *(_DWORD *)(this + 60) = g_OverlayTypeConfig.field_8;
        if ( *v122 != g_OverlayTypeConfig.field_0
          || this->WalkLocomotion_field_0x44 != g_OverlayTypeConfig.field_4
          || this->q048 != g_OverlayTypeConfig.field_8 )
        {
          *v122 = g_OverlayTypeConfig.field_0;
          this->WalkLocomotion_field_0x44 = g_OverlayTypeConfig.field_4;
          this->q048 = g_OverlayTypeConfig.field_8;
          *(_BYTE *)(this + 99) = 0;
        }
        *(_BYTE *)(this + 99) = 0;
      }
    }
  }
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 396))(this->q00C, 2);
  v139 = *(MouseClass **)(this + 12);
  if ( !v139->__pad_74[28] || v139->__pad_74[13] || v139->__pad_74[25] )
    return 1;
  if ( v180 )
  {
    FootClass::ClearPathIndex(v139);
    *(_DWORD *)(this->q00C + 1504) = -1;
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 388))(this->q00C) == 2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
             this->q00C,
             0,
             1) )
      {
        return 1;
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 1284))(this->q00C) )
    return 1;
  if ( !*(_BYTE *)(this->q00C + 144) )
    return 0;
LABEL_141:
  cc140 = *(_DWORD *)&aP3.__pad_0[4] <= 0;
  *(_DWORD *)(this + 76) = *(_DWORD *)&aP3.__pad_0[4];
  if ( cc140 )
    return 0;
  v117 = *(IUnknown **)(this + 88);
  if ( (int)v117 <= -1 )
    return 0;
  v119 = (_BYTE *)(12 * (_DWORD)v117 + 8333888);
  eax144 = *(_BYTE *)(this + 96) ? (char)v119[1] : (char)*v119;
  v141 = this->q05C;
  v142 = dword_7F2960[4 * eax144];
  v143 = *(_DWORD *)(v142 + 12 * v141);
  v144 = v142 + 12 * v141;
  v145 = *(_DWORD *)(v144 + 4);
  aP3.health = v143;
  aP3.estimatedHealth = v145;
  if ( !v143 && !v145 && v141 )
    return 0;
  v146 = (int *)(this->q00C + 156);
  aP3.customSound_controller[0] = *v146;
  aP3.customSound_controller[1] = v146[1];
  aP3.customSound_controller[2] = v146[2];
  *(_DWORD *)aP3.__pad_0 = *(_DWORD *)(v144 + 8);
  v147 = *v146;
  v148 = v146[1];
  aP3.ambientSoundController[1] = v146[2];
  v149 = WalkLocomotion::TransformCoords((_DWORD *)this, (ObjectClass *)&aP3.lastLayer, (IUnknown *)&aP3.health, &aP3);
  v150 = *v149;
  v151 = v149[1] - v148;
  v152 = this->q00C + 156;
  aP3.visibilityFlags = v150 - v147;
  *(_DWORD *)&aP3.needsRedraw = v151;
  *(_DWORD *)&aP3.hasParachute = 0;
  v153 = *(_DWORD *)v152 + v150 - v147;
  esi178a = *(_DWORD *)(v152 + 4);
  v154 = *(TechnoClass **)(v152 + 8);
  aP3.ambientSoundController[3] = esi178a + v151;
  aP3.ambientSoundController[2] = v153;
  aP3.ambientSoundController[4] = (int)v154;
  v155 = (IUnknown *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&aP3.ambientSoundController[2]);
  v157 = (double)*(int *)(this + 76) * 0.1428571428571428;
  memset(&aP3.location[1], 0, 12);
  v177 = v157;
  eax178d = Color::RGBFromFloat(&aP3.attachedBomb, (IUnknown *)&aP3.visibilityFlags, v177);
  aP3.visibilityFlags = *eax178d;
  *(_DWORD *)&aP3.needsRedraw = eax178d[1];
  v158 = (TechnoClass *)eax178d[2];
  LODWORD(varD0) = aP3.customSound_controller[0] + aP3.visibilityFlags;
  *(_DWORD *)&aP3.hasParachute = v158;
  HIDWORD(varD0) = aP3.customSound_controller[1] + *(_DWORD *)&aP3.needsRedraw;
  v183 = (IUnknown *)&v158->__pad_0[aP3.customSound_controller[2]];
  v159 = (IUnknown *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)aP3.customSound_controller);
  aP3.fallRate = (int)v159;
  v161 = (IUnknown *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&varD0);
  v162 = this->q00C + 156;
  *(_DWORD *)v182 = *(_DWORD *)v162;
  edx178 = *(_DWORD *)(v162 + 4);
  *(_DWORD *)&v182[4] = edx178;
  v163 = *(TechnoClass **)(v162 + 8);
  *(_DWORD *)&v182[8] = v163;
  v165 = __PAIR64__(edx178, *(unsigned int *)v182);
  if ( v161 == v155 || v161 == v159 )
  {
    v165 = *(_QWORD *)&varD0;
    v163 = (TechnoClass *)v183;
    *(double *)v182 = varD0;
LABEL_183:
    *(_DWORD *)&v182[8] = v163;
  }
  else if ( *(int *)(this + 76) > 3 )
  {
    v163 = (TechnoClass *)aP3.ambientSoundController[4];
    *(_DWORD *)v182 = aP3.ambientSoundController[2];
    *(_DWORD *)&v182[4] = aP3.ambientSoundController[3];
    v165 = *(_QWORD *)&aP3.ambientSoundController[2];
    goto LABEL_183;
  }
  *(_QWORD *)&aP3.parachute = v165;
  *(_DWORD *)&aP3.isAliveFlag = v163;
  eax184 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&aP3.parachute);
  v166 = *(MouseClass **)(this + 12);
  aP3.owningHouseIndex = (int)eax184;
  v168 = *(_DWORD *)&v166->__pad_74[40];
  v169 = *(_DWORD *)&v166->__pad_74[44];
  aP3.ambientSoundController[1] = *(_DWORD *)&v166->__pad_74[48];
  v170 = v169 / 256;
  if ( (unsigned __int16)(*(_DWORD *)v182 / 256) == (unsigned __int16)(v168 / 256)
    && (unsigned __int16)(*(_DWORD *)&v182[4] / 256) == (_WORD)v170 )
  {
    v173 = v166->__pad_74[0];
    v166->__pad_74[0] = 0;
    (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 12) + 436))(this->q00C, v182);
    *(_BYTE *)(this->q00C + 116) = v173;
    return 0;
  }
  else
  {
    (*(void (__thiscall **)(MouseClass *, _DWORD))(v166->field_0 + 292))(v166, 0);
    (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 12) + 436))(this->q00C, v182);
    fallRate = aP3.fallRate;
    v171 = (IUnknown *)aP3.owningHouseIndex;
    if ( *(char *)(aP3.owningHouseIndex + 283) != *(char *)(aP3.fallRate + 283) - 4 )
      goto LABEL_189;
    if ( (*(_DWORD *)(aP3.owningHouseIndex + 320) & 0x100) == 0 )
      goto LABEL_190;
    *(_BYTE *)(this->q00C + 140) = 1;
LABEL_189:
    if ( (v171->field_140 & 0x100) == 0 )
    {
LABEL_190:
      if ( (*(_DWORD *)(fallRate + 320) & 0x100) != 0 )
        *(_BYTE *)(this->q00C + 140) = 0;
    }
    (*(void (__thiscall **)(int, int))(**(_DWORD **)(this + 12) + 292))(fallRate, 1);
    return 0;
  }
}
}
} // namespace gamemd

// 0x6A1C80
namespace gamemd {
char WalkLocomotion::Update(unsigned char * a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall WalkLocomotion_Update(int this, _BYTE *a2, int a3, int a4)
{
  int v5; // ecx
  unsigned int v6; // ebx
  int v7; // ecx
  char v8; // al
  char result; // al
  int v10; // ecx
  int v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // eax
  wchar_t *v16; // edi
  int v17; // edx
  wchar_t **v18; // esi
  int v19; // eax
  wchar_t *v20; // eax
  wchar_t *v21; // ecx
  _DWORD *v22; // ebx
  int v23; // ecx
  char v24; // al
  _DWORD *v25; // ecx
  int v26; // ecx
  _DWORD *v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // ecx
  _DWORD *Value; // edi
  _DWORD *v31; // esi
  int v32; // kr0C_4
  unsigned int v33; // edx
  _DWORD *v34; // eax
  _BYTE *v35; // ecx
  int v36; // edi
  unsigned int v37; // esi
  void *v38; // eax
  int v39; // eax
  int v40; // edx
  _DWORD *v41; // edi
  _DWORD *v42; // ecx
  int v43; // esi
  int GroundHeight; // eax
  int ClosestObject; // eax
  _DWORD *v46; // eax
  _DWORD *v47; // eax
  _DWORD *v48; // ecx
  __int64 v49; // rax
  _DWORD *v50; // ecx
  _DWORD *v51; // ecx
  __int64 v52; // rax
  _DWORD *v53; // ecx
  int v54; // eax
  int v55; // eax
  _DWORD *v56; // ecx
  _DWORD *v57; // eax
  int v58; // kr10_4
  int v59; // edx
  __int16 v60; // cx
  _BYTE *v61; // ecx
  int v62; // esi
  void *v63; // eax
  int v64; // eax
  int v65; // eax
  _DWORD *v66; // esi
  _DWORD *v67; // ecx
  int v68; // edi
  int v69; // eax
  int v70; // eax
  _DWORD *v71; // eax
  _DWORD *v72; // eax
  _DWORD *v73; // ecx
  __int64 v74; // rax
  _DWORD *v75; // ecx
  _DWORD *v76; // ecx
  __int64 v77; // rax
  int *v78; // eax
  int v79; // edx
  int v80; // eax
  char *v81; // eax
  int v82; // ecx
  int v83; // edi
  _DWORD *v84; // eax
  _DWORD *v85; // eax
  int v86; // ecx
  int v87; // edx
  _DWORD *v88; // eax
  int v89; // ecx
  _DWORD *v90; // esi
  int v91; // eax
  int v92; // ecx
  int v93; // eax
  int v94; // edx
  int v95; // esi
  int v96; // edx
  _DWORD *v97; // ebx
  int v98; // eax
  int v99; // eax
  _DWORD *v100; // edx
  int v101; // ecx
  int v102; // ecx
  int v103; // edi
  int v104; // esi
  int v105; // eax
  int v106; // edx
  int v107; // eax
  char v108; // bl
  _DWORD *v109; // ecx
  _DWORD *v110; // edx
  wchar_t *v111; // eax
  _DWORD *v112; // eax
  _DWORD *v113; // eax
  int v114; // edx
  int v115; // eax
  double v116; // st7
  _DWORD *v117; // ecx
  __int64 v118; // rax
  _DWORD *v119; // ecx
  _DWORD *v120; // edx
  int v121; // esi
  int v122; // ecx
  _DWORD *v123; // eax
  _DWORD *v124; // eax
  char v125; // al
  int v126; // ecx
  wchar_t *v127; // esi
  wchar_t *v128; // eax
  wchar_t *v129; // ecx
  wchar_t **v130; // edx
  _DWORD *v131; // eax
  _DWORD *v132; // eax
  int Object; // eax
  int *v134; // ecx
  int v135; // esi
  _DWORD *v136; // eax
  int v137; // eax
  int v138; // esi
  void *v139; // eax
  _DWORD *v140; // eax
  int *Coords; // eax
  int v142; // esi
  _DWORD *v143; // edx
  int v144; // edi
  bool v145; // cc
  double v146; // st7
  double v148; // st7
  unsigned __int8 v149; // c0
  unsigned __int8 v150; // c3
  double *v151; // ecx
  int v152; // ecx
  _DWORD *v153; // ecx
  unsigned int v154; // esi
  _DWORD *v155; // eax
  int v156; // edi
  int v157; // ecx
  int v158; // edx
  int v159; // eax
  int v160; // ecx
  double v161; // st7
  char v162; // dl
  int v163; // ecx
  int v164; // ecx
  _DWORD *NeighbourContent; // eax
  int v166; // eax
  int v167; // eax
  unsigned int v168; // eax
  _DWORD *v169; // eax
  int v170; // eax
  int v171; // esi
  int *v172; // edi
  int v173; // eax
  int v174; // ecx
  int v175; // edi
  void *v176; // eax
  int v177; // ebx
  _DWORD *v178; // ecx
  _DWORD *v179; // eax
  int v180; // edi
  _DWORD *v181; // ecx
  int v182; // edx
  int v183; // eax
  int v184; // eax
  double v185; // st7
  _DWORD *v186; // ecx
  __int64 v187; // rax
  _DWORD *v188; // ecx
  _DWORD *v189; // ecx
  _DWORD *v190; // edx
  int v191; // edi
  __int64 v192; // rax
  _DWORD *v193; // eax
  _BYTE *v194; // edx
  int *v195; // esi
  int v196; // edx
  int v197; // eax
  int v198; // ecx
  int v199; // ecx
  int v200; // edx
  bool v201; // zf
  int v202; // eax
  _DWORD *v203; // eax
  int v204; // ecx
  int v205; // [esp+70h] [ebp-6Ch]
  int LandHeight; // [esp+74h] [ebp-68h]
  int v207; // [esp+74h] [ebp-68h]
  _BYTE *v208; // [esp+74h] [ebp-68h]
  int v209; // [esp+74h] [ebp-68h]
  char v210; // [esp+7Ch] [ebp-60h]
  int v211; // [esp+7Ch] [ebp-60h]
  int v212; // [esp+7Ch] [ebp-60h]
  int v213; // [esp+80h] [ebp-5Ch]
  char v214; // [esp+93h] [ebp-49h]
  int v215; // [esp+94h] [ebp-48h] BYREF
  double v216; // [esp+98h] [ebp-44h] BYREF
  int v217; // [esp+A0h] [ebp-3Ch]
  int v218; // [esp+A4h] [ebp-38h] BYREF
  int v219; // [esp+A8h] [ebp-34h] BYREF
  _DWORD *v220; // [esp+ACh] [ebp-30h] BYREF
  int v221; // [esp+B0h] [ebp-2Ch]
  int v222; // [esp+B4h] [ebp-28h]
  int v223; // [esp+B8h] [ebp-24h] BYREF
  int v224; // [esp+BCh] [ebp-20h]
  int v225; // [esp+C0h] [ebp-1Ch]
  _DWORD *v226; // [esp+C4h] [ebp-18h] BYREF
  wchar_t *v227; // [esp+C8h] [ebp-14h]
  int v228; // [esp+CCh] [ebp-10h]
  int v229; // [esp+D0h] [ebp-Ch] BYREF
  wchar_t *v230; // [esp+D4h] [ebp-8h]

  v5 = this->q004;
  v6 = *(_DWORD *)(this->q00C + 1504);
  v215 = this + 4;
  if ( !(*(unsigned __int8 (__stdcall **)(int))(v5 + 16))(this + 4) && v6 == -1 )
  {
    *(_BYTE *)(this + 97) = 0;
    if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
      || this->WalkLocomotion_field_0x44 != MEMORY[0xB077FC]
      || this->q048 != MEMORY[0xB07800] )
    {
      this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
      this->WalkLocomotion_field_0x44 = MEMORY[0xB077FC];
      this->q048 = MEMORY[0xB07800];
      *(_BYTE *)(this + 99) = 0;
    }
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 388))(this->q00C) == 2 )
    {
      v8 = (*(int (__thiscall **)(int, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(v7, 0, 1);
      *a2 = v8;
      return 0;
    }
    return 0;
  }
  if ( *(_DWORD *)(this + 52) == g_OverlayTypeConfig
    && *(_DWORD *)(this + 56) == MEMORY[0xB077FC]
    && *(_DWORD *)(this + 60) == MEMORY[0xB07800] )
  {
    return 0;
  }
  if ( *(_DWORD *)(this->q00C + 720) && TechnoClass::CountPassengers() )
    return 1;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 468))(this->q00C)
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 472))(this->q00C) )
  {
    return 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 892))(this->q00C)
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 896))(this->q00C) )
  {
    return 1;
  }
  if ( v6 != -1 )
  {
    v10 = *(_DWORD *)(this->q00C + 1444);
    if ( v10 && (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 44))(v10) == 1
      || (v11 = *(_DWORD *)(this->q00C + 1444)) != 0
      && (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) == 15 )
    {
      v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(**(_DWORD **)(this + 12) + 72))(
                        this->q00C,
                        &v226);
      v13 = Coord::Subtract(
              &v216,
              *v12 - *(_DWORD *)(this + 52),
              v12[1] - *(_DWORD *)(this + 56),
              v12[2] - *(_DWORD *)(this + 60));
      v220 = (_DWORD *)*v13;
      v221 = v13[1];
      v222 = v13[2];
      v14 = (int)Coord::Length((int *)&v220) / 256;
      if ( v14 < 24 )
      {
        *(_DWORD *)(this->q00C + 4 * v14 + 1504) = -1;
        v6 = *(_DWORD *)(this->q00C + 1504);
      }
    }
    if ( v6 != -1 )
      goto LABEL_125;
  }
  v15 = this->q00C;
  v16 = g_CurrentFrame;
  v17 = *(_DWORD *)(v15 + 1600);
  v18 = (wchar_t **)(v15 + 1600);
  v19 = *(_DWORD *)(v15 + 1608);
  if ( v17 != -1 )
  {
    if ( (int)g_CurrentFrame - v17 >= v19 )
      goto LABEL_31;
    v19 -= (int)g_CurrentFrame - v17;
  }
  if ( v19 )
    return 0;
LABEL_31:
  v20 = (wchar_t *)Math::RoundToInt(*((double *)g_RulesClass_Instance + 748) * 900.0);
  v21 = v227;
  *v18 = v16;
  v22 = (_DWORD *)(this + 52);
  v18[1] = v21;
  v18[2] = v20;
  v23 = this->q00C;
  LOWORD(v216) = *(_DWORD *)(this + 52) / 256;
  WORD1(v216) = *(_DWORD *)(this + 56) / 256;
  v24 = FootClass::MovementStep(v23, (int)v16, SLODWORD(v216), 0, 0, v213);
  v25 = *(_DWORD **)(this + 12);
  if ( !v24 )
  {
    if ( !v25 )
    {
      *a2 = 1;
      return 0;
    }
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*v25 + 716))(v25, this + 52) )
    {
      (*(void (__thiscall **)(int, _DWORD, int))(**(_DWORD **)(this + 12) + 1152))(v26, 0, 1);
      return 0;
    }
    if ( *v22 == g_OverlayTypeConfig
      && *(_DWORD *)(this + 56) == MEMORY[0xB077FC]
      && *(_DWORD *)(this + 60) == MEMORY[0xB07800] )
    {
      return 0;
    }
    if ( !(unsigned __int8)FootClass::ClearSomeVector2(this->q00C)
      && (v27 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(**(_DWORD **)(this + 12) + 72))(
                            this->q00C,
                            &v226),
          v28 = Coord::Subtract(&v216, *v27 - *v22, v27[1] - *(_DWORD *)(this + 56), v27[2] - *(_DWORD *)(this + 60)),
          v220 = (_DWORD *)*v28,
          v221 = v28[1],
          v222 = v28[2],
          (int)Coord::Length((int *)&v220) < *((_DWORD *)g_RulesClass_Instance + 1478))
      && ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 388))(this->q00C) == 2
       || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 388))(this->q00C) == 11) )
    {
      if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
        || this->WalkLocomotion_field_0x44 != MEMORY[0xB077FC]
        || this->q048 != MEMORY[0xB07800] )
      {
        this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
        this->WalkLocomotion_field_0x44 = MEMORY[0xB077FC];
        this->q048 = MEMORY[0xB07800];
        *(_BYTE *)(this + 99) = 0;
      }
      v29 = *(_DWORD **)(this + 12);
      if ( v29[358] )
      {
        FootClass::ClearPathIndex(v29);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
               this->q00C,
               0,
               1) )
        {
          return 1;
        }
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v29 + 1152))(v29, 0, 1);
      }
      if ( !*(_BYTE *)(this->q00C + 144) )
        return 0;
    }
    else
    {
      Value = ProgressTimer::GetValue((_WORD *)(this->q00C + 904), &a3);
      v31 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(**(_DWORD **)(this + 12) + 72))(
                        this->q00C,
                        &v226);
      v32 = v31[1];
      v33 = ((unsigned int)((*Value >> 12) + 1) >> 1) & 7;
      LOWORD(a2) = LOWORD(MEMORY[0x89F688][v33]) + *v31 / 256;
      HIWORD(a2) = v32 / 256 + HIWORD(MEMORY[0x89F688][v33]);
      a4 = (int)a2;
      if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&a4, 1) )
      {
        v34 = ProgressTimer::GetValue((_WORD *)(this->q00C + 904), &a2);
        v35 = *(_BYTE **)(this + 12);
        v36 = *(_DWORD *)v35;
        v37 = ((unsigned int)((*v34 >> 12) + 1) >> 1) & 7;
        LandHeight = ObjectClass::GetLandHeight(v35);
        v38 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a4);
        v39 = (*(int (__thiscall **)(_DWORD, void *, unsigned int, int, _DWORD, int))(v36 + 428))(
                this->q00C,
                v38,
                v37,
                LandHeight,
                0,
                1);
        if ( v39 == 3 )
        {
          v40 = this->q00C;
          a2 = (_BYTE *)a4;
          Cell::IsPassableAllied(v40, (__int16 *)&a2);
        }
        else if ( v39 == 6 )
        {
          v41 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a4);
          v42 = (_DWORD *)(this->q00C + 156);
          v226 = (_DWORD *)*v42;
          v43 = v42[2];
          v227 = (wchar_t *)v42[1];
          v217 = 0;
          v220 = 0;
          v221 = 0;
          LODWORD(v216) = ((__int16)a4 << 8) + 128;
          HIDWORD(v216) = (SHIWORD(a4) << 8) + 128;
          GroundHeight = Cell::GetGroundHeight(&v216);
          ClosestObject = Object::FindClosestObjectCell(v41, &v220, v43 > GroundHeight + 2 * MEMORY[0xB07838], 0);
          if ( ClosestObject )
          {
            if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(this->q00C + 540), ClosestObject)
              && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C)
                           + 3220) )
            {
              v46 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(**(_DWORD **)(this + 12) + 72))(
                                this->q00C,
                                &v226);
              v47 = Coord::Subtract(
                      &v216,
                      *v46 - *v22,
                      v46[1] - *(_DWORD *)(this + 56),
                      v46[2] - *(_DWORD *)(this + 60));
              v220 = (_DWORD *)*v47;
              v221 = v47[1];
              v222 = v47[2];
              if ( (int)Coord::Length((int *)&v220) < *((_DWORD *)g_RulesClass_Instance + 1478)
                && !Team::AllMembersValid(*(int **)(this + 12)) )
              {
                v48 = (_DWORD *)(this->q00C + 156);
                v226 = (_DWORD *)*v48;
                v227 = (wchar_t *)v48[1];
                v49 = *(_DWORD *)(this + 60) - v48[2];
                if ( (int)((HIDWORD(v49) ^ v49) - HIDWORD(v49)) < 2 * MEMORY[0xB07838] )
                {
                  v220 = (_DWORD *)*v48;
                  v221 = v48[1];
                  v222 = v48[2];
                  if ( *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v220) + 59) != 10 )
                  {
                    if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
                      || this->WalkLocomotion_field_0x44 != MEMORY[0xB077FC]
                      || this->q048 != MEMORY[0xB07800] )
                    {
                      this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
                      this->WalkLocomotion_field_0x44 = MEMORY[0xB077FC];
                      this->q048 = MEMORY[0xB07800];
                      *(_BYTE *)(this + 99) = 0;
                    }
                    v50 = *(_DWORD **)(this + 12);
                    if ( !v50[358] )
                    {
                      (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v50 + 1152))(v50, 0, 1);
                      return 0;
                    }
                    FootClass::ClearPathIndex(v50);
                    return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
                             this->q00C,
                             0,
                             1) != 0;
                  }
                }
              }
              if ( (v41[80] & 0x100) == 0
                || (v51 = *(_DWORD **)(this + 12),
                    LOBYTE(a2) = 1,
                    v51 += 39,
                    v226 = (_DWORD *)*v51,
                    v227 = (wchar_t *)v51[1],
                    v52 = v51[2] / MEMORY[0xB07838] - *((char *)v41 + 283),
                    (int)((HIDWORD(v52) ^ v52) - HIDWORD(v52)) <= 2) )
              {
                LOBYTE(a2) = 0;
              }
              Cell::ApplyDamage(v41, (int)&g_OverlayTypeConfig, 1, 1, (char)a2);
            }
          }
        }
      }
      v53 = *(_DWORD **)(this + 12);
      v54 = v53[403];
      if ( v54 <= 0 )
      {
        if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
          || this->WalkLocomotion_field_0x44 != MEMORY[0xB077FC]
          || this->q048 != MEMORY[0xB07800] )
        {
          this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
          this->WalkLocomotion_field_0x44 = MEMORY[0xB077FC];
          this->q048 = MEMORY[0xB07800];
          *(_BYTE *)(this + 99) = 0;
        }
        if ( v53[358] )
        {
          FootClass::ClearPathIndex(v53);
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
                 this->q00C,
                 0,
                 1) )
          {
            return 1;
          }
        }
        else
        {
          (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v53 + 1152))(v53, 0, 1);
        }
        v55 = this->q00C;
        if ( !*(_BYTE *)(v55 + 144) )
          return 0;
        if ( *(_BYTE *)(v55 + 1674) )
          PlayVocClass(*((_DWORD *)g_RulesClass_Instance + 448), 0x2000, 1.0, 0);
        *(_BYTE *)(this->q00C + 1674) = 0;
      }
      else
      {
        v53[403] = v54 - 1;
      }
    }
    if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v215 + 16))(v215) )
    {
      v56 = *(_DWORD **)(this + 12);
      if ( v56[173] )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v56 + 940))(v56, v56[173]) )
        {
          *(_BYTE *)(this->q00C + 1672) = 1;
          if ( *(_DWORD *)(this->q00C + 1492) )
            TeamClass::WakeUpAllMembers();
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 968))(this->q00C, 0);
        }
      }
    }
    if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
      || this->WalkLocomotion_field_0x44 != MEMORY[0xB077FC]
      || this->q048 != MEMORY[0xB07800] )
    {
      this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
      this->WalkLocomotion_field_0x44 = MEMORY[0xB077FC];
      this->q048 = MEMORY[0xB07800];
      *(_BYTE *)(this + 99) = 0;
    }
    this->WalkLocomotion_field_0x58 = -1;
    *(_BYTE *)(this + 97) = 0;
    return 0;
  }
  if ( v25[376] == 8 )
    return 0;
  v57 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD **))(*v25 + 72))(v25, &v226);
  v58 = v57[1];
  v59 = *(_DWORD *)(this->q00C + 1504) & 7;
  v60 = HIWORD(MEMORY[0x89F688][v59]);
  LOWORD(v216) = *v57 / 256 + LOWORD(MEMORY[0x89F688][v59]);
  WORD1(v216) = v58 / 256 + v60;
  v218 = LODWORD(v216);
  if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v218, 1) )
  {
    v61 = *(_BYTE **)(this + 12);
    v62 = *(_DWORD *)v61;
    v207 = ObjectClass::GetLandHeight(v61);
    v205 = *(_DWORD *)(this->q00C + 1504);
    v63 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v218);
    v64 = (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD, int))(v62 + 428))(
            this->q00C,
            v63,
            v205,
            v207,
            0,
            1);
    if ( v64 == 3 )
    {
      v65 = this->q00C;
      v219 = v218;
      Cell::IsPassableAllied(v65, (__int16 *)&v219);
    }
    else if ( v64 == 6 )
    {
      v66 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v218);
      v67 = (_DWORD *)(this->q00C + 156);
      LODWORD(v216) = ((__int16)v218 << 8) + 128;
      HIDWORD(v216) = (SHIWORD(v218) << 8) + 128;
      v217 = 0;
      v226 = (_DWORD *)*v67;
      v227 = (wchar_t *)v67[1];
      v68 = v67[2];
      v220 = 0;
      v221 = 0;
      v69 = Cell::GetGroundHeight(&v216);
      v70 = Object::FindClosestObjectCell(v66, &v220, v68 > v69 + 2 * MEMORY[0xB07838], 0);
      if ( v70 )
      {
        if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(this->q00C + 540), v70)
          && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C) + 3220) )
        {
          v71 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(**(_DWORD **)(this + 12) + 72))(
                            this->q00C,
                            &v226);
          v72 = Coord::Subtract(&v216, *v71 - *v22, v71[1] - *(_DWORD *)(this + 56), v71[2] - *(_DWORD *)(this + 60));
          v220 = (_DWORD *)*v72;
          v221 = v72[1];
          v222 = v72[2];
          if ( (int)Coord::Length((int *)&v220) < *((_DWORD *)g_RulesClass_Instance + 1478)
            && !Team::AllMembersValid(*(int **)(this + 12)) )
          {
            v73 = (_DWORD *)(this->q00C + 156);
            v226 = (_DWORD *)*v73;
            v227 = (wchar_t *)v73[1];
            v74 = *(_DWORD *)(this + 60) - v73[2];
            if ( (int)((HIDWORD(v74) ^ v74) - HIDWORD(v74)) < 2 * MEMORY[0xB07838] )
            {
              v220 = (_DWORD *)*v73;
              v221 = v73[1];
              v222 = v73[2];
              if ( *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v220) + 59) != 10 )
              {
                if ( this->WalkLocomotion_field_0x40 == g_OverlayTypeConfig
                  && this->WalkLocomotion_field_0x44 == MEMORY[0xB077FC]
                  && this->q048 == MEMORY[0xB07800] )
                {
                  goto LABEL_118;
                }
                this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
                this->WalkLocomotion_field_0x44 = MEMORY[0xB077FC];
                this->q048 = MEMORY[0xB07800];
                goto LABEL_117;
              }
            }
          }
          if ( (v66[80] & 0x100) == 0
            || (v76 = *(_DWORD **)(this + 12),
                LOBYTE(v216) = 1,
                v76 += 39,
                v226 = (_DWORD *)*v76,
                v227 = (wchar_t *)v76[1],
                v77 = v76[2] / MEMORY[0xB07838] - *((char *)v66 + 283),
                (int)((HIDWORD(v77) ^ v77) - HIDWORD(v77)) <= 2) )
          {
            LOBYTE(v216) = 0;
          }
          Cell::ApplyDamage(v66, (int)&g_OverlayTypeConfig, 1, 1, SLOBYTE(v216));
        }
      }
    }
  }
  *(_DWORD *)(this->q00C + 1612) = 10;
  v6 = *(_DWORD *)(this->q00C + 1504);
LABEL_125:
  if ( v6 == 8 )
    return 0;
  v78 = Coord::Subtract(
          &v226,
          *(_DWORD *)(this->q00C + 156) + MEMORY[0x89F6D8][2 * (v6 & 7)],
          *(_DWORD *)(this->q00C + 160) + MEMORY[0x89F6DC][2 * (v6 & 7)],
          *(_DWORD *)(this->q00C + 164));
  v223 = *v78;
  v224 = v78[1];
  v79 = v78[2];
  v80 = this->q00C + 156;
  v225 = v79;
  v220 = *(_DWORD **)v80;
  v221 = *(_DWORD *)(v80 + 4);
  v222 = *(_DWORD *)(v80 + 8);
  v81 = (char *)Coord::To_Cell(&MEMORY[0x87F7E8], &v220);
  v82 = this->q00C;
  v83 = v81[283] + (*(_BYTE *)(v82 + 140) != 0 ? 4 : 0);
  v84 = Coord::Subtract(
          &v226,
          *(_DWORD *)(v82 + 156) + MEMORY[0x89F6D8][2 * (v6 & 7)],
          *(_DWORD *)(v82 + 160) + MEMORY[0x89F6DC][2 * (v6 & 7)],
          *(_DWORD *)(v82 + 164));
  v220 = (_DWORD *)*v84;
  v221 = v84[1];
  v222 = v84[2];
  v85 = Coord::To_Cell(&MEMORY[0x87F7E8], &v220);
  v86 = this->q00C;
  if ( *(_BYTE *)(v86 + 140) != ((v85[80] >> 8) & 1) )
    *(_BYTE *)(v86 + 1675) = 1;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 668))(this->q00C) )
    return 1;
  LOWORD(v216) = v223 / 256;
  v87 = this->q00C;
  WORD1(v216) = v224 / 256;
  v219 = LODWORD(v216);
  if ( !Cell::IsPassableAllied(v87, (__int16 *)&v219) )
    return 1;
  if ( abs16(*(_WORD *)ProgressTimer::GetValue((_WORD *)(this->q00C + 904), &v220) - ((_WORD)v6 << 13)) )
  {
    LOWORD(a4) = (_WORD)v6 << 13;
    (*(void (__stdcall **)(int, int))(*(_DWORD *)v215 + 76))(v215, a4);
    return 1;
  }
  LOWORD(v216) = v223 / 256;
  WORD1(v216) = v224 / 256;
  v215 = LODWORD(v216);
  v88 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
  v89 = this->q00C;
  v90 = v88;
  v220 = v88;
  v214 = 0;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v89 + 292))(v89, 0);
  v91 = (*(int (__thiscall **)(_DWORD, _DWORD *, unsigned int, int, _DWORD, int))(**(_DWORD **)(this + 12) + 428))(
          this->q00C,
          v90,
          v6,
          v83,
          0,
          1);
  v92 = this->q00C;
  LODWORD(v216) = v91;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v92 + 292))(v92, 1);
  if ( SLODWORD(v216) < 7
    && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C) + 3220)
    || (LODWORD(v216) == 5 || LODWORD(v216) == 4)
    && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C) + 3368)
    && !v90[17] )
  {
    LODWORD(v216) = 0;
  }
  v93 = v90[17];
  v94 = LODWORD(v216);
  if ( v93 != -1 && !LODWORD(v216) && *(_BYTE *)(*((_DWORD *)g_BuildingTypeClass_Array + v93) + 557) )
  {
LABEL_148:
    v214 = 1;
    goto LABEL_149;
  }
  if ( v93 != -1 )
  {
    if ( !LODWORD(v216) )
    {
      if ( !*(_BYTE *)(*((_DWORD *)g_BuildingTypeClass_Array + v93) + 680)
        || *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C) + 1460) != 12 )
      {
        goto LABEL_149;
      }
      goto LABEL_148;
    }
    goto LABEL_153;
  }
  if ( LODWORD(v216) )
  {
    v94 = LODWORD(v216);
LABEL_153:
    if ( v94 == 3 )
    {
      v96 = this->q00C;
      a4 = v215;
      Cell::IsPassableAllied(v96, (__int16 *)&a4);
      goto LABEL_155;
    }
    if ( v94 == 6 )
    {
      if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C) + 3220) )
      {
        v109 = *(_DWORD **)(this + 12);
        if ( (_BYTE)a3 )
        {
          v109[376] = -1;
          v110 = (_DWORD *)(this->q00C + 1600);
          *v110 = g_CurrentFrame;
          v111 = v227;
          goto LABEL_327;
        }
        v112 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD **))(*v109 + 72))(v109, &v226);
        v113 = Coord::Subtract(
                 &v229,
                 *v112 - *(_DWORD *)(this + 52),
                 v112[1] - *(_DWORD *)(this + 56),
                 v112[2] - *(_DWORD *)(this + 60));
        v220 = (_DWORD *)*v113;
        v114 = v113[1];
        v115 = v113[2];
        v221 = v114;
        v222 = v115;
        v116 = Math::Sqrt((double)v115 * (double)v115 + (double)v114 * (double)v114 + (double)(int)v220
                                                                                    * (double)(int)v220);
        if ( (int)Math::RoundToInt(v116) >= *((_DWORD *)g_RulesClass_Instance + 1478)
          || (v117 = (_DWORD *)(this->q00C + 156),
              v226 = (_DWORD *)*v117,
              v227 = (wchar_t *)v117[1],
              v118 = *(_DWORD *)(this + 60) - v117[2],
              (int)((HIDWORD(v118) ^ v118) - HIDWORD(v118)) >= 2 * MEMORY[0xB07838])
          || (v220 = (_DWORD *)*v117,
              v221 = v117[1],
              v222 = v117[2],
              *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v220) + 59) == 10) )
        {
          if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 80) & 0x100) == 0
            || (v120 = (_DWORD *)(this->q00C + 156),
                v226 = (_DWORD *)*v120,
                v227 = (wchar_t *)v120[1],
                v121 = v120[2],
                v122 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 283),
                LOBYTE(a4) = 1,
                (int)abs32(v121 / MEMORY[0xB07838] - v122) <= 2) )
          {
            LOBYTE(a4) = 0;
          }
          v210 = a4;
          v123 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
          Cell::ApplyDamage(v123, (int)&g_OverlayTypeConfig, 1, 1, v210);
        }
        else
        {
          if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
            || this->WalkLocomotion_field_0x44 != MEMORY[0xB077FC]
            || this->q048 != MEMORY[0xB07800] )
          {
            this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
            this->WalkLocomotion_field_0x44 = MEMORY[0xB077FC];
            this->q048 = MEMORY[0xB07800];
            *(_BYTE *)(this + 99) = 0;
          }
          v119 = *(_DWORD **)(this + 12);
          if ( v119[358] )
          {
            FootClass::ClearPathIndex(v119);
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
                   this->q00C,
                   0,
                   1) )
            {
              return 1;
            }
          }
          else
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v119 + 1152))(v119, 0, 1);
          }
        }
      }
LABEL_155:
      v97 = (_DWORD *)(this + 64);
      if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
        || this->WalkLocomotion_field_0x44 != MEMORY[0xB077FC]
        || this->q048 != MEMORY[0xB07800] )
      {
        *v97 = g_OverlayTypeConfig;
        this->WalkLocomotion_field_0x44 = MEMORY[0xB077FC];
        v98 = MEMORY[0xB07800];
        *(_BYTE *)(this + 99) = 0;
        this->q048 = v98;
      }
      if ( LODWORD(v216) == 2 )
      {
        v99 = this->q00C;
        if ( !*(_BYTE *)(v99 + 1719) )
        {
          *(_BYTE *)(v99 + 1719) = 1;
          v100 = (_DWORD *)(this->q00C + 1640);
          v101 = *((_DWORD *)g_RulesClass_Instance + 1498);
          *v100 = g_CurrentFrame;
          v100[1] = v230;
          v100[2] = v101;
        }
        v102 = this->q00C;
        v103 = (int)g_CurrentFrame;
        v104 = *(_DWORD *)(v102 + 1600);
        v105 = *(_DWORD *)(v102 + 1608);
        if ( v104 != -1 )
        {
          if ( (int)g_CurrentFrame - v104 >= v105 )
            goto LABEL_166;
          v105 -= (int)g_CurrentFrame - v104;
        }
        if ( !v105 )
        {
LABEL_166:
          if ( *(_BYTE *)(v102 + 1719) )
          {
            v106 = *(_DWORD *)(v102 + 1640);
            v107 = *(_DWORD *)(v102 + 1648);
            if ( v106 != -1 )
            {
              v103 = (int)g_CurrentFrame - v106;
              if ( (int)g_CurrentFrame - v106 >= v107 )
              {
LABEL_171:
                v108 = 1;
LABEL_199:
                LOWORD(a4) = *(_DWORD *)(this + 52) / 256;
                HIWORD(a4) = *(_DWORD *)(this + 56) / 256;
                v125 = FootClass::MovementStep(v102, v103, a4, 0, (v108 != 0) + 1, v213);
                v126 = this->q00C;
                if ( !v126 )
                {
                  *a2 = 1;
                  return 0;
                }
                if ( v125 || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v126 + 716))(v126, this + 52) )
                {
                  v127 = g_CurrentFrame;
                  v128 = (wchar_t *)Math::RoundToInt(*((double *)g_RulesClass_Instance + 748) * 900.0);
                  v129 = v230;
                  v130 = (wchar_t **)(this->q00C + 1600);
                  *v130 = v127;
                  v130[1] = v129;
                  v130[2] = v128;
                  return 1;
                }
                v75 = *(_DWORD **)(this + 12);
LABEL_204:
                (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v75 + 1152))(v75, 0, 1);
                return 0;
              }
              v107 -= v103;
            }
            if ( !v107 )
              goto LABEL_171;
          }
          v108 = 0;
          goto LABEL_199;
        }
        goto LABEL_209;
      }
      if ( LODWORD(v216) != 5 && LODWORD(v216) != 4 )
      {
LABEL_209:
        if ( *(_BYTE *)(this->q00C + 1674) )
          PlayVocClass(*((_DWORD *)g_RulesClass_Instance + 448), 0x2000, 1.0, 0);
        goto LABEL_219;
      }
      if ( !(_BYTE)a3 )
      {
        v220 = 0;
        v221 = 0;
        v131 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
        if ( Object::FindObjectCell(v131, &v220, 0) )
        {
          v220 = 0;
          v221 = 0;
          v132 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
          Object = Object::FindObjectCell(v132, &v220, 0);
          if ( !Object::IsAlliedWithObjectHouse(*(_DWORD **)(this->q00C + 540), Object) )
          {
            v134 = *(int **)(this + 12);
            v220 = 0;
            v221 = 0;
            v135 = *v134;
            v136 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
            v137 = Object::FindObjectCell(v136, &v220, 0);
            (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(v135 + 500))(this->q00C, 1, v137, 0);
          }
        }
        else if ( *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 17) != -1
               && *(_BYTE *)(*((_DWORD *)g_BuildingTypeClass_Array
                             + *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 17))
                           + 680) )
        {
          v138 = **(_DWORD **)(this + 12);
          v139 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
          (*(void (__thiscall **)(_DWORD, int, void *, _DWORD))(v138 + 500))(this->q00C, 1, v139, 0);
        }
LABEL_219:
        if ( LODWORD(v216) != 7 )
        {
          *(_BYTE *)(this->q00C + 1674) = 0;
          this->WalkLocomotion_field_0x58 = -1;
          return 1;
        }
        if ( (_BYTE)a3 )
        {
          *(_DWORD *)(this->q00C + 1504) = -1;
          v110 = (_DWORD *)(this->q00C + 1600);
          *v110 = g_CurrentFrame;
          v111 = v230;
          goto LABEL_327;
        }
        if ( *v97 != g_OverlayTypeConfig
          || this->WalkLocomotion_field_0x44 != MEMORY[0xB077FC]
          || this->q048 != MEMORY[0xB07800] )
        {
          *v97 = g_OverlayTypeConfig;
          this->WalkLocomotion_field_0x44 = MEMORY[0xB077FC];
          this->q048 = MEMORY[0xB07800];
          goto LABEL_117;
        }
LABEL_118:
        v75 = *(_DWORD **)(this + 12);
        if ( !v75[358] )
          goto LABEL_119;
        goto LABEL_333;
      }
      *(_DWORD *)(this->q00C + 1504) = -1;
      v110 = (_DWORD *)(this->q00C + 1600);
      *v110 = g_CurrentFrame;
      v111 = v230;
LABEL_327:
      v110[1] = v111;
      v110[2] = 0;
      return WalkLocomotion::Update(a2, 0, 0);
    }
    if ( v94 != 1 )
      goto LABEL_155;
    v124 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
    CellClass::DamageAllObjects(v124);
    if ( (_BYTE)a3 )
    {
      v208 = a2;
      *(_DWORD *)(this->q00C + 1504) = -1;
      return WalkLocomotion::Update(v208, 0, 0);
    }
    if ( this->WalkLocomotion_field_0x40 == g_OverlayTypeConfig
      && this->WalkLocomotion_field_0x44 == MEMORY[0xB077FC]
      && this->q048 == MEMORY[0xB07800] )
    {
      goto LABEL_118;
    }
    this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
    this->WalkLocomotion_field_0x44 = MEMORY[0xB077FC];
    this->q048 = MEMORY[0xB07800];
LABEL_117:
    *(_BYTE *)(this + 99) = 0;
    goto LABEL_118;
  }
LABEL_149:
  if ( (int)abs32(v83 - *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 283)) >= 2 )
  {
    v219 = v83;
    v95 = 1;
  }
  else
  {
    v219 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 283);
    v95 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 59);
  }
  v216 = MEMORY[0x89EA40][9 * v95
                        + *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C)
                                    + 1660)];
  if ( v216 > 1.0 )
    v216 = 1.0;
  v140 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
  Coords = CellClass::GetCoords(v140, &v229);
  v142 = Cell::GetGroundHeight(Coords);
  v143 = (_DWORD *)(this->q00C + 156);
  v226 = (_DWORD *)*v143;
  v227 = (wchar_t *)v143[1];
  v228 = v143[2];
  v144 = Cell::GetGroundHeight(&v226);
  v145 = v142 < v144;
  if ( v142 > v144 )
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(this->q00C) == 1 )
    {
      if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C) + 1660) == 1 )
        v146 = v216 * *((double *)g_RulesClass_Instance + 237);
      else
        v146 = v216 * *((double *)g_RulesClass_Instance + 239);
LABEL_241:
      v216 = v146;
      goto LABEL_242;
    }
    v145 = v142 < v144;
  }
  if ( v145 && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(this->q00C) == 1 )
  {
    if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C) + 1660) == 1 )
      v146 = v216 * *((double *)g_RulesClass_Instance + 238);
    else
      v146 = v216 * *((double *)g_RulesClass_Instance + 240);
    goto LABEL_241;
  }
LABEL_242:
  if ( v216 == 0.0 )
    v216 = 0.5;
  BuildingClass::GetHealthRatio(*(int **)(this + 12));
  v148 = v216;
  if ( v149 | v150 )
  {
    v148 = v216 * 0.75;
    v216 = v216 * 0.75;
  }
  if ( this->q058 >= 64 )
  {
    v151 = *(double **)(this + 12);
    if ( v148 != v151[175] )
      (*(void (__thiscall **)(double *, _DWORD, _DWORD))(*(_DWORD *)v151 + 1348))(v151, LODWORD(v216), HIDWORD(v216));
  }
  else
  {
    *(double *)(this + 80) = v148;
  }
  v152 = this->q00C;
  LOWORD(v216) = v223 / 256;
  WORD1(v216) = v224 / 256;
  (*(void (__thiscall **)(int, double *, int))(*(_DWORD *)v152 + 1332))(v152, &v216, 1);
  v153 = *(_DWORD **)(this + 12);
  v154 = v153[377];
  if ( v154 == -1 )
  {
    v155 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v153 + 72))(v153, &v229);
    v156 = *(_DWORD *)(this + 56);
    v157 = *v155 - *(_DWORD *)(this + 52);
    v158 = v155[1];
    v159 = v155[2];
    LODWORD(v216) = v157;
    v160 = *(_DWORD *)(this + 60);
    HIDWORD(v216) = v158 - v156;
    v217 = v159 - v160;
    v161 = Math::Sqrt(
             (double)(v159 - v160) * (double)(v159 - v160)
           + (double)(v158 - v156) * (double)(v158 - v156)
           + (double)SLODWORD(v216) * (double)SLODWORD(v216));
    if ( (int)Math::RoundToInt(v161) <= 512 )
    {
LABEL_262:
      v154 = v6;
      goto LABEL_263;
    }
    v162 = *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C) + 3220);
    v163 = this->q00C;
    LOWORD(v216) = *(_DWORD *)(this + 52) / 256;
    WORD1(v216) = *(_DWORD *)(this + 56) / 256;
    result = FootClass::MovementStep(v163, v156, SLODWORD(v216), v162 != 0, 0, v213);
    if ( !result )
    {
      v164 = this->q00C;
      if ( !v164 )
      {
        *a2 = 1;
        return result;
      }
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v164 + 716))(v164, this + 52) )
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1152))(this->q00C, 0, 1);
    }
    v154 = *(_DWORD *)(this->q00C + 1508);
  }
  if ( v154 == 8 )
    v154 = v6;
  if ( v154 == -1 || (_BYTE)a4 )
    goto LABEL_262;
LABEL_263:
  if ( v154 != -1
    && (NeighbourContent = Cell::GetNeighbourContent(v220, v154)) != 0
    && (v166 = NeighbourContent[17], v166 != -1)
    && ((v167 = *((_DWORD *)g_BuildingTypeClass_Array + v166), *(_BYTE *)(v167 + 557))
     || *(_BYTE *)(v167 + 680)
     && *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C) + 1460) == 12)
    || v214 )
  {
    v154 = v6;
    *(_BYTE *)(this + 100) = 1;
  }
  else
  {
    *(_BYTE *)(this + 100) = 0;
  }
  v168 = v154 + 8 * v6;
  *(_BYTE *)(this + 96) = 0;
  this->WalkLocomotion_field_0x58 = v168;
  if ( !byte_7F2A40[12 * v168] )
    this->WalkLocomotion_field_0x58 = 9 * v6;
  if ( (dword_7F2A48[3 * this->WalkLocomotion_field_0x58] & 8) != 0 )
  {
    v211 = this->q00C;
    v169 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
    if ( CrateClass::ProcessPickup(v169, v211) || (v170 = this->q00C, *(_BYTE *)(v170 + 129)) )
    {
      v172 = *(int **)(this + 12);
      if ( !*((_BYTE *)v172 + 144) )
        return 0;
      v173 = v154 & 7;
      v174 = v224 + MEMORY[0x89F6DC][2 * v173];
      v223 += MEMORY[0x89F6D8][2 * v173];
      v224 = v174;
      LOWORD(a4) = v223 / 256;
      HIWORD(a4) = v174 / 256;
      v209 = v219;
      v215 = a4;
      v175 = *v172;
      v176 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
      v171 = (*(int (__thiscall **)(_DWORD, void *, unsigned int, int, _DWORD, int))(v175 + 428))(
               this->q00C,
               v176,
               v154,
               v209,
               0,
               1);
      if ( v171 < 7
        && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C) + 3220)
        || (v171 == 4 || v171 == 5)
        && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->q00C) + 3368)
        && !*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 17) )
      {
        v171 = 0;
      }
    }
    else
    {
      v171 = 7;
      if ( !*(_BYTE *)(v170 + 144) )
        return 0;
    }
    v75 = *(_DWORD **)(this + 12);
    if ( !*((_BYTE *)v75 + 144) )
      return 0;
    if ( v171 )
    {
      v177 = a3;
      switch ( v171 )
      {
        case 3:
          a4 = v215;
          Cell::IsPassableAllied((int)v75, (__int16 *)&a4);
          goto LABEL_291;
        case 2:
          return WalkLocomotion::Update(a2, a3, 1);
        case 6:
          if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v75 + 132))(v75) + 3220) )
            goto LABEL_291;
          v178 = *(_DWORD **)(this + 12);
          if ( (_BYTE)v177 )
          {
            v178[376] = -1;
            v110 = (_DWORD *)(this->q00C + 1600);
            *v110 = g_CurrentFrame;
            v111 = v230;
            goto LABEL_327;
          }
          v179 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v178 + 72))(v178, &v229);
          v180 = *(_DWORD *)(this + 56);
          v181 = (_DWORD *)(*v179 - *(_DWORD *)(this + 52));
          v182 = v179[1];
          v183 = v179[2];
          v220 = v181;
          v184 = v183 - *(_DWORD *)(this + 60);
          v221 = v182 - v180;
          v222 = v184;
          v185 = Math::Sqrt(
                   (double)(int)v181 * (double)(int)v181
                 + (double)v184 * (double)v184
                 + (double)(v182 - v180) * (double)(v182 - v180));
          if ( (int)Math::RoundToInt(v185) >= *((_DWORD *)g_RulesClass_Instance + 1478)
            || (v186 = (_DWORD *)(this->q00C + 156),
                v226 = (_DWORD *)*v186,
                v227 = (wchar_t *)v186[1],
                v187 = *(_DWORD *)(this + 60) - v186[2],
                (int)((HIDWORD(v187) ^ v187) - HIDWORD(v187)) >= 2 * MEMORY[0xB07838])
            || (v226 = (_DWORD *)*v186,
                v227 = (wchar_t *)v186[1],
                v228 = v186[2],
                *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v226) + 59) == 10) )
          {
            v189 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
            if ( (v189[80] & 0x100) == 0
              || (v190 = *(_DWORD **)(this + 12),
                  LOBYTE(a4) = 1,
                  v190 += 39,
                  v191 = *((char *)v189 + 283),
                  v226 = (_DWORD *)*v190,
                  v227 = (wchar_t *)v190[1],
                  v192 = v190[2] / MEMORY[0xB07838] - v191,
                  (int)((HIDWORD(v192) ^ v192) - HIDWORD(v192)) <= 2) )
            {
              LOBYTE(a4) = 0;
            }
            Cell::ApplyDamage(v189, (int)&g_OverlayTypeConfig, 1, 1, a4);
LABEL_291:
            *(_DWORD *)(this->q00C + 1504) = -1;
            this->WalkLocomotion_field_0x58 = -1;
            v223 = g_OverlayTypeConfig;
            v224 = MEMORY[0xB077FC];
            v225 = MEMORY[0xB07800];
            if ( v171 == 5 || v171 == 4 )
              return WalkLocomotion::Update(a2, v177, 1);
            goto LABEL_336;
          }
          if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
            || this->WalkLocomotion_field_0x44 != MEMORY[0xB077FC]
            || this->q048 != MEMORY[0xB07800] )
          {
            this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
            this->WalkLocomotion_field_0x44 = MEMORY[0xB077FC];
            this->q048 = MEMORY[0xB07800];
            *(_BYTE *)(this + 99) = 0;
          }
          v188 = *(_DWORD **)(this + 12);
          if ( !v188[358] )
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v188 + 1152))(v188, 0, 1);
            goto LABEL_291;
          }
          FootClass::ClearPathIndex(v188);
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
                  this->q00C,
                  0,
                  1) )
            goto LABEL_291;
          return 1;
        case 1:
          v193 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
          CellClass::DamageAllObjects(v193);
          if ( (_BYTE)a3 )
          {
            v194 = a2;
            *(_DWORD *)(this->q00C + 1504) = -1;
            return WalkLocomotion::Update(v194, 0, 0);
          }
          if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
            || this->WalkLocomotion_field_0x44 != MEMORY[0xB077FC]
            || this->q048 != MEMORY[0xB07800] )
          {
            this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
            this->WalkLocomotion_field_0x44 = MEMORY[0xB077FC];
            this->q048 = MEMORY[0xB07800];
            *(_BYTE *)(this + 99) = 0;
          }
          v75 = *(_DWORD **)(this + 12);
          if ( v75[358] )
            goto LABEL_333;
LABEL_119:
          (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v75 + 1152))(v75, 0, 1);
          return 0;
      }
      if ( v171 != 7 )
        goto LABEL_291;
      if ( (_BYTE)a3 )
      {
        v75[376] = -1;
        v110 = (_DWORD *)(this->q00C + 1600);
        *v110 = g_CurrentFrame;
        v111 = v230;
        goto LABEL_327;
      }
      if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
        || this->WalkLocomotion_field_0x44 != MEMORY[0xB077FC]
        || this->q048 != MEMORY[0xB07800] )
      {
        this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
        this->WalkLocomotion_field_0x44 = MEMORY[0xB077FC];
        this->q048 = MEMORY[0xB07800];
        *(_BYTE *)(this + 99) = 0;
      }
      if ( v75[358] )
      {
LABEL_333:
        FootClass::ClearPathIndex(v75);
        return (*(int (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
                 this->q00C,
                 0,
                 1);
      }
      goto LABEL_204;
    }
    qmemcpy(v75 + 376, v75 + 378, 0x58u);
    *(_DWORD *)(this->q00C + 1592) = -1;
    *(_BYTE *)(this->q00C + 1675) = 1;
  }
  else
  {
    qmemcpy((void *)(this->q00C + 1504), (const void *)(this->q00C + 1508), 0x5Cu);
  }
LABEL_336:
  v195 = (int *)(this + 64);
  *(_DWORD *)(this->q00C + 1596) = -1;
  LOWORD(a4) = v223 / 256;
  v196 = this->q00C;
  HIWORD(a4) = v224 / 256;
  *(_DWORD *)(v196 + 1368) = a4;
  *(_BYTE *)(this->q00C + 1674) = 0;
  this->q05C = 0;
  v197 = g_OverlayTypeConfig;
  if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
    || this->WalkLocomotion_field_0x44 != MEMORY[0xB077FC]
    || this->q048 != MEMORY[0xB07800] )
  {
    *v195 = g_OverlayTypeConfig;
    this->WalkLocomotion_field_0x44 = MEMORY[0xB077FC];
    v198 = MEMORY[0xB07800];
    *(_BYTE *)(this + 99) = 0;
    this->q048 = v198;
    v197 = g_OverlayTypeConfig;
  }
  v199 = v223;
  v200 = v225;
  v201 = v223 == v197;
  v202 = v224;
  if ( !v201 || v224 != MEMORY[0xB077FC] || v225 != MEMORY[0xB07800] )
  {
    *(_BYTE *)(this + 99) = 1;
    *v195 = v199;
    this->WalkLocomotion_field_0x44 = v202;
    this->q048 = v200;
    v212 = this->q00C;
    v203 = Coord::To_Cell(&MEMORY[0x87F7E8], &v223);
    if ( CrateClass::ProcessPickup(v203, v212) && !*(_BYTE *)(this->q00C + 129) )
    {
      WalkLocomotion::MoveTo(&v223, 1);
      return 0;
    }
    if ( *(_BYTE *)(this->q00C + 144) )
    {
      *v195 = g_OverlayTypeConfig;
      this->WalkLocomotion_field_0x44 = MEMORY[0xB077FC];
      this->q048 = MEMORY[0xB07800];
      *(_BYTE *)(this + 99) = 0;
    }
  }
  v204 = this->q00C;
  this->WalkLocomotion_field_0x58 = -1;
  *(_DWORD *)(v204 + 1504) = -1;
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))(this->q00C, 0, 0);
  return 0;
}

}
} // namespace gamemd

// 0x6A3DB0
namespace gamemd {
unsigned int * WalkLocomotion::TransformCoords(ObjectClass * aP1, IUnknown * aP2, ObjectClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall WalkLocomotion::TransformCoords(_DWORD *this, ObjectClass *aP1, IUnknown *aP2, ObjectClass *aP3)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // edx
  int v9; // ecx

  v4 = *(_DWORD *)aP3->__pad_0; /*0x6a3dbd*/
  v5 = dword_7F2A48[3 * this->q058]; /*0x6a3dc1*/
  v6 = aP2->field_0; /*0x6a3dcf*/
  v7 = aP2->field_4; /*0x6a3dd1*/
  if ( (v5 & 1) != 0 ) /*0x6a3dd4*/
  {
    v6 = aP2->field_4; /*0x6a3dd8*/
    v7 = aP2->field_0; /*0x6a3dda*/
    v4 = (unsigned __int8)(-64 - v4); /*0x6a3de9*/
  }
  if ( (v5 & 2) != 0 ) /*0x6a3dee*/
  {
    v6 = -v6; /*0x6a3df2*/
    v4 = (unsigned __int8)-(char)v4; /*0x6a3df4*/
  }
  if ( (v5 & 4) != 0 ) /*0x6a3dfc*/
  {
    v7 = -v7; /*0x6a3e05*/
    v4 = (unsigned __int8)(0x80 - v4); /*0x6a3e0d*/
  }
  *(_DWORD *)aP3->__pad_0 = v4; /*0x6a3e0f*/
  v8 = this->q040; /*0x6a3e12*/
  v9 = this->q044; /*0x6a3e15*/
  *(_DWORD *)aP1->__pad_0 = v6 + v8; /*0x6a3e22*/
  *(_DWORD *)&aP1->__pad_0[4] = v7 + v9; /*0x6a3e25*/
  return aP1->__pad_0; /*0x6a3e20*/
}
}
} // namespace gamemd
