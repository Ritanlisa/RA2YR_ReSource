// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00440580  BuildingClass::Unlimbo_UnitDeliveryFix  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Unlimbo_UnitDeliveryFix(BuildingClass *this)
{
  double v1; // st7
  TechnoClass *v2; // ebp
  int ptr_0; // edi
  CellClass *v5; // eax
  int v6; // eax
  int v7; // ebx
  int Type; // ecx
  CellClass *v9; // eax
  int wallOwnerIndex; // ecx
  BuildingClass *v11; // edx
  BuildingClass *owner; // ecx
  int v13; // edx
  bool v14; // zf
  int v15; // ecx
  BuildingClass *v16; // edx
  _WORD *i; // ebx
  __int16 v18; // dx
  void *v19; // edi
  BuildingClass *v20; // edx
  int v21; // eax
  BuildingClass *v22; // ecx
  int v23; // eax
  _DWORD *v24; // eax
  int v25; // ebp
  _BYTE *v26; // eax
  int v27; // edi
  CellClass *v28; // eax
  int result; // eax
  int v30; // edi
  int v31; // eax
  BuildingClass *v32; // edi
  int v33; // ebx
  int v34; // eax
  int v35; // ebx
  char *v36; // ebp
  int v37; // edx
  __int16 v38; // cx
  Cell *v39; // eax
  _DWORD *v40; // eax
  _DWORD *v41; // edi
  int j; // edi
  int v43; // eax
  int FoundationWidth; // ebx
  int v45; // ecx
  int v46; // kr18_4
  int v47; // eax
  int v48; // ebx
  int v49; // edi
  __int16 v50; // bp
  _BYTE *v51; // eax
  char v52; // al
  LightSourceClass *v53; // edi
  _DWORD *v54; // eax
  int *v55; // eax
  _DWORD *v56; // eax
  int v57; // eax
  int *v58; // eax
  int v59; // ebx
  int *v60; // ebp
  int v61; // edx
  int v62; // edi
  int v63; // edx
  int v64; // eax
  CellClass *v65; // eax
  int v66; // eax
  RulesClass *v67; // eax
  int smudgeTypeIndex; // edi
  BuildingClass *v69; // eax
  BuildingClass *v70; // eax
  BuildingClass *v71; // eax
  BuildingClass *v72; // eax
  int v73; // ecx
  int *v74; // edi
  BuildingClass *v75; // eax
  BuildingClass *v76; // eax
  int v77; // ecx
  int v78; // edi
  BuildingClass *v79; // eax
  BuildingClass *v80; // eax
  int *v81; // eax
  int v82; // edx
  int v83; // eax
  int IvanIconFlickerRate; // edx
  _DWORD *IvanDamage; // ecx
  _DWORD *v86; // edi
  int v87; // ecx
  int v88; // eax
  int v89; // eax
  int v90; // edx
  _DWORD *v91; // edi
  int v92; // ecx
  int v93; // eax
  int v94; // eax
  int v95; // edx
  _DWORD *v96; // edi
  int v97; // ecx
  int v98; // eax
  int v99; // eax
  int v100; // edx
  int v101; // eax
  _DWORD *v102; // edi
  int v103; // ecx
  int v104; // eax
  int v105; // eax
  int v106; // edx
  _DWORD *v107; // edi
  int v108; // ecx
  int v109; // eax
  int v110; // eax
  int v111; // edx
  int v112; // eax
  _DWORD *v113; // edi
  int v114; // ecx
  int v115; // eax
  int v116; // eax
  int v117; // edx
  _DWORD *v118; // edi
  int v119; // ecx
  int v120; // eax
  int v121; // eax
  int v122; // edx
  _DWORD *v123; // edi
  int v124; // ecx
  int v125; // eax
  int v126; // eax
  int v127; // edx
  _DWORD *v128; // edi
  int v129; // ecx
  int v130; // eax
  int v131; // eax
  int v132; // edx
  _DWORD *v133; // edi
  int v134; // ecx
  int v135; // eax
  int v136; // eax
  int v137; // edx
  _DWORD *v138; // edi
  int v139; // ecx
  int v140; // eax
  int v141; // eax
  int v142; // edx
  int v143; // ecx
  int v144; // [esp-8h] [ebp-58h]
  int v145; // [esp-4h] [ebp-54h]
  int v146; // [esp+0h] [ebp-50h]
  int v147; // [esp+4h] [ebp-4Ch]
  int v148; // [esp+8h] [ebp-48h]
  int v149; // [esp+Ch] [ebp-44h]
  int v150; // [esp+Ch] [ebp-44h]
  __int16 v151; // [esp+10h] [ebp-40h]
  bool v152; // [esp+1Fh] [ebp-31h]
  int v153; // [esp+20h] [ebp-30h] BYREF
  int v154; // [esp+24h] [ebp-2Ch] BYREF
  __int16 v155[2]; // [esp+28h] [ebp-28h] BYREF
  _DWORD v156[3]; // [esp+2Ch] [ebp-24h] BYREF
  int v157; // [esp+38h] [ebp-18h] BYREF
  int v158; // [esp+3Ch] [ebp-14h]
  int v159; // [esp+40h] [ebp-10h]
  int v160[3]; // [esp+44h] [ebp-Ch] BYREF
  TechnoClass *v161; // [esp+54h] [ebp+4h] BYREF
  int *v162; // [esp+58h] [ebp+8h] BYREF

  v2 = v161; /*0x440585*/
  ptr_0 = this->ptr_0; /*0x440595*/
  v5 = Coord::To_Cell((Coord *)&dword_87F7E8, v161); /*0x44059d*/
  v6 = (*(int (__thiscall **)(BuildingClass *, CellClass *, int, int, _DWORD, int))(ptr_0 + 428))( /*0x4405a5*/
         this,
         v5,
         -1,
         -1,
         0,
         1);
  LOBYTE(v7) = v6 == 0; /*0x4405ad*/
  v152 = v6 == 0; /*0x4405b2*/
  if ( !v6 ) /*0x4405b6*/
  {
    Type = this->Type; /*0x4405c1*/
    if ( Type == dword_8871E0->NukeDown ) /*0x4405cd*/
    {
      v9 = Coord::To_Cell((Coord *)&dword_87F7E8, v2); /*0x4405d5*/
      wallOwnerIndex = v9->wallOwnerIndex; /*0x4405da*/
      v11 = 0; /*0x4405dd*/
      if ( wallOwnerIndex >= 0 ) /*0x4405e1*/
        v11 = (BuildingClass *)*(&dword_A8022C->ptr_0 + wallOwnerIndex); /*0x4405e9*/
      owner = (BuildingClass *)this->owner; /*0x4405ec*/
      if ( v11 == owner ) /*0x4405f4*/
      {
        v13 = *(_DWORD *)&v9->__pad_28[28]; /*0x4405fa*/
        if ( v13 == 2 ) /*0x440600*/
        {
LABEL_14:
          BuildingClass::Capture(owner, (__int16 *)&v9->smudgeTypeIndex, 1); /*0x440656*/
          goto LABEL_33; /*0x440661*/
        }
        v14 = v13 == 0; /*0x440602*/
LABEL_13:
        if ( !v14 ) /*0x440650*/
          goto LABEL_33; /*0x440650*/
        goto LABEL_14; /*0x440650*/
      }
    }
    else if ( *(_DWORD *)(Type + 3668) ) /*0x440606*/
    {
      v9 = Coord::To_Cell((Coord *)&dword_87F7E8, v2); /*0x440616*/
      v15 = v9->wallOwnerIndex; /*0x44061b*/
      v16 = 0; /*0x44061e*/
      if ( v15 >= 0 ) /*0x440622*/
        v16 = (BuildingClass *)*(&dword_A8022C->ptr_0 + v15); /*0x44062a*/
      owner = (BuildingClass *)this->owner; /*0x44062d*/
      if ( v16 == owner ) /*0x440635*/
      {
        v14 = *(_DWORD *)&v9->__pad_28[28] == *(_DWORD *)(*(_DWORD *)(this->Type + 3668) + 660); /*0x44064a*/
        goto LABEL_13; /*0x44064a*/
      }
    }
    else if ( *(_BYTE *)(Type + 5815) ) /*0x440666*/
    {
      LOWORD(v153) = v2->ptr_0 / 256; /*0x440685*/
      HIWORD(v153) = v2->ptr_4 / 256; /*0x440699*/
      for ( i = (_WORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)Type + 144))(Type, 1); /*0x4406a6*/
            *i != 0x7FFF || i[1] != 0x7FFF;
            i += 2 )
      {
        v18 = HIWORD(v153) + i[1]; /*0x4406c3*/
        LOWORD(v154) = v153 + *i; /*0x4406ce*/
        HIWORD(v154) = v18; /*0x4406d3*/
        *(_DWORD *)v155 = v154; /*0x4406e2*/
        v19 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v155); /*0x4406eb*/
        v20 = 0; /*0x4406ed*/
        v21 = *((_DWORD *)v19 + 20); /*0x4406ef*/
        if ( v21 >= 0 ) /*0x4406f4*/
          v20 = (BuildingClass *)*(&dword_A8022C->ptr_0 + v21); /*0x4406fc*/
        v22 = (BuildingClass *)this->owner; /*0x4406ff*/
        if ( v20 == v22 ) /*0x440707*/
        {
          v23 = *((_DWORD *)v19 + 17); /*0x440709*/
          if ( v23 == 2 || !v23 || v23 == 26 ) /*0x440718*/
            BuildingClass::Capture(v22, (__int16 *)v19 + 18, 1); /*0x440720*/
        }
        v24 = Cell::IsBridge((Cell *)v19); /*0x440727*/
        if ( v24 && *(_BYTE *)(v24[328] + 5823) ) /*0x440736*/
        {
          v25 = (*(int (__thiscall **)(_DWORD *))(*v24 + 56))(v24); /*0x440747*/
          if ( v25 == (*(int (__thiscall **)(BuildingClass *))(this->ptr_0 + 56))(this) ) /*0x440752*/
          {
            *(_DWORD *)v155 = *((_DWORD *)v19 + 9); /*0x440757*/
            BuildingClass::TraverseBridgeSegments((BuildingClass *)v155); /*0x44075f*/
          }
          v2 = v161; /*0x440764*/
        }
      }
      LOBYTE(v7) = v152; /*0x440770*/
    }
  }
LABEL_33:
  v26 = (_BYTE *)this->Type; /*0x440774*/
  if ( v26[5489] ) /*0x44077a*/
  {
    v27 = this->ptr_0; /*0x440788*/
    v28 = Coord::To_Cell((Coord *)&dword_87F7E8, v2); /*0x440798*/
    result = (*(int (__thiscall **)(BuildingClass *, CellClass *, int, int, _DWORD, int))(v27 + 428))( /*0x4407a0*/
               this,
               v28,
               -1,
               -1,
               0,
               1);
    if ( !result ) /*0x4407a8*/
    {
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this->Type + 3668) + 140))( /*0x4407c3*/
                 *(_DWORD *)(this->Type + 3668),
                 this->owner);
      if ( result ) /*0x4407cb*/
      {
        result = (*(int (__thiscall **)(int, TechnoClass *, _DWORD))(*(_DWORD *)result + 216))(result, v2, 0); /*0x4407d8*/
        if ( (_BYTE)result ) /*0x4407e0*/
        {
          v30 = this->owner; /*0x4407e6*/
          Coord::To_Cell((Coord *)&dword_87F7E8, v2)->wallOwnerIndex = *(_DWORD *)(v30 + 48); /*0x4407fc*/
          (*(void (__thiscall **)(BuildingClass *, int))(this->ptr_0 + 628))(this, 3); /*0x440803*/
          MapClass::RevealArea1( /*0x44082d*/
            (MapClass *)&dword_87F7E8,
            &v2->ptr_0,
            *(_DWORD *)(this->Type + 1512),
            (void *)this->owner,
            0,
            0,
            0,
            1,
            0);
          MapClass::RevealArea1( /*0x440856*/
            (MapClass *)&dword_87F7E8,
            &v2->ptr_0,
            *(_DWORD *)(this->Type + 1512),
            (void *)this->owner,
            0,
            0,
            0,
            1,
            1);
          result = (*(int (__thiscall **)(BuildingClass *))(this->ptr_0 + 248))(this); /*0x44085f*/
          LOBYTE(result) = 1; /*0x440865*/
          return result; /*0x44086e*/
        }
      }
    }
    goto LABEL_46; /*0x4407e0*/
  }
  if ( v26[3720] ) /*0x440871*/
  {
    v31 = v2->ptr_0; /*0x44087f*/
    v157 = 0; /*0x44088b*/
    v158 = 0; /*0x440891*/
    LOWORD(v161) = v31 / 256; /*0x440898*/
    HIWORD(v161) = v2->ptr_4 / 256; /*0x4408b0*/
    result = BuildingClass::updateSellBack((BuildingClass *)&dword_87F7E8, (__int16 *)&v161, &v157); /*0x4408c8*/
    v32 = (BuildingClass *)result; /*0x4408cd*/
    if ( !result ) /*0x4408d1*/
      goto LABEL_46; /*0x4408d1*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 44))(result); /*0x4408d7*/
    if ( result != 6 ) /*0x4408dd*/
      goto LABEL_46; /*0x4408dd*/
    result = this->owner; /*0x4408df*/
    v33 = this->Type; /*0x4408eb*/
    if ( result != v32->owner ) /*0x4408f3*/
      goto LABEL_46; /*0x4408f3*/
    result = _strcmpi((char *)(v33 + 3720), (char *)(v32->Type + 36)); /*0x440906*/
    if ( result ) /*0x440910*/
      goto LABEL_46; /*0x440910*/
    result = *(_DWORD *)(v33 + 5884); /*0x440912*/
    if ( result == -1 ) /*0x44091b*/
    {
      result = v32->Type; /*0x440932*/
      if ( v32->UpgradeLevel[0] < *(_DWORD *)(result + 5344) ) /*0x440945*/
      {
LABEL_49:
        *(_BYTE *)(this->owner + 22393) = 1; /*0x440951*/
        *(_BYTE *)(this->owner + 22392) = 1; /*0x440964*/
        v34 = this->Type; /*0x44096b*/
        v35 = *(_DWORD *)(v34 + 5884); /*0x440971*/
        if ( v35 == -1 ) /*0x44097a*/
          v35 = 1; /*0x44097c*/
        v36 = (char *)(v32->Type + 68 * v32->UpgradeLevel[0] + 3916); /*0x44099b*/
        if ( _strcmpi(v36, (char *)(v34 + 504)) ) /*0x4409a3*/
          strncpy(v36, (const char *)(this->Type + 504), 0x10u); /*0x4409bf*/
        for ( ; v35; --v35 ) /*0x4409c9*/
          UpdateBuildingActiveAnim(v32, v37); /*0x4409cd*/
        *(_DWORD *)&v32->RequiresDamageFires[4 * v32->UpgradeLevel[0]] = this->Type; /*0x4409e2*/
        SuperWeapon::UpdateSuperWeaponsUnavailableHouseClass((SuperWeapon *)this->owner); /*0x4409ef*/
        *(_BYTE *)(this->owner + 508) = 1; /*0x4409fa*/
        if ( *(_BYTE *)(this->Type + 5987) ) /*0x440a07*/
          HouseClass::AcquiredThreatNode((HouseClass *)this->owner); /*0x440a17*/
        result = (*(int (__thiscall **)(BuildingClass *))(this->ptr_0 + 248))(this); /*0x440a20*/
        LOBYTE(result) = 1; /*0x440a26*/
        return result; /*0x440a2f*/
      }
    }
    else if ( result <= 0 || result > 3 ) /*0x440924*/
    {
      goto LABEL_46; /*0x440924*/
    }
    if ( v32->UpgradeLevel[0] ) /*0x440947*/
    {
LABEL_46:
      LOBYTE(result) = 0; /*0x440926*/
      return result; /*0x44092f*/
    }
    goto LABEL_49; /*0x44094f*/
  }
  if ( v26[5823] ) /*0x440a32*/
  {
    LOBYTE(v38) = 0; /*0x440a3c*/
    HIBYTE(v38) = (_BYTE)v162; /*0x440a3e*/
    v155[0] = v38; /*0x440a42*/
    if ( (((unsigned __int8)(*(_DWORD *)v155 >> 12) + 1) & 6) == 4 ) /*0x440a55*/
      this->LaserFenceFrame = 8; /*0x440a57*/
    else
      this->LaserFenceFrame = 12; /*0x440a63*/
  }
  if ( (_BYTE)v7 ) /*0x440a6f*/
  {
    if ( v26[5822] ) /*0x440a75*/
    {
      this->LaserFenceFrame = 0; /*0x440a83*/
      LOWORD(v154) = v2->ptr_0 / 256; /*0x440aa1*/
      HIWORD(v154) = v2->ptr_4 / 256; /*0x440aba*/
      *(_DWORD *)v155 = v154; /*0x440ac3*/
      v39 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v155); /*0x440ac7*/
      v40 = Cell::IsBridge(v39); /*0x440ace*/
      v41 = v40; /*0x440ad3*/
      if ( v40 ) /*0x440ad7*/
      {
        if ( *(_BYTE *)(v40[328] + 5823) ) /*0x440adf*/
        {
          v7 = (*(int (__thiscall **)(_DWORD *))(*v40 + 56))(v40); /*0x440af4*/
          if ( (*(int (__thiscall **)(BuildingClass *))(this->ptr_0 + 56))(this) == v7 ) /*0x440afb*/
            (*(void (__thiscall **)(_DWORD *))(*v41 + 248))(v41); /*0x440b01*/
        }
      }
    }
  }
  if ( !TechnoClass::FinishDeploy(v2, (unsigned __int8)v7, v162, v149, v151) ) /*0x440b16*/
    goto LABEL_46; /*0x440b16*/
  if ( *(_BYTE *)(this->Type + 5831) ) /*0x440b22*/
  {
    result = this->owner; /*0x440b2c*/
    *(_BYTE *)(result + 22264) = 1; /*0x440b32*/
  }
  if ( this->isAliveFlag[0] ) /*0x440b39*/
  {
    if ( *(_DWORD *)&dword_A8B238 /*0x440b70*/
      && !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner)
      && !*(_BYTE *)(*(_DWORD *)(this->owner + 52) + 422) )
    {
      this->__pad_6B8[19] = 1; /*0x440b7a*/
    }
    if ( (dword_A8B230->ptr_0 & 0x1000) != 0 ) /*0x440b8b*/
    {
      v162 = *(int **)(*(int (__thiscall **)(BuildingClass *, int *))(this->ptr_0 + 440))(this, &v154); /*0x440ba0*/
      for ( j = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this->Type + 144))(this->Type, 0); /*0x440bb2*/
            *(_WORD *)j != 0x7FFF || *(_WORD *)(j + 2) != 0x7FFF;
            j += 4 )
      {
        *(_DWORD *)v155 = *CellStruct::Add((CellStruct *)j, &v153, &v162); /*0x440be5*/
        if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v155) + 80) & 0x400000) == 0 ) /*0x440bf4*/
          goto LABEL_84; /*0x440bf4*/
      }
      BuildingClass::CreateFoggedObjects(this, 0, 0, 0); /*0x440c03*/
    }
LABEL_84:
    v43 = this->Type; /*0x440c08*/
    if ( (!*(_DWORD *)(v43 + 1032) || !*(_BYTE *)(v43 + 1516)) /*0x440c26*/
      && !(*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->ptr_0 + 128))(this) )
    {
      MarkBuildingFoundationCells(this, 0); /*0x440c34*/
    }
    FoundationWidth = BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)this->Type); /*0x440c4c*/
    v45 = BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) + 2; /*0x440c5f*/
    v46 = v2->ptr_0; /*0x440c62*/
    v153 = v45; /*0x440c64*/
    LOWORD(v156[0]) = v46 / 256; /*0x440c6b*/
    HIWORD(v156[0]) = v2->ptr_4 / 256; /*0x440c7f*/
    v47 = 0; /*0x440c84*/
    v154 = 0; /*0x440c88*/
    if ( v45 > 0 ) /*0x440c8c*/
    {
      v48 = FoundationWidth + 2; /*0x440c8e*/
      do /*0x440cff*/
      {
        v49 = 0; /*0x440c91*/
        if ( v48 > 0 ) /*0x440c95*/
        {
          LOWORD(v157) = LOWORD(v156[0]) - 1; /*0x440ca1*/
          HIWORD(v157) = HIWORD(v156[0]) - 1; /*0x440ca6*/
          v50 = LOWORD(v156[0]) - 1; /*0x440caf*/
          HIWORD(v162) = v47 + HIWORD(v156[0]) - 1; /*0x440cb5*/
          do /*0x440cea*/
          {
            LOWORD(v162) = v49 + v50; /*0x440cc1*/
            *(_DWORD *)v155 = v162; /*0x440cd0*/
            v51 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v155); /*0x440cd4*/
            ++v49; /*0x440ce1*/
            ++v51[290]; /*0x440ce4*/
          }
          while ( v49 < v48 ); /*0x440cea*/
          v2 = v161; /*0x440cec*/
          v45 = v153; /*0x440cf0*/
          v47 = v154; /*0x440cf4*/
        }
        v154 = ++v47; /*0x440cfb*/
      }
      while ( v47 < v45 ); /*0x440cff*/
    }
    BuildingClass::CalcExitCoords((BuildingClass *)this->owner); /*0x440d07*/
    BuildingClass::IncrementOccupantTypeCounter((BuildingClass *)this->owner, this); /*0x440d13*/
    *(_BYTE *)(this->owner + 508) = 1; /*0x440d1e*/
    v52 = this->isDiscoveredByCurrentPlayer[0]; /*0x440d25*/
    this->BuildingClass_field_544 = 0; /*0x440d2d*/
    if ( !v52 && (Coord::To_Cell((Coord *)&dword_87F7E8, v2)->copyFlags & 0x10) != 0 || *(_DWORD *)&dword_A8B238 ) /*0x440d54*/
    {
      (*(void (__thiscall **)(BuildingClass *, Object *))(this->ptr_0 + 408))(this, dword_A83D4C); /*0x440d61*/
    }
    else if ( *(_DWORD *)(this->Type + 3636) ) /*0x440d72*/
    {
      if ( !this->LightSource ) /*0x440d80*/
      {
        v53 = (LightSourceClass *)__2_YAPAXI_Z(0x4Cu); /*0x440d91*/
        if ( v53 ) /*0x440d98*/
        {
          v54 = (_DWORD *)this->Type; /*0x440d9a*/
          v148 = v54[912]; /*0x440dac*/
          v147 = v54[911]; /*0x440db3*/
          v146 = v54[910]; /*0x440dc0*/
          v145 = v54[909]; /*0x440dc1*/
          v144 = v54[908]; /*0x440dc4*/
          v55 = (int *)(*(int (__thiscall **)(BuildingClass *, int *))(this->ptr_0 + 72))(this, v160); /*0x440dcc*/
          v56 = LightSourceClass::Construct(v53, *v55, v55[1], v55[2], v144, v145, v146, v147, v148); /*0x440de6*/
        }
        else
        {
          v56 = 0; /*0x440ded*/
        }
        this->LightSource = (int)v56; /*0x440def*/
      }
      Trigger::EnableOnce((Trigger *)this->LightSource, 0); /*0x440dfd*/
    }
    if ( *(_BYTE *)(this->Type + 5822) && !dword_A8E7AC && this->isAliveFlag[0] && !this->inLimbo[0] ) /*0x440e25*/
    {
      BuildingClass::DemolishBridge(this); /*0x440e33*/
      BuildingClass::DemolishBridge(this); /*0x440e3c*/
      BuildingClass::DemolishBridge(this); /*0x440e45*/
      BuildingClass::DemolishBridge(this); /*0x440e4e*/
      BuildingClass::RepairPlacement(this, 1); /*0x440e57*/
    }
    if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner) ) /*0x440e62*/
      (*(void (__thiscall **)(BuildingClass *, int))(this->ptr_0 + 408))(this, this->owner); /*0x440e76*/
    if ( this->isOwnedByCurrentPlayer[0] ) /*0x440e7c*/
    {
      byte_880CF4 = 1; /*0x440e8d*/
      MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 0); /*0x440e94*/
    }
    v57 = this->Type; /*0x440e99*/
    if ( *(_DWORD *)(v57 + 1892) && !this->ambientParticles ) /*0x440ead*/
    {
      v58 = (int *)(v57 + 1896); /*0x440ebb*/
      v59 = *v58; /*0x440ec5*/
      v158 = v58[1]; /*0x440eca*/
      v159 = v58[2]; /*0x440ed1*/
      v60 = (int *)__2_YAPAXI_Z(0x100u); /*0x440eda*/
      if ( v60 ) /*0x440ee1*/
      {
        v61 = this->location[1]; /*0x440efc*/
        v160[0] = v59 + this->location[0]; /*0x440eff*/
        v62 = this->location[2]; /*0x440f07*/
        v156[0] = this->location[0]; /*0x440f0e*/
        v160[1] = v158 + v61; /*0x440f12*/
        v63 = this->location[1]; /*0x440f16*/
        v64 = this->location[2]; /*0x440f19*/
        v160[2] = v159 + v62; /*0x440f28*/
        v156[1] = v63; /*0x440f2c*/
        v156[2] = v64; /*0x440f30*/
        v65 = Coord::To_Cell((Coord *)&dword_87F7E8, v156); /*0x440f34*/
        v66 = ParticleSystemClass::Constructor( /*0x440f4e*/
                v60,
                *(_DWORD *)(this->Type + 1892),
                v160,
                (int)v65,
                0,
                &g_BuildingClassPool,
                0);
      }
      else
      {
        v66 = 0; /*0x440f55*/
      }
      v2 = v161; /*0x440f57*/
      this->ambientParticles = v66; /*0x440f5b*/
    }
    v67 = dword_8871E0; /*0x440f61*/
    if ( this->Type == dword_8871E0->NukeDown ) /*0x440f72*/
    {
      smudgeTypeIndex = Coord::To_Cell((Coord *)&dword_87F7E8, v161)->smudgeTypeIndex; /*0x440f87*/
      v157 = smudgeTypeIndex; /*0x440f8e*/
      HIWORD(v162) = HIWORD(smudgeTypeIndex); /*0x440f99*/
      LOWORD(v162) = smudgeTypeIndex + 1; /*0x440f9e*/
      v69 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v162); /*0x440fb3*/
      BuildingClass::ValidatePlacement(v69, 0); /*0x440fba*/
      HIWORD(v162) = HIWORD(smudgeTypeIndex); /*0x440fc2*/
      LOWORD(v162) = smudgeTypeIndex - 1; /*0x440fc7*/
      v70 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v162); /*0x440fe0*/
      BuildingClass::ValidatePlacement(v70, 0); /*0x440fe7*/
      v162 = (int *)(smudgeTypeIndex + 0x10000); /*0x440ff4*/
      v71 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v162); /*0x44100d*/
      BuildingClass::ValidatePlacement(v71, 0); /*0x441014*/
      v162 = (int *)(smudgeTypeIndex - 0x10000); /*0x44101f*/
      v72 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v162); /*0x441038*/
      BuildingClass::ValidatePlacement(v72, 0); /*0x44103f*/
      v67 = dword_8871E0; /*0x441044*/
      v2 = v161; /*0x441049*/
    }
    v73 = this->Type; /*0x44104d*/
    if ( v73 == v67->FlameDamage || v73 == v67->NukeWarhead ) /*0x441063*/
    {
      v74 = (int *)Coord::To_Cell((Coord *)&dword_87F7E8, v2)->smudgeTypeIndex; /*0x441070*/
      v162 = v74; /*0x441077*/
      HIWORD(v161) = HIWORD(v74); /*0x441083*/
      LOWORD(v161) = (_WORD)v74 - 1; /*0x441088*/
      v75 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v161); /*0x44109d*/
      BuildingClass::ValidatePlacement(v75, 0); /*0x4410a4*/
      LOWORD(v161) = (_WORD)v74 + 3; /*0x4410b0*/
      HIWORD(v161) = HIWORD(v74); /*0x4410b5*/
      v76 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v161); /*0x4410ca*/
      BuildingClass::ValidatePlacement(v76, 0); /*0x4410d1*/
      v67 = dword_8871E0; /*0x4410d6*/
    }
    v77 = this->Type; /*0x4410db*/
    if ( v77 == v67->FlameDamage2 || v77 == v67->NukeProjectile ) /*0x4410f1*/
    {
      v78 = Coord::To_Cell((Coord *)&dword_87F7E8, v2)->smudgeTypeIndex; /*0x4410fe*/
      v157 = v78; /*0x441105*/
      v161 = (TechnoClass *)(v78 - 0x10000); /*0x441118*/
      v79 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v161); /*0x44112a*/
      BuildingClass::ValidatePlacement(v79, 0); /*0x441131*/
      v161 = (TechnoClass *)(v78 + 196608); /*0x44113e*/
      v80 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v161); /*0x441157*/
      BuildingClass::ValidatePlacement(v80, 0); /*0x44115e*/
    }
    if ( *(_BYTE *)(this->Type + 5451) ) /*0x441169*/
    {
      if ( __2_YAPAXI_Z(0xE8u) ) /*0x441178*/
        v81 = BuildingLightClass::CTOR((BuildingLightClass *)this, v1, v150); /*0x441187*/
      else
        v81 = 0; /*0x44118e*/
      this->Spotlight = (int)v81; /*0x441190*/
    }
    v82 = this->Type; /*0x441196*/
    this->isPrimaryFactory[0] = 0; /*0x44119c*/
    if ( *(_DWORD *)(v82 + 3768) ) /*0x4411a3*/
      AnimClass::updateAnimation((int)this, 0); /*0x4411b1*/
    v83 = 0; /*0x4411bc*/
    IvanIconFlickerRate = dword_8871E0->IvanIconFlickerRate; /*0x4411be*/
    if ( IvanIconFlickerRate > 0 ) /*0x4411c6*/
    {
      IvanDamage = (_DWORD *)dword_8871E0->IvanDamage; /*0x4411ce*/
      while ( *IvanDamage != this->Type ) /*0x4411d6*/
      {
        ++v83; /*0x4411d8*/
        ++IvanDamage; /*0x4411d9*/
        if ( v83 >= IvanIconFlickerRate ) /*0x4411de*/
          goto LABEL_147; /*0x4411de*/
      }
      v86 = (_DWORD *)(this->owner + 80); /*0x4411e8*/
      v87 = *(_DWORD *)(this->owner + 88); /*0x4411eb*/
      if ( *(_DWORD *)(this->owner + 96) < v87 /*0x441210*/
        || (*(_BYTE *)(this->owner + 93) || !v87)
        && (v88 = *(_DWORD *)(this->owner + 100), v88 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v86 + 8))(v86, v88 + v87, 0) )
      {
        v89 = v86[4]; /*0x441217*/
        v90 = v86[1]; /*0x44121a*/
        v86[4] = v89 + 1; /*0x441220*/
        *(_DWORD *)(v90 + 4 * v89) = this; /*0x441223*/
      }
    }
LABEL_147:
    if ( *(_BYTE *)(this->Type + 5801) ) /*0x44122c*/
    {
      v91 = (_DWORD *)(this->owner + 128); /*0x44123c*/
      v92 = *(_DWORD *)(this->owner + 136); /*0x441242*/
      if ( *(_DWORD *)(this->owner + 144) < v92 /*0x441267*/
        || (*(_BYTE *)(this->owner + 141) || !v92)
        && (v93 = *(_DWORD *)(this->owner + 148), v93 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v91 + 8))(v91, v93 + v92, 0) )
      {
        v94 = v91[4]; /*0x44126e*/
        v95 = v91[1]; /*0x441271*/
        v91[4] = v94 + 1; /*0x441277*/
        *(_DWORD *)(v95 + 4 * v94) = this; /*0x44127a*/
      }
    }
    if ( *(_BYTE *)(this->Type + 5805) ) /*0x441283*/
    {
      v96 = (_DWORD *)(this->owner + 152); /*0x441293*/
      v97 = *(_DWORD *)(this->owner + 160); /*0x441299*/
      if ( *(_DWORD *)(this->owner + 168) < v97 /*0x4412be*/
        || (*(_BYTE *)(this->owner + 165) || !v97)
        && (v98 = *(_DWORD *)(this->owner + 172), v98 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v96 + 8))(v96, v98 + v97, 0) )
      {
        v99 = v96[4]; /*0x4412c5*/
        v100 = v96[1]; /*0x4412c8*/
        v96[4] = v99 + 1; /*0x4412ce*/
        *(_DWORD *)(v100 + 4 * v99) = this; /*0x4412d1*/
      }
    }
    v101 = this->Type; /*0x4412d4*/
    if ( *(_BYTE *)(v101 + 5806) || *(_BYTE *)(v101 + 5807) ) /*0x4412e4*/
    {
      v102 = (_DWORD *)(this->owner + 176); /*0x4412f4*/
      v103 = *(_DWORD *)(this->owner + 184); /*0x4412fa*/
      if ( *(_DWORD *)(this->owner + 192) < v103 /*0x44131f*/
        || (*(_BYTE *)(this->owner + 189) || !v103)
        && (v104 = *(_DWORD *)(this->owner + 196), v104 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v102 + 8))(v102, v104 + v103, 0) )
      {
        v105 = v102[4]; /*0x441326*/
        v106 = v102[1]; /*0x441329*/
        v102[4] = v105 + 1; /*0x44132f*/
        *(_DWORD *)(v106 + 4 * v105) = this; /*0x441332*/
      }
    }
    if ( *(_BYTE *)(this->Type + 5803) ) /*0x44133b*/
    {
      v107 = (_DWORD *)(this->owner + 200); /*0x44134b*/
      v108 = *(_DWORD *)(this->owner + 208); /*0x441351*/
      if ( *(_DWORD *)(this->owner + 216) < v108 /*0x441376*/
        || (*(_BYTE *)(this->owner + 213) || !v108)
        && (v109 = *(_DWORD *)(this->owner + 220), v109 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v107 + 8))(v107, v109 + v108, 0) )
      {
        v110 = v107[4]; /*0x44137d*/
        v111 = v107[1]; /*0x441380*/
        v107[4] = v110 + 1; /*0x441386*/
        *(_DWORD *)(v111 + 4 * v110) = this; /*0x441389*/
      }
    }
    v112 = this->Type; /*0x44138c*/
    if ( *(_BYTE *)(v112 + 5499) && *(int *)(v112 + 1588) > -1 ) /*0x4413a3*/
    {
      v113 = (_DWORD *)(this->owner + 224); /*0x4413ab*/
      v114 = *(_DWORD *)(this->owner + 232); /*0x4413b1*/
      if ( *(_DWORD *)(this->owner + 240) < v114 /*0x4413d6*/
        || (*(_BYTE *)(this->owner + 237) || !v114)
        && (v115 = *(_DWORD *)(this->owner + 244), v115 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v113 + 8))(v113, v115 + v114, 0) )
      {
        v116 = v113[4]; /*0x4413dd*/
        v117 = v113[1]; /*0x4413e0*/
        v113[4] = v116 + 1; /*0x4413e6*/
        *(_DWORD *)(v117 + 4 * v116) = this; /*0x4413e9*/
      }
    }
    if ( *(_BYTE *)(this->Type + 5804) ) /*0x4413f2*/
    {
      v118 = (_DWORD *)(this->owner + 248); /*0x441402*/
      v119 = *(_DWORD *)(this->owner + 256); /*0x441408*/
      if ( *(_DWORD *)(this->owner + 264) < v119 /*0x44142d*/
        || (*(_BYTE *)(this->owner + 261) || !v119)
        && (v120 = *(_DWORD *)(this->owner + 268), v120 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v118 + 8))(v118, v120 + v119, 0) )
      {
        v121 = v118[4]; /*0x441434*/
        v122 = v118[1]; /*0x441437*/
        v118[4] = v121 + 1; /*0x44143d*/
        *(_DWORD *)(v122 + 4 * v121) = this; /*0x441440*/
      }
    }
    if ( *(_BYTE *)(this->Type + 5808) ) /*0x441449*/
    {
      v123 = (_DWORD *)(this->owner + 272); /*0x441459*/
      v124 = *(_DWORD *)(this->owner + 280); /*0x44145f*/
      if ( *(_DWORD *)(this->owner + 288) < v124 /*0x441484*/
        || (*(_BYTE *)(this->owner + 285) || !v124)
        && (v125 = *(_DWORD *)(this->owner + 292), v125 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v123 + 8))(v123, v125 + v124, 0) )
      {
        v126 = v123[4]; /*0x44148b*/
        v127 = v123[1]; /*0x44148e*/
        v123[4] = v126 + 1; /*0x441494*/
        *(_DWORD *)(v127 + 4 * v126) = this; /*0x441497*/
      }
    }
    if ( *(int *)(this->Type + 5900) > 0 ) /*0x4414a8*/
    {
      v128 = (_DWORD *)(this->owner + 296); /*0x4414b0*/
      v129 = *(_DWORD *)(this->owner + 304); /*0x4414b6*/
      if ( *(_DWORD *)(this->owner + 312) < v129 /*0x4414db*/
        || (*(_BYTE *)(this->owner + 309) || !v129)
        && (v130 = *(_DWORD *)(this->owner + 316), v130 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v128 + 8))(v128, v130 + v129, 0) )
      {
        v131 = v128[4]; /*0x4414e2*/
        v132 = v128[1]; /*0x4414e5*/
        v128[4] = v131 + 1; /*0x4414eb*/
        *(_DWORD *)(v132 + 4 * v131) = this; /*0x4414ee*/
      }
    }
    if ( *(_BYTE *)(this->Type + 5837) ) /*0x4414f7*/
    {
      v133 = (_DWORD *)(this->owner + 320); /*0x441507*/
      v134 = *(_DWORD *)(this->owner + 328); /*0x44150d*/
      if ( *(_DWORD *)(this->owner + 336) < v134 /*0x441532*/
        || (*(_BYTE *)(this->owner + 333) || !v134)
        && (v135 = *(_DWORD *)(this->owner + 340), v135 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v133 + 8))(v133, v135 + v134, 0) )
      {
        v136 = v133[4]; /*0x441539*/
        v137 = v133[1]; /*0x44153c*/
        v133[4] = v136 + 1; /*0x441542*/
        *(_DWORD *)(v137 + 4 * v136) = this; /*0x441545*/
      }
      HouseClass::CalculateCostMultipliers((float *)this->owner); /*0x44154e*/
    }
    v138 = (_DWORD *)(this->owner + 104); /*0x441559*/
    v139 = *(_DWORD *)(this->owner + 112); /*0x44155c*/
    if ( *(_DWORD *)(this->owner + 120) < v139 /*0x441581*/
      || (*(_BYTE *)(this->owner + 117) || !v139)
      && (v140 = *(_DWORD *)(this->owner + 124), v140 > 0)
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v138 + 8))(v138, v140 + v139, 0) )
    {
      v141 = v138[4]; /*0x441588*/
      v142 = v138[1]; /*0x44158b*/
      v138[4] = v141 + 1; /*0x441591*/
      *(_DWORD *)(v142 + 4 * v141) = this; /*0x441594*/
    }
    if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner) ) /*0x44159d*/
      BuildingClass::MarkUpgradeComponentUsed((BuildingClass *)(this->owner + 22272), this); /*0x4415b3*/
    result = this->Type; /*0x4415b8*/
    v143 = *(_DWORD *)(result + 3768); /*0x4415be*/
    if ( v143 ) /*0x4415c6*/
    {
      LOBYTE(result) = *(_BYTE *)(result + 3278); /*0x4415c8*/
      result = HouseClass::UpdateProduction(this->owner, v143, result, 0); /*0x4415d8*/
    }
    LOBYTE(result) = 1; /*0x4415e0*/
  }
  else
  {
    LOBYTE(result) = 1; /*0x440b43*/
  }
  return result; /*0x440867*/
}


// ==== 0x004415F0  BuildingClass::ProcessDemolish  this=BuildingClass  sig=csp ====
int __thiscall FootClass::ProcessDemolish(BuildingClass *this)
{
  double v1; // st7
  int v3; // ebp
  int *DamageFireAnims; // edi
  BuildingTypeClass *Type; // ecx
  int v6; // edx
  int bunkersCount; // edi
  HouseClass *owner; // ecx
  int v9; // eax
  BuildingTypeClass *v10; // eax
  char CloakRadius; // cl
  void (__thiscall **ptr_0)(BuildingClass *, int); // edx
  int FoundationWidth; // eax
  int FoundationHeight; // eax
  int v15; // edi
  int v16; // eax
  int v17; // eax
  int v18; // edi
  _WORD *v19; // edi
  _DWORD *v20; // ebp
  __int16 v21; // dx
  __int16 v22; // cx
  int v23; // edi
  int v24; // edi
  int *v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  AnimClass *v29; // ebp
  void *v30; // ebx
  int *Explosion; // edi
  unsigned int v32; // eax
  int *v33; // ebx
  int *v34; // eax
  AnimClass *v35; // ebp
  int v36; // edi
  int Index; // eax
  int FloatPositive; // edi
  int v39; // eax
  int *v40; // eax
  CellClass *v41; // eax
  int v42; // eax
  void *v43; // edi
  AnimClass *v44; // ebp
  int *v45; // eax
  void **v46; // edi
  const char *v47; // eax
  int (__thiscall **v48)(BuildingClass *); // edx
  int i; // ebx
  _DWORD *v50; // edi
  int v51; // eax
  _DWORD *v52; // eax
  int v53; // ebp
  int v54; // ebx
  int *v55; // edi
  int v56; // ecx
  int v57; // edx
  int v58; // eax
  ParticleSystemClass *v59; // eax
  int result; // eax
  int v61; // [esp+4h] [ebp-68h]
  ObjectClass *v62; // [esp+8h] [ebp-64h]
  int v63; // [esp+18h] [ebp-54h] BYREF
  int v64; // [esp+1Ch] [ebp-50h]
  int v65; // [esp+20h] [ebp-4Ch]
  int v66; // [esp+24h] [ebp-48h] BYREF
  int v67; // [esp+28h] [ebp-44h]
  int v68; // [esp+2Ch] [ebp-40h]
  int v69; // [esp+30h] [ebp-3Ch]
  int v70; // [esp+34h] [ebp-38h]
  int v71; // [esp+38h] [ebp-34h]
  int v72[3]; // [esp+3Ch] [ebp-30h] BYREF
  int v73; // [esp+48h] [ebp-24h] BYREF
  int v74; // [esp+4Ch] [ebp-20h]
  VectorClass v75; // [esp+54h] [ebp-18h] BYREF
  int v76; // [esp+64h] [ebp-8h]
  int v77; // [esp+68h] [ebp-4h]
  int v78; // [esp+74h] [ebp+8h]
  char v79; // [esp+78h] [ebp+Ch]
  _WORD *v80; // [esp+7Ch] [ebp+10h]

  v3 = 8; /*0x4415f9*/
  DamageFireAnims = this->DamageFireAnims; /*0x4415fe*/
  do /*0x44161a*/
  {
    if ( *DamageFireAnims ) /*0x441604*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)*DamageFireAnims + 248))(*DamageFireAnims); /*0x44160e*/
      *DamageFireAnims = 0; /*0x441614*/
    }
    ++DamageFireAnims; /*0x441616*/
    --v3; /*0x441619*/
  }
  while ( v3 ); /*0x44161a*/
  if ( this->?[0] ) /*0x44161c*/
  {
    Type = this->Type; /*0x441624*/
    this->?[0] = 0; /*0x44162a*/
    if ( Type->__pad_1624[128] ) /*0x441630*/
    {
      this->?->radarVisibleTo[0] = 0; /*0x441640*/
      v6 = 0; /*0x44164c*/
      bunkersCount = this->?->bunkersCount; /*0x44164e*/
      if ( bunkersCount > 0 ) /*0x441653*/
      {
        do /*0x441694*/
        {
          owner = this->?; /*0x441655*/
          v9 = *(_DWORD *)(owner->absorbersCount + 4 * v6); /*0x44165e*/
          if ( v9 && !*(_BYTE *)(v9 + 129) && *(_BYTE *)(*(_DWORD *)(v9 + 1312) + 5796) ) /*0x441674*/
            owner->radarVisibleTo[0] |= *(_DWORD *)(v9 + 528); /*0x44168b*/
          ++v6; /*0x441691*/
        }
        while ( v6 < bunkersCount ); /*0x441694*/
      }
      MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x44169d*/
    }
  }
  v10 = this->Type; /*0x4416a2*/
  if ( v10->CloakGenerator ) /*0x4416a8*/
  {
    CloakRadius = this->CloakRadius; /*0x4416b2*/
    this->HasCloakingData = -1; /*0x4416b8*/
    if ( !CloakRadius ) /*0x4416c1*/
      this->CloakRadius = v10->CloakRadiusInCells; /*0x4416c9*/
    ptr_0 = (void (__thiscall **)(BuildingClass *, int))this->TechnoClass; /*0x4416cf*/
    this->? = 1; /*0x4416d5*/
    this->CloakRadius = 1; /*0x4416dc*/
    ptr_0[260](this, 1); /*0x4416e3*/
  }
  if ( this->Type->LaserFencePost ) /*0x4416ef*/
    BuildingClass::DemolishBridgeCheck(this, 1); /*0x4416fd*/
  if ( this->Type->? && !(unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x441718*/
    (*((void (__thiscall **)(BuildingClass *, _DWORD, _DWORD, int, Object *))this->TechnoClass + 291))( /*0x44172f*/
      this,
      0,
      0,
      1,
      dword_A83D4C);
  if ( !*(_DWORD *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) + 1312) ) /*0x44173f*/
  {
    v63 = this->?[0]; /*0x441757*/
    v64 = this->?[1]; /*0x441764*/
    v65 = this->?[2]; /*0x44176f*/
    PlayAudioAt2(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1768), &v63, 0); /*0x441779*/
  }
  if ( BuildingTypeClass::GetFoundationWidth(this->Type) >= 2 /*0x4417a1*/
    && BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) >= 2 )
  {
    if ( BuildingTypeClass::GetFoundationWidth(this->Type) > 2 ) /*0x4417b5*/
    {
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(this->Type); /*0x4417bd*/
      Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, FoundationWidth - 2); /*0x4417d3*/
    }
    if ( BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) > 2 ) /*0x4417e7*/
    {
      FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0); /*0x4417f0*/
      Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, FoundationHeight - 2); /*0x441805*/
    }
    if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 50 ) /*0x441821*/
    {
      v65 = 0; /*0x441892*/
      v17 = this->?[0]; /*0x441896*/
      v18 = this->?[1]; /*0x441898*/
      v71 = this->?[2]; /*0x44189e*/
      v63 = ((__int16)(v17 / 256) << 8) + 128; /*0x4418d6*/
      v64 = ((__int16)(v18 / 256) << 8) + 128; /*0x4418da*/
      TimedCreateUnitAtCoords(&v63, 100, 100, 1); /*0x4418e7*/
    }
    else
    {
      v65 = 0; /*0x44182d*/
      v15 = this->?[1]; /*0x441833*/
      v16 = this->?[0]; /*0x441839*/
      v71 = this->?[2]; /*0x441840*/
      v63 = ((__int16)(v16 / 256) << 8) + 128; /*0x44186f*/
      v64 = ((__int16)(v15 / 256) << 8) + 128; /*0x44187d*/
      StandardCreateUnitAtCoords(&v63, 100, 100, 1); /*0x441881*/
    }
  }
  while ( *v80 != 0x7FFF || v80[1] != 0x7FFF ) /*0x4418fd*/
  {
    v19 = v80; /*0x441903*/
    v80 += 2; /*0x44190c*/
    v20 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 43))(this, v72); /*0x44191b*/
    v21 = v20[1] / 256 + v19[1]; /*0x44193e*/
    v22 = *v19 + *v20 / 256; /*0x44194a*/
    if ( this->Type->?[4] > 0 ) /*0x441955*/
    {
      v69 = this->?[0]; /*0x441972*/
      v23 = this->?[1]; /*0x441976*/
      v63 = (v22 << 8) + 128; /*0x44197f*/
      v64 = (v21 << 8) + 128; /*0x441983*/
      v70 = v23; /*0x441987*/
      v24 = this->?[2]; /*0x44198b*/
      v65 = 0; /*0x441998*/
      v25 = RandomCoordScatter(&v73, &v63, v1, 64, 0); /*0x44199c*/
      v26 = *v25; /*0x4419a1*/
      v27 = v25[1]; /*0x4419a3*/
      v28 = v24 + v25[2]; /*0x4419ae*/
      v66 = v26; /*0x4419b0*/
      v67 = v27; /*0x4419b4*/
      v68 = v28; /*0x4419b8*/
      v29 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4419c1*/
      if ( v29 ) /*0x4419c8*/
      {
        v30 = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 3); /*0x4419f3*/
        Explosion = this->Type->?; /*0x4419f5*/
        v32 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x4419fb*/
        AnimClass::ctor(v29, *(void **)(Explosion[1] + 4 * (v32 % Explosion[4])), &v66, v30, 1, (void *)0x600, 0, 0); /*0x441a1f*/
      }
    }
  }
  if ( BYTE1(this->Type->?[0]) ) /*0x441a31*/
  {
    v33 = (int *)&unk_818CB8; /*0x441a3f*/
    do /*0x441b28*/
    {
      v66 = this->?[0]; /*0x441a50*/
      v61 = *v33; /*0x441a59*/
      v67 = this->?[1]; /*0x441a5a*/
      v68 = this->?[2]; /*0x441a69*/
      v34 = globalHelper_09F550(&v73, &v66, v61); /*0x441a6d*/
      v63 = *v34; /*0x441a74*/
      v64 = v34[1]; /*0x441a7b*/
      v65 = v34[2]; /*0x441a8c*/
      if ( *(_DWORD *)&Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v63)->__pad_28[28] != -1 ) /*0x441a99*/
      {
        if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 /*0x441aba*/
                                  + 4
                                  * *(_DWORD *)&Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v63)->__pad_28[28])
                      + 688) )
        {
          v35 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x441ace*/
          if ( v35 ) /*0x441ad5*/
          {
            v36 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 3); /*0x441af1*/
            Index = AnimTypeClass::FindIndex(&stru_818E00); /*0x441af3*/
            AnimClass::ctor( /*0x441b1a*/
              v35,
              *(void **)(FootClass_Array.?[3] + 4 * Index),
              &v63,
              (void *)(v36 + 3),
              1,
              (void *)0x600,
              0,
              0);
          }
        }
      }
      ++v33; /*0x441b1f*/
    }
    while ( (int)v33 < (int)dword_818CC8 ); /*0x441b28*/
  }
  Float4::Sum((int *)&this->?); /*0x441b38*/
  while ( v1 >= 1.0 ) /*0x441b48*/
  {
    FloatPositive = FirstFloatPositive(&this->?); /*0x441b5b*/
    Float::SubtractClamped((int *)&this->?, 1.0, FloatPositive); /*0x441b65*/
    Float::SubtractClamped(this->?->ownedTiberium, 1.0, FloatPositive); /*0x441b7e*/
    v39 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 256, 768); /*0x441b9a*/
    v66 = this->?[0]; /*0x441ba6*/
    v67 = this->?[1]; /*0x441bad*/
    v68 = this->?[2]; /*0x441bb8*/
    v40 = RandomCoordScatter(&v73, &v66, v1, v39, 1); /*0x441bc0*/
    v63 = *v40; /*0x441bc9*/
    v64 = v40[1]; /*0x441bd1*/
    v65 = v40[2]; /*0x441be2*/
    v41 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v63); /*0x441be6*/
    Crate::FindPlacement((int)v41, FloatPositive, 1); /*0x441bed*/
    Float4::Sum((int *)&this->?); /*0x441bf4*/
  }
  if ( (*((int (__thiscall **)(BuildingTypeClass *, HouseClass *))this->Type->TechnoTypeClass + 33))( /*0x441c30*/
         this->Type,
         this->?)
     / *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1480) > 0 )
    nullsub_51(v62); /*0x441c34*/
  if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 19 || BYTE1(this->Type->?[0]) ) /*0x441c4e*/
  {
    this->C4Timer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x441c83*/
    this->C4Timer[1] = v74; /*0x441c89*/
    this->C4Timer[2] = 0; /*0x441c8c*/
    v42 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x441c8f*/
    this->?[5] = 0; /*0x441c9a*/
    this->?[2] = v42; /*0x441ca0*/
    this->?[3] = v74; /*0x441ca6*/
    this->?[4] = 0; /*0x441ca9*/
  }
  else
  {
    this->C4Timer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x441c68*/
    this->C4Timer[1] = v74; /*0x441c6e*/
    this->C4Timer[2] = 8; /*0x441c71*/
  }
  if ( this->Type->?[4] > 0 ) /*0x441cb8*/
  {
    v43 = *(void **)(this->Type->?[1] /*0x441ce3*/
                   + 4 * ((unsigned int)Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % this->Type->?[4]));
    if ( v43 ) /*0x441ce8*/
    {
      v44 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x441cf4*/
      if ( v44 ) /*0x441cfb*/
      {
        v45 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 43))(this, &v73); /*0x441d10*/
        v46 = AnimClass::ctor(v44, v43, v45, 0, 1, (void *)0x600, 0, 0); /*0x441d1f*/
      }
      else
      {
        v46 = 0; /*0x441d23*/
      }
      if ( *(_DWORD *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) + 3568) ) /*0x441d2f*/
      {
        v46[53] = (void *)(*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 121))(this); /*0x441d41*/
        v47 = &this->Type->?[8]; /*0x441d4d*/
        if ( *v47 ) /*0x441d52*/
          strncpy((char *)v46 + 220, v47, 0x20u); /*0x441d61*/
      }
    }
  }
  VectorClass::ConstructorWithVtable(&v75, 0, 0); /*0x441d6f*/
  v48 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x441d74*/
  v75.ptr_0 = &DynamicVectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x441d78*/
  v77 = 10; /*0x441d80*/
  v76 = 0; /*0x441d88*/
  for ( i = *(_DWORD *)(v48[33](this) + 1956) - 1; i >= 0; --i ) /*0x441d9e*/
  {
    if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) /*0x441dc3*/
                                            + 1944)
                                + 4 * i)
                    + 692) )
    {
      v50 = (_DWORD *)(4 * i /*0x441de6*/
                     + *(_DWORD *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) + 1944));
      if ( v76 < v75.Capacity /*0x441e11*/
        || (v75.IsAllocated || !v75.Capacity)
        && v77 > 0
        && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v75.ptr_0 + 2))(
             &v75,
             v77 + v75.Capacity,
             0) )
      {
        v51 = v76++; /*0x441e20*/
        *((_DWORD *)v75.Items + v51) = *v50; /*0x441e29*/
      }
    }
  }
  if ( !this->? && v76 > 0 && (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 114))(this) > -10 ) /*0x441e5a*/
  {
    v52 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this); /*0x441e64*/
    v53 = v52[496]; /*0x441e6a*/
    v54 = v52[497]; /*0x441e70*/
    v71 = v52[498]; /*0x441e83*/
    v55 = (int *)__2_YAPAXI_Z(0x100u); /*0x441e8c*/
    if ( v55 ) /*0x441e93*/
    {
      v56 = this->?[1]; /*0x441ea1*/
      v66 = v53 + this->?[0]; /*0x441ea4*/
      v57 = v71 + this->?[2]; /*0x441eb5*/
      v67 = v54 + v56; /*0x441eb7*/
      v68 = v57; /*0x441ecb*/
      v58 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v76 - 1); /*0x441ecf*/
      v59 = (ParticleSystemClass *)ParticleSystemClass::Constructor( /*0x441eed*/
                                     v55,
                                     *((_DWORD *)v75.Items + v58),
                                     &v66,
                                     0,
                                     this,
                                     &g_BuildingClassPool,
                                     0);
    }
    else
    {
      v59 = 0; /*0x441ef4*/
    }
    this->? = v59; /*0x441ef6*/
  }
  this->? = 0; /*0x441f00*/
  if ( v79 ) /*0x441f09*/
    this->NoCrew = 1; /*0x441f0b*/
  BuildingClass::EjectCrew(this, this->C4AppliedBy); /*0x441f1b*/
  TechnoClass::CleanupAll((TechnoClass *)this, v78); /*0x441f27*/
  result = (int)v75.Items; /*0x441f2c*/
  v75.ptr_0 = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x441f35*/
  if ( v75.Items && v75.IsAllocated ) /*0x441f46*/
    __3_YAXPAX_Z(v75.Items); /*0x441f49*/
  return result; /*0x441f30*/
}



// ==== 0x00441F60  BuildingClass::AfterDestruction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::AfterDestruction(BuildingClass *this)
{
  BuildingClass *v1; // ebx
  BuildingTypeClass *Type; // ecx
  int result; // eax
  _WORD *v4; // ebp
  _DWORD *v5; // eax
  _WORD *v6; // eax
  __int16 v7; // dx
  void *v8; // esi
  BuildingClass *v9; // edi
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // edx
  int v15; // ebp
  int v16; // eax
  int v17; // esi
  int v18; // edi
  int *v19; // eax
  void *v20; // eax
  _DWORD *v21; // eax
  BuildingTypeClass *v22; // edx
  __int16 v23[2]; // [esp+10h] [ebp-40h] BYREF
  int v24; // [esp+14h] [ebp-3Ch]
  __int16 v25[2]; // [esp+18h] [ebp-38h] BYREF
  int v26; // [esp+1Ch] [ebp-34h]
  _DWORD v27[2]; // [esp+20h] [ebp-30h] BYREF
  char v28[4]; // [esp+28h] [ebp-28h] BYREF
  char v29[4]; // [esp+2Ch] [ebp-24h] BYREF
  int v30[4]; // [esp+30h] [ebp-20h] BYREF
  Rect v31; // [esp+40h] [ebp-10h] BYREF

  v1 = this; /*0x441f65*/
  Type = this->Type; /*0x441f73*/
  v27[0] = v1; /*0x441f79*/
  result = BuildingClass::GetPlacementCoords((BuildingClass *)Type, (int *)v29, v28); /*0x441f7d*/
  if ( (_BYTE)result ) /*0x441f84*/
  {
    v4 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))v1->TechnoClass + 66))(v1, 0); /*0x441f9a*/
    v5 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))v1->TechnoClass + 43))(v1, v30); /*0x441fa1*/
    LOWORD(v24) = *v5 / 256; /*0x441fb7*/
    HIWORD(v24) = v5[1] / 256; /*0x441fcb*/
    *(_DWORD *)v23 = v24; /*0x441fd4*/
    while ( *v4 != 0x7FFF || v4[1] != 0x7FFF ) /*0x441fe6*/
    {
      v6 = v4; /*0x441fe8*/
      v4 += 2; /*0x441fea*/
      v7 = v23[1] + v6[1]; /*0x441ff9*/
      LOWORD(v24) = v23[0] + *v6; /*0x441ffe*/
      HIWORD(v24) = v7; /*0x442007*/
      *(_DWORD *)v25 = v24; /*0x442016*/
      v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x44201f*/
      BuildingClass::CreatePlacementCrater((BuildingClass *)v8); /*0x442023*/
      *((_DWORD *)v8 + 17) = 239; /*0x44202c*/
      *((_DWORD *)v8 + 16) = 0; /*0x442033*/
      House::AnnounceUpgrade((int)v8, -1); /*0x44203a*/
      Cell::SetRadar((Cell *)&stru_87F5F0.__pad_58[416], (__int16 *)v8 + 18); /*0x442048*/
      Radar::Update((Radar *)&stru_87F5F0.__pad_58[416], (__int16 *)v8 + 18); /*0x442053*/
      AbstractClass::ClearTargetToMeClearManagerTarget((int)v8); /*0x44205a*/
    }
    v9 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23); /*0x442077*/
    v9->?[1] = (int)v1->Type; /*0x442082*/
    PlacementRect = BuildingClass::GetPlacementRect(v9, v30); /*0x442091*/
    StartCoords = House::GetStartCoords((House *)v9, &v31); /*0x442093*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x4420a8*/
    {
      v12 = *PlacementRect; /*0x44212e*/
      v14 = PlacementRect[1]; /*0x442130*/
      v18 = PlacementRect[2]; /*0x442133*/
      v16 = PlacementRect[3]; /*0x442136*/
    }
    else
    {
      v24 = PlacementRect[2]; /*0x4420b3*/
      if ( v24 <= 0 || (v26 = PlacementRect[3], v26 <= 0) ) /*0x4420c2*/
      {
        v12 = *StartCoords; /*0x442121*/
        v14 = StartCoords[1]; /*0x442123*/
        v18 = StartCoords[2]; /*0x442126*/
        v16 = StartCoords[3]; /*0x442129*/
      }
      else
      {
        v12 = *StartCoords; /*0x4420c4*/
        v13 = *PlacementRect; /*0x4420c6*/
        v14 = StartCoords[1]; /*0x4420c8*/
        v15 = StartCoords[2]; /*0x4420cb*/
        v16 = StartCoords[3]; /*0x4420ce*/
        if ( v12 > *PlacementRect ) /*0x4420d3*/
        {
          v15 += v12 - v13; /*0x4420d7*/
          v12 = *PlacementRect; /*0x4420d9*/
        }
        v17 = PlacementRect[1]; /*0x4420db*/
        *(_DWORD *)v25 = v17; /*0x4420e0*/
        if ( v14 > v17 ) /*0x4420e4*/
        {
          v16 += v14 - v17; /*0x4420e8*/
          v14 = v17; /*0x4420ea*/
        }
        if ( v12 + v15 < v13 + v24 ) /*0x4420f7*/
          v15 = v13 - v12 + v24 + 1; /*0x4420ff*/
        if ( v16 + v14 < v26 + *(_DWORD *)v25 ) /*0x442112*/
          v16 = v26 + *(_DWORD *)v25 - v14 + 1; /*0x442117*/
        v1 = (BuildingClass *)v27[0]; /*0x442119*/
        v18 = v15; /*0x44211d*/
      }
    }
    v27[0] = v12 - DSurface_ViewBounds.field_0; /*0x442150*/
    v27[1] = v14 - (unsigned int)DSurface_ViewBounds.field_4; /*0x44215a*/
    v19 = Rect::Construct(&v31, v27, v18, v16); /*0x44215e*/
    Cell::CreateCrater(*v19, v19[1], v19[2], v19[3], 0); /*0x442184*/
    v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23); /*0x442193*/
    result = Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v20); /*0x44219f*/
  }
  LOBYTE(result) = v1->Type->__pad_1714[83]; /*0x4421aa*/
  if ( (_BYTE)result ) /*0x4421b2*/
  {
    v21 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))v1->TechnoClass + 43))(v1, v30); /*0x4421bd*/
    v23[0] = *v21 / 256; /*0x4421d3*/
    v22 = v1->Type; /*0x4421e4*/
    v23[1] = v21[1] / 256; /*0x4421ed*/
    if ( v22->__pad_1714[85] ) /*0x4421f2*/
      return BuildingClass::SearchPlacement((BuildingClass *)&stru_87F5F0.__pad_58[416], *(int *)v23, 0); /*0x442208*/
    else
      return BuildingClass::SearchPlacement((BuildingClass *)&stru_87F5F0.__pad_58[416], *(int *)v23, 20); /*0x442221*/
  }
  return result; /*0x44220d*/
}



// ==== 0x00442230  BuildingClass::ProcessAttack  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessAttack(BuildingClass *this)
{
  int v1; // ebp
  int v3; // ebx
  int v4; // eax
  int Member; // edi
  int v6; // eax
  _BYTE *Type; // eax
  double v9; // st7
  int v10; // eax
  int v11; // edi
  void *v12; // eax
  int v13; // eax
  _DWORD *captureManager; // ecx
  int v15; // ebx
  _DWORD *v16; // edi
  _DWORD *v17; // ebp
  _DWORD *v18; // eax
  int *v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // edi
  int LightSource; // ecx
  int v24; // ecx
  int v25; // eax
  int v28; // edi
  int ptr_0; // edx
  _WORD *v30; // eax
  int FoundationHeight; // edi
  int FoundationWidth; // eax
  AnimClass *v33; // ebp
  int v34; // eax
  void **v35; // edi
  void **v36; // eax
  AnimClass *v37; // ebp
  void **v38; // edi
  AnimClass *v39; // ebp
  void **v40; // edi
  char v41; // al
  unsigned __int16 v42; // dx
  int v43; // eax
  BOOL v46; // ebx
  int v47; // ebp
  int v48; // edi
  AnimTypeClass *v49; // eax
  int v50; // eax
  BOOL v53; // ebx
  int *v54; // edx
  int v55; // ebp
  int v56; // edi
  AnimTypeClass *v57; // eax
  int *v58; // [esp+14h] [ebp-B4h]
  int *v59; // [esp+14h] [ebp-B4h]
  int *v60; // [esp+14h] [ebp-B4h]
  int v61; // [esp+1Ch] [ebp-ACh]
  int v62; // [esp+1Ch] [ebp-ACh]
  void *v63; // [esp+2Ch] [ebp-9Ch]
  char v64; // [esp+30h] [ebp-98h]
  __int64 v65; // [esp+34h] [ebp-94h]
  int *Anims; // [esp+3Ch] [ebp-8Ch] BYREF
  void **v67; // [esp+40h] [ebp-88h] BYREF
  void *Block; // [esp+44h] [ebp-84h]
  int v69; // [esp+48h] [ebp-80h]
  int v70; // [esp+4Ch] [ebp-7Ch]
  int v71; // [esp+50h] [ebp-78h]
  int v72; // [esp+54h] [ebp-74h]
  int v73; // [esp+58h] [ebp-70h] BYREF
  int v74; // [esp+5Ch] [ebp-6Ch]
  int v75; // [esp+60h] [ebp-68h] BYREF
  int v76; // [esp+64h] [ebp-64h]
  int GroundHeight; // [esp+68h] [ebp-60h]
  int ProductionFrame; // [esp+6Ch] [ebp-5Ch]
  _DWORD v79[3]; // [esp+70h] [ebp-58h] BYREF
  char v80[4]; // [esp+7Ch] [ebp-4Ch] BYREF
  int v81[3]; // [esp+80h] [ebp-48h] BYREF
  int v82[3]; // [esp+8Ch] [ebp-3Ch] BYREF
  int v83[3]; // [esp+98h] [ebp-30h] BYREF
  int v84[3]; // [esp+A4h] [ebp-24h] BYREF
  char v85[12]; // [esp+B0h] [ebp-18h] BYREF
  char v86[12]; // [esp+BCh] [ebp-Ch] BYREF
  double v87; // [esp+CCh] [ebp+4h]
  double v88; // [esp+D4h] [ebp+Ch]
  int *v89; // [esp+DCh] [ebp+14h]
  int v90; // [esp+E0h] [ebp+18h]
  _BYTE *v91; // [esp+E4h] [ebp+1Ch]

  v1 = HIDWORD(v88); /*0x442238*/
  v74 = 0; /*0x442245*/
  if ( this == (BuildingClass *)HIDWORD(v88) /*0x442262*/
    && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)HIDWORD(v88) + 132))(HIDWORD(v88)) + 3232) )
  {
    return v74; /*0x442c06*/
  }
  BuildingClass::GetHealthRatio(this); /*0x44226a*/
  __asm { fstp st } /*0x442271*/
  v3 = 0; /*0x442278*/
  ProductionFrame = BuildingClass::GetProductionFrame(this); /*0x44227a*/
  if ( HIDWORD(v88) && !(*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->ptr_0 + 128))(this) ) /*0x442286*/
  {
    *(_DWORD *)(this->owner + 21720) = dword_A8ED84; /*0x44229c*/
    *(_DWORD *)(this->owner + 21724) = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)HIDWORD(v88) + 60))(HIDWORD(v88)) /*0x4422b4*/
                                                 + 48);
    TechnoClass::EvaluateMission(this, SHIDWORD(v88)); /*0x4422bc*/
  }
  Anims = (int *)(*(int (__thiscall **)(BuildingClass *, _DWORD))(this->ptr_0 + 264))(this, 0); /*0x4422d2*/
  EventClass::resetEvent((EventClass *)&v67, 0, 0); /*0x4422d6*/
  v4 = this->radioLinks[2]; /*0x4422db*/
  v67 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x4422e1*/
  v72 = 10; /*0x4422eb*/
  v71 = 0; /*0x4422f3*/
  if ( v4 > 0 ) /*0x4422f7*/
  {
    do /*0x442356*/
    {
      Member = Team::GetMember((Team *)this, v3); /*0x442301*/
      if ( Member /*0x442334*/
        && (v71 < v69
         || (BYTE1(v70) || !v69)
         && v72 > 0
         && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v67[2])(&v67, v72 + v69, 0)) )
      {
        v6 = v71++; /*0x44233f*/
        *((_DWORD *)Block + v6) = Member; /*0x44234a*/
      }
      ++v3; /*0x442353*/
    }
    while ( v3 < this->radioLinks[2] ); /*0x442356*/
  }
  Type = (_BYTE *)this->Type; /*0x442358*/
  if ( Type[5823] && !(_BYTE)v89 ) /*0x442371*/
  {
    v67 = &VectorClass<TechnoClass *>::`vftable'; /*0x442377*/
    if ( Block && BYTE1(v70) ) /*0x442389*/
    {
      __3_YAXPAX_Z(Block); /*0x44238c*/
      return 0; /*0x4423a0*/
    }
    return 0; /*0x442389*/
  }
  if ( Type[5814] && Type[563] ) /*0x4423ad*/
  {
    v67 = &VectorClass<TechnoClass *>::`vftable'; /*0x4423bb*/
    if ( Block && BYTE1(v70) ) /*0x4423cd*/
      __3_YAXPAX_Z(Block); /*0x4423d0*/
    return 0; /*0x4423e4*/
  }
  if ( this->health ) /*0x4423e7*/
  {
    v9 = TechnoClass::ReceiveDamage_Shield(this, v87, v88, v89, v90, v91, v63, v64, v65); /*0x442425*/
    v11 = v10; /*0x44242a*/
    LOBYTE(v10) = this->isAliveFlag[0]; /*0x44242c*/
    v74 = v11; /*0x442434*/
    if ( !(_BYTE)v10 ) /*0x442438*/
    {
      v67 = &VectorClass<TechnoClass *>::`vftable'; /*0x44243e*/
      if ( Block && BYTE1(v70) ) /*0x442450*/
        __3_YAXPAX_Z(Block); /*0x442453*/
      return v11; /*0x442467*/
    }
    switch ( v11 ) /*0x442476*/
    {
      case 2: /*0x442476*/
        _EAX = this->ambientParticles; /*0x4426ac*/
        if ( _EAX ) /*0x4426b4*/
        {
          __asm /*0x4426b6*/
          {
            fld dword ptr [eax+0E8h]
            fmul ds:flt_7E4460
            fstp dword ptr [eax+0E8h]
          }
          *(float *)(_EAX + 232) = _ET1; /*0x4426c2*/
        }
        goto LABEL_64; /*0x4426c2*/
      case 3: /*0x442476*/
LABEL_64:
        if ( *(_DWORD *)((*(int (__thiscall **)(BuildingClass *))(this->ptr_0 + 132))(this) + 1336) == -1 ) /*0x4426d9*/
        {
          v79[0] = this->location[0]; /*0x4426e5*/
          v79[1] = this->location[1]; /*0x4426f0*/
          v79[2] = this->location[2]; /*0x4426fc*/
          PlayAudioAt2(*(_DWORD *)&dword_8871E0->__pad_704[16], v79, 0); /*0x442706*/
        }
        while ( *(_WORD *)Anims != 0x7FFF || *((_WORD *)Anims + 1) != 0x7FFF ) /*0x44271c*/
        {
          v28 = *Anims; /*0x442722*/
          ptr_0 = this->ptr_0; /*0x442724*/
          ++Anims; /*0x44272b*/
          v73 = v28; /*0x442734*/
          v30 = (_WORD *)(*(int (__thiscall **)(BuildingClass *, char *))(ptr_0 + 440))(this, v80); /*0x442738*/
          LOWORD(v28) = *v30 + v28; /*0x44273e*/
          LOWORD(v30) = HIWORD(v73) + v30[1]; /*0x442745*/
          GroundHeight = 0; /*0x44274a*/
          v75 = ((__int16)v28 << 8) + 128; /*0x442768*/
          v76 = ((__int16)v30 << 8) + 128; /*0x442778*/
          GroundHeight = Cell::GetGroundHeight(&v75); /*0x442781*/
          if ( *(_BYTE *)(LODWORD(v88) + 330) ) /*0x442785*/
          {
            FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0); /*0x4427a6*/
            FoundationWidth = BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)this->Type); /*0x4427a8*/
            switch ( Random::Range( /*0x4427d7*/
                       (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                       0,
                       FoundationHeight + FoundationWidth + 5) )
            {
              case 1: /*0x4427d7*/
              case 2: /*0x4427d7*/
              case 3: /*0x4427d7*/
              case 4: /*0x4427d7*/
              case 5: /*0x4427d7*/
                v33 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4427e8*/
                if ( v33 ) /*0x4427ef*/
                {
                  v34 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 3); /*0x442804*/
                  v35 = (void **)dword_8871E0->Easy[11]; /*0x442818*/
                  v61 = v34; /*0x44281e*/
                  v58 = RandomCoordScatter(v81, &v75, v9, 96, 0); /*0x442834*/
                  v36 = AnimClass::ctor(v33, *v35, v58, 0, v61, (void *)0x600, 0, 0); /*0x442836*/
                  goto LABEL_76; /*0x442836*/
                }
                break; /*0x442836*/
              case 6: /*0x4427d7*/
              case 7: /*0x4427d7*/
              case 8: /*0x4427d7*/
                v37 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x442845*/
                if ( v37 ) /*0x44284c*/
                {
                  v62 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 3); /*0x44287b*/
                  v38 = (void **)(dword_8871E0->Easy[11] + 4); /*0x44288a*/
                  v59 = RandomCoordScatter(v82, &v75, v9, 96, 0); /*0x442894*/
                  v36 = AnimClass::ctor(v37, *v38, v59, 0, v62, (void *)0x600, 0, 0); /*0x442896*/
                  goto LABEL_76; /*0x442896*/
                }
                break; /*0x442896*/
              case 9: /*0x4427d7*/
                v39 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4428a2*/
                if ( v39 ) /*0x4428a9*/
                {
                  v40 = (void **)(dword_8871E0->Easy[11] + 8); /*0x4428d6*/
                  v60 = RandomCoordScatter(v84, &v75, v9, 96, 0); /*0x4428e0*/
                  v36 = AnimClass::ctor(v39, *v40, v60, 0, 1, (void *)0x600, 0, 0); /*0x4428e4*/
LABEL_76:
                  if ( v36 ) /*0x4428eb*/
                    BuildingClass::AimTurret((BuildingClass *)v36, this); /*0x4428f4*/
                }
                break; /*0x4428f9*/
              default:
                continue;
            }
          }
        }
        v1 = HIDWORD(v88); /*0x4428fe*/
        break; /*0x4428fe*/
      case 4: /*0x442476*/
        if ( this->bunkerLinkedUnit ) /*0x4424a2*/
        {
          v13 = ((int (__thiscall *)(void ***, int *))v67[4])(&v67, &this->bunkerLinkedUnit); /*0x4424bb*/
          if ( v13 != -1 && v13 < v71 && v13 < --v71 ) /*0x4424d2*/
          {
            do /*0x4424e6*/
            {
              ++v13; /*0x4424d8*/
              *((_DWORD *)Block + v13 - 1) = *((_DWORD *)Block + v13); /*0x4424dc*/
            }
            while ( v13 < v71 ); /*0x4424e6*/
          }
          BuildingClass::RemoveLimpet(this); /*0x4424ea*/
        }
        captureManager = (_DWORD *)this->captureManager; /*0x4424ef*/
        if ( captureManager ) /*0x4424f7*/
          CaptureManager::FreeAll(captureManager); /*0x4424f9*/
        if ( this->locomotorTarget ) /*0x4424fe*/
          TechnoClass::EjectPassengers(this, 1); /*0x44250c*/
        v15 = 0; /*0x442515*/
        if ( v71 > 0 ) /*0x442519*/
        {
          do /*0x4425fb*/
          {
            v16 = (_DWORD *)*((_DWORD *)Block + v15); /*0x442523*/
            v17 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v16 + 72))(v16, v85); /*0x442537*/
            v18 = (_DWORD *)(*(int (__thiscall **)(BuildingClass *, char *))(this->ptr_0 + 72))(this, v86); /*0x442543*/
            v19 = Coord::Subtract((Coord *)v83, *v18 - *v17, v18[1] - v17[1], v18[2] - v17[2]); /*0x442564*/
            v75 = *v19; /*0x44256b*/
            v76 = v19[1]; /*0x442576*/
            GroundHeight = v19[2]; /*0x44257d*/
            if ( (int)Coord::Length((Coord *)&v75) < 256 || *(_BYTE *)(this->Type + 5835) ) /*0x442593*/
            {
              v20 = (*(int (__thiscall **)(_DWORD *))(*v16 + 132))(v16); /*0x4425ba*/
              v21 = *v16; /*0x4425c6*/
              v73 = 10 * *(_DWORD *)(v20 + 160); /*0x4425d6*/
              (*(void (__thiscall **)(_DWORD *, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v21 + 364))( /*0x4425ee*/
                v16,
                &v73,
                0,
                *(_DWORD *)&dword_8871E0->__pad_C3C[876],
                0,
                1,
                1,
                0);
            }
            else
            {
              (*(void (__thiscall **)(BuildingClass *, int, _DWORD *))(this->ptr_0 + 632))(this, 23, v16); /*0x4425a4*/
              v16[320] = 0; /*0x4425aa*/
            }
            ++v15; /*0x4425f8*/
          }
          while ( v15 < v71 ); /*0x4425fb*/
          v1 = HIDWORD(v88); /*0x442601*/
        }
        v22 = v69; /*0x44260c*/
        ((void (__thiscall *)(void ***))v67[3])(&v67); /*0x442614*/
        ((void (__thiscall *)(void ***, int, _DWORD))v67[2])(&v67, v22, 0); /*0x442622*/
        if ( *(_BYTE *)(this->Type + 5499) ) /*0x44262b*/
          BuildingClass::UnloadUnits(this, 0, 0); /*0x44263b*/
        LightSource = this->LightSource; /*0x442640*/
        if ( LightSource ) /*0x442648*/
          MapClass::ScrollOnce(LightSource, 0); /*0x44264c*/
        (*(void (__thiscall **)(BuildingClass *, _DWORD, int, int *, int *))(this->ptr_0 + 1260))( /*0x442665*/
          this,
          0,
          v1,
          v89,
          Anims);
        v24 = this->C4Timer[0]; /*0x44266b*/
        v25 = this->C4Timer[2]; /*0x442671*/
        if ( v24 == -1 ) /*0x44267a*/
          goto LABEL_60; /*0x44267a*/
        if ( (int)dword_A8ED84 - v24 < v25 ) /*0x442686*/
        {
          v25 -= (int)dword_A8ED84 - v24; /*0x44268c*/
LABEL_60:
          if ( v25 > 0 ) /*0x442690*/
          {
            (*(void (__thiscall **)(BuildingClass *))(this->ptr_0 + 248))(this); /*0x44269a*/
            BuildingClass::AfterDestruction(this); /*0x4426a2*/
          }
        }
        break; /*0x4426a7*/
      case 5: /*0x442476*/
        v12 = Block; /*0x44247d*/
        v67 = &VectorClass<TechnoClass *>::`vftable'; /*0x442481*/
        if ( Block && BYTE1(v70) ) /*0x442497*/
          goto LABEL_126; /*0x442497*/
        return v74; /*0x442497*/
      default:
        break;
    }
  }
  if ( this->isAliveFlag[0] ) /*0x442905*/
  {
    if ( v1 ) /*0x442944*/
    {
      if ( !v74 ) /*0x442950*/
        goto LABEL_113; /*0x442950*/
      if ( !*(_BYTE *)(this->Type + 562) /*0x44296a*/
        && !(*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->ptr_0 + 128))(this) )
      {
        HouseClass::NotifyUnderAttack((HouseClass *)this->owner, this); /*0x44297b*/
      }
      this->OwnerCountryIndex = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v1 + 60))(v1) + 48); /*0x44298b*/
      if ( this->currentMission != 19 /*0x4429fa*/
        && !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, v1)
        && *(_DWORD *)(*(int (__thiscall **)(BuildingClass *, _DWORD))(this->ptr_0 + 1016))(this, 0)
        && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(BuildingClass *, _DWORD))(this->ptr_0 + 1016))(
                                                this,
                                                0)
                                 + 160)
                     + 676)
        && (!this->target
         || !(*(unsigned __int8 (__thiscall **)(BuildingClass *, int))(this->ptr_0 + 940))(this, this->target)) )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 44))(v1) == 2 /*0x442a2a*/
          || (unsigned __int8)House::IsCurrentPlayer((House *)this->owner)
          && !LOBYTE(dword_8871E0->ElevationBonusCap[0]) )
        {
          if ( !(unsigned __int8)TimerClass::Active((int)this->primaryFacing) /*0x442a56*/
            && (*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->ptr_0 + 848))(this) )
          {
            LOWORD(v73) = 0; /*0x442a66*/
            v41 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x442a73*/
            LOBYTE(v42) = 0; /*0x442a78*/
            HIBYTE(v42) = v41; /*0x442a7e*/
            v43 = v73; /*0x442a80*/
            BYTE1(v43) = 0; /*0x442a84*/
            Anims = (int *)(v43 | v42); /*0x442a8c*/
            FacingClass::Update((char *)this->primaryFacing, &Anims); /*0x442a90*/
          }
        }
        else
        {
          (*(void (__thiscall **)(BuildingClass *, int))(this->ptr_0 + 968))(this, v1); /*0x442a39*/
        }
      }
    }
    if ( v74 ) /*0x442a9b*/
    {
      BuildingClass::GetHealthRatio(this); /*0x442aa3*/
      _EDX = dword_8871E0; /*0x442aa8*/
      __asm /*0x442aae*/
      {
        fcomp qword ptr [edx+1700h]
        fnstsw ax
      }
      v46 = (_AX & 0x4100) != 0; /*0x442ab9*/
      if ( this->IsDamaged[0] != v46 ) /*0x442aca*/
      {
        v47 = 0; /*0x442ad2*/
        this->IsDamaged[0] = v46; /*0x442ad4*/
        v48 = 0; /*0x442ada*/
        Anims = this->Anims; /*0x442adc*/
        do /*0x442b35*/
        {
          if ( *Anims ) /*0x442ae4*/
          {
            if ( v46 ) /*0x442aeb*/
            {
              _EDX = (RulesClass *)this->Type; /*0x442aed*/
              v49 = (AnimTypeClass *)&_EDX->__pad_C3C[v48 + 800]; /*0x442af3*/
            }
            else
            {
              v49 = (AnimTypeClass *)(v48 + this->Type + 3916); /*0x442b02*/
            }
            if ( v49 && LOBYTE(v49->ptr_0) ) /*0x442b0d*/
              BuildingClass::PlayAnim(this, (int)_EDX, v49, v47, v46, 0, 0); /*0x442b1b*/
          }
          v48 += 68; /*0x442b24*/
          ++v47; /*0x442b27*/
          _EDX = (RulesClass *)++Anims; /*0x442b28*/
        }
        while ( v48 < 1428 ); /*0x442b35*/
      }
    }
LABEL_113:
    v50 = BuildingClass::GetProductionFrame(this); /*0x442b37*/
    if ( ProductionFrame != v50 ) /*0x442b42*/
    {
      this->needsRedraw[0] = 1; /*0x442b4a*/
      BuildingClass::GetHealthRatio(this); /*0x442b51*/
      _ECX = dword_8871E0; /*0x442b56*/
      __asm /*0x442b5c*/
      {
        fcomp qword ptr [ecx+1700h]
        fnstsw ax
      }
      v53 = (_AX & 0x4100) != 0; /*0x442b67*/
      if ( this->IsDamaged[0] != v53 ) /*0x442b78*/
      {
        v54 = this->Anims; /*0x442b7a*/
        v55 = 0; /*0x442b80*/
        this->IsDamaged[0] = v53; /*0x442b82*/
        v56 = 0; /*0x442b88*/
        Anims = this->Anims; /*0x442b8a*/
        do /*0x442be3*/
        {
          if ( *Anims ) /*0x442b92*/
          {
            if ( v53 ) /*0x442b99*/
            {
              v57 = (AnimTypeClass *)(v56 * 4 + this->Type + 3932); /*0x442ba1*/
            }
            else
            {
              v54 = (int *)this->Type; /*0x442baa*/
              v57 = (AnimTypeClass *)&v54[v56 + 979]; /*0x442bb0*/
            }
            if ( v57 && LOBYTE(v57->ptr_0) ) /*0x442bbb*/
              BuildingClass::PlayAnim(this, (int)v54, v57, v55, v53, 0, 0); /*0x442bc9*/
          }
          v56 += 17; /*0x442bd2*/
          ++v55; /*0x442bd5*/
          v54 = ++Anims; /*0x442bd6*/
        }
        while ( v56 < 357 ); /*0x442be3*/
      }
    }
    v12 = Block; /*0x442be5*/
    v67 = &VectorClass<TechnoClass *>::`vftable'; /*0x442be9*/
    if ( Block && BYTE1(v70) ) /*0x442bfb*/
LABEL_126:
      __3_YAXPAX_Z(v12); /*0x442bfd*/
    return v74; /*0x442bfe*/
  }
  v67 = &VectorClass<TechnoClass *>::`vftable'; /*0x442913*/
  if ( Block && BYTE1(v70) ) /*0x442925*/
    __3_YAXPAX_Z(Block); /*0x442928*/
  return 4; /*0x442396*/
}



// ==== 0x00442C40  BuildingClass::Update  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Update(BuildingClass *this)
{
  int v1; // edi
  BuildingClass *owner; // ecx
  BuildingTypeClass *Type; // eax
  int Strength; // ecx
  int InitialAmmo; // ecx
  HouseClass *v7; // eax
  BuildingTypeClass *v8; // eax
  int result; // eax
  TechnoClass *v10; // [esp+0h] [ebp-4h]

  TechnoClass::Update(v10, v1); /*0x442c43*/
  owner = (BuildingClass *)this->?; /*0x442c48*/
  if ( owner ) /*0x442c50*/
  {
    this->OwnerCountryIndex = owner->?[3].?; /*0x442c5c*/
    BuildingClass::PowerUpdate(owner, this); /*0x442c62*/
  }
  Type = this->Type; /*0x442c67*/
  if ( Type ) /*0x442c6f*/
  {
    Strength = Type->?; /*0x442c75*/
    this->? = Strength; /*0x442c7b*/
    this->? = Strength; /*0x442c7e*/
    InitialAmmo = Type->?; /*0x442c81*/
    if ( InitialAmmo == -1 ) /*0x442c8a*/
      InitialAmmo = Type->?; /*0x442c8c*/
    this->? = InitialAmmo; /*0x442c92*/
    BuildingTypeClass::GetPowerOutput((BuildingTypeClass *)this->?, Type->?); /*0x442ca5*/
    if ( (*((int (__thiscall **)(BuildingTypeClass *))this->Type->TechnoTypeClass + 48))(this->Type) ) /*0x442cb2*/
    {
      BuildingTypeClass::IsPowered(this->Type); /*0x442cca*/
      this->BuildingClass_field_bool_6E9 = 1; /*0x442ccf*/
    }
    else
    {
      this->BuildingClass_field_bool_6DC = 0; /*0x442cbc*/
    }
    v7 = this->?; /*0x442cd6*/
    if ( v7 ) /*0x442cde*/
    {
      if ( v7->warFactoryInfiltrated ) /*0x442ce0*/
      {
        v8 = this->Type; /*0x442cea*/
        if ( !v8->?[1] && v8->? && v8->?[0] ) /*0x442d04*/
          Power::ChangedHouse((Power *)this->?, 1); /*0x442d16*/
      }
    }
  }
  result = (int)this->Type; /*0x442d1b*/
  if ( result && *(_BYTE *)(result + 5808) ) /*0x442d25*/
  {
    result = (int)FootClass_Array.?; /*0x442d2f*/
    if ( *(int *)&FootClass_Array.? < (int)FootClass_Array.? /*0x442d6b*/
      || (BYTE1(FootClass_Array.?) || !FootClass_Array.?)
      && (int)FootClass_Array.? > 0
      && (result = (*(int (__thiscall **)(char *, char *, _DWORD))(*(_DWORD *)&FootClass_Array.? + 8))(
                     &FootClass_Array.?,
                     (char *)FootClass_Array.? + (unsigned int)FootClass_Array.?,
                     0),
          (_BYTE)result) )
    {
      result = (*(_DWORD *)&FootClass_Array.?)++; /*0x442d73*/
      *(_DWORD *)(*(_DWORD *)&FootClass_Array.? + 4 * result) = this; /*0x442d82*/
    }
  }
  return result; /*0x442d85*/
}



// ==== 0x00442D90  BuildingClass::EjectCrew  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::EjectCrew(BuildingClass *this, _BYTE *a2)
{
  double v2; // st7
  int v4; // edx
  int (__thiscall **ptr_0)(BuildingClass *, _DWORD); // eax
  _WORD *v6; // ebp
  InfantryClass *C4AppliedBy; // eax
  BuildingTypeClass *Type; // eax
  BuildingTypeClass *i; // esi
  _WORD *v10; // ecx
  __int16 v11; // ax
  CellClass *v12; // eax
  int *v13; // eax
  CellClass *v14; // eax
  int (__thiscall **v15)(BuildingClass *); // eax
  int v16; // eax
  int v17; // edx
  char NoCrew; // al
  _DWORD *Value; // eax
  void *v20; // edx
  _BYTE *v21; // eax
  _WORD *v22; // eax
  __int16 v23; // cx
  __int16 v24; // dx
  bool *v25; // eax
  HouseClass *owner; // edx
  int v27; // esi
  int v28; // ebp
  int v29; // eax
  CellClass *v30; // eax
  int *v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // eax
  int v36; // edx
  int *v37; // eax
  int v38; // kr08_4
  int v39; // eax
  int *v40; // eax
  int v41; // kr0C_4
  int v42; // eax
  __int16 v44[2]; // [esp+14h] [ebp-7Ch] BYREF
  int v45; // [esp+18h] [ebp-78h]
  int v46; // [esp+1Ch] [ebp-74h]
  int v47; // [esp+20h] [ebp-70h]
  int v48; // [esp+24h] [ebp-6Ch]
  _WORD *v49; // [esp+28h] [ebp-68h]
  bool *v50; // [esp+2Ch] [ebp-64h] BYREF
  int v51; // [esp+30h] [ebp-60h] BYREF
  int v52; // [esp+34h] [ebp-5Ch]
  int v53; // [esp+38h] [ebp-58h]
  int v54; // [esp+3Ch] [ebp-54h] BYREF
  int v55; // [esp+40h] [ebp-50h]
  int v56; // [esp+44h] [ebp-4Ch]
  int v57[3]; // [esp+48h] [ebp-48h] BYREF
  int v58[3]; // [esp+54h] [ebp-3Ch] BYREF
  _DWORD v59[3]; // [esp+60h] [ebp-30h] BYREF
  int v60[3]; // [esp+6Ch] [ebp-24h] BYREF
  int v61[3]; // [esp+78h] [ebp-18h] BYREF
  int v62[3]; // [esp+84h] [ebp-Ch] BYREF

  v4 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, bool **))this->TechnoClass + 110))(this, &v50); /*0x442da8*/
  ptr_0 = (int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass; /*0x442daa*/
  v45 = v4; /*0x442db1*/
  v6 = (_WORD *)ptr_0[66](this, 0); /*0x442dbb*/
  C4AppliedBy = this->C4AppliedBy; /*0x442dbd*/
  v46 = 2; /*0x442dc5*/
  if ( C4AppliedBy ) /*0x442dcd*/
    v46 = 1; /*0x442dcf*/
  if ( this->HasBeenCaptured ) /*0x442dd7*/
    v46 += 6; /*0x442ddf*/
  v47 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 180))(this); /*0x442dee*/
  Type = this->Type; /*0x442df2*/
  if ( Type->UnitAbsorb || Type->InfantryAbsorb )
  {
    Type = (BuildingTypeClass *)this->?[0]; /*0x442e0c*/
    if ( (int)Type > 0 )
    {
      Type = (BuildingTypeClass *)LinkedList::Pop((LinkedList *)this->?); /*0x442e20*/
      for ( i = Type; Type; i = Type )
      {
        v10 = v6; /*0x442e34*/
        v6 += 2; /*0x442e38*/
        v11 = *v10 + v45; /*0x442e3b*/
        LOWORD(v10) = HIWORD(v45) + v10[1]; /*0x442e42*/
        v53 = 0; /*0x442e47*/
        v51 = (v11 << 8) + 128; /*0x442e62*/
        v52 = ((__int16)v10 << 8) + 164; /*0x442e66*/
        if ( (*((int (__thiscall **)(BuildingTypeClass *))i->TechnoTypeClass + 11))(i) == 1 ) /*0x442e74*/
        {
          v12 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v51); /*0x442e80*/
          v13 = (int *)(*(int (__thiscall **)(CellClass *, _DWORD *))(v12->mapCoords[0] + 72))(v12, v59); /*0x442e8e*/
        }
        else
        {
          v14 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v51); /*0x442ebe*/
          v13 = ObjectPlacement::CalcPosition((ObjectPlacement *)v14, v58, &v51, 0, 0, 0); /*0x442ec5*/
        }
        v51 = *v13; /*0x442e93*/
        v52 = v13[1]; /*0x442e9a*/
        v53 = v13[2]; /*0x442ea1*/
        ++dword_A8E7AC; /*0x442eeb*/
        i->?[40] = this->?; /*0x442ef7*/
        v54 = this->?[0]; /*0x442eff*/
        v15 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x442f03*/
        v55 = this->?[1]; /*0x442f08*/
        v56 = this->?[2]; /*0x442f11*/
        v16 = v15[111](this); /*0x442f15*/
        v17 = *(_DWORD *)((*(int (__thiscall **)(int, int *))(*(_DWORD *)v16 + 72))(v16, v57) + 8); /*0x442f27*/
        NoCrew = this->NoCrew; /*0x442f2a*/
        v56 = v17; /*0x442f32*/
        if ( NoCrew
          || (Value = ProgressTimer::GetValue((ProgressTimer *)this->?, &v50),
              !(*((unsigned __int8 (__thiscall **)(BuildingTypeClass *, int *, _DWORD))i->TechnoTypeClass + 54))(
                 i,
                 &v54,
                 (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1))) )
        {
          if ( a2 )
            v21 = (a2[20] & 1) != 0 ? a2 : 0;
          else
            v21 = 0; /*0x442fd0*/
          (*((void (__thiscall **)(BuildingTypeClass *, _BYTE *))i->TechnoTypeClass + 56))(i, v21); /*0x442fe5*/
          (*((void (__thiscall **)(BuildingTypeClass *))i->TechnoTypeClass + 62))(i); /*0x442fef*/
        }
        else
        {
          if ( !LOBYTE(i->?[2]) ) /*0x442f6d*/
          {
            ++*(_DWORD *)(*(_DWORD *)&i->?[9] + 756); /*0x442f82*/
            LOBYTE(i->?[2]) = 1; /*0x442f88*/
          }
          v20 = i->TechnoTypeClass; /*0x442f8f*/
          BYTE1(i->?[2]) = 0; /*0x442f9b*/
          (*((void (__thiscall **)(BuildingTypeClass *, _DWORD *, int, _DWORD))v20 + 93))(i, &g_BuildingClassPool, 1, 0); /*0x442fa1*/
          if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x442fad*/
            (*((void (__thiscall **)(BuildingTypeClass *, int, _DWORD))i->TechnoTypeClass + 122))(i, 15, 0); /*0x442fbd*/
        }
        --dword_A8E7AC; /*0x442ffc*/
        Type = (BuildingTypeClass *)LinkedList::Pop((LinkedList *)this->?); /*0x443008*/
      }
    }
  }
  if ( v47 ) /*0x44301b*/
  {
    while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x44302f*/
    {
      v22 = v6; /*0x44303a*/
      v6 += 2; /*0x44303c*/
      v23 = *v22 + v45; /*0x44303f*/
      v24 = HIWORD(v45) + v22[1]; /*0x443046*/
      v49 = v6; /*0x44304b*/
      LOWORD(v48) = v23; /*0x44304f*/
      HIWORD(v48) = v24; /*0x443058*/
      *(_DWORD *)v44 = v48; /*0x443067*/
      v25 = (bool *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v44); /*0x44306b*/
      owner = this->?; /*0x443070*/
      v50 = v25; /*0x443076*/
      if ( !owner->isGameOver && v47 > 0 && Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v46) == 1 ) /*0x4430aa*/
      {
        v27 = 0; /*0x4430b4*/
        v28 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 195))(this); /*0x4430bc*/
        if ( v28 ) /*0x4430c0*/
        {
          v29 = __2_YAPAXI_Z(0x6F0u); /*0x4430c7*/
          if ( v29 ) /*0x4430d1*/
            v27 = InfantryClass::Construct(v29, v28, (IUnknown *)this->?); /*0x4430e2*/
          else
            v27 = 0; /*0x4430e6*/
        }
        Debug::Log(); /*0x443101*/
        if ( v27 ) /*0x44310b*/
        {
          if ( this->BuildingClass_field_bool_6E9 && *(_BYTE *)(*(_DWORD *)(v27 + 1728) + 3230) ) /*0x44311f*/
            *(_BYTE *)(v27 + 1753) = 1; /*0x443127*/
          ++dword_A8E7AC; /*0x443141*/
          v53 = 0; /*0x44315a*/
          v51 = (v44[0] << 8) + 128; /*0x44315e*/
          v52 = (v44[1] << 8) + 164; /*0x443166*/
          v30 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v51); /*0x44317b*/
          v31 = ObjectPlacement::CalcPosition((ObjectPlacement *)v30, v60, &v51, 0, 0, 0); /*0x443182*/
          v51 = *v31; /*0x443191*/
          v32 = v31[1]; /*0x443197*/
          v52 = v32; /*0x44319a*/
          v33 = v31[2]; /*0x44319e*/
          v53 = v33; /*0x4431a1*/
          if ( v51 == g_BuildingClassPool && v32 == dword_89C84C && v33 == dword_89C850 /*0x4431c5*/
            || !(*(unsigned __int8 (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v27 + 216))(v27, &v51, 0) )
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v27 + 32))(v27, 1); /*0x443285*/
          }
          else
          {
            Debug::Log(); /*0x4431d8*/
            v34 = *(_DWORD *)(*(_DWORD *)(v27 + 1728) + 160); /*0x4431eb*/
            --v47; /*0x4431f1*/
            v35 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 5, v34); /*0x443203*/
            v36 = *(_DWORD *)v27; /*0x443208*/
            *(_DWORD *)(v27 + 108) = v35; /*0x443214*/
            (*(void (__thiscall **)(int, _DWORD *, int, _DWORD))(v36 + 372))(v27, &g_BuildingClassPool, 1, 0); /*0x443217*/
            if ( !a2 || (unsigned __int8)Object::IsAlliedWithObjectSimpleHouse((Object *)this->?, a2) ) /*0x44322f*/
            {
              if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x443258*/
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v27 + 488))(v27, 2, 0); /*0x443268*/
              else
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v27 + 488))(v27, 15, 0); /*0x443277*/
            }
            else
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v27 + 488))(v27, 1, 0); /*0x44323f*/
              (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v27 + 968))(v27, a2); /*0x44324a*/
            }
          }
          --dword_A8E7AC; /*0x443288*/
        }
        v6 = v49; /*0x44328e*/
      }
      LOBYTE(Type) = Cell::IsBuildable(v50, 1, 1, 1, -1, 0, -1, 1); /*0x4432a3*/
      if ( (_BYTE)Type ) /*0x4432aa*/
      {
        if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 50 ) /*0x4432c7*/
        {
          v58[1] = (v44[1] << 8) + 128; /*0x44337d*/
          v58[0] = (v44[0] << 8) + 128; /*0x443392*/
          v58[2] = 0; /*0x443396*/
          v40 = RandomCoordScatter(v62, v58, v2, 128, 0); /*0x44339a*/
          v41 = *v40; /*0x4433af*/
          v42 = v40[1]; /*0x4433b1*/
          v59[2] = 0; /*0x4433bb*/
          v59[0] = ((__int16)(v41 / 256) << 8) + 128; /*0x4433dd*/
          v59[1] = ((__int16)(v42 / 256) << 8) + 128; /*0x4433eb*/
          LOBYTE(Type) = TimedCreateUnitAtCoords(v59, 100, 100, 0); /*0x4433ef*/
        }
        else
        {
          v54 = (v44[0] << 8) + 128; /*0x4432e4*/
          v55 = (v44[1] << 8) + 128; /*0x4432fa*/
          v56 = 0; /*0x4432fe*/
          v37 = RandomCoordScatter(v61, &v54, v2, 128, 0); /*0x443302*/
          v38 = *v37; /*0x443317*/
          v39 = v37[1]; /*0x443319*/
          v57[2] = 0; /*0x443323*/
          v57[0] = ((__int16)(v38 / 256) << 8) + 128; /*0x443347*/
          v57[1] = ((__int16)(v39 / 256) << 8) + 128; /*0x44334b*/
          LOBYTE(Type) = StandardCreateUnitAtCoords(v57, 100, 100, 0); /*0x443358*/
        }
      }
    }
  }
  return (char)Type; /*0x4433f9*/
}



// ==== 0x00443410  BuildingClass::HandleFactoryCommand  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::HandleFactoryCommand(BuildingClass *this)
{
  int result; // eax
  _BYTE *WaypointCoords; // eax
  int v4; // eax
  char *v5; // eax
  BuildingTypeClass *Type; // eax
  _BYTE *v7; // eax
  int v8; // eax
  _BYTE *v9; // eax
  _BYTE *v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // [esp-10h] [ebp-A8h]
  char v14; // [esp-Ch] [ebp-A4h]
  int v15; // [esp-8h] [ebp-A0h]
  int v16; // [esp-8h] [ebp-A0h]
  char v17; // [esp-4h] [ebp-9Ch]
  char v18; // [esp-4h] [ebp-9Ch]
  __int16 v19[4]; // [esp+Ch] [ebp-8Ch] BYREF
  int v20; // [esp+14h] [ebp-84h] BYREF
  _BYTE v21[12]; // [esp+1Ch] [ebp-7Ch] BYREF
  char v22[112]; // [esp+28h] [ebp-70h] BYREF
  int v23; // [esp+9Ch] [ebp+4h]
  _DWORD *v24; // [esp+A0h] [ebp+8h]

  result = v23; /*0x443410*/
  switch ( v23 ) /*0x443422*/
  {
    case 5: /*0x443422*/
      result = (int)v24; /*0x443424*/
      if ( v24 ) /*0x44342d*/
      {
        result = (*((int (__thiscall **)(BuildingClass *, int, _DWORD *, _DWORD, _DWORD))this->TechnoClass + 222))( /*0x44343c*/
                   this,
                   1,
                   v24,
                   0,
                   0);
        LOBYTE(result) = 1; /*0x443442*/
        return result; /*0x44344d*/
      }
      goto LABEL_25; /*0x44342d*/
    case 4: /*0x443422*/
      if ( this->Type->Factory[0] ) /*0x44345f*/
      {
        WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v19, this); /*0x443472*/
        v15 = *(_DWORD *)WaypointCoords; /*0x443483*/
        v17 = WaypointCoords[4]; /*0x443487*/
        v4 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 14))(this); /*0x44348c*/
        v5 = EventClass::Add(v22, v4, 0x11u, v15, v17); /*0x443494*/
        if ( (int)stru_A80220.lineTrailer < 128 ) /*0x4434a3*/
        {
          qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v5, 0x6Fu); /*0x4434bf*/
          dword_A83A54[dword_A802D0] = timeGetTime(); /*0x4434d0*/
          dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x4434e7*/
          ++stru_A80220.lineTrailer; /*0x4434ed*/
        }
      }
      if ( this->Type->? ) /*0x4434ff*/
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD *, _DWORD, _DWORD))this->TechnoClass + 222))( /*0x443514*/
          this,
          16,
          v24,
          0,
          0);
      Type = this->Type; /*0x44351a*/
      if ( Type->UnitAbsorb || Type->InfantryAbsorb ) /*0x44352a*/
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD *, _DWORD, _DWORD))this->TechnoClass + 222))( /*0x44353f*/
          this,
          16,
          v24,
          0,
          0);
      result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this); /*0x443549*/
      if ( result > 0 ) /*0x443551*/
      {
        result = (*((int (__thiscall **)(BuildingClass *, int, _DWORD *, _DWORD, _DWORD))this->TechnoClass + 222))( /*0x443562*/
                   this,
                   16,
                   v24,
                   0,
                   0);
        LOBYTE(result) = 1; /*0x443568*/
        return result; /*0x443573*/
      }
      goto LABEL_25; /*0x443551*/
    case 55: /*0x443422*/
      v7 = ScriptAction::GetWaypointCoords((ScriptAction *)v19, this); /*0x443584*/
      result = (int)EventClass::Add(v22, *(_DWORD *)(this->?->BombClass_field_28 + 48), 0xAu, *(_DWORD *)v7, v7[4]); /*0x4435a8*/
      break;
    case 1: /*0x443422*/
      v8 = this->Type->Factory[0]; /*0x443627*/
      if ( v8 == 16 || v8 == 40 || v8 == 3 ) /*0x44363a*/
      {
        v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v24 + 72))(v24, v21); /*0x44369b*/
        LOWORD(v20) = *v12 / 256; /*0x4436b0*/
        HIWORD(v20) = v12[1] / 256; /*0x4436c9*/
        *(_DWORD *)v19 = v20; /*0x4436d4*/
        BuildingClass::SetRallyPoint((int)this, v19, 1); /*0x4436d8*/
        goto LABEL_25; /*0x4436d8*/
      }
      v9 = ScriptAction::GetWaypointCoords((ScriptAction *)v19, v24); /*0x443648*/
      v16 = *(_DWORD *)v9; /*0x443658*/
      v18 = v9[4]; /*0x44365e*/
      v10 = ScriptAction::GetWaypointCoords((ScriptAction *)&v20, this); /*0x443661*/
      v13 = *(_DWORD *)v10; /*0x443672*/
      v14 = v10[4]; /*0x443676*/
      v11 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 14))(this); /*0x44367b*/
      result = (int)ScenarioClass::SetEvent(v22, v11, 30, v13, v14, v16, v18); /*0x443683*/
      break;
    default:
      goto LABEL_25; /*0x44361b*/
  }
  if ( (int)stru_A80220.lineTrailer < 128 ) /*0x4435b7*/
  {
    qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, (const void *)result, 0x6Fu); /*0x4435d7*/
    dword_A83A54[dword_A802D0] = timeGetTime(); /*0x4435e8*/
    result = (int)++stru_A80220.lineTrailer; /*0x4435fe*/
    dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x443604*/
    LOBYTE(result) = 1; /*0x44360a*/
    return result; /*0x443615*/
  }
LABEL_25:
  LOBYTE(result) = 1; /*0x4436dd*/
  return result; /*0x443444*/
}



// ==== 0x004436F0  ObjectClass::HandleRallyPointCommand  this=BuildingClass  sig=csp ====
int __thiscall ObjectClass::HandleRallyPointCommand(TechnoClass *this)
{
  int result; // eax
  int ptr_0; // edi
  void *v4; // eax
  char v5; // bl
  _BYTE *WaypointCoords; // eax
  int v7; // eax
  int v8; // [esp-8h] [ebp-8Ch]
  char v9; // [esp-4h] [ebp-88h]
  char v10[8]; // [esp+Ch] [ebp-78h] BYREF
  char v11[112]; // [esp+14h] [ebp-70h] BYREF
  int v12; // [esp+88h] [ebp+4h]
  __int16 *v13; // [esp+8Ch] [ebp+8h]

  result = v12; /*0x4436f0*/
  if ( v12 == 5 ) /*0x4436ff*/
  {
    ptr_0 = this->ptr_0; /*0x443708*/
    v4 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v13); /*0x443714*/
    result = (*(int (__thiscall **)(TechnoClass *, int, void *, _DWORD, _DWORD))(ptr_0 + 888))(this, 1, v4, 0, 0); /*0x44371e*/
    LOBYTE(result) = 1; /*0x443724*/
  }
  else
  {
    if ( v12 == 6 || v12 == 1 ) /*0x443737*/
    {
      v5 = 0; /*0x443743*/
      if ( !*(_BYTE *)(this->gattlingValue + 5817) /*0x443770*/
        || (unsigned __int8)House::IsCurrentPlayer((House *)this->owner)
        && *(_DWORD *)&dword_A8B238
        && (_BYTE)dword_A8B320
        && !this->mindControlledBy )
      {
        if ( *(_DWORD *)(this->gattlingValue + 1032) /*0x443792*/
          || (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->ptr_0 + 644))(this) )
        {
          BuildingClass::SetRallyPoint((int)this, v13, 1); /*0x4437a8*/
        }
      }
      else
      {
        v5 = 1; /*0x44377a*/
      }
      result = *(_DWORD *)(this->gattlingValue + 1032); /*0x4437b3*/
      if ( result && !v5 ) /*0x4437c3*/
      {
        WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v10, this); /*0x4437ce*/
        v8 = *(_DWORD *)WaypointCoords; /*0x4437df*/
        v9 = WaypointCoords[4]; /*0x4437e3*/
        v7 = (*(int (__thiscall **)(TechnoClass *))(this->ptr_0 + 56))(this); /*0x4437e8*/
        result = (int)EventClass::Add(v11, v7, 0x16u, v8, v9); /*0x4437f0*/
        if ( *(int *)&dword_A802C8 < 128 ) /*0x4437ff*/
        {
          qmemcpy(&byte_A802D4[111 * dword_A802D0], (const void *)result, 0x6Fu); /*0x44381b*/
          dword_A83A54[dword_A802D0] = timeGetTime(); /*0x44382c*/
          result = *(_DWORD *)&dword_A802C8 + 1; /*0x443842*/
          dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x443843*/
          ++*(_DWORD *)&dword_A802C8; /*0x443849*/
        }
      }
    }
    LOBYTE(result) = 1; /*0x443850*/
  }
  return result; /*0x443726*/
}



// ==== 0x00443860  BuildingClass::SetRallyPoint  this=TechnoClass  sig=csp ====
void __thiscall BuildingClass::SetRallyPoint(int this, __int16 *a2, char a3)
{
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  char v7; // di
  int v8; // eax
  int v9; // ecx
  int TileIndex; // eax
  _DWORD *v11; // eax
  _BYTE *WaypointCoords; // eax
  _BYTE *v13; // eax
  int v14; // eax
  char *v15; // eax
  int v16; // ebp
  _DWORD *v17; // eax
  CellClass *v18; // eax
  _BYTE *v19; // eax
  _BYTE *v20; // eax
  int v21; // eax
  char *v22; // eax
  int v23; // [esp-10h] [ebp-B4h]
  int v24; // [esp-10h] [ebp-B4h]
  char v25; // [esp-Ch] [ebp-B0h]
  char v26; // [esp-Ch] [ebp-B0h]
  int v27; // [esp-8h] [ebp-ACh]
  int v28; // [esp-8h] [ebp-ACh]
  char v29; // [esp-4h] [ebp-A8h]
  char v30; // [esp-4h] [ebp-A8h]
  __int16 v31[4]; // [esp+10h] [ebp-94h] BYREF
  char v32[8]; // [esp+18h] [ebp-8Ch] BYREF
  int v33; // [esp+20h] [ebp-84h]
  __int16 v34[2]; // [esp+24h] [ebp-80h] BYREF
  _BYTE v35[8]; // [esp+28h] [ebp-7Ch] BYREF
  int v36; // [esp+30h] [ebp-74h]
  char v37[112]; // [esp+34h] [ebp-70h] BYREF

  v33 = 0; /*0x44387b*/
  v4 = 0; /*0x44387f*/
  v5 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2) + 80); /*0x443886*/
  v6 = *(_DWORD *)(this + 1312); /*0x44388c*/
  v32[0] = BYTE1(v5) & 1; /*0x443898*/
  if ( *(_DWORD *)(v6 + 3768) == 3 ) /*0x4438a5*/
  {
    v33 = 4; /*0x4438a7*/
    v4 = 9; /*0x4438af*/
  }
  if ( *(_BYTE *)(v6 + 3278) ) /*0x4438b4*/
  {
    v33 = 6; /*0x4438bc*/
    v4 = 4; /*0x4438c4*/
  }
  v7 = v32[0]; /*0x4438cf*/
  v8 = *(_DWORD *)(this + 156); /*0x4438d5*/
  v9 = *(_DWORD *)(this + 160); /*0x4438d7*/
  v36 = *(_DWORD *)(this + 164); /*0x4438dd*/
  v31[0] = v8 / 256; /*0x4438ed*/
  v31[1] = v9 / 256; /*0x443905*/
  TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v31, v4, v32[0]); /*0x443917*/
  v31[0] = 0; /*0x44391d*/
  v31[1] = 0; /*0x443922*/
  *(_DWORD *)v34 = *LayerClass::Pathfinding_Find( /*0x443965*/
                      &stru_87F5F0.__pad_58[416],
                      v33,
                      v32,
                      a2,
                      v33,
                      TileIndex,
                      v4,
                      v7,
                      1,
                      1,
                      0,
                      0,
                      0,
                      1,
                      v31,
                      0,
                      0);
  if ( *(_DWORD *)v34 != g_TerrainTypeTable ) /*0x443969*/
  {
    v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v34); /*0x443987*/
    WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v32, v11); /*0x443991*/
    v27 = *(_DWORD *)WaypointCoords; /*0x4439a1*/
    v29 = WaypointCoords[4]; /*0x4439a3*/
    v13 = ScriptAction::GetWaypointCoords((ScriptAction *)v31, (_DWORD *)this); /*0x4439aa*/
    v23 = *(_DWORD *)v13; /*0x4439bb*/
    v25 = v13[4]; /*0x4439c0*/
    v14 = (*(int (__thiscall **)(int))(this->attachedBomb)(this); /*0x4439c5*/
    v15 = ScenarioClass::SetEvent(v37, v14, 30, v23, v25, v27, v29); /*0x4439cd*/
    if ( (int)stru_A80220.lineTrailer < 128 ) /*0x4439dc*/
    {
      qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v15, 0x6Fu); /*0x4439f8*/
      dword_A83A54[dword_A802D0] = timeGetTime(); /*0x443a09*/
      dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x443a20*/
      ++stru_A80220.lineTrailer; /*0x443a26*/
    }
    goto LABEL_8; /*0x443a26*/
  }
  if ( !*(_BYTE *)(*(_DWORD *)(this + 1312) + 5817) /*0x443ab0*/
    || !(unsigned __int8)House::IsCurrentPlayer(*(House **)(this + 540))
    || !*(_DWORD *)&dword_A8B238
    || !dword_A8B320
    || *(_DWORD *)(this + 704) )
  {
LABEL_8:
    if ( a3 ) /*0x443a34*/
    {
      if ( (unsigned __int8)House::IsHumanPlayer(*(House **)(this + 540)) ) /*0x443a3c*/
      {
        v16 = *(_DWORD *)(this + 1312); /*0x443a45*/
        if ( !*(_BYTE *)(v16 + 5817) && !*(_BYTE *)(v16 + 1517) ) /*0x443a55*/
          VoxClass::FindAndPlay((VoxClass *)&stru_818E00.?[27], -1); /*0x443a69*/
      }
    }
    return; /*0x443a69*/
  }
  v17 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(this->u32_48)(this, v35); /*0x443ac8*/
  v18 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v17); /*0x443ad1*/
  v19 = ScriptAction::GetWaypointCoords((ScriptAction *)v32, v18); /*0x443adb*/
  v28 = *(_DWORD *)v19; /*0x443aeb*/
  v30 = v19[4]; /*0x443aed*/
  v20 = ScriptAction::GetWaypointCoords((ScriptAction *)v31, (_DWORD *)this); /*0x443af4*/
  v24 = *(_DWORD *)v20; /*0x443b05*/
  v26 = v20[4]; /*0x443b0a*/
  v21 = (*(int (__thiscall **)(int))(this->attachedBomb)(this); /*0x443b0f*/
  v22 = ScenarioClass::SetEvent(v37, v21, 30, v24, v26, v28, v30); /*0x443b17*/
  if ( (int)stru_A80220.lineTrailer < 128 ) /*0x443b26*/
  {
    qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v22, 0x6Fu); /*0x443b46*/
    dword_A83A54[dword_A802D0] = timeGetTime(); /*0x443b5a*/
    dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x443b71*/
    ++stru_A80220.lineTrailer; /*0x443b77*/
  }
}



// ==== 0x00443B90  BuildingClass::AssignTarget_SyncLog  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::AssignTarget_SyncLog(BuildingClass *this)
{
  int v2; // edi
  int result; // eax
  int v4; // [esp+Ch] [ebp+4h]

  if ( this->? == 19 || !(*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 212))(this) ) /*0x443b9f*/
  {
    v2 = 0; /*0x443ba9*/
    return TechnoClass::AssignTarget_SyncLog((TechnoClass *)this, v2); /*0x443bae*/
  }
  v2 = v4; /*0x443bb8*/
  if ( !v4 /*0x443bf4*/
    || !*(_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 254))(this, 0)
    || *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 254))(
                                           this,
                                           0)
                            + 160)
                + 676)
    || (*((unsigned __int8 (__thiscall **)(BuildingClass *, int))this->TechnoClass + 235))(this, v4) )
  {
    return TechnoClass::AssignTarget_SyncLog((TechnoClass *)this, v2); /*0x443bfc*/
  }
  TechnoClass::AssignTarget_SyncLog((TechnoClass *)this, 0); /*0x443c02*/
  result = (int)this->Type; /*0x443c07*/
  if ( *(_BYTE *)(result + 5828) || *(_BYTE *)(result + 5834) ) /*0x443c17*/
  {
    result = House::IsCurrentPlayer((House *)this->?); /*0x443c27*/
    if ( !(_BYTE)result ) /*0x443c2e*/
    {
      result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 223))(this); /*0x443c34*/
      if ( !(_BYTE)result ) /*0x443c3c*/
      {
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 19, 0); /*0x443c4a*/
        return (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 123))(this); /*0x443c54*/
      }
    }
  }
  return result; /*0x443bb3*/
}



// ==== 0x00443C60  BuildingClass::UpdateConstruction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateConstruction(BuildingClass *this)
{
  double v1; // st7
  int v3; // eax
  ObjectClass *v4; // ebp
  unsigned int v5; // eax
  HouseClass *v6; // edx
  __int16 v7; // di
  int (__thiscall **v8)(BuildingClass *, char *); // edx
  _DWORD *v9; // eax
  Random *p_NeedsSaveOrLink; // ecx
  __int16 v11; // ax
  void *v12; // eax
  AbstractClass *v13; // eax
  void (__thiscall **v14)(ObjectClass *, void *, int); // esi
  void *v15; // eax
  int *PlacementCellsAlt; // eax
  unsigned __int8 (__thiscall **v17)(ObjectClass *, int *, int); // esi
  int Field9; // eax
  unsigned __int8 (__thiscall **v19)(ObjectClass *, int); // edi
  int v20; // eax
  int v21; // eax
  void (__thiscall **v22)(ObjectClass *, int); // edi
  int v23; // eax
  AbstractClass *v24; // esi
  BuildingTypeClass *Type; // eax
  int result; // eax
  BuildingTypeClass *v27; // eax
  int v28; // eax
  BuildingTypeClass *v29; // eax
  _DWORD *v30; // eax
  AbstractClass *focus; // ecx
  _DWORD... [50556 chars total]



// ==== 0x004456D0  BuildingClass::UpdateSidebar  this=BuildingClass  sig=csp ====
int __thiscall FootClass::UpdateSidebar(BuildingClass *this)
{
  int result; // eax
  int j; // esi
  int m; // esi
  int k; // esi
  int i; // esi

  result = (int)this->?; /*0x4456d0*/
  if ( (Object *)result == dword_A83D4C ) /*0x4456df*/
  {
    LOBYTE(result) = this->?; /*0x4456e5*/
    if ( !(_BYTE)result ) /*0x4456ed*/
    {
      LOBYTE(result) = this->?; /*0x4456f3*/
      if ( (_BYTE)result ) /*0x4456fb*/
      {
        LOBYTE(result) = this->HasPower; /*0x445701*/
        if ( (_BYTE)result ) /*0x445709*/
        {
          result = this->Type->Factory[0] - 3; /*0x44571b*/
          switch ( this->Type->Factory[0] ) /*0x44572f*/
          {
            case 3: /*0x44572f*/
              result = dword_A8B228; /*0x445800*/
              for ( i = 0; i < dword_A8B228; ++i ) /*0x445809*/
              {
                if ( HouseClass::CanBuild((HouseClass *)dword_A83D4C, *((_DWORD *)dword_A8B21C + i), 0, 1) ) /*0x44581e*/
                  SidebarClass::AddCameo((SidebarClass *)&stru_87F5F0.__pad_58[416], 3, i); /*0x44582f*/
                result = dword_A8B228; /*0x445834*/
              }
              break; /*0x44583c*/
            case 7: /*0x44572f*/
              result = dword_A83C78; /*0x445736*/
              for ( j = 0; j < dword_A83C78; ++j ) /*0x44573f*/
              {
                if ( HouseClass::CanBuild((HouseClass *)dword_A83D4C, *((_DWORD *)dword_A83C6C + j), 0, 1) ) /*0x445758*/
                  SidebarClass::AddCameo((SidebarClass *)&stru_87F5F0.__pad_58[416], 7, j); /*0x445769*/
                result = dword_A83C78; /*0x44576e*/
              }
              break; /*0x445776*/
            case 0x10: /*0x44572f*/
              result = dword_A8E358; /*0x4457bf*/
              for ( k = 0; k < dword_A8E358; ++k ) /*0x4457c8*/
              {
                if ( HouseClass::CanBuild((HouseClass *)dword_A83D4C, *((_DWORD *)dword_A8E34C + k), 0, 1) ) /*0x4457de*/
                  SidebarClass::AddCameo((SidebarClass *)&stru_87F5F0.__pad_58[416], 16, k); /*0x4457ef*/
                result = dword_A8E358; /*0x4457f4*/
              }
              break; /*0x4457fc*/
            case 0x28: /*0x44572f*/
              result = dword_A83CF0; /*0x44577a*/
              for ( m = 0; m < dword_A83CF0; ++m ) /*0x445783*/
              {
                if ( HouseClass::CanBuild((HouseClass *)dword_A83D4C, *((_DWORD *)dword_A83CE4 + m), 0, 1) ) /*0x44579d*/
                  SidebarClass::AddCameo((SidebarClass *)&stru_87F5F0.__pad_58[416], 40, m); /*0x4457ae*/
                result = dword_A83CF0; /*0x4457b3*/
              }
              break; /*0x4457bb*/
            default:
              return result;
          }
        }
      }
    }
  }
  return result; /*0x445778*/
}



// ==== 0x00445880  BuildingClass::Sell  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Sell(BuildingClass *this)
{
  int *location; // edx
  int v3; // eax
  int v4; // ecx
  int *DamageFireAnims; // edi
  int v6; // ebp
  int owner; // eax
  int Type; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int *Upgrades; // ecx
  char v17; // bl
  RulesClass *v18; // eax
  int i; // ebp
  int v20; // edx
  BuildingClass *v21; // edi
  int v22; // eax
  int v23; // ecx
  int v24; // kr08_4
  BuildingClass *v25; // eax
  BuildingClass *v26; // eax
  int v27; // ecx
  __int16 v28; // di
  __int16 v29; // bp
  BuildingClass *v30; // eax
  BuildingClass *v31; // eax
  BuildingTypeClass *v32; // ecx
  int FoundationWidth; // ebp
  int FoundationHeight; // edi
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // ebp
  int v39; // edi
  __int16 v40; // bx
  _BYTE *v41; // eax
  int *v42; // eax
  int Spotlight; // ecx
  int v44; // edx
  int v45; // eax
  int v46; // ecx
  int result; // eax
  char v48; // [esp+13h] [ebp-2Dh]
  int v49; // [esp+14h] [ebp-2Ch]
  int v50; // [esp+14h] [ebp-2Ch]
  int v51; // [esp+14h] [ebp-2Ch]
  int v52; // [esp+14h] [ebp-2Ch]
  __int16 v53[2]; // [esp+18h] [ebp-28h] BYREF
  __int16 v54[2]; // [esp+1Ch] [ebp-24h] BYREF
  int v55; // [esp+20h] [ebp-20h] BYREF
  __int16 v56; // [esp+28h] [ebp-18h]
  __int16 v57; // [esp+2Ah] [ebp-16h]
  _DWORD v58[4]; // [esp+30h] [ebp-10h] BYREF

  v48 = 0; /*0x445889*/
  location = this->location; /*0x445894*/
  v3 = this->location[0]; /*0x445896*/
  v4 = this->location[1]; /*0x445898*/
  v58[2] = location[2]; /*0x44589e*/
  LOWORD(v55) = v3 / 256; /*0x4458ae*/
  HIWORD(v55) = v4 / 256; /*0x4458c1*/
  if ( !this->inLimbo[0] && this->Type ) /*0x4458d4*/
  {
    DamageFireAnims = this->DamageFireAnims; /*0x4458e4*/
    v6 = 8; /*0x4458ea*/
    do /*0x445903*/
    {
      if ( *DamageFireAnims ) /*0x4458ef*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)*DamageFireAnims + 248))(*DamageFireAnims); /*0x4458f7*/
        *DamageFireAnims = 0; /*0x4458fd*/
      }
      ++DamageFireAnims; /*0x4458ff*/
      --v6; /*0x445902*/
    }
    while ( v6 ); /*0x445903*/
    if ( *(_BYTE *)(this->Type + 5836) ) /*0x44590b*/
    {
      if ( this->ActuallyPlacedOnMap[0] ) /*0x445915*/
      {
        --*(_DWORD *)(this->owner + 21388); /*0x44592c*/
        owner = this->owner; /*0x445932*/
        if ( *(int *)(owner + 21388) < 0 ) /*0x44593e*/
          *(_DWORD *)(owner + 21388) = 0; /*0x445940*/
      }
    }
    Type = this->Type; /*0x445946*/
    if ( *(_BYTE *)(Type + 5835) ) /*0x44594c*/
    {
      if ( this->ActuallyPlacedOnMap[0] ) /*0x445956*/
      {
        *(_DWORD *)(this->owner + 724) -= *(_DWORD *)(Type + 6016); /*0x445974*/
        v9 = this->owner; /*0x44597a*/
        if ( *(int *)(v9 + 724) < 0 ) /*0x445986*/
          *(_DWORD *)(v9 + 724) = 0; /*0x445988*/
      }
    }
    v10 = *(_DWORD *)(this->Type + 5476); /*0x445994*/
    if ( v10 ) /*0x44599c*/
    {
      if ( this->ActuallyPlacedOnMap[0] ) /*0x44599e*/
      {
        *(_DWORD *)(this->owner + 356) -= v10; /*0x4459b6*/
        v11 = this->owner; /*0x4459bc*/
        if ( *(int *)(v11 + 356) < 0 ) /*0x4459c8*/
          *(_DWORD *)(v11 + 356) = 0; /*0x4459ca*/
      }
    }
    v12 = *(_DWORD *)(this->Type + 5480); /*0x4459d6*/
    if ( v12 ) /*0x4459de*/
    {
      if ( this->ActuallyPlacedOnMap[0] ) /*0x4459e0*/
      {
        *(_DWORD *)(this->owner + 360) -= v12; /*0x4459f8*/
        v13 = this->owner; /*0x4459fe*/
        if ( *(int *)(v13 + 360) < 0 ) /*0x445a0a*/
          *(_DWORD *)(v13 + 360) = 0; /*0x445a0c*/
      }
    }
    if ( *(_BYTE *)(this->Type + 5822) ) /*0x445a18*/
      BuildingClass::DemolishBridgeCheck(this, 0); /*0x445a25*/
    if ( !dword_A8E7AC ) /*0x445a30*/
    {
      if ( *(_BYTE *)(this->Type + 5832) ) /*0x445a38*/
        (*(void (__thiscall **)(BuildingClass *, int))(this->ptr_0 + 1272))(this, g_TerrainTypeTable); /*0x445a4c*/
      if ( *(_BYTE *)(this->Type + 3377) ) /*0x445a58*/
        (*(void (__thiscall **)(BuildingClass *, int))(this->ptr_0 + 1280))(this, g_TerrainTypeTable); /*0x445a6c*/
      v14 = this->Type; /*0x445a72*/
      if ( (!*(_DWORD *)(v14 + 1032) || !*(_BYTE *)(v14 + 1516)) /*0x445a8e*/
        && !(*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->ptr_0 + 128))(this) )
      {
        RecalculateBuildingFoundation(this); /*0x445a9a*/
      }
    }
    v15 = 0; /*0x445a9f*/
    Upgrades = this->Upgrades; /*0x445aa1*/
    while ( !*Upgrades || !*(_BYTE *)(*Upgrades + 5987) ) /*0x445ab4*/
    {
      ++v15; /*0x445ab6*/
      ++Upgrades; /*0x445ab7*/
      if ( v15 >= 3 ) /*0x445abd*/
        goto LABEL_40; /*0x445abd*/
    }
    v48 = 1; /*0x445ac1*/
LABEL_40:
    if ( !byte_A8E9A0 ) /*0x445acd*/
    {
      v17 = 1; /*0x445acf*/
      goto LABEL_75; /*0x445ad1*/
    }
    v18 = dword_8871E0; /*0x445ad6*/
    if ( this->Type == dword_8871E0->NukeDown ) /*0x445ae7*/
    {
      for ( i = 0; i < 8; i += 2 ) /*0x445aed*/
      {
        v20 = i & 7; /*0x445af3*/
        LOWORD(v49) = v55 + LOWORD(dword_89F688[v20]); /*0x445b13*/
        HIWORD(v49) = HIWORD(v55) + HIWORD(dword_89F688[v20]); /*0x445b1c*/
        *(_DWORD *)v53 = v49; /*0x445b2b*/
        v21 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v53); /*0x445b34*/
        BuildingClass::ValidatePlacement(v21, 0); /*0x445b3a*/
        v22 = v21->ambientSoundController[2]; /*0x445b3f*/
        if ( v22 != -1 && *(_BYTE *)(*(&dword_A83D84->ptr_0 + v22) + 680) && BYTE2(v21->transporter) < 0x10u ) /*0x445b60*/
          BuildingClass::SellEffects((int)v21, 200); /*0x445b69*/
      }
      v18 = dword_8871E0; /*0x445b7a*/
    }
    v23 = this->Type; /*0x445b81*/
    if ( v23 == v18->FlameDamage || v23 == v18->NukeWarhead ) /*0x445b97*/
    {
      v24 = v55; /*0x445b9d*/
      HIWORD(v50) = HIWORD(v55); /*0x445ba2*/
      LOWORD(v50) = v55 - 1; /*0x445baf*/
      *(_DWORD *)v53 = v50; /*0x445bbe*/
      v25 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v53); /*0x445bc2*/
      BuildingClass::ValidatePlacement(v25, 0); /*0x445bc9*/
      HIWORD(v50) = HIWORD(v24); /*0x445bd1*/
      LOWORD(v50) = v24 + 3; /*0x445bd6*/
      *(_DWORD *)v53 = v50; /*0x445be3*/
      v26 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v53); /*0x445bee*/
      BuildingClass::ValidatePlacement(v26, 0); /*0x445bf5*/
      v18 = dword_8871E0; /*0x445bfa*/
    }
    v27 = this->Type; /*0x445bff*/
    if ( v27 == v18->FlameDamage2 || v27 == v18->NukeProjectile ) /*0x445c15*/
    {
      v28 = HIWORD(v55); /*0x445c17*/
      v29 = v55; /*0x445c1b*/
      *(_DWORD *)v53 = v55 - 0x10000; /*0x445c36*/
      v30 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v53); /*0x445c40*/
      BuildingClass::ValidatePlacement(v30, 0); /*0x445c47*/
      LOWORD(v51) = v29; /*0x445c53*/
      HIWORD(v51) = v28 + 3; /*0x445c58*/
      *(_DWORD *)v53 = v51; /*0x445c68*/
      v31 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v53); /*0x445c6c*/
      BuildingClass::ValidatePlacement(v31, 0); /*0x445c73*/
    }
    v32 = (BuildingTypeClass *)this->Type; /*0x445c78*/
    if ( !v32->ToTile ) /*0x445c7e*/
    {
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(v32); /*0x445c97*/
      FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0); /*0x445ca0*/
      v35 = *(_DWORD *)(*(int (__thiscall **)(BuildingClass *, int *))(this->ptr_0 + 440))(this, &v55); /*0x445caf*/
      v36 = 0; /*0x445cb1*/
      v58[0] = v35; /*0x445cb3*/
      v37 = FoundationHeight + 2; /*0x445cb7*/
      *(_DWORD *)v53 = 0; /*0x445cbc*/
      v55 = FoundationHeight + 2; /*0x445cc0*/
      if ( FoundationHeight + 2 > 0 ) /*0x445cc4*/
      {
        v38 = FoundationWidth + 2; /*0x445cc6*/
        do /*0x445d33*/
        {
          v39 = 0; /*0x445cc9*/
          if ( v38 > 0 ) /*0x445ccd*/
          {
            v56 = LOWORD(v58[0]) - 1; /*0x445cd9*/
            v57 = HIWORD(v58[0]) - 1; /*0x445cde*/
            v40 = LOWORD(v58[0]) - 1; /*0x445ce7*/
            HIWORD(v52) = v36 + HIWORD(v58[0]) - 1; /*0x445ced*/
            do /*0x445d22*/
            {
              LOWORD(v52) = v40 + v39; /*0x445cf9*/
              *(_DWORD *)v54 = v52; /*0x445d02*/
              v41 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v54); /*0x445d0c*/
              ++v39; /*0x445d19*/
              --v41[290]; /*0x445d1c*/
            }
            while ( v39 < v38 ); /*0x445d22*/
            v37 = v55; /*0x445d24*/
            v36 = *(_DWORD *)v53; /*0x445d28*/
          }
          *(_DWORD *)v53 = ++v36; /*0x445d2f*/
        }
        while ( v36 < v37 ); /*0x445d33*/
      }
    }
    if ( g_TacticalClass_Instance ) /*0x445d3d*/
    {
      v42 = (int *)(*(int (__thiscall **)(BuildingClass *, _DWORD *))(this->ptr_0 + 300))(this, v58); /*0x445d49*/
      Cell::CreateCrater(*v42, v42[1], v42[2], v42[3], 0); /*0x445d70*/
    }
    Spotlight = this->Spotlight; /*0x445d75*/
    if ( Spotlight ) /*0x445d7d*/
      (*(void (__thiscall **)(int))(*(_DWORD *)Spotlight + 248))(Spotlight); /*0x445d81*/
    BuildingClass::DecrementTypeCounter((BuildingClass *)this->owner, this); /*0x445d8e*/
    *(_BYTE *)(this->owner + 508) = 1; /*0x445d99*/
    BuildingClass::CalcExitCoords((BuildingClass *)this->owner); /*0x445da6*/
    if ( (Object *)this->owner == dword_A83D4C ) /*0x445db8*/
    {
      byte_880CF4 = 1; /*0x445dc0*/
      MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 0); /*0x445dc7*/
    }
    HouseClass::RecordCratePlacement((HouseClass *)this->owner, this); /*0x445dd3*/
  }
  v17 = TechnoClass::CleanupDeploy(this); /*0x445ddf*/
  if ( v48 ) /*0x445de7*/
    HouseClass::AcquiredThreatNode((HouseClass *)this->owner); /*0x445def*/
  v45 = this->Type; /*0x445df4*/
  v46 = *(_DWORD *)(v45 + 3768); /*0x445dfa*/
  if ( v46 ) /*0x445e02*/
  {
    LOBYTE(v44) = *(_BYTE *)(v45 + 3278); /*0x445e04*/
    HouseClass::UpdateProduction(this->owner, v46, v44, 0); /*0x445e14*/
  }
LABEL_75:
  result = this->Type; /*0x445e19*/
  if ( *(_BYTE *)(result + 5822) ) /*0x445e1f*/
  {
    result = dword_A8E7AC; /*0x445e29*/
    if ( !dword_A8E7AC ) /*0x445e30*/
      this->LaserFenceFrame = 0; /*0x445e32*/
  }
  LOBYTE(result) = v17; /*0x445e3e*/
  return result; /*0x445e3c*/
}



// ==== 0x00445E50  BuildingClass::GetFacingToTarget  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetFacingToTarget(BuildingClass *this)
{
  double v1; // st7
  AbstractClass *target; // ecx
  int *v4; // edi
  int *v5; // eax
  int v7; // ecx
  int v8; // [esp+20h] [ebp-20h]
  int v9; // [esp+24h] [ebp-1Ch] BYREF
  char v10[12]; // [esp+28h] [ebp-18h] BYREF
  char v11[12]; // [esp+34h] [ebp-Ch] BYREF
  int *v12; // [esp+44h] [ebp+4h]

  if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 255))(this) || (target = this->?) == 0 ) /*0x445e6a*/
  {
    v7 = *ProgressTimer::GetValue((ProgressTimer *)this->?, &v9); /*0x445eec*/
    *v12 = v7; /*0x445ef3*/
    return (int)v12; /*0x445eee*/
  }
  else
  {
    v4 = (int *)(*((int (__thiscall **)(AbstractClass *, char *))target->ptr_0 + 18))(target, v10); /*0x445e79*/
    v5 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v11); /*0x445e82*/
    v8 = *v4; /*0x445e89*/
    v9 = *v5; /*0x445e8d*/
    Math::CalcAngle((double)v5[1] - (double)v4[1], (double)v8 - (double)v9); /*0x445eac*/
    LOWORD(v9) = Math::RoundToInt((v1 - 1.570796326794897) * -10430.06004058427); /*0x445ec5*/
    *v12 = v9; /*0x445ed3*/
    return (int)v12; /*0x445eca*/
  }
}



// ==== 0x00445F00  BuildingClass::SelectTargetTypeFlags  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SelectTargetTypeFlags(BuildingClass *this)
{
  Building **v2; // eax
  int v3; // edi
  int v4; // edx
  Building **v5; // eax
  int v7; // [esp+Ch] [ebp+4h]
  int v8; // [esp+10h] [ebp+8h]
  char v9; // [esp+14h] [ebp+Ch]

  if ( *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 254))(this, 0) ) /*0x445f0e*/
  {
    v2 = (Building **)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 254))(this, 0); /*0x445f19*/
    v3 = Building::GetRenderType(*v2) | v7; /*0x445f2a*/
  }
  else
  {
    v3 = v7; /*0x445f2e*/
  }
  if ( *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 254))(this, 1) ) /*0x445f3e*/
  {
    v5 = (Building **)(*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 254))(this, 1); /*0x445f49*/
    v3 |= Building::GetRenderType(*v5); /*0x445f56*/
  }
  return (int)TechnoClass::SelectAutoTarget_Start_AU((TechnoClass *)this, v4, v3 | 1, v8, v9); /*0x445f6d*/
}



// ==== 0x00445F80  BuildingClass::CreateUnits  this=BuildingClass  sig=csp ====
int __thiscall SuperWeapon::CreateUnits(BuildingClass *this)
{
  int result; // eax
  double v2; // st7
  BuildingTypeClass *Type; // esi
  int ProduceCashDelay; // ecx
  int v6; // eax
  int v7; // eax
  int v10; // ecx
  char *v11; // eax
  int v12; // edx
  int v14; // ecx
  char *v15; // eax
  int v16; // edx
  int v19; // ecx
  char *v20; // eax
  int v23; // ecx
  char *v24; // eax
  BOOL v26; // ebx
  bool v27; // al
  int v28; // edx
  char *v29; // eax
  bool v30; // zf
  BuildingTypeClass *v31; // eax
  BOOL v34; // ebx
  bool v35; // al
  int v36; // edx
  char *v37; // eax
  BuildingTypeClass *v38; // eax
  int v41; // ecx
  char *v42; // eax
  int v43; // edx
  int v45; // ecx
  char *v46; // eax
  int InfantryGainSelfHeal; // ecx
  int UnitsGainSelfHeal; // ecx
  BuildingTypeClass *v51; // ecx
  HouseClass *owner; // eax
  int i; // esi
  _DWORD *v54; // eax
  int v55; // ecx
  int v56; // eax
  BOOL v59; // ebx
  bool v60; // al
  int v61; // edx
  char *v62; // eax
  Bu... [31054 chars total]



// ==== 0x00446FF0  BuildingClass::ToggleRepairMode  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ToggleRepairMode(BuildingClass *this)
{
  int result; // eax
  int v3; // edi
  HouseClass *owner; // ecx
  int *location; // esi
  _DWORD v6[3]; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+18h] [ebp+4h]

  result = v7; /*0x446ff0*/
  if ( v7 == -1 ) /*0x446ffe*/
  {
    this->IsBeingRepaired = this->IsBeingRepaired == 0; /*0x447042*/
  }
  else if ( v7 ) /*0x447002*/
  {
    if ( v7 == 1 ) /*0x447007*/
    {
      LOBYTE(result) = this->IsBeingRepaired; /*0x447009*/
      if ( (_BYTE)result ) /*0x447011*/
        return result; /*0x447011*/
      this->IsBeingRepaired = 1; /*0x447017*/
    }
  }
  else
  {
    result = (unsigned __int8)this->IsBeingRepaired; /*0x447020*/
    if ( !(_BYTE)result ) /*0x447028*/
      return result; /*0x447028*/
    this->IsBeingRepaired = 0; /*0x44702e*/
  }
  if ( this->IsBeingRepaired ) /*0x447048*/
  {
    if ( this->? == this->Type->? ) /*0x447061*/
    {
      v3 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1792); /*0x447068*/
    }
    else
    {
      v3 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1804); /*0x447076*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x447082*/
        (*((void (__thiscall **)(BuildingClass *, int))this->TechnoClass + 82))(this, 7); /*0x447091*/
      owner = this->?; /*0x447097*/
      this->NeedsRepairs = 1; /*0x44709d*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)owner) ) /*0x4470a4*/
        VoxClass::FindAndPlay((VoxClass *)&stru_818E00.?[5], -1); /*0x4470b7*/
    }
  }
  else
  {
    v3 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1804); /*0x4470c3*/
  }
  result = House::IsHumanPlayer((House *)this->?); /*0x4470cf*/
  if ( (_BYTE)result ) /*0x4470d6*/
  {
    location = this->?; /*0x4470d8*/
    v6[0] = *location; /*0x4470e2*/
    v6[1] = location[1]; /*0x4470eb*/
    v6[2] = location[2]; /*0x4470f6*/
    return (int)StartAudioControllerAt(v3, v6, 0); /*0x4470fa*/
  }
  return result; /*0x4470ff*/
}



// ==== 0x00447110  BuildingClass::ToggleSellMode  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ToggleSellMode(BuildingClass *this)
{
  int result; // eax
  BuildingTypeClass *Type; // ecx
  int v4; // [esp+8h] [ebp+4h]

  if ( this->BuildingClass_field_bool_6E9 ) /*0x447113*/
  {
    if ( v4 == -1 ) /*0x447128*/
    {
      if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 19 ) /*0x44717b*/
        goto LABEL_12; /*0x44717b*/
      goto LABEL_11; /*0x44717b*/
    }
    if ( !v4 ) /*0x44712c*/
    {
      result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this); /*0x447158*/
      if ( result != 19 ) /*0x447161*/
        return result; /*0x447161*/
      goto LABEL_12; /*0x447161*/
    }
    if ( v4 != 1 ) /*0x447131*/
    {
LABEL_12:
      result = House::IsHumanPlayer((House *)this->?); /*0x447195*/
      if ( (_BYTE)result ) /*0x4471a2*/
        return PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1804), 0x2000, 1.0, 0); /*0x4471bc*/
      return result; /*0x4471c2*/
    }
    result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this); /*0x447135*/
    if ( result != 19 ) /*0x44713e*/
    {
      LOBYTE(result) = this->C4Applied; /*0x447144*/
      if ( !(_BYTE)result ) /*0x44714c*/
      {
LABEL_11:
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 19, 0); /*0x44717d*/
        (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 123))(this); /*0x44718f*/
        goto LABEL_12; /*0x44718f*/
      }
    }
  }
  else
  {
    Type = this->Type; /*0x4471c5*/
    LOBYTE(result) = Type->FirestormWall; /*0x4471cb*/
    if ( (_BYTE)result ) /*0x4471d3*/
    {
      (*((void (__thiscall **)(BuildingTypeClass *, HouseClass *))Type->TechnoTypeClass + 33))(Type, this->?); /*0x4471de*/
      House::IsCurrentPlayer((House *)this->?); /*0x4471ea*/
      (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 53))(this); /*0x4471f3*/
      return (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 62))(this); /*0x4471fd*/
    }
  }
  return result; /*0x4471c1*/
}



// ==== 0x00447210  BuildingClass::HandleClickEvent  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::HandleClickEvent(BuildingClass *this)
{
  int result; // eax
  _BYTE *v3; // ebp
  int v4; // ebx
  BuildingTypeClass *Type; // eax
  int *p_arrayIndex; // edi
  int v7; // ebx
  int v8; // eax
  _DWORD *v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  unsigned __int8 (__thiscall **ptr_0)(BuildingClass *, _DWORD *); // eax
  _DWORD v14[3]; // [esp+Ch] [ebp-Ch] BYREF
  _BYTE *v15; // [esp+1Ch] [ebp+4h]
  _BYTE *v16; // [esp+1Ch] [ebp+4h]
  _BYTE *v17; // [esp+20h] [ebp+8h] BYREF

  if ( this->Type->InvisibleInGame ) /*0x44721e*/
    return 0; /*0x447230*/
  v3 = v15; /*0x447233*/
  if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v15 + 44))(v15) == 6 && *(_BYTE *)(*((_DWORD *)v15 + 328) + 5889) ) /*0x44724a*/
    return 0; /*0x44725c*/
  result = TechnoClass::HandleCursorClick((TechnoClass *)this, v15, (char)v17); /*0x447267*/
  v4 = result; /*0x44726c*/
  if ( result != 8 ) /*0x447271*/
  {
    if ( result == 4 ) /*0x447280*/
    {
      Type = this->Type; /*0x447286*/
      if ( !Type->? || dword_A83D4C != (Object *)this->? ) /*0x4472a8*/
      {
        if ( (!Type->UnitAbsorb && !Type->InfantryAbsorb || this->?[0] <= 0) /*0x447346*/
          && (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) <= 0 )
        {
          if ( !this->Type->Factory[0] ) /*0x44734e*/
            return 0; /*0x447363*/
          goto LABEL_13; /*0x447356*/
        }
LABEL_12:
        v4 = 4; /*0x4472e7*/
LABEL_13:
        if ( this->Type->Factory[0] && this->? ) /*0x447300*/
          return 0; /*0x447319*/
        return v4; /*0x447308*/
      }
      if ( this->? ) /*0x4472aa*/
        goto LABEL_12; /*0x4472aa*/
      p_arrayIndex = &this->?->arrayIndex; /*0x4472c4*/
      v7 = (*(int (__stdcall **)(int *))(*p_arrayIndex + 36))(p_arrayIndex); /*0x4472cb*/
      if ( (*(int (__stdcall **)(int *))(*p_arrayIndex + 32))(p_arrayIndex) - v7 > this->Type->ExtraPowerDrain ) /*0x4472e1*/
        goto LABEL_12; /*0x4472e1*/
      return 0; /*0x4473c4*/
    }
    if ( result == 5 ) /*0x447369*/
    {
      if ( !*(_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 254))(this, 0) ) /*0x44737a*/
        goto LABEL_45; /*0x44737a*/
      if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 254))( /*0x4473a4*/
                                                this,
                                                0)
                                 + 160)
                     + 677)
        || this->Type->EMPulseCannon )
      {
        v4 = 0; /*0x4473ae*/
      }
      if ( this->? == 19 ) /*0x4473b7*/
        return 0; /*0x4473b7*/
    }
    if ( v4 == 1 || v4 == 2 ) /*0x4473cf*/
    {
      if ( !(*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 40))(this) ) /*0x4473d9*/
        return 7; /*0x4473f1*/
      v8 = this->Type->Factory[0]; /*0x4473fa*/
      if ( v8 == 16 || v8 == 40 || v8 == 3 ) /*0x44740d*/
      {
        if ( !(unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[20]) /*0x447434*/
          && !(unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[24]) )
        {
          return 7; /*0x44744b*/
        }
        v9 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v15 + 72))(v15, v14); /*0x44745b*/
        v10 = *v9 / 256; /*0x447476*/
        v11 = v9[1] / 256; /*0x447479*/
        LOWORD(v16) = v10; /*0x44747c*/
        HIWORD(v16) = v11; /*0x447481*/
        v17 = v16; /*0x44748a*/
        if ( this->Type->Factory[0] != 3 ) /*0x44749b*/
        {
          v12 = (__int16)v11; /*0x4474a3*/
          ptr_0 = (unsigned __int8 (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass; /*0x4474a6*/
          v14[0] = ((__int16)v10 << 8) + 128; /*0x4474ae*/
          v14[1] = (v12 << 8) + 128; /*0x4474c2*/
          v14[2] = 0; /*0x4474c6*/
          if ( !ptr_0[179](this, v14) ) /*0x4474ce*/
            v4 = 2; /*0x4474d8*/
          if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v17) + 80) & 0x100) == 0 /*0x447506*/
            && *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v17) + 19) )
          {
            return 2; /*0x44750b*/
          }
        }
      }
    }
    if ( v4 != 5 ) /*0x447510*/
      return v4; /*0x44752e*/
LABEL_45:
    if ( *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 136))(v3) + 563) ) /*0x44751d*/
      return 2; /*0x447527*/
    return v4; /*0x447525*/
  }
  return result; /*0x447228*/
}



// ==== 0x00447540  BuildingClass::HandleRepairCursor  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::HandleRepairCursor(BuildingClass *this)
{
  BuildingTypeClass *Type; // eax
  __int16 *v4; // edi
  int v5; // ebx
  void *v6; // eax
  _DWORD *v7; // eax
  BuildingTypeClass *v8; // eax
  int v9; // ecx
  int v10; // edx
  unsigned __int8 (__thiscall **ptr_0)(BuildingClass *, _DWORD *); // eax
  _DWORD v12[3]; // [esp+Ch] [ebp-Ch] BYREF
  __int16 *v13; // [esp+1Ch] [ebp+4h]
  char v14; // [esp+20h] [ebp+8h]
  char v15; // [esp+24h] [ebp+Ch]

  Type = this->Type; /*0x447548*/
  if ( Type->InvisibleInGame ) /*0x44754e*/
    return 0; /*0x447560*/
  if ( Type->?[0] && v14 ) /*0x447577*/
  {
    v4 = v13; /*0x44757d*/
    v5 = TechnoClass::HandleCursor((TechnoClass *)this, v13, 0, v15); /*0x447592*/
    v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x447594*/
    v7 = (_DWORD *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v6 + 72))(v6, v12); /*0x4475a2*/
    if ( !(unsigned __int8)Cell::IsPassable(v7) ) /*0x4475ab*/
    {
      if ( v5 == 1 ) /*0x4475b7*/
      {
        if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13) + 59) == 5 ) /*0x4475cb*/
        {
          v8 = this->Type; /*0x4475cd*/
          if ( v8->? ) /*0x4475d3*/
          {
            if ( v8->? ) /*0x4475dd*/
              return 6; /*0x4475f2*/
          }
        }
        goto LABEL_14; /*0x4475e5*/
      }
LABEL_13:
      if ( v5 != 2 ) /*0x447611*/
        goto LABEL_27; /*0x447611*/
      goto LABEL_14; /*0x447611*/
    }
  }
  else
  {
    v4 = v13; /*0x4475f9*/
    v5 = TechnoClass::HandleCursor((TechnoClass *)this, v13, v14, v15); /*0x447607*/
  }
  if ( v5 != 1 ) /*0x44760c*/
    goto LABEL_13; /*0x44760c*/
LABEL_14:
  if ( !(*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 40))(this) && v5 == 1 ) /*0x447628*/
  {
    v5 = 0; /*0x44762a*/
    goto LABEL_35; /*0x44762c*/
  }
  if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 161))(this) ) /*0x447635*/
  {
    if ( !(unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[20]) /*0x447664*/
      && !(unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[24]) )
    {
      v5 = 0; /*0x44766d*/
      goto LABEL_35; /*0x44766f*/
    }
    if ( this->Type->Factory[0] != 3 ) /*0x447681*/
    {
      v9 = *v4; /*0x447683*/
      v10 = v4[1]; /*0x447686*/
      ptr_0 = (unsigned __int8 (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass; /*0x44768a*/
      v12[2] = 0; /*0x44768c*/
      v12[0] = (v9 << 8) + 128; /*0x44769d*/
      v12[1] = (v10 << 8) + 128; /*0x4476b1*/
      if ( !ptr_0[179](this, v12) ) /*0x4476b5*/
        v5 = 2; /*0x4476bf*/
      if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v4) + 80) & 0x100) == 0 /*0x4476e5*/
        && *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v4) + 19) )
      {
        v5 = 2; /*0x4476ec*/
        goto LABEL_35; /*0x4476f1*/
      }
    }
  }
LABEL_27:
  if ( v5 != 5 ) /*0x4476f6*/
    goto LABEL_35; /*0x4476f6*/
  if ( *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 254))(this, 0) ) /*0x447704*/
  {
    if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 254))( /*0x44772d*/
                                              this,
                                              0)
                               + 160)
                   + 677)
      || this->Type->EMPulseCannon )
    {
      v5 = 0; /*0x447737*/
    }
    if ( this->? == 19 ) /*0x447740*/
    {
      v5 = 0; /*0x447742*/
      goto LABEL_35; /*0x447744*/
    }
    if ( v5 != 5 ) /*0x447749*/
    {
LABEL_35:
      if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 161))(this) ) /*0x44774f*/
      {
        if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x44775f*/
          return 1; /*0x447768*/
      }
    }
  }
  return v5; /*0x447558*/
}



// ==== 0x00447780  BuildingClass::StartProduction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::StartProduction(BuildingClass *this, int a2)
{
  int result; // eax
  int v4; // edi
  int BuildingClass_field_int_534; // ecx
  BuildingTypeClass *Type; // ecx
  int *v7; // ebp
  BOOL v10; // ebx
  bool v11; // al
  int v12; // edx
  char *v13; // eax
  bool v14; // zf
  BuildingTypeClass *v15; // eax
  BOOL v18; // ebx
  bool v19; // al
  int v20; // edx
  char *v21; // eax
  BuildingTypeClass *v22; // eax
  BOOL v25; // ebx
  bool v26; // al
  int v27; // edx
  char *v28; // eax
  BuildingTypeClass *v29; // eax
  BOOL v32; // ebx
  bool v33; // al
  int v34; // edx
  char *v35; // eax
  BuildingTypeClass *v36; // eax
  BOOL v39; // ebx
  bool v40; // al
  int v41; // edx
  char *v42; // eax
  BuildingTypeClass *v43; // eax
  int v44; // ecx
  int v45; // [esp+Ch] [ebp-8h]

  result = -1; /*0x447783*/
  v4 = a2; /*0x44778a*/
  BuildingClass_field_int_534 = this->BuildingClass_field_int_534; /*0x44778e*/
  this->BuildingClass_field_int_538 = a2; /*0x447794*/
  if ( BuildingClass_field_int_534 == -1 || !a2 || dword_A8E7AC )
  {
    Type = this->Type; /*0x4477b0*/
    this->BuildingClass_field_int_538 = -1; /*0x4477b6*/
    this->BuildingClass_field_int_534 = a2; /*0x4477c1*/
    v7 = &Type->BuildingAnimFrame[3 * a2]; /*0x4477c7*/
    if ( dword_A8E7AC )
    {
      BuildingClass::GetHealthRatio(this); /*0x4477dd*/
      _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4477e2*/
      __asm /*0x4477e8*/
      {
        fcomp qword ptr [edx+1700h]
        fnstsw ax
      }
      v10 = (_AX & 0x4100) != 0; /*0x4477f3*/
      v11 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0; /*0x44780a*/
      LOBYTE(a2) = v11; /*0x44780f*/
      if ( v10 ) /*0x447813*/
      {
        v13 = &this->Type->__pad_F70[1204]; /*0x44781b*/
      }
      else
      {
        v14 = !v11; /*0x447822*/
        v15 = this->Type; /*0x447824*/
        if ( v14 ) /*0x44782a*/
          v13 = &v15->__pad_F70[1188]; /*0x447833*/
        else
          v13 = &v15->__pad_F70[1220]; /*0x44782c*/
      }
      if ( v13 && *v13 ) /*0x44783c*/
        BuildingClass::PlayAnim(this, v12, v13, 18, v10, a2, 0); /*0x44784e*/
      if ( dword_A8E7AC )
      {
        BuildingClass::GetHealthRatio(this); /*0x447862*/
        _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x447867*/
        __asm /*0x44786d*/
        {
          fcomp qword ptr [edx+1700h]
          fnstsw ax
        }
        v18 = (_AX & 0x4100) != 0; /*0x447878*/
        v19 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0; /*0x44788f*/
        LOBYTE(a2) = v19; /*0x447894*/
        if ( v18 ) /*0x447898*/
        {
          v21 = &this->Type->__pad_F70[184]; /*0x4478a0*/
        }
        else
        {
          v14 = !v19; /*0x4478a7*/
          v22 = this->Type; /*0x4478a9*/
          if ( v14 ) /*0x4478af*/
            v21 = &v22->__pad_F70[168]; /*0x4478b8*/
          else
            v21 = &v22->__pad_F70[200]; /*0x4478b1*/
        }
        if ( v21 && *v21 ) /*0x4478c1*/
          BuildingClass::PlayAnim(this, v20, v21, 3, v18, a2, 0); /*0x4478d3*/
        if ( dword_A8E7AC )
        {
          BuildingClass::GetHealthRatio(this); /*0x4478e7*/
          _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4478ec*/
          __asm /*0x4478f2*/
          {
            fcomp qword ptr [edx+1700h]
            fnstsw ax
          }
          v25 = (_AX & 0x4100) != 0; /*0x4478fd*/
          v26 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0; /*0x447914*/
          LOBYTE(a2) = v26; /*0x447919*/
          if ( v25 ) /*0x44791d*/
          {
            v28 = &this->Type->__pad_F70[252]; /*0x447925*/
          }
          else
          {
            v14 = !v26; /*0x44792c*/
            v29 = this->Type; /*0x44792e*/
            if ( v14 ) /*0x447934*/
              v28 = &v29->__pad_F70[236]; /*0x44793d*/
            else
              v28 = &v29->__pad_F70[268]; /*0x447936*/
          }
          if ( v28 && *v28 ) /*0x447946*/
            BuildingClass::PlayAnim(this, v27, v28, 4, v25, a2, 0); /*0x447958*/
          if ( dword_A8E7AC )
          {
            BuildingClass::GetHealthRatio(this); /*0x44796c*/
            _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x447971*/
            __asm /*0x447977*/
            {
              fcomp qword ptr [edx+1700h]
              fnstsw ax
            }
            v32 = (_AX & 0x4100) != 0; /*0x447982*/
            v33 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0; /*0x447999*/
            LOBYTE(a2) = v33; /*0x44799e*/
            if ( v32 ) /*0x4479a2*/
            {
              v35 = &this->Type->__pad_F70[320]; /*0x4479aa*/
            }
            else
            {
              v14 = !v33; /*0x4479b1*/
              v36 = this->Type; /*0x4479b3*/
              if ( v14 ) /*0x4479b9*/
                v35 = &v36->__pad_F70[304]; /*0x4479c2*/
              else
                v35 = &v36->__pad_F70[336]; /*0x4479bb*/
            }
            if ( v35 && *v35 ) /*0x4479cb*/
              BuildingClass::PlayAnim(this, v34, v35, 5, v32, a2, 0); /*0x4479dd*/
            if ( dword_A8E7AC )
            {
              BuildingClass::GetHealthRatio(this); /*0x4479ed*/
              _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4479f2*/
              __asm /*0x4479f8*/
              {
                fcomp qword ptr [edx+1700h]
                fnstsw ax
              }
              v39 = (_AX & 0x4100) != 0; /*0x447a03*/
              v40 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0; /*0x447a1a*/
              LOBYTE(a2) = v40; /*0x447a1f*/
              if ( v39 )
              {
                v42 = &this->Type->__pad_F70[388]; /*0x447a2b*/
              }
              else
              {
                v14 = !v40; /*0x447a32*/
                v43 = this->Type; /*0x447a34*/
                v42 = v14 ? &v43->__pad_F70[372] : &v43->__pad_F70[404];
              }
              if ( v42 && *v42 ) /*0x447a4c*/
                BuildingClass::PlayAnim(this, v41, v42, 6, v39, a2, 0); /*0x447a5e*/
            }
          }
        }
      }
    }
    result = v7[2]; /*0x447a69*/
    if ( HIBYTE(this->Type->?) ) /*0x447a6c*/
    {
      if ( v4 ) /*0x447a78*/
        result = (int)Rules::GetProductionTimeMult((Rules *)&stru_A8EB00.ObjectTypeClass[24], v7[2]); /*0x447a80*/
    }
    v44 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x447a85*/
    this->?[5] = result; /*0x447a91*/
    this->?[2] = v44; /*0x447a97*/
    this->?[3] = v45; /*0x447a9d*/
    this->?[4] = result; /*0x447aa0*/
    this->?[0] = *v7; /*0x447aa7*/
  }
  return result; /*0x447aae*/
}



// ==== 0x00447AC0  BuildingClass::GetExitCoords  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetExitCoords(BuildingClass *this)
{
  BuildingClass *v1; // edi
  int v2; // esi
  int FoundationWidth; // eax
  int v4; // ecx
  void *ptr_4; // edx
  void *ptr_8; // edi
  int *v8; // [esp+Ch] [ebp+4h]

  v1 = this; /*0x447ac2*/
  v2 = (BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) << 7) - 128; /*0x447adc*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(v1->Type); /*0x447ae2*/
  v1 = (BuildingClass *)((char *)v1 + 156); /*0x447ae7*/
  v4 = (int)v1->TechnoClass + 128 * FoundationWidth - 128; /*0x447af7*/
  ptr_4 = v1->?; /*0x447afd*/
  ptr_8 = v1->?; /*0x447b04*/
  *v8 = v4; /*0x447b07*/
  v8[1] = (int)ptr_4 + v2; /*0x447b09*/
  v8[2] = (int)ptr_8; /*0x447b0c*/
  return (int)v8; /*0x447b0f*/
}



// ==== 0x00447B20  BuildingClass::CalculateTurretAngle  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CalculateTurretAngle(BuildingClass *this)
{
  double v1; // st7
  BuildingTypeClass *Type; // eax
  _WORD *v4; // eax
  __int16 v5; // dx
  int v6; // eax
  int v7; // ecx
  int *location; // esi
  int v9; // edx
  _DWORD *Coords_Alt; // eax
  int v12; // edx
  int v13; // ecx
  int *v14; // edi
  int *v15; // eax
  int v16; // ecx
  int v17; // eax
  int *v18; // edx
  int v19; // edx
  int LinkIndex; // eax
  BuildingTypeClass *v21; // ecx
  int *v22; // edi
  int *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // edi
  int v29; // edx
  int v30; // esi
  int (__thiscall **ptr_0)(BuildingClass *, _BYTE *); // edx
  char *v32; // eax
  int *v33; // ecx
  _DWORD v34[3]; // [esp+24h] [ebp-30h] BYREF
  char v35[12]; // [esp+30h] [ebp-24h] BYREF
  char v36[12]; // [esp+3Ch] [ebp-18h] BYREF
  char v37; // [esp+48h] [ebp-Ch] BYREF
  int *v38; // [esp+58h] [ebp+4h]
  int v39; // [esp+5Ch] [ebp+8h] BYREF

  Type = this->Type; /*0x447b27*/
  if ( Type->Weeder ) /*0x447b2d*/
  {
    v4 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 110))(this, &v39); /*0x447b40*/
    v5 = v4[1] + 1; /*0x447b51*/
    v6 = ((__int16)(*v4 + 2) << 8) + 128; /*0x447b5f*/
    v7 = (v5 << 8) + 128; /*0x447b64*/
    location = this->?; /*0x447b6c*/
    v34[2] = 0; /*0x447b72*/
    v34[0] = *location; /*0x447b78*/
    v34[1] = location[1]; /*0x447b7f*/
    v9 = location[2]; /*0x447b83*/
    *v38 = v6; /*0x447b8c*/
    v38[1] = v7; /*0x447b90*/
    v38[2] = v9; /*0x447b93*/
    return (int)v38; /*0x447b9b*/
  }
  if ( Type->Refinery ) /*0x447b9e*/
  {
    Coords_Alt = (_DWORD *)ObjectClass::GetCoords_Alt((IUnknown *)this); /*0x447bb4*/
    v12 = Coords_Alt[1]; /*0x447bbb*/
    v13 = *Coords_Alt + 128; /*0x447bbe*/
LABEL_15:
    v17 = Coords_Alt[2]; /*0x447ce1*/
    *v38 = v13; /*0x447cea*/
    v38[1] = v12; /*0x447cec*/
    v38[2] = v17; /*0x447cef*/
    return (int)v38; /*0x447cf9*/
  }
  if ( Type->Bunker && v39 ) /*0x447bdd*/
  {
    v14 = (int *)(*(int (__stdcall **)(_DWORD *))(*(_DWORD *)v39 + 72))(v34); /*0x447bef*/
    v15 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v35); /*0x447bf8*/
    v16 = *v15; /*0x447bfd*/
    v39 = *v14; /*0x447bff*/
    Math::CalcAngle((double)v15[1] - (double)v14[1], (double)v39 - (double)v16); /*0x447c22*/
    LOWORD(v39) = Math::RoundToInt((v1 - 1.570796326794897) * -10430.06004058427); /*0x447c3b*/
    if ( (unsigned __int8)((((unsigned int)v39 >> 7) + 1) >> 1) >= 0x40u ) /*0x447c54*/
    {
      if ( (unsigned __int8)((((unsigned int)v39 >> 7) + 1) >> 1) < 0x80u ) /*0x447c76*/
      {
        Coords_Alt = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v35); /*0x447c81*/
        v13 = *Coords_Alt + 128; /*0x447c89*/
        v12 = Coords_Alt[1] + 128; /*0x447c8f*/
        goto LABEL_15; /*0x447c95*/
      }
      if ( (unsigned __int8)((((unsigned int)v39 >> 7) + 1) >> 1) < 0xC0u ) /*0x447ca3*/
      {
        Coords_Alt = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v35); /*0x447cae*/
        v13 = *Coords_Alt - 128; /*0x447cb6*/
        v12 = Coords_Alt[1] + 128; /*0x447cbc*/
        goto LABEL_15; /*0x447cc2*/
      }
      Coords_Alt = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v35); /*0x447ccd*/
      v13 = *Coords_Alt - 128; /*0x447cd2*/
    }
    else
    {
      Coords_Alt = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v35); /*0x447c5f*/
      v13 = *Coords_Alt + 128; /*0x447c64*/
    }
    v12 = Coords_Alt[1] - 128; /*0x447cdb*/
    goto LABEL_15; /*0x447cdb*/
  }
  if ( !Type->Helipad && !Type->UnitRepair ) /*0x447d06*/
  {
    v18 = (int *)ObjectClass::GetCoords_Alt((IUnknown *)this); /*0x447d1d*/
    *v38 = *v18; /*0x447d28*/
    v38[1] = v18[1]; /*0x447d2d*/
    v38[2] = v18[2]; /*0x447d34*/
    return (int)v38; /*0x447d3a*/
  }
  v19 = *(_DWORD *)&Type->__pad_1714[108]; /*0x447d3d*/
  if ( v19 ) /*0x447d46*/
  {
    if ( v19 == 1 ) /*0x447d4d*/
    {
      v22 = *(int **)&Type->__pad_1714[116]; /*0x447db5*/
      v23 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v36); /*0x447dc4*/
      v24 = *v23; /*0x447dc7*/
      v25 = *v22; /*0x447dc9*/
      goto LABEL_24; /*0x447dcb*/
    }
    LinkIndex = RadioClass::FindLinkIndex((RadioClass *)this, v39); /*0x447d52*/
    if ( LinkIndex >= 0 ) /*0x447d59*/
    {
      v21 = this->Type; /*0x447d5b*/
      if ( LinkIndex < *(_DWORD *)&v21->__pad_1714[108] ) /*0x447d67*/
      {
        v22 = (int *)(*(_DWORD *)&v21->__pad_1714[116] + 12 * LinkIndex); /*0x447d74*/
        v23 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v35); /*0x447d7e*/
        v24 = *v22; /*0x447d81*/
        v25 = *v23; /*0x447d83*/
LABEL_24:
        v26 = v25 + v24; /*0x447d85*/
        v27 = v22[1]; /*0x447d8a*/
        v28 = v22[2]; /*0x447d8d*/
        v29 = v23[1] + v27; /*0x447d90*/
        v30 = v23[2]; /*0x447d92*/
        *v38 = v26; /*0x447d9d*/
        v38[1] = v29; /*0x447d9f*/
        v38[2] = v30 + v28; /*0x447da2*/
        return (int)v38; /*0x447daa*/
      }
    }
    ptr_0 = (int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass; /*0x447dad*/
    v32 = (char *)v34; /*0x447daf*/
  }
  else
  {
    ptr_0 = (int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass; /*0x447dcd*/
    v32 = &v37; /*0x447dcf*/
  }
  v33 = (int *)ptr_0[18](this, v32); /*0x447dd9*/
  *v38 = *v33; /*0x447de4*/
  v38[1] = v33[1]; /*0x447de9*/
  v38[2] = v33[2]; /*0x447df0*/
  return (int)v38; /*0x447b96*/
}



// ==== 0x00447E00  BuildingClass::initAnimation  this=BuildingClass  sig=csp ====
int __thiscall AnimClass::initAnimation(BuildingClass *this)
{
  double v1; // st7
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  int result; // eax
  int v6; // [esp+28h] [ebp-1Ch]
  _BYTE v7[12]; // [esp+2Ch] [ebp-18h] BYREF
  _BYTE v8[12]; // [esp+38h] [ebp-Ch] BYREF
  int v9; // [esp+48h] [ebp+4h]

  v3 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 72))(v9, v7); /*0x447e1a*/
  v4 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *, int))this->TechnoClass + 42))(this, v8, v9); /*0x447e24*/
  v6 = v4[2] - v3[2]; /*0x447e48*/
  Math::Sqrt( /*0x447e74*/
    (double)(*v4 - *v3) * (double)(*v4 - *v3)
  + (double)v6 * (double)v6
  + (double)(v4[1] - v3[1]) * (double)(v4[1] - v3[1]));
  LOWORD(result) = Math::RoundToInt(v1); /*0x447e7c*/
  return result; /*0x447e81*/
}



// ==== 0x00447E90  BuildingClass::TogglePrimaryFactory  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::TogglePrimaryFactory(BuildingClass *this)
{
  BuildingTypeClass *Type; // eax
  int v2; // eax
  _DWORD *v3; // ecx
  _BYTE v5[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v6; // [esp+14h] [ebp+4h]
  int v7; // [esp+18h] [ebp+8h]

  Type = this->Type; /*0x447e90*/
  if ( Type->Helipad || Type->UnitRepair || Type->Bunker ) /*0x447ec2*/
    v2 = (*((int (__thiscall **)(BuildingClass *, _BYTE *, int))this->TechnoClass + 42))(this, v5, v7); /*0x447ee4*/
  else
    v2 = (*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v5); /*0x447ed3*/
  v3 = (_DWORD *)v2; /*0x447eea*/
  *v6 = *v3; /*0x447ef4*/
  v6[1] = v3[1]; /*0x447ef9*/
  v6[2] = v3[2]; /*0x447f00*/
  return (int)v6; /*0x447efc*/
}



// ==== 0x00447F10  BuildingClass::GetFireError  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetFireError(BuildingClass *this)
{
  BuildingTypeClass *Type; // eax
  int v4; // edx
  int INI; // ebp
  int v6; // edi
  int v7; // ebx
  _DWORD *Value; // eax
  __int16 v9; // dx
  _BYTE *v10; // [esp+10h] [ebp+4h]
  int v11; // [esp+14h] [ebp+8h]
  int v12; // [esp+18h] [ebp+Ch] BYREF

  Type = this->Type; /*0x447f15*/
  if ( Type->CanBeOccupied /*0x447f47*/
    && (!Type->CanOccupyFire || !(*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this))
    || (unsigned __int8)ObjectClass::HasLocation((ObjectClass *)this) )
  {
    return 5; /*0x447f47*/
  }
  if ( this->Type->EMPulseCannon ) /*0x447f5a*/
    return 6; /*0x447f6c*/
  if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 19 /*0x447f8f*/
    || (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 18 )
  {
    return 5; /*0x44805c*/
  }
  if ( !(*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 212))(this) ) /*0x447f99*/
    return 6; /*0x447fa5*/
  if ( this->DelayBeforeFiring ) /*0x447fae*/
    return 3; /*0x447fba*/
  INI = TriggerTypeClass::ReadINI((TechnoClass *)this, v4, v10, v11, v12); /*0x447fd9*/
  if ( INI ) /*0x447fdd*/
    return INI; /*0x447fdd*/
  if ( !(*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 255))(this) ) /*0x447fe3*/
    return INI; /*0x447fe3*/
  v6 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *, _BYTE *))this->TechnoClass + 314))(this, &v12, v10); /*0x448004*/
  v7 = this->Type->TurretAnimIsVoxel != 0 ? 0 : 8;
  Value = ProgressTimer::GetValue((ProgressTimer *)this->?, &v12); /*0x448021*/
  LOBYTE(v9) = 0; /*0x448029*/
  HIBYTE(v9) = v7; /*0x44802b*/
  if ( abs16(v9) >= (int)abs16(*(_WORD *)Value - v6) ) /*0x448045*/
    return INI; /*0x448053*/
  else
    return 2; /*0x448049*/
}



// ==== 0x00448070  AnimClass::updateAnimation  this=ObjectClass  sig=csp ====
bool __thiscall AnimClass::updateAnimation(int this, char a2)
{
  int v3; // edx
  int v5; // eax
  int v6; // ebx
  int v7; // edi
  int *v8; // ebp
  int v9; // eax
  int v10; // ecx
  unsigned __int8 v11; // [esp+7h] [ebp-5h]
  int v12; // [esp+8h] [ebp-4h]

  v3 = *(_DWORD *)(*(_DWORD *)(this + 1312) + 3768); /*0x44807c*/
  v12 = v3; /*0x448084*/
  if ( !v3 ) /*0x448088*/
    return 0; /*0x448090*/
  v11 = *(_BYTE *)(this + 979); /*0x44809a*/
  v5 = *(_DWORD *)(this + 540); /*0x44809e*/
  v6 = *(_DWORD *)(v5 + 120); /*0x4480a6*/
  v7 = 0; /*0x4480a9*/
  if ( v6 <= 0 ) /*0x4480ad*/
    goto LABEL_17; /*0x4480ad*/
  v8 = *(int **)(v5 + 108); /*0x4480af*/
  while ( 1 ) /*0x4480b8*/
  {
    v9 = *v8; /*0x4480b8*/
    if ( *(_BYTE *)(*v8 + 129) ) /*0x4480bb*/
      goto LABEL_13; /*0x4480bb*/
    if ( !*(_BYTE *)(v9 + 979) ) /*0x4480c5*/
      goto LABEL_13; /*0x4480c5*/
    v10 = *(_DWORD *)(v9 + 1312); /*0x4480cf*/
    if ( *(_DWORD *)(v10 + 3768) != v3 ) /*0x4480db*/
      goto LABEL_13; /*0x4480db*/
    if ( !*(_BYTE *)(*(_DWORD *)(this + 1312) + 3278) ) /*0x4480e3*/
      break; /*0x4480e3*/
    if ( *(_BYTE *)(v10 + 3278) ) /*0x4480ed*/
      goto LABEL_15; /*0x4480f4*/
LABEL_13:
    ++v7; /*0x448104*/
    ++v8; /*0x448105*/
    if ( v7 >= v6 ) /*0x44810a*/
      goto LABEL_17; /*0x44810a*/
    v3 = v12; /*0x4480b4*/
  }
  if ( *(_BYTE *)(v10 + 3278) ) /*0x4480fa*/
    goto LABEL_13; /*0x448102*/
LABEL_15:
  if ( a2 ) /*0x448114*/
  {
    *(_BYTE *)(v9 + 979) = 0; /*0x448116*/
LABEL_17:
    *(_BYTE *)(this + 979) = 1; /*0x44811d*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(this + 1312) + 3768) == 7 ) /*0x448134*/
    House::ChooseHouseEnemy(*(House **)(this + 540), this); /*0x44813d*/
  return *(_BYTE *)(this + 979) != v11; /*0x44808c*/
}



// ==== 0x00448160  BuildingClass::ProcessPrimarySelect  this=BuildingClass  sig=csp ====
int __thiscall FootClass::ProcessPrimarySelect(BuildingClass *this)
{
  int v2; // ecx
  int result; // eax
  int v4; // edi
  int v5; // edx
  int v6; // ecx
  BuildingTypeClass *Type; // eax
  HouseClass *owner; // ecx
  int bunkersCount; // [esp+4h] [ebp-4h]

  result = (int)this->Type; /*0x448164*/
  v2 = *(_DWORD *)(result + 3768); /*0x44816a*/
  LOBYTE(result) = this->?; /*0x448170*/
  if ( v2 ) /*0x448178*/
  {
    if ( (_BYTE)result ) /*0x448180*/
    {
      this->? = 0; /*0x448182*/
LABEL_17:
      result = (*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 73))(this, 2); /*0x448246*/
      LOBYTE(result) = this->?; /*0x448252*/
      return result; /*0x448252*/
    }
    v4 = 0; /*0x448195*/
    bunkersCount = this->?->bunkersCount; /*0x44819c*/
    if ( bunkersCount <= 0 ) /*0x4481a0*/
    {
LABEL_13:
      owner = this->?; /*0x448205*/
      this->? = 1; /*0x44820b*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)owner) ) /*0x448212*/
        VoxClass::FindAndPlay((VoxClass *)&stru_818E00.?[9], -1); /*0x448226*/
      if ( this->Type->Factory[0] == 7 ) /*0x448238*/
        House::ChooseHouseEnemy((House *)this->?, (int)this); /*0x448241*/
      goto LABEL_17; /*0x448241*/
    }
    while ( 1 ) /*0x4481ac*/
    {
      v5 = *(_DWORD *)(this->?->absorbersCount + 4 * v4); /*0x4481ac*/
      if ( *(_BYTE *)(v5 + 129) ) /*0x4481af*/
        goto LABEL_12; /*0x4481af*/
      v6 = *(_DWORD *)(v5 + 1312); /*0x4481b9*/
      Type = this->Type; /*0x4481bf*/
      if ( *(_DWORD *)(v6 + 3768) != Type->Factory[0] ) /*0x4481d1*/
        goto LABEL_12; /*0x4481d1*/
      if ( Type->?[1] ) /*0x4481d3*/
        break; /*0x4481d3*/
      if ( !*(_BYTE *)(v6 + 3278) ) /*0x4481ea*/
        goto LABEL_11; /*0x4481f2*/
LABEL_12:
      if ( ++v4 >= bunkersCount ) /*0x448202*/
        goto LABEL_13; /*0x448202*/
    }
    if ( !*(_BYTE *)(v6 + 3278) ) /*0x4481dd*/
      goto LABEL_12; /*0x4481e4*/
LABEL_11:
    *(_BYTE *)(v5 + 979) = 0; /*0x4481f4*/
    goto LABEL_12; /*0x4481f4*/
  }
  return result; /*0x448258*/
}



// ==== 0x00448260  BuildingClass::drawFrame  this=BuildingClass  sig=csp ====
int __thiscall AnimClass::drawFrame(BuildingClass *this)
{
  int result; // eax
  int v2; // ebp
  int v3; // edi
  ObjectClass *attachedBomb; // ecx
  BuildingTypeClass *Type; // ecx
  int ProduceCashDelay; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  BuildingTypeClass *v11; // edx
  int v12; // edx
  int bunkersCount; // edi
  HouseClass *owner; // ecx
  int v15; // eax
  BuildingTypeClass *v16; // ecx
  HouseClass *v17; // ecx
  int CaptureEvaEvent; // ecx
  __int64 v19; // rax
  BuildingTypeClass *v20; // edx
  LightSourceClass *LightSource; // ecx
  int v22; // edi
  int *Anims; // ebp
  int v24; // eax
  int Member; // eax
  _BYTE *v26; // edi
  _DWORD *v27; // ebp
  _DWORD *v28; // eax
  int *v29; // eax
  char v30; // bl
  int v31; // eax
  int v32; // edi
  int v33; // eax
  int v34; // ecx
  FactoryClass *Factory; // ecx
  FactoryClass *v36; // ecx
  HouseClass *v37; // ebx
  int v38; // eax
  int v39; // ecx
  BuildingTypeClass **v40; // edx
  int v41; // eax... [39598 chars total]



// ==== 0x00449410  BuildingClass::GetBoundingSizeExt  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetBoundingSizeExt(BuildingClass *this)
{
  return (this->Type->TurretAnimIsVoxel != 0 ? 0x20 : 0)
       - (this->Type->Gate != 0 ? 0x10 : 0)
       + ObjectClass::GetBoundingSize((ObjectClass *)this);
}



// ==== 0x00449440  BuildingClass::GetCursorAction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetCursorAction(BuildingClass *this)
{
  BuildingTypeClass *Type; // eax
  int *v2; // eax
  int v3; // eax
  int v5; // eax
  int v6; // [esp-Ch] [ebp-Ch]
  int v7; // [esp-8h] [ebp-8h]
  HouseClass *owner; // [esp-4h] [ebp-4h]
  int v9; // [esp+4h] [ebp+4h] BYREF

  Type = this->Type; /*0x449447*/
  v9 = *(_DWORD *)(v9 + 36); /*0x44944d*/
  if ( Type->?[0] && this->? ) /*0x44945b*/
  {
    owner = this->?; /*0x44946e*/
    v7 = (int)Type; /*0x44946f*/
    v6 = Type->?[0]; /*0x449474*/
    v2 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v9); /*0x44947b*/
    v3 = -((unsigned __int8)CellClass::IsPassable(v2, v6, v7, (int)owner) != 0); /*0x449489*/
    LOBYTE(v3) = v3 & 0xF9; /*0x44948b*/
    return v3 + 7; /*0x44948d*/
  }
  else
  {
    v5 = -((*((unsigned __int8 (__thiscall **)(BuildingTypeClass *, int *, HouseClass *))Type->TechnoTypeClass + 42))( /*0x4494ab*/
             Type,
             &v9,
             this->?) != 0);
    LOBYTE(v5) = v5 & 0xF9; /*0x4494ad*/
    return v5 + 7; /*0x4494af*/
  }
}



// ==== 0x004494C0  BuildingClass::CanBeSold  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CanBeSold(BuildingClass *this)
{
  int result; // eax

  result = ObjectClass::HasLocation((ObjectClass *)this); /*0x4494c3*/
  if ( (_BYTE)result ) /*0x4494ca*/
    goto LABEL_11; /*0x4494ca*/
  result = (int)this->Type; /*0x4494cc*/
  if ( *(_BYTE *)(result + 5497) ) /*0x4494d2*/
    goto LABEL_11; /*0x4494d2*/
  if ( this->BuildingClass_field_bool_6E9 ) /*0x4494dc*/
  {
    result = this->BuildingClass_field_int_534; /*0x4494e6*/
    if ( result ) /*0x4494ee*/
    {
      result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this); /*0x4494f4*/
      if ( result != 19 ) /*0x4494fd*/
      {
        result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this); /*0x449503*/
        if ( result != 18 ) /*0x44950c*/
        {
          LOBYTE(result) = 1; /*0x44950e*/
          return result; /*0x449511*/
        }
      }
    }
  }
  if ( !this->Type->FirestormWall || this->?->firestormActive ) /*0x449528*/
LABEL_11:
    LOBYTE(result) = 0; /*0x449536*/
  else
    LOBYTE(result) = 1; /*0x449532*/
  return result; /*0x449510*/
}



// ==== 0x00449540  AnimClass::resetAnimation  this=AnimClass  sig=csp ====
char __thiscall AnimClass::resetAnimation(AnimClass *this)
{
  int v2; // eax
  int v3; // edi
  _WORD *v4; // eax
  Object *v5; // ebp
  int ClosestObjectCell; // eax
  Object *NeighbourContent; // edi
  int v8; // eax
  unsigned int v10; // [esp+10h] [ebp-20h]
  int i; // [esp+10h] [ebp-20h]
  __int16 v12[2]; // [esp+18h] [ebp-18h] BYREF
  int v13; // [esp+1Ch] [ebp-14h] BYREF
  int v14; // [esp+20h] [ebp-10h]
  int v15[3]; // [esp+24h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)&this->__pad_41C[260]; /*0x44954b*/
  if ( !*(_BYTE *)(v2 + 5821) ) /*0x449551*/
    return 0; /*0x449551*/
  v3 = *(_DWORD *)(*(_DWORD *)(v2 + 3796) + 40); /*0x449567*/
  v4 = (_WORD *)(*((int (__thiscall **)(AnimClass *, int *))this->AnimClass_field_0x0 + 110))(this, &v13); /*0x449573*/
  HIWORD(v10) = HIWORD(v3) + v4[1]; /*0x449596*/
  LOWORD(v10) = v3 + *v4 - 1; /*0x4495a1*/
  v15[1] = (SHIWORD(v10) << 8) + 128; /*0x4495be*/
  *(_DWORD *)v12 = v10; /*0x4495c2*/
  v15[0] = ((__int16)v10 << 8) + 128; /*0x4495cc*/
  v15[2] = 0; /*0x4495d6*/
  v5 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v12); /*0x4495e4*/
  v13 = 0; /*0x4495ea*/
  v14 = 0; /*0x4495ee*/
  ClosestObjectCell = Object::FindClosestObjectCell(v5, &v13, 0, (int)this); /*0x4495f2*/
  if ( !ClosestObjectCell ) /*0x4495f9*/
    return 0; /*0x44969e*/
  (*(void (__thiscall **)(int))(*(_DWORD *)ClosestObjectCell + 132))(ClosestObjectCell); /*0x449603*/
  Debug::Log(); /*0x449612*/
  Cell::ApplyDamage((Cell *)v5, (int)&g_BuildingClassPool, 1, 1, 0); /*0x449626*/
  for ( i = 0; i < 8; ++i ) /*0x44962b*/
  {
    NeighbourContent = (Object *)Cell::GetNeighbourContent((Cell *)v5, i); /*0x449640*/
    v13 = 0; /*0x449646*/
    v14 = 0; /*0x44964a*/
    v8 = Object::FindClosestObjectCell(NeighbourContent, &v13, 0, (int)this); /*0x44964e*/
    if ( v8 ) /*0x449655*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 132))(v8); /*0x44965b*/
      Debug::Log(); /*0x44966a*/
      Cell::ApplyDamage((Cell *)NeighbourContent, (int)v15, 1, 1, 0); /*0x44967e*/
    }
  }
  return 1; /*0x449691*/
}



// ==== 0x004496B0  BuildingClass::UpdateProduction  this=BuildingClass  sig=csp ====
int __thiscall CheckState1(BuildingClass *this)
{
  double v1; // st7
  BuildingTypeClass *Type; // eax
  int SuperWeapon; // eax
  int v5; // eax
  char *MissionControl; // eax
  int v8; // eax
  BuildingTypeClass *v9; // ecx
  int missionStatus; // eax
  int v11; // ebp
  _BYTE *Member; // eax
  _BYTE *v13; // edi
  _DWORD *v14; // ebx
  _DWORD *v15; // eax
  int *v16; // eax
  int v17; // eax
  char *v18; // eax
  int v19; // eax
  char *v20; // eax
  int v21; // eax
  _BYTE v22[12]; // [esp+34h] [ebp-24h] BYREF
  _BYTE v23[12]; // [esp+40h] [ebp-18h] BYREF
  _DWORD v24[3]; // [esp+4Ch] [ebp-Ch] BYREF

  if ( *(_BYTE *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) + 3285) ) /*0x4496c7*/
  {
    TechnoClass::DrainAmmo((char *)this, this->?); /*0x4496da*/
    this->? = 0; /*0x4496df*/
  }
  if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 171))(this) ) /*0x4496ed*/
  {
    Type = this->Type; /*0x4496fb*/
    this->BuildingClass_field_bool_6DD = 1; /*0x449701*/
    if ( Type->EMPulseCannon /*0x449780*/
      || ((SuperWeapon = Type->SuperWeapon, SuperWeapon == -1)
       || (v5 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_A83CBC + SuperWeapon) + 40) + 200)) == 0
       || DynamicVector::GetOrGrow((DynamicVector *)this->?->ownedInfantryTypes2, *(_DWORD *)(v5 + 3576)))
      && this->Type->SuperWeapon != -1
      || this->Type->CanBeOccupied && (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) <= 0
      || !this->? )
    {
      MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4497b1*/
      LOWORD(v8) = Math::RoundToInt(*((double *)MissionControl + 3) * 900.0); /*0x4497bf*/
      return v8 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4497da*/
    }
    else
    {
      (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 1, 0); /*0x449792*/
      (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 123))(this); /*0x44979c*/
      return 1; /*0x4497a2*/
    }
  }
  v9 = this->Type; /*0x4497e4*/
  if ( v9->HasStupidGuardMode ) /*0x4497ea*/
    return 100; /*0x449800*/
  missionStatus = this->?; /*0x449801*/
  if ( !missionStatus ) /*0x44980a*/
  {
    BuildingClass::StartProduction(this, 1); /*0x449961*/
    this->? = 1; /*0x449966*/
LABEL_32:
    if ( this->Type->UnitReload /*0x4499ab*/
      && (unsigned __int8)Team::AllMembersValid((Team *)this)
      && (*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 157))(this, 29) != 1
      && (*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 157))(this, 19) == 1 )
    {
      (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 20, 0); /*0x4499b5*/
    }
    if ( this->Type->UnitRepair ) /*0x4499c1*/
    {
      v18 = MissionClass::GetMissionControl((MissionClass *)this); /*0x4499cd*/
      LOWORD(v19) = Math::RoundToInt(*((double *)v18 + 2) * 900.0); /*0x4499db*/
      return v19 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4499f7*/
    }
    else
    {
      v20 = MissionClass::GetMissionControl((MissionClass *)this); /*0x449a01*/
      LOWORD(v21) = Math::RoundToInt(*((double *)v20 + 2) * 900.0); /*0x449a0f*/
      return 3 * v21 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x449a2e*/
    }
  }
  if ( missionStatus != 1 ) /*0x449811*/
    goto LABEL_32; /*0x449811*/
  if ( !v9->UnitRepair && !v9->UnitReload && !v9->Bunker || (v11 = 0, this->?[2] <= 0) ) /*0x449843*/
  {
LABEL_28:
    if ( this->Type->WeaponsFactory ) /*0x44992f*/
      AnimClass::resetAnimation((AnimClass *)this); /*0x44993b*/
    goto LABEL_32; /*0x449940*/
  }
  while ( 1 ) /*0x44984c*/
  {
    Member = (_BYTE *)Team::GetMember((Team *)this, v11); /*0x44984c*/
    v13 = Member; /*0x449851*/
    if ( Member ) /*0x449855*/
    {
      if ( (Member[20] & 1) != 0 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)Member + 388))(Member) == 7 ) /*0x449878*/
      {
        v14 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v13 + 72))(v13, v22); /*0x44988c*/
        v15 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v23); /*0x449895*/
        v16 = Coord::Subtract((Coord *)v24, *v15 - *v14, v15[1] - v14[1], v15[2] - v14[2]); /*0x4498b5*/
        Math::Sqrt((double)*v16 * (double)*v16 + (double)v16[2] * (double)v16[2] + (double)v16[1] * (double)v16[1]); /*0x4498f6*/
        LOWORD(v17) = Math::RoundToInt(v1); /*0x4498fe*/
        if ( v17 < 64 /*0x449918*/
          && (*((int (__thiscall **)(BuildingClass *, int, _BYTE *))this->TechnoClass + 158))(this, 19, v13) == 1 )
        {
          break; /*0x449918*/
        }
      }
    }
    if ( ++v11 >= this->?[2] ) /*0x449923*/
      goto LABEL_28; /*0x449923*/
  }
  (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 20, 0); /*0x44994a*/
  return 1; /*0x4497a7*/
}



// ==== 0x00449A40  BuildingClass::GetOwnerHouse  this=BuildingClass  sig=csp ====
int __thiscall CheckState2(BuildingClass *this)
{
  return (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 135))(this);
}



// ==== 0x00449A50  BuildingClass::setLoopCount  this=BuildingClass  sig=csp ====
int __thiscall AnimClass::setLoopCount(BuildingClass *this)
{
  int missionStatus; // eax
  BuildingTypeClass *Type; // eax
  __int16 v4; // cx
  int UnitExitSound; // ecx
  int v7; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v8[3]; // [esp+18h] [ebp-18h] BYREF
  _DWORD v9[3]; // [esp+24h] [ebp-Ch] BYREF

  missionStatus = this->?; /*0x449a57*/
  if ( !missionStatus ) /*0x449a60*/
  {
    BuildingClass::StartProduction(this, 0); /*0x449b36*/
    (*((void (__thiscall **)(BuildingClass *, int))this->TechnoClass + 157))(this, 11); /*0x449b41*/
    UnitExitSound = this->Type->UnitExitSound; /*0x449b4d*/
    if ( UnitExitSound != -1 /*0x449b67*/
      || (UnitExitSound = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1736), UnitExitSound != -1) )
    {
      v9[0] = this->?[0]; /*0x449b75*/
      v9[1] = this->?[1]; /*0x449b7c*/
      v9[2] = this->?[2]; /*0x449b8e*/
      StartAudioControllerAt(UnitExitSound, v9, (int **)&this->WasOnline); /*0x449b92*/
    }
    this->? = 1; /*0x449b97*/
    this->? = 1; /*0x449b9e*/
    return 1; /*0x449b9e*/
  }
  if ( missionStatus != 1 ) /*0x449a67*/
    return 1; /*0x449a67*/
  this->? = 1; /*0x449a79*/
  v8[0] = this->?[0]; /*0x449a82*/
  v8[1] = this->?[1]; /*0x449a8d*/
  v8[2] = this->?[2]; /*0x449a96*/
  StartAudioController(v8, (int **)&this->WasOnline); /*0x449a9a*/
  if ( !this->BuildingClass_field_bool_6DD ) /*0x449a9f*/
    return 1; /*0x449ba9*/
  (*((void (__thiscall **)(BuildingClass *, int))this->TechnoClass + 157))(this, 12); /*0x449ab3*/
  (*((void (__thiscall **)(BuildingClass *, int))this->TechnoClass + 157))(this, 3); /*0x449abf*/
  BuildingClass::StartProduction(this, 1); /*0x449ac9*/
  (*((void (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 311))(this, 0); /*0x449ad4*/
  (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 5, 0); /*0x449ae2*/
  Type = this->Type; /*0x449ae8*/
  if ( !Type->LaserFence ) /*0x449aee*/
  {
    LOBYTE(v4) = 0; /*0x449af8*/
    HIBYTE(v4) = Type->unknown___2; /*0x449afe*/
    LOWORD(v7) = v4; /*0x449b05*/
    FacingClass::Set_SyncLog((char *)this->?, &v7); /*0x449b10*/
  }
  BuildingTypeClass::IsPowered(this->Type); /*0x449b1b*/
  Mixer::ReleaseChannel((Mixer *)&this->WasOnline); /*0x449b22*/
  return 1; /*0x449b27*/
}



// ==== 0x00449C30  BuildingClass::finalizeAnimation  this=BuildingClass  sig=csp ====
int __thiscall AnimClass::finalizeAnimation(BuildingClass *this)
{
  double v1; // st5
  double v2; // st6
  double v3; // st7
  int missionStatus; // eax
  int v6; // eax
  int *location; // esi
  BuildingTypeClass *Type; // eax
  BuildingTypeClass *v9; // eax
  int BarrelStartPitch; // ebx
  _DWORD *Value; // eax
  __int16 v12; // dx
  int unknown___2; // ebx
  _DWORD *v14; // eax
  __int16 v15; // dx
  __int16 v16; // cx
  __int16 v17; // cx
  int *v19; // eax
  ObjectClass *v20; // ebx
  int (__thiscall **ptr_0)(BuildingClass *); // edx
  int v22; // eax
  BuildingTypeClass *v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  LightSourceClass *LightSource; // ecx
  int v29; // edi
  BuildingClass *v30; // esi
  AbstractClass *target; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  SlaveManagerClass *slaveManager; // ecx
  BuildingTypeClass *v37; // eax
  __int16 v38; // dx
  char v39; // al
  int j; // esi
  int v... [29284 chars total]



// ==== 0x0044ABD0  BuildingClass::FireLaser  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::FireLaser(BuildingClass *this, int a2, int a3, int a4)
{
  int *v5; // eax
  char *v6; // eax
  int v7; // eax
  int v8; // ecx
  int v10; // [esp-20h] [ebp-44h]
  int v11; // [esp-14h] [ebp-38h]
  char *v12; // [esp+14h] [ebp-10h]
  _DWORD v13[3]; // [esp+18h] [ebp-Ch] BYREF

  v12 = (char *)__2_YAPAXI_Z(0x5Cu); /*0x44abef*/
  if ( v12 ) /*0x44abf3*/
  {
    v11 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1192); /*0x44ac10*/
    LOWORD(v10) = this->?->base[5]; /*0x44ac42*/
    HIWORD(v10) = BYTE2(this->?->base[5]); /*0x44ac4c*/
    v5 = (int *)(*((int (__thiscall **)(BuildingClass *, _DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass + 44))( /*0x44ac7f*/
                  this,
                  v13,
                  0,
                  0,
                  0,
                  0);
    v6 = TimerClass::Construct(v12, *v5, v5[1], v5[2], a2, a3, a4, 0, 1, v10, 0, 0, v11, 0, 1, 1065353216, 0); /*0x44ac9e*/
    if ( v6 ) /*0x44aca5*/
    {
      v6[32] = 1; /*0x44aca7*/
      *((_DWORD *)v6 + 7) = 3; /*0x44acab*/
    }
  }
  v7 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44acb8*/
  v8 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1188); /*0x44acc4*/
  this->SupportingPrisms = 0; /*0x44acca*/
  this->?[0] = v7; /*0x44acd0*/
  this->?[1] = a3; /*0x44acd8*/
  this->?[2] = v8; /*0x44acdc*/
  return a3; /*0x44acc3*/
}



// ==== 0x0044ACF0  BuildingClass::ProcessActiveUpdate  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessActiveUpdate(BuildingClass *this)
{
  double v1; // st7
  BuildingTypeClass *Type; // eax
  int missionStatus; // ecx
  int v6; // eax
  AbstractClass *v8; // edi
  AbstractClass *v9; // eax
  int v10; // eax
  AbstractClass *v12; // edi
  AbstractClass *v13; // eax
  _WORD *v14; // ebx
  _WORD *v15; // eax
  void (__thiscall **v16)(BuildingClass *, int, _DWORD); // eax
  unsigned __int8 (__thiscall **ptr_0)(BuildingClass *); // edx
  int v18; // ebp
  int (__thiscall **v19)(BuildingClass *, AbstractClass *, int, int); // eax
  int v20; // edi
  int v21; // edx
  BuildingTypeClass *v22; // eax
  char ROT; // bl
  _DWORD *Value; // eax
  __int16 v25; // dx
  unsigned __int8 (__thiscall **v26)(BuildingClass *); // eax
  _WORD *v27; // eax
  _WORD *v28; // eax
  _WORD *v29; // eax
  BuildingClass *v30; // ecx
  BuildingTypeClass *v31; // eax
  BuildingClass *v32; // ebx
  int *v33; // eax
  int SupportingPrisms; // ecx
  HouseClass *owner; // eax
  ObjectClass *v36; // edi
  int v37; // edx
  int v38; // ecx
  _DWORD *v39; // edx
  int v40; // eax
  int v41; // edx
  int v42; // eax
  int v43; // ebp
  void *v44; // edi
  int *v45; // eax
  int v46; // ecx
  int v47; // edx
  int v48; // eax
  int v49; // edx
  int v52; // ecx
  char *v53; // eax
  int v54; // ecx
  int v55; // eax
  int v58; // ecx
  char *v59; // eax
  int v60; // edx
  int v61; // eax
  AbstractClass *target; // [esp+1Ch] [ebp-84h]
  double v65; // [esp+20h] [ebp-80h]
  _DWORD v66[2]; // [esp+38h] [ebp-68h] BYREF
  double v67; // [esp+40h] [ebp-60h] BYREF
  int bunkersCount; // [esp+4Ch] [ebp-54h] BYREF
  int v69; // [esp+50h] [ebp-50h] BYREF
  char v70[4]; // [esp+54h] [ebp-4Ch] BYREF
  int v72; // [esp+64h] [ebp-3Ch]
  int v73; // [esp+68h] [ebp-38h]
  int v74; // [esp+6Ch] [ebp-34h]
  int v75; // [esp+74h] [ebp-2Ch]
  int v76; // [esp+78h] [ebp-28h]
  char v77[12]; // [esp+7Ch] [ebp-24h] BYREF
  char v78[12]; // [esp+88h] [ebp-18h] BYREF
  char v79[12]; // [esp+94h] [ebp-Ch] BYREF

  Type = this->Type; /*0x44ad01*/
  if ( !Type->SAM ) /*0x44ad0f*/
  {
    if ( !this->? ) /*0x44af86*/
    {
      (*((void (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x44af95*/
      ptr_0 = (unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x44af9b*/
      this->SupportingPrisms = 0; /*0x44af9f*/
      if ( ptr_0[268](this) ) /*0x44afa5*/
        BuildingClass::GetType_Thunk(this); /*0x44afb1*/
      if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) != 28 ) /*0x44afc3*/
      {
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 5, 0); /*0x44afd0*/
        (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 123))(this); /*0x44afda*/
        return 1; /*0x44afec*/
      }
      return 1; /*0x44afc3*/
    }
    v18 = (*((int (__thiscall **)(BuildingClass *, AbstractClass *))this->TechnoClass + 185))(this, this->?); /*0x44affe*/
    v19 = (int (__thiscall **)(BuildingClass *, AbstractClass *, int, int))this->TechnoClass; /*0x44b000*/
    target = this->?; /*0x44b005*/
    this->BuildingClass_field_bool_6DD = 1; /*0x44b008*/
    v20 = v19[240](this, target, v18, 1); /*0x44b015*/
    if ( v20 == 2 ) /*0x44b01a*/
    {
      if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 255))(this) ) /*0x44b024*/
      {
        if ( this->Type->TurretAnimIsVoxel ) /*0x44b038*/
        {
          v21 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *, AbstractClass *))this->TechnoClass + 314))( /*0x44b05c*/
                             this,
                             &bunkersCount,
                             this->?);
          v22 = this->Type; /*0x44b05e*/
          v66[1] = v21; /*0x44b064*/
          if ( !v22->? /*0x44b0a4*/
            || (ROT = v22->?,
                Value = ProgressTimer::GetValue((ProgressTimer *)this->?, &bunkersCount),
                LOBYTE(v25) = 0,
                HIBYTE(v25) = ROT,
                abs16(v25) >= (int)abs16(*(_WORD *)Value - LOWORD(v66[1]))) )
          {
            FacingClass::Set_SyncLog((char *)this->?, &v66[1]); /*0x44b0b3*/
            v20 = (*((int (__thiscall **)(BuildingClass *, AbstractClass *, int, int))this->TechnoClass + 240))( /*0x44b0cc*/
                    this,
                    this->?,
                    v18,
                    1);
          }
        }
      }
    }
    switch ( v20 ) /*0x44b0d7*/
    {
      case 0: /*0x44b0d7*/
        if ( this->UpgradeLevel ) /*0x44b2bc*/
        {
          v30 = (BuildingClass *)this->Upgrades[0]; /*0x44b2c6*/
          if ( v30 ) /*0x44b2ce*/
          {
            if ( BuildingClass::processCapture(v30) ) /*0x44b2d0*/
            {
              (*((void (__thiscall **)(BuildingClass *, AbstractClass *, _DWORD))this->TechnoClass + 243))( /*0x44b2e9*/
                this,
                this->?,
                0);
              (*((void (__thiscall **)(BuildingClass *, AbstractClass *, int))this->TechnoClass + 243))( /*0x44b2f3*/
                this,
                this->?,
                1);
            }
            goto LABEL_116; /*0x44b2f3*/
          }
        }
        v31 = this->Type; /*0x44b2fe*/
        if ( v31 != *(BuildingTypeClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1176) ) /*0x44b30a*/
        {
          if ( !v31->IsAnimDelayedFire ) /*0x44b638*/
          {
            (*((void (__thiscall **)(BuildingClass *, AbstractClass *, int))this->TechnoClass + 243))( /*0x44b6d0*/
              this,
              this->?,
              v18);
            goto LABEL_116; /*0x44b6d0*/
          }
          v60 = v75; /*0x44b644*/
          this->DelayBeforeFiring = v31->DelayedFireDelay; /*0x44b64e*/
          v61 = v76; /*0x44b654*/
          this->PrismTargetCoords[0] = v18; /*0x44b65a*/
          this->PrismStage[0] = 1; /*0x44b65c*/
          this->PrismTargetCoords[1] = v60; /*0x44b666*/
          this->PrismTargetCoords[2] = v61; /*0x44b669*/
          BuildingClass::ClearAnims(this, 3); /*0x44b66e*/
          BuildingClass::GetHealthRatio(this); /*0x44b675*/
          _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44b67a*/
          __asm /*0x44b680*/
          {
            fcomp qword ptr [ecx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x44b68b*/
          {
            v58 = 1; /*0x44b693*/
            v59 = &this->Type->__pad_F70[660]; /*0x44b698*/
          }
          else
          {
            v58 = 0; /*0x44b6a5*/
            v59 = &this->Type->__pad_F70[644]; /*0x44b6a7*/
          }
          if ( v59 && *v59 ) /*0x44b6b0*/
            goto LABEL_107; /*0x44b6b3*/
LABEL_116:
          if ( BYTE1(this->Type->?) ) /*0x44b6dc*/
          {
            TechnoClass::GattlingRateUp_GattlingRateDownReset((float *)this, this->?); /*0x44b6ef*/
            this->? = 0; /*0x44b6f4*/
          }
          else
          {
            ++this->?; /*0x44b713*/
          }
          return 1; /*0x44b70a*/
        }
        v32 = 0; /*0x44b319*/
        v66[0] = 0x7FFFFFFF; /*0x44b31b*/
        v33 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 43))(this, v77); /*0x44b323*/
        v72 = *v33; /*0x44b32b*/
        SupportingPrisms = this->SupportingPrisms; /*0x44b32f*/
        v73 = v33[1]; /*0x44b338*/
        v74 = v33[2]; /*0x44b345*/
        if ( SupportingPrisms >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1184) ) /*0x44b351*/
          goto LABEL_102; /*0x44b351*/
        owner = this->?; /*0x44b357*/
        v66[1] = 0; /*0x44b35d*/
        bunkersCount = owner->bunkersCount; /*0x44b366*/
        if ( bunkersCount <= 0 ) /*0x44b36a*/
          goto LABEL_102; /*0x44b36a*/
        break; /*0x44b36a*/
      case 1: /*0x44b0d7*/
      case 5: /*0x44b0d7*/
      case 6: /*0x44b0d7*/
      case 8: /*0x44b0d7*/
        (*((void (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x44b0e3*/
        v26 = (unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x44b0e9*/
        this->SupportingPrisms = 0; /*0x44b0ed*/
        if ( v26[268](this) ) /*0x44b0f3*/
          BuildingClass::GetType_Thunk(this); /*0x44b0ff*/
        if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 28 ) /*0x44b111*/
          return 1; /*0x44b111*/
        if ( BYTE1(this->Type->?) ) /*0x44b119*/
        {
          TechnoClass::DrainAmmo((char *)this, this->?); /*0x44b12c*/
          this->? = 0; /*0x44b131*/
        }
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 5, 0); /*0x44b13e*/
        (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 123))(this); /*0x44b148*/
        goto LABEL_53; /*0x44b148*/
      case 2: /*0x44b0d7*/
        if ( this->? ) /*0x44b187*/
        {
          v28 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, int *, AbstractClass *))this->TechnoClass + 314))( /*0x44b19b*/
                           this,
                           &v69,
                           this->?);
          FacingClass::Update((char *)this->?, v28); /*0x44b1a8*/
        }
        if ( BYTE1(this->Type->?) ) /*0x44b1b3*/
        {
          TechnoClass::GattlingRateUp_GattlingRateDownReset((float *)this, this->?); /*0x44b1c6*/
          this->? = 0; /*0x44b1cb*/
        }
        return 2; /*0x44b1dd*/
      case 3: /*0x44b0d7*/
        if ( this->? ) /*0x44b1de*/
        {
          v29 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, char *, AbstractClass *))this->TechnoClass + 314))( /*0x44b1f2*/
                           this,
                           v70,
                           this->?);
          FacingClass::Update((char *)this->?, v29); /*0x44b1ff*/
        }
        if ( BYTE1(this->Type->?) ) /*0x44b20a*/
        {
          TechnoClass::GattlingRateUp_GattlingRateDownReset((float *)this, this->?); /*0x44b21d*/
          this->? = 0; /*0x44b222*/
        }
        else
        {
          ++this->?; /*0x44b23c*/
        }
        return 2; /*0x44b234*/
      case 9: /*0x44b0d7*/
        (*((void (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 279))(this, 0); /*0x44b289*/
        if ( BYTE1(this->Type->?) ) /*0x44b295*/
        {
          TechnoClass::DrainAmmo((char *)this, this->?); /*0x44b2ac*/
          this->? = 0; /*0x44b2b1*/
        }
        goto LABEL_53; /*0x44b2b7*/
      case 10: /*0x44b0d7*/
        if ( !BYTE1(this->Type->?) ) /*0x44b25d*/
          return 1; /*0x44b25d*/
        TechnoClass::DrainAmmo((char *)this, this->?); /*0x44b26c*/
        this->? = 0; /*0x44b271*/
        return 1; /*0x44b283*/
      default:
LABEL_53:
        if ( this->? ) /*0x44b14e*/
        {
          v27 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, char *, AbstractClass *))this->TechnoClass + 314))( /*0x44b162*/
                           this,
                           v70,
                           this->?);
          FacingClass::Update((char *)this->?, v27); /*0x44b16f*/
        }
        this->? = 0; /*0x44b174*/
        return 1; /*0x44b174*/
    }
    while ( 1 ) /*0x44b37d*/
    {
      v36 = *(ObjectClass **)(this->?->absorbersCount + 4 * v66[1]); /*0x44b37d*/
      if ( v36 && v36->isAliveFlag && v36[7].health == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1176) ) /*0x44b3a8*/
      {
        v37 = v36[4].ambientSoundController[0]; /*0x44b3ae*/
        v38 = v36[4].ambientSoundController[2]; /*0x44b3b4*/
        if ( v37 != -1 ) /*0x44b3bd*/
        {
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v37 >= v38 ) /*0x44b3c8*/
            goto LABEL_86; /*0x44b3c8*/
          v38 -= *(_DWORD *)&stru_A8EB00.?[416] - v37; /*0x44b3ca*/
        }
        if ( !v38 ) /*0x44b3ce*/
        {
LABEL_86:
          if ( !v36[10].customSound_controller[3] /*0x44b406*/
            && !(unsigned __int8)ObjectClass::HasLocation(v36)
            && (*((int (__thiscall **)(ObjectClass *))v36->AbstractClass + 97))(v36) != 1
            && v36 != (ObjectClass *)this )
          {
            v39 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, char *))v36->AbstractClass + 43))(v36, v78); /*0x44b41f*/
            v40 = v39[1]; /*0x44b42c*/
            LODWORD(v67) = v72 - *v39; /*0x44b42f*/
            __asm { fild dword ptr [esp+80h+var_60] } /*0x44b433*/
            v41 = v39[2]; /*0x44b437*/
            LODWORD(v67) = v40 - v73; /*0x44b43c*/
            __asm { fild dword ptr [esp+80h+var_60] } /*0x44b444*/
            LODWORD(v67) = v74 - v41; /*0x44b44a*/
            __asm /*0x44b44e*/
            {
              fild dword ptr [esp+80h+var_60]
              fstp [esp+80h+var_28]
              fstp [esp+80h+var_48]
              fld [esp+80h+var_28]
              fstp [esp+80h+var_60]
              fld st
              fmul st, st(1)
              fld [esp+80h+var_60]
              fmul [esp+80h+var_60]
              faddp st(1), st
              fld [esp+80h+var_48]
              fmul [esp+80h+var_48]
              faddp st(1), st
              fstp [esp+80h+var_80]; double
              fstp st
            }
            Math::Sqrt(v65); /*0x44b47f*/
            LOWORD(v42) = Math::RoundToInt(v1); /*0x44b487*/
            v43 = v42; /*0x44b492*/
            if ( v42 <= (*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 90))(this, 1) /*0x44b4a6*/
              && (!v32 || v43 < v66[0]) )
            {
              v32 = (BuildingClass *)v36; /*0x44b4a8*/
              v66[0] = v43; /*0x44b4aa*/
            }
          }
        }
      }
      if ( ++v66[1] >= bunkersCount ) /*0x44b4bd*/
      {
        if ( v32 ) /*0x44b4c5*/
        {
          v44 = this->TechnoClass; /*0x44b4d5*/
          ++this->SupportingPrisms; /*0x44b4d7*/
          v45 = (int *)(*((int (__thiscall **)(BuildingClass *, char *, _DWORD, _DWORD, _DWORD, _DWORD))v44 + 44))( /*0x44b4f6*/
                         this,
                         v79,
                         0,
                         0,
                         0,
                         0);
          v46 = *v45; /*0x44b502*/
          v47 = v45[1]; /*0x44b504*/
          v48 = v45[2]; /*0x44b507*/
          v32->DelayBeforeFiring = v32->Type->DelayedFireDelay; /*0x44b512*/
          v32->PrismStage[0] = 2; /*0x44b51e*/
          v32->PrismTargetCoords[0] = v46; /*0x44b528*/
          v32->PrismTargetCoords[1] = v47; /*0x44b52c*/
          v32->PrismTargetCoords[2] = v48; /*0x44b52f*/
          BuildingClass::ClearAnims(v32, 3); /*0x44b532*/
          BuildingClass::GetHealthRatio(v32); /*0x44b539*/
          _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44b53e*/
          __asm /*0x44b544*/
          {
            fcomp qword ptr [ecx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x44b54f*/
          {
            v52 = 1; /*0x44b557*/
            v53 = &v32->Type->__pad_F70[660]; /*0x44b55c*/
          }
          else
          {
            v52 = 0; /*0x44b569*/
            v53 = &v32->Type->__pad_F70[644]; /*0x44b56b*/
          }
          if ( v53 && *v53 ) /*0x44b578*/
            BuildingClass::PlayAnim(v32, v49, v53, 10, v52, 0, 0); /*0x44b58b*/
          goto LABEL_116; /*0x44b590*/
        }
LABEL_102:
        this->DelayBeforeFiring = this->Type->DelayedFireDelay; /*0x44b595*/
        v54 = v76; /*0x44b5b1*/
        this->PrismTargetCoords[0] = 0; /*0x44b5b5*/
        v55 = v75; /*0x44b5b7*/
        this->PrismStage[0] = 1; /*0x44b5bb*/
        this->PrismTargetCoords[1] = v55; /*0x44b5c5*/
        this->PrismTargetCoords[2] = v54; /*0x44b5c8*/
        BuildingClass::ClearAnims(this, 3); /*0x44b5cd*/
        BuildingClass::GetHealthRatio(this); /*0x44b5d4*/
        _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44b5d9*/
        __asm /*0x44b5df*/
        {
          fcomp qword ptr [edx+1700h]
          fnstsw ax
        }
        if ( (_AX & 0x4100) != 0 ) /*0x44b5ea*/
        {
          v58 = 1; /*0x44b5f2*/
          v59 = &this->Type->__pad_F70[660]; /*0x44b5f7*/
        }
        else
        {
          v58 = 0; /*0x44b604*/
          v59 = &this->Type->__pad_F70[644]; /*0x44b606*/
        }
        if ( !v59 || !*v59 ) /*0x44b613*/
          goto LABEL_116; /*0x44b616*/
LABEL_107:
        BuildingClass::PlayAnim(this, _EDX, v59, 10, v58, 0, 0); /*0x44b61c*/
        goto LABEL_116; /*0x44b62b*/
      }
    }
  }
  missionStatus = this->?; /*0x44ad15*/
  if ( missionStatus )
  {
    if ( missionStatus != 1 ) /*0x44ad24*/
    {
      _EAX = MissionClass::GetMissionControl((MissionClass *)this); /*0x44ad28*/
      __asm /*0x44ad2d*/
      {
        fld qword ptr [eax+18h]
        fmul ds:dbl_7E27F8
      }
      LOWORD(v6) = Math::RoundToInt(v1); /*0x44ad36*/
      return v6 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x44ad59*/
    }
    v8 = this->?; /*0x44ad5a*/
    if ( v8 )
      v9 = (*((int (__thiscall **)(AbstractClass *))v8->ptr_0 + 11))(this->?) == 2 ? v8 : 0;
    else
      v9 = 0; /*0x44ad64*/
    if ( this->? && v9 && (*((int (__thiscall **)(AbstractClass *))v9->ptr_0 + 116))(v9) ) /*0x44ad92*/
    {
      v10 = (*((int (__thiscall **)(BuildingClass *, AbstractClass *, _DWORD, int))this->TechnoClass + 240))( /*0x44adae*/
              this,
              this->?,
              0,
              1);
      if ( v10 == 5 || v10 == 6 || v10 == 8 ) /*0x44adc1*/
      {
        (*((void (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x44ae0d*/
        this->? = 0; /*0x44ae13*/
        return 1; /*0x44ae25*/
      }
      if ( v10 != 2 ) /*0x44adc6*/
      {
        if ( !v10 ) /*0x44adca*/
        {
          (*((void (__thiscall **)(BuildingClass *, AbstractClass *, _DWORD))this->TechnoClass + 243))(this, this->?, 0); /*0x44addc*/
          (*((void (__thiscall **)(BuildingClass *, AbstractClass *, int))this->TechnoClass + 243))(this, this->?, 1); /*0x44adef*/
          this->? = 0; /*0x44adf5*/
          return 1; /*0x44ae07*/
        }
        return 1; /*0x44b186*/
      }
    }
    else
    {
      (*((void (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x44ae2b*/
    }
    this->? = 0; /*0x44ae31*/
    return 1; /*0x44ae43*/
  }
  if ( Type->Powered ) /*0x44ae44*/
  {
    if ( Type->PowerDrain > 0 ) /*0x44ae54*/
    {
      HouseClass::GetPowerRatio(this->?); /*0x44ae5c*/
      __asm /*0x44ae61*/
      {
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x44ae6c*/
        return 1; /*0x44ae6c*/
    }
  }
  v12 = this->?; /*0x44ae72*/
  if ( v12 )
    v13 = (*((int (__thiscall **)(AbstractClass *))v12->ptr_0 + 11))(this->?) == 2 ? v12 : 0;
  else
    v13 = 0; /*0x44ae7c*/
  if ( !this->? || !v13 || !(*((int (__thiscall **)(AbstractClass *))v13->ptr_0 + 116))(v13) ) /*0x44aeaa*/
  {
    (*((void (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x44af56*/
    v16 = (void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass; /*0x44af5c*/
    this->? = 0; /*0x44af63*/
    v16[122](this, 5, 0); /*0x44af69*/
    (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 123))(this); /*0x44af73*/
    return 1; /*0x44af85*/
  }
  if ( (unsigned __int8)TimerClass::Active((int)this->?) ) /*0x44aec0*/
    return 1; /*0x44aec7*/
  v14 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, int *, AbstractClass *))this->TechnoClass + 314))( /*0x44aee3*/
                   this,
                   &bunkersCount,
                   this->?);
  if ( abs16(*(_WORD *)ProgressTimer::GetValue((ProgressTimer *)this->?, &v67) - *v14) > 0x2000u ) /*0x44af0d*/
  {
    v15 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD *, AbstractClass *))this->TechnoClass + 314))( /*0x44af36*/
                     this,
                     &v66[1],
                     this->?);
    FacingClass::Update((char *)this->?, v15); /*0x44af3f*/
  }
  else
  {
    this->? = 1; /*0x44af0f*/
  }
  return 1; /*0x44ad52*/
}



// ==== 0x0044B760  AbstractClass::COMStub_133  this=BuildingClass  sig=csp ====
// attributes: thunk
int __thiscall AbstractClass::COMStub_133(AbstractClass *this)
{
  MissionClass *v2; // [esp+4h] [ebp+4h]

  return IPersistStream::StubReturn450(v2);
}



// ==== 0x0044B770  AbstractClass::COMStub_137  this=BuildingClass  sig=csp ====
// attributes: thunk
int __thiscall AbstractClass::COMStub_137(AbstractClass *this)
{
  MissionClass *v2; // [esp+4h] [ebp+4h]

  return AircraftClass::CheckMissionStatus(v2);
}



// ==== 0x0044B780  BuildingClass::ProcessRepair  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessRepair(BuildingClass *this)
{
  double v1; // st7
  BuildingTypeClass *Type; // eax
  int missionStatus; // eax
  int result; // eax
  int v6; // edx
  int v8; // ecx
  char *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edx
  int (__thiscall **ptr_0)(BuildingClass *, int); // edx
  int v17; // eax
  int v18; // eax
  int *v19; // eax
  void (__thiscall **v20)(BuildingClass *, int, int); // esi
  int v21; // eax
  void (__thiscall **v22)(BuildingClass *, int, int); // esi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // edx
  Power *v32; // esi
  void (__thiscall **v33)(BuildingClass *, int, int); // esi
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v41; // ecx
  char *v42; // eax
  int v43; // edx
  int v45; // ecx
  char *v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // edx
  int v50; // edx
  int (__thiscall **v52)(BuildingClass *, int); // eax
  int v53; // eax
  bool v54; // zf
  char isOwnedByCurrentPlayer; // al
  __int64 v56; // rax
  int v59; // ecx
  char *v60; // eax
  int v61; // edx
  int v63; // ecx
  char *v64; // eax
  int Member; // eax
  TechnoClass *v66; // esi
  int v67; // eax
  _DWORD **v68; // eax
  AbstractClass *focus; // ecx
  _DWORD *v70; // eax
  void (__thiscall **v71)(TechnoClass *, void *, int); // edi
  void *v72; // eax
  int v75; // ecx
  char *v76; // eax
  int v77; // edx
  int v79; // ecx
  char *v80; // eax
  int v81; // eax
  int v82; // edx
  int v85; // ecx
  char *v86; // eax
  int v89; // ecx
  char *v90; // eax
  void (__thiscall **v91)(BuildingClass *, int, int); // eax
  int v92; // eax
  int (__thiscall **v93)(BuildingClass *, int); // ebx
  int v94; // esi
  int v95; // eax
  int v96; // eax
  FootClass *v97; // eax
  int v98; // esi
  bool v100; // bl
  int v101; // eax
  bool v102; // cl
  bool v103; // al
  int v105; // eax
  TechnoClass *v106; // esi
  int (__thiscall **v107)(BuildingClass *, int *, int, int); // ebx
  int v108; // eax
  _DWORD **v109; // eax
  AbstractClass *v110; // ecx
  _DWORD *v111; // eax
  void (__thiscall **v112)(TechnoClass *, void *, int); // ebx
  void *v113; // eax
  int v114; // edx
  int v117; // ecx
  char *v118; // eax
  int v119; // eax
  _DWORD *v120; // esi
  _DWORD *v121; // esi
  int v122; // edx
  int v124; // ecx
  char *v125; // eax
  int v126; // edx
  int v129; // ecx
  char *v130; // eax
  int v131; // eax
  _DWORD *v132; // ebx
  int v133; // eax
  int (__thiscall **v134)(BuildingClass *, int); // esi
  int v135; // eax
  int v136; // eax
  int v137; // eax
  int v139; // ebx
  int v140; // eax
  _DWORD *v141; // esi
  int v143; // [esp+1Ch] [ebp-3Ch]
  int v144; // [esp+1Ch] [ebp-3Ch]
  int v145; // [esp+1Ch] [ebp-3Ch]
  int v146; // [esp+1Ch] [ebp-3Ch]
  int v147; // [esp+1Ch] [ebp-3Ch]
  BuildingClass *v148; // [esp+20h] [ebp-38h]
  char v149; // [esp+33h] [ebp-25h]
  char v150; // [esp+33h] [ebp-25h]
  StreamClass v151; // [esp+34h] [ebp-24h] BYREF
  int v152; // [esp+48h] [ebp-10h] BYREF
  int v153; // [esp+4Ch] [ebp-Ch]
  int v154; // [esp+50h] [ebp-8h]

  _EBP = this; /*0x44b78b*/
  if ( this->Type->Bunker ) /*0x44b797*/
    BuildingClass::UpdateBunker(v148, v1); /*0x44b7a3*/
  Type = _EBP->Type; /*0x44b7a8*/
  if ( Type->ConstructionYard ) /*0x44b7ae*/
  {
    missionStatus = _EBP->?; /*0x44b7bc*/
    if ( missionStatus ) /*0x44b7c4*/
    {
      if ( missionStatus == 2 && !(unsigned __int8)Team::AllMembersValid((Team *)_EBP) ) /*0x44b7d1*/
      {
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD))_EBP->TechnoClass + 122))(_EBP, 5, 0); /*0x44b7e6*/
        BuildingClass::ClearAnims(_EBP, 7); /*0x44b7f0*/
        return 1; /*0x44b801*/
      }
    }
    else
    {
      BuildingClass::StartProduction(_EBP, 2); /*0x44b806*/
      BuildingClass::GetHealthRatio(_EBP); /*0x44b80d*/
      _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44b812*/
      __asm /*0x44b817*/
      {
        fcomp qword ptr [eax+1700h]
        fnstsw ax
      }
      if ( (_EAX & 0x4100) != 0 ) /*0x44b822*/
      {
        v8 = 1; /*0x44b82a*/
        v9 = &_EBP->Type->__pad_F70[456]; /*0x44b82f*/
      }
      else
      {
        v8 = 0; /*0x44b83c*/
        v9 = &_EBP->Type->__pad_F70[440]; /*0x44b83e*/
      }
      if ( v9 && *v9 ) /*0x44b847*/
        BuildingClass::PlayAnim(_EBP, v6, v9, 7, v8, 0, 0); /*0x44b854*/
      _EBP->? = 2; /*0x44b859*/
    }
    return 1; /*0x44b86f*/
  }
  if ( Type->Hospital )
  {
    v10 = _EBP->?; /*0x44b87e*/
    if ( v10 )
    {
      if ( v10 == 2 ) /*0x44b88f*/
      {
        if ( Locomotor::GetSpeed((Locomotor *)_EBP->__pad_628) || (v11 = *(_DWORD *)&_EBP->__pad_628[12]) == 0 ) /*0x44b8ae*/
        {
          LOBYTE(_EBP->RepairProgress[1]) = 0; /*0x44b8df*/
        }
        else
        {
          v12 = *(_DWORD *)&_EBP->__pad_628[16]; /*0x44b8b0*/
          v13 = _EBP->RepairProgress[0]; /*0x44b8b6*/
          LOBYTE(_EBP->RepairProgress[1]) = 1; /*0x44b8be*/
          _EBP->RepairProgress[0] = v12 + v13; /*0x44b8c5*/
          v14 = v153; /*0x44b8d1*/
          *(_DWORD *)_EBP->__pad_628 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44b8d5*/
          *(_DWORD *)&_EBP->__pad_628[4] = v14; /*0x44b8d7*/
          *(_DWORD *)&_EBP->__pad_628[8] = v11; /*0x44b8da*/
        }
        _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44b8e6*/
        __asm /*0x44b8eb*/
        {
          fild dword ptr [ebp+620h]
          fld qword ptr [eax+16F0h]
          fmul ds:dbl_7E27F8
          fcompp
          fnstsw ax
        }
        if ( (_EAX & 0x4100) == 0 ) /*0x44b904*/
          return 1; /*0x44b904*/
        ptr_0 = (int (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass; /*0x44b90a*/
        _EBP->BuildingClass_field_bool_6DD = 0; /*0x44b911*/
        _EBP->RepairProgress[0] = 0; /*0x44b918*/
        v17 = ptr_0[157](_EBP, 28) - 10; /*0x44b924*/
        if ( v17 ) /*0x44b927*/
        {
          v18 = v17 - 22; /*0x44b929*/
          if ( !v18 ) /*0x44b92c*/
          {
            v22 = (void (__thiscall **)(BuildingClass *, int, int))_EBP->TechnoClass; /*0x44b9e6*/
            v144 = g_TerrainTypeTable; /*0x44b9e9*/
            v23 = LinkedList::Pop((LinkedList *)_EBP->?); /*0x44b9f0*/
            v22[64](_EBP, v23, v144); /*0x44b9f8*/
            return 1; /*0x44ba0a*/
          }
          if ( v18 != 1 ) /*0x44b933*/
            return 1; /*0x44b9df*/
          if ( (unsigned __int8)House::IsHumanPlayer((House *)_EBP->?) ) /*0x44b93f*/
          {
            v19 = (int *)(*((int (__thiscall **)(BuildingClass *, void **))_EBP->TechnoClass + 110))(_EBP, &v151.m_Data); /*0x44b952*/
            if ( (unsigned __int8)CreateTriggerClassIfFarEnough(8, *v19, *v19) ) /*0x44b960*/
              VoxClass::FindAndPlay((VoxClass *)&stru_818E00.?[6], -1); /*0x44b973*/
            v152 = _EBP->?[0]; /*0x44b981*/
            v153 = _EBP->?[1]; /*0x44b98e*/
            v154 = _EBP->?[2]; /*0x44b999*/
            StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1816), &v152, 0); /*0x44b9a3*/
          }
        }
        v20 = (void (__thiscall **)(BuildingClass *, int, int))_EBP->TechnoClass; /*0x44b9ad*/
        v143 = g_TerrainTypeTable; /*0x44b9b0*/
        v21 = LinkedList::Pop((LinkedList *)_EBP->?); /*0x44b9b7*/
        v20[64](_EBP, v21, v143); /*0x44b9bf*/
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD))_EBP->TechnoClass + 122))(_EBP, 5, 0); /*0x44b9cd*/
        return 1; /*0x44b9cd*/
      }
    }
    else
    {
      _EBP->? = 2; /*0x44ba0b*/
      _EBP->BuildingClass_field_bool_6DD = 0; /*0x44ba15*/
      _EBP->RepairProgress[0] = 0; /*0x44ba1c*/
      v24 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44ba22*/
      *(_DWORD *)&_EBP->__pad_628[12] = 1; /*0x44ba32*/
      *(_DWORD *)_EBP->__pad_628 = v24; /*0x44ba38*/
      *(_DWORD *)&_EBP->__pad_628[4] = v153; /*0x44ba3e*/
      *(_DWORD *)&_EBP->__pad_628[8] = 1; /*0x44ba41*/
      if ( _EBP->Type->? != -1 )
      {
        v25 = _EBP->? - 1; /*0x44ba5f*/
        _EBP->? = v25; /*0x44ba62*/
        _EBP->? = v25 <= 0 ? 0 : v25;
      }
    }
LABEL_231:
    _EAX = MissionClass::GetMissionControl((MissionClass *)_EBP); /*0x44c819*/
    __asm /*0x44c820*/
    {
      fld qword ptr [eax+10h]
      fmul ds:dbl_7E27F8
    }
    LOWORD(result) = Math::RoundToInt(v1); /*0x44c829*/
    return result; /*0x44c835*/
  }
  if ( Type->Armory )
  {
    v26 = _EBP->?; /*0x44ba87*/
    if ( v26 )
    {
      if ( v26 == 2 ) /*0x44ba98*/
      {
        if ( Locomotor::GetSpeed((Locomotor *)_EBP->__pad_628) || (v27 = *(_DWORD *)&_EBP->__pad_628[12]) == 0 ) /*0x44bab7*/
        {
          LOBYTE(_EBP->RepairProgress[1]) = 0; /*0x44bae8*/
        }
        else
        {
          v28 = *(_DWORD *)&_EBP->__pad_628[16]; /*0x44bab9*/
          v29 = _EBP->RepairProgress[0]; /*0x44babf*/
          LOBYTE(_EBP->RepairProgress[1]) = 1; /*0x44bac7*/
          _EBP->RepairProgress[0] = v28 + v29; /*0x44bace*/
          v30 = v153; /*0x44bada*/
          *(_DWORD *)_EBP->__pad_628 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44bade*/
          *(_DWORD *)&_EBP->__pad_628[4] = v30; /*0x44bae0*/
          *(_DWORD *)&_EBP->__pad_628[8] = v27; /*0x44bae3*/
        }
        _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44baef*/
        __asm /*0x44baf4*/
        {
          fild dword ptr [ebp+620h]
          fld qword ptr [eax+16F0h]
          fmul ds:dbl_7E27F8
          fcompp
          fnstsw ax
        }
        if ( (_EAX & 0x4100) != 0 ) /*0x44bb0d*/
        {
          v32 = (Power *)(Team::GetMember((Team *)_EBP, 0) + 336); /*0x44bb1b*/
          if ( VeinholeClass::GetState((float *)&v32->Power_field_0x0) ) /*0x44bb23*/
            Power::ChangedHouse(v32, 1); /*0x44bb30*/
          else
            Timer::SetFlag((Timer *)v32, 1); /*0x44bb37*/
          v33 = (void (__thiscall **)(BuildingClass *, int, int))_EBP->TechnoClass; /*0x44bb42*/
          v145 = g_TerrainTypeTable; /*0x44bb45*/
          v34 = LinkedList::Pop((LinkedList *)_EBP->?); /*0x44bb4c*/
          v33[64](_EBP, v34, v145); /*0x44bb54*/
          (*((void (__thiscall **)(BuildingClass *, int, _DWORD))_EBP->TechnoClass + 122))(_EBP, 5, 0); /*0x44bb62*/
        }
      }
    }
    else
    {
      _EBP->? = 2; /*0x44bb6d*/
      _EBP->BuildingClass_field_bool_6DD = 0; /*0x44bb77*/
      _EBP->RepairProgress[0] = 0; /*0x44bb7e*/
      v35 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44bb84*/
      *(_DWORD *)&_EBP->__pad_628[12] = 1; /*0x44bb94*/
      *(_DWORD *)_EBP->__pad_628 = v35; /*0x44bb9a*/
      *(_DWORD *)&_EBP->__pad_628[4] = v153; /*0x44bba0*/
      *(_DWORD *)&_EBP->__pad_628[8] = 1; /*0x44bba3*/
      v36 = _EBP->? - 1; /*0x44bbac*/
      _EBP->? = v36; /*0x44bbb1*/
      _EBP->? = v36 <= 0 ? 0 : v36;
    }
    goto LABEL_231; /*0x44bb68*/
  }
  if ( Type->UnitRepair )
  {
    v37 = _EBP->?; /*0x44bbd6*/
    if ( v37 )
    {
      v38 = v37 - 1; /*0x44bbe4*/
      if ( v38 )
      {
        if ( v38 == 1 )
        {
          if ( (unsigned __int8)Team::AllMembersValid((Team *)_EBP) )
          {
            if ( !*(_DWORD *)&_EBP->__pad_628[12] ) /*0x44bcc7*/
              *(_DWORD *)&_EBP->__pad_628[12] = 1; /*0x44bcd6*/
            if ( Locomotor::GetSpeed((Locomotor *)_EBP->__pad_628) || (v47 = *(_DWORD *)&_EBP->__pad_628[12]) == 0 ) /*0x44bcf5*/
            {
              LOBYTE(_EBP->RepairProgress[1]) = 0; /*0x44bd26*/
            }
            else
            {
              v48 = *(_DWORD *)&_EBP->__pad_628[16]; /*0x44bcf7*/
              v49 = _EBP->RepairProgress[0]; /*0x44bcfd*/
              LOBYTE(_EBP->RepairProgress[1]) = 1; /*0x44bd05*/
              _EBP->RepairProgress[0] = v48 + v49; /*0x44bd0c*/
              v50 = v153; /*0x44bd18*/
              *(_DWORD *)_EBP->__pad_628 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44bd1c*/
              *(_DWORD *)&_EBP->__pad_628[4] = v50; /*0x44bd1e*/
              *(_DWORD *)&_EBP->__pad_628[8] = v47; /*0x44bd21*/
            }
            _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44bd2d*/
            __asm /*0x44bd32*/
            {
              fild dword ptr [ebp+620h]
              fld qword ptr [eax+16E8h]
              fmul ds:dbl_7E27F8
              fcompp
              fnstsw ax
            }
            if ( (_EAX & 0x4100) != 0
              && (*((int (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass + 157))(_EBP, 19) == 1 )
            {
              v52 = (int (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass; /*0x44bd66*/
              _EBP->BuildingClass_field_bool_6DD = 0; /*0x44bd6d*/
              _EBP->RepairProgress[0] = 0; /*0x44bd74*/
              v53 = v52[157](_EBP, 28) - 1; /*0x44bd80*/
              if ( v53 )
              {
                v54 = v53 == 31; /*0x44bd87*/
                isOwnedByCurrentPlayer = _EBP->?; /*0x44bd8a*/
                if ( v54 )
                {
                  if ( isOwnedByCurrentPlayer /*0x44bfd9*/
                    && !(*(int (__stdcall **)(int *))(_EBP->?->arrayIndex + 24))(&_EBP->?->arrayIndex) )
                  {
                    VoxClass::FindAndPlay((VoxClass *)stru_818E00.?, -1); /*0x44bfea*/
                  }
                  BuildingClass::ClearAnims(_EBP, 8); /*0x44bff3*/
                  BuildingClass::ClearAnims(_EBP, 11); /*0x44bffc*/
                  BuildingClass::GetHealthRatio(_EBP); /*0x44c003*/
                  _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c008*/
                  __asm /*0x44c00e*/
                  {
                    fcomp qword ptr [edx+1700h]
                    fnstsw ax
                  }
                  if ( (_AX & 0x4100) != 0 ) /*0x44c019*/
                  {
                    v75 = 1; /*0x44c021*/
                    v76 = &_EBP->Type->__pad_F70[796]; /*0x44c023*/
                  }
                  else
                  {
                    v75 = 0; /*0x44c030*/
                    v76 = &_EBP->Type->__pad_F70[780]; /*0x44c032*/
                  }
                  if ( v76 && *v76 ) /*0x44c03b*/
                    BuildingClass::PlayAnim(_EBP, *(int *)&DSurface_ViewBounds.__pad_FC[324], v76, 12, v75, 0, 0); /*0x44c048*/
                  BuildingClass::GetHealthRatio(_EBP); /*0x44c04f*/
                  _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c054*/
                  __asm /*0x44c059*/
                  {
                    fcomp qword ptr [eax+1700h]
                    fnstsw ax
                  }
                  if ( (_EAX & 0x4100) != 0 ) /*0x44c064*/
                  {
                    v79 = 1; /*0x44c06c*/
                    v80 = &_EBP->Type->__pad_F70[184]; /*0x44c06e*/
                  }
                  else
                  {
                    v79 = 0; /*0x44c07b*/
                    v80 = &_EBP->Type->__pad_F70[168]; /*0x44c07d*/
                  }
                  if ( v80 && *v80 ) /*0x44c086*/
                    BuildingClass::PlayAnim(_EBP, v77, v80, 3, v79, 0, 0); /*0x44c093*/
                  _EBP->? = 1; /*0x44c098*/
                }
                else
                {
                  if ( isOwnedByCurrentPlayer ) /*0x44bd98*/
                  {
                    v56 = ((__int64 (__thiscall *)(BuildingClass *, int *))*((_DWORD *)_EBP->TechnoClass + 110))( /*0x44bda4*/
                            _EBP,
                            &v151.m_Position);
                    if ( (unsigned __int8)CreateTriggerClassIfFarEnough(8, SHIDWORD(v56), *(_DWORD *)v56) ) /*0x44bdb2*/
                      VoxClass::FindAndPlay((VoxClass *)&stru_818E00.?[6], -1); /*0x44bdc5*/
                  }
                  BuildingClass::ClearAnims(_EBP, 8); /*0x44bdce*/
                  BuildingClass::ClearAnims(_EBP, 11); /*0x44bdd7*/
                  BuildingClass::GetHealthRatio(_EBP); /*0x44bdde*/
                  _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44bde3*/
                  __asm /*0x44bde9*/
                  {
                    fcomp qword ptr [edx+1700h]
                    fnstsw ax
                  }
                  if ( (_AX & 0x4100) != 0 ) /*0x44bdf4*/
                  {
                    v59 = 1; /*0x44bdfc*/
                    v60 = &_EBP->Type->__pad_F70[796]; /*0x44bdfe*/
                  }
                  else
                  {
                    v59 = 0; /*0x44be0b*/
                    v60 = &_EBP->Type->__pad_F70[780]; /*0x44be0d*/
                  }
                  if ( v60 && *v60 ) /*0x44be16*/
                    BuildingClass::PlayAnim(_EBP, *(int *)&DSurface_ViewBounds.__pad_FC[324], v60, 12, v59, 0, 0); /*0x44be23*/
                  BuildingClass::GetHealthRatio(_EBP); /*0x44be2a*/
                  _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44be2f*/
                  __asm /*0x44be34*/
                  {
                    fcomp qword ptr [eax+1700h]
                    fnstsw ax
                  }
                  if ( (_EAX & 0x4100) != 0 ) /*0x44be3f*/
                  {
                    v63 = 1; /*0x44be47*/
                    v64 = &_EBP->Type->__pad_F70[184]; /*0x44be49*/
                  }
                  else
                  {
                    v63 = 0; /*0x44be56*/
                    v64 = &_EBP->Type->__pad_F70[168]; /*0x44be58*/
                  }
                  if ( v64 && *v64 ) /*0x44be61*/
                    BuildingClass::PlayAnim(_EBP, v61, v64, 3, v63, 0, 0); /*0x44be6e*/
                  _EBP->? = 1; /*0x44be76*/
                  Member = Team::GetMember((Team *)_EBP, 0); /*0x44be7c*/
                  if ( Member )
                    v66 = (*(_BYTE *)(Member + 20) & 4) != 0 ? (TechnoClass *)Member : 0;
                  else
                    v66 = 0; /*0x44be85*/
                  if ( v66->focus && !(unsigned __int8)House::IsCurrentPlayer((House *)v66->owner) ) /*0x44bea5*/
                  {
                    (*((void (__thiscall **)(TechnoClass *, int, _DWORD))v66->RadioClass + 122))(v66, 2, 0); /*0x44beb5*/
                    (*((void (__thiscall **)(TechnoClass *, AbstractClass *, int))v66->RadioClass + 288))( /*0x44bec7*/
                      v66,
                      v66->focus,
                      1);
                    TechnoClass::SetFocus(v66, 0); /*0x44bed0*/
                    (*((void (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass + 157))(_EBP, 3); /*0x44bedc*/
                    v66->queueUpToEnter = 0; /*0x44bee2*/
                    return 1; /*0x44bef1*/
                  }
                  v146 = g_TerrainTypeTable; /*0x44befa*/
                  v151.m_Data = _EBP->TechnoClass; /*0x44befe*/
                  v67 = Team::GetMember((Team *)_EBP, 0); /*0x44bf02*/
                  v68 = (_DWORD **)(*((int (__thiscall **)(BuildingClass *, int *, int, int))v151.m_Data + 309))( /*0x44bf13*/
                                     _EBP,
                                     &v151.m_Size,
                                     v67,
                                     v146);
                  focus = _EBP->?; /*0x44bf19*/
                  v70 = *v68; /*0x44bf1f*/
                  *(_DWORD *)v151.__pad_0 = v70; /*0x44bf23*/
                  if ( focus ) /*0x44bf27*/
                  {
                    v70 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, int *))focus->ptr_0 + 18))(focus, &v152); /*0x44bf30*/
                    LOWORD(v151.m_Data) = *v70 / 256; /*0x44bf43*/
                    HIWORD(v151.m_Data) = v70[1] / 256; /*0x44bf57*/
                    LOWORD(v70) = v151.m_Data; /*0x44bf5c*/
                    *(_DWORD *)v151.__pad_0 = v151.m_Data; /*0x44bf60*/
                  }
                  if ( __PAIR32__(*(unsigned __int16 *)&v151.__pad_0[2], (unsigned __int16)v70) != g_TerrainTypeTable ) /*0x44bf6b*/
                  {
                    (*((void (__thiscall **)(TechnoClass *, int, _DWORD))v66->RadioClass + 122))(v66, 2, 0); /*0x44bf87*/
                    v71 = (void (__thiscall **)(TechnoClass *, void *, int))v66->RadioClass; /*0x44bf8d*/
                    v72 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v151.__pad_0); /*0x44bf9a*/
                    v71[288](v66, v72, 1); /*0x44bfa2*/
                    (*((void (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass + 157))(_EBP, 3); /*0x44bfaf*/
                    v66->queueUpToEnter = 0; /*0x44bfb5*/
                    return 1; /*0x44bfc8*/
                  }
                }
              }
            }
            return 1; /*0x44c09e*/
          }
          else
          {
            BuildingClass::ClearAnims(_EBP, 8); /*0x44bc05*/
            BuildingClass::ClearAnims(_EBP, 11); /*0x44bc0e*/
            BuildingClass::GetHealthRatio(_EBP); /*0x44bc15*/
            _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44bc1a*/
            __asm /*0x44bc20*/
            {
              fcomp qword ptr [edx+1700h]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x44bc2b*/
            {
              v41 = 1; /*0x44bc33*/
              v42 = &_EBP->Type->__pad_F70[796]; /*0x44bc38*/
            }
            else
            {
              v41 = 0; /*0x44bc45*/
              v42 = &_EBP->Type->__pad_F70[780]; /*0x44bc47*/
            }
            if ( v42 && *v42 ) /*0x44bc50*/
              BuildingClass::PlayAnim(_EBP, *(int *)&DSurface_ViewBounds.__pad_FC[324], v42, 12, v41, 0, 0); /*0x44bc5d*/
            BuildingClass::GetHealthRatio(_EBP); /*0x44bc64*/
            _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44bc69*/
            __asm /*0x44bc6e*/
            {
              fcomp qword ptr [eax+1700h]
              fnstsw ax
            }
            if ( (_EAX & 0x4100) != 0 ) /*0x44bc79*/
            {
              v45 = 1; /*0x44bc81*/
              v46 = &_EBP->Type->__pad_F70[184]; /*0x44bc86*/
            }
            else
            {
              v45 = 0; /*0x44bc93*/
              v46 = &_EBP->Type->__pad_F70[168]; /*0x44bc95*/
            }
            if ( v46 && *v46 ) /*0x44bc9e*/
              BuildingClass::PlayAnim(_EBP, v43, v46, 3, v45, 0, 0); /*0x44bcab*/
            _EBP->? = 1; /*0x44bcb0*/
            return 1; /*0x44bcba*/
          }
        }
      }
      else
      {
        v54 = (unsigned __int8)Team::AllMembersValid((Team *)_EBP) == 0; /*0x44c0af*/
        v81 = _EBP->Anims[8]; /*0x44c0b1*/
        if ( v54 ) /*0x44c0b7*/
        {
          if ( v81 || _EBP->Anims[11] ) /*0x44c0c1*/
          {
            BuildingClass::GetHealthRatio(_EBP); /*0x44c0cf*/
            _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c0d4*/
            __asm /*0x44c0da*/
            {
              fcomp qword ptr [ecx+1700h]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x44c0e5*/
            {
              v85 = 1; /*0x44c0ed*/
              v86 = &_EBP->Type->__pad_F70[796]; /*0x44c0f2*/
            }
            else
            {
              v85 = 0; /*0x44c0ff*/
              v86 = &_EBP->Type->__pad_F70[780]; /*0x44c101*/
            }
            if ( v86 && *v86 ) /*0x44c10a*/
              BuildingClass::PlayAnim(_EBP, v82, v86, 12, v85, 0, 0); /*0x44c117*/
            BuildingClass::GetHealthRatio(_EBP); /*0x44c11e*/
            _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c123*/
            __asm /*0x44c129*/
            {
              fcomp qword ptr [edx+1700h]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x44c134*/
            {
              v89 = 1; /*0x44c13c*/
              v90 = &_EBP->Type->__pad_F70[184]; /*0x44c141*/
            }
            else
            {
              v89 = 0; /*0x44c14e*/
              v90 = &_EBP->Type->__pad_F70[168]; /*0x44c150*/
            }
            if ( v90 && *v90 ) /*0x44c159*/
              BuildingClass::PlayAnim(_EBP, *(int *)&DSurface_ViewBounds.__pad_FC[324], v90, 3, v89, 0, 0); /*0x44c166*/
            BuildingClass::ClearAnims(_EBP, 8); /*0x44c16f*/
            BuildingClass::ClearAnims(_EBP, 11); /*0x44c178*/
          }
          if ( !_EBP->Anims[12] ) /*0x44c17d*/
          {
            v91 = (void (__thiscall **)(BuildingClass *, int, int))_EBP->TechnoClass; /*0x44c185*/
            _EBP->BuildingClass_field_bool_6DD = 1; /*0x44c18e*/
            v91[122](_EBP, 5, 1); /*0x44c195*/
          }
          return 1; /*0x44c1a7*/
        }
        if ( v81 ) /*0x44c1aa*/
          return 1; /*0x44c1b8*/
        v92 = Team::GetMember((Team *)_EBP, 0); /*0x44c1bc*/
        v93 = (int (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass; /*0x44c1c1*/
        v94 = v92; /*0x44c1c7*/
        v95 = Team::GetMember((Team *)_EBP, 0); /*0x44c1c9*/
        if ( v93[310](_EBP, v95) < 200 ) /*0x44c1dc*/
        {
          if ( !*(_DWORD *)(v94 + 1652) ) /*0x44c1e2*/
            WinAPI::Wrapper(-2147467261); /*0x44c1ef*/
          v54 = (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v94 + 1652) + 96))(*(_DWORD *)(v94 + 1652)) == 0; /*0x44c200*/
          v96 = *(_DWORD *)(v94 + 1652); /*0x44c202*/
          if ( !v54 ) /*0x44c208*/
          {
            if ( !v96 ) /*0x44c20c*/
              WinAPI::Wrapper(-2147467261); /*0x44c213*/
            if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v94 + 1652) + 16))(*(_DWORD *)(v94 + 1652)) ) /*0x44c221*/
            {
              if ( !*(_DWORD *)(v94 + 1652) ) /*0x44c228*/
                WinAPI::Wrapper(-2147467261); /*0x44c235*/
              (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v94 + 1652) + 92))(*(_DWORD *)(v94 + 1652)); /*0x44c243*/
            }
            return 1; /*0x44c252*/
          }
          if ( !v96 ) /*0x44c255*/
            WinAPI::Wrapper(-2147467261); /*0x44c25c*/
          if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v94 + 1652) + 96))(*(_DWORD *)(v94 + 1652)) /*0x44c279*/
            && *(_DWORD *)(Team::GetMember((Team *)_EBP, 0) + 1444) )
          {
            v97 = (FootClass *)Team::GetMember((Team *)_EBP, 0); /*0x44c284*/
            FootClass::ClearPathIndex(v97); /*0x44c28b*/
          }
        }
        if ( (*((int (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass + 157))(_EBP, 19) == 1 )
        {
          v98 = Team::GetMember((Team *)_EBP, 0); /*0x44c2ae*/
          BuildingClass::GetHealthRatio((BuildingClass *)v98); /*0x44c2b2*/
          _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c2b7*/
          __asm /*0x44c2bc*/
          {
            fcomp qword ptr [eax+16F8h]
            fnstsw ax
          }
          v100 = (_EAX & 0x100) != 0; /*0x44c2c7*/
          v149 = *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v98 + 132))(v98) + 3364); /*0x44c2e6*/
          v101 = (*((int (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass + 157))(_EBP, 28); /*0x44c2ea*/
          v102 = v101 == 1; /*0x44c2f3*/
          v103 = v101 == 33; /*0x44c2f9*/
          if ( (v100 || v149) && (v102 || v103) )
          {
            if ( !*(_BYTE *)(v98 + 976) || (unsigned __int8)House::IsCurrentPlayer(*(House **)(v98 + 540)) ) /*0x44c4cc*/
            {
              if ( _EBP->? ) /*0x44c4f3*/
                VoxClass::FindAndPlay((VoxClass *)&stru_818E00.?[5], -1); /*0x44c507*/
              _EBP->? = 2; /*0x44c50e*/
              BuildingClass::GetHealthRatio(_EBP); /*0x44c518*/
              _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c51d*/
              __asm /*0x44c523*/
              {
                fcomp qword ptr [ecx+1700h]
                fnstsw ax
              }
              if ( (_AX & 0x4100) != 0 ) /*0x44c52e*/
              {
                v117 = 1; /*0x44c536*/
                v118 = &_EBP->Type->__pad_F70[660]; /*0x44c53b*/
              }
              else
              {
                v117 = 0; /*0x44c548*/
                v118 = &_EBP->Type->__pad_F70[644]; /*0x44c54a*/
              }
              if ( v118 && *v118 ) /*0x44c553*/
                BuildingClass::PlayAnim(_EBP, v114, v118, 10, v117, 0, 0); /*0x44c560*/
              BuildingClass::ClearAnims(_EBP, 3); /*0x44c569*/
              BuildingClass::ClearAnims(_EBP, 18); /*0x44c572*/
              _EBP->BuildingClass_field_bool_6DD = 0; /*0x44c577*/
              _EBP->RepairProgress[0] = 0; /*0x44c57e*/
              *(_DWORD *)_EBP->__pad_628 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44c594*/
              v119 = v153; /*0x44c596*/
              *(_DWORD *)&_EBP->__pad_628[12] = 1; /*0x44c59a*/
              *(_DWORD *)&_EBP->__pad_628[4] = v119; /*0x44c5a0*/
              *(_DWORD *)&_EBP->__pad_628[8] = 1; /*0x44c5a3*/
            }
            else
            {
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v98 + 416))(v98, 1); /*0x44c4db*/
              _EBP->? = 0; /*0x44c4e1*/
              _EBP->BuildingClass_field_bool_6DD = 1; /*0x44c4e7*/
            }
          }
          else
          {
            BuildingClass::GetHealthRatio((BuildingClass *)v98); /*0x44c31a*/
            _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c31f*/
            __asm /*0x44c324*/
            {
              fcomp qword ptr [eax+16F8h]
              fnstsw ax
            }
            if ( (_EAX & 0x4000) != 0 )
            {
              if ( !*(_DWORD *)(v98 + 1652) ) /*0x44c335*/
                WinAPI::Wrapper(-2147467261); /*0x44c342*/
              if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v98 + 1652) + 96))(*(_DWORD *)(v98 + 1652)) )
              {
                v105 = Team::GetMember((Team *)_EBP, 0); /*0x44c35e*/
                if ( v105 )
                  v106 = (*(_BYTE *)(v105 + 20) & 4) != 0 ? (TechnoClass *)v105 : 0;
                else
                  v106 = 0; /*0x44c367*/
                if ( !v106[1].alignmentPadding154[0] ) /*0x44c379*/
                  WinAPI::Wrapper(-2147467261); /*0x44c386*/
                (*(void (__stdcall **)(int))(*(_DWORD *)v106[1].alignmentPadding154[0] + 88))(v106[1].alignmentPadding154[0]); /*0x44c394*/
                if ( !v106->focus || (unsigned __int8)House::IsCurrentPlayer((House *)v106->owner) ) /*0x44c3a5*/
                {
                  v107 = (int (__thiscall **)(BuildingClass *, int *, int, int))_EBP->TechnoClass; /*0x44c3f3*/
                  v147 = g_TerrainTypeTable; /*0x44c3f6*/
                  v108 = Team::GetMember((Team *)_EBP, 0); /*0x44c3fa*/
                  v109 = (_DWORD **)v107[309](_EBP, &v151.StreamClass_field_0C, v108, v147); /*0x44c407*/
                  v110 = _EBP->?; /*0x44c40d*/
                  v111 = *v109; /*0x44c413*/
                  *(_DWORD *)v151.__pad_0 = v111; /*0x44c417*/
                  if ( v110 ) /*0x44c41b*/
                  {
                    v111 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, int *))v110->ptr_0 + 18))(v110, &v152); /*0x44c424*/
                    LOWORD(v151.m_Data) = *v111 / 256; /*0x44c437*/
                    HIWORD(v151.m_Data) = v111[1] / 256; /*0x44c44b*/
                    LOWORD(v111) = v151.m_Data; /*0x44c450*/
                    *(_DWORD *)v151.__pad_0 = v151.m_Data; /*0x44c454*/
                  }
                  if ( __PAIR32__(*(unsigned __int16 *)&v151.__pad_0[2], (unsigned __int16)v111) != g_TerrainTypeTable ) /*0x44c45f*/
                  {
                    (*((void (__thiscall **)(TechnoClass *, int, _DWORD))v106->RadioClass + 122))(v106, 2, 0); /*0x44c47a*/
                    v112 = (void (__thiscall **)(TechnoClass *, void *, int))v106->RadioClass; /*0x44c480*/
                    v113 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v151.__pad_0); /*0x44c48e*/
                    v112[288](v106, v113, 1); /*0x44c496*/
                    TechnoClass::SetFocus(v106, 0); /*0x44c49f*/
                    (*((void (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass + 157))(_EBP, 3); /*0x44c4ab*/
                    v106->queueUpToEnter = 0; /*0x44c4b1*/
                  }
                }
                else
                {
                  (*((void (__thiscall **)(TechnoClass *, int, _DWORD))v106->RadioClass + 122))(v106, 2, 0); /*0x44c3b5*/
                  (*((void (__thiscall **)(TechnoClass *, AbstractClass *, int))v106->RadioClass + 288))( /*0x44c3c8*/
                    v106,
                    v106->focus,
                    1);
                  TechnoClass::SetFocus(v106, 0); /*0x44c3d1*/
                  v106->queueUpToEnter = 0; /*0x44c3d6*/
                  (*((void (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass + 157))(_EBP, 3); /*0x44c3e3*/
                }
              }
            }
          }
        }
        else if ( !HouseClass::IonSensitivesShouldBeOffline() ) /*0x44c5b1*/
        {
          v120 = (_DWORD *)(Team::GetMember((Team *)_EBP, 0) + 1652); /*0x44c5ce*/
          if ( !*v120 ) /*0x44c5c8*/
            WinAPI::Wrapper(-2147467261); /*0x44c5dd*/
          if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*v120 + 96))(*v120) ) /*0x44c5e7*/
          {
            v121 = (_DWORD *)(Team::GetMember((Team *)_EBP, 0) + 1652); /*0x44c602*/
            if ( !*v121 ) /*0x44c5fc*/
              WinAPI::Wrapper(-2147467261); /*0x44c611*/
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v121 + 88))(*v121); /*0x44c61b*/
          }
        }
      }
    }
    else
    {
      if ( !(unsigned __int8)Team::AllMembersValid((Team *)_EBP) ) /*0x44c625*/
      {
        BuildingClass::ClearAnims(_EBP, 8); /*0x44c636*/
        BuildingClass::ClearAnims(_EBP, 11); /*0x44c63f*/
        BuildingClass::GetHealthRatio(_EBP); /*0x44c646*/
        _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c64b*/
        __asm /*0x44c650*/
        {
          fcomp qword ptr [eax+1700h]
          fnstsw ax
        }
        if ( (_EAX & 0x4100) != 0 ) /*0x44c65b*/
        {
          v124 = 1; /*0x44c663*/
          v125 = &_EBP->Type->__pad_F70[796]; /*0x44c668*/
        }
        else
        {
          v124 = 0; /*0x44c675*/
          v125 = &_EBP->Type->__pad_F70[780]; /*0x44c677*/
        }
        if ( v125 && *v125 ) /*0x44c680*/
          BuildingClass::PlayAnim(_EBP, v122, v125, 12, v124, 0, 0); /*0x44c68d*/
        BuildingClass::GetHealthRatio(_EBP); /*0x44c694*/
        _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c699*/
        __asm /*0x44c69f*/
        {
          fcomp qword ptr [ecx+1700h]
          fnstsw ax
        }
        if ( (_AX & 0x4100) != 0 ) /*0x44c6aa*/
        {
          v129 = 1; /*0x44c6b2*/
          v130 = &_EBP->Type->__pad_F70[184]; /*0x44c6b7*/
        }
        else
        {
          v129 = 0; /*0x44c6c4*/
          v130 = &_EBP->Type->__pad_F70[168]; /*0x44c6c6*/
        }
        if ( v130 && *v130 ) /*0x44c6cf*/
          BuildingClass::PlayAnim(_EBP, v126, v130, 3, v129, 0, 0); /*0x44c6dc*/
        (*((void (__thiscall **)(BuildingClass *, int, int))_EBP->TechnoClass + 122))(_EBP, 5, 1); /*0x44c6ea*/
        return 1; /*0x44c6fc*/
      }
      _EBP->BuildingClass_field_bool_6DD = 0; /*0x44c700*/
      v151.m_Data = (void *)100; /*0x44c707*/
      v131 = Team::GetMember((Team *)_EBP, 0); /*0x44c70f*/
      v132 = (_DWORD *)(v131 + 1652); /*0x44c714*/
      *(_DWORD *)v151.__pad_0 = 0; /*0x44c71a*/
      if ( !*(_DWORD *)(v131 + 1652) ) /*0x44c71e*/
        goto LABEL_215; /*0x44c71e*/
      v133 = StreamClass::Set2(&v151, (_DWORD *)(v131 + 1652)); /*0x44c727*/
      if ( v133 < 0 && v133 != -2147467262 ) /*0x44c735*/
        WinAPI::Wrapper(v133); /*0x44c738*/
      if ( !*(_DWORD *)v151.__pad_0 ) /*0x44c743*/
LABEL_215:
        WinAPI::Wrapper(-2147467261); /*0x44c74a*/
      (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)v151.__pad_0 + 12))(*(_DWORD *)v151.__pad_0, &v152); /*0x44c75b*/
      if ( !memcmp(&v152, &stru_7E9A40, 0x10u) ) /*0x44c76e*/
        v151.m_Data = (void *)200; /*0x44c777*/
      if ( !memcmp(&v152, &g_CLSID_DriveLocomotion2, 0x10u) ) /*0x44c78b*/
        v151.m_Data = (void *)200; /*0x44c78f*/
      if ( (*((int (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass + 157))(_EBP, 19) == 1 ) /*0x44c7a3*/
      {
        v134 = (int (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass; /*0x44c7a5*/
        v135 = Team::GetMember((Team *)_EBP, 0); /*0x44c7ac*/
        v136 = v134[310](_EBP, v135); /*0x44c7b4*/
        if ( v136 < (int)v151.m_Data ) /*0x44c7be*/
        {
          v137 = *(_DWORD *)v151.__pad_0; /*0x44c7c0*/
          _EBP->? = 1; /*0x44c7c4*/
          if ( v137 ) /*0x44c7d0*/
            (*(void (__stdcall **)(int))(*(_DWORD *)v137 + 8))(v137); /*0x44c7d5*/
          return 3; /*0x44c7e4*/
        }
      }
      if ( !HouseClass::IonSensitivesShouldBeOffline() ) /*0x44c7eb*/
      {
        if ( !*v132 ) /*0x44c7f4*/
          WinAPI::Wrapper(-2147467261); /*0x44c7fe*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v132 + 88))(*v132); /*0x44c808*/
      }
      if ( *(_DWORD *)v151.__pad_0 ) /*0x44c811*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v151.__pad_0 + 8))(*(_DWORD *)v151.__pad_0); /*0x44c816*/
    }
    goto LABEL_231; /*0x44bbec*/
  }
  if ( !Type->UnitReload ) /*0x44c83e*/
    return 15; /*0x44c971*/
  v139 = 0; /*0x44c84a*/
  v150 = 0; /*0x44c84e*/
  if ( _EBP->?[2] <= 0 ) /*0x44c853*/
    goto LABEL_247; /*0x44c853*/
  do /*0x44c929*/
  {
    v140 = Team::GetMember((Team *)_EBP, v139); /*0x44c85c*/
    v141 = (_DWORD *)v140; /*0x44c861*/
    if ( !v140 ) /*0x44c865*/
      goto LABEL_244; /*0x44c865*/
    if ( (*((int (__thiscall **)(BuildingClass *, int, int))_EBP->TechnoClass + 158))(_EBP, 29, v140) == 1 /*0x44c893*/
      && v141[27] == *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v141 + 132))(v141) + 160) )
    {
      goto LABEL_243; /*0x44c893*/
    }
    if ( (*(int (__thiscall **)(_DWORD *))(*v141 + 388))(v141) != 7 /*0x44c8b5*/
      && (*((int (__thiscall **)(BuildingClass *, int, _DWORD *))_EBP->TechnoClass + 158))(_EBP, 19, v141) == 1 )
    {
      v150 = 1; /*0x44c8bb*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v141 + 388))(v141) ) /*0x44c8bf*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v141 + 488))(v141, 0, 0); /*0x44c8cf*/
        goto LABEL_244; /*0x44c8d5*/
      }
      if ( (*((int (__thiscall **)(BuildingClass *, int, _DWORD *))_EBP->TechnoClass + 158))(_EBP, 31, v141) != 1 /*0x44c8fb*/
        && (*((int (__thiscall **)(BuildingClass *, int, _DWORD *))_EBP->TechnoClass + 158))(_EBP, 28, v141) != 1 )
      {
LABEL_243:
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v141 + 1156))(v141, 0, 1); /*0x44c904*/
        (*(void (__thiscall **)(_DWORD *, int))(*v141 + 496))(v141, 5); /*0x44c910*/
        (*(void (__thiscall **)(_DWORD *))(*v141 + 820))(v141); /*0x44c91a*/
      }
    }
LABEL_244:
    ++v139; /*0x44c920*/
  }
  while ( v139 < _EBP->?[2] ); /*0x44c929*/
  if ( v150 ) /*0x44c935*/
  {
    _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c937*/
    __asm /*0x44c93c*/
    {
      fld qword ptr [eax+1508h]
      fmul ds:dbl_7E27F8
    }
    LOWORD(result) = Math::RoundToInt(v1); /*0x44c948*/
    return result; /*0x44c954*/
  }
LABEL_247:
  (*((void (__thiscall **)(BuildingClass *, int, _DWORD))_EBP->TechnoClass + 122))(_EBP, 5, 0); /*0x44c955*/
  return 3; /*0x44b7fa*/
}


// ==== 0x0044C980  BuildingClass::ProcessSuperWeaponEffects  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessSuperWeaponEffects(BuildingClass *this)
{
  double v1; // st7
  HouseClass *owner; // ecx
  void *v4; // eax
  HouseClass *v5; // ebp
  void *v6; // edi
  void *v7; // ebx
  int *v8; // eax
  AnimClass *v9; // eax
  void **v10; // edi
  void *v11; // eax
  int *v12; // ebx
  _DWORD *UIObjectCOM; // eax
  int v14; // edi
  BuildingClass *PsiWarnAnim; // ecx
  int *v16; // eax
  int result; // eax
  AnimClass *v18; // eax
  void **v19; // eax
  void (__thiscall **ptr_0)(BuildingClass *, void *, _DWORD); // edi
  void *v21; // eax
  int (__thiscall **v22)(BuildingClass *, _BYTE *, void *); // edi
  void *v23; // eax
  AnimClass *v24; // eax
  int (__thiscall **v25)(BuildingClass *, _BYTE *, void *); // edi
  void *v26; // eax
  int *v27; // eax
  int v28; // ebp
  void *v29; // ebx
  _WORD *v30; // eax
  int v31; // eax
  int v32; // edx
  int *v33; // eax
  TechnoClass *v35; // eax
  int v36; // eax
  char v37; // cl
  int v38; // edi
  void *v42; // edx
  int *v43; // eax
  _DWORD *v44; // eax
  int v45; // ebx
  int v47; // eax
  char IsCloseEnoughToBuilding; // al
  int v50; // eax
  char v51; // al
  unsigned int v53; // edi
  unsigned int v54; // ebx
  void **v55; // edi
  int v56; // ebp
  _DWORD *v57; // eax
  int v59; // [esp+34h] [ebp-FCh]
  int v60; // [esp+34h] [ebp-FCh]
  double v61; // [esp+38h] [ebp-F8h]
  double v62; // [esp+3Ch] [ebp-F4h]
  double v63; // [esp+3Ch] [ebp-F4h]
  __int64 v64; // [esp+40h] [ebp-F0h]
  double v65; // [esp+40h] [ebp-F0h]
  double v66; // [esp+40h] [ebp-F0h]
  double v67; // [esp+40h] [ebp-F0h]
  double v68; // [esp+40h] [ebp-F0h]
  double v69; // [esp+40h] [ebp-F0h]
  double v70; // [esp+40h] [ebp-F0h]
  double v71; // [esp+40h] [ebp-F0h]
  double v72; // [esp+40h] [ebp-F0h]
  __int16 *v73; // [esp+44h] [ebp-ECh]
  AnimClass *v74; // [esp+5Ch] [ebp-D4h] BYREF
  double v75; // [esp+60h] [ebp-D0h] BYREF
  double v76; // [esp+68h] [ebp-C8h]
  double v77; // [esp+70h] [ebp-C0h]
  double v78; // [esp+78h] [ebp-B8h] BYREF
  void **v79; // [esp+8Ch] [ebp-A4h] BYREF
  double v80; // [esp+90h] [ebp-A0h]
  int v81; // [esp+98h] [ebp-98h]
  int v82[2]; // [esp+A4h] [ebp-8Ch] BYREF
  int v83; // [esp+ACh] [ebp-84h]
  double v84; // [esp+B0h] [ebp-80h] BYREF
  double v85; // [esp+C0h] [ebp-70h] BYREF
  int v86; // [esp+CCh] [ebp-64h]
  double v87[2]; // [esp+D0h] [ebp-60h] BYREF
  __int16 v88; // [esp+E0h] [ebp-50h] BYREF
  _DWORD v89[3]; // [esp+E4h] [ebp-4Ch] BYREF
  int v90; // [esp+F0h] [ebp-40h] BYREF
  _BYTE v91[4]; // [esp+F4h] [ebp-3Ch] BYREF
  _BYTE v92[4]; // [esp+F8h] [ebp-38h] BYREF
  int v93; // [esp+FCh] [ebp-34h] BYREF
  _BYTE v94[12]; // [esp+100h] [ebp-30h] BYREF
  _BYTE v95[12]; // [esp+10Ch] [ebp-24h] BYREF
  _BYTE v96[12]; // [esp+118h] [ebp-18h] BYREF
  _BYTE v97[12]; // [esp+124h] [ebp-Ch] BYREF

  if ( this->Type->NukeSilo ) /*0x44c998*/
  {
    switch ( this->? ) /*0x44c9b5*/
    {
      case 0: /*0x44c9b5*/
        this->BuildingClass_field_bool_6DD = 0; /*0x44c9c0*/
        BuildingClass::StartProduction(this, 2); /*0x44c9c7*/
        owner = this->?; /*0x44c9cc*/
        this->? = 1; /*0x44c9d2*/
        v4 = CellCoord::To_CellObj( /*0x44c9e8*/
               (CellCoord *)&stru_87F5F0.__pad_58[416],
               (__int16 *)&owner->HouseClass_field_timer_C[2]);
        v5 = this->?; /*0x44c9ed*/
        v6 = v4; /*0x44c9f8*/
        v7 = *(void **)(FootClass_Array.?[3] + 4 * AnimTypeClass::FindIndex((AnimTypeClass *)&stru_818E00.?[14])); /*0x44ca0f*/
        v8 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v6 + 72))(v6, v89); /*0x44ca14*/
        v82[0] = *v8; /*0x44ca1e*/
        v82[1] = v8[1]; /*0x44ca25*/
        v83 = v8[2]; /*0x44ca2c*/
        v9 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x44ca30*/
        if ( v9 ) /*0x44ca3a*/
          v10 = AnimClass::ctor(v9, v7, v82, 0, 1, (void *)0x600, 0, 0); /*0x44ca56*/
        else
          v10 = 0; /*0x44ca5a*/
        BuildingClass::SetField95((BuildingClass *)v10, 0); /*0x44ca60*/
        Function::Method_424CA0(v10, (int)v5); /*0x44ca68*/
        *((_BYTE *)v10 + 413) = 1; /*0x44ca6d*/
        this->PsiWarnAnim = (AnimClass *)v10; /*0x44ca74*/
        goto LABEL_7; /*0x44ca74*/
      case 1: /*0x44c9b5*/
LABEL_7:
        if ( this->BuildingClass_field_bool_6DD ) /*0x44ca7a*/
        {
          BuildingClass::StartProduction(this, 4); /*0x44ca88*/
          this->? = 2; /*0x44ca8d*/
        }
        goto LABEL_9; /*0x44ca8d*/
      case 2: /*0x44c9b5*/
LABEL_9:
        (*((void (__thiscall **)(BuildingClass *, double *))this->TechnoClass + 18))(this, &v78); /*0x44ca97*/
        v11 = CellCoord::To_CellObj( /*0x44cab5*/
                (CellCoord *)&stru_87F5F0.__pad_58[416],
                (__int16 *)&this->?->HouseClass_field_timer_C[2]);
        v12 = *(int **)(*((_DWORD *)dword_A8E334 + this->FiringSWType) + 156); /*0x44cad0*/
        UIObjectCOM = (_DWORD *)CreateUIObjectCOM(v12[40], (int)v11, (int)this, v12[41], v12[43], 255, 1); /*0x44caed*/
        v14 = (int)UIObjectCOM; /*0x44caf2*/
        if ( !UIObjectCOM ) /*0x44caf6*/
          goto LABEL_18; /*0x44caf6*/
        Function::Method_46B260(UIObjectCOM, (int)v12); /*0x44caff*/
        PsiWarnAnim = (BuildingClass *)this->PsiWarnAnim; /*0x44cb04*/
        if ( PsiWarnAnim ) /*0x44cb0c*/
        {
          BuildingClass::SetField95(PsiWarnAnim, v14); /*0x44cb0f*/
          this->PsiWarnAnim = 0; /*0x44cb14*/
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 212))(v14); /*0x44cb22*/
        v16 = (int *)(*((int (__thiscall **)(BuildingClass *, double *, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x44cb46*/
                      + 44))(
                       this,
                       &v84,
                       0,
                       0,
                       0,
                       0);
        v82[0] = *v16; /*0x44cb53*/
        v82[1] = v16[1]; /*0x44cb5f*/
        v83 = v16[2]; /*0x44cb66*/
        Math::SinCos(1.570748388432313); /*0x44cb6a*/
        __asm { fstp [esp+0F0h+var_A0] } /*0x44cb6f*/
        Math::ArcTan2(1.570748388432313); /*0x44cb7d*/
        __asm { fmul [esp+0F8h+var_A0] } /*0x44cb82*/
        __asm
        {
          fmul ds:dbl_7E44A8
          fstp [esp+100h+var_70]
        }
        Math::ArcTan2(1.570748388432313); /*0x44cb9d*/
        __asm { fstp [esp+100h+var_A0] } /*0x44cba2*/
        Math::ArcTan2(1.570748388432313); /*0x44cbb0*/
        __asm { fmul [esp+108h+var_A0] } /*0x44cbb5*/
        v87[1] = v85; /*0x44cbc7*/
        __asm { fmul ds:dbl_7E44A8 } /*0x44cbd5*/
        v76 = v85; /*0x44cbec*/
        __asm { fstp [esp+110h+var_60] } /*0x44cbf0*/
        v75 = v87[0]; /*0x44cc05*/
        Math::SinCos(1.570748388432313); /*0x44cc18*/
        __asm { fmul ds:dbl_7E44A8 } /*0x44cc1d*/
        __asm { fstp [esp+0F0h+var_C0] }
        if ( (*(unsigned __int8 (__thiscall **)(int, int *, double *))(*(_DWORD *)v14 + 496))(v14, v82, &v75) ) /*0x44cc38*/
        {
          v18 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x44cc67*/
          if ( v18 ) /*0x44cc71*/
            v19 = AnimClass::ctor( /*0x44cc94*/
                    v18,
                    *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 152),
                    v82,
                    0,
                    1,
                    (void *)0x600,
                    0,
                    0);
          else
            v19 = 0; /*0x44cc9b*/
          v19[64] = (void *)-100; /*0x44cc9d*/
          this->? = 3; /*0x44cca7*/
LABEL_18:
          result = 1; /*0x44ccb1*/
        }
        else
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 32))(v14, 1); /*0x44cc48*/
          this->? = 3; /*0x44cc4b*/
          result = 1; /*0x44cc55*/
        }
        break; /*0x44cc61*/
      case 3: /*0x44c9b5*/
        BuildingClass::StartProduction(this, 5); /*0x44ccc2*/
        this->? = 4; /*0x44ccc7*/
        return 6; /*0x44ccdd*/
      case 4: /*0x44c9b5*/
LABEL_54:
        BuildingClass::StartProduction(this, 1); /*0x44d53c*/
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 5, 0); /*0x44d54d*/
        return 60; /*0x44d55f*/
      default:
        goto LABEL_20;
    }
  }
  else
  {
LABEL_20:
    if ( this->FiringSWType != -1 ) /*0x44cce5*/
    {
      ptr_0 = (void (__thiscall **)(BuildingClass *, void *, _DWORD))this->TechnoClass; /*0x44cced*/
      v64 = (unsigned int)&this->?->HouseClass_field_timer_C[2]; /*0x44ccf6*/
      v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v64); /*0x44ccfc*/
      ptr_0[243](this, v21, HIDWORD(v64)); /*0x44cd04*/
      (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 5, 0); /*0x44cd12*/
    }
    if ( this->Type->EMPulseCannon ) /*0x44cd1e*/
    {
      switch ( this->? ) /*0x44cd3b*/
      {
        case 0: /*0x44cd3b*/
          v22 = (int (__thiscall **)(BuildingClass *, _BYTE *, void *))this->TechnoClass; /*0x44cd48*/
          v23 = CellCoord::To_CellObj( /*0x44cd56*/
                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                  (__int16 *)&this->?->HouseClass_field_timer_C[1]);
          v24 = *(AnimClass **)v22[314](this, v92, v23); /*0x44cd72*/
          v25 = (int (__thiscall **)(BuildingClass *, _BYTE *, void *))this->TechnoClass; /*0x44cd74*/
          v73 = (__int16 *)&this->?->HouseClass_field_timer_C[1]; /*0x44cd7c*/
          v74 = v24; /*0x44cd82*/
          v26 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v73); /*0x44cd86*/
          v79 = *(void ***)v25[178](this, v91, v26); /*0x44cdae*/
          if ( abs16(*(_WORD *)ProgressTimer::GetValue((ProgressTimer *)this->?, &v93) - (_WORD)v74) ) /*0x44cdce*/
          {
            FacingClass::Update((char *)this->?, &v74); /*0x44cddb*/
            return 1; /*0x44cde0*/
          }
          else
          {
            if ( abs16(*(_WORD *)ProgressTimer::GetValue((ProgressTimer *)this->?, &v90) - (_WORD)v79) ) /*0x44ce10*/
              FacingClass::Update((char *)this->?, &v79); /*0x44ce1d*/
            else
              this->? = 1; /*0x44ce2f*/
            return 1; /*0x44ce22*/
          }
        case 1: /*0x44cd3b*/
          v74 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x44ce53*/
          if ( v74 ) /*0x44ce59*/
          {
            v79 = (void **)(FootClass_Array.?[3] + 4 * GlobalArray::FindString((GlobalArray *)&stru_818E00.?[11])); /*0x44ce81*/
            v27 = (int *)(*((int (__thiscall **)(BuildingClass *, _BYTE *, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x44ce9c*/
                          + 44))(
                           this,
                           v97,
                           0,
                           0,
                           0,
                           0);
            AnimClass::ctor(v74, *v79, v27, 0, 1, (void *)0x600, 0, 0); /*0x44ceae*/
          }
          this->? = 2; /*0x44ceb3*/
          return 32; /*0x44cec9*/
        case 2: /*0x44cd3b*/
          v28 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 254))(this, 0); /*0x44cefe*/
          v29 = CellCoord::To_CellObj( /*0x44cf22*/
                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                  (__int16 *)&this->?->HouseClass_field_timer_C[1]);
          LODWORD(v78) = CellCoord::To_CellObj( /*0x44cf2a*/
                           (CellCoord *)&stru_87F5F0.__pad_58[416],
                           (__int16 *)&this->?->HouseClass_field_timer_C[1]);
          if ( stru_A8EB00.?[391] || this->?->HouseClass_field_timer_C[1] == g_TerrainTypeTable ) /*0x44cf50*/
          {
            BuildingClass::StartProduction(this, 1); /*0x44d564*/
            (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 5, 0); /*0x44d571*/
            result = 60; /*0x44d577*/
          }
          else
          {
            v30 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, double *, void *))this->TechnoClass + 178))( /*0x44cf6d*/
                             this,
                             &v85,
                             v29);
            FacingClass::Update((char *)this->?, v30); /*0x44cf7a*/
            v31 = (*((int (__thiscall **)(BuildingClass *, _BYTE *, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x44cf9d*/
                   + 44))(
                    this,
                    v95,
                    0,
                    0,
                    0,
                    0);
            v80 = *(double *)v31; /*0x44cfa5*/
            v81 = *(_DWORD *)(v31 + 8); /*0x44cfb3*/
            v32 = (SLOWORD(this->?->HouseClass_field_timer_C[1]) << 8) + 128; /*0x44cfdc*/
            v89[1] = (SHIWORD(this->?->HouseClass_field_timer_C[1]) << 8) + 128; /*0x44cfe2*/
            v89[0] = v32; /*0x44cfef*/
            v89[2] = 0; /*0x44cff6*/
            Cell::GetGroundHeight(v89); /*0x44d001*/
            v33 = &this->?->HouseClass_field_timer_C[1]; /*0x44d00f*/
            LODWORD(v84) = (*(__int16 *)v33 << 8) + 128; /*0x44d023*/
            __asm { fild dword ptr [esp+0F8h+var_80] } /*0x44d027*/
            __asm { fisub dword ptr [esp+0F8h+var_A0] }
            HIDWORD(v84) = (*((__int16 *)v33 + 1) << 8) + 128; /*0x44d03c*/
            __asm /*0x44d040*/
            {
              fstp [esp+0F8h+var_F0]; double
              fild dword ptr [esp+0F8h+var_A0+4]
              fisub dword ptr [esp+0F8h+var_80+4]
              fstp [esp+0F8h+var_F8]; double
            }
            Math::CalcAngle(v61, v65); /*0x44d04f*/
            __asm /*0x44d054*/
            {
              fsub ds:dbl_7E2820
              fmul ds:dbl_7E2818
            }
            LOWORD(v84) = Math::RoundToInt(v1); /*0x44d065*/
            _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44d06a*/
            __asm /*0x44d074*/
            {
              fild dword ptr [eax+16B8h]
              fstp [esp+0F0h+var_F0]; double
            }
            v35 = (TechnoClass *)ObjectClass::DistanceTo((ObjectClass *)this, (int)v29); /*0x44d07e*/
            v36 = TechnoClass::ComputeScanRange(v35, v66); /*0x44d085*/
            v37 = *(_BYTE *)(v28 + 303); /*0x44d08a*/
            v38 = v36; /*0x44d090*/
            v86 = v36; /*0x44d092*/
            v79 = (void **)CreateUIObjectCOM( /*0x44d0ca*/
                             *(_DWORD *)(v28 + 160),
                             (int)v29,
                             (int)this,
                             *(_DWORD *)(v28 + 164),
                             *(_DWORD *)(v28 + 172),
                             3 * v36 / 4,
                             v37);
            v77 = 0.0; /*0x44d0de*/
            Math::Sqrt(10000.0); /*0x44d0fe*/
            __asm { fstp [esp+0F0h+var_A0] } /*0x44d108*/
            LODWORD(v84) = SLOWORD(v84) - 0x3FFF; /*0x44d112*/
            __asm /*0x44d116*/
            {
              fild dword ptr [esp+0F0h+var_80]
              fmul ds:dbl_7E2810
              fstp [esp+0F0h+var_80]
            }
            Math::ArcTan2(v84); /*0x44d12e*/
            __asm { fmul [esp+0F8h+var_A0] } /*0x44d133*/
            __asm { fstp [esp+100h+var_D0] }
            Math::SinCos(v84); /*0x44d141*/
            __asm { fmul [esp+100h+var_A0] } /*0x44d146*/
            __asm
            {
              fchs
              fst [esp+0E8h+var_C8]
              fld [esp+0E8h+var_D0]
              fcomp ds:dbl_7E2800
              fnstsw ax
            }
            if ( (_AX & 0x4000) != 0 ) /*0x44d162*/
            {
              __asm /*0x44d164*/
              {
                fcom ds:dbl_7E2800
                fnstsw ax
              }
              if ( (_AX & 0x4000) != 0 ) /*0x44d16f*/
              {
                __asm /*0x44d171*/
                {
                  fld [esp+0E8h+var_C0]
                  fcomp ds:dbl_7E2800
                  fnstsw ax
                }
                if ( (_AX & 0x4000) != 0 ) /*0x44d180*/
                  v75 = 100.0; /*0x44d182*/
              }
            }
            __asm /*0x44d192*/
            {
              fld [esp+0E8h+var_C0]
              fild [esp+0E8h+var_64]
            }
            __asm
            {
              fstp [esp+0F0h+var_A0]
              fld [esp+0F0h+var_D0]
              fmul [esp+0F0h+var_D0]
              fld st(1)
              fmul st, st(2)
              faddp st(1), st
              fld st(2)
              fmul st, st(3)
              faddp st(1), st
              fstp [esp+0F0h+var_F0]; double
              fstp st
              fstp st
            }
            Math::Sqrt(v67); /*0x44d1bf*/
            __asm { fdivr [esp+0F0h+var_A0] } /*0x44d1c4*/
            v42 = this->TechnoClass; /*0x44d1c8*/
            __asm /*0x44d1d9*/
            {
              fld st
              fmul [esp+0F0h+var_D0]
              fstp [esp+0F0h+var_D0]
              fld [esp+0F0h+var_C8]
              fmul st, st(1)
              fstp [esp+0F0h+var_C8]
              fld [esp+0F0h+var_C0]
              fmul st, st(1)
              fstp [esp+0F0h+var_C0]
              fstp st
            }
            v43 = (int *)(*((int (__thiscall **)(BuildingClass *, _BYTE *, _DWORD))v42 + 192))(this, v94, 0); /*0x44d1f9*/
            v82[0] = *v43; /*0x44d201*/
            v82[1] = v43[1]; /*0x44d20c*/
            v83 = v43[2]; /*0x44d213*/
            v44 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)LODWORD(v78) + 72))(LODWORD(v78), v96); /*0x44d221*/
            v45 = v44[2] - v83; /*0x44d23c*/
            _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44d248*/
            LODWORD(v78) = (*v44 - v82[0]) * (*v44 - v82[0]) + (v44[1] - v82[1]) * (v44[1] - v82[1]); /*0x44d250*/
            __asm { fild dword ptr [esp+0E8h+var_B8] } /*0x44d258*/
            __asm
            {
              fstp [esp+0F4h+var_B8]
              fild dword ptr [ecx+16B8h]
            }
            __asm { fstp [esp+0F4h+var_F8+4]; double }
            Math::Sqrt(v78); /*0x44d278*/
            LOWORD(v47) = Math::RoundToInt(v1); /*0x44d280*/
            v59 = v47; /*0x44d285*/
            IsCloseEnoughToBuilding = TechnoClass::IsCloseEnoughToBuilding((TechnoClass *)this, 0); /*0x44d28a*/
            if ( !(unsigned __int8)ComputeMathFacingAngle(IsCloseEnoughToBuilding, v38, v59, v45, v62, &v74) ) /*0x44d29a*/
            {
              _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44d2a0*/
              __asm { fild dword ptr [edx+16B8h] } /*0x44d2ae*/
              __asm { fstp [esp+0F4h+var_F8+4]; double }
              Math::Sqrt(v78); /*0x44d2c2*/
              LOWORD(v50) = Math::RoundToInt(v1); /*0x44d2ca*/
              v60 = v50; /*0x44d2cf*/
              v51 = TechnoClass::IsCloseEnoughToBuilding((TechnoClass *)this, 0); /*0x44d2e4*/
              if ( !(unsigned __int8)ComputeMathFacingAngle(v51, 10 * v38 / 8, v60, v45, v63, &v74) ) /*0x44d2f4*/
              {
                LOWORD(v78) = -1536; /*0x44d2fa*/
                v74 = (AnimClass *)LODWORD(v78); /*0x44d305*/
              }
            }
            __asm /*0x44d30e*/
            {
              fld [esp+0E8h+var_C8]
              fmul [esp+0E8h+var_C8]
              fld [esp+0E8h+var_D0]
              fmul [esp+0E8h+var_D0]
            }
            __asm
            {
              faddp st(1), st
              fstp [esp+0F0h+var_F0]; double
            }
            Math::Sqrt(v68); /*0x44d326*/
            __asm { fstp [esp+0F0h+var_A0] } /*0x44d32f*/
            Math::CalcAngle(v77, v80); /*0x44d343*/
            __asm /*0x44d348*/
            {
              fsub ds:dbl_7E2820
              fmul ds:dbl_7E2818
            }
            LODWORD(v78) = (__int16)Math::RoundToInt(v1) - 0x3FFF; /*0x44d365*/
            __asm /*0x44d369*/
            {
              fild dword ptr [esp+0F0h+var_B8]
              fmul ds:dbl_7E2810
              fstp [esp+0F0h+var_B8]
              fld [esp+0F0h+var_C8]
              fmul [esp+0F0h+var_C8]
              fld [esp+0F0h+var_C0]
              fmul [esp+0F0h+var_C0]
              faddp st(1), st
              fld [esp+0F0h+var_D0]
              fmul [esp+0F0h+var_D0]
              faddp st(1), st
              fstp [esp+0F0h+var_F0]; double
            }
            Math::Sqrt(v69); /*0x44d396*/
            __asm /*0x44d39b*/
            {
              fstp [esp+0F0h+var_A0]
              fld [esp+0F0h+var_B8]
              fcomp ds:dbl_7E2800
            }
            __asm { fnstsw ax }
            if ( (_AX & 0x4000) == 0 ) /*0x44d3b1*/
            {
              v53 = HIDWORD(v78); /*0x44d3b3*/
              v54 = LODWORD(v78); /*0x44d3b7*/
              Math::ArcTan2(v78); /*0x44d3bd*/
              __asm { fdivr [esp+0F0h+var_D0] } /*0x44d3c2*/
              __asm { fstp [esp+0F8h+var_D0] }
              Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v53, v54))); /*0x44d3cc*/
              __asm { fdivr [esp+0F8h+var_C8] } /*0x44d3d1*/
              __asm { fstp [esp+0E8h+var_C8] }
            }
            LODWORD(v78) = (__int16)v74 - 0x3FFF; /*0x44d3ea*/
            __asm /*0x44d3ee*/
            {
              fild dword ptr [esp+0F0h+var_B8]
              fmul ds:dbl_7E2810
              fstp [esp+0F0h+var_F0]; double
            }
            Math::ArcTan2(v70); /*0x44d3fb*/
            __asm { fmul [esp+0F0h+var_D0] } /*0x44d400*/
            __asm { fstp [esp+0F0h+var_D0] }
            LODWORD(v78) = (__int16)v74 - 0x3FFF; /*0x44d412*/
            __asm /*0x44d416*/
            {
              fild dword ptr [esp+0F0h+var_B8]
              fmul ds:dbl_7E2810
              fstp [esp+0F0h+var_F0]; double
            }
            Math::ArcTan2(v71); /*0x44d423*/
            __asm { fmul [esp+0F0h+var_C8] } /*0x44d428*/
            __asm { fstp [esp+0F0h+var_C8] }
            LODWORD(v78) = (__int16)v74 - 0x3FFF; /*0x44d43b*/
            __asm /*0x44d43f*/
            {
              fild dword ptr [esp+0F0h+var_B8]
              fmul ds:dbl_7E2810
              fstp [esp+0F0h+var_F0]; double
            }
            Math::SinCos(v72); /*0x44d44c*/
            __asm { fmul [esp+0F0h+var_A0] } /*0x44d451*/
            v55 = v79; /*0x44d459*/
            __asm { fstp [esp+0E8h+var_C0] } /*0x44d462*/
            if ( !(*((unsigned __int8 (__thiscall **)(void **, int *, double *))*v79 + 124))(v79, v82, &v75) ) /*0x44d482*/
            {
              (*((void (__stdcall **)(void **))*v55 + 2))(v55); /*0x44d539*/
              goto LABEL_54; /*0x44d539*/
            }
            if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 255))(this) /*0x44d4a0*/
              && *(_BYTE *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) + 3234) )
            {
              TechnoClass::Fire((TechnoClass *)this->?); /*0x44d4b0*/
              TechnoClass::Fire((TechnoClass *)this->?); /*0x44d4bb*/
            }
            if ( !*(_BYTE *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) + 3285) ) /*0x44d4ca*/
            {
              v56 = *(_DWORD *)(*(_DWORD *)(v28 + 192) /*0x44d4fb*/
                              + 4 * ((unsigned int)Random::State(&Randomizer_Global) % *(_DWORD *)(v28 + 204)));
              v57 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, double *, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x44d510*/
                               + 44))(
                                this,
                                v87,
                                0,
                                0,
                                0,
                                0);
              StartAudioControllerAt(v56, v57, 0); /*0x44d51a*/
            }
            this->? = 3; /*0x44d51f*/
            result = 1; /*0x44d529*/
          }
          break; /*0x44d535*/
        case 3: /*0x44cd3b*/
          v88 = 0x4000; /*0x44ced1*/
          FacingClass::Update((char *)this->?, &v88); /*0x44cee2*/
          goto LABEL_54; /*0x44cee7*/
        default:
          goto LABEL_56;
      }
    }
    else
    {
LABEL_56:
      _EAX = MissionClass::GetMissionControl((MissionClass *)this); /*0x44d584*/
      __asm /*0x44d58b*/
      {
        fld qword ptr [eax+10h]
        fmul ds:dbl_7E27F8
      }
      LOWORD(result) = Math::RoundToInt(v1); /*0x44d594*/
    }
  }
  return result; /*0x44cc5a*/
}


// ==== 0x0044D5D0  BuildingClass::CaptureBuilding  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CaptureBuilding(BuildingClass *this)
{
  int result; // eax
  HouseClass *v3; // [esp+Ch] [ebp+4h]

  if ( TechnoClass::SetHouseFlag((TechnoClass *)this, v3) ) /*0x44d5d9*/
  {
    if ( !dword_A8E7AC ) /*0x44d5ed*/
    {
      this->?->lastBuiltVehicleType = this->Type->ArrayIndex; /*0x44d601*/
      this->?->unknownBool246 = 1; /*0x44d60d*/
    }
    this->?->recheckTechTree = 1; /*0x44d61a*/
    if ( !(unsigned __int8)Team::AllMembersValid((Team *)this) /*0x44d682*/
      && (unsigned __int8)House::IsCurrentPlayer((House *)this->?)
      && (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) != 18
      && this->? != 18
      || (result = Team::AllMembersValid((Team *)this), !(_BYTE)result)
      && (result = House::IsCurrentPlayer((House *)this->?), !(_BYTE)result)
      && v3 == this->?
      && (result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this), result != 18) )
    {
      result = (*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 311))(this, 0); /*0x44d68a*/
    }
    LOBYTE(result) = 1; /*0x44d691*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x44d698*/
  }
  return result; /*0x44d690*/
}



// ==== 0x0044D6A0  TechnoClass::StartOrResumeProduction  this=BuildingClass  sig=csp ====
int __thiscall TechnoClass::StartOrResumeProduction(TechnoClass *this)
{
  int result; // eax
  char v3; // [esp+8h] [ebp+4h]

  if ( !v3 || dword_A8E7AC || stru_A8EB00.?[391] ) /*0x44d6bb*/
  {
    BuildingClass::StartProduction((BuildingClass *)this, 1); /*0x44d6e0*/
    result = (*((int (__thiscall **)(TechnoClass *, int, _DWORD))this->RadioClass + 122))(this, 5, 0); /*0x44d6f1*/
    LOBYTE(result) = 0; /*0x44d6f7*/
  }
  else
  {
    BuildingClass::StartProduction((BuildingClass *)this, 0); /*0x44d6bf*/
    result = (*((int (__thiscall **)(TechnoClass *, int, _DWORD))this->RadioClass + 122))(this, 18, 0); /*0x44d6d0*/
    LOBYTE(result) = 0; /*0x44d6d6*/
  }
  return result; /*0x44d6d8*/
}



// ==== 0x0044D700  BuildingClass::GetAmmoCountScaled  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetAmmoCountScaled(BuildingClass *this)
{
  BuildingTypeClass *Type; // esi
  int result; // eax
  int v3; // [esp+4h] [ebp-Ch]
  double v4; // [esp+8h] [ebp-8h]

  Type = this->Type; /*0x44d704*/
  if ( Type->?[0] != 2 ) /*0x44d713*/
    return TechnoClass::GetAmmoCount((TechnoClass *)this); /*0x44d715*/
  if ( !Type->Weeder ) /*0x44d71f*/
    return 0; /*0x44d755*/
  v4 = BuildingClass::checkRepairEligibility((float *)this->?); /*0x44d738*/
  v3 = (*((int (__thiscall **)(BuildingTypeClass *))Type->TechnoTypeClass + 29))(Type); /*0x44d73f*/
  LOWORD(result) = Math::RoundToInt((double)v3 * v4); /*0x44d74b*/
  return result; /*0x44d71a*/
}



// ==== 0x0044D760  BuildingClass::PushScriptAction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::PushScriptAction(BuildingClass *this)
{
  int result; // eax
  _DWORD *v3; // eax
  ScriptActionQueue v4; // [esp+8h] [ebp-10h] BYREF
  _BYTE v5[12]; // [esp+Ch] [ebp-Ch] BYREF
  int v6; // [esp+1Ch] [ebp+4h]
  ScriptActionQueue v7; // [esp+1Ch] [ebp+4h]

  result = v6; /*0x44d760*/
  if ( v6 ) /*0x44d76c*/
  {
    result = House::IsHumanPlayer((House *)this->?); /*0x44d774*/
    if ( (_BYTE)result ) /*0x44d77b*/
    {
      v3 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *, _DWORD))this->TechnoClass + 19))(this, v5, 0); /*0x44d788*/
      *(_WORD *)v7.__tail_0 = *v3 / 256; /*0x44d79b*/
      *(_WORD *)&v7.__tail_0[2] = v3[1] / 256; /*0x44d7b3*/
      v4 = v7; /*0x44d7bc*/
      return ScriptActionQueue::PushNext(&v4); /*0x44d7c0*/
    }
  }
  return result; /*0x44d7c5*/
}



// ==== 0x0044D7D0  BuildingClass::GetTargetFacing  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetTargetFacing(BuildingClass *this)
{
  unsigned int v2; // ecx
  __int16 v4; // dx
  unsigned int v5; // ecx
  int v6; // edx
  int v7; // [esp+4h] [ebp-4h] BYREF
  _DWORD *v8; // [esp+Ch] [ebp+4h]

  if ( this->? ) /*0x44d7d4*/
  {
    if ( !(*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 255))(this) /*0x44d81a*/
      || this->Type->TurretAnimIsVoxel )
    {
      v6 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *, AbstractClass *))this->TechnoClass + 314))( /*0x44d864*/
                        this,
                        &v7,
                        this->?);
      *v8 = v6; /*0x44d86b*/
      return (int)v8; /*0x44d866*/
    }
    else
    {
      v5 = *ProgressTimer::GetValue((ProgressTimer *)this->?, &v7); /*0x44d834*/
      *(_WORD *)v8 = ((((v5 >> 10) + 1) >> 1) & 0x1F) << 11; /*0x44d847*/
      return (int)v8; /*0x44d836*/
    }
  }
  else
  {
    v2 = *ProgressTimer::GetValue((ProgressTimer *)this->?, &v7); /*0x44d7ee*/
    LOBYTE(v4) = 0; /*0x44d7fb*/
    HIBYTE(v4) = ((v2 >> 7) + 1) >> 1; /*0x44d7fd*/
    *(_WORD *)v8 = v4; /*0x44d7ff*/
    return (int)v8; /*0x44d7f0*/
  }
}



// ==== 0x0044D880  BuildingClass::ClearFactoryBib  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ClearFactoryBib(BuildingClass *this)
{
  double v1; // st7
  BuildingTypeClass *Type; // eax
  int v4; // esi
  __int16 v5; // dx
  int v6; // eax
  unsigned int v7; // edi
  int v8; // edi
  _WORD *v9; // eax
  int v10; // edx
  __int16 v11; // cx
  _WORD *v12; // edx
  __int16 v13; // bx
  __int16 v14; // bx
  __int16 v15; // cx
  int v16; // ebx
  void *v17; // eax
  int v18; // eax
  int v19; // ebx
  void *v20; // eax
  int v21; // eax
  int v22; // edx
  int *v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // eax
  void *v27; // eax
  _DWORD *v28; // eax
  char v29; // al
  _DWORD *v30; // eax
  int v31; // eax
  int v32; // edi
  void *v33; // eax
  int v35; // eax
  char v37; // cl
  int (__thiscall **ptr_0)(BuildingClass *, _BYTE *); // edx
  _WORD *v39; // eax
  __int16 v40; // cx
  int Member; // eax
  int v42; // esi
  char v43; // cl
  int v46; // ecx
  char *v47; // eax
  int v48; // eax
  int v49; // ebx
  int v50; // eax
  int *v51; // ebx
  int v52; // eax
  _WORD *v53; // eax
  __int16 v54; // dx
  int v55; // edi
  void *v56; // eax
  _DWORD *m_Size; // edi
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int InstanceCOM; // eax
  void *m_Data; // eax
  int (__stdcall ***Checked)(_DWORD, int *, void **); // eax
  int v64; // esi
  void *v65; // edi
  int v66; // ecx
  int v67; // esi
  int v68; // esi
  int m_Position; // eax
  int v70; // edx
  int StreamClass_field_0C; // eax
  int v73; // eax
  unsigned __int8 (__thiscall **v74)(BuildingClass *); // edx
  void (__thiscall **v75)(BuildingClass *); // edx
  BuildingTypeClass *v76; // ecx
  void (__thiscall **v77)(BuildingClass *); // eax
  int LandHeight; // [esp+34h] [ebp-5Ch]
  int v79; // [esp+34h] [ebp-5Ch]
  __int16 *p_m_Position; // [esp+3Ch] [ebp-54h]
  int v81; // [esp+40h] [ebp-50h]
  char v82; // [esp+52h] [ebp-3Eh]
  bool v83; // [esp+53h] [ebp-3Dh]
  StreamClass v84; // [esp+54h] [ebp-3Ch] BYREF
  unsigned int i; // [esp+68h] [ebp-28h] BYREF
  void *v86; // [esp+6Ch] [ebp-24h] BYREF
  char v87; // [esp+70h] [ebp-20h] BYREF
  int v88; // [esp+74h] [ebp-1Ch] BYREF
  __int64 v89; // [esp+78h] [ebp-18h]
  int v90; // [esp+80h] [ebp-10h] BYREF
  char v91[12]; // [esp+84h] [ebp-Ch] BYREF

  if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0 ) /*0x44d896*/
    BuildingClass::UnloadUnits(this, 0, 0); /*0x44d89c*/
  Type = this->Type; /*0x44d8a1*/
  if ( !Type->UnitAbsorb && !Type->InfantryAbsorb || this->?[0] <= 0 )
  {
    if ( Type->WeaponsFactory )
    {
      v37 = Type->?[1]; /*0x44dcc7*/
      v88 = 0; /*0x44dccd*/
      v89 = 0; /*0x44dcd3*/
      if ( !v37 ) /*0x44dcdb*/
      {
        ptr_0 = (int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass; /*0x44dce3*/
        i = *(_DWORD *)(Type->FoundationOutside[0] + 40); /*0x44dcf0*/
        v39 = (_WORD *)ptr_0[110](this, &v87); /*0x44dcf4*/
        v40 = HIWORD(i) + v39[1]; /*0x44dd01*/
        LOWORD(v84.StreamClass_field_0C) = *v39 + i; /*0x44dd06*/
        HIWORD(v84.StreamClass_field_0C) = v40; /*0x44dd0b*/
        v88 = ((__int16)(LOWORD(v84.StreamClass_field_0C) - 1) << 8) + 128; /*0x44dd30*/
        v89 = (unsigned int)((v40 << 8) + 128); /*0x44dd34*/
      }
      switch ( this->? )
      {
        case 0:
          Member = Team::GetMember((Team *)this, 0); /*0x44dd59*/
          v42 = Member; /*0x44dd5e*/
          if ( Member ) /*0x44dd62*/
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)Member + 488))(Member, 5, 0); /*0x44dd6b*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v42 + 492))(v42); /*0x44dd75*/
          }
          RateScaler::Init((RateScaler *)this->?, *(double *)this->Type->?); /*0x44dd95*/
          v43 = this->Type->?[1]; /*0x44dda2*/
          this->? = 1; /*0x44dda8*/
          this->? = v43 != 0 ? 4 : 1;
          BuildingClass::ClearAnims(this, 18); /*0x44ddbf*/
          BuildingClass::GetHealthRatio(this); /*0x44ddc6*/
          _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44ddcb*/
          __asm /*0x44ddd1*/
          {
            fcomp qword ptr [edx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x44dddc*/
          {
            v46 = 1; /*0x44dde4*/
            v47 = &this->Type->__pad_F70[524]; /*0x44dde9*/
          }
          else
          {
            v46 = 0; /*0x44ddf6*/
            v47 = &this->Type->__pad_F70[508]; /*0x44ddf8*/
          }
          if ( v47 && *v47 ) /*0x44de05*/
            BuildingClass::PlayAnim(this, *(int *)&DSurface_ViewBounds.__pad_FC[324], v47, 8, v46, 0, 0); /*0x44de16*/
          break; /*0x44de1b*/
        case 1:
          if ( !AnimClass::resetAnimation((AnimClass *)this) ) /*0x44de22*/
          {
            Debug::Log(); /*0x44de34*/
            this->? = 2; /*0x44de3c*/
          }
          break; /*0x44de46*/
        case 2:
          if ( (unsigned __int8)BuildingClass::CheckPowerFlags((BuildingClass *)this->?) ) /*0x44de53*/
          {
            v48 = Team::GetMember((Team *)this, 0); /*0x44de63*/
            v84.m_Size = v48; /*0x44de6a*/
            if ( !v48 ) /*0x44de6e*/
              goto LABEL_112; /*0x44de6e*/
            v49 = v48; /*0x44de74*/
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v48 + 488))(v48, 2, 0); /*0x44de7e*/
            v50 = *(_DWORD *)(v49 + 1652); /*0x44de84*/
            v51 = (int *)(v49 + 1652); /*0x44de8a*/
            v84.StreamClass_field_0C = 0; /*0x44de92*/
            if ( !v50 ) /*0x44de9a*/
              goto LABEL_57; /*0x44de9a*/
            v52 = StreamClass::Set2((StreamClass *)&v84.StreamClass_field_0C, v51); /*0x44dea1*/
            if ( v52 < 0 && v52 != -2147467262 ) /*0x44deaf*/
              WinAPI::Wrapper(v52); /*0x44deb2*/
            if ( !v84.StreamClass_field_0C ) /*0x44debd*/
LABEL_57:
              WinAPI::Wrapper(-2147467261); /*0x44dec4*/
            (*(void (__stdcall **)(int, int *))(*(_DWORD *)v84.StreamClass_field_0C + 12))( /*0x44ded5*/
              v84.StreamClass_field_0C,
              &v90);
            if ( !memcmp(&v90, &stru_7E9A50, 0x10u) || !memcmp(&v90, &g_CLSID_HoverLocomotion, 0x10u) ) /*0x44df00*/
            {
              v58 = *v51; /*0x44dfad*/
              *(_DWORD *)v84.__pad_0 = 0; /*0x44dfaf*/
              if ( v58 ) /*0x44dfb9*/
              {
                v59 = StreamClass::Set(&v84, v51); /*0x44dfc0*/
                if ( v59 < 0 && v59 != -2147467262 ) /*0x44dfce*/
                  WinAPI::Wrapper(v59); /*0x44dfd1*/
                if ( *(_DWORD *)v84.__pad_0 /*0x44dfe1*/
                  && (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)v84.__pad_0 + 28))(*(_DWORD *)v84.__pad_0) )
                {
                  if ( *v51 ) /*0x44dfe8*/
                    (*(void (__stdcall **)(int))(*(_DWORD *)*v51 + 8))(*v51); /*0x44dff1*/
                  v60 = *(_DWORD *)v84.__pad_0; /*0x44dff4*/
                  *v51 = 0; /*0x44dff8*/
                  if ( !v60 ) /*0x44e000*/
                    WinAPI::Wrapper(-2147467261); /*0x44e007*/
                  (*(void (__stdcall **)(int, int *))(*(_DWORD *)v60 + 16))(v60, v51); /*0x44e014*/
                }
              }
              v84.m_Position = 0; /*0x44e024*/
              InstanceCOM = CreateInstanceCOM((ObjectClass *)&v84.m_Position, (IID *)&stru_7E9A30, 0, 7u); /*0x44e02c*/
              if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x44e03a*/
                WinAPI::Wrapper(InstanceCOM); /*0x44e03d*/
              if ( !v84.m_Position ) /*0x44e048*/
                WinAPI::Wrapper(-2147467261); /*0x44e04f*/
              m_Size = (_DWORD *)v84.m_Size; /*0x44e058*/
              (*(void (__stdcall **)(int, int))(*(_DWORD *)v84.m_Position + 12))(v84.m_Position, v84.m_Size); /*0x44e060*/
              m_Data = 0; /*0x44e067*/
              v84.m_Data = 0; /*0x44e06b*/
              if ( v84.m_Position ) /*0x44e06f*/
              {
                Checked = (int (__stdcall ***)(_DWORD, int *, void **))Stream::GetChecked((Stream *)&v84.m_Position); /*0x44e075*/
                v64 = (**Checked)(Checked, &stru_818E00.?[17], &v86); /*0x44e089*/
                if ( v64 >= 0 ) /*0x44e08d*/
                {
                  v65 = v86; /*0x44e0a0*/
                  Release2COM((ObjectClass *)&v84.m_Data); /*0x44e0a8*/
                  m_Data = v65; /*0x44e0ad*/
                  m_Size = (_DWORD *)v84.m_Size; /*0x44e0af*/
                  v84.m_Data = m_Data; /*0x44e0b3*/
                }
                else
                {
                  Release2COM((ObjectClass *)&v84.m_Data); /*0x44e093*/
                  m_Data = 0; /*0x44e098*/
                  v84.m_Data = 0; /*0x44e09a*/
                }
                if ( v64 < 0 && v64 != -2147467262 ) /*0x44e0c1*/
                  WinAPI::Wrapper(v64); /*0x44e0c4*/
              }
              v66 = *(_DWORD *)v84.__pad_0; /*0x44e0cd*/
              if ( *(void **)v84.__pad_0 != m_Data ) /*0x44e0d3*/
              {
                v67 = *(_DWORD *)v84.__pad_0; /*0x44e0d5*/
                *(_DWORD *)v84.__pad_0 = m_Data; /*0x44e0db*/
                CellClass::SetField2C((CellClass *)&v84); /*0x44e0df*/
                if ( v67 ) /*0x44e0e6*/
                  (*(void (__stdcall **)(int))(*(_DWORD *)v67 + 8))(v67); /*0x44e0eb*/
                v66 = *(_DWORD *)v84.__pad_0; /*0x44e0ee*/
                m_Data = v84.m_Data; /*0x44e0f2*/
              }
              if ( m_Data ) /*0x44e0f8*/
              {
                (*(void (__stdcall **)(void *))(*(_DWORD *)m_Data + 8))(m_Data); /*0x44e0fd*/
                v66 = *(_DWORD *)v84.__pad_0; /*0x44e100*/
              }
              if ( v66 ) /*0x44e106*/
              {
                (*(void (__stdcall **)(int, int))(*(_DWORD *)v66 + 12))(v66, *v51); /*0x44e10e*/
                v68 = *v51; /*0x44e111*/
                m_Position = v84.m_Position; /*0x44e113*/
                if ( *v51 != v84.m_Position ) /*0x44e119*/
                {
                  *v51 = v84.m_Position; /*0x44e11d*/
                  if ( m_Position ) /*0x44e11f*/
                    (*(void (__stdcall **)(int))(*(_DWORD *)m_Position + 4))(m_Position); /*0x44e124*/
                  if ( v68 ) /*0x44e129*/
                    (*(void (__stdcall **)(int))(*(_DWORD *)v68 + 8))(v68); /*0x44e12e*/
                }
                if ( !*v51 ) /*0x44e131*/
                  WinAPI::Wrapper(-2147467261); /*0x44e13b*/
                (*(void (__stdcall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)*v51 + 112))( /*0x44e160*/
                  *v51,
                  66,
                  v88,
                  v89,
                  HIDWORD(v89));
              }
              else
              {
                v70 = *m_Size; /*0x44e168*/
                v86 = (void *)m_Size[27]; /*0x44e16a*/
                (*(void (__thiscall **)(_DWORD *, void **, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(v70 + 364))( /*0x44e18b*/
                  m_Size,
                  &v86,
                  0,
                  *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
                  0,
                  1,
                  0,
                  0);
              }
              if ( v84.m_Position ) /*0x44e197*/
                (*(void (__stdcall **)(int))(*(_DWORD *)v84.m_Position + 8))(v84.m_Position); /*0x44e19c*/
              if ( *(_DWORD *)v84.__pad_0 ) /*0x44e1a5*/
                (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v84.__pad_0 + 8))(*(_DWORD *)v84.__pad_0); /*0x44e1aa*/
            }
            else if ( !memcmp(&v90, &stru_7E9A30, 0x10u) ) /*0x44df1a*/
            {
              if ( !*v51 ) /*0x44df72*/
                WinAPI::Wrapper(-2147467261); /*0x44df7c*/
              (*(void (__stdcall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)*v51 + 112))( /*0x44dfa1*/
                *v51,
                66,
                v88,
                v89,
                HIDWORD(v89));
              m_Size = (_DWORD *)v84.m_Size; /*0x44dfa4*/
            }
            else
            {
              v53 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, &v87); /*0x44df26*/
              v54 = v53[1] + 1; /*0x44df3b*/
              LOWORD(v84.m_Position) = *v53 + 4; /*0x44df3d*/
              HIWORD(v84.m_Position) = v54; /*0x44df42*/
              i = v84.m_Position; /*0x44df52*/
              v55 = *(_DWORD *)v84.m_Size; /*0x44df56*/
              v56 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&i); /*0x44df5d*/
              (*(void (__thiscall **)(int, void *, int))(v55 + 1152))(v84.m_Size, v56, 1); /*0x44df65*/
              m_Size = (_DWORD *)v84.m_Size; /*0x44df6b*/
            }
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*m_Size + 1348))(m_Size, 0, 1071644672); /*0x44e1b8*/
            StreamClass_field_0C = v84.StreamClass_field_0C; /*0x44e1be*/
            this->? = 3; /*0x44e1c2*/
            if ( StreamClass_field_0C ) /*0x44e1ce*/
              (*(void (__stdcall **)(int))(*(_DWORD *)StreamClass_field_0C + 8))(StreamClass_field_0C); /*0x44e1d7*/
          }
          break; /*0x44e1da*/
        case 3:
          if ( !this->? ) /*0x44e202*/
          {
LABEL_112:
            Timer::StartDouble((Timer *)this->?, *(double *)this->Type->?); /*0x44e20c*/
            this->? = 4; /*0x44e22b*/
          }
          break; /*0x44e231*/
        case 4:
          if ( (unsigned __int8)Flag::CheckNone((Flag *)this->?) || this->Type->?[1] ) /*0x44e248*/
          {
            (*((void (__thiscall **)(BuildingClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, 1); /*0x44e25a*/
            this->? = 1; /*0x44e260*/
          }
          break; /*0x44e260*/
        default:
          break;
      }
      _EAX = MissionClass::GetMissionControl((MissionClass *)this); /*0x44e267*/
      __asm /*0x44e26e*/
      {
        fld qword ptr [eax+10h]
        fmul ds:dbl_7E27F8
      }
      LOWORD(v73) = Math::RoundToInt(v1); /*0x44e277*/
      return v73 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x44e29c*/
    }
    if ( Type->? && Type->? ) /*0x44e2b0*/
    {
      if ( this->? ) /*0x44e2be*/
      {
        (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 262))(this); /*0x44e333*/
        v76 = this->Type; /*0x44e339*/
        v77 = (void (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x44e33f*/
        this->? = 0; /*0x44e342*/
        this->HasExtraPowerDrain = 0; /*0x44e349*/
        this->? = v76->?; /*0x44e359*/
        v77[261](this); /*0x44e35f*/
        goto LABEL_124; /*0x44e35f*/
      }
      (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 262))(this); /*0x44e2cd*/
      v74 = (unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x44e2d9*/
      this->? = this->Type->?; /*0x44e2e3*/
      if ( v74[212](this) ) /*0x44e2eb*/
      {
        (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 261))(this); /*0x44e2fa*/
        this->? = 1; /*0x44e300*/
        this->HasExtraPowerDrain = 1; /*0x44e306*/
LABEL_124:
        LOBYTE(this->?->HouseClass_field_timer_B[2]) = 1; /*0x44e365*/
        goto LABEL_125; /*0x44e36b*/
      }
      v75 = (void (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x44e31d*/
      this->? = this->Type->?; /*0x44e320*/
      v75[261](this); /*0x44e326*/
    }
LABEL_125:
    (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 5, 0); /*0x44e371*/
    return 1; /*0x44e381*/
  }
  v4 = LinkedList::Pop((LinkedList *)this->?); /*0x44d8d8*/
  if ( !v4 ) /*0x44d8dc*/
    goto LABEL_35; /*0x44d8dc*/
  v5 = *(_WORD *)ProgressTimer::GetValue((ProgressTimer *)this->?, &v86); /*0x44d8f2*/
  LOBYTE(v6) = 0; /*0x44d8f5*/
  v82 = 1; /*0x44d8fc*/
  LOWORD(v84.StreamClass_field_0C) = v5 + 0x7FFF; /*0x44d901*/
  v84.m_Size = 0; /*0x44d90e*/
  v7 = (((unsigned int)v84.StreamClass_field_0C >> 12) + 1) >> 1; /*0x44d912*/
  for ( i = v7; ; LOBYTE(v7) = i ) /*0x44d914*/
  {
    v8 = ((_BYTE)v6 + (_BYTE)v7) & 7; /*0x44d92a*/
    v9 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, &v87); /*0x44d92d*/
    v10 = v8 & 7; /*0x44d938*/
    v11 = LOWORD(g_DDrawSurfaceManager.scenario[v10 + 82]) + *v9; /*0x44d93f*/
    v12 = (_WORD *)(4 * v10 + 9041544); /*0x44d947*/
    v13 = v12[1]; /*0x44d94e*/
    LOWORD(v84.StreamClass_field_0C) = v11; /*0x44d952*/
    v14 = v9[1] + v13; /*0x44d95a*/
    LOWORD(v84.m_Position) = *v12 + v11; /*0x44d95e*/
    v15 = v14 + v12[1]; /*0x44d967*/
    HIWORD(v84.StreamClass_field_0C) = v14; /*0x44d96a*/
    v16 = *(_DWORD *)v4; /*0x44d973*/
    HIWORD(v84.m_Position) = v15; /*0x44d975*/
    *(_DWORD *)v84.__pad_0 = v84.StreamClass_field_0C; /*0x44d980*/
    v84.m_Data = (void *)v84.m_Position; /*0x44d984*/
    LandHeight = ObjectClass::GetLandHeight((ObjectClass *)this); /*0x44d98d*/
    v17 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v84.m_Data); /*0x44d999*/
    v18 = (*(int (__thiscall **)(int, void *, int, int, _DWORD, int))(v16 + 428))(v4, v17, v8, LandHeight, 0, 1); /*0x44d9a1*/
    v19 = *(_DWORD *)v4; /*0x44d9a7*/
    v83 = v18 == 0; /*0x44d9b1*/
    v79 = ObjectClass::GetLandHeight((ObjectClass *)this); /*0x44d9bb*/
    v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v84.__pad_0); /*0x44d9c7*/
    if ( !(*(int (__thiscall **)(int, void *, int, int, _DWORD, int))(v19 + 428))(v4, v20, v8, v79, 0, 1) ) /*0x44d9cf*/
      break; /*0x44d9cf*/
    if ( !v82 ) /*0x44da20*/
      goto LABEL_13; /*0x44da20*/
LABEL_17:
    v21 = v84.m_Size; /*0x44da22*/
    if ( v84.m_Size == 7 ) /*0x44da2c*/
    {
      v21 = 0; /*0x44da2e*/
      v82 = 0; /*0x44da30*/
    }
LABEL_14:
    v6 = v21 + 1; /*0x44da07*/
    v84.m_Size = v6; /*0x44da0b*/
    if ( v6 >= 8 ) /*0x44da0f*/
      goto LABEL_34; /*0x44da0f*/
  }
  if ( !v83 && v82 ) /*0x44d9e7*/
    goto LABEL_17; /*0x44d9e7*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v84.__pad_0) + 80) & 0x100) != 0 ) /*0x44da01*/
  {
LABEL_13:
    v21 = v84.m_Size; /*0x44da03*/
    goto LABEL_14; /*0x44da03*/
  }
  ++dword_A8E7AC; /*0x44da55*/
  v22 = *(_DWORD *)v4; /*0x44da5f*/
  v89 = (unsigned int)((*(__int16 *)&v84.__pad_0[2] << 8) + 128); /*0x44da66*/
  v88 = (*(__int16 *)v84.__pad_0 << 8) + 128; /*0x44da6c*/
  if ( (*(int (__thiscall **)(int))(v22 + 44))(v4) == 15 ) /*0x44da76*/
  {
    v23 = ObjectPlacement::CalcPosition_Wrapper(&v90, &v88, 0); /*0x44da89*/
    v88 = *v23; /*0x44da90*/
    LODWORD(v89) = v23[1]; /*0x44da97*/
    v24 = v23[2]; /*0x44da9b*/
  }
  else
  {
    v25 = *(_DWORD *)v4; /*0x44dabc*/
    v84.StreamClass_field_0C = 0; /*0x44dac6*/
    v26 = (*(int (__thiscall **)(int, int))(v25 + 132))(v4, -1); /*0x44dad4*/
    v84.m_Data = (void *)*LayerClass::Pathfinding_Find( /*0x44dafb*/
                            &stru_87F5F0.__pad_58[416],
                            (int)&v84.m_Data,
                            &v88,
                            (__int16 *)&v84.m_Data,
                            *(_DWORD *)(v26 + 1660),
                            0,
                            0,
                            1,
                            1,
                            0,
                            0,
                            0,
                            1,
                            (char)&v84.StreamClass_field_0C,
                            0,
                            0,
                            v81);
    v27 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v84.m_Data); /*0x44db05*/
    v28 = (_DWORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v27 + 72))(v27, v91); /*0x44db13*/
    i = *(_DWORD *)CellStruct::Set((CellStruct *)&v87, *v28 / 256, v28[1] / 256); /*0x44db42*/
    v24 = 0; /*0x44db5f*/
    v88 = ((__int16)i << 8) + 128; /*0x44db61*/
    LODWORD(v89) = (SHIWORD(i) << 8) + 128; /*0x44db65*/
  }
  LOWORD(i) = (_WORD)v8 << 13; /*0x44db6c*/
  HIDWORD(v89) = v24; /*0x44db84*/
  v29 = (*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v4 + 216))( /*0x44db8e*/
          v4,
          &v88,
          (unsigned __int8)(((i >> 7) + 1) >> 1));
  --dword_A8E7AC; /*0x44db9d*/
  if ( !v29 ) /*0x44dba3*/
  {
LABEL_34:
    CellClass::AddObject((CellClass *)this->?, (_DWORD *)v4); /*0x44dc6e*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 284))(v4); /*0x44dc7e*/
    goto LABEL_35; /*0x44dc7e*/
  }
  if ( this->Type->InfantryAbsorb ) /*0x44dbaf*/
  {
    v30 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 18))(this, &v90); /*0x44dbc5*/
    StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 628), v30, 0); /*0x44dbd5*/
    v31 = *(_DWORD *)(v4 + 540); /*0x44dbda*/
    if ( *(_BYTE *)(v31 + 492) ) /*0x44dbe0*/
      *(_BYTE *)(v4 + 1679) = 0; /*0x44dbea*/
    if ( !*(_BYTE *)(v4 + 1080) ) /*0x44dbf1*/
    {
      ++*(_DWORD *)(v31 + 756); /*0x44dc02*/
      *(_BYTE *)(v4 + 1080) = 1; /*0x44dc08*/
    }
    *(_BYTE *)(v4 + 1081) = 0; /*0x44dc0f*/
  }
  (*(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)v4 + 488))(v4, 2, 0, v81); /*0x44dc1e*/
  v32 = *(_DWORD *)v4; /*0x44dc28*/
  if ( v84.__pad_0[2] ) /*0x44dc2e*/
    p_m_Position = (__int16 *)&v84.m_Position; /*0x44dc34*/
  else
    p_m_Position = (__int16 *)&v84.m_Data; /*0x44dc3b*/
  v33 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], p_m_Position); /*0x44dc41*/
  (*(void (__thiscall **)(int, void *))(v32 + 1152))(v4, v33); /*0x44dc49*/
  if ( this->Type->ExtraPowerBonus > 0 ) /*0x44dc5d*/
    LOBYTE(this->?->HouseClass_field_timer_B[2]) = 1; /*0x44dc65*/
LABEL_35:
  _EAX = MissionClass::GetMissionControl((MissionClass *)this); /*0x44dc84*/
  __asm /*0x44dc8b*/
  {
    fld qword ptr [eax+10h]
    fmul ds:dbl_7E27F8
  }
  LOWORD(v35) = Math::RoundToInt(v1); /*0x44dc94*/
  return v35 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x44dcb1*/
}



// ==== 0x0044E3A0  BuildingClass::CheckOverlapWithOthers  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::CheckOverlapWithOthers(BuildingClass *this)
{
  int v2; // ebp
  _WORD *v3; // esi
  BuildingClass *v4; // eax
  char v6; // [esp+13h] [ebp-9h]
  int v7; // [esp+14h] [ebp-8h]
  __int16 v8[2]; // [esp+18h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, __int16 *))this->TechnoClass + 110))(this, v8); /*0x44e3b8*/
  v3 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 66))(this, 0); /*0x44e3cf*/
  v6 = 0; /*0x44e3d1*/
LABEL_2:
  while ( *v3 != 0x7FFF || v3[1] != 0x7FFF ) /*0x44e3e3*/
  {
    LOWORD(v7) = v2 + *v3; /*0x44e3eb*/
    HIWORD(v7) = HIWORD(v2) + v3[1]; /*0x44e3f8*/
    *(_DWORD *)v8 = v7; /*0x44e401*/
    v3 += 2; /*0x44e40a*/
    v4 = (BuildingClass *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 57); /*0x44e412*/
    if ( v4 ) /*0x44e41a*/
    {
      while ( this == v4 ) /*0x44e41e*/
      {
        v4 = (BuildingClass *)v4->?; /*0x44e420*/
        if ( !v4 ) /*0x44e425*/
          goto LABEL_2; /*0x44e425*/
      }
      v6 = 1; /*0x44e429*/
    }
  }
  return v6; /*0x44e434*/
}



// ==== 0x0044E440  BuildingClass::ProcessPowerPlantEffect  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessPowerPlantEffect(BuildingClass *this)
{
  double v1; // st7
  BuildingTypeClass *Type; // eax
  int v5; // eax
  int v6; // ecx
  int v8; // eax
  int result; // eax
  int *v10; // eax
  int v12; // eax
  int v13; // edx
  int *GateTimer; // esi
  int *location; // esi
  int v16; // edi
  int v17; // edx
  int v18; // eax
  int v21; // eax
  int v23; // eax
  int v24; // [esp+8h] [ebp-34h]
  int v25; // [esp+Ch] [ebp-30h]
  _DWORD v26[3]; // [esp+10h] [ebp-2Ch] BYREF
  int v27; // [esp+1Ch] [ebp-20h] BYREF
  int v28; // [esp+20h] [ebp-1Ch]
  int v29; // [esp+24h] [ebp-18h]
  int v30; // [esp+2Ch] [ebp-10h] BYREF
  int v31; // [esp+30h] [ebp-Ch]

  Type = this->Type; /*0x44e447*/
  if ( Type->Gate ) /*0x44e44d*/
  {
    switch ( this->? ) /*0x44e466*/
    {
      case 0: /*0x44e466*/
        if ( (unsigned __int8)BuildingClass::CheckPowerFlags((BuildingClass *)this->?) ) /*0x44e475*/
        {
          _EAX = this->Type; /*0x44e47e*/
          __asm /*0x44e484*/
          {
            fld qword ptr [eax+0E28h]
            fmul ds:dbl_7E27F8
          }
          LOWORD(v5) = Math::RoundToInt(v1); /*0x44e490*/
          v6 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44e495*/
          this->? = 2; /*0x44e4a1*/
          this->GateTimer[0] = v6; /*0x44e4ab*/
          this->GateTimer[1] = v28; /*0x44e4b1*/
          this->GateTimer[2] = v5; /*0x44e4b4*/
          this->GateTimer[3] = v5; /*0x44e4b7*/
          goto LABEL_5; /*0x44e4b7*/
        }
        if ( !(unsigned __int8)Window::IsVisible((Window *)this->?) ) /*0x44e4f0*/
        {
          if ( (unsigned __int8)BuildingClass::CheckFlag24((BuildingClass *)this->?) ) /*0x44e4ff*/
          {
            BuildingClass::UpdateTimerWithElapsed((BuildingClass *)this->?); /*0x44e50a*/
          }
          else
          {
            RateScaler::Init((RateScaler *)this->?, *(double *)this->Type->?); /*0x44e52a*/
            v26[0] = this->?[0]; /*0x44e539*/
            v26[1] = this->?[1]; /*0x44e545*/
            v26[2] = this->?[2]; /*0x44e54c*/
            StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1032), v26, 0); /*0x44e55a*/
            v10 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 75))(this, &v30); /*0x44e56a*/
            Cell::CreateCrater(*v10, v10[1], v10[2], v10[3], 0); /*0x44e591*/
          }
        }
        _ECX = this->Type; /*0x44e596*/
        this->? = 1; /*0x44e59c*/
        __asm /*0x44e5a6*/
        {
          fld qword ptr [ecx+0E28h]
          fmul ds:dbl_7E27F8
        }
        LOWORD(v12) = Math::RoundToInt(v1); /*0x44e5b2*/
        v13 = v31; /*0x44e5bd*/
        GateTimer = this->GateTimer; /*0x44e5c1*/
        *GateTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44e5c7*/
        GateTimer[1] = v13; /*0x44e5c9*/
        GateTimer[2] = v12; /*0x44e5cc*/
        GateTimer[3] = v12; /*0x44e5cf*/
        return 0; /*0x44e5d9*/
      case 1: /*0x44e466*/
        if ( (unsigned __int8)BuildingClass::CheckPowerFlags((BuildingClass *)this->?) ) /*0x44e6e0*/
          this->? = 2; /*0x44e6e9*/
        goto LABEL_23; /*0x44e6e9*/
      case 2: /*0x44e466*/
        if ( BuildingClass::CheckOverlapWithOthers(this) ) /*0x44e637*/
        {
          _ECX = this->Type; /*0x44e69f*/
          __asm /*0x44e6a5*/
          {
            fld qword ptr [ecx+0E28h]
            fmul ds:dbl_7E27F8
          }
          LOWORD(v21) = Math::RoundToInt(v1); /*0x44e6b1*/
          this->GateTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44e6c2*/
          this->GateTimer[1] = v31; /*0x44e6cc*/
          this->GateTimer[2] = v21; /*0x44e6cf*/
          this->GateTimer[3] = v21; /*0x44e6d2*/
        }
        else
        {
          v16 = this->GateTimer[3]; /*0x44e640*/
          v25 = v16; /*0x44e648*/
          if ( !v16 ) /*0x44e64c*/
            goto LABEL_19; /*0x44e64c*/
          v17 = this->GateTimer[0]; /*0x44e64e*/
          v18 = this->GateTimer[2]; /*0x44e654*/
          if ( v17 != -1 ) /*0x44e65d*/
          {
            if ( *(_DWORD *)&stru_A8EB00.?[416] - v17 >= v18 ) /*0x44e669*/
              v18 = 0; /*0x44e66f*/
            else
              v18 -= *(_DWORD *)&stru_A8EB00.?[416] - v17; /*0x44e66b*/
          }
          v24 = v16 - v18; /*0x44e673*/
          __asm /*0x44e677*/
          {
            fild [esp+3Ch+var_34]
            fidiv [esp+3Ch+var_30]
            fcomp ds:dbl_7E1718
            fnstsw ax
          }
          if ( (_AX & 0x4000) != 0 ) /*0x44e68a*/
LABEL_19:
            this->? = 3; /*0x44e690*/
        }
        goto LABEL_5; /*0x44e69a*/
      case 3: /*0x44e466*/
        Timer::StartDouble((Timer *)this->?, *(double *)Type->?); /*0x44e5ee*/
        this->? = 4; /*0x44e5f3*/
        location = this->?; /*0x44e5fd*/
        v27 = *location; /*0x44e607*/
        v28 = location[1]; /*0x44e613*/
        v29 = location[2]; /*0x44e61a*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1028), &v27, 0); /*0x44e628*/
        return 0; /*0x44e634*/
      case 4: /*0x44e466*/
LABEL_23:
        if ( (unsigned __int8)Flag::CheckNone((Flag *)this->?) ) /*0x44e6fb*/
        {
          (*((void (__thiscall **)(BuildingClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, 1); /*0x44e70c*/
          this->? = 5; /*0x44e712*/
          this->? = 1; /*0x44e71c*/
        }
        if ( (unsigned __int8)Window::IsVisible((Window *)this->?) /*0x44e73b*/
          || (unsigned __int8)BuildingClass::CheckFlag24((BuildingClass *)this->?)
          || (unsigned __int8)BuildingClass::CheckPowerFlags((BuildingClass *)this->?) )
        {
          Animation::GetProgress((Animation *)this->?); /*0x44e746*/
          _EAX = this->Type; /*0x44e74b*/
          __asm { fimul dword ptr [eax+16F8h] } /*0x44e751*/
          LOWORD(v23) = Math::RoundToInt(v1); /*0x44e757*/
          if ( v23 != this->GateStage ) /*0x44e765*/
          {
            this->GateStage = v23; /*0x44e767*/
            this->? = 1; /*0x44e76d*/
          }
        }
        return 0; /*0x44e77b*/
      default:
LABEL_5:
        _EAX = MissionClass::GetMissionControl((MissionClass *)this); /*0x44e4ba*/
        __asm /*0x44e4c1*/
        {
          fld qword ptr [eax+10h]
          fmul ds:dbl_7E27F8
        }
        LOWORD(v8) = Math::RoundToInt(v1); /*0x44e4ca*/
        result = v8 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x44e4e6*/
        break; /*0x44e4ed*/
    }
  }
  else
  {
    (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 5, 0); /*0x44e784*/
    return 1; /*0x44e78b*/
  }
  return result; /*0x44e4e8*/
}



// ==== 0x0044E7B0  BuildingClass::GetPowerOutput  this=BuildingClass  sig=csp ====
int __usercall BuildingClass::GetPowerOutput@<eax>(BuildingClass *this, double a2@<st0>)
{
  BuildingClass *v2; // ecx
  BuildingClass *v3; // esi
  int PowerBonus; // edi
  BuildingTypeClass *Type; // eax
  int ExtraPowerBonus; // eax
  int v7; // ecx
  int *Upgrades; // ecx
  int v9; // edx
  int result; // eax
  int v11; // [esp+8h] [ebp-4h]

  v3 = v2; /*0x44e7b2*/
  PowerBonus = v2->Type->PowerBonus; /*0x44e7bd*/
  v11 = PowerBonus; /*0x44e7c3*/
  if ( (*((unsigned __int8 (**)(void))v2->TechnoClass + 117))() ) /*0x44e7c7*/
    return 0; /*0x44e7c7*/
  if ( v3->HasExtraPowerBonus ) /*0x44e7d5*/
  {
    PowerBonus += v3->Type->ExtraPowerBonus; /*0x44e7e5*/
    v11 = PowerBonus; /*0x44e7eb*/
  }
  Type = v3->Type; /*0x44e7ef*/
  if ( Type->UnitAbsorb || Type->InfantryAbsorb ) /*0x44e7ff*/
  {
    ExtraPowerBonus = Type->ExtraPowerBonus; /*0x44e809*/
    if ( ExtraPowerBonus > 0 ) /*0x44e811*/
    {
      v7 = v3->?[0]; /*0x44e813*/
      if ( v7 > 0 ) /*0x44e81b*/
      {
        PowerBonus += v7 * ExtraPowerBonus; /*0x44e820*/
        v11 = PowerBonus; /*0x44e822*/
      }
    }
  }
  if ( v3->UpgradeLevel ) /*0x44e826*/
  {
    Upgrades = v3->Upgrades; /*0x44e830*/
    v9 = 3; /*0x44e836*/
    do /*0x44e84b*/
    {
      if ( *Upgrades ) /*0x44e83b*/
        PowerBonus += *(_DWORD *)(*Upgrades + 3808); /*0x44e841*/
      ++Upgrades; /*0x44e847*/
      --v9; /*0x44e84a*/
    }
    while ( v9 ); /*0x44e84b*/
    v11 = PowerBonus; /*0x44e84d*/
  }
  if ( PowerBonus <= 0 || !v3->HasPower ) /*0x44e855*/
    return 0; /*0x44e874*/
  BuildingClass::GetHealthRatio(v3); /*0x44e861*/
  __asm { fimul [esp+0Ch+var_4] } /*0x44e866*/
  LOWORD(result) = Math::RoundToInt(a2); /*0x44e86a*/
  return result; /*0x44e86f*/
}



// ==== 0x0044E880  BuildingClass::GetPowerDrain  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetPowerDrain(BuildingClass *this)
{
  BuildingTypeClass *Type; // ecx
  int result; // eax
  int *Upgrades; // edx
  int v5; // esi

  if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 117))(this) || !this->HasPower ) /*0x44e88f*/
    return 0; /*0x44e8de*/
  Type = this->Type; /*0x44e899*/
  result = Type->PowerDrain; /*0x44e8a7*/
  if ( this->HasExtraPowerDrain ) /*0x44e89f*/
    result += Type->ExtraPowerDrain; /*0x44e8af*/
  if ( this->UpgradeLevel ) /*0x44e8b5*/
  {
    Upgrades = this->Upgrades; /*0x44e8bf*/
    v5 = 3; /*0x44e8c5*/
    do /*0x44e8da*/
    {
      if ( *Upgrades ) /*0x44e8ca*/
        result += *(_DWORD *)(*Upgrades + 3812); /*0x44e8d0*/
      ++Upgrades; /*0x44e8d6*/
      --v5; /*0x44e8d9*/
    }
    while ( v5 ); /*0x44e8da*/
  }
  return result; /*0x44e8dc*/
}



// ==== 0x0044E8F0  BuildingClass::OnObjectExpired  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::OnObjectExpired(BuildingClass *this)
{
  int v2; // edx
  int v5; // ecx
  char *v6; // eax
  int v7; // edx
  int v9; // ecx
  char *v10; // eax
  int result; // eax
  int *DamageFireAnims; // ecx
  int *Upgrades; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int *v20; // esi
  int v21; // ecx
  int v22; // ecx
  int *v23; // [esp+10h] [ebp+4h]
  int *v24; // [esp+14h] [ebp+8h] BYREF

  ObjectClass::NotifyExpired((ObjectClass *)this, v23, v24); /*0x44e8ff*/
  if ( (int *)this->C4AppliedBy == v23 ) /*0x44e90e*/
    this->C4AppliedBy = 0; /*0x44e910*/
  if ( (int *)this->FirestormAnim == v23 ) /*0x44e91c*/
    this->FirestormAnim = 0; /*0x44e91e*/
  if ( (int *)this->Factory == v23 ) /*0x44e92a*/
    this->Factory = 0; /*0x44e92c*/
  if ( (int *)this->Spotlight == v23 ) /*0x44e938*/
    this->Spotlight = 0; /*0x44e93a*/
  if ( (int *)this->LightSource == v23 ) /*0x44e946*/
    this->LightSource = 0; /*0x44e948*/
  if ( (int *)this->Anims[8] == v23 ) /*0x44e954*/
  {
    BuildingClass::GetHealthRatio(this); /*0x44e958*/
    _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44e95d*/
    __asm /*0x44e963*/
    {
      fcomp qword ptr [ecx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x44e96e*/
    {
      v5 = 1; /*0x44e976*/
      v6 = &this->Type->__pad_F70[1204]; /*0x44e97b*/
    }
    else
    {
      v5 = 0; /*0x44e988*/
      v6 = &this->Type->__pad_F70[1188]; /*0x44e98a*/
    }
    if ( v6 && *v6 ) /*0x44e993*/
      BuildingClass::PlayAnim(this, v2, v6, 18, v5, 0, 0); /*0x44e99f*/
  }
  if ( this->Type->Grinding && (int *)this->Anims[10] == v23 ) /*0x44e9b8*/
  {
    BuildingClass::GetHealthRatio(this); /*0x44e9bc*/
    _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44e9c1*/
    __asm /*0x44e9c6*/
    {
      fcomp qword ptr [eax+1700h]
      fnstsw ax
    }
    if ( (_EAX & 0x4100) != 0 ) /*0x44e9d1*/
    {
      v9 = 1; /*0x44e9d9*/
      v10 = &this->Type->__pad_F70[184]; /*0x44e9de*/
    }
    else
    {
      v9 = 0; /*0x44e9eb*/
      v10 = &this->Type->__pad_F70[168]; /*0x44e9ed*/
    }
    if ( v10 && *v10 ) /*0x44e9f6*/
      BuildingClass::PlayAnim(this, v7, v10, 3, v9, 0, 0); /*0x44ea02*/
  }
  if ( v23 && (*(int (__stdcall **)(int *))(v23[1] + 12))(v23 + 1) == 4 ) /*0x44ea18*/
  {
    result = 0; /*0x44ea1a*/
    DamageFireAnims = this->DamageFireAnims; /*0x44ea1c*/
    do /*0x44ea2d*/
    {
      if ( (int *)*DamageFireAnims == v23 ) /*0x44ea24*/
      {
        this->DamageFireAnims[result] = 0; /*0x44ea45*/
        return result; /*0x44ea4f*/
      }
      ++result; /*0x44ea26*/
      ++DamageFireAnims; /*0x44ea27*/
    }
    while ( result < 8 ); /*0x44ea2d*/
    if ( !*((_BYTE *)v23 + 280) ) /*0x44ea35*/
      goto LABEL_34; /*0x44ea35*/
    LOBYTE(result) = BuildingClass::StopAnim((int)this, (int)v23); /*0x44ea3a*/
  }
  else
  {
LABEL_34:
    if ( (int *)this->Type == v23 ) /*0x44ea58*/
      this->Type = 0; /*0x44ea5a*/
    Upgrades = this->Upgrades; /*0x44ea60*/
    v14 = 3; /*0x44ea66*/
    do /*0x44ea75*/
    {
      if ( (int *)*Upgrades == v23 ) /*0x44ea6d*/
        *Upgrades = 0; /*0x44ea6f*/
      ++Upgrades; /*0x44ea71*/
      --v14; /*0x44ea74*/
    }
    while ( v14 ); /*0x44ea75*/
    v15 = this->Overpowerers[0]; /*0x44ea77*/
    v24 = v23; /*0x44ea8b*/
    v16 = (*(int (__thiscall **)(int *, int **))(v15 + 16))(this->Overpowerers, &v24); /*0x44ea8f*/
    if ( v16 != -1 ) /*0x44ea95*/
    {
      v17 = this->Audio7[1]; /*0x44ea97*/
      if ( v16 < v17 ) /*0x44ea9c*/
      {
        v18 = v17 - 1; /*0x44ea9e*/
        for ( this->Audio7[1] = v18; /*0x44eaa4*/
              v16 < this->Audio7[1];
              *(_DWORD *)(this->Occupants[0] + 4 * v16 - 4) = *(_DWORD *)(this->Occupants[0] + 4 * v16) )
        {
          ++v16; /*0x44eaa9*/
        }
      }
    }
    result = dword_A8E7AC; /*0x44eab8*/
    if ( dword_A8E7AC ) /*0x44eac0*/
    {
      v19 = this->Audio7[3]; /*0x44eac2*/
      v20 = &this->Audio7[3]; /*0x44eac8*/
      v24 = v23; /*0x44ead2*/
      result = (*(int (__thiscall **)(int *, int **))(v19 + 16))(v20, &v24); /*0x44ead9*/
      if ( result != -1 ) /*0x44eadf*/
      {
        v21 = v20[4]; /*0x44eae1*/
        if ( result < v21 ) /*0x44eae6*/
        {
          v22 = v21 - 1; /*0x44eae8*/
          for ( v20[4] = v22; result < v20[4]; *(_DWORD *)(v20[1] + 4 * result - 4) = *(_DWORD *)(v20[1] + 4 * result) ) /*0x44eaee*/
            ++result; /*0x44eaf3*/
        }
      }
    }
  }
  return result; /*0x44ea3f*/
}



// ==== 0x0044EB10  BuildingClass::GetCrew  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetCrew(BuildingClass *this)
{
  if ( this->HasBeenCaptured /*0x44eb43*/
    || Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 25
    || this->Type->Factory[0] != 7 )
  {
    return TechnoClass::GetCrew((TechnoClass *)this); /*0x44eb55*/
  }
  else
  {
    return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3952); /*0x44eb4c*/
  }
}



// ==== 0x0044EBF0  BuildingClass::Disappear_PrismForward  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Disappear_PrismForward(BuildingClass *this)
{
  int v1; // ebx
  FactoryClass *Factory; // ecx
  FactoryClass *v4; // ecx
  HouseClass *owner; // ecx
  BuildingTypeClass *Type; // eax
  int v7; // edx
  AbstractClass *primaryForBuildings; // ecx
  int v9; // eax
  char inLimbo; // bl
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  AbstractClass *primaryUnused1; // ecx
  int v16; // eax
  char v17; // bl
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  AbstractClass *primaryUnused2; // ecx
  int v23; // eax
  char v24; // bl
  int v25; // edi
  int v26; // eax
  int v27; // eax
  int v28; // eax
  AbstractClass *primaryUnused3; // ecx
  int v30; // eax
  char v31; // bl
  int v32; // edi
  int v33; // eax
  int v34; // eax
  int v35; // eax
  AbstractClass *primaryForDefenses; // ecx
  int v37; // eax
  char v38; // bl
  int v39; // edi
  int v40; // eax
  int v41; // eax
  int v42; // eax
  AbstractClass *BuildLimit; // eax
  int i; // ebp
  int Member; // eax
  int v46; // edi
  int v48; // [esp+44h] [ebp-10h]
  char v49; // [esp+58h] [ebp+4h]

  if ( v49 ) /*0x44ebfb*/
  {
    Factory = this->Factory; /*0x44ec01*/
    if ( Factory ) /*0x44ec09*/
    {
      BuildingClass::AbandonProduction((int)Factory); /*0x44ec0b*/
      v4 = this->Factory; /*0x44ec10*/
      if ( v4 ) /*0x44ec18*/
        (*((void (__thiscall **)(FactoryClass *, int))v4->AbstractClass + 8))(v4, 1); /*0x44ec1e*/
      this->Factory = 0; /*0x44ec21*/
    }
    owner = this->?; /*0x44ec2b*/
    v48 = v1; /*0x44ec31*/
    if ( !owner ) /*0x44ec34*/
      goto LABEL_33; /*0x44ec34*/
    Type = this->Type; /*0x44ec3a*/
    v7 = Type->Factory[0]; /*0x44ec40*/
    if ( v7 == 7 ) /*0x44ec49*/
    {
      primaryForBuildings = (AbstractClass *)owner->primaryForBuildings; /*0x44ec4f*/
      if ( primaryForBuildings ) /*0x44ec57*/
      {
        v9 = AbstractClass::GetType(primaryForBuildings); /*0x44ec59*/
        inLimbo = this->?; /*0x44ec5e*/
        v11 = v9; /*0x44ec64*/
        this->? = 1; /*0x44ec68*/
        if ( v9 ) /*0x44ec6f*/
        {
          v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 132))(v9); /*0x44ec75*/
          if ( !(*(int (__thiscall **)(int, int, _DWORD, _DWORD, HouseClass *))(*(_DWORD *)v12 + 148))( /*0x44ec8c*/
                  v12,
                  1,
                  0,
                  0,
                  this->?) )
          {
            v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11); /*0x44ec9a*/
            v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 64))(v13); /*0x44eca8*/
            HouseClass::CancelProduction(this->?, (void *)this->Type->Factory[0], v14, 0, 0); /*0x44ecbf*/
          }
        }
        this->? = inLimbo; /*0x44ecc4*/
      }
      primaryUnused1 = (AbstractClass *)this->?->primaryUnused1; /*0x44ecd0*/
      if ( primaryUnused1 ) /*0x44ecd8*/
      {
        v16 = AbstractClass::GetType(primaryUnused1); /*0x44ecda*/
        v17 = this->?; /*0x44ecdf*/
        v18 = v16; /*0x44ece5*/
        this->? = 1; /*0x44ece9*/
        if ( v16 ) /*0x44ecf0*/
        {
          v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 132))(v16); /*0x44ecf6*/
          if ( !(*(int (__thiscall **)(int, int, _DWORD, _DWORD, HouseClass *))(*(_DWORD *)v19 + 148))( /*0x44ed0d*/
                  v19,
                  1,
                  0,
                  0,
                  this->?) )
          {
            v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 132))(v18); /*0x44ed1b*/
            v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 64))(v20); /*0x44ed29*/
            HouseClass::CancelProduction(this->?, (void *)this->Type->Factory[0], v21, 0, 0); /*0x44ed40*/
          }
        }
        this->? = v17; /*0x44ed45*/
      }
      primaryUnused2 = (AbstractClass *)this->?->primaryUnused2; /*0x44ed51*/
      if ( primaryUnused2 ) /*0x44ed59*/
      {
        v23 = AbstractClass::GetType(primaryUnused2); /*0x44ed5b*/
        v24 = this->?; /*0x44ed60*/
        v25 = v23; /*0x44ed66*/
        this->? = 1; /*0x44ed6a*/
        if ( v23 ) /*0x44ed71*/
        {
          v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 132))(v23); /*0x44ed77*/
          if ( !(*(int (__thiscall **)(int, int, _DWORD, _DWORD, HouseClass *))(*(_DWORD *)v26 + 148))( /*0x44ed8e*/
                  v26,
                  1,
                  0,
                  0,
                  this->?) )
          {
            v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 132))(v25); /*0x44ed9c*/
            v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 64))(v27); /*0x44edaa*/
            HouseClass::CancelProduction(this->?, (void *)this->Type->Factory[0], v28, 0, 0); /*0x44edc1*/
          }
        }
        this->? = v24; /*0x44edc6*/
      }
      primaryUnused3 = (AbstractClass *)this->?->primaryUnused3; /*0x44edd2*/
      if ( primaryUnused3 ) /*0x44edda*/
      {
        v30 = AbstractClass::GetType(primaryUnused3); /*0x44eddc*/
        v31 = this->?; /*0x44ede1*/
        v32 = v30; /*0x44ede7*/
        this->? = 1; /*0x44edeb*/
        if ( v30 ) /*0x44edf2*/
        {
          v33 = (*(int (__thiscall **)(int))(*(_DWORD *)v30 + 132))(v30); /*0x44edf8*/
          if ( !(*(int (__thiscall **)(int, int, _DWORD, _DWORD, HouseClass *))(*(_DWORD *)v33 + 148))( /*0x44ee0f*/
                  v33,
                  1,
                  0,
                  0,
                  this->?) )
          {
            v34 = (*(int (__thiscall **)(int))(*(_DWORD *)v32 + 132))(v32); /*0x44ee1d*/
            v35 = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 64))(v34); /*0x44ee2b*/
            HouseClass::CancelProduction(this->?, (void *)this->Type->Factory[0], v35, 0, 0); /*0x44ee42*/
          }
        }
        this->? = v31; /*0x44ee47*/
      }
      primaryForDefenses = (AbstractClass *)this->?->primaryForDefenses; /*0x44ee53*/
      if ( !primaryForDefenses ) /*0x44ee5b*/
        goto LABEL_33; /*0x44ee5b*/
      v37 = AbstractClass::GetType(primaryForDefenses); /*0x44ee5d*/
      v38 = this->?; /*0x44ee62*/
      v39 = v37; /*0x44ee68*/
      this->? = 1; /*0x44ee6c*/
      if ( !v37 ) /*0x44ee73*/
        goto LABEL_32; /*0x44ee73*/
    }
    else
    {
      BuildLimit = (AbstractClass *)HouseClass::GetBuildLimit(owner, v7, Type->?[1], 0); /*0x44eef7*/
      if ( !BuildLimit ) /*0x44eefe*/
        goto LABEL_33; /*0x44eefe*/
      v37 = AbstractClass::GetType(BuildLimit); /*0x44ef02*/
      v38 = this->?; /*0x44ef07*/
      v39 = v37; /*0x44ef0d*/
      this->? = 1; /*0x44ef11*/
      if ( !v37 ) /*0x44ef18*/
      {
LABEL_32:
        this->? = v38; /*0x44eec8*/
LABEL_33:
        (*((void (__thiscall **)(BuildingClass *, int))this->TechnoClass + 160))(this, 3); /*0x44eece*/
        return ObjectClass::Destroy2((ObjectClass *)this); /*0x44eed4*/
      }
    }
    v40 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v37 + 132))(v37, v48); /*0x44ee79*/
    if ( !(*(int (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v40 + 148))(v40, 1, 0, 0) ) /*0x44ee90*/
    {
      v41 = (*(int (__thiscall **)(int))(*(_DWORD *)v39 + 132))(v39); /*0x44ee9e*/
      v42 = (*(int (__thiscall **)(int))(*(_DWORD *)v41 + 64))(v41); /*0x44eeac*/
      HouseClass::CancelProduction(this->?, (void *)this->Type->Factory[0], v42, 0, 0); /*0x44eec3*/
    }
    goto LABEL_32; /*0x44eec3*/
  }
  for ( i = 0; i < this->?[2]; ++i ) /*0x44ef33*/
  {
    Member = Team::GetMember((Team *)this, i); /*0x44ef38*/
    v46 = Member; /*0x44ef3d*/
    if ( Member && !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, Member) ) /*0x44ef4a*/
      (*((void (__thiscall **)(BuildingClass *, int, int))this->TechnoClass + 158))(this, 3, v46); /*0x44ef5a*/
  }
  return ObjectClass::Destroy2((ObjectClass *)this); /*0x44eee7*/
}



// ==== 0x0044EFB0  BuildingClass::ValidateFoundation  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ValidateFoundation(BuildingClass *this)
{
  int *v2; // eax
  BuildingTypeClass *Type; // edx
  int v4; // ebp
  int *v5; // esi
  int v6; // edi
  void *v7; // eax
  int v9; // edi
  void *v10; // eax
  int v11; // edi
  void *v12; // eax
  BuildingTypeClass *v13; // eax
  _DWORD *v14; // eax
  int v15; // edi
  void *v16; // eax
  int v17; // edi
  void *v18; // eax
  int v19; // edi
  void *v20; // eax
  int v21; // edi
  void *v22; // eax
  BuildingTypeClass *v23; // ecx
  _WORD *v24; // edi
  _WORD *v25; // eax
  int v26; // ebp
  void *v27; // eax
  __int16 FoundationHeight; // ax
  BuildingTypeClass *v29; // ecx
  int v30; // ebp
  __int16 v31; // di
  __int16 v32; // di
  int v33; // ebp
  void *v34; // eax
  int v35; // edi
  void *v36; // eax
  BuildingTypeClass *v37; // ecx
  __int16 FoundationWidth; // ax
  int *v39; // ecx
  int v40; // ebp
  __int16 v41; // di
  __int16 v42; // di
  int v43; // ebp
  void *v44; // eax
  int v45; // edi
  void *v46; // eax
  int *v47; // ecx
  __int16 v48[2]; // [esp+50h] [ebp-20h] BYREF
  int v49; // [esp+54h] [ebp-1Ch]
  int v50; // [esp+58h] [ebp-18h] BYREF
  int v51; // [esp+5Ch] [ebp-14h]
  int v52[3]; // [esp+64h] [ebp-Ch] BYREF
  _DWORD *v53; // [esp+74h] [ebp+4h]
  int *v54; // [esp+78h] [ebp+8h]
  int v55; // [esp+78h] [ebp+8h]
  int v56; // [esp+78h] [ebp+8h]
  int v57; // [esp+78h] [ebp+8h]
  __int16 v58; // [esp+78h] [ebp+8h]
  int v59; // [esp+78h] [ebp+8h]
  int v60; // [esp+78h] [ebp+8h]
  int v61; // [esp+78h] [ebp+8h]
  int v62; // [esp+7Ch] [ebp+Ch] BYREF

  v2 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 110))(this, &v50); /*0x44efc2*/
  Type = this->Type; /*0x44efc8*/
  v4 = *v2; /*0x44efce*/
  v5 = v54; /*0x44efd0*/
  v51 = *v2; /*0x44efd4*/
  if ( Type->GDIBarracks ) /*0x44efd8*/
  {
    LOWORD(v55) = v4 + 1; /*0x44efec*/
    HIWORD(v55) = HIWORD(v51) + 2; /*0x44eff1*/
    *(_DWORD *)v48 = v55; /*0x44f004*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f008*/
    {
      v6 = *v5; /*0x44f011*/
      v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f025*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v6 + 428))(v5, v7, -1, -1, 0, 1) ) /*0x44f02d*/
      {
        *v53 = *(_DWORD *)v48; /*0x44f042*/
        return (int)v53; /*0x44f048*/
      }
    }
  }
  if ( this->Type->NODBarracks ) /*0x44f051*/
  {
    LOWORD(v56) = v4 + 2; /*0x44f062*/
    HIWORD(v56) = HIWORD(v51) + 2; /*0x44f06e*/
    *(_DWORD *)v48 = v56; /*0x44f07d*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f081*/
    {
      v9 = *v5; /*0x44f08a*/
      v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f09e*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v9 + 428))(v5, v10, -1, -1, 0, 1) ) /*0x44f0a6*/
      {
        *v53 = *(_DWORD *)v48; /*0x44f0bb*/
        return (int)v53; /*0x44f0c1*/
      }
    }
  }
  if ( this->Type->YuriBarracks ) /*0x44f0ca*/
  {
    LOWORD(v57) = v4 + 2; /*0x44f0dc*/
    HIWORD(v57) = HIWORD(v51) + 1; /*0x44f0e1*/
    *(_DWORD *)v48 = v57; /*0x44f0f4*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f0f8*/
    {
      v11 = *v5; /*0x44f101*/
      v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f115*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v11 + 428))(v5, v12, -1, -1, 0, 1) ) /*0x44f11d*/
      {
LABEL_12:
        *v53 = *(_DWORD *)v48; /*0x44f127*/
        return (int)v53; /*0x44f138*/
      }
    }
  }
  v13 = this->Type; /*0x44f13b*/
  if ( v13->?[1] && v13->WeaponsFactory ) /*0x44f14f*/
  {
    v14 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *, int *))this->TechnoClass + 42))(this, v52, v5); /*0x44f167*/
    v58 = *v14 / 256; /*0x44f17d*/
    v48[1] = v14[1] / 256; /*0x44f1a3*/
    ++v48[1]; /*0x44f1a8*/
    v48[0] = v58 + 1; /*0x44f1ae*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f1b3*/
    {
      v15 = *v5; /*0x44f1bc*/
      v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f1d0*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v15 + 428))(v5, v16, -1, -1, 0, 0) ) /*0x44f1d8*/
      {
        *v53 = *(_DWORD *)v48; /*0x44f1ed*/
        return (int)v53; /*0x44f1f3*/
      }
    }
    --v48[1]; /*0x44f1f6*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f205*/
    {
      v17 = *v5; /*0x44f20e*/
      v18 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f222*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v17 + 428))(v5, v18, -1, -1, 0, 0) ) /*0x44f22a*/
      {
        *v53 = *(_DWORD *)v48; /*0x44f23f*/
        return (int)v53; /*0x44f245*/
      }
    }
    ++v48[1]; /*0x44f248*/
    --v48[0]; /*0x44f24d*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f25c*/
    {
      v19 = *v5; /*0x44f265*/
      v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f279*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v19 + 428))(v5, v20, -1, -1, 0, 0) ) /*0x44f281*/
      {
        *v53 = *(_DWORD *)v48; /*0x44f296*/
        return (int)v53; /*0x44f29c*/
      }
    }
  }
  if ( v62 != g_TerrainTypeTable ) /*0x44f2ab*/
  {
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&v62) ) /*0x44f2c5*/
    {
      v21 = *v5; /*0x44f2ce*/
      v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v62); /*0x44f2e2*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v21 + 428))(v5, v22, -1, -1, 0, 0) ) /*0x44f2ea*/
      {
        *v53 = v62; /*0x44f2ff*/
        return (int)v53; /*0x44f305*/
      }
    }
  }
  v23 = this->Type; /*0x44f308*/
  v24 = (_WORD *)v23->FoundationOutside[0]; /*0x44f30e*/
  if ( v24 && !v23->Hospital ) /*0x44f31c*/
  {
    while ( *v24 != 0x7FFF || v24[1] != 0x7FFF ) /*0x44f33e*/
    {
      v25 = v24; /*0x44f344*/
      v24 += 2; /*0x44f346*/
      LOWORD(v59) = v4 + *v25; /*0x44f358*/
      HIWORD(v59) = HIWORD(v51) + v25[1]; /*0x44f361*/
      *(_DWORD *)v48 = v59; /*0x44f36a*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f374*/
      {
        v26 = *v5; /*0x44f37d*/
        v27 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f391*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v26 + 428))(v5, v27, -1, -1, 0, 0) ) /*0x44f399*/
          goto LABEL_36; /*0x44f3a1*/
        LOWORD(v4) = v51; /*0x44f331*/
      }
    }
    goto LABEL_53; /*0x44f33e*/
  }
  FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)v23, 0); /*0x44f3b9*/
  v29 = this->Type; /*0x44f3be*/
  v30 = -1; /*0x44f3c4*/
  v31 = FoundationHeight; /*0x44f3c7*/
  v50 = -1; /*0x44f3c9*/
  if ( BuildingTypeClass::GetFoundationWidth(v29) >= -1 ) /*0x44f3d5*/
  {
    HIWORD(v60) = HIWORD(v51) + v31; /*0x44f3e1*/
    do /*0x44f3ef*/
    {
      v32 = v51 + v30; /*0x44f3ef*/
      LOWORD(v60) = v51 + v30; /*0x44f3f2*/
      *(_DWORD *)v48 = v60; /*0x44f3fb*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f404*/
      {
        v33 = *v5; /*0x44f40d*/
        v34 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f421*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v33 + 428))(v5, v34, -1, -1, 0, 1) ) /*0x44f431*/
          goto LABEL_12; /*0x44f431*/
        v30 = v50; /*0x44f437*/
      }
      LOWORD(v49) = v32; /*0x44f43f*/
      HIWORD(v49) = HIWORD(v51) - 1; /*0x44f449*/
      *(_DWORD *)v48 = v49; /*0x44f458*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f45c*/
      {
        v35 = *v5; /*0x44f465*/
        v36 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f479*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v35 + 428))(v5, v36, -1, -1, 0, 1) ) /*0x44f481*/
          goto LABEL_36; /*0x44f489*/
      }
      v37 = this->Type; /*0x44f48f*/
      v50 = ++v30; /*0x44f496*/
    }
    while ( v30 <= BuildingTypeClass::GetFoundationWidth(v37) ); /*0x44f3ef*/
  }
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(this->Type); /*0x44f4a7*/
  v39 = (int *)this->Type; /*0x44f4b2*/
  v40 = -1; /*0x44f4b8*/
  v41 = FoundationWidth; /*0x44f4bd*/
  v49 = -1; /*0x44f4bf*/
  if ( BuildingTypeClass::GetFoundationHeight(v39, 0) >= -1 ) /*0x44f4cb*/
  {
    LOWORD(v61) = v51 + v41; /*0x44f4d7*/
    while ( 1 ) /*0x44f4e5*/
    {
      v42 = HIWORD(v51) + v40; /*0x44f4e5*/
      HIWORD(v61) = HIWORD(v51) + v40; /*0x44f4e8*/
      *(_DWORD *)v48 = v61; /*0x44f4f1*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f4fa*/
      {
        v43 = *v5; /*0x44f503*/
        v44 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f517*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v43 + 428))(v5, v44, -1, -1, 0, 1) ) /*0x44f527*/
          goto LABEL_12; /*0x44f527*/
        v40 = v49; /*0x44f52d*/
      }
      HIWORD(v50) = v42; /*0x44f535*/
      LOWORD(v50) = v51 - 1; /*0x44f53f*/
      *(_DWORD *)v48 = v50; /*0x44f54e*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f552*/
      {
        v45 = *v5; /*0x44f55b*/
        v46 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f56f*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v45 + 428))(v5, v46, -1, -1, 0, 1) ) /*0x44f577*/
          break; /*0x44f577*/
      }
      v47 = (int *)this->Type; /*0x44f585*/
      v49 = ++v40; /*0x44f58e*/
      if ( v40 > BuildingTypeClass::GetFoundationHeight(v47, 0) ) /*0x44f599*/
        goto LABEL_53; /*0x44f599*/
    }
LABEL_36:
    *v53 = *(_DWORD *)v48; /*0x44f3a3*/
    return (int)v53; /*0x44f3b4*/
  }
LABEL_53:
  *v53 = g_TerrainTypeTable; /*0x44f59f*/
  return (int)v53; /*0x44f03f*/
}



// ==== 0x0044F5C0  BuildingClass::CanBeSoldCheck  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CanBeSoldCheck(BuildingClass *this)
{
  int result; // eax

  result = this->?; /*0x44f5c3*/
  if ( result <= 0 ) /*0x44f5cb*/
  {
    result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 161))(this); /*0x44f5d5*/
    if ( (_BYTE)result ) /*0x44f5dd*/
    {
      LOBYTE(result) = 1; /*0x44f5df*/
    }
    else
    {
      if ( !this->Type->ConstructionYard ) /*0x44f5e9*/
        return this->Type->?[0] != 0; /*0x44f5e9*/
      result = House::IsCurrentPlayer((House *)this->?); /*0x44f5f9*/
      if ( (_BYTE)result && (result = *(_DWORD *)&dword_A8B238) != 0 && dword_A8B320 && (result = (int)this->?) == 0 ) /*0x44f61c*/
        return this->Type->?[0] != 0; /*0x44f633*/
      else
        LOBYTE(result) = 0; /*0x44f61e*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x44f5cd*/
  }
  return result; /*0x44f5cf*/
}



// ==== 0x0044F640  BuildingClass::GetFactoryPosition  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetFactoryPosition(BuildingClass *this)
{
  BuildingTypeClass *Type; // eax
  int *location; // ecx
  int v3; // esi
  int v4; // edi
  int v5; // ecx
  int v6; // edx
  int v7; // esi
  int *v9; // ecx
  char v10[12]; // [esp+4h] [ebp-Ch] BYREF
  int *v11; // [esp+14h] [ebp+4h]

  Type = this->Type; /*0x44f640*/
  if ( Type->ExitCoord[0] == g_BuildingClassPool /*0x44f676*/
    && Type->ExitCoord[1] == dword_89C84C
    && Type->ExitCoord[2] == dword_89C850 )
  {
    v9 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v10); /*0x44f6bf*/
    *v11 = *v9; /*0x44f6c9*/
    v11[1] = v9[1]; /*0x44f6ce*/
    v11[2] = v9[2]; /*0x44f6d5*/
    return (int)v11; /*0x44f6c1*/
  }
  else
  {
    location = this->?; /*0x44f678*/
    v3 = location[1]; /*0x44f681*/
    v4 = location[2]; /*0x44f684*/
    v5 = *location + Type->ExitCoord[0]; /*0x44f68d*/
    v6 = v3 + Type->ExitCoord[1]; /*0x44f695*/
    v7 = Type->ExitCoord[2]; /*0x44f697*/
    *v11 = v5; /*0x44f6a5*/
    v11[1] = v6; /*0x44f6a7*/
    v11[2] = v4 + v7; /*0x44f6aa*/
    return (int)v11; /*0x44f69d*/
  }
}



// ==== 0x0044F6E0  ObjectClass::method_44F6E0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_44F6E0(ObjectClass *this, _DWORD *a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // ecx
  _BYTE v9[12]; // [esp+14h] [ebp-Ch] BYREF
  int v10; // [esp+28h] [ebp+8h]

  v3 = 6; /*0x44f6ed*/
  v4 = 5; /*0x44f6f2*/
  v5 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))this->AbstractClass + 18))(this, v9); /*0x44f6f7*/
  v6 = *v5 / 256; /*0x44f71b*/
  v7 = v5[1] / 256; /*0x44f71e*/
  if ( a3 ) /*0x44f72e*/
  {
    if ( a3 == 2 ) /*0x44f733*/
      v4 = 0; /*0x44f735*/
  }
  else
  {
    v3 = 0; /*0x44f739*/
  }
  if ( (__int16)v6 - *(_DWORD *)&stru_87F5F0.__pad_58[708] > *(_DWORD *)&stru_87F5F0.__pad_58[716] / 2 ) /*0x44f751*/
    v3 = -v3; /*0x44f753*/
  if ( (__int16)v7 - *(_DWORD *)&stru_87F5F0.__pad_58[712] > *(_DWORD *)&stru_87F5F0.__pad_58[720] / 2 ) /*0x44f76b*/
    v4 = -v4; /*0x44f76d*/
  LOWORD(v10) = v6 + v3; /*0x44f77f*/
  HIWORD(v10) = v7 + v4; /*0x44f784*/
  *a2 = v10; /*0x44f78f*/
  return a2; /*0x44f78d*/
}



// ==== 0x0044F820  Scenario::ReadTeams  this=Scenario  sig=csp ====
int __thiscall Scenario::ReadTeams(INIClass *this)
{
  INIClass *v1; // esi
  int result; // eax
  int v3; // ecx
  unsigned __int8 *StringByIndex; // eax
  char *v5; // eax
  int v6; // eax
  Object *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  char *v11; // eax
  int v12; // edx
  char *v13; // eax
  int v14; // eax
  char *v15; // eax
  char *v16; // ebp
  char *v17; // eax
  char *v18; // eax
  char *v19; // eax
  char *v20; // eax
  char *v21; // eax
  int *v22; // esi
  int v23; // edi
  char *v24; // eax
  char *v25; // eax
  bool v26; // bl
  char *v27; // eax
  int v28; // eax
  int v29; // esi
  TeamClass *v30; // eax
  int v31; // eax
  int v32; // edi
  int v33; // eax
  int v34; // edi
  int v35; // edx
  int v36; // edx
  BuildingLightClass *v37; // ecx
  int v38; // eax
  int v39; // edx
  Trigger *v40; // ecx
  int v41; // edi
  _BYTE **v42; // ebp
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  _DWORD *v46; // ebp
  int v47; // ebx
  int v48; // edi
  int v49; // eax
  int *v50; // eax
  int v51; // edx
  _DWORD *Value; // eax
  int v53; // esi
  unsigned int v54; // eax
  bool v55; // [esp+8h] [ebp-DCh]
  bool v56; // [esp+9h] [ebp-DBh]
  bool v57; // [esp+Ah] [ebp-DAh]
  bool v58; // [esp+Bh] [ebp-D9h]
  int v59; // [esp+Ch] [ebp-D8h]
  int v60; // [esp+Ch] [ebp-D8h]
  int v61; // [esp+10h] [ebp-D4h]
  int v62; // [esp+14h] [ebp-D0h]
  int IndexByName; // [esp+18h] [ebp-CCh]
  int v64; // [esp+18h] [ebp-CCh]
  int v65; // [esp+1Ch] [ebp-C8h]
  int v66; // [esp+20h] [ebp-C4h]
  int v67; // [esp+24h] [ebp-C0h]
  int v68; // [esp+28h] [ebp-BCh]
  int v69; // [esp+2Ch] [ebp-B8h]
  int v70; // [esp+30h] [ebp-B4h]
  int v71; // [esp+34h] [ebp-B0h]
  _DWORD v73[3]; // [esp+3Ch] [ebp-A8h] BYREF
  _DWORD v74[3]; // [esp+48h] [ebp-9Ch] BYREF
  _DWORD v75[3]; // [esp+54h] [ebp-90h] BYREF
  int v76; // [esp+60h] [ebp-84h] BYREF
  char String[128]; // [esp+64h] [ebp-80h] BYREF

  v1 = this; /*0x44f827*/
  INIClass::ResetSection(this); /*0x44f82d*/
  memset(v73, 255, sizeof(v73)); /*0x44f83b*/
  result = INIClass::GetKeyCount(v1->__pad_0, (unsigned __int8 *)aStructures); /*0x44f84a*/
  v3 = 0; /*0x44f84f*/
  v71 = result; /*0x44f853*/
  v68 = 0; /*0x44f857*/
  if ( result > 0 ) /*0x44f85b*/
  {
    while ( 1 ) /*0x44f874*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, (unsigned __int8 *)aStructures, v3); /*0x44f874*/
      INIClass::GetString(v1, (unsigned __int8 *)aStructures, StringByIndex, 0, String, 128); /*0x44f88f*/
      v5 = strtok(String, Str); /*0x44f89e*/
      v6 = HouseClass::FindByName(v5); /*0x44f8a8*/
      if ( v6 != -1 ) /*0x44f8b0*/
      {
        v7 = (Object *)*((_DWORD *)stru_A80220.? + v6); /*0x44f8bc*/
        v65 = (int)v7; /*0x44f8c1*/
        if ( v7 ) /*0x44f8c5*/
        {
          if ( !*(_DWORD *)&dword_A8B238 || v7 != dword_A83D4C ) /*0x44f8db*/
          {
            v8 = strtok(0, Str); /*0x44f8e8*/
            IndexByName = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)v8); /*0x44f8fa*/
            if ( IndexByName != -1 ) /*0x44f8fe*/
            {
              v9 = strtok(0, Str); /*0x44f90b*/
              v61 = atoi(v9); /*0x44f919*/
              if ( *(int *)&stru_A8EB00.?[408] < 4 ) /*0x44f92c*/
              {
                v13 = strtok(0, Str); /*0x44f95e*/
                v14 = atoi(v13); /*0x44f964*/
                LOWORD(v66) = v14 % 128; /*0x44f97f*/
                HIWORD(v66) = v14 / 128; /*0x44f989*/
                v12 = v66; /*0x44f98e*/
              }
              else
              {
                v10 = strtok(0, Str); /*0x44f92e*/
                LOWORD(v69) = atoi(v10); /*0x44f940*/
                v11 = strtok(0, Str); /*0x44f945*/
                HIWORD(v69) = atoi(v11); /*0x44f950*/
                v12 = v69; /*0x44f955*/
              }
              v59 = v12; /*0x44f999*/
              v15 = strtok(0, Str); /*0x44f99d*/
              v67 = atoi(v15); /*0x44f9af*/
              v16 = strtok(0, Str); /*0x44f9bf*/
              v58 = 0; /*0x44f9c1*/
              v17 = strtok(0, Str); /*0x44f9c6*/
              if ( v17 ) /*0x44f9d0*/
                v58 = atoi(v17) != 0; /*0x44f9dd*/
              v57 = 0; /*0x44f9e9*/
              v18 = strtok(0, Str); /*0x44f9ee*/
              if ( v18 ) /*0x44f9f8*/
                v57 = atoi(v18) != 0; /*0x44fa05*/
              v55 = 1; /*0x44fa11*/
              v19 = strtok(0, Str); /*0x44fa16*/
              if ( v19 ) /*0x44fa20*/
                v55 = atoi(v19) != 0; /*0x44fa2d*/
              v62 = 0; /*0x44fa39*/
              v20 = strtok(0, Str); /*0x44fa41*/
              if ( v20 ) /*0x44fa4b*/
                v62 = atoi(v20); /*0x44fa56*/
              v70 = 1; /*0x44fa61*/
              v21 = strtok(0, Str); /*0x44fa69*/
              if ( v21 ) /*0x44fa73*/
                v70 = atoi(v21); /*0x44fa7e*/
              v22 = v73; /*0x44fa82*/
              v23 = 3; /*0x44fa86*/
              do /*0x44faab*/
              {
                v24 = strtok(0, Str); /*0x44fa92*/
                if ( v24 ) /*0x44fa9c*/
                  *v22 = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)v24); /*0x44faa5*/
                ++v22; /*0x44faa7*/
                --v23; /*0x44faaa*/
              }
              while ( v23 ); /*0x44faab*/
              v56 = 0; /*0x44fab4*/
              v25 = strtok(0, Str); /*0x44fab9*/
              if ( v25 ) /*0x44fac3*/
                v56 = atoi(v25) != 0; /*0x44fad0*/
              v26 = 0; /*0x44fadc*/
              v27 = strtok(0, Str); /*0x44fade*/
              if ( v27 ) /*0x44fae8*/
                v26 = atoi(v27) != 0; /*0x44faf5*/
              v28 = __2_YAPAXI_Z(0x720u); /*0x44fafd*/
              if ( v28 ) /*0x44fb07*/
              {
                v29 = BuildingClass::Construct(v28, *((_DWORD *)dword_A83C6C + IndexByName), v65); /*0x44fb27*/
                if ( v29 ) /*0x44fb2b*/
                {
                  v30 = (TeamClass *)ObjectTypeClass::FindByName((ObjectTypeClass *)v16); /*0x44fb33*/
                  if ( v30 ) /*0x44fb3a*/
                  {
                    v31 = TeamClass::FindOrCreate(v30); /*0x44fb3e*/
                    if ( v31 ) /*0x44fb45*/
                      ObjectClass::SetReference((ObjectClass *)v29, v31); /*0x44fb4a*/
                  }
                  *(_BYTE *)(v29 + 1756) = v58; /*0x44fb5b*/
                  *(_BYTE *)(v29 + 1738) = v57; /*0x44fb61*/
                  *(_BYTE *)(v29 + 1739) = v56; /*0x44fb70*/
                  *(_BYTE *)(v29 + 1737) = v26; /*0x44fb78*/
                  if ( v61 >= 256 ) /*0x44fb7e*/
                    v61 = 256; /*0x44fb80*/
                  v32 = *(_DWORD *)(v29 + 1312); /*0x44fb88*/
                  LOWORD(v33) = Math::RoundToInt((double)v61 * 0.00390625 * (double)*(int *)(v32 + 160)); /*0x44fb9a*/
                  *(_DWORD *)(v29 + 108) = v33; /*0x44fb9f*/
                  v34 = *(_DWORD *)(v32 + 160); /*0x44fba2*/
                  if ( v33 > v34 - 3 ) /*0x44fbad*/
                    *(_DWORD *)(v29 + 108) = v34; /*0x44fbaf*/
                  v35 = *(_DWORD *)(v29 + 108); /*0x44fbbc*/
                  v74[2] = 0; /*0x44fbbf*/
                  *(_DWORD *)(v29 + 112) = v35; /*0x44fbcf*/
                  v36 = *(_DWORD *)v29; /*0x44fbd5*/
                  v64 = ((__int16)v59 << 8) + 128; /*0x44fbd7*/
                  v74[0] = v64; /*0x44fbdb*/
                  v60 = (SHIWORD(v59) << 8) + 128; /*0x44fbe5*/
                  v74[1] = v60; /*0x44fbe9*/
                  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *, int))(v36 + 216))(v29, v74, v67) ) /*0x44fbf9*/
                  {
                    v37 = *(BuildingLightClass **)(v29 + 1536); /*0x44fc07*/
                    if ( v37 ) /*0x44fc0f*/
                      BuildingLightClass::FindTarget(v37, (_DWORD *)v70); /*0x44fc16*/
                    if ( v55 ) /*0x44fc21*/
                    {
                      if ( !*(_BYTE *)(v29 + 1632) && !*(_DWORD *)(v29 + 1284) ) /*0x44fc35*/
                      {
                        v38 = *(_DWORD *)(v29 + 540); /*0x44fc43*/
                        *(_BYTE *)(v29 + 1632) = 1; /*0x44fc49*/
                        *(_BYTE *)(v29 + 128) = 1; /*0x44fc50*/
                        *(_BYTE *)(v38 + 22392) = 1; /*0x44fc57*/
                        *(_BYTE *)(*(_DWORD *)(v29 + 540) + 22393) = 1; /*0x44fc64*/
                        v39 = *(_DWORD *)(v29 + 540); /*0x44fc6b*/
                        *(_BYTE *)(v39 + 508) = 1; /*0x44fc71*/
                        v40 = *(Trigger **)(v29 + 1556); /*0x44fc78*/
                        *(_BYTE *)(v29 + 1770) = 1; /*0x44fc80*/
                        if ( v40 ) /*0x44fc87*/
                          Trigger::EnableOnce(v40, 0); /*0x44fc8b*/
                        if ( *(_BYTE *)(*(_DWORD *)(v29 + 1312) + 5822) ) /*0x44fc96*/
                          BuildingClass::RepairPlacement((BuildingClass *)v29, 0); /*0x44fca4*/
                        v41 = 0; /*0x44fca9*/
                        v42 = (_BYTE **)(v29 + 1372); /*0x44fcab*/
                        do /*0x44fcda*/
                        {
                          if ( *(_BYTE *)(v41 + *(_DWORD *)(v29 + 1312) + 3980) && *v42 ) /*0x44fcc2*/
                            VtableStub::Method_425270(*v42); /*0x44fcc9*/
                          v41 += 68; /*0x44fcce*/
                          ++v42; /*0x44fcd1*/
                        }
                        while ( v41 < 1428 ); /*0x44fcda*/
                        v43 = *(_DWORD *)(v29 + 1312); /*0x44fcdc*/
                        v44 = *(_DWORD *)(v43 + 3768); /*0x44fce2*/
                        if ( v44 ) /*0x44fcea*/
                        {
                          LOBYTE(v39) = *(_BYTE *)(v43 + 3278); /*0x44fcec*/
                          HouseClass::UpdateProduction(*(_DWORD *)(v29 + 540), v44, v39, 0); /*0x44fcfc*/
                        }
                        if ( (unsigned __int8)House::IsHumanPlayer(*(House **)(v29 + 540)) ) /*0x44fd07*/
                          VoxClass::FindAndPlay((VoxClass *)&stru_818E00.Next, -1); /*0x44fd1a*/
                      }
                    }
                    else
                    {
                      BuildingClass::PowerOff((BuildingClass *)v29); /*0x44fd23*/
                    }
                    v45 = *(_DWORD *)(v29 + 1312); /*0x44fd28*/
                    *(_BYTE *)(v29 + 1053) = 0; /*0x44fd2e*/
                    if ( *(_BYTE *)(v45 + 5458) && !*(_BYTE *)(v29 + 1740) ) /*0x44fd3f*/
                      BuildingClass::Deactivate((BuildingClass *)v29); /*0x44fd4b*/
                    if ( v62 > 0 ) /*0x44fd56*/
                    {
                      v46 = v73; /*0x44fd5a*/
                      v47 = v62; /*0x44fd5e*/
                      do /*0x44fdc3*/
                      {
                        if ( *v46 != -1 ) /*0x44fd66*/
                        {
                          v48 = *((_DWORD *)dword_A83C6C + *v46); /*0x44fd73*/
                          v49 = __2_YAPAXI_Z(0x720u); /*0x44fd76*/
                          if ( v49 ) /*0x44fd80*/
                            v50 = (int *)BuildingClass::Construct(v49, v48, v65); /*0x44fd8a*/
                          else
                            v50 = 0; /*0x44fd91*/
                          v75[0] = v64; /*0x44fd9b*/
                          v75[1] = v60; /*0x44fda8*/
                          v51 = *v50; /*0x44fdac*/
                          v75[2] = 0; /*0x44fdb1*/
                          (*(void (__thiscall **)(int *, _DWORD *, int))(v51 + 216))(v50, v75, v67); /*0x44fdb9*/
                        }
                        ++v46; /*0x44fdbf*/
                        --v47; /*0x44fdc2*/
                      }
                      while ( v47 ); /*0x44fdc3*/
                    }
                    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v29 + 1020))(v29) /*0x44fde1*/
                      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v29 + 1020))(v29)
                      && *(_DWORD *)(v29 + 1408) )
                    {
                      Value = ProgressTimer::GetValue((ProgressTimer *)(v29 + 904), &v76); /*0x44fdf6*/
                      v53 = *(_DWORD *)(v29 + 1408); /*0x44fdfd*/
                      v54 = ((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F; /*0x44fe09*/
                      if ( v53 ) /*0x44fe0e*/
                      {
                        *(_DWORD *)(v53 + 172) = dword_7F4890[v54]; /*0x44fe17*/
                        *(_DWORD *)(v53 + 196) = 0; /*0x44fe1d*/
                      }
                    }
                  }
                  else
                  {
                    (*(void (__thiscall **)(int, int))(*(_DWORD *)v29 + 32))(v29, 1); /*0x44fe2f*/
                  }
                }
              }
            }
          }
        }
      }
      result = v71; /*0x44fe36*/
      v3 = ++v68; /*0x44fe3a*/
      if ( v68 >= v71 ) /*0x44fe41*/
        break; /*0x44fe41*/
      v1 = this; /*0x44f866*/
    }
  }
  return result; /*0x44fe4a*/
}



// ==== 0x0044FE60  ObjectClass::method_44FE60  this=INIClass  sig=csp ====
int __thiscall sub_44FE60(char *this)
{
  int result; // eax
  int i; // esi
  int v4; // ecx

  INIClass::ClearSection((int)this, (int)aStructures, 0); /*0x44fe6c*/
  result = dword_A8EB50; /*0x44fe71*/
  for ( i = 0; i < dword_A8EB50; ++i ) /*0x44fe7a*/
  {
    v4 = *((_DWORD *)dword_A8EB44 + i); /*0x44fe82*/
    if ( !*(_BYTE *)(v4 + 129) && !*(_BYTE *)(*(_DWORD *)(v4 + 1312) + 5823) ) /*0x44fe95*/
      BuildingClass::ReadConstructionData(v4, this); /*0x44fea0*/
    result = dword_A8EB50; /*0x44fea5*/
  }
  return result; /*0x44feaf*/
}



// ==== 0x0044FEC0  BuildingClass::ReadConstructionData  this=BuildingClass  sig=csp ====
char __userpurge BuildingClass::ReadConstructionData@<al>(BuildingClass *this@<ecx>, double a2@<st0>, char *a3)
{
  int v4; // eax
  _DWORD *Value; // eax
  int BarrelVoxel; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int *Upgrades; // ebx
  int v11; // ebp
  char *v12; // eax
  int v14; // [esp-24h] [ebp-D0h]
  _BYTE v15[8]; // [esp+14h] [ebp-98h] BYREF
  int v16; // [esp+1Ch] [ebp-90h] BYREF
  char Buffer[12]; // [esp+20h] [ebp-8Ch] BYREF
  char Source[128]; // [esp+2Ch] [ebp-80h] BYREF

  v4 = (*((int (__userpurge **)@<eax>(void **, double@<st0>))this->? + 4))(&this->?, a2); /*0x44fed3*/
  sprintf(Buffer, "%d", v4); /*0x44fee1*/
  Value = ProgressTimer::GetValue((ProgressTimer *)this->?, &v16); /*0x44ff28*/
  BarrelVoxel = (int)this->Type->?; /*0x44ff79*/
  v7 = (int)&this->?->plainName[4]; /*0x44ff7c*/
  v8 = (*((int (__thiscall **)(BuildingClass *, _BYTE *, _DWORD))this->TechnoClass + 110))( /*0x44ff82*/
         this,
         v15,
         (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1));
  v14 = *(__int16 *)(*((int (__thiscall **)(BuildingClass *, int *, _DWORD))this->TechnoClass + 110))( /*0x44ff9f*/
                      this,
                      &v16,
                      *(__int16 *)(v8 + 2));
  BuildingClass::GetHealthRatio(this); /*0x44ffa2*/
  LOWORD(v9) = Math::RoundToInt(a2 * 256.0 + 0.5); /*0x44ffb3*/
  sprintf(Source, (const char *const)stru_818E00.RandomRate, v7, BarrelVoxel, v9, v14); /*0x44ffc5*/
  Upgrades = this->Upgrades; /*0x44ffcd*/
  v11 = 3; /*0x44ffd3*/
  do /*0x45000d*/
  {
    if ( *Upgrades ) /*0x44ffd8*/
      v12 = (char *)(*Upgrades + 36); /*0x44ffde*/
    else
      v12 = g_INI_Key_None; /*0x44ffe3*/
    sprintf(&Source[strlen(Source)], (const char *const)&stru_818E00.RandomLoopDelay[1], v12); /*0x450001*/
    ++Upgrades; /*0x450009*/
    --v11; /*0x45000c*/
  }
  while ( v11 ); /*0x45000d*/
  sprintf(&Source[strlen(Source)], (const char *const)stru_818E00.RandomLoopDelay, this->__pad_6B8[19] != 0); /*0x450035*/
  sprintf(&Source[strlen(Source)], (const char *const)stru_818E00.RandomLoopDelay, this->__pad_6B8[17] != 0); /*0x450060*/
  return INIClass::SetString(a3, (unsigned __int8 *)aStructures, Buffer, Source); /*0x450085*/
}



// ==== 0x00440580  BuildingClass::Unlimbo_UnitDeliveryFix  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Unlimbo_UnitDeliveryFix(BuildingClass *this)
{
  double v1; // st7
  TechnoClass *v2; // ebp
  int ptr_0; // edi
  CellClass *v5; // eax
  int v6; // eax
  int v7; // ebx
  int Type; // ecx
  CellClass *v9; // eax
  int wallOwnerIndex; // ecx
  BuildingClass *v11; // edx
  BuildingClass *owner; // ecx
  int v13; // edx
  bool v14; // zf
  int v15; // ecx
  BuildingClass *v16; // edx
  _WORD *i; // ebx
  __int16 v18; // dx
  void *v19; // edi
  BuildingClass *v20; // edx
  int v21; // eax
  BuildingClass *v22; // ecx
  int v23; // eax
  _DWORD *v24; // eax
  int v25; // ebp
  _BYTE *v26; // eax
  int v27; // edi
  CellClass *v28; // eax
  int result; // eax
  int v30; // edi
  int v31; // eax
  BuildingClass *v32; // edi
  int v33; // ebx
  int v34; // eax
  int v35; // ebx
  char *v36; // ebp
  int v37; // edx
  __int16 v38; // cx
  Cell *v39; // eax
  _DWORD *v40; // eax
  _DWORD *v41; // edi
  int j; // edi
  int v43; // eax
  int FoundationWidth; // ebx
  int v45; // ecx
  int v46; // kr18_4
  int v47; // eax
  int v48; // ebx
  int v49; // edi
  __int16 v50; // bp
  _BYTE *v51; // eax
  char v52; // al
  LightSourceClass *v53; // edi
  _DWORD *v54; // eax
  int *v55; // eax
  _DWORD *v56; // eax
  int v57; // eax
  int *v58; // eax
  int v59; // ebx
  int *v60; // ebp
  int v61; // edx
  int v62; // edi
  int v63; // edx
  int v64; // eax
  CellClass *v65; // eax
  int v66; // eax
  RulesClass *v67; // eax
  int smudgeTypeIndex; // edi
  BuildingClass *v69; // eax
  BuildingClass *v70; // eax
  BuildingClass *v71; // eax
  BuildingClass *v72; // eax
  int v73; // ecx
  int *v74; // edi
  BuildingClass *v75; // eax
  BuildingClass *v76; // eax
  int v77; // ecx
  int v78; // edi
  BuildingClass *v79; // eax
  BuildingClass *v80; // eax
  int *v81; // eax
  int v82; // edx
  int v83; // eax
  int IvanIconFlickerRate; // edx
  _DWORD *IvanDamage; // ecx
  _DWORD *v86; // edi
  int v87; // ecx
  int v88; // eax
  int v89; // eax
  int v90; // edx
  _DWORD *v91; // edi
  int v92; // ecx
  int v93; // eax
  int v94; // eax
  int v95; // edx
  _DWORD *v96; // edi
  int v97; // ecx
  int v98; // eax
  int v99; // eax
  int v100; // edx
  int v101; // eax
  _DWORD *v102; // edi
  int v103; // ecx
  int v104; // eax
  int v105; // eax
  int v106; // edx
  _DWORD *v107; // edi
  int v108; // ecx
  int v109; // eax
  int v110; // eax
  int v111; // edx
  int v112; // eax
  _DWORD *v113; // edi
  int v114; // ecx
  int v115; // eax
  int v116; // eax
  int v117; // edx
  _DWORD *v118; // edi
  int v119; // ecx
  int v120; // eax
  int v121; // eax
  int v122; // edx
  _DWORD *v123; // edi
  int v124; // ecx
  int v125; // eax
  int v126; // eax
  int v127; // edx
  _DWORD *v128; // edi
  int v129; // ecx
  int v130; // eax
  int v131; // eax
  int v132; // edx
  _DWORD *v133; // edi
  int v134; // ecx
  int v135; // eax
  int v136; // eax
  int v137; // edx
  _DWORD *v138; // edi
  int v139; // ecx
  int v140; // eax
  int v141; // eax
  int v142; // edx
  int v143; // ecx
  int v144; // [esp-8h] [ebp-58h]
  int v145; // [esp-4h] [ebp-54h]
  int v146; // [esp+0h] [ebp-50h]
  int v147; // [esp+4h] [ebp-4Ch]
  int v148; // [esp+8h] [ebp-48h]
  int v149; // [esp+Ch] [ebp-44h]
  int v150; // [esp+Ch] [ebp-44h]
  __int16 v151; // [esp+10h] [ebp-40h]
  bool v152; // [esp+1Fh] [ebp-31h]
  int v153; // [esp+20h] [ebp-30h] BYREF
  int v154; // [esp+24h] [ebp-2Ch] BYREF
  __int16 v155[2]; // [esp+28h] [ebp-28h] BYREF
  _DWORD v156[3]; // [esp+2Ch] [ebp-24h] BYREF
  int v157; // [esp+38h] [ebp-18h] BYREF
  int v158; // [esp+3Ch] [ebp-14h]
  int v159; // [esp+40h] [ebp-10h]
  int v160[3]; // [esp+44h] [ebp-Ch] BYREF
  TechnoClass *v161; // [esp+54h] [ebp+4h] BYREF
  int *v162; // [esp+58h] [ebp+8h] BYREF

  v2 = v161; /*0x440585*/
  ptr_0 = this->ptr_0; /*0x440595*/
  v5 = Coord::To_Cell((Coord *)&dword_87F7E8, v161); /*0x44059d*/
  v6 = (*(int (__thiscall **)(BuildingClass *, CellClass *, int, int, _DWORD, int))(ptr_0 + 428))( /*0x4405a5*/
         this,
         v5,
         -1,
         -1,
         0,
         1);
  LOBYTE(v7) = v6 == 0; /*0x4405ad*/
  v152 = v6 == 0; /*0x4405b2*/
  if ( !v6 ) /*0x4405b6*/
  {
    Type = this->Type; /*0x4405c1*/
    if ( Type == dword_8871E0->NukeDown ) /*0x4405cd*/
    {
      v9 = Coord::To_Cell((Coord *)&dword_87F7E8, v2); /*0x4405d5*/
      wallOwnerIndex = v9->wallOwnerIndex; /*0x4405da*/
      v11 = 0; /*0x4405dd*/
      if ( wallOwnerIndex >= 0 ) /*0x4405e1*/
        v11 = (BuildingClass *)*(&dword_A8022C->ptr_0 + wallOwnerIndex); /*0x4405e9*/
      owner = (BuildingClass *)this->owner; /*0x4405ec*/
      if ( v11 == owner ) /*0x4405f4*/
      {
        v13 = *(_DWORD *)&v9->__pad_28[28]; /*0x4405fa*/
        if ( v13 == 2 ) /*0x440600*/
        {
LABEL_14:
          BuildingClass::Capture(owner, (__int16 *)&v9->smudgeTypeIndex, 1); /*0x440656*/
          goto LABEL_33; /*0x440661*/
        }
        v14 = v13 == 0; /*0x440602*/
LABEL_13:
        if ( !v14 ) /*0x440650*/
          goto LABEL_33; /*0x440650*/
        goto LABEL_14; /*0x440650*/
      }
    }
    else if ( *(_DWORD *)(Type + 3668) ) /*0x440606*/
    {
      v9 = Coord::To_Cell((Coord *)&dword_87F7E8, v2); /*0x440616*/
      v15 = v9->wallOwnerIndex; /*0x44061b*/
      v16 = 0; /*0x44061e*/
      if ( v15 >= 0 ) /*0x440622*/
        v16 = (BuildingClass *)*(&dword_A8022C->ptr_0 + v15); /*0x44062a*/
      owner = (BuildingClass *)this->owner; /*0x44062d*/
      if ( v16 == owner ) /*0x440635*/
      {
        v14 = *(_DWORD *)&v9->__pad_28[28] == *(_DWORD *)(*(_DWORD *)(this->Type + 3668) + 660); /*0x44064a*/
        goto LABEL_13; /*0x44064a*/
      }
    }
    else if ( *(_BYTE *)(Type + 5815) ) /*0x440666*/
    {
      LOWORD(v153) = v2->ptr_0 / 256; /*0x440685*/
      HIWORD(v153) = v2->ptr_4 / 256; /*0x440699*/
      for ( i = (_WORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)Type + 144))(Type, 1); /*0x4406a6*/
            *i != 0x7FFF || i[1] != 0x7FFF;
            i += 2 )
      {
        v18 = HIWORD(v153) + i[1]; /*0x4406c3*/
        LOWORD(v154) = v153 + *i; /*0x4406ce*/
        HIWORD(v154) = v18; /*0x4406d3*/
        *(_DWORD *)v155 = v154; /*0x4406e2*/
        v19 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v155); /*0x4406eb*/
        v20 = 0; /*0x4406ed*/
        v21 = *((_DWORD *)v19 + 20); /*0x4406ef*/
        if ( v21 >= 0 ) /*0x4406f4*/
          v20 = (BuildingClass *)*(&dword_A8022C->ptr_0 + v21); /*0x4406fc*/
        v22 = (BuildingClass *)this->owner; /*0x4406ff*/
        if ( v20 == v22 ) /*0x440707*/
        {
          v23 = *((_DWORD *)v19 + 17); /*0x440709*/
          if ( v23 == 2 || !v23 || v23 == 26 ) /*0x440718*/
            BuildingClass::Capture(v22, (__int16 *)v19 + 18, 1); /*0x440720*/
        }
        v24 = Cell::IsBridge((Cell *)v19); /*0x440727*/
        if ( v24 && *(_BYTE *)(v24[328] + 5823) ) /*0x440736*/
        {
          v25 = (*(int (__thiscall **)(_DWORD *))(*v24 + 56))(v24); /*0x440747*/
          if ( v25 == (*(int (__thiscall **)(BuildingClass *))(this->ptr_0 + 56))(this) ) /*0x440752*/
          {
            *(_DWORD *)v155 = *((_DWORD *)v19 + 9); /*0x440757*/
            BuildingClass::TraverseBridgeSegments((BuildingClass *)v155); /*0x44075f*/
          }
          v2 = v161; /*0x440764*/
        }
      }
      LOBYTE(v7) = v152; /*0x440770*/
    }
  }
LABEL_33:
  v26 = (_BYTE *)this->Type; /*0x440774*/
  if ( v26[5489] ) /*0x44077a*/
  {
    v27 = this->ptr_0; /*0x440788*/
    v28 = Coord::To_Cell((Coord *)&dword_87F7E8, v2); /*0x440798*/
    result = (*(int (__thiscall **)(BuildingClass *, CellClass *, int, int, _DWORD, int))(v27 + 428))( /*0x4407a0*/
               this,
               v28,
               -1,
               -1,
               0,
               1);
    if ( !result ) /*0x4407a8*/
    {
      result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this->Type + 3668) + 140))( /*0x4407c3*/
                 *(_DWORD *)(this->Type + 3668),
                 this->owner);
      if ( result ) /*0x4407cb*/
      {
        result = (*(int (__thiscall **)(int, TechnoClass *, _DWORD))(*(_DWORD *)result + 216))(result, v2, 0); /*0x4407d8*/
        if ( (_BYTE)result ) /*0x4407e0*/
        {
          v30 = this->owner; /*0x4407e6*/
          Coord::To_Cell((Coord *)&dword_87F7E8, v2)->wallOwnerIndex = *(_DWORD *)(v30 + 48); /*0x4407fc*/
          (*(void (__thiscall **)(BuildingClass *, int))(this->ptr_0 + 628))(this, 3); /*0x440803*/
          MapClass::RevealArea1( /*0x44082d*/
            (MapClass *)&dword_87F7E8,
            &v2->ptr_0,
            *(_DWORD *)(this->Type + 1512),
            (void *)this->owner,
            0,
            0,
            0,
            1,
            0);
          MapClass::RevealArea1( /*0x440856*/
            (MapClass *)&dword_87F7E8,
            &v2->ptr_0,
            *(_DWORD *)(this->Type + 1512),
            (void *)this->owner,
            0,
            0,
            0,
            1,
            1);
          result = (*(int (__thiscall **)(BuildingClass *))(this->ptr_0 + 248))(this); /*0x44085f*/
          LOBYTE(result) = 1; /*0x440865*/
          return result; /*0x44086e*/
        }
      }
    }
    goto LABEL_46; /*0x4407e0*/
  }
  if ( v26[3720] ) /*0x440871*/
  {
    v31 = v2->ptr_0; /*0x44087f*/
    v157 = 0; /*0x44088b*/
    v158 = 0; /*0x440891*/
    LOWORD(v161) = v31 / 256; /*0x440898*/
    HIWORD(v161) = v2->ptr_4 / 256; /*0x4408b0*/
    result = BuildingClass::updateSellBack((BuildingClass *)&dword_87F7E8, (__int16 *)&v161, &v157); /*0x4408c8*/
    v32 = (BuildingClass *)result; /*0x4408cd*/
    if ( !result ) /*0x4408d1*/
      goto LABEL_46; /*0x4408d1*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 44))(result); /*0x4408d7*/
    if ( result != 6 ) /*0x4408dd*/
      goto LABEL_46; /*0x4408dd*/
    result = this->owner; /*0x4408df*/
    v33 = this->Type; /*0x4408eb*/
    if ( result != v32->owner ) /*0x4408f3*/
      goto LABEL_46; /*0x4408f3*/
    result = _strcmpi((char *)(v33 + 3720), (char *)(v32->Type + 36)); /*0x440906*/
    if ( result ) /*0x440910*/
      goto LABEL_46; /*0x440910*/
    result = *(_DWORD *)(v33 + 5884); /*0x440912*/
    if ( result == -1 ) /*0x44091b*/
    {
      result = v32->Type; /*0x440932*/
      if ( v32->UpgradeLevel[0] < *(_DWORD *)(result + 5344) ) /*0x440945*/
      {
LABEL_49:
        *(_BYTE *)(this->owner + 22393) = 1; /*0x440951*/
        *(_BYTE *)(this->owner + 22392) = 1; /*0x440964*/
        v34 = this->Type; /*0x44096b*/
        v35 = *(_DWORD *)(v34 + 5884); /*0x440971*/
        if ( v35 == -1 ) /*0x44097a*/
          v35 = 1; /*0x44097c*/
        v36 = (char *)(v32->Type + 68 * v32->UpgradeLevel[0] + 3916); /*0x44099b*/
        if ( _strcmpi(v36, (char *)(v34 + 504)) ) /*0x4409a3*/
          strncpy(v36, (const char *)(this->Type + 504), 0x10u); /*0x4409bf*/
        for ( ; v35; --v35 ) /*0x4409c9*/
          UpdateBuildingActiveAnim(v32, v37); /*0x4409cd*/
        *(_DWORD *)&v32->RequiresDamageFires[4 * v32->UpgradeLevel[0]] = this->Type; /*0x4409e2*/
        SuperWeapon::UpdateSuperWeaponsUnavailableHouseClass((SuperWeapon *)this->owner); /*0x4409ef*/
        *(_BYTE *)(this->owner + 508) = 1; /*0x4409fa*/
        if ( *(_BYTE *)(this->Type + 5987) ) /*0x440a07*/
          HouseClass::AcquiredThreatNode((HouseClass *)this->owner); /*0x440a17*/
        result = (*(int (__thiscall **)(BuildingClass *))(this->ptr_0 + 248))(this); /*0x440a20*/
        LOBYTE(result) = 1; /*0x440a26*/
        return result; /*0x440a2f*/
      }
    }
    else if ( result <= 0 || result > 3 ) /*0x440924*/
    {
      goto LABEL_46; /*0x440924*/
    }
    if ( v32->UpgradeLevel[0] ) /*0x440947*/
    {
LABEL_46:
      LOBYTE(result) = 0; /*0x440926*/
      return result; /*0x44092f*/
    }
    goto LABEL_49; /*0x44094f*/
  }
  if ( v26[5823] ) /*0x440a32*/
  {
    LOBYTE(v38) = 0; /*0x440a3c*/
    HIBYTE(v38) = (_BYTE)v162; /*0x440a3e*/
    v155[0] = v38; /*0x440a42*/
    if ( (((unsigned __int8)(*(_DWORD *)v155 >> 12) + 1) & 6) == 4 ) /*0x440a55*/
      this->LaserFenceFrame = 8; /*0x440a57*/
    else
      this->LaserFenceFrame = 12; /*0x440a63*/
  }
  if ( (_BYTE)v7 ) /*0x440a6f*/
  {
    if ( v26[5822] ) /*0x440a75*/
    {
      this->LaserFenceFrame = 0; /*0x440a83*/
      LOWORD(v154) = v2->ptr_0 / 256; /*0x440aa1*/
      HIWORD(v154) = v2->ptr_4 / 256; /*0x440aba*/
      *(_DWORD *)v155 = v154; /*0x440ac3*/
      v39 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v155); /*0x440ac7*/
      v40 = Cell::IsBridge(v39); /*0x440ace*/
      v41 = v40; /*0x440ad3*/
      if ( v40 ) /*0x440ad7*/
      {
        if ( *(_BYTE *)(v40[328] + 5823) ) /*0x440adf*/
        {
          v7 = (*(int (__thiscall **)(_DWORD *))(*v40 + 56))(v40); /*0x440af4*/
          if ( (*(int (__thiscall **)(BuildingClass *))(this->ptr_0 + 56))(this) == v7 ) /*0x440afb*/
            (*(void (__thiscall **)(_DWORD *))(*v41 + 248))(v41); /*0x440b01*/
        }
      }
    }
  }
  if ( !TechnoClass::FinishDeploy(v2, (unsigned __int8)v7, v162, v149, v151) ) /*0x440b16*/
    goto LABEL_46; /*0x440b16*/
  if ( *(_BYTE *)(this->Type + 5831) ) /*0x440b22*/
  {
    result = this->owner; /*0x440b2c*/
    *(_BYTE *)(result + 22264) = 1; /*0x440b32*/
  }
  if ( this->isAliveFlag[0] ) /*0x440b39*/
  {
    if ( *(_DWORD *)&dword_A8B238 /*0x440b70*/
      && !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner)
      && !*(_BYTE *)(*(_DWORD *)(this->owner + 52) + 422) )
    {
      this->__pad_6B8[19] = 1; /*0x440b7a*/
    }
    if ( (dword_A8B230->ptr_0 & 0x1000) != 0 ) /*0x440b8b*/
    {
      v162 = *(int **)(*(int (__thiscall **)(BuildingClass *, int *))(this->ptr_0 + 440))(this, &v154); /*0x440ba0*/
      for ( j = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this->Type + 144))(this->Type, 0); /*0x440bb2*/
            *(_WORD *)j != 0x7FFF || *(_WORD *)(j + 2) != 0x7FFF;
            j += 4 )
      {
        *(_DWORD *)v155 = *CellStruct::Add((CellStruct *)j, &v153, &v162); /*0x440be5*/
        if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v155) + 80) & 0x400000) == 0 ) /*0x440bf4*/
          goto LABEL_84; /*0x440bf4*/
      }
      BuildingClass::CreateFoggedObjects(this, 0, 0, 0); /*0x440c03*/
    }
LABEL_84:
    v43 = this->Type; /*0x440c08*/
    if ( (!*(_DWORD *)(v43 + 1032) || !*(_BYTE *)(v43 + 1516)) /*0x440c26*/
      && !(*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->ptr_0 + 128))(this) )
    {
      MarkBuildingFoundationCells(this, 0); /*0x440c34*/
    }
    FoundationWidth = BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)this->Type); /*0x440c4c*/
    v45 = BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) + 2; /*0x440c5f*/
    v46 = v2->ptr_0; /*0x440c62*/
    v153 = v45; /*0x440c64*/
    LOWORD(v156[0]) = v46 / 256; /*0x440c6b*/
    HIWORD(v156[0]) = v2->ptr_4 / 256; /*0x440c7f*/
    v47 = 0; /*0x440c84*/
    v154 = 0; /*0x440c88*/
    if ( v45 > 0 ) /*0x440c8c*/
    {
      v48 = FoundationWidth + 2; /*0x440c8e*/
      do /*0x440cff*/
      {
        v49 = 0; /*0x440c91*/
        if ( v48 > 0 ) /*0x440c95*/
        {
          LOWORD(v157) = LOWORD(v156[0]) - 1; /*0x440ca1*/
          HIWORD(v157) = HIWORD(v156[0]) - 1; /*0x440ca6*/
          v50 = LOWORD(v156[0]) - 1; /*0x440caf*/
          HIWORD(v162) = v47 + HIWORD(v156[0]) - 1; /*0x440cb5*/
          do /*0x440cea*/
          {
            LOWORD(v162) = v49 + v50; /*0x440cc1*/
            *(_DWORD *)v155 = v162; /*0x440cd0*/
            v51 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v155); /*0x440cd4*/
            ++v49; /*0x440ce1*/
            ++v51[290]; /*0x440ce4*/
          }
          while ( v49 < v48 ); /*0x440cea*/
          v2 = v161; /*0x440cec*/
          v45 = v153; /*0x440cf0*/
          v47 = v154; /*0x440cf4*/
        }
        v154 = ++v47; /*0x440cfb*/
      }
      while ( v47 < v45 ); /*0x440cff*/
    }
    BuildingClass::CalcExitCoords((BuildingClass *)this->owner); /*0x440d07*/
    BuildingClass::IncrementOccupantTypeCounter((BuildingClass *)this->owner, this); /*0x440d13*/
    *(_BYTE *)(this->owner + 508) = 1; /*0x440d1e*/
    v52 = this->isDiscoveredByCurrentPlayer[0]; /*0x440d25*/
    this->BuildingClass_field_544 = 0; /*0x440d2d*/
    if ( !v52 && (Coord::To_Cell((Coord *)&dword_87F7E8, v2)->copyFlags & 0x10) != 0 || *(_DWORD *)&dword_A8B238 ) /*0x440d54*/
    {
      (*(void (__thiscall **)(BuildingClass *, Object *))(this->ptr_0 + 408))(this, dword_A83D4C); /*0x440d61*/
    }
    else if ( *(_DWORD *)(this->Type + 3636) ) /*0x440d72*/
    {
      if ( !this->LightSource ) /*0x440d80*/
      {
        v53 = (LightSourceClass *)__2_YAPAXI_Z(0x4Cu); /*0x440d91*/
        if ( v53 ) /*0x440d98*/
        {
          v54 = (_DWORD *)this->Type; /*0x440d9a*/
          v148 = v54[912]; /*0x440dac*/
          v147 = v54[911]; /*0x440db3*/
          v146 = v54[910]; /*0x440dc0*/
          v145 = v54[909]; /*0x440dc1*/
          v144 = v54[908]; /*0x440dc4*/
          v55 = (int *)(*(int (__thiscall **)(BuildingClass *, int *))(this->ptr_0 + 72))(this, v160); /*0x440dcc*/
          v56 = LightSourceClass::Construct(v53, *v55, v55[1], v55[2], v144, v145, v146, v147, v148); /*0x440de6*/
        }
        else
        {
          v56 = 0; /*0x440ded*/
        }
        this->LightSource = (int)v56; /*0x440def*/
      }
      Trigger::EnableOnce((Trigger *)this->LightSource, 0); /*0x440dfd*/
    }
    if ( *(_BYTE *)(this->Type + 5822) && !dword_A8E7AC && this->isAliveFlag[0] && !this->inLimbo[0] ) /*0x440e25*/
    {
      BuildingClass::DemolishBridge(this); /*0x440e33*/
      BuildingClass::DemolishBridge(this); /*0x440e3c*/
      BuildingClass::DemolishBridge(this); /*0x440e45*/
      BuildingClass::DemolishBridge(this); /*0x440e4e*/
      BuildingClass::RepairPlacement(this, 1); /*0x440e57*/
    }
    if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner) ) /*0x440e62*/
      (*(void (__thiscall **)(BuildingClass *, int))(this->ptr_0 + 408))(this, this->owner); /*0x440e76*/
    if ( this->isOwnedByCurrentPlayer[0] ) /*0x440e7c*/
    {
      byte_880CF4 = 1; /*0x440e8d*/
      MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 0); /*0x440e94*/
    }
    v57 = this->Type; /*0x440e99*/
    if ( *(_DWORD *)(v57 + 1892) && !this->ambientParticles ) /*0x440ead*/
    {
      v58 = (int *)(v57 + 1896); /*0x440ebb*/
      v59 = *v58; /*0x440ec5*/
      v158 = v58[1]; /*0x440eca*/
      v159 = v58[2]; /*0x440ed1*/
      v60 = (int *)__2_YAPAXI_Z(0x100u); /*0x440eda*/
      if ( v60 ) /*0x440ee1*/
      {
        v61 = this->location[1]; /*0x440efc*/
        v160[0] = v59 + this->location[0]; /*0x440eff*/
        v62 = this->location[2]; /*0x440f07*/
        v156[0] = this->location[0]; /*0x440f0e*/
        v160[1] = v158 + v61; /*0x440f12*/
        v63 = this->location[1]; /*0x440f16*/
        v64 = this->location[2]; /*0x440f19*/
        v160[2] = v159 + v62; /*0x440f28*/
        v156[1] = v63; /*0x440f2c*/
        v156[2] = v64; /*0x440f30*/
        v65 = Coord::To_Cell((Coord *)&dword_87F7E8, v156); /*0x440f34*/
        v66 = ParticleSystemClass::Constructor( /*0x440f4e*/
                v60,
                *(_DWORD *)(this->Type + 1892),
                v160,
                (int)v65,
                0,
                &g_BuildingClassPool,
                0);
      }
      else
      {
        v66 = 0; /*0x440f55*/
      }
      v2 = v161; /*0x440f57*/
      this->ambientParticles = v66; /*0x440f5b*/
    }
    v67 = dword_8871E0; /*0x440f61*/
    if ( this->Type == dword_8871E0->NukeDown ) /*0x440f72*/
    {
      smudgeTypeIndex = Coord::To_Cell((Coord *)&dword_87F7E8, v161)->smudgeTypeIndex; /*0x440f87*/
      v157 = smudgeTypeIndex; /*0x440f8e*/
      HIWORD(v162) = HIWORD(smudgeTypeIndex); /*0x440f99*/
      LOWORD(v162) = smudgeTypeIndex + 1; /*0x440f9e*/
      v69 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v162); /*0x440fb3*/
      BuildingClass::ValidatePlacement(v69, 0); /*0x440fba*/
      HIWORD(v162) = HIWORD(smudgeTypeIndex); /*0x440fc2*/
      LOWORD(v162) = smudgeTypeIndex - 1; /*0x440fc7*/
      v70 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v162); /*0x440fe0*/
      BuildingClass::ValidatePlacement(v70, 0); /*0x440fe7*/
      v162 = (int *)(smudgeTypeIndex + 0x10000); /*0x440ff4*/
      v71 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v162); /*0x44100d*/
      BuildingClass::ValidatePlacement(v71, 0); /*0x441014*/
      v162 = (int *)(smudgeTypeIndex - 0x10000); /*0x44101f*/
      v72 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v162); /*0x441038*/
      BuildingClass::ValidatePlacement(v72, 0); /*0x44103f*/
      v67 = dword_8871E0; /*0x441044*/
      v2 = v161; /*0x441049*/
    }
    v73 = this->Type; /*0x44104d*/
    if ( v73 == v67->FlameDamage || v73 == v67->NukeWarhead ) /*0x441063*/
    {
      v74 = (int *)Coord::To_Cell((Coord *)&dword_87F7E8, v2)->smudgeTypeIndex; /*0x441070*/
      v162 = v74; /*0x441077*/
      HIWORD(v161) = HIWORD(v74); /*0x441083*/
      LOWORD(v161) = (_WORD)v74 - 1; /*0x441088*/
      v75 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v161); /*0x44109d*/
      BuildingClass::ValidatePlacement(v75, 0); /*0x4410a4*/
      LOWORD(v161) = (_WORD)v74 + 3; /*0x4410b0*/
      HIWORD(v161) = HIWORD(v74); /*0x4410b5*/
      v76 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v161); /*0x4410ca*/
      BuildingClass::ValidatePlacement(v76, 0); /*0x4410d1*/
      v67 = dword_8871E0; /*0x4410d6*/
    }
    v77 = this->Type; /*0x4410db*/
    if ( v77 == v67->FlameDamage2 || v77 == v67->NukeProjectile ) /*0x4410f1*/
    {
      v78 = Coord::To_Cell((Coord *)&dword_87F7E8, v2)->smudgeTypeIndex; /*0x4410fe*/
      v157 = v78; /*0x441105*/
      v161 = (TechnoClass *)(v78 - 0x10000); /*0x441118*/
      v79 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v161); /*0x44112a*/
      BuildingClass::ValidatePlacement(v79, 0); /*0x441131*/
      v161 = (TechnoClass *)(v78 + 196608); /*0x44113e*/
      v80 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&v161); /*0x441157*/
      BuildingClass::ValidatePlacement(v80, 0); /*0x44115e*/
    }
    if ( *(_BYTE *)(this->Type + 5451) ) /*0x441169*/
    {
      if ( __2_YAPAXI_Z(0xE8u) ) /*0x441178*/
        v81 = BuildingLightClass::CTOR((BuildingLightClass *)this, v1, v150); /*0x441187*/
      else
        v81 = 0; /*0x44118e*/
      this->Spotlight = (int)v81; /*0x441190*/
    }
    v82 = this->Type; /*0x441196*/
    this->isPrimaryFactory[0] = 0; /*0x44119c*/
    if ( *(_DWORD *)(v82 + 3768) ) /*0x4411a3*/
      AnimClass::updateAnimation((int)this, 0); /*0x4411b1*/
    v83 = 0; /*0x4411bc*/
    IvanIconFlickerRate = dword_8871E0->IvanIconFlickerRate; /*0x4411be*/
    if ( IvanIconFlickerRate > 0 ) /*0x4411c6*/
    {
      IvanDamage = (_DWORD *)dword_8871E0->IvanDamage; /*0x4411ce*/
      while ( *IvanDamage != this->Type ) /*0x4411d6*/
      {
        ++v83; /*0x4411d8*/
        ++IvanDamage; /*0x4411d9*/
        if ( v83 >= IvanIconFlickerRate ) /*0x4411de*/
          goto LABEL_147; /*0x4411de*/
      }
      v86 = (_DWORD *)(this->owner + 80); /*0x4411e8*/
      v87 = *(_DWORD *)(this->owner + 88); /*0x4411eb*/
      if ( *(_DWORD *)(this->owner + 96) < v87 /*0x441210*/
        || (*(_BYTE *)(this->owner + 93) || !v87)
        && (v88 = *(_DWORD *)(this->owner + 100), v88 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v86 + 8))(v86, v88 + v87, 0) )
      {
        v89 = v86[4]; /*0x441217*/
        v90 = v86[1]; /*0x44121a*/
        v86[4] = v89 + 1; /*0x441220*/
        *(_DWORD *)(v90 + 4 * v89) = this; /*0x441223*/
      }
    }
LABEL_147:
    if ( *(_BYTE *)(this->Type + 5801) ) /*0x44122c*/
    {
      v91 = (_DWORD *)(this->owner + 128); /*0x44123c*/
      v92 = *(_DWORD *)(this->owner + 136); /*0x441242*/
      if ( *(_DWORD *)(this->owner + 144) < v92 /*0x441267*/
        || (*(_BYTE *)(this->owner + 141) || !v92)
        && (v93 = *(_DWORD *)(this->owner + 148), v93 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v91 + 8))(v91, v93 + v92, 0) )
      {
        v94 = v91[4]; /*0x44126e*/
        v95 = v91[1]; /*0x441271*/
        v91[4] = v94 + 1; /*0x441277*/
        *(_DWORD *)(v95 + 4 * v94) = this; /*0x44127a*/
      }
    }
    if ( *(_BYTE *)(this->Type + 5805) ) /*0x441283*/
    {
      v96 = (_DWORD *)(this->owner + 152); /*0x441293*/
      v97 = *(_DWORD *)(this->owner + 160); /*0x441299*/
      if ( *(_DWORD *)(this->owner + 168) < v97 /*0x4412be*/
        || (*(_BYTE *)(this->owner + 165) || !v97)
        && (v98 = *(_DWORD *)(this->owner + 172), v98 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v96 + 8))(v96, v98 + v97, 0) )
      {
        v99 = v96[4]; /*0x4412c5*/
        v100 = v96[1]; /*0x4412c8*/
        v96[4] = v99 + 1; /*0x4412ce*/
        *(_DWORD *)(v100 + 4 * v99) = this; /*0x4412d1*/
      }
    }
    v101 = this->Type; /*0x4412d4*/
    if ( *(_BYTE *)(v101 + 5806) || *(_BYTE *)(v101 + 5807) ) /*0x4412e4*/
    {
      v102 = (_DWORD *)(this->owner + 176); /*0x4412f4*/
      v103 = *(_DWORD *)(this->owner + 184); /*0x4412fa*/
      if ( *(_DWORD *)(this->owner + 192) < v103 /*0x44131f*/
        || (*(_BYTE *)(this->owner + 189) || !v103)
        && (v104 = *(_DWORD *)(this->owner + 196), v104 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v102 + 8))(v102, v104 + v103, 0) )
      {
        v105 = v102[4]; /*0x441326*/
        v106 = v102[1]; /*0x441329*/
        v102[4] = v105 + 1; /*0x44132f*/
        *(_DWORD *)(v106 + 4 * v105) = this; /*0x441332*/
      }
    }
    if ( *(_BYTE *)(this->Type + 5803) ) /*0x44133b*/
    {
      v107 = (_DWORD *)(this->owner + 200); /*0x44134b*/
      v108 = *(_DWORD *)(this->owner + 208); /*0x441351*/
      if ( *(_DWORD *)(this->owner + 216) < v108 /*0x441376*/
        || (*(_BYTE *)(this->owner + 213) || !v108)
        && (v109 = *(_DWORD *)(this->owner + 220), v109 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v107 + 8))(v107, v109 + v108, 0) )
      {
        v110 = v107[4]; /*0x44137d*/
        v111 = v107[1]; /*0x441380*/
        v107[4] = v110 + 1; /*0x441386*/
        *(_DWORD *)(v111 + 4 * v110) = this; /*0x441389*/
      }
    }
    v112 = this->Type; /*0x44138c*/
    if ( *(_BYTE *)(v112 + 5499) && *(int *)(v112 + 1588) > -1 ) /*0x4413a3*/
    {
      v113 = (_DWORD *)(this->owner + 224); /*0x4413ab*/
      v114 = *(_DWORD *)(this->owner + 232); /*0x4413b1*/
      if ( *(_DWORD *)(this->owner + 240) < v114 /*0x4413d6*/
        || (*(_BYTE *)(this->owner + 237) || !v114)
        && (v115 = *(_DWORD *)(this->owner + 244), v115 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v113 + 8))(v113, v115 + v114, 0) )
      {
        v116 = v113[4]; /*0x4413dd*/
        v117 = v113[1]; /*0x4413e0*/
        v113[4] = v116 + 1; /*0x4413e6*/
        *(_DWORD *)(v117 + 4 * v116) = this; /*0x4413e9*/
      }
    }
    if ( *(_BYTE *)(this->Type + 5804) ) /*0x4413f2*/
    {
      v118 = (_DWORD *)(this->owner + 248); /*0x441402*/
      v119 = *(_DWORD *)(this->owner + 256); /*0x441408*/
      if ( *(_DWORD *)(this->owner + 264) < v119 /*0x44142d*/
        || (*(_BYTE *)(this->owner + 261) || !v119)
        && (v120 = *(_DWORD *)(this->owner + 268), v120 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v118 + 8))(v118, v120 + v119, 0) )
      {
        v121 = v118[4]; /*0x441434*/
        v122 = v118[1]; /*0x441437*/
        v118[4] = v121 + 1; /*0x44143d*/
        *(_DWORD *)(v122 + 4 * v121) = this; /*0x441440*/
      }
    }
    if ( *(_BYTE *)(this->Type + 5808) ) /*0x441449*/
    {
      v123 = (_DWORD *)(this->owner + 272); /*0x441459*/
      v124 = *(_DWORD *)(this->owner + 280); /*0x44145f*/
      if ( *(_DWORD *)(this->owner + 288) < v124 /*0x441484*/
        || (*(_BYTE *)(this->owner + 285) || !v124)
        && (v125 = *(_DWORD *)(this->owner + 292), v125 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v123 + 8))(v123, v125 + v124, 0) )
      {
        v126 = v123[4]; /*0x44148b*/
        v127 = v123[1]; /*0x44148e*/
        v123[4] = v126 + 1; /*0x441494*/
        *(_DWORD *)(v127 + 4 * v126) = this; /*0x441497*/
      }
    }
    if ( *(int *)(this->Type + 5900) > 0 ) /*0x4414a8*/
    {
      v128 = (_DWORD *)(this->owner + 296); /*0x4414b0*/
      v129 = *(_DWORD *)(this->owner + 304); /*0x4414b6*/
      if ( *(_DWORD *)(this->owner + 312) < v129 /*0x4414db*/
        || (*(_BYTE *)(this->owner + 309) || !v129)
        && (v130 = *(_DWORD *)(this->owner + 316), v130 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v128 + 8))(v128, v130 + v129, 0) )
      {
        v131 = v128[4]; /*0x4414e2*/
        v132 = v128[1]; /*0x4414e5*/
        v128[4] = v131 + 1; /*0x4414eb*/
        *(_DWORD *)(v132 + 4 * v131) = this; /*0x4414ee*/
      }
    }
    if ( *(_BYTE *)(this->Type + 5837) ) /*0x4414f7*/
    {
      v133 = (_DWORD *)(this->owner + 320); /*0x441507*/
      v134 = *(_DWORD *)(this->owner + 328); /*0x44150d*/
      if ( *(_DWORD *)(this->owner + 336) < v134 /*0x441532*/
        || (*(_BYTE *)(this->owner + 333) || !v134)
        && (v135 = *(_DWORD *)(this->owner + 340), v135 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v133 + 8))(v133, v135 + v134, 0) )
      {
        v136 = v133[4]; /*0x441539*/
        v137 = v133[1]; /*0x44153c*/
        v133[4] = v136 + 1; /*0x441542*/
        *(_DWORD *)(v137 + 4 * v136) = this; /*0x441545*/
      }
      HouseClass::CalculateCostMultipliers((float *)this->owner); /*0x44154e*/
    }
    v138 = (_DWORD *)(this->owner + 104); /*0x441559*/
    v139 = *(_DWORD *)(this->owner + 112); /*0x44155c*/
    if ( *(_DWORD *)(this->owner + 120) < v139 /*0x441581*/
      || (*(_BYTE *)(this->owner + 117) || !v139)
      && (v140 = *(_DWORD *)(this->owner + 124), v140 > 0)
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v138 + 8))(v138, v140 + v139, 0) )
    {
      v141 = v138[4]; /*0x441588*/
      v142 = v138[1]; /*0x44158b*/
      v138[4] = v141 + 1; /*0x441591*/
      *(_DWORD *)(v142 + 4 * v141) = this; /*0x441594*/
    }
    if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner) ) /*0x44159d*/
      BuildingClass::MarkUpgradeComponentUsed((BuildingClass *)(this->owner + 22272), this); /*0x4415b3*/
    result = this->Type; /*0x4415b8*/
    v143 = *(_DWORD *)(result + 3768); /*0x4415be*/
    if ( v143 ) /*0x4415c6*/
    {
      LOBYTE(result) = *(_BYTE *)(result + 3278); /*0x4415c8*/
      result = HouseClass::UpdateProduction(this->owner, v143, result, 0); /*0x4415d8*/
    }
    LOBYTE(result) = 1; /*0x4415e0*/
  }
  else
  {
    LOBYTE(result) = 1; /*0x440b43*/
  }
  return result; /*0x440867*/
}


// ==== 0x004415F0  BuildingClass::ProcessDemolish  this=BuildingClass  sig=csp ====
int __thiscall FootClass::ProcessDemolish(BuildingClass *this)
{
  double v1; // st7
  int v3; // ebp
  int *DamageFireAnims; // edi
  BuildingTypeClass *Type; // ecx
  int v6; // edx
  int bunkersCount; // edi
  HouseClass *owner; // ecx
  int v9; // eax
  BuildingTypeClass *v10; // eax
  char CloakRadius; // cl
  void (__thiscall **ptr_0)(BuildingClass *, int); // edx
  int FoundationWidth; // eax
  int FoundationHeight; // eax
  int v15; // edi
  int v16; // eax
  int v17; // eax
  int v18; // edi
  _WORD *v19; // edi
  _DWORD *v20; // ebp
  __int16 v21; // dx
  __int16 v22; // cx
  int v23; // edi
  int v24; // edi
  int *v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  AnimClass *v29; // ebp
  void *v30; // ebx
  int *Explosion; // edi
  unsigned int v32; // eax
  int *v33; // ebx
  int *v34; // eax
  AnimClass *v35; // ebp
  int v36; // edi
  int Index; // eax
  int FloatPositive; // edi
  int v39; // eax
  int *v40; // eax
  CellClass *v41; // eax
  int v42; // eax
  void *v43; // edi
  AnimClass *v44; // ebp
  int *v45; // eax
  void **v46; // edi
  const char *v47; // eax
  int (__thiscall **v48)(BuildingClass *); // edx
  int i; // ebx
  _DWORD *v50; // edi
  int v51; // eax
  _DWORD *v52; // eax
  int v53; // ebp
  int v54; // ebx
  int *v55; // edi
  int v56; // ecx
  int v57; // edx
  int v58; // eax
  ParticleSystemClass *v59; // eax
  int result; // eax
  int v61; // [esp+4h] [ebp-68h]
  ObjectClass *v62; // [esp+8h] [ebp-64h]
  int v63; // [esp+18h] [ebp-54h] BYREF
  int v64; // [esp+1Ch] [ebp-50h]
  int v65; // [esp+20h] [ebp-4Ch]
  int v66; // [esp+24h] [ebp-48h] BYREF
  int v67; // [esp+28h] [ebp-44h]
  int v68; // [esp+2Ch] [ebp-40h]
  int v69; // [esp+30h] [ebp-3Ch]
  int v70; // [esp+34h] [ebp-38h]
  int v71; // [esp+38h] [ebp-34h]
  int v72[3]; // [esp+3Ch] [ebp-30h] BYREF
  int v73; // [esp+48h] [ebp-24h] BYREF
  int v74; // [esp+4Ch] [ebp-20h]
  VectorClass v75; // [esp+54h] [ebp-18h] BYREF
  int v76; // [esp+64h] [ebp-8h]
  int v77; // [esp+68h] [ebp-4h]
  int v78; // [esp+74h] [ebp+8h]
  char v79; // [esp+78h] [ebp+Ch]
  _WORD *v80; // [esp+7Ch] [ebp+10h]

  v3 = 8; /*0x4415f9*/
  DamageFireAnims = this->DamageFireAnims; /*0x4415fe*/
  do /*0x44161a*/
  {
    if ( *DamageFireAnims ) /*0x441604*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)*DamageFireAnims + 248))(*DamageFireAnims); /*0x44160e*/
      *DamageFireAnims = 0; /*0x441614*/
    }
    ++DamageFireAnims; /*0x441616*/
    --v3; /*0x441619*/
  }
  while ( v3 ); /*0x44161a*/
  if ( this->?[0] ) /*0x44161c*/
  {
    Type = this->Type; /*0x441624*/
    this->?[0] = 0; /*0x44162a*/
    if ( Type->__pad_1624[128] ) /*0x441630*/
    {
      this->?->radarVisibleTo[0] = 0; /*0x441640*/
      v6 = 0; /*0x44164c*/
      bunkersCount = this->?->bunkersCount; /*0x44164e*/
      if ( bunkersCount > 0 ) /*0x441653*/
      {
        do /*0x441694*/
        {
          owner = this->?; /*0x441655*/
          v9 = *(_DWORD *)(owner->absorbersCount + 4 * v6); /*0x44165e*/
          if ( v9 && !*(_BYTE *)(v9 + 129) && *(_BYTE *)(*(_DWORD *)(v9 + 1312) + 5796) ) /*0x441674*/
            owner->radarVisibleTo[0] |= *(_DWORD *)(v9 + 528); /*0x44168b*/
          ++v6; /*0x441691*/
        }
        while ( v6 < bunkersCount ); /*0x441694*/
      }
      MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x44169d*/
    }
  }
  v10 = this->Type; /*0x4416a2*/
  if ( v10->CloakGenerator ) /*0x4416a8*/
  {
    CloakRadius = this->CloakRadius; /*0x4416b2*/
    this->HasCloakingData = -1; /*0x4416b8*/
    if ( !CloakRadius ) /*0x4416c1*/
      this->CloakRadius = v10->CloakRadiusInCells; /*0x4416c9*/
    ptr_0 = (void (__thiscall **)(BuildingClass *, int))this->TechnoClass; /*0x4416cf*/
    this->? = 1; /*0x4416d5*/
    this->CloakRadius = 1; /*0x4416dc*/
    ptr_0[260](this, 1); /*0x4416e3*/
  }
  if ( this->Type->LaserFencePost ) /*0x4416ef*/
    BuildingClass::DemolishBridgeCheck(this, 1); /*0x4416fd*/
  if ( this->Type->? && !(unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x441718*/
    (*((void (__thiscall **)(BuildingClass *, _DWORD, _DWORD, int, Object *))this->TechnoClass + 291))( /*0x44172f*/
      this,
      0,
      0,
      1,
      dword_A83D4C);
  if ( !*(_DWORD *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) + 1312) ) /*0x44173f*/
  {
    v63 = this->?[0]; /*0x441757*/
    v64 = this->?[1]; /*0x441764*/
    v65 = this->?[2]; /*0x44176f*/
    PlayAudioAt2(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1768), &v63, 0); /*0x441779*/
  }
  if ( BuildingTypeClass::GetFoundationWidth(this->Type) >= 2 /*0x4417a1*/
    && BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) >= 2 )
  {
    if ( BuildingTypeClass::GetFoundationWidth(this->Type) > 2 ) /*0x4417b5*/
    {
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(this->Type); /*0x4417bd*/
      Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, FoundationWidth - 2); /*0x4417d3*/
    }
    if ( BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) > 2 ) /*0x4417e7*/
    {
      FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0); /*0x4417f0*/
      Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, FoundationHeight - 2); /*0x441805*/
    }
    if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 50 ) /*0x441821*/
    {
      v65 = 0; /*0x441892*/
      v17 = this->?[0]; /*0x441896*/
      v18 = this->?[1]; /*0x441898*/
      v71 = this->?[2]; /*0x44189e*/
      v63 = ((__int16)(v17 / 256) << 8) + 128; /*0x4418d6*/
      v64 = ((__int16)(v18 / 256) << 8) + 128; /*0x4418da*/
      TimedCreateUnitAtCoords(&v63, 100, 100, 1); /*0x4418e7*/
    }
    else
    {
      v65 = 0; /*0x44182d*/
      v15 = this->?[1]; /*0x441833*/
      v16 = this->?[0]; /*0x441839*/
      v71 = this->?[2]; /*0x441840*/
      v63 = ((__int16)(v16 / 256) << 8) + 128; /*0x44186f*/
      v64 = ((__int16)(v15 / 256) << 8) + 128; /*0x44187d*/
      StandardCreateUnitAtCoords(&v63, 100, 100, 1); /*0x441881*/
    }
  }
  while ( *v80 != 0x7FFF || v80[1] != 0x7FFF ) /*0x4418fd*/
  {
    v19 = v80; /*0x441903*/
    v80 += 2; /*0x44190c*/
    v20 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 43))(this, v72); /*0x44191b*/
    v21 = v20[1] / 256 + v19[1]; /*0x44193e*/
    v22 = *v19 + *v20 / 256; /*0x44194a*/
    if ( this->Type->?[4] > 0 ) /*0x441955*/
    {
      v69 = this->?[0]; /*0x441972*/
      v23 = this->?[1]; /*0x441976*/
      v63 = (v22 << 8) + 128; /*0x44197f*/
      v64 = (v21 << 8) + 128; /*0x441983*/
      v70 = v23; /*0x441987*/
      v24 = this->?[2]; /*0x44198b*/
      v65 = 0; /*0x441998*/
      v25 = RandomCoordScatter(&v73, &v63, v1, 64, 0); /*0x44199c*/
      v26 = *v25; /*0x4419a1*/
      v27 = v25[1]; /*0x4419a3*/
      v28 = v24 + v25[2]; /*0x4419ae*/
      v66 = v26; /*0x4419b0*/
      v67 = v27; /*0x4419b4*/
      v68 = v28; /*0x4419b8*/
      v29 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4419c1*/
      if ( v29 ) /*0x4419c8*/
      {
        v30 = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 3); /*0x4419f3*/
        Explosion = this->Type->?; /*0x4419f5*/
        v32 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x4419fb*/
        AnimClass::ctor(v29, *(void **)(Explosion[1] + 4 * (v32 % Explosion[4])), &v66, v30, 1, (void *)0x600, 0, 0); /*0x441a1f*/
      }
    }
  }
  if ( BYTE1(this->Type->?[0]) ) /*0x441a31*/
  {
    v33 = (int *)&unk_818CB8; /*0x441a3f*/
    do /*0x441b28*/
    {
      v66 = this->?[0]; /*0x441a50*/
      v61 = *v33; /*0x441a59*/
      v67 = this->?[1]; /*0x441a5a*/
      v68 = this->?[2]; /*0x441a69*/
      v34 = globalHelper_09F550(&v73, &v66, v61); /*0x441a6d*/
      v63 = *v34; /*0x441a74*/
      v64 = v34[1]; /*0x441a7b*/
      v65 = v34[2]; /*0x441a8c*/
      if ( *(_DWORD *)&Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v63)->__pad_28[28] != -1 ) /*0x441a99*/
      {
        if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 /*0x441aba*/
                                  + 4
                                  * *(_DWORD *)&Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v63)->__pad_28[28])
                      + 688) )
        {
          v35 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x441ace*/
          if ( v35 ) /*0x441ad5*/
          {
            v36 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 3); /*0x441af1*/
            Index = AnimTypeClass::FindIndex(&stru_818E00); /*0x441af3*/
            AnimClass::ctor( /*0x441b1a*/
              v35,
              *(void **)(FootClass_Array.?[3] + 4 * Index),
              &v63,
              (void *)(v36 + 3),
              1,
              (void *)0x600,
              0,
              0);
          }
        }
      }
      ++v33; /*0x441b1f*/
    }
    while ( (int)v33 < (int)dword_818CC8 ); /*0x441b28*/
  }
  Float4::Sum((int *)&this->?); /*0x441b38*/
  while ( v1 >= 1.0 ) /*0x441b48*/
  {
    FloatPositive = FirstFloatPositive(&this->?); /*0x441b5b*/
    Float::SubtractClamped((int *)&this->?, 1.0, FloatPositive); /*0x441b65*/
    Float::SubtractClamped(this->?->ownedTiberium, 1.0, FloatPositive); /*0x441b7e*/
    v39 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 256, 768); /*0x441b9a*/
    v66 = this->?[0]; /*0x441ba6*/
    v67 = this->?[1]; /*0x441bad*/
    v68 = this->?[2]; /*0x441bb8*/
    v40 = RandomCoordScatter(&v73, &v66, v1, v39, 1); /*0x441bc0*/
    v63 = *v40; /*0x441bc9*/
    v64 = v40[1]; /*0x441bd1*/
    v65 = v40[2]; /*0x441be2*/
    v41 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v63); /*0x441be6*/
    Crate::FindPlacement((int)v41, FloatPositive, 1); /*0x441bed*/
    Float4::Sum((int *)&this->?); /*0x441bf4*/
  }
  if ( (*((int (__thiscall **)(BuildingTypeClass *, HouseClass *))this->Type->TechnoTypeClass + 33))( /*0x441c30*/
         this->Type,
         this->?)
     / *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1480) > 0 )
    nullsub_51(v62); /*0x441c34*/
  if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 19 || BYTE1(this->Type->?[0]) ) /*0x441c4e*/
  {
    this->C4Timer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x441c83*/
    this->C4Timer[1] = v74; /*0x441c89*/
    this->C4Timer[2] = 0; /*0x441c8c*/
    v42 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x441c8f*/
    this->?[5] = 0; /*0x441c9a*/
    this->?[2] = v42; /*0x441ca0*/
    this->?[3] = v74; /*0x441ca6*/
    this->?[4] = 0; /*0x441ca9*/
  }
  else
  {
    this->C4Timer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x441c68*/
    this->C4Timer[1] = v74; /*0x441c6e*/
    this->C4Timer[2] = 8; /*0x441c71*/
  }
  if ( this->Type->?[4] > 0 ) /*0x441cb8*/
  {
    v43 = *(void **)(this->Type->?[1] /*0x441ce3*/
                   + 4 * ((unsigned int)Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % this->Type->?[4]));
    if ( v43 ) /*0x441ce8*/
    {
      v44 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x441cf4*/
      if ( v44 ) /*0x441cfb*/
      {
        v45 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 43))(this, &v73); /*0x441d10*/
        v46 = AnimClass::ctor(v44, v43, v45, 0, 1, (void *)0x600, 0, 0); /*0x441d1f*/
      }
      else
      {
        v46 = 0; /*0x441d23*/
      }
      if ( *(_DWORD *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) + 3568) ) /*0x441d2f*/
      {
        v46[53] = (void *)(*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 121))(this); /*0x441d41*/
        v47 = &this->Type->?[8]; /*0x441d4d*/
        if ( *v47 ) /*0x441d52*/
          strncpy((char *)v46 + 220, v47, 0x20u); /*0x441d61*/
      }
    }
  }
  VectorClass::ConstructorWithVtable(&v75, 0, 0); /*0x441d6f*/
  v48 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x441d74*/
  v75.ptr_0 = &DynamicVectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x441d78*/
  v77 = 10; /*0x441d80*/
  v76 = 0; /*0x441d88*/
  for ( i = *(_DWORD *)(v48[33](this) + 1956) - 1; i >= 0; --i ) /*0x441d9e*/
  {
    if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) /*0x441dc3*/
                                            + 1944)
                                + 4 * i)
                    + 692) )
    {
      v50 = (_DWORD *)(4 * i /*0x441de6*/
                     + *(_DWORD *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) + 1944));
      if ( v76 < v75.Capacity /*0x441e11*/
        || (v75.IsAllocated || !v75.Capacity)
        && v77 > 0
        && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v75.ptr_0 + 2))(
             &v75,
             v77 + v75.Capacity,
             0) )
      {
        v51 = v76++; /*0x441e20*/
        *((_DWORD *)v75.Items + v51) = *v50; /*0x441e29*/
      }
    }
  }
  if ( !this->? && v76 > 0 && (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 114))(this) > -10 ) /*0x441e5a*/
  {
    v52 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this); /*0x441e64*/
    v53 = v52[496]; /*0x441e6a*/
    v54 = v52[497]; /*0x441e70*/
    v71 = v52[498]; /*0x441e83*/
    v55 = (int *)__2_YAPAXI_Z(0x100u); /*0x441e8c*/
    if ( v55 ) /*0x441e93*/
    {
      v56 = this->?[1]; /*0x441ea1*/
      v66 = v53 + this->?[0]; /*0x441ea4*/
      v57 = v71 + this->?[2]; /*0x441eb5*/
      v67 = v54 + v56; /*0x441eb7*/
      v68 = v57; /*0x441ecb*/
      v58 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v76 - 1); /*0x441ecf*/
      v59 = (ParticleSystemClass *)ParticleSystemClass::Constructor( /*0x441eed*/
                                     v55,
                                     *((_DWORD *)v75.Items + v58),
                                     &v66,
                                     0,
                                     this,
                                     &g_BuildingClassPool,
                                     0);
    }
    else
    {
      v59 = 0; /*0x441ef4*/
    }
    this->? = v59; /*0x441ef6*/
  }
  this->? = 0; /*0x441f00*/
  if ( v79 ) /*0x441f09*/
    this->NoCrew = 1; /*0x441f0b*/
  BuildingClass::EjectCrew(this, this->C4AppliedBy); /*0x441f1b*/
  TechnoClass::CleanupAll((TechnoClass *)this, v78); /*0x441f27*/
  result = (int)v75.Items; /*0x441f2c*/
  v75.ptr_0 = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x441f35*/
  if ( v75.Items && v75.IsAllocated ) /*0x441f46*/
    __3_YAXPAX_Z(v75.Items); /*0x441f49*/
  return result; /*0x441f30*/
}



// ==== 0x00441F60  BuildingClass::AfterDestruction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::AfterDestruction(BuildingClass *this)
{
  BuildingClass *v1; // ebx
  BuildingTypeClass *Type; // ecx
  int result; // eax
  _WORD *v4; // ebp
  _DWORD *v5; // eax
  _WORD *v6; // eax
  __int16 v7; // dx
  void *v8; // esi
  BuildingClass *v9; // edi
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // edx
  int v15; // ebp
  int v16; // eax
  int v17; // esi
  int v18; // edi
  int *v19; // eax
  void *v20; // eax
  _DWORD *v21; // eax
  BuildingTypeClass *v22; // edx
  __int16 v23[2]; // [esp+10h] [ebp-40h] BYREF
  int v24; // [esp+14h] [ebp-3Ch]
  __int16 v25[2]; // [esp+18h] [ebp-38h] BYREF
  int v26; // [esp+1Ch] [ebp-34h]
  _DWORD v27[2]; // [esp+20h] [ebp-30h] BYREF
  char v28[4]; // [esp+28h] [ebp-28h] BYREF
  char v29[4]; // [esp+2Ch] [ebp-24h] BYREF
  int v30[4]; // [esp+30h] [ebp-20h] BYREF
  Rect v31; // [esp+40h] [ebp-10h] BYREF

  v1 = this; /*0x441f65*/
  Type = this->Type; /*0x441f73*/
  v27[0] = v1; /*0x441f79*/
  result = BuildingClass::GetPlacementCoords((BuildingClass *)Type, (int *)v29, v28); /*0x441f7d*/
  if ( (_BYTE)result ) /*0x441f84*/
  {
    v4 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))v1->TechnoClass + 66))(v1, 0); /*0x441f9a*/
    v5 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))v1->TechnoClass + 43))(v1, v30); /*0x441fa1*/
    LOWORD(v24) = *v5 / 256; /*0x441fb7*/
    HIWORD(v24) = v5[1] / 256; /*0x441fcb*/
    *(_DWORD *)v23 = v24; /*0x441fd4*/
    while ( *v4 != 0x7FFF || v4[1] != 0x7FFF ) /*0x441fe6*/
    {
      v6 = v4; /*0x441fe8*/
      v4 += 2; /*0x441fea*/
      v7 = v23[1] + v6[1]; /*0x441ff9*/
      LOWORD(v24) = v23[0] + *v6; /*0x441ffe*/
      HIWORD(v24) = v7; /*0x442007*/
      *(_DWORD *)v25 = v24; /*0x442016*/
      v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x44201f*/
      BuildingClass::CreatePlacementCrater((BuildingClass *)v8); /*0x442023*/
      *((_DWORD *)v8 + 17) = 239; /*0x44202c*/
      *((_DWORD *)v8 + 16) = 0; /*0x442033*/
      House::AnnounceUpgrade((int)v8, -1); /*0x44203a*/
      Cell::SetRadar((Cell *)&stru_87F5F0.__pad_58[416], (__int16 *)v8 + 18); /*0x442048*/
      Radar::Update((Radar *)&stru_87F5F0.__pad_58[416], (__int16 *)v8 + 18); /*0x442053*/
      AbstractClass::ClearTargetToMeClearManagerTarget((int)v8); /*0x44205a*/
    }
    v9 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23); /*0x442077*/
    v9->?[1] = (int)v1->Type; /*0x442082*/
    PlacementRect = BuildingClass::GetPlacementRect(v9, v30); /*0x442091*/
    StartCoords = House::GetStartCoords((House *)v9, &v31); /*0x442093*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x4420a8*/
    {
      v12 = *PlacementRect; /*0x44212e*/
      v14 = PlacementRect[1]; /*0x442130*/
      v18 = PlacementRect[2]; /*0x442133*/
      v16 = PlacementRect[3]; /*0x442136*/
    }
    else
    {
      v24 = PlacementRect[2]; /*0x4420b3*/
      if ( v24 <= 0 || (v26 = PlacementRect[3], v26 <= 0) ) /*0x4420c2*/
      {
        v12 = *StartCoords; /*0x442121*/
        v14 = StartCoords[1]; /*0x442123*/
        v18 = StartCoords[2]; /*0x442126*/
        v16 = StartCoords[3]; /*0x442129*/
      }
      else
      {
        v12 = *StartCoords; /*0x4420c4*/
        v13 = *PlacementRect; /*0x4420c6*/
        v14 = StartCoords[1]; /*0x4420c8*/
        v15 = StartCoords[2]; /*0x4420cb*/
        v16 = StartCoords[3]; /*0x4420ce*/
        if ( v12 > *PlacementRect ) /*0x4420d3*/
        {
          v15 += v12 - v13; /*0x4420d7*/
          v12 = *PlacementRect; /*0x4420d9*/
        }
        v17 = PlacementRect[1]; /*0x4420db*/
        *(_DWORD *)v25 = v17; /*0x4420e0*/
        if ( v14 > v17 ) /*0x4420e4*/
        {
          v16 += v14 - v17; /*0x4420e8*/
          v14 = v17; /*0x4420ea*/
        }
        if ( v12 + v15 < v13 + v24 ) /*0x4420f7*/
          v15 = v13 - v12 + v24 + 1; /*0x4420ff*/
        if ( v16 + v14 < v26 + *(_DWORD *)v25 ) /*0x442112*/
          v16 = v26 + *(_DWORD *)v25 - v14 + 1; /*0x442117*/
        v1 = (BuildingClass *)v27[0]; /*0x442119*/
        v18 = v15; /*0x44211d*/
      }
    }
    v27[0] = v12 - DSurface_ViewBounds.field_0; /*0x442150*/
    v27[1] = v14 - (unsigned int)DSurface_ViewBounds.field_4; /*0x44215a*/
    v19 = Rect::Construct(&v31, v27, v18, v16); /*0x44215e*/
    Cell::CreateCrater(*v19, v19[1], v19[2], v19[3], 0); /*0x442184*/
    v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23); /*0x442193*/
    result = Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v20); /*0x44219f*/
  }
  LOBYTE(result) = v1->Type->__pad_1714[83]; /*0x4421aa*/
  if ( (_BYTE)result ) /*0x4421b2*/
  {
    v21 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))v1->TechnoClass + 43))(v1, v30); /*0x4421bd*/
    v23[0] = *v21 / 256; /*0x4421d3*/
    v22 = v1->Type; /*0x4421e4*/
    v23[1] = v21[1] / 256; /*0x4421ed*/
    if ( v22->__pad_1714[85] ) /*0x4421f2*/
      return BuildingClass::SearchPlacement((BuildingClass *)&stru_87F5F0.__pad_58[416], *(int *)v23, 0); /*0x442208*/
    else
      return BuildingClass::SearchPlacement((BuildingClass *)&stru_87F5F0.__pad_58[416], *(int *)v23, 20); /*0x442221*/
  }
  return result; /*0x44220d*/
}



// ==== 0x00442230  BuildingClass::ProcessAttack  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessAttack(BuildingClass *this)
{
  int v1; // ebp
  int v3; // ebx
  int v4; // eax
  int Member; // edi
  int v6; // eax
  _BYTE *Type; // eax
  double v9; // st7
  int v10; // eax
  int v11; // edi
  void *v12; // eax
  int v13; // eax
  _DWORD *captureManager; // ecx
  int v15; // ebx
  _DWORD *v16; // edi
  _DWORD *v17; // ebp
  _DWORD *v18; // eax
  int *v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // edi
  int LightSource; // ecx
  int v24; // ecx
  int v25; // eax
  int v28; // edi
  int ptr_0; // edx
  _WORD *v30; // eax
  int FoundationHeight; // edi
  int FoundationWidth; // eax
  AnimClass *v33; // ebp
  int v34; // eax
  void **v35; // edi
  void **v36; // eax
  AnimClass *v37; // ebp
  void **v38; // edi
  AnimClass *v39; // ebp
  void **v40; // edi
  char v41; // al
  unsigned __int16 v42; // dx
  int v43; // eax
  BOOL v46; // ebx
  int v47; // ebp
  int v48; // edi
  AnimTypeClass *v49; // eax
  int v50; // eax
  BOOL v53; // ebx
  int *v54; // edx
  int v55; // ebp
  int v56; // edi
  AnimTypeClass *v57; // eax
  int *v58; // [esp+14h] [ebp-B4h]
  int *v59; // [esp+14h] [ebp-B4h]
  int *v60; // [esp+14h] [ebp-B4h]
  int v61; // [esp+1Ch] [ebp-ACh]
  int v62; // [esp+1Ch] [ebp-ACh]
  void *v63; // [esp+2Ch] [ebp-9Ch]
  char v64; // [esp+30h] [ebp-98h]
  __int64 v65; // [esp+34h] [ebp-94h]
  int *Anims; // [esp+3Ch] [ebp-8Ch] BYREF
  void **v67; // [esp+40h] [ebp-88h] BYREF
  void *Block; // [esp+44h] [ebp-84h]
  int v69; // [esp+48h] [ebp-80h]
  int v70; // [esp+4Ch] [ebp-7Ch]
  int v71; // [esp+50h] [ebp-78h]
  int v72; // [esp+54h] [ebp-74h]
  int v73; // [esp+58h] [ebp-70h] BYREF
  int v74; // [esp+5Ch] [ebp-6Ch]
  int v75; // [esp+60h] [ebp-68h] BYREF
  int v76; // [esp+64h] [ebp-64h]
  int GroundHeight; // [esp+68h] [ebp-60h]
  int ProductionFrame; // [esp+6Ch] [ebp-5Ch]
  _DWORD v79[3]; // [esp+70h] [ebp-58h] BYREF
  char v80[4]; // [esp+7Ch] [ebp-4Ch] BYREF
  int v81[3]; // [esp+80h] [ebp-48h] BYREF
  int v82[3]; // [esp+8Ch] [ebp-3Ch] BYREF
  int v83[3]; // [esp+98h] [ebp-30h] BYREF
  int v84[3]; // [esp+A4h] [ebp-24h] BYREF
  char v85[12]; // [esp+B0h] [ebp-18h] BYREF
  char v86[12]; // [esp+BCh] [ebp-Ch] BYREF
  double v87; // [esp+CCh] [ebp+4h]
  double v88; // [esp+D4h] [ebp+Ch]
  int *v89; // [esp+DCh] [ebp+14h]
  int v90; // [esp+E0h] [ebp+18h]
  _BYTE *v91; // [esp+E4h] [ebp+1Ch]

  v1 = HIDWORD(v88); /*0x442238*/
  v74 = 0; /*0x442245*/
  if ( this == (BuildingClass *)HIDWORD(v88) /*0x442262*/
    && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)HIDWORD(v88) + 132))(HIDWORD(v88)) + 3232) )
  {
    return v74; /*0x442c06*/
  }
  BuildingClass::GetHealthRatio(this); /*0x44226a*/
  __asm { fstp st } /*0x442271*/
  v3 = 0; /*0x442278*/
  ProductionFrame = BuildingClass::GetProductionFrame(this); /*0x44227a*/
  if ( HIDWORD(v88) && !(*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->ptr_0 + 128))(this) ) /*0x442286*/
  {
    *(_DWORD *)(this->owner + 21720) = dword_A8ED84; /*0x44229c*/
    *(_DWORD *)(this->owner + 21724) = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)HIDWORD(v88) + 60))(HIDWORD(v88)) /*0x4422b4*/
                                                 + 48);
    TechnoClass::EvaluateMission(this, SHIDWORD(v88)); /*0x4422bc*/
  }
  Anims = (int *)(*(int (__thiscall **)(BuildingClass *, _DWORD))(this->ptr_0 + 264))(this, 0); /*0x4422d2*/
  EventClass::resetEvent((EventClass *)&v67, 0, 0); /*0x4422d6*/
  v4 = this->radioLinks[2]; /*0x4422db*/
  v67 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x4422e1*/
  v72 = 10; /*0x4422eb*/
  v71 = 0; /*0x4422f3*/
  if ( v4 > 0 ) /*0x4422f7*/
  {
    do /*0x442356*/
    {
      Member = Team::GetMember((Team *)this, v3); /*0x442301*/
      if ( Member /*0x442334*/
        && (v71 < v69
         || (BYTE1(v70) || !v69)
         && v72 > 0
         && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v67[2])(&v67, v72 + v69, 0)) )
      {
        v6 = v71++; /*0x44233f*/
        *((_DWORD *)Block + v6) = Member; /*0x44234a*/
      }
      ++v3; /*0x442353*/
    }
    while ( v3 < this->radioLinks[2] ); /*0x442356*/
  }
  Type = (_BYTE *)this->Type; /*0x442358*/
  if ( Type[5823] && !(_BYTE)v89 ) /*0x442371*/
  {
    v67 = &VectorClass<TechnoClass *>::`vftable'; /*0x442377*/
    if ( Block && BYTE1(v70) ) /*0x442389*/
    {
      __3_YAXPAX_Z(Block); /*0x44238c*/
      return 0; /*0x4423a0*/
    }
    return 0; /*0x442389*/
  }
  if ( Type[5814] && Type[563] ) /*0x4423ad*/
  {
    v67 = &VectorClass<TechnoClass *>::`vftable'; /*0x4423bb*/
    if ( Block && BYTE1(v70) ) /*0x4423cd*/
      __3_YAXPAX_Z(Block); /*0x4423d0*/
    return 0; /*0x4423e4*/
  }
  if ( this->health ) /*0x4423e7*/
  {
    v9 = TechnoClass::ReceiveDamage_Shield(this, v87, v88, v89, v90, v91, v63, v64, v65); /*0x442425*/
    v11 = v10; /*0x44242a*/
    LOBYTE(v10) = this->isAliveFlag[0]; /*0x44242c*/
    v74 = v11; /*0x442434*/
    if ( !(_BYTE)v10 ) /*0x442438*/
    {
      v67 = &VectorClass<TechnoClass *>::`vftable'; /*0x44243e*/
      if ( Block && BYTE1(v70) ) /*0x442450*/
        __3_YAXPAX_Z(Block); /*0x442453*/
      return v11; /*0x442467*/
    }
    switch ( v11 ) /*0x442476*/
    {
      case 2: /*0x442476*/
        _EAX = this->ambientParticles; /*0x4426ac*/
        if ( _EAX ) /*0x4426b4*/
        {
          __asm /*0x4426b6*/
          {
            fld dword ptr [eax+0E8h]
            fmul ds:flt_7E4460
            fstp dword ptr [eax+0E8h]
          }
          *(float *)(_EAX + 232) = _ET1; /*0x4426c2*/
        }
        goto LABEL_64; /*0x4426c2*/
      case 3: /*0x442476*/
LABEL_64:
        if ( *(_DWORD *)((*(int (__thiscall **)(BuildingClass *))(this->ptr_0 + 132))(this) + 1336) == -1 ) /*0x4426d9*/
        {
          v79[0] = this->location[0]; /*0x4426e5*/
          v79[1] = this->location[1]; /*0x4426f0*/
          v79[2] = this->location[2]; /*0x4426fc*/
          PlayAudioAt2(*(_DWORD *)&dword_8871E0->__pad_704[16], v79, 0); /*0x442706*/
        }
        while ( *(_WORD *)Anims != 0x7FFF || *((_WORD *)Anims + 1) != 0x7FFF ) /*0x44271c*/
        {
          v28 = *Anims; /*0x442722*/
          ptr_0 = this->ptr_0; /*0x442724*/
          ++Anims; /*0x44272b*/
          v73 = v28; /*0x442734*/
          v30 = (_WORD *)(*(int (__thiscall **)(BuildingClass *, char *))(ptr_0 + 440))(this, v80); /*0x442738*/
          LOWORD(v28) = *v30 + v28; /*0x44273e*/
          LOWORD(v30) = HIWORD(v73) + v30[1]; /*0x442745*/
          GroundHeight = 0; /*0x44274a*/
          v75 = ((__int16)v28 << 8) + 128; /*0x442768*/
          v76 = ((__int16)v30 << 8) + 128; /*0x442778*/
          GroundHeight = Cell::GetGroundHeight(&v75); /*0x442781*/
          if ( *(_BYTE *)(LODWORD(v88) + 330) ) /*0x442785*/
          {
            FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0); /*0x4427a6*/
            FoundationWidth = BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)this->Type); /*0x4427a8*/
            switch ( Random::Range( /*0x4427d7*/
                       (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                       0,
                       FoundationHeight + FoundationWidth + 5) )
            {
              case 1: /*0x4427d7*/
              case 2: /*0x4427d7*/
              case 3: /*0x4427d7*/
              case 4: /*0x4427d7*/
              case 5: /*0x4427d7*/
                v33 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4427e8*/
                if ( v33 ) /*0x4427ef*/
                {
                  v34 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 3); /*0x442804*/
                  v35 = (void **)dword_8871E0->Easy[11]; /*0x442818*/
                  v61 = v34; /*0x44281e*/
                  v58 = RandomCoordScatter(v81, &v75, v9, 96, 0); /*0x442834*/
                  v36 = AnimClass::ctor(v33, *v35, v58, 0, v61, (void *)0x600, 0, 0); /*0x442836*/
                  goto LABEL_76; /*0x442836*/
                }
                break; /*0x442836*/
              case 6: /*0x4427d7*/
              case 7: /*0x4427d7*/
              case 8: /*0x4427d7*/
                v37 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x442845*/
                if ( v37 ) /*0x44284c*/
                {
                  v62 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 3); /*0x44287b*/
                  v38 = (void **)(dword_8871E0->Easy[11] + 4); /*0x44288a*/
                  v59 = RandomCoordScatter(v82, &v75, v9, 96, 0); /*0x442894*/
                  v36 = AnimClass::ctor(v37, *v38, v59, 0, v62, (void *)0x600, 0, 0); /*0x442896*/
                  goto LABEL_76; /*0x442896*/
                }
                break; /*0x442896*/
              case 9: /*0x4427d7*/
                v39 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4428a2*/
                if ( v39 ) /*0x4428a9*/
                {
                  v40 = (void **)(dword_8871E0->Easy[11] + 8); /*0x4428d6*/
                  v60 = RandomCoordScatter(v84, &v75, v9, 96, 0); /*0x4428e0*/
                  v36 = AnimClass::ctor(v39, *v40, v60, 0, 1, (void *)0x600, 0, 0); /*0x4428e4*/
LABEL_76:
                  if ( v36 ) /*0x4428eb*/
                    BuildingClass::AimTurret((BuildingClass *)v36, this); /*0x4428f4*/
                }
                break; /*0x4428f9*/
              default:
                continue;
            }
          }
        }
        v1 = HIDWORD(v88); /*0x4428fe*/
        break; /*0x4428fe*/
      case 4: /*0x442476*/
        if ( this->bunkerLinkedUnit ) /*0x4424a2*/
        {
          v13 = ((int (__thiscall *)(void ***, int *))v67[4])(&v67, &this->bunkerLinkedUnit); /*0x4424bb*/
          if ( v13 != -1 && v13 < v71 && v13 < --v71 ) /*0x4424d2*/
          {
            do /*0x4424e6*/
            {
              ++v13; /*0x4424d8*/
              *((_DWORD *)Block + v13 - 1) = *((_DWORD *)Block + v13); /*0x4424dc*/
            }
            while ( v13 < v71 ); /*0x4424e6*/
          }
          BuildingClass::RemoveLimpet(this); /*0x4424ea*/
        }
        captureManager = (_DWORD *)this->captureManager; /*0x4424ef*/
        if ( captureManager ) /*0x4424f7*/
          CaptureManager::FreeAll(captureManager); /*0x4424f9*/
        if ( this->locomotorTarget ) /*0x4424fe*/
          TechnoClass::EjectPassengers(this, 1); /*0x44250c*/
        v15 = 0; /*0x442515*/
        if ( v71 > 0 ) /*0x442519*/
        {
          do /*0x4425fb*/
          {
            v16 = (_DWORD *)*((_DWORD *)Block + v15); /*0x442523*/
            v17 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v16 + 72))(v16, v85); /*0x442537*/
            v18 = (_DWORD *)(*(int (__thiscall **)(BuildingClass *, char *))(this->ptr_0 + 72))(this, v86); /*0x442543*/
            v19 = Coord::Subtract((Coord *)v83, *v18 - *v17, v18[1] - v17[1], v18[2] - v17[2]); /*0x442564*/
            v75 = *v19; /*0x44256b*/
            v76 = v19[1]; /*0x442576*/
            GroundHeight = v19[2]; /*0x44257d*/
            if ( (int)Coord::Length((Coord *)&v75) < 256 || *(_BYTE *)(this->Type + 5835) ) /*0x442593*/
            {
              v20 = (*(int (__thiscall **)(_DWORD *))(*v16 + 132))(v16); /*0x4425ba*/
              v21 = *v16; /*0x4425c6*/
              v73 = 10 * *(_DWORD *)(v20 + 160); /*0x4425d6*/
              (*(void (__thiscall **)(_DWORD *, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v21 + 364))( /*0x4425ee*/
                v16,
                &v73,
                0,
                *(_DWORD *)&dword_8871E0->__pad_C3C[876],
                0,
                1,
                1,
                0);
            }
            else
            {
              (*(void (__thiscall **)(BuildingClass *, int, _DWORD *))(this->ptr_0 + 632))(this, 23, v16); /*0x4425a4*/
              v16[320] = 0; /*0x4425aa*/
            }
            ++v15; /*0x4425f8*/
          }
          while ( v15 < v71 ); /*0x4425fb*/
          v1 = HIDWORD(v88); /*0x442601*/
        }
        v22 = v69; /*0x44260c*/
        ((void (__thiscall *)(void ***))v67[3])(&v67); /*0x442614*/
        ((void (__thiscall *)(void ***, int, _DWORD))v67[2])(&v67, v22, 0); /*0x442622*/
        if ( *(_BYTE *)(this->Type + 5499) ) /*0x44262b*/
          BuildingClass::UnloadUnits(this, 0, 0); /*0x44263b*/
        LightSource = this->LightSource; /*0x442640*/
        if ( LightSource ) /*0x442648*/
          MapClass::ScrollOnce(LightSource, 0); /*0x44264c*/
        (*(void (__thiscall **)(BuildingClass *, _DWORD, int, int *, int *))(this->ptr_0 + 1260))( /*0x442665*/
          this,
          0,
          v1,
          v89,
          Anims);
        v24 = this->C4Timer[0]; /*0x44266b*/
        v25 = this->C4Timer[2]; /*0x442671*/
        if ( v24 == -1 ) /*0x44267a*/
          goto LABEL_60; /*0x44267a*/
        if ( (int)dword_A8ED84 - v24 < v25 ) /*0x442686*/
        {
          v25 -= (int)dword_A8ED84 - v24; /*0x44268c*/
LABEL_60:
          if ( v25 > 0 ) /*0x442690*/
          {
            (*(void (__thiscall **)(BuildingClass *))(this->ptr_0 + 248))(this); /*0x44269a*/
            BuildingClass::AfterDestruction(this); /*0x4426a2*/
          }
        }
        break; /*0x4426a7*/
      case 5: /*0x442476*/
        v12 = Block; /*0x44247d*/
        v67 = &VectorClass<TechnoClass *>::`vftable'; /*0x442481*/
        if ( Block && BYTE1(v70) ) /*0x442497*/
          goto LABEL_126; /*0x442497*/
        return v74; /*0x442497*/
      default:
        break;
    }
  }
  if ( this->isAliveFlag[0] ) /*0x442905*/
  {
    if ( v1 ) /*0x442944*/
    {
      if ( !v74 ) /*0x442950*/
        goto LABEL_113; /*0x442950*/
      if ( !*(_BYTE *)(this->Type + 562) /*0x44296a*/
        && !(*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->ptr_0 + 128))(this) )
      {
        HouseClass::NotifyUnderAttack((HouseClass *)this->owner, this); /*0x44297b*/
      }
      this->OwnerCountryIndex = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v1 + 60))(v1) + 48); /*0x44298b*/
      if ( this->currentMission != 19 /*0x4429fa*/
        && !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, v1)
        && *(_DWORD *)(*(int (__thiscall **)(BuildingClass *, _DWORD))(this->ptr_0 + 1016))(this, 0)
        && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(BuildingClass *, _DWORD))(this->ptr_0 + 1016))(
                                                this,
                                                0)
                                 + 160)
                     + 676)
        && (!this->target
         || !(*(unsigned __int8 (__thiscall **)(BuildingClass *, int))(this->ptr_0 + 940))(this, this->target)) )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 44))(v1) == 2 /*0x442a2a*/
          || (unsigned __int8)House::IsCurrentPlayer((House *)this->owner)
          && !LOBYTE(dword_8871E0->ElevationBonusCap[0]) )
        {
          if ( !(unsigned __int8)TimerClass::Active((int)this->primaryFacing) /*0x442a56*/
            && (*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->ptr_0 + 848))(this) )
          {
            LOWORD(v73) = 0; /*0x442a66*/
            v41 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x442a73*/
            LOBYTE(v42) = 0; /*0x442a78*/
            HIBYTE(v42) = v41; /*0x442a7e*/
            v43 = v73; /*0x442a80*/
            BYTE1(v43) = 0; /*0x442a84*/
            Anims = (int *)(v43 | v42); /*0x442a8c*/
            FacingClass::Update((char *)this->primaryFacing, &Anims); /*0x442a90*/
          }
        }
        else
        {
          (*(void (__thiscall **)(BuildingClass *, int))(this->ptr_0 + 968))(this, v1); /*0x442a39*/
        }
      }
    }
    if ( v74 ) /*0x442a9b*/
    {
      BuildingClass::GetHealthRatio(this); /*0x442aa3*/
      _EDX = dword_8871E0; /*0x442aa8*/
      __asm /*0x442aae*/
      {
        fcomp qword ptr [edx+1700h]
        fnstsw ax
      }
      v46 = (_AX & 0x4100) != 0; /*0x442ab9*/
      if ( this->IsDamaged[0] != v46 ) /*0x442aca*/
      {
        v47 = 0; /*0x442ad2*/
        this->IsDamaged[0] = v46; /*0x442ad4*/
        v48 = 0; /*0x442ada*/
        Anims = this->Anims; /*0x442adc*/
        do /*0x442b35*/
        {
          if ( *Anims ) /*0x442ae4*/
          {
            if ( v46 ) /*0x442aeb*/
            {
              _EDX = (RulesClass *)this->Type; /*0x442aed*/
              v49 = (AnimTypeClass *)&_EDX->__pad_C3C[v48 + 800]; /*0x442af3*/
            }
            else
            {
              v49 = (AnimTypeClass *)(v48 + this->Type + 3916); /*0x442b02*/
            }
            if ( v49 && LOBYTE(v49->ptr_0) ) /*0x442b0d*/
              BuildingClass::PlayAnim(this, (int)_EDX, v49, v47, v46, 0, 0); /*0x442b1b*/
          }
          v48 += 68; /*0x442b24*/
          ++v47; /*0x442b27*/
          _EDX = (RulesClass *)++Anims; /*0x442b28*/
        }
        while ( v48 < 1428 ); /*0x442b35*/
      }
    }
LABEL_113:
    v50 = BuildingClass::GetProductionFrame(this); /*0x442b37*/
    if ( ProductionFrame != v50 ) /*0x442b42*/
    {
      this->needsRedraw[0] = 1; /*0x442b4a*/
      BuildingClass::GetHealthRatio(this); /*0x442b51*/
      _ECX = dword_8871E0; /*0x442b56*/
      __asm /*0x442b5c*/
      {
        fcomp qword ptr [ecx+1700h]
        fnstsw ax
      }
      v53 = (_AX & 0x4100) != 0; /*0x442b67*/
      if ( this->IsDamaged[0] != v53 ) /*0x442b78*/
      {
        v54 = this->Anims; /*0x442b7a*/
        v55 = 0; /*0x442b80*/
        this->IsDamaged[0] = v53; /*0x442b82*/
        v56 = 0; /*0x442b88*/
        Anims = this->Anims; /*0x442b8a*/
        do /*0x442be3*/
        {
          if ( *Anims ) /*0x442b92*/
          {
            if ( v53 ) /*0x442b99*/
            {
              v57 = (AnimTypeClass *)(v56 * 4 + this->Type + 3932); /*0x442ba1*/
            }
            else
            {
              v54 = (int *)this->Type; /*0x442baa*/
              v57 = (AnimTypeClass *)&v54[v56 + 979]; /*0x442bb0*/
            }
            if ( v57 && LOBYTE(v57->ptr_0) ) /*0x442bbb*/
              BuildingClass::PlayAnim(this, (int)v54, v57, v55, v53, 0, 0); /*0x442bc9*/
          }
          v56 += 17; /*0x442bd2*/
          ++v55; /*0x442bd5*/
          v54 = ++Anims; /*0x442bd6*/
        }
        while ( v56 < 357 ); /*0x442be3*/
      }
    }
    v12 = Block; /*0x442be5*/
    v67 = &VectorClass<TechnoClass *>::`vftable'; /*0x442be9*/
    if ( Block && BYTE1(v70) ) /*0x442bfb*/
LABEL_126:
      __3_YAXPAX_Z(v12); /*0x442bfd*/
    return v74; /*0x442bfe*/
  }
  v67 = &VectorClass<TechnoClass *>::`vftable'; /*0x442913*/
  if ( Block && BYTE1(v70) ) /*0x442925*/
    __3_YAXPAX_Z(Block); /*0x442928*/
  return 4; /*0x442396*/
}



// ==== 0x00442C40  BuildingClass::Update  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Update(BuildingClass *this)
{
  int v1; // edi
  BuildingClass *owner; // ecx
  BuildingTypeClass *Type; // eax
  int Strength; // ecx
  int InitialAmmo; // ecx
  HouseClass *v7; // eax
  BuildingTypeClass *v8; // eax
  int result; // eax
  TechnoClass *v10; // [esp+0h] [ebp-4h]

  TechnoClass::Update(v10, v1); /*0x442c43*/
  owner = (BuildingClass *)this->?; /*0x442c48*/
  if ( owner ) /*0x442c50*/
  {
    this->OwnerCountryIndex = owner->?[3].?; /*0x442c5c*/
    BuildingClass::PowerUpdate(owner, this); /*0x442c62*/
  }
  Type = this->Type; /*0x442c67*/
  if ( Type ) /*0x442c6f*/
  {
    Strength = Type->?; /*0x442c75*/
    this->? = Strength; /*0x442c7b*/
    this->? = Strength; /*0x442c7e*/
    InitialAmmo = Type->?; /*0x442c81*/
    if ( InitialAmmo == -1 ) /*0x442c8a*/
      InitialAmmo = Type->?; /*0x442c8c*/
    this->? = InitialAmmo; /*0x442c92*/
    BuildingTypeClass::GetPowerOutput((BuildingTypeClass *)this->?, Type->?); /*0x442ca5*/
    if ( (*((int (__thiscall **)(BuildingTypeClass *))this->Type->TechnoTypeClass + 48))(this->Type) ) /*0x442cb2*/
    {
      BuildingTypeClass::IsPowered(this->Type); /*0x442cca*/
      this->BuildingClass_field_bool_6E9 = 1; /*0x442ccf*/
    }
    else
    {
      this->BuildingClass_field_bool_6DC = 0; /*0x442cbc*/
    }
    v7 = this->?; /*0x442cd6*/
    if ( v7 ) /*0x442cde*/
    {
      if ( v7->warFactoryInfiltrated ) /*0x442ce0*/
      {
        v8 = this->Type; /*0x442cea*/
        if ( !v8->?[1] && v8->? && v8->?[0] ) /*0x442d04*/
          Power::ChangedHouse((Power *)this->?, 1); /*0x442d16*/
      }
    }
  }
  result = (int)this->Type; /*0x442d1b*/
  if ( result && *(_BYTE *)(result + 5808) ) /*0x442d25*/
  {
    result = (int)FootClass_Array.?; /*0x442d2f*/
    if ( *(int *)&FootClass_Array.? < (int)FootClass_Array.? /*0x442d6b*/
      || (BYTE1(FootClass_Array.?) || !FootClass_Array.?)
      && (int)FootClass_Array.? > 0
      && (result = (*(int (__thiscall **)(char *, char *, _DWORD))(*(_DWORD *)&FootClass_Array.? + 8))(
                     &FootClass_Array.?,
                     (char *)FootClass_Array.? + (unsigned int)FootClass_Array.?,
                     0),
          (_BYTE)result) )
    {
      result = (*(_DWORD *)&FootClass_Array.?)++; /*0x442d73*/
      *(_DWORD *)(*(_DWORD *)&FootClass_Array.? + 4 * result) = this; /*0x442d82*/
    }
  }
  return result; /*0x442d85*/
}



// ==== 0x00442D90  BuildingClass::EjectCrew  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::EjectCrew(BuildingClass *this, _BYTE *a2)
{
  double v2; // st7
  int v4; // edx
  int (__thiscall **ptr_0)(BuildingClass *, _DWORD); // eax
  _WORD *v6; // ebp
  InfantryClass *C4AppliedBy; // eax
  BuildingTypeClass *Type; // eax
  BuildingTypeClass *i; // esi
  _WORD *v10; // ecx
  __int16 v11; // ax
  CellClass *v12; // eax
  int *v13; // eax
  CellClass *v14; // eax
  int (__thiscall **v15)(BuildingClass *); // eax
  int v16; // eax
  int v17; // edx
  char NoCrew; // al
  _DWORD *Value; // eax
  void *v20; // edx
  _BYTE *v21; // eax
  _WORD *v22; // eax
  __int16 v23; // cx
  __int16 v24; // dx
  bool *v25; // eax
  HouseClass *owner; // edx
  int v27; // esi
  int v28; // ebp
  int v29; // eax
  CellClass *v30; // eax
  int *v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // eax
  int v36; // edx
  int *v37; // eax
  int v38; // kr08_4
  int v39; // eax
  int *v40; // eax
  int v41; // kr0C_4
  int v42; // eax
  __int16 v44[2]; // [esp+14h] [ebp-7Ch] BYREF
  int v45; // [esp+18h] [ebp-78h]
  int v46; // [esp+1Ch] [ebp-74h]
  int v47; // [esp+20h] [ebp-70h]
  int v48; // [esp+24h] [ebp-6Ch]
  _WORD *v49; // [esp+28h] [ebp-68h]
  bool *v50; // [esp+2Ch] [ebp-64h] BYREF
  int v51; // [esp+30h] [ebp-60h] BYREF
  int v52; // [esp+34h] [ebp-5Ch]
  int v53; // [esp+38h] [ebp-58h]
  int v54; // [esp+3Ch] [ebp-54h] BYREF
  int v55; // [esp+40h] [ebp-50h]
  int v56; // [esp+44h] [ebp-4Ch]
  int v57[3]; // [esp+48h] [ebp-48h] BYREF
  int v58[3]; // [esp+54h] [ebp-3Ch] BYREF
  _DWORD v59[3]; // [esp+60h] [ebp-30h] BYREF
  int v60[3]; // [esp+6Ch] [ebp-24h] BYREF
  int v61[3]; // [esp+78h] [ebp-18h] BYREF
  int v62[3]; // [esp+84h] [ebp-Ch] BYREF

  v4 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, bool **))this->TechnoClass + 110))(this, &v50); /*0x442da8*/
  ptr_0 = (int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass; /*0x442daa*/
  v45 = v4; /*0x442db1*/
  v6 = (_WORD *)ptr_0[66](this, 0); /*0x442dbb*/
  C4AppliedBy = this->C4AppliedBy; /*0x442dbd*/
  v46 = 2; /*0x442dc5*/
  if ( C4AppliedBy ) /*0x442dcd*/
    v46 = 1; /*0x442dcf*/
  if ( this->HasBeenCaptured ) /*0x442dd7*/
    v46 += 6; /*0x442ddf*/
  v47 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 180))(this); /*0x442dee*/
  Type = this->Type; /*0x442df2*/
  if ( Type->UnitAbsorb || Type->InfantryAbsorb )
  {
    Type = (BuildingTypeClass *)this->?[0]; /*0x442e0c*/
    if ( (int)Type > 0 )
    {
      Type = (BuildingTypeClass *)LinkedList::Pop((LinkedList *)this->?); /*0x442e20*/
      for ( i = Type; Type; i = Type )
      {
        v10 = v6; /*0x442e34*/
        v6 += 2; /*0x442e38*/
        v11 = *v10 + v45; /*0x442e3b*/
        LOWORD(v10) = HIWORD(v45) + v10[1]; /*0x442e42*/
        v53 = 0; /*0x442e47*/
        v51 = (v11 << 8) + 128; /*0x442e62*/
        v52 = ((__int16)v10 << 8) + 164; /*0x442e66*/
        if ( (*((int (__thiscall **)(BuildingTypeClass *))i->TechnoTypeClass + 11))(i) == 1 ) /*0x442e74*/
        {
          v12 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v51); /*0x442e80*/
          v13 = (int *)(*(int (__thiscall **)(CellClass *, _DWORD *))(v12->mapCoords[0] + 72))(v12, v59); /*0x442e8e*/
        }
        else
        {
          v14 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v51); /*0x442ebe*/
          v13 = ObjectPlacement::CalcPosition((ObjectPlacement *)v14, v58, &v51, 0, 0, 0); /*0x442ec5*/
        }
        v51 = *v13; /*0x442e93*/
        v52 = v13[1]; /*0x442e9a*/
        v53 = v13[2]; /*0x442ea1*/
        ++dword_A8E7AC; /*0x442eeb*/
        i->?[40] = this->?; /*0x442ef7*/
        v54 = this->?[0]; /*0x442eff*/
        v15 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x442f03*/
        v55 = this->?[1]; /*0x442f08*/
        v56 = this->?[2]; /*0x442f11*/
        v16 = v15[111](this); /*0x442f15*/
        v17 = *(_DWORD *)((*(int (__thiscall **)(int, int *))(*(_DWORD *)v16 + 72))(v16, v57) + 8); /*0x442f27*/
        NoCrew = this->NoCrew; /*0x442f2a*/
        v56 = v17; /*0x442f32*/
        if ( NoCrew
          || (Value = ProgressTimer::GetValue((ProgressTimer *)this->?, &v50),
              !(*((unsigned __int8 (__thiscall **)(BuildingTypeClass *, int *, _DWORD))i->TechnoTypeClass + 54))(
                 i,
                 &v54,
                 (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1))) )
        {
          if ( a2 )
            v21 = (a2[20] & 1) != 0 ? a2 : 0;
          else
            v21 = 0; /*0x442fd0*/
          (*((void (__thiscall **)(BuildingTypeClass *, _BYTE *))i->TechnoTypeClass + 56))(i, v21); /*0x442fe5*/
          (*((void (__thiscall **)(BuildingTypeClass *))i->TechnoTypeClass + 62))(i); /*0x442fef*/
        }
        else
        {
          if ( !LOBYTE(i->?[2]) ) /*0x442f6d*/
          {
            ++*(_DWORD *)(*(_DWORD *)&i->?[9] + 756); /*0x442f82*/
            LOBYTE(i->?[2]) = 1; /*0x442f88*/
          }
          v20 = i->TechnoTypeClass; /*0x442f8f*/
          BYTE1(i->?[2]) = 0; /*0x442f9b*/
          (*((void (__thiscall **)(BuildingTypeClass *, _DWORD *, int, _DWORD))v20 + 93))(i, &g_BuildingClassPool, 1, 0); /*0x442fa1*/
          if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x442fad*/
            (*((void (__thiscall **)(BuildingTypeClass *, int, _DWORD))i->TechnoTypeClass + 122))(i, 15, 0); /*0x442fbd*/
        }
        --dword_A8E7AC; /*0x442ffc*/
        Type = (BuildingTypeClass *)LinkedList::Pop((LinkedList *)this->?); /*0x443008*/
      }
    }
  }
  if ( v47 ) /*0x44301b*/
  {
    while ( *v6 != 0x7FFF || v6[1] != 0x7FFF ) /*0x44302f*/
    {
      v22 = v6; /*0x44303a*/
      v6 += 2; /*0x44303c*/
      v23 = *v22 + v45; /*0x44303f*/
      v24 = HIWORD(v45) + v22[1]; /*0x443046*/
      v49 = v6; /*0x44304b*/
      LOWORD(v48) = v23; /*0x44304f*/
      HIWORD(v48) = v24; /*0x443058*/
      *(_DWORD *)v44 = v48; /*0x443067*/
      v25 = (bool *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v44); /*0x44306b*/
      owner = this->?; /*0x443070*/
      v50 = v25; /*0x443076*/
      if ( !owner->isGameOver && v47 > 0 && Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v46) == 1 ) /*0x4430aa*/
      {
        v27 = 0; /*0x4430b4*/
        v28 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 195))(this); /*0x4430bc*/
        if ( v28 ) /*0x4430c0*/
        {
          v29 = __2_YAPAXI_Z(0x6F0u); /*0x4430c7*/
          if ( v29 ) /*0x4430d1*/
            v27 = InfantryClass::Construct(v29, v28, (IUnknown *)this->?); /*0x4430e2*/
          else
            v27 = 0; /*0x4430e6*/
        }
        Debug::Log(); /*0x443101*/
        if ( v27 ) /*0x44310b*/
        {
          if ( this->BuildingClass_field_bool_6E9 && *(_BYTE *)(*(_DWORD *)(v27 + 1728) + 3230) ) /*0x44311f*/
            *(_BYTE *)(v27 + 1753) = 1; /*0x443127*/
          ++dword_A8E7AC; /*0x443141*/
          v53 = 0; /*0x44315a*/
          v51 = (v44[0] << 8) + 128; /*0x44315e*/
          v52 = (v44[1] << 8) + 164; /*0x443166*/
          v30 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v51); /*0x44317b*/
          v31 = ObjectPlacement::CalcPosition((ObjectPlacement *)v30, v60, &v51, 0, 0, 0); /*0x443182*/
          v51 = *v31; /*0x443191*/
          v32 = v31[1]; /*0x443197*/
          v52 = v32; /*0x44319a*/
          v33 = v31[2]; /*0x44319e*/
          v53 = v33; /*0x4431a1*/
          if ( v51 == g_BuildingClassPool && v32 == dword_89C84C && v33 == dword_89C850 /*0x4431c5*/
            || !(*(unsigned __int8 (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v27 + 216))(v27, &v51, 0) )
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v27 + 32))(v27, 1); /*0x443285*/
          }
          else
          {
            Debug::Log(); /*0x4431d8*/
            v34 = *(_DWORD *)(*(_DWORD *)(v27 + 1728) + 160); /*0x4431eb*/
            --v47; /*0x4431f1*/
            v35 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 5, v34); /*0x443203*/
            v36 = *(_DWORD *)v27; /*0x443208*/
            *(_DWORD *)(v27 + 108) = v35; /*0x443214*/
            (*(void (__thiscall **)(int, _DWORD *, int, _DWORD))(v36 + 372))(v27, &g_BuildingClassPool, 1, 0); /*0x443217*/
            if ( !a2 || (unsigned __int8)Object::IsAlliedWithObjectSimpleHouse((Object *)this->?, a2) ) /*0x44322f*/
            {
              if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x443258*/
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v27 + 488))(v27, 2, 0); /*0x443268*/
              else
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v27 + 488))(v27, 15, 0); /*0x443277*/
            }
            else
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v27 + 488))(v27, 1, 0); /*0x44323f*/
              (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v27 + 968))(v27, a2); /*0x44324a*/
            }
          }
          --dword_A8E7AC; /*0x443288*/
        }
        v6 = v49; /*0x44328e*/
      }
      LOBYTE(Type) = Cell::IsBuildable(v50, 1, 1, 1, -1, 0, -1, 1); /*0x4432a3*/
      if ( (_BYTE)Type ) /*0x4432aa*/
      {
        if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 50 ) /*0x4432c7*/
        {
          v58[1] = (v44[1] << 8) + 128; /*0x44337d*/
          v58[0] = (v44[0] << 8) + 128; /*0x443392*/
          v58[2] = 0; /*0x443396*/
          v40 = RandomCoordScatter(v62, v58, v2, 128, 0); /*0x44339a*/
          v41 = *v40; /*0x4433af*/
          v42 = v40[1]; /*0x4433b1*/
          v59[2] = 0; /*0x4433bb*/
          v59[0] = ((__int16)(v41 / 256) << 8) + 128; /*0x4433dd*/
          v59[1] = ((__int16)(v42 / 256) << 8) + 128; /*0x4433eb*/
          LOBYTE(Type) = TimedCreateUnitAtCoords(v59, 100, 100, 0); /*0x4433ef*/
        }
        else
        {
          v54 = (v44[0] << 8) + 128; /*0x4432e4*/
          v55 = (v44[1] << 8) + 128; /*0x4432fa*/
          v56 = 0; /*0x4432fe*/
          v37 = RandomCoordScatter(v61, &v54, v2, 128, 0); /*0x443302*/
          v38 = *v37; /*0x443317*/
          v39 = v37[1]; /*0x443319*/
          v57[2] = 0; /*0x443323*/
          v57[0] = ((__int16)(v38 / 256) << 8) + 128; /*0x443347*/
          v57[1] = ((__int16)(v39 / 256) << 8) + 128; /*0x44334b*/
          LOBYTE(Type) = StandardCreateUnitAtCoords(v57, 100, 100, 0); /*0x443358*/
        }
      }
    }
  }
  return (char)Type; /*0x4433f9*/
}



// ==== 0x00443410  BuildingClass::HandleFactoryCommand  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::HandleFactoryCommand(BuildingClass *this)
{
  int result; // eax
  _BYTE *WaypointCoords; // eax
  int v4; // eax
  char *v5; // eax
  BuildingTypeClass *Type; // eax
  _BYTE *v7; // eax
  int v8; // eax
  _BYTE *v9; // eax
  _BYTE *v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // [esp-10h] [ebp-A8h]
  char v14; // [esp-Ch] [ebp-A4h]
  int v15; // [esp-8h] [ebp-A0h]
  int v16; // [esp-8h] [ebp-A0h]
  char v17; // [esp-4h] [ebp-9Ch]
  char v18; // [esp-4h] [ebp-9Ch]
  __int16 v19[4]; // [esp+Ch] [ebp-8Ch] BYREF
  int v20; // [esp+14h] [ebp-84h] BYREF
  _BYTE v21[12]; // [esp+1Ch] [ebp-7Ch] BYREF
  char v22[112]; // [esp+28h] [ebp-70h] BYREF
  int v23; // [esp+9Ch] [ebp+4h]
  _DWORD *v24; // [esp+A0h] [ebp+8h]

  result = v23; /*0x443410*/
  switch ( v23 ) /*0x443422*/
  {
    case 5: /*0x443422*/
      result = (int)v24; /*0x443424*/
      if ( v24 ) /*0x44342d*/
      {
        result = (*((int (__thiscall **)(BuildingClass *, int, _DWORD *, _DWORD, _DWORD))this->TechnoClass + 222))( /*0x44343c*/
                   this,
                   1,
                   v24,
                   0,
                   0);
        LOBYTE(result) = 1; /*0x443442*/
        return result; /*0x44344d*/
      }
      goto LABEL_25; /*0x44342d*/
    case 4: /*0x443422*/
      if ( this->Type->Factory[0] ) /*0x44345f*/
      {
        WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v19, this); /*0x443472*/
        v15 = *(_DWORD *)WaypointCoords; /*0x443483*/
        v17 = WaypointCoords[4]; /*0x443487*/
        v4 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 14))(this); /*0x44348c*/
        v5 = EventClass::Add(v22, v4, 0x11u, v15, v17); /*0x443494*/
        if ( (int)stru_A80220.lineTrailer < 128 ) /*0x4434a3*/
        {
          qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v5, 0x6Fu); /*0x4434bf*/
          dword_A83A54[dword_A802D0] = timeGetTime(); /*0x4434d0*/
          dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x4434e7*/
          ++stru_A80220.lineTrailer; /*0x4434ed*/
        }
      }
      if ( this->Type->? ) /*0x4434ff*/
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD *, _DWORD, _DWORD))this->TechnoClass + 222))( /*0x443514*/
          this,
          16,
          v24,
          0,
          0);
      Type = this->Type; /*0x44351a*/
      if ( Type->UnitAbsorb || Type->InfantryAbsorb ) /*0x44352a*/
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD *, _DWORD, _DWORD))this->TechnoClass + 222))( /*0x44353f*/
          this,
          16,
          v24,
          0,
          0);
      result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this); /*0x443549*/
      if ( result > 0 ) /*0x443551*/
      {
        result = (*((int (__thiscall **)(BuildingClass *, int, _DWORD *, _DWORD, _DWORD))this->TechnoClass + 222))( /*0x443562*/
                   this,
                   16,
                   v24,
                   0,
                   0);
        LOBYTE(result) = 1; /*0x443568*/
        return result; /*0x443573*/
      }
      goto LABEL_25; /*0x443551*/
    case 55: /*0x443422*/
      v7 = ScriptAction::GetWaypointCoords((ScriptAction *)v19, this); /*0x443584*/
      result = (int)EventClass::Add(v22, *(_DWORD *)(this->?->BombClass_field_28 + 48), 0xAu, *(_DWORD *)v7, v7[4]); /*0x4435a8*/
      break;
    case 1: /*0x443422*/
      v8 = this->Type->Factory[0]; /*0x443627*/
      if ( v8 == 16 || v8 == 40 || v8 == 3 ) /*0x44363a*/
      {
        v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v24 + 72))(v24, v21); /*0x44369b*/
        LOWORD(v20) = *v12 / 256; /*0x4436b0*/
        HIWORD(v20) = v12[1] / 256; /*0x4436c9*/
        *(_DWORD *)v19 = v20; /*0x4436d4*/
        BuildingClass::SetRallyPoint((int)this, v19, 1); /*0x4436d8*/
        goto LABEL_25; /*0x4436d8*/
      }
      v9 = ScriptAction::GetWaypointCoords((ScriptAction *)v19, v24); /*0x443648*/
      v16 = *(_DWORD *)v9; /*0x443658*/
      v18 = v9[4]; /*0x44365e*/
      v10 = ScriptAction::GetWaypointCoords((ScriptAction *)&v20, this); /*0x443661*/
      v13 = *(_DWORD *)v10; /*0x443672*/
      v14 = v10[4]; /*0x443676*/
      v11 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 14))(this); /*0x44367b*/
      result = (int)ScenarioClass::SetEvent(v22, v11, 30, v13, v14, v16, v18); /*0x443683*/
      break;
    default:
      goto LABEL_25; /*0x44361b*/
  }
  if ( (int)stru_A80220.lineTrailer < 128 ) /*0x4435b7*/
  {
    qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, (const void *)result, 0x6Fu); /*0x4435d7*/
    dword_A83A54[dword_A802D0] = timeGetTime(); /*0x4435e8*/
    result = (int)++stru_A80220.lineTrailer; /*0x4435fe*/
    dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x443604*/
    LOBYTE(result) = 1; /*0x44360a*/
    return result; /*0x443615*/
  }
LABEL_25:
  LOBYTE(result) = 1; /*0x4436dd*/
  return result; /*0x443444*/
}



// ==== 0x004436F0  ObjectClass::HandleRallyPointCommand  this=BuildingClass  sig=csp ====
int __thiscall ObjectClass::HandleRallyPointCommand(TechnoClass *this)
{
  int result; // eax
  int ptr_0; // edi
  void *v4; // eax
  char v5; // bl
  _BYTE *WaypointCoords; // eax
  int v7; // eax
  int v8; // [esp-8h] [ebp-8Ch]
  char v9; // [esp-4h] [ebp-88h]
  char v10[8]; // [esp+Ch] [ebp-78h] BYREF
  char v11[112]; // [esp+14h] [ebp-70h] BYREF
  int v12; // [esp+88h] [ebp+4h]
  __int16 *v13; // [esp+8Ch] [ebp+8h]

  result = v12; /*0x4436f0*/
  if ( v12 == 5 ) /*0x4436ff*/
  {
    ptr_0 = this->ptr_0; /*0x443708*/
    v4 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v13); /*0x443714*/
    result = (*(int (__thiscall **)(TechnoClass *, int, void *, _DWORD, _DWORD))(ptr_0 + 888))(this, 1, v4, 0, 0); /*0x44371e*/
    LOBYTE(result) = 1; /*0x443724*/
  }
  else
  {
    if ( v12 == 6 || v12 == 1 ) /*0x443737*/
    {
      v5 = 0; /*0x443743*/
      if ( !*(_BYTE *)(this->gattlingValue + 5817) /*0x443770*/
        || (unsigned __int8)House::IsCurrentPlayer((House *)this->owner)
        && *(_DWORD *)&dword_A8B238
        && (_BYTE)dword_A8B320
        && !this->mindControlledBy )
      {
        if ( *(_DWORD *)(this->gattlingValue + 1032) /*0x443792*/
          || (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->ptr_0 + 644))(this) )
        {
          BuildingClass::SetRallyPoint((int)this, v13, 1); /*0x4437a8*/
        }
      }
      else
      {
        v5 = 1; /*0x44377a*/
      }
      result = *(_DWORD *)(this->gattlingValue + 1032); /*0x4437b3*/
      if ( result && !v5 ) /*0x4437c3*/
      {
        WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v10, this); /*0x4437ce*/
        v8 = *(_DWORD *)WaypointCoords; /*0x4437df*/
        v9 = WaypointCoords[4]; /*0x4437e3*/
        v7 = (*(int (__thiscall **)(TechnoClass *))(this->ptr_0 + 56))(this); /*0x4437e8*/
        result = (int)EventClass::Add(v11, v7, 0x16u, v8, v9); /*0x4437f0*/
        if ( *(int *)&dword_A802C8 < 128 ) /*0x4437ff*/
        {
          qmemcpy(&byte_A802D4[111 * dword_A802D0], (const void *)result, 0x6Fu); /*0x44381b*/
          dword_A83A54[dword_A802D0] = timeGetTime(); /*0x44382c*/
          result = *(_DWORD *)&dword_A802C8 + 1; /*0x443842*/
          dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x443843*/
          ++*(_DWORD *)&dword_A802C8; /*0x443849*/
        }
      }
    }
    LOBYTE(result) = 1; /*0x443850*/
  }
  return result; /*0x443726*/
}



// ==== 0x00443860  BuildingClass::SetRallyPoint  this=TechnoClass  sig=csp ====
void __thiscall BuildingClass::SetRallyPoint(int this, __int16 *a2, char a3)
{
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  char v7; // di
  int v8; // eax
  int v9; // ecx
  int TileIndex; // eax
  _DWORD *v11; // eax
  _BYTE *WaypointCoords; // eax
  _BYTE *v13; // eax
  int v14; // eax
  char *v15; // eax
  int v16; // ebp
  _DWORD *v17; // eax
  CellClass *v18; // eax
  _BYTE *v19; // eax
  _BYTE *v20; // eax
  int v21; // eax
  char *v22; // eax
  int v23; // [esp-10h] [ebp-B4h]
  int v24; // [esp-10h] [ebp-B4h]
  char v25; // [esp-Ch] [ebp-B0h]
  char v26; // [esp-Ch] [ebp-B0h]
  int v27; // [esp-8h] [ebp-ACh]
  int v28; // [esp-8h] [ebp-ACh]
  char v29; // [esp-4h] [ebp-A8h]
  char v30; // [esp-4h] [ebp-A8h]
  __int16 v31[4]; // [esp+10h] [ebp-94h] BYREF
  char v32[8]; // [esp+18h] [ebp-8Ch] BYREF
  int v33; // [esp+20h] [ebp-84h]
  __int16 v34[2]; // [esp+24h] [ebp-80h] BYREF
  _BYTE v35[8]; // [esp+28h] [ebp-7Ch] BYREF
  int v36; // [esp+30h] [ebp-74h]
  char v37[112]; // [esp+34h] [ebp-70h] BYREF

  v33 = 0; /*0x44387b*/
  v4 = 0; /*0x44387f*/
  v5 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2) + 80); /*0x443886*/
  v6 = *(_DWORD *)(this + 1312); /*0x44388c*/
  v32[0] = BYTE1(v5) & 1; /*0x443898*/
  if ( *(_DWORD *)(v6 + 3768) == 3 ) /*0x4438a5*/
  {
    v33 = 4; /*0x4438a7*/
    v4 = 9; /*0x4438af*/
  }
  if ( *(_BYTE *)(v6 + 3278) ) /*0x4438b4*/
  {
    v33 = 6; /*0x4438bc*/
    v4 = 4; /*0x4438c4*/
  }
  v7 = v32[0]; /*0x4438cf*/
  v8 = *(_DWORD *)(this + 156); /*0x4438d5*/
  v9 = *(_DWORD *)(this + 160); /*0x4438d7*/
  v36 = *(_DWORD *)(this + 164); /*0x4438dd*/
  v31[0] = v8 / 256; /*0x4438ed*/
  v31[1] = v9 / 256; /*0x443905*/
  TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v31, v4, v32[0]); /*0x443917*/
  v31[0] = 0; /*0x44391d*/
  v31[1] = 0; /*0x443922*/
  *(_DWORD *)v34 = *LayerClass::Pathfinding_Find( /*0x443965*/
                      &stru_87F5F0.__pad_58[416],
                      v33,
                      v32,
                      a2,
                      v33,
                      TileIndex,
                      v4,
                      v7,
                      1,
                      1,
                      0,
                      0,
                      0,
                      1,
                      v31,
                      0,
                      0);
  if ( *(_DWORD *)v34 != g_TerrainTypeTable ) /*0x443969*/
  {
    v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v34); /*0x443987*/
    WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v32, v11); /*0x443991*/
    v27 = *(_DWORD *)WaypointCoords; /*0x4439a1*/
    v29 = WaypointCoords[4]; /*0x4439a3*/
    v13 = ScriptAction::GetWaypointCoords((ScriptAction *)v31, (_DWORD *)this); /*0x4439aa*/
    v23 = *(_DWORD *)v13; /*0x4439bb*/
    v25 = v13[4]; /*0x4439c0*/
    v14 = (*(int (__thiscall **)(int))(this->attachedBomb)(this); /*0x4439c5*/
    v15 = ScenarioClass::SetEvent(v37, v14, 30, v23, v25, v27, v29); /*0x4439cd*/
    if ( (int)stru_A80220.lineTrailer < 128 ) /*0x4439dc*/
    {
      qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v15, 0x6Fu); /*0x4439f8*/
      dword_A83A54[dword_A802D0] = timeGetTime(); /*0x443a09*/
      dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x443a20*/
      ++stru_A80220.lineTrailer; /*0x443a26*/
    }
    goto LABEL_8; /*0x443a26*/
  }
  if ( !*(_BYTE *)(*(_DWORD *)(this + 1312) + 5817) /*0x443ab0*/
    || !(unsigned __int8)House::IsCurrentPlayer(*(House **)(this + 540))
    || !*(_DWORD *)&dword_A8B238
    || !dword_A8B320
    || *(_DWORD *)(this + 704) )
  {
LABEL_8:
    if ( a3 ) /*0x443a34*/
    {
      if ( (unsigned __int8)House::IsHumanPlayer(*(House **)(this + 540)) ) /*0x443a3c*/
      {
        v16 = *(_DWORD *)(this + 1312); /*0x443a45*/
        if ( !*(_BYTE *)(v16 + 5817) && !*(_BYTE *)(v16 + 1517) ) /*0x443a55*/
          VoxClass::FindAndPlay((VoxClass *)&stru_818E00.?[27], -1); /*0x443a69*/
      }
    }
    return; /*0x443a69*/
  }
  v17 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(this->u32_48)(this, v35); /*0x443ac8*/
  v18 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v17); /*0x443ad1*/
  v19 = ScriptAction::GetWaypointCoords((ScriptAction *)v32, v18); /*0x443adb*/
  v28 = *(_DWORD *)v19; /*0x443aeb*/
  v30 = v19[4]; /*0x443aed*/
  v20 = ScriptAction::GetWaypointCoords((ScriptAction *)v31, (_DWORD *)this); /*0x443af4*/
  v24 = *(_DWORD *)v20; /*0x443b05*/
  v26 = v20[4]; /*0x443b0a*/
  v21 = (*(int (__thiscall **)(int))(this->attachedBomb)(this); /*0x443b0f*/
  v22 = ScenarioClass::SetEvent(v37, v21, 30, v24, v26, v28, v30); /*0x443b17*/
  if ( (int)stru_A80220.lineTrailer < 128 ) /*0x443b26*/
  {
    qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v22, 0x6Fu); /*0x443b46*/
    dword_A83A54[dword_A802D0] = timeGetTime(); /*0x443b5a*/
    dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x443b71*/
    ++stru_A80220.lineTrailer; /*0x443b77*/
  }
}



// ==== 0x00443B90  BuildingClass::AssignTarget_SyncLog  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::AssignTarget_SyncLog(BuildingClass *this)
{
  int v2; // edi
  int result; // eax
  int v4; // [esp+Ch] [ebp+4h]

  if ( this->? == 19 || !(*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 212))(this) ) /*0x443b9f*/
  {
    v2 = 0; /*0x443ba9*/
    return TechnoClass::AssignTarget_SyncLog((TechnoClass *)this, v2); /*0x443bae*/
  }
  v2 = v4; /*0x443bb8*/
  if ( !v4 /*0x443bf4*/
    || !*(_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 254))(this, 0)
    || *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 254))(
                                           this,
                                           0)
                            + 160)
                + 676)
    || (*((unsigned __int8 (__thiscall **)(BuildingClass *, int))this->TechnoClass + 235))(this, v4) )
  {
    return TechnoClass::AssignTarget_SyncLog((TechnoClass *)this, v2); /*0x443bfc*/
  }
  TechnoClass::AssignTarget_SyncLog((TechnoClass *)this, 0); /*0x443c02*/
  result = (int)this->Type; /*0x443c07*/
  if ( *(_BYTE *)(result + 5828) || *(_BYTE *)(result + 5834) ) /*0x443c17*/
  {
    result = House::IsCurrentPlayer((House *)this->?); /*0x443c27*/
    if ( !(_BYTE)result ) /*0x443c2e*/
    {
      result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 223))(this); /*0x443c34*/
      if ( !(_BYTE)result ) /*0x443c3c*/
      {
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 19, 0); /*0x443c4a*/
        return (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 123))(this); /*0x443c54*/
      }
    }
  }
  return result; /*0x443bb3*/
}



// ==== 0x00443C60  BuildingClass::UpdateConstruction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateConstruction(BuildingClass *this)
{
  double v1; // st7
  int v3; // eax
  ObjectClass *v4; // ebp
  unsigned int v5; // eax
  HouseClass *v6; // edx
  __int16 v7; // di
  int (__thiscall **v8)(BuildingClass *, char *); // edx
  _DWORD *v9; // eax
  Random *p_NeedsSaveOrLink; // ecx
  __int16 v11; // ax
  void *v12; // eax
  AbstractClass *v13; // eax
  void (__thiscall **v14)(ObjectClass *, void *, int); // esi
  void *v15; // eax
  int *PlacementCellsAlt; // eax
  unsigned __int8 (__thiscall **v17)(ObjectClass *, int *, int); // esi
  int Field9; // eax
  unsigned __int8 (__thiscall **v19)(ObjectClass *, int); // edi
  int v20; // eax
  int v21; // eax
  void (__thiscall **v22)(ObjectClass *, int); // edi
  int v23; // eax
  AbstractClass *v24; // esi
  BuildingTypeClass *Type; // eax
  int result; // eax
  BuildingTypeClass *v27; // eax
  int v28; // eax
  BuildingTypeClass *v29; // eax
  _DWORD *v30; // eax
  AbstractClass *focus; // ecx
  _DWORD... [50556 chars total]



// ==== 0x004456D0  BuildingClass::UpdateSidebar  this=BuildingClass  sig=csp ====
int __thiscall FootClass::UpdateSidebar(BuildingClass *this)
{
  int result; // eax
  int j; // esi
  int m; // esi
  int k; // esi
  int i; // esi

  result = (int)this->?; /*0x4456d0*/
  if ( (Object *)result == dword_A83D4C ) /*0x4456df*/
  {
    LOBYTE(result) = this->?; /*0x4456e5*/
    if ( !(_BYTE)result ) /*0x4456ed*/
    {
      LOBYTE(result) = this->?; /*0x4456f3*/
      if ( (_BYTE)result ) /*0x4456fb*/
      {
        LOBYTE(result) = this->HasPower; /*0x445701*/
        if ( (_BYTE)result ) /*0x445709*/
        {
          result = this->Type->Factory[0] - 3; /*0x44571b*/
          switch ( this->Type->Factory[0] ) /*0x44572f*/
          {
            case 3: /*0x44572f*/
              result = dword_A8B228; /*0x445800*/
              for ( i = 0; i < dword_A8B228; ++i ) /*0x445809*/
              {
                if ( HouseClass::CanBuild((HouseClass *)dword_A83D4C, *((_DWORD *)dword_A8B21C + i), 0, 1) ) /*0x44581e*/
                  SidebarClass::AddCameo((SidebarClass *)&stru_87F5F0.__pad_58[416], 3, i); /*0x44582f*/
                result = dword_A8B228; /*0x445834*/
              }
              break; /*0x44583c*/
            case 7: /*0x44572f*/
              result = dword_A83C78; /*0x445736*/
              for ( j = 0; j < dword_A83C78; ++j ) /*0x44573f*/
              {
                if ( HouseClass::CanBuild((HouseClass *)dword_A83D4C, *((_DWORD *)dword_A83C6C + j), 0, 1) ) /*0x445758*/
                  SidebarClass::AddCameo((SidebarClass *)&stru_87F5F0.__pad_58[416], 7, j); /*0x445769*/
                result = dword_A83C78; /*0x44576e*/
              }
              break; /*0x445776*/
            case 0x10: /*0x44572f*/
              result = dword_A8E358; /*0x4457bf*/
              for ( k = 0; k < dword_A8E358; ++k ) /*0x4457c8*/
              {
                if ( HouseClass::CanBuild((HouseClass *)dword_A83D4C, *((_DWORD *)dword_A8E34C + k), 0, 1) ) /*0x4457de*/
                  SidebarClass::AddCameo((SidebarClass *)&stru_87F5F0.__pad_58[416], 16, k); /*0x4457ef*/
                result = dword_A8E358; /*0x4457f4*/
              }
              break; /*0x4457fc*/
            case 0x28: /*0x44572f*/
              result = dword_A83CF0; /*0x44577a*/
              for ( m = 0; m < dword_A83CF0; ++m ) /*0x445783*/
              {
                if ( HouseClass::CanBuild((HouseClass *)dword_A83D4C, *((_DWORD *)dword_A83CE4 + m), 0, 1) ) /*0x44579d*/
                  SidebarClass::AddCameo((SidebarClass *)&stru_87F5F0.__pad_58[416], 40, m); /*0x4457ae*/
                result = dword_A83CF0; /*0x4457b3*/
              }
              break; /*0x4457bb*/
            default:
              return result;
          }
        }
      }
    }
  }
  return result; /*0x445778*/
}



// ==== 0x00445880  BuildingClass::Sell  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Sell(BuildingClass *this)
{
  int *location; // edx
  int v3; // eax
  int v4; // ecx
  int *DamageFireAnims; // edi
  int v6; // ebp
  int owner; // eax
  int Type; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int *Upgrades; // ecx
  char v17; // bl
  RulesClass *v18; // eax
  int i; // ebp
  int v20; // edx
  BuildingClass *v21; // edi
  int v22; // eax
  int v23; // ecx
  int v24; // kr08_4
  BuildingClass *v25; // eax
  BuildingClass *v26; // eax
  int v27; // ecx
  __int16 v28; // di
  __int16 v29; // bp
  BuildingClass *v30; // eax
  BuildingClass *v31; // eax
  BuildingTypeClass *v32; // ecx
  int FoundationWidth; // ebp
  int FoundationHeight; // edi
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // ebp
  int v39; // edi
  __int16 v40; // bx
  _BYTE *v41; // eax
  int *v42; // eax
  int Spotlight; // ecx
  int v44; // edx
  int v45; // eax
  int v46; // ecx
  int result; // eax
  char v48; // [esp+13h] [ebp-2Dh]
  int v49; // [esp+14h] [ebp-2Ch]
  int v50; // [esp+14h] [ebp-2Ch]
  int v51; // [esp+14h] [ebp-2Ch]
  int v52; // [esp+14h] [ebp-2Ch]
  __int16 v53[2]; // [esp+18h] [ebp-28h] BYREF
  __int16 v54[2]; // [esp+1Ch] [ebp-24h] BYREF
  int v55; // [esp+20h] [ebp-20h] BYREF
  __int16 v56; // [esp+28h] [ebp-18h]
  __int16 v57; // [esp+2Ah] [ebp-16h]
  _DWORD v58[4]; // [esp+30h] [ebp-10h] BYREF

  v48 = 0; /*0x445889*/
  location = this->location; /*0x445894*/
  v3 = this->location[0]; /*0x445896*/
  v4 = this->location[1]; /*0x445898*/
  v58[2] = location[2]; /*0x44589e*/
  LOWORD(v55) = v3 / 256; /*0x4458ae*/
  HIWORD(v55) = v4 / 256; /*0x4458c1*/
  if ( !this->inLimbo[0] && this->Type ) /*0x4458d4*/
  {
    DamageFireAnims = this->DamageFireAnims; /*0x4458e4*/
    v6 = 8; /*0x4458ea*/
    do /*0x445903*/
    {
      if ( *DamageFireAnims ) /*0x4458ef*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)*DamageFireAnims + 248))(*DamageFireAnims); /*0x4458f7*/
        *DamageFireAnims = 0; /*0x4458fd*/
      }
      ++DamageFireAnims; /*0x4458ff*/
      --v6; /*0x445902*/
    }
    while ( v6 ); /*0x445903*/
    if ( *(_BYTE *)(this->Type + 5836) ) /*0x44590b*/
    {
      if ( this->ActuallyPlacedOnMap[0] ) /*0x445915*/
      {
        --*(_DWORD *)(this->owner + 21388); /*0x44592c*/
        owner = this->owner; /*0x445932*/
        if ( *(int *)(owner + 21388) < 0 ) /*0x44593e*/
          *(_DWORD *)(owner + 21388) = 0; /*0x445940*/
      }
    }
    Type = this->Type; /*0x445946*/
    if ( *(_BYTE *)(Type + 5835) ) /*0x44594c*/
    {
      if ( this->ActuallyPlacedOnMap[0] ) /*0x445956*/
      {
        *(_DWORD *)(this->owner + 724) -= *(_DWORD *)(Type + 6016); /*0x445974*/
        v9 = this->owner; /*0x44597a*/
        if ( *(int *)(v9 + 724) < 0 ) /*0x445986*/
          *(_DWORD *)(v9 + 724) = 0; /*0x445988*/
      }
    }
    v10 = *(_DWORD *)(this->Type + 5476); /*0x445994*/
    if ( v10 ) /*0x44599c*/
    {
      if ( this->ActuallyPlacedOnMap[0] ) /*0x44599e*/
      {
        *(_DWORD *)(this->owner + 356) -= v10; /*0x4459b6*/
        v11 = this->owner; /*0x4459bc*/
        if ( *(int *)(v11 + 356) < 0 ) /*0x4459c8*/
          *(_DWORD *)(v11 + 356) = 0; /*0x4459ca*/
      }
    }
    v12 = *(_DWORD *)(this->Type + 5480); /*0x4459d6*/
    if ( v12 ) /*0x4459de*/
    {
      if ( this->ActuallyPlacedOnMap[0] ) /*0x4459e0*/
      {
        *(_DWORD *)(this->owner + 360) -= v12; /*0x4459f8*/
        v13 = this->owner; /*0x4459fe*/
        if ( *(int *)(v13 + 360) < 0 ) /*0x445a0a*/
          *(_DWORD *)(v13 + 360) = 0; /*0x445a0c*/
      }
    }
    if ( *(_BYTE *)(this->Type + 5822) ) /*0x445a18*/
      BuildingClass::DemolishBridgeCheck(this, 0); /*0x445a25*/
    if ( !dword_A8E7AC ) /*0x445a30*/
    {
      if ( *(_BYTE *)(this->Type + 5832) ) /*0x445a38*/
        (*(void (__thiscall **)(BuildingClass *, int))(this->ptr_0 + 1272))(this, g_TerrainTypeTable); /*0x445a4c*/
      if ( *(_BYTE *)(this->Type + 3377) ) /*0x445a58*/
        (*(void (__thiscall **)(BuildingClass *, int))(this->ptr_0 + 1280))(this, g_TerrainTypeTable); /*0x445a6c*/
      v14 = this->Type; /*0x445a72*/
      if ( (!*(_DWORD *)(v14 + 1032) || !*(_BYTE *)(v14 + 1516)) /*0x445a8e*/
        && !(*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->ptr_0 + 128))(this) )
      {
        RecalculateBuildingFoundation(this); /*0x445a9a*/
      }
    }
    v15 = 0; /*0x445a9f*/
    Upgrades = this->Upgrades; /*0x445aa1*/
    while ( !*Upgrades || !*(_BYTE *)(*Upgrades + 5987) ) /*0x445ab4*/
    {
      ++v15; /*0x445ab6*/
      ++Upgrades; /*0x445ab7*/
      if ( v15 >= 3 ) /*0x445abd*/
        goto LABEL_40; /*0x445abd*/
    }
    v48 = 1; /*0x445ac1*/
LABEL_40:
    if ( !byte_A8E9A0 ) /*0x445acd*/
    {
      v17 = 1; /*0x445acf*/
      goto LABEL_75; /*0x445ad1*/
    }
    v18 = dword_8871E0; /*0x445ad6*/
    if ( this->Type == dword_8871E0->NukeDown ) /*0x445ae7*/
    {
      for ( i = 0; i < 8; i += 2 ) /*0x445aed*/
      {
        v20 = i & 7; /*0x445af3*/
        LOWORD(v49) = v55 + LOWORD(dword_89F688[v20]); /*0x445b13*/
        HIWORD(v49) = HIWORD(v55) + HIWORD(dword_89F688[v20]); /*0x445b1c*/
        *(_DWORD *)v53 = v49; /*0x445b2b*/
        v21 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v53); /*0x445b34*/
        BuildingClass::ValidatePlacement(v21, 0); /*0x445b3a*/
        v22 = v21->ambientSoundController[2]; /*0x445b3f*/
        if ( v22 != -1 && *(_BYTE *)(*(&dword_A83D84->ptr_0 + v22) + 680) && BYTE2(v21->transporter) < 0x10u ) /*0x445b60*/
          BuildingClass::SellEffects((int)v21, 200); /*0x445b69*/
      }
      v18 = dword_8871E0; /*0x445b7a*/
    }
    v23 = this->Type; /*0x445b81*/
    if ( v23 == v18->FlameDamage || v23 == v18->NukeWarhead ) /*0x445b97*/
    {
      v24 = v55; /*0x445b9d*/
      HIWORD(v50) = HIWORD(v55); /*0x445ba2*/
      LOWORD(v50) = v55 - 1; /*0x445baf*/
      *(_DWORD *)v53 = v50; /*0x445bbe*/
      v25 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v53); /*0x445bc2*/
      BuildingClass::ValidatePlacement(v25, 0); /*0x445bc9*/
      HIWORD(v50) = HIWORD(v24); /*0x445bd1*/
      LOWORD(v50) = v24 + 3; /*0x445bd6*/
      *(_DWORD *)v53 = v50; /*0x445be3*/
      v26 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v53); /*0x445bee*/
      BuildingClass::ValidatePlacement(v26, 0); /*0x445bf5*/
      v18 = dword_8871E0; /*0x445bfa*/
    }
    v27 = this->Type; /*0x445bff*/
    if ( v27 == v18->FlameDamage2 || v27 == v18->NukeProjectile ) /*0x445c15*/
    {
      v28 = HIWORD(v55); /*0x445c17*/
      v29 = v55; /*0x445c1b*/
      *(_DWORD *)v53 = v55 - 0x10000; /*0x445c36*/
      v30 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v53); /*0x445c40*/
      BuildingClass::ValidatePlacement(v30, 0); /*0x445c47*/
      LOWORD(v51) = v29; /*0x445c53*/
      HIWORD(v51) = v28 + 3; /*0x445c58*/
      *(_DWORD *)v53 = v51; /*0x445c68*/
      v31 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v53); /*0x445c6c*/
      BuildingClass::ValidatePlacement(v31, 0); /*0x445c73*/
    }
    v32 = (BuildingTypeClass *)this->Type; /*0x445c78*/
    if ( !v32->ToTile ) /*0x445c7e*/
    {
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(v32); /*0x445c97*/
      FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0); /*0x445ca0*/
      v35 = *(_DWORD *)(*(int (__thiscall **)(BuildingClass *, int *))(this->ptr_0 + 440))(this, &v55); /*0x445caf*/
      v36 = 0; /*0x445cb1*/
      v58[0] = v35; /*0x445cb3*/
      v37 = FoundationHeight + 2; /*0x445cb7*/
      *(_DWORD *)v53 = 0; /*0x445cbc*/
      v55 = FoundationHeight + 2; /*0x445cc0*/
      if ( FoundationHeight + 2 > 0 ) /*0x445cc4*/
      {
        v38 = FoundationWidth + 2; /*0x445cc6*/
        do /*0x445d33*/
        {
          v39 = 0; /*0x445cc9*/
          if ( v38 > 0 ) /*0x445ccd*/
          {
            v56 = LOWORD(v58[0]) - 1; /*0x445cd9*/
            v57 = HIWORD(v58[0]) - 1; /*0x445cde*/
            v40 = LOWORD(v58[0]) - 1; /*0x445ce7*/
            HIWORD(v52) = v36 + HIWORD(v58[0]) - 1; /*0x445ced*/
            do /*0x445d22*/
            {
              LOWORD(v52) = v40 + v39; /*0x445cf9*/
              *(_DWORD *)v54 = v52; /*0x445d02*/
              v41 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v54); /*0x445d0c*/
              ++v39; /*0x445d19*/
              --v41[290]; /*0x445d1c*/
            }
            while ( v39 < v38 ); /*0x445d22*/
            v37 = v55; /*0x445d24*/
            v36 = *(_DWORD *)v53; /*0x445d28*/
          }
          *(_DWORD *)v53 = ++v36; /*0x445d2f*/
        }
        while ( v36 < v37 ); /*0x445d33*/
      }
    }
    if ( g_TacticalClass_Instance ) /*0x445d3d*/
    {
      v42 = (int *)(*(int (__thiscall **)(BuildingClass *, _DWORD *))(this->ptr_0 + 300))(this, v58); /*0x445d49*/
      Cell::CreateCrater(*v42, v42[1], v42[2], v42[3], 0); /*0x445d70*/
    }
    Spotlight = this->Spotlight; /*0x445d75*/
    if ( Spotlight ) /*0x445d7d*/
      (*(void (__thiscall **)(int))(*(_DWORD *)Spotlight + 248))(Spotlight); /*0x445d81*/
    BuildingClass::DecrementTypeCounter((BuildingClass *)this->owner, this); /*0x445d8e*/
    *(_BYTE *)(this->owner + 508) = 1; /*0x445d99*/
    BuildingClass::CalcExitCoords((BuildingClass *)this->owner); /*0x445da6*/
    if ( (Object *)this->owner == dword_A83D4C ) /*0x445db8*/
    {
      byte_880CF4 = 1; /*0x445dc0*/
      MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 0); /*0x445dc7*/
    }
    HouseClass::RecordCratePlacement((HouseClass *)this->owner, this); /*0x445dd3*/
  }
  v17 = TechnoClass::CleanupDeploy(this); /*0x445ddf*/
  if ( v48 ) /*0x445de7*/
    HouseClass::AcquiredThreatNode((HouseClass *)this->owner); /*0x445def*/
  v45 = this->Type; /*0x445df4*/
  v46 = *(_DWORD *)(v45 + 3768); /*0x445dfa*/
  if ( v46 ) /*0x445e02*/
  {
    LOBYTE(v44) = *(_BYTE *)(v45 + 3278); /*0x445e04*/
    HouseClass::UpdateProduction(this->owner, v46, v44, 0); /*0x445e14*/
  }
LABEL_75:
  result = this->Type; /*0x445e19*/
  if ( *(_BYTE *)(result + 5822) ) /*0x445e1f*/
  {
    result = dword_A8E7AC; /*0x445e29*/
    if ( !dword_A8E7AC ) /*0x445e30*/
      this->LaserFenceFrame = 0; /*0x445e32*/
  }
  LOBYTE(result) = v17; /*0x445e3e*/
  return result; /*0x445e3c*/
}



// ==== 0x00445E50  BuildingClass::GetFacingToTarget  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetFacingToTarget(BuildingClass *this)
{
  double v1; // st7
  AbstractClass *target; // ecx
  int *v4; // edi
  int *v5; // eax
  int v7; // ecx
  int v8; // [esp+20h] [ebp-20h]
  int v9; // [esp+24h] [ebp-1Ch] BYREF
  char v10[12]; // [esp+28h] [ebp-18h] BYREF
  char v11[12]; // [esp+34h] [ebp-Ch] BYREF
  int *v12; // [esp+44h] [ebp+4h]

  if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 255))(this) || (target = this->?) == 0 ) /*0x445e6a*/
  {
    v7 = *ProgressTimer::GetValue((ProgressTimer *)this->?, &v9); /*0x445eec*/
    *v12 = v7; /*0x445ef3*/
    return (int)v12; /*0x445eee*/
  }
  else
  {
    v4 = (int *)(*((int (__thiscall **)(AbstractClass *, char *))target->ptr_0 + 18))(target, v10); /*0x445e79*/
    v5 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v11); /*0x445e82*/
    v8 = *v4; /*0x445e89*/
    v9 = *v5; /*0x445e8d*/
    Math::CalcAngle((double)v5[1] - (double)v4[1], (double)v8 - (double)v9); /*0x445eac*/
    LOWORD(v9) = Math::RoundToInt((v1 - 1.570796326794897) * -10430.06004058427); /*0x445ec5*/
    *v12 = v9; /*0x445ed3*/
    return (int)v12; /*0x445eca*/
  }
}



// ==== 0x00445F00  BuildingClass::SelectTargetTypeFlags  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SelectTargetTypeFlags(BuildingClass *this)
{
  Building **v2; // eax
  int v3; // edi
  int v4; // edx
  Building **v5; // eax
  int v7; // [esp+Ch] [ebp+4h]
  int v8; // [esp+10h] [ebp+8h]
  char v9; // [esp+14h] [ebp+Ch]

  if ( *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 254))(this, 0) ) /*0x445f0e*/
  {
    v2 = (Building **)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 254))(this, 0); /*0x445f19*/
    v3 = Building::GetRenderType(*v2) | v7; /*0x445f2a*/
  }
  else
  {
    v3 = v7; /*0x445f2e*/
  }
  if ( *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 254))(this, 1) ) /*0x445f3e*/
  {
    v5 = (Building **)(*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 254))(this, 1); /*0x445f49*/
    v3 |= Building::GetRenderType(*v5); /*0x445f56*/
  }
  return (int)TechnoClass::SelectAutoTarget_Start_AU((TechnoClass *)this, v4, v3 | 1, v8, v9); /*0x445f6d*/
}



// ==== 0x00445F80  BuildingClass::CreateUnits  this=BuildingClass  sig=csp ====
int __thiscall SuperWeapon::CreateUnits(BuildingClass *this)
{
  int result; // eax
  double v2; // st7
  BuildingTypeClass *Type; // esi
  int ProduceCashDelay; // ecx
  int v6; // eax
  int v7; // eax
  int v10; // ecx
  char *v11; // eax
  int v12; // edx
  int v14; // ecx
  char *v15; // eax
  int v16; // edx
  int v19; // ecx
  char *v20; // eax
  int v23; // ecx
  char *v24; // eax
  BOOL v26; // ebx
  bool v27; // al
  int v28; // edx
  char *v29; // eax
  bool v30; // zf
  BuildingTypeClass *v31; // eax
  BOOL v34; // ebx
  bool v35; // al
  int v36; // edx
  char *v37; // eax
  BuildingTypeClass *v38; // eax
  int v41; // ecx
  char *v42; // eax
  int v43; // edx
  int v45; // ecx
  char *v46; // eax
  int InfantryGainSelfHeal; // ecx
  int UnitsGainSelfHeal; // ecx
  BuildingTypeClass *v51; // ecx
  HouseClass *owner; // eax
  int i; // esi
  _DWORD *v54; // eax
  int v55; // ecx
  int v56; // eax
  BOOL v59; // ebx
  bool v60; // al
  int v61; // edx
  char *v62; // eax
  Bu... [31054 chars total]



// ==== 0x00446FF0  BuildingClass::ToggleRepairMode  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ToggleRepairMode(BuildingClass *this)
{
  int result; // eax
  int v3; // edi
  HouseClass *owner; // ecx
  int *location; // esi
  _DWORD v6[3]; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+18h] [ebp+4h]

  result = v7; /*0x446ff0*/
  if ( v7 == -1 ) /*0x446ffe*/
  {
    this->IsBeingRepaired = this->IsBeingRepaired == 0; /*0x447042*/
  }
  else if ( v7 ) /*0x447002*/
  {
    if ( v7 == 1 ) /*0x447007*/
    {
      LOBYTE(result) = this->IsBeingRepaired; /*0x447009*/
      if ( (_BYTE)result ) /*0x447011*/
        return result; /*0x447011*/
      this->IsBeingRepaired = 1; /*0x447017*/
    }
  }
  else
  {
    result = (unsigned __int8)this->IsBeingRepaired; /*0x447020*/
    if ( !(_BYTE)result ) /*0x447028*/
      return result; /*0x447028*/
    this->IsBeingRepaired = 0; /*0x44702e*/
  }
  if ( this->IsBeingRepaired ) /*0x447048*/
  {
    if ( this->? == this->Type->? ) /*0x447061*/
    {
      v3 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1792); /*0x447068*/
    }
    else
    {
      v3 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1804); /*0x447076*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x447082*/
        (*((void (__thiscall **)(BuildingClass *, int))this->TechnoClass + 82))(this, 7); /*0x447091*/
      owner = this->?; /*0x447097*/
      this->NeedsRepairs = 1; /*0x44709d*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)owner) ) /*0x4470a4*/
        VoxClass::FindAndPlay((VoxClass *)&stru_818E00.?[5], -1); /*0x4470b7*/
    }
  }
  else
  {
    v3 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1804); /*0x4470c3*/
  }
  result = House::IsHumanPlayer((House *)this->?); /*0x4470cf*/
  if ( (_BYTE)result ) /*0x4470d6*/
  {
    location = this->?; /*0x4470d8*/
    v6[0] = *location; /*0x4470e2*/
    v6[1] = location[1]; /*0x4470eb*/
    v6[2] = location[2]; /*0x4470f6*/
    return (int)StartAudioControllerAt(v3, v6, 0); /*0x4470fa*/
  }
  return result; /*0x4470ff*/
}



// ==== 0x00447110  BuildingClass::ToggleSellMode  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ToggleSellMode(BuildingClass *this)
{
  int result; // eax
  BuildingTypeClass *Type; // ecx
  int v4; // [esp+8h] [ebp+4h]

  if ( this->BuildingClass_field_bool_6E9 ) /*0x447113*/
  {
    if ( v4 == -1 ) /*0x447128*/
    {
      if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 19 ) /*0x44717b*/
        goto LABEL_12; /*0x44717b*/
      goto LABEL_11; /*0x44717b*/
    }
    if ( !v4 ) /*0x44712c*/
    {
      result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this); /*0x447158*/
      if ( result != 19 ) /*0x447161*/
        return result; /*0x447161*/
      goto LABEL_12; /*0x447161*/
    }
    if ( v4 != 1 ) /*0x447131*/
    {
LABEL_12:
      result = House::IsHumanPlayer((House *)this->?); /*0x447195*/
      if ( (_BYTE)result ) /*0x4471a2*/
        return PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1804), 0x2000, 1.0, 0); /*0x4471bc*/
      return result; /*0x4471c2*/
    }
    result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this); /*0x447135*/
    if ( result != 19 ) /*0x44713e*/
    {
      LOBYTE(result) = this->C4Applied; /*0x447144*/
      if ( !(_BYTE)result ) /*0x44714c*/
      {
LABEL_11:
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 19, 0); /*0x44717d*/
        (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 123))(this); /*0x44718f*/
        goto LABEL_12; /*0x44718f*/
      }
    }
  }
  else
  {
    Type = this->Type; /*0x4471c5*/
    LOBYTE(result) = Type->FirestormWall; /*0x4471cb*/
    if ( (_BYTE)result ) /*0x4471d3*/
    {
      (*((void (__thiscall **)(BuildingTypeClass *, HouseClass *))Type->TechnoTypeClass + 33))(Type, this->?); /*0x4471de*/
      House::IsCurrentPlayer((House *)this->?); /*0x4471ea*/
      (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 53))(this); /*0x4471f3*/
      return (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 62))(this); /*0x4471fd*/
    }
  }
  return result; /*0x4471c1*/
}



// ==== 0x00447210  BuildingClass::HandleClickEvent  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::HandleClickEvent(BuildingClass *this)
{
  int result; // eax
  _BYTE *v3; // ebp
  int v4; // ebx
  BuildingTypeClass *Type; // eax
  int *p_arrayIndex; // edi
  int v7; // ebx
  int v8; // eax
  _DWORD *v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  unsigned __int8 (__thiscall **ptr_0)(BuildingClass *, _DWORD *); // eax
  _DWORD v14[3]; // [esp+Ch] [ebp-Ch] BYREF
  _BYTE *v15; // [esp+1Ch] [ebp+4h]
  _BYTE *v16; // [esp+1Ch] [ebp+4h]
  _BYTE *v17; // [esp+20h] [ebp+8h] BYREF

  if ( this->Type->InvisibleInGame ) /*0x44721e*/
    return 0; /*0x447230*/
  v3 = v15; /*0x447233*/
  if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v15 + 44))(v15) == 6 && *(_BYTE *)(*((_DWORD *)v15 + 328) + 5889) ) /*0x44724a*/
    return 0; /*0x44725c*/
  result = TechnoClass::HandleCursorClick((TechnoClass *)this, v15, (char)v17); /*0x447267*/
  v4 = result; /*0x44726c*/
  if ( result != 8 ) /*0x447271*/
  {
    if ( result == 4 ) /*0x447280*/
    {
      Type = this->Type; /*0x447286*/
      if ( !Type->? || dword_A83D4C != (Object *)this->? ) /*0x4472a8*/
      {
        if ( (!Type->UnitAbsorb && !Type->InfantryAbsorb || this->?[0] <= 0) /*0x447346*/
          && (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) <= 0 )
        {
          if ( !this->Type->Factory[0] ) /*0x44734e*/
            return 0; /*0x447363*/
          goto LABEL_13; /*0x447356*/
        }
LABEL_12:
        v4 = 4; /*0x4472e7*/
LABEL_13:
        if ( this->Type->Factory[0] && this->? ) /*0x447300*/
          return 0; /*0x447319*/
        return v4; /*0x447308*/
      }
      if ( this->? ) /*0x4472aa*/
        goto LABEL_12; /*0x4472aa*/
      p_arrayIndex = &this->?->arrayIndex; /*0x4472c4*/
      v7 = (*(int (__stdcall **)(int *))(*p_arrayIndex + 36))(p_arrayIndex); /*0x4472cb*/
      if ( (*(int (__stdcall **)(int *))(*p_arrayIndex + 32))(p_arrayIndex) - v7 > this->Type->ExtraPowerDrain ) /*0x4472e1*/
        goto LABEL_12; /*0x4472e1*/
      return 0; /*0x4473c4*/
    }
    if ( result == 5 ) /*0x447369*/
    {
      if ( !*(_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 254))(this, 0) ) /*0x44737a*/
        goto LABEL_45; /*0x44737a*/
      if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 254))( /*0x4473a4*/
                                                this,
                                                0)
                                 + 160)
                     + 677)
        || this->Type->EMPulseCannon )
      {
        v4 = 0; /*0x4473ae*/
      }
      if ( this->? == 19 ) /*0x4473b7*/
        return 0; /*0x4473b7*/
    }
    if ( v4 == 1 || v4 == 2 ) /*0x4473cf*/
    {
      if ( !(*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 40))(this) ) /*0x4473d9*/
        return 7; /*0x4473f1*/
      v8 = this->Type->Factory[0]; /*0x4473fa*/
      if ( v8 == 16 || v8 == 40 || v8 == 3 ) /*0x44740d*/
      {
        if ( !(unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[20]) /*0x447434*/
          && !(unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[24]) )
        {
          return 7; /*0x44744b*/
        }
        v9 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v15 + 72))(v15, v14); /*0x44745b*/
        v10 = *v9 / 256; /*0x447476*/
        v11 = v9[1] / 256; /*0x447479*/
        LOWORD(v16) = v10; /*0x44747c*/
        HIWORD(v16) = v11; /*0x447481*/
        v17 = v16; /*0x44748a*/
        if ( this->Type->Factory[0] != 3 ) /*0x44749b*/
        {
          v12 = (__int16)v11; /*0x4474a3*/
          ptr_0 = (unsigned __int8 (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass; /*0x4474a6*/
          v14[0] = ((__int16)v10 << 8) + 128; /*0x4474ae*/
          v14[1] = (v12 << 8) + 128; /*0x4474c2*/
          v14[2] = 0; /*0x4474c6*/
          if ( !ptr_0[179](this, v14) ) /*0x4474ce*/
            v4 = 2; /*0x4474d8*/
          if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v17) + 80) & 0x100) == 0 /*0x447506*/
            && *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v17) + 19) )
          {
            return 2; /*0x44750b*/
          }
        }
      }
    }
    if ( v4 != 5 ) /*0x447510*/
      return v4; /*0x44752e*/
LABEL_45:
    if ( *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 136))(v3) + 563) ) /*0x44751d*/
      return 2; /*0x447527*/
    return v4; /*0x447525*/
  }
  return result; /*0x447228*/
}



// ==== 0x00447540  BuildingClass::HandleRepairCursor  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::HandleRepairCursor(BuildingClass *this)
{
  BuildingTypeClass *Type; // eax
  __int16 *v4; // edi
  int v5; // ebx
  void *v6; // eax
  _DWORD *v7; // eax
  BuildingTypeClass *v8; // eax
  int v9; // ecx
  int v10; // edx
  unsigned __int8 (__thiscall **ptr_0)(BuildingClass *, _DWORD *); // eax
  _DWORD v12[3]; // [esp+Ch] [ebp-Ch] BYREF
  __int16 *v13; // [esp+1Ch] [ebp+4h]
  char v14; // [esp+20h] [ebp+8h]
  char v15; // [esp+24h] [ebp+Ch]

  Type = this->Type; /*0x447548*/
  if ( Type->InvisibleInGame ) /*0x44754e*/
    return 0; /*0x447560*/
  if ( Type->?[0] && v14 ) /*0x447577*/
  {
    v4 = v13; /*0x44757d*/
    v5 = TechnoClass::HandleCursor((TechnoClass *)this, v13, 0, v15); /*0x447592*/
    v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x447594*/
    v7 = (_DWORD *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v6 + 72))(v6, v12); /*0x4475a2*/
    if ( !(unsigned __int8)Cell::IsPassable(v7) ) /*0x4475ab*/
    {
      if ( v5 == 1 ) /*0x4475b7*/
      {
        if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13) + 59) == 5 ) /*0x4475cb*/
        {
          v8 = this->Type; /*0x4475cd*/
          if ( v8->? ) /*0x4475d3*/
          {
            if ( v8->? ) /*0x4475dd*/
              return 6; /*0x4475f2*/
          }
        }
        goto LABEL_14; /*0x4475e5*/
      }
LABEL_13:
      if ( v5 != 2 ) /*0x447611*/
        goto LABEL_27; /*0x447611*/
      goto LABEL_14; /*0x447611*/
    }
  }
  else
  {
    v4 = v13; /*0x4475f9*/
    v5 = TechnoClass::HandleCursor((TechnoClass *)this, v13, v14, v15); /*0x447607*/
  }
  if ( v5 != 1 ) /*0x44760c*/
    goto LABEL_13; /*0x44760c*/
LABEL_14:
  if ( !(*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 40))(this) && v5 == 1 ) /*0x447628*/
  {
    v5 = 0; /*0x44762a*/
    goto LABEL_35; /*0x44762c*/
  }
  if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 161))(this) ) /*0x447635*/
  {
    if ( !(unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[20]) /*0x447664*/
      && !(unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[24]) )
    {
      v5 = 0; /*0x44766d*/
      goto LABEL_35; /*0x44766f*/
    }
    if ( this->Type->Factory[0] != 3 ) /*0x447681*/
    {
      v9 = *v4; /*0x447683*/
      v10 = v4[1]; /*0x447686*/
      ptr_0 = (unsigned __int8 (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass; /*0x44768a*/
      v12[2] = 0; /*0x44768c*/
      v12[0] = (v9 << 8) + 128; /*0x44769d*/
      v12[1] = (v10 << 8) + 128; /*0x4476b1*/
      if ( !ptr_0[179](this, v12) ) /*0x4476b5*/
        v5 = 2; /*0x4476bf*/
      if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v4) + 80) & 0x100) == 0 /*0x4476e5*/
        && *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v4) + 19) )
      {
        v5 = 2; /*0x4476ec*/
        goto LABEL_35; /*0x4476f1*/
      }
    }
  }
LABEL_27:
  if ( v5 != 5 ) /*0x4476f6*/
    goto LABEL_35; /*0x4476f6*/
  if ( *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 254))(this, 0) ) /*0x447704*/
  {
    if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 254))( /*0x44772d*/
                                              this,
                                              0)
                               + 160)
                   + 677)
      || this->Type->EMPulseCannon )
    {
      v5 = 0; /*0x447737*/
    }
    if ( this->? == 19 ) /*0x447740*/
    {
      v5 = 0; /*0x447742*/
      goto LABEL_35; /*0x447744*/
    }
    if ( v5 != 5 ) /*0x447749*/
    {
LABEL_35:
      if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 161))(this) ) /*0x44774f*/
      {
        if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x44775f*/
          return 1; /*0x447768*/
      }
    }
  }
  return v5; /*0x447558*/
}



// ==== 0x00447780  BuildingClass::StartProduction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::StartProduction(BuildingClass *this, int a2)
{
  int result; // eax
  int v4; // edi
  int BuildingClass_field_int_534; // ecx
  BuildingTypeClass *Type; // ecx
  int *v7; // ebp
  BOOL v10; // ebx
  bool v11; // al
  int v12; // edx
  char *v13; // eax
  bool v14; // zf
  BuildingTypeClass *v15; // eax
  BOOL v18; // ebx
  bool v19; // al
  int v20; // edx
  char *v21; // eax
  BuildingTypeClass *v22; // eax
  BOOL v25; // ebx
  bool v26; // al
  int v27; // edx
  char *v28; // eax
  BuildingTypeClass *v29; // eax
  BOOL v32; // ebx
  bool v33; // al
  int v34; // edx
  char *v35; // eax
  BuildingTypeClass *v36; // eax
  BOOL v39; // ebx
  bool v40; // al
  int v41; // edx
  char *v42; // eax
  BuildingTypeClass *v43; // eax
  int v44; // ecx
  int v45; // [esp+Ch] [ebp-8h]

  result = -1; /*0x447783*/
  v4 = a2; /*0x44778a*/
  BuildingClass_field_int_534 = this->BuildingClass_field_int_534; /*0x44778e*/
  this->BuildingClass_field_int_538 = a2; /*0x447794*/
  if ( BuildingClass_field_int_534 == -1 || !a2 || dword_A8E7AC )
  {
    Type = this->Type; /*0x4477b0*/
    this->BuildingClass_field_int_538 = -1; /*0x4477b6*/
    this->BuildingClass_field_int_534 = a2; /*0x4477c1*/
    v7 = &Type->BuildingAnimFrame[3 * a2]; /*0x4477c7*/
    if ( dword_A8E7AC )
    {
      BuildingClass::GetHealthRatio(this); /*0x4477dd*/
      _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4477e2*/
      __asm /*0x4477e8*/
      {
        fcomp qword ptr [edx+1700h]
        fnstsw ax
      }
      v10 = (_AX & 0x4100) != 0; /*0x4477f3*/
      v11 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0; /*0x44780a*/
      LOBYTE(a2) = v11; /*0x44780f*/
      if ( v10 ) /*0x447813*/
      {
        v13 = &this->Type->__pad_F70[1204]; /*0x44781b*/
      }
      else
      {
        v14 = !v11; /*0x447822*/
        v15 = this->Type; /*0x447824*/
        if ( v14 ) /*0x44782a*/
          v13 = &v15->__pad_F70[1188]; /*0x447833*/
        else
          v13 = &v15->__pad_F70[1220]; /*0x44782c*/
      }
      if ( v13 && *v13 ) /*0x44783c*/
        BuildingClass::PlayAnim(this, v12, v13, 18, v10, a2, 0); /*0x44784e*/
      if ( dword_A8E7AC )
      {
        BuildingClass::GetHealthRatio(this); /*0x447862*/
        _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x447867*/
        __asm /*0x44786d*/
        {
          fcomp qword ptr [edx+1700h]
          fnstsw ax
        }
        v18 = (_AX & 0x4100) != 0; /*0x447878*/
        v19 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0; /*0x44788f*/
        LOBYTE(a2) = v19; /*0x447894*/
        if ( v18 ) /*0x447898*/
        {
          v21 = &this->Type->__pad_F70[184]; /*0x4478a0*/
        }
        else
        {
          v14 = !v19; /*0x4478a7*/
          v22 = this->Type; /*0x4478a9*/
          if ( v14 ) /*0x4478af*/
            v21 = &v22->__pad_F70[168]; /*0x4478b8*/
          else
            v21 = &v22->__pad_F70[200]; /*0x4478b1*/
        }
        if ( v21 && *v21 ) /*0x4478c1*/
          BuildingClass::PlayAnim(this, v20, v21, 3, v18, a2, 0); /*0x4478d3*/
        if ( dword_A8E7AC )
        {
          BuildingClass::GetHealthRatio(this); /*0x4478e7*/
          _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4478ec*/
          __asm /*0x4478f2*/
          {
            fcomp qword ptr [edx+1700h]
            fnstsw ax
          }
          v25 = (_AX & 0x4100) != 0; /*0x4478fd*/
          v26 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0; /*0x447914*/
          LOBYTE(a2) = v26; /*0x447919*/
          if ( v25 ) /*0x44791d*/
          {
            v28 = &this->Type->__pad_F70[252]; /*0x447925*/
          }
          else
          {
            v14 = !v26; /*0x44792c*/
            v29 = this->Type; /*0x44792e*/
            if ( v14 ) /*0x447934*/
              v28 = &v29->__pad_F70[236]; /*0x44793d*/
            else
              v28 = &v29->__pad_F70[268]; /*0x447936*/
          }
          if ( v28 && *v28 ) /*0x447946*/
            BuildingClass::PlayAnim(this, v27, v28, 4, v25, a2, 0); /*0x447958*/
          if ( dword_A8E7AC )
          {
            BuildingClass::GetHealthRatio(this); /*0x44796c*/
            _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x447971*/
            __asm /*0x447977*/
            {
              fcomp qword ptr [edx+1700h]
              fnstsw ax
            }
            v32 = (_AX & 0x4100) != 0; /*0x447982*/
            v33 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0; /*0x447999*/
            LOBYTE(a2) = v33; /*0x44799e*/
            if ( v32 ) /*0x4479a2*/
            {
              v35 = &this->Type->__pad_F70[320]; /*0x4479aa*/
            }
            else
            {
              v14 = !v33; /*0x4479b1*/
              v36 = this->Type; /*0x4479b3*/
              if ( v14 ) /*0x4479b9*/
                v35 = &v36->__pad_F70[304]; /*0x4479c2*/
              else
                v35 = &v36->__pad_F70[336]; /*0x4479bb*/
            }
            if ( v35 && *v35 ) /*0x4479cb*/
              BuildingClass::PlayAnim(this, v34, v35, 5, v32, a2, 0); /*0x4479dd*/
            if ( dword_A8E7AC )
            {
              BuildingClass::GetHealthRatio(this); /*0x4479ed*/
              _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4479f2*/
              __asm /*0x4479f8*/
              {
                fcomp qword ptr [edx+1700h]
                fnstsw ax
              }
              v39 = (_AX & 0x4100) != 0; /*0x447a03*/
              v40 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0; /*0x447a1a*/
              LOBYTE(a2) = v40; /*0x447a1f*/
              if ( v39 )
              {
                v42 = &this->Type->__pad_F70[388]; /*0x447a2b*/
              }
              else
              {
                v14 = !v40; /*0x447a32*/
                v43 = this->Type; /*0x447a34*/
                v42 = v14 ? &v43->__pad_F70[372] : &v43->__pad_F70[404];
              }
              if ( v42 && *v42 ) /*0x447a4c*/
                BuildingClass::PlayAnim(this, v41, v42, 6, v39, a2, 0); /*0x447a5e*/
            }
          }
        }
      }
    }
    result = v7[2]; /*0x447a69*/
    if ( HIBYTE(this->Type->?) ) /*0x447a6c*/
    {
      if ( v4 ) /*0x447a78*/
        result = (int)Rules::GetProductionTimeMult((Rules *)&stru_A8EB00.ObjectTypeClass[24], v7[2]); /*0x447a80*/
    }
    v44 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x447a85*/
    this->?[5] = result; /*0x447a91*/
    this->?[2] = v44; /*0x447a97*/
    this->?[3] = v45; /*0x447a9d*/
    this->?[4] = result; /*0x447aa0*/
    this->?[0] = *v7; /*0x447aa7*/
  }
  return result; /*0x447aae*/
}



// ==== 0x00447AC0  BuildingClass::GetExitCoords  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetExitCoords(BuildingClass *this)
{
  BuildingClass *v1; // edi
  int v2; // esi
  int FoundationWidth; // eax
  int v4; // ecx
  void *ptr_4; // edx
  void *ptr_8; // edi
  int *v8; // [esp+Ch] [ebp+4h]

  v1 = this; /*0x447ac2*/
  v2 = (BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) << 7) - 128; /*0x447adc*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(v1->Type); /*0x447ae2*/
  v1 = (BuildingClass *)((char *)v1 + 156); /*0x447ae7*/
  v4 = (int)v1->TechnoClass + 128 * FoundationWidth - 128; /*0x447af7*/
  ptr_4 = v1->?; /*0x447afd*/
  ptr_8 = v1->?; /*0x447b04*/
  *v8 = v4; /*0x447b07*/
  v8[1] = (int)ptr_4 + v2; /*0x447b09*/
  v8[2] = (int)ptr_8; /*0x447b0c*/
  return (int)v8; /*0x447b0f*/
}



// ==== 0x00447B20  BuildingClass::CalculateTurretAngle  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CalculateTurretAngle(BuildingClass *this)
{
  double v1; // st7
  BuildingTypeClass *Type; // eax
  _WORD *v4; // eax
  __int16 v5; // dx
  int v6; // eax
  int v7; // ecx
  int *location; // esi
  int v9; // edx
  _DWORD *Coords_Alt; // eax
  int v12; // edx
  int v13; // ecx
  int *v14; // edi
  int *v15; // eax
  int v16; // ecx
  int v17; // eax
  int *v18; // edx
  int v19; // edx
  int LinkIndex; // eax
  BuildingTypeClass *v21; // ecx
  int *v22; // edi
  int *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // edi
  int v29; // edx
  int v30; // esi
  int (__thiscall **ptr_0)(BuildingClass *, _BYTE *); // edx
  char *v32; // eax
  int *v33; // ecx
  _DWORD v34[3]; // [esp+24h] [ebp-30h] BYREF
  char v35[12]; // [esp+30h] [ebp-24h] BYREF
  char v36[12]; // [esp+3Ch] [ebp-18h] BYREF
  char v37; // [esp+48h] [ebp-Ch] BYREF
  int *v38; // [esp+58h] [ebp+4h]
  int v39; // [esp+5Ch] [ebp+8h] BYREF

  Type = this->Type; /*0x447b27*/
  if ( Type->Weeder ) /*0x447b2d*/
  {
    v4 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 110))(this, &v39); /*0x447b40*/
    v5 = v4[1] + 1; /*0x447b51*/
    v6 = ((__int16)(*v4 + 2) << 8) + 128; /*0x447b5f*/
    v7 = (v5 << 8) + 128; /*0x447b64*/
    location = this->?; /*0x447b6c*/
    v34[2] = 0; /*0x447b72*/
    v34[0] = *location; /*0x447b78*/
    v34[1] = location[1]; /*0x447b7f*/
    v9 = location[2]; /*0x447b83*/
    *v38 = v6; /*0x447b8c*/
    v38[1] = v7; /*0x447b90*/
    v38[2] = v9; /*0x447b93*/
    return (int)v38; /*0x447b9b*/
  }
  if ( Type->Refinery ) /*0x447b9e*/
  {
    Coords_Alt = (_DWORD *)ObjectClass::GetCoords_Alt((IUnknown *)this); /*0x447bb4*/
    v12 = Coords_Alt[1]; /*0x447bbb*/
    v13 = *Coords_Alt + 128; /*0x447bbe*/
LABEL_15:
    v17 = Coords_Alt[2]; /*0x447ce1*/
    *v38 = v13; /*0x447cea*/
    v38[1] = v12; /*0x447cec*/
    v38[2] = v17; /*0x447cef*/
    return (int)v38; /*0x447cf9*/
  }
  if ( Type->Bunker && v39 ) /*0x447bdd*/
  {
    v14 = (int *)(*(int (__stdcall **)(_DWORD *))(*(_DWORD *)v39 + 72))(v34); /*0x447bef*/
    v15 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v35); /*0x447bf8*/
    v16 = *v15; /*0x447bfd*/
    v39 = *v14; /*0x447bff*/
    Math::CalcAngle((double)v15[1] - (double)v14[1], (double)v39 - (double)v16); /*0x447c22*/
    LOWORD(v39) = Math::RoundToInt((v1 - 1.570796326794897) * -10430.06004058427); /*0x447c3b*/
    if ( (unsigned __int8)((((unsigned int)v39 >> 7) + 1) >> 1) >= 0x40u ) /*0x447c54*/
    {
      if ( (unsigned __int8)((((unsigned int)v39 >> 7) + 1) >> 1) < 0x80u ) /*0x447c76*/
      {
        Coords_Alt = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v35); /*0x447c81*/
        v13 = *Coords_Alt + 128; /*0x447c89*/
        v12 = Coords_Alt[1] + 128; /*0x447c8f*/
        goto LABEL_15; /*0x447c95*/
      }
      if ( (unsigned __int8)((((unsigned int)v39 >> 7) + 1) >> 1) < 0xC0u ) /*0x447ca3*/
      {
        Coords_Alt = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v35); /*0x447cae*/
        v13 = *Coords_Alt - 128; /*0x447cb6*/
        v12 = Coords_Alt[1] + 128; /*0x447cbc*/
        goto LABEL_15; /*0x447cc2*/
      }
      Coords_Alt = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v35); /*0x447ccd*/
      v13 = *Coords_Alt - 128; /*0x447cd2*/
    }
    else
    {
      Coords_Alt = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v35); /*0x447c5f*/
      v13 = *Coords_Alt + 128; /*0x447c64*/
    }
    v12 = Coords_Alt[1] - 128; /*0x447cdb*/
    goto LABEL_15; /*0x447cdb*/
  }
  if ( !Type->Helipad && !Type->UnitRepair ) /*0x447d06*/
  {
    v18 = (int *)ObjectClass::GetCoords_Alt((IUnknown *)this); /*0x447d1d*/
    *v38 = *v18; /*0x447d28*/
    v38[1] = v18[1]; /*0x447d2d*/
    v38[2] = v18[2]; /*0x447d34*/
    return (int)v38; /*0x447d3a*/
  }
  v19 = *(_DWORD *)&Type->__pad_1714[108]; /*0x447d3d*/
  if ( v19 ) /*0x447d46*/
  {
    if ( v19 == 1 ) /*0x447d4d*/
    {
      v22 = *(int **)&Type->__pad_1714[116]; /*0x447db5*/
      v23 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v36); /*0x447dc4*/
      v24 = *v23; /*0x447dc7*/
      v25 = *v22; /*0x447dc9*/
      goto LABEL_24; /*0x447dcb*/
    }
    LinkIndex = RadioClass::FindLinkIndex((RadioClass *)this, v39); /*0x447d52*/
    if ( LinkIndex >= 0 ) /*0x447d59*/
    {
      v21 = this->Type; /*0x447d5b*/
      if ( LinkIndex < *(_DWORD *)&v21->__pad_1714[108] ) /*0x447d67*/
      {
        v22 = (int *)(*(_DWORD *)&v21->__pad_1714[116] + 12 * LinkIndex); /*0x447d74*/
        v23 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v35); /*0x447d7e*/
        v24 = *v22; /*0x447d81*/
        v25 = *v23; /*0x447d83*/
LABEL_24:
        v26 = v25 + v24; /*0x447d85*/
        v27 = v22[1]; /*0x447d8a*/
        v28 = v22[2]; /*0x447d8d*/
        v29 = v23[1] + v27; /*0x447d90*/
        v30 = v23[2]; /*0x447d92*/
        *v38 = v26; /*0x447d9d*/
        v38[1] = v29; /*0x447d9f*/
        v38[2] = v30 + v28; /*0x447da2*/
        return (int)v38; /*0x447daa*/
      }
    }
    ptr_0 = (int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass; /*0x447dad*/
    v32 = (char *)v34; /*0x447daf*/
  }
  else
  {
    ptr_0 = (int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass; /*0x447dcd*/
    v32 = &v37; /*0x447dcf*/
  }
  v33 = (int *)ptr_0[18](this, v32); /*0x447dd9*/
  *v38 = *v33; /*0x447de4*/
  v38[1] = v33[1]; /*0x447de9*/
  v38[2] = v33[2]; /*0x447df0*/
  return (int)v38; /*0x447b96*/
}



// ==== 0x00447E00  BuildingClass::initAnimation  this=BuildingClass  sig=csp ====
int __thiscall AnimClass::initAnimation(BuildingClass *this)
{
  double v1; // st7
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  int result; // eax
  int v6; // [esp+28h] [ebp-1Ch]
  _BYTE v7[12]; // [esp+2Ch] [ebp-18h] BYREF
  _BYTE v8[12]; // [esp+38h] [ebp-Ch] BYREF
  int v9; // [esp+48h] [ebp+4h]

  v3 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 72))(v9, v7); /*0x447e1a*/
  v4 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *, int))this->TechnoClass + 42))(this, v8, v9); /*0x447e24*/
  v6 = v4[2] - v3[2]; /*0x447e48*/
  Math::Sqrt( /*0x447e74*/
    (double)(*v4 - *v3) * (double)(*v4 - *v3)
  + (double)v6 * (double)v6
  + (double)(v4[1] - v3[1]) * (double)(v4[1] - v3[1]));
  LOWORD(result) = Math::RoundToInt(v1); /*0x447e7c*/
  return result; /*0x447e81*/
}



// ==== 0x00447E90  BuildingClass::TogglePrimaryFactory  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::TogglePrimaryFactory(BuildingClass *this)
{
  BuildingTypeClass *Type; // eax
  int v2; // eax
  _DWORD *v3; // ecx
  _BYTE v5[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v6; // [esp+14h] [ebp+4h]
  int v7; // [esp+18h] [ebp+8h]

  Type = this->Type; /*0x447e90*/
  if ( Type->Helipad || Type->UnitRepair || Type->Bunker ) /*0x447ec2*/
    v2 = (*((int (__thiscall **)(BuildingClass *, _BYTE *, int))this->TechnoClass + 42))(this, v5, v7); /*0x447ee4*/
  else
    v2 = (*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v5); /*0x447ed3*/
  v3 = (_DWORD *)v2; /*0x447eea*/
  *v6 = *v3; /*0x447ef4*/
  v6[1] = v3[1]; /*0x447ef9*/
  v6[2] = v3[2]; /*0x447f00*/
  return (int)v6; /*0x447efc*/
}



// ==== 0x00447F10  BuildingClass::GetFireError  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetFireError(BuildingClass *this)
{
  BuildingTypeClass *Type; // eax
  int v4; // edx
  int INI; // ebp
  int v6; // edi
  int v7; // ebx
  _DWORD *Value; // eax
  __int16 v9; // dx
  _BYTE *v10; // [esp+10h] [ebp+4h]
  int v11; // [esp+14h] [ebp+8h]
  int v12; // [esp+18h] [ebp+Ch] BYREF

  Type = this->Type; /*0x447f15*/
  if ( Type->CanBeOccupied /*0x447f47*/
    && (!Type->CanOccupyFire || !(*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this))
    || (unsigned __int8)ObjectClass::HasLocation((ObjectClass *)this) )
  {
    return 5; /*0x447f47*/
  }
  if ( this->Type->EMPulseCannon ) /*0x447f5a*/
    return 6; /*0x447f6c*/
  if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 19 /*0x447f8f*/
    || (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 18 )
  {
    return 5; /*0x44805c*/
  }
  if ( !(*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 212))(this) ) /*0x447f99*/
    return 6; /*0x447fa5*/
  if ( this->DelayBeforeFiring ) /*0x447fae*/
    return 3; /*0x447fba*/
  INI = TriggerTypeClass::ReadINI((TechnoClass *)this, v4, v10, v11, v12); /*0x447fd9*/
  if ( INI ) /*0x447fdd*/
    return INI; /*0x447fdd*/
  if ( !(*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 255))(this) ) /*0x447fe3*/
    return INI; /*0x447fe3*/
  v6 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *, _BYTE *))this->TechnoClass + 314))(this, &v12, v10); /*0x448004*/
  v7 = this->Type->TurretAnimIsVoxel != 0 ? 0 : 8;
  Value = ProgressTimer::GetValue((ProgressTimer *)this->?, &v12); /*0x448021*/
  LOBYTE(v9) = 0; /*0x448029*/
  HIBYTE(v9) = v7; /*0x44802b*/
  if ( abs16(v9) >= (int)abs16(*(_WORD *)Value - v6) ) /*0x448045*/
    return INI; /*0x448053*/
  else
    return 2; /*0x448049*/
}



// ==== 0x00448070  AnimClass::updateAnimation  this=ObjectClass  sig=csp ====
bool __thiscall AnimClass::updateAnimation(int this, char a2)
{
  int v3; // edx
  int v5; // eax
  int v6; // ebx
  int v7; // edi
  int *v8; // ebp
  int v9; // eax
  int v10; // ecx
  unsigned __int8 v11; // [esp+7h] [ebp-5h]
  int v12; // [esp+8h] [ebp-4h]

  v3 = *(_DWORD *)(*(_DWORD *)(this + 1312) + 3768); /*0x44807c*/
  v12 = v3; /*0x448084*/
  if ( !v3 ) /*0x448088*/
    return 0; /*0x448090*/
  v11 = *(_BYTE *)(this + 979); /*0x44809a*/
  v5 = *(_DWORD *)(this + 540); /*0x44809e*/
  v6 = *(_DWORD *)(v5 + 120); /*0x4480a6*/
  v7 = 0; /*0x4480a9*/
  if ( v6 <= 0 ) /*0x4480ad*/
    goto LABEL_17; /*0x4480ad*/
  v8 = *(int **)(v5 + 108); /*0x4480af*/
  while ( 1 ) /*0x4480b8*/
  {
    v9 = *v8; /*0x4480b8*/
    if ( *(_BYTE *)(*v8 + 129) ) /*0x4480bb*/
      goto LABEL_13; /*0x4480bb*/
    if ( !*(_BYTE *)(v9 + 979) ) /*0x4480c5*/
      goto LABEL_13; /*0x4480c5*/
    v10 = *(_DWORD *)(v9 + 1312); /*0x4480cf*/
    if ( *(_DWORD *)(v10 + 3768) != v3 ) /*0x4480db*/
      goto LABEL_13; /*0x4480db*/
    if ( !*(_BYTE *)(*(_DWORD *)(this + 1312) + 3278) ) /*0x4480e3*/
      break; /*0x4480e3*/
    if ( *(_BYTE *)(v10 + 3278) ) /*0x4480ed*/
      goto LABEL_15; /*0x4480f4*/
LABEL_13:
    ++v7; /*0x448104*/
    ++v8; /*0x448105*/
    if ( v7 >= v6 ) /*0x44810a*/
      goto LABEL_17; /*0x44810a*/
    v3 = v12; /*0x4480b4*/
  }
  if ( *(_BYTE *)(v10 + 3278) ) /*0x4480fa*/
    goto LABEL_13; /*0x448102*/
LABEL_15:
  if ( a2 ) /*0x448114*/
  {
    *(_BYTE *)(v9 + 979) = 0; /*0x448116*/
LABEL_17:
    *(_BYTE *)(this + 979) = 1; /*0x44811d*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(this + 1312) + 3768) == 7 ) /*0x448134*/
    House::ChooseHouseEnemy(*(House **)(this + 540), this); /*0x44813d*/
  return *(_BYTE *)(this + 979) != v11; /*0x44808c*/
}



// ==== 0x00448160  BuildingClass::ProcessPrimarySelect  this=BuildingClass  sig=csp ====
int __thiscall FootClass::ProcessPrimarySelect(BuildingClass *this)
{
  int v2; // ecx
  int result; // eax
  int v4; // edi
  int v5; // edx
  int v6; // ecx
  BuildingTypeClass *Type; // eax
  HouseClass *owner; // ecx
  int bunkersCount; // [esp+4h] [ebp-4h]

  result = (int)this->Type; /*0x448164*/
  v2 = *(_DWORD *)(result + 3768); /*0x44816a*/
  LOBYTE(result) = this->?; /*0x448170*/
  if ( v2 ) /*0x448178*/
  {
    if ( (_BYTE)result ) /*0x448180*/
    {
      this->? = 0; /*0x448182*/
LABEL_17:
      result = (*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 73))(this, 2); /*0x448246*/
      LOBYTE(result) = this->?; /*0x448252*/
      return result; /*0x448252*/
    }
    v4 = 0; /*0x448195*/
    bunkersCount = this->?->bunkersCount; /*0x44819c*/
    if ( bunkersCount <= 0 ) /*0x4481a0*/
    {
LABEL_13:
      owner = this->?; /*0x448205*/
      this->? = 1; /*0x44820b*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)owner) ) /*0x448212*/
        VoxClass::FindAndPlay((VoxClass *)&stru_818E00.?[9], -1); /*0x448226*/
      if ( this->Type->Factory[0] == 7 ) /*0x448238*/
        House::ChooseHouseEnemy((House *)this->?, (int)this); /*0x448241*/
      goto LABEL_17; /*0x448241*/
    }
    while ( 1 ) /*0x4481ac*/
    {
      v5 = *(_DWORD *)(this->?->absorbersCount + 4 * v4); /*0x4481ac*/
      if ( *(_BYTE *)(v5 + 129) ) /*0x4481af*/
        goto LABEL_12; /*0x4481af*/
      v6 = *(_DWORD *)(v5 + 1312); /*0x4481b9*/
      Type = this->Type; /*0x4481bf*/
      if ( *(_DWORD *)(v6 + 3768) != Type->Factory[0] ) /*0x4481d1*/
        goto LABEL_12; /*0x4481d1*/
      if ( Type->?[1] ) /*0x4481d3*/
        break; /*0x4481d3*/
      if ( !*(_BYTE *)(v6 + 3278) ) /*0x4481ea*/
        goto LABEL_11; /*0x4481f2*/
LABEL_12:
      if ( ++v4 >= bunkersCount ) /*0x448202*/
        goto LABEL_13; /*0x448202*/
    }
    if ( !*(_BYTE *)(v6 + 3278) ) /*0x4481dd*/
      goto LABEL_12; /*0x4481e4*/
LABEL_11:
    *(_BYTE *)(v5 + 979) = 0; /*0x4481f4*/
    goto LABEL_12; /*0x4481f4*/
  }
  return result; /*0x448258*/
}



// ==== 0x00448260  BuildingClass::drawFrame  this=BuildingClass  sig=csp ====
int __thiscall AnimClass::drawFrame(BuildingClass *this)
{
  int result; // eax
  int v2; // ebp
  int v3; // edi
  ObjectClass *attachedBomb; // ecx
  BuildingTypeClass *Type; // ecx
  int ProduceCashDelay; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  BuildingTypeClass *v11; // edx
  int v12; // edx
  int bunkersCount; // edi
  HouseClass *owner; // ecx
  int v15; // eax
  BuildingTypeClass *v16; // ecx
  HouseClass *v17; // ecx
  int CaptureEvaEvent; // ecx
  __int64 v19; // rax
  BuildingTypeClass *v20; // edx
  LightSourceClass *LightSource; // ecx
  int v22; // edi
  int *Anims; // ebp
  int v24; // eax
  int Member; // eax
  _BYTE *v26; // edi
  _DWORD *v27; // ebp
  _DWORD *v28; // eax
  int *v29; // eax
  char v30; // bl
  int v31; // eax
  int v32; // edi
  int v33; // eax
  int v34; // ecx
  FactoryClass *Factory; // ecx
  FactoryClass *v36; // ecx
  HouseClass *v37; // ebx
  int v38; // eax
  int v39; // ecx
  BuildingTypeClass **v40; // edx
  int v41; // eax... [39598 chars total]



// ==== 0x00449410  BuildingClass::GetBoundingSizeExt  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetBoundingSizeExt(BuildingClass *this)
{
  return (this->Type->TurretAnimIsVoxel != 0 ? 0x20 : 0)
       - (this->Type->Gate != 0 ? 0x10 : 0)
       + ObjectClass::GetBoundingSize((ObjectClass *)this);
}



// ==== 0x00449440  BuildingClass::GetCursorAction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetCursorAction(BuildingClass *this)
{
  BuildingTypeClass *Type; // eax
  int *v2; // eax
  int v3; // eax
  int v5; // eax
  int v6; // [esp-Ch] [ebp-Ch]
  int v7; // [esp-8h] [ebp-8h]
  HouseClass *owner; // [esp-4h] [ebp-4h]
  int v9; // [esp+4h] [ebp+4h] BYREF

  Type = this->Type; /*0x449447*/
  v9 = *(_DWORD *)(v9 + 36); /*0x44944d*/
  if ( Type->?[0] && this->? ) /*0x44945b*/
  {
    owner = this->?; /*0x44946e*/
    v7 = (int)Type; /*0x44946f*/
    v6 = Type->?[0]; /*0x449474*/
    v2 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v9); /*0x44947b*/
    v3 = -((unsigned __int8)CellClass::IsPassable(v2, v6, v7, (int)owner) != 0); /*0x449489*/
    LOBYTE(v3) = v3 & 0xF9; /*0x44948b*/
    return v3 + 7; /*0x44948d*/
  }
  else
  {
    v5 = -((*((unsigned __int8 (__thiscall **)(BuildingTypeClass *, int *, HouseClass *))Type->TechnoTypeClass + 42))( /*0x4494ab*/
             Type,
             &v9,
             this->?) != 0);
    LOBYTE(v5) = v5 & 0xF9; /*0x4494ad*/
    return v5 + 7; /*0x4494af*/
  }
}



// ==== 0x004494C0  BuildingClass::CanBeSold  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CanBeSold(BuildingClass *this)
{
  int result; // eax

  result = ObjectClass::HasLocation((ObjectClass *)this); /*0x4494c3*/
  if ( (_BYTE)result ) /*0x4494ca*/
    goto LABEL_11; /*0x4494ca*/
  result = (int)this->Type; /*0x4494cc*/
  if ( *(_BYTE *)(result + 5497) ) /*0x4494d2*/
    goto LABEL_11; /*0x4494d2*/
  if ( this->BuildingClass_field_bool_6E9 ) /*0x4494dc*/
  {
    result = this->BuildingClass_field_int_534; /*0x4494e6*/
    if ( result ) /*0x4494ee*/
    {
      result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this); /*0x4494f4*/
      if ( result != 19 ) /*0x4494fd*/
      {
        result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this); /*0x449503*/
        if ( result != 18 ) /*0x44950c*/
        {
          LOBYTE(result) = 1; /*0x44950e*/
          return result; /*0x449511*/
        }
      }
    }
  }
  if ( !this->Type->FirestormWall || this->?->firestormActive ) /*0x449528*/
LABEL_11:
    LOBYTE(result) = 0; /*0x449536*/
  else
    LOBYTE(result) = 1; /*0x449532*/
  return result; /*0x449510*/
}



// ==== 0x00449540  AnimClass::resetAnimation  this=AnimClass  sig=csp ====
char __thiscall AnimClass::resetAnimation(AnimClass *this)
{
  int v2; // eax
  int v3; // edi
  _WORD *v4; // eax
  Object *v5; // ebp
  int ClosestObjectCell; // eax
  Object *NeighbourContent; // edi
  int v8; // eax
  unsigned int v10; // [esp+10h] [ebp-20h]
  int i; // [esp+10h] [ebp-20h]
  __int16 v12[2]; // [esp+18h] [ebp-18h] BYREF
  int v13; // [esp+1Ch] [ebp-14h] BYREF
  int v14; // [esp+20h] [ebp-10h]
  int v15[3]; // [esp+24h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)&this->__pad_41C[260]; /*0x44954b*/
  if ( !*(_BYTE *)(v2 + 5821) ) /*0x449551*/
    return 0; /*0x449551*/
  v3 = *(_DWORD *)(*(_DWORD *)(v2 + 3796) + 40); /*0x449567*/
  v4 = (_WORD *)(*((int (__thiscall **)(AnimClass *, int *))this->AnimClass_field_0x0 + 110))(this, &v13); /*0x449573*/
  HIWORD(v10) = HIWORD(v3) + v4[1]; /*0x449596*/
  LOWORD(v10) = v3 + *v4 - 1; /*0x4495a1*/
  v15[1] = (SHIWORD(v10) << 8) + 128; /*0x4495be*/
  *(_DWORD *)v12 = v10; /*0x4495c2*/
  v15[0] = ((__int16)v10 << 8) + 128; /*0x4495cc*/
  v15[2] = 0; /*0x4495d6*/
  v5 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v12); /*0x4495e4*/
  v13 = 0; /*0x4495ea*/
  v14 = 0; /*0x4495ee*/
  ClosestObjectCell = Object::FindClosestObjectCell(v5, &v13, 0, (int)this); /*0x4495f2*/
  if ( !ClosestObjectCell ) /*0x4495f9*/
    return 0; /*0x44969e*/
  (*(void (__thiscall **)(int))(*(_DWORD *)ClosestObjectCell + 132))(ClosestObjectCell); /*0x449603*/
  Debug::Log(); /*0x449612*/
  Cell::ApplyDamage((Cell *)v5, (int)&g_BuildingClassPool, 1, 1, 0); /*0x449626*/
  for ( i = 0; i < 8; ++i ) /*0x44962b*/
  {
    NeighbourContent = (Object *)Cell::GetNeighbourContent((Cell *)v5, i); /*0x449640*/
    v13 = 0; /*0x449646*/
    v14 = 0; /*0x44964a*/
    v8 = Object::FindClosestObjectCell(NeighbourContent, &v13, 0, (int)this); /*0x44964e*/
    if ( v8 ) /*0x449655*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 132))(v8); /*0x44965b*/
      Debug::Log(); /*0x44966a*/
      Cell::ApplyDamage((Cell *)NeighbourContent, (int)v15, 1, 1, 0); /*0x44967e*/
    }
  }
  return 1; /*0x449691*/
}



// ==== 0x004496B0  BuildingClass::UpdateProduction  this=BuildingClass  sig=csp ====
int __thiscall CheckState1(BuildingClass *this)
{
  double v1; // st7
  BuildingTypeClass *Type; // eax
  int SuperWeapon; // eax
  int v5; // eax
  char *MissionControl; // eax
  int v8; // eax
  BuildingTypeClass *v9; // ecx
  int missionStatus; // eax
  int v11; // ebp
  _BYTE *Member; // eax
  _BYTE *v13; // edi
  _DWORD *v14; // ebx
  _DWORD *v15; // eax
  int *v16; // eax
  int v17; // eax
  char *v18; // eax
  int v19; // eax
  char *v20; // eax
  int v21; // eax
  _BYTE v22[12]; // [esp+34h] [ebp-24h] BYREF
  _BYTE v23[12]; // [esp+40h] [ebp-18h] BYREF
  _DWORD v24[3]; // [esp+4Ch] [ebp-Ch] BYREF

  if ( *(_BYTE *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) + 3285) ) /*0x4496c7*/
  {
    TechnoClass::DrainAmmo((char *)this, this->?); /*0x4496da*/
    this->? = 0; /*0x4496df*/
  }
  if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 171))(this) ) /*0x4496ed*/
  {
    Type = this->Type; /*0x4496fb*/
    this->BuildingClass_field_bool_6DD = 1; /*0x449701*/
    if ( Type->EMPulseCannon /*0x449780*/
      || ((SuperWeapon = Type->SuperWeapon, SuperWeapon == -1)
       || (v5 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_A83CBC + SuperWeapon) + 40) + 200)) == 0
       || DynamicVector::GetOrGrow((DynamicVector *)this->?->ownedInfantryTypes2, *(_DWORD *)(v5 + 3576)))
      && this->Type->SuperWeapon != -1
      || this->Type->CanBeOccupied && (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) <= 0
      || !this->? )
    {
      MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4497b1*/
      LOWORD(v8) = Math::RoundToInt(*((double *)MissionControl + 3) * 900.0); /*0x4497bf*/
      return v8 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4497da*/
    }
    else
    {
      (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 1, 0); /*0x449792*/
      (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 123))(this); /*0x44979c*/
      return 1; /*0x4497a2*/
    }
  }
  v9 = this->Type; /*0x4497e4*/
  if ( v9->HasStupidGuardMode ) /*0x4497ea*/
    return 100; /*0x449800*/
  missionStatus = this->?; /*0x449801*/
  if ( !missionStatus ) /*0x44980a*/
  {
    BuildingClass::StartProduction(this, 1); /*0x449961*/
    this->? = 1; /*0x449966*/
LABEL_32:
    if ( this->Type->UnitReload /*0x4499ab*/
      && (unsigned __int8)Team::AllMembersValid((Team *)this)
      && (*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 157))(this, 29) != 1
      && (*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 157))(this, 19) == 1 )
    {
      (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 20, 0); /*0x4499b5*/
    }
    if ( this->Type->UnitRepair ) /*0x4499c1*/
    {
      v18 = MissionClass::GetMissionControl((MissionClass *)this); /*0x4499cd*/
      LOWORD(v19) = Math::RoundToInt(*((double *)v18 + 2) * 900.0); /*0x4499db*/
      return v19 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4499f7*/
    }
    else
    {
      v20 = MissionClass::GetMissionControl((MissionClass *)this); /*0x449a01*/
      LOWORD(v21) = Math::RoundToInt(*((double *)v20 + 2) * 900.0); /*0x449a0f*/
      return 3 * v21 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x449a2e*/
    }
  }
  if ( missionStatus != 1 ) /*0x449811*/
    goto LABEL_32; /*0x449811*/
  if ( !v9->UnitRepair && !v9->UnitReload && !v9->Bunker || (v11 = 0, this->?[2] <= 0) ) /*0x449843*/
  {
LABEL_28:
    if ( this->Type->WeaponsFactory ) /*0x44992f*/
      AnimClass::resetAnimation((AnimClass *)this); /*0x44993b*/
    goto LABEL_32; /*0x449940*/
  }
  while ( 1 ) /*0x44984c*/
  {
    Member = (_BYTE *)Team::GetMember((Team *)this, v11); /*0x44984c*/
    v13 = Member; /*0x449851*/
    if ( Member ) /*0x449855*/
    {
      if ( (Member[20] & 1) != 0 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)Member + 388))(Member) == 7 ) /*0x449878*/
      {
        v14 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v13 + 72))(v13, v22); /*0x44988c*/
        v15 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v23); /*0x449895*/
        v16 = Coord::Subtract((Coord *)v24, *v15 - *v14, v15[1] - v14[1], v15[2] - v14[2]); /*0x4498b5*/
        Math::Sqrt((double)*v16 * (double)*v16 + (double)v16[2] * (double)v16[2] + (double)v16[1] * (double)v16[1]); /*0x4498f6*/
        LOWORD(v17) = Math::RoundToInt(v1); /*0x4498fe*/
        if ( v17 < 64 /*0x449918*/
          && (*((int (__thiscall **)(BuildingClass *, int, _BYTE *))this->TechnoClass + 158))(this, 19, v13) == 1 )
        {
          break; /*0x449918*/
        }
      }
    }
    if ( ++v11 >= this->?[2] ) /*0x449923*/
      goto LABEL_28; /*0x449923*/
  }
  (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 20, 0); /*0x44994a*/
  return 1; /*0x4497a7*/
}



// ==== 0x00449A40  BuildingClass::GetOwnerHouse  this=BuildingClass  sig=csp ====
int __thiscall CheckState2(BuildingClass *this)
{
  return (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 135))(this);
}



// ==== 0x00449A50  BuildingClass::setLoopCount  this=BuildingClass  sig=csp ====
int __thiscall AnimClass::setLoopCount(BuildingClass *this)
{
  int missionStatus; // eax
  BuildingTypeClass *Type; // eax
  __int16 v4; // cx
  int UnitExitSound; // ecx
  int v7; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v8[3]; // [esp+18h] [ebp-18h] BYREF
  _DWORD v9[3]; // [esp+24h] [ebp-Ch] BYREF

  missionStatus = this->?; /*0x449a57*/
  if ( !missionStatus ) /*0x449a60*/
  {
    BuildingClass::StartProduction(this, 0); /*0x449b36*/
    (*((void (__thiscall **)(BuildingClass *, int))this->TechnoClass + 157))(this, 11); /*0x449b41*/
    UnitExitSound = this->Type->UnitExitSound; /*0x449b4d*/
    if ( UnitExitSound != -1 /*0x449b67*/
      || (UnitExitSound = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1736), UnitExitSound != -1) )
    {
      v9[0] = this->?[0]; /*0x449b75*/
      v9[1] = this->?[1]; /*0x449b7c*/
      v9[2] = this->?[2]; /*0x449b8e*/
      StartAudioControllerAt(UnitExitSound, v9, (int **)&this->WasOnline); /*0x449b92*/
    }
    this->? = 1; /*0x449b97*/
    this->? = 1; /*0x449b9e*/
    return 1; /*0x449b9e*/
  }
  if ( missionStatus != 1 ) /*0x449a67*/
    return 1; /*0x449a67*/
  this->? = 1; /*0x449a79*/
  v8[0] = this->?[0]; /*0x449a82*/
  v8[1] = this->?[1]; /*0x449a8d*/
  v8[2] = this->?[2]; /*0x449a96*/
  StartAudioController(v8, (int **)&this->WasOnline); /*0x449a9a*/
  if ( !this->BuildingClass_field_bool_6DD ) /*0x449a9f*/
    return 1; /*0x449ba9*/
  (*((void (__thiscall **)(BuildingClass *, int))this->TechnoClass + 157))(this, 12); /*0x449ab3*/
  (*((void (__thiscall **)(BuildingClass *, int))this->TechnoClass + 157))(this, 3); /*0x449abf*/
  BuildingClass::StartProduction(this, 1); /*0x449ac9*/
  (*((void (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 311))(this, 0); /*0x449ad4*/
  (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 5, 0); /*0x449ae2*/
  Type = this->Type; /*0x449ae8*/
  if ( !Type->LaserFence ) /*0x449aee*/
  {
    LOBYTE(v4) = 0; /*0x449af8*/
    HIBYTE(v4) = Type->unknown___2; /*0x449afe*/
    LOWORD(v7) = v4; /*0x449b05*/
    FacingClass::Set_SyncLog((char *)this->?, &v7); /*0x449b10*/
  }
  BuildingTypeClass::IsPowered(this->Type); /*0x449b1b*/
  Mixer::ReleaseChannel((Mixer *)&this->WasOnline); /*0x449b22*/
  return 1; /*0x449b27*/
}



// ==== 0x00449C30  BuildingClass::finalizeAnimation  this=BuildingClass  sig=csp ====
int __thiscall AnimClass::finalizeAnimation(BuildingClass *this)
{
  double v1; // st5
  double v2; // st6
  double v3; // st7
  int missionStatus; // eax
  int v6; // eax
  int *location; // esi
  BuildingTypeClass *Type; // eax
  BuildingTypeClass *v9; // eax
  int BarrelStartPitch; // ebx
  _DWORD *Value; // eax
  __int16 v12; // dx
  int unknown___2; // ebx
  _DWORD *v14; // eax
  __int16 v15; // dx
  __int16 v16; // cx
  __int16 v17; // cx
  int *v19; // eax
  ObjectClass *v20; // ebx
  int (__thiscall **ptr_0)(BuildingClass *); // edx
  int v22; // eax
  BuildingTypeClass *v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  LightSourceClass *LightSource; // ecx
  int v29; // edi
  BuildingClass *v30; // esi
  AbstractClass *target; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  SlaveManagerClass *slaveManager; // ecx
  BuildingTypeClass *v37; // eax
  __int16 v38; // dx
  char v39; // al
  int j; // esi
  int v... [29284 chars total]



// ==== 0x0044ABD0  BuildingClass::FireLaser  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::FireLaser(BuildingClass *this, int a2, int a3, int a4)
{
  int *v5; // eax
  char *v6; // eax
  int v7; // eax
  int v8; // ecx
  int v10; // [esp-20h] [ebp-44h]
  int v11; // [esp-14h] [ebp-38h]
  char *v12; // [esp+14h] [ebp-10h]
  _DWORD v13[3]; // [esp+18h] [ebp-Ch] BYREF

  v12 = (char *)__2_YAPAXI_Z(0x5Cu); /*0x44abef*/
  if ( v12 ) /*0x44abf3*/
  {
    v11 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1192); /*0x44ac10*/
    LOWORD(v10) = this->?->base[5]; /*0x44ac42*/
    HIWORD(v10) = BYTE2(this->?->base[5]); /*0x44ac4c*/
    v5 = (int *)(*((int (__thiscall **)(BuildingClass *, _DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass + 44))( /*0x44ac7f*/
                  this,
                  v13,
                  0,
                  0,
                  0,
                  0);
    v6 = TimerClass::Construct(v12, *v5, v5[1], v5[2], a2, a3, a4, 0, 1, v10, 0, 0, v11, 0, 1, 1065353216, 0); /*0x44ac9e*/
    if ( v6 ) /*0x44aca5*/
    {
      v6[32] = 1; /*0x44aca7*/
      *((_DWORD *)v6 + 7) = 3; /*0x44acab*/
    }
  }
  v7 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44acb8*/
  v8 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1188); /*0x44acc4*/
  this->SupportingPrisms = 0; /*0x44acca*/
  this->?[0] = v7; /*0x44acd0*/
  this->?[1] = a3; /*0x44acd8*/
  this->?[2] = v8; /*0x44acdc*/
  return a3; /*0x44acc3*/
}



// ==== 0x0044ACF0  BuildingClass::ProcessActiveUpdate  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessActiveUpdate(BuildingClass *this)
{
  double v1; // st7
  BuildingTypeClass *Type; // eax
  int missionStatus; // ecx
  int v6; // eax
  AbstractClass *v8; // edi
  AbstractClass *v9; // eax
  int v10; // eax
  AbstractClass *v12; // edi
  AbstractClass *v13; // eax
  _WORD *v14; // ebx
  _WORD *v15; // eax
  void (__thiscall **v16)(BuildingClass *, int, _DWORD); // eax
  unsigned __int8 (__thiscall **ptr_0)(BuildingClass *); // edx
  int v18; // ebp
  int (__thiscall **v19)(BuildingClass *, AbstractClass *, int, int); // eax
  int v20; // edi
  int v21; // edx
  BuildingTypeClass *v22; // eax
  char ROT; // bl
  _DWORD *Value; // eax
  __int16 v25; // dx
  unsigned __int8 (__thiscall **v26)(BuildingClass *); // eax
  _WORD *v27; // eax
  _WORD *v28; // eax
  _WORD *v29; // eax
  BuildingClass *v30; // ecx
  BuildingTypeClass *v31; // eax
  BuildingClass *v32; // ebx
  int *v33; // eax
  int SupportingPrisms; // ecx
  HouseClass *owner; // eax
  ObjectClass *v36; // edi
  int v37; // edx
  int v38; // ecx
  _DWORD *v39; // edx
  int v40; // eax
  int v41; // edx
  int v42; // eax
  int v43; // ebp
  void *v44; // edi
  int *v45; // eax
  int v46; // ecx
  int v47; // edx
  int v48; // eax
  int v49; // edx
  int v52; // ecx
  char *v53; // eax
  int v54; // ecx
  int v55; // eax
  int v58; // ecx
  char *v59; // eax
  int v60; // edx
  int v61; // eax
  AbstractClass *target; // [esp+1Ch] [ebp-84h]
  double v65; // [esp+20h] [ebp-80h]
  _DWORD v66[2]; // [esp+38h] [ebp-68h] BYREF
  double v67; // [esp+40h] [ebp-60h] BYREF
  int bunkersCount; // [esp+4Ch] [ebp-54h] BYREF
  int v69; // [esp+50h] [ebp-50h] BYREF
  char v70[4]; // [esp+54h] [ebp-4Ch] BYREF
  int v72; // [esp+64h] [ebp-3Ch]
  int v73; // [esp+68h] [ebp-38h]
  int v74; // [esp+6Ch] [ebp-34h]
  int v75; // [esp+74h] [ebp-2Ch]
  int v76; // [esp+78h] [ebp-28h]
  char v77[12]; // [esp+7Ch] [ebp-24h] BYREF
  char v78[12]; // [esp+88h] [ebp-18h] BYREF
  char v79[12]; // [esp+94h] [ebp-Ch] BYREF

  Type = this->Type; /*0x44ad01*/
  if ( !Type->SAM ) /*0x44ad0f*/
  {
    if ( !this->? ) /*0x44af86*/
    {
      (*((void (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x44af95*/
      ptr_0 = (unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x44af9b*/
      this->SupportingPrisms = 0; /*0x44af9f*/
      if ( ptr_0[268](this) ) /*0x44afa5*/
        BuildingClass::GetType_Thunk(this); /*0x44afb1*/
      if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) != 28 ) /*0x44afc3*/
      {
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 5, 0); /*0x44afd0*/
        (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 123))(this); /*0x44afda*/
        return 1; /*0x44afec*/
      }
      return 1; /*0x44afc3*/
    }
    v18 = (*((int (__thiscall **)(BuildingClass *, AbstractClass *))this->TechnoClass + 185))(this, this->?); /*0x44affe*/
    v19 = (int (__thiscall **)(BuildingClass *, AbstractClass *, int, int))this->TechnoClass; /*0x44b000*/
    target = this->?; /*0x44b005*/
    this->BuildingClass_field_bool_6DD = 1; /*0x44b008*/
    v20 = v19[240](this, target, v18, 1); /*0x44b015*/
    if ( v20 == 2 ) /*0x44b01a*/
    {
      if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 255))(this) ) /*0x44b024*/
      {
        if ( this->Type->TurretAnimIsVoxel ) /*0x44b038*/
        {
          v21 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *, AbstractClass *))this->TechnoClass + 314))( /*0x44b05c*/
                             this,
                             &bunkersCount,
                             this->?);
          v22 = this->Type; /*0x44b05e*/
          v66[1] = v21; /*0x44b064*/
          if ( !v22->? /*0x44b0a4*/
            || (ROT = v22->?,
                Value = ProgressTimer::GetValue((ProgressTimer *)this->?, &bunkersCount),
                LOBYTE(v25) = 0,
                HIBYTE(v25) = ROT,
                abs16(v25) >= (int)abs16(*(_WORD *)Value - LOWORD(v66[1]))) )
          {
            FacingClass::Set_SyncLog((char *)this->?, &v66[1]); /*0x44b0b3*/
            v20 = (*((int (__thiscall **)(BuildingClass *, AbstractClass *, int, int))this->TechnoClass + 240))( /*0x44b0cc*/
                    this,
                    this->?,
                    v18,
                    1);
          }
        }
      }
    }
    switch ( v20 ) /*0x44b0d7*/
    {
      case 0: /*0x44b0d7*/
        if ( this->UpgradeLevel ) /*0x44b2bc*/
        {
          v30 = (BuildingClass *)this->Upgrades[0]; /*0x44b2c6*/
          if ( v30 ) /*0x44b2ce*/
          {
            if ( BuildingClass::processCapture(v30) ) /*0x44b2d0*/
            {
              (*((void (__thiscall **)(BuildingClass *, AbstractClass *, _DWORD))this->TechnoClass + 243))( /*0x44b2e9*/
                this,
                this->?,
                0);
              (*((void (__thiscall **)(BuildingClass *, AbstractClass *, int))this->TechnoClass + 243))( /*0x44b2f3*/
                this,
                this->?,
                1);
            }
            goto LABEL_116; /*0x44b2f3*/
          }
        }
        v31 = this->Type; /*0x44b2fe*/
        if ( v31 != *(BuildingTypeClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1176) ) /*0x44b30a*/
        {
          if ( !v31->IsAnimDelayedFire ) /*0x44b638*/
          {
            (*((void (__thiscall **)(BuildingClass *, AbstractClass *, int))this->TechnoClass + 243))( /*0x44b6d0*/
              this,
              this->?,
              v18);
            goto LABEL_116; /*0x44b6d0*/
          }
          v60 = v75; /*0x44b644*/
          this->DelayBeforeFiring = v31->DelayedFireDelay; /*0x44b64e*/
          v61 = v76; /*0x44b654*/
          this->PrismTargetCoords[0] = v18; /*0x44b65a*/
          this->PrismStage[0] = 1; /*0x44b65c*/
          this->PrismTargetCoords[1] = v60; /*0x44b666*/
          this->PrismTargetCoords[2] = v61; /*0x44b669*/
          BuildingClass::ClearAnims(this, 3); /*0x44b66e*/
          BuildingClass::GetHealthRatio(this); /*0x44b675*/
          _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44b67a*/
          __asm /*0x44b680*/
          {
            fcomp qword ptr [ecx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x44b68b*/
          {
            v58 = 1; /*0x44b693*/
            v59 = &this->Type->__pad_F70[660]; /*0x44b698*/
          }
          else
          {
            v58 = 0; /*0x44b6a5*/
            v59 = &this->Type->__pad_F70[644]; /*0x44b6a7*/
          }
          if ( v59 && *v59 ) /*0x44b6b0*/
            goto LABEL_107; /*0x44b6b3*/
LABEL_116:
          if ( BYTE1(this->Type->?) ) /*0x44b6dc*/
          {
            TechnoClass::GattlingRateUp_GattlingRateDownReset((float *)this, this->?); /*0x44b6ef*/
            this->? = 0; /*0x44b6f4*/
          }
          else
          {
            ++this->?; /*0x44b713*/
          }
          return 1; /*0x44b70a*/
        }
        v32 = 0; /*0x44b319*/
        v66[0] = 0x7FFFFFFF; /*0x44b31b*/
        v33 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 43))(this, v77); /*0x44b323*/
        v72 = *v33; /*0x44b32b*/
        SupportingPrisms = this->SupportingPrisms; /*0x44b32f*/
        v73 = v33[1]; /*0x44b338*/
        v74 = v33[2]; /*0x44b345*/
        if ( SupportingPrisms >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1184) ) /*0x44b351*/
          goto LABEL_102; /*0x44b351*/
        owner = this->?; /*0x44b357*/
        v66[1] = 0; /*0x44b35d*/
        bunkersCount = owner->bunkersCount; /*0x44b366*/
        if ( bunkersCount <= 0 ) /*0x44b36a*/
          goto LABEL_102; /*0x44b36a*/
        break; /*0x44b36a*/
      case 1: /*0x44b0d7*/
      case 5: /*0x44b0d7*/
      case 6: /*0x44b0d7*/
      case 8: /*0x44b0d7*/
        (*((void (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x44b0e3*/
        v26 = (unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x44b0e9*/
        this->SupportingPrisms = 0; /*0x44b0ed*/
        if ( v26[268](this) ) /*0x44b0f3*/
          BuildingClass::GetType_Thunk(this); /*0x44b0ff*/
        if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 28 ) /*0x44b111*/
          return 1; /*0x44b111*/
        if ( BYTE1(this->Type->?) ) /*0x44b119*/
        {
          TechnoClass::DrainAmmo((char *)this, this->?); /*0x44b12c*/
          this->? = 0; /*0x44b131*/
        }
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 5, 0); /*0x44b13e*/
        (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 123))(this); /*0x44b148*/
        goto LABEL_53; /*0x44b148*/
      case 2: /*0x44b0d7*/
        if ( this->? ) /*0x44b187*/
        {
          v28 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, int *, AbstractClass *))this->TechnoClass + 314))( /*0x44b19b*/
                           this,
                           &v69,
                           this->?);
          FacingClass::Update((char *)this->?, v28); /*0x44b1a8*/
        }
        if ( BYTE1(this->Type->?) ) /*0x44b1b3*/
        {
          TechnoClass::GattlingRateUp_GattlingRateDownReset((float *)this, this->?); /*0x44b1c6*/
          this->? = 0; /*0x44b1cb*/
        }
        return 2; /*0x44b1dd*/
      case 3: /*0x44b0d7*/
        if ( this->? ) /*0x44b1de*/
        {
          v29 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, char *, AbstractClass *))this->TechnoClass + 314))( /*0x44b1f2*/
                           this,
                           v70,
                           this->?);
          FacingClass::Update((char *)this->?, v29); /*0x44b1ff*/
        }
        if ( BYTE1(this->Type->?) ) /*0x44b20a*/
        {
          TechnoClass::GattlingRateUp_GattlingRateDownReset((float *)this, this->?); /*0x44b21d*/
          this->? = 0; /*0x44b222*/
        }
        else
        {
          ++this->?; /*0x44b23c*/
        }
        return 2; /*0x44b234*/
      case 9: /*0x44b0d7*/
        (*((void (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 279))(this, 0); /*0x44b289*/
        if ( BYTE1(this->Type->?) ) /*0x44b295*/
        {
          TechnoClass::DrainAmmo((char *)this, this->?); /*0x44b2ac*/
          this->? = 0; /*0x44b2b1*/
        }
        goto LABEL_53; /*0x44b2b7*/
      case 10: /*0x44b0d7*/
        if ( !BYTE1(this->Type->?) ) /*0x44b25d*/
          return 1; /*0x44b25d*/
        TechnoClass::DrainAmmo((char *)this, this->?); /*0x44b26c*/
        this->? = 0; /*0x44b271*/
        return 1; /*0x44b283*/
      default:
LABEL_53:
        if ( this->? ) /*0x44b14e*/
        {
          v27 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, char *, AbstractClass *))this->TechnoClass + 314))( /*0x44b162*/
                           this,
                           v70,
                           this->?);
          FacingClass::Update((char *)this->?, v27); /*0x44b16f*/
        }
        this->? = 0; /*0x44b174*/
        return 1; /*0x44b174*/
    }
    while ( 1 ) /*0x44b37d*/
    {
      v36 = *(ObjectClass **)(this->?->absorbersCount + 4 * v66[1]); /*0x44b37d*/
      if ( v36 && v36->isAliveFlag && v36[7].health == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1176) ) /*0x44b3a8*/
      {
        v37 = v36[4].ambientSoundController[0]; /*0x44b3ae*/
        v38 = v36[4].ambientSoundController[2]; /*0x44b3b4*/
        if ( v37 != -1 ) /*0x44b3bd*/
        {
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v37 >= v38 ) /*0x44b3c8*/
            goto LABEL_86; /*0x44b3c8*/
          v38 -= *(_DWORD *)&stru_A8EB00.?[416] - v37; /*0x44b3ca*/
        }
        if ( !v38 ) /*0x44b3ce*/
        {
LABEL_86:
          if ( !v36[10].customSound_controller[3] /*0x44b406*/
            && !(unsigned __int8)ObjectClass::HasLocation(v36)
            && (*((int (__thiscall **)(ObjectClass *))v36->AbstractClass + 97))(v36) != 1
            && v36 != (ObjectClass *)this )
          {
            v39 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, char *))v36->AbstractClass + 43))(v36, v78); /*0x44b41f*/
            v40 = v39[1]; /*0x44b42c*/
            LODWORD(v67) = v72 - *v39; /*0x44b42f*/
            __asm { fild dword ptr [esp+80h+var_60] } /*0x44b433*/
            v41 = v39[2]; /*0x44b437*/
            LODWORD(v67) = v40 - v73; /*0x44b43c*/
            __asm { fild dword ptr [esp+80h+var_60] } /*0x44b444*/
            LODWORD(v67) = v74 - v41; /*0x44b44a*/
            __asm /*0x44b44e*/
            {
              fild dword ptr [esp+80h+var_60]
              fstp [esp+80h+var_28]
              fstp [esp+80h+var_48]
              fld [esp+80h+var_28]
              fstp [esp+80h+var_60]
              fld st
              fmul st, st(1)
              fld [esp+80h+var_60]
              fmul [esp+80h+var_60]
              faddp st(1), st
              fld [esp+80h+var_48]
              fmul [esp+80h+var_48]
              faddp st(1), st
              fstp [esp+80h+var_80]; double
              fstp st
            }
            Math::Sqrt(v65); /*0x44b47f*/
            LOWORD(v42) = Math::RoundToInt(v1); /*0x44b487*/
            v43 = v42; /*0x44b492*/
            if ( v42 <= (*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 90))(this, 1) /*0x44b4a6*/
              && (!v32 || v43 < v66[0]) )
            {
              v32 = (BuildingClass *)v36; /*0x44b4a8*/
              v66[0] = v43; /*0x44b4aa*/
            }
          }
        }
      }
      if ( ++v66[1] >= bunkersCount ) /*0x44b4bd*/
      {
        if ( v32 ) /*0x44b4c5*/
        {
          v44 = this->TechnoClass; /*0x44b4d5*/
          ++this->SupportingPrisms; /*0x44b4d7*/
          v45 = (int *)(*((int (__thiscall **)(BuildingClass *, char *, _DWORD, _DWORD, _DWORD, _DWORD))v44 + 44))( /*0x44b4f6*/
                         this,
                         v79,
                         0,
                         0,
                         0,
                         0);
          v46 = *v45; /*0x44b502*/
          v47 = v45[1]; /*0x44b504*/
          v48 = v45[2]; /*0x44b507*/
          v32->DelayBeforeFiring = v32->Type->DelayedFireDelay; /*0x44b512*/
          v32->PrismStage[0] = 2; /*0x44b51e*/
          v32->PrismTargetCoords[0] = v46; /*0x44b528*/
          v32->PrismTargetCoords[1] = v47; /*0x44b52c*/
          v32->PrismTargetCoords[2] = v48; /*0x44b52f*/
          BuildingClass::ClearAnims(v32, 3); /*0x44b532*/
          BuildingClass::GetHealthRatio(v32); /*0x44b539*/
          _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44b53e*/
          __asm /*0x44b544*/
          {
            fcomp qword ptr [ecx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x44b54f*/
          {
            v52 = 1; /*0x44b557*/
            v53 = &v32->Type->__pad_F70[660]; /*0x44b55c*/
          }
          else
          {
            v52 = 0; /*0x44b569*/
            v53 = &v32->Type->__pad_F70[644]; /*0x44b56b*/
          }
          if ( v53 && *v53 ) /*0x44b578*/
            BuildingClass::PlayAnim(v32, v49, v53, 10, v52, 0, 0); /*0x44b58b*/
          goto LABEL_116; /*0x44b590*/
        }
LABEL_102:
        this->DelayBeforeFiring = this->Type->DelayedFireDelay; /*0x44b595*/
        v54 = v76; /*0x44b5b1*/
        this->PrismTargetCoords[0] = 0; /*0x44b5b5*/
        v55 = v75; /*0x44b5b7*/
        this->PrismStage[0] = 1; /*0x44b5bb*/
        this->PrismTargetCoords[1] = v55; /*0x44b5c5*/
        this->PrismTargetCoords[2] = v54; /*0x44b5c8*/
        BuildingClass::ClearAnims(this, 3); /*0x44b5cd*/
        BuildingClass::GetHealthRatio(this); /*0x44b5d4*/
        _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44b5d9*/
        __asm /*0x44b5df*/
        {
          fcomp qword ptr [edx+1700h]
          fnstsw ax
        }
        if ( (_AX & 0x4100) != 0 ) /*0x44b5ea*/
        {
          v58 = 1; /*0x44b5f2*/
          v59 = &this->Type->__pad_F70[660]; /*0x44b5f7*/
        }
        else
        {
          v58 = 0; /*0x44b604*/
          v59 = &this->Type->__pad_F70[644]; /*0x44b606*/
        }
        if ( !v59 || !*v59 ) /*0x44b613*/
          goto LABEL_116; /*0x44b616*/
LABEL_107:
        BuildingClass::PlayAnim(this, _EDX, v59, 10, v58, 0, 0); /*0x44b61c*/
        goto LABEL_116; /*0x44b62b*/
      }
    }
  }
  missionStatus = this->?; /*0x44ad15*/
  if ( missionStatus )
  {
    if ( missionStatus != 1 ) /*0x44ad24*/
    {
      _EAX = MissionClass::GetMissionControl((MissionClass *)this); /*0x44ad28*/
      __asm /*0x44ad2d*/
      {
        fld qword ptr [eax+18h]
        fmul ds:dbl_7E27F8
      }
      LOWORD(v6) = Math::RoundToInt(v1); /*0x44ad36*/
      return v6 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x44ad59*/
    }
    v8 = this->?; /*0x44ad5a*/
    if ( v8 )
      v9 = (*((int (__thiscall **)(AbstractClass *))v8->ptr_0 + 11))(this->?) == 2 ? v8 : 0;
    else
      v9 = 0; /*0x44ad64*/
    if ( this->? && v9 && (*((int (__thiscall **)(AbstractClass *))v9->ptr_0 + 116))(v9) ) /*0x44ad92*/
    {
      v10 = (*((int (__thiscall **)(BuildingClass *, AbstractClass *, _DWORD, int))this->TechnoClass + 240))( /*0x44adae*/
              this,
              this->?,
              0,
              1);
      if ( v10 == 5 || v10 == 6 || v10 == 8 ) /*0x44adc1*/
      {
        (*((void (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x44ae0d*/
        this->? = 0; /*0x44ae13*/
        return 1; /*0x44ae25*/
      }
      if ( v10 != 2 ) /*0x44adc6*/
      {
        if ( !v10 ) /*0x44adca*/
        {
          (*((void (__thiscall **)(BuildingClass *, AbstractClass *, _DWORD))this->TechnoClass + 243))(this, this->?, 0); /*0x44addc*/
          (*((void (__thiscall **)(BuildingClass *, AbstractClass *, int))this->TechnoClass + 243))(this, this->?, 1); /*0x44adef*/
          this->? = 0; /*0x44adf5*/
          return 1; /*0x44ae07*/
        }
        return 1; /*0x44b186*/
      }
    }
    else
    {
      (*((void (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x44ae2b*/
    }
    this->? = 0; /*0x44ae31*/
    return 1; /*0x44ae43*/
  }
  if ( Type->Powered ) /*0x44ae44*/
  {
    if ( Type->PowerDrain > 0 ) /*0x44ae54*/
    {
      HouseClass::GetPowerRatio(this->?); /*0x44ae5c*/
      __asm /*0x44ae61*/
      {
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x44ae6c*/
        return 1; /*0x44ae6c*/
    }
  }
  v12 = this->?; /*0x44ae72*/
  if ( v12 )
    v13 = (*((int (__thiscall **)(AbstractClass *))v12->ptr_0 + 11))(this->?) == 2 ? v12 : 0;
  else
    v13 = 0; /*0x44ae7c*/
  if ( !this->? || !v13 || !(*((int (__thiscall **)(AbstractClass *))v13->ptr_0 + 116))(v13) ) /*0x44aeaa*/
  {
    (*((void (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x44af56*/
    v16 = (void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass; /*0x44af5c*/
    this->? = 0; /*0x44af63*/
    v16[122](this, 5, 0); /*0x44af69*/
    (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 123))(this); /*0x44af73*/
    return 1; /*0x44af85*/
  }
  if ( (unsigned __int8)TimerClass::Active((int)this->?) ) /*0x44aec0*/
    return 1; /*0x44aec7*/
  v14 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, int *, AbstractClass *))this->TechnoClass + 314))( /*0x44aee3*/
                   this,
                   &bunkersCount,
                   this->?);
  if ( abs16(*(_WORD *)ProgressTimer::GetValue((ProgressTimer *)this->?, &v67) - *v14) > 0x2000u ) /*0x44af0d*/
  {
    v15 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD *, AbstractClass *))this->TechnoClass + 314))( /*0x44af36*/
                     this,
                     &v66[1],
                     this->?);
    FacingClass::Update((char *)this->?, v15); /*0x44af3f*/
  }
  else
  {
    this->? = 1; /*0x44af0f*/
  }
  return 1; /*0x44ad52*/
}



// ==== 0x0044B760  AbstractClass::COMStub_133  this=BuildingClass  sig=csp ====
// attributes: thunk
int __thiscall AbstractClass::COMStub_133(AbstractClass *this)
{
  MissionClass *v2; // [esp+4h] [ebp+4h]

  return IPersistStream::StubReturn450(v2);
}



// ==== 0x0044B770  AbstractClass::COMStub_137  this=BuildingClass  sig=csp ====
// attributes: thunk
int __thiscall AbstractClass::COMStub_137(AbstractClass *this)
{
  MissionClass *v2; // [esp+4h] [ebp+4h]

  return AircraftClass::CheckMissionStatus(v2);
}



// ==== 0x0044B780  BuildingClass::ProcessRepair  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessRepair(BuildingClass *this)
{
  double v1; // st7
  BuildingTypeClass *Type; // eax
  int missionStatus; // eax
  int result; // eax
  int v6; // edx
  int v8; // ecx
  char *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edx
  int (__thiscall **ptr_0)(BuildingClass *, int); // edx
  int v17; // eax
  int v18; // eax
  int *v19; // eax
  void (__thiscall **v20)(BuildingClass *, int, int); // esi
  int v21; // eax
  void (__thiscall **v22)(BuildingClass *, int, int); // esi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // edx
  Power *v32; // esi
  void (__thiscall **v33)(BuildingClass *, int, int); // esi
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v41; // ecx
  char *v42; // eax
  int v43; // edx
  int v45; // ecx
  char *v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // edx
  int v50; // edx
  int (__thiscall **v52)(BuildingClass *, int); // eax
  int v53; // eax
  bool v54; // zf
  char isOwnedByCurrentPlayer; // al
  __int64 v56; // rax
  int v59; // ecx
  char *v60; // eax
  int v61; // edx
  int v63; // ecx
  char *v64; // eax
  int Member; // eax
  TechnoClass *v66; // esi
  int v67; // eax
  _DWORD **v68; // eax
  AbstractClass *focus; // ecx
  _DWORD *v70; // eax
  void (__thiscall **v71)(TechnoClass *, void *, int); // edi
  void *v72; // eax
  int v75; // ecx
  char *v76; // eax
  int v77; // edx
  int v79; // ecx
  char *v80; // eax
  int v81; // eax
  int v82; // edx
  int v85; // ecx
  char *v86; // eax
  int v89; // ecx
  char *v90; // eax
  void (__thiscall **v91)(BuildingClass *, int, int); // eax
  int v92; // eax
  int (__thiscall **v93)(BuildingClass *, int); // ebx
  int v94; // esi
  int v95; // eax
  int v96; // eax
  FootClass *v97; // eax
  int v98; // esi
  bool v100; // bl
  int v101; // eax
  bool v102; // cl
  bool v103; // al
  int v105; // eax
  TechnoClass *v106; // esi
  int (__thiscall **v107)(BuildingClass *, int *, int, int); // ebx
  int v108; // eax
  _DWORD **v109; // eax
  AbstractClass *v110; // ecx
  _DWORD *v111; // eax
  void (__thiscall **v112)(TechnoClass *, void *, int); // ebx
  void *v113; // eax
  int v114; // edx
  int v117; // ecx
  char *v118; // eax
  int v119; // eax
  _DWORD *v120; // esi
  _DWORD *v121; // esi
  int v122; // edx
  int v124; // ecx
  char *v125; // eax
  int v126; // edx
  int v129; // ecx
  char *v130; // eax
  int v131; // eax
  _DWORD *v132; // ebx
  int v133; // eax
  int (__thiscall **v134)(BuildingClass *, int); // esi
  int v135; // eax
  int v136; // eax
  int v137; // eax
  int v139; // ebx
  int v140; // eax
  _DWORD *v141; // esi
  int v143; // [esp+1Ch] [ebp-3Ch]
  int v144; // [esp+1Ch] [ebp-3Ch]
  int v145; // [esp+1Ch] [ebp-3Ch]
  int v146; // [esp+1Ch] [ebp-3Ch]
  int v147; // [esp+1Ch] [ebp-3Ch]
  BuildingClass *v148; // [esp+20h] [ebp-38h]
  char v149; // [esp+33h] [ebp-25h]
  char v150; // [esp+33h] [ebp-25h]
  StreamClass v151; // [esp+34h] [ebp-24h] BYREF
  int v152; // [esp+48h] [ebp-10h] BYREF
  int v153; // [esp+4Ch] [ebp-Ch]
  int v154; // [esp+50h] [ebp-8h]

  _EBP = this; /*0x44b78b*/
  if ( this->Type->Bunker ) /*0x44b797*/
    BuildingClass::UpdateBunker(v148, v1); /*0x44b7a3*/
  Type = _EBP->Type; /*0x44b7a8*/
  if ( Type->ConstructionYard ) /*0x44b7ae*/
  {
    missionStatus = _EBP->?; /*0x44b7bc*/
    if ( missionStatus ) /*0x44b7c4*/
    {
      if ( missionStatus == 2 && !(unsigned __int8)Team::AllMembersValid((Team *)_EBP) ) /*0x44b7d1*/
      {
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD))_EBP->TechnoClass + 122))(_EBP, 5, 0); /*0x44b7e6*/
        BuildingClass::ClearAnims(_EBP, 7); /*0x44b7f0*/
        return 1; /*0x44b801*/
      }
    }
    else
    {
      BuildingClass::StartProduction(_EBP, 2); /*0x44b806*/
      BuildingClass::GetHealthRatio(_EBP); /*0x44b80d*/
      _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44b812*/
      __asm /*0x44b817*/
      {
        fcomp qword ptr [eax+1700h]
        fnstsw ax
      }
      if ( (_EAX & 0x4100) != 0 ) /*0x44b822*/
      {
        v8 = 1; /*0x44b82a*/
        v9 = &_EBP->Type->__pad_F70[456]; /*0x44b82f*/
      }
      else
      {
        v8 = 0; /*0x44b83c*/
        v9 = &_EBP->Type->__pad_F70[440]; /*0x44b83e*/
      }
      if ( v9 && *v9 ) /*0x44b847*/
        BuildingClass::PlayAnim(_EBP, v6, v9, 7, v8, 0, 0); /*0x44b854*/
      _EBP->? = 2; /*0x44b859*/
    }
    return 1; /*0x44b86f*/
  }
  if ( Type->Hospital )
  {
    v10 = _EBP->?; /*0x44b87e*/
    if ( v10 )
    {
      if ( v10 == 2 ) /*0x44b88f*/
      {
        if ( Locomotor::GetSpeed((Locomotor *)_EBP->__pad_628) || (v11 = *(_DWORD *)&_EBP->__pad_628[12]) == 0 ) /*0x44b8ae*/
        {
          LOBYTE(_EBP->RepairProgress[1]) = 0; /*0x44b8df*/
        }
        else
        {
          v12 = *(_DWORD *)&_EBP->__pad_628[16]; /*0x44b8b0*/
          v13 = _EBP->RepairProgress[0]; /*0x44b8b6*/
          LOBYTE(_EBP->RepairProgress[1]) = 1; /*0x44b8be*/
          _EBP->RepairProgress[0] = v12 + v13; /*0x44b8c5*/
          v14 = v153; /*0x44b8d1*/
          *(_DWORD *)_EBP->__pad_628 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44b8d5*/
          *(_DWORD *)&_EBP->__pad_628[4] = v14; /*0x44b8d7*/
          *(_DWORD *)&_EBP->__pad_628[8] = v11; /*0x44b8da*/
        }
        _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44b8e6*/
        __asm /*0x44b8eb*/
        {
          fild dword ptr [ebp+620h]
          fld qword ptr [eax+16F0h]
          fmul ds:dbl_7E27F8
          fcompp
          fnstsw ax
        }
        if ( (_EAX & 0x4100) == 0 ) /*0x44b904*/
          return 1; /*0x44b904*/
        ptr_0 = (int (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass; /*0x44b90a*/
        _EBP->BuildingClass_field_bool_6DD = 0; /*0x44b911*/
        _EBP->RepairProgress[0] = 0; /*0x44b918*/
        v17 = ptr_0[157](_EBP, 28) - 10; /*0x44b924*/
        if ( v17 ) /*0x44b927*/
        {
          v18 = v17 - 22; /*0x44b929*/
          if ( !v18 ) /*0x44b92c*/
          {
            v22 = (void (__thiscall **)(BuildingClass *, int, int))_EBP->TechnoClass; /*0x44b9e6*/
            v144 = g_TerrainTypeTable; /*0x44b9e9*/
            v23 = LinkedList::Pop((LinkedList *)_EBP->?); /*0x44b9f0*/
            v22[64](_EBP, v23, v144); /*0x44b9f8*/
            return 1; /*0x44ba0a*/
          }
          if ( v18 != 1 ) /*0x44b933*/
            return 1; /*0x44b9df*/
          if ( (unsigned __int8)House::IsHumanPlayer((House *)_EBP->?) ) /*0x44b93f*/
          {
            v19 = (int *)(*((int (__thiscall **)(BuildingClass *, void **))_EBP->TechnoClass + 110))(_EBP, &v151.m_Data); /*0x44b952*/
            if ( (unsigned __int8)CreateTriggerClassIfFarEnough(8, *v19, *v19) ) /*0x44b960*/
              VoxClass::FindAndPlay((VoxClass *)&stru_818E00.?[6], -1); /*0x44b973*/
            v152 = _EBP->?[0]; /*0x44b981*/
            v153 = _EBP->?[1]; /*0x44b98e*/
            v154 = _EBP->?[2]; /*0x44b999*/
            StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1816), &v152, 0); /*0x44b9a3*/
          }
        }
        v20 = (void (__thiscall **)(BuildingClass *, int, int))_EBP->TechnoClass; /*0x44b9ad*/
        v143 = g_TerrainTypeTable; /*0x44b9b0*/
        v21 = LinkedList::Pop((LinkedList *)_EBP->?); /*0x44b9b7*/
        v20[64](_EBP, v21, v143); /*0x44b9bf*/
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD))_EBP->TechnoClass + 122))(_EBP, 5, 0); /*0x44b9cd*/
        return 1; /*0x44b9cd*/
      }
    }
    else
    {
      _EBP->? = 2; /*0x44ba0b*/
      _EBP->BuildingClass_field_bool_6DD = 0; /*0x44ba15*/
      _EBP->RepairProgress[0] = 0; /*0x44ba1c*/
      v24 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44ba22*/
      *(_DWORD *)&_EBP->__pad_628[12] = 1; /*0x44ba32*/
      *(_DWORD *)_EBP->__pad_628 = v24; /*0x44ba38*/
      *(_DWORD *)&_EBP->__pad_628[4] = v153; /*0x44ba3e*/
      *(_DWORD *)&_EBP->__pad_628[8] = 1; /*0x44ba41*/
      if ( _EBP->Type->? != -1 )
      {
        v25 = _EBP->? - 1; /*0x44ba5f*/
        _EBP->? = v25; /*0x44ba62*/
        _EBP->? = v25 <= 0 ? 0 : v25;
      }
    }
LABEL_231:
    _EAX = MissionClass::GetMissionControl((MissionClass *)_EBP); /*0x44c819*/
    __asm /*0x44c820*/
    {
      fld qword ptr [eax+10h]
      fmul ds:dbl_7E27F8
    }
    LOWORD(result) = Math::RoundToInt(v1); /*0x44c829*/
    return result; /*0x44c835*/
  }
  if ( Type->Armory )
  {
    v26 = _EBP->?; /*0x44ba87*/
    if ( v26 )
    {
      if ( v26 == 2 ) /*0x44ba98*/
      {
        if ( Locomotor::GetSpeed((Locomotor *)_EBP->__pad_628) || (v27 = *(_DWORD *)&_EBP->__pad_628[12]) == 0 ) /*0x44bab7*/
        {
          LOBYTE(_EBP->RepairProgress[1]) = 0; /*0x44bae8*/
        }
        else
        {
          v28 = *(_DWORD *)&_EBP->__pad_628[16]; /*0x44bab9*/
          v29 = _EBP->RepairProgress[0]; /*0x44babf*/
          LOBYTE(_EBP->RepairProgress[1]) = 1; /*0x44bac7*/
          _EBP->RepairProgress[0] = v28 + v29; /*0x44bace*/
          v30 = v153; /*0x44bada*/
          *(_DWORD *)_EBP->__pad_628 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44bade*/
          *(_DWORD *)&_EBP->__pad_628[4] = v30; /*0x44bae0*/
          *(_DWORD *)&_EBP->__pad_628[8] = v27; /*0x44bae3*/
        }
        _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44baef*/
        __asm /*0x44baf4*/
        {
          fild dword ptr [ebp+620h]
          fld qword ptr [eax+16F0h]
          fmul ds:dbl_7E27F8
          fcompp
          fnstsw ax
        }
        if ( (_EAX & 0x4100) != 0 ) /*0x44bb0d*/
        {
          v32 = (Power *)(Team::GetMember((Team *)_EBP, 0) + 336); /*0x44bb1b*/
          if ( VeinholeClass::GetState((float *)&v32->Power_field_0x0) ) /*0x44bb23*/
            Power::ChangedHouse(v32, 1); /*0x44bb30*/
          else
            Timer::SetFlag((Timer *)v32, 1); /*0x44bb37*/
          v33 = (void (__thiscall **)(BuildingClass *, int, int))_EBP->TechnoClass; /*0x44bb42*/
          v145 = g_TerrainTypeTable; /*0x44bb45*/
          v34 = LinkedList::Pop((LinkedList *)_EBP->?); /*0x44bb4c*/
          v33[64](_EBP, v34, v145); /*0x44bb54*/
          (*((void (__thiscall **)(BuildingClass *, int, _DWORD))_EBP->TechnoClass + 122))(_EBP, 5, 0); /*0x44bb62*/
        }
      }
    }
    else
    {
      _EBP->? = 2; /*0x44bb6d*/
      _EBP->BuildingClass_field_bool_6DD = 0; /*0x44bb77*/
      _EBP->RepairProgress[0] = 0; /*0x44bb7e*/
      v35 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44bb84*/
      *(_DWORD *)&_EBP->__pad_628[12] = 1; /*0x44bb94*/
      *(_DWORD *)_EBP->__pad_628 = v35; /*0x44bb9a*/
      *(_DWORD *)&_EBP->__pad_628[4] = v153; /*0x44bba0*/
      *(_DWORD *)&_EBP->__pad_628[8] = 1; /*0x44bba3*/
      v36 = _EBP->? - 1; /*0x44bbac*/
      _EBP->? = v36; /*0x44bbb1*/
      _EBP->? = v36 <= 0 ? 0 : v36;
    }
    goto LABEL_231; /*0x44bb68*/
  }
  if ( Type->UnitRepair )
  {
    v37 = _EBP->?; /*0x44bbd6*/
    if ( v37 )
    {
      v38 = v37 - 1; /*0x44bbe4*/
      if ( v38 )
      {
        if ( v38 == 1 )
        {
          if ( (unsigned __int8)Team::AllMembersValid((Team *)_EBP) )
          {
            if ( !*(_DWORD *)&_EBP->__pad_628[12] ) /*0x44bcc7*/
              *(_DWORD *)&_EBP->__pad_628[12] = 1; /*0x44bcd6*/
            if ( Locomotor::GetSpeed((Locomotor *)_EBP->__pad_628) || (v47 = *(_DWORD *)&_EBP->__pad_628[12]) == 0 ) /*0x44bcf5*/
            {
              LOBYTE(_EBP->RepairProgress[1]) = 0; /*0x44bd26*/
            }
            else
            {
              v48 = *(_DWORD *)&_EBP->__pad_628[16]; /*0x44bcf7*/
              v49 = _EBP->RepairProgress[0]; /*0x44bcfd*/
              LOBYTE(_EBP->RepairProgress[1]) = 1; /*0x44bd05*/
              _EBP->RepairProgress[0] = v48 + v49; /*0x44bd0c*/
              v50 = v153; /*0x44bd18*/
              *(_DWORD *)_EBP->__pad_628 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44bd1c*/
              *(_DWORD *)&_EBP->__pad_628[4] = v50; /*0x44bd1e*/
              *(_DWORD *)&_EBP->__pad_628[8] = v47; /*0x44bd21*/
            }
            _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44bd2d*/
            __asm /*0x44bd32*/
            {
              fild dword ptr [ebp+620h]
              fld qword ptr [eax+16E8h]
              fmul ds:dbl_7E27F8
              fcompp
              fnstsw ax
            }
            if ( (_EAX & 0x4100) != 0
              && (*((int (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass + 157))(_EBP, 19) == 1 )
            {
              v52 = (int (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass; /*0x44bd66*/
              _EBP->BuildingClass_field_bool_6DD = 0; /*0x44bd6d*/
              _EBP->RepairProgress[0] = 0; /*0x44bd74*/
              v53 = v52[157](_EBP, 28) - 1; /*0x44bd80*/
              if ( v53 )
              {
                v54 = v53 == 31; /*0x44bd87*/
                isOwnedByCurrentPlayer = _EBP->?; /*0x44bd8a*/
                if ( v54 )
                {
                  if ( isOwnedByCurrentPlayer /*0x44bfd9*/
                    && !(*(int (__stdcall **)(int *))(_EBP->?->arrayIndex + 24))(&_EBP->?->arrayIndex) )
                  {
                    VoxClass::FindAndPlay((VoxClass *)stru_818E00.?, -1); /*0x44bfea*/
                  }
                  BuildingClass::ClearAnims(_EBP, 8); /*0x44bff3*/
                  BuildingClass::ClearAnims(_EBP, 11); /*0x44bffc*/
                  BuildingClass::GetHealthRatio(_EBP); /*0x44c003*/
                  _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c008*/
                  __asm /*0x44c00e*/
                  {
                    fcomp qword ptr [edx+1700h]
                    fnstsw ax
                  }
                  if ( (_AX & 0x4100) != 0 ) /*0x44c019*/
                  {
                    v75 = 1; /*0x44c021*/
                    v76 = &_EBP->Type->__pad_F70[796]; /*0x44c023*/
                  }
                  else
                  {
                    v75 = 0; /*0x44c030*/
                    v76 = &_EBP->Type->__pad_F70[780]; /*0x44c032*/
                  }
                  if ( v76 && *v76 ) /*0x44c03b*/
                    BuildingClass::PlayAnim(_EBP, *(int *)&DSurface_ViewBounds.__pad_FC[324], v76, 12, v75, 0, 0); /*0x44c048*/
                  BuildingClass::GetHealthRatio(_EBP); /*0x44c04f*/
                  _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c054*/
                  __asm /*0x44c059*/
                  {
                    fcomp qword ptr [eax+1700h]
                    fnstsw ax
                  }
                  if ( (_EAX & 0x4100) != 0 ) /*0x44c064*/
                  {
                    v79 = 1; /*0x44c06c*/
                    v80 = &_EBP->Type->__pad_F70[184]; /*0x44c06e*/
                  }
                  else
                  {
                    v79 = 0; /*0x44c07b*/
                    v80 = &_EBP->Type->__pad_F70[168]; /*0x44c07d*/
                  }
                  if ( v80 && *v80 ) /*0x44c086*/
                    BuildingClass::PlayAnim(_EBP, v77, v80, 3, v79, 0, 0); /*0x44c093*/
                  _EBP->? = 1; /*0x44c098*/
                }
                else
                {
                  if ( isOwnedByCurrentPlayer ) /*0x44bd98*/
                  {
                    v56 = ((__int64 (__thiscall *)(BuildingClass *, int *))*((_DWORD *)_EBP->TechnoClass + 110))( /*0x44bda4*/
                            _EBP,
                            &v151.m_Position);
                    if ( (unsigned __int8)CreateTriggerClassIfFarEnough(8, SHIDWORD(v56), *(_DWORD *)v56) ) /*0x44bdb2*/
                      VoxClass::FindAndPlay((VoxClass *)&stru_818E00.?[6], -1); /*0x44bdc5*/
                  }
                  BuildingClass::ClearAnims(_EBP, 8); /*0x44bdce*/
                  BuildingClass::ClearAnims(_EBP, 11); /*0x44bdd7*/
                  BuildingClass::GetHealthRatio(_EBP); /*0x44bdde*/
                  _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44bde3*/
                  __asm /*0x44bde9*/
                  {
                    fcomp qword ptr [edx+1700h]
                    fnstsw ax
                  }
                  if ( (_AX & 0x4100) != 0 ) /*0x44bdf4*/
                  {
                    v59 = 1; /*0x44bdfc*/
                    v60 = &_EBP->Type->__pad_F70[796]; /*0x44bdfe*/
                  }
                  else
                  {
                    v59 = 0; /*0x44be0b*/
                    v60 = &_EBP->Type->__pad_F70[780]; /*0x44be0d*/
                  }
                  if ( v60 && *v60 ) /*0x44be16*/
                    BuildingClass::PlayAnim(_EBP, *(int *)&DSurface_ViewBounds.__pad_FC[324], v60, 12, v59, 0, 0); /*0x44be23*/
                  BuildingClass::GetHealthRatio(_EBP); /*0x44be2a*/
                  _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44be2f*/
                  __asm /*0x44be34*/
                  {
                    fcomp qword ptr [eax+1700h]
                    fnstsw ax
                  }
                  if ( (_EAX & 0x4100) != 0 ) /*0x44be3f*/
                  {
                    v63 = 1; /*0x44be47*/
                    v64 = &_EBP->Type->__pad_F70[184]; /*0x44be49*/
                  }
                  else
                  {
                    v63 = 0; /*0x44be56*/
                    v64 = &_EBP->Type->__pad_F70[168]; /*0x44be58*/
                  }
                  if ( v64 && *v64 ) /*0x44be61*/
                    BuildingClass::PlayAnim(_EBP, v61, v64, 3, v63, 0, 0); /*0x44be6e*/
                  _EBP->? = 1; /*0x44be76*/
                  Member = Team::GetMember((Team *)_EBP, 0); /*0x44be7c*/
                  if ( Member )
                    v66 = (*(_BYTE *)(Member + 20) & 4) != 0 ? (TechnoClass *)Member : 0;
                  else
                    v66 = 0; /*0x44be85*/
                  if ( v66->focus && !(unsigned __int8)House::IsCurrentPlayer((House *)v66->owner) ) /*0x44bea5*/
                  {
                    (*((void (__thiscall **)(TechnoClass *, int, _DWORD))v66->RadioClass + 122))(v66, 2, 0); /*0x44beb5*/
                    (*((void (__thiscall **)(TechnoClass *, AbstractClass *, int))v66->RadioClass + 288))( /*0x44bec7*/
                      v66,
                      v66->focus,
                      1);
                    TechnoClass::SetFocus(v66, 0); /*0x44bed0*/
                    (*((void (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass + 157))(_EBP, 3); /*0x44bedc*/
                    v66->queueUpToEnter = 0; /*0x44bee2*/
                    return 1; /*0x44bef1*/
                  }
                  v146 = g_TerrainTypeTable; /*0x44befa*/
                  v151.m_Data = _EBP->TechnoClass; /*0x44befe*/
                  v67 = Team::GetMember((Team *)_EBP, 0); /*0x44bf02*/
                  v68 = (_DWORD **)(*((int (__thiscall **)(BuildingClass *, int *, int, int))v151.m_Data + 309))( /*0x44bf13*/
                                     _EBP,
                                     &v151.m_Size,
                                     v67,
                                     v146);
                  focus = _EBP->?; /*0x44bf19*/
                  v70 = *v68; /*0x44bf1f*/
                  *(_DWORD *)v151.__pad_0 = v70; /*0x44bf23*/
                  if ( focus ) /*0x44bf27*/
                  {
                    v70 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, int *))focus->ptr_0 + 18))(focus, &v152); /*0x44bf30*/
                    LOWORD(v151.m_Data) = *v70 / 256; /*0x44bf43*/
                    HIWORD(v151.m_Data) = v70[1] / 256; /*0x44bf57*/
                    LOWORD(v70) = v151.m_Data; /*0x44bf5c*/
                    *(_DWORD *)v151.__pad_0 = v151.m_Data; /*0x44bf60*/
                  }
                  if ( __PAIR32__(*(unsigned __int16 *)&v151.__pad_0[2], (unsigned __int16)v70) != g_TerrainTypeTable ) /*0x44bf6b*/
                  {
                    (*((void (__thiscall **)(TechnoClass *, int, _DWORD))v66->RadioClass + 122))(v66, 2, 0); /*0x44bf87*/
                    v71 = (void (__thiscall **)(TechnoClass *, void *, int))v66->RadioClass; /*0x44bf8d*/
                    v72 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v151.__pad_0); /*0x44bf9a*/
                    v71[288](v66, v72, 1); /*0x44bfa2*/
                    (*((void (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass + 157))(_EBP, 3); /*0x44bfaf*/
                    v66->queueUpToEnter = 0; /*0x44bfb5*/
                    return 1; /*0x44bfc8*/
                  }
                }
              }
            }
            return 1; /*0x44c09e*/
          }
          else
          {
            BuildingClass::ClearAnims(_EBP, 8); /*0x44bc05*/
            BuildingClass::ClearAnims(_EBP, 11); /*0x44bc0e*/
            BuildingClass::GetHealthRatio(_EBP); /*0x44bc15*/
            _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44bc1a*/
            __asm /*0x44bc20*/
            {
              fcomp qword ptr [edx+1700h]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x44bc2b*/
            {
              v41 = 1; /*0x44bc33*/
              v42 = &_EBP->Type->__pad_F70[796]; /*0x44bc38*/
            }
            else
            {
              v41 = 0; /*0x44bc45*/
              v42 = &_EBP->Type->__pad_F70[780]; /*0x44bc47*/
            }
            if ( v42 && *v42 ) /*0x44bc50*/
              BuildingClass::PlayAnim(_EBP, *(int *)&DSurface_ViewBounds.__pad_FC[324], v42, 12, v41, 0, 0); /*0x44bc5d*/
            BuildingClass::GetHealthRatio(_EBP); /*0x44bc64*/
            _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44bc69*/
            __asm /*0x44bc6e*/
            {
              fcomp qword ptr [eax+1700h]
              fnstsw ax
            }
            if ( (_EAX & 0x4100) != 0 ) /*0x44bc79*/
            {
              v45 = 1; /*0x44bc81*/
              v46 = &_EBP->Type->__pad_F70[184]; /*0x44bc86*/
            }
            else
            {
              v45 = 0; /*0x44bc93*/
              v46 = &_EBP->Type->__pad_F70[168]; /*0x44bc95*/
            }
            if ( v46 && *v46 ) /*0x44bc9e*/
              BuildingClass::PlayAnim(_EBP, v43, v46, 3, v45, 0, 0); /*0x44bcab*/
            _EBP->? = 1; /*0x44bcb0*/
            return 1; /*0x44bcba*/
          }
        }
      }
      else
      {
        v54 = (unsigned __int8)Team::AllMembersValid((Team *)_EBP) == 0; /*0x44c0af*/
        v81 = _EBP->Anims[8]; /*0x44c0b1*/
        if ( v54 ) /*0x44c0b7*/
        {
          if ( v81 || _EBP->Anims[11] ) /*0x44c0c1*/
          {
            BuildingClass::GetHealthRatio(_EBP); /*0x44c0cf*/
            _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c0d4*/
            __asm /*0x44c0da*/
            {
              fcomp qword ptr [ecx+1700h]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x44c0e5*/
            {
              v85 = 1; /*0x44c0ed*/
              v86 = &_EBP->Type->__pad_F70[796]; /*0x44c0f2*/
            }
            else
            {
              v85 = 0; /*0x44c0ff*/
              v86 = &_EBP->Type->__pad_F70[780]; /*0x44c101*/
            }
            if ( v86 && *v86 ) /*0x44c10a*/
              BuildingClass::PlayAnim(_EBP, v82, v86, 12, v85, 0, 0); /*0x44c117*/
            BuildingClass::GetHealthRatio(_EBP); /*0x44c11e*/
            _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c123*/
            __asm /*0x44c129*/
            {
              fcomp qword ptr [edx+1700h]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x44c134*/
            {
              v89 = 1; /*0x44c13c*/
              v90 = &_EBP->Type->__pad_F70[184]; /*0x44c141*/
            }
            else
            {
              v89 = 0; /*0x44c14e*/
              v90 = &_EBP->Type->__pad_F70[168]; /*0x44c150*/
            }
            if ( v90 && *v90 ) /*0x44c159*/
              BuildingClass::PlayAnim(_EBP, *(int *)&DSurface_ViewBounds.__pad_FC[324], v90, 3, v89, 0, 0); /*0x44c166*/
            BuildingClass::ClearAnims(_EBP, 8); /*0x44c16f*/
            BuildingClass::ClearAnims(_EBP, 11); /*0x44c178*/
          }
          if ( !_EBP->Anims[12] ) /*0x44c17d*/
          {
            v91 = (void (__thiscall **)(BuildingClass *, int, int))_EBP->TechnoClass; /*0x44c185*/
            _EBP->BuildingClass_field_bool_6DD = 1; /*0x44c18e*/
            v91[122](_EBP, 5, 1); /*0x44c195*/
          }
          return 1; /*0x44c1a7*/
        }
        if ( v81 ) /*0x44c1aa*/
          return 1; /*0x44c1b8*/
        v92 = Team::GetMember((Team *)_EBP, 0); /*0x44c1bc*/
        v93 = (int (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass; /*0x44c1c1*/
        v94 = v92; /*0x44c1c7*/
        v95 = Team::GetMember((Team *)_EBP, 0); /*0x44c1c9*/
        if ( v93[310](_EBP, v95) < 200 ) /*0x44c1dc*/
        {
          if ( !*(_DWORD *)(v94 + 1652) ) /*0x44c1e2*/
            WinAPI::Wrapper(-2147467261); /*0x44c1ef*/
          v54 = (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v94 + 1652) + 96))(*(_DWORD *)(v94 + 1652)) == 0; /*0x44c200*/
          v96 = *(_DWORD *)(v94 + 1652); /*0x44c202*/
          if ( !v54 ) /*0x44c208*/
          {
            if ( !v96 ) /*0x44c20c*/
              WinAPI::Wrapper(-2147467261); /*0x44c213*/
            if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v94 + 1652) + 16))(*(_DWORD *)(v94 + 1652)) ) /*0x44c221*/
            {
              if ( !*(_DWORD *)(v94 + 1652) ) /*0x44c228*/
                WinAPI::Wrapper(-2147467261); /*0x44c235*/
              (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v94 + 1652) + 92))(*(_DWORD *)(v94 + 1652)); /*0x44c243*/
            }
            return 1; /*0x44c252*/
          }
          if ( !v96 ) /*0x44c255*/
            WinAPI::Wrapper(-2147467261); /*0x44c25c*/
          if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v94 + 1652) + 96))(*(_DWORD *)(v94 + 1652)) /*0x44c279*/
            && *(_DWORD *)(Team::GetMember((Team *)_EBP, 0) + 1444) )
          {
            v97 = (FootClass *)Team::GetMember((Team *)_EBP, 0); /*0x44c284*/
            FootClass::ClearPathIndex(v97); /*0x44c28b*/
          }
        }
        if ( (*((int (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass + 157))(_EBP, 19) == 1 )
        {
          v98 = Team::GetMember((Team *)_EBP, 0); /*0x44c2ae*/
          BuildingClass::GetHealthRatio((BuildingClass *)v98); /*0x44c2b2*/
          _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c2b7*/
          __asm /*0x44c2bc*/
          {
            fcomp qword ptr [eax+16F8h]
            fnstsw ax
          }
          v100 = (_EAX & 0x100) != 0; /*0x44c2c7*/
          v149 = *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v98 + 132))(v98) + 3364); /*0x44c2e6*/
          v101 = (*((int (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass + 157))(_EBP, 28); /*0x44c2ea*/
          v102 = v101 == 1; /*0x44c2f3*/
          v103 = v101 == 33; /*0x44c2f9*/
          if ( (v100 || v149) && (v102 || v103) )
          {
            if ( !*(_BYTE *)(v98 + 976) || (unsigned __int8)House::IsCurrentPlayer(*(House **)(v98 + 540)) ) /*0x44c4cc*/
            {
              if ( _EBP->? ) /*0x44c4f3*/
                VoxClass::FindAndPlay((VoxClass *)&stru_818E00.?[5], -1); /*0x44c507*/
              _EBP->? = 2; /*0x44c50e*/
              BuildingClass::GetHealthRatio(_EBP); /*0x44c518*/
              _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c51d*/
              __asm /*0x44c523*/
              {
                fcomp qword ptr [ecx+1700h]
                fnstsw ax
              }
              if ( (_AX & 0x4100) != 0 ) /*0x44c52e*/
              {
                v117 = 1; /*0x44c536*/
                v118 = &_EBP->Type->__pad_F70[660]; /*0x44c53b*/
              }
              else
              {
                v117 = 0; /*0x44c548*/
                v118 = &_EBP->Type->__pad_F70[644]; /*0x44c54a*/
              }
              if ( v118 && *v118 ) /*0x44c553*/
                BuildingClass::PlayAnim(_EBP, v114, v118, 10, v117, 0, 0); /*0x44c560*/
              BuildingClass::ClearAnims(_EBP, 3); /*0x44c569*/
              BuildingClass::ClearAnims(_EBP, 18); /*0x44c572*/
              _EBP->BuildingClass_field_bool_6DD = 0; /*0x44c577*/
              _EBP->RepairProgress[0] = 0; /*0x44c57e*/
              *(_DWORD *)_EBP->__pad_628 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44c594*/
              v119 = v153; /*0x44c596*/
              *(_DWORD *)&_EBP->__pad_628[12] = 1; /*0x44c59a*/
              *(_DWORD *)&_EBP->__pad_628[4] = v119; /*0x44c5a0*/
              *(_DWORD *)&_EBP->__pad_628[8] = 1; /*0x44c5a3*/
            }
            else
            {
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v98 + 416))(v98, 1); /*0x44c4db*/
              _EBP->? = 0; /*0x44c4e1*/
              _EBP->BuildingClass_field_bool_6DD = 1; /*0x44c4e7*/
            }
          }
          else
          {
            BuildingClass::GetHealthRatio((BuildingClass *)v98); /*0x44c31a*/
            _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c31f*/
            __asm /*0x44c324*/
            {
              fcomp qword ptr [eax+16F8h]
              fnstsw ax
            }
            if ( (_EAX & 0x4000) != 0 )
            {
              if ( !*(_DWORD *)(v98 + 1652) ) /*0x44c335*/
                WinAPI::Wrapper(-2147467261); /*0x44c342*/
              if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v98 + 1652) + 96))(*(_DWORD *)(v98 + 1652)) )
              {
                v105 = Team::GetMember((Team *)_EBP, 0); /*0x44c35e*/
                if ( v105 )
                  v106 = (*(_BYTE *)(v105 + 20) & 4) != 0 ? (TechnoClass *)v105 : 0;
                else
                  v106 = 0; /*0x44c367*/
                if ( !v106[1].alignmentPadding154[0] ) /*0x44c379*/
                  WinAPI::Wrapper(-2147467261); /*0x44c386*/
                (*(void (__stdcall **)(int))(*(_DWORD *)v106[1].alignmentPadding154[0] + 88))(v106[1].alignmentPadding154[0]); /*0x44c394*/
                if ( !v106->focus || (unsigned __int8)House::IsCurrentPlayer((House *)v106->owner) ) /*0x44c3a5*/
                {
                  v107 = (int (__thiscall **)(BuildingClass *, int *, int, int))_EBP->TechnoClass; /*0x44c3f3*/
                  v147 = g_TerrainTypeTable; /*0x44c3f6*/
                  v108 = Team::GetMember((Team *)_EBP, 0); /*0x44c3fa*/
                  v109 = (_DWORD **)v107[309](_EBP, &v151.StreamClass_field_0C, v108, v147); /*0x44c407*/
                  v110 = _EBP->?; /*0x44c40d*/
                  v111 = *v109; /*0x44c413*/
                  *(_DWORD *)v151.__pad_0 = v111; /*0x44c417*/
                  if ( v110 ) /*0x44c41b*/
                  {
                    v111 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, int *))v110->ptr_0 + 18))(v110, &v152); /*0x44c424*/
                    LOWORD(v151.m_Data) = *v111 / 256; /*0x44c437*/
                    HIWORD(v151.m_Data) = v111[1] / 256; /*0x44c44b*/
                    LOWORD(v111) = v151.m_Data; /*0x44c450*/
                    *(_DWORD *)v151.__pad_0 = v151.m_Data; /*0x44c454*/
                  }
                  if ( __PAIR32__(*(unsigned __int16 *)&v151.__pad_0[2], (unsigned __int16)v111) != g_TerrainTypeTable ) /*0x44c45f*/
                  {
                    (*((void (__thiscall **)(TechnoClass *, int, _DWORD))v106->RadioClass + 122))(v106, 2, 0); /*0x44c47a*/
                    v112 = (void (__thiscall **)(TechnoClass *, void *, int))v106->RadioClass; /*0x44c480*/
                    v113 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v151.__pad_0); /*0x44c48e*/
                    v112[288](v106, v113, 1); /*0x44c496*/
                    TechnoClass::SetFocus(v106, 0); /*0x44c49f*/
                    (*((void (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass + 157))(_EBP, 3); /*0x44c4ab*/
                    v106->queueUpToEnter = 0; /*0x44c4b1*/
                  }
                }
                else
                {
                  (*((void (__thiscall **)(TechnoClass *, int, _DWORD))v106->RadioClass + 122))(v106, 2, 0); /*0x44c3b5*/
                  (*((void (__thiscall **)(TechnoClass *, AbstractClass *, int))v106->RadioClass + 288))( /*0x44c3c8*/
                    v106,
                    v106->focus,
                    1);
                  TechnoClass::SetFocus(v106, 0); /*0x44c3d1*/
                  v106->queueUpToEnter = 0; /*0x44c3d6*/
                  (*((void (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass + 157))(_EBP, 3); /*0x44c3e3*/
                }
              }
            }
          }
        }
        else if ( !HouseClass::IonSensitivesShouldBeOffline() ) /*0x44c5b1*/
        {
          v120 = (_DWORD *)(Team::GetMember((Team *)_EBP, 0) + 1652); /*0x44c5ce*/
          if ( !*v120 ) /*0x44c5c8*/
            WinAPI::Wrapper(-2147467261); /*0x44c5dd*/
          if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*v120 + 96))(*v120) ) /*0x44c5e7*/
          {
            v121 = (_DWORD *)(Team::GetMember((Team *)_EBP, 0) + 1652); /*0x44c602*/
            if ( !*v121 ) /*0x44c5fc*/
              WinAPI::Wrapper(-2147467261); /*0x44c611*/
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v121 + 88))(*v121); /*0x44c61b*/
          }
        }
      }
    }
    else
    {
      if ( !(unsigned __int8)Team::AllMembersValid((Team *)_EBP) ) /*0x44c625*/
      {
        BuildingClass::ClearAnims(_EBP, 8); /*0x44c636*/
        BuildingClass::ClearAnims(_EBP, 11); /*0x44c63f*/
        BuildingClass::GetHealthRatio(_EBP); /*0x44c646*/
        _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c64b*/
        __asm /*0x44c650*/
        {
          fcomp qword ptr [eax+1700h]
          fnstsw ax
        }
        if ( (_EAX & 0x4100) != 0 ) /*0x44c65b*/
        {
          v124 = 1; /*0x44c663*/
          v125 = &_EBP->Type->__pad_F70[796]; /*0x44c668*/
        }
        else
        {
          v124 = 0; /*0x44c675*/
          v125 = &_EBP->Type->__pad_F70[780]; /*0x44c677*/
        }
        if ( v125 && *v125 ) /*0x44c680*/
          BuildingClass::PlayAnim(_EBP, v122, v125, 12, v124, 0, 0); /*0x44c68d*/
        BuildingClass::GetHealthRatio(_EBP); /*0x44c694*/
        _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c699*/
        __asm /*0x44c69f*/
        {
          fcomp qword ptr [ecx+1700h]
          fnstsw ax
        }
        if ( (_AX & 0x4100) != 0 ) /*0x44c6aa*/
        {
          v129 = 1; /*0x44c6b2*/
          v130 = &_EBP->Type->__pad_F70[184]; /*0x44c6b7*/
        }
        else
        {
          v129 = 0; /*0x44c6c4*/
          v130 = &_EBP->Type->__pad_F70[168]; /*0x44c6c6*/
        }
        if ( v130 && *v130 ) /*0x44c6cf*/
          BuildingClass::PlayAnim(_EBP, v126, v130, 3, v129, 0, 0); /*0x44c6dc*/
        (*((void (__thiscall **)(BuildingClass *, int, int))_EBP->TechnoClass + 122))(_EBP, 5, 1); /*0x44c6ea*/
        return 1; /*0x44c6fc*/
      }
      _EBP->BuildingClass_field_bool_6DD = 0; /*0x44c700*/
      v151.m_Data = (void *)100; /*0x44c707*/
      v131 = Team::GetMember((Team *)_EBP, 0); /*0x44c70f*/
      v132 = (_DWORD *)(v131 + 1652); /*0x44c714*/
      *(_DWORD *)v151.__pad_0 = 0; /*0x44c71a*/
      if ( !*(_DWORD *)(v131 + 1652) ) /*0x44c71e*/
        goto LABEL_215; /*0x44c71e*/
      v133 = StreamClass::Set2(&v151, (_DWORD *)(v131 + 1652)); /*0x44c727*/
      if ( v133 < 0 && v133 != -2147467262 ) /*0x44c735*/
        WinAPI::Wrapper(v133); /*0x44c738*/
      if ( !*(_DWORD *)v151.__pad_0 ) /*0x44c743*/
LABEL_215:
        WinAPI::Wrapper(-2147467261); /*0x44c74a*/
      (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)v151.__pad_0 + 12))(*(_DWORD *)v151.__pad_0, &v152); /*0x44c75b*/
      if ( !memcmp(&v152, &stru_7E9A40, 0x10u) ) /*0x44c76e*/
        v151.m_Data = (void *)200; /*0x44c777*/
      if ( !memcmp(&v152, &g_CLSID_DriveLocomotion2, 0x10u) ) /*0x44c78b*/
        v151.m_Data = (void *)200; /*0x44c78f*/
      if ( (*((int (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass + 157))(_EBP, 19) == 1 ) /*0x44c7a3*/
      {
        v134 = (int (__thiscall **)(BuildingClass *, int))_EBP->TechnoClass; /*0x44c7a5*/
        v135 = Team::GetMember((Team *)_EBP, 0); /*0x44c7ac*/
        v136 = v134[310](_EBP, v135); /*0x44c7b4*/
        if ( v136 < (int)v151.m_Data ) /*0x44c7be*/
        {
          v137 = *(_DWORD *)v151.__pad_0; /*0x44c7c0*/
          _EBP->? = 1; /*0x44c7c4*/
          if ( v137 ) /*0x44c7d0*/
            (*(void (__stdcall **)(int))(*(_DWORD *)v137 + 8))(v137); /*0x44c7d5*/
          return 3; /*0x44c7e4*/
        }
      }
      if ( !HouseClass::IonSensitivesShouldBeOffline() ) /*0x44c7eb*/
      {
        if ( !*v132 ) /*0x44c7f4*/
          WinAPI::Wrapper(-2147467261); /*0x44c7fe*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v132 + 88))(*v132); /*0x44c808*/
      }
      if ( *(_DWORD *)v151.__pad_0 ) /*0x44c811*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v151.__pad_0 + 8))(*(_DWORD *)v151.__pad_0); /*0x44c816*/
    }
    goto LABEL_231; /*0x44bbec*/
  }
  if ( !Type->UnitReload ) /*0x44c83e*/
    return 15; /*0x44c971*/
  v139 = 0; /*0x44c84a*/
  v150 = 0; /*0x44c84e*/
  if ( _EBP->?[2] <= 0 ) /*0x44c853*/
    goto LABEL_247; /*0x44c853*/
  do /*0x44c929*/
  {
    v140 = Team::GetMember((Team *)_EBP, v139); /*0x44c85c*/
    v141 = (_DWORD *)v140; /*0x44c861*/
    if ( !v140 ) /*0x44c865*/
      goto LABEL_244; /*0x44c865*/
    if ( (*((int (__thiscall **)(BuildingClass *, int, int))_EBP->TechnoClass + 158))(_EBP, 29, v140) == 1 /*0x44c893*/
      && v141[27] == *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v141 + 132))(v141) + 160) )
    {
      goto LABEL_243; /*0x44c893*/
    }
    if ( (*(int (__thiscall **)(_DWORD *))(*v141 + 388))(v141) != 7 /*0x44c8b5*/
      && (*((int (__thiscall **)(BuildingClass *, int, _DWORD *))_EBP->TechnoClass + 158))(_EBP, 19, v141) == 1 )
    {
      v150 = 1; /*0x44c8bb*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v141 + 388))(v141) ) /*0x44c8bf*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v141 + 488))(v141, 0, 0); /*0x44c8cf*/
        goto LABEL_244; /*0x44c8d5*/
      }
      if ( (*((int (__thiscall **)(BuildingClass *, int, _DWORD *))_EBP->TechnoClass + 158))(_EBP, 31, v141) != 1 /*0x44c8fb*/
        && (*((int (__thiscall **)(BuildingClass *, int, _DWORD *))_EBP->TechnoClass + 158))(_EBP, 28, v141) != 1 )
      {
LABEL_243:
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v141 + 1156))(v141, 0, 1); /*0x44c904*/
        (*(void (__thiscall **)(_DWORD *, int))(*v141 + 496))(v141, 5); /*0x44c910*/
        (*(void (__thiscall **)(_DWORD *))(*v141 + 820))(v141); /*0x44c91a*/
      }
    }
LABEL_244:
    ++v139; /*0x44c920*/
  }
  while ( v139 < _EBP->?[2] ); /*0x44c929*/
  if ( v150 ) /*0x44c935*/
  {
    _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44c937*/
    __asm /*0x44c93c*/
    {
      fld qword ptr [eax+1508h]
      fmul ds:dbl_7E27F8
    }
    LOWORD(result) = Math::RoundToInt(v1); /*0x44c948*/
    return result; /*0x44c954*/
  }
LABEL_247:
  (*((void (__thiscall **)(BuildingClass *, int, _DWORD))_EBP->TechnoClass + 122))(_EBP, 5, 0); /*0x44c955*/
  return 3; /*0x44b7fa*/
}


// ==== 0x0044C980  BuildingClass::ProcessSuperWeaponEffects  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessSuperWeaponEffects(BuildingClass *this)
{
  double v1; // st7
  HouseClass *owner; // ecx
  void *v4; // eax
  HouseClass *v5; // ebp
  void *v6; // edi
  void *v7; // ebx
  int *v8; // eax
  AnimClass *v9; // eax
  void **v10; // edi
  void *v11; // eax
  int *v12; // ebx
  _DWORD *UIObjectCOM; // eax
  int v14; // edi
  BuildingClass *PsiWarnAnim; // ecx
  int *v16; // eax
  int result; // eax
  AnimClass *v18; // eax
  void **v19; // eax
  void (__thiscall **ptr_0)(BuildingClass *, void *, _DWORD); // edi
  void *v21; // eax
  int (__thiscall **v22)(BuildingClass *, _BYTE *, void *); // edi
  void *v23; // eax
  AnimClass *v24; // eax
  int (__thiscall **v25)(BuildingClass *, _BYTE *, void *); // edi
  void *v26; // eax
  int *v27; // eax
  int v28; // ebp
  void *v29; // ebx
  _WORD *v30; // eax
  int v31; // eax
  int v32; // edx
  int *v33; // eax
  TechnoClass *v35; // eax
  int v36; // eax
  char v37; // cl
  int v38; // edi
  void *v42; // edx
  int *v43; // eax
  _DWORD *v44; // eax
  int v45; // ebx
  int v47; // eax
  char IsCloseEnoughToBuilding; // al
  int v50; // eax
  char v51; // al
  unsigned int v53; // edi
  unsigned int v54; // ebx
  void **v55; // edi
  int v56; // ebp
  _DWORD *v57; // eax
  int v59; // [esp+34h] [ebp-FCh]
  int v60; // [esp+34h] [ebp-FCh]
  double v61; // [esp+38h] [ebp-F8h]
  double v62; // [esp+3Ch] [ebp-F4h]
  double v63; // [esp+3Ch] [ebp-F4h]
  __int64 v64; // [esp+40h] [ebp-F0h]
  double v65; // [esp+40h] [ebp-F0h]
  double v66; // [esp+40h] [ebp-F0h]
  double v67; // [esp+40h] [ebp-F0h]
  double v68; // [esp+40h] [ebp-F0h]
  double v69; // [esp+40h] [ebp-F0h]
  double v70; // [esp+40h] [ebp-F0h]
  double v71; // [esp+40h] [ebp-F0h]
  double v72; // [esp+40h] [ebp-F0h]
  __int16 *v73; // [esp+44h] [ebp-ECh]
  AnimClass *v74; // [esp+5Ch] [ebp-D4h] BYREF
  double v75; // [esp+60h] [ebp-D0h] BYREF
  double v76; // [esp+68h] [ebp-C8h]
  double v77; // [esp+70h] [ebp-C0h]
  double v78; // [esp+78h] [ebp-B8h] BYREF
  void **v79; // [esp+8Ch] [ebp-A4h] BYREF
  double v80; // [esp+90h] [ebp-A0h]
  int v81; // [esp+98h] [ebp-98h]
  int v82[2]; // [esp+A4h] [ebp-8Ch] BYREF
  int v83; // [esp+ACh] [ebp-84h]
  double v84; // [esp+B0h] [ebp-80h] BYREF
  double v85; // [esp+C0h] [ebp-70h] BYREF
  int v86; // [esp+CCh] [ebp-64h]
  double v87[2]; // [esp+D0h] [ebp-60h] BYREF
  __int16 v88; // [esp+E0h] [ebp-50h] BYREF
  _DWORD v89[3]; // [esp+E4h] [ebp-4Ch] BYREF
  int v90; // [esp+F0h] [ebp-40h] BYREF
  _BYTE v91[4]; // [esp+F4h] [ebp-3Ch] BYREF
  _BYTE v92[4]; // [esp+F8h] [ebp-38h] BYREF
  int v93; // [esp+FCh] [ebp-34h] BYREF
  _BYTE v94[12]; // [esp+100h] [ebp-30h] BYREF
  _BYTE v95[12]; // [esp+10Ch] [ebp-24h] BYREF
  _BYTE v96[12]; // [esp+118h] [ebp-18h] BYREF
  _BYTE v97[12]; // [esp+124h] [ebp-Ch] BYREF

  if ( this->Type->NukeSilo ) /*0x44c998*/
  {
    switch ( this->? ) /*0x44c9b5*/
    {
      case 0: /*0x44c9b5*/
        this->BuildingClass_field_bool_6DD = 0; /*0x44c9c0*/
        BuildingClass::StartProduction(this, 2); /*0x44c9c7*/
        owner = this->?; /*0x44c9cc*/
        this->? = 1; /*0x44c9d2*/
        v4 = CellCoord::To_CellObj( /*0x44c9e8*/
               (CellCoord *)&stru_87F5F0.__pad_58[416],
               (__int16 *)&owner->HouseClass_field_timer_C[2]);
        v5 = this->?; /*0x44c9ed*/
        v6 = v4; /*0x44c9f8*/
        v7 = *(void **)(FootClass_Array.?[3] + 4 * AnimTypeClass::FindIndex((AnimTypeClass *)&stru_818E00.?[14])); /*0x44ca0f*/
        v8 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v6 + 72))(v6, v89); /*0x44ca14*/
        v82[0] = *v8; /*0x44ca1e*/
        v82[1] = v8[1]; /*0x44ca25*/
        v83 = v8[2]; /*0x44ca2c*/
        v9 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x44ca30*/
        if ( v9 ) /*0x44ca3a*/
          v10 = AnimClass::ctor(v9, v7, v82, 0, 1, (void *)0x600, 0, 0); /*0x44ca56*/
        else
          v10 = 0; /*0x44ca5a*/
        BuildingClass::SetField95((BuildingClass *)v10, 0); /*0x44ca60*/
        Function::Method_424CA0(v10, (int)v5); /*0x44ca68*/
        *((_BYTE *)v10 + 413) = 1; /*0x44ca6d*/
        this->PsiWarnAnim = (AnimClass *)v10; /*0x44ca74*/
        goto LABEL_7; /*0x44ca74*/
      case 1: /*0x44c9b5*/
LABEL_7:
        if ( this->BuildingClass_field_bool_6DD ) /*0x44ca7a*/
        {
          BuildingClass::StartProduction(this, 4); /*0x44ca88*/
          this->? = 2; /*0x44ca8d*/
        }
        goto LABEL_9; /*0x44ca8d*/
      case 2: /*0x44c9b5*/
LABEL_9:
        (*((void (__thiscall **)(BuildingClass *, double *))this->TechnoClass + 18))(this, &v78); /*0x44ca97*/
        v11 = CellCoord::To_CellObj( /*0x44cab5*/
                (CellCoord *)&stru_87F5F0.__pad_58[416],
                (__int16 *)&this->?->HouseClass_field_timer_C[2]);
        v12 = *(int **)(*((_DWORD *)dword_A8E334 + this->FiringSWType) + 156); /*0x44cad0*/
        UIObjectCOM = (_DWORD *)CreateUIObjectCOM(v12[40], (int)v11, (int)this, v12[41], v12[43], 255, 1); /*0x44caed*/
        v14 = (int)UIObjectCOM; /*0x44caf2*/
        if ( !UIObjectCOM ) /*0x44caf6*/
          goto LABEL_18; /*0x44caf6*/
        Function::Method_46B260(UIObjectCOM, (int)v12); /*0x44caff*/
        PsiWarnAnim = (BuildingClass *)this->PsiWarnAnim; /*0x44cb04*/
        if ( PsiWarnAnim ) /*0x44cb0c*/
        {
          BuildingClass::SetField95(PsiWarnAnim, v14); /*0x44cb0f*/
          this->PsiWarnAnim = 0; /*0x44cb14*/
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 212))(v14); /*0x44cb22*/
        v16 = (int *)(*((int (__thiscall **)(BuildingClass *, double *, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x44cb46*/
                      + 44))(
                       this,
                       &v84,
                       0,
                       0,
                       0,
                       0);
        v82[0] = *v16; /*0x44cb53*/
        v82[1] = v16[1]; /*0x44cb5f*/
        v83 = v16[2]; /*0x44cb66*/
        Math::SinCos(1.570748388432313); /*0x44cb6a*/
        __asm { fstp [esp+0F0h+var_A0] } /*0x44cb6f*/
        Math::ArcTan2(1.570748388432313); /*0x44cb7d*/
        __asm { fmul [esp+0F8h+var_A0] } /*0x44cb82*/
        __asm
        {
          fmul ds:dbl_7E44A8
          fstp [esp+100h+var_70]
        }
        Math::ArcTan2(1.570748388432313); /*0x44cb9d*/
        __asm { fstp [esp+100h+var_A0] } /*0x44cba2*/
        Math::ArcTan2(1.570748388432313); /*0x44cbb0*/
        __asm { fmul [esp+108h+var_A0] } /*0x44cbb5*/
        v87[1] = v85; /*0x44cbc7*/
        __asm { fmul ds:dbl_7E44A8 } /*0x44cbd5*/
        v76 = v85; /*0x44cbec*/
        __asm { fstp [esp+110h+var_60] } /*0x44cbf0*/
        v75 = v87[0]; /*0x44cc05*/
        Math::SinCos(1.570748388432313); /*0x44cc18*/
        __asm { fmul ds:dbl_7E44A8 } /*0x44cc1d*/
        __asm { fstp [esp+0F0h+var_C0] }
        if ( (*(unsigned __int8 (__thiscall **)(int, int *, double *))(*(_DWORD *)v14 + 496))(v14, v82, &v75) ) /*0x44cc38*/
        {
          v18 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x44cc67*/
          if ( v18 ) /*0x44cc71*/
            v19 = AnimClass::ctor( /*0x44cc94*/
                    v18,
                    *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 152),
                    v82,
                    0,
                    1,
                    (void *)0x600,
                    0,
                    0);
          else
            v19 = 0; /*0x44cc9b*/
          v19[64] = (void *)-100; /*0x44cc9d*/
          this->? = 3; /*0x44cca7*/
LABEL_18:
          result = 1; /*0x44ccb1*/
        }
        else
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 32))(v14, 1); /*0x44cc48*/
          this->? = 3; /*0x44cc4b*/
          result = 1; /*0x44cc55*/
        }
        break; /*0x44cc61*/
      case 3: /*0x44c9b5*/
        BuildingClass::StartProduction(this, 5); /*0x44ccc2*/
        this->? = 4; /*0x44ccc7*/
        return 6; /*0x44ccdd*/
      case 4: /*0x44c9b5*/
LABEL_54:
        BuildingClass::StartProduction(this, 1); /*0x44d53c*/
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 5, 0); /*0x44d54d*/
        return 60; /*0x44d55f*/
      default:
        goto LABEL_20;
    }
  }
  else
  {
LABEL_20:
    if ( this->FiringSWType != -1 ) /*0x44cce5*/
    {
      ptr_0 = (void (__thiscall **)(BuildingClass *, void *, _DWORD))this->TechnoClass; /*0x44cced*/
      v64 = (unsigned int)&this->?->HouseClass_field_timer_C[2]; /*0x44ccf6*/
      v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v64); /*0x44ccfc*/
      ptr_0[243](this, v21, HIDWORD(v64)); /*0x44cd04*/
      (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 5, 0); /*0x44cd12*/
    }
    if ( this->Type->EMPulseCannon ) /*0x44cd1e*/
    {
      switch ( this->? ) /*0x44cd3b*/
      {
        case 0: /*0x44cd3b*/
          v22 = (int (__thiscall **)(BuildingClass *, _BYTE *, void *))this->TechnoClass; /*0x44cd48*/
          v23 = CellCoord::To_CellObj( /*0x44cd56*/
                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                  (__int16 *)&this->?->HouseClass_field_timer_C[1]);
          v24 = *(AnimClass **)v22[314](this, v92, v23); /*0x44cd72*/
          v25 = (int (__thiscall **)(BuildingClass *, _BYTE *, void *))this->TechnoClass; /*0x44cd74*/
          v73 = (__int16 *)&this->?->HouseClass_field_timer_C[1]; /*0x44cd7c*/
          v74 = v24; /*0x44cd82*/
          v26 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v73); /*0x44cd86*/
          v79 = *(void ***)v25[178](this, v91, v26); /*0x44cdae*/
          if ( abs16(*(_WORD *)ProgressTimer::GetValue((ProgressTimer *)this->?, &v93) - (_WORD)v74) ) /*0x44cdce*/
          {
            FacingClass::Update((char *)this->?, &v74); /*0x44cddb*/
            return 1; /*0x44cde0*/
          }
          else
          {
            if ( abs16(*(_WORD *)ProgressTimer::GetValue((ProgressTimer *)this->?, &v90) - (_WORD)v79) ) /*0x44ce10*/
              FacingClass::Update((char *)this->?, &v79); /*0x44ce1d*/
            else
              this->? = 1; /*0x44ce2f*/
            return 1; /*0x44ce22*/
          }
        case 1: /*0x44cd3b*/
          v74 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x44ce53*/
          if ( v74 ) /*0x44ce59*/
          {
            v79 = (void **)(FootClass_Array.?[3] + 4 * GlobalArray::FindString((GlobalArray *)&stru_818E00.?[11])); /*0x44ce81*/
            v27 = (int *)(*((int (__thiscall **)(BuildingClass *, _BYTE *, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x44ce9c*/
                          + 44))(
                           this,
                           v97,
                           0,
                           0,
                           0,
                           0);
            AnimClass::ctor(v74, *v79, v27, 0, 1, (void *)0x600, 0, 0); /*0x44ceae*/
          }
          this->? = 2; /*0x44ceb3*/
          return 32; /*0x44cec9*/
        case 2: /*0x44cd3b*/
          v28 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 254))(this, 0); /*0x44cefe*/
          v29 = CellCoord::To_CellObj( /*0x44cf22*/
                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                  (__int16 *)&this->?->HouseClass_field_timer_C[1]);
          LODWORD(v78) = CellCoord::To_CellObj( /*0x44cf2a*/
                           (CellCoord *)&stru_87F5F0.__pad_58[416],
                           (__int16 *)&this->?->HouseClass_field_timer_C[1]);
          if ( stru_A8EB00.?[391] || this->?->HouseClass_field_timer_C[1] == g_TerrainTypeTable ) /*0x44cf50*/
          {
            BuildingClass::StartProduction(this, 1); /*0x44d564*/
            (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 5, 0); /*0x44d571*/
            result = 60; /*0x44d577*/
          }
          else
          {
            v30 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, double *, void *))this->TechnoClass + 178))( /*0x44cf6d*/
                             this,
                             &v85,
                             v29);
            FacingClass::Update((char *)this->?, v30); /*0x44cf7a*/
            v31 = (*((int (__thiscall **)(BuildingClass *, _BYTE *, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x44cf9d*/
                   + 44))(
                    this,
                    v95,
                    0,
                    0,
                    0,
                    0);
            v80 = *(double *)v31; /*0x44cfa5*/
            v81 = *(_DWORD *)(v31 + 8); /*0x44cfb3*/
            v32 = (SLOWORD(this->?->HouseClass_field_timer_C[1]) << 8) + 128; /*0x44cfdc*/
            v89[1] = (SHIWORD(this->?->HouseClass_field_timer_C[1]) << 8) + 128; /*0x44cfe2*/
            v89[0] = v32; /*0x44cfef*/
            v89[2] = 0; /*0x44cff6*/
            Cell::GetGroundHeight(v89); /*0x44d001*/
            v33 = &this->?->HouseClass_field_timer_C[1]; /*0x44d00f*/
            LODWORD(v84) = (*(__int16 *)v33 << 8) + 128; /*0x44d023*/
            __asm { fild dword ptr [esp+0F8h+var_80] } /*0x44d027*/
            __asm { fisub dword ptr [esp+0F8h+var_A0] }
            HIDWORD(v84) = (*((__int16 *)v33 + 1) << 8) + 128; /*0x44d03c*/
            __asm /*0x44d040*/
            {
              fstp [esp+0F8h+var_F0]; double
              fild dword ptr [esp+0F8h+var_A0+4]
              fisub dword ptr [esp+0F8h+var_80+4]
              fstp [esp+0F8h+var_F8]; double
            }
            Math::CalcAngle(v61, v65); /*0x44d04f*/
            __asm /*0x44d054*/
            {
              fsub ds:dbl_7E2820
              fmul ds:dbl_7E2818
            }
            LOWORD(v84) = Math::RoundToInt(v1); /*0x44d065*/
            _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44d06a*/
            __asm /*0x44d074*/
            {
              fild dword ptr [eax+16B8h]
              fstp [esp+0F0h+var_F0]; double
            }
            v35 = (TechnoClass *)ObjectClass::DistanceTo((ObjectClass *)this, (int)v29); /*0x44d07e*/
            v36 = TechnoClass::ComputeScanRange(v35, v66); /*0x44d085*/
            v37 = *(_BYTE *)(v28 + 303); /*0x44d08a*/
            v38 = v36; /*0x44d090*/
            v86 = v36; /*0x44d092*/
            v79 = (void **)CreateUIObjectCOM( /*0x44d0ca*/
                             *(_DWORD *)(v28 + 160),
                             (int)v29,
                             (int)this,
                             *(_DWORD *)(v28 + 164),
                             *(_DWORD *)(v28 + 172),
                             3 * v36 / 4,
                             v37);
            v77 = 0.0; /*0x44d0de*/
            Math::Sqrt(10000.0); /*0x44d0fe*/
            __asm { fstp [esp+0F0h+var_A0] } /*0x44d108*/
            LODWORD(v84) = SLOWORD(v84) - 0x3FFF; /*0x44d112*/
            __asm /*0x44d116*/
            {
              fild dword ptr [esp+0F0h+var_80]
              fmul ds:dbl_7E2810
              fstp [esp+0F0h+var_80]
            }
            Math::ArcTan2(v84); /*0x44d12e*/
            __asm { fmul [esp+0F8h+var_A0] } /*0x44d133*/
            __asm { fstp [esp+100h+var_D0] }
            Math::SinCos(v84); /*0x44d141*/
            __asm { fmul [esp+100h+var_A0] } /*0x44d146*/
            __asm
            {
              fchs
              fst [esp+0E8h+var_C8]
              fld [esp+0E8h+var_D0]
              fcomp ds:dbl_7E2800
              fnstsw ax
            }
            if ( (_AX & 0x4000) != 0 ) /*0x44d162*/
            {
              __asm /*0x44d164*/
              {
                fcom ds:dbl_7E2800
                fnstsw ax
              }
              if ( (_AX & 0x4000) != 0 ) /*0x44d16f*/
              {
                __asm /*0x44d171*/
                {
                  fld [esp+0E8h+var_C0]
                  fcomp ds:dbl_7E2800
                  fnstsw ax
                }
                if ( (_AX & 0x4000) != 0 ) /*0x44d180*/
                  v75 = 100.0; /*0x44d182*/
              }
            }
            __asm /*0x44d192*/
            {
              fld [esp+0E8h+var_C0]
              fild [esp+0E8h+var_64]
            }
            __asm
            {
              fstp [esp+0F0h+var_A0]
              fld [esp+0F0h+var_D0]
              fmul [esp+0F0h+var_D0]
              fld st(1)
              fmul st, st(2)
              faddp st(1), st
              fld st(2)
              fmul st, st(3)
              faddp st(1), st
              fstp [esp+0F0h+var_F0]; double
              fstp st
              fstp st
            }
            Math::Sqrt(v67); /*0x44d1bf*/
            __asm { fdivr [esp+0F0h+var_A0] } /*0x44d1c4*/
            v42 = this->TechnoClass; /*0x44d1c8*/
            __asm /*0x44d1d9*/
            {
              fld st
              fmul [esp+0F0h+var_D0]
              fstp [esp+0F0h+var_D0]
              fld [esp+0F0h+var_C8]
              fmul st, st(1)
              fstp [esp+0F0h+var_C8]
              fld [esp+0F0h+var_C0]
              fmul st, st(1)
              fstp [esp+0F0h+var_C0]
              fstp st
            }
            v43 = (int *)(*((int (__thiscall **)(BuildingClass *, _BYTE *, _DWORD))v42 + 192))(this, v94, 0); /*0x44d1f9*/
            v82[0] = *v43; /*0x44d201*/
            v82[1] = v43[1]; /*0x44d20c*/
            v83 = v43[2]; /*0x44d213*/
            v44 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)LODWORD(v78) + 72))(LODWORD(v78), v96); /*0x44d221*/
            v45 = v44[2] - v83; /*0x44d23c*/
            _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44d248*/
            LODWORD(v78) = (*v44 - v82[0]) * (*v44 - v82[0]) + (v44[1] - v82[1]) * (v44[1] - v82[1]); /*0x44d250*/
            __asm { fild dword ptr [esp+0E8h+var_B8] } /*0x44d258*/
            __asm
            {
              fstp [esp+0F4h+var_B8]
              fild dword ptr [ecx+16B8h]
            }
            __asm { fstp [esp+0F4h+var_F8+4]; double }
            Math::Sqrt(v78); /*0x44d278*/
            LOWORD(v47) = Math::RoundToInt(v1); /*0x44d280*/
            v59 = v47; /*0x44d285*/
            IsCloseEnoughToBuilding = TechnoClass::IsCloseEnoughToBuilding((TechnoClass *)this, 0); /*0x44d28a*/
            if ( !(unsigned __int8)ComputeMathFacingAngle(IsCloseEnoughToBuilding, v38, v59, v45, v62, &v74) ) /*0x44d29a*/
            {
              _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44d2a0*/
              __asm { fild dword ptr [edx+16B8h] } /*0x44d2ae*/
              __asm { fstp [esp+0F4h+var_F8+4]; double }
              Math::Sqrt(v78); /*0x44d2c2*/
              LOWORD(v50) = Math::RoundToInt(v1); /*0x44d2ca*/
              v60 = v50; /*0x44d2cf*/
              v51 = TechnoClass::IsCloseEnoughToBuilding((TechnoClass *)this, 0); /*0x44d2e4*/
              if ( !(unsigned __int8)ComputeMathFacingAngle(v51, 10 * v38 / 8, v60, v45, v63, &v74) ) /*0x44d2f4*/
              {
                LOWORD(v78) = -1536; /*0x44d2fa*/
                v74 = (AnimClass *)LODWORD(v78); /*0x44d305*/
              }
            }
            __asm /*0x44d30e*/
            {
              fld [esp+0E8h+var_C8]
              fmul [esp+0E8h+var_C8]
              fld [esp+0E8h+var_D0]
              fmul [esp+0E8h+var_D0]
            }
            __asm
            {
              faddp st(1), st
              fstp [esp+0F0h+var_F0]; double
            }
            Math::Sqrt(v68); /*0x44d326*/
            __asm { fstp [esp+0F0h+var_A0] } /*0x44d32f*/
            Math::CalcAngle(v77, v80); /*0x44d343*/
            __asm /*0x44d348*/
            {
              fsub ds:dbl_7E2820
              fmul ds:dbl_7E2818
            }
            LODWORD(v78) = (__int16)Math::RoundToInt(v1) - 0x3FFF; /*0x44d365*/
            __asm /*0x44d369*/
            {
              fild dword ptr [esp+0F0h+var_B8]
              fmul ds:dbl_7E2810
              fstp [esp+0F0h+var_B8]
              fld [esp+0F0h+var_C8]
              fmul [esp+0F0h+var_C8]
              fld [esp+0F0h+var_C0]
              fmul [esp+0F0h+var_C0]
              faddp st(1), st
              fld [esp+0F0h+var_D0]
              fmul [esp+0F0h+var_D0]
              faddp st(1), st
              fstp [esp+0F0h+var_F0]; double
            }
            Math::Sqrt(v69); /*0x44d396*/
            __asm /*0x44d39b*/
            {
              fstp [esp+0F0h+var_A0]
              fld [esp+0F0h+var_B8]
              fcomp ds:dbl_7E2800
            }
            __asm { fnstsw ax }
            if ( (_AX & 0x4000) == 0 ) /*0x44d3b1*/
            {
              v53 = HIDWORD(v78); /*0x44d3b3*/
              v54 = LODWORD(v78); /*0x44d3b7*/
              Math::ArcTan2(v78); /*0x44d3bd*/
              __asm { fdivr [esp+0F0h+var_D0] } /*0x44d3c2*/
              __asm { fstp [esp+0F8h+var_D0] }
              Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v53, v54))); /*0x44d3cc*/
              __asm { fdivr [esp+0F8h+var_C8] } /*0x44d3d1*/
              __asm { fstp [esp+0E8h+var_C8] }
            }
            LODWORD(v78) = (__int16)v74 - 0x3FFF; /*0x44d3ea*/
            __asm /*0x44d3ee*/
            {
              fild dword ptr [esp+0F0h+var_B8]
              fmul ds:dbl_7E2810
              fstp [esp+0F0h+var_F0]; double
            }
            Math::ArcTan2(v70); /*0x44d3fb*/
            __asm { fmul [esp+0F0h+var_D0] } /*0x44d400*/
            __asm { fstp [esp+0F0h+var_D0] }
            LODWORD(v78) = (__int16)v74 - 0x3FFF; /*0x44d412*/
            __asm /*0x44d416*/
            {
              fild dword ptr [esp+0F0h+var_B8]
              fmul ds:dbl_7E2810
              fstp [esp+0F0h+var_F0]; double
            }
            Math::ArcTan2(v71); /*0x44d423*/
            __asm { fmul [esp+0F0h+var_C8] } /*0x44d428*/
            __asm { fstp [esp+0F0h+var_C8] }
            LODWORD(v78) = (__int16)v74 - 0x3FFF; /*0x44d43b*/
            __asm /*0x44d43f*/
            {
              fild dword ptr [esp+0F0h+var_B8]
              fmul ds:dbl_7E2810
              fstp [esp+0F0h+var_F0]; double
            }
            Math::SinCos(v72); /*0x44d44c*/
            __asm { fmul [esp+0F0h+var_A0] } /*0x44d451*/
            v55 = v79; /*0x44d459*/
            __asm { fstp [esp+0E8h+var_C0] } /*0x44d462*/
            if ( !(*((unsigned __int8 (__thiscall **)(void **, int *, double *))*v79 + 124))(v79, v82, &v75) ) /*0x44d482*/
            {
              (*((void (__stdcall **)(void **))*v55 + 2))(v55); /*0x44d539*/
              goto LABEL_54; /*0x44d539*/
            }
            if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 255))(this) /*0x44d4a0*/
              && *(_BYTE *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) + 3234) )
            {
              TechnoClass::Fire((TechnoClass *)this->?); /*0x44d4b0*/
              TechnoClass::Fire((TechnoClass *)this->?); /*0x44d4bb*/
            }
            if ( !*(_BYTE *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) + 3285) ) /*0x44d4ca*/
            {
              v56 = *(_DWORD *)(*(_DWORD *)(v28 + 192) /*0x44d4fb*/
                              + 4 * ((unsigned int)Random::State(&Randomizer_Global) % *(_DWORD *)(v28 + 204)));
              v57 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, double *, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x44d510*/
                               + 44))(
                                this,
                                v87,
                                0,
                                0,
                                0,
                                0);
              StartAudioControllerAt(v56, v57, 0); /*0x44d51a*/
            }
            this->? = 3; /*0x44d51f*/
            result = 1; /*0x44d529*/
          }
          break; /*0x44d535*/
        case 3: /*0x44cd3b*/
          v88 = 0x4000; /*0x44ced1*/
          FacingClass::Update((char *)this->?, &v88); /*0x44cee2*/
          goto LABEL_54; /*0x44cee7*/
        default:
          goto LABEL_56;
      }
    }
    else
    {
LABEL_56:
      _EAX = MissionClass::GetMissionControl((MissionClass *)this); /*0x44d584*/
      __asm /*0x44d58b*/
      {
        fld qword ptr [eax+10h]
        fmul ds:dbl_7E27F8
      }
      LOWORD(result) = Math::RoundToInt(v1); /*0x44d594*/
    }
  }
  return result; /*0x44cc5a*/
}


// ==== 0x0044D5D0  BuildingClass::CaptureBuilding  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CaptureBuilding(BuildingClass *this)
{
  int result; // eax
  HouseClass *v3; // [esp+Ch] [ebp+4h]

  if ( TechnoClass::SetHouseFlag((TechnoClass *)this, v3) ) /*0x44d5d9*/
  {
    if ( !dword_A8E7AC ) /*0x44d5ed*/
    {
      this->?->lastBuiltVehicleType = this->Type->ArrayIndex; /*0x44d601*/
      this->?->unknownBool246 = 1; /*0x44d60d*/
    }
    this->?->recheckTechTree = 1; /*0x44d61a*/
    if ( !(unsigned __int8)Team::AllMembersValid((Team *)this) /*0x44d682*/
      && (unsigned __int8)House::IsCurrentPlayer((House *)this->?)
      && (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) != 18
      && this->? != 18
      || (result = Team::AllMembersValid((Team *)this), !(_BYTE)result)
      && (result = House::IsCurrentPlayer((House *)this->?), !(_BYTE)result)
      && v3 == this->?
      && (result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this), result != 18) )
    {
      result = (*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 311))(this, 0); /*0x44d68a*/
    }
    LOBYTE(result) = 1; /*0x44d691*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x44d698*/
  }
  return result; /*0x44d690*/
}



// ==== 0x0044D6A0  TechnoClass::StartOrResumeProduction  this=BuildingClass  sig=csp ====
int __thiscall TechnoClass::StartOrResumeProduction(TechnoClass *this)
{
  int result; // eax
  char v3; // [esp+8h] [ebp+4h]

  if ( !v3 || dword_A8E7AC || stru_A8EB00.?[391] ) /*0x44d6bb*/
  {
    BuildingClass::StartProduction((BuildingClass *)this, 1); /*0x44d6e0*/
    result = (*((int (__thiscall **)(TechnoClass *, int, _DWORD))this->RadioClass + 122))(this, 5, 0); /*0x44d6f1*/
    LOBYTE(result) = 0; /*0x44d6f7*/
  }
  else
  {
    BuildingClass::StartProduction((BuildingClass *)this, 0); /*0x44d6bf*/
    result = (*((int (__thiscall **)(TechnoClass *, int, _DWORD))this->RadioClass + 122))(this, 18, 0); /*0x44d6d0*/
    LOBYTE(result) = 0; /*0x44d6d6*/
  }
  return result; /*0x44d6d8*/
}



// ==== 0x0044D700  BuildingClass::GetAmmoCountScaled  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetAmmoCountScaled(BuildingClass *this)
{
  BuildingTypeClass *Type; // esi
  int result; // eax
  int v3; // [esp+4h] [ebp-Ch]
  double v4; // [esp+8h] [ebp-8h]

  Type = this->Type; /*0x44d704*/
  if ( Type->?[0] != 2 ) /*0x44d713*/
    return TechnoClass::GetAmmoCount((TechnoClass *)this); /*0x44d715*/
  if ( !Type->Weeder ) /*0x44d71f*/
    return 0; /*0x44d755*/
  v4 = BuildingClass::checkRepairEligibility((float *)this->?); /*0x44d738*/
  v3 = (*((int (__thiscall **)(BuildingTypeClass *))Type->TechnoTypeClass + 29))(Type); /*0x44d73f*/
  LOWORD(result) = Math::RoundToInt((double)v3 * v4); /*0x44d74b*/
  return result; /*0x44d71a*/
}



// ==== 0x0044D760  BuildingClass::PushScriptAction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::PushScriptAction(BuildingClass *this)
{
  int result; // eax
  _DWORD *v3; // eax
  ScriptActionQueue v4; // [esp+8h] [ebp-10h] BYREF
  _BYTE v5[12]; // [esp+Ch] [ebp-Ch] BYREF
  int v6; // [esp+1Ch] [ebp+4h]
  ScriptActionQueue v7; // [esp+1Ch] [ebp+4h]

  result = v6; /*0x44d760*/
  if ( v6 ) /*0x44d76c*/
  {
    result = House::IsHumanPlayer((House *)this->?); /*0x44d774*/
    if ( (_BYTE)result ) /*0x44d77b*/
    {
      v3 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *, _DWORD))this->TechnoClass + 19))(this, v5, 0); /*0x44d788*/
      *(_WORD *)v7.__tail_0 = *v3 / 256; /*0x44d79b*/
      *(_WORD *)&v7.__tail_0[2] = v3[1] / 256; /*0x44d7b3*/
      v4 = v7; /*0x44d7bc*/
      return ScriptActionQueue::PushNext(&v4); /*0x44d7c0*/
    }
  }
  return result; /*0x44d7c5*/
}



// ==== 0x0044D7D0  BuildingClass::GetTargetFacing  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetTargetFacing(BuildingClass *this)
{
  unsigned int v2; // ecx
  __int16 v4; // dx
  unsigned int v5; // ecx
  int v6; // edx
  int v7; // [esp+4h] [ebp-4h] BYREF
  _DWORD *v8; // [esp+Ch] [ebp+4h]

  if ( this->? ) /*0x44d7d4*/
  {
    if ( !(*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 255))(this) /*0x44d81a*/
      || this->Type->TurretAnimIsVoxel )
    {
      v6 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *, AbstractClass *))this->TechnoClass + 314))( /*0x44d864*/
                        this,
                        &v7,
                        this->?);
      *v8 = v6; /*0x44d86b*/
      return (int)v8; /*0x44d866*/
    }
    else
    {
      v5 = *ProgressTimer::GetValue((ProgressTimer *)this->?, &v7); /*0x44d834*/
      *(_WORD *)v8 = ((((v5 >> 10) + 1) >> 1) & 0x1F) << 11; /*0x44d847*/
      return (int)v8; /*0x44d836*/
    }
  }
  else
  {
    v2 = *ProgressTimer::GetValue((ProgressTimer *)this->?, &v7); /*0x44d7ee*/
    LOBYTE(v4) = 0; /*0x44d7fb*/
    HIBYTE(v4) = ((v2 >> 7) + 1) >> 1; /*0x44d7fd*/
    *(_WORD *)v8 = v4; /*0x44d7ff*/
    return (int)v8; /*0x44d7f0*/
  }
}



// ==== 0x0044D880  BuildingClass::ClearFactoryBib  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ClearFactoryBib(BuildingClass *this)
{
  double v1; // st7
  BuildingTypeClass *Type; // eax
  int v4; // esi
  __int16 v5; // dx
  int v6; // eax
  unsigned int v7; // edi
  int v8; // edi
  _WORD *v9; // eax
  int v10; // edx
  __int16 v11; // cx
  _WORD *v12; // edx
  __int16 v13; // bx
  __int16 v14; // bx
  __int16 v15; // cx
  int v16; // ebx
  void *v17; // eax
  int v18; // eax
  int v19; // ebx
  void *v20; // eax
  int v21; // eax
  int v22; // edx
  int *v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // eax
  void *v27; // eax
  _DWORD *v28; // eax
  char v29; // al
  _DWORD *v30; // eax
  int v31; // eax
  int v32; // edi
  void *v33; // eax
  int v35; // eax
  char v37; // cl
  int (__thiscall **ptr_0)(BuildingClass *, _BYTE *); // edx
  _WORD *v39; // eax
  __int16 v40; // cx
  int Member; // eax
  int v42; // esi
  char v43; // cl
  int v46; // ecx
  char *v47; // eax
  int v48; // eax
  int v49; // ebx
  int v50; // eax
  int *v51; // ebx
  int v52; // eax
  _WORD *v53; // eax
  __int16 v54; // dx
  int v55; // edi
  void *v56; // eax
  _DWORD *m_Size; // edi
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int InstanceCOM; // eax
  void *m_Data; // eax
  int (__stdcall ***Checked)(_DWORD, int *, void **); // eax
  int v64; // esi
  void *v65; // edi
  int v66; // ecx
  int v67; // esi
  int v68; // esi
  int m_Position; // eax
  int v70; // edx
  int StreamClass_field_0C; // eax
  int v73; // eax
  unsigned __int8 (__thiscall **v74)(BuildingClass *); // edx
  void (__thiscall **v75)(BuildingClass *); // edx
  BuildingTypeClass *v76; // ecx
  void (__thiscall **v77)(BuildingClass *); // eax
  int LandHeight; // [esp+34h] [ebp-5Ch]
  int v79; // [esp+34h] [ebp-5Ch]
  __int16 *p_m_Position; // [esp+3Ch] [ebp-54h]
  int v81; // [esp+40h] [ebp-50h]
  char v82; // [esp+52h] [ebp-3Eh]
  bool v83; // [esp+53h] [ebp-3Dh]
  StreamClass v84; // [esp+54h] [ebp-3Ch] BYREF
  unsigned int i; // [esp+68h] [ebp-28h] BYREF
  void *v86; // [esp+6Ch] [ebp-24h] BYREF
  char v87; // [esp+70h] [ebp-20h] BYREF
  int v88; // [esp+74h] [ebp-1Ch] BYREF
  __int64 v89; // [esp+78h] [ebp-18h]
  int v90; // [esp+80h] [ebp-10h] BYREF
  char v91[12]; // [esp+84h] [ebp-Ch] BYREF

  if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0 ) /*0x44d896*/
    BuildingClass::UnloadUnits(this, 0, 0); /*0x44d89c*/
  Type = this->Type; /*0x44d8a1*/
  if ( !Type->UnitAbsorb && !Type->InfantryAbsorb || this->?[0] <= 0 )
  {
    if ( Type->WeaponsFactory )
    {
      v37 = Type->?[1]; /*0x44dcc7*/
      v88 = 0; /*0x44dccd*/
      v89 = 0; /*0x44dcd3*/
      if ( !v37 ) /*0x44dcdb*/
      {
        ptr_0 = (int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass; /*0x44dce3*/
        i = *(_DWORD *)(Type->FoundationOutside[0] + 40); /*0x44dcf0*/
        v39 = (_WORD *)ptr_0[110](this, &v87); /*0x44dcf4*/
        v40 = HIWORD(i) + v39[1]; /*0x44dd01*/
        LOWORD(v84.StreamClass_field_0C) = *v39 + i; /*0x44dd06*/
        HIWORD(v84.StreamClass_field_0C) = v40; /*0x44dd0b*/
        v88 = ((__int16)(LOWORD(v84.StreamClass_field_0C) - 1) << 8) + 128; /*0x44dd30*/
        v89 = (unsigned int)((v40 << 8) + 128); /*0x44dd34*/
      }
      switch ( this->? )
      {
        case 0:
          Member = Team::GetMember((Team *)this, 0); /*0x44dd59*/
          v42 = Member; /*0x44dd5e*/
          if ( Member ) /*0x44dd62*/
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)Member + 488))(Member, 5, 0); /*0x44dd6b*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v42 + 492))(v42); /*0x44dd75*/
          }
          RateScaler::Init((RateScaler *)this->?, *(double *)this->Type->?); /*0x44dd95*/
          v43 = this->Type->?[1]; /*0x44dda2*/
          this->? = 1; /*0x44dda8*/
          this->? = v43 != 0 ? 4 : 1;
          BuildingClass::ClearAnims(this, 18); /*0x44ddbf*/
          BuildingClass::GetHealthRatio(this); /*0x44ddc6*/
          _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44ddcb*/
          __asm /*0x44ddd1*/
          {
            fcomp qword ptr [edx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x44dddc*/
          {
            v46 = 1; /*0x44dde4*/
            v47 = &this->Type->__pad_F70[524]; /*0x44dde9*/
          }
          else
          {
            v46 = 0; /*0x44ddf6*/
            v47 = &this->Type->__pad_F70[508]; /*0x44ddf8*/
          }
          if ( v47 && *v47 ) /*0x44de05*/
            BuildingClass::PlayAnim(this, *(int *)&DSurface_ViewBounds.__pad_FC[324], v47, 8, v46, 0, 0); /*0x44de16*/
          break; /*0x44de1b*/
        case 1:
          if ( !AnimClass::resetAnimation((AnimClass *)this) ) /*0x44de22*/
          {
            Debug::Log(); /*0x44de34*/
            this->? = 2; /*0x44de3c*/
          }
          break; /*0x44de46*/
        case 2:
          if ( (unsigned __int8)BuildingClass::CheckPowerFlags((BuildingClass *)this->?) ) /*0x44de53*/
          {
            v48 = Team::GetMember((Team *)this, 0); /*0x44de63*/
            v84.m_Size = v48; /*0x44de6a*/
            if ( !v48 ) /*0x44de6e*/
              goto LABEL_112; /*0x44de6e*/
            v49 = v48; /*0x44de74*/
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v48 + 488))(v48, 2, 0); /*0x44de7e*/
            v50 = *(_DWORD *)(v49 + 1652); /*0x44de84*/
            v51 = (int *)(v49 + 1652); /*0x44de8a*/
            v84.StreamClass_field_0C = 0; /*0x44de92*/
            if ( !v50 ) /*0x44de9a*/
              goto LABEL_57; /*0x44de9a*/
            v52 = StreamClass::Set2((StreamClass *)&v84.StreamClass_field_0C, v51); /*0x44dea1*/
            if ( v52 < 0 && v52 != -2147467262 ) /*0x44deaf*/
              WinAPI::Wrapper(v52); /*0x44deb2*/
            if ( !v84.StreamClass_field_0C ) /*0x44debd*/
LABEL_57:
              WinAPI::Wrapper(-2147467261); /*0x44dec4*/
            (*(void (__stdcall **)(int, int *))(*(_DWORD *)v84.StreamClass_field_0C + 12))( /*0x44ded5*/
              v84.StreamClass_field_0C,
              &v90);
            if ( !memcmp(&v90, &stru_7E9A50, 0x10u) || !memcmp(&v90, &g_CLSID_HoverLocomotion, 0x10u) ) /*0x44df00*/
            {
              v58 = *v51; /*0x44dfad*/
              *(_DWORD *)v84.__pad_0 = 0; /*0x44dfaf*/
              if ( v58 ) /*0x44dfb9*/
              {
                v59 = StreamClass::Set(&v84, v51); /*0x44dfc0*/
                if ( v59 < 0 && v59 != -2147467262 ) /*0x44dfce*/
                  WinAPI::Wrapper(v59); /*0x44dfd1*/
                if ( *(_DWORD *)v84.__pad_0 /*0x44dfe1*/
                  && (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)v84.__pad_0 + 28))(*(_DWORD *)v84.__pad_0) )
                {
                  if ( *v51 ) /*0x44dfe8*/
                    (*(void (__stdcall **)(int))(*(_DWORD *)*v51 + 8))(*v51); /*0x44dff1*/
                  v60 = *(_DWORD *)v84.__pad_0; /*0x44dff4*/
                  *v51 = 0; /*0x44dff8*/
                  if ( !v60 ) /*0x44e000*/
                    WinAPI::Wrapper(-2147467261); /*0x44e007*/
                  (*(void (__stdcall **)(int, int *))(*(_DWORD *)v60 + 16))(v60, v51); /*0x44e014*/
                }
              }
              v84.m_Position = 0; /*0x44e024*/
              InstanceCOM = CreateInstanceCOM((ObjectClass *)&v84.m_Position, (IID *)&stru_7E9A30, 0, 7u); /*0x44e02c*/
              if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x44e03a*/
                WinAPI::Wrapper(InstanceCOM); /*0x44e03d*/
              if ( !v84.m_Position ) /*0x44e048*/
                WinAPI::Wrapper(-2147467261); /*0x44e04f*/
              m_Size = (_DWORD *)v84.m_Size; /*0x44e058*/
              (*(void (__stdcall **)(int, int))(*(_DWORD *)v84.m_Position + 12))(v84.m_Position, v84.m_Size); /*0x44e060*/
              m_Data = 0; /*0x44e067*/
              v84.m_Data = 0; /*0x44e06b*/
              if ( v84.m_Position ) /*0x44e06f*/
              {
                Checked = (int (__stdcall ***)(_DWORD, int *, void **))Stream::GetChecked((Stream *)&v84.m_Position); /*0x44e075*/
                v64 = (**Checked)(Checked, &stru_818E00.?[17], &v86); /*0x44e089*/
                if ( v64 >= 0 ) /*0x44e08d*/
                {
                  v65 = v86; /*0x44e0a0*/
                  Release2COM((ObjectClass *)&v84.m_Data); /*0x44e0a8*/
                  m_Data = v65; /*0x44e0ad*/
                  m_Size = (_DWORD *)v84.m_Size; /*0x44e0af*/
                  v84.m_Data = m_Data; /*0x44e0b3*/
                }
                else
                {
                  Release2COM((ObjectClass *)&v84.m_Data); /*0x44e093*/
                  m_Data = 0; /*0x44e098*/
                  v84.m_Data = 0; /*0x44e09a*/
                }
                if ( v64 < 0 && v64 != -2147467262 ) /*0x44e0c1*/
                  WinAPI::Wrapper(v64); /*0x44e0c4*/
              }
              v66 = *(_DWORD *)v84.__pad_0; /*0x44e0cd*/
              if ( *(void **)v84.__pad_0 != m_Data ) /*0x44e0d3*/
              {
                v67 = *(_DWORD *)v84.__pad_0; /*0x44e0d5*/
                *(_DWORD *)v84.__pad_0 = m_Data; /*0x44e0db*/
                CellClass::SetField2C((CellClass *)&v84); /*0x44e0df*/
                if ( v67 ) /*0x44e0e6*/
                  (*(void (__stdcall **)(int))(*(_DWORD *)v67 + 8))(v67); /*0x44e0eb*/
                v66 = *(_DWORD *)v84.__pad_0; /*0x44e0ee*/
                m_Data = v84.m_Data; /*0x44e0f2*/
              }
              if ( m_Data ) /*0x44e0f8*/
              {
                (*(void (__stdcall **)(void *))(*(_DWORD *)m_Data + 8))(m_Data); /*0x44e0fd*/
                v66 = *(_DWORD *)v84.__pad_0; /*0x44e100*/
              }
              if ( v66 ) /*0x44e106*/
              {
                (*(void (__stdcall **)(int, int))(*(_DWORD *)v66 + 12))(v66, *v51); /*0x44e10e*/
                v68 = *v51; /*0x44e111*/
                m_Position = v84.m_Position; /*0x44e113*/
                if ( *v51 != v84.m_Position ) /*0x44e119*/
                {
                  *v51 = v84.m_Position; /*0x44e11d*/
                  if ( m_Position ) /*0x44e11f*/
                    (*(void (__stdcall **)(int))(*(_DWORD *)m_Position + 4))(m_Position); /*0x44e124*/
                  if ( v68 ) /*0x44e129*/
                    (*(void (__stdcall **)(int))(*(_DWORD *)v68 + 8))(v68); /*0x44e12e*/
                }
                if ( !*v51 ) /*0x44e131*/
                  WinAPI::Wrapper(-2147467261); /*0x44e13b*/
                (*(void (__stdcall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)*v51 + 112))( /*0x44e160*/
                  *v51,
                  66,
                  v88,
                  v89,
                  HIDWORD(v89));
              }
              else
              {
                v70 = *m_Size; /*0x44e168*/
                v86 = (void *)m_Size[27]; /*0x44e16a*/
                (*(void (__thiscall **)(_DWORD *, void **, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(v70 + 364))( /*0x44e18b*/
                  m_Size,
                  &v86,
                  0,
                  *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
                  0,
                  1,
                  0,
                  0);
              }
              if ( v84.m_Position ) /*0x44e197*/
                (*(void (__stdcall **)(int))(*(_DWORD *)v84.m_Position + 8))(v84.m_Position); /*0x44e19c*/
              if ( *(_DWORD *)v84.__pad_0 ) /*0x44e1a5*/
                (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v84.__pad_0 + 8))(*(_DWORD *)v84.__pad_0); /*0x44e1aa*/
            }
            else if ( !memcmp(&v90, &stru_7E9A30, 0x10u) ) /*0x44df1a*/
            {
              if ( !*v51 ) /*0x44df72*/
                WinAPI::Wrapper(-2147467261); /*0x44df7c*/
              (*(void (__stdcall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)*v51 + 112))( /*0x44dfa1*/
                *v51,
                66,
                v88,
                v89,
                HIDWORD(v89));
              m_Size = (_DWORD *)v84.m_Size; /*0x44dfa4*/
            }
            else
            {
              v53 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, &v87); /*0x44df26*/
              v54 = v53[1] + 1; /*0x44df3b*/
              LOWORD(v84.m_Position) = *v53 + 4; /*0x44df3d*/
              HIWORD(v84.m_Position) = v54; /*0x44df42*/
              i = v84.m_Position; /*0x44df52*/
              v55 = *(_DWORD *)v84.m_Size; /*0x44df56*/
              v56 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&i); /*0x44df5d*/
              (*(void (__thiscall **)(int, void *, int))(v55 + 1152))(v84.m_Size, v56, 1); /*0x44df65*/
              m_Size = (_DWORD *)v84.m_Size; /*0x44df6b*/
            }
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*m_Size + 1348))(m_Size, 0, 1071644672); /*0x44e1b8*/
            StreamClass_field_0C = v84.StreamClass_field_0C; /*0x44e1be*/
            this->? = 3; /*0x44e1c2*/
            if ( StreamClass_field_0C ) /*0x44e1ce*/
              (*(void (__stdcall **)(int))(*(_DWORD *)StreamClass_field_0C + 8))(StreamClass_field_0C); /*0x44e1d7*/
          }
          break; /*0x44e1da*/
        case 3:
          if ( !this->? ) /*0x44e202*/
          {
LABEL_112:
            Timer::StartDouble((Timer *)this->?, *(double *)this->Type->?); /*0x44e20c*/
            this->? = 4; /*0x44e22b*/
          }
          break; /*0x44e231*/
        case 4:
          if ( (unsigned __int8)Flag::CheckNone((Flag *)this->?) || this->Type->?[1] ) /*0x44e248*/
          {
            (*((void (__thiscall **)(BuildingClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, 1); /*0x44e25a*/
            this->? = 1; /*0x44e260*/
          }
          break; /*0x44e260*/
        default:
          break;
      }
      _EAX = MissionClass::GetMissionControl((MissionClass *)this); /*0x44e267*/
      __asm /*0x44e26e*/
      {
        fld qword ptr [eax+10h]
        fmul ds:dbl_7E27F8
      }
      LOWORD(v73) = Math::RoundToInt(v1); /*0x44e277*/
      return v73 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x44e29c*/
    }
    if ( Type->? && Type->? ) /*0x44e2b0*/
    {
      if ( this->? ) /*0x44e2be*/
      {
        (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 262))(this); /*0x44e333*/
        v76 = this->Type; /*0x44e339*/
        v77 = (void (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x44e33f*/
        this->? = 0; /*0x44e342*/
        this->HasExtraPowerDrain = 0; /*0x44e349*/
        this->? = v76->?; /*0x44e359*/
        v77[261](this); /*0x44e35f*/
        goto LABEL_124; /*0x44e35f*/
      }
      (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 262))(this); /*0x44e2cd*/
      v74 = (unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x44e2d9*/
      this->? = this->Type->?; /*0x44e2e3*/
      if ( v74[212](this) ) /*0x44e2eb*/
      {
        (*((void (__thiscall **)(BuildingClass *))this->TechnoClass + 261))(this); /*0x44e2fa*/
        this->? = 1; /*0x44e300*/
        this->HasExtraPowerDrain = 1; /*0x44e306*/
LABEL_124:
        LOBYTE(this->?->HouseClass_field_timer_B[2]) = 1; /*0x44e365*/
        goto LABEL_125; /*0x44e36b*/
      }
      v75 = (void (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x44e31d*/
      this->? = this->Type->?; /*0x44e320*/
      v75[261](this); /*0x44e326*/
    }
LABEL_125:
    (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 5, 0); /*0x44e371*/
    return 1; /*0x44e381*/
  }
  v4 = LinkedList::Pop((LinkedList *)this->?); /*0x44d8d8*/
  if ( !v4 ) /*0x44d8dc*/
    goto LABEL_35; /*0x44d8dc*/
  v5 = *(_WORD *)ProgressTimer::GetValue((ProgressTimer *)this->?, &v86); /*0x44d8f2*/
  LOBYTE(v6) = 0; /*0x44d8f5*/
  v82 = 1; /*0x44d8fc*/
  LOWORD(v84.StreamClass_field_0C) = v5 + 0x7FFF; /*0x44d901*/
  v84.m_Size = 0; /*0x44d90e*/
  v7 = (((unsigned int)v84.StreamClass_field_0C >> 12) + 1) >> 1; /*0x44d912*/
  for ( i = v7; ; LOBYTE(v7) = i ) /*0x44d914*/
  {
    v8 = ((_BYTE)v6 + (_BYTE)v7) & 7; /*0x44d92a*/
    v9 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 110))(this, &v87); /*0x44d92d*/
    v10 = v8 & 7; /*0x44d938*/
    v11 = LOWORD(g_DDrawSurfaceManager.scenario[v10 + 82]) + *v9; /*0x44d93f*/
    v12 = (_WORD *)(4 * v10 + 9041544); /*0x44d947*/
    v13 = v12[1]; /*0x44d94e*/
    LOWORD(v84.StreamClass_field_0C) = v11; /*0x44d952*/
    v14 = v9[1] + v13; /*0x44d95a*/
    LOWORD(v84.m_Position) = *v12 + v11; /*0x44d95e*/
    v15 = v14 + v12[1]; /*0x44d967*/
    HIWORD(v84.StreamClass_field_0C) = v14; /*0x44d96a*/
    v16 = *(_DWORD *)v4; /*0x44d973*/
    HIWORD(v84.m_Position) = v15; /*0x44d975*/
    *(_DWORD *)v84.__pad_0 = v84.StreamClass_field_0C; /*0x44d980*/
    v84.m_Data = (void *)v84.m_Position; /*0x44d984*/
    LandHeight = ObjectClass::GetLandHeight((ObjectClass *)this); /*0x44d98d*/
    v17 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v84.m_Data); /*0x44d999*/
    v18 = (*(int (__thiscall **)(int, void *, int, int, _DWORD, int))(v16 + 428))(v4, v17, v8, LandHeight, 0, 1); /*0x44d9a1*/
    v19 = *(_DWORD *)v4; /*0x44d9a7*/
    v83 = v18 == 0; /*0x44d9b1*/
    v79 = ObjectClass::GetLandHeight((ObjectClass *)this); /*0x44d9bb*/
    v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v84.__pad_0); /*0x44d9c7*/
    if ( !(*(int (__thiscall **)(int, void *, int, int, _DWORD, int))(v19 + 428))(v4, v20, v8, v79, 0, 1) ) /*0x44d9cf*/
      break; /*0x44d9cf*/
    if ( !v82 ) /*0x44da20*/
      goto LABEL_13; /*0x44da20*/
LABEL_17:
    v21 = v84.m_Size; /*0x44da22*/
    if ( v84.m_Size == 7 ) /*0x44da2c*/
    {
      v21 = 0; /*0x44da2e*/
      v82 = 0; /*0x44da30*/
    }
LABEL_14:
    v6 = v21 + 1; /*0x44da07*/
    v84.m_Size = v6; /*0x44da0b*/
    if ( v6 >= 8 ) /*0x44da0f*/
      goto LABEL_34; /*0x44da0f*/
  }
  if ( !v83 && v82 ) /*0x44d9e7*/
    goto LABEL_17; /*0x44d9e7*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v84.__pad_0) + 80) & 0x100) != 0 ) /*0x44da01*/
  {
LABEL_13:
    v21 = v84.m_Size; /*0x44da03*/
    goto LABEL_14; /*0x44da03*/
  }
  ++dword_A8E7AC; /*0x44da55*/
  v22 = *(_DWORD *)v4; /*0x44da5f*/
  v89 = (unsigned int)((*(__int16 *)&v84.__pad_0[2] << 8) + 128); /*0x44da66*/
  v88 = (*(__int16 *)v84.__pad_0 << 8) + 128; /*0x44da6c*/
  if ( (*(int (__thiscall **)(int))(v22 + 44))(v4) == 15 ) /*0x44da76*/
  {
    v23 = ObjectPlacement::CalcPosition_Wrapper(&v90, &v88, 0); /*0x44da89*/
    v88 = *v23; /*0x44da90*/
    LODWORD(v89) = v23[1]; /*0x44da97*/
    v24 = v23[2]; /*0x44da9b*/
  }
  else
  {
    v25 = *(_DWORD *)v4; /*0x44dabc*/
    v84.StreamClass_field_0C = 0; /*0x44dac6*/
    v26 = (*(int (__thiscall **)(int, int))(v25 + 132))(v4, -1); /*0x44dad4*/
    v84.m_Data = (void *)*LayerClass::Pathfinding_Find( /*0x44dafb*/
                            &stru_87F5F0.__pad_58[416],
                            (int)&v84.m_Data,
                            &v88,
                            (__int16 *)&v84.m_Data,
                            *(_DWORD *)(v26 + 1660),
                            0,
                            0,
                            1,
                            1,
                            0,
                            0,
                            0,
                            1,
                            (char)&v84.StreamClass_field_0C,
                            0,
                            0,
                            v81);
    v27 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v84.m_Data); /*0x44db05*/
    v28 = (_DWORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v27 + 72))(v27, v91); /*0x44db13*/
    i = *(_DWORD *)CellStruct::Set((CellStruct *)&v87, *v28 / 256, v28[1] / 256); /*0x44db42*/
    v24 = 0; /*0x44db5f*/
    v88 = ((__int16)i << 8) + 128; /*0x44db61*/
    LODWORD(v89) = (SHIWORD(i) << 8) + 128; /*0x44db65*/
  }
  LOWORD(i) = (_WORD)v8 << 13; /*0x44db6c*/
  HIDWORD(v89) = v24; /*0x44db84*/
  v29 = (*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v4 + 216))( /*0x44db8e*/
          v4,
          &v88,
          (unsigned __int8)(((i >> 7) + 1) >> 1));
  --dword_A8E7AC; /*0x44db9d*/
  if ( !v29 ) /*0x44dba3*/
  {
LABEL_34:
    CellClass::AddObject((CellClass *)this->?, (_DWORD *)v4); /*0x44dc6e*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 284))(v4); /*0x44dc7e*/
    goto LABEL_35; /*0x44dc7e*/
  }
  if ( this->Type->InfantryAbsorb ) /*0x44dbaf*/
  {
    v30 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 18))(this, &v90); /*0x44dbc5*/
    StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 628), v30, 0); /*0x44dbd5*/
    v31 = *(_DWORD *)(v4 + 540); /*0x44dbda*/
    if ( *(_BYTE *)(v31 + 492) ) /*0x44dbe0*/
      *(_BYTE *)(v4 + 1679) = 0; /*0x44dbea*/
    if ( !*(_BYTE *)(v4 + 1080) ) /*0x44dbf1*/
    {
      ++*(_DWORD *)(v31 + 756); /*0x44dc02*/
      *(_BYTE *)(v4 + 1080) = 1; /*0x44dc08*/
    }
    *(_BYTE *)(v4 + 1081) = 0; /*0x44dc0f*/
  }
  (*(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)v4 + 488))(v4, 2, 0, v81); /*0x44dc1e*/
  v32 = *(_DWORD *)v4; /*0x44dc28*/
  if ( v84.__pad_0[2] ) /*0x44dc2e*/
    p_m_Position = (__int16 *)&v84.m_Position; /*0x44dc34*/
  else
    p_m_Position = (__int16 *)&v84.m_Data; /*0x44dc3b*/
  v33 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], p_m_Position); /*0x44dc41*/
  (*(void (__thiscall **)(int, void *))(v32 + 1152))(v4, v33); /*0x44dc49*/
  if ( this->Type->ExtraPowerBonus > 0 ) /*0x44dc5d*/
    LOBYTE(this->?->HouseClass_field_timer_B[2]) = 1; /*0x44dc65*/
LABEL_35:
  _EAX = MissionClass::GetMissionControl((MissionClass *)this); /*0x44dc84*/
  __asm /*0x44dc8b*/
  {
    fld qword ptr [eax+10h]
    fmul ds:dbl_7E27F8
  }
  LOWORD(v35) = Math::RoundToInt(v1); /*0x44dc94*/
  return v35 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x44dcb1*/
}



// ==== 0x0044E3A0  BuildingClass::CheckOverlapWithOthers  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::CheckOverlapWithOthers(BuildingClass *this)
{
  int v2; // ebp
  _WORD *v3; // esi
  BuildingClass *v4; // eax
  char v6; // [esp+13h] [ebp-9h]
  int v7; // [esp+14h] [ebp-8h]
  __int16 v8[2]; // [esp+18h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, __int16 *))this->TechnoClass + 110))(this, v8); /*0x44e3b8*/
  v3 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD))this->TechnoClass + 66))(this, 0); /*0x44e3cf*/
  v6 = 0; /*0x44e3d1*/
LABEL_2:
  while ( *v3 != 0x7FFF || v3[1] != 0x7FFF ) /*0x44e3e3*/
  {
    LOWORD(v7) = v2 + *v3; /*0x44e3eb*/
    HIWORD(v7) = HIWORD(v2) + v3[1]; /*0x44e3f8*/
    *(_DWORD *)v8 = v7; /*0x44e401*/
    v3 += 2; /*0x44e40a*/
    v4 = (BuildingClass *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 57); /*0x44e412*/
    if ( v4 ) /*0x44e41a*/
    {
      while ( this == v4 ) /*0x44e41e*/
      {
        v4 = (BuildingClass *)v4->?; /*0x44e420*/
        if ( !v4 ) /*0x44e425*/
          goto LABEL_2; /*0x44e425*/
      }
      v6 = 1; /*0x44e429*/
    }
  }
  return v6; /*0x44e434*/
}



// ==== 0x0044E440  BuildingClass::ProcessPowerPlantEffect  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessPowerPlantEffect(BuildingClass *this)
{
  double v1; // st7
  BuildingTypeClass *Type; // eax
  int v5; // eax
  int v6; // ecx
  int v8; // eax
  int result; // eax
  int *v10; // eax
  int v12; // eax
  int v13; // edx
  int *GateTimer; // esi
  int *location; // esi
  int v16; // edi
  int v17; // edx
  int v18; // eax
  int v21; // eax
  int v23; // eax
  int v24; // [esp+8h] [ebp-34h]
  int v25; // [esp+Ch] [ebp-30h]
  _DWORD v26[3]; // [esp+10h] [ebp-2Ch] BYREF
  int v27; // [esp+1Ch] [ebp-20h] BYREF
  int v28; // [esp+20h] [ebp-1Ch]
  int v29; // [esp+24h] [ebp-18h]
  int v30; // [esp+2Ch] [ebp-10h] BYREF
  int v31; // [esp+30h] [ebp-Ch]

  Type = this->Type; /*0x44e447*/
  if ( Type->Gate ) /*0x44e44d*/
  {
    switch ( this->? ) /*0x44e466*/
    {
      case 0: /*0x44e466*/
        if ( (unsigned __int8)BuildingClass::CheckPowerFlags((BuildingClass *)this->?) ) /*0x44e475*/
        {
          _EAX = this->Type; /*0x44e47e*/
          __asm /*0x44e484*/
          {
            fld qword ptr [eax+0E28h]
            fmul ds:dbl_7E27F8
          }
          LOWORD(v5) = Math::RoundToInt(v1); /*0x44e490*/
          v6 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44e495*/
          this->? = 2; /*0x44e4a1*/
          this->GateTimer[0] = v6; /*0x44e4ab*/
          this->GateTimer[1] = v28; /*0x44e4b1*/
          this->GateTimer[2] = v5; /*0x44e4b4*/
          this->GateTimer[3] = v5; /*0x44e4b7*/
          goto LABEL_5; /*0x44e4b7*/
        }
        if ( !(unsigned __int8)Window::IsVisible((Window *)this->?) ) /*0x44e4f0*/
        {
          if ( (unsigned __int8)BuildingClass::CheckFlag24((BuildingClass *)this->?) ) /*0x44e4ff*/
          {
            BuildingClass::UpdateTimerWithElapsed((BuildingClass *)this->?); /*0x44e50a*/
          }
          else
          {
            RateScaler::Init((RateScaler *)this->?, *(double *)this->Type->?); /*0x44e52a*/
            v26[0] = this->?[0]; /*0x44e539*/
            v26[1] = this->?[1]; /*0x44e545*/
            v26[2] = this->?[2]; /*0x44e54c*/
            StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1032), v26, 0); /*0x44e55a*/
            v10 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 75))(this, &v30); /*0x44e56a*/
            Cell::CreateCrater(*v10, v10[1], v10[2], v10[3], 0); /*0x44e591*/
          }
        }
        _ECX = this->Type; /*0x44e596*/
        this->? = 1; /*0x44e59c*/
        __asm /*0x44e5a6*/
        {
          fld qword ptr [ecx+0E28h]
          fmul ds:dbl_7E27F8
        }
        LOWORD(v12) = Math::RoundToInt(v1); /*0x44e5b2*/
        v13 = v31; /*0x44e5bd*/
        GateTimer = this->GateTimer; /*0x44e5c1*/
        *GateTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44e5c7*/
        GateTimer[1] = v13; /*0x44e5c9*/
        GateTimer[2] = v12; /*0x44e5cc*/
        GateTimer[3] = v12; /*0x44e5cf*/
        return 0; /*0x44e5d9*/
      case 1: /*0x44e466*/
        if ( (unsigned __int8)BuildingClass::CheckPowerFlags((BuildingClass *)this->?) ) /*0x44e6e0*/
          this->? = 2; /*0x44e6e9*/
        goto LABEL_23; /*0x44e6e9*/
      case 2: /*0x44e466*/
        if ( BuildingClass::CheckOverlapWithOthers(this) ) /*0x44e637*/
        {
          _ECX = this->Type; /*0x44e69f*/
          __asm /*0x44e6a5*/
          {
            fld qword ptr [ecx+0E28h]
            fmul ds:dbl_7E27F8
          }
          LOWORD(v21) = Math::RoundToInt(v1); /*0x44e6b1*/
          this->GateTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x44e6c2*/
          this->GateTimer[1] = v31; /*0x44e6cc*/
          this->GateTimer[2] = v21; /*0x44e6cf*/
          this->GateTimer[3] = v21; /*0x44e6d2*/
        }
        else
        {
          v16 = this->GateTimer[3]; /*0x44e640*/
          v25 = v16; /*0x44e648*/
          if ( !v16 ) /*0x44e64c*/
            goto LABEL_19; /*0x44e64c*/
          v17 = this->GateTimer[0]; /*0x44e64e*/
          v18 = this->GateTimer[2]; /*0x44e654*/
          if ( v17 != -1 ) /*0x44e65d*/
          {
            if ( *(_DWORD *)&stru_A8EB00.?[416] - v17 >= v18 ) /*0x44e669*/
              v18 = 0; /*0x44e66f*/
            else
              v18 -= *(_DWORD *)&stru_A8EB00.?[416] - v17; /*0x44e66b*/
          }
          v24 = v16 - v18; /*0x44e673*/
          __asm /*0x44e677*/
          {
            fild [esp+3Ch+var_34]
            fidiv [esp+3Ch+var_30]
            fcomp ds:dbl_7E1718
            fnstsw ax
          }
          if ( (_AX & 0x4000) != 0 ) /*0x44e68a*/
LABEL_19:
            this->? = 3; /*0x44e690*/
        }
        goto LABEL_5; /*0x44e69a*/
      case 3: /*0x44e466*/
        Timer::StartDouble((Timer *)this->?, *(double *)Type->?); /*0x44e5ee*/
        this->? = 4; /*0x44e5f3*/
        location = this->?; /*0x44e5fd*/
        v27 = *location; /*0x44e607*/
        v28 = location[1]; /*0x44e613*/
        v29 = location[2]; /*0x44e61a*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1028), &v27, 0); /*0x44e628*/
        return 0; /*0x44e634*/
      case 4: /*0x44e466*/
LABEL_23:
        if ( (unsigned __int8)Flag::CheckNone((Flag *)this->?) ) /*0x44e6fb*/
        {
          (*((void (__thiscall **)(BuildingClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, 1); /*0x44e70c*/
          this->? = 5; /*0x44e712*/
          this->? = 1; /*0x44e71c*/
        }
        if ( (unsigned __int8)Window::IsVisible((Window *)this->?) /*0x44e73b*/
          || (unsigned __int8)BuildingClass::CheckFlag24((BuildingClass *)this->?)
          || (unsigned __int8)BuildingClass::CheckPowerFlags((BuildingClass *)this->?) )
        {
          Animation::GetProgress((Animation *)this->?); /*0x44e746*/
          _EAX = this->Type; /*0x44e74b*/
          __asm { fimul dword ptr [eax+16F8h] } /*0x44e751*/
          LOWORD(v23) = Math::RoundToInt(v1); /*0x44e757*/
          if ( v23 != this->GateStage ) /*0x44e765*/
          {
            this->GateStage = v23; /*0x44e767*/
            this->? = 1; /*0x44e76d*/
          }
        }
        return 0; /*0x44e77b*/
      default:
LABEL_5:
        _EAX = MissionClass::GetMissionControl((MissionClass *)this); /*0x44e4ba*/
        __asm /*0x44e4c1*/
        {
          fld qword ptr [eax+10h]
          fmul ds:dbl_7E27F8
        }
        LOWORD(v8) = Math::RoundToInt(v1); /*0x44e4ca*/
        result = v8 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x44e4e6*/
        break; /*0x44e4ed*/
    }
  }
  else
  {
    (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 5, 0); /*0x44e784*/
    return 1; /*0x44e78b*/
  }
  return result; /*0x44e4e8*/
}



// ==== 0x0044E7B0  BuildingClass::GetPowerOutput  this=BuildingClass  sig=csp ====
int __usercall BuildingClass::GetPowerOutput@<eax>(BuildingClass *this, double a2@<st0>)
{
  BuildingClass *v2; // ecx
  BuildingClass *v3; // esi
  int PowerBonus; // edi
  BuildingTypeClass *Type; // eax
  int ExtraPowerBonus; // eax
  int v7; // ecx
  int *Upgrades; // ecx
  int v9; // edx
  int result; // eax
  int v11; // [esp+8h] [ebp-4h]

  v3 = v2; /*0x44e7b2*/
  PowerBonus = v2->Type->PowerBonus; /*0x44e7bd*/
  v11 = PowerBonus; /*0x44e7c3*/
  if ( (*((unsigned __int8 (**)(void))v2->TechnoClass + 117))() ) /*0x44e7c7*/
    return 0; /*0x44e7c7*/
  if ( v3->HasExtraPowerBonus ) /*0x44e7d5*/
  {
    PowerBonus += v3->Type->ExtraPowerBonus; /*0x44e7e5*/
    v11 = PowerBonus; /*0x44e7eb*/
  }
  Type = v3->Type; /*0x44e7ef*/
  if ( Type->UnitAbsorb || Type->InfantryAbsorb ) /*0x44e7ff*/
  {
    ExtraPowerBonus = Type->ExtraPowerBonus; /*0x44e809*/
    if ( ExtraPowerBonus > 0 ) /*0x44e811*/
    {
      v7 = v3->?[0]; /*0x44e813*/
      if ( v7 > 0 ) /*0x44e81b*/
      {
        PowerBonus += v7 * ExtraPowerBonus; /*0x44e820*/
        v11 = PowerBonus; /*0x44e822*/
      }
    }
  }
  if ( v3->UpgradeLevel ) /*0x44e826*/
  {
    Upgrades = v3->Upgrades; /*0x44e830*/
    v9 = 3; /*0x44e836*/
    do /*0x44e84b*/
    {
      if ( *Upgrades ) /*0x44e83b*/
        PowerBonus += *(_DWORD *)(*Upgrades + 3808); /*0x44e841*/
      ++Upgrades; /*0x44e847*/
      --v9; /*0x44e84a*/
    }
    while ( v9 ); /*0x44e84b*/
    v11 = PowerBonus; /*0x44e84d*/
  }
  if ( PowerBonus <= 0 || !v3->HasPower ) /*0x44e855*/
    return 0; /*0x44e874*/
  BuildingClass::GetHealthRatio(v3); /*0x44e861*/
  __asm { fimul [esp+0Ch+var_4] } /*0x44e866*/
  LOWORD(result) = Math::RoundToInt(a2); /*0x44e86a*/
  return result; /*0x44e86f*/
}



// ==== 0x0044E880  BuildingClass::GetPowerDrain  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetPowerDrain(BuildingClass *this)
{
  BuildingTypeClass *Type; // ecx
  int result; // eax
  int *Upgrades; // edx
  int v5; // esi

  if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 117))(this) || !this->HasPower ) /*0x44e88f*/
    return 0; /*0x44e8de*/
  Type = this->Type; /*0x44e899*/
  result = Type->PowerDrain; /*0x44e8a7*/
  if ( this->HasExtraPowerDrain ) /*0x44e89f*/
    result += Type->ExtraPowerDrain; /*0x44e8af*/
  if ( this->UpgradeLevel ) /*0x44e8b5*/
  {
    Upgrades = this->Upgrades; /*0x44e8bf*/
    v5 = 3; /*0x44e8c5*/
    do /*0x44e8da*/
    {
      if ( *Upgrades ) /*0x44e8ca*/
        result += *(_DWORD *)(*Upgrades + 3812); /*0x44e8d0*/
      ++Upgrades; /*0x44e8d6*/
      --v5; /*0x44e8d9*/
    }
    while ( v5 ); /*0x44e8da*/
  }
  return result; /*0x44e8dc*/
}



// ==== 0x0044E8F0  BuildingClass::OnObjectExpired  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::OnObjectExpired(BuildingClass *this)
{
  int v2; // edx
  int v5; // ecx
  char *v6; // eax
  int v7; // edx
  int v9; // ecx
  char *v10; // eax
  int result; // eax
  int *DamageFireAnims; // ecx
  int *Upgrades; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int *v20; // esi
  int v21; // ecx
  int v22; // ecx
  int *v23; // [esp+10h] [ebp+4h]
  int *v24; // [esp+14h] [ebp+8h] BYREF

  ObjectClass::NotifyExpired((ObjectClass *)this, v23, v24); /*0x44e8ff*/
  if ( (int *)this->C4AppliedBy == v23 ) /*0x44e90e*/
    this->C4AppliedBy = 0; /*0x44e910*/
  if ( (int *)this->FirestormAnim == v23 ) /*0x44e91c*/
    this->FirestormAnim = 0; /*0x44e91e*/
  if ( (int *)this->Factory == v23 ) /*0x44e92a*/
    this->Factory = 0; /*0x44e92c*/
  if ( (int *)this->Spotlight == v23 ) /*0x44e938*/
    this->Spotlight = 0; /*0x44e93a*/
  if ( (int *)this->LightSource == v23 ) /*0x44e946*/
    this->LightSource = 0; /*0x44e948*/
  if ( (int *)this->Anims[8] == v23 ) /*0x44e954*/
  {
    BuildingClass::GetHealthRatio(this); /*0x44e958*/
    _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44e95d*/
    __asm /*0x44e963*/
    {
      fcomp qword ptr [ecx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x44e96e*/
    {
      v5 = 1; /*0x44e976*/
      v6 = &this->Type->__pad_F70[1204]; /*0x44e97b*/
    }
    else
    {
      v5 = 0; /*0x44e988*/
      v6 = &this->Type->__pad_F70[1188]; /*0x44e98a*/
    }
    if ( v6 && *v6 ) /*0x44e993*/
      BuildingClass::PlayAnim(this, v2, v6, 18, v5, 0, 0); /*0x44e99f*/
  }
  if ( this->Type->Grinding && (int *)this->Anims[10] == v23 ) /*0x44e9b8*/
  {
    BuildingClass::GetHealthRatio(this); /*0x44e9bc*/
    _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44e9c1*/
    __asm /*0x44e9c6*/
    {
      fcomp qword ptr [eax+1700h]
      fnstsw ax
    }
    if ( (_EAX & 0x4100) != 0 ) /*0x44e9d1*/
    {
      v9 = 1; /*0x44e9d9*/
      v10 = &this->Type->__pad_F70[184]; /*0x44e9de*/
    }
    else
    {
      v9 = 0; /*0x44e9eb*/
      v10 = &this->Type->__pad_F70[168]; /*0x44e9ed*/
    }
    if ( v10 && *v10 ) /*0x44e9f6*/
      BuildingClass::PlayAnim(this, v7, v10, 3, v9, 0, 0); /*0x44ea02*/
  }
  if ( v23 && (*(int (__stdcall **)(int *))(v23[1] + 12))(v23 + 1) == 4 ) /*0x44ea18*/
  {
    result = 0; /*0x44ea1a*/
    DamageFireAnims = this->DamageFireAnims; /*0x44ea1c*/
    do /*0x44ea2d*/
    {
      if ( (int *)*DamageFireAnims == v23 ) /*0x44ea24*/
      {
        this->DamageFireAnims[result] = 0; /*0x44ea45*/
        return result; /*0x44ea4f*/
      }
      ++result; /*0x44ea26*/
      ++DamageFireAnims; /*0x44ea27*/
    }
    while ( result < 8 ); /*0x44ea2d*/
    if ( !*((_BYTE *)v23 + 280) ) /*0x44ea35*/
      goto LABEL_34; /*0x44ea35*/
    LOBYTE(result) = BuildingClass::StopAnim((int)this, (int)v23); /*0x44ea3a*/
  }
  else
  {
LABEL_34:
    if ( (int *)this->Type == v23 ) /*0x44ea58*/
      this->Type = 0; /*0x44ea5a*/
    Upgrades = this->Upgrades; /*0x44ea60*/
    v14 = 3; /*0x44ea66*/
    do /*0x44ea75*/
    {
      if ( (int *)*Upgrades == v23 ) /*0x44ea6d*/
        *Upgrades = 0; /*0x44ea6f*/
      ++Upgrades; /*0x44ea71*/
      --v14; /*0x44ea74*/
    }
    while ( v14 ); /*0x44ea75*/
    v15 = this->Overpowerers[0]; /*0x44ea77*/
    v24 = v23; /*0x44ea8b*/
    v16 = (*(int (__thiscall **)(int *, int **))(v15 + 16))(this->Overpowerers, &v24); /*0x44ea8f*/
    if ( v16 != -1 ) /*0x44ea95*/
    {
      v17 = this->Audio7[1]; /*0x44ea97*/
      if ( v16 < v17 ) /*0x44ea9c*/
      {
        v18 = v17 - 1; /*0x44ea9e*/
        for ( this->Audio7[1] = v18; /*0x44eaa4*/
              v16 < this->Audio7[1];
              *(_DWORD *)(this->Occupants[0] + 4 * v16 - 4) = *(_DWORD *)(this->Occupants[0] + 4 * v16) )
        {
          ++v16; /*0x44eaa9*/
        }
      }
    }
    result = dword_A8E7AC; /*0x44eab8*/
    if ( dword_A8E7AC ) /*0x44eac0*/
    {
      v19 = this->Audio7[3]; /*0x44eac2*/
      v20 = &this->Audio7[3]; /*0x44eac8*/
      v24 = v23; /*0x44ead2*/
      result = (*(int (__thiscall **)(int *, int **))(v19 + 16))(v20, &v24); /*0x44ead9*/
      if ( result != -1 ) /*0x44eadf*/
      {
        v21 = v20[4]; /*0x44eae1*/
        if ( result < v21 ) /*0x44eae6*/
        {
          v22 = v21 - 1; /*0x44eae8*/
          for ( v20[4] = v22; result < v20[4]; *(_DWORD *)(v20[1] + 4 * result - 4) = *(_DWORD *)(v20[1] + 4 * result) ) /*0x44eaee*/
            ++result; /*0x44eaf3*/
        }
      }
    }
  }
  return result; /*0x44ea3f*/
}



// ==== 0x0044EB10  BuildingClass::GetCrew  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetCrew(BuildingClass *this)
{
  if ( this->HasBeenCaptured /*0x44eb43*/
    || Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 25
    || this->Type->Factory[0] != 7 )
  {
    return TechnoClass::GetCrew((TechnoClass *)this); /*0x44eb55*/
  }
  else
  {
    return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3952); /*0x44eb4c*/
  }
}



// ==== 0x0044EBF0  BuildingClass::Disappear_PrismForward  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Disappear_PrismForward(BuildingClass *this)
{
  int v1; // ebx
  FactoryClass *Factory; // ecx
  FactoryClass *v4; // ecx
  HouseClass *owner; // ecx
  BuildingTypeClass *Type; // eax
  int v7; // edx
  AbstractClass *primaryForBuildings; // ecx
  int v9; // eax
  char inLimbo; // bl
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  AbstractClass *primaryUnused1; // ecx
  int v16; // eax
  char v17; // bl
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  AbstractClass *primaryUnused2; // ecx
  int v23; // eax
  char v24; // bl
  int v25; // edi
  int v26; // eax
  int v27; // eax
  int v28; // eax
  AbstractClass *primaryUnused3; // ecx
  int v30; // eax
  char v31; // bl
  int v32; // edi
  int v33; // eax
  int v34; // eax
  int v35; // eax
  AbstractClass *primaryForDefenses; // ecx
  int v37; // eax
  char v38; // bl
  int v39; // edi
  int v40; // eax
  int v41; // eax
  int v42; // eax
  AbstractClass *BuildLimit; // eax
  int i; // ebp
  int Member; // eax
  int v46; // edi
  int v48; // [esp+44h] [ebp-10h]
  char v49; // [esp+58h] [ebp+4h]

  if ( v49 ) /*0x44ebfb*/
  {
    Factory = this->Factory; /*0x44ec01*/
    if ( Factory ) /*0x44ec09*/
    {
      BuildingClass::AbandonProduction((int)Factory); /*0x44ec0b*/
      v4 = this->Factory; /*0x44ec10*/
      if ( v4 ) /*0x44ec18*/
        (*((void (__thiscall **)(FactoryClass *, int))v4->AbstractClass + 8))(v4, 1); /*0x44ec1e*/
      this->Factory = 0; /*0x44ec21*/
    }
    owner = this->?; /*0x44ec2b*/
    v48 = v1; /*0x44ec31*/
    if ( !owner ) /*0x44ec34*/
      goto LABEL_33; /*0x44ec34*/
    Type = this->Type; /*0x44ec3a*/
    v7 = Type->Factory[0]; /*0x44ec40*/
    if ( v7 == 7 ) /*0x44ec49*/
    {
      primaryForBuildings = (AbstractClass *)owner->primaryForBuildings; /*0x44ec4f*/
      if ( primaryForBuildings ) /*0x44ec57*/
      {
        v9 = AbstractClass::GetType(primaryForBuildings); /*0x44ec59*/
        inLimbo = this->?; /*0x44ec5e*/
        v11 = v9; /*0x44ec64*/
        this->? = 1; /*0x44ec68*/
        if ( v9 ) /*0x44ec6f*/
        {
          v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 132))(v9); /*0x44ec75*/
          if ( !(*(int (__thiscall **)(int, int, _DWORD, _DWORD, HouseClass *))(*(_DWORD *)v12 + 148))( /*0x44ec8c*/
                  v12,
                  1,
                  0,
                  0,
                  this->?) )
          {
            v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11); /*0x44ec9a*/
            v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 64))(v13); /*0x44eca8*/
            HouseClass::CancelProduction(this->?, (void *)this->Type->Factory[0], v14, 0, 0); /*0x44ecbf*/
          }
        }
        this->? = inLimbo; /*0x44ecc4*/
      }
      primaryUnused1 = (AbstractClass *)this->?->primaryUnused1; /*0x44ecd0*/
      if ( primaryUnused1 ) /*0x44ecd8*/
      {
        v16 = AbstractClass::GetType(primaryUnused1); /*0x44ecda*/
        v17 = this->?; /*0x44ecdf*/
        v18 = v16; /*0x44ece5*/
        this->? = 1; /*0x44ece9*/
        if ( v16 ) /*0x44ecf0*/
        {
          v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 132))(v16); /*0x44ecf6*/
          if ( !(*(int (__thiscall **)(int, int, _DWORD, _DWORD, HouseClass *))(*(_DWORD *)v19 + 148))( /*0x44ed0d*/
                  v19,
                  1,
                  0,
                  0,
                  this->?) )
          {
            v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 132))(v18); /*0x44ed1b*/
            v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 64))(v20); /*0x44ed29*/
            HouseClass::CancelProduction(this->?, (void *)this->Type->Factory[0], v21, 0, 0); /*0x44ed40*/
          }
        }
        this->? = v17; /*0x44ed45*/
      }
      primaryUnused2 = (AbstractClass *)this->?->primaryUnused2; /*0x44ed51*/
      if ( primaryUnused2 ) /*0x44ed59*/
      {
        v23 = AbstractClass::GetType(primaryUnused2); /*0x44ed5b*/
        v24 = this->?; /*0x44ed60*/
        v25 = v23; /*0x44ed66*/
        this->? = 1; /*0x44ed6a*/
        if ( v23 ) /*0x44ed71*/
        {
          v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 132))(v23); /*0x44ed77*/
          if ( !(*(int (__thiscall **)(int, int, _DWORD, _DWORD, HouseClass *))(*(_DWORD *)v26 + 148))( /*0x44ed8e*/
                  v26,
                  1,
                  0,
                  0,
                  this->?) )
          {
            v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 132))(v25); /*0x44ed9c*/
            v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 64))(v27); /*0x44edaa*/
            HouseClass::CancelProduction(this->?, (void *)this->Type->Factory[0], v28, 0, 0); /*0x44edc1*/
          }
        }
        this->? = v24; /*0x44edc6*/
      }
      primaryUnused3 = (AbstractClass *)this->?->primaryUnused3; /*0x44edd2*/
      if ( primaryUnused3 ) /*0x44edda*/
      {
        v30 = AbstractClass::GetType(primaryUnused3); /*0x44eddc*/
        v31 = this->?; /*0x44ede1*/
        v32 = v30; /*0x44ede7*/
        this->? = 1; /*0x44edeb*/
        if ( v30 ) /*0x44edf2*/
        {
          v33 = (*(int (__thiscall **)(int))(*(_DWORD *)v30 + 132))(v30); /*0x44edf8*/
          if ( !(*(int (__thiscall **)(int, int, _DWORD, _DWORD, HouseClass *))(*(_DWORD *)v33 + 148))( /*0x44ee0f*/
                  v33,
                  1,
                  0,
                  0,
                  this->?) )
          {
            v34 = (*(int (__thiscall **)(int))(*(_DWORD *)v32 + 132))(v32); /*0x44ee1d*/
            v35 = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 64))(v34); /*0x44ee2b*/
            HouseClass::CancelProduction(this->?, (void *)this->Type->Factory[0], v35, 0, 0); /*0x44ee42*/
          }
        }
        this->? = v31; /*0x44ee47*/
      }
      primaryForDefenses = (AbstractClass *)this->?->primaryForDefenses; /*0x44ee53*/
      if ( !primaryForDefenses ) /*0x44ee5b*/
        goto LABEL_33; /*0x44ee5b*/
      v37 = AbstractClass::GetType(primaryForDefenses); /*0x44ee5d*/
      v38 = this->?; /*0x44ee62*/
      v39 = v37; /*0x44ee68*/
      this->? = 1; /*0x44ee6c*/
      if ( !v37 ) /*0x44ee73*/
        goto LABEL_32; /*0x44ee73*/
    }
    else
    {
      BuildLimit = (AbstractClass *)HouseClass::GetBuildLimit(owner, v7, Type->?[1], 0); /*0x44eef7*/
      if ( !BuildLimit ) /*0x44eefe*/
        goto LABEL_33; /*0x44eefe*/
      v37 = AbstractClass::GetType(BuildLimit); /*0x44ef02*/
      v38 = this->?; /*0x44ef07*/
      v39 = v37; /*0x44ef0d*/
      this->? = 1; /*0x44ef11*/
      if ( !v37 ) /*0x44ef18*/
      {
LABEL_32:
        this->? = v38; /*0x44eec8*/
LABEL_33:
        (*((void (__thiscall **)(BuildingClass *, int))this->TechnoClass + 160))(this, 3); /*0x44eece*/
        return ObjectClass::Destroy2((ObjectClass *)this); /*0x44eed4*/
      }
    }
    v40 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v37 + 132))(v37, v48); /*0x44ee79*/
    if ( !(*(int (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v40 + 148))(v40, 1, 0, 0) ) /*0x44ee90*/
    {
      v41 = (*(int (__thiscall **)(int))(*(_DWORD *)v39 + 132))(v39); /*0x44ee9e*/
      v42 = (*(int (__thiscall **)(int))(*(_DWORD *)v41 + 64))(v41); /*0x44eeac*/
      HouseClass::CancelProduction(this->?, (void *)this->Type->Factory[0], v42, 0, 0); /*0x44eec3*/
    }
    goto LABEL_32; /*0x44eec3*/
  }
  for ( i = 0; i < this->?[2]; ++i ) /*0x44ef33*/
  {
    Member = Team::GetMember((Team *)this, i); /*0x44ef38*/
    v46 = Member; /*0x44ef3d*/
    if ( Member && !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, Member) ) /*0x44ef4a*/
      (*((void (__thiscall **)(BuildingClass *, int, int))this->TechnoClass + 158))(this, 3, v46); /*0x44ef5a*/
  }
  return ObjectClass::Destroy2((ObjectClass *)this); /*0x44eee7*/
}



// ==== 0x0044EFB0  BuildingClass::ValidateFoundation  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ValidateFoundation(BuildingClass *this)
{
  int *v2; // eax
  BuildingTypeClass *Type; // edx
  int v4; // ebp
  int *v5; // esi
  int v6; // edi
  void *v7; // eax
  int v9; // edi
  void *v10; // eax
  int v11; // edi
  void *v12; // eax
  BuildingTypeClass *v13; // eax
  _DWORD *v14; // eax
  int v15; // edi
  void *v16; // eax
  int v17; // edi
  void *v18; // eax
  int v19; // edi
  void *v20; // eax
  int v21; // edi
  void *v22; // eax
  BuildingTypeClass *v23; // ecx
  _WORD *v24; // edi
  _WORD *v25; // eax
  int v26; // ebp
  void *v27; // eax
  __int16 FoundationHeight; // ax
  BuildingTypeClass *v29; // ecx
  int v30; // ebp
  __int16 v31; // di
  __int16 v32; // di
  int v33; // ebp
  void *v34; // eax
  int v35; // edi
  void *v36; // eax
  BuildingTypeClass *v37; // ecx
  __int16 FoundationWidth; // ax
  int *v39; // ecx
  int v40; // ebp
  __int16 v41; // di
  __int16 v42; // di
  int v43; // ebp
  void *v44; // eax
  int v45; // edi
  void *v46; // eax
  int *v47; // ecx
  __int16 v48[2]; // [esp+50h] [ebp-20h] BYREF
  int v49; // [esp+54h] [ebp-1Ch]
  int v50; // [esp+58h] [ebp-18h] BYREF
  int v51; // [esp+5Ch] [ebp-14h]
  int v52[3]; // [esp+64h] [ebp-Ch] BYREF
  _DWORD *v53; // [esp+74h] [ebp+4h]
  int *v54; // [esp+78h] [ebp+8h]
  int v55; // [esp+78h] [ebp+8h]
  int v56; // [esp+78h] [ebp+8h]
  int v57; // [esp+78h] [ebp+8h]
  __int16 v58; // [esp+78h] [ebp+8h]
  int v59; // [esp+78h] [ebp+8h]
  int v60; // [esp+78h] [ebp+8h]
  int v61; // [esp+78h] [ebp+8h]
  int v62; // [esp+7Ch] [ebp+Ch] BYREF

  v2 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 110))(this, &v50); /*0x44efc2*/
  Type = this->Type; /*0x44efc8*/
  v4 = *v2; /*0x44efce*/
  v5 = v54; /*0x44efd0*/
  v51 = *v2; /*0x44efd4*/
  if ( Type->GDIBarracks ) /*0x44efd8*/
  {
    LOWORD(v55) = v4 + 1; /*0x44efec*/
    HIWORD(v55) = HIWORD(v51) + 2; /*0x44eff1*/
    *(_DWORD *)v48 = v55; /*0x44f004*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f008*/
    {
      v6 = *v5; /*0x44f011*/
      v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f025*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v6 + 428))(v5, v7, -1, -1, 0, 1) ) /*0x44f02d*/
      {
        *v53 = *(_DWORD *)v48; /*0x44f042*/
        return (int)v53; /*0x44f048*/
      }
    }
  }
  if ( this->Type->NODBarracks ) /*0x44f051*/
  {
    LOWORD(v56) = v4 + 2; /*0x44f062*/
    HIWORD(v56) = HIWORD(v51) + 2; /*0x44f06e*/
    *(_DWORD *)v48 = v56; /*0x44f07d*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f081*/
    {
      v9 = *v5; /*0x44f08a*/
      v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f09e*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v9 + 428))(v5, v10, -1, -1, 0, 1) ) /*0x44f0a6*/
      {
        *v53 = *(_DWORD *)v48; /*0x44f0bb*/
        return (int)v53; /*0x44f0c1*/
      }
    }
  }
  if ( this->Type->YuriBarracks ) /*0x44f0ca*/
  {
    LOWORD(v57) = v4 + 2; /*0x44f0dc*/
    HIWORD(v57) = HIWORD(v51) + 1; /*0x44f0e1*/
    *(_DWORD *)v48 = v57; /*0x44f0f4*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f0f8*/
    {
      v11 = *v5; /*0x44f101*/
      v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f115*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v11 + 428))(v5, v12, -1, -1, 0, 1) ) /*0x44f11d*/
      {
LABEL_12:
        *v53 = *(_DWORD *)v48; /*0x44f127*/
        return (int)v53; /*0x44f138*/
      }
    }
  }
  v13 = this->Type; /*0x44f13b*/
  if ( v13->?[1] && v13->WeaponsFactory ) /*0x44f14f*/
  {
    v14 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *, int *))this->TechnoClass + 42))(this, v52, v5); /*0x44f167*/
    v58 = *v14 / 256; /*0x44f17d*/
    v48[1] = v14[1] / 256; /*0x44f1a3*/
    ++v48[1]; /*0x44f1a8*/
    v48[0] = v58 + 1; /*0x44f1ae*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f1b3*/
    {
      v15 = *v5; /*0x44f1bc*/
      v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f1d0*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v15 + 428))(v5, v16, -1, -1, 0, 0) ) /*0x44f1d8*/
      {
        *v53 = *(_DWORD *)v48; /*0x44f1ed*/
        return (int)v53; /*0x44f1f3*/
      }
    }
    --v48[1]; /*0x44f1f6*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f205*/
    {
      v17 = *v5; /*0x44f20e*/
      v18 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f222*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v17 + 428))(v5, v18, -1, -1, 0, 0) ) /*0x44f22a*/
      {
        *v53 = *(_DWORD *)v48; /*0x44f23f*/
        return (int)v53; /*0x44f245*/
      }
    }
    ++v48[1]; /*0x44f248*/
    --v48[0]; /*0x44f24d*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f25c*/
    {
      v19 = *v5; /*0x44f265*/
      v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f279*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v19 + 428))(v5, v20, -1, -1, 0, 0) ) /*0x44f281*/
      {
        *v53 = *(_DWORD *)v48; /*0x44f296*/
        return (int)v53; /*0x44f29c*/
      }
    }
  }
  if ( v62 != g_TerrainTypeTable ) /*0x44f2ab*/
  {
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&v62) ) /*0x44f2c5*/
    {
      v21 = *v5; /*0x44f2ce*/
      v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v62); /*0x44f2e2*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v21 + 428))(v5, v22, -1, -1, 0, 0) ) /*0x44f2ea*/
      {
        *v53 = v62; /*0x44f2ff*/
        return (int)v53; /*0x44f305*/
      }
    }
  }
  v23 = this->Type; /*0x44f308*/
  v24 = (_WORD *)v23->FoundationOutside[0]; /*0x44f30e*/
  if ( v24 && !v23->Hospital ) /*0x44f31c*/
  {
    while ( *v24 != 0x7FFF || v24[1] != 0x7FFF ) /*0x44f33e*/
    {
      v25 = v24; /*0x44f344*/
      v24 += 2; /*0x44f346*/
      LOWORD(v59) = v4 + *v25; /*0x44f358*/
      HIWORD(v59) = HIWORD(v51) + v25[1]; /*0x44f361*/
      *(_DWORD *)v48 = v59; /*0x44f36a*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f374*/
      {
        v26 = *v5; /*0x44f37d*/
        v27 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f391*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v26 + 428))(v5, v27, -1, -1, 0, 0) ) /*0x44f399*/
          goto LABEL_36; /*0x44f3a1*/
        LOWORD(v4) = v51; /*0x44f331*/
      }
    }
    goto LABEL_53; /*0x44f33e*/
  }
  FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)v23, 0); /*0x44f3b9*/
  v29 = this->Type; /*0x44f3be*/
  v30 = -1; /*0x44f3c4*/
  v31 = FoundationHeight; /*0x44f3c7*/
  v50 = -1; /*0x44f3c9*/
  if ( BuildingTypeClass::GetFoundationWidth(v29) >= -1 ) /*0x44f3d5*/
  {
    HIWORD(v60) = HIWORD(v51) + v31; /*0x44f3e1*/
    do /*0x44f3ef*/
    {
      v32 = v51 + v30; /*0x44f3ef*/
      LOWORD(v60) = v51 + v30; /*0x44f3f2*/
      *(_DWORD *)v48 = v60; /*0x44f3fb*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f404*/
      {
        v33 = *v5; /*0x44f40d*/
        v34 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f421*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v33 + 428))(v5, v34, -1, -1, 0, 1) ) /*0x44f431*/
          goto LABEL_12; /*0x44f431*/
        v30 = v50; /*0x44f437*/
      }
      LOWORD(v49) = v32; /*0x44f43f*/
      HIWORD(v49) = HIWORD(v51) - 1; /*0x44f449*/
      *(_DWORD *)v48 = v49; /*0x44f458*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f45c*/
      {
        v35 = *v5; /*0x44f465*/
        v36 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f479*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v35 + 428))(v5, v36, -1, -1, 0, 1) ) /*0x44f481*/
          goto LABEL_36; /*0x44f489*/
      }
      v37 = this->Type; /*0x44f48f*/
      v50 = ++v30; /*0x44f496*/
    }
    while ( v30 <= BuildingTypeClass::GetFoundationWidth(v37) ); /*0x44f3ef*/
  }
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(this->Type); /*0x44f4a7*/
  v39 = (int *)this->Type; /*0x44f4b2*/
  v40 = -1; /*0x44f4b8*/
  v41 = FoundationWidth; /*0x44f4bd*/
  v49 = -1; /*0x44f4bf*/
  if ( BuildingTypeClass::GetFoundationHeight(v39, 0) >= -1 ) /*0x44f4cb*/
  {
    LOWORD(v61) = v51 + v41; /*0x44f4d7*/
    while ( 1 ) /*0x44f4e5*/
    {
      v42 = HIWORD(v51) + v40; /*0x44f4e5*/
      HIWORD(v61) = HIWORD(v51) + v40; /*0x44f4e8*/
      *(_DWORD *)v48 = v61; /*0x44f4f1*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f4fa*/
      {
        v43 = *v5; /*0x44f503*/
        v44 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f517*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v43 + 428))(v5, v44, -1, -1, 0, 1) ) /*0x44f527*/
          goto LABEL_12; /*0x44f527*/
        v40 = v49; /*0x44f52d*/
      }
      HIWORD(v50) = v42; /*0x44f535*/
      LOWORD(v50) = v51 - 1; /*0x44f53f*/
      *(_DWORD *)v48 = v50; /*0x44f54e*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v48) ) /*0x44f552*/
      {
        v45 = *v5; /*0x44f55b*/
        v46 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x44f56f*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v45 + 428))(v5, v46, -1, -1, 0, 1) ) /*0x44f577*/
          break; /*0x44f577*/
      }
      v47 = (int *)this->Type; /*0x44f585*/
      v49 = ++v40; /*0x44f58e*/
      if ( v40 > BuildingTypeClass::GetFoundationHeight(v47, 0) ) /*0x44f599*/
        goto LABEL_53; /*0x44f599*/
    }
LABEL_36:
    *v53 = *(_DWORD *)v48; /*0x44f3a3*/
    return (int)v53; /*0x44f3b4*/
  }
LABEL_53:
  *v53 = g_TerrainTypeTable; /*0x44f59f*/
  return (int)v53; /*0x44f03f*/
}



// ==== 0x0044F5C0  BuildingClass::CanBeSoldCheck  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CanBeSoldCheck(BuildingClass *this)
{
  int result; // eax

  result = this->?; /*0x44f5c3*/
  if ( result <= 0 ) /*0x44f5cb*/
  {
    result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 161))(this); /*0x44f5d5*/
    if ( (_BYTE)result ) /*0x44f5dd*/
    {
      LOBYTE(result) = 1; /*0x44f5df*/
    }
    else
    {
      if ( !this->Type->ConstructionYard ) /*0x44f5e9*/
        return this->Type->?[0] != 0; /*0x44f5e9*/
      result = House::IsCurrentPlayer((House *)this->?); /*0x44f5f9*/
      if ( (_BYTE)result && (result = *(_DWORD *)&dword_A8B238) != 0 && dword_A8B320 && (result = (int)this->?) == 0 ) /*0x44f61c*/
        return this->Type->?[0] != 0; /*0x44f633*/
      else
        LOBYTE(result) = 0; /*0x44f61e*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x44f5cd*/
  }
  return result; /*0x44f5cf*/
}



// ==== 0x0044F640  BuildingClass::GetFactoryPosition  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetFactoryPosition(BuildingClass *this)
{
  BuildingTypeClass *Type; // eax
  int *location; // ecx
  int v3; // esi
  int v4; // edi
  int v5; // ecx
  int v6; // edx
  int v7; // esi
  int *v9; // ecx
  char v10[12]; // [esp+4h] [ebp-Ch] BYREF
  int *v11; // [esp+14h] [ebp+4h]

  Type = this->Type; /*0x44f640*/
  if ( Type->ExitCoord[0] == g_BuildingClassPool /*0x44f676*/
    && Type->ExitCoord[1] == dword_89C84C
    && Type->ExitCoord[2] == dword_89C850 )
  {
    v9 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v10); /*0x44f6bf*/
    *v11 = *v9; /*0x44f6c9*/
    v11[1] = v9[1]; /*0x44f6ce*/
    v11[2] = v9[2]; /*0x44f6d5*/
    return (int)v11; /*0x44f6c1*/
  }
  else
  {
    location = this->?; /*0x44f678*/
    v3 = location[1]; /*0x44f681*/
    v4 = location[2]; /*0x44f684*/
    v5 = *location + Type->ExitCoord[0]; /*0x44f68d*/
    v6 = v3 + Type->ExitCoord[1]; /*0x44f695*/
    v7 = Type->ExitCoord[2]; /*0x44f697*/
    *v11 = v5; /*0x44f6a5*/
    v11[1] = v6; /*0x44f6a7*/
    v11[2] = v4 + v7; /*0x44f6aa*/
    return (int)v11; /*0x44f69d*/
  }
}



// ==== 0x0044F6E0  ObjectClass::method_44F6E0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_44F6E0(ObjectClass *this, _DWORD *a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // ecx
  _BYTE v9[12]; // [esp+14h] [ebp-Ch] BYREF
  int v10; // [esp+28h] [ebp+8h]

  v3 = 6; /*0x44f6ed*/
  v4 = 5; /*0x44f6f2*/
  v5 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))this->AbstractClass + 18))(this, v9); /*0x44f6f7*/
  v6 = *v5 / 256; /*0x44f71b*/
  v7 = v5[1] / 256; /*0x44f71e*/
  if ( a3 ) /*0x44f72e*/
  {
    if ( a3 == 2 ) /*0x44f733*/
      v4 = 0; /*0x44f735*/
  }
  else
  {
    v3 = 0; /*0x44f739*/
  }
  if ( (__int16)v6 - *(_DWORD *)&stru_87F5F0.__pad_58[708] > *(_DWORD *)&stru_87F5F0.__pad_58[716] / 2 ) /*0x44f751*/
    v3 = -v3; /*0x44f753*/
  if ( (__int16)v7 - *(_DWORD *)&stru_87F5F0.__pad_58[712] > *(_DWORD *)&stru_87F5F0.__pad_58[720] / 2 ) /*0x44f76b*/
    v4 = -v4; /*0x44f76d*/
  LOWORD(v10) = v6 + v3; /*0x44f77f*/
  HIWORD(v10) = v7 + v4; /*0x44f784*/
  *a2 = v10; /*0x44f78f*/
  return a2; /*0x44f78d*/
}



// ==== 0x0044F820  Scenario::ReadTeams  this=Scenario  sig=csp ====
int __thiscall Scenario::ReadTeams(INIClass *this)
{
  INIClass *v1; // esi
  int result; // eax
  int v3; // ecx
  unsigned __int8 *StringByIndex; // eax
  char *v5; // eax
  int v6; // eax
  Object *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  char *v11; // eax
  int v12; // edx
  char *v13; // eax
  int v14; // eax
  char *v15; // eax
  char *v16; // ebp
  char *v17; // eax
  char *v18; // eax
  char *v19; // eax
  char *v20; // eax
  char *v21; // eax
  int *v22; // esi
  int v23; // edi
  char *v24; // eax
  char *v25; // eax
  bool v26; // bl
  char *v27; // eax
  int v28; // eax
  int v29; // esi
  TeamClass *v30; // eax
  int v31; // eax
  int v32; // edi
  int v33; // eax
  int v34; // edi
  int v35; // edx
  int v36; // edx
  BuildingLightClass *v37; // ecx
  int v38; // eax
  int v39; // edx
  Trigger *v40; // ecx
  int v41; // edi
  _BYTE **v42; // ebp
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  _DWORD *v46; // ebp
  int v47; // ebx
  int v48; // edi
  int v49; // eax
  int *v50; // eax
  int v51; // edx
  _DWORD *Value; // eax
  int v53; // esi
  unsigned int v54; // eax
  bool v55; // [esp+8h] [ebp-DCh]
  bool v56; // [esp+9h] [ebp-DBh]
  bool v57; // [esp+Ah] [ebp-DAh]
  bool v58; // [esp+Bh] [ebp-D9h]
  int v59; // [esp+Ch] [ebp-D8h]
  int v60; // [esp+Ch] [ebp-D8h]
  int v61; // [esp+10h] [ebp-D4h]
  int v62; // [esp+14h] [ebp-D0h]
  int IndexByName; // [esp+18h] [ebp-CCh]
  int v64; // [esp+18h] [ebp-CCh]
  int v65; // [esp+1Ch] [ebp-C8h]
  int v66; // [esp+20h] [ebp-C4h]
  int v67; // [esp+24h] [ebp-C0h]
  int v68; // [esp+28h] [ebp-BCh]
  int v69; // [esp+2Ch] [ebp-B8h]
  int v70; // [esp+30h] [ebp-B4h]
  int v71; // [esp+34h] [ebp-B0h]
  _DWORD v73[3]; // [esp+3Ch] [ebp-A8h] BYREF
  _DWORD v74[3]; // [esp+48h] [ebp-9Ch] BYREF
  _DWORD v75[3]; // [esp+54h] [ebp-90h] BYREF
  int v76; // [esp+60h] [ebp-84h] BYREF
  char String[128]; // [esp+64h] [ebp-80h] BYREF

  v1 = this; /*0x44f827*/
  INIClass::ResetSection(this); /*0x44f82d*/
  memset(v73, 255, sizeof(v73)); /*0x44f83b*/
  result = INIClass::GetKeyCount(v1->__pad_0, (unsigned __int8 *)aStructures); /*0x44f84a*/
  v3 = 0; /*0x44f84f*/
  v71 = result; /*0x44f853*/
  v68 = 0; /*0x44f857*/
  if ( result > 0 ) /*0x44f85b*/
  {
    while ( 1 ) /*0x44f874*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v1->__pad_0, (unsigned __int8 *)aStructures, v3); /*0x44f874*/
      INIClass::GetString(v1, (unsigned __int8 *)aStructures, StringByIndex, 0, String, 128); /*0x44f88f*/
      v5 = strtok(String, Str); /*0x44f89e*/
      v6 = HouseClass::FindByName(v5); /*0x44f8a8*/
      if ( v6 != -1 ) /*0x44f8b0*/
      {
        v7 = (Object *)*((_DWORD *)stru_A80220.? + v6); /*0x44f8bc*/
        v65 = (int)v7; /*0x44f8c1*/
        if ( v7 ) /*0x44f8c5*/
        {
          if ( !*(_DWORD *)&dword_A8B238 || v7 != dword_A83D4C ) /*0x44f8db*/
          {
            v8 = strtok(0, Str); /*0x44f8e8*/
            IndexByName = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)v8); /*0x44f8fa*/
            if ( IndexByName != -1 ) /*0x44f8fe*/
            {
              v9 = strtok(0, Str); /*0x44f90b*/
              v61 = atoi(v9); /*0x44f919*/
              if ( *(int *)&stru_A8EB00.?[408] < 4 ) /*0x44f92c*/
              {
                v13 = strtok(0, Str); /*0x44f95e*/
                v14 = atoi(v13); /*0x44f964*/
                LOWORD(v66) = v14 % 128; /*0x44f97f*/
                HIWORD(v66) = v14 / 128; /*0x44f989*/
                v12 = v66; /*0x44f98e*/
              }
              else
              {
                v10 = strtok(0, Str); /*0x44f92e*/
                LOWORD(v69) = atoi(v10); /*0x44f940*/
                v11 = strtok(0, Str); /*0x44f945*/
                HIWORD(v69) = atoi(v11); /*0x44f950*/
                v12 = v69; /*0x44f955*/
              }
              v59 = v12; /*0x44f999*/
              v15 = strtok(0, Str); /*0x44f99d*/
              v67 = atoi(v15); /*0x44f9af*/
              v16 = strtok(0, Str); /*0x44f9bf*/
              v58 = 0; /*0x44f9c1*/
              v17 = strtok(0, Str); /*0x44f9c6*/
              if ( v17 ) /*0x44f9d0*/
                v58 = atoi(v17) != 0; /*0x44f9dd*/
              v57 = 0; /*0x44f9e9*/
              v18 = strtok(0, Str); /*0x44f9ee*/
              if ( v18 ) /*0x44f9f8*/
                v57 = atoi(v18) != 0; /*0x44fa05*/
              v55 = 1; /*0x44fa11*/
              v19 = strtok(0, Str); /*0x44fa16*/
              if ( v19 ) /*0x44fa20*/
                v55 = atoi(v19) != 0; /*0x44fa2d*/
              v62 = 0; /*0x44fa39*/
              v20 = strtok(0, Str); /*0x44fa41*/
              if ( v20 ) /*0x44fa4b*/
                v62 = atoi(v20); /*0x44fa56*/
              v70 = 1; /*0x44fa61*/
              v21 = strtok(0, Str); /*0x44fa69*/
              if ( v21 ) /*0x44fa73*/
                v70 = atoi(v21); /*0x44fa7e*/
              v22 = v73; /*0x44fa82*/
              v23 = 3; /*0x44fa86*/
              do /*0x44faab*/
              {
                v24 = strtok(0, Str); /*0x44fa92*/
                if ( v24 ) /*0x44fa9c*/
                  *v22 = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)v24); /*0x44faa5*/
                ++v22; /*0x44faa7*/
                --v23; /*0x44faaa*/
              }
              while ( v23 ); /*0x44faab*/
              v56 = 0; /*0x44fab4*/
              v25 = strtok(0, Str); /*0x44fab9*/
              if ( v25 ) /*0x44fac3*/
                v56 = atoi(v25) != 0; /*0x44fad0*/
              v26 = 0; /*0x44fadc*/
              v27 = strtok(0, Str); /*0x44fade*/
              if ( v27 ) /*0x44fae8*/
                v26 = atoi(v27) != 0; /*0x44faf5*/
              v28 = __2_YAPAXI_Z(0x720u); /*0x44fafd*/
              if ( v28 ) /*0x44fb07*/
              {
                v29 = BuildingClass::Construct(v28, *((_DWORD *)dword_A83C6C + IndexByName), v65); /*0x44fb27*/
                if ( v29 ) /*0x44fb2b*/
                {
                  v30 = (TeamClass *)ObjectTypeClass::FindByName((ObjectTypeClass *)v16); /*0x44fb33*/
                  if ( v30 ) /*0x44fb3a*/
                  {
                    v31 = TeamClass::FindOrCreate(v30); /*0x44fb3e*/
                    if ( v31 ) /*0x44fb45*/
                      ObjectClass::SetReference((ObjectClass *)v29, v31); /*0x44fb4a*/
                  }
                  *(_BYTE *)(v29 + 1756) = v58; /*0x44fb5b*/
                  *(_BYTE *)(v29 + 1738) = v57; /*0x44fb61*/
                  *(_BYTE *)(v29 + 1739) = v56; /*0x44fb70*/
                  *(_BYTE *)(v29 + 1737) = v26; /*0x44fb78*/
                  if ( v61 >= 256 ) /*0x44fb7e*/
                    v61 = 256; /*0x44fb80*/
                  v32 = *(_DWORD *)(v29 + 1312); /*0x44fb88*/
                  LOWORD(v33) = Math::RoundToInt((double)v61 * 0.00390625 * (double)*(int *)(v32 + 160)); /*0x44fb9a*/
                  *(_DWORD *)(v29 + 108) = v33; /*0x44fb9f*/
                  v34 = *(_DWORD *)(v32 + 160); /*0x44fba2*/
                  if ( v33 > v34 - 3 ) /*0x44fbad*/
                    *(_DWORD *)(v29 + 108) = v34; /*0x44fbaf*/
                  v35 = *(_DWORD *)(v29 + 108); /*0x44fbbc*/
                  v74[2] = 0; /*0x44fbbf*/
                  *(_DWORD *)(v29 + 112) = v35; /*0x44fbcf*/
                  v36 = *(_DWORD *)v29; /*0x44fbd5*/
                  v64 = ((__int16)v59 << 8) + 128; /*0x44fbd7*/
                  v74[0] = v64; /*0x44fbdb*/
                  v60 = (SHIWORD(v59) << 8) + 128; /*0x44fbe5*/
                  v74[1] = v60; /*0x44fbe9*/
                  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *, int))(v36 + 216))(v29, v74, v67) ) /*0x44fbf9*/
                  {
                    v37 = *(BuildingLightClass **)(v29 + 1536); /*0x44fc07*/
                    if ( v37 ) /*0x44fc0f*/
                      BuildingLightClass::FindTarget(v37, (_DWORD *)v70); /*0x44fc16*/
                    if ( v55 ) /*0x44fc21*/
                    {
                      if ( !*(_BYTE *)(v29 + 1632) && !*(_DWORD *)(v29 + 1284) ) /*0x44fc35*/
                      {
                        v38 = *(_DWORD *)(v29 + 540); /*0x44fc43*/
                        *(_BYTE *)(v29 + 1632) = 1; /*0x44fc49*/
                        *(_BYTE *)(v29 + 128) = 1; /*0x44fc50*/
                        *(_BYTE *)(v38 + 22392) = 1; /*0x44fc57*/
                        *(_BYTE *)(*(_DWORD *)(v29 + 540) + 22393) = 1; /*0x44fc64*/
                        v39 = *(_DWORD *)(v29 + 540); /*0x44fc6b*/
                        *(_BYTE *)(v39 + 508) = 1; /*0x44fc71*/
                        v40 = *(Trigger **)(v29 + 1556); /*0x44fc78*/
                        *(_BYTE *)(v29 + 1770) = 1; /*0x44fc80*/
                        if ( v40 ) /*0x44fc87*/
                          Trigger::EnableOnce(v40, 0); /*0x44fc8b*/
                        if ( *(_BYTE *)(*(_DWORD *)(v29 + 1312) + 5822) ) /*0x44fc96*/
                          BuildingClass::RepairPlacement((BuildingClass *)v29, 0); /*0x44fca4*/
                        v41 = 0; /*0x44fca9*/
                        v42 = (_BYTE **)(v29 + 1372); /*0x44fcab*/
                        do /*0x44fcda*/
                        {
                          if ( *(_BYTE *)(v41 + *(_DWORD *)(v29 + 1312) + 3980) && *v42 ) /*0x44fcc2*/
                            VtableStub::Method_425270(*v42); /*0x44fcc9*/
                          v41 += 68; /*0x44fcce*/
                          ++v42; /*0x44fcd1*/
                        }
                        while ( v41 < 1428 ); /*0x44fcda*/
                        v43 = *(_DWORD *)(v29 + 1312); /*0x44fcdc*/
                        v44 = *(_DWORD *)(v43 + 3768); /*0x44fce2*/
                        if ( v44 ) /*0x44fcea*/
                        {
                          LOBYTE(v39) = *(_BYTE *)(v43 + 3278); /*0x44fcec*/
                          HouseClass::UpdateProduction(*(_DWORD *)(v29 + 540), v44, v39, 0); /*0x44fcfc*/
                        }
                        if ( (unsigned __int8)House::IsHumanPlayer(*(House **)(v29 + 540)) ) /*0x44fd07*/
                          VoxClass::FindAndPlay((VoxClass *)&stru_818E00.Next, -1); /*0x44fd1a*/
                      }
                    }
                    else
                    {
                      BuildingClass::PowerOff((BuildingClass *)v29); /*0x44fd23*/
                    }
                    v45 = *(_DWORD *)(v29 + 1312); /*0x44fd28*/
                    *(_BYTE *)(v29 + 1053) = 0; /*0x44fd2e*/
                    if ( *(_BYTE *)(v45 + 5458) && !*(_BYTE *)(v29 + 1740) ) /*0x44fd3f*/
                      BuildingClass::Deactivate((BuildingClass *)v29); /*0x44fd4b*/
                    if ( v62 > 0 ) /*0x44fd56*/
                    {
                      v46 = v73; /*0x44fd5a*/
                      v47 = v62; /*0x44fd5e*/
                      do /*0x44fdc3*/
                      {
                        if ( *v46 != -1 ) /*0x44fd66*/
                        {
                          v48 = *((_DWORD *)dword_A83C6C + *v46); /*0x44fd73*/
                          v49 = __2_YAPAXI_Z(0x720u); /*0x44fd76*/
                          if ( v49 ) /*0x44fd80*/
                            v50 = (int *)BuildingClass::Construct(v49, v48, v65); /*0x44fd8a*/
                          else
                            v50 = 0; /*0x44fd91*/
                          v75[0] = v64; /*0x44fd9b*/
                          v75[1] = v60; /*0x44fda8*/
                          v51 = *v50; /*0x44fdac*/
                          v75[2] = 0; /*0x44fdb1*/
                          (*(void (__thiscall **)(int *, _DWORD *, int))(v51 + 216))(v50, v75, v67); /*0x44fdb9*/
                        }
                        ++v46; /*0x44fdbf*/
                        --v47; /*0x44fdc2*/
                      }
                      while ( v47 ); /*0x44fdc3*/
                    }
                    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v29 + 1020))(v29) /*0x44fde1*/
                      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v29 + 1020))(v29)
                      && *(_DWORD *)(v29 + 1408) )
                    {
                      Value = ProgressTimer::GetValue((ProgressTimer *)(v29 + 904), &v76); /*0x44fdf6*/
                      v53 = *(_DWORD *)(v29 + 1408); /*0x44fdfd*/
                      v54 = ((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F; /*0x44fe09*/
                      if ( v53 ) /*0x44fe0e*/
                      {
                        *(_DWORD *)(v53 + 172) = dword_7F4890[v54]; /*0x44fe17*/
                        *(_DWORD *)(v53 + 196) = 0; /*0x44fe1d*/
                      }
                    }
                  }
                  else
                  {
                    (*(void (__thiscall **)(int, int))(*(_DWORD *)v29 + 32))(v29, 1); /*0x44fe2f*/
                  }
                }
              }
            }
          }
        }
      }
      result = v71; /*0x44fe36*/
      v3 = ++v68; /*0x44fe3a*/
      if ( v68 >= v71 ) /*0x44fe41*/
        break; /*0x44fe41*/
      v1 = this; /*0x44f866*/
    }
  }
  return result; /*0x44fe4a*/
}



// ==== 0x0044FE60  ObjectClass::method_44FE60  this=INIClass  sig=csp ====
int __thiscall sub_44FE60(char *this)
{
  int result; // eax
  int i; // esi
  int v4; // ecx

  INIClass::ClearSection((int)this, (int)aStructures, 0); /*0x44fe6c*/
  result = dword_A8EB50; /*0x44fe71*/
  for ( i = 0; i < dword_A8EB50; ++i ) /*0x44fe7a*/
  {
    v4 = *((_DWORD *)dword_A8EB44 + i); /*0x44fe82*/
    if ( !*(_BYTE *)(v4 + 129) && !*(_BYTE *)(*(_DWORD *)(v4 + 1312) + 5823) ) /*0x44fe95*/
      BuildingClass::ReadConstructionData(v4, this); /*0x44fea0*/
    result = dword_A8EB50; /*0x44fea5*/
  }
  return result; /*0x44feaf*/
}



// ==== 0x0044FEC0  BuildingClass::ReadConstructionData  this=BuildingClass  sig=csp ====
char __userpurge BuildingClass::ReadConstructionData@<al>(BuildingClass *this@<ecx>, double a2@<st0>, char *a3)
{
  int v4; // eax
  _DWORD *Value; // eax
  int BarrelVoxel; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int *Upgrades; // ebx
  int v11; // ebp
  char *v12; // eax
  int v14; // [esp-24h] [ebp-D0h]
  _BYTE v15[8]; // [esp+14h] [ebp-98h] BYREF
  int v16; // [esp+1Ch] [ebp-90h] BYREF
  char Buffer[12]; // [esp+20h] [ebp-8Ch] BYREF
  char Source[128]; // [esp+2Ch] [ebp-80h] BYREF

  v4 = (*((int (__userpurge **)@<eax>(void **, double@<st0>))this->? + 4))(&this->?, a2); /*0x44fed3*/
  sprintf(Buffer, "%d", v4); /*0x44fee1*/
  Value = ProgressTimer::GetValue((ProgressTimer *)this->?, &v16); /*0x44ff28*/
  BarrelVoxel = (int)this->Type->?; /*0x44ff79*/
  v7 = (int)&this->?->plainName[4]; /*0x44ff7c*/
  v8 = (*((int (__thiscall **)(BuildingClass *, _BYTE *, _DWORD))this->TechnoClass + 110))( /*0x44ff82*/
         this,
         v15,
         (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1));
  v14 = *(__int16 *)(*((int (__thiscall **)(BuildingClass *, int *, _DWORD))this->TechnoClass + 110))( /*0x44ff9f*/
                      this,
                      &v16,
                      *(__int16 *)(v8 + 2));
  BuildingClass::GetHealthRatio(this); /*0x44ffa2*/
  LOWORD(v9) = Math::RoundToInt(a2 * 256.0 + 0.5); /*0x44ffb3*/
  sprintf(Source, (const char *const)stru_818E00.RandomRate, v7, BarrelVoxel, v9, v14); /*0x44ffc5*/
  Upgrades = this->Upgrades; /*0x44ffcd*/
  v11 = 3; /*0x44ffd3*/
  do /*0x45000d*/
  {
    if ( *Upgrades ) /*0x44ffd8*/
      v12 = (char *)(*Upgrades + 36); /*0x44ffde*/
    else
      v12 = g_INI_Key_None; /*0x44ffe3*/
    sprintf(&Source[strlen(Source)], (const char *const)&stru_818E00.RandomLoopDelay[1], v12); /*0x450001*/
    ++Upgrades; /*0x450009*/
    --v11; /*0x45000c*/
  }
  while ( v11 ); /*0x45000d*/
  sprintf(&Source[strlen(Source)], (const char *const)stru_818E00.RandomLoopDelay, this->__pad_6B8[19] != 0); /*0x450035*/
  sprintf(&Source[strlen(Source)], (const char *const)stru_818E00.RandomLoopDelay, this->__pad_6B8[17] != 0); /*0x450060*/
  return INIClass::SetString(a3, (unsigned __int8 *)aStructures, Buffer, Source); /*0x450085*/
}


