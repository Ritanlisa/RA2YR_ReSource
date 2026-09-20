// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x007404B0  TechnoClass::GetInfantryCursorAction  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetInfantryCursorAction(int this, __int16 *a1, IUnknown *aP2, InfantryClass *aP3)
{
  _DWORD *v7; // edi
  int v8; // ebp
  int v9; // ebp
  int v10; // eax
  int v11; // edx
  int *v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  void *v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  _DWORD v22[2]; // [esp+14h] [ebp-18h] BYREF
  int GroundHeight; // [esp+1Ch] [ebp-10h]
  _DWORD v24[3]; // [esp+20h] [ebp-Ch] BYREF
  int a1a; // [esp+30h] [ebp+4h]

  if ( !(unsigned __int8)House::IsHumanPlayer(*(#375 **)(this + 540)) ) /*0x7404bf*/
    return 0; /*0x7404d1*/
  v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a1); /*0x7404e7*/
  v8 = FootClass::HandleCursorWithCheck((int *)this, a1, aP2, aP3); /*0x7404fb*/
  a1a = v8; /*0x740501*/
  if ( TechnoClass::GetValue((_DWORD *)this, (ObjectClass *)0xFFFFFFFF) < 0 /*0x740520*/
    && (unsigned __int8)House::IsHumanPlayer(*(#375 **)(this + 540))
    && v8 == 5 )
  {
    a1a = 59; /*0x740522*/
  }
  v9 = -1; /*0x74052e*/
  if ( (_BYTE)aP2 ) /*0x740533*/
  {
    if ( (MEMORY[0xA8B230]->nextScenario[0] & 0x1000) != 0 ) /*0x740540*/
    {
      v10 = v7[10]; /*0x740542*/
      if ( v10 ) /*0x740547*/
      {
        v11 = *(_DWORD *)(v10 + 16); /*0x740549*/
        if ( v11 > 0 ) /*0x74054e*/
        {
          v12 = *(int **)(v10 + 4); /*0x740550*/
          do /*0x74056c*/
          {
            v13 = *v12; /*0x740558*/
            if ( *(_BYTE *)(*v12 + 116) && *(_DWORD *)(v13 + 48) == 20 ) /*0x740563*/
              v9 = *(_DWORD *)(v13 + 36); /*0x740565*/
            ++v12; /*0x740568*/
            --v11; /*0x74056b*/
          }
          while ( v11 ); /*0x74056c*/
        }
      }
    }
  }
  v14 = (*a1 << 8) + 128; /*0x740585*/
  v22[1] = (a1[1] << 8) + 128; /*0x74058a*/
  v22[0] = v14; /*0x740596*/
  GroundHeight = 0; /*0x74059a*/
  GroundHeight = Cell::GetGroundHeight(v22); /*0x7405a3*/
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v22) + 80) & 0x100) != 0 ) /*0x7405bf*/
    GroundHeight += *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[65816]; /*0x7405cd*/
  if ( Cell::IsPassable(v22) ) /*0x7405db*/
  {
    if ( a1a != 1 ) /*0x7406c9*/
      goto LABEL_46; /*0x7406c9*/
  }
  else
  {
    if ( a1a != 1 ) /*0x7405ef*/
      goto LABEL_46; /*0x7405ef*/
    v15 = v7[59]; /*0x7405ff*/
    if ( (v15 == 5 || v9 != -1 && *(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * v9] + 681) && (_BYTE)aP2) /*0x740629*/
      && *(_BYTE *)(*(_DWORD *)(this + 1732) + 3598) )
    {
      return 6; /*0x74063e*/
    }
    if ( (v15 == 11 || v9 == 126 && *((_BYTE *)v7 + 286) >= 0x30u && (_BYTE)aP2) /*0x740666*/
      && *(_BYTE *)(*(_DWORD *)(this + 1732) + 3599) )
    {
      return 6; /*0x74067b*/
    }
    if ( v15 == 5 || v9 != -1 && *(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * v9] + 681) && (_BYTE)aP2 ) /*0x74069b*/
    {
      v16 = *(_DWORD *)(this + 1732); /*0x74069d*/
      if ( *(_BYTE *)(v16 + 1517) ) /*0x7406a3*/
      {
        if ( *(_BYTE *)(v16 + 1516) ) /*0x7406ad*/
          return 6; /*0x7406c3*/
      }
    }
  }
  v17 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a1); /*0x7406d5*/
  if ( InfantryClass::IsInBounds((int)v17) ) /*0x7406dc*/
  {
    CellCoord::To_CellObj(&MEMORY[0x87F7E8], a1); /*0x7406ec*/
    return 36 - (globalHelper_084F10(this) != 0); /*0x740706*/
  }
  if ( *(_BYTE *)(this + 1760) || *(_BYTE *)(this + 1761) || *(_BYTE *)(this + 1762) ) /*0x74071d*/
    a1a = 0; /*0x740727*/
LABEL_46:
  if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)(this + 540)) ) /*0x740731*/
  {
    v18 = *(_DWORD *)(this + 1732); /*0x74073e*/
    if ( *(_BYTE *)(v18 + 3603) ) /*0x740744*/
    {
      if ( *(_BYTE *)(this + 1760) ) /*0x740752*/
      {
        if ( a1a == 1 ) /*0x740767*/
          return 2; /*0x74077c*/
        if ( a1a != 5 ) /*0x740782*/
          return a1a; /*0x740782*/
        if ( !*(_BYTE *)(v18 + 1708) ) /*0x740784*/
          return 2; /*0x740784*/
        v19 = (*(int (__thiscall **)(int, _DWORD))(this->spawnManager)(this, 0); /*0x740793*/
        v20 = *a1 << 8; /*0x7407a3*/
        v24[1] = (a1[1] << 8) + 128; /*0x7407b3*/
        v21 = *(_DWORD *)this; /*0x7407b7*/
        v24[0] = v20 + 128; /*0x7407bd*/
        v24[2] = 0; /*0x7407c4*/
        if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD *, int))(v21 + 356))(this, v24, v19) ) /*0x7407c8*/
          return 2; /*0x7407e5*/
        goto LABEL_56; /*0x7407d0*/
      }
    }
  }
  if ( a1a == 5 ) /*0x7407ed*/
  {
LABEL_56:
    if ( !(*(unsigned __int8 (__thiscall **)(int))(this->ammo)(this) ) /*0x7407f3*/
      return 0; /*0x7407fd*/
  }
  return a1a; /*0x7404c8*/
}


// ==== 0x00740810  TechnoClass::ProcessAIDecision  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_740810(int this)
{
  _DWORD *v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // edi
  int v7; // eax
  int v8; // edx
  _DWORD *v9; // ecx
  _DWORD *v10; // ebx
  unsigned int v11; // edi
  _DWORD *NeighbourContent; // eax
  _DWORD *v13; // eax
  int v15; // ecx
  char *MissionControl; // eax
  int v17; // esi
  int v18; // edx

  v2 = *(_DWORD **)(this + 728); /*0x740815*/
  if ( v2 /*0x74083b*/
    && *(_DWORD *)(this + 192) + *(_DWORD *)MEMORY[0x8871E0][1].? < (int)MEMORY[0xA8ED84]
    && SlaveManagerClass::ShouldWakeUpNow(v2) )
  {
    BuildingClass::InitBuildLimit(*(int ***)(this + 728)); /*0x74084a*/
LABEL_34:
    MissionControl = MissionClass::GetMissionControl((_DWORD *)this); /*0x740a1f*/
    v17 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x740a34*/
    return v17 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x740a4f*/
  }
  v3 = *(_DWORD *)(this + 1732); /*0x740854*/
  if ( *(_BYTE *)(v3 + 3598) || *(_BYTE *)(v3 + 3599) ) /*0x740864*/
  {
    if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) ) /*0x740874*/
    {
      if ( *(_BYTE *)(*(_DWORD *)(this + 1732) + 3284) ) /*0x740949*/
      {
        v10 = (_DWORD *)(*(int (__thiscall **)(int))(this->q1BC)(this); /*0x740961*/
        v11 = 0; /*0x740963*/
        while ( 1 ) /*0x740968*/
        {
          NeighbourContent = Cell::GetNeighbourContent(v10, v11); /*0x740968*/
          v13 = Cell::IsBridge(NeighbourContent); /*0x74096f*/
          if ( v13 ) /*0x740976*/
          {
            if ( *(_BYTE *)(v13[328] + 5819) && v13[135] == *(_DWORD *)(this + 540) ) /*0x740996*/
              goto LABEL_30; /*0x740996*/
          }
          if ( (int)++v11 >= 8 ) /*0x74099c*/
          {
            if ( ((double (__thiscall *)(int))*(_DWORD *)(this->q2B4)(this) != 1.0 ) /*0x7409b3*/
              break; /*0x7409b3*/
            if ( !*(_DWORD *)(this + 1652) ) /*0x7409b9*/
              WinAPI::Wrapper(-2147467261); /*0x7409c8*/
            if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) ) /*0x7409d6*/
              break; /*0x7409db*/
            goto LABEL_30; /*0x7409db*/
          }
        }
      }
    }
    else
    {
      v4 = *(_DWORD *)(this + 1732); /*0x740881*/
      v5 = 0; /*0x740887*/
      if ( *(int *)(v4 + 1016) > 0 ) /*0x740891*/
      {
        while ( DynamicVector::GetOrGrow( /*0x7408b6*/
                  (_DWORD *)(*(_DWORD *)(this + 540) + 21760),
                  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 1004) + 4 * v5) + 3576)) <= 0 )
        {
          v4 = *(_DWORD *)(this + 1732); /*0x7408b8*/
          if ( ++v5 >= *(_DWORD *)(v4 + 1016) ) /*0x7408c5*/
            goto LABEL_11; /*0x7408c5*/
        }
        if ( !*(_BYTE *)(*(_DWORD *)(this + 1732) + 3598) || !*(_BYTE *)(*(_DWORD *)(this + 540) + 578) ) /*0x740922*/
        {
LABEL_30:
          (*(void (__thiscall **)(int, int, _DWORD))(this->q1E8)(this, 10, 0); /*0x7409e1*/
          return 1; /*0x7409f7*/
        }
      }
    }
  }
LABEL_11:
  v6 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1028); /*0x7408c7*/
  if ( v6 ) /*0x7408d5*/
  {
    v7 = 0; /*0x7408e1*/
    v8 = MEMORY[0x8871E0]->CanDetonateTimeBomb[1]; /*0x7408e3*/
    if ( v8 > 0 ) /*0x7408eb*/
    {
      v9 = (_DWORD *)MEMORY[0x8871E0]->IvanWarhead[2]; /*0x7408f1*/
      while ( *v9 != v6 ) /*0x7408f9*/
      {
        ++v7; /*0x7408ff*/
        ++v9; /*0x740900*/
        if ( v7 >= v8 ) /*0x740905*/
          goto LABEL_35; /*0x740905*/
      }
      v15 = *(_DWORD *)(this + 540); /*0x7409f8*/
      if ( *(_BYTE *)(v15 + 499) ) /*0x7409fe*/
      {
        if ( !(unsigned __int8)House::IsCurrentPlayer((#375 *)v15) ) /*0x740a08*/
        {
          (*(void (__thiscall **)(int, int, _DWORD))(this->q1E8)(this, 16, 0); /*0x740a19*/
          goto LABEL_34; /*0x740a19*/
        }
      }
    }
  }
LABEL_35:
  if ( *(_BYTE *)(*(_DWORD *)(this + 1732) + 3599) ) /*0x740a56*/
  {
    if ( *(_BYTE *)(this + 1720) ) /*0x740a60*/
    {
      v18 = *(_DWORD *)this; /*0x740a6a*/
      *(_BYTE *)(this + 1720) = 0; /*0x740a72*/
      (*(void (__thiscall **)(int, int, _DWORD))(v18 + 488))(this, 10, 0); /*0x740a79*/
    }
  }
  return FootClass::FindMovePosition(this); /*0x74093a*/
}


// ==== 0x00740A90  TechnoClass::CheckRepairNeeded  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_740A90(int this)
{
  char v2; // al

  v2 = *(_BYTE *)(this + 1760); /*0x740a93*/
  *(_BYTE *)(this + 1746) = 0; /*0x740a99*/
  if ( v2 || *(_BYTE *)(this + 1761) || *(_BYTE *)(this + 1762) ) /*0x740aae*/
  {
    (*(void (__thiscall **)(int, int, _DWORD))(this->q1E8)(this, 5, 0); /*0x740af7*/
    return 1; /*0x740afd*/
  }
  else
  {
    if ( !Flag::CheckNone((_BYTE *)(this + 848)) ) /*0x740ac1*/
      Timer::StartDouble((_BYTE *)(this + 848), *(double *)(*(_DWORD *)(this + 1732) + 968)); /*0x740ae0*/
    return FootClass::Destru_vt139((_DWORD *)this); /*0x740ae7*/
  }
}


// ==== 0x00740B10  TechnoClass::updateTargeting  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_740B10(int this)
{
  _BYTE *v2; // edi

  v2 = (_BYTE *)(this + 848); /*0x740b14*/
  *(_BYTE *)(this + 1746) = 0; /*0x740b1a*/
  if ( !Flag::CheckNone((_BYTE *)(this + 848)) ) /*0x740b23*/
    Timer::StartDouble(v2, *(double *)(*(_DWORD *)(this + 1732) + 968)); /*0x740b42*/
  return UnitClass::ApproachEvaluate((_DWORD *)this); /*0x740b4e*/
}


// ==== 0x00740B60  TechnoClass::FindBestMovementDirection  this=TechnoClass  sig=csp ====
unsigned int __thiscall TechnoClass::sub_740B60(_WORD *this, int *a2, int **a3)
{
  int *v3; // ebx
  int v4; // ebp
  int v6; // eax
  int *v7; // eax
  unsigned int v8; // eax
  _WORD *v9; // eax
  int v10; // ecx
  int v11; // esi
  void *v12; // eax
  int **v13; // eax
  int v14; // ecx
  _DWORD *v15; // esi
  char v16; // al
  int ClosestObjectCell; // eax
  __int64 v18; // rax
  int v19; // ecx
  int **v20; // esi
  unsigned int result; // eax
  _WORD *v22; // eax
  int v23; // ecx
  __int16 v24; // bx
  int LandHeight; // [esp+0h] [ebp-54h]
  int v26; // [esp+1Ch] [ebp-38h]
  int *v27; // [esp+20h] [ebp-34h]
  int v28; // [esp+24h] [ebp-30h]
  int *v29; // [esp+28h] [ebp-2Ch] BYREF
  unsigned int v30; // [esp+2Ch] [ebp-28h]
  int v31; // [esp+30h] [ebp-24h]
  char v32[4]; // [esp+34h] [ebp-20h] BYREF
  int v33; // [esp+38h] [ebp-1Ch] BYREF
  _DWORD v34[3]; // [esp+3Ch] [ebp-18h] BYREF
  int v35[3]; // [esp+48h] [ebp-Ch] BYREF

  v3 = a2; /*0x740b64*/
  v4 = 0; /*0x740b69*/
  if ( a2 ) /*0x740b71*/
  {
    v6 = (*(int (__thiscall **)(int *))(*a2 + 72))(a2); /*0x740b7c*/
    v7 = (int *)(*(int (__thiscall **)(_WORD *, int *, int))(this->q048)(this, &v33, v6); /*0x740b89*/
    v8 = *(_DWORD *)Cell::GetHeight(&a2, v7, v35); /*0x740b96*/
  }
  else
  {
    LOWORD(a2) = *(_WORD *)ProgressTimer::GetValue(this + 452, &a2) + 0x7FFF; /*0x740bb2*/
    v8 = (unsigned int)a2; /*0x740bb7*/
  }
  v28 = 0; /*0x740bbf*/
  v26 = -1; /*0x740bca*/
  v31 = (char)(((v8 >> 7) + 1) >> 1); /*0x740bd5*/
  do /*0x740d53*/
  {
    v9 = (_WORD *)(*(int (__thiscall **)(_WORD *, char *))(*(_DWORD *)this + 440))(this, v32); /*0x740be2*/
    v10 = v4 & 7; /*0x740bed*/
    LOWORD(v27) = LOWORD(MEMORY[0x89F688][v10]) + *v9; /*0x740c03*/
    HIWORD(v27) = v9[1] + HIWORD(MEMORY[0x89F688][v10]); /*0x740c0e*/
    a2 = v27; /*0x740c17*/
    if ( v3 ) /*0x740c1b*/
    {
      v11 = *v3; /*0x740c1d*/
      LandHeight = ObjectClass::GetLandHeight(this); /*0x740c2a*/
      v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x740c36*/
      if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v11 + 428))(v3, v12, v4, LandHeight, 0, 1) /*0x740c5f*/
        || (v13 = (int **)(*(int (__thiscall **)(int *, int *))(*v3 + 440))(v3, &v33), *v13 == a2) )
      {
        v14 = 128; /*0x740c74*/
        goto LABEL_16; /*0x740c79*/
      }
    }
    else
    {
      v29 = v27; /*0x740c82*/
      v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v29); /*0x740c91*/
      if ( MEMORY[0x89EA40][9 * v15[59]] != 0.0 ) /*0x740cae*/
      {
        v16 = *((_BYTE *)v15 + 292); /*0x740cb0*/
        if ( (v16 & 0xE0) == 0 && (v16 & 0x1F) != 0x1F ) /*0x740cbe*/
        {
          v34[0] = 0; /*0x740ccb*/
          v34[1] = 0; /*0x740ccf*/
          if ( !Object::FindClosestObjectCell(v15, v34, 0, 0) /*0x740cfb*/
            || (v35[0] = 0,
                v35[1] = 0,
                ClosestObjectCell = Object::FindClosestObjectCell(v15, v35, 0, 0),
                Object::IsAlliedWithObjectHouse(*((_DWORD **)this + 135), ClosestObjectCell)) )
          {
            v14 = 128; /*0x740d04*/
            goto LABEL_16; /*0x740d09*/
          }
        }
      }
    }
    v14 = -128; /*0x740d0b*/
LABEL_16:
    LOWORD(v30) = (_WORD)v4 << 13; /*0x740d10*/
    v18 = (char)(((v30 >> 7) + 1) >> 1) - v31; /*0x740d2b*/
    v19 = v14 - ((HIDWORD(v18) ^ v18) - HIDWORD(v18)); /*0x740d30*/
    if ( v4 == 4 ) /*0x740d35*/
      v19 -= 100; /*0x740d37*/
    if ( v26 == -1 || v19 > v26 ) /*0x740d45*/
    {
      v26 = v19; /*0x740d47*/
      v28 = v4; /*0x740d4b*/
    }
    ++v4; /*0x740d4f*/
  }
  while ( v4 < 8 ); /*0x740d53*/
  v20 = a3; /*0x740d59*/
  result = 4; /*0x740d63*/
  *a3 = (int *)dword_B1CFB8; /*0x740d68*/
  if ( v26 > 0 ) /*0x740d70*/
  {
    v22 = (_WORD *)(*(int (__thiscall **)(_WORD *, int ***))(*(_DWORD *)this + 440))(this, &a3); /*0x740d7b*/
    v23 = v28 & 7; /*0x740d87*/
    v24 = MEMORY[0x89F688][v23]; /*0x740d8a*/
    LOWORD(v23) = v22[1] + HIWORD(MEMORY[0x89F688][v23]); /*0x740da0*/
    LOWORD(a2) = *v22 + v24; /*0x740da4*/
    HIWORD(a2) = v23; /*0x740da9*/
    *v20 = a2; /*0x740db2*/
    result = MEMORY[0x8458D0][v28]; /*0x740db4*/
  }
  if ( *(_BYTE *)(this->q6C4 + 3220) ) /*0x740dc1*/
    return ((unsigned int)((*ProgressTimer::GetValue(this + 452, &a2) >> 12) + 1) >> 1) & 7; /*0x740de3*/
  return result; /*0x740de6*/
}


// ==== 0x00740DF0  HouseClass::SetPrimaryFactory  this=VOID_PTR  sig=csp ====
char __thiscall sub_740DF0(_DWORD *this, int a2)
{
  if ( a2 == -1 || *(this + 435) != -1 ) /*0x740e00*/
    return 0; /*0x740e17*/
  *(this + 435) = a2; /*0x740e02*/
  (*(void (__thiscall **)(_DWORD *, int))(*this + 292))(this, 2); /*0x740e0c*/
  return 1; /*0x740e14*/
}


// ==== 0x00740E20  HouseClass::ClearPrimaryFactory  this=int  sig=csp ====
char __thiscall sub_740E20(_DWORD *this)
{
  if ( *(this + 435) == -1 ) /*0x740e2b*/
    return 0; /*0x740e40*/
  *(this + 435) = -1; /*0x740e2d*/
  (*(void (__thiscall **)(_DWORD *, int))(*this + 292))(this, 2); /*0x740e37*/
  return 1; /*0x740e3f*/
}


// ==== 0x00740E50  TechnoClass::GetAmmoCount_0  this=TechnoClass  sig=csp ====
// attributes: thunk
int __thiscall TechnoClass::GetAmmoCount_0(void *this)
{
  return TechnoClass::GetAmmoCount(this);
}


// ==== 0x00740EE0  TechnoClass::GetCrew_0  this=TechnoClass  sig=ida-proto ====
// attributes: thunk
int __thiscall TechnoClass::GetCrew_0(_DWORD *this)
{
  return TechnoClass::GetCrew(this);
}


// ==== 0x00740EF0  TechnoClass::EnterRepairBuilding  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_740EF0(_BYTE *this)
{
  int v2; // eax
  int v3; // edx
  char *MissionControl; // eax

  v2 = (*(int (__thiscall **)(_BYTE *, int *, _DWORD, _DWORD))(*(_DWORD *)this + 1320))( /*0x740f08*/
         this,
         &MEMORY[0x8871E0]->AISafeDistance[2],
         0,
         0);
  v3 = *(_DWORD *)this; /*0x740f0e*/
  this->q6D2 = 0; /*0x740f10*/
  if ( !v2 ) /*0x740f19*/
  {
    if ( (*(int (__thiscall **)(_BYTE *, int *, _DWORD, int))(v3 + 1320))( /*0x740f2c*/
           this,
           &MEMORY[0x8871E0]->AISafeDistance[2],
           0,
           1) )
    {
      (*(void (__thiscall **)(_BYTE *, _DWORD, int))(*(_DWORD *)this + 1156))(this, 0, 1); /*0x740f3e*/
    }
    goto LABEL_4; /*0x740f3e*/
  }
  if ( (*(int (__thiscall **)(_BYTE *, int, int))(v3 + 632))(this, 2, v2) != 1 ) /*0x740f69*/
  {
LABEL_4:
    MissionControl = MissionClass::GetMissionControl(this); /*0x740f44*/
    return Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x740f5a*/
  }
  (*(void (__thiscall **)(_BYTE *, int, _DWORD))(this->q1E8)(this, 7, 0); /*0x740f73*/
  return 1; /*0x740f59*/
}


// ==== 0x00740F80  TechnoClass::GetDeployProgressValue  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::sub_740F80(int this, _DWORD *a2)
{
  int v2; // ecx
  int v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x740f80*/
  if ( *(_BYTE *)(*(_DWORD *)(this + 1732) + 3233) ) /*0x740f87*/
    v2 = *ProgressTimer::GetValue((_WORD *)(this + 928), &v4); /*0x740fa1*/
  else
    v2 = *TechnoClass::Vt170((void *)this, &v4); /*0x740fb7*/
  *a2 = v2; /*0x740fa7*/
  return a2; /*0x740faa*/
}


// ==== 0x00740FD0  TechnoClass::CheckUnitFireConstraints  this=TechnoClass  sig=csp ====
int __userpurge TechnoClass::CheckUnitFireConstraints@<eax>(
        int a1@<ecx>,
        TechnoClass *a2@<edx>,
        ObjectClass *aP2,
        IUnknown aP1)
{
  int result; // eax
  CaptureManagerClass *v7; // ecx
  TechnoClass *v8; // edi
  void *eax10; // eax
  char v9; // bl
  int v10; // eax
  int v11; // ebx
  TechnoClass *v12; // eax
  TechnoClass *v14; // edi
  int eax23; // eax
  _BYTE *v15; // eax
  int *Value; // eax
  int v17; // edi
  int v18; // ebx
  __int16 v19; // cx
  _DWORD v20[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( *(int *)(a1 + 1752) >= 0 ) /*0x740fe1*/
    return 6; /*0x740fef*/
  v7 = *(CaptureManagerClass **)(a1 + 720); /*0x740ff2*/
  if ( v7 && TechnoClass::CountPassengers(v7) ) /*0x740ffc*/
    return 10; /*0x741011*/
  if ( *(_DWORD *)(a1 + 680) ) /*0x741014*/
    return 5; /*0x74102a*/
  v8 = (TechnoClass *)aP1.field_0; /*0x741031*/
  result = TriggerTypeClass::ReadINI((_DWORD *)a1, a2, (TechnoClass *)aP2, aP1.field_0, (TechnoClass *)aP1.field_4); /*0x74103e*/
  aP1.field_4 = result; /*0x741045*/
  if ( !result || result == 2 ) /*0x74104e*/
  {
    v20[0] = *(_DWORD *)(a1 + 156); /*0x74105c*/
    v20[1] = *(_DWORD *)(a1 + 160); /*0x741068*/
    v20[2] = *(_DWORD *)(a1 + 164); /*0x74106f*/
    eax10 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v20); /*0x741078*/
    v9 = BuildingClass::CheckC4Active((int)eax10); /*0x741084*/
    if ( *(_BYTE *)(*(_DWORD *)(a1 + 1732) + 3602) /*0x7410a6*/
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 1252))(a1)
      && !v9 )
    {
      return 11; /*0x7410b4*/
    }
    result = aP1.field_4; /*0x7410b7*/
  }
  if ( !result )
  {
    if ( !*(_BYTE *)(a1 + 1048)
      || (v10 = Array::Get((_DWORD *)a1, 0),
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 44))(v10),
          result != 6) )
    {
      v11 = *(_DWORD *)(*(int (__thiscall **)(int, TechnoClass *))(*(_DWORD *)a1 + 1016))(a1, v8); /*0x7410f7*/
      if ( TechnoClass::GetValue((_DWORD *)a1, (ObjectClass *)0xFFFFFFFF) < 0 ) /*0x741104*/
      {
        v12 = (TechnoClass *)AbstractClass::IsTechno(aP2); /*0x741108*/
        v14 = v12; /*0x74110d*/
        if ( !v12 /*0x741138*/
          || !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v12->__pad_0 + 128))(v12)
          || BuildingClass::GetHealthRatio((int *)v14->__pad_0) >= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224]
                                                                             + 5880) )
        {
          return 5; /*0x741146*/
        }
      }
      eax23 = *(_DWORD *)(a1 + 1732); /*0x741149*/
      if ( !*(_BYTE *)(eax23 + 1710) && *(_DWORD *)(a1 + 1444) ) /*0x741159*/
        return 7; /*0x74116f*/
      if ( !*(_BYTE *)(v11 + 321) ) /*0x741172*/
      {
        if ( *(_BYTE *)(eax23 + 3434) ) /*0x74117c*/
        {
          if ( !*(_DWORD *)(a1 + 1652) ) /*0x7411a3*/
            WinAPI::Wrapper(-2147467261); /*0x7411b2*/
          if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 128))(*(_DWORD *)(a1 + 1652)) ) /*0x7411c0*/
            return 7; /*0x7411d6*/
        }
        else if ( *(_DWORD *)(a1 + 1444) ) /*0x741186*/
        {
          return 7; /*0x74119c*/
        }
      }
      if ( (*(_BYTE *)(v11 + 298) || *(_BYTE *)(v11 + 297)) && *(_DWORD *)(a1 + 1444) )
      {
        return 7; /*0x7411fa*/
      }
      else if ( *(_DWORD *)(a1 + 628) && *(_DWORD *)(a1 + 1444) )
      {
        return 7; /*0x74121d*/
      }
      else if ( *(_BYTE *)(a1 + 1677) || !*(_BYTE *)(a1 + 1711) || *(_DWORD *)(*(_DWORD *)(v11 + 160) + 732) )
      {
        if ( *(_BYTE *)(v11 + 299)
          || (v15 = *(_BYTE **)(a1 + 1732), v15[3609])
          || v15[3608]
          || (!v15[3233]
            ? (Value = ProgressTimer::GetValue((_WORD *)(a1 + 904), &aP1))
            : (Value = ProgressTimer::GetValue((_WORD *)(a1 + 928), &aP1)),
              v17 = *Value,
              v18 = *(_DWORD *)(*(_DWORD *)(v11 + 160) + 732) != 0 ? 16 : 8,
              LOWORD(v17) = v17 - *(_WORD *)ObjectClass::CalcTargetFacing((void *)a1, &aP1, aP2),
              LOBYTE(v19) = 0,
              HIBYTE(v19) = v18,
              abs16(v19) >= (int)abs16(v17)) )
        {
          if ( !*(_DWORD *)(a1 + 1652) ) /*0x741300*/
            WinAPI::Wrapper(-2147467261); /*0x74130f*/
          result = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 140))(*(_DWORD *)(a1 + 1652)); /*0x74131d*/
          if ( !result ) /*0x741325*/
            return aP1.field_4; /*0x741327*/
        }
        else
        {
          return 2; /*0x7412f4*/
        }
      }
      else
      {
        return 4; /*0x741250*/
      }
    }
  }
  return result; /*0x740fe3*/
}


// ==== 0x00741340  TechnoClass::FireWeaponBurst  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::FireWeaponBurst(#377 *this, int a2, int a3)
{
  int v5; // ecx
  bool v7; // bl
  int v8; // edx
  int v9; // edx
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  char v13; // al
  _DWORD *v14; // esi
  int v15; // ecx
  int v16; // [esp+18h] [ebp-8h]
  int v17; // [esp+28h] [ebp+8h]

  v5 = *(_DWORD *)(*(int (__thiscall **)(#377 *, int))(*(_DWORD *)this + 1016))(this, a3); /*0x74135c*/
  v17 = v5; /*0x741360*/
  if ( !v5 ) /*0x741364*/
    return 0; /*0x74136d*/
  v7 = 0; /*0x741371*/
  if ( !a3 ) /*0x741376*/
  {
    v8 = this->q3B8 % *(_DWORD *)(v5 + 156); /*0x74137f*/
    if ( v8 >= 2 ) /*0x741388*/
      v9 = -1; /*0x741399*/
    else
      v9 = *(_DWORD *)(this->q6C4 + 4 * v8 + 3648); /*0x741390*/
    v7 = this->q6C0 != -1 && v9 != -1; /*0x7413ae*/
  }
  if ( (*(int (__thiscall **)(#377 *, int, int, int))(*(_DWORD *)this + 960))(this, a2, a3, 1) ) /*0x7413bc*/
    return 0; /*0x74147b*/
  v10 = TechnoClass::FireWeapon(this); /*0x7413d3*/
  if ( v10 ) /*0x7413d7*/
  {
    v11 = this->q6C4; /*0x7413dd*/
    v12 = *(_DWORD *)(v11 + 1668); /*0x7413e3*/
    if ( v12 > 0 && this->pitchAngle < v12 && !*(_BYTE *)(v11 + 3364) ) /*0x7413f5*/
      TechnoClass::CalcAnimDelay(this); /*0x741401*/
    if ( !v7 ) /*0x741408*/
    {
      v13 = *(_BYTE *)(this->q6C4 + 3677); /*0x741410*/
      if ( v13 > 0 ) /*0x741418*/
        this->q6C0 = 2 * v13 - 1; /*0x741421*/
    }
    if ( *(_BYTE *)(*(_DWORD *)(v10 + 172) + 748) ) /*0x74142d*/
      BulletClass::InitScalable((_DWORD **)v10); /*0x741439*/
    if ( *(_BYTE *)(this->q6C4 + 3378) ) /*0x741444*/
    {
      v14 = (_DWORD *)((char *)this + 492); /*0x741457*/
      v15 = *(_DWORD *)(v17 + 316); /*0x74145e*/
      *v14 = MEMORY[0xA8ED84]; /*0x741465*/
      v14[1] = v16; /*0x74146b*/
      v14[2] = v15; /*0x741471*/
      return v10; /*0x741478*/
    }
  }
  return v10; /*0x741366*/
}


// ==== 0x00741490  TechnoClass::checkTargetValidity  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_741490(_DWORD *this)
{
  return this->q6C4; /*0x741496*/
}


// ==== 0x007414A0  TechnoClass::GetAverageDamageScore  this=TechnoClass  sig=csp ====
double __thiscall TechnoClass::sub_7414A0(int this)
{
  int v1; // eax

  v1 = *(_DWORD *)(this + 1732); /*0x7414a3*/
  if ( *(_BYTE *)(v1 + 3598) || *(_BYTE *)(v1 + 3599) ) /*0x7414b3*/
    return Float4::Sum((float *)(this + 828)) / (double)*(int *)(*(_DWORD *)(this + 1732) + 2048); /*0x7414d7*/
  else
    return 0.0; /*0x7414bd*/
}


// ==== 0x007414E0  UnitClass::ApproachTarget_DisallowMoving  this=int  sig=csp ====
void *__thiscall UnitClass::ApproachTarget_DisallowMoving(_DWORD *this, char a2)
{
  int v3; // eax
  _BYTE *v4; // edi
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _BYTE *v10; // eax

  if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)*(this + 135))
    || (v3 = *(this + 173)) == 0
    || *(this + 361)
    || (v4 = (*(_BYTE *)(v3 + 20) & 1) != 0 ? (_BYTE *)v3 : 0, !*(_BYTE *)(*(this + 433) + 3368))
    && !TechnoTypeClass::HasVoiceResponse((float *)this, 17)
    || ObjectClass::DistanceTo(this, *(this + 173)) >= *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5928)
    || !v4
    || !ObjectClass::IsCrushable(v4, (_DWORD **)this)
    || !*(_BYTE *)(*(this + 433) + 3373) && (unsigned __int8)House::IsCurrentPlayer((#375 *)*(this + 135)) )
  {
    if ( *(_BYTE *)(*(this + 433) + 3434) ) /*0x74159f*/
    {
      v5 = *this; /*0x7415af*/
      v6 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 740))(this, *(this + 173)); /*0x7415b4*/
      v7 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(v5 + 1016))(this, v6); /*0x7415c3*/
      if ( v7 ) /*0x7415c7*/
      {
        v8 = *(_DWORD *)(v7 + 160); /*0x7415c9*/
        if ( v8 ) /*0x7415d1*/
        {
          if ( *(_BYTE *)(v8 + 704) ) /*0x7415d3*/
          {
            if ( !a2 ) /*0x7415e3*/
              (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, *(this + 173), 1); /*0x7415f2*/
            return (void *)*(this + 173); /*0x741600*/
          }
        }
      }
    }
    if ( !*(_BYTE *)(*(this + 433) + 3369) ) /*0x741609*/
      return FootClass::CalculateApproachPath(this, 0); /*0x741609*/
    v10 = (_BYTE *)*(this + 173); /*0x741613*/
    if ( !v10 || *(_BYTE *)(*(this + 135) + 492) && *((_BYTE *)this + 1292) ) /*0x74162d*/
      return FootClass::CalculateApproachPath(this, 0); /*0x74162d*/
    if ( (v10[20] & 2) == 0 || !ObjectClass::IsCrushable((v10[20] & 2) != 0 ? v10 : 0, (_DWORD **)this) )
      return FootClass::CalculateApproachPath(this, 0); /*0x741689*/
  }
  if ( !a2 ) /*0x741665*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, *(this + 173), 1); /*0x741674*/
  return (void *)*(this + 173); /*0x7415fe*/
}


// ==== 0x007416A0  TechnoClass::ProcessSpecialUnitDeployCrush  this=TechnoClass  sig=csp ====
void __userpurge TechnoClass::ProcessSpecialUnitDeployCrush(
        AbstractClass *a1@<ecx>,
        AbstractClass *a2@<ebp>,
        __int16 *a3,
        char a4)
{
  IUnknown *v5; // esi
  char v6; // bl
  _DWORD *v7; // eax
  IUnknown *v8; // esi
  TechnoClass *v9; // eax
  int v10; // eax
  IUnknown *v11; // ebp
  IUnknown *v12; // ebp
  int v13; // edx
  int v14; // eax
  int v16; // [esp+Ch] [ebp-1Ch] BYREF
  int v17; // [esp+10h] [ebp-18h] BYREF
  int v18[2]; // [esp+14h] [ebp-14h] BYREF
  _DWORD v19[3]; // [esp+1Ch] [ebp-Ch] BYREF
  int v20; // [esp+2Ch] [ebp+4h]
  char v21; // [esp+30h] [ebp+8h]

  v5 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], a3); /*0x7416b7*/
  v6 = 0; /*0x7416b9*/
  if ( (v5->field_140 & 0x100) != 0 ) /*0x7416c4*/
  {
    if ( LOBYTE(a1[3].NeedsSaveOrLink) /*0x74172f*/
      || (v7 = (_DWORD *)(*(int (__thiscall **)(AbstractClass *, int *))(*(_DWORD *)a1->__pad_0 + 72))(a1, &v17),
          LOWORD(v20) = *v7 / 256,
          HIWORD(v20) = v7[1] / 256,
          v16 = v20,
          *((char *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v16) + 283) == SHIBYTE(v5->field_118) + 4) )
    {
      v6 = 1; /*0x741731*/
    }
  }
  if ( *(_BYTE *)(*(_DWORD *)&a1[48].__pad_0[4] + 3368) || TechnoClass::HasVoiceResponse((TechnoClass *)a1, 17) ) /*0x741747*/
  {
    if ( a4 ) /*0x74175a*/
    {
      if ( v6 ) /*0x74175e*/
      {
        if ( (v5->__pad_11C[12] & 0x1F) != 0 ) /*0x741767*/
          Cell::ApplyDamage(v5, (IUnknown *)&unk_B1CFE8, 1, 0, (IUnknown *)1); /*0x74177a*/
      }
      else if ( (v5->__pad_11C[8] & 0x1F) != 0 ) /*0x74178f*/
      {
        Cell::ApplyDamage(v5, (IUnknown *)&unk_B1CFE8, 1, 0, 0); /*0x741797*/
      }
    }
    else
    {
      if ( v6 ) /*0x74179b*/
        v8 = (IUnknown *)v5->field_E8; /*0x74179d*/
      else
        v8 = (IUnknown *)v5->field_E4; /*0x7417a5*/
      v21 = 0; /*0x7417ad*/
      if ( v8 ) /*0x7417b7*/
      {
        do /*0x74191f*/
        {
          if ( !ObjectClass::IsCrushable(v8, a1) /*0x741811*/
            || Object::IsAlliedWithObjectHouse(*(_DWORD **)a1[15].__pad_0, v8)
            && !*(_BYTE *)(*(_DWORD *)&a1[48].__pad_0[4] + 3220)
            || (v9 = (TechnoClass *)(*(int (__thiscall **)(IUnknown *, _DWORD *))(v8->field_0 + 72))(v8, v19),
                Math::DistSq2D(a1, v9) >= 0x4000)
            || v8->__pad_8C[1] )
          {
            v8 = *(IUnknown **)&v8->__pad_28[8]; /*0x74191a*/
          }
          else if ( (*(int (__thiscall **)(IUnknown *, AbstractClass *))(v8->field_0 + 44))(v8, a2) == 15 /*0x741849*/
                 && *(_BYTE *)(*(_DWORD *)&v8->__pad_690[48] + 3782)
                 && *(AbstractClass **)&v8->__pad_524[128] == a1
                 && !*(_BYTE *)(*(_DWORD *)&a1[48].__pad_0[4] + 3220) )
          {
            v10 = *(_DWORD *)a1->__pad_0; /*0x741859*/
            v11 = *(IUnknown **)&v8->__pad_28[8]; /*0x74185b*/
            a2 = 0; /*0x74185e*/
            a1[29].__pad_0[6] = v8->__pad_3BC[94]; /*0x741862*/
            (*(void (__thiscall **)(AbstractClass *))(v10 + 220))(a1); /*0x741868*/
            (*(void (__thiscall **)(AbstractClass *, int, int))(*(_DWORD *)a1->__pad_0 + 980))(a1, v8->field_21C, 1); /*0x74187b*/
            (*(void (__thiscall **)(IUnknown *))(v8->field_0 + 248))(v8); /*0x741885*/
            v8 = v11; /*0x74188b*/
          }
          else
          {
            v12 = *(IUnknown **)&v8->__pad_28[8]; /*0x741894*/
            if ( (*(int (__thiscall **)(IUnknown *))(v8->field_0 + 44))(v8) == 1 ) /*0x7418a4*/
              v21 = 1; /*0x7418a6*/
            v18[0] = *(_DWORD *)&a1[4].__pad_0[12]; /*0x7418b8*/
            v13 = v8->field_0; /*0x7418bc*/
            v18[1] = a1[4].uniqueId; /*0x7418c1*/
            v19[0] = a1[4].abstractFlags; /*0x7418c8*/
            v14 = (*(int (__thiscall **)(IUnknown *))(v13 + 136))(v8); /*0x7418ce*/
            StartAudioControllerAt(*(AudioController **)(v14 + 496), (int)v18, 0); /*0x7418dc*/
            (*(void (__thiscall **)(IUnknown *))(v8->field_0 + 368))(v8); /*0x7418e5*/
            a2 = a1; /*0x7418ed*/
            (*(void (__thiscall **)(IUnknown *))(v8->field_0 + 224))(v8); /*0x7418f0*/
            (*(void (__thiscall **)(IUnknown *, _DWORD))(v8->field_0 + 292))(v8, 0); /*0x7418fc*/
            (*(void (__thiscall **)(IUnknown *))(v8->field_0 + 212))(v8); /*0x741906*/
            (*(void (__thiscall **)(IUnknown *))(v8->field_0 + 248))(v8); /*0x741910*/
            v8 = v12; /*0x741916*/
          }
        }
        while ( v8 ); /*0x74191f*/
        if ( v21 ) /*0x74192c*/
          (*(void (__thiscall **)(AbstractClass *, _DWORD))(*(_DWORD *)a1->__pad_0 + 1116))(a1, 0); /*0x741933*/
      }
    }
  }
}


// ==== 0x00741970  UnitClass::AssignDestination_SyncLog  this=AbstractClass  sig=csp ====
void __thiscall UnitClass::AssignDestination_SyncLog(_DWORD *this, __int64 a2)
{
  __int16 *v3; // ebx
  int v4; // ecx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  _DWORD *Value; // esi
  char v9; // al
  int Member; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int *v13; // esi
  int v14; // edx
  __int16 *v15; // eax
  __int16 v16; // dx
  _DWORD *v17; // eax
  int *v18; // eax
  void *v19; // eax
  int v20; // eax
  int v21; // edi
  _DWORD *v22; // esi
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  int TileIndex; // eax
  int v31; // edx
  _DWORD *v32; // eax
  void *v33; // eax
  _DWORD *v34; // eax
  _DWORD *v35; // eax
  char v36; // bl
  int RegionMap; // esi
  int v38; // esi
  double v39; // st7
  char v40; // al
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  _DWORD *v44; // ebx
  int v45; // edi
  int v46; // eax
  int v47; // esi
  _DWORD *v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int (__stdcall ***v57)(_DWORD, void *, __int64 *); // eax
  int v58; // esi
  int v59; // edi
  int v60; // ecx
  int v61; // esi
  int v62; // esi
  int v63; // eax
  _DWORD *v64; // esi
  int v65; // eax
  int (__stdcall ***Checked)(_DWORD, void *, __int64 *); // eax
  int v67; // esi
  int v68; // eax
  int v69; // edi
  _DWORD *v70; // eax
  int GroundHeight; // eax
  _DWORD *v72; // eax
  _DWORD *v73; // eax
  void *v74; // eax
  _DWORD *v75; // eax
  void *v76; // eax
  _DWORD *v77; // eax
  int v78; // eax
  __int16 *v79; // eax
  int v80; // eax
  int **v81; // ebx
  int (__stdcall ***v82)(_DWORD, void *, __int64 *); // eax
  int v83; // esi
  int v84; // eax
  int v85; // edi
  int v86; // eax
  int InstanceCOM; // eax
  int v88; // eax
  int (__stdcall ***v89)(_DWORD, void *, __int64 *); // eax
  int v90; // esi
  int v91; // edi
  int v92; // ecx
  int v93; // esi
  int *v94; // esi
  int v95; // eax
  int *v96; // esi
  int v97; // edi
  unsigned __int8 *v98; // eax
  int *v99; // ebx
  void *v100; // edi
  int *v101; // esi
  int *v102; // esi
  int v103; // eax
  int v104; // ecx
  int v105; // ecx
  int v106; // edx
  int v107; // eax
  _DWORD *v108; // ecx
  int v109; // eax
  int v110; // eax
  _DWORD *v111; // esi
  int v112; // eax
  int *v113; // ecx
  int *v114; // edx
  int v115; // eax
  int v116; // ebx
  int v117; // eax
  int v118; // ebx
  int v119; // kr28_4
  int v120; // eax
  int v121; // eax
  int v122; // edx
  int v123; // [esp+D0h] [ebp-BCh]
  int v124; // [esp+D0h] [ebp-BCh]
  char v125; // [esp+10Fh] [ebp-7Dh]
  char v126; // [esp+110h] [ebp-7Ch]
  char v127; // [esp+110h] [ebp-7Ch]
  char IsBuildableAdvanced; // [esp+112h] [ebp-7Ah]
  char v129; // [esp+113h] [ebp-79h]
  int v130; // [esp+114h] [ebp-78h] BYREF
  __int64 v131; // [esp+118h] [ebp-74h] BYREF
  int *v132; // [esp+120h] [ebp-6Ch]
  int ppv; // [esp+124h] [ebp-68h] BYREF
  int v134; // [esp+128h] [ebp-64h] BYREF
  int *v135; // [esp+12Ch] [ebp-60h] BYREF
  int *v136; // [esp+130h] [ebp-5Ch] BYREF
  int *v137; // [esp+134h] [ebp-58h] BYREF
  __int64 v138; // [esp+138h] [ebp-54h] BYREF
  int v139; // [esp+140h] [ebp-4Ch]
  _DWORD v140[2]; // [esp+144h] [ebp-48h] BYREF
  int v141; // [esp+14Ch] [ebp-40h]
  _DWORD v142[3]; // [esp+150h] [ebp-3Ch] BYREF
  __int16 v143[4]; // [esp+15Ch] [ebp-30h] BYREF
  int v144; // [esp+164h] [ebp-28h]
  _BYTE v145[16]; // [esp+16Ch] [ebp-20h] BYREF
  _BYTE v146[16]; // [esp+17Ch] [ebp-10h] BYREF

  v3 = (__int16 *)a2; /*0x74197a*/
  if ( *(_BYTE *)(this->__pad_6C4 + 3434) )
  {
    if ( !(_DWORD)a2 )
    {
      v4 = this->q5A4; /*0x74199f*/
      if ( v4 )
      {
        v5 = this->q2B4; /*0x7419ad*/
        if ( v5 )
        {
          if ( v4 == v5
            || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 11
            && ((v6 = this->q5A4) != 0
              ? (v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 44))(this->q5A4) == 11 ? v6 : 0)
              : (v7 = 0),
                *(_DWORD *)(v7 + 228) == this->q2B4)
            || (LOWORD(v136) = 0x4000,
                Value = ProgressTimer::GetValue((_WORD *)this + 452, &v138),
                LOWORD(v137) = *(_WORD *)ObjectClass::CalcTargetFacing(this, (int *)&v135, this->q2B4)
                             - *(_WORD *)Value,
                UnitClass::CompareCoordinateMagnitude((__int16 *)&v136, (__int16 *)&v137)) )
          {
            if ( (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) != 1 ) /*0x741a60*/
              (*(void (__thiscall **)(_DWORD *, int))(*this + 496))(this, 1); /*0x741a6d*/
            return; /*0x741a7d*/
          }
        }
      }
    }
  }
  if ( (_DWORD)a2 != this->q5A4 || *((_BYTE *)this + 504) )
  {
    v9 = *((_BYTE *)this + 1760); /*0x741a96*/
    *((_BYTE *)this + 504) = 0; /*0x741a9c*/
    if ( v9 ) /*0x741aa5*/
    {
      if ( !this->q2B0 ) /*0x741acb*/
      {
LABEL_366:
        FootClass::ClearPathIndex(this); /*0x743173*/
        return; /*0x743175*/
      }
    }
    else if ( *((_BYTE *)this + 1761) || *((_BYTE *)this + 1762) ) /*0x741ab1*/
    {
      goto LABEL_366; /*0x741ab9*/
    }
    if ( Team::AllMembersValid(this) ) /*0x741ad3*/
    {
      if ( *(int *)(this->__pad_6C4 + 1504) > 0 ) /*0x741aea*/
      {
        Member = Team::GetMember(this, 0); /*0x741af0*/
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 15 ) /*0x741aff*/
        {
          if ( !(_DWORD)a2 ) /*0x741b03*/
            goto LABEL_49; /*0x741b03*/
          if ( (*(_BYTE *)(a2 + 20) & 1) != 0 && !Array::Contains(this, a2) ) /*0x741b12*/
            (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3); /*0x741b22*/
        }
      }
    }
    if ( (_DWORD)a2 )
    {
      if ( Team::AllMembersValid(this) ) /*0x741b32*/
      {
        if ( !(*(int (__thiscall **)(_DWORD *))(*this + 388))(this) ) /*0x741b40*/
        {
          if ( *((_BYTE *)this + 1048) ) /*0x741b4a*/
          {
            v11 = Team::GetMember(this, 0); /*0x741b58*/
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) == 2 ) /*0x741b67*/
            {
              v12 = (_DWORD *)Team::GetMember(this, 0); /*0x741b6d*/
              if ( *(_BYTE *)(v12[433] + 3580) ) /*0x741b78*/
              {
                (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v12 + 1152))(v12, 0, 1); /*0x741b8a*/
                (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 25); /*0x741b97*/
                (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3); /*0x741ba4*/
              }
            }
          }
        }
      }
      v13 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 44))(a2) == 6 ? (int *)a2 : 0;
LABEL_36:
      v14 = *this; /*0x741bbe*/
      v137 = v13; /*0x741bc3*/
      if ( (*(int (__thiscall **)(_DWORD *))(v14 + 388))(this) == 16 || this->q0B4 == 16 ) /*0x741bd9*/
      {
        v15 = (__int16 *)(*(int (__thiscall **)(_DWORD *, __int64 *))(*this + 440))(this, &v138); /*0x741be5*/
        v16 = *v15; /*0x741beb*/
        LOWORD(v15) = HIWORD(MEMORY[0x87F7E8][32686]) + v15[1]; /*0x741bf9*/
        LOWORD(v135) = LOWORD(MEMORY[0x87F7E8][32686]) + v16; /*0x741c00*/
        HIWORD(v135) = (_WORD)v15; /*0x741c05*/
        v136 = v135; /*0x741c12*/
        v17 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v136); /*0x741c1c*/
        v18 = Cell::IsBridge(v17); /*0x741c23*/
        if ( v18 ) /*0x741c2a*/
        {
          if ( *(_BYTE *)(this->__pad_6C4 + 3598) && v18[353] ) /*0x741c3c*/
            BuildingClass::ClearAnims(v18, 10); /*0x741c4a*/
        }
      }
      if ( (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) != 7 && this->q0B4 != 7 /*0x741c71*/
        || Team::AllMembersValid(this) )
      {
        this->q5E0 = -1; /*0x741e88*/
        goto LABEL_80; /*0x741e88*/
      }
      v19 = AbstractClass::IsTechnoType((void *)a2); /*0x741c80*/
      if ( v19 && (*(int (__thiscall **)(void *))(*(_DWORD *)v19 + 44))(v19) == 1 )
      {
        if ( (_DWORD)a2 )
          v20 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 44))(a2) == 1 ? a2 : 0;
        else
          v20 = 0; /*0x741c99*/
        this->q500 = v20; /*0x741cb8*/
        TechnoClass::SetFocus(this, 0); /*0x741cbe*/
        v3 = 0; /*0x741cc3*/
        LODWORD(a2) = 0; /*0x741cc5*/
        goto LABEL_80; /*0x741ccc*/
      }
      if ( !v13 ) /*0x741cd3*/
        goto LABEL_74; /*0x741cd3*/
      if ( (*(int (__thiscall **)(int *))(*v13 + 44))(v13) == 6 && *(_BYTE *)(v13[328] + 5806) ) /*0x741ceb*/
      {
        this->q500 = v13; /*0x741cf9*/
        TechnoClass::SetFocus(this, 0); /*0x741cff*/
        v3 = 0; /*0x741d04*/
        LODWORD(a2) = 0; /*0x741d06*/
        goto LABEL_80; /*0x741d0d*/
      }
      if ( (*(int (__thiscall **)(int *))(*v13 + 44))(v13) == 6 ) /*0x741d1c*/
      {
        if ( Team::AllMembersValid(v13) ) /*0x741d24*/
        {
          if ( !*(_BYTE *)(v13[328] + 5803) ) /*0x741d37*/
            TechnoClass::SetFocus(this, a2); /*0x741d44*/
          if ( *(_BYTE *)(v13[328] + 5803) ) /*0x741d4f*/
          {
            (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3); /*0x741d60*/
            v3 = 0; /*0x741d66*/
            LODWORD(a2) = 0; /*0x741d68*/
          }
          if ( *(_BYTE *)(v13[328] + 5801) ) /*0x741d75*/
          {
            if ( BuildingClass::GetHealthRatio(this) >= *(double *)(MEMORY[0x87F7E8][7806] + 5880) ) /*0x741d9b*/
            {
              (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3); /*0x741db8*/
              v3 = 0; /*0x741dbe*/
            }
            else
            {
              v3 = 0; /*0x741d9d*/
              this->q500 = v13; /*0x741d9f*/
            }
            LODWORD(a2) = 0; /*0x741da5*/
          }
          goto LABEL_80; /*0x741dac*/
        }
        v21 = this->q5A4; /*0x741dcf*/
        if ( (*(int (__thiscall **)(_DWORD *, int, int *))(*this + 632))(this, 14, v13) != 1 ) /*0x741de3*/
        {
          (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3); /*0x741dec*/
          if ( !*(_BYTE *)(v13[328] + 5801) ) /*0x741e00*/
            goto LABEL_80; /*0x741e00*/
          goto LABEL_69; /*0x741e00*/
        }
        if ( *(_BYTE *)(v13[328] + 5811) && this->q5A4 != v21 ) /*0x741e28*/
        {
          v3 = (__int16 *)this->q5A4; /*0x741e2a*/
          LODWORD(a2) = v3; /*0x741e2c*/
        }
      }
      else
      {
LABEL_74:
        if ( !(_DWORD)a2 || (*(_BYTE *)(a2 + 20) & 1) == 0 ) /*0x741e3d*/
          goto LABEL_80; /*0x741e3d*/
        if ( Team::AllMembersValid((int *)a2) ) /*0x741e41*/
        {
LABEL_69:
          TechnoClass::SetFocus(this, a2); /*0x741e06*/
          goto LABEL_80; /*0x741e0e*/
        }
        if ( (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 632))(this, 2, a2) == 1 /*0x741e77*/
          && (*(int (__thiscall **)(_DWORD *, int))(*this + 628))(this, 14) != 1 )
        {
          (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3); /*0x741e80*/
        }
      }
LABEL_80:
      if ( v3 && *(_BYTE *)(this->__pad_6C4 + 3372) ) /*0x741ea1*/
      {
        v22 = this + 413; /*0x741eb5*/
        if ( !this->q674 ) /*0x741eaf*/
          WinAPI::Wrapper(-2147467261); /*0x741ec4*/
        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*v22 + 16))(*v22) ) /*0x741ece*/
        {
          v23 = *v22; /*0x741ed9*/
          v135 = 0; /*0x741edb*/
          if ( !v23 ) /*0x741ee5*/
            goto LABEL_90; /*0x741ee5*/
          v24 = StreamClass::Set2(&v135, this + 413); /*0x741eec*/
          if ( v24 < 0 && v24 != -2147467262 ) /*0x741efa*/
            WinAPI::Wrapper(v24); /*0x741efd*/
          if ( !v135 ) /*0x741f08*/
LABEL_90:
            WinAPI::Wrapper(-2147467261); /*0x741f0f*/
          (*(void (__stdcall **)(int *, _BYTE *))(*v135 + 12))(v135, v145); /*0x741f20*/
          if ( !memcmp(v145, &stru_7E9A30, 0x10u) ) /*0x741f33*/
          {
            v25 = this->q5B4; /*0x741f3b*/
            if ( this->q5BC < v25 /*0x741f6c*/
              || (*((_BYTE *)this + 1465) || !v25)
              && (v26 = this->__pad_5C0, v26 > 0)
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*(this + 363) + 8))(
                   this + 363,
                   v26 + v25,
                   0) )
            {
              v27 = this->q5BC; /*0x741f73*/
              if ( v27 ) /*0x741f78*/
                memcpy((void *)(*(this + 364) + 4), (const void *)*(this + 364), 4 * v27); /*0x741f86*/
              *(_DWORD *)*(this + 364) = v3; /*0x741f91*/
              ++this->q5BC; /*0x741f97*/
            }
            (*(void (__thiscall **)(_DWORD *))(*(this + 354) + 12))(this + 354); /*0x741fa6*/
            v28 = (*(int (__thiscall **)(_DWORD *))(*this + 452))(this); /*0x741fae*/
            v3 = (__int16 *)v28; /*0x741fb4*/
            BYTE4(a2) = 0; /*0x741fb6*/
            LODWORD(a2) = v28; /*0x741fc0*/
            if ( v28 ) /*0x741fc7*/
            {
              if ( (*(_DWORD *)(v28 + 320) & 0x100) != 0 /*0x741fe3*/
                && !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, 0) )
              {
                v29 = this->__pad_6C4; /*0x741ff3*/
                v134 = 0; /*0x741ffa*/
                v123 = *(_DWORD *)(v29 + 1460); /*0x742022*/
                TileIndex = MapClass::GetTileIndex(MEMORY[0x87F7E8], v3 + 18, v123, 0); /*0x74202f*/
                v136 = (int *)*LayerClass::Pathfinding_Find( /*0x742050*/
                                 MEMORY[0x87F7E8],
                                 v31,
                                 &v138,
                                 v3 + 18,
                                 1,
                                 TileIndex,
                                 v123,
                                 0,
                                 1,
                                 1,
                                 0,
                                 1,
                                 0,
                                 0,
                                 (__int16 *)&v134,
                                 0,
                                 0);
                if ( v136 != (int *)dword_A8ED54[145561] ) /*0x742054*/
                {
                  v3 = (__int16 *)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v136); /*0x742073*/
                  LODWORD(a2) = v3; /*0x742075*/
                }
              }
            }
          }
          if ( v135 ) /*0x742082*/
            (*(void (__stdcall **)(int *))(*v135 + 8))(v135); /*0x742087*/
        }
      }
      v125 = 0; /*0x74208c*/
      if ( !v3 ) /*0x742091*/
      {
        (*(void (__thiscall **)(_DWORD *))(*(this + 354) + 12))(this + 354); /*0x7423ca*/
        goto LABEL_143; /*0x7423ca*/
      }
      if ( !*(_BYTE *)(this->__pad_6C4 + 3372) ) /*0x7420a5*/
        goto LABEL_128; /*0x7420a5*/
      if ( !BYTE4(a2) ) /*0x7420b4*/
        goto LABEL_143; /*0x7420b4*/
      v126 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, 0); /*0x7420ca*/
      v32 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*this + 76))(this, v142, 0); /*0x7420d7*/
      LOWORD(v131) = *v32 / 256; /*0x7420ea*/
      WORD1(v131) = v32[1] / 256; /*0x742102*/
      v134 = v131; /*0x74210b*/
      v33 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v134); /*0x742115*/
      IsBuildableAdvanced = Cell::IsBuildableAdvanced((int)v33); /*0x74212c*/
      v34 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)a2 + 72))(a2, v142); /*0x742135*/
      LOWORD(v131) = *v34 / 256; /*0x742148*/
      WORD1(v131) = v34[1] / 256; /*0x742161*/
      ppv = v131; /*0x74216e*/
      v35 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&ppv); /*0x742173*/
      v36 = BYTE1(v35[80]) & 1; /*0x742183*/
      v129 = Cell::IsBuildableAdvanced((int)v35); /*0x742190*/
      v130 = (*(int (__thiscall **)(_DWORD *))(*this + 456))(this); /*0x74219a*/
      if ( v126 ) /*0x7421a4*/
      {
        if ( v36 ) /*0x7421ac*/
        {
          RegionMap = GetRegionMap(MEMORY[0x87F7E8], (__int16 *)&v134, 3, 0); /*0x7421d3*/
          if ( RegionMap == GetRegionMap(MEMORY[0x87F7E8], (__int16 *)&ppv, 3, 0) && RegionMap != -1 ) /*0x7421e5*/
          {
            if ( *(_BYTE *)(16 * RegionMap + MEMORY[0x87F7E8][21] + 8) /*0x742285*/
              || (v38 = *Pathfinding::SelectRegionPath((int *)&v138, (__int16 *)&v134, (int)&v134),
                  LODWORD(v131) = v38,
                  LODWORD(v138) = *Pathfinding::SelectRegionPath((int *)&v138, (__int16 *)&ppv, (int)&ppv),
                  LODWORD(v131) = (__int16)(HIWORD(v38) - WORD1(v138)),
                  v39 = Math::Sqrt(
                          (double)(int)v131 * (double)(int)v131
                        + (double)(__int16)(v38 - v138) * (double)(__int16)(v38 - v138)),
                  (__int16)Math::RoundToInt(v39) <= 2) )
            {
              v125 = 1; /*0x742287*/
            }
          }
        }
        if ( !v125 ) /*0x742292*/
        {
          v40 = 1; /*0x742294*/
          goto LABEL_122; /*0x742296*/
        }
      }
      else if ( v36 ) /*0x74229a*/
      {
        v40 = 1; /*0x74229c*/
        goto LABEL_122; /*0x74229e*/
      }
      v40 = 0; /*0x7422a0*/
LABEL_122:
      if ( (!IsBuildableAdvanced && v130 >= 0 || !v129) && !v125 || v40 )
      {
        LODWORD(a2) = BuildingClass::FindPlacementCells(this, a2); /*0x7422d0*/
LABEL_130:
        if ( !this->q674 ) /*0x7422f7*/
          WinAPI::Wrapper(-2147467261); /*0x742306*/
        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->q674 + 152))(this->q674) ) /*0x742314*/
        {
          v41 = this->__pad_590; /*0x742322*/
          if ( this->__pad_598 < v41 /*0x742353*/
            || (*((_BYTE *)this + 1429) || !v41)
            && (v42 = this->q59C, v42 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*(this + 354) + 8))(this + 354, v42 + v41, 0) )
          {
            v43 = this->__pad_598; /*0x74235a*/
            if ( v43 ) /*0x74235f*/
              memcpy((void *)(this->q58C + 4), (const void *)this->q58C, 4 * v43); /*0x74236d*/
            *(_DWORD *)this->q58C = a2; /*0x74237f*/
            ++this->__pad_598; /*0x742385*/
          }
          v142[0] = this->q09C; /*0x742394*/
          v142[1] = *(this + 40); /*0x7423a0*/
          v142[2] = this->q0A4; /*0x7423a7*/
          LODWORD(a2) = Coord::To_Cell(MEMORY[0x87F7E8], v142); /*0x7423b5*/
        }
LABEL_143:
        if ( !*(_BYTE *)(this->__pad_6C4 + 3284) || *((_BYTE *)this + 636) || this->q2B0 || *((_BYTE *)this + 1709) ) /*0x7423fd*/
          goto LABEL_228; /*0x742405*/
        v44 = this + 413; /*0x742414*/
        v45 = Team::GetMember(this, 0); /*0x74241a*/
        v134 = 0; /*0x74241c*/
        if ( !this->q674 ) /*0x742424*/
          goto LABEL_152; /*0x742424*/
        v46 = StreamClass::Set2(&v134, this + 413); /*0x74242e*/
        if ( v46 < 0 && v46 != -2147467262 ) /*0x74243c*/
          WinAPI::Wrapper(v46); /*0x74243f*/
        if ( !v134 ) /*0x74244a*/
LABEL_152:
          WinAPI::Wrapper(-2147467261); /*0x742451*/
        (*(void (__stdcall **)(int, __int16 *))(*(_DWORD *)v134 + 12))(v134, v143); /*0x742462*/
        v127 = 1; /*0x742467*/
        if ( !v45 ) /*0x74246c*/
          goto LABEL_182; /*0x74246c*/
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v45 + 44))(v45) != 6
          || ((v47 = (*(int (__thiscall **)(int))(*(_DWORD *)v45 + 44))(v45) == 6 ? v45 : 0, (_DWORD)a2)
            ? (v48 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 44))(a2) == 11 ? (_DWORD *)a2 : 0)
            : (v48 = 0),
              !*(_BYTE *)(*(_DWORD *)(v47 + 1312) + 5811)
           || !v48
           || CellClass::FindBuilding(v48, 0)
           || (v127 = 0, !memcmp(v143, &g_CLSID_HoverLocomotion, 0x10u))) )
        {
LABEL_181:
          if ( v127 != 1 ) /*0x7425e0*/
          {
LABEL_226:
            if ( v134 ) /*0x7427b8*/
              (*(void (__stdcall **)(int))(*(_DWORD *)v134 + 8))(v134); /*0x7427bd*/
LABEL_228:
            if ( (_DWORD)a2 ) /*0x7427c9*/
            {
              v64 = this + 413; /*0x7427d5*/
              if ( !this->q674 ) /*0x7427cf*/
                WinAPI::Wrapper(-2147467261); /*0x7427e4*/
              if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*v64 + 16))(*v64) ) /*0x7427ee*/
              {
                v65 = *v64; /*0x7427f9*/
                v134 = 0; /*0x7427fb*/
                if ( !v65 ) /*0x742805*/
                  goto LABEL_240; /*0x742805*/
                Checked = (int (__stdcall ***)(_DWORD, void *, __int64 *))Stream::GetChecked(this + 413); /*0x742809*/
                v67 = (**Checked)(Checked, &unk_818858, &v138); /*0x74281d*/
                if ( v67 >= 0 ) /*0x742821*/
                {
                  v69 = v138; /*0x742830*/
                  ComPtr::Release_Alt(&v134); /*0x742838*/
                  v68 = v69; /*0x74283d*/
                }
                else
                {
                  ComPtr::Release_Alt(&v134); /*0x742827*/
                  v68 = 0; /*0x74282c*/
                }
                v134 = v68; /*0x742841*/
                if ( v67 < 0 && v67 != -2147467262 ) /*0x74284d*/
                  WinAPI::Wrapper(v67); /*0x742850*/
                if ( !v68 ) /*0x74285b*/
LABEL_240:
                  WinAPI::Wrapper(-2147467261); /*0x742862*/
                (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v68 + 12))(v68, v146); /*0x742876*/
                if ( !memcmp(v146, &stru_7E9A50, 0x10u) && !(*(int (__thiscall **)(_DWORD *))(*this + 456))(this) ) /*0x742899*/
                {
                  v70 = (_DWORD *)(*(int (__thiscall **)(_DWORD, __int64 *))(*(_DWORD *)a2 + 72))(a2, &v138); /*0x7428b0*/
                  v140[0] = *v70; /*0x7428b5*/
                  v140[1] = v70[1]; /*0x7428bc*/
                  v141 = v70[2]; /*0x7428cd*/
                  GroundHeight = Cell::GetGroundHeight(v140); /*0x7428d1*/
                  if ( v141 < GroundHeight ) /*0x7428da*/
                    v141 = GroundHeight; /*0x7428dc*/
                  if ( v125 ) /*0x7428e6*/
                    goto LABEL_251; /*0x7428e6*/
                  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, 0) ) /*0x7428f3*/
                    goto LABEL_251; /*0x7428f3*/
                  v72 = (_DWORD *)(*(int (__thiscall **)(_DWORD, __int64 *))(*(_DWORD *)a2 + 72))(a2, &v138); /*0x74290a*/
                  if ( (*((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], v72) + 80) & 0x100) != 0 ) /*0x742921*/
                    goto LABEL_251; /*0x742921*/
                  v73 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, __int64 *, _DWORD))(*this + 76))(this, &v131, 0); /*0x742933*/
                  v74 = Coord::To_Cell(MEMORY[0x87F7E8], v73); /*0x74293c*/
                  if ( !Cell::IsBuildableAdvanced((int)v74) ) /*0x742943*/
                    goto LABEL_251; /*0x742943*/
                  v75 = (_DWORD *)(*(int (__thiscall **)(_DWORD, __int16 *))(*(_DWORD *)a2 + 72))(a2, v143); /*0x742959*/
                  v76 = Coord::To_Cell(MEMORY[0x87F7E8], v75); /*0x742962*/
                  if ( !Cell::IsBuildableAdvanced((int)v76) /*0x7429c7*/
                    || (v77 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 72))(a2),
                        LOWORD(v132) = *v77 / 256,
                        HIWORD(v132) = v77[1] / 256,
                        v78 = *this,
                        v137 = v132,
                        v79 = (__int16 *)(*(int (__thiscall **)(_DWORD *, int *, int **))(v78 + 448))(
                                           this,
                                           &v130,
                                           &v137),
                        !BuildingTypeClass::IsPlacementValid(this, v79, v143)) )
                  {
LABEL_251:
                    v80 = this->q674; /*0x7429d4*/
                    v81 = (int **)(this + 413); /*0x7429da*/
                    v130 = 0; /*0x7429e2*/
                    if ( v80 ) /*0x7429ea*/
                    {
                      v82 = (int (__stdcall ***)(_DWORD, void *, __int64 *))Stream::GetChecked(this + 413); /*0x7429f2*/
                      v83 = (**v82)(v82, &unk_819088, &v138); /*0x742a06*/
                      if ( v83 >= 0 ) /*0x742a0a*/
                      {
                        v85 = v138; /*0x742a19*/
                        Release2COM(&v130); /*0x742a21*/
                        v84 = v85; /*0x742a26*/
                      }
                      else
                      {
                        Release2COM(&v130); /*0x742a10*/
                        v84 = 0; /*0x742a15*/
                      }
                      v130 = v84; /*0x742a2a*/
                      if ( v83 < 0 && v83 != -2147467262 ) /*0x742a36*/
                        WinAPI::Wrapper(v83); /*0x742a39*/
                      if ( v84 && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v84 + 28))(v84) ) /*0x742a49*/
                      {
                        if ( *v81 ) /*0x742a50*/
                          (*(void (__stdcall **)(int *))(**v81 + 8))(*v81); /*0x742a59*/
                        v86 = v130; /*0x742a5c*/
                        *v81 = 0; /*0x742a60*/
                        if ( !v86 ) /*0x742a68*/
                          WinAPI::Wrapper(-2147467261); /*0x742a6f*/
                        (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v86 + 16))(v86, this + 413); /*0x742a7c*/
                      }
                    }
                    LODWORD(v131) = 0; /*0x742a8c*/
                    InstanceCOM = CreateInstanceCOM((#24 *)&v131, (#33 *)&stru_7E9A30, 0, 7); /*0x742a94*/
                    if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x742aa2*/
                      WinAPI::Wrapper(InstanceCOM); /*0x742aa5*/
                    if ( !(_DWORD)v131 ) /*0x742ab0*/
                      WinAPI::Wrapper(-2147467261); /*0x742ab7*/
                    (*(void (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)v131 + 12))(v131, this); /*0x742ac4*/
                    v88 = 0; /*0x742acb*/
                    ppv = 0; /*0x742acf*/
                    if ( (_DWORD)v131 ) /*0x742ad3*/
                    {
                      v89 = (int (__stdcall ***)(_DWORD, void *, __int64 *))Stream::GetChecked(&v131); /*0x742ad9*/
                      v90 = (**v89)(v89, &unk_819088, &v138); /*0x742aed*/
                      if ( v90 >= 0 ) /*0x742af1*/
                      {
                        v91 = v138; /*0x742b00*/
                        Release2COM(&ppv); /*0x742b08*/
                        v88 = v91; /*0x742b0d*/
                      }
                      else
                      {
                        Release2COM(&ppv); /*0x742af7*/
                        v88 = 0; /*0x742afc*/
                      }
                      ppv = v88; /*0x742b11*/
                      if ( v90 < 0 && v90 != -2147467262 ) /*0x742b1d*/
                        WinAPI::Wrapper(v90); /*0x742b20*/
                    }
                    v92 = v130; /*0x742b29*/
                    if ( v130 != v88 ) /*0x742b2f*/
                    {
                      v93 = v130; /*0x742b31*/
                      v92 = v88; /*0x742b33*/
                      v130 = v88; /*0x742b37*/
                      if ( v88 ) /*0x742b3b*/
                      {
                        (*(void (__stdcall **)(int))(*(_DWORD *)v88 + 4))(v88); /*0x742b40*/
                        v92 = v130; /*0x742b43*/
                        v88 = ppv; /*0x742b47*/
                      }
                      if ( v93 ) /*0x742b4d*/
                      {
                        (*(void (__stdcall **)(int))(*(_DWORD *)v93 + 8))(v93); /*0x742b52*/
                        v92 = v130; /*0x742b55*/
                        v88 = ppv; /*0x742b59*/
                      }
                    }
                    if ( v88 ) /*0x742b5f*/
                    {
                      (*(void (__stdcall **)(int))(*(_DWORD *)v88 + 8))(v88); /*0x742b64*/
                      v92 = v130; /*0x742b67*/
                    }
                    if ( v92 ) /*0x742b6d*/
                    {
                      (*(void (__stdcall **)(int, int *))(*(_DWORD *)v92 + 12))(v92, *v81); /*0x742b75*/
                      v94 = *v81; /*0x742b78*/
                      v95 = v131; /*0x742b7a*/
                      if ( *v81 != (int *)v131 ) /*0x742b80*/
                      {
                        *v81 = (int *)v131; /*0x742b84*/
                        if ( v95 ) /*0x742b86*/
                          (*(void (__stdcall **)(int))(*(_DWORD *)v95 + 4))(v95); /*0x742b8b*/
                        if ( v94 ) /*0x742b90*/
                          (*(void (__stdcall **)(int *))(*v94 + 8))(v94); /*0x742b95*/
                      }
                      v138 = *(_QWORD *)(this + 39); /*0x742ba4*/
                      v139 = this->q0A4; /*0x742bb2*/
                      if ( !*v81 ) /*0x742bb6*/
                        WinAPI::Wrapper(-2147467261); /*0x742bc1*/
                      v96 = *v81; /*0x742bc6*/
                      v97 = **v81; /*0x742bd2*/
                      v98 = (unsigned __int8 *)Coord::To_Cell(MEMORY[0x87F7E8], &v138); /*0x742bd4*/
                      (*(void (__stdcall **)(int *, _DWORD))(v97 + 124))(v96, v98[284]); /*0x742be3*/
                      v92 = v130; /*0x742be6*/
                    }
                    if ( (_DWORD)v131 ) /*0x742bf0*/
                    {
                      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v131 + 8))(v131); /*0x742bf5*/
                      v92 = v130; /*0x742bf8*/
                    }
                    if ( v92 ) /*0x742bfe*/
                      (*(void (__stdcall **)(int))(*(_DWORD *)v92 + 8))(v92); /*0x742c03*/
                  }
                }
                if ( v134 ) /*0x742c0c*/
                  (*(void (__stdcall **)(int))(*(_DWORD *)v134 + 8))(v134); /*0x742c11*/
              }
            }
            v99 = v137; /*0x742c14*/
            if ( !v137 ) /*0x742c1a*/
            {
              v100 = (void *)a2; /*0x742d3f*/
              goto LABEL_318; /*0x742d3f*/
            }
            if ( *(_BYTE *)(v137[328] + 5801) ) /*0x742c26*/
            {
              if ( Team::AllMembersValid(v137) && (_DWORD *)Team::GetMember(v99, 0) != this ) /*0x742c46*/
              {
                v100 = (void *)a2; /*0x742c48*/
                TechnoClass::SetFocus(this, a2); /*0x742c52*/
                goto LABEL_309; /*0x742c57*/
              }
              if ( (*(int (__thiscall **)(_DWORD *, int, int *))(*this + 632))(this, 2, v99) == 1 ) /*0x742c6a*/
              {
                if ( (*(int (__thiscall **)(_DWORD *, int))(*this + 628))(this, 14) == 1 ) /*0x742c7c*/
                {
                  FootClass::AssignDestination((int)this, a2, SHIDWORD(a2)); /*0x742c8e*/
LABEL_315:
                  this->q5E0 = -1; /*0x742d10*/
                  return; /*0x742d24*/
                }
                (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3); /*0x742c97*/
                v100 = 0; /*0x742c9d*/
                LODWORD(a2) = 0; /*0x742c9f*/
                goto LABEL_309; /*0x742ca6*/
              }
            }
            v100 = (void *)a2; /*0x742ca8*/
LABEL_309:
            if ( *(_BYTE *)(v99[328] + 5803) /*0x742cec*/
              && (!Team::AllMembersValid(v99) || (_DWORD *)Team::GetMember(v99, 0) == this)
              && (*(int (__thiscall **)(_DWORD *, int, int *))(*this + 632))(this, 2, v99) == 1 )
            {
              if ( (*(int (__thiscall **)(_DWORD *, int))(*this + 628))(this, 14) == 1 ) /*0x742cfe*/
              {
                FootClass::AssignDestination((int)this, (int)v100, SHIDWORD(a2)); /*0x742d0b*/
                goto LABEL_315; /*0x742d0b*/
              }
              (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3); /*0x742d2e*/
              v100 = 0; /*0x742d34*/
              LODWORD(a2) = 0; /*0x742d36*/
            }
LABEL_318:
            v101 = (int *)Team::GetMember(this, 0); /*0x742d46*/
            if ( v101 /*0x742d84*/
              && (*(int (__thiscall **)(int *))(*v101 + 44))(v101) == 6
              && *(_BYTE *)(v101[328] + 5821)
              && this->q0AC != 7 )
            {
              if ( this->q2B0 ) /*0x742d8a*/
              {
                (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3); /*0x742e41*/
              }
              else
              {
                v102 = v101 + 39; /*0x742d98*/
                v103 = *v102; /*0x742d9e*/
                v104 = v102[1]; /*0x742da0*/
                v144 = v102[2]; /*0x742da6*/
                LOWORD(v138) = v103 / 256; /*0x742db6*/
                WORD1(v138) = v104 / 256; /*0x742dc9*/
                LOWORD(v137) = v138 + 4; /*0x742dda*/
                HIWORD(v137) = WORD1(v138) + 1; /*0x742ddf*/
                LODWORD(v138) = v137; /*0x742df2*/
                if ( v100 != CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v138) ) /*0x742dfd*/
                {
                  (*(void (__thiscall **)(_DWORD *))(*(this + 363) + 12))(this + 363); /*0x742e0b*/
                  (*(void (__thiscall **)(_DWORD *))(*(this + 354) + 12))(this + 354); /*0x742e1a*/
                  if ( v100 ) /*0x742e1f*/
                    BuildingClass::AddToProductionQueue((int)this, (int)v100); /*0x742e28*/
                  return; /*0x742e37*/
                }
              }
            }
            if ( !v99 ) /*0x742e49*/
              goto LABEL_345; /*0x742e49*/
            v105 = this->__pad_6C4; /*0x742e4f*/
            if ( *(int *)(v105 + 1016) <= 0 ) /*0x742e5d*/
              goto LABEL_345; /*0x742e5d*/
            v106 = *(_DWORD *)(v105 + 1016); /*0x742e63*/
            v107 = 0; /*0x742e69*/
            if ( v106 <= 0 ) /*0x742e6d*/
              goto LABEL_345; /*0x742e6d*/
            v108 = *(_DWORD **)(v105 + 1004); /*0x742e79*/
            while ( *v108 != v99[328] ) /*0x742e81*/
            {
              ++v107; /*0x742e83*/
              ++v108; /*0x742e84*/
              if ( v107 >= v106 ) /*0x742e89*/
                goto LABEL_345; /*0x742e89*/
            }
            if ( (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) != 1 ) /*0x742e9b*/
              goto LABEL_345; /*0x742e9b*/
            v109 = this->__pad_6C4; /*0x742ea1*/
            if ( !*(_BYTE *)(v109 + 3598) && !*(_BYTE *)(v109 + 3599) ) /*0x742eb1*/
              goto LABEL_345; /*0x742eb1*/
            if ( (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) == 16 ) /*0x742ecd*/
              goto LABEL_345; /*0x742ecd*/
            if ( (int *)Team::GetMember(this, 0) == v99 /*0x742f28*/
              || Team::AllMembersValid(v99)
              || (*(int (__thiscall **)(_DWORD *, int, int *))(*this + 632))(this, 2, v99) != 1
              || (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) == 7
              || (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) == 10 )
            {
              if ( !(_DWORD)a2 /*0x743018*/
                || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 44))(a2) != 6
                || Team::GetMember(this, 0) == (_DWORD)a2 )
              {
                goto LABEL_345; /*0x743018*/
              }
              v113 = v99 + 39; /*0x74301e*/
              v114 = v99 + 39; /*0x743026*/
              v136 = 0; /*0x743028*/
              v115 = v99[39]; /*0x743034*/
              v116 = v99[40]; /*0x74303d*/
              v144 = v114[2]; /*0x743045*/
              LOWORD(v137) = v115 / 256; /*0x743055*/
              v117 = v116; /*0x74305a*/
              v118 = v113[1]; /*0x743063*/
              HIWORD(v137) = v117 / 256; /*0x74306b*/
              LODWORD(v138) = v137; /*0x743074*/
              v119 = *v113; /*0x743084*/
              v144 = v113[2]; /*0x743086*/
              LOWORD(v137) = v119 / 256; /*0x74308d*/
              HIWORD(v137) = v118 / 256; /*0x7430a7*/
              v120 = this->__pad_6C4; /*0x7430b0*/
              v135 = v137; /*0x7430bb*/
              v124 = *(_DWORD *)(v120 + 1460); /*0x7430c9*/
              v121 = MapClass::GetTileIndex(MEMORY[0x87F7E8], (__int16 *)&v138, v124, 0); /*0x7430d7*/
              v137 = (int *)*LayerClass::Pathfinding_Find( /*0x7430fc*/
                               MEMORY[0x87F7E8],
                               v122,
                               &v134,
                               (__int16 *)&v135,
                               2,
                               v121,
                               v124,
                               0,
                               1,
                               1,
                               0,
                               1,
                               0,
                               0,
                               (__int16 *)&v136,
                               0,
                               0);
              if ( v137 != (int *)dword_A8ED54[145561] ) /*0x743100*/
              {
                LODWORD(a2) = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v137); /*0x743123*/
                goto LABEL_345; /*0x74312a*/
              }
            }
            else
            {
              (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 7, 0); /*0x742f37*/
            }
            LODWORD(a2) = 0; /*0x742f3d*/
LABEL_345:
            if ( !this->q674 ) /*0x742f48*/
              WinAPI::Wrapper(-2147467261); /*0x742f57*/
            if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->q674 + 96))(this->q674) /*0x742f76*/
              && !HouseClass::IonSensitivesShouldBeOffline() )
            {
              v110 = (*(int (__thiscall **)(_DWORD *))(*this + 444))(this); /*0x742f88*/
              if ( (*(_DWORD *)(v110 + 320) & 0x100) == 0 ) /*0x742f97*/
              {
                v111 = *(_DWORD **)(v110 + 228); /*0x742f9d*/
                if ( v111 ) /*0x742fa5*/
                {
                  while ( 1 ) /*0x742fad*/
                  {
                    if ( v111 != this && (*(int (__thiscall **)(_DWORD *))(*v111 + 44))(v111) == 6 ) /*0x742fb9*/
                    {
                      v112 = v111[328]; /*0x742fbb*/
                      if ( *(_BYTE *)(v112 + 5801) || *(_BYTE *)(v112 + 5803) ) /*0x742fcf*/
                        break; /*0x742fcf*/
                    }
                    v111 = (_DWORD *)v111[12]; /*0x742fdd*/
                    if ( !v111 ) /*0x742fe2*/
                      goto LABEL_365; /*0x742fe2*/
                  }
                  if ( !this->q674 ) /*0x74312f*/
                    WinAPI::Wrapper(-2147467261); /*0x74313e*/
                  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this->q674 + 88))(this->q674); /*0x74314c*/
                }
              }
            }
LABEL_365:
            FootClass::AssignDestination((int)this, a2, SHIDWORD(a2)); /*0x74314f*/
            return; /*0x743170*/
          }
LABEL_182:
          if ( memcmp(v143, &stru_7E9A30, 0x10u) ) /*0x7425f6*/
          {
            v52 = *v44; /*0x7425fe*/
            v130 = 0; /*0x742600*/
            if ( v52 ) /*0x742606*/
            {
              v53 = StreamClass::Set(&v130, this + 413); /*0x74260d*/
              if ( v53 < 0 && v53 != -2147467262 ) /*0x74261b*/
                WinAPI::Wrapper(v53); /*0x74261e*/
              if ( v130 && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v130 + 28))(v130) ) /*0x74262e*/
              {
                if ( !v130 ) /*0x74263b*/
                  WinAPI::Wrapper(-2147467261); /*0x742642*/
                if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v130 + 20))(v130) ) /*0x74264e*/
                {
                  if ( *v44 ) /*0x742655*/
                    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v44 + 8))(*v44); /*0x74265e*/
                  v54 = v130; /*0x742661*/
                  *v44 = 0; /*0x742665*/
                  if ( !v54 ) /*0x74266d*/
                    WinAPI::Wrapper(-2147467261); /*0x742674*/
                  (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v54 + 16))(v54, this + 413); /*0x742681*/
                }
              }
            }
            ppv = 0; /*0x742691*/
            v55 = CreateInstanceCOM((#24 *)&ppv, (#33 *)&stru_7E9A30, 0, 7); /*0x742699*/
            if ( v55 < 0 && v55 != -2147467262 ) /*0x7426a7*/
              WinAPI::Wrapper(v55); /*0x7426aa*/
            if ( !ppv ) /*0x7426b5*/
              WinAPI::Wrapper(-2147467261); /*0x7426bc*/
            (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)ppv + 12))(ppv, this); /*0x7426c9*/
            v56 = 0; /*0x7426d0*/
            LODWORD(v131) = 0; /*0x7426d4*/
            if ( ppv ) /*0x7426d8*/
            {
              v57 = (int (__stdcall ***)(_DWORD, void *, __int64 *))Stream::GetChecked(&ppv); /*0x7426de*/
              v58 = (**v57)(v57, &unk_819088, &v138); /*0x7426f2*/
              if ( v58 >= 0 ) /*0x7426f6*/
              {
                v59 = v138; /*0x742705*/
                Release2COM((int *)&v131); /*0x74270d*/
                v56 = v59; /*0x742712*/
              }
              else
              {
                Release2COM((int *)&v131); /*0x7426fc*/
                v56 = 0; /*0x742701*/
              }
              LODWORD(v131) = v56; /*0x742716*/
              if ( v58 < 0 && v58 != -2147467262 ) /*0x742722*/
                WinAPI::Wrapper(v58); /*0x742725*/
            }
            v60 = v130; /*0x74272e*/
            if ( v130 != v56 ) /*0x742734*/
            {
              v61 = v130; /*0x742736*/
              v130 = v56; /*0x74273c*/
              CellClass::SetField2C(&v130); /*0x742740*/
              if ( v61 ) /*0x742747*/
                (*(void (__stdcall **)(int))(*(_DWORD *)v61 + 8))(v61); /*0x74274c*/
              v60 = v130; /*0x74274f*/
              v56 = v131; /*0x742753*/
            }
            if ( v56 ) /*0x742759*/
            {
              (*(void (__stdcall **)(int))(*(_DWORD *)v56 + 8))(v56); /*0x74275e*/
              v60 = v130; /*0x742761*/
            }
            if ( v60 ) /*0x742767*/
            {
              (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v60 + 12))(v60, *v44); /*0x74276f*/
              v62 = *v44; /*0x742772*/
              v63 = ppv; /*0x742774*/
              if ( *v44 != ppv ) /*0x74277a*/
              {
                *v44 = ppv; /*0x74277e*/
                if ( v63 ) /*0x742780*/
                  (*(void (__stdcall **)(int))(*(_DWORD *)v63 + 4))(v63); /*0x742785*/
                if ( v62 ) /*0x74278a*/
                  (*(void (__stdcall **)(int))(*(_DWORD *)v62 + 8))(v62); /*0x74278f*/
              }
              v60 = v130; /*0x742792*/
            }
            if ( ppv ) /*0x74279c*/
            {
              (*(void (__stdcall **)(int))(*(_DWORD *)ppv + 8))(ppv); /*0x7427a1*/
              v60 = v130; /*0x7427a4*/
            }
            if ( v60 ) /*0x7427aa*/
              (*(void (__stdcall **)(int))(*(_DWORD *)v60 + 8))(v60); /*0x7427af*/
          }
          goto LABEL_226; /*0x7427af*/
        }
        v49 = *v44; /*0x742500*/
        v130 = 0; /*0x742502*/
        if ( v49 ) /*0x742508*/
        {
          v50 = StreamClass::Set(&v130, this + 413); /*0x742513*/
          if ( v50 < 0 && v50 != -2147467262 ) /*0x742521*/
            WinAPI::Wrapper(v50); /*0x742524*/
          if ( v130 && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v130 + 28))(v130) ) /*0x742534*/
          {
            if ( !v130 ) /*0x742541*/
              WinAPI::Wrapper(-2147467261); /*0x742548*/
            if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v130 + 20))(v130) ) /*0x742554*/
            {
              if ( *v44 ) /*0x74255b*/
                (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v44 + 8))(*v44); /*0x742564*/
              v51 = v130; /*0x742567*/
              *v44 = 0; /*0x74256b*/
              if ( !v51 ) /*0x742573*/
                WinAPI::Wrapper(-2147467261); /*0x74257a*/
              (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v51 + 16))(v51, this + 413); /*0x742587*/
              goto LABEL_179; /*0x74258a*/
            }
          }
          if ( *v44 ) /*0x74258c*/
          {
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v44 + 72))(*v44); /*0x7425a0*/
            (*(void (__thiscall **)(_DWORD *, int))(*this + 496))(this, -1); /*0x7425aa*/
            (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 7, 0); /*0x7425b9*/
            *((_BYTE *)this + 1708) = 1; /*0x7425bf*/
            *((_BYTE *)this + 504) = 1; /*0x7425c6*/
LABEL_179:
            if ( v130 ) /*0x7425d3*/
              (*(void (__stdcall **)(int))(*(_DWORD *)v130 + 8))(v130); /*0x7425d8*/
            goto LABEL_181; /*0x7425d8*/
          }
        }
        WinAPI::Wrapper(-2147467261); /*0x742596*/
      }
LABEL_128:
      if ( !BYTE4(a2) ) /*0x7422e2*/
        goto LABEL_143; /*0x7422e2*/
      (*(void (__thiscall **)(_DWORD *))(*(this + 354) + 12))(this + 354); /*0x7422f4*/
      goto LABEL_130; /*0x7422f4*/
    }
LABEL_49:
    v13 = 0; /*0x741c9d*/
    goto LABEL_36; /*0x741c9f*/
  }
}


// ==== 0x00743190  TechnoClass::SelectAutoTargetWithGarrison  this=TechnoClass  sig=csp ====
BuildingTypeClass *__userpurge TechnoClass::SelectAutoTargetWithGarrison@<eax>(
        BuildingTypeClass **a1@<ecx>,
        int a2@<edi>,
        int a3,
        int a4,
        TechnoClass *aP3)
{
  int v7; // edi
  BuildingTypeClass *v8; // ebx
  int PoweredWeaponIndex; // eax
  _DWORD **v10; // eax
  int v11; // eax
  _DWORD **v12; // eax
  int v13; // eax
  _DWORD **v14; // eax
  int v15; // eax

  if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)a1[135]) && a1[433]->DebrisTypes[2814] ) /*0x7431a8*/
    return 0; /*0x7431b2*/
  v7 = a3; /*0x7431b9*/
  if ( (a3 & 0x1B978) == 0 ) /*0x7431c3*/
  {
    if ( !TechnoClass::OwnerHasPower(a1) || a1[433]->DebrisTypes[2497] ) /*0x7431da*/
    {
      if ( *(_DWORD *)(*(int (__thiscall **)(BuildingTypeClass **, _DWORD, int))&(*a1)->DebrisTypes[228])(a1, 0, a2) ) /*0x74320f*/
      {
        v12 = (_DWORD **)(*(int (__thiscall **)(BuildingTypeClass **, _DWORD))&(*a1)->DebrisTypes[228])(a1, 0); /*0x74321a*/
        LOBYTE(v13) = Building::GetRenderType(*v12); /*0x743222*/
        v7 = v13 | a3; /*0x743227*/
      }
      if ( *(_DWORD *)(*(int (__thiscall **)(BuildingTypeClass **, int))&(*a1)->DebrisTypes[228])(a1, 1) ) /*0x743235*/
      {
        v14 = (_DWORD **)(*(int (__thiscall **)(BuildingTypeClass **, int))&(*a1)->DebrisTypes[228])(a1, 1); /*0x743240*/
        LOBYTE(v15) = Building::GetRenderType(*v14); /*0x743248*/
        v7 |= v15; /*0x74324d*/
      }
    }
    else
    {
      v8 = *a1; /*0x7431e5*/
      PoweredWeaponIndex = TechnoClass::GetPoweredWeaponIndex(a1); /*0x7431e9*/
      v10 = (_DWORD **)(*(int (__thiscall **)(BuildingTypeClass **, int))&v8->DebrisTypes[228])(a1, PoweredWeaponIndex); /*0x7431f1*/
      LOBYTE(v11) = Building::GetRenderType(*v10); /*0x7431f9*/
      v7 = v11 | a3; /*0x7431fe*/
    }
  }
  return (BuildingTypeClass *)FootClass::SelectAutoTarget_Cloaked((int)a1, v7, a4, aP3); /*0x7431b4*/
}


// ==== 0x00743270  ObjectClass::PlaceScenarioUnits  this=IUnknown  sig=csp ====
int __thiscall sub_7436E0(char *this)
{
  int result; // eax
  int v2; // esi
  int v3; // edi
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // eax
  int v7; // eax
  _DWORD *Value; // eax
  int v9; // edi
  const char *v10; // ebx
  const char *v11; // ebp
  int v12; // eax
  int v13; // eax
  char *v14; // eax
  int v15; // eax
  double HealthRatio; // st7
  int v17; // eax
  int v18; // [esp-3Ch] [ebp-E4h]
  int v19; // [esp-38h] [ebp-E0h]
  int v20; // [esp-34h] [ebp-DCh]
  const char *v21; // [esp-30h] [ebp-D8h]
  const char *v22; // [esp-2Ch] [ebp-D4h]
  int v23; // [esp-28h] [ebp-D0h]
  int v24; // [esp-24h] [ebp-CCh]
  int v25; // [esp-24h] [ebp-CCh]
  int v26; // [esp-20h] [ebp-C8h]
  int v27; // [esp-20h] [ebp-C8h]
  int v28; // [esp-1Ch] [ebp-C4h]
  int v29; // [esp-18h] [ebp-C0h]
  int v30; // [esp-18h] [ebp-C0h]
  int v31; // [esp-14h] [ebp-BCh]
  int v32; // [esp-14h] [ebp-BCh]
  int v33; // [esp+0h] [ebp-A8h]
  char *v34; // [esp+4h] [ebp-A4h]
  int i; // [esp+8h] [ebp-A0h]
  int v37; // [esp+10h] [ebp-98h] BYREF
  _BYTE v38[4]; // [esp+18h] [ebp-90h] BYREF
  char Buffer[4]; // [esp+1Ch] [ebp-8Ch] BYREF
  _BYTE v40[8]; // [esp+20h] [ebp-88h] BYREF
  char Source[128]; // [esp+28h] [ebp-80h] BYREF

  INIClass::ClearSection((int)this, (int)MEMORY[0x8458F0], 0); /*0x7436f2*/
  result = 0; /*0x7436fd*/
  for ( i = 0; result < MEMORY[0x8B4118]; i = result ) /*0x743705*/
  {
    v2 = *((_DWORD *)MEMORY[0x8B410C] + result); /*0x743715*/
    if ( v2 && !*(_BYTE *)(v2 + 129) && *(_BYTE *)(v2 + 144) ) /*0x74372e*/
    {
      sprintf(Buffer, MEMORY[0x817F6C], result); /*0x743747*/
      v3 = *(_DWORD *)(v2 + 1736); /*0x74374c*/
      if ( v3 && (v4 = 0, MEMORY[0x8B4118] > 0) ) /*0x743763*/
      {
        v5 = MEMORY[0x8B410C]; /*0x743765*/
        while ( *v5 != v3 ) /*0x74376d*/
        {
          ++v4; /*0x74376f*/
          ++v5; /*0x743770*/
          if ( v4 >= MEMORY[0x8B4118] ) /*0x743775*/
            goto LABEL_10; /*0x743775*/
        }
        v33 = v4; /*0x743796*/
      }
      else
      {
LABEL_10:
        v33 = -1; /*0x743777*/
      }
      v6 = *(_DWORD *)(v2 + 52); /*0x74377f*/
      if ( v6 && (v7 = *(_DWORD *)(v6 + 36)) != 0 ) /*0x74378b*/
        v34 = (char *)(v7 + 36); /*0x743790*/
      else
        v34 = MEMORY[0x817F64]; /*0x74379c*/
      Value = ProgressTimer::GetValue((_WORD *)(v2 + 904), &v37); /*0x7437af*/
      v31 = *(unsigned __int8 *)(v2 + 1058); /*0x7437d0*/
      v29 = *(unsigned __int8 *)(v2 + 1057); /*0x7437df*/
      v26 = *(unsigned __int8 *)(v2 + 140); /*0x7437eb*/
      v24 = *(_DWORD *)(v2 + 532); /*0x7437ee*/
      v9 = (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1); /*0x7437f5*/
      v10 = (const char *)(*(_DWORD *)(v2 + 1732) + 36); /*0x7437fb*/
      v11 = (const char *)(*(_DWORD *)(v2 + 540) + 90100); /*0x7437fe*/
      FootClass::GetField((float *)(v2 + 336)); /*0x743804*/
      v13 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)v2 + 388))(v2, v34, v12); /*0x743813*/
      v14 = FromNameIndex(v13); /*0x74381b*/
      v15 = (*(int (__thiscall **)(int, _BYTE *, int, char *, int, int, int, int, int))(*(_DWORD *)v2 + 440))( /*0x74382b*/
              v2,
              v40,
              v9,
              v14,
              v24,
              v26,
              v33,
              v29,
              v31);
      v18 = *(__int16 *)(*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v2 + 440))( /*0x743848*/
                          v2,
                          v38,
                          *(__int16 *)(v15 + 2));
      HealthRatio = BuildingClass::GetHealthRatio((int *)v2); /*0x74384b*/
      v17 = Math::RoundToInt(HealthRatio * 256.0); /*0x743856*/
      sprintf(Source, MEMORY[0x845910], v11, v10, v17, v18, v19, v20, v21, v22, v23, v25, v27, v28, v30, v32); /*0x743868*/
      INIClass::SetString(this, (unsigned __int8 *)MEMORY[0x8458F0], Buffer, Source); /*0x743884*/
      result = i; /*0x743889*/
    }
    ++result; /*0x743893*/
  }
  return result; /*0x7438a4*/
}


// ==== 0x007436E0  ObjectClass::ReadFootINI  this=int  sig=csp ====
int __thiscall sub_7436E0(char *this)
{
  int result; // eax
  int v2; // esi
  int v3; // edi
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // eax
  int v7; // eax
  _DWORD *Value; // eax
  int v9; // edi
  const char *v10; // ebx
  const char *v11; // ebp
  int v12; // eax
  int v13; // eax
  char *v14; // eax
  int v15; // eax
  double HealthRatio; // st7
  int v17; // eax
  int v18; // [esp-3Ch] [ebp-E4h]
  int v19; // [esp-38h] [ebp-E0h]
  int v20; // [esp-34h] [ebp-DCh]
  const char *v21; // [esp-30h] [ebp-D8h]
  const char *v22; // [esp-2Ch] [ebp-D4h]
  int v23; // [esp-28h] [ebp-D0h]
  int v24; // [esp-24h] [ebp-CCh]
  int v25; // [esp-24h] [ebp-CCh]
  int v26; // [esp-20h] [ebp-C8h]
  int v27; // [esp-20h] [ebp-C8h]
  int v28; // [esp-1Ch] [ebp-C4h]
  int v29; // [esp-18h] [ebp-C0h]
  int v30; // [esp-18h] [ebp-C0h]
  int v31; // [esp-14h] [ebp-BCh]
  int v32; // [esp-14h] [ebp-BCh]
  int v33; // [esp+0h] [ebp-A8h]
  char *v34; // [esp+4h] [ebp-A4h]
  int i; // [esp+8h] [ebp-A0h]
  int v37; // [esp+10h] [ebp-98h] BYREF
  _BYTE v38[4]; // [esp+18h] [ebp-90h] BYREF
  char Buffer[4]; // [esp+1Ch] [ebp-8Ch] BYREF
  _BYTE v40[8]; // [esp+20h] [ebp-88h] BYREF
  char Source[128]; // [esp+28h] [ebp-80h] BYREF

  INIClass::ClearSection((int)this, (int)MEMORY[0x8458F0], 0); /*0x7436f2*/
  result = 0; /*0x7436fd*/
  for ( i = 0; result < MEMORY[0x8B4118]; i = result ) /*0x743705*/
  {
    v2 = *((_DWORD *)MEMORY[0x8B410C] + result); /*0x743715*/
    if ( v2 && !*(_BYTE *)(v2 + 129) && *(_BYTE *)(v2 + 144) ) /*0x74372e*/
    {
      sprintf(Buffer, MEMORY[0x817F6C], result); /*0x743747*/
      v3 = *(_DWORD *)(v2 + 1736); /*0x74374c*/
      if ( v3 && (v4 = 0, MEMORY[0x8B4118] > 0) ) /*0x743763*/
      {
        v5 = MEMORY[0x8B410C]; /*0x743765*/
        while ( *v5 != v3 ) /*0x74376d*/
        {
          ++v4; /*0x74376f*/
          ++v5; /*0x743770*/
          if ( v4 >= MEMORY[0x8B4118] ) /*0x743775*/
            goto LABEL_10; /*0x743775*/
        }
        v33 = v4; /*0x743796*/
      }
      else
      {
LABEL_10:
        v33 = -1; /*0x743777*/
      }
      v6 = *(_DWORD *)(v2 + 52); /*0x74377f*/
      if ( v6 && (v7 = *(_DWORD *)(v6 + 36)) != 0 ) /*0x74378b*/
        v34 = (char *)(v7 + 36); /*0x743790*/
      else
        v34 = MEMORY[0x817F64]; /*0x74379c*/
      Value = ProgressTimer::GetValue((_WORD *)(v2 + 904), &v37); /*0x7437af*/
      v31 = *(unsigned __int8 *)(v2 + 1058); /*0x7437d0*/
      v29 = *(unsigned __int8 *)(v2 + 1057); /*0x7437df*/
      v26 = *(unsigned __int8 *)(v2 + 140); /*0x7437eb*/
      v24 = *(_DWORD *)(v2 + 532); /*0x7437ee*/
      v9 = (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1); /*0x7437f5*/
      v10 = (const char *)(*(_DWORD *)(v2 + 1732) + 36); /*0x7437fb*/
      v11 = (const char *)(*(_DWORD *)(v2 + 540) + 90100); /*0x7437fe*/
      FootClass::GetField((float *)(v2 + 336)); /*0x743804*/
      v13 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)v2 + 388))(v2, v34, v12); /*0x743813*/
      v14 = FromNameIndex(v13); /*0x74381b*/
      v15 = (*(int (__thiscall **)(int, _BYTE *, int, char *, int, int, int, int, int))(*(_DWORD *)v2 + 440))( /*0x74382b*/
              v2,
              v40,
              v9,
              v14,
              v24,
              v26,
              v33,
              v29,
              v31);
      v18 = *(__int16 *)(*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v2 + 440))( /*0x743848*/
                          v2,
                          v38,
                          *(__int16 *)(v15 + 2));
      HealthRatio = BuildingClass::GetHealthRatio((int *)v2); /*0x74384b*/
      v17 = Math::RoundToInt(HealthRatio * 256.0); /*0x743856*/
      sprintf(Source, MEMORY[0x845910], v11, v10, v17, v18, v19, v20, v21, v22, v23, v25, v27, v28, v30, v32); /*0x743868*/
      INIClass::SetString(this, (unsigned __int8 *)MEMORY[0x8458F0], Buffer, Source); /*0x743884*/
      result = i; /*0x743889*/
    }
    ++result; /*0x743893*/
  }
  return result; /*0x7438a4*/
}


// ==== 0x007438F0  UnitClass::CanCrushTarget  this=TechnoClass  sig=csp ====
bool __thiscall UnitClass::CanCrushTarget(int this, TechnoClass *aP1)
{
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  double v5; // st7
  int v6; // ecx
  bool result; // al
  int v8; // [esp+20h] [ebp-20h]
  int v9; // [esp+24h] [ebp-1Ch]
  _BYTE v10[12]; // [esp+28h] [ebp-18h] BYREF
  _BYTE v11[12]; // [esp+34h] [ebp-Ch] BYREF

  result = (*(_BYTE *)(*(_DWORD *)(this + 1732) + 3368) || TechnoClass::HasVoiceResponse((TechnoClass *)this, 17)) /*0x743a30*/
        && aP1
        && ObjectClass::IsCrushable(aP1, (AbstractClass *)this)
        && (v3 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, _BYTE *))(*(_DWORD *)aP1->__pad_0 + 72))(aP1, v10),
            v4 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(this->q048)(this, v11),
            v8 = v4[1] - v3[1],
            v9 = v4[2] - v3[2],
            v5 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                               (double)(*v4 - *v3) * (double)(*v4 - *v3)
                                             + (double)v9 * (double)v9
                                             + (double)v8 * (double)v8)),
            (int)Math::RoundToInt(v5) <= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5928))
        && (!(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540))
         || *(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6123)
         || *(_BYTE *)(*(_DWORD *)(this + 1732) + 3373))
        && (v6 = *(_DWORD *)(this + 540), *(_DWORD *)(v6 + 388) != 2)
        && ((unsigned __int8)House::IsCurrentPlayer((#375 *)v6)
         || *(_DWORD *)(*(_DWORD *)(this + 540) + 588) >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5192))
        && (*(unsigned __int8 (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)aP1->__pad_0 + 200))(
             aP1,
             *(_DWORD *)(this + 540)) == 0;
  return result; /*0x743a2e*/
}


// ==== 0x00743A50  UnitClass::Scatter  this=TechnoClass  sig=csp ====
int __thiscall UnitClass::Scatter(_DWORD *this, int *a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  int v6; // eax
  _DWORD *v7; // ebx
  int v8; // eax
  int *v9; // esi
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // esi
  void *v13; // eax
  double v14; // st7
  char v15; // al
  char v16; // di
  unsigned int v17; // esi
  int v18; // edx
  int v19; // edi
  _DWORD *v20; // eax
  char *v21; // esi
  int v22; // esi
  int v23; // eax
  char v24; // si
  int v25; // esi
  int v26; // ecx
  __int16 v27; // ax
  void *v28; // edi
  int v29; // ebx
  int LandHeight; // eax
  int v31; // kr04_4
  _DWORD *v32; // eax
  unsigned __int16 v33; // ax
  int v34; // [esp+44h] [ebp-48h] BYREF
  unsigned int v35; // [esp+48h] [ebp-44h] BYREF
  int *v36; // [esp+4Ch] [ebp-40h] BYREF
  int v37; // [esp+50h] [ebp-3Ch]
  unsigned int v38; // [esp+54h] [ebp-38h] BYREF
  int v39; // [esp+58h] [ebp-34h] BYREF
  int v40; // [esp+5Ch] [ebp-30h] BYREF
  int v41; // [esp+60h] [ebp-2Ch] BYREF
  int v42; // [esp+64h] [ebp-28h] BYREF
  int v43; // [esp+68h] [ebp-24h]
  int v44; // [esp+6Ch] [ebp-20h]
  _BYTE v45[8]; // [esp+70h] [ebp-1Ch] BYREF
  int v46; // [esp+78h] [ebp-14h]
  _DWORD v47[4]; // [esp+7Ch] [ebp-10h] BYREF

  result = (*(int (__thiscall **)(_DWORD *))(*this + 652))(this); /*0x743a5c*/
  if ( !(_BYTE)result ) /*0x743a64*/
    return result; /*0x743a64*/
  v6 = this->q674; /*0x743a6a*/
  v7 = this + 413; /*0x743a70*/
  v34 = 0; /*0x743a78*/
  if ( !v6 ) /*0x743a80*/
    goto LABEL_7; /*0x743a80*/
  v8 = StreamClass::Set2(&v34, this + 413); /*0x743a87*/
  if ( v8 < 0 && v8 != -2147467262 ) /*0x743a95*/
    WinAPI::Wrapper(v8); /*0x743a98*/
  if ( !v34 ) /*0x743aa3*/
LABEL_7:
    WinAPI::Wrapper(-2147467261); /*0x743aaa*/
  (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v34 + 12))(v34, v47); /*0x743abb*/
  if ( !memcmp(v47, &g_CLSID_HoverLocomotion, 0x10u) ) /*0x743ad0*/
    goto LABEL_66; /*0x743ad0*/
  if ( !MissionClass::GetMissionControl(this)[9] && !(_BYTE)a3 ) /*0x743aea*/
  {
    result = v34; /*0x743aec*/
    if ( v34 ) /*0x743af2*/
      return (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34); /*0x743af2*/
    return result; /*0x743af2*/
  }
  if ( TimerClass::Active((int)(this + 226)) ) /*0x743b10*/
    goto LABEL_66; /*0x743b17*/
  if ( *(this + 361) && !(_BYTE)a4 ) /*0x743b2d*/
  {
    result = v34; /*0x743b2f*/
    if ( v34 ) /*0x743b35*/
      return (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34); /*0x743b35*/
    return result; /*0x743b35*/
  }
  if ( *((_BYTE *)this + 1760) || *((_BYTE *)this + 1761) || *((_BYTE *)this + 1762) ) /*0x743b67*/
  {
    result = v34; /*0x74408e*/
    if ( v34 ) /*0x744094*/
      return (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34); /*0x744094*/
    return result; /*0x744094*/
  }
  if ( !*v7 ) /*0x743b75*/
    WinAPI::Wrapper(-2147467261); /*0x743b7f*/
  if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*v7 + 96))(*v7) ) /*0x743b89*/
  {
    result = v34; /*0x743b90*/
    if ( v34 ) /*0x743b96*/
      return (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34); /*0x743b96*/
    return result; /*0x743b96*/
  }
  v9 = a2; /*0x743bac*/
  if ( *a2 == dword_A8ED54[145573] && a2[1] == dword_A8ED54[145574] && a2[2] == dword_A8ED54[145575] ) /*0x743bda*/
  {
    a3 = 0; /*0x743be6*/
    v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*this + 76))(this, v45, 0); /*0x743bff*/
    v11 = (int)v10; /*0x743c02*/
    LOWORD(a4) = *v10 / 256; /*0x743c16*/
    LOBYTE(v11) = *((_BYTE *)this + 140); /*0x743c25*/
    HIWORD(a4) = v10[1] / 256; /*0x743c30*/
    v39 = a4; /*0x743c3d*/
    a2 = (int *)*LayerClass::Pathfinding_Find( /*0x743c79*/
                   MEMORY[0x87F7E8],
                   (int)&v38,
                   &v38,
                   (__int16 *)&v39,
                   *(_DWORD *)(this->q6C4 + 1660),
                   -1,
                   0,
                   v11,
                   1,
                   1,
                   0,
                   1,
                   0,
                   1,
                   (__int16 *)&a3,
                   0,
                   0);
    if ( a2 != (int *)dword_A8ED54[145561] ) /*0x743c7d*/
    {
      v12 = *this; /*0x743c91*/
      v13 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&a2); /*0x743c9b*/
      goto LABEL_65; /*0x743c9b*/
    }
    goto LABEL_66; /*0x743c7d*/
  }
  if ( MissionClass::GetMissionControl(this)[7] ) /*0x743ca7*/
  {
    result = v34; /*0x743cae*/
    if ( v34 ) /*0x743cb4*/
      return (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34); /*0x743cb4*/
    return result; /*0x743cb4*/
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) == 1 && *((_BYTE *)this + 1745) /*0x743d33*/
    || *(this + 361) && (!(_BYTE)a4 || *((_BYTE *)this + 1711))
    || this->q2B4 && !(_BYTE)a3 && Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 1, 4) != 1 )
  {
    goto LABEL_66; /*0x743d33*/
  }
  a4 = *v9; /*0x743d43*/
  if ( a4 == dword_A8ED54[145573] && v9[1] == dword_A8ED54[145574] && v9[2] == dword_A8ED54[145575] ) /*0x743d60*/
  {
    v17 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, &v40) >> 12) + 1) >> 1) & 7; /*0x743dfc*/
    v16 = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 2) + v17 - 1; /*0x743e04*/
  }
  else
  {
    v42 = *(this + 39); /*0x743d70*/
    v43 = this->locationY; /*0x743d7b*/
    v44 = this->locationZ; /*0x743d86*/
    v14 = Math::CalcAngle((double)v9[1] - (double)v43, (double)v42 - (double)(int)a4); /*0x743d98*/
    LOWORD(a4) = Math::RoundToInt((v14 - 1.570796326794897) * -10430.06004058427); /*0x743dba*/
    v15 = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 2); /*0x743dc5*/
    v16 = v15 + (((a4 >> 12) + 1) >> 1) - 1; /*0x743dd4*/
  }
  v18 = *this; /*0x743e08*/
  v19 = v16 & 7; /*0x743e0f*/
  v37 = v19; /*0x743e16*/
  a2 = 0; /*0x743e1a*/
  a3 = 0; /*0x743e24*/
  v20 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(v18 + 76))(this, v45, 0); /*0x743e2e*/
  LOWORD(a4) = *v20 / 256; /*0x743e41*/
  HIWORD(a4) = v20[1] / 256; /*0x743e59*/
  v35 = a4; /*0x743e62*/
  v21 = (char *)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v35); /*0x743e71*/
  v22 = v21[283] + (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, 0) != 0 ? 4 : 0;
  (*(void (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*this + 76))(this, v45, 0); /*0x743ea1*/
  v23 = v22 * dword_A8ED54[145625]; /*0x743ea9*/
  v24 = 0; /*0x743eac*/
  v46 = v23; /*0x743eae*/
  v39 = 0; /*0x743eb2*/
  while ( 1 ) /*0x743ec3*/
  {
    v25 = ((_BYTE)v19 + v24) & 7; /*0x743ec3*/
    v26 = v25 & 7; /*0x743ec8*/
    v27 = HIWORD(MEMORY[0x87F7E8][v26 + 32680]); /*0x743eda*/
    LOWORD(v38) = LOWORD(MEMORY[0x87F7E8][v26 + 32680]) + v35; /*0x743ee2*/
    HIWORD(v38) = HIWORD(v35) + v27; /*0x743ef1*/
    a4 = v38; /*0x743efa*/
    v28 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&a4); /*0x743f08*/
    if ( !LayerClass::IsWithinUsableArea(MEMORY[0x87F7E8], (__int16 *)&a4, 1) ) /*0x743f16*/
      goto LABEL_56; /*0x743f16*/
    v29 = *this; /*0x743f23*/
    LandHeight = ObjectClass::GetLandHeight(this); /*0x743f2c*/
    if ( (*(int (__thiscall **)(_DWORD *, void *, int, int, _DWORD, int))(v29 + 428))(this, v28, v25, LandHeight, 0, 1) ) /*0x743f36*/
      goto LABEL_56; /*0x743f3e*/
    v31 = dword_A8ED54[145561]; /*0x743f53*/
    if ( a2 == (int *)dword_A8ED54[145561] ) /*0x743f5a*/
      a2 = (int *)a4; /*0x743f63*/
    if ( !dword_A8ED54[145561] ) /*0x743f6a*/
      break; /*0x743f6a*/
LABEL_57:
    v24 = ++v39; /*0x743ff9*/
    if ( v39 >= 8 ) /*0x744005*/
      goto LABEL_60; /*0x744005*/
    LOBYTE(v19) = v37; /*0x743eb8*/
  }
  v43 = (SHIWORD(a4) << 8) + 128; /*0x743f94*/
  v42 = ((__int16)a4 << 8) + 128; /*0x743fa0*/
  v44 = v46; /*0x743fac*/
  v32 = Terrain::ClimbCheck(&v41, &v42); /*0x743fb8*/
  if ( a4 != *v32 || (*((_DWORD *)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&a4) + 80) & 0x100) != 0 ) /*0x743fea*/
  {
LABEL_56:
    v31 = dword_A8ED54[145561]; /*0x743fec*/
    goto LABEL_57; /*0x743ff2*/
  }
  a3 = a4; /*0x744018*/
  v31 = dword_A8ED54[145561]; /*0x74401c*/
LABEL_60:
  v33 = a3; /*0x744022*/
  v36 = (int *)a3; /*0x744029*/
  if ( (_WORD)a3 != (_WORD)v31 ) /*0x74402d*/
    goto LABEL_64; /*0x74402d*/
  if ( HIWORD(a3) == HIWORD(v31) ) /*0x744034*/
  {
    v33 = (unsigned __int16)a2; /*0x744036*/
    v36 = a2; /*0x74403a*/
  }
  if ( __PAIR32__(HIWORD(v36), v33) != v31 ) /*0x744041*/
  {
LABEL_64:
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 2, 0); /*0x744053*/
    v12 = *this; /*0x744059*/
    v13 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v36); /*0x744068*/
LABEL_65:
    (*(void (__thiscall **)(_DWORD *, void *, int))(v12 + 1152))(this, v13, 1); /*0x74406d*/
  }
LABEL_66:
  result = v34; /*0x744076*/
  if ( v34 ) /*0x74407c*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34); /*0x744096*/
  return result; /*0x743afe*/
}


// ==== 0x007440B0  TechnoClass::ReturnCapturedFlag  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::sub_7440B0(int this)
{
  int v2; // eax
  int **v3; // edi
  __int16 *v4; // eax
  _BYTE v6[4]; // [esp+4h] [ebp-4h] BYREF

  if ( !(unsigned __int8)TechnoClass::CleanupDirection((_BYTE *)this) ) /*0x7440b4*/
    return 0; /*0x7440fb*/
  v2 = *(_DWORD *)(this + 1740); /*0x7440bd*/
  if ( v2 != -1 ) /*0x7440c6*/
  {
    v3 = (int **)((char *)HouseClass_Array + 4 * v2); /*0x7440d3*/
    v4 = (__int16 *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 440))(this, v6); /*0x7440dd*/
    HouseClass::DroppedFlag(*v3, v4, 0); /*0x7440e6*/
    *(_DWORD *)(this + 1740) = -1; /*0x7440eb*/
  }
  return 1; /*0x7440f8*/
}


// ==== 0x00744100  TechnoClass::SelectAITarget  this=TechnoClass  sig=csp ====
int __thiscall sub_744100(_DWORD *this)
{
  char *MissionControl; // eax
  int v3; // esi

  if ( !this->mindControlledBy_a_unit /*0x744129*/
    || this->missionStartTime + *((_DWORD *)MEMORY[0x8871E0] + 1508) >= (int)MEMORY[0xA8ED84]
    || !(unsigned __int8)SlaveManagerClass::ShouldWakeUpNow() )
  {
    return FootClass::FindAITarget(this); /*0x74416e*/
  }
  BuildingClass::InitBuildLimit(this->mindControlledBy_a_unit); /*0x744138*/
  MissionControl = MissionClass::GetMissionControl(this); /*0x74413f*/
  v3 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x744152*/
  return v3 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x74416a*/
}


// ==== 0x00744180  TechnoClass::AreBuildingFlagsClear  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::sub_744180(_BYTE *this)
{
  _BYTE *v1; // esi

  v1 = this + 848; /*0x744181*/
  return !Window::IsVisible(this + 848) && !BuildingClass::CheckFlag24(v1) && !BuildingClass::CheckPowerFlags(v1); /*0x7441aa*/
}


// ==== 0x007441B0  TechnoClass::MarkCellImpassable  this=TechnoClass  sig=csp ====
int __stdcall TechnoClass::MarkCellImpassable(IUnknown *aP0)
{
  _DWORD *v1; // edi
  int result; // eax

  v1 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], aP0); /*0x7441c7*/
  if ( unk_B1D0AC + Cell::GetGroundHeight(aP0) <= aP0->field_8 && (v1[80] & 0x100) != 0 ) /*0x7441e6*/
  {
    result = v1[74]; /*0x7441e8*/
    LOBYTE(result) = result | 0x20; /*0x7441ee*/
    v1[74] = result; /*0x7441f0*/
  }
  else
  {
    result = v1[73]; /*0x7441fb*/
    LOBYTE(result) = result | 0x20; /*0x744201*/
    v1[73] = result; /*0x744203*/
  }
  return result; /*0x7441f6*/
}


// ==== 0x00744210  TechnoClass::ClearCellImpassable  this=TechnoClass  sig=csp ====
char __stdcall TechnoClass::ClearCellImpassable(IUnknown *aP0)
{
  _DWORD *v1; // edi
  int v2; // eax

  v1 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], aP0); /*0x744227*/
  if ( unk_B1D0AC + Cell::GetGroundHeight(aP0) > aP0->field_8 ) /*0x74423b*/
  {
    v2 = v1[73]; /*0x744250*/
    LOBYTE(v2) = v2 & 0xDF; /*0x744256*/
    v1[73] = v2; /*0x744258*/
  }
  else
  {
    v2 = v1[74]; /*0x74423d*/
    LOBYTE(v2) = v2 & 0xDF; /*0x744243*/
    v1[74] = v2; /*0x744245*/
  }
  return v2; /*0x74424b*/
}


// ==== 0x00744270  TechnoClass::CanBeTargeted  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::sub_744270(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // edi
  int v4; // esi
  _DWORD *v6; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  _DWORD v14[2]; // [esp+14h] [ebp-Ch] BYREF
  int v15; // [esp+1Ch] [ebp-4h]

  v2 = this->currentMission; /*0x744277*/
  if ( v2 == 6 || v2 == 21 || *((_BYTE *)this + 1761) || *((_BYTE *)this + 1762) || *((_BYTE *)this + 1745) ) /*0x7442ab*/
    return 0; /*0x7442ab*/
  if ( this->queuedMission != 7 ) /*0x7442c0*/
  {
    if ( !this->q674 ) /*0x7442c2*/
      WinAPI::Wrapper(-2147467261); /*0x7442d1*/
    if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->q674 + 128))(this->q674) /*0x74431f*/
      && (*(int (__thiscall **)(_DWORD *))(*this + 456))(this) >= 0
      && (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) != 5
      && ((*(int (__thiscall **)(_DWORD *))(*this + 388))(this) != 1 || this->q2B4)
      && !*((_BYTE *)this + 184) )
    {
      return 0; /*0x74431f*/
    }
  }
  if ( !Flag::CheckNone((_BYTE *)this + 848) ) /*0x74432f*/
    return 0; /*0x744336*/
  v3 = (_DWORD *)Array::Get(this, 0); /*0x744341*/
  if ( v3 ) /*0x744345*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3) == 6 ) /*0x744351*/
    {
      if ( *(_BYTE *)(v3[328] + 5821) ) /*0x74435d*/
      {
        v4 = this->queuedMission; /*0x74436b*/
        if ( v4 != 2 && v4 != 7 ) /*0x74437d*/
          return 0; /*0x74438a*/
      }
    }
  }
  else
  {
    v6 = this + 39; /*0x74438b*/
    v14[0] = *v6; /*0x744395*/
    v14[1] = v6[1]; /*0x7443a1*/
    v15 = v6[2]; /*0x7443ad*/
    v7 = Coord::To_Cell(&MEMORY[0x87F7E8], v14); /*0x7443b1*/
    v8 = Cell::IsBridge(v7); /*0x7443b8*/
    if ( v8 ) /*0x7443bf*/
    {
      if ( *(_BYTE *)(v8[328] + 5821) ) /*0x7443cb*/
      {
        v9 = v8 + 39; /*0x7443de*/
        v10 = v8[39]; /*0x7443e0*/
        v11 = v9[1]; /*0x7443e2*/
        v15 = v9[2]; /*0x7443e8*/
        LOWORD(v14[0]) = v10 / 256; /*0x7443f8*/
        v12 = v11; /*0x7443fd*/
        v13 = v6[1]; /*0x744406*/
        HIWORD(v14[0]) = v12 / 256; /*0x744411*/
        if ( (unsigned __int16)(*v6 / 256) == LOWORD(v14[0]) && (unsigned __int16)(v13 / 256) - HIWORD(v14[0]) == 1 ) /*0x74445d*/
          return 0; /*0x74445d*/
      }
    }
  }
  return 1; /*0x744383*/
}


// ==== 0x00744470  UnitClass::LoadFromStream  this=UnitClass  sig=csp ====
int __stdcall UnitClass::LoadFromStream(int a1, int pStm)
{
  _DWORD *v2; // esi
  int v3; // ebx
  char *v4; // eax
  int v5; // eax
  int v6; // ecx
  int i; // eax
  _DWORD *v8; // eax
  int result; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // edi
  int v13; // eax

  v2 = (_DWORD *)a1; /*0x744472*/
  v3 = a1 + 4; /*0x74447a*/
  a1 = (*(int (__stdcall **)(int))(*(_DWORD *)(a1 + 4) + 16))(a1 + 4); /*0x74448b*/
  v4 = BuildingTypeClass::Dequeue((char **)&dword_A8ED54[130747], &a1); /*0x74448f*/
  if ( v4 ) /*0x744496*/
  {
    v5 = (int)&v4[-dword_A8ED54[130747]] >> 3; /*0x74449e*/
    if ( v5 != -1 ) /*0x7444a4*/
    {
      v6 = v5 + 1; /*0x7444a6*/
      for ( i = dword_A8ED54[130748]; v6 < dword_A8ED54[130748]; i = dword_A8ED54[130748] ) /*0x7444b0*/
      {
        v8 = (_DWORD *)(dword_A8ED54[130747] + 8 * v6++); /*0x7444b8*/
        *(v8 - 2) = *v8; /*0x7444be*/
        *(v8 - 1) = v8[1]; /*0x7444c4*/
      }
      dword_A8ED54[130748] = i - 1; /*0x7444d9*/
      *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748]) = 0; /*0x7444de*/
      *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748] + 4) = 0; /*0x7444ee*/
      dword_A8ED54[130751] = 0; /*0x7444f2*/
    }
  }
  result = ObjectClass::LoadFromStream_Common((int)v2, pStm); /*0x7444fe*/
  if ( result >= 0 ) /*0x744505*/
  {
    v10 = v2[413]; /*0x74450b*/
    if ( v2 ) /*0x744513*/
    {
      FootClass::PostLoadInit(v2, (int)&a1); /*0x74451c*/
      *v2 = &UnitClass::`vftable'; /*0x744521*/
      *(_DWORD *)v3 = &UnitClass::`vftable'; /*0x744527*/
      v2[2] = &UnitClass::`vftable'; /*0x74452d*/
      v2[3] = &off_7F5C44; /*0x744534*/
    }
    v11 = v2[413]; /*0x74453c*/
    if ( v11 != v10 ) /*0x744544*/
    {
      v2[413] = v10; /*0x744548*/
      if ( v10 ) /*0x74454e*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x744553*/
      if ( v11 ) /*0x744558*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x74455e*/
    }
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x744564*/
    v12 = (*(int (__stdcall **)(int))(*(_DWORD *)v3 + 16))(v3); /*0x744573*/
    v13 = dword_A8ED54[130749]; /*0x744575*/
    if ( dword_A8ED54[130748] + 1 <= dword_A8ED54[130749] ) /*0x74457e*/
      goto LABEL_18; /*0x74457e*/
    if ( !dword_A8ED54[130749] ) /*0x744582*/
      v13 = 10; /*0x744584*/
    if ( BuildingTypeClass::Enqueue((int)&dword_A8ED54[130747], v13) ) /*0x74458f*/
    {
LABEL_18:
      *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748]) = v12; /*0x7445a3*/
      *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748] + 4) = v2; /*0x7445b1*/
      LOBYTE(dword_A8ED54[130750]) = 0; /*0x7445bb*/
      ++dword_A8ED54[130748]; /*0x7445c2*/
    }
    ObjectPtr::RegisterForTracking((int)&dword_A8ED54[128239], v2 + 433); /*0x7445d3*/
    ObjectPtr::RegisterForTracking((int)&dword_A8ED54[128239], v2 + 434); /*0x7445e4*/
    v2[439] = 0; /*0x7445eb*/
    return 0; /*0x7445e9*/
  }
  return result; /*0x7445f1*/
}


// ==== 0x00744600  UnitClass::Write  this=UnitClass  sig=csp ====
HRESULT __stdcall C07F5C70::Write(IPersistStream *a0, LPPERSISTSTREAM pPStm, FootClass *aP2)
{
  _DWORD *v3; // ecx

  v3 = (_DWORD *)a0[439]; /*0x744605*/
  if ( v3 ) /*0x74460d*/
  {
    UnitClass::updateHarvesting(v3); /*0x74460f*/
    a0[439] = 0; /*0x744614*/
  }
  return ObjectClass::SaveToStream_Common(a0, (FootClass *)pPStm, (struct IPersistStreamVtbl *)aP2); /*0x74462e*/
}


// ==== 0x00744640  UnitClass::PowerDrainUpdate  this=UnitClass  sig=csp ====
int __thiscall UnitClass_PowerDrainUpdate(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx

  FootClass::BeginPowerUpdate(a2); /*0x744649*/
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1732) + 44))(*(_DWORD *)(this + 1732)); /*0x744656*/
  Power::TimerProcess(v3); /*0x74465c*/
  v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 1732) + 4) + 16))(*(_DWORD *)(this + 1732) + 4); /*0x74466d*/
  Power::TimerProcess(v4); /*0x744673*/
  v5 = *(_DWORD *)(this + 1736); /*0x744678*/
  if ( v5 ) /*0x744680*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x744689*/
    Power::TimerProcess(v6); /*0x74468f*/
  }
  Power::TimerProcess(*(_DWORD *)(this + 1740)); /*0x74469d*/
  LOBYTE(v7) = *(_BYTE *)(this + 1744); /*0x7446a2*/
  Power::FlagProcess(a2, v7); /*0x7446ab*/
  LOBYTE(v8) = *(_BYTE *)(this + 1745); /*0x7446b0*/
  v9 = Power::FlagProcess(a2, v8); /*0x7446b9*/
  LOBYTE(v9) = *(_BYTE *)(this + 1746); /*0x7446be*/
  Power::FlagProcess(a2, v9); /*0x7446c7*/
  LOBYTE(v10) = *(_BYTE *)(this + 1671); /*0x7446cc*/
  return Power::FlagProcess(a2, v10); /*0x7446da*/
}


// ==== 0x007446E0  UnitClass::HandleTargetDestroyed  this=UnitClass  sig=csp ====
int __thiscall UnitClass::HandleTargetDestroyed(int *this, int *a1, UnitTypeClass *aP2)
{
  AbstractClass *result; // eax

  FootClass::HandleTargetDestroyed(this, (TechnoTypeClass *)a1, (TechnoTypeClass *)aP2); /*0x7446ee*/
  result = 0; /*0x7446f9*/
  if ( (int *)*(this + 434) == a1 ) /*0x7446fd*/
    *(this + 434) = 0; /*0x7446ff*/
  if ( (int *)*(this + 433) == a1 ) /*0x74470b*/
    *(this + 433) = 0; /*0x74470d*/
  return (int)result->__pad_0; /*0x744713*/
}


// ==== 0x00744720  TechnoClass::NotifyTeamOnDestruction  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::NotifyTeamOnDestruction(int this, int a2)
{
  _DWORD *v3; // ecx
  void **v4; // ecx
  void **v5; // ecx

  v3 = *(_DWORD **)(this + 52); /*0x744728*/
  if ( v3 && (*(_DWORD *)(this + 824) == -1 || !TechnoClass::HasAnyMission(v3)) ) /*0x744738*/
  {
    if ( a2 ) /*0x744743*/
      TeamClass::Update_0( /*0x744755*/
        *(void ***)(this + 52),
        7,
        (AbstractClass *)this,
        *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[65572],
        0,
        0);
    v4 = *(void ***)(this + 52); /*0x74475a*/
    if ( v4 ) /*0x74475f*/
      TeamClass::Update_0(v4, 48, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[65572], 0, 0); /*0x74476f*/
    v5 = *(void ***)(this + 52); /*0x744774*/
    if ( v5 ) /*0x744779*/
      TeamClass::Update_0(v5, 29, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[65572], 0, 0); /*0x744788*/
  }
  return TechnoClass::RegisterKill((#377 *)this); /*0x744795*/
}


// ==== 0x007447A0  InfantryClass::ScanTarget_0  this=InfantryClass  sig=ida-proto ====
// attributes: thunk
int __fastcall InfantryClass::ScanTarget_0(int *a1)
{
  return InfantryClass::ScanTarget(a1);
}


// ==== 0x007447B0  BuildingClass::FindPlacementCells  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass_FindPlacementCells(_DWORD *this, int a2)
{
  _DWORD **v2; // edi
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  void *v5; // eax
  void *v6; // ebp
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  char IsBuildableAdvanced; // al
  int v10; // eax
  int v11; // eax
  int v12; // eax
  void *v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  __int16 *v18; // eax
  void *v19; // eax
  void *v20; // edi
  int v21; // eax
  void *v22; // edi
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  void *v26; // edi
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  int result; // eax
  int v37; // edx
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  __int16 *v46; // ecx
  int v47; // eax
  void *v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  void *v52; // edi
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // edx
  int v57; // eax
  void *v58; // edi
  int v59; // eax
  int v60; // ecx
  int v61; // eax
  int v62; // edx
  int v63; // eax
  int v64; // eax
  int TileIndex; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  void *v72; // edi
  int v73; // eax
  int v74; // ecx
  int v75; // eax
  int v76; // edx
  int v77; // eax
  void *v78; // edi
  int v79; // eax
  int v80; // ecx
  int v81; // eax
  int v82; // edx
  int v83; // eax
  int v84; // eax
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // eax
  int v89; // eax
  void *v90; // edi
  int v91; // eax
  int v92; // ecx
  int v93; // eax
  int v94; // edx
  int v95; // eax
  int v96; // eax
  void *v97; // edi
  int v98; // eax
  int v99; // ecx
  int v100; // eax
  int v101; // edx
  int v102; // eax
  int v103; // eax
  char v104; // [esp+12h] [ebp-2Eh]
  char v105; // [esp+13h] [ebp-2Dh]
  int v106; // [esp+14h] [ebp-2Ch] BYREF
  int v107; // [esp+18h] [ebp-28h] BYREF
  _DWORD **v108; // [esp+1Ch] [ebp-24h] BYREF
  int v109; // [esp+20h] [ebp-20h] BYREF
  int v110; // [esp+24h] [ebp-1Ch] BYREF
  int v111; // [esp+28h] [ebp-18h] BYREF
  int v112; // [esp+2Ch] [ebp-14h] BYREF
  int v113; // [esp+30h] [ebp-10h] BYREF
  _DWORD v114[3]; // [esp+34h] [ebp-Ch] BYREF

  v2 = (_DWORD **)this; /*0x7447b7*/
  v108 = (_DWORD **)this; /*0x7447b9*/
  v3 = this + 354; /*0x7447c3*/
  (*(void (__thiscall **)(_DWORD *))(*(this + 354) + 12))(this + 354); /*0x7447cb*/
  v105 = ((int (__thiscall *)(_DWORD **, _DWORD))(*v2)[47])(v2, 0); /*0x7447df*/
  v4 = (_DWORD *)((int (__thiscall *)(_DWORD **, _DWORD *, _DWORD))(*v2)[19])(v2, v114, 0); /*0x7447e9*/
  LOWORD(v111) = *v4 / 256; /*0x7447fc*/
  HIWORD(v111) = v4[1] / 256; /*0x744815*/
  v106 = v111; /*0x744822*/
  v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v106); /*0x744827*/
  if ( Cell::IsBuildableAdvanced((int)v5) || (v104 = 0, ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0) ) /*0x744847*/
    v104 = 1; /*0x744849*/
  v6 = (void *)a2; /*0x74484e*/
  v7 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 72))(a2, v114); /*0x74485c*/
  LOWORD(a2) = *v7 / 256; /*0x74486f*/
  HIWORD(a2) = v7[1] / 256; /*0x744888*/
  v107 = a2; /*0x744895*/
  v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v107); /*0x74489a*/
  LOBYTE(a2) = BYTE1(v8[80]) & 1; /*0x7448ad*/
  IsBuildableAdvanced = Cell::IsBuildableAdvanced((int)v8); /*0x7448b1*/
  if ( !v105 ) /*0x7448ba*/
  {
    if ( v104 ) /*0x745356*/
    {
      if ( (_BYTE)a2 ) /*0x74535e*/
      {
        a2 = *Pathfinding::SelectRegionPath(&v113, (__int16 *)&v107, (int)&v107); /*0x74538b*/
        if ( !BuildingTypeClass::IsPlacementValid(v2, (__int16 *)&v106, (__int16 *)&a2) ) /*0x745396*/
        {
          if ( a2 != v106 ) /*0x745551*/
          {
            v20 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x745575*/
            v21 = v3[2]; /*0x745577*/
            if ( v3[4] < v21 ) /*0x74557c*/
              goto LABEL_200; /*0x74557c*/
            if ( *((_BYTE *)v3 + 13) ) /*0x745582*/
              goto LABEL_70; /*0x745585*/
LABEL_69:
            if ( v21 ) /*0x744e95*/
              goto LABEL_39; /*0x744e95*/
            goto LABEL_70; /*0x744e95*/
          }
          goto LABEL_40; /*0x745551*/
        }
        v112 = 0; /*0x7453be*/
        TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&a2, 0, 0); /*0x7453c8*/
        v110 = *LayerClass::Pathfinding_Find( /*0x7453ed*/
                  &MEMORY[0x87F7E8],
                  (int)&v113,
                  &v113,
                  (__int16 *)&a2,
                  1,
                  TileIndex,
                  0,
                  0,
                  1,
                  1,
                  0,
                  1,
                  1,
                  1,
                  (__int16 *)&v112,
                  0,
                  0);
        if ( v110 != MEMORY[0xB1CFB8] ) /*0x7453f1*/
        {
          v46 = (__int16 *)&v110; /*0x745401*/
          goto LABEL_134; /*0x745405*/
        }
        if ( MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&v106, (__int16 *)&v107, 0, 0, 1, 0) ) /*0x74541e*/
        {
          if ( a2 != v106 ) /*0x745431*/
          {
            v46 = (__int16 *)&a2; /*0x745443*/
            goto LABEL_134; /*0x745447*/
          }
          goto LABEL_40; /*0x745431*/
        }
        v112 = 0; /*0x745474*/
        v110 = *LayerClass::Pathfinding_Find( /*0x74548c*/
                  &MEMORY[0x87F7E8],
                  (int)&v112,
                  &v113,
                  (__int16 *)&v107,
                  1,
                  -1,
                  0,
                  0,
                  1,
                  1,
                  0,
                  0,
                  1,
                  1,
                  (__int16 *)&v112,
                  0,
                  0);
        if ( v110 != MEMORY[0xB1CFB8] ) /*0x745490*/
          goto LABEL_77; /*0x745490*/
        v112 = 0; /*0x7454d8*/
        v66 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0); /*0x7454e2*/
        v111 = *LayerClass::Pathfinding_Find( /*0x745507*/
                  &MEMORY[0x87F7E8],
                  (int)&v113,
                  &v113,
                  (__int16 *)&v107,
                  1,
                  v66,
                  0,
                  0,
                  1,
                  1,
                  0,
                  1,
                  0,
                  1,
                  (__int16 *)&v112,
                  0,
                  0);
        if ( v111 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 ) /*0x74552b*/
          return 0; /*0x74552b*/
      }
      else
      {
        if ( IsBuildableAdvanced || !BuildingTypeClass::IsPlacementValid(v2, (__int16 *)&v106, (__int16 *)&v107) ) /*0x7455a4*/
          goto LABEL_40; /*0x7455a4*/
        v112 = 0; /*0x7455d3*/
        v67 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v107, 0, 0); /*0x7455dd*/
        a2 = *LayerClass::Pathfinding_Find( /*0x745602*/
                &MEMORY[0x87F7E8],
                (int)&v113,
                &v113,
                (__int16 *)&v107,
                1,
                v67,
                0,
                0,
                1,
                1,
                0,
                1,
                1,
                1,
                (__int16 *)&v112,
                0,
                0);
        if ( a2 != MEMORY[0xB1CFB8] ) /*0x745606*/
        {
          v46 = (__int16 *)&a2; /*0x745616*/
          goto LABEL_134; /*0x745616*/
        }
        if ( MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&v106, (__int16 *)&v107, 0, 1, 1, 0) ) /*0x745658*/
          goto LABEL_40; /*0x74565f*/
        v112 = 0; /*0x74568d*/
        a2 = *LayerClass::Pathfinding_Find( /*0x7456a5*/
                &MEMORY[0x87F7E8],
                (int)&v112,
                &v113,
                (__int16 *)&v107,
                1,
                -1,
                0,
                0,
                1,
                1,
                0,
                0,
                1,
                1,
                (__int16 *)&v112,
                0,
                0);
        if ( a2 != MEMORY[0xB1CFB8] ) /*0x7456a9*/
        {
          v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x7456c8*/
          goto LABEL_40; /*0x7456ca*/
        }
        v112 = 0; /*0x7456f1*/
        v68 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0); /*0x7456fb*/
        v111 = *LayerClass::Pathfinding_Find( /*0x745720*/
                  &MEMORY[0x87F7E8],
                  (int)&v113,
                  &v113,
                  (__int16 *)&v107,
                  1,
                  v68,
                  0,
                  0,
                  1,
                  1,
                  0,
                  0,
                  0,
                  1,
                  (__int16 *)&v112,
                  0,
                  0);
        if ( v111 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 ) /*0x745744*/
          return 0; /*0x745744*/
      }
LABEL_218:
      v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v111); /*0x745fd5*/
      goto LABEL_40; /*0x745fe6*/
    }
    if ( (_BYTE)a2 ) /*0x745762*/
    {
      a2 = *Pathfinding::SelectRegionPath(&v113, (__int16 *)&v107, (int)&v107); /*0x74578b*/
      if ( !BuildingTypeClass::IsPlacementValid(v2, (__int16 *)&v106, (__int16 *)&a2) ) /*0x74579a*/
      {
        if ( a2 != v106 ) /*0x745af8*/
        {
          v18 = (__int16 *)&a2; /*0x745b0a*/
          goto LABEL_16; /*0x745b0e*/
        }
        goto LABEL_40; /*0x745af8*/
      }
      v112 = 0; /*0x7457c2*/
      v69 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0); /*0x7457cc*/
      v109 = *LayerClass::Pathfinding_Find( /*0x7457eb*/
                &MEMORY[0x87F7E8],
                (int)&v113,
                &v113,
                (__int16 *)&v106,
                1,
                v69,
                0,
                0,
                1,
                1,
                0,
                1,
                1,
                1,
                (__int16 *)&v112,
                0,
                0);
      v112 = 0; /*0x745810*/
      v70 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&a2, 0, 0); /*0x74581a*/
      v71 = *LayerClass::Pathfinding_Find( /*0x74583c*/
               &MEMORY[0x87F7E8],
               (int)&v113,
               &v113,
               (__int16 *)&a2,
               1,
               v70,
               0,
               0,
               1,
               1,
               0,
               1,
               1,
               1,
               (__int16 *)&v112,
               0,
               0);
      v110 = v71; /*0x74584a*/
      if ( v109 != MEMORY[0xB1CFB8] && __PAIR32__(HIWORD(v110), v71) != MEMORY[0xB1CFB8] ) /*0x74585a*/
      {
        v72 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v109); /*0x745875*/
        v73 = v3[2]; /*0x745877*/
        if ( v3[4] < v73 /*0x745896*/
          || (*((_BYTE *)v3 + 13) || !v73)
          && (v74 = v3[5], v74 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v74 + v73, 0) )
        {
          v75 = v3[4]; /*0x74589d*/
          v76 = v3[1]; /*0x7458a0*/
          v3[4] = v75 + 1; /*0x7458a6*/
          *(_DWORD *)(v76 + 4 * v75) = v72; /*0x7458a9*/
        }
        v18 = (__int16 *)&v110; /*0x7458ac*/
        goto LABEL_16; /*0x7458b0*/
      }
      if ( !MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&v106, (__int16 *)&v107, 0, 0, 1, 0) ) /*0x7458d0*/
      {
        if ( v109 == MEMORY[0xB1CFB8] ) /*0x745904*/
        {
          v112 = 0; /*0x745a7f*/
          v84 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0); /*0x745a89*/
          v111 = *LayerClass::Pathfinding_Find( /*0x745aae*/
                    &MEMORY[0x87F7E8],
                    (int)&v113,
                    &v113,
                    (__int16 *)&v107,
                    1,
                    v84,
                    0,
                    0,
                    1,
                    1,
                    0,
                    0,
                    0,
                    1,
                    (__int16 *)&v112,
                    0,
                    0);
          if ( v111 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 ) /*0x745ad2*/
            return 0; /*0x745ad2*/
        }
        else
        {
          v112 = 0; /*0x745940*/
          v77 = *LayerClass::Pathfinding_Find( /*0x74594f*/
                   &MEMORY[0x87F7E8],
                   (int)&v112,
                   &v113,
                   (__int16 *)&v107,
                   1,
                   -1,
                   0,
                   0,
                   1,
                   1,
                   0,
                   0,
                   1,
                   1,
                   (__int16 *)&v112,
                   0,
                   0);
          v110 = v77; /*0x745958*/
          if ( v77 != MEMORY[0xB1CFB8] && v109 != v77 ) /*0x745971*/
          {
            v78 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v109); /*0x74598c*/
            v79 = v3[2]; /*0x74598e*/
            if ( v3[4] < v79 /*0x7459ad*/
              || (*((_BYTE *)v3 + 13) || !v79)
              && (v80 = v3[5], v80 > 0)
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v80 + v79, 0) )
            {
              v81 = v3[4]; /*0x7459b4*/
              v82 = v3[1]; /*0x7459b7*/
              v3[4] = v81 + 1; /*0x7459bd*/
              *(_DWORD *)(v82 + 4 * v81) = v78; /*0x7459c0*/
            }
            goto LABEL_38; /*0x7459c0*/
          }
          v112 = 0; /*0x7459ee*/
          v83 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0); /*0x7459f8*/
          v111 = *LayerClass::Pathfinding_Find( /*0x745a1d*/
                    &MEMORY[0x87F7E8],
                    (int)&v113,
                    &v113,
                    (__int16 *)&v107,
                    1,
                    v83,
                    0,
                    0,
                    1,
                    1,
                    0,
                    0,
                    0,
                    1,
                    (__int16 *)&v112,
                    0,
                    0);
          if ( v111 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 ) /*0x745a41*/
            return 0; /*0x745a41*/
        }
        goto LABEL_218; /*0x745ad2*/
      }
      if ( a2 == v106 ) /*0x7458dc*/
        goto LABEL_40; /*0x7458dc*/
      v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x7458f3*/
    }
    else
    {
      if ( !IsBuildableAdvanced ) /*0x745b15*/
      {
        if ( !BuildingTypeClass::IsPlacementValid(v2, (__int16 *)&v106, (__int16 *)&v107) ) /*0x745c60*/
          goto LABEL_40; /*0x745c60*/
        v112 = 0; /*0x745c8f*/
        v87 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0); /*0x745c99*/
        a2 = *LayerClass::Pathfinding_Find( /*0x745cb8*/
                &MEMORY[0x87F7E8],
                (int)&v113,
                &v113,
                (__int16 *)&v106,
                1,
                v87,
                0,
                0,
                1,
                1,
                0,
                1,
                1,
                1,
                (__int16 *)&v112,
                0,
                0);
        v112 = 0; /*0x745cdd*/
        v88 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v107, 0, 0); /*0x745ce7*/
        v89 = *LayerClass::Pathfinding_Find( /*0x745d09*/
                 &MEMORY[0x87F7E8],
                 (int)&v113,
                 &v113,
                 (__int16 *)&v107,
                 1,
                 v88,
                 0,
                 0,
                 1,
                 1,
                 0,
                 1,
                 1,
                 1,
                 (__int16 *)&v112,
                 0,
                 0);
        v110 = v89; /*0x745d17*/
        if ( a2 != MEMORY[0xB1CFB8] && __PAIR32__(HIWORD(v110), v89) != MEMORY[0xB1CFB8] ) /*0x745d2b*/
        {
          v90 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x745d4a*/
          v91 = v3[2]; /*0x745d4c*/
          if ( v3[4] < v91 /*0x745d6b*/
            || (*((_BYTE *)v3 + 13) || !v91)
            && (v92 = v3[5], v92 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v92 + v91, 0) )
          {
            v93 = v3[4]; /*0x745d72*/
            v94 = v3[1]; /*0x745d75*/
            v3[4] = v93 + 1; /*0x745d7b*/
            *(_DWORD *)(v94 + 4 * v93) = v90; /*0x745d7e*/
          }
          v20 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v110); /*0x745d93*/
          v21 = v3[2]; /*0x745d95*/
          if ( v3[4] < v21 ) /*0x745d9a*/
            goto LABEL_200; /*0x745d9a*/
          if ( !*((_BYTE *)v3 + 13) ) /*0x745d9c*/
          {
LABEL_197:
            if ( v21 ) /*0x745da3*/
              goto LABEL_39; /*0x745da3*/
          }
LABEL_198:
          v45 = v3[5]; /*0x745da9*/
          if ( v45 <= 0 ) /*0x745dae*/
            goto LABEL_39; /*0x745dae*/
LABEL_199:
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v45 + v21, 0) ) /*0x745dbc*/
            goto LABEL_200; /*0x745dc1*/
LABEL_39:
          v2 = v108; /*0x744bcb*/
          goto LABEL_40; /*0x744bcb*/
        }
        if ( MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&v106, (__int16 *)&v107, 0, 1, 1, 0) ) /*0x745df0*/
          goto LABEL_40; /*0x745df7*/
        if ( a2 == MEMORY[0xB1CFB8] ) /*0x745e09*/
        {
          v112 = 0; /*0x745f84*/
          v103 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0); /*0x745f8e*/
          v111 = *LayerClass::Pathfinding_Find( /*0x745fb3*/
                    &MEMORY[0x87F7E8],
                    (int)&v113,
                    &v113,
                    (__int16 *)&v107,
                    1,
                    v103,
                    0,
                    0,
                    1,
                    1,
                    0,
                    0,
                    0,
                    1,
                    (__int16 *)&v112,
                    0,
                    0);
          if ( v111 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 ) /*0x745fd3*/
            return 0; /*0x745fd3*/
        }
        else
        {
          v112 = 0; /*0x745e45*/
          v96 = *LayerClass::Pathfinding_Find( /*0x745e54*/
                   &MEMORY[0x87F7E8],
                   (int)&v112,
                   &v113,
                   (__int16 *)&v107,
                   1,
                   -1,
                   0,
                   0,
                   1,
                   1,
                   0,
                   0,
                   1,
                   1,
                   (__int16 *)&v112,
                   0,
                   0);
          v110 = v96; /*0x745e5d*/
          if ( v96 != MEMORY[0xB1CFB8] && a2 != v96 ) /*0x745e76*/
          {
            v97 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x745e91*/
            v98 = v3[2]; /*0x745e93*/
            if ( v3[4] < v98 /*0x745eb2*/
              || (*((_BYTE *)v3 + 13) || !v98)
              && (v99 = v3[5], v99 > 0)
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v99 + v98, 0) )
            {
              v100 = v3[4]; /*0x745eb9*/
              v101 = v3[1]; /*0x745ebc*/
              v3[4] = v100 + 1; /*0x745ec2*/
              *(_DWORD *)(v101 + 4 * v100) = v97; /*0x745ec5*/
            }
            goto LABEL_38; /*0x745ec5*/
          }
          v112 = 0; /*0x745ef3*/
          v102 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0); /*0x745efd*/
          v111 = *LayerClass::Pathfinding_Find( /*0x745f22*/
                    &MEMORY[0x87F7E8],
                    (int)&v113,
                    &v113,
                    (__int16 *)&v107,
                    1,
                    v102,
                    0,
                    0,
                    1,
                    1,
                    0,
                    0,
                    0,
                    1,
                    (__int16 *)&v112,
                    0,
                    0);
          if ( v111 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 ) /*0x745f46*/
            return 0; /*0x745f46*/
        }
        goto LABEL_218; /*0x745fd3*/
      }
      if ( !BuildingTypeClass::IsPlacementValid(v2, (__int16 *)&v106, (__int16 *)&v107) ) /*0x745b2e*/
        goto LABEL_40; /*0x745b2e*/
      a2 = 0; /*0x745b56*/
      v85 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0); /*0x745b60*/
      v112 = *LayerClass::Pathfinding_Find( /*0x745b85*/
                &MEMORY[0x87F7E8],
                (int)&v113,
                &v113,
                (__int16 *)&v106,
                1,
                v85,
                0,
                0,
                1,
                1,
                0,
                1,
                1,
                1,
                (__int16 *)&a2,
                0,
                0);
      if ( v112 == MEMORY[0xB1CFB8] ) /*0x745b89*/
      {
        if ( MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&v106, (__int16 *)&v107, 0, 0, 0, 0) ) /*0x745bb6*/
          goto LABEL_40; /*0x745bbd*/
        a2 = 0; /*0x745be5*/
        v86 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 0); /*0x745bef*/
        v111 = *LayerClass::Pathfinding_Find( /*0x745c14*/
                  &MEMORY[0x87F7E8],
                  (int)&v113,
                  &v113,
                  (__int16 *)&v107,
                  1,
                  v86,
                  0,
                  0,
                  1,
                  1,
                  0,
                  0,
                  0,
                  1,
                  (__int16 *)&a2,
                  0,
                  0);
        if ( v111 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 ) /*0x745c38*/
          return 0; /*0x745c38*/
        goto LABEL_218; /*0x745c38*/
      }
      v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v112); /*0x745b9e*/
    }
LABEL_17:
    v20 = v19; /*0x744a40*/
    v21 = v3[2]; /*0x744a45*/
    if ( v3[4] >= v21 ) /*0x744a4a*/
    {
      if ( !*((_BYTE *)v3 + 13) ) /*0x744a50*/
        goto LABEL_197; /*0x744a53*/
      goto LABEL_198; /*0x744a53*/
    }
LABEL_200:
    v95 = v3[4]; /*0x745dc7*/
    v3[4] = v95 + 1; /*0x745dcd*/
    *(_DWORD *)(v3[1] + 4 * v95) = v20; /*0x745dd3*/
    goto LABEL_39; /*0x745dd6*/
  }
  if ( (_BYTE)a2 ) /*0x7448c4*/
  {
    a2 = *Pathfinding::SelectRegionPath(&v112, (__int16 *)&v106, (int)&v107); /*0x7448e9*/
    v111 = *Pathfinding::SelectRegionPath(&v112, (__int16 *)&v107, (int)&v107); /*0x744910*/
    if ( !BuildingTypeClass::IsPlacementValid(v2, (__int16 *)&a2, (__int16 *)&v111) ) /*0x74491b*/
    {
      if ( a2 == v106 ) /*0x744d6a*/
        goto LABEL_63; /*0x744d6a*/
      v22 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x744d8a*/
      v41 = v3[2]; /*0x744d8c*/
      if ( v3[4] >= v41 ) /*0x744d91*/
      {
        if ( !*((_BYTE *)v3 + 13) && v41 ) /*0x744d9a*/
          goto LABEL_63; /*0x744d9a*/
        v42 = v3[5]; /*0x744d9c*/
        if ( v42 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v42 + v41, 0) ) /*0x744dab*/
          goto LABEL_63; /*0x744db0*/
      }
LABEL_62:
      v43 = v3[4]; /*0x744db2*/
      v3[4] = v43 + 1; /*0x744db8*/
      *(_DWORD *)(v3[1] + 4 * v43) = v22; /*0x744dbe*/
LABEL_63:
      v18 = (__int16 *)&v111; /*0x744dc1*/
LABEL_16:
      v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v18); /*0x744a35*/
      goto LABEL_17; /*0x744a3b*/
    }
    v112 = 0; /*0x744943*/
    v10 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&a2, 0, 0); /*0x74494d*/
    v109 = *LayerClass::Pathfinding_Find( /*0x74496c*/
              &MEMORY[0x87F7E8],
              (int)&v113,
              &v113,
              (__int16 *)&a2,
              1,
              v10,
              0,
              0,
              1,
              1,
              0,
              1,
              1,
              1,
              (__int16 *)&v112,
              0,
              0);
    v112 = 0; /*0x744991*/
    v11 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&a2, 0, 0); /*0x74499b*/
    v12 = *LayerClass::Pathfinding_Find( /*0x7449bd*/
             &MEMORY[0x87F7E8],
             (int)&v113,
             &v113,
             (__int16 *)&v111,
             1,
             v11,
             0,
             0,
             1,
             1,
             0,
             1,
             1,
             1,
             (__int16 *)&v112,
             0,
             0);
    v110 = v12; /*0x7449cb*/
    if ( v109 != MEMORY[0xB1CFB8] && __PAIR32__(HIWORD(v110), v12) != MEMORY[0xB1CFB8] ) /*0x7449df*/
    {
      v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v109); /*0x7449fa*/
      v14 = v3[2]; /*0x7449fc*/
      if ( v3[4] < v14 /*0x744a1b*/
        || (*((_BYTE *)v3 + 13) || !v14)
        && (v15 = v3[5], v15 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v15 + v14, 0) )
      {
        v16 = v3[4]; /*0x744a22*/
        v17 = v3[1]; /*0x744a25*/
        v3[4] = v16 + 1; /*0x744a2b*/
        *(_DWORD *)(v17 + 4 * v16) = v13; /*0x744a2e*/
      }
      v18 = (__int16 *)&v110; /*0x744a31*/
      goto LABEL_16; /*0x744a31*/
    }
    if ( MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&v106, (__int16 *)&v107, 0, 1, 1, 0) ) /*0x744a73*/
    {
      if ( a2 == v106 ) /*0x744a86*/
        goto LABEL_63; /*0x744a86*/
      v22 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x744aaa*/
      v23 = v3[2]; /*0x744aac*/
      if ( v3[4] >= v23 ) /*0x744ab1*/
      {
        if ( !*((_BYTE *)v3 + 13) && v23 ) /*0x744abe*/
          goto LABEL_63; /*0x744abe*/
        v24 = v3[5]; /*0x744ac4*/
        if ( v24 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v24 + v23, 0) ) /*0x744ad7*/
          goto LABEL_63; /*0x744adc*/
      }
      goto LABEL_62; /*0x744adc*/
    }
    if ( v109 == MEMORY[0xB1CFB8] ) /*0x744af3*/
    {
      v112 = 0; /*0x744cf1*/
      v40 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 1); /*0x744cfb*/
      v108 = (_DWORD **)*LayerClass::Pathfinding_Find( /*0x744d20*/
                           &MEMORY[0x87F7E8],
                           (int)&v113,
                           &v113,
                           (__int16 *)&v107,
                           1,
                           v40,
                           0,
                           1,
                           1,
                           1,
                           0,
                           1,
                           0,
                           1,
                           (__int16 *)&v112,
                           0,
                           0);
      if ( v108 != (_DWORD **)MEMORY[0xB1CFB8] && ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) >= 0 ) /*0x744d44*/
      {
LABEL_52:
        v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v108); /*0x744cb9*/
        goto LABEL_40; /*0x744cca*/
      }
      return 0; /*0x745fee*/
    }
    v112 = 0; /*0x744b2f*/
    v25 = *LayerClass::Pathfinding_Find( /*0x744b3e*/
             &MEMORY[0x87F7E8],
             (int)&v112,
             &v113,
             (__int16 *)&v107,
             1,
             -1,
             0,
             1,
             1,
             1,
             0,
             0,
             1,
             1,
             (__int16 *)&v112,
             0,
             0);
    v110 = v25; /*0x744b47*/
    if ( v25 == MEMORY[0xB1CFB8] || v109 == v25 ) /*0x744b64*/
    {
      v112 = 0; /*0x744c60*/
      v39 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 1); /*0x744c6a*/
      v108 = (_DWORD **)*LayerClass::Pathfinding_Find( /*0x744c8f*/
                           &MEMORY[0x87F7E8],
                           (int)&v113,
                           &v113,
                           (__int16 *)&v107,
                           1,
                           v39,
                           0,
                           1,
                           1,
                           1,
                           0,
                           1,
                           0,
                           1,
                           (__int16 *)&v112,
                           0,
                           0);
      if ( v108 != (_DWORD **)MEMORY[0xB1CFB8] && ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) >= 0 ) /*0x744cb3*/
        goto LABEL_52; /*0x744cb3*/
      return 0; /*0x744cb3*/
    }
    v26 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v109); /*0x744b83*/
    v27 = v3[2]; /*0x744b85*/
    if ( v3[4] < v27 /*0x744ba4*/
      || (*((_BYTE *)v3 + 13) || !v27)
      && (v28 = v3[5], v28 > 0)
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v28 + v27, 0) )
    {
      v29 = v3[4]; /*0x744bab*/
      v30 = v3[1]; /*0x744bae*/
      v3[4] = v29 + 1; /*0x744bb4*/
      *(_DWORD *)(v30 + 4 * v29) = v26; /*0x744bb7*/
    }
LABEL_38:
    v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v110); /*0x744bbe*/
    goto LABEL_39; /*0x744bc9*/
  }
  if ( IsBuildableAdvanced ) /*0x744dd6*/
  {
    a2 = *Pathfinding::SelectRegionPath(&v113, (__int16 *)&v106, (int)&v107); /*0x744df9*/
    if ( BuildingTypeClass::IsPlacementValid(v2, (__int16 *)&a2, (__int16 *)&v107) ) /*0x744dfd*/
    {
      v112 = 0; /*0x744e2c*/
      v44 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&a2, 0, 0); /*0x744e36*/
      v111 = *LayerClass::Pathfinding_Find( /*0x744e5b*/
                &MEMORY[0x87F7E8],
                (int)&v113,
                &v113,
                (__int16 *)&a2,
                1,
                v44,
                0,
                0,
                1,
                1,
                0,
                1,
                1,
                1,
                (__int16 *)&v112,
                0,
                0);
      if ( v111 != MEMORY[0xB1CFB8] ) /*0x744e5f*/
      {
        v20 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v111); /*0x744e81*/
        v21 = v3[2]; /*0x744e83*/
        if ( v3[4] < v21 ) /*0x744e88*/
          goto LABEL_200; /*0x744e88*/
        if ( !*((_BYTE *)v3 + 13) ) /*0x744e8e*/
          goto LABEL_69; /*0x744e91*/
LABEL_70:
        v45 = v3[5]; /*0x744e9b*/
        if ( v45 <= 0 ) /*0x744ea0*/
          goto LABEL_39; /*0x744ea0*/
        goto LABEL_199; /*0x744ea0*/
      }
      if ( MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&v106, (__int16 *)&v107, 0, 1, 0, 0) ) /*0x744ec5*/
      {
        if ( a2 != v106 ) /*0x744ed8*/
        {
          v46 = (__int16 *)&a2; /*0x744eea*/
LABEL_134:
          v48 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v46); /*0x74561a*/
          goto LABEL_135; /*0x745620*/
        }
        goto LABEL_40; /*0x744ed8*/
      }
      v112 = 0; /*0x744f15*/
      v47 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 1); /*0x744f1f*/
      v110 = *LayerClass::Pathfinding_Find( /*0x744f44*/
                &MEMORY[0x87F7E8],
                (int)&v113,
                &v113,
                (__int16 *)&v107,
                1,
                v47,
                0,
                1,
                1,
                1,
                0,
                1,
                0,
                1,
                (__int16 *)&v112,
                0,
                0);
      if ( v110 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 ) /*0x744f68*/
        return 0; /*0x744f68*/
LABEL_77:
      v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v110); /*0x744f6e*/
      goto LABEL_40; /*0x744f7f*/
    }
    if ( a2 == v106 ) /*0x744f8e*/
      goto LABEL_40; /*0x744f8e*/
LABEL_79:
    v48 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x744fa0*/
    goto LABEL_135; /*0x744fa5*/
  }
  a2 = *Pathfinding::SelectRegionPath(&v113, (__int16 *)&v106, (int)&v107); /*0x744fc7*/
  if ( !BuildingTypeClass::IsPlacementValid(v2, (__int16 *)&a2, (__int16 *)&v107) ) /*0x744fd2*/
  {
    if ( a2 == v106 ) /*0x745330*/
      goto LABEL_40; /*0x745330*/
    goto LABEL_79; /*0x745330*/
  }
  v112 = 0; /*0x744ffa*/
  v49 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&a2, 0, 0); /*0x745004*/
  v109 = *LayerClass::Pathfinding_Find( /*0x745023*/
            &MEMORY[0x87F7E8],
            (int)&v113,
            &v113,
            (__int16 *)&a2,
            1,
            v49,
            0,
            0,
            1,
            1,
            0,
            1,
            1,
            1,
            (__int16 *)&v112,
            0,
            0);
  v112 = 0; /*0x745048*/
  v50 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v107, 0, 0); /*0x745052*/
  v51 = *LayerClass::Pathfinding_Find( /*0x745074*/
           &MEMORY[0x87F7E8],
           (int)&v113,
           &v113,
           (__int16 *)&v107,
           1,
           v50,
           0,
           0,
           1,
           1,
           0,
           1,
           1,
           1,
           (__int16 *)&v112,
           0,
           0);
  v110 = v51; /*0x745082*/
  if ( v109 != MEMORY[0xB1CFB8] && __PAIR32__(HIWORD(v110), v51) != MEMORY[0xB1CFB8] ) /*0x745092*/
  {
    v52 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v109); /*0x7450ad*/
    v53 = v3[2]; /*0x7450af*/
    if ( v3[4] < v53 /*0x7450ce*/
      || (*((_BYTE *)v3 + 13) || !v53)
      && (v54 = v3[5], v54 > 0)
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v53 + v54, 0) )
    {
      v55 = v3[4]; /*0x7450d5*/
      v56 = v3[1]; /*0x7450d8*/
      v3[4] = v55 + 1; /*0x7450de*/
      *(_DWORD *)(v56 + 4 * v55) = v52; /*0x7450e1*/
    }
    v48 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v110); /*0x7450e9*/
LABEL_135:
    v20 = v48; /*0x745625*/
    v21 = v3[2]; /*0x74562a*/
    if ( v3[4] < v21 ) /*0x74562f*/
      goto LABEL_200; /*0x74562f*/
    if ( *((_BYTE *)v3 + 13) ) /*0x745635*/
      goto LABEL_70; /*0x745638*/
    goto LABEL_69; /*0x745638*/
  }
  if ( !MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&v106, (__int16 *)&v107, 0, 1, 0, 0) ) /*0x745109*/
  {
    if ( v109 == MEMORY[0xB1CFB8] ) /*0x74513c*/
    {
      v112 = 0; /*0x7452b7*/
      v64 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 1); /*0x7452c1*/
      v111 = *LayerClass::Pathfinding_Find( /*0x7452e6*/
                &MEMORY[0x87F7E8],
                (int)&v113,
                &v113,
                (__int16 *)&v107,
                1,
                v64,
                0,
                1,
                1,
                1,
                0,
                1,
                0,
                1,
                (__int16 *)&v112,
                0,
                0);
      if ( v111 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 ) /*0x74530a*/
        return 0; /*0x74530a*/
    }
    else
    {
      v112 = 0; /*0x745178*/
      v57 = *LayerClass::Pathfinding_Find( /*0x745187*/
               &MEMORY[0x87F7E8],
               (int)&v112,
               &v113,
               (__int16 *)&v107,
               1,
               -1,
               0,
               1,
               1,
               1,
               0,
               1,
               1,
               1,
               (__int16 *)&v112,
               0,
               0);
      v110 = v57; /*0x745190*/
      if ( v57 != MEMORY[0xB1CFB8] && v57 != v109 ) /*0x7451a9*/
      {
        v58 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v109); /*0x7451c4*/
        v59 = v3[2]; /*0x7451c6*/
        if ( v3[4] < v59 /*0x7451e5*/
          || (*((_BYTE *)v3 + 13) || !v59)
          && (v60 = v3[5], v60 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v59 + v60, 0) )
        {
          v61 = v3[4]; /*0x7451ec*/
          v62 = v3[1]; /*0x7451ef*/
          v3[4] = v61 + 1; /*0x7451f5*/
          *(_DWORD *)(v62 + 4 * v61) = v58; /*0x7451f8*/
        }
        goto LABEL_38; /*0x7451f8*/
      }
      v112 = 0; /*0x745226*/
      v63 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v106, 0, 1); /*0x745230*/
      v111 = *LayerClass::Pathfinding_Find( /*0x745255*/
                &MEMORY[0x87F7E8],
                (int)&v113,
                &v113,
                (__int16 *)&v107,
                1,
                v63,
                0,
                1,
                1,
                1,
                0,
                1,
                0,
                1,
                (__int16 *)&v112,
                0,
                0);
      if ( v111 == MEMORY[0xB1CFB8] || ((int (__thiscall *)(_DWORD **))(*v2)[114])(v2) < 0 ) /*0x745279*/
        return 0; /*0x745279*/
    }
    goto LABEL_218; /*0x74530a*/
  }
  if ( a2 != v106 ) /*0x745115*/
  {
    v46 = (__int16 *)&a2; /*0x745127*/
    goto LABEL_134; /*0x74512b*/
  }
LABEL_40:
  v31 = v3[2]; /*0x744bcf*/
  if ( v3[4] < v31 /*0x744bf1*/
    || (*((_BYTE *)v3 + 13) || !v31)
    && (v32 = v3[5], v32 > 0)
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v32 + v31, 0) )
  {
    v33 = v3[4]; /*0x744bf8*/
    v34 = v3[1]; /*0x744bfb*/
    v3[4] = v33 + 1; /*0x744c01*/
    *(_DWORD *)(v34 + 4 * v33) = v6; /*0x744c04*/
  }
  v35 = v3[4]; /*0x744c0d*/
  result = *v2[355]; /*0x744c12*/
  if ( v35 > 0 ) /*0x744c14*/
  {
    v37 = v35 - 1; /*0x744c16*/
    v38 = 0; /*0x744c19*/
    for ( v3[4] = v37; v38 < v3[4]; *(_DWORD *)(v3[1] + 4 * v38 - 4) = *(_DWORD *)(v3[1] + 4 * v38) ) /*0x744c20*/
      ++v38; /*0x744c25*/
  }
  return result; /*0x744c34*/
}


// ==== 0x00746000  BuildingTypeClass::IsPlacementValid  this=TechnoClass  sig=csp ====
bool __thiscall BuildingTypeClass::IsPlacementValid(void *this, IUnknown *aP1, IUnknown *aP2)
{
  signed int v4; // ecx
  int v5; // eax
  IUnknown *v6; // eax

  if ( (*(int (__fastcall **)(void *))(this->q1C8)(this) < 0 /*0x746030*/
    || !MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)aP1, (__int16 *)aP2, 0, 0, 0, 0) )
  {
    return 1; /*0x746030*/
  }
  if ( LOWORD(aP1->field_0) == LOWORD(aP2->field_0) && HIWORD(aP1->field_0) == HIWORD(aP2->field_0) ) /*0x746050*/
    return 0; /*0x746059*/
  v4 = abs32(SHIWORD(aP2->field_0) - SHIWORD(aP1->field_0)); /*0x74606b*/
  v5 = abs32(SLOWORD(aP2->field_0) - SLOWORD(aP1->field_0)); /*0x746078*/
  if ( v5 <= v4 ) /*0x74607c*/
    v5 = v4; /*0x74607e*/
  if ( v5 == 1 ) /*0x746083*/
    return 0; /*0x74608c*/
  if ( v5 >= 12 /*0x7460ad*/
    || !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], aP1, (TechnoClass *)1)
    || !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], aP2, (TechnoClass *)1) )
  {
    return 1; /*0x7460f7*/
  }
  v6 = (IUnknown *)(*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)aP2) + 80) >> 8); /*0x7460cd*/
  LOBYTE(v6) = (unsigned __int8)v6 & 1; /*0x7460d0*/
  return Pathfinding::CalcDistance((int)MEMORY[0x87E8B8], aP1, aP2, (TechnoClass *)this, 0, v6, 0) > 15; /*0x746052*/
}


// ==== 0x00746100  TechnoClass::ProcessUnitSelfDestruct  this=TechnoClass  sig=csp ====
char __userpurge ProcessUnitSelfDestruct@<al>(int a1@<ecx>, int a2@<ebp>, int a3, int a4)
{
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v9; // eax
  RulesClass *v10; // ebx
  int v11; // eax
  int v12; // esi
  int v13; // ebp
  char *UIObjectCOM; // ebx
  int *v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // edi
  int *v19; // eax
  char *v20; // eax
  char *v21; // edi
  int v23; // [esp+10h] [ebp-18h] BYREF
  int v24; // [esp+14h] [ebp-14h] BYREF
  int v25; // [esp+18h] [ebp-10h]
  int v26; // [esp+1Ch] [ebp-Ch] BYREF
  _BYTE v27[8]; // [esp+20h] [ebp-8h] BYREF
  int v28; // [esp+2Ch] [ebp+4h]
  int v29; // [esp+2Ch] [ebp+4h]

  v5 = *(_DWORD *)(a1 + 1724); /*0x74610c*/
  if ( (*(_BYTE *)(v5 + 3434) || *(_BYTE *)(v5 + 3476)) /*0x746133*/
    && a3 == 4475
    && (v6 = a1 - 8, Team::AllMembersValid((int *)(a1 - 8))) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 628))(a1 - 8, 8); /*0x746142*/
    v7 = *(_DWORD *)(a1 + 528); /*0x746148*/
    if ( !v7 || v7 == *(_DWORD *)(a1 + 1436) ) /*0x746158*/
    {
      FootClass::ClearPathIndex((_DWORD *)(a1 - 8)); /*0x746174*/
      (*(void (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 372))(a1 - 8, &unk_B1CFE8, 1, 0); /*0x746186*/
      return 1; /*0x74618e*/
    }
    else
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 1152))(a1 - 8, v7, 1); /*0x746161*/
      return 1; /*0x746169*/
    }
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 1724); /*0x746197*/
    if ( *(_BYTE *)(v9 + 3477) && a3 == 4476 ) /*0x7461ad*/
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)(a1 - 8) + 460))(a1 - 8, 0); /*0x7461b9*/
      if ( *(_BYTE *)(*(_DWORD *)(a1 + 1724) + 3434) ) /*0x7461c5*/
        TechnoClass::ComputeCombatDamage((int *)(a1 - 8), 0); /*0x7461ef*/
      else
        TechnoClass::CreateDeathAnim(a1 - 8); /*0x7461d1*/
      (*(void (__thiscall **)(int))(*(_DWORD *)(a1 - 8) + 248))(a1 - 8); /*0x7461da*/
      return 1; /*0x7461e2*/
    }
    else if ( *(_BYTE *)(a1 + 1701) ) /*0x746209*/
    {
      v10 = MEMORY[0x8871E0]; /*0x746217*/
      if ( LOBYTE(MEMORY[0x8871E0]->?) ) /*0x74621d*/
        v28 = *(_DWORD *)(a1 + 100); /*0x74622a*/
      else
        v28 = *(_DWORD *)(v9 + 160); /*0x746236*/
      v11 = Math::RoundToInt((double)v28 * *(float *)&MEMORY[0x8871E0]->?); /*0x746244*/
      v29 = v11; /*0x74624b*/
      if ( v11 < 0 ) /*0x74624f*/
      {
        v29 = 0; /*0x746251*/
        v11 = 0; /*0x746259*/
      }
      v12 = a1 - 8; /*0x746263*/
      v13 = a1 - 8; /*0x746267*/
      if ( *(_DWORD *)(a1 + 1056) ) /*0x74625d*/
        v13 = *(_DWORD *)(a1 + 1056); /*0x74626d*/
      UIObjectCOM = (char *)CreateUIObjectCOM(*(_DWORD *)(v10->?[4] + 160), a1 - 8, v13, v11, v10->?[6], 0, 1); /*0x746291*/
      v15 = (int *)(*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v12 + 72))(a1 - 8, &v26, a2); /*0x74629a*/
      v24 = *v15; /*0x74629f*/
      v25 = v15[1]; /*0x7462a8*/
      v16 = *(_DWORD *)v12; /*0x7462ac*/
      v26 = v15[2]; /*0x7462b1*/
      v17 = (*(int (__thiscall **)(int))(v16 + 456))(a1 - 8); /*0x7462b5*/
      v26 -= v17; /*0x7462c3*/
      if ( UIObjectCOM ) /*0x7462c7*/
      {
        (*(void (__thiscall **)(char *))(*(_DWORD *)UIObjectCOM + 212))(UIObjectCOM); /*0x7462cd*/
        Warhead::ApplyDamage(UIObjectCOM, &v24); /*0x7462da*/
        (*(void (__stdcall **)(char *))(*(_DWORD *)UIObjectCOM + 8))(UIObjectCOM); /*0x7462e2*/
      }
      if ( *(_DWORD *)(a1 + 1056) ) /*0x7462e5*/
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 224))(a1 - 8, *(_DWORD *)(a1 + 1056)); /*0x7462f4*/
      }
      else
      {
        v18 = *(_DWORD *)(a1 + 1060); /*0x7462fc*/
        if ( v18 ) /*0x746304*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 228))(v12, v18); /*0x74630b*/
      }
      v19 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v12 + 72))(v12, v27); /*0x74631a*/
      v23 = *v19; /*0x746321*/
      v24 = v19[1]; /*0x74632a*/
      v25 = v19[2]; /*0x746335*/
      v20 = (char *)CreateUIObjectCOM( /*0x746355*/
                      *(_DWORD *)(MEMORY[0x8871E0]->?[4] + 160),
                      v12,
                      v13,
                      v29,
                      MEMORY[0x8871E0]->?[5],
                      0,
                      1);
      v21 = v20; /*0x74635a*/
      if ( v20 ) /*0x74635f*/
      {
        (*(void (__thiscall **)(char *))(*(_DWORD *)v20 + 212))(v20); /*0x746365*/
        Warhead::ApplyDamage(v21, &v23); /*0x746372*/
        (*(void (__stdcall **)(char *))(*(_DWORD *)v21 + 8))(v21); /*0x74637a*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 248))(v12); /*0x746381*/
      return 1; /*0x746389*/
    }
    else
    {
      return 0; /*0x746394*/
    }
  }
}


// ==== 0x007463A0  TechnoClass::TransferSlavedUnit  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::TransferSlavedUnit(int this, HouseClass *aP1, int a3)
{
  _BYTE *v4; // esi

  if ( aP1 == *(HouseClass **)(this + 540) ) /*0x7463ae*/
    return 0; /*0x7463ed*/
  v4 = *(_BYTE **)(this + 1736); /*0x7463b1*/
  *(_BYTE *)(this + 1744) = 0; /*0x7463b9*/
  if ( v4 ) /*0x7463c0*/
  {
    (*(void (__thiscall **)(_BYTE *, HouseClass *, int))(*(_DWORD *)v4 + 980))(v4, aP1, 1); /*0x7463c9*/
    *(_DWORD *)(this + 1736) = v4; /*0x7463cf*/
    v4[1744] = 1; /*0x7463d5*/
  }
  return FootClass::LiberateMember((_DWORD *)this, aP1, 1); /*0x7463e7*/
}


// ==== 0x00746400  TechnoClass::processParasiteAttachment  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::sub_746400(_DWORD *this)
{
  return *(_BYTE *)(this->q6C4 + 3611) == 0; /*0x746415*/
}


// ==== 0x00746420  TechnoClass::CaptureTurret  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_746420(int *this, _DWORD *a2)
{
  int v3; // ebx
  int v4; // edx
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp+10h] [ebp-8h]

  v3 = a2[157]; /*0x74642c*/
  if ( !v3 ) /*0x746434*/
    goto LABEL_9; /*0x746434*/
  v4 = a2[187]; /*0x74643a*/
  v5 = a2[189]; /*0x746440*/
  v6 = 0; /*0x746447*/
  if ( v4 == -1 ) /*0x74644c*/
    goto LABEL_5; /*0x74644c*/
  if ( (int)MEMORY[0xA8ED84] - v4 < v5 ) /*0x746458*/
  {
    v5 -= (int)MEMORY[0xA8ED84] - v4; /*0x74645a*/
LABEL_5:
    if ( v5 ) /*0x74645e*/
      v6 = 1; /*0x746460*/
  }
  *(this + 157) = v3; /*0x746465*/
  *(_DWORD *)(v3 + 36) = this; /*0x74646b*/
  a2[157] = 0; /*0x746472*/
  UnitClass::SetTurret(this, 7u); /*0x74647c*/
  if ( v6 ) /*0x746484*/
  {
    v7 = *this; /*0x74648c*/
    ++*(this + 238); /*0x746493*/
    v8 = (*(int (__thiscall **)(int *, int))(v7 + 792))(this, 7); /*0x746499*/
    *(this + 187) = (int)MEMORY[0xA8ED84]; /*0x7464ab*/
    this->missionStatus = v11; /*0x7464b5*/
    *(this + 189) = v8; /*0x7464b8*/
  }
LABEL_9:
  v9 = (*(int (__thiscall **)(_DWORD *))(*a2 + 132))(a2); /*0x7464bb*/
  return UnitClass::SetTurret(this, *(_DWORD *)(v9 + 1672)); /*0x7464d3*/
}


// ==== 0x007464E0  TechnoClass::TransferTurret  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_7464E0(_DWORD *this, int *a2)
{
  int v3; // ebx
  int v4; // edx
  int v5; // eax
  int v6; // ebp
  _DWORD *v7; // ecx
  int v8; // edx
  int v9; // eax
  int v11; // [esp+10h] [ebp-8h]

  if ( !a2 ) /*0x7464ee*/
    return UnitClass::SetTurret(this, 0); /*0x7464ee*/
  v3 = this->temporalUsing; /*0x7464f4*/
  if ( !v3 ) /*0x7464fc*/
    return UnitClass::SetTurret(this, 0); /*0x7464fc*/
  v4 = *(this + 187); /*0x746502*/
  v5 = this->originalOwnerHouse; /*0x746508*/
  v6 = 0; /*0x74650f*/
  if ( v4 == -1 ) /*0x746514*/
    goto LABEL_6; /*0x746514*/
  if ( (int)MEMORY[0xA8ED84] - v4 < v5 ) /*0x746520*/
  {
    v5 -= (int)MEMORY[0xA8ED84] - v4; /*0x746522*/
LABEL_6:
    if ( v5 ) /*0x746526*/
      v6 = 1; /*0x746528*/
  }
  a2[157] = v3; /*0x74652d*/
  *(_DWORD *)(this->temporalUsing + 36) = a2; /*0x746539*/
  this->temporalUsing = 0; /*0x74653c*/
  v7 = (_DWORD *)a2[157]; /*0x746546*/
  if ( v7 && v7[10] ) /*0x746550*/
    FactoryClass::CompleteItem(v7); /*0x746557*/
  if ( v6 ) /*0x74655f*/
  {
    v8 = *a2; /*0x746567*/
    ++a2[238]; /*0x74656c*/
    v9 = (*(int (__thiscall **)(int *, _DWORD))(v8 + 792))(a2, 0); /*0x746574*/
    a2[187] = (int)MEMORY[0xA8ED84]; /*0x746586*/
    a2[188] = v11; /*0x74658c*/
    a2[189] = v9; /*0x74658f*/
  }
  return UnitClass::SetTurret(this, 0); /*0x74659b*/
}


// ==== 0x007465B0  TechnoClass::updateParasiteState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_7465B0(int this, char a2)
{
  if ( !(unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(this + 540), HouseClass_Player) || a2 ) /*0x7465ce*/
    return *(_DWORD *)(this + 1304); /*0x7465da*/
  else
    return *(_DWORD *)(this + 1732); /*0x7465d0*/
}


// ==== 0x007465F0  TechnoClass::detachParasites  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_7465F0(int this, char a2)
{
  if ( !(unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(this + 540), HouseClass_Player) || a2 ) /*0x74660e*/
    return *(_DWORD *)(this + 1308); /*0x74661a*/
  else
    return *(_DWORD *)(this + 540); /*0x746610*/
}


// ==== 0x00746670  TechnoClass::ApplyObjectEffect  this=TechnoClass  sig=csp ====
void __thiscall TechnoClass::ApplyObjectEffect(#377 *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( a2 ) /*0x74667a*/
  {
    v3 = (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) - 1; /*0x746687*/
    if ( v3 ) /*0x746688*/
    {
      v4 = v3 - 10; /*0x74668a*/
      if ( v4 ) /*0x74668d*/
      {
        if ( v4 != 25 ) /*0x746692*/
          return; /*0x746692*/
        v5 = (*(int (__thiscall **)(_DWORD *))(*a2 + 136))(a2); /*0x746698*/
        goto LABEL_6; /*0x746698*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(#377 *, _DWORD *))(this->isSpawned)(this, a2) ) /*0x7466c0*/
      {
        v5 = *(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * a2[17]]; /*0x7466d3*/
LABEL_6:
        this->disguiseAsType = v5; /*0x74669e*/
        this->isDisguisedFlag_as_house = 0; /*0x7466a7*/
        TechnoClass::ActivateEffect(this); /*0x7466b1*/
      }
    }
    else if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 196))(a2) ) /*0x7466dc*/
    {
      this->disguiseAsType = (*(int (__thiscall **)(_DWORD *, int))(*a2 + 204))(a2, 1); /*0x7466f2*/
      this->isDisguisedFlag_as_house = (*(int (__thiscall **)(_DWORD *, int))(*a2 + 208))(a2, 1); /*0x746707*/
      TechnoClass::ActivateEffect(this); /*0x74670d*/
    }
  }
}


// ==== 0x00746720  TechnoClass::ClearAllTargets  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_746720(_BYTE *this)
{
  int v2; // eax
  int result; // eax

  v2 = *(_DWORD *)this; /*0x746723*/
  *(this + 472) = 0; /*0x746725*/
  result = (*(int (**)(void))(v2 + 1180))(); /*0x74672c*/
  this->disguiseAsType = 0; /*0x746732*/
  this->isDisguisedFlag_as_house = 0; /*0x74673c*/
  return result; /*0x746746*/
}


// ==== 0x00746750  TechnoClass::IsGuardingTarget  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::sub_746750(#375 **this, #375 *other)
{
  _DWORD *v3; // eax
  _WORD *v4; // ebx
  #375 *v5; // esi
  bool result; // al
  int v7; // [esp+Ch] [ebp-14h]
  int v8; // [esp+10h] [ebp-10h] BYREF
  _BYTE v9[12]; // [esp+14h] [ebp-Ch] BYREF

  result = 0; /*0x746800*/
  if ( (*((unsigned __int8 (__thiscall **)(#375 **))*this + 49))(this) ) /*0x74675a*/
  {
    v3 = (_DWORD *)(*((int (__thiscall **)(#375 **, _BYTE *))*this + 18))(this, v9); /*0x746771*/
    LOWORD(v7) = *v3 / 256; /*0x746784*/
    HIWORD(v7) = v3[1] / 256; /*0x74679c*/
    v8 = v7; /*0x7467a5*/
    v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v8); /*0x7467bf*/
    if ( !(unsigned __int8)HouseClass::IsAlliedWith(*(this + 135), other) /*0x7467d0*/
      && !HouseClass::HasType(v4, *((_DWORD *)other + 12)) )
    {
      v5 = *(this + 327); /*0x7467d9*/
      if ( v5 == other || !v5 || (unsigned __int8)HouseClass::IsAlliedWith(other, v5) ) /*0x7467ea*/
        return 1; /*0x746762*/
    }
  }
  return result; /*0x7467f3*/
}


// ==== 0x00746810  UnitClass::PerFrameUpdate  this=UnitClass  sig=csp ====
_DWORD *__usercall UnitClass_PerFrameUpdate@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  _DWORD *result; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // eax

  result = TechnoClass::Update((int)a1, a2); /*0x746814*/
  v4 = a1[433]; /*0x746819*/
  if ( v4 ) /*0x746821*/
  {
    v5 = a1[135]; /*0x746827*/
    if ( v5 ) /*0x74682f*/
    {
      v6 = 0; /*0x746834*/
      v7 = *(_DWORD *)(v5 + 52) + 360; /*0x746836*/
      v8 = *(_DWORD *)(v7 + 16); /*0x74683b*/
      if ( v8 > 0 ) /*0x746840*/
      {
        v9 = *(_DWORD **)(v7 + 4); /*0x746842*/
        while ( *v9 != v4 ) /*0x746847*/
        {
          ++v6; /*0x746849*/
          ++v9; /*0x74684a*/
          if ( v6 >= v8 ) /*0x74684f*/
            goto LABEL_9; /*0x74684f*/
        }
        Power::ChangedHouse(a1 + 84, 1); /*0x74685b*/
      }
    }
LABEL_9:
    v10 = a1[135]; /*0x746860*/
    if ( v10 ) /*0x746868*/
    {
      if ( *(_BYTE *)(v10 + 704) ) /*0x74686a*/
      {
        v11 = a1[433]; /*0x746874*/
        if ( !*(_BYTE *)(v11 + 3278) ) /*0x74687a*/
        {
          if ( *(_BYTE *)(v11 + 3214) ) /*0x746884*/
            Power::ChangedHouse(a1 + 84, 1); /*0x746896*/
        }
      }
    }
    result = (_DWORD *)a1[433]; /*0x74689b*/
    if ( *((_BYTE *)result + 2053) ) /*0x7468a1*/
      return (_DWORD *)UnitClass::SetTurret(0); /*0x7468af*/
  }
  return result; /*0x7468b4*/
}


// ==== 0x007468C0  UnitClass::CheckForNearbyEnemies  this=UnitClass  sig=csp ====
int __thiscall UnitClass::CheckForNearbyEnemies(int *this)
{
  #72 *v2; // ecx
  int v3; // ebp
  int *v4; // eax
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *ObjectByType; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int result; // eax
  int TechLevel; // ecx
  bool v17; // [esp+Dh] [ebp-19h]
  int v18; // [esp+Eh] [ebp-18h]
  int v19; // [esp+12h] [ebp-14h] BYREF
  _DWORD v20[4]; // [esp+16h] [ebp-10h] BYREF

  v17 = 0; /*0x7468c6*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(*this + 196))(this) ) /*0x7468cd*/
  {
    if ( !this->q19D ) /*0x7468d7*/
      WinAPI::Wrapper(-2147467261); /*0x7468e6*/
    if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->q19D + 16))(this->q19D) /*0x746901*/
      && *(_BYTE *)(*(this + 433) + 3378) )
    {
      v17 = Team::GetMember(this, 0) == 0; /*0x746918*/
    }
  }
  if ( !this->q19D ) /*0x74691d*/
    WinAPI::Wrapper(-2147467261); /*0x74692c*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->q19D + 16))(this->q19D) ) /*0x74693d*/
  {
LABEL_30:
    (*(void (__thiscall **)(int *))(*this + 1136))(this); /*0x746aff*/
    goto LABEL_25; /*0x746b09*/
  }
  v2 = (#72 *)dword_A8ED54[12]; /*0x746948*/
  if ( dword_A8ED54[12] % 8 ) /*0x74695c*/
  {
    v3 = *(_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*this + 440))(this, v20); /*0x746972*/
    v4 = (int *)(*(int (__thiscall **)(int *))(*this + 444))(this); /*0x74697c*/
    LOBYTE(v20[0]) = Cell::IsInRange(v4); /*0x74698e*/
    v5 = 0; /*0x746992*/
    while ( 1 ) /*0x746996*/
    {
      v6 = v5 & 7; /*0x746996*/
      LOWORD(v18) = v3 + LOWORD(MEMORY[0x87F7E8][v6 + 32680]); /*0x7469b3*/
      HIWORD(v18) = HIWORD(v3) + HIWORD(MEMORY[0x87F7E8][v6 + 32680]); /*0x7469bf*/
      v19 = v18; /*0x7469ce*/
      v7 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v19); /*0x7469d2*/
      ObjectByType = WTFMode::FindObjectByType(v7, v20[0]); /*0x7469de*/
      if ( ObjectByType ) /*0x7469e5*/
      {
        if ( !Object::IsAlliedWithObjectHouse((_DWORD *)*(this + 135), (int)ObjectByType) ) /*0x7469ee*/
          break; /*0x7469ee*/
      }
      if ( ++v5 >= 8 ) /*0x7469ff*/
      {
        v2 = (#72 *)dword_A8ED54[12]; /*0x746a01*/
        goto LABEL_16; /*0x746a01*/
      }
    }
    TechLevel = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 4116); /*0x746aed*/
    this->spawnStatus = dword_A8ED54[12]; /*0x746af3*/
    this->q079 = v20[2]; /*0x746af9*/
    this->q07A = TechLevel; /*0x746afc*/
    goto LABEL_30; /*0x746afc*/
  }
LABEL_16:
  if ( !v17 ) /*0x746a0d*/
    goto LABEL_25; /*0x746a0d*/
  v9 = this->spawnStatus; /*0x746a13*/
  v10 = this->q07A; /*0x746a19*/
  if ( v9 == -1 ) /*0x746a22*/
    goto LABEL_20; /*0x746a22*/
  v11 = (int)v2 - v9; /*0x746a24*/
  if ( v11 < v10 ) /*0x746a28*/
  {
    v10 -= v11; /*0x746a2a*/
LABEL_20:
    if ( v10 ) /*0x746a2e*/
      goto LABEL_25; /*0x746a2e*/
  }
  v12 = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, *(_DWORD *)(MEMORY[0x87F7E8][7806] + 4104) - 1); /*0x746a30*/
  if ( v12 >= *(_DWORD *)(MEMORY[0x87F7E8][7806] + 4104) - 1 ) /*0x746a5f*/
    v12 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 4104) - 1; /*0x746a61*/
  v13 = *(_DWORD *)(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 4092) + 4 * v12); /*0x746a69*/
  if ( v13 ) /*0x746a6e*/
  {
    v14 = *this; /*0x746a70*/
    *(this + 326) = v13; /*0x746a72*/
    *(this + 327) = 0; /*0x746a78*/
    *((_BYTE *)this + 472) = 1; /*0x746a82*/
    this->q077 = dword_A8ED54[12]; /*0x746a90*/
    (*(void (__thiscall **)(int *))(v14 + 1180))(this); /*0x746a96*/
  }
LABEL_25:
  result = this->q0B2; /*0x746a9c*/
  if ( result ) /*0x746aa7*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int *))(*this + 196))(this) /*0x746abd*/
      || (unsigned __int8)House::IsHumanPlayer((#375 *)*(this + 135)) )
    {
      *(_BYTE *)(this->q0B2 + 413) = 0; /*0x746b13*/
      return 0; /*0x746b11*/
    }
    else
    {
      *(_BYTE *)(this->q0B2 + 413) = 1; /*0x746ad2*/
      return 1; /*0x746acc*/
    }
  }
  return result; /*0x746ad1*/
}


// ==== 0x00746B20  TechnoClass::GetCommandTooltip  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_746B20(int this)
{
  int result; // eax
  _DWORD *DB; // edi
  bool v4; // bl
  int v5; // eax
  wchar_t *StringCSF; // eax

  if ( !(*(unsigned __int8 (__thiscall **)(int, #375 *))(*(_DWORD *)this + 200))(this, HouseClass_Player) /*0x746b3e*/
    || !(*(int (__thiscall **)(int, int))(this->q0CC)(this, 1) )
  {
    if ( !TechnoClass::OwnerHasPower((void *)this) || !TechnoClass::processEMPulse((void *)this) ) /*0x746b7c*/
      return *(_DWORD *)(*(_DWORD *)(this + 1732) + 96); /*0x746c81*/
    DB = (_DWORD *)CCINIClass::GetDB((_DWORD *)(this + 276)); /*0x746b96*/
    if ( !DB || (*(int (__thiscall **)(_DWORD *))(*DB + 44))(DB) != 15 ) /*0x746baa*/
      goto LABEL_20; /*0x746baa*/
    v4 = *(_BYTE *)(DB[432] + 3786) != 0; /*0x746bc2*/
    v5 = TechnoClass::applyEMPulseDamage((_DWORD *)this); /*0x746bc6*/
    switch ( v5 ) /*0x746bcd*/
    {
      case 0: /*0x746bcd*/
        StringCSF = GetStringCSF(MEMORY[0x845958], 0, MEMORY[0x845964], 11408); /*0x746be0*/
        goto LABEL_19; /*0x746be5*/
      case 1: /*0x746bcd*/
        if ( !v4 ) /*0x746bee*/
        {
          StringCSF = GetStringCSF(MEMORY[0x845948], 0, MEMORY[0x845964], 11412); /*0x746c01*/
          goto LABEL_19; /*0x746c06*/
        }
        break;
      case 2: /*0x746bcd*/
        StringCSF = GetStringCSF(MEMORY[0x84593C], 0, MEMORY[0x845964], 11416); /*0x746c1e*/
        goto LABEL_19; /*0x746c23*/
      default:
        if ( v5 != 3 && !v4 ) /*0x746c2c*/
          goto LABEL_20; /*0x746c2c*/
        break;
    }
    StringCSF = *(wchar_t **)((*(int (__thiscall **)(_DWORD *))(*DB + 136))(DB) + 96); /*0x746c38*/
LABEL_19:
    if ( StringCSF ) /*0x746c3d*/
    {
LABEL_21:
      swprintf( /*0x746c55*/
        (wchar_t *const)(this + 1768),
        (const size_t)&MEMORY[0x826960],
        StringCSF,
        *(_DWORD *)(*(_DWORD *)(this + 1732) + 96));
      return this + 1768; /*0x746c79*/
    }
LABEL_20:
    StringCSF = GetStringCSF(MEMORY[0x845958], 0, MEMORY[0x845964], 11454); /*0x746c3f*/
    goto LABEL_21; /*0x746c50*/
  }
  result = (*(int (__thiscall **)(int, int))(this->q0D0)(this, 1); /*0x746b4e*/
  if ( result ) /*0x746b56*/
    return *(_DWORD *)((*(int (__thiscall **)(int, int))(this->q0CC)(this, 1) + 96); /*0x746b66*/
  return result; /*0x746b58*/
}


// ==== 0x00746C90  TechnoClass::checkSpawnState  this=TechnoClass  sig=csp ====
BOOL __thiscall TechnoClass::sub_746C90(int this)
{
  return *(_DWORD *)(this + 1752) != -1 || (unsigned __int8)TechnoClass::HasPassengers((#377 *)this); /*0x746ca4*/
}


// ==== 0x00746CB0  ObjectClass::GetTypeVt40_2  this=ObjectClass  sig=csp ====
// attributes: thunk
int __thiscall ObjectClass::GetTypeVt40_2(#377 *this)
{
  return TechnoClass::GetTypeVt40(this);
}


// ==== 0x00746CC0  ObjectClass::GetTypeVt41_2  this=ObjectClass  sig=csp ====
// attributes: thunk
int __thiscall ObjectClass::GetTypeVt41_2(#377 *this)
{
  return ObjectClass::GetTypeVt41(this);
}


// ==== 0x00746CD0  TechnoClass::SelectAttackWeapon  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_746CD0(int this, int a2)
{
  int v2; // eax

  if ( *(_BYTE *)(this + 1760) && (v2 = *(_DWORD *)(this + 1732), *(_BYTE *)(v2 + 1708)) ) /*0x746ce0*/
    return *(_DWORD *)(v2 + 1704); /*0x746cea*/
  else
    return TechnoClass::SelectWeapon((#377 *)this); /*0x746cf8*/
}


// ==== 0x00746D00  TechnoClass::updateSpawnManager  this=TechnoClass  sig=csp ====
char __thiscall sub_746D00(_DWORD *this)
{
  return *(_BYTE *)(this->q6C4 + 1708); /*0x746d0c*/
}


// ==== 0x00746D60  TechnoClass::releaseSpawns  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::releaseSpawns(#377 *this)
{
  TechnoClass::CreateDeathAnim((int)this); /*0x746d63*/
  return ObjectClass::FreeCaptureManager(this); /*0x746d6f*/
}


// ==== 0x00746D80  FootClass::updateScanRange  this=int  sig=csp ====
char __thiscall sub_746D80(_BYTE *this)
{
  return *(this + 1760); /*0x746d86*/
}


// ==== 0x00746D90  ObjectClass::Event_Process_746D90  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_746D90(_BYTE *this)
{
  return *(this + 1760) || *(this + 1761); /*0x746da6*/
}


// ==== 0x00746DB0  TechnoClass::HasDeployFlags  this=int  sig=csp ====
BOOL __thiscall TechnoClass::HasDeployFlags(_BYTE *this)
{
  return *(this + 1761) || *(this + 1762); /*0x746dc6*/
}


// ==== 0x00746DD0  UnitClass::StubReturn2280  this=UnitClass  sig=csp ====
int C07F5C70::_vt12()
{
  return 2280; /*0x746dd5*/
}


// ==== 0x00746DE0  UnitClass::ddtor  this=UnitClass  sig=csp ====
int __stdcall C07F5C70::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x746de6*/
    return -2147467261; /*0x746de8*/
  *a2 = 237448650; /*0x746df6*/
  a2[1] = 298949647; /*0x746dfe*/
  a2[2] = -1610610249; /*0x746e07*/
  a2[3] = -777003740; /*0x746e10*/
  return 0; /*0x746ded*/
}


// ==== 0x00746E20  UnitClass::StubReturn1  this=UnitClass  sig=csp ====
int C07F5C70::_vt11()
{
  return 1; /*0x746e25*/
}


// ==== 0x00746E30  TechnoClass::checkIronCurtainState  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::sub_746E30(int this, _DWORD *a2)
{
  int v2; // ecx
  int v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x746e30*/
  if ( *(_BYTE *)(*(_DWORD *)(this + 1732) + 3233) ) /*0x746e37*/
    v2 = *ProgressTimer::GetValue((_WORD *)(this + 928), &v4); /*0x746e51*/
  else
    v2 = *ProgressTimer::GetValue((_WORD *)(this + 904), &v4); /*0x746e6d*/
  *a2 = v2; /*0x746e57*/
  return a2; /*0x746e5a*/
}


// ==== 0x00746E80  UnitClass::Seek  this=UnitClass  sig=csp ====
UnitClass *__thiscall C07F5C70::Seek(void **Block, char a2)
{
  UnitClass::Destructor(Block); /*0x746e83*/
  if ( (a2 & 1) != 0 ) /*0x746e8d*/
    __3_YAXPAX_Z(Block); /*0x746e90*/
  return (UnitClass *)Block; /*0x746e9a*/
}


// ==== 0x00746EA0  TechnoClass::processIronCurtainExpiry  this=int  sig=csp ====
bool __thiscall TechnoClass::processIronCurtainExpiry(_DWORD *this, IUnknown *aP1)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)*(this + 4); /*0x746ea0*/
  return v2 && *v2 == aP1->field_0; /*0x746eb3*/
}


// ==== 0x00746EC0  sub_746EC0  this=-  sig=ida-proto ====
int sub_746EC0()
{
  unk_B1D0C8 = 0; /*0x746ec2*/
  unk_B1D0CC = 0; /*0x746ec7*/
  unk_B1D0D0 = 0; /*0x746ecc*/
  unk_B1D0D4 = 0; /*0x746ed1*/
  return 0; /*0x746ed6*/
}


// ==== 0x00746EE0  sub_746EE0  this=-  sig=ida-proto ====
void sub_746EE0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x746eec*/
  unk_B1D0E0 = Math::Sqrt(v0 + v0); /*0x746efe*/
}


// ==== 0x00746F10  sub_746F10  this=-  sig=ida-proto ====
void sub_746F10()
{
  unk_B1D130 = unk_B1D0E0 / 60.0; /*0x746f1c*/
}


// ==== 0x00746F30  sub_746F30  this=-  sig=ida-proto ====
void sub_746F30()
{
  unk_B1D118 = 1.0 / unk_B1D130; /*0x746f3c*/
}


// ==== 0x00746F50  sub_746F50  this=-  sig=ida-proto ====
void sub_746F50()
{
  unk_B1D110 = 0.0174532925199433 * 45.0; /*0x746f5c*/
}


// ==== 0x00746F70  sub_746F70  this=-  sig=ida-proto ====
void sub_746F70()
{
  unk_B1D0E8 = 0.0174532925199433 * 60.0; /*0x746f7c*/
}


// ==== 0x00746F90  sub_746F90  this=-  sig=ida-proto ====
void sub_746F90()
{
  unk_B1D0C0 = 0.0174532925199433 * 90.0; /*0x746f9c*/
}


// ==== 0x00746FB0  sub_746FB0  this=-  sig=ida-proto ====
__int64 sub_746FB0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_B1D0C0 - unk_B1D0E8); /*0x746fc2*/
  result = Math::RoundToInt(v0 * unk_B1D0E0 * 0.5); /*0x746fd6*/
  unk_B1D138 = result; /*0x746fdb*/
  return result; /*0x746fe0*/
}


// ==== 0x00746FF0  sub_746FF0  this=-  sig=ida-proto ====
void sub_746FF0()
{
  unk_B1D0F0 = Math::ArcTan((double)unk_B1D138 * 0.00390625); /*0x747007*/
}


// ==== 0x00747020  sub_747020  this=-  sig=ida-proto ====
void sub_747020()
{
  unk_B1D108 = Math::ArcTan((double)(2 * unk_B1D138) / unk_B1D0E0); /*0x747042*/
}


// ==== 0x00747050  sub_747050  this=-  sig=ida-proto ====
__int64 sub_747050()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_B1D138) + 0.5); /*0x74706b*/
  unk_B1D12C = result; /*0x747070*/
  return result; /*0x747076*/
}


// ==== 0x00747080  sub_747080  this=-  sig=ida-proto ====
int sub_747080()
{
  unk_B1D0D8 = 0; /*0x747082*/
  unk_B1D0DA = 0; /*0x747088*/
  return 0; /*0x74708e*/
}


// ==== 0x00747090  sub_747090  this=-  sig=ida-proto ====
int sub_747090()
{
  unk_B1D0F8 = 0; /*0x747092*/
  unk_B1D0FC = 0; /*0x747097*/
  unk_B1D100 = 0; /*0x74709c*/
  return 0; /*0x7470a1*/
}


// ==== 0x007470B0  sub_7470B0  this=-  sig=ida-proto ====
int sub_7470B0()
{
  unk_B1D128 = 0; /*0x7470b5*/
  unk_B1D120 = 128; /*0x7470bf*/
  unk_B1D124 = 128; /*0x7470c4*/
  return 128; /*0x7470c9*/
}


// ==== 0x007470D0  UnitTypeClass::UnitTypeClass  this=UnitTypeClass  sig=csp ====
int __thiscall UnitTypeClass::UnitTypeClass(int this, INIClass *aP1)
{
  HouseClass *v3; // eax
  bool v4; // zf
  int v5; // ecx
  CCINIClass *v6; // edx

  TechnoTypeClass::ReadINI((char *)this, aP1->__pad_0, -1); /*0x7470de*/
  *(_DWORD *)(this + 3576) = -1; /*0x7470e3*/
  *(_DWORD *)(this + 3580) = -1; /*0x7470eb*/
  *(_DWORD *)(this + 3584) = 0; /*0x7470f1*/
  *(_DWORD *)(this + 3588) = 0; /*0x7470f7*/
  *(_DWORD *)(this + 3592) = 0; /*0x7470fd*/
  *(_BYTE *)(this + 3596) = 0; /*0x747103*/
  *(_BYTE *)(this + 3597) = 0; /*0x747109*/
  *(_BYTE *)(this + 3598) = 0; /*0x74710f*/
  *(_BYTE *)(this + 3599) = 0; /*0x747115*/
  *(_BYTE *)(this + 3600) = 0; /*0x74711b*/
  *(_BYTE *)(this + 3601) = 0; /*0x747121*/
  *(_BYTE *)(this + 3602) = 0; /*0x747127*/
  *(_BYTE *)(this + 3603) = 0; /*0x74712d*/
  *(_BYTE *)(this + 3604) = 1; /*0x747136*/
  *(_BYTE *)(this + 3605) = 0; /*0x74713d*/
  *(_BYTE *)(this + 3606) = 0; /*0x747143*/
  *(_BYTE *)(this + 3607) = 0; /*0x747149*/
  *(_BYTE *)(this + 3608) = 0; /*0x74714f*/
  *(_BYTE *)(this + 3609) = 0; /*0x747155*/
  *(_BYTE *)(this + 3610) = 0; /*0x74715b*/
  *(_BYTE *)(this + 3611) = 0; /*0x747161*/
  *(_DWORD *)(this + 3612) = 0; /*0x747167*/
  *(_DWORD *)(this + 3616) = 0; /*0x74716d*/
  *(_DWORD *)(this + 3620) = 1; /*0x747173*/
  *(_DWORD *)(this + 3624) = -1; /*0x74717d*/
  *(_DWORD *)(this + 3628) = -1; /*0x747183*/
  *(_DWORD *)(this + 3632) = -1; /*0x747189*/
  *(_DWORD *)(this + 3636) = -1; /*0x74718f*/
  *(_DWORD *)(this + 3640) = -1; /*0x747195*/
  *(_DWORD *)(this + 3644) = 8; /*0x74719b*/
  *(_DWORD *)(this + 3672) = 0; /*0x7471a5*/
  *(_BYTE *)(this + 3676) = 12; /*0x7471ab*/
  *(_BYTE *)(this + 3677) = 0; /*0x7471b2*/
  *(_BYTE *)(this + 3678) = 0; /*0x7471b8*/
  *(_DWORD *)this = &UnitTypeClass::`vftable'; /*0x7471bf*/
  *(_DWORD *)(this + 4) = &UnitTypeClass::`vftable'; /*0x7471c5*/
  *(_DWORD *)(this + 8) = &UnitTypeClass::`vftable'; /*0x7471cb*/
  *(_DWORD *)(this + 12) = &vt_UnitTypeClass; /*0x7471d2*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x7471d9*/
  *(_DWORD *)(this + 1816) = 32; /*0x7471de*/
  v3 = (HouseClass *)g_CrateCount; /*0x7471e8*/
  if ( (int)g_CrateCount < dword_A83CE8 /*0x747226*/
    || (byte_A83CED || !dword_A83CE8)
    && dword_A83CF4 > 0
    && (v4 = ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))UnitTypeClass_Array->field_8)(
               &UnitTypeClass_Array,
               dword_A83CE8 + dword_A83CF4,
               0) == 0,
        v3 = (HouseClass *)g_CrateCount,
        !v4) )
  {
    g_CrateCount = (AbstractClass *)&v3->__pad_0[1]; /*0x74722b*/
    *(_DWORD *)&g_UnitTypeCount2->__pad_0[4 * (_DWORD)v3] = this; /*0x747235*/
    v3 = (HouseClass *)g_CrateCount; /*0x747238*/
  }
  v5 = 0; /*0x74723d*/
  if ( (int)v3 <= 0 ) /*0x747241*/
  {
LABEL_11:
    v5 = -1; /*0x747255*/
  }
  else
  {
    v6 = g_UnitTypeCount2; /*0x747243*/
    while ( *(_DWORD *)v6->__pad_0 != this ) /*0x74724b*/
    {
      ++v5; /*0x74724d*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x74724e*/
      if ( v5 >= (int)v3 ) /*0x747253*/
        goto LABEL_11; /*0x747253*/
    }
  }
  *(_DWORD *)(this + 3576) = v5; /*0x747257*/
  *(_DWORD *)(this + 3648) = -1; /*0x74725f*/
  *(_DWORD *)(this + 3652) = -1; /*0x747267*/
  *(_DWORD *)(this + 3656) = -1; /*0x74726d*/
  *(_DWORD *)(this + 3660) = -1; /*0x747273*/
  *(_DWORD *)(this + 3664) = -1; /*0x747279*/
  *(_DWORD *)(this + 3668) = -1; /*0x74727f*/
  *(_BYTE *)(this + 3381) = 0; /*0x747285*/
  *(_BYTE *)(this + 3382) = 0; /*0x74728b*/
  *(_BYTE *)(this + 3387) = 0; /*0x747291*/
  *(_BYTE *)(this + 3384) = 1; /*0x747297*/
  *(_BYTE *)(this + 3479) = 0; /*0x74729e*/
  *(_BYTE *)(this + 3478) = 0; /*0x7472a4*/
  *(_BYTE *)(this + 3374) = 1; /*0x7472aa*/
  return this; /*0x7472b1*/
}


// ==== 0x00747370  BuildingTypeClass::FindIndex  this=VOID_PTR  sig=csp ====
int __thiscall BuildingTypeClass::FindIndex(void *this)
{
  int v2; // esi

  if ( !this ) /*0x747376*/
    return -1; /*0x747376*/
  v2 = 0; /*0x74737d*/
  if ( (int)g_CrateCount <= 0 ) /*0x747381*/
    return -1; /*0x7473a6*/
  while ( _strcmpi((const void *)(*(_DWORD *)&g_UnitTypeCount2->__pad_0[4 * v2] + 36), this) ) /*0x74739a*/
  {
    if ( ++v2 >= (int)g_CrateCount ) /*0x7473a4*/
      return -1; /*0x7473a4*/
  }
  return v2; /*0x7473a6*/
}


// ==== 0x007473C0  UnitTypeClass::j_?do_always_noconv_codecvt_base_std__MBE_NXZ_19_0  this=UnitTypeClass  sig=csp ====
// attributes: thunk
char __thiscall UnitTypeClass::j__do_always_noconv_codecvt_base_std__MBE_NXZ_19_0(std::codecvt_base *this)
{
  return AbstractClass::processWeaponFire(this);
}


// ==== 0x007473D0  TechnoTypeClass::CanAttackMove_IgnoreWeapon_0_0  this=UnitTypeClass  sig=ida-proto ====
// attributes: thunk
bool __thiscall TechnoTypeClass::CanAttackMove_IgnoreWeapon_0_0(int this)
{
  return TechnoTypeClass::CanAttackMove_IgnoreWeapon(this);
}


// ==== 0x007473E0  ObjectClass::InitVisceroidArt  this=ObjectClass  sig=csp ====
int sub_7473E0()
{
  _DWORD *v0; // esi
  int v1; // ecx
  _DWORD *v2; // eax
  int result; // eax

  if ( !dword_B1D13C ) /*0x7473e7*/
  {
    v0 = __2_YAPAXI_Z(0x20u); /*0x7473f1*/
    if ( v0 ) /*0x7473f8*/
    {
      v0[1] = 256; /*0x747409*/
      v0[2] = 256; /*0x74740c*/
      v0[3] = 0; /*0x74740f*/
      *v0 = &XSurface_Vtable; /*0x747416*/
      v0[4] = 1; /*0x74741c*/
      Buffer::Init(v0 + 5, 0, 0x10000); /*0x747423*/
      *v0 = &BSurface_Vtable; /*0x747428*/
      v1 = (int)v0; /*0x74742e*/
    }
    else
    {
      v1 = 0; /*0x747432*/
    }
    dword_B1D13C = v1; /*0x747434*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v1 + 24))(v1, 0); /*0x74743e*/
  }
  if ( !unk_B1D140 ) /*0x747449*/
  {
    v2 = __2_YAPAXI_Z(0x188u); /*0x747450*/
    if ( v2 ) /*0x74745a*/
      unk_B1D140 = (int)ConvertClass::Construct(v2, (int)&MEMORY[0x885780], (int)&MEMORY[0x885780], dword_B1D13C, 1, 0); /*0x747478*/
    else
      unk_B1D140 = 0; /*0x74747f*/
  }
  unk_B1D144 = SearchMIXFile(MEMORY[0x8459AC], 0); /*0x74749c*/
  result = SearchMIXFile(MEMORY[0x84599C], 0); /*0x7474a1*/
  unk_B1D148 = result; /*0x7474a6*/
  return result; /*0x7474ab*/
}


// ==== 0x007474B0  UnitTypeClass::CreateUnit  this=UnitTypeClass  sig=csp ====
int *__thiscall UnitTypeClass::_vt30(_DWORD *this, int *a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = this->MaxDimension - this->MaxDimension / 4; /*0x7475a3*/
  v3 = v2; /*0x7475a5*/
  if ( v2 >= 60 ) /*0x7475aa*/
  {
    v3 = 60; /*0x7475ac*/
    v2 = 60; /*0x7475b6*/
  }
  *a2 = v3; /*0x7475c2*/
  a2[1] = v3; /*0x7475c4*/
  a2[2] = v2; /*0x7475c7*/
  return a2; /*0x7475cd*/
}


// ==== 0x00747560  UnitTypeClass::ConstructUnit  this=UnitTypeClass  sig=csp ====
int *__thiscall UnitTypeClass::_vt30(_DWORD *this, int *a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = this->MaxDimension - this->MaxDimension / 4; /*0x7475a3*/
  v3 = v2; /*0x7475a5*/
  if ( v2 >= 60 ) /*0x7475aa*/
  {
    v3 = 60; /*0x7475ac*/
    v2 = 60; /*0x7475b6*/
  }
  *a2 = v3; /*0x7475c2*/
  a2[1] = v3; /*0x7475c4*/
  a2[2] = v2; /*0x7475c7*/
  return a2; /*0x7475cd*/
}


// ==== 0x00747590  UnitTypeClass::GetDimensions  this=UnitTypeClass  sig=csp ====
int *__thiscall UnitTypeClass::_vt30(_DWORD *this, int *a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = this->MaxDimension - this->MaxDimension / 4; /*0x7475a3*/
  v3 = v2; /*0x7475a5*/
  if ( v2 >= 60 ) /*0x7475aa*/
  {
    v3 = 60; /*0x7475ac*/
    v2 = 60; /*0x7475b6*/
  }
  *a2 = v3; /*0x7475c2*/
  a2[1] = v3; /*0x7475c4*/
  a2[2] = v2; /*0x7475c7*/
  return a2; /*0x7475cd*/
}


// ==== 0x007475D0  UnitTypeClass::GetDefaultDimensions  this=UnitTypeClass  sig=csp ====
_DWORD *__stdcall UnitTypeClass::_vt31(_DWORD *a1)
{
  int v1; // esi

  v1 = 2 * unk_B1D138; /*0x7475dc*/
  *a1 = 256; /*0x7475e7*/
  a1[1] = 256; /*0x7475e9*/
  a1[2] = v1; /*0x7475ec*/
  return a1; /*0x7475ef*/
}


// ==== 0x00747600  sub_747600  this=unknown  sig=csp ====
_DWORD *__stdcall sub_747600(_DWORD *a1, int a2, _DWORD *a3)
{
  *a1 = *a3; /*0x74760a*/
  a1[1] = a3[1]; /*0x74760f*/
  return a1; /*0x747612*/
}


// ==== 0x00747620  UnitTypeClass::LoadFromINI  this=UnitTypeClass  sig=csp ====
char __userpurge UnitTypeClass::LoadFromINI@<al>(int a1@<ecx>, double a2@<st0>, unsigned __int8 ***a3)
{
  unsigned __int8 *v4; // ebp
  char Bool_Overwrite; // al
  char v6; // al
  char v7; // cl
  int v8; // eax
  char v9; // cl
  char v10; // al
  char v11; // al
  char v12; // cl
  _DWORD *Point3D_Overwrite; // eax
  int v14; // eax
  char v15; // al
  char Int_Overwrite; // al
  char v17; // cl
  char v18; // al
  char v19; // al
  char v20; // cl
  char v21; // al
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  bool v33; // cc
  int v34; // esi
  int v35; // edi
  int v36; // eax
  int v37; // edi
  int v38; // eax
  int v39; // edi
  int v40; // eax
  int v41; // edi
  int v42; // eax
  int v43; // edi
  int v44; // eax
  int v45; // edi
  int v46; // eax
  int v47; // edi
  int v48; // eax
  int v49; // edi
  int v50; // eax
  int v51; // edi
  int v52; // eax
  int v53; // edi
  int v54; // eax
  int v55; // edi
  int v56; // eax
  int v57; // edi
  int v58; // eax
  int v59; // edi
  int v60; // eax
  int v61; // edi
  int v62; // eax
  int v63; // edi
  int v64; // eax
  int v65; // edi
  int v66; // eax
  int v67; // edi
  int v68; // eax
  char v70; // [esp-Ch] [ebp-154h]
  char v71; // [esp-Ch] [ebp-154h]
  char v72; // [esp-Ch] [ebp-154h]
  int v73; // [esp-Ch] [ebp-154h]
  int v74; // [esp-Ch] [ebp-154h]
  char v75; // [esp-Ch] [ebp-154h]
  int v76; // [esp-Ch] [ebp-154h]
  int v77; // [esp-Ch] [ebp-154h]
  _DWORD *v78; // [esp+8h] [ebp-140h]
  _DWORD *v79; // [esp+8h] [ebp-140h]
  int v80; // [esp+Ch] [ebp-13Ch]
  char Buffer[20]; // [esp+14h] [ebp-134h] BYREF
  char Source[28]; // [esp+28h] [ebp-120h] BYREF
  char v84[260]; // [esp+44h] [ebp-104h] BYREF

  INIClass::ResetSection(a3); /*0x747637*/
  if ( !ObjectTypeClass::LoadExtras(a1, a2, a3) ) /*0x74763f*/
    return 0; /*0x747ea0*/
  v4 = (unsigned __int8 *)(a1 + 36); /*0x747654*/
  *(_BYTE *)(a1 + 3597) = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x845E20], *(_BYTE *)(a1 + 3597)); /*0x747665*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x845E10], *(_BYTE *)(a1 + 3602)); /*0x74767a*/
  v70 = *(_BYTE *)(a1 + 3603); /*0x747687*/
  *(_BYTE *)(a1 + 3602) = Bool_Overwrite; /*0x74768e*/
  *(_BYTE *)(a1 + 3603) = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x845DFC], v70); /*0x747699*/
  v6 = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x83D4CC], *(_BYTE *)(a1 + 3598)); /*0x7476ae*/
  v7 = *(_BYTE *)(a1 + 3599); /*0x7476b3*/
  *(_BYTE *)(a1 + 3598) = v6; /*0x7476b9*/
  *(_BYTE *)(a1 + 3599) = INIClass::ReadBool_Overwrite(a1 + 36, stru_81AC50, v7); /*0x7476cd*/
  if ( *(_DWORD *)(a1 + 1660) == -1 ) /*0x7476dc*/
    *(_DWORD *)(a1 + 1660) = 2 - (*(_BYTE *)(a1 + 3368) != 0); /*0x7476eb*/
  v8 = ObjectTypeClass::loadTypeMember_476FC0(a1 + 36, MEMORY[0x844504], *(_DWORD *)(a1 + 1660)); /*0x747700*/
  v9 = *(_BYTE *)(a1 + 3604); /*0x747705*/
  *(_DWORD *)(a1 + 1660) = v8; /*0x74770b*/
  v10 = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x845DF0], v9); /*0x74771a*/
  v71 = *(_BYTE *)(a1 + 3610); /*0x747727*/
  *(_BYTE *)(a1 + 3604) = v10; /*0x74772e*/
  v11 = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x845DE0], v71); /*0x747734*/
  v12 = *(_BYTE *)(a1 + 3233); /*0x747739*/
  *(_BYTE *)(a1 + 3610) = v11; /*0x74773f*/
  v72 = *(_BYTE *)(a1 + 3606); /*0x74774d*/
  *(_BYTE *)(a1 + 3601) = v12 == 0; /*0x747759*/
  *(_BYTE *)(a1 + 3606) = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x845DC8], v72); /*0x747778*/
  Point3D_Overwrite = (_DWORD *)INIClass::ReadPoint3D_Overwrite(Buffer, a1 + 36, MEMORY[0x845DB0], a1 + 3584); /*0x74777e*/
  *(_DWORD *)(a1 + 3584) = *Point3D_Overwrite; /*0x747785*/
  *(_DWORD *)(a1 + 3588) = Point3D_Overwrite[1]; /*0x74778a*/
  v14 = Point3D_Overwrite[2]; /*0x74778d*/
  *(_DWORD *)(a1 + 920) = 15; /*0x747790*/
  *(_DWORD *)(a1 + 3592) = v14; /*0x74779a*/
  if ( *(_BYTE *)(a1 + 3598) || *(_BYTE *)(a1 + 3599) ) /*0x7477a7*/
    *(_DWORD *)(a1 + 920) = 10; /*0x7477b1*/
  v15 = INIClass::ReadBool_Overwrite(a1 + 504, MEMORY[0x845DA0], *(_BYTE *)(a1 + 3605)); /*0x7477d3*/
  v73 = *(char *)(a1 + 3676); /*0x7477df*/
  *(_BYTE *)(a1 + 3605) = v15; /*0x7477eb*/
  *(_BYTE *)(a1 + 3676) = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845D94], v73); /*0x7477f6*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845D84], *(char *)(a1 + 3677)); /*0x74780f*/
  v17 = *(_BYTE *)(a1 + 3596); /*0x747814*/
  *(_BYTE *)(a1 + 3677) = Int_Overwrite; /*0x74781a*/
  v18 = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x845D7C], v17); /*0x747829*/
  v74 = *(_DWORD *)(a1 + 3580); /*0x747836*/
  *(_BYTE *)(a1 + 3596) = v18; /*0x74783d*/
  *(_DWORD *)(a1 + 3580) = OverlayTypeClass::ReadINIString(a1 + 36, MEMORY[0x845D64], v74); /*0x747848*/
  v19 = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x845D58], *(_BYTE *)(a1 + 3607)); /*0x74785d*/
  v20 = *(_BYTE *)(a1 + 3608); /*0x747862*/
  *(_BYTE *)(a1 + 3607) = v19; /*0x747868*/
  v21 = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x83CC84], v20); /*0x747877*/
  v75 = *(_BYTE *)(a1 + 3609); /*0x747884*/
  *(_BYTE *)(a1 + 3608) = v21; /*0x74788b*/
  *(_BYTE *)(a1 + 3609) = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x83CC94], v75); /*0x747896*/
  *(_BYTE *)(a1 + 3611) = INIClass::ReadBool_Overwrite(a1 + 36, MEMORY[0x845D4C], *(_BYTE *)(a1 + 3611)); /*0x7478b0*/
  if ( *(char *)(a1 + 3677) > 0 ) /*0x7478be*/
    *(_DWORD *)(a1 + 3612) = 1; /*0x7478c0*/
  v22 = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845D3C], *(_DWORD *)(a1 + 3612)); /*0x7478dc*/
  v76 = *(_DWORD *)(a1 + 3616); /*0x7478ec*/
  *(_DWORD *)(a1 + 3612) = v22; /*0x7478f3*/
  *(_DWORD *)(a1 + 3616) = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845D30], v76); /*0x7478fe*/
  v23 = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845D20], *(_DWORD *)(a1 + 3620)); /*0x747916*/
  *(_DWORD *)(a1 + 3620) = v23; /*0x747920*/
  if ( v23 < 1 ) /*0x747928*/
    *(_DWORD *)(a1 + 3620) = 1; /*0x74792a*/
  if ( !*(_BYTE *)(a1 + 3677) && !*(_BYTE *)(a1 + 3233) ) /*0x74793a*/
    *(_DWORD *)(a1 + 3644) = 1; /*0x747944*/
  v24 = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845D18], *(_DWORD *)(a1 + 3644)); /*0x74795c*/
  v25 = *(_DWORD *)(a1 + 3628); /*0x747961*/
  *(_DWORD *)(a1 + 3644) = v24; /*0x74796c*/
  if ( v25 == -1 ) /*0x747972*/
    *(_DWORD *)(a1 + 3628) = 0; /*0x747974*/
  if ( *(_DWORD *)(a1 + 3624) == -1 ) /*0x747984*/
  {
    if ( *(_DWORD *)(a1 + 3612) ) /*0x747986*/
      v26 = v24 * *(char *)(a1 + 3676); /*0x74799f*/
    else
      v26 = *(_DWORD *)(a1 + 3628); /*0x747990*/
    *(_DWORD *)(a1 + 3624) = v26; /*0x7479a2*/
  }
  if ( *(_DWORD *)(a1 + 3632) == -1 ) /*0x7479ae*/
  {
    if ( *(_BYTE *)(a1 + 3677) ) /*0x7479b0*/
      v27 = v24 * (*(_DWORD *)(a1 + 3612) + *(char *)(a1 + 3676)); /*0x7479cf*/
    else
      v27 = *(_DWORD *)(a1 + 3624); /*0x7479ba*/
    *(_DWORD *)(a1 + 3632) = v27; /*0x7479d2*/
  }
  if ( *(_DWORD *)(a1 + 3636) == -1 ) /*0x7479de*/
  {
    if ( *(_DWORD *)(a1 + 3616) ) /*0x7479e0*/
      v28 = v24 * (*(char *)(a1 + 3677) + *(char *)(a1 + 3676) + 1); /*0x747a00*/
    else
      v28 = -1; /*0x7479ea*/
    v29 = *(_DWORD *)(a1 + 3616); /*0x747a03*/
    *(_DWORD *)(a1 + 3636) = v28; /*0x747a09*/
    *(_DWORD *)(a1 + 3640) = v29 + v28; /*0x747a11*/
  }
  *(_DWORD *)(a1 + 3624) = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845D08], *(_DWORD *)(a1 + 3624)); /*0x747a2e*/
  v30 = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845CF8], *(_DWORD *)(a1 + 3628)); /*0x747a46*/
  v31 = *(_DWORD *)(a1 + 3632); /*0x747a4b*/
  *(_DWORD *)(a1 + 3628) = v30; /*0x747a51*/
  v32 = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845CE4], v31); /*0x747a63*/
  v77 = *(_DWORD *)(a1 + 3636); /*0x747a73*/
  *(_DWORD *)(a1 + 3632) = v32; /*0x747a7a*/
  *(_DWORD *)(a1 + 3636) = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845CD4], v77); /*0x747a85*/
  *(_DWORD *)(a1 + 3640) = INIClass::ReadInt_Overwrite(a1 + 504, MEMORY[0x845CC4], *(_DWORD *)(a1 + 3640)); /*0x747aa8*/
  v80 = 0; /*0x747aae*/
  v78 = (_DWORD *)(a1 + 3648); /*0x747ab6*/
  do /*0x747b01*/
  {
    sprintf(Buffer, MEMORY[0x845CB0], v80); /*0x747ac9*/
    *v78 = INIClass::ReadInt_Overwrite(a1 + 504, Buffer, *v78); /*0x747aec*/
    v33 = ++v80 < 2; /*0x747af6*/
    ++v78; /*0x747afd*/
  }
  while ( v33 ); /*0x747b01*/
  v34 = 0; /*0x747b09*/
  v79 = (_DWORD *)(a1 + 3656); /*0x747b0b*/
  do /*0x747b47*/
  {
    sprintf(Buffer, MEMORY[0x845CA0], v34++); /*0x747b1a*/
    *v79 = INIClass::ReadInt_Overwrite(a1 + 36, Buffer, *v79); /*0x747b3b*/
    ++v79; /*0x747b43*/
  }
  while ( v34 < 4 ); /*0x747b47*/
  strcpy(Source, (const char *)(a1 + 3678)); /*0x747b6f*/
  INIClass::GetString(a3, v4, (unsigned __int8 *)MEMORY[0x845C94], Source, (char *)(a1 + 3678), 25); /*0x747b88*/
  _makepath(v84, 0, 0, (const char *)(a1 + 3678), Ext); /*0x747ba6*/
  *(_DWORD *)(a1 + 3672) = SearchMIXFile(v84, 0); /*0x747bc4*/
  if ( (unsigned __int8)AbstractTypeClass::NameEquals(MEMORY[0x84314C]) ) /*0x747bca*/
  {
    v35 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845C80], 0); /*0x747bf0*/
    v36 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845C6C], -1); /*0x747bf2*/
    BuildingClass::SetSlot((_DWORD *)a1, v35, v36); /*0x747bfb*/
    v37 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845C58], 1); /*0x747c19*/
    v38 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845C44], -1); /*0x747c1b*/
    BuildingClass::SetSlot((_DWORD *)a1, v37, v38); /*0x747c24*/
    v39 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845C2C], 2); /*0x747c42*/
    v40 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845C14], -1); /*0x747c44*/
    BuildingClass::SetSlot((_DWORD *)a1, v39, v40); /*0x747c4d*/
    v41 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845C04], 3); /*0x747c6b*/
    v42 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845BF0], -1); /*0x747c6d*/
    BuildingClass::SetSlot((_DWORD *)a1, v41, v42); /*0x747c76*/
    v43 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845BDC], 0); /*0x747c94*/
    v44 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845BC8], -1); /*0x747c96*/
    BuildingClass::SetSlot((_DWORD *)a1, v43, v44); /*0x747c9f*/
    v45 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845BB4], 0); /*0x747cb3*/
    v46 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845BA0], -1); /*0x747cbf*/
    BuildingClass::SetSlot((_DWORD *)a1, v45, v46); /*0x747cc8*/
    v47 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845B8C], 0); /*0x747ce6*/
    v48 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845B78], -1); /*0x747ce8*/
    BuildingClass::SetSlot((_DWORD *)a1, v47, v48); /*0x747cf1*/
    v49 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845B64], 0); /*0x747d0f*/
    v50 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845B50], -1); /*0x747d11*/
    BuildingClass::SetSlot((_DWORD *)a1, v49, v50); /*0x747d1a*/
    v51 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845B38], 0); /*0x747d38*/
    v52 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845B20], -1); /*0x747d3a*/
    BuildingClass::SetSlot((_DWORD *)a1, v51, v52); /*0x747d43*/
    v53 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845B08], 0); /*0x747d61*/
    v54 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845AF0], -1); /*0x747d63*/
    BuildingClass::SetSlot((_DWORD *)a1, v53, v54); /*0x747d6c*/
    v55 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845ADC], 0); /*0x747d8a*/
    v56 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845AC8], -1); /*0x747d8c*/
    BuildingClass::SetSlot((_DWORD *)a1, v55, v56); /*0x747d95*/
    v57 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845AAC], 0); /*0x747db3*/
    v58 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845A8C], -1); /*0x747db5*/
    BuildingClass::SetSlot((_DWORD *)a1, v57, v58); /*0x747dbe*/
    v59 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845A7C], 0); /*0x747ddc*/
    v60 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845A6C], -1); /*0x747dde*/
    BuildingClass::SetSlot((_DWORD *)a1, v59, v60); /*0x747de7*/
    v61 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845A58], 0); /*0x747e05*/
    v62 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845A40], -1); /*0x747e07*/
    BuildingClass::SetSlot((_DWORD *)a1, v61, v62); /*0x747e10*/
    v63 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845A2C], 0); /*0x747e2e*/
    v64 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845A18], -1); /*0x747e30*/
    BuildingClass::SetSlot((_DWORD *)a1, v63, v64); /*0x747e39*/
    v65 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x845A00], 0); /*0x747e57*/
    v66 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x8459E8], -1); /*0x747e59*/
    BuildingClass::SetSlot((_DWORD *)a1, v65, v66); /*0x747e62*/
    v67 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x8459D4], 0); /*0x747e80*/
    v68 = INIClass::ReadInt_Overwrite(v4, MEMORY[0x8459BC], -1); /*0x747e82*/
    BuildingClass::SetSlot((_DWORD *)a1, v67, v68); /*0x747e8b*/
  }
  return 1; /*0x747e92*/
}


// ==== 0x00747EB0  UnitTypeClass::ClampToGroundHeight  this=UnitTypeClass  sig=csp ====
_DWORD *__stdcall UnitTypeClass::_vt27(_DWORD *a1, int *a2)
{
  int GroundHeight; // eax
  int v3; // ecx
  int v5; // [esp+0h] [ebp-Ch] BYREF
  int v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = *a2; /*0x747eb9*/
  v6 = a2[1]; /*0x747eca*/
  v7 = a2[2]; /*0x747ed1*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x747ed5*/
  v3 = v7; /*0x747eda*/
  if ( v7 < GroundHeight ) /*0x747ee0*/
    v3 = Cell::GetGroundHeight(&v5); /*0x747ef1*/
  *a1 = v5; /*0x747efe*/
  a1[1] = v6; /*0x747f04*/
  a1[2] = v3; /*0x747f08*/
  return a1; /*0x747f0b*/
}


// ==== 0x00747F20  UnitTypeClass::GetGameplayValue  this=UnitTypeClass  sig=csp ====
int UnitTypeClass::_vt45()
{
  return MEMORY[0x8871E0][1].?; /*0x747f2b*/
}


// ==== 0x00747F30  UnitTypeClass::GetClassIdentifier  this=UnitTypeClass  sig=csp ====
int __stdcall UnitTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x747f36*/
    return -2147467261; /*0x747f38*/
  *a2 = -591576342; /*0x747f46*/
  a2[1] = 298976582; /*0x747f4e*/
  a2[2] = 1610654892; /*0x747f57*/
  a2[3] = -1252326136; /*0x747f60*/
  return 0; /*0x747f3d*/
}


// ==== 0x00747F70  UnitTypeClass::PowerDrainUpdate  this=UnitTypeClass  sig=csp ====
int __thiscall UnitTypeClass::_vt13(int this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax

  BuildingTypeClass::ProcessPower(this, a2); /*0x747f79*/
  Power::TimerProcess(*(_DWORD *)(this + 3580)); /*0x747f87*/
  LOBYTE(v3) = *(_BYTE *)(this + 3596); /*0x747f8c*/
  Power::FlagProcess(a2, v3); /*0x747f95*/
  LOBYTE(v4) = *(_BYTE *)(this + 3597); /*0x747f9a*/
  v5 = Power::FlagProcess(a2, v4); /*0x747fa3*/
  LOBYTE(v5) = *(_BYTE *)(this + 3598); /*0x747fa8*/
  Power::FlagProcess(a2, v5); /*0x747fb1*/
  LOBYTE(v6) = *(_BYTE *)(this + 3599); /*0x747fb6*/
  Power::FlagProcess(a2, v6); /*0x747fbf*/
  LOBYTE(v7) = *(_BYTE *)(this + 3600); /*0x747fc4*/
  v8 = Power::FlagProcess(a2, v7); /*0x747fcd*/
  LOBYTE(v8) = *(_BYTE *)(this + 3601); /*0x747fd2*/
  Power::FlagProcess(a2, v8); /*0x747fdb*/
  LOBYTE(v9) = *(_BYTE *)(this + 3604); /*0x747fe0*/
  Power::FlagProcess(a2, v9); /*0x747fe9*/
  LOBYTE(v10) = *(_BYTE *)(this + 3603); /*0x747fee*/
  v11 = Power::FlagProcess(a2, v10); /*0x747ff7*/
  LOBYTE(v11) = *(_BYTE *)(this + 3605); /*0x747ffc*/
  return Power::FlagProcess(a2, v11); /*0x74800a*/
}


// ==== 0x00748010  UnitTypeClass::LoadFromINI2  this=UnitTypeClass  sig=csp ====
int __stdcall UnitTypeClass::_vt05(int a1, int a2)
{
  int result; // eax
  char v3; // [esp+7h] [ebp-105h] BYREF
  char Buffer[260]; // [esp+8h] [ebp-104h] BYREF

  result = TechnoTypeClass::SaveLoad_Prefix(a1, a2); /*0x748024*/
  if ( result >= 0 ) /*0x74802b*/
  {
    if ( a1 ) /*0x74802f*/
    {
      TechnoTypeClass::Construct(a1, (int)&v3); /*0x748038*/
      *(_DWORD *)a1 = &UnitTypeClass::`vftable'; /*0x74803d*/
      *(_DWORD *)(a1 + 4) = &UnitTypeClass::`vftable'; /*0x748043*/
      *(_DWORD *)(a1 + 8) = &UnitTypeClass::`vftable'; /*0x74804a*/
      *(_DWORD *)(a1 + 12) = &vt_UnitTypeClass; /*0x748051*/
    }
    VoxelAnimType::LoadAnim((char *)a1); /*0x74805a*/
    ObjectTypeClass::Load2DArt((char *)a1); /*0x748061*/
    if ( *(_DWORD *)(a1 + 3672) ) /*0x748066*/
    {
      _makepath(Buffer, 0, 0, (const char *)(a1 + 3678), Ext); /*0x748085*/
      *(_DWORD *)(a1 + 3672) = SearchMIXFile(Buffer, 0); /*0x748098*/
    }
    return 0; /*0x74809e*/
  }
  return result; /*0x7480a0*/
}


// ==== 0x007480B0  UnitTypeClass::SaveToINI  this=UnitTypeClass  sig=csp ====
int __stdcall UnitTypeClass::SaveToINI(void *a0, TechnoTypeClass *aP1, int a3)
{
  int result; // eax

  result = TechnoTypeClass::SaveLoad_Prefix_0(aP1, a0, aP1, (TechnoTypeClass *)a3); /*0x7480bf*/
  if ( result >= 0 ) /*0x7480c6*/
    return 0; /*0x7480c8*/
  return result; /*0x7480ca*/
}


// ==== 0x007480D0  BuildingTypeClass::FindOrCreateAlt  this=IUnknown  sig=csp ====
UnitTypeClass *__thiscall BuildingTypeClass::FindOrCreateAlt(INIClass *Source)
{
  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x7480ec*/
    return 0; /*0x74814f*/
  v2 = 0; /*0x7480fd*/
  if ( (int)g_CrateCount <= 0 ) /*0x748101*/
  {
LABEL_6:
    v3 = __2_YAPAXI_Z(0xE78u); /*0x748126*/
    if ( v3 ) /*0x748135*/
      return (UnitTypeClass *)UnitTypeClass::UnitTypeClass(v3, Source); /*0x748141*/
    return 0; /*0x748135*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)&g_UnitTypeCount2->__pad_0[4 * v2] + 36), Source) ) /*0x74811a*/
  {
    if ( ++v2 >= (int)g_CrateCount ) /*0x748124*/
      goto LABEL_6; /*0x748124*/
  }
  return *(UnitTypeClass **)&g_UnitTypeCount2->__pad_0[4 * v2]; /*0x74813f*/
}


// ==== 0x00748160  UnitTypeClass::GetObjectSize  this=UnitTypeClass  sig=csp ====
int UnitTypeClass::_vt12()
{
  return 3704; /*0x748165*/
}


// ==== 0x00748170  UnitTypeClass::GetTypeIdentifier  this=UnitTypeClass  sig=csp ====
int UnitTypeClass::_vt11()
{
  return 40; /*0x748175*/
}


// ==== 0x00748180  UnitTypeClass::GetAuxField  this=UnitTypeClass  sig=csp ====
int __thiscall UnitTypeClass::_vt16(_DWORD *this)
{
  return this->ArrayIndex; /*0x748186*/
}


// ==== 0x00748190  UnitTypeClass::ddtor  this=UnitTypeClass  sig=csp ====
UnitTypeClass *__thiscall UnitTypeClass::ddtor(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &UnitTypeClass::`vftable'; /*0x748196*/
  *(Block + 1) = &UnitTypeClass::`vftable'; /*0x74819c*/
  *(Block + 2) = &UnitTypeClass::`vftable'; /*0x7481a3*/
  *(Block + 3) = &vt_UnitTypeClass; /*0x7481aa*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x7481b1*/
  v5 = Block; /*0x7481c6*/
  v3 = (*(int (__thiscall **)(int *, void ***))(UnitTypeClass_Array + 16))(&UnitTypeClass_Array, &v5); /*0x7481ca*/
  if ( v3 != -1 && v3 < g_CrateCount && v3 < --g_CrateCount ) /*0x7481e5*/
  {
    do /*0x7481fd*/
    {
      ++v3; /*0x7481ed*/
      *((_DWORD *)g_UnitTypeCount2 + v3 - 1) = *((_DWORD *)g_UnitTypeCount2 + v3); /*0x7481f1*/
    }
    while ( v3 < g_CrateCount ); /*0x7481fd*/
  }
  TechnoTypeClass::DTOR((int)Block); /*0x748201*/
  if ( (a2 & 1) != 0 ) /*0x74820b*/
    __3_YAXPAX_Z(Block); /*0x74820e*/
  return (UnitTypeClass *)Block; /*0x748218*/
}


// ==== 0x00748220  Voxel::BuildIndexTable  this=int  sig=csp ====
char __thiscall Voxel_BuildIndexTable(void *this)
{
  int v1; // ebx
  int v3; // edx
  int v4; // edi
  __int16 v5; // bx
  int v6; // eax
  int v7; // esi
  int v8; // edx
  int v9; // ecx
  int v10; // ebx
  char v12; // [esp+8h] [ebp-18h]
  char v13; // [esp+Ch] [ebp-14h]
  char v14; // [esp+10h] [ebp-10h]
  int v15; // [esp+14h] [ebp-Ch]
  int i; // [esp+18h] [ebp-8h]
  __int16 j; // [esp+1Ch] [ebp-4h]

  v1 = 0; /*0x748229*/
  if ( unk_B1D14C ) /*0x748230*/
  {
    __3_YAXPAX_Z(unk_B1D14C); /*0x748233*/
    unk_B1D14C = 0; /*0x74823b*/
  }
  unk_B1D14C = __2_YAPAXI_Z(0x1FFFCu); /*0x748250*/
  if ( !unk_B1D14C ) /*0x748255*/
    return 0; /*0x748348*/
  switch ( (unsigned int)this ) /*0x748264*/
  {
    case 0u: /*0x748264*/
      v12 = 10; /*0x74826b*/
      v13 = 5; /*0x748273*/
      v14 = 0; /*0x74827b*/
      break; /*0x74827f*/
    case 1u: /*0x748264*/
      v12 = 11; /*0x7482ad*/
      v13 = 6; /*0x7482b5*/
      v14 = 1; /*0x7482bd*/
      break; /*0x7482bd*/
    case 2u: /*0x748264*/
      v12 = 11; /*0x748297*/
      v13 = 6; /*0x74829f*/
      v14 = 0; /*0x7482a7*/
      break; /*0x7482ab*/
    case 3u: /*0x748264*/
      v12 = 11; /*0x748281*/
      v13 = 5; /*0x748289*/
      v14 = 0; /*0x748291*/
      break; /*0x748295*/
    default:
      return 0;
  }
  for ( i = 0; i < 32; ++i ) /*0x7482c7*/
  {
    v3 = 0; /*0x7482d1*/
    v4 = v1 << v12; /*0x7482d3*/
    v5 = 32 * v1; /*0x7482d5*/
    v15 = 0; /*0x7482d8*/
    for ( j = v5; ; v5 = j ) /*0x7482dc*/
    {
      v6 = 0; /*0x7482ee*/
      v7 = v3 << v13; /*0x7482f3*/
      v8 = (unsigned __int16)(32 * (v5 | v3)); /*0x7482f5*/
      do /*0x748320*/
      {
        v9 = v8 | (unsigned __int16)v6; /*0x748311*/
        v10 = v7 | v4 | (v6++ << v14); /*0x748315*/
        *((_WORD *)unk_B1D14C + v9) = v10; /*0x74831b*/
      }
      while ( v6 < 32 ); /*0x748320*/
      v3 = ++v15; /*0x748326*/
      if ( v15 >= 32 ) /*0x74832e*/
        break; /*0x74832e*/
    }
    v1 = i + 1; /*0x748334*/
  }
  return 1; /*0x748340*/
}


// ==== 0x00748360  System_Cleanup  this=unknown  sig=csp ====
void sub_748360()
{
  if ( unk_B1D14C ) /*0x748367*/
  {
    __3_YAXPAX_Z(unk_B1D14C); /*0x74836a*/
    unk_B1D14C = 0; /*0x748372*/
  }
}


// ==== 0x00748380  sub_748380  this=int  sig=csp ====
int __fastcall sub_748380(unsigned __int16 *a1, int a2)
{
  int result; // eax
  unsigned __int16 v3; // dx

  result = a2; /*0x748380*/
  if ( a2 > 0 ) /*0x748384*/
  {
    do /*0x74839e*/
    {
      v3 = *a1++; /*0x74838f*/
      --result; /*0x748395*/
      *(a1 - 1) = *((_WORD *)unk_B1D14C + v3); /*0x74839a*/
    }
    while ( result ); /*0x74839e*/
  }
  return result; /*0x7483a1*/
}


// ==== 0x007483B0  CopySHPFrameToSurface  this=-  sig=ida-proto ====
int __cdecl CopySHPFrameToSurface(int a1, unsigned __int16 *a2, int *a3, int a4, int a5, unsigned int a6)
{
  unsigned int v6; // edi
  int result; // eax
  int *v9; // ebp
  char *v10; // ecx
  unsigned __int16 v11; // ax
  int v12; // esi
  int v13; // eax
  unsigned int v14; // esi
  int *v15; // eax
  int v16; // ecx
  int *v17; // eax
  int *v18; // edx
  unsigned int v19; // edi
  int v20; // ecx
  _DWORD *v21; // edx
  unsigned int v22; // edi
  unsigned __int16 v23; // ax
  unsigned int v24; // edx
  int v25; // eax
  __int16 *v26; // edi
  int *v27; // ebx
  __int16 v28; // cx
  int *v29; // eax
  unsigned int v30; // edx
  int v31; // esi
  _WORD *v32; // eax
  int *v33; // ebx
  int *v34; // edx
  int v35; // edi
  int v36; // edi
  unsigned int v37; // ebx
  int *v38; // edx
  unsigned __int16 *v39; // eax
  int v40; // esi
  unsigned __int16 v41; // cx
  unsigned __int16 v42; // bp
  unsigned __int16 *v43; // eax
  unsigned __int16 v44; // cx
  unsigned __int16 v45; // bp
  int v46; // edi
  unsigned __int16 v47; // cx
  int v48; // edx
  int v49; // eax
  int *v50; // ecx
  char *v51; // [esp+Ch] [ebp-Ch]
  char *v52; // [esp+10h] [ebp-8h]
  unsigned int v53; // [esp+14h] [ebp-4h]
  int v54; // [esp+20h] [ebp+8h]
  unsigned __int16 *v55; // [esp+24h] [ebp+Ch]
  unsigned __int16 *v56; // [esp+24h] [ebp+Ch]
  unsigned __int16 *v57; // [esp+24h] [ebp+Ch]
  char *v58; // [esp+2Ch] [ebp+14h]
  int v59; // [esp+2Ch] [ebp+14h]
  int v60; // [esp+2Ch] [ebp+14h]
  unsigned int v61; // [esp+2Ch] [ebp+14h]
  unsigned int v62; // [esp+30h] [ebp+18h]

  v6 = 2 * a6; /*0x7483be*/
  result = (int)a3; /*0x7483c4*/
  v9 = a3; /*0x7483d0*/
  v10 = (char *)&a3[2 * a6 * a5]; /*0x7483d2*/
  v62 = a6; /*0x7483da*/
  v53 = (unsigned int)v10; /*0x7483de*/
  v51 = (char *)a3; /*0x7483e2*/
  v52 = (char *)&a3[2 * a4]; /*0x7483e6*/
  v58 = (char *)a3; /*0x7483ea*/
  if ( a3 < (int *)v10 ) /*0x7483ee*/
  {
    do /*0x7483f5*/
    {
      v11 = *a2++; /*0x7483f5*/
      v55 = a2; /*0x748400*/
      v12 = v11; /*0x748404*/
      v13 = v11 & 0xF000; /*0x748406*/
      v14 = v12 & 0xFFFF0FFF; /*0x74840b*/
      if ( v13 > 12288 ) /*0x748416*/
      {
        if ( v13 == 20480 ) /*0x7485c6*/
        {
          if ( v14 ) /*0x7486c4*/
          {
            v46 = 4 * (v6 >> 2); /*0x7486c9*/
            do /*0x748703*/
            {
              v47 = *((_WORD *)unk_B1D14C + *a2); /*0x7486d6*/
              v48 = 4; /*0x7486da*/
              v49 = v47 | (v47 << 16); /*0x7486ea*/
              ++a2; /*0x7486ec*/
              v50 = v9; /*0x7486ef*/
              do /*0x7486f9*/
              {
                *v50 = v49; /*0x7486f1*/
                v50[1] = v49; /*0x7486f3*/
                v50 = (int *)((char *)v50 + v46); /*0x7486f6*/
                --v48; /*0x7486f8*/
              }
              while ( v48 ); /*0x7486f9*/
              v9 += 2; /*0x7486fb*/
              --v14; /*0x7486fe*/
              v58 = (char *)v9; /*0x7486ff*/
            }
            while ( v14 ); /*0x748703*/
          }
        }
        else if ( v13 == 24576 ) /*0x7485d1*/
        {
          if ( v14 ) /*0x748650*/
          {
            v36 = 4 * (v6 >> 2); /*0x748659*/
            v37 = v14; /*0x74865c*/
            do /*0x7486ba*/
            {
              v38 = v9; /*0x748668*/
              v39 = (unsigned __int16 *)(a1 + 32 * *v55++); /*0x748670*/
              v40 = 4; /*0x748679*/
              do /*0x7486ac*/
              {
                v41 = v39[1]; /*0x748682*/
                v42 = *v39; /*0x748686*/
                v43 = v39 + 2; /*0x74868e*/
                *v38 = v42 | (v41 << 16); /*0x748691*/
                v44 = v43[1]; /*0x748695*/
                v45 = *v43; /*0x74869b*/
                v39 = v43 + 2; /*0x74869e*/
                v38[1] = v45 | (v44 << 16); /*0x7486a6*/
                v38 = (int *)((char *)v38 + v36); /*0x7486a9*/
                --v40; /*0x7486ab*/
              }
              while ( v40 ); /*0x7486ac*/
              v9 = (int *)(v58 + 8); /*0x7486b2*/
              --v37; /*0x7486b5*/
              v58 += 8; /*0x7486b6*/
            }
            while ( v37 ); /*0x7486ba*/
            a2 = v55; /*0x7486bc*/
          }
        }
        else if ( v13 == 28672 && v14 ) /*0x7485e0*/
        {
          v61 = v14; /*0x7485e6*/
          while ( 1 ) /*0x7485f9*/
          {
            v31 = 4; /*0x7485f9*/
            v32 = (_WORD *)(a1 + 32 * *a2); /*0x748601*/
            v57 = a2 + 1; /*0x748606*/
            v33 = v9; /*0x74860a*/
            do /*0x748631*/
            {
              v34 = v33; /*0x74860c*/
              v35 = 4; /*0x74860e*/
              do /*0x748625*/
              {
                if ( (HIBYTE(*v32) & 0x80u) == 0 ) /*0x748619*/
                  *(_WORD *)v34 = *v32; /*0x74861b*/
                v34 = (int *)((char *)v34 + 2); /*0x74861e*/
                ++v32; /*0x748621*/
                --v35; /*0x748624*/
              }
              while ( v35 ); /*0x748625*/
              --v31; /*0x74862d*/
              v33 = (int *)((char *)v33 + 2 * ((v62 * 2) >> 1)); /*0x74862e*/
            }
            while ( v31 ); /*0x748631*/
            v9 += 2; /*0x748637*/
            if ( !--v61 ) /*0x74863f*/
              break; /*0x74863f*/
            a2 = v57; /*0x7485ec*/
          }
          a2 = v57; /*0x748641*/
          v58 = (char *)v9; /*0x748645*/
        }
        goto LABEL_55; /*0x748649*/
      }
      if ( v13 == 12288 ) /*0x74841c*/
      {
        v54 = 4; /*0x74854b*/
        v26 = (__int16 *)(a1 + 32 * *a2); /*0x748556*/
        v56 = a2 + 1; /*0x74855b*/
        do /*0x7485a2*/
        {
          v27 = v9; /*0x74855f*/
          v60 = 4; /*0x748561*/
          do /*0x748591*/
          {
            v28 = *v26; /*0x748569*/
            if ( (HIBYTE(*v26) & 0x80u) == 0 ) /*0x74856f*/
            {
              v29 = v27; /*0x748573*/
              if ( v14 ) /*0x748575*/
              {
                v30 = v14; /*0x748577*/
                do /*0x748580*/
                {
                  *(_WORD *)v29 = v28; /*0x748579*/
                  v29 += 2; /*0x74857c*/
                  --v30; /*0x74857f*/
                }
                while ( v30 ); /*0x748580*/
              }
            }
            v27 = (int *)((char *)v27 + 2); /*0x748586*/
            ++v26; /*0x748589*/
            --v60; /*0x74858d*/
          }
          while ( v60 ); /*0x748591*/
          v9 = (int *)((char *)v9 + v62 * 2); /*0x74859b*/
          --v54; /*0x74859e*/
        }
        while ( v54 ); /*0x7485a2*/
        a2 = v56; /*0x7485a6*/
        v9 = (int *)((char *)v9 + 8 * v14 - 2 * v62); /*0x7485b6*/
        v58 = (char *)v9; /*0x7485b8*/
        goto LABEL_55; /*0x7485bc*/
      }
      if ( v13 ) /*0x748424*/
      {
        if ( v13 != 4096 ) /*0x74842f*/
        {
          if ( v13 == 0x2000 ) /*0x74843a*/
          {
            v59 = 4; /*0x748449*/
            v15 = (int *)(a1 + 32 * *a2++); /*0x748454*/
            do /*0x7484af*/
            {
              v16 = *v15; /*0x748467*/
              v17 = v15 + 1; /*0x748469*/
              v18 = v9; /*0x74846e*/
              if ( v14 ) /*0x748470*/
              {
                v19 = v14; /*0x748472*/
                do /*0x74847a*/
                {
                  *v18 = v16; /*0x748474*/
                  v18 += 2; /*0x748476*/
                  --v19; /*0x748479*/
                }
                while ( v19 ); /*0x74847a*/
              }
              v20 = *v17; /*0x74848a*/
              v15 = v17 + 1; /*0x74848c*/
              v21 = v9 + 1; /*0x748491*/
              if ( v14 ) /*0x748494*/
              {
                v22 = v14; /*0x748496*/
                do /*0x74849e*/
                {
                  *v21 = v20; /*0x748498*/
                  v21 += 2; /*0x74849a*/
                  --v22; /*0x74849d*/
                }
                while ( v22 ); /*0x74849e*/
              }
              v9 = (int *)((char *)v9 + v62 * 2); /*0x7484a8*/
              --v59; /*0x7484ab*/
            }
            while ( v59 ); /*0x7484af*/
            v9 = (int *)((char *)v9 + 8 * v14 - 2 * v62); /*0x7484c3*/
            v58 = (char *)v9; /*0x7484c5*/
          }
          goto LABEL_55; /*0x7484c9*/
        }
      }
      else
      {
        v23 = *a2; /*0x7484d6*/
        v24 = 2 * v14; /*0x7484d9*/
        ++a2; /*0x7484dc*/
        v25 = *((unsigned __int16 *)unk_B1D14C + v23) | (*((unsigned __int16 *)unk_B1D14C + v23) << 16); /*0x7484ee*/
        if ( 2 * v14 ) /*0x7484d9*/
          memset32(v9, v25, v24); /*0x7484f8*/
        if ( v24 ) /*0x748503*/
        {
          memset32((char *)v9 + v62 * 2, v25, v24); /*0x748507*/
          memset32(&v9[v62], v25, v24); /*0x748517*/
          memset32((char *)&v9[v62] + v62 * 2, v25, v24); /*0x748533*/
        }
      }
      v9 += 2 * v14; /*0x748535*/
      v58 = (char *)v9; /*0x748539*/
LABEL_55:
      result = (int)v52; /*0x748705*/
      v6 = v62 * 2; /*0x748709*/
      if ( v9 == (int *)v52 ) /*0x74870f*/
      {
        result = 2 * v62; /*0x748719*/
        v9 = (int *)&v51[2 * v62]; /*0x748720*/
        v51 = (char *)v9; /*0x748722*/
        v58 = (char *)v9; /*0x748726*/
        v52 = (char *)&v9[2 * a4]; /*0x74872e*/
      }
    }
    while ( (unsigned int)v9 < v53 ); /*0x7483f5*/
  }
  return result; /*0x74873d*/
}


// ==== 0x00748750  IsoTile::Decode16Bit  this=IsoTile  sig=ida-proto ====
int *__cdecl IsoTile_Decode16Bit(int a1, unsigned __int16 *a2, int *a3, int a4, int a5, int a6)
{
  unsigned int v6; // edi
  int *result; // eax
  int *v9; // ebp
  char *v10; // ecx
  int v11; // eax
  int v12; // esi
  int v13; // eax
  unsigned int v14; // esi
  int *v15; // eax
  int v16; // ecx
  int *v17; // eax
  int *v18; // edx
  unsigned int v19; // edi
  int v20; // ecx
  _DWORD *v21; // edx
  unsigned int v22; // edi
  unsigned __int16 v23; // cx
  unsigned int v24; // edx
  int v25; // ecx
  int v26; // eax
  __int16 *v27; // edi
  int *v28; // ebx
  int v29; // ebp
  __int16 v30; // cx
  int *v31; // eax
  unsigned int v32; // edx
  bool v33; // zf
  int v34; // esi
  _WORD *v35; // eax
  int *v36; // ebx
  int *v37; // edx
  int v38; // edi
  int v39; // edi
  int v40; // esi
  unsigned __int16 *v41; // eax
  int *v42; // edx
  unsigned __int16 v43; // cx
  unsigned __int16 v44; // bx
  unsigned __int16 *v45; // eax
  unsigned __int16 v46; // cx
  unsigned __int16 v47; // bx
  int v48; // edi
  unsigned __int16 v49; // cx
  int v50; // edx
  int v51; // eax
  int *v52; // ecx
  int *v53; // [esp+Ch] [ebp-Ch]
  int *v54; // [esp+10h] [ebp-8h]
  unsigned int v55; // [esp+14h] [ebp-4h]
  int v56; // [esp+20h] [ebp+8h]
  int v57; // [esp+24h] [ebp+Ch]
  unsigned __int16 *v58; // [esp+24h] [ebp+Ch]
  unsigned __int16 *v59; // [esp+24h] [ebp+Ch]
  unsigned __int16 *v60; // [esp+24h] [ebp+Ch]
  int v61; // [esp+2Ch] [ebp+14h]
  unsigned int v62; // [esp+2Ch] [ebp+14h]
  unsigned int v63; // [esp+2Ch] [ebp+14h]
  int v64; // [esp+30h] [ebp+18h]

  v6 = 2 * a6; /*0x74875e*/
  result = a3; /*0x748764*/
  v9 = a3; /*0x748770*/
  v10 = (char *)&a3[2 * a6 * a5]; /*0x748772*/
  v64 = a6; /*0x74877a*/
  v55 = (unsigned int)v10; /*0x74877e*/
  v53 = a3; /*0x748782*/
  v54 = &a3[2 * a4]; /*0x748786*/
  v61 = (int)a3; /*0x74878a*/
  if ( a3 < (int *)v10 ) /*0x74878e*/
  {
    do /*0x748adc*/
    {
      v11 = *a2++; /*0x74879d*/
      v12 = v11; /*0x7487a4*/
      v13 = v11 & 0xF000; /*0x7487a6*/
      v14 = v12 & 0xFFFF0FFF; /*0x7487ab*/
      if ( v13 > 12288 ) /*0x7487b6*/
      {
        if ( v13 == 20480 ) /*0x748967*/
        {
          if ( v14 ) /*0x748a6a*/
          {
            v48 = 4 * (v6 >> 1); /*0x748a6e*/
            do /*0x748aa8*/
            {
              v49 = *((_WORD *)unk_B1D14C + *a2); /*0x748a7b*/
              v50 = 2; /*0x748a7f*/
              v51 = v49 | (v49 << 16); /*0x748a8f*/
              ++a2; /*0x748a91*/
              v52 = v9; /*0x748a94*/
              do /*0x748a9e*/
              {
                *v52 = v51; /*0x748a96*/
                v52[1] = v51; /*0x748a98*/
                v52 = (int *)((char *)v52 + v48); /*0x748a9b*/
                --v50; /*0x748a9d*/
              }
              while ( v50 ); /*0x748a9e*/
              v9 += 2; /*0x748aa0*/
              --v14; /*0x748aa3*/
              v61 = (int)v9; /*0x748aa4*/
            }
            while ( v14 ); /*0x748aa8*/
          }
        }
        else if ( v13 == 24576 ) /*0x748972*/
        {
          if ( v14 ) /*0x7489ef*/
          {
            v39 = 4 * (v6 >> 1); /*0x7489f7*/
            v63 = v14; /*0x7489fa*/
            while ( 1 ) /*0x748a0d*/
            {
              v40 = 2; /*0x748a0d*/
              v41 = (unsigned __int16 *)(a1 + 32 * *a2); /*0x748a15*/
              v60 = a2 + 1; /*0x748a1a*/
              v42 = v9; /*0x748a1e*/
              do /*0x748a4e*/
              {
                v43 = v41[1]; /*0x748a24*/
                v44 = *v41; /*0x748a28*/
                v45 = v41 + 2; /*0x748a30*/
                *v42 = v44 | (v43 << 16); /*0x748a33*/
                v46 = v45[1]; /*0x748a37*/
                v47 = *v45; /*0x748a3d*/
                v41 = v45 + 6; /*0x748a40*/
                v42[1] = v47 | (v46 << 16); /*0x748a48*/
                v42 = (int *)((char *)v42 + v39); /*0x748a4b*/
                --v40; /*0x748a4d*/
              }
              while ( v40 ); /*0x748a4e*/
              v9 += 2; /*0x748a54*/
              if ( !--v63 ) /*0x748a5c*/
                break; /*0x748a5c*/
              a2 = v60; /*0x748a00*/
            }
            a2 = v60; /*0x748a5e*/
            v61 = (int)v9; /*0x748a62*/
          }
        }
        else if ( v13 == 28672 && v14 ) /*0x748981*/
        {
          v62 = v14; /*0x748987*/
          while ( 1 ) /*0x74899a*/
          {
            v34 = 2; /*0x74899a*/
            v35 = (_WORD *)(a1 + 32 * *a2); /*0x7489a2*/
            v59 = a2 + 1; /*0x7489a7*/
            v36 = v9; /*0x7489ab*/
            do /*0x7489d0*/
            {
              v37 = v36; /*0x7489ad*/
              v38 = 4; /*0x7489af*/
              do /*0x7489c6*/
              {
                if ( (HIBYTE(*v35) & 0x80u) == 0 ) /*0x7489ba*/
                  *(_WORD *)v37 = *v35; /*0x7489bc*/
                v37 = (int *)((char *)v37 + 2); /*0x7489bf*/
                ++v35; /*0x7489c2*/
                --v38; /*0x7489c5*/
              }
              while ( v38 ); /*0x7489c6*/
              --v34; /*0x7489cc*/
              v36 = (int *)((char *)v36 + 1 * v64); /*0x7489cd*/
            }
            while ( v34 ); /*0x7489d0*/
            v9 += 2; /*0x7489d6*/
            if ( !--v62 ) /*0x7489de*/
              break; /*0x7489de*/
            a2 = v59; /*0x74898d*/
          }
          a2 = v59; /*0x7489e0*/
          v61 = (int)v9; /*0x7489e4*/
        }
      }
      else if ( v13 == 12288 ) /*0x7487bc*/
      {
        v56 = 2; /*0x7488dc*/
        v27 = (__int16 *)(a1 + 32 * *a2); /*0x7488e3*/
        v58 = a2 + 1; /*0x7488e7*/
        while ( 1 ) /*0x7488f1*/
        {
          v28 = v9; /*0x7488f1*/
          v29 = 4; /*0x7488f3*/
          do /*0x748918*/
          {
            v30 = *v27; /*0x7488f8*/
            if ( (HIBYTE(*v27) & 0x80u) == 0 ) /*0x7488fe*/
            {
              v31 = v28; /*0x748902*/
              if ( v14 ) /*0x748904*/
              {
                v32 = v14; /*0x748906*/
                do /*0x74890f*/
                {
                  *(_WORD *)v31 = v30; /*0x748908*/
                  v31 += 2; /*0x74890b*/
                  --v32; /*0x74890e*/
                }
                while ( v32 ); /*0x74890f*/
              }
            }
            v28 = (int *)((char *)v28 + 2); /*0x748911*/
            ++v27; /*0x748914*/
            --v29; /*0x748917*/
          }
          while ( v29 ); /*0x748918*/
          v27 += 4; /*0x748922*/
          v33 = v56 == 1; /*0x74892c*/
          v61 += 1 * v64; /*0x74892d*/
          --v56; /*0x748931*/
          if ( v33 ) /*0x748935*/
            break; /*0x748935*/
          v9 = (int *)v61; /*0x7488ed*/
        }
        a2 = v58; /*0x748944*/
        v61 += 8 * v14 - 2 * v64; /*0x748957*/
        v9 = (int *)v61; /*0x74895b*/
      }
      else if ( v13 ) /*0x7487c4*/
      {
        if ( v13 == 4096 ) /*0x7487cf*/
        {
          v61 = (int)&v9[2 * v14]; /*0x74887f*/
          v9 = (int *)v61; /*0x748883*/
        }
        else if ( v13 == 0x2000 ) /*0x7487da*/
        {
          v57 = 2; /*0x7487e9*/
          v15 = (int *)(a1 + 32 * *a2++); /*0x7487f0*/
          while ( 1 ) /*0x748808*/
          {
            v16 = *v15; /*0x748808*/
            v17 = v15 + 1; /*0x74880a*/
            v18 = v9; /*0x74880f*/
            if ( v14 ) /*0x748811*/
            {
              v19 = v14; /*0x748813*/
              do /*0x74881b*/
              {
                *v18 = v16; /*0x748815*/
                v18 += 2; /*0x748817*/
                --v19; /*0x74881a*/
              }
              while ( v19 ); /*0x74881b*/
            }
            v20 = *v17; /*0x74882b*/
            v15 = v17 + 3; /*0x74882d*/
            v21 = v9 + 1; /*0x748832*/
            if ( v14 ) /*0x748835*/
            {
              v22 = v14; /*0x748837*/
              do /*0x74883f*/
              {
                *v21 = v20; /*0x748839*/
                v21 += 2; /*0x74883b*/
                --v22; /*0x74883e*/
              }
              while ( v22 ); /*0x74883f*/
            }
            if ( !--v57 ) /*0x748856*/
              break; /*0x748856*/
            v9 = (int *)((char *)v9 + 1 * v64); /*0x7487f6*/
          }
          v61 = (int)&v9[v64] + 8 * v14 - 2 * v64; /*0x748870*/
          v9 = (int *)v61; /*0x748874*/
        }
      }
      else
      {
        v23 = *a2++; /*0x748891*/
        v24 = 2 * v14; /*0x748896*/
        v25 = *((unsigned __int16 *)unk_B1D14C + v23); /*0x74889d*/
        v26 = v25 | (v25 << 16); /*0x7488a8*/
        if ( 2 * v14 ) /*0x748896*/
          memset32(v9, v26, v24); /*0x7488b2*/
        if ( v24 ) /*0x7488be*/
          memset32(&v9[v64], v26, v24); /*0x7488c2*/
        v61 = (int)&v9[2 * v14]; /*0x7488c8*/
        v9 = (int *)v61; /*0x7488cc*/
      }
      result = v54; /*0x748aaa*/
      v6 = v64 * 2; /*0x748aae*/
      if ( v9 == v54 ) /*0x748ab4*/
      {
        v53 += v64 * 2; /*0x748ac7*/
        v61 = (int)v53; /*0x748acb*/
        result = &v53[2 * a4]; /*0x748acf*/
        v9 = v53; /*0x748ad2*/
        v54 = result; /*0x748ad4*/
      }
    }
    while ( (unsigned int)v9 < v55 ); /*0x748adc*/
  }
  return result; /*0x748ae3*/
}


// ==== 0x00748AF0  sub_748AF0  this=-  sig=ida-proto ====
unsigned int __cdecl sub_748AF0(int a1, _WORD *a2, int *a3, unsigned int a4, int a5, int a6)
{
  int *v6; // edx
  int v7; // ebp
  int v8; // ecx
  unsigned int result; // eax
  int v11; // ecx
  _WORD *v12; // eax
  int v13; // ebx
  int *v14; // esi
  int v15; // edi
  unsigned __int16 *v16; // eax
  int v17; // esi
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // bx
  unsigned __int16 *v20; // eax
  unsigned __int16 v21; // cx
  unsigned __int16 v22; // bx
  unsigned int v23; // [esp+8h] [ebp-4h]
  _WORD *v24; // [esp+18h] [ebp+Ch]
  int *v25; // [esp+20h] [ebp+14h]
  int *v26; // [esp+24h] [ebp+18h]

  v6 = a3; /*0x748afa*/
  v7 = 2 * a6; /*0x748afe*/
  v8 = 2 * a6 * a5; /*0x748b02*/
  v26 = a3; /*0x748b09*/
  result = (unsigned int)&a3[v8]; /*0x748b0d*/
  v23 = result; /*0x748b16*/
  v25 = &a3[2 * a4]; /*0x748b1d*/
  if ( (unsigned int)a3 < result ) /*0x748b21*/
  {
    while ( 1 ) /*0x748b37*/
    {
      result = *a2 & 0x1FFF; /*0x748b37*/
      v11 = *a2 & 0xE000; /*0x748b3c*/
      v24 = a2 + 1; /*0x748b42*/
      if ( (*a2 & 0xE000) == 0 ) /*0x748b48*/
        break; /*0x748b48*/
      if ( v11 == 0x2000 ) /*0x748b50*/
      {
        v12 = (_WORD *)(a1 + 32 * (*a2 & 0x1FFF)); /*0x748b72*/
        v13 = 2; /*0x748b74*/
        do /*0x748b9b*/
        {
          v14 = v6; /*0x748b79*/
          v15 = 4; /*0x748b7b*/
          do /*0x748b92*/
          {
            if ( (HIBYTE(*v12) & 0x80u) == 0 ) /*0x748b86*/
              *(_WORD *)v14 = *v12; /*0x748b88*/
            v14 = (int *)((char *)v14 + 2); /*0x748b8b*/
            ++v12; /*0x748b8e*/
            --v15; /*0x748b91*/
          }
          while ( v15 ); /*0x748b92*/
          v12 += 4; /*0x748b94*/
          --v13; /*0x748b97*/
          v6 = (int *)((char *)v6 + 2 * v7); /*0x748b98*/
        }
        while ( v13 ); /*0x748b9b*/
        goto LABEL_17; /*0x748b9b*/
      }
      if ( v11 == 0x4000 ) /*0x748b58*/
        v6 += 2; /*0x748b5e*/
LABEL_18:
      if ( v6 == v25 ) /*0x748bfa*/
      {
        v6 = &v26[v7]; /*0x748c07*/
        result = a4; /*0x748c09*/
        v26 = v6; /*0x748c0d*/
        v25 = &v6[2 * a4]; /*0x748c14*/
      }
      if ( (unsigned int)v6 >= v23 ) /*0x748c1c*/
        return result; /*0x748c1c*/
      a2 = v24; /*0x748b2b*/
    }
    v16 = (unsigned __int16 *)(a1 + 32 * (*a2 & 0x1FFF)); /*0x748bab*/
    v17 = 2; /*0x748bb1*/
    do /*0x748be4*/
    {
      v18 = v16[1]; /*0x748bba*/
      v19 = *v16; /*0x748bbe*/
      v20 = v16 + 2; /*0x748bc6*/
      *v6 = v19 | (v18 << 16); /*0x748bc9*/
      v21 = v20[1]; /*0x748bcd*/
      v22 = *v20; /*0x748bd3*/
      v16 = v20 + 6; /*0x748bd6*/
      v6[1] = v22 | (v21 << 16); /*0x748bde*/
      v6 = (int *)((char *)v6 + 2 * v7); /*0x748be1*/
      --v17; /*0x748be3*/
    }
    while ( v17 ); /*0x748be4*/
LABEL_17:
    result = 4 * v7; /*0x748be6*/
    v6 = (int *)((char *)v6 + 8 - 4 * v7); /*0x748bf4*/
    goto LABEL_18; /*0x748bf4*/
  }
  return result; /*0x748c24*/
}


// ==== 0x00748C30  IsoTile::Decode8BitV2  this=IsoTile  sig=ida-proto ====
unsigned int __cdecl IsoTile_Decode8BitV2(int a1, unsigned __int8 *a2, int *a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // ebx
  int v7; // ecx
  int *v8; // esi
  unsigned int result; // eax
  __int16 v11; // ax
  unsigned __int8 *v12; // edi
  __int16 v13; // cx
  unsigned int v14; // ecx
  int v15; // ecx
  int *v16; // edi
  unsigned __int16 *v17; // ecx
  unsigned int v18; // ebx
  int v19; // eax
  unsigned __int16 v20; // dx
  unsigned __int16 v21; // bp
  unsigned __int16 *v22; // ecx
  unsigned __int16 v23; // dx
  unsigned __int16 v24; // bp
  unsigned __int8 *v25; // ecx
  int v26; // ebx
  int *v27; // edx
  unsigned __int16 *v28; // eax
  int v29; // edi
  unsigned __int16 v30; // cx
  unsigned __int16 v31; // bp
  unsigned __int16 *v32; // eax
  unsigned __int16 v33; // cx
  unsigned __int16 v34; // bp
  int v35; // ecx
  int v36; // edx
  int *v37; // ecx
  int v38; // eax
  int *v39; // ecx
  int *v40; // edi
  int v41; // ebp
  int v42; // eax
  _DWORD *v43; // edi
  int v44; // ebp
  unsigned __int16 *v45; // eax
  int v46; // edx
  unsigned __int16 v47; // cx
  unsigned __int16 v48; // bp
  unsigned __int16 *v49; // eax
  unsigned __int16 v50; // cx
  unsigned __int16 v51; // bp
  int v52; // ebx
  __int16 *v53; // edi
  int *v54; // ebp
  __int16 v55; // cx
  int *v56; // eax
  int v57; // edx
  int v58; // ecx
  _WORD *v59; // eax
  int v60; // ebp
  int *v61; // edx
  int v62; // edi
  int *v63; // [esp+Ch] [ebp-Ch]
  int *v64; // [esp+10h] [ebp-8h]
  unsigned int v65; // [esp+14h] [ebp-4h]
  int v66; // [esp+20h] [ebp+8h]
  int v67; // [esp+24h] [ebp+Ch]
  unsigned __int8 *v68; // [esp+24h] [ebp+Ch]
  int v69; // [esp+24h] [ebp+Ch]
  int v70; // [esp+24h] [ebp+Ch]
  unsigned __int8 *v71; // [esp+2Ch] [ebp+14h]
  int v72; // [esp+2Ch] [ebp+14h]
  int v73; // [esp+30h] [ebp+18h]

  v6 = 2 * a6; /*0x748c40*/
  v7 = 2 * a6 * a5; /*0x748c44*/
  v8 = a3; /*0x748c47*/
  v73 = 2 * a6; /*0x748c50*/
  result = (unsigned int)&a3[v7]; /*0x748c54*/
  v65 = result; /*0x748c5c*/
  v63 = a3; /*0x748c60*/
  v64 = &a3[2 * a4]; /*0x748c64*/
  if ( (unsigned int)a3 < result ) /*0x748c68*/
  {
    while ( 1 ) /*0x748c75*/
    {
      v11 = *(_WORD *)a2; /*0x748c75*/
      v12 = a2 + 2; /*0x748c78*/
      v13 = v11; /*0x748c7b*/
      result = v11 & 0x1FFF; /*0x748c7d*/
      v14 = v13 & 0xE000; /*0x748c82*/
      v71 = v12; /*0x748c88*/
      if ( v14 <= 0x6000 ) /*0x748c92*/
        break; /*0x748c92*/
      switch ( v14 ) /*0x748eaa*/
      {
        case 0x8000u: /*0x748eaa*/
          v59 = (_WORD *)(a1 + 32 * (unsigned __int16)result); /*0x748f5c*/
          v60 = 4; /*0x748f5e*/
          do /*0x748f85*/
          {
            v61 = v8; /*0x748f63*/
            v62 = 4; /*0x748f65*/
            do /*0x748f7c*/
            {
              if ( (HIBYTE(*v59) & 0x80u) == 0 ) /*0x748f70*/
                *(_WORD *)v61 = *v59; /*0x748f72*/
              v61 = (int *)((char *)v61 + 2); /*0x748f75*/
              ++v59; /*0x748f78*/
              --v62; /*0x748f7b*/
            }
            while ( v62 ); /*0x748f7c*/
            v59 += 4; /*0x748f7e*/
            --v60; /*0x748f81*/
            v8 = (int *)((char *)v8 + 2 * v6); /*0x748f82*/
          }
          while ( v60 ); /*0x748f85*/
          goto LABEL_52; /*0x748f85*/
        case 0xA000u: /*0x748eaa*/
          goto LABEL_18; /*0x748eb6*/
        case 0xC000u: /*0x748eaa*/
          v52 = *v12; /*0x748ece*/
          v71 = v12 + 1; /*0x748edf*/
          v53 = (__int16 *)(a1 + 32 * (unsigned __int16)result); /*0x748ee3*/
          v66 = 2; /*0x748ee5*/
          do /*0x748f34*/
          {
            v54 = v8; /*0x748eed*/
            v70 = 4; /*0x748eef*/
            do /*0x748f1f*/
            {
              v55 = *v53; /*0x748ef7*/
              if ( (HIBYTE(*v53) & 0x80u) == 0 ) /*0x748efd*/
              {
                v56 = v54; /*0x748f01*/
                if ( v52 ) /*0x748f03*/
                {
                  v57 = v52; /*0x748f05*/
                  do /*0x748f0e*/
                  {
                    *(_WORD *)v56 = v55; /*0x748f07*/
                    v56 += 2; /*0x748f0a*/
                    --v57; /*0x748f0d*/
                  }
                  while ( v57 ); /*0x748f0e*/
                }
              }
              v54 = (int *)((char *)v54 + 2); /*0x748f14*/
              ++v53; /*0x748f17*/
              --v70; /*0x748f1b*/
            }
            while ( v70 ); /*0x748f1f*/
            v53 += 4; /*0x748f25*/
            v8 = (int *)((char *)v8 + 2 * v73); /*0x748f28*/
            --v66; /*0x748f30*/
          }
          while ( v66 ); /*0x748f34*/
          v58 = 8 * v52; /*0x748f3a*/
          v6 = v73; /*0x748f41*/
          result = 4 * v73; /*0x748f43*/
          v8 = (int *)((char *)v8 + v58 - 4 * v73); /*0x748f4c*/
          break;
      }
LABEL_53:
      if ( v8 == v64 ) /*0x748f9b*/
      {
        v8 = &v63[v6]; /*0x748fa8*/
        result = a4; /*0x748faa*/
        v63 = v8; /*0x748fae*/
        v64 = &v8[2 * a4]; /*0x748fb5*/
      }
      if ( (unsigned int)v8 >= v65 ) /*0x748fbd*/
        return result; /*0x748fbd*/
      a2 = v71; /*0x748c71*/
    }
    if ( v14 == 24576 ) /*0x748c98*/
    {
      v45 = (unsigned __int16 *)(a1 + 32 * (unsigned __int16)result); /*0x748e65*/
      v46 = 4; /*0x748e6a*/
      do /*0x748e9d*/
      {
        v47 = v45[1]; /*0x748e73*/
        v48 = *v45; /*0x748e77*/
        v49 = v45 + 2; /*0x748e7f*/
        *v8 = v48 | (v47 << 16); /*0x748e82*/
        v50 = v49[1]; /*0x748e86*/
        v51 = *v49; /*0x748e8c*/
        v45 = v49 + 6; /*0x748e8f*/
        v8[1] = v51 | (v50 << 16); /*0x748e97*/
        v8 = (int *)((char *)v8 + 2 * v6); /*0x748e9a*/
        --v46; /*0x748e9c*/
      }
      while ( v46 ); /*0x748e9d*/
LABEL_52:
      result = 4 * v6; /*0x748f87*/
      v8 = (int *)((char *)v8 + 8 - 4 * v6); /*0x748f95*/
      goto LABEL_53; /*0x748f95*/
    }
    if ( !v14 ) /*0x748ca0*/
    {
      result = (unsigned __int8)result; /*0x748e4c*/
      v8 += 2 * (unsigned __int8)result; /*0x748e51*/
      goto LABEL_53; /*0x748e54*/
    }
    if ( v14 != 0x2000 ) /*0x748cac*/
    {
      if ( v14 == 0x4000 ) /*0x748cb8*/
      {
        v15 = *(v12 - 2); /*0x748cc4*/
        v16 = v8; /*0x748cc7*/
        v67 = ((result >> 7) & 0x3E) + 2; /*0x748cd5*/
        v17 = (unsigned __int16 *)(a1 + 32 * v15); /*0x748cd9*/
        v18 = v6 >> 2; /*0x748cdb*/
        v19 = 2; /*0x748cde*/
        do /*0x748d18*/
        {
          v20 = v17[1]; /*0x748ce7*/
          v21 = *v17; /*0x748ceb*/
          v22 = v17 + 2; /*0x748cf3*/
          *v16 = v21 | (v20 << 16); /*0x748cf6*/
          v23 = v22[1]; /*0x748cfa*/
          v24 = *v22; /*0x748d00*/
          v17 = v22 + 6; /*0x748d03*/
          v16[1] = v24 | (v23 << 16); /*0x748d0b*/
          v16 += v18; /*0x748d15*/
          --v19; /*0x748d17*/
        }
        while ( v19 ); /*0x748d18*/
        result = v67; /*0x748d1a*/
        v25 = v71; /*0x748d1e*/
        v8 += 2; /*0x748d22*/
        if ( v67 ) /*0x748d27*/
        {
          v26 = 8 * v18; /*0x748d29*/
          v72 = v67; /*0x748d2c*/
          do /*0x748d89*/
          {
            v27 = v8; /*0x748d32*/
            v68 = v25 + 1; /*0x748d37*/
            v28 = (unsigned __int16 *)(a1 + 32 * *v25); /*0x748d42*/
            v29 = 2; /*0x748d44*/
            do /*0x748d77*/
            {
              v30 = v28[1]; /*0x748d4d*/
              v31 = *v28; /*0x748d51*/
              v32 = v28 + 2; /*0x748d59*/
              *v27 = v31 | (v30 << 16); /*0x748d5c*/
              v33 = v32[1]; /*0x748d60*/
              v34 = *v32; /*0x748d66*/
              v28 = v32 + 6; /*0x748d69*/
              v27[1] = v34 | (v33 << 16); /*0x748d71*/
              v27 = (int *)((char *)v27 + v26); /*0x748d74*/
              --v29; /*0x748d76*/
            }
            while ( v29 ); /*0x748d77*/
            v25 = v68; /*0x748d7d*/
            v8 += 2; /*0x748d81*/
            result = --v72; /*0x748d84*/
          }
          while ( v72 ); /*0x748d89*/
        }
        v6 = v73; /*0x748d8b*/
        v71 = v25; /*0x748d8f*/
      }
      goto LABEL_53; /*0x748d93*/
    }
    v35 = (unsigned __int8)result; /*0x748da2*/
    v36 = (((unsigned __int16)result >> 7) & 0x3E) + 2; /*0x748dae*/
    if ( (((unsigned __int16)result >> 7) & 0x3E) == 0xFFFFFFFE ) /*0x748db3*/
    {
LABEL_18:
      v36 = *v12; /*0x748db5*/
      v35 = (unsigned __int16)result; /*0x748dbf*/
      v71 = v12 + 1; /*0x748dc1*/
    }
    v69 = 2; /*0x748dc9*/
    v37 = (int *)(a1 + 32 * v35); /*0x748dd4*/
    do /*0x748e31*/
    {
      v38 = *v37; /*0x748de4*/
      v39 = v37 + 1; /*0x748de6*/
      v40 = v8; /*0x748deb*/
      if ( v36 ) /*0x748ded*/
      {
        v41 = v36; /*0x748def*/
        do /*0x748df7*/
        {
          *v40 = v38; /*0x748df1*/
          v40 += 2; /*0x748df3*/
          --v41; /*0x748df6*/
        }
        while ( v41 ); /*0x748df7*/
        v6 = v73; /*0x748df9*/
      }
      v42 = *v39; /*0x748e0b*/
      v37 = v39 + 3; /*0x748e0d*/
      v43 = v8 + 1; /*0x748e12*/
      if ( v36 ) /*0x748e15*/
      {
        v44 = v36; /*0x748e17*/
        do /*0x748e1f*/
        {
          *v43 = v42; /*0x748e19*/
          v43 += 2; /*0x748e1b*/
          --v44; /*0x748e1e*/
        }
        while ( v44 ); /*0x748e1f*/
        v6 = v73; /*0x748e21*/
      }
      v8 = (int *)((char *)v8 + 2 * v6); /*0x748e29*/
      --v69; /*0x748e2d*/
    }
    while ( v69 ); /*0x748e31*/
    result = 4 * v6; /*0x748e3c*/
    v8 = (int *)((char *)v8 + 8 * v36 - 4 * v6); /*0x748e45*/
    goto LABEL_53; /*0x748e47*/
  }
  return result; /*0x748fc4*/
}


// ==== 0x00748FD0  HouseClass::ClearStatArray  this=int  sig=csp ====
_DWORD *__thiscall HouseClass_ClearStatArray(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // ecx
  _DWORD *v3; // edx

  result = this; /*0x748fd0*/
  v2 = 0; /*0x748fd3*/
  v3 = result; /*0x748fd5*/
  result[512] = 512; /*0x748fd7*/
  do /*0x748ff3*/
  {
    *v3 = 0; /*0x748fe1*/
    ++v2; /*0x748fed*/
    ++v3; /*0x748fee*/
  }
  while ( v2 < result[512] ); /*0x748ff3*/
  result[513] = 0; /*0x748ff5*/
  return result; /*0x748fff*/
}


// ==== 0x00749010  ObjectClass::nullsub_143  this=ObjectClass  sig=csp ====
void nullsub_143()
{
  ; /*0x749010*/
}


// ==== 0x00749020  HouseClass::IncrementStat  this=VOID_PTR  sig=csp ====
int __thiscall HouseClass_IncrementStat(_DWORD *this, int a2)
{
  int result; // eax

  result = a2; /*0x749020*/
  if ( a2 < *(this + 512) ) /*0x74902c*/
    ++*(this + a2); /*0x74902e*/
  return result; /*0x749031*/
}


// ==== 0x00749060  HouseClass::InitStatArray  this=AbstractClass  sig=csp ====
int __thiscall HouseClass::InitStatArray(_DWORD *this, AbstractClass *aP1)
{
  int v2; // eax
  HouseClass *v3; // edx

  *(this + 512) = 512; /*0x749061*/
  v2 = 0; /*0x74906b*/
  v3 = (HouseClass *)this; /*0x74906d*/
  do /*0x749081*/
  {
    *(_DWORD *)v3->__pad_0 = 0; /*0x74906f*/
    ++v2; /*0x74907b*/
    v3 = (HouseClass *)((char *)v3 + 4); /*0x74907c*/
  }
  while ( v2 < *(this + 512) ); /*0x749081*/
  *(this + 512) = aP1; /*0x749088*/
  return (int)aP1->__pad_0; /*0x749087*/
}


// ==== 0x007490A0  SumArray  this=unknown  sig=csp ====
int __fastcall Array_Sum(int *a1)
{
  int v1; // edx
  int result; // eax
  int v3; // esi

  v1 = a1[512]; /*0x7490a0*/
  result = 0; /*0x7490a6*/
  if ( v1 > 0 ) /*0x7490aa*/
  {
    do /*0x7490b5*/
    {
      v3 = *a1++; /*0x7490ad*/
      result += v3; /*0x7490b2*/
      --v1; /*0x7490b4*/
    }
    while ( v1 ); /*0x7490b5*/
  }
  return result; /*0x7490b8*/
}


// ==== 0x007490C0  ObjectClass::??0Iostream_init_QAE_XZ_7  this=int  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_7(Iostream_init *this)
{
  return this; /*0x7490c2*/
}


// ==== 0x007490D0  Array::Zero  this=int  sig=csp ====
int __thiscall Array_Zero(_DWORD *this)
{
  int result; // eax
  _DWORD *v2; // edx

  result = 0; /*0x7490d6*/
  if ( (int)*(this + 512) > 0 ) /*0x7490da*/
  {
    v2 = this; /*0x7490dd*/
    do /*0x7490f1*/
    {
      *v2 = 0; /*0x7490df*/
      ++result; /*0x7490eb*/
      ++v2; /*0x7490ec*/
    }
    while ( result < *(this + 512) ); /*0x7490f1*/
  }
  return result; /*0x7490f4*/
}


// ==== 0x00749100  HouseClass::NetworkConvert  this=int  sig=csp ====
int __thiscall HouseClass_NetworkConvert(_DWORD *this)
{
  int result; // eax
  int v3; // ebx
  u_long *v4; // esi

  result = *(this + 513); /*0x749104*/
  if ( result || (result = *(this + 512), v3 = 0, result <= 0) ) /*0x749118*/
  {
    *(this + 513) = 1; /*0x749143*/
  }
  else
  {
    v4 = this; /*0x74911b*/
    do /*0x749133*/
    {
      *v4 = htonl(*v4); /*0x749125*/
      result = *(this + 512); /*0x749127*/
      ++v3; /*0x74912d*/
      ++v4; /*0x74912e*/
    }
    while ( v3 < result ); /*0x749133*/
    *(this + 513) = 1; /*0x749135*/
  }
  return result; /*0x749140*/
}


// ==== 0x00749150  Array::ByteSwap  this=int  sig=csp ====
void __thiscall Array_ByteSwap(u_long *this)
{
  signed int v2; // ebx
  u_long *v3; // esi

  if ( *(this + 513) && (v2 = 0, (int)*(this + 512) > 0) ) /*0x749169*/
  {
    v3 = this; /*0x74916c*/
    do /*0x749184*/
    {
      *v3 = ntohl(*v3); /*0x749176*/
      ++v2; /*0x74917e*/
      ++v3; /*0x74917f*/
    }
    while ( v2 < (int)*(this + 512) ); /*0x749184*/
    *(this + 513) = 0; /*0x749186*/
  }
  else
  {
    *(this + 513) = 0; /*0x749191*/
  }
}


// ==== 0x007491A0  sub_7491A0  this=-  sig=ida-proto ====
void sub_7491A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7491ac*/
  unk_B1D170 = Math::Sqrt(v0 + v0); /*0x7491be*/
}


// ==== 0x007491D0  sub_7491D0  this=-  sig=ida-proto ====
void sub_7491D0()
{
  MEMORY[0xB1D1C0] = unk_B1D170 / 60.0; /*0x7491dc*/
}


// ==== 0x007491F0  sub_7491F0  this=-  sig=ida-proto ====
void sub_7491F0()
{
  MEMORY[0xB1D1A8] = 1.0 / MEMORY[0xB1D1C0]; /*0x7491fc*/
}


// ==== 0x00749210  sub_749210  this=-  sig=ida-proto ====
void sub_749210()
{
  MEMORY[0xB1D1A0] = 0.0174532925199433 * 45.0; /*0x74921c*/
}


// ==== 0x00749230  sub_749230  this=-  sig=ida-proto ====
void sub_749230()
{
  unk_B1D178 = 0.0174532925199433 * 60.0; /*0x74923c*/
}


// ==== 0x00749250  sub_749250  this=-  sig=ida-proto ====
void sub_749250()
{
  unk_B1D150 = 0.0174532925199433 * 90.0; /*0x74925c*/
}


// ==== 0x00749270  sub_749270  this=-  sig=ida-proto ====
__int64 sub_749270()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_B1D150 - unk_B1D178); /*0x749282*/
  result = Math::RoundToInt(v0 * unk_B1D170 * 0.5); /*0x749296*/
  MEMORY[0xB1D1C8] = result; /*0x74929b*/
  return result; /*0x7492a0*/
}


// ==== 0x007492B0  ArcTan::Update  this=ArcTan  sig=ida-proto ====
void ArcTan_Update()
{
  unk_B1D180 = Math::ArcTan((double)MEMORY[0xB1D1C8] * 0.00390625); /*0x7492c7*/
}


// ==== 0x007492E0  sub_7492E0  this=-  sig=ida-proto ====
void sub_7492E0()
{
  MEMORY[0xB1D198] = Math::ArcTan((double)(2 * MEMORY[0xB1D1C8]) / unk_B1D170); /*0x749302*/
}


// ==== 0x00749310  sub_749310  this=-  sig=ida-proto ====
__int64 sub_749310()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB1D1C8]) + 0.5); /*0x74932b*/
  MEMORY[0xB1D1BC] = result; /*0x749330*/
  return result; /*0x749336*/
}


// ==== 0x00749340  sub_749340  this=-  sig=ida-proto ====
int sub_749340()
{
  unk_B1D168 = 0; /*0x749342*/
  unk_B1D16A = 0; /*0x749348*/
  return 0; /*0x74934e*/
}


// ==== 0x00749350  sub_749350  this=-  sig=ida-proto ====
int sub_749350()
{
  stru_B1D188 = 0; /*0x749352*/
  MEMORY[0xB1D18C] = 0; /*0x749357*/
  MEMORY[0xB1D190] = 0; /*0x74935c*/
  return 0; /*0x749361*/
}


// ==== 0x00749370  sub_749370  this=-  sig=ida-proto ====
int sub_749370()
{
  MEMORY[0xB1D1B8] = 0; /*0x749375*/
  MEMORY[0xB1D1B0] = 128; /*0x74937f*/
  MEMORY[0xB1D1B4] = 128; /*0x749384*/
  return 128; /*0x749389*/
}


// ==== 0x00749390  sub_749390  this=-  sig=ida-proto ====
int sub_749390()
{
  unk_B1D158 = 0; /*0x749392*/
  unk_B1D15C = 0; /*0x749397*/
  unk_B1D160 = 0; /*0x74939c*/
  unk_B1D164 = 0; /*0x7493a1*/
  return 0; /*0x7493a6*/
}


// ==== 0x007493B0  VoxelAnimClass::Constructor  this=VoxelAnimClass  sig=csp ====
VoxelAnimClass *__thiscall DamageAnimClass::Constructor(void *this, VoxelAnimClass *aP1, IUnknown *aP2, int a4)
{
  int v5; // eax
  int *v6; // eax
  int v7; // ecx
  IUnknown *v8; // edx
  int v9; // eax
  ScenarioClass *v10; // ebx
  int v11; // eax
  AbstractClass *v12; // edi
  double v13; // st7
  double v14; // st6
  int v15; // eax
  AbstractClass *v16; // ebx
  double v17; // st7
  int v18; // eax
  double v19; // st7
  signed int v20; // edx
  double v21; // st7
  IUnknown *v22; // eax
  double v23; // st6
  double v24; // st7
  signed int v25; // ebx
  int v26; // edx
  AbstractClass *v27; // eax
  AudioController *v28; // ecx
  ParticleSystemClass *v29; // edi
  IUnknown *v30; // eax
  IUnknown *Coords; // [esp-18h] [ebp-68h]
  int nextArrayIndex; // [esp-14h] [ebp-64h]
  VoxelAnimClass *referenceCount; // [esp-10h] [ebp-60h]
  double aP9; // [esp+8h] [ebp-48h]
  double aP9a; // [esp+8h] [ebp-48h]
  int v37; // [esp+1Ch] [ebp-34h]
  float v38; // [esp+1Ch] [ebp-34h]
  int v39; // [esp+20h] [ebp-30h]
  float v40; // [esp+20h] [ebp-30h]
  int v41; // [esp+24h] [ebp-2Ch]
  int v42; // [esp+24h] [ebp-2Ch]
  int v43; // [esp+28h] [ebp-28h]
  int v44; // [esp+28h] [ebp-28h]
  float a8; // [esp+2Ch] [ebp-24h] BYREF
  float v46; // [esp+30h] [ebp-20h]
  float v47; // [esp+34h] [ebp-1Ch]
  int v48; // [esp+38h] [ebp-18h] BYREF
  IUnknown *v49; // [esp+3Ch] [ebp-14h]
  int v50; // [esp+40h] [ebp-10h]

  ObjectClass::ctor(this); /*0x7493be*/
  this->q0B0 = 0; /*0x7493d2*/
  this->q0B8 = 0; /*0x7493d4*/
  this->q0C0 = 0; /*0x7493d7*/
  this->q0B4 = 0; /*0x7493de*/
  this->q0BC = 0; /*0x7493e1*/
  this->q0C4 = 0; /*0x7493e4*/
  Int4::Set((_DWORD *)this + 56, 0, 0, 0, 1065353216); /*0x7493e7*/
  Int4::Set((_DWORD *)this + 60, 0, 0, 0, 1065353216); /*0x7493f7*/
  this->VoxelAnimClass_field_0x104 = aP1; /*0x749402*/
  this->VoxelAnimClass_field_0x100 = -1; /*0x74940c*/
  this->VoxelAnimClass_field_0x108 = 0; /*0x749416*/
  this->VoxelAnimClass_field_0x10C = a4; /*0x74941c*/
  *((_BYTE *)this + 272) = 0; /*0x749422*/
  *((_BYTE *)this + 316) = 0; /*0x749428*/
  this->VoxelAnimClass_field_0x140 = 0; /*0x74942e*/
  *(_DWORD *)this = &VoxelAnimClass::`vftable'; /*0x749434*/
  this->vtable2 = &VoxelAnimClass::`vftable'; /*0x74943a*/
  this->vtable3 = &VoxelAnimClass::`vftable'; /*0x749440*/
  this->vtable4 = &vt_VoxelAnimClass; /*0x749447*/
  AbstractClass::GenerateUniqueID((int)this + 4); /*0x74944e*/
  AudioController::Init((_DWORD *)this + 69); /*0x749459*/
  AudioController::Init((_DWORD *)this + 74); /*0x749464*/
  this->VoxelAnimClass_field_0x140 = *(_DWORD *)(this->VoxelAnimClass_field_0x104 + 668); /*0x749475*/
  if ( *(int *)&stru_87C374.__pad_579C[22664] < *(int *)&stru_87C374.__pad_579C[22656] /*0x7494af*/
    || (stru_87C374.__pad_579C[22661] || !*(_DWORD *)&stru_87C374.__pad_579C[22656])
    && *(int *)&stru_87C374.__pad_579C[22668] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_87C374.__pad_579C[22648] + 8))(
         &stru_87C374.__pad_579C[22648],
         *(_DWORD *)&stru_87C374.__pad_579C[22656] + *(_DWORD *)&stru_87C374.__pad_579C[22668],
         0) )
  {
    v5 = (*(_DWORD *)&stru_87C374.__pad_579C[22664])++; /*0x7494bc*/
    *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22652] + 4 * v5) = this; /*0x7494cb*/
  }
  if ( *(_BYTE *)(this->VoxelAnimClass_field_0x104 + 720) ) /*0x7494d4*/
  {
    v44 = Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)); /*0x74967e*/
    v15 = Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)); /*0x749688*/
    v16 = (AbstractClass *)this->VoxelAnimClass_field_0x104; /*0x74968d*/
    v42 = v15; /*0x749693*/
    v17 = *(double *)&v16[19].__pad_0[12]; /*0x749697*/
    v18 = Math::RoundToInt(v17); /*0x7496a5*/
    v40 = (double)((int)abs32(v44) % v18) - *(double *)&v16[19].referenceCount; /*0x7496d2*/
    a8 = (double)((int)abs32(v42) % v18) - *(double *)&v16[19].referenceCount; /*0x7496e4*/
    v46 = v40; /*0x7496e8*/
    v47 = v17; /*0x7496ec*/
    v19 = -v40; /*0x7496f4*/
    if ( a8 < v19 ) /*0x749701*/
    {
      a8 = -a8; /*0x749709*/
      v46 = v19; /*0x74970d*/
    }
    v20 = this->VoxelAnimClass_field_0x140 /*0x74973d*/
        - abs32(Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)) % 20);
    this->VoxelAnimClass_field_0x140 = v20; /*0x74973f*/
    v21 = (double)v20; /*0x74974c*/
    v48 = Math::RoundToInt(v21); /*0x749768*/
    v22 = (IUnknown *)Math::RoundToInt(v21); /*0x74976e*/
    v23 = v21; /*0x749776*/
    v24 = (double)aP2->field_8; /*0x749776*/
    v49 = v22; /*0x74977c*/
    v50 = Math::RoundToInt(v24 - v23 * v47); /*0x749787*/
    ObjectClass::Deploy((#374 *)this); /*0x749794*/
    v25 = abs32(Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536))); /*0x7497c7*/
    v26 = v25 /*0x7497d3*/
        % (int)Math::RoundToInt(*(double *)(this->VoxelAnimClass_field_0x104 + 688) - *(double *)(this->VoxelAnimClass_field_0x104 + 680) + 1.0);
    v27 = (AbstractClass *)this->VoxelAnimClass_field_0x104; /*0x7497d5*/
    aP9a = (double)v26 + *(double *)&v27[18].NeedsSaveOrLink; /*0x7497f6*/
    referenceCount = (VoxelAnimClass *)v27[18].referenceCount; /*0x74980e*/
    nextArrayIndex = v27[18].nextArrayIndex; /*0x749813*/
    Coords = (IUnknown *)ObjectClass::GetCoords((#374 *)this); /*0x74981c*/
    AnimClass::InitRotation( /*0x74981f*/
      (char *)this + 176,
      Coords,
      nextArrayIndex,
      (int)referenceCount,
      1610612736,
      1073112678,
      0,
      0,
      &a8,
      (IUnknown *)LODWORD(aP9a));
  }
  else
  {
    ObjectClass::Deploy((#374 *)this); /*0x7494e9*/
    v6 = (int *)ObjectClass::GetCoords((#374 *)this); /*0x7494f5*/
    v7 = *v6; /*0x7494fa*/
    v8 = (IUnknown *)v6[1]; /*0x7494fc*/
    v9 = v6[2]; /*0x7494ff*/
    v49 = v8; /*0x749502*/
    v48 = v7; /*0x74950f*/
    v50 = v9 + 10; /*0x749513*/
    v43 = Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)); /*0x749522*/
    v10 = (ScenarioClass *)Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)); /*0x74953c*/
    v37 = Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)); /*0x74954f*/
    v11 = Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)); /*0x749559*/
    v12 = (AbstractClass *)this->VoxelAnimClass_field_0x104; /*0x74955e*/
    v39 = v11; /*0x749564*/
    v41 = Math::RoundToInt(*(double *)&v12[19].referenceCount + *(double *)&v12[19].referenceCount); /*0x74957e*/
    v13 = (double)((int)abs32(v37) % v41) - *(double *)&v12[19].referenceCount; /*0x749592*/
    v38 = (double)((int)abs32((int)v10) % (int)Math::RoundToInt(v13)) + *(double *)&v12[19].__pad_0[12]; /*0x7495d8*/
    v14 = (double)((int)abs32(v39) % v41) - *(double *)&v12[19].referenceCount; /*0x7495ec*/
    v47 = v38; /*0x7495f2*/
    a8 = v14; /*0x7495f6*/
    v46 = v13; /*0x7495fa*/
    aP9 = (double)((int)abs32(v43) /*0x749644*/
                 % (int)Math::RoundToInt(*(double *)&v12[19].__pad_0[4] - *(double *)&v12[18].NeedsSaveOrLink + 1.0))
        + *(double *)&v12[18].NeedsSaveOrLink;
    AnimClass::InitRotation( /*0x749663*/
      (char *)this + 176,
      (IUnknown *)&v48,
      v12[18].nextArrayIndex,
      v12[18].referenceCount,
      1610612736,
      1073112678,
      0,
      0,
      &a8,
      (IUnknown *)LODWORD(aP9));
  }
  v28 = *(AudioController **)(this->VoxelAnimClass_field_0x104 + 732); /*0x74982d*/
  if ( v28 == (AudioController *)-1 ) /*0x749836*/
    Mixer::ReleaseChannel((int **)this + 69); /*0x74984e*/
  else
    StartAudioControllerAt(v28, (int)aP2, (int)this + 276); /*0x749841*/
  AudioFile::Stop((_DWORD *)this + 74); /*0x749859*/
  if ( *(_DWORD *)(this->VoxelAnimClass_field_0x104 + 764) ) /*0x749864*/
  {
    v29 = (ParticleSystemClass *)__2_YAPAXI_Z(0x100u); /*0x749878*/
    if ( v29 ) /*0x74987f*/
    {
      v30 = (IUnknown *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], aP2); /*0x74988f*/
      this->VoxelAnimClass_field_0x108 = ParticleSystemClass::Constructor( /*0x7498aa*/
                                 (int)v29,
                                 *(IUnknown **)(this->VoxelAnimClass_field_0x104 + 764),
                                 aP2,
                                 v30,
                                 (IUnknown *)this,
                                 &stru_B1D188,
                                 0);
      return (VoxelAnimClass *)this; /*0x7498b8*/
    }
    this->VoxelAnimClass_field_0x108 = 0; /*0x7498bd*/
  }
  return (VoxelAnimClass *)this; /*0x7498b2*/
}


// ==== 0x007498D0  ObjectClass::Initialize  this=VoxelAnimClass  sig=csp ====
int __thiscall sub_7498D0(int this)
{
  int v2; // eax

  ObjectClass::ctor((_DWORD *)this); /*0x7498d4*/
  *(_DWORD *)(this + 176) = 0; /*0x7498e2*/
  *(_DWORD *)(this + 184) = 0; /*0x7498e8*/
  *(_DWORD *)(this + 192) = 0; /*0x7498ee*/
  *(_DWORD *)(this + 180) = 0; /*0x7498fb*/
  *(_DWORD *)(this + 188) = 0; /*0x749901*/
  *(_DWORD *)(this + 196) = 0; /*0x749907*/
  Int4::Set((_DWORD *)(this + 224), 0, 0, 0, 1065353216); /*0x74990d*/
  Int4::Set((_DWORD *)(this + 240), 0, 0, 0, 1065353216); /*0x749920*/
  *(_DWORD *)(this + 256) = -1; /*0x749928*/
  *(_DWORD *)(this + 260) = 0; /*0x749933*/
  *(_DWORD *)(this + 264) = 0; /*0x749939*/
  *(_DWORD *)(this + 268) = 0; /*0x74993f*/
  *(_BYTE *)(this + 272) = 0; /*0x749945*/
  *(_BYTE *)(this + 316) = 0; /*0x74994b*/
  *(_DWORD *)(this + 320) = 0; /*0x749951*/
  *(_DWORD *)this = &VoxelAnimClass::`vftable'; /*0x749957*/
  *(_DWORD *)(this + 4) = &VoxelAnimClass::`vftable'; /*0x74995d*/
  *(_DWORD *)(this + 8) = &VoxelAnimClass::`vftable'; /*0x749963*/
  *(_DWORD *)(this + 12) = &vt_VoxelAnimClass; /*0x74996a*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x749971*/
  AudioController::Init((_DWORD *)(this + 276)); /*0x74997c*/
  AudioController::Init((_DWORD *)(this + 296)); /*0x749987*/
  if ( MEMORY[0x887398] < MEMORY[0x887390] /*0x7499bf*/
    || (MEMORY[0x887395] || !MEMORY[0x887390])
    && MEMORY[0x88739C] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x887388] + 8))(
         &MEMORY[0x887388],
         MEMORY[0x887390] + MEMORY[0x88739C],
         0) )
  {
    v2 = MEMORY[0x887398]++; /*0x7499cc*/
    *((_DWORD *)MEMORY[0x88738C] + v2) = this; /*0x7499db*/
  }
  return this; /*0x7499e0*/
}


// ==== 0x007499F0  VoxelAnimClass::CleanupMembers  this=VoxelAnimClass  sig=csp ====
int __thiscall VoxelAnimClass::CleanupMembers(#374 *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  VoxelAnimClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this = &VoxelAnimClass::`vftable'; /*0x7499f6*/
  this->vtable2 = &VoxelAnimClass::`vftable'; /*0x7499fc*/
  this->vtable3 = &VoxelAnimClass::`vftable'; /*0x749a03*/
  this->vtable4 = &vt_VoxelAnimClass; /*0x749a0a*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x749a11*/
  v6 = (VoxelAnimClass *)this; /*0x749a26*/
  v2 = (*(int (__thiscall **)(int *, VoxelAnimClass **))(MEMORY[0x887388] + 16))(&MEMORY[0x887388], &v6); /*0x749a2a*/
  if ( v2 != -1 && v2 < MEMORY[0x887398] && v2 < --MEMORY[0x887398] ) /*0x749a45*/
  {
    do /*0x749a5d*/
    {
      ++v2; /*0x749a4d*/
      *((_DWORD *)MEMORY[0x88738C] + v2 - 1) = *((_DWORD *)MEMORY[0x88738C] + v2); /*0x749a51*/
    }
    while ( v2 < MEMORY[0x887398] ); /*0x749a5d*/
  }
  v3 = this->VoxelAnimClass_field_0x108; /*0x749a5f*/
  if ( v3 ) /*0x749a67*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 248))(v3); /*0x749a6b*/
    this->VoxelAnimClass_field_0x108 = 0; /*0x749a71*/
  }
  if ( MEMORY[0xA8E9A0] ) /*0x749a82*/
    ObjectClass::Undeploy(this); /*0x749a86*/
  Mixer::ReleaseChannel((int **)this + 69); /*0x749a95*/
  Mixer::ReleaseChannel((int **)this + 74); /*0x749aa2*/
  AudioFileClass::Release((_DWORD *)this + 69); /*0x749aa9*/
  AudioFileClass::Release((_DWORD *)this + 74); /*0x749ab0*/
  v6 = (VoxelAnimClass *)this; /*0x749ac5*/
  v4 = (*(int (__thiscall **)(int *, VoxelAnimClass **))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v6); /*0x749ac9*/
  if ( v4 != -1 && v4 < MEMORY[0xB0F680] && v4 < --MEMORY[0xB0F680] ) /*0x749ae6*/
  {
    do /*0x749afe*/
    {
      ++v4; /*0x749aee*/
      *((_DWORD *)MEMORY[0xB0F674] + v4 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v4); /*0x749af2*/
    }
    while ( v4 < MEMORY[0xB0F680] ); /*0x749afe*/
  }
  this->VoxelAnimClass_field_0x104 = 0; /*0x749b02*/
  return ObjectClass::Dtor(this); /*0x749b11*/
}


// ==== 0x00749B20  VoxelAnimClass::DrawVoxelFrame  this=VoxelAnimClass  sig=csp ====
int __thiscall VoxelAnimClass::DrawVoxelFrame(#374 *this, int a2, int a3, int a4)
{
  _DWORD *v5; // eax
  _BYTE v7[12]; // [esp+4h] [ebp-Ch] BYREF

  v5 = (_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *))(this->q048)(this, v7); /*0x749b2f*/
  if ( (*((_BYTE *)Coord::To_Cell(&MEMORY[0x87F7E8], v5) + 300) & 0x10) != 0 ) /*0x749b44*/
    *((_BYTE *)this + 128) = 1; /*0x749b46*/
  return ObjectClass::CalcDrawRect(this); /*0x749b60*/
}


// ==== 0x00749B70  VoxelAnimClass::ProcessAnim  this=VoxelAnimClass  sig=csp ====
char __thiscall VoxelAnimClass::_vt69(int *this, int *a2, _DWORD *a3)
{
  int v4; // eax
  int v5; // edx
  _DWORD *v6; // ebp
  int *v7; // eax
  float *v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  __int16 *v12; // eax
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // esi
  int v16; // eax
  int v17; // eax
  int *v18; // eax
  int *SHPFrame; // [esp-1Ch] [ebp-CCh]
  int *v21; // [esp-1Ch] [ebp-CCh]
  int v22; // [esp-18h] [ebp-C8h]
  int v23; // [esp-18h] [ebp-C8h]
  int v24; // [esp-10h] [ebp-C0h]
  int v25; // [esp+Ch] [ebp-A4h] BYREF
  int v26; // [esp+10h] [ebp-A0h]
  int v27; // [esp+14h] [ebp-9Ch]
  int v28; // [esp+18h] [ebp-98h] BYREF
  int v29; // [esp+1Ch] [ebp-94h] BYREF
  int v30; // [esp+20h] [ebp-90h] BYREF
  int v31; // [esp+24h] [ebp-8Ch]
  int GroundHeight; // [esp+28h] [ebp-88h]
  int v33; // [esp+2Ch] [ebp-84h]
  int v34; // [esp+30h] [ebp-80h]
  int v35; // [esp+34h] [ebp-7Ch]
  int v36[2]; // [esp+38h] [ebp-78h] BYREF
  int v37[4]; // [esp+40h] [ebp-70h] BYREF
  float v38[12]; // [esp+50h] [ebp-60h] BYREF
  float v39[12]; // [esp+80h] [ebp-30h] BYREF

  if ( (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) == 0 /*0x749bb6*/
    || (v25 = this->q027, v26 = this->q028, v27 = this->q029, LOBYTE(v4) = Game::Stub3((int)&v25), !(_BYTE)v4) )
  {
    v5 = a2[1]; /*0x749bcb*/
    v34 = *a2; /*0x749bd0*/
    v35 = v5; /*0x749bd4*/
    v30 = this->q027; /*0x749bda*/
    v31 = this->q028; /*0x749beb*/
    GroundHeight = this->q029; /*0x749bf2*/
    GroundHeight = Cell::GetGroundHeight(&v30); /*0x749c05*/
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v30) + 80) & 0x100) == 0 ) /*0x749c1b*/
      goto LABEL_6; /*0x749c1b*/
    v25 = this->q027; /*0x749c1f*/
    v26 = this->q028; /*0x749c26*/
    if ( this->q029 >= MEMORY[0xB1D1BC] + GroundHeight ) /*0x749c38*/
    {
      v33 = MEMORY[0xB1D1BC] + GroundHeight; /*0x749c3e*/
      v27 = MEMORY[0xB1D1BC] + GroundHeight + 1; /*0x749c4a*/
      v25 = v30; /*0x749c4e*/
      v26 = v31; /*0x749c5b*/
      Coord::To_Screen(MEMORY[0x887324], &v25, v36); /*0x749c60*/
    }
    else
    {
LABEL_6:
      v33 = GroundHeight; /*0x749c62*/
      Coord::To_Screen(MEMORY[0x887324], &v30, v36); /*0x749c76*/
    }
    LOBYTE(v4) = *((_BYTE *)this + 316); /*0x749c7b*/
    if ( !(_BYTE)v4 ) /*0x749c83*/
    {
      v4 = *(this + 65); /*0x749c89*/
      v6 = *(_DWORD **)(v4 + 176); /*0x749c8f*/
      if ( v6 ) /*0x749c97*/
      {
        qmemcpy(v38, VoxelAnimClass::QuaternionToMatrix((float *)this + 44, v39), sizeof(v38)); /*0x749cbc*/
        Viewport::Clear(); /*0x749cbe*/
        globalHelper_053F90( /*0x749ce8*/
          v6,
          *(_DWORD *)(*(this + 65) + 664),
          0,
          MEMORY[0x887430],
          v38,
          (float *)&MEMORY[0x887420],
          0,
          0,
          0);
        InitializeAudioOcclusion(v37, &v29, &v28); /*0x749cfa*/
        v25 = v36[0] + v29; /*0x749d15*/
        v26 = v28 + v36[1]; /*0x749d26*/
        v22 = -4 - ZCoordToScreenY(v33); /*0x749d36*/
        SHPFrame = (int *)BuildingClass::GetSHPFrame((_DWORD *)MEMORY[0x87F6B4], 8193); /*0x749d4e*/
        v7 = Miles::DriverGet(); /*0x749d5c*/
        BlitterDrawSHP((int *)MEMORY[0x887314], MEMORY[0x87F6B4], v7, v37, &v25, a3, 0, SHPFrame, v22, 0, 1000, 0, 0); /*0x749d6e*/
        qmemcpy(v38, VoxelAnimClass::QuaternionToMatrix((float *)this + 44, v39), sizeof(v38)); /*0x749d95*/
        globalHelper_053C80(v6, 0, 0, v38, (float *)&MEMORY[0x887470]); /*0x749da3*/
        Viewport::Clear(); /*0x749da8*/
        v8 = MultiplyMatrix3x4(v39, MEMORY[0x887430], v38); /*0x749dbe*/
        TransformVoxelVertex(v6, *(_DWORD *)(*(this + 65) + 664), 0, v8); /*0x749dd4*/
        InitializeAudioOcclusion(v37, &v29, &v28); /*0x749de6*/
        v9 = 10240; /*0x749df1*/
        if ( *(_BYTE *)(*(this + 65) + 661) ) /*0x749df6*/
          v9 = 10244; /*0x749e00*/
        v10 = this->q029; /*0x749e0b*/
        v11 = this->q028; /*0x749e11*/
        v25 = this->q027; /*0x749e17*/
        v27 = v10; /*0x749e1f*/
        v26 = v11; /*0x749e29*/
        v12 = (__int16 *)Coord::To_Cell(&MEMORY[0x87F7E8], &v25); /*0x749e2d*/
        v13 = *(this + 67); /*0x749e32*/
        v14 = v12[133]; /*0x749e38*/
        if ( v13 ) /*0x749e41*/
        {
          v15 = *(_DWORD **)(*((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(v13 + 90196)) + 780); /*0x749e52*/
        }
        else if ( *(_BYTE *)(*(this + 65) + 768) ) /*0x749e60*/
        {
          v15 = (_DWORD *)MEMORY[0x87F6BC]; /*0x749e6a*/
        }
        else
        {
          v15 = (_DWORD *)MEMORY[0x87F6B4]; /*0x749e72*/
          v14 = 1000; /*0x749e78*/
        }
        v25 = v29 + v34; /*0x749e8b*/
        v24 = v14; /*0x749e97*/
        v16 = *this; /*0x749e98*/
        v26 = v28 + v35; /*0x749ea0*/
        v17 = (*(int (__thiscall **)(int *))(v16 + 464))(this); /*0x749ea4*/
        v23 = -2 - ZCoordToScreenY(v17); /*0x749eb8*/
        v21 = (int *)BuildingClass::GetSHPFrame(v15, v9); /*0x749ec8*/
        v18 = Miles::DriverGet(); /*0x749ed6*/
        LOBYTE(v4) = BlitterDrawSHP((int *)MEMORY[0x887314], (int)v15, v18, v37, &v25, a3, 0, v21, v23, 0, v24, 0, 0); /*0x749ee4*/
      }
    }
  }
  return v4; /*0x749eea*/
}


// ==== 0x00749F30  VoxelAnimClass::Update  this=VoxelAnimClass  sig=csp ====
int VoxelAnimClass::_vt30()
{
  return 3; /*0x74a965*/
}


// ==== 0x0074A960  VoxelAnimClass::StubReturn3  this=VoxelAnimClass  sig=csp ====
int VoxelAnimClass::_vt30()
{
  return 3; /*0x74a965*/
}


// ==== 0x0074A970  VoxelAnimClass::SaveLoad_Prefix  this=VoxelAnimClass  sig=csp ====
int __thiscall VoxelAnimClass::SaveLoad_Prefix(void *this, ObjectClass *aP1, int aP1a)
{
  ObjectClass *Register; // edi

  Register = (ObjectClass *)BuildingClass::SaveLoad_Register((#374 *)this); /*0x74a981*/
  if ( (int)Register >= 0 ) /*0x74a985*/
  {
    if ( aP1 ) /*0x74a989*/
    {
      ObjectClass::Init(aP1, (AbstractClass *)&aP1a); /*0x74a992*/
      *(_DWORD *)aP1->__pad_0 = &VoxelAnimClass::`vftable'; /*0x74a997*/
      *(_DWORD *)&aP1->__pad_0[4] = &VoxelAnimClass::`vftable'; /*0x74a99d*/
      *(_DWORD *)&aP1->__pad_0[8] = &VoxelAnimClass::`vftable'; /*0x74a9a4*/
      *(_DWORD *)&aP1->__pad_0[12] = &vt_VoxelAnimClass; /*0x74a9ab*/
    }
    AudioController::Init(&aP1[1].bombVisible); /*0x74a9b8*/
    AudioController::Init(&aP1[1].visibilityFlags); /*0x74a9c3*/
    ObjectPtr::RegisterForTracking( /*0x74a9d4*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP1[1].customSound_controller[2]);
    ObjectPtr::RegisterForTracking( /*0x74a9e5*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP1[1].customSound_controller[3]);
    ObjectPtr::RegisterForTracking( /*0x74a9f6*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP1[1].customSound_controller[4]);
  }
  return (int)Register->__pad_0; /*0x74a9fd*/
}


// ==== 0x0074AA10  VoxelAnimClass::SaveLoad_Prefix_0  this=VoxelAnimClass  sig=csp ====
int __stdcall VoxelAnimClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, int *a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x74aa24*/
}


// ==== 0x0074AA30  VoxelAnimClass::GetFrameCount  this=VoxelAnimClass  sig=csp ====
int __thiscall VoxelAnimClass::_vt13(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax

  HouseClass::ProcessPower((#374 *)this); /*0x74aa39*/
  Power::TimerProcess(*(_DWORD *)(this + 256)); /*0x74aa47*/
  v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 260) + 4) + 16))(*(_DWORD *)(this + 260) + 4); /*0x74aa58*/
  Power::TimerProcess(v3); /*0x74aa5e*/
  v4 = *(_DWORD *)(this + 264); /*0x74aa63*/
  if ( v4 ) /*0x74aa6b*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(v4 + 4) + 16))(v4 + 4); /*0x74aa74*/
    Power::TimerProcess(v5); /*0x74aa7a*/
  }
  v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 268) + 4) + 16))(*(_DWORD *)(this + 268) + 4); /*0x74aa8b*/
  Power::TimerProcess(v6); /*0x74aa91*/
  LOBYTE(v7) = *(_BYTE *)(this + 272); /*0x74aa96*/
  v8 = Power::FlagProcess(a2, v7); /*0x74aa9f*/
  LOBYTE(v8) = *(_BYTE *)(this + 316); /*0x74aaa4*/
  Power::FlagProcess(a2, v8); /*0x74aaad*/
  return Power::TimerProcess(*(_DWORD *)(this + 320)); /*0x74aac0*/
}


// ==== 0x0074AAD0  VoxelAnimClass::ddtor  this=VoxelAnimClass  sig=csp ====
int __stdcall VoxelAnimClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x74aad6*/
    return -2147467261; /*0x74aad8*/
  *a2 = 237448641; /*0x74aae6*/
  a2[1] = 298949647; /*0x74aaee*/
  a2[2] = -1610610249; /*0x74aaf7*/
  a2[3] = -777003740; /*0x74ab00*/
  return 0; /*0x74aadd*/
}


// ==== 0x0074AB10  VoxelAnimClass::StubReturn328  this=VoxelAnimClass  sig=csp ====
int VoxelAnimClass::_vt12()
{
  return 328; /*0x74ab15*/
}


// ==== 0x0074AB20  VoxelAnimClass::StubReturn41  this=VoxelAnimClass  sig=csp ====
int VoxelAnimClass::_vt11()
{
  return 41; /*0x74ab25*/
}


// ==== 0x0074AB30  VoxelAnimClass::LoadFrame  this=VoxelAnimClass  sig=csp ====
int __thiscall VoxelAnimClass::_vt34(_DWORD *this)
{
  return this->VoxelAnimClass_field_0x104; /*0x74ab36*/
}


// ==== 0x0074AB40  VoxelAnimClass::StubReturnFalse  this=VoxelAnimClass  sig=csp ====
int __stdcall VoxelAnimClass::_vt66(int a1)
{
  return 0; /*0x74ab42*/
}


// ==== 0x0074AB50  VoxelAnimClass::DrawVoxel  this=VoxelAnimClass  sig=csp ====
VoxelAnimClass *__thiscall VoxelAnimClass::DrawVoxel(#374 *Block, char a2)
{
  VoxelAnimClass::CleanupMembers(Block); /*0x74ab53*/
  if ( (a2 & 1) != 0 ) /*0x74ab5d*/
    __3_YAXPAX_Z(Block); /*0x74ab60*/
  return (VoxelAnimClass *)Block; /*0x74ab6a*/
}


// ==== 0x0074AB70  sub_74AB70  this=-  sig=ida-proto ====
void sub_74AB70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x74ab7c*/
  MEMORY[0xB1D1F0] = Math::Sqrt(v0 + v0); /*0x74ab8e*/
}


// ==== 0x0074ABA0  sub_74ABA0  this=-  sig=ida-proto ====
void sub_74ABA0()
{
  MEMORY[0xB1D240] = MEMORY[0xB1D1F0] / 60.0; /*0x74abac*/
}


// ==== 0x0074ABC0  sub_74ABC0  this=-  sig=ida-proto ====
void sub_74ABC0()
{
  MEMORY[0xB1D228] = 1.0 / MEMORY[0xB1D240]; /*0x74abcc*/
}


// ==== 0x0074ABE0  sub_74ABE0  this=-  sig=ida-proto ====
void sub_74ABE0()
{
  MEMORY[0xB1D220] = 0.0174532925199433 * 45.0; /*0x74abec*/
}


// ==== 0x0074AC00  sub_74AC00  this=-  sig=ida-proto ====
void sub_74AC00()
{
  MEMORY[0xB1D1F8] = 0.0174532925199433 * 60.0; /*0x74ac0c*/
}


// ==== 0x0074AC20  sub_74AC20  this=-  sig=ida-proto ====
void sub_74AC20()
{
  MEMORY[0xB1D1D0] = 0.0174532925199433 * 90.0; /*0x74ac2c*/
}


// ==== 0x0074AC40  sub_74AC40  this=-  sig=ida-proto ====
__int64 sub_74AC40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB1D1D0] - MEMORY[0xB1D1F8]); /*0x74ac52*/
  result = Math::RoundToInt(v0 * MEMORY[0xB1D1F0] * 0.5); /*0x74ac66*/
  MEMORY[0xB1D248] = result; /*0x74ac6b*/
  return result; /*0x74ac70*/
}


// ==== 0x0074AC80  sub_74AC80  this=-  sig=ida-proto ====
void sub_74AC80()
{
  MEMORY[0xB1D200] = Math::ArcTan((double)MEMORY[0xB1D248] * 0.00390625); /*0x74ac97*/
}


// ==== 0x0074ACB0  sub_74ACB0  this=-  sig=ida-proto ====
void sub_74ACB0()
{
  MEMORY[0xB1D218] = Math::ArcTan((double)(2 * MEMORY[0xB1D248]) / MEMORY[0xB1D1F0]); /*0x74acd2*/
}


// ==== 0x0074ACE0  sub_74ACE0  this=-  sig=ida-proto ====
__int64 sub_74ACE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB1D248]) + 0.5); /*0x74acfb*/
  MEMORY[0xB1D23C] = result; /*0x74ad00*/
  return result; /*0x74ad06*/
}


// ==== 0x0074AD10  sub_74AD10  this=-  sig=ida-proto ====
int sub_74AD10()
{
  MEMORY[0xB1D1E8] = 0; /*0x74ad12*/
  MEMORY[0xB1D1EA] = 0; /*0x74ad18*/
  return 0; /*0x74ad1e*/
}


// ==== 0x0074AD20  sub_74AD20  this=-  sig=ida-proto ====
int sub_74AD20()
{
  MEMORY[0xB1D208] = 0; /*0x74ad22*/
  MEMORY[0xB1D20C] = 0; /*0x74ad27*/
  MEMORY[0xB1D210] = 0; /*0x74ad2c*/
  return 0; /*0x74ad31*/
}


// ==== 0x0074AD40  sub_74AD40  this=-  sig=ida-proto ====
int sub_74AD40()
{
  MEMORY[0xB1D238] = 0; /*0x74ad45*/
  MEMORY[0xB1D230] = 128; /*0x74ad4f*/
  MEMORY[0xB1D234] = 128; /*0x74ad54*/
  return 128; /*0x74ad59*/
}


// ==== 0x0074AD60  sub_74AD60  this=-  sig=ida-proto ====
int sub_74AD60()
{
  MEMORY[0xB1D1D8] = 0; /*0x74ad62*/
  MEMORY[0xB1D1DC] = 0; /*0x74ad67*/
  MEMORY[0xB1D1E0] = 0; /*0x74ad6c*/
  MEMORY[0xB1D1E4] = 0; /*0x74ad71*/
  return 0; /*0x74ad76*/
}


// ==== 0x0074AD80  VoxelAnimTypeClass::Constructor  this=VoxelAnimTypeClass  sig=csp ====
_DWORD *__thiscall VoxelAnimTypeClass_Constructor(_DWORD *this, char *Source)
{
  int v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull((int)this, Source); /*0x74ad89*/
  this->StartSound = -1; /*0x74ad93*/
  this->StopSound = -1; /*0x74ad99*/
  *((_BYTE *)this + 660) = 0; /*0x74ad9f*/
  *((_BYTE *)this + 661) = 0; /*0x74ada8*/
  *((_BYTE *)this + 662) = 0; /*0x74adae*/
  *(this + 168) = -1610612736; /*0x74adb4*/
  *(this + 170) = 0; /*0x74adbe*/
  *(this + 172) = 484854086; /*0x74adc4*/
  *(this + 174) = 0; /*0x74adce*/
  *(this + 176) = 0; /*0x74add4*/
  *(this + 178) = 0; /*0x74adda*/
  this->VoxelIndex = 0; /*0x74ade1*/
  this->Duration = 30; /*0x74ade7*/
  *(this + 169) = 1072273817; /*0x74adf1*/
  *(this + 171) = 0; /*0x74adfb*/
  *(this + 173) = 1069962989; /*0x74ae01*/
  *(this + 175) = 1074528256; /*0x74ae0b*/
  this->q2C4 = 1075052544; /*0x74ae15*/
  this->q2CC = 1076756480; /*0x74ae1f*/
  *((_BYTE *)this + 720) = 0; /*0x74ae29*/
  this->Spawns = 0; /*0x74ae2f*/
  this->SpawnCount = 0; /*0x74ae35*/
  this->BounceAnim = 0; /*0x74ae3b*/
  this->ExpireAnim = 0; /*0x74ae41*/
  this->TrailerAnim = 0; /*0x74ae47*/
  this->Damage = 0; /*0x74ae4d*/
  this->DamageRadius = 0; /*0x74ae53*/
  this->Warhead = 0; /*0x74ae59*/
  this->AttachedSystem = 0; /*0x74ae5f*/
  *((_BYTE *)this + 768) = 0; /*0x74ae65*/
  *this = &VoxelAnimTypeClass::`vftable'; /*0x74ae6b*/
  this->vtable2 = &VoxelAnimTypeClass::`vftable'; /*0x74ae71*/
  this->vtable3 = &VoxelAnimTypeClass::`vftable'; /*0x74ae77*/
  this->vtable4 = &VoxelAnimTypeClass::`vftable'; /*0x74ae7e*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x74ae85*/
  *((_BYTE *)this + 561) = 0; /*0x74ae8c*/
  *((_BYTE *)this + 564) = 1; /*0x74ae92*/
  *((_BYTE *)this + 559) = 1; /*0x74ae98*/
  *((_BYTE *)this + 560) = 1; /*0x74ae9e*/
  *((_BYTE *)this + 562) = 1; /*0x74aea4*/
  *((_BYTE *)this + 563) = 1; /*0x74aeaa*/
  *((_BYTE *)this + 565) = 0; /*0x74aeb0*/
  if ( MEMORY[0xB0F680] < MEMORY[0xB0F678] /*0x74aeea*/
    || (MEMORY[0xB0F67D] || !MEMORY[0xB0F678])
    && MEMORY[0xB0F684] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F670] + 8))(
         &MEMORY[0xB0F670],
         MEMORY[0xB0F678] + MEMORY[0xB0F684],
         0) )
  {
    v3 = MEMORY[0xB0F680]++; /*0x74aef7*/
    *((_DWORD *)MEMORY[0xB0F674] + v3) = this; /*0x74af06*/
  }
  if ( MEMORY[0xA8EB38] < MEMORY[0xA8EB30] /*0x74af3d*/
    || (MEMORY[0xA8EB35] || !MEMORY[0xA8EB30])
    && MEMORY[0xA8EB3C] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8EB28] + 8))(
         &MEMORY[0xA8EB28],
         MEMORY[0xA8EB30] + MEMORY[0xA8EB3C],
         0) )
  {
    v4 = MEMORY[0xA8EB38]++; /*0x74af4a*/
    *((_DWORD *)MEMORY[0xA8EB2C] + v4) = this; /*0x74af59*/
  }
  return this; /*0x74af5e*/
}


// ==== 0x0074B050  VoxelAnimTypeClass::LoadFromINI  this=VoxelAnimTypeClass  sig=csp ====
char __thiscall VoxelAnimTypeClass::LoadFromINI(int this, unsigned __int8 ***a2)
{
  char Bool_Overwrite; // al
  char v5; // cl
  char v6; // al
  char v7; // al
  double Double_Overwrite; // st7
  double v9; // st7
  int Int_Overwrite; // eax
  double v11; // st7
  unsigned int v12; // eax
  unsigned int v13; // ecx
  double v14; // st7
  double v15; // rax
  double v16; // st7
  _DWORD *v17; // ecx
  _DWORD *v18; // eax
  int v19; // eax
  int v20; // edx
  int Index; // eax
  int v22; // eax
  _DWORD *v23; // eax
  _DWORD *v24; // edx
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // edx
  int v31; // eax
  _DWORD *v32; // eax
  bool v33; // al
  _DWORD *TechnoType; // eax
  void *v36; // edi
  _DWORD *v37; // eax
  _DWORD *FileVXL; // eax
  double v39; // [esp-8h] [ebp-2A0h]
  double v40; // [esp-8h] [ebp-2A0h]
  char v41; // [esp-4h] [ebp-29Ch]
  _DWORD *v42; // [esp+10h] [ebp-288h]
  int v43; // [esp+10h] [ebp-288h]
  int v44; // [esp+10h] [ebp-288h]
  _DWORD *v45; // [esp+10h] [ebp-288h]
  _DWORD *v46; // [esp+10h] [ebp-288h]
  _DWORD *v47; // [esp+10h] [ebp-288h]
  int v48; // [esp+10h] [ebp-288h]
  _DWORD *v49; // [esp+10h] [ebp-288h]
  char v50; // [esp+15h] [ebp-283h]
  char v51; // [esp+16h] [ebp-282h]
  char v52; // [esp+17h] [ebp-281h]
  char Destination[88]; // [esp+18h] [ebp-280h] BYREF
  char v54[12]; // [esp+70h] [ebp-228h] BYREF
  int v55; // [esp+7Ch] [ebp-21Ch]
  char Buffer[512]; // [esp+98h] [ebp-200h] BYREF

  INIClass::ResetSection(a2); /*0x74b066*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, a2) ) /*0x74b06e*/
    return 0; /*0x74b614*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x74b08d*/
                     a2,
                     (unsigned __int8 *)(this + 36),
                     (unsigned __int8 *)g_INI_Key_Normalized,
                     *(_BYTE *)(this + 660));
  v5 = *(_BYTE *)(this + 661); /*0x74b092*/
  *(_BYTE *)(this + 660) = Bool_Overwrite; /*0x74b098*/
  v6 = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aTranslucent, v5); /*0x74b0a7*/
  v41 = *(_BYTE *)(this + 768); /*0x74b0b4*/
  *(_BYTE *)(this + 661) = v6; /*0x74b0bb*/
  *(_BYTE *)(this + 768) = INIClass::ReadBool_Overwrite( /*0x74b0c6*/
                             a2,
                             (unsigned __int8 *)(this + 36),
                             (unsigned __int8 *)aIstiberium,
                             v41);
  v7 = INIClass::ReadBool_Overwrite( /*0x74b0db*/
         a2,
         (unsigned __int8 *)(this + 36),
         (unsigned __int8 *)aIsmeteor,
         *(_BYTE *)(this + 720));
  v39 = *(double *)(this + 672); /*0x74b0ed*/
  *(_BYTE *)(this + 720) = v7; /*0x74b0f6*/
  *(double *)(this + 672) = INIClass::ReadDouble_Overwrite( /*0x74b101*/
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (unsigned __int8 *)g_INI_Key_Elasticity,
                              v39);
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x74b116*/
                       (int)a2,
                       (unsigned __int8 *)(this + 36),
                       (unsigned __int8 *)aMinangularvelo,
                       -1.0);
  if ( Double_Overwrite != 0.0 ) /*0x74b126*/
    *(double *)(this + 680) = Double_Overwrite * 0.01745277777777778; /*0x74b12e*/
  v9 = INIClass::ReadDouble_Overwrite((int)a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aMaxangularvelo, -1.0); /*0x74b147*/
  if ( v9 != 0.0 ) /*0x74b157*/
    *(double *)(this + 688) = v9 * 0.01745277777777778; /*0x74b15f*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x74b178*/
                    (int)a2,
                    (unsigned __int8 *)(this + 36),
                    (unsigned __int8 *)aDuration,
                    *(_DWORD *)(this + 668));
  v40 = *(double *)(this + 696); /*0x74b18a*/
  *(_DWORD *)(this + 668) = Int_Overwrite; /*0x74b193*/
  v11 = INIClass::ReadDouble_Overwrite((int)a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aMinzvel, v40); /*0x74b199*/
  v12 = *(_DWORD *)(this + 708); /*0x74b19e*/
  v13 = *(_DWORD *)(this + 704); /*0x74b1a4*/
  *(double *)(this + 696) = v11; /*0x74b1aa*/
  v14 = INIClass::ReadDouble_Overwrite( /*0x74b1ba*/
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (unsigned __int8 *)aMaxzvel,
          COERCE_DOUBLE(__PAIR64__(v12, v13)));
  v15 = *(double *)(this + 712); /*0x74b1c5*/
  *(double *)(this + 704) = v14; /*0x74b1cb*/
  v16 = INIClass::ReadDouble_Overwrite((int)a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aMaxxyvel, v15); /*0x74b1db*/
  v17 = *(_DWORD **)(this + 724); /*0x74b1e0*/
  *(double *)(this + 712) = v16; /*0x74b1ea*/
  v42 = v17; /*0x74b1fb*/
  if ( INIClass::GetString( /*0x74b207*/
         a2,
         (unsigned __int8 **)(this + 36),
         (unsigned __int8 *)g_INI_Key_Spawns,
         (char *)&MEMORY[0x87F7E8][10719],
         Destination,
         128) )
  {
    v18 = globalHelper_04BB20(Destination, (int)&MEMORY[0x87F7E8][539856]); /*0x74b219*/
  }
  else
  {
    v18 = v42; /*0x74b220*/
  }
  *(_DWORD *)(this + 724) = v18; /*0x74b224*/
  *(_DWORD *)(this + 728) = INIClass::ReadInt_Overwrite( /*0x74b248*/
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (unsigned __int8 *)aSpawncount,
                              *(_DWORD *)(this + 728));
  v52 = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aSharebodydata, 0); /*0x74b25d*/
  v51 = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aShareturretdat, 0); /*0x74b270*/
  v50 = INIClass::ReadBool_Overwrite(a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aSharebarreldat, 0); /*0x74b27f*/
  v19 = INIClass::ReadInt_Overwrite( /*0x74b28c*/
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (unsigned __int8 *)aVoxelindex,
          *(_DWORD *)(this + 664));
  v20 = *(_DWORD *)(this + 732); /*0x74b291*/
  *(_DWORD *)(this + 664) = v19; /*0x74b297*/
  v43 = v20; /*0x74b2b4*/
  if ( !INIClass::GetString( /*0x74b2cd*/
          a2,
          (unsigned __int8 **)(this + 36),
          (unsigned __int8 *)g_INI_Key_StartSound,
          (char *)&MEMORY[0x87F7E8][10719],
          Destination,
          128)
    || (Index = VocClass::FindIndex(Destination), Index == -1) )
  {
    Index = v43; /*0x74b2cf*/
  }
  v44 = *(_DWORD *)(this + 736); /*0x74b2e8*/
  *(_DWORD *)(this + 732) = Index; /*0x74b2f4*/
  if ( !INIClass::GetString( /*0x74b30f*/
          a2,
          (unsigned __int8 **)(this + 36),
          (unsigned __int8 *)g_INI_Key_StopSound,
          (char *)&MEMORY[0x87F7E8][10719],
          Destination,
          128)
    || (v22 = VocClass::FindIndex(Destination), v22 == -1) )
  {
    v22 = v44; /*0x74b311*/
  }
  *(_DWORD *)(this + 736) = v22; /*0x74b31f*/
  v45 = *(_DWORD **)(this + 740); /*0x74b338*/
  if ( INIClass::GetString( /*0x74b33c*/
         a2,
         (unsigned __int8 **)(this + 36),
         (unsigned __int8 *)aBounceanim,
         (char *)&MEMORY[0x87F7E8][10719],
         Destination,
         128) )
  {
    v23 = AnimTypeClass::FindOrCreate(Destination); /*0x74b349*/
  }
  else
  {
    v23 = v45; /*0x74b350*/
  }
  v24 = *(_DWORD **)(this + 744); /*0x74b354*/
  *(_DWORD *)(this + 740) = v23; /*0x74b35a*/
  v46 = v24; /*0x74b377*/
  if ( INIClass::GetString( /*0x74b37b*/
         a2,
         (unsigned __int8 **)(this + 36),
         (unsigned __int8 *)aExpireanim,
         (char *)&MEMORY[0x87F7E8][10719],
         Destination,
         128) )
  {
    v25 = AnimTypeClass::FindOrCreate(Destination); /*0x74b388*/
  }
  else
  {
    v25 = v46; /*0x74b38f*/
  }
  v47 = *(_DWORD **)(this + 748); /*0x74b3a8*/
  *(_DWORD *)(this + 744) = v25; /*0x74b3b4*/
  if ( INIClass::GetString( /*0x74b3ba*/
         a2,
         (unsigned __int8 **)(this + 36),
         (unsigned __int8 *)aTraileranim,
         (char *)&MEMORY[0x87F7E8][10719],
         Destination,
         128) )
  {
    v26 = AnimTypeClass::FindOrCreate(Destination); /*0x74b3c7*/
  }
  else
  {
    v26 = v47; /*0x74b3ce*/
  }
  *(_DWORD *)(this + 748) = v26; /*0x74b3d2*/
  v27 = INIClass::ReadInt_Overwrite( /*0x74b3e7*/
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (unsigned __int8 *)g_INI_Key_Damage,
          *(_DWORD *)(this + 752));
  v28 = *(_DWORD *)(this + 756); /*0x74b3ec*/
  *(_DWORD *)(this + 752) = v27; /*0x74b3f2*/
  v29 = INIClass::ReadInt_Overwrite((int)a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aDamageradius, v28); /*0x74b401*/
  v30 = *(_DWORD *)(this + 760); /*0x74b406*/
  *(_DWORD *)(this + 756) = v29; /*0x74b40c*/
  v48 = v30; /*0x74b429*/
  if ( INIClass::GetString( /*0x74b42d*/
         a2,
         (unsigned __int8 **)(this + 36),
         (unsigned __int8 *)g_INI_Key_Warhead,
         (char *)&MEMORY[0x87F7E8][10719],
         Destination,
         128) )
  {
    v31 = WarheadTypeClass::FindOrCreate(Destination); /*0x74b43a*/
  }
  else
  {
    v31 = v48; /*0x74b441*/
  }
  v49 = *(_DWORD **)(this + 764); /*0x74b45a*/
  *(_DWORD *)(this + 760) = v31; /*0x74b466*/
  if ( INIClass::GetString( /*0x74b46c*/
         a2,
         (unsigned __int8 **)(this + 36),
         (unsigned __int8 *)aAttachedsystem,
         (char *)&MEMORY[0x87F7E8][10719],
         Destination,
         128) )
  {
    v32 = BuildingTypeClass::LoadOrGet(Destination); /*0x74b479*/
  }
  else
  {
    v32 = v49; /*0x74b480*/
  }
  *(_DWORD *)(this + 764) = v32; /*0x74b484*/
  v33 = v52 || v50 || v51; /*0x74b4a6*/
  *(_BYTE *)(this + 662) = v33; /*0x74b4ad*/
  if ( v33 ) /*0x74b4b3*/
  {
    TechnoType = (_DWORD *)INIEntry::GetTechnoType(a2, (unsigned __int8 *)(this + 36), (unsigned __int8 *)aSharesource); /*0x74b4c1*/
    if ( !TechnoType ) /*0x74b4ca*/
    {
      *(_DWORD *)(this + 176) = 0; /*0x74b555*/
      *(_DWORD *)(this + 180) = 0; /*0x74b55b*/
      return 1; /*0x74b569*/
    }
    if ( v52 ) /*0x74b4d6*/
    {
      *(_DWORD *)(this + 176) = TechnoType[44]; /*0x74b4de*/
      *(_DWORD *)(this + 180) = TechnoType[45]; /*0x74b4ea*/
      return 1; /*0x74b4f8*/
    }
    if ( v51 ) /*0x74b501*/
    {
      *(_DWORD *)(this + 176) = TechnoType[46]; /*0x74b509*/
      *(_DWORD *)(this + 180) = TechnoType[47]; /*0x74b515*/
      return 1; /*0x74b523*/
    }
    if ( v50 ) /*0x74b52c*/
    {
      *(_DWORD *)(this + 176) = TechnoType[48]; /*0x74b538*/
      *(_DWORD *)(this + 180) = TechnoType[49]; /*0x74b544*/
      return 1; /*0x74b552*/
    }
  }
  else
  {
    _makepath(Buffer, 0, 0, (const char *)(this + 504), g_Str_File__VXL); /*0x74b584*/
    CCFileClass::Construct(Destination, Buffer); /*0x74b598*/
    v36 = *(void **)(this + 176); /*0x74b59d*/
    if ( v36 ) /*0x74b5a5*/
    {
      WaveClass::Destroy(*(_DWORD *)(this + 176)); /*0x74b5a9*/
      __3_YAXPAX_Z(v36); /*0x74b5af*/
    }
    v37 = (_DWORD *)__2_YAPAXI_Z(28); /*0x74b5b9*/
    if ( v37 ) /*0x74b5c3*/
      FileVXL = File::LoadFileVXL(v37, (int)Destination, 0); /*0x74b5ce*/
    else
      FileVXL = 0; /*0x74b5d5*/
    *(_DWORD *)(this + 176) = FileVXL; /*0x74b5db*/
    *(_DWORD *)Destination = &CCFileClass::`vftable'; /*0x74b5e1*/
    v55 = 0; /*0x74b5e9*/
    Vector::Clear((int)v54); /*0x74b5f1*/
    *(_DWORD *)Destination = &off_7E1668; /*0x74b5fa*/
    BufferIOFileClass::Dtor(Destination); /*0x74b602*/
  }
  return 1; /*0x74b4f2*/
}


// ==== 0x0074B690  VoxelAnimTypeClass::PowerDrainUpdate  this=VoxelAnimTypeClass  sig=csp ====
int __thiscall VoxelAnimTypeClass::_vt13(int this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  v3 = AbstractTypeClass::ProcessPower((char *)this, a2); /*0x74b699*/
  LOBYTE(v3) = *(_BYTE *)(this + 660); /*0x74b69e*/
  Power::FlagProcess(a2, v3); /*0x74b6a7*/
  LOBYTE(v4) = *(_BYTE *)(this + 661); /*0x74b6ac*/
  Power::FlagProcess(a2, v4); /*0x74b6b5*/
  LOBYTE(v5) = *(_BYTE *)(this + 662); /*0x74b6ba*/
  Power::FlagProcess(a2, v5); /*0x74b6c3*/
  Power::TimerProcess(*(_DWORD *)(this + 664)); /*0x74b6d1*/
  Power::TimerProcess(*(_DWORD *)(this + 668)); /*0x74b6df*/
  Checksummer::Add_double((unsigned int *)a2, *(_DWORD *)(this + 672), *(_DWORD *)(this + 676)); /*0x74b6f4*/
  Checksummer::Add_double((unsigned int *)a2, *(_DWORD *)(this + 680), *(_DWORD *)(this + 684)); /*0x74b709*/
  Checksummer::Add_double((unsigned int *)a2, *(_DWORD *)(this + 688), *(_DWORD *)(this + 692)); /*0x74b71e*/
  Checksummer::Add_double((unsigned int *)a2, *(_DWORD *)(this + 696), *(_DWORD *)(this + 700)); /*0x74b733*/
  Checksummer::Add_double((unsigned int *)a2, *(_DWORD *)(this + 704), *(_DWORD *)(this + 708)); /*0x74b748*/
  Checksummer::Add_double((unsigned int *)a2, *(_DWORD *)(this + 712), *(_DWORD *)(this + 716)); /*0x74b75d*/
  LOBYTE(v6) = *(_BYTE *)(this + 720); /*0x74b762*/
  Power::FlagProcess(a2, v6); /*0x74b76b*/
  Power::TimerProcess(*(_DWORD *)(this + 728)); /*0x74b779*/
  Power::TimerProcess(*(_DWORD *)(this + 732)); /*0x74b787*/
  Power::TimerProcess(*(_DWORD *)(this + 736)); /*0x74b795*/
  Power::TimerProcess(*(_DWORD *)(this + 752)); /*0x74b7a3*/
  Power::TimerProcess(*(_DWORD *)(this + 756)); /*0x74b7b1*/
  LOBYTE(v7) = *(_BYTE *)(this + 768); /*0x74b7b6*/
  return Power::FlagProcess(a2, v7); /*0x74b7c4*/
}


// ==== 0x0074B7D0  VoxelAnimTypeClass::GetClassIdentifier  this=VoxelAnimTypeClass  sig=csp ====
int __stdcall VoxelAnimTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x74b7d6*/
    return -2147467261; /*0x74b7d8*/
  *a2 = 784035174; /*0x74b7e6*/
  a2[1] = 298978637; /*0x74b7ee*/
  a2[2] = 1610642049; /*0x74b7f7*/
  a2[3] = -1252326136; /*0x74b800*/
  return 0; /*0x74b7dd*/
}


// ==== 0x0074B810  VoxelAnimTypeClass::SaveLoad_Prefix  this=VoxelAnimTypeClass  sig=csp ====
int __stdcall VoxelAnimTypeClass::SaveLoad_Prefix(ObjectTypeClass *aP0, int aP1)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1); /*0x74b81b*/
  if ( result >= 0 ) /*0x74b822*/
  {
    if ( aP0 ) /*0x74b82a*/
    {
      ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1); /*0x74b833*/
      *(_DWORD *)aP0->__pad_0 = &VoxelAnimTypeClass::`vftable'; /*0x74b838*/
      *(_DWORD *)&aP0->__pad_0[4] = &VoxelAnimTypeClass::`vftable'; /*0x74b83e*/
      *(_DWORD *)&aP0->__pad_0[8] = &VoxelAnimTypeClass::`vftable'; /*0x74b845*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_VoxelAnimTypeClass; /*0x74b84c*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)aP0[1].Name); /*0x74b85f*/
    ObjectPtr::RegisterForTracking( /*0x74b870*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].UINameLabel[19]);
    ObjectPtr::RegisterForTracking( /*0x74b881*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].UINameLabel[23]);
    ObjectPtr::RegisterForTracking( /*0x74b892*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].UINameLabel[27]);
    ObjectPtr::RegisterForTracking( /*0x74b8a3*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].UINameLabel[3]);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].Name[4]); /*0x74b8b4*/
    VoxelAnimType::LoadAnim(aP0->__pad_0); /*0x74b8bb*/
    return 0; /*0x74b8c0*/
  }
  return result; /*0x74b8c2*/
}


// ==== 0x0074B8D0  VoxelAnimTypeClass::SaveLoad_Prefix_0  this=VoxelAnimTypeClass  sig=csp ====
int __stdcall VoxelAnimTypeClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, ObjectTypeClass *aP1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2); /*0x74b8df*/
  if ( result >= 0 ) /*0x74b8e6*/
    return 0; /*0x74b8e8*/
  return result; /*0x74b8ea*/
}


// ==== 0x0074B8F0  VoxelAnimTypeClass::GetData  this=VoxelAnimTypeClass  sig=csp ====
__int64 __thiscall VoxelAnimTypeClass::GetData(_DWORD *this, ObjectTypeClass *aP1, int a3)
{
  __int64 result; // rax

  result = (unsigned int)aP1; /*0x74b8f0*/
  if ( (ObjectTypeClass *)this->Warhead == aP1 ) /*0x74b8ff*/
    this->Warhead = 0; /*0x74b901*/
  if ( (ObjectTypeClass *)this->BounceAnim == aP1 ) /*0x74b90d*/
    this->BounceAnim = 0; /*0x74b90f*/
  if ( (ObjectTypeClass *)this->ExpireAnim == aP1 ) /*0x74b91b*/
    this->ExpireAnim = 0; /*0x74b91d*/
  if ( (ObjectTypeClass *)this->TrailerAnim == aP1 ) /*0x74b929*/
    this->TrailerAnim = 0; /*0x74b92b*/
  if ( (ObjectTypeClass *)this->Spawns == aP1 ) /*0x74b937*/
    this->Spawns = 0; /*0x74b939*/
  if ( (ObjectTypeClass *)this->AttachedSystem == aP1 ) /*0x74b948*/
    this->AttachedSystem = 0; /*0x74b94a*/
  return result; /*0x74b947*/
}


// ==== 0x0074B960  UnitTypeClass::FindOrCreate  this=IUnknown  sig=csp ====
VoxelAnimTypeClass *__thiscall UnitTypeClass::FindOrCreate(ObjectClass *Source)
{
  int v2; // esi
  _DWORD *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x74b97c*/
    return 0; /*0x74b9df*/
  v2 = 0; /*0x74b98d*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22660] <= 0 ) /*0x74b991*/
  {
LABEL_6:
    v3 = (_DWORD *)__2_YAPAXI_Z(0x308u); /*0x74b9b6*/
    if ( v3 ) /*0x74b9c5*/
      return (VoxelAnimTypeClass *)VoxelAnimTypeClass::Constructor(v3, Source); /*0x74b9d1*/
    return 0; /*0x74b9c5*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22648] + 4 * v2) + 36), Source) ) /*0x74b9aa*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[22660] ) /*0x74b9b4*/
      goto LABEL_6; /*0x74b9b4*/
  }
  return *(VoxelAnimTypeClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22648] + 4 * v2); /*0x74b9cf*/
}


// ==== 0x0074B9F0  VoxelAnimTypeClass::GetTypeIdentifier  this=VoxelAnimTypeClass  sig=csp ====
int VoxelAnimTypeClass::_vt11()
{
  return 42; /*0x74b9f5*/
}


// ==== 0x0074BA00  VoxelAnimTypeClass::GetObjectSize  this=VoxelAnimTypeClass  sig=csp ====
int VoxelAnimTypeClass::_vt12()
{
  return 776; /*0x74ba05*/
}


// ==== 0x0074BA10  VoxelAnimTypeClass::Stub  this=VoxelAnimTypeClass  sig=csp ====
char __stdcall VoxelAnimTypeClass::_vt32(int a1, int a2)
{
  return 0; /*0x74ba12*/
}


// ==== 0x0074BA20  VoxelAnimTypeClass::StubReturnFalse  this=VoxelAnimTypeClass  sig=csp ====
int __stdcall VoxelAnimTypeClass::_vt35(int a1)
{
  return 0; /*0x74ba22*/
}


// ==== 0x0074BA30  VoxelAnimTypeClass::ddtor  this=VoxelAnimTypeClass  sig=csp ====
VoxelAnimTypeClass *__thiscall VoxelAnimTypeClass::ddtor(void **Block, char a2)
{
  int v3; // eax
  int v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &VoxelAnimTypeClass::`vftable'; /*0x74ba36*/
  *(Block + 1) = &VoxelAnimTypeClass::`vftable'; /*0x74ba3c*/
  *(Block + 2) = &VoxelAnimTypeClass::`vftable'; /*0x74ba43*/
  *(Block + 3) = &vt_VoxelAnimTypeClass; /*0x74ba4a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x74ba51*/
  v6 = Block; /*0x74ba66*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v6); /*0x74ba6a*/
  if ( v3 != -1 && v3 < MEMORY[0xB0F680] && v3 < --MEMORY[0xB0F680] ) /*0x74ba85*/
  {
    do /*0x74ba9d*/
    {
      ++v3; /*0x74ba8d*/
      *((_DWORD *)MEMORY[0xB0F674] + v3 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v3); /*0x74ba91*/
    }
    while ( v3 < MEMORY[0xB0F680] ); /*0x74ba9d*/
  }
  v6 = Block; /*0x74baaf*/
  v4 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA8EB28] + 16))(&MEMORY[0xA8EB28], &v6); /*0x74bab3*/
  if ( v4 != -1 && v4 < MEMORY[0xA8EB38] && v4 < --MEMORY[0xA8EB38] ) /*0x74bace*/
  {
    do /*0x74bae6*/
    {
      ++v4; /*0x74bad6*/
      *((_DWORD *)MEMORY[0xA8EB2C] + v4 - 1) = *((_DWORD *)MEMORY[0xA8EB2C] + v4); /*0x74bada*/
    }
    while ( v4 < MEMORY[0xA8EB38] ); /*0x74bae6*/
  }
  if ( *((_BYTE *)Block + 662) ) /*0x74bae8*/
  {
    *(Block + 44) = 0; /*0x74baf4*/
    *(Block + 45) = 0; /*0x74bafa*/
  }
  ObjectTypeClass::Destruct((int)Block); /*0x74bb02*/
  if ( (a2 & 1) != 0 ) /*0x74bb0c*/
    OperatorDelete(Block); /*0x74bb0f*/
  return (VoxelAnimTypeClass *)Block; /*0x74bb19*/
}


// ==== 0x0074BB20  globalHelper_04BB20  this=unknown  sig=csp ====
VoxelAnimTypeClass *__fastcall globalHelper_04BB20(ObjectClass *Source, int a2)
{
  int v4; // esi
  _DWORD *v5; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x74bb3f*/
    return 0; /*0x74bb9c*/
  v4 = 0; /*0x74bb4e*/
  if ( *(int *)(a2 + 16) <= 0 ) /*0x74bb52*/
  {
LABEL_6:
    v5 = (_DWORD *)__2_YAPAXI_Z(0x308u); /*0x74bb73*/
    if ( v5 ) /*0x74bb82*/
      return (VoxelAnimTypeClass *)VoxelAnimTypeClass::Constructor(v5, Source); /*0x74bb8f*/
    return 0; /*0x74bb82*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v4) + 36), Source) ) /*0x74bb69*/
  {
    if ( ++v4 >= *(_DWORD *)(a2 + 16) ) /*0x74bb71*/
      goto LABEL_6; /*0x74bb71*/
  }
  return *(VoxelAnimTypeClass **)(*(_DWORD *)(a2 + 4) + 4 * v4); /*0x74bb8c*/
}


// ==== 0x0074BBA0  ObjectClass::method_74BBA0  this=int  sig=csp ====
char *__thiscall sub_74BBA0(char *this, int a2, int a3)
{
  char *v4; // ecx

  *(_DWORD *)this = a2; /*0x74bbae*/
  v4 = this + 12; /*0x74bbb0*/
  *(this + 4) = 0; /*0x74bbb6*/
  *((_DWORD *)this + 2) = -1; /*0x74bbb9*/
  *((_DWORD *)v4 + 1) = 0; /*0x74bbc0*/
  *((_DWORD *)v4 + 2) = 0; /*0x74bbc3*/
  v4[12] = 1; /*0x74bbc6*/
  v4[13] = 0; /*0x74bbca*/
  *(_DWORD *)v4 = &vt_VectorClass_unsigned_char_7F65F4; /*0x74bbcd*/
  (*(void (__thiscall **)(char *, unsigned int, int))(*(_DWORD *)v4 + 8))(v4, (unsigned int)(a2 + 7) >> 3, a3); /*0x74bbda*/
  return this; /*0x74bbdf*/
}


// ==== 0x0074BBF0  ObjectClass::method_74BBF0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_74BBF0(_DWORD *this, int a2)
{
  char *v3; // esi
  size_t v4; // eax
  void *v5; // eax
  int v6; // ecx
  int v7; // eax

  v3 = (char *)(this + 3); /*0x74bbff*/
  this->uniqueId = 0; /*0x74bc04*/
  this->abstractFlags = 0; /*0x74bc07*/
  *((_BYTE *)this + 24) = 1; /*0x74bc0a*/
  *((_BYTE *)this + 25) = 0; /*0x74bc0e*/
  this->vtable4 = &vt_VectorClass_unsigned_char_7F65F4; /*0x74bc11*/
  this->vtable3 = -1; /*0x74bc17*/
  *((_BYTE *)this + 4) = *(_BYTE *)(a2 + 4); /*0x74bc21*/
  this->vtable3 = *(_DWORD *)(a2 + 8); /*0x74bc27*/
  if ( this + 3 == (_DWORD *)(a2 + 12) ) /*0x74bc2a*/
    goto LABEL_8; /*0x74bc2a*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)v3 + 12))(v3); /*0x74bc30*/
  v4 = *(_DWORD *)(a2 + 20); /*0x74bc33*/
  *((_DWORD *)v3 + 2) = v4; /*0x74bc38*/
  if ( !v4 ) /*0x74bc3b*/
  {
    *((_DWORD *)v3 + 1) = 0; /*0x74bc7f*/
    v3[13] = 0; /*0x74bc82*/
LABEL_8:
    *this = *(_DWORD *)a2; /*0x74bc85*/
    return this; /*0x74bc8d*/
  }
  v5 = __2_YAPAXI_Z(v4); /*0x74bc3e*/
  *((_DWORD *)v3 + 1) = v5; /*0x74bc48*/
  if ( !v5 ) /*0x74bc4b*/
    goto LABEL_8; /*0x74bc4b*/
  v6 = *((_DWORD *)v3 + 2); /*0x74bc4d*/
  v7 = 0; /*0x74bc50*/
  v3[13] = 1; /*0x74bc54*/
  if ( v6 <= 0 ) /*0x74bc58*/
    goto LABEL_8; /*0x74bc58*/
  do /*0x74bc6c*/
  {
    *(_BYTE *)(v7 + *((_DWORD *)v3 + 1)) = *(_BYTE *)(*(_DWORD *)(a2 + 16) + v7); /*0x74bc63*/
    ++v7; /*0x74bc69*/
  }
  while ( v7 < *((_DWORD *)v3 + 2) ); /*0x74bc6c*/
  *this = *(_DWORD *)a2; /*0x74bc74*/
  return this; /*0x74bc78*/
}


// ==== 0x0074BCA0  ObjectClass::method_74BCA0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_74BCA0(_DWORD *this, int a2)
{
  int v3; // edx
  size_t v4; // eax
  void *v5; // eax
  int v6; // ecx
  int v7; // eax

  v3 = this->vtable3; /*0x74bca6*/
  if ( v3 != -1 ) /*0x74bcac*/
  {
    SetBitfieldBit(this->uniqueId, v3, *((unsigned __int8 *)this + 4)); /*0x74bcb7*/
    this->vtable3 = -1; /*0x74bcbc*/
  }
  *((_BYTE *)this + 4) = *(_BYTE *)(a2 + 4); /*0x74bcd0*/
  this->vtable3 = *(_DWORD *)(a2 + 8); /*0x74bcd8*/
  if ( this + 3 == (_DWORD *)(a2 + 12) ) /*0x74bcdb*/
    goto LABEL_10; /*0x74bcdb*/
  (*(void (__thiscall **)(_DWORD *))(this->vtable4 + 12))(this + 3); /*0x74bce1*/
  v4 = *(_DWORD *)(a2 + 20); /*0x74bce4*/
  this->abstractFlags = v4; /*0x74bce9*/
  if ( !v4 ) /*0x74bcec*/
  {
    this->uniqueId = 0; /*0x74bd2c*/
    *((_BYTE *)this + 25) = 0; /*0x74bd33*/
LABEL_10:
    *this = *(_DWORD *)a2; /*0x74bd37*/
    return this; /*0x74bd39*/
  }
  v5 = __2_YAPAXI_Z(v4); /*0x74bcef*/
  this->uniqueId = v5; /*0x74bcf7*/
  if ( !v5 ) /*0x74bcfc*/
    goto LABEL_10; /*0x74bcfc*/
  v6 = this->abstractFlags; /*0x74bcfe*/
  v7 = 0; /*0x74bd01*/
  *((_BYTE *)this + 25) = 1; /*0x74bd05*/
  if ( v6 <= 0 ) /*0x74bd09*/
    goto LABEL_10; /*0x74bd09*/
  do /*0x74bd1d*/
  {
    *(_BYTE *)(this->uniqueId + v7) = *(_BYTE *)(v7 + *(_DWORD *)(a2 + 16)); /*0x74bd14*/
    ++v7; /*0x74bd1a*/
  }
  while ( v7 < this->abstractFlags ); /*0x74bd1d*/
  *this = *(_DWORD *)a2; /*0x74bd23*/
  return this; /*0x74bd25*/
}


// ==== 0x0074BDC0  ObjectClass::method_74BDC0  this=ObjectClass  sig=csp ====
int __thiscall sub_74BDC0(unsigned int *this, unsigned int a2)
{
  int v3; // edx
  unsigned int v5; // edi
  unsigned __int8 v6; // al
  int v7; // edx
  int v8; // ebp
  int v10; // edx
  int v11; // edx
  int v12; // [esp+10h] [ebp+4h]

  v3 = *(this + 2); /*0x74bdc8*/
  if ( v3 != -1 ) /*0x74bdcd*/
  {
    SetBitfieldBit(this->vtable2, v3, *((unsigned __int8 *)this + 4)); /*0x74bdd8*/
    *(this + 2) = -1; /*0x74bddd*/
  }
  if ( a2 ) /*0x74bde6*/
  {
    v5 = *this; /*0x74bdeb*/
    v6 = (*(int (__thiscall **)(unsigned int *, unsigned int, _DWORD))(*(this + 3) + 8))(this + 3, (a2 + 7) >> 3, 0); /*0x74bdf9*/
    *this = a2; /*0x74be01*/
    v12 = v6; /*0x74be03*/
    if ( v6 && v5 < a2 ) /*0x74be0b*/
    {
      do /*0x74be53*/
      {
        v7 = *(this + 2); /*0x74be0e*/
        if ( v7 != v5 ) /*0x74be13*/
        {
          v8 = v5; /*0x74be17*/
          if ( v5 >= *this ) /*0x74be1b*/
            v8 = -1; /*0x74be1d*/
          if ( v8 != v7 ) /*0x74be22*/
          {
            if ( v7 != -1 ) /*0x74be27*/
              SetBitfieldBit(this->vtable2, v7, *((unsigned __int8 *)this + 4)); /*0x74be32*/
            if ( v8 != -1 ) /*0x74be3a*/
              *((_BYTE *)this + 4) = BitArray::TestBit(this->vtable2, v8); /*0x74be46*/
            *(this + 2) = v8; /*0x74be49*/
          }
        }
        ++v5; /*0x74be4c*/
        *((_BYTE *)this + 4) = 0; /*0x74be4d*/
      }
      while ( v5 < a2 ); /*0x74be53*/
    }
    return v12; /*0x74be56*/
  }
  else
  {
    v10 = *(this + 2); /*0x74be60*/
    if ( v10 != -1 ) /*0x74be65*/
    {
      SetBitfieldBit(this->vtable2, v10, *((unsigned __int8 *)this + 4)); /*0x74be70*/
      *(this + 2) = -1; /*0x74be75*/
    }
    v11 = *(this + 3); /*0x74be78*/
    *this = 0; /*0x74be7e*/
    (*(void (__thiscall **)(unsigned int *))(v11 + 12))(this + 3); /*0x74be84*/
    return 1; /*0x74be89*/
  }
}


// ==== 0x0074BF40  ObjectClass::method_74BF40  this=ObjectClass  sig=csp ====
void __thiscall sub_74BF40(unsigned int *this, unsigned int a2)
{
  int v3; // edi
  int v4; // edx

  v3 = a2; /*0x74bf44*/
  if ( a2 >= *this ) /*0x74bf4a*/
    v3 = -1; /*0x74bf4c*/
  v4 = *(this + 2); /*0x74bf4f*/
  if ( v3 != v4 ) /*0x74bf54*/
  {
    if ( v4 != -1 ) /*0x74bf59*/
      SetBitfieldBit(this->vtable2, v4, *((unsigned __int8 *)this + 4)); /*0x74bf64*/
    if ( v3 != -1 ) /*0x74bf6c*/
      *((_BYTE *)this + 4) = BitArray::TestBit(this->vtable2, v3); /*0x74bf78*/
    *(this + 2) = v3; /*0x74bf7b*/
  }
}


// ==== 0x0074BF90  _VectorClass_E::Clear  this=VectorClass  sig=csp ====
char __thiscall VectorClass_E::_vt06(_DWORD *this, int a2)
{
  return *(_BYTE *)(this->Items + a2); /*0x74bf9a*/
}


// ==== 0x0074BFA0  _VectorClass_E::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_E::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x74bfa3*/
  *Block = &vt_VectorClass_unsigned_char_7F65F4; /*0x74bfa6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x74bfb0*/
  {
    __3_YAXPAX_Z(v3); /*0x74bfb8*/
    *(Block + 1) = 0; /*0x74bfc0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x74bfcb*/
  *(Block + 2) = 0; /*0x74bfd1*/
  if ( (a2 & 1) != 0 ) /*0x74bfd8*/
    __3_YAXPAX_Z(Block); /*0x74bfdb*/
  return (VectorClass *)Block; /*0x74bfe5*/
}


// ==== 0x0074BFF0  _VectorClass_E::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_E::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // eax

  v2 = *(this + 2); /*0x74bff7*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x74bfff*/
  {
    v3 = 0; /*0x74c001*/
    if ( v2 <= 0 ) /*0x74c005*/
      return 1; /*0x74c021*/
    while ( *(_BYTE *)(*(this + 1) + v3) == *(_BYTE *)(*(_DWORD *)(a2 + 4) + v3) ) /*0x74c015*/
    {
      if ( ++v3 >= v2 ) /*0x74c01a*/
        return 1; /*0x74c01a*/
    }
  }
  return 0; /*0x74c01c*/
}


// ==== 0x0074C030  _VectorClass_E::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_E::_vt02(void *this, signed int Size, char *a3)
{
  char *v4; // edi
  signed int v6; // ecx
  signed int i; // eax

  if ( Size ) /*0x74c03c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x74c046*/
    if ( a3 ) /*0x74c04c*/
      v4 = a3; /*0x74c05b*/
    else
      v4 = (char *)__2_YAPAXI_Z(Size); /*0x74c057*/
    *((_BYTE *)this + 12) = 1; /*0x74c05f*/
    if ( v4 ) /*0x74c063*/
    {
      if ( this->Items ) /*0x74c06e*/
      {
        v6 = this->Capacity; /*0x74c075*/
        if ( Size < v6 ) /*0x74c07a*/
          v6 = Size; /*0x74c07c*/
        for ( i = 0; i < v6; v4[i - 1] = *(_BYTE *)(this->Items + i - 1) ) /*0x74c082*/
          ++i; /*0x74c087*/
        if ( *((_BYTE *)this + 13) ) /*0x74c094*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x74c09f*/
          this->Items = 0; /*0x74c0a7*/
        }
      }
      this->Items = v4; /*0x74c0b0*/
      this->Capacity = Size; /*0x74c0b8*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x74c0bb*/
      return 1; /*0x74c0c1*/
    }
    else
    {
      return 0; /*0x74c068*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x74c0cb*/
    return 1; /*0x74c0d1*/
  }
}


// ==== 0x0074C0E0  _VectorClass_E::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_E::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x74c0ed*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x74c0f3*/
    *(_DWORD *)(this + 4) = 0; /*0x74c0fb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x74c0fe*/
  *(_DWORD *)(this + 8) = 0; /*0x74c101*/
}


// ==== 0x0074C110  _VectorClass_E::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_E::_vt04(int this, _BYTE *a2)
{
  int result; // eax
  int v3; // esi
  int v4; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x74c110*/
    return 0; /*0x74c119*/
  v3 = *(_DWORD *)(this + 8); /*0x74c11e*/
  result = 0; /*0x74c121*/
  if ( v3 <= 0 ) /*0x74c125*/
    return -1; /*0x74c13a*/
  v4 = *(_DWORD *)(this + 4); /*0x74c12b*/
  while ( *(_BYTE *)(v4 + result) != *a2 ) /*0x74c133*/
  {
    if ( ++result >= v3 ) /*0x74c138*/
      return -1; /*0x74c138*/
  }
  return result; /*0x74c118*/
}


// ==== 0x0074C150  _VectorClass_E::GetCapacity  this=VectorClass  sig=csp ====
int __thiscall VectorClass_E::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x74c150*/
    return a2 - *(_DWORD *)(this + 4); /*0x74c163*/
  else
    return 0; /*0x74c157*/
}


// ==== 0x0074C170  sub_74C170  this=-  sig=ida-proto ====
int sub_74C170()
{
  MEMORY[0xB1D260] = 0; /*0x74c172*/
  MEMORY[0xB1D264] = 0; /*0x74c177*/
  MEMORY[0xB1D268] = 0; /*0x74c17c*/
  MEMORY[0xB1D26C] = 0; /*0x74c181*/
  return 0; /*0x74c186*/
}


// ==== 0x0074C190  sub_74C190  this=-  sig=ida-proto ====
void sub_74C190()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x74c19c*/
  MEMORY[0xB1D278] = Math::Sqrt(v0 + v0); /*0x74c1ae*/
}


// ==== 0x0074C1C0  sub_74C1C0  this=-  sig=ida-proto ====
void sub_74C1C0()
{
  MEMORY[0xB1D2E0] = MEMORY[0xB1D278] / 60.0; /*0x74c1cc*/
}


// ==== 0x0074C1E0  sub_74C1E0  this=-  sig=ida-proto ====
void sub_74C1E0()
{
  MEMORY[0xB1D2C8] = 1.0 / MEMORY[0xB1D2E0]; /*0x74c1ec*/
}


// ==== 0x0074C200  sub_74C200  this=-  sig=ida-proto ====
void sub_74C200()
{
  MEMORY[0xB1D2C0] = 0.0174532925199433 * 45.0; /*0x74c20c*/
}


// ==== 0x0074C220  sub_74C220  this=-  sig=ida-proto ====
void sub_74C220()
{
  MEMORY[0xB1D280] = 0.0174532925199433 * 60.0; /*0x74c22c*/
}


// ==== 0x0074C240  sub_74C240  this=-  sig=ida-proto ====
void sub_74C240()
{
  MEMORY[0xB1D258] = 0.0174532925199433 * 90.0; /*0x74c24c*/
}


// ==== 0x0074C260  sub_74C260  this=-  sig=ida-proto ====
__int64 sub_74C260()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB1D258] - MEMORY[0xB1D280]); /*0x74c272*/
  result = Math::RoundToInt(v0 * MEMORY[0xB1D278] * 0.5); /*0x74c286*/
  MEMORY[0xB1D2E8] = result; /*0x74c28b*/
  return result; /*0x74c290*/
}


// ==== 0x0074C2A0  sub_74C2A0  this=-  sig=ida-proto ====
void sub_74C2A0()
{
  MEMORY[0xB1D288] = Math::ArcTan((double)MEMORY[0xB1D2E8] * 0.00390625); /*0x74c2b7*/
}


// ==== 0x0074C2D0  sub_74C2D0  this=-  sig=ida-proto ====
void sub_74C2D0()
{
  MEMORY[0xB1D2B8] = Math::ArcTan((double)(2 * MEMORY[0xB1D2E8]) / MEMORY[0xB1D278]); /*0x74c2f2*/
}


// ==== 0x0074C300  sub_74C300  this=-  sig=ida-proto ====
__int64 sub_74C300()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB1D2E8]) + 0.5); /*0x74c31b*/
  MEMORY[0xB1D2DC] = result; /*0x74c320*/
  return result; /*0x74c326*/
}


// ==== 0x0074C330  sub_74C330  this=-  sig=ida-proto ====
int sub_74C330()
{
  MEMORY[0xB1D270] = 0; /*0x74c332*/
  MEMORY[0xB1D272] = 0; /*0x74c338*/
  return 0; /*0x74c33e*/
}


// ==== 0x0074C340  sub_74C340  this=-  sig=ida-proto ====
int sub_74C340()
{
  MEMORY[0xB1D2A8] = 0; /*0x74c342*/
  MEMORY[0xB1D2AC] = 0; /*0x74c347*/
  MEMORY[0xB1D2B0] = 0; /*0x74c34c*/
  return 0; /*0x74c351*/
}


// ==== 0x0074C360  sub_74C360  this=-  sig=ida-proto ====
int sub_74C360()
{
  MEMORY[0xB1D2D8] = 0; /*0x74c365*/
  MEMORY[0xB1D2D0] = 128; /*0x74c36f*/
  MEMORY[0xB1D2D4] = 128; /*0x74c374*/
  return 128; /*0x74c379*/
}


// ==== 0x0074C380  sub_74C380  this=-  sig=ida-proto ====
int sub_74C380()
{
  MEMORY[0xB1D294] = 0; /*0x74c387*/
  MEMORY[0xB1D298] = 0; /*0x74c38c*/
  MEMORY[0xB1D29C] = 1; /*0x74c391*/
  MEMORY[0xB1D29D] = 0; /*0x74c398*/
  MEMORY[0xB1D290] = (int)&off_7F663C; /*0x74c39d*/
  MEMORY[0xB1D2A4] = 10; /*0x74c3a7*/
  MEMORY[0xB1D2A0] = 0; /*0x74c3b1*/
  return atexit(sub_74C3C0); /*0x74c3bc*/
}


// ==== 0x0074C3C0  sub_74C3C0  this=-  sig=ida-proto ====
void __cdecl sub_74C3C0()
{
  if ( (MEMORY[0xB1D250] & 1) == 0 ) /*0x74c3ca*/
  {
    MEMORY[0xB1D290] = (int)&vt_VectorClass_VeinholeMonsterClass; /*0x74c3ce*/
    MEMORY[0xB1D250] |= 1u; /*0x74c3e1*/
    if ( MEMORY[0xB1D294] ) /*0x74c3e7*/
    {
      if ( MEMORY[0xB1D29D] ) /*0x74c3f1*/
      {
        __3_YAXPAX_Z(MEMORY[0xB1D294]); /*0x74c3f4*/
        MEMORY[0xB1D294] = 0; /*0x74c3fc*/
      }
    }
    MEMORY[0xB1D29D] = 0; /*0x74c406*/
    MEMORY[0xB1D298] = 0; /*0x74c40d*/
  }
}


// ==== 0x0074C420  VeinholeMonsterClass::Construct  this=VeinholeMonsterClass  sig=csp ====
_DWORD *__thiscall VeinholeMonsterClass::Construct(_DWORD *this, AbstractClass *aP1)
{
  IUnknown *v3; // ecx
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int i; // eax
  size_t v12; // eax
  size_t v13; // eax

  ObjectClass::Init(this, aP1); /*0x74c428*/
  v3 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x74c42d*/
  this->q0C0 = 0; /*0x74c433*/
  this->q0B8 = v3; /*0x74c43d*/
  *this = &VeinholeMonsterClass::`vftable'; /*0x74c443*/
  this->vtable2 = &VeinholeMonsterClass::`vftable'; /*0x74c449*/
  this->vtable3 = &VeinholeMonsterClass::`vftable'; /*0x74c450*/
  this->vtable4 = &VeinholeMonsterClass::`vftable'; /*0x74c457*/
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[66316] < *(int *)&MEMORY[0xB077F8].__pad_579C[66308] /*0x74c493*/
    || (MEMORY[0xB077F8].__pad_579C[66313] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[66308])
    && *(int *)&MEMORY[0xB077F8].__pad_579C[66320] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[66300] + 8))(
         &MEMORY[0xB077F8].__pad_579C[66300],
         *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[66308] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[66320],
         0) )
  {
    v4 = (*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[66316])++; /*0x74c4a0*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[66304] + 4 * v4) = this; /*0x74c4af*/
  }
  v5 = __2_YAPAXI_Z(8 * *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 220)); /*0x74c4c7*/
  if ( !v5 ) /*0x74c4d1*/
    v5 = 0; /*0x74c4da*/
  this->q0B4 = v5; /*0x74c4de*/
  v6 = (_DWORD *)__2_YAPAXI_Z(0x14u); /*0x74c4e9*/
  if ( v6 ) /*0x74c4f0*/
  {
    v7 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 220); /*0x74c4f8*/
    v6[3] = 0; /*0x74c4fe*/
    v6[4] = -1; /*0x74c505*/
    *v6 = 0; /*0x74c50c*/
    v6[1] = v7; /*0x74c519*/
    v8 = __2_YAPAXI_Z(4 * v7 + 4); /*0x74c51d*/
    v9 = v6[1]; /*0x74c522*/
    v6[2] = v8; /*0x74c525*/
    v10 = 0; /*0x74c52b*/
    if ( v9 >= 0 ) /*0x74c52f*/
    {
      do /*0x74c542*/
      {
        ++v10; /*0x74c534*/
        *(_DWORD *)(v6[2] + 4 * v10 - 4) = 0; /*0x74c535*/
      }
      while ( v10 <= v6[1] ); /*0x74c542*/
    }
  }
  else
  {
    v6 = 0; /*0x74c546*/
  }
  this->q0B0 = v6; /*0x74c548*/
  for ( i = 0; i <= *v6; *(_DWORD *)(v6[2] + 4 * i - 4) = 0 ) /*0x74c554*/
    ++i; /*0x74c559*/
  *v6 = 0; /*0x74c568*/
  if ( !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[66396] ) /*0x74c576*/
  {
    v12 = Object::ComputeAllocationSize(); /*0x74c578*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[66396] = __2_YAPAXI_Z(v12); /*0x74c586*/
  }
  v13 = Object::ComputeAllocationSize(); /*0x74c58b*/
  this->q0C4 = __2_YAPAXI_Z(v13); /*0x74c599*/
  return this; /*0x74c5a1*/
}


// ==== 0x0074C5B0  VeinholeMonsterClass::Constructor  this=VeinholeMonsterClass  sig=csp ====
VeinholeMonsterClass *__thiscall VeinholeMonsterClass::Constructor(void *this, IUnknown *aP1)
{
  int v4; // eax
  IUnknown *v5; // edx
  int v6; // eax
  int v7; // edi
  _BYTE *v8; // eax
  unsigned __int8 v9; // cl
  char v10; // dl
  bool v11; // cc
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int i; // eax
  size_t v20; // eax
  size_t v21; // eax
  int v22; // eax
  int v23; // ebp
  int v24; // edi
  int j; // eax
  _DWORD *v26; // edx
  char *v28; // [esp+10h] [ebp-18h]
  MouseClass *v29; // [esp+14h] [ebp-14h]
  MouseClass *Vtable3; // [esp+18h] [ebp-10h] BYREF
  int v31; // [esp+1Ch] [ebp-Ch] BYREF
  int v32; // [esp+20h] [ebp-8h]
  int GroundHeight; // [esp+24h] [ebp-4h]
  __int16 aP1a; // [esp+2Ch] [ebp+4h]

  ObjectClass::ctor(this); /*0x74c5b9*/
  this->q0AC = 0; /*0x74c5c4*/
  this->q0B0 = 0; /*0x74c5ca*/
  this->q0B4 = 0; /*0x74c5d0*/
  v4 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 224); /*0x74c5e1*/
  this->q0B8 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x74c5e7*/
  this->q0C0 = v4; /*0x74c5ed*/
  this->q0C4 = 0; /*0x74c5f3*/
  this->q0C8 = 0; /*0x74c5f9*/
  this->q0CC = 0; /*0x74c5ff*/
  this->q0D0 = 0; /*0x74c605*/
  *((_BYTE *)this + 212) = 0; /*0x74c60b*/
  v5 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x74c611*/
  this->q0E0 = 0; /*0x74c617*/
  this->q0D8 = v5; /*0x74c61d*/
  this->q0E4 = 0; /*0x74c623*/
  this->q0E8 = 1; /*0x74c629*/
  this->q0EC = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x74c638*/
  this->q0F4 = 0; /*0x74c63e*/
  this->q0F8 = aP1->field_0; /*0x74c64b*/
  this->q0FC = 0; /*0x74c651*/
  *((_BYTE *)this + 256) = 0; /*0x74c657*/
  *((_BYTE *)this + 257) = 0; /*0x74c65d*/
  this->q104 = 0; /*0x74c663*/
  *(_DWORD *)this = &VeinholeMonsterClass::`vftable'; /*0x74c669*/
  this->vtable2 = &VeinholeMonsterClass::`vftable'; /*0x74c66f*/
  this->vtable3 = &VeinholeMonsterClass::`vftable'; /*0x74c675*/
  this->vtable4 = &VeinholeMonsterClass::`vftable'; /*0x74c67c*/
  AbstractClass::GenerateUniqueID((int)this + 4); /*0x74c683*/
  if ( ObjectClass::IsCellSuitableForPlacement((__int16 *)aP1) ) /*0x74c68a*/
  {
    if ( stru_B1D188.field_118 < *(int *)&stru_B1D188.__pad_FC[20] /*0x74c6cb*/
      || (stru_B1D188.__pad_FC[25] || !*(_DWORD *)&stru_B1D188.__pad_FC[20])
      && *(int *)stru_B1D188.__pad_11C > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B1D188.__pad_FC[12] + 8))(
           &stru_B1D188.__pad_FC[12],
           *(_DWORD *)&stru_B1D188.__pad_FC[20] + *(_DWORD *)stru_B1D188.__pad_11C,
           0) )
    {
      v6 = stru_B1D188.field_118++; /*0x74c6d8*/
      *(_DWORD *)(*(_DWORD *)&stru_B1D188.__pad_FC[16] + 4 * v6) = this; /*0x74c6e7*/
    }
    if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[21752] ) /*0x74c6f0*/
    {
      aP1a = -1; /*0x74c6f6*/
      v28 = &stru_830620.__pad_579C[65933]; /*0x74c6fe*/
      do /*0x74c796*/
      {
        v7 = -1; /*0x74c706*/
        do /*0x74c77b*/
        {
          LOWORD(v29) = v7 + LOWORD(aP1->field_0); /*0x74c719*/
          HIWORD(v29) = aP1a + HIWORD(aP1->field_0); /*0x74c722*/
          Vtable3 = v29; /*0x74c72b*/
          v8 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&Vtable3); /*0x74c735*/
          v9 = v28[v7]; /*0x74c73e*/
          v8[284] = v9; /*0x74c743*/
          if ( v9 ) /*0x74c749*/
            *((_DWORD *)v8 + 14) = &g_CellTileLookup->__pad_0[v9 - 1]; /*0x74c75b*/
          else
            *((_DWORD *)v8 + 14) = 0; /*0x74c760*/
          v10 = v8[283]; /*0x74c763*/
          v8[282] = 0; /*0x74c769*/
          ++v7; /*0x74c771*/
          v8[283] = v10 - 1; /*0x74c775*/
        }
        while ( v7 <= 1 ); /*0x74c77b*/
        v11 = (int)(v28 + 3) <= (int)&stru_830620.__pad_579C[65939]; /*0x74c789*/
        ++aP1a; /*0x74c78e*/
        v28 += 3; /*0x74c792*/
      }
      while ( v11 ); /*0x74c796*/
    }
    this->q0D8 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x74c7ac*/
    v12 = v32; /*0x74c7ae*/
    this->q0E4 = 4; /*0x74c7b2*/
    this->q0DC = v12; /*0x74c7b8*/
    this->q0E0 = 4; /*0x74c7bb*/
    this->q0E8 = 0; /*0x74c7be*/
    this->q0D0 = -1; /*0x74c7c4*/
    v13 = __2_YAPAXI_Z(8 * *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 220)); /*0x74c7e2*/
    if ( !v13 ) /*0x74c7ec*/
      v13 = 0; /*0x74c7f5*/
    this->q0B4 = v13; /*0x74c7f9*/
    v14 = (_DWORD *)__2_YAPAXI_Z(0x14u); /*0x74c804*/
    if ( v14 ) /*0x74c80b*/
    {
      v15 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 220); /*0x74c812*/
      v14[3] = 0; /*0x74c818*/
      v14[4] = -1; /*0x74c81b*/
      *v14 = 0; /*0x74c822*/
      v14[1] = v15; /*0x74c82b*/
      v16 = __2_YAPAXI_Z(4 * v15 + 4); /*0x74c82f*/
      v17 = v14[1]; /*0x74c834*/
      v14[2] = v16; /*0x74c837*/
      v18 = 0; /*0x74c83d*/
      if ( v17 >= 0 ) /*0x74c841*/
      {
        do /*0x74c850*/
        {
          ++v18; /*0x74c846*/
          *(_DWORD *)(v14[2] + 4 * v18 - 4) = 0; /*0x74c847*/
        }
        while ( v18 <= v14[1] ); /*0x74c850*/
      }
    }
    else
    {
      v14 = 0; /*0x74c854*/
    }
    this->q0B0 = v14; /*0x74c856*/
    for ( i = 0; i <= *v14; *(_DWORD *)(v14[2] + 4 * i - 4) = 0 ) /*0x74c862*/
      ++i; /*0x74c867*/
    *v14 = 0; /*0x74c872*/
    if ( !*(_DWORD *)&stru_B1D188.__pad_164[4] ) /*0x74c87b*/
    {
      v20 = Object::ComputeAllocationSize(); /*0x74c87d*/
      *(_DWORD *)&stru_B1D188.__pad_164[4] = __2_YAPAXI_Z(v20); /*0x74c88b*/
    }
    v21 = Object::ComputeAllocationSize(); /*0x74c890*/
    this->q0C4 = __2_YAPAXI_Z(v21); /*0x74c89b*/
    v22 = (SLOWORD(aP1->field_0) << 8) + 128; /*0x74c8bc*/
    v32 = (SHIWORD(aP1->field_0) << 8) + 128; /*0x74c8c1*/
    v31 = v22; /*0x74c8cb*/
    GroundHeight = 0; /*0x74c8cf*/
    GroundHeight = Cell::GetGroundHeight((IUnknown *)&v31); /*0x74c8d8*/
    ObjectClass::Deploy((#374 *)this); /*0x74c8e4*/
    this->health = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4084) + 160); /*0x74c8fb*/
    Vtable3 = (MouseClass *)AbstractClass::GetVtable3((AbstractClass *)((char *)this + 4)); /*0x74c90d*/
    if ( *(_DWORD *)&stru_B05488.__pad_579C[15392] + 1 <= *(int *)&stru_B05488.__pad_579C[15396] ) /*0x74c919*/
      goto LABEL_35; /*0x74c919*/
    if ( *(_DWORD *)&stru_B05488.__pad_579C[15396] ) /*0x74c921*/
    {
      v23 = *(_DWORD *)&stru_B05488.__pad_579C[15396]; /*0x74c92a*/
      if ( *(int *)&stru_B05488.__pad_579C[15396] < 0 ) /*0x74c92e*/
        return (VeinholeMonsterClass *)this; /*0x74c92e*/
    }
    else
    {
      v23 = 10; /*0x74c923*/
    }
    v24 = __2_YAPAXI_Z(8 * (v23 + *(_DWORD *)&stru_B05488.__pad_579C[15396])); /*0x74c947*/
    if ( v24 ) /*0x74c94e*/
    {
      for ( j = 0; j < *(int *)&stru_B05488.__pad_579C[15392]; *(_DWORD *)(v24 + 8 * j - 4) = v26[1] ) /*0x74c967*/
      {
        v26 = (_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * j++); /*0x74c96f*/
        *(_DWORD *)(v24 + 8 * j - 8) = *v26; /*0x74c975*/
      }
      __3_YAXPAX_Z(*(void **)&stru_B05488.__pad_579C[15388]); /*0x74c990*/
      *(_DWORD *)&stru_B05488.__pad_579C[15388] = v24; /*0x74c99f*/
      *(_DWORD *)&stru_B05488.__pad_579C[15396] += v23; /*0x74c9a5*/
      *(_DWORD *)&stru_B05488.__pad_579C[15404] = 0; /*0x74c9aa*/
LABEL_35:
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392]) = Vtable3; /*0x74c9b0*/
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392] + 4) = this; /*0x74c9ce*/
      stru_B05488.__pad_579C[15400] = 0; /*0x74c9d8*/
      ++*(_DWORD *)&stru_B05488.__pad_579C[15392]; /*0x74c9de*/
    }
  }
  return (VeinholeMonsterClass *)this; /*0x74c9e5*/
}


// ==== 0x0074C9F0  VeinholeMonsterClass::DestroyVeinholeMonster  this=VeinholeMonsterClass  sig=csp ====
void CleanupVeinholeSystem()
{
  int i; // esi
  int v1; // ecx

  for ( i = MEMORY[0xB1D2A0] - 1; i >= 0; --i ) /*0x74d76e*/
  {
    v1 = *((_DWORD *)MEMORY[0xB1D294] + i); /*0x74d776*/
    if ( v1 ) /*0x74d77b*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 32))(v1, 1); /*0x74d781*/
  }
  MEMORY[0xB1D2A0] = 0; /*0x74d78c*/
  if ( MEMORY[0xB1D294] && MEMORY[0xB1D29D] ) /*0x74d79c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB1D294]); /*0x74d79f*/
    MEMORY[0xB1D294] = 0; /*0x74d7a7*/
  }
  MEMORY[0xB1D29D] = 0; /*0x74d7ad*/
  MEMORY[0xB1D298] = 0; /*0x74d7b3*/
}


// ==== 0x0074CD60  ObjectClass::processDeath  this=int  sig=csp ====
int __thiscall sub_74CD60(_WORD *this)
{
  int v1; // edx
  char *i; // esi

  v1 = MEMORY[0xB1D2A0] - 1; /*0x74cd68*/
  if ( MEMORY[0xB1D2A0] - 1 < 0 ) /*0x74cd6d*/
    return 0; /*0x74cda2*/
  for ( i = (char *)MEMORY[0xB1D294] + 4 * v1; /*0x74cd78*/
        *(_WORD *)(*(_DWORD *)i + 248) != *this || *(_WORD *)(*(_DWORD *)i + 250) != *(this + 1);
        i -= 4 )
  {
    if ( --v1 < 0 ) /*0x74cd97*/
      return 0; /*0x74cd97*/
  }
  return *((_DWORD *)MEMORY[0xB1D294] + v1); /*0x74cd9e*/
}


// ==== 0x0074CDB0  ObjectClass::Helper_486E30_Helper  this=int  sig=csp ====
int __thiscall sub_74CDB0(__int16 *this)
{
  int v1; // esi

  v1 = MEMORY[0xB1D2A0] - 1; /*0x74cdb7*/
  if ( MEMORY[0xB1D2A0] - 1 < 0 ) /*0x74cdbe*/
    return 0; /*0x74cde0*/
  while ( !*(_BYTE *)(Cell::PosToIndex(this) + *(_DWORD *)(*((_DWORD *)MEMORY[0xB1D294] + v1) + 196)) ) /*0x74cddb*/
  {
    if ( --v1 < 0 ) /*0x74cdde*/
      return 0; /*0x74cdde*/
  }
  return *((_DWORD *)MEMORY[0xB1D294] + v1); /*0x74cde0*/
}


// ==== 0x0074CE50  VeinholeMonsterClass::UpdateGrowth  this=VeinholeMonsterClass  sig=csp ====
char __thiscall VeinholeMonsterClass::UpdateGrowth(int this)
{
  TerrainTypeClass *v2; // edi
  IUnknown *v3; // eax
  IUnknown *v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  IUnknown *v9; // eax
  int v10; // eax
  int GroundHeight; // eax
  int v12; // edx
  int v13; // eax
  _DWORD *FireAtSW; // edi
  IUnknown *v15; // ebx
  double v16; // st7
  double v17; // st7
  int v18; // edx
  int v19; // eax
  IUnknown *v21; // edx
  int eax48; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // ebx
  int v25; // edi
  IUnknown *v27; // ecx
  int edi55; // edi
  __int16 *v28; // eax
  int v29; // eax
  __int16 *v30; // ebp
  __int16 *v31; // eax
  IUnknown *v32; // eax
  int v33; // edx
  int v34; // eax
  IUnknown *v35; // eax
  IUnknown *v37; // ecx
  IUnknown *v38; // ecx
  DynamicVector *v39; // [esp-4h] [ebp-34h]
  IUnknown *aP0[2]; // [esp+Ch] [ebp-24h] BYREF
  IUnknown *v42; // [esp+14h] [ebp-1Ch]
  _DWORD var18[3]; // [esp+18h] [ebp-18h] BYREF
  int v43; // [esp+24h] [ebp-Ch] BYREF
  int v44; // [esp+28h] [ebp-8h]
  int v45; // [esp+2Ch] [ebp-4h]

  v2 = (TerrainTypeClass *)(this + 216); /*0x74ce58*/
  if ( CDTimerClass::TimeRemaining((int *)(this + 216)) || !*(_DWORD *)(this + 228) ) /*0x74ce69*/
  {
    *(_BYTE *)(this + 212) = 0; /*0x74ceb2*/
  }
  else
  {
    v39 = *(DynamicVector **)(this + 228); /*0x74ce83*/
    *(_DWORD *)(this + 208) += *(_DWORD *)(this + 232); /*0x74ce88*/
    *(_BYTE *)(this + 212) = 1; /*0x74ce8e*/
    Timer::Start(aP0, v39); /*0x74ce95*/
    v3 = aP0[1]; /*0x74ce9e*/
    v4 = v42; /*0x74cea2*/
    *(IUnknown **)v2->__pad_0 = aP0[0]; /*0x74cea6*/
    *(_DWORD *)&v2->__pad_0[4] = v3; /*0x74cea8*/
    *(_DWORD *)&v2->__pad_0[8] = v4; /*0x74ceab*/
  }
  switch ( *(_DWORD *)(this + 200) ) /*0x74cecd*/
  {
    case 0: /*0x74cecd*/
      v5 = *(_DWORD *)(this + 236); /*0x74ced4*/
      v6 = *(_DWORD *)(this + 244); /*0x74ceda*/
      if ( v5 == -1 ) /*0x74cee3*/
        goto LABEL_9; /*0x74cee3*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v5 >= v6 ) /*0x74ceef*/
        goto LABEL_12; /*0x74ceef*/
      v6 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v5; /*0x74cef1*/
LABEL_9:
      if ( v6 ) /*0x74cef5*/
      {
        if ( *(_DWORD *)(this + 204) != 3 ) /*0x74cefd*/
          *(_DWORD *)(this + 204) = 2; /*0x74cf03*/
      }
      else
      {
LABEL_12:
        if ( *(_DWORD *)(this + 204) != 3 ) /*0x74cf18*/
        {
          if ( VeinholeMonsterClass_Update((MouseClass *)(this + 248), 2) ) /*0x74cf2c*/
          {
            *(_DWORD *)(this + 204) = 1; /*0x74cf35*/
          }
          else if ( *(_DWORD *)(this + 208) == *(_DWORD *)&stru_830620.__pad_579C[4 * *(_DWORD *)(this + 200) + 66152] ) /*0x74cf57*/
          {
            aP0[0] = (IUnknown *)((int)abs32(Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] /*0x74cf7b*/
                                                                    + 536)))
                                % 10000);
            if ( (double)(int)aP0[0] * 0.0001 < 0.004 ) /*0x74cf94*/
            {
              *(_DWORD *)(this + 208) = *(_DWORD *)&stru_830620.__pad_579C[4 * *(_DWORD *)(this + 200) + 66168] - 1; /*0x74cfa8*/
              *(_DWORD *)(this + 232) = -1; /*0x74cfae*/
            }
          }
        }
      }
      goto LABEL_48; /*0x74cf0d*/
    case 1: /*0x74cecd*/
      v7 = *(_DWORD *)(this + 236); /*0x74cfbd*/
      v8 = *(_DWORD *)(this + 244); /*0x74cfc3*/
      if ( v7 == -1 ) /*0x74cfcc*/
        goto LABEL_21; /*0x74cfcc*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v7 >= v8 ) /*0x74cfd8*/
        goto LABEL_27; /*0x74cfd8*/
      v8 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v7; /*0x74cfda*/
LABEL_21:
      if ( v8 ) /*0x74cfde*/
      {
        if ( *(_DWORD *)(this + 204) != 3 ) /*0x74cfe6*/
          *(_DWORD *)(this + 204) = 2; /*0x74cfe8*/
      }
      else
      {
LABEL_27:
        if ( VeinholeMonsterClass_Update((MouseClass *)(this + 248), 2) || *(_DWORD *)(this + 204) != 1 ) /*0x74d037*/
          goto LABEL_48; /*0x74d037*/
        *(_DWORD *)(this + 204) = 0; /*0x74d03d*/
      }
      *(_DWORD *)(this + 232) = 1; /*0x74cff2*/
      if ( *(int *)(this + 208) < 0 ) /*0x74d004*/
        *(_DWORD *)(this + 208) = 0; /*0x74d00a*/
LABEL_48:
      v21 = *(IUnknown **)(this + 184); /*0x74d25d*/
      eax48 = *(_DWORD *)(this + 192); /*0x74d263*/
      if ( v21 == (IUnknown *)-1 ) /*0x74d26c*/
        goto LABEL_51; /*0x74d26c*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (int)v21 < eax48 ) /*0x74d278*/
      {
        eax48 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (_DWORD)v21; /*0x74d27a*/
LABEL_51:
        if ( eax48 ) /*0x74d27e*/
          goto LABEL_63; /*0x74d27e*/
      }
      if ( *(_BYTE *)(this + 256) ) /*0x74d284*/
      {
        if ( *(_DWORD *)(this + 176) ) /*0x74d2c1*/
        {
          v24 = 0; /*0x74d2d2*/
          v25 = (int)abs32(Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536))) % 4; /*0x74d2f2*/
          v27 = *(IUnknown **)(this + 176); /*0x74d2f3*/
          edi55 = v25 + 1; /*0x74d2f9*/
          if ( v27->field_0 ) /*0x74d2fa*/
          {
            v29 = v27->field_8; /*0x74d304*/
            v30 = *(__int16 **)(v29 + 4); /*0x74d30c*/
            *(_DWORD *)(v29 + 4) = *(_DWORD *)(v29 + 4 * v27->field_0); /*0x74d30f*/
            *(_DWORD *)(v27->field_8 + 4 * v27->field_0--) = 0; /*0x74d317*/
            Heap::SiftDown(&v27->field_0, 1); /*0x74d323*/
            v28 = v30; /*0x74d328*/
          }
          else
          {
            v28 = 0; /*0x74d300*/
          }
          if ( edi55 > 0 ) /*0x74d32e*/
          {
            while ( v28 ) /*0x74d332*/
            {
              v31 = (__int16 *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v28); /*0x74d33a*/
              v32 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v31 + 18); /*0x74d348*/
              RandomMap::RemoveMatching((void *)this, v32); /*0x74d350*/
              if ( ++v24 >= edi55 ) /*0x74d358*/
                break; /*0x74d358*/
              v28 = (__int16 *)PriorityQueue::Pop(*(int **)(this + 176)); /*0x74d360*/
            }
          }
        }
        v33 = v44; /*0x74d372*/
        v34 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 228); /*0x74d376*/
        *(_DWORD *)(this + 184) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x74d37c*/
        *(_DWORD *)(this + 188) = v33; /*0x74d382*/
        *(_DWORD *)(this + 192) = v34; /*0x74d388*/
      }
      else
      {
        UpdateVeinholeMonster((_DWORD *)this); /*0x74d290*/
        v22 = v44; /*0x74d2a0*/
        v23 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 224); /*0x74d2a4*/
        *(_DWORD *)(this + 184) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x74d2aa*/
        *(_DWORD *)(this + 188) = v22; /*0x74d2b0*/
        *(_DWORD *)(this + 192) = v23; /*0x74d2b6*/
      }
LABEL_63:
      LOBYTE(v35) = *(_BYTE *)(this + 256); /*0x74d38e*/
      if ( !(_BYTE)v35 ) /*0x74d397*/
      {
        v35 = *(IUnknown **)(this + 200); /*0x74d399*/
        v37 = *(IUnknown **)(this + 208); /*0x74d39f*/
        if ( v37 == *(IUnknown **)&stru_830620.__pad_579C[4 * (_DWORD)v35 + 66152] ) /*0x74d3ac*/
        {
          v38 = *(IUnknown **)(this + 204); /*0x74d3ae*/
          if ( v38 != v35 ) /*0x74d3b6*/
          {
            *(_DWORD *)(this + 200) = v38; /*0x74d3b8*/
            v35 = *(IUnknown **)&stru_830620.__pad_579C[4 * (_DWORD)v38 + 66184]; /*0x74d3be*/
            *(_DWORD *)(this + 232) = v35; /*0x74d3c5*/
            *(_DWORD *)(this + 208) = *(_DWORD *)&stru_830620.__pad_579C[4 * *(_DWORD *)(this + 200) + 66200]; /*0x74d3d9*/
            return (char)v35; /*0x74d3e4*/
          }
        }
        else if ( v37 != (IUnknown *)-1 ) /*0x74d3e8*/
        {
          v35 = (IUnknown *)((char *)v37 + 12 * (_DWORD)v35 + (_DWORD)v35); /*0x74d3f0*/
          *(_DWORD *)(this + 252) = *(_DWORD *)&stru_830620.__pad_579C[4 * (_DWORD)v35 + 65944] - 1; /*0x74d3fb*/
          return (char)v35; /*0x74d406*/
        }
        *(_DWORD *)(this + 232) = 0; /*0x74d407*/
      }
      return (char)v35;
    case 2: /*0x74cecd*/
      v9 = *(IUnknown **)(this + 208); /*0x74d045*/
      if ( (int)v9 >= 0 && *(_DWORD *)&stru_830620.__pad_579C[4 * (_DWORD)v9 + 66048] == 11 ) /*0x74d05b*/
      {
        if ( !*(_BYTE *)(this + 257) ) /*0x74d061*/
        {
          v10 = (*(__int16 *)(this + 250) << 8) + 128; /*0x74d08d*/
          var18[0] = (*(__int16 *)(this + 248) << 8) + 128; /*0x74d098*/
          var18[1] = v10; /*0x74d09c*/
          var18[2] = 0; /*0x74d0a0*/
          GroundHeight = Cell::GetGroundHeight((IUnknown *)var18); /*0x74d0a4*/
          v12 = (*(__int16 *)(this + 250) << 8) + 128; /*0x74d0c8*/
          v43 = (*(__int16 *)(this + 248) << 8) + 128; /*0x74d0ce*/
          v44 = v12; /*0x74d0d7*/
          v45 = GroundHeight + 400; /*0x74d0db*/
          v13 = BuildingTypeClass::FindOrCreateEx((AbstractClass *)&stru_830620.__pad_579C[66384]); /*0x74d0df*/
          FireAtSW = (_DWORD *)CreateFireAtSW( /*0x74d100*/
                                 *(_DWORD **)&HouseClass_Player.__pad_5568[23236],
                                 *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_3C[20] + 4 * v13),
                                 (IUnknown *)&v43);
          FireAtSW[50] = 12; /*0x74d108*/
          *(double *)aP0 = (double)Random::Range( /*0x74d136*/
                                     (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                                     0,
                                     (IUnknown *)0x7FFFFFFE)
                         * 4.656612877414201e-10
                         * 6.283185307179586;
          v15 = aP0[0]; /*0x74d13e*/
          v16 = Math::ArcTan2(aP0[0]); /*0x74d144*/
          FireAtSW[48] = Math::RoundToInt(v16 * 8.0); /*0x74d156*/
          v17 = Math::SinCos(v15); /*0x74d15c*/
          FireAtSW[49] = Math::RoundToInt(v17 * 8.0); /*0x74d16f*/
          *(_BYTE *)(this + 257) = 1; /*0x74d175*/
        }
      }
      else
      {
        *(_BYTE *)(this + 257) = 0; /*0x74d185*/
      }
      v18 = *(_DWORD *)(this + 236); /*0x74d18c*/
      v19 = *(_DWORD *)(this + 244); /*0x74d192*/
      if ( v18 == -1 ) /*0x74d19b*/
        goto LABEL_37; /*0x74d19b*/
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v18 < v19 ) /*0x74d1a7*/
      {
        v19 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v18; /*0x74d1a9*/
LABEL_37:
        if ( v19 ) /*0x74d1ad*/
          goto LABEL_73; /*0x74d1ad*/
      }
      if ( *(_BYTE *)(this + 257) ) /*0x74d1af*/
      {
LABEL_73:
        if ( *(_DWORD *)(this + 208) == *(_DWORD *)&stru_830620.__pad_579C[4 * *(_DWORD *)(this + 200) + 66152] ) /*0x74d1e9*/
        {
          aP0[0] = (IUnknown *)Random::Range( /*0x74d201*/
                                 (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                                 0,
                                 (IUnknown *)0x7FFFFFFE);
          if ( (double)(int)aP0[0] * 4.656612877414201e-10 < 0.1 ) /*0x74d21a*/
          {
            *(_DWORD *)(this + 208) = *(_DWORD *)&stru_830620.__pad_579C[4 * *(_DWORD *)(this + 200) + 66168] - 1; /*0x74d22a*/
            *(_DWORD *)(this + 232) = -1; /*0x74d230*/
          }
        }
      }
      else
      {
        if ( *(_DWORD *)(this + 204) != 3 ) /*0x74d1bf*/
          *(_DWORD *)(this + 204) = 0; /*0x74d1c1*/
        *(_DWORD *)(this + 232) = -1; /*0x74d1c7*/
      }
      goto LABEL_48; /*0x74d1d1*/
    case 3: /*0x74cecd*/
      if ( *(_DWORD *)(this + 208) == *(_DWORD *)&stru_830620.__pad_579C[66164] && !*(_BYTE *)(this + 256) ) /*0x74d24c*/
        VeinholeMonsterClass::PlaceGrowth((__int16 *)this); /*0x74d258*/
      goto LABEL_48; /*0x74d258*/
    default:
      goto LABEL_48;
  }
}


// ==== 0x0074D450  Game_Load_Load  this=VOID_PTR  sig=ida-proto ====
int __fastcall sub_74D450(int a1)
{
  int result; // eax
  char Buffer[32]; // [esp+0h] [ebp-20h] BYREF

  sprintf(Buffer, MEMORY[0x846118], (const char *)&off_7E1BC6 + 112 * a1); /*0x74d46f*/
  result = SearchMIXFile(Buffer, 0); /*0x74d47d*/
  MEMORY[0xB1D2EC] = result; /*0x74d482*/
  return result; /*0x74d487*/
}


// ==== 0x0074D490  TacticalClass::Render  this=TacticalClass  sig=csp ====
void __thiscall sub_74D490(int this)
{
  int v2; // eax
  int v3; // ebp
  unsigned int v4; // ebx
  int v5; // ecx
  int v6; // esi
  int v7; // edi
  __int16 *v8; // eax
  int v9; // [esp+4h] [ebp-14h] BYREF
  int v10; // [esp+8h] [ebp-10h]
  _DWORD v11[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( !*(_BYTE *)(this + 256) ) /*0x74d496*/
  {
    v2 = *(__int16 *)(this + 248); /*0x74d4a4*/
    v3 = dword_A8ED54[145766]; /*0x74d4bb*/
    v4 = *(_DWORD *)(this + 252); /*0x74d4c1*/
    v5 = *(__int16 *)(this + 250) << 8; /*0x74d4d1*/
    v11[0] = (v2 << 8) + 128; /*0x74d4da*/
    v11[1] = v5 + 128; /*0x74d4e2*/
    v11[2] = 0; /*0x74d4ec*/
    if ( (*((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], v11) + 80) & 0x400000) != 0 ) /*0x74d4ff*/
      v4 = 0; /*0x74d501*/
    Coord::To_Screen((_DWORD *)MEMORY[0x87F7E8][7887], v11, &v9); /*0x74d513*/
    v6 = 15 * *((char *)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)(this + 248)) + 283); /*0x74d538*/
    v10 += -58 - v6; /*0x74d547*/
    TacticalClass::AddToDrawQueue((_DWORD *)MEMORY[0x87F7E8][7887], this, v9, MEMORY[0x87F7E8][7663] + v10 + 58); /*0x74d558*/
    v7 = *(_DWORD *)(*(_DWORD *)(dword_A8ED54[121312] + 4 * *(_DWORD *)(MEMORY[0x87F7E8][528729] + 90196)) + 780); /*0x74d574*/
    v8 = (__int16 *)Coord::To_Cell(MEMORY[0x87F7E8], v11); /*0x74d58a*/
    DrawToSurfaceSHP( /*0x74d5bc*/
      (int *)MEMORY[0x87F7E8][7883],
      (_DWORD *)v7,
      v3,
      v4,
      &v9,
      &MEMORY[0x87F7E8][7662],
      11776,
      0,
      -17 - v6,
      0,
      v8[134],
      0,
      0,
      0,
      0,
      0);
  }
}


// ==== 0x0074D5D0  VeinholeMonsterClass::ProcessExpansion  this=VeinholeMonsterClass  sig=csp ====
CoordStruct *__thiscall VeinholeMonsterClass::ProcessExpansion(
        void **this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  CoordStruct *DestructionEffect; // eax
  AbstractClass *v10; // edx
  CoordStruct *v11; // edi
  int *p_Z; // eax
  void **v13; // esi
  void *v15; // [esp+Ch] [ebp-8h]

  DestructionEffect = (CoordStruct *)TechnoClass::CreateDestructionEffect((#374 *)this); /*0x74d5fc*/
  v11 = DestructionEffect; /*0x74d601*/
  if ( !DestructionEffect ) /*0x74d606*/
    return v11; /*0x74d606*/
  p_Z = &DestructionEffect[-1].Z; /*0x74d608*/
  if ( !p_Z ) /*0x74d60b*/
  {
    LOBYTE(v10) = 0; /*0x74d64d*/
    *(this + 51) = (void *)3; /*0x74d651*/
    AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, v10); /*0x74d65b*/
    return v11; /*0x74d660*/
  }
  if ( p_Z == (int *)1 ) /*0x74d60e*/
    return (CoordStruct *)5; /*0x74d641*/
  *(this + 51) = (void *)2; /*0x74d614*/
  v13 = this + 59; /*0x74d623*/
  *v13 = *(void **)&HouseClass_Player.__pad_5568[23248]; /*0x74d62e*/
  v13[1] = v15; /*0x74d633*/
  v13[2] = (void *)120; /*0x74d636*/
  return v11; /*0x74d632*/
}


// ==== 0x0074D670  ObjectClass::IsCellSuitableForPlacement  this=IUnknown  sig=csp ====
char __thiscall sub_74D670(__int16 *this)
{
  int v2; // edi
  char *v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // ebp
  int v8; // ebx
  int v9; // edi
  _BYTE *v10; // eax
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h] BYREF

  if ( MEMORY[0xA8E7AC] > 0 ) /*0x74d680*/
    return 1; /*0x74d754*/
  v2 = MEMORY[0xB1D2A0] - 1; /*0x74d68b*/
  if ( MEMORY[0xB1D2A0] - 1 < 0 ) /*0x74d690*/
  {
LABEL_7:
    v6 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], this) + 283); /*0x74d6d4*/
    if ( v6 >= 1 ) /*0x74d6e9*/
    {
      v8 = -1; /*0x74d6f5*/
LABEL_10:
      v9 = -1; /*0x74d6f8*/
      while ( 1 ) /*0x74d708*/
      {
        LOWORD(v11) = v9 + *this; /*0x74d708*/
        HIWORD(v11) = v8 + *(this + 1); /*0x74d70d*/
        v12 = v11; /*0x74d71a*/
        v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v12); /*0x74d724*/
        if ( v10[284] || *((_DWORD *)v10 + 59) || (char)v10[283] != v6 ) /*0x74d746*/
          break; /*0x74d746*/
        if ( ++v9 > 1 ) /*0x74d74c*/
        {
          if ( ++v8 <= 1 ) /*0x74d752*/
            goto LABEL_10; /*0x74d752*/
          return 1; /*0x74d752*/
        }
      }
    }
  }
  else
  {
    v3 = (char *)MEMORY[0xB1D294] + 4 * v2; /*0x74d69b*/
    while ( 1 ) /*0x74d6ab*/
    {
      v4 = *this - *(__int16 *)(*(_DWORD *)v3 + 248); /*0x74d6ab*/
      if ( (int)((HIDWORD(v4) ^ v4) - HIDWORD(v4)) < 3 ) /*0x74d6b3*/
      {
        v5 = *(this + 1) - *(__int16 *)(*(_DWORD *)v3 + 250); /*0x74d6c2*/
        if ( (int)((HIDWORD(v5) ^ v5) - HIDWORD(v5)) < 3 ) /*0x74d6ca*/
          break; /*0x74d6ca*/
      }
      --v2; /*0x74d6cc*/
      v3 -= 4; /*0x74d6cd*/
      if ( v2 < 0 ) /*0x74d6d2*/
        goto LABEL_7; /*0x74d6d2*/
    }
  }
  return 0; /*0x74d6eb*/
}


// ==== 0x0074D760  ObjectClass::CleanupVeinholeSystem  this=VOID_PTR  sig=csp ====
void CleanupVeinholeSystem()
{
  int i; // esi
  int v1; // ecx

  for ( i = MEMORY[0xB1D2A0] - 1; i >= 0; --i ) /*0x74d76e*/
  {
    v1 = *((_DWORD *)MEMORY[0xB1D294] + i); /*0x74d776*/
    if ( v1 ) /*0x74d77b*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 32))(v1, 1); /*0x74d781*/
  }
  MEMORY[0xB1D2A0] = 0; /*0x74d78c*/
  if ( MEMORY[0xB1D294] && MEMORY[0xB1D29D] ) /*0x74d79c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB1D294]); /*0x74d79f*/
    MEMORY[0xB1D294] = 0; /*0x74d7a7*/
  }
  MEMORY[0xB1D29D] = 0; /*0x74d7ad*/
  MEMORY[0xB1D298] = 0; /*0x74d7b3*/
}


// ==== 0x0074D7C0  ObjectClass::UpdateVeinholeMonster  this=VeinholeMonsterClass  sig=csp ====
void __thiscall VeinholeMonsterClass::Update(_DWORD *this)
{
  __int16 *v2; // ebp
  int VeinholeShrinkRate; // eax
  int v4; // et2
  int *v5; // ecx
  int v6; // edx
  int v7; // ebx
  bool v8; // zf
  int v9; // eax
  __int16 *v10; // edi
  _BYTE *v11; // eax
  _BYTE *v12; // ebx
  int v13; // edi
  char v14; // al
  int v15; // eax
  __int16 v16; // dx
  char *v17; // edi
  __int64 v18; // rax
  int v19; // ebx
  int v20; // eax
  signed int v21; // ecx
  int v22; // edx
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // edi
  unsigned int v26; // ebp
  unsigned int v27; // ecx
  unsigned int v28; // edx
  int v29; // ebx
  unsigned int v30; // eax
  int *v31; // ecx
  int v32; // eax
  int v33; // ebx
  __int16 *v34; // edi
  int v35; // eax
  int v36; // edx
  int v37; // edi
  int v38; // edx
  int v39; // eax
  int v40; // edi
  int v41; // ebp
  bool v42; // cc
  __int16 *v43; // [esp+10h] [ebp-28h]
  int v44; // [esp+14h] [ebp-24h] BYREF
  int v45; // [esp+18h] [ebp-20h]
  int v46; // [esp+1Ch] [ebp-1Ch]
  _BYTE *v47; // [esp+20h] [ebp-18h]
  int i; // [esp+24h] [ebp-14h]
  int v49; // [esp+28h] [ebp-10h]
  __int16 *v50; // [esp+2Ch] [ebp-Ch]
  float v51; // [esp+30h] [ebp-8h]
  int v52; // [esp+34h] [ebp-4h]

  v2 = 0; /*0x74d7c8*/
  if ( this->q0B0 ) /*0x74d7cb*/
  {
    VeinholeShrinkRate = MEMORY[0x8871E0]->AircraftFogReveal; /*0x74d7e2*/
    if ( this->q0AC <= VeinholeShrinkRate - 40 /*0x74d80a*/
      && this->q104 <= VeinholeShrinkRate - 100
      && *((_BYTE *)MEMORY[0xA8B230] + 13479) )
    {
      v49 = 0; /*0x74d81e*/
      v4 = (int)abs32(Random::State((_DWORD *)MEMORY[0xA8B230] + 134)) % 5; /*0x74d832*/
      v5 = (int *)this->q0B0; /*0x74d834*/
      v6 = *v5; /*0x74d83c*/
      v7 = v4 + 1; /*0x74d83e*/
      v8 = *v5 == 0; /*0x74d83f*/
      v52 = v4 + 1; /*0x74d841*/
      if ( v8 ) /*0x74d845*/
      {
        v43 = 0; /*0x74d847*/
      }
      else
      {
        v9 = v5[2]; /*0x74d84d*/
        v10 = *(__int16 **)(v9 + 4); /*0x74d855*/
        *(_DWORD *)(v9 + 4) = *(_DWORD *)(v9 + 4 * v6); /*0x74d858*/
        *(_DWORD *)(v5[2] + 4 * (*v5)--) = 0; /*0x74d860*/
        Heap::SiftDown(v5, 1); /*0x74d86c*/
        v43 = v10; /*0x74d871*/
        v2 = v10; /*0x74d875*/
      }
      if ( v7 > 0 ) /*0x74d879*/
      {
        while ( 1 ) /*0x74dae9*/
        {
          while ( 1 ) /*0x74d87f*/
          {
            if ( !v2 ) /*0x74d881*/
              return; /*0x74d881*/
            v11 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v2); /*0x74d88d*/
            v12 = v11; /*0x74d892*/
            v47 = v11; /*0x74d894*/
            if ( v11[286] < 0x30u ) /*0x74d89f*/
            {
              BuildingClass::VisualizePlacement(v11); /*0x74d8a3*/
              ++this->q104; /*0x74d8a8*/
            }
            if ( *((_DWORD *)v12 + 17) == 126 ) /*0x74d8b2*/
            {
              v13 = Cell::PosToIndex(v2); /*0x74d8bb*/
              if ( v13 >= 0 && v13 < Object::ComputeAllocationSize() ) /*0x74d8c8*/
                *(_BYTE *)(this->q0C4 + v13) = 1; /*0x74d8d0*/
            }
            if ( v12[286] >= 0x30u ) /*0x74d8db*/
            {
              v14 = 0; /*0x74d8e1*/
              for ( i = 0; i < 8; i += 2 ) /*0x74d8e3*/
              {
                v15 = v14 & 7; /*0x74d8eb*/
                v16 = v2[1] + HIWORD(MEMORY[0x89F688][v15]); /*0x74d900*/
                LOWORD(v45) = LOWORD(MEMORY[0x89F688][v15]) + *v2; /*0x74d90b*/
                HIWORD(v45) = v16; /*0x74d914*/
                v44 = v45; /*0x74d923*/
                if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v44, 1) ) /*0x74d927*/
                {
                  v17 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v44); /*0x74d94a*/
                  v18 = v17[283] - (char)v12[283]; /*0x74d955*/
                  if ( (int)((HIDWORD(v18) ^ v18) - HIDWORD(v18)) < 2 ) /*0x74d95d*/
                  {
                    v19 = Cell::PosToIndex((__int16 *)&v44); /*0x74d96c*/
                    v46 = v19; /*0x74d970*/
                    if ( v19 >= 0 && v19 < Object::ComputeAllocationSize() ) /*0x74d981*/
                    {
                      if ( BuildingClass::CheckAdjacentCells((int)v17) ) /*0x74d989*/
                      {
                        if ( !*((_BYTE *)MEMORY[0xB1D2F0] + v19) ) /*0x74d99c*/
                        {
                          v20 = this->q0AC; /*0x74d9ac*/
                          if ( v20 < MEMORY[0x8871E0]->AircraftFogReveal ) /*0x74d9b8*/
                          {
                            *(_DWORD *)(this->q0B4 + 8 * v20) = v44; /*0x74d9c8*/
                            v21 = (int)MEMORY[0xA8ED84] / 50 /*0x74da04*/
                                + abs32(Random::State((_DWORD *)MEMORY[0xA8B230] + 134) % 50)
                                + 1;
                            v22 = this->q0AC; /*0x74da08*/
                            v23 = this->q0B4; /*0x74da0e*/
                            v50 = (__int16 *)v21; /*0x74da14*/
                            *(float *)(v23 + 8 * v22 + 4) = (float)v21; /*0x74da1c*/
                            *((_BYTE *)MEMORY[0xB1D2F0] + v19) = 1; /*0x74da26*/
                            v24 = this->q0AC; /*0x74da2a*/
                            v25 = (_DWORD *)this->q0B0; /*0x74da36*/
                            v26 = this->q0B4 + 8 * v24; /*0x74da3c*/
                            this->q0AC = v24 + 1; /*0x74da40*/
                            v27 = *v25 + 1; /*0x74da4b*/
                            v51 = *(float *)(v26 + 4); /*0x74da4e*/
                            v28 = v27 >> 1; /*0x74da55*/
                            if ( v27 < v25[1] ) /*0x74da59*/
                            {
                              if ( v27 > 1 ) /*0x74da5e*/
                              {
                                do /*0x74da81*/
                                {
                                  v29 = v25[2]; /*0x74da60*/
                                  if ( *(float *)(*(_DWORD *)(v29 + 4 * v28) + 4) <= (double)v51 ) /*0x74da72*/
                                    break; /*0x74da72*/
                                  *(_DWORD *)(v29 + 4 * v27) = *(_DWORD *)(v29 + 4 * v28); /*0x74da77*/
                                  v27 = v28; /*0x74da7a*/
                                  v28 >>= 1; /*0x74da7c*/
                                }
                                while ( v27 > 1 ); /*0x74da81*/
                                v19 = v46; /*0x74da83*/
                              }
                              *(_DWORD *)(v25[2] + 4 * v27) = v26; /*0x74da8a*/
                              v30 = v25[3]; /*0x74da8f*/
                              ++*v25; /*0x74da95*/
                              if ( v26 > v30 ) /*0x74da97*/
                                v25[3] = v26; /*0x74da99*/
                              if ( v26 < v25[4] ) /*0x74da9f*/
                                v25[4] = v26; /*0x74daa1*/
                            }
                            v2 = v43; /*0x74daa4*/
                          }
                        }
                      }
                      *(_BYTE *)(this->q0C4 + v19) = 1; /*0x74daae*/
                    }
                    v12 = v47; /*0x74dab2*/
                  }
                }
                v14 = i + 2; /*0x74daba*/
              }
            }
            if ( ++v49 >= v52 ) /*0x74dad9*/
              return; /*0x74dad9*/
            v31 = (int *)this->q0B0; /*0x74dadf*/
            if ( *v31 ) /*0x74dae5*/
              break; /*0x74dae5*/
            v43 = 0; /*0x74daeb*/
            v2 = 0; /*0x74daef*/
          }
          v32 = v31[2]; /*0x74daf6*/
          v33 = 1; /*0x74daf9*/
          v34 = *(__int16 **)(v32 + 4); /*0x74db01*/
          *(_DWORD *)(v32 + 4) = *(_DWORD *)(v32 + 4 * *v31); /*0x74db04*/
          v35 = *v31; /*0x74db07*/
          v36 = v31[2]; /*0x74db09*/
          v50 = v34; /*0x74db0c*/
          *(_DWORD *)(v36 + 4 * v35) = 0; /*0x74db10*/
          v37 = *v31 - 1; /*0x74db1a*/
          *v31 = v37; /*0x74db1c*/
          if ( v37 < 2 /*0x74db3e*/
            || (v38 = 2, *(float *)(*(_DWORD *)(v31[2] + 4) + 4) <= (double)*(float *)(*(_DWORD *)(v31[2] + 8) + 4)) )
          {
            v38 = 1; /*0x74db40*/
          }
          if ( v37 < 3 /*0x74db60*/
            || *(float *)(*(_DWORD *)(v31[2] + 4 * v38) + 4) <= (double)*(float *)(*(_DWORD *)(v31[2] + 12) + 4) )
          {
            if ( v38 == 1 ) /*0x74db6c*/
              goto LABEL_55; /*0x74db6c*/
          }
          else
          {
            v38 = 3; /*0x74db62*/
          }
          do /*0x74dbd8*/
          {
            v39 = v31[2]; /*0x74db6e*/
            v40 = *(_DWORD *)(v39 + 4 * v33); /*0x74db74*/
            *(_DWORD *)(v39 + 4 * v33) = *(_DWORD *)(v39 + 4 * v38); /*0x74db77*/
            v33 = v38; /*0x74db7d*/
            *(_DWORD *)(v31[2] + 4 * v38) = v40; /*0x74db7f*/
            v41 = *v31; /*0x74db82*/
            v42 = 2 * v38 <= *v31; /*0x74db8b*/
            v44 = 2 * v38 + 1; /*0x74db8d*/
            if ( v42 /*0x74dbac*/
              && *(float *)(*(_DWORD *)(v31[2] + 4 * v38) + 4) > (double)*(float *)(*(_DWORD *)(v31[2] + 8 * v38) + 4) )
            {
              v38 *= 2; /*0x74dbae*/
            }
            if ( v44 <= v41 /*0x74dbd0*/
              && *(float *)(*(_DWORD *)(v31[2] + 4 * v38) + 4) > (double)*(float *)(*(_DWORD *)(v31[2] + 4 * v44) + 4) )
            {
              v38 = v44; /*0x74dbd2*/
            }
          }
          while ( v38 != v33 ); /*0x74dbd8*/
LABEL_55:
          v43 = v50; /*0x74dbda*/
          v2 = v50; /*0x74dbe2*/
        }
      }
    }
  }
}


// ==== 0x0074DC00  VeinholeClass::SelectGrowthPosition  this=VeinholeClass  sig=csp ====
__int16 *__thiscall VeinholeClass::SelectGrowthPosition(_DWORD *this)
{
  _DWORD *v1; // ebp
  __int16 *result; // eax
  int v3; // ebx
  int *v4; // ecx
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  __int16 *v8; // esi
  int v9; // esi
  int v10; // edx
  int v11; // eax
  int v12; // ebp
  int v13; // esi
  __int16 *v14; // eax
  IUnknown *v15; // eax
  int *v16; // ecx
  int v17; // eax
  int v18; // edi
  __int16 *v19; // esi
  int v20; // esi
  int v21; // edx
  int v22; // eax
  int v23; // ebp
  int v24; // esi
  VeinholeMonsterClass *v25; // [esp+10h] [ebp-10h]
  int v27; // [esp+18h] [ebp-8h]
  __int16 *v28; // [esp+1Ch] [ebp-4h]
  __int16 *v29; // [esp+1Ch] [ebp-4h]

  v1 = this; /*0x74dc05*/
  result = (__int16 *)*(this + 44); /*0x74dc0d*/
  if ( !result ) /*0x74dc15*/
    return result; /*0x74dc15*/
  v25 = 0; /*0x74dc20*/
  v3 = (int)abs32(Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536))) % 4; /*0x74dc46*/
  v4 = (int *)v1[44]; /*0x74dc47*/
  v5 = v3 + 1; /*0x74dc4d*/
  v27 = v5; /*0x74dc4e*/
  if ( !*v4 ) /*0x74dc52*/
  {
    result = 0; /*0x74dc58*/
    goto LABEL_20; /*0x74dc5a*/
  }
  v6 = v4[2]; /*0x74dc5f*/
  v7 = 1; /*0x74dc62*/
  v8 = *(__int16 **)(v6 + 4); /*0x74dc6a*/
  *(_DWORD *)(v6 + 4) = *(_DWORD *)(v6 + 4 * *v4); /*0x74dc6d*/
  v28 = v8; /*0x74dc75*/
  *(_DWORD *)(v4[2] + 4 * *v4) = 0; /*0x74dc79*/
  v9 = *v4 - 1; /*0x74dc83*/
  *v4 = v9; /*0x74dc85*/
  if ( v9 < 2 || (v10 = 2, *(float *)(*(_DWORD *)(v4[2] + 4) + 4) <= (double)*(float *)(*(_DWORD *)(v4[2] + 8) + 4)) ) /*0x74dca7*/
    v10 = 1; /*0x74dca9*/
  if ( v9 >= 3 && *(float *)(*(_DWORD *)(v4[2] + 4 * v10) + 4) > (double)*(float *)(*(_DWORD *)(v4[2] + 12) + 4) ) /*0x74dcc9*/
  {
    v10 = 3; /*0x74dccb*/
    goto LABEL_11; /*0x74dcd0*/
  }
  if ( v10 != 1 ) /*0x74dcd5*/
  {
    do /*0x74dd35*/
    {
LABEL_11:
      v11 = v4[2]; /*0x74dcd7*/
      v12 = 2 * v10 + 1; /*0x74dcda*/
      v13 = *(_DWORD *)(v11 + 4 * v7); /*0x74dce1*/
      *(_DWORD *)(v11 + 4 * v7) = *(_DWORD *)(v11 + 4 * v10); /*0x74dce4*/
      v7 = v10; /*0x74dcea*/
      *(_DWORD *)(v4[2] + 4 * v10) = v13; /*0x74dcec*/
      if ( 2 * v10 <= *v4 /*0x74dd11*/
        && *(float *)(*(_DWORD *)(v4[2] + 4 * v10) + 4) > (double)*(float *)(*(_DWORD *)(v4[2] + 8 * v10) + 4) )
      {
        v10 *= 2; /*0x74dd13*/
      }
      if ( v12 <= *v4 /*0x74dd2f*/
        && *(float *)(*(_DWORD *)(v4[2] + 4 * v10) + 4) > (double)*(float *)(*(_DWORD *)(v4[2] + 4 * v12) + 4) )
      {
        v10 = v12; /*0x74dd31*/
      }
    }
    while ( v10 != v7 ); /*0x74dd35*/
    v1 = this; /*0x74dd37*/
  }
  result = v28; /*0x74dd3f*/
LABEL_20:
  if ( v5 > 0 ) /*0x74dd45*/
  {
    while ( 1 ) /*0x74dd8f*/
    {
      while ( 1 ) /*0x74dd4b*/
      {
        if ( !result ) /*0x74dd4d*/
          return result; /*0x74dd4d*/
        v14 = (__int16 *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], result); /*0x74dd59*/
        v15 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v14 + 18); /*0x74dd67*/
        RandomMap::RemoveMatching(v1, v15); /*0x74dd6f*/
        result = (__int16 *)&v25->__pad_0[1]; /*0x74dd78*/
        v25 = (VeinholeMonsterClass *)((char *)v25 + 1); /*0x74dd7b*/
        if ( (int)v25 >= v5 ) /*0x74dd7f*/
          return result; /*0x74dd7f*/
        v16 = (int *)v1[44]; /*0x74dd85*/
        if ( *v16 ) /*0x74dd8b*/
          break; /*0x74dd8b*/
        result = 0; /*0x74dd91*/
      }
      v17 = v16[2]; /*0x74dd95*/
      v18 = 1; /*0x74dd98*/
      v19 = *(__int16 **)(v17 + 4); /*0x74dda0*/
      *(_DWORD *)(v17 + 4) = *(_DWORD *)(v17 + 4 * *v16); /*0x74dda3*/
      v29 = v19; /*0x74ddab*/
      *(_DWORD *)(v16[2] + 4 * *v16) = 0; /*0x74ddaf*/
      v20 = *v16 - 1; /*0x74ddb9*/
      *v16 = v20; /*0x74ddbb*/
      if ( v20 < 2 /*0x74dddd*/
        || (v21 = 2, *(float *)(*(_DWORD *)(v16[2] + 4) + 4) <= (double)*(float *)(*(_DWORD *)(v16[2] + 8) + 4)) )
      {
        v21 = 1; /*0x74dddf*/
      }
      if ( v20 < 3 || *(float *)(*(_DWORD *)(v16[2] + 4 * v21) + 4) <= (double)*(float *)(*(_DWORD *)(v16[2] + 12) + 4) ) /*0x74ddff*/
      {
        if ( v21 == 1 ) /*0x74de0b*/
          goto LABEL_40; /*0x74de0b*/
      }
      else
      {
        v21 = 3; /*0x74de01*/
      }
      do /*0x74de6b*/
      {
        v22 = v16[2]; /*0x74de0d*/
        v23 = 2 * v21 + 1; /*0x74de10*/
        v24 = *(_DWORD *)(v22 + 4 * v18); /*0x74de17*/
        *(_DWORD *)(v22 + 4 * v18) = *(_DWORD *)(v22 + 4 * v21); /*0x74de1a*/
        v18 = v21; /*0x74de20*/
        *(_DWORD *)(v16[2] + 4 * v21) = v24; /*0x74de22*/
        if ( 2 * v21 <= *v16 /*0x74de47*/
          && *(float *)(*(_DWORD *)(v16[2] + 4 * v21) + 4) > (double)*(float *)(*(_DWORD *)(v16[2] + 8 * v21) + 4) )
        {
          v21 *= 2; /*0x74de49*/
        }
        if ( v23 <= *v16 /*0x74de65*/
          && *(float *)(*(_DWORD *)(v16[2] + 4 * v21) + 4) > (double)*(float *)(*(_DWORD *)(v16[2] + 4 * v23) + 4) )
        {
          v21 = v23; /*0x74de67*/
        }
      }
      while ( v21 != v18 ); /*0x74de6b*/
      v1 = this; /*0x74de6d*/
      v5 = v27; /*0x74de71*/
LABEL_40:
      result = v29; /*0x74de75*/
    }
  }
  return result; /*0x74de7e*/
}


// ==== 0x0074DE90  InitializeVeinholeSystem  this=-  sig=ida-proto ====
int __fastcall InitializeVeinholeSystem(char a1)
{
  size_t v2; // edi
  int i; // esi
  void *v4; // eax
  int v5; // ebp
  void *v6; // eax
  _DWORD *v7; // esi
  int VeinholeShrinkRate; // eax
  void *v9; // eax
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // eax
  int j; // ecx
  int k; // eax
  int m; // esi
  int v16; // ecx
  int result; // eax
  int n; // esi
  size_t v19; // [esp+10h] [ebp-8h]

  v2 = Object::ComputeAllocationSize(); /*0x74de9e*/
  v19 = v2; /*0x74dea2*/
  if ( !a1 ) /*0x74dea6*/
  {
LABEL_17:
    v4 = MEMORY[0xB1D2F0]; /*0x74dffd*/
    goto LABEL_18; /*0x74dffd*/
  }
  for ( i = MEMORY[0xB1D2A0] - 1; i >= 0; --i ) /*0x74deb8*/
    System_Init_74E8A0(*((_DWORD *)MEMORY[0xB1D294] + i)); /*0x74dec3*/
  v4 = MEMORY[0xB1D2F0]; /*0x74decb*/
  if ( MEMORY[0xB1D2F0] ) /*0x74ded2*/
  {
    __3_YAXPAX_Z(MEMORY[0xB1D2F0]); /*0x74ded5*/
    v4 = 0; /*0x74dedd*/
    MEMORY[0xB1D2F0] = 0; /*0x74dedf*/
  }
  v5 = MEMORY[0xB1D2A0] - 1; /*0x74deea*/
  if ( MEMORY[0xB1D2A0] - 1 >= 0 ) /*0x74deef*/
  {
    do /*0x74dff7*/
    {
      v6 = __2_YAPAXI_Z(8 * MEMORY[0x8871E0]->AircraftFogReveal); /*0x74df08*/
      if ( !v6 ) /*0x74df12*/
        v6 = 0; /*0x74df1b*/
      *(_DWORD *)(*((_DWORD *)MEMORY[0xB1D294] + v5) + 180) = v6; /*0x74df28*/
      v7 = __2_YAPAXI_Z(0x14u); /*0x74df33*/
      if ( v7 ) /*0x74df3a*/
      {
        VeinholeShrinkRate = MEMORY[0x8871E0]->AircraftFogReveal; /*0x74df42*/
        v7[3] = 0; /*0x74df48*/
        v7[1] = VeinholeShrinkRate; /*0x74df4b*/
        v7[4] = -1; /*0x74df4e*/
        *v7 = 0; /*0x74df5c*/
        v9 = __2_YAPAXI_Z(4 * VeinholeShrinkRate + 4); /*0x74df5f*/
        v10 = v7[1]; /*0x74df64*/
        v7[2] = v9; /*0x74df67*/
        v11 = 0; /*0x74df6d*/
        if ( v10 >= 0 ) /*0x74df71*/
        {
          do /*0x74df80*/
          {
            ++v11; /*0x74df76*/
            *(_DWORD *)(v7[2] + 4 * v11 - 4) = 0; /*0x74df77*/
          }
          while ( v11 <= v7[1] ); /*0x74df80*/
        }
      }
      else
      {
        v7 = 0; /*0x74df84*/
      }
      *(_DWORD *)(*((_DWORD *)MEMORY[0xB1D294] + v5) + 176) = v7; /*0x74df90*/
      *(_DWORD *)(*((_DWORD *)MEMORY[0xB1D294] + v5) + 196) = __2_YAPAXI_Z(v2); /*0x74dfa9*/
      memset(*(void **)(*((_DWORD *)MEMORY[0xB1D294] + v5) + 196), 0, v2); /*0x74dfc5*/
      v12 = *(_DWORD **)(*((_DWORD *)MEMORY[0xB1D294] + v5) + 176); /*0x74dfd6*/
      for ( j = 0; j <= *v12; *(_DWORD *)(v12[2] + 4 * j - 4) = 0 ) /*0x74dfe0*/
        ++j; /*0x74dfe5*/
      v2 = v19; /*0x74dff0*/
      --v5; /*0x74dff4*/
      *v12 = 0; /*0x74dff5*/
    }
    while ( v5 >= 0 ); /*0x74dff7*/
    goto LABEL_17; /*0x74dff7*/
  }
LABEL_18:
  if ( !v4 ) /*0x74e004*/
    MEMORY[0xB1D2F0] = __2_YAPAXI_Z(v2); /*0x74e00f*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x74e019*/
  for ( k = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); k; k = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x74e02f*/
    *(_DWORD *)(k + 320) &= ~0x8000u; /*0x74e03e*/
  memset(MEMORY[0xB1D2F0], 0, v2); /*0x74e05c*/
  for ( m = MEMORY[0xB1D2A0] - 1; m >= 0; --m ) /*0x74e06f*/
  {
    v16 = *((_DWORD *)MEMORY[0xB1D294] + m); /*0x74e077*/
    if ( *(_BYTE *)(v16 + 256) ) /*0x74e07a*/
      RulesClass::Reset(); /*0x74e084*/
    else
      ProcessVeinholeMonster(v16); /*0x74e08b*/
  }
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x74e098*/
  result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x74e0a2*/
  for ( n = result; result; n = result ) /*0x74e0ab*/
  {
    if ( *(_DWORD *)(n + 68) == 126 && !*((_BYTE *)MEMORY[0xB1D2F0] + Cell::PosToIndex((__int16 *)(n + 36))) ) /*0x74e0c5*/
      *(_DWORD *)(n + 68) = -1; /*0x74e0cb*/
    *(_DWORD *)(n + 320) &= ~0x8000u; /*0x74e0da*/
    result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x74e0e5*/
  }
  return result; /*0x74e0f0*/
}


// ==== 0x0074E1C0  ObjectClass::ProcessVeinholeMonster  this=ObjectClass  sig=csp ====
void __thiscall VeinholeMonster_Process(int this)
{
  _DWORD *v2; // eax
  int i; // ecx
  int j; // eax
  __int16 v5; // ax
  char *v6; // eax
  char *v7; // edi
  _DWORD *v8; // ebp
  int v9; // ebx
  int v10; // eax
  int v11; // edx
  char v12; // al
  int v13; // eax
  int v14; // eax
  float *v15; // edi
  unsigned int v16; // ebx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // ebx
  int v21; // ebp
  unsigned int v22; // eax
  int k; // edi
  int v24; // edi
  char *NeighbourContent; // ebp
  _DWORD *v26; // edi
  int v27; // ebx
  char v28; // al
  int v29; // eax
  int v30; // eax
  int v31; // eax
  _DWORD *v32; // edi
  unsigned int v33; // ebx
  unsigned int v34; // ecx
  unsigned int v35; // edx
  int v36; // ebp
  int v37; // ebx
  unsigned int v38; // eax
  int v39; // eax
  int v40; // ecx
  int v41; // [esp+10h] [ebp-30h]
  signed int m; // [esp+10h] [ebp-30h]
  int v43; // [esp+14h] [ebp-2Ch]
  unsigned int v44; // [esp+14h] [ebp-2Ch]
  float v45; // [esp+18h] [ebp-28h]
  char *v46; // [esp+18h] [ebp-28h]
  int v47; // [esp+1Ch] [ebp-24h]
  int v48; // [esp+1Ch] [ebp-24h]
  float v49; // [esp+20h] [ebp-20h] BYREF
  float v50; // [esp+24h] [ebp-1Ch]
  void **v51; // [esp+28h] [ebp-18h] BYREF
  void *Block; // [esp+2Ch] [ebp-14h]
  int v53; // [esp+30h] [ebp-10h]
  char v54; // [esp+35h] [ebp-Bh]
  int v55; // [esp+38h] [ebp-8h]
  int v56; // [esp+3Ch] [ebp-4h]

  VectorClass::CellConstructor(&v51, 0, 0); /*0x74e1d1*/
  v2 = *(_DWORD **)(this + 176); /*0x74e1d6*/
  v51 = &vt_DynamicVectorClass_Cell; /*0x74e1dc*/
  v55 = 0; /*0x74e1e4*/
  v56 = 5000; /*0x74e1e8*/
  *(_DWORD *)(this + 172) = 0; /*0x74e1f0*/
  *(_DWORD *)(this + 260) = 0; /*0x74e1f6*/
  for ( i = 0; i <= *v2; *(_DWORD *)(v2[2] + 4 * i - 4) = 0 ) /*0x74e202*/
    ++i; /*0x74e207*/
  *v2 = 0; /*0x74e212*/
  for ( j = Object::ComputeAllocationSize() - 1; j >= 0; *(_BYTE *)(j + *(_DWORD *)(this + 196) + 1) = 0 ) /*0x74e21a*/
    --j; /*0x74e222*/
  v41 = -2; /*0x74e22a*/
  do /*0x74e417*/
  {
    v5 = -2; /*0x74e232*/
    v43 = -2; /*0x74e237*/
    do /*0x74e405*/
    {
      LOWORD(v45) = v5 + *(_WORD *)(this + 248); /*0x74e251*/
      HIWORD(v45) = v41 + *(_WORD *)(this + 250); /*0x74e25a*/
      v49 = v45; /*0x74e263*/
      v6 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v49); /*0x74e26d*/
      v7 = v6; /*0x74e272*/
      if ( *((_DWORD *)v6 + 17) == 126 ) /*0x74e278*/
      {
        v8 = v6 + 36; /*0x74e27e*/
        v9 = Cell::PosToIndex((__int16 *)v6 + 18); /*0x74e28f*/
        HIWORD(v47) = v41 + *(_WORD *)(this + 250); /*0x74e2a2*/
        LOWORD(v47) = v43 + *(_WORD *)(this + 248); /*0x74e2ab*/
        if ( v55 < v53 /*0x74e2d9*/
          || (v54 || !v53)
          && v56 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v51[2])(&v51, v56 + v53, 0) )
        {
          v10 = v55++; /*0x74e2e8*/
          *((_DWORD *)Block + v10) = v47; /*0x74e2f3*/
        }
        if ( v9 >= 0 && v9 < Object::ComputeAllocationSize() ) /*0x74e305*/
        {
          *((_BYTE *)MEMORY[0xB1D2F0] + v9) = 1; /*0x74e310*/
          *(_BYTE *)(*(_DWORD *)(this + 196) + v9) = 1; /*0x74e31a*/
          v11 = *((_DWORD *)v7 + 80); /*0x74e31e*/
          v12 = v7[286]; /*0x74e324*/
          BYTE1(v11) |= 0x80u; /*0x74e32a*/
          *((_DWORD *)v7 + 80) = v11; /*0x74e32f*/
          if ( (unsigned __int8)v12 < 0x30u || (unsigned __int8)v12 > 0x33u ) /*0x74e339*/
          {
            v13 = *(_DWORD *)(this + 172); /*0x74e34c*/
            if ( v13 < MEMORY[0x8871E0]->AircraftFogReveal ) /*0x74e358*/
            {
              *(_DWORD *)(*(_DWORD *)(this + 180) + 8 * v13) = *v8; /*0x74e367*/
              *(_DWORD *)(*(_DWORD *)(this + 180) + 8 * *(_DWORD *)(this + 172) + 4) = 0; /*0x74e376*/
              v14 = *(_DWORD *)(this + 172); /*0x74e37e*/
              v15 = *(float **)(this + 176); /*0x74e38a*/
              v16 = *(_DWORD *)(this + 180) + 8 * v14; /*0x74e390*/
              *(_DWORD *)(this + 172) = v14 + 1; /*0x74e394*/
              v17 = *(_DWORD *)v15 + 1; /*0x74e39f*/
              v50 = *(float *)(v16 + 4); /*0x74e3a2*/
              v18 = *((_DWORD *)v15 + 1); /*0x74e3a6*/
              v49 = *(float *)&v16; /*0x74e3a9*/
              v19 = v17 >> 1; /*0x74e3ad*/
              if ( v17 < v18 ) /*0x74e3b1*/
              {
                if ( v17 > 1 ) /*0x74e3b6*/
                {
                  do /*0x74e3d6*/
                  {
                    v20 = *((_DWORD *)v15 + 2); /*0x74e3b8*/
                    v21 = *(_DWORD *)(v20 + 4 * v19); /*0x74e3bb*/
                    if ( *(float *)(v21 + 4) <= (double)v50 ) /*0x74e3ca*/
                      break; /*0x74e3ca*/
                    *(_DWORD *)(v20 + 4 * v17) = v21; /*0x74e3cc*/
                    v17 = v19; /*0x74e3cf*/
                    v19 >>= 1; /*0x74e3d1*/
                  }
                  while ( v17 > 1 ); /*0x74e3d6*/
                  *(float *)&v16 = v49; /*0x74e3d8*/
                }
                *(float *)(*((_DWORD *)v15 + 2) + 4 * v17) = *(float *)&v16; /*0x74e3df*/
                v22 = *((_DWORD *)v15 + 3); /*0x74e3e4*/
                ++*(_DWORD *)v15; /*0x74e3ea*/
                if ( v16 > v22 ) /*0x74e3ec*/
                  v15[3] = *(float *)&v16; /*0x74e3ee*/
                if ( v16 < *((_DWORD *)v15 + 4) ) /*0x74e3f4*/
                  v15[4] = *(float *)&v16; /*0x74e3f6*/
              }
            }
          }
          else
          {
            ++*(_DWORD *)(this + 260); /*0x74e33b*/
          }
        }
      }
      v5 = ++v43; /*0x74e3fd*/
    }
    while ( v43 <= 2 ); /*0x74e405*/
    ++v41; /*0x74e413*/
  }
  while ( v41 <= 2 ); /*0x74e417*/
  for ( k = v55; v55 > 0; k = v55 ) /*0x74e423*/
  {
    v24 = k - 1; /*0x74e42d*/
    v50 = COERCE_FLOAT(CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)Block + 2 * v24)); /*0x74e43c*/
    if ( v24 < v55 && v24 < --v55 ) /*0x74e44f*/
    {
      do /*0x74e463*/
      {
        ++v24; /*0x74e455*/
        *((_DWORD *)Block + v24 - 1) = *((_DWORD *)Block + v24); /*0x74e459*/
      }
      while ( v24 < v55 ); /*0x74e463*/
    }
    for ( m = 0; m < 8; ++m ) /*0x74e465*/
    {
      NeighbourContent = (char *)Cell::GetNeighbourContent((_DWORD *)LODWORD(v50), m); /*0x74e47b*/
      v46 = NeighbourContent; /*0x74e47d*/
      v26 = NeighbourContent + 36; /*0x74e481*/
      v27 = Cell::PosToIndex((__int16 *)NeighbourContent + 18); /*0x74e48b*/
      v48 = v27; /*0x74e493*/
      if ( *((_DWORD *)NeighbourContent + 17) == 126 && (BYTE1(*((_DWORD *)NeighbourContent + 80)) & 0x80u) == 0 ) /*0x74e4a6*/
      {
        v28 = NeighbourContent[286]; /*0x74e4ac*/
        if ( ((unsigned __int8)v28 < 0x30u || (unsigned __int8)v28 >= 0x35u) /*0x74e4bc*/
          && BuildingClass::CheckAdjacentCells((int)NeighbourContent) )
        {
          v30 = *(_DWORD *)(this + 172); /*0x74e51e*/
          if ( v30 < MEMORY[0x8871E0]->AircraftFogReveal ) /*0x74e52a*/
          {
            *(_DWORD *)(*(_DWORD *)(this + 180) + 8 * v30) = *v26; /*0x74e538*/
            *(_DWORD *)(*(_DWORD *)(this + 180) + 8 * *(_DWORD *)(this + 172) + 4) = 0; /*0x74e547*/
            v31 = *(_DWORD *)(this + 172); /*0x74e54f*/
            v32 = *(_DWORD **)(this + 176); /*0x74e55b*/
            v33 = *(_DWORD *)(this + 180) + 8 * v31; /*0x74e561*/
            *(_DWORD *)(this + 172) = v31 + 1; /*0x74e565*/
            v34 = *v32 + 1; /*0x74e570*/
            v49 = *(float *)(v33 + 4); /*0x74e573*/
            v44 = v33; /*0x74e57a*/
            v35 = v34 >> 1; /*0x74e57e*/
            if ( v34 < v32[1] ) /*0x74e582*/
            {
              if ( v34 > 1 ) /*0x74e587*/
              {
                do /*0x74e5a9*/
                {
                  v36 = v32[2]; /*0x74e589*/
                  v37 = *(_DWORD *)(v36 + 4 * v35); /*0x74e58c*/
                  if ( *(float *)(v37 + 4) <= (double)v49 ) /*0x74e59c*/
                    break; /*0x74e59c*/
                  *(_DWORD *)(v36 + 4 * v34) = v37; /*0x74e59e*/
                  v34 = v35; /*0x74e5a2*/
                  v35 >>= 1; /*0x74e5a4*/
                }
                while ( v34 > 1 ); /*0x74e5a9*/
                NeighbourContent = v46; /*0x74e5ab*/
                v33 = v44; /*0x74e5af*/
              }
              *(_DWORD *)(v32[2] + 4 * v34) = v33; /*0x74e5b6*/
              v38 = v32[3]; /*0x74e5bb*/
              ++*v32; /*0x74e5c1*/
              if ( v33 > v38 ) /*0x74e5c3*/
                v32[3] = v33; /*0x74e5c5*/
              if ( v33 < v32[4] ) /*0x74e5cb*/
                v32[4] = v33; /*0x74e5cd*/
            }
            if ( (unsigned __int8)NeighbourContent[286] >= 0x30u /*0x74e606*/
              && (v55 < v53
               || (v54 || !v53)
               && v56 > 0
               && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v51[2])(&v51, v56 + v53, 0)) )
            {
              v39 = v55++; /*0x74e615*/
              *((_DWORD *)Block + v39) = *((_DWORD *)NeighbourContent + 9); /*0x74e61f*/
            }
            v27 = v48; /*0x74e622*/
          }
        }
        else
        {
          if ( v55 < v53 /*0x74e4f2*/
            || (v54 || !v53)
            && v56 > 0
            && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v51[2])(&v51, v56 + v53, 0) )
          {
            v29 = v55++; /*0x74e501*/
            *((_DWORD *)Block + v29) = *v26; /*0x74e50a*/
          }
          ++*(_DWORD *)(this + 260); /*0x74e50d*/
        }
        v40 = *((_DWORD *)NeighbourContent + 80); /*0x74e626*/
        BYTE1(v40) |= 0x80u; /*0x74e62c*/
        *((_DWORD *)NeighbourContent + 80) = v40; /*0x74e631*/
        if ( v27 >= 0 && v27 < Object::ComputeAllocationSize() ) /*0x74e640*/
        {
          *((_BYTE *)MEMORY[0xB1D2F0] + v27) = 1; /*0x74e647*/
          *(_BYTE *)(*(_DWORD *)(this + 196) + v27) = 1; /*0x74e651*/
        }
        ++*(_DWORD *)(this + 260); /*0x74e655*/
      }
    }
  }
  v51 = &vt_VectorClass_Cell; /*0x74e682*/
  if ( Block ) /*0x74e68b*/
  {
    if ( v54 ) /*0x74e693*/
      __3_YAXPAX_Z(Block); /*0x74e696*/
  }
}


// ==== 0x0074E6B0  RulesClass::Reset  this=RulesClass  sig=csp ====
int __thiscall sub_74E6B0(int this)
{
  _DWORD *v2; // eax
  int i; // ecx
  int result; // eax
  int j; // ebx
  __int16 *v6; // edi
  int v7; // ebp
  int v8; // eax
  double v9; // st7
  int v10; // eax
  _DWORD *v11; // edi
  unsigned int v12; // ebp
  unsigned int v13; // ecx
  unsigned int v14; // edx
  int v15; // ebx
  unsigned int v16; // eax
  float v17; // [esp+1Ch] [ebp-Ch]
  int v18; // [esp+20h] [ebp-8h]
  int v19; // [esp+24h] [ebp-4h]

  v2 = *(_DWORD **)(this + 176); /*0x74e6c1*/
  *(_DWORD *)(this + 172) = 0; /*0x74e6c7*/
  for ( i = 0; i <= *v2; *(_DWORD *)(v2[2] + 4 * i - 4) = 0 ) /*0x74e6d1*/
    ++i; /*0x74e6d6*/
  *v2 = 0; /*0x74e6e1*/
  *(_DWORD *)(this + 260) = 0; /*0x74e6e8*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x74e6ee*/
  result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x74e6f8*/
  for ( j = result; result; j = result ) /*0x74e701*/
  {
    if ( *(_DWORD *)(j + 68) == 126 && *(_BYTE *)(j + 286) >= 0x30u ) /*0x74e718*/
    {
      v6 = (__int16 *)(j + 36); /*0x74e71e*/
      v7 = Cell::PosToIndex((__int16 *)(j + 36)); /*0x74e728*/
      if ( v7 >= 0 && v7 < Object::ComputeAllocationSize() ) /*0x74e739*/
      {
        if ( *(_BYTE *)(*(_DWORD *)(this + 196) + v7) ) /*0x74e745*/
        {
          v8 = *(_DWORD *)(this + 172); /*0x74e755*/
          if ( v8 < MEMORY[0x8871E0]->AircraftFogReveal ) /*0x74e761*/
          {
            *(_DWORD *)(*(_DWORD *)(this + 180) + 8 * v8) = *(_DWORD *)v6; /*0x74e772*/
            v19 = *(__int16 *)(j + 38) - *(__int16 *)(this + 250); /*0x74e78e*/
            v18 = *v6 - *(__int16 *)(this + 248); /*0x74e792*/
            v9 = Math::Sqrt((double)v18 * (double)v18 + (double)v19 * (double)v19); /*0x74e7af*/
            *(float *)(*(_DWORD *)(this + 180) + 8 * *(_DWORD *)(this + 172) + 4) = (float)(int)(1000 /*0x74e7d7*/
                                                                                               - Math::RoundToInt(v9));
            v10 = *(_DWORD *)(this + 172); /*0x74e7db*/
            v11 = *(_DWORD **)(this + 176); /*0x74e7e7*/
            v12 = *(_DWORD *)(this + 180) + 8 * v10; /*0x74e7ed*/
            *(_DWORD *)(this + 172) = v10 + 1; /*0x74e7f1*/
            v13 = *v11 + 1; /*0x74e7fc*/
            v17 = *(float *)(v12 + 4); /*0x74e7ff*/
            v14 = v13 >> 1; /*0x74e806*/
            if ( v13 < v11[1] ) /*0x74e80a*/
            {
              for ( ; v13 > 1; v14 >>= 1 ) /*0x74e80f*/
              {
                v15 = v11[2]; /*0x74e811*/
                if ( *(float *)(*(_DWORD *)(v15 + 4 * v14) + 4) <= (double)v17 ) /*0x74e823*/
                  break; /*0x74e823*/
                *(_DWORD *)(v15 + 4 * v13) = *(_DWORD *)(v15 + 4 * v14); /*0x74e828*/
                v13 = v14; /*0x74e82b*/
              }
              *(_DWORD *)(v11[2] + 4 * v13) = v12; /*0x74e837*/
              v16 = v11[3]; /*0x74e83c*/
              ++*v11; /*0x74e842*/
              if ( v12 > v16 ) /*0x74e844*/
                v11[3] = v12; /*0x74e846*/
              if ( v12 < v11[4] ) /*0x74e84c*/
                v11[4] = v12; /*0x74e84e*/
            }
            ++*(_DWORD *)(this + 260); /*0x74e851*/
          }
        }
      }
    }
    result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x74e85c*/
  }
  return result; /*0x74e86b*/
}


// ==== 0x0074E880  Map_Destroy  this=-  sig=ida-proto ====
void sub_74E880()
{
  if ( MEMORY[0xB1D2F0] ) /*0x74e887*/
  {
    __3_YAXPAX_Z(MEMORY[0xB1D2F0]); /*0x74e88a*/
    MEMORY[0xB1D2F0] = 0; /*0x74e892*/
  }
}


// ==== 0x0074E8A0  ObjectClass::System_Init_74E8A0  this=ObjectClass  sig=csp ====
void __thiscall sub_74E8A0(int this)
{
  _DWORD *v2; // eax
  int i; // ecx
  void **v4; // edi

  v2 = *(_DWORD **)(this + 176); /*0x74e8a6*/
  if ( v2 ) /*0x74e8ae*/
  {
    for ( i = 0; i <= *v2; *(_DWORD *)(v2[2] + 4 * i - 4) = 0 ) /*0x74e8b6*/
      ++i; /*0x74e8bb*/
    *v2 = 0; /*0x74e8c7*/
    v4 = *(void ***)(this + 176); /*0x74e8c9*/
    if ( v4 ) /*0x74e8d1*/
    {
      __3_YAXPAX_Z(v4[2]); /*0x74e8d7*/
      __3_YAXPAX_Z(v4); /*0x74e8dd*/
    }
    *(_DWORD *)(this + 176) = 0; /*0x74e8e5*/
  }
  if ( *(_DWORD *)(this + 180) ) /*0x74e8ec*/
  {
    __3_YAXPAX_Z(*(void **)(this + 180)); /*0x74e8f7*/
    *(_DWORD *)(this + 180) = 0; /*0x74e8ff*/
  }
  if ( *(_DWORD *)(this + 196) ) /*0x74e905*/
  {
    __3_YAXPAX_Z(*(void **)(this + 196)); /*0x74e910*/
    *(_DWORD *)(this + 196) = 0; /*0x74e918*/
  }
  *(_DWORD *)(this + 172) = 0; /*0x74e91e*/
}


// ==== 0x0074E930  VeinholeMonsterClass::PlaceGrowth  this=VeinholeMonsterClass  sig=csp ====
void __thiscall sub_74E930(__int16 *this)
{
  __int16 *v1; // ebp
  _DWORD *v2; // esi
  signed int i; // edi
  _DWORD *NeighbourContent; // eax
  int v5; // ebx
  int v6; // esi
  _BYTE *v7; // edi
  int v8; // esi
  int v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h] BYREF
  __int16 *v11; // [esp+18h] [ebp-4h]

  v1 = this + 124; /*0x74e936*/
  v11 = this; /*0x74e93d*/
  v2 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], this + 124); /*0x74e94c*/
  v2[17] = 126; /*0x74e954*/
  *((_BYTE *)v2 + 286) = 0; /*0x74e95b*/
  House::AnnounceUpgrade((int)v2, -1); /*0x74e961*/
  for ( i = 0; i < 8; ++i ) /*0x74e966*/
  {
    NeighbourContent = Cell::GetNeighbourContent(v2, i); /*0x74e96b*/
    if ( i % 2 ) /*0x74e97e*/
      NeighbourContent[17] = -1; /*0x74e981*/
    else
      NeighbourContent[17] = 126; /*0x74e98a*/
    *((_BYTE *)NeighbourContent + 286) = 0; /*0x74e992*/
  }
  v5 = -2; /*0x74e99d*/
  do /*0x74e9f2*/
  {
    v6 = -2; /*0x74e9a2*/
    do /*0x74e9ec*/
    {
      LOWORD(v9) = v6 + *v1; /*0x74e9b5*/
      HIWORD(v9) = v5 + v1[1]; /*0x74e9ba*/
      v10 = v9; /*0x74e9c7*/
      v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v10); /*0x74e9d6*/
      BuildingClass::VisualizePlacement(v7); /*0x74e9da*/
      House::AnnounceUpgrade((int)v7, -1); /*0x74e9e3*/
      ++v6; /*0x74e9e8*/
    }
    while ( v6 <= 2 ); /*0x74e9ec*/
    ++v5; /*0x74e9ee*/
  }
  while ( v5 <= 2 ); /*0x74e9f2*/
  v8 = (int)v11; /*0x74e9f4*/
  RulesClass::Reset((int)v11); /*0x74e9fa*/
  Cell::SetRadar((int *)&MEMORY[0x87F7E8], v1); /*0x74ea05*/
  Radar::Update(&MEMORY[0x87F7E8], v1); /*0x74ea10*/
  *(_BYTE *)(v8 + 256) = 1; /*0x74ea15*/
}


// ==== 0x0074EA70  ObjectClass::LoadVeinholeMonsters  this=int  sig=csp ====
char __thiscall LoadVeinholeMonsters(int *this)
{
  int i; // edi
  int v3; // ecx
  size_t v4; // edi
  int v5; // eax
  _DWORD *v7; // edi
  int v8; // ebp
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  int v12; // ebp
  int v13; // edx
  int v14; // ebp
  #374 *v15; // ebx
  signed int k; // eax
  _DWORD *v17; // edx
  char v18; // [esp+97h] [ebp-1Dh] BYREF
  int v19; // [esp+98h] [ebp-1Ch]
  int j; // [esp+9Ch] [ebp-18h]
  int v21; // [esp+A0h] [ebp-14h] BYREF
  int v22; // [esp+A4h] [ebp-10h] BYREF
  size_t v23; // [esp+A8h] [ebp-Ch]
  int v24; // [esp+ACh] [ebp-8h] BYREF
  int v25; // [esp+B0h] [ebp-4h]

  for ( i = MEMORY[0xB1D2A0] - 1; i >= 0; --i ) /*0x74ea85*/
  {
    v3 = *((_DWORD *)MEMORY[0xB1D294] + i); /*0x74ea8d*/
    if ( v3 ) /*0x74ea92*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 32))(v3, 1); /*0x74ea98*/
  }
  MEMORY[0xB1D2A0] = 0; /*0x74eaa3*/
  if ( MEMORY[0xB1D294] && MEMORY[0xB1D29D] ) /*0x74eab5*/
  {
    __3_YAXPAX_Z(MEMORY[0xB1D294]); /*0x74eab8*/
    MEMORY[0xB1D294] = 0; /*0x74eac0*/
  }
  MEMORY[0xB1D29D] = 0; /*0x74eac6*/
  MEMORY[0xB1D298] = 0; /*0x74eacd*/
  v4 = Object::ComputeAllocationSize(); /*0x74eadc*/
  v5 = *this; /*0x74eade*/
  v23 = v4; /*0x74eae5*/
  if ( (*(int (__stdcall **)(int *, int *, int, _DWORD))(v5 + 12))(this, &v21, 4, 0) < 0 ) /*0x74eaee*/
    return 0; /*0x74eaf9*/
  MEMORY[0xB1D2F0] = __2_YAPAXI_Z(v4); /*0x74eb03*/
  if ( (*(int (__stdcall **)(int *, void *, size_t, _DWORD))(*this + 12))(this, MEMORY[0xB1D2F0], v4, 0) < 0 ) /*0x74eb13*/
    return 0; /*0x74eb1e*/
  for ( j = 0; j < v21; ++j ) /*0x74eb29*/
  {
    v7 = __2_YAPAXI_Z(0x108u); /*0x74eb40*/
    if ( (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 12))(this, &v22, 4, 0) < 0 ) /*0x74eb4e*/
      return 0; /*0x74eb4e*/
    SwizzleManagerClass::Here_I_Am(&MEMORY[0xB0C110], v22, v7); /*0x74eb5b*/
    if ( (*(int (__stdcall **)(int *, _DWORD *, int, _DWORD))(*this + 12))(this, v7, 264, 0) < 0 ) /*0x74eb6f*/
      return 0; /*0x74eb6f*/
    if ( v7 ) /*0x74eb73*/
      VeinholeMonsterClass::Construct(v7, (int)&v18); /*0x74eb7c*/
    v8 = v7[49]; /*0x74eb85*/
    v9 = *this; /*0x74eb91*/
    v10 = v7[44]; /*0x74eb93*/
    v19 = v7[45]; /*0x74eb9e*/
    if ( (*(int (__stdcall **)(int *, int, size_t, _DWORD))(v9 + 12))(this, v8, v23, 0) < 0 ) /*0x74eba7*/
      return 0; /*0x74eba7*/
    v7[49] = v8; /*0x74ebad*/
    v11 = v19; /*0x74ebb8*/
    if ( (*(int (__stdcall **)(int *, int, int, _DWORD))(*this + 12))( /*0x74ebd1*/
           this,
           v19,
           8 * MEMORY[0x8871E0]->AircraftFogReveal,
           0) < 0 )
      return 0; /*0x74ebd1*/
    v7[45] = v11; /*0x74ebd9*/
    if ( (*(int (__stdcall **)(int *, int, int, _DWORD))(*this + 12))(this, v10, 4, 0) < 0 /*0x74ec00*/
      || (*(int (__stdcall **)(int *, int, int, _DWORD))(*this + 12))(this, v10 + 4, 4, 0) < 0 )
    {
      return 0; /*0x74ec00*/
    }
    v12 = 0; /*0x74ec09*/
    if ( *(int *)(v10 + 4) > 0 ) /*0x74ec0d*/
    {
      while ( (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 12))(this, &v24, 4, 0) >= 0 ) /*0x74ec20*/
      {
        ++v12; /*0x74ec2e*/
        *(_DWORD *)(*(_DWORD *)(v10 + 8) + 4 * v12 - 4) = v19 + 8 * v24; /*0x74ec35*/
        if ( v12 >= *(_DWORD *)(v10 + 4) ) /*0x74ec3e*/
          goto LABEL_24; /*0x74ec3e*/
      }
      return 0; /*0x74ec20*/
    }
LABEL_24:
    v13 = v7[1]; /*0x74ec40*/
    v7[44] = v10; /*0x74ec47*/
    v25 = (*(int (__stdcall **)(_DWORD *))(v13 + 16))(v7 + 1); /*0x74ec50*/
    if ( (int)(MEMORY[0xB0E844] + 1) <= MEMORY[0xB0E848] ) /*0x74ec63*/
      goto LABEL_32; /*0x74ec63*/
    if ( MEMORY[0xB0E848] ) /*0x74ec6b*/
    {
      v14 = MEMORY[0xB0E848]; /*0x74ec74*/
      if ( MEMORY[0xB0E848] < 0 ) /*0x74ec78*/
        continue; /*0x74ec78*/
    }
    else
    {
      v14 = 10; /*0x74ec6d*/
    }
    v19 = v14 + MEMORY[0xB0E848]; /*0x74ec80*/
    v15 = (#374 *)__2_YAPAXI_Z(8 * (v14 + MEMORY[0xB0E848])); /*0x74ec91*/
    if ( v15 ) /*0x74ec98*/
    {
      --v19; /*0x74eca9*/
      for ( k = 0; k < (int)MEMORY[0xB0E844]; *((_DWORD *)v15 + 2 * k - 1) = v17[1] ) /*0x74ecb1*/
      {
        v17 = (_DWORD *)((char *)MEMORY[0xB0E840] + 8 * k++); /*0x74ecb9*/
        *((_DWORD *)v15 + 2 * k - 2) = *v17; /*0x74ecbf*/
      }
      __3_YAXPAX_Z(MEMORY[0xB0E840]); /*0x74ecda*/
      MEMORY[0xB0E840] = v15; /*0x74ece9*/
      MEMORY[0xB0E848] += v14; /*0x74ecef*/
      MEMORY[0xB0E850] = 0; /*0x74ecf4*/
LABEL_32:
      *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844]) = v25; /*0x74ecfe*/
      *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844] + 1) = v7; /*0x74ed1c*/
      MEMORY[0xB0E84C] = 0; /*0x74ed26*/
      ++MEMORY[0xB0E844]; /*0x74ed2d*/
    }
  }
  return 1; /*0x74eaf0*/
}


// ==== 0x0074ED60  SaveGame::LoadVeinholeData  this=int  sig=csp ====
char __thiscall sub_74ED60(int *this)
{
  int v2; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // ebp
  int i; // ebx
  int v12; // ecx
  int v13; // [esp+90h] [ebp-14h] BYREF
  int v14; // [esp+94h] [ebp-10h]
  int v15; // [esp+98h] [ebp-Ch]
  int v16; // [esp+9Ch] [ebp-8h] BYREF
  int v17; // [esp+A0h] [ebp-4h] BYREF

  v2 = *this; /*0x74ed74*/
  v13 = MEMORY[0xB1D2A0]; /*0x74ed7a*/
  if ( (*(int (__stdcall **)(int *, int *, int, _DWORD))(v2 + 16))(this, &v13, 4, 0) < 0 ) /*0x74ed83*/
    return 0; /*0x74ed8e*/
  v4 = Object::ComputeAllocationSize(); /*0x74ed9a*/
  v5 = *this; /*0x74ed9c*/
  v15 = v4; /*0x74eda3*/
  if ( (*(int (__stdcall **)(int *, void *, int, _DWORD))(v5 + 16))(this, MEMORY[0xB1D2F0], v4, 0) < 0 ) /*0x74edac*/
    return 0; /*0x74edac*/
  v6 = 0; /*0x74edbc*/
  v14 = 0; /*0x74edc0*/
  if ( v13 > 0 ) /*0x74edc4*/
  {
    while ( 1 ) /*0x74edd6*/
    {
      v7 = *this; /*0x74edd6*/
      v16 = *((_DWORD *)MEMORY[0xB1D294] + v6); /*0x74ede5*/
      if ( (*(int (__stdcall **)(int *, int *, int, _DWORD))(v7 + 16))(this, &v16, 4, 0) < 0 /*0x74ee50*/
        || (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*this + 16))(
             this,
             *((_DWORD *)MEMORY[0xB1D294] + v6),
             264,
             0) < 0
        || (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*this + 16))(
             this,
             *(_DWORD *)(*((_DWORD *)MEMORY[0xB1D294] + v6) + 196),
             v4,
             0) < 0
        || (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*this + 16))(
             this,
             *(_DWORD *)(*((_DWORD *)MEMORY[0xB1D294] + v6) + 180),
             8 * MEMORY[0x8871E0]->AircraftFogReveal,
             0) < 0 )
      {
        break; /*0x74ee50*/
      }
      v8 = *((_DWORD *)MEMORY[0xB1D294] + v6); /*0x74ee62*/
      v9 = *(_DWORD *)(v8 + 176); /*0x74ee65*/
      v10 = *(_DWORD *)(v8 + 180); /*0x74ee6b*/
      if ( (*(int (__stdcall **)(int *, int, int, _DWORD))(*this + 16))(this, v9, 4, 0) >= 0 /*0x74ee8a*/
        && (*(int (__stdcall **)(int *, int, int, _DWORD))(*this + 16))(this, v9 + 4, 4, 0) >= 0 )
      {
        for ( i = 0; i < *(_DWORD *)(v9 + 4); ++i ) /*0x74ee93*/
        {
          v12 = *this; /*0x74ee98*/
          v17 = (*(_DWORD *)(*(_DWORD *)(v9 + 8) + 4 * i) - v10) >> 3; /*0x74eeac*/
          if ( (*(int (__stdcall **)(int *, int *, int, _DWORD))(v12 + 16))(this, &v17, 4, 0) < 0 ) /*0x74eeb5*/
            break; /*0x74eeb5*/
        }
        v6 = v14; /*0x74eebf*/
      }
      v14 = ++v6; /*0x74eeca*/
      if ( v6 >= v13 ) /*0x74eece*/
        return 1; /*0x74eece*/
      v4 = v15; /*0x74edcc*/
    }
    return 0; /*0x74edb7*/
  }
  return 1; /*0x74ed85*/
}


// ==== 0x0074EEE0  VeinholeMonsterClass::Update  this=VeinholeMonsterClass  sig=csp ====
int __stdcall VeinholeMonsterClass::Update(TechnoTypeClass *aP0, int *a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x74eef4*/
}


// ==== 0x0074EF00  VeinholeMonsterClass::CheckStatus  this=VeinholeMonsterClass  sig=csp ====
int VeinholeMonsterClass::_vt34()
{
  return MEMORY[0x8871E0]->?; /*0x74ef0b*/
}


// ==== 0x0074EF10  RandomMap::RemoveMatching  this=VeinholeMonsterClass  sig=csp ====
char __thiscall RandomMap::RemoveMatching(void *this, IUnknown *aP1)
{
  IUnknown *v2; // ebp
  int VeinholeMonsterClass_field_0x28; // eax
  VeinholeMonsterClass *v4; // ebx
  signed int i; // esi
  _BYTE *NeighbourContent; // eax
  unsigned __int8 v7; // al
  bool v8; // cl
  signed int v9; // eax
  unsigned int v10; // eax
  char *v11; // eax
  int *v12; // edi
  int v13; // esi
  int *v14; // esi
  int v15; // ecx
  int v16; // eax
  _DWORD **v17; // edi
  int v18; // ebx
  int v19; // edx
  int v20; // edi
  int v21; // ebp
  int v22; // ecx
  int v23; // edi
  int v24; // ecx
  int v25; // edi
  int v26; // ebp
  int v27; // edi
  int v28; // eax
  _DWORD *v29; // esi
  unsigned int v30; // ebp
  unsigned int v31; // ecx
  unsigned int v32; // edx
  int v33; // edi
  int v34; // ebx
  unsigned int v35; // eax
  int j; // [esp+10h] [ebp-1Ch]
  float v39; // [esp+18h] [ebp-14h]
  int v40; // [esp+1Ch] [ebp-10h]
  int v41; // [esp+20h] [ebp-Ch]
  int v42; // [esp+24h] [ebp-8h]
  float aP1a; // [esp+30h] [ebp+4h]

  v2 = aP1; /*0x74ef15*/
  VeinholeMonsterClass_field_0x28 = aP1->field_44; /*0x74ef20*/
  v4 = (VeinholeMonsterClass *)this; /*0x74ef23*/
  if ( VeinholeMonsterClass_field_0x28 == 126 && aP1->__pad_11C[2] >= 0x30u ) /*0x74ef38*/
  {
    for ( i = 0; i < 8; i += 2 ) /*0x74ef3e*/
    {
      NeighbourContent = Cell::GetNeighbourContent(aP1, i); /*0x74ef43*/
      v8 = 0; /*0x74ef5b*/
      if ( *((_DWORD *)NeighbourContent + 17) == 126 ) /*0x74ef4b*/
      {
        v7 = NeighbourContent[286]; /*0x74ef4d*/
        if ( v7 < 0x30u || v7 > 0x33u ) /*0x74ef59*/
          v8 = 1; /*0x74ef4b*/
      }
      v9 = i; /*0x74ef64*/
      *((_BYTE *)&v41 + v9 / 2) = v8; /*0x74ef71*/
    }
    CellClass::ProcessBridgeRepair(aP1); /*0x74ef79*/
    --v4[5].VeinholeMonsterClass_field_0x28; /*0x74ef85*/
    v10 = 0; /*0x74ef8b*/
    for ( j = 0; j < 8; j += 2 ) /*0x74ef8d*/
    {
      v11 = (char *)Cell::GetNeighbourContent(v2, v10); /*0x74ef94*/
      if ( *((_DWORD *)v11 + 17) == -1 ) /*0x74ef9d*/
      {
        v12 = (int *)(v11 + 36); /*0x74efa3*/
        v13 = Cell::PosToIndex((__int16 *)v11 + 18); /*0x74efad*/
        if ( v13 >= 0 && v13 < Object::ComputeAllocationSize() ) /*0x74efba*/
        {
          *(_BYTE *)(v4[4].VeinholeMonsterClass_field_0x14 + v13) = 0; /*0x74efc2*/
          *(_BYTE *)(*(_DWORD *)&stru_B1D188.__pad_164[4] + v13) = 0; /*0x74efcc*/
        }
        if ( *((_BYTE *)&v41 + j / 2) == 1 && !LOBYTE(v4[5].VeinholeMonsterClass_field_0x24) ) /*0x74efe4*/
        {
          v14 = *(int **)v4[4].__pad_0; /*0x74eff2*/
          v15 = 1; /*0x74effa*/
          v42 = *v12; /*0x74efff*/
          v16 = *v14; /*0x74f003*/
          if ( *v14 < 1 ) /*0x74f007*/
          {
LABEL_39:
            Debug::Log(); /*0x74f138*/
          }
          else
          {
            v40 = v14[2]; /*0x74f010*/
            v17 = (_DWORD **)(v40 + 4); /*0x74f014*/
            while ( **v17 != v42 ) /*0x74f021*/
            {
              ++v15; /*0x74f02e*/
              ++v17; /*0x74f02f*/
              if ( v15 > v16 ) /*0x74f034*/
              {
                v2 = aP1; /*0x74f134*/
                goto LABEL_39; /*0x74f134*/
              }
            }
            if ( v15 == v16 ) /*0x74f03e*/
            {
              *v14 = v16 - 1; /*0x74f041*/
            }
            else
            {
              v18 = *(_DWORD *)(v40 + 4 * v16); /*0x74f04c*/
              v39 = *(float *)(v18 + 4); /*0x74f052*/
              v19 = v15 >> 1; /*0x74f058*/
              *v14 = v16 - 1; /*0x74f05e*/
              if ( v15 == 1 || *(float *)(*(_DWORD *)(v40 + 4 * v19) + 4) < (double)v39 ) /*0x74f071*/
              {
                *(_DWORD *)(v40 + 4 * v15) = v18; /*0x74f0d9*/
                Heap::SiftDown(v14, v15); /*0x74f0df*/
                if ( *v14 >= 1 ) /*0x74f0e9*/
                {
                  v24 = v14[2] + 4; /*0x74f0f1*/
                  v25 = *v14; /*0x74f0f4*/
                  do /*0x74f11b*/
                  {
                    v24 += 4; /*0x74f117*/
                    --v25; /*0x74f11a*/
                  }
                  while ( v25 ); /*0x74f11b*/
                }
              }
              else
              {
                for ( ; (unsigned int)v15 > 1; v19 >>= 1 ) /*0x74f076*/
                {
                  v20 = v14[2]; /*0x74f078*/
                  v21 = *(_DWORD *)(v20 + 4 * v19); /*0x74f07b*/
                  if ( *(float *)(v21 + 4) <= (double)v39 ) /*0x74f08a*/
                    break; /*0x74f08a*/
                  *(_DWORD *)(v20 + 4 * v15) = v21; /*0x74f08c*/
                  v15 = v19; /*0x74f08f*/
                }
                *(_DWORD *)(v14[2] + 4 * v15) = v18; /*0x74f09b*/
                if ( *v14 >= 1 ) /*0x74f0a3*/
                {
                  v22 = v14[2] + 4; /*0x74f0ab*/
                  v23 = *v14; /*0x74f0ae*/
                  do /*0x74f0d5*/
                  {
                    v22 += 4; /*0x74f0d1*/
                    --v23; /*0x74f0d4*/
                  }
                  while ( v23 ); /*0x74f0d5*/
                }
              }
              v4 = (VeinholeMonsterClass *)this; /*0x74f11d*/
            }
            Debug::Log(); /*0x74f126*/
            v2 = aP1; /*0x74f12b*/
          }
        }
      }
      v10 = j + 2; /*0x74f149*/
    }
    v26 = v2->field_44; /*0x74f15d*/
    VeinholeMonsterClass_field_0x28 = Cell::PosToIndex((__int16 *)&aP1->field_24); /*0x74f165*/
    v27 = VeinholeMonsterClass_field_0x28; /*0x74f16a*/
    v41 = VeinholeMonsterClass_field_0x28; /*0x74f16e*/
    if ( VeinholeMonsterClass_field_0x28 >= 0 ) /*0x74f172*/
    {
      VeinholeMonsterClass_field_0x28 = Object::ComputeAllocationSize(); /*0x74f178*/
      if ( v27 < VeinholeMonsterClass_field_0x28 ) /*0x74f17f*/
      {
        if ( v26 == -1 ) /*0x74f188*/
        {
          *(_BYTE *)(v4[4].VeinholeMonsterClass_field_0x14 + v27) = 0; /*0x74f190*/
          *(_BYTE *)(*(_DWORD *)&stru_B1D188.__pad_164[4] + v27) = 0; /*0x74f19a*/
        }
        else
        {
          LOBYTE(VeinholeMonsterClass_field_0x28) = v4[5].VeinholeMonsterClass_field_0x24; /*0x74f1a8*/
          if ( !(_BYTE)VeinholeMonsterClass_field_0x28 ) /*0x74f1b0*/
          {
            VeinholeMonsterClass_field_0x28 = v4[3].VeinholeMonsterClass_field_0x28; /*0x74f1bc*/
            if ( VeinholeMonsterClass_field_0x28 < *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 220) ) /*0x74f1c8*/
            {
              *(_DWORD *)(v4[4].VeinholeMonsterClass_field_0x04 + 8 * VeinholeMonsterClass_field_0x28) = aP1->field_24; /*0x74f1d6*/
              *(float *)(v4[4].VeinholeMonsterClass_field_0x04 + 8 * v4[3].VeinholeMonsterClass_field_0x28 + 4) = (float)(int)(*(_DWORD *)&HouseClass_Player.__pad_5568[23248] / 50 + abs32(Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)) % 50) + 1); /*0x74f22a*/
              v28 = v4[3].VeinholeMonsterClass_field_0x28; /*0x74f22e*/
              v29 = *(_DWORD **)v4[4].__pad_0; /*0x74f23a*/
              v30 = v4[4].VeinholeMonsterClass_field_0x04 + 8 * v28; /*0x74f240*/
              v4[3].VeinholeMonsterClass_field_0x28 = v28 + 1; /*0x74f244*/
              v31 = *v29 + 1; /*0x74f24f*/
              aP1a = *(float *)(v30 + 4); /*0x74f252*/
              v32 = v31 >> 1; /*0x74f259*/
              if ( v31 < v29[1] ) /*0x74f25d*/
              {
                if ( v31 > 1 ) /*0x74f262*/
                {
                  do /*0x74f282*/
                  {
                    v33 = v29[2]; /*0x74f264*/
                    v34 = *(_DWORD *)(v33 + 4 * v32); /*0x74f267*/
                    if ( *(float *)(v34 + 4) <= (double)aP1a ) /*0x74f276*/
                      break; /*0x74f276*/
                    *(_DWORD *)(v33 + 4 * v31) = v34; /*0x74f278*/
                    v31 = v32; /*0x74f27b*/
                    v32 >>= 1; /*0x74f27d*/
                  }
                  while ( v31 > 1 ); /*0x74f282*/
                  v4 = (VeinholeMonsterClass *)this; /*0x74f284*/
                  v27 = v41; /*0x74f288*/
                }
                *(_DWORD *)(v29[2] + 4 * v31) = v30; /*0x74f28f*/
                v35 = v29[3]; /*0x74f294*/
                ++*v29; /*0x74f29a*/
                if ( v30 > v35 ) /*0x74f29c*/
                  v29[3] = v30; /*0x74f29e*/
                if ( v30 < v29[4] ) /*0x74f2a4*/
                  v29[4] = v30; /*0x74f2a6*/
              }
              VeinholeMonsterClass_field_0x28 = v4[4].VeinholeMonsterClass_field_0x14; /*0x74f2a9*/
              *(_BYTE *)(VeinholeMonsterClass_field_0x28 + v27) = 1; /*0x74f2af*/
              *(_BYTE *)(*(_DWORD *)&stru_B1D188.__pad_164[4] + v27) = 1; /*0x74f2b9*/
            }
          }
        }
      }
    }
  }
  return VeinholeMonsterClass_field_0x28; /*0x74f19e*/
}


// ==== 0x0074F2D0  VeinholeMonsterClass::ddtor  this=VeinholeMonsterClass  sig=csp ====
int __stdcall VeinholeMonsterClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x74f2d6*/
    return -2147467261; /*0x74f2d8*/
  *a2 = 1368576106; /*0x74f2e6*/
  a2[1] = 299025970; /*0x74f2ee*/
  a2[2] = 1610615737; /*0x74f2f7*/
  a2[3] = -318126072; /*0x74f300*/
  return 0; /*0x74f2dd*/
}


// ==== 0x0074F310  VeinholeMonsterClass::StubReturn63  this=VeinholeMonsterClass  sig=csp ====
int VeinholeMonsterClass::_vt11()
{
  return 63; /*0x74f315*/
}


// ==== 0x0074F320  VeinholeMonsterClass::StubReturn264  this=VeinholeMonsterClass  sig=csp ====
int VeinholeMonsterClass::_vt12()
{
  return 264; /*0x74f325*/
}


// ==== 0x0074F330  AbstractClass::checkBuildingPlacement  this=VeinholeMonsterClass  sig=csp ====
int AbstractClass::checkBuildingPlacement()
{
  return -1; /*0x74f333*/
}


// ==== 0x0074F340  VeinholeMonsterClass::SpreadTiberium  this=VeinholeMonsterClass  sig=csp ====
VeinholeMonsterClass *__thiscall VeinholeMonsterClass::SpreadTiberium(void **Block, char a2)
{
  DestroyVeinholeMonster(Block); /*0x74f343*/
  if ( (a2 & 1) != 0 ) /*0x74f34d*/
    __3_YAXPAX_Z(Block); /*0x74f350*/
  return (VeinholeMonsterClass *)Block; /*0x74f35a*/
}


// ==== 0x0074F360  IRTTITypeInfo::ClearBuffer  this=IRTTITypeInfo  sig=csp ====
void __thiscall IRTTITypeInfo::sub_74F360(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x74f366*/
  *(_DWORD *)(this + 16) = 0; /*0x74f369*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x74f370*/
  {
    __3_YAXPAX_Z(v2); /*0x74f376*/
    *(_DWORD *)(this + 4) = 0; /*0x74f37e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x74f381*/
  *(_DWORD *)(this + 8) = 0; /*0x74f384*/
}


// ==== 0x0074F390  IRTTITypeInfo::PointerToIndex  this=IRTTITypeInfo  sig=csp ====
unsigned int __thiscall IRTTITypeInfo::sub_74F390(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x74f390*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x74f3a5*/
  else
    return 0; /*0x74f397*/
}


// ==== 0x0074F3B0  _VectorClass_PAVVeinholeMonsterClass::Seek  this=VectorClass  sig=csp ====
int __thiscall _::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x74f3ba*/
}


// ==== 0x0074F3C0  _VectorClass_PAVVeinholeMonsterClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall _::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x74f3c2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x74f3cd*/
  {
    v3 = 0; /*0x74f3cf*/
    if ( v2 <= 0 ) /*0x74f3d3*/
      return 1; /*0x74f3f3*/
    v4 = (_DWORD *)*(this + 1); /*0x74f3d5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x74f3db*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x74f3e4*/
    {
      ++v3; /*0x74f3e6*/
      ++v4; /*0x74f3e7*/
      if ( v3 >= v2 ) /*0x74f3ec*/
        return 1; /*0x74f3ec*/
    }
  }
  return 0; /*0x74f3ee*/
}


// ==== 0x0074F400  _VectorClass_PAVVeinholeMonsterClass::Release  this=VectorClass  sig=csp ====
char __thiscall _::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x74f40c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x74f416*/
    if ( a3 ) /*0x74f41c*/
      v4 = a3; /*0x74f432*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x74f42e*/
    *((_BYTE *)this + 12) = 1; /*0x74f436*/
    if ( v4 ) /*0x74f43a*/
    {
      if ( this->Items ) /*0x74f445*/
      {
        v6 = this->Capacity; /*0x74f44c*/
        if ( a2 < v6 ) /*0x74f451*/
          v6 = a2; /*0x74f453*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x74f459*/
          ++i; /*0x74f45e*/
        if ( *((_BYTE *)this + 13) ) /*0x74f46b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x74f476*/
          this->Items = 0; /*0x74f47e*/
        }
      }
      this->Items = v4; /*0x74f487*/
      this->Capacity = a2; /*0x74f48f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x74f492*/
      return 1; /*0x74f498*/
    }
    else
    {
      return 0; /*0x74f43f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x74f4a2*/
    return 1; /*0x74f4a8*/
  }
}


// ==== 0x0074F4B0  _VectorClass_PAVVeinholeMonsterClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall _::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x74f4bd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x74f4c3*/
    *(_DWORD *)(this + 4) = 0; /*0x74f4cb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x74f4ce*/
  *(_DWORD *)(this + 8) = 0; /*0x74f4d1*/
}


// ==== 0x0074F4E0  _VectorClass_PAVVeinholeMonsterClass::Read  this=VectorClass  sig=csp ====
int __thiscall _::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x74f4e0*/
    return 0; /*0x74f4e8*/
  v3 = *(_DWORD *)(this + 8); /*0x74f4ee*/
  result = 0; /*0x74f4f1*/
  if ( v3 <= 0 ) /*0x74f4f5*/
    return -1; /*0x74f50c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x74f4fb*/
  {
    if ( ++result >= v3 ) /*0x74f50a*/
      return -1; /*0x74f50a*/
  }
  return result; /*0x74f4ea*/
}


// ==== 0x0074F520  _VectorClass_PAVVeinholeMonsterClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall _::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x74f520*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x74f535*/
  else
    return 0; /*0x74f527*/
}


// ==== 0x0074F540  IRTTITypeInfo::SetCapacity  this=IRTTITypeInfo  sig=csp ====
char __thiscall IRTTITypeInfo::sub_74F540(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x74f54c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x74f552*/
    if ( a3 ) /*0x74f558*/
      v4 = a3; /*0x74f56e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x74f56a*/
    *((_BYTE *)this + 12) = 1; /*0x74f572*/
    if ( !v4 ) /*0x74f576*/
      return 0; /*0x74f5ea*/
    if ( this->q004 ) /*0x74f578*/
    {
      v5 = this->q008; /*0x74f57f*/
      if ( a2 < v5 ) /*0x74f584*/
        v5 = a2; /*0x74f586*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->q004 + 4 * i - 4) ) /*0x74f58c*/
        ++i; /*0x74f591*/
      if ( *((_BYTE *)this + 13) ) /*0x74f59e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x74f5a9*/
        this->q004 = 0; /*0x74f5b1*/
      }
    }
    this->q004 = v4; /*0x74f5ba*/
    this->q008 = a2; /*0x74f5c2*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x74f5c5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->q00C)(this); /*0x74f5ce*/
  }
  v7 = this->q008; /*0x74f5d1*/
  if ( v7 < this->q010 ) /*0x74f5d9*/
    this->q010 = v7; /*0x74f5db*/
  return 1; /*0x74f5de*/
}


// ==== 0x0074F5F0  IRTTITypeInfo::FindItem  this=IRTTITypeInfo  sig=csp ====
int __thiscall IRTTITypeInfo::sub_74F5F0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q004; /*0x74f5f0*/
  result = 0; /*0x74f5f3*/
  if ( v2 <= 0 ) /*0x74f5f8*/
    return -1; /*0x74f60f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x74f5fe*/
  {
    if ( ++result >= v2 ) /*0x74f60d*/
      return -1; /*0x74f60d*/
  }
  return result; /*0x74f612*/
}


// ==== 0x0074F620  ObjectClass::DestroyVeinholeMonster_Destroy  this=VOID_PTR  sig=csp ====
void __thiscall sub_74F620(Concurrency::details::_NonReentrantLock *this)
{
  int i; // eax

  for ( i = 0; i <= *(_DWORD *)this; *(_DWORD *)(*((_DWORD *)this + 2) + 4 * i - 4) = 0 ) /*0x74f626*/
    ++i; /*0x74f62b*/
  __Release__NonReentrantLock_details_Concurrency__QAEXXZ_0(this); /*0x74f639*/
}


// ==== 0x0074F63A  ObjectClass::?_Release__NonReentrantLock_details_Concurrency__QAEXXZ_0  this=ObjectClass  sig=csp ====
void __thiscall __Release__NonReentrantLock_details_Concurrency__QAEXXZ_0(
        Concurrency::details::_NonReentrantLock *this)
{
  *(_DWORD *)this = 0; /*0x74f63a*/
}


// ==== 0x0074F650  _VectorClass_PAVVeinholeMonsterClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall _::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x74f653*/
  *Block = &vt_VectorClass_VeinholeMonsterClass; /*0x74f656*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x74f660*/
  {
    __3_YAXPAX_Z(v3); /*0x74f668*/
    *(Block + 1) = 0; /*0x74f670*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x74f67b*/
  *(Block + 2) = 0; /*0x74f681*/
  if ( (a2 & 1) != 0 ) /*0x74f688*/
    __3_YAXPAX_Z(Block); /*0x74f68b*/
  return (VectorClass *)Block; /*0x74f695*/
}


// ==== 0x0074F6A0    this=VOID_PTR  sig=? ====
_DWORD *__thiscall IRTTITypeInfo::loc_74F6A0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x74f6a3*/
  *Block = &vt_VectorClass_VeinholeMonsterClass; /*0x74f6a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x74f6b0*/
  {
    __3_YAXPAX_Z(v3); /*0x74f6b8*/
    *(Block + 1) = 0; /*0x74f6c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x74f6cb*/
  *(Block + 2) = 0; /*0x74f6d1*/
  if ( (a2 & 1) != 0 ) /*0x74f6d8*/
    __3_YAXPAX_Z(Block); /*0x74f6db*/
  return Block; /*0x74f6e5*/
}


// ==== 0x0074F6F0  ObjectClass::DestroyVeinholeMonster_Destroy_74F6F0  this=int  sig=csp ====
char __thiscall DestroyVeinholeMonster_Destroy_74F6F0(_DWORD *this, DynamicVector *aP1)
{
  int v2; // edx
  DynamicVector *v3; // eax
  int v4; // edx

  v2 = *(this + 4); /*0x74f6f0*/
  v3 = aP1; /*0x74f6f3*/
  if ( (int)aP1 >= v2 ) /*0x74f6f9*/
    return 0; /*0x74f71c*/
  v4 = v2 - 1; /*0x74f6fb*/
  *(this + 4) = v4; /*0x74f6fe*/
  if ( (int)aP1 < v4 ) /*0x74f701*/
  {
    do /*0x74f714*/
    {
      v3 = (DynamicVector *)((char *)v3 + 1); /*0x74f707*/
      *(_DWORD *)(*(this + 1) + 4 * (_DWORD)v3 - 4) = *(_DWORD *)(*(this + 1) + 4 * (_DWORD)v3); /*0x74f70b*/
    }
    while ( (int)v3 < *(this + 4) ); /*0x74f714*/
  }
  return 1; /*0x74f719*/
}


// ==== 0x0074F730  ObjectClass::method_74F730  this=VersionClass  sig=csp ====
_DWORD *__thiscall sub_74F730(VersionClass *this)
{
  int v2; // edx

  v2 = *((_DWORD *)this + 17); /*0x74f734*/
  *(_DWORD *)&this->__pad_0[4] = 0; /*0x74f737*/
  *(_WORD *)&this->__pad_0[8] = 0; /*0x74f73d*/
  *(_WORD *)&this->__pad_0[10] = 0; /*0x74f741*/
  this->field_3C = 0; /*0x74f745*/
  *((_DWORD *)this + 16) = 0; /*0x74f748*/
  *((_DWORD *)this + 17) = v2 & 0xFFFFFFF0; /*0x74f74b*/
  *(_DWORD *)this->__pad_0 = &vt_VersionClass; /*0x74f74e*/
  this->__pad_0[42] = 0; /*0x74f754*/
  this->__pad_0[12] = 0; /*0x74f757*/
  return this->__pad_0; /*0x74f75a*/
}


// ==== 0x0074F760  VersionInfo::Read  this=VersionInfo  sig=csp ====
int __thiscall VersionInfo_Read(int this)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // eax
  int v6; // eax
  unsigned __int16 v7; // di
  int v8; // eax
  int v9; // eax
  unsigned __int16 v10; // cx
  int v11; // ecx
  __int16 v12; // [esp+10h] [ebp-4Ch]
  int v13[9]; // [esp+14h] [ebp-48h] BYREF
  int v14[9]; // [esp+38h] [ebp-24h] BYREF

  if ( (*(_BYTE *)(this + 68) & 8) == 0 ) /*0x74f76f*/
  {
    RawFileClass::Construct(v13, (int)MEMORY[0x84635C]); /*0x74f77a*/
    if ( FileClass::Open(v13, 0) ) /*0x74f784*/
    {
      FileClass::Read(v13, (char *)(this + 42), 16); /*0x74f797*/
      for ( *(_BYTE *)(this + 57) = 0; /*0x74f7b0*/
            *(_BYTE *)(strlen((const char *)(this + 42)) + this + 41) == 13;
            *(_BYTE *)(strlen((const char *)(this + 42)) + this + 41) = 0 )
      {
        ; /*0x74f7c0*/
      }
    }
    else
    {
      *(_BYTE *)(this + 42) = 0; /*0x74f7d5*/
    }
    RawFileClass::Dtor(v13); /*0x74f7dc*/
    v2 = *(_DWORD *)(this + 68); /*0x74f7e1*/
    LOBYTE(v2) = v2 | 8; /*0x74f7e4*/
    *(_DWORD *)(this + 68) = v2; /*0x74f7e6*/
  }
  v3 = *(_DWORD *)(this + 68); /*0x74f7e9*/
  if ( (v3 & 1) != 0 ) /*0x74f7ee*/
    return *(_DWORD *)(this + 4); /*0x74f7f0*/
  if ( (v3 & 8) == 0 ) /*0x74f7fd*/
  {
    RawFileClass::Construct(v13, (int)MEMORY[0x84635C]); /*0x74f808*/
    if ( FileClass::Open(v13, 0) ) /*0x74f812*/
    {
      FileClass::Read(v13, (char *)(this + 42), 16); /*0x74f825*/
      for ( *(_BYTE *)(this + 57) = 0; /*0x74f83e*/
            *(_BYTE *)(strlen((const char *)(this + 42)) + this + 41) == 13;
            *(_BYTE *)(strlen((const char *)(this + 42)) + this + 41) = 0 )
      {
        ; /*0x74f84e*/
      }
    }
    else
    {
      *(_BYTE *)(this + 42) = 0; /*0x74f863*/
    }
    RawFileClass::Dtor(v13); /*0x74f86a*/
    v5 = *(_DWORD *)(this + 68); /*0x74f86f*/
    LOBYTE(v5) = v5 | 8; /*0x74f872*/
    *(_DWORD *)(this + 68) = v5; /*0x74f874*/
  }
  v6 = *(_DWORD *)(this + 68); /*0x74f877*/
  if ( (v6 & 2) != 0 ) /*0x74f87c*/
  {
    v7 = *(_WORD *)(this + 8); /*0x74f87e*/
    v12 = v7; /*0x74f882*/
  }
  else
  {
    LOBYTE(v6) = v6 | 2; /*0x74f88d*/
    *(_WORD *)(this + 8) = 1; /*0x74f88f*/
    *(_DWORD *)(this + 68) = v6; /*0x74f893*/
    v12 = 1; /*0x74f896*/
    v7 = 1; /*0x74f89a*/
  }
  if ( (*(_BYTE *)(this + 68) & 8) == 0 ) /*0x74f8a0*/
  {
    RawFileClass::Construct(v14, (int)MEMORY[0x84635C]); /*0x74f8ab*/
    if ( FileClass::Open(v14, 0) ) /*0x74f8b5*/
    {
      FileClass::Read(v14, (char *)(this + 42), 16); /*0x74f8c8*/
      for ( *(_BYTE *)(this + 57) = 0; /*0x74f8e1*/
            *(_BYTE *)(strlen((const char *)(this + 42)) + this + 41) == 13;
            *(_BYTE *)(strlen((const char *)(this + 42)) + this + 41) = 0 )
      {
        ; /*0x74f8f1*/
      }
      v7 = v12; /*0x74f904*/
    }
    else
    {
      *(_BYTE *)(this + 42) = 0; /*0x74f926*/
    }
    RawFileClass::Dtor(v14); /*0x74f90c*/
    v8 = *(_DWORD *)(this + 68); /*0x74f911*/
    LOBYTE(v8) = v8 | 8; /*0x74f914*/
    *(_DWORD *)(this + 68) = v8; /*0x74f916*/
  }
  v9 = *(_DWORD *)(this + 68); /*0x74f919*/
  if ( (v9 & 4) != 0 ) /*0x74f91e*/
  {
    v10 = *(_WORD *)(this + 10); /*0x74f920*/
  }
  else
  {
    v10 = 1; /*0x74f92b*/
    LOBYTE(v9) = v9 | 4; /*0x74f930*/
    *(_WORD *)(this + 10) = 1; /*0x74f932*/
    *(_DWORD *)(this + 68) = v9; /*0x74f936*/
  }
  result = v10 | (v7 << 16); /*0x74f94b*/
  v11 = *(_DWORD *)(this + 68) | 1; /*0x74f950*/
  *(_DWORD *)(this + 4) = result; /*0x74f953*/
  *(_DWORD *)(this + 68) = v11; /*0x74f956*/
  return result; /*0x74f7f3*/
}


// ==== 0x0074F960  GameClass::ReadVersionFile  this=GameClass  sig=csp ====
__int16 __thiscall sub_74F960(int this)
{
  int v2; // eax
  int v3; // eax
  int v5[9]; // [esp+4h] [ebp-24h] BYREF

  if ( (*(_BYTE *)(this + 68) & 8) == 0 ) /*0x74f96a*/
  {
    RawFileClass::Construct(v5, (int)MEMORY[0x84635C]); /*0x74f97c*/
    if ( FileClass::Open(v5, 0) ) /*0x74f988*/
    {
      FileClass::Read(v5, (char *)(this + 42), 16); /*0x74f99b*/
      for ( *(_BYTE *)(this + 57) = 0; /*0x74f9b5*/
            *(_BYTE *)(strlen((const char *)(this + 42)) + this + 41) == 13;
            *(_BYTE *)(strlen((const char *)(this + 42)) + this + 41) = 0 )
      {
        ; /*0x74f9c5*/
      }
    }
    else
    {
      *(_BYTE *)(this + 42) = 0; /*0x74f9d9*/
    }
    RawFileClass::Dtor(v5); /*0x74f9e0*/
    v2 = *(_DWORD *)(this + 68); /*0x74f9e5*/
    LOBYTE(v2) = v2 | 8; /*0x74f9e9*/
    *(_DWORD *)(this + 68) = v2; /*0x74f9ec*/
  }
  v3 = *(_DWORD *)(this + 68); /*0x74f9f0*/
  if ( (v3 & 2) != 0 ) /*0x74f9f5*/
    return *(_WORD *)(this + 8); /*0x74f9f7*/
  LOBYTE(v3) = v3 | 2; /*0x74fa00*/
  *(_WORD *)(this + 8) = 1; /*0x74fa02*/
  *(_DWORD *)(this + 68) = v3; /*0x74fa08*/
  return 1; /*0x74f9fb*/
}


// ==== 0x0074FA20  GameClass::ReadVersionFile2  this=GameClass  sig=csp ====
__int16 __thiscall sub_74FA20(int this)
{
  int v2; // eax
  int v3; // eax
  int v5[9]; // [esp+4h] [ebp-24h] BYREF

  if ( (*(_BYTE *)(this + 68) & 8) == 0 ) /*0x74fa2a*/
  {
    RawFileClass::Construct(v5, (int)MEMORY[0x84635C]); /*0x74fa3c*/
    if ( FileClass::Open(v5, 0) ) /*0x74fa48*/
    {
      FileClass::Read(v5, (char *)(this + 42), 16); /*0x74fa5b*/
      for ( *(_BYTE *)(this + 57) = 0; /*0x74fa75*/
            *(_BYTE *)(strlen((const char *)(this + 42)) + this + 41) == 13;
            *(_BYTE *)(strlen((const char *)(this + 42)) + this + 41) = 0 )
      {
        ; /*0x74fa85*/
      }
    }
    else
    {
      *(_BYTE *)(this + 42) = 0; /*0x74fa99*/
    }
    RawFileClass::Dtor(v5); /*0x74faa0*/
    v2 = *(_DWORD *)(this + 68); /*0x74faa5*/
    LOBYTE(v2) = v2 | 8; /*0x74faa9*/
    *(_DWORD *)(this + 68) = v2; /*0x74faac*/
  }
  v3 = *(_DWORD *)(this + 68); /*0x74fab0*/
  if ( (v3 & 4) != 0 ) /*0x74fab5*/
    return *(_WORD *)(this + 10); /*0x74fab7*/
  LOBYTE(v3) = v3 | 4; /*0x74fac0*/
  *(_WORD *)(this + 10) = 1; /*0x74fac2*/
  *(_DWORD *)(this + 68) = v3; /*0x74fac8*/
  return 1; /*0x74fabb*/
}


// ==== 0x0074FAE0  ObjectClass::GetModuleInternalVersion  this=ObjectClass  sig=csp ====
char *__thiscall GetModuleInternalVersion(int this)
{
  int v2; // eax
  int v3; // eax
  unsigned __int16 v4; // bp
  int v5; // eax
  unsigned __int16 v6; // ax
  char *v7; // esi
  int v9[9]; // [esp+10h] [ebp-24h] BYREF

  if ( (*(_BYTE *)(this + 68) & 8) == 0 ) /*0x74faef*/
  {
    RawFileClass::Construct(v9, (int)g_Str_File_VERSION_TXT); /*0x74fafa*/
    if ( FileClass::Open(v9, 0) ) /*0x74fb04*/
    {
      FileClass::Read(v9, this + 42, 16); /*0x74fb17*/
      for ( *(_BYTE *)(this + 57) = 0; /*0x74fb30*/
            *(_BYTE *)(strlen((const char *)(this + 42)) + this + 41) == 13;
            *(_BYTE *)(strlen((const char *)(this + 42)) + this + 41) = 0 )
      {
        ; /*0x74fb40*/
      }
    }
    else
    {
      *(_BYTE *)(this + 42) = 0; /*0x74fb55*/
    }
    RawFileClass::Dtor(v9); /*0x74fb5c*/
    v2 = *(_DWORD *)(this + 68); /*0x74fb61*/
    LOBYTE(v2) = v2 | 8; /*0x74fb64*/
    *(_DWORD *)(this + 68) = v2; /*0x74fb66*/
  }
  v3 = *(_DWORD *)(this + 68); /*0x74fb69*/
  if ( (v3 & 4) != 0 ) /*0x74fb6e*/
  {
    v4 = *(_WORD *)(this + 10); /*0x74fb70*/
  }
  else
  {
    v4 = 1; /*0x74fb76*/
    LOBYTE(v3) = v3 | 4; /*0x74fb7b*/
    *(_WORD *)(this + 10) = 1; /*0x74fb7d*/
    *(_DWORD *)(this + 68) = v3; /*0x74fb81*/
  }
  if ( (MEMORY[0x87F7E8][539983] & 8) == 0 ) /*0x74fb8b*/
  {
    RawFileClass::Construct(v9, (int)g_Str_File_VERSION_TXT); /*0x74fb9a*/
    if ( FileClass::Open(v9, 0) ) /*0x74fba4*/
    {
      FileClass::Read(v9, (int)&MEMORY[0x87F7E8][539976] + 2, 16); /*0x74fbb8*/
      for ( BYTE1(MEMORY[0x87F7E8][539980]) = 0; /*0x74fbd9*/
            *((_BYTE *)&MEMORY[0x87F7E8][539976] + strlen((const char *)&MEMORY[0x87F7E8][539976] + 2) + 1) == 13;
            *((_BYTE *)&MEMORY[0x87F7E8][539976] + strlen((const char *)&MEMORY[0x87F7E8][539976] + 2) + 1) = 0 )
      {
        ; /*0x74fbee*/
      }
    }
    else
    {
      BYTE2(MEMORY[0x87F7E8][539976]) = 0; /*0x74fc07*/
    }
    RawFileClass::Dtor(v9); /*0x74fc11*/
    v5 = MEMORY[0x87F7E8][539983]; /*0x74fc16*/
    LOBYTE(v5) = LOBYTE(MEMORY[0x87F7E8][539983]) | 8; /*0x74fc1b*/
    MEMORY[0x87F7E8][539983] = v5; /*0x74fc1d*/
  }
  if ( (MEMORY[0x87F7E8][539983] & 2) != 0 ) /*0x74fc2f*/
  {
    v6 = MEMORY[0x87F7E8][539968]; /*0x74fc31*/
  }
  else
  {
    LOWORD(MEMORY[0x87F7E8][539968]) = 1; /*0x74fc3e*/
    v6 = 1; /*0x74fc49*/
    MEMORY[0x87F7E8][539983] |= 2u; /*0x74fc4e*/
  }
  v7 = (char *)(this + 12); /*0x74fc60*/
  sprintf(v7, "%d.%3.3d", v6, v4); /*0x74fc6a*/
  return v7; /*0x74fc74*/
}


// ==== 0x0074FC80  GameClass::ReadVersionString  this=GameClass  sig=csp ====
void __thiscall sub_74FC80(char *this)
{
  int v2[9]; // [esp+10h] [ebp-24h] BYREF

  RawFileClass::Construct(v2, (int)MEMORY[0x84635C]); /*0x74fc92*/
  if ( FileClass::Open(v2, 0) ) /*0x74fc9e*/
  {
    FileClass::Read(v2, this + 42, 16); /*0x74fcb1*/
    for ( this->GameClass_field_0x39 = 0; *(this + strlen(this + 42) + 41) == 13; *(this + strlen(this + 42) + 41) = 0 ) /*0x74fccb*/
      ; /*0x74fcdb*/
  }
  else
  {
    this->GameClass_field_0x2A = 0; /*0x74fcfe*/
  }
  RawFileClass::Dtor(v2); /*0x74fd05*/
}


// ==== 0x0074FD20  Network::GetMaxPacketSize  this=VOID_PTR  sig=csp ====
int __thiscall Network::GetMaxPacketSize(VersionClass *this)
{
  int v1; // ecx
  unsigned int *v2; // eax
  unsigned int v4; // [esp+4h] [ebp+4h]

  v1 = 2; /*0x74fd24*/
  v2 = (unsigned int *)&MEMORY[0x846150]; /*0x74fd29*/
  while ( v4 < *v2 ) /*0x74fd30*/
  {
    v2 -= 2; /*0x74fd32*/
    --v1; /*0x74fd35*/
    if ( (int)v2 < (int)&MEMORY[0x846140] ) /*0x74fd3b*/
      return MEMORY[0x846154]; /*0x74fd42*/
  }
  return MEMORY[0x846144][2 * v1]; /*0x74fd42*/
}


// ==== 0x0074FD50  NetworkBuffer::GetField  this=VOID_PTR  sig=csp ====
int __thiscall NetworkBuffer::GetField(VersionClass *this)
{
  this->field_3C = 0x20000; /*0x74fd55*/
  *((_DWORD *)this + 16) = 0x20000; /*0x74fd58*/
  return 0x20000; /*0x74fd5b*/
}


// ==== 0x0074FD60  NetworkBuffer::UpdateWindow  this=VOID_PTR  sig=csp ====
int __thiscall NetworkBuffer::UpdateWindow(VersionClass *this, CellStruct *aP1, unsigned int a3)
{
  unsigned int v3; // edi
  CellStruct *v5; // eax

  v3 = *((_DWORD *)this + 16); /*0x74fd66*/
  if ( (unsigned int)aP1 > v3 ) /*0x74fd6b*/
    return -1; /*0x74fd6e*/
  v5 = (CellStruct *)this->field_3C; /*0x74fd75*/
  if ( a3 < (unsigned int)v5 ) /*0x74fd7e*/
    return 0; /*0x74fd81*/
  if ( aP1 > v5 ) /*0x74fd89*/
    this->field_3C = (int)aP1; /*0x74fd8b*/
  if ( a3 < v3 ) /*0x74fd90*/
    *((_DWORD *)this + 16) = a3; /*0x74fd92*/
  return *((_DWORD *)this + 16); /*0x74fd6d*/
}


// ==== 0x0074FDA0  NetworkBuffer::GetField2  this=VOID_PTR  sig=ida-proto ====
int __thiscall NetworkBuffer::GetField2(VersionClass *this)
{
  return 0x20000; /*0x74fda5*/
}


// ==== 0x0074FDB0  NetworkBuffer::GetField3  this=VOID_PTR  sig=ida-proto ====
int __thiscall NetworkBuffer::GetField3(VersionClass *this)
{
  return 0x20000; /*0x74fdb5*/
}


// ==== 0x0074FDC0  GetModuleVersion  this=-  sig=ida-proto ====
char *sub_74FDC0()
{
  signed int FileVersionInfoSizeA; // eax
  DWORD v1; // esi
  void *v2; // ebx
  unsigned int puLen; // [esp+4h] [ebp-190h] BYREF
  LPVOID lpBuffer; // [esp+8h] [ebp-18Ch] BYREF
  DWORD dwHandle; // [esp+Ch] [ebp-188h] BYREF
  CHAR SubBlock[128]; // [esp+10h] [ebp-184h] BYREF
  CHAR Filename[260]; // [esp+90h] [ebp-104h] BYREF

  if ( !MEMORY[0x846358] ) /*0x74fdce*/
    return MEMORY[0x846158]; /*0x74fdce*/
  MEMORY[0x846358] = 0; /*0x74fde8*/
  if ( !GetModuleFileNameA(g_hInstance, Filename, 0x104u) ) /*0x74fdef*/
    return MEMORY[0x846158]; /*0x74fdef*/
  dwHandle = 1; /*0x74fe0a*/
  FileVersionInfoSizeA = GetFileVersionInfoSizeA(Filename, &dwHandle); /*0x74fe12*/
  v1 = FileVersionInfoSizeA; /*0x74fe17*/
  if ( FileVersionInfoSizeA <= 0 ) /*0x74fe1b*/
    return MEMORY[0x846158]; /*0x74fee3*/
  v2 = __2_YAPAXI_Z(FileVersionInfoSizeA); /*0x74fe2f*/
  if ( GetFileVersionInfoA(Filename, dwHandle, v1, v2) ) /*0x74fe3c*/
  {
    VerQueryValueA(v2, MEMORY[0x84639C], &lpBuffer, &puLen); /*0x74fe59*/
    if ( puLen ) /*0x74fe64*/
    {
      sprintf(SubBlock, MEMORY[0x846374], *(unsigned __int16 *)lpBuffer, *((unsigned __int16 *)lpBuffer + 1)); /*0x74fe81*/
      VerQueryValueA(v2, SubBlock, &lpBuffer, &puLen); /*0x74fe99*/
      if ( puLen ) /*0x74fea4*/
        strcpy(MEMORY[0x846158], (const char *)lpBuffer); /*0x74fec2*/
    }
  }
  __3_YAXPAX_Z(v2); /*0x74fecd*/
  return MEMORY[0x846158]; /*0x74fedb*/
}


// ==== 0x0074FEF0  INIEntry::LookupByName  this=AbstractClass  sig=csp ====
ObjectClass *__thiscall INIEntry::LookupByName(void *this)
{
  ObjectClass *v2; // edi
  const void **v3; // esi

  v2 = 0; /*0x74fef5*/
  v3 = (const void **)&stru_830620.__pad_579C[67068]; /*0x74fef7*/
  while ( _strcmpi(*v3, this) ) /*0x74ff0a*/
  {
    ++v3; /*0x74ff0c*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x74ff0f*/
    if ( (int)v3 >= (int)&stru_830620.__pad_579C[67140] ) /*0x74ff16*/
      return (ObjectClass *)-1; /*0x74ff1e*/
  }
  return v2; /*0x74ff18*/
}


// ==== 0x0074FF30  ObjectClass::unknown_libname_35  this=ObjectClass  sig=csp ====
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_35(_DWORD *this)
{
  *this = 0; /*0x74ff32*/
  return this; /*0x74ff38*/
}


// ==== 0x0074FF40  ObjectClass::nullsub_69  this=ObjectClass  sig=csp ====
void nullsub_69()
{
  ; /*0x74ff40*/
}


// ==== 0x0074FF50  HouseClass::AccumulateScore  this=HouseClass  sig=csp ====
void __thiscall HouseClass_AccumulateScore(float *this, int a2, int a3)
{
  double v3; // st7

  v3 = (double)a3 / ((double)a2 * *((double *)MEMORY[0x8871E0] + 205)) + *this; /*0x74ff65*/
  *this = v3; /*0x74ff67*/
  if ( *((double *)MEMORY[0x8871E0] + 211) <= v3 ) /*0x74ff7e*/
    v3 = *((double *)MEMORY[0x8871E0] + 211); /*0x74ff82*/
  *this = v3; /*0x74ff88*/
}


// ==== 0x0074FF90  Audio::IsMediumVolume  this=HouseClass  sig=csp ====
BOOL __thiscall Audio_IsMediumVolume(float *this)
{
  return *this >= 1.0 && *this < 2.0; /*0x74ffb3*/
}


// ==== 0x0074FFC0  Crate::initializeCrate  this=HouseClass  sig=csp ====
BOOL __thiscall sub_74FFC0(float *this)
{
  return *this >= 0.0 && *this < 1.0; /*0x74ffe3*/
}


// ==== 0x0074FFF0  VeinholeClass::GetState  this=HouseClass  sig=csp ====
BOOL __thiscall VeinholeClass::GetState(float *this)
{
  return *this < 0.0; /*0x750004*/
}

