// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/JumpjetLocomotion_e4.hpp"

// 0x4B0AD0
namespace gamemd {
char JumpjetLocomotion::MoveTo(IUnknown * aP1, int aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall JumpjetLocomotion::MoveTo(int this, IUnknown *aP1, int aP3)
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

  v3 = aP1; /*0x4b0ad0*/
  if ( aP1->field_0 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772] /*0x4b0afe*/
    || aP1->field_4 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
    || (v5 = aP1->field_8, v5 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780]) )
  {
    LOBYTE(v5) = *(_BYTE *)(this + 96); /*0x4b0b04*/
    v6 = aP3; /*0x4b0b07*/
    if ( !(_BYTE)v5 ) /*0x4b0b0d*/
    {
      v5 = this->JumpjetLocomotion_field_0x58; /*0x4b0b13*/
      if ( v5 != -1 ) /*0x4b0b19*/
      {
        v5 = byte_7E7B28[12 * v5]; /*0x4b0b22*/
        if ( v5 ) /*0x4b0b2c*/
        {
          v7 = 4 * v5; /*0x4b0b32*/
          v8 = dword_7E7A28[v7]; /*0x4b0b35*/
          v5 = dword_7E7A34[v7]; /*0x4b0b3b*/
          if ( v5 > -1 ) /*0x4b0b44*/
          {
            v9 = (_DWORD *)(v8 + 12 * v5); /*0x4b0b4d*/
            aP3 = v9[2]; /*0x4b0b53*/
            if ( *(_DWORD *)(this + 92) < v5 ) /*0x4b0b5c*/
            {
              v10 = v9[1]; /*0x4b0b64*/
              v18[0] = *v9; /*0x4b0b67*/
              v18[1] = v10; /*0x4b0b6f*/
              v5 = (int)JumpjetLocomotion::TransformCoords( /*0x4b0b80*/
                          (_DWORD *)this,
                          (IUnknown *)&v19,
                          (IUnknown *)v18,
                          (ObjectClass *)&aP3);
              v11 = *(_DWORD *)v5; /*0x4b0b85*/
              v12 = *(_DWORD *)(v5 + 4); /*0x4b0b89*/
              if ( !v6 ) /*0x4b0b8c*/
              {
                v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 464))(*(_DWORD *)(this + 12)); /*0x4b0b93*/
                v14 = *(_DWORD *)(this + 12); /*0x4b0b99*/
                v19 = v11; /*0x4b0b9c*/
                v20 = v12; /*0x4b0ba0*/
                v21 = v13; /*0x4b0ba4*/
                (*(void (__thiscall **)(int, int *))(*(_DWORD *)v14 + 244))(v14, &v19); /*0x4b0baf*/
                LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, IUnknown *))(**(_DWORD **)(this + 12) + 244))( /*0x4b0bbf*/
                               *(_DWORD *)(this + 12),
                               aP1);
                return v5; /*0x4b0bcc*/
              }
              if ( v6 == 1 || v6 == 3 ) /*0x4b0bd7*/
              {
                v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 464))(*(_DWORD *)(this + 12)); /*0x4b0bde*/
                v16 = *(_DWORD *)(this + 12); /*0x4b0be4*/
                v21 = v15; /*0x4b0be7*/
                v19 = v11; /*0x4b0beb*/
                v20 = v12; /*0x4b0bef*/
                LOBYTE(v5) = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v16 + 240))(v16, &v19); /*0x4b0bfa*/
              }
              v3 = aP1; /*0x4b0c00*/
            }
          }
        }
      }
    }
    if ( v6 ) /*0x4b0c06*/
    {
      if ( v6 == 1 || v6 == 3 ) /*0x4b0c26*/
        LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, IUnknown *))(**(_DWORD **)(this + 12) + 240))( /*0x4b0c2e*/
                       *(_DWORD *)(this + 12),
                       v3);
    }
    else
    {
      LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, IUnknown *))(**(_DWORD **)(this + 12) + 244))( /*0x4b0c0e*/
                     *(_DWORD *)(this + 12),
                     v3);
    }
  }
  return v5; /*0x4b0bc5*/
}
}
} // namespace gamemd

// 0x4B0F20
namespace gamemd {
char JumpjetLocomotion::ProcessCollision(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall JumpjetLocomotion::ProcessCollision(int this, char a2)
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
  int v14; // edi
  char v15; // bl
  int v16; // edx
  int v17; // eax
  int v18; // esi
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
  _DWORD *v31; // esi
  TechnoClass *v32; // eax
  int v33; // edx
  int v34; // ebx
  int v35; // ecx
  MouseClass *v36; // eax
  int v37; // edx
  _DWORD *v38; // eax
  ObjectClass *Coords; // eax
  _DWORD *v40; // ecx
  int *v41; // ecx
  int GroundHeight; // esi
  int v43; // ebx
  char *v45; // esi
  char v46; // dl
  int v47; // edx
  int v48; // ebx
  __int16 v49; // cx
  int v50; // eax
  BuildingTypeClass *v51; // ecx
  MouseClass *v52; // ecx
  int v53; // eax
  IUnknown *v54; // edx
  int v55; // eax
  IUnknown *v56; // ecx
  int v57; // eax
  _DWORD *v58; // eax
  int v59; // esi
  int v60; // ecx
  int v61; // esi
  int v62; // ebx
  _DWORD *v63; // eax
  MouseClass *v64; // ecx
  int v65; // edx
  int v66; // edi
  TechnoClass *v67; // eax
  int v68; // eax
  IUnknown *v69; // esi
  IUnknown *v70; // ebx
  int v71; // ecx
  int v72; // eax
  MouseClass *v73; // edi
  TechnoClass *v74; // esi
  TechnoClass *v75; // eax
  TechnoClass *v76; // esi
  TechnoClass *nextObject; // ebx
  int v78; // edx
  int v79; // edx
  MouseClass *v80; // ecx
  int v81; // eax
  int v82; // esi
  char v83; // bl
  MouseClass *v84; // eax
  char v85; // bl
  __int16 v86; // cx
  int v87; // eax
  MouseClass *v88; // ecx
  IUnknown *v89; // ebx
  int v90; // eax
  __int16 v91; // dx
  char v92; // al
  MouseClass *v93; // ecx
  _DWORD *v94; // esi
  int v95; // eax
  int v96; // edx
  int v97; // eax
  int v98; // edi
  TechnoClass *v99; // edx
  int v100; // edi
  void *v101; // eax
  IUnknown *v102; // edx
  char *v103; // eax
  int v104; // eax
  bool v105; // zf
  TechnoClass *v106; // eax
  MouseClass *v107; // ecx
  MouseClass *v108; // eax
  int v109; // edx
  TechnoClass *v110; // edx
  int v111; // ecx
  int v112; // edi
  int v113; // edx
  _DWORD *v114; // eax
  _DWORD *eax140; // eax
  MouseClass *v115; // edx
  int ecx143; // ecx
  TechnoClass *v117; // edi
  int v119; // ecx
  _DWORD *v120; // eax
  bool cc146; // cc
  IUnknown *v121; // eax
  _BYTE *v123; // eax
  int eax150; // eax
  MouseClass *v124; // edi
  _DWORD *v126; // esi
  int v127; // ecx
  int v128; // edx
  int v129; // eax
  int ebx151; // ebx
  MouseClass *v130; // ecx
  MouseClass *v131; // ebx
  int v133; // eax
  int v134; // ecx
  char al154; // al
  TechnoClass *v135; // eax
  MouseClass *v136; // eax
  int v138; // ecx
  _DWORD *v139; // eax
  int v140; // edi
  int v141; // ebx
  _WORD *v142; // eax
  __int64 rax162; // rax
  MouseClass *v143; // ecx
  int v145; // edx
  int v146; // ecx
  IUnknown *v147; // esi
  int v148; // ecx
  BuildingTypeClass *v149; // eax
  int v150; // eax
  int v151; // esi
  int v152; // ebx
  int *v153; // eax
  int v154; // ecx
  TechnoClass *v155; // eax
  int v156; // ebx
  int v157; // ecx
  int esi185a; // esi
  TechnoClass *v158; // ebx
  IUnknown *v159; // esi
  double v161; // st7
  TechnoClass **eax185d; // eax
  TechnoClass *v162; // edx
  IUnknown *v163; // edi
  IUnknown *v165; // eax
  int v166; // ebx
  unsigned int edx185; // edx
  TechnoClass *v167; // ebx
  unsigned __int64 v169; // kr28_8
  void *eax191; // eax
  MouseClass *v170; // ecx
  int v172; // eax
  int v173; // edi
  int v174; // edi
  IUnknown *ecx193; // ecx
  IUnknown *v175; // eax
  char v177; // bl
  int LandHeight; // [esp+24h] [ebp-10Ch]
  AbstractClass *v179; // [esp+2Ch] [ebp-104h]
  float v180; // [esp+2Ch] [ebp-104h]
  bool v181; // [esp+43h] [ebp-EDh]
  char v182; // [esp+43h] [ebp-EDh]
  char v183; // [esp+43h] [ebp-EDh]
  IUnknown *aP4; // [esp+44h] [ebp-ECh] BYREF
  _BYTE v185[12]; // [esp+48h] [ebp-E8h] BYREF
  double varDC; // [esp+54h] [ebp-DCh] BYREF
  TechnoClass *v186; // [esp+5Ch] [ebp-D4h]
  IUnknown *aP3; // [esp+60h] [ebp-D0h] BYREF
  IUnknown *v188; // [esp+64h] [ebp-CCh] BYREF
  int aP3_8; // [esp+68h] [ebp-C8h]
  IUnknown *v190; // [esp+6Ch] [ebp-C4h]
  IUnknown *aP3_16; // [esp+70h] [ebp-C0h] BYREF
  int aP3_20; // [esp+74h] [ebp-BCh] BYREF
  IUnknown *v193; // [esp+78h] [ebp-B8h] BYREF
  int aP3_28; // [esp+7Ch] [ebp-B4h]
  TechnoClass *v195; // [esp+80h] [ebp-B0h]
  int aP3_36; // [esp+84h] [ebp-ACh] BYREF
  int aP3_40; // [esp+88h] [ebp-A8h]
  TechnoClass *aP3_44; // [esp+8Ch] [ebp-A4h]
  int aP3_48; // [esp+90h] [ebp-A0h]
  IUnknown *aP3_52; // [esp+94h] [ebp-9Ch]
  int aP3_56; // [esp+98h] [ebp-98h] BYREF
  unsigned __int64 aP3_60; // [esp+9Ch] [ebp-94h] BYREF
  TechnoClass *aP3_68; // [esp+A4h] [ebp-8Ch]
  int aP3_72; // [esp+A8h] [ebp-88h] BYREF
  IUnknown *v205; // [esp+ACh] [ebp-84h]
  int aP3_80; // [esp+B0h] [ebp-80h]
  IUnknown *v207; // [esp+B4h] [ebp-7Ch] BYREF
  BuildingTypeClass *v208; // [esp+B8h] [ebp-78h]
  char *aP3_92; // [esp+BCh] [ebp-74h]
  TechnoClass *v210; // [esp+C0h] [ebp-70h] BYREF
  int aP3_100; // [esp+C4h] [ebp-6Ch]
  TechnoClass *v212; // [esp+C8h] [ebp-68h]
  IUnknown *aP3_108; // [esp+CCh] [ebp-64h]
  int aP3_112; // [esp+D0h] [ebp-60h]
  IUnknown *aP3_116; // [esp+D4h] [ebp-5Ch]
  _DWORD aP3_120[3]; // [esp+D8h] [ebp-58h] BYREF
  unsigned __int64 aP3_132; // [esp+E4h] [ebp-4Ch] BYREF
  TechnoClass *aP3_140; // [esp+ECh] [ebp-44h]
  TechnoClass *v219; // [esp+F0h] [ebp-40h] BYREF
  TechnoClass *aP3_148; // [esp+F4h] [ebp-3Ch]
  TechnoClass *aP3_152; // [esp+F8h] [ebp-38h]
  int aP3_156; // [esp+FCh] [ebp-34h] BYREF
  int aP3_160; // [esp+100h] [ebp-30h]
  int aP3_164; // [esp+104h] [ebp-2Ch]
  int aP3_168; // [esp+108h] [ebp-28h] BYREF
  _DWORD v227[3]; // [esp+10Ch] [ebp-24h] BYREF
  int v228; // [esp+118h] [ebp-18h]
  TechnoClass *v229; // [esp+120h] [ebp-10h]
  int v230; // [esp+128h] [ebp-8h]
  int v231; // [esp+12Ch] [ebp-4h]

  if ( (!*(_BYTE *)(this + 99) || this->JumpjetLocomotion_field_0x58 == -1) && *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) != 8
    || *(_BYTE *)(this + 98)
    && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3233) )
  {
    *(_DWORD *)(this + 76) = 0;
    return 0;
  }
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12));
  v4 = **(_DWORD **)(this + 12);
  if ( *(_BYTE *)(v3 + 3517) )
  {
    v5 = (*(int (**)(void))(v4 + 44))() != 1 || !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 12) + 1732) + 3596);
    if ( *(int *)(this + 88) < 64 && v5 )
    {
      *(_DWORD *)v185 = *(_DWORD *)(this + 52);
      *(_DWORD *)&v185[4] = *(_DWORD *)(this + 56);
      *(_DWORD *)&v185[8] = *(_DWORD *)(this + 60);
      v6 = (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v185) + 80) & 0x100) != 0
         ? *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[824]
         : 0;
      v7 = v6 + Cell::GetGroundHeight(v185);
      v8 = (_DWORD *)(*(_DWORD *)(this + 12) + 156);
      *(_DWORD *)&v185[8] = v7;
      v9 = v8[1];
      aP3_120[0] = *v8 - *(_DWORD *)v185;
      v10 = v8[2];
      aP3_120[1] = v9 - *(_DWORD *)&v185[4];
      aP3_120[2] = v10 - v7;
      v11 = Math::Sqrt(
              (double)(v10 - v7) * (double)(v10 - v7)
            + (double)(v9 - *(_DWORD *)&v185[4]) * (double)(v9 - *(_DWORD *)&v185[4])
            + (double)aP3_120[0] * (double)aP3_120[0]);
      v12 = Math::RoundToInt(v11);
      v13 = *(MouseClass **)(this + 12);
      v14 = v12;
      v15 = 0;
      v16 = *(_DWORD *)&v13->__pad_1D4[936];
      LODWORD(varDC) = *(_DWORD *)&v13->__pad_1D4[932];
      v17 = v13->field_0;
      HIDWORD(varDC) = v16;
      v18 = (*(int (__thiscall **)(MouseClass *))(v17 + 132))(v13);
      aP3 = (IUnknown *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 908))(*(_DWORD *)(this + 12));
      if ( v14 >= *(_DWORD *)(v18 + 760) )
      {
        if ( *(_BYTE *)(*(_DWORD *)(this + 12) + 973) )
        {
          v20 = varDC - (double)(int)aP3 * 0.001500000013038516;
          if ( v20 >= 0.1000000014901161 )
            varDC = v20;
          else
            varDC = 0.1000000014901161;
          v15 = 1;
        }
      }
      else
      {
        v15 = 1;
        v19 = varDC - (double)(int)aP3 * *(double *)(v18 + 768);
        if ( v19 >= 0.300000011920929 )
          varDC = v19;
        else
          varDC = 0.300000011920929;
      }
      v21 = *(MouseClass **)(this + 12);
      if ( v21->__pad_1D4[1249] )
      {
        if ( *(double *)(this + 80) >= 0.2 )
          v22 = 0.2;
        else
          v22 = *(double *)(this + 80);
        varDC = v22;
        v23 = HIDWORD(varDC);
        *(double *)(this + 80) = v22;
        (*(void (__stdcall **)(_DWORD, int))(v21->field_0 + 1348))(LODWORD(varDC), v23);
      }
      else
      {
        if ( !v15 )
        {
          if ( *(double *)&v21->__pad_1D4[932] >= *(double *)(this + 80) )
          {
            if ( *(double *)&v21->__pad_1D4[932] <= *(double *)(this + 80) )
              goto LABEL_37;
            v24 = *(double *)&v21->__pad_1D4[932] - (double)(int)aP3 * *(double *)(v18 + 768);
            if ( *(double *)(this + 80) > v24 )
              v24 = *(double *)(this + 80);
          }
          else
          {
            v24 = *(double *)(v18 + 776) + *(double *)&v21->__pad_1D4[932];
            if ( *(double *)(this + 80) < v24 )
              v24 = *(double *)(this + 80);
          }
          varDC = v24;
          (*(void (__stdcall **)(_DWORD, _DWORD))(v21->field_0 + 1348))(
            LODWORD(v24),
            HIDWORD(*(unsigned __int64 *)&v24));
          goto LABEL_37;
        }
        (*(void (__stdcall **)(_DWORD, _DWORD))(v21->field_0 + 1348))(LODWORD(varDC), HIDWORD(varDC));
      }
LABEL_37:
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(*(_DWORD *)(this + 12)) == 1 )
      {
        v25 = *(_DWORD **)(*(_DWORD *)(this + 12) + 1736);
        if ( v25 )
        {
          do
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v25 + 1348))(
              v25,
              *(_DWORD *)(*(_DWORD *)(this + 12) + 1400),
              *(_DWORD *)(*(_DWORD *)(this + 12) + 1404));
            v25 = (_DWORD *)v25[434];
          }
          while ( v25 && v25 != (_DWORD *)v25[434] );
        }
      }
    }
  }
  else
  {
    (*(void (__stdcall **)(_DWORD, _DWORD))(v4 + 1348))(*(_DWORD *)(this + 80), *(_DWORD *)(this + 84));
  }
  v26 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 1336))(*(_DWORD *)(this + 12));
  v27 = *(MouseClass **)(this + 12);
  v28 = a2 == 0 ? v26 : 0;
  v29 = *(_DWORD *)&v27->__pad_1D4[1036];
  v30 = *(_DWORD *)(this + 76) + v28;
  aP3_8 = v30;
  aP3_48 = v29;
  if ( v29 == 8 && this->JumpjetLocomotion_field_0x58 == -1 )
  {
    (*(void (__thiscall **)(MouseClass *, _DWORD))(v27->field_0 + 292))(v27, 0);
    v31 = (_DWORD *)(this + 64);
    if ( this->JumpjetLocomotion_field_0x40 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772]
      || this->JumpjetLocomotion_field_0x44 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
      || *(_DWORD *)(this + 72) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780] )
    {
      *v31 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
      this->JumpjetLocomotion_field_0x44 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776];
      v32 = *(TechnoClass **)&MEMORY[0x89F690].__pad_DFC[780];
      *(_BYTE *)(this + 99) = 0;
      *(_DWORD *)(this + 72) = v32;
    }
    v33 = *(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 444))(*(_DWORD *)(this + 12)) + 278);
    if ( v33 >= 0 && v33 < *(int *)&MEMORY[0x89F690].__pad_579C[62236] )
    {
      v34 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62224] + 4 * v33);
      aP4 = *(IUnknown **)(v34 + 40);
      v35 = SHIWORD(aP4) << 8;
      *v31 = ((__int16)aP4 << 8) + 128;
      v36 = *(MouseClass **)(this + 12);
      this->JumpjetLocomotion_field_0x44 = v35 + 128;
      *(_DWORD *)(this + 72) = 0;
      qmemcpy(&v36->__pad_1D4[1036], &v36->__pad_1D4[1040], 0x5Cu);
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1596) = -1;
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1668) = v33;
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1669) = 0;
      v37 = *(_DWORD *)(v34 + 48) & 7;
      aP4 = *(IUnknown **)(v34 + 36);
      LOWORD(v190) = *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v37) + (_WORD)aP4;
      HIWORD(v190) = HIWORD(aP4) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v37);
      aP4 = v190;
      v38 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP4);
      Coords = (ObjectClass *)CellClass::GetCoords(v38, (int *)&v193);
      v40 = (_DWORD *)(*(_DWORD *)(this + 12) + 1384);
      *v40 = *(_DWORD *)Coords->__pad_0;
      v40[1] = *(_DWORD *)&Coords->__pad_0[4];
      v40[2] = *(_DWORD *)&Coords->__pad_0[8];
      v41 = (int *)(*(_DWORD *)(this + 12) + 156);
      aP3_36 = *v41;
      aP3_40 = v41[1];
      aP3_44 = (TechnoClass *)v41[2];
      GroundHeight = Cell::GetGroundHeight(&aP3_36);
      aP4 = *(IUnknown **)(v34 + 40);
      v43 = *(_DWORD *)(v34 + 448);
      aP3_40 = (SHIWORD(aP4) << 8) + 128;
      aP3_36 = ((__int16)aP4 << 8) + 128;
      aP3_44 = 0;
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1392) = GroundHeight + (Cell::GetGroundHeight(&aP3_36) - GroundHeight) / v43;
      *(_BYTE *)(this + 99) = 1;
      this->JumpjetLocomotion_field_0x58 = -1;
      return 0;
    }
    *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
    this->JumpjetLocomotion_field_0x58 = -1;
    *v31 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
    this->JumpjetLocomotion_field_0x44 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776];
    *(_DWORD *)(this + 72) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780];
    if ( *v31 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772]
      || this->JumpjetLocomotion_field_0x44 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
      || *(_DWORD *)(this + 72) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780] )
    {
      *v31 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
      this->JumpjetLocomotion_field_0x44 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776];
      *(_DWORD *)(this + 72) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780];
      *(_BYTE *)(this + 99) = 0;
      return 0;
    }
    return 0;
  }
  if ( v30 <= 7 )
    goto LABEL_147;
  v45 = (char *)(12 * this->JumpjetLocomotion_field_0x58 + 8289064);
  v46 = *(_BYTE *)(this + 96);
  aP3_92 = v45;
  if ( v46 )
    v47 = v45[1];
  else
    v47 = *v45;
  v190 = (IUnknown *)(16 * v47);
  v48 = dword_7E7A28[4 * v47];
  aP3_100 = v48;
  if ( v29 < -1 || v29 > 8 )
  {
    *(_DWORD *)&v27->__pad_1D4[1036] = -1;
    return 0;
  }
  v181 = 0;
  if ( v29 != 8 && v29 != -1 )
  {
    LOBYTE(v49) = 0;
    HIBYTE(v49) = v45[4];
    LOWORD(aP4) = v49;
    v181 = (((((unsigned int)aP4 >> 12) + 1) >> 1) & 7) != v29;
  }
  while ( 1 )
  {
    v50 = *(_DWORD *)(this + 92);
    aP3_8 -= 7;
    v51 = *(BuildingTypeClass **)(v48 + 12 * v50 + 4);
    v207 = *(IUnknown **)(v48 + 12 * v50);
    v208 = v51;
    if ( !v207 && !v51 && v50 )
      break;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 192))(*(_DWORD *)(this + 12)) )
    {
      v52 = *(MouseClass **)(this + 12);
      v227[0] = *(_DWORD *)&v52->__pad_74[40];
      v227[1] = *(_DWORD *)&v52->__pad_74[44];
      v227[2] = *(_DWORD *)&v52->__pad_74[48];
      (*(void (__thiscall **)(MouseClass *, _DWORD *))(v52->field_0 + 244))(v52, v227);
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1718) = 0;
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1719) = 0;
    }
    v53 = *(_DWORD *)(this + 92);
    if ( v53 )
    {
      v54 = *(IUnknown **)(v48 + 12 * v53 - 4);
      v55 = v48 + 12 * v53;
      aP3 = v54;
      v56 = *(IUnknown **)(v55 - 8);
      v57 = *(_DWORD *)(v55 - 12);
      v205 = v56;
      aP3_72 = v57;
      v58 = JumpjetLocomotion::TransformCoords(
              (_DWORD *)this,
              (IUnknown *)&v219,
              (IUnknown *)&aP3_72,
              (ObjectClass *)&aP3);
      v59 = v58[1];
      LOWORD(v212) = *v58 / 256;
      HIWORD(v212) = v59 / 256;
      v210 = v212;
    }
    else
    {
      v210 = *(TechnoClass **)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 440))(
                                *(_DWORD *)(this + 12),
                                &varDC);
    }
    v60 = *(_DWORD *)(this + 12) + 156;
    aP3 = *(IUnknown **)(v48 + 12 * *(_DWORD *)(this + 92) + 8);
    v61 = *(_DWORD *)v60;
    v62 = *(_DWORD *)(v60 + 4);
    v195 = *(TechnoClass **)(v60 + 8);
    v63 = JumpjetLocomotion::TransformCoords(
            (_DWORD *)this,
            (IUnknown *)aP3_120,
            (IUnknown *)&v207,
            (ObjectClass *)&aP3);
    v64 = *(MouseClass **)(this + 12);
    v65 = *v63 - v61;
    v66 = v63[1] - v62;
    v228 = *(_DWORD *)&v64->__pad_74[40];
    v67 = *(TechnoClass **)&v64->__pad_74[48];
    aP3_40 = v66 + *(_DWORD *)&v64->__pad_74[44];
    v229 = v67;
    aP3_44 = v67;
    aP3_36 = v228 + v65;
    v230 = *(_DWORD *)&v64->__pad_74[44];
    v68 = *(_DWORD *)&v64->__pad_74[40];
    v231 = *(_DWORD *)&v64->__pad_74[48];
    LOWORD(aP3_112) = (v228 + v65) / 256;
    HIWORD(aP3_112) = aP3_40 / 256;
    aP3_56 = aP3_112;
    if ( (_WORD)aP3_112 == (unsigned __int16)(v68 / 256)
      && (unsigned __int16)(aP3_40 / 256) == (unsigned __int16)(v230 / 256) )
    {
      v83 = v64->__pad_74[0];
      v64->__pad_74[0] = 0;
      (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), &aP3_36);
      *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v83;
      goto LABEL_107;
    }
    (*(void (__thiscall **)(MouseClass *, _DWORD))(v64->field_0 + 292))(v64, 0);
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), &aP3_36);
    v69 = (IUnknown *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v210);
    v70 = (IUnknown *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP3_56);
    v71 = SHIBYTE(v70->field_118);
    v72 = SHIBYTE(v69->field_118) - 4;
    aP3_16 = v70;
    if ( v71 == v72 )
    {
      if ( (v70->field_140 & 0x100) == 0 )
        goto LABEL_80;
      *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 1;
    }
    if ( (v70->field_140 & 0x100) == 0 )
    {
LABEL_80:
      if ( (v69->field_140 & 0x100) != 0 )
        *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 0;
    }
    if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3220) )
    {
      v73 = *(MouseClass **)(this + 12);
      if ( !v73->__pad_1D4[1276] )
      {
        if ( v73->__pad_74[24]
          || (v193 = *(IUnknown **)&v73->__pad_74[40],
              aP3_28 = *(_DWORD *)&v73->__pad_74[44],
              v74 = *(TechnoClass **)&v73->__pad_74[48],
              aP3_132 = *(_QWORD *)&v73->__pad_74[40],
              aP3_140 = *(TechnoClass **)&v73->__pad_74[48],
              (int)v74 >= *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[824] + Cell::GetGroundHeight(&aP3_132)) )
        {
          v75 = (TechnoClass *)*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP3_56) + 58);
        }
        else
        {
          v75 = (TechnoClass *)*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP3_56) + 57);
        }
        v76 = v75;
        if ( v75 )
        {
          do
          {
            nextObject = (TechnoClass *)v76->nextObject;
            if ( !ObjectClass::IsCrushable(v76, *(AbstractClass **)(this + 12)) )
            {
              v78 = *(_DWORD *)v76->__pad_0;
              aP3_20 = 10000;
              (*(void (__thiscall **)(TechnoClass *, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v78 + 364))(
                v76,
                &aP3_20,
                0,
                *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4008),
                0,
                1,
                1,
                0);
              v79 = v73->field_0;
              aP3_20 = 20;
              (*(void (__thiscall **)(MouseClass *, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(v79 + 364))(
                v73,
                &aP3_20,
                0,
                *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4008),
                0,
                1,
                0,
                0);
            }
            v76 = nextObject;
          }
          while ( nextObject );
          v70 = aP3_16;
        }
      }
    }
    v80 = *(MouseClass **)(this + 12);
    if ( !v80->__pad_74[28] )
      return 0;
    (*(void (__thiscall **)(MouseClass *, int))(v80->field_0 + 292))(v80, 1);
    v81 = v70->field_44;
    if ( v81 != -1 )
    {
      v82 = *(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * v81];
      if ( !*(_BYTE *)(this + 100) )
        goto LABEL_107;
      if ( (*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3368)
         || TechnoClass::HasVoiceResponse(*(float **)(this + 12), 17))
        && *(_BYTE *)(v82 + 680)
        && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3371) )
      {
        *(_DWORD *)(*(_DWORD *)(this + 12) + 820) = -1119040307;
      }
    }
    if ( *(_BYTE *)(this + 100) )
    {
      if ( CellClass::FindBuilding(v70, 0) )
      {
        if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 1460) == 12 )
        {
          *(_BYTE *)(*(_DWORD *)(this + 12) + 1717) = 1;
          if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3371) )
            *(_DWORD *)(*(_DWORD *)(this + 12) + 820) = -1119040307;
        }
      }
    }
LABEL_107:
    v84 = *(MouseClass **)(this + 12);
    if ( !v84->__pad_74[28] )
      return 0;
    v85 = v84->__pad_74[0];
    v84->__pad_74[0] = 0;
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), 0);
    LOBYTE(v86) = 0;
    *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v85;
    HIBYTE(v86) = (_BYTE)aP3;
    LOWORD(aP3_168) = v86;
    FacingClass::Set_SyncLog((char *)(*(_DWORD *)(this + 12) + 904), &aP3_168);
    v87 = *(_DWORD *)(this + 92);
    if ( v87 && *(int *)((char *)dword_7E7A34 + (_DWORD)v190) == v87 )
    {
      v88 = *(MouseClass **)(this + 12);
      aP3_156 = *(_DWORD *)&v88->__pad_74[40];
      aP3_160 = *(_DWORD *)&v88->__pad_74[44];
      aP3_164 = *(_DWORD *)&v88->__pad_74[48];
      (*(void (__thiscall **)(MouseClass *, int *))(v88->field_0 + 244))(v88, &aP3_156);
    }
    v89 = (IUnknown *)aP3_48;
    if ( aP3_48 != 8 && aP3_48 != -1 && v181 )
    {
      v90 = *(_DWORD *)(this + 92);
      if ( *(int *)((char *)dword_7E7A2C + (_DWORD)v190) == v90 )
      {
        if ( v90 )
        {
          LOBYTE(v91) = 0;
          HIBYTE(v91) = aP3_92[4];
          LOWORD(aP3_52) = v91;
          aP3_16 = (IUnknown *)(aP3_48 + 8 * (((((unsigned int)aP3_52 >> 12) + 1) >> 1) & 7));
          aP3_20 = 12 * (_DWORD)aP3_16 + 8289064;
          v92 = byte_7E7B28[12 * (_DWORD)aP3_16];
          if ( v92 )
          {
            if ( dword_7E7A30[4 * v92] )
            {
              v93 = *(MouseClass **)(this + 12);
              v94 = (_DWORD *)(this + 64);
              v95 = *(_DWORD *)&v93->__pad_1D4[936];
              LODWORD(aP3_60) = *(_DWORD *)&v93->__pad_1D4[932];
              v96 = aP3_48 & 7;
              HIDWORD(aP3_60) = v95;
              v97 = *(_DWORD *)&MEMORY[0x89F690].__pad_48[8 * v96] + this->JumpjetLocomotion_field_0x40;
              v98 = this->JumpjetLocomotion_field_0x44 + *(_DWORD *)&MEMORY[0x89F690].__pad_48[8 * v96 + 4];
              v99 = *(TechnoClass **)(this + 72);
              *(_DWORD *)v185 = v97;
              *(_DWORD *)&v185[8] = v99;
              *(_DWORD *)&v185[4] = v98;
              LOWORD(aP3_116) = v97 / 256;
              HIWORD(aP3_116) = v98 / 256;
              v188 = aP3_116;
              v100 = v93->field_0;
              LandHeight = ObjectClass::GetLandHeight(v93);
              v101 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v188);
              switch ( (*(int (__thiscall **)(_DWORD, void *, IUnknown *, int, _DWORD, int))(v100 + 428))(
                         *(_DWORD *)(this + 12),
                         v101,
                         v89,
                         LandHeight,
                         0,
                         1) )
              {
                case 0:
                case 2:
                  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(*(_DWORD *)(this + 12)) == 1
                    && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 12) + 1732) + 3596) )
                  {
                    break;
                  }
                  v102 = aP3_16;
                  v103 = (char *)aP3_20;
                  *(_BYTE *)(this + 96) = 0;
                  this->JumpjetLocomotion_field_0x58 = v102;
                  aP3_92 = v103;
                  v181 = 0;
                  v104 = 4 * *v103;
                  v190 = (IUnknown *)(v104 * 4);
                  *(_DWORD *)(this + 92) = dword_7E7A30[v104] - 1;
                  v105 = *v94 == *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
                  aP3_100 = dword_7E7A28[v104];
                  if ( !v105
                    || this->JumpjetLocomotion_field_0x44 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
                    || *(_DWORD *)(this + 72) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780] )
                  {
                    *v94 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
                    this->JumpjetLocomotion_field_0x44 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776];
                    v106 = *(TechnoClass **)&MEMORY[0x89F690].__pad_DFC[780];
                    *(_BYTE *)(this + 99) = 0;
                    *(_DWORD *)(this + 72) = v106;
                  }
                  v107 = *(MouseClass **)(this + 12);
                  *(_BYTE *)(this + 99) = 1;
                  (*(void (__thiscall **)(MouseClass *, int))(v107->field_0 + 396))(v107, 2);
                  v108 = *(MouseClass **)(this + 12);
                  *(_BYTE *)(this + 99) = 0;
                  if ( !v108->__pad_74[28] || v108->__pad_74[13] || v108->__pad_74[25] )
                    return 0;
                  v109 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
                  if ( *v94 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772]
                    || this->JumpjetLocomotion_field_0x44 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
                    || *(_DWORD *)(this + 72) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780] )
                  {
                    *v94 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
                    this->JumpjetLocomotion_field_0x44 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776];
                    v110 = *(TechnoClass **)&MEMORY[0x89F690].__pad_DFC[780];
                    *(_BYTE *)(this + 99) = 0;
                    *(_DWORD *)(this + 72) = v110;
                    v109 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
                  }
                  v111 = *(_DWORD *)v185;
                  v112 = *(_DWORD *)&v185[4];
                  v105 = *(_DWORD *)v185 == v109;
                  v113 = *(_DWORD *)&v185[8];
                  if ( !v105
                    || *(_DWORD *)&v185[4] != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
                    || *(_DWORD *)&v185[8] != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780] )
                  {
                    v179 = (AbstractClass *)v108;
                    *(_BYTE *)(this + 99) = 1;
                    *v94 = v111;
                    this->JumpjetLocomotion_field_0x44 = v112;
                    *(_DWORD *)(this + 72) = v113;
                    v114 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v185);
                    if ( !CrateClass::ProcessPickup(v114, v179) || *(_BYTE *)(*(_DWORD *)(this + 12) + 129) )
                    {
                      if ( *(_BYTE *)(*(_DWORD *)(this + 12) + 144) )
                      {
                        *v94 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
                        this->JumpjetLocomotion_field_0x44 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776];
                        *(_DWORD *)(this + 72) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780];
                        *(_BYTE *)(this + 99) = 0;
                      }
                    }
                    else
                    {
                      JumpjetLocomotion::MoveTo(this, (IUnknown *)v185, 1);
                      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))(
                        *(_DWORD *)(this + 12),
                        aP3_60,
                        HIDWORD(aP3_60));
                      qmemcpy(
                        (void *)(*(_DWORD *)(this + 12) + 1504),
                        (const void *)(*(_DWORD *)(this + 12) + 1508),
                        0x5Cu);
                      *(_DWORD *)(*(_DWORD *)(this + 12) + 1596) = -1;
                    }
                  }
                  break;
                case 1:
                  eax140 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v185);
                  CellClass::DamageAllObjects(eax140);
                  break;
                case 3:
                  LOWORD(aP3_108) = *(_DWORD *)v185 / 256;
                  v115 = *(MouseClass **)(this + 12);
                  HIWORD(aP3_108) = *(_DWORD *)&v185[4] / 256;
                  aP3_16 = aP3_108;
                  Cell::IsPassableAllied((int)v115, (__int16 *)&aP3_16);
                  break;
                case 6:
                  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v185) + 80) & 0x100) == 0
                    || (ecx143 = *(_DWORD *)(this + 12) + 156,
                        v193 = *(IUnknown **)ecx143,
                        aP3_28 = *(_DWORD *)(ecx143 + 4),
                        v117 = *(TechnoClass **)(ecx143 + 8),
                        v119 = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v185) + 283),
                        LOBYTE(aP4) = 1,
                        (int)abs32((int)v117 / *(_DWORD *)MEMORY[0x89F690].__pad_1140 - v119) <= 2) )
                  {
                    LOBYTE(aP4) = 0;
                  }
                  v120 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)(this + 64));
                  Cell::ApplyDamage(v120, (IUnknown *)&MEMORY[0x89F690].__pad_DFC[772], 1, 1, aP4);
                  break;
                default:
                  break;
              }
            }
          }
        }
      }
    }
    cc146 = aP3_8 <= 7;
    ++*(_DWORD *)(this + 92);
    if ( cc146 )
      goto LABEL_147;
    v48 = aP3_100;
  }
  v124 = *(MouseClass **)(this + 12);
  v126 = (_DWORD *)(this + 64);
  v127 = *(_DWORD *)&v124->__pad_74[40];
  v128 = *(_DWORD *)&v124->__pad_74[44];
  v195 = *(TechnoClass **)&v124->__pad_74[48];
  v188 = (IUnknown *)(abs32(this->JumpjetLocomotion_field_0x44 - v128) + abs32(this->JumpjetLocomotion_field_0x40 - v127));
  v129 = Math::RoundToInt((1.0 - (double)(int)v188 * 0.09090909090909091) * 7.0);
  ebx151 = aP3_8;
  v124->__pad_1D4[1250] = 1;
  v130 = *(MouseClass **)(this + 12);
  aP3_8 = v129 + ebx151;
  v130->__pad_1D4[1251] = 0;
  v131 = *(MouseClass **)(this + 12);
  v133 = *(_DWORD *)&v131->__pad_74[40];
  v134 = *(_DWORD *)&v131->__pad_74[44];
  v195 = *(TechnoClass **)&v131->__pad_74[48];
  HIWORD(v188) = v134 / 256;
  if ( (unsigned __int16)(v133 / 256) == (unsigned __int16)(this->JumpjetLocomotion_field_0x40 / 256)
    && HIWORD(v188) == (unsigned __int16)(this->JumpjetLocomotion_field_0x44 / 256) )
  {
    al154 = v131->__pad_74[0];
    v131->__pad_74[0] = 0;
    v182 = al154;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), this + 64);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), 0);
    *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v182;
  }
  else
  {
    (*(void (__thiscall **)(MouseClass *, _DWORD))(v131->field_0 + 292))(v131, 0);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), this + 64);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), 0);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 1);
  }
  if ( *v126 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772]
    || this->JumpjetLocomotion_field_0x44 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
    || *(_DWORD *)(this + 72) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780] )
  {
    *v126 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
    this->JumpjetLocomotion_field_0x44 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776];
    v135 = *(TechnoClass **)&MEMORY[0x89F690].__pad_DFC[780];
    *(_BYTE *)(this + 99) = 0;
    *(_DWORD *)(this + 72) = v135;
  }
  v136 = *(MouseClass **)(this + 12);
  this->JumpjetLocomotion_field_0x58 = -1;
  *(_DWORD *)(this + 92) = 0;
  v183 = 0;
  v138 = *(_DWORD *)&v136->__pad_1D4[976];
  if ( v138 )
  {
    v139 = (_DWORD *)(*(int (__thiscall **)(int, IUnknown **, MouseClass *))(*(_DWORD *)v138 + 76))(v138, &v193, v136);
    v140 = *v139 / 256;
    v141 = v139[1] / 256;
    v142 = (_WORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 440))(
                      *(_DWORD *)(this + 12),
                      &varDC);
    if ( *v142 == (_WORD)v140 && v142[1] == (_WORD)v141 )
    {
      rax162 = *(_DWORD *)((*(int (__stdcall **)(IUnknown **, _DWORD))(**(_DWORD **)(this + 12) + 76))(
                             &v193,
                             *(_DWORD *)(this + 12))
                         + 8)
             - *(_DWORD *)(this + 60);
      if ( (int)((HIDWORD(rax162) ^ rax162) - HIDWORD(rax162)) < 2 * *(_DWORD *)MEMORY[0x89F690].__pad_1140 )
      {
        v183 = 1;
        *(_DWORD *)(this + 52) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
        *(_DWORD *)(this + 56) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776];
        *(_DWORD *)(this + 60) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780];
        if ( *v126 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772]
          || this->JumpjetLocomotion_field_0x44 != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776]
          || *(_DWORD *)(this + 72) != *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780] )
        {
          *v126 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[772];
          this->JumpjetLocomotion_field_0x44 = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[776];
          *(_DWORD *)(this + 72) = *(_DWORD *)&MEMORY[0x89F690].__pad_DFC[780];
          *(_BYTE *)(this + 99) = 0;
        }
        *(_BYTE *)(this + 99) = 0;
      }
    }
  }
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 396))(*(_DWORD *)(this + 12), 2);
  v143 = *(MouseClass **)(this + 12);
  if ( !v143 || !v143->__pad_74[28] || v143->__pad_74[13] || v143->__pad_74[25] )
    return 1;
  if ( v183 )
  {
    FootClass::ClearPathIndex(v143);
    *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 388))(*(_DWORD *)(this + 12)) == 2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
             *(_DWORD *)(this + 12),
             0,
             1) )
      {
        return 1;
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 1284))(*(_DWORD *)(this + 12)) )
    return 1;
  if ( !*(_BYTE *)(*(_DWORD *)(this + 12) + 144) )
    return 0;
LABEL_147:
  cc146 = aP3_8 <= 0;
  *(_DWORD *)(this + 76) = aP3_8;
  if ( cc146 )
    return 0;
  v121 = *(IUnknown **)(this + 88);
  if ( (int)v121 <= -1 )
    return 0;
  v123 = (_BYTE *)(12 * (_DWORD)v121 + 8289064);
  eax150 = *(_BYTE *)(this + 96) ? (char)v123[1] : (char)*v123;
  v145 = *(_DWORD *)(this + 92);
  v146 = dword_7E7A28[4 * eax150];
  v147 = *(IUnknown **)(v146 + 12 * v145);
  v148 = v146 + 12 * v145;
  v149 = *(BuildingTypeClass **)(v148 + 4);
  v207 = v147;
  v208 = v149;
  if ( !v147 && !v149 && v145 )
    return 0;
  v150 = *(_DWORD *)(this + 12) + 156;
  aP3_72 = *(_DWORD *)v150;
  v205 = *(IUnknown **)(v150 + 4);
  aP3_80 = *(_DWORD *)(v150 + 8);
  v188 = *(IUnknown **)(v148 + 8);
  v151 = *(_DWORD *)v150;
  v152 = *(_DWORD *)(v150 + 4);
  v195 = *(TechnoClass **)(v150 + 8);
  v153 = JumpjetLocomotion::TransformCoords(
           (_DWORD *)this,
           (IUnknown *)aP3_120,
           (IUnknown *)&v207,
           (ObjectClass *)&v188);
  v154 = *v153;
  v155 = (TechnoClass *)(v153[1] - v152);
  v156 = *(_DWORD *)(this + 12) + 156;
  v219 = (TechnoClass *)(v154 - v151);
  aP3_148 = v155;
  aP3_152 = 0;
  v157 = *(_DWORD *)v156 + v154 - v151;
  esi185a = *(_DWORD *)(v156 + 4);
  v158 = *(TechnoClass **)(v156 + 8);
  HIDWORD(aP3_60) = (char *)v155 + esi185a;
  LODWORD(aP3_60) = v157;
  aP3_68 = v158;
  v159 = (IUnknown *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&aP3_60);
  v161 = (double)*(int *)(this + 76) * 0.1428571428571428;
  aP3_156 = 0;
  aP3_160 = 0;
  aP3_164 = 0;
  v180 = v161;
  eax185d = (TechnoClass **)Color::RGBFromFloat(&v193, (IUnknown *)&v219, v180);
  v219 = *eax185d;
  aP3_148 = eax185d[1];
  v162 = eax185d[2];
  LODWORD(varDC) = (char *)v219 + aP3_72;
  aP3_152 = v162;
  HIDWORD(varDC) = (char *)aP3_148 + (_DWORD)v205;
  v186 = (TechnoClass *)((char *)v162 + aP3_80);
  v163 = (IUnknown *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&aP3_72);
  aP3_52 = v163;
  v165 = (IUnknown *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&varDC);
  v166 = *(_DWORD *)(this + 12) + 156;
  *(_DWORD *)v185 = *(_DWORD *)v166;
  edx185 = *(_DWORD *)(v166 + 4);
  *(_DWORD *)&v185[4] = edx185;
  v167 = *(TechnoClass **)(v166 + 8);
  *(_DWORD *)&v185[8] = v167;
  v169 = __PAIR64__(edx185, *(unsigned int *)v185);
  if ( v165 == v159 || v165 == v163 )
  {
    v169 = *(_QWORD *)&varDC;
    v167 = v186;
    *(double *)v185 = varDC;
LABEL_190:
    *(_DWORD *)&v185[8] = v167;
  }
  else if ( *(int *)(this + 76) > 3 )
  {
    v167 = aP3_68;
    *(_QWORD *)v185 = aP3_60;
    v169 = aP3_60;
    goto LABEL_190;
  }
  aP3_132 = v169;
  aP3_140 = v167;
  eax191 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&aP3_132);
  v170 = *(MouseClass **)(this + 12);
  aP3_48 = (int)eax191;
  v172 = *(_DWORD *)&v170->__pad_74[40];
  v173 = *(_DWORD *)&v170->__pad_74[44];
  v195 = *(TechnoClass **)&v170->__pad_74[48];
  v174 = v173 / 256;
  if ( (unsigned __int16)(*(_DWORD *)v185 / 256) == (unsigned __int16)(v172 / 256)
    && (unsigned __int16)(*(_DWORD *)&v185[4] / 256) == (_WORD)v174 )
  {
    v177 = v170->__pad_74[0];
    v170->__pad_74[0] = 0;
    (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), v185);
    *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v177;
    return 0;
  }
  else
  {
    (*(void (__thiscall **)(MouseClass *, _DWORD))(v170->field_0 + 292))(v170, 0);
    (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), v185);
    ecx193 = aP3_52;
    v175 = (IUnknown *)aP3_48;
    if ( *(char *)(aP3_48 + 283) != SHIBYTE(aP3_52->field_118) - 4 )
      goto LABEL_196;
    if ( (*(_DWORD *)(aP3_48 + 320) & 0x100) == 0 )
      goto LABEL_197;
    *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 1;
LABEL_196:
    if ( (v175->field_140 & 0x100) == 0 )
    {
LABEL_197:
      if ( (ecx193->field_140 & 0x100) != 0 )
        *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 0;
    }
    (*(void (__thiscall **)(IUnknown *, int))(**(_DWORD **)(this + 12) + 292))(ecx193, 1);
    return 0;
  }
}
}
} // namespace gamemd

// 0x4B2630
namespace gamemd {
char JumpjetLocomotion::Update(unsigned char * a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall JumpjetLocomotion_Update(int this, _BYTE *a2, int a3, int a4)
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
  int v79; // ecx
  char *v80; // eax
  int v81; // ecx
  int v82; // edi
  _DWORD *v83; // eax
  _DWORD *v84; // eax
  int v85; // ecx
  int v86; // edx
  _DWORD *v87; // eax
  int v88; // ecx
  _DWORD *v89; // esi
  int v90; // eax
  int v91; // ecx
  int v92; // eax
  int v93; // edx
  int v94; // esi
  int v95; // edx
  _DWORD *v96; // ebx
  int v97; // eax
  int v98; // eax
  _DWORD *v99; // edx
  int v100; // ecx
  int v101; // ecx
  int v102; // edi
  int v103; // esi
  int v104; // eax
  int v105; // edx
  int v106; // eax
  char v107; // bl
  _DWORD *v108; // ecx
  _DWORD *v109; // edx
  wchar_t *v110; // eax
  _DWORD *v111; // eax
  _DWORD *v112; // eax
  int v113; // edx
  int v114; // eax
  double v115; // st7
  _DWORD *v116; // ecx
  __int64 v117; // rax
  _DWORD *v118; // ecx
  _DWORD *v119; // edx
  int v120; // esi
  int v121; // ecx
  _DWORD *v122; // eax
  _DWORD *v123; // eax
  char v124; // al
  int v125; // ecx
  wchar_t *v126; // esi
  wchar_t *v127; // eax
  wchar_t *v128; // ecx
  wchar_t **v129; // edx
  _DWORD *v130; // eax
  _DWORD *v131; // eax
  int Object; // eax
  int *v133; // ecx
  int v134; // esi
  _DWORD *v135; // eax
  int v136; // eax
  int v137; // esi
  void *v138; // eax
  _DWORD *v139; // eax
  int *Coords; // eax
  int v141; // esi
  _DWORD *v142; // edx
  int v143; // edi
  bool v144; // cc
  double v145; // st7
  double v147; // st7
  unsigned __int8 v148; // c0
  unsigned __int8 v149; // c3
  double *v150; // ecx
  int v151; // ecx
  _DWORD *v152; // ecx
  unsigned int v153; // esi
  _DWORD *v154; // eax
  int v155; // edi
  int v156; // ecx
  int v157; // edx
  int v158; // eax
  int v159; // ecx
  double v160; // st7
  char v161; // dl
  int v162; // ecx
  int v163; // ecx
  _DWORD *NeighbourContent; // eax
  _DWORD *v165; // edi
  int v166; // eax
  int v167; // eax
  unsigned int v168; // eax
  _DWORD *v169; // eax
  int v170; // eax
  int v171; // esi
  int *v172; // edi
  int v173; // edx
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

  v5 = *(_DWORD *)(this + 4);
  v6 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1504);
  v215 = this + 4;
  if ( !(*(unsigned __int8 (__stdcall **)(int))(v5 + 16))(this + 4) && v6 == -1 )
  {
    *(_BYTE *)(this + 97) = 0;
    if ( this->JumpjetLocomotion_field_0x40 != MEMORY[0x8A0790]
      || this->JumpjetLocomotion_field_0x44 != MEMORY[0x8A0794]
      || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
    {
      this->JumpjetLocomotion_field_0x40 = MEMORY[0x8A0790];
      this->JumpjetLocomotion_field_0x44 = MEMORY[0x8A0794];
      *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
      *(_BYTE *)(this + 99) = 0;
    }
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 388))(*(_DWORD *)(this + 12)) == 2 )
    {
      v8 = (*(int (__thiscall **)(int, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(v7, 0, 1);
      *a2 = v8;
      return 0;
    }
    return 0;
  }
  if ( *(_DWORD *)(this + 52) == MEMORY[0x8A0790]
    && *(_DWORD *)(this + 56) == MEMORY[0x8A0794]
    && *(_DWORD *)(this + 60) == MEMORY[0x8A0798]
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 468))(*(_DWORD *)(this + 12))
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 472))(*(_DWORD *)(this + 12)) )
  {
    return 0;
  }
  if ( *(_DWORD *)(*(_DWORD *)(this + 12) + 720) && TechnoClass::CountPassengers() )
    return 1;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 892))(*(_DWORD *)(this + 12))
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 896))(*(_DWORD *)(this + 12)) )
  {
    return 1;
  }
  if ( v6 != -1 )
  {
    v10 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1444);
    if ( v10 && (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 44))(v10) == 1
      || (v11 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1444)) != 0
      && (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) == 15 )
    {
      v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(**(_DWORD **)(this + 12) + 72))(
                        *(_DWORD *)(this + 12),
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
        *(_DWORD *)(*(_DWORD *)(this + 12) + 4 * v14 + 1504) = -1;
        v6 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1504);
      }
    }
    if ( v6 != -1 )
      goto LABEL_125;
  }
  v15 = *(_DWORD *)(this + 12);
  v16 = MEMORY[0xA8ED84];
  v17 = *(_DWORD *)(v15 + 1600);
  v18 = (wchar_t **)(v15 + 1600);
  v19 = *(_DWORD *)(v15 + 1608);
  if ( v17 != -1 )
  {
    if ( (int)MEMORY[0xA8ED84] - v17 >= v19 )
      goto LABEL_31;
    v19 -= (int)MEMORY[0xA8ED84] - v17;
  }
  if ( v19 )
    return 0;
LABEL_31:
  v20 = (wchar_t *)Math::RoundToInt(*((double *)MEMORY[0x8871E0] + 748) * 900.0);
  v21 = v227;
  *v18 = v16;
  v22 = (_DWORD *)(this + 52);
  v18[1] = v21;
  v18[2] = v20;
  v23 = *(_DWORD *)(this + 12);
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
    if ( *v22 == MEMORY[0x8A0790]
      && *(_DWORD *)(this + 56) == MEMORY[0x8A0794]
      && *(_DWORD *)(this + 60) == MEMORY[0x8A0798] )
    {
      return 0;
    }
    if ( !(unsigned __int8)FootClass::ClearSomeVector2(*(_DWORD *)(this + 12))
      && (v27 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(**(_DWORD **)(this + 12) + 72))(
                            *(_DWORD *)(this + 12),
                            &v226),
          v28 = Coord::Subtract(&v216, *v27 - *v22, v27[1] - *(_DWORD *)(this + 56), v27[2] - *(_DWORD *)(this + 60)),
          v220 = (_DWORD *)*v28,
          v221 = v28[1],
          v222 = v28[2],
          (int)Coord::Length((int *)&v220) < *((_DWORD *)MEMORY[0x8871E0] + 1478))
      && ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 388))(*(_DWORD *)(this + 12)) == 2
       || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 388))(*(_DWORD *)(this + 12)) == 11) )
    {
      if ( this->JumpjetLocomotion_field_0x40 != MEMORY[0x8A0790]
        || this->JumpjetLocomotion_field_0x44 != MEMORY[0x8A0794]
        || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
      {
        this->JumpjetLocomotion_field_0x40 = MEMORY[0x8A0790];
        this->JumpjetLocomotion_field_0x44 = MEMORY[0x8A0794];
        *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
        *(_BYTE *)(this + 99) = 0;
      }
      v29 = *(_DWORD **)(this + 12);
      if ( v29[358] )
      {
        FootClass::ClearPathIndex(v29);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
               *(_DWORD *)(this + 12),
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
      if ( !*(_BYTE *)(*(_DWORD *)(this + 12) + 144) )
        return 0;
    }
    else
    {
      Value = ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 12) + 904), &a3);
      v31 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(**(_DWORD **)(this + 12) + 72))(
                        *(_DWORD *)(this + 12),
                        &v226);
      v32 = v31[1];
      v33 = ((unsigned int)((*Value >> 12) + 1) >> 1) & 7;
      LOWORD(a2) = LOWORD(MEMORY[0x89F688][v33]) + *v31 / 256;
      HIWORD(a2) = v32 / 256 + HIWORD(MEMORY[0x89F688][v33]);
      a4 = (int)a2;
      if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&a4, 1) )
      {
        v34 = ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 12) + 904), &a2);
        v35 = *(_BYTE **)(this + 12);
        v36 = *(_DWORD *)v35;
        v37 = ((unsigned int)((*v34 >> 12) + 1) >> 1) & 7;
        LandHeight = ObjectClass::GetLandHeight(v35);
        v38 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a4);
        v39 = (*(int (__thiscall **)(_DWORD, void *, unsigned int, int, _DWORD, int))(v36 + 428))(
                *(_DWORD *)(this + 12),
                v38,
                v37,
                LandHeight,
                0,
                1);
        if ( v39 == 3 )
        {
          v40 = *(_DWORD *)(this + 12);
          a2 = (_BYTE *)a4;
          Cell::IsPassableAllied(v40, (__int16 *)&a2);
        }
        else if ( v39 == 6 )
        {
          v41 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a4);
          v42 = (_DWORD *)(*(_DWORD *)(this + 12) + 156);
          v226 = (_DWORD *)*v42;
          v43 = v42[2];
          v227 = (wchar_t *)v42[1];
          v217 = 0;
          v220 = 0;
          v221 = 0;
          LODWORD(v216) = ((__int16)a4 << 8) + 128;
          HIDWORD(v216) = (SHIWORD(a4) << 8) + 128;
          GroundHeight = Cell::GetGroundHeight(&v216);
          ClosestObject = Object::FindClosestObjectCell(v41, &v220, v43 > GroundHeight + 2 * MEMORY[0x8A07D0], 0);
          if ( ClosestObject )
          {
            if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(*(_DWORD *)(this + 12) + 540), ClosestObject)
              && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12))
                           + 3220) )
            {
              v46 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(**(_DWORD **)(this + 12) + 72))(
                                *(_DWORD *)(this + 12),
                                &v226);
              v47 = Coord::Subtract(
                      &v216,
                      *v46 - *v22,
                      v46[1] - *(_DWORD *)(this + 56),
                      v46[2] - *(_DWORD *)(this + 60));
              v220 = (_DWORD *)*v47;
              v221 = v47[1];
              v222 = v47[2];
              if ( (int)Coord::Length((int *)&v220) < *((_DWORD *)MEMORY[0x8871E0] + 1478)
                && !Team::AllMembersValid(*(int **)(this + 12)) )
              {
                v48 = (_DWORD *)(*(_DWORD *)(this + 12) + 156);
                v226 = (_DWORD *)*v48;
                v227 = (wchar_t *)v48[1];
                v49 = *(_DWORD *)(this + 60) - v48[2];
                if ( (int)((HIDWORD(v49) ^ v49) - HIDWORD(v49)) < 2 * MEMORY[0x8A07D0] )
                {
                  v220 = (_DWORD *)*v48;
                  v221 = v48[1];
                  v222 = v48[2];
                  if ( *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v220) + 59) != 10 )
                  {
                    if ( this->JumpjetLocomotion_field_0x40 != MEMORY[0x8A0790]
                      || this->JumpjetLocomotion_field_0x44 != MEMORY[0x8A0794]
                      || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
                    {
                      this->JumpjetLocomotion_field_0x40 = MEMORY[0x8A0790];
                      this->JumpjetLocomotion_field_0x44 = MEMORY[0x8A0794];
                      *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
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
                             *(_DWORD *)(this + 12),
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
                    v52 = v51[2] / MEMORY[0x8A07D0] - *((char *)v41 + 283),
                    (int)((HIDWORD(v52) ^ v52) - HIDWORD(v52)) <= 2) )
              {
                LOBYTE(a2) = 0;
              }
              Cell::ApplyDamage(v41, (int)&MEMORY[0x8A0790], 1, 1, (char)a2);
            }
          }
        }
      }
      v53 = *(_DWORD **)(this + 12);
      v54 = v53[403];
      if ( v54 <= 0 )
      {
        if ( this->JumpjetLocomotion_field_0x40 != MEMORY[0x8A0790]
          || this->JumpjetLocomotion_field_0x44 != MEMORY[0x8A0794]
          || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
        {
          this->JumpjetLocomotion_field_0x40 = MEMORY[0x8A0790];
          this->JumpjetLocomotion_field_0x44 = MEMORY[0x8A0794];
          *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
          *(_BYTE *)(this + 99) = 0;
        }
        if ( v53[358] )
        {
          FootClass::ClearPathIndex(v53);
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
                 *(_DWORD *)(this + 12),
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
        v55 = *(_DWORD *)(this + 12);
        if ( !*(_BYTE *)(v55 + 144) )
          return 0;
        if ( *(_BYTE *)(v55 + 1674) )
          PlayVocClass(*((_DWORD *)MEMORY[0x8871E0] + 448), 0x2000, 1.0, 0);
        *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0;
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
          *(_BYTE *)(*(_DWORD *)(this + 12) + 1672) = 1;
          if ( *(_DWORD *)(*(_DWORD *)(this + 12) + 1492) )
            TeamClass::WakeUpAllMembers();
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 968))(*(_DWORD *)(this + 12), 0);
        }
      }
    }
    if ( this->JumpjetLocomotion_field_0x40 != MEMORY[0x8A0790]
      || this->JumpjetLocomotion_field_0x44 != MEMORY[0x8A0794]
      || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
    {
      this->JumpjetLocomotion_field_0x40 = MEMORY[0x8A0790];
      this->JumpjetLocomotion_field_0x44 = MEMORY[0x8A0794];
      *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
      *(_BYTE *)(this + 99) = 0;
    }
    this->JumpjetLocomotion_field_0x58 = -1;
    *(_BYTE *)(this + 97) = 0;
    return 0;
  }
  if ( v25[376] == 8 )
    return 0;
  v57 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD **))(*v25 + 72))(v25, &v226);
  v58 = v57[1];
  v59 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) & 7;
  v60 = HIWORD(MEMORY[0x89F688][v59]);
  LOWORD(v216) = *v57 / 256 + LOWORD(MEMORY[0x89F688][v59]);
  WORD1(v216) = v58 / 256 + v60;
  v218 = LODWORD(v216);
  if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v218, 1) )
  {
    v61 = *(_BYTE **)(this + 12);
    v62 = *(_DWORD *)v61;
    v207 = ObjectClass::GetLandHeight(v61);
    v205 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1504);
    v63 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v218);
    v64 = (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD, int))(v62 + 428))(
            *(_DWORD *)(this + 12),
            v63,
            v205,
            v207,
            0,
            1);
    if ( v64 == 3 )
    {
      v65 = *(_DWORD *)(this + 12);
      v219 = v218;
      Cell::IsPassableAllied(v65, (__int16 *)&v219);
    }
    else if ( v64 == 6 )
    {
      v66 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v218);
      v67 = (_DWORD *)(*(_DWORD *)(this + 12) + 156);
      LODWORD(v216) = ((__int16)v218 << 8) + 128;
      HIDWORD(v216) = (SHIWORD(v218) << 8) + 128;
      v217 = 0;
      v226 = (_DWORD *)*v67;
      v227 = (wchar_t *)v67[1];
      v68 = v67[2];
      v220 = 0;
      v221 = 0;
      v69 = Cell::GetGroundHeight(&v216);
      v70 = Object::FindClosestObjectCell(v66, &v220, v68 > v69 + 2 * MEMORY[0x8A07D0], 0);
      if ( v70 )
      {
        if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(*(_DWORD *)(this + 12) + 540), v70)
          && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3220) )
        {
          v71 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(**(_DWORD **)(this + 12) + 72))(
                            *(_DWORD *)(this + 12),
                            &v226);
          v72 = Coord::Subtract(&v216, *v71 - *v22, v71[1] - *(_DWORD *)(this + 56), v71[2] - *(_DWORD *)(this + 60));
          v220 = (_DWORD *)*v72;
          v221 = v72[1];
          v222 = v72[2];
          if ( (int)Coord::Length((int *)&v220) < *((_DWORD *)MEMORY[0x8871E0] + 1478)
            && !Team::AllMembersValid(*(int **)(this + 12)) )
          {
            v73 = (_DWORD *)(*(_DWORD *)(this + 12) + 156);
            v226 = (_DWORD *)*v73;
            v227 = (wchar_t *)v73[1];
            v74 = *(_DWORD *)(this + 60) - v73[2];
            if ( (int)((HIDWORD(v74) ^ v74) - HIDWORD(v74)) < 2 * MEMORY[0x8A07D0] )
            {
              v220 = (_DWORD *)*v73;
              v221 = v73[1];
              v222 = v73[2];
              if ( *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v220) + 59) != 10 )
              {
                if ( this->JumpjetLocomotion_field_0x40 == MEMORY[0x8A0790]
                  && this->JumpjetLocomotion_field_0x44 == MEMORY[0x8A0794]
                  && *(_DWORD *)(this + 72) == MEMORY[0x8A0798] )
                {
                  goto LABEL_118;
                }
                this->JumpjetLocomotion_field_0x40 = MEMORY[0x8A0790];
                this->JumpjetLocomotion_field_0x44 = MEMORY[0x8A0794];
                *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
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
                v77 = v76[2] / MEMORY[0x8A07D0] - *((char *)v66 + 283),
                (int)((HIDWORD(v77) ^ v77) - HIDWORD(v77)) <= 2) )
          {
            LOBYTE(v216) = 0;
          }
          Cell::ApplyDamage(v66, (int)&MEMORY[0x8A0790], 1, 1, SLOBYTE(v216));
        }
      }
    }
  }
  *(_DWORD *)(*(_DWORD *)(this + 12) + 1612) = 10;
  v6 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1504);
LABEL_125:
  if ( v6 == 8 )
    return 0;
  v78 = Coord::Subtract(
          &v226,
          MEMORY[0x89F6D8][2 * (v6 & 7)] + *(_DWORD *)(*(_DWORD *)(this + 12) + 156),
          *(_DWORD *)(*(_DWORD *)(this + 12) + 160) + MEMORY[0x89F6DC][2 * (v6 & 7)],
          *(_DWORD *)(*(_DWORD *)(this + 12) + 164));
  v223 = *v78;
  v79 = *(_DWORD *)(this + 12) + 156;
  v224 = v78[1];
  v225 = v78[2];
  v220 = *(_DWORD **)v79;
  v221 = *(_DWORD *)(v79 + 4);
  v222 = *(_DWORD *)(v79 + 8);
  v80 = (char *)Coord::To_Cell(&MEMORY[0x87F7E8], &v220);
  v81 = *(_DWORD *)(this + 12);
  v82 = v80[283] + (*(_BYTE *)(v81 + 140) != 0 ? 4 : 0);
  v83 = Coord::Subtract(
          &v226,
          *(_DWORD *)(v81 + 156) + MEMORY[0x89F6D8][2 * (v6 & 7)],
          *(_DWORD *)(v81 + 160) + MEMORY[0x89F6DC][2 * (v6 & 7)],
          *(_DWORD *)(v81 + 164));
  v220 = (_DWORD *)*v83;
  v221 = v83[1];
  v222 = v83[2];
  v84 = Coord::To_Cell(&MEMORY[0x87F7E8], &v220);
  v85 = *(_DWORD *)(this + 12);
  if ( *(_BYTE *)(v85 + 140) != ((v84[80] >> 8) & 1) )
    *(_BYTE *)(v85 + 1675) = 1;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 668))(*(_DWORD *)(this + 12)) )
    return 1;
  LOWORD(v216) = v223 / 256;
  v86 = *(_DWORD *)(this + 12);
  WORD1(v216) = v224 / 256;
  v219 = LODWORD(v216);
  if ( !Cell::IsPassableAllied(v86, (__int16 *)&v219) )
    return 1;
  if ( abs16(*(_WORD *)ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 12) + 904), &v220) - ((_WORD)v6 << 13)) )
  {
    LOWORD(a4) = (_WORD)v6 << 13;
    (*(void (__stdcall **)(int, int))(*(_DWORD *)v215 + 76))(v215, a4);
    return 1;
  }
  LOWORD(v216) = v223 / 256;
  WORD1(v216) = v224 / 256;
  v215 = LODWORD(v216);
  v87 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
  v88 = *(_DWORD *)(this + 12);
  v89 = v87;
  v220 = v87;
  v214 = 0;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v88 + 292))(v88, 0);
  v90 = (*(int (__thiscall **)(_DWORD, _DWORD *, unsigned int, int, _DWORD, int))(**(_DWORD **)(this + 12) + 428))(
          *(_DWORD *)(this + 12),
          v89,
          v6,
          v82,
          0,
          1);
  v91 = *(_DWORD *)(this + 12);
  LODWORD(v216) = v90;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v91 + 292))(v91, 1);
  if ( SLODWORD(v216) < 7
    && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3220)
    || (LODWORD(v216) == 5 || LODWORD(v216) == 4)
    && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3368)
    && !v89[17] )
  {
    LODWORD(v216) = 0;
  }
  v92 = v89[17];
  v93 = LODWORD(v216);
  if ( v92 != -1 && !LODWORD(v216) && *(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84] + v92) + 557) )
  {
LABEL_148:
    v214 = 1;
    goto LABEL_149;
  }
  if ( v92 != -1 )
  {
    if ( !LODWORD(v216) )
    {
      if ( !*(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84] + v92) + 680)
        || *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 1460) != 12 )
      {
        goto LABEL_149;
      }
      goto LABEL_148;
    }
    goto LABEL_153;
  }
  if ( LODWORD(v216) )
  {
    v93 = LODWORD(v216);
LABEL_153:
    if ( v93 == 3 )
    {
      v95 = *(_DWORD *)(this + 12);
      a4 = v215;
      Cell::IsPassableAllied(v95, (__int16 *)&a4);
      goto LABEL_155;
    }
    if ( v93 == 6 )
    {
      if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3220) )
      {
        v108 = *(_DWORD **)(this + 12);
        if ( (_BYTE)a3 )
        {
          v108[376] = -1;
          v109 = (_DWORD *)(*(_DWORD *)(this + 12) + 1600);
          *v109 = MEMORY[0xA8ED84];
          v110 = v227;
          goto LABEL_329;
        }
        v111 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD **))(*v108 + 72))(v108, &v226);
        v112 = Coord::Subtract(
                 &v229,
                 *v111 - *(_DWORD *)(this + 52),
                 v111[1] - *(_DWORD *)(this + 56),
                 v111[2] - *(_DWORD *)(this + 60));
        v220 = (_DWORD *)*v112;
        v113 = v112[1];
        v114 = v112[2];
        v221 = v113;
        v222 = v114;
        v115 = Math::Sqrt((double)v114 * (double)v114 + (double)v113 * (double)v113 + (double)(int)v220
                                                                                    * (double)(int)v220);
        if ( (int)Math::RoundToInt(v115) >= *((_DWORD *)MEMORY[0x8871E0] + 1478)
          || (v116 = (_DWORD *)(*(_DWORD *)(this + 12) + 156),
              v226 = (_DWORD *)*v116,
              v227 = (wchar_t *)v116[1],
              v117 = *(_DWORD *)(this + 60) - v116[2],
              (int)((HIDWORD(v117) ^ v117) - HIDWORD(v117)) >= 2 * MEMORY[0x8A07D0])
          || (v220 = (_DWORD *)*v116,
              v221 = v116[1],
              v222 = v116[2],
              *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v220) + 59) == 10) )
        {
          if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 80) & 0x100) == 0
            || (v119 = (_DWORD *)(*(_DWORD *)(this + 12) + 156),
                v226 = (_DWORD *)*v119,
                v227 = (wchar_t *)v119[1],
                v120 = v119[2],
                v121 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 283),
                LOBYTE(a4) = 1,
                (int)abs32(v120 / MEMORY[0x8A07D0] - v121) <= 2) )
          {
            LOBYTE(a4) = 0;
          }
          v210 = a4;
          v122 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
          Cell::ApplyDamage(v122, (int)&MEMORY[0x8A0790], 1, 1, v210);
        }
        else
        {
          if ( this->JumpjetLocomotion_field_0x40 != MEMORY[0x8A0790]
            || this->JumpjetLocomotion_field_0x44 != MEMORY[0x8A0794]
            || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
          {
            this->JumpjetLocomotion_field_0x40 = MEMORY[0x8A0790];
            this->JumpjetLocomotion_field_0x44 = MEMORY[0x8A0794];
            *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
            *(_BYTE *)(this + 99) = 0;
          }
          v118 = *(_DWORD **)(this + 12);
          if ( v118[358] )
          {
            FootClass::ClearPathIndex(v118);
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
                   *(_DWORD *)(this + 12),
                   0,
                   1) )
            {
              return 1;
            }
          }
          else
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v118 + 1152))(v118, 0, 1);
          }
        }
      }
LABEL_155:
      v96 = (_DWORD *)(this + 64);
      if ( this->JumpjetLocomotion_field_0x40 != MEMORY[0x8A0790]
        || this->JumpjetLocomotion_field_0x44 != MEMORY[0x8A0794]
        || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
      {
        *v96 = MEMORY[0x8A0790];
        this->JumpjetLocomotion_field_0x44 = MEMORY[0x8A0794];
        v97 = MEMORY[0x8A0798];
        *(_BYTE *)(this + 99) = 0;
        *(_DWORD *)(this + 72) = v97;
      }
      if ( LODWORD(v216) == 2 )
      {
        v98 = *(_DWORD *)(this + 12);
        if ( !*(_BYTE *)(v98 + 1719) )
        {
          *(_BYTE *)(v98 + 1719) = 1;
          v99 = (_DWORD *)(*(_DWORD *)(this + 12) + 1640);
          v100 = *((_DWORD *)MEMORY[0x8871E0] + 1498);
          *v99 = MEMORY[0xA8ED84];
          v99[1] = v230;
          v99[2] = v100;
        }
        v101 = *(_DWORD *)(this + 12);
        v102 = (int)MEMORY[0xA8ED84];
        v103 = *(_DWORD *)(v101 + 1600);
        v104 = *(_DWORD *)(v101 + 1608);
        if ( v103 != -1 )
        {
          if ( (int)MEMORY[0xA8ED84] - v103 >= v104 )
            goto LABEL_166;
          v104 -= (int)MEMORY[0xA8ED84] - v103;
        }
        if ( !v104 )
        {
LABEL_166:
          if ( *(_BYTE *)(v101 + 1719) )
          {
            v105 = *(_DWORD *)(v101 + 1640);
            v106 = *(_DWORD *)(v101 + 1648);
            if ( v105 != -1 )
            {
              v102 = (int)MEMORY[0xA8ED84] - v105;
              if ( (int)MEMORY[0xA8ED84] - v105 >= v106 )
              {
LABEL_171:
                v107 = 1;
LABEL_199:
                LOWORD(a4) = *(_DWORD *)(this + 52) / 256;
                HIWORD(a4) = *(_DWORD *)(this + 56) / 256;
                v124 = FootClass::MovementStep(v101, v102, a4, 0, (v107 != 0) + 1, v213);
                v125 = *(_DWORD *)(this + 12);
                if ( !v125 )
                {
                  *a2 = 1;
                  return 0;
                }
                if ( v124 || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v125 + 716))(v125, this + 52) )
                {
                  v126 = MEMORY[0xA8ED84];
                  v127 = (wchar_t *)Math::RoundToInt(*((double *)MEMORY[0x8871E0] + 748) * 900.0);
                  v128 = v230;
                  v129 = (wchar_t **)(*(_DWORD *)(this + 12) + 1600);
                  *v129 = v126;
                  v129[1] = v128;
                  v129[2] = v127;
                  return 1;
                }
                v75 = *(_DWORD **)(this + 12);
LABEL_204:
                (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v75 + 1152))(v75, 0, 1);
                return 0;
              }
              v106 -= v102;
            }
            if ( !v106 )
              goto LABEL_171;
          }
          v107 = 0;
          goto LABEL_199;
        }
        goto LABEL_209;
      }
      if ( LODWORD(v216) != 5 && LODWORD(v216) != 4 )
      {
LABEL_209:
        if ( *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) )
          PlayVocClass(*((_DWORD *)MEMORY[0x8871E0] + 448), 0x2000, 1.0, 0);
        goto LABEL_219;
      }
      if ( !(_BYTE)a3 )
      {
        v220 = 0;
        v221 = 0;
        v130 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
        if ( Object::FindObjectCell(v130, &v220, 0) )
        {
          v220 = 0;
          v221 = 0;
          v131 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
          Object = Object::FindObjectCell(v131, &v220, 0);
          if ( !Object::IsAlliedWithObjectHouse(*(_DWORD **)(*(_DWORD *)(this + 12) + 540), Object) )
          {
            v133 = *(int **)(this + 12);
            v220 = 0;
            v221 = 0;
            v134 = *v133;
            v135 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
            v136 = Object::FindObjectCell(v135, &v220, 0);
            (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(v134 + 500))(*(_DWORD *)(this + 12), 1, v136, 0);
          }
        }
        else if ( *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 17) != -1
               && *(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84]
                             + *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 17))
                           + 680) )
        {
          v137 = **(_DWORD **)(this + 12);
          v138 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
          (*(void (__thiscall **)(_DWORD, int, void *, _DWORD))(v137 + 500))(*(_DWORD *)(this + 12), 1, v138, 0);
        }
LABEL_219:
        if ( LODWORD(v216) != 7 )
        {
          *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0;
          this->JumpjetLocomotion_field_0x58 = -1;
          return 1;
        }
        if ( (_BYTE)a3 )
        {
          *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
          v109 = (_DWORD *)(*(_DWORD *)(this + 12) + 1600);
          *v109 = MEMORY[0xA8ED84];
          v110 = v230;
          goto LABEL_329;
        }
        if ( *v96 != MEMORY[0x8A0790]
          || this->JumpjetLocomotion_field_0x44 != MEMORY[0x8A0794]
          || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
        {
          *v96 = MEMORY[0x8A0790];
          this->JumpjetLocomotion_field_0x44 = MEMORY[0x8A0794];
          *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
          goto LABEL_117;
        }
LABEL_118:
        v75 = *(_DWORD **)(this + 12);
        if ( !v75[358] )
          goto LABEL_119;
        goto LABEL_335;
      }
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
      v109 = (_DWORD *)(*(_DWORD *)(this + 12) + 1600);
      *v109 = MEMORY[0xA8ED84];
      v110 = v230;
LABEL_329:
      v109[1] = v110;
      v109[2] = 0;
      return JumpjetLocomotion::Update(a2, 0, 0);
    }
    if ( v93 != 1 )
      goto LABEL_155;
    v123 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
    CellClass::DamageAllObjects(v123);
    if ( (_BYTE)a3 )
    {
      v208 = a2;
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
      return JumpjetLocomotion::Update(v208, 0, 0);
    }
    if ( this->JumpjetLocomotion_field_0x40 == MEMORY[0x8A0790]
      && this->JumpjetLocomotion_field_0x44 == MEMORY[0x8A0794]
      && *(_DWORD *)(this + 72) == MEMORY[0x8A0798] )
    {
      goto LABEL_118;
    }
    this->JumpjetLocomotion_field_0x40 = MEMORY[0x8A0790];
    this->JumpjetLocomotion_field_0x44 = MEMORY[0x8A0794];
    *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
LABEL_117:
    *(_BYTE *)(this + 99) = 0;
    goto LABEL_118;
  }
LABEL_149:
  if ( (int)abs32(v82 - *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 283)) >= 2 )
  {
    v219 = v82;
    v94 = 1;
  }
  else
  {
    v219 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 283);
    v94 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 59);
  }
  v216 = MEMORY[0x89EA40][9 * v94
                        + *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12))
                                    + 1660)];
  if ( v216 > 1.0 )
    v216 = 1.0;
  v139 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
  Coords = CellClass::GetCoords(v139, &v229);
  v141 = Cell::GetGroundHeight(Coords);
  v142 = (_DWORD *)(*(_DWORD *)(this + 12) + 156);
  v226 = (_DWORD *)*v142;
  v227 = (wchar_t *)v142[1];
  v228 = v142[2];
  v143 = Cell::GetGroundHeight(&v226);
  v144 = v141 < v143;
  if ( v141 > v143 )
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(*(_DWORD *)(this + 12)) == 1 )
    {
      if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 1660) == 1 )
        v145 = v216 * *((double *)MEMORY[0x8871E0] + 237);
      else
        v145 = v216 * *((double *)MEMORY[0x8871E0] + 239);
LABEL_241:
      v216 = v145;
      goto LABEL_242;
    }
    v144 = v141 < v143;
  }
  if ( v144 && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(*(_DWORD *)(this + 12)) == 1 )
  {
    if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 1660) == 1 )
      v145 = v216 * *((double *)MEMORY[0x8871E0] + 238);
    else
      v145 = v216 * *((double *)MEMORY[0x8871E0] + 240);
    goto LABEL_241;
  }
LABEL_242:
  if ( v216 == 0.0 )
    v216 = 0.5;
  BuildingClass::GetHealthRatio(*(int **)(this + 12));
  v147 = v216;
  if ( v148 | v149 )
  {
    v147 = v216 * 0.75;
    v216 = v216 * 0.75;
  }
  if ( *(int *)(this + 88) >= 64 )
  {
    v150 = *(double **)(this + 12);
    if ( v147 != v150[175] )
      (*(void (__thiscall **)(double *, _DWORD, _DWORD))(*(_DWORD *)v150 + 1348))(v150, LODWORD(v216), HIDWORD(v216));
  }
  else
  {
    *(double *)(this + 80) = v147;
  }
  v151 = *(_DWORD *)(this + 12);
  LOWORD(v216) = v223 / 256;
  WORD1(v216) = v224 / 256;
  (*(void (__thiscall **)(int, double *, int))(*(_DWORD *)v151 + 1332))(v151, &v216, 1);
  v152 = *(_DWORD **)(this + 12);
  v153 = v152[377];
  if ( v153 == -1 )
  {
    v154 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v152 + 72))(v152, &v229);
    v155 = *(_DWORD *)(this + 56);
    v156 = *v154 - *(_DWORD *)(this + 52);
    v157 = v154[1];
    v158 = v154[2];
    LODWORD(v216) = v156;
    v159 = *(_DWORD *)(this + 60);
    HIDWORD(v216) = v157 - v155;
    v217 = v158 - v159;
    v160 = Math::Sqrt(
             (double)(v158 - v159) * (double)(v158 - v159)
           + (double)(v157 - v155) * (double)(v157 - v155)
           + (double)SLODWORD(v216) * (double)SLODWORD(v216));
    if ( (int)Math::RoundToInt(v160) <= 512 )
    {
LABEL_262:
      v153 = v6;
      goto LABEL_263;
    }
    v161 = *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3220);
    v162 = *(_DWORD *)(this + 12);
    LOWORD(v216) = *(_DWORD *)(this + 52) / 256;
    WORD1(v216) = *(_DWORD *)(this + 56) / 256;
    result = FootClass::MovementStep(v162, v155, SLODWORD(v216), v161 != 0, 0, v213);
    if ( !result )
    {
      v163 = *(_DWORD *)(this + 12);
      if ( !v163 )
      {
        *a2 = 1;
        return result;
      }
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v163 + 716))(v163, this + 52) )
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1152))(*(_DWORD *)(this + 12), 0, 1);
    }
    v153 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1508);
  }
  if ( v153 == 8 )
    v153 = v6;
  if ( v153 == -1 || (_BYTE)a4 )
    goto LABEL_262;
LABEL_263:
  if ( v153 != -1
    && (NeighbourContent = Cell::GetNeighbourContent(v220, v153), (v165 = NeighbourContent) != 0)
    && (v166 = NeighbourContent[17], v166 != -1)
    && ((v167 = *((_DWORD *)MEMORY[0xA83D84] + v166), *(_BYTE *)(v167 + 557))
     || *(_BYTE *)(v167 + 680)
     && *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 1460) == 12
     || *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 1460) == 12
     && CellClass::FindBuilding(v165, 0))
    || v214 )
  {
    v153 = v6;
    *(_BYTE *)(this + 100) = 1;
  }
  else
  {
    *(_BYTE *)(this + 100) = 0;
  }
  v168 = v153 + 8 * v6;
  *(_BYTE *)(this + 96) = 0;
  this->JumpjetLocomotion_field_0x58 = v168;
  if ( !byte_7E7B28[12 * v168] )
    this->JumpjetLocomotion_field_0x58 = 9 * v6;
  if ( (dword_7E7B30[3 * this->JumpjetLocomotion_field_0x58] & 8) != 0 )
  {
    v211 = *(_DWORD *)(this + 12);
    v169 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
    if ( CrateClass::ProcessPickup(v169, v211) || (v170 = *(_DWORD *)(this + 12), *(_BYTE *)(v170 + 129)) )
    {
      v172 = *(int **)(this + 12);
      if ( !*((_BYTE *)v172 + 144) )
        return 0;
      v173 = v153 & 7;
      v174 = MEMORY[0x89F6DC][2 * v173];
      v223 += MEMORY[0x89F6D8][2 * v173];
      v224 += v174;
      LOWORD(a4) = v223 / 256;
      v209 = v219;
      HIWORD(a4) = v224 / 256;
      v215 = a4;
      v175 = *v172;
      v176 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
      v171 = (*(int (__thiscall **)(_DWORD, void *, unsigned int, int, _DWORD, int))(v175 + 428))(
               *(_DWORD *)(this + 12),
               v176,
               v153,
               v209,
               0,
               1);
      if ( v171 < 7
        && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3220)
        || (v171 == 4 || v171 == 5)
        && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3368)
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
          goto LABEL_293;
        case 2:
          return JumpjetLocomotion::Update(a2, a3, 1);
        case 6:
          if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v75 + 132))(v75) + 3220) )
            goto LABEL_293;
          v178 = *(_DWORD **)(this + 12);
          if ( (_BYTE)v177 )
          {
            v178[376] = -1;
            v109 = (_DWORD *)(*(_DWORD *)(this + 12) + 1600);
            *v109 = MEMORY[0xA8ED84];
            v110 = v230;
            goto LABEL_329;
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
          if ( (int)Math::RoundToInt(v185) >= *((_DWORD *)MEMORY[0x8871E0] + 1478)
            || (v186 = (_DWORD *)(*(_DWORD *)(this + 12) + 156),
                v226 = (_DWORD *)*v186,
                v227 = (wchar_t *)v186[1],
                v187 = *(_DWORD *)(this + 60) - v186[2],
                (int)((HIDWORD(v187) ^ v187) - HIDWORD(v187)) >= 2 * MEMORY[0x8A07D0])
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
                  v192 = v190[2] / MEMORY[0x8A07D0] - v191,
                  (int)((HIDWORD(v192) ^ v192) - HIDWORD(v192)) <= 2) )
            {
              LOBYTE(a4) = 0;
            }
            Cell::ApplyDamage(v189, (int)&MEMORY[0x8A0790], 1, 1, a4);
LABEL_293:
            *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
            this->JumpjetLocomotion_field_0x58 = -1;
            v223 = MEMORY[0x8A0790];
            v224 = MEMORY[0x8A0794];
            v225 = MEMORY[0x8A0798];
            if ( v171 == 5 || v171 == 4 )
              return JumpjetLocomotion::Update(a2, v177, 1);
            goto LABEL_338;
          }
          if ( this->JumpjetLocomotion_field_0x40 != MEMORY[0x8A0790]
            || this->JumpjetLocomotion_field_0x44 != MEMORY[0x8A0794]
            || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
          {
            this->JumpjetLocomotion_field_0x40 = MEMORY[0x8A0790];
            this->JumpjetLocomotion_field_0x44 = MEMORY[0x8A0794];
            *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
            *(_BYTE *)(this + 99) = 0;
          }
          v188 = *(_DWORD **)(this + 12);
          if ( !v188[358] )
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v188 + 1152))(v188, 0, 1);
            goto LABEL_293;
          }
          FootClass::ClearPathIndex(v188);
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
                  *(_DWORD *)(this + 12),
                  0,
                  1) )
            goto LABEL_293;
          return 1;
        case 1:
          v193 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
          CellClass::DamageAllObjects(v193);
          if ( (_BYTE)a3 )
          {
            v194 = a2;
            *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
            return JumpjetLocomotion::Update(v194, 0, 0);
          }
          if ( this->JumpjetLocomotion_field_0x40 != MEMORY[0x8A0790]
            || this->JumpjetLocomotion_field_0x44 != MEMORY[0x8A0794]
            || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
          {
            this->JumpjetLocomotion_field_0x40 = MEMORY[0x8A0790];
            this->JumpjetLocomotion_field_0x44 = MEMORY[0x8A0794];
            *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
            *(_BYTE *)(this + 99) = 0;
          }
          v75 = *(_DWORD **)(this + 12);
          if ( v75[358] )
            goto LABEL_335;
LABEL_119:
          (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v75 + 1152))(v75, 0, 1);
          return 0;
      }
      if ( v171 != 7 )
        goto LABEL_293;
      if ( (_BYTE)a3 )
      {
        v75[376] = -1;
        v109 = (_DWORD *)(*(_DWORD *)(this + 12) + 1600);
        *v109 = MEMORY[0xA8ED84];
        v110 = v230;
        goto LABEL_329;
      }
      if ( this->JumpjetLocomotion_field_0x40 != MEMORY[0x8A0790]
        || this->JumpjetLocomotion_field_0x44 != MEMORY[0x8A0794]
        || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
      {
        this->JumpjetLocomotion_field_0x40 = MEMORY[0x8A0790];
        this->JumpjetLocomotion_field_0x44 = MEMORY[0x8A0794];
        *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
        *(_BYTE *)(this + 99) = 0;
      }
      if ( v75[358] )
      {
LABEL_335:
        FootClass::ClearPathIndex(v75);
        return (*(int (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1156))(
                 *(_DWORD *)(this + 12),
                 0,
                 1);
      }
      goto LABEL_204;
    }
    qmemcpy(v75 + 376, v75 + 378, 0x58u);
    *(_DWORD *)(*(_DWORD *)(this + 12) + 1592) = -1;
    *(_BYTE *)(*(_DWORD *)(this + 12) + 1675) = 1;
  }
  else
  {
    qmemcpy((void *)(*(_DWORD *)(this + 12) + 1504), (const void *)(*(_DWORD *)(this + 12) + 1508), 0x5Cu);
  }
LABEL_338:
  v195 = (int *)(this + 64);
  *(_DWORD *)(*(_DWORD *)(this + 12) + 1596) = -1;
  LOWORD(a4) = v223 / 256;
  v196 = *(_DWORD *)(this + 12);
  HIWORD(a4) = v224 / 256;
  *(_DWORD *)(v196 + 1368) = a4;
  *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0;
  *(_DWORD *)(this + 92) = 0;
  v197 = MEMORY[0x8A0790];
  if ( this->JumpjetLocomotion_field_0x40 != MEMORY[0x8A0790]
    || this->JumpjetLocomotion_field_0x44 != MEMORY[0x8A0794]
    || *(_DWORD *)(this + 72) != MEMORY[0x8A0798] )
  {
    *v195 = MEMORY[0x8A0790];
    this->JumpjetLocomotion_field_0x44 = MEMORY[0x8A0794];
    v198 = MEMORY[0x8A0798];
    *(_BYTE *)(this + 99) = 0;
    *(_DWORD *)(this + 72) = v198;
    v197 = MEMORY[0x8A0790];
  }
  v199 = v223;
  v200 = v225;
  v201 = v223 == v197;
  v202 = v224;
  if ( !v201 || v224 != MEMORY[0x8A0794] || v225 != MEMORY[0x8A0798] )
  {
    *(_BYTE *)(this + 99) = 1;
    *v195 = v199;
    this->JumpjetLocomotion_field_0x44 = v202;
    *(_DWORD *)(this + 72) = v200;
    v212 = *(_DWORD *)(this + 12);
    v203 = Coord::To_Cell(&MEMORY[0x87F7E8], &v223);
    if ( CrateClass::ProcessPickup(v203, v212) && !*(_BYTE *)(*(_DWORD *)(this + 12) + 129) )
    {
      JumpjetLocomotion::MoveTo(&v223, 1);
      return 0;
    }
    if ( *(_BYTE *)(*(_DWORD *)(this + 12) + 144) )
    {
      *v195 = MEMORY[0x8A0790];
      this->JumpjetLocomotion_field_0x44 = MEMORY[0x8A0794];
      *(_DWORD *)(this + 72) = MEMORY[0x8A0798];
      *(_BYTE *)(this + 99) = 0;
    }
  }
  v204 = *(_DWORD *)(this + 12);
  this->JumpjetLocomotion_field_0x58 = -1;
  *(_DWORD *)(v204 + 1504) = -1;
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))(*(_DWORD *)(this + 12), 0, 0);
  return 0;
}

}
} // namespace gamemd

// 0x4B4780
namespace gamemd {
unsigned int * JumpjetLocomotion::TransformCoords(IUnknown * aP1, IUnknown * aP2, ObjectClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall JumpjetLocomotion::TransformCoords(_DWORD *this, IUnknown *aP1, IUnknown *aP2, ObjectClass *aP3)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // edx
  int v9; // ecx

  v4 = *(_DWORD *)aP3->__pad_0; /*0x4b478d*/
  v5 = dword_7E7B30[3 * this->q058]; /*0x4b4791*/
  v6 = aP2->field_0; /*0x4b479f*/
  v7 = aP2->field_4; /*0x4b47a1*/
  if ( (v5 & 1) != 0 ) /*0x4b47a4*/
  {
    v6 = aP2->field_4; /*0x4b47a8*/
    v7 = aP2->field_0; /*0x4b47aa*/
    v4 = (unsigned __int8)(-64 - v4); /*0x4b47b9*/
  }
  if ( (v5 & 2) != 0 ) /*0x4b47be*/
  {
    v6 = -v6; /*0x4b47c2*/
    v4 = (unsigned __int8)-(char)v4; /*0x4b47c4*/
  }
  if ( (v5 & 4) != 0 ) /*0x4b47cc*/
  {
    v7 = -v7; /*0x4b47d5*/
    v4 = (unsigned __int8)(0x80 - v4); /*0x4b47dd*/
  }
  *(_DWORD *)aP3->__pad_0 = v4; /*0x4b47df*/
  v8 = this->q040; /*0x4b47e2*/
  v9 = this->q044; /*0x4b47e5*/
  aP1->field_0 = v6 + v8; /*0x4b47f2*/
  aP1->field_4 = v7 + v9; /*0x4b47f5*/
  return &aP1->field_0; /*0x4b47f0*/
}
}
} // namespace gamemd

// 0x54CA90
namespace gamemd {
char JumpjetLocomotion::Land()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall JumpjetLocomotion_Land(int this)
{
  int v2; // ecx
  int v3; // ebp
  char v4; // al
  double v5; // st7
  double v6; // st7
  int v7; // eax
  double v8; // st7
  int v9; // esi
  _BYTE *v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  _DWORD *v13; // ebp
  int *v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int *v22; // ecx
  _DWORD *v23; // esi
  int v24; // eax
  bool v25; // bl
  int v26; // eax
  int v27; // ecx
  int v28; // ebp
  int v29; // eax
  _DWORD *v30; // ecx
  int v31; // ecx
  _DWORD *v32; // ecx
  int v33; // eax
  int v34; // esi
  _DWORD *v35; // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // esi
  _DWORD *v41; // eax
  int v42; // ecx
  char v44; // [esp+32h] [ebp-24h]
  char v45; // [esp+33h] [ebp-23h]
  char v46; // [esp+34h] [ebp-22h]
  char v47; // [esp+35h] [ebp-21h]
  int v48; // [esp+36h] [ebp-20h] BYREF
  int v49; // [esp+3Ah] [ebp-1Ch] BYREF
  int v50; // [esp+3Eh] [ebp-18h] BYREF
  int v51; // [esp+42h] [ebp-14h]
  int v52; // [esp+46h] [ebp-10h]
  int v53; // [esp+4Ah] [ebp-Ch] BYREF
  int v54; // [esp+4Eh] [ebp-8h]
  int v55; // [esp+52h] [ebp-4h]

  v2 = *(_DWORD *)(this + 12); /*0x54ca99*/
  v50 = *(_DWORD *)(v2 + 156); /*0x54caa6*/
  v51 = *(_DWORD *)(v2 + 160); /*0x54caad*/
  v52 = *(_DWORD *)(v2 + 164); /*0x54cab4*/
  v3 = *(_DWORD *)(v2 + 164); /*0x54caba*/
  v53 = *(_DWORD *)(v2 + 156); /*0x54cabd*/
  v4 = *(_BYTE *)(v2 + 1709); /*0x54cac4*/
  v54 = *(_DWORD *)(v2 + 160); /*0x54cacc*/
  if ( v4 ) /*0x54cad0*/
  {
    v5 = (double)v52; /*0x54cad2*/
    *(_DWORD *)(this + 112) = 0; /*0x54cad8*/
    *(_DWORD *)(this + 120) = 0; /*0x54cadb*/
    v6 = v5 - *(float *)(this + 40); /*0x54cade*/
    this->JumpjetLocomotion_field_0x74 = 0; /*0x54cae1*/
    *(_DWORD *)(this + 124) = 0; /*0x54cae4*/
    v7 = Math::RoundToInt(v6); /*0x54cae7*/
    v8 = *(float *)(this + 40) + 1.0; /*0x54caef*/
    v52 = v7; /*0x54caf5*/
    *(float *)(this + 40) = v8; /*0x54caf9*/
  }
  else
  {
    v52 = Math::RoundToInt((double)v52 - *(float *)(this + 40)); /*0x54cb0a*/
    LOWORD(v48) = *(_WORD *)ProgressTimer::GetValue((_WORD *)(this + 84), &v49) + 11520; /*0x54cb2a*/
    FacingClass::Update((char *)(this + 84), &v48); /*0x54cb39*/
  }
  v9 = dword_ABC5DC + Cell::GetGroundHeight(&v50); /*0x54cb5e*/
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v50) + 80) & 0x100) == 0 || v3 < v9 || (v44 = 1, v52 >= v9) ) /*0x54cb7f*/
    v44 = 0; /*0x54cb81*/
  LOWORD(v48) = v50 / 256; /*0x54cba0*/
  HIWORD(v48) = v51 / 256; /*0x54cbb5*/
  if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v48) ) /*0x54cbc2*/
  {
    RemoveTarget(*(_DWORD *)(this + 12)); /*0x54cbd4*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 0); /*0x54cbe1*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), &v50); /*0x54cbf1*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 1); /*0x54cbfe*/
    Targeting::Readd(*(_DWORD **)(this + 12)); /*0x54cc0d*/
  }
  v45 = 0; /*0x54cc19*/
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)) > 0 && !v44 ) /*0x54cc30*/
    goto LABEL_74; /*0x54cc30*/
  v10 = *(_BYTE **)(this + 12); /*0x54cc36*/
  if ( !v10[1063] ) /*0x54cc39*/
    goto LABEL_74; /*0x54cc41*/
  v46 = 0; /*0x54cc4e*/
  v11 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v10 + 72))(v10, &v53); /*0x54cc53*/
  LOWORD(v48) = *v11 / 256; /*0x54cc66*/
  HIWORD(v48) = v11[1] / 256; /*0x54cc7f*/
  v49 = v48; /*0x54cc8d*/
  v12 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v49) + 57); /*0x54cc96*/
  if ( v12 == *(_DWORD **)(this + 12) ) /*0x54cca1*/
    v12 = (_DWORD *)v12[12]; /*0x54cca3*/
  if ( v12 ) /*0x54cca8*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*v12 + 44))(v12) == 1 /*0x54ccc8*/
      || (*(int (__thiscall **)(_DWORD *))(*v12 + 44))(v12) == 6 )
    {
      goto LABEL_64; /*0x54ccc8*/
    }
    if ( (*(int (__thiscall **)(_DWORD *))(*v12 + 44))(v12) == 15 ) /*0x54ccd8*/
    {
      do /*0x54cd78*/
      {
        v13 = (_DWORD *)v12[12]; /*0x54cce1*/
        v14 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x54cce4*/
        v53 = *v14; /*0x54ccf0*/
        v54 = v14[1]; /*0x54ccf9*/
        v15 = *v12; /*0x54ccfd*/
        v55 = v14[2]; /*0x54cd02*/
        v16 = (*(int (__thiscall **)(_DWORD *))(v15 + 136))(v12); /*0x54cd06*/
        StartAudioControllerAt(*(_DWORD *)(v16 + 496), (int)&v53, 0); /*0x54cd14*/
        v17 = *(_DWORD *)(this + 12); /*0x54cd19*/
        v18 = *(_DWORD *)(v17 + 1064); /*0x54cd1e*/
        if ( v18 ) /*0x54cd26*/
        {
          (*(void (__thiscall **)(_DWORD *, int))(*v12 + 224))(v12, v18); /*0x54cd2d*/
        }
        else
        {
          v19 = *v12; /*0x54cd3b*/
          if ( *(_DWORD *)(v17 + 1068) ) /*0x54cd35*/
            (*(void (__thiscall **)(_DWORD *, _DWORD))(v19 + 228))(v12, *(_DWORD *)(v17 + 1068)); /*0x54cd44*/
          else
            (*(void (__thiscall **)(_DWORD *, _DWORD))(v19 + 224))(v12, *(_DWORD *)(this + 12)); /*0x54cd4f*/
        }
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v12 + 292))(v12, 0); /*0x54cd5a*/
        (*(void (__thiscall **)(_DWORD *))(*v12 + 212))(v12); /*0x54cd64*/
        (*(void (__thiscall **)(_DWORD *))(*v12 + 248))(v12); /*0x54cd6e*/
        v12 = v13; /*0x54cd76*/
      }
      while ( v13 ); /*0x54cd78*/
    }
    else
    {
      v20 = *(_DWORD *)(this + 12); /*0x54cd80*/
      v21 = *(_DWORD *)(v20 + 1064); /*0x54cd83*/
      if ( v21 ) /*0x54cd8b*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, int, int, int, _DWORD, _DWORD))(*v12 + 364))( /*0x54cd94*/
          v12,
          v12 + 27,
          0,
          MEMORY[0x8871E0]->?[6],
          v21,
          1,
          0,
          0);
      }
      else if ( *(_DWORD *)(v20 + 1068) ) /*0x54cd96*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, int, int, int, _DWORD, _DWORD))(*v12 + 364))( /*0x54cda3*/
          v12,
          v12 + 27,
          0,
          MEMORY[0x8871E0]->?[6],
          v20,
          1,
          0,
          *(_DWORD *)(v20 + 1068));
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, int, int, int, _DWORD, _DWORD))(*v12 + 364))( /*0x54cdbd*/
          v12,
          v12 + 27,
          0,
          MEMORY[0x8871E0]->?[6],
          v20,
          1,
          0,
          0);
      }
    }
  }
  v46 = 1; /*0x54cdc6*/
  v22 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x54cdcb*/
  v53 = *v22; /*0x54cdd3*/
  v54 = v22[1]; /*0x54cddf*/
  v55 = v22[2]; /*0x54cde6*/
  v23 = Coord::To_Cell(&MEMORY[0x87F7E8], &v53); /*0x54cdf4*/
  v24 = v23[59]; /*0x54cdf6*/
  if ( v24 != 2 || (v47 = 1, v44) ) /*0x54ce0c*/
    v47 = 0; /*0x54ce0e*/
  v25 = v24 == 6 && !v44; /*0x54ce24*/
  v26 = (*(int (__thiscall **)(_DWORD, _DWORD *, int, int, _DWORD, int))(**(_DWORD **)(this + 12) + 428))( /*0x54ce34*/
          *(_DWORD *)(this + 12),
          v23,
          -1,
          -1,
          0,
          1);
  v27 = *(_DWORD *)(this + 12); /*0x54ce3a*/
  v28 = v26; /*0x54ce3d*/
  if ( v27 /*0x54ce5c*/
    && (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 44))(v27) == 2
    && !Cell::IsBuildable((int)v23, 2, 1, 1, -1, 0, -1, 1) )
  {
    v28 = 7; /*0x54ce65*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3476) /*0x54ce9a*/
    && !Cell::IsBuildable((int)v23, 2, 1, 1, -1, 0, -1, 1)
    || v28 )
  {
    if ( v47 && !v25 ) /*0x54ceae*/
    {
      *(_BYTE *)(*(_DWORD *)(this + 12) + 973) = 1; /*0x54ceb7*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 928))(*(_DWORD *)(this + 12)); /*0x54cec3*/
      v29 = *(_DWORD *)(this + 12); /*0x54cec9*/
      v30 = *(_DWORD **)(v29 + 728); /*0x54cecc*/
      if ( v30 ) /*0x54ced4*/
      {
        TechnoClass::MutateAll(v30, *(_DWORD *)(v29 + 1064), 0); /*0x54cedf*/
        v31 = *(_DWORD *)(*(_DWORD *)(this + 12) + 728); /*0x54cee7*/
        if ( v31 ) /*0x54ceef*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v31 + 32))(v31, 1); /*0x54cef5*/
        *(_DWORD *)(*(_DWORD *)(this + 12) + 728) = 0; /*0x54cefb*/
      }
      v32 = *(_DWORD **)(this + 12); /*0x54cf05*/
      if ( v32[266] ) /*0x54cf08*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v32 + 224))(v32, v32[266]); /*0x54cf15*/
      }
      else if ( v32[267] ) /*0x54cf20*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v32 + 228))(v32, v32[267]); /*0x54cf31*/
      }
      goto LABEL_65; /*0x54cf1b*/
    }
  }
  else
  {
    v33 = *(_DWORD *)(this + 12); /*0x54cf3c*/
    if ( *(_DWORD *)(v33 + 1400) /*0x54cf75*/
      || *(_DWORD *)(v33 + 1404) != 1075052544 && (*(_DWORD *)(v33 + 1400) || *(_DWORD *)(v33 + 1404) != 1075576832)
      || v47 && !v25 )
    {
      v34 = *(_DWORD *)(this + 12); /*0x54cf77*/
      if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v34 + 444))(v34) + 224) == v34 ) /*0x54cf8a*/
      {
        v35 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v34 + 444))(v34); /*0x54cf92*/
        CellClass::AttachObject(v35, 0); /*0x54cf9a*/
      }
      v36 = *(_DWORD *)(this + 12); /*0x54cf9f*/
      *(_DWORD *)(this + 80) = 4; /*0x54cfa2*/
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v36 + 1152))(v36, 0, 1); /*0x54cfaf*/
      goto LABEL_65; /*0x54cfb5*/
    }
  }
LABEL_64:
  v45 = 1; /*0x54cfb7*/
LABEL_65:
  v37 = *(_DWORD *)(this + 12); /*0x54cfbc*/
  if ( v37 && (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 456))(v37) > 0 ) /*0x54cfcf*/
  {
    if ( !v44 ) /*0x54cfd7*/
    {
      v38 = *(_DWORD *)(this + 12); /*0x54cfd9*/
      if ( !*(_BYTE *)(v38 + 1709) || v45 ) /*0x54cfec*/
      {
        *(_DWORD *)(v38 + 1064) = 0; /*0x54cfee*/
        *(_DWORD *)(*(_DWORD *)(this + 12) + 1068) = 0; /*0x54cff7*/
      }
      goto LABEL_74; /*0x54cffd*/
    }
  }
  else if ( !v44 ) /*0x54d005*/
  {
    goto LABEL_74; /*0x54d005*/
  }
  if ( v46 ) /*0x54d00d*/
    *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 1; /*0x54d012*/
LABEL_74:
  if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)) <= 0 /*0x54d043*/
     || (LOBYTE(v39) = v44) != 0)
    && (!*(_BYTE *)(*(_DWORD *)(this + 12) + 1709) || (LOBYTE(v39) = v45) != 0) )
  {
    v40 = *(_DWORD *)(this + 12); /*0x54d045*/
    if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v40 + 444))(v40) + 224) == v40 ) /*0x54d058*/
    {
      v41 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v40 + 444))(v40); /*0x54d05f*/
      CellClass::AttachObject(v41, 0); /*0x54d067*/
    }
    GadgetGrid::RemoveItem(MEMORY[0x887888], *(_DWORD *)(this + 12)); /*0x54d075*/
    v42 = *(_DWORD *)(this + 12); /*0x54d07a*/
    *(_DWORD *)(this + 120) = 0; /*0x54d07d*/
    *(_DWORD *)(this + 80) = 6; /*0x54d083*/
    *(_DWORD *)(this + 124) = 0; /*0x54d08a*/
    (**(void (__thiscall ***)(int, int, _DWORD))(v42 + 8))(v42 + 8, 4476, 0); /*0x54d095*/
    v39 = *(_DWORD *)(this + 12); /*0x54d097*/
    if ( v39 ) /*0x54d09c*/
    {
      *(_DWORD *)(v39 + 1064) = 0; /*0x54d09e*/
      v39 = *(_DWORD *)(this + 12); /*0x54d0a4*/
      *(_DWORD *)(v39 + 1068) = 0; /*0x54d0a7*/
    }
  }
  return v39; /*0x54d0ad*/
}
}
} // namespace gamemd

// 0x54D0F0
namespace gamemd {
int JumpjetLocomotion::UpdateFacing()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall JumpjetLocomotion_UpdateFacing(int this)
{
  int v2; // eax
  _BYTE *v3; // ecx
  double v4; // st7
  double v5; // st7
  unsigned __int8 v7; // c0
  unsigned __int8 v8; // c3
  int v9; // edi
  int v10; // ebp
  _WORD *v11; // eax
  int v12; // eax
  double v13; // st7
  __int64 v14; // rax
  int v15; // ecx
  int v16; // ebp
  int v17; // ecx
  int GroundHeight; // ebx
  int v19; // eax
  int v20; // edx
  int v21; // edx
  int v22; // eax
  int v23; // edi
  int v24; // ebp
  int v25; // ecx
  int v26; // eax
  int *v27; // eax
  int v28; // ebx
  int v29; // ecx
  int v30; // ebp
  int v31; // ebp
  int v32; // ebx
  _WORD *v33; // eax
  int v34; // ecx
  int *v35; // eax
  double v36; // st7
  int v37; // edi
  unsigned int v38; // ebp
  unsigned int v39; // ebx
  double v40; // st7
  double v41; // st7
  int v42; // eax
  int v43; // ecx
  _BYTE *v44; // ecx
  int v45; // edi
  int v46; // eax
  int *v47; // ecx
  int result; // eax
  double v49; // [esp+0h] [ebp-58h]
  int *v50; // [esp+4h] [ebp-54h]
  _DWORD *Value; // [esp+4h] [ebp-54h]
  char v52; // [esp+19h] [ebp-3Fh]
  char v53; // [esp+1Ah] [ebp-3Eh]
  char v54; // [esp+1Ah] [ebp-3Eh]
  char v55; // [esp+1Bh] [ebp-3Dh]
  int v56; // [esp+1Ch] [ebp-3Ch] BYREF
  double v57; // [esp+20h] [ebp-38h]
  double v58; // [esp+28h] [ebp-30h] BYREF
  double v59; // [esp+30h] [ebp-28h] BYREF
  int v60; // [esp+38h] [ebp-20h]
  int v61; // [esp+40h] [ebp-18h]
  int v62; // [esp+44h] [ebp-14h]
  _DWORD v63[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this + 80); /*0x54d0ff*/
  if ( v2 == 2 || (v52 = 1, v2 == 3) ) /*0x54d10f*/
    v52 = 0; /*0x54d111*/
  v3 = *(_BYTE **)(this + 12); /*0x54d116*/
  v55 = v3[116]; /*0x54d11c*/
  if ( v52 ) /*0x54d126*/
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v3 + 292))(v3, 0); /*0x54d12c*/
  else
    v3[116] = 0; /*0x54d134*/
  if ( *(double *)(this + 120) > *(double *)(this + 112) ) /*0x54d143*/
  {
    v4 = *(float *)(this + 48) + *(double *)(this + 112); /*0x54d148*/
    *(double *)(this + 112) = v4; /*0x54d14b*/
    v58 = (double)*(int *)(this + 32); /*0x54d151*/
    if ( v4 >= v58 ) /*0x54d15e*/
      v4 = v58; /*0x54d162*/
    *(double *)(this + 112) = v4; /*0x54d166*/
  }
  if ( *(double *)(this + 120) < *(double *)(this + 112) ) /*0x54d174*/
  {
    v5 = *(double *)(this + 112) - *(float *)(this + 48) * 1.5; /*0x54d17f*/
    *(double *)(this + 112) = v5; /*0x54d188*/
    if ( v7 | v8 ) /*0x54d18d*/
      v5 = 0.0; /*0x54d194*/
    *(double *)(this + 112) = v5; /*0x54d19a*/
  }
  v49 = *(double *)(this + 112) / (double)*(int *)(this + 32); /*0x54d1ab*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))( /*0x54d1ae*/
    *(_DWORD *)(this + 12),
    LODWORD(v49),
    HIDWORD(v49));
  v9 = this->JumpjetLocomotion_field_0x40 / 256; /*0x54d1da*/
  v10 = this->JumpjetLocomotion_field_0x44 / 256; /*0x54d1dd*/
  v11 = (_WORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 440))( /*0x54d1e0*/
                   *(_DWORD *)(this + 12),
                   &v58);
  if ( *v11 != (_WORD)v9 || (v53 = 1, v11[1] != (_WORD)v10) ) /*0x54d1f4*/
    v53 = 0; /*0x54d1f6*/
  v12 = *(_DWORD *)(this + 80); /*0x54d1fb*/
  if ( (v12 == 2 || v12 == 3) && !*(_BYTE *)(this + 60) ) /*0x54d208*/
  {
    *(double *)(this + 136) = 6.283185307179586 / (15.0 / *(float *)(this + 52)) + *(double *)(this + 136); /*0x54d224*/
  }
  else
  {
    *(_DWORD *)(this + 136) = 0; /*0x54d22e*/
    this->JumpjetLocomotion_field_0x8C = 0; /*0x54d234*/
  }
  v13 = Math::SinCos(*(double *)(this + 136)); /*0x54d248*/
  v14 = Math::RoundToInt(v13 * (double)*(int *)(this + 56) + (double)*(int *)(this + 128)); /*0x54d259*/
  v15 = *(_DWORD *)(this + 12); /*0x54d25e*/
  LODWORD(v57) = v14; /*0x54d261*/
  v16 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v15 + 464))(v15, HIDWORD(v14)); /*0x54d270*/
  v17 = *(_DWORD *)(this + 12) + 156; /*0x54d272*/
  v56 = v16; /*0x54d278*/
  v59 = *(double *)v17; /*0x54d27e*/
  v60 = *(_DWORD *)(v17 + 8); /*0x54d291*/
  GroundHeight = Cell::GetGroundHeight(&v59); /*0x54d29f*/
  v19 = *(_DWORD *)(this + 12) + 156; /*0x54d2a4*/
  v59 = *(double *)v19; /*0x54d2ab*/
  v60 = *(_DWORD *)(v19 + 8); /*0x54d2c3*/
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v59) + 80) & 0x100) != 0 ) /*0x54d2d5*/
  {
    v20 = *(_DWORD *)(this + 12) + 156; /*0x54d2da*/
    v59 = *(double *)v20; /*0x54d2e2*/
    v21 = *(_DWORD *)(v20 + 8); /*0x54d2f5*/
    LODWORD(v58) = GroundHeight + 4 * dword_ABC5E8; /*0x54d2f8*/
    v60 = v21; /*0x54d2fc*/
    if ( (double)SLODWORD(v58) - *(float *)(this + 40) <= (double)v21 ) /*0x54d312*/
      GroundHeight += dword_ABC5DC; /*0x54d314*/
  }
  v22 = *(_DWORD *)(this + 80); /*0x54d31a*/
  if ( v22 == 4 /*0x54d339*/
    || !v22
    || v53
    && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3434) )
  {
    v23 = v16 - GroundHeight; /*0x54d352*/
  }
  else
  {
    v23 = v16 - JumpjetLocomotionClass::GetFloorZSetContext(this); /*0x54d34c*/
  }
  LODWORD(v58) = v23; /*0x54d358*/
  v54 = 0; /*0x54d35e*/
  if ( v23 < SLODWORD(v57) ) /*0x54d363*/
  {
    v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)); /*0x54d377*/
    v25 = *(_DWORD *)(this + 12) + 156; /*0x54d379*/
    v59 = *(double *)v25; /*0x54d381*/
    v60 = *(_DWORD *)(v25 + 8); /*0x54d394*/
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v59) + 80) & 0x100) != 0 ) /*0x54d3ab*/
    {
      v26 = *(_DWORD *)(this + 12); /*0x54d3ad*/
      if ( !*(_BYTE *)(v26 + 140) ) /*0x54d3b0*/
      {
        v27 = (int *)(v26 + 156); /*0x54d3ba*/
        v61 = *v27; /*0x54d3c3*/
        v62 = v27[1]; /*0x54d3ca*/
        v28 = v27[2]; /*0x54d3ce*/
        v59 = *(double *)v27; /*0x54d3d3*/
        v60 = v27[2]; /*0x54d3eb*/
        if ( v28 >= dword_ABC5DC + Cell::GetGroundHeight(&v59) ) /*0x54d3ff*/
          v24 -= dword_ABC5DC; /*0x54d401*/
      }
    }
    if ( !v24 ) /*0x54d405*/
    {
      v29 = *(_DWORD *)(this + 12); /*0x54d407*/
      v59 = *(double *)(v29 + 156); /*0x54d416*/
      v60 = *(_DWORD *)(v29 + 164); /*0x54d424*/
      (*(void (__thiscall **)(int, double *))(*(_DWORD *)v29 + 244))(v29, &v59); /*0x54d42f*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 0; /*0x54d438*/
    }
    if ( (double)SLODWORD(v57) >= (double)SLODWORD(v58) + *(float *)(this + 36) ) /*0x54d451*/
      v56 = Math::RoundToInt((double)v56 + *(float *)(this + 36)); /*0x54d471*/
    else
      v56 += LODWORD(v57) - v23; /*0x54d45f*/
LABEL_49:
    v54 = 1; /*0x54d4bb*/
    goto LABEL_50; /*0x54d4bb*/
  }
  if ( v23 > SLODWORD(v57) )
  {
    if ( (double)SLODWORD(v57) <= (double)SLODWORD(v58) - *(float *)(this + 36) ) /*0x54d48b*/
    {
      v56 = Math::RoundToInt((double)v56 - *(float *)(this + 36)); /*0x54d4a3*/
      v30 = v56; /*0x54d4a7*/
    }
    else
    {
      v30 = LODWORD(v57) - v23 + v16; /*0x54d48f*/
      v56 = v30; /*0x54d491*/
    }
    if ( v30 <= GroundHeight ) /*0x54d4ab*/
      v56 = GroundHeight; /*0x54d4ad*/
    v23 = v23 <= 0 ? 0 : v23;
    goto LABEL_49; /*0x54d4b9*/
  }
LABEL_50:
  v31 = this->JumpjetLocomotion_field_0x40 / 256; /*0x54d4c0*/
  v32 = this->JumpjetLocomotion_field_0x44 / 256; /*0x54d4e9*/
  v33 = (_WORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 440))( /*0x54d4ec*/
                   *(_DWORD *)(this + 12),
                   &v58);
  if ( *v33 != (_WORD)v31 || v33[1] != (_WORD)v32 ) /*0x54d4fb*/
  {
    v34 = LODWORD(v57); /*0x54d4fd*/
    if ( v23 < SLODWORD(v57) / 2 ) /*0x54d50a*/
    {
      *(_DWORD *)(this + 112) = 0; /*0x54d50e*/
      this->JumpjetLocomotion_field_0x74 = 0; /*0x54d511*/
    }
    if ( v23 < v34 / 4 ) /*0x54d525*/
    {
      *(_DWORD *)(this + 112) = 0; /*0x54d527*/
      this->JumpjetLocomotion_field_0x74 = 0; /*0x54d52a*/
    }
  }
  if ( v54 ) /*0x54d537*/
  {
    ObjectClass::SetAnim(*(_DWORD **)(this + 12), v56); /*0x54d541*/
    if ( v52 ) /*0x54d54c*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 0); /*0x54d554*/
  }
  v35 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x54d55d*/
  v36 = *(double *)(this + 112); /*0x54d562*/
  v61 = *v35; /*0x54d567*/
  v62 = v35[1]; /*0x54d56e*/
  v37 = v35[2]; /*0x54d572*/
  LODWORD(v57) = Math::RoundToInt(v36); /*0x54d57a*/
  v58 = (double)(*(__int16 *)ProgressTimer::GetValue((_WORD *)(this + 84), &v56) - 0x3FFF) * -0.00009587672516830327; /*0x54d5a2*/
  v38 = HIDWORD(v58); /*0x54d5aa*/
  v39 = LODWORD(v58); /*0x54d5ae*/
  v57 = (double)SLODWORD(v57); /*0x54d5b4*/
  v59 = (double)v62; /*0x54d5bc*/
  v40 = Math::SinCos(v58); /*0x54d5c0*/
  LODWORD(v58) = Math::RoundToInt(v59 - v40 * v57); /*0x54d5d4*/
  v41 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v38, v39))); /*0x54d5d8*/
  v42 = Math::RoundToInt(v41 * v57 + (double)v61); /*0x54d5e8*/
  v43 = *(_DWORD *)(this + 12); /*0x54d5f1*/
  v63[1] = LODWORD(v58); /*0x54d5f4*/
  v63[0] = v42; /*0x54d5f8*/
  v63[2] = v37; /*0x54d5fc*/
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v43 + 436))(v43, v63); /*0x54d607*/
  v44 = *(_BYTE **)(this + 12); /*0x54d60d*/
  if ( !v44[1709] )
  {
    if ( v44
      && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v44 + 44))(v44) == 15
      && ((v45 = *(_DWORD *)(this + 12)) != 0
        ? (v46 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v45 + 44))(*(_DWORD *)(this + 12)) == 15 ? v45 : 0)
        : (v46 = 0),
          *(_BYTE *)(*(_DWORD *)(v46 + 1728) + 3787)
       && *(_DWORD *)(this + 80) == 2
       && (v47 = *(int **)(this + 12), v47[173])) )
    {
      v50 = ObjectClass::CalcTargetFacing(v47, (int *)&v58, v47[173]); /*0x54d675*/
      FacingClass::Set_SyncLog(v50); /*0x54d679*/
    }
    else
    {
      Value = ProgressTimer::GetValue((_WORD *)(this + 84), &v58); /*0x54d68b*/
      FacingClass::Set_SyncLog(Value); /*0x54d692*/
    }
  }
  if ( v52 ) /*0x54d69d*/
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 1); /*0x54d6a6*/
  result = *(_DWORD *)(this + 12); /*0x54d6b4*/
  *(_BYTE *)(result + 116) = v55; /*0x54d6bd*/
  return result; /*0x54d6ac*/
}
}
} // namespace gamemd
