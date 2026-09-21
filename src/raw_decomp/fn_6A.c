// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x006A01A0  WalkLocomotion::MoveTo  this=IUnknown  sig=csp ====
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
  if ( aP1->field_0 != MEMORY[0xB077F8].field_0 /*0x6a01ce*/
    || aP1->field_4 != MEMORY[0xB077F8].field_4
    || (v5 = aP1->field_8, v5 != MEMORY[0xB077F8].field_8) )
  {
    LOBYTE(v5) = *(_BYTE *)(this + 96); /*0x6a01d4*/
    v6 = aP3; /*0x6a01d7*/
    if ( !(_BYTE)v5 ) /*0x6a01dd*/
    {
      v5 = *(_DWORD *)(this + 88); /*0x6a01e3*/
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
            if ( *(_DWORD *)(this + 92) < v5 ) /*0x6a022c*/
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
                v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 464))(*(_DWORD *)(this + 12)); /*0x6a0263*/
                v14 = *(_DWORD *)(this + 12); /*0x6a0269*/
                v19 = v11; /*0x6a026c*/
                v20 = v12; /*0x6a0270*/
                v21 = v13; /*0x6a0274*/
                (*(void (__thiscall **)(int, int *))(*(_DWORD *)v14 + 244))(v14, &v19); /*0x6a027f*/
                LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, IUnknown *))(**(_DWORD **)(this + 12) + 244))( /*0x6a028f*/
                               *(_DWORD *)(this + 12),
                               aP1);
                return v5; /*0x6a029c*/
              }
              if ( v6 == 1 || v6 == 3 ) /*0x6a02a7*/
              {
                v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 464))(*(_DWORD *)(this + 12)); /*0x6a02ae*/
                v16 = *(_DWORD *)(this + 12); /*0x6a02b4*/
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
                       *(_DWORD *)(this + 12),
                       v3);
    }
    else
    {
      LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, IUnknown *))(**(_DWORD **)(this + 12) + 244))( /*0x6a02de*/
                     *(_DWORD *)(this + 12),
                     v3);
    }
  }
  return v5; /*0x6a0295*/
}


// ==== 0x006A0310  ShipLocomotionClass::SetWaypointTarget  this=ShipLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_6A0310(int a1, int a2, unsigned int a3, __int64 a4)
{
  int v4; // eax
  int v5; // esi
  unsigned int *v6; // edi
  int v7; // ecx
  __int64 v8; // kr00_8
  _DWORD *v9; // eax
  int v11; // [esp-4h] [ebp-20h]
  unsigned int v12; // [esp+10h] [ebp-Ch] BYREF
  __int64 v13; // [esp+14h] [ebp-8h]

  *(_DWORD *)(a1 + 84) = a2; /*0x6a0323*/
  *(_DWORD *)(a1 + 88) = 0; /*0x6a0326*/
  v4 = MEMORY[0xB077F8]; /*0x6a032d*/
  if ( a3 != MEMORY[0xB077F8] || a4 != MEMORY[0xB077FC] ) /*0x6a0340*/
  {
    v5 = a1 - 4; /*0x6a0358*/
    v13 = a4; /*0x6a035b*/
    v6 = (unsigned int *)(a1 - 4 + 64); /*0x6a0363*/
    v12 = a3; /*0x6a036a*/
    if ( *v6 != MEMORY[0xB077F8] || __PAIR64__(*(_DWORD *)(a1 - 4 + 72), *(_DWORD *)(a1 + 64)) != MEMORY[0xB077FC] ) /*0x6a0375*/
    {
      *v6 = MEMORY[0xB077F8]; /*0x6a0386*/
      *(_DWORD *)(a1 + 64) = MEMORY[0xB077FC]; /*0x6a038d*/
      v7 = HIDWORD(MEMORY[0xB077FC]); /*0x6a0390*/
      *(_BYTE *)(v5 + 99) = 0; /*0x6a0396*/
      *(_DWORD *)(a1 - 4 + 72) = v7; /*0x6a039a*/
      v4 = MEMORY[0xB077F8]; /*0x6a039d*/
    }
    if ( __PAIR64__(a4, a3) != __PAIR64__(MEMORY[0xB077FC], v4) /*0x6a03be*/
      || (LOBYTE(v4) = BYTE4(MEMORY[0xB077FC]), HIDWORD(a4) != HIDWORD(MEMORY[0xB077FC])) )
    {
      v8 = v13; /*0x6a03c4*/
      *(_BYTE *)(v5 + 99) = 1; /*0x6a03ca*/
      *v6 = a3; /*0x6a03ce*/
      *(_QWORD *)(a1 + 64) = v8; /*0x6a03d0*/
      v11 = *(_DWORD *)(v5 + 12); /*0x6a03dd*/
      v9 = Coord::To_Cell(&MEMORY[0x87F7E8], &v12); /*0x6a03e4*/
      if ( !CrateClass::ProcessPickup(v9, v11) || *(_BYTE *)(*(_DWORD *)(v5 + 12) + 129) ) /*0x6a03f7*/
      {
        LOBYTE(v4) = *(_BYTE *)(*(_DWORD *)(v5 + 12) + 144); /*0x6a043d*/
        if ( (_BYTE)v4 ) /*0x6a0445*/
        {
          LOBYTE(v4) = MEMORY[0xB077F8]; /*0x6a0447*/
          *v6 = MEMORY[0xB077F8]; /*0x6a044c*/
          *(_QWORD *)(a1 + 64) = MEMORY[0xB077FC]; /*0x6a0454*/
          *(_BYTE *)(v5 + 99) = 0; /*0x6a0460*/
        }
      }
      else
      {
        WalkLocomotion::MoveTo(a1 - 4, &v12, 1); /*0x6a040a*/
        LOBYTE(v4) = a1 + 48; /*0x6a040f*/
        *(_DWORD *)(a1 + 48) = a3; /*0x6a041a*/
        *(_QWORD *)(a1 + 52) = a4; /*0x6a041c*/
        *(_DWORD *)(a1 + 76) = 0; /*0x6a0422*/
        *(_DWORD *)(a1 + 80) = 1072693248; /*0x6a0429*/
      }
    }
  }
  return v4; /*0x6a0430*/
}


// ==== 0x006A04C0  ObjectClass::method_6A04C0  this=ObjectClass  sig=csp ====
char __thiscall sub_6A04C0(int this, IUnknown *aP1)
{
  int v2; // eax
  int *v4; // edi
  TechnoClass *v5; // eax
  IUnknown *v6; // eax
  _DWORD *v7; // eax
  AbstractClass *v9; // [esp-4h] [ebp-10h]

  v2 = MEMORY[0xB077F8].field_0; /*0x6a04c1*/
  v4 = (int *)(this + 64); /*0x6a04cd*/
  if ( *(_DWORD *)(this + 64) != MEMORY[0xB077F8].field_0 /*0x6a04ec*/
    || *(_DWORD *)(this + 68) != MEMORY[0xB077F8].field_4
    || *(_DWORD *)(this + 72) != MEMORY[0xB077F8].field_8 )
  {
    *v4 = MEMORY[0xB077F8].field_0; /*0x6a04f0*/
    *(_DWORD *)(this + 68) = MEMORY[0xB077F8].field_4; /*0x6a04f8*/
    v5 = (TechnoClass *)MEMORY[0xB077F8].field_8; /*0x6a04fb*/
    *(_BYTE *)(this + 99) = 0; /*0x6a0500*/
    *(_DWORD *)(this + 72) = v5; /*0x6a0504*/
    v2 = MEMORY[0xB077F8].field_0; /*0x6a0507*/
  }
  if ( aP1->field_0 != v2 || aP1->field_4 != MEMORY[0xB077F8].field_4 || aP1->field_8 != MEMORY[0xB077F8].field_8 ) /*0x6a052d*/
  {
    *v4 = aP1->field_0; /*0x6a0535*/
    *(_DWORD *)(this + 68) = aP1->field_4; /*0x6a053a*/
    v6 = (IUnknown *)aP1->field_8; /*0x6a053d*/
    *(_BYTE *)(this + 99) = 1; /*0x6a0540*/
    *(_DWORD *)(this + 72) = v6; /*0x6a0544*/
    v9 = *(AbstractClass **)(this + 12); /*0x6a054a*/
    v7 = Coord::To_Cell(&MEMORY[0x87F7E8], aP1); /*0x6a0551*/
    if ( CrateClass::ProcessPickup(v7, v9) && !*(_BYTE *)(*(_DWORD *)(this + 12) + 129) ) /*0x6a0564*/
    {
      WalkLocomotion::MoveTo(this, aP1, 1); /*0x6a0573*/
      return 1; /*0x6a057d*/
    }
    if ( *(_BYTE *)(*(_DWORD *)(this + 12) + 144) ) /*0x6a0583*/
    {
      *v4 = MEMORY[0xB077F8].field_0; /*0x6a0593*/
      *(_DWORD *)(this + 68) = MEMORY[0xB077F8].field_4; /*0x6a059b*/
      *(_DWORD *)(this + 72) = MEMORY[0xB077F8].field_8; /*0x6a05a3*/
      *(_BYTE *)(this + 99) = 0; /*0x6a05a6*/
    }
  }
  return 0; /*0x6a0578*/
}


// ==== 0x006A05C0  ShipLocomotionClass::UpdateFacingDirection_2  this=ShipLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_6A05C0(int a1, int a2)
{
  return FacingClass::Update((char *)(*(_DWORD *)(a1 + 8) + 904), &a2); /*0x6a05df*/
}


// ==== 0x006A05F0  WalkLocomotion::ProcessCollision  this=WalkLocomotion  sig=csp ====
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

  if ( (!*(_BYTE *)(this + 99) || *(_DWORD *)(this + 88) == -1) && *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) != 8
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
      *(_DWORD *)v182 = *(_DWORD *)(this + 52);
      *(_DWORD *)&v182[4] = *(_DWORD *)(this + 56);
      *(_DWORD *)&v182[8] = *(_DWORD *)(this + 60);
      v6 = (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v182) + 80) & 0x100) != 0
         ? MEMORY[0xB077F8].field_34
         : 0;
      v7 = v6 + Cell::GetGroundHeight(v182);
      v8 = (_DWORD *)(*(_DWORD *)(this + 12) + 156);
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
        if ( *(_BYTE *)(*(_DWORD *)(this + 12) + 973) )
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
  *(_DWORD *)&aP3.__pad_0[4] = v30;
  aP3.uniqueId = v29;
  if ( v29 == 8 && *(_DWORD *)(this + 88) == -1 )
  {
    (*(void (__thiscall **)(MouseClass *, _DWORD))(v27->field_0 + 292))(v27, 0);
    v31 = (int *)(this + 64);
    if ( *(_DWORD *)(this + 64) != MEMORY[0xB077F8].field_0
      || *(_DWORD *)(this + 68) != MEMORY[0xB077F8].field_4
      || *(_DWORD *)(this + 72) != MEMORY[0xB077F8].field_8 )
    {
      *v31 = MEMORY[0xB077F8].field_0;
      *(_DWORD *)(this + 68) = MEMORY[0xB077F8].field_4;
      v32 = (TechnoClass *)MEMORY[0xB077F8].field_8;
      *(_BYTE *)(this + 99) = 0;
      *(_DWORD *)(this + 72) = v32;
    }
    v33 = *(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 444))(*(_DWORD *)(this + 12)) + 278);
    if ( v33 >= 0 && v33 < *(int *)&MEMORY[0x89F690].__pad_579C[62236] )
    {
      v34 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62224] + 4 * v33);
      aP4 = *(ObjectClass **)(v34 + 40);
      v35 = SHIWORD(aP4) << 8;
      *v31 = ((__int16)aP4 << 8) + 128;
      v36 = *(MouseClass **)(this + 12);
      *(_DWORD *)(this + 68) = v35 + 128;
      *(_DWORD *)(this + 72) = 0;
      qmemcpy(&v36->__pad_1D4[1036], &v36->__pad_1D4[1040], 0x5Cu);
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1596) = -1;
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1668) = v33;
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1669) = 0;
      v37 = *(_DWORD *)(v34 + 48) & 7;
      aP4 = *(ObjectClass **)(v34 + 36);
      *(_WORD *)&aP3.__pad_0[8] = *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v37) + (_WORD)aP4;
      *(_WORD *)&aP3.__pad_0[10] = HIWORD(aP4) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v37);
      aP4 = *(ObjectClass **)&aP3.__pad_0[8];
      v38 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP4);
      Coords = (ObjectClass *)CellClass::GetCoords(v38, (int *)&aP3.attachedBomb);
      v40 = (_DWORD *)(*(_DWORD *)(this + 12) + 1384);
      *v40 = *(_DWORD *)Coords->__pad_0;
      v40[1] = *(_DWORD *)&Coords->__pad_0[4];
      v40[2] = *(_DWORD *)&Coords->__pad_0[8];
      v41 = *(_DWORD *)(this + 12) + 156;
      aP3.nextArrayIndex = *(_DWORD *)v41;
      aP3.referenceCount = *(_DWORD *)(v41 + 4);
      aP3.NeedsSaveOrLink = *(void **)(v41 + 8);
      GroundHeight = Cell::GetGroundHeight(&aP3.nextArrayIndex);
      aP4 = *(ObjectClass **)(v34 + 40);
      v43 = *(_DWORD *)(v34 + 448);
      aP3.referenceCount = (SHIWORD(aP4) << 8) + 128;
      aP3.nextArrayIndex = ((__int16)aP4 << 8) + 128;
      aP3.NeedsSaveOrLink = 0;
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1392) = GroundHeight
                                                 + (Cell::GetGroundHeight(&aP3.nextArrayIndex) - GroundHeight) / v43;
      *(_BYTE *)(this + 99) = 1;
      *(_DWORD *)(this + 88) = -1;
      return 0;
    }
    *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
    *(_DWORD *)(this + 88) = -1;
    *v31 = MEMORY[0xB077F8].field_0;
    *(_DWORD *)(this + 68) = MEMORY[0xB077F8].field_4;
    *(_DWORD *)(this + 72) = MEMORY[0xB077F8].field_8;
    if ( *v31 != MEMORY[0xB077F8].field_0
      || *(_DWORD *)(this + 68) != MEMORY[0xB077F8].field_4
      || *(_DWORD *)(this + 72) != MEMORY[0xB077F8].field_8 )
    {
      *v31 = MEMORY[0xB077F8].field_0;
      *(_DWORD *)(this + 68) = MEMORY[0xB077F8].field_4;
      *(_DWORD *)(this + 72) = MEMORY[0xB077F8].field_8;
      *(_BYTE *)(this + 99) = 0;
      return 0;
    }
    return 0;
  }
  if ( v30 <= 7 )
    goto LABEL_141;
  v45 = (char *)(12 * *(_DWORD *)(this + 88) + 8333888);
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
    v49 = *(_DWORD *)(this + 92);
    v50 = *(IUnknown **)&aP3.__pad_0[8];
    *(_DWORD *)&aP3.__pad_0[4] -= 7;
    v51 = *(_DWORD *)(*(_DWORD *)&aP3.__pad_0[8] + 12 * v49 + 4);
    aP3.health = *(_DWORD *)(*(_DWORD *)&aP3.__pad_0[8] + 12 * v49);
    aP3.estimatedHealth = v51;
    if ( !aP3.health && !v51 && v49 )
      break;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 192))(*(_DWORD *)(this + 12)) )
    {
      v52 = *(MouseClass **)(this + 12);
      v186[0] = *(_DWORD *)&v52->__pad_74[40];
      v186[1] = *(_DWORD *)&v52->__pad_74[44];
      v186[2] = *(_DWORD *)&v52->__pad_74[48];
      (*(void (__thiscall **)(MouseClass *, _DWORD *))(v52->field_0 + 244))(v52, v186);
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1718) = 0;
      *(_BYTE *)(*(_DWORD *)(this + 12) + 1719) = 0;
    }
    v53 = *(_DWORD *)(this + 92);
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
                                                   *(_DWORD *)(this + 12),
                                                   &varD0);
    }
    aP3.abstractFlags = *(_DWORD *)(*(_DWORD *)&aP3.__pad_0[8] + 12 * *(_DWORD *)(this + 92) + 8);
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
        *(_DWORD *)(this + 12),
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
      *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 1;
LABEL_78:
      if ( (v67->field_140 & 0x100) == 0 )
      {
LABEL_79:
        if ( (v66->field_140 & 0x100) != 0 )
          *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 0;
      }
      if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3220) )
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
                (int)v71 >= MEMORY[0xB077F8].field_34 + Cell::GetGroundHeight(&aP3.parachute)) )
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
        v79 = *(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * v78];
        if ( *(_BYTE *)(this + 100) )
        {
          if ( (*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12))
                         + 3368)
             || TechnoClass::HasVoiceResponse(*(float **)(this + 12), 17))
            && !*(_DWORD *)(v79 + 660) )
          {
            *(_BYTE *)(*(_DWORD *)(this + 12) + 1717) = 1;
            if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12))
                          + 3371) )
              *(_DWORD *)(*(_DWORD *)(this + 12) + 820) = -1130113270;
          }
        }
      }
      goto LABEL_101;
    }
    v80 = v62->__pad_74[0];
    v62->__pad_74[0] = 0;
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 436))(
      *(_DWORD *)(this + 12),
      &aP3.nextArrayIndex);
    *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v80;
LABEL_101:
    v81 = *(MouseClass **)(this + 12);
    if ( !v81->__pad_74[28] )
      return 0;
    v82 = v81->__pad_74[0];
    v81->__pad_74[0] = 0;
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), 0);
    LOBYTE(v83) = 0;
    *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v82;
    HIBYTE(v83) = aP3.abstractFlags;
    LOWORD(aP3.owningHouseIndex) = v83;
    FacingClass::Set_SyncLog((char *)(*(_DWORD *)(this + 12) + 904), &aP3.owningHouseIndex);
    v84 = *(_DWORD *)(this + 92);
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
      v86 = *(_DWORD *)(this + 92);
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
              v94 = *(_DWORD *)&MEMORY[0x89F690].__pad_48[8 * v93] + *(_DWORD *)(this + 64);
              v95 = *(_DWORD *)(this + 68) + *(_DWORD *)&MEMORY[0x89F690].__pad_48[8 * v93 + 4];
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
                         *(_DWORD *)(this + 12),
                         v98,
                         uniqueId,
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
                  v99 = *(IUnknown **)&aP3.__pad_0[12];
                  *(_BYTE *)(this + 96) = 0;
                  *(_DWORD *)(this + 88) = v99;
                  *(_DWORD *)&aP3.bombVisible = v88;
                  v100 = 4 * *v88;
                  aP3.objectTypeFlags = v100 * 4;
                  v178 = 0;
                  *(_DWORD *)(this + 92) = dword_7F2968[v100] - 1;
                  v101 = *v91 == MEMORY[0xB077F8].field_0;
                  *(_DWORD *)&aP3.__pad_0[8] = dword_7F2960[v100];
                  if ( !v101
                    || *(_DWORD *)(this + 68) != MEMORY[0xB077F8].field_4
                    || *(_DWORD *)(this + 72) != MEMORY[0xB077F8].field_8 )
                  {
                    *v91 = MEMORY[0xB077F8].field_0;
                    *(_DWORD *)(this + 68) = MEMORY[0xB077F8].field_4;
                    v102 = (TechnoClass *)MEMORY[0xB077F8].field_8;
                    *(_BYTE *)(this + 99) = 0;
                    *(_DWORD *)(this + 72) = v102;
                  }
                  v103 = *(MouseClass **)(this + 12);
                  *(_BYTE *)(this + 99) = 1;
                  (*(void (__thiscall **)(MouseClass *, int))(v103->field_0 + 396))(v103, 2);
                  v104 = *(MouseClass **)(this + 12);
                  *(_BYTE *)(this + 99) = 0;
                  if ( !v104->__pad_74[28] || v104->__pad_74[13] || v104->__pad_74[25] )
                    return 0;
                  v105 = MEMORY[0xB077F8].field_0;
                  if ( *v91 != MEMORY[0xB077F8].field_0
                    || *(_DWORD *)(this + 68) != MEMORY[0xB077F8].field_4
                    || *(_DWORD *)(this + 72) != MEMORY[0xB077F8].field_8 )
                  {
                    *v91 = MEMORY[0xB077F8].field_0;
                    *(_DWORD *)(this + 68) = MEMORY[0xB077F8].field_4;
                    v106 = (TechnoClass *)MEMORY[0xB077F8].field_8;
                    *(_BYTE *)(this + 99) = 0;
                    *(_DWORD *)(this + 72) = v106;
                    v105 = MEMORY[0xB077F8].field_0;
                  }
                  v107 = *(_DWORD *)v182;
                  v108 = *(_DWORD *)&v182[4];
                  v101 = *(_DWORD *)v182 == v105;
                  v109 = *(_DWORD *)&v182[8];
                  if ( !v101
                    || *(_DWORD *)&v182[4] != MEMORY[0xB077F8].field_4
                    || *(_DWORD *)&v182[8] != MEMORY[0xB077F8].field_8 )
                  {
                    v176 = (AbstractClass *)v104;
                    *(_BYTE *)(this + 99) = 1;
                    *v91 = v107;
                    *(_DWORD *)(this + 68) = v108;
                    *(_DWORD *)(this + 72) = v109;
                    v110 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v182);
                    if ( !CrateClass::ProcessPickup(v110, v176) || *(_BYTE *)(*(_DWORD *)(this + 12) + 129) )
                    {
                      if ( *(_BYTE *)(*(_DWORD *)(this + 12) + 144) )
                      {
                        *v91 = MEMORY[0xB077F8].field_0;
                        *(_DWORD *)(this + 68) = MEMORY[0xB077F8].field_4;
                        *(_DWORD *)(this + 72) = MEMORY[0xB077F8].field_8;
                        *(_BYTE *)(this + 99) = 0;
                      }
                    }
                    else
                    {
                      WalkLocomotion::MoveTo(this, (IUnknown *)v182, 1);
                      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 12) + 1348))(
                        *(_DWORD *)(this + 12),
                        aP3.ambientSoundController[2],
                        aP3.ambientSoundController[3]);
                      qmemcpy(
                        (void *)(*(_DWORD *)(this + 12) + 1504),
                        (const void *)(*(_DWORD *)(this + 12) + 1508),
                        0x5Cu);
                      *(_DWORD *)(*(_DWORD *)(this + 12) + 1596) = -1;
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
                    || (ecx137 = *(_DWORD *)(this + 12) + 156,
                        aP3.attachedBomb = *(void **)ecx137,
                        aP3.ambientSoundController[0] = *(_DWORD *)(ecx137 + 4),
                        v113 = *(TechnoClass **)(ecx137 + 8),
                        v115 = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v182) + 283),
                        LOBYTE(aP4) = 1,
                        (int)abs32((int)v113 / MEMORY[0xB077F8].field_40 - v115) <= 2) )
                  {
                    LOBYTE(aP4) = 0;
                  }
                  v116 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)(this + 64));
                  Cell::ApplyDamage(v116, &MEMORY[0xB077F8], 1, 1, (IUnknown *)aP4);
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
    ++*(_DWORD *)(this + 92);
    if ( cc140 )
      goto LABEL_141;
  }
  v120 = *(MouseClass **)(this + 12);
  v122 = (int *)(this + 64);
  v123 = *(_DWORD *)&v120->__pad_74[40];
  v124 = *(_DWORD *)&v120->__pad_74[44];
  aP3.ambientSoundController[1] = *(_DWORD *)&v120->__pad_74[48];
  *(_DWORD *)aP3.__pad_0 = abs32(*(_DWORD *)(this + 68) - v124) + abs32(*(_DWORD *)(this + 64) - v123);
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
  if ( (unsigned __int16)(v129 / 256) == (unsigned __int16)(*(_DWORD *)(this + 64) / 256)
    && *(_WORD *)&aP3.__pad_0[2] == (unsigned __int16)(*(_DWORD *)(this + 68) / 256) )
  {
    al148 = v127->__pad_74[0];
    v127->__pad_74[0] = 0;
    v179 = al148;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), this + 64);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), 0);
    *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v179;
  }
  else
  {
    (*(void (__thiscall **)(MouseClass *, _DWORD))(v127->field_0 + 292))(v127, 0);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), this + 64);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 460))(*(_DWORD *)(this + 12), 0);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 1);
  }
  if ( *v122 != MEMORY[0xB077F8].field_0
    || *(_DWORD *)(this + 68) != MEMORY[0xB077F8].field_4
    || *(_DWORD *)(this + 72) != MEMORY[0xB077F8].field_8 )
  {
    *v122 = MEMORY[0xB077F8].field_0;
    *(_DWORD *)(this + 68) = MEMORY[0xB077F8].field_4;
    v131 = (TechnoClass *)MEMORY[0xB077F8].field_8;
    *(_BYTE *)(this + 99) = 0;
    *(_DWORD *)(this + 72) = v131;
  }
  v132 = *(MouseClass **)(this + 12);
  *(_DWORD *)(this + 88) = -1;
  *(_DWORD *)(this + 92) = 0;
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
                      *(_DWORD *)(this + 12),
                      &varD0);
    if ( *v138 == (_WORD)v136 && v138[1] == (_WORD)v137 )
    {
      rax156 = *(_DWORD *)((*(int (__stdcall **)(void **, _DWORD))(**(_DWORD **)(this + 12) + 76))(
                             &aP3.attachedBomb,
                             *(_DWORD *)(this + 12))
                         + 8)
             - *(_DWORD *)(this + 60);
      if ( (int)((HIDWORD(rax156) ^ rax156) - HIDWORD(rax156)) < 2 * MEMORY[0xB077F8].field_40 )
      {
        v180 = 1;
        *(_DWORD *)(this + 52) = MEMORY[0xB077F8].field_0;
        *(_DWORD *)(this + 56) = MEMORY[0xB077F8].field_4;
        *(_DWORD *)(this + 60) = MEMORY[0xB077F8].field_8;
        if ( *v122 != MEMORY[0xB077F8].field_0
          || *(_DWORD *)(this + 68) != MEMORY[0xB077F8].field_4
          || *(_DWORD *)(this + 72) != MEMORY[0xB077F8].field_8 )
        {
          *v122 = MEMORY[0xB077F8].field_0;
          *(_DWORD *)(this + 68) = MEMORY[0xB077F8].field_4;
          *(_DWORD *)(this + 72) = MEMORY[0xB077F8].field_8;
          *(_BYTE *)(this + 99) = 0;
        }
        *(_BYTE *)(this + 99) = 0;
      }
    }
  }
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 396))(*(_DWORD *)(this + 12), 2);
  v139 = *(MouseClass **)(this + 12);
  if ( !v139->__pad_74[28] || v139->__pad_74[13] || v139->__pad_74[25] )
    return 1;
  if ( v180 )
  {
    FootClass::ClearPathIndex(v139);
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
  v141 = *(_DWORD *)(this + 92);
  v142 = dword_7F2960[4 * eax144];
  v143 = *(_DWORD *)(v142 + 12 * v141);
  v144 = v142 + 12 * v141;
  v145 = *(_DWORD *)(v144 + 4);
  aP3.health = v143;
  aP3.estimatedHealth = v145;
  if ( !v143 && !v145 && v141 )
    return 0;
  v146 = (int *)(*(_DWORD *)(this + 12) + 156);
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
  v152 = *(_DWORD *)(this + 12) + 156;
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
  v162 = *(_DWORD *)(this + 12) + 156;
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
    (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), v182);
    *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v173;
    return 0;
  }
  else
  {
    (*(void (__thiscall **)(MouseClass *, _DWORD))(v166->field_0 + 292))(v166, 0);
    (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), v182);
    fallRate = aP3.fallRate;
    v171 = (IUnknown *)aP3.owningHouseIndex;
    if ( *(char *)(aP3.owningHouseIndex + 283) != *(char *)(aP3.fallRate + 283) - 4 )
      goto LABEL_189;
    if ( (*(_DWORD *)(aP3.owningHouseIndex + 320) & 0x100) == 0 )
      goto LABEL_190;
    *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 1;
LABEL_189:
    if ( (v171->field_140 & 0x100) == 0 )
    {
LABEL_190:
      if ( (*(_DWORD *)(fallRate + 320) & 0x100) != 0 )
        *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 0;
    }
    (*(void (__thiscall **)(int, int))(**(_DWORD **)(this + 12) + 292))(fallRate, 1);
    return 0;
  }
}


// ==== 0x006A1C80  WalkLocomotion::Update  this=WalkLocomotion  sig=csp ====
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

  v5 = *(_DWORD *)(this + 4);
  v6 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1504);
  v215 = this + 4;
  if ( !(*(unsigned __int8 (__stdcall **)(int))(v5 + 16))(this + 4) && v6 == -1 )
  {
    *(_BYTE *)(this + 97) = 0;
    if ( *(_DWORD *)(this + 64) != MEMORY[0xB077F8]
      || *(_DWORD *)(this + 68) != MEMORY[0xB077FC]
      || *(_DWORD *)(this + 72) != MEMORY[0xB07800] )
    {
      *(_DWORD *)(this + 64) = MEMORY[0xB077F8];
      *(_DWORD *)(this + 68) = MEMORY[0xB077FC];
      *(_DWORD *)(this + 72) = MEMORY[0xB07800];
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
  if ( *(_DWORD *)(this + 52) == MEMORY[0xB077F8]
    && *(_DWORD *)(this + 56) == MEMORY[0xB077FC]
    && *(_DWORD *)(this + 60) == MEMORY[0xB07800] )
  {
    return 0;
  }
  if ( *(_DWORD *)(*(_DWORD *)(this + 12) + 720) && TechnoClass::CountPassengers() )
    return 1;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 468))(*(_DWORD *)(this + 12))
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 472))(*(_DWORD *)(this + 12)) )
  {
    return 0;
  }
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
    if ( *v22 == MEMORY[0xB077F8]
      && *(_DWORD *)(this + 56) == MEMORY[0xB077FC]
      && *(_DWORD *)(this + 60) == MEMORY[0xB07800] )
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
      if ( *(_DWORD *)(this + 64) != MEMORY[0xB077F8]
        || *(_DWORD *)(this + 68) != MEMORY[0xB077FC]
        || *(_DWORD *)(this + 72) != MEMORY[0xB07800] )
      {
        *(_DWORD *)(this + 64) = MEMORY[0xB077F8];
        *(_DWORD *)(this + 68) = MEMORY[0xB077FC];
        *(_DWORD *)(this + 72) = MEMORY[0xB07800];
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
          ClosestObject = Object::FindClosestObjectCell(v41, &v220, v43 > GroundHeight + 2 * MEMORY[0xB07838], 0);
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
                if ( (int)((HIDWORD(v49) ^ v49) - HIDWORD(v49)) < 2 * MEMORY[0xB07838] )
                {
                  v220 = (_DWORD *)*v48;
                  v221 = v48[1];
                  v222 = v48[2];
                  if ( *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v220) + 59) != 10 )
                  {
                    if ( *(_DWORD *)(this + 64) != MEMORY[0xB077F8]
                      || *(_DWORD *)(this + 68) != MEMORY[0xB077FC]
                      || *(_DWORD *)(this + 72) != MEMORY[0xB07800] )
                    {
                      *(_DWORD *)(this + 64) = MEMORY[0xB077F8];
                      *(_DWORD *)(this + 68) = MEMORY[0xB077FC];
                      *(_DWORD *)(this + 72) = MEMORY[0xB07800];
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
                    v52 = v51[2] / MEMORY[0xB07838] - *((char *)v41 + 283),
                    (int)((HIDWORD(v52) ^ v52) - HIDWORD(v52)) <= 2) )
              {
                LOBYTE(a2) = 0;
              }
              Cell::ApplyDamage(v41, (int)&MEMORY[0xB077F8], 1, 1, (char)a2);
            }
          }
        }
      }
      v53 = *(_DWORD **)(this + 12);
      v54 = v53[403];
      if ( v54 <= 0 )
      {
        if ( *(_DWORD *)(this + 64) != MEMORY[0xB077F8]
          || *(_DWORD *)(this + 68) != MEMORY[0xB077FC]
          || *(_DWORD *)(this + 72) != MEMORY[0xB07800] )
        {
          *(_DWORD *)(this + 64) = MEMORY[0xB077F8];
          *(_DWORD *)(this + 68) = MEMORY[0xB077FC];
          *(_DWORD *)(this + 72) = MEMORY[0xB07800];
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
    if ( *(_DWORD *)(this + 64) != MEMORY[0xB077F8]
      || *(_DWORD *)(this + 68) != MEMORY[0xB077FC]
      || *(_DWORD *)(this + 72) != MEMORY[0xB07800] )
    {
      *(_DWORD *)(this + 64) = MEMORY[0xB077F8];
      *(_DWORD *)(this + 68) = MEMORY[0xB077FC];
      *(_DWORD *)(this + 72) = MEMORY[0xB07800];
      *(_BYTE *)(this + 99) = 0;
    }
    *(_DWORD *)(this + 88) = -1;
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
      v70 = Object::FindClosestObjectCell(v66, &v220, v68 > v69 + 2 * MEMORY[0xB07838], 0);
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
            if ( (int)((HIDWORD(v74) ^ v74) - HIDWORD(v74)) < 2 * MEMORY[0xB07838] )
            {
              v220 = (_DWORD *)*v73;
              v221 = v73[1];
              v222 = v73[2];
              if ( *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v220) + 59) != 10 )
              {
                if ( *(_DWORD *)(this + 64) == MEMORY[0xB077F8]
                  && *(_DWORD *)(this + 68) == MEMORY[0xB077FC]
                  && *(_DWORD *)(this + 72) == MEMORY[0xB07800] )
                {
                  goto LABEL_118;
                }
                *(_DWORD *)(this + 64) = MEMORY[0xB077F8];
                *(_DWORD *)(this + 68) = MEMORY[0xB077FC];
                *(_DWORD *)(this + 72) = MEMORY[0xB07800];
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
          Cell::ApplyDamage(v66, (int)&MEMORY[0xB077F8], 1, 1, SLOBYTE(v216));
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
          *(_DWORD *)(*(_DWORD *)(this + 12) + 156) + MEMORY[0x89F6D8][2 * (v6 & 7)],
          *(_DWORD *)(*(_DWORD *)(this + 12) + 160) + MEMORY[0x89F6DC][2 * (v6 & 7)],
          *(_DWORD *)(*(_DWORD *)(this + 12) + 164));
  v223 = *v78;
  v224 = v78[1];
  v79 = v78[2];
  v80 = *(_DWORD *)(this + 12) + 156;
  v225 = v79;
  v220 = *(_DWORD **)v80;
  v221 = *(_DWORD *)(v80 + 4);
  v222 = *(_DWORD *)(v80 + 8);
  v81 = (char *)Coord::To_Cell(&MEMORY[0x87F7E8], &v220);
  v82 = *(_DWORD *)(this + 12);
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
  v86 = *(_DWORD *)(this + 12);
  if ( *(_BYTE *)(v86 + 140) != ((v85[80] >> 8) & 1) )
    *(_BYTE *)(v86 + 1675) = 1;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 668))(*(_DWORD *)(this + 12)) )
    return 1;
  LOWORD(v216) = v223 / 256;
  v87 = *(_DWORD *)(this + 12);
  WORD1(v216) = v224 / 256;
  v219 = LODWORD(v216);
  if ( !Cell::IsPassableAllied(v87, (__int16 *)&v219) )
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
  v88 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
  v89 = *(_DWORD *)(this + 12);
  v90 = v88;
  v220 = v88;
  v214 = 0;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v89 + 292))(v89, 0);
  v91 = (*(int (__thiscall **)(_DWORD, _DWORD *, unsigned int, int, _DWORD, int))(**(_DWORD **)(this + 12) + 428))(
          *(_DWORD *)(this + 12),
          v90,
          v6,
          v83,
          0,
          1);
  v92 = *(_DWORD *)(this + 12);
  LODWORD(v216) = v91;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v92 + 292))(v92, 1);
  if ( SLODWORD(v216) < 7
    && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3220)
    || (LODWORD(v216) == 5 || LODWORD(v216) == 4)
    && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3368)
    && !v90[17] )
  {
    LODWORD(v216) = 0;
  }
  v93 = v90[17];
  v94 = LODWORD(v216);
  if ( v93 != -1 && !LODWORD(v216) && *(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84] + v93) + 557) )
  {
LABEL_148:
    v214 = 1;
    goto LABEL_149;
  }
  if ( v93 != -1 )
  {
    if ( !LODWORD(v216) )
    {
      if ( !*(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84] + v93) + 680)
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
    v94 = LODWORD(v216);
LABEL_153:
    if ( v94 == 3 )
    {
      v96 = *(_DWORD *)(this + 12);
      a4 = v215;
      Cell::IsPassableAllied(v96, (__int16 *)&a4);
      goto LABEL_155;
    }
    if ( v94 == 6 )
    {
      if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3220) )
      {
        v109 = *(_DWORD **)(this + 12);
        if ( (_BYTE)a3 )
        {
          v109[376] = -1;
          v110 = (_DWORD *)(*(_DWORD *)(this + 12) + 1600);
          *v110 = MEMORY[0xA8ED84];
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
        if ( (int)Math::RoundToInt(v116) >= *((_DWORD *)MEMORY[0x8871E0] + 1478)
          || (v117 = (_DWORD *)(*(_DWORD *)(this + 12) + 156),
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
            || (v120 = (_DWORD *)(*(_DWORD *)(this + 12) + 156),
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
          Cell::ApplyDamage(v123, (int)&MEMORY[0xB077F8], 1, 1, v210);
        }
        else
        {
          if ( *(_DWORD *)(this + 64) != MEMORY[0xB077F8]
            || *(_DWORD *)(this + 68) != MEMORY[0xB077FC]
            || *(_DWORD *)(this + 72) != MEMORY[0xB07800] )
          {
            *(_DWORD *)(this + 64) = MEMORY[0xB077F8];
            *(_DWORD *)(this + 68) = MEMORY[0xB077FC];
            *(_DWORD *)(this + 72) = MEMORY[0xB07800];
            *(_BYTE *)(this + 99) = 0;
          }
          v119 = *(_DWORD **)(this + 12);
          if ( v119[358] )
          {
            FootClass::ClearPathIndex(v119);
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
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v119 + 1152))(v119, 0, 1);
          }
        }
      }
LABEL_155:
      v97 = (_DWORD *)(this + 64);
      if ( *(_DWORD *)(this + 64) != MEMORY[0xB077F8]
        || *(_DWORD *)(this + 68) != MEMORY[0xB077FC]
        || *(_DWORD *)(this + 72) != MEMORY[0xB07800] )
      {
        *v97 = MEMORY[0xB077F8];
        *(_DWORD *)(this + 68) = MEMORY[0xB077FC];
        v98 = MEMORY[0xB07800];
        *(_BYTE *)(this + 99) = 0;
        *(_DWORD *)(this + 72) = v98;
      }
      if ( LODWORD(v216) == 2 )
      {
        v99 = *(_DWORD *)(this + 12);
        if ( !*(_BYTE *)(v99 + 1719) )
        {
          *(_BYTE *)(v99 + 1719) = 1;
          v100 = (_DWORD *)(*(_DWORD *)(this + 12) + 1640);
          v101 = *((_DWORD *)MEMORY[0x8871E0] + 1498);
          *v100 = MEMORY[0xA8ED84];
          v100[1] = v230;
          v100[2] = v101;
        }
        v102 = *(_DWORD *)(this + 12);
        v103 = (int)MEMORY[0xA8ED84];
        v104 = *(_DWORD *)(v102 + 1600);
        v105 = *(_DWORD *)(v102 + 1608);
        if ( v104 != -1 )
        {
          if ( (int)MEMORY[0xA8ED84] - v104 >= v105 )
            goto LABEL_166;
          v105 -= (int)MEMORY[0xA8ED84] - v104;
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
              v103 = (int)MEMORY[0xA8ED84] - v106;
              if ( (int)MEMORY[0xA8ED84] - v106 >= v107 )
              {
LABEL_171:
                v108 = 1;
LABEL_199:
                LOWORD(a4) = *(_DWORD *)(this + 52) / 256;
                HIWORD(a4) = *(_DWORD *)(this + 56) / 256;
                v125 = FootClass::MovementStep(v102, v103, a4, 0, (v108 != 0) + 1, v213);
                v126 = *(_DWORD *)(this + 12);
                if ( !v126 )
                {
                  *a2 = 1;
                  return 0;
                }
                if ( v125 || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v126 + 716))(v126, this + 52) )
                {
                  v127 = MEMORY[0xA8ED84];
                  v128 = (wchar_t *)Math::RoundToInt(*((double *)MEMORY[0x8871E0] + 748) * 900.0);
                  v129 = v230;
                  v130 = (wchar_t **)(*(_DWORD *)(this + 12) + 1600);
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
        if ( *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) )
          PlayVocClass(*((_DWORD *)MEMORY[0x8871E0] + 448), 0x2000, 1.0, 0);
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
          if ( !Object::IsAlliedWithObjectHouse(*(_DWORD **)(*(_DWORD *)(this + 12) + 540), Object) )
          {
            v134 = *(int **)(this + 12);
            v220 = 0;
            v221 = 0;
            v135 = *v134;
            v136 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
            v137 = Object::FindObjectCell(v136, &v220, 0);
            (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(v135 + 500))(*(_DWORD *)(this + 12), 1, v137, 0);
          }
        }
        else if ( *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 17) != -1
               && *(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84]
                             + *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215) + 17))
                           + 680) )
        {
          v138 = **(_DWORD **)(this + 12);
          v139 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
          (*(void (__thiscall **)(_DWORD, int, void *, _DWORD))(v138 + 500))(*(_DWORD *)(this + 12), 1, v139, 0);
        }
LABEL_219:
        if ( LODWORD(v216) != 7 )
        {
          *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0;
          *(_DWORD *)(this + 88) = -1;
          return 1;
        }
        if ( (_BYTE)a3 )
        {
          *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
          v110 = (_DWORD *)(*(_DWORD *)(this + 12) + 1600);
          *v110 = MEMORY[0xA8ED84];
          v111 = v230;
          goto LABEL_327;
        }
        if ( *v97 != MEMORY[0xB077F8]
          || *(_DWORD *)(this + 68) != MEMORY[0xB077FC]
          || *(_DWORD *)(this + 72) != MEMORY[0xB07800] )
        {
          *v97 = MEMORY[0xB077F8];
          *(_DWORD *)(this + 68) = MEMORY[0xB077FC];
          *(_DWORD *)(this + 72) = MEMORY[0xB07800];
          goto LABEL_117;
        }
LABEL_118:
        v75 = *(_DWORD **)(this + 12);
        if ( !v75[358] )
          goto LABEL_119;
        goto LABEL_333;
      }
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
      v110 = (_DWORD *)(*(_DWORD *)(this + 12) + 1600);
      *v110 = MEMORY[0xA8ED84];
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
      *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
      return WalkLocomotion::Update(v208, 0, 0);
    }
    if ( *(_DWORD *)(this + 64) == MEMORY[0xB077F8]
      && *(_DWORD *)(this + 68) == MEMORY[0xB077FC]
      && *(_DWORD *)(this + 72) == MEMORY[0xB07800] )
    {
      goto LABEL_118;
    }
    *(_DWORD *)(this + 64) = MEMORY[0xB077F8];
    *(_DWORD *)(this + 68) = MEMORY[0xB077FC];
    *(_DWORD *)(this + 72) = MEMORY[0xB07800];
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
                        + *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12))
                                    + 1660)];
  if ( v216 > 1.0 )
    v216 = 1.0;
  v140 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
  Coords = CellClass::GetCoords(v140, &v229);
  v142 = Cell::GetGroundHeight(Coords);
  v143 = (_DWORD *)(*(_DWORD *)(this + 12) + 156);
  v226 = (_DWORD *)*v143;
  v227 = (wchar_t *)v143[1];
  v228 = v143[2];
  v144 = Cell::GetGroundHeight(&v226);
  v145 = v142 < v144;
  if ( v142 > v144 )
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(*(_DWORD *)(this + 12)) == 1 )
    {
      if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 1660) == 1 )
        v146 = v216 * *((double *)MEMORY[0x8871E0] + 237);
      else
        v146 = v216 * *((double *)MEMORY[0x8871E0] + 239);
LABEL_241:
      v216 = v146;
      goto LABEL_242;
    }
    v145 = v142 < v144;
  }
  if ( v145 && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(*(_DWORD *)(this + 12)) == 1 )
  {
    if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 1660) == 1 )
      v146 = v216 * *((double *)MEMORY[0x8871E0] + 238);
    else
      v146 = v216 * *((double *)MEMORY[0x8871E0] + 240);
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
  if ( *(int *)(this + 88) >= 64 )
  {
    v151 = *(double **)(this + 12);
    if ( v148 != v151[175] )
      (*(void (__thiscall **)(double *, _DWORD, _DWORD))(*(_DWORD *)v151 + 1348))(v151, LODWORD(v216), HIDWORD(v216));
  }
  else
  {
    *(double *)(this + 80) = v148;
  }
  v152 = *(_DWORD *)(this + 12);
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
    v162 = *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3220);
    v163 = *(_DWORD *)(this + 12);
    LOWORD(v216) = *(_DWORD *)(this + 52) / 256;
    WORD1(v216) = *(_DWORD *)(this + 56) / 256;
    result = FootClass::MovementStep(v163, v156, SLODWORD(v216), v162 != 0, 0, v213);
    if ( !result )
    {
      v164 = *(_DWORD *)(this + 12);
      if ( !v164 )
      {
        *a2 = 1;
        return result;
      }
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v164 + 716))(v164, this + 52) )
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1152))(*(_DWORD *)(this + 12), 0, 1);
    }
    v154 = *(_DWORD *)(*(_DWORD *)(this + 12) + 1508);
  }
  if ( v154 == 8 )
    v154 = v6;
  if ( v154 == -1 || (_BYTE)a4 )
    goto LABEL_262;
LABEL_263:
  if ( v154 != -1
    && (NeighbourContent = Cell::GetNeighbourContent(v220, v154)) != 0
    && (v166 = NeighbourContent[17], v166 != -1)
    && ((v167 = *((_DWORD *)MEMORY[0xA83D84] + v166), *(_BYTE *)(v167 + 557))
     || *(_BYTE *)(v167 + 680)
     && *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 1460) == 12)
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
  *(_DWORD *)(this + 88) = v168;
  if ( !byte_7F2A40[12 * v168] )
    *(_DWORD *)(this + 88) = 9 * v6;
  if ( (dword_7F2A48[3 * *(_DWORD *)(this + 88)] & 8) != 0 )
  {
    v211 = *(_DWORD *)(this + 12);
    v169 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v215);
    if ( CrateClass::ProcessPickup(v169, v211) || (v170 = *(_DWORD *)(this + 12), *(_BYTE *)(v170 + 129)) )
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
               *(_DWORD *)(this + 12),
               v176,
               v154,
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
            v110 = (_DWORD *)(*(_DWORD *)(this + 12) + 1600);
            *v110 = MEMORY[0xA8ED84];
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
          if ( (int)Math::RoundToInt(v185) >= *((_DWORD *)MEMORY[0x8871E0] + 1478)
            || (v186 = (_DWORD *)(*(_DWORD *)(this + 12) + 156),
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
            Cell::ApplyDamage(v189, (int)&MEMORY[0xB077F8], 1, 1, a4);
LABEL_291:
            *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
            *(_DWORD *)(this + 88) = -1;
            v223 = MEMORY[0xB077F8];
            v224 = MEMORY[0xB077FC];
            v225 = MEMORY[0xB07800];
            if ( v171 == 5 || v171 == 4 )
              return WalkLocomotion::Update(a2, v177, 1);
            goto LABEL_336;
          }
          if ( *(_DWORD *)(this + 64) != MEMORY[0xB077F8]
            || *(_DWORD *)(this + 68) != MEMORY[0xB077FC]
            || *(_DWORD *)(this + 72) != MEMORY[0xB07800] )
          {
            *(_DWORD *)(this + 64) = MEMORY[0xB077F8];
            *(_DWORD *)(this + 68) = MEMORY[0xB077FC];
            *(_DWORD *)(this + 72) = MEMORY[0xB07800];
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
                  *(_DWORD *)(this + 12),
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
            *(_DWORD *)(*(_DWORD *)(this + 12) + 1504) = -1;
            return WalkLocomotion::Update(v194, 0, 0);
          }
          if ( *(_DWORD *)(this + 64) != MEMORY[0xB077F8]
            || *(_DWORD *)(this + 68) != MEMORY[0xB077FC]
            || *(_DWORD *)(this + 72) != MEMORY[0xB07800] )
          {
            *(_DWORD *)(this + 64) = MEMORY[0xB077F8];
            *(_DWORD *)(this + 68) = MEMORY[0xB077FC];
            *(_DWORD *)(this + 72) = MEMORY[0xB07800];
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
        v110 = (_DWORD *)(*(_DWORD *)(this + 12) + 1600);
        *v110 = MEMORY[0xA8ED84];
        v111 = v230;
        goto LABEL_327;
      }
      if ( *(_DWORD *)(this + 64) != MEMORY[0xB077F8]
        || *(_DWORD *)(this + 68) != MEMORY[0xB077FC]
        || *(_DWORD *)(this + 72) != MEMORY[0xB07800] )
      {
        *(_DWORD *)(this + 64) = MEMORY[0xB077F8];
        *(_DWORD *)(this + 68) = MEMORY[0xB077FC];
        *(_DWORD *)(this + 72) = MEMORY[0xB07800];
        *(_BYTE *)(this + 99) = 0;
      }
      if ( v75[358] )
      {
LABEL_333:
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
LABEL_336:
  v195 = (int *)(this + 64);
  *(_DWORD *)(*(_DWORD *)(this + 12) + 1596) = -1;
  LOWORD(a4) = v223 / 256;
  v196 = *(_DWORD *)(this + 12);
  HIWORD(a4) = v224 / 256;
  *(_DWORD *)(v196 + 1368) = a4;
  *(_BYTE *)(*(_DWORD *)(this + 12) + 1674) = 0;
  *(_DWORD *)(this + 92) = 0;
  v197 = MEMORY[0xB077F8];
  if ( *(_DWORD *)(this + 64) != MEMORY[0xB077F8]
    || *(_DWORD *)(this + 68) != MEMORY[0xB077FC]
    || *(_DWORD *)(this + 72) != MEMORY[0xB07800] )
  {
    *v195 = MEMORY[0xB077F8];
    *(_DWORD *)(this + 68) = MEMORY[0xB077FC];
    v198 = MEMORY[0xB07800];
    *(_BYTE *)(this + 99) = 0;
    *(_DWORD *)(this + 72) = v198;
    v197 = MEMORY[0xB077F8];
  }
  v199 = v223;
  v200 = v225;
  v201 = v223 == v197;
  v202 = v224;
  if ( !v201 || v224 != MEMORY[0xB077FC] || v225 != MEMORY[0xB07800] )
  {
    *(_BYTE *)(this + 99) = 1;
    *v195 = v199;
    *(_DWORD *)(this + 68) = v202;
    *(_DWORD *)(this + 72) = v200;
    v212 = *(_DWORD *)(this + 12);
    v203 = Coord::To_Cell(&MEMORY[0x87F7E8], &v223);
    if ( CrateClass::ProcessPickup(v203, v212) && !*(_BYTE *)(*(_DWORD *)(this + 12) + 129) )
    {
      WalkLocomotion::MoveTo(&v223, 1);
      return 0;
    }
    if ( *(_BYTE *)(*(_DWORD *)(this + 12) + 144) )
    {
      *v195 = MEMORY[0xB077F8];
      *(_DWORD *)(this + 68) = MEMORY[0xB077FC];
      *(_DWORD *)(this + 72) = MEMORY[0xB07800];
      *(_BYTE *)(this + 99) = 0;
    }
  }
  v204 = *(_DWORD *)(this + 12);
  *(_DWORD *)(this + 88) = -1;
  *(_DWORD *)(v204 + 1504) = -1;
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))(*(_DWORD *)(this + 12), 0, 0);
  return 0;
}



// ==== 0x006A3DA0  nullsub_230  this=-  sig=ida-proto ====
void nullsub_230()
{
  ; /*0x6a3da0*/
}


// ==== 0x006A3DB0  WalkLocomotion::TransformCoords  this=IUnknown  sig=csp ====
_DWORD *__thiscall WalkLocomotion::TransformCoords(_DWORD *this, ObjectClass *aP1, IUnknown *aP2, ObjectClass *aP3)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // edx
  int v9; // ecx

  v4 = *(_DWORD *)aP3->__pad_0; /*0x6a3dbd*/
  v5 = dword_7F2A48[3 * this->q160]; /*0x6a3dc1*/
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
  v8 = this->q010; /*0x6a3e12*/
  v9 = this->q044; /*0x6a3e15*/
  *(_DWORD *)aP1->__pad_0 = v6 + v8; /*0x6a3e22*/
  *(_DWORD *)&aP1->__pad_0[4] = v7 + v9; /*0x6a3e25*/
  return aP1->__pad_0; /*0x6a3e20*/
}


// ==== 0x006A3E50  ShipLocomotionClass::SmallStub_6A3E50  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_6A3E50(int a1)
{
  return 2; /*0x6a3e55*/
}


// ==== 0x006A3E60  ShipLocomotionClass::ddtor  this=ShipLocomotionClass  sig=csp ====
int __stdcall ShipLocomotionClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6a3e66*/
    return -2147467261; /*0x6a3e68*/
  *a2 = 736785633; /*0x6a3e76*/
  a2[1] = 299072714; /*0x6a3e7e*/
  a2[2] = 268440766; /*0x6a3e87*/
  a2[3] = 1822515787; /*0x6a3e90*/
  return 0; /*0x6a3e6d*/
}


// ==== 0x006A3EA0  ShipLocomotionClass::StubReturnZero_14  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_6A3EA0(int a1)
{
  return 0; /*0x6a3ea2*/
}


// ==== 0x006A3EB0  ShipLocomotionClass::DispatchCheckState_6A3EB0  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchCheckState_6A3EB0(TunnelLocomotionClass *aP0)
{
  return JumpjetLocomotionClass::CheckState(aP0); /*0x6a3eba*/
}


// ==== 0x006A3F00  ShipLocomotionClass::MoveToChecked_0  this=ShipLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::MoveToChecked_0(ShipLocomotionClass *aP0, int a2)
{
  char result; // al

  result = (_BYTE)aP0 + 60; /*0x6a3f0e*/
  if ( aP0->Dest[2] != *(_DWORD *)&stru_B05488.__pad_14B0[3776] /*0x6a3f2d*/
    || aP0->HeadToCoord[0] != *(_DWORD *)&stru_B05488.__pad_14B0[3780]
    || aP0->HeadToCoord[1] != *(_DWORD *)&stru_B05488.__pad_14B0[3784] )
  {
    return WalkLocomotion::MoveTo((int)&aP0[-1].Piggybackee, (IUnknown *)&aP0->Dest[2], a2); /*0x6a3f38*/
  }
  return result; /*0x6a3f3d*/
}


// ==== 0x006A3F50  ShipLocomotionClass::IsAtDestination  this=ShipLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_6A3F50(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int *v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int *v13; // eax
  int v14; // edx
  int *v15; // eax
  int v16; // ebx
  int v17; // ebp
  _DWORD *v18; // eax
  int v20[2]; // [esp+Ch] [ebp-20h] BYREF
  _DWORD v21[2]; // [esp+14h] [ebp-18h] BYREF
  int v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+20h] [ebp-Ch]
  int v24; // [esp+24h] [ebp-8h]
  unsigned int v25; // [esp+28h] [ebp-4h]

  v4 = a1; /*0x6a3f55*/
  v5 = (int *)(*(int (__stdcall **)(int, _DWORD *))(*(_DWORD *)a1 + 24))(a1, v21); /*0x6a3f62*/
  v6 = *v5; /*0x6a3f65*/
  v7 = v5[1]; /*0x6a3f67*/
  v8 = v5[2]; /*0x6a3f70*/
  v23 = v6; /*0x6a3f75*/
  v24 = v7; /*0x6a3f79*/
  v25 = v8; /*0x6a3f7d*/
  if ( v6 == MEMORY[0xB077F8] && __PAIR64__(v8, v7) == MEMORY[0xB077FC] ) /*0x6a3f89*/
    return 0; /*0x6a3f89*/
  if ( !*(_BYTE *)(v4 + 92) ) /*0x6a3f97*/
  {
    v9 = *(_DWORD *)(v4 + 84); /*0x6a3fa2*/
    if ( v9 != -1 ) /*0x6a3fa8*/
    {
      v10 = byte_7F2A40[12 * v9]; /*0x6a3fb1*/
      if ( v10 ) /*0x6a3fbb*/
      {
        v11 = 4 * v10; /*0x6a3fc1*/
        v12 = dword_7F296C[v11]; /*0x6a3fc4*/
        if ( v12 > -1 ) /*0x6a3fd3*/
        {
          v13 = (int *)(dword_7F2960[v11] + 12 * v12); /*0x6a3fdc*/
          a1 = v13[2]; /*0x6a3fe2*/
          if ( *(_DWORD *)(v4 + 88) < v12 ) /*0x6a3feb*/
          {
            v14 = v13[1]; /*0x6a3ff3*/
            v20[0] = *v13; /*0x6a3ff6*/
            v20[1] = v14; /*0x6a3fff*/
            v15 = WalkLocomotion::TransformCoords((_DWORD *)(v4 - 4), v21, v20, &a1); /*0x6a4011*/
            v16 = *v15; /*0x6a4016*/
            v17 = v15[1]; /*0x6a4018*/
            v18 = (_DWORD *)(*(_DWORD *)(v4 + 8) + 156); /*0x6a401e*/
            v21[0] = *v18; /*0x6a4025*/
            v21[1] = v18[1]; /*0x6a402c*/
            v22 = v18[2]; /*0x6a4033*/
            if ( (unsigned __int16)(v16 / 256) == (unsigned __int16)(a2 / 256) /*0x6a409b*/
              && (unsigned __int16)(v17 / 256) == (unsigned __int16)(a3 / 256)
              && (int)abs32(v22 - a4) <= MEMORY[0xB07838] )
            {
              return 1; /*0x6a40a5*/
            }
          }
        }
      }
    }
  }
  return (unsigned __int16)(v23 / 256) == (unsigned __int16)(a2 / 256) /*0x6a411e*/
      && (unsigned __int16)(v24 / 256) == (unsigned __int16)(a3 / 256)
      && (int)abs32(v25 - a4) <= MEMORY[0xB07838];
}


// ==== 0x006A4130  ShipLocomotionClass::StubReturnZero_15  this=ShipLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_6A4130(unsigned int a1)
{
  unsigned int v1; // edi
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  __int16 v5; // bx
  int v6; // edx
  __int16 v7; // dx
  char v8; // al

  v1 = a1; /*0x6a4132*/
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 1504); /*0x6a4139*/
  if ( v2 < -1 || v2 > 8 ) /*0x6a414b*/
    return 0; /*0x6a414b*/
  v3 = 12 * *(_DWORD *)(a1 + 84) + 8333888; /*0x6a415c*/
  v4 = *(_BYTE *)(a1 + 92) ? (char)algn_7F2A41[12 * *(_DWORD *)(a1 + 84)] : byte_7F2A40[12 * *(_DWORD *)(a1 + 84)];
  if ( v2 == 8 ) /*0x6a4173*/
    return 0; /*0x6a4173*/
  if ( v2 == -1 ) /*0x6a417c*/
    return 0; /*0x6a417c*/
  LOBYTE(v5) = 0; /*0x6a4183*/
  HIBYTE(v5) = algn_7F2A41[12 * *(_DWORD *)(a1 + 84) + 3]; /*0x6a4185*/
  LOWORD(a1) = v5; /*0x6a4188*/
  if ( ((((a1 >> 12) + 1) >> 1) & 7) == v2 ) /*0x6a41a8*/
    return 0; /*0x6a41a8*/
  v6 = *(_DWORD *)(v1 + 88); /*0x6a41aa*/
  if ( dword_7F2964[4 * v4] == v6 /*0x6a41f1*/
    && v6
    && (LOBYTE(v7) = 0,
        HIBYTE(v7) = *(_BYTE *)(v3 + 4),
        LOWORD(a1) = v7,
        (v8 = byte_7F2A40[96 * ((((a1 >> 12) + 1) >> 1) & 7) + 12 * v2]) != 0)
    && dword_7F2968[4 * v8] )
  {
    return 1; /*0x6a41fc*/
  }
  else
  {
    return 0; /*0x6a4203*/
  }
}


// ==== 0x006A4210  ShipLocomotionClass::SetByteField_1  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_6A4210(int a1)
{
  *(_BYTE *)(a1 + 97) = 0; /*0x6a4214*/
  return a1; /*0x6a4218*/
}


// ==== 0x006A4220  ShipLocomotionClass::SetByteField_2  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_6A4220(int a1)
{
  *(_BYTE *)(a1 + 97) = 1; /*0x6a4224*/
  return a1; /*0x6a4228*/
}


// ==== 0x006A4230  ShipLocomotionClass::SmallStub_6A4230  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_6A4230(int a1)
{
  return *(_DWORD *)(a1 + 84); /*0x6a4237*/
}


// ==== 0x006A4240  ShipLocomotionClass::SmallStub_6A4240  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_6A4240(int a1)
{
  return *(_DWORD *)(a1 + 88); /*0x6a4247*/
}


// ==== 0x006A4250  ShipLocomotionClass::SmallStub_6A4250  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_6A4250(int a1)
{
  return *(_DWORD *)(a1 + 72); /*0x6a4257*/
}


// ==== 0x006A4260  ShipLocomotionClass::AddRef  this=ShipLocomotionClass  sig=csp ====
LONG __stdcall ShipLocomotionClass::_vt01(int a1)
{
  return COM::AddRef(a1); /*0x6a426a*/
}


// ==== 0x006A4270  ShipLocomotionClass::Release  this=ShipLocomotionClass  sig=csp ====
LONG __stdcall ShipLocomotionClass::_vt02(volatile LONG *a1)
{
  return COM::ReleaseRef(a1); /*0x6a427a*/
}


// ==== 0x006A4280  JumpjetLocomotionClass::GetLinkedLocomotorPointer_0  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_6A4280(int a1)
{
  return *(_DWORD *)(a1 + 80) != 0; /*0x6a428e*/
}


// ==== 0x006A42A0  ShipLocomotionClass::StubReturn112  this=ShipLocomotionClass  sig=csp ====
int ShipLocomotionClass::_vt09()
{
  return 112; /*0x6a42a5*/
}


// ==== 0x006A42B0  ShipLocomotionClass::ProcessMove  this=ShipLocomotionClass  sig=csp ====
ShipLocomotionClass *__thiscall ShipLocomotionClass::ProcessMove(ILocomotion **Block, char a2)
{
  ILocomotion *v3; // eax

  *Block = (ILocomotion *)&ShipLocomotionClass::`vftable'; /*0x6a42b3*/
  *(Block + 1) = (ILocomotion *)&vt_ShipLocomotionClass; /*0x6a42b9*/
  *(Block + 6) = (ILocomotion *)&off_7F2D68; /*0x6a42c0*/
  v3 = *(Block + 26); /*0x6a42c7*/
  if ( v3 ) /*0x6a42cc*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)v3 + 8))(v3); /*0x6a42d1*/
  LocomotionClass::Construct(Block); /*0x6a42d6*/
  if ( (a2 & 1) != 0 ) /*0x6a42e0*/
    __3_YAXPAX_Z(Block); /*0x6a42e3*/
  return (ShipLocomotionClass *)Block; /*0x6a42ed*/
}


// ==== 0x006A4300  JumpjetLocomotionClass::SmallStub_6A4300  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_6A4300(int a1, const void *a2, int *a3)
{
  return ShipLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}


// ==== 0x006A4310  JumpjetLocomotionClass::SmallStub_6A4310  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_6A4310(int a1)
{
  return ShipLocomotionClass::AddRef(a1 - 4);
}


// ==== 0x006A4320  JumpjetLocomotionClass::SmallStub_6A4320  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_6A4320(int a1)
{
  return ShipLocomotionClass::Release((volatile LONG *)(a1 - 4));
}


// ==== 0x006A4330    this=-  sig=? ====
int __stdcall JumpjetLocomotionClass::loc_6A4330(int a1, const void *a2, int *a3)
{
  return ShipLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}


// ==== 0x006A4340    this=-  sig=? ====
LONG __stdcall JumpjetLocomotionClass::loc_6A4340(int a1)
{
  return ShipLocomotionClass::AddRef(a1 - 24);
}


// ==== 0x006A4350    this=-  sig=? ====
LONG __stdcall JumpjetLocomotionClass::loc_6A4350(int a1)
{
  return ShipLocomotionClass::Release((volatile LONG *)(a1 - 24));
}


// ==== 0x006A4360  sub_6A4360  this=-  sig=ida-proto ====
void sub_6A4360()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6a436c*/
  MEMORY[0xB07850] = Math::Sqrt(v0 + v0); /*0x6a437e*/
}


// ==== 0x006A4390  sub_6A4390  this=-  sig=ida-proto ====
void sub_6A4390()
{
  MEMORY[0xB078A0] = MEMORY[0xB07850] / 60.0; /*0x6a439c*/
}


// ==== 0x006A43B0  sub_6A43B0  this=-  sig=ida-proto ====
void sub_6A43B0()
{
  MEMORY[0xB07888] = 1.0 / MEMORY[0xB078A0]; /*0x6a43bc*/
}


// ==== 0x006A43D0  sub_6A43D0  this=-  sig=ida-proto ====
void sub_6A43D0()
{
  MEMORY[0xB07880] = 0.0174532925199433 * 45.0; /*0x6a43dc*/
}


// ==== 0x006A43F0  sub_6A43F0  this=-  sig=ida-proto ====
void sub_6A43F0()
{
  MEMORY[0xB07858] = 0.0174532925199433 * 60.0; /*0x6a43fc*/
}


// ==== 0x006A4410  sub_6A4410  this=-  sig=ida-proto ====
void sub_6A4410()
{
  MEMORY[0xB07840] = 0.0174532925199433 * 90.0; /*0x6a441c*/
}


// ==== 0x006A4430  sub_6A4430  this=-  sig=ida-proto ====
__int64 sub_6A4430()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB07840] - MEMORY[0xB07858]); /*0x6a4442*/
  result = Math::RoundToInt(v0 * MEMORY[0xB07850] * 0.5); /*0x6a4456*/
  MEMORY[0xB078A8] = result; /*0x6a445b*/
  return result; /*0x6a4460*/
}


// ==== 0x006A4470  sub_6A4470  this=-  sig=ida-proto ====
void sub_6A4470()
{
  MEMORY[0xB07860] = Math::ArcTan((double)MEMORY[0xB078A8] * 0.00390625); /*0x6a4487*/
}


// ==== 0x006A44A0  sub_6A44A0  this=-  sig=ida-proto ====
void sub_6A44A0()
{
  MEMORY[0xB07878] = Math::ArcTan((double)(2 * MEMORY[0xB078A8]) / MEMORY[0xB07850]); /*0x6a44c2*/
}


// ==== 0x006A44D0  sub_6A44D0  this=-  sig=ida-proto ====
__int64 sub_6A44D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB078A8]) + 0.5); /*0x6a44eb*/
  MEMORY[0xB0789C] = result; /*0x6a44f0*/
  return result; /*0x6a44f6*/
}


// ==== 0x006A4500  sub_6A4500  this=-  sig=ida-proto ====
int sub_6A4500()
{
  MEMORY[0xB07848] = 0; /*0x6a4502*/
  MEMORY[0xB0784A] = 0; /*0x6a4508*/
  return 0; /*0x6a450e*/
}


// ==== 0x006A4510  sub_6A4510  this=-  sig=ida-proto ====
int sub_6A4510()
{
  MEMORY[0xB07868] = 0; /*0x6a4512*/
  MEMORY[0xB0786C] = 0; /*0x6a4517*/
  MEMORY[0xB07870] = 0; /*0x6a451c*/
  return 0; /*0x6a4521*/
}


// ==== 0x006A4530  sub_6A4530  this=-  sig=ida-proto ====
int sub_6A4530()
{
  MEMORY[0xB07898] = 0; /*0x6a4535*/
  MEMORY[0xB07890] = 128; /*0x6a453f*/
  MEMORY[0xB07894] = 128; /*0x6a4544*/
  return 128; /*0x6a4549*/
}


// ==== 0x006A4550  SideClass::Construct  this=SideClass  sig=csp ====
_DWORD *__thiscall SideClass::Construct(_DWORD *this, CCINIClass *aP1)
{
  int v3; // eax

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x6a4559*/
  this->houseTypesCount = 0; /*0x6a4563*/
  this->__pad_0A0 = 0; /*0x6a4569*/
  this->q0A4 = 1; /*0x6a456f*/
  *((_BYTE *)this + 165) = 0; /*0x6a4576*/
  this->q02B = 10; /*0x6a457c*/
  this->q0A8 = 0; /*0x6a4586*/
  this->houseTypes = &vt_TypeList_int; /*0x6a458c*/
  *this = &SideClass::`vftable'; /*0x6a4597*/
  this->vtable2 = &SideClass::`vftable'; /*0x6a459d*/
  this->vtable3 = &SideClass::`vftable'; /*0x6a45a3*/
  this->vtable4 = &vt_SideClass; /*0x6a45aa*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x6a45b1*/
  if ( *(int *)stru_89E138.__pad_15FF8 < *(int *)&stru_89E138.__pad_579C[67668] /*0x6a45ea*/
    || (BYTE1(stru_89E138.field_15FF4) || !*(_DWORD *)&stru_89E138.__pad_579C[67668])
    && *(int *)&stru_89E138.__pad_15FF8[4] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_89E138.__pad_579C[67660] + 8))(
         &stru_89E138.__pad_579C[67660],
         *(_DWORD *)&stru_89E138.__pad_579C[67668] + *(_DWORD *)&stru_89E138.__pad_15FF8[4],
         0) )
  {
    v3 = (*(_DWORD *)stru_89E138.__pad_15FF8)++; /*0x6a45f7*/
    *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[67664] + 4 * v3) = this; /*0x6a4606*/
  }
  return this; /*0x6a460b*/
}


// ==== 0x006A46D0  HouseTypeClass::Find  this=IUnknown  sig=csp ====
int __thiscall HouseTypeClass_Find(void *this)
{
  int v1; // esi

  v1 = 0; /*0x6a46d6*/
  if ( MEMORY[0x8B4130] <= 0 ) /*0x6a46dd*/
    return -1; /*0x6a4702*/
  while ( _strcmpi((const void *)(*((_DWORD *)MEMORY[0x8B4124] + v1) + 36), this) ) /*0x6a46f6*/
  {
    if ( ++v1 >= MEMORY[0x8B4130] ) /*0x6a4700*/
      return -1; /*0x6a4700*/
  }
  return v1; /*0x6a4702*/
}


// ==== 0x006A4710  SideClass::GetCountry  this=SideClass  sig=csp ====
int __thiscall SideClass::_vt13(int this, int *a2)
{
  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6a4719*/
  return Power::TimerProcess(*(_DWORD *)(this + 168)); /*0x6a472c*/
}


// ==== 0x006A4740  SideClass::ddtor  this=SideClass  sig=csp ====
int __stdcall SideClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6a4746*/
    return -2147467261; /*0x6a4748*/
  *a2 = -985803918; /*0x6a4756*/
  a2[1] = 298980638; /*0x6a475e*/
  a2[2] = 1610642817; /*0x6a4767*/
  a2[3] = -1252326136; /*0x6a4770*/
  return 0; /*0x6a474d*/
}


// ==== 0x006A4780  SideClass::SaveLoad_Prefix  this=SideClass  sig=csp ====
int __stdcall SideClass::SaveLoad_Prefix(_DWORD *a0, AbstractTypeClass *aP1)
{
  AbstractTypeClass *v2; // esi
  AbstractClass *v3; // edi
  int result; // eax
  AbstractTypeClass *v5; // esi
  int i; // ebp
  int v7; // eax
  int abstractFlags; // ecx
  int uniqueId; // eax
  int v10; // edx

  v2 = (AbstractTypeClass *)a0; /*0x6a4782*/
  v3 = (AbstractClass *)aP1; /*0x6a4787*/
  result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)a0, (AbstractClass *)aP1); /*0x6a478d*/
  if ( result >= 0 ) /*0x6a4796*/
  {
    if ( v2 ) /*0x6a47a4*/
    {
      AbstractTypeClass::Init((int)v2, (AbstractTypeClass *)&aP1); /*0x6a47ad*/
      *(_DWORD *)&v2[1].__pad_0[4] = 0; /*0x6a47b2*/
      *(_DWORD *)&v2[1].__pad_0[8] = 0; /*0x6a47b8*/
      v2[1].__pad_0[12] = 1; /*0x6a47be*/
      v2[1].__pad_0[13] = 0; /*0x6a47c5*/
      v2[1].abstractFlags = 10; /*0x6a47cb*/
      v2[1].uniqueId = 0; /*0x6a47d1*/
      *(_DWORD *)v2[1].__pad_0 = &vt_TypeList_int; /*0x6a47d7*/
      *(_DWORD *)v2->__pad_0 = &SideClass::`vftable'; /*0x6a47e1*/
      *(_DWORD *)&v2->__pad_0[4] = &SideClass::`vftable'; /*0x6a47e7*/
      *(_DWORD *)&v2->__pad_0[8] = &SideClass::`vftable'; /*0x6a47ee*/
      *(_DWORD *)&v2->__pad_0[12] = &vt_SideClass; /*0x6a47f5*/
    }
    v5 = v2 + 1; /*0x6a47fc*/
    if ( v5 ) /*0x6a4804*/
    {
      *(_DWORD *)&v5->__pad_0[4] = 0; /*0x6a4806*/
      *(_DWORD *)&v5->__pad_0[8] = 0; /*0x6a4809*/
      v5->__pad_0[12] = 1; /*0x6a480c*/
      v5->__pad_0[13] = 0; /*0x6a4810*/
      v5->abstractFlags = 10; /*0x6a4813*/
      v5->uniqueId = 0; /*0x6a4816*/
      *(_DWORD *)v5->__pad_0 = &vt_TypeList_int; /*0x6a4819*/
    }
    (*(void (__stdcall **)(AbstractClass *, AbstractTypeClass **, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 12))( /*0x6a482a*/
      v3,
      &aP1,
      4,
      0);
    for ( i = 0; i < (int)aP1; ++i ) /*0x6a4833*/
    {
      (*(void (__stdcall **)(AbstractClass *, _DWORD **, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 12))(v3, &a0, 4, 0); /*0x6a4840*/
      v7 = *(_DWORD *)&v5->__pad_0[8]; /*0x6a4843*/
      if ( v5->uniqueId >= v7 ) /*0x6a484b*/
      {
        if ( !v5->__pad_0[13] && v7 ) /*0x6a4854*/
          continue; /*0x6a4854*/
        abstractFlags = v5->abstractFlags; /*0x6a4856*/
        if ( abstractFlags <= 0 /*0x6a4865*/
          || !(*(unsigned __int8 (__thiscall **)(AbstractTypeClass *, int, _DWORD))(*(_DWORD *)v5->__pad_0 + 8))(
                v5,
                v7 + abstractFlags,
                0) )
        {
          continue; /*0x6a4865*/
        }
      }
      uniqueId = v5->uniqueId; /*0x6a486c*/
      v10 = *(_DWORD *)&v5->__pad_0[4]; /*0x6a486f*/
      v5->uniqueId = uniqueId + 1; /*0x6a4875*/
      *(_DWORD *)(v10 + 4 * uniqueId) = a0; /*0x6a487c*/
    }
    return 0; /*0x6a4888*/
  }
  return result; /*0x6a488b*/
}


// ==== 0x006A48A0  SideClass::SaveLoad_Prefix_0  this=SideClass  sig=csp ====
int __stdcall SideClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax
  int v4; // edx
  int i; // esi

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6a48b1*/
  if ( result >= 0 ) /*0x6a48b8*/
  {
    v4 = *a1; /*0x6a48c0*/
    aP2 = *(_DWORD *)&aP0->ImageAllocated; /*0x6a48cd*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a1, &aP2, 4, 0); /*0x6a48d1*/
    for ( i = 0; i < aP2; ++i ) /*0x6a48dc*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, aP0->Armor[0] + 4 * i, 4, 0); /*0x6a48ef*/
    return 0; /*0x6a48f9*/
  }
  return result; /*0x6a48fc*/
}


// ==== 0x006A4910  SideClass::StubReturn180  this=SideClass  sig=csp ====
int SideClass::_vt12()
{
  return 180; /*0x6a4915*/
}


// ==== 0x006A4920  SideClass::StubReturn28  this=SideClass  sig=csp ====
int SideClass::_vt11()
{
  return 28; /*0x6a4925*/
}


// ==== 0x006A4930  SideClass::Init  this=SideClass  sig=csp ====
SideClass *__thiscall SideClass::Init(void **Block, char a2)
{
  int v3; // eax
  void *v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &SideClass::`vftable'; /*0x6a4936*/
  *(Block + 1) = &SideClass::`vftable'; /*0x6a493c*/
  *(Block + 2) = &SideClass::`vftable'; /*0x6a4943*/
  *(Block + 3) = &vt_SideClass; /*0x6a494a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x6a4951*/
  v6 = Block; /*0x6a4966*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0x8B4120] + 16))(&MEMORY[0x8B4120], &v6); /*0x6a496a*/
  if ( v3 != -1 && v3 < MEMORY[0x8B4130] && v3 < --MEMORY[0x8B4130] ) /*0x6a4985*/
  {
    do /*0x6a499d*/
    {
      ++v3; /*0x6a498d*/
      *((_DWORD *)MEMORY[0x8B4124] + v3 - 1) = *((_DWORD *)MEMORY[0x8B4124] + v3); /*0x6a4991*/
    }
    while ( v3 < MEMORY[0x8B4130] ); /*0x6a499d*/
  }
  v4 = *(Block + 39); /*0x6a499f*/
  *(Block + 38) = &vt_VectorClass_int; /*0x6a49a5*/
  if ( v4 && *((_BYTE *)Block + 165) ) /*0x6a49b3*/
  {
    __3_YAXPAX_Z(v4); /*0x6a49be*/
    *(Block + 39) = 0; /*0x6a49c6*/
  }
  *((_BYTE *)Block + 165) = 0; /*0x6a49d2*/
  *(Block + 40) = 0; /*0x6a49d9*/
  AbstractTypeClass::Dtor(Block); /*0x6a49e3*/
  if ( (a2 & 1) != 0 ) /*0x6a49ed*/
    __3_YAXPAX_Z(Block); /*0x6a49f0*/
  return (SideClass *)Block; /*0x6a49fa*/
}


// ==== 0x006A4A00  sub_6A4A00  this=-  sig=ida-proto ====
int sub_6A4A00()
{
  MEMORY[0xB07DC8] = 0; /*0x6a4a02*/
  MEMORY[0xB07DCC] = 0; /*0x6a4a07*/
  MEMORY[0xB07DD0] = 0; /*0x6a4a0c*/
  MEMORY[0xB07DD4] = 0; /*0x6a4a11*/
  return 0; /*0x6a4a16*/
}


// ==== 0x006A4A20  sub_6A4A20  this=-  sig=ida-proto ====
void sub_6A4A20()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6a4a2c*/
  MEMORY[0xB07DE0] = Math::Sqrt(v0 + v0); /*0x6a4a3e*/
}


// ==== 0x006A4A50  sub_6A4A50  this=-  sig=ida-proto ====
void sub_6A4A50()
{
  MEMORY[0xB0B398] = MEMORY[0xB07DE0] / 60.0; /*0x6a4a5c*/
}


// ==== 0x006A4A70  sub_6A4A70  this=-  sig=ida-proto ====
void sub_6A4A70()
{
  MEMORY[0xB0B320] = 1.0 / MEMORY[0xB0B398]; /*0x6a4a7c*/
}


// ==== 0x006A4A90  sub_6A4A90  this=-  sig=ida-proto ====
void sub_6A4A90()
{
  MEMORY[0xB0B318] = 0.0174532925199433 * 45.0; /*0x6a4a9c*/
}


// ==== 0x006A4AB0  sub_6A4AB0  this=-  sig=ida-proto ====
void sub_6A4AB0()
{
  MEMORY[0xB07DE8] = 0.0174532925199433 * 60.0; /*0x6a4abc*/
}


// ==== 0x006A4AD0  sub_6A4AD0  this=-  sig=ida-proto ====
void sub_6A4AD0()
{
  MEMORY[0xB07BB8] = 0.0174532925199433 * 90.0; /*0x6a4adc*/
}


// ==== 0x006A4AF0  sub_6A4AF0  this=-  sig=ida-proto ====
__int64 sub_6A4AF0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB07BB8] - MEMORY[0xB07DE8]); /*0x6a4b02*/
  result = Math::RoundToInt(v0 * MEMORY[0xB07DE0] * 0.5); /*0x6a4b16*/
  MEMORY[0xB0B400] = result; /*0x6a4b1b*/
  return result; /*0x6a4b20*/
}


// ==== 0x006A4B30  sub_6A4B30  this=-  sig=ida-proto ====
void sub_6A4B30()
{
  MEMORY[0xB07DF0] = Math::ArcTan((double)MEMORY[0xB0B400] * 0.00390625); /*0x6a4b47*/
}


// ==== 0x006A4B60  sub_6A4B60  this=-  sig=ida-proto ====
void sub_6A4B60()
{
  MEMORY[0xB0B310] = Math::ArcTan((double)(2 * MEMORY[0xB0B400]) / MEMORY[0xB07DE0]); /*0x6a4b82*/
}


// ==== 0x006A4B90  sub_6A4B90  this=-  sig=ida-proto ====
__int64 sub_6A4B90()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0B400]) + 0.5); /*0x6a4bab*/
  MEMORY[0xB0B394] = result; /*0x6a4bb0*/
  return result; /*0x6a4bb6*/
}


// ==== 0x006A4BC0  sub_6A4BC0  this=-  sig=ida-proto ====
int sub_6A4BC0()
{
  MEMORY[0xB07DD8] = 0; /*0x6a4bc2*/
  MEMORY[0xB07DDA] = 0; /*0x6a4bc8*/
  return 0; /*0x6a4bce*/
}


// ==== 0x006A4BD0  sub_6A4BD0  this=-  sig=ida-proto ====
int sub_6A4BD0()
{
  MEMORY[0xB0B300] = 0; /*0x6a4bd2*/
  MEMORY[0xB0B304] = 0; /*0x6a4bd7*/
  MEMORY[0xB0B308] = 0; /*0x6a4bdc*/
  return 0; /*0x6a4be1*/
}


// ==== 0x006A4BF0  sub_6A4BF0  this=-  sig=ida-proto ====
int sub_6A4BF0()
{
  MEMORY[0xB0B390] = 0; /*0x6a4bf5*/
  MEMORY[0xB0B388] = 128; /*0x6a4bff*/
  MEMORY[0xB0B38C] = 128; /*0x6a4c04*/
  return 128; /*0x6a4c09*/
}


// ==== 0x006A4C10  sub_6A4C10  this=-  sig=ida-proto ====
int sub_6A4C10()
{
  GadgetClass::Construct(&MEMORY[0xB07E58], 0, 0, 1, 1, 8, 0); /*0x6a4c21*/
  MEMORY[0xB07E58] = (int)&vt_SidebarClass_SBGadgetClass; /*0x6a4c2b*/
  return atexit(sub_6A4C40); /*0x6a4c3b*/
}


// ==== 0x006A4C40  sub_6A4C40  this=-  sig=ida-proto ====
void __cdecl sub_6A4C40()
{
  if ( (MEMORY[0xB07BB0] & 1) == 0 ) /*0x6a4c4a*/
  {
    MEMORY[0xB07BB0] |= 1u; /*0x6a4c4e*/
    GadgetClass::Dtor(&MEMORY[0xB07E58]); /*0x6a4c59*/
  }
}


// ==== 0x006A4C60  sub_6A4C60  this=-  sig=ida-proto ====
int sub_6A4C60()
{
  ShapeButtonClass::Init(MEMORY[0xB07DF8]); /*0x6a4c65*/
  return atexit(sub_6A4C80); /*0x6a4c75*/
}


// ==== 0x006A4C80  sub_6A4C80  this=-  sig=ida-proto ====
void __cdecl sub_6A4C80()
{
  if ( (MEMORY[0xB07BB1] & 1) == 0 ) /*0x6a4c8a*/
  {
    MEMORY[0xB07BB1] |= 1u; /*0x6a4c8e*/
    ShapeButtonClass::Destructor((int)MEMORY[0xB07DF8]); /*0x6a4c99*/
  }
}


// ==== 0x006A4CA0  sub_6A4CA0  this=-  sig=ida-proto ====
int sub_6A4CA0()
{
  ShapeButtonClass::Init(MEMORY[0xB0B3A0]); /*0x6a4ca5*/
  return atexit(sub_6A4CC0); /*0x6a4cb5*/
}


// ==== 0x006A4CC0  sub_6A4CC0  this=-  sig=ida-proto ====
void __cdecl sub_6A4CC0()
{
  if ( (MEMORY[0xB07BB1] & 2) == 0 ) /*0x6a4cca*/
  {
    MEMORY[0xB07BB1] |= 2u; /*0x6a4cce*/
    ShapeButtonClass::Destructor((int)MEMORY[0xB0B3A0]); /*0x6a4cd9*/
  }
}


// ==== 0x006A4CE0  sub_6A4CE0  this=-  sig=ida-proto ====
int sub_6A4CE0()
{
  _BYTE *v0; // esi
  int v1; // edi

  v0 = &MEMORY[0xB07C48]; /*0x6a4ce2*/
  v1 = 4; /*0x6a4ce7*/
  do /*0x6a4cf7*/
  {
    ShapeButtonClass::Init(v0); /*0x6a4cee*/
    v0 += 96; /*0x6a4cf3*/
    --v1; /*0x6a4cf6*/
  }
  while ( v1 ); /*0x6a4cf7*/
  return atexit(sub_6A4D10); /*0x6a4d06*/
}


// ==== 0x006A4D10  sub_6A4D10  this=-  sig=ida-proto ====
void __cdecl sub_6A4D10()
{
  int *v0; // esi
  int v1; // edi

  if ( (MEMORY[0xB07BB1] & 4) == 0 ) /*0x6a4d1d*/
  {
    MEMORY[0xB07BB1] |= 4u; /*0x6a4d23*/
    v0 = &MEMORY[0xB07DC8]; /*0x6a4d29*/
    v1 = 4; /*0x6a4d2e*/
    do /*0x6a4d3b*/
    {
      v0 -= 24; /*0x6a4d30*/
      ShapeButtonClass::Destructor((int)v0); /*0x6a4d35*/
      --v1; /*0x6a4d3a*/
    }
    while ( v1 ); /*0x6a4d3b*/
  }
}


// ==== 0x006A4D40  sub_6A4D40  this=-  sig=ida-proto ====
int sub_6A4D40()
{
  ShapeButtonClass::Init(MEMORY[0xB0B328]); /*0x6a4d45*/
  return atexit(sub_6A4D60); /*0x6a4d55*/
}


// ==== 0x006A4D60  sub_6A4D60  this=-  sig=ida-proto ====
void __cdecl sub_6A4D60()
{
  if ( (MEMORY[0xB07BB1] & 8) == 0 ) /*0x6a4d6a*/
  {
    MEMORY[0xB07BB1] |= 8u; /*0x6a4d6e*/
    ShapeButtonClass::Destructor((int)MEMORY[0xB0B328]); /*0x6a4d79*/
  }
}


// ==== 0x006A4D80  sub_6A4D80  this=-  sig=ida-proto ====
int sub_6A4D80()
{
  ShapeButtonClass::Init(MEMORY[0xB0B408]); /*0x6a4d85*/
  return atexit(sub_6A4DA0); /*0x6a4d95*/
}


// ==== 0x006A4DA0  sub_6A4DA0  this=-  sig=ida-proto ====
void __cdecl sub_6A4DA0()
{
  if ( (MEMORY[0xB07BB1] & 0x10) == 0 ) /*0x6a4daa*/
  {
    MEMORY[0xB07BB1] |= 0x10u; /*0x6a4dae*/
    ShapeButtonClass::Destructor((int)MEMORY[0xB0B408]); /*0x6a4db9*/
  }
}


// ==== 0x006A4DC0  sub_6A4DC0  this=-  sig=ida-proto ====
int sub_6A4DC0()
{
  _DWORD *v0; // esi
  int v1; // ebx

  v0 = &MEMORY[0xB07E80]; /*0x6a4dc3*/
  v1 = 240; /*0x6a4dc8*/
  do /*0x6a4df0*/
  {
    ControlClass::Construct(v0, 0, 0, 0, 60, 48, 25, 0); /*0x6a4ddb*/
    v0[11] = 0; /*0x6a4de0*/
    v0[12] = 0; /*0x6a4de3*/
    *v0 = &vt_SidebarClass_StripClass_SelectClass; /*0x6a4de6*/
    v0 += 14; /*0x6a4dec*/
    --v1; /*0x6a4def*/
  }
  while ( v1 ); /*0x6a4df0*/
  return atexit(sub_6A4E10); /*0x6a4dff*/
}


// ==== 0x006A4E10  sub_6A4E10  this=-  sig=ida-proto ====
void __cdecl sub_6A4E10()
{
  int *v0; // esi
  int v1; // edi

  if ( (MEMORY[0xB07BB1] & 0x20) == 0 ) /*0x6a4e1a*/
  {
    MEMORY[0xB07BB1] |= 0x20u; /*0x6a4e20*/
    v0 = &MEMORY[0xB0B300]; /*0x6a4e26*/
    v1 = 240; /*0x6a4e2b*/
    do /*0x6a4e3b*/
    {
      v0 -= 14; /*0x6a4e30*/
      GadgetClass::Dtor(v0); /*0x6a4e35*/
      --v1; /*0x6a4e3a*/
    }
    while ( v1 ); /*0x6a4e3b*/
  }
}


// ==== 0x006A4E60  SidebarClass::initTabData  this=SidebarClass  sig=csp ====
char *__thiscall sub_6A4E60(char *this)
{
  char *v2; // esi
  int v3; // ebp
  _BYTE *v4; // esi
  int v5; // ebp
  char v7; // [esp+13h] [ebp-1h] BYREF

  RadarClass::Create((int)this); /*0x6a4e67*/
  v2 = this + 5444; /*0x6a4e6c*/
  v3 = 4; /*0x6a4e72*/
  do /*0x6a4eac*/
  {
    *(_DWORD *)v2 = 0; /*0x6a4e79*/
    v2[4] = 0; /*0x6a4e7b*/
    *((_DWORD *)v2 + 2) = MEMORY[0xA8ED84]; /*0x6a4e8f*/
    *((_DWORD *)v2 + 4) = 0; /*0x6a4e92*/
    *((_DWORD *)v2 + 5) = 0; /*0x6a4e96*/
    *((_DWORD *)v2 + 6) = 1; /*0x6a4e99*/
    Array::ForEach((int)(v2 + 88), 52, 75, TabClass::drawTabBackground); /*0x6a4ea0*/
    v2 += 3988; /*0x6a4ea5*/
    --v3; /*0x6a4eab*/
  }
  while ( v3 ); /*0x6a4eac*/
  this->q539C = 0; /*0x6a4eae*/
  this->q14E8 = 0; /*0x6a4eb4*/
  this->__pad_53A4 = 0; /*0x6a4eba*/
  this->q53A5 = 0; /*0x6a4ec0*/
  this->q53A6 = 1; /*0x6a4ec6*/
  this->q53A8 = 0; /*0x6a4ecd*/
  this->q5514 = 0; /*0x6a4ed3*/
  this->q5515 = 0; /*0x6a4ed9*/
  *(_DWORD *)this = &SidebarClass::`vftable'; /*0x6a4edf*/
  v4 = this + 5444; /*0x6a4ee5*/
  v5 = 4; /*0x6a4eeb*/
  do /*0x6a4f07*/
  {
    if ( v4 ) /*0x6a4ef2*/
      TabClass::updateTabProduction(v4, (int)&v7); /*0x6a4efb*/
    v4 += 3988; /*0x6a4f00*/
    --v5; /*0x6a4f06*/
  }
  while ( v5 ); /*0x6a4f07*/
  return this; /*0x6a4f0b*/
}


// ==== 0x006A4F20  RadarClass::UI_Init  this=RadarClass  sig=csp ====
int __thiscall sub_6A4F20(int this, int a2)
{
  _DWORD *v3; // esi
  int v4; // ebp
  int v5; // esi
  int v6; // ebp

  System_Init_6AC840((char *)this, a2); /*0x6a4f2b*/
  DynamicVector::Constructor_Cell((_DWORD *)(this + 4644), 0, 0); /*0x6a4f3a*/
  System_Init_6AC8D0((_DWORD *)(this + 4700), 0, 0); /*0x6a4f47*/
  v3 = (_DWORD *)(this + 4728); /*0x6a4f4c*/
  v4 = 22; /*0x6a4f52*/
  do /*0x6a4f64*/
  {
    System_Init_6AC8D0(v3, 0, 0); /*0x6a4f5b*/
    v3 += 6; /*0x6a4f60*/
    --v4; /*0x6a4f63*/
  }
  while ( v4 ); /*0x6a4f64*/
  Timer::Init((DWORD *)(this + 5376), 0); /*0x6a4f6d*/
  *(_DWORD *)this = &vt_RadarClass; /*0x6a4f78*/
  AudioController::Init((_DWORD *)(this + 5312)); /*0x6a4f7e*/
  *(_DWORD *)(this + 5408) = Timer::GetTicks(); /*0x6a4f8e*/
  *(_DWORD *)(this + 5416) = 0; /*0x6a4f94*/
  *(_DWORD *)this = &PowerClass::`vftable'; /*0x6a4f9a*/
  v5 = this + 5444; /*0x6a4fa0*/
  v6 = 4; /*0x6a4fa6*/
  do /*0x6a4fdf*/
  {
    *(_DWORD *)v5 = 0; /*0x6a4fab*/
    *(_BYTE *)(v5 + 4) = 0; /*0x6a4fad*/
    *(_DWORD *)(v5 + 8) = MEMORY[0xA8ED84]; /*0x6a4fc2*/
    *(_DWORD *)(v5 + 16) = 0; /*0x6a4fc5*/
    *(_DWORD *)(v5 + 20) = 0; /*0x6a4fc9*/
    *(_DWORD *)(v5 + 24) = 1; /*0x6a4fcc*/
    Array::ForEach(v5 + 88, 52, 75, TabClass::drawTabBackground); /*0x6a4fd3*/
    v5 += 3988; /*0x6a4fd8*/
    --v6; /*0x6a4fde*/
  }
  while ( v6 ); /*0x6a4fdf*/
  *(_DWORD *)this = &SidebarClass::`vftable'; /*0x6a4fe1*/
  return this; /*0x6a4fe9*/
}


// ==== 0x006A4FF0  nullsub_36  this=-  sig=csp ====
void __stdcall nullsub_36(IUnknown *aP0)
{
  ; /*0x6a4ff0*/
}


// ==== 0x006A5000  SidebarClass::processDamage  this=SidebarClass  sig=csp ====
int __thiscall ObjectClass::sub_6A5000(int *this)
{
  int v1; // esi
  int result; // eax

  PowerClass::Stub(this); /*0x6a5001*/
  v1 = 4; /*0x6a5006*/
  do /*0x6a501d*/
  {
    result = SearchMIXFile(MEMORY[0x83F92C], 0); /*0x6a5012*/
    --v1; /*0x6a5017*/
    MEMORY[0xB07BC0] = result; /*0x6a5018*/
  }
  while ( v1 ); /*0x6a501d*/
  return result; /*0x6a501f*/
}


// ==== 0x006A5030  SidebarClass::InitSubsystems  this=SidebarClass  sig=csp ====
int __thiscall HouseClass_InitSubsystems(_BYTE *this)
{
  char *v2; // edi
  int v3; // ebp
  int v4; // eax

  PowerClass::updateDrain(); /*0x6a5036*/
  this->q53A6 = 1; /*0x6a503d*/
  this->q5515 = 0; /*0x6a5044*/
  this->q5514 = 0; /*0x6a504a*/
  v2 = this + 5444; /*0x6a5050*/
  v3 = 4; /*0x6a5056*/
  do /*0x6a5069*/
  {
    HouseClass::ClearProductionQueue(v2); /*0x6a505d*/
    v2 += 3988; /*0x6a5062*/
    --v3; /*0x6a5068*/
  }
  while ( v3 ); /*0x6a5069*/
  v4 = *(_DWORD *)this; /*0x6a506b*/
  this->q539C = 0; /*0x6a5070*/
  this->q14E8 = 0; /*0x6a5076*/
  return (*(int (__thiscall **)(_BYTE *, _DWORD))(v4 + 216))(this, 0); /*0x6a5082*/
}


// ==== 0x006A5090  SidebarClass::InitPositions  this=SidebarClass  sig=csp ====
int SidebarClass::InitPositions()
{
  if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6a5095*/
  {
    MEMORY[0xB0B4E0] = MEMORY[0x886F94] + 7; /*0x6a50f4*/
    MEMORY[0xB0B4EC] = MEMORY[0x886F94] + 39; /*0x6a50fc*/
    MEMORY[0xB0B4E4] = 52; /*0x6a5104*/
    MEMORY[0xB0B4F0] = 32; /*0x6a510e*/
    MEMORY[0xB0B4F8] = MEMORY[0x886F94] + 69; /*0x6a5118*/
    MEMORY[0xB0B4FC] = 64; /*0x6a511d*/
  }
  else
  {
    MEMORY[0xB0B4E4] = 64; /*0x6a50a5*/
    MEMORY[0xB0B4F0] = 29; /*0x6a50af*/
    MEMORY[0xB0B4FC] = 63; /*0x6a50b9*/
    MEMORY[0xB0B4E0] = MEMORY[0x886F94] + 8; /*0x6a50c6*/
    MEMORY[0xB0B4EC] = MEMORY[0x886F94] + 39; /*0x6a50ce*/
    MEMORY[0xB0B4F8] = MEMORY[0x886F94] + 69; /*0x6a50d6*/
  }
  return MEMORY[0x886F94] + 69; /*0x6a50db*/
}


// ==== 0x006A5130  SidebarClass::CalcBounds  this=SidebarClass  sig=csp ====
int __stdcall SidebarClass_CalcBounds(char a1)
{
  int v1; // ebx
  int v2; // eax
  _DWORD *v3; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // esi
  int v7; // ecx
  int result; // eax
  _BYTE v9[16]; // [esp+8h] [ebp-10h] BYREF

  if ( a1 ) /*0x6a513b*/
  {
    v3 = (_DWORD *)SidebarClass::calcSidebarRect(v9); /*0x6a5199*/
    v4 = v3[1]; /*0x6a51a2*/
    v5 = v3[3]; /*0x6a51a8*/
    v1 = v3[2] + *v3; /*0x6a51ab*/
    MEMORY[0x886F98] = 168; /*0x6a51bb*/
    MEMORY[0x886F90] = v1; /*0x6a51c0*/
    MEMORY[0x886F94] = 158; /*0x6a51c6*/
    v2 = v5 + 32 + v4 - 158; /*0x6a51d0*/
    MEMORY[0x886F9C] = v2; /*0x6a51d7*/
  }
  else if ( MEMORY[0xA8EB7C] ) /*0x6a5144*/
  {
    MEMORY[0x886F94] = 158; /*0x6a515b*/
    v1 = MEMORY[0x886FA8] + MEMORY[0x886FA0]; /*0x6a5165*/
    MEMORY[0x886F98] = 168; /*0x6a5173*/
    MEMORY[0x886F90] = MEMORY[0x886FA8] + MEMORY[0x886FA0]; /*0x6a5181*/
    v2 = MEMORY[0x886FAC] + 32 + MEMORY[0x886FA4] - 158; /*0x6a5187*/
    MEMORY[0x886F9C] = v2; /*0x6a518e*/
  }
  else
  {
    v2 = MEMORY[0x886F9C]; /*0x6a51de*/
    v1 = MEMORY[0x886F90]; /*0x6a51e3*/
  }
  v6 = *((_DWORD *)MEMORY[0xA8B230] + 3374); /*0x6a51ef*/
  MEMORY[0xB0B500] = 50; /*0x6a51f5*/
  v7 = 26; /*0x6a5205*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6a51ff*/
    v7 = 18; /*0x6a520e*/
  result = 50 * ((v2 - MEMORY[0xB0B4F8] - v7 + MEMORY[0x886F94] - 7) / 50); /*0x6a523f*/
  MEMORY[0xB0B504] = result; /*0x6a5243*/
  if ( v6 ) /*0x6a5248*/
  {
    if ( v6 == 1 ) /*0x6a5263*/
    {
      MEMORY[0xB0B50C] = MEMORY[0xB0B4F8] + result + 7; /*0x6a5269*/
    }
    else
    {
      result += MEMORY[0xB0B4F8] + 7; /*0x6a5271*/
      MEMORY[0xB0B50C] = result; /*0x6a5275*/
    }
    MEMORY[0xB0B510] = 45; /*0x6a527a*/
  }
  else
  {
    MEMORY[0xB0B510] = 46; /*0x6a524e*/
    MEMORY[0xB0B50C] = MEMORY[0xB0B4F8] + result + 7; /*0x6a5258*/
  }
  MEMORY[0xB0B514] = 50; /*0x6a5287*/
  MEMORY[0xB0B4F4] = v1 + 22; /*0x6a5293*/
  if ( v6 ) /*0x6a529a*/
  {
    if ( v6 != 1 ) /*0x6a52c1*/
      result = v1 + 33; /*0x6a52e6*/
    MEMORY[0xB0B508] = v1 + 39; /*0x6a52cd*/
    MEMORY[0xB0B4DC] = v1 + 33; /*0x6a52d3*/
    MEMORY[0xB0B4E8] = v1 + 20; /*0x6a52d9*/
  }
  else
  {
    MEMORY[0xB0B508] = v1 + 39; /*0x6a52a6*/
    MEMORY[0xB0B4DC] = v1 + 20; /*0x6a52ac*/
    MEMORY[0xB0B4E8] = v1 + 26; /*0x6a52b2*/
    return v1 + 26; /*0x6a529f*/
  }
  return result; /*0x6a52a5*/
}


// ==== 0x006A5310  SidebarClass::Init  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::Init(_DWORD *this)
{
  int v2; // eax
  int v3; // ebp
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // ebp
  _DWORD *v11; // esi
  int v12; // eax
  int v13; // ecx
  HouseClass *v14; // edx
  int i; // ebx
  int v16; // esi
  int v17; // eax
  _DWORD *v18; // ecx
  int v19; // edx
  _DWORD *v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // eax
  _DWORD *v24; // eax
  int v25; // ecx
  int v26; // ebx
  int v27; // ecx
  HouseClass *v28; // esi
  int v30; // [esp+Ch] [ebp-4h]

  SidebarClass::CreateScrollButtons(); /*0x6a5315*/
  SidebarClass::InitPositions(this); /*0x6a531c*/
  SidebarClass::CalcBounds(0); /*0x6a5326*/
  LOBYTE(v2) = MEMORY[0xA8ED6B]; /*0x6a532b*/
  if ( !MEMORY[0xA8ED6B] ) /*0x6a5332*/
  {
    MEMORY[0xB0B3B0] = MEMORY[0xB0B4E0]; /*0x6a534b*/
    MEMORY[0xB0B3BD] = 1; /*0x6a5360*/
    MEMORY[0xB0B3C4] = 101; /*0x6a5367*/
    MEMORY[0xB0B3AC] = MEMORY[0xB0B4DC]; /*0x6a5371*/
    MEMORY[0xB0B3E4] = -480; /*0x6a5376*/
    MEMORY[0xB0B3E8] = 0; /*0x6a537c*/
    MEMORY[0xB0B3EC] = 1; /*0x6a5382*/
    MEMORY[0xB0B3F0] = MEMORY[0x87F6CC]; /*0x6a5389*/
    MEMORY[0xB0B3CD] = 0; /*0x6a538f*/
    MEMORY[0xB0B3D0] = 1; /*0x6a5395*/
    MEMORY[0xB0B3E0] = 1; /*0x6a539b*/
    SHA1::Reset((int)MEMORY[0xB0B3A0]); /*0x6a53a2*/
    MEMORY[0xB07E04] = MEMORY[0xB0B3AC] + MEMORY[0xB0B4E4]; /*0x6a53bf*/
    MEMORY[0xB07E15] = 1; /*0x6a53ca*/
    MEMORY[0xB07E1C] = 102; /*0x6a53d1*/
    MEMORY[0xB07E08] = MEMORY[0xB0B3B0]; /*0x6a53db*/
    MEMORY[0xB07E3C] = -480; /*0x6a53e1*/
    MEMORY[0xB07E40] = 0; /*0x6a53e7*/
    MEMORY[0xB07E44] = 1; /*0x6a53ed*/
    MEMORY[0xB07E48] = MEMORY[0x87F6CC]; /*0x6a53f4*/
    MEMORY[0xB07E25] = 0; /*0x6a53f9*/
    MEMORY[0xB07E28] = 1; /*0x6a53ff*/
    MEMORY[0xB07E38] = 1; /*0x6a5405*/
    SHA1::Reset((int)MEMORY[0xB07DF8]); /*0x6a540c*/
    v3 = 0; /*0x6a5411*/
    v4 = &MEMORY[0xB07C6C]; /*0x6a5413*/
    do /*0x6a5484*/
    {
      v5 = MEMORY[0xB0B4E8]; /*0x6a5422*/
      v6 = v3 * MEMORY[0xB0B4F0]; /*0x6a5427*/
      *((_BYTE *)v4 - 7) = 1; /*0x6a5430*/
      v7 = v5 + v6; /*0x6a5434*/
      v8 = MEMORY[0xB0B4EC]; /*0x6a5436*/
      *v4 = v3 + 203; /*0x6a543b*/
      v9 = MEMORY[0x87F6CC]; /*0x6a543d*/
      *(v4 - 6) = v7; /*0x6a5443*/
      *(v4 - 5) = v8; /*0x6a5446*/
      v4[8] = -480; /*0x6a5449*/
      v4[9] = 0; /*0x6a5450*/
      *((_BYTE *)v4 + 40) = 1; /*0x6a5453*/
      v4[11] = v9; /*0x6a5457*/
      *((_BYTE *)v4 + 9) = 0; /*0x6a545d*/
      v4[3] = 2; /*0x6a5461*/
      *((_BYTE *)v4 + 28) = 1; /*0x6a546a*/
      DialogControl::Show((_BYTE *)v4 - 36); /*0x6a546e*/
      SHA1::Reset((int)(v4 - 9)); /*0x6a5475*/
      v4 += 24; /*0x6a547a*/
      ++v3; /*0x6a547d*/
    }
    while ( (int)v4 < (int)((_DWORD *)&MEMORY[0xB07DE8] + 1) ); /*0x6a5484*/
    MEMORY[0xB0B345] = 1; /*0x6a5496*/
    MEMORY[0xB0B34C] = 201; /*0x6a549d*/
    MEMORY[0xB0B374] = 1; /*0x6a54a7*/
    MEMORY[0xB0B378] = MEMORY[0x87F6CC]; /*0x6a54ae*/
    MEMORY[0xB0B348] = 85; /*0x6a54b4*/
    SHA1::Reset((int)MEMORY[0xB0B328]); /*0x6a54ba*/
    MEMORY[0xB0B425] = 1; /*0x6a54c9*/
    MEMORY[0xB0B42C] = 200; /*0x6a54d0*/
    MEMORY[0xB0B454] = 1; /*0x6a54da*/
    MEMORY[0xB0B458] = MEMORY[0x87F6CC]; /*0x6a54e1*/
    MEMORY[0xB0B428] = 85; /*0x6a54e6*/
    SHA1::Reset((int)MEMORY[0xB0B408]); /*0x6a54ec*/
    v10 = 0; /*0x6a54f1*/
    v11 = this + 1370; /*0x6a54f5*/
    do /*0x6a553b*/
    {
      *(v11 - 1) = MEMORY[0xB0B4F4]; /*0x6a5502*/
      *v11 = MEMORY[0xB0B4F8]; /*0x6a550e*/
      v12 = MEMORY[0xB0B504]; /*0x6a5510*/
      v11[1] = 0; /*0x6a5519*/
      v11[2] = 0; /*0x6a551b*/
      v11[3] = 60; /*0x6a5523*/
      v11[4] = v12; /*0x6a5529*/
      SidebarClass::InitCameoGrid(v10++); /*0x6a552c*/
      v11 += 997; /*0x6a5532*/
    }
    while ( v10 < 4 ); /*0x6a553b*/
    (*(void (__thiscall **)(_DWORD *))(*this + 136))(this); /*0x6a5541*/
    SidebarClass::CalcBounds(1); /*0x6a554b*/
    if ( this->q53A5 ) /*0x6a5550*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 216))(this, 0); /*0x6a5560*/
      (*(void (__thiscall **)(_DWORD *, int))(*this + 216))(this, 1); /*0x6a556c*/
    }
    this->SidebarClass_field_0x1544 = 0; /*0x6a5574*/
    LOBYTE(v2) = MEMORY[0xA8B238][0]; /*0x6a557a*/
    if ( MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4 ) /*0x6a5587*/
    {
      v13 = 0; /*0x6a5595*/
      if ( HouseClass_Count <= 0 ) /*0x6a5599*/
      {
LABEL_17:
        v2 = 0; /*0x6a55d9*/
      }
      else
      {
        v14 = HouseClass_Array; /*0x6a559b*/
        while ( 1 ) /*0x6a55a5*/
        {
          v2 = *(_DWORD *)v14->__pad_0; /*0x6a55a5*/
          if ( *(_DWORD *)v14->__pad_0 ) /*0x6a55a5*/
          {
            if ( *(_BYTE *)(*(_DWORD *)(v2 + 52) + 422) != 1 && v2 != MEMORY[0xAC1198] && *(_BYTE *)(v2 + 492) ) /*0x6a55bf*/
              break; /*0x6a55bf*/
          }
          ++v13; /*0x6a55cf*/
          v14 = (HouseClass *)((char *)v14 + 4); /*0x6a55d0*/
          if ( v13 >= HouseClass_Count ) /*0x6a55d5*/
            goto LABEL_17; /*0x6a55d5*/
        }
      }
      this->__pad_53AC = v2; /*0x6a55db*/
      for ( i = 0; i < 8; i = this->SidebarClass_field_0x1544 ) /*0x6a55e1*/
      {
        v16 = *(this + i + 5355); /*0x6a55e7*/
        if ( !v16 ) /*0x6a55f0*/
          break; /*0x6a55f0*/
        v17 = 0; /*0x6a55fc*/
        v18 = (_DWORD *)(v16 + 21476); /*0x6a55fe*/
        v19 = 20; /*0x6a5604*/
        do /*0x6a560f*/
        {
          v17 += *v18++; /*0x6a5609*/
          --v19; /*0x6a560e*/
        }
        while ( v19 ); /*0x6a560f*/
        v20 = (_DWORD *)(v16 + 21560); /*0x6a5611*/
        v21 = 20; /*0x6a5617*/
        do /*0x6a5622*/
        {
          v17 += *v20++; /*0x6a561c*/
          --v21; /*0x6a5621*/
        }
        while ( v21 ); /*0x6a5622*/
        *(this + i + 5363) = v17; /*0x6a5626*/
        *(this + this->SidebarClass_field_0x1544 + 5371) = *(_DWORD *)(v16 + 744) /*0x6a5659*/
                                        + *(_DWORD *)(v16 + 752)
                                        + *(_DWORD *)(v16 + 756)
                                        + *(_DWORD *)(v16 + 760);
        v22 = (*(int (__stdcall **)(int))(*(_DWORD *)(v16 + 36) + 24))(v16 + 36); /*0x6a5669*/
        if ( v22 < 0 ) /*0x6a566e*/
          v22 = 0; /*0x6a5670*/
        *(this + this->SidebarClass_field_0x1544 + 5379) = v22; /*0x6a567a*/
        if ( v16 == MEMORY[0xAC1198] ) /*0x6a569a*/
        {
          v23 = FindBuildingAnimByName(MEMORY[0x836ECC], 1); /*0x6a56a6*/
        }
        else if ( *(_BYTE *)(v16 + 501) ) /*0x6a56ad*/
        {
          v23 = FindBuildingAnimByName(g_INI_Key_Grey, 1); /*0x6a56c1*/
        }
        else
        {
          v23 = *((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(v16 + 90196)); /*0x6a56d3*/
        }
        *(this + this->SidebarClass_field_0x1544 + 5387) = v23; /*0x6a56dc*/
        *(this + this->SidebarClass_field_0x1544 + 5395) = 0; /*0x6a56e9*/
        *(this + this->SidebarClass_field_0x1544 + 5403) = 0; /*0x6a56f6*/
        *(this + this->SidebarClass_field_0x1544 + 5411) = 0; /*0x6a5703*/
        *(this + this->SidebarClass_field_0x1544 + 5419) = 0; /*0x6a5710*/
        *(this + this->SidebarClass_field_0x1544 + 5427) = 0; /*0x6a571d*/
        *(this + this->SidebarClass_field_0x1544 + 5435) = 0; /*0x6a572a*/
        if ( MEMORY[0xA8B238][0] == 4 ) /*0x6a5739*/
        {
          v24 = (_DWORD *)SidebarClass::FindProductionData(v16 + 90154); /*0x6a5741*/
          if ( v24 ) /*0x6a5748*/
          {
            *(this + this->SidebarClass_field_0x1544 + 5395) = v24[7]; /*0x6a5754*/
            *(this + this->SidebarClass_field_0x1544 + 5403) = v24[4]; /*0x6a5764*/
            *(this + this->SidebarClass_field_0x1544 + 5411) = v24[2]; /*0x6a5774*/
            *(this + this->SidebarClass_field_0x1544 + 5419) = v24[3]; /*0x6a5784*/
            *(this + this->SidebarClass_field_0x1544 + 5427) = v24[8]; /*0x6a5794*/
            *(this + this->SidebarClass_field_0x1544 + 5435) = v24[12]; /*0x6a57a4*/
            __3_YAXPAX_Z(v24); /*0x6a57ab*/
          }
        }
        v30 = 0; /*0x6a57b9*/
        v25 = this->SidebarClass_field_0x1544 + 1; /*0x6a57bd*/
        this->SidebarClass_field_0x1544 = v25; /*0x6a57be*/
        v26 = v25; /*0x6a57ca*/
        v27 = 0; /*0x6a57cc*/
        if ( HouseClass_Count > 0 ) /*0x6a57d0*/
        {
          v28 = HouseClass_Array; /*0x6a57d2*/
          do /*0x6a5814*/
          {
            v2 = *(_DWORD *)v28->__pad_0; /*0x6a57dc*/
            if ( *(_DWORD *)v28->__pad_0 /*0x6a57f6*/
              && *(_BYTE *)(*(_DWORD *)(v2 + 52) + 422) != 1
              && v2 != MEMORY[0xAC1198]
              && *(_BYTE *)(v2 + 492) )
            {
              if ( v30 == v26 ) /*0x6a5805*/
                goto LABEL_44; /*0x6a5805*/
              ++v30; /*0x6a580a*/
            }
            ++v27; /*0x6a580e*/
            v28 = (HouseClass *)((char *)v28 + 4); /*0x6a580f*/
          }
          while ( v27 < HouseClass_Count ); /*0x6a5814*/
        }
        v2 = 0; /*0x6a5818*/
LABEL_44:
        *(this + v26 + 5355) = v2; /*0x6a581a*/
      }
    }
    *((_BYTE *)this + 21772) = 0; /*0x6a5831*/
  }
  return v2; /*0x6a5839*/
}


// ==== 0x006A5840  SidebarClass::LoadAssets  this=SidebarClass  sig=csp ====
void *SidebarClass_LoadAssets()
{
  _DWORD *v0; // eax
  void *SHP; // eax
  void *v2; // eax
  int v3; // edi
  int *v4; // esi
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  _DWORD *v8; // eax
  void *result; // eax
  char v10; // [esp+Ch] [ebp-704h] BYREF
  char Buffer[256]; // [esp+10h] [ebp-700h] BYREF
  _BYTE v12[768]; // [esp+110h] [ebp-600h] BYREF
  _BYTE v13[768]; // [esp+410h] [ebp-300h] BYREF

  PowerClass::checkBlackout(); /*0x6a5849*/
  qmemcpy(v12, (const void *)UI_Load_72F4A0(), sizeof(v12)); /*0x6a5863*/
  if ( MEMORY[0x87F6CC] ) /*0x6a586d*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87F6CC])(MEMORY[0x87F6CC], 1); /*0x6a5873*/
    MEMORY[0x87F6CC] = 0; /*0x6a5875*/
  }
  v0 = __2_YAPAXI_Z(0x188u); /*0x6a5880*/
  if ( v0 ) /*0x6a588a*/
    MEMORY[0x87F6CC] = (int)ConvertClass::Construct(v0, (int)v12, (int)v12, MEMORY[0x887308], 1, 0); /*0x6a58ad*/
  else
    MEMORY[0x87F6CC] = 0; /*0x6a58b4*/
  MEMORY[0xB0B484] = LoadFileSHP(MEMORY[0x83FA58], (bool *)&MEMORY[0xB0B48F]); /*0x6a58d4*/
  v10 = 0; /*0x6a58d9*/
  SHP = LoadFileSHP(MEMORY[0x83FA4C], (bool *)&v10); /*0x6a58dd*/
  ShapeButton::SetShape((int)MEMORY[0xB07DF8], (int)SHP, 0, 0); /*0x6a58e8*/
  ButtonClass::SetState(MEMORY[0xB07DF8], v10); /*0x6a58f7*/
  MEMORY[0xB07E48] = MEMORY[0x87F6CC]; /*0x6a590c*/
  v2 = LoadFileSHP(MEMORY[0x83FA40], (bool *)&v10); /*0x6a5911*/
  ShapeButton::SetShape((int)MEMORY[0xB0B3A0], (int)v2, 0, 0); /*0x6a591c*/
  ButtonClass::SetState(MEMORY[0xB0B3A0], v10); /*0x6a592b*/
  v3 = 0; /*0x6a5936*/
  MEMORY[0xB0B3F0] = MEMORY[0x87F6CC]; /*0x6a5938*/
  v4 = (int *)&MEMORY[0xB07C48]; /*0x6a593e*/
  do /*0x6a598c*/
  {
    sprintf(Buffer, MEMORY[0x83FA34], v3); /*0x6a594e*/
    v5 = LoadFileSHP(Buffer, (bool *)&v10); /*0x6a5960*/
    ShapeButton::SetShape((int)v4, (int)v5, 0, 0); /*0x6a5968*/
    ButtonClass::SetState(v4, v10); /*0x6a5974*/
    ++v3; /*0x6a597f*/
    v4[20] = MEMORY[0x87F6CC]; /*0x6a5980*/
    v4 += 24; /*0x6a5983*/
  }
  while ( (int)v4 < (int)&MEMORY[0xB07DC8] ); /*0x6a598c*/
  v6 = LoadFileSHP(MEMORY[0x83FA28], (bool *)&v10); /*0x6a5999*/
  ShapeButton::SetShape((int)MEMORY[0xB0B328], (int)v6, 0, 0); /*0x6a59a4*/
  ButtonClass::SetState(MEMORY[0xB0B328], v10); /*0x6a59b3*/
  MEMORY[0xB0B378] = MEMORY[0x87F6CC]; /*0x6a59bf*/
  v7 = LoadFileSHP(MEMORY[0x83FA1C], (bool *)&v10); /*0x6a59cf*/
  ShapeButton::SetShape((int)MEMORY[0xB0B408], (int)v7, 0, 0); /*0x6a59da*/
  ButtonClass::SetState(MEMORY[0xB0B408], v10); /*0x6a59e9*/
  MEMORY[0xB0B458] = MEMORY[0x87F6CC]; /*0x6a59fd*/
  MEMORY[0xB0B468] = LoadFileSHP(MEMORY[0x83FA10], (bool *)&MEMORY[0xB0B488]); /*0x6a5a11*/
  MEMORY[0xB0B46C] = LoadFileSHP(MEMORY[0x83FA04], (bool *)&MEMORY[0xB0B489]); /*0x6a5a25*/
  MEMORY[0xB0B470] = LoadFileSHP(MEMORY[0x83F9F8], (bool *)&MEMORY[0xB0B48A]); /*0x6a5a39*/
  MEMORY[0xB0B474] = LoadFileSHP(MEMORY[0x83F9EC], (bool *)&MEMORY[0xB0B48B]); /*0x6a5a43*/
  qmemcpy(v13, (const void *)UI_Load_72F4E0(), sizeof(v13)); /*0x6a5a5b*/
  if ( MEMORY[0x87F6D0] ) /*0x6a5a65*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87F6D0])(MEMORY[0x87F6D0], 1); /*0x6a5a6b*/
    MEMORY[0x87F6D0] = 0; /*0x6a5a6d*/
  }
  v8 = __2_YAPAXI_Z(0x188u); /*0x6a5a78*/
  if ( v8 ) /*0x6a5a82*/
    MEMORY[0x87F6D0] = (int)ConvertClass::Construct(v8, (int)v13, (int)v13, MEMORY[0x887308], 1, 0); /*0x6a5aa5*/
  else
    MEMORY[0x87F6D0] = 0; /*0x6a5aac*/
  MEMORY[0xB0B490] = LoadFileSHP(MEMORY[0x83F9E0], (bool *)&MEMORY[0xB0B4CC]); /*0x6a5acb*/
  MEMORY[0xB0B494] = LoadFileSHP(MEMORY[0x83F9D4], (bool *)&MEMORY[0xB0B4CD]); /*0x6a5adf*/
  MEMORY[0xB0B498] = LoadFileSHP(MEMORY[0x83F9C8], (bool *)&MEMORY[0xB0B4CE]); /*0x6a5af3*/
  MEMORY[0xB0B49C] = LoadFileSHP(MEMORY[0x83F9BC], (bool *)&MEMORY[0xB0B4CF]); /*0x6a5b07*/
  MEMORY[0xB0B4A0] = LoadFileSHP(MEMORY[0x83F9B0], (bool *)&MEMORY[0xB0B4D0]); /*0x6a5b1b*/
  MEMORY[0xB0B4A4] = LoadFileSHP(MEMORY[0x83F9A4], (bool *)&MEMORY[0xB0B4D1]); /*0x6a5b2f*/
  MEMORY[0xB0B4A8] = LoadFileSHP(MEMORY[0x83F998], (bool *)&MEMORY[0xB0B4D2]); /*0x6a5b43*/
  MEMORY[0xB0B4AC] = LoadFileSHP(MEMORY[0x83F98C], (bool *)&MEMORY[0xB0B4D3]); /*0x6a5b57*/
  MEMORY[0xB0B4B0] = LoadFileSHP(MEMORY[0x83F980], (bool *)&MEMORY[0xB0B4D4]); /*0x6a5b6b*/
  MEMORY[0xB0B4B4] = LoadFileSHP(MEMORY[0x83F974], (bool *)&MEMORY[0xB0B4D5]); /*0x6a5b7f*/
  MEMORY[0xB0B4B8] = LoadFileSHP(MEMORY[0x83F968], (bool *)&MEMORY[0xB0B4D6]); /*0x6a5b93*/
  MEMORY[0xB0B4BC] = LoadFileSHP(MEMORY[0x83F95C], (bool *)&MEMORY[0xB0B4D7]); /*0x6a5ba7*/
  MEMORY[0xB0B4C0] = LoadFileSHP(MEMORY[0x83F950], (bool *)&MEMORY[0xB0B4D8]); /*0x6a5bbb*/
  MEMORY[0xB0B4C4] = LoadFileSHP(MEMORY[0x83F944], (bool *)&MEMORY[0xB0B4D9]); /*0x6a5bcf*/
  result = LoadFileSHP(MEMORY[0x83F938], (bool *)&MEMORY[0xB0B4DA]); /*0x6a5bd4*/
  MEMORY[0xB0B4C8] = result; /*0x6a5bdb*/
  return result; /*0x6a5bd9*/
}


// ==== 0x006A5BF0  SidebarClass::CleanupSidebarResources  this=SidebarClass  sig=csp ====
void CleanupSidebarResources()
{
  int *v0; // esi

  PowerClass::checkLowPower(); /*0x6a5bf2*/
  if ( MEMORY[0xB0B488] ) /*0x6a5c00*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B468]); /*0x6a5c08*/
    MEMORY[0xB0B488] = 0; /*0x6a5c10*/
  }
  if ( MEMORY[0xB0B489] ) /*0x6a5c1c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B46C]); /*0x6a5c25*/
    MEMORY[0xB0B489] = 0; /*0x6a5c2d*/
  }
  if ( MEMORY[0xB0B48A] ) /*0x6a5c39*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B470]); /*0x6a5c42*/
    MEMORY[0xB0B48A] = 0; /*0x6a5c4a*/
  }
  if ( MEMORY[0xB0B48B] ) /*0x6a5c56*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B474]); /*0x6a5c5e*/
    MEMORY[0xB0B48B] = 0; /*0x6a5c66*/
  }
  if ( MEMORY[0xB0B48C] ) /*0x6a5c72*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B478]); /*0x6a5c7b*/
    MEMORY[0xB0B48C] = 0; /*0x6a5c83*/
  }
  if ( MEMORY[0xB0B48D] ) /*0x6a5c8f*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B47C]); /*0x6a5c98*/
    MEMORY[0xB0B48D] = 0; /*0x6a5ca0*/
  }
  if ( MEMORY[0xB0B48E] ) /*0x6a5cac*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B480]); /*0x6a5cb4*/
    MEMORY[0xB0B48E] = 0; /*0x6a5cbc*/
  }
  if ( MEMORY[0xB0B48F] ) /*0x6a5cc8*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B484]); /*0x6a5cd1*/
    MEMORY[0xB0B48F] = 0; /*0x6a5cd9*/
  }
  if ( MEMORY[0xB0B4CC] ) /*0x6a5ce5*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B490]); /*0x6a5cee*/
    MEMORY[0xB0B4CC] = 0; /*0x6a5cf6*/
  }
  if ( MEMORY[0xB0B4CD] ) /*0x6a5d02*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B494]); /*0x6a5d0a*/
    MEMORY[0xB0B4CD] = 0; /*0x6a5d12*/
  }
  if ( MEMORY[0xB0B4CE] ) /*0x6a5d1e*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B498]); /*0x6a5d27*/
    MEMORY[0xB0B4CE] = 0; /*0x6a5d2f*/
  }
  if ( MEMORY[0xB0B4CF] ) /*0x6a5d3b*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B49C]); /*0x6a5d44*/
    MEMORY[0xB0B4CF] = 0; /*0x6a5d4c*/
  }
  if ( MEMORY[0xB0B4D1] ) /*0x6a5d58*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4A4]); /*0x6a5d60*/
    MEMORY[0xB0B4D1] = 0; /*0x6a5d68*/
  }
  if ( MEMORY[0xB0B4D2] ) /*0x6a5d74*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4A8]); /*0x6a5d7d*/
    MEMORY[0xB0B4D2] = 0; /*0x6a5d85*/
  }
  if ( MEMORY[0xB0B4D3] ) /*0x6a5d91*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4AC]); /*0x6a5d9a*/
    MEMORY[0xB0B4D3] = 0; /*0x6a5da2*/
  }
  if ( MEMORY[0xB0B4D4] ) /*0x6a5dae*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4B0]); /*0x6a5db6*/
    MEMORY[0xB0B4D4] = 0; /*0x6a5dbe*/
  }
  if ( MEMORY[0xB0B4D5] ) /*0x6a5dca*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4B4]); /*0x6a5dd3*/
    MEMORY[0xB0B4D5] = 0; /*0x6a5ddb*/
  }
  if ( MEMORY[0xB0B4D6] ) /*0x6a5de7*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4B8]); /*0x6a5df0*/
    MEMORY[0xB0B4D6] = 0; /*0x6a5df8*/
  }
  if ( MEMORY[0xB0B4D7] ) /*0x6a5e04*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4BC]); /*0x6a5e0c*/
    MEMORY[0xB0B4D7] = 0; /*0x6a5e14*/
  }
  if ( MEMORY[0xB0B4D8] ) /*0x6a5e20*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4C0]); /*0x6a5e29*/
    MEMORY[0xB0B4D8] = 0; /*0x6a5e31*/
  }
  if ( MEMORY[0xB0B4D9] ) /*0x6a5e3d*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4C4]); /*0x6a5e46*/
    MEMORY[0xB0B4D9] = 0; /*0x6a5e4e*/
  }
  if ( MEMORY[0xB0B4D0] ) /*0x6a5e5a*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4A0]); /*0x6a5e62*/
    MEMORY[0xB0B4D0] = 0; /*0x6a5e6a*/
  }
  if ( MEMORY[0xB0B4DA] ) /*0x6a5e76*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4C8]); /*0x6a5e7f*/
    MEMORY[0xB0B4DA] = 0; /*0x6a5e87*/
  }
  ScenarioClass::FreeConfig((int)MEMORY[0xB07DF8]); /*0x6a5e92*/
  ScenarioClass::FreeConfig((int)MEMORY[0xB0B3A0]); /*0x6a5e9c*/
  v0 = (int *)&MEMORY[0xB07C48]; /*0x6a5ea1*/
  do /*0x6a5eb6*/
  {
    ScenarioClass::FreeConfig((int)v0); /*0x6a5ea8*/
    v0 += 24; /*0x6a5ead*/
  }
  while ( (int)v0 < (int)&MEMORY[0xB07DC8] ); /*0x6a5eb6*/
  ScenarioClass::FreeConfig((int)MEMORY[0xB0B328]); /*0x6a5ebd*/
  ScenarioClass::FreeConfig((int)MEMORY[0xB0B408]); /*0x6a5ec7*/
}


// ==== 0x006A5F20  SidebarClass::UpdateCameoProductionState  this=SidebarClass  sig=csp ====
char __thiscall sub_6A5F20(int this, _DWORD *a2)
{
  int v3; // eax
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v10; // [esp+14h] [ebp+4h]

  LOBYTE(v3) = *(_BYTE *)(this + 21413); /*0x6a5f26*/
  if ( (_BYTE)v3 ) /*0x6a5f2e*/
  {
    if ( a2 ) /*0x6a5f3a*/
    {
      v10 = (*(int (__thiscall **)(_DWORD *))(*a2 + 132))(a2); /*0x6a5f4b*/
      LOBYTE(v3) = (_BYTE)HouseClass_Player; /*0x6a5f4f*/
      if ( HouseClass_Player ) /*0x6a5f56*/
      {
        v5 = (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2); /*0x6a5f64*/
        v6 = (*(int (__thiscall **)(_DWORD *))(*a2 + 64))(a2); /*0x6a5f6b*/
        switch ( v5 ) /*0x6a5f7b*/
        {
          case 15: /*0x6a5f7b*/
          case 16: /*0x6a5f7b*/
            v3 = 2; /*0x6a5fce*/
            break;
          case 1: /*0x6a5f7b*/
          case 40: /*0x6a5f7b*/
          case 2: /*0x6a5f7b*/
          case 3: /*0x6a5f7b*/
            v3 = 3; /*0x6a5fc7*/
            break;
          case 6: /*0x6a5f7b*/
          case 7: /*0x6a5f7b*/
            v3 = GetHouseTechLevel(v5, v6) == 5; /*0x6a5fc3*/
            break;
          case 57: /*0x6a5f7b*/
          case 32: /*0x6a5f7b*/
          case 31: /*0x6a5f7b*/
            v3 = 1; /*0x6a5fae*/
            break;
          default:
            v3 = -1; /*0x6a5fa9*/
            break;
        }
        v7 = *(_DWORD *)(this + 21404); /*0x6a5fd3*/
        if ( v3 == v7 ) /*0x6a5fdb*/
        {
          LOBYTE(v3) = HouseClass::ShouldDisableCameo(HouseClass_Player, v10); /*0x6a5fe8*/
          if ( (_BYTE)v3 ) /*0x6a5fef*/
          {
            v8 = *(_DWORD *)(this + 21404); /*0x6a5ff5*/
            *(_BYTE *)(this + 21414) = 1; /*0x6a5ffb*/
            *(_BYTE *)(this + 3988 * v8 + 5504) = 1; /*0x6a6015*/
            MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x6a601c*/
            LOBYTE(v3) = (_BYTE)MEMORY[0xA8ED84]; /*0x6a6021*/
            if ( *(_DWORD *)(this + 21408) <= (int)MEMORY[0xA8ED84] ) /*0x6a602e*/
            {
              LOBYTE(v3) = (_BYTE)MEMORY[0xA8ED84] + 2; /*0x6a6030*/
              *(_DWORD *)(this + 21408) = MEMORY[0xA8ED84] + 1; /*0x6a6033*/
            }
          }
        }
        else if ( v5 == 6 ) /*0x6a6043*/
        {
          LOBYTE(v3) = *(_BYTE *)(a2[328] + 5835); /*0x6a604b*/
          if ( (_BYTE)v3 ) /*0x6a6053*/
          {
            if ( v7 == 3 ) /*0x6a6058*/
            {
              *(_BYTE *)(this + 21414) = 1; /*0x6a605a*/
              *(_BYTE *)(this + 17468) = 1; /*0x6a6067*/
              MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x6a606d*/
              LOBYTE(v3) = (_BYTE)MEMORY[0xA8ED84]; /*0x6a6072*/
              if ( *(_DWORD *)(this + 21408) <= (int)MEMORY[0xA8ED84] ) /*0x6a607f*/
              {
                LOBYTE(v3) = (_BYTE)MEMORY[0xA8ED84] + 2; /*0x6a6081*/
                *(_DWORD *)(this + 21408) = MEMORY[0xA8ED84] + 1; /*0x6a6084*/
              }
            }
          }
        }
      }
    }
  }
  return v3; /*0x6a6039*/
}


// ==== 0x006A60A0  Sidebar::ActivateTab  this=Sidebar  sig=csp ====
int __thiscall Sidebar::ActivateTab(int this, IUnknown *aP1)
{
  IUnknown *result; // eax

  result = aP1; /*0x6a60a0*/
  if ( aP1 == *(IUnknown **)(this + 21404) ) /*0x6a60ac*/
  {
    *(_BYTE *)(this + 21414) = 1; /*0x6a60b8*/
    *(_BYTE *)(this + 3988 * (_DWORD)aP1 + 5504) = 1; /*0x6a60c6*/
    return MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x6a60d2*/
  }
  return (int)result; /*0x6a60d8*/
}


// ==== 0x006A60E0  SuperWeapon::UpdateTargetRedrawState  this=SuperWeapon  sig=csp ====
wchar_t *__thiscall sub_6A60E0(int this, wchar_t *a2)
{
  wchar_t *result; // eax

  result = *(wchar_t **)(this + 21404); /*0x6a60e7*/
  if ( a2 == result ) /*0x6a60ef*/
  {
    *(_BYTE *)(this + 21414) = 1; /*0x6a60fa*/
    *(_BYTE *)(this + 3988 * (_DWORD)result + 5504) = 1; /*0x6a6108*/
    MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x6a6114*/
    result = MEMORY[0xA8ED84]; /*0x6a6119*/
    if ( *(_DWORD *)(this + 21408) <= (int)MEMORY[0xA8ED84] ) /*0x6a6126*/
    {
      result = MEMORY[0xA8ED84] + 1; /*0x6a6128*/
      *(_DWORD *)(this + 21408) = MEMORY[0xA8ED84] + 1; /*0x6a612b*/
    }
  }
  return result; /*0x6a6131*/
}


// ==== 0x006A6140  Sidebar::FindProductionType  this=Sidebar  sig=csp ====
char __thiscall Sidebar::FindProductionType(_DWORD *this, FactoryClass *aP1, MouseClass *aP2, int a4)
{
  int v5; // eax
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // esi
  _DWORD *i; // edx

  if ( aP2 == (MouseClass *)15 || aP2 == (MouseClass *)16 ) /*0x6a6155*/
  {
    v5 = 2; /*0x6a61ac*/
  }
  else if ( aP2 == (MouseClass *)1 || aP2 == (MouseClass *)40 || aP2 == (MouseClass *)2 || aP2 == (MouseClass *)3 ) /*0x6a6169*/
  {
    v5 = 3; /*0x6a61a5*/
  }
  else if ( aP2 == (MouseClass *)6 || aP2 == (MouseClass *)7 ) /*0x6a6173*/
  {
    v5 = GetHouseTechLevel((int)aP2, a4) == 5; /*0x6a61a1*/
  }
  else if ( aP2 == (MouseClass *)57 || aP2 == (MouseClass *)32 || aP2 == (MouseClass *)31 ) /*0x6a6182*/
  {
    v5 = 1; /*0x6a6189*/
  }
  else
  {
    v5 = -1; /*0x6a6184*/
  }
  v6 = 997 * v5; /*0x6a61bb*/
  v7 = 0; /*0x6a61be*/
  v8 = this + v6 + 1361; /*0x6a61c0*/
  v9 = *(this + v6 + 1382); /*0x6a61c7*/
  if ( v9 <= 0 ) /*0x6a61d0*/
    return 0; /*0x6a61e6*/
  for ( i = v8 + 22; (MouseClass *)i[1] != aP2 || *i != a4; i += 13 ) /*0x6a61d2*/
  {
    if ( ++v7 >= v9 ) /*0x6a61e4*/
      return 0; /*0x6a61e4*/
  }
  v8[13 * v7 + 25] = aP1; /*0x6a61fa*/
  *((_BYTE *)v8 + 61) = 1; /*0x6a61fe*/
  *((_BYTE *)v8 + 60) = 1; /*0x6a6202*/
  MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x6a620b*/
  return 1; /*0x6a61e6*/
}


// ==== 0x006A6300  SidebarClass::AddCameo  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::AddCameo(int *this, int a2, AnimClass *aP2)
{
  int v4; // eax
  int *v5; // ecx
  int v7; // edx
  int v8; // ecx
  int *v9; // eax
  int v10; // edi
  int v11; // eax
  int *v12; // ecx
  int v13; // ebp
  int *v14; // eax
  int v15; // eax
  int v16; // esi
  int *v17; // ebp
  int *v18; // edi
  int v19; // ebp
  int i; // esi
  int v21; // edx
  int v23; // [esp+10h] [ebp-4h]
  int v24; // [esp+18h] [ebp+4h]

  if ( MEMORY[0xA8D63C].__pad_14B0[639] ) /*0x6a630e*/
    return 0; /*0x6a630e*/
  v4 = 0; /*0x6a6314*/
  v5 = this + 1382; /*0x6a6316*/
  while ( *v5 <= 0 ) /*0x6a631f*/
  {
    ++v4; /*0x6a6321*/
    v5 += 997; /*0x6a6322*/
    if ( v4 >= 4 ) /*0x6a632b*/
    {
      v23 = -1; /*0x6a632d*/
      goto LABEL_6; /*0x6a632d*/
    }
  }
  v23 = v4; /*0x6a637e*/
LABEL_6:
  switch ( a2 )
  {
    case 15:
    case 16:
      v24 = 2; /*0x6a63af*/
      break;
    case 1:
    case 40:
    case 2:
    case 3:
      v24 = 3; /*0x6a63a5*/
      break;
    case 6:
    case 7:
      v24 = GetHouseTechLevel(a2, (int)aP2) == 5; /*0x6a639f*/
      break;
    default:
      v24 = a2 == 57 || a2 == 32 || a2 == 31 ? 1 : -1;
      break;
  }
  v7 = *(this + 997 * v24 + 1382); /*0x6a63cf*/
  if ( v7 > 75 ) /*0x6a63d9*/
    return 0; /*0x6a63d9*/
  v8 = 0; /*0x6a63df*/
  if ( v7 > 0 ) /*0x6a63e3*/
  {
    v9 = this + 997 * v24 + 1383; /*0x6a63e5*/
    while ( v9[1] != a2 || (AnimClass *)*v9 != aP2 ) /*0x6a63ef*/
    {
      ++v8; /*0x6a63f5*/
      v9 += 13; /*0x6a63f6*/
      if ( v8 >= v7 ) /*0x6a63fb*/
        goto LABEL_29; /*0x6a63fb*/
    }
    return 0; /*0x6a6602*/
  }
LABEL_29:
  if ( !*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] && a2 != 31 ) /*0x6a6409*/
    VoxClass::FindAndPlay(&stru_830620.__pad_579C[40104], -1, -1); /*0x6a6415*/
  TabCameoListClass::AddCameo_ReplaceItAll(this + 997 * v24 + 1361, a2, (int)aP2); /*0x6a641e*/
  *((_BYTE *)this + 3988 * v24 + 5504) = 1; /*0x6a6423*/
  v10 = 0; /*0x6a6427*/
  MEMORY[0x87F8E4].__pad_125C[16463] = 1; /*0x6a6429*/
  v11 = 0; /*0x6a6430*/
  v12 = this + 1382; /*0x6a6432*/
  while ( *v12 <= 0 ) /*0x6a643a*/
  {
    ++v11; /*0x6a643c*/
    v12 += 997; /*0x6a643d*/
    if ( v11 >= 4 ) /*0x6a6446*/
      goto LABEL_37; /*0x6a6446*/
  }
  if ( v11 != -1 ) /*0x6a644d*/
    goto LABEL_39; /*0x6a644d*/
LABEL_37:
  if ( *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[10192] ) /*0x6a6455*/
  {
    this->q14E6 = 1; /*0x6a6457*/
    this->q14E5 = 0; /*0x6a6461*/
  }
LABEL_39:
  v13 = v24; /*0x6a6467*/
  if ( !DialogControl::IsHidden(&MEMORY[0xB077F8].__pad_430[96 * v24 + 32]) ) /*0x6a647a*/
    DialogControl::Hide(&MEMORY[0xB077F8].__pad_430[96 * v24 + 32]); /*0x6a6485*/
  if ( v24 == this->q539C ) /*0x6a6490*/
    Tactical::UpdateUIVisibility(this); /*0x6a6494*/
  (*(void (__thiscall **)(int *, int))(*this + 216))(this, 1); /*0x6a649f*/
  if ( v23 == -1 ) /*0x6a64aa*/
  {
    v14 = this + 1382; /*0x6a64b0*/
    while ( *v14 <= 0 ) /*0x6a64b9*/
    {
      ++v10; /*0x6a64bb*/
      v14 += 997; /*0x6a64bc*/
      if ( v10 >= 4 ) /*0x6a64c4*/
      {
        v10 = -1; /*0x6a64c6*/
        break; /*0x6a64c6*/
      }
    }
    v15 = this->q539C; /*0x6a64c9*/
    if ( v10 != v15 ) /*0x6a64d1*/
    {
      GadgetClass::Hide(&MEMORY[0xB077F8].__pad_430[96 * v15 + 32]); /*0x6a64e3*/
      v16 = 0; /*0x6a64f5*/
      v17 = this + 997 * this->q539C + 1361; /*0x6a64fd*/
      *((_BYTE *)this + 3988 * this->q539C + 5472) = 0; /*0x6a6504*/
      do /*0x6a652f*/
      {
        Tactical::SelectObject(&MEMORY[0x87F7E8], 56 * (v16 + 60 * v17[14]) + 11566720); /*0x6a6526*/
        ++v16; /*0x6a652b*/
      }
      while ( v16 < 60 ); /*0x6a652f*/
      this->q539C = v10; /*0x6a6534*/
      GadgetClass::Show(&MEMORY[0xB077F8].__pad_430[96 * v10 + 32]); /*0x6a6543*/
      v18 = this + 997 * this->q539C + 1361; /*0x6a6560*/
      *((_BYTE *)this + 3988 * this->q539C + 5472) = 1; /*0x6a6567*/
      v19 = UI_Add_6AC430(); /*0x6a6570*/
      for ( i = 0; i < v19; ++i ) /*0x6a6576*/
      {
        Hash::Reset((_DWORD *)(56 * (i + 60 * v18[14]) + 11566720)); /*0x6a6590*/
        Hash::InsertOrdered(&MEMORY[0x87F7E8], 56 * (i + 60 * v18[14]) + 11566720); /*0x6a65b3*/
      }
      MEMORY[0x87F8E4].__pad_125C[16463] = 1; /*0x6a65bf*/
      Tactical::UpdateUIVisibility(this); /*0x6a65c6*/
      v13 = v24; /*0x6a65cb*/
      this->q53A7 = 1; /*0x6a65cf*/
    }
  }
  v21 = *this; /*0x6a65d6*/
  this->q53A6 = 1; /*0x6a65dc*/
  (*(void (__thiscall **)(int *, _DWORD))(v21 + 56))(this, 0); /*0x6a65e3*/
  if ( v13 == this->q539C ) /*0x6a65ec*/
    MEMORY[0xB077F8].__pad_14B0[10352] = 1; /*0x6a65ee*/
  return 1; /*0x6a65f5*/
}


// ==== 0x006A6610  Tactical::UpdateUIVisibility  this=SidebarClass  sig=csp ====
int __thiscall Tactical_UpdateUIVisibility(_DWORD *this)
{
  int v1; // eax
  int result; // eax
  int v3; // eax

  if ( HouseClass_Player == (#375 *)MEMORY[0xAC1198] ) /*0x6a661d*/
  {
    v3 = 26; /*0x6a66f8*/
    if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6a66f0*/
      v3 = 18; /*0x6a66ff*/
    if ( 4 * MEMORY[0x884CF8] > 2 * ((MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v3 + MEMORY[0x886F94] - 7) / 50) ) /*0x6a6743*/
    {
      if ( !(unsigned __int8)DialogControl::IsHidden(MEMORY[0xB0B328]) ) /*0x6a6745*/
        DialogControl::Hide(MEMORY[0xB0B328]); /*0x6a6753*/
      result = DialogControl::IsHidden(MEMORY[0xB0B408]); /*0x6a675d*/
      if ( !(_BYTE)result ) /*0x6a6764*/
        return DialogControl::Hide(MEMORY[0xB0B408]); /*0x6a6764*/
      return result; /*0x6a6764*/
    }
    if ( (unsigned __int8)DialogControl::IsHidden(MEMORY[0xB0B328]) ) /*0x6a6770*/
      DialogControl::Show(MEMORY[0xB0B328]); /*0x6a677e*/
    result = DialogControl::IsHidden(MEMORY[0xB0B408]); /*0x6a6788*/
    if ( !(_BYTE)result ) /*0x6a678f*/
      return result; /*0x6a678f*/
    return DialogControl::Show(MEMORY[0xB0B408]); /*0x6a6796*/
  }
  v1 = 26; /*0x6a6631*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6a6629*/
    v1 = 18; /*0x6a6638*/
  if ( *(this + 997 * this->q539C + 1382) <= 2 /*0x6a668a*/
                                              * ((MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v1 + MEMORY[0x886F94] - 7)
                                               / 50) )
  {
    if ( (unsigned __int8)DialogControl::IsHidden(MEMORY[0xB0B328]) ) /*0x6a66bb*/
      DialogControl::Show(MEMORY[0xB0B328]); /*0x6a66c9*/
    result = DialogControl::IsHidden(MEMORY[0xB0B408]); /*0x6a66d3*/
    if ( !(_BYTE)result ) /*0x6a66da*/
      return result; /*0x6a66da*/
    return DialogControl::Show(MEMORY[0xB0B408]); /*0x6a66da*/
  }
  if ( !(unsigned __int8)DialogControl::IsHidden(MEMORY[0xB0B328]) ) /*0x6a668c*/
    DialogControl::Hide(MEMORY[0xB0B328]); /*0x6a669a*/
  result = DialogControl::IsHidden(MEMORY[0xB0B408]); /*0x6a66a4*/
  if ( !(_BYTE)result ) /*0x6a66ab*/
    return DialogControl::Hide(MEMORY[0xB0B408]); /*0x6a66b1*/
  return result; /*0x6a679b*/
}


// ==== 0x006A6A00  CreateTeamCommand::performAction_245  this=CreateTeamCommand  sig=csp ====
char __thiscall sub_6A6A00(_DWORD *this, char a2, int a3)
{
  int v3; // eax
  _DWORD *v4; // esi
  int v6; // eax
  int v7; // eax

  if ( !MEMORY[0xA8ED8C] ) /*0x6a6a09*/
  {
    v3 = a3; /*0x6a6a0f*/
    if ( a3 == -1 ) /*0x6a6a16*/
      v3 = this->q539C; /*0x6a6a18*/
    v4 = this + 997 * v3 + 1361; /*0x6a6a2b*/
    if ( a2 ) /*0x6a6a38*/
    {
      if ( *(this + 997 * v3 + 1378) ) /*0x6a6a3a*/
      {
        --*(this + 997 * v3 + 1379); /*0x6a6a4b*/
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 56))(this, 0); /*0x6a6a50*/
        return 1; /*0x6a6a57*/
      }
      return 0; /*0x6a6a3f*/
    }
    v6 = 26; /*0x6a6a68*/
    if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6a6a60*/
      v6 = 18; /*0x6a6a6f*/
    v7 = (MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v6 + MEMORY[0x886F94] - 7) / 50; /*0x6a6aa4*/
    if ( HouseClass_Player == (#375 *)MEMORY[0xAC1198] ) /*0x6a6aae*/
    {
      if ( v4[17] + v7 / 2 < MEMORY[0x884CF8] ) /*0x6a6ac2*/
        goto LABEL_13; /*0x6a6ac2*/
    }
    else if ( 2 * (v7 + v4[17]) < v4[21] ) /*0x6a6ad2*/
    {
LABEL_13:
      ++v4[18]; /*0x6a6ad4*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 56))(this, 0); /*0x6a6adf*/
      return 1; /*0x6a6ae6*/
    }
  }
  return 0; /*0x6a6a53*/
}


// ==== 0x006A6AF0  ObjectClass::method_6A6AF0  this=ObjectClass  sig=csp ====
char __thiscall sub_6A6AF0(_DWORD *this, ObjectClass *aP1, int a3)
{
  int v3; // eax
  _DWORD *v4; // ecx
  int v5; // eax
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // esi
  int v12; // [esp+0h] [ebp-8h]
  _DWORD *v14; // [esp+10h] [ebp+8h]

  v3 = a3; /*0x6a6af3*/
  if ( a3 == -1 ) /*0x6a6afe*/
    v3 = this->q14E7; /*0x6a6b00*/
  v4 = this + 997 * v3 + 1361; /*0x6a6b19*/
  v5 = 26; /*0x6a6b20*/
  v14 = v4; /*0x6a6b25*/
  v6 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13496); /*0x6a6b29*/
  if ( v6 ) /*0x6a6b31*/
    v5 = 18; /*0x6a6b33*/
  v12 = (*(_DWORD *)&stru_87C374.__pad_579C[21644] /*0x6a6b77*/
       - *(_DWORD *)&stru_B05488.__pad_579C[2260]
       - v5
       + *(_DWORD *)&stru_87C374.__pad_579C[21636]
       - 7)
      / 50;
  if ( (CoordStruct *)HouseClass_Player.field_0 == *(&g_MatrixTransformState + 2274) ) /*0x6a6b7b*/
    v12 = 1; /*0x6a6b7d*/
  if ( !(_BYTE)aP1 ) /*0x6a6b8b*/
  {
    v9 = 26; /*0x6a6ba9*/
    if ( v6 ) /*0x6a6bae*/
      v9 = 18; /*0x6a6bb0*/
    v10 = *(_DWORD *)&stru_87C374.__pad_579C[21644] - *(_DWORD *)&stru_B05488.__pad_579C[2260] - v9; /*0x6a6bb5*/
    if ( (CoordStruct *)HouseClass_Player.field_0 == *(&g_MatrixTransformState + 2274) ) /*0x6a6bd0*/
    {
      v7 = v14; /*0x6a6bdd*/
      if ( v14[17] + (v10 + *(_DWORD *)&stru_87C374.__pad_579C[21636] - 7) / 50 / 2 >= *(int *)&stru_87C374.__pad_579C[12776] ) /*0x6a6be8*/
        return 0; /*0x6a6be8*/
    }
    else
    {
      if ( 2 * ((v10 + *(_DWORD *)&stru_87C374.__pad_579C[21636] - 7) / 50 + v14[17]) >= v14[21] ) /*0x6a6bfc*/
        return 0; /*0x6a6bfc*/
      v7 = v14; /*0x6a6bfe*/
    }
    v8 = v12 + v7[18]; /*0x6a6c07*/
    goto LABEL_18; /*0x6a6c07*/
  }
  v7 = v14; /*0x6a6b8d*/
  if ( v14[17] ) /*0x6a6b91*/
  {
    v8 = v14[18] - v12; /*0x6a6ba3*/
LABEL_18:
    v7[18] = v8; /*0x6a6c09*/
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 56))(this, 0); /*0x6a6c14*/
    return 1; /*0x6a6c20*/
  }
  return 0; /*0x6a6c1d*/
}


// ==== 0x006A6C30  SidebarClass::Redraw  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::Redraw(void *this, char a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // esi
  void *v5; // ebp
  int i; // edi
  int v7; // eax
  int *v8; // esi
  char v9; // al
  char v10; // dl
  _BYTE *v11; // eax
  char v12; // al
  unsigned int v14; // [esp-34h] [ebp-64h]
  unsigned int v15; // [esp-34h] [ebp-64h]
  unsigned int v16; // [esp-34h] [ebp-64h]
  unsigned __int8 v17; // [esp+Ch] [ebp-24h]
  int v19; // [esp+14h] [ebp-1Ch]
  int v20; // [esp+18h] [ebp-18h] BYREF
  int v21; // [esp+1Ch] [ebp-14h]
  int v22[4]; // [esp+20h] [ebp-10h] BYREF
  char v23; // [esp+34h] [ebp+4h]

  v2 = (int)this; /*0x6a6c3b*/
  MEMORY[0x8809F4] = MEMORY[0xB07DC8]; /*0x6a6c49*/
  MEMORY[0x8809F8] = MEMORY[0xB07DCC]; /*0x6a6c53*/
  MEMORY[0x8809FC] = MEMORY[0xB07DD0]; /*0x6a6c5f*/
  v19 = MEMORY[0x887314]; /*0x6a6c65*/
  MEMORY[0x880A00] = MEMORY[0xB07DD4]; /*0x6a6c6f*/
  MEMORY[0x887314] = MEMORY[0x887300]; /*0x6a6c74*/
  v17 = 0; /*0x6a6c82*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887300] + 128))(MEMORY[0x887300]); /*0x6a6c92*/
  v22[2] = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887300] + 124))(MEMORY[0x887300]); /*0x6a6c99*/
  v22[0] = 0; /*0x6a6ca3*/
  v22[1] = 0; /*0x6a6ca7*/
  v22[3] = v3; /*0x6a6cab*/
  if ( a2 || *(_BYTE *)(v2 + 21414) || (v23 = 0, *(_BYTE *)(v2 + 21415)) ) /*0x6a6cb9*/
    v23 = 1; /*0x6a6cc7*/
  if ( *(_BYTE *)(v2 + 21413) && v23 && !MEMORY[0xA8ED6B] ) /*0x6a6ce8*/
  {
    if ( *(_BYTE *)(v2 + 21415) ) /*0x6a6cee*/
    {
      v21 = MEMORY[0x886F94]; /*0x6a6d1f*/
      v17 = 1; /*0x6a6d39*/
      v20 = 0; /*0x6a6d3e*/
      DrawToSurfaceSHP( /*0x6a6d42*/
        MEMORY[0x887300],
        MEMORY[0x87F6CC],
        (int)MEMORY[0xB0B468],
        0,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v4 = MEMORY[0xB0B4F8]; /*0x6a6d47*/
      v5 = MEMORY[0xB0B46C]; /*0x6a6d4d*/
      for ( i = 0; ; ++i ) /*0x6a6d53*/
      {
        v7 = 26; /*0x6a6d63*/
        if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6a6d5b*/
          v7 = 18; /*0x6a6d6a*/
        if ( i >= (MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v7 + MEMORY[0x886F94] - 7) / 50 ) /*0x6a6d9c*/
          break; /*0x6a6d9c*/
        v20 = 0; /*0x6a6dcc*/
        v21 = v4; /*0x6a6dd0*/
        DrawToSurfaceSHP(MEMORY[0x887300], MEMORY[0x87F6CC], (int)v5, 0, &v20, v22, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6a6dd4*/
        v5 = MEMORY[0xB0B46C]; /*0x6a6dd9*/
        v4 += *((__int16 *)MEMORY[0xB0B46C] + 2); /*0x6a6de3*/
      }
      v20 = 0; /*0x6a6e1c*/
      v21 = v4; /*0x6a6e20*/
      DrawToSurfaceSHP( /*0x6a6e24*/
        MEMORY[0x887300],
        MEMORY[0x87F6CC],
        (int)MEMORY[0xB0B470],
        0,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v21 = v4 + *((__int16 *)MEMORY[0xB0B470] + 2); /*0x6a6e48*/
      v20 = 0; /*0x6a6e6b*/
      DrawToSurfaceSHP( /*0x6a6e6f*/
        MEMORY[0x887300],
        MEMORY[0x87F6CC],
        (int)MEMORY[0xB0B474],
        0,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v2 = (int)this; /*0x6a6e74*/
    }
    ShapeButton::Draw((int)MEMORY[0xB07DF8], v17); /*0x6a6e88*/
    ShapeButton::Draw((int)MEMORY[0xB0B3A0], v17); /*0x6a6e93*/
    v8 = (int *)&MEMORY[0xB07C48]; /*0x6a6e98*/
    do /*0x6a6eaf*/
    {
      ShapeButton::Draw((int)v8, 1); /*0x6a6ea1*/
      v8 += 24; /*0x6a6ea6*/
    }
    while ( (int)v8 < (int)&MEMORY[0xB07DC8] ); /*0x6a6eaf*/
    ShapeButton::Draw((int)MEMORY[0xB0B328], v17); /*0x6a6eb7*/
    ShapeButton::Draw((int)MEMORY[0xB0B408], v17); /*0x6a6ec2*/
    if ( *(_DWORD *)(v2 + 21400) ) /*0x6a6ec7*/
    {
      v21 = MEMORY[0xB0B4F8]; /*0x6a6eef*/
      v14 = *(_DWORD *)(v2 + 21396); /*0x6a6f0a*/
      v20 = 0; /*0x6a6f18*/
      DrawToSurfaceSHP( /*0x6a6f1c*/
        MEMORY[0x887300],
        MEMORY[0x87F6CC],
        (int)MEMORY[0xB0B478],
        v14,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v21 = MEMORY[0xB0B4F8]; /*0x6a6f3a*/
      v15 = *(_DWORD *)(v2 + 21396); /*0x6a6f55*/
      v20 = 0; /*0x6a6f63*/
      DrawToSurfaceSHP( /*0x6a6f67*/
        MEMORY[0x887300],
        MEMORY[0x87F6CC],
        (int)MEMORY[0xB0B47C],
        v15,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v21 = MEMORY[0xB0B4F8]; /*0x6a6f85*/
      v16 = *(_DWORD *)(v2 + 21396); /*0x6a6fa0*/
      v20 = 0; /*0x6a6fae*/
      DrawToSurfaceSHP( /*0x6a6fb2*/
        MEMORY[0x887300],
        MEMORY[0x87F6CC],
        (int)MEMORY[0xB0B480],
        v16,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
    }
    MEMORY[0xB0B518] = 1; /*0x6a6fb7*/
  }
  Sidebar::UpdateProductionDisplay(v2 + 3988 * *(_DWORD *)(v2 + 21404) + 5444, v2, *(_BYTE *)(v2 + 21415)); /*0x6a6fdf*/
  v9 = v23 || v17; /*0x6a6ff4*/
  Sidebar::Render(v2, v9); /*0x6a6ffc*/
  if ( MEMORY[0xB07E4C] ) /*0x6a7007*/
  {
    v10 = 1; /*0x6a7009*/
    MEMORY[0xB07E4C] = 0; /*0x6a700b*/
    MEMORY[0xB0B518] = 1; /*0x6a7011*/
  }
  else
  {
    v10 = MEMORY[0xB0B518]; /*0x6a7019*/
  }
  if ( MEMORY[0xB0B3F4] ) /*0x6a7025*/
  {
    v10 = 1; /*0x6a7027*/
    MEMORY[0xB0B3F4] = 0; /*0x6a7029*/
    MEMORY[0xB0B518] = 1; /*0x6a702f*/
  }
  v11 = &MEMORY[0xB07C9C]; /*0x6a7035*/
  do /*0x6a704a*/
  {
    if ( *v11 ) /*0x6a703a*/
    {
      v10 = 1; /*0x6a703e*/
      *v11 = 0; /*0x6a7040*/
    }
    v11 += 96; /*0x6a7042*/
  }
  while ( (int)v11 < (int)&MEMORY[0xB07E1C] ); /*0x6a704a*/
  MEMORY[0xB0B518] = v10; /*0x6a7051*/
  if ( MEMORY[0xB0B37C] ) /*0x6a7059*/
  {
    v10 = 1; /*0x6a705b*/
    MEMORY[0xB0B37C] = 0; /*0x6a705d*/
    MEMORY[0xB0B518] = 1; /*0x6a7063*/
  }
  if ( MEMORY[0xB0B45C] ) /*0x6a706f*/
  {
    v10 = 1; /*0x6a7071*/
    MEMORY[0xB0B45C] = 0; /*0x6a7073*/
    MEMORY[0xB0B518] = 1; /*0x6a7079*/
  }
  if ( MEMORY[0x887368] ) /*0x6a7087*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887368] + 12))(MEMORY[0x887368], 1); /*0x6a708d*/
    v10 = MEMORY[0xB0B518]; /*0x6a7090*/
  }
  v12 = v10 || *(_BYTE *)(v2 + 21415); /*0x6a70a6*/
  Sidebar::FlushSidebarTooltip(v12); /*0x6a70ae*/
  *(_BYTE *)(v2 + 21414) = 0; /*0x6a70b7*/
  *(_BYTE *)(v2 + 21415) = 0; /*0x6a70bd*/
  MEMORY[0x887314] = v19; /*0x6a70c5*/
  return v19; /*0x6a70c3*/
}


// ==== 0x006A70E0  Sidebar::FlushSidebarTooltip  this=PowerClass  sig=csp ====
void __thiscall FlushSidebarTooltip(_BYTE *this, char a2)
{
  int v3; // esi
  int v4; // ebp
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // esi
  struct tagPOINT Point; // [esp+1Ch] [ebp-38h] BYREF
  int v10; // [esp+24h] [ebp-30h] BYREF
  LONG y; // [esp+28h] [ebp-2Ch]
  int v12; // [esp+2Ch] [ebp-28h]
  int v13; // [esp+30h] [ebp-24h]
  int v14; // [esp+34h] [ebp-20h] BYREF
  LONG v15; // [esp+38h] [ebp-1Ch]
  int v16; // [esp+3Ch] [ebp-18h]
  int v17; // [esp+40h] [ebp-14h]
  struct tagRECT Rect; // [esp+44h] [ebp-10h] BYREF

  if ( !this->q53A5 || !MEMORY[0xA8E9A0] || !MEMORY[0xA8ED5C] ) /*0x6a7109*/
    goto LABEL_25; /*0x6a7109*/
  GetClientRect(g_hWnd, &Rect); /*0x6a711b*/
  Point.x = Rect.left; /*0x6a7129*/
  Point.y = Rect.top; /*0x6a7137*/
  ClientToScreen(g_hWnd, &Point); /*0x6a713d*/
  if ( MEMORY[0xB0B518] || a2 ) /*0x6a7153*/
  {
    MEMORY[0xB0B518] = 1; /*0x6a723a*/
    goto LABEL_13; /*0x6a723a*/
  }
  MEMORY[0xB0B518] = 0; /*0x6a7166*/
  if ( MEMORY[0x8809F4] != MEMORY[0xB07DC8]
    || MEMORY[0x8809F8] != MEMORY[0xB07DCC]
    || MEMORY[0x8809FC] != MEMORY[0xB07DD0]
    || MEMORY[0x880A00] != MEMORY[0xB07DD4] )
  {
LABEL_13:
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)MEMORY[0x887640] + 60))(MEMORY[0x887640], MEMORY[0x887300], 1); /*0x6a7241*/
    if ( MEMORY[0x8809F4] == MEMORY[0xB07DC8]
      && MEMORY[0x8809F8] == MEMORY[0xB07DCC]
      && MEMORY[0x8809FC] == MEMORY[0xB07DD0]
      && MEMORY[0x880A00] == MEMORY[0xB07DD4]
      && !a2 )
    {
      if ( this->q53A8 )
      {
        y = Point.y; /*0x6a72d1*/
        v10 = Point.x + (MEMORY[0xA8EB7C] != 0 ? MEMORY[0x886FA8] : 0);
        v14 = 0; /*0x6a72f3*/
        v15 = 0; /*0x6a72f7*/
        v16 = MEMORY[0x886F98]; /*0x6a72fb*/
        v17 = 16; /*0x6a72ff*/
        v12 = MEMORY[0x886F98]; /*0x6a7303*/
        v13 = 16; /*0x6a7307*/
        (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x6a7312*/
          MEMORY[0x887308],
          &v10,
          MEMORY[0x887300],
          &v14,
          0,
          1);
        this->q53A8 = 0; /*0x6a7315*/
      }
      v3 = MEMORY[0x886F98]; /*0x6a7332*/
      v17 = MEMORY[0x886F9C]; /*0x6a733e*/
      v14 = 0; /*0x6a7348*/
      v4 = MEMORY[0x886F94] + Point.y; /*0x6a734e*/
      v15 = MEMORY[0x886F94]; /*0x6a7357*/
      v16 = MEMORY[0x886F98]; /*0x6a735b*/
      v5 = (MEMORY[0xA8EB7C] != 0 ? MEMORY[0x886FA8] : 0) + Point.x;
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887300] + 128))(MEMORY[0x887300]); /*0x6a7363*/
      v10 = v5; /*0x6a7386*/
      y = v4; /*0x6a738a*/
      v12 = v3; /*0x6a738e*/
      v13 = v6 - MEMORY[0x886F94]; /*0x6a7392*/
      (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x6a739d*/
        MEMORY[0x887308],
        &v10,
        MEMORY[0x887300],
        &v14,
        0,
        1);
    }
    else if ( MEMORY[0xB0B518] )
    {
      v7 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)MEMORY[0x887300] + 120))(MEMORY[0x887300], &v10); /*0x6a73be*/
      v14 = 0; /*0x6a73dd*/
      v15 = 0; /*0x6a73e5*/
      v16 = *(_DWORD *)(v7 + 8); /*0x6a73ec*/
      v8 = *(_DWORD *)(v7 + 12); /*0x6a73f0*/
      y = Point.y; /*0x6a73fd*/
      v10 = Point.x + (MEMORY[0xA8EB7C] != 0 ? MEMORY[0x886FA8] : 0);
      v17 = v8; /*0x6a741b*/
      v12 = v16; /*0x6a741f*/
      v13 = v8; /*0x6a7423*/
      (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x6a742e*/
        MEMORY[0x887308],
        &v10,
        MEMORY[0x887300],
        &v14,
        0,
        1);
    }
    else
    {
      v15 = Point.y + MEMORY[0x8809F8]; /*0x6a7458*/
      v14 = Point.x + MEMORY[0x8809F4] + (MEMORY[0xA8EB7C] != 0 ? MEMORY[0x886FA8] : 0);
      v16 = MEMORY[0x8809FC]; /*0x6a746f*/
      v17 = MEMORY[0x880A00]; /*0x6a7473*/
      (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x6a747e*/
        MEMORY[0x887308],
        &v14,
        MEMORY[0x887300],
        &MEMORY[0x8809F4],
        0,
        1);
    }
    goto LABEL_24; /*0x6a73a0*/
  }
  if ( this->q53A8 )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)MEMORY[0x887640] + 60))(MEMORY[0x887640], MEMORY[0x887300], 1); /*0x6a71c7*/
    v15 = Point.y; /*0x6a71eb*/
    v14 = Point.x + (MEMORY[0xA8EB7C] != 0 ? MEMORY[0x886FA8] : 0);
    v10 = 0; /*0x6a720d*/
    y = 0; /*0x6a7211*/
    v12 = MEMORY[0x886F98]; /*0x6a7215*/
    v13 = 16; /*0x6a7219*/
    v16 = MEMORY[0x886F98]; /*0x6a721d*/
    v17 = 16; /*0x6a7221*/
    (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x6a722c*/
      MEMORY[0x887308],
      &v14,
      MEMORY[0x887300],
      &v10,
      0,
      1);
    this->q53A8 = 0; /*0x6a722f*/
LABEL_24:
    MEMORY[0xB0B519] = 1; /*0x6a7481*/
  }
LABEL_25:
  MEMORY[0xB0B518] = 0; /*0x6a7488*/
}


// ==== 0x006A74A0  ObjectClass::method_6A74A0  this=SidebarClass  sig=csp ====
int __thiscall sub_6A74A0(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ebp

  this->q539C = a2; /*0x6a74b6*/
  GadgetClass::Show((_BYTE *)&MEMORY[0xB07C48] + 96 * a2); /*0x6a74bc*/
  v3 = (int)(this + 997 * this->q539C + 1361); /*0x6a74d4*/
  *((_BYTE *)this + 3988 * this->q539C + 5472) = 1; /*0x6a74db*/
  v4 = 26; /*0x6a74ed*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6a74e5*/
    v4 = 18; /*0x6a74f4*/
  v5 = 0; /*0x6a7507*/
  v6 = 2 * ((MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v4 + MEMORY[0x886F94] - 7) / 50); /*0x6a7527*/
  if ( v6 > 0 ) /*0x6a752b*/
  {
    do /*0x6a7570*/
    {
      Hash::Reset((_DWORD *)(56 * (v5 + 60 * *(_DWORD *)(v3 + 56)) + 11566720)); /*0x6a7545*/
      Hash::InsertOrdered(&MEMORY[0x87F7E8], 56 * (v5 + 60 * *(_DWORD *)(v3 + 56)) + 11566720); /*0x6a7568*/
      ++v5; /*0x6a756d*/
    }
    while ( v5 < v6 ); /*0x6a7570*/
  }
  MEMORY[0x884B8F] = 1; /*0x6a7574*/
  return Tactical::UpdateUIVisibility(this); /*0x6a7580*/
}


// ==== 0x006A7590  SidebarClass::SwitchTab  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass_SwitchTab(int this, int a2)
{
  int result; // eax
  int v4; // esi
  int v5; // edi
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // ebx

  result = *(_DWORD *)(this + 21404); /*0x6a7598*/
  if ( a2 != result ) /*0x6a75a0*/
  {
    GadgetClass::Hide((_BYTE *)&MEMORY[0xB07C48] + 96 * result); /*0x6a75b4*/
    v4 = 0; /*0x6a75c6*/
    v5 = this + 3988 * *(_DWORD *)(this + 21404) + 5444; /*0x6a75ce*/
    *(_BYTE *)(this + 3988 * *(_DWORD *)(this + 21404) + 5472) = 0; /*0x6a75d5*/
    do /*0x6a7600*/
    {
      Tactical::SelectObject(&MEMORY[0x87F7E8], 56 * (v4 + 60 * *(_DWORD *)(v5 + 56)) + 11566720); /*0x6a75f7*/
      ++v4; /*0x6a75fc*/
    }
    while ( v4 < 60 ); /*0x6a7600*/
    *(_DWORD *)(this + 21404) = a2; /*0x6a7605*/
    GadgetClass::Show((_BYTE *)&MEMORY[0xB07C48] + 96 * a2); /*0x6a7614*/
    v6 = this + 3988 * *(_DWORD *)(this + 21404) + 5444; /*0x6a762c*/
    *(_BYTE *)(this + 3988 * *(_DWORD *)(this + 21404) + 5472) = 1; /*0x6a7633*/
    v7 = 26; /*0x6a7645*/
    if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6a763d*/
      v7 = 18; /*0x6a764c*/
    v8 = 0; /*0x6a765f*/
    v9 = 2 * ((MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v7 + MEMORY[0x886F94] - 7) / 50); /*0x6a767f*/
    if ( v9 > 0 ) /*0x6a7683*/
    {
      do /*0x6a76c8*/
      {
        Hash::Reset((_DWORD *)(56 * (v8 + 60 * *(_DWORD *)(v6 + 56)) + 11566720)); /*0x6a769d*/
        Hash::InsertOrdered(&MEMORY[0x87F7E8], 56 * (v8 + 60 * *(_DWORD *)(v6 + 56)) + 11566720); /*0x6a76c0*/
        ++v8; /*0x6a76c5*/
      }
      while ( v8 < v9 ); /*0x6a76c8*/
    }
    MEMORY[0x884B8F] = 1; /*0x6a76cc*/
    result = Tactical::UpdateUIVisibility((_DWORD *)this); /*0x6a76d3*/
    *(_BYTE *)(this + 21415) = 1; /*0x6a76d9*/
  }
  return result; /*0x6a76e1*/
}


// ==== 0x006A7780  SidebarClass::UpdateStrips  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::UpdateStrips(char *this, TabClass *aP1, _DWORD *a2)
{
  int v4; // ecx
  char *v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  char v10; // cl
  char v11; // al
  int v12; // eax
  int v13; // ebp
  int v14; // eax
  int v15; // edi
  char *v16; // ebx
  char *v17; // ebp
  int v18; // eax
  int v19; // edi
  int v20; // ebx
  char v21; // bl
  SidebarClass *v22; // edi
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // edx
  char *v28; // eax
  int v29; // edx
  char *v30; // edi
  int v31; // eax
  int v32; // edx
  int v33; // [esp+14h] [ebp-10h]
  int playerSideIndex; // [esp+18h] [ebp-Ch]
  _DWORD v35[2]; // [esp+1Ch] [ebp-8h] BYREF

  v4 = a2[1]; /*0x6a7795*/
  v35[0] = *a2 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8516]; /*0x6a7798*/
  v35[1] = v4; /*0x6a77a4*/
  if ( !MEMORY[0xA8D63C].__pad_14B0[639] ) /*0x6a77a8*/
  {
    (*(void (__thiscall **)(char *, int))(this->q0D8)(this, 1); /*0x6a77b0*/
    v5 = this + 5444; /*0x6a77b6*/
    v6 = 4; /*0x6a77bc*/
    do /*0x6a77d9*/
    {
      SidebarClass::UpdateCameos(v5, (int)aP1, (int)v35); /*0x6a77cd*/
      v5 += 3988; /*0x6a77d2*/
      --v6; /*0x6a77d8*/
    }
    while ( v6 ); /*0x6a77d9*/
  }
  if ( this->q53A5 ) /*0x6a77db*/
  {
    v7 = this->q14E6; /*0x6a77e9*/
    if ( v7 == 1 ) /*0x6a77f2*/
    {
      v8 = this->q14E5 + 1; /*0x6a77fa*/
      this->q14E5 = v8; /*0x6a77fb*/
      if ( v8 <= *(__int16 *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[10192] + 6) ) /*0x6a780f*/
        goto LABEL_11; /*0x6a780f*/
    }
    else
    {
      if ( v7 != -1 ) /*0x6a7816*/
        goto LABEL_11; /*0x6a7816*/
      v9 = this->q14E5 - 1; /*0x6a781e*/
      this->q14E5 = v9; /*0x6a781f*/
      if ( v9 >= 0 ) /*0x6a7825*/
        goto LABEL_11; /*0x6a7825*/
    }
    this->q14E6 = 0; /*0x6a7829*/
    this->q14E5 = 0; /*0x6a782f*/
LABEL_11:
    v10 = this->q5514; /*0x6a7835*/
    this->q5514 = *(_DWORD *)&HouseClass_Player->__pad_2B8[56] > 0; /*0x6a7866*/
    if ( v10 != this->q5514 ) /*0x6a7873*/
    {
      (*(void (__thiscall **)(char *, _DWORD))(this->SidebarClass_field_0x38)(this, 0); /*0x6a787b*/
      v11 = this->q5514; /*0x6a787e*/
      this->q53A6 = 1; /*0x6a7884*/
      if ( !v11 ) /*0x6a788d*/
        (*(void (__thiscall **)(char *, _DWORD, _DWORD))(this->q048)(this, 0, 0); /*0x6a7897*/
    }
    v12 = aP1->field_0; /*0x6a789f*/
    if ( aP1->field_0 == 32870 ) /*0x6a78a6*/
    {
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 392), 0x2000, 1.0, 0); /*0x6a78bf*/
      BuildingClass::TogglePower(this, (IUnknown *)0xFFFFFFFF); /*0x6a78c8*/
      goto LABEL_32; /*0x6a78cd*/
    }
    if ( v12 == 32869 ) /*0x6a78d7*/
    {
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 392), 0x2000, 1.0, 0); /*0x6a78f1*/
      BuildingClass::TogglePower2(this, (IUnknown *)0xFFFFFFFF); /*0x6a78fa*/
      goto LABEL_32; /*0x6a78ff*/
    }
    if ( v12 >= 32971 && v12 < 32975 ) /*0x6a7914*/
    {
      v13 = v12 - 32971; /*0x6a791a*/
      v14 = this->q539C; /*0x6a7920*/
      if ( v13 != v14 ) /*0x6a7928*/
      {
        GadgetClass::Hide(&MEMORY[0xB077F8].__pad_430[96 * v14 + 32]); /*0x6a793a*/
        v15 = 0; /*0x6a794c*/
        v16 = this + 3988 * this->q539C + 5444; /*0x6a7954*/
        *(this + 3988 * this->q539C + 5472) = 0; /*0x6a795b*/
        do /*0x6a7986*/
        {
          Tactical::SelectObject(&MEMORY[0x87F7E8], 56 * (v15 + 60 * *((_DWORD *)v16 + 14)) + 11566720); /*0x6a797d*/
          ++v15; /*0x6a7982*/
        }
        while ( v15 < 60 ); /*0x6a7986*/
        this->q539C = v13; /*0x6a798c*/
        GadgetClass::Show(&MEMORY[0xB077F8].__pad_430[96 * v13 + 32]); /*0x6a799b*/
        v17 = this + 3988 * this->q539C + 5444; /*0x6a79b3*/
        *(this + 3988 * this->q539C + 5472) = 1; /*0x6a79ba*/
        v18 = 26; /*0x6a79cc*/
        if ( MEMORY[0xA8B230]->playerSideIndex ) /*0x6a79c4*/
          v18 = 18; /*0x6a79d3*/
        v19 = 0; /*0x6a79ed*/
        v20 = 2 /*0x6a7a06*/
            * ((*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8528]
              - v18
              - *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[10320]
              + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8520]
              - 7)
             / 50);
        if ( v20 > 0 ) /*0x6a7a0a*/
        {
          do /*0x6a7a4f*/
          {
            Hash::Reset((_DWORD *)(56 * (v19 + 60 * *((_DWORD *)v17 + 14)) + 11566720)); /*0x6a7a24*/
            Hash::InsertOrdered(&MEMORY[0x87F7E8], 56 * (v19 + 60 * *((_DWORD *)v17 + 14)) + 11566720); /*0x6a7a47*/
            ++v19; /*0x6a7a4c*/
          }
          while ( v19 < v20 ); /*0x6a7a4f*/
        }
        MEMORY[0x87F8E4].__pad_125C[16463] = 1; /*0x6a7a53*/
        Tactical::UpdateUIVisibility(this); /*0x6a7a5a*/
        this->q53A7 = 1; /*0x6a7a5f*/
      }
      goto LABEL_31; /*0x6a7a5f*/
    }
    v24 = *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[9892]; /*0x6a7b18*/
    BYTE1(v12) &= ~0x40u; /*0x6a7b1e*/
    BYTE1(v24) = MEMORY[0xB077F8].__pad_14B0[9893] | 0x80; /*0x6a7b21*/
    if ( v12 == v24 ) /*0x6a7b26*/
    {
      MEMORY[0xB077F8].__pad_14B0[9900] = 0; /*0x6a7b2c*/
      playerSideIndex = MEMORY[0xA8B230]->playerSideIndex; /*0x6a7b5d*/
      v25 = 26; /*0x6a7b63*/
      if ( playerSideIndex ) /*0x6a7b68*/
        v25 = 18; /*0x6a7b6a*/
      v33 = (*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8528] /*0x6a7ba9*/
           - v25
           - *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[10320]
           + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8520]
           - 7)
          / 50;
      if ( HouseClass_Player == (IUnknown *)*(&g_MatrixTransformState + 2274) ) /*0x6a7bad*/
        v33 = 1; /*0x6a7baf*/
      v26 = 26; /*0x6a7bbd*/
      if ( playerSideIndex ) /*0x6a7bc2*/
        v26 = 18; /*0x6a7bc4*/
      v27 = (*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8528] /*0x6a7be5*/
           - v26
           - *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[10320]
           + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8520]
           - 7)
          / 50;
      if ( HouseClass_Player == (IUnknown *)*(&g_MatrixTransformState + 2274) ) /*0x6a7be9*/
      {
        v28 = this + 3988 * this->q539C + 5444; /*0x6a7bf8*/
        if ( *((_DWORD *)this + 997 * this->q539C + 1378) + v27 / 2 < *(int *)&MEMORY[0x87F8E4].__pad_125C[16824] ) /*0x6a7c03*/
          goto LABEL_56; /*0x6a7c03*/
      }
      else
      {
        v28 = this + 3988 * this->q539C + 5444; /*0x6a7c07*/
        if ( 2 * (v27 + *((_DWORD *)v28 + 17)) < *((_DWORD *)v28 + 21) ) /*0x6a7c17*/
        {
LABEL_56:
          *((_DWORD *)v28 + 18) += v33; /*0x6a7c19*/
          PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 400), 0x2000, 1.0, 0); /*0x6a7c3d*/
          goto LABEL_32; /*0x6a7c3d*/
        }
      }
    }
    else
    {
      v29 = *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[10116]; /*0x6a7c5e*/
      BYTE1(v29) = MEMORY[0xB077F8].__pad_14B0[10117] | 0x80; /*0x6a7c64*/
      if ( v12 != v29 ) /*0x6a7c69*/
        goto LABEL_32; /*0x6a7c69*/
      MEMORY[0xB077F8].__pad_14B0[10124] = 0; /*0x6a7c6f*/
      v31 = 26; /*0x6a7c9e*/
      if ( MEMORY[0xA8B230]->playerSideIndex ) /*0x6a7c96*/
        v31 = 18; /*0x6a7ca5*/
      v32 = (*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8528] /*0x6a7cd7*/
           - v31
           - *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[10320]
           + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8520]
           - 7)
          / 50;
      if ( HouseClass_Player == (IUnknown *)*(&g_MatrixTransformState + 2274) ) /*0x6a7ce1*/
        v32 = 1; /*0x6a7ce3*/
      if ( *((_DWORD *)this + 997 * this->q539C + 1378) ) /*0x6a7ce8*/
      {
        v30 = this + 3988 * this->q539C + 5444; /*0x6a7c8f*/
        *((_DWORD *)v30 + 18) -= v32; /*0x6a7cef*/
LABEL_31:
        PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 400), 0x2000, 1.0, 0); /*0x6a7a66*/
        goto LABEL_32; /*0x6a7a7d*/
      }
    }
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1792), 0x2000, 1.0, 0); /*0x6a7d0f*/
LABEL_32:
    v21 = 0; /*0x6a7a82*/
    v22 = (SidebarClass *)&MEMORY[0xB077F8].__pad_430[32]; /*0x6a7a84*/
    do /*0x6a7aa0*/
    {
      if ( SidebarClass::updateFlashTimer((int)v22) ) /*0x6a7a8c*/
        v21 = 1; /*0x6a7a95*/
      v22 = (SidebarClass *)((char *)v22 + 96); /*0x6a7a97*/
    }
    while ( (int)v22 < (int)&MEMORY[0xB077F8].__pad_524[172] ); /*0x6a7aa0*/
    if ( v21 ) /*0x6a7aa4*/
    {
      this->q53A6 = 1; /*0x6a7aa6*/
      MEMORY[0xB077F8].__pad_14B0[10352] = 1; /*0x6a7aad*/
      MEMORY[0x87F8E4].__pad_125C[16463] = 1; /*0x6a7ab4*/
      (*(void (__thiscall **)(char *, _DWORD))(this->SidebarClass_field_0x38)(this, 0); /*0x6a7ac1*/
    }
  }
  if ( !this->q11B1 && MEMORY[0xB077F8].__pad_524[265] ) /*0x6a7ad5*/
    GadgetClass::Hide(&MEMORY[0xB077F8].__pad_524[220]); /*0x6a7adc*/
  if ( !this->q11B0 && MEMORY[0xB077F8].__pad_14B0[10021] ) /*0x6a7af2*/
    GadgetClass::Hide(&MEMORY[0xB077F8].__pad_14B0[9976]); /*0x6a7af9*/
  return PowerClass::updatePowerBarAnimation((int)this, (SidebarClass *)aP1, a2); /*0x6a7b0f*/
}


// ==== 0x006A7D20  HouseClass::UpdateAllProductionTabs  this=HouseClass  sig=csp ====
char __thiscall sub_6A7D20(char *this)
{
  char v2; // bl
  int v3; // esi
  _BYTE *v4; // edi
  char result; // al
  int v6; // eax

  v2 = 0; /*0x6a7d26*/
  v3 = 0; /*0x6a7d28*/
  v4 = this + 5504; /*0x6a7d2a*/
  do /*0x6a7d53*/
  {
    result = SidebarClass::UpdateProduction((int)(v4 - 60)); /*0x6a7d33*/
    if ( result && v3 == this->q14E7 ) /*0x6a7d42*/
    {
      *v4 = 1; /*0x6a7d44*/
      v2 = 1; /*0x6a7d47*/
    }
    ++v3; /*0x6a7d49*/
    v4 += 3988; /*0x6a7d4a*/
  }
  while ( v3 < 4 ); /*0x6a7d53*/
  if ( v2 ) /*0x6a7d57*/
  {
    v6 = *(_DWORD *)this; /*0x6a7d59*/
    this->q53A6 = 1; /*0x6a7d60*/
    return (*(int (__thiscall **)(char *, _DWORD))(v6 + 56))(this, 0); /*0x6a7d67*/
  }
  return result; /*0x6a7d6a*/
}


// ==== 0x006A7D70  SidebarClass::ToggleSidebarDisplay  this=SidebarClass  sig=csp ====
unsigned __int8 ObjectClass::ToggleSidebarDisplay(
        _DWORD *a0,
        TabClass *aP1,
        int a3,
        int _20,
        SidebarClass *a4,
        char a6)
{
  SidebarClass *v6; // ecx
  SidebarClass *v7; // esi
  unsigned __int8 result; // al
  SidebarClass *v9; // ecx
  unsigned __int8 bl7; // bl
  LinkClass *v10; // edi
  GadgetClass *v11; // edi
  int *v13; // ebx
  char *v14; // ebp
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  char *v18; // edi
  int v19; // edi
  char *v20; // ebp

  v7 = v6; /*0x6a7d71*/
  result = v6->__pad_34BC[7913]; /*0x6a7d79*/
  if ( (HouseClass_Player.__pad_5568[17220] & 2) != 0 /*0x6a7d91*/
    && *(_DWORD *)&HouseClass_Player.__pad_5568[8068]
    && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 5 )
  {
    return result; /*0x6a7d91*/
  }
  v9 = (SidebarClass *)a0; /*0x6a7d97*/
  if ( a0 == (_DWORD *)-1 ) /*0x6a7d9e*/
    v7->__pad_34BC[7913] = result == 0; /*0x6a7db3*/
  else
    v7->__pad_34BC[7913] = a0 == (_DWORD *)1; /*0x6a7da6*/
  LOBYTE(v9) = v7->__pad_34BC[7913]; /*0x6a7db9*/
  bl7 = (_BYTE)v9 != result; /*0x6a7dc2*/
  if ( (_BYTE)v9 == result ) /*0x6a7dcb*/
    return bl7; /*0x6a8078*/
  ObjectClass::resetObjectState(&v7->field_0, v9); /*0x6a7dd6*/
  if ( !v7->__pad_34BC[7913] ) /*0x6a7de3*/
  {
    AsyncIO::Shutdown(); /*0x6a7fc3*/
    (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, &stru_B05488.__pad_14B0[5312]); /*0x6a7fd1*/
    (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, &stru_B05488.__pad_579C[1916]); /*0x6a7fdd*/
    (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, &stru_B05488.__pad_14B0[5408]); /*0x6a7fe9*/
    v18 = &stru_B05488.__pad_14B0[4880]; /*0x6a7fec*/
    do /*0x6a8002*/
    {
      (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, v18); /*0x6a7ff6*/
      v18 += 96; /*0x6a7ff9*/
    }
    while ( (int)v18 < (int)&stru_B05488.__pad_14B0[5264] ); /*0x6a8002*/
    (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, &stru_B05488.__pad_579C[1796]); /*0x6a800d*/
    (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, &stru_B05488.__pad_579C[2020]); /*0x6a8019*/
    v19 = 0; /*0x6a8029*/
    v20 = &v7->__pad_CD2[3988 * *(_DWORD *)&v7->__pad_34BC[7904] + 2162]; /*0x6a8031*/
    do /*0x6a805f*/
    {
      Tactical::SelectObject(&stru_87C374.__pad_14B0[8132], 56 * (v19 + 60 * *((_DWORD *)v20 + 14)) + 11566720); /*0x6a8056*/
      ++v19; /*0x6a805b*/
    }
    while ( v19 < 60 ); /*0x6a805f*/
    (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, &stru_B048F8.__pad_6[274]); /*0x6a806a*/
    (*(void (__thiscall **)(SidebarClass *, int))(v7->field_0 + 56))(v7, 2); /*0x6a8073*/
    return bl7; /*0x6a8073*/
  }
  (*(void (__thiscall **)(SidebarClass *))(v7->field_0 + 136))(v7); /*0x6a7ded*/
  v7->__pad_34BC[7914] = 1; /*0x6a7df8*/
  Hash::Reset(&stru_B05488.__pad_14B0[5312]); /*0x6a7dff*/
  (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 48))(v7, &stru_B05488.__pad_14B0[5312]); /*0x6a7e0d*/
  Hash::Reset(&stru_B05488.__pad_579C[1916]); /*0x6a7e15*/
  (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 48))(v7, &stru_B05488.__pad_579C[1916]); /*0x6a7e23*/
  v10 = (LinkClass *)&stru_B05488.__pad_14B0[4880]; /*0x6a7e26*/
  do /*0x6a7e47*/
  {
    Hash::Reset(v10); /*0x6a7e2d*/
    LOBYTE(v10[2].LinkClass_field_0C) = 0; /*0x6a7e32*/
    (*(void (__thiscall **)(SidebarClass *, LinkClass *))(v7->field_0 + 48))(v7, v10); /*0x6a7e3b*/
    v10 += 6; /*0x6a7e3e*/
  }
  while ( (int)v10 < (int)&stru_B05488.__pad_14B0[5264] ); /*0x6a7e47*/
  Hash::Reset(&stru_B05488.__pad_579C[1796]); /*0x6a7e4e*/
  Hash::InsertOrdered(&stru_87C374.__pad_14B0[8132], (int)&stru_B05488.__pad_579C[1796]); /*0x6a7e5d*/
  Hash::Reset(&stru_B05488.__pad_579C[2020]); /*0x6a7e67*/
  Hash::InsertOrdered(&stru_87C374.__pad_14B0[8132], (int)&stru_B05488.__pad_579C[2020]); /*0x6a7e76*/
  Hash::Reset(&stru_B05488.__pad_14B0[5408]); /*0x6a7e80*/
  (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 48))(v7, &stru_B05488.__pad_14B0[5408]); /*0x6a7e8e*/
  Hash::Reset(&stru_B048F8.__pad_6[274]); /*0x6a7e96*/
  (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 48))(v7, &stru_B048F8.__pad_6[274]); /*0x6a7ea4*/
  v11 = (GadgetClass *)&stru_B05488.__pad_14B0[4880]; /*0x6a7ea7*/
  v13 = (int *)&v7->__pad_1548[80]; /*0x6a7eac*/
  do /*0x6a7ed5*/
  {
    *(v13 - 4) = 0; /*0x6a7eb2*/
    if ( *v13 > 0 ) /*0x6a7ebd*/
      DialogControl::Hide(v11); /*0x6a7ec1*/
    v11 = (GadgetClass *)((char *)v11 + 96); /*0x6a7ec6*/
    v13 += 997; /*0x6a7ec9*/
  }
  while ( (int)v11 < (int)&stru_B05488.__pad_14B0[5264] ); /*0x6a7ed5*/
  GadgetClass::Show(&stru_B05488.__pad_14B0[96 * *(_DWORD *)&v7->__pad_34BC[7904] + 4880]); /*0x6a7ee9*/
  v14 = &v7->__pad_CD2[3988 * *(_DWORD *)&v7->__pad_34BC[7904] + 2162]; /*0x6a7f01*/
  v7->__pad_1548[3988 * *(_DWORD *)&v7->__pad_34BC[7904] + 24] = 1; /*0x6a7f08*/
  v15 = 26; /*0x6a7f1a*/
  if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13496) ) /*0x6a7f12*/
    v15 = 18; /*0x6a7f21*/
  v16 = 0; /*0x6a7f34*/
  v17 = 2 /*0x6a7f54*/
      * ((*(_DWORD *)&stru_87C374.__pad_579C[21644]
        - *(_DWORD *)&stru_B05488.__pad_579C[2260]
        - v15
        + *(_DWORD *)&stru_87C374.__pad_579C[21636]
        - 7)
       / 50);
  if ( v17 > 0 ) /*0x6a7f58*/
  {
    do /*0x6a7f9d*/
    {
      Hash::Reset((_DWORD *)(56 * (v16 + 60 * *((_DWORD *)v14 + 14)) + 11566720)); /*0x6a7f72*/
      Hash::InsertOrdered(&stru_87C374.__pad_14B0[8132], 56 * (v16 + 60 * *((_DWORD *)v14 + 14)) + 11566720); /*0x6a7f95*/
      ++v16; /*0x6a7f9a*/
    }
    while ( v16 < v17 ); /*0x6a7f9d*/
  }
  stru_87C374.__pad_579C[12415] = 1; /*0x6a7fa1*/
  Tactical::UpdateUIVisibility(v7); /*0x6a7fa8*/
  (*(void (__thiscall **)(SidebarClass *, int))(v7->field_0 + 56))(v7, 2); /*0x6a7fb7*/
  return (unsigned __int8)aP1; /*0x6a7fbf*/
}


// ==== 0x006A80A0  TabClass::updateTabProduction  this=HouseClass  sig=csp ====
_BYTE *__thiscall sub_6A80A0(_BYTE *this, int a2)
{
  _BYTE *result; // eax
  wchar_t *v3; // ecx
  int v4; // esi
  _BYTE *v5; // ecx
  int v6; // esi
  wchar_t *v7; // edi
  _DWORD *v8; // ecx
  int v9; // esi

  result = this; /*0x6a80a0*/
  *(_DWORD *)this = 0; /*0x6a80aa*/
  this->vtable2 = 0; /*0x6a80ac*/
  v3 = MEMORY[0xA8ED84]; /*0x6a80af*/
  *((_DWORD *)result + 4) = 0; /*0x6a80b5*/
  *((_DWORD *)result + 2) = v3; /*0x6a80b8*/
  *((_DWORD *)result + 5) = 0; /*0x6a80bc*/
  *((_DWORD *)result + 6) = 1; /*0x6a80bf*/
  *((_DWORD *)result + 8) = 0; /*0x6a80c2*/
  *((_DWORD *)result + 9) = 0; /*0x6a80c5*/
  *((_DWORD *)result + 10) = MEMORY[0xB07DC8]; /*0x6a80d2*/
  *((_DWORD *)result + 11) = MEMORY[0xB07DCC]; /*0x6a80da*/
  *((_DWORD *)result + 12) = MEMORY[0xB07DD0]; /*0x6a80e3*/
  v4 = MEMORY[0xB07DD4]; /*0x6a80e6*/
  *((_DWORD *)result + 14) = 0; /*0x6a80ec*/
  result[60] = 1; /*0x6a80ef*/
  *((_DWORD *)result + 13) = v4; /*0x6a80f2*/
  result[61] = 0; /*0x6a80f5*/
  result[62] = 0; /*0x6a80f8*/
  result[63] = 0; /*0x6a80fb*/
  *((_DWORD *)result + 16) = -1; /*0x6a80fe*/
  *((_DWORD *)result + 17) = 0; /*0x6a8105*/
  *((_DWORD *)result + 18) = 0; /*0x6a8108*/
  *((_DWORD *)result + 19) = 0; /*0x6a810b*/
  *((_DWORD *)result + 20) = 0; /*0x6a810e*/
  *((_DWORD *)result + 21) = 0; /*0x6a8111*/
  v5 = result + 112; /*0x6a8114*/
  v6 = 75; /*0x6a8117*/
  do /*0x6a8137*/
  {
    *((_DWORD *)v5 - 1) = 0; /*0x6a811c*/
    *v5 = 0; /*0x6a811f*/
    v7 = MEMORY[0xA8ED84]; /*0x6a8121*/
    *((_DWORD *)v5 + 3) = 0; /*0x6a8127*/
    *((_DWORD *)v5 + 1) = v7; /*0x6a812a*/
    *((_DWORD *)v5 + 4) = 0; /*0x6a812d*/
    *((_DWORD *)v5 + 5) = 1; /*0x6a8130*/
    v5 += 52; /*0x6a8133*/
    --v6; /*0x6a8136*/
  }
  while ( v6 ); /*0x6a8137*/
  v8 = result + 92; /*0x6a8139*/
  v9 = 75; /*0x6a813c*/
  do /*0x6a8150*/
  {
    *(v8 - 1) = 0; /*0x6a8141*/
    *v8 = 0; /*0x6a8144*/
    v8[1] = 0; /*0x6a8146*/
    v8[2] = 0; /*0x6a8149*/
    v8 += 13; /*0x6a814c*/
    --v9; /*0x6a814f*/
  }
  while ( v9 ); /*0x6a8150*/
  return result; /*0x6a8152*/
}


// ==== 0x006A81B0  HouseClass::ClearProductionQueue  this=HouseClass  sig=csp ====
_DWORD *__thiscall sub_6A81B0(int this)
{
  _DWORD *result; // eax
  int v2; // esi
  wchar_t *v3; // ecx
  wchar_t **v4; // ebx
  wchar_t *v5; // [esp+10h] [ebp-8h]

  *(_BYTE *)(this + 62) = 0; /*0x6a81b5*/
  *(_BYTE *)(this + 63) = 0; /*0x6a81b8*/
  *(_BYTE *)(this + 61) = 0; /*0x6a81c2*/
  *(_DWORD *)(this + 64) = -1; /*0x6a81c5*/
  *(_DWORD *)(this + 68) = 0; /*0x6a81cc*/
  *(_DWORD *)(this + 76) = 0; /*0x6a81cf*/
  *(_DWORD *)(this + 84) = 0; /*0x6a81d2*/
  result = (_DWORD *)(this + 128); /*0x6a81d5*/
  v2 = 75; /*0x6a81db*/
  do /*0x6a820c*/
  {
    *(result - 10) = 0; /*0x6a81e0*/
    *(result - 9) = 0; /*0x6a81e3*/
    *(result - 8) = 0; /*0x6a81e6*/
    *(result - 7) = 0; /*0x6a81e9*/
    *(result - 6) = 0; /*0x6a81ec*/
    v3 = MEMORY[0xA8ED84]; /*0x6a81ef*/
    v4 = (wchar_t **)(result - 3); /*0x6a81f5*/
    *result = 0; /*0x6a81f8*/
    result += 13; /*0x6a81fa*/
    --v2; /*0x6a81fd*/
    *v4 = v3; /*0x6a81fe*/
    v4[1] = v5; /*0x6a8200*/
    v4[2] = 0; /*0x6a8203*/
    *(result - 18) = 0; /*0x6a8206*/
    *(result - 11) = 0; /*0x6a8209*/
  }
  while ( v2 ); /*0x6a820c*/
  return result; /*0x6a820e*/
}


// ==== 0x006A8220  SidebarClass::InitCameoGrid  this=SidebarClass  sig=csp ====
int __thiscall sub_6A8220(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // edx
  int result; // eax
  int v5; // ebx
  int v6; // esi
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // ebp
  int v10; // edx
  int i; // [esp+4h] [ebp+4h]

  this->SidebarClass_field_0x38 = a2; /*0x6a8224*/
  v2 = 26; /*0x6a8235*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6a822d*/
    v2 = 18; /*0x6a823c*/
  v3 = (MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v2 + MEMORY[0x886F94] - 7) / 50; /*0x6a826b*/
  result = 0; /*0x6a826d*/
  v5 = v3; /*0x6a826f*/
  for ( i = 0; i < v5; ++i ) /*0x6a8277*/
  {
    v6 = 0; /*0x6a827f*/
    v7 = 2 * result; /*0x6a8281*/
    do /*0x6a830e*/
    {
      v8 = (_DWORD *)(56 * (v7 + 60 * this->SidebarClass_field_0x38) + 11566720); /*0x6a8299*/
      v8[9] = 202; /*0x6a82a0*/
      v8[3] = v6 * MEMORY[0xB0B4FC] + MEMORY[0x880D4C][997 * this->SidebarClass_field_0x38]; /*0x6a82c9*/
      v9 = i * MEMORY[0xB0B500]; /*0x6a82e2*/
      v10 = MEMORY[0x880D50][997 * this->SidebarClass_field_0x38]; /*0x6a82e7*/
      v8[12] = v7; /*0x6a82ee*/
      ++v6; /*0x6a82f1*/
      ++v7; /*0x6a82f2*/
      v8[4] = v10 + v9 + 1; /*0x6a82fa*/
      v8[5] = 60; /*0x6a82fd*/
      v8[6] = 48; /*0x6a8304*/
      v8[11] = this; /*0x6a830b*/
    }
    while ( v6 < 2 ); /*0x6a830e*/
    result = i + 1; /*0x6a8318*/
  }
  return result; /*0x6a8329*/
}


// ==== 0x006A8330  SidebarClass::RefreshCameoGrid  this=SidebarClass  sig=csp ====
char __thiscall sub_6A8330(_DWORD *this)
{
  int v2; // eax
  int v3; // esi
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ebx

  v2 = 26; /*0x6a8342*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6a8338*/
    v2 = 18; /*0x6a8349*/
  v3 = 0; /*0x6a8369*/
  v4 = MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v2 + MEMORY[0x886F94] - 7; /*0x6a836b*/
  v5 = (unsigned int)((unsigned __int64)(1374389535LL * v4) >> 32) >> 31; /*0x6a8376*/
  v6 = 2 * (v4 / 50); /*0x6a837d*/
  if ( v6 > 0 ) /*0x6a8381*/
  {
    do /*0x6a83ce*/
    {
      Hash::Reset((_DWORD *)(56 * (v3 + 60 * this->SidebarClass_field_0x38) + 11566720)); /*0x6a839f*/
      LOBYTE(v5) = Hash::InsertOrdered(&MEMORY[0x87F7E8], 56 * (v3 + 60 * this->SidebarClass_field_0x38) + 11566720); /*0x6a83c6*/
      ++v3; /*0x6a83cb*/
    }
    while ( v3 < v6 ); /*0x6a83ce*/
  }
  MEMORY[0x884B8F] = 1; /*0x6a83d2*/
  return v5; /*0x6a83d0*/
}


// ==== 0x006A83E0  SidebarClass::sortCameoList  this=SidebarClass  sig=csp ====
char __thiscall sub_6A83E0(_DWORD *this)
{
  int i; // esi
  char result; // al

  for ( i = 0; i < 60; ++i ) /*0x6a83e4*/
    result = Tactical::SelectObject(&MEMORY[0x87F7E8], 56 * (i + 60 * this->SidebarClass_field_0x38) + 11566720); /*0x6a8408*/
  return result; /*0x6a8413*/
}


// ==== 0x006A8420  RadarClass::GetBlip  this=ObjectClass  sig=csp ====
bool __stdcall RadarClass::GetBlip(int a1, int a2, int a3, ObjectClass *aP3)
{
  int v7; // edx
  bool v9; // al
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // esi
  const wchar_t *v14; // eax
  const wchar_t *v15; // ecx
  int v16; // edi
  int v17; // eax
  bool v18; // cl
  bool v19; // al
  char v20; // al
  char v21; // cl
  char v22; // al
  char v23; // al
  char v24; // dl
  _DWORD *v25; // ebp
  char v26; // cl
  bool v27; // al
  int v28; // eax
  int v29; // ecx
  IUnknown *v30; // esi
  int v31; // eax
  char v32; // [esp+13h] [ebp-9h]
  int v33; // [esp+14h] [ebp-8h]
  int v34; // [esp+18h] [ebp-4h]
  char v35; // [esp+20h] [ebp+4h]
  bool v36; // [esp+24h] [ebp+8h]
  char v37; // [esp+28h] [ebp+Ch]
  char aP3a; // [esp+2Ch] [ebp+10h]

  v33 = TechnoTypeClass::GetByTypeAndIndex(a1, a2); /*0x6a8444*/
  v7 = TechnoTypeClass::GetByTypeAndIndex(a3, (int)aP3); /*0x6a844d*/
  v34 = v7; /*0x6a8451*/
  if ( !a3 ) /*0x6a8455*/
    return 1; /*0x6a8460*/
  if ( a1 == 31 || a1 == 57 || (v35 = 0, a1 == 32) ) /*0x6a8475*/
    v35 = 1; /*0x6a8477*/
  v9 = a3 == 31 || a3 == 57 || a3 == 32; /*0x6a848f*/
  v36 = v9; /*0x6a8495*/
  if ( v35 ) /*0x6a849b*/
  {
    if ( v9 ) /*0x6a849f*/
    {
      v10 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20608] + 4 * a2); /*0x6a84ab*/
      v11 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20608] + 4 * (_DWORD)aP3); /*0x6a84ae*/
      v12 = *(_DWORD *)(v10 + 176); /*0x6a84b1*/
      v13 = *(_DWORD *)(v11 + 176); /*0x6a84b7*/
      if ( v12 < v13 ) /*0x6a84bf*/
        return 1; /*0x6a84ca*/
      if ( v12 > v13 ) /*0x6a84cd*/
        return 0; /*0x6a84d8*/
      v14 = *(const wchar_t **)(v10 + 96); /*0x6a84db*/
      v15 = *(const wchar_t **)(v11 + 96); /*0x6a84de*/
      return wcscmp(v14, v15) <= 0; /*0x6a84e1*/
    }
    goto LABEL_25; /*0x6a849f*/
  }
  if ( v9 ) /*0x6a84e8*/
  {
LABEL_25:
    v16 = v33; /*0x6a8536*/
    goto LABEL_26; /*0x6a8536*/
  }
  v16 = v33; /*0x6a84ef*/
  v17 = *(_DWORD *)(*(_DWORD *)(HouseClass_Player.field_0 + 52) + 188); /*0x6a84fc*/
  v18 = v17 == *(_DWORD *)(v33 + 1744); /*0x6a850a*/
  v19 = v17 == *(_DWORD *)(v7 + 1744); /*0x6a850f*/
  if ( v18 ) /*0x6a8514*/
  {
    if ( !v19 ) /*0x6a8518*/
      return 1; /*0x6a8523*/
  }
  else if ( v19 ) /*0x6a8528*/
  {
    return 0; /*0x6a8533*/
  }
LABEL_26:
  if ( a1 == 40 || a1 == 3 ) /*0x6a8542*/
  {
    v20 = 1; /*0x6a8564*/
    if ( *(_BYTE *)(v16 + 3478) ) /*0x6a855e*/
    {
      v21 = 1; /*0x6a856a*/
      v37 = 1; /*0x6a856c*/
      goto LABEL_30; /*0x6a8570*/
    }
  }
  else
  {
    v20 = 0; /*0x6a8544*/
  }
  v21 = 0; /*0x6a8546*/
  v37 = 0; /*0x6a854a*/
  if ( !v20 ) /*0x6a854e*/
  {
LABEL_34:
    v22 = 0; /*0x6a8572*/
    goto LABEL_35; /*0x6a8572*/
  }
LABEL_30:
  if ( !*(_BYTE *)(v16 + 3278) ) /*0x6a8558*/
    goto LABEL_34; /*0x6a8558*/
  v22 = 1; /*0x6a855a*/
LABEL_35:
  v32 = v22; /*0x6a8574*/
  if ( v21 || (aP3a = 1, v22) ) /*0x6a8583*/
    aP3a = 0; /*0x6a8585*/
  if ( a3 == 40 || a3 == 3 ) /*0x6a8592*/
  {
    v23 = 1; /*0x6a85b4*/
    if ( *(_BYTE *)(v7 + 3478) ) /*0x6a85ae*/
    {
      v24 = 1; /*0x6a85ba*/
      goto LABEL_42; /*0x6a85bc*/
    }
  }
  else
  {
    v23 = 0; /*0x6a8594*/
  }
  v24 = 0; /*0x6a8596*/
  if ( !v23 ) /*0x6a859a*/
  {
    v25 = (_DWORD *)v34; /*0x6a85be*/
    goto LABEL_47; /*0x6a85be*/
  }
LABEL_42:
  v25 = (_DWORD *)v34; /*0x6a859c*/
  if ( !*(_BYTE *)(v34 + 3278) ) /*0x6a85a8*/
  {
LABEL_47:
    v26 = 0; /*0x6a85c2*/
    goto LABEL_48; /*0x6a85c2*/
  }
  v26 = 1; /*0x6a85aa*/
LABEL_48:
  v27 = !v24 && !v26; /*0x6a85d0*/
  if ( v35 ) /*0x6a85d8*/
  {
    if ( v24 || v26 || v27 ) /*0x6a85e4*/
      return 1; /*0x6a85f3*/
    goto LABEL_74; /*0x6a85e4*/
  }
  if ( aP3a ) /*0x6a85fc*/
  {
    if ( v36 ) /*0x6a8604*/
      return 0; /*0x6a860f*/
    if ( v24 ) /*0x6a8614*/
      return 1; /*0x6a8614*/
  }
  else
  {
    if ( !v37 ) /*0x6a862c*/
    {
      if ( v32 ) /*0x6a8658*/
      {
        if ( v36 ) /*0x6a8660*/
          return 0; /*0x6a866b*/
        if ( v27 || v24 ) /*0x6a8674*/
          return 0; /*0x6a867f*/
      }
      goto LABEL_74; /*0x6a8674*/
    }
    if ( v36 ) /*0x6a8634*/
      return 0; /*0x6a863f*/
    if ( v27 ) /*0x6a8644*/
      return 0; /*0x6a864f*/
  }
  if ( v26 ) /*0x6a8618*/
    return 1; /*0x6a8623*/
LABEL_74:
  v28 = *(_DWORD *)(v16 + 1588); /*0x6a8682*/
  v29 = v25[397]; /*0x6a8688*/
  if ( v28 < v29 ) /*0x6a8690*/
    return 1; /*0x6a869b*/
  if ( v28 > v29 ) /*0x6a869e*/
    return 0; /*0x6a86a9*/
  v30 = (IUnknown *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v16 + 132))(v16, HouseClass_Player.field_0); /*0x6a86bf*/
  v31 = (*(int (__thiscall **)(_DWORD *, int))(*v25 + 132))(v25, HouseClass_Player.field_0); /*0x6a86c9*/
  if ( (int)v30 < v31 ) /*0x6a86d1*/
    return 1; /*0x6a86dc*/
  if ( (int)v30 > v31 ) /*0x6a86df*/
    return 0; /*0x6a86ea*/
  v14 = *(const wchar_t **)(v16 + 96); /*0x6a86ed*/
  v15 = (const wchar_t *)v25[24]; /*0x6a86f0*/
  return wcscmp(v14, v15) <= 0; /*0x6a8457*/
}


// ==== 0x006A8710  TabCameoListClass::AddCameo_ReplaceItAll  this=ObjectClass  sig=csp ====
int __thiscall TabCameoListClass::AddCameo_ReplaceItAll(int *this, int a2, int a3)
{
  int v4; // ebp
  int result; // eax
  int *i; // esi
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int *v11; // edi
  int *v12; // esi
  wchar_t *v13; // eax
  int v14; // [esp+14h] [ebp-8h]

  v4 = 0; /*0x6a8717*/
  result = this->q054 + 1; /*0x6a871f*/
  this->q054 = result; /*0x6a8721*/
  if ( result > 0 ) /*0x6a8726*/
  {
    for ( i = this + 22; ; i += 13 ) /*0x6a872c*/
    {
      v7 = a2; /*0x6a8734*/
      if ( RadarClass::GetBlip(a2, a3, i[1], *i) ) /*0x6a8742*/
        break; /*0x6a8742*/
      result = this->q054; /*0x6a874b*/
      if ( ++v4 >= result ) /*0x6a8754*/
        return result; /*0x6a8754*/
    }
    v8 = this->q054 - 1; /*0x6a8763*/
    if ( v8 > v4 ) /*0x6a8766*/
    {
      v9 = 13 * v8; /*0x6a876b*/
      v10 = v8 - v4; /*0x6a876e*/
      v11 = this + v9 + 22; /*0x6a8770*/
      do /*0x6a8783*/
      {
        --v10; /*0x6a877e*/
        qmemcpy(v11, v11 - 13, 0x34u); /*0x6a877f*/
        v11 -= 13; /*0x6a8781*/
      }
      while ( v10 ); /*0x6a8783*/
      v7 = a2; /*0x6a8785*/
    }
    v12 = this + 13 * v4; /*0x6a8798*/
    v12[23] = v7; /*0x6a879b*/
    v12[22] = a3; /*0x6a879e*/
    if ( v7 == 7 ) /*0x6a87a1*/
      v12[24] = GetHouseTechLevel(7, a3); /*0x6a87aa*/
    v12[25] = 0; /*0x6a87b3*/
    *(this + 12 * v4 + v4 + 26) = 0; /*0x6a87bd*/
    v12[27] = 0; /*0x6a87c0*/
    v13 = MEMORY[0xA8ED84]; /*0x6a87c3*/
    v12[32] = 0; /*0x6a87c8*/
    v12[29] = (int)v13; /*0x6a87ce*/
    v12[30] = v14; /*0x6a87d4*/
    v12[31] = 0; /*0x6a87d7*/
    v12[34] = 0; /*0x6a87da*/
    return v14; /*0x6a87d0*/
  }
  return result; /*0x6a8756*/
}


// ==== 0x006A87F0  ObjectClass::method_6A87F0  this=ObjectClass  sig=csp ====
char __thiscall sub_6A87F0(int this, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  _DWORD *v6; // eax

  v4 = *(_DWORD *)(this + 84); /*0x6a87f5*/
  if ( v4 > 75 ) /*0x6a87fb*/
    return 0; /*0x6a8857*/
  v5 = 0; /*0x6a8805*/
  if ( v4 > 0 ) /*0x6a8809*/
  {
    v6 = (_DWORD *)(this + 88); /*0x6a880b*/
    while ( v6[1] != a2 || *v6 != a3 ) /*0x6a8815*/
    {
      ++v5; /*0x6a8817*/
      v6 += 13; /*0x6a8818*/
      if ( v5 >= v4 ) /*0x6a881d*/
        goto LABEL_7; /*0x6a881d*/
    }
    return 0; /*0x6a8815*/
  }
LABEL_7:
  if ( !MEMORY[0xA8E7AC] && a2 != 31 ) /*0x6a882b*/
    VoxClass::FindAndPlay(MEMORY[0x83FA64], -1); /*0x6a8837*/
  TabCameoListClass::AddCameo_ReplaceItAll((int *)this, a2, a3); /*0x6a8840*/
  *(_BYTE *)(this + 60) = 1; /*0x6a8848*/
  MEMORY[0x884B8F] = 1; /*0x6a884c*/
  return 1; /*0x6a8847*/
}


// ==== 0x006A89E0  ObjectClass::method_6A89E0  this=ObjectClass  sig=csp ====
char __thiscall sub_6A89E0(_DWORD *this, char a2)
{
  int v2; // eax
  int v3; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // kr04_4
  _DWORD *v8; // eax
  int v10; // [esp+4h] [ebp-4h]

  v10 = *((_DWORD *)MEMORY[0xA8B230] + 3374); /*0x6a89f2*/
  v2 = 26; /*0x6a89f8*/
  if ( v10 ) /*0x6a89fd*/
    v2 = 18; /*0x6a89ff*/
  v3 = (MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v2 + MEMORY[0x886F94] - 7) / 50; /*0x6a8a43*/
  if ( HouseClass_Player == (#375 *)MEMORY[0xAC1198] ) /*0x6a8a45*/
    v3 = 1; /*0x6a8a47*/
  if ( a2 ) /*0x6a8a52*/
  {
    if ( this->q044 ) /*0x6a8a58*/
    {
      this->q048 -= v3; /*0x6a8a72*/
      return 1; /*0x6a8a76*/
    }
    else
    {
      return 0; /*0x6a8a62*/
    }
  }
  else
  {
    v5 = 26; /*0x6a8a85*/
    if ( v10 ) /*0x6a8a8a*/
      v5 = 18; /*0x6a8a8c*/
    v6 = (MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v5 + MEMORY[0x886F94] - 7) / 50; /*0x6a8aaa*/
    if ( HouseClass_Player == (#375 *)MEMORY[0xAC1198] ) /*0x6a8aac*/
    {
      v7 = v6; /*0x6a8ab7*/
      v8 = this; /*0x6a8ab9*/
      if ( this->q044 + v7 / 2 >= MEMORY[0x884CF8] ) /*0x6a8ac4*/
        return 0; /*0x6a8acf*/
    }
    else
    {
      if ( 2 * (v6 + this->q044) >= this->q054 ) /*0x6a8ae2*/
        return 0; /*0x6a8aed*/
      v8 = this; /*0x6a8af0*/
    }
    v8[18] += v3; /*0x6a8afb*/
    return 1; /*0x6a8aff*/
  }
}


// ==== 0x006A8B30  SidebarClass::UpdateCameos  this=HouseClass  sig=csp ====
char __thiscall SidebarClass::UpdateCameos(char *this, int a2, int a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edx
  _DWORD *v14; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // ebp
  _DWORD *v18; // edi
  _DWORD *v19; // esi
  int Type; // eax
  _DWORD *v21; // ebp
  _DWORD *v22; // esi
  int v23; // esi
  int v24; // eax
  int v25; // eax
  const void *v26; // eax
  char *v27; // esi
  int v28; // edi
  int *v29; // esi
  int v30; // ecx
  wchar_t *v31; // ecx
  int v32; // eax
  int v33; // ecx
  int *v34; // edi
  int v35; // esi
  _DWORD *v36; // eax
  int v37; // eax
  int *v38; // ecx
  int v39; // edx
  int v40; // ebx
  int v41; // edx
  _DWORD *v42; // ecx
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int *v46; // ecx
  int v47; // edx
  int v48; // ebp
  int *v49; // ecx
  int v50; // edx
  int v51; // ebx
  int v52; // eax
  int v53; // eax
  char result; // al
  int v55; // [esp-10h] [ebp-A8h]
  int v56; // [esp-8h] [ebp-A0h]
  char v57; // [esp+13h] [ebp-85h]
  int v58; // [esp+14h] [ebp-84h]
  int v59; // [esp+14h] [ebp-84h]
  int v61; // [esp+20h] [ebp-78h]

  v57 = 0; /*0x6a8b45*/
  if ( this->q03F ) /*0x6a8b3b*/
    goto LABEL_115; /*0x6a8b3b*/
  v4 = this->q012; /*0x6a8b50*/
  if ( v4 ) /*0x6a8b55*/
  {
    v5 = 26; /*0x6a8b66*/
    if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6a8b60*/
      v5 = 18; /*0x6a8b6f*/
    v6 = this->repairStationsCount; /*0x6a8b9f*/
    v7 = (MEMORY[0x886F9C] - v5 - MEMORY[0xB0B4F8] + MEMORY[0x886F94] - 7) / 50; /*0x6a8bad*/
    v8 = 2; /*0x6a8baf*/
    v9 = 2 * v7; /*0x6a8bb4*/
    if ( HouseClass_Player == (#375 *)MEMORY[0xAC1198] ) /*0x6a8bb7*/
    {
      v6 = MEMORY[0x884CF8]; /*0x6a8bb9*/
      v8 = 1; /*0x6a8bc2*/
      v7 /= 2; /*0x6a8bc7*/
      v9 = v7; /*0x6a8bc9*/
    }
    if ( v6 > v9 ) /*0x6a8bcd*/
    {
      if ( v4 >= 0 ) /*0x6a8bdc*/
      {
        if ( v8 * (v7 + this->q011) < v6 ) /*0x6a8c09*/
        {
          this->q012 = v4 - 1; /*0x6a8c11*/
          this->buildingsCapacity = MEMORY[0xB0B500]; /*0x6a8c1a*/
          this->q03E = 1; /*0x6a8c1d*/
          this->q03F = 1; /*0x6a8c21*/
        }
        else
        {
          this->q012 = 0; /*0x6a8c0b*/
        }
      }
      else
      {
        v10 = this->q011; /*0x6a8bde*/
        if ( v10 ) /*0x6a8be3*/
        {
          this->q012 = v4 + 1; /*0x6a8bec*/
          this->q03E = 0; /*0x6a8bef*/
          this->q03F = 1; /*0x6a8bf3*/
          this->q011 = v10 - 1; /*0x6a8bf7*/
          this->buildingsCapacity = 0; /*0x6a8bfa*/
        }
        else
        {
          this->q012 = 0; /*0x6a8be5*/
        }
      }
    }
    else
    {
      this->q012 = 0; /*0x6a8bcf*/
    }
  }
  if ( this->q03F ) /*0x6a8c25*/
  {
LABEL_115:
    if ( this->q03E ) /*0x6a8c2c*/
    {
      v11 = this->buildingsCapacity - MEMORY[0xB0B514]; /*0x6a8c3e*/
      this->buildingsCapacity = v11; /*0x6a8c40*/
      if ( v11 <= 0 ) /*0x6a8c45*/
      {
        v12 = this->q011; /*0x6a8c47*/
        this->q03F = 0; /*0x6a8c4a*/
        this->buildingsCapacity = 0; /*0x6a8c4f*/
        this->q011 = v12 + 1; /*0x6a8c56*/
      }
    }
    else
    {
      v13 = MEMORY[0xB0B514] + this->buildingsCapacity; /*0x6a8c63*/
      this->buildingsCapacity = v13; /*0x6a8c65*/
      if ( v13 >= MEMORY[0xB0B500] ) /*0x6a8c72*/
      {
        this->q03F = 0; /*0x6a8c74*/
        this->buildingsCapacity = 0; /*0x6a8c78*/
      }
    }
    v57 = 1; /*0x6a8c7f*/
  }
  if ( this->uniqueId != -1 ) /*0x6a8c8c*/
  {
    v14 = this + 8; /*0x6a8c8e*/
    if ( CDTimerClass::TimeRemaining((int *)this + 2) || (v15 = this->abstractFlags) == 0 ) /*0x6a8ca5*/
    {
      this->vtable2 = 0; /*0x6a8d4d*/
    }
    else
    {
      v16 = this->nextArrayIndex + *(_DWORD *)this; /*0x6a8cb0*/
      this->vtable2 = 1; /*0x6a8cb2*/
      *(_DWORD *)this = v16; /*0x6a8cb6*/
      v57 = 1; /*0x6a8cc4*/
      *v14 = MEMORY[0xA8ED84]; /*0x6a8cc9*/
      this->vtable4 = v61; /*0x6a8cd0*/
      this->vtable2 = v15; /*0x6a8cd3*/
      if ( v16 >= 7 ) /*0x6a8cd6*/
      {
        *v14 = MEMORY[0xA8ED84]; /*0x6a8ce3*/
        this->vtable4 = v61; /*0x6a8ce5*/
        this->vtable2 = 0; /*0x6a8ce8*/
        this->abstractFlags = 0; /*0x6a8ceb*/
        *(_DWORD *)this = 0; /*0x6a8cee*/
        this->uniqueId = -1; /*0x6a8cf0*/
      }
    }
  }
  if ( MEMORY[0x884B88] > (int)MEMORY[0xA8ED84] ) /*0x6a8d00*/
    v57 = 1; /*0x6a8d02*/
  if ( this->conYards <= 1u ) /*0x6a8d0c*/
  {
    v17 = 0; /*0x6a8d1a*/
    if ( *((int *)this + 21) > 0 ) /*0x6a8d1e*/
    {
      v18 = this + 88; /*0x6a8d20*/
      do /*0x6a8d23*/
      {
        if ( v18[1] == 31 ) /*0x6a8d27*/
        {
          if ( *(_DWORD *)(*((_DWORD *)HouseClass_Player + 150) + 4 * *v18) /*0x6a8d3e*/
            && (unsigned __int8)SuperClass::ShouldFlashTab() )
          {
            goto LABEL_53; /*0x6a8d45*/
          }
        }
        else
        {
          v19 = (_DWORD *)v18[3]; /*0x6a8d53*/
          if ( v19 ) /*0x6a8d58*/
          {
            if ( ObjectClass::IsCliffWall((_DWORD *)v18[3]) ) /*0x6a8d5c*/
            {
              Type = AbstractClass::GetType(v19); /*0x6a8d67*/
              if ( Type ) /*0x6a8d6e*/
              {
                if ( (*(int (__thiscall **)(int))(*(_DWORD *)Type + 44))(Type) == 6 ) /*0x6a8d7a*/
                {
LABEL_53:
                  SidebarClass::startButtonFlash( /*0x6a8e85*/
                    10,
                    10 - (int)MEMORY[0xA8ED84] % 10,
                    ((int)MEMORY[0xA8ED84] + 10 - (int)MEMORY[0xA8ED84] % 10) / 10 % 2 == 0);
                  MEMORY[0x884B8F] = 1; /*0x6a8ea7*/
                  MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x6a8eae*/
                  goto LABEL_44; /*0x6a8eb3*/
                }
              }
            }
          }
        }
        ++v17; /*0x6a8d83*/
        v18 += 13; /*0x6a8d84*/
      }
      while ( v17 < this->repairStationsCount ); /*0x6a8d23*/
    }
    SHA1::Reset((int)&MEMORY[0xB07C48] + 96 * this->conYards); /*0x6a8d8b*/
  }
LABEL_44:
  if ( this->q03D )
  {
    v58 = 0; /*0x6a8dad*/
    if ( *((int *)this + 21) > 0 )
    {
      v21 = this + 104; /*0x6a8dbd*/
      do
      {
        v22 = (_DWORD *)*(v21 - 1); /*0x6a8dc6*/
        if ( v22 )
        {
          if ( (unsigned __int8)FactoryClass::HasProgressChanged(*(v21 - 1)) )
          {
            v57 = 1; /*0x6a8de2*/
            if ( ObjectClass::IsCliffWall(v22) )
            {
              v23 = AbstractClass::GetType(v22); /*0x6a8dfb*/
              if ( v23 )
              {
                switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 44))(v23) )
                {
                  case 1:
                  case 2:
                  case 15:
                    v56 = *(unsigned __int8 *)((*(int (__thiscall **)(int))(*(_DWORD *)v23 + 132))(v23) + 3278); /*0x6a8ed1*/
                    v55 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 44))(v23); /*0x6a8ed9*/
                    v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 56))(v23); /*0x6a8ee0*/
                    v26 = (const void *)EventClass::Init(v25, 11, v55, -1, v56, &MEMORY[0xB07DD8]); /*0x6a8ee8*/
                    if ( Networking_LastEventIndex < 128 ) /*0x6a8ef7*/
                    {
                      qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v26, 0x6Fu); /*0x6a8f13*/
                      g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x6a8f20*/
                      Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x6a8f37*/
                      ++Networking_LastEventIndex; /*0x6a8f3d*/
                    }
                    *v21 = 0; /*0x6a8f42*/
                    break; /*0x6a8f42*/
                  case 6:
                    VoxClass::FindAndPlay(MEMORY[0x83FA80], -1); /*0x6a8e2f*/
                    v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 44))(v23); /*0x6a8e38*/
                    SidebarClass::registerBuildingType(v24 == 6 ? v23 : 0);
                    break; /*0x6a8e4d*/
                  default:
                    break;
                }
              }
            }
          }
        }
        v21 += 13; /*0x6a8f49*/
        ++v58; /*0x6a8f58*/
      }
      while ( v58 < this->repairStationsCount );
    }
  }
  v27 = this; /*0x6a8f64*/
  v28 = 0; /*0x6a8f6a*/
  if ( *((int *)this + 21) > 0 ) /*0x6a8f6f*/
  {
    v29 = (int *)(this + 116); /*0x6a8f79*/
    do /*0x6a9025*/
    {
      if ( *(v29 - 3) == 1 ) /*0x6a8f80*/
      {
        v30 = *(v29 - 4); /*0x6a8f86*/
        if ( v30 && (!*(_DWORD *)(v30 + 56) || *(_BYTE *)(v30 + 112) || (unsigned __int8)SidebarClass::draw()) ) /*0x6a8f99*/
        {
          v31 = MEMORY[0xA8ED84]; /*0x6a8fa2*/
          v29[3] = 0; /*0x6a8fac*/
          *v29 = (int)v31; /*0x6a8faf*/
          v29[1] = v61; /*0x6a8fb5*/
          v29[2] = 0; /*0x6a8fb8*/
          *(v29 - 2) = 0; /*0x6a8fbb*/
        }
        if ( CDTimerClass::TimeRemaining(v29) || (v32 = v29[3]) == 0 ) /*0x6a8fd2*/
        {
          *((_BYTE *)v29 - 4) = 0; /*0x6a9063*/
        }
        else
        {
          v33 = v29[4] + *(v29 - 2); /*0x6a8fde*/
          *((_BYTE *)v29 - 4) = 1; /*0x6a8fe0*/
          *(v29 - 2) = v33; /*0x6a8fe4*/
          v57 = 1; /*0x6a8fef*/
          *v29 = (int)MEMORY[0xA8ED84]; /*0x6a8ff4*/
          v29[1] = v61; /*0x6a8ffa*/
          v29[2] = v32; /*0x6a8ffd*/
          if ( *(v29 - 2) >= 53 ) /*0x6a9006*/
          {
            *v29 = (int)MEMORY[0xA8ED84]; /*0x6a900f*/
            v29[3] = 0; /*0x6a9011*/
            v29[1] = v61; /*0x6a9014*/
            v29[2] = 0; /*0x6a9017*/
          }
        }
      }
      ++v28; /*0x6a901e*/
      v29 += 13; /*0x6a901f*/
    }
    while ( v28 < this->repairStationsCount ); /*0x6a9025*/
    v27 = this; /*0x6a902b*/
  }
  if ( v27[28] && HouseClass_Player == (#375 *)MEMORY[0xAC1198] )
  {
    v59 = 0; /*0x6a9050*/
    if ( MEMORY[0x884CF8] > 0 )
    {
      v34 = MEMORY[0x884C34]; /*0x6a905c*/
      do
      {
        v35 = *(v34 - 40); /*0x6a906b*/
        if ( v35 )
        {
          if ( MEMORY[0x884CF4] ) /*0x6a9080*/
          {
            if ( MEMORY[0xA8B238][0] == 4 ) /*0x6a9089*/
            {
              v36 = (_DWORD *)SidebarClass::FindProductionData(v35 + 90154); /*0x6a9091*/
              if ( v36 ) /*0x6a9098*/
              {
                *v34 = v36[7]; /*0x6a909e*/
                v34[8] = v36[4]; /*0x6a90a3*/
                v34[16] = v36[2]; /*0x6a90a9*/
                v34[24] = v36[3]; /*0x6a90af*/
                v34[32] = v36[8]; /*0x6a90b5*/
                v34[40] = v36[12]; /*0x6a90be*/
                __3_YAXPAX_Z(v36); /*0x6a90c4*/
                v57 = 1; /*0x6a90cc*/
              }
            }
          }
          v37 = 0; /*0x6a90d7*/
          v38 = (int *)(v35 + 21476); /*0x6a90d9*/
          v39 = 20; /*0x6a90db*/
          do /*0x6a90e8*/
          {
            v40 = *v38++; /*0x6a90e0*/
            v37 += v40; /*0x6a90e5*/
            --v39; /*0x6a90e7*/
          }
          while ( v39 ); /*0x6a90e8*/
          v41 = 20; /*0x6a90f0*/
          v42 = (_DWORD *)(v35 + 21560); /*0x6a90f5*/
          do /*0x6a90fd*/
          {
            v37 += *v42++; /*0x6a90f7*/
            --v41; /*0x6a90fc*/
          }
          while ( v41 ); /*0x6a90fd*/
          if ( *(v34 - 32) != v37 /*0x6a912b*/
            || *(v34 - 24) != *(_DWORD *)(v35 + 744)
                            + *(_DWORD *)(v35 + 752)
                            + *(_DWORD *)(v35 + 756)
                            + *(_DWORD *)(v35 + 760) )
          {
            goto LABEL_97; /*0x6a912b*/
          }
          v43 = (*(int (__stdcall **)(int))(*(_DWORD *)(v35 + 36) + 24))(v35 + 36); /*0x6a9134*/
          if ( v43 < 0 ) /*0x6a9139*/
            v43 = 0; /*0x6a913b*/
          if ( *(v34 - 16) != v43
            || (v35 != MEMORY[0xAC1198]
              ? (!*(_BYTE *)(v35 + 501)
               ? (v44 = *((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(v35 + 90196)))
               : (v44 = FindBuildingAnimByName(g_INI_Key_Grey, 1)))
              : (v44 = FindBuildingAnimByName(MEMORY[0x836ECC], 1)),
                *(v34 - 8) != v44) )
          {
LABEL_97:
            v57 = 1; /*0x6a918e*/
            v45 = 0; /*0x6a9193*/
            v46 = (int *)(v35 + 21476); /*0x6a9195*/
            v47 = 20; /*0x6a9197*/
            do /*0x6a91a4*/
            {
              v48 = *v46++; /*0x6a919c*/
              v45 += v48; /*0x6a91a1*/
              --v47; /*0x6a91a3*/
            }
            while ( v47 ); /*0x6a91a4*/
            v49 = (int *)(v35 + 21560); /*0x6a91a6*/
            v50 = 20; /*0x6a91a8*/
            do /*0x6a91b5*/
            {
              v51 = *v49++; /*0x6a91ad*/
              v45 += v51; /*0x6a91b2*/
              --v50; /*0x6a91b4*/
            }
            while ( v50 ); /*0x6a91b5*/
            *(v34 - 32) = v45; /*0x6a91b7*/
            *(v34 - 24) = *(_DWORD *)(v35 + 744) /*0x6a91d8*/
                        + *(_DWORD *)(v35 + 752)
                        + *(_DWORD *)(v35 + 756)
                        + *(_DWORD *)(v35 + 760);
            v52 = (*(int (__stdcall **)(int))(*(_DWORD *)(v35 + 36) + 24))(v35 + 36); /*0x6a91e2*/
            if ( v52 < 0 ) /*0x6a91e7*/
              v52 = 0; /*0x6a91e9*/
            *(v34 - 16) = v52; /*0x6a91eb*/
            if ( v35 == MEMORY[0xAC1198] ) /*0x6a91f5*/
            {
              v53 = FindBuildingAnimByName(MEMORY[0x836ECC], 1); /*0x6a9201*/
            }
            else if ( *(_BYTE *)(v35 + 501) ) /*0x6a9208*/
            {
              v53 = FindBuildingAnimByName(g_INI_Key_Grey, 1); /*0x6a921c*/
            }
            else
            {
              v53 = *((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(v35 + 90196)); /*0x6a922f*/
            }
            *(v34 - 8) = v53; /*0x6a9232*/
          }
        }
        ++v34; /*0x6a9240*/
        ++v59; /*0x6a9245*/
      }
      while ( v59 < MEMORY[0x884CF8] );
    }
    MEMORY[0x884CF4] = 0; /*0x6a9251*/
  }
  result = v57; /*0x6a9258*/
  if ( v57 ) /*0x6a925e*/
  {
    MEMORY[0x884B8E] = 1; /*0x6a926b*/
    MEMORY[0x880D68][3988 * MEMORY[0x884B84]] = 1; /*0x6a9283*/
    MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x6a928b*/
    this->conYardsCount = 1; /*0x6a929a*/
    MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x6a929e*/
    MEMORY[0x884B8F] = 1; /*0x6a92a7*/
    MEMORY[0xB0B518] = 1; /*0x6a92ae*/
    return v57; /*0x6a92a3*/
  }
  return result; /*0x6a92b5*/
}


// ==== 0x006A92E0  ObjectClass::GetSidebarTooltip  this=ObjectClass  sig=csp ====
wchar_t *__thiscall ObjectClass::GetSidebarTooltip(int *this, int a2)
{
  int v2; // eax
  int v3; // edx
  int *v4; // eax
  int v5; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // edx
  wchar_t *StringCSF; // eax
  wchar_t *v11; // eax
  signed int v12; // eax
  char *v13; // ecx
  const wchar_t *v14; // [esp-8h] [ebp-Ch]
  const wchar_t *v15; // [esp-4h] [ebp-8h]
  CampaignScore *v16; // [esp-4h] [ebp-8h]
  CampaignScore *v17; // [esp+0h] [ebp-4h]

  v2 = a2 + 2 * this->q011; /*0x6a92e8*/
  if ( !HouseClass_Player.__pad_5568[22252] ) /*0x6a92f3*/
    return 0; /*0x6a92f3*/
  v3 = this->q054; /*0x6a92f9*/
  if ( v2 >= v3 || v3 >= 75 ) /*0x6a9307*/
    return 0; /*0x6a9307*/
  v4 = this + 13 * v2; /*0x6a9313*/
  v5 = v4[23]; /*0x6a9316*/
  if ( v5 == 31 ) /*0x6a931c*/
    return *(wchar_t **)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20608] + 4 * v4[22]) + 96); /*0x6a932e*/
  v7 = (_DWORD *)TechnoTypeClass::GetByTypeAndIndex(v5, v4[22]); /*0x6a9334*/
  v8 = v7; /*0x6a9339*/
  if ( !v7 ) /*0x6a933d*/
    return 0; /*0x6a93e2*/
  v9 = *v7; /*0x6a9348*/
  if ( stru_87C374.__pad_579C[12412] ) /*0x6a9354*/
  {
    v15 = (const wchar_t *)(*(int (__thiscall **)(_DWORD *, int))(v9 + 132))(v7, HouseClass_Player.field_0); /*0x6a935c*/
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40180], 0, &stru_830620.__pad_579C[40200], 3180); /*0x6a936e*/
    swprintf((wchar_t *const)&stru_B05488.__pad_14B0[4748], (const size_t)StringCSF, v15, v17); /*0x6a9379*/
  }
  else
  {
    v16 = (CampaignScore *)(*(int (__thiscall **)(_DWORD *, int))(v9 + 132))(v7, HouseClass_Player.field_0); /*0x6a938c*/
    v14 = (const wchar_t *)v8[24]; /*0x6a938d*/
    v11 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40160], 0, &stru_830620.__pad_579C[40200], 3182); /*0x6a939f*/
    swprintf((wchar_t *const)&stru_B05488.__pad_14B0[4748], (const size_t)v11, v14, v16); /*0x6a93aa*/
  }
  v12 = wcslen((const wchar_t *)&stru_B05488.__pad_14B0[4748]); /*0x6a93b7*/
  if ( v12 > 0 ) /*0x6a93c1*/
  {
    v13 = &stru_B05488.__pad_14B0[4748]; /*0x6a93c3*/
    do /*0x6a93d7*/
    {
      if ( *(_WORD *)v13 == 32 ) /*0x6a93cc*/
        *(_WORD *)v13 = 10; /*0x6a93ce*/
      v13 += 2; /*0x6a93d3*/
      --v12; /*0x6a93d6*/
    }
    while ( v12 ); /*0x6a93d7*/
  }
  return (wchar_t *)&stru_B05488.__pad_14B0[4748]; /*0x6a9327*/
}


// ==== 0x006A93F0  ObjectClass::method_6A93F0  this=ObjectClass  sig=csp ====
char __thiscall sub_6A93F0(int this)
{
  int v2; // eax
  int v3; // esi
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ebp

  *(_BYTE *)(this + 28) = 1; /*0x6a93f8*/
  v2 = 26; /*0x6a9408*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6a9400*/
    v2 = 18; /*0x6a940f*/
  v3 = 0; /*0x6a942f*/
  v4 = MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v2 + MEMORY[0x886F94] - 7; /*0x6a9431*/
  v5 = (unsigned int)((unsigned __int64)(1374389535LL * v4) >> 32) >> 31; /*0x6a943c*/
  v6 = 2 * (v4 / 50); /*0x6a9443*/
  if ( v6 > 0 ) /*0x6a9447*/
  {
    do /*0x6a9494*/
    {
      Hash::Reset((_DWORD *)(56 * (v3 + 60 * *(_DWORD *)(this + 56)) + 11566720)); /*0x6a9465*/
      LOBYTE(v5) = Hash::InsertOrdered(&MEMORY[0x87F7E8], 56 * (v3 + 60 * *(_DWORD *)(this + 56)) + 11566720); /*0x6a948c*/
      ++v3; /*0x6a9491*/
    }
    while ( v3 < v6 ); /*0x6a9494*/
  }
  MEMORY[0x884B8F] = 1; /*0x6a9498*/
  return v5; /*0x6a9496*/
}


// ==== 0x006A94F0  ObjectClass::SmallFunc_6A94F0  this=ObjectClass  sig=csp ====
int __thiscall sub_6A94F0(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *v4; // ecx
  int v5; // ebx

  result = 0; /*0x6a94f9*/
  v4 = (_DWORD *)*(this + 13 * a2 + 25); /*0x6a9501*/
  if ( v4 ) /*0x6a950a*/
    result = ObjectClass::GetMember09(v4); /*0x6a950c*/
  if ( *(this + 12 * a2 + a2 + 26) == 1 ) /*0x6a951d*/
  {
    v5 = *(this + 13 * a2 + 27); /*0x6a951f*/
    if ( v5 > result ) /*0x6a9524*/
      return (v5 + result) / 2; /*0x6a952b*/
  }
  return result; /*0x6a952d*/
}


// ==== 0x006A9540  Sidebar::UpdateProductionDisplay  this=Sidebar  sig=csp ====
char __userpurge Sidebar::UpdateProductionDisplay@<al>(int a1@<ecx>, CampaignScore *a2@<edi>, char a3)
{
  char result; // al
  int v5; // eax
  IUnknown *v6; // ebx
  IUnknown *v7; // ebp
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // ebp
  int v15; // esi
  char v16; // bl
  int v17; // ebp
  int v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int *v22; // eax
  IUnknown *v23; // ebx
  char ShouldDisableCameo; // al
  int Member09; // eax
  _DWORD *v26; // ecx
  int v27; // ecx
  _DWORD *v28; // edi
  int v29; // eax
  int v30; // ecx
  unsigned int v31; // edi
  int v32; // eax
  int v33; // edx
  IUnknown *v34; // eax
  int v35; // edi
  int v36; // eax
  int eax73; // eax
  CampaignScore *v37; // ebx
  int v39; // ecx
  _DWORD *TextBoundingRect; // eax
  _DWORD *v41; // eax
  wchar_t *StringCSF; // ebp
  _DWORD *v43; // eax
  _DWORD *v44; // eax
  int v45; // ebp
  int v46; // ebx
  int v47; // edi
  int v48; // esi
  int v49; // eax
  int v50; // eax
  int eax100; // eax
  ConvertClass *v51; // eax
  int v53; // edx
  int v54; // edx
  int v55; // eax
  int eax108; // eax
  ConvertClass *v56; // esi
  int updated; // eax
  int v59; // edx
  int v60; // edx
  int v61; // ecx
  ObjectClass *v62; // esi
  int v63; // eax
  wchar_t *v64; // eax
  wchar_t *v65; // eax
  wchar_t *v66; // eax
  wchar_t *v67; // eax
  wchar_t *v68; // eax
  IUnknown *v69; // [esp-Ah] [ebp-494h]
  CampaignScore *v70; // [esp-2h] [ebp-48Ch]
  CampaignScore *v71; // [esp-2h] [ebp-48Ch]
  CampaignScore *v72; // [esp-2h] [ebp-48Ch]
  __int16 v73; // [esp+10h] [ebp-47Ah]
  bool v74; // [esp+10h] [ebp-47Ah]
  char v75; // [esp+11h] [ebp-479h]
  bool IsCliffWall; // [esp+12h] [ebp-478h]
  char v77; // [esp+13h] [ebp-477h]
  char v78; // [esp+14h] [ebp-476h]
  char v79; // [esp+15h] [ebp-475h]
  int *v80; // [esp+16h] [ebp-474h]
  int *BuildLimit; // [esp+16h] [ebp-474h]
  int v82; // [esp+1Ah] [ebp-470h] BYREF
  int v83; // [esp+1Eh] [ebp-46Ch]
  int v84; // [esp+22h] [ebp-468h]
  int v85; // [esp+26h] [ebp-464h]
  int v86; // [esp+2Ah] [ebp-460h]
  int *v87; // [esp+2Eh] [ebp-45Ch]
  IUnknown *aP1; // [esp+32h] [ebp-458h]
  int ProductionState; // [esp+36h] [ebp-454h]
  int v90; // [esp+3Ah] [ebp-450h]
  size_t BufferCount; // [esp+3Eh] [ebp-44Ch]
  int v92; // [esp+42h] [ebp-448h]
  ConvertClass *aP2; // [esp+46h] [ebp-444h]
  int v94; // [esp+4Ah] [ebp-440h]
  int i; // [esp+4Eh] [ebp-43Ch]
  ConvertClass aP3; // [esp+52h] [ebp-438h] BYREF
  int v97[4]; // [esp+1DAh] [ebp-2B0h] BYREF
  wchar_t v98[20]; // [esp+1EAh] [ebp-2A0h] BYREF
  wchar_t v99[20]; // [esp+212h] [ebp-278h] BYREF
  wchar_t Format[20]; // [esp+23Ah] [ebp-250h] BYREF
  wchar_t v101[20]; // [esp+262h] [ebp-228h] BYREF
  CampaignScore Buffer[14]; // [esp+28Ah] [ebp-200h] BYREF

  v84 = a1;
  result = *(_BYTE *)(a1 + 28);
  if ( result )
  {
    if ( *(_BYTE *)(a1 + 60) || (result = a3) != 0 )
    {
      v70 = a2;
      *(_BYTE *)(a1 + 60) = 0;
      stru_B05488.__pad_579C[2292] = 1;
      *(_DWORD *)aP3.__pad_0 = 0;
      *(_DWORD *)&aP3.field_2[2] = 0;
      *(_DWORD *)&aP3.__pad_6[2] = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22512] + 124))(*(_DWORD *)&stru_87C374.__pad_579C[22512]);
      v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22512] + 128))(*(_DWORD *)&stru_87C374.__pad_579C[22512]);
      v6 = (IUnknown *)HouseClass_Player.field_0;
      v7 = (IUnknown *)*(&g_MatrixTransformState + 2274);
      *(_DWORD *)&aP3.__pad_6[6] = v5;
      v8 = 0;
      v79 = 0;
      if ( (CoordStruct *)HouseClass_Player.field_0 == *(&g_MatrixTransformState + 2274) )
        v8 = *(_DWORD *)(a1 + 84);
      v9 = *(_DWORD *)(a1 + 84);
      if ( v8 < v9 )
      {
        v10 = (_DWORD *)(a1 + 4 * (v8 + 4 * (3 * v8 + 6) + 2));
        while ( *v10 != 1 && *v10 != 2 )
        {
          ++v8;
          v10 += 13;
          if ( v8 >= v9 )
            goto LABEL_13;
        }
        v79 = 1;
      }
LABEL_13:
      v11 = 26;
      if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13496) )
        v11 = 18;
      v85 = 0;
      v12 = (*(_BYTE *)(a1 + 63) != 0)
          + (*(_DWORD *)&stru_87C374.__pad_579C[21644]
           - *(_DWORD *)&stru_B05488.__pad_579C[2260]
           - v11
           + *(_DWORD *)&stru_87C374.__pad_579C[21636]
           - 7)
          / 50;
      v92 = v12;
      if ( (CoordStruct *)HouseClass_Player.field_0 != *(&g_MatrixTransformState + 2274) )
      {
        if ( v12 > 0 )
        {
          do
          {
            for ( i = 0; i < 2; ++i )
            {
              v78 = a3;
              v13 = *(_DWORD *)(v84 + 68);
              ProductionState = 0;
              aP2 = 0;
              v86 = 0;
              BufferCount = 0;
              v14 = *(_DWORD *)(v84 + 32);
              v90 = i + 2 * (v13 + v85);
              v15 = v14 + i * *(_DWORD *)&stru_B05488.__pad_579C[2264] - *(_DWORD *)&stru_87C374.__pad_579C[21632];
              v16 = 0;
              v73 = 0;
              v17 = v85 * *(_DWORD *)&stru_B05488.__pad_579C[2268] + *(_DWORD *)(v84 + 36) + 1;
              v18 = *(_DWORD *)(v84 + 56);
              IsCliffWall = 0;
              v94 = v17;
              v19 = 56 * (i + 2 * v85 + 60 * v18) + 11566720;
              if ( *(_BYTE *)(v84 + 63) )
              {
                v17 += *(_DWORD *)(v84 + 76) - *(_DWORD *)&stru_B05488.__pad_579C[2268];
                v94 = v17;
              }
              v20 = *(_DWORD *)(v84 + 84);
              v80 = 0;
              aP1 = 0;
              if ( v90 >= v20 )
              {
                LOBYTE(v73) = 0;
              }
              else
              {
                if ( !*(_BYTE *)(v19 + 52) || (HIBYTE(v73) = 1, HouseClass_Player.__pad_5568[23272]) )
                  HIBYTE(v73) = 0;
                v21 = *(_DWORD *)(v84 + 52 * v90 + 92);
                v22 = (int *)(v84 + 52 * v90);
                v87 = v22;
                if ( v21 == 31 )
                {
                  v31 = v22[22];
                  v32 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20608] + 4 * v31);
                  v80 = *(int **)(v32 + 96);
                  if ( v31 >= *(_DWORD *)&HouseClass_Player.__pad_5568[20620] )
                    aP2 = 0;
                  else
                    aP2 = *(ConvertClass **)(v32 + 184);
                  LOBYTE(v73) = 1;
                  IsCliffWall = !SuperClass::ShouldDrawProgress(*(_DWORD *)(*(_DWORD *)(HouseClass_Player.field_0 + 600)
                                                                          + 4 * v31));
                  BufferCount = (size_t)SuperClass::NameReadiness(*(_DWORD *)(*(_DWORD *)(HouseClass_Player.field_0 + 600)
                                                                            + 4 * v31));
                  ProductionState = SidebarClass::GetProductionState(*(_DWORD *)(*(_DWORD *)(HouseClass_Player.field_0
                                                                                           + 600)
                                                                               + 4 * v31));
                  v16 = 0;
                  v78 = 1;
                }
                else
                {
                  v23 = (IUnknown *)TechnoTypeClass::GetByTypeAndIndex(v21, v22[22]);
                  aP1 = v23;
                  if ( v23 )
                  {
                    v80 = (int *)v23->field_60;
                    v77 = 0;
                    if ( (*(int (__thiscall **)(IUnknown *))(v23->field_0 + 44))(v23) == 7 && v79
                      || !(*(int (__thiscall **)(IUnknown *, int, int, int, int))(v23->field_0 + 148))(
                            v23,
                            1,
                            1,
                            1,
                            HouseClass_Player.field_0)
                      || (v86 = TechnoTypeClass::GetByTypeAndIndex(v87[23], v87[22]),
                          v74 = HouseClass::CanBuild(HouseClass_Player.field_0, (IUnknown *)v86, 0, 0) == -1,
                          ShouldDisableCameo = HouseClass::ShouldDisableCameo(HouseClass_Player.field_0, v86),
                          v74)
                      || ShouldDisableCameo )
                    {
                      v77 = 1;
                    }
                    aP2 = (ConvertClass *)(*(int (__thiscall **)(IUnknown *))(v23->field_0 + 152))(v23);
                    v86 = v87[25];
                    if ( !v86 )
                    {
                      v16 = v77;
                      LOBYTE(v73) = 0;
                      v28 = (_DWORD *)(v84 + 4 * (v90 + 4 * (3 * v90 + 6) + 2));
                      switch ( *v28 )
                      {
                        case 0:
                          if ( a3 )
                            goto LABEL_59;
                          continue;
                        case 1:
                          Member09 = 0;
                          v78 = 1;
                          LOBYTE(v73) = 1;
                          if ( *v28 != 1 )
                            goto LABEL_45;
                          v27 = v87[27];
                          goto LABEL_43;
                        case 2:
                          v29 = 0;
                          LOBYTE(v73) = 1;
                          IsCliffWall = 0;
                          v16 = 1;
                          if ( *v28 == 1 )
                          {
                            v30 = v87[27];
                            if ( v30 > 0 )
                              v29 = v30 / 2;
                          }
                          ProductionState = v29;
                          goto LABEL_59;
                        case 3:
                          LOBYTE(v73) = 1;
                          IsCliffWall = 1;
                          v16 = 0;
                          goto LABEL_59;
                        default:
                          goto LABEL_59;
                      }
                    }
                    LOBYTE(v73) = 1;
                    IsCliffWall = ObjectClass::IsCliffWall((_DWORD *)v86);
                    if ( IsCliffWall )
                      BufferCount = (size_t)GetStringCSF(g_Str_TXT_READY, 0, &stru_830620.__pad_579C[40200], 3411);
                    else
                      v78 = 1;
                    Member09 = 0;
                    v26 = (_DWORD *)v87[25];
                    if ( v26 )
                      Member09 = ObjectClass::GetMember09(v26);
                    if ( *(_DWORD *)(v84 + 4 * (v90 + 4 * (3 * v90 + 6) + 2)) == 1 )
                    {
                      v27 = v87[27];
LABEL_43:
                      if ( v27 > Member09 )
                        Member09 = (v27 + Member09) / 2;
                    }
LABEL_45:
                    ProductionState = Member09;
                  }
                  v16 = 0;
                }
              }
LABEL_59:
              *(_DWORD *)&aP3.__pad_6[82] = 0;
              *(_DWORD *)&aP3.__pad_6[86] = 0;
              *(_DWORD *)&aP3.__pad_6[90] = v15 + 60;
              *(_DWORD *)&aP3.__pad_6[94] = v17 + 48;
              if ( v78 )
              {
                if ( aP2 )
                {
                  *(_DWORD *)&aP3.__pad_6[122] = v15;
                  *(_DWORD *)&aP3.__pad_6[126] = v17;
                  DrawToSurfaceSHP(
                    *(int *)&stru_87C374.__pad_579C[22512],
                    *(int *)&stru_87C374.__pad_14B0[7820],
                    aP2,
                    0,
                    (ConvertClass *)&aP3.__pad_6[122],
                    (ConvertClass *)&aP3.__pad_6[82],
                    (ConvertClass *)0x400,
                    0,
                    0,
                    0,
                    (ConvertClass *)0x3E8,
                    0,
                    0,
                    0,
                    0,
                    0);
                }
                if ( HIBYTE(v73) )
                {
                  *(_DWORD *)&aP3.__pad_6[146] = v15;
                  *(_DWORD *)&aP3.__pad_6[150] = v17;
                  *(_DWORD *)&aP3.__pad_6[154] = 60;
                  *(_DWORD *)&aP3.__pad_6[158] = 48;
                  BYTE2(v82) = stru_B05488.__pad_579C[19962];
                  v33 = **(_DWORD **)&stru_87C374.__pad_579C[22512];
                  LOWORD(v82) = *(_WORD *)&stru_B05488.__pad_579C[19960];
                  (*(void (__thiscall **)(_DWORD, char *, char *, int))(v33 + 84))(
                    *(_DWORD *)&stru_87C374.__pad_579C[22512],
                    &aP3.__pad_6[82],
                    &aP3.__pad_6[146],
                    ((unsigned __int8)stru_B05488.__pad_579C[19960] >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120])
                  | ((unsigned __int8)stru_B05488.__pad_579C[19961] >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
                  | ((unsigned __int8)stru_B05488.__pad_579C[19962] >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]));
                }
                if ( v16 )
                {
                  *(_DWORD *)&aP3.__pad_6[138] = v15;
                  *(_DWORD *)&aP3.__pad_6[142] = v17;
                  DrawToSurfaceSHP(
                    *(int *)&stru_87C374.__pad_579C[22512],
                    *(int *)&stru_87C374.__pad_14B0[7848],
                    *(ConvertClass **)&stru_B05488.__pad_14B0[4744],
                    0,
                    (ConvertClass *)&aP3.__pad_6[138],
                    (ConvertClass *)&aP3.__pad_6[82],
                    (ConvertClass *)0x401,
                    0,
                    0,
                    0,
                    (ConvertClass *)0x3E8,
                    0,
                    0,
                    0,
                    0,
                    0);
                }
                if ( *(_DWORD *)(v84 + 52 * v90 + 136) > *(int *)&HouseClass_Player.__pad_5568[23248]
                  && *(_DWORD *)&HouseClass_Player.__pad_5568[23248] % 16 > 8 )
                {
                  *(_DWORD *)&aP3.__pad_6[114] = v15;
                  *(_DWORD *)&aP3.__pad_6[118] = v17;
                  DrawToSurfaceSHP(
                    *(int *)&stru_87C374.__pad_579C[22512],
                    *(int *)&stru_87C374.__pad_14B0[7848],
                    *(ConvertClass **)&stru_B05488.__pad_14B0[4744],
                    0,
                    (ConvertClass *)&aP3.__pad_6[114],
                    (ConvertClass *)&aP3.__pad_6[82],
                    (ConvertClass *)0x404,
                    0,
                    0,
                    0,
                    (ConvertClass *)0x3E8,
                    0,
                    0,
                    0,
                    0,
                    0);
                }
                if ( v80 )
                {
                  *(_DWORD *)&aP3.__pad_6[134] = v17 + 36;
                  *(_DWORD *)&aP3.__pad_6[130] = v15;
                  UI_Update_6AC480((int)v80, (int *)&aP3.__pad_6[130], &aP3, 60);
                }
                v75 = 0;
                v34 = aP1;
                v35 = ((unsigned __int8)stru_B05488.__pad_579C[19960] >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120])
                    | ((unsigned __int8)stru_B05488.__pad_579C[19961] >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
                    | ((unsigned __int8)stru_B05488.__pad_579C[19962] >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]);
                if ( aP1 )
                {
                  LOBYTE(v34) = aP1->__pad_BC0[270];
                  v69 = v34;
                  v36 = (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 44))(aP1);
                  BuildLimit = (int *)HouseClass::GetBuildLimit(HouseClass_Player.field_0, v36, v69, 0);
                  if ( BuildLimit )
                  {
                    eax73 = FactoryClass::CountType(BuildLimit, aP1);
                    v37 = (CampaignScore *)eax73;
                    if ( eax73 > 1
                      || eax73 > 0
                      && ((v39 = BuildLimit[22]) == 0
                       || (*(int (__thiscall **)(int))(*(_DWORD *)v39 + 132))(v39)
                       && (IUnknown *)(*(int (__thiscall **)(int))(*(_DWORD *)BuildLimit[22] + 132))(BuildLimit[22]) != aP1) )
                    {
                      swprintf((wchar_t *const)Buffer, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v37, v70);
                      *(_DWORD *)&aP3.__pad_6[110] = v17 + 1;
                      *(_DWORD *)&aP3.__pad_6[106] = v15 + 60;
                      TextBoundingRect = GetTextBoundingRect(&aP3.__pad_6[354], Buffer, v15 + 60, v17 + 1, 578, 2, 1);
                      *(_DWORD *)&aP3.__pad_6[162] = *TextBoundingRect;
                      *(_DWORD *)&aP3.__pad_6[166] = TextBoundingRect[1];
                      *(_DWORD *)&aP3.__pad_6[170] = TextBoundingRect[2];
                      *(_DWORD *)&aP3.__pad_6[174] = TextBoundingRect[3];
                      DSurface::FillRectWithColor(
                        (int *)&aP3.__pad_6[162],
                        *(ObjectClass **)&stru_87C374.__pad_579C[22512],
                        0,
                        0xAFu);
                      TextRenderer::Printf(
                        (ConvertClass *)&aP3.__pad_6[178],
                        (size_t)&g_Str_Fmt_PctD,
                        *(ObjectClass **)&stru_87C374.__pad_579C[22512],
                        &aP3,
                        (int)&aP3.__pad_6[106],
                        v35,
                        0,
                        578,
                        v37);
                      v75 = 1;
                    }
                  }
                }
                if ( (_BYTE)v73 )
                {
                  if ( BufferCount )
                  {
                    *(_DWORD *)&aP3.__pad_6[102] = v17 + 1;
                    *(_DWORD *)&aP3.__pad_6[98] = v15 + 30;
                    v41 = GetTextBoundingRect(
                            &aP3.field_178,
                            (CampaignScore *)BufferCount,
                            v15 + 30,
                            v17 + 1,
                            322,
                            2,
                            1);
                    *(_DWORD *)&aP3.__pad_6[50] = *v41;
                    *(_DWORD *)&aP3.__pad_6[54] = v41[1];
                    *(_DWORD *)&aP3.__pad_6[58] = v41[2];
                    *(_DWORD *)&aP3.__pad_6[62] = v41[3];
                    DSurface::FillRectWithColor(
                      (int *)&aP3.__pad_6[50],
                      *(ObjectClass **)&stru_87C374.__pad_579C[22512],
                      0,
                      0xAFu);
                    TextRenderer::Printf(
                      (ConvertClass *)&aP3.__pad_6[194],
                      BufferCount,
                      *(ObjectClass **)&stru_87C374.__pad_579C[22512],
                      &aP3,
                      (int)&aP3.__pad_6[98],
                      v35,
                      0,
                      322,
                      v70);
                  }
                  if ( !IsCliffWall )
                  {
                    if ( (*(_DWORD *)&aP3.__pad_6[10] = v15,
                          *(_DWORD *)&aP3.__pad_6[14] = v17,
                          DrawToSurfaceSHP(
                            *(int *)&stru_87C374.__pad_579C[22512],
                            *(int *)&stru_87C374.__pad_14B0[7848],
                            *(ConvertClass **)&stru_B05488.__pad_579C[2144],
                            ProductionState + 1,
                            (ConvertClass *)&aP3.__pad_6[10],
                            (ConvertClass *)&aP3.__pad_6[82],
                            (ConvertClass *)0x404,
                            0,
                            0,
                            0,
                            (ConvertClass *)0x3E8,
                            0,
                            0,
                            0,
                            0,
                            0),
                          v86)
                      && (!*(_DWORD *)(v86 + 56) || *(_BYTE *)(v86 + 112))
                      || *(_DWORD *)(v84 + 4 * (v90 + 4 * (3 * v90 + 6) + 2)) == 2 )
                    {
                      StringCSF = GetStringCSF(
                                    (wchar_t *)&stru_830620.__pad_579C[40304],
                                    0,
                                    &stru_830620.__pad_579C[40200],
                                    3636);
                      if ( v75 )
                      {
                        *(_DWORD *)&aP3.__pad_6[18] = v15 + 2;
                        *(_DWORD *)&aP3.__pad_6[22] = v94 + 1;
                        v43 = GetTextBoundingRect(v97, (CampaignScore *)StringCSF, v15 + 2, v94 + 1, 66, 2, 1);
                        *(_DWORD *)&aP3.__pad_6[66] = *v43;
                        *(_DWORD *)&aP3.__pad_6[70] = v43[1];
                        *(_DWORD *)&aP3.__pad_6[74] = v43[2];
                        *(_DWORD *)&aP3.__pad_6[78] = v43[3];
                        DSurface::FillRectWithColor(
                          (int *)&aP3.__pad_6[66],
                          *(ObjectClass **)&stru_87C374.__pad_579C[22512],
                          0,
                          0xAFu);
                        TextRenderer::Printf(
                          (ConvertClass *)&aP3.__pad_6[202],
                          (size_t)StringCSF,
                          *(ObjectClass **)&stru_87C374.__pad_579C[22512],
                          &aP3,
                          (int)&aP3.__pad_6[18],
                          v35,
                          0,
                          66,
                          v70);
                      }
                      else
                      {
                        *(_DWORD *)&aP3.__pad_6[26] = v15 + 30;
                        *(_DWORD *)&aP3.__pad_6[30] = v94 + 1;
                        v44 = GetTextBoundingRect(
                                &aP3.__pad_6[338],
                                (CampaignScore *)StringCSF,
                                v15 + 30,
                                v94 + 1,
                                322,
                                2,
                                1);
                        *(_DWORD *)&aP3.__pad_6[34] = *v44;
                        *(_DWORD *)&aP3.__pad_6[38] = v44[1];
                        *(_DWORD *)&aP3.__pad_6[42] = v44[2];
                        *(_DWORD *)&aP3.__pad_6[46] = v44[3];
                        DSurface::FillRectWithColor(
                          (int *)&aP3.__pad_6[34],
                          *(ObjectClass **)&stru_87C374.__pad_579C[22512],
                          0,
                          0xAFu);
                        TextRenderer::Printf(
                          (ConvertClass *)&aP3.__pad_6[186],
                          (size_t)StringCSF,
                          *(ObjectClass **)&stru_87C374.__pad_579C[22512],
                          &aP3,
                          (int)&aP3.__pad_6[26],
                          v35,
                          0,
                          322,
                          v70);
                      }
                    }
                  }
                }
              }
            }
            ++v85;
          }
          while ( v85 < v92 );
          v7 = (IUnknown *)*(&g_MatrixTransformState + 2274);
          v6 = (IUnknown *)HouseClass_Player.field_0;
        }
        if ( v6 != v7 )
        {
LABEL_135:
          result = v84;
          *(_DWORD *)(v84 + 80) = *(_DWORD *)(v84 + 76);
          return result;
        }
        v12 = v92;
      }
      v85 = 0;
      v86 = v12 / 2;
      if ( v12 / 2 > 0 )
      {
        while ( 1 )
        {
          v45 = *(_DWORD *)(v84 + 68) + v85;
          v46 = *(_DWORD *)(v84 + 36) + 2 * v85 * *(_DWORD *)&stru_B05488.__pad_579C[2268] + 1;
          v47 = *(_DWORD *)(v84 + 32) - *(_DWORD *)&stru_87C374.__pad_579C[21632];
          if ( v45 >= *(int *)&stru_87C374.__pad_579C[12776] )
            goto LABEL_135;
          v92 = *(_DWORD *)&stru_87C374.__pad_579C[4 * v45 + 12420];
          v48 = v92;
          if ( !v92 )
            goto LABEL_135;
          v49 = *(_DWORD *)(v92 + 52);
          if ( v49 )
          {
            v50 = *(_DWORD *)(v49 + 188);
            if ( !v50 )
            {
              v51 = *(ConvertClass **)&stru_B05488.__pad_579C[2156];
LABEL_105:
              if ( v51 )
              {
                v53 = v47 + *(__int16 *)v51->field_2;
                *(_DWORD *)&aP3.__pad_6[34] = 0;
                *(_DWORD *)&aP3.__pad_6[42] = v53;
                *(_DWORD *)&aP3.__pad_6[38] = 0;
                v54 = v46 + *(__int16 *)&v51->field_2[2];
                *(_DWORD *)&aP3.__pad_6[26] = v47;
                *(_DWORD *)&aP3.__pad_6[46] = v54;
                *(_DWORD *)&aP3.__pad_6[30] = v46;
                DrawToSurfaceSHP(
                  *(int *)&stru_87C374.__pad_579C[22512],
                  *(int *)&stru_87C374.__pad_14B0[7852],
                  v51,
                  0,
                  (ConvertClass *)&aP3.__pad_6[26],
                  (ConvertClass *)&aP3.__pad_6[34],
                  (ConvertClass *)0x400,
                  0,
                  0,
                  0,
                  (ConvertClass *)0x3E8,
                  0,
                  0,
                  0,
                  0,
                  0);
              }
              goto LABEL_107;
            }
            eax100 = v50 - 1;
            if ( !eax100 )
            {
              v51 = *(ConvertClass **)&stru_B05488.__pad_579C[2160];
              goto LABEL_105;
            }
            if ( eax100 == 1 )
            {
              v51 = *(ConvertClass **)&stru_B05488.__pad_579C[2164];
              goto LABEL_105;
            }
          }
LABEL_107:
          v55 = *(_DWORD *)(v48 + 52);
          if ( v55 )
          {
            eax108 = *(_DWORD *)(v55 + 184);
            switch ( eax108 )
            {
              case -3:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2172];
                goto LABEL_121;
              case -2:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2168];
                goto LABEL_121;
              case 0:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2176];
                goto LABEL_121;
              case 1:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2180];
                goto LABEL_121;
              case 2:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2184];
                goto LABEL_121;
              case 3:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2188];
                goto LABEL_121;
              case 4:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2192];
                goto LABEL_121;
              case 5:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2196];
                goto LABEL_121;
              case 6:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2200];
                goto LABEL_121;
              case 7:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2204];
                goto LABEL_121;
              case 8:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2208];
                goto LABEL_121;
              case 9:
                v56 = *(ConvertClass **)&stru_B05488.__pad_579C[2212];
LABEL_121:
                if ( v56 )
                {
                  if ( eax108 == 9 )
                  {
                    updated = UI_Update_72F4D0();
                    v59 = *(__int16 *)v56->field_2 + v47 + 70;
                    *(_DWORD *)&aP3.__pad_6[66] = 0;
                    *(_DWORD *)&aP3.__pad_6[74] = v59;
                    *(_DWORD *)&aP3.__pad_6[70] = 0;
                    *(_DWORD *)&aP3.__pad_6[78] = *(__int16 *)&v56->field_2[2] + v46 + 70;
                    *(_DWORD *)&aP3.__pad_6[18] = v47 + 70;
                    *(_DWORD *)&aP3.__pad_6[22] = v46 + 70;
                    DrawToSurfaceSHP(
                      *(int *)&stru_87C374.__pad_579C[22512],
                      updated,
                      v56,
                      0,
                      (ConvertClass *)&aP3.__pad_6[18],
                      (ConvertClass *)&aP3.__pad_6[66],
                      (ConvertClass *)0x400,
                      0,
                      0,
                      0,
                      (ConvertClass *)0x3E8,
                      0,
                      0,
                      0,
                      0,
                      0);
                  }
                  else
                  {
                    v60 = *(__int16 *)v56->field_2 + v47 + 70;
                    *(_DWORD *)&aP3.__pad_6[50] = 0;
                    v61 = *(__int16 *)&v56->field_2[2];
                    *(_DWORD *)&aP3.__pad_6[58] = v60;
                    *(_DWORD *)&aP3.__pad_6[54] = 0;
                    *(_DWORD *)&aP3.__pad_6[62] = v61 + v46 + 70;
                    *(_DWORD *)&aP3.__pad_6[10] = v47 + 70;
                    *(_DWORD *)&aP3.__pad_6[14] = v46 + 70;
                    DrawToSurfaceSHP(
                      *(int *)&stru_87C374.__pad_579C[22512],
                      *(int *)&stru_87C374.__pad_14B0[7852],
                      v56,
                      0,
                      (ConvertClass *)&aP3.__pad_6[10],
                      (ConvertClass *)&aP3.__pad_6[50],
                      (ConvertClass *)0x400,
                      0,
                      0,
                      0,
                      (ConvertClass *)0x3E8,
                      0,
                      0,
                      0,
                      0,
                      0);
                  }
                }
                break;
              default:
                break;
            }
          }
          wcscpy((wchar_t *)&stru_B05488.__pad_14B0[3960], (const wchar_t *)(v92 + 90154));
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
            _itow(*(_DWORD *)&stru_87C374.__pad_579C[4 * v45 + 12580], Format, 10);
          _itow(*(_DWORD *)&stru_87C374.__pad_579C[4 * v45 + 12452], v98, 10);
          _itow(*(_DWORD *)&stru_87C374.__pad_579C[4 * v45 + 12484], v101, 10);
          _itow(*(_DWORD *)&stru_87C374.__pad_579C[4 * v45 + 12516], v99, 10);
          v62 = *(ObjectClass **)&stru_87C374.__pad_579C[4 * v45 + 12548];
          if ( *(_BYTE *)(v84 + 63) )
            v46 += *(_DWORD *)(v84 + 76) - *(_DWORD *)&stru_B05488.__pad_579C[2268];
          v82 = v47 + 8;
          v83 = v46 + 4;
          TextRenderer::DrawText(
            (int *)&aP3.__pad_6[186],
            (size_t)&stru_B05488.__pad_14B0[3960],
            *(IUnknown **)&stru_87C374.__pad_579C[22512],
            &aP3,
            (int)&v82,
            v62,
            0,
            66);
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
          {
            v63 = *(_DWORD *)&stru_87C374.__pad_579C[4 * v45 + 12580];
            v83 += 17;
            if ( v63 >= 1 )
            {
              v65 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40276], 0, &stru_830620.__pad_579C[40200], 3785);
              swprintf((wchar_t *const)&aP3.__pad_6[210], (const size_t)v65, Format, v70);
            }
            else
            {
              v64 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40288], 0, &stru_830620.__pad_579C[40200], 3781);
              wcscpy((wchar_t *)&aP3.__pad_6[210], v64);
            }
            TextRenderer::DrawText(
              (int *)&aP3.__pad_6[202],
              (size_t)&aP3.__pad_6[210],
              *(IUnknown **)&stru_87C374.__pad_579C[22512],
              &aP3,
              (int)&v82,
              v62,
              0,
              66);
          }
          v83 += 17;
          v66 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40260], 0, &stru_830620.__pad_579C[40200], 3807);
          swprintf((wchar_t *const)&aP3.__pad_6[210], (const size_t)v66, v98, v70);
          TextRenderer::DrawText(
            (int *)&aP3.__pad_6[194],
            (size_t)&aP3.__pad_6[210],
            *(IUnknown **)&stru_87C374.__pad_579C[22512],
            &aP3,
            (int)&v82,
            v62,
            0,
            66);
          v83 += 17;
          v67 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40244], 0, &stru_830620.__pad_579C[40200], 3822);
          swprintf((wchar_t *const)&aP3.__pad_6[210], (const size_t)v67, v101, v71);
          TextRenderer::DrawText(
            (int *)&aP3.__pad_6[178],
            (size_t)&aP3.__pad_6[210],
            *(IUnknown **)&stru_87C374.__pad_579C[22512],
            &aP3,
            (int)&v82,
            v62,
            0,
            66);
          v83 += 17;
          v68 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40228], 0, &stru_830620.__pad_579C[40200], 3835);
          swprintf((wchar_t *const)&aP3.__pad_6[210], (const size_t)v68, v99, v72);
          TextRenderer::DrawText(
            (int *)&aP3.__pad_6[98],
            (size_t)&aP3.__pad_6[210],
            *(IUnknown **)&stru_87C374.__pad_579C[22512],
            &aP3,
            (int)&v82,
            v62,
            0,
            66);
          if ( ++v85 >= v86 )
            goto LABEL_135;
        }
      }
      goto LABEL_135;
    }
  }
  return result;
}


// ==== 0x006AA600  SidebarClass::UpdateProduction  this=SidebarClass  sig=csp ====
char __thiscall sub_6AA600(int this)
{
  int v2; // eax
  int v3; // ebx
  int *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // edx
  int v8; // eax
  int *v9; // esi
  unsigned __int8 *v10; // ebx
  char *v11; // eax
  int v12; // eax
  char *v13; // eax
  char *v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  _DWORD *v18; // ecx
  int v19; // eax
  bool v20; // cc
  int v21; // esi
  int *v22; // ecx
  int v23; // eax
  int v24; // eax
  char *v25; // ecx
  int v26; // ecx
  int v27; // edx
  char *v28; // esi
  _DWORD *v29; // ecx
  int v30; // esi
  int v31; // kr04_4
  int v32; // eax
  int v33; // edx
  char v35; // [esp-8h] [ebp-15Ch]
  int v36; // [esp+10h] [ebp-144h]
  char *v37; // [esp+10h] [ebp-144h]
  int *v38; // [esp+10h] [ebp-144h]
  char v39; // [esp+16h] [ebp-13Eh]
  char v40; // [esp+17h] [ebp-13Dh]
  int *v41; // [esp+18h] [ebp-13Ch]
  _DWORD *v42; // [esp+1Ch] [ebp-138h]
  char *v43; // [esp+1Ch] [ebp-138h]
  char *Src; // [esp+20h] [ebp-134h]
  int v45; // [esp+24h] [ebp-130h]
  int v46; // [esp+28h] [ebp-12Ch]
  _DWORD *v47; // [esp+2Ch] [ebp-128h]
  int v48; // [esp+30h] [ebp-124h]
  _DWORD v49[16]; // [esp+34h] [ebp-120h] BYREF
  char v50[112]; // [esp+74h] [ebp-E0h] BYREF
  char v51[112]; // [esp+E4h] [ebp-70h] BYREF

  if ( MEMORY[0xA8ED6B] || !*(_DWORD *)(this + 84) ) /*0x6aa617*/
    return 0; /*0x6aaca5*/
  v40 = 0; /*0x6aa629*/
  v2 = 26; /*0x6aa634*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6aa62e*/
    v2 = 18; /*0x6aa63d*/
  v3 = 2 * ((MEMORY[0x886F9C] - v2 - MEMORY[0xB0B4F8] + MEMORY[0x886F94] - 7) / 50); /*0x6aa670*/
  v48 = v3; /*0x6aa672*/
  v4 = (int *)__2_YAPAXI_Z(104 * ((MEMORY[0x886F9C] - v2 - MEMORY[0xB0B4F8] + MEMORY[0x886F94] - 7) / 50) + 4); /*0x6aa684*/
  if ( v4 ) /*0x6aa68e*/
  {
    *v4 = v3; /*0x6aa690*/
    v5 = v4 + 1; /*0x6aa695*/
    v42 = v5; /*0x6aa69a*/
    if ( v3 - 1 >= 0 ) /*0x6aa69e*/
    {
      v6 = v5 + 5; /*0x6aa6a1*/
      v36 = v3; /*0x6aa6a4*/
      do /*0x6aa6bb*/
      {
        SidebarClass::initButtons(v6); /*0x6aa6aa*/
        v6 += 13; /*0x6aa6b3*/
        --v36; /*0x6aa6b7*/
      }
      while ( v36 ); /*0x6aa6bb*/
      v5 = v42; /*0x6aa6bd*/
    }
    v43 = (char *)v5; /*0x6aa6c1*/
  }
  else
  {
    v43 = 0; /*0x6aa6c7*/
  }
  v7 = 0; /*0x6aa6cb*/
  if ( v3 > 0 ) /*0x6aa6cf*/
  {
    v37 = v43; /*0x6aa6d5*/
    do /*0x6aa70f*/
    {
      v8 = v7 + 2 * *(_DWORD *)(this + 68); /*0x6aa6df*/
      if ( v8 < *(_DWORD *)(this + 84) ) /*0x6aa6e4*/
      {
        v3 = v48; /*0x6aa6ed*/
        qmemcpy(v37, (const void *)(this + 52 * v8 + 88), 0x34u); /*0x6aa6fd*/
      }
      ++v7; /*0x6aa705*/
      v37 += 52; /*0x6aa70b*/
    }
    while ( v7 < v3 ); /*0x6aa70f*/
  }
  v39 = 0; /*0x6aa714*/
  v46 = 0; /*0x6aa71b*/
  if ( *(int *)(this + 84) > 0 ) /*0x6aa71f*/
  {
    v9 = (int *)(this + 88); /*0x6aa725*/
    v45 = 52; /*0x6aa734*/
    v38 = (int *)(this + 88); /*0x6aa73c*/
    Src = (char *)(this + 140); /*0x6aa740*/
    v41 = (int *)(this + 92); /*0x6aa744*/
    v47 = (_DWORD *)(this + 100); /*0x6aa748*/
    while ( 1 ) /*0x6aa759*/
    {
      v10 = (unsigned __int8 *)TechnoTypeClass::GetByTypeAndIndex(*v41, *v9); /*0x6aa759*/
      if ( v10 ) /*0x6aa75d*/
      {
        if ( !(*(int (__thiscall **)(unsigned __int8 *, int, _DWORD, _DWORD, #375 *))(*(_DWORD *)v10 + 148))( /*0x6aa781*/
                v10,
                1,
                0,
                0,
                HouseClass_Player)
          || !((_DWORD (__stdcall *)(unsigned __int8 *, _DWORD, char))HouseClass::CanBuild)(v10, 0, 1) )
        {
          goto LABEL_25; /*0x6aa788*/
        }
      }
      else if ( (unsigned int)*v9 >= *((_DWORD *)HouseClass_Player + 153) /*0x6aa7ab*/
             || !*(_BYTE *)(*(_DWORD *)(*((_DWORD *)HouseClass_Player + 150) + 4 * *v9) + 109) )
      {
LABEL_25:
        if ( *v47 ) /*0x6aa7ba*/
        {
          v11 = EventClass::AddEventEx(v50, *((_DWORD *)HouseClass_Player + 12), 0x10u, *v41, *v9, v10[3278]); /*0x6aa7e7*/
          if ( Networking_LastEventIndex < 128 ) /*0x6aa7f6*/
          {
            qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v11, 0x6Fu); /*0x6aa812*/
            v9 = v38; /*0x6aa823*/
            g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x6aa827*/
            Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x6aa83e*/
            ++Networking_LastEventIndex; /*0x6aa844*/
          }
          if ( *v41 == 7 || *v41 == 6 ) /*0x6aa859*/
          {
            MEMORY[0x88098C] = 0; /*0x6aa861*/
            MEMORY[0x880990] = 0; /*0x6aa867*/
            MEMORY[0x880994] = -1; /*0x6aa86d*/
            Mouse::SetBounds((int)&MEMORY[0x87F7E8], 0); /*0x6aa877*/
          }
        }
        if ( v10 ) /*0x6aa87e*/
        {
          v35 = v10[3278]; /*0x6aa88d*/
          v12 = (*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)v10 + 44))(v10); /*0x6aa890*/
          if ( ((_DWORD (__stdcall *)(int, char, _DWORD))HouseClass::GetBuildLimit)(v12, v35, 0) ) /*0x6aa89a*/
          {
            v13 = EventClass::AddEventEx(v51, *((_DWORD *)HouseClass_Player + 12), 0x2Eu, *v41, *v9, v10[3278]); /*0x6aa8cd*/
            if ( Networking_LastEventIndex < 128 ) /*0x6aa8dc*/
            {
              qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v13, 0x6Fu); /*0x6aa8f8*/
              v9 = v38; /*0x6aa909*/
              g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x6aa90d*/
              Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x6aa924*/
              ++Networking_LastEventIndex; /*0x6aa92a*/
            }
          }
        }
        if ( v48 > 0 ) /*0x6aa937*/
        {
          v14 = v43; /*0x6aa939*/
          v15 = v48; /*0x6aa93d*/
          do /*0x6aa99b*/
          {
            if ( *(_DWORD *)v14 == *v9 && *((_DWORD *)v14 + 1) == v9[1] ) /*0x6aa94f*/
            {
              memset(v49, 0, 16); /*0x6aa957*/
              v49[5] = 0; /*0x6aa967*/
              v49[7] = MEMORY[0xA8ED84]; /*0x6aa96b*/
              v49[9] = 0; /*0x6aa96f*/
              v49[10] = 0; /*0x6aa973*/
              LOBYTE(v49[6]) = 0; /*0x6aa982*/
              v49[11] = 1; /*0x6aa987*/
              qmemcpy(v14, v49, 0x34u); /*0x6aa98f*/
              v9 = v38; /*0x6aa991*/
            }
            v14 += 52; /*0x6aa997*/
            --v15; /*0x6aa99a*/
          }
          while ( v15 ); /*0x6aa99b*/
        }
        v16 = *(_DWORD *)(this + 84); /*0x6aa99d*/
        if ( v16 > 1 && v46 < v16 - 1 ) /*0x6aa9ae*/
          memcpy(v9, Src, 52 * v16 - v45); /*0x6aa9c6*/
        v39 = 1; /*0x6aa9d1*/
        v17 = *(_DWORD *)(this + 84) - 1; /*0x6aa9d6*/
        v40 = 1; /*0x6aa9d7*/
        v18 = (_DWORD *)(this + 52 * v17); /*0x6aa9e2*/
        v18[25] = 0; /*0x6aa9ea*/
        v18[22] = 0; /*0x6aa9ed*/
        v18[23] = 0; /*0x6aa9f4*/
        v18[24] = 0; /*0x6aa9f7*/
        *(_DWORD *)(this + 4 * (v17 + 4 * (3 * v17 + 6) + 2)) = 0; /*0x6aa9fd*/
        v18[27] = 0; /*0x6aaa01*/
        v18[29] = MEMORY[0xA8ED84]; /*0x6aaa0b*/
        v19 = v49[14]; /*0x6aaa0d*/
        v18[32] = 0; /*0x6aaa11*/
        v18[30] = v19; /*0x6aaa17*/
        v18[31] = 0; /*0x6aaa1a*/
        v18[34] = 0; /*0x6aaa25*/
        --*(_DWORD *)(this + 84); /*0x6aaa37*/
        --v46; /*0x6aaa3e*/
        v45 -= 52; /*0x6aaa46*/
        *(_BYTE *)(this + 60) = 1; /*0x6aaa54*/
        v47 -= 13; /*0x6aaa58*/
        v41 -= 13; /*0x6aaa5c*/
        Src -= 52; /*0x6aaa60*/
        v9 -= 13; /*0x6aaa64*/
      }
      v45 += 52; /*0x6aaa6d*/
      v47 += 13; /*0x6aaa85*/
      v9 += 13; /*0x6aaa91*/
      v20 = ++v46 < *(_DWORD *)(this + 84); /*0x6aaa97*/
      v41 += 13; /*0x6aaa9d*/
      Src += 52; /*0x6aaaa1*/
      v38 = v9; /*0x6aaaa5*/
      if ( !v20 ) /*0x6aaaa9*/
      {
        v3 = v48; /*0x6aaaaf*/
        break; /*0x6aaaaf*/
      }
    }
  }
  if ( MEMORY[0x880D80][997 * *(_DWORD *)(this + 56)] <= 0 ) /*0x6aaaca*/
  {
    DialogControl::Show((_BYTE *)&MEMORY[0xB07C48] + 96 * *(_DWORD *)(this + 56)); /*0x6aaae7*/
    v21 = 0; /*0x6aaaec*/
    v22 = MEMORY[0x880D80]; /*0x6aaaee*/
    v23 = 0; /*0x6aaaf3*/
    while ( *v22 <= 0 ) /*0x6aaaf7*/
    {
      v23 += 3988; /*0x6aaaf9*/
      ++v21; /*0x6aaafe*/
      v22 += 997; /*0x6aaaff*/
      if ( v23 >= 15952 ) /*0x6aab0a*/
        goto LABEL_54; /*0x6aab0a*/
    }
    if ( v21 == -1 ) /*0x6aab11*/
    {
LABEL_54:
      Tactical::UpdateUIVisibility(&MEMORY[0x87F7E8]); /*0x6aab13*/
      if ( MEMORY[0xB0B478] ) /*0x6aab24*/
      {
        MEMORY[0x884B80] = -1; /*0x6aab2a*/
        MEMORY[0x884B7C] = *((__int16 *)MEMORY[0xB0B478] + 3); /*0x6aab38*/
      }
      goto LABEL_58; /*0x6aab3e*/
    }
    if ( v21 != MEMORY[0x884B84] ) /*0x6aab4a*/
    {
      GadgetClass::Hide((_BYTE *)&MEMORY[0xB07C48] + 96 * MEMORY[0x884B84]); /*0x6aab58*/
      *((_BYTE *)&MEMORY[0x880D48] + 3988 * MEMORY[0x884B84]) = 0; /*0x6aab76*/
      ((void (*)(void))SidebarClass::sortCameoList)(); /*0x6aab7a*/
      MEMORY[0x884B84] = v21; /*0x6aab82*/
      GadgetClass::Show((_BYTE *)&MEMORY[0xB07C48] + 96 * v21); /*0x6aab91*/
      *((_BYTE *)&MEMORY[0x880D48] + 3988 * MEMORY[0x884B84]) = 1; /*0x6aabaf*/
      ((void (*)(void))SidebarClass::RefreshCameoGrid)(); /*0x6aabb3*/
      Tactical::UpdateUIVisibility(&MEMORY[0x87F7E8]); /*0x6aabbd*/
      MEMORY[0x884B8F] = 1; /*0x6aabc2*/
    }
  }
  else
  {
    Tactical::UpdateUIVisibility(&MEMORY[0x87F7E8]); /*0x6aaad1*/
  }
LABEL_58:
  if ( v40 ) /*0x6aabcf*/
  {
    v24 = 0; /*0x6aabd5*/
    if ( v3 <= 0 ) /*0x6aabd9*/
      goto LABEL_79; /*0x6aabd9*/
    v25 = v43; /*0x6aabe3*/
    while ( !*(_DWORD *)v25 && !*((_DWORD *)v25 + 1) ) /*0x6aabec*/
    {
      ++v24; /*0x6aabee*/
      v25 += 52; /*0x6aabef*/
      if ( v24 >= v3 ) /*0x6aabf4*/
        goto LABEL_79; /*0x6aabf4*/
    }
    v26 = *(_DWORD *)(this + 84); /*0x6aabf8*/
    if ( v26 && (v27 = 0, v26 > 0) ) /*0x6aac03*/
    {
      v28 = &v43[52 * v24]; /*0x6aac0b*/
      v29 = (_DWORD *)(this + 88); /*0x6aac14*/
      while ( *v29 != *(_DWORD *)v28 || v29[1] != *((_DWORD *)v28 + 1) ) /*0x6aac25*/
      {
        ++v27; /*0x6aac2a*/
        v29 += 13; /*0x6aac2b*/
        if ( v27 >= *(_DWORD *)(this + 84) ) /*0x6aac30*/
          goto LABEL_79; /*0x6aac30*/
      }
      v30 = (v24 - v27) / -2 + *(_DWORD *)(this + 68); /*0x6aac44*/
      v31 = *(_DWORD *)(this + 84) - v48; /*0x6aac4e*/
      *(_DWORD *)(this + 68) = v30; /*0x6aac50*/
      v32 = v31 / 2; /*0x6aac53*/
      v33 = v30; /*0x6aac57*/
      if ( v30 >= v31 / 2 ) /*0x6aac59*/
        v33 = v31 / 2; /*0x6aac5b*/
      if ( v33 >= 0 ) /*0x6aac5f*/
      {
        if ( v30 < v32 ) /*0x6aac6a*/
          v32 = v30; /*0x6aac6c*/
        *(_DWORD *)(this + 68) = v32; /*0x6aac6e*/
      }
      else
      {
        *(_DWORD *)(this + 68) = 0; /*0x6aac63*/
      }
    }
    else
    {
LABEL_79:
      *(_DWORD *)(this + 68) = 0; /*0x6aac73*/
    }
    MEMORY[0x884B8F] = 1; /*0x6aac76*/
  }
  if ( v43 ) /*0x6aac85*/
    __3_YAXPAX_Z(v43 - 4); /*0x6aac8f*/
  return v39; /*0x6aac9b*/
}


// ==== 0x006AACE0  ObjectClass::method_6AACE0  this=ObjectClass  sig=csp ====
int __thiscall sub_6AACE0(_DWORD *this, int a2, int a3)
{
  this->fallRate = a2; /*0x6aace8*/
  this->nextObject = a3; /*0x6aaceb*/
  return a2; /*0x6aacee*/
}


// ==== 0x006AAD00  SelectClass_StripClass_SidebarClass::ProcessInput  this=SelectClass@StripClass@SidebarClass  sig=csp ====
int __thiscall SidebarClass::ProcessInput(BuildingTypeClass *this, int a2, ControlClass *aP2, char a4)
{
  int v5; // eax
  int v7; // esi
  int v8; // ebx
  IUnknown *v9; // ebp
  wchar_t *v10; // edx
  int v11; // edx
  int v12; // edi
  int v13; // eax
  int v14; // eax
  char *v15; // eax
  char *v16; // eax
  BuildingTypeClass *v17; // edx
  int v18; // ecx
  _DWORD *v19; // eax
  char *v20; // eax
  DWORD Time; // eax
  int *BuildLimit; // eax
  char *v23; // eax
  FactoryClass *Type; // esi
  int v25; // edi
  SelectClass_StripClass_SidebarClass *v26; // eax
  char *eax54; // eax
  IUnknown *v28; // eax
  char *v29; // ecx
  ControlClass *v27; // edi
  int v31; // eax
  IUnknown *v32; // ecx
  char *v33; // eax
  int Member09; // eax
  int esi70; // esi
  int ControlClass_field_0x0C; // ebp
  _DWORD *ecx70; // ecx
  int v38; // ebp
  FactoryClass *v35; // ecx
  int BuildTimeFrames; // eax
  IUnknown *v37; // edx
  IUnknown **v42; // esi
  int v43; // esi
  int v44; // eax
  char cl77; // cl
  IUnknown *v46; // eax
  char *v47; // eax
  BuildingTypeClass *v48; // esi
  _BYTE *esi101; // esi
  ObjectClass *v45; // edi
  int v51; // edx
  int *v52; // ebp
  unsigned int v53; // edi
  IUnknown *v49; // edi
  int v55; // eax
  int v56; // edx
  BuildingTypeClass *v57; // eax
  _DWORD *v58; // ebx
  IUnknown *v54; // eax
  SelectClass_StripClass_SidebarClass *v60; // [esp-14h] [ebp-C0h]
  unsigned __int8 _FFFFFFF0; // [esp-10h] [ebp-BCh]
  IUnknown *v62; // [esp-Ch] [ebp-B8h]
  IUnknown *v63; // [esp-8h] [ebp-B4h]
  int _FFFFFFF8a; // [esp-8h] [ebp-B4h]
  SelectClass_StripClass_SidebarClass *v65; // [esp-4h] [ebp-B0h]
  SelectClass_StripClass_SidebarClass *v61; // [esp-4h] [ebp-B0h]
  char v67; // [esp+13h] [ebp-99h]
  char ShouldDisableCameo; // [esp+13h] [ebp-99h]
  IUnknown *v64; // [esp+14h] [ebp-98h]
  unsigned __int8 aP4; // [esp+14h] [ebp-98h]
  wchar_t *v71; // [esp+18h] [ebp-94h] BYREF
  char TypeProductionCount; // [esp+1Dh] [ebp-8Fh]
  char v73; // [esp+1Eh] [ebp-8Eh]
  char var8D; // [esp+1Fh] [ebp-8Dh]
  BuildingTypeClass *v70; // [esp+20h] [ebp-8Ch]
  ControlClass *aP3; // [esp+24h] [ebp-88h]
  int v77; // [esp+28h] [ebp-84h]
  IUnknown *v78; // [esp+2Ch] [ebp-80h]
  SelectClass_StripClass_SidebarClass *v74; // [esp+34h] [ebp-78h]
  char v80[112]; // [esp+3Ch] [ebp-70h] BYREF

  v70 = this;
  v5 = *(_DWORD *)&this->BarrelVoxel[8];
  if ( !v5 )
    return 1;
  v7 = *(_DWORD *)&this->BarrelVoxel[12] + 2 * *(_DWORD *)(v5 + 68);
  v78 = (IUnknown *)v7;
  v8 = 52 * v7;
  v9 = *(IUnknown **)(52 * v7 + v5 + 92);
  v64 = *(IUnknown **)(52 * v7 + v5 + 88);
  v10 = *(wchar_t **)(52 * v7 + v5 + 100);
  aP3 = *(ControlClass **)(52 * v7 + v5 + 96);
  v71 = v10;
  Mouse::SetCursor((int)&MEMORY[0x87F7E8], 0, 0);
  v67 = a4 & 1;
  if ( v7 >= *(_DWORD *)(*(_DWORD *)&this->BarrelVoxel[8] + 84) )
    goto LABEL_116;
  if ( v9 != (IUnknown *)31 )
  {
    v12 = TechnoTypeClass::GetByTypeAndIndex((int)v9, (int)v64);
    v77 = v12;
    if ( v12 )
    {
      v13 = a2;
      if ( (a2 & 8) != 0 )
      {
        LOBYTE(v13) = a2 & 0xF7;
        a2 = v13;
      }
      if ( (v13 & 0x10) != 0 )
      {
        if ( v71 )
        {
          if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3796]
            && AbstractClass::IsTechnoType(*(void **)&MEMORY[0x87F8E4].__pad_1D4[3796]) )
          {
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3796] = 0;
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = 0;
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3804] = -1;
            Mouse::SetBounds((int)&MEMORY[0x87F7E8], 0);
          }
          if ( !*((_DWORD *)v71 + 14) || *((_BYTE *)v71 + 112) )
          {
            PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 396), 0x2000, 1.0, 0);
            VoxClass::FindAndPlay(&stru_830620.__pad_579C[40400], -1, -1);
            v65 = (SelectClass_StripClass_SidebarClass *)*(unsigned __int8 *)(v12 + 3278);
            v63 = v64;
            v62 = v9;
            if ( v67 )
              _FFFFFFF0 = 46;
            else
              _FFFFFFF0 = 16;
            v60 = *(SelectClass_StripClass_SidebarClass **)&HouseClass_Player->__pad_28[8];
            goto LABEL_41;
          }
          PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 396), 0x2000, 1.0, 0);
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[40368], -1, -1);
          v16 = EventClass::AddEventEx(
                  v80,
                  *(SelectClass_StripClass_SidebarClass **)&HouseClass_Player->__pad_28[8],
                  0xFu,
                  v9,
                  (SelectClass_StripClass_SidebarClass *)v64,
                  (SelectClass_StripClass_SidebarClass *)*(unsigned __int8 *)(v12 + 3278));
          if ( Networking_LastEventIndex < 128 )
          {
            qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v16, 0x6Fu);
            g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
            Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F;
            ++Networking_LastEventIndex;
          }
          v11 = 997 * *(_DWORD *)(*(_DWORD *)&v70->BarrelVoxel[8] + 56);
          MEMORY[0x87F8E4].__pad_125C[3988 * *(_DWORD *)(*(_DWORD *)&v70->BarrelVoxel[8] + 56) + 552] = 1;
        }
        else
        {
          v17 = v70;
          v18 = v7 + 4 * (3 * v7 + 6) + 2;
          v19 = (_DWORD *)(*(_DWORD *)&v70->BarrelVoxel[8] + 4 * v18);
          if ( *v19 == 1 )
          {
            *v19 = 2;
            *(_BYTE *)(*(_DWORD *)&v17->BarrelVoxel[8] + 60) = 1;
            MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0);
            PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 396), 0x2000, 1.0, 0);
            VoxClass::FindAndPlay(&stru_830620.__pad_579C[40368], -1, -1);
            v20 = EventClass::AddEventEx(
                    v80,
                    *(SelectClass_StripClass_SidebarClass **)&HouseClass_Player->__pad_28[8],
                    0xFu,
                    v9,
                    (SelectClass_StripClass_SidebarClass *)v64,
                    (SelectClass_StripClass_SidebarClass *)*(unsigned __int8 *)(v12 + 3278));
            if ( Networking_LastEventIndex < 128 )
            {
              qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v20, 0x6Fu);
              Time = timeGetTime();
              v18 = Networking_NextPacketIndex;
              v12 = v77;
              g_CrateSystemState[Networking_NextPacketIndex] = Time;
              Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F;
              ++Networking_LastEventIndex;
            }
          }
          LOBYTE(v18) = *(_BYTE *)(v12 + 3278);
          BuildLimit = (int *)HouseClass::GetBuildLimit(HouseClass_Player, (int)v9, (IUnknown *)v18, aP3);
          if ( BuildLimit && FactoryClass::IsQueued(BuildLimit, v12) )
          {
            PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 396), 0x2000, 1.0, 0);
            if ( !v67 )
            {
              v23 = EventClass::AddEventEx(
                      v80,
                      *(SelectClass_StripClass_SidebarClass **)&HouseClass_Player->__pad_28[8],
                      0x10u,
                      v9,
                      (SelectClass_StripClass_SidebarClass *)v64,
                      (SelectClass_StripClass_SidebarClass *)*(unsigned __int8 *)(v12 + 3278));
              if ( Networking_LastEventIndex >= 128 )
                goto LABEL_45;
              goto LABEL_44;
            }
            v65 = (SelectClass_StripClass_SidebarClass *)*(unsigned __int8 *)(v12 + 3278);
            v63 = v64;
            v62 = v9;
            _FFFFFFF0 = 46;
            v60 = *(SelectClass_StripClass_SidebarClass **)&HouseClass_Player->__pad_28[8];
LABEL_41:
            v23 = EventClass::AddEventEx(v80, v60, _FFFFFFF0, v62, (SelectClass_StripClass_SidebarClass *)v63, v65);
            if ( Networking_LastEventIndex >= 128 )
              goto LABEL_45;
LABEL_44:
            qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v23, 0x6Fu);
            g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
            v11 = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F;
            Networking_NextPacketIndex = v11;
            ++Networking_LastEventIndex;
          }
        }
      }
LABEL_45:
      if ( (a2 & 1) != 0 )
      {
        if ( !v71 || *((_DWORD *)v71 + 14) && !*((_BYTE *)v71 + 112) )
        {
          LOBYTE(v11) = *(_BYTE *)(v77 + 3278);
          v43 = HouseClass::GetBuildLimit(HouseClass_Player, (int)v9, (IUnknown *)v11, aP3);
          v44 = TechnoTypeClass::GetByTypeAndIndex(
                  *(_DWORD *)(v8 + *(_DWORD *)&v70->BarrelVoxel[8] + 92),
                  *(_DWORD *)(v8 + *(_DWORD *)&v70->BarrelVoxel[8] + 88));
          if ( !v44 || (cl77 = *(_BYTE *)(v44 + 3278), LOBYTE(v71) = 1, !cl77) )
            LOBYTE(v71) = 0;
          ShouldDisableCameo = HouseClass::ShouldDisableCameo(HouseClass_Player, v44);
          if ( v43
            && (*(_DWORD *)(v43 + 56) && !*(_BYTE *)(v43 + 112) || *(_DWORD *)(v43 + 88) || *(int *)(v43 + 80) > 0) )
          {
            var8D = 1;
            if ( v9 == (IUnknown *)7 )
            {
LABEL_85:
              VoxClass::FindAndPlay(&stru_830620.__pad_579C[40348], -1, -1);
              goto LABEL_117;
            }
          }
          else
          {
            var8D = 0;
            if ( v9 == (IUnknown *)16 )
            {
              if ( !ShouldDisableCameo )
                VoxClass::FindAndPlay(&stru_830620.__pad_579C[40332], -1, -1);
            }
            else if ( !ShouldDisableCameo )
            {
              VoxClass::FindAndPlay(&stru_830620.__pad_579C[40316], -1, -1);
            }
          }
          TypeProductionCount = SidebarClass::getTypeProductionCount(
                                  HouseClass_Player,
                                  (int)v9,
                                  *(_BYTE *)(v77 + 3278),
                                  (int)aP3);
          v73 = 0;
          if ( !ShouldDisableCameo )
          {
            v46 = (IUnknown *)PlayVocClass(
                                *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 396),
                                0x2000,
                                1.0,
                                0);
            if ( !v43 && !TypeProductionCount )
            {
              LOBYTE(v46) = *(_BYTE *)(v77 + 3278);
              SidebarClass::MarkTabForRebuild(HouseClass_Player, (int)v9, v46, aP3);
              v73 = 1;
            }
            v47 = EventClass::AddEventEx(
                    v80,
                    *(SelectClass_StripClass_SidebarClass **)&HouseClass_Player->__pad_28[8],
                    0xEu,
                    *(IUnknown **)(v8 + *(_DWORD *)&v70->BarrelVoxel[8] + 92),
                    *(SelectClass_StripClass_SidebarClass **)(v8 + *(_DWORD *)&v70->BarrelVoxel[8] + 88),
                    (SelectClass_StripClass_SidebarClass *)(unsigned __int8)v71);
            if ( Networking_LastEventIndex < 128 )
            {
              qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v47, 0x6Fu);
              g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
              Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F;
              ++Networking_LastEventIndex;
            }
            if ( v73 )
              goto LABEL_120;
          }
          if ( !TypeProductionCount )
          {
LABEL_120:
            if ( !var8D && !ShouldDisableCameo )
            {
              v48 = v70;
              *(_DWORD *)(*(_DWORD *)&v70->BarrelVoxel[8] + 4 * (_DWORD)&v78->__pad_10[12 * (_DWORD)v78 + 10]) = 1;
              *(_BYTE *)(*(_DWORD *)&v48->BarrelVoxel[8] + 60) = 1;
              MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0);
              esi101 = (_BYTE *)TechnoTypeClass::GetByTypeAndIndex(
                                  (int)v9,
                                  *(_DWORD *)(v8 + *(_DWORD *)&v48->BarrelVoxel[8] + 88));
              if ( esi101 )
              {
                v45 = (ObjectClass *)MEMORY[0xA8B550];
                v51 = *(_DWORD *)esi101;
                v71 = (wchar_t *)MEMORY[0xA8B550];
                v52 = &HouseClass_Player->field_24;
                v53 = (int)((unsigned __int64)(1272582903LL
                                             * (int)v45
                                             * (*(int (__thiscall **)(_BYTE *, IUnknown *))(v51 + 132))(
                                                 esi101,
                                                 HouseClass_Player)) >> 32) >> 4;
                if ( (*(int (__stdcall **)(int *))(*v52 + 24))(v52) >= (int)((v53 >> 31) + v53) )
                {
                  if ( (*(int (__thiscall **)(_BYTE *, int, _DWORD, _DWORD, IUnknown *))(*(_DWORD *)esi101 + 148))(
                         esi101,
                         1,
                         0,
                         0,
                         HouseClass_Player) )
                  {
                    v49 = (IUnknown *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)esi101 + 136))(esi101);
                    v55 = *(_DWORD *)esi101;
                    v78 = v49;
                    if ( (*(int (__thiscall **)(_BYTE *))(v55 + 44))(esi101) == 7 && esi101[5489] )
                      v49 = (IUnknown *)Math::RoundToInt(
                                          (double)(int)v78
                                        * *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1880));
                    if ( (int)v49 <= (int)((char *)v71 + 15) )
                      v49 = (IUnknown *)((char *)v71 + 15);
                    v56 = (int)v49 / 54;
                    if ( 54 * ((int)v49 / 54) < (int)v71 + 15 )
                      ++v56;
                    if ( v56 >= 1 )
                    {
                      if ( v56 > 255 )
                        v56 = 255;
                    }
                    else
                    {
                      v56 = 1;
                    }
                    v57 = v70;
                    *(_DWORD *)(v8 + *(_DWORD *)&v70->BarrelVoxel[8] + 108) = 0;
                    v58 = (_DWORD *)(v8 + *(_DWORD *)&v57->BarrelVoxel[8] + 108);
                    v54 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664];
                    v58[5] = v56;
                    v58[2] = v54;
                    v58[3] = v74;
                    v58[4] = v56;
                  }
                }
              }
            }
          }
          goto LABEL_117;
        }
        if ( !ObjectClass::IsCliffWall(v71) )
        {
          PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 396), 0x2000, 1.0, 0);
          if ( v9 == (IUnknown *)16 )
            v29 = &stru_830620.__pad_579C[40332];
          else
            v29 = &stru_830620.__pad_579C[40316];
          VoxClass::FindAndPlay(v29, -1, -1);
          v27 = (ControlClass *)v70;
          v31 = TechnoTypeClass::GetByTypeAndIndex(
                  *(_DWORD *)(v8 + *(_DWORD *)&v70->BarrelVoxel[8] + 92),
                  *(_DWORD *)(v8 + *(_DWORD *)&v70->BarrelVoxel[8] + 88));
          if ( !v31 || (aP4 = 1, !*(_BYTE *)(v31 + 3278)) )
            aP4 = 0;
          LOBYTE(v32) = *(_BYTE *)(v77 + 3278);
          SidebarClass::MarkTabForRebuild(HouseClass_Player, (int)v9, v32, aP3);
          v33 = EventClass::AddEventEx(
                  v80,
                  *(SelectClass_StripClass_SidebarClass **)&HouseClass_Player->__pad_28[8],
                  0xEu,
                  *(IUnknown **)(v8 + *(_DWORD *)&v70->BarrelVoxel[8] + 92),
                  *(SelectClass_StripClass_SidebarClass **)(v8 + *(_DWORD *)&v70->BarrelVoxel[8] + 88),
                  (SelectClass_StripClass_SidebarClass *)aP4);
          if ( Networking_LastEventIndex < 128 )
          {
            qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v33, 0x6Fu);
            v27 = (ControlClass *)v70;
            g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
            Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F;
            ++Networking_LastEventIndex;
          }
          Member09 = 0;
          esi70 = 4 * (_DWORD)&v78->__pad_10[12 * (_DWORD)v78 + 10];
          *(_DWORD *)(esi70 + v27[2].ControlClass_field_0x0C) = 1;
          ControlClass_field_0x0C = v27[2].ControlClass_field_0x0C;
          ecx70 = *(_DWORD **)(v8 + ControlClass_field_0x0C + 100);
          if ( ecx70 )
            Member09 = ObjectClass::GetMember09(ecx70);
          if ( *(_DWORD *)(esi70 + ControlClass_field_0x0C) == 1 )
          {
            v38 = *(_DWORD *)(v8 + ControlClass_field_0x0C + 108);
            if ( v38 > Member09 )
              Member09 = (v38 + Member09) / 2;
          }
          v35 = (FactoryClass *)v71;
          *(_DWORD *)(v8 + v27[2].ControlClass_field_0x0C + 108) = Member09;
          BuildTimeFrames = FactoryClass::GetBuildTimeFrames(v35);
          v37 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664];
          ++BuildTimeFrames;
          v42 = (IUnknown **)(v8 + v27[2].ControlClass_field_0x0C + 116);
          *(_DWORD *)(v8 + v27[2].ControlClass_field_0x0C + 128) = BuildTimeFrames;
          *v42 = v37;
          v42[1] = (IUnknown *)v74;
          v42[2] = (IUnknown *)BuildTimeFrames;
          *(_BYTE *)(v27[2].ControlClass_field_0x0C + 60) = 1;
          MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0);
          MEMORY[0x87F8E4].__pad_125C[16463] = 1;
          goto LABEL_117;
        }
        Type = (FactoryClass *)AbstractClass::GetType(v71);
        if ( !Type )
        {
          if ( SidebarClass::draw2(v71) != -1 )
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3816] = 1;
          goto LABEL_117;
        }
        PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 396), 0x2000, 1.0, 0);
        v25 = (*(int (__thiscall **)(FactoryClass *, _DWORD, _DWORD))(*(_DWORD *)Type->__pad_0 + 400))(Type, 0, 0);
        if ( !v25 )
        {
          v61 = (SelectClass_StripClass_SidebarClass *)*(unsigned __int8 *)(v77 + 3278);
          v26 = (SelectClass_StripClass_SidebarClass *)(*(int (__thiscall **)(FactoryClass *))(*(_DWORD *)Type->__pad_0
                                                                                             + 56))(Type);
          eax54 = EventClass::AddEventEx(v80, v26, 0x10u, v9, (SelectClass_StripClass_SidebarClass *)v64, v61);
          if ( Networking_LastEventIndex < 128 )
          {
            qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], eax54, 0x6Fu);
            g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
            Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F;
            ++Networking_LastEventIndex;
          }
          goto LABEL_85;
        }
        if ( (*(int (__thiscall **)(FactoryClass *))(*(_DWORD *)Type->__pad_0 + 44))(Type) == 6 )
        {
          BuildingPlacement::Activate((int)HouseClass_Player, v25, Type);
          goto LABEL_117;
        }
        _FFFFFFF8a = *(unsigned __int8 *)(v77 + 3278);
        v28 = (IUnknown *)(*(int (__thiscall **)(FactoryClass *))(*(_DWORD *)Type->__pad_0 + 56))(Type);
        v15 = EventClass::Init(v80, v28, 11, (int)v9, -1, _FFFFFFF8a, &MEMORY[0xB077F8].__pad_524[188]);
LABEL_60:
        if ( Networking_LastEventIndex < 128 )
        {
          qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v15, 0x6Fu);
          g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
          Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F;
          ++Networking_LastEventIndex;
        }
        goto LABEL_117;
      }
      goto LABEL_117;
    }
LABEL_116:
    a2 = 0;
    goto LABEL_117;
  }
  if ( v64 == (IUnknown *)-1 )
    goto LABEL_116;
  v14 = a2;
  if ( (a2 & 8) != 0 )
  {
    LOBYTE(v14) = a2 & 0xF7;
    a2 = v14;
  }
  if ( (v14 & 0x10) != 0 )
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3816] = -1;
  if ( (v14 & 1) == 0 || (unsigned int)v64 >= *(_DWORD *)&HouseClass_Player->__pad_220[68] )
    goto LABEL_117;
  PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 396), 0x2000, 1.0, 0);
  if ( SuperClass::CanFire(*(_DWORD *)(*(_DWORD *)&HouseClass_Player->__pad_220[56] + 4 * (_DWORD)v64)) )
  {
    if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player->__pad_220[56] + 4 * (_DWORD)v64) + 40) + 188) )
    {
      v71 = 0;
      v15 = SidebarClass::SetFlashEntry(
              v80,
              *(_DWORD *)&HouseClass_Player->__pad_28[8],
              18,
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player->__pad_220[56] + 4 * (_DWORD)v64) + 40)
                        + 152),
              &v71);
      goto LABEL_60;
    }
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3796] = 0;
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = 0;
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3804] = -1;
    Mouse::SetBounds((int)&MEMORY[0x87F7E8], 0);
    BuildingClass::TogglePower2(&MEMORY[0x87F7E8], 0);
    BuildingClass::TogglePower(&MEMORY[0x87F7E8], 0);
    MEMORY[0x87F8E4].__pad_1D4[3810] = 0;
    MEMORY[0x87F8E4].__pad_1D4[3811] = 0;
    MEMORY[0x87F8E4].__pad_1D4[3812] = 0;
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3816] = v64;
    MapClass::UnselectAll_ClearLimboLaunchers();
    VoxClass::FindAndPlay(&stru_830620.__pad_579C[40380], -1, -1);
  }
  else
  {
    nullsub_231();
  }
LABEL_117:
  CellClass::Draw((int)v70, a2, aP2, 0);
  return 1;
}


// ==== 0x006AB990  SelectClass_StripClass_SidebarClass::select  this=SelectClass@StripClass@SidebarClass  sig=csp ====
int __thiscall SelectClass_StripClass_SidebarClass::_vt28(int this)
{
  int v2; // eax
  int result; // eax

  SidebarClass::updateStripVisibility((_DWORD *)MEMORY[0x887368]); /*0x6ab99a*/
  SidebarClass::initializeStrip((_DWORD *)MEMORY[0x887368], 0); /*0x6ab9a7*/
  v2 = *(_DWORD *)(this + 44); /*0x6ab9ac*/
  *(_BYTE *)(this + 52) = 1; /*0x6ab9b1*/
  *(_BYTE *)(v2 + 60) = 1; /*0x6ab9bb*/
  result = MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x6ab9be*/
  MEMORY[0x884B8F] = 1; /*0x6ab9c3*/
  MEMORY[0xB0B518] = 1; /*0x6ab9c9*/
  return result; /*0x6ab9cf*/
}


// ==== 0x006AB9E0  SelectClass_StripClass_SidebarClass::deselect  this=SelectClass@StripClass@SidebarClass  sig=csp ====
int __thiscall SelectClass_StripClass_SidebarClass::_vt29(int this)
{
  int v2; // eax
  int result; // eax

  SidebarClass::updateStripPosition((_DWORD *)MEMORY[0x887368]); /*0x6ab9e9*/
  v2 = *(_DWORD *)(this + 44); /*0x6ab9ee*/
  *(_BYTE *)(this + 52) = 0; /*0x6ab9f1*/
  *(_BYTE *)(v2 + 60) = 1; /*0x6ab9fc*/
  result = MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x6aba00*/
  MEMORY[0x884B8F] = 1; /*0x6aba05*/
  MEMORY[0xB0B518] = 1; /*0x6aba0c*/
  return result; /*0x6aba13*/
}


// ==== 0x006ABA40  SBGadgetClass@SidebarClass::checkHealth  this=SBGadgetClass@SidebarClass  sig=csp ====
int __thiscall ObjectClass::checkHealth(SBGadgetClass_SidebarClass *this)
{
  Mouse::SetCursor((int)&MEMORY[0x87F7E8], 0, 0); /*0x6aba49*/
  return 1; /*0x6aba53*/
}


// ==== 0x006ABA60  ObjectClass::method_6ABA60  this=ObjectClass  sig=csp ====
char __thiscall sub_6ABA60(int this, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // eax
  _DWORD *i; // edx

  v4 = *(_DWORD *)(this + 84); /*0x6aba62*/
  v5 = 0; /*0x6aba65*/
  if ( v4 <= 0 ) /*0x6aba6a*/
    return 0; /*0x6aba88*/
  for ( i = (_DWORD *)(this + 88); i[1] != a3 || *i != a4; i += 13 ) /*0x6aba74*/
  {
    if ( ++v5 >= v4 ) /*0x6aba86*/
      return 0; /*0x6aba86*/
  }
  *(_DWORD *)(this + 52 * v5 + 100) = a2; /*0x6aba9e*/
  *(_BYTE *)(this + 61) = 1; /*0x6abaa2*/
  *(_BYTE *)(this + 60) = 1; /*0x6abaa5*/
  MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x6abaad*/
  return 1; /*0x6aba88*/
}


// ==== 0x006ABAC0  PlayerClass::HasPlayers  this=CommandClass  sig=csp ====
BOOL __thiscall PlayerClass_HasPlayers(_DWORD *this)
{
  return this->q015 > 0; /*0x6abaca*/
}


// ==== 0x006ABAD0  HouseClass::RouteFactoryRemoval  this=HouseClass  sig=csp ====
char __thiscall HouseClass::RouteFactoryRemoval(void *this, int a2, int a3, FactoryClass *aP3)
{
  int v5; // eax

  switch ( a2 ) /*0x6abadf*/
  {
    case 15: /*0x6abadf*/
    case 16: /*0x6abadf*/
      v5 = 2; /*0x6abb36*/
      break;
    case 1: /*0x6abadf*/
    case 40: /*0x6abadf*/
    case 2: /*0x6abadf*/
    case 3: /*0x6abadf*/
      v5 = 3; /*0x6abb2f*/
      break;
    case 6: /*0x6abadf*/
    case 7: /*0x6abadf*/
      v5 = GetHouseTechLevel(a2, a3) == 5; /*0x6abb2b*/
      break;
    case 57: /*0x6abadf*/
    case 32: /*0x6abadf*/
    case 31: /*0x6abadf*/
      v5 = 1; /*0x6abb13*/
      break;
    default:
      v5 = -1; /*0x6abb0e*/
      break;
  }
  return HouseClass::RemoveFromProductionQueue((int)this + 3988 * v5 + 5444, aP3); /*0x6abb59*/
}


// ==== 0x006ABB60  HouseClass::RemoveFromProductionQueue  this=HouseClass  sig=csp ====
char __thiscall sub_6ABB60(int this, _DWORD *a2)
{
  int v3; // esi
  int Type; // eax
  int v5; // eax
  char v6; // bl
  int v7; // ebp
  _DWORD *v8; // esi
  char v11; // [esp+18h] [ebp+4h]

  v3 = this; /*0x6abb69*/
  if ( a2 ) /*0x6abb71*/
  {
    if ( AbstractClass::GetType(a2) ) /*0x6abb75*/
    {
      Type = AbstractClass::GetType(a2); /*0x6abb80*/
      if ( Type ) /*0x6abb87*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)Type + 44))(Type) == 6 ) /*0x6abb93*/
        {
          v5 = AbstractClass::GetType(a2); /*0x6abb97*/
          if ( v5 ) /*0x6abba0*/
            v5 &= -((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 6); /*0x6abbb2*/
          Selection::ClearGlobals((void *)v5); /*0x6abbb6*/
          v3 = this; /*0x6abbbb*/
        }
      }
    }
  }
  v6 = 0; /*0x6abbc2*/
  v7 = 0; /*0x6abbc4*/
  v11 = 1; /*0x6abbc6*/
  if ( *(int *)(v3 + 84) <= 0 ) /*0x6abbcd*/
    goto LABEL_19; /*0x6abbcd*/
  v8 = (_DWORD *)(v3 + 100); /*0x6abbcf*/
  do /*0x6abc04*/
  {
    if ( (_DWORD *)*v8 == a2 ) /*0x6abbd6*/
    {
      FactoryClass::AbandonProduction((int)a2); /*0x6abbda*/
      *v8 = 0; /*0x6abbdf*/
      v6 = 1; /*0x6abbe5*/
      v8[1] = 0; /*0x6abbe7*/
    }
    else if ( *v8 ) /*0x6abbd2*/
    {
      v11 = 0; /*0x6abbf4*/
    }
    ++v7; /*0x6abbfd*/
    v8 += 13; /*0x6abbfe*/
  }
  while ( v7 < *(_DWORD *)(this + 84) ); /*0x6abc04*/
  if ( v6 ) /*0x6abc08*/
  {
    *(_BYTE *)(this + 60) = 1; /*0x6abc13*/
    MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 0); /*0x6abc17*/
    MEMORY[0x884B8F] = 1; /*0x6abc1c*/
  }
  if ( v11 ) /*0x6abc29*/
  {
    v3 = this; /*0x6abc2b*/
LABEL_19:
    *(_BYTE *)(v3 + 61) = 0; /*0x6abc2f*/
  }
  return v6; /*0x6abc33*/
}


// ==== 0x006ABC40  Network_Process_6ABC40  this=-  sig=ida-proto ====
int sub_6ABC40()
{
  int result; // eax

  result = MEMORY[0xA8B238][0]; /*0x6abc40*/
  if ( MEMORY[0xA8B238][0] ) /*0x6abc47*/
    MEMORY[0xA8EDA0] = 8; /*0x6abc49*/
  return result; /*0x6abc53*/
}


// ==== 0x006ABC60  HouseClass::GetStatus  this=AbstractClass  sig=csp ====
int __thiscall HouseClass::GetStatus(IUnknown *this, IUnknown *aP1)
{
  int v2; // edx

  if ( this == (IUnknown *)15 || this == (IUnknown *)16 ) /*0x6abc68*/
    return 2; /*0x6abcbf*/
  if ( this == (IUnknown *)1 || this == (IUnknown *)40 || this == (IUnknown *)2 || this == (IUnknown *)3 ) /*0x6abc7c*/
    return 3; /*0x6abcb7*/
  if ( this == (IUnknown *)6 || this == (IUnknown *)7 ) /*0x6abc86*/
    return GetHouseTechLevel((int)this, v2) == 5; /*0x6abcb2*/
  if ( this == (IUnknown *)57 || this == (IUnknown *)32 || this == (IUnknown *)31 ) /*0x6abc95*/
    return 1; /*0x6abc9d*/
  return -1; /*0x6abc9a*/
}


// ==== 0x006ABCD0  globalHelper_0ABCD0  this=-  sig=csp ====
int __fastcall sub_6ABCD0(int a1, int a2, int a3)
{
  switch ( a1 ) /*0x6abcd3*/
  {
    case 16: /*0x6abcd3*/
      return 2; /*0x6abcd5*/
    case 40: /*0x6abcd3*/
    case 3: /*0x6abcd3*/
      return 3; /*0x6abcfd*/
    case 7: /*0x6abcd3*/
      return a2 == 5; /*0x6abcf1*/
  }
  return -1; /*0x6abcda*/
}


// ==== 0x006ABD30  SidebarClass::LoadResources  this=SidebarClass  sig=csp ====
char SidebarClass_LoadResources()
{
  int v0; // esi
  int v1; // eax
  int *v2; // esi
  int v3; // edi
  int v4; // eax
  int *v5; // esi
  int v6; // ebx
  int v7; // ebp
  int i; // edi
  char result; // al
  int v10; // edi
  int *v11; // esi
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int j; // esi
  int v16; // edi
  int *v17; // esi
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // [esp-4h] [ebp-38h]
  int v22; // [esp-4h] [ebp-38h]
  int *v23; // [esp+10h] [ebp-24h]
  int v24; // [esp+14h] [ebp-20h]
  int v25; // [esp+18h] [ebp-1Ch] BYREF
  int v26; // [esp+1Ch] [ebp-18h]
  int v27; // [esp+20h] [ebp-14h]
  int v28; // [esp+24h] [ebp-10h]
  int v29; // [esp+28h] [ebp-Ch]
  wchar_t *v30; // [esp+2Ch] [ebp-8h]
  char v31; // [esp+30h] [ebp-4h]

  PowerClass::getDrain(); /*0x6abd39*/
  SidebarClass::CalcBounds(0); /*0x6abd42*/
  if ( !MEMORY[0xB0B468] ) /*0x6abd4e*/
  {
    MEMORY[0xB0B468] = (void *)SearchMIXFile(MEMORY[0x83FBBC], 0); /*0x6abd63*/
    MEMORY[0xB0B46C] = (void *)SearchMIXFile(MEMORY[0x83FBAC], 0); /*0x6abd74*/
    MEMORY[0xB0B470] = (void *)SearchMIXFile(MEMORY[0x83FB9C], 0); /*0x6abd7e*/
  }
  Rect_Point::Set(&MEMORY[0xB07E58], MEMORY[0x886F90] + 16, MEMORY[0x886FA4]); /*0x6abd98*/
  VectorClass_ptr_ConvertClass::MarkDirty(&MEMORY[0xB07E58]); /*0x6abda2*/
  v0 = MEMORY[0xB04A28] + MEMORY[0xB04A20]; /*0x6abdb2*/
  v21 = MEMORY[0xB04A28] + MEMORY[0xB04A20]; /*0x6abdbc*/
  if ( MEMORY[0xA8EB7C] ) /*0x6abdbd*/
    Rect_Point::Set(&MEMORY[0xB07E58], MEMORY[0x886FA0] + MEMORY[0x886FA8], v21); /*0x6abdce*/
  else
    Rect_Point::Set(&MEMORY[0xB07E58], 0, v21); /*0x6abdd7*/
  v22 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887300] + 128))(MEMORY[0x887300]) - v0; /*0x6abdf2*/
  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887300] + 124))(MEMORY[0x887300]); /*0x6abdf5*/
  ObjectClass::SetPositionXY(&MEMORY[0xB07E58], v1, v22); /*0x6abdfe*/
  Rect_Point::Set(MEMORY[0xB0B3A0], MEMORY[0xB0B4DC], MEMORY[0xB0B4E0]); /*0x6abe15*/
  VectorClass_ptr_ConvertClass::MarkDirty(MEMORY[0xB0B3A0]); /*0x6abe1f*/
  MEMORY[0xB0B3E4] = -MEMORY[0x886F90]; /*0x6abe37*/
  Rect_Point::Set(MEMORY[0xB07DF8], MEMORY[0xB0B3AC] + MEMORY[0xB0B4E4], MEMORY[0xB0B3B0]); /*0x6abe4c*/
  VectorClass_ptr_ConvertClass::MarkDirty(MEMORY[0xB07DF8]); /*0x6abe56*/
  v2 = (int *)&MEMORY[0xB07C48]; /*0x6abe60*/
  MEMORY[0xB07E3C] = -MEMORY[0x886F90]; /*0x6abe67*/
  v3 = 0; /*0x6abe6c*/
  do /*0x6abea8*/
  {
    Rect_Point::Set(v2, MEMORY[0xB0B4E8] + v3 * MEMORY[0xB0B4F0], MEMORY[0xB0B4EC]); /*0x6abe88*/
    VectorClass_ptr_ConvertClass::MarkDirty(v2); /*0x6abe8f*/
    v2 += 24; /*0x6abe99*/
    *(v2 - 7) = -MEMORY[0x886F90]; /*0x6abe9e*/
    ++v3; /*0x6abea1*/
  }
  while ( (int)v2 < (int)&MEMORY[0xB07DC8] ); /*0x6abea8*/
  Rect_Point::Set(MEMORY[0xB0B328], MEMORY[0xB0B508], MEMORY[0xB0B50C]); /*0x6abebd*/
  VectorClass_ptr_ConvertClass::MarkDirty(MEMORY[0xB0B328]); /*0x6abec7*/
  MEMORY[0xB0B36C] = -MEMORY[0x886F90]; /*0x6abedf*/
  Rect_Point::Set(MEMORY[0xB0B408], MEMORY[0xB0B508] + MEMORY[0xB0B510], MEMORY[0xB0B50C]); /*0x6abef2*/
  VectorClass_ptr_ConvertClass::MarkDirty(MEMORY[0xB0B408]); /*0x6abefc*/
  MEMORY[0xB0B44C] = -MEMORY[0x886F90]; /*0x6abf0f*/
  v4 = 26; /*0x6abf1d*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6abf15*/
    v4 = 18; /*0x6abf24*/
  v5 = (int *)&MEMORY[0xB07E80]; /*0x6abf44*/
  v23 = (int *)&MEMORY[0xB07E80]; /*0x6abf4d*/
  v6 = (MEMORY[0x886F9C] - v4 - MEMORY[0xB0B4F8] + MEMORY[0x886F94] - 7) / 50; /*0x6abf5d*/
  v24 = 2 * v6; /*0x6abf62*/
  do /*0x6abfc2*/
  {
    v7 = 0; /*0x6abf66*/
    if ( v6 > 0 ) /*0x6abf6a*/
    {
      do /*0x6abfac*/
      {
        for ( i = 0; i < 2; ++i ) /*0x6abf6c*/
        {
          (*(void (__thiscall **)(int *, int, int))(*v5 + 100))( /*0x6abf96*/
            v5,
            MEMORY[0xB0B4F4] + i * MEMORY[0xB0B4FC],
            v7 * MEMORY[0xB0B500] + MEMORY[0xB0B4F8] + 1);
          (*(void (__thiscall **)(int *))(*v5 + 72))(v5); /*0x6abf9d*/
          v5 += 14; /*0x6abfa1*/
        }
        ++v7; /*0x6abfa9*/
      }
      while ( v7 < v6 ); /*0x6abfac*/
      v5 = v23; /*0x6abfae*/
    }
    v5 += 840; /*0x6abfb2*/
    v23 = v5; /*0x6abfbe*/
  }
  while ( (int)v5 < (int)&MEMORY[0xB0B300] ); /*0x6abfc2*/
  result = MEMORY[0x887368]; /*0x6abfc4*/
  if ( MEMORY[0x887368] ) /*0x6abfcd*/
  {
    v31 = 0; /*0x6abfd3*/
    v10 = 203; /*0x6abfd7*/
    v11 = (int *)&MEMORY[0xB07C58]; /*0x6abfdc*/
    do /*0x6ac02d*/
    {
      v12 = *v11; /*0x6abfe4*/
      v13 = v11[1]; /*0x6abfe6*/
      v26 = *(v11 - 1); /*0x6abfe9*/
      v14 = v11[2]; /*0x6abfed*/
      v27 = v12; /*0x6abff0*/
      v25 = v10; /*0x6abffb*/
      v30 = 0; /*0x6abfff*/
      v28 = v13; /*0x6ac003*/
      v29 = v14; /*0x6ac007*/
      HashTable::Remove((int *)MEMORY[0x887368], v10); /*0x6ac00b*/
      CommandClass::AddAction(MEMORY[0x887368], (int)&v25); /*0x6ac01b*/
      ++v10; /*0x6ac020*/
      v11 += 24; /*0x6ac021*/
    }
    while ( v10 - 203 < 4 ); /*0x6ac02d*/
    for ( j = 0; j < 60; ++j ) /*0x6ac02f*/
      HashTable::Remove((int *)MEMORY[0x887368], j + 1000); /*0x6ac03e*/
    v16 = 0; /*0x6ac04d*/
    if ( v24 > 0 ) /*0x6ac051*/
    {
      v17 = (int *)&MEMORY[0xB07E90]; /*0x6ac053*/
      do /*0x6ac0a5*/
      {
        v18 = *(v17 - 1); /*0x6ac05c*/
        v27 = *v17; /*0x6ac065*/
        v25 = v16 + 1000; /*0x6ac069*/
        v19 = v17[1]; /*0x6ac06d*/
        v26 = v18; /*0x6ac070*/
        v20 = v17[2]; /*0x6ac074*/
        v28 = v19; /*0x6ac07b*/
        v30 = 0; /*0x6ac086*/
        v29 = v20; /*0x6ac08e*/
        v31 = 1; /*0x6ac092*/
        CommandClass::AddAction(MEMORY[0x887368], (int)&v25); /*0x6ac096*/
        ++v16; /*0x6ac09f*/
        v17 += 14; /*0x6ac0a0*/
      }
      while ( v16 < v24 ); /*0x6ac0a5*/
    }
    v26 = MEMORY[0xB07E04]; /*0x6ac0ba*/
    v29 = MEMORY[0xB07E10]; /*0x6ac0c6*/
    v31 = 0; /*0x6ac0d0*/
    v25 = 102; /*0x6ac0d5*/
    v30 = aTxtSellMode; /*0x6ac0dd*/
    v27 = MEMORY[0xB07E08]; /*0x6ac0e5*/
    v28 = MEMORY[0xB07E0C]; /*0x6ac0e9*/
    HashTable::Remove((int *)MEMORY[0x887368], 102); /*0x6ac0ed*/
    CommandClass::AddAction(MEMORY[0x887368], (int)&v25); /*0x6ac0fd*/
    v26 = MEMORY[0xB0B3AC]; /*0x6ac113*/
    v27 = MEMORY[0xB0B3B0]; /*0x6ac11c*/
    v25 = 101; /*0x6ac128*/
    v30 = aTxtRepairMode; /*0x6ac130*/
    v28 = MEMORY[0xB0B3B4]; /*0x6ac138*/
    v29 = MEMORY[0xB0B3B8]; /*0x6ac13c*/
    HashTable::Remove((int *)MEMORY[0x887368], 101); /*0x6ac140*/
    CommandClass::AddAction(MEMORY[0x887368], (int)&v25); /*0x6ac150*/
    v26 = MEMORY[0xB0B414]; /*0x6ac166*/
    v28 = MEMORY[0xB0B41C]; /*0x6ac170*/
    v25 = 200; /*0x6ac17f*/
    v30 = 0; /*0x6ac187*/
    v27 = MEMORY[0xB0B418]; /*0x6ac18b*/
    v29 = MEMORY[0xB0B420]; /*0x6ac18f*/
    HashTable::Remove((int *)MEMORY[0x887368], 200); /*0x6ac193*/
    CommandClass::AddAction(MEMORY[0x887368], (int)&v25); /*0x6ac1a3*/
    v26 = MEMORY[0xB0B334]; /*0x6ac1b9*/
    v29 = MEMORY[0xB0B340]; /*0x6ac1c8*/
    v25 = 201; /*0x6ac1d2*/
    v30 = 0; /*0x6ac1da*/
    v27 = MEMORY[0xB0B338]; /*0x6ac1de*/
    v28 = MEMORY[0xB0B33C]; /*0x6ac1e2*/
    HashTable::Remove((int *)MEMORY[0x887368], 201); /*0x6ac1e6*/
    return CommandClass::AddAction(MEMORY[0x887368], (int)&v25); /*0x6ac1f6*/
  }
  return result; /*0x6ac1fb*/
}


// ==== 0x006AC210  SidebarClass::GetTooltipText  this=SidebarClass  sig=csp ====
wchar_t *__thiscall ObjectClass::GetTooltipText(_DWORD *this, MouseClass *aP1)
{
  CampaignScore *StringCSF; // edi
  char *v4; // ecx
  wchar_t *v5; // eax
  wchar_t *v7; // eax
  int v8; // eax

  StringCSF = (CampaignScore *)PowerClass::getAvailable(this, (int)aP1); /*0x6ac21f*/
  if ( !StringCSF ) /*0x6ac223*/
  {
    if ( aP1 == (MouseClass *)200 ) /*0x6ac22f*/
    {
      StringCSF = (CampaignScore *)GetStringCSF( /*0x6ac247*/
                                     (wchar_t *)&stru_830620.__pad_579C[40560],
                                     0,
                                     &stru_830620.__pad_579C[40200],
                                     5069);
      v4 = &MEMORY[0xB077F8].__pad_14B0[10080]; /*0x6ac249*/
      goto LABEL_4; /*0x6ac249*/
    }
    if ( aP1 == (MouseClass *)201 ) /*0x6ac29b*/
    {
      StringCSF = (CampaignScore *)GetStringCSF( /*0x6ac2b3*/
                                     (wchar_t *)&stru_830620.__pad_579C[40512],
                                     0,
                                     &stru_830620.__pad_579C[40200],
                                     5075);
      v4 = &MEMORY[0xB077F8].__pad_14B0[9856]; /*0x6ac2b5*/
      goto LABEL_4; /*0x6ac2ba*/
    }
    if ( (int)aP1 >= 203 && (int)aP1 < 207 ) /*0x6ac2ce*/
    {
      if ( aP1 == (MouseClass *)203 ) /*0x6ac2d8*/
      {
        v7 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40500], 0, &stru_830620.__pad_579C[40200], 5083); /*0x6ac2eb*/
      }
      else if ( aP1 == (MouseClass *)204 ) /*0x6ac2f0*/
      {
        v7 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40488], 0, &stru_830620.__pad_579C[40200], 5085); /*0x6ac303*/
      }
      else if ( aP1 == (MouseClass *)205 ) /*0x6ac308*/
      {
        v7 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40476], 0, &stru_830620.__pad_579C[40200], 5087); /*0x6ac31b*/
      }
      else
      {
        v7 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40464], 0, &stru_830620.__pad_579C[40200], 5089); /*0x6ac333*/
      }
      StringCSF = (CampaignScore *)v7; /*0x6ac338*/
      v4 = &MEMORY[0xB077F8].__pad_430[96 * ((_DWORD)aP1 - 203) + 32]; /*0x6ac340*/
LABEL_4:
      if ( !DialogControl::IsHidden(v4) ) /*0x6ac24e*/
      {
        v5 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40544], 0, &stru_830620.__pad_579C[40200], 5108); /*0x6ac271*/
        swprintf( /*0x6ac282*/
          (wchar_t *const)&MEMORY[0xB077F8].__pad_188[48],
          (const size_t)&stru_830620.__pad_579C[40528],
          (const wchar_t *const)StringCSF,
          v5);
        return (wchar_t *)&MEMORY[0xB077F8].__pad_188[48]; /*0x6ac292*/
      }
      return (wchar_t *)StringCSF; /*0x6ac25a*/
    }
    v8 = 26; /*0x6ac356*/
    if ( MEMORY[0xA8B230]->playerSideIndex ) /*0x6ac350*/
      v8 = 18; /*0x6ac35f*/
    if ( (int)aP1 >= 1000 /*0x6ac3a0*/
      && (int)aP1 < 2
                  * ((*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8528]
                    - *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[10320]
                    - v8
                    + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8520]
                    - 7)
                   / 50)
                  + 1000 )
    {
      return ObjectClass::GetSidebarTooltip(this + 997 * this->q539C + 1361, (int)&aP1[-1].__pad_5568[67264]); /*0x6ac3cb*/
    }
  }
  return (wchar_t *)StringCSF; /*0x6ac28f*/
}


// ==== 0x006AC430  ObjectClass::UI_Add_6AC430  this=ObjectClass  sig=csp ====
int sub_6AC430()
{
  int v0; // eax
  unsigned int v1; // eax

  v0 = 26; /*0x6ac43b*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 3374) ) /*0x6ac435*/
    v0 = 18; /*0x6ac444*/
  v1 = (int)((unsigned __int64)(1374389535LL * (MEMORY[0x886F9C] - MEMORY[0xB0B4F8] - v0 + MEMORY[0x886F94] - 7)) >> 32) >> 4; /*0x6ac46c*/
  return 2 * ((v1 >> 31) + v1); /*0x6ac478*/
}


// ==== 0x006AC480  UI_Update_6AC480  this=-  sig=csp ====
char __fastcall sub_6AC480(int a1, int *a2, _DWORD *a3, int a4)
{
  char result; // al
  int v5; // ebx
  int v6; // edi
  int BuildingAnimByName; // eax
  int v8; // eax
  int v9; // esi
  int v10; // ebp
  int v11; // edx
  int v12; // ecx
  _WORD *v13; // ebp
  _BYTE v14[4]; // [esp+0h] [ebp-30h] BYREF
  int v15; // [esp+4h] [ebp-2Ch]
  int v16; // [esp+8h] [ebp-28h] BYREF
  int v17; // [esp+Ch] [ebp-24h] BYREF
  __int16 v18; // [esp+10h] [ebp-20h]
  unsigned __int8 v19; // [esp+12h] [ebp-1Eh]
  int v20; // [esp+18h] [ebp-18h]
  _DWORD v21[4]; // [esp+20h] [ebp-10h] BYREF

  result = MEMORY[0x884B8C]; /*0x6ac483*/
  v15 = a1; /*0x6ac488*/
  if ( MEMORY[0x884B8C] ) /*0x6ac48e*/
  {
    if ( a1 ) /*0x6ac496*/
    {
      v5 = a2[1]; /*0x6ac49f*/
      v6 = aP0; /*0x6ac4a5*/
      v20 = *a2; /*0x6ac4b5*/
      BuildingAnimByName = FindBuildingAnimByName(MEMORY[0x836ED8], 1); /*0x6ac4b9*/
      v8 = Color::ConvertToRGB((unsigned __int8 *)(BuildingAnimByName + 776), (int)v14); /*0x6ac4c9*/
      v18 = *(_WORD *)v8; /*0x6ac4d7*/
      v19 = *(_BYTE *)(v8 + 2); /*0x6ac4e1*/
      v9 = ((unsigned __int8)v18 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x6ac52e*/
         | (HIBYTE(v18) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
         | (v19 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
      v10 = a3[2]; /*0x6ac536*/
      v11 = a3[1]; /*0x6ac539*/
      v21[0] = *a3; /*0x6ac53c*/
      v12 = a3[3]; /*0x6ac542*/
      v21[1] = v11; /*0x6ac547*/
      v21[3] = v11 + v12; /*0x6ac54b*/
      v21[2] = v21[0] + v10; /*0x6ac551*/
      Char::Swap((_BYTE *)v6, 1); /*0x6ac555*/
      TextGroup::SetRect((_DWORD *)v6, v21); /*0x6ac561*/
      Property::Set((_WORD *)v6, v9); /*0x6ac569*/
      v13 = (_WORD *)v15; /*0x6ac57a*/
      Text::Layout((_DWORD *)v6, (unsigned __int16 *)v15, &v17, &v16, a4); /*0x6ac584*/
      return Font::Print(v6, MEMORY[0x887300], v13, v20, *(_DWORD *)(v6 + 28) - v16 + v5, a4, 0, 0, 0, 0); /*0x6ac5b2*/
    }
  }
  return result; /*0x6ac5bb*/
}


// ==== 0x006AC5D0  SidebarClass::saveLoadPrefix  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass_SaveLoad_Prefix(void *this, int a2)
{
  return SidebarClass::Load((int)this, a2); /*0x6ac5da*/
}


// ==== 0x006AC5E0  SidebarClass::saveLoadPrefix2  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass_SaveLoad_Prefix_0(int *this, int a2)
{
  return SidebarClass::Save(this, a2); /*0x6ac5ea*/
}


// ==== 0x006AC5F0  TActionClass::executeHarvestAction  this=TActionClass  sig=csp ====
_DWORD *__thiscall TActionClass::executeHarvestAction(_DWORD *this, int a2, MouseClass *aP2)
{
  InfantryTypeClass *result; // eax
  int v5; // esi
  CCINIClass *v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  _DWORD *v10; // edx
  _DWORD *v11; // ecx

  result = *(InfantryTypeClass **)&MEMORY[0xA8D63C].__pad_BC0[348]; /*0x6ac5f0*/
  v5 = 0; /*0x6ac5f9*/
  if ( *(int *)&MEMORY[0xA8D63C].__pad_BC0[348] <= 0 ) /*0x6ac601*/
  {
LABEL_5:
    v5 = 0; /*0x6ac615*/
    if ( (int)g_CrateCount <= 0 ) /*0x6ac61f*/
    {
LABEL_9:
      v5 = 0; /*0x6ac632*/
      if ( (int)MEMORY[0xA8B228] <= 0 ) /*0x6ac63c*/
      {
LABEL_13:
        v5 = 0; /*0x6ac64f*/
        if ( (int)g_TriggerClassCount <= 0 ) /*0x6ac659*/
          return result->vtable0; /*0x6ac659*/
        result = (InfantryTypeClass *)g_TriggerTypeCount; /*0x6ac65f*/
        while ( a2 != *(_DWORD *)result->vtable0 ) /*0x6ac666*/
        {
          ++v5; /*0x6ac668*/
          result = (InfantryTypeClass *)((char *)result + 4); /*0x6ac669*/
          if ( v5 >= (int)g_TriggerClassCount ) /*0x6ac66e*/
            return result->vtable0; /*0x6ac66e*/
        }
      }
      else
      {
        result = (InfantryTypeClass *)MEMORY[0xA8B21C]; /*0x6ac63e*/
        while ( a2 != *(_DWORD *)result->vtable0 ) /*0x6ac645*/
        {
          ++v5; /*0x6ac647*/
          result = (InfantryTypeClass *)((char *)result + 4); /*0x6ac648*/
          if ( v5 >= (int)MEMORY[0xA8B228] ) /*0x6ac64d*/
            goto LABEL_13; /*0x6ac64d*/
        }
      }
    }
    else
    {
      result = (InfantryTypeClass *)g_UnitTypeCount2; /*0x6ac621*/
      while ( a2 != *(_DWORD *)result->vtable0 ) /*0x6ac628*/
      {
        ++v5; /*0x6ac62a*/
        result = (InfantryTypeClass *)((char *)result + 4); /*0x6ac62b*/
        if ( v5 >= (int)g_CrateCount ) /*0x6ac630*/
          goto LABEL_9; /*0x6ac630*/
      }
    }
  }
  else
  {
    v6 = *(CCINIClass **)&MEMORY[0xA8D63C].__pad_BC0[336]; /*0x6ac603*/
    while ( *(_DWORD *)v6->__pad_0 != a2 ) /*0x6ac60b*/
    {
      ++v5; /*0x6ac60d*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x6ac60e*/
      if ( v5 >= *(int *)&MEMORY[0xA8D63C].__pad_BC0[348] ) /*0x6ac613*/
        goto LABEL_5; /*0x6ac613*/
    }
  }
  result = (InfantryTypeClass *)(*(int (**)(void))(*(_DWORD *)a2 + 44))(); /*0x6ac677*/
  if ( result == (InfantryTypeClass *)15 || result == (InfantryTypeClass *)16 ) /*0x6ac682*/
  {
    v7 = 2; /*0x6ac6d4*/
  }
  else if ( result == (InfantryTypeClass *)1 /*0x6ac696*/
         || result == (InfantryTypeClass *)40
         || result == (InfantryTypeClass *)2
         || result == (InfantryTypeClass *)3 )
  {
    v7 = 3; /*0x6ac6cd*/
  }
  else if ( result == (InfantryTypeClass *)6 || result == (InfantryTypeClass *)7 ) /*0x6ac6a0*/
  {
    v7 = GetHouseTechLevel((int)result, v5) == 5; /*0x6ac6c9*/
  }
  else
  {
    if ( result != (InfantryTypeClass *)57 && result != (InfantryTypeClass *)32 && result != (InfantryTypeClass *)31 ) /*0x6ac6af*/
      return result->vtable0; /*0x6ac6af*/
    v7 = 1; /*0x6ac6b1*/
  }
  v8 = 997 * v7; /*0x6ac6e3*/
  v9 = 0; /*0x6ac6e6*/
  v10 = this + v8 + 1361; /*0x6ac6e8*/
  v11 = v10 + 22; /*0x6ac6ef*/
  while ( *v11 != v5 ) /*0x6ac6f4*/
  {
    ++v9; /*0x6ac6f6*/
    v11 += 13; /*0x6ac6f7*/
    if ( v9 >= 75 ) /*0x6ac6fd*/
      goto LABEL_38; /*0x6ac6fd*/
  }
  v10[13 * v9 + 34] = (char *)aP2 + *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6ac713*/
LABEL_38:
  result = (InfantryTypeClass *)((char *)&aP2->field_0 + *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] + 1); /*0x6ac71a*/
  this->q14E8 = result; /*0x6ac728*/
  return result->vtable0; /*0x6ac670*/
}


// ==== 0x006AC780  SelectClass_StripClass_SidebarClass::queryInterface  this=SelectClass@StripClass@SidebarClass  sig=csp ====
_DWORD *__thiscall SidebarClass::queryInterface(_DWORD *Block, char a2)
{
  GadgetClass::Dtor(Block); /*0x6ac783*/
  if ( (a2 & 1) != 0 ) /*0x6ac78d*/
    __3_YAXPAX_Z(Block); /*0x6ac790*/
  return Block; /*0x6ac79a*/
}


// ==== 0x006AC7A0  SBGadgetClass@SidebarClass::updateAnimation  this=SBGadgetClass@SidebarClass  sig=csp ====
_DWORD *__thiscall ObjectClass::updateAnimation(SBGadgetClass_SidebarClass *this, char a2)
{
  GadgetClass::Dtor(this); /*0x6ac7a3*/
  if ( (a2 & 1) != 0 ) /*0x6ac7ad*/
    __3_YAXPAX_Z(this); /*0x6ac7b0*/
  return &this->vfptr; /*0x6ac7ba*/
}


// ==== 0x006AC7C0  TabClass::drawTabBackground  this=TabClass  sig=csp ====
TabClass *__thiscall TabClass::drawTabBackground(int this)
{
  IUnknown *v2; // edx

  *(_DWORD *)(this + 20) = 0; /*0x6ac7c4*/
  *(_BYTE *)(this + 24) = 0; /*0x6ac7c7*/
  v2 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x6ac7ca*/
  *(_DWORD *)(this + 36) = 0; /*0x6ac7d0*/
  *(_DWORD *)(this + 28) = v2; /*0x6ac7d3*/
  *(_DWORD *)(this + 40) = 0; /*0x6ac7d6*/
  *(_DWORD *)(this + 44) = 1; /*0x6ac7d9*/
  return (TabClass *)this; /*0x6ac7e0*/
}


// ==== 0x006AC7F0  SidebarClass::DestructWithRadar  this=SidebarClass  sig=csp ====
SidebarClass *__thiscall ObjectClass::DestructWithRadar(char *Block, char a2)
{
  char *v3; // esi
  int v4; // edi

  v3 = Block + 21484; /*0x6ac7f5*/
  v4 = 4; /*0x6ac7fb*/
  do /*0x6ac816*/
  {
    v3 -= 3988; /*0x6ac805*/
    Array::ForEachReverse((int)v3, 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x6ac810*/
    --v4; /*0x6ac815*/
  }
  while ( v4 ); /*0x6ac816*/
  RadarClass::Destruct(Block); /*0x6ac81a*/
  if ( (a2 & 1) != 0 ) /*0x6ac824*/
    __3_YAXPAX_Z(Block); /*0x6ac827*/
  return (SidebarClass *)Block; /*0x6ac82f*/
}


// ==== 0x006AC840  DisplayClass::System_Init_6AC840  this=DisplayClass  sig=csp ====
char *__thiscall sub_6AC840(char *this, int a2)
{
  RadarClass::Render(this, a2); /*0x6ac848*/
  this->q11CC = 0; /*0x6ac84f*/
  this->q11CD = 0; /*0x6ac855*/
  this->q11CE = 0; /*0x6ac85b*/
  *(_DWORD *)this = &DisplayClass::`vftable'; /*0x6ac861*/
  return this; /*0x6ac869*/
}


// ==== 0x006AC870  SidebarClass::initButtons  this=SidebarClass  sig=csp ====
_BYTE *__thiscall sub_6AC870(_BYTE *this)
{
  wchar_t *v2; // edx

  *(_DWORD *)this = 0; /*0x6ac874*/
  this->SidebarClass_field_0x4 = 0; /*0x6ac876*/
  v2 = MEMORY[0xA8ED84]; /*0x6ac879*/
  this->SidebarClass_field_0x4 = 0; /*0x6ac87f*/
  this->SidebarClass_field_0x8 = v2; /*0x6ac882*/
  this->q005 = 0; /*0x6ac885*/
  this->q006 = 1; /*0x6ac888*/
  return this; /*0x6ac88f*/
}


// ==== 0x006AC8D0  VectorClass::System_Init_6AC8D0  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_6AC8D0(_DWORD *this, int a2, int a3)
{
  void *v4; // eax

  this->Items = 0; /*0x6ac8da*/
  this->Capacity = a2; /*0x6ac8e1*/
  this->q030 = 1; /*0x6ac8e4*/
  this->__pad_034 = 0; /*0x6ac8e8*/
  *this = &vt_VectorClass_Point2D; /*0x6ac8ec*/
  if ( a2 ) /*0x6ac8f2*/
  {
    if ( a3 ) /*0x6ac8fa*/
    {
      this->Items = a3; /*0x6ac8fd*/
    }
    else
    {
      v4 = __2_YAPAXI_Z(8 * a2); /*0x6ac90e*/
      if ( !v4 ) /*0x6ac918*/
        v4 = 0; /*0x6ac921*/
      this->Items = v4; /*0x6ac923*/
      this->__pad_034 = 1; /*0x6ac926*/
    }
  }
  *this = &DynamicVectorClass<Point2D>::`vftable'; /*0x6ac92a*/
  this->q005 = 10; /*0x6ac930*/
  this->q010 = 0; /*0x6ac937*/
  return this; /*0x6ac940*/
}


// ==== 0x006AC950  sub_6AC950  this=-  sig=ida-proto ====
int sub_6AC950()
{
  MEMORY[0xB0B528] = 0; /*0x6ac952*/
  MEMORY[0xB0B52C] = 0; /*0x6ac957*/
  MEMORY[0xB0B530] = 0; /*0x6ac95c*/
  MEMORY[0xB0B534] = 0; /*0x6ac961*/
  return 0; /*0x6ac966*/
}


// ==== 0x006AC970  sub_6AC970  this=-  sig=ida-proto ====
void sub_6AC970()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6ac97c*/
  MEMORY[0xB0B540] = Math::Sqrt(v0 + v0); /*0x6ac98e*/
}


// ==== 0x006AC9A0  sub_6AC9A0  this=-  sig=ida-proto ====
void sub_6AC9A0()
{
  MEMORY[0xB0B590] = MEMORY[0xB0B540] / 60.0; /*0x6ac9ac*/
}


// ==== 0x006AC9C0  sub_6AC9C0  this=-  sig=ida-proto ====
void sub_6AC9C0()
{
  MEMORY[0xB0B578] = 1.0 / MEMORY[0xB0B590]; /*0x6ac9cc*/
}


// ==== 0x006AC9E0  sub_6AC9E0  this=-  sig=ida-proto ====
void sub_6AC9E0()
{
  MEMORY[0xB0B570] = 0.0174532925199433 * 45.0; /*0x6ac9ec*/
}


// ==== 0x006ACA00  sub_6ACA00  this=-  sig=ida-proto ====
void sub_6ACA00()
{
  MEMORY[0xB0B548] = 0.0174532925199433 * 60.0; /*0x6aca0c*/
}


// ==== 0x006ACA20  sub_6ACA20  this=-  sig=ida-proto ====
void sub_6ACA20()
{
  MEMORY[0xB0B520] = 0.0174532925199433 * 90.0; /*0x6aca2c*/
}


// ==== 0x006ACA40  sub_6ACA40  this=-  sig=ida-proto ====
__int64 sub_6ACA40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0B520] - MEMORY[0xB0B548]); /*0x6aca52*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0B540] * 0.5); /*0x6aca66*/
  MEMORY[0xB0B598] = result; /*0x6aca6b*/
  return result; /*0x6aca70*/
}


// ==== 0x006ACA80  sub_6ACA80  this=-  sig=ida-proto ====
void sub_6ACA80()
{
  MEMORY[0xB0B550] = Math::ArcTan((double)MEMORY[0xB0B598] * 0.00390625); /*0x6aca97*/
}


// ==== 0x006ACAB0  sub_6ACAB0  this=-  sig=ida-proto ====
void sub_6ACAB0()
{
  MEMORY[0xB0B568] = Math::ArcTan((double)(2 * MEMORY[0xB0B598]) / MEMORY[0xB0B540]); /*0x6acad2*/
}


// ==== 0x006ACAE0  sub_6ACAE0  this=-  sig=ida-proto ====
__int64 sub_6ACAE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0B598]) + 0.5); /*0x6acafb*/
  MEMORY[0xB0B58C] = result; /*0x6acb00*/
  return result; /*0x6acb06*/
}


// ==== 0x006ACB10  sub_6ACB10  this=-  sig=ida-proto ====
int sub_6ACB10()
{
  MEMORY[0xB0B538] = 0; /*0x6acb12*/
  MEMORY[0xB0B53A] = 0; /*0x6acb18*/
  return 0; /*0x6acb1e*/
}


// ==== 0x006ACB20  sub_6ACB20  this=-  sig=ida-proto ====
int sub_6ACB20()
{
  MEMORY[0xB0B558] = 0; /*0x6acb22*/
  MEMORY[0xB0B55C] = 0; /*0x6acb27*/
  MEMORY[0xB0B560] = 0; /*0x6acb2c*/
  return 0; /*0x6acb31*/
}


// ==== 0x006ACB40  sub_6ACB40  this=-  sig=ida-proto ====
int sub_6ACB40()
{
  MEMORY[0xB0B588] = 0; /*0x6acb45*/
  MEMORY[0xB0B580] = 128; /*0x6acb4f*/
  MEMORY[0xB0B584] = 128; /*0x6acb54*/
  return 128; /*0x6acb59*/
}


// ==== 0x006ACBAE  ___inc_tmpoff  this=-  sig=ida-proto ====
void __inc_tmpoff()
{
  ++MEMORY[0x51D]; /*0x6acbae*/
}


// ==== 0x006ACCA0  Map_Handle_6ACCA0  this=-  sig=ida-proto ====
char __fastcall sub_6ACCA0(int a1)
{
  HWND v1; // ebp
  int v2; // edi
  int v3; // esi
  LRESULT v4; // eax

  v1 = MEMORY[0xB0B59C]; /*0x6acca2*/
  if ( a1 >= 8 ) /*0x6accad*/
    return 0; /*0x6acd54*/
  v2 = a1 - 1; /*0x6accb9*/
  while ( 1 )
  {
    if ( v2 )
    {
      switch ( v2 )
      {
        case 1:
          v3 = 1294; /*0x6acccc*/
          break;
        case 2:
          v3 = 1302; /*0x6accd8*/
          break;
        case 3:
          v3 = 1306; /*0x6acce4*/
          break;
        case 4:
          v3 = 1307; /*0x6accf0*/
          break;
        default:
          v3 = v2 == 5 ? 1308 : v2 != 6 ? -1 : 1309;
          break;
      }
    }
    else
    {
      v3 = 1291; /*0x6accc0*/
    }
    v4 = SendDlgItemMessageA(v1, v3, 0x147u, 0, 0); /*0x6acd23*/
    if ( (unsigned int)SendDlgItemMessageA(v1, v3, 0x150u, v4, 0) <= 2 ) /*0x6acd33*/
      break; /*0x6acd33*/
    if ( ++v2 + 1 >= 8 ) /*0x6acd46*/
      return 0; /*0x6acd46*/
  }
  return 1; /*0x6acd4d*/
}


// ==== 0x006ACD60  Skirmish::EnableSpawnButtons  this=Skirmish  sig=csp ====
HWND __thiscall Skirmish::EnableSpawnButtons(HWND hDlg)
{
  HWND v1; // ebp
  HWND result; // eax
  char *v3; // edi
  int v4; // esi
  LRESULT v5; // eax
  SkirmishDialog *v6; // esi
  char v7; // [esp+7h] [ebp-1h]

  v1 = hDlg; /*0x6acd62*/
  if ( !hDlg ) /*0x6acd66*/
    v1 = (HWND)Dialog::FindByHandle((void *)0x102); /*0x6acd72*/
  v7 = 0; /*0x6acd79*/
  if ( MEMORY[0xA8B23C] ) /*0x6acd80*/
    v7 = *(_BYTE *)(MEMORY[0xA8B23C] + 60); /*0x6acd85*/
  result = GetDlgItem(v1, 1901); /*0x6acd8f*/
  if ( result )
  {
    EnableWindow(result, v7 != 0); /*0x6acdac*/
    v3 = 0; /*0x6acdbb*/
    do
    {
      if ( v3 )
      {
        if ( v3 == (char *)1 )
        {
          v4 = 1294; /*0x6acdcd*/
        }
        else if ( v3 == (char *)2 )
        {
          v4 = 1302; /*0x6acdd9*/
        }
        else if ( v3 == (char *)3 )
        {
          v4 = 1306; /*0x6acde5*/
        }
        else if ( v3 == (char *)4 )
        {
          v4 = 1307; /*0x6acdf1*/
        }
        else if ( v3 == (char *)5 )
        {
          v4 = 1308; /*0x6acdfd*/
        }
        else
        {
          v4 = v3 != (char *)6 ? -1 : 1309;
        }
      }
      else
      {
        v4 = 1291; /*0x6acdc1*/
      }
      v5 = SendDlgItemMessageA(v1, v4, 0x147u, 0, 0); /*0x6ace24*/
      ++v3; /*0x6ace32*/
      v6 = (SkirmishDialog *)SendDlgItemMessageA(v1, v4, 0x150u, v5, 0); /*0x6ace33*/
      result = (HWND)GetResourceID4CSF(v3); /*0x6ace37*/
      if ( (int)result >= 0 ) /*0x6ace3e*/
      {
        result = GetDlgItem(v1, (int)result); /*0x6ace42*/
        if ( result ) /*0x6ace4a*/
        {
          if ( v6 == (SkirmishDialog *)-1 ) /*0x6ace4f*/
            result = (HWND)EnableWindow(result, 0); /*0x6ace53*/
          else
            result = (HWND)EnableWindow(result, v7 != 0); /*0x6ace64*/
        }
      }
    }
    while ( (int)(v3 + 1) < 8 );
  }
  return result; /*0x6ace79*/
}


// ==== 0x006ACE80  sub_6ACE80  this=-  sig=ida-proto ====
void __fastcall sub_6ACE80(SessionClass *hDlg, int a2)
{
  int v3; // eax
  int v4; // ebx
  char *i; // esi
  int ResourceID4CSF; // edx

  if ( hDlg && *(_DWORD *)&HouseClass_Player.__pad_5568[8072] ) /*0x6ace90*/
  {
    v3 = 1; /*0x6ace94*/
    v4 = 8; /*0x6ace99*/
    if ( a2 > 0 && a2 < 8 ) /*0x6acea2*/
    {
      v3 = a2; /*0x6acea4*/
      v4 = a2 + 1; /*0x6acea6*/
    }
    for ( i = (char *)v3; (int)i < v4; ++i ) /*0x6acead*/
    {
      ResourceID4CSF = GetResourceID4CSF(i); /*0x6aceb6*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] /*0x6acec1*/
        && *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8072] + 60) )
      {
        SetupLobbyPlayerSlots(hDlg, ResourceID4CSF, 3); /*0x6aceca*/
      }
      else
      {
        SetupLobbyPlayerSlots(hDlg, ResourceID4CSF, -2); /*0x6aced0*/
      }
    }
  }
}


// ==== 0x006ACEE0  DialogSkirmishFunc_UpdateMultiEngineer  this=-  sig=csp ====
void __fastcall DialogSkirmishFunc_UpdateMultiEngineer(SkirmishDialog *hWnd, int nIDDlgItem, int a3, int a4)
{
  int v6; // edi
  HWND DlgItem; // eax
  int v8; // esi
  LRESULT v9; // eax
  CampaignScore *v10; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v12; // eax
  HWND v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  HWND v16; // eax
  int v17; // edi
  int v18; // esi
  LRESULT v19; // eax
  int ResourceID4CSF; // eax
  wchar_t *ComboBoxSelectedRaw2; // esi
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  HWND v24; // eax
  SkirmishDialog *v25; // esi
  CampaignScore *v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  LRESULT ComboBoxSelected; // eax
  int v30; // eax
  int v31; // esi
  int v32; // edi
  int ResourceID2CSF; // ebx
  LRESULT v34; // eax
  LRESULT v35; // eax
  char *v36; // edi
  int v37; // esi
  int v38; // ebx
  LRESULT v39; // eax
  LRESULT v40; // esi
  LRESULT v41; // ebx
  LRESULT ComboBoxSelectedRaw; // eax
  int v43; // edx
  LRESULT v44; // esi
  LRESULT v45; // edi
  LRESULT v46; // ebx
  int v47; // eax
  int v48; // esi
  char *v49; // eax
  ObjectClass *v50; // eax
  HWND v51; // eax
  HWND v52; // eax
  HWND v53; // eax
  HWND v54; // eax
  HWND v55; // eax
  HWND v56; // eax
  HWND v57; // eax
  HWND v58; // eax
  ObjectClass *v59; // esi
  CCINIClass *v60; // ebx
  ObjectClass *v61; // esi
  _DWORD *v62; // eax
  ObjectClass *v63; // eax
  int PlayerCountMap; // edi
  int v65; // ecx
  int v66; // eax
  ObjectClass *v67; // esi
  _DWORD *v68; // eax
  ObjectClass *v69; // eax
  int v70; // eax
  wchar_t *v71; // [esp-10h] [ebp-270h]
  CampaignScore *v72; // [esp+0h] [ebp-260h]
  int v73; // [esp+0h] [ebp-260h]
  int v74; // [esp+0h] [ebp-260h]
  int _0c; // [esp+0h] [ebp-260h]
  VectorClass *Format; // [esp+10h] [ebp-250h]
  VectorClass *Formata; // [esp+10h] [ebp-250h]
  VectorClass *Formatb; // [esp+10h] [ebp-250h]
  VectorClass *Formatc; // [esp+10h] [ebp-250h]
  VectorClass *v75; // [esp+14h] [ebp-24Ch]
  VectorClass *ResourceID3; // [esp+14h] [ebp-24Ch]
  wchar_t *v82; // [esp+18h] [ebp-248h] BYREF
  int var244; // [esp+1Ch] [ebp-244h]
  VectorClass *nIDDlgItema; // [esp+20h] [ebp-240h]
  CampaignScore *v85; // [esp+24h] [ebp-23Ch]
  CampaignScore *v86; // [esp+28h] [ebp-238h]
  int *WindowLongA; // [esp+2Ch] [ebp-234h]
  VectorClass *v83; // [esp+30h] [ebp-230h]
  CampaignScore *v89; // [esp+34h] [ebp-22Ch]
  char lParam[40]; // [esp+38h] [ebp-228h] BYREF
  wchar_t Destination[256]; // [esp+60h] [ebp-200h] BYREF

  var244 = nIDDlgItem;
  WindowLongA = (int *)GetWindowLongA((HWND)hWnd, 8);
  if ( nIDDlgItem > 1320 )
  {
    if ( nIDDlgItem > 1697 )
    {
      switch ( nIDDlgItem )
      {
        case 1698:
          goto LABEL_153;
        case 1699:
        case 1700:
        case 1701:
        case 1702:
        case 1703:
        case 1704:
        case 1706:
        case 1707:
          if ( a4 == 1 )
            FillComboBoxSides((HWND)hWnd, nIDDlgItem);
          break;
        default:
          return;
      }
    }
    else
    {
      switch ( nIDDlgItem )
      {
        case 1697:
LABEL_151:
          v70 = CountryCombo::IDToIndex((void *)nIDDlgItem);
          sub_4E3690((HWND)hWnd, v70);
          break;
        case 1450:
          Formatc = *(VectorClass **)&HouseClass_Player.__pad_5568[8092];
          v60 = *(CCINIClass **)&HouseClass_Player.__pad_5568[8096];
          strcpy((char *)Destination, &HouseClass_Player.__pad_5568[9772]);
          wcscpy(Destination, (const wchar_t *)&HouseClass_Player.__pad_5568[8302]);
          Dialog::IdleProcess(hWnd);
          ShowWindow((HWND)hWnd, 0);
          if ( SkirmishDialog::Show(g_hWnd, (int)v60, (int)hWnd) == (SkirmishDialog *)2 )
          {
            *(_DWORD *)&HouseClass_Player.__pad_5568[8092] = Formatc;
            *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = v60;
            LoadScenarioClassByIndex((int)v60);
            Session::PrepareGame((HWND)hWnd);
            ShowWindow((HWND)hWnd, 5);
            if ( IsRandMap::Sed(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752]
                                          + 4 * *(_DWORD *)&HouseClass_Player.__pad_5568[8096])) )
            {
              v61 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
              if ( *(&g_MatrixTransformState + 2257) )
              {
                ComPtr::Dtor(*(&g_MatrixTransformState + 2257));
                __3_YAXPAX_Z(v61);
              }
              v62 = (_DWORD *)__2_YAPAXI_Z(4u);
              if ( v62 )
                v63 = (ObjectClass *)unknown_libname_27(v62);
              else
                v63 = 0;
              *(&g_MatrixTransformState + 2257) = (CoordStruct *)v63;
              Surface::LoadToSurfaceSHP((char **)v63, stru_829ABC.__pad_0);
              if ( !(*(&g_MatrixTransformState + 2257))->X )
                Session::PrepareGame((HWND)hWnd);
              InvalidateRect((HWND)hWnd, 0, 0);
              InvalidateRect((HWND)hWnd, 0, 0);
            }
            else
            {
              Session::PrepareGame((HWND)hWnd);
              InvalidateRect((HWND)hWnd, 0, 0);
            }
          }
          else
          {
            PlayerCountMap = ReadPlayerCountMap(*(int *)&HouseClass_Player.__pad_5568[8096]);
            if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 4))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072])
              || (v65 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4580), v65 > PlayerCountMap) )
            {
              v65 = PlayerCountMap;
            }
            ResetLobbyFactionTable(v65);
            Lobby::InvalidateFactionCombos((HWND)hWnd);
            Lobby::InvalidatePlayerSlots((HWND)hWnd);
            Skirmish_Setup_6ADDF0((HWND)hWnd, (int)v60, *(int *)&HouseClass_Player.__pad_5568[8096]);
            ShowWindow((HWND)hWnd, 5);
            if ( LoadScenarioClassByIndex(*(int *)&HouseClass_Player.__pad_5568[8096]) )
            {
              v66 = MultiplayerGameMode::Find(*(void **)&HouseClass_Player.__pad_5568[8092]);
              SetDialogPlayerName((HWND)hWnd, v66);
              Dialog::ShowPlayerName((HWND)hWnd);
              Skirmish::EnableSpawnButtons(0);
              if ( IsRandMap::Sed(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752]
                                            + 4 * *(_DWORD *)&HouseClass_Player.__pad_5568[8096])) )
              {
                v67 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
                if ( *(&g_MatrixTransformState + 2257) )
                {
                  ComPtr::Dtor(*(&g_MatrixTransformState + 2257));
                  __3_YAXPAX_Z(v67);
                  v68 = (_DWORD *)__2_YAPAXI_Z(4u);
                  if ( v68 )
                    v69 = (ObjectClass *)unknown_libname_27(v68);
                  else
                    v69 = 0;
                  *(&g_MatrixTransformState + 2257) = (CoordStruct *)v69;
                  Surface::LoadToSurfaceSHP((char **)v69, stru_829ABC.__pad_0);
                  v67 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
                }
                if ( !*(_DWORD *)v67->__pad_0 )
                  Session::PrepareGame((HWND)hWnd);
                InvalidateRect((HWND)hWnd, 0, 0);
              }
              else
              {
                Session::PrepareGame((HWND)hWnd);
              }
            }
            else
            {
              *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = v60;
              *(_DWORD *)&HouseClass_Player.__pad_5568[8092] = Formatc;
            }
          }
          break;
        case 1472:
        case 1559:
          v6 = 0;
          if ( !a4 )
          {
            if ( nIDDlgItem == 1559 )
            {
              DlgItem = GetDlgItem((HWND)hWnd, 1559);
              EnableWindow(DlgItem, 0);
            }
            Format = (VectorClass *)ReadPlayerCountMap(*(int *)&HouseClass_Player.__pad_5568[8096]);
            v75 = 0;
            do
            {
              if ( v6 )
              {
                switch ( v6 )
                {
                  case 1:
                    v8 = 1294;
                    break;
                  case 2:
                    v8 = 1302;
                    break;
                  case 3:
                    v8 = 1306;
                    break;
                  case 4:
                    v8 = 1307;
                    break;
                  case 5:
                    v8 = 1308;
                    break;
                  default:
                    v8 = v6 != 6 ? -1 : 1309;
                    break;
                }
              }
              else
              {
                v8 = 1291;
              }
              v9 = SendDlgItemMessageA((HWND)hWnd, v8, 0x147u, 0, 0);
              if ( (unsigned int)SendDlgItemMessageA((HWND)hWnd, v8, 0x150u, v9, 0) <= 2 )
                v75 = (VectorClass *)((char *)v75 + 1);
              ++v6;
            }
            while ( v6 < 7 );
            *(_DWORD *)&HouseClass_Player.__pad_5568[8128] = v75;
            v10 = (CampaignScore *)((char *)&v75->vtable0 + 1);
            if ( var244 == 1559 )
            {
              if ( (int)Format < (int)v10 )
              {
                StringCSF = GetStringCSF(
                              g_Str_TXT_SCENARIO_TOO_SMALL,
                              0,
                              (CampaignScore *)&stru_830620.__pad_579C[40592],
                              1079);
                swprintf(Destination, (const size_t)StringCSF, (const wchar_t *const)Format, v72);
                v86 = &stru_82083C;
                v12 = GetStringCSF(g_Str_TXT_OK, 0, (CampaignScore *)&stru_830620.__pad_579C[40592], 1080);
                Dialog::ShowMessageBox((int)Destination, v12, 0, 0, 0, v73);
                v13 = GetDlgItem((HWND)hWnd, 1559);
                EnableWindow(v13, 1);
                return;
              }
              if ( (int)v10 <= 1 )
              {
                v14 = GetStringCSF(
                        (wchar_t *)&stru_830620.__pad_579C[40620],
                        0,
                        (CampaignScore *)&stru_830620.__pad_579C[40592],
                        1087);
                swprintf(Destination, (const size_t)v14, (const wchar_t *const)Format, v72);
                v85 = &stru_82083C;
                v15 = GetStringCSF(g_Str_TXT_OK, 0, (CampaignScore *)&stru_830620.__pad_579C[40592], 1088);
                Dialog::ShowMessageBox((int)Destination, v15, 0, 0, 0, v74);
                v16 = GetDlgItem((HWND)hWnd, 1559);
                EnableWindow(v16, 1);
                return;
              }
              if ( GetComboBoxSelectedRaw2((HWND)hWnd, 1901, 0xFFFFFFFF) >= 0 )
              {
                v17 = 0;
                while ( 1 )
                {
                  if ( v17 )
                  {
                    switch ( v17 )
                    {
                      case 1:
                        v18 = 1294;
                        break;
                      case 2:
                        v18 = 1302;
                        break;
                      case 3:
                        v18 = 1306;
                        break;
                      case 4:
                        v18 = 1307;
                        break;
                      default:
                        v18 = v17 == 5 ? 1308 : v17 != 6 ? -1 : 1309;
                        break;
                    }
                  }
                  else
                  {
                    v18 = 1291;
                  }
                  v19 = SendDlgItemMessageA((HWND)hWnd, v18, 0x147u, 0, 0);
                  if ( (unsigned int)SendDlgItemMessageA((HWND)hWnd, v18, 0x150u, v19, 0) <= 2 )
                  {
                    ResourceID4CSF = GetResourceID4CSF((void *)(v17 + 1));
                    ComboBoxSelectedRaw2 = (wchar_t *)GetComboBoxSelectedRaw2((HWND)hWnd, ResourceID4CSF, 0xFFFFFFFF);
                    if ( (wchar_t *)GetComboBoxSelectedRaw2((HWND)hWnd, 1901, 0xFFFFFFFF) != ComboBoxSelectedRaw2 )
                      break;
                  }
                  if ( ++v17 >= 7 )
                  {
                    v22 = GetStringCSF(
                            (wchar_t *)&stru_830620.__pad_DFC[52],
                            0,
                            (CampaignScore *)&stru_830620.__pad_579C[40592],
                            1111);
                    swprintf(Destination, (const size_t)v22, (const wchar_t *const)Format, v72);
                    v89 = &stru_82083C;
                    v23 = GetStringCSF(g_Str_TXT_OK, 0, (CampaignScore *)&stru_830620.__pad_579C[40592], 1112);
                    Dialog::ShowMessageBox((int)Destination, v23, 0, 0, 0, _0c);
                    v24 = GetDlgItem((HWND)hWnd, 1559);
                    EnableWindow(v24, 1);
                    return;
                  }
                }
              }
            }
            v25 = *(SkirmishDialog **)&HouseClass_Player.__pad_5568[8072];
            unknown_libname_74(&v82);
            if ( !(*(unsigned __int8 (__thiscall **)(SkirmishDialog *, wchar_t **))(*(_DWORD *)v25->__pad_0 + 20))(
                    v25,
                    &v82) )
            {
              if ( var244 == 1559 )
              {
                v83 = (VectorClass *)&stru_82083C;
                v71 = GetStringCSF(g_Str_TXT_OK, 0, (CampaignScore *)&stru_830620.__pad_579C[40592], 1129);
                v26 = WideString::GetOrEmpty(&v82);
                Dialog::ShowMessageBox((int)v26, v71, 0, 0, 0, (int)v72);
                v27 = GetDlgItem((HWND)hWnd, 1559);
                EnableWindow(v27, 1);
                DeleteAndZero::Alt((void **)&v82);
                return;
              }
              MultiplayerGameMode::GetFirst();
            }
            *(_DWORD *)&HouseClass_Player.__pad_5568[8464] = *(_DWORD *)&HouseClass_Player.__pad_5568[8092];
            *(_DWORD *)&HouseClass_Player.__pad_5568[8468] = *(_DWORD *)&HouseClass_Player.__pad_5568[8096];
            if ( *(int *)&HouseClass_Player.__pad_5568[8096] >= *(int *)&HouseClass_Player.__pad_5568[9764] )
              *(_DWORD *)&HouseClass_Player.__pad_5568[8468] = 0;
            v28 = GetDlgItem((HWND)hWnd, 1696);
            SendMessageA(v28, 0x4B3u, 0x14u, (LPARAM)lParam);
            CopyWideToChar(&HouseClass_Player.__pad_5568[8396], lParam, -1);
            ComboBoxSelected = GetComboBoxSelected((ReferenceCounted *)hWnd, 1697, 0xFFFFFFFF);
            SessionClass::AssignSide(&HouseClass_Player.__pad_5568[8068], ComboBoxSelected, (MPCooperative *)1);
            v30 = 0;
            do
            {
              v31 = v30 + 1;
              if ( v30 )
              {
                switch ( v30 )
                {
                  case 1:
                    v32 = 1294;
                    break;
                  case 2:
                    v32 = 1302;
                    break;
                  case 3:
                    v32 = 1306;
                    break;
                  case 4:
                    v32 = 1307;
                    break;
                  case 5:
                    v32 = 1308;
                    break;
                  default:
                    v32 = v30 != 6 ? -1 : 1309;
                    break;
                }
              }
              else
              {
                v32 = 1291;
              }
              ResourceID2CSF = GetResourceID2CSF((void *)v31);
              Formata = (VectorClass *)GetResourceIDCSF((void *)v31);
              ResourceID3 = (VectorClass *)GetResourceID3CSF((void *)v31);
              nIDDlgItema = (VectorClass *)GetResourceID4CSF((void *)v31);
              v34 = SendDlgItemMessageA((HWND)hWnd, v32, 0x147u, 0, 0);
              if ( (unsigned int)SendDlgItemMessageA((HWND)hWnd, v32, 0x150u, v34, 0) <= 2 )
              {
                v35 = SendDlgItemMessageA((HWND)hWnd, v32, 0x147u, 0, 0);
                *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v31 + 8136] = SendDlgItemMessageA(
                                                                             (HWND)hWnd,
                                                                             v32,
                                                                             0x150u,
                                                                             v35,
                                                                             0);
                *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v31 + 8168] = GetComboBoxSelected(
                                                                             (ReferenceCounted *)hWnd,
                                                                             ResourceID2CSF,
                                                                             0xFFFFFFFF);
                *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v31 + 8200] = GetComboBoxSelectedRaw(
                                                                             (ReferenceCounted *)hWnd,
                                                                             (int)Formata,
                                                                             0xFFFFFFFF);
                *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v31 + 8232] = SetComboBoxSelection(
                                                                             (HWND)hWnd,
                                                                             (int)ResourceID3,
                                                                             0xFFFFFFFF);
                *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v31 + 8264] = GetComboBoxSelectedRaw2(
                                                                             (HWND)hWnd,
                                                                             (int)nIDDlgItema,
                                                                             0xFFFFFFFF);
              }
              v30 = v31;
            }
            while ( v31 < 7 );
            v36 = 0;
            Formatb = (VectorClass *)&HouseClass_Player.__pad_5568[8508];
            do
            {
              if ( v36 )
              {
                if ( v36 == (char *)1 )
                {
                  v37 = 1294;
                }
                else if ( v36 == (char *)2 )
                {
                  v37 = 1302;
                }
                else if ( v36 == (char *)3 )
                {
                  v37 = 1306;
                }
                else if ( v36 == (char *)4 )
                {
                  v37 = 1307;
                }
                else if ( v36 == (char *)5 )
                {
                  v37 = 1308;
                }
                else
                {
                  v37 = v36 != (char *)6 ? -1 : 1309;
                }
              }
              else
              {
                v37 = 1291;
              }
              v38 = GetResourceID2CSF(++v36);
              nIDDlgItema = (VectorClass *)GetResourceIDCSF(v36);
              v39 = SendDlgItemMessageA((HWND)hWnd, v37, 0x147u, 0, 0);
              v40 = SendDlgItemMessageA((HWND)hWnd, v37, 0x150u, v39, 0);
              v41 = GetComboBoxSelected((ReferenceCounted *)hWnd, v38, 0xFFFFFFFF);
              ComboBoxSelectedRaw = GetComboBoxSelectedRaw((ReferenceCounted *)hWnd, (int)nIDDlgItema, 0xFFFFFFFF);
              if ( v40 == -1 )
              {
                v43 = 1;
              }
              else if ( v40 )
              {
                if ( v40 == 1 )
                  v43 = 5;
                else
                  v43 = v40 != 2 ? 0 : 6;
              }
              else
              {
                v43 = 4;
              }
              *(_DWORD *)&Formatb[-1].IsInitialized = v43;
              Formatb->vtable0 = (void *)v41;
              Formatb->Items = (void *)ComboBoxSelectedRaw;
              Formatb = (VectorClass *)((char *)Formatb + 12);
            }
            while ( (int)(v36 + 1) < 8 );
            v44 = GetComboBoxSelectedRaw((ReferenceCounted *)hWnd, 1698, 0xFFFFFFFF);
            v45 = SetComboBoxSelection((HWND)hWnd, 1699, 0xFFFFFFFF);
            v46 = GetComboBoxSelectedRaw2((HWND)hWnd, 1901, 0xFFFFFFFF);
            SessionClass::AssignColor(&HouseClass_Player.__pad_5568[8068], v44, (MPCooperative *)1);
            *(_DWORD *)&HouseClass_Player.__pad_5568[8424] = v45;
            *(_DWORD *)&HouseClass_Player.__pad_5568[8432] = v46;
            v47 = __2_YAPAXI_Z(0x85u);
            v48 = v47;
            if ( v47 )
            {
              Waypoint::InitInvalid((_BYTE *)(v47 + 40));
              v49 = CharToWideString(&HouseClass_Player.__pad_5568[8396]);
              wcscpy((wchar_t *)v48, (const wchar_t *)v49);
              *(_DWORD *)(v48 + 75) = *(_DWORD *)&HouseClass_Player.__pad_5568[8440];
              *(_DWORD *)(v48 + 83) = *(_DWORD *)&HouseClass_Player.__pad_5568[8416];
              *(_DWORD *)(v48 + 91) = *(_DWORD *)&HouseClass_Player.__pad_5568[8424];
              *(_DWORD *)(v48 + 99) = *(_DWORD *)&HouseClass_Player.__pad_5568[8432];
              *(_DWORD *)(v48 + 115) = -1;
              if ( *(int *)&HouseClass_Player.__pad_5568[18384] < *(int *)&HouseClass_Player.__pad_5568[18376]
                || (HouseClass_Player.__pad_5568[18381] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18376])
                && *(int *)&HouseClass_Player.__pad_5568[18388] > 0
                && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368]
                                                                          + 8))(
                     &HouseClass_Player.__pad_5568[18368],
                     *(_DWORD *)&HouseClass_Player.__pad_5568[18376] + *(_DWORD *)&HouseClass_Player.__pad_5568[18388],
                     0) )
              {
                v50 = (ObjectClass *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18384])++;
                *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * (_DWORD)v50) = v48;
              }
            }
            Player::RandomAssign(&HouseClass_Player.__pad_5568[8068]);
            v51 = GetDlgItem((HWND)hWnd, 1321);
            if ( v51 )
            {
              *(_DWORD *)&HouseClass_Player.__pad_5568[8116] = 6 - SendMessageA(v51, 0x400u, 0, 0);
              *(_DWORD *)&HouseClass_Player.__pad_5568[22700] = *(_DWORD *)&HouseClass_Player.__pad_5568[8116];
            }
            v52 = GetDlgItem((HWND)hWnd, 1297);
            if ( v52 )
              *(_DWORD *)&HouseClass_Player.__pad_5568[8104] = SendMessageA(v52, 0x400u, 0, 0);
            v53 = GetDlgItem((HWND)hWnd, 1292);
            if ( v53 )
              *(_DWORD *)&HouseClass_Player.__pad_5568[8124] = SendMessageA(v53, 0x400u, 0, 0);
            *(_DWORD *)&HouseClass_Player.__pad_5568[8472] = *(_DWORD *)&HouseClass_Player.__pad_5568[8116];
            *(_DWORD *)&HouseClass_Player.__pad_5568[8476] = *(_DWORD *)&HouseClass_Player.__pad_5568[8104];
            *(_DWORD *)&HouseClass_Player.__pad_5568[8480] = *(_DWORD *)&HouseClass_Player.__pad_5568[8124];
            v54 = GetDlgItem((HWND)hWnd, 1358);
            if ( v54 )
              HouseClass_Player.__pad_5568[8110] = SendMessageA(v54, 0xF0u, 0, 0) == 1;
            v55 = GetDlgItem((HWND)hWnd, 1690);
            if ( v55 )
              HouseClass_Player.__pad_5568[8111] = SendMessageA(v55, 0xF0u, 0, 0) == 1;
            v56 = GetDlgItem((HWND)hWnd, 1693);
            if ( v56 )
              HouseClass_Player.__pad_5568[8112] = SendMessageA(v56, 0xF0u, 0, 0) == 1;
            v57 = GetDlgItem((HWND)hWnd, 1683);
            if ( v57 )
              HouseClass_Player.__pad_5568[8300] = SendMessageA(v57, 0xF0u, 0, 0) == 1;
            v58 = GetDlgItem((HWND)hWnd, 1686);
            if ( v58 )
              HouseClass_Player.__pad_5568[8109] = SendMessageA(v58, 0xF0u, 0, 0) == 1;
            v59 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
            HouseClass_Player.__pad_5568[8484] = HouseClass_Player.__pad_5568[8110];
            HouseClass_Player.__pad_5568[8485] = HouseClass_Player.__pad_5568[8111];
            HouseClass_Player.__pad_5568[8486] = HouseClass_Player.__pad_5568[8112];
            HouseClass_Player.__pad_5568[8487] = HouseClass_Player.__pad_5568[8300];
            HouseClass_Player.__pad_5568[8488] = HouseClass_Player.__pad_5568[8109];
            HouseClass_Player.__pad_5568[8299] = 0;
            HouseClass_Player.__pad_5568[8108] = 1;
            HouseClass_Player.__pad_5568[8297] = 0;
            HouseClass_Player.__pad_5568[8120] = 0;
            if ( *(&g_MatrixTransformState + 2257) )
            {
              ComPtr::Dtor(*(&g_MatrixTransformState + 2257));
              __3_YAXPAX_Z(v59);
              *(&g_MatrixTransformState + 2257) = 0;
            }
            *WindowLongA = var244;
            DeleteAndZero::Alt((void **)&v82);
          }
          break;
      }
    }
  }
  else if ( nIDDlgItem >= 1314 )
  {
LABEL_153:
    if ( a4 == 1 )
      FillColorComboBoxUI((HWND)hWnd, nIDDlgItem);
  }
  else
  {
    switch ( nIDDlgItem )
    {
      case 1291:
      case 1294:
      case 1302:
      case 1306:
      case 1307:
      case 1308:
      case 1309:
        SetupSkirmishSpawnLocationEntry((SessionClass *)hWnd, nIDDlgItem);
        Skirmish::EnableSpawnButtons(0);
        break;
      case 1296:
      case 1299:
      case 1300:
      case 1310:
      case 1311:
      case 1312:
      case 1313:
        goto LABEL_151;
      default:
        return;
    }
  }
}


// ==== 0x006ADC20  SetupSkirmishSpawnLocationEntry  this=-  sig=csp ====
BOOL __fastcall SetupSkirmishSpawnLocationEntry(SessionClass *hDlg, int nIDDlgItem)
{
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int ResourceIDCSF; // ebx
  int v8; // eax
  int v9; // ebx
  char *i; // edi
  int v11; // eax
  LRESULT v12; // eax
  HWND DlgItem; // ebx
  HWND v14; // ebp
  int nIDDlgItema; // [esp+10h] [ebp-10h]
  HWND hWnd; // [esp+14h] [ebp-Ch]
  HWND hWnda; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  unsigned __int8 v20; // [esp+18h] [ebp-8h]
  HWND ResourceID4CSF; // [esp+1Ch] [ebp-4h]
  HWND v22; // [esp+1Ch] [ebp-4h]

  switch ( nIDDlgItem ) /*0x6adc31*/
  {
    case 1291: /*0x6adc31*/
      v4 = 0; /*0x6adc33*/
      break;
    case 1294: /*0x6adc31*/
      v4 = 1; /*0x6adc3f*/
      break;
    case 1302: /*0x6adc31*/
      v4 = 2; /*0x6adc4e*/
      break;
    case 1306: /*0x6adc31*/
      v4 = 3; /*0x6adc5d*/
      break;
    case 1307: /*0x6adc31*/
      v4 = 4; /*0x6adc6c*/
      break;
    case 1308: /*0x6adc31*/
      v4 = 5; /*0x6adc7b*/
      break;
    default:
      v5 = -(nIDDlgItem != 1309); /*0x6adc8b*/
      LOBYTE(v5) = v5 & 0xF9; /*0x6adc8d*/
      v4 = v5 + 6; /*0x6adc8f*/
      break;
  }
  v6 = v4 + 1; /*0x6adc92*/
  ResourceIDCSF = GetResourceIDCSF((void *)(v4 + 1)); /*0x6adc9c*/
  v19 = ResourceIDCSF; /*0x6adca0*/
  nIDDlgItema = GetResourceID2CSF((void *)v6); /*0x6adcab*/
  hWnd = (HWND)GetResourceID3CSF((void *)v6); /*0x6adcb6*/
  ResourceID4CSF = (HWND)GetResourceID4CSF((void *)v6); /*0x6adcc1*/
  if ( hDlg && *(_DWORD *)&HouseClass_Player.__pad_5568[8072] ) /*0x6adcce*/
  {
    v8 = 1; /*0x6adcd2*/
    v9 = 8; /*0x6adcd7*/
    if ( v6 > 0 && v6 < 8 ) /*0x6adce0*/
    {
      v8 = v6; /*0x6adce2*/
      v9 = v6 + 1; /*0x6adce4*/
    }
    for ( i = (char *)v8; (int)i < v9; ++i ) /*0x6adceb*/
    {
      v11 = GetResourceID4CSF(i); /*0x6adcef*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] /*0x6adcfe*/
        && *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8072] + 60) )
      {
        SetupLobbyPlayerSlots(hDlg, v11, 3); /*0x6add07*/
      }
      else
      {
        SetupLobbyPlayerSlots(hDlg, v11, -2); /*0x6add0f*/
      }
    }
    ResourceIDCSF = v19; /*0x6add19*/
  }
  v12 = SendDlgItemMessageA((HWND)hDlg, nIDDlgItem, 0x147u, 0, 0); /*0x6add2e*/
  if ( (unsigned int)SendDlgItemMessageA((HWND)hDlg, nIDDlgItem, 0x150u, v12, 0) <= 2 ) /*0x6add3e*/
  {
    v20 = 1; /*0x6addde*/
  }
  else
  {
    v20 = 0; /*0x6add5c*/
    SetupSkirmishSpawnLocations((HWND)hDlg, ResourceIDCSF, -2); /*0x6add61*/
    SetupLobbyCountryCombo((SkirmishDialog *)hDlg, nIDDlgItema, -2); /*0x6add6e*/
    SetupLobbyFactionSlots(hDlg, (int)hWnd, -2); /*0x6add7b*/
  }
  DlgItem = GetDlgItem((HWND)hDlg, ResourceIDCSF); /*0x6add8a*/
  v14 = GetDlgItem((HWND)hDlg, nIDDlgItema); /*0x6add94*/
  hWnda = GetDlgItem((HWND)hDlg, (int)hWnd); /*0x6adda2*/
  v22 = GetDlgItem((HWND)hDlg, (int)ResourceID4CSF); /*0x6addb4*/
  EnableWindow(DlgItem, v20); /*0x6addc0*/
  EnableWindow(v14, v20); /*0x6addc4*/
  EnableWindow(hWnda, v20); /*0x6addcc*/
  return EnableWindow(v22, v20); /*0x6addd6*/
}


// ==== 0x006ADDF0  Skirmish_Setup_6ADDF0  this=SkirmishDialog  sig=csp ====
void __fastcall sub_6ADDF0(HWND a1, int a2, int a3)
{
  int v5; // ebx
  int v6; // esi
  bool v7; // al
  HWND v8; // edi
  int i; // esi
  int ResourceID4CSF; // edx
  int PlayerCountMap; // [esp+14h] [ebp-4h]
  bool v13; // [esp+1Ch] [ebp+4h]

  if ( a2 == -1 ) /*0x6ade00*/
    PlayerCountMap = 8; /*0x6ade02*/
  else
    PlayerCountMap = ReadPlayerCountMap(a2); /*0x6ade13*/
  v5 = ReadPlayerCountMap(a3); /*0x6ade26*/
  v6 = v5 - PlayerCountMap; /*0x6ade2a*/
  if ( a2 >= 0 /*0x6ade6a*/
    && a3 >= 0
    && a2 < MEMORY[0xA8B8D8]
    && a3 < MEMORY[0xA8B8D8]
    && (v13 = IsRandMap::Sed(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * a2)),
        v7 = IsRandMap::Sed(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * a3)),
        v13)
    && v7 )
  {
    v8 = a1; /*0x6ade6c*/
    HideSkirmishSpawnLocations(a1, 1); /*0x6ade77*/
    Skirmish_Setup_6ADDF0_Setup(a1, 1, v5 - 1); /*0x6ade87*/
  }
  else
  {
    v8 = a1; /*0x6ade8e*/
  }
  if ( v6 <= 0 ) /*0x6ade94*/
  {
    if ( v6 < 0 ) /*0x6adea4*/
      HideSkirmishSpawnLocations(v8, v5); /*0x6adeaa*/
  }
  else
  {
    Skirmish_Setup_6ADDF0_Setup(v8, PlayerCountMap, v6); /*0x6ade9d*/
  }
  if ( v8 && MEMORY[0xA8B23C] ) /*0x6adeba*/
  {
    for ( i = 1; i < 8; ++i ) /*0x6adebc*/
    {
      ResourceID4CSF = GetResourceID4CSF((void *)i); /*0x6adec8*/
      if ( MEMORY[0xA8B23C] && *(_BYTE *)(MEMORY[0xA8B23C] + 60) ) /*0x6aded3*/
        SetupLobbyPlayerSlots(v8, ResourceID4CSF, 3); /*0x6adedc*/
      else
        SetupLobbyPlayerSlots(v8, ResourceID4CSF, -2); /*0x6adee2*/
    }
  }
}


// ==== 0x006ADF00  Skirmish_Setup_6ADDF0_Setup  this=-  sig=csp ====
int __fastcall Skirmish_Setup_6ADDF0_Setup(HWND hDlg, int a2, int nIDDlgItem)
{
  int result; // eax
  char *v5; // esi
  HWND ResourceIDHardcodedCSF; // [esp+4h] [ebp-1Ch]
  HWND DlgItem; // [esp+4h] [ebp-1Ch]
  HWND ResourceIDCSF; // [esp+8h] [ebp-18h]
  HWND v9; // [esp+8h] [ebp-18h]
  HWND ResourceID2CSF; // [esp+Ch] [ebp-14h]
  HWND v11; // [esp+Ch] [ebp-14h]
  HWND ResourceID3CSF; // [esp+10h] [ebp-10h]
  HWND v13; // [esp+10h] [ebp-10h]
  HWND ResourceID4CSF; // [esp+14h] [ebp-Ch]
  HWND v15; // [esp+14h] [ebp-Ch]
  HWND hWnd; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]
  int nIDDlgItema; // [esp+24h] [ebp+4h]

  result = a2 + nIDDlgItem; /*0x6adf08*/
  v17 = a2 + nIDDlgItem; /*0x6adf0e*/
  if ( a2 < a2 + nIDDlgItem )
  {
    v5 = (char *)(a2 - 1); /*0x6adf27*/
    do
    {
      if ( v5 )
      {
        if ( v5 == (char *)1 )
        {
          nIDDlgItema = 1294; /*0x6adf3d*/
        }
        else if ( v5 == (char *)2 )
        {
          nIDDlgItema = 1302; /*0x6adf4c*/
        }
        else if ( v5 == (char *)3 )
        {
          nIDDlgItema = 1306; /*0x6adf5b*/
        }
        else if ( v5 == (char *)4 )
        {
          nIDDlgItema = 1307; /*0x6adf6a*/
        }
        else if ( v5 == (char *)5 )
        {
          nIDDlgItema = 1308; /*0x6adf79*/
        }
        else
        {
          nIDDlgItema = v5 != (char *)6 ? -1 : 1309;
        }
      }
      else
      {
        nIDDlgItema = 1291; /*0x6adf2e*/
      }
      ResourceIDHardcodedCSF = (HWND)GetResourceIDHardcodedCSF(++v5); /*0x6adfa4*/
      ResourceIDCSF = (HWND)GetResourceIDCSF(v5); /*0x6adfaf*/
      ResourceID2CSF = (HWND)GetResourceID2CSF(v5); /*0x6adfba*/
      ResourceID3CSF = (HWND)GetResourceID3CSF(v5); /*0x6adfc5*/
      ResourceID4CSF = (HWND)GetResourceID4CSF(v5); /*0x6adfd2*/
      hWnd = GetDlgItem(hDlg, nIDDlgItema); /*0x6adfde*/
      DlgItem = GetDlgItem(hDlg, (int)ResourceIDHardcodedCSF); /*0x6adfe6*/
      v9 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x6adff6*/
      v11 = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x6ae002*/
      v13 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x6ae00a*/
      v15 = GetDlgItem(hDlg, (int)ResourceID4CSF); /*0x6ae01d*/
      ShowWindow(hWnd, 5); /*0x6ae021*/
      ShowWindow(DlgItem, 5); /*0x6ae02a*/
      ShowWindow(v9, 5); /*0x6ae033*/
      ShowWindow(v11, 5); /*0x6ae03c*/
      ShowWindow(v13, 5); /*0x6ae045*/
      ShowWindow(v15, 5); /*0x6ae04e*/
      SetupSkirmishSpawnLocationEntry(hDlg, nIDDlgItema); /*0x6ae056*/
      result = v17; /*0x6ae05b*/
    }
    while ( (int)(v5 + 1) < v17 );
  }
  return result; /*0x6ae06d*/
}


// ==== 0x006AE080  HideSkirmishSpawnLocations  this=-  sig=csp ====
void __fastcall HideSkirmishSpawnLocations(HWND hDlg, int a2)
{
  int v3; // esi
  int v4; // esi
  LRESULT v5; // ebp
  WPARAM v6; // ebx
  char *v7; // esi
  int nIDDlgItem; // [esp+10h] [ebp-18h]
  int nIDDlgItema; // [esp+10h] [ebp-18h]
  HWND nIDDlgItemb; // [esp+10h] [ebp-18h]
  HWND hWnda; // [esp+14h] [ebp-14h]
  HWND hWndb; // [esp+14h] [ebp-14h]
  HWND ResourceID2CSF; // [esp+18h] [ebp-10h]
  HWND DlgItem; // [esp+18h] [ebp-10h]
  HWND ResourceIDCSF; // [esp+1Ch] [ebp-Ch]
  HWND v17; // [esp+1Ch] [ebp-Ch]
  HWND ResourceID3CSF; // [esp+20h] [ebp-8h]
  HWND v19; // [esp+20h] [ebp-8h]
  HWND ResourceID4CSF; // [esp+24h] [ebp-4h]
  HWND v21; // [esp+24h] [ebp-4h]

  if ( a2 < 8 )
  {
    v3 = a2 - 1; /*0x6ae096*/
    for ( nIDDlgItem = a2 - 1; ; v3 = nIDDlgItem )
    {
      if ( v3 )
      {
        switch ( v3 )
        {
          case 1:
            v4 = 1294; /*0x6ae0b3*/
            break;
          case 2:
            v4 = 1302; /*0x6ae0bf*/
            break;
          case 3:
            v4 = 1306; /*0x6ae0cb*/
            break;
          case 4:
            v4 = 1307; /*0x6ae0d7*/
            break;
          case 5:
            v4 = 1308; /*0x6ae0e3*/
            break;
          default:
            v4 = v3 != 6 ? -1 : 1309;
            break;
        }
      }
      else
      {
        v4 = 1291; /*0x6ae0a7*/
      }
      v5 = SendDlgItemMessageA(hDlg, v4, 0x146u, 0, 0); /*0x6ae10e*/
      v6 = 0; /*0x6ae110*/
      if ( v5 > 0 ) /*0x6ae114*/
      {
        while ( SendDlgItemMessageA(hDlg, v4, 0x150u, v6, 0) != -1 ) /*0x6ae129*/
        {
          if ( (int)++v6 >= v5 ) /*0x6ae12e*/
            goto LABEL_22; /*0x6ae12e*/
        }
        SendDlgItemMessageA(hDlg, v4, 0x14Eu, v6, 0); /*0x6ae13c*/
      }
LABEL_22:
      SetupSkirmishSpawnLocationEntry(hDlg, v4); /*0x6ae146*/
      if ( ++nIDDlgItem + 1 >= 8 ) /*0x6ae158*/
        break; /*0x6ae158*/
    }
    if ( a2 < 8 )
    {
      v7 = (char *)(a2 - 1); /*0x6ae177*/
      do
      {
        if ( v7 )
        {
          if ( v7 == (char *)1 )
          {
            nIDDlgItema = 1294; /*0x6ae18d*/
          }
          else if ( v7 == (char *)2 )
          {
            nIDDlgItema = 1302; /*0x6ae19c*/
          }
          else if ( v7 == (char *)3 )
          {
            nIDDlgItema = 1306; /*0x6ae1ab*/
          }
          else if ( v7 == (char *)4 )
          {
            nIDDlgItema = 1307; /*0x6ae1ba*/
          }
          else if ( v7 == (char *)5 )
          {
            nIDDlgItema = 1308; /*0x6ae1c9*/
          }
          else
          {
            nIDDlgItema = v7 != (char *)6 ? -1 : 1309;
          }
        }
        else
        {
          nIDDlgItema = 1291; /*0x6ae17e*/
        }
        hWnda = (HWND)GetResourceIDHardcodedCSF(++v7); /*0x6ae1f4*/
        ResourceID2CSF = (HWND)GetResourceID2CSF(v7); /*0x6ae1ff*/
        ResourceIDCSF = (HWND)GetResourceIDCSF(v7); /*0x6ae20a*/
        ResourceID3CSF = (HWND)GetResourceID3CSF(v7); /*0x6ae215*/
        ResourceID4CSF = (HWND)GetResourceID4CSF(v7); /*0x6ae21e*/
        nIDDlgItemb = GetDlgItem(hDlg, nIDDlgItema); /*0x6ae22e*/
        hWndb = GetDlgItem(hDlg, (int)hWnda); /*0x6ae23a*/
        DlgItem = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x6ae242*/
        v17 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x6ae252*/
        v19 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x6ae25e*/
        v21 = GetDlgItem(hDlg, (int)ResourceID4CSF); /*0x6ae266*/
        ShowWindow(nIDDlgItemb, 0); /*0x6ae271*/
        ShowWindow(hWndb, 0); /*0x6ae27a*/
        ShowWindow(DlgItem, 0); /*0x6ae283*/
        ShowWindow(v17, 0); /*0x6ae28c*/
        ShowWindow(v19, 0); /*0x6ae295*/
        ShowWindow(v21, 0); /*0x6ae29e*/
      }
      while ( (int)(v7 + 1) < 8 );
    }
  }
}


// ==== 0x006AE2C0  ObjectClass::ShowSkirmishSetupScreen  this=ObjectClass  sig=csp ====
bool __usercall ShowSkirmishSetupScreen@<al>(int a1@<ebx>, int a2@<ebp>)
{
  int i; // esi
  void *Dialog; // esi
  int j; // eax
  int v5; // ecx
  void *v6; // esi
  int dwNewLong; // [esp+4h] [ebp-4h] BYREF

  dwNewLong = -1; /*0x6ae2ce*/
  RulesClass::LoadCountries((#381 *)MEMORY[0x87F7E8][7806]); /*0x6ae2d6*/
  RulesClass::ReadDataList((#381 *)MEMORY[0x87F7E8][7806]); /*0x6ae2e8*/
  for ( i = 0; i < MEMORY[0x87F7E8][528688]; ++i ) /*0x6ae2f6*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(MEMORY[0x87F7E8][528685] + 4 * i) + 100))( /*0x6ae30a*/
      *(_DWORD *)(MEMORY[0x87F7E8][528685] + 4 * i),
      MEMORY[0x87F7E8][7704]);
  LoadingScreen::Init(); /*0x6ae317*/
  Dialog = (void *)CreateDialog(0x102u, (int)Skirmish::Setup_DlgProc, 0); /*0x6ae32d*/
  if ( Dialog ) /*0x6ae331*/
  {
    dword_A8ED54[127506] = (int)Dialog; /*0x6ae337*/
    ((void (__stdcall *)(void *, int, int *))SetWindowLongA)(Dialog, 8, &dwNewLong); /*0x6ae341*/
    Dialog::Show(Dialog); /*0x6ae349*/
    for ( j = dwNewLong; dwNewLong != 1559; j = dwNewLong ) /*0x6ae357*/
    {
      if ( j == 1472 ) /*0x6ae35e*/
        break; /*0x6ae35e*/
      if ( Dialog::PumpMessages() == 1 ) /*0x6ae367*/
        break; /*0x6ae367*/
      LOBYTE(v5) = 0; /*0x6ae369*/
      ScreenSaver::Process(v5); /*0x6ae36b*/
    }
    Dialog::Destroy(Dialog); /*0x6ae37d*/
    dword_A8ED54[127506] = 0; /*0x6ae382*/
  }
  v6 = (void *)dword_A8ED54[51456]; /*0x6ae38c*/
  if ( dword_A8ED54[51456] ) /*0x6ae394*/
  {
    ComPtr::Dtor((_DWORD *)dword_A8ED54[51456]); /*0x6ae398*/
    __3_YAXPAX_Z(v6); /*0x6ae39e*/
    dword_A8ED54[51456] = 0; /*0x6ae3a6*/
  }
  CleanupFileTree(); /*0x6ae3b0*/
  SaveConfigWOL((int)&MEMORY[0x87F7E8][536212]); /*0x6ae3ba*/
  if ( dwNewLong == 1472 ) /*0x6ae3c9*/
    Screen::Capture(1, 0, a1, a2); /*0x6ae3cf*/
  return dwNewLong == 1559; /*0x6ae3e0*/
}


// ==== 0x006AE3F0  Skirmish::Setup_DlgProc  this=Skirmish  sig=csp ====
int __stdcall Skirmish::Setup_DlgProc(void *hDlg, unsigned int a2, unsigned int a3, int a4)
{
  int result; // eax
  void *v5; // eax
  void **v6; // ebp
  void *v7; // eax
  void *v8; // esi
  #72 *v9; // eax
  void *ComboBoxSelectedRaw; // eax
  #72 *ColorTooltip; // eax
  void *ComboBoxSelected; // eax
  #72 *Name; // eax
  int v14; // eax
  int v15; // eax
  #72 *StringCSF; // eax
  #72 *v17; // eax
  #72 *v18; // eax
  #72 *v19; // eax

  result = BaseDialogProc(hDlg, a2, a3, a4); /*0x6ae40a*/
  if ( !result ) /*0x6ae411*/
  {
    if ( a2 > 0x497 ) /*0x6ae41d*/
    {
      if ( a2 != 1257 ) /*0x6ae4a9*/
        return 0; /*0x6ae4b1*/
      v6 = (void **)(a4 + 8); /*0x6ae4b4*/
      WideString::Assign_Alt((void **)(a4 + 8), 0); /*0x6ae4bb*/
      if ( *(_DWORD *)a4 && *(_DWORD *)(a4 + 4) != -1 ) /*0x6ae4ce*/
      {
        v7 = (void *)((int (__stdcall *)(_DWORD))GetDlgCtrlID)(*(_DWORD *)a4); /*0x6ae4d5*/
        v8 = v7; /*0x6ae4db*/
        if ( v7 == (void *)1291 /*0x6ae52b*/
          || v7 == (void *)1294
          || v7 == (void *)1302
          || v7 == (void *)1306
          || v7 == (void *)1307
          || v7 == (void *)1308
          || v7 == (void *)1309 )
        {
          v14 = *(_DWORD *)(a4 + 4); /*0x6ae5da*/
          if ( v14 == -1 ) /*0x6ae5e6*/
            v14 = ((int (__stdcall *)(void *, void *, int, _DWORD, _DWORD))SendDlgItemMessageA)(hDlg, v8, 327, 0, 0); /*0x6ae5f3*/
          v15 = ((int (__stdcall *)(void *, void *, int, int, _DWORD))SendDlgItemMessageA)(hDlg, v8, 336, v14, 0); /*0x6ae5ff*/
          switch ( v15 ) /*0x6ae604*/
          {
            case -1: /*0x6ae604*/
              StringCSF = GetStringCSF((#72 *)aSttPlayernone, 0, g_Str_File_Skirmish_cpp, 135); /*0x6ae617*/
              WideString::Assign_Alt(v6, StringCSF); /*0x6ae61f*/
              return 1; /*0x6ae62d*/
            case 2: /*0x6ae604*/
              v17 = GetStringCSF((#72 *)g_Str_STT_PlayerDumbAI, 0, g_Str_File_Skirmish_cpp, 137); /*0x6ae646*/
              WideString::Assign_Alt(v6, v17); /*0x6ae64e*/
              return 1; /*0x6ae65c*/
            case 1: /*0x6ae604*/
              v18 = GetStringCSF((#72 *)g_Str_STT_PlayerSmartAI, 0, g_Str_File_Skirmish_cpp, 139); /*0x6ae675*/
              WideString::Assign_Alt(v6, v18); /*0x6ae67d*/
              return 1; /*0x6ae68b*/
            case 0: /*0x6ae604*/
              v19 = GetStringCSF((#72 *)g_Str_STT_PlayerGeniusAI, 0, g_Str_File_Skirmish_cpp, 141); /*0x6ae6a3*/
              WideString::Assign_Alt(v6, v19); /*0x6ae6ab*/
              return 1; /*0x6ae6b9*/
          }
          WideString::Assign_Alt(v6, 0); /*0x6ae6c1*/
        }
        else if ( CountryCombo::IDToIndex(v7) == -1 ) /*0x6ae53b*/
        {
          if ( StartCombo::IDToIndex(v8) != -1 ) /*0x6ae547*/
          {
            ComboBoxSelectedRaw = (void *)GetComboBoxSelectedRaw((int)hDlg, (int)v8, *(_DWORD *)(a4 + 4)); /*0x6ae589*/
            ColorTooltip = GameSetup::GetColorTooltip(ComboBoxSelectedRaw); /*0x6ae590*/
            WideString::Assign_Alt((void **)(a4 + 8), ColorTooltip); /*0x6ae598*/
            return 1; /*0x6ae5a6*/
          }
          if ( Dialog::SideIDToIndex(v8) != -1 ) /*0x6ae553*/
          {
            SetComboBoxSelection((int)hDlg, (int)v8, *(_DWORD *)(a4 + 4)); /*0x6ae561*/
            v9 = sub_4E4F30(); /*0x6ae568*/
            WideString::Assign_Alt((void **)(a4 + 8), v9); /*0x6ae570*/
            return 1; /*0x6ae57e*/
          }
        }
        else
        {
          ComboBoxSelected = (void *)GetComboBoxSelected((int)hDlg, (int)v8, *(_DWORD *)(a4 + 4)); /*0x6ae5b1*/
          if ( ComboBoxSelected != (void *)-1 ) /*0x6ae5b9*/
          {
            Name = SideClass::GetName(ComboBoxSelected); /*0x6ae5c1*/
            WideString::Assign_Alt((void **)(a4 + 8), Name); /*0x6ae5c9*/
            return 1; /*0x6ae5d7*/
          }
        }
      }
      return 1; /*0x6ae6c6*/
    }
    else
    {
      if ( a2 == 1175 ) /*0x6ae423*/
        return Skirmish::SetupGame(hDlg, a3, a4); /*0x6ae4a0*/
      if ( a2 != 15 ) /*0x6ae428*/
      {
        if ( a2 == 273 ) /*0x6ae430*/
        {
          DialogSkirmishFunc_UpdateMultiEngineer(hDlg, (unsigned __int16)a3, a4, HIWORD(a3)); /*0x6ae443*/
          return 1; /*0x6ae451*/
        }
        return 0; /*0x6ae430*/
      }
      if ( dword_A8ED54[51456] ) /*0x6ae45b*/
      {
        v5 = (void *)((int (__stdcall *)(void *, int))GetDlgItem)(hDlg, 1128); /*0x6ae463*/
        if ( !SkirmishMapGen::LookupDialogHash(v5) ) /*0x6ae46b*/
          Skirmish::RenderPreview((_DWORD *)dword_A8ED54[51456], (int)hDlg); /*0x6ae47b*/
      }
      ((void (__stdcall *)(void *, _DWORD))ValidateRect)(hDlg, 0); /*0x6ae483*/
      return 0; /*0x6ae48c*/
    }
  }
  return result; /*0x6ae448*/
}


// ==== 0x006AE6E0  Skirmish::SetupGame  this=Skirmish  sig=csp ====
int __thiscall Skirmish::SetupGame(SkirmishDialog *hWnd, int a2)
{
  HWND DlgItem; // eax
  HWND v4; // esi
  char *v5; // eax
  int i; // edi
  int v7; // eax
  HWND v8; // esi
  wchar_t *StringCSF; // eax
  LRESULT v10; // eax
  wchar_t *v11; // eax
  LRESULT v12; // eax
  wchar_t *v13; // eax
  LRESULT v14; // eax
  wchar_t *v15; // eax
  LRESULT v16; // eax
  SkirmishDialog *v17; // esi
  int v18; // esi
  int v19; // eax
  int v20; // eax
  WPARAM v21; // edi
  SkirmishDialog *ResourceID2CSF; // esi
  SkirmishDialog *ResourceIDCSF; // edi
  HWND v24; // edi
  int v25; // eax
  ObjectClass *v26; // ecx
  ObjectClass *v27; // esi
  CCINIClass *v28; // ecx
  int v29; // eax
  int v30; // ecx
  int PlayerCountMap; // edi
  int v32; // ecx
  int j; // edi
  int v34; // eax
  HWND (__stdcall *v35)(HWND, int); // edi
  HWND v36; // eax
  ObjectClass *v38; // esi
  LPARAM edi70; // edi
  ObjectClass *v40; // esi
  ObjectClass *v41; // esi
  HWND eax75; // eax
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // eax
  HWND v45; // eax
  ObjectClass *v47; // esi
  _DWORD *eax88; // eax
  ObjectClass *v49; // eax
  int hWnda; // [esp+Ch] [ebp-14h]
  HWND hWndb; // [esp+Ch] [ebp-14h]
  int *v52; // [esp+10h] [ebp-10h]
  SkirmishDialog *v53; // [esp+14h] [ebp-Ch]
  int nIDDlgItem; // [esp+18h] [ebp-8h]
  HWND nIDDlgItemb; // [esp+18h] [ebp-8h]
  int nIDDlgItema; // [esp+18h] [ebp-8h]
  HWND v57; // [esp+1Ch] [ebp-4h]
  HWND ResourceID4CSF; // [esp+1Ch] [ebp-4h]
  HWND v59; // [esp+1Ch] [ebp-4h]
  ObjectClass *First; // [esp+1Ch] [ebp-4h]

  Network::processGameEvent(&HouseClass_Player.__pad_5568[8092]); /*0x6ae6ed*/
  DlgItem = GetDlgItem((HWND)hWnd, 1696); /*0x6ae6f8*/
  v4 = DlgItem; /*0x6ae704*/
  if ( DlgItem ) /*0x6ae708*/
  {
    SendMessageA(DlgItem, 0xC5u, 0x13u, 0); /*0x6ae714*/
    v5 = CharToWideString(&HouseClass_Player.__pad_5568[8396]); /*0x6ae71b*/
    SendMessageA(v4, 0x4B2u, 0, (LPARAM)v5); /*0x6ae729*/
    SendMessageA(v4, 0x4D1u, 1u, 0); /*0x6ae735*/
  }
  for ( i = 0; i < 7; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v7 = 1294; /*0x6ae74a*/
          break;
        case 2:
          v7 = 1302; /*0x6ae756*/
          break;
        case 3:
          v7 = 1306; /*0x6ae762*/
          break;
        case 4:
          v7 = 1307; /*0x6ae76e*/
          break;
        case 5:
          v7 = 1308; /*0x6ae77a*/
          break;
        default:
          v7 = i != 6 ? -1 : 1309;
          break;
      }
    }
    else
    {
      v7 = 1291; /*0x6ae73e*/
    }
    v8 = GetDlgItem((HWND)hWnd, v7); /*0x6ae79c*/
    SendMessageA(v8, 0x14Bu, 0, 0); /*0x6ae7a8*/
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[40652], 0, &stru_830620.__pad_579C[40592], 158); /*0x6ae7bb*/
    v10 = SendMessageA(v8, 0x4C2u, 0, (LPARAM)StringCSF); /*0x6ae7c9*/
    SendMessageA(v8, 0x151u, v10, -1); /*0x6ae7d4*/
    v11 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[408], 0, &stru_830620.__pad_579C[40592], 161); /*0x6ae7e7*/
    v12 = SendMessageA(v8, 0x4C2u, 0, (LPARAM)v11); /*0x6ae7f5*/
    SendMessageA(v8, 0x151u, v12, 2); /*0x6ae800*/
    v13 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[392], 0, &stru_830620.__pad_579C[40592], 164); /*0x6ae813*/
    v14 = SendMessageA(v8, 0x4C2u, 0, (LPARAM)v13); /*0x6ae821*/
    SendMessageA(v8, 0x151u, v14, 1); /*0x6ae82c*/
    v15 = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[380], 0, &stru_830620.__pad_579C[40592], 167); /*0x6ae83f*/
    v16 = SendMessageA(v8, 0x4C2u, 0, (LPARAM)v15); /*0x6ae84d*/
    SendMessageA(v8, 0x151u, v16, 0); /*0x6ae858*/
    SendMessageA(v8, 0x14Eu, 0, 0); /*0x6ae864*/
  }
  SkirmishDialog::FillComboBoxes(hWnd); /*0x6ae872*/
  InitGameDropdownColors(); /*0x6ae877*/
  Lobby::FillPlayerFactions((HWND)hWnd); /*0x6ae87e*/
  _cfltcvt_init(); /*0x6ae883*/
  Lobby::InvalidateFactionCombos((HWND)hWnd); /*0x6ae88a*/
  GDlg::LoadLetterStrings(); /*0x6ae88f*/
  Lobby::InvalidatePlayerSlots((HWND)hWnd); /*0x6ae896*/
  SetupSkirmishDialogPlayerSlot((HWND)hWnd, 0); /*0x6ae89f*/
  MapSkirmishDialogPlayerToControl((HWND)hWnd, 0); /*0x6ae8a8*/
  FillLobbyFactionComboBox((HWND)hWnd, 0); /*0x6ae8b1*/
  SetupLobbyPlayerSlotDialog((HWND)hWnd, 0); /*0x6ae8ba*/
  v53 = 0; /*0x6ae8bf*/
  v52 = (int *)&HouseClass_Player.__pad_5568[8508]; /*0x6ae8c7*/
  v17 = 0; /*0x6ae8cf*/
  do
  {
    if ( v17 )
    {
      if ( v17 == (SkirmishDialog *)1 )
      {
        v18 = 1294; /*0x6ae8e3*/
      }
      else if ( v17 == (SkirmishDialog *)2 )
      {
        v18 = 1302; /*0x6ae8ef*/
      }
      else if ( v17 == (SkirmishDialog *)3 )
      {
        v18 = 1306; /*0x6ae8fb*/
      }
      else if ( v17 == (SkirmishDialog *)4 )
      {
        v18 = 1307; /*0x6ae907*/
      }
      else if ( v17 == (SkirmishDialog *)5 )
      {
        v18 = 1308; /*0x6ae913*/
      }
      else
      {
        v18 = v17 != (SkirmishDialog *)6 ? -1 : 1309;
      }
    }
    else
    {
      v18 = 1291; /*0x6ae8d7*/
    }
    v19 = *(v52 - 1); /*0x6ae931*/
    switch ( v19 ) /*0x6ae937*/
    {
      case 1: /*0x6ae937*/
        hWnda = -1; /*0x6ae939*/
        break;
      case 4: /*0x6ae937*/
        hWnda = 0; /*0x6ae948*/
        break;
      case 5: /*0x6ae937*/
        hWnda = 1; /*0x6ae957*/
        break;
      default:
        v20 = -(v19 != 6); /*0x6ae966*/
        LOBYTE(v20) = v20 & 0xFD; /*0x6ae968*/
        hWnda = v20 + 2; /*0x6ae96d*/
        break;
    }
    v21 = 0; /*0x6ae982*/
    v57 = (HWND)SendDlgItemMessageA((HWND)hWnd, v18, 0x146u, 0, 0); /*0x6ae986*/
    if ( (int)v57 > 0 ) /*0x6ae98a*/
    {
      while ( SendDlgItemMessageA((HWND)hWnd, v18, 0x150u, v21, 0) != hWnda ) /*0x6ae9a0*/
      {
        if ( (int)++v21 >= (int)v57 ) /*0x6ae9a9*/
          goto LABEL_44; /*0x6ae9a9*/
      }
      SendDlgItemMessageA((HWND)hWnd, v18, 0x14Eu, v21, 0); /*0x6ae9b7*/
    }
LABEL_44:
    v53 = (SkirmishDialog *)((char *)v53 + 1); /*0x6ae9bd*/
    ResourceID2CSF = (SkirmishDialog *)GetResourceID2CSF(v53); /*0x6ae9d1*/
    ResourceIDCSF = (SkirmishDialog *)GetResourceIDCSF(v53); /*0x6ae9dc*/
    nIDDlgItem = GetResourceID3CSF(v53); /*0x6ae9e7*/
    ResourceID4CSF = (HWND)GetResourceID4CSF(v53); /*0x6ae9f0*/
    if ( hWnda == -1 ) /*0x6ae9fb*/
    {
      SetupLobbyCountryCombo(hWnd, (int)ResourceID2CSF, -2); /*0x6aea07*/
      SetupSkirmishSpawnLocations((HWND)hWnd, (int)ResourceIDCSF, -2); /*0x6aea12*/
      SetupLobbyFactionSlots((SessionClass *)hWnd, nIDDlgItem, -2); /*0x6aea1f*/
      SetupLobbyPlayerSlots((SessionClass *)hWnd, (int)ResourceID4CSF, -2); /*0x6aea2c*/
      hWndb = GetDlgItem((HWND)hWnd, (int)ResourceID2CSF); /*0x6aea3d*/
      v24 = GetDlgItem((HWND)hWnd, (int)ResourceIDCSF); /*0x6aea43*/
      nIDDlgItemb = GetDlgItem((HWND)hWnd, nIDDlgItem); /*0x6aea4d*/
      v59 = GetDlgItem((HWND)hWnd, (int)ResourceID4CSF); /*0x6aea66*/
      EnableWindow(hWndb, 0); /*0x6aea6a*/
      EnableWindow(v24, 0); /*0x6aea6f*/
      EnableWindow(nIDDlgItemb, 0); /*0x6aea78*/
      EnableWindow(v59, 0); /*0x6aea81*/
    }
    else
    {
      SetupLobbyCountryCombo(hWnd, (int)ResourceID2CSF, *v52); /*0x6aea90*/
      SetupSkirmishSpawnLocations((HWND)hWnd, (int)ResourceIDCSF, v52[1]); /*0x6aeaa1*/
    }
    v17 = v53; /*0x6aeaa6*/
    v52 += 3; /*0x6aeab8*/
  }
  while ( (int)&v53->__pad_0[1] < 8 );
  if ( *(int *)&HouseClass_Player.__pad_5568[8464] <= 0 /*0x6aeadb*/
    || (v25 = MultiplayerGameMode::ListGet(),
        v26 = *(ObjectClass **)&HouseClass_Player.__pad_5568[8464],
        *(int *)&HouseClass_Player.__pad_5568[8464] > v25) )
  {
    v26 = *(ObjectClass **)(MultiplayerGameMode::GetFirst() + 40); /*0x6aeae2*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[8464] = v26; /*0x6aeae5*/
  }
  *(_DWORD *)&HouseClass_Player.__pad_5568[8092] = v26; /*0x6aeaeb*/
  v27 = (ObjectClass *)Skirmish_Setup(); /*0x6aeaf6*/
  First = v27; /*0x6aeaf8*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8464] = v27->owningHouseIndex; /*0x6aeaff*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8092] = v27->owningHouseIndex; /*0x6aeb07*/
  GDlg::LoadLetterStrings(); /*0x6aeb0d*/
  Lobby::InvalidatePlayerSlots((HWND)hWnd); /*0x6aeb14*/
  SetupLobbyPlayerSlotDialog((HWND)hWnd, 0); /*0x6aeb1d*/
  v28 = *(CCINIClass **)&HouseClass_Player.__pad_5568[8468]; /*0x6aeb22*/
  if ( *(int *)&HouseClass_Player.__pad_5568[8468] < 0 /*0x6aeb32*/
    || *(int *)&HouseClass_Player.__pad_5568[8468] >= *(int *)&HouseClass_Player.__pad_5568[9764] )
  {
    v28 = 0; /*0x6aeb34*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[8468] = 0; /*0x6aeb36*/
  }
  *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = LoadScenarioClassByIndex((int)v28) != 0
                                                 ? *(_DWORD *)&HouseClass_Player.__pad_5568[8468]
                                                 : 0;
  nIDDlgItema = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] /*0x6aeb5e*/
                          + 4 * *(_DWORD *)&HouseClass_Player.__pad_5568[8096]);
  if ( !MapPreview::Check(v27->__pad_0, nIDDlgItema) ) /*0x6aeb62*/
  {
    v29 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v27->__pad_0 + 68))(v27); /*0x6aeb6f*/
    if ( v29 == -1 ) /*0x6aeb75*/
    {
      First = (ObjectClass *)MultiplayerGameMode::GetFirst(); /*0x6aeb7f*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8464] = First->owningHouseIndex; /*0x6aeb83*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8092] = First->owningHouseIndex; /*0x6aeb8c*/
      v29 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)First->__pad_0 + 68))(First); /*0x6aeb96*/
    }
    v30 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v29); /*0x6aeb9f*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[8468] = v29; /*0x6aeba2*/
    nIDDlgItema = v30; /*0x6aeba7*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = v29; /*0x6aebab*/
    strcpy(&HouseClass_Player.__pad_5568[9772], (const char *)(v30 + 88)); /*0x6aebca*/
    v27 = First; /*0x6aebd3*/
  }
  *(_DWORD *)&HouseClass_Player.__pad_5568[8072] = v27; /*0x6aebdd*/
  PlayerCountMap = ReadPlayerCountMap(*(int *)&HouseClass_Player.__pad_5568[8096]); /*0x6aebee*/
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 4))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072]) /*0x6aec07*/
    || (v32 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4580), v32 > PlayerCountMap) )
  {
    v32 = PlayerCountMap; /*0x6aec09*/
  }
  ResetLobbyFactionTable(v32); /*0x6aec0b*/
  Lobby::InvalidateFactionCombos((HWND)hWnd); /*0x6aec12*/
  Lobby::InvalidatePlayerSlots((HWND)hWnd); /*0x6aec19*/
  if ( hWnd && *(_DWORD *)&HouseClass_Player.__pad_5568[8072] ) /*0x6aec29*/
  {
    for ( j = 1; j < 8; ++j ) /*0x6aec2b*/
    {
      v34 = GetResourceID4CSF((void *)j); /*0x6aec32*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072] /*0x6aec41*/
        && *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8072] + 60) )
      {
        SetupLobbyPlayerSlots((SessionClass *)hWnd, v34, 3); /*0x6aec4a*/
      }
      else
      {
        SetupLobbyPlayerSlots((SessionClass *)hWnd, v34, -2); /*0x6aec52*/
      }
    }
  }
  Skirmish_Setup_6ADDF0((HWND)hWnd, -1, *(int *)&HouseClass_Player.__pad_5568[8096]); /*0x6aec69*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8072] = v27; /*0x6aec6e*/
  (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)v27->__pad_0 + 32))(v27); /*0x6aec78*/
  Skirmish::EnableSpawnButtons((HWND)hWnd); /*0x6aec7d*/
  SetDialogPlayerName((HWND)hWnd, (int)v27); /*0x6aec86*/
  Dialog::ShowPlayerName((HWND)hWnd); /*0x6aec8d*/
  PtrVector::Destroy(&HouseClass_Player.__pad_5568[18368]); /*0x6aec97*/
  v35 = GetDlgItem; /*0x6aecad*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8116] = *(_DWORD *)&HouseClass_Player.__pad_5568[8472]; /*0x6aecb9*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8104] = *(_DWORD *)&HouseClass_Player.__pad_5568[8476]; /*0x6aecbf*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8124] = *(_DWORD *)&HouseClass_Player.__pad_5568[8480]; /*0x6aecc5*/
  v36 = GetDlgItem((HWND)hWnd, 1321); /*0x6aecca*/
  v38 = (ObjectClass *)v36; /*0x6aeccc*/
  if ( v36 ) /*0x6aecd0*/
  {
    edi70 = 6 - *(_DWORD *)&HouseClass_Player.__pad_5568[8116]; /*0x6aecea*/
    SendMessageA(v36, 0x406u, 1u, 393216); /*0x6aecec*/
    SendMessageA((HWND)v38, 0x405u, 1u, edi70); /*0x6aecf7*/
    v35 = GetDlgItem; /*0x6aecf9*/
  }
  v40 = (ObjectClass *)v35((HWND)hWnd, 1297); /*0x6aed07*/
  if ( v40 ) /*0x6aed0b*/
  {
    SendMessageA( /*0x6aed32*/
      (HWND)v40,
      0x406u,
      1u,
      *(unsigned __int16 *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5248)
    | (*(unsigned __int16 *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5256) << 16));
    SendMessageA((HWND)v40, 0x405u, 1u, *(LPARAM *)&HouseClass_Player.__pad_5568[8104]); /*0x6aed42*/
    SendMessageA((HWND)v40, 0x4ABu, 0, *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5260)); /*0x6aed59*/
  }
  v41 = (ObjectClass *)v35((HWND)hWnd, 1292); /*0x6aed63*/
  if ( v41 ) /*0x6aed67*/
  {
    SendMessageA( /*0x6aed8e*/
      (HWND)v41,
      0x406u,
      1u,
      *(unsigned __int16 *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5264)
    | (*(unsigned __int16 *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5272) << 16));
    SendMessageA((HWND)v41, 0x405u, 1u, *(LPARAM *)&HouseClass_Player.__pad_5568[8124]); /*0x6aed9e*/
  }
  HouseClass_Player.__pad_5568[8110] = HouseClass_Player.__pad_5568[8484]; /*0x6aedb1*/
  HouseClass_Player.__pad_5568[8111] = HouseClass_Player.__pad_5568[8485]; /*0x6aedbd*/
  HouseClass_Player.__pad_5568[8112] = HouseClass_Player.__pad_5568[8486]; /*0x6aedcf*/
  HouseClass_Player.__pad_5568[8300] = HouseClass_Player.__pad_5568[8487]; /*0x6aedd4*/
  HouseClass_Player.__pad_5568[8109] = HouseClass_Player.__pad_5568[8488]; /*0x6aedda*/
  eax75 = v35((HWND)hWnd, 1358); /*0x6aede0*/
  if ( eax75 ) /*0x6aede4*/
    SendMessageA(eax75, 0xF1u, HouseClass_Player.__pad_5568[8110] != 0, 0); /*0x6aedfc*/
  v42 = v35((HWND)hWnd, 1690); /*0x6aee04*/
  if ( v42 ) /*0x6aee08*/
    SendMessageA(v42, 0xF1u, HouseClass_Player.__pad_5568[8111] != 0, 0); /*0x6aee20*/
  v43 = v35((HWND)hWnd, 1693); /*0x6aee28*/
  if ( v43 ) /*0x6aee2c*/
    SendMessageA(v43, 0xF1u, HouseClass_Player.__pad_5568[8112] != 0, 0); /*0x6aee44*/
  v44 = v35((HWND)hWnd, 1683); /*0x6aee4c*/
  if ( v44 ) /*0x6aee50*/
    SendMessageA(v44, 0xF1u, HouseClass_Player.__pad_5568[8300] != 0, 0); /*0x6aee68*/
  v45 = v35((HWND)hWnd, 1686); /*0x6aee70*/
  if ( v45 ) /*0x6aee75*/
    SendMessageA(v45, 0xF1u, HouseClass_Player.__pad_5568[8109] != 0, 0); /*0x6aee8d*/
  if ( !IsRandMap::Sed(nIDDlgItema) ) /*0x6aee93*/
    goto LABEL_92; /*0x6aee93*/
  ScenarioClass::CopyStartPositions(); /*0x6aee9c*/
  v47 = (ObjectClass *)*(&g_MatrixTransformState + 2257); /*0x6aeea1*/
  if ( *(&g_MatrixTransformState + 2257) ) /*0x6aeea9*/
  {
    ComPtr::Dtor(*(&g_MatrixTransformState + 2257)); /*0x6aeead*/
    __3_YAXPAX_Z(v47); /*0x6aeeb3*/
  }
  eax88 = (_DWORD *)__2_YAPAXI_Z(4u); /*0x6aeebd*/
  v49 = eax88 ? (ObjectClass *)unknown_libname_27(eax88) : 0;
  *(&g_MatrixTransformState + 2257) = (CoordStruct *)v49; /*0x6aeedb*/
  Surface::LoadToSurfaceSHP((char **)v49, stru_829ABC.__pad_0); /*0x6aeee0*/
  if ( !(*(&g_MatrixTransformState + 2257))->X ) /*0x6aeeeb*/
LABEL_92:
    Session::PrepareGame((HWND)hWnd); /*0x6aeef2*/
  return 0; /*0x6aeef7*/
}


// ==== 0x006AEF10  sub_6AEF10  this=-  sig=ida-proto ====
void sub_6AEF10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6aef1c*/
  MEMORY[0xB0B5C0] = Math::Sqrt(v0 + v0); /*0x6aef2e*/
}


// ==== 0x006AEF40  sub_6AEF40  this=-  sig=ida-proto ====
void sub_6AEF40()
{
  MEMORY[0xB0B628] = MEMORY[0xB0B5C0] / 60.0; /*0x6aef4c*/
}


// ==== 0x006AEF60  sub_6AEF60  this=-  sig=ida-proto ====
void sub_6AEF60()
{
  MEMORY[0xB0B610] = 1.0 / MEMORY[0xB0B628]; /*0x6aef6c*/
}


// ==== 0x006AEF80  sub_6AEF80  this=-  sig=ida-proto ====
void sub_6AEF80()
{
  MEMORY[0xB0B608] = 0.0174532925199433 * 45.0; /*0x6aef8c*/
}


// ==== 0x006AEFA0  sub_6AEFA0  this=-  sig=ida-proto ====
void sub_6AEFA0()
{
  MEMORY[0xB0B5C8] = 0.0174532925199433 * 60.0; /*0x6aefac*/
}


// ==== 0x006AEFC0  sub_6AEFC0  this=-  sig=ida-proto ====
void sub_6AEFC0()
{
  MEMORY[0xB0B5A0] = 0.0174532925199433 * 90.0; /*0x6aefcc*/
}


// ==== 0x006AEFE0  sub_6AEFE0  this=-  sig=ida-proto ====
__int64 sub_6AEFE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0B5A0] - MEMORY[0xB0B5C8]); /*0x6aeff2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0B5C0] * 0.5); /*0x6af006*/
  MEMORY[0xB0B630] = result; /*0x6af00b*/
  return result; /*0x6af010*/
}


// ==== 0x006AF020  sub_6AF020  this=-  sig=ida-proto ====
void sub_6AF020()
{
  MEMORY[0xB0B5D0] = Math::ArcTan((double)MEMORY[0xB0B630] * 0.00390625); /*0x6af037*/
}


// ==== 0x006AF050  sub_6AF050  this=-  sig=ida-proto ====
void sub_6AF050()
{
  MEMORY[0xB0B5E8] = Math::ArcTan((double)(2 * MEMORY[0xB0B630]) / MEMORY[0xB0B5C0]); /*0x6af072*/
}


// ==== 0x006AF080  sub_6AF080  this=-  sig=ida-proto ====
__int64 sub_6AF080()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0B630]) + 0.5); /*0x6af09b*/
  MEMORY[0xB0B624] = result; /*0x6af0a0*/
  return result; /*0x6af0a6*/
}


// ==== 0x006AF0B0  sub_6AF0B0  this=-  sig=ida-proto ====
int sub_6AF0B0()
{
  MEMORY[0xB0B5B8] = 0; /*0x6af0b2*/
  return 0; /*0x6af0be*/
}


// ==== 0x006AF0C0  sub_6AF0C0  this=-  sig=ida-proto ====
int sub_6AF0C0()
{
  MEMORY[0xB0B5D8] = 0; /*0x6af0c2*/
  MEMORY[0xB0B5DC] = 0; /*0x6af0c7*/
  MEMORY[0xB0B5E0] = 0; /*0x6af0cc*/
  return 0; /*0x6af0d1*/
}


// ==== 0x006AF0E0  sub_6AF0E0  this=-  sig=ida-proto ====
int sub_6AF0E0()
{
  MEMORY[0xB0B620] = 0; /*0x6af0e5*/
  MEMORY[0xB0B618] = 128; /*0x6af0ef*/
  MEMORY[0xB0B61C] = 128; /*0x6af0f4*/
  return 128; /*0x6af0f9*/
}


// ==== 0x006AF100  sub_6AF100  this=-  sig=ida-proto ====
int sub_6AF100()
{
  MEMORY[0xB0B5A8] = 0; /*0x6af102*/
  MEMORY[0xB0B5AC] = 0; /*0x6af107*/
  MEMORY[0xB0B5B0] = 0; /*0x6af10c*/
  MEMORY[0xB0B5B4] = 0; /*0x6af111*/
  return 0; /*0x6af116*/
}


// ==== 0x006AF120  sub_6AF120  this=-  sig=ida-proto ====
int sub_6AF120()
{
  MEMORY[0xB0B5F4] = 0; /*0x6af127*/
  MEMORY[0xB0B5F8] = 0; /*0x6af12c*/
  MEMORY[0xB0B5FC] = 1; /*0x6af131*/
  MEMORY[0xB0B5FD] = 0; /*0x6af138*/
  MEMORY[0xB0B5F0] = (int)&vt_DynamicVectorClass_SlaveManagerClass; /*0x6af13d*/
  MEMORY[0xB0B604] = 10; /*0x6af147*/
  MEMORY[0xB0B600] = 0; /*0x6af151*/
  return atexit(sub_6AF160); /*0x6af15c*/
}


// ==== 0x006AF160  sub_6AF160  this=-  sig=ida-proto ====
void __cdecl sub_6AF160()
{
  MEMORY[0xB0B5F0] = (int)&vt_VectorClass_SlaveManagerClass; /*0x6af168*/
  if ( MEMORY[0xB0B5F4] && MEMORY[0xB0B5FD] ) /*0x6af17c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B5F4]); /*0x6af17f*/
    MEMORY[0xB0B5F4] = 0; /*0x6af187*/
  }
  MEMORY[0xB0B5FD] = 0; /*0x6af18d*/
  MEMORY[0xB0B5F8] = 0; /*0x6af193*/
}


// ==== 0x006AF1A0  SlaveManagerClass::ctor  this=SlaveManagerClass  sig=csp ====
int __thiscall SlaveManagerClass::ctor(int this, TechnoClass *aP1, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  IUnknown *v8; // ecx
  int *v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v19; // [esp+10h] [ebp-8h]
  TechnoClass *aP1a; // [esp+1Ch] [ebp+4h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x6af1a8*/
  SlaveControlVector::Constructor((_DWORD *)(this + 56), 0, 0); /*0x6af1b6*/
  *(_DWORD *)(this + 56) = &vt_DynamicVectorClass_SlaveManagerClass_SlaveControl; /*0x6af1c3*/
  *(_DWORD *)(this + 76) = 10; /*0x6af1c9*/
  *(_DWORD *)(this + 72) = 0; /*0x6af1d0*/
  *(_DWORD *)(this + 80) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6af1d8*/
  *(_DWORD *)(this + 88) = 0; /*0x6af1df*/
  *(_DWORD *)(this + 36) = aP1; /*0x6af1e2*/
  *(_DWORD *)(this + 40) = a3; /*0x6af1e9*/
  *(_DWORD *)this = &SlaveManagerClass::`vftable'; /*0x6af1f2*/
  *(_DWORD *)(this + 4) = &SlaveManagerClass::`vftable'; /*0x6af1f8*/
  *(_DWORD *)(this + 8) = &SlaveManagerClass::`vftable'; /*0x6af1ff*/
  *(_DWORD *)(this + 12) = &vt_SlaveManagerClass; /*0x6af206*/
  *(_DWORD *)(this + 44) = a4; /*0x6af20d*/
  *(_DWORD *)(this + 48) = a5; /*0x6af210*/
  *(_DWORD *)(this + 52) = a6; /*0x6af213*/
  for ( aP1a = 0; (int)aP1a < *(_DWORD *)(this + 44); aP1a = (TechnoClass *)((char *)aP1a + 1) ) /*0x6af21a*/
  {
    v7 = __2_YAPAXI_Z(0x14u); /*0x6af223*/
    if ( v7 ) /*0x6af22d*/
    {
      v8 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6af22f*/
      *(_DWORD *)(v7 + 16) = 0; /*0x6af235*/
      *(_DWORD *)(v7 + 8) = v8; /*0x6af238*/
      v9 = (int *)v7; /*0x6af23b*/
    }
    else
    {
      v9 = 0; /*0x6af23f*/
    }
    v10 = **(_DWORD **)(this + 40); /*0x6af249*/
    v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 60))(*(_DWORD *)(this + 36)); /*0x6af24b*/
    v12 = (*(int (__thiscall **)(_DWORD, int))(v10 + 140))(*(_DWORD *)(this + 40), v11); /*0x6af252*/
    *v9 = v12; /*0x6af25a*/
    if ( v12 ) /*0x6af25f*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 212))(v12); /*0x6af265*/
      *(_DWORD *)(*v9 + 732) = *(_DWORD *)(this + 36); /*0x6af274*/
      v9[1] = 0; /*0x6af27a*/
      v9[2] = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6af284*/
      v9[3] = v19; /*0x6af28a*/
      v9[4] = 0; /*0x6af28d*/
    }
    v13 = *(_DWORD *)(this + 64); /*0x6af290*/
    if ( *(_DWORD *)(this + 72) >= v13 ) /*0x6af298*/
    {
      if ( !*(_BYTE *)(this + 69) && v13 ) /*0x6af2a1*/
        continue; /*0x6af2a1*/
      v14 = *(_DWORD *)(this + 76); /*0x6af2a3*/
      if ( v14 <= 0 /*0x6af2b2*/
        || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 56) + 8))(this + 56, v13 + v14, 0) )
      {
        continue; /*0x6af2b2*/
      }
    }
    v15 = *(_DWORD *)(this + 72); /*0x6af2b9*/
    v16 = *(_DWORD *)(this + 60); /*0x6af2bc*/
    *(_DWORD *)(this + 72) = v15 + 1; /*0x6af2c2*/
    *(_DWORD *)(v16 + 4 * v15) = v9; /*0x6af2c5*/
  }
  *(_DWORD *)(this + 80) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6af2e7*/
  *(_DWORD *)(this + 84) = v19; /*0x6af2ee*/
  *(_DWORD *)(this + 88) = 10; /*0x6af2f1*/
  *(_DWORD *)(this + 92) = 0; /*0x6af2f4*/
  *(_DWORD *)(this + 96) = 0; /*0x6af2f7*/
  if ( *(int *)&MEMORY[0xB077F8].__pad_14B0[10584] < *(int *)&MEMORY[0xB077F8].__pad_14B0[10576] /*0x6af32e*/
    || (MEMORY[0xB077F8].__pad_14B0[10581] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[10576])
    && *(int *)&MEMORY[0xB077F8].__pad_14B0[10588] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[10568] + 8))(
         &MEMORY[0xB077F8].__pad_14B0[10568],
         *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[10576] + *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[10588],
         0) )
  {
    v17 = (*(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[10584])++; /*0x6af33b*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[10572] + 4 * v17) = this; /*0x6af34a*/
  }
  return this; /*0x6af34f*/
}


// ==== 0x006AF360  SlaveManagerClass::Constructor  this=SlaveManagerClass  sig=csp ====
int __thiscall sub_6AF360(int this)
{
  int v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x6af366*/
  *(_DWORD *)(this + 60) = 0; /*0x6af371*/
  *(_DWORD *)(this + 64) = 0; /*0x6af374*/
  *(_BYTE *)(this + 68) = 1; /*0x6af377*/
  *(_BYTE *)(this + 69) = 0; /*0x6af37b*/
  *(_DWORD *)(this + 56) = &vt_DynamicVectorClass_SlaveManagerClass_SlaveControl; /*0x6af37e*/
  *(_DWORD *)(this + 76) = 10; /*0x6af385*/
  *(_DWORD *)(this + 72) = 0; /*0x6af38c*/
  *(_DWORD *)(this + 80) = MEMORY[0xA8ED84]; /*0x6af395*/
  *(_DWORD *)(this + 88) = 0; /*0x6af398*/
  *(_DWORD *)this = &SlaveManagerClass::`vftable'; /*0x6af39b*/
  *(_DWORD *)(this + 4) = &SlaveManagerClass::`vftable'; /*0x6af3a1*/
  *(_DWORD *)(this + 8) = &SlaveManagerClass::`vftable'; /*0x6af3a8*/
  *(_DWORD *)(this + 12) = &vt_SlaveManagerClass; /*0x6af3af*/
  *(_DWORD *)(this + 36) = 0; /*0x6af3b6*/
  *(_DWORD *)(this + 40) = 0; /*0x6af3b9*/
  *(_DWORD *)(this + 44) = 0; /*0x6af3bc*/
  *(_DWORD *)(this + 48) = 0; /*0x6af3bf*/
  *(_DWORD *)(this + 52) = 0; /*0x6af3c2*/
  *(_DWORD *)(this + 80) = MEMORY[0xA8ED84]; /*0x6af3cb*/
  *(_DWORD *)(this + 84) = v4; /*0x6af3ce*/
  *(_DWORD *)(this + 88) = 0; /*0x6af3d1*/
  *(_DWORD *)(this + 92) = 0; /*0x6af3d4*/
  *(_DWORD *)(this + 96) = 0; /*0x6af3d7*/
  if ( MEMORY[0xB0B600] < MEMORY[0xB0B5F8] /*0x6af40c*/
    || (MEMORY[0xB0B5FD] || !MEMORY[0xB0B5F8])
    && MEMORY[0xB0B604] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0B5F0] + 8))(
         &MEMORY[0xB0B5F0],
         MEMORY[0xB0B5F8] + MEMORY[0xB0B604],
         0) )
  {
    v2 = MEMORY[0xB0B600]++; /*0x6af419*/
    *((_DWORD *)MEMORY[0xB0B5F4] + v2) = this; /*0x6af428*/
  }
  return this; /*0x6af42d*/
}


// ==== 0x006AF4A0  SlaveManagerClass::Constructor_SlaveManagerClass  this=SlaveManagerClass  sig=csp ====
void __thiscall sub_6AF4A0(int this)
{
  int i; // esi
  int v3; // ebp
  int v4; // eax
  void *v5; // eax
  int v6; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)this = &SlaveManagerClass::`vftable'; /*0x6af4a5*/
  *(_DWORD *)(this + 4) = &SlaveManagerClass::`vftable'; /*0x6af4ab*/
  *(_DWORD *)(this + 8) = &SlaveManagerClass::`vftable'; /*0x6af4b2*/
  *(_DWORD *)(this + 12) = &vt_SlaveManagerClass; /*0x6af4b9*/
  for ( i = *(_DWORD *)(this + 72) - 1; i >= 0; --i ) /*0x6af4c4*/
  {
    if ( *(_DWORD *)(*(_DWORD *)(this + 60) + 4 * i) ) /*0x6af4c9*/
      __3_YAXPAX_Z(*(void **)(*(_DWORD *)(this + 60) + 4 * i)); /*0x6af4d1*/
  }
  v3 = *(_DWORD *)(this + 64); /*0x6af4e5*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 56) + 12))(this + 56); /*0x6af4e8*/
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 56) + 8))(this + 56, v3, 0); /*0x6af4f2*/
  v6 = this; /*0x6af505*/
  v4 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0B5F0] + 16))(&MEMORY[0xB0B5F0], &v6); /*0x6af509*/
  if ( v4 != -1 && v4 < MEMORY[0xB0B600] && v4 < --MEMORY[0xB0B600] ) /*0x6af525*/
  {
    do /*0x6af53d*/
    {
      ++v4; /*0x6af52d*/
      *((_DWORD *)MEMORY[0xB0B5F4] + v4 - 1) = *((_DWORD *)MEMORY[0xB0B5F4] + v4); /*0x6af531*/
    }
    while ( v4 < MEMORY[0xB0B600] ); /*0x6af53d*/
  }
  v5 = *(void **)(this + 60); /*0x6af53f*/
  *(_DWORD *)(this + 56) = &vt_VectorClass_SlaveManagerClass_SlaveControl; /*0x6af542*/
  if ( v5 && *(_BYTE *)(this + 69) ) /*0x6af54c*/
  {
    __3_YAXPAX_Z(v5); /*0x6af554*/
    *(_DWORD *)(this + 60) = 0; /*0x6af55c*/
  }
  *(_BYTE *)(this + 69) = 0; /*0x6af565*/
  *(_DWORD *)(this + 64) = 0; /*0x6af569*/
  AbstractClass::DTOR((_DWORD *)this); /*0x6af570*/
}


// ==== 0x006AF580  SlaveManagerClass::SetOwner  this=SlaveManagerClass  sig=csp ====
char __thiscall SlaveManagerClass::SetOwner(_DWORD *this, TechnoClass *aP1)
{
  int v3; // eax
  _DWORD *v4; // ecx
  int v5; // ecx
  int i; // ecx

  v3 = this->master; /*0x6af588*/
  *(_DWORD *)(v3 + 728) = 0; /*0x6af58b*/
  this->master = aP1; /*0x6af595*/
  v4 = *(_DWORD **)&aP1->mindControlledBy_a_unit; /*0x6af598*/
  if ( v4 ) /*0x6af5a0*/
  {
    LOBYTE(v3) = TechnoClass::MutateAll(v4, 0, 0); /*0x6af5a6*/
    v5 = *(_DWORD *)&aP1->mindControlledBy_a_unit; /*0x6af5ab*/
    if ( v5 ) /*0x6af5b3*/
      LOBYTE(v3) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x6af5b9*/
  }
  *(_DWORD *)&aP1->mindControlledBy_a_unit = this; /*0x6af5bc*/
  for ( i = this->q048 - 1; i >= 0; --i ) /*0x6af5c6*/
  {
    v3 = **(_DWORD **)(this->slaveVectorCount + 4 * i); /*0x6af5ce*/
    if ( v3 ) /*0x6af5d2*/
      *(_DWORD *)(v3 + 732) = this->master; /*0x6af5d7*/
  }
  return v3; /*0x6af5e0*/
}


// ==== 0x006AF5F0  SlaveManagerClass::UpdateSlaves  this=SlaveManagerClass  sig=csp ====
char __thiscall SlaveManagerClass::_vt23(int *this)
{
  int *v2; // edi
  int v3; // edx
  int v4; // eax
  int v6; // [esp+Ch] [ebp-8h]

  v2 = (int *)MEMORY[0xA8ED84]; /*0x6af5f7*/
  v3 = this->abstractFlags; /*0x6af5fd*/
  v4 = this->SlaveManagerClass_field_58; /*0x6af600*/
  if ( v3 == -1 ) /*0x6af606*/
  {
LABEL_4:
    if ( v4 ) /*0x6af614*/
      return v4; /*0x6af614*/
    goto LABEL_5; /*0x6af614*/
  }
  if ( (int)MEMORY[0xA8ED84] - v3 < v4 ) /*0x6af60e*/
  {
    v4 -= (int)MEMORY[0xA8ED84] - v3; /*0x6af610*/
    goto LABEL_4; /*0x6af610*/
  }
LABEL_5:
  this->abstractFlags = (int)MEMORY[0xA8ED84]; /*0x6af616*/
  this->SlaveManagerClass_field_54 = v6; /*0x6af622*/
  this->SlaveManagerClass_field_58 = 10; /*0x6af625*/
  v4 = this->master; /*0x6af628*/
  if ( v4 ) /*0x6af62d*/
  {
    SlaveManagerClass::ProcessSlaves(this, v2, (int)this); /*0x6af631*/
    LOBYTE(v4) = ProcessDeployAction(this); /*0x6af638*/
  }
  return v4; /*0x6af63d*/
}


// ==== 0x006AF650  SlaveManagerClass::CreateSlave  this=SlaveManagerClass  sig=csp ====
wchar_t *__thiscall SlaveManagerClass::CreateSlave(_DWORD **this, wchar_t **a2)
{
  int v3; // edi
  int v4; // eax
  wchar_t *result; // eax
  wchar_t *v6; // [esp+Ch] [ebp-8h]

  v3 = *this->house; /*0x6af65f*/
  v4 = (*(int (__thiscall **)(_DWORD))(*this->master + 60))(this->master); /*0x6af661*/
  result = (wchar_t *)(*(int (__thiscall **)(_DWORD, int))(v3 + 140))(this->house, v4); /*0x6af668*/
  *a2 = result; /*0x6af674*/
  if ( result ) /*0x6af676*/
  {
    (*(void (__thiscall **)(wchar_t *))(*(_DWORD *)result + 212))(result); /*0x6af67c*/
    *((_DWORD *)*a2 + 183) = this->master; /*0x6af68b*/
    a2[1] = 0; /*0x6af691*/
    result = MEMORY[0xA8ED84]; /*0x6af698*/
    a2[2] = MEMORY[0xA8ED84]; /*0x6af6a2*/
    a2[3] = v6; /*0x6af6a4*/
    a2[4] = 0; /*0x6af6a7*/
  }
  return result; /*0x6af6aa*/
}


// ==== 0x006AF6C0  SlaveManagerClass::ProcessSlaves  this=SlaveManagerClass  sig=csp ====
int __usercall SlaveManagerClass_ProcessSlaves@<eax>(int *a1@<ecx>, int *a2@<edi>, int a3@<esi>)
{
  int v4; // ebx
  int result; // eax
  int v6; // ecx
  int v7; // edi
  int *v8; // esi
  int v9; // ecx
  int v10; // ebx
  int v11; // ecx
  int v12; // eax
  int FoundationWidth; // eax
  int v14; // ecx
  int FoundationHeight; // eax
  int v16; // ebx
  _WORD *v17; // eax
  int *v18; // eax
  int v19; // ebx
  _DWORD *v20; // eax
  int v21; // eax
  int v22; // ecx
  int IsBuildingType; // ebx
  __int16 v24; // ax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  _WORD *v28; // eax
  int v29; // ebx
  _DWORD *v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // ebx
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // ebx
  _WORD *v38; // eax
  int *v39; // eax
  int v40; // ecx
  __int16 v41; // bx
  _DWORD *v42; // eax
  int v43; // ecx
  int v44; // ebx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ebx
  _WORD *v49; // eax
  int *v50; // eax
  unsigned __int16 v51; // bx
  int v52; // edx
  _DWORD *v53; // eax
  wchar_t *v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // ecx
  int v58; // edi
  __int16 v59; // ax
  int v60; // ecx
  int v61; // eax
  int v62; // ecx
  _WORD *v63; // eax
  int *v64; // eax
  int v65; // edi
  int v66; // edx
  int v67; // ecx
  int v68; // eax
  int v69; // edx
  int v70; // ecx
  int v71; // ecx
  _WORD *v72; // [esp-6h] [ebp-B0h]
  _WORD *v73; // [esp-6h] [ebp-B0h]
  _WORD *v76; // [esp+2h] [ebp-A8h]
  int v77; // [esp+Eh] [ebp-9Ch] BYREF
  int v78; // [esp+12h] [ebp-98h]
  int v79; // [esp+16h] [ebp-94h]
  _WORD v80[2]; // [esp+1Eh] [ebp-8Ch] BYREF
  int v81; // [esp+22h] [ebp-88h] BYREF
  int v82; // [esp+2Ah] [ebp-80h] BYREF
  int v83; // [esp+2Eh] [ebp-7Ch] BYREF
  _WORD v84[4]; // [esp+32h] [ebp-78h] BYREF
  int v85; // [esp+3Ah] [ebp-70h] BYREF
  __int16 v86[2]; // [esp+42h] [ebp-68h] BYREF
  _WORD v87[4]; // [esp+46h] [ebp-64h] BYREF
  char v88[4]; // [esp+4Eh] [ebp-5Ch] BYREF
  char v89[4]; // [esp+52h] [ebp-58h] BYREF
  char v90[4]; // [esp+56h] [ebp-54h] BYREF
  int v91; // [esp+5Ah] [ebp-50h] BYREF
  char v92[4]; // [esp+5Eh] [ebp-4Ch] BYREF
  _BYTE v93[8]; // [esp+62h] [ebp-48h] BYREF
  int v94; // [esp+6Ah] [ebp-40h] BYREF
  char v95[8]; // [esp+6Eh] [ebp-3Ch] BYREF
  char v96[4]; // [esp+76h] [ebp-34h] BYREF
  __int16 v97[2]; // [esp+7Ah] [ebp-30h] BYREF
  char v98[12]; // [esp+7Eh] [ebp-2Ch] BYREF
  int v99; // [esp+8Ah] [ebp-20h] BYREF
  _DWORD v100[3]; // [esp+8Eh] [ebp-1Ch] BYREF
  char v101[8]; // [esp+9Ah] [ebp-10h] BYREF
  int v102; // [esp+A2h] [ebp-8h] BYREF

  v4 = 0; /*0x6af6ca*/
  result = 0; /*0x6af6cc*/
  v6 = a1[18]; /*0x6af6ce*/
  v83 = 0; /*0x6af6d1*/
  if ( v6 > 0 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(a1[15] + 4 * result); /*0x6af6e6*/
      v8 = *(int **)v7; /*0x6af6e9*/
      if ( !*(_DWORD *)v7 && *(_DWORD *)(v7 + 4) != 6 ) /*0x6af6f9*/
      {
        *(_DWORD *)v7 = 0; /*0x6af707*/
        *(_DWORD *)(v7 + 4) = 6; /*0x6af709*/
        v9 = a1[12]; /*0x6af711*/
        *(_DWORD *)(v7 + 8) = MEMORY[0xA8ED84]; /*0x6af717*/
        *(_DWORD *)(v7 + 12) = v100[1]; /*0x6af721*/
        *(_DWORD *)(v7 + 16) = v9; /*0x6af724*/
      }
      switch ( *(_DWORD *)(v7 + 4) )
      {
        case 1:
          v77 = *v8; /*0x6af744*/
          v81 = *(_DWORD *)(*(int (__thiscall **)(int *, char *, int, _DWORD, int *, int))(v77 + 824))( /*0x6af778*/
                             v8,
                             v101,
                             *((_DWORD *)MEMORY[0x8871E0] + 1505) / 256,
                             0,
                             a2,
                             a3);
          if ( v81 == MEMORY[0xB0B5B8] )
          {
            TechnoClass::SetFocus(v8, 0); /*0x6af7c5*/
            v11 = a1[9]; /*0x6af7ca*/
            if ( v11 && (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) == 6 )
            {
              v79 = a1[9]; /*0x6af7e4*/
              if ( v79 )
              {
                v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v79 + 44))(v79); /*0x6af7ec*/
                v4 = v12 == 6 ? v79 : 0;
              }
              FoundationWidth = BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(v4 + 1312)); /*0x6af806*/
              v14 = *(_DWORD *)(v4 + 1312); /*0x6af80b*/
              v79 = FoundationWidth; /*0x6af813*/
              FoundationHeight = BuildingTypeClass::GetFoundationHeight(v14, 0); /*0x6af817*/
              v16 = a1[9]; /*0x6af81f*/
              v76 = CellStruct::Set(v100, v79 - 1, FoundationHeight / 2); /*0x6af839*/
              v17 = (_WORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v16 + 440))(v16, v89); /*0x6af849*/
              v18 = CellStruct::Add(v17, &v99, v76); /*0x6af851*/
            }
            else
            {
              v18 = (int *)(*(int (__thiscall **)(int, __int16 *))(*(_DWORD *)a1[9] + 440))(a1[9], v97); /*0x6af862*/
            }
            v19 = *v8; /*0x6af86a*/
            v85 = *v18; /*0x6af870*/
            a3 = 1; /*0x6af874*/
            a2 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v85); /*0x6af881*/
            (*(void (__thiscall **)(int *))(v19 + 1152))(v8); /*0x6af884*/
            (*(void (__thiscall **)(int *, int, _DWORD))(*v8 + 488))(v8, 2, 0); /*0x6af892*/
            *(_DWORD *)(v7 + 4) = 4; /*0x6af898*/
          }
          else
          {
            v10 = *v8; /*0x6af78c*/
            a3 = 1; /*0x6af792*/
            a2 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v81); /*0x6af79f*/
            (*(void (__thiscall **)(int *))(v10 + 1152))(v8); /*0x6af7a2*/
            (*(void (__thiscall **)(int *, int, _DWORD))(*v8 + 488))(v8, 2, 0); /*0x6af7b0*/
            *(_DWORD *)(v7 + 4) = 2; /*0x6af7b6*/
          }
          goto LABEL_62; /*0x6af89f*/
        case 2:
          v20 = (_DWORD *)(*(int (__thiscall **)(int *))(*v8 + 444))(v8); /*0x6af8a8*/
          if ( Cell::IsBridge2(v20) ) /*0x6af8b0*/
          {
            SlaveManagerClass::Check(v8); /*0x6af8bb*/
            *(_DWORD *)(v7 + 4) = 3; /*0x6af8c0*/
          }
          else if ( !v8[361] ) /*0x6af8cc*/
          {
            *(_DWORD *)(v7 + 4) = 1; /*0x6af8d8*/
          }
          goto LABEL_62; /*0x6af8c7*/
        case 3:
          if ( (unsigned __int8)SlaveManagerClass::CheckIsOne(v8) ) /*0x6af8e6*/
          {
            v21 = (*(int (__thiscall **)(int *, int *, int))(*v8 + 444))(v8, a2, a3); /*0x6af8f7*/
            TechnoClass::SetFocus(v8, v21); /*0x6af900*/
            v22 = a1[9]; /*0x6af905*/
            if ( v22 && (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 44))(v22) == 6 ) /*0x6af914*/
            {
              IsBuildingType = IsObjectTypeBuildingType(a1[9]); /*0x6af91e*/
              v24 = BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(IsBuildingType + 1312)); /*0x6af926*/
              v25 = *(_DWORD *)(IsBuildingType + 1312); /*0x6af92b*/
              v84[0] = v24 - 1; /*0x6af934*/
              v26 = BuildingTypeClass::GetFoundationHeight(v25, 0); /*0x6af939*/
              v27 = a1[9]; /*0x6af93f*/
              v84[1] = v26 / 2; /*0x6af946*/
              v28 = (_WORD *)(*(int (__thiscall **)(int, _WORD *))(*(_DWORD *)v27 + 440))(v27, v87); /*0x6af95c*/
              v82 = *CellStruct::Add(v28, &v91, v84); /*0x6af96b*/
            }
            else
            {
              v82 = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1[9] + 440))(a1[9], v93); /*0x6af983*/
            }
            v29 = *v8; /*0x6af987*/
            a3 = 1; /*0x6af98d*/
            a2 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v82); /*0x6af99a*/
            (*(void (__thiscall **)(int *))(v29 + 1152))(v8); /*0x6af99d*/
            (*(void (__thiscall **)(int *, int, _DWORD))(*v8 + 488))(v8, 2, 0); /*0x6af9ab*/
            *(_DWORD *)(v7 + 4) = 4; /*0x6af9b1*/
          }
          else
          {
            v30 = (_DWORD *)(*(int (__thiscall **)(int *))(*v8 + 444))(v8); /*0x6af9c1*/
            if ( Cell::IsBridge2(v30) ) /*0x6af9c9*/
            {
              if ( !(unsigned __int8)SlaveManagerClass::IsMasterHarvester(v8) ) /*0x6af9e5*/
                *(_DWORD *)(v7 + 4) = 1; /*0x6af9f2*/
            }
            else
            {
              SlaveManagerClass::VtableDispatch(v8); /*0x6af9d4*/
              *(_DWORD *)(v7 + 4) = 1; /*0x6af9d9*/
            }
          }
          goto LABEL_62; /*0x6af9b8*/
        case 4:
          v31 = v8[361]; /*0x6af9fe*/
          HIBYTE(v78) = 0; /*0x6afa04*/
          if ( v31 ) /*0x6afa0b*/
          {
            v32 = a1[9]; /*0x6afa11*/
            if ( v32 && (*(int (__thiscall **)(int))(*(_DWORD *)v32 + 44))(v32) == 6 ) /*0x6afa20*/
            {
              v33 = IsObjectTypeBuildingType(a1[9]); /*0x6afa2a*/
              v34 = BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(v33 + 1312)); /*0x6afa32*/
              v35 = *(_DWORD *)(v33 + 1312); /*0x6afa37*/
              v77 = v34; /*0x6afa3f*/
              v36 = BuildingTypeClass::GetFoundationHeight(v35, 0); /*0x6afa43*/
              v37 = a1[9]; /*0x6afa4c*/
              v72 = CellStruct::Set(v97, v77 - 1, v36 / 2); /*0x6afa67*/
              v38 = (_WORD *)(*(int (__thiscall **)(int, int *, _BYTE *))(*(_DWORD *)v37 + 440))(v37, &v99, v93); /*0x6afa75*/
              v39 = CellStruct::Add(v38, v72, a2); /*0x6afa7d*/
            }
            else
            {
              v39 = (int *)(*(int (__thiscall **)(int, int *, int *))(*(_DWORD *)a1[9] + 440))(a1[9], &v94, a2); /*0x6afa8e*/
            }
            v40 = v8[361]; /*0x6afa94*/
            v85 = *v39; /*0x6afaa3*/
            v41 = v85; /*0x6afa9a*/
            a2 = &v102; /*0x6afaa9*/
            v42 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v40 + 72))(v40); /*0x6afaaa*/
            v100[0] = *(_DWORD *)CellStruct::Set(v86, *v42 / 256, v42[1] / 256); /*0x6afad9*/
            LOWORD(v79) = LOWORD(v100[0]) - v41; /*0x6afaef*/
            HIWORD(v79) = HIWORD(v100[0]) - v84[3]; /*0x6afaf4*/
            v77 = v79; /*0x6afb01*/
            if ( (__int16)SlaveManagerClass::Calc2DDistance(&v77) > *((_DWORD *)MEMORY[0x8871E0] + 894) ) /*0x6afb19*/
              HIBYTE(v78) = 1; /*0x6afb1b*/
          }
          v43 = a1[9]; /*0x6afb20*/
          if ( v43 && (*(int (__thiscall **)(int))(*(_DWORD *)v43 + 44))(v43) == 6 ) /*0x6afb2f*/
          {
            v44 = IsObjectTypeBuildingType(a1[9]); /*0x6afb39*/
            v45 = BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(v44 + 1312)); /*0x6afb41*/
            v46 = *(_DWORD *)(v44 + 1312); /*0x6afb46*/
            v77 = v45; /*0x6afb4e*/
            v47 = BuildingTypeClass::GetFoundationHeight(v46, 0); /*0x6afb52*/
            v48 = a1[9]; /*0x6afb5a*/
            v73 = CellStruct::Set(v87, v77 - 1, v47 / 2); /*0x6afb71*/
            v49 = (_WORD *)(*(int (__thiscall **)(int, char *, char *))(*(_DWORD *)v48 + 440))(v48, v90, v88); /*0x6afb7e*/
            v50 = CellStruct::Add(v49, v73, a2); /*0x6afb86*/
          }
          else
          {
            v50 = (int *)(*(int (__thiscall **)(int, char *, int *))(*(_DWORD *)a1[9] + 440))(a1[9], v92, a2); /*0x6afb97*/
          }
          v52 = *v8; /*0x6afb9f*/
          a2 = &v94; /*0x6afba7*/
          v78 = *v50; /*0x6afba8*/
          v51 = v78; /*0x6afb9d*/
          v53 = (_DWORD *)(*(int (__thiscall **)(int *))(v52 + 440))(v8); /*0x6afbac*/
          if ( *v53 == __PAIR32__(HIWORD(v77), v51) ) /*0x6afbb5*/
          {
            if ( !v8[361] ) /*0x6afbc2*/
            {
              InfantryClass::SlaveGiveMoney_RecordBalanceBefore(a1[9]); /*0x6afbd2*/
              (*(void (__thiscall **)(int *))(*v8 + 212))(v8); /*0x6afbdb*/
              v54 = MEMORY[0xA8ED84]; /*0x6afbe1*/
              v55 = a1[13]; /*0x6afbe6*/
              *(_DWORD *)(v7 + 4) = 5; /*0x6afbec*/
              *(_DWORD *)(v7 + 8) = v54; /*0x6afbf3*/
              *(_DWORD *)(v7 + 12) = v102; /*0x6afbfc*/
              *(_DWORD *)(v7 + 16) = v55; /*0x6afbff*/
              goto LABEL_62; /*0x6afc02*/
            }
LABEL_47:
            if ( !HIBYTE(v78) ) /*0x6afc17*/
              goto LABEL_62; /*0x6afc17*/
            goto LABEL_48; /*0x6afc17*/
          }
          if ( v8[361] ) /*0x6afc07*/
            goto LABEL_47; /*0x6afc0f*/
LABEL_48:
          v56 = IsObjectTypeBuildingType(a1[9]); /*0x6afc1d*/
          v57 = a1[9]; /*0x6afc25*/
          if ( v56 ) /*0x6afc2a*/
          {
            v58 = IsObjectTypeBuildingType(v57); /*0x6afc31*/
            v59 = BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(v58 + 1312)); /*0x6afc39*/
            v60 = *(_DWORD *)(v58 + 1312); /*0x6afc3e*/
            v80[0] = v59 - 1; /*0x6afc47*/
            v61 = BuildingTypeClass::GetFoundationHeight(v60, 0); /*0x6afc4c*/
            v62 = a1[9]; /*0x6afc52*/
            v80[1] = v61 / 2; /*0x6afc59*/
            v63 = (_WORD *)(*(int (__thiscall **)(int, char *, char *, _WORD *))(*(_DWORD *)v62 + 440))( /*0x6afc72*/
                             v62,
                             v96,
                             v95,
                             v80);
            v64 = CellStruct::Add(v63, &v94, (_WORD *)a3); /*0x6afc7a*/
          }
          else
          {
            v64 = (int *)(*(int (__thiscall **)(int, char *, int *, int))(*(_DWORD *)v57 + 440))(v57, v98, &v94, a3); /*0x6afc8b*/
          }
          v65 = *v8; /*0x6afc93*/
          v83 = *v64; /*0x6afc99*/
          a3 = 1; /*0x6afc9d*/
          a2 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v83); /*0x6afcaa*/
          (*(void (__thiscall **)(int *))(v65 + 1152))(v8); /*0x6afcad*/
          (*(void (__thiscall **)(int *, int, _DWORD))(*v8 + 488))(v8, 2, 0); /*0x6afcbb*/
LABEL_62:
          v71 = a1[18]; /*0x6afd20*/
          result = ++v83; /*0x6afd27*/
          if ( v83 >= v71 ) /*0x6afd2e*/
            return result; /*0x6afd2e*/
          v4 = 0; /*0x6af6e1*/
          break; /*0x6af6e1*/
        case 5:
          v66 = *(_DWORD *)(v7 + 8); /*0x6afcc3*/
          v67 = *(_DWORD *)(v7 + 16); /*0x6afcc6*/
          if ( v66 == -1 ) /*0x6afccc*/
            goto LABEL_55; /*0x6afccc*/
          if ( (int)MEMORY[0xA8ED84] - v66 >= v67 ) /*0x6afcd7*/
            goto LABEL_56; /*0x6afcd7*/
          v67 -= (int)MEMORY[0xA8ED84] - v66; /*0x6afcd9*/
LABEL_55:
          if ( !v67 ) /*0x6afcdd*/
          {
LABEL_56:
            v68 = v8[432]; /*0x6afcdf*/
            v8[27] = *(_DWORD *)(v68 + 160); /*0x6afceb*/
            v8[28] = *(_DWORD *)(v68 + 160); /*0x6afcf4*/
            *(_DWORD *)(v7 + 4) = 0; /*0x6afcf7*/
          }
          goto LABEL_62; /*0x6afcfa*/
        case 6:
          v69 = *(_DWORD *)(v7 + 8); /*0x6afcfc*/
          v70 = *(_DWORD *)(v7 + 16); /*0x6afcff*/
          if ( v69 == -1 ) /*0x6afd05*/
            goto LABEL_60; /*0x6afd05*/
          if ( (int)MEMORY[0xA8ED84] - v69 >= v70 ) /*0x6afd10*/
            goto LABEL_61; /*0x6afd10*/
          v70 -= (int)MEMORY[0xA8ED84] - v69; /*0x6afd12*/
LABEL_60:
          if ( !v70 ) /*0x6afd16*/
LABEL_61:
            SlaveManagerClass::CreateSlave(v7); /*0x6afd1b*/
          goto LABEL_62; /*0x6afd1b*/
        default:
          goto LABEL_62;
      }
    }
  }
  return result; /*0x6afd36*/
}


// ==== 0x006AFD60  ObjectClass::ProcessDeployAction  this=SlaveManagerClass  sig=csp ====
char __thiscall ProcessDeployAction(TechnoClass **this)
{
  SlaveManagerClass *v2; // eax
  TechnoClass *v3; // edi
  int currentMission; // edi
  TechnoClass *v5; // edi
  int v6; // edi
  void *v7; // eax
  TechnoClass *v8; // edi
  IUnknown *v9; // eax
  TechnoClass *v10; // edi
  TechnoClass *v11; // edi
  TechnoClass *v12; // ecx
  TechnoClass *v13; // edi
  TechnoClass *v14; // ecx
  IUnknown *v15; // eax
  int v16; // edx
  double v17; // st7
  __int16 v18; // di
  __int16 *v19; // eax
  IUnknown *v20; // eax
  int v21; // edx
  double v22; // st7
  double v23; // st7
  __int16 v24; // cx
  int v25; // eax
  SlaveManagerClass *v27; // [esp+2Ch] [ebp-28h] BYREF
  __int16 v28[2]; // [esp+30h] [ebp-24h] BYREF
  int v29; // [esp+34h] [ebp-20h] BYREF
  int v30; // [esp+38h] [ebp-1Ch] BYREF
  int v31; // [esp+3Ch] [ebp-18h] BYREF
  int v32; // [esp+40h] [ebp-14h] BYREF
  _BYTE v33[8]; // [esp+44h] [ebp-10h] BYREF
  SlaveManagerClass *v34; // [esp+4Ch] [ebp-8h]

  v2 = (SlaveManagerClass *)this->q017; /*0x6afd67*/
  switch ( (unsigned int)v2 )
  {
    case 0u:
      v3 = this->master; /*0x6afd7a*/
      if ( v3 ) /*0x6afd7f*/
      {
        v2 = (SlaveManagerClass *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v3->__pad_0 + 44))(this->master); /*0x6afd89*/
        if ( v2 == (SlaveManagerClass *)6 ) /*0x6afd8f*/
        {
          currentMission = v3->currentMission; /*0x6afd95*/
          if ( currentMission != 19 && currentMission != 18 ) /*0x6afda7*/
          {
            this->q017 = (TechnoClass *)5; /*0x6afdad*/
            this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6afdb4*/
          }
        }
      }
      break; /*0x6afdc0*/
    case 1u:
      v5 = this->master; /*0x6afdc1*/
      if ( v5 /*0x6afddc*/
        && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5->__pad_0 + 44))(this->master) == 1
        && (v2 = *(SlaveManagerClass **)&v5[1].hasParachute) != 0 )
      {
        this->q017 = (TechnoClass *)2; /*0x6afdde*/
        this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6afde5*/
      }
      else
      {
        v2 = *(SlaveManagerClass **)(*(int (__thiscall **)(_DWORD, int *, int, int))(*(_DWORD *)(this->master)->__pad_0 /*0x6afe1c*/
                                                                                   + 824))(
                                      this->master,
                                      &v29,
                                      *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6024) / 256,
                                      1);
        *(_DWORD *)v28 = v2; /*0x6afe25*/
        v27 = v2; /*0x6afe29*/
        if ( (_WORD)v2 == *(_WORD *)&MEMORY[0xB077F8].__pad_14B0[10512] /*0x6afe57*/
          && v28[1] == *(_WORD *)&MEMORY[0xB077F8].__pad_14B0[10514]
          || (v2 = (SlaveManagerClass *)*BuildingClass::FindPlacementCells2(this, (SlaveManagerClass *)&v30, v2),
              v27 = v2,
              v2 == *(SlaveManagerClass **)&MEMORY[0xB077F8].__pad_14B0[10512]) )
        {
          this->q017 = 0; /*0x6afe67*/
          this->nextArrayIndex = *(TechnoClass **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6afe74*/
        }
        else
        {
          v6 = *(_DWORD *)(this->master)->__pad_0; /*0x6afe87*/
          v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v27); /*0x6afe8e*/
          (*(void (__thiscall **)(_DWORD, void *, int))(v6 + 1152))(this->master, v7, 1); /*0x6afe97*/
          LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)(this->master)->__pad_0 + 488))( /*0x6afea6*/
                         this->master,
                         2,
                         0);
          this->q017 = (TechnoClass *)2; /*0x6afeac*/
          this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6afeb3*/
        }
      }
      break; /*0x6afdf1*/
    case 2u:
      v8 = this->master; /*0x6afec0*/
      if ( v8 /*0x6afed1*/
        && (v2 = (SlaveManagerClass *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v8->__pad_0 + 44))(this->master),
            v2 == (SlaveManagerClass *)1) )
      {
        v2 = *(SlaveManagerClass **)&v8[1].hasParachute; /*0x6afee9*/
        if ( !v2 ) /*0x6afef1*/
        {
          LOBYTE(v2) = TechnoClass::Deploy((int *)v8->__pad_0); /*0x6afef9*/
          if ( (_BYTE)v2 ) /*0x6aff00*/
          {
            this->q017 = (TechnoClass *)4; /*0x6aff02*/
            this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6aff09*/
          }
          else
          {
            v9 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6aff16*/
            this->q017 = (TechnoClass *)3; /*0x6aff23*/
            this->abstractFlags = (TechnoClass *)v9; /*0x6aff2a*/
            v2 = v34; /*0x6aff2c*/
            this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6aff30*/
            this->SlaveManagerClass_field_54 = (TechnoClass *)v2; /*0x6aff38*/
            this->SlaveManagerClass_field_58 = (TechnoClass *)30; /*0x6aff3c*/
          }
        }
      }
      else
      {
        this->q017 = 0; /*0x6afed3*/
        this->nextArrayIndex = *(TechnoClass **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6afee0*/
      }
      break; /*0x6afee8*/
    case 3u:
      v10 = this->master; /*0x6aff43*/
      if ( v10 && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v10->__pad_0 + 44))(this->master) == 1 ) /*0x6aff54*/
      {
        LOBYTE(v2) = TechnoClass::Deploy((int *)v10->__pad_0); /*0x6aff6d*/
        if ( !(_BYTE)v2 ) /*0x6aff74*/
          goto LABEL_53; /*0x6aff74*/
        this->q017 = (TechnoClass *)4; /*0x6aff7a*/
        this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6aff81*/
      }
      else
      {
        this->q017 = 0; /*0x6aff56*/
        LOBYTE(v2) = MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6aff5d*/
        this->nextArrayIndex = *(TechnoClass **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6aff62*/
      }
      break; /*0x6aff6a*/
    case 4u:
      v2 = (SlaveManagerClass *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)(this->master)->__pad_0 + 44))(this->master); /*0x6aff93*/
      if ( v2 == (SlaveManagerClass *)6
        && ((v11 = this->master) != 0
          ? (v2 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v11->__pad_0 + 44))(this->master) == 6
                ? (SlaveManagerClass *)v11
                : 0)
          : (v2 = 0),
            v2[13].NeedsSaveOrLink) )
      {
        this->q017 = (TechnoClass *)5; /*0x6affc2*/
        this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6affc9*/
      }
      else
      {
        v12 = this->master; /*0x6affd6*/
        if ( v12 )
        {
          v2 = (SlaveManagerClass *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v12->__pad_0 + 44))(v12); /*0x6affe3*/
          if ( v2 == (SlaveManagerClass *)1 )
          {
            v13 = this->master; /*0x6affef*/
            v2 = v13
               ? ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v13->__pad_0 + 44))(this->master) == 1
                ? (SlaveManagerClass *)v13
                : 0)
               : 0;
            if ( !v2[16].__pad_48[4] && (this->master)->currentMission == 5 ) /*0x6b0022*/
            {
              this->q017 = (TechnoClass *)2; /*0x6b0028*/
              this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6b002f*/
            }
          }
        }
      }
      break; /*0x6affd5*/
    case 5u:
      v14 = this->master; /*0x6b003c*/
      if ( v14 && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v14->__pad_0 + 44))(v14) == 1 ) /*0x6b004b*/
      {
        this->q017 = 0; /*0x6b004d*/
        LOBYTE(v2) = MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6b0054*/
        this->nextArrayIndex = *(TechnoClass **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6b0059*/
      }
      else
      {
        v2 = *(SlaveManagerClass **)(*(int (__thiscall **)(_DWORD, int *, int, _DWORD))(*(_DWORD *)(this->master)->__pad_0 /*0x6b008d*/
                                                                                      + 824))(
                                      this->master,
                                      &v29,
                                      *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6016) / 256,
                                      0);
        *(_DWORD *)v28 = v2; /*0x6b0096*/
        if ( (_WORD)v2 == *(_WORD *)&MEMORY[0xB077F8].__pad_14B0[10512] /*0x6b00ac*/
          && v28[1] == *(_WORD *)&MEMORY[0xB077F8].__pad_14B0[10514] )
        {
          v27 = *(SlaveManagerClass **)(*(int (__thiscall **)(_DWORD, int *, int, int))(*(_DWORD *)(this->master)->__pad_0 /*0x6b00e7*/
                                                                                      + 824))(
                                         this->master,
                                         &v29,
                                         *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6024) / 256,
                                         1);
          *(_DWORD *)v28 = *BuildingClass::FindPlacementCells2(this, (SlaveManagerClass *)&v31, v27); /*0x6b0100*/
          v15 = CellStruct::Sub(v28, (IUnknown *)&v32, (IUnknown *)&v27); /*0x6b0104*/
          v16 = SHIWORD(v15->field_0); /*0x6b0109*/
          v29 = SLOWORD(v15->field_0); /*0x6b011b*/
          v17 = Math::Sqrt((double)v29 * (double)v29 + (double)v16 * (double)v16); /*0x6b0134*/
          v18 = Math::RoundToInt(v17); /*0x6b0144*/
          v19 = (__int16 *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)(this->master)->__pad_0 + 440))( /*0x6b014d*/
                             this->master,
                             v33);
          v20 = CellStruct::Sub(v19, (IUnknown *)&v32, (IUnknown *)&v27); /*0x6b015f*/
          v21 = SLOWORD(v20->field_0); /*0x6b0168*/
          v29 = SHIWORD(v20->field_0); /*0x6b016b*/
          v22 = (double)v29; /*0x6b0172*/
          v29 = v21; /*0x6b0176*/
          v23 = Math::Sqrt((double)v21 * (double)v21 + v22 * v22); /*0x6b018f*/
          v24 = Math::RoundToInt(v23); /*0x6b01b8*/
          v2 = (SlaveManagerClass *)(v18 + *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6028) / 256); /*0x6b01bb*/
          if ( (int)v2 < v24 ) /*0x6b01bf*/
          {
            (this->master)->isVoiceOverride = 1; /*0x6b01c4*/
            v25 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)(this->master)->__pad_0 + 444))(this->master); /*0x6b01d0*/
            TechnoClass::SetFocus(this->master, v25); /*0x6b01da*/
            LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)(this->master)->__pad_0 + 488))( /*0x6b01e8*/
                           this->master,
                           19,
                           0);
            this->q017 = (TechnoClass *)6; /*0x6b01ee*/
            this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6b01f5*/
          }
        }
        if ( this->q017 != (TechnoClass *)6 ) /*0x6b0200*/
          LOBYTE(v2) = FactoryClass::PlaceExitUnits(this); /*0x6b0204*/
      }
      break; /*0x6b0061*/
    case 6u:
      v2 = (SlaveManagerClass *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)(this->master)->__pad_0 + 44))(this->master); /*0x6b0214*/
      if ( v2 == (SlaveManagerClass *)1 ) /*0x6b021a*/
      {
        LOBYTE(v2) = (unsigned __int8)Event_Process_6B0490(this); /*0x6b021e*/
LABEL_53:
        this->q017 = (TechnoClass *)1; /*0x6b0223*/
        this->nextArrayIndex = (TechnoClass *)0x7FFFFFFF; /*0x6b022a*/
      }
      break; /*0x6b022a*/
    default:
      return (char)v2;
  }
  return (char)v2; /*0x6afdbb*/
}

