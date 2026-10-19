// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x006E0030  sub_6E0030  this=-  sig=csp ====
char __stdcall sub_6E0030(int a1, int a2, int a3, int a4)
{
  return 1; /*0x6e0032*/
}



// ==== 0x006E0040  sub_6E0040  this=-  sig=csp ====
char __stdcall sub_6E0040(int a1, int a2, int a3, int a4)
{
  return 1; /*0x6e0042*/
}



// ==== 0x006E0080  ObjectClass::method_6E0080  this=ObjectClass  sig=csp ====
char __thiscall sub_6E0080(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int v6; // edi
  __int16 v7; // bp
  _BYTE *v8; // esi
  _WORD *v9; // eax
  int v11; // [esp+8h] [ebp-4h] BYREF

  v5 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v11, this->ambientSoundController[2]); /*0x6e0097*/
  v6 = 0; /*0x6e009e*/
  v11 = v5; /*0x6e00a0*/
  if ( g_GameCleanupState <= 0 ) /*0x6e00a6*/
    return 1; /*0x6e00fb*/
  v7 = HIWORD(v11); /*0x6e00a9*/
  do /*0x6e00ee*/
  {
    v8 = (_BYTE *)*((_DWORD *)dword_A8020C + v6); /*0x6e00b5*/
    if ( v8[144] ) /*0x6e00b8*/
    {
      v9 = (_WORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v8 + 440))(v8, &v11); /*0x6e00cb*/
      if ( *v9 == (_WORD)v5 && v9[1] == v7 ) /*0x6e00da*/
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 248))(v8); /*0x6e00e0*/
    }
    ++v6; /*0x6e00eb*/
  }
  while ( v6 < g_GameCleanupState ); /*0x6e00ee*/
  return 1; /*0x6e00f2*/
}



// ==== 0x006E0110  ScenarioClass::Create  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::Create(ScenarioClass *this, int a2, int a3, int a4, int a5)
{
  int *v6; // eax
  int v8; // [esp+4h] [ebp-1Ch] BYREF
  int v9; // [esp+8h] [ebp-18h] BYREF
  int v10; // [esp+Ch] [ebp-14h]
  int GroundHeight; // [esp+10h] [ebp-10h]
  _DWORD v12[3]; // [esp+14h] [ebp-Ch] BYREF

  v8 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v8, this->nextScenario[17]); /*0x6e012f*/
  GroundHeight = 0; /*0x6e014c*/
  v12[2] = 0; /*0x6e0150*/
  v10 = (SHIWORD(v8) << 8) + 128; /*0x6e0158*/
  v12[1] = v10; /*0x6e015c*/
  v9 = ((__int16)v8 << 8) + 128; /*0x6e0166*/
  v12[0] = v9; /*0x6e016a*/
  GroundHeight = Cell::GetGroundHeight(v12); /*0x6e0178*/
  v6 = (int *)__2_YAPAXI_Z(0x100u); /*0x6e017c*/
  if ( v6 ) /*0x6e0186*/
    ParticleSystemClass::Constructor( /*0x6e01aa*/
      v6,
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * this->nextScenario[36]),
      &v9,
      0,
      0,
      &dword_B0E6A0,
      0);
  return 1; /*0x6e01b1*/
}



// ==== 0x006E01C0  globalHelper_0E01C0  this=-  sig=csp ====
char __stdcall sub_6E01C0(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  _BYTE *v5; // esi
  _DWORD *v6; // ecx

  v4 = 0; /*0x6e01c6*/
  if ( dword_A8EC88 <= 0 ) /*0x6e01ca*/
    return 1; /*0x6e0245*/
  do /*0x6e023b*/
  {
    v5 = (_BYTE *)*((_DWORD *)dword_A8EC7C + v4); /*0x6e01d7*/
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 44))(v5) != 6 ) /*0x6e01e4*/
    {
      if ( v5[144] ) /*0x6e01e6*/
      {
        if ( v5[116] ) /*0x6e01f0*/
        {
          v6 = (_DWORD *)*((_DWORD *)v5 + 13); /*0x6e01f7*/
          if ( v6 ) /*0x6e01fc*/
          {
            if ( LinkedList::Contains(v6, a3) /*0x6e0223*/
              && (!(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 388))(v5)
               || (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 388))(v5) == 23) )
            {
              (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)v5 + 488))(v5, 5, 0); /*0x6e022d*/
            }
          }
        }
      }
    }
    ++v4; /*0x6e0238*/
  }
  while ( v4 < dword_A8EC88 ); /*0x6e023b*/
  return 1; /*0x6e0241*/
}



// ==== 0x006E0250  ObjectClass::method_6E0250  this=ObjectClass  sig=csp ====
char __thiscall sub_6E0250(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  HIBYTE(dword_A8B230[374].vtable3) = this->isAliveFlag; /*0x6e025c*/
  return 1; /*0x6e0264*/
}



// ==== 0x006E0270  ObjectClass::method_6E0270  this=ObjectClass  sig=csp ====
char __thiscall sub_6E0270(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  BYTE2(dword_A8B230[374].vtable3) = this->isAliveFlag; /*0x6e027c*/
  return 1; /*0x6e0284*/
}



// ==== 0x006E0290  ObjectClass::method_6E0290  this=ObjectClass  sig=csp ====
char __thiscall sub_6E0290(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  LOBYTE(dword_A8B230[374].uniqueId) = this->isAliveFlag; /*0x6e029c*/
  return 1; /*0x6e02a4*/
}



// ==== 0x006E0490  ObjectClass::PlayWaypointEffect  this=ObjectClass  sig=csp ====
char __thiscall PlayWaypointEffect(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  int *WorldCoords; // eax
  _DWORD *v7; // eax
  int *v8; // eax
  _DWORD *v9; // eax
  int *v10; // eax
  _DWORD *v11; // eax
  int *v12; // eax
  _DWORD *v13; // eax
  int *v14; // eax
  int v15; // esi
  int v16; // edx
  __int16 v18[2]; // [esp+8h] [ebp-38h] BYREF
  int v19; // [esp+Ch] [ebp-34h] BYREF
  int v20; // [esp+10h] [ebp-30h] BYREF
  int v21; // [esp+14h] [ebp-2Ch]
  int v22; // [esp+18h] [ebp-28h]
  int v23; // [esp+1Ch] [ebp-24h] BYREF
  int v24; // [esp+20h] [ebp-20h]
  int v25; // [esp+24h] [ebp-1Ch]
  _DWORD v26[3]; // [esp+28h] [ebp-18h] BYREF
  _DWORD v27[3]; // [esp+34h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, &v20, *(_DWORD *)&this->isAliveFlag); /*0x6e04a9*/
  v23 = *WorldCoords; /*0x6e04b2*/
  v24 = WorldCoords[1]; /*0x6e04bb*/
  v25 = WorldCoords[2]; /*0x6e04c7*/
  PlaySoundEffectAt(&v23, 100, 0, *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008), 1, 0); /*0x6e04dd*/
  v7 = Cell::GetWorldCoords((Cell *)dword_A8B230, &v20, *(_DWORD *)&this->isAliveFlag); /*0x6e04f4*/
  v8 = Coord::Subtract((Coord *)v26, *v7 + 85, v7[1] + 85, v7[2]); /*0x6e0510*/
  v23 = *v8; /*0x6e0519*/
  v24 = v8[1]; /*0x6e0528*/
  v25 = v8[2]; /*0x6e052f*/
  PlaySoundEffectAt(&v23, 100, 0, *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008), 1, 0); /*0x6e0545*/
  v9 = Cell::GetWorldCoords((Cell *)dword_A8B230, v26, *(_DWORD *)&this->isAliveFlag); /*0x6e055c*/
  v10 = Coord::Subtract((Coord *)&v20, *v9 - 85, v9[1] + 85, v9[2]); /*0x6e0578*/
  v23 = *v10; /*0x6e0581*/
  v24 = v10[1]; /*0x6e058a*/
  v25 = v10[2]; /*0x6e0591*/
  PlaySoundEffectAt(&v23, 100, 0, *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008), 1, 0); /*0x6e05ad*/
  Coord::Subtract((Coord *)&v23, 85, -85, 0); /*0x6e05bc*/
  v11 = Cell::GetWorldCoords((Cell *)dword_A8B230, v26, *(_DWORD *)&this->isAliveFlag); /*0x6e05d3*/
  v12 = Coord::Subtract((Coord *)v27, *v11 + v23, v11[1] + v24, v11[2] + v25); /*0x6e05fb*/
  v20 = *v12; /*0x6e0604*/
  v21 = v12[1]; /*0x6e060d*/
  v22 = v12[2]; /*0x6e0619*/
  PlaySoundEffectAt(&v20, 100, 0, *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008), 1, 0); /*0x6e062f*/
  v13 = Cell::GetWorldCoords((Cell *)dword_A8B230, v27, *(_DWORD *)&this->isAliveFlag); /*0x6e0646*/
  v14 = Coord::Subtract((Coord *)v26, *v13 - 85, v13[1] - 85, v13[2]); /*0x6e0662*/
  v23 = *v14; /*0x6e066b*/
  v24 = v14[1]; /*0x6e067a*/
  v25 = v14[2]; /*0x6e0681*/
  PlaySoundEffectAt(&v23, 100, 0, *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008), 1, 0); /*0x6e0697*/
  if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, *(_DWORD *)&this->isAliveFlag) ) /*0x6e06a9*/
  {
    *(_DWORD *)v18 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v19, *(_DWORD *)&this->isAliveFlag); /*0x6e06d9*/
    v15 = 3; /*0x6e06dd*/
    if ( !(unsigned __int8)CellClass::SetTerrainType((CellClass *)&stru_87F5F0.__pad_58[416], v18) ) /*0x6e06e2*/
    {
      do /*0x6e0703*/
        v16 = v15--; /*0x6e06eb*/
      while ( v16 > 0 && !(unsigned __int8)CellClass::SetTerrainType((CellClass *)&stru_87F5F0.__pad_58[416], v18) ); /*0x6e0703*/
    }
    v24 = (v18[1] << 8) + 128; /*0x6e0722*/
    v23 = (v18[0] << 8) + 128; /*0x6e0730*/
    v25 = dword_B0E6D4; /*0x6e073c*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v23, &v20); /*0x6e0748*/
    Cell::CreateCrater(v20 - 128, v21 - 128, 256, 256, 0); /*0x6e077a*/
  }
  return 1; /*0x6e077f*/
}



// ==== 0x006E0790  AnimTypeClass::method_6E0790  this=AnimTypeClass  sig=csp ====
char __thiscall sub_6E0790(AnimTypeClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int *WorldCoords; // eax
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008); /*0x6e07a3*/
  WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, v8, *(_DWORD *)&this->?[44]); /*0x6e07b5*/
  CreateSmokeEffectAt(50, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e07d6*/
  return 1; /*0x6e07dd*/
}



// ==== 0x006E07F0  AnimTypeClass::method_6E07F0  this=AnimTypeClass  sig=csp ====
char __thiscall sub_6E07F0(AnimTypeClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int *WorldCoords; // eax
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008); /*0x6e0803*/
  WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, v8, *(_DWORD *)&this->?[44]); /*0x6e0815*/
  CreateSmokeEffectAt(100, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e0836*/
  return 1; /*0x6e083d*/
}



// ==== 0x006E0850  AnimTypeClass::method_6E0850  this=AnimTypeClass  sig=csp ====
char __thiscall sub_6E0850(AnimTypeClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int *WorldCoords; // eax
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008); /*0x6e0863*/
  WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, v8, *(_DWORD *)&this->?[44]); /*0x6e0875*/
  CreateSmokeEffectAt(300, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e0896*/
  return 1; /*0x6e089d*/
}



// ==== 0x006E0AA0  TActionClass::executeEnterAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeEnterAction(TActionClass *this, int a2, int a3, _DWORD *a4, int a5)
{
  HouseClass *v5; // esi
  int Field11; // eax
  int v7; // edi
  char v9; // bl
  int i; // ebp
  int v11; // esi
  LinkedList *v12; // ecx

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e0aa1*/
  if ( !a4 ) /*0x6e0aae*/
    return 0; /*0x6e0aae*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e0ab6*/
  {
    Field11 = Property::GetField11((Property *)a4); /*0x6e0ab8*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e0ac2*/
      return 0; /*0x6e0ae7*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e0ac6*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0ad1*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0ad8*/
  }
  v7 = Field11; /*0x6e0add*/
  if ( !Field11 ) /*0x6e0ae1*/
    return 0; /*0x6e0ae1*/
  v9 = 0; /*0x6e0af1*/
  for ( i = 0; i < *(int *)&stru_A8EB00.?[164]; ++i ) /*0x6e0af7*/
  {
    v11 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i); /*0x6e0afe*/
    if ( *(_BYTE *)(v11 + 144) ) /*0x6e0b01*/
    {
      if ( *(_BYTE *)(v11 + 116) ) /*0x6e0b0b*/
      {
        if ( !*(_BYTE *)(v11 + 129) ) /*0x6e0b12*/
        {
          v12 = *(LinkedList **)(v11 + 52); /*0x6e0b1c*/
          if ( v12 ) /*0x6e0b21*/
          {
            if ( (unsigned __int8)LinkedList::Contains(v12, (int)a4) ) /*0x6e0b28*/
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v11 + 980))(v11, v7, 0); /*0x6e0b38*/
              v9 = 1; /*0x6e0b3e*/
            }
          }
        }
      }
    }
  }
  return v9; /*0x6e0ae3*/
}



// ==== 0x006E0B60  TActionClass::ConvertHouseUnits  this=TActionClass  sig=csp ====
char __thiscall TActionClass::ConvertHouseUnits(TActionClass *this, int a2, int a3, _DWORD *a4, int a5)
{
  HouseClass *v5; // esi
  char v6; // bl
  int Field11; // eax
  int v8; // ebp
  int v10; // eax
  int i; // edi
  _DWORD *v12; // esi
  int v13; // esi
  int v14; // edi
  int v15; // esi
  int v16; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e0b63*/
  v6 = 0; /*0x6e0b6d*/
  if ( !a4 ) /*0x6e0b71*/
    return 0; /*0x6e0b71*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e0b79*/
  {
    Field11 = Property::GetField11((Property *)a4); /*0x6e0b7b*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e0b85*/
      return 0; /*0x6e0bab*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e0b89*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0b94*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0b9b*/
  }
  v8 = Field11; /*0x6e0ba0*/
  if ( !Field11 ) /*0x6e0ba4*/
    return 0; /*0x6e0ba4*/
  v10 = *(_DWORD *)&stru_A8EB00.?[164]; /*0x6e0bae*/
  for ( i = 0; i < *(int *)&stru_A8EB00.?[164]; ++i ) /*0x6e0bb8*/
  {
    v12 = *(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i); /*0x6e0bbf*/
    if ( v12[135] == a2 /*0x6e0bf4*/
      && (!v12
       || (*(int (__thiscall **)(_DWORD))(*v12 + 44))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i)) != 6
       || (v13 = v12[328]) == 0
       || !*(_BYTE *)(v13 + 5491) && !*(_BYTE *)(v13 + 5492)) )
    {
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i) + 980))( /*0x6e0c0b*/
        *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i),
        v8,
        0);
      v6 = 1; /*0x6e0c11*/
    }
    v10 = *(_DWORD *)&stru_A8EB00.?[164]; /*0x6e0c13*/
  }
  v14 = 0; /*0x6e0c1d*/
  if ( v10 > 0 ) /*0x6e0c21*/
  {
    do /*0x6e0c89*/
    {
      v15 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v14); /*0x6e0c2c*/
      if ( *(_DWORD *)(v15 + 540) == a2 ) /*0x6e0c35*/
      {
        if ( v15 ) /*0x6e0c39*/
        {
          if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v15 + 44))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v14)) == 6 ) /*0x6e0c45*/
          {
            v16 = *(_DWORD *)(v15 + 1312); /*0x6e0c47*/
            if ( v16 ) /*0x6e0c4f*/
            {
              if ( *(_BYTE *)(v16 + 5491) || *(_BYTE *)(v16 + 5492) ) /*0x6e0c5b*/
              {
                (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v14) /*0x6e0c72*/
                                                            + 980))(
                  *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v14),
                  v8,
                  0);
                Animation::UpdateBuildingAnimations((Animation *)v15); /*0x6e0c7a*/
                v6 = 1; /*0x6e0c7f*/
              }
            }
          }
        }
      }
      ++v14; /*0x6e0c86*/
    }
    while ( v14 < *(int *)&stru_A8EB00.?[164] ); /*0x6e0c89*/
  }
  return v6; /*0x6e0ba6*/
}



// ==== 0x006E0CA0  TActionClass::executeCaptureAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeCaptureAction(TActionClass *this, void *a2, int a3, _DWORD *a4, int a5)
{
  HouseClass *v5; // esi
  int Field11; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e0ca1*/
  if ( !a4 ) /*0x6e0cad*/
    return 0; /*0x6e0cad*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e0cb5*/
  {
    Field11 = Property::GetField11((Property *)a4); /*0x6e0cb7*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e0cc1*/
      return 0; /*0x6e0ce3*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e0cc5*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0cd0*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0cd7*/
  }
  if ( !Field11 ) /*0x6e0cde*/
    return 0; /*0x6e0cde*/
  TActionClass::executeAttackAction((TActionClass *)a2, Field11); /*0x6e0ceb*/
  return 1; /*0x6e0ce2*/
}



// ==== 0x006E0D00  TActionClass::executeSabotageAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeSabotageAction(TActionClass *this, _DWORD *a2, int a3, _DWORD *a4, int a5)
{
  HouseClass *v5; // esi
  int Field11; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e0d01*/
  if ( !a4 ) /*0x6e0d0d*/
    return 0; /*0x6e0d0d*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e0d15*/
  {
    Field11 = Property::GetField11((Property *)a4); /*0x6e0d17*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e0d21*/
      return 0; /*0x6e0d43*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e0d25*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0d30*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0d37*/
  }
  if ( !Field11 ) /*0x6e0d3e*/
    return 0; /*0x6e0d3e*/
  TActionClass::executeMoveAction((TActionClass *)a2, Field11); /*0x6e0d4b*/
  return 1; /*0x6e0d42*/
}



// ==== 0x006E0EF0  HouseClass::UpdateTechBuildings  this=HouseClass  sig=csp ====
char __thiscall HouseClass::UpdateTechBuildings(HouseClass *this, int a2, int a3, int a4, int a5)
{
  HouseClass *v7; // [esp+14h] [ebp+4h]

  if ( LOBYTE(this->cloningVatsCount) ) /*0x6e0ef0*/
  {
    *(_BYTE *)(a2 + 499) = 1; /*0x6e0f02*/
    if ( *(int *)(a2 + 96) > 0 ) /*0x6e0f0e*/
    {
      LOWORD(v7) = *(_DWORD *)(**(_DWORD **)(a2 + 84) + 156) / 256; /*0x6e0f36*/
      HIWORD(v7) = *(_DWORD *)(**(_DWORD **)(a2 + 84) + 160) / 256; /*0x6e0f4b*/
      HouseClass::SetMapSeed((HouseClass *)a2, (int)v7); /*0x6e0f55*/
      *(_DWORD *)(a2 + 22352) = v7; /*0x6e0f5a*/
    }
    if ( !*(_DWORD *)(a2 + 22292) ) /*0x6e0f61*/
    {
      HouseClass::SetPrimaryTechBuilding((HouseClass *)a2); /*0x6e0f6d*/
      return 1; /*0x6e0f78*/
    }
  }
  else
  {
    *(_BYTE *)(a2 + 499) = 0; /*0x6e0f7f*/
  }
  return 1; /*0x6e0f74*/
}



// ==== 0x006E0FE0  TActionClass::RevealWaypointArea  this=TActionClass  sig=csp ====
char __thiscall TActionClass::RevealWaypointArea(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // esi
  int v8; // [esp+0h] [ebp-14h] BYREF
  int v9; // [esp+4h] [ebp-10h]
  int v10; // [esp+8h] [ebp-Ch]
  __int16 v11[4]; // [esp+Ch] [ebp-8h] BYREF

  if ( dword_A83D4C->__pad_140[256] ) /*0x6e0fe8*/
    return 1; /*0x6e116a*/
  *(_DWORD *)v11 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v8, *(_DWORD *)&this->pad_6E[34]); /*0x6e101b*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v11) + 80) & 0x100) != 0 /*0x6e1047*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v11) + 80) & 0x400) != 0 )
  {
    v5 = 4; /*0x6e104d*/
  }
  else
  {
    v5 = 0; /*0x6e1049*/
  }
  v6 = v5 + *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v11) + 283); /*0x6e1068*/
  v10 = v6 * dword_B0E6E0; /*0x6e10b2*/
  v9 = ((__int16)(v11[1] - v6 / 2) << 8) + 128; /*0x6e10c1*/
  v8 = ((__int16)(v11[0] - v6 / 2) << 8) + 128; /*0x6e10cd*/
  MapClass::RevealArea1( /*0x6e10e5*/
    (MapClass *)&stru_87F5F0.__pad_58[416],
    &v8,
    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1580),
    dword_A83D4C,
    0,
    0,
    0,
    1,
    0);
  v8 = ((__int16)(v11[0] - v6 / 2) << 8) + 128; /*0x6e1126*/
  v10 = v6 * dword_B0E6E0; /*0x6e1135*/
  v9 = ((__int16)(v11[1] - v6 / 2) << 8) + 128; /*0x6e1143*/
  MapClass::RevealArea1( /*0x6e115b*/
    (MapClass *)&stru_87F5F0.__pad_58[416],
    &v8,
    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1580),
    dword_A83D4C,
    0,
    0,
    0,
    1,
    1);
  return 1; /*0x6e1164*/
}



// ==== 0x006E1180  ObjectClass::method_6E1180  this=ObjectClass  sig=csp ====
char __thiscall sub_6E1180(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  int v6; // [esp+0h] [ebp-8h] BYREF
  int v7; // [esp+4h] [ebp-4h] BYREF

  v6 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v7, *(_DWORD *)&this->isAliveFlag); /*0x6e11a6*/
  MapClass::TriggerEVA((__int16 *)&v6); /*0x6e11aa*/
  return 1; /*0x6e11b1*/
}



// ==== 0x006E11C0  TActionClass::RevealTileTypeAtWaypoint  this=TActionClass  sig=csp ====
char __thiscall TActionClass::RevealTileTypeAtWaypoint(TActionClass *this, int a2, int a3, int a4, int a5)
{
  __int16 *Waypoint_Location; // eax
  int TileIndex; // ebp
  _DWORD *v7; // esi
  __int16 *v8; // ebx
  __int16 v9; // cx
  int v10; // esi
  __int16 v11; // ax
  __int16 v12; // bx
  int v14; // [esp+8h] [ebp-1Ch] BYREF
  int v15[3]; // [esp+Ch] [ebp-18h] BYREF
  int v16[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( dword_A83D4C->__pad_140[256] ) /*0x6e11c8*/
    return 1; /*0x6e11c8*/
  Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location( /*0x6e11ee*/
                                   (char *)dword_A8B230,
                                   &v14,
                                   *(_DWORD *)&this->pad_6E[34]);
  TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], Waypoint_Location, 1, 0); /*0x6e1203*/
  TActionClass::executeSellAction((TActionClass *)&stru_87F5F0.__pad_58[416]); /*0x6e1205*/
  v7 = MapClass::SpiralSearch((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x6e1214*/
  if ( !v7 ) /*0x6e1218*/
    return 1; /*0x6e1327*/
  do /*0x6e1314*/
  {
    v8 = (__int16 *)(v7 + 9); /*0x6e1220*/
    if ( MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], (__int16 *)v7 + 18, 1, 0) == TileIndex ) /*0x6e1234*/
    {
      v9 = *((_WORD *)v7 + 19); /*0x6e1244*/
      v10 = *((char *)v7 + 283) / 2; /*0x6e124c*/
      v15[0] = ((__int16)(*v8 - v10 / 2) << 8) + 128; /*0x6e1284*/
      v15[1] = ((__int16)(v9 - v10 / 2) << 8) + 128; /*0x6e128f*/
      v15[2] = v10 * dword_B0E6E0; /*0x6e12a2*/
      MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], v15, 2, dword_A83D4C, 0, 0, 0, 1, 0); /*0x6e12a6*/
      v11 = *v8; /*0x6e12b1*/
      v12 = v8[1] - v10 / 2; /*0x6e12be*/
      v16[2] = v10 * dword_B0E6E0; /*0x6e12d3*/
      v16[0] = ((__int16)(v11 - v10 / 2) << 8) + 128; /*0x6e12ea*/
      v16[1] = (v12 << 8) + 128; /*0x6e12f5*/
      MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], v16, 2, dword_A83D4C, 0, 0, 0, 1, 1); /*0x6e1301*/
    }
    v7 = MapClass::SpiralSearch((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x6e1310*/
  }
  while ( v7 ); /*0x6e1314*/
  return 1; /*0x6e131c*/
}



// ==== 0x006E1440  ObjectClass::Render  this=ObjectClass  sig=csp ====
char __thiscall ObjectClass::Render(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  void **p_vtable3; // edx
  void *vtable3; // edi
  int abstractFlags; // eax
  int v8; // esi
  int v9; // eax
  void *v11; // [esp+10h] [ebp-8h]

  p_vtable3 = &dword_A8B230[127].vtable3; /*0x6e144f*/
  vtable3 = dword_A8B230[127].vtable3; /*0x6e1457*/
  abstractFlags = dword_A8B230[127].abstractFlags; /*0x6e1459*/
  if ( vtable3 != (void *)-1 ) /*0x6e145f*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)vtable3 >= abstractFlags ) /*0x6e1467*/
    {
      v8 = 0; /*0x6e149c*/
      goto LABEL_5; /*0x6e149e*/
    }
    abstractFlags -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)vtable3; /*0x6e1469*/
  }
  v8 = abstractFlags; /*0x6e146b*/
LABEL_5:
  v9 = *(_DWORD *)&this->isAliveFlag; /*0x6e146d*/
  *p_vtable3 = *(void **)&stru_A8EB00.?[416]; /*0x6e1473*/
  p_vtable3[1] = v11; /*0x6e1481*/
  p_vtable3[2] = (void *)(v8 + 12 * v9 + 3 * v9); /*0x6e1489*/
  ObjectClass::PreDraw((ObjectClass *)&stru_87F5F0.__pad_58[416]); /*0x6e148c*/
  return 1; /*0x6e1491*/
}



// ==== 0x006E14A0  ObjectClass::ProcessDataObjectClass  this=ObjectClass  sig=csp ====
char __thiscall ProcessDataObjectClass(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  void **p_vtable3; // eax
  int abstractFlags; // edx
  void *vtable3; // esi
  int v8; // edi
  void *v9; // edx
  int v10; // ecx
  void *v11; // esi
  int v12; // ecx
  void *v14; // [esp+10h] [ebp-8h]

  p_vtable3 = &dword_A8B230[127].vtable3; /*0x6e14a8*/
  abstractFlags = dword_A8B230[127].abstractFlags; /*0x6e14b4*/
  vtable3 = dword_A8B230[127].vtable3; /*0x6e14b8*/
  if ( vtable3 != (void *)-1 ) /*0x6e14be*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)vtable3 >= abstractFlags ) /*0x6e14c6*/
      abstractFlags = 0; /*0x6e14cc*/
    else
      abstractFlags -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)vtable3; /*0x6e14c8*/
  }
  v8 = 15 * *(_DWORD *)&this->isAliveFlag; /*0x6e14d7*/
  if ( abstractFlags > v8 ) /*0x6e14dc*/
  {
    v11 = *p_vtable3; /*0x6e14e8*/
    v12 = dword_A8B230[127].abstractFlags; /*0x6e14ea*/
    if ( *p_vtable3 != (void *)-1 ) /*0x6e14f0*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)v11 >= v12 ) /*0x6e14f8*/
        v12 = 0; /*0x6e14fe*/
      else
        v12 -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)v11; /*0x6e14fa*/
    }
    v9 = v14; /*0x6e1500*/
    v10 = v12 - v8; /*0x6e1504*/
    *p_vtable3 = *(void **)&stru_A8EB00.?[416]; /*0x6e1506*/
  }
  else
  {
    v9 = v14; /*0x6e14de*/
    v10 = 0; /*0x6e14e2*/
    *p_vtable3 = *(void **)&stru_A8EB00.?[416]; /*0x6e14e4*/
  }
  p_vtable3[1] = v9; /*0x6e1508*/
  p_vtable3[2] = (void *)v10; /*0x6e150b*/
  ObjectClass::PreDraw((ObjectClass *)&stru_87F5F0.__pad_58[416]); /*0x6e1513*/
  return 1; /*0x6e1518*/
}



// ==== 0x006E1530  ScenarioClass::PrepareTextDisplay  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::PrepareTextDisplay(ScenarioClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  void **p_vtable3; // ecx
  AbstractClass *v7; // eax
  void *v9; // [esp+4h] [ebp-28h]
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF

  v5 = this->nextScenario[36]; /*0x6e1530*/
  p_vtable3 = &dword_A8B230[127].vtable3; /*0x6e1542*/
  dword_A8B230[127].vtable3 = *(void **)&stru_A8EB00.?[416]; /*0x6e154e*/
  p_vtable3[1] = v9; /*0x6e1557*/
  p_vtable3[2] = (void *)(15 * v5); /*0x6e155a*/
  v7 = dword_A8B230; /*0x6e155d*/
  if ( dword_A8B230[127].vtable3 == (void *)-1 ) /*0x6e1569*/
  {
    dword_A8B230[127].vtable3 = *(void **)&stru_A8EB00.?[416]; /*0x6e1571*/
    v7 = dword_A8B230; /*0x6e1577*/
  }
  v7[127].nextArrayIndex = (int)&g_TypeClass_DefaultString; /*0x6e1581*/
  if ( &g_INI_DefaultBuffer ) /*0x6e158d*/
  {
    strncpy(Destination, &g_INI_DefaultBuffer, 0x1Fu); /*0x6e15a1*/
    Destination[31] = 0; /*0x6e15a9*/
  }
  else
  {
    Destination[0] = (unsigned __int8)&g_INI_DefaultBuffer; /*0x6e158f*/
  }
  if ( Destination != (char *)&dword_A8B230[127].referenceCount ) /*0x6e15c1*/
    qmemcpy(&dword_A8B230[127].referenceCount, Destination, 0x20u); /*0x6e15cd*/
  ObjectClass::PreDraw((ObjectClass *)&stru_87F5F0.__pad_58[416]); /*0x6e15d5*/
  return 1; /*0x6e15dd*/
}



// ==== 0x006E15F0  ObjectClass::ReadINIEntry  this=ObjectClass  sig=csp ====
char __thiscall ObjectClass::ReadINIEntry(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  wchar_t *v5; // esi
  int *p_referenceCount; // edi
  char *v7; // esi
  char Destination[32]; // [esp+Ch] [ebp-40h] BYREF
  char v10[32]; // [esp+2Ch] [ebp-20h] BYREF

  v5 = (wchar_t *)((char *)&this->health + 1); /*0x6e15f8*/
  if ( BYTE1(this->health) && this != (ObjectClass *)-109 ) /*0x6e1604*/
  {
    strncpy(Destination, (const char *)&this->health + 1, 0x1Fu); /*0x6e1631*/
    Destination[31] = 0; /*0x6e163d*/
    dword_A8B230[127].nextArrayIndex = (int)GetStringCSF(v5, 0, g_Str_File_TAction_CPP, 2242); /*0x6e1656*/
    p_referenceCount = &dword_A8B230[127].referenceCount; /*0x6e1666*/
    if ( Destination != (char *)&dword_A8B230[127].referenceCount ) /*0x6e166e*/
    {
      v7 = Destination; /*0x6e1675*/
LABEL_10:
      qmemcpy(p_referenceCount, v7, 0x20u); /*0x6e16b0*/
    }
  }
  else
  {
    Destination[0] = 0; /*0x6e1611*/
    dword_A8B230[127].nextArrayIndex = (int)&g_TypeClass_DefaultString; /*0x6e1617*/
    if ( &g_INI_DefaultBuffer ) /*0x6e1621*/
    {
      strncpy(v10, &g_INI_DefaultBuffer, 0x1Fu); /*0x6e1687*/
      v10[31] = 0; /*0x6e168f*/
    }
    else
    {
      v10[0] = 0; /*0x6e1623*/
    }
    p_referenceCount = &dword_A8B230[127].referenceCount; /*0x6e169d*/
    if ( v10 != (char *)&dword_A8B230[127].referenceCount ) /*0x6e16a5*/
    {
      v7 = v10; /*0x6e16ac*/
      goto LABEL_10; /*0x6e16ac*/
    }
  }
  ObjectClass::PreDraw((ObjectClass *)&stru_87F5F0.__pad_58[416]); /*0x6e16b2*/
  return 1; /*0x6e16bc*/
}



// ==== 0x006E1780  TActionClass::PlayAudioAtRandomWP  this=TActionClass  sig=csp ====
char __thiscall TActionClass::PlayAudioAtRandomWP(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v7; // edi
  _DWORD *v8; // ebx
  __int16 *v9; // ecx
  int v10; // eax
  int v11; // ecx
  _DWORD v13[3]; // [esp+10h] [ebp-1A0h] BYREF
  int v14; // [esp+1Ch] [ebp-194h] BYREF
  _DWORD v15[100]; // [esp+20h] [ebp-190h] BYREF

  v5 = 0; /*0x6e178a*/
  v7 = 0; /*0x6e178e*/
  v8 = v15; /*0x6e1790*/
  do /*0x6e17cc*/
  {
    if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, v7) ) /*0x6e179b*/
    {
      ++v5; /*0x6e17b7*/
      *v8++ = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v14, v7); /*0x6e17b8*/
      if ( v5 == 400 ) /*0x6e17c3*/
        break; /*0x6e17c3*/
    }
    ++v7; /*0x6e17c5*/
  }
  while ( v7 < 702 ); /*0x6e17cc*/
  v9 = (__int16 *)&v15[Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v5 - 1)]; /*0x6e17e3*/
  v10 = (v9[1] << 8) + 128; /*0x6e1800*/
  v13[0] = (*v9 << 8) + 128; /*0x6e1805*/
  v11 = *(_DWORD *)&this->pad_6E[34]; /*0x6e1809*/
  v13[1] = v10; /*0x6e180f*/
  v13[2] = 0; /*0x6e1813*/
  PlayAudioAt2(v11, v13, 0); /*0x6e181b*/
  return 1; /*0x6e1820*/
}



// ==== 0x006E1830  ScriptAction::ReadParameter  this=ScriptAction  sig=csp ====
_DWORD *__thiscall ScriptAction::ReadParameter(ScriptAction *this)
{
  int v1; // esi
  int v2; // eax
  Cell *v3; // esi
  _DWORD *result; // eax
  __int16 v5[2]; // [esp+4h] [ebp-4h] BYREF

  v1 = *(_DWORD *)this->__pad_0 / 256; /*0x6e184b*/
  v2 = this->ScriptAction_field_0x4[0] / 256; /*0x6e184e*/
  v5[0] = v1; /*0x6e1851*/
  v5[1] = v2; /*0x6e1856*/
  if ( (_WORD)v1 == *(_WORD *)dword_B0E680 && (_WORD)v2 == *(_WORD *)&dword_B0E680[2] ) /*0x6e1875*/
    return 0; /*0x6e189e*/
  v3 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v5); /*0x6e1886*/
  result = Cell::IsBridge(v3); /*0x6e188a*/
  if ( !result ) /*0x6e1891*/
    return CellClass::FindInfantry((CellClass *)v3, 0); /*0x6e1896*/
  return result; /*0x6e189b*/
}



// ==== 0x006E18B0  CellClass::Find  this=CellClass  sig=csp ====
char __thiscall CellClass::Find(CellClass *this, int a2, int a3, int a4, int a5)
{
  int *WorldCoords; // eax
  Cell *v7; // edi
  ObjectClass *Infantry; // eax
  __int16 v10[2]; // [esp+8h] [ebp-1Ch] BYREF
  int v11; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h]
  int v13; // [esp+14h] [ebp-10h]
  _DWORD v14[3]; // [esp+18h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, v14, *(_DWORD *)&this->__pad_28[28]); /*0x6e18c6*/
  v11 = *WorldCoords; /*0x6e18cf*/
  v12 = WorldCoords[1]; /*0x6e18d6*/
  v13 = WorldCoords[2]; /*0x6e18e4*/
  v10[0] = v11 / 256; /*0x6e1904*/
  v10[1] = v12 / 256; /*0x6e1909*/
  if ( v10[0] == *(_WORD *)dword_B0E680 && (unsigned __int16)(v12 / 256) == *(_WORD *)&dword_B0E680[2] /*0x6e1947*/
    || (v7 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10),
        (Infantry = (ObjectClass *)Cell::IsBridge(v7)) == 0)
    && (Infantry = (ObjectClass *)CellClass::FindInfantry((CellClass *)v7, 0)) == 0 )
  {
    PlayAudioAt2(this->sensorsOfHouses[5], &v11, 1); /*0x6e196d*/
    return 1; /*0x6e1973*/
  }
  else
  {
    ObjectClass::CheckFlagD0(Infantry, this->sensorsOfHouses[5]); /*0x6e1952*/
    return 1; /*0x6e1958*/
  }
}



// ==== 0x006E1980  TActionClass::executeGuardAreaAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeGuardAreaAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int *WorldCoords; // eax
  Cell *v6; // esi
  ObjectClass *Infantry; // eax
  __int16 v9[2]; // [esp+4h] [ebp-1Ch] BYREF
  int v10; // [esp+8h] [ebp-18h] BYREF
  int v11; // [esp+Ch] [ebp-14h]
  int v12; // [esp+10h] [ebp-10h]
  _DWORD v13[3]; // [esp+14h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, v13, (int)this->TActionClass_field_44); /*0x6e1993*/
  v10 = *WorldCoords; /*0x6e199c*/
  v11 = WorldCoords[1]; /*0x6e19a3*/
  v12 = WorldCoords[2]; /*0x6e19b1*/
  v9[0] = v10 / 256; /*0x6e19d1*/
  v9[1] = v11 / 256; /*0x6e19d6*/
  if ( v9[0] == *(_WORD *)dword_B0E680 && (unsigned __int16)(v11 / 256) == *(_WORD *)&dword_B0E680[2] /*0x6e1a14*/
    || (v6 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9),
        (Infantry = (ObjectClass *)Cell::IsBridge(v6)) == 0)
    && (Infantry = (ObjectClass *)CellClass::FindInfantry((CellClass *)v6, 0)) == 0 )
  {
    globalHelper_050F40(&v10, 1); /*0x6e1a31*/
    return 1; /*0x6e1a36*/
  }
  else
  {
    ObjectClass::CheckFlagD0(Infantry, -1); /*0x6e1a1a*/
    return 1; /*0x6e1a1f*/
  }
}



// ==== 0x006E1A40  TActionClass::executePatrolAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executePatrolAction(TActionClass *this, void *a2, int a3, int a4, int a5)
{
  int *Waypoint_Location; // eax
  TActionClass *v7; // [esp+0h] [ebp-4h] BYREF

  v7 = this; /*0x6e1a40*/
  Waypoint_Location = ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v7, (int)this->TActionClass_field_44); /*0x6e1a50*/
  SelectSimilarBuildingTypes((ObjectClass *)a2, *Waypoint_Location); /*0x6e1a5c*/
  return 1; /*0x6e1a64*/
}



// ==== 0x006E1A70  TActionClass::executeScatterAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeScatterAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // kr00_4
  int v8[3]; // [esp+0h] [ebp-14h] BYREF
  __int16 v9[4]; // [esp+Ch] [ebp-8h] BYREF

  if ( dword_A83D4C->__pad_140[256] ) /*0x6e1a78*/
    return 1; /*0x6e1b79*/
  *(_DWORD *)v9 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v8, *(_DWORD *)&this->pad_6E[34]); /*0x6e1aaa*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9) + 80) & 0x100) != 0 /*0x6e1ad6*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9) + 80) & 0x400) != 0 )
  {
    v5 = 4; /*0x6e1adc*/
  }
  else
  {
    v5 = 0; /*0x6e1ad8*/
  }
  v6 = v5 + *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9) + 283); /*0x6e1afc*/
  v8[2] = v6 * dword_B0E6E0; /*0x6e1b36*/
  v8[1] = ((__int16)(v9[1] - v6 / 2) << 8) + 128; /*0x6e1b3d*/
  v8[0] = ((__int16)(v9[0] - v6 / 2) << 8) + 128; /*0x6e1b4c*/
  TActionClass_Helper(v8, *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1580)); /*0x6e1b61*/
  CellSystem::UpdateVisibility((CellSystem *)&stru_87F5F0.__pad_58[416]); /*0x6e1b6b*/
  return 1; /*0x6e1b73*/
}



// ==== 0x006E1BD0  ScenarioClass::UpdateCounters  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::UpdateCounters(ScenarioClass *this, int a2, int a3, int a4, int a5)
{
  int Status; // eax

  SuperClass::StartTimer(*(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * this->nextScenario[36]), 1, 0, 0); /*0x6e1bed*/
  if ( dword_A83D4C == (Object *)a2 ) /*0x6e1bf8*/
  {
    SidebarClass::AddCameo((SidebarClass *)&stru_87F5F0.__pad_58[416], 31, this->nextScenario[36]); /*0x6e1c08*/
    Status = HouseClass::GetStatus((HouseClass *)0x1F, 0); /*0x6e1c1a*/
    Sidebar::ActivateTab((int *)&stru_87F5F0.__pad_58[416], Status); /*0x6e1c25*/
  }
  return 1; /*0x6e1c2a*/
}



// ==== 0x006E1C40  SuperClass::Get  this=SuperClass  sig=csp ====
char __thiscall SuperClass::Get(SuperClass *this, int a2, int a3, int a4, int a5)
{
  int Status; // eax

  SuperClass::StartTimer(*(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * *(_DWORD *)&this->__pad_80[16]), 0, 0, 0); /*0x6e1c5d*/
  *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * *(_DWORD *)&this->__pad_80[16]) + 96) = 0; /*0x6e1c71*/
  if ( dword_A83D4C == (Object *)a2 ) /*0x6e1c7c*/
  {
    SidebarClass::AddCameo((SidebarClass *)&stru_87F5F0.__pad_58[416], 31, *(_DWORD *)&this->__pad_80[16]); /*0x6e1c8c*/
    Status = HouseClass::GetStatus((HouseClass *)0x1F, 0); /*0x6e1c9e*/
    Sidebar::ActivateTab((int *)&stru_87F5F0.__pad_58[416], Status); /*0x6e1ca9*/
  }
  return 1; /*0x6e1cae*/
}



// ==== 0x006E1CC0  TActionClass::executeRetreatAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeRetreatAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  AnimClass *v5; // eax
  __int16 v7[2]; // [esp+0h] [ebp-14h] BYREF
  int v8; // [esp+4h] [ebp-10h] BYREF
  int v9[2]; // [esp+8h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+10h] [ebp-4h]

  *(_DWORD *)v7 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v8, (int)this->TActionClass_field_44); /*0x6e1cdb*/
  GroundHeight = 0; /*0x6e1cdf*/
  v9[1] = (v7[1] << 8) + 128; /*0x6e1d00*/
  v9[0] = (v7[0] << 8) + 128; /*0x6e1d0a*/
  GroundHeight = Cell::GetGroundHeight(v9); /*0x6e1d13*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7) + 80) & 0x100) != 0 /*0x6e1d49*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e1d57*/
  }
  v5 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6e1d60*/
  if ( v5 ) /*0x6e1d6a*/
    *((_BYTE *)AnimClass::ctor( /*0x6e1d92*/
                 v5,
                 *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5244),
                 v9,
                 0,
                 1,
                 (void *)0x600,
                 0,
                 0)
    + 408) = 1;
  else
    MEMORY[0x198] = 1; /*0x6e1da3*/
  return 1; /*0x6e1d9b*/
}



// ==== 0x006E2050  globalHelper_0E2050  this=-  sig=csp ====
char __stdcall sub_6E2050(int a1, int a2, int a3, __int16 *a4)
{
  int v4; // ebp
  char v5; // bl
  int v6; // edi
  int *v7; // esi
  _DWORD *v8; // ecx
  int v9; // edx
  __int16 *v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // eax
  char v15; // [esp+1Dh] [ebp-15h]
  int v16[2]; // [esp+1Eh] [ebp-14h] BYREF
  _DWORD v17[3]; // [esp+26h] [ebp-Ch] BYREF

  v4 = a3; /*0x6e2055*/
  v15 = 0; /*0x6e205b*/
  do /*0x6e20ec*/
  {
    v5 = 0; /*0x6e2065*/
    v6 = 0; /*0x6e2067*/
    if ( dword_A8EC88 <= 0 ) /*0x6e206b*/
      break; /*0x6e206b*/
    do /*0x6e20e8*/
    {
      v7 = (int *)*((_DWORD *)dword_A8EC7C + v6); /*0x6e2076*/
      if ( v7[27] > 0 ) /*0x6e207e*/
      {
        if ( *((_BYTE *)v7 + 144) ) /*0x6e2080*/
        {
          if ( *((_BYTE *)v7 + 116) ) /*0x6e208a*/
          {
            if ( !*((_BYTE *)v7 + 129) ) /*0x6e2091*/
            {
              v8 = (_DWORD *)v7[13]; /*0x6e209b*/
              if ( v8 ) /*0x6e20a0*/
              {
                if ( LinkedList::Contains(v8, v4) ) /*0x6e20a3*/
                {
                  v9 = *v7; /*0x6e20b4*/
                  a3 = v7[27]; /*0x6e20b8*/
                  (*(void (__thiscall **)(int *, int *, _DWORD, int, _DWORD, int, _DWORD, _DWORD))(v9 + 364))( /*0x6e20d2*/
                    v7,
                    &a3,
                    0,
                    dword_8871E0->?[5],
                    0,
                    1,
                    0,
                    0);
                  v15 = 1; /*0x6e20d8*/
                  v5 = 1; /*0x6e20dd*/
                  --v6; /*0x6e20df*/
                }
              }
            }
          }
        }
      }
      ++v6; /*0x6e20e5*/
    }
    while ( v6 < dword_A8EC88 ); /*0x6e20e8*/
  }
  while ( v5 ); /*0x6e20ec*/
  v10 = a4; /*0x6e20f2*/
  if ( *(_DWORD *)a4 != dword_B0E680 ) /*0x6e2100*/
  {
    v11 = 3; /*0x6e2119*/
    if ( !CellClass::SetTerrainType(&dword_87F7E8, a4) ) /*0x6e211e*/
    {
      do /*0x6e213b*/
        v12 = v11--; /*0x6e2127*/
      while ( v12 > 0 && !CellClass::SetTerrainType(&dword_87F7E8, v10) ); /*0x6e213b*/
    }
    v13 = *v10 << 8; /*0x6e2147*/
    v17[1] = (v10[1] << 8) + 128; /*0x6e2157*/
    v17[0] = v13 + 128; /*0x6e2165*/
    v17[2] = dword_B0E6D4; /*0x6e2171*/
    Coord::To_Screen(g_TacticalClass_Instance, v17, v16); /*0x6e217d*/
    Cell::CreateCrater(v16[0] - 128, v16[1] - 128, 256, 256, 0); /*0x6e21af*/
  }
  return v15; /*0x6e21b8*/
}



// ==== 0x006E21D0  sub_6E21D0  this=-  sig=csp ====
char __stdcall sub_6E21D0(int a1, int a2, int a3, int a4)
{
  return 1; /*0x6e21d2*/
}



// ==== 0x006E21E0  TActionClass::executeFollowAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeFollowAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  void **p_TActionClass_field_34; // ecx
  int i; // eax
  int j; // esi

  p_TActionClass_field_34 = &this->TActionClass_field_34; /*0x6e21e0*/
  *(_DWORD *)&stru_87F5F0.__pad_58[668] = *p_TActionClass_field_34; /*0x6e21e5*/
  *(_DWORD *)&stru_87F5F0.__pad_58[672] = p_TActionClass_field_34[1]; /*0x6e21ed*/
  *(_DWORD *)&stru_87F5F0.__pad_58[676] = p_TActionClass_field_34[2]; /*0x6e21f6*/
  *(_DWORD *)&stru_87F5F0.__pad_58[680] = p_TActionClass_field_34[3]; /*0x6e21fe*/
  RadarClass::Process((RadarClass *)&stru_87F5F0.__pad_58[416]); /*0x6e2209*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6e2213*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6e2224*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    House::AnnounceUpgrade(i, -1); /*0x6e222a*/
  }
  Terrain::ConnectivityGraph((Terrain *)&stru_87F5F0.__pad_58[416]); /*0x6e2243*/
  MapClass::BuildSubzones((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x6e224d*/
  FogOfWar::Render((FogOfWar *)&stru_87F5F0.__pad_58[416]); /*0x6e2257*/
  for ( j = stru_A8EB00.ObjectTypeClass[20] - 1; j >= 0; --j ) /*0x6e2267*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(stru_A8EB00.ObjectTypeClass[17] + 4 * j) + 1184))( /*0x6e2275*/
      *(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * j),
      1);
  return 1; /*0x6e2281*/
}



// ==== 0x006E2290  TActionClass::executeEscortAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeEscortAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  AnimClass *v6; // eax
  __int16 v8[2]; // [esp+4h] [ebp-14h] BYREF
  int v9; // [esp+8h] [ebp-10h] BYREF
  int v10[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  *(_DWORD *)v8 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v9, (int)this->TActionClass_field_44); /*0x6e22ae*/
  GroundHeight = 0; /*0x6e22b2*/
  v10[1] = (v8[1] << 8) + 128; /*0x6e22d3*/
  v10[0] = (v8[0] << 8) + 128; /*0x6e22dd*/
  GroundHeight = Cell::GetGroundHeight(v10); /*0x6e22e6*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 80) & 0x100) != 0 /*0x6e231c*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e232a*/
  }
  v6 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6e2333*/
  if ( v6 ) /*0x6e233d*/
    *((_BYTE *)AnimClass::ctor( /*0x6e2368*/
                 v6,
                 *(void **)(FootClass_Array.?[3] + 4 * *(_DWORD *)&this->pad_6E[34]),
                 v10,
                 0,
                 1,
                 (void *)0x600,
                 0,
                 0)
    + 408) = 1;
  else
    MEMORY[0x198] = 1; /*0x6e237b*/
  return 1; /*0x6e2371*/
}



// ==== 0x006E2390  TActionClass::CreateWeaponImpactAtWaypoint  this=TActionClass  sig=csp ====
char __thiscall TActionClass::CreateWeaponImpactAtWaypoint(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // esi
  int v8; // ebx
  CellClass *v9; // eax
  void *WarheadVersusMultiplier; // esi
  AnimClass *v11; // ebp
  void *v12; // eax
  __int16 v14[2]; // [esp+10h] [ebp-14h] BYREF
  int v15; // [esp+14h] [ebp-10h] BYREF
  int v16; // [esp+18h] [ebp-Ch] BYREF
  int v17; // [esp+1Ch] [ebp-8h]
  int GroundHeight; // [esp+20h] [ebp-4h]

  *(_DWORD *)v14 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v15, (int)this->TActionClass_field_44); /*0x6e23b1*/
  GroundHeight = 0; /*0x6e23b5*/
  v17 = (v14[1] << 8) + 128; /*0x6e23d6*/
  v16 = (v14[0] << 8) + 128; /*0x6e23e0*/
  GroundHeight = Cell::GetGroundHeight(&v16); /*0x6e23e9*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14) + 80) & 0x100) != 0 /*0x6e241f*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e242d*/
  }
  v6 = *(_DWORD *)&this->pad_6E[34]; /*0x6e2431*/
  v7 = *((_DWORD *)g_WeaponTypeConfig + v6); /*0x6e2440*/
  v8 = *(_DWORD *)(v7 + 164); /*0x6e2449*/
  v9 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v16); /*0x6e244f*/
  WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier(v8, *(_DWORD *)(v7 + 172), v9->landType, &v16); /*0x6e246d*/
  if ( WarheadVersusMultiplier ) /*0x6e2471*/
  {
    v11 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6e247d*/
    if ( v11 ) /*0x6e2484*/
    {
      v12 = (void *)Return::HRESULT_Fail(v16, v17, GroundHeight); /*0x6e24a1*/
      AnimClass::ctor(v11, WarheadVersusMultiplier, &v16, 0, 1, (void *)0x2600, v12, 0); /*0x6e24b8*/
    }
  }
  CreateSmokeEffectAt(v8, *(_DWORD *)(*((_DWORD *)g_WeaponTypeConfig + v6) + 172), v16, v17, GroundHeight, 0, 0); /*0x6e24ea*/
  PlaySoundEffectAt(&v16, v8, 0, *(_DWORD *)(*((_DWORD *)g_WeaponTypeConfig + v6) + 172), 1, 0); /*0x6e250b*/
  return 1; /*0x6e2510*/
}



// ==== 0x006E2520  TActionClass::executeLoadAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeLoadAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  #374 *v6; // eax
  __int16 v8[2]; // [esp+4h] [ebp-14h] BYREF
  int v9; // [esp+8h] [ebp-10h] BYREF
  int v10[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  *(_DWORD *)v8 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v9, (int)this->TActionClass_field_44); /*0x6e253e*/
  GroundHeight = 0; /*0x6e2542*/
  v10[1] = (v8[1] << 8) + 128; /*0x6e2563*/
  v10[0] = (v8[0] << 8) + 128; /*0x6e256d*/
  GroundHeight = Cell::GetGroundHeight(v10); /*0x6e2576*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 80) & 0x100) != 0 /*0x6e25ac*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e25ba*/
  }
  v6 = (#374 *)__2_YAPAXI_Z(0x148u); /*0x6e25c3*/
  if ( v6 ) /*0x6e25cd*/
    DamageAnimClass::Constructor( /*0x6e25e8*/
      v6,
      *(_DWORD *)(stru_A8EB00.ObjectTypeClass[11] + 4 * *(_DWORD *)&this->pad_6E[34]),
      v10,
      0);
  return 1; /*0x6e25ef*/
}



// ==== 0x006E2660  SmallFunc_6E2660  this=-  sig=csp ====
char __stdcall SmallFunc_6E2660(int a1, int a2, int a3, int a4)
{
  Scenario *v5; // [esp+0h] [ebp-4h]

  *(_DWORD *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x6e2669*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x6e266f*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1426] = -1; /*0x6e2675*/
  Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x6e267f*/
  BuildingClass::TogglePower2((BuildingClass *)&stru_87F5F0.__pad_58[416], 0); /*0x6e268a*/
  BuildingClass::TogglePower((BuildingClass *)&stru_87F5F0.__pad_58[416], 0); /*0x6e2695*/
  stru_87F5F0.__pad_E12[1432] = 0; /*0x6e269a*/
  stru_87F5F0.__pad_E12[1433] = 0; /*0x6e26a0*/
  stru_87F5F0.__pad_E12[1434] = 0; /*0x6e26a6*/
  Scenario::ClearScreen(v5); /*0x6e26ac*/
  return 1; /*0x6e26b3*/
}



// ==== 0x006E26D0  ScenarioClass::Set  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::Set(ScenarioClass *this, int a2, int a3, int a4, int a5)
{
  __int16 v7[2]; // [esp+4h] [ebp-14h] BYREF
  int v8; // [esp+8h] [ebp-10h] BYREF
  _DWORD v9[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  *(_DWORD *)v7 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v8, this->nextScenario[17]); /*0x6e26ee*/
  GroundHeight = 0; /*0x6e26f2*/
  v9[1] = (v7[1] << 8) + 128; /*0x6e2713*/
  v9[0] = (v7[0] << 8) + 128; /*0x6e271d*/
  GroundHeight = Cell::GetGroundHeight(v9); /*0x6e2726*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7) + 80) & 0x100) != 0 /*0x6e275c*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e276a*/
  }
  TacticalClass::SetPosition((TacticalClass *)g_TacticalClass_Instance, v9, this->nextScenario[36]); /*0x6e2780*/
  return 1; /*0x6e2787*/
}



// ==== 0x006E2790  ObjectClass::method_6E2790  this=ObjectClass  sig=csp ====
char __thiscall sub_6E2790(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  __int16 v6[2]; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+4h] [ebp-10h] BYREF
  int v8[2]; // [esp+8h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+10h] [ebp-4h]

  *(_DWORD *)v6 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v7, this->ambientSoundController[2]); /*0x6e27ab*/
  GroundHeight = 0; /*0x6e27af*/
  v8[1] = (v6[1] << 8) + 128; /*0x6e27d0*/
  v8[0] = (v6[0] << 8) + 128; /*0x6e27da*/
  GroundHeight = Cell::GetGroundHeight(v8); /*0x6e27e3*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v6) + 80) & 0x100) != 0 /*0x6e2819*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v6) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e2827*/
  }
  Tactical::SetTacticalPosition((TacticalClass *)g_TacticalClass_Instance, v8); /*0x6e2836*/
  return 1; /*0x6e283d*/
}



// ==== 0x006E2970  BuildingLightClass::FindAllTargets  this=BuildingLightClass  sig=csp ====
char __thiscall BuildingLightClass::FindAllTargets(BuildingLightClass *this, int a2, int a3, int a4, int a5)
{
  char v5; // bl
  int v6; // edi
  int v8; // esi
  LinkedList *v9; // ecx

  v5 = 0; /*0x6e2978*/
  v6 = 0; /*0x6e297a*/
  if ( stru_A8EB00.ObjectTypeClass[20] <= 0 ) /*0x6e2980*/
    return 0; /*0x6e2a08*/
  do /*0x6e29fc*/
  {
    v8 = *(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * v6); /*0x6e298c*/
    if ( *(int *)(v8 + 108) > 0 ) /*0x6e2994*/
    {
      if ( *(_BYTE *)(v8 + 144) ) /*0x6e2996*/
      {
        if ( *(_BYTE *)(v8 + 116) ) /*0x6e29a0*/
        {
          if ( !*(_BYTE *)(v8 + 129) ) /*0x6e29a7*/
          {
            if ( *(_BYTE *)(*(_DWORD *)(v8 + 1312) + 5451) ) /*0x6e29b7*/
            {
              if ( *(_DWORD *)(v8 + 1536) ) /*0x6e29c1*/
              {
                v9 = *(LinkedList **)(v8 + 52); /*0x6e29cb*/
                if ( v9 ) /*0x6e29d0*/
                {
                  if ( (unsigned __int8)LinkedList::Contains(v9, a4) ) /*0x6e29d7*/
                  {
                    BuildingLightClass::FindTarget(*(BuildingLightClass **)(v8 + 1536), *(_DWORD **)&this->?); /*0x6e29ed*/
                    v5 = 1; /*0x6e29f2*/
                  }
                }
              }
            }
          }
        }
      }
    }
    ++v6; /*0x6e29f9*/
  }
  while ( v6 < stru_A8EB00.ObjectTypeClass[20] ); /*0x6e29fc*/
  return v5; /*0x6e29ff*/
}



// ==== 0x006E2A50  ObjectClass::method_6E2A50  this=ObjectClass  sig=csp ====
char __thiscall sub_6E2A50(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // esi
  _DWORD *v8; // eax
  int v9; // ecx

  if ( this->ambientSoundController[4] ) /*0x6e2a55*/
  {
    v6 = g_GameObjectCleanup; /*0x6e2a5c*/
    v7 = 0; /*0x6e2a62*/
    if ( g_GameObjectCleanup > 0 ) /*0x6e2a66*/
    {
      v8 = g_TagClassCount; /*0x6e2a68*/
      do /*0x6e2a91*/
      {
        if ( *(_DWORD *)(v8[v7] + 36) == this->ambientSoundController[4] ) /*0x6e2a78*/
        {
          v9 = v8[v7]; /*0x6e2a7a*/
          if ( v9 ) /*0x6e2a7f*/
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 32))(v9, 1); /*0x6e2a85*/
            v8 = g_TagClassCount; /*0x6e2a88*/
          }
          --v7; /*0x6e2a8d*/
        }
        ++v7; /*0x6e2a8e*/
      }
      while ( v7 < v6 ); /*0x6e2a91*/
    }
  }
  return 1; /*0x6e2a93*/
}



// ==== 0x006E2AF0  TActionClass::executeUnloadAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeUnloadAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v6; // esi
  TActionClass *v7; // ecx
  _BYTE *idxArray; // eax
  void *vtable0; // edx

  if ( !this->TActionClass_field_50 ) /*0x6e2af4*/
    return 1; /*0x6e2af4*/
  v6 = 0; /*0x6e2b00*/
  if ( dword_A8EAF8 <= 0 ) /*0x6e2b04*/
    return 1; /*0x6e2b69*/
  do /*0x6e2b5e*/
  {
    v7 = (TActionClass *)*((_DWORD *)dword_A8EAEC + v6); /*0x6e2b0f*/
    idxArray = (_BYTE *)v7->idxArray; /*0x6e2b12*/
    if ( idxArray == this->TActionClass_field_50 ) /*0x6e2b17*/
    {
      vtable0 = dword_A8B230[43].vtable0; /*0x6e2b1f*/
      if ( (vtable0 || idxArray[156]) /*0x6e2b47*/
        && (vtable0 != (void *)1 || idxArray[157])
        && (vtable0 != (void *)2 || idxArray[158]) )
      {
        TActionClass::executeAirstrikeAction(v7); /*0x6e2b51*/
      }
    }
    ++v6; /*0x6e2b5b*/
  }
  while ( v6 < dword_A8EAF8 ); /*0x6e2b5e*/
  return 1; /*0x6e2b61*/
}



// ==== 0x006E2C20  globalHelper_0E2C20  this=-  sig=csp ====
char __stdcall sub_6E2C20(int a1, int a2, int a3, int a4)
{
  LayerClass::ClearFactoryCellAssignments(&dword_87F7E8); /*0x6e2c25*/
  MapClass::MarkForRedraw(&dword_87F7E8, 1); /*0x6e2c31*/
  return 1; /*0x6e2c38*/
}



// ==== 0x006E2C40  TActionClass::SpawnMeteorShower  this=TActionClass  sig=csp ====
char __thiscall TActionClass::SpawnMeteorShower(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v6; // esi
  int String; // ebp
  int v8; // edi
  Random *p_NeedsSaveOrLink; // esi
  int v10; // ebx
  int v11; // eax
  AnimClass *v12; // esi
  bool v13; // zf
  signed int v14; // eax
  int v15; // eax
  __int16 v17[2]; // [esp+Ch] [ebp-24h] BYREF
  int v18; // [esp+10h] [ebp-20h]
  int v19; // [esp+14h] [ebp-1Ch] BYREF
  int v20; // [esp+18h] [ebp-18h] BYREF
  int v21; // [esp+1Ch] [ebp-14h]
  int GroundHeight; // [esp+20h] [ebp-10h]
  int v23[2]; // [esp+24h] [ebp-Ch] BYREF
  int v24; // [esp+2Ch] [ebp-4h]

  *(_DWORD *)v17 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v19, (int)this->TActionClass_field_44); /*0x6e2c60*/
  GroundHeight = 0; /*0x6e2c64*/
  v21 = (v17[1] << 8) + 128; /*0x6e2c85*/
  v20 = (v17[0] << 8) + 128; /*0x6e2c8f*/
  GroundHeight = Cell::GetGroundHeight(&v20); /*0x6e2c98*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17) + 80) & 0x100) != 0 /*0x6e2cce*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e2cdc*/
  }
  v6 = dword_842AFC[*(_DWORD *)&this->pad_6E[34]] /*0x6e2d0a*/
     + (int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) % 3;
  String = GlobalArray::FindString(&stru_842C20); /*0x6e2d1b*/
  v19 = GlobalArray::FindString(&stru_842C14); /*0x6e2d22*/
  v8 = 70 * v6; /*0x6e2d32*/
  if ( v6 <= 0 ) /*0x6e2d36*/
    return 1; /*0x6e2e0e*/
  v18 = v6; /*0x6e2d3d*/
  do /*0x6e2dfa*/
  {
    p_NeedsSaveOrLink = (Random *)&dword_A8B230[14].NeedsSaveOrLink; /*0x6e2d46*/
    v10 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % v8; /*0x6e2d58*/
    v11 = Random::State(p_NeedsSaveOrLink); /*0x6e2d5a*/
    v23[0] = v10 + v20; /*0x6e2d6d*/
    v24 = GroundHeight; /*0x6e2d77*/
    v23[1] = v11 % v8 + v21; /*0x6e2d7f*/
    v24 = Cell::GetGroundHeight(v23); /*0x6e2d93*/
    v12 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6e2d9c*/
    if ( v12 ) /*0x6e2da3*/
    {
      v14 = abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) & 0x80000001; /*0x6e2dba*/
      v13 = v14 == 0; /*0x6e2dba*/
      if ( v14 < 0 ) /*0x6e2dbf*/
        v13 = (((_BYTE)v14 - 1) | 0xFFFFFFFE) == -1; /*0x6e2dc5*/
      v15 = String; /*0x6e2dc6*/
      if ( v13 ) /*0x6e2dc8*/
        v15 = v19; /*0x6e2dca*/
      AnimClass::ctor(v12, *(void **)(FootClass_Array.?[3] + 4 * v15), v23, 0, 1, (void *)0x600, 0, 0); /*0x6e2dec*/
    }
    --v18; /*0x6e2df6*/
  }
  while ( v18 ); /*0x6e2dfa*/
  return 1; /*0x6e2e01*/
}



// ==== 0x006E2E60  TActionClass::executeSelfDestructAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeSelfDestructAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  UpdateSurfaceAnimations( /*0x6e2e8d*/
    10 * *(_DWORD *)&this->pad_6E[34],
    10 * dword_A8B230[378].uniqueId,
    10 * dword_A8B230[378].abstractFlags,
    0);
  dword_A8B230[378].vtable3 = *(void **)&this->pad_6E[34]; /*0x6e2ea1*/
  return 1; /*0x6e2ea0*/
}



// ==== 0x006E2EB0  TActionClass::executeExplodeAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeExplodeAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  UpdateSurfaceAnimations( /*0x6e2edd*/
    10 * (int)dword_A8B230[378].vtable3,
    10 * *(_DWORD *)&this->pad_6E[34],
    10 * dword_A8B230[378].abstractFlags,
    0);
  dword_A8B230[378].uniqueId = *(_DWORD *)&this->pad_6E[34]; /*0x6e2ef1*/
  return 1; /*0x6e2ef0*/
}



// ==== 0x006E2F00  TActionClass::executeChronoshiftAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeChronoshiftAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  UpdateSurfaceAnimations( /*0x6e2f2d*/
    10 * (int)dword_A8B230[378].vtable3,
    10 * dword_A8B230[378].uniqueId,
    10 * *(_DWORD *)&this->pad_6E[34],
    0);
  dword_A8B230[378].abstractFlags = *(_DWORD *)&this->pad_6E[34]; /*0x6e2f41*/
  return 1; /*0x6e2f40*/
}



// ==== 0x006E30C0  ObjectClass::CreateHouseClass  this=ObjectClass  sig=csp ====
char __userpurge CreateHouseClass@<al>(
        int a1@<ecx>,
        _UNKNOWN **a2@<ebp>,
        _DWORD *a3@<edi>,
        int a4,
        int a5,
        Property *a6,
        int a7)
{
  HouseClass *v7; // esi
  int Field11; // eax
  HouseClass *v10; // [esp+0h] [ebp-4h]

  v7 = *(HouseClass **)(a1 + 144); /*0x6e30c1*/
  if ( !a6 ) /*0x6e30cd*/
    return 0; /*0x6e30cd*/
  if ( v7 == (HouseClass *)8997 ) /*0x6e30d5*/
  {
    Field11 = Property::GetField11(a6); /*0x6e30d7*/
  }
  else
  {
    if ( v7 == (HouseClass *)-1 ) /*0x6e30e1*/
      return 0; /*0x6e3103*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v7) ) /*0x6e30e5*/
      Field11 = BuildingType::FindOwnerHouse(v7); /*0x6e30f0*/
    else
      Field11 = HouseClass::FindOwner(v7); /*0x6e30f7*/
  }
  if ( !Field11 ) /*0x6e30fe*/
    return 0; /*0x6e30fe*/
  HouseClass::RespawnStartingForces(v10, a2, a3, (int)v7); /*0x6e3108*/
  return 1; /*0x6e3102*/
}



// ==== 0x006E3120  ObjectClass::SmallFunc_6E3120  this=ObjectClass  sig=csp ====
char __userpurge SmallFunc_6E3120@<al>(
        int a1@<ecx>,
        _UNKNOWN **a2@<ebx>,
        _DWORD *a3@<edi>,
        int a4,
        int a5,
        Property *a6,
        int a7)
{
  HouseClass *v7; // esi
  int Field11; // eax
  HouseClass *v10; // [esp+0h] [ebp-4h]

  v7 = *(HouseClass **)(a1 + 144); /*0x6e3121*/
  if ( !a6 ) /*0x6e312d*/
    return 0; /*0x6e312d*/
  if ( v7 == (HouseClass *)8997 ) /*0x6e3135*/
  {
    Field11 = Property::GetField11(a6); /*0x6e3137*/
  }
  else
  {
    if ( v7 == (HouseClass *)-1 ) /*0x6e3141*/
      return 0; /*0x6e3163*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v7) ) /*0x6e3145*/
      Field11 = BuildingType::FindOwnerHouse(v7); /*0x6e3150*/
    else
      Field11 = HouseClass::FindOwner(v7); /*0x6e3157*/
  }
  if ( !Field11 ) /*0x6e315e*/
    return 0; /*0x6e315e*/
  HouseClass::RespawnStartingBuildings(v10, a2, a3, (int)v7); /*0x6e3168*/
  return 1; /*0x6e3162*/
}



// ==== 0x006E3180  TActionClass::executePlaceBeaconAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executePlaceBeaconAction(TActionClass *this, int a2, int a3, _DWORD *a4, int a5)
{
  HouseClass *v5; // esi
  HouseClass *Field11; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e3181*/
  if ( !a4 ) /*0x6e318d*/
    return 0; /*0x6e318d*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e3195*/
  {
    Field11 = (HouseClass *)Property::GetField11((Property *)a4); /*0x6e3197*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e31a1*/
      return 0; /*0x6e31c3*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e31a5*/
      Field11 = (HouseClass *)BuildingType::FindOwnerHouse(v5); /*0x6e31b0*/
    else
      Field11 = (HouseClass *)HouseClass::FindOwner(v5); /*0x6e31b7*/
  }
  if ( !Field11 ) /*0x6e31be*/
    return 0; /*0x6e31be*/
  HouseClass::ClearLowPowerTargets(Field11); /*0x6e31c8*/
  return 1; /*0x6e31c2*/
}



// ==== 0x006E31E0  TActionClass::executeJumpjetAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeJumpjetAction(TActionClass *this, int a2, int a3, _DWORD *a4, int a5)
{
  HouseClass *v5; // esi
  HouseClass *Field11; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e31e1*/
  if ( !a4 ) /*0x6e31ed*/
    return 0; /*0x6e31ed*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e31f5*/
  {
    Field11 = (HouseClass *)Property::GetField11((Property *)a4); /*0x6e31f7*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e3201*/
      return 0; /*0x6e3223*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e3205*/
      Field11 = (HouseClass *)BuildingType::FindOwnerHouse(v5); /*0x6e3210*/
    else
      Field11 = (HouseClass *)HouseClass::FindOwner(v5); /*0x6e3217*/
  }
  if ( !Field11 ) /*0x6e321e*/
    return 0; /*0x6e321e*/
  HouseClass::DestroyAllBuildings(Field11); /*0x6e3228*/
  return 1; /*0x6e3222*/
}



// ==== 0x006E3240  TActionClass::executeOpenGateAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeOpenGateAction(TActionClass *this, int a2, int a3, _DWORD *a4, int a5)
{
  HouseClass *v5; // esi
  HouseClass *Field11; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e3241*/
  if ( !a4 ) /*0x6e324d*/
    return 0; /*0x6e324d*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e3255*/
  {
    Field11 = (HouseClass *)Property::GetField11((Property *)a4); /*0x6e3257*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e3261*/
      return 0; /*0x6e3283*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e3265*/
      Field11 = (HouseClass *)BuildingType::FindOwnerHouse(v5); /*0x6e3270*/
    else
      Field11 = (HouseClass *)HouseClass::FindOwner(v5); /*0x6e3277*/
  }
  if ( !Field11 ) /*0x6e327e*/
    return 0; /*0x6e327e*/
  HouseClass::DestroyAllNonBuildingsNonNaval(Field11); /*0x6e3288*/
  return 1; /*0x6e3282*/
}



// ==== 0x006E32A0  TActionClass::executeCloseGateAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeCloseGateAction(TActionClass *this, int a2, int a3, _DWORD *a4, int a5)
{
  HouseClass *v5; // esi
  HouseClass *Field11; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e32a1*/
  if ( !a4 ) /*0x6e32ad*/
    return 0; /*0x6e32ad*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e32b5*/
  {
    Field11 = (HouseClass *)Property::GetField11((Property *)a4); /*0x6e32b7*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e32c1*/
      return 0; /*0x6e32e3*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e32c5*/
      Field11 = (HouseClass *)BuildingType::FindOwnerHouse(v5); /*0x6e32d0*/
    else
      Field11 = (HouseClass *)HouseClass::FindOwner(v5); /*0x6e32d7*/
  }
  if ( !Field11 ) /*0x6e32de*/
    return 0; /*0x6e32de*/
  HouseClass::DestroyAllNonBuildingsNaval(Field11); /*0x6e32e8*/
  return 1; /*0x6e32e2*/
}



// ==== 0x006E3380  ObjectClass::method_6E3380  this=ObjectClass  sig=csp ====
char __thiscall sub_6E3380(int *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // eax
  int v7; // [esp+0h] [ebp-10h] BYREF
  int v8; // [esp+4h] [ebp-Ch] BYREF
  int v9; // [esp+8h] [ebp-8h]
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v7 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v7, this->q011); /*0x6e339b*/
  GroundHeight = 0; /*0x6e339f*/
  v9 = (SHIWORD(v7) << 8) + 128; /*0x6e33c0*/
  v8 = ((__int16)v7 << 8) + 128; /*0x6e33ca*/
  GroundHeight = Cell::GetGroundHeight(&v8); /*0x6e33d5*/
  v5 = __2_YAPAXI_Z(0x14u); /*0x6e33d9*/
  if ( v5 ) /*0x6e33e3*/
    ActionQueue::PushEntry(v5, v8, v9, GroundHeight); /*0x6e3400*/
  return 1; /*0x6e3407*/
}



// ==== 0x006E3410  TActionClass::CreateNukeEffect  this=TActionClass  sig=csp ====
char __thiscall TActionClass::CreateNukeEffect(TActionClass *this, int a2, int a3, int a4, int a5)
{
  double v5; // st3
  double v6; // st4
  double v7; // st5
  double v8; // st6
  double v9; // st7
  _DWORD *v10; // esi
  int v11; // edi
  CellClass *v12; // eax
  int *UIObjectCOM; // edi
  int v14; // eax
  int v16; // [esp-10h] [ebp-68h]
  int v17; // [esp-Ch] [ebp-64h]
  __int16 v18[2]; // [esp+Ch] [ebp-4Ch] BYREF
  double v19; // [esp+10h] [ebp-48h] BYREF
  double v20; // [esp+18h] [ebp-40h]
  double v21; // [esp+20h] [ebp-38h]
  int v22; // [esp+28h] [ebp-30h] BYREF
  int v23; // [esp+2Ch] [ebp-2Ch]
  int GroundHeight; // [esp+30h] [ebp-28h]
  _DWORD v25[3]; // [esp+34h] [ebp-24h] BYREF
  _QWORD v26[3]; // [esp+40h] [ebp-18h] BYREF

  *(_DWORD *)v18 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v19, (int)this->TActionClass_field_44); /*0x6e3433*/
  GroundHeight = 0; /*0x6e3437*/
  v23 = (v18[1] << 8) + 128; /*0x6e3458*/
  v22 = (v18[0] << 8) + 128; /*0x6e3462*/
  GroundHeight = Cell::GetGroundHeight(&v22); /*0x6e346b*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18) + 80) & 0x100) != 0 ) /*0x6e3487*/
    GroundHeight += dword_B0E6D4; /*0x6e3495*/
  v10 = (_DWORD *)*((_DWORD *)g_WeaponTypeConfig + SuperWeaponClass::FindByName((SuperWeaponClass *)&stru_81AF8C.?)); /*0x6e34ad*/
  v11 = v10[40]; /*0x6e34c3*/
  v17 = v10[43]; /*0x6e34c9*/
  v16 = v10[41]; /*0x6e34ca*/
  v12 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v22); /*0x6e34d3*/
  UIObjectCOM = (int *)CreateUIObjectCOM(v11, (int)v12, 0, v16, v17, 50, 0); /*0x6e34e1*/
  Function::Method_46B260(UIObjectCOM, (int)v10); /*0x6e34e6*/
  v25[0] = v22; /*0x6e34ff*/
  v25[1] = v23; /*0x6e3503*/
  v25[2] = GroundHeight + 20000; /*0x6e3507*/
  if ( !UIObjectCOM ) /*0x6e350b*/
    return 0; /*0x6e35dc*/
  Math::SinCos(1.570748388432313); /*0x6e351b*/
  v19 = v5; /*0x6e3520*/
  Math::ArcTan2(1.570748388432313); /*0x6e352e*/
  v19 = v6 * v19 * -100.0; /*0x6e3547*/
  Math::ArcTan2(1.570748388432313); /*0x6e354b*/
  v20 = v7; /*0x6e3550*/
  Math::ArcTan2(1.570748388432313); /*0x6e355e*/
  v21 = v19; /*0x6e356f*/
  *(double *)&v26[1] = v19; /*0x6e358b*/
  v20 = v8 * v20 * -100.0; /*0x6e358f*/
  *(double *)v26 = v20; /*0x6e359b*/
  Math::SinCos(1.570748388432313); /*0x6e35ab*/
  v14 = *UIObjectCOM; /*0x6e35b6*/
  *(double *)&v26[2] = v9 * -100.0; /*0x6e35c5*/
  (*(void (__thiscall **)(int *, _DWORD *, _QWORD *))(v14 + 496))(UIObjectCOM, v25, v26); /*0x6e35cb*/
  return 1; /*0x6e35d3*/
}



// ==== 0x006E35F0  ObjectClass::method_6E35F0  this=ObjectClass  sig=csp ====
char __thiscall sub_6E35F0(ObjectClass *this, void *a2, int a3, int a4, int a5)
{
  __int16 v6[2]; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+4h] [ebp-10h] BYREF
  int v8; // [esp+8h] [ebp-Ch] BYREF
  int v9; // [esp+Ch] [ebp-8h]
  int GroundHeight; // [esp+10h] [ebp-4h]

  *(_DWORD *)v6 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v7, this->ambientSoundController[2]); /*0x6e360b*/
  GroundHeight = 0; /*0x6e360f*/
  v9 = (v6[1] << 8) + 128; /*0x6e3630*/
  v8 = (v6[0] << 8) + 128; /*0x6e363a*/
  GroundHeight = Cell::GetGroundHeight(&v8); /*0x6e3643*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v6) + 80) & 0x100) != 0 ) /*0x6e365f*/
    GroundHeight += dword_B0E6D4; /*0x6e366d*/
  LOWORD(v7) = v8 / 256; /*0x6e3681*/
  HIWORD(v7) = v9 / 256; /*0x6e3696*/
  if ( (unsigned __int8)LightningStorm::IsActive() ) /*0x6e369b*/
    return 0; /*0x6e36cc*/
  LightningStorm::Start( /*0x6e36bf*/
    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6044),
    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6036),
    v7,
    (#375 *)a2);
  return 1; /*0x6e36c6*/
}



// ==== 0x006E36E0  TActionClass::executeParadropAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeParadropAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  void *v5; // eax
  int *v6; // eax
  int v7; // esi
  int v8; // edi
  int v9; // ebx
  AnimClass *v10; // eax
  char *v11; // edi
  int v12; // ebx
  __int16 v13; // cx
  _DWORD *i; // esi
  __int16 v16[2]; // [esp+Ch] [ebp-18h] BYREF
  int v17; // [esp+10h] [ebp-14h] BYREF
  __int16 v18[2]; // [esp+14h] [ebp-10h] BYREF
  int v19[3]; // [esp+18h] [ebp-Ch] BYREF

  *(_DWORD *)v16 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v17, (int)this->TActionClass_field_44); /*0x6e3706*/
  v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x6e370a*/
  v6 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v5 + 72))(v5, v19); /*0x6e3718*/
  v7 = *v6; /*0x6e371b*/
  v8 = v6[1]; /*0x6e3722*/
  v9 = v6[2]; /*0x6e3725*/
  v10 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6e3728*/
  if ( v10 ) /*0x6e3732*/
  {
    v19[2] = v9 + 5; /*0x6e373b*/
    v19[0] = v7; /*0x6e3752*/
    v19[1] = v8; /*0x6e3756*/
    AnimClass::ctor( /*0x6e3764*/
      v10,
      *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 840),
      v19,
      0,
      1,
      (void *)0x600,
      0,
      0);
  }
  v11 = &g_MissionQueueFrame.waypoints[2150]; /*0x6e3772*/
  v12 = 9; /*0x6e3777*/
  do /*0x6e37da*/
  {
    v13 = *((_WORD *)v11 + 1); /*0x6e377e*/
    LOWORD(v17) = *(_WORD *)v11 + v16[0]; /*0x6e378a*/
    HIWORD(v17) = v16[1] + v13; /*0x6e378f*/
    *(_DWORD *)v18 = v17; /*0x6e37a2*/
    for ( i = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18) + 57); /*0x6e37b3*/
          i;
          i = (_DWORD *)i[12] )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*i + 340))( /*0x6e37c9*/
        i,
        *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4072),
        0,
        0);
    }
    v11 += 4; /*0x6e37d6*/
    --v12; /*0x6e37d9*/
  }
  while ( v12 ); /*0x6e37da*/
  return 1; /*0x6e37dc*/
}



// ==== 0x006E37F0  ObjectClass::method_6E37F0  this=ObjectClass  sig=csp ====
char __thiscall sub_6E37F0(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // ebx
  int v7; // ecx
  char result; // al

  v5 = stru_A8EB00.ObjectTypeClass[4] - 1; /*0x6e37fa*/
  if ( stru_A8EB00.ObjectTypeClass[4] - 1 >= 0 ) /*0x6e3803*/
  {
    v6 = stru_A8EB00.ObjectTypeClass[1] + 4 * v5; /*0x6e380b*/
    while ( strcmp((const char *)(*(_DWORD *)v6 + 36), (const char *)&this->customSound_controller[1]) ) /*0x6e3845*/
    {
      --v5; /*0x6e3847*/
      v6 -= 4; /*0x6e3848*/
      if ( v5 < 0 ) /*0x6e384d*/
        goto LABEL_7; /*0x6e384d*/
    }
    *(_DWORD *)(*(_DWORD *)v6 + 1588) = *(_DWORD *)&this->isAliveFlag; /*0x6e385b*/
  }
LABEL_7:
  v7 = stru_A80220.? - 1; /*0x6e3861*/
  for ( result = 1; v7 >= 0; *(_BYTE *)(*((_DWORD *)stru_A80220.? + v7 + 1) + 508) = 1 ) /*0x6e3870*/
    --v7; /*0x6e3878*/
  return result; /*0x6e3867*/
}



// ==== 0x006E38F0  SuperWeaponClass::CreateChemLauncher  this=SuperWeaponClass  sig=csp ====
char __thiscall SuperWeaponClass::CreateChemLauncher(SuperWeaponClass *this, int a2, int a3, int a4, int a5)
{
  double v5; // st3
  double v6; // st4
  double v7; // st5
  double v8; // st6
  double v9; // st7
  int v10; // edi
  _DWORD *v11; // eax
  int v12; // esi
  CellClass *v13; // eax
  int *UIObjectCOM; // esi
  int v15; // eax
  int v17; // [esp-10h] [ebp-60h]
  int v18; // [esp-Ch] [ebp-5Ch]
  __int16 v19[2]; // [esp+8h] [ebp-48h] BYREF
  __int16 v20[2]; // [esp+Ch] [ebp-44h] BYREF
  double v21; // [esp+10h] [ebp-40h] BYREF
  double v22; // [esp+18h] [ebp-38h] BYREF
  double v23; // [esp+20h] [ebp-30h]
  int v24; // [esp+2Ch] [ebp-24h] BYREF
  int v25; // [esp+30h] [ebp-20h]
  int GroundHeight; // [esp+34h] [ebp-1Ch]
  _QWORD v27[3]; // [esp+38h] [ebp-18h] BYREF

  *(_DWORD *)v19 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v20, *((_DWORD *)this + 17)); /*0x6e3913*/
  GroundHeight = 0; /*0x6e3917*/
  v25 = (v19[1] << 8) + 128; /*0x6e3938*/
  v24 = (v19[0] << 8) + 128; /*0x6e3942*/
  GroundHeight = Cell::GetGroundHeight(&v24); /*0x6e394b*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19) + 80) & 0x100) != 0 ) /*0x6e3967*/
    GroundHeight += dword_B0E6D4; /*0x6e3975*/
  v20[0] = v24 / 256; /*0x6e398f*/
  v20[1] = v25 / 256; /*0x6e39a4*/
  v10 = *JumpjetLocomotionClass::ClampToCellBounds((JumpjetLocomotionClass *)&stru_87F5F0.__pad_58[416], &v21, v20, 0); /*0x6e39c1*/
  *(_DWORD *)v20 = v10; /*0x6e39c8*/
  v11 = (_DWORD *)*((_DWORD *)g_WeaponTypeConfig + SuperWeaponClass::FindByName(&stru_842C2C)); /*0x6e39de*/
  v12 = v11[40]; /*0x6e39ec*/
  v18 = v11[43]; /*0x6e39f2*/
  v17 = v11[41]; /*0x6e39f3*/
  v13 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v24); /*0x6e3a00*/
  UIObjectCOM = (int *)CreateUIObjectCOM(v12, (int)v13, 0, v17, v18, 20, 0); /*0x6e3a0e*/
  if ( !UIObjectCOM ) /*0x6e3a12*/
    return 0; /*0x6e3b0d*/
  Math::ArcTan2(-0.00009587672516830327); /*0x6e3a22*/
  v21 = v5; /*0x6e3a27*/
  Math::SinCos(1.570748388432313); /*0x6e3a35*/
  v21 = v6 * v21 * 100.0; /*0x6e3a4e*/
  Math::ArcTan2(-0.00009587672516830327); /*0x6e3a52*/
  v22 = v7; /*0x6e3a57*/
  Math::ArcTan2(1.570748388432313); /*0x6e3a65*/
  v23 = v21; /*0x6e3a76*/
  *(double *)&v27[1] = v21; /*0x6e3a92*/
  v22 = v8 * v22 * 100.0; /*0x6e3a96*/
  *(double *)v27 = v22; /*0x6e3aa2*/
  Math::SinCos(-0.00009587672516830327); /*0x6e3ab2*/
  *(double *)&v27[2] = v9 * 100.0; /*0x6e3ac5*/
  v15 = *UIObjectCOM; /*0x6e3ac9*/
  LODWORD(v22) = ((__int16)v10 << 8) + 128; /*0x6e3ae0*/
  HIDWORD(v22) = (v20[1] << 8) + 128; /*0x6e3ae4*/
  LODWORD(v23) = 0; /*0x6e3af4*/
  (*(void (__thiscall **)(int *, double *, _QWORD *))(v15 + 496))(UIObjectCOM, &v22, v27); /*0x6e3afc*/
  return 1; /*0x6e3b04*/
}



// ==== 0x006E3B40  TActionClass::executeLightningAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeLightningAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  if ( !a2 ) /*0x6e3b48*/
    return 0; /*0x6e3b4a*/
  HouseClass::CreateRadarOutage(a2, *(_DWORD *)&this->pad_6E[34]); /*0x6e3b56*/
  return 1; /*0x6e3b4c*/
}



// ==== 0x006E3B60  ScriptAction::GetActionTypeInfo  this=ScriptAction  sig=csp ====
int __thiscall ScriptAction::GetActionTypeInfo(ScriptAction *this)
{
  int result; // eax

  switch ( (unsigned int)this ) /*0x6e3b76*/
  {
    case 1u: /*0x6e3b76*/
    case 2u: /*0x6e3b76*/
    case 3u: /*0x6e3b76*/
    case 6u: /*0x6e3b76*/
    case 9u: /*0x6e3b76*/
    case 0xDu: /*0x6e3b76*/
    case 0xEu: /*0x6e3b76*/
    case 0x24u: /*0x6e3b76*/
    case 0x25u: /*0x6e3b76*/
    case 0x26u: /*0x6e3b76*/
    case 0x4Au: /*0x6e3b76*/
    case 0x4Bu: /*0x6e3b76*/
    case 0x71u: /*0x6e3b76*/
    case 0x77u: /*0x6e3b76*/
    case 0x78u: /*0x6e3b76*/
    case 0x79u: /*0x6e3b76*/
    case 0x7Au: /*0x6e3b76*/
    case 0x7Bu: /*0x6e3b76*/
    case 0x7Cu: /*0x6e3b76*/
    case 0x7Eu: /*0x6e3b76*/
    case 0x82u: /*0x6e3b76*/
      result = 13; /*0x6e3b89*/
      break; /*0x6e3b8e*/
    case 4u: /*0x6e3b76*/
    case 5u: /*0x6e3b76*/
    case 7u: /*0x6e3b76*/
    case 0x69u: /*0x6e3b76*/
      result = 12; /*0x6e3b95*/
      break; /*0x6e3b9a*/
    case 8u: /*0x6e3b76*/
    case 0x11u: /*0x6e3b76*/
    case 0x12u: /*0x6e3b76*/
    case 0x3Bu: /*0x6e3b76*/
    case 0x3Fu: /*0x6e3b76*/
    case 0x40u: /*0x6e3b76*/
    case 0x41u: /*0x6e3b76*/
    case 0x42u: /*0x6e3b76*/
    case 0x59u: /*0x6e3b76*/
    case 0x5Au: /*0x6e3b76*/
    case 0x5Eu: /*0x6e3b76*/
    case 0x5Fu: /*0x6e3b76*/
    case 0x60u: /*0x6e3b76*/
    case 0x65u: /*0x6e3b76*/
    case 0x66u: /*0x6e3b76*/
    case 0x6Du: /*0x6e3b76*/
    case 0x70u: /*0x6e3b76*/
    case 0x74u: /*0x6e3b76*/
    case 0x80u: /*0x6e3b76*/
    case 0x87u: /*0x6e3b76*/
    case 0x89u: /*0x6e3b76*/
    case 0x8Cu: /*0x6e3b76*/
      result = 9; /*0x6e3c01*/
      break; /*0x6e3c06*/
    case 0xAu: /*0x6e3b76*/
    case 0x64u: /*0x6e3b76*/
    case 0x75u: /*0x6e3b76*/
      result = 2; /*0x6e3bb9*/
      break; /*0x6e3bbe*/
    case 0xBu: /*0x6e3b76*/
    case 0x67u: /*0x6e3b76*/
      result = 39; /*0x6e3b7d*/
      break; /*0x6e3b82*/
    case 0xCu: /*0x6e3b76*/
    case 0x16u: /*0x6e3b76*/
    case 0x35u: /*0x6e3b76*/
    case 0x36u: /*0x6e3b76*/
      result = 11; /*0x6e3bad*/
      break; /*0x6e3bb2*/
    case 0x13u: /*0x6e3b76*/
    case 0x62u: /*0x6e3b76*/
      result = 3; /*0x6e3bbf*/
      break; /*0x6e3bc4*/
    case 0x14u: /*0x6e3b76*/
      result = 1; /*0x6e3bb3*/
      break; /*0x6e3bb8*/
    case 0x15u: /*0x6e3b76*/
      result = 4; /*0x6e3bc5*/
      break; /*0x6e3bca*/
    case 0x19u: /*0x6e3b76*/
    case 0x1Au: /*0x6e3b76*/
    case 0x1Bu: /*0x6e3b76*/
    case 0x27u: /*0x6e3b76*/
    case 0x2Cu: /*0x6e3b76*/
    case 0x49u: /*0x6e3b76*/
    case 0x4Cu: /*0x6e3b76*/
    case 0x4Du: /*0x6e3b76*/
    case 0x4Eu: /*0x6e3b76*/
    case 0x4Fu: /*0x6e3b76*/
    case 0x54u: /*0x6e3b76*/
    case 0x6Eu: /*0x6e3b76*/
    case 0x72u: /*0x6e3b76*/
    case 0x7Fu: /*0x6e3b76*/
    case 0x8Bu: /*0x6e3b76*/
    case 0x8Eu: /*0x6e3b76*/
    case 0x8Fu: /*0x6e3b76*/
    case 0x90u: /*0x6e3b76*/
      result = 10; /*0x6e3c19*/
      break; /*0x6e3c1e*/
    case 0x1Cu: /*0x6e3b76*/
    case 0x1Du: /*0x6e3b76*/
      result = 22; /*0x6e3bdd*/
      break; /*0x6e3be2*/
    case 0x1Eu: /*0x6e3b76*/
    case 0x55u: /*0x6e3b76*/
    case 0x56u: /*0x6e3b76*/
    case 0x57u: /*0x6e3b76*/
      result = 16; /*0x6e3b8f*/
      break; /*0x6e3b94*/
    case 0x21u: /*0x6e3b76*/
    case 0x22u: /*0x6e3b76*/
    case 0x86u: /*0x6e3b76*/
      result = 17; /*0x6e3b83*/
      break; /*0x6e3b88*/
    case 0x23u: /*0x6e3b76*/
      result = 15; /*0x6e3be9*/
      break; /*0x6e3bee*/
    case 0x28u: /*0x6e3b76*/
      result = 21; /*0x6e3bef*/
      break; /*0x6e3bf4*/
    case 0x29u: /*0x6e3b76*/
      result = 23; /*0x6e3bf5*/
      break; /*0x6e3bfa*/
    case 0x2Au: /*0x6e3b76*/
      result = 24; /*0x6e3c07*/
      break; /*0x6e3c0c*/
    case 0x2Bu: /*0x6e3b76*/
      result = 27; /*0x6e3c0d*/
      break; /*0x6e3c12*/
    case 0x30u: /*0x6e3b76*/
      result = 30; /*0x6e3c13*/
      break; /*0x6e3c18*/
    case 0x34u: /*0x6e3b76*/
      result = 25; /*0x6e3c1f*/
      break; /*0x6e3c24*/
    case 0x37u: /*0x6e3b76*/
      result = 28; /*0x6e3c25*/
      break; /*0x6e3c2a*/
    case 0x38u: /*0x6e3b76*/
    case 0x39u: /*0x6e3b76*/
      result = 29; /*0x6e3be3*/
      break; /*0x6e3be8*/
    case 0x3Au: /*0x6e3b76*/
      result = 31; /*0x6e3c2b*/
      break; /*0x6e3c30*/
    case 0x46u: /*0x6e3b76*/
      result = 26; /*0x6e3bcb*/
      break; /*0x6e3bd0*/
    case 0x47u: /*0x6e3b76*/
    case 0x48u: /*0x6e3b76*/
      result = 33; /*0x6e3c31*/
      break; /*0x6e3c36*/
    case 0x50u: /*0x6e3b76*/
    case 0x6Bu: /*0x6e3b76*/
      result = 34; /*0x6e3ba1*/
      break; /*0x6e3ba6*/
    case 0x58u: /*0x6e3b76*/
      result = 35; /*0x6e3ba7*/
      break; /*0x6e3bac*/
    case 0x63u: /*0x6e3b76*/
      result = 38; /*0x6e3bfb*/
      break; /*0x6e3c00*/
    case 0x68u: /*0x6e3b76*/
      result = 40; /*0x6e3b9b*/
      break; /*0x6e3ba0*/
    case 0x6Au: /*0x6e3b76*/
    case 0x73u: /*0x6e3b76*/
      result = 43; /*0x6e3bd1*/
      break; /*0x6e3bd6*/
    case 0x6Cu: /*0x6e3b76*/
      result = 44; /*0x6e3c37*/
      break; /*0x6e3c3c*/
    case 0x7Du: /*0x6e3b76*/
      result = 45; /*0x6e3c3d*/
      break; /*0x6e3c42*/
    case 0x81u: /*0x6e3b76*/
    case 0x84u: /*0x6e3b76*/
    case 0x85u: /*0x6e3b76*/
      result = 46; /*0x6e3bd7*/
      break; /*0x6e3bdc*/
    case 0x83u: /*0x6e3b76*/
      result = 47; /*0x6e3c43*/
      break; /*0x6e3c48*/
    default:
      result = 0; /*0x6e3c49*/
      break; /*0x6e3c49*/
  }
  return result; /*0x6e3b82*/
}



// ==== 0x006E3D70  TActionClass::ddtor  this=TActionClass  sig=csp ====
int __stdcall TActionClass::ddtor(TActionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6e3d76*/
    return -2147467261; /*0x6e3d78*/
  *a2 = 1326367634; /*0x6e3d86*/
  a2[1] = 298977877; /*0x6e3d8e*/
  a2[2] = 1610655660; /*0x6e3d97*/
  a2[3] = unk_7E980C; /*0x6e3da0*/
  return 0; /*0x6e3d7d*/
}



// ==== 0x006E3DB0  TActionClass::SaveLoad_Prefix  this=TActionClass  sig=csp ====
int __stdcall TActionClass::SaveLoad_Prefix(TActionClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6e3dbb*/
  if ( result >= 0 ) /*0x6e3dc2*/
  {
    if ( this ) /*0x6e3dc6*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x6e3dcf*/
      this->AbstractClass = &TActionClass::`vftable'; /*0x6e3dd4*/
      this->? = &TActionClass::`vftable'; /*0x6e3dda*/
      this->? = &TActionClass::`vftable'; /*0x6e3de1*/
      this->? = &TActionClass::`vftable'; /*0x6e3de8*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->TActionClass_field_28); /*0x6e3df8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->TActionClass_field_30); /*0x6e3e06*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->TActionClass_field_4C); /*0x6e3e14*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->TActionClass_field_50); /*0x6e3e22*/
    return 0; /*0x6e3e27*/
  }
  return result; /*0x6e3e29*/
}



// ==== 0x006E3E30  TActionClass::SaveLoad_Prefix_0  this=TActionClass  sig=csp ====
int __stdcall TActionClass::SaveLoad_Prefix_0(TActionClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6e3e3f*/
  if ( result >= 0 ) /*0x6e3e46*/
    return 0; /*0x6e3e48*/
  return result; /*0x6e3e4a*/
}



// ==== 0x006E3E50  TActionClass::Validate  this=TActionClass  sig=csp ====
int __thiscall TActionClass::Validate(TActionClass *this, int a2)
{
  _DWORD *TActionClass_field_28; // eax
  int v4; // eax
  _DWORD *TActionClass_field_30; // eax
  int v6; // eax
  _DWORD *TActionClass_field_4C; // eax
  int v8; // eax
  _DWORD *TActionClass_field_50; // eax
  int v10; // eax

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x6e3e59*/
  TActionClass_field_28 = this->TActionClass_field_28; /*0x6e3e5e*/
  if ( TActionClass_field_28 ) /*0x6e3e63*/
  {
    v4 = (*(int (__stdcall **)(_DWORD *))(TActionClass_field_28[1] + 16))(TActionClass_field_28 + 1); /*0x6e3e6c*/
    Power::TimerProcess(v4); /*0x6e3e72*/
  }
  Power::TimerProcess((int)this->TActionClass_field_2C); /*0x6e3e7d*/
  TActionClass_field_30 = this->TActionClass_field_30; /*0x6e3e82*/
  if ( TActionClass_field_30 ) /*0x6e3e87*/
  {
    v6 = (*(int (__stdcall **)(_DWORD *))(TActionClass_field_30[1] + 16))(TActionClass_field_30 + 1); /*0x6e3e90*/
    Power::TimerProcess(v6); /*0x6e3e96*/
  }
  TActionClass_field_4C = this->TActionClass_field_4C; /*0x6e3e9b*/
  if ( TActionClass_field_4C ) /*0x6e3ea0*/
  {
    v8 = (*(int (__stdcall **)(_DWORD *))(TActionClass_field_4C[1] + 16))(TActionClass_field_4C + 1); /*0x6e3ea9*/
    Power::TimerProcess(v8); /*0x6e3eaf*/
  }
  TActionClass_field_50 = this->TActionClass_field_50; /*0x6e3eb4*/
  if ( TActionClass_field_50 ) /*0x6e3eb9*/
  {
    v10 = (*(int (__stdcall **)(_DWORD *))(TActionClass_field_50[1] + 16))(TActionClass_field_50 + 1); /*0x6e3ec2*/
    Power::TimerProcess(v10); /*0x6e3ec8*/
  }
  return Power::TimerProcess(*(_DWORD *)&this->pad_6E[34]); /*0x6e3edb*/
}



// ==== 0x006E3EE0  TriggerTypeClass::Dispatch  this=TriggerTypeClass  sig=csp ====
int __thiscall TriggerTypeClass::Dispatch(TriggerTypeClass *this)
{
  int result; // eax

  result = 0; /*0x6e3ee3*/
  switch ( (unsigned int)this ) /*0x6e3ef2*/
  {
    case 0xEu: /*0x6e3ef2*/
    case 0x20u: /*0x6e3ef2*/
    case 0x3Cu: /*0x6e3ef2*/
    case 0x3Du: /*0x6e3ef2*/
    case 0x3Eu: /*0x6e3ef2*/
    case 0x5Bu: /*0x6e3ef2*/
    case 0x6Fu: /*0x6e3ef2*/
      result = 2; /*0x6e3ef9*/
      break; /*0x6e3ef9*/
    default:
      return result;
  }
  return result; /*0x6e3efe*/
}



// ==== 0x006E3F70  ObjectClass::method_6E3F70  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6E3F70(ObjectClass *this, _DWORD *a2)
{
  _DWORD *WorldCoords; // edx
  _DWORD v4[3]; // [esp+4h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, v4, *(_DWORD *)&this->isAliveFlag); /*0x6e3f8b*/
  *a2 = *WorldCoords; /*0x6e3f95*/
  a2[1] = WorldCoords[1]; /*0x6e3f9a*/
  a2[2] = WorldCoords[2]; /*0x6e3fa1*/
  return a2; /*0x6e3f9d*/
}



// ==== 0x006E4090  LoadBuildingClass  this=-  sig=csp ====
char __stdcall sub_6E4090(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // esi
  _DWORD *v6; // ecx

  v4 = 0; /*0x6e409b*/
  if ( dword_A8EB50 <= 0 ) /*0x6e409f*/
    return 0; /*0x6e40e3*/
  while ( 1 ) /*0x6e40aa*/
  {
    v5 = *((_DWORD *)dword_A8EB44 + v4); /*0x6e40aa*/
    if ( *(_BYTE *)(v5 + 144) ) /*0x6e40ad*/
    {
      if ( *(_BYTE *)(v5 + 116) ) /*0x6e40b7*/
      {
        if ( !*(_BYTE *)(v5 + 129) ) /*0x6e40be*/
        {
          v6 = *(_DWORD **)(v5 + 52); /*0x6e40c8*/
          if ( v6 ) /*0x6e40cd*/
          {
            if ( LinkedList::Contains(v6, a3) ) /*0x6e40d0*/
              break; /*0x6e40d0*/
          }
        }
      }
    }
    if ( ++v4 >= dword_A8EB50 ) /*0x6e40e1*/
      return 0; /*0x6e40e1*/
  }
  BuildingClass::UnloadUnits((int *)v5, 0, 0); /*0x6e40f2*/
  return 1; /*0x6e40e3*/
}



// ==== 0x006E4100  TActionClass::executePsychicDominatorAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executePsychicDominatorAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // esi

  v5 = *(_DWORD *)&this->pad_6E[34]; /*0x6e4101*/
  if ( v5 >= 4 || !(unsigned __int8)PlayerClass::HasPlayers((PlayerClass *)(3988 * v5 + 8916268)) ) /*0x6e4124*/
    return 0; /*0x6e413e*/
  SidebarClass::SwitchTab((int)&stru_87F5F0.__pad_58[416], v5); /*0x6e4133*/
  return 1; /*0x6e413a*/
}



// ==== 0x006E4150  TActionClass::executeGeneticMutatorAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeGeneticMutatorAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // edi
  char *p_TActionClass_field_54; // ebx
  int v8; // ebp

  v5 = -1; /*0x6e415d*/
  v6 = stru_A8EB00.ObjectTypeClass[4] - 1; /*0x6e4160*/
  if ( stru_A8EB00.ObjectTypeClass[4] - 1 >= 0 ) /*0x6e416b*/
  {
    p_TActionClass_field_54 = &this->TActionClass_field_54; /*0x6e4172*/
    v8 = stru_A8EB00.ObjectTypeClass[1] + 4 * v6; /*0x6e4175*/
    while ( strcmp((const char *)(*(_DWORD *)v8 + 36), p_TActionClass_field_54) ) /*0x6e41ab*/
    {
      --v6; /*0x6e41ad*/
      v8 -= 4; /*0x6e41ae*/
      if ( v6 < 0 ) /*0x6e41b3*/
      {
        v5 = -1; /*0x6e41b5*/
        goto LABEL_7; /*0x6e41b9*/
      }
    }
    v5 = v6; /*0x6e41bb*/
  }
LABEL_7:
  if ( v5 >= stru_A8EB00.ObjectTypeClass[4] || v5 < 0 ) /*0x6e41cd*/
    return 0; /*0x6e41f6*/
  TActionClass::executeHarvestAction( /*0x6e41e9*/
    (TActionClass *)&stru_87F5F0.__pad_58[416],
    *(_DWORD *)(stru_A8EB00.ObjectTypeClass[1] + 4 * v5),
    *(_DWORD *)&this->pad_6E[34]);
  return 1; /*0x6e41c3*/
}



// ==== 0x006E4200  TActionClass::executeForceShieldAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeForceShieldAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  void *v7; // eax
  _DWORD *v8; // eax
  int IndexByName; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // esi
  int v14; // [esp+8h] [ebp-1Ch] BYREF
  _DWORD v15[3]; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v16[12]; // [esp+18h] [ebp-Ch] BYREF

  v5 = a2; /*0x6e4205*/
  if ( !a2 ) /*0x6e420d*/
    return 0; /*0x6e420d*/
  a2 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v14, (int)this->TActionClass_field_44); /*0x6e4233*/
  v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x6e4237*/
  v8 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v7 + 72))(v7, v16); /*0x6e4245*/
  v15[0] = *v8; /*0x6e424a*/
  v15[1] = v8[1]; /*0x6e4251*/
  v15[2] = v8[2]; /*0x6e425b*/
  IndexByName = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)&this->TActionClass_field_54); /*0x6e425f*/
  if ( IndexByName < 0 ) /*0x6e4266*/
    return 0; /*0x6e4266*/
  if ( IndexByName > dword_A83C78 ) /*0x6e426e*/
    return 0; /*0x6e426e*/
  v10 = *((_DWORD *)dword_A83C6C + IndexByName); /*0x6e4276*/
  if ( !v10 ) /*0x6e427b*/
    return 0; /*0x6e427b*/
  v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 140))(v10, v5); /*0x6e4280*/
  v12 = v11; /*0x6e4286*/
  if ( !v11 ) /*0x6e428a*/
    return 0; /*0x6e428a*/
  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v11 + 1168))(v11, v15, 0) ) /*0x6e4297*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 248))(v12); /*0x6e42a5*/
    return 0; /*0x6e42b2*/
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 1244))(v12, 0); /*0x6e42bb*/
  return 1; /*0x6e42ab*/
}



// ==== 0x006E42D0  TActionClass::executeIronCurtainAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeIronCurtainAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax

  if ( !a2 ) /*0x6e42d6*/
    return 0; /*0x6e42d6*/
  v5 = *(_DWORD *)&this->pad_6E[34]; /*0x6e42d8*/
  if ( v5 < 0 ) /*0x6e42e0*/
    return 0; /*0x6e42e0*/
  if ( v5 > *(_DWORD *)(a2 + 612) ) /*0x6e42ec*/
    return 0; /*0x6e42ec*/
  v6 = *(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * v5); /*0x6e42f4*/
  if ( !*(_BYTE *)(v6 + 109) || this->TActionClass_field_48 > (void *)0x64 ) /*0x6e4303*/
    return 0; /*0x6e4317*/
  SuperClass::SetCharge(v6, (int)this->TActionClass_field_48); /*0x6e430d*/
  return 1; /*0x6e4314*/
}



// ==== 0x006E4320  TActionClass::executeNukeAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeNukeAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax

  if ( !a2 ) /*0x6e4326*/
    return 0; /*0x6e4326*/
  v5 = *(_DWORD *)&this->pad_6E[34]; /*0x6e4328*/
  if ( v5 < 0 || v5 > *(_DWORD *)(a2 + 612) ) /*0x6e433c*/
    return 0; /*0x6e4355*/
  SuperClass::SetRechargeTime(*(SuperClass **)(*(_DWORD *)(a2 + 600) + 4 * v5), (int)this->TActionClass_field_48); /*0x6e434b*/
  return 1; /*0x6e4352*/
}



// ==== 0x006E4360  TActionClass::executeSpyPlaneAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeSpyPlaneAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax

  if ( !a2 ) /*0x6e4366*/
    return 0; /*0x6e4366*/
  v5 = *(_DWORD *)&this->pad_6E[34]; /*0x6e4368*/
  if ( v5 < 0 || v5 > *(_DWORD *)(a2 + 612) ) /*0x6e4378*/
    return 0; /*0x6e438d*/
  SuperClass::ResetRechargeTime(*(SuperClass **)(*(_DWORD *)(a2 + 600) + 4 * v5)); /*0x6e4383*/
  return 1; /*0x6e438a*/
}



// ==== 0x006E43A0  TActionClass::executeChronoSphereAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeChronoSphereAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax

  if ( !a2 ) /*0x6e43a6*/
    return 0; /*0x6e43a6*/
  v5 = *(_DWORD *)&this->pad_6E[34]; /*0x6e43a8*/
  if ( v5 < 0 || v5 > *(_DWORD *)(a2 + 612) ) /*0x6e43b8*/
    return 0; /*0x6e43cd*/
  SuperClass::Reset(*(SuperClass **)(*(_DWORD *)(a2 + 600) + 4 * v5)); /*0x6e43c3*/
  return 1; /*0x6e43ca*/
}



// ==== 0x006E43E0  TActionClass::executeWeatherStormAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeWeatherStormAction(TActionClass *this, _DWORD *a2, int a3, int a4, int a5)
{
  TActionClass *v5; // esi
  _DWORD *v7; // eax

  v5 = (TActionClass *)a2; /*0x6e43e1*/
  if ( !a2 ) /*0x6e43e7*/
    return 0; /*0x6e43e9*/
  v7 = (_DWORD *)*ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a2, (int)this->TActionClass_field_44); /*0x6e4403*/
  a2 = v7; /*0x6e440c*/
  if ( v7 == *(_DWORD **)dword_B0E680 ) /*0x6e4410*/
    return 0; /*0x6e4420*/
  TActionClass::executeGuardAction(v5, (int)v7); /*0x6e4429*/
  return 1; /*0x6e43eb*/
}



// ==== 0x006E4440  globalHelper_0E4440  this=-  sig=csp ====
char __stdcall sub_6E4440(_DWORD *a1, int a2, int a3, int a4)
{
  if ( !a1 ) /*0x6e4446*/
    return 0; /*0x6e4448*/
  GlobalHelper_0E4440_Helper(a1); /*0x6e444d*/
  return 1; /*0x6e444a*/
}



// ==== 0x006E4460  TActionClass::executeDominatorAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeDominatorAction(TActionClass *this, _DWORD *a2, int a3, int a4, int a5)
{
  TActionClass *v5; // esi
  _DWORD *v7; // eax

  v5 = (TActionClass *)a2; /*0x6e4461*/
  if ( !a2 ) /*0x6e4467*/
    return 0; /*0x6e4469*/
  v7 = (_DWORD *)*ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a2, (int)this->TActionClass_field_44); /*0x6e4483*/
  a2 = v7; /*0x6e448c*/
  if ( v7 == *(_DWORD **)dword_B0E680 ) /*0x6e4490*/
    return 0; /*0x6e44a0*/
  TActionClass::executeHuntAction(v5, (int)v7); /*0x6e44a9*/
  return 1; /*0x6e446b*/
}



// ==== 0x006E44C0  globalHelper_0E44C0  this=-  sig=csp ====
char __stdcall sub_6E44C0(_DWORD *a1, int a2, int a3, int a4)
{
  if ( !a1 ) /*0x6e44c6*/
    return 0; /*0x6e44c8*/
  GlobalHelper_0E44C0_Helper(a1); /*0x6e44cd*/
  return 1; /*0x6e44ca*/
}



// ==== 0x006E44E0  TActionClass::executeRevealAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeRevealAction(TActionClass *this, _DWORD *a2, int a3, int a4, int a5)
{
  TActionClass *v5; // esi
  _DWORD *v7; // eax

  v5 = (TActionClass *)a2; /*0x6e44e1*/
  if ( !a2 ) /*0x6e44e7*/
    return 0; /*0x6e44e9*/
  v7 = (_DWORD *)*ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a2, (int)this->TActionClass_field_44); /*0x6e4503*/
  a2 = v7; /*0x6e450c*/
  if ( v7 == *(_DWORD **)dword_B0E680 ) /*0x6e4510*/
    return 0; /*0x6e4520*/
  TActionClass::executeDeployAction(v5, (int)v7); /*0x6e4529*/
  return 1; /*0x6e44eb*/
}



// ==== 0x006E4540  globalHelper_0E4540  this=-  sig=csp ====
char __stdcall sub_6E4540(_DWORD *a1, int a2, int a3, int a4)
{
  if ( !a1 ) /*0x6e4546*/
    return 0; /*0x6e4548*/
  GlobalHelper_0E4540_Helper(a1); /*0x6e454d*/
  return 1; /*0x6e454a*/
}



// ==== 0x006E4560  TActionClass::executeEMPulseAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E4560(int this, int a2, int a3, int a4, int a5)
{
  int i; // ebp
  int v7; // edi

  if ( !a2 ) /*0x6e456c*/
    return 0; /*0x6e456e*/
  for ( i = *(_DWORD *)(a2 + 120) - 1; i >= 0; --i ) /*0x6e457a*/
  {
    v7 = *(_DWORD *)(*(_DWORD *)(a2 + 108) + 4 * i); /*0x6e4585*/
    if ( !strcmp((const char *)(*(_DWORD *)(v7 + 1312) + 36), (const char *)(this + 84)) ) /*0x6e459a*/
      *(_DWORD *)(v7 + 240) = *(_DWORD *)(this + 144); /*0x6e45cb*/
  }
  return 1; /*0x6e4570*/
}



// ==== 0x006E45E0  ObjectClass::FindOwner  this=ObjectClass  sig=csp ====
int __stdcall ObjectClass_FindOwner(_DWORD *a1, void *a2)
{
  if ( !a1 ) /*0x6e45e6*/
    return 0; /*0x6e45e8*/
  if ( a2 == (void *)8997 ) /*0x6e45f8*/
    return Property::GetField11(a1); /*0x6e45fa*/
  if ( a2 == (void *)-1 ) /*0x6e4606*/
    return 0; /*0x6e4608*/
  if ( BuildingType::IsSpecialType(a2) ) /*0x6e4610*/
    return BuildingType::FindOwnerHouse(a2); /*0x6e461b*/
  return HouseClass::FindOwner(a2); /*0x6e45ea*/
}



// ==== 0x006E4630  TActionClass::StubReturn148  this=TActionClass  sig=csp ====
int TActionClass::StubReturn148(TActionClass *this)
{
  return 148; /*0x6e4635*/
}



// ==== 0x006E4640  TActionClass::StubReturn47  this=TActionClass  sig=csp ====
int TActionClass::StubReturn47(TActionClass *this)
{
  return 47; /*0x6e4645*/
}



// ==== 0x006E4650  TActionClass::Stub  this=TActionClass  sig=csp ====
int __thiscall TActionClass::Stub(TActionClass *this)
{
  return this->idxArray; /*0x6e4653*/
}



// ==== 0x006E4660  TActionClass::Destructor  this=TActionClass  sig=csp ====
void **__thiscall TActionClass::Destructor(TActionClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  TActionClass *v7; // [esp+8h] [ebp-4h] BYREF

  this->AbstractClass = &TActionClass::`vftable'; /*0x6e4666*/
  this->? = &TActionClass::`vftable'; /*0x6e466c*/
  this->? = &TActionClass::`vftable'; /*0x6e4673*/
  this->? = &TActionClass::`vftable'; /*0x6e467a*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x6e4681*/
  v7 = this; /*0x6e4696*/
  v3 = (*(int (__thiscall **)(int *, TActionClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6e469a*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v7);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x6e46aa*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x6e46af*/
    for ( ; /*0x6e46b5*/
          v3 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v3) )
    {
      ++v3; /*0x6e46bd*/
    }
  }
  v7 = this; /*0x6e46df*/
  v4 = (*(int (__thiscall **)(int *, TActionClass **))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 16))( /*0x6e46e3*/
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
         &v7);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.GateCloseDelay[0] ) /*0x6e46f3*/
  {
    --g_BuildingLoadQueue_Array.GateCloseDelay[0]; /*0x6e46f8*/
    for ( ; /*0x6e46fe*/
          v4 < g_BuildingLoadQueue_Array.GateCloseDelay[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v4) )
    {
      ++v4; /*0x6e4706*/
    }
  }
  v7 = this; /*0x6e4728*/
  v5 = (*(int (__thiscall **)(int *, TActionClass **))(dword_B0E658 + 16))(&dword_B0E658, &v7); /*0x6e472c*/
  if ( v5 != -1 && v5 < dword_B0E668 && v5 < --dword_B0E668 ) /*0x6e4747*/
  {
    do /*0x6e475f*/
    {
      ++v5; /*0x6e474f*/
      *((_DWORD *)dword_B0E65C + v5 - 1) = *((_DWORD *)dword_B0E65C + v5); /*0x6e4753*/
    }
    while ( v5 < dword_B0E668 ); /*0x6e475f*/
  }
  this->TActionClass_field_6D = 0; /*0x6e4763*/
  AbstractClass::DTOR((AbstractClass *)this); /*0x6e4767*/
  if ( (a2 & 1) != 0 ) /*0x6e4771*/
    __3_YAXPAX_Z(this); /*0x6e4774*/
  return &this->AbstractClass; /*0x6e477e*/
}



// ==== 0x006E4790  ScriptAction::CopyStringField  this=ScriptAction  sig=csp ====
char *__thiscall ScriptAction::CopyStringField(char *Destination, char *Source)
{
  if ( Source ) /*0x6e4799*/
  {
    strncpy(Destination, Source, 0x1Fu); /*0x6e47a7*/
    *(Destination + 31) = 0; /*0x6e47af*/
    return Destination; /*0x6e47b3*/
  }
  else
  {
    *Destination = 0; /*0x6e479b*/
    return Destination; /*0x6e479d*/
  }
}



// ==== 0x006E47C0  ScriptAction::CopyStructField  this=ScriptAction  sig=csp ====
void *__thiscall ScriptAction::CopyStructField(ScriptAction *this, void *a2, const void *a3)
{
  if ( a3 != this ) /*0x6e47ca*/
    qmemcpy(this, a3, 0x20u); /*0x6e47d3*/
  qmemcpy(a2, this, 0x20u); /*0x6e47e2*/
  return a2; /*0x6e47e4*/
}



// ==== 0x006E47F0  Tactical::ClearBuffer  this=Tactical  sig=csp ====
void __thiscall Tactical_42::ClearBuffer(Tactical *this)
{
  void *v2; // eax

  v2 = *(void **)&this->Tactical_field_0x2[2]; /*0x6e47f6*/
  *(_DWORD *)this->__pad_10 = 0; /*0x6e47f9*/
  if ( v2 && BYTE1(this->Tactical_field_0xC) ) /*0x6e4800*/
  {
    __3_YAXPAX_Z(v2); /*0x6e4806*/
    *(_DWORD *)&this->Tactical_field_0x2[2] = 0; /*0x6e480e*/
  }
  BYTE1(this->Tactical_field_0xC) = 0; /*0x6e4811*/
  this->Tactical_field_0x8 = 0; /*0x6e4814*/
}



// ==== 0x006E4820  Tactical::PointerToIndex  this=Tactical  sig=csp ====
unsigned int __thiscall Tactical_42::PointerToIndex(Tactical *this, int a2)
{
  if ( LOBYTE(this->Tactical_field_0xC) ) /*0x6e4820*/
    return (unsigned int)(a2 - *(_DWORD *)&this->Tactical_field_0x2[2]) >> 2; /*0x6e4835*/
  else
    return 0; /*0x6e4827*/
}



// ==== 0x006E4840  _VectorClass_PAVTActionClass::UpdateView  this=VectorClass  sig=csp ====
int __thiscall Tactical_42::UpdateView(_VectorClass_PAVTActionClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6e484a*/
}



// ==== 0x006E4850  _VectorClass_PAVTActionClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall Tactical_42::AddRef(_VectorClass_PAVTActionClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x6e4852*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6e485d*/
  {
    v3 = 0; /*0x6e485f*/
    if ( m_8 <= 0 ) /*0x6e4863*/
      return 1; /*0x6e4883*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6e4865*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6e486b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6e4874*/
    {
      ++v3; /*0x6e4876*/
      ++v4; /*0x6e4877*/
      if ( v3 >= m_8 ) /*0x6e487c*/
        return 1; /*0x6e487c*/
    }
  }
  return 0; /*0x6e487e*/
}



// ==== 0x006E4890  _VectorClass_PAVTActionClass::Release  this=VectorClass  sig=csp ====
char __thiscall Tactical_42::Release(_VectorClass_PAVTActionClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6e489c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6e48a6*/
    if ( a3 ) /*0x6e48ac*/
      v4 = a3; /*0x6e48c2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6e48be*/
    LOBYTE(this->m_C) = 1; /*0x6e48c6*/
    if ( v4 ) /*0x6e48ca*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6e48d5*/
      {
        m_8 = this->m_8; /*0x6e48dc*/
        if ( a2 < m_8 ) /*0x6e48e1*/
          m_8 = a2; /*0x6e48e3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6e48e9*/
          ++i; /*0x6e48ee*/
        if ( BYTE1(this->m_C) ) /*0x6e48fb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6e4906*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6e490e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6e4917*/
      this->m_8 = a2; /*0x6e491f*/
      BYTE1(this->m_C) = a3 == 0; /*0x6e4922*/
      return 1; /*0x6e4928*/
    }
    else
    {
      return 0; /*0x6e48cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVTActionClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6e4932*/
    return 1; /*0x6e4938*/
  }
}



// ==== 0x006E4940  _VectorClass_PAVTActionClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall Tactical_42::ddtor(_VectorClass_PAVTActionClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6e494d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6e4953*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6e495b*/
  }
  BYTE1(this->m_C) = 0; /*0x6e495e*/
  this->m_8 = 0; /*0x6e4961*/
}



// ==== 0x006E4970  _VectorClass_PAVTActionClass::Init  this=VectorClass  sig=csp ====
int __thiscall Tactical::Init(_VectorClass_PAVTActionClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6e4970*/
    return 0; /*0x6e4978*/
  m_8 = this->m_8; /*0x6e497e*/
  result = 0; /*0x6e4981*/
  if ( m_8 <= 0 ) /*0x6e4985*/
    return -1; /*0x6e499c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6e498b*/
  {
    if ( ++result >= m_8 ) /*0x6e499a*/
      return -1; /*0x6e499a*/
  }
  return result; /*0x6e497a*/
}



// ==== 0x006E49B0  _VectorClass_PAVTActionClass::InitMap  this=VectorClass  sig=csp ====
unsigned int __thiscall Tactical_42::InitMap(_VectorClass_PAVTActionClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6e49b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6e49c5*/
  else
    return 0; /*0x6e49b7*/
}



// ==== 0x006E49D0  Tactical::SetCapacity  this=Tactical  sig=csp ====
char __thiscall Tactical_42::SetCapacity(Tactical *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int Tactical_field_0x8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6e49dc*/
  {
    LOBYTE(this->Tactical_field_0xC) = 0; /*0x6e49e2*/
    if ( a3 ) /*0x6e49e8*/
      v4 = a3; /*0x6e49fe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6e49fa*/
    LOBYTE(this->Tactical_field_0xC) = 1; /*0x6e4a02*/
    if ( !v4 ) /*0x6e4a06*/
      return 0; /*0x6e4a7a*/
    if ( *(_DWORD *)&this->Tactical_field_0x2[2] ) /*0x6e4a08*/
    {
      Tactical_field_0x8 = this->Tactical_field_0x8; /*0x6e4a0f*/
      if ( a2 < Tactical_field_0x8 ) /*0x6e4a14*/
        Tactical_field_0x8 = a2; /*0x6e4a16*/
      for ( i = 0; i < Tactical_field_0x8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->Tactical_field_0x2[2] + 4 * i - 4) ) /*0x6e4a1c*/
        ++i; /*0x6e4a21*/
      if ( BYTE1(this->Tactical_field_0xC) ) /*0x6e4a2e*/
      {
        __3_YAXPAX_Z(*(void **)&this->Tactical_field_0x2[2]); /*0x6e4a39*/
        *(_DWORD *)&this->Tactical_field_0x2[2] = 0; /*0x6e4a41*/
      }
    }
    *(_DWORD *)&this->Tactical_field_0x2[2] = v4; /*0x6e4a4a*/
    this->Tactical_field_0x8 = a2; /*0x6e4a52*/
    BYTE1(this->Tactical_field_0xC) = a3 == 0; /*0x6e4a55*/
  }
  else
  {
    (*(void (__thiscall **)(Tactical *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6e4a5e*/
  }
  v7 = this->Tactical_field_0x8; /*0x6e4a61*/
  if ( v7 < *(_DWORD *)this->__pad_10 ) /*0x6e4a69*/
    *(_DWORD *)this->__pad_10 = v7; /*0x6e4a6b*/
  return 1; /*0x6e4a6e*/
}



// ==== 0x006E4A80  Tactical::FindItem  this=Tactical  sig=csp ====
int __thiscall Tactical_42::FindItem(Tactical *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(_DWORD *)this->__pad_10; /*0x6e4a80*/
  result = 0; /*0x6e4a83*/
  if ( v2 <= 0 ) /*0x6e4a88*/
    return -1; /*0x6e4a9f*/
  for ( i = *(_DWORD **)&this->Tactical_field_0x2[2]; *i != *a2; ++i ) /*0x6e4a8e*/
  {
    if ( ++result >= v2 ) /*0x6e4a9d*/
      return -1; /*0x6e4a9d*/
  }
  return result; /*0x6e4aa2*/
}



// ==== 0x006E4AB0  _VectorClass_PAVTActionClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall Tactical_42::QueryInterface(_VectorClass_PAVTActionClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6e4ab3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TActionClass *>::`vftable'; /*0x6e4ab6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6e4ac0*/
  {
    __3_YAXPAX_Z(v3); /*0x6e4ac8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6e4ad0*/
  }
  BYTE1(this->m_C) = 0; /*0x6e4adb*/
  this->m_8 = 0; /*0x6e4ae1*/
  if ( (a2 & 1) != 0 ) /*0x6e4ae8*/
    __3_YAXPAX_Z(this); /*0x6e4aeb*/
  return this->__pad_0; /*0x6e4af5*/
}



// ==== 0x006E4B50  sub_6E4B50  this=-  sig=ida-proto ====
void sub_6E4B50()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e4b5c*/
  dbl_B0E708 = Math::Sqrt(v0 + v0); /*0x6e4b6e*/
}



// ==== 0x006E4B80  sub_6E4B80  this=-  sig=ida-proto ====
void sub_6E4B80()
{
  dbl_B0E770 = dbl_B0E708 / 60.0; /*0x6e4b8c*/
}



// ==== 0x006E4BA0  sub_6E4BA0  this=-  sig=ida-proto ====
void sub_6E4BA0()
{
  dbl_B0E758 = 1.0 / dbl_B0E770; /*0x6e4bac*/
}



// ==== 0x006E4BC0  sub_6E4BC0  this=-  sig=ida-proto ====
void sub_6E4BC0()
{
  dbl_B0E750 = 0.0174532925199433 * 45.0; /*0x6e4bcc*/
}



// ==== 0x006E4BE0  sub_6E4BE0  this=-  sig=ida-proto ====
void sub_6E4BE0()
{
  dbl_B0E710 = 0.0174532925199433 * 60.0; /*0x6e4bec*/
}



// ==== 0x006E4C00  sub_6E4C00  this=-  sig=ida-proto ====
void sub_6E4C00()
{
  dbl_B0E6E8 = 0.0174532925199433 * 90.0; /*0x6e4c0c*/
}



// ==== 0x006E4C20  sub_6E4C20  this=-  sig=ida-proto ====
__int64 sub_6E4C20()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E6E8 - dbl_B0E710); /*0x6e4c32*/
  result = Math::RoundToInt(v0 * dbl_B0E708 * 0.5); /*0x6e4c46*/
  dword_B0E778 = result; /*0x6e4c4b*/
  return result; /*0x6e4c50*/
}



// ==== 0x006E4C60  sub_6E4C60  this=-  sig=ida-proto ====
void sub_6E4C60()
{
  dbl_B0E718 = Math::ArcTan((double)dword_B0E778 * 0.00390625); /*0x6e4c77*/
}



// ==== 0x006E4C90  sub_6E4C90  this=-  sig=ida-proto ====
void sub_6E4C90()
{
  dbl_B0E748 = Math::ArcTan((double)(2 * dword_B0E778) / dbl_B0E708); /*0x6e4cb2*/
}



// ==== 0x006E4CC0  sub_6E4CC0  this=-  sig=ida-proto ====
__int64 sub_6E4CC0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E778) + 0.5); /*0x6e4cdb*/
  dword_B0E76C = result; /*0x6e4ce0*/
  return result; /*0x6e4ce6*/
}



// ==== 0x006E4CF0  sub_6E4CF0  this=-  sig=ida-proto ====
int sub_6E4CF0()
{
  dword_B0E700 = 0; /*0x6e4cf2*/
  return 0; /*0x6e4cfe*/
}



// ==== 0x006E4D00  sub_6E4D00  this=-  sig=ida-proto ====
int sub_6E4D00()
{
  dword_B0E738 = 0; /*0x6e4d02*/
  dword_B0E73C = 0; /*0x6e4d07*/
  dword_B0E740 = 0; /*0x6e4d0c*/
  return 0; /*0x6e4d11*/
}



// ==== 0x006E4D20  sub_6E4D20  this=-  sig=ida-proto ====
int sub_6E4D20()
{
  dword_B0E768 = 0; /*0x6e4d25*/
  dword_B0E760 = 128; /*0x6e4d2f*/
  dword_B0E764 = 128; /*0x6e4d34*/
  return 128; /*0x6e4d39*/
}



// ==== 0x006E4D40  sub_6E4D40  this=-  sig=ida-proto ====
int sub_6E4D40()
{
  dword_B0E6F0 = 0; /*0x6e4d42*/
  dword_B0E6F4 = 0; /*0x6e4d47*/
  dword_B0E6F8 = 0; /*0x6e4d4c*/
  dword_B0E6FC = 0; /*0x6e4d51*/
  return 0; /*0x6e4d56*/
}



// ==== 0x006E4D60  sub_6E4D60  this=-  sig=ida-proto ====
int sub_6E4D60()
{
  g_TagClassCount = 0; /*0x6e4d67*/
  dword_B0E728 = 0; /*0x6e4d6c*/
  byte_B0E72C = 1; /*0x6e4d71*/
  byte_B0E72D = 0; /*0x6e4d78*/
  TagClass_Array = (int)&DynamicVectorClass<TagClass *>::`vftable'; /*0x6e4d7d*/
  dword_B0E734 = 10; /*0x6e4d87*/
  g_GameObjectCleanup = 0; /*0x6e4d91*/
  return atexit(sub_6E4DA0); /*0x6e4d9c*/
}



// ==== 0x006E4DA0  sub_6E4DA0  this=-  sig=ida-proto ====
void __cdecl sub_6E4DA0()
{
  TagClass_Array = (int)&VectorClass<TagClass *>::`vftable'; /*0x6e4da8*/
  if ( g_TagClassCount && byte_B0E72D ) /*0x6e4dbc*/
  {
    __3_YAXPAX_Z(g_TagClassCount); /*0x6e4dbf*/
    g_TagClassCount = 0; /*0x6e4dc7*/
  }
  byte_B0E72D = 0; /*0x6e4dcd*/
  dword_B0E728 = 0; /*0x6e4dd3*/
}



// ==== 0x006E4DE0  TagClass::GetType  this=TagClass  sig=csp ====
int __thiscall TagClass_Constructor(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int i; // edi
  void *v7; // eax
  int v8; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6e4de5*/
  *(_DWORD *)(this + 36) = a2; /*0x6e4df0*/
  *(_DWORD *)(this + 40) = 0; /*0x6e4df3*/
  *(_DWORD *)(this + 44) = 0; /*0x6e4df6*/
  *(_DWORD *)(this + 48) = dword_B0E700; /*0x6e4dfe*/
  *(_BYTE *)(this + 52) = 0; /*0x6e4e01*/
  *(_BYTE *)(this + 53) = 0; /*0x6e4e04*/
  *(_DWORD *)this = &TagClass::`vftable'; /*0x6e4e07*/
  *(_DWORD *)(this + 4) = &TagClass::`vftable'; /*0x6e4e0d*/
  *(_DWORD *)(this + 8) = &TagClass::`vftable'; /*0x6e4e14*/
  *(_DWORD *)(this + 12) = &TagClass::`vftable'; /*0x6e4e1b*/
  if ( g_GameObjectCleanup < dword_B0E728 /*0x6e4e54*/
    || (byte_B0E72D || !dword_B0E728)
    && dword_B0E734 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(TagClass_Array + 8))(
         &TagClass_Array,
         dword_B0E728 + dword_B0E734,
         0) )
  {
    v3 = g_GameObjectCleanup++; /*0x6e4e61*/
    *((_DWORD *)g_TagClassCount + v3) = this; /*0x6e4e70*/
  }
  if ( dword_B0F680 < dword_B0F678 /*0x6e4ea7*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F678 + dword_B0F684,
         0) )
  {
    v4 = dword_B0F680++; /*0x6e4eb4*/
    *((_DWORD *)dword_B0F674 + v4) = this; /*0x6e4ec3*/
  }
  if ( dword_B0F718 < dword_B0F710 /*0x6e4efa*/
    || (byte_B0F715 || !dword_B0F710)
    && dword_B0F71C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F708 + 8))(
         &dword_B0F708,
         dword_B0F710 + dword_B0F71C,
         0) )
  {
    v5 = dword_B0F718++; /*0x6e4f07*/
    *((_DWORD *)dword_B0F70C + v5) = this; /*0x6e4f16*/
  }
  if ( a2 ) /*0x6e4f1b*/
  {
    for ( i = *(_DWORD *)(a2 + 160); i; i = *(_DWORD *)(i + 168) ) /*0x6e4f25*/
    {
      v7 = __2_YAPAXI_Z(0x48u); /*0x6e4f29*/
      if ( v7 ) /*0x6e4f33*/
        v8 = TriggerClass::Construct((int)v7, i); /*0x6e4f38*/
      else
        v8 = 0; /*0x6e4f3f*/
      *(_DWORD *)(v8 + 40) = *(_DWORD *)(this + 40); /*0x6e4f44*/
      *(_DWORD *)(this + 40) = v8; /*0x6e4f47*/
    }
  }
  return this; /*0x6e4f56*/
}



// ==== 0x006E4F60  TagClass::Destructor  this=TagClass  sig=csp ====
int __thiscall TagClass::Destructor(TagClass *this)
{
  TagTypeClass *buildingType; // ecx
  int v3; // eax
  ParticleSystemClass *ambientParticles; // ecx
  int v5; // ecx
  TagTypeClass *v6; // ecx
  int v7; // eax
  TagClass **v8; // ecx
  void *SuperClass_field_0x6C; // ecx
  TriggerClass *firstTrigger; // eax
  TriggerTypeClass *v11; // eax
  int Owner; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  TriggerClass *v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  _DWORD v22[4]; // [esp+10h] [ebp-10h] BYREF

  this->AbstractClass = &TagClass::`vftable'; /*0x6e4f69*/
  this->? = &TagClass::`vftable'; /*0x6e4f6f*/
  this->? = &TagClass::`vftable'; /*0x6e4f76*/
  this->? = &TagClass::`vftable'; /*0x6e4f7d*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x6e4f84*/
  if ( byte_A8E9A0 ) /*0x6e4f90*/
  {
    if ( stru_A8EB00.?[376] ) /*0x6e4f9d*/
    {
      buildingType = this->buildingType; /*0x6e4f9f*/
      if ( buildingType ) /*0x6e4fa4*/
      {
        if ( (Debug::AccumFlags((Debug *)buildingType) & 0x10) != 0 ) /*0x6e4fad*/
        {
          v3 = 0; /*0x6e4fb5*/
          if ( (int)FootClass_Array.? <= 0 ) /*0x6e4fb9*/
          {
LABEL_9:
            v3 = -1; /*0x6e4fcd*/
          }
          else
          {
            ambientParticles = FootClass_Array.?; /*0x6e4fbb*/
            while ( ambientParticles->ObjectClass != this ) /*0x6e4fc3*/
            {
              ++v3; /*0x6e4fc5*/
              ambientParticles = (ParticleSystemClass *)((char *)ambientParticles + 4); /*0x6e4fc6*/
              if ( v3 >= (int)FootClass_Array.? ) /*0x6e4fcb*/
                goto LABEL_9; /*0x6e4fcb*/
            }
          }
          v5 = dword_A83CDC; /*0x6e4fd0*/
          if ( dword_A83CDC >= v3 ) /*0x6e4fd8*/
          {
            --dword_A83CDC; /*0x6e4fdd*/
            if ( v5 - 1 < 0 && !FootClass_Array.? ) /*0x6e4fe6*/
              dword_A83CDC = 0; /*0x6e4fe8*/
          }
        }
      }
    }
    if ( byte_A8E9A0 ) /*0x6e4ff5*/
    {
      if ( stru_A8EB00.?[376] ) /*0x6e5002*/
      {
        v6 = this->buildingType; /*0x6e5004*/
        if ( v6 ) /*0x6e5009*/
        {
          if ( (Debug::AccumFlags((Debug *)v6) & 4) != 0 ) /*0x6e5012*/
          {
            v7 = 0; /*0x6e501a*/
            if ( FootClass_Array.?[0] <= 0 ) /*0x6e501e*/
            {
LABEL_22:
              v7 = -1; /*0x6e5032*/
            }
            else
            {
              v8 = (TagClass **)FootClass_Array.?[5]; /*0x6e5020*/
              while ( *v8 != this ) /*0x6e5028*/
              {
                ++v7; /*0x6e502a*/
                ++v8; /*0x6e502b*/
                if ( v7 >= FootClass_Array.?[0] ) /*0x6e5030*/
                  goto LABEL_22; /*0x6e5030*/
              }
            }
            SuperClass_field_0x6C = stru_A83D50.SuperClass_field_0x6C; /*0x6e5035*/
            if ( (int)stru_A83D50.SuperClass_field_0x6C >= v7 ) /*0x6e503d*/
            {
              --stru_A83D50.SuperClass_field_0x6C; /*0x6e5042*/
              if ( (int)SuperClass_field_0x6C - 1 < 0 && !FootClass_Array.?[0] ) /*0x6e504b*/
                stru_A83D50.SuperClass_field_0x6C = 0; /*0x6e504d*/
            }
          }
        }
      }
      if ( byte_A8E9A0 ) /*0x6e505a*/
      {
        if ( stru_A8EB00.?[376] ) /*0x6e5063*/
        {
          firstTrigger = this->firstTrigger; /*0x6e5065*/
          if ( firstTrigger ) /*0x6e506a*/
          {
            v11 = firstTrigger->buildingType; /*0x6e506c*/
            if ( v11 ) /*0x6e5071*/
            {
              if ( v11->House && TagClass::HasValidHouse((TagClass *)this->buildingType) ) /*0x6e5080*/
              {
                Owner = HouseClass::FindOwner((HouseClass *)this->firstTrigger->buildingType->House->arrayIndex2); /*0x6e509b*/
                v13 = *(_DWORD *)(Owner + 636); /*0x6e50a0*/
                if ( v13 ) /*0x6e50a8*/
                  *(_DWORD *)(Owner + 636) = v13 - 1; /*0x6e50ab*/
                v14 = (_DWORD *)(Owner + 664); /*0x6e50b7*/
                *v14 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6e50c1*/
                v14[1] = v22[2]; /*0x6e50c7*/
                v14[2] = 60; /*0x6e50ca*/
              }
            }
          }
        }
      }
    }
  }
  v15 = this->firstTrigger; /*0x6e50cd*/
  if ( v15 ) /*0x6e50d2*/
  {
    v16 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x6e50d4*/
    do /*0x6e50d9*/
    {
      if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < v16 ) /*0x6e50df*/
        goto LABEL_43; /*0x6e50df*/
      if ( !g_BuildingLoadQueue_Array.__pad_E5C[9] && v16 || g_BuildingLoadQueue_Array.UnitExitSound <= 0 ) /*0x6e50f7*/
        goto LABEL_45; /*0x6e50f7*/
      if ( (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))( /*0x6e5109*/
             &g_BuildingLoadQueue_Array.ToTile,
             v16 + g_BuildingLoadQueue_Array.UnitExitSound,
             0) )
      {
LABEL_43:
        v17 = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x6e5116*/
        *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * v17) = v15; /*0x6e5125*/
      }
      v16 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x6e5128*/
LABEL_45:
      v15 = v15->nextTrigger; /*0x6e512d*/
    }
    while ( v15 ); /*0x6e50d9*/
  }
  v22[0] = this; /*0x6e5134*/
  v18 = (*(int (__thiscall **)(int *, _DWORD *))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6e5147*/
          &g_BuildingLoadQueue_Array.LightVisibility,
          v22);
  if ( v18 != -1 && v18 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x6e5157*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x6e515c*/
    for ( ; /*0x6e5162*/
          v18 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v18 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                          + 4 * v18) )
    {
      ++v18; /*0x6e516a*/
    }
  }
  v22[0] = this; /*0x6e518c*/
  v19 = (*(int (__thiscall **)(int *, _DWORD *))(g_BuildingLoadQueue_Array.ExitCoord[0] + 16))( /*0x6e5190*/
          g_BuildingLoadQueue_Array.ExitCoord,
          v22);
  if ( v19 != -1 && v19 < g_BuildingLoadQueue_Array.unknown___2 ) /*0x6e51a0*/
  {
    --g_BuildingLoadQueue_Array.unknown___2; /*0x6e51a5*/
    for ( ; /*0x6e51ab*/
          v19 < g_BuildingLoadQueue_Array.unknown___2;
          *(_DWORD *)(g_BuildingLoadQueue_Array.ExitCoord[1] + 4 * v19 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.ExitCoord[1]
                                                                                        + 4 * v19) )
    {
      ++v19; /*0x6e51b3*/
    }
  }
  v22[0] = this; /*0x6e51d5*/
  v20 = (*(int (__thiscall **)(int *, _DWORD *))(TagClass_Array + 16))(&TagClass_Array, v22); /*0x6e51d9*/
  if ( v20 != -1 && v20 < g_GameObjectCleanup && v20 < --g_GameObjectCleanup ) /*0x6e51f4*/
  {
    do /*0x6e520c*/
    {
      ++v20; /*0x6e51fc*/
      *((_DWORD *)g_TagClassCount + v20 - 1) = *((_DWORD *)g_TagClassCount + v20); /*0x6e5200*/
    }
    while ( v20 < g_GameObjectCleanup ); /*0x6e520c*/
  }
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x6e5212*/
  return AbstractClass::DTOR((AbstractClass *)this); /*0x6e521e*/
}



// ==== 0x006E5230  TagClass::Destroy  this=TagClass  sig=csp ====
int __thiscall TagClass::Destroy(TagClass *this)
{
  int result; // eax

  this->destroyed = 1; /*0x6e5233*/
  result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x6e5237*/
  if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x6e5270*/
    || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
    && g_BuildingLoadQueue_Array.UnitExitSound > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))(
                   &g_BuildingLoadQueue_Array.ToTile,
                   *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
                   0),
        (_BYTE)result) )
  {
    result = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x6e5278*/
    *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * result) = this; /*0x6e5287*/
  }
  return result; /*0x6e528a*/
}



// ==== 0x006E5290  ObjectClass::method_6E5290  this=ObjectClass  sig=csp ====
char __thiscall sub_6E5290(ObjectClass *this)
{
  return (char)this->attachedTag; /*0x6e5293*/
}



// ==== 0x006E52A0  TeamClass::FindOrCreate  this=TeamClass  sig=csp ====
int __thiscall TeamClass::FindOrCreate(TeamClass *this)
{
  int v2; // ecx
  char *v3; // edx
  int result; // eax
  int v5; // eax

  v2 = 0; /*0x6e52aa*/
  if ( g_GameObjectCleanup <= 0 ) /*0x6e52ae*/
  {
LABEL_5:
    v5 = __2_YAPAXI_Z(0x38u); /*0x6e52c5*/
    if ( v5 ) /*0x6e52d1*/
      return TeknoClass::GetType(v5, (int)this); /*0x6e52d6*/
    else
      return 0; /*0x6e52de*/
  }
  else
  {
    v3 = (char *)g_TagClassCount; /*0x6e52b0*/
    while ( 1 ) /*0x6e52b6*/
    {
      result = *(_DWORD *)v3; /*0x6e52b6*/
      if ( *(TeamClass **)(*(_DWORD *)v3 + 36) == this ) /*0x6e52bb*/
        break; /*0x6e52bb*/
      ++v2; /*0x6e52bd*/
      v3 += 4; /*0x6e52be*/
      if ( v2 >= g_GameObjectCleanup ) /*0x6e52c3*/
        goto LABEL_5; /*0x6e52c3*/
    }
  }
  return result; /*0x6e52db*/
}



// ==== 0x006E52F0  FootClass::processScriptAction  this=FootClass  sig=csp ====
_DWORD *__thiscall FootClass::processScriptAction(FootClass *this, _DWORD *a2)
{
  *a2 = this->?; /*0x6e52f7*/
  return a2; /*0x6e52f9*/
}



// ==== 0x006E5300  TagClass::HasCrossesVerticalLineEvent  this=TagClass  sig=csp ====
bool __thiscall TagClass::HasCrossesVerticalLineEvent(TagClass *this)
{
  TagTypeClass *buildingType; // ecx

  buildingType = this->buildingType; /*0x6e5300*/
  return buildingType && TagTypeClass::HasCrossesVerticalLineEvent(buildingType); /*0x6e5315*/
}



// ==== 0x006E5320  TagClass::HasCrossesHorizontalLineEvent  this=TagClass  sig=csp ====
bool __thiscall TagClass::HasCrossesHorizontalLineEvent(TagClass *this)
{
  TagTypeClass *buildingType; // ecx

  buildingType = this->buildingType; /*0x6e5320*/
  return buildingType && TagTypeClass::HasCrossesHorizontalLineEvent(buildingType); /*0x6e5335*/
}



// ==== 0x006E5340  TagClass::HasZoneEntryByEvent  this=TagClass  sig=csp ====
bool __thiscall TagClass::HasZoneEntryByEvent(TagClass *this)
{
  TagTypeClass *buildingType; // ecx

  buildingType = this->buildingType; /*0x6e5340*/
  return buildingType && TagTypeClass::HasZoneEntryByEvent(buildingType); /*0x6e5355*/
}



// ==== 0x006E5380  LinkedList::Contains  this=LinkedList  sig=csp ====
int __thiscall LinkedList::Contains(LinkedList *this, int a2)
{
  int result; // eax

  result = *((_DWORD *)this + 10); /*0x6e5380*/
  if ( result ) /*0x6e5385*/
  {
    while ( result != a2 ) /*0x6e538d*/
    {
      result = *(_DWORD *)(result + 40); /*0x6e538f*/
      if ( !result ) /*0x6e5394*/
        goto LABEL_4; /*0x6e5394*/
    }
    LOBYTE(result) = 1; /*0x6e539b*/
  }
  else
  {
LABEL_4:
    LOBYTE(result) = 0; /*0x6e5396*/
  }
  return result; /*0x6e5398*/
}



// ==== 0x006E53A0  TeamClass::Update_0  this=TOP  sig=csp ====
int __thiscall TeamClass::Update_0(TeamClass *this, int a2, int a3, int a4, char a5, int a6)
{
  int result; // eax
  char v7; // bl
  TeamClass *currentScript; // esi
  int v10; // eax
  ObjectClass *v11; // eax
  char v12; // [esp+Ah] [ebp-2h]
  char v13; // [esp+Bh] [ebp-1h]

  v7 = 0; /*0x6e53a7*/
  v13 = 0; /*0x6e53ae*/
  v12 = 0; /*0x6e53b2*/
  if ( stru_A8EB00.?[391] /*0x6e53d7*/
    || BYTE1(this->spawnCell)
    || LOBYTE(this->spawnCell)
    || (result = (int)this->buildingType) == 0 )
  {
    LOBYTE(result) = 0; /*0x6e5552*/
  }
  else
  {
    currentScript = (TeamClass *)this->currentScript; /*0x6e53de*/
    for ( BYTE1(this->spawnCell) = 1; currentScript; currentScript = (TeamClass *)currentScript->currentScript ) /*0x6e53ec*/
    {
      if ( TriggerClass::RegisterEvent( /*0x6e5414*/
             (int)currentScript,
             a2,
             a3,
             a5,
             *(_DWORD *)&this->buildingType[1].TeamTypeClass_field_28 == 2,
             a6) )
      {
        v10 = *(_DWORD *)&this->buildingType[1].TeamTypeClass_field_28; /*0x6e5420*/
        if ( !v10 ) /*0x6e5429*/
        {
          BuildingClass::ExecuteTriggers((int)currentScript, a3, a4); /*0x6e546d*/
          result = TeamClass::AddToBuildQueue(currentScript); /*0x6e5474*/
          v7 = 1; /*0x6e5479*/
          v13 = 1; /*0x6e547b*/
LABEL_14:
          v12 = 1; /*0x6e547f*/
          continue; /*0x6e547f*/
        }
        result = v10 - 1; /*0x6e542b*/
        if ( result ) /*0x6e542c*/
        {
          if ( !--result ) /*0x6e542f*/
          {
            result = BuildingClass::ExecuteTriggers((int)currentScript, a3, a4); /*0x6e5439*/
            v7 = 1; /*0x6e543e*/
          }
          continue; /*0x6e5440*/
        }
        if ( this->owner != (HouseClass *)1 ) /*0x6e5446*/
          goto LABEL_14; /*0x6e5446*/
        BuildingClass::ExecuteTriggers((int)currentScript, a3, a4); /*0x6e5450*/
        result = TeamClass::AddToBuildQueue(currentScript); /*0x6e5457*/
        v13 = 1; /*0x6e545c*/
        v7 = 1; /*0x6e5461*/
      }
    }
    BYTE1(this->spawnCell) = 0; /*0x6e548f*/
    if ( v12 ) /*0x6e5499*/
    {
      if ( a3 && *(TeamClass **)(a3 + 52) == this ) /*0x6e54a2*/
        ObjectClass::SetReference((ObjectClass *)a3, 0); /*0x6e54a8*/
      BYTE1(result) = BYTE1(a4); /*0x6e54ad*/
      if ( a4 != dword_B0E700 ) /*0x6e54b9*/
      {
        v11 = (ObjectClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x6e54d5*/
        result = ObjectClass::SetTriggerTarget(v11, 0); /*0x6e54dc*/
      }
    }
    if ( v13 ) /*0x6e54e9*/
    {
      AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x6e54ef*/
      result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x6e54f4*/
      if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x6e552f*/
        || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
        && g_BuildingLoadQueue_Array.UnitExitSound > 0
        && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))(
                       &g_BuildingLoadQueue_Array.ToTile,
                       *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
                       0),
            (_BYTE)result) )
      {
        result = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x6e5537*/
        *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * result) = this; /*0x6e5546*/
      }
    }
    LOBYTE(result) = v7; /*0x6e5549*/
  }
  return result; /*0x6e554b*/
}



// ==== 0x006E5560  ScenarioClass::checkMissionObjectives  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::checkMissionObjectives(ScenarioClass *this, int a2)
{
  this->nextScenario[12] = a2; /*0x6e5564*/
  return a2; /*0x6e5567*/
}



// ==== 0x006E5570  ObjectClass::Map_Reset_6E5570  this=ObjectClass  sig=csp ====
int Map_Reset_6E5570(ObjectClass *this)
{
  int result; // eax

  for ( result = g_GameObjectCleanup; g_GameObjectCleanup > 0; result = g_GameObjectCleanup ) /*0x6e5577*/
  {
    if ( *(_DWORD *)g_TagClassCount ) /*0x6e557e*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)g_TagClassCount + 32))(*(_DWORD *)g_TagClassCount, 1); /*0x6e5588*/
  }
  return result; /*0x6e5594*/
}



// ==== 0x006E55C0  TagClass::AddTrigger  this=TagClass  sig=csp ====
int __thiscall TagClass::AddTrigger(_DWORD *this, int a2)
{
  *(_DWORD *)(a2 + 40) = this->firstTrigger; /*0x6e55c7*/
  this->firstTrigger = a2; /*0x6e55ca*/
  return a2; /*0x6e55cd*/
}



// ==== 0x006E5610  TagClass::CheckEvent  this=TagClass  sig=csp ====
int __thiscall TagClass::CheckEvent(TagClass *this, int a2, int a3)
{
  TriggerClass *firstTrigger; // eax
  int result; // eax

  if ( this->buildingType == (TagTypeClass *)a2 ) /*0x6e561a*/
    this->buildingType = 0; /*0x6e561c*/
  firstTrigger = this->firstTrigger; /*0x6e5623*/
  if ( firstTrigger == (TriggerClass *)a2 ) /*0x6e5628*/
    this->firstTrigger = firstTrigger->nextTrigger; /*0x6e562d*/
  result = (int)this->buildingType; /*0x6e5630*/
  if ( !result ) /*0x6e5635*/
  {
    this->destroyed = 1; /*0x6e5637*/
    result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x6e563b*/
    if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x6e5675*/
      || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
      && g_BuildingLoadQueue_Array.UnitExitSound > 0
      && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))(
                     &g_BuildingLoadQueue_Array.ToTile,
                     *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
                     0),
          (_BYTE)result) )
    {
      result = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x6e567d*/
      *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * result) = this; /*0x6e568c*/
    }
  }
  return result; /*0x6e568f*/
}



// ==== 0x006E56A0  TagClass::ddtor  this=TagClass  sig=csp ====
int __stdcall TagClass::ddtor(TagClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6e56a6*/
    return -2147467261; /*0x6e56a8*/
  *a2 = 1425466418; /*0x6e56b6*/
  a2[1] = 298977773; /*0x6e56be*/
  a2[2] = 1610655148; /*0x6e56c7*/
  a2[3] = unk_7E97CC; /*0x6e56d0*/
  return 0; /*0x6e56ad*/
}



// ==== 0x006E56E0  TagClass::ProcessTag  this=TagClass  sig=csp ====
int __thiscall TagClass::ProcessTag(TagClass *this, int *a2)
{
  int v3; // eax
  TriggerClass *firstTrigger; // eax
  int v5; // eax

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x6e56e9*/
  v3 = (*((int (__stdcall **)(void **))this->buildingType->? + 4))(&this->buildingType->?); /*0x6e56f7*/
  Power::TimerProcess(v3); /*0x6e56fd*/
  firstTrigger = this->firstTrigger; /*0x6e5702*/
  if ( firstTrigger ) /*0x6e5707*/
  {
    v5 = (*((int (__stdcall **)(void **))firstTrigger->? + 4))(&firstTrigger->?); /*0x6e5710*/
    firstTrigger = (TriggerClass *)Power::TimerProcess(v5); /*0x6e5716*/
  }
  LOBYTE(firstTrigger) = this->destroyed; /*0x6e571b*/
  return Power::FlagProcess((Power *)a2, (int)firstTrigger); /*0x6e5726*/
}



// ==== 0x006E5730  TagClass::LoadTag  this=TagClass  sig=csp ====
int __stdcall TagClass::LoadTag(TagClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6e573b*/
  if ( result >= 0 ) /*0x6e5742*/
  {
    if ( this ) /*0x6e5746*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x6e574f*/
      this->AbstractClass = &TagClass::`vftable'; /*0x6e5754*/
      this->? = &TagClass::`vftable'; /*0x6e575a*/
      this->? = &TagClass::`vftable'; /*0x6e5761*/
      this->? = &TagClass::`vftable'; /*0x6e5768*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->buildingType); /*0x6e5778*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->firstTrigger); /*0x6e5786*/
    return 0; /*0x6e578b*/
  }
  return result; /*0x6e578d*/
}



// ==== 0x006E57A0  TagClass::SaveTag  this=TagClass  sig=csp ====
int __stdcall TagClass::SaveTag(TagClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6e57af*/
  if ( result >= 0 ) /*0x6e57b6*/
    return 0; /*0x6e57b8*/
  return result; /*0x6e57ba*/
}



// ==== 0x006E57C0  TechnoClass::HasAnyMission  this=TOP  sig=csp ====
int __thiscall TechnoClass::HasAnyMission(TechnoClass *this)
{
  int result; // eax
  std::codecvt_base *v2; // ecx

  result = this->?; /*0x6e57c0*/
  if ( result ) /*0x6e57c5*/
  {
    while ( 1 ) /*0x6e57c7*/
    {
      v2 = *(std::codecvt_base **)(result + 36); /*0x6e57c7*/
      if ( *((_BYTE *)v2 + 160) ) /*0x6e57ca*/
        break; /*0x6e57ca*/
      result = *(_DWORD *)(result + 40); /*0x6e57d4*/
      if ( !result ) /*0x6e57d9*/
        goto LABEL_4; /*0x6e57d9*/
    }
    LOBYTE(result) = _do_always_noconv_codecvt_base_std__MBE_NXZ_18(v2); /*0x6e57d2*/
  }
  else
  {
LABEL_4:
    LOBYTE(result) = 0; /*0x6e57db*/
  }
  return result; /*0x6e57dd*/
}



// ==== 0x006E57DE  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_18  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_18(std::codecvt_base *this)
{
  return 1; /*0x6e57e0*/
}



// ==== 0x006E57F0  HouseClass::UpdateAllTypes  this=HouseClass  sig=csp ====
int __thiscall HouseClass::UpdateAllTypes(HouseClass *this)
{
  int result; // eax
  int i; // esi

  result = g_GameObjectCleanup; /*0x6e57f0*/
  for ( i = 0; i < g_GameObjectCleanup; ++i ) /*0x6e57fd*/
  {
    TriggerClass::NotifyGlobalChanged(*(TriggerClass **)(*((_DWORD *)g_TagClassCount + i) + 40), (int)this); /*0x6e580b*/
    result = g_GameObjectCleanup; /*0x6e5810*/
  }
  return result; /*0x6e581a*/
}



// ==== 0x006E5820  TriggerActionQueue::ProcessAll  this=TriggerActionQueue  sig=csp ====
int __thiscall TriggerActionQueue::ProcessAll(TriggerActionQueue *this)
{
  int result; // eax
  int i; // esi

  result = g_GameObjectCleanup; /*0x6e5820*/
  for ( i = 0; i < g_GameObjectCleanup; ++i ) /*0x6e582d*/
  {
    TriggerClass::NotifyLocalChanged(*(TriggerClass **)(*((_DWORD *)g_TagClassCount + i) + 40), (int)this); /*0x6e583b*/
    result = g_GameObjectCleanup; /*0x6e5840*/
  }
  return result; /*0x6e584a*/
}



// ==== 0x006E5850  TagClass::IsOnlyInstanceOfType  this=TagClass  sig=csp ====
bool __thiscall TagClass::IsOnlyInstanceOfType(TagClass *this)
{
  int v1; // edx
  char *i; // esi

  v1 = 0; /*0x6e5859*/
  if ( g_GameObjectCleanup <= 0 ) /*0x6e585d*/
    return 1; /*0x6e587d*/
  for ( i = (char *)g_TagClassCount; /*0x6e585f*/
        *(TagClass **)i == this || *(TagTypeClass **)(*(_DWORD *)i + 36) != this->buildingType;
        i += 4 )
  {
    if ( ++v1 >= g_GameObjectCleanup ) /*0x6e587b*/
      return 1; /*0x6e587b*/
  }
  return 0; /*0x6e587d*/
}



// ==== 0x006E5890  TagClass::StubReturn56  this=TagClass  sig=csp ====
int TagClass::StubReturn56(TagClass *this)
{
  return 56; /*0x6e5895*/
}



// ==== 0x006E58A0  TagClass::StubReturn44  this=TagClass  sig=csp ====
int TagClass::StubReturn44(TagClass *this)
{
  return 44; /*0x6e58a5*/
}



// ==== 0x006E58B0  TagClass::ProcessTrigger  this=TagClass  sig=csp ====
void **__thiscall TagClass::ProcessTrigger(TagClass *this, char a2)
{
  TagClass::Destructor(this); /*0x6e58b3*/
  if ( (a2 & 1) != 0 ) /*0x6e58bd*/
    __3_YAXPAX_Z(this); /*0x6e58c0*/
  return &this->AbstractClass; /*0x6e58ca*/
}



// ==== 0x006E58D0  sub_6E58D0  this=-  sig=ida-proto ====
void sub_6E58D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e58dc*/
  dbl_B0E7B8 = Math::Sqrt(v0 + v0); /*0x6e58ee*/
}



// ==== 0x006E5900  sub_6E5900  this=-  sig=ida-proto ====
void sub_6E5900()
{
  dbl_B0E808 = dbl_B0E7B8 / 60.0; /*0x6e590c*/
}



// ==== 0x006E5920  sub_6E5920  this=-  sig=ida-proto ====
void sub_6E5920()
{
  dbl_B0E7F0 = 1.0 / dbl_B0E808; /*0x6e592c*/
}



// ==== 0x006E5940  sub_6E5940  this=-  sig=ida-proto ====
void sub_6E5940()
{
  dbl_B0E7E8 = 0.0174532925199433 * 45.0; /*0x6e594c*/
}



// ==== 0x006E5960  sub_6E5960  this=-  sig=ida-proto ====
void sub_6E5960()
{
  dbl_B0E7C0 = 0.0174532925199433 * 60.0; /*0x6e596c*/
}



// ==== 0x006E5980  sub_6E5980  this=-  sig=ida-proto ====
void sub_6E5980()
{
  dbl_B0E798 = 0.0174532925199433 * 90.0; /*0x6e598c*/
}



// ==== 0x006E59A0  sub_6E59A0  this=-  sig=ida-proto ====
__int64 sub_6E59A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E798 - dbl_B0E7C0); /*0x6e59b2*/
  result = Math::RoundToInt(v0 * dbl_B0E7B8 * 0.5); /*0x6e59c6*/
  dword_B0E810 = result; /*0x6e59cb*/
  return result; /*0x6e59d0*/
}



// ==== 0x006E59E0  sub_6E59E0  this=-  sig=ida-proto ====
void sub_6E59E0()
{
  dbl_B0E7C8 = Math::ArcTan((double)dword_B0E810 * 0.00390625); /*0x6e59f7*/
}



// ==== 0x006E5A10  sub_6E5A10  this=-  sig=ida-proto ====
void sub_6E5A10()
{
  dbl_B0E7E0 = Math::ArcTan((double)(2 * dword_B0E810) / dbl_B0E7B8); /*0x6e5a32*/
}



// ==== 0x006E5A40  sub_6E5A40  this=-  sig=ida-proto ====
__int64 sub_6E5A40()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E810) + 0.5); /*0x6e5a5b*/
  dword_B0E804 = result; /*0x6e5a60*/
  return result; /*0x6e5a66*/
}



// ==== 0x006E5A70  sub_6E5A70  this=-  sig=ida-proto ====
int sub_6E5A70()
{
  word_B0E7B0 = 0; /*0x6e5a72*/
  word_B0E7B2 = 0; /*0x6e5a78*/
  return 0; /*0x6e5a7e*/
}



// ==== 0x006E5A80  sub_6E5A80  this=-  sig=ida-proto ====
int sub_6E5A80()
{
  dword_B0E7D0 = 0; /*0x6e5a82*/
  dword_B0E7D4 = 0; /*0x6e5a87*/
  dword_B0E7D8 = 0; /*0x6e5a8c*/
  return 0; /*0x6e5a91*/
}



// ==== 0x006E5AA0  sub_6E5AA0  this=-  sig=ida-proto ====
int sub_6E5AA0()
{
  dword_B0E800 = 0; /*0x6e5aa5*/
  dword_B0E7F8 = 128; /*0x6e5aaf*/
  dword_B0E7FC = 128; /*0x6e5ab4*/
  return 128; /*0x6e5ab9*/
}



// ==== 0x006E5AC0  sub_6E5AC0  this=-  sig=ida-proto ====
int sub_6E5AC0()
{
  dword_B0E7A0 = 0; /*0x6e5ac2*/
  dword_B0E7A4 = 0; /*0x6e5ac7*/
  dword_B0E7A8 = 0; /*0x6e5acc*/
  dword_B0E7AC = 0; /*0x6e5ad1*/
  return 0; /*0x6e5ad6*/
}



// ==== 0x006E5AE0  sub_6E5AE0  this=-  sig=ida-proto ====
int sub_6E5AE0()
{
  dword_B0E784 = 0; /*0x6e5ae7*/
  dword_B0E788 = 0; /*0x6e5aec*/
  byte_B0E78C = 1; /*0x6e5af1*/
  byte_B0E78D = 0; /*0x6e5af8*/
  dword_B0E780 = (int)&DynamicVectorClass<TagTypeClass *>::`vftable'; /*0x6e5afd*/
  dword_B0E794 = 10; /*0x6e5b07*/
  g_MultiplayerCleanup = 0; /*0x6e5b11*/
  return atexit(sub_6E5B20); /*0x6e5b1c*/
}



// ==== 0x006E5B20  sub_6E5B20  this=-  sig=ida-proto ====
void __cdecl sub_6E5B20()
{
  dword_B0E780 = (int)&VectorClass<TagTypeClass *>::`vftable'; /*0x6e5b28*/
  if ( dword_B0E784 && byte_B0E78D ) /*0x6e5b3c*/
  {
    __3_YAXPAX_Z(dword_B0E784); /*0x6e5b3f*/
    dword_B0E784 = 0; /*0x6e5b47*/
  }
  byte_B0E78D = 0; /*0x6e5b4d*/
  dword_B0E788 = 0; /*0x6e5b53*/
}



// ==== 0x006E5B60  TagTypeClass::Construct  this=AbstractTypeClass  sig=csp ====
char *__thiscall TagTypeClass_Constructor(char *this, char *Source)
{
  int v3; // eax
  int v4; // eax
  char Destination[48]; // [esp+8h] [ebp-34h] BYREF
  char v7; // [esp+38h] [ebp-4h]

  AbstractTypeClass::Constructor((int)this, Source); /*0x6e5b6c*/
  *((_DWORD *)this + 38) = -1; /*0x6e5b78*/
  *((_DWORD *)this + 39) = 0; /*0x6e5b82*/
  this->u32_28 = 0; /*0x6e5b88*/
  *(_DWORD *)this = &TagTypeClass::`vftable'; /*0x6e5b8e*/
  this->vtable2 = &TagTypeClass::`vftable'; /*0x6e5b95*/
  this->vtable3 = &TagTypeClass::`vftable'; /*0x6e5b9c*/
  this->vtable4 = &TagTypeClass::`vftable'; /*0x6e5ba3*/
  if ( this == (char *)-36 ) /*0x6e5baa*/
  {
    Destination[0] = 0; /*0x6e5bac*/
  }
  else
  {
    strncpy(Destination, this + 36, 0x30u); /*0x6e5bba*/
    v7 = 0; /*0x6e5bc2*/
  }
  if ( Destination != this + 100 ) /*0x6e5bd0*/
  {
    qmemcpy(this + 100, Destination, 0x30u); /*0x6e5bdc*/
    this->q094 = v7; /*0x6e5bde*/
  }
  *((_DWORD *)this + 38) = g_MultiplayerCleanup; /*0x6e5be6*/
  if ( g_MultiplayerCleanup < dword_B0E788 /*0x6e5c1e*/
    || (byte_B0E78D || !dword_B0E788)
    && dword_B0E794 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0E780 + 8))(
         &dword_B0E780,
         dword_B0E788 + dword_B0E794,
         0) )
  {
    v3 = g_MultiplayerCleanup++; /*0x6e5c2b*/
    *((_DWORD *)dword_B0E784 + v3) = this; /*0x6e5c3a*/
  }
  if ( dword_B0F680 < dword_B0F678 /*0x6e5c71*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F678 + dword_B0F684,
         0) )
  {
    v4 = dword_B0F680++; /*0x6e5c7e*/
    *((_DWORD *)dword_B0F674 + v4) = this; /*0x6e5c8d*/
  }
  return this; /*0x6e5c92*/
}



// ==== 0x006E5CA0  TagTypeClass::CleanupMembers  this=TagTypeClass  sig=csp ====
int __thiscall TagTypeClass::CleanupMembers(AbstractTypeClass *this)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // esi
  int v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // eax
  AbstractTypeClass *v10; // [esp+Ch] [ebp-4h] BYREF

  this->AbstractClass = &TagTypeClass::`vftable'; /*0x6e5ca7*/
  this->? = &TagTypeClass::`vftable'; /*0x6e5cad*/
  this->? = &TagTypeClass::`vftable'; /*0x6e5cb4*/
  this->? = &TagTypeClass::`vftable'; /*0x6e5cbb*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x6e5cc2*/
  v2 = (_DWORD *)this->persistence; /*0x6e5cc7*/
  this->persistence = 0; /*0x6e5ccd*/
  if ( v2 ) /*0x6e5cd9*/
  {
    do /*0x6e5cfa*/
    {
      v3 = (_DWORD *)v2[42]; /*0x6e5cdb*/
      v2[42] = 0; /*0x6e5ce1*/
      if ( v2 ) /*0x6e5ced*/
        (*(void (__thiscall **)(_DWORD *, int))(*v2 + 32))(v2, 1); /*0x6e5cf3*/
      v2 = v3; /*0x6e5cf8*/
    }
    while ( v3 ); /*0x6e5cfa*/
  }
  v4 = 0; /*0x6e5d01*/
  if ( g_GameObjectCleanup > 0 ) /*0x6e5d05*/
  {
    v5 = g_TagClassCount; /*0x6e5d07*/
    do /*0x6e5d2e*/
    {
      v6 = (_DWORD *)v5[v4]; /*0x6e5d0c*/
      if ( (AbstractTypeClass *)v6[9] == this ) /*0x6e5d12*/
      {
        if ( v6 ) /*0x6e5d16*/
        {
          (*(void (__thiscall **)(_DWORD *, int))(*v6 + 32))(v6, 1); /*0x6e5d1c*/
          v5 = g_TagClassCount; /*0x6e5d1f*/
        }
        --v4; /*0x6e5d24*/
      }
      ++v4; /*0x6e5d2b*/
    }
    while ( v4 < g_GameObjectCleanup ); /*0x6e5d2e*/
  }
  v10 = this; /*0x6e5d40*/
  v7 = (*(int (__thiscall **)(int *, AbstractTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6e5d44*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v10);
  if ( v7 != -1 && v7 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x6e5d54*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x6e5d59*/
    for ( ; /*0x6e5d5f*/
          v7 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v7) )
    {
      ++v7; /*0x6e5d67*/
    }
  }
  v10 = this; /*0x6e5d89*/
  v8 = (*(int (__thiscall **)(int *, AbstractTypeClass **))(dword_B0E780 + 16))(&dword_B0E780, &v10); /*0x6e5d8d*/
  if ( v8 != -1 && v8 < g_MultiplayerCleanup && v8 < --g_MultiplayerCleanup ) /*0x6e5da8*/
  {
    do /*0x6e5dc0*/
    {
      ++v8; /*0x6e5db0*/
      *((_DWORD *)dword_B0E784 + v8 - 1) = *((_DWORD *)dword_B0E784 + v8); /*0x6e5db4*/
    }
    while ( v8 < g_MultiplayerCleanup ); /*0x6e5dc0*/
  }
  return AbstractTypeClass::Dtor(this); /*0x6e5dc9*/
}



// ==== 0x006E5E50  TagTypeClass::GetEvent  this=TagTypeClass  sig=csp ====
int __thiscall TagTypeClass::GetEvent(TagTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = this->persistence; /*0x6e5e50*/
  if ( result == a2 ) /*0x6e5e5c*/
  {
    result = *(_DWORD *)(result + 168); /*0x6e5e5e*/
    this->persistence = result; /*0x6e5e64*/
  }
  return result; /*0x6e5e6a*/
}



// ==== 0x006E5E70  ObjectTypeClass::FindByName  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::FindByName(ObjectTypeClass *this)
{
  int v2; // ebx
  int v3; // esi

  if ( !this ) /*0x6e5e77*/
    return 0; /*0x6e5e77*/
  v2 = 0; /*0x6e5e7e*/
  if ( g_MultiplayerCleanup <= 0 ) /*0x6e5e82*/
    return 0; /*0x6e5eb8*/
  while ( 1 ) /*0x6e5e8a*/
  {
    v3 = *((_DWORD *)dword_B0E784 + v2); /*0x6e5e8a*/
    if ( !_strcmpi((char *)(v3 + 36), (char *)this) || !_strcmpi((char *)(v3 + 100), (char *)this) ) /*0x6e5ea2*/
      break; /*0x6e5ea2*/
    if ( ++v2 >= g_MultiplayerCleanup ) /*0x6e5eb6*/
      return 0; /*0x6e5eb6*/
  }
  return v3; /*0x6e5eb8*/
}



// ==== 0x006E5ED0  CCINIClass::ProcessSection  this=INIClass  sig=csp ====
int __thiscall CCINIClass::ProcessSection(INIClass *this)
{
  int result; // eax
  int v3; // esi
  int v4; // ebp
  unsigned __int8 *StringByIndex; // edi
  int v6; // esi
  char *v7; // eax
  char *v8; // esi
  int v9; // eax
  int v10; // [esp+Ch] [ebp-1Ch]
  char Destination[24]; // [esp+10h] [ebp-18h] BYREF

  result = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)&stru_842C2C.SuperWeaponClass_field_0x10); /*0x6e5ede*/
  v3 = result; /*0x6e5ee3*/
  v4 = 0; /*0x6e5ee5*/
  v10 = result; /*0x6e5ee9*/
  if ( result > 0 ) /*0x6e5eed*/
  {
    while ( 1 ) /*0x6e5f07*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x6e5f07*/
                                           this->__pad_0,
                                           (unsigned __int8 *)&stru_842C2C.SuperWeaponClass_field_0x10,
                                           v4);
      result = INIClass::GetString( /*0x6e5f1a*/
                 this,
                 (unsigned __int8 *)&stru_842C2C.SuperWeaponClass_field_0x10,
                 StringByIndex,
                 &g_INI_DefaultBuffer,
                 Destination,
                 24);
      if ( result > 0 ) /*0x6e5f21*/
        break; /*0x6e5f21*/
LABEL_13:
      if ( ++v4 >= v3 ) /*0x6e5fc5*/
        return result; /*0x6e5fc5*/
    }
    if ( !_strcmpi(g_Str__none_, (char *)StringByIndex) || !_strcmpi(g_Str_none, (char *)StringByIndex) ) /*0x6e5f3f*/
      goto LABEL_11; /*0x6e5f3f*/
    v6 = 0; /*0x6e5f50*/
    if ( g_MultiplayerCleanup > 0 ) /*0x6e5f54*/
    {
      while ( _strcmpi((char *)(*((_DWORD *)dword_B0E784 + v6) + 36), (char *)StringByIndex) ) /*0x6e5f6e*/
      {
        if ( ++v6 >= g_MultiplayerCleanup ) /*0x6e5f78*/
          goto LABEL_8; /*0x6e5f78*/
      }
      v8 = (char *)*((_DWORD *)dword_B0E784 + v6); /*0x6e5f9c*/
      goto LABEL_12; /*0x6e5f9f*/
    }
LABEL_8:
    v7 = (char *)__2_YAPAXI_Z(0xA4u); /*0x6e5f7f*/
    if ( v7 ) /*0x6e5f89*/
      v8 = TagTypeClass::Construct(v7, (char *)StringByIndex); /*0x6e5f93*/
    else
LABEL_11:
      v8 = 0; /*0x6e5fa1*/
LABEL_12:
    v9 = sub_412610((char *)StringByIndex); /*0x6e5fa3*/
    SwizzleManagerClass::Here_I_Am((int)&SwizzleManagerClass_Instance, v9, (int)v8); /*0x6e5fb1*/
    result = (*(int (__thiscall **)(char *, INIClass *))(*(_DWORD *)v8 + 100))(v8, this); /*0x6e5fbb*/
    v3 = v10; /*0x6e5fbe*/
    goto LABEL_13; /*0x6e5fbe*/
  }
  return result; /*0x6e5fcc*/
}



// ==== 0x006E5FE0  ObjectClass::SaveTriggerTagsToINI  this=INIClass  sig=csp ====
int __thiscall SaveTriggerTagsToINI(INIClass *this)
{
  int KeyCount; // ebx
  int i; // edi
  unsigned __int8 *StringByIndex; // eax
  int result; // eax
  int j; // edi
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF

  KeyCount = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)&stru_842C2C.SuperWeaponClass_field_0x10); /*0x6e5ff3*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6e5ff9*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x6e6005*/
                                         this->__pad_0,
                                         (unsigned __int8 *)&stru_842C2C.SuperWeaponClass_field_0x10,
                                         i);
    INIClass::GetString( /*0x6e601f*/
      this,
      (unsigned __int8 *)&stru_842C2C.SuperWeaponClass_field_0x10,
      StringByIndex,
      &g_INI_DefaultBuffer,
      Destination,
      32);
    INIClass::ClearSection((int *)this->__pad_0, (int)Destination, 0); /*0x6e602d*/
  }
  INIClass::ClearSection((int *)this->__pad_0, (int)&stru_842C2C.SuperWeaponClass_field_0x10, 0); /*0x6e6042*/
  result = g_MultiplayerCleanup; /*0x6e6047*/
  for ( j = 0; j < g_MultiplayerCleanup; ++j ) /*0x6e6050*/
  {
    (*(void (__thiscall **)(_DWORD, INIClass *))(**((_DWORD **)dword_B0E784 + j) + 104))( /*0x6e605d*/
      *((_DWORD *)dword_B0E784 + j),
      this);
    result = g_MultiplayerCleanup; /*0x6e6060*/
  }
  return result; /*0x6e606a*/
}



// ==== 0x006E6080  TagTypeClass::GetAction  this=TagTypeClass  sig=csp ====
char __thiscall TagTypeClass::GetAction(TagTypeClass *this, unsigned __int8 ***a2)
{
  char *v3; // eax
  char *v4; // eax
  char Destination[48]; // [esp+8h] [ebp-B4h] BYREF
  char v7; // [esp+38h] [ebp-84h]
  char String[128]; // [esp+3Ch] [ebp-80h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x6e6093*/
  if ( !INIClass::GetString( /*0x6e60b4*/
          (INIClass *)a2,
          (unsigned __int8 *)&stru_842C2C.SuperWeaponClass_field_0x10,
          (unsigned __int8 *)&this->arrayIndex,
          &g_INI_DefaultBuffer,
          String,
          128) )
    return 0; /*0x6e6151*/
  strtok(String, Str); /*0x6e60cb*/
  *((_DWORD *)this + 39) = atoi(String); /*0x6e60e1*/
  v3 = strtok(0, Str); /*0x6e60e7*/
  if ( v3 ) /*0x6e60f1*/
  {
    strncpy(Destination, v3, 0x30u); /*0x6e6101*/
    v7 = 0; /*0x6e6109*/
  }
  else
  {
    Destination[0] = 0; /*0x6e60f3*/
  }
  if ( Destination != (char *)this + 100 ) /*0x6e6118*/
  {
    qmemcpy((char *)this + 100, Destination, 0x30u); /*0x6e6123*/
    *((_BYTE *)this + 148) = v7; /*0x6e6125*/
  }
  v4 = strtok(0, Str); /*0x6e612d*/
  this->persistence = TagTypeClass::FindOrCreateTriggerType(v4); /*0x6e613d*/
  return 1; /*0x6e6143*/
}



// ==== 0x006E6160  TagTypeClass::GetParameter  this=TagTypeClass  sig=csp ====
char __thiscall TagTypeClass::GetParameter(TagTypeClass *this, char *a2)
{
  int v3; // eax
  CHAR Source[128]; // [esp+4h] [ebp-80h] BYREF

  v3 = this->persistence; /*0x6e6169*/
  if ( v3 ) /*0x6e6171*/
    wsprintfA(Source, "%d,%s,%s", *((_DWORD *)this + 39), (const char *)this + 100, (const char *)(v3 + 36)); /*0x6e61b4*/
  else
    wsprintfA(Source, "%s,<none>", (const char *)this + 100); /*0x6e6181*/
  INIClass::SetString( /*0x6e6199*/
    a2,
    (unsigned __int8 *)&stru_842C2C.SuperWeaponClass_field_0x10,
    (char *)&this->arrayIndex,
    Source);
  return 1; /*0x6e61db*/
}



// ==== 0x006E61F0  Debug::AccumFlags  this=TagTypeClass  sig=csp ====
int __thiscall Debug::AccumFlags(Debug *this)
{
  TriggerTypeClass *Debug_field_0xA0; // esi
  int i; // edi
  int Flags; // eax

  Debug_field_0xA0 = (TriggerTypeClass *)this->Debug_field_0xA0; /*0x6e61f1*/
  for ( i = 0; Debug_field_0xA0; i |= Flags ) /*0x6e61fc*/
  {
    Flags = TriggerTypeClass::GetFlags(Debug_field_0xA0); /*0x6e6200*/
    Debug_field_0xA0 = Debug_field_0xA0->NextTrigger; /*0x6e6205*/
  }
  return i; /*0x6e6213*/
}



// ==== 0x006E6220  TagClass::HasValidHouse  this=TOP  sig=csp ====
char __thiscall TagClass::HasValidHouse(TagClass *this)
{
  HouseClass *v1; // esi

  v1 = (HouseClass *)this->u32_28; /*0x6e6221*/
  if ( !v1 ) /*0x6e6229*/
    return 0; /*0x6e6240*/
  while ( !HouseClass::FindType15(v1) ) /*0x6e6234*/
  {
    v1 = (HouseClass *)v1->psychicDetectionCount; /*0x6e6236*/
    if ( !v1 ) /*0x6e623e*/
      return 0; /*0x6e623e*/
  }
  return 1; /*0x6e6242*/
}



// ==== 0x006E6250  TagTypeClass::HasCrossesHorizontalLineEvent  this=TagTypeClass  sig=csp ====
bool __thiscall TagTypeClass::HasCrossesHorizontalLineEvent(TagTypeClass *this)
{
  HouseClass *v1; // esi

  v1 = (HouseClass *)this->persistence; /*0x6e6251*/
  if ( !v1 ) /*0x6e6259*/
    return 0; /*0x6e6270*/
  while ( !(unsigned __int8)HouseClass::HasType25Building(v1) ) /*0x6e6264*/
  {
    v1 = (HouseClass *)v1->psychicDetectionCount; /*0x6e6266*/
    if ( !v1 ) /*0x6e626e*/
      return 0; /*0x6e626e*/
  }
  return 1; /*0x6e6272*/
}



// ==== 0x006E6280  TagTypeClass::HasCrossesVerticalLineEvent  this=TagTypeClass  sig=csp ====
bool __thiscall TagTypeClass::HasCrossesVerticalLineEvent(TagTypeClass *this)
{
  HouseClass *v1; // esi

  v1 = (HouseClass *)this->persistence; /*0x6e6281*/
  if ( !v1 ) /*0x6e6289*/
    return 0; /*0x6e62a0*/
  while ( !(unsigned __int8)HouseClass::HasType26Building(v1) ) /*0x6e6294*/
  {
    v1 = (HouseClass *)v1->psychicDetectionCount; /*0x6e6296*/
    if ( !v1 ) /*0x6e629e*/
      return 0; /*0x6e629e*/
  }
  return 1; /*0x6e62a2*/
}



// ==== 0x006E62B0  TagTypeClass::HasZoneEntryByEvent  this=TagTypeClass  sig=csp ====
bool __thiscall TagTypeClass::HasZoneEntryByEvent(TagTypeClass *this)
{
  HouseClass *v1; // esi

  v1 = (HouseClass *)this->persistence; /*0x6e62b1*/
  if ( !v1 ) /*0x6e62b9*/
    return 0; /*0x6e62d0*/
  while ( !HouseClass::FindType24(v1) ) /*0x6e62c4*/
  {
    v1 = (HouseClass *)v1->psychicDetectionCount; /*0x6e62c6*/
    if ( !v1 ) /*0x6e62ce*/
      return 0; /*0x6e62ce*/
  }
  return 1; /*0x6e62d2*/
}



// ==== 0x006E6310  TagTypeClass::FindOrCreate  this=Coord  sig=csp ====
char *__thiscall TagTypeClass::FindOrCreate(char *Source)
{
  int v2; // esi
  char *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e632c*/
    return 0; /*0x6e638f*/
  v2 = 0; /*0x6e633d*/
  if ( g_MultiplayerCleanup <= 0 ) /*0x6e6341*/
  {
LABEL_6:
    v3 = (char *)__2_YAPAXI_Z(0xA4u); /*0x6e6366*/
    if ( v3 ) /*0x6e6375*/
      return TagTypeClass::Construct(v3, Source); /*0x6e6381*/
    return 0; /*0x6e6375*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)dword_B0E784 + v2) + 36), Source) ) /*0x6e635a*/
  {
    if ( ++v2 >= g_MultiplayerCleanup ) /*0x6e6364*/
      goto LABEL_6; /*0x6e6364*/
  }
  return (char *)*((_DWORD *)dword_B0E784 + v2); /*0x6e637f*/
}



// ==== 0x006E63A0  TagTypeClass::GetClassIdentifier  this=TagTypeClass  sig=csp ====
int __stdcall TagTypeClass::GetClassIdentifier(TagTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6e63a6*/
    return -2147467261; /*0x6e63a8*/
  *a2 = 1425466419; /*0x6e63b6*/
  a2[1] = 298977773; /*0x6e63be*/
  a2[2] = 1610655148; /*0x6e63c7*/
  a2[3] = unk_7E97DC; /*0x6e63d0*/
  return 0; /*0x6e63ad*/
}



// ==== 0x006E63E0  TagTypeClass::PowerDrainUpdate  this=TagTypeClass  sig=csp ====
int __thiscall TagTypeClass::PowerDrainUpdate(TagTypeClass *this, int *a2)
{
  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x6e63e9*/
  return Power::TimerProcess(*((_DWORD *)this + 39)); /*0x6e63fc*/
}



// ==== 0x006E6410  TagTypeClass::LoadTypeData  this=TagTypeClass  sig=csp ====
int __stdcall TagTypeClass::LoadTypeData(TagTypeClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6e641b*/
  if ( result >= 0 ) /*0x6e6422*/
  {
    if ( this ) /*0x6e6426*/
    {
      AbstractTypeClass::Init((int)this, (int)&a2); /*0x6e642f*/
      this->AbstractClass = &TagTypeClass::`vftable'; /*0x6e6434*/
      this->? = &TagTypeClass::`vftable'; /*0x6e643a*/
      this->? = &TagTypeClass::`vftable'; /*0x6e6441*/
      this->? = &TagTypeClass::`vftable'; /*0x6e6448*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 40); /*0x6e645b*/
    return 0; /*0x6e6460*/
  }
  return result; /*0x6e6462*/
}



// ==== 0x006E6470  TagTypeClass::SaveToINI  this=TagTypeClass  sig=csp ====
int __stdcall TagTypeClass::SaveToINI(TagTypeClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6e647f*/
  if ( result >= 0 ) /*0x6e6486*/
    return 0; /*0x6e6488*/
  return result; /*0x6e648a*/
}



// ==== 0x006E6490  TagTypeClass::GetTypeIdentifier  this=TagTypeClass  sig=csp ====
int TagTypeClass::GetTypeIdentifier(TagTypeClass *this)
{
  return 45; /*0x6e6495*/
}



// ==== 0x006E64A0  TagTypeClass::GetObjectSize  this=TagTypeClass  sig=csp ====
int TagTypeClass::GetObjectSize(TagTypeClass *this)
{
  return 164; /*0x6e64a5*/
}



// ==== 0x006E64B0  TagTypeClass::GetAuxField  this=TagTypeClass  sig=csp ====
int __thiscall TagTypeClass::GetAuxField(TagTypeClass *this)
{
  return *((_DWORD *)this + 38); /*0x6e64b6*/
}



// ==== 0x006E64C0  TagTypeClass::ddtor  this=TagTypeClass  sig=csp ====
void *__thiscall TagTypeClass::ddtor(TagTypeClass *this, char a2)
{
  TagTypeClass::CleanupMembers((AbstractTypeClass *)this); /*0x6e64c3*/
  if ( (a2 & 1) != 0 ) /*0x6e64cd*/
    __3_YAXPAX_Z(this); /*0x6e64d0*/
  return this; /*0x6e64da*/
}



// ==== 0x006E64E0  _DynamicVectorClass_PAVTagTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TagTypeClass::Destroy(_DynamicVectorClass_PAVTagTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6e64e6*/
  this->m_10 = 0; /*0x6e64e9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6e64f0*/
  {
    __3_YAXPAX_Z(v2); /*0x6e64f6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6e64fe*/
  }
  BYTE1(this->m_C) = 0; /*0x6e6501*/
  this->m_8 = 0; /*0x6e6504*/
}



// ==== 0x006E6510  _DynamicVectorClass_PAVTagTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TagTypeClass::GetItemIndex(_DynamicVectorClass_PAVTagTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6e6510*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6e6525*/
  else
    return 0; /*0x6e6517*/
}



// ==== 0x006E6530  _VectorClass_PAVTagTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TagTypeClass::Get(_VectorClass_PAVTagTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6e653a*/
}



// ==== 0x006E6540  _VectorClass_PAVTagTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TagTypeClass::Add(_VectorClass_PAVTagTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x6e6542*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6e654d*/
  {
    v3 = 0; /*0x6e654f*/
    if ( m_8 <= 0 ) /*0x6e6553*/
      return 1; /*0x6e6573*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6e6555*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6e655b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6e6564*/
    {
      ++v3; /*0x6e6566*/
      ++v4; /*0x6e6567*/
      if ( v3 >= m_8 ) /*0x6e656c*/
        return 1; /*0x6e656c*/
    }
  }
  return 0; /*0x6e656e*/
}



// ==== 0x006E6580  _VectorClass_PAVTagTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TagTypeClass::Release(_VectorClass_PAVTagTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6e658c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6e6596*/
    if ( a3 ) /*0x6e659c*/
      v4 = a3; /*0x6e65b2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6e65ae*/
    LOBYTE(this->m_C) = 1; /*0x6e65b6*/
    if ( v4 ) /*0x6e65ba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6e65c5*/
      {
        m_8 = this->m_8; /*0x6e65cc*/
        if ( a2 < m_8 ) /*0x6e65d1*/
          m_8 = a2; /*0x6e65d3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6e65d9*/
          ++i; /*0x6e65de*/
        if ( BYTE1(this->m_C) ) /*0x6e65eb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6e65f6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6e65fe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6e6607*/
      this->m_8 = a2; /*0x6e660f*/
      BYTE1(this->m_C) = a3 == 0; /*0x6e6612*/
      return 1; /*0x6e6618*/
    }
    else
    {
      return 0; /*0x6e65bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVTagTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6e6622*/
    return 1; /*0x6e6628*/
  }
}



// ==== 0x006E6630  _VectorClass_PAVTagTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TagTypeClass::Remove(_VectorClass_PAVTagTypeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6e663d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6e6643*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6e664b*/
  }
  BYTE1(this->m_C) = 0; /*0x6e664e*/
  this->m_8 = 0; /*0x6e6651*/
}



// ==== 0x006E6660  _VectorClass_PAVTagTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TagTypeClass::GetSize(_VectorClass_PAVTagTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6e6660*/
    return 0; /*0x6e6668*/
  m_8 = this->m_8; /*0x6e666e*/
  result = 0; /*0x6e6671*/
  if ( m_8 <= 0 ) /*0x6e6675*/
    return -1; /*0x6e668c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6e667b*/
  {
    if ( ++result >= m_8 ) /*0x6e668a*/
      return -1; /*0x6e668a*/
  }
  return result; /*0x6e666a*/
}



// ==== 0x006E66A0  _VectorClass_PAVTagTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TagTypeClass::LoadTypeData(_VectorClass_PAVTagTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6e66a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6e66b5*/
  else
    return 0; /*0x6e66a7*/
}



// ==== 0x006E66C0  _DynamicVectorClass_PAVTagTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TagTypeClass::SetCapacity(
        _DynamicVectorClass_PAVTagTypeClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6e66cc*/
  {
    LOBYTE(this->m_C) = 0; /*0x6e66d2*/
    if ( a3 ) /*0x6e66d8*/
      v4 = a3; /*0x6e66ee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6e66ea*/
    LOBYTE(this->m_C) = 1; /*0x6e66f2*/
    if ( !v4 ) /*0x6e66f6*/
      return 0; /*0x6e676a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6e66f8*/
    {
      m_8 = this->m_8; /*0x6e66ff*/
      if ( a2 < m_8 ) /*0x6e6704*/
        m_8 = a2; /*0x6e6706*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6e670c*/
        ++i; /*0x6e6711*/
      if ( BYTE1(this->m_C) ) /*0x6e671e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6e6729*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6e6731*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x6e673a*/
    this->m_8 = a2; /*0x6e6742*/
    BYTE1(this->m_C) = a3 == 0; /*0x6e6745*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVTagTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6e674e*/
  }
  v7 = this->m_8; /*0x6e6751*/
  if ( v7 < this->m_10 ) /*0x6e6759*/
    this->m_10 = v7; /*0x6e675b*/
  return 1; /*0x6e675e*/
}



// ==== 0x006E6770  _DynamicVectorClass_PAVTagTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TagTypeClass::FindItemIndex(_DynamicVectorClass_PAVTagTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6e6770*/
  result = 0; /*0x6e6773*/
  if ( m_10 <= 0 ) /*0x6e6778*/
    return -1; /*0x6e678f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6e677e*/
  {
    if ( ++result >= m_10 ) /*0x6e678d*/
      return -1; /*0x6e678d*/
  }
  return result; /*0x6e6792*/
}



// ==== 0x006E67A0  _VectorClass_PAVTagTypeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TagTypeClass::QueryInterface(_VectorClass_PAVTagTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6e67a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TagTypeClass *>::`vftable'; /*0x6e67a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6e67b0*/
  {
    __3_YAXPAX_Z(v3); /*0x6e67b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6e67c0*/
  }
  BYTE1(this->m_C) = 0; /*0x6e67cb*/
  this->m_8 = 0; /*0x6e67d1*/
  if ( (a2 & 1) != 0 ) /*0x6e67d8*/
    __3_YAXPAX_Z(this); /*0x6e67db*/
  return this->__pad_0; /*0x6e67e5*/
}



// ==== 0x006E67F0  _DynamicVectorClass_PAVTagTypeClass::Constructor_VectorClass_TagTypeClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TagTypeClass::Constructor_VectorClass_TagTypeClass___(
        _DynamicVectorClass_PAVTagTypeClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6e67f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TagTypeClass *>::`vftable'; /*0x6e67f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6e6800*/
  {
    __3_YAXPAX_Z(v3); /*0x6e6808*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6e6810*/
  }
  BYTE1(this->m_C) = 0; /*0x6e681b*/
  this->m_8 = 0; /*0x6e6821*/
  if ( (a2 & 1) != 0 ) /*0x6e6828*/
    __3_YAXPAX_Z(this); /*0x6e682b*/
  return this->__pad_0; /*0x6e6835*/
}



// ==== 0x006E6840  sub_6E6840  this=-  sig=ida-proto ====
void sub_6E6840()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e684c*/
  dbl_B0E838 = Math::Sqrt(v0 + v0); /*0x6e685e*/
}



// ==== 0x006E6870  sub_6E6870  this=-  sig=ida-proto ====
void sub_6E6870()
{
  dbl_B0E8A0 = dbl_B0E838 / 60.0; /*0x6e687c*/
}



// ==== 0x006E6890  sub_6E6890  this=-  sig=ida-proto ====
void sub_6E6890()
{
  dbl_B0E888 = 1.0 / dbl_B0E8A0; /*0x6e689c*/
}



// ==== 0x006E68B0  sub_6E68B0  this=-  sig=ida-proto ====
void sub_6E68B0()
{
  dbl_B0E880 = 0.0174532925199433 * 45.0; /*0x6e68bc*/
}



// ==== 0x006E68D0  sub_6E68D0  this=-  sig=ida-proto ====
void sub_6E68D0()
{
  dbl_B0E858 = 0.0174532925199433 * 60.0; /*0x6e68dc*/
}



// ==== 0x006E68F0  sub_6E68F0  this=-  sig=ida-proto ====
void sub_6E68F0()
{
  dbl_B0E818 = 0.0174532925199433 * 90.0; /*0x6e68fc*/
}



// ==== 0x006E6910  sub_6E6910  this=-  sig=ida-proto ====
__int64 sub_6E6910()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E818 - dbl_B0E858); /*0x6e6922*/
  result = Math::RoundToInt(v0 * dbl_B0E838 * 0.5); /*0x6e6936*/
  dword_B0E8A8 = result; /*0x6e693b*/
  return result; /*0x6e6940*/
}



// ==== 0x006E6950  sub_6E6950  this=-  sig=ida-proto ====
void sub_6E6950()
{
  dbl_B0E860 = Math::ArcTan((double)dword_B0E8A8 * 0.00390625); /*0x6e6967*/
}



// ==== 0x006E6980  sub_6E6980  this=-  sig=ida-proto ====
void sub_6E6980()
{
  dbl_B0E878 = Math::ArcTan((double)(2 * dword_B0E8A8) / dbl_B0E838); /*0x6e69a2*/
}



// ==== 0x006E69B0  sub_6E69B0  this=-  sig=ida-proto ====
__int64 sub_6E69B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E8A8) + 0.5); /*0x6e69cb*/
  dword_B0E89C = result; /*0x6e69d0*/
  return result; /*0x6e69d6*/
}



// ==== 0x006E69E0  sub_6E69E0  this=-  sig=ida-proto ====
int sub_6E69E0()
{
  word_B0E830 = 0; /*0x6e69e2*/
  word_B0E832 = 0; /*0x6e69e8*/
  return 0; /*0x6e69ee*/
}



// ==== 0x006E69F0  sub_6E69F0  this=-  sig=ida-proto ====
int sub_6E69F0()
{
  dword_B0E868 = 0; /*0x6e69f2*/
  dword_B0E86C = 0; /*0x6e69f7*/
  dword_B0E870 = 0; /*0x6e69fc*/
  return 0; /*0x6e6a01*/
}



// ==== 0x006E6A10  sub_6E6A10  this=-  sig=ida-proto ====
int sub_6E6A10()
{
  dword_B0E898 = 0; /*0x6e6a15*/
  dword_B0E890 = 128; /*0x6e6a1f*/
  dword_B0E894 = 128; /*0x6e6a24*/
  return 128; /*0x6e6a29*/
}



// ==== 0x006E6A30  sub_6E6A30  this=-  sig=ida-proto ====
int sub_6E6A30()
{
  dword_B0E820 = 0; /*0x6e6a32*/
  dword_B0E824 = 0; /*0x6e6a37*/
  dword_B0E828 = 0; /*0x6e6a3c*/
  dword_B0E82C = 0; /*0x6e6a41*/
  return 0; /*0x6e6a46*/
}



// ==== 0x006E6A50  sub_6E6A50  this=-  sig=ida-proto ====
int sub_6E6A50()
{
  g_BuildingLoadQueue_Array = 0; /*0x6e6a57*/
  dword_B0E844 = 0; /*0x6e6a5c*/
  dword_B0E848 = 0; /*0x6e6a61*/
  byte_B0E84C = 0; /*0x6e6a66*/
  dword_B0E850 = 0; /*0x6e6a6b*/
  return atexit(sub_6E6A80); /*0x6e6a76*/
}



// ==== 0x006E6A80  sub_6E6A80  this=-  sig=ida-proto ====
void __cdecl sub_6E6A80()
{
  __3_YAXPAX_Z(g_BuildingLoadQueue_Array); /*0x6e6a86*/
  g_BuildingLoadQueue_Array = 0; /*0x6e6a90*/
  dword_B0E844 = 0; /*0x6e6a95*/
  dword_B0E848 = 0; /*0x6e6a9a*/
  byte_B0E84C = 0; /*0x6e6a9f*/
  dword_B0E850 = 0; /*0x6e6aa4*/
}



// ==== 0x006E6AB0  ScriptAction::GetWaypointCoords  this=ScriptAction  sig=csp ====
_BYTE *__thiscall ScriptAction::GetWaypointCoords(ScriptAction *this, _DWORD *a2)
{
  if ( a2 ) /*0x6e6aba*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) == 11 ) /*0x6e6ac6*/
    {
      LOBYTE(this->ScriptAction_field_0x4[0]) = 11; /*0x6e6ac8*/
      *(_DWORD *)this->__pad_0 = (__int16)a2[9] + 1000 * (__int16)HIWORD(a2[9]); /*0x6e6ae7*/
    }
    else
    {
      LOBYTE(this->ScriptAction_field_0x4[0]) = 52; /*0x6e6af2*/
      *(_DWORD *)this->__pad_0 = (*(int (__stdcall **)(_DWORD *))(a2[1] + 16))(a2 + 1); /*0x6e6afc*/
    }
    return this->__pad_0; /*0x6e6ae9*/
  }
  else
  {
    LOBYTE(this->ScriptAction_field_0x4[0]) = 0; /*0x6e6b05*/
    *(_DWORD *)this->__pad_0 = 0; /*0x6e6b09*/
    return this->__pad_0; /*0x6e6b0f*/
  }
}



// ==== 0x006E6B70  ObjectClass::method_6E6B70  this=ObjectClass  sig=csp ====
_BYTE *__thiscall sub_6E6B70(ObjectClass *this, _DWORD *a2)
{
  LOBYTE(this->?) = 11; /*0x6e6b75*/
  this->AbstractClass = (void *)(*a2 / 256 + 1000 * (a2[1] / 256)); /*0x6e6ba4*/
  return this; /*0x6e6ba3*/
}



// ==== 0x006E6E20  BuildingLoadQueue::GetNext  this=BuildingLoadQueue  sig=csp ====
void *__thiscall BuildingLoadQueue::GetNext(BuildingLoadQueue *this)
{
  char BuildingLoadQueue_field_0x04; // al
  void *vtable1; // edx
  int uniqueId; // eax
  void ***v5; // eax
  int v7; // ecx
  __int16 v8[4]; // [esp+4h] [ebp-8h] BYREF

  BuildingLoadQueue_field_0x04 = this->BuildingLoadQueue_field_0x04; /*0x6e6e26*/
  if ( BuildingLoadQueue_field_0x04 == 52 ) /*0x6e6e2b*/
  {
    vtable1 = g_BuildingLoadQueue_Array.?; /*0x6e6e31*/
    if ( g_BuildingLoadQueue_Array.? ) /*0x6e6e39*/
    {
      uniqueId = g_BuildingLoadQueue_Array.?; /*0x6e6e3b*/
      if ( g_BuildingLoadQueue_Array.? && *(_DWORD *)g_BuildingLoadQueue_Array.? == *(_DWORD *)this->__pad_0 ) /*0x6e6e4c*/
        goto LABEL_10; /*0x6e6e4c*/
      if ( g_BuildingLoadQueue_Array.? ) /*0x6e6e50*/
      {
        if ( !LOBYTE(g_BuildingLoadQueue_Array.?) ) /*0x6e6e59*/
        {
          qsort( /*0x6e6e6a*/
            g_BuildingLoadQueue_Array.TechnoTypeClass,
            (size_t)g_BuildingLoadQueue_Array.?,
            8u,
            (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
          vtable1 = g_BuildingLoadQueue_Array.?; /*0x6e6e6f*/
          g_BuildingLoadQueue_Array.? = 0; /*0x6e6e78*/
          LOBYTE(g_BuildingLoadQueue_Array.?) = 1; /*0x6e6e82*/
        }
        *(_DWORD *)v8 = *(_DWORD *)this->__pad_0; /*0x6e6e96*/
        uniqueId = BinaryArraySearch((int)g_BuildingLoadQueue_Array.TechnoTypeClass, (int)vtable1, (int *)v8); /*0x6e6e9a*/
        if ( uniqueId ) /*0x6e6ea1*/
        {
          g_BuildingLoadQueue_Array.? = uniqueId; /*0x6e6ea3*/
LABEL_10:
          v5 = (void ***)(uniqueId + 4); /*0x6e6ea8*/
          return __RTDynamicCast( /*0x6e6ecf*/
                   *v5,
                   0,
                   &AbstractClass `RTTI Type Descriptor',
                   &AbstractClass `RTTI Type Descriptor',
                   0);
        }
      }
    }
    v5 = (void ***)&unk_B78828; /*0x6e6ead*/
    return __RTDynamicCast(*v5, 0, &AbstractClass `RTTI Type Descriptor', &AbstractClass `RTTI Type Descriptor', 0); /*0x6e6ead*/
  }
  if ( BuildingLoadQueue_field_0x04 != 11 ) /*0x6e6ed2*/
    return 0; /*0x6e6f0f*/
  v7 = *(_DWORD *)this->__pad_0; /*0x6e6ed4*/
  v8[0] = v7 % 1000; /*0x6e6ee5*/
  v8[1] = v7 / 1000; /*0x6e6f00*/
  return CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8); /*0x6e6ecb*/
}



// ==== 0x006E6F20  BuildingLoadQueue::Find  this=BuildingLoadQueue  sig=csp ====
void *__thiscall BuildingLoadQueue::Find(BuildingLoadQueue *this)
{
  int vtable1; // ecx
  int uniqueId; // edx
  int v4; // ebx
  _DWORD *vtable0; // edi
  int v6; // esi

  if ( LOBYTE(this->BuildingLoadQueue_field_0x04) != 52 ) /*0x6e6f27*/
    return 0; /*0x6e6fe0*/
  vtable1 = (int)g_BuildingLoadQueue_Array.?; /*0x6e6f2d*/
  if ( !g_BuildingLoadQueue_Array.? ) /*0x6e6f37*/
    return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6f37*/
  uniqueId = g_BuildingLoadQueue_Array.?; /*0x6e6f39*/
  if ( g_BuildingLoadQueue_Array.? && *(_DWORD *)g_BuildingLoadQueue_Array.? == *(_DWORD *)this->__pad_0 ) /*0x6e6f49*/
    return AbstractClass::IsTechnoType(*(AbstractClass **)(uniqueId + 4)); /*0x6e6fdf*/
  if ( !LOBYTE(g_BuildingLoadQueue_Array.?) ) /*0x6e6f56*/
  {
    qsort( /*0x6e6f67*/
      g_BuildingLoadQueue_Array.TechnoTypeClass,
      (size_t)g_BuildingLoadQueue_Array.?,
      8u,
      (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
    vtable1 = (int)g_BuildingLoadQueue_Array.?; /*0x6e6f6c*/
    g_BuildingLoadQueue_Array.? = 0; /*0x6e6f75*/
    LOBYTE(g_BuildingLoadQueue_Array.?) = 1; /*0x6e6f7f*/
  }
  v4 = *(_DWORD *)this->__pad_0; /*0x6e6f86*/
  vtable0 = g_BuildingLoadQueue_Array.TechnoTypeClass; /*0x6e6f88*/
  if ( vtable1 <= 0 ) /*0x6e6f90*/
    return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6f90*/
  while ( 1 ) /*0x6e6f99*/
  {
    v6 = vtable0[2 * (vtable1 / 2)]; /*0x6e6f99*/
    uniqueId = (int)&vtable0[2 * (vtable1 / 2)]; /*0x6e6f9c*/
    if ( v6 <= v4 ) /*0x6e6fa1*/
      break; /*0x6e6fa1*/
    vtable1 /= 2; /*0x6e6fa3*/
LABEL_12:
    if ( vtable1 <= 0 ) /*0x6e6fb5*/
      return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6fb5*/
  }
  if ( v6 != v4 ) /*0x6e6fa7*/
  {
    vtable0 = (_DWORD *)(uniqueId + 8); /*0x6e6fa9*/
    vtable1 += -1 - vtable1 / 2; /*0x6e6fb1*/
    goto LABEL_12; /*0x6e6fb1*/
  }
  if ( uniqueId ) /*0x6e6fc9*/
  {
    g_BuildingLoadQueue_Array.? = (int)&vtable0[2 * (vtable1 / 2)]; /*0x6e6fcb*/
    return AbstractClass::IsTechnoType(*(AbstractClass **)(uniqueId + 4)); /*0x6e6fcb*/
  }
  return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6fc5*/
}



// ==== 0x006E6FF0  BuildingLoadQueue::FindObject  this=BuildingLoadQueue  sig=csp ====
int __thiscall BuildingLoadQueue::FindObject(BuildingLoadQueue *this)
{
  int vtable1; // ecx
  int uniqueId; // edx
  int v4; // ebx
  _DWORD *vtable0; // edi
  int v6; // esi
  void ***v7; // eax

  if ( LOBYTE(this->BuildingLoadQueue_field_0x04) != 52 ) /*0x6e6ff7*/
    return 0; /*0x6e70b8*/
  vtable1 = (int)g_BuildingLoadQueue_Array.?; /*0x6e6ffd*/
  if ( !g_BuildingLoadQueue_Array.? ) /*0x6e7007*/
    goto LABEL_13; /*0x6e7007*/
  uniqueId = g_BuildingLoadQueue_Array.?; /*0x6e7009*/
  if ( g_BuildingLoadQueue_Array.? && *(_DWORD *)g_BuildingLoadQueue_Array.? == *(_DWORD *)this->__pad_0 ) /*0x6e7019*/
  {
LABEL_17:
    v7 = (void ***)(uniqueId + 4); /*0x6e70b3*/
    return (int)__RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &ObjectClass `RTTI Type Descriptor', 0); /*0x6e70b6*/
  }
  if ( !LOBYTE(g_BuildingLoadQueue_Array.?) ) /*0x6e7026*/
  {
    qsort( /*0x6e7037*/
      g_BuildingLoadQueue_Array.TechnoTypeClass,
      (size_t)g_BuildingLoadQueue_Array.?,
      8u,
      (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
    vtable1 = (int)g_BuildingLoadQueue_Array.?; /*0x6e703c*/
    g_BuildingLoadQueue_Array.? = 0; /*0x6e7045*/
    LOBYTE(g_BuildingLoadQueue_Array.?) = 1; /*0x6e704f*/
  }
  v4 = *(_DWORD *)this->__pad_0; /*0x6e7056*/
  vtable0 = g_BuildingLoadQueue_Array.TechnoTypeClass; /*0x6e7058*/
  if ( vtable1 <= 0 ) /*0x6e7060*/
    goto LABEL_13; /*0x6e7060*/
  while ( 1 ) /*0x6e7069*/
  {
    v6 = vtable0[2 * (vtable1 / 2)]; /*0x6e7069*/
    uniqueId = (int)&vtable0[2 * (vtable1 / 2)]; /*0x6e706c*/
    if ( v6 <= v4 ) /*0x6e7071*/
      break; /*0x6e7071*/
    vtable1 /= 2; /*0x6e7073*/
LABEL_12:
    if ( vtable1 <= 0 ) /*0x6e7085*/
      goto LABEL_13; /*0x6e7085*/
  }
  if ( v6 != v4 ) /*0x6e7077*/
  {
    vtable0 = (_DWORD *)(uniqueId + 8); /*0x6e7079*/
    vtable1 += -1 - vtable1 / 2; /*0x6e7081*/
    goto LABEL_12; /*0x6e7081*/
  }
  if ( uniqueId ) /*0x6e70ab*/
  {
    g_BuildingLoadQueue_Array.? = (int)&vtable0[2 * (vtable1 / 2)]; /*0x6e70ad*/
    goto LABEL_17; /*0x6e70ad*/
  }
LABEL_13:
  v7 = (void ***)&unk_B78828; /*0x6e7087*/
  return (int)__RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &ObjectClass `RTTI Type Descriptor', 0); /*0x6e70a7*/
}



// ==== 0x006E7330  ObjectClass::System_Read_6E7330  this=ObjectClass  sig=csp ====
int __thiscall System_Read_6E7330(ObjectClass *this)
{
  int vtable1; // ecx
  int uniqueId; // edx
  void *vtable0; // ebx
  _DWORD *v5; // edi
  void *v6; // esi
  void ***v7; // eax

  if ( LOBYTE(this->?) != 52 ) /*0x6e7337*/
    return 0; /*0x6e73f8*/
  vtable1 = (int)g_BuildingLoadQueue_Array.?; /*0x6e733d*/
  if ( !g_BuildingLoadQueue_Array.? ) /*0x6e7347*/
    goto LABEL_13; /*0x6e7347*/
  uniqueId = g_BuildingLoadQueue_Array.?; /*0x6e7349*/
  if ( g_BuildingLoadQueue_Array.? && *(void **)g_BuildingLoadQueue_Array.? == this->AbstractClass ) /*0x6e7359*/
  {
LABEL_17:
    v7 = (void ***)(uniqueId + 4); /*0x6e73f3*/
    return (int)__RTDynamicCast( /*0x6e73f6*/
                  *v7,
                  0,
                  &AbstractClass `RTTI Type Descriptor',
                  &TechnoTypeClass `RTTI Type Descriptor',
                  0);
  }
  if ( !LOBYTE(g_BuildingLoadQueue_Array.?) ) /*0x6e7366*/
  {
    qsort( /*0x6e7377*/
      g_BuildingLoadQueue_Array.TechnoTypeClass,
      (size_t)g_BuildingLoadQueue_Array.?,
      8u,
      (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
    vtable1 = (int)g_BuildingLoadQueue_Array.?; /*0x6e737c*/
    g_BuildingLoadQueue_Array.? = 0; /*0x6e7385*/
    LOBYTE(g_BuildingLoadQueue_Array.?) = 1; /*0x6e738f*/
  }
  vtable0 = this->AbstractClass; /*0x6e7396*/
  v5 = g_BuildingLoadQueue_Array.TechnoTypeClass; /*0x6e7398*/
  if ( vtable1 <= 0 ) /*0x6e73a0*/
    goto LABEL_13; /*0x6e73a0*/
  while ( 1 ) /*0x6e73a9*/
  {
    v6 = (void *)v5[2 * (vtable1 / 2)]; /*0x6e73a9*/
    uniqueId = (int)&v5[2 * (vtable1 / 2)]; /*0x6e73ac*/
    if ( (int)v6 <= (int)vtable0 ) /*0x6e73b1*/
      break; /*0x6e73b1*/
    vtable1 /= 2; /*0x6e73b3*/
LABEL_12:
    if ( vtable1 <= 0 ) /*0x6e73c5*/
      goto LABEL_13; /*0x6e73c5*/
  }
  if ( v6 != vtable0 ) /*0x6e73b7*/
  {
    v5 = (_DWORD *)(uniqueId + 8); /*0x6e73b9*/
    vtable1 += -1 - vtable1 / 2; /*0x6e73c1*/
    goto LABEL_12; /*0x6e73c1*/
  }
  if ( uniqueId ) /*0x6e73eb*/
  {
    g_BuildingLoadQueue_Array.? = (int)&v5[2 * (vtable1 / 2)]; /*0x6e73ed*/
    goto LABEL_17; /*0x6e73ed*/
  }
LABEL_13:
  v7 = (void ***)&unk_B78828; /*0x6e73c7*/
  return (int)__RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &TechnoTypeClass `RTTI Type Descriptor', 0); /*0x6e73e7*/
}



// ==== 0x006E7A80  BuildingLoadQueue::FindBuilding  this=BuildingLoadQueue  sig=csp ====
int __thiscall BuildingLoadQueue::FindBuilding(BuildingLoadQueue *this)
{
  int vtable1; // ecx
  int uniqueId; // edx
  int v4; // ebx
  _DWORD *vtable0; // edi
  int v6; // esi
  void ***v7; // eax

  if ( LOBYTE(this->BuildingLoadQueue_field_0x04) != 52 ) /*0x6e7a87*/
    return 0; /*0x6e7b48*/
  vtable1 = (int)g_BuildingLoadQueue_Array.?; /*0x6e7a8d*/
  if ( !g_BuildingLoadQueue_Array.? ) /*0x6e7a97*/
    goto LABEL_13; /*0x6e7a97*/
  uniqueId = g_BuildingLoadQueue_Array.?; /*0x6e7a99*/
  if ( g_BuildingLoadQueue_Array.? && *(_DWORD *)g_BuildingLoadQueue_Array.? == *(_DWORD *)this->__pad_0 ) /*0x6e7aa9*/
  {
LABEL_17:
    v7 = (void ***)(uniqueId + 4); /*0x6e7b43*/
    return (int)__RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &BuildingClass `RTTI Type Descriptor', 0); /*0x6e7b46*/
  }
  if ( !LOBYTE(g_BuildingLoadQueue_Array.?) ) /*0x6e7ab6*/
  {
    qsort( /*0x6e7ac7*/
      g_BuildingLoadQueue_Array.TechnoTypeClass,
      (size_t)g_BuildingLoadQueue_Array.?,
      8u,
      (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
    vtable1 = (int)g_BuildingLoadQueue_Array.?; /*0x6e7acc*/
    g_BuildingLoadQueue_Array.? = 0; /*0x6e7ad5*/
    LOBYTE(g_BuildingLoadQueue_Array.?) = 1; /*0x6e7adf*/
  }
  v4 = *(_DWORD *)this->__pad_0; /*0x6e7ae6*/
  vtable0 = g_BuildingLoadQueue_Array.TechnoTypeClass; /*0x6e7ae8*/
  if ( vtable1 <= 0 ) /*0x6e7af0*/
    goto LABEL_13; /*0x6e7af0*/
  while ( 1 ) /*0x6e7af9*/
  {
    v6 = vtable0[2 * (vtable1 / 2)]; /*0x6e7af9*/
    uniqueId = (int)&vtable0[2 * (vtable1 / 2)]; /*0x6e7afc*/
    if ( v6 <= v4 ) /*0x6e7b01*/
      break; /*0x6e7b01*/
    vtable1 /= 2; /*0x6e7b03*/
LABEL_12:
    if ( vtable1 <= 0 ) /*0x6e7b15*/
      goto LABEL_13; /*0x6e7b15*/
  }
  if ( v6 != v4 ) /*0x6e7b07*/
  {
    vtable0 = (_DWORD *)(uniqueId + 8); /*0x6e7b09*/
    vtable1 += -1 - vtable1 / 2; /*0x6e7b11*/
    goto LABEL_12; /*0x6e7b11*/
  }
  if ( uniqueId ) /*0x6e7b3b*/
  {
    g_BuildingLoadQueue_Array.? = (int)&vtable0[2 * (vtable1 / 2)]; /*0x6e7b3d*/
    goto LABEL_17; /*0x6e7b3d*/
  }
LABEL_13:
  v7 = (void ***)&unk_B78828; /*0x6e7b17*/
  return (int)__RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &BuildingClass `RTTI Type Descriptor', 0); /*0x6e7b37*/
}



// ==== 0x006E7C20  ObjectClass::Network_Process_6E7C20  this=ObjectClass  sig=csp ====
void *__thiscall Network_Process_6E7C20(ObjectClass *this)
{
  int vtable0; // ecx
  ObjectClass *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this; /*0x6e7c20*/
  if ( LOBYTE(this->?) != 11 ) /*0x6e7c25*/
    return 0; /*0x6e7c61*/
  vtable0 = (int)this->AbstractClass; /*0x6e7c27*/
  LOWORD(v3) = vtable0 % 1000; /*0x6e7c39*/
  HIWORD(v3) = vtable0 / 1000; /*0x6e7c54*/
  return CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v3); /*0x6e7c60*/
}



// ==== 0x006E7C70  sub_6E7C70  this=-  sig=ida-proto ====
void sub_6E7C70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e7c7c*/
  dbl_B0E8D0 = Math::Sqrt(v0 + v0); /*0x6e7c8e*/
}



// ==== 0x006E7CA0  sub_6E7CA0  this=-  sig=ida-proto ====
void sub_6E7CA0()
{
  dbl_B0E920 = dbl_B0E8D0 / 60.0; /*0x6e7cac*/
}



// ==== 0x006E7CC0  sub_6E7CC0  this=-  sig=ida-proto ====
void sub_6E7CC0()
{
  dbl_B0E908 = 1.0 / dbl_B0E920; /*0x6e7ccc*/
}



// ==== 0x006E7CE0  sub_6E7CE0  this=-  sig=ida-proto ====
void sub_6E7CE0()
{
  dbl_B0E900 = 0.0174532925199433 * 45.0; /*0x6e7cec*/
}



// ==== 0x006E7D00  sub_6E7D00  this=-  sig=ida-proto ====
void sub_6E7D00()
{
  dbl_B0E8D8 = 0.0174532925199433 * 60.0; /*0x6e7d0c*/
}



// ==== 0x006E7D20  sub_6E7D20  this=-  sig=ida-proto ====
void sub_6E7D20()
{
  dbl_B0E8B0 = 0.0174532925199433 * 90.0; /*0x6e7d2c*/
}



// ==== 0x006E7D40  sub_6E7D40  this=-  sig=ida-proto ====
__int64 sub_6E7D40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E8B0 - dbl_B0E8D8); /*0x6e7d52*/
  result = Math::RoundToInt(v0 * dbl_B0E8D0 * 0.5); /*0x6e7d66*/
  dword_B0E928 = result; /*0x6e7d6b*/
  return result; /*0x6e7d70*/
}



// ==== 0x006E7D80  sub_6E7D80  this=-  sig=ida-proto ====
void sub_6E7D80()
{
  dbl_B0E8E0 = Math::ArcTan((double)dword_B0E928 * 0.00390625); /*0x6e7d97*/
}



// ==== 0x006E7DB0  sub_6E7DB0  this=-  sig=ida-proto ====
void sub_6E7DB0()
{
  dbl_B0E8F8 = Math::ArcTan((double)(2 * dword_B0E928) / dbl_B0E8D0); /*0x6e7dd2*/
}



// ==== 0x006E7DE0  sub_6E7DE0  this=-  sig=ida-proto ====
__int64 sub_6E7DE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E928) + 0.5); /*0x6e7dfb*/
  dword_B0E91C = result; /*0x6e7e00*/
  return result; /*0x6e7e06*/
}



// ==== 0x006E7E10  sub_6E7E10  this=-  sig=ida-proto ====
int sub_6E7E10()
{
  word_B0E8C8 = 0; /*0x6e7e12*/
  word_B0E8CA = 0; /*0x6e7e18*/
  return 0; /*0x6e7e1e*/
}



// ==== 0x006E7E20  sub_6E7E20  this=-  sig=ida-proto ====
int sub_6E7E20()
{
  dword_B0E8E8 = 0; /*0x6e7e22*/
  dword_B0E8EC = 0; /*0x6e7e27*/
  dword_B0E8F0 = 0; /*0x6e7e2c*/
  return 0; /*0x6e7e31*/
}



// ==== 0x006E7E40  sub_6E7E40  this=-  sig=ida-proto ====
int sub_6E7E40()
{
  dword_B0E918 = 0; /*0x6e7e45*/
  dword_B0E910 = 128; /*0x6e7e4f*/
  dword_B0E914 = 128; /*0x6e7e54*/
  return 128; /*0x6e7e59*/
}



// ==== 0x006E7E60  sub_6E7E60  this=-  sig=ida-proto ====
int sub_6E7E60()
{
  dword_B0E8B8 = 0; /*0x6e7e62*/
  dword_B0E8BC = 0; /*0x6e7e67*/
  dword_B0E8C0 = 0; /*0x6e7e6c*/
  dword_B0E8C4 = 0; /*0x6e7e71*/
  return 0; /*0x6e7e76*/
}



// ==== 0x006E7E80  TaskForceClass::Construct  this=TaskForceClass  sig=csp ====
_DWORD *__thiscall TaskForceClass::Construct(TaskForceClass *this, char *Source)
{
  int v3; // eax
  ObjectTypeClass **p_TaskForceClass_field_0xA4; // eax
  int v5; // ecx

  AbstractTypeClass::Constructor((int *)this->__pad_0, Source); /*0x6e7e8a*/
  this->TaskForceClass_field_0x98 = (AbstractClass *)-1; /*0x6e7e8f*/
  this->TaskForceClass_field_0x9C[0] = 0; /*0x6e7e99*/
  *(_DWORD *)this->__pad_A0 = 0; /*0x6e7ea3*/
  *(_DWORD *)this->__pad_0 = &TaskForceClass::`vftable'; /*0x6e7ead*/
  this->TaskForceClass_field_0x4 = (int)&TaskForceClass::`vftable'; /*0x6e7eb3*/
  *(_DWORD *)this->__pad_8 = &TaskForceClass::`vftable'; /*0x6e7eba*/
  *(_DWORD *)&this->__pad_8[4] = &TaskForceClass::`vftable'; /*0x6e7ec1*/
  if ( dword_A8E8E0 < dword_A8E8D8 /*0x6e7f05*/
    || (byte_A8E8DD || !dword_A8E8D8)
    && dword_A8E8E4 > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E8D0 + 8))(
         &dword_A8E8D0,
         dword_A8E8D8 + dword_A8E8E4,
         0) )
  {
    v3 = dword_A8E8E0++; /*0x6e7f12*/
    *((_DWORD *)dword_A8E8D4 + v3) = this; /*0x6e7f21*/
  }
  p_TaskForceClass_field_0xA4 = &this->TaskForceClass_field_0xA4; /*0x6e7f28*/
  v5 = 6; /*0x6e7f2a*/
  do /*0x6e7f38*/
  {
    *p_TaskForceClass_field_0xA4 = 0; /*0x6e7f2f*/
    p_TaskForceClass_field_0xA4[1] = 0; /*0x6e7f31*/
    p_TaskForceClass_field_0xA4 += 2; /*0x6e7f34*/
    --v5; /*0x6e7f37*/
  }
  while ( v5 ); /*0x6e7f38*/
  return this->__pad_0; /*0x6e7f3c*/
}



// ==== 0x006E8000  ObjectClass::method_6E8000  this=AbstractClass  sig=csp ====
_DWORD *__thiscall sub_6E8000(ObjectClass *this, int a2)
{
  _DWORD *result; // eax
  int *v3; // ecx
  int v4; // edi
  int v5; // esi
  int v6; // edx

  result = &this->AbstractClass; /*0x6e8004*/
  this->? = &INoticeSink::`vftable'; /*0x6e8008*/
  this->? = &INoticeSource::`vftable'; /*0x6e800f*/
  this->? = *(_DWORD *)(a2 + 16); /*0x6e801c*/
  LOBYTE(this->?) = *(_BYTE *)(a2 + 20); /*0x6e8022*/
  this->? = *(_DWORD *)(a2 + 24); /*0x6e8028*/
  this->? = *(_DWORD *)(a2 + 28); /*0x6e802e*/
  LOBYTE(this->?) = *(_BYTE *)(a2 + 32); /*0x6e8034*/
  this->AbstractClass = &AbstractClass::`vftable'; /*0x6e803f*/
  this->? = &AbstractClass::`vftable'; /*0x6e8045*/
  this->? = &AbstractClass::`vftable'; /*0x6e804c*/
  this->? = &AbstractClass::`vftable'; /*0x6e8053*/
  qmemcpy(&this->occupant, (const void *)(a2 + 36), 0x19u); /*0x6e805a*/
  qmemcpy((char *)this->ambientSoundController + 1, (const void *)(a2 + 61), 0x20u); /*0x6e8068*/
  this->customSound_controller[4] = *(_DWORD *)(a2 + 96); /*0x6e8070*/
  qmemcpy(&this->customSound, (const void *)(a2 + 100), 0x31u); /*0x6e807b*/
  this->AbstractClass = &TaskForceClass::`vftable'; /*0x6e807e*/
  this->? = &TaskForceClass::`vftable'; /*0x6e8084*/
  this->? = &TaskForceClass::`vftable'; /*0x6e808b*/
  this->? = &TaskForceClass::`vftable'; /*0x6e8092*/
  v3 = &this->location[2]; /*0x6e809f*/
  result[38] = *(_DWORD *)(a2 + 152); /*0x6e80a5*/
  result[39] = *(_DWORD *)(a2 + 156); /*0x6e80b1*/
  v4 = result[39]; /*0x6e80bd*/
  result[40] = *(_DWORD *)(a2 + 160); /*0x6e80c3*/
  v5 = 0; /*0x6e80c9*/
  if ( v4 > 0 ) /*0x6e80cd*/
  {
    v6 = a2 - (_DWORD)result; /*0x6e80cf*/
    do /*0x6e80e9*/
    {
      ++v5; /*0x6e80d4*/
      *v3 = *(int *)((char *)v3 + v6); /*0x6e80d5*/
      v3[1] = *(int *)((char *)v3 + v6 + 4); /*0x6e80db*/
      v3 += 2; /*0x6e80e4*/
    }
    while ( v5 < result[39] ); /*0x6e80e9*/
  }
  return result; /*0x6e80eb*/
}



// ==== 0x006E8160  TeamClass::SumMemberCounts  this=TeamClass  sig=csp ====
int __thiscall TeamClass::SumMemberCounts(TeamClass *this)
{
  int v1; // edx
  int result; // eax
  TeamClass *v3; // ecx
  void *vtable0; // esi

  v1 = this->countObjects[5]; /*0x6e8160*/
  result = 0; /*0x6e8166*/
  if ( v1 > 0 ) /*0x6e816a*/
  {
    v3 = (TeamClass *)((char *)this + 164); /*0x6e816d*/
    do /*0x6e817b*/
    {
      vtable0 = v3->AbstractClass; /*0x6e8173*/
      v3 = (TeamClass *)((char *)v3 + 8); /*0x6e8175*/
      result += (int)vtable0; /*0x6e8178*/
      --v1; /*0x6e817a*/
    }
    while ( v1 ); /*0x6e817b*/
  }
  return result; /*0x6e817e*/
}



// ==== 0x006E8220  TaskForceClass::LoadFromINI  this=INIClass  sig=csp ====
int __fastcall TaskForceClass::LoadFromINI(INIClass *a1, int a2)
{
  int result; // eax
  int v5; // esi
  int v6; // ebx
  unsigned __int8 *StringByIndex; // eax
  int v8; // esi
  TaskForceClass *v9; // eax
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // [esp+10h] [ebp-1Ch]
  char Source[24]; // [esp+14h] [ebp-18h] BYREF

  result = INIClass::GetKeyCount(a1->__pad_0, g_INI_Key_TaskForces); /*0x6e8230*/
  v5 = result; /*0x6e8235*/
  v6 = 0; /*0x6e8237*/
  v12 = result; /*0x6e823b*/
  if ( result > 0 ) /*0x6e823f*/
  {
    while ( 1 ) /*0x6e824d*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1->__pad_0, g_INI_Key_TaskForces, v6); /*0x6e824d*/
      result = INIClass::GetString(a1, g_INI_Key_TaskForces, StringByIndex, &g_INI_DefaultBuffer, Source, 24); /*0x6e8266*/
      if ( result > 0 ) /*0x6e826d*/
        break; /*0x6e826d*/
LABEL_13:
      if ( ++v6 >= v5 ) /*0x6e832a*/
        return result; /*0x6e832a*/
    }
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e8293*/
      goto LABEL_11; /*0x6e8293*/
    v8 = 0; /*0x6e82a4*/
    if ( dword_A8E8E0 > 0 ) /*0x6e82a8*/
    {
      while ( _strcmpi((char *)(*((_DWORD *)dword_A8E8D4 + v8) + 36), Source) ) /*0x6e82c6*/
      {
        if ( ++v8 >= dword_A8E8E0 ) /*0x6e82d0*/
          goto LABEL_8; /*0x6e82d0*/
      }
      v10 = (_DWORD *)*((_DWORD *)dword_A8E8D4 + v8); /*0x6e82f9*/
      goto LABEL_12; /*0x6e82fc*/
    }
LABEL_8:
    v9 = (TaskForceClass *)__2_YAPAXI_Z(0xD4u); /*0x6e82d7*/
    if ( v9 ) /*0x6e82e1*/
      v10 = TaskForceClass::Construct(v9, Source); /*0x6e82ef*/
    else
LABEL_11:
      v10 = 0; /*0x6e82fe*/
LABEL_12:
    v11 = sub_412610(Source); /*0x6e8300*/
    SwizzleManagerClass::Here_I_Am((int)&SwizzleManagerClass_Instance, v11, (int)v10); /*0x6e8310*/
    result = (*(int (__thiscall **)(_DWORD *, INIClass *))(*v10 + 100))(v10, a1); /*0x6e831a*/
    v10[40] = a2; /*0x6e831d*/
    v5 = v12; /*0x6e8323*/
    goto LABEL_13; /*0x6e8323*/
  }
  return result; /*0x6e8330*/
}



// ==== 0x006E8340  ScriptTypeClass::ReadINI  this=ScriptTypeClass  sig=csp ====
int __fastcall ScriptTypeClass::ReadINI(INIClass *a1, int a2)
{
  int KeyCount; // ebx
  int i; // edi
  unsigned __int8 *StringByIndex; // eax
  int result; // eax
  int v7; // ebx
  int j; // ebp
  int v9; // edi
  int v10; // [esp-4h] [ebp-38h]
  char Buffer[32]; // [esp+14h] [ebp-20h] BYREF

  KeyCount = INIClass::GetKeyCount(a1->__pad_0, g_INI_Key_TaskForces); /*0x6e8357*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6e835d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1->__pad_0, g_INI_Key_TaskForces, i); /*0x6e8367*/
    INIClass::GetString(a1, g_INI_Key_TaskForces, StringByIndex, &g_INI_DefaultBuffer, Buffer, 32); /*0x6e8380*/
    INIClass::ClearSection((int *)a1->__pad_0, (int)Buffer, 0); /*0x6e838e*/
  }
  INIClass::ClearSection((int *)a1->__pad_0, (int)g_INI_Key_TaskForces, 0); /*0x6e83a1*/
  result = dword_A8E8E0; /*0x6e83a6*/
  v7 = 0; /*0x6e83ab*/
  for ( j = 0; j < dword_A8E8E0; ++j ) /*0x6e83b1*/
  {
    v9 = *((_DWORD *)dword_A8E8D4 + j); /*0x6e83bc*/
    if ( *(_DWORD *)(v9 + 160) == a2 ) /*0x6e83c5*/
    {
      v10 = v7++; /*0x6e83cd*/
      sprintf(Buffer, "%d", v10); /*0x6e83d5*/
      String::Trim(Buffer); /*0x6e83e1*/
      INIClass::SetString(a1->__pad_0, g_INI_Key_TaskForces, Buffer, (char *)(v9 + 36)); /*0x6e83f6*/
      (*(void (__thiscall **)(int, INIClass *))(*(_DWORD *)v9 + 104))(v9, a1); /*0x6e8400*/
    }
    result = dword_A8E8E0; /*0x6e8403*/
  }
  return result; /*0x6e840d*/
}



// ==== 0x006E8420  TaskForceClass::GetUnitCount  this=TaskForceClass  sig=csp ====
char __thiscall TaskForceClass::GetUnitCount(TaskForceClass *this, unsigned __int8 ***a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // eax
  TaskForceClass v8; // [esp+8h] [ebp-A8h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x6e8433*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)this, a2) ) /*0x6e843b*/
    return 0; /*0x6e84f7*/
  v3 = 0; /*0x6e844a*/
  this->TaskForceClass_field_0x9C[0] = 0; /*0x6e844f*/
  do /*0x6e84cb*/
  {
    sprintf(v8.__pad_8, "%d", v3); /*0x6e8460*/
    if ( INIClass::GetString( /*0x6e8486*/
           (INIClass *)a2,
           (unsigned __int8 *)&this->TaskForceClass_field_0x24,
           (unsigned __int8 *)v8.__pad_8,
           &g_INI_DefaultBuffer,
           v8.__pad_28,
           128) > 0 )
    {
      v4 = TaskForceClass::ParseUnitCountAndType(&v8, v8.__pad_28); /*0x6e8491*/
      v5 = this->TaskForceClass_field_0x9C[0]; /*0x6e8496*/
      *(_DWORD *)&this->__pad_A0[8 * v5 + 4] = *v4; /*0x6e849e*/
      *((_DWORD *)this + 2 * v5 + 42) = v4[1]; /*0x6e84a8*/
      v6 = this->TaskForceClass_field_0x9C[0]; /*0x6e84af*/
      if ( *((_DWORD *)this + 2 * v6 + 42) ) /*0x6e84b5*/
        this->TaskForceClass_field_0x9C[0] = v6 + 1; /*0x6e84c1*/
    }
    ++v3; /*0x6e84c7*/
  }
  while ( v3 < 6 ); /*0x6e84cb*/
  this->TaskForceClass_field_0x98 = (AbstractClass *)INIClass::ReadInt_Overwrite( /*0x6e84e2*/
                                                       (bool *)a2,
                                                       (unsigned __int8 *)&this->TaskForceClass_field_0x24,
                                                       (unsigned __int8 *)g_INI_Key_Group,
                                                       (int)this->TaskForceClass_field_0x98);
  return 1; /*0x6e84e9*/
}



// ==== 0x006E8510  TaskForceClass::GetUnitType  this=TaskForceClass  sig=csp ====
char __thiscall TaskForceClass::GetUnitType(TaskForceClass *this, char *a2)
{
  int v3; // esi
  ObjectTypeClass **p_TaskForceClass_field_0xA4; // ebx
  char *v5; // eax
  char Buffer[32]; // [esp+8h] [ebp-20h] BYREF

  if ( !AbstractTypeClass::WriteINI((AbstractTypeClass *)this, a2) ) /*0x6e851c*/
    return 0; /*0x6e85a5*/
  v3 = 0; /*0x6e8527*/
  p_TaskForceClass_field_0xA4 = &this->TaskForceClass_field_0xA4; /*0x6e8529*/
  do /*0x6e857d*/
  {
    sprintf(Buffer, "%d", v3); /*0x6e853a*/
    if ( v3 >= this->TaskForceClass_field_0x9C[0] ) /*0x6e854a*/
    {
      INIClass::ClearSection((int *)a2, (int)&this->TaskForceClass_field_0x24, (unsigned __int8 *)Buffer); /*0x6e8571*/
    }
    else
    {
      v5 = TaskForceClass::Check((TaskForceClass *)p_TaskForceClass_field_0xA4); /*0x6e854e*/
      INIClass::SetString(a2, (unsigned __int8 *)&this->TaskForceClass_field_0x24, Buffer, v5); /*0x6e855f*/
    }
    ++v3; /*0x6e8576*/
    p_TaskForceClass_field_0xA4 += 2; /*0x6e8577*/
  }
  while ( v3 < 6 ); /*0x6e857d*/
  INIClass::SetInt( /*0x6e8593*/
    a2,
    (unsigned __int8 *)&this->TaskForceClass_field_0x24,
    g_INI_Key_Group,
    (int)this->TaskForceClass_field_0x98,
    0);
  return 1; /*0x6e859a*/
}



// ==== 0x006E85B0  ObjectClass::method_6E85B0  this=ObjectClass  sig=csp ====
char __thiscall sub_6E85B0(ObjectClass *this)
{
  int v2; // edi
  void **i; // esi

  v2 = 0; /*0x6e85bb*/
  if ( this->location[0] <= 0 ) /*0x6e85bf*/
    return 1; /*0x6e85e1*/
  for ( i = &this->lineTrailer; (*(int (__thiscall **)(void *))(*(_DWORD *)*i + 44))(*i) == 16; i += 2 ) /*0x6e85c1*/
  {
    if ( ++v2 >= this->location[0] ) /*0x6e85df*/
      return 1; /*0x6e85df*/
  }
  return 0; /*0x6e85e1*/
}



// ==== 0x006E85F0  TeamTypeClass::FindOrCreateTaskForce  this=AbstractTypeClass  sig=csp ====
_DWORD *__thiscall TeamTypeClass::FindOrCreateTaskForce(char *Source)
{
  int v2; // esi
  TaskForceClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e860c*/
    return 0; /*0x6e866f*/
  v2 = 0; /*0x6e861d*/
  if ( dword_A8E8E0 <= 0 ) /*0x6e8621*/
  {
LABEL_6:
    v3 = (TaskForceClass *)__2_YAPAXI_Z(0xD4u); /*0x6e8646*/
    if ( v3 ) /*0x6e8655*/
      return TaskForceClass::Construct(v3, Source); /*0x6e8661*/
    return 0; /*0x6e8655*/
  }
  while ( _strcmpi((char *)(*((_DWORD *)dword_A8E8D4 + v2) + 36), Source) ) /*0x6e863a*/
  {
    if ( ++v2 >= dword_A8E8E0 ) /*0x6e8644*/
      goto LABEL_6; /*0x6e8644*/
  }
  return (_DWORD *)*((_DWORD *)dword_A8E8D4 + v2); /*0x6e865f*/
}



// ==== 0x006E8680  TaskForceClass::SaveTaskForce  this=TaskForceClass  sig=csp ====
int __stdcall TaskForceClass::SaveTaskForce(TaskForceClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x6e868f*/
  if ( result >= 0 ) /*0x6e8696*/
    return 0; /*0x6e8698*/
  return result; /*0x6e869a*/
}



// ==== 0x006E86A0  TaskForceClass::LoadTaskForce  this=TaskForceClass  sig=csp ====
int __stdcall TaskForceClass::LoadTaskForce(TaskForceClass *this, int a2)
{
  int result; // eax
  int *v3; // esi
  int v4; // edi

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6e86ab*/
  if ( result >= 0 ) /*0x6e86b2*/
  {
    if ( this ) /*0x6e86b6*/
    {
      AbstractTypeClass::Init((int)this, (int)&a2); /*0x6e86bf*/
      *(_DWORD *)this->__pad_0 = &TaskForceClass::`vftable'; /*0x6e86c4*/
      this->TaskForceClass_field_0x4 = (int)&TaskForceClass::`vftable'; /*0x6e86ca*/
      *(_DWORD *)this->__pad_8 = &TaskForceClass::`vftable'; /*0x6e86d1*/
      *(_DWORD *)&this->__pad_8[4] = &TaskForceClass::`vftable'; /*0x6e86d8*/
    }
    v3 = (int *)(this + 1); /*0x6e86e0*/
    v4 = 6; /*0x6e86e6*/
    do /*0x6e86fa*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v3); /*0x6e86f1*/
      v3 += 2; /*0x6e86f6*/
      --v4; /*0x6e86f9*/
    }
    while ( v4 ); /*0x6e86fa*/
    return 0; /*0x6e86fc*/
  }
  return result; /*0x6e86ff*/
}



// ==== 0x006E8710  TaskForceClass::ddtor  this=TaskForceClass  sig=csp ====
int __stdcall TaskForceClass::ddtor(TaskForceClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6e8716*/
    return -2147467261; /*0x6e8718*/
  *a2 = 1641952286; /*0x6e8726*/
  a2[1] = 298977140; /*0x6e872e*/
  a2[2] = 1610655148; /*0x6e8737*/
  a2[3] = unk_7E977C; /*0x6e8740*/
  return 0; /*0x6e871d*/
}



// ==== 0x006E8750  TaskForceClass::LoadTask  this=TaskForceClass  sig=csp ====
int __thiscall TaskForceClass::LoadTask(TaskForceClass *this, int *a2)
{
  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x6e8759*/
  Power::TimerProcess((int)this->TaskForceClass_field_0x98); /*0x6e8767*/
  return Power::TimerProcess(this->TaskForceClass_field_0x9C[0]); /*0x6e877a*/
}



// ==== 0x006E8780  HouseClass::GetMaxBuildLevel  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GetMaxBuildLevel(HouseClass *this)
{
  int secretLabsCount; // edx
  int result; // eax
  int *p_psychicDetectionCount; // esi
  int v4; // ecx

  secretLabsCount = this->secretLabsCount; /*0x6e8780*/
  result = 0; /*0x6e8786*/
  if ( secretLabsCount > 0 ) /*0x6e878a*/
  {
    p_psychicDetectionCount = &this->psychicDetectionCount; /*0x6e8794*/
    do /*0x6e87bc*/
    {
      v4 = *(_DWORD *)(*p_psychicDetectionCount + 1588); /*0x6e879c*/
      if ( v4 <= result ) /*0x6e87a4*/
      {
        if ( v4 == -1 ) /*0x6e87ad*/
        {
          if ( *(_DWORD *)&dword_A8B238 ) /*0x6e87b1*/
            result = 11; /*0x6e87b3*/
        }
      }
      else
      {
        result = *(_DWORD *)(*p_psychicDetectionCount + 1588); /*0x6e87a6*/
      }
      p_psychicDetectionCount += 2; /*0x6e87b8*/
      --secretLabsCount; /*0x6e87bb*/
    }
    while ( secretLabsCount ); /*0x6e87bc*/
  }
  return result; /*0x6e87c0*/
}



// ==== 0x006E87D0  TaskForceClass::StubReturn33  this=TaskForceClass  sig=csp ====
int TaskForceClass::StubReturn33(TaskForceClass *this)
{
  return 33; /*0x6e87d5*/
}



// ==== 0x006E87E0  TaskForceClass::StubReturn212  this=TaskForceClass  sig=csp ====
int TaskForceClass::StubReturn212(TaskForceClass *this)
{
  return 212; /*0x6e87e5*/
}



// ==== 0x006E87F0  TaskForceClass::ExecuteAction  this=TaskForceClass  sig=csp ====
void **__thiscall TaskForceClass::ExecuteAction(TaskForceClass *this, char a2)
{
  int v3; // eax
  TaskForceClass *v5; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->__pad_0 = &TaskForceClass::`vftable'; /*0x6e87f6*/
  this->TaskForceClass_field_0x4 = (int)&TaskForceClass::`vftable'; /*0x6e87fc*/
  *(_DWORD *)this->__pad_8 = &TaskForceClass::`vftable'; /*0x6e8803*/
  *(_DWORD *)&this->__pad_8[4] = &TaskForceClass::`vftable'; /*0x6e880a*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x6e8811*/
  v5 = this; /*0x6e8826*/
  v3 = (*(int (__thiscall **)(_DWORD *, TaskForceClass **))(dword_A8E8D0 + 16))(&dword_A8E8D0, &v5); /*0x6e882a*/
  if ( v3 != -1 && v3 < dword_A8E8E0 && v3 < --dword_A8E8E0 ) /*0x6e8845*/
  {
    do /*0x6e885d*/
    {
      ++v3; /*0x6e884d*/
      *((_DWORD *)dword_A8E8D4 + v3 - 1) = *((_DWORD *)dword_A8E8D4 + v3); /*0x6e8851*/
    }
    while ( v3 < dword_A8E8E0 ); /*0x6e885d*/
  }
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x6e8861*/
  if ( (a2 & 1) != 0 ) /*0x6e886b*/
    __3_YAXPAX_Z(this); /*0x6e886e*/
  return (void **)this; /*0x6e8878*/
}



// ==== 0x006E8880  sub_6E8880  this=-  sig=ida-proto ====
void sub_6E8880()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e888c*/
  dbl_B0E950 = Math::Sqrt(v0 + v0); /*0x6e889e*/
}



// ==== 0x006E88B0  sub_6E88B0  this=-  sig=ida-proto ====
void sub_6E88B0()
{
  dbl_B0E9A0 = dbl_B0E950 / 60.0; /*0x6e88bc*/
}



// ==== 0x006E88D0  sub_6E88D0  this=-  sig=ida-proto ====
void sub_6E88D0()
{
  dbl_B0E988 = 1.0 / dbl_B0E9A0; /*0x6e88dc*/
}



// ==== 0x006E88F0  sub_6E88F0  this=-  sig=ida-proto ====
void sub_6E88F0()
{
  dbl_B0E980 = 0.0174532925199433 * 45.0; /*0x6e88fc*/
}



// ==== 0x006E8910  sub_6E8910  this=-  sig=ida-proto ====
void sub_6E8910()
{
  dbl_B0E958 = 0.0174532925199433 * 60.0; /*0x6e891c*/
}



// ==== 0x006E8930  sub_6E8930  this=-  sig=ida-proto ====
void sub_6E8930()
{
  dbl_B0E930 = 0.0174532925199433 * 90.0; /*0x6e893c*/
}



// ==== 0x006E8950  sub_6E8950  this=-  sig=ida-proto ====
__int64 sub_6E8950()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E930 - dbl_B0E958); /*0x6e8962*/
  result = Math::RoundToInt(v0 * dbl_B0E950 * 0.5); /*0x6e8976*/
  dword_B0E9A8 = result; /*0x6e897b*/
  return result; /*0x6e8980*/
}



// ==== 0x006E8990  sub_6E8990  this=-  sig=ida-proto ====
void sub_6E8990()
{
  dbl_B0E960 = Math::ArcTan((double)dword_B0E9A8 * 0.00390625); /*0x6e89a7*/
}



// ==== 0x006E89C0  sub_6E89C0  this=-  sig=ida-proto ====
void sub_6E89C0()
{
  dbl_B0E978 = Math::ArcTan((double)(2 * dword_B0E9A8) / dbl_B0E950); /*0x6e89e2*/
}



// ==== 0x006E89F0  sub_6E89F0  this=-  sig=ida-proto ====
__int64 sub_6E89F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E9A8) + 0.5); /*0x6e8a0b*/
  dword_B0E99C = result; /*0x6e8a10*/
  return result; /*0x6e8a16*/
}



// ==== 0x006E8A20  sub_6E8A20  this=-  sig=ida-proto ====
int sub_6E8A20()
{
  dword_B0E948 = 0; /*0x6e8a22*/
  return 0; /*0x6e8a2e*/
}



// ==== 0x006E8A30  sub_6E8A30  this=-  sig=ida-proto ====
int sub_6E8A30()
{
  dword_B0E968 = 0; /*0x6e8a32*/
  dword_B0E96C = 0; /*0x6e8a37*/
  dword_B0E970 = 0; /*0x6e8a3c*/
  return 0; /*0x6e8a41*/
}



// ==== 0x006E8A50  sub_6E8A50  this=-  sig=ida-proto ====
int sub_6E8A50()
{
  dword_B0E998 = 0; /*0x6e8a55*/
  dword_B0E990 = 128; /*0x6e8a5f*/
  dword_B0E994 = 128; /*0x6e8a64*/
  return 128; /*0x6e8a69*/
}



// ==== 0x006E8A70  sub_6E8A70  this=-  sig=ida-proto ====
int sub_6E8A70()
{
  dword_B0E938 = 0; /*0x6e8a72*/
  dword_B0E93C = 0; /*0x6e8a77*/
  dword_B0E940 = 0; /*0x6e8a7c*/
  dword_B0E944 = 0; /*0x6e8a81*/
  return 0; /*0x6e8a86*/
}



// ==== 0x006E8A90  TeamClass::Construct  this=TeamClass  sig=csp ====
int __thiscall MissionClass_Constructor(int this, int a2, int a3, int a4)
{
  int v5; // ecx
  int v6; // edx
  wchar_t *v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  __int16 *WaypointCoords; // eax
  int v16; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6e8a94*/
  v5 = a3; /*0x6e8a9d*/
  v6 = a4; /*0x6e8aa1*/
  *(_DWORD *)(this + 36) = a2; /*0x6e8aa7*/
  *(_DWORD *)(this + 40) = 0; /*0x6e8aaa*/
  *(_DWORD *)(this + 44) = v5; /*0x6e8aad*/
  *(_DWORD *)(this + 48) = 0; /*0x6e8ab0*/
  *(_DWORD *)(this + 52) = 0; /*0x6e8ab3*/
  *(_DWORD *)(this + 56) = 0; /*0x6e8ab6*/
  *(_DWORD *)(this + 60) = 0; /*0x6e8ab9*/
  *(_DWORD *)(this + 64) = 0; /*0x6e8abc*/
  *(_DWORD *)(this + 68) = v6; /*0x6e8abf*/
  *(_DWORD *)(this + 72) = 0; /*0x6e8ac2*/
  *(_DWORD *)(this + 76) = 0; /*0x6e8ac5*/
  *(_DWORD *)(this + 80) = dword_A8ED84; /*0x6e8acd*/
  *(_DWORD *)(this + 84) = 0; /*0x6e8ad0*/
  v7 = dword_A8ED84; /*0x6e8ad3*/
  *(_DWORD *)(this + 96) = 0; /*0x6e8ad9*/
  *(_DWORD *)(this + 88) = v7; /*0x6e8adc*/
  *(_DWORD *)(this + 100) = dword_A8ED84; /*0x6e8ae7*/
  *(_DWORD *)(this + 108) = 0; /*0x6e8aea*/
  *(_DWORD *)(this + 112) = 0; /*0x6e8aed*/
  *(_BYTE *)(this + 116) = 0; /*0x6e8af0*/
  *(_BYTE *)(this + 117) = 0; /*0x6e8af3*/
  *(_BYTE *)(this + 118) = 0; /*0x6e8af6*/
  *(_BYTE *)(this + 119) = 0; /*0x6e8af9*/
  *(_BYTE *)(this + 120) = 0; /*0x6e8afc*/
  *(_BYTE *)(this + 121) = 0; /*0x6e8aff*/
  *(_BYTE *)(this + 122) = 1; /*0x6e8b02*/
  *(_BYTE *)(this + 123) = 0; /*0x6e8b05*/
  *(_BYTE *)(this + 124) = 0; /*0x6e8b08*/
  *(_BYTE *)(this + 125) = 1; /*0x6e8b0b*/
  *(_BYTE *)(this + 126) = 0; /*0x6e8b0e*/
  *(_BYTE *)(this + 127) = 0; /*0x6e8b11*/
  *(_BYTE *)(this + 128) = 1; /*0x6e8b14*/
  *(_BYTE *)(this + 129) = 0; /*0x6e8b1a*/
  *(_BYTE *)(this + 130) = 0; /*0x6e8b20*/
  *(_BYTE *)(this + 131) = 0; /*0x6e8b26*/
  *(_BYTE *)(this + 132) = 0; /*0x6e8b2c*/
  *(_DWORD *)this = &TeamClass::`vftable'; /*0x6e8b32*/
  *(_DWORD *)(this + 4) = &TeamClass::`vftable'; /*0x6e8b38*/
  *(_DWORD *)(this + 8) = &TeamClass::`vftable'; /*0x6e8b3f*/
  *(_DWORD *)(this + 12) = &TeamClass::`vftable'; /*0x6e8b46*/
  if ( dword_8B40F8 < dword_8B40F0 /*0x6e8b7e*/
    || (byte_8B40F5 || !dword_8B40F0)
    && dword_8B40FC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B40E8 + 8))(
         &dword_8B40E8,
         dword_8B40F0 + dword_8B40FC,
         0) )
  {
    v8 = dword_8B40F8++; /*0x6e8b8b*/
    *((_DWORD *)dword_8B40EC + v8) = this; /*0x6e8b9a*/
  }
  if ( dword_B0F680 < dword_B0F678 /*0x6e8bd1*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F678 + dword_B0F684,
         0) )
  {
    v9 = dword_B0F680++; /*0x6e8bde*/
    *((_DWORD *)dword_B0F674 + v9) = this; /*0x6e8bed*/
  }
  if ( dword_B0F628 < dword_B0F620 /*0x6e8c24*/
    || (byte_B0F625 || !dword_B0F620)
    && dword_B0F62C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F618 + 8))(
         &dword_B0F618,
         dword_B0F620 + dword_B0F62C,
         0) )
  {
    v10 = dword_B0F628++; /*0x6e8c31*/
    *((_DWORD *)dword_B0F61C + v10) = this; /*0x6e8c40*/
  }
  if ( dword_B0F730 < dword_B0F728 /*0x6e8c77*/
    || (byte_B0F72D || !dword_B0F728)
    && dword_B0F734 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F720 + 8))(
         &dword_B0F720,
         dword_B0F728 + dword_B0F734,
         0) )
  {
    v11 = dword_B0F730++; /*0x6e8c84*/
    *((_DWORD *)dword_B0F724 + v11) = this; /*0x6e8c93*/
  }
  if ( dword_B0F700 < dword_B0F6F8 /*0x6e8cca*/
    || (byte_B0F6FD || !dword_B0F6F8)
    && dword_B0F704 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F6F0 + 8))(
         &dword_B0F6F0,
         dword_B0F6F8 + dword_B0F704,
         0) )
  {
    v12 = dword_B0F700++; /*0x6e8cd7*/
    *((_DWORD *)dword_B0F6F4 + v12) = this; /*0x6e8ce6*/
  }
  memset((void *)(this + 136), 0, 0x18u); /*0x6e8cf7*/
  v13 = *(_DWORD *)(this + 36); /*0x6e8cf9*/
  if ( v13 ) /*0x6e8cff*/
  {
    v14 = *(_DWORD *)(this + 44); /*0x6e8d05*/
    if ( v14 && *(_BYTE *)(v13 + 246) ) /*0x6e8d0c*/
      ++*(_DWORD *)(v14 + 22124); /*0x6e8d14*/
    if ( *TechnoClass::GetWaypointCoords(*(_DWORD **)(this + 36), &a2) != dword_B0E948 ) /*0x6e8d31*/
    {
      WaypointCoords = (__int16 *)TechnoClass::GetWaypointCoords(*(_DWORD **)(this + 36), &a2); /*0x6e8d48*/
      *(_DWORD *)(this + 52) = CellCoord::To_CellObj(&dword_87F7E8, WaypointCoords); /*0x6e8d58*/
    }
    ++*(_DWORD *)(*(_DWORD *)(this + 36) + 220); /*0x6e8d65*/
    if ( *(_DWORD *)(*(_DWORD *)(this + 36) + 208) ) /*0x6e8d6e*/
    {
      if ( __2_YAPAXI_Z(0x38u) ) /*0x6e8d78*/
        v16 = TeknoClass::GetType(*(_DWORD *)(*(_DWORD *)(this + 36) + 208)); /*0x6e8d90*/
      else
        v16 = 0; /*0x6e8d97*/
      *(_DWORD *)(this + 112) = v16; /*0x6e8d99*/
    }
    if ( __2_YAPAXI_Z(0x30u) ) /*0x6e8d9e*/
    {
      *(_DWORD *)(this + 40) = ScriptClass::Construct(*(_DWORD *)(*(_DWORD *)(this + 36) + 224)); /*0x6e8dbb*/
      return this; /*0x6e8dc2*/
    }
    *(_DWORD *)(this + 40) = 0; /*0x6e8dc7*/
  }
  return this; /*0x6e8dc0*/
}



// ==== 0x006E8DE0  TeamClass::Destructor  this=TeamClass  sig=csp ====
int __thiscall TeamClass::Destructor(TeamClass *this)
{
  int v2; // edi
  int v3; // ecx
  HouseClass *owner; // ecx
  TeamTypeClass *buildingType; // eax
  FootClass *i; // eax
  TagClass *tag; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  TeamTypeClass *v13; // ecx
  TeamClass *v15; // [esp+10h] [ebp-4h] BYREF

  v2 = 0; /*0x6e8de5*/
  this->AbstractClass = &TeamClass::`vftable'; /*0x6e8de7*/
  this->? = &TeamClass::`vftable'; /*0x6e8ded*/
  this->? = &TeamClass::`vftable'; /*0x6e8df4*/
  for ( this->? = &TeamClass::`vftable'; v2 < dword_A8B210; ++v2 ) /*0x6e8e09*/
  {
    v3 = *((_DWORD *)dword_A8B204 + v2); /*0x6e8e10*/
    if ( *(TeamTypeClass **)(v3 + 220) == this->buildingType ) /*0x6e8e1e*/
    {
      if ( this->achievedGreatSuccess ) /*0x6e8e20*/
        AITriggerTypeClass::RegisterSuccess((AITriggerTypeClass *)v3); /*0x6e8e2a*/
      else
        AITriggerTypeClass::RegisterFailure((AITriggerTypeClass *)v3); /*0x6e8e31*/
    }
  }
  owner = this->owner; /*0x6e8e40*/
  if ( owner ) /*0x6e8e45*/
  {
    buildingType = this->buildingType; /*0x6e8e47*/
    if ( buildingType ) /*0x6e8e4c*/
    {
      if ( BYTE2(buildingType[2].?) ) /*0x6e8e4e*/
        --owner->dropshipData[5]; /*0x6e8e58*/
    }
  }
  if ( byte_A8E9A0 && this->buildingType ) /*0x6e8e67*/
  {
    for ( i = this->firstUnit; i; i = this->firstUnit ) /*0x6e8e73*/
      TeamClass::LiberateMember_Start((int *)this, (int)i, 0xFFFFFFFF, 0); /*0x6e8e7c*/
    --this->buildingType[1].TeamTypeClass_field_68; /*0x6e8e92*/
    tag = this->tag; /*0x6e8e98*/
    if ( tag ) /*0x6e8e9d*/
    {
      if ( !tag->instanceCount ) /*0x6e8e9f*/
        TagClass::Destroy(tag); /*0x6e8ea6*/
      this->tag = 0; /*0x6e8eab*/
    }
  }
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x6e8eb6*/
  v15 = this; /*0x6e8ecb*/
  v8 = (*(int (__thiscall **)(int *, TeamClass **))(g_BuildingLoadQueue_Array.unknown__ + 16))( /*0x6e8ecf*/
         &g_BuildingLoadQueue_Array.unknown__,
         &v15);
  if ( v8 != -1 && v8 < g_BuildingLoadQueue_Array.TargetCoordOffset[1] ) /*0x6e8edf*/
  {
    --g_BuildingLoadQueue_Array.TargetCoordOffset[1]; /*0x6e8ee4*/
    for ( ; /*0x6e8eea*/
          v8 < g_BuildingLoadQueue_Array.TargetCoordOffset[1];
          *(_DWORD *)(g_BuildingLoadQueue_Array.Adjacent + 4 * v8 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.Adjacent
                                                                                   + 4 * v8) )
    {
      ++v8; /*0x6e8ef2*/
    }
  }
  v15 = this; /*0x6e8f14*/
  v9 = (*(int (__thiscall **)(int *, TeamClass **))(g_BuildingLoadQueue_Array.PowerBonus + 16))( /*0x6e8f18*/
         &g_BuildingLoadQueue_Array.PowerBonus,
         &v15);
  if ( v9 != -1 && v9 < g_BuildingLoadQueue_Array.Foundation[0] ) /*0x6e8f28*/
  {
    --g_BuildingLoadQueue_Array.Foundation[0]; /*0x6e8f2d*/
    for ( ; /*0x6e8f33*/
          v9 < g_BuildingLoadQueue_Array.Foundation[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v9 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain
                                                                                     + 4 * v9) )
    {
      ++v9; /*0x6e8f3b*/
    }
  }
  v15 = this; /*0x6e8f5d*/
  v10 = (*(int (__thiscall **)(int *, TeamClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6e8f61*/
          &g_BuildingLoadQueue_Array.LightVisibility,
          &v15);
  if ( v10 != -1 && v10 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x6e8f71*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x6e8f76*/
    for ( ; /*0x6e8f7c*/
          v10 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v10 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                          + 4 * v10) )
    {
      ++v10; /*0x6e8f84*/
    }
  }
  v15 = this; /*0x6e8fa6*/
  v11 = (*(int (__thiscall **)(char *, TeamClass **))(*(_DWORD *)&g_BuildingLoadQueue_Array.?[16] + 16))( /*0x6e8faa*/
          &g_BuildingLoadQueue_Array.?[16],
          &v15);
  if ( v11 != -1 && v11 < *(int *)&g_BuildingLoadQueue_Array.?[32] ) /*0x6e8fba*/
  {
    --*(_DWORD *)&g_BuildingLoadQueue_Array.?[32]; /*0x6e8fbf*/
    for ( ; /*0x6e8fc5*/
          v11 < *(int *)&g_BuildingLoadQueue_Array.?[32];
          *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.?[20] + 4 * v11 - 4) = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.?[20]
                                                                                             + 4 * v11) )
    {
      ++v11; /*0x6e8fcd*/
    }
  }
  v15 = this; /*0x6e8fef*/
  v12 = ((int (__thiscall *)(ParticleSystemClass **, TeamClass **))FootClass_Array.?->?)(&FootClass_Array.?, &v15); /*0x6e8ff3*/
  if ( v12 != -1 && v12 < (int)FootClass_Array.? ) /*0x6e9003*/
  {
    --FootClass_Array.?; /*0x6e9008*/
    for ( ; /*0x6e900e*/
          v12 < (int)FootClass_Array.?;
          *((_DWORD *)FootClass_Array.? + v12 - 1) = *((_DWORD *)&FootClass_Array.?->ObjectClass + v12) )
    {
      ++v12; /*0x6e9016*/
    }
  }
  if ( this->unknown74 ) /*0x6e9028*/
  {
    v13 = this->buildingType; /*0x6e902f*/
    if ( v13 ) /*0x6e9034*/
      (*((void (__thiscall **)(TeamTypeClass *, int))v13->AbstractClass + 8))(v13, 1); /*0x6e903a*/
  }
  return AbstractClass::DTOR((AbstractClass *)this); /*0x6e9044*/
}



// ==== 0x006E9050  TeamClass::SelectMember  this=AbstractClass  sig=csp ====
char __thiscall TeamClass_SelectMember(int this, int a2)
{
  int v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // edx
  bool v8; // bl
  int v9; // eax
  _DWORD *v10; // esi
  bool v12; // [esp+10h] [ebp+4h]

  v4 = *(_DWORD *)(this + 60); /*0x6e9059*/
  if ( a2 != v4 ) /*0x6e905e*/
  {
    v5 = *(_DWORD **)(this + 84); /*0x6e9060*/
    if ( v4 ) /*0x6e9065*/
    {
      for ( ; v5; v5 = (_DWORD *)v5[374] ) /*0x6e9069*/
      {
        v6 = *(_DWORD *)(this + 60); /*0x6e906c*/
        v7 = v5[361]; /*0x6e9075*/
        v12 = v5[173] == v6; /*0x6e9082*/
        v8 = v7 == v6; /*0x6e9086*/
        if ( v5[173] == v6 || v7 == v6 ) /*0x6e908f*/
        {
          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v5 + 488))(v5, 5, 0); /*0x6e9099*/
          if ( v8 ) /*0x6e90a1*/
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v5 + 1152))(v5, 0, 1); /*0x6e90ab*/
          if ( v12 ) /*0x6e90b7*/
            (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 968))(v5, 0); /*0x6e90bf*/
        }
      }
    }
  }
  v9 = *(_DWORD *)(this + 64); /*0x6e90d0*/
  if ( v9 == *(_DWORD *)(this + 60) || !v9 ) /*0x6e90dc*/
    *(_DWORD *)(this + 64) = a2; /*0x6e90de*/
  *(_DWORD *)(this + 60) = a2; /*0x6e90e3*/
  if ( a2 ) /*0x6e90e6*/
  {
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2); /*0x6e90ed*/
    if ( v9 == 11 ) /*0x6e90f3*/
    {
      LOBYTE(v9) = Type::CheckAmbiguity(&dword_87F7E8, a2, 1); /*0x6e90fd*/
      if ( (_BYTE)v9 ) /*0x6e9104*/
      {
        *(_BYTE *)(this + 130) = 0; /*0x6e9132*/
      }
      else
      {
        v10 = *(_DWORD **)(this + 84); /*0x6e9106*/
        for ( *(_BYTE *)(this + 130) = 1; v10; v10 = (_DWORD *)v10[374] ) /*0x6e9112*/
          LOBYTE(v9) = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v10 + 1152))(v10, 0, 1); /*0x6e911c*/
      }
    }
  }
  return v9; /*0x6e912c*/
}



// ==== 0x006E9140  TeamClass::Update  this=TeamClass  sig=csp ====
void __usercall TeamClass::Update(TeamClass *this, _DWORD *a2@<ebp>, int j@<edi>)
{
  TeamClass *v3; // ecx
  int v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int i; // edi
  char v11; // cl
  char v12; // al
  char v13; // bl
  TeamClass *v14; // ecx
  int *Entry; // eax
  signed int v16; // ecx
  _DWORD *n; // edi
  int v18; // eax
  _DWORD *ii; // edi
  int v20; // eax
  _DWORD *v21; // edi
  _DWORD *v22; // ebp
  int v23; // eax
  void *MapSpawnCell; // eax
  _DWORD *m; // edi
  int *v26; // edi
  int *v27; // ebp
  int v28; // ebx
  int Owner; // eax
  int v30; // eax
  int *v31; // ebp
  int k; // edi
  int v33; // ecx
  ScriptClass *v34; // eax
  AbstractClass *v35; // eax
  _DWORD *v36; // edi
  _DWORD *v37; // edi
  _DWORD *v38; // edi
  _DWORD *v39; // eax
  int *v40; // edi
  char v41; // cl
  int v42; // edx
  _DWORD *v43; // eax
  _DWORD *v44; // edi
  _DWORD *v45; // edi
  int v46; // eax
  _DWORD *v47; // edi
  char v4... [26375 chars total]



// ==== 0x006EA080  ObjectClass::method_6EA080  this=ObjectClass  sig=csp ====
char __thiscall sub_6EA080(ObjectClass *this)
{
  int v2; // eax
  char result; // al

  v2 = this->customSound_controller[1]; /*0x6ea086*/
  HIBYTE(this->visibilityFlags) = 1; /*0x6ea089*/
  LOBYTE(this->spawnStatus) = 1; /*0x6ea08e*/
  for ( BYTE2(this->spawnStatus) = 0; v2; v2 = *(_DWORD *)(v2 + 1496) ) /*0x6ea095*/
  {
    if ( HIBYTE(this->spawnStatus) || this->alignmentPadding75[2] ) /*0x6ea09e*/
      *(_BYTE *)(v2 + 1673) = 1; /*0x6ea0a5*/
  }
  result = SetLandTypeMap((ObjectClass *)this->owningHouseIndex); /*0x6ea0b8*/
  this->needsRedraw = 1; /*0x6ea0bd*/
  return result; /*0x6ea0c3*/
}



// ==== 0x006EA0D0  ObjectClass::SelectTeamProductionBuilding  this=ObjectClass  sig=csp ====
void __thiscall SelectTeamProductionBuilding(ObjectClass *this)
{
  double v1; // st7
  ObjectClass *owningHouseIndex; // ecx
  TagClass **p_attachedTag; // esi
  BombClass *attachedBomb; // edi
  _DWORD *v6; // eax
  int fallRate; // ecx
  int v8; // eax
  int v9; // esi
  _DWORD *v10; // eax
  TagClass *attachedTag; // ecx
  _DWORD *v12; // edi
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // edi
  _DWORD *v18; // eax
  int v19; // esi
  int v20; // ebp
  int v21; // eax
  int v22; // [esp+2Ch] [ebp-68h] BYREF
  int v23; // [esp+30h] [ebp-64h]
  int v24; // [esp+34h] [ebp-60h]
  int v25; // [esp+38h] [ebp-5Ch]
  ObjectClass *v26; // [esp+3Ch] [ebp-58h]
  int v27; // [esp+40h] [ebp-54h]
  int i; // [esp+44h] [ebp-50h]
  __int16 v29[2]; // [esp+48h] [ebp-4Ch] BYREF
  int j; // [esp+4Ch] [ebp-48h] BYREF
  int v31; // [esp+50h] [ebp-44h]
  int v32; // [esp+54h] [ebp-40h] BYREF
  int v33; // [esp+58h] [ebp-3Ch] BYREF
  int v34; // [esp+5Ch] [ebp-38h]
  int v35; // [esp+60h] [ebp-34h]
  _BYTE v36[12]; // [esp+64h] [ebp-30h] BYREF
  _BYTE v37[12]; // [esp+70h] [ebp-24h] BYREF
  _BYTE v38[12]; // [esp+7Ch] [ebp-18h] BYREF
  _BYTE v39[12]; // [esp+88h] [ebp-Ch] BYREF

  owningHouseIndex = (ObjectClass *)this->owningHouseIndex; /*0x6ea0de*/
  HIBYTE(this->visibilityFlags) = 0; /*0x6ea0e2*/
  SetLandTypeMap(owningHouseIndex); /*0x6ea0e6*/
  if ( this->ambientSoundController[3] <= 0 ) /*0x6ea0f0*/
  {
    this->attachedTag = 0; /*0x6ea3c2*/
  }
  else
  {
    p_attachedTag = &this->attachedTag; /*0x6ea0f9*/
    TeamClass::FindClosestEnemy((int)this, (void **)&this->attachedTag, (int *)&this->attachedBomb); /*0x6ea100*/
    if ( !this->attachedTag ) /*0x6ea105*/
    {
      attachedBomb = this->attachedBomb; /*0x6ea10a*/
      if ( !attachedBomb ) /*0x6ea10e*/
        return; /*0x6ea10e*/
      *p_attachedTag = (TagClass *)attachedBomb; /*0x6ea114*/
    }
    v6 = (_DWORD *)(*((int (__thiscall **)(TagClass *, int *))(*p_attachedTag)->AbstractClass + 18))( /*0x6ea11f*/
                     *p_attachedTag,
                     &v33);
    v27 = 0x7FFFFFFF; /*0x6ea124*/
    LOWORD(v22) = *v6 / 256; /*0x6ea13a*/
    fallRate = this->fallRate; /*0x6ea143*/
    HIWORD(v22) = v6[1] / 256; /*0x6ea151*/
    *(_DWORD *)v29 = v22; /*0x6ea15a*/
    v8 = 0; /*0x6ea161*/
    v31 = *(_DWORD *)(fallRate + 120); /*0x6ea163*/
    for ( i = 0; i < v31; ++i ) /*0x6ea16d*/
    {
      v9 = *(_DWORD *)(*(_DWORD *)(this->fallRate + 108) + 4 * v8); /*0x6ea179*/
      if ( v9 && !*(_BYTE *)(v9 + 129) && !*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 1016))(v9, 0) ) /*0x6ea19e*/
      {
        v10 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 72))(v9, v36); /*0x6ea1b0*/
        LOWORD(v23) = *v10 / 256; /*0x6ea1c3*/
        attachedTag = this->attachedTag; /*0x6ea1d2*/
        HIWORD(v23) = v10[1] / 256; /*0x6ea1da*/
        v22 = v23; /*0x6ea1e3*/
        v12 = (_DWORD *)(*((int (__thiscall **)(TagClass *, _BYTE *))attachedTag->AbstractClass + 18))(attachedTag, v37); /*0x6ea1f5*/
        v13 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 72))(v9, v38); /*0x6ea1fc*/
        v14 = v13[1]; /*0x6ea203*/
        v33 = *v13 - *v12; /*0x6ea208*/
        v15 = v13[2]; /*0x6ea211*/
        v34 = v14 - v12[1]; /*0x6ea214*/
        v35 = v15 - v12[2]; /*0x6ea224*/
        Math::Sqrt((double)v33 * (double)v33 + (double)v35 * (double)v35 + (double)v34 * (double)v34); /*0x6ea249*/
        LOWORD(v16) = Math::RoundToInt(v1); /*0x6ea251*/
        v17 = v16 * (CellClass::GetTileData((__int16 *)&v22, this->fallRate) + 1); /*0x6ea27a*/
        if ( *(_BYTE *)(*(_DWORD *)(v9 + 1312) + 5801) ) /*0x6ea274*/
          v17 /= 2; /*0x6ea288*/
        if ( v17 < v27 ) /*0x6ea28e*/
        {
          v18 = (_DWORD *)(*((int (__thiscall **)(TagClass *, _BYTE *))this->attachedTag->AbstractClass + 18))( /*0x6ea29e*/
                            this->attachedTag,
                            v39);
          v19 = this->customSound_controller[1]; /*0x6ea2a3*/
          v26 = (ObjectClass *)v19; /*0x6ea2a6*/
          v25 = -1; /*0x6ea2aa*/
          LOWORD(v24) = *v18 / 256; /*0x6ea2c0*/
          HIWORD(v24) = v18[1] / 256; /*0x6ea2d4*/
          for ( j = v24; v19; v19 = *(_DWORD *)(v19 + 1496) ) /*0x6ea2e3*/
          {
            v20 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v19 + 132))(v19) + 1532); /*0x6ea2ef*/
            if ( *(_BYTE *)(v19 + 144) /*0x6ea337*/
              && *(_DWORD *)(v19 + 108)
              && (dword_A8E7AC || !*(_BYTE *)(v19 + 129))
              && (*(_BYTE *)(v19 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 44))(v19) == 2)
              && v20 > v25 )
            {
              v26 = (ObjectClass *)v19; /*0x6ea339*/
              v25 = v20; /*0x6ea33d*/
            }
          }
          v21 = *WalkPathfindingLine(v26, &v32, (int)&j, &v22, 2, 4); /*0x6ea367*/
          v22 = v21; /*0x6ea370*/
          if ( v21 != g_BuildingLoadQueue_Array.?[1] ) /*0x6ea374*/
          {
            v27 = v17; /*0x6ea384*/
            *(_DWORD *)v29 = v21; /*0x6ea388*/
          }
        }
      }
      v8 = i + 1; /*0x6ea394*/
    }
    this->ambientSoundController[1] = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x6ea3b2*/
    TeamClass::UpdateMembers((TeamClass *)this); /*0x6ea3b5*/
  }
}



// ==== 0x006EA3E0  TeamClass::UpdateReadinessState  this=TeamClass  sig=csp ====
char __thiscall TeamClass::UpdateReadinessState(TeamClass *this)
{
  int v2; // eax
  int totalObjects; // ecx
  TeamTypeClass *buildingType; // edi
  char spawnStatus; // al
  char *i; // edi
  char TeamClass_field_7A; // [esp+Fh] [ebp-1h]

  TeamClass_field_7A = this->TeamClass_field_7A; /*0x6ea3ec*/
  v2 = TeamClass::SumMemberCounts(*(TeamClass **)&this->buildingType[1].TeamTypeClass_field_70); /*0x6ea3f6*/
  totalObjects = this->totalObjects; /*0x6ea3fb*/
  if ( totalObjects > 0 ) /*0x6ea404*/
  {
    this->unknown79 = totalObjects == v2; /*0x6ea40d*/
    if ( totalObjects == v2 ) /*0x6ea410*/
      this->spawnStatus = 1; /*0x6ea412*/
    buildingType = this->buildingType; /*0x6ea416*/
    if ( HIBYTE(buildingType[1].TeamTypeClass_field_34) ) /*0x6ea419*/
    {
      if ( v2 <= 2 ) /*0x6ea424*/
        this->TeamClass_field_7A = totalObjects < v2; /*0x6ea443*/
      else
        this->TeamClass_field_7A = totalObjects <= v2 / 3; /*0x6ea439*/
    }
    else
    {
      this->TeamClass_field_7A = this->spawnStatus == 0; /*0x6ea44e*/
    }
    if ( HIBYTE(buildingType[1].TeamTypeClass_field_30) ) /*0x6ea451*/
    {
      if ( this->TeamClass_field_7A ) /*0x6ea459*/
        this->unknown76 = 0; /*0x6ea45e*/
      else
        this->unknown76 = 1; /*0x6ea463*/
    }
    this->TeamClass_field_7E = 0; /*0x6ea467*/
    this->needsToDisappear = 0; /*0x6ea46a*/
    goto LABEL_14; /*0x6ea46a*/
  }
  spawnStatus = this->spawnStatus; /*0x6ea483*/
  this->unknown76 = 0; /*0x6ea486*/
  this->TeamClass_field_7A = 1; /*0x6ea48b*/
  this->unknown79 = 0; /*0x6ea48f*/
  this->spawnCell = 0; /*0x6ea492*/
  if ( !spawnStatus ) /*0x6ea495*/
  {
LABEL_14:
    if ( TeamClass_field_7A != this->TeamClass_field_7A ) /*0x6ea476*/
      this->TeamClass_field_7B = 1; /*0x6ea478*/
    return 1; /*0x6ea482*/
  }
  if ( this->unknown82 ) /*0x6ea497*/
  {
    for ( i = (char *)&FootClass_Array.?[-1].OwnerHouse + 3; (int)i >= 0; --i ) /*0x6ea4aa*/
    {
      if ( (unsigned __int8)TeamClass::Update_0( /*0x6ea4cf*/
                              *((TeamClass **)&FootClass_Array.?->ObjectClass + (_DWORD)i),
                              23,
                              0,
                              g_BuildingLoadQueue_Array.?[1],
                              0,
                              0)
        && !FootClass_Array.? )
      {
        break; /*0x6ea4cf*/
      }
    }
  }
  if ( this ) /*0x6ea4d6*/
    (*((void (__thiscall **)(TeamClass *, int))this->AbstractClass + 8))(this, 1); /*0x6ea4de*/
  return 0; /*0x6ea47c*/
}



// ==== 0x006EA4F0  CaptureManagerClass::AddMember  this=CaptureManagerClass  sig=csp ====
char __thiscall CaptureManagerClass::AddMember(CaptureManagerClass *this, int a2)
{
  return TeamClass::AddMember((int *)this, a2, 1); /*0x6ea4fc*/
}



// ==== 0x006EA500  TeamClass::AddMember  this=ObjectClass  sig=csp ====
int __thiscall TeamClass::AddMember(int *this, int a2, char a3)
{
  int v3; // edi
  int result; // eax
  char v6; // bl
  int *v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // edx

  v3 = a2; /*0x6ea503*/
  if ( a2 ) /*0x6ea50b*/
  {
    v6 = a3; /*0x6ea515*/
    result = TeamClass::ValidateMember((TeamClass *)this, a2, &a2, a3); /*0x6ea522*/
    if ( (_BYTE)result ) /*0x6ea529*/
    {
      v7 = *(int **)(v3 + 1492); /*0x6ea531*/
      if ( v7 ) /*0x6ea539*/
        TeamClass::LiberateMember_Start(v7, v3, 0xFFFFFFFF, 0); /*0x6ea540*/
      if ( !v6 ) /*0x6ea547*/
        ++*(this + a2 + 34); /*0x6ea54d*/
      *(_BYTE *)(v3 + 1673) = this->q054 == 0; /*0x6ea55c*/
      *(_DWORD *)(v3 + 1496) = this->q054; /*0x6ea565*/
      this->q054 = v3; /*0x6ea56b*/
      *(_DWORD *)(v3 + 1492) = this; /*0x6ea56e*/
      *(_DWORD *)(v3 + 532) = TeamTypeClass::GetGroup((TeamTypeClass *)this->objectTypeFlags); /*0x6ea57c*/
      if ( this->referenceCount /*0x6ea5a8*/
        && (!*(_BYTE *)(this->objectTypeFlags + 179) || *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 132))(v3) + 1504) > 0) )
      {
        ObjectClass::SetReference((ObjectClass *)v3, this->referenceCount); /*0x6ea5b0*/
      }
      ++this->q048; /*0x6ea5bb*/
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 704))(v3); /*0x6ea5c0*/
      v9 = this->attachedTag; /*0x6ea5c9*/
      v10 = v8 + this->IsAllocated; /*0x6ea5cc*/
      result = (int)(this + 13); /*0x6ea5ce*/
      this->IsAllocated = v10; /*0x6ea5d3*/
      if ( !v9 ) /*0x6ea5d6*/
        TeamClass::FindClosestEnemy((int)this, (void **)this + 13, this + 14); /*0x6ea5df*/
      v11 = this->objectTypeFlags; /*0x6ea5e4*/
      LOBYTE(result) = 1; /*0x6ea5e7*/
      *((_BYTE *)this + 126) = 1; /*0x6ea5e9*/
      *((_BYTE *)this + 125) = 1; /*0x6ea5ec*/
      *(_BYTE *)(v3 + 1058) = *(_BYTE *)(v11 + 245); /*0x6ea5f5*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x6ea50f*/
  }
  return result; /*0x6ea50d*/
}



// ==== 0x006EA610  TeamClass::ValidateMember  this=TeamClass  sig=csp ====
int __thiscall TeamClass::ValidateMember(TeamClass *this, int a2, int *a3, char a4)
{
  int result; // eax
  int v6; // edi
  int v7; // eax
  ScriptClass *currentScript; // ecx
  bool v9; // bl
  int v10; // eax
  int v11; // edx
  int v12; // [esp+10h] [ebp-8h] BYREF

  if ( this == *(TeamClass **)(a2 + 1492) ) /*0x6ea623*/
    goto LABEL_39; /*0x6ea623*/
  if ( !a2 ) /*0x6ea62b*/
    goto LABEL_39; /*0x6ea62b*/
  if ( !*(_BYTE *)(a2 + 144) ) /*0x6ea631*/
    goto LABEL_39; /*0x6ea631*/
  result = *(_DWORD *)(a2 + 108); /*0x6ea63f*/
  if ( !result ) /*0x6ea644*/
    goto LABEL_39; /*0x6ea644*/
  if ( !dword_A8E7AC ) /*0x6ea651*/
  {
    result = *(unsigned __int8 *)(a2 + 129); /*0x6ea653*/
    if ( (_BYTE)result ) /*0x6ea65b*/
      goto LABEL_39; /*0x6ea65b*/
  }
  result = *(_DWORD *)(a2 + 540); /*0x6ea661*/
  if ( (HouseClass *)result != this->owner ) /*0x6ea66c*/
    goto LABEL_39; /*0x6ea66c*/
  if ( (unsigned __int8)Team::AllMembersValid((Team *)a2) ) /*0x6ea674*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2); /*0x6ea681*/
    if ( result != 2 ) /*0x6ea687*/
      goto LABEL_39; /*0x6ea687*/
    result = *(_DWORD *)(a2 + 1732); /*0x6ea68d*/
    if ( !*(_BYTE *)(result + 3597) ) /*0x6ea693*/
      goto LABEL_39; /*0x6ea693*/
  }
  *a3 = 0; /*0x6ea6a5*/
  if ( *(int *)(*(_DWORD *)&this->buildingType[1].TeamTypeClass_field_70 + 156) > 0 ) /*0x6ea6bc*/
  {
    do /*0x6ea6f0*/
    {
      v6 = *a3; /*0x6ea6c0*/
      if ( *(_DWORD *)(*(_DWORD *)&this->buildingType[1].TeamTypeClass_field_70 + 8 * v6 + 168) == (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 136))(a2) ) /*0x6ea6da*/
        break; /*0x6ea6da*/
      *a3 = v6 + 1; /*0x6ea6df*/
    }
    while ( v6 + 1 < *(_DWORD *)(*(_DWORD *)&this->buildingType[1].TeamTypeClass_field_70 + 156) ); /*0x6ea6f0*/
  }
  result = (int)this->buildingType; /*0x6ea6f2*/
  if ( *a3 == *(_DWORD *)(*(_DWORD *)(result + 228) + 156) && !a4 ) /*0x6ea70b*/
    goto LABEL_39; /*0x6ea70b*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 388))(a2) != -1 ) /*0x6ea71e*/
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 388))(a2); /*0x6ea724*/
    if ( !IPersistStream::SetField(v7) ) /*0x6ea72c*/
      goto LABEL_39; /*0x6ea72c*/
  }
  if ( !*(_BYTE *)(a2 + 1057) ) /*0x6ea739*/
  {
    result = (int)this->buildingType; /*0x6ea743*/
    if ( !*(_BYTE *)(result + 169) ) /*0x6ea746*/
      goto LABEL_39; /*0x6ea746*/
  }
  currentScript = this->currentScript; /*0x6ea754*/
  v9 = 0; /*0x6ea757*/
  if ( currentScript ) /*0x6ea75b*/
    v9 = *SessionClass::GetEntry((SessionClass *)currentScript, &v12) == 8; /*0x6ea76c*/
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2); /*0x6ea772*/
  if ( result == 2 ) /*0x6ea778*/
    v9 = 1; /*0x6ea77a*/
  if ( !*(_BYTE *)(a2 + 1058) && BYTE1(this->buildingType[1].TeamTypeClass_field_34) && !v9 ) /*0x6ea795*/
    goto LABEL_39; /*0x6ea795*/
  result = TeamClass::HasAnyMemberFlagged((TeamClass *)a2); /*0x6ea79d*/
  if ( (_BYTE)result ) /*0x6ea7a4*/
    goto LABEL_39; /*0x6ea7a4*/
  result = FootClass::checkPassability((FootClass *)a2); /*0x6ea7ac*/
  if ( (_BYTE)result ) /*0x6ea7b3*/
    goto LABEL_39; /*0x6ea7b3*/
  result = *(_DWORD *)(a2 + 740); /*0x6ea7b9*/
  if ( result ) /*0x6ea7c1*/
    goto LABEL_39; /*0x6ea7c1*/
  v10 = *(_DWORD *)(a2 + 1492); /*0x6ea7c7*/
  if ( v10 ) /*0x6ea7cf*/
  {
    v11 = *(_DWORD *)(v10 + 36); /*0x6ea7d1*/
    result = (int)this->buildingType; /*0x6ea7d4*/
    if ( *(_DWORD *)(v11 + 180) >= *(_DWORD *)(result + 180) ) /*0x6ea7e5*/
      goto LABEL_39; /*0x6ea7e5*/
  }
  if ( ((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) != 2 /*0x6ea83f*/
     || !*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 1016))(a2, 0)
     || (result = *(_DWORD *)(a2 + 764)) != 0)
    && ((result = *a3,
         this->countObjects[*a3] < *(_DWORD *)(*(_DWORD *)&this->buildingType[1].TeamTypeClass_field_70 + 8 * *a3 + 164))
     || a4)
    && (result = *(_DWORD *)(a2 + 740)) == 0 )
  {
    result = *(_DWORD *)(a2 + 688); /*0x6ea841*/
    LOBYTE(result) = result == 0; /*0x6ea84c*/
  }
  else
  {
LABEL_39:
    LOBYTE(result) = 0; /*0x6ea859*/
  }
  return result; /*0x6ea847*/
}



// ==== 0x006EA870  TeamClass::LiberateMember_Start  this=TeamClass  sig=csp ====
int __thiscall TeamClass::LiberateMember_Start(int *this, int a2, unsigned int a3, char a4)
{
  int result; // eax
  #375 *v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // esi
  char v14; // cl
  int v15; // eax
  char v16; // dl
  int v17; // eax
  int v18; // eax
  int v19; // [esp+8h] [ebp-4h]
  char v20; // [esp+14h] [ebp+8h]

  result = *(_DWORD *)(a2 + 1492); /*0x6ea879*/
  *(_BYTE *)(a2 + 1720) = 1; /*0x6ea87f*/
  if ( this == (int *)result ) /*0x6ea888*/
  {
    if ( *(_DWORD *)(a2 + 52) == this->referenceCount ) /*0x6ea89b*/
    {
      v6 = *(#375 **)(a2 + 540); /*0x6ea89d*/
      if ( v6 ) /*0x6ea8a7*/
      {
        if ( !(unsigned __int8)House::IsCurrentPlayer(v6) ) /*0x6ea8a9*/
          ObjectClass::SetReference((_DWORD *)a2, 0); /*0x6ea8b5*/
      }
    }
    if ( a3 == -1 ) /*0x6ea8c6*/
    {
      v7 = this->buildingType; /*0x6ea8c8*/
      if ( v7 ) /*0x6ea8cd*/
      {
        v8 = *(_DWORD *)(v7 + 228); /*0x6ea8cf*/
        if ( v8 ) /*0x6ea8d7*/
        {
          a3 = 0; /*0x6ea8df*/
          if ( *(int *)(v8 + 156) > 0 ) /*0x6ea8e5*/
          {
            v9 = 168; /*0x6ea8e7*/
            do /*0x6ea919*/
            {
              v10 = *(_DWORD *)(this->buildingType + 228); /*0x6ea8f2*/
              if ( *(_DWORD *)(v9 + v10) == (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 136))(a2) ) /*0x6ea903*/
                break; /*0x6ea903*/
              v9 += 8; /*0x6ea910*/
              ++a3; /*0x6ea915*/
            }
            while ( (signed int)a3 < *(_DWORD *)(v10 + 156) ); /*0x6ea919*/
          }
        }
      }
    }
    v11 = this->buildingType; /*0x6ea91d*/
    if ( v11 ) /*0x6ea922*/
    {
      v12 = *(_DWORD *)(v11 + 228); /*0x6ea924*/
      if ( v12 ) /*0x6ea92c*/
      {
        if ( a3 < *(_DWORD *)(v12 + 156) ) /*0x6ea93a*/
          --*(this + a3 + 34); /*0x6ea93c*/
      }
    }
    v13 = this->firstUnit; /*0x6ea943*/
    v14 = 0; /*0x6ea946*/
    v15 = 0; /*0x6ea948*/
    v16 = 0; /*0x6ea94a*/
    v20 = 0; /*0x6ea94e*/
    v19 = 0; /*0x6ea952*/
    if ( v13 ) /*0x6ea956*/
    {
      while ( !v16 || !v14 ) /*0x6ea96c*/
      {
        if ( v13 == a2 ) /*0x6ea974*/
        {
          if ( v15 ) /*0x6ea978*/
            *(_DWORD *)(v15 + 1496) = *(_DWORD *)(v13 + 1496); /*0x6ea980*/
          else
            this->firstUnit = *(_DWORD *)(v13 + 1496); /*0x6ea98e*/
          v17 = *(_DWORD *)(v13 + 1496); /*0x6ea991*/
          *(_DWORD *)(v13 + 1496) = 0; /*0x6ea997*/
          *(_DWORD *)(v13 + 1492) = 0; /*0x6ea99d*/
          *(_DWORD *)(v13 + 176) = -1; /*0x6ea9a3*/
          *(_DWORD *)(v13 + 1448) = 0; /*0x6ea9ad*/
          *(_DWORD *)(v13 + 696) = 0; /*0x6ea9b3*/
          v13 = v17; /*0x6ea9bc*/
          --this->totalObjects; /*0x6ea9c1*/
          v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 704))(a2); /*0x6ea9cc*/
          v16 = 1; /*0x6ea9d5*/
          this->totalThreatValue -= v18; /*0x6ea9db*/
        }
        else
        {
          if ( v14 || (v20 = 0, *(_BYTE *)(v13 + 1673)) ) /*0x6ea9e4*/
            v20 = 1; /*0x6ea9f2*/
          v19 = v13; /*0x6ea9f7*/
          v13 = *(_DWORD *)(v13 + 1496); /*0x6ea9fb*/
        }
        if ( !v13 ) /*0x6eaa03*/
        {
          v14 = v20; /*0x6eaa09*/
          break; /*0x6eaa09*/
        }
        v15 = v19; /*0x6ea95e*/
        v14 = v20; /*0x6ea962*/
      }
    }
    result = *(_DWORD *)(a2 + 1492); /*0x6eaa0d*/
    if ( result ) /*0x6eaa16*/
      *(_DWORD *)(a2 + 1492) = 0; /*0x6eaa18*/
    if ( !dword_A8E7AC && *(_BYTE *)(a2 + 144) && !*(_BYTE *)(a2 + 1061) && !*(_BYTE *)(a2 + 129) && !a4 ) /*0x6eaa4a*/
    {
      result = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a2 + 1156))(a2, 0, 1); /*0x6eaa54*/
      v14 = v20; /*0x6eaa5a*/
    }
    if ( !v14 ) /*0x6eaa60*/
    {
      result = this->firstUnit; /*0x6eaa62*/
      if ( result ) /*0x6eaa67*/
      {
        *(_BYTE *)(result + 1673) = 1; /*0x6eaa69*/
        this->spawnCell = 0; /*0x6eaa70*/
      }
    }
    this->TeamClass_field_7E = 1; /*0x6eaa73*/
    this->needsToDisappear = 1; /*0x6eaa77*/
    LOBYTE(result) = 1; /*0x6eaa7d*/
  }
  else
  {
    LOBYTE(result) = 1; /*0x6ea88b*/
  }
  return result; /*0x6ea88a*/
}



// ==== 0x006EAA90  TeamClass::RecruitMember  this=TeamClass  sig=csp ====
int __thiscall TeamClass::RecruitMember(TeamClass *this, int a2)
{
  TeamClass *v2; // edi
  int v3; // ebx
  CellClass *spawnCell; // ecx
  int *v5; // eax
  TechnoClass *buildingType; // ecx
  _DWORD *WaypointCoords; // eax
  int v8; // ecx
  int v9; // eax
  TeamTypeClass *v10; // ecx
  int v11; // ecx
  int v12; // ebp
  int v13; // eax
  Math *v14; // esi
  int v15; // eax
  int v16; // edi
  int v18; // ebp
  int v19; // eax
  Math *v20; // esi
  int v21; // eax
  int v22; // edi
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // edi
  int DB; // esi
  int Group; // [esp+14h] [ebp-28h]
  int v30; // [esp+18h] [ebp-24h]
  int v31; // [esp+1Ch] [ebp-20h]
  int v32; // [esp+1Ch] [ebp-20h]
  int v33; // [esp+1Ch] [ebp-20h]
  int v34; // [esp+20h] [ebp-1Ch] BYREF
  int v35; // [esp+24h] [ebp-18h] BYREF
  int v36; // [esp+28h] [ebp-14h]
  int v37; // [esp+2Ch] [ebp-10h]
  _BYTE v38[12]; // [esp+30h] [ebp-Ch] BYREF

  v2 = this; /*0x6eaa97*/
  v3 = 0; /*0x6eaa99*/
  spawnCell = this->spawnCell; /*0x6eaa9f*/
  if ( spawnCell ) /*0x6eaaa4*/
    v5 = (int *)(*(int (__thiscall **)(CellClass *, _BYTE *))(spawnCell->mapCoords[0] + 72))(spawnCell, v38); /*0x6eaaad*/
  else
    v5 = &g_BuildingLoadQueue_Array.?[9]; /*0x6eaab2*/
  v35 = *v5; /*0x6eaab9*/
  v36 = v5[1]; /*0x6eaac4*/
  buildingType = (TechnoClass *)v2->buildingType; /*0x6eaacc*/
  v37 = v5[2]; /*0x6eaacf*/
  if ( *TechnoClass::GetWaypointCoords(buildingType, &v34) != g_BuildingLoadQueue_Array.?[1] ) /*0x6eaae2*/
  {
    WaypointCoords = TechnoClass::GetWaypointCoords((TechnoClass *)v2->buildingType, &v34); /*0x6eaaf9*/
    v8 = (*(__int16 *)WaypointCoords << 8) + 128; /*0x6eab0b*/
    v9 = (*((__int16 *)WaypointCoords + 1) << 8) + 128; /*0x6eab11*/
    v35 = v8; /*0x6eab18*/
    v36 = v9; /*0x6eab1c*/
    v37 = 0; /*0x6eab20*/
  }
  v10 = v2->buildingType; /*0x6eab24*/
  v30 = 0; /*0x6eab2b*/
  if ( *(_DWORD *)(*(_DWORD *)&v10[1].TeamTypeClass_field_70 + 8 * a2 + 164) <= v2->countObjects[a2] ) /*0x6eab45*/
    return v30; /*0x6eae19*/
  Group = TeamTypeClass::GetGroup(v10); /*0x6eab54*/
  v11 = *(_DWORD *)(*(_DWORD *)&v2->buildingType[1].TeamTypeClass_field_70 + 8 * a2 + 168); /*0x6eab61*/
  switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) ) /*0x6eab7f*/
  {
    case 1: /*0x6eab7f*/
    case 40: /*0x6eab7f*/
      v23 = 0; /*0x6ead07*/
      v33 = -1; /*0x6ead0b*/
      v34 = 0; /*0x6ead13*/
      if ( FootClass_Array.?[2] > 0 ) /*0x6ead17*/
      {
        do /*0x6eadc8*/
        {
          v24 = *(_DWORD *)(FootClass_Array.? + 4 * v23); /*0x6ead23*/
          if ( Group == -2 || *(_DWORD *)(v24 + 532) == Group || LOBYTE(v2->buildingType[1].TeamTypeClass_field_34) ) /*0x6ead3a*/
          {
            v25 = Math::DistSq2D((Math *)v24, &v35); /*0x6ead4b*/
            v26 = v25; /*0x6ead54*/
            if ( *(_DWORD *)(v24 + 532) != Group ) /*0x6ead5c*/
              v26 = v25 + 12800; /*0x6ead5e*/
            if ( *(HouseClass **)(v24 + 540) == this->owner /*0x6eada4*/
              && *(_DWORD *)(v24 + 1732) == *(_DWORD *)(*(_DWORD *)&this->buildingType[1].TeamTypeClass_field_70
                                                      + 8 * a2
                                                      + 168)
              && (v26 < v33 || v33 == -1)
              && (unsigned __int8)TeamClass::ValidateMember(this, v24, &a2, 0) )
            {
              v3 = v24; /*0x6eadad*/
              v33 = v26; /*0x6eadaf*/
            }
            v2 = this; /*0x6eadb3*/
          }
          v23 = ++v34; /*0x6eadc1*/
        }
        while ( v34 < FootClass_Array.?[2] ); /*0x6eadc8*/
        if ( v3 ) /*0x6eadd0*/
        {
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 968))(v3, 0); /*0x6eadd8*/
          TeamClass::AddMember((int *)v2, v3, 0); /*0x6eade3*/
          v30 = 1; /*0x6eadee*/
          DB = CCINIClass::GetDB((CCINIClass *)(v3 + 276)); /*0x6eadfb*/
          if ( DB ) /*0x6eadff*/
          {
            do /*0x6eae17*/
            {
              TeamClass::AddMember((int *)v2, DB, 0); /*0x6eae08*/
              DB = *(_DWORD *)(DB + 48); /*0x6eae0d*/
            }
            while ( DB && (*(_BYTE *)(DB + 20) & 4) != 0 ); /*0x6eae17*/
          }
        }
      }
      return v30; /*0x6eae17*/
    case 2: /*0x6eab7f*/
    case 3: /*0x6eab7f*/
      v18 = -1; /*0x6eac57*/
      v19 = 0; /*0x6eac5a*/
      v32 = 0; /*0x6eac5e*/
      if ( dword_A8E3A0 <= 0 ) /*0x6eac62*/
        return v30; /*0x6eac62*/
      do /*0x6eace6*/
      {
        v20 = (Math *)*((_DWORD *)dword_A8E394 + v19); /*0x6eac6e*/
        if ( Group == -2 || v20[33].field_4 == (void *)Group || LOBYTE(v2->buildingType[1].TeamTypeClass_field_34) ) /*0x6eac85*/
        {
          v21 = Math::DistSq2D(v20, &v35); /*0x6eac96*/
          v22 = v21; /*0x6eac9f*/
          if ( v20[33].field_4 != (void *)Group ) /*0x6eaca7*/
            v22 = v21 + 12800; /*0x6eaca9*/
          if ( (v22 < v18 || v18 == -1) && (unsigned __int8)TeamClass::ValidateMember(this, (int)v20, &a2, 0) ) /*0x6eacc4*/
          {
            v3 = (int)v20; /*0x6eaccd*/
            v18 = v22; /*0x6eaccf*/
          }
          v2 = this; /*0x6eacd1*/
        }
        v19 = ++v32; /*0x6eacdf*/
      }
      while ( v32 < dword_A8E3A0 ); /*0x6eace6*/
      if ( !v3 ) /*0x6eacea*/
        return v30; /*0x6eacea*/
      break; /*0x6eacea*/
    case 15: /*0x6eab7f*/
    case 16: /*0x6eab7f*/
      v12 = -1; /*0x6eab8c*/
      v13 = 0; /*0x6eab8f*/
      v31 = 0; /*0x6eab93*/
      if ( *(int *)&stru_A83D50.__pad_80[40] <= 0 ) /*0x6eab97*/
        return v30; /*0x6eab97*/
      do /*0x6eac1b*/
      {
        v14 = *(Math **)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * v13); /*0x6eaba3*/
        if ( Group == -2 || v14[33].field_4 == (void *)Group || LOBYTE(v2->buildingType[1].TeamTypeClass_field_34) ) /*0x6eabba*/
        {
          v15 = Math::DistSq2D(v14, &v35); /*0x6eabcb*/
          v16 = v15; /*0x6eabd4*/
          if ( v14[33].field_4 != (void *)Group ) /*0x6eabdc*/
            v16 = v15 + 12800; /*0x6eabde*/
          if ( (v16 < v12 || v12 == -1) && (unsigned __int8)TeamClass::ValidateMember(this, (int)v14, &a2, 0) ) /*0x6eabf9*/
          {
            v3 = (int)v14; /*0x6eac02*/
            v12 = v16; /*0x6eac04*/
          }
          v2 = this; /*0x6eac06*/
        }
        v13 = ++v31; /*0x6eac14*/
      }
      while ( v31 < *(int *)&stru_A83D50.__pad_80[40] ); /*0x6eac1b*/
      if ( !v3 ) /*0x6eac1f*/
        return v30; /*0x6eac1f*/
      break; /*0x6eac1f*/
    default:
      return v30;
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 968))(v3, 0); /*0x6eac2b*/
  TeamClass::AddMember((int *)v2, v3, 0); /*0x6eac36*/
  return 1; /*0x6eac3b*/
}



// ==== 0x006EAE60  TeamClass::ExecuteAction  this=TeamClass  sig=csp ====
int __thiscall TeamClass::ExecuteAction(TeamClass *this, int a2, char a3)
{
  int result; // eax
  FootClass *firstUnit; // edx

  result = a2; /*0x6eae60*/
  if ( (TagClass *)a2 == this->tag ) /*0x6eae6c*/
    this->tag = 0; /*0x6eae6e*/
  firstUnit = this->firstUnit; /*0x6eae71*/
  if ( (FootClass *)a2 == firstUnit && a3 ) /*0x6eae7c*/
    this->firstUnit = firstUnit->nextTeamMember; /*0x6eae84*/
  if ( (HouseClass *)a2 == this->owner ) /*0x6eae8a*/
    this->owner = 0; /*0x6eae8c*/
  if ( (ScriptClass *)a2 == this->currentScript ) /*0x6eae92*/
    this->currentScript = 0; /*0x6eae94*/
  if ( this->focus == (AbstractClass *)a2 ) /*0x6eae9a*/
    this->focus = 0; /*0x6eae9c*/
  if ( this->queuedFocus == (AbstractClass *)a2 ) /*0x6eaea2*/
    this->queuedFocus = 0; /*0x6eaea4*/
  if ( this->spawnCell == (CellClass *)a2 ) /*0x6eaeaa*/
    this->spawnCell = 0; /*0x6eaeac*/
  if ( this->buildingType == (TeamTypeClass *)a2 ) /*0x6eaeb2*/
    this->buildingType = 0; /*0x6eaeb4*/
  if ( this->unknown38 == a2 ) /*0x6eaeba*/
    this->unknown38 = 0; /*0x6eaebc*/
  if ( this->unknown44 == a2 ) /*0x6eaec2*/
    this->unknown44 = 0; /*0x6eaec4*/
  if ( this->target == (HouseClass *)a2 ) /*0x6eaeca*/
    this->target = 0; /*0x6eaecc*/
  return result; /*0x6eaecf*/
}



// ==== 0x006EAEE0  TeamClass::FindClosestEnemy  this=AbstractClass  sig=csp ====
char __thiscall TeamClass_FindClosestEnemy(int this, void **a2, int *a3)
{
  int v3; // eax
  int v4; // esi
  int v5; // ebx
  int v6; // edi
  char *v7; // ecx
  int v8; // ebp
  int v9; // eax
  char *v10; // esi
  _DWORD *v11; // ebx
  _DWORD *v12; // eax
  int *v13; // eax
  int v14; // eax
  char *v15; // esi
  _DWORD *v16; // ebx
  _DWORD *v17; // eax
  int *v18; // eax
  double v19; // st7
  int v20; // eax
  char v21; // al
  int v22; // ebp
  void *v23; // esi
  int *v24; // esi
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  void *v28; // eax
  int v31; // [esp+2Ch] [ebp-38h]
  int v32; // [esp+2Ch] [ebp-38h]
  int v33; // [esp+2Ch] [ebp-38h]
  char *v34; // [esp+30h] [ebp-34h]
  void *v35; // [esp+30h] [ebp-34h]
  int v36; // [esp+34h] [ebp-30h] BYREF
  int v37; // [esp+38h] [ebp-2Ch]
  int v38; // [esp+3Ch] [ebp-28h]
  int v39; // [esp+40h] [ebp-24h] BYREF
  int v40; // [esp+44h] [ebp-20h]
  int v41; // [esp+48h] [ebp-1Ch]
  _BYTE v42[12]; // [esp+4Ch] [ebp-18h] BYREF
  _DWORD v43[3]; // [esp+58h] [ebp-Ch] BYREF

  LOBYTE(v3) = (_BYTE)a3; /*0x6eaee3*/
  v4 = this; /*0x6eaeea*/
  v5 = 0; /*0x6eaeec*/
  *a3 = 0; /*0x6eaef2*/
  *a2 = 0; /*0x6eaef9*/
  v6 = *(_DWORD *)(this + 84); /*0x6eaefb*/
  if ( v6 ) /*0x6eaf00*/
  {
    if ( *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v36) == 10 ) /*0x6eaf16*/
    {
      v7 = 0; /*0x6eaf22*/
      v8 = -1; /*0x6eaf24*/
      v9 = 0; /*0x6eaf27*/
      v34 = 0; /*0x6eaf2b*/
      v31 = 0; /*0x6eaf2f*/
      if ( dword_8B4118 > 0 ) /*0x6eaf33*/
      {
        do /*0x6eb012*/
        {
          v10 = (char *)*((_DWORD *)dword_8B410C + v9); /*0x6eaf3f*/
          if ( v10 && v10[144] && *((_DWORD *)v10 + 27) && (dword_A8E7AC || !v10[129]) ) /*0x6eaf6c*/
          {
            if ( (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)v10 + 135), *(#375 **)(this + 44)) ) /*0x6eaf88*/
            {
              if ( this != *((_DWORD *)v10 + 373) ) /*0x6eaf97*/
              {
                v11 = (_DWORD *)(*(int (__thiscall **)(char *, int *))(*(_DWORD *)v10 + 72))(v10, &v39); /*0x6eafa7*/
                v12 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 72))(v6, v42); /*0x6eafb0*/
                v13 = Coord::Subtract(v43, *v12 - *v11, v12[1] - v11[1], v12[2] - v11[2]); /*0x6eafd0*/
                v36 = *v13; /*0x6eafd7*/
                v37 = v13[1]; /*0x6eafe2*/
                v38 = v13[2]; /*0x6eafe9*/
                v14 = Coord::Length(&v36); /*0x6eafed*/
                if ( v8 == -1 || v14 < v8 ) /*0x6eaff9*/
                {
                  v8 = v14; /*0x6eaffb*/
                  v34 = v10; /*0x6eaffd*/
                }
              }
            }
          }
          v9 = ++v31; /*0x6eb00b*/
        }
        while ( v31 < dword_8B4118 ); /*0x6eb012*/
        v4 = this; /*0x6eb018*/
        v7 = v34; /*0x6eb01c*/
      }
      v3 = 0; /*0x6eb026*/
      v32 = 0; /*0x6eb02a*/
      if ( dword_A83DF8 > 0 ) /*0x6eb02e*/
      {
        do /*0x6eb141*/
        {
          v15 = (char *)*((_DWORD *)dword_A83DEC + v3); /*0x6eb03a*/
          if ( v15 && v15[144] && *((_DWORD *)v15 + 27) && (dword_A8E7AC || !v15[129]) ) /*0x6eb067*/
          {
            if ( (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)v15 + 135), *(#375 **)(this + 44)) ) /*0x6eb083*/
            {
              if ( this != *((_DWORD *)v15 + 373) ) /*0x6eb096*/
              {
                v16 = (_DWORD *)(*(int (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v15 + 72))(v15, v43); /*0x6eb0aa*/
                v17 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 72))(v6, v42); /*0x6eb0b3*/
                v18 = Coord::Subtract(&v39, *v17 - *v16, v17[1] - v16[1], v17[2] - v16[2]); /*0x6eb0d3*/
                v36 = *v18; /*0x6eb0dd*/
                v37 = v18[1]; /*0x6eb0e4*/
                v38 = v18[2]; /*0x6eb0ef*/
                v19 = Math::Sqrt((double)v36 * (double)v36 + (double)v38 * (double)v38 + (double)v37 * (double)v37); /*0x6eb114*/
                v20 = Math::RoundToInt(v19); /*0x6eb11c*/
                if ( v8 == -1 || v20 < v8 ) /*0x6eb128*/
                {
                  v8 = v20; /*0x6eb12a*/
                  v34 = v15; /*0x6eb12c*/
                }
              }
            }
          }
          v3 = ++v32; /*0x6eb13a*/
        }
        while ( v32 < dword_A83DF8 ); /*0x6eb141*/
        v4 = this; /*0x6eb147*/
        v7 = v34; /*0x6eb14b*/
      }
      if ( v7 ) /*0x6eb151*/
      {
        v21 = v7[1668]; /*0x6eb157*/
        if ( v21 < 0 ) /*0x6eb15f*/
        {
          *a2 = v7; /*0x6eb1a1*/
        }
        else
        {
          v36 = *(_DWORD *)(*((_DWORD *)dword_8B413C + v21) + 40); /*0x6eb175*/
          *a2 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v36); /*0x6eb188*/
        }
        v3 = *(_DWORD *)(v4 + 84); /*0x6eb18a*/
        *a3 = v3; /*0x6eb194*/
      }
    }
    else
    {
      v22 = 0; /*0x6eb1b5*/
      v23 = 0; /*0x6eb1b7*/
      v33 = 0; /*0x6eb1bb*/
      v36 = 0; /*0x6eb1bf*/
      v35 = 0; /*0x6eb1c3*/
      do /*0x6eb301*/
      {
        LOBYTE(v3) = *(_BYTE *)(v6 + 144); /*0x6eb1cd*/
        if ( (_BYTE)v3 ) /*0x6eb1d5*/
        {
          v3 = *(_DWORD *)(v6 + 108); /*0x6eb1db*/
          if ( v3 ) /*0x6eb1e0*/
          {
            if ( dword_A8E7AC || (LOBYTE(v3) = *(_BYTE *)(v6 + 129), !(_BYTE)v3) ) /*0x6eb1f7*/
            {
              if ( *(_BYTE *)(v6 + 1673) || (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6), v3 == 2) ) /*0x6eb211*/
              {
                LOBYTE(v3) = *(_BYTE *)(v6 + 981); /*0x6eb217*/
                if ( (_BYTE)v3 ) /*0x6eb21f*/
                {
                  v24 = (int *)(v6 + 156); /*0x6eb225*/
                  v5 += *(_DWORD *)(v6 + 156); /*0x6eb22f*/
                  v40 = *(_DWORD *)(v6 + 160); /*0x6eb234*/
                  v25 = *(_DWORD *)(v6 + 156); /*0x6eb23d*/
                  v41 = *(_DWORD *)(v6 + 164); /*0x6eb23f*/
                  v39 = v25; /*0x6eb243*/
                  v26 = *(_DWORD *)(v6 + 160); /*0x6eb247*/
                  v41 = *(_DWORD *)(v6 + 164); /*0x6eb251*/
                  v33 += v26; /*0x6eb25e*/
                  ++v22; /*0x6eb262*/
                  if ( *(_BYTE *)(*(_DWORD *)(this + 36) + 167) /*0x6eb271*/
                    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 1248))(v6) )
                  {
                    v5 += *v24; /*0x6eb27f*/
                    v40 = *(_DWORD *)(v6 + 160); /*0x6eb287*/
                    v27 = *(_DWORD *)(v6 + 164); /*0x6eb28d*/
                    v39 = *v24; /*0x6eb290*/
                    v41 = v27; /*0x6eb294*/
                    v41 = *(_DWORD *)(v6 + 164); /*0x6eb29b*/
                    ++v22; /*0x6eb2a5*/
                    v33 += v40; /*0x6eb2a6*/
                  }
                  if ( *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)v6 + 132))(v6) + 1504) <= 0 /*0x6eb2c8*/
                    || (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 132))(v6), !*(_BYTE *)(v3 + 3278)) )
                  {
                    v3 = BuildingClass::SquaredDistanceTo(*(_DWORD *)(this + 64)); /*0x6eb2dc*/
                    if ( !v36 || v3 < v36 ) /*0x6eb2eb*/
                    {
                      v36 = v3; /*0x6eb2ed*/
                      v35 = (void *)v6; /*0x6eb2f1*/
                    }
                  }
                  v23 = v35; /*0x6eb2f5*/
                }
              }
            }
          }
        }
        v6 = *(_DWORD *)(v6 + 1496); /*0x6eb2f9*/
      }
      while ( v6 ); /*0x6eb301*/
      if ( v22 ) /*0x6eb309*/
      {
        v36 = v5 / v22; /*0x6eb31b*/
        v38 = 0; /*0x6eb324*/
        v37 = v33 / v22; /*0x6eb328*/
        v28 = Coord::To_Cell(&dword_87F7E8, &v36); /*0x6eb331*/
        *a2 = v28; /*0x6eb33c*/
        if ( !v23 ) /*0x6eb33e*/
          v23 = *(void **)(this + 84); /*0x6eb34b*/
        v3 = (*(int (__thiscall **)(void *, void *, int, int, _DWORD, int))(*(_DWORD *)v23 + 428))( /*0x6eb35a*/
               v23,
               v28,
               -1,
               -1,
               0,
               1);
        if ( v3 ) /*0x6eb362*/
          *a2 = v23; /*0x6eb364*/
      }
      if ( v23 ) /*0x6eb368*/
      {
        *a3 = (int)v23; /*0x6eb36e*/
        LOBYTE(v3) = (_BYTE)a3; /*0x6eb36a*/
      }
    }
  }
  return v3; /*0x6eb187*/
}



// ==== 0x006EB380  FootClass::LinkToTransporter  this=TechnoClass  sig=csp ====
void __thiscall FootClass::LinkToTransporter(int this, int a2, int a3, AbstractClass *a4)
{
  int v5; // ecx
  AbstractClass *abstractFlags; // eax
  AbstractClass *v7; // ecx
  int *v8; // eax
  int *v9; // edi
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  char v13[12]; // [esp+Ch] [ebp-Ch] BYREF

  if ( a4 && a3 && !*(_BYTE *)(*(_DWORD *)(this + 36) + 175) ) /*0x6eb3a3*/
  {
    if ( *(_BYTE *)(this + 127) ) /*0x6eb3b1*/
    {
      v5 = *(_DWORD *)(this + 84); /*0x6eb3d0*/
      abstractFlags = *(AbstractClass **)(this + 84); /*0x6eb3d3*/
      if ( abstractFlags ) /*0x6eb3d7*/
      {
        while ( abstractFlags != a4 ) /*0x6eb3db*/
        {
          abstractFlags = (AbstractClass *)abstractFlags[41].abstractFlags; /*0x6eb3e1*/
          if ( !abstractFlags ) /*0x6eb3e9*/
            goto LABEL_9; /*0x6eb3e9*/
        }
      }
      else
      {
LABEL_9:
        if ( v5 ) /*0x6eb3ed*/
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) != 2 ) /*0x6eb3fb*/
          {
            if ( *(_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 84) + 1016))( /*0x6eb40a*/
                              *(_DWORD *)(this + 84),
                              0) )
            {
              v7 = *(AbstractClass **)(this + 64); /*0x6eb40f*/
              if ( v7 != a4 ) /*0x6eb414*/
              {
                if ( *(_BYTE *)(*(_DWORD *)(this + 36) + 166) ) /*0x6eb419*/
                {
                  *(_DWORD *)(this + 52) = 0; /*0x6eb425*/
                  *(_BYTE *)(this + 117) = 1; /*0x6eb42c*/
                  *(_BYTE *)(this + 123) = 1; /*0x6eb42f*/
                }
                if ( !v7 /*0x6eb468*/
                  || (v8 = (int *)AbstractClass::IsTechnoType(v7), (v9 = v8) == 0)
                  || !*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(*v8 + 1016))(v8, 0)
                  || (v10 = *(_DWORD *)(this + 52)) != 0
                  && (v11 = *v9,
                      v12 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)v10 + 72))(v10, v13),
                      !(*(unsigned __int8 (__thiscall **)(int *, int))(v11 + 944))(v9, v12)) )
                {
                  (*(void (__thiscall **)(AbstractClass *))(a4->vtable0 + 44))(a4); /*0x6eb477*/
                }
              }
            }
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(this + 52) = 0; /*0x6eb3ba*/
      *(_BYTE *)(this + 117) = 1; /*0x6eb3c1*/
      *(_BYTE *)(this + 123) = 1; /*0x6eb3c4*/
    }
  }
}



// ==== 0x006EB490  TeamClass::AttackCoordinator  this=TeamClass  sig=csp ====
char __thiscall TeamClass::AttackCoordinator(TeamClass *this)
{
  TeamClass *v1; // edi
  FootClass *firstUnit; // esi
  int v3; // ebp
  FootClass *v4; // ebx
  int v5; // edi
  AbstractClass *focus; // ecx
  AbstractClass *v7; // edi
  Object *v8; // esi
  int (__thiscall **vtable0)(FootClass *, AbstractClass *, int); // esi
  int v10; // eax
  _DWORD *p_vtable0; // eax
  FootClass *v12; // esi
  char v13; // bl
  int v14; // eax
  int v15; // edi
  AbstractClass *target; // eax
  int v19; // [esp+14h] [ebp-10h] BYREF
  int v20; // [esp+18h] [ebp-Ch]
  _DWORD v21[2]; // [esp+1Ch] [ebp-8h] BYREF

  v1 = this; /*0x6eb497*/
  if ( !this->focus ) /*0x6eb49d*/
    this->focus = this->queuedFocus; /*0x6eb4a7*/
  firstUnit = this->firstUnit; /*0x6eb4aa*/
  v3 = -1; /*0x6eb4ad*/
  v4 = firstUnit; /*0x6eb4b2*/
  if ( firstUnit ) /*0x6eb4b4*/
  {
    do /*0x6eb514*/
    {
      v5 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 1532); /*0x6eb4c0*/
      if ( firstUnit->? /*0x6eb506*/
        && firstUnit->?
        && (dword_A8E7AC || !firstUnit->?)
        && (firstUnit->isTeamLeader || (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2)
        && v5 > v3 )
      {
        v4 = firstUnit; /*0x6eb508*/
        v3 = v5; /*0x6eb50a*/
      }
      firstUnit = firstUnit->nextTeamMember; /*0x6eb50c*/
    }
    while ( firstUnit ); /*0x6eb514*/
    v1 = this; /*0x6eb516*/
  }
  focus = v1->focus; /*0x6eb51a*/
  if ( focus
    && (*((int (__thiscall **)(AbstractClass *))focus->vtable0 + 11))(focus) == 11
    && v1->firstUnit
    && (*((int (__thiscall **)(FootClass *))v4->TechnoClass + 11))(v4) != 2 )
  {
    v7 = v1->focus; /*0x6eb53e*/
    if ( v7 )
      v8 = (*((int (__thiscall **)(AbstractClass *))v7->vtable0 + 11))(v7) == 11 ? (Object *)v7 : 0;
    else
      v8 = 0; /*0x6eb547*/
    v19 = 0; /*0x6eb567*/
    v20 = 0; /*0x6eb56b*/
    if ( Object::FindObjectCell(v8, &v19, 0) ) /*0x6eb56f*/
    {
      v19 = 0; /*0x6eb582*/
      v20 = 0; /*0x6eb586*/
      this->focus = (AbstractClass *)Object::FindObjectCell(v8, &v19, 0); /*0x6eb593*/
    }
    v1 = this; /*0x6eb596*/
  }
  if ( *(_DWORD *)&stru_A8EB00.?[416] % 8 == 4 ) /*0x6eb5ae*/
  {
    vtable0 = (int (__thiscall **)(FootClass *, AbstractClass *, int))v4->TechnoClass; /*0x6eb5b3*/
    v10 = (*((int (__thiscall **)(FootClass *, AbstractClass *, int))v4->TechnoClass + 185))(v4, v1->focus, 1); /*0x6eb5ba*/
    if ( vtable0[240](v4, v1->focus, v10) == 5 ) /*0x6eb5d0*/
      v1->unknown81 = 1; /*0x6eb5d2*/
  }
  p_vtable0 = &v1->focus->vtable0; /*0x6eb5d9*/
  if ( !p_vtable0 /*0x6eb605*/
    || (p_vtable0 = SessionClass::GetEntry((SessionClass *)v1->currentScript, v21),
        v12 = v1->firstUnit,
        v13 = 0,
        v19 = *p_vtable0,
        v20 = p_vtable0[1],
        !v12) )
  {
LABEL_72:
    v1->stepCompleted = 1; /*0x6eb85b*/
    return (char)p_vtable0; /*0x6eb85b*/
  }
  do /*0x6eb851*/
  {
    if ( !v12->? ) /*0x6eb60b*/
      goto LABEL_67; /*0x6eb60b*/
    if ( v12->? && (dword_A8E7AC || !v12->?) && !v12->isTeamLeader ) /*0x6eb63b*/
    {
      v14 = *SessionClass::GetEntry((SessionClass *)v1->currentScript, v21); /*0x6eb656*/
      if ( v14 == 54 || v14 == 53 ) /*0x6eb660*/
        v15 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6eb676*/
      else
        v15 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6eb668*/
      if ( ObjectClass::DistanceTo((ObjectClass *)v12, (int)this->spawnCell->mapCoords) <= v15 ) /*0x6eb68d*/
      {
        v12->isTeamLeader = 1; /*0x6eb6c5*/
      }
      else if ( !v12->movementDestination ) /*0x6eb68f*/
      {
        (*((void (__thiscall **)(FootClass *, int, _DWORD))v12->TechnoClass + 122))(v12, 2, 0); /*0x6eb6a1*/
        (*((void (__thiscall **)(FootClass *, _DWORD))v12->TechnoClass + 242))(v12, 0); /*0x6eb6ad*/
        (*((void (__thiscall **)(FootClass *, CellClass *, int))v12->TechnoClass + 288))(v12, this->spawnCell, 1); /*0x6eb6bd*/
      }
      v1 = this; /*0x6eb6cc*/
    }
    if ( v12->? /*0x6eb714*/
      && v12->?
      && (dword_A8E7AC || !v12->?)
      && (v12->isTeamLeader || (*((int (__thiscall **)(FootClass *))v12->TechnoClass + 11))(v12) == 2) )
    {
      if ( v19 == 15 /*0x6eb733*/
        && (*((int (__thiscall **)(FootClass *))v12->TechnoClass + 11))(v12) == 15
        && *((_BYTE *)v12[1].TechnoClass + 3774) )
      {
        (*((void (__thiscall **)(FootClass *, int, _DWORD))v12->TechnoClass + 122))(v12, 8, 0); /*0x6eb745*/
        (*((void (__thiscall **)(FootClass *, AbstractClass *))v12->TechnoClass + 242))(v12, v1->focus); /*0x6eb753*/
      }
      else if ( (*((int (__thiscall **)(FootClass *))v12->TechnoClass + 97))(v12) != 1 /*0x6eb7ad*/
             && (*((int (__thiscall **)(FootClass *))v12->TechnoClass + 97))(v12) != 7
             && (*((int (__thiscall **)(FootClass *))v12->TechnoClass + 97))(v12) != 8
             && (*((int (__thiscall **)(FootClass *))v12->TechnoClass + 97))(v12) != 17
             && ((*((int (__thiscall **)(FootClass *))v12->TechnoClass + 97))(v12) != 16
              || !(*((unsigned __int8 (__thiscall **)(FootClass *))v12->TechnoClass + 313))(v12)) )
      {
        (*((void (__thiscall **)(FootClass *, int))v12->TechnoClass + 157))(v12, 3); /*0x6eb7bd*/
        (*((void (__thiscall **)(FootClass *, int, _DWORD))v12->TechnoClass + 122))(v12, 1, 0); /*0x6eb7cb*/
        (*((void (__thiscall **)(FootClass *, _DWORD))v12->TechnoClass + 242))(v12, 0); /*0x6eb7d7*/
        (*((void (__thiscall **)(FootClass *, _DWORD, int))v12->TechnoClass + 288))(v12, 0, 1); /*0x6eb7e5*/
      }
      target = v12->?; /*0x6eb7eb*/
      if ( target != v1->focus && !target ) /*0x6eb7fa*/
        (*((void (__thiscall **)(FootClass *, AbstractClass *))v12->TechnoClass + 242))(v12, v1->focus); /*0x6eb801*/
      p_vtable0 = (_DWORD *)(*((int (__thiscall **)(FootClass *))v12->TechnoClass + 11))(v12); /*0x6eb80b*/
      if ( p_vtable0 != (_DWORD *)2 /*0x6eb82c*/
        || (p_vtable0 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _DWORD))v12->TechnoClass + 254))(v12, 0),
            !*p_vtable0)
        || (p_vtable0 = (_DWORD *)v12->?, (int)p_vtable0 > 0) )
      {
LABEL_69:
        v13 = 1; /*0x6eb847*/
      }
    }
    else
    {
LABEL_67:
      p_vtable0 = &v1->buildingType->AbstractClass; /*0x6eb830*/
      if ( *((_BYTE *)p_vtable0 + 176) ) /*0x6eb833*/
      {
        LOBYTE(p_vtable0) = v12->?; /*0x6eb83d*/
        if ( (_BYTE)p_vtable0 ) /*0x6eb845*/
          goto LABEL_69; /*0x6eb845*/
      }
    }
    v12 = v12->nextTeamMember; /*0x6eb849*/
  }
  while ( v12 ); /*0x6eb851*/
  if ( !v13 ) /*0x6eb859*/
    goto LABEL_72; /*0x6eb859*/
  return (char)p_vtable0; /*0x6eb862*/
}



// ==== 0x006EB870  HouseClass::EvaluateTarget  this=HouseClass  sig=csp ====
char __thiscall HouseClass::EvaluateTarget(HouseClass *this)
{
  char v2; // bl
  int repairStationsCount; // esi
  int v4; // eax
  int v5; // ebp
  int v6; // eax
  int v7; // ebp
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10; // ebp
  void *v11; // eax
  int v13; // [esp+Ch] [ebp-2Ch]
  int v14; // [esp+10h] [ebp-28h] BYREF
  __int16 v15[2]; // [esp+14h] [ebp-24h] BYREF
  int v16; // [esp+18h] [ebp-20h] BYREF
  int v17; // [esp+1Ch] [ebp-1Ch] BYREF
  int v18; // [esp+24h] [ebp-14h] BYREF
  _BYTE v19[12]; // [esp+2Ch] [ebp-Ch] BYREF

  v2 = 1; /*0x6eb878*/
  repairStationsCount = this->repairStationsCount; /*0x6eb87a*/
  if ( !repairStationsCount ) /*0x6eb87f*/
    goto LABEL_34; /*0x6eb87f*/
  do /*0x6ebab6*/
  {
    if ( *(_BYTE *)(repairStationsCount + 144) ) /*0x6eb88c*/
    {
      if ( *(_DWORD *)(repairStationsCount + 108) /*0x6eb8bc*/
        && (dword_A8E7AC || !*(_BYTE *)(repairStationsCount + 129))
        && !*(_BYTE *)(repairStationsCount + 1673) )
      {
        v4 = *SessionClass::GetEntry((SessionClass *)this->buildingType, &v17); /*0x6eb8d3*/
        if ( v4 == 54 || v4 == 53 ) /*0x6eb8dd*/
          v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6eb8f3*/
        else
          v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6eb8e5*/
        if ( ObjectClass::DistanceTo((ObjectClass *)repairStationsCount, this->relatedTagsCapacity) <= v5 ) /*0x6eb906*/
        {
          *(_BYTE *)(repairStationsCount + 1673) = 1; /*0x6eb93e*/
        }
        else if ( !*(_DWORD *)(repairStationsCount + 1444) ) /*0x6eb908*/
        {
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)repairStationsCount + 488))(repairStationsCount, 2, 0); /*0x6eb91a*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)repairStationsCount + 968))(repairStationsCount, 0); /*0x6eb926*/
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)repairStationsCount + 1152))( /*0x6eb936*/
            repairStationsCount,
            this->relatedTagsCapacity,
            1);
        }
      }
      if ( *(_BYTE *)(repairStationsCount + 144) /*0x6eb989*/
        && *(_DWORD *)(repairStationsCount + 108)
        && (dword_A8E7AC || !*(_BYTE *)(repairStationsCount + 129))
        && (*(_BYTE *)(repairStationsCount + 1673)
         || (*(int (__thiscall **)(int))(*(_DWORD *)repairStationsCount + 44))(repairStationsCount) == 2) )
      {
        v6 = *SessionClass::GetEntry((SessionClass *)this->buildingType, &v18); /*0x6eb99c*/
        if ( v6 == 54 || v6 == 53 ) /*0x6eb9a6*/
          v7 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6eb9bc*/
        else
          v7 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6eb9ae*/
        if ( ObjectClass::DistanceTo((ObjectClass *)repairStationsCount, this->relatedTagsCapacity) <= v7 /*0x6eb9e4*/
          || (*(int (__thiscall **)(int))(*(_DWORD *)repairStationsCount + 388))(repairStationsCount) == 11
          && *(_DWORD *)(repairStationsCount + 692) )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)repairStationsCount + 388))(repairStationsCount) != 11 ) /*0x6eba90*/
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)repairStationsCount + 488))(repairStationsCount, 5, 0); /*0x6eba9a*/
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)repairStationsCount + 1152))( /*0x6ebaa8*/
              repairStationsCount,
              0,
              1);
          }
        }
        else if ( !*(_DWORD *)(repairStationsCount + 1444) ) /*0x6eb9f2*/
        {
          v2 = 0; /*0x6eba08*/
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)repairStationsCount + 488))(repairStationsCount, 2, 0); /*0x6eba0a*/
          v8 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->relatedTagsCapacity + 72))( /*0x6eba1a*/
                           this->relatedTagsCapacity,
                           v19);
          LOWORD(v13) = *v8 / 256; /*0x6eba2d*/
          HIWORD(v13) = v8[1] / 256; /*0x6eba45*/
          v14 = v13; /*0x6eba52*/
          v9 = globalHelper_0DA020(&v16, &v14); /*0x6eba5a*/
          v10 = *(_DWORD *)repairStationsCount; /*0x6eba61*/
          *(_DWORD *)v15 = *v9; /*0x6eba67*/
          v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v15); /*0x6eba73*/
          (*(void (__thiscall **)(int, void *, int))(v10 + 1152))(repairStationsCount, v11, 1); /*0x6eba7b*/
        }
      }
    }
    repairStationsCount = *(_DWORD *)(repairStationsCount + 1496); /*0x6ebaae*/
  }
  while ( repairStationsCount ); /*0x6ebab6*/
  if ( v2 == 1 ) /*0x6ebac0*/
LABEL_34:
    BYTE1(this->bunkers[0]) = 0; /*0x6ebac2*/
  return v2; /*0x6ebac6*/
}



// ==== 0x006EBAD0  TeamClass::UpdateMembers  this=TeamClass  sig=csp ====
void __thiscall TeamClass::UpdateMembers(TeamClass *this)
{
  FootClass *firstUnit; // esi
  AbstractClass *queuedFocus; // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  AbstractClass *movementDestination; // edi
  bool v9; // bl
  bool v10; // al
  char v11; // [esp+30h] [ebp-36h]
  char v12; // [esp+31h] [ebp-35h]
  int v13; // [esp+32h] [ebp-34h]
  int v14; // [esp+36h] [ebp-30h]
  int v15; // [esp+3Ah] [ebp-2Ch] BYREF
  int v16; // [esp+42h] [ebp-24h] BYREF
  _DWORD v17[2]; // [esp+4Ah] [ebp-1Ch] BYREF
  _DWORD v18[2]; // [esp+52h] [ebp-14h] BYREF
  _BYTE v19[12]; // [esp+5Ah] [ebp-Ch] BYREF

  v11 = 1; /*0x6ebad7*/
  firstUnit = this->firstUnit; /*0x6ebadc*/
  v12 = 0; /*0x6ebadf*/
  if ( firstUnit ) /*0x6ebae6*/
  {
    if ( this->focus || (queuedFocus = this->queuedFocus, (this->focus = queuedFocus) != 0) ) /*0x6ebafb*/
    {
      if ( !TeamClass::ProcessMemberPositions(this) ) /*0x6ebb03*/
      {
        while ( 1 ) /*0x6ebb1a*/
        {
          if ( firstUnit->? && firstUnit->? && (dword_A8E7AC || !firstUnit->?) && !firstUnit->isTeamLeader ) /*0x6ebb4a*/
          {
            v4 = *SessionClass::GetEntry((SessionClass *)this->currentScript, &v15); /*0x6ebb61*/
            if ( v4 == 54 || v4 == 53 ) /*0x6ebb6b*/
              v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6ebb80*/
            else
              v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6ebb73*/
            if ( ObjectClass::DistanceTo((ObjectClass *)firstUnit, (int)this->spawnCell->mapCoords) <= v5 ) /*0x6ebb93*/
            {
              firstUnit->isTeamLeader = 1; /*0x6ebc8d*/
            }
            else
            {
              if ( !firstUnit->movementDestination ) /*0x6ebb99*/
              {
                (*((void (__thiscall **)(FootClass *, int, _DWORD))firstUnit->TechnoClass + 122))(firstUnit, 2, 0); /*0x6ebbab*/
                (*((void (__thiscall **)(FootClass *, _DWORD))firstUnit->TechnoClass + 242))(firstUnit, 0); /*0x6ebbb7*/
                (*((void (__thiscall **)(FootClass *, CellClass *, int))firstUnit->TechnoClass + 288))( /*0x6ebbc7*/
                  firstUnit,
                  this->spawnCell,
                  1);
              }
              v11 = 0; /*0x6ebbcd*/
            }
          }
          if ( (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) == 16 || firstUnit->? == 16 ) /*0x6ebbeb*/
            v11 = 0; /*0x6ebbed*/
          if ( !firstUnit->? /*0x6ebc5c*/
            || !firstUnit->?
            || !dword_A8E7AC && firstUnit->?
            || !firstUnit->isTeamLeader
            && (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) != 2
            || (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) == 16
            || firstUnit->? == 16 )
          {
            goto LABEL_80; /*0x6ebc5c*/
          }
          v6 = *SessionClass::GetEntry((SessionClass *)this->currentScript, &v16); /*0x6ebc6f*/
          if ( v6 == 54 || v6 == 53 ) /*0x6ebc79*/
            v13 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6ebca4*/
          else
            v13 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6ebc87*/
          if ( (*((unsigned __int8 (__thiscall **)(FootClass *))firstUnit->TechnoClass + 21))(firstUnit) ) /*0x6ebcac*/
            v13 *= 2; /*0x6ebcba*/
          v12 = 1; /*0x6ebcc4*/
          v14 = ObjectClass::DistanceTo((ObjectClass *)firstUnit, (int)this->focus); /*0x6ebcd2*/
          if ( v14 <= v13 /*0x6ebcfc*/
            && ((*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 114))(firstUnit) >= 0
             || *ScriptClass::GetNextAction(this->currentScript, v17) == 3) )
          {
            if ( (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) != 2 ) /*0x6ebd0c*/
              break; /*0x6ebd0c*/
            if ( (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 116))(firstUnit) <= 0 ) /*0x6ebd1a*/
              break; /*0x6ebd1a*/
            v7 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))firstUnit->TechnoClass + 18))(firstUnit, v19); /*0x6ebd25*/
            if ( Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v7) == (CellClass *)this->focus /*0x6ebd48*/
              || *ScriptClass::GetNextAction(this->currentScript, v18) == 3 )
            {
              break; /*0x6ebd48*/
            }
          }
          if ( !BYTE1(this->buildingType[1].TeamTypeClass_field_38) || !firstUnit->? ) /*0x6ebde9*/
            goto LABEL_55; /*0x6ebdf1*/
          if ( firstUnit->FootClass_field_bool_68E ) /*0x6ebdf3*/
          {
            (*((void (__thiscall **)(FootClass *, _DWORD))firstUnit->TechnoClass + 242))(firstUnit, 0); /*0x6ebe07*/
LABEL_55:
            if ( (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) != 2 ) /*0x6ebe1a*/
            {
              (*((void (__thiscall **)(FootClass *, int, _DWORD))firstUnit->TechnoClass + 122))(firstUnit, 2, 0); /*0x6ebe24*/
              if ( (*((unsigned __int8 (__thiscall **)(FootClass *))firstUnit->TechnoClass + 128))(firstUnit) ) /*0x6ebe2e*/
                (*((void (__thiscall **)(FootClass *))firstUnit->TechnoClass + 123))(firstUnit); /*0x6ebe3c*/
            }
            if ( !firstUnit->movementDestination ) /*0x6ebe42*/
              (*((void (__thiscall **)(FootClass *, AbstractClass *, int))firstUnit->TechnoClass + 288))( /*0x6ebe56*/
                firstUnit,
                this->focus,
                1);
            movementDestination = firstUnit->movementDestination; /*0x6ebe5c*/
            if ( movementDestination != this->focus /*0x6ebe9a*/
              && (*(_BYTE *)((*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 3434)
               || movementDestination != this->focus
               && (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2
               && movementDestination == (AbstractClass *)(*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass
                                                           + 111))(firstUnit)) )
            {
              (*((void (__thiscall **)(FootClass *, AbstractClass *, int))firstUnit->TechnoClass + 288))( /*0x6ebea6*/
                firstUnit,
                this->focus,
                1);
            }
            v11 = 0; /*0x6ebeac*/
LABEL_67:
            v9 = (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2 /*0x6ebecf*/
              && firstUnit->movementDestination == (AbstractClass *)(*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass
                                                                     + 111))(firstUnit);
            v10 = (firstUnit->? & 1) != 0 /*0x6ebefb*/
               && *(_BYTE *)((*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 3434)
               && v14 < v13;
            if ( firstUnit->movementDestination && !v9 && !v10 ) /*0x6ebf11*/
              v11 = 0; /*0x6ebf13*/
          }
LABEL_80:
          firstUnit = firstUnit->nextTeamMember; /*0x6ebf17*/
          if ( !firstUnit ) /*0x6ebf1f*/
          {
            if ( v12 && v11 ) /*0x6ebf35*/
            {
              if ( this->TeamClass_field_7F ) /*0x6ebf37*/
                this->stepCompleted = 1; /*0x6ebf3e*/
            }
            return; /*0x6ebf3e*/
          }
        }
        if ( (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) == 2 ) /*0x6ebd5b*/
        {
          if ( !firstUnit->movementDestination ) /*0x6ebd61*/
            goto LABEL_87; /*0x6ebd61*/
          if ( ObjectClass::DistanceTo((ObjectClass *)firstUnit, (int)firstUnit->movementDestination) <= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5912) ) /*0x6ebd7f*/
          {
            if ( !firstUnit->locomotor[0] ) /*0x6ebd85*/
              WinAPI::Wrapper(-2147467261); /*0x6ebd94*/
            if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)firstUnit->locomotor[0] + 16))(firstUnit->locomotor[0]) ) /*0x6ebda2*/
            {
LABEL_87:
              if ( !firstUnit->? ) /*0x6ebdad*/
              {
                (*((void (__thiscall **)(FootClass *, _DWORD, int))firstUnit->TechnoClass + 288))(firstUnit, 0, 1); /*0x6ebdc3*/
                (*((void (__thiscall **)(FootClass *, _DWORD, int))firstUnit->TechnoClass + 289))(firstUnit, 0, 1); /*0x6ebdd1*/
              }
            }
          }
        }
        goto LABEL_67; /*0x6ebdd7*/
      }
    }
  }
}



// ==== 0x006EBF50  TeamClass::ProcessMemberPositions  this=TeamClass  sig=csp ====
char __thiscall TeamClass::ProcessMemberPositions(TeamClass *this)
{
  double v1; // st7
  char result; // al
  FootClass *firstUnit; // esi
  int v5; // eax
  int v6; // ebp
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  char v14; // [esp+23h] [ebp-2Dh]
  _DWORD v15[3]; // [esp+24h] [ebp-2Ch] BYREF
  int v16; // [esp+30h] [ebp-20h]
  int v17; // [esp+34h] [ebp-1Ch]
  _BYTE v18[12]; // [esp+38h] [ebp-18h] BYREF
  _BYTE v19[12]; // [esp+44h] [ebp-Ch] BYREF

  result = 0; /*0x6ebf5d*/
  firstUnit = this->firstUnit; /*0x6ebf63*/
  v14 = 0; /*0x6ebf69*/
  if ( this->visibilityFlags ) /*0x6ebf5f*/
  {
    if ( firstUnit ) /*0x6ebf79*/
    {
      do /*0x6ec10e*/
      {
        if ( firstUnit->? /*0x6ebfc3*/
          && firstUnit->?
          && (dword_A8E7AC || !firstUnit->?)
          && (firstUnit->isTeamLeader
           || (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2) )
        {
          v5 = *SessionClass::GetEntry((SessionClass *)this->currentScript, v15); /*0x6ebfd6*/
          if ( v5 == 54 || v5 == 53 ) /*0x6ebfe0*/
            v6 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6ebff5*/
          else
            v6 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6ebfe8*/
          if ( (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2 ) /*0x6ec005*/
            v6 *= 3; /*0x6ec007*/
          if ( HIBYTE(this->buildingType[1].TeamTypeClass_field_30) /*0x6ec01c*/
            && !(*((unsigned __int8 (__thiscall **)(FootClass *))firstUnit->TechnoClass + 312))(firstUnit) )
          {
            v6 /= 3; /*0x6ec034*/
          }
          v7 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->unknown38 + 72))(this->unknown38, v18); /*0x6ec045*/
          v8 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))firstUnit->TechnoClass + 18))(firstUnit, v19); /*0x6ec04e*/
          v9 = *v8 - *v7; /*0x6ec055*/
          v10 = v8[1]; /*0x6ec057*/
          v11 = v8[2]; /*0x6ec05a*/
          v15[2] = v9; /*0x6ec05d*/
          v12 = v11 - v7[2]; /*0x6ec06c*/
          v16 = v10 - v7[1]; /*0x6ec06e*/
          v17 = v12; /*0x6ec072*/
          Math::Sqrt((double)v9 * (double)v9 + (double)v16 * (double)v16 + (double)v12 * (double)v12); /*0x6ec09b*/
          LOWORD(v13) = Math::RoundToInt(v1); /*0x6ec0a3*/
          if ( v13 <= v6 ) /*0x6ec0aa*/
          {
            if ( (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) != 5 ) /*0x6ec0e8*/
            {
              (*((void (__thiscall **)(FootClass *, int, _DWORD))firstUnit->TechnoClass + 122))(firstUnit, 5, 0); /*0x6ec0f2*/
              (*((void (__thiscall **)(FootClass *, _DWORD, int))firstUnit->TechnoClass + 288))(firstUnit, 0, 1); /*0x6ec100*/
            }
          }
          else
          {
            if ( !firstUnit->movementDestination ) /*0x6ec0ac*/
            {
              (*((void (__thiscall **)(FootClass *, int, _DWORD))firstUnit->TechnoClass + 122))(firstUnit, 2, 0); /*0x6ec0be*/
              (*((void (__thiscall **)(FootClass *, int, int))firstUnit->TechnoClass + 288))( /*0x6ec0ce*/
                firstUnit,
                this->unknown38,
                1);
            }
            v14 = 1; /*0x6ec0d4*/
          }
        }
        firstUnit = firstUnit->nextTeamMember; /*0x6ec106*/
      }
      while ( firstUnit ); /*0x6ec10e*/
      result = v14; /*0x6ec114*/
    }
    this->visibilityFlags = result; /*0x6ec119*/
  }
  return result; /*0x6ebf6f*/
}



// ==== 0x006EC130  ObjectClass::Get  this=ObjectClass  sig=csp ====
char __thiscall ObjectClass::Get(ObjectClass *this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v6; // [esp+8h] [ebp-8h] BYREF

  if ( !a2 /*0x6ec173*/
    || !*(_BYTE *)(a2 + 144)
    || !*(_DWORD *)(a2 + 108)
    || !dword_A8E7AC && *(_BYTE *)(a2 + 129)
    || *(_BYTE *)(a2 + 1673) )
  {
    return 0; /*0x6ec17b*/
  }
  v3 = *SessionClass::GetEntry((SessionClass *)this->owningHouseIndex, &v6); /*0x6ec18f*/
  if ( v3 == 54 || v3 == 53 ) /*0x6ec199*/
    v4 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6ec1af*/
  else
    v4 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6ec1a1*/
  if ( ObjectClass::DistanceTo((ObjectClass *)a2, (int)this->attachedTag) <= v4 ) /*0x6ec1c3*/
  {
    *(_BYTE *)(a2 + 1673) = 1; /*0x6ec203*/
    return 0; /*0x6ec20b*/
  }
  if ( !*(_DWORD *)(a2 + 1444) ) /*0x6ec1c5*/
  {
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 488))(a2, 2, 0); /*0x6ec1d7*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 968))(a2, 0); /*0x6ec1e3*/
    (*(void (__thiscall **)(int, TagClass *, int))(*(_DWORD *)a2 + 1152))(a2, this->attachedTag, 1); /*0x6ec1f3*/
  }
  return 1; /*0x6ec1f9*/
}



// ==== 0x006EC250  globalHelper_0EC250  this=-  sig=ida-proto ====
int __fastcall sub_6EC250(int a1, int a2)
{
  int result; // eax
  int i; // ebp
  int v4; // esi
  int j; // eax
  wchar_t *v6; // edi
  int v7; // eax
  int v10; // [esp+10h] [ebp-8h]

  result = dword_8B40F8; /*0x6ec253*/
  for ( i = 0; i < dword_8B40F8; ++i ) /*0x6ec265*/
  {
    v4 = *((_DWORD *)dword_8B40EC + i); /*0x6ec275*/
    if ( v4 && a2 == *(_DWORD *)(v4 + 44) && *(_DWORD *)(*(_DWORD *)(v4 + 36) + 180) < a1 ) /*0x6ec294*/
    {
      for ( j = *(_DWORD *)(v4 + 84); j; j = *(_DWORD *)(v4 + 84) ) /*0x6ec29b*/
        TeamClass::LiberateMember_Start(v4, j, 0xFFFFFFFF, 0); /*0x6ec2a4*/
      *(_BYTE *)(v4 + 126) = 1; /*0x6ec2b0*/
      *(_BYTE *)(v4 + 125) = 1; /*0x6ec2b3*/
      v6 = dword_A8ED84; /*0x6ec2bc*/
      v7 = Math::RoundToInt(*(double *)&dword_8871E0[1].AITriggerFailureWeightDelta * 900.0); /*0x6ec2ce*/
      *(_BYTE *)(v4 + 131) = 1; /*0x6ec2da*/
      *(_DWORD *)(v4 + 100) = v6; /*0x6ec2e0*/
      *(_DWORD *)(v4 + 104) = v10; /*0x6ec2e2*/
      *(_DWORD *)(v4 + 108) = v7; /*0x6ec2e5*/
    }
    result = dword_8B40F8; /*0x6ec2e8*/
  }
  return result; /*0x6ec2f9*/
}



// ==== 0x006EC300  TechnoClass::IsWaypointHidden  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsWaypointHidden(TechnoClass *this)
{
  int result; // eax
  int *Entry; // ecx
  int v4; // ecx
  __int16 *Waypoint_Location; // eax
  _DWORD v6[2]; // [esp+4h] [ebp-8h] BYREF

  LOBYTE(result) = HIBYTE(this->?) /*0x6ec354*/
                && (result = SessionClass::SetField((SessionClass *)this->?), (_BYTE)result)
                && (Entry = SessionClass::GetEntry((SessionClass *)this->?, v6),
                    result = *Entry,
                    v4 = Entry[1],
                    result == 3)
                && (Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v6, v4),
                    result = LayerClass::IsWithinUsableArea(
                               (LayerClass *)&stru_87F5F0.__pad_58[416],
                               Waypoint_Location,
                               1),
                    !(_BYTE)result);
  return result; /*0x6ec356*/
}



// ==== 0x006EC370  AnimTypeClass::method_6EC370  this=AnimTypeClass  sig=csp ====
char __thiscall sub_6EC370(AnimTypeClass *this)
{
  int v1; // ecx
  char result; // al

  v1 = *(_DWORD *)&this->?[23]; /*0x6ec370*/
  result = 1; /*0x6ec373*/
  if ( v1 ) /*0x6ec377*/
  {
    while ( *(_BYTE *)(v1 + 981) ) /*0x6ec381*/
    {
      v1 = *(_DWORD *)(v1 + 1496); /*0x6ec383*/
      if ( !v1 ) /*0x6ec38b*/
        return result; /*0x6ec38b*/
    }
    return 0; /*0x6ec38e*/
  }
  return result; /*0x6ec38d*/
}



// ==== 0x006EC3A0  TeamClass::WakeUpAllMembers  this=TeamClass  sig=csp ====
char __thiscall TeamClass::WakeUpAllMembers(TeamClass *this)
{
  char result; // al
  FootClass *i; // esi

  result = TeamClass::SelectMember((int)this, 0); /*0x6ec3a5*/
  for ( i = this->firstUnit; i; i = i->nextTeamMember ) /*0x6ec3af*/
  {
    result = (*((int (__thiscall **)(FootClass *, _DWORD))i->TechnoClass + 242))(i, 0); /*0x6ec3b7*/
    i->unknownBool688 = 1; /*0x6ec3bd*/
  }
  return result; /*0x6ec3ce*/
}



// ==== 0x006EC3D0  HouseClass::FindBestBuildingToRepair  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::FindBestBuildingToRepair(HouseClass *this)
{
  _DWORD *repairStationsCount; // esi
  int v2; // ebx
  _DWORD *v3; // ebp
  int v4; // edi

  repairStationsCount = (_DWORD *)this->repairStationsCount; /*0x6ec3d3*/
  v2 = -1; /*0x6ec3d6*/
  v3 = repairStationsCount; /*0x6ec3d9*/
  if ( !repairStationsCount ) /*0x6ec3dd*/
    return 0; /*0x6ec447*/
  do /*0x6ec43e*/
  {
    v4 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*repairStationsCount + 132))(repairStationsCount) + 1532); /*0x6ec3ea*/
    if ( *((_BYTE *)repairStationsCount + 144) /*0x6ec430*/
      && repairStationsCount[27]
      && (dword_A8E7AC || !*((_BYTE *)repairStationsCount + 129))
      && (*((_BYTE *)repairStationsCount + 1673)
       || (*(int (__thiscall **)(_DWORD *))(*repairStationsCount + 44))(repairStationsCount) == 2)
      && v4 > v2 )
    {
      v3 = repairStationsCount; /*0x6ec432*/
      v2 = v4; /*0x6ec434*/
    }
    repairStationsCount = (_DWORD *)repairStationsCount[374]; /*0x6ec436*/
  }
  while ( repairStationsCount ); /*0x6ec43e*/
  return v3; /*0x6ec443*/
}



// ==== 0x006EC450  TeamClass::SaveLoad_Prefix  this=TeamClass  sig=csp ====
int __stdcall TeamClass::SaveLoad_Prefix(TeamClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6ec45b*/
  if ( result >= 0 ) /*0x6ec462*/
  {
    if ( this ) /*0x6ec46a*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x6ec473*/
      __4type_info_AAEAAV0_ABV0__Z(this->suspendTimer, (int)&a2); /*0x6ec480*/
      this->AbstractClass = &TeamClass::`vftable'; /*0x6ec485*/
      this->? = &TeamClass::`vftable'; /*0x6ec48b*/
      this->? = &TeamClass::`vftable'; /*0x6ec492*/
      this->? = &TeamClass::`vftable'; /*0x6ec499*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->buildingType); /*0x6ec4a9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->currentScript); /*0x6ec4b7*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->owner); /*0x6ec4c5*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->tag); /*0x6ec4d3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->firstUnit); /*0x6ec4e1*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->unknown38); /*0x6ec4ef*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->focus); /*0x6ec4fd*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->spawnCell); /*0x6ec50b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->queuedFocus); /*0x6ec519*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->target); /*0x6ec527*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->unknown44); /*0x6ec535*/
    return 0; /*0x6ec53a*/
  }
  return result; /*0x6ec53c*/
}



// ==== 0x006EC540  TeamClass::SaveLoad_Prefix_0  this=TeamClass  sig=csp ====
int __stdcall TeamClass::SaveLoad_Prefix_0(TeamClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6ec54f*/
  if ( result >= 0 ) /*0x6ec556*/
    return 0; /*0x6ec558*/
  return result; /*0x6ec55a*/
}



// ==== 0x006EC560  TeamClass::ddtor  this=TeamClass  sig=csp ====
int __stdcall TeamClass::ddtor(TeamClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6ec566*/
    return -2147467261; /*0x6ec568*/
  *a2 = 237448655; /*0x6ec576*/
  a2[1] = 298949647; /*0x6ec57e*/
  a2[2] = -1610610249; /*0x6ec587*/
  a2[3] = unk_7E976C; /*0x6ec590*/
  return 0; /*0x6ec56d*/
}



// ==== 0x006EC5A0  TeamClass::PowerDrainUpdate  this=TeamClass  sig=csp ====
int __thiscall TeamClass::PowerDrainUpdate(TeamClass *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int unknown38; // eax
  int v6; // eax
  FootClass *firstUnit; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  TagClass *tag; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  int v25; // edx

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x6ec5a9*/
  v3 = (*((int (__stdcall **)(void **))this->buildingType->? + 4))(&this->buildingType->?); /*0x6ec5b7*/
  Power::TimerProcess(v3); /*0x6ec5bd*/
  v4 = (*((int (__stdcall **)(void **))this->owner->? + 4))(&this->owner->?); /*0x6ec5cb*/
  Power::TimerProcess(v4); /*0x6ec5d1*/
  unknown38 = this->unknown38; /*0x6ec5d6*/
  if ( unknown38 ) /*0x6ec5db*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(unknown38 + 4) + 16))(unknown38 + 4); /*0x6ec5e4*/
    Power::TimerProcess(v6); /*0x6ec5ea*/
  }
  Power::TimerProcess(this->totalObjects); /*0x6ec5f5*/
  Power::TimerProcess(this->totalThreatValue); /*0x6ec600*/
  firstUnit = this->firstUnit; /*0x6ec605*/
  if ( firstUnit ) /*0x6ec60a*/
  {
    v8 = (*((int (__stdcall **)(void **))firstUnit->? + 4))(&firstUnit->?); /*0x6ec613*/
    Power::TimerProcess(v8); /*0x6ec619*/
  }
  v9 = this->guardAreaTimer[0]; /*0x6ec61e*/
  v10 = this->guardAreaTimer[2]; /*0x6ec621*/
  if ( v9 != -1 ) /*0x6ec627*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 >= v10 ) /*0x6ec633*/
      v10 = 0; /*0x6ec639*/
    else
      v10 -= *(_DWORD *)&stru_A8EB00.?[416] - v9; /*0x6ec635*/
  }
  Power::TimerProcess(v10); /*0x6ec63e*/
  v11 = this->suspendTimer[0]; /*0x6ec643*/
  v12 = this->suspendTimer[2]; /*0x6ec646*/
  if ( v11 != -1 ) /*0x6ec64c*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v11 >= v12 ) /*0x6ec658*/
      v12 = 0; /*0x6ec65e*/
    else
      v12 -= *(_DWORD *)&stru_A8EB00.?[416] - v11; /*0x6ec65a*/
  }
  Power::TimerProcess(v12); /*0x6ec663*/
  tag = this->tag; /*0x6ec668*/
  if ( tag ) /*0x6ec66d*/
  {
    v14 = (*((int (__stdcall **)(void **))tag->? + 4))(&tag->?); /*0x6ec676*/
    tag = (TagClass *)Power::TimerProcess(v14); /*0x6ec67c*/
  }
  LOBYTE(tag) = this->unknown77; /*0x6ec681*/
  Power::FlagProcess((Power *)a2, (int)tag); /*0x6ec687*/
  LOBYTE(v15) = this->spawnStatus; /*0x6ec68c*/
  Power::FlagProcess((Power *)a2, v15); /*0x6ec692*/
  LOBYTE(v16) = this->unknown79; /*0x6ec697*/
  v17 = Power::FlagProcess((Power *)a2, v16); /*0x6ec69d*/
  LOBYTE(v17) = this->TeamClass_field_7A; /*0x6ec6a2*/
  Power::FlagProcess((Power *)a2, v17); /*0x6ec6a8*/
  LOBYTE(v18) = this->TeamClass_field_7B; /*0x6ec6ad*/
  Power::FlagProcess((Power *)a2, v18); /*0x6ec6b3*/
  LOBYTE(v19) = this->visibilityFlags; /*0x6ec6b8*/
  v20 = Power::FlagProcess((Power *)a2, v19); /*0x6ec6be*/
  LOBYTE(v20) = this->needsToDisappear; /*0x6ec6c3*/
  Power::FlagProcess((Power *)a2, v20); /*0x6ec6c9*/
  LOBYTE(v21) = this->TeamClass_field_7E; /*0x6ec6ce*/
  Power::FlagProcess((Power *)a2, v21); /*0x6ec6d4*/
  LOBYTE(v22) = this->TeamClass_field_7F; /*0x6ec6d9*/
  v23 = Power::FlagProcess((Power *)a2, v22); /*0x6ec6df*/
  LOBYTE(v23) = this->stepCompleted; /*0x6ec6e4*/
  Power::FlagProcess((Power *)a2, v23); /*0x6ec6ed*/
  LOBYTE(v24) = this->unknown82; /*0x6ec6f2*/
  Power::FlagProcess((Power *)a2, v24); /*0x6ec6fb*/
  LOBYTE(v25) = this->isSuspended; /*0x6ec700*/
  Power::FlagProcess((Power *)a2, v25); /*0x6ec709*/
  return Checksummer::Add_Buffer((Checksummer *)a2, (unsigned __int8 *)this->countObjects, 24); /*0x6ec71e*/
}



// ==== 0x006EC7D0  TeamClass::MoveTeamToWaypoint  this=TeamClass  sig=csp ====
void __thiscall TeamClass::MoveTeamToWaypoint(TeamClass *this, int a2, int a3)
{
  TeamClass *v3; // ebp
  FootClass *firstUnit; // esi
  int v5; // ebx
  FootClass *v6; // edi
  int v7; // ebp
  void *v8; // eax
  _DWORD *Entry; // eax
  __int16 *Waypoint_Location; // eax
  void *vtable0; // ebx
  void *v12; // eax
  int (__thiscall **v13)(FootClass *); // eax
  int v14; // eax
  void *v15; // [esp+Ch] [ebp-10h]
  _DWORD v16[2]; // [esp+14h] [ebp-8h] BYREF

  v3 = this; /*0x6ec7d8*/
  v16[0] = this; /*0x6ec7dc*/
  if ( (_BYTE)a3 ) /*0x6ec7e0*/
  {
    firstUnit = this->firstUnit; /*0x6ec7e8*/
    v5 = -1; /*0x6ec7eb*/
    v6 = firstUnit; /*0x6ec7ef*/
    if ( firstUnit ) /*0x6ec7f3*/
    {
      do /*0x6ec853*/
      {
        v7 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 1532); /*0x6ec7ff*/
        if ( firstUnit->? /*0x6ec845*/
          && firstUnit->?
          && (dword_A8E7AC || !firstUnit->?)
          && (firstUnit->isTeamLeader
           || (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2)
          && v7 > v5 )
        {
          v6 = firstUnit; /*0x6ec847*/
          v5 = v7; /*0x6ec849*/
        }
        firstUnit = firstUnit->nextTeamMember; /*0x6ec84b*/
      }
      while ( firstUnit ); /*0x6ec853*/
      v3 = (TeamClass *)v16[0]; /*0x6ec855*/
    }
    a3 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a2, *(_DWORD *)(a2 + 4)); /*0x6ec87d*/
    v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x6ec881*/
    TeamClass::SelectMember((int)v3, (int)v8); /*0x6ec889*/
    if ( !v3->TeamClass_field_7F /*0x6ec8d3*/
      || !(unsigned __int8)SessionClass::SetField((SessionClass *)v3->currentScript)
      || (Entry = SessionClass::GetEntry((SessionClass *)v3->currentScript, v16), *Entry != 3)
      || (Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a2, Entry[1]),
          (unsigned __int8)LayerClass::IsWithinUsableArea(
                             (LayerClass *)&stru_87F5F0.__pad_58[416],
                             Waypoint_Location,
                             1)) )
    {
      vtable0 = v6->TechnoClass; /*0x6ec8dc*/
      v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x6ec8f0*/
      if ( (*((int (__thiscall **)(FootClass *, void *, int, int, _DWORD, _DWORD))vtable0 + 107))(v6, v12, -1, -1, 0, 0) ) /*0x6ec8f8*/
      {
        v13 = (int (__thiscall **)(FootClass *))v6->TechnoClass; /*0x6ec916*/
        a2 = 0; /*0x6ec91e*/
        v14 = v13[33](v6); /*0x6ec928*/
        a3 = *LayerClass::Pathfinding_Find( /*0x6ec94b*/
                (Type *)&stru_87F5F0.__pad_58[416],
                (int)&a3,
                v16,
                (__int16 *)&a3,
                *(_DWORD *)(v14 + 1660),
                -1,
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
      }
    }
    if ( a3 == g_BuildingLoadQueue_Array.?[1] ) /*0x6ec95e*/
    {
      TeamClass::SelectMember((int)v3, 0); /*0x6ec984*/
    }
    else
    {
      v15 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x6ec97d*/
      TeamClass::SelectMember((int)v3, (int)v15); /*0x6ec97e*/
    }
  }
  TeamClass::UpdateMembers(v3); /*0x6ec98b*/
}



// ==== 0x006EC9A0  TeamClass::SelectWaypointTarget  this=TeamClass  sig=csp ====
char __thiscall TeamClass::SelectWaypointTarget(TeamClass *this, int a2, char a3)
{
  void *CellFromArray; // eax
  int v5; // esi
  char v6; // al
  int ObjectCell; // eax
  int *firstUnit; // esi
  char result; // al
  _DWORD v10[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a3 ) /*0x6ec9ad*/
  {
    CellFromArray = ScenarioClass::GetCellFromArray((ScenarioClass *)dword_A8B230, *(_DWORD *)(a2 + 4)); /*0x6ec9bd*/
    v5 = (int)CellFromArray; /*0x6ec9c2*/
    if ( CellFromArray ) /*0x6ec9c6*/
    {
      if ( (*(int (__thiscall **)(void *))(*(_DWORD *)CellFromArray + 44))(CellFromArray) == 11 ) /*0x6ec9d2*/
      {
        v6 = BYTE1(*(_DWORD *)(v5 + 320)) & 1; /*0x6ec9e1*/
        v10[0] = 0; /*0x6ec9e3*/
        v10[1] = 0; /*0x6ec9ef*/
        ObjectCell = Object::FindObjectCell((Object *)v5, v10, v6); /*0x6ec9f7*/
        if ( ObjectCell ) /*0x6ec9fe*/
          v5 = ObjectCell; /*0x6eca00*/
      }
    }
    TeamClass::SelectMember((int)this, v5); /*0x6eca05*/
  }
  if ( this->queuedFocus && (firstUnit = (int *)this->firstUnit) != 0 ) /*0x6eca16*/
  {
    while ( *(int *)((*(int (__thiscall **)(int *))(*firstUnit + 132))(firstUnit) + 1668) > 0 && firstUnit[191] <= 0 ) /*0x6eca34*/
    {
      firstUnit = (int *)firstUnit[374]; /*0x6eca36*/
      if ( !firstUnit ) /*0x6eca3e*/
        goto LABEL_12; /*0x6eca3e*/
    }
    return TeamClass::AttackCoordinator(this); /*0x6eca5a*/
  }
  else
  {
LABEL_12:
    result = TeamClass::SelectMember((int)this, 0); /*0x6eca40*/
    this->stepCompleted = 1; /*0x6eca49*/
  }
  return result; /*0x6eca50*/
}



// ==== 0x006ECA70  TeamClass::SelectAttackTarget  this=TeamClass  sig=csp ====
char __thiscall TeamClass::SelectAttackTarget(TeamClass *this, int a2, char a3)
{
  Object *CellFromArray; // eax
  Object *v5; // esi
  char v6; // al
  int ObjectCell; // eax
  int v8; // esi
  int *firstUnit; // esi
  char result; // al
  _DWORD v11[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a3 ) /*0x6eca7d*/
  {
    CellFromArray = (Object *)ScenarioClass::GetCellFromArray((ScenarioClass *)dword_A8B230, *(_DWORD *)(a2 + 4)); /*0x6eca8d*/
    v5 = CellFromArray; /*0x6eca92*/
    if ( !CellFromArray /*0x6ecadc*/
      || (*(int (__thiscall **)(Object *))(*(_DWORD *)CellFromArray->__pad_0 + 44))(CellFromArray) != 11
      || (v6 = BYTE1(*(_DWORD *)v5->__pad_140) & 1,
          v11[0] = 0,
          v11[1] = 0,
          ObjectCell = Object::FindObjectCell(v5, v11, v6),
          (v8 = ObjectCell) == 0)
      || (*(int (__thiscall **)(int))(*(_DWORD *)ObjectCell + 44))(ObjectCell) != 6 )
    {
      v8 = 0; /*0x6ecade*/
    }
    TeamClass::SelectMember((int)this, v8); /*0x6ecae3*/
  }
  if ( this->queuedFocus && (firstUnit = (int *)this->firstUnit) != 0 ) /*0x6ecaf4*/
  {
    while ( *(int *)((*(int (__thiscall **)(int *))(*firstUnit + 132))(firstUnit) + 1668) > 0 && firstUnit[191] <= 0 ) /*0x6ecb12*/
    {
      firstUnit = (int *)firstUnit[374]; /*0x6ecb14*/
      if ( !firstUnit ) /*0x6ecb1c*/
        goto LABEL_13; /*0x6ecb1c*/
    }
    return TeamClass::AttackCoordinator(this); /*0x6ecb38*/
  }
  else
  {
LABEL_13:
    result = TeamClass::SelectMember((int)this, 0); /*0x6ecb1e*/
    this->stepCompleted = 1; /*0x6ecb27*/
  }
  return result; /*0x6ecb2e*/
}



// ==== 0x006ECCE0  TeamClass::MoveToCellAndAttack  this=TeamClass  sig=csp ====
void __thiscall TeamClass::MoveToCellAndAttack(TeamClass *this, int a2, char a3)
{
  TeamClass *v3; // edi
  void *CellFromArray; // esi
  _DWORD *Entry; // eax
  int v6; // eax
  FootClass *firstUnit; // esi
  int v8; // ebp
  FootClass *v9; // ebx
  int v10; // edi
  void *vtable0; // edx
  int v12; // eax
  AbstractClass *focus; // eax
  int v15; // [esp+10h] [ebp-14h] BYREF
  _DWORD v16[3]; // [esp+18h] [ebp-Ch] BYREF
  int v17; // [esp+28h] [ebp+4h]

  v3 = this; /*0x6eccea*/
  CellFromArray = ScenarioClass::GetCellFromArray((ScenarioClass *)dword_A8B230, *(_DWORD *)(a2 + 4)); /*0x6eccff*/
  v17 = (int)CellFromArray; /*0x6ecd07*/
  if ( a3 ) /*0x6ecd0b*/
    TeamClass::SelectMember((int)v3, (int)CellFromArray); /*0x6ecd10*/
  if ( !v3->focus ) /*0x6ecd15*/
  {
    Entry = SessionClass::GetEntry((SessionClass *)v3->currentScript, &v15); /*0x6ecd24*/
    v16[0] = *Entry; /*0x6ecd2b*/
    if ( Entry[1] < 0x2BEu ) /*0x6ecd36*/
      TeamClass::SelectMember((int)v3, (int)CellFromArray); /*0x6ecd3b*/
  }
  LOWORD(v6) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4432) * 900.0); /*0x6ecd52*/
  if ( !(*(_DWORD *)&stru_A8EB00.?[416] % v6) ) /*0x6ecd5f*/
  {
    firstUnit = v3->firstUnit; /*0x6ecd69*/
    v8 = -1; /*0x6ecd6d*/
    v9 = firstUnit; /*0x6ecd70*/
    if ( firstUnit ) /*0x6ecd74*/
    {
      do /*0x6ecdd4*/
      {
        v10 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 1532); /*0x6ecd80*/
        if ( firstUnit->? /*0x6ecdc6*/
          && firstUnit->?
          && (dword_A8E7AC || !firstUnit->?)
          && (firstUnit->isTeamLeader
           || (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2)
          && v10 > v8 )
        {
          v9 = firstUnit; /*0x6ecdc8*/
          v8 = v10; /*0x6ecdca*/
        }
        firstUnit = firstUnit->nextTeamMember; /*0x6ecdcc*/
      }
      while ( firstUnit ); /*0x6ecdd4*/
      v3 = this; /*0x6ecdd6*/
    }
    if ( v9 ) /*0x6ecddd*/
    {
      v16[0] = v9->?[0]; /*0x6ecde9*/
      vtable0 = v9->TechnoClass; /*0x6ecded*/
      v16[1] = v9->?[1]; /*0x6ecdf2*/
      v16[2] = v9->?[2]; /*0x6ecdfe*/
      v12 = (*((int (__thiscall **)(FootClass *, int, _DWORD *, _DWORD))vtable0 + 241))(v9, 1, v16, 0); /*0x6ece06*/
      if ( v12 ) /*0x6ece0e*/
      {
        TeamClass::SelectMember((int)v3, v12); /*0x6ece11*/
      }
      else if ( v3->focus != (AbstractClass *)v17 ) /*0x6ece1c*/
      {
        TeamClass::SelectMember((int)v3, 0); /*0x6ece22*/
      }
    }
  }
  focus = v3->focus; /*0x6ece27*/
  if ( focus && (focus->abstractFlags & 2) != 0 ) /*0x6ece32*/
    TeamClass::AttackCoordinator(v3); /*0x6ece36*/
  else
    TeamClass::UpdateMembers(v3); /*0x6ece46*/
}



// ==== 0x006ECE60  TeamClass::AssignMemberToCoordinator  this=TeamClass  sig=csp ====
char __thiscall TeamClass::AssignMemberToCoordinator(TeamClass *this, int a2, char a3)
{
  void *CellFromArray; // eax
  AbstractClass *queuedFocus; // ecx
  AbstractClass *v6; // esi
  Object *v7; // eax
  int ObjectCell; // eax
  _DWORD v10[2]; // [esp+4h] [ebp-8h] BYREF

  if ( a3 ) /*0x6ece6c*/
  {
    CellFromArray = ScenarioClass::GetCellFromArray((ScenarioClass *)dword_A8B230, *(_DWORD *)(a2 + 4)); /*0x6ece7c*/
    TeamClass::SelectMember((int)this, (int)CellFromArray); /*0x6ece84*/
  }
  queuedFocus = this->queuedFocus; /*0x6ece89*/
  if ( queuedFocus && (*((int (__thiscall **)(AbstractClass *))queuedFocus->vtable0 + 11))(queuedFocus) == 11 )
  {
    v6 = this->queuedFocus; /*0x6ece9b*/
    if ( v6 )
      v7 = (*((int (__thiscall **)(AbstractClass *))v6->vtable0 + 11))(this->queuedFocus) == 11 ? (Object *)v6 : 0;
    else
      v7 = 0; /*0x6ecea2*/
    v10[0] = 0; /*0x6ecec1*/
    v10[1] = 0; /*0x6ecec9*/
    ObjectCell = Object::FindObjectCell(v7, v10, 0); /*0x6eced1*/
    if ( ObjectCell ) /*0x6eced9*/
    {
      TeamClass::SelectMember((int)this, ObjectCell); /*0x6ecede*/
LABEL_10:
      LOBYTE(ObjectCell) = TeamClass::AttackCoordinator(this); /*0x6ecee3*/
    }
  }
  else
  {
    if ( this->queuedFocus ) /*0x6ecef1*/
      goto LABEL_10; /*0x6ecef6*/
    LOBYTE(ObjectCell) = TeamClass::SelectMember((int)this, 0); /*0x6ecefc*/
    this->stepCompleted = 1; /*0x6ecf01*/
  }
  return ObjectCell; /*0x6eceea*/
}



// ==== 0x006ECFB0  TeamClass::Create  this=TeamClass  sig=csp ====
char __thiscall TeamClass::Create(TeamClass *this, int a2, int a3)
{
  int v4; // eax
  int *v5; // ebx
  FootClass *i; // esi

  v4 = __2_YAPAXI_Z(0xA0u); /*0x6ecfba*/
  if ( v4 ) /*0x6ecfc4*/
  {
    v4 = MissionClass::Construct( /*0x6ecfdf*/
           v4,
           *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * *(_DWORD *)(a2 + 4)),
           (int)this->owner,
           0);
    v5 = (int *)v4; /*0x6ecfe4*/
  }
  else
  {
    v5 = 0; /*0x6ecfe8*/
  }
  for ( i = this->firstUnit; i; i = this->firstUnit ) /*0x6ecfef*/
  {
    TeamClass::LiberateMember_Start((int *)this, (int)i, 0xFFFFFFFF, 0); /*0x6ecff8*/
    LOBYTE(v4) = TeamClass::AddMember(v5, (int)i, 0); /*0x6ed002*/
  }
  if ( this ) /*0x6ed010*/
    LOBYTE(v4) = (*((char (__thiscall **)(TeamClass *, int))this->AbstractClass + 8))(this, 1); /*0x6ed018*/
  return v4; /*0x6ed01b*/
}



// ==== 0x006ED090  TeamClass::CoordinateSuperWeaponAttack  this=TeamClass  sig=csp ====
char __thiscall TeamClass::CoordinateSuperWeaponAttack(int this, int a2, int a3)
{
  TeamClass *v3; // ebp
  int *v4; // esi
  int v5; // ebx
  int *v6; // edi
  int v7; // ebp
  int SuperWeaponTypeFlag; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int *v12; // esi
  int *firstUnit; // esi
  _DWORD v16[3]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = (TeamClass *)this; /*0x6ed094*/
  if ( !*(_DWORD *)(this + 60) ) /*0x6ed09b*/
  {
    v4 = *(int **)(this + 84); /*0x6ed0a6*/
    if ( v4 ) /*0x6ed0ab*/
    {
      v5 = -1; /*0x6ed0b2*/
      v6 = *(int **)(this + 84); /*0x6ed0b6*/
      do /*0x6ed11a*/
      {
        v7 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v4 + 132))(v4) + 1532); /*0x6ed0c6*/
        if ( *((_BYTE *)v4 + 144) /*0x6ed10c*/
          && v4[27]
          && (dword_A8E7AC || !*((_BYTE *)v4 + 129))
          && (*((_BYTE *)v4 + 1673) || (*(int (__thiscall **)(int *))(*v4 + 44))(v4) == 2)
          && v7 > v5 )
        {
          v6 = v4; /*0x6ed10e*/
          v5 = v7; /*0x6ed110*/
        }
        v4 = (int *)v4[374]; /*0x6ed112*/
      }
      while ( v4 ); /*0x6ed11a*/
      v3 = (TeamClass *)this; /*0x6ed11c*/
      SuperWeaponTypeFlag = GetSuperWeaponTypeFlag(*(ObjectClass **)(a2 + 4)); /*0x6ed127*/
      v16[0] = v6[39]; /*0x6ed138*/
      v16[1] = v6[40]; /*0x6ed13f*/
      v9 = *v6; /*0x6ed143*/
      v16[2] = v6[41]; /*0x6ed148*/
      v10 = *(_DWORD *)(this + 36); /*0x6ed14c*/
      LOBYTE(v10) = *(_BYTE *)(v10 + 247); /*0x6ed14f*/
      v11 = (*(int (__thiscall **)(int *, int, _DWORD *, int))(v9 + 964))(v6, SuperWeaponTypeFlag, v16, v10); /*0x6ed15e*/
      TeamClass::SelectMember(this, v11); /*0x6ed167*/
      if ( *(_DWORD *)(this + 60) && (v12 = *(int **)(this + 84)) != 0 ) /*0x6ed17a*/
      {
        while ( *(int *)((*(int (__thiscall **)(int *))(*v12 + 132))(v12) + 1668) > 0 && v12[191] <= 0 ) /*0x6ed198*/
        {
          v12 = (int *)v12[374]; /*0x6ed19a*/
          if ( !v12 ) /*0x6ed1a2*/
            goto LABEL_19; /*0x6ed1a2*/
        }
      }
      else
      {
LABEL_19:
        *(_BYTE *)(this + 128) = 1; /*0x6ed1a4*/
      }
    }
    if ( !v3->queuedFocus ) /*0x6ed1ab*/
      goto LABEL_25; /*0x6ed1ab*/
  }
  firstUnit = (int *)v3->firstUnit; /*0x6ed1b2*/
  if ( firstUnit ) /*0x6ed1b7*/
  {
    while ( *(int *)((*(int (__thiscall **)(int *))(*firstUnit + 132))(firstUnit) + 1668) > 0 && firstUnit[191] <= 0 ) /*0x6ed1d5*/
    {
      firstUnit = (int *)firstUnit[374]; /*0x6ed1d7*/
      if ( !firstUnit ) /*0x6ed1df*/
        goto LABEL_25; /*0x6ed1df*/
    }
  }
  else
  {
LABEL_25:
    v3->stepCompleted = 1; /*0x6ed1e1*/
  }
  return TeamClass::AttackCoordinator(v3); /*0x6ed1ef*/
}



// ==== 0x006ED200  ObjectClass::AssignTeamProductionFacilities  this=ObjectClass  sig=csp ====
char __thiscall AssignTeamProductionFacilities(ObjectClass *this, int a2, int a3)
{
  int v3; // eax
  Team *v4; // esi
  int v5; // ebp
  int v6; // ebx
  _DWORD *v7; // edi
  char v8; // bl
  int v9; // edi
  TechnoClass *v10; // edi
  int v11; // ebp
  char v12; // bl
  int v13; // esi
  int v14; // eax
  int v15; // edi
  TechnoClass *v16; // edi
  CellClass *v17; // eax
  _DWORD v19[3]; // [esp+10h] [ebp-10h] BYREF
  TechnoClass *v20; // [esp+1Ch] [ebp-4h]

  v3 = *(_DWORD *)(this->occupant + 228); /*0x6ed209*/
  v4 = (Team *)this->customSound_controller[1]; /*0x6ed20f*/
  v19[0] = this; /*0x6ed212*/
  v5 = 0; /*0x6ed216*/
  if ( *(int *)(v3 + 156) <= 0 ) /*0x6ed221*/
  {
LABEL_6:
    v8 = 0; /*0x6ed25a*/
  }
  else
  {
    v6 = 168; /*0x6ed223*/
    while ( 1 ) /*0x6ed228*/
    {
      v7 = *(_DWORD **)(v6 + v3); /*0x6ed228*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7) == 3 ) /*0x6ed235*/
      {
        v3 = v7[376]; /*0x6ed237*/
        if ( v3 > 0 ) /*0x6ed23f*/
          break; /*0x6ed23f*/
      }
      ++v5; /*0x6ed245*/
      v6 += 8; /*0x6ed246*/
      v3 = *(_DWORD *)(*(_DWORD *)(v19[0] + 36) + 228); /*0x6ed24c*/
      if ( v5 >= *(_DWORD *)(v3 + 156) ) /*0x6ed258*/
        goto LABEL_6; /*0x6ed258*/
    }
    v8 = 1; /*0x6ed29e*/
  }
  if ( !v4 ) /*0x6ed25e*/
  {
    *(_BYTE *)(v19[0] + 128) = 1; /*0x6ed2de*/
    return v3; /*0x6ed2e9*/
  }
  while ( 1 ) /*0x6ed264*/
  {
    v3 = (*(int (__thiscall **)(Team *))(*(_DWORD *)v4->__pad_0 + 132))(v4); /*0x6ed264*/
    if ( *(int *)(v3 + 1504) <= 0 ) /*0x6ed272*/
      goto LABEL_15; /*0x6ed272*/
    v9 = *(_DWORD *)&v4[1].__pad_0[40]; /*0x6ed276*/
    v3 = (*(int (__thiscall **)(Team *))(*(_DWORD *)v4->__pad_0 + 132))(v4); /*0x6ed27e*/
    if ( v9 >= *(_DWORD *)(v3 + 1504) ) /*0x6ed28a*/
      goto LABEL_15; /*0x6ed28a*/
    if ( v8 ) /*0x6ed28e*/
      break; /*0x6ed28e*/
    v3 = (*(int (__thiscall **)(Team *))(*(_DWORD *)v4->__pad_0 + 44))(v4); /*0x6ed294*/
    if ( v3 == 1 ) /*0x6ed29a*/
      goto LABEL_17; /*0x6ed29a*/
LABEL_15:
    v4 = *(Team **)&v4[6].__pad_0[80]; /*0x6ed2ae*/
    if ( !v4 ) /*0x6ed2b6*/
    {
      *(_BYTE *)(v19[0] + 128) = 1; /*0x6ed2bf*/
      return v3; /*0x6ed2ca*/
    }
  }
  v3 = (*(int (__thiscall **)(Team *))(*(_DWORD *)v4->__pad_0 + 44))(v4); /*0x6ed2a6*/
  if ( v3 != 2 ) /*0x6ed2ac*/
    goto LABEL_15; /*0x6ed2ac*/
LABEL_17:
  v10 = (TechnoClass *)v4; /*0x6ed2cd*/
  v20 = (TechnoClass *)v4; /*0x6ed2d1*/
  LOBYTE(v3) = Team::AllMembersValid(v4); /*0x6ed2ee*/
  if ( !(_BYTE)v3 ) /*0x6ed2f5*/
  {
    v11 = v19[0]; /*0x6ed2fb*/
    v12 = 1; /*0x6ed2ff*/
    v13 = *(_DWORD *)(v19[0] + 84); /*0x6ed301*/
    if ( v13 ) /*0x6ed306*/
    {
      do /*0x6ed431*/
      {
        if ( *(int *)(v11 + 72) <= 1 ) /*0x6ed310*/
          break; /*0x6ed310*/
        LOBYTE(v3) = *(_BYTE *)(v13 + 144); /*0x6ed31e*/
        if ( (_BYTE)v3 ) /*0x6ed326*/
        {
          if ( *(_DWORD *)(v13 + 108) && (dword_A8E7AC || !*(_BYTE *)(v13 + 129)) && !*(_BYTE *)(v13 + 1673) ) /*0x6ed34e*/
          {
            v14 = *SessionClass::GetEntry(*(SessionClass **)(v11 + 40), v19); /*0x6ed365*/
            if ( v14 == 54 || v14 == 53 ) /*0x6ed36f*/
              v15 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6ed384*/
            else
              v15 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6ed376*/
            if ( ObjectClass::DistanceTo((ObjectClass *)v13, *(_DWORD *)(v11 + 52)) <= v15 ) /*0x6ed397*/
            {
              *(_BYTE *)(v13 + 1673) = 1; /*0x6ed3cf*/
            }
            else if ( !*(_DWORD *)(v13 + 1444) ) /*0x6ed399*/
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v13 + 488))(v13, 2, 0); /*0x6ed3ab*/
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 968))(v13, 0); /*0x6ed3b7*/
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v13 + 1152))(v13, *(_DWORD *)(v11 + 52), 1); /*0x6ed3c7*/
            }
          }
          LOBYTE(v3) = *(_BYTE *)(v13 + 144); /*0x6ed3d6*/
          if ( (_BYTE)v3 ) /*0x6ed3de*/
          {
            v3 = *(_DWORD *)(v13 + 108); /*0x6ed3e0*/
            if ( v3 ) /*0x6ed3e5*/
            {
              if ( dword_A8E7AC || (v3 = *(unsigned __int8 *)(v13 + 129), !(_BYTE)v3) ) /*0x6ed3f8*/
              {
                LOBYTE(v3) = *(_BYTE *)(v13 + 1673); /*0x6ed3fa*/
                if ( (_BYTE)v3 || (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13), v3 == 2) ) /*0x6ed40e*/
                {
                  v16 = v20; /*0x6ed410*/
                  if ( (TechnoClass *)v13 != v20 ) /*0x6ed416*/
                  {
                    v12 = 0; /*0x6ed41c*/
                    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 388))(v13); /*0x6ed41e*/
                    if ( v3 != 7 ) /*0x6ed427*/
                    {
                      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v13 + 488))(v13, 7, 0); /*0x6ed49a*/
                      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 968))(v13, 0); /*0x6ed4a6*/
                      LOBYTE(v3) = (*(char (__thiscall **)(int, TechnoClass *, int))(*(_DWORD *)v13 + 1152))( /*0x6ed4b3*/
                                     v13,
                                     v16,
                                     1);
                      return v3; /*0x6ed4b3*/
                    }
                  }
                }
              }
            }
          }
        }
        v13 = *(_DWORD *)(v13 + 1496); /*0x6ed429*/
      }
      while ( v13 ); /*0x6ed431*/
      if ( !v12 ) /*0x6ed439*/
        return v3; /*0x6ed439*/
      v10 = v20; /*0x6ed43b*/
    }
    v3 = *(_DWORD *)(v11 + 36); /*0x6ed43f*/
    if ( *(_BYTE *)(v3 + 244) ) /*0x6ed442*/
    {
      v19[0] = v10->?[0]; /*0x6ed458*/
      v19[1] = v10->?[1]; /*0x6ed464*/
      v19[2] = v10->?[2]; /*0x6ed46b*/
      v17 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v19); /*0x6ed474*/
      LOBYTE(v3) = TechnoClass::SetFocus(v10, (int)v17); /*0x6ed47c*/
    }
    *(_BYTE *)(v11 + 128) = 1; /*0x6ed481*/
  }
  return v3; /*0x6ed2bc*/
}



// ==== 0x006ED4D0  TechnoClass::ProcessBorderTower  this=TechnoClass  sig=csp ====
void __userpurge sub_6ED4D0(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, int a5)
{
  int v6; // esi
  int v7; // eax
  int v8; // edi
  bool v9; // bl
  bool v10; // al
  int v11; // edi
  int v12; // eax
  int v13; // eax
  char v16; // [esp+Ah] [ebp-12h]
  char v17; // [esp+Bh] [ebp-11h]
  int v18; // [esp+14h] [ebp-8h] BYREF
  char v19; // [esp+18h] [ebp-4h] BYREF

  v17 = 1; /*0x6ed4d7*/
  v6 = *(_DWORD *)(a1 + 84); /*0x6ed4dc*/
  if ( !v6 ) /*0x6ed4e1*/
  {
LABEL_43:
    *(_BYTE *)(a1 + 128) = 1; /*0x6ed758*/
    return; /*0x6ed758*/
  }
  do /*0x6ed748*/
  {
    if ( *(_BYTE *)(v6 + 144) ) /*0x6ed4ef*/
    {
      if ( *(_DWORD *)(v6 + 108) && (dword_A8E7AC || !*(_BYTE *)(v6 + 129)) && !*(_BYTE *)(v6 + 1673) ) /*0x6ed51f*/
      {
        v7 = *SessionClass::GetEntry(*(_DWORD **)(a1 + 40), &v18); /*0x6ed536*/
        if ( v7 == 54 || v7 == 53 ) /*0x6ed540*/
          v8 = *((_DWORD *)dword_8871E0 + 1480); /*0x6ed556*/
        else
          v8 = *((_DWORD *)dword_8871E0 + 1479); /*0x6ed548*/
        if ( ObjectClass::DistanceTo((void *)v6, *(_DWORD *)(a1 + 52)) <= v8 ) /*0x6ed569*/
        {
          *(_BYTE *)(v6 + 1673) = 1; /*0x6ed5a1*/
        }
        else if ( !*(_DWORD *)(v6 + 1444) ) /*0x6ed56b*/
        {
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 488))(v6, 2, 0); /*0x6ed57d*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 968))(v6, 0); /*0x6ed589*/
          (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v6 + 1152))(v6, *(_DWORD *)(a1 + 52), 1); /*0x6ed599*/
        }
      }
      if ( *(_BYTE *)(v6 + 144) /*0x6ed5ec*/
        && *(_DWORD *)(v6 + 108)
        && (dword_A8E7AC || !*(_BYTE *)(v6 + 129))
        && (*(_BYTE *)(v6 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6) == 2) )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6) != 1 /*0x6ed609*/
          || (v16 = 1, !*(_DWORD *)(*(_DWORD *)(v6 + 1732) + 1028)) )
        {
          v16 = 0; /*0x6ed613*/
        }
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6) == 1 && *(_BYTE *)(*(_DWORD *)(v6 + 1732) + 3603); /*0x6ed634*/
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6) == 15 /*0x6ed651*/
           && (unsigned __int8)TechnoClass::GetTypeFlag(v6);
        if ( v16 ) /*0x6ed65d*/
        {
          v17 = 0; /*0x6ed667*/
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 388))(v6) == 16 ) /*0x6ed675*/
            goto LABEL_41; /*0x6ed675*/
          (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v6 + 292))(v6, 0, a3, a2); /*0x6ed681*/
          v11 = **(_DWORD **)(*(_DWORD *)(v6 + 1732) + 1028); /*0x6ed69c*/
          v12 = (*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v6 + 440))(v6, &v18, 0); /*0x6ed6a0*/
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(v11 + 168))( /*0x6ed6b3*/
                  *(_DWORD *)(*(_DWORD *)(v6 + 1732) + 1028),
                  v12) )
          {
            a2 = *(_DWORD *)(v6 + 540); /*0x6ed6c9*/
            v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 440))(v6); /*0x6ed6cd*/
            BuildingClass::ApplyFoundationDamage(v13, (#375 *)&v19); /*0x6ed6e0*/
            a3 = 1; /*0x6ed6e7*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 292))(v6); /*0x6ed6eb*/
            goto LABEL_41; /*0x6ed6f1*/
          }
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 292))(v6, 1); /*0x6ed6f9*/
          a2 = 1; /*0x6ed701*/
          a3 = 0; /*0x6ed703*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 1152))(v6); /*0x6ed707*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 968))(v6, 0); /*0x6ed713*/
LABEL_40:
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 488))(v6, 16, 0); /*0x6ed732*/
          goto LABEL_41; /*0x6ed73a*/
        }
        if ( (v9 || v10) && (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 388))(v6) != 16 ) /*0x6ed730*/
          goto LABEL_40; /*0x6ed730*/
      }
    }
LABEL_41:
    v6 = *(_DWORD *)(v6 + 1496); /*0x6ed740*/
  }
  while ( v6 ); /*0x6ed748*/
  if ( v17 ) /*0x6ed756*/
    goto LABEL_43; /*0x6ed756*/
}



// ==== 0x006ED770  HouseClass::CheckDefeated  this=HouseClass  sig=csp ====
int __thiscall HouseClass::CheckDefeated(HouseClass *this, int a2, char a3)
{
  int v4; // eax
  int repairStationsCapacity; // edx
  int result; // eax
  int v7; // [esp+8h] [ebp-8h]

  if ( a3 ) /*0x6ed77c*/
  {
    v4 = *(_DWORD *)(a2 + 4); /*0x6ed78b*/
    this->repairStationsCapacity = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6ed78e*/
    this->grinders[0] = v7; /*0x6ed797*/
    this->grindersCount = 15 * v4; /*0x6ed79d*/
  }
  HouseClass::EvaluateTarget(this); /*0x6ed7a2*/
  repairStationsCapacity = this->repairStationsCapacity; /*0x6ed7a7*/
  result = this->grindersCount; /*0x6ed7aa*/
  if ( repairStationsCapacity == -1 ) /*0x6ed7b0*/
  {
LABEL_6:
    if ( result ) /*0x6ed7c2*/
      return result; /*0x6ed7c2*/
    goto LABEL_7; /*0x6ed7c2*/
  }
  if ( *(_DWORD *)&stru_A8EB00.?[416] - repairStationsCapacity < result ) /*0x6ed7bc*/
  {
    result -= *(_DWORD *)&stru_A8EB00.?[416] - repairStationsCapacity; /*0x6ed7be*/
    goto LABEL_6; /*0x6ed7be*/
  }
LABEL_7:
  LOBYTE(this->occupiables[0]) = 1; /*0x6ed7c4*/
  return result; /*0x6ed7cb*/
}



// ==== 0x006ED7E0  Mission::AssignTeamMemberMissions  this=Mission  sig=csp ====
char __thiscall AssignTeamMemberMissions(int this, int a2, int a3)
{
  int v3; // eax
  int v4; // ebx
  int *i; // esi
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  int v10; // ebp
  _DWORD *v11; // eax
  int *v12; // eax
  int v13; // ebp
  void *v14; // eax
  int v16; // [esp+1Ch] [ebp-28h] BYREF
  int v17; // [esp+20h] [ebp-24h] BYREF
  _BYTE v18[4]; // [esp+24h] [ebp-20h] BYREF
  int v19; // [esp+28h] [ebp-1Ch] BYREF
  int v20; // [esp+30h] [ebp-14h] BYREF
  _BYTE v21[12]; // [esp+38h] [ebp-Ch] BYREF
  int v22; // [esp+48h] [ebp+4h]

  LOBYTE(v3) = a2; /*0x6ed7e3*/
  v4 = *(_DWORD *)(a2 + 4); /*0x6ed7e9*/
  for ( i = *(int **)(this + 84); i; i = (int *)i[374] )
  {
    LOBYTE(v3) = *((_BYTE *)i + 144); /*0x6ed801*/
    if ( (_BYTE)v3 )
    {
      if ( i[27] && (dword_A8E7AC || !*((_BYTE *)i + 129)) && !*((_BYTE *)i + 1673) ) /*0x6ed831*/
      {
        v7 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v19); /*0x6ed848*/
        if ( v7 == 54 || v7 == 53 ) /*0x6ed852*/
          v8 = dword_8871E0[1].?[1]; /*0x6ed867*/
        else
          v8 = dword_8871E0[1].?[0]; /*0x6ed85a*/
        if ( ObjectClass::DistanceTo(i, *(_DWORD *)(this + 52)) <= v8 ) /*0x6ed87a*/
        {
          *((_BYTE *)i + 1673) = 1; /*0x6ed8b2*/
        }
        else if ( !i[361] ) /*0x6ed87c*/
        {
          (*(void (__thiscall **)(int *, int, _DWORD))(*i + 488))(i, 2, 0); /*0x6ed88e*/
          (*(void (__thiscall **)(int *, _DWORD))(*i + 968))(i, 0); /*0x6ed89a*/
          (*(void (__thiscall **)(int *, _DWORD, int))(*i + 1152))(i, *(_DWORD *)(this + 52), 1); /*0x6ed8aa*/
        }
      }
      LOBYTE(v3) = *((_BYTE *)i + 144); /*0x6ed8b9*/
      if ( (_BYTE)v3 )
      {
        v3 = i[27]; /*0x6ed8c7*/
        if ( v3 )
        {
          if ( dword_A8E7AC || (LOBYTE(v3) = *((_BYTE *)i + 129), !(_BYTE)v3) )
          {
            if ( *((_BYTE *)i + 1673) || (v3 = (*(int (__thiscall **)(int *))(*i + 44))(i), v3 == 2) )
            {
              v3 = i[173]; /*0x6ed903*/
              if ( !v3 )
              {
                if ( i[361]
                  || ((v9 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v20), v9 == 54) || v9 == 53
                    ? (v10 = dword_8871E0[1].?[1])
                    : (v10 = dword_8871E0[1].?[0]),
                      ObjectClass::DistanceTo(i, *(_DWORD *)(this + 52)) <= 2 * v10 || v4 == 11) )
                {
                  v3 = i[173]; /*0x6eda11*/
                  if ( !v3 ) /*0x6eda19*/
                  {
                    v3 = i[361]; /*0x6eda1b*/
                    if ( !v3 ) /*0x6eda23*/
                    {
                      v3 = (*(int (__thiscall **)(int *))(*i + 388))(i); /*0x6eda29*/
                      if ( v3 != v4 ) /*0x6eda31*/
                      {
                        if ( v4 != 5 || (v3 = (*(int (__thiscall **)(int *))(*i + 388))(i), v3 != 16) ) /*0x6eda45*/
                        {
                          TechnoClass::SetFocus(i, 0); /*0x6eda4b*/
                          (*(void (__thiscall **)(int *, int, _DWORD))(*i + 488))(i, v4, 0); /*0x6eda57*/
                          (*(void (__thiscall **)(int *, _DWORD))(*i + 968))(i, 0); /*0x6eda63*/
                          LOBYTE(v3) = (*(int (__thiscall **)(int *, _DWORD, int))(*i + 1152))(i, 0, 1); /*0x6eda71*/
                        }
                      }
                    }
                  }
                }
                else
                {
                  (*(void (__thiscall **)(int *, int, _DWORD))(*i + 488))(i, 2, 0); /*0x6ed97a*/
                  (*(void (__thiscall **)(int *, _DWORD, int))(*i + 1152))(i, *(_DWORD *)(this + 52), 1); /*0x6ed98a*/
                  (*(void (__thiscall **)(int *, int, _DWORD))(*i + 488))(i, 2, 0); /*0x6ed998*/
                  v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 52) + 72))( /*0x6ed9a8*/
                                    *(_DWORD *)(this + 52),
                                    v21);
                  LOWORD(v22) = *v11 / 256; /*0x6ed9bb*/
                  HIWORD(v22) = v11[1] / 256; /*0x6ed9d7*/
                  v16 = v22; /*0x6ed9e4*/
                  v12 = (int *)globalHelper_0DA020(v18, &v16); /*0x6ed9e8*/
                  v13 = *i; /*0x6ed9ef*/
                  v17 = *v12; /*0x6ed9fd*/
                  v14 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v17); /*0x6eda01*/
                  LOBYTE(v3) = (*(int (__thiscall **)(int *, void *, int))(v13 + 1152))(i, v14, 1); /*0x6eda09*/
                }
              }
            }
          }
        }
      }
    }
  }
  return v3; /*0x6eda86*/
}



// ==== 0x006EDB50  TeamClass::AssignAttackTarget  this=TeamClass  sig=csp ====
char __thiscall TeamClass::AssignAttackTarget(TeamClass *this, int a2, int a3)
{
  AbstractClass **p_spawnCell; // edi
  _DWORD *health; // eax
  _DWORD *v6; // edi
  FootClass *i; // esi
  AbstractClass *target; // eax

  p_spawnCell = (AbstractClass **)&this->spawnCell; /*0x6edb57*/
  TeamClass::FindClosestEnemy((int)this, (void **)&this->spawnCell, &this->unknown38); /*0x6edb5c*/
  this->focus = *p_spawnCell; /*0x6edb63*/
  TeamClass::UpdateMembers(this); /*0x6edb68*/
  health = AbstractClass::IsTechnoType(*p_spawnCell); /*0x6edb6f*/
  v6 = health; /*0x6edb74*/
  if ( health ) /*0x6edb78*/
  {
    for ( i = this->firstUnit; i; i = i->nextTeamMember ) /*0x6edb83*/
    {
      LOBYTE(health) = i->?; /*0x6edb89*/
      if ( (_BYTE)health ) /*0x6edb91*/
      {
        health = (_DWORD *)i->?; /*0x6edb97*/
        if ( health ) /*0x6edb9c*/
        {
          if ( dword_A8E7AC || (LOBYTE(health) = i->?, !(_BYTE)health) ) /*0x6edbb3*/
          {
            if ( i->isTeamLeader /*0x6edbcd*/
              || (health = (_DWORD *)(*((int (__thiscall **)(FootClass *))i->TechnoClass + 11))(i), health == (_DWORD *)2) )
            {
              target = i->?; /*0x6edbd3*/
              if ( target && target != (AbstractClass *)v6[173] ) /*0x6edbe3*/
                (*((void (__thiscall **)(FootClass *, _DWORD))i->TechnoClass + 242))(i, 0); /*0x6edbeb*/
              health = (_DWORD *)v6[173]; /*0x6edbf1*/
              if ( health ) /*0x6edbf9*/
              {
                if ( !i->locomotor[0] ) /*0x6edbfb*/
                  WinAPI::Wrapper(-2147467261); /*0x6edc0a*/
                LOBYTE(health) = (*(int (__stdcall **)(int))(*(_DWORD *)i->locomotor[0] + 16))(i->locomotor[0]); /*0x6edc18*/
                if ( !(_BYTE)health ) /*0x6edc1d*/
                {
                  LOBYTE(health) = (*((int (__thiscall **)(FootClass *))i->TechnoClass + 171))(i); /*0x6edc23*/
                  if ( (_BYTE)health ) /*0x6edc2b*/
                  {
                    health = (_DWORD *)(*((int (__thiscall **)(FootClass *))i->TechnoClass + 97))(i); /*0x6edc31*/
                    if ( health == (_DWORD *)5 ) /*0x6edc3a*/
                    {
                      (*((void (__thiscall **)(FootClass *, int, _DWORD))i->TechnoClass + 122))(i, 1, 0); /*0x6edc44*/
                      LOBYTE(health) = (*((int (__thiscall **)(FootClass *, _DWORD))i->TechnoClass + 242))(i, v6[173]); /*0x6edc55*/
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (char)health; /*0x6edc69*/
}



// ==== 0x006EDCA0  TeamClass::SyncMemberFacing  this=TeamClass  sig=csp ====
void __thiscall sub_6EDCA0(int this, int a2, int a3)
{
  int v3; // esi
  char v4; // bl
  int v5; // ebp
  int v6; // edi
  int v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h] BYREF

  v3 = *(_DWORD *)(this + 84); /*0x6edca5*/
  v7 = this; /*0x6edca8*/
  v4 = 1; /*0x6edcae*/
  if ( !v3 ) /*0x6edcb0*/
    goto LABEL_14; /*0x6edcb0*/
  v5 = a2; /*0x6edcb7*/
  do /*0x6edd37*/
  {
    if ( !*(_DWORD *)(v3 + 1652) ) /*0x6edcbc*/
      WinAPI::Wrapper(-2147467261); /*0x6edccb*/
    if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + 1652) + 16))(*(_DWORD *)(v3 + 1652)) ) /*0x6edcd9*/
    {
      v4 = 0; /*0x6edce0*/
    }
    else
    {
      v6 = *(_DWORD *)(v5 + 4); /*0x6edce4*/
      if ( *(_WORD *)ProgressTimer::GetValue((_WORD *)(v3 + 904), &v8) != (_WORD)v6 << 13 ) /*0x6edcfd*/
      {
        if ( !*(_DWORD *)(v3 + 1652) ) /*0x6edd0a*/
          WinAPI::Wrapper(-2147467261); /*0x6edd19*/
        LOWORD(a2) = (unsigned __int16)*(_DWORD *)(v5 + 4) << 13; /*0x6edd05*/
        (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(v3 + 1652) + 76))(*(_DWORD *)(v3 + 1652), a2); /*0x6edd2c*/
      }
    }
    v3 = *(_DWORD *)(v3 + 1496); /*0x6edd2f*/
  }
  while ( v3 ); /*0x6edd37*/
  if ( v4 ) /*0x6edd3d*/
  {
    this = v7; /*0x6edd3f*/
LABEL_14:
    *(_BYTE *)(this + 128) = 1; /*0x6edd43*/
  }
}



// ==== 0x006EDDC0  ObjectClass::method_6EDDC0  this=ObjectClass  sig=csp ====
int __thiscall sub_6EDDC0(ObjectClass *this, int a2, int a3)
{
  _DWORD *v4; // esi
  int result; // eax

  v4 = (_DWORD *)this->customSound_controller[1]; /*0x6eddc4*/
  if ( v4 ) /*0x6eddc9*/
  {
    do /*0x6edde6*/
    {
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v4 + 1312))(v4, *(_DWORD *)(a2 + 4)); /*0x6eddd8*/
      v4 = (_DWORD *)v4[374]; /*0x6eddde*/
    }
    while ( v4 ); /*0x6edde6*/
    this->needsRedraw = 1; /*0x6edde9*/
  }
  else
  {
    this->needsRedraw = 1; /*0x6eddf5*/
  }
  return result; /*0x6eddf0*/
}



// ==== 0x006EDE80  ObjectClass::method_6EDE80  this=ObjectClass  sig=csp ====
void __thiscall sub_6EDE80(ObjectClass *this, int a2, int a3)
{
  this->needsRedraw = 1; /*0x6ede80*/
}



// ==== 0x006EDF10  ObjectClass::method_6EDF10  this=ObjectClass  sig=csp ====
void __thiscall sub_6EDF10(ObjectClass *this, int a2, int a3)
{
  _DWORD *i; // esi
  _DWORD *v5; // eax
  int v6; // [esp+8h] [ebp-14h]
  int v7; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v8[12]; // [esp+10h] [ebp-Ch] BYREF

  for ( i = (_DWORD *)this->customSound_controller[1]; i; i = (_DWORD *)i[374] ) /*0x6edf1c*/
  {
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*i + 72))(i, v8); /*0x6edf27*/
    LOWORD(v6) = *v5 / 256; /*0x6edf3a*/
    HIWORD(v6) = v5[1] / 256; /*0x6edf53*/
    v7 = v6; /*0x6edf60*/
    MapClass::TriggerEVA((__int16 *)&v7); /*0x6edf65*/
  }
  this->needsRedraw = 1; /*0x6edf74*/
}



// ==== 0x006EDF90  ObjectClass::method_6EDF90  this=ObjectClass  sig=csp ====
char __thiscall sub_6EDF90(ObjectClass *this, int a2, int a3)
{
  *(_BYTE *)(this->fallRate + 494) = 1; /*0x6edf95*/
  this->needsRedraw = 1; /*0x6edf9b*/
  return 1; /*0x6edfa1*/
}



// ==== 0x006EDFB0  ObjectClass::method_6EDFB0  this=ObjectClass  sig=csp ====
int __thiscall sub_6EDFB0(ObjectClass *this, int a2, int a3)
{
  int result; // eax

  result = this->fallRate; /*0x6edfb0*/
  *(_DWORD *)(result + 592) = 4; /*0x6edfb3*/
  this->needsRedraw = 1; /*0x6edfbd*/
  return result; /*0x6edfc4*/
}



// ==== 0x006EDFD0  ObjectClass::method_6EDFD0  this=ObjectClass  sig=csp ====
void __thiscall sub_6EDFD0(ObjectClass *this, int a2, int a3)
{
  int v4; // esi
  char v5; // cl
  int v6; // [esp+8h] [ebp-4h] BYREF

  do /*0x6ee038*/
  {
    v4 = this->customSound_controller[1]; /*0x6edfd5*/
    v5 = 0; /*0x6edfd8*/
    if ( !v4 ) /*0x6edfdc*/
      break; /*0x6edfdc*/
    do /*0x6ee034*/
    {
      if ( *(int *)(v4 + 108) > 0 && *(_BYTE *)(v4 + 144) && *(_BYTE *)(v4 + 116) && !*(_BYTE *)(v4 + 129) ) /*0x6edff6*/
      {
        v6 = *(_DWORD *)(v4 + 108); /*0x6ee008*/
        (*(void (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 364))( /*0x6ee024*/
          v4,
          &v6,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          1,
          0,
          0);
        v5 = 1; /*0x6ee02a*/
      }
      v4 = *(_DWORD *)(v4 + 1496); /*0x6ee02c*/
    }
    while ( v4 ); /*0x6ee034*/
  }
  while ( v5 ); /*0x6ee038*/
  this->needsRedraw = 1; /*0x6ee03a*/
}



// ==== 0x006EE050  ObjectClass::method_6EE050  this=ObjectClass  sig=csp ====
int __thiscall sub_6EE050(ObjectClass *this, int a2, int a3)
{
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  int result; // eax

  v4 = (_DWORD *)this->customSound_controller[1]; /*0x6ee054*/
  if ( v4 ) /*0x6ee059*/
  {
    do /*0x6ee07a*/
    {
      v5 = (_DWORD *)v4[374]; /*0x6ee05e*/
      (*(void (__thiscall **)(_DWORD *))(*v4 + 212))(v4); /*0x6ee066*/
      result = (*(int (__thiscall **)(_DWORD *))(*v4 + 248))(v4); /*0x6ee070*/
      v4 = v5; /*0x6ee078*/
    }
    while ( v5 ); /*0x6ee07a*/
    this->needsRedraw = 1; /*0x6ee07d*/
  }
  else
  {
    this->needsRedraw = 1; /*0x6ee089*/
  }
  return result; /*0x6ee084*/
}



// ==== 0x006EE100  TacticalClass::Get  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::Get(TacticalClass *this, int a2, int a3)
{
  _DWORD *v4; // eax
  int result; // eax
  _DWORD v6[2]; // [esp+4h] [ebp-18h] BYREF
  int GroundHeight; // [esp+Ch] [ebp-10h]
  _BYTE v8[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->field34 + 72))(this->field34, v8); /*0x6ee110*/
  v6[0] = *v4; /*0x6ee115*/
  v6[1] = v4[1]; /*0x6ee121*/
  GroundHeight = v4[2]; /*0x6ee12d*/
  GroundHeight = Cell::GetGroundHeight(v6); /*0x6ee140*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6)->flags[0] & 0x100) != 0 /*0x6ee16c*/
    || (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6)->flags[0] & 0x400) != 0 )
  {
    GroundHeight += *(_DWORD *)&g_BuildingLoadQueue_Array.?[15]; /*0x6ee17a*/
  }
  result = TacticalClass::SetPosition((TacticalClass *)g_TacticalClass_Instance, v6, *(_DWORD *)(a2 + 4)); /*0x6ee191*/
  LOBYTE(this->field80) = 1; /*0x6ee196*/
  return result; /*0x6ee19d*/
}



// ==== 0x006EE310  TeamClass::SelectAreaAttackTarget  this=TeamClass  sig=csp ====
char __thiscall TeamClass::SelectAreaAttackTarget(TeamClass *this, int a2, char a3)
{
  int firstUnit; // edi
  #375 *v5; // edx
  int v6; // ebx
  _DWORD *v7; // eax
  int *v8; // esi
  char result; // al

  if ( a3 ) /*0x6ee31b*/
  {
    if ( this->queuedFocus ) /*0x6ee31d*/
      goto LABEL_9; /*0x6ee322*/
    firstUnit = (int)this->firstUnit; /*0x6ee324*/
    if ( firstUnit ) /*0x6ee329*/
    {
      v5 = 0; /*0x6ee336*/
      v6 = *(_DWORD *)(*(_DWORD *)(firstUnit + 540) + 22016); /*0x6ee354*/
      if ( v6 != -1 ) /*0x6ee35d*/
        v5 = (#375 *)*((_DWORD *)stru_A80220.? + v6); /*0x6ee365*/
      v7 = DamageMapClassArea( /*0x6ee376*/
             *((_DWORD *)dword_A83C6C + (unsigned __int16)*(_DWORD *)(a2 + 4)),
             v5,
             firstUnit,
             (unsigned __int16)HIWORD(*(_DWORD *)(a2 + 4)),
             HIBYTE(this->buildingType[2].?));
      if ( v7 ) /*0x6ee37e*/
        TeamClass::SelectMember((int)this, (int)v7); /*0x6ee383*/
    }
  }
  if ( !this->queuedFocus ) /*0x6ee38d*/
  {
LABEL_13:
    result = TeamClass::SelectMember((int)this, 0); /*0x6ee3be*/
    this->stepCompleted = 1; /*0x6ee3c8*/
    return result; /*0x6ee3d1*/
  }
LABEL_9:
  v8 = (int *)this->firstUnit; /*0x6ee38f*/
  if ( !v8 ) /*0x6ee394*/
    goto LABEL_13; /*0x6ee394*/
  while ( *(int *)((*(int (__thiscall **)(int *))(*v8 + 132))(v8) + 1668) > 0 && v8[191] <= 0 ) /*0x6ee3b2*/
  {
    v8 = (int *)v8[374]; /*0x6ee3b4*/
    if ( !v8 ) /*0x6ee3bc*/
      goto LABEL_13; /*0x6ee3bc*/
  }
  return TeamClass::AttackCoordinator(this); /*0x6ee3c7*/
}



// ==== 0x006EE3F0  TeamClass::ProcessTeamMovement  this=TeamClass  sig=csp ====
void __thiscall TeamClass::ProcessTeamMovement(TeamClass *this, int a2, int a3)
{
  TeamClass *v3; // ebp
  FootClass *firstUnit; // esi
  #375 *v5; // edx
  int enemyHouseIndex; // ebx
  _DWORD *v7; // ebx
  int v8; // edi
  int *v9; // ebx
  int v10; // eax
  int v11; // ecx
  int (__thiscall **vtable0)(FootClass *, _BYTE *); // edx
  _DWORD *v13; // eax
  int v14; // eax
  int TileIndex; // [esp-38h] [ebp-64h]
  void *v16; // [esp-Ch] [ebp-38h]
  int v18; // [esp+Ch] [ebp-20h] BYREF
  __int16 v19[2]; // [esp+10h] [ebp-1Ch] BYREF
  __int16 v20[2]; // [esp+14h] [ebp-18h] BYREF
  int v21; // [esp+18h] [ebp-14h] BYREF
  int v22; // [esp+1Ch] [ebp-10h] BYREF
  _BYTE v23[8]; // [esp+20h] [ebp-Ch] BYREF
  int v24; // [esp+28h] [ebp-4h]
  int v25; // [esp+30h] [ebp+4h]

  v3 = this; /*0x6ee3f4*/
  if ( !this->queuedFocus ) /*0x6ee3fb*/
  {
    firstUnit = this->firstUnit; /*0x6ee406*/
    if ( firstUnit ) /*0x6ee40b*/
    {
      v5 = 0; /*0x6ee420*/
      enemyHouseIndex = firstUnit->?->enemyHouseIndex; /*0x6ee43b*/
      if ( enemyHouseIndex != -1 ) /*0x6ee444*/
        v5 = (#375 *)*((_DWORD *)stru_A80220.? + enemyHouseIndex); /*0x6ee44c*/
      v7 = DamageMapClassArea( /*0x6ee462*/
             *((_DWORD *)dword_A83C6C + (unsigned __int16)*(_DWORD *)(a2 + 4)),
             v5,
             (int)firstUnit,
             (unsigned __int16)HIWORD(*(_DWORD *)(a2 + 4)),
             HIBYTE(this->buildingType[2].?));
      if ( v7 ) /*0x6ee466*/
      {
        v8 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 1460); /*0x6ee476*/
        v9 = v7 + 39; /*0x6ee47c*/
        v10 = *v9; /*0x6ee482*/
        v11 = v9[1]; /*0x6ee484*/
        v24 = v9[2]; /*0x6ee48f*/
        LOWORD(v25) = v10 / 256; /*0x6ee4a1*/
        vtable0 = (int (__thiscall **)(FootClass *, _BYTE *))firstUnit->TechnoClass; /*0x6ee4b3*/
        HIWORD(v25) = v11 / 256; /*0x6ee4b8*/
        v21 = v25; /*0x6ee4c1*/
        v18 = 0; /*0x6ee4c7*/
        v13 = (_DWORD *)vtable0[18](firstUnit, v23); /*0x6ee4d6*/
        LOWORD(v25) = *v13 / 256; /*0x6ee4ed*/
        HIWORD(v25) = v13[1] / 256; /*0x6ee50d*/
        LOBYTE(v13) = firstUnit->?; /*0x6ee516*/
        *(_DWORD *)v20 = v25; /*0x6ee520*/
        TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v20, v8, (char)v13); /*0x6ee538*/
        v14 = (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit); /*0x6ee53b*/
        *(_DWORD *)v19 = *LayerClass::Pathfinding_Find( /*0x6ee565*/
                            (Type *)&stru_87F5F0.__pad_58[416],
                            (int)&v22,
                            &v22,
                            (__int16 *)&v21,
                            *(_DWORD *)(v14 + 1660),
                            TileIndex,
                            v8,
                            0,
                            1,
                            1,
                            0,
                            0,
                            0,
                            1,
                            (__int16 *)&v18,
                            0,
                            0);
        if ( *(_DWORD *)v19 == g_BuildingLoadQueue_Array.?[1] ) /*0x6ee569*/
        {
          TeamClass::SelectMember((int)this, 0); /*0x6ee591*/
        }
        else
        {
          v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x6ee588*/
          TeamClass::SelectMember((int)this, (int)v16); /*0x6ee589*/
        }
        v3 = this; /*0x6ee596*/
      }
      if ( !v3->queuedFocus ) /*0x6ee59a*/
        v3->stepCompleted = 1; /*0x6ee5a3*/
    }
  }
  TeamClass::UpdateMembers(v3); /*0x6ee5ac*/
}



// ==== 0x006EE5C0  TeamClass::SelectBestMember  this=TeamClass  sig=csp ====
void __thiscall TeamClass::SelectBestMember(TeamClass *this, int a2, int a3)
{
  TeamClass *v3; // ebp
  FootClass *firstUnit; // esi
  FootClass *v5; // edi
  int v6; // ebx
  int v7; // ebp
  _DWORD *v8; // ebx
  int v9; // edi
  int *v10; // ebx
  int v11; // eax
  int v12; // ecx
  int (__thiscall **vtable0)(FootClass *, _BYTE *); // edx
  _DWORD *v14; // eax
  int v15; // eax
  int TileIndex; // [esp-30h] [ebp-60h]
  void *v17; // [esp-4h] [ebp-34h]
  __int16 v19[2]; // [esp+14h] [ebp-1Ch] BYREF
  __int16 v20[2]; // [esp+18h] [ebp-18h] BYREF
  int v21; // [esp+1Ch] [ebp-14h] BYREF
  int v22; // [esp+20h] [ebp-10h] BYREF
  _BYTE v23[8]; // [esp+24h] [ebp-Ch] BYREF
  int v24; // [esp+2Ch] [ebp-4h]

  v3 = this; /*0x6ee5c9*/
  if ( (_BYTE)a3 ) /*0x6ee5d3*/
  {
    if ( this->queuedFocus ) /*0x6ee5d9*/
      goto LABEL_22; /*0x6ee5de*/
    firstUnit = this->firstUnit; /*0x6ee5e4*/
    if ( firstUnit ) /*0x6ee5e9*/
    {
      v5 = this->firstUnit; /*0x6ee5f9*/
      a3 = -1; /*0x6ee5fb*/
      v6 = (unsigned __int16)HIWORD(*(_DWORD *)(a2 + 4)); /*0x6ee613*/
      a2 = *((_DWORD *)dword_A83C6C + (unsigned __int16)*(_DWORD *)(a2 + 4)); /*0x6ee61b*/
      do /*0x6ee683*/
      {
        v7 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))v5->TechnoClass + 33))(v5) + 1532); /*0x6ee62b*/
        if ( v5 /*0x6ee673*/
          && v5->?
          && v5->?
          && (dword_A8E7AC || !v5->?)
          && (v5->isTeamLeader || (*((int (__thiscall **)(FootClass *))v5->TechnoClass + 11))(v5) == 2)
          && v7 > a3 )
        {
          firstUnit = v5; /*0x6ee675*/
          a3 = v7; /*0x6ee677*/
        }
        v5 = v5->nextTeamMember; /*0x6ee67b*/
      }
      while ( v5 ); /*0x6ee683*/
      v3 = this; /*0x6ee685*/
      v8 = TeamClass::ScoreMember((TeamClass *)a2, firstUnit, v6, 0); /*0x6ee698*/
      if ( v8 ) /*0x6ee69c*/
      {
        v9 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 1460); /*0x6ee6ac*/
        v10 = v8 + 39; /*0x6ee6b2*/
        v11 = *v10; /*0x6ee6bd*/
        v12 = v10[1]; /*0x6ee6bf*/
        v24 = v10[2]; /*0x6ee6c7*/
        LOWORD(a3) = v11 / 256; /*0x6ee6d7*/
        vtable0 = (int (__thiscall **)(FootClass *, _BYTE *))firstUnit->TechnoClass; /*0x6ee6e9*/
        HIWORD(a3) = v12 / 256; /*0x6ee6ee*/
        v21 = a3; /*0x6ee6f7*/
        a2 = 0; /*0x6ee6fd*/
        v14 = (_DWORD *)vtable0[18](firstUnit, v23); /*0x6ee70c*/
        LOWORD(a3) = *v14 / 256; /*0x6ee723*/
        HIWORD(a3) = v14[1] / 256; /*0x6ee743*/
        LOBYTE(v14) = firstUnit->?; /*0x6ee74c*/
        *(_DWORD *)v20 = a3; /*0x6ee756*/
        TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v20, v9, (char)v14); /*0x6ee76e*/
        v15 = (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit); /*0x6ee771*/
        *(_DWORD *)v19 = *LayerClass::Pathfinding_Find( /*0x6ee79b*/
                            (Type *)&stru_87F5F0.__pad_58[416],
                            (int)&v22,
                            &v22,
                            (__int16 *)&v21,
                            *(_DWORD *)(v15 + 1660),
                            TileIndex,
                            v9,
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
        if ( *(_DWORD *)v19 == g_BuildingLoadQueue_Array.?[1] ) /*0x6ee79f*/
        {
          TeamClass::SelectMember((int)this, 0); /*0x6ee7c7*/
        }
        else
        {
          v17 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x6ee7be*/
          TeamClass::SelectMember((int)this, (int)v17); /*0x6ee7bf*/
        }
        v3 = this; /*0x6ee7cc*/
      }
    }
  }
  if ( !v3->queuedFocus ) /*0x6ee7d0*/
  {
    v3->stepCompleted = 1; /*0x6ee7d8*/
    return; /*0x6ee7e5*/
  }
LABEL_22:
  TeamClass::UpdateMembers(v3); /*0x6ee7e8*/
}



// ==== 0x006EE800  ObjectClass::SelectTeamMembers  this=ObjectClass  sig=csp ====
char __thiscall SelectTeamMembers(ObjectClass *this, int a2, int a3)
{
  ObjectClass *v3; // edi
  int fallRate; // eax
  int v5; // edx
  int v6; // ecx
  _BYTE *v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // esi
  int v12; // edx
  _BYTE *v13; // edi
  int v14; // ecx
  int v15; // ebx
  int Capacity; // eax
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // esi
  int v21; // ebx
  int v22; // ebp
  int v23; // edi
  int v24; // eax
  int v25; // edi
  int v26; // eax
  void *v27; // eax
  _DWORD *v28; // esi
  int v29; // ebp
  _DWORD *v30; // ebx
  int v31; // edi
  char result; // al
  char v33; // [esp+13h] [ebp-39h]
  _DWORD *i; // [esp+18h] [ebp-34h] BYREF
  __int16 v36[2]; // [esp+1Ch] [ebp-30h] BYREF
  __int16 v37[2]; // [esp+20h] [ebp-2Ch] BYREF
  _DWORD v38[4]; // [esp+24h] [ebp-28h] BYREF
  VectorClass v39; // [esp+34h] [ebp-18h] BYREF
  int v40; // [esp+44h] [ebp-8h]
  int v41; // [esp+48h] [ebp-4h]

  v3 = this; /*0x6ee807*/
  v33 = 1; /*0x6ee809*/
  if ( this->nextObject ) /*0x6ee812*/
  {
    v28 = (_DWORD *)this->customSound_controller[1]; /*0x6eeaf6*/
    v29 = -1; /*0x6eeaf9*/
    v30 = v28; /*0x6eeafe*/
    if ( v28 ) /*0x6eeb00*/
    {
      do /*0x6eeb60*/
      {
        v31 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v28 + 132))(v28) + 1532); /*0x6eeb0c*/
        if ( *((_BYTE *)v28 + 144) /*0x6eeb52*/
          && v28[27]
          && (dword_A8E7AC || !*((_BYTE *)v28 + 129))
          && (*((_BYTE *)v28 + 1673) || (*(int (__thiscall **)(_DWORD *))(*v28 + 44))(v28) == 2)
          && v31 > v29 )
        {
          v30 = v28; /*0x6eeb54*/
          v29 = v31; /*0x6eeb56*/
        }
        v28 = (_DWORD *)v28[374]; /*0x6eeb58*/
      }
      while ( v28 ); /*0x6eeb60*/
      v3 = this; /*0x6eeb62*/
    }
    if ( v30 && v30[43] != 2 && v30[45] != 2 ) /*0x6eeb7f*/
    {
      Team_Helper((ObjectClass *)v3->fallRate, (int)v3->nextObject); /*0x6eeb88*/
      v3->nextObject = 0; /*0x6eeb8d*/
    }
  }
  else
  {
    fallRate = this->fallRate; /*0x6ee81d*/
    v5 = 0; /*0x6ee820*/
    v6 = *(_DWORD *)(fallRate + 22060); /*0x6ee822*/
    if ( v6 <= 0 ) /*0x6ee82a*/
      goto LABEL_47; /*0x6ee82a*/
    v7 = (_BYTE *)(*(_DWORD *)(fallRate + 22048) + 4); /*0x6ee836*/
    do /*0x6ee843*/
    {
      if ( !*v7 ) /*0x6ee839*/
        ++v5; /*0x6ee83e*/
      v7 += 8; /*0x6ee83f*/
      --v6; /*0x6ee842*/
    }
    while ( v6 ); /*0x6ee843*/
    if ( v5 <= 0 ) /*0x6ee847*/
    {
LABEL_47:
      v33 = 0; /*0x6eeaec*/
    }
    else
    {
      v8 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v5 - 1); /*0x6ee85c*/
      v9 = v3->fallRate; /*0x6ee861*/
      v10 = 0; /*0x6ee864*/
      v11 = *(_DWORD *)(v9 + 22060); /*0x6ee866*/
      if ( v11 <= 0 ) /*0x6ee86e*/
        goto LABEL_17; /*0x6ee86e*/
      v12 = *(_DWORD *)(v9 + 22048); /*0x6ee870*/
      v13 = (_BYTE *)(v12 + 4); /*0x6ee876*/
      while ( *v13 ) /*0x6ee87c*/
      {
LABEL_13:
        ++v10; /*0x6ee883*/
        v13 += 8; /*0x6ee884*/
        if ( v10 >= v11 ) /*0x6ee889*/
          goto LABEL_16; /*0x6ee889*/
      }
      if ( v8 ) /*0x6ee880*/
      {
        --v8; /*0x6ee882*/
        goto LABEL_13; /*0x6ee882*/
      }
      this->nextObject = *(ObjectClass **)(v12 + 8 * v10); /*0x6ee894*/
LABEL_16:
      v3 = this; /*0x6ee897*/
LABEL_17:
      VectorClass::BuildingConstructor(&v39, 0, 0); /*0x6ee89b*/
      v14 = 0; /*0x6ee8ad*/
      v15 = 0; /*0x6ee8af*/
      v39.vtable0 = &DynamicVectorClass<BuildingClass *>::`vftable'; /*0x6ee8b1*/
      v41 = 10; /*0x6ee8bb*/
      v40 = 0; /*0x6ee8c3*/
      if ( stru_A8EB00.ObjectTypeClass[20] > 0 ) /*0x6ee8c7*/
      {
        Capacity = v39.Capacity; /*0x6ee8c9*/
        do /*0x6ee8d6*/
        {
          v17 = stru_A8EB00.ObjectTypeClass[17] + 4 * v15; /*0x6ee8d6*/
          if ( v3->nextObject == *(ObjectClass **)(*(_DWORD *)v17 + 540) ) /*0x6ee8e2*/
          {
            if ( v14 < Capacity ) /*0x6ee8e6*/
              goto LABEL_25; /*0x6ee8e6*/
            if ( !v39.IsAllocated && Capacity || v41 <= 0 ) /*0x6ee8fa*/
              goto LABEL_27; /*0x6ee8fa*/
            if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v39.vtable0 + 2))( /*0x6ee909*/
                   &v39,
                   v41 + Capacity,
                   0) )
            {
LABEL_25:
              v18 = v40++; /*0x6ee918*/
              *((_DWORD *)v39.Items + v18) = *(_DWORD *)v17; /*0x6ee921*/
            }
            Capacity = v39.Capacity; /*0x6ee924*/
          }
LABEL_27:
          ++v15; /*0x6ee928*/
          v14 = v40; /*0x6ee931*/
        }
        while ( v15 < stru_A8EB00.ObjectTypeClass[20] ); /*0x6ee8d6*/
      }
      if ( v14 <= 0 ) /*0x6ee939*/
      {
        Team_Helper((ObjectClass *)v3->fallRate, (int)v3->nextObject); /*0x6eeab2*/
        v3->nextObject = 0; /*0x6eeab7*/
      }
      else
      {
        v19 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v14 - 1); /*0x6ee94e*/
        v20 = v3->customSound_controller[1]; /*0x6ee957*/
        v21 = -1; /*0x6ee95a*/
        v22 = v20; /*0x6ee95d*/
        for ( i = (_DWORD *)*((_DWORD *)v39.Items + v19); v20; v20 = *(_DWORD *)(v20 + 1496) ) /*0x6ee968*/
        {
          v23 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v20 + 132))(v20) + 1532); /*0x6ee974*/
          if ( *(_BYTE *)(v20 + 144) /*0x6ee9ba*/
            && *(_DWORD *)(v20 + 108)
            && (dword_A8E7AC || !*(_BYTE *)(v20 + 129))
            && (*(_BYTE *)(v20 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 44))(v20) == 2)
            && v23 > v21 )
          {
            v22 = v20; /*0x6ee9bc*/
            v21 = v23; /*0x6ee9be*/
          }
        }
        v36[0] = 0; /*0x6ee9ce*/
        v36[1] = 0; /*0x6ee9d3*/
        v24 = i[39]; /*0x6ee9ec*/
        v25 = i[40]; /*0x6ee9ee*/
        v38[3] = i[41]; /*0x6ee9f4*/
        LOWORD(i) = v24 / 256; /*0x6eea04*/
        HIWORD(i) = v25 / 256; /*0x6eea21*/
        v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 132))(v22); /*0x6eea3d*/
        *(_DWORD *)v37 = *LayerClass::Pathfinding_Find( /*0x6eea67*/
                            (Type *)&stru_87F5F0.__pad_58[416],
                            (int)&i,
                            v38,
                            (__int16 *)&i,
                            *(_DWORD *)(v26 + 1660),
                            -1,
                            0,
                            0,
                            1,
                            1,
                            0,
                            0,
                            0,
                            1,
                            v36,
                            0,
                            0);
        if ( *(_DWORD *)v37 == g_BuildingLoadQueue_Array.?[1] ) /*0x6eea6b*/
        {
          TeamClass::SelectMember((int)this, 0); /*0x6eeaa0*/
        }
        else
        {
          v27 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v37); /*0x6eea85*/
          TeamClass::SelectMember((int)this, (int)v27); /*0x6eea8f*/
        }
        v3 = this; /*0x6eeaa5*/
      }
      v39.vtable0 = &VectorClass<BuildingClass *>::`vftable'; /*0x6eeac2*/
      if ( v39.Items && v39.IsAllocated ) /*0x6eead8*/
        __3_YAXPAX_Z(v39.Items); /*0x6eeadf*/
    }
  }
  TeamClass::UpdateMembers((TeamClass *)v3); /*0x6eeb96*/
  result = v33; /*0x6eeb9b*/
  if ( v33 ) /*0x6eeba1*/
    v3->needsRedraw = 0; /*0x6eeba3*/
  else
    v3->needsRedraw = 1; /*0x6eebb4*/
  return result; /*0x6eebaa*/
}



// ==== 0x006EEBD0  DamageMapClassArea  this=FootClass  sig=csp ====
_DWORD *__fastcall MapClass_DamageArea(int a1, #375 *a2, int a3, int a4, char a5)
{
  int v5; // ecx
  _DWORD *result; // eax
  _DWORD *v7; // esi
  #375 *v8; // eax
  int v9; // edi
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // edx
  _DWORD *v13; // eax
  int v14; // edx
  int TileData; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // ebx
  int v19; // ecx
  int v20; // edx
  double v21; // st7
  int v22; // eax
  int v23; // edi
  int v24; // ebx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  double v29; // st7
  bool v30; // [esp+1Bh] [ebp-75h]
  int v31; // [esp+1Ch] [ebp-74h]
  int v32; // [esp+20h] [ebp-70h]
  int v33; // [esp+24h] [ebp-6Ch]
  int v34; // [esp+28h] [ebp-68h]
  int v35; // [esp+2Ch] [ebp-64h]
  _DWORD *v36; // [esp+30h] [ebp-60h]
  _DWORD *v37; // [esp+34h] [ebp-5Ch]
  int v40; // [esp+40h] [ebp-50h] BYREF
  int v41; // [esp+44h] [ebp-4Ch] BYREF
  int v42; // [esp+48h] [ebp-48h]
  int v43; // [esp+4Ch] [ebp-44h]
  int v44; // [esp+50h] [ebp-40h]
  int v45; // [esp+54h] [ebp-3Ch]
  int v46; // [esp+58h] [ebp-38h]
  int v47; // [esp+5Ch] [ebp-34h]
  int v48; // [esp+68h] [ebp-28h]
  int v49; // [esp+74h] [ebp-1Ch]
  char v50[12]; // [esp+78h] [ebp-18h] BYREF
  char v51[12]; // [esp+84h] [ebp-Ch] BYREF

  v5 = 0; /*0x6eebe4*/
  v31 = -1; /*0x6eebe6*/
  v32 = -1; /*0x6eebea*/
  result = 0; /*0x6eebf5*/
  v36 = 0; /*0x6eebfb*/
  v37 = 0; /*0x6eebff*/
  v35 = 0; /*0x6eec03*/
  if ( dword_A8EB50 <= 0 ) /*0x6eec07*/
  {
LABEL_22:
    if ( !a5 ) /*0x6eee74*/
      return v37; /*0x6eee76*/
    return result; /*0x6eee76*/
  }
  do /*0x6eee55*/
  {
    v7 = (_DWORD *)*((_DWORD *)dword_A8EB44 + v5); /*0x6eec1a*/
    v8 = (#375 *)v7[135]; /*0x6eec1d*/
    v30 = v8 == a2; /*0x6eec30*/
    if ( v7[328] != a1 ) /*0x6eec34*/
      goto LABEL_19; /*0x6eec34*/
    if ( v8 == a2 ) /*0x6eec3c*/
    {
      v9 = a3; /*0x6eec6a*/
    }
    else
    {
      v9 = a3; /*0x6eec3e*/
      if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(a3 + 540), v8) /*0x6eec62*/
        && !*(_BYTE *)(*(_DWORD *)(v7[135] + 52) + 422) )
      {
        goto LABEL_19; /*0x6eec62*/
      }
    }
    v10 = -1; /*0x6eec70*/
    switch ( a4 ) /*0x6eec7c*/
    {
      case 0: /*0x6eec7c*/
        v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v7 + 72))(v7, v50); /*0x6eec8c*/
        LOWORD(v33) = *v11 / 256; /*0x6eec9f*/
        v12 = *(_DWORD *)(v9 + 540); /*0x6eecb0*/
        HIWORD(v33) = v11[1] / 256; /*0x6eecb9*/
        v40 = v33; /*0x6eecc6*/
        v10 = 0x7FFFFFFF - CellClass::GetTileData((__int16 *)&v40, v12); /*0x6eecdb*/
        break; /*0x6eecdd*/
      case 1: /*0x6eec7c*/
        v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v7 + 72))(v7, v51); /*0x6eeceb*/
        LOWORD(v34) = *v13 / 256; /*0x6eecfe*/
        v14 = *(_DWORD *)(v9 + 540); /*0x6eed0f*/
        HIWORD(v34) = v13[1] / 256; /*0x6eed18*/
        v41 = v34; /*0x6eed25*/
        TileData = CellClass::GetTileData((__int16 *)&v41, v14); /*0x6eed30*/
        goto LABEL_13; /*0x6eed35*/
      case 2: /*0x6eec7c*/
        v16 = v9 + 156; /*0x6eed46*/
        v17 = *(_DWORD *)(v9 + 156); /*0x6eed4b*/
        v18 = *(_DWORD *)(v16 + 4); /*0x6eed4d*/
        v48 = *(_DWORD *)(v16 + 8); /*0x6eed53*/
        v19 = v7[40]; /*0x6eed5d*/
        v42 = v7[39] - v17; /*0x6eed60*/
        v20 = v7[41]; /*0x6eed6a*/
        v43 = v19 - v18; /*0x6eed6d*/
        v44 = v20 - v48; /*0x6eed77*/
        v21 = Math::Sqrt( /*0x6eed9c*/
                (double)v42 * (double)v42
              + (double)(v20 - v48) * (double)(v20 - v48)
              + (double)(v19 - v18) * (double)(v19 - v18));
        v10 = 0x7FFFFFFF - Math::RoundToInt(v21); /*0x6eedae*/
        break; /*0x6eedb0*/
      case 3: /*0x6eec7c*/
        v22 = v9 + 156; /*0x6eedbe*/
        v23 = *(_DWORD *)(v9 + 156); /*0x6eedc3*/
        v24 = *(_DWORD *)(v22 + 4); /*0x6eedc5*/
        v25 = *(_DWORD *)(v22 + 8); /*0x6eedc8*/
        v26 = v7[39]; /*0x6eedcb*/
        v49 = v25; /*0x6eedcd*/
        v27 = v7[40] - v24; /*0x6eedda*/
        v45 = v26 - v23; /*0x6eeddc*/
        v28 = v7[41]; /*0x6eede0*/
        v46 = v27; /*0x6eede3*/
        v47 = v28 - v49; /*0x6eeded*/
        v29 = Math::Sqrt( /*0x6eee12*/
                (double)(v26 - v23) * (double)(v26 - v23)
              + (double)(v28 - v49) * (double)(v28 - v49)
              + (double)v27 * (double)v27);
        TileData = Math::RoundToInt(v29); /*0x6eee1a*/
LABEL_13:
        v10 = TileData; /*0x6eee1f*/
        break; /*0x6eee1f*/
      default:
        break;
    }
    if ( v10 > v31 && v30 ) /*0x6eee2d*/
    {
      v36 = v7; /*0x6eee2f*/
      v31 = v10; /*0x6eee33*/
    }
    if ( v10 > v32 ) /*0x6eee3b*/
    {
      v37 = v7; /*0x6eee3d*/
      v32 = v10; /*0x6eee41*/
    }
LABEL_19:
    v5 = ++v35; /*0x6eee45*/
  }
  while ( v35 < dword_A8EB50 ); /*0x6eee55*/
  result = v36; /*0x6eee5b*/
  if ( !v36 || v31 <= v32 ) /*0x6eee6d*/
    goto LABEL_22; /*0x6eee6d*/
  return result; /*0x6eee7a*/
}



// ==== 0x006EEEA0  TeamClass::ScoreMember  this=TeamClass  sig=csp ====
_DWORD *__thiscall TeamClass::ScoreMember(TeamClass *this, _DWORD *a2, int a3, int a4)
{
  double v4; // st7
  _DWORD *result; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // edx
  _DWORD *v9; // esi
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // edx
  _DWORD *v13; // eax
  int v14; // edx
  int TileData; // eax
  int v16; // ebx
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ebx
  int v21; // ecx
  int v22; // edx
  double v23; // [esp+0h] [ebp-88h]
  double v24; // [esp+0h] [ebp-88h]
  int v25; // [esp+18h] [ebp-70h]
  int v26; // [esp+1Ch] [ebp-6Ch]
  int v27; // [esp+20h] [ebp-68h]
  _DWORD *v28; // [esp+24h] [ebp-64h]
  int v29; // [esp+28h] [ebp-60h]
  int v30; // [esp+2Ch] [ebp-5Ch]
  int v32; // [esp+34h] [ebp-54h] BYREF
  int v33; // [esp+38h] [ebp-50h] BYREF
  int v34; // [esp+3Ch] [ebp-4Ch]
  int v35; // [esp+40h] [ebp-48h]
  int v36; // [esp+44h] [ebp-44h]
  int v37; // [esp+48h] [ebp-40h]
  int v38; // [esp+4Ch] [ebp-3Ch]
  int v39; // [esp+50h] [ebp-38h]
  int v40; // [esp+54h] [ebp-34h]
  int v41; // [esp+5Ch] [ebp-2Ch]
  int v42; // [esp+60h] [ebp-28h]
  int v43; // [esp+68h] [ebp-20h]
  int v44; // [esp+6Ch] [ebp-1Ch]
  char v45[12]; // [esp+70h] [ebp-18h] BYREF
  char v46[12]; // [esp+7Ch] [ebp-Ch] BYREF

  result = 0; /*0x6eeeb3*/
  v6 = a2[135]; /*0x6eeeb5*/
  v7 = 0; /*0x6eeebb*/
  v28 = 0; /*0x6eeebd*/
  v27 = -1; /*0x6eeec1*/
  v30 = v6; /*0x6eeecc*/
  v34 = *(_DWORD *)(v6 + 120); /*0x6eeed2*/
  v29 = 0; /*0x6eeed6*/
  if ( v34 > 0 ) /*0x6eeeda*/
  {
    v8 = a3; /*0x6eeee0*/
    while ( 1 ) /*0x6eeeef*/
    {
      v9 = *(_DWORD **)(*(_DWORD *)(v6 + 108) + 4 * v7); /*0x6eeeef*/
      if ( (TeamClass *)v9[328] == this ) /*0x6eeefc*/
      {
        v10 = -1; /*0x6eef02*/
        switch ( v8 ) /*0x6eef0e*/
        {
          case 0: /*0x6eef0e*/
            v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v9 + 72))(v9, v45); /*0x6eef1e*/
            LOWORD(v25) = *v11 / 256; /*0x6eef31*/
            v12 = a2[135]; /*0x6eef42*/
            HIWORD(v25) = v11[1] / 256; /*0x6eef4b*/
            v32 = v25; /*0x6eef58*/
            v10 = 0x7FFFFFFF - CellClass::GetTileData((__int16 *)&v32, v12); /*0x6eef6d*/
            break; /*0x6eef6f*/
          case 1: /*0x6eef0e*/
            v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v9 + 72))(v9, v46); /*0x6eef7d*/
            LOWORD(v26) = *v13 / 256; /*0x6eef90*/
            v14 = a2[135]; /*0x6eefa1*/
            HIWORD(v26) = v13[1] / 256; /*0x6eefaa*/
            v33 = v26; /*0x6eefb7*/
            TileData = CellClass::GetTileData((__int16 *)&v33, v14); /*0x6eefc2*/
            goto LABEL_10; /*0x6eefc7*/
          case 2: /*0x6eef0e*/
            v16 = a2[39]; /*0x6eefd5*/
            v41 = a2[40]; /*0x6eefda*/
            v42 = a2[41]; /*0x6eefe9*/
            v17 = v9[40]; /*0x6eeff5*/
            v35 = v9[39] - v16; /*0x6eeff8*/
            v18 = v9[41]; /*0x6eeffe*/
            v36 = v17 - v41; /*0x6ef001*/
            __asm { fild [esp+88h+var_44] } /*0x6ef009*/
            v37 = v18 - v42; /*0x6ef00f*/
            __asm /*0x6ef013*/
            {
              fild [esp+88h+var_40]
              fild [esp+88h+var_48]
              fld st
              fmul st, st(1)
              fld st(2)
              fmul st, st(3)
              faddp st(1), st
              fld st(3)
              fmul st, st(4)
              faddp st(1), st
              fstp [esp+88h+var_88]; double
              fstp st
              fstp st
              fstp st
            }
            Math::Sqrt(v23); /*0x6ef034*/
            LOWORD(v19) = Math::RoundToInt(v4); /*0x6ef03c*/
            v10 = 0x7FFFFFFF - v19; /*0x6ef046*/
            break; /*0x6ef048*/
          case 3: /*0x6eef0e*/
            v20 = a2[39]; /*0x6ef053*/
            v43 = a2[40]; /*0x6ef058*/
            v44 = a2[41]; /*0x6ef065*/
            v21 = v9[40]; /*0x6ef073*/
            v38 = v9[39] - v20; /*0x6ef076*/
            v22 = v9[41]; /*0x6ef07e*/
            v39 = v21 - v43; /*0x6ef083*/
            __asm { fild [esp+88h+var_38] } /*0x6ef089*/
            v40 = v22 - v44; /*0x6ef08d*/
            __asm /*0x6ef091*/
            {
              fild [esp+88h+var_34]
              fild [esp+88h+var_3C]
              fld st
              fmul st, st(1)
              fld st(2)
              fmul st, st(3)
              faddp st(1), st
              fld st(3)
              fmul st, st(4)
              faddp st(1), st
              fstp [esp+88h+var_88]; double
              fstp st
              fstp st
              fstp st
            }
            Math::Sqrt(v24); /*0x6ef0b2*/
            LOWORD(TileData) = Math::RoundToInt(v4); /*0x6ef0ba*/
LABEL_10:
            v10 = TileData; /*0x6ef0bf*/
            break; /*0x6ef0bf*/
          default:
            break;
        }
        if ( v10 <= v27 ) /*0x6ef0c5*/
        {
          result = v28; /*0x6ef0d3*/
        }
        else
        {
          result = v9; /*0x6ef0c7*/
          v27 = v10; /*0x6ef0c9*/
          v28 = v9; /*0x6ef0cd*/
        }
      }
      v7 = ++v29; /*0x6ef0df*/
      if ( v29 >= v34 ) /*0x6ef0e6*/
        break; /*0x6ef0e6*/
      v8 = a3; /*0x6eeee5*/
      v6 = v30; /*0x6eeee8*/
    }
  }
  return result; /*0x6ef0ec*/
}



// ==== 0x006EF110  ObjectClass::DispatchTeamOrders  this=ObjectClass  sig=csp ====
char __thiscall DispatchTeamOrders(ObjectClass *this, int a2, int a3)
{
  ObjectClass *v3; // ebx
  int v4; // esi
  int v5; // ebp
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // eax
  CellClass *v9; // eax
  int v10; // eax
  TechnoClass *v11; // esi
  int v12; // ebp
  int v13; // edi
  int v14; // ebx
  _DWORD *v15; // edi
  TechnoClass *v16; // ebp
  char v18; // [esp+19h] [ebp-19h]
  int v20; // [esp+1Eh] [ebp-14h] BYREF
  _BYTE v21[12]; // [esp+26h] [ebp-Ch] BYREF
  char v22; // [esp+36h] [ebp+4h]

  v3 = this; /*0x6ef114*/
  v4 = this->customSound_controller[1]; /*0x6ef118*/
  v18 = 1; /*0x6ef122*/
  if ( !v4 ) /*0x6ef127*/
    goto LABEL_28; /*0x6ef127*/
  do /*0x6ef2ab*/
  {
    v5 = *(_DWORD *)(v4 + 1496); /*0x6ef12d*/
    if ( v4 && *(_BYTE *)(v4 + 144) ) /*0x6ef13b*/
    {
      if ( *(_DWORD *)(v4 + 108) && (dword_A8E7AC || !*(_BYTE *)(v4 + 129)) && !*(_BYTE *)(v4 + 1673) ) /*0x6ef16b*/
      {
        v6 = *SessionClass::GetEntry((SessionClass *)v3->owningHouseIndex, &v20); /*0x6ef182*/
        if ( v6 == 54 || v6 == 53 ) /*0x6ef18c*/
          v7 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6ef1a2*/
        else
          v7 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6ef194*/
        if ( ObjectClass::DistanceTo((ObjectClass *)v4, (int)v3->attachedTag) <= v7 ) /*0x6ef1b5*/
        {
          *(_BYTE *)(v4 + 1673) = 1; /*0x6ef1ed*/
        }
        else if ( !*(_DWORD *)(v4 + 1444) ) /*0x6ef1b7*/
        {
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 488))(v4, 2, 0); /*0x6ef1c9*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 968))(v4, 0); /*0x6ef1d5*/
          (*(void (__thiscall **)(int, TagClass *, int))(*(_DWORD *)v4 + 1152))(v4, v3->attachedTag, 1); /*0x6ef1e5*/
        }
      }
      if ( *(_BYTE *)(v4 + 144) /*0x6ef238*/
        && *(_DWORD *)(v4 + 108)
        && (dword_A8E7AC || !*(_BYTE *)(v4 + 129))
        && (*(_BYTE *)(v4 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 2) )
      {
        if ( *(_DWORD *)(v4 + 280) ) /*0x6ef23a*/
        {
          v18 = 0; /*0x6ef24d*/
          v8 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v21); /*0x6ef252*/
          v9 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v8); /*0x6ef25b*/
          if ( !Cell::IsBridge((Cell *)v9) && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 388))(v4) != 16 ) /*0x6ef278*/
          {
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v4 + 1152))(v4, 0, 1); /*0x6ef282*/
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 968))(v4, 0); /*0x6ef28e*/
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 488))(v4, 16, 0); /*0x6ef29c*/
            v18 = 0; /*0x6ef2a2*/
          }
        }
      }
    }
    v4 = v5; /*0x6ef2a9*/
  }
  while ( v5 ); /*0x6ef2ab*/
  LOBYTE(v10) = v18; /*0x6ef2b1*/
  if ( v18 ) /*0x6ef2b7*/
  {
LABEL_28:
    v11 = (TechnoClass *)v3->customSound_controller[1]; /*0x6ef2c4*/
    v12 = 0; /*0x6ef2c7*/
    v10 = *(_DWORD *)(v3->occupant + 228); /*0x6ef2c9*/
    v13 = *(_DWORD *)(a2 + 4); /*0x6ef2cf*/
    v20 = v13; /*0x6ef2d2*/
    if ( *(int *)(v10 + 156) <= 0 ) /*0x6ef2de*/
    {
LABEL_34:
      v22 = 0; /*0x6ef323*/
    }
    else
    {
      v14 = 168; /*0x6ef2e0*/
      while ( 1 ) /*0x6ef2e5*/
      {
        v15 = *(_DWORD **)(v14 + v10); /*0x6ef2e5*/
        if ( (*(int (__thiscall **)(_DWORD *))(*v15 + 44))(v15) == 3 ) /*0x6ef2f2*/
        {
          v10 = v15[376]; /*0x6ef2f4*/
          if ( v10 > 0 ) /*0x6ef2fc*/
            break; /*0x6ef2fc*/
        }
        ++v12; /*0x6ef306*/
        v14 += 8; /*0x6ef307*/
        v10 = *(_DWORD *)(this->occupant + 228); /*0x6ef30d*/
        if ( v12 >= *(_DWORD *)(v10 + 156) ) /*0x6ef319*/
        {
          v13 = v20; /*0x6ef31b*/
          v3 = this; /*0x6ef31f*/
          goto LABEL_34; /*0x6ef31f*/
        }
      }
      v13 = v20; /*0x6ef3e7*/
      v3 = this; /*0x6ef3eb*/
      v22 = 1; /*0x6ef3ef*/
    }
    if ( v11 ) /*0x6ef32a*/
    {
      while ( 1 ) /*0x6ef332*/
      {
        v16 = *(TechnoClass **)&v11[1].?; /*0x6ef332*/
        v10 = (*((int (__thiscall **)(TechnoClass *))v11->RadioClass + 33))(v11); /*0x6ef33a*/
        if ( !*(_DWORD *)(v10 + 1504) ) /*0x6ef340*/
          break; /*0x6ef340*/
        if ( v22 ) /*0x6ef354*/
        {
          v10 = (*((int (__thiscall **)(TechnoClass *))v11->RadioClass + 11))(v11); /*0x6ef35a*/
          if ( v10 != 2 ) /*0x6ef360*/
            break; /*0x6ef360*/
        }
        v10 = (*((int (__thiscall **)(TechnoClass *))v11->RadioClass + 33))(v11); /*0x6ef36a*/
        if ( *(int *)(v10 + 1504) > 0 ) /*0x6ef378*/
        {
          LOBYTE(v10) = *(_BYTE *)(v3->occupant + 244); /*0x6ef381*/
          if ( (_BYTE)v10 ) /*0x6ef389*/
          {
            TeamClass::LiberateMember_Start((int *)v3, (int)v11, 0xFFFFFFFF, 0); /*0x6ef392*/
            (*((void (__thiscall **)(TechnoClass *, _DWORD))v11->RadioClass + 242))(v11, 0); /*0x6ef39d*/
            (*((void (__thiscall **)(TechnoClass *, AbstractClass *, int))v11->RadioClass + 288))(v11, v11->focus, 1); /*0x6ef3b0*/
            (*((void (__thiscall **)(TechnoClass *, int, _DWORD))v11->RadioClass + 122))(v11, 2, 0); /*0x6ef3be*/
            if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))v11->RadioClass + 128))(v11) ) /*0x6ef3c8*/
              (*((void (__thiscall **)(TechnoClass *))v11->RadioClass + 123))(v11); /*0x6ef3d6*/
            LOBYTE(v10) = TechnoClass::SetFocus(v11, 0); /*0x6ef3e0*/
            goto LABEL_51; /*0x6ef3e5*/
          }
          if ( v13 == 3 || v13 == 2 ) /*0x6ef401*/
            goto LABEL_50; /*0x6ef401*/
        }
LABEL_51:
        v11 = v16; /*0x6ef435*/
        if ( !v16 ) /*0x6ef439*/
          goto LABEL_52; /*0x6ef439*/
      }
      if ( v13 != 1 && v13 != 3 ) /*0x6ef40d*/
        goto LABEL_51; /*0x6ef40d*/
LABEL_50:
      TeamClass::LiberateMember_Start((int *)v3, (int)v11, 0xFFFFFFFF, 0); /*0x6ef40f*/
      (*((void (__thiscall **)(TechnoClass *, _DWORD))v11->RadioClass + 242))(v11, 0); /*0x6ef421*/
      LOBYTE(v10) = (*((int (__thiscall **)(TechnoClass *, _DWORD, int))v11->RadioClass + 288))(v11, 0, 1); /*0x6ef42f*/
      goto LABEL_51; /*0x6ef42f*/
    }
LABEL_52:
    v3->needsRedraw = 1; /*0x6ef43f*/
  }
  return v10; /*0x6ef446*/
}



// ==== 0x006EF450  ObjectClass::method_6EF450  this=ObjectClass  sig=csp ====
char __thiscall sub_6EF450(ObjectClass *this, int a2, int a3)
{
  this->needsRedraw = 1; /*0x6ef452*/
  this->hasParachute = 1; /*0x6ef458*/
  return 1; /*0x6ef45e*/
}



// ==== 0x006EF470  ObjectClass::Team_Create  this=ObjectClass  sig=csp ====
char __thiscall Team_Create(ObjectClass *this)
{
  int v2; // edi
  int v3; // eax
  int i; // ebx
  int *v5; // esi

  v2 = 0; /*0x6ef476*/
  v3 = *(_DWORD *)(this->occupant + 228); /*0x6ef47b*/
  if ( *(int *)(v3 + 156) <= 0 ) /*0x6ef489*/
    return 0; /*0x6ef4be*/
  for ( i = 168; ; i += 8 ) /*0x6ef48b*/
  {
    v5 = *(int **)(i + v3); /*0x6ef490*/
    if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 3 && v5[376] > 0 ) /*0x6ef4a7*/
      break; /*0x6ef4a7*/
    ++v2; /*0x6ef4ac*/
    v3 = *(_DWORD *)(this->occupant + 228); /*0x6ef4b0*/
    if ( v2 >= *(_DWORD *)(v3 + 156) ) /*0x6ef4bc*/
      return 0; /*0x6ef4bc*/
  }
  return 1; /*0x6ef4be*/
}



// ==== 0x006EF4D0  HouseClass::UpdateProductionQueue  this=HouseClass  sig=csp ====
int __thiscall HouseClass::UpdateProductionQueue(HouseClass *this, int a2)
{
  int v3; // esi
  int v4; // edi
  int result; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  _DWORD *i; // edi
  int v13; // ecx
  int v14; // ecx

  v3 = a2; /*0x6ef4d4*/
  v4 = 0; /*0x6ef4dc*/
  result = *(_DWORD *)(this->arrayIndex + 228); /*0x6ef4de*/
  if ( *(int *)(result + 156) > 0 ) /*0x6ef4ec*/
  {
    do /*0x6ef55b*/
    {
      v6 = *(_DWORD *)(result + 8 * v4 + 168); /*0x6ef4ef*/
      v7 = *(_DWORD *)(result + 8 * v4 + 164); /*0x6ef4f6*/
      if ( v7 > 0 ) /*0x6ef4ff*/
      {
        a2 = v7; /*0x6ef501*/
        do /*0x6ef549*/
        {
          v8 = *(_DWORD *)(v3 + 8); /*0x6ef505*/
          if ( *(_DWORD *)(v3 + 16) < v8 /*0x6ef52a*/
            || (*(_BYTE *)(v3 + 13) || !v8)
            && (v9 = *(_DWORD *)(v3 + 20), v9 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 8))(v3, v8 + v9, 0) )
          {
            v10 = *(_DWORD *)(v3 + 16); /*0x6ef531*/
            v11 = *(_DWORD *)(v3 + 4); /*0x6ef534*/
            *(_DWORD *)(v3 + 16) = v10 + 1; /*0x6ef53a*/
            *(_DWORD *)(v11 + 4 * v10) = v6; /*0x6ef53d*/
          }
          --a2; /*0x6ef545*/
        }
        while ( a2 ); /*0x6ef549*/
      }
      ++v4; /*0x6ef54e*/
      result = *(_DWORD *)(this->arrayIndex + 228); /*0x6ef54f*/
    }
    while ( v4 < *(_DWORD *)(result + 156) ); /*0x6ef55b*/
  }
  for ( i = (_DWORD *)this->repairStationsCount; i; i = (_DWORD *)i[374] ) /*0x6ef563*/
  {
    a2 = (*(int (__thiscall **)(_DWORD *))(*i + 132))(i); /*0x6ef573*/
    result = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v3 + 16))(v3, &a2); /*0x6ef57c*/
    if ( result != -1 ) /*0x6ef582*/
    {
      v13 = *(_DWORD *)(v3 + 16); /*0x6ef584*/
      if ( result < v13 ) /*0x6ef589*/
      {
        v14 = v13 - 1; /*0x6ef58b*/
        for ( *(_DWORD *)(v3 + 16) = v14; /*0x6ef591*/
              result < *(_DWORD *)(v3 + 16);
              *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * result - 4) = *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * result) )
        {
          ++result; /*0x6ef596*/
        }
      }
    }
  }
  return result; /*0x6ef5af*/
}



// ==== 0x006EF5F0  TeamTypeClass::Check  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::Check(TeamTypeClass *this, int a2)
{
  int result; // eax

  for ( result = *(_DWORD *)&this->__pad_4C[8]; result; result = *(_DWORD *)(result + 1496) ) /*0x6ef5f5*/
    *(_DWORD *)(result + 240) = a2; /*0x6ef5fb*/
  return result; /*0x6ef60b*/
}



// ==== 0x006EF610  TeamClass::PlayMemberAnimation  this=TeamClass  sig=csp ====
void __thiscall sub_6EF610(int this, int a2, char a3)
{
  int v3; // eax
  int v4; // esi
  int v5; // ebx
  void *v6; // ebp
  void **v7; // edi
  int *v8; // eax
  void **v9; // eax
  _BYTE v11[12]; // [esp+10h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)(a2 + 4); /*0x6ef61e*/
  if ( a3 /*0x6ef65e*/
    && (unsigned __int16)v3 < dword_8B4160
    && (v4 = *(_DWORD *)(this + 84), v5 = HIWORD(v3), v6 = (void *)*((_DWORD *)dword_8B4154 + (unsigned __int16)v3), v4) )
  {
    do /*0x6ef6a9*/
    {
      v7 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6ef66b*/
      if ( v7 ) /*0x6ef672*/
      {
        v8 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v11); /*0x6ef689*/
        v9 = AnimClass::ctor(v7, v6, v8, 0, v5, (void *)0x600, 0, 0); /*0x6ef690*/
        if ( v9 ) /*0x6ef697*/
          BuildingClass::AimTurret(v9, (_BYTE *)v4); /*0x6ef69c*/
      }
      v4 = *(_DWORD *)(v4 + 1496); /*0x6ef6a1*/
    }
    while ( v4 ); /*0x6ef6a9*/
    *(_BYTE *)(this + 128) = 1; /*0x6ef6b2*/
  }
  else
  {
    *(_BYTE *)(this + 128) = 1; /*0x6ef6c2*/
  }
}



// ==== 0x006EF700  ObjectClass::DeployTeamMembersAtStart  this=ObjectClass  sig=csp ====
void __thiscall DeployTeamMembersAtStart(int this, int a2, char a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  int v5; // ebx
  int v6; // eax
  _DWORD *v7; // eax
  int *StartCoordsHouseClass; // eax
  int v9; // esi
  bool v10; // zf
  int v11; // ebx
  int v12; // eax
  int *v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  int *v17; // edx
  double v18; // st7
  int v19; // edx
  double v20; // st7
  double v21; // st7
  int v22; // eax
  int v23; // eax
  void *v24; // eax
  int v25; // esi
  int v26; // [esp+24h] [ebp-38h] BYREF
  int v27; // [esp+28h] [ebp-34h]
  double v28; // [esp+2Ch] [ebp-30h] BYREF
  double v29; // [esp+34h] [ebp-28h] BYREF
  double v30; // [esp+3Ch] [ebp-20h]
  int v31; // [esp+44h] [ebp-18h]
  int v32; // [esp+48h] [ebp-14h]
  int v33; // [esp+4Ch] [ebp-10h]
  _DWORD v34[3]; // [esp+50h] [ebp-Ch] BYREF

  v27 = this; /*0x6ef711*/
  if ( a3 ) /*0x6ef715*/
  {
    v3 = *(_DWORD **)(this + 84); /*0x6ef71b*/
    LODWORD(v28) = -1; /*0x6ef71e*/
    v4 = v3; /*0x6ef728*/
    if ( v3 ) /*0x6ef72a*/
    {
      do /*0x6ef771*/
      {
        v5 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v3 + 132))(v3) + 1532); /*0x6ef736*/
        if ( TechnoClass::IsDeployed((int)v3) /*0x6ef761*/
          && (*((_BYTE *)v3 + 1673) || (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3) == 2)
          && v5 > SLODWORD(v28) )
        {
          v4 = v3; /*0x6ef763*/
          LODWORD(v28) = v5; /*0x6ef765*/
        }
        v3 = (_DWORD *)v3[374]; /*0x6ef769*/
      }
      while ( v3 ); /*0x6ef771*/
      this = v27; /*0x6ef773*/
    }
    if ( !v4 ) /*0x6ef779*/
    {
      *(_BYTE *)(this + 128) = 1; /*0x6ef77b*/
      return; /*0x6ef788*/
    }
    v6 = *(_DWORD *)(v4[135] + 22016); /*0x6ef791*/
    if ( v6 == -1 || (v7 = *(_DWORD **)&dword_A8022C->AbstractClass[4 * v6]) == 0 ) /*0x6ef7a7*/
    {
      *(_BYTE *)(this + 128) = 1; /*0x6ef7a9*/
      return; /*0x6ef7b6*/
    }
    StartCoordsHouseClass = HouseClass::GetStartCoords(v7, v34); /*0x6ef7c0*/
    v9 = *StartCoordsHouseClass; /*0x6ef7c5*/
    v10 = *StartCoordsHouseClass == dword_B0E968; /*0x6ef7cd*/
    v31 = *StartCoordsHouseClass; /*0x6ef7cf*/
    v11 = StartCoordsHouseClass[1]; /*0x6ef7d3*/
    v32 = v11; /*0x6ef7d6*/
    v12 = StartCoordsHouseClass[2]; /*0x6ef7da*/
    v33 = v12; /*0x6ef7dd*/
    if ( v10 && v11 == dword_B0E96C && v12 == dword_B0E970 ) /*0x6ef7f1*/
    {
      *(_BYTE *)(v27 + 128) = 1; /*0x6ef7f7*/
      return; /*0x6ef804*/
    }
    v13 = HouseClass::GetStartCoords((_DWORD *)v4[135], v34); /*0x6ef817*/
    v14 = *v13; /*0x6ef819*/
    v10 = *v13 == dword_B0E968; /*0x6ef81b*/
    v15 = v13[1]; /*0x6ef821*/
    v16 = v13[2]; /*0x6ef824*/
    if ( v10 && v15 == dword_B0E96C && v16 == dword_B0E970 ) /*0x6ef837*/
    {
      v17 = (int *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*v4 + 72))(v4, v34); /*0x6ef845*/
      v14 = *v17; /*0x6ef847*/
      v15 = v17[1]; /*0x6ef849*/
      v34[2] = v17[2]; /*0x6ef84f*/
    }
    v34[0] = v14 - v9; /*0x6ef857*/
    v18 = Math::CalcAngle((double)(v11 - v15), (double)(v14 - v9)); /*0x6ef875*/
    LODWORD(v28) = (__int16)Math::RoundToInt((v18 - 1.570796326794897) * -10430.06004058427) - 0x3FFF; /*0x6ef899*/
    v19 = HIDWORD(dword_8871E0->?) << 8; /*0x6ef8a7*/
    v28 = (double)SLODWORD(v28) * -0.00009587672516830327; /*0x6ef8b4*/
    v30 = (double)v19; /*0x6ef8c6*/
    v29 = (double)v32; /*0x6ef8ce*/
    v20 = Math::SinCos(v28); /*0x6ef8d2*/
    LODWORD(v29) = Math::RoundToInt(v29 - v20 * v30); /*0x6ef8e6*/
    v21 = Math::ArcTan2(v28); /*0x6ef8ea*/
    v22 = Math::RoundToInt(v21 * v30 + (double)v31); /*0x6ef8fa*/
    Coord::Subtract(v34, v22, SLODWORD(v29), v33); /*0x6ef90e*/
    LOWORD(v28) = v34[0] / 256; /*0x6ef927*/
    WORD1(v28) = v34[1] / 256; /*0x6ef93e*/
    v26 = LODWORD(v28); /*0x6ef949*/
    LODWORD(v28) = 0; /*0x6ef956*/
    v23 = (*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4); /*0x6ef96e*/
    v26 = *LayerClass::Pathfinding_Find( /*0x6ef99b*/
             &dword_87F7E8,
             (int)&v29,
             &v29,
             (__int16 *)&v26,
             *(_DWORD *)(v23 + 1660),
             -1,
             0,
             0,
             3,
             3,
             0,
             0,
             0,
             1,
             (__int16 *)&v28,
             0,
             0);
    v24 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v26); /*0x6ef99f*/
    v25 = v27; /*0x6ef9a4*/
    TeamClass::SelectMember(v27, (int)v24); /*0x6ef9ab*/
    Debug::Log(); /*0x6ef9c8*/
    this = v25; /*0x6ef9d0*/
  }
  TeamClass::UpdateMembers(this); /*0x6ef9d2*/
}



// ==== 0x006EF9E0  TechnoClass::IsDeployed  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsDeployed(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = this /*0x6efa08*/
                && this->?
                && (result = this->?) != 0
                && ((result = dword_A8E7AC) != 0 || (result = (unsigned __int8)this->?, !(_BYTE)result));
  return result; /*0x6efa0a*/
}



// ==== 0x006EFA10  TeamClass::SelectDeploymentTarget  this=TeamClass  sig=csp ====
void __thiscall TeamClass::SelectDeploymentTarget(TeamClass *this, int a2, char a3)
{
  double v3; // st7
  FootClass *firstUnit; // esi
  HouseClass **i; // edi
  int v6; // ebx
  HouseClass *v7; // esi
  int enemyHouseIndex; // eax
  int *StartCoords; // eax
  int v10; // ebx
  int v11; // ecx
  char v12; // al
  __int16 v13; // cx
  __int16 v14; // ax
  _DWORD *v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  void *v21; // eax
  double v22; // [esp+0h] [ebp-58h]
  double v23; // [esp+8h] [ebp-50h]
  __int16 v24[2]; // [esp+1Ch] [ebp-3Ch] BYREF
  double v25; // [esp+20h] [ebp-38h] BYREF
  TeamClass *v26; // [esp+2Ch] [ebp-2Ch]
  double v27; // [esp+30h] [ebp-28h] BYREF
  double v28; // [esp+38h] [ebp-20h] BYREF
  int v29; // [esp+40h] [ebp-18h]
  int v30; // [esp+4Ch] [ebp-Ch]
  int v31; // [esp+50h] [ebp-8h]
  int v32; // [esp+54h] [ebp-4h]

  v26 = this; /*0x6efa21*/
  if ( a3 ) /*0x6efa25*/
  {
    firstUnit = this->firstUnit; /*0x6efa2b*/
    LODWORD(v25) = -1; /*0x6efa2e*/
    for ( i = (HouseClass **)firstUnit; firstUnit; firstUnit = firstUnit->nextTeamMember ) /*0x6efa3a*/
    {
      v6 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 1532); /*0x6efa46*/
      if ( (unsigned __int8)TechnoClass::IsDeployed((TechnoClass *)firstUnit) /*0x6efa71*/
        && (firstUnit->isTeamLeader || (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2)
        && v6 > SLODWORD(v25) )
      {
        i = (HouseClass **)firstUnit; /*0x6efa73*/
        LODWORD(v25) = v6; /*0x6efa75*/
      }
    }
    v7 = 0; /*0x6efa83*/
    if ( i ) /*0x6efa87*/
    {
      enemyHouseIndex = i[135]->enemyHouseIndex; /*0x6efa8f*/
      if ( enemyHouseIndex != -1 ) /*0x6efa98*/
        v7 = (HouseClass *)*((_DWORD *)stru_A80220.? + enemyHouseIndex); /*0x6efaa0*/
    }
    StartCoords = HouseClass::GetStartCoords(i[135], &v28); /*0x6efaae*/
    v10 = *StartCoords; /*0x6efab3*/
    v11 = StartCoords[1]; /*0x6efab7*/
    v30 = *StartCoords; /*0x6efaba*/
    v31 = v11; /*0x6efabe*/
    v32 = StartCoords[2]; /*0x6efac5*/
    if ( v7 ) /*0x6efac9*/
    {
      v15 = HouseClass::GetStartCoords(v7, &v28); /*0x6efaf7*/
      v16 = v15[1] - v31; /*0x6efb0f*/
      v17 = v15[2]; /*0x6efb11*/
      LODWORD(v28) = *v15 - v10; /*0x6efb14*/
      __asm { fild [esp+58h+var_20] } /*0x6efb18*/
      LODWORD(v25) = -v16; /*0x6efb1e*/
      v29 = v17; /*0x6efb22*/
      __asm /*0x6efb26*/
      {
        fstp [esp+58h+var_50]; double
        fild dword ptr [esp+58h+var_38]
        fstp [esp+58h+var_58]; double
      }
      Math::CalcAngle(v22, v23); /*0x6efb31*/
      __asm { fsub ds:dbl_7E2820 } /*0x6efb36*/
      __asm { fmul ds:dbl_7E2818 }
      v14 = Math::RoundToInt(v3); /*0x6efb45*/
      LOWORD(v25) = v14; /*0x6efb4a*/
    }
    else
    {
      v12 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 255); /*0x6efadc*/
      LOBYTE(v13) = 0; /*0x6efae1*/
      HIBYTE(v13) = v12; /*0x6efae3*/
      v14 = v13; /*0x6efaea*/
    }
    LODWORD(v25) = v14 - 0x3FFF; /*0x6efb61*/
    __asm { fild dword ptr [esp+48h+var_38] } /*0x6efb65*/
    __asm { fmul ds:dbl_7E2810 }
    LODWORD(v27) = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3444) << 8; /*0x6efb78*/
    __asm /*0x6efb7c*/
    {
      fstp [esp+48h+var_38]
      fild dword ptr [esp+48h+var_28]
    }
    __asm
    {
      fstp qword ptr [esp+50h+var_20]
      fild [esp+50h+var_8]
      fstp [esp+50h+var_28]
    }
    Math::SinCos(v25); /*0x6efb9a*/
    __asm /*0x6efb9f*/
    {
      fmul qword ptr [esp+50h+var_20]
      fsubr [esp+50h+var_28]
    }
    LOWORD(v18) = Math::RoundToInt(v3); /*0x6efba7*/
    LODWORD(v27) = v18; /*0x6efbae*/
    Math::ArcTan2(v25); /*0x6efbb2*/
    __asm { fmul qword ptr [esp+58h+var_20] } /*0x6efbb7*/
    __asm { fiadd [esp+48h+var_C] }
    LOWORD(v19) = Math::RoundToInt(v3); /*0x6efbc2*/
    LOWORD(v25) = v19 / 256; /*0x6efbd7*/
    WORD1(v25) = SLODWORD(v27) / 256; /*0x6efbef*/
    *(_DWORD *)v24 = LODWORD(v25); /*0x6efc01*/
    LODWORD(v25) = 0; /*0x6efc0d*/
    v20 = ((int (__thiscall *)(HouseClass **))(*i)->occupiablesCount)(i); /*0x6efc1e*/
    *(_DWORD *)v24 = *LayerClass::Pathfinding_Find( /*0x6efc4b*/
                        (Type *)&stru_87F5F0.__pad_58[416],
                        (int)&v27,
                        &v27,
                        v24,
                        *(_DWORD *)(v20 + 1660),
                        -1,
                        0,
                        0,
                        3,
                        3,
                        0,
                        0,
                        0,
                        1,
                        (__int16 *)&v25,
                        0,
                        0);
    v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x6efc4f*/
    TeamClass::SelectMember((int)v26, (int)v21); /*0x6efc59*/
    this = v26; /*0x6efc5e*/
  }
  TeamClass::UpdateMembers(this); /*0x6efc62*/
}



// ==== 0x006EFC70  ObjectClass::ProcessAISuperWeaponSelection  this=ObjectClass  sig=csp ====
void __thiscall ProcessAISuperWeaponSelection(ObjectClass *this, int a2, int a3)
{
  TechnoClass *v3; // esi
  int v4; // ebp
  TechnoClass *i; // ebx
  int v6; // edi
  HouseClass *owner; // edi
  int v8; // eax
  int lastBuiltInfantryType; // ecx
  int j; // edx
  int v11; // esi
  int v13; // ebp
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v20; // [esp+10h] [ebp-18h] BYREF
  int v21; // [esp+14h] [ebp-14h]
  int DefaultTimer; // [esp+18h] [ebp-10h]
  char v23[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v3 = (TechnoClass *)this->customSound_controller[1]; /*0x6efc76*/
  v4 = -1; /*0x6efc79*/
  v20 = (int)this; /*0x6efc7f*/
  for ( i = v3; v3; v3 = *(TechnoClass **)&v3[1].? ) /*0x6efc85*/
  {
    v6 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 1532); /*0x6efc91*/
    if ( (unsigned __int8)TechnoClass::IsDeployed(v3) /*0x6efcba*/
      && (BYTE1(v3[1].idleActionTimer[0]) || (*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 11))(v3) == 2)
      && v6 > v4 )
    {
      i = v3; /*0x6efcbc*/
      v4 = v6; /*0x6efcbe*/
    }
  }
  if ( !i ) /*0x6efccc*/
  {
    *(_BYTE *)(v20 + 128) = 1; /*0x6efcd5*/
    return; /*0x6efce0*/
  }
  owner = i->owner; /*0x6efce3*/
  v8 = 0; /*0x6efce9*/
  lastBuiltInfantryType = owner->lastBuiltInfantryType; /*0x6efcf0*/
  if ( lastBuiltInfantryType <= 0 ) /*0x6efcf8*/
    goto LABEL_16; /*0x6efcf8*/
  for ( j = owner->supersCount; *(_DWORD *)(*(_DWORD *)(*(_DWORD *)j + 40) + 180) != 1; j += 4 ) /*0x6efd00*/
  {
    if ( ++v8 >= lastBuiltInfantryType ) /*0x6efd15*/
    {
      *(_BYTE *)(v20 + 128) = 1; /*0x6efd1e*/
      return; /*0x6efd28*/
    }
  }
  v11 = *(_DWORD *)(owner->supersCount + 4 * v8); /*0x6efd2b*/
  if ( !v11 ) /*0x6efd30*/
  {
LABEL_16:
    *(_BYTE *)(v20 + 128) = 1; /*0x6efd39*/
    return; /*0x6efd43*/
  }
  if ( *(_BYTE *)(v11 + 111) ) /*0x6efd46*/
  {
    HouseClass::GetPowerRatio(owner); /*0x6efd4f*/
    __asm /*0x6efd54*/
    {
      fcomp ds:dbl_7E1718
      fnstsw ax
    }
    if ( (_AX & 0x100) == 0 ) /*0x6efd5f*/
    {
      v13 = v20; /*0x6efd61*/
      v14 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(v20 + 52) + 72))(*(_DWORD *)(v20 + 52), v23); /*0x6efd6f*/
      LOWORD(v21) = *v14 / 256; /*0x6efd82*/
      HIWORD(v21) = v14[1] / 256; /*0x6efd9a*/
      v15 = *(_DWORD *)(v11 + 40); /*0x6efda3*/
      v20 = v21; /*0x6efda6*/
      SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)owner, *(_DWORD *)(v15 + 180), (int)&v20); /*0x6efdb4*/
      *(_BYTE *)(v13 + 128) = 1; /*0x6efdba*/
      return; /*0x6efdc6*/
    }
  }
  v16 = *(_DWORD *)(v11 + 48); /*0x6efdc9*/
  v17 = *(_DWORD *)(v11 + 56); /*0x6efdcc*/
  if ( v16 == -1 ) /*0x6efdd2*/
    goto LABEL_23; /*0x6efdd2*/
  if ( *(_DWORD *)&stru_A8EB00.?[416] - v16 < v17 ) /*0x6efddd*/
  {
    v17 -= *(_DWORD *)&stru_A8EB00.?[416] - v16; /*0x6efddf*/
LABEL_23:
    v21 = v17; /*0x6efde1*/
    goto LABEL_24; /*0x6efde1*/
  }
  v21 = 0; /*0x6efe32*/
LABEL_24:
  DefaultTimer = Super::GetDefaultTimer((Super *)v11); /*0x6efde5*/
  __asm { fild [esp+28h+var_10] } /*0x6efdf3*/
  if ( *(_BYTE *)(v11 + 109) ) /*0x6efdf0*/
  {
    __asm { fild [esp+28h+var_14] } /*0x6efdfb*/
    _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6efdff*/
    __asm /*0x6efe05*/
    {
      fdiv st, st(1)
      fld ds:flt_7E2AC8
      fsub dword ptr [edx+0D70h]
      fcompp
      fnstsw ax
    }
    __asm { fstp st }
    if ( (_AX & 0x100) != 0 ) /*0x6efe1c*/
      *(_BYTE *)(v20 + 128) = 1; /*0x6efe25*/
  }
  else
  {
    __asm { fstp st } /*0x6efe40*/
    *(_BYTE *)(v20 + 128) = 1; /*0x6efe42*/
  }
}



// ==== 0x006EFE60  SuperWeapon::DispatchTeam  this=SuperWeapon  sig=csp ====
void __thiscall DispatchTeamSuperWeapon(int this, int a2, int a3)
{
  int v4; // ebx
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  int v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // ebx
  int v11; // eax
  int *v12; // edx
  int v13; // edi
  int v14; // ecx
  #375 *v15; // edx
  int v16; // edi
  int v17; // edi
  _DWORD *v18; // esi
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // [esp+10h] [ebp-1Ch]
  int v24; // [esp+14h] [ebp-18h] BYREF
  int v25; // [esp+18h] [ebp-14h] BYREF
  int DefaultTimerSuper; // [esp+1Ch] [ebp-10h]
  _BYTE v27[12]; // [esp+20h] [ebp-Ch] BYREF
  int v28; // [esp+30h] [ebp+4h]
  int v29; // [esp+30h] [ebp+4h]

  v4 = -1; /*0x6efe68*/
  v5 = *(_DWORD **)(this + 84); /*0x6efe6c*/
  v24 = this; /*0x6efe6f*/
  v6 = v5; /*0x6efe73*/
  v23 = (int)v5; /*0x6efe77*/
  if ( v5 ) /*0x6efe7b*/
  {
    do /*0x6efec0*/
    {
      v7 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v5 + 132))(v5) + 1532); /*0x6efe87*/
      if ( TechnoClass::IsDeployed((int)v5) /*0x6efeb0*/
        && (*((_BYTE *)v5 + 1673) || (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) == 2)
        && v7 > v4 )
      {
        v23 = (int)v5; /*0x6efeb2*/
        v4 = v7; /*0x6efeb6*/
      }
      v5 = (_DWORD *)v5[374]; /*0x6efeb8*/
    }
    while ( v5 ); /*0x6efec0*/
    v6 = (_DWORD *)v23; /*0x6efec2*/
  }
  if ( !v6 ) /*0x6efec8*/
  {
    *(_BYTE *)(this + 128) = 1; /*0x6efecb*/
    return; /*0x6efed8*/
  }
  v8 = v6[135]; /*0x6efedb*/
  v9 = 0; /*0x6efee1*/
  v10 = 0; /*0x6efee3*/
  v25 = 0; /*0x6efee5*/
  v11 = *(_DWORD *)(v8 + 612); /*0x6efee9*/
  DefaultTimerSuper = 0; /*0x6efeef*/
  if ( v11 <= 0 ) /*0x6efef5*/
    goto LABEL_36; /*0x6efef5*/
  v12 = *(int **)(v8 + 600); /*0x6efefb*/
  v13 = v11; /*0x6eff01*/
  do /*0x6eff20*/
  {
    v14 = *(_DWORD *)(*(_DWORD *)(*v12 + 40) + 180); /*0x6eff08*/
    if ( v14 == 3 ) /*0x6eff11*/
      v9 = *v12; /*0x6eff13*/
    if ( v14 == 4 ) /*0x6eff18*/
      v10 = *v12; /*0x6eff1a*/
    ++v12; /*0x6eff1c*/
    --v13; /*0x6eff1f*/
  }
  while ( v13 ); /*0x6eff20*/
  DefaultTimerSuper = v10; /*0x6eff24*/
  v25 = v9; /*0x6eff28*/
  if ( !v9 || !v10 ) /*0x6eff34*/
  {
LABEL_36:
    *(_BYTE *)(v24 + 128) = 1; /*0x6f0114*/
    return; /*0x6f0114*/
  }
  if ( *(_BYTE *)(v9 + 111) && HouseClass::GetPowerRatio((int *)v8) >= 1.0 ) /*0x6eff57*/
  {
    v15 = 0; /*0x6eff6a*/
    v16 = *(_DWORD *)(*(_DWORD *)(v23 + 540) + 22016); /*0x6eff89*/
    if ( v16 != -1 ) /*0x6eff92*/
      v15 = *(#375 **)&dword_A8022C->AbstractClass[4 * v16]; /*0x6eff9a*/
    v17 = v24; /*0x6eff9d*/
    v18 = DamageMapClassArea( /*0x6effb4*/
            *((_DWORD *)dword_A83C6C + (unsigned __int16)*(_DWORD *)(a2 + 4)),
            v15,
            v23,
            (unsigned __int16)HIWORD(*(_DWORD *)(a2 + 4)),
            *(_BYTE *)(*(_DWORD *)(v24 + 36) + 247));
    if ( v18 ) /*0x6effb8*/
    {
      v19 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v24 + 52) + 72))( /*0x6effc8*/
                        *(_DWORD *)(v24 + 52),
                        v27);
      LOWORD(v28) = *v19 / 256; /*0x6effdb*/
      HIWORD(v28) = v19[1] / 256; /*0x6efff7*/
      v24 = v28; /*0x6f0000*/
      SuperWeapon::FireSuperWeaponHouseClass((#375 *)v8, *(_DWORD *)(*(_DWORD *)(v25 + 40) + 180), (int)&v24); /*0x6f0011*/
      v20 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v18 + 72))(v18, v27); /*0x6f001f*/
      LOWORD(v28) = *v20 / 256; /*0x6f0032*/
      HIWORD(v28) = v20[1] / 256; /*0x6f004a*/
      v25 = v28; /*0x6f0057*/
      SuperWeapon::FireSuperWeaponHouseClass( /*0x6f0068*/
        (#375 *)v8,
        *(_DWORD *)(*(_DWORD *)(DefaultTimerSuper + 40) + 180),
        (int)&v25);
      TeamClass::SelectMember(v17, (int)v18); /*0x6f0070*/
    }
    *(_BYTE *)(v17 + 128) = 1; /*0x6f0075*/
    return; /*0x6f0083*/
  }
  v21 = *(_DWORD *)(v9 + 48); /*0x6f0086*/
  v22 = *(_DWORD *)(v9 + 56); /*0x6f0089*/
  if ( v21 == -1 ) /*0x6f008f*/
    goto LABEL_30; /*0x6f008f*/
  if ( (int)dword_A8ED84 - v21 < v22 ) /*0x6f009a*/
  {
    v22 -= (int)dword_A8ED84 - v21; /*0x6f009c*/
LABEL_30:
    v29 = v22; /*0x6f009e*/
    goto LABEL_31; /*0x6f009e*/
  }
  v29 = 0; /*0x6f00ef*/
LABEL_31:
  DefaultTimerSuper = Super::GetDefaultTimer((_DWORD *)v9); /*0x6f00a2*/
  if ( *(_BYTE *)(v9 + 109) ) /*0x6f00ad*/
  {
    if ( 1.0 - *(float *)&dword_8871E0->? < (double)v29 / (double)DefaultTimerSuper ) /*0x6f00d8*/
      *(_BYTE *)(v24 + 128) = 1; /*0x6f00e1*/
  }
  else
  {
    *(_BYTE *)(v24 + 128) = 1; /*0x6f0102*/
  }
}



// ==== 0x006E0030  sub_6E0030  this=-  sig=csp ====
char __stdcall sub_6E0030(int a1, int a2, int a3, int a4)
{
  return 1; /*0x6e0032*/
}



// ==== 0x006E0040  sub_6E0040  this=-  sig=csp ====
char __stdcall sub_6E0040(int a1, int a2, int a3, int a4)
{
  return 1; /*0x6e0042*/
}



// ==== 0x006E0080  ObjectClass::method_6E0080  this=ObjectClass  sig=csp ====
char __thiscall sub_6E0080(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int v6; // edi
  __int16 v7; // bp
  _BYTE *v8; // esi
  _WORD *v9; // eax
  int v11; // [esp+8h] [ebp-4h] BYREF

  v5 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v11, this->ambientSoundController[2]); /*0x6e0097*/
  v6 = 0; /*0x6e009e*/
  v11 = v5; /*0x6e00a0*/
  if ( g_GameCleanupState <= 0 ) /*0x6e00a6*/
    return 1; /*0x6e00fb*/
  v7 = HIWORD(v11); /*0x6e00a9*/
  do /*0x6e00ee*/
  {
    v8 = (_BYTE *)*((_DWORD *)dword_A8020C + v6); /*0x6e00b5*/
    if ( v8[144] ) /*0x6e00b8*/
    {
      v9 = (_WORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v8 + 440))(v8, &v11); /*0x6e00cb*/
      if ( *v9 == (_WORD)v5 && v9[1] == v7 ) /*0x6e00da*/
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 248))(v8); /*0x6e00e0*/
    }
    ++v6; /*0x6e00eb*/
  }
  while ( v6 < g_GameCleanupState ); /*0x6e00ee*/
  return 1; /*0x6e00f2*/
}



// ==== 0x006E0110  ScenarioClass::Create  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::Create(ScenarioClass *this, int a2, int a3, int a4, int a5)
{
  int *v6; // eax
  int v8; // [esp+4h] [ebp-1Ch] BYREF
  int v9; // [esp+8h] [ebp-18h] BYREF
  int v10; // [esp+Ch] [ebp-14h]
  int GroundHeight; // [esp+10h] [ebp-10h]
  _DWORD v12[3]; // [esp+14h] [ebp-Ch] BYREF

  v8 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v8, this->nextScenario[17]); /*0x6e012f*/
  GroundHeight = 0; /*0x6e014c*/
  v12[2] = 0; /*0x6e0150*/
  v10 = (SHIWORD(v8) << 8) + 128; /*0x6e0158*/
  v12[1] = v10; /*0x6e015c*/
  v9 = ((__int16)v8 << 8) + 128; /*0x6e0166*/
  v12[0] = v9; /*0x6e016a*/
  GroundHeight = Cell::GetGroundHeight(v12); /*0x6e0178*/
  v6 = (int *)__2_YAPAXI_Z(0x100u); /*0x6e017c*/
  if ( v6 ) /*0x6e0186*/
    ParticleSystemClass::Constructor( /*0x6e01aa*/
      v6,
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * this->nextScenario[36]),
      &v9,
      0,
      0,
      &dword_B0E6A0,
      0);
  return 1; /*0x6e01b1*/
}



// ==== 0x006E01C0  globalHelper_0E01C0  this=-  sig=csp ====
char __stdcall sub_6E01C0(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  _BYTE *v5; // esi
  _DWORD *v6; // ecx

  v4 = 0; /*0x6e01c6*/
  if ( dword_A8EC88 <= 0 ) /*0x6e01ca*/
    return 1; /*0x6e0245*/
  do /*0x6e023b*/
  {
    v5 = (_BYTE *)*((_DWORD *)dword_A8EC7C + v4); /*0x6e01d7*/
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 44))(v5) != 6 ) /*0x6e01e4*/
    {
      if ( v5[144] ) /*0x6e01e6*/
      {
        if ( v5[116] ) /*0x6e01f0*/
        {
          v6 = (_DWORD *)*((_DWORD *)v5 + 13); /*0x6e01f7*/
          if ( v6 ) /*0x6e01fc*/
          {
            if ( LinkedList::Contains(v6, a3) /*0x6e0223*/
              && (!(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 388))(v5)
               || (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 388))(v5) == 23) )
            {
              (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)v5 + 488))(v5, 5, 0); /*0x6e022d*/
            }
          }
        }
      }
    }
    ++v4; /*0x6e0238*/
  }
  while ( v4 < dword_A8EC88 ); /*0x6e023b*/
  return 1; /*0x6e0241*/
}



// ==== 0x006E0250  ObjectClass::method_6E0250  this=ObjectClass  sig=csp ====
char __thiscall sub_6E0250(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  HIBYTE(dword_A8B230[374].vtable3) = this->isAliveFlag; /*0x6e025c*/
  return 1; /*0x6e0264*/
}



// ==== 0x006E0270  ObjectClass::method_6E0270  this=ObjectClass  sig=csp ====
char __thiscall sub_6E0270(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  BYTE2(dword_A8B230[374].vtable3) = this->isAliveFlag; /*0x6e027c*/
  return 1; /*0x6e0284*/
}



// ==== 0x006E0290  ObjectClass::method_6E0290  this=ObjectClass  sig=csp ====
char __thiscall sub_6E0290(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  LOBYTE(dword_A8B230[374].uniqueId) = this->isAliveFlag; /*0x6e029c*/
  return 1; /*0x6e02a4*/
}



// ==== 0x006E0490  ObjectClass::PlayWaypointEffect  this=ObjectClass  sig=csp ====
char __thiscall PlayWaypointEffect(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  int *WorldCoords; // eax
  _DWORD *v7; // eax
  int *v8; // eax
  _DWORD *v9; // eax
  int *v10; // eax
  _DWORD *v11; // eax
  int *v12; // eax
  _DWORD *v13; // eax
  int *v14; // eax
  int v15; // esi
  int v16; // edx
  __int16 v18[2]; // [esp+8h] [ebp-38h] BYREF
  int v19; // [esp+Ch] [ebp-34h] BYREF
  int v20; // [esp+10h] [ebp-30h] BYREF
  int v21; // [esp+14h] [ebp-2Ch]
  int v22; // [esp+18h] [ebp-28h]
  int v23; // [esp+1Ch] [ebp-24h] BYREF
  int v24; // [esp+20h] [ebp-20h]
  int v25; // [esp+24h] [ebp-1Ch]
  _DWORD v26[3]; // [esp+28h] [ebp-18h] BYREF
  _DWORD v27[3]; // [esp+34h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, &v20, *(_DWORD *)&this->isAliveFlag); /*0x6e04a9*/
  v23 = *WorldCoords; /*0x6e04b2*/
  v24 = WorldCoords[1]; /*0x6e04bb*/
  v25 = WorldCoords[2]; /*0x6e04c7*/
  PlaySoundEffectAt(&v23, 100, 0, *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008), 1, 0); /*0x6e04dd*/
  v7 = Cell::GetWorldCoords((Cell *)dword_A8B230, &v20, *(_DWORD *)&this->isAliveFlag); /*0x6e04f4*/
  v8 = Coord::Subtract((Coord *)v26, *v7 + 85, v7[1] + 85, v7[2]); /*0x6e0510*/
  v23 = *v8; /*0x6e0519*/
  v24 = v8[1]; /*0x6e0528*/
  v25 = v8[2]; /*0x6e052f*/
  PlaySoundEffectAt(&v23, 100, 0, *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008), 1, 0); /*0x6e0545*/
  v9 = Cell::GetWorldCoords((Cell *)dword_A8B230, v26, *(_DWORD *)&this->isAliveFlag); /*0x6e055c*/
  v10 = Coord::Subtract((Coord *)&v20, *v9 - 85, v9[1] + 85, v9[2]); /*0x6e0578*/
  v23 = *v10; /*0x6e0581*/
  v24 = v10[1]; /*0x6e058a*/
  v25 = v10[2]; /*0x6e0591*/
  PlaySoundEffectAt(&v23, 100, 0, *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008), 1, 0); /*0x6e05ad*/
  Coord::Subtract((Coord *)&v23, 85, -85, 0); /*0x6e05bc*/
  v11 = Cell::GetWorldCoords((Cell *)dword_A8B230, v26, *(_DWORD *)&this->isAliveFlag); /*0x6e05d3*/
  v12 = Coord::Subtract((Coord *)v27, *v11 + v23, v11[1] + v24, v11[2] + v25); /*0x6e05fb*/
  v20 = *v12; /*0x6e0604*/
  v21 = v12[1]; /*0x6e060d*/
  v22 = v12[2]; /*0x6e0619*/
  PlaySoundEffectAt(&v20, 100, 0, *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008), 1, 0); /*0x6e062f*/
  v13 = Cell::GetWorldCoords((Cell *)dword_A8B230, v27, *(_DWORD *)&this->isAliveFlag); /*0x6e0646*/
  v14 = Coord::Subtract((Coord *)v26, *v13 - 85, v13[1] - 85, v13[2]); /*0x6e0662*/
  v23 = *v14; /*0x6e066b*/
  v24 = v14[1]; /*0x6e067a*/
  v25 = v14[2]; /*0x6e0681*/
  PlaySoundEffectAt(&v23, 100, 0, *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008), 1, 0); /*0x6e0697*/
  if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, *(_DWORD *)&this->isAliveFlag) ) /*0x6e06a9*/
  {
    *(_DWORD *)v18 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v19, *(_DWORD *)&this->isAliveFlag); /*0x6e06d9*/
    v15 = 3; /*0x6e06dd*/
    if ( !(unsigned __int8)CellClass::SetTerrainType((CellClass *)&stru_87F5F0.__pad_58[416], v18) ) /*0x6e06e2*/
    {
      do /*0x6e0703*/
        v16 = v15--; /*0x6e06eb*/
      while ( v16 > 0 && !(unsigned __int8)CellClass::SetTerrainType((CellClass *)&stru_87F5F0.__pad_58[416], v18) ); /*0x6e0703*/
    }
    v24 = (v18[1] << 8) + 128; /*0x6e0722*/
    v23 = (v18[0] << 8) + 128; /*0x6e0730*/
    v25 = dword_B0E6D4; /*0x6e073c*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v23, &v20); /*0x6e0748*/
    Cell::CreateCrater(v20 - 128, v21 - 128, 256, 256, 0); /*0x6e077a*/
  }
  return 1; /*0x6e077f*/
}



// ==== 0x006E0790  AnimTypeClass::method_6E0790  this=AnimTypeClass  sig=csp ====
char __thiscall sub_6E0790(AnimTypeClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int *WorldCoords; // eax
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008); /*0x6e07a3*/
  WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, v8, *(_DWORD *)&this->?[44]); /*0x6e07b5*/
  CreateSmokeEffectAt(50, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e07d6*/
  return 1; /*0x6e07dd*/
}



// ==== 0x006E07F0  AnimTypeClass::method_6E07F0  this=AnimTypeClass  sig=csp ====
char __thiscall sub_6E07F0(AnimTypeClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int *WorldCoords; // eax
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008); /*0x6e0803*/
  WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, v8, *(_DWORD *)&this->?[44]); /*0x6e0815*/
  CreateSmokeEffectAt(100, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e0836*/
  return 1; /*0x6e083d*/
}



// ==== 0x006E0850  AnimTypeClass::method_6E0850  this=AnimTypeClass  sig=csp ====
char __thiscall sub_6E0850(AnimTypeClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int *WorldCoords; // eax
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008); /*0x6e0863*/
  WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, v8, *(_DWORD *)&this->?[44]); /*0x6e0875*/
  CreateSmokeEffectAt(300, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e0896*/
  return 1; /*0x6e089d*/
}



// ==== 0x006E0AA0  TActionClass::executeEnterAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeEnterAction(TActionClass *this, int a2, int a3, _DWORD *a4, int a5)
{
  HouseClass *v5; // esi
  int Field11; // eax
  int v7; // edi
  char v9; // bl
  int i; // ebp
  int v11; // esi
  LinkedList *v12; // ecx

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e0aa1*/
  if ( !a4 ) /*0x6e0aae*/
    return 0; /*0x6e0aae*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e0ab6*/
  {
    Field11 = Property::GetField11((Property *)a4); /*0x6e0ab8*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e0ac2*/
      return 0; /*0x6e0ae7*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e0ac6*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0ad1*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0ad8*/
  }
  v7 = Field11; /*0x6e0add*/
  if ( !Field11 ) /*0x6e0ae1*/
    return 0; /*0x6e0ae1*/
  v9 = 0; /*0x6e0af1*/
  for ( i = 0; i < *(int *)&stru_A8EB00.?[164]; ++i ) /*0x6e0af7*/
  {
    v11 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i); /*0x6e0afe*/
    if ( *(_BYTE *)(v11 + 144) ) /*0x6e0b01*/
    {
      if ( *(_BYTE *)(v11 + 116) ) /*0x6e0b0b*/
      {
        if ( !*(_BYTE *)(v11 + 129) ) /*0x6e0b12*/
        {
          v12 = *(LinkedList **)(v11 + 52); /*0x6e0b1c*/
          if ( v12 ) /*0x6e0b21*/
          {
            if ( (unsigned __int8)LinkedList::Contains(v12, (int)a4) ) /*0x6e0b28*/
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v11 + 980))(v11, v7, 0); /*0x6e0b38*/
              v9 = 1; /*0x6e0b3e*/
            }
          }
        }
      }
    }
  }
  return v9; /*0x6e0ae3*/
}



// ==== 0x006E0B60  TActionClass::ConvertHouseUnits  this=TActionClass  sig=csp ====
char __thiscall TActionClass::ConvertHouseUnits(TActionClass *this, int a2, int a3, _DWORD *a4, int a5)
{
  HouseClass *v5; // esi
  char v6; // bl
  int Field11; // eax
  int v8; // ebp
  int v10; // eax
  int i; // edi
  _DWORD *v12; // esi
  int v13; // esi
  int v14; // edi
  int v15; // esi
  int v16; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e0b63*/
  v6 = 0; /*0x6e0b6d*/
  if ( !a4 ) /*0x6e0b71*/
    return 0; /*0x6e0b71*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e0b79*/
  {
    Field11 = Property::GetField11((Property *)a4); /*0x6e0b7b*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e0b85*/
      return 0; /*0x6e0bab*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e0b89*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0b94*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0b9b*/
  }
  v8 = Field11; /*0x6e0ba0*/
  if ( !Field11 ) /*0x6e0ba4*/
    return 0; /*0x6e0ba4*/
  v10 = *(_DWORD *)&stru_A8EB00.?[164]; /*0x6e0bae*/
  for ( i = 0; i < *(int *)&stru_A8EB00.?[164]; ++i ) /*0x6e0bb8*/
  {
    v12 = *(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i); /*0x6e0bbf*/
    if ( v12[135] == a2 /*0x6e0bf4*/
      && (!v12
       || (*(int (__thiscall **)(_DWORD))(*v12 + 44))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i)) != 6
       || (v13 = v12[328]) == 0
       || !*(_BYTE *)(v13 + 5491) && !*(_BYTE *)(v13 + 5492)) )
    {
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i) + 980))( /*0x6e0c0b*/
        *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i),
        v8,
        0);
      v6 = 1; /*0x6e0c11*/
    }
    v10 = *(_DWORD *)&stru_A8EB00.?[164]; /*0x6e0c13*/
  }
  v14 = 0; /*0x6e0c1d*/
  if ( v10 > 0 ) /*0x6e0c21*/
  {
    do /*0x6e0c89*/
    {
      v15 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v14); /*0x6e0c2c*/
      if ( *(_DWORD *)(v15 + 540) == a2 ) /*0x6e0c35*/
      {
        if ( v15 ) /*0x6e0c39*/
        {
          if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v15 + 44))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v14)) == 6 ) /*0x6e0c45*/
          {
            v16 = *(_DWORD *)(v15 + 1312); /*0x6e0c47*/
            if ( v16 ) /*0x6e0c4f*/
            {
              if ( *(_BYTE *)(v16 + 5491) || *(_BYTE *)(v16 + 5492) ) /*0x6e0c5b*/
              {
                (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v14) /*0x6e0c72*/
                                                            + 980))(
                  *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v14),
                  v8,
                  0);
                Animation::UpdateBuildingAnimations((Animation *)v15); /*0x6e0c7a*/
                v6 = 1; /*0x6e0c7f*/
              }
            }
          }
        }
      }
      ++v14; /*0x6e0c86*/
    }
    while ( v14 < *(int *)&stru_A8EB00.?[164] ); /*0x6e0c89*/
  }
  return v6; /*0x6e0ba6*/
}



// ==== 0x006E0CA0  TActionClass::executeCaptureAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeCaptureAction(TActionClass *this, void *a2, int a3, _DWORD *a4, int a5)
{
  HouseClass *v5; // esi
  int Field11; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e0ca1*/
  if ( !a4 ) /*0x6e0cad*/
    return 0; /*0x6e0cad*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e0cb5*/
  {
    Field11 = Property::GetField11((Property *)a4); /*0x6e0cb7*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e0cc1*/
      return 0; /*0x6e0ce3*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e0cc5*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0cd0*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0cd7*/
  }
  if ( !Field11 ) /*0x6e0cde*/
    return 0; /*0x6e0cde*/
  TActionClass::executeAttackAction((TActionClass *)a2, Field11); /*0x6e0ceb*/
  return 1; /*0x6e0ce2*/
}



// ==== 0x006E0D00  TActionClass::executeSabotageAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeSabotageAction(TActionClass *this, _DWORD *a2, int a3, _DWORD *a4, int a5)
{
  HouseClass *v5; // esi
  int Field11; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e0d01*/
  if ( !a4 ) /*0x6e0d0d*/
    return 0; /*0x6e0d0d*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e0d15*/
  {
    Field11 = Property::GetField11((Property *)a4); /*0x6e0d17*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e0d21*/
      return 0; /*0x6e0d43*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e0d25*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0d30*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0d37*/
  }
  if ( !Field11 ) /*0x6e0d3e*/
    return 0; /*0x6e0d3e*/
  TActionClass::executeMoveAction((TActionClass *)a2, Field11); /*0x6e0d4b*/
  return 1; /*0x6e0d42*/
}



// ==== 0x006E0EF0  HouseClass::UpdateTechBuildings  this=HouseClass  sig=csp ====
char __thiscall HouseClass::UpdateTechBuildings(HouseClass *this, int a2, int a3, int a4, int a5)
{
  HouseClass *v7; // [esp+14h] [ebp+4h]

  if ( LOBYTE(this->cloningVatsCount) ) /*0x6e0ef0*/
  {
    *(_BYTE *)(a2 + 499) = 1; /*0x6e0f02*/
    if ( *(int *)(a2 + 96) > 0 ) /*0x6e0f0e*/
    {
      LOWORD(v7) = *(_DWORD *)(**(_DWORD **)(a2 + 84) + 156) / 256; /*0x6e0f36*/
      HIWORD(v7) = *(_DWORD *)(**(_DWORD **)(a2 + 84) + 160) / 256; /*0x6e0f4b*/
      HouseClass::SetMapSeed((HouseClass *)a2, (int)v7); /*0x6e0f55*/
      *(_DWORD *)(a2 + 22352) = v7; /*0x6e0f5a*/
    }
    if ( !*(_DWORD *)(a2 + 22292) ) /*0x6e0f61*/
    {
      HouseClass::SetPrimaryTechBuilding((HouseClass *)a2); /*0x6e0f6d*/
      return 1; /*0x6e0f78*/
    }
  }
  else
  {
    *(_BYTE *)(a2 + 499) = 0; /*0x6e0f7f*/
  }
  return 1; /*0x6e0f74*/
}



// ==== 0x006E0FE0  TActionClass::RevealWaypointArea  this=TActionClass  sig=csp ====
char __thiscall TActionClass::RevealWaypointArea(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // esi
  int v8; // [esp+0h] [ebp-14h] BYREF
  int v9; // [esp+4h] [ebp-10h]
  int v10; // [esp+8h] [ebp-Ch]
  __int16 v11[4]; // [esp+Ch] [ebp-8h] BYREF

  if ( dword_A83D4C->__pad_140[256] ) /*0x6e0fe8*/
    return 1; /*0x6e116a*/
  *(_DWORD *)v11 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v8, *(_DWORD *)&this->pad_6E[34]); /*0x6e101b*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v11) + 80) & 0x100) != 0 /*0x6e1047*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v11) + 80) & 0x400) != 0 )
  {
    v5 = 4; /*0x6e104d*/
  }
  else
  {
    v5 = 0; /*0x6e1049*/
  }
  v6 = v5 + *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v11) + 283); /*0x6e1068*/
  v10 = v6 * dword_B0E6E0; /*0x6e10b2*/
  v9 = ((__int16)(v11[1] - v6 / 2) << 8) + 128; /*0x6e10c1*/
  v8 = ((__int16)(v11[0] - v6 / 2) << 8) + 128; /*0x6e10cd*/
  MapClass::RevealArea1( /*0x6e10e5*/
    (MapClass *)&stru_87F5F0.__pad_58[416],
    &v8,
    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1580),
    dword_A83D4C,
    0,
    0,
    0,
    1,
    0);
  v8 = ((__int16)(v11[0] - v6 / 2) << 8) + 128; /*0x6e1126*/
  v10 = v6 * dword_B0E6E0; /*0x6e1135*/
  v9 = ((__int16)(v11[1] - v6 / 2) << 8) + 128; /*0x6e1143*/
  MapClass::RevealArea1( /*0x6e115b*/
    (MapClass *)&stru_87F5F0.__pad_58[416],
    &v8,
    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1580),
    dword_A83D4C,
    0,
    0,
    0,
    1,
    1);
  return 1; /*0x6e1164*/
}



// ==== 0x006E1180  ObjectClass::method_6E1180  this=ObjectClass  sig=csp ====
char __thiscall sub_6E1180(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  int v6; // [esp+0h] [ebp-8h] BYREF
  int v7; // [esp+4h] [ebp-4h] BYREF

  v6 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v7, *(_DWORD *)&this->isAliveFlag); /*0x6e11a6*/
  MapClass::TriggerEVA((__int16 *)&v6); /*0x6e11aa*/
  return 1; /*0x6e11b1*/
}



// ==== 0x006E11C0  TActionClass::RevealTileTypeAtWaypoint  this=TActionClass  sig=csp ====
char __thiscall TActionClass::RevealTileTypeAtWaypoint(TActionClass *this, int a2, int a3, int a4, int a5)
{
  __int16 *Waypoint_Location; // eax
  int TileIndex; // ebp
  _DWORD *v7; // esi
  __int16 *v8; // ebx
  __int16 v9; // cx
  int v10; // esi
  __int16 v11; // ax
  __int16 v12; // bx
  int v14; // [esp+8h] [ebp-1Ch] BYREF
  int v15[3]; // [esp+Ch] [ebp-18h] BYREF
  int v16[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( dword_A83D4C->__pad_140[256] ) /*0x6e11c8*/
    return 1; /*0x6e11c8*/
  Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location( /*0x6e11ee*/
                                   (char *)dword_A8B230,
                                   &v14,
                                   *(_DWORD *)&this->pad_6E[34]);
  TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], Waypoint_Location, 1, 0); /*0x6e1203*/
  TActionClass::executeSellAction((TActionClass *)&stru_87F5F0.__pad_58[416]); /*0x6e1205*/
  v7 = MapClass::SpiralSearch((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x6e1214*/
  if ( !v7 ) /*0x6e1218*/
    return 1; /*0x6e1327*/
  do /*0x6e1314*/
  {
    v8 = (__int16 *)(v7 + 9); /*0x6e1220*/
    if ( MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], (__int16 *)v7 + 18, 1, 0) == TileIndex ) /*0x6e1234*/
    {
      v9 = *((_WORD *)v7 + 19); /*0x6e1244*/
      v10 = *((char *)v7 + 283) / 2; /*0x6e124c*/
      v15[0] = ((__int16)(*v8 - v10 / 2) << 8) + 128; /*0x6e1284*/
      v15[1] = ((__int16)(v9 - v10 / 2) << 8) + 128; /*0x6e128f*/
      v15[2] = v10 * dword_B0E6E0; /*0x6e12a2*/
      MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], v15, 2, dword_A83D4C, 0, 0, 0, 1, 0); /*0x6e12a6*/
      v11 = *v8; /*0x6e12b1*/
      v12 = v8[1] - v10 / 2; /*0x6e12be*/
      v16[2] = v10 * dword_B0E6E0; /*0x6e12d3*/
      v16[0] = ((__int16)(v11 - v10 / 2) << 8) + 128; /*0x6e12ea*/
      v16[1] = (v12 << 8) + 128; /*0x6e12f5*/
      MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], v16, 2, dword_A83D4C, 0, 0, 0, 1, 1); /*0x6e1301*/
    }
    v7 = MapClass::SpiralSearch((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x6e1310*/
  }
  while ( v7 ); /*0x6e1314*/
  return 1; /*0x6e131c*/
}



// ==== 0x006E1440  ObjectClass::Render  this=ObjectClass  sig=csp ====
char __thiscall ObjectClass::Render(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  void **p_vtable3; // edx
  void *vtable3; // edi
  int abstractFlags; // eax
  int v8; // esi
  int v9; // eax
  void *v11; // [esp+10h] [ebp-8h]

  p_vtable3 = &dword_A8B230[127].vtable3; /*0x6e144f*/
  vtable3 = dword_A8B230[127].vtable3; /*0x6e1457*/
  abstractFlags = dword_A8B230[127].abstractFlags; /*0x6e1459*/
  if ( vtable3 != (void *)-1 ) /*0x6e145f*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)vtable3 >= abstractFlags ) /*0x6e1467*/
    {
      v8 = 0; /*0x6e149c*/
      goto LABEL_5; /*0x6e149e*/
    }
    abstractFlags -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)vtable3; /*0x6e1469*/
  }
  v8 = abstractFlags; /*0x6e146b*/
LABEL_5:
  v9 = *(_DWORD *)&this->isAliveFlag; /*0x6e146d*/
  *p_vtable3 = *(void **)&stru_A8EB00.?[416]; /*0x6e1473*/
  p_vtable3[1] = v11; /*0x6e1481*/
  p_vtable3[2] = (void *)(v8 + 12 * v9 + 3 * v9); /*0x6e1489*/
  ObjectClass::PreDraw((ObjectClass *)&stru_87F5F0.__pad_58[416]); /*0x6e148c*/
  return 1; /*0x6e1491*/
}



// ==== 0x006E14A0  ObjectClass::ProcessDataObjectClass  this=ObjectClass  sig=csp ====
char __thiscall ProcessDataObjectClass(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  void **p_vtable3; // eax
  int abstractFlags; // edx
  void *vtable3; // esi
  int v8; // edi
  void *v9; // edx
  int v10; // ecx
  void *v11; // esi
  int v12; // ecx
  void *v14; // [esp+10h] [ebp-8h]

  p_vtable3 = &dword_A8B230[127].vtable3; /*0x6e14a8*/
  abstractFlags = dword_A8B230[127].abstractFlags; /*0x6e14b4*/
  vtable3 = dword_A8B230[127].vtable3; /*0x6e14b8*/
  if ( vtable3 != (void *)-1 ) /*0x6e14be*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)vtable3 >= abstractFlags ) /*0x6e14c6*/
      abstractFlags = 0; /*0x6e14cc*/
    else
      abstractFlags -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)vtable3; /*0x6e14c8*/
  }
  v8 = 15 * *(_DWORD *)&this->isAliveFlag; /*0x6e14d7*/
  if ( abstractFlags > v8 ) /*0x6e14dc*/
  {
    v11 = *p_vtable3; /*0x6e14e8*/
    v12 = dword_A8B230[127].abstractFlags; /*0x6e14ea*/
    if ( *p_vtable3 != (void *)-1 ) /*0x6e14f0*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)v11 >= v12 ) /*0x6e14f8*/
        v12 = 0; /*0x6e14fe*/
      else
        v12 -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)v11; /*0x6e14fa*/
    }
    v9 = v14; /*0x6e1500*/
    v10 = v12 - v8; /*0x6e1504*/
    *p_vtable3 = *(void **)&stru_A8EB00.?[416]; /*0x6e1506*/
  }
  else
  {
    v9 = v14; /*0x6e14de*/
    v10 = 0; /*0x6e14e2*/
    *p_vtable3 = *(void **)&stru_A8EB00.?[416]; /*0x6e14e4*/
  }
  p_vtable3[1] = v9; /*0x6e1508*/
  p_vtable3[2] = (void *)v10; /*0x6e150b*/
  ObjectClass::PreDraw((ObjectClass *)&stru_87F5F0.__pad_58[416]); /*0x6e1513*/
  return 1; /*0x6e1518*/
}



// ==== 0x006E1530  ScenarioClass::PrepareTextDisplay  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::PrepareTextDisplay(ScenarioClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  void **p_vtable3; // ecx
  AbstractClass *v7; // eax
  void *v9; // [esp+4h] [ebp-28h]
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF

  v5 = this->nextScenario[36]; /*0x6e1530*/
  p_vtable3 = &dword_A8B230[127].vtable3; /*0x6e1542*/
  dword_A8B230[127].vtable3 = *(void **)&stru_A8EB00.?[416]; /*0x6e154e*/
  p_vtable3[1] = v9; /*0x6e1557*/
  p_vtable3[2] = (void *)(15 * v5); /*0x6e155a*/
  v7 = dword_A8B230; /*0x6e155d*/
  if ( dword_A8B230[127].vtable3 == (void *)-1 ) /*0x6e1569*/
  {
    dword_A8B230[127].vtable3 = *(void **)&stru_A8EB00.?[416]; /*0x6e1571*/
    v7 = dword_A8B230; /*0x6e1577*/
  }
  v7[127].nextArrayIndex = (int)&g_TypeClass_DefaultString; /*0x6e1581*/
  if ( &g_INI_DefaultBuffer ) /*0x6e158d*/
  {
    strncpy(Destination, &g_INI_DefaultBuffer, 0x1Fu); /*0x6e15a1*/
    Destination[31] = 0; /*0x6e15a9*/
  }
  else
  {
    Destination[0] = (unsigned __int8)&g_INI_DefaultBuffer; /*0x6e158f*/
  }
  if ( Destination != (char *)&dword_A8B230[127].referenceCount ) /*0x6e15c1*/
    qmemcpy(&dword_A8B230[127].referenceCount, Destination, 0x20u); /*0x6e15cd*/
  ObjectClass::PreDraw((ObjectClass *)&stru_87F5F0.__pad_58[416]); /*0x6e15d5*/
  return 1; /*0x6e15dd*/
}



// ==== 0x006E15F0  ObjectClass::ReadINIEntry  this=ObjectClass  sig=csp ====
char __thiscall ObjectClass::ReadINIEntry(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  wchar_t *v5; // esi
  int *p_referenceCount; // edi
  char *v7; // esi
  char Destination[32]; // [esp+Ch] [ebp-40h] BYREF
  char v10[32]; // [esp+2Ch] [ebp-20h] BYREF

  v5 = (wchar_t *)((char *)&this->health + 1); /*0x6e15f8*/
  if ( BYTE1(this->health) && this != (ObjectClass *)-109 ) /*0x6e1604*/
  {
    strncpy(Destination, (const char *)&this->health + 1, 0x1Fu); /*0x6e1631*/
    Destination[31] = 0; /*0x6e163d*/
    dword_A8B230[127].nextArrayIndex = (int)GetStringCSF(v5, 0, g_Str_File_TAction_CPP, 2242); /*0x6e1656*/
    p_referenceCount = &dword_A8B230[127].referenceCount; /*0x6e1666*/
    if ( Destination != (char *)&dword_A8B230[127].referenceCount ) /*0x6e166e*/
    {
      v7 = Destination; /*0x6e1675*/
LABEL_10:
      qmemcpy(p_referenceCount, v7, 0x20u); /*0x6e16b0*/
    }
  }
  else
  {
    Destination[0] = 0; /*0x6e1611*/
    dword_A8B230[127].nextArrayIndex = (int)&g_TypeClass_DefaultString; /*0x6e1617*/
    if ( &g_INI_DefaultBuffer ) /*0x6e1621*/
    {
      strncpy(v10, &g_INI_DefaultBuffer, 0x1Fu); /*0x6e1687*/
      v10[31] = 0; /*0x6e168f*/
    }
    else
    {
      v10[0] = 0; /*0x6e1623*/
    }
    p_referenceCount = &dword_A8B230[127].referenceCount; /*0x6e169d*/
    if ( v10 != (char *)&dword_A8B230[127].referenceCount ) /*0x6e16a5*/
    {
      v7 = v10; /*0x6e16ac*/
      goto LABEL_10; /*0x6e16ac*/
    }
  }
  ObjectClass::PreDraw((ObjectClass *)&stru_87F5F0.__pad_58[416]); /*0x6e16b2*/
  return 1; /*0x6e16bc*/
}



// ==== 0x006E1780  TActionClass::PlayAudioAtRandomWP  this=TActionClass  sig=csp ====
char __thiscall TActionClass::PlayAudioAtRandomWP(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v7; // edi
  _DWORD *v8; // ebx
  __int16 *v9; // ecx
  int v10; // eax
  int v11; // ecx
  _DWORD v13[3]; // [esp+10h] [ebp-1A0h] BYREF
  int v14; // [esp+1Ch] [ebp-194h] BYREF
  _DWORD v15[100]; // [esp+20h] [ebp-190h] BYREF

  v5 = 0; /*0x6e178a*/
  v7 = 0; /*0x6e178e*/
  v8 = v15; /*0x6e1790*/
  do /*0x6e17cc*/
  {
    if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, v7) ) /*0x6e179b*/
    {
      ++v5; /*0x6e17b7*/
      *v8++ = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v14, v7); /*0x6e17b8*/
      if ( v5 == 400 ) /*0x6e17c3*/
        break; /*0x6e17c3*/
    }
    ++v7; /*0x6e17c5*/
  }
  while ( v7 < 702 ); /*0x6e17cc*/
  v9 = (__int16 *)&v15[Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v5 - 1)]; /*0x6e17e3*/
  v10 = (v9[1] << 8) + 128; /*0x6e1800*/
  v13[0] = (*v9 << 8) + 128; /*0x6e1805*/
  v11 = *(_DWORD *)&this->pad_6E[34]; /*0x6e1809*/
  v13[1] = v10; /*0x6e180f*/
  v13[2] = 0; /*0x6e1813*/
  PlayAudioAt2(v11, v13, 0); /*0x6e181b*/
  return 1; /*0x6e1820*/
}



// ==== 0x006E1830  ScriptAction::ReadParameter  this=ScriptAction  sig=csp ====
_DWORD *__thiscall ScriptAction::ReadParameter(ScriptAction *this)
{
  int v1; // esi
  int v2; // eax
  Cell *v3; // esi
  _DWORD *result; // eax
  __int16 v5[2]; // [esp+4h] [ebp-4h] BYREF

  v1 = *(_DWORD *)this->__pad_0 / 256; /*0x6e184b*/
  v2 = this->ScriptAction_field_0x4[0] / 256; /*0x6e184e*/
  v5[0] = v1; /*0x6e1851*/
  v5[1] = v2; /*0x6e1856*/
  if ( (_WORD)v1 == *(_WORD *)dword_B0E680 && (_WORD)v2 == *(_WORD *)&dword_B0E680[2] ) /*0x6e1875*/
    return 0; /*0x6e189e*/
  v3 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v5); /*0x6e1886*/
  result = Cell::IsBridge(v3); /*0x6e188a*/
  if ( !result ) /*0x6e1891*/
    return CellClass::FindInfantry((CellClass *)v3, 0); /*0x6e1896*/
  return result; /*0x6e189b*/
}



// ==== 0x006E18B0  CellClass::Find  this=CellClass  sig=csp ====
char __thiscall CellClass::Find(CellClass *this, int a2, int a3, int a4, int a5)
{
  int *WorldCoords; // eax
  Cell *v7; // edi
  ObjectClass *Infantry; // eax
  __int16 v10[2]; // [esp+8h] [ebp-1Ch] BYREF
  int v11; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h]
  int v13; // [esp+14h] [ebp-10h]
  _DWORD v14[3]; // [esp+18h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, v14, *(_DWORD *)&this->__pad_28[28]); /*0x6e18c6*/
  v11 = *WorldCoords; /*0x6e18cf*/
  v12 = WorldCoords[1]; /*0x6e18d6*/
  v13 = WorldCoords[2]; /*0x6e18e4*/
  v10[0] = v11 / 256; /*0x6e1904*/
  v10[1] = v12 / 256; /*0x6e1909*/
  if ( v10[0] == *(_WORD *)dword_B0E680 && (unsigned __int16)(v12 / 256) == *(_WORD *)&dword_B0E680[2] /*0x6e1947*/
    || (v7 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10),
        (Infantry = (ObjectClass *)Cell::IsBridge(v7)) == 0)
    && (Infantry = (ObjectClass *)CellClass::FindInfantry((CellClass *)v7, 0)) == 0 )
  {
    PlayAudioAt2(this->sensorsOfHouses[5], &v11, 1); /*0x6e196d*/
    return 1; /*0x6e1973*/
  }
  else
  {
    ObjectClass::CheckFlagD0(Infantry, this->sensorsOfHouses[5]); /*0x6e1952*/
    return 1; /*0x6e1958*/
  }
}



// ==== 0x006E1980  TActionClass::executeGuardAreaAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeGuardAreaAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int *WorldCoords; // eax
  Cell *v6; // esi
  ObjectClass *Infantry; // eax
  __int16 v9[2]; // [esp+4h] [ebp-1Ch] BYREF
  int v10; // [esp+8h] [ebp-18h] BYREF
  int v11; // [esp+Ch] [ebp-14h]
  int v12; // [esp+10h] [ebp-10h]
  _DWORD v13[3]; // [esp+14h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, v13, (int)this->TActionClass_field_44); /*0x6e1993*/
  v10 = *WorldCoords; /*0x6e199c*/
  v11 = WorldCoords[1]; /*0x6e19a3*/
  v12 = WorldCoords[2]; /*0x6e19b1*/
  v9[0] = v10 / 256; /*0x6e19d1*/
  v9[1] = v11 / 256; /*0x6e19d6*/
  if ( v9[0] == *(_WORD *)dword_B0E680 && (unsigned __int16)(v11 / 256) == *(_WORD *)&dword_B0E680[2] /*0x6e1a14*/
    || (v6 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9),
        (Infantry = (ObjectClass *)Cell::IsBridge(v6)) == 0)
    && (Infantry = (ObjectClass *)CellClass::FindInfantry((CellClass *)v6, 0)) == 0 )
  {
    globalHelper_050F40(&v10, 1); /*0x6e1a31*/
    return 1; /*0x6e1a36*/
  }
  else
  {
    ObjectClass::CheckFlagD0(Infantry, -1); /*0x6e1a1a*/
    return 1; /*0x6e1a1f*/
  }
}



// ==== 0x006E1A40  TActionClass::executePatrolAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executePatrolAction(TActionClass *this, void *a2, int a3, int a4, int a5)
{
  int *Waypoint_Location; // eax
  TActionClass *v7; // [esp+0h] [ebp-4h] BYREF

  v7 = this; /*0x6e1a40*/
  Waypoint_Location = ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v7, (int)this->TActionClass_field_44); /*0x6e1a50*/
  SelectSimilarBuildingTypes((ObjectClass *)a2, *Waypoint_Location); /*0x6e1a5c*/
  return 1; /*0x6e1a64*/
}



// ==== 0x006E1A70  TActionClass::executeScatterAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeScatterAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // kr00_4
  int v8[3]; // [esp+0h] [ebp-14h] BYREF
  __int16 v9[4]; // [esp+Ch] [ebp-8h] BYREF

  if ( dword_A83D4C->__pad_140[256] ) /*0x6e1a78*/
    return 1; /*0x6e1b79*/
  *(_DWORD *)v9 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v8, *(_DWORD *)&this->pad_6E[34]); /*0x6e1aaa*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9) + 80) & 0x100) != 0 /*0x6e1ad6*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9) + 80) & 0x400) != 0 )
  {
    v5 = 4; /*0x6e1adc*/
  }
  else
  {
    v5 = 0; /*0x6e1ad8*/
  }
  v6 = v5 + *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9) + 283); /*0x6e1afc*/
  v8[2] = v6 * dword_B0E6E0; /*0x6e1b36*/
  v8[1] = ((__int16)(v9[1] - v6 / 2) << 8) + 128; /*0x6e1b3d*/
  v8[0] = ((__int16)(v9[0] - v6 / 2) << 8) + 128; /*0x6e1b4c*/
  TActionClass_Helper(v8, *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1580)); /*0x6e1b61*/
  CellSystem::UpdateVisibility((CellSystem *)&stru_87F5F0.__pad_58[416]); /*0x6e1b6b*/
  return 1; /*0x6e1b73*/
}



// ==== 0x006E1BD0  ScenarioClass::UpdateCounters  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::UpdateCounters(ScenarioClass *this, int a2, int a3, int a4, int a5)
{
  int Status; // eax

  SuperClass::StartTimer(*(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * this->nextScenario[36]), 1, 0, 0); /*0x6e1bed*/
  if ( dword_A83D4C == (Object *)a2 ) /*0x6e1bf8*/
  {
    SidebarClass::AddCameo((SidebarClass *)&stru_87F5F0.__pad_58[416], 31, this->nextScenario[36]); /*0x6e1c08*/
    Status = HouseClass::GetStatus((HouseClass *)0x1F, 0); /*0x6e1c1a*/
    Sidebar::ActivateTab((int *)&stru_87F5F0.__pad_58[416], Status); /*0x6e1c25*/
  }
  return 1; /*0x6e1c2a*/
}



// ==== 0x006E1C40  SuperClass::Get  this=SuperClass  sig=csp ====
char __thiscall SuperClass::Get(SuperClass *this, int a2, int a3, int a4, int a5)
{
  int Status; // eax

  SuperClass::StartTimer(*(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * *(_DWORD *)&this->__pad_80[16]), 0, 0, 0); /*0x6e1c5d*/
  *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * *(_DWORD *)&this->__pad_80[16]) + 96) = 0; /*0x6e1c71*/
  if ( dword_A83D4C == (Object *)a2 ) /*0x6e1c7c*/
  {
    SidebarClass::AddCameo((SidebarClass *)&stru_87F5F0.__pad_58[416], 31, *(_DWORD *)&this->__pad_80[16]); /*0x6e1c8c*/
    Status = HouseClass::GetStatus((HouseClass *)0x1F, 0); /*0x6e1c9e*/
    Sidebar::ActivateTab((int *)&stru_87F5F0.__pad_58[416], Status); /*0x6e1ca9*/
  }
  return 1; /*0x6e1cae*/
}



// ==== 0x006E1CC0  TActionClass::executeRetreatAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeRetreatAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  AnimClass *v5; // eax
  __int16 v7[2]; // [esp+0h] [ebp-14h] BYREF
  int v8; // [esp+4h] [ebp-10h] BYREF
  int v9[2]; // [esp+8h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+10h] [ebp-4h]

  *(_DWORD *)v7 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v8, (int)this->TActionClass_field_44); /*0x6e1cdb*/
  GroundHeight = 0; /*0x6e1cdf*/
  v9[1] = (v7[1] << 8) + 128; /*0x6e1d00*/
  v9[0] = (v7[0] << 8) + 128; /*0x6e1d0a*/
  GroundHeight = Cell::GetGroundHeight(v9); /*0x6e1d13*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7) + 80) & 0x100) != 0 /*0x6e1d49*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e1d57*/
  }
  v5 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6e1d60*/
  if ( v5 ) /*0x6e1d6a*/
    *((_BYTE *)AnimClass::ctor( /*0x6e1d92*/
                 v5,
                 *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5244),
                 v9,
                 0,
                 1,
                 (void *)0x600,
                 0,
                 0)
    + 408) = 1;
  else
    MEMORY[0x198] = 1; /*0x6e1da3*/
  return 1; /*0x6e1d9b*/
}



// ==== 0x006E2050  globalHelper_0E2050  this=-  sig=csp ====
char __stdcall sub_6E2050(int a1, int a2, int a3, __int16 *a4)
{
  int v4; // ebp
  char v5; // bl
  int v6; // edi
  int *v7; // esi
  _DWORD *v8; // ecx
  int v9; // edx
  __int16 *v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // eax
  char v15; // [esp+1Dh] [ebp-15h]
  int v16[2]; // [esp+1Eh] [ebp-14h] BYREF
  _DWORD v17[3]; // [esp+26h] [ebp-Ch] BYREF

  v4 = a3; /*0x6e2055*/
  v15 = 0; /*0x6e205b*/
  do /*0x6e20ec*/
  {
    v5 = 0; /*0x6e2065*/
    v6 = 0; /*0x6e2067*/
    if ( dword_A8EC88 <= 0 ) /*0x6e206b*/
      break; /*0x6e206b*/
    do /*0x6e20e8*/
    {
      v7 = (int *)*((_DWORD *)dword_A8EC7C + v6); /*0x6e2076*/
      if ( v7[27] > 0 ) /*0x6e207e*/
      {
        if ( *((_BYTE *)v7 + 144) ) /*0x6e2080*/
        {
          if ( *((_BYTE *)v7 + 116) ) /*0x6e208a*/
          {
            if ( !*((_BYTE *)v7 + 129) ) /*0x6e2091*/
            {
              v8 = (_DWORD *)v7[13]; /*0x6e209b*/
              if ( v8 ) /*0x6e20a0*/
              {
                if ( LinkedList::Contains(v8, v4) ) /*0x6e20a3*/
                {
                  v9 = *v7; /*0x6e20b4*/
                  a3 = v7[27]; /*0x6e20b8*/
                  (*(void (__thiscall **)(int *, int *, _DWORD, int, _DWORD, int, _DWORD, _DWORD))(v9 + 364))( /*0x6e20d2*/
                    v7,
                    &a3,
                    0,
                    dword_8871E0->?[5],
                    0,
                    1,
                    0,
                    0);
                  v15 = 1; /*0x6e20d8*/
                  v5 = 1; /*0x6e20dd*/
                  --v6; /*0x6e20df*/
                }
              }
            }
          }
        }
      }
      ++v6; /*0x6e20e5*/
    }
    while ( v6 < dword_A8EC88 ); /*0x6e20e8*/
  }
  while ( v5 ); /*0x6e20ec*/
  v10 = a4; /*0x6e20f2*/
  if ( *(_DWORD *)a4 != dword_B0E680 ) /*0x6e2100*/
  {
    v11 = 3; /*0x6e2119*/
    if ( !CellClass::SetTerrainType(&dword_87F7E8, a4) ) /*0x6e211e*/
    {
      do /*0x6e213b*/
        v12 = v11--; /*0x6e2127*/
      while ( v12 > 0 && !CellClass::SetTerrainType(&dword_87F7E8, v10) ); /*0x6e213b*/
    }
    v13 = *v10 << 8; /*0x6e2147*/
    v17[1] = (v10[1] << 8) + 128; /*0x6e2157*/
    v17[0] = v13 + 128; /*0x6e2165*/
    v17[2] = dword_B0E6D4; /*0x6e2171*/
    Coord::To_Screen(g_TacticalClass_Instance, v17, v16); /*0x6e217d*/
    Cell::CreateCrater(v16[0] - 128, v16[1] - 128, 256, 256, 0); /*0x6e21af*/
  }
  return v15; /*0x6e21b8*/
}



// ==== 0x006E21D0  sub_6E21D0  this=-  sig=csp ====
char __stdcall sub_6E21D0(int a1, int a2, int a3, int a4)
{
  return 1; /*0x6e21d2*/
}



// ==== 0x006E21E0  TActionClass::executeFollowAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeFollowAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  void **p_TActionClass_field_34; // ecx
  int i; // eax
  int j; // esi

  p_TActionClass_field_34 = &this->TActionClass_field_34; /*0x6e21e0*/
  *(_DWORD *)&stru_87F5F0.__pad_58[668] = *p_TActionClass_field_34; /*0x6e21e5*/
  *(_DWORD *)&stru_87F5F0.__pad_58[672] = p_TActionClass_field_34[1]; /*0x6e21ed*/
  *(_DWORD *)&stru_87F5F0.__pad_58[676] = p_TActionClass_field_34[2]; /*0x6e21f6*/
  *(_DWORD *)&stru_87F5F0.__pad_58[680] = p_TActionClass_field_34[3]; /*0x6e21fe*/
  RadarClass::Process((RadarClass *)&stru_87F5F0.__pad_58[416]); /*0x6e2209*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6e2213*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6e2224*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    House::AnnounceUpgrade(i, -1); /*0x6e222a*/
  }
  Terrain::ConnectivityGraph((Terrain *)&stru_87F5F0.__pad_58[416]); /*0x6e2243*/
  MapClass::BuildSubzones((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x6e224d*/
  FogOfWar::Render((FogOfWar *)&stru_87F5F0.__pad_58[416]); /*0x6e2257*/
  for ( j = stru_A8EB00.ObjectTypeClass[20] - 1; j >= 0; --j ) /*0x6e2267*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(stru_A8EB00.ObjectTypeClass[17] + 4 * j) + 1184))( /*0x6e2275*/
      *(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * j),
      1);
  return 1; /*0x6e2281*/
}



// ==== 0x006E2290  TActionClass::executeEscortAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeEscortAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  AnimClass *v6; // eax
  __int16 v8[2]; // [esp+4h] [ebp-14h] BYREF
  int v9; // [esp+8h] [ebp-10h] BYREF
  int v10[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  *(_DWORD *)v8 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v9, (int)this->TActionClass_field_44); /*0x6e22ae*/
  GroundHeight = 0; /*0x6e22b2*/
  v10[1] = (v8[1] << 8) + 128; /*0x6e22d3*/
  v10[0] = (v8[0] << 8) + 128; /*0x6e22dd*/
  GroundHeight = Cell::GetGroundHeight(v10); /*0x6e22e6*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 80) & 0x100) != 0 /*0x6e231c*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e232a*/
  }
  v6 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6e2333*/
  if ( v6 ) /*0x6e233d*/
    *((_BYTE *)AnimClass::ctor( /*0x6e2368*/
                 v6,
                 *(void **)(FootClass_Array.?[3] + 4 * *(_DWORD *)&this->pad_6E[34]),
                 v10,
                 0,
                 1,
                 (void *)0x600,
                 0,
                 0)
    + 408) = 1;
  else
    MEMORY[0x198] = 1; /*0x6e237b*/
  return 1; /*0x6e2371*/
}



// ==== 0x006E2390  TActionClass::CreateWeaponImpactAtWaypoint  this=TActionClass  sig=csp ====
char __thiscall TActionClass::CreateWeaponImpactAtWaypoint(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // esi
  int v8; // ebx
  CellClass *v9; // eax
  void *WarheadVersusMultiplier; // esi
  AnimClass *v11; // ebp
  void *v12; // eax
  __int16 v14[2]; // [esp+10h] [ebp-14h] BYREF
  int v15; // [esp+14h] [ebp-10h] BYREF
  int v16; // [esp+18h] [ebp-Ch] BYREF
  int v17; // [esp+1Ch] [ebp-8h]
  int GroundHeight; // [esp+20h] [ebp-4h]

  *(_DWORD *)v14 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v15, (int)this->TActionClass_field_44); /*0x6e23b1*/
  GroundHeight = 0; /*0x6e23b5*/
  v17 = (v14[1] << 8) + 128; /*0x6e23d6*/
  v16 = (v14[0] << 8) + 128; /*0x6e23e0*/
  GroundHeight = Cell::GetGroundHeight(&v16); /*0x6e23e9*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14) + 80) & 0x100) != 0 /*0x6e241f*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e242d*/
  }
  v6 = *(_DWORD *)&this->pad_6E[34]; /*0x6e2431*/
  v7 = *((_DWORD *)g_WeaponTypeConfig + v6); /*0x6e2440*/
  v8 = *(_DWORD *)(v7 + 164); /*0x6e2449*/
  v9 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v16); /*0x6e244f*/
  WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier(v8, *(_DWORD *)(v7 + 172), v9->landType, &v16); /*0x6e246d*/
  if ( WarheadVersusMultiplier ) /*0x6e2471*/
  {
    v11 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6e247d*/
    if ( v11 ) /*0x6e2484*/
    {
      v12 = (void *)Return::HRESULT_Fail(v16, v17, GroundHeight); /*0x6e24a1*/
      AnimClass::ctor(v11, WarheadVersusMultiplier, &v16, 0, 1, (void *)0x2600, v12, 0); /*0x6e24b8*/
    }
  }
  CreateSmokeEffectAt(v8, *(_DWORD *)(*((_DWORD *)g_WeaponTypeConfig + v6) + 172), v16, v17, GroundHeight, 0, 0); /*0x6e24ea*/
  PlaySoundEffectAt(&v16, v8, 0, *(_DWORD *)(*((_DWORD *)g_WeaponTypeConfig + v6) + 172), 1, 0); /*0x6e250b*/
  return 1; /*0x6e2510*/
}



// ==== 0x006E2520  TActionClass::executeLoadAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeLoadAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  #374 *v6; // eax
  __int16 v8[2]; // [esp+4h] [ebp-14h] BYREF
  int v9; // [esp+8h] [ebp-10h] BYREF
  int v10[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  *(_DWORD *)v8 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v9, (int)this->TActionClass_field_44); /*0x6e253e*/
  GroundHeight = 0; /*0x6e2542*/
  v10[1] = (v8[1] << 8) + 128; /*0x6e2563*/
  v10[0] = (v8[0] << 8) + 128; /*0x6e256d*/
  GroundHeight = Cell::GetGroundHeight(v10); /*0x6e2576*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 80) & 0x100) != 0 /*0x6e25ac*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e25ba*/
  }
  v6 = (#374 *)__2_YAPAXI_Z(0x148u); /*0x6e25c3*/
  if ( v6 ) /*0x6e25cd*/
    DamageAnimClass::Constructor( /*0x6e25e8*/
      v6,
      *(_DWORD *)(stru_A8EB00.ObjectTypeClass[11] + 4 * *(_DWORD *)&this->pad_6E[34]),
      v10,
      0);
  return 1; /*0x6e25ef*/
}



// ==== 0x006E2660  SmallFunc_6E2660  this=-  sig=csp ====
char __stdcall SmallFunc_6E2660(int a1, int a2, int a3, int a4)
{
  Scenario *v5; // [esp+0h] [ebp-4h]

  *(_DWORD *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x6e2669*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x6e266f*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1426] = -1; /*0x6e2675*/
  Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x6e267f*/
  BuildingClass::TogglePower2((BuildingClass *)&stru_87F5F0.__pad_58[416], 0); /*0x6e268a*/
  BuildingClass::TogglePower((BuildingClass *)&stru_87F5F0.__pad_58[416], 0); /*0x6e2695*/
  stru_87F5F0.__pad_E12[1432] = 0; /*0x6e269a*/
  stru_87F5F0.__pad_E12[1433] = 0; /*0x6e26a0*/
  stru_87F5F0.__pad_E12[1434] = 0; /*0x6e26a6*/
  Scenario::ClearScreen(v5); /*0x6e26ac*/
  return 1; /*0x6e26b3*/
}



// ==== 0x006E26D0  ScenarioClass::Set  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::Set(ScenarioClass *this, int a2, int a3, int a4, int a5)
{
  __int16 v7[2]; // [esp+4h] [ebp-14h] BYREF
  int v8; // [esp+8h] [ebp-10h] BYREF
  _DWORD v9[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  *(_DWORD *)v7 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v8, this->nextScenario[17]); /*0x6e26ee*/
  GroundHeight = 0; /*0x6e26f2*/
  v9[1] = (v7[1] << 8) + 128; /*0x6e2713*/
  v9[0] = (v7[0] << 8) + 128; /*0x6e271d*/
  GroundHeight = Cell::GetGroundHeight(v9); /*0x6e2726*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7) + 80) & 0x100) != 0 /*0x6e275c*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e276a*/
  }
  TacticalClass::SetPosition((TacticalClass *)g_TacticalClass_Instance, v9, this->nextScenario[36]); /*0x6e2780*/
  return 1; /*0x6e2787*/
}



// ==== 0x006E2790  ObjectClass::method_6E2790  this=ObjectClass  sig=csp ====
char __thiscall sub_6E2790(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  __int16 v6[2]; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+4h] [ebp-10h] BYREF
  int v8[2]; // [esp+8h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+10h] [ebp-4h]

  *(_DWORD *)v6 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v7, this->ambientSoundController[2]); /*0x6e27ab*/
  GroundHeight = 0; /*0x6e27af*/
  v8[1] = (v6[1] << 8) + 128; /*0x6e27d0*/
  v8[0] = (v6[0] << 8) + 128; /*0x6e27da*/
  GroundHeight = Cell::GetGroundHeight(v8); /*0x6e27e3*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v6) + 80) & 0x100) != 0 /*0x6e2819*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v6) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e2827*/
  }
  Tactical::SetTacticalPosition((TacticalClass *)g_TacticalClass_Instance, v8); /*0x6e2836*/
  return 1; /*0x6e283d*/
}



// ==== 0x006E2970  BuildingLightClass::FindAllTargets  this=BuildingLightClass  sig=csp ====
char __thiscall BuildingLightClass::FindAllTargets(BuildingLightClass *this, int a2, int a3, int a4, int a5)
{
  char v5; // bl
  int v6; // edi
  int v8; // esi
  LinkedList *v9; // ecx

  v5 = 0; /*0x6e2978*/
  v6 = 0; /*0x6e297a*/
  if ( stru_A8EB00.ObjectTypeClass[20] <= 0 ) /*0x6e2980*/
    return 0; /*0x6e2a08*/
  do /*0x6e29fc*/
  {
    v8 = *(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * v6); /*0x6e298c*/
    if ( *(int *)(v8 + 108) > 0 ) /*0x6e2994*/
    {
      if ( *(_BYTE *)(v8 + 144) ) /*0x6e2996*/
      {
        if ( *(_BYTE *)(v8 + 116) ) /*0x6e29a0*/
        {
          if ( !*(_BYTE *)(v8 + 129) ) /*0x6e29a7*/
          {
            if ( *(_BYTE *)(*(_DWORD *)(v8 + 1312) + 5451) ) /*0x6e29b7*/
            {
              if ( *(_DWORD *)(v8 + 1536) ) /*0x6e29c1*/
              {
                v9 = *(LinkedList **)(v8 + 52); /*0x6e29cb*/
                if ( v9 ) /*0x6e29d0*/
                {
                  if ( (unsigned __int8)LinkedList::Contains(v9, a4) ) /*0x6e29d7*/
                  {
                    BuildingLightClass::FindTarget(*(BuildingLightClass **)(v8 + 1536), *(_DWORD **)&this->?); /*0x6e29ed*/
                    v5 = 1; /*0x6e29f2*/
                  }
                }
              }
            }
          }
        }
      }
    }
    ++v6; /*0x6e29f9*/
  }
  while ( v6 < stru_A8EB00.ObjectTypeClass[20] ); /*0x6e29fc*/
  return v5; /*0x6e29ff*/
}



// ==== 0x006E2A50  ObjectClass::method_6E2A50  this=ObjectClass  sig=csp ====
char __thiscall sub_6E2A50(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // esi
  _DWORD *v8; // eax
  int v9; // ecx

  if ( this->ambientSoundController[4] ) /*0x6e2a55*/
  {
    v6 = g_GameObjectCleanup; /*0x6e2a5c*/
    v7 = 0; /*0x6e2a62*/
    if ( g_GameObjectCleanup > 0 ) /*0x6e2a66*/
    {
      v8 = g_TagClassCount; /*0x6e2a68*/
      do /*0x6e2a91*/
      {
        if ( *(_DWORD *)(v8[v7] + 36) == this->ambientSoundController[4] ) /*0x6e2a78*/
        {
          v9 = v8[v7]; /*0x6e2a7a*/
          if ( v9 ) /*0x6e2a7f*/
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 32))(v9, 1); /*0x6e2a85*/
            v8 = g_TagClassCount; /*0x6e2a88*/
          }
          --v7; /*0x6e2a8d*/
        }
        ++v7; /*0x6e2a8e*/
      }
      while ( v7 < v6 ); /*0x6e2a91*/
    }
  }
  return 1; /*0x6e2a93*/
}



// ==== 0x006E2AF0  TActionClass::executeUnloadAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeUnloadAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v6; // esi
  TActionClass *v7; // ecx
  _BYTE *idxArray; // eax
  void *vtable0; // edx

  if ( !this->TActionClass_field_50 ) /*0x6e2af4*/
    return 1; /*0x6e2af4*/
  v6 = 0; /*0x6e2b00*/
  if ( dword_A8EAF8 <= 0 ) /*0x6e2b04*/
    return 1; /*0x6e2b69*/
  do /*0x6e2b5e*/
  {
    v7 = (TActionClass *)*((_DWORD *)dword_A8EAEC + v6); /*0x6e2b0f*/
    idxArray = (_BYTE *)v7->idxArray; /*0x6e2b12*/
    if ( idxArray == this->TActionClass_field_50 ) /*0x6e2b17*/
    {
      vtable0 = dword_A8B230[43].vtable0; /*0x6e2b1f*/
      if ( (vtable0 || idxArray[156]) /*0x6e2b47*/
        && (vtable0 != (void *)1 || idxArray[157])
        && (vtable0 != (void *)2 || idxArray[158]) )
      {
        TActionClass::executeAirstrikeAction(v7); /*0x6e2b51*/
      }
    }
    ++v6; /*0x6e2b5b*/
  }
  while ( v6 < dword_A8EAF8 ); /*0x6e2b5e*/
  return 1; /*0x6e2b61*/
}



// ==== 0x006E2C20  globalHelper_0E2C20  this=-  sig=csp ====
char __stdcall sub_6E2C20(int a1, int a2, int a3, int a4)
{
  LayerClass::ClearFactoryCellAssignments(&dword_87F7E8); /*0x6e2c25*/
  MapClass::MarkForRedraw(&dword_87F7E8, 1); /*0x6e2c31*/
  return 1; /*0x6e2c38*/
}



// ==== 0x006E2C40  TActionClass::SpawnMeteorShower  this=TActionClass  sig=csp ====
char __thiscall TActionClass::SpawnMeteorShower(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v6; // esi
  int String; // ebp
  int v8; // edi
  Random *p_NeedsSaveOrLink; // esi
  int v10; // ebx
  int v11; // eax
  AnimClass *v12; // esi
  bool v13; // zf
  signed int v14; // eax
  int v15; // eax
  __int16 v17[2]; // [esp+Ch] [ebp-24h] BYREF
  int v18; // [esp+10h] [ebp-20h]
  int v19; // [esp+14h] [ebp-1Ch] BYREF
  int v20; // [esp+18h] [ebp-18h] BYREF
  int v21; // [esp+1Ch] [ebp-14h]
  int GroundHeight; // [esp+20h] [ebp-10h]
  int v23[2]; // [esp+24h] [ebp-Ch] BYREF
  int v24; // [esp+2Ch] [ebp-4h]

  *(_DWORD *)v17 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v19, (int)this->TActionClass_field_44); /*0x6e2c60*/
  GroundHeight = 0; /*0x6e2c64*/
  v21 = (v17[1] << 8) + 128; /*0x6e2c85*/
  v20 = (v17[0] << 8) + 128; /*0x6e2c8f*/
  GroundHeight = Cell::GetGroundHeight(&v20); /*0x6e2c98*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17) + 80) & 0x100) != 0 /*0x6e2cce*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e2cdc*/
  }
  v6 = dword_842AFC[*(_DWORD *)&this->pad_6E[34]] /*0x6e2d0a*/
     + (int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) % 3;
  String = GlobalArray::FindString(&stru_842C20); /*0x6e2d1b*/
  v19 = GlobalArray::FindString(&stru_842C14); /*0x6e2d22*/
  v8 = 70 * v6; /*0x6e2d32*/
  if ( v6 <= 0 ) /*0x6e2d36*/
    return 1; /*0x6e2e0e*/
  v18 = v6; /*0x6e2d3d*/
  do /*0x6e2dfa*/
  {
    p_NeedsSaveOrLink = (Random *)&dword_A8B230[14].NeedsSaveOrLink; /*0x6e2d46*/
    v10 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % v8; /*0x6e2d58*/
    v11 = Random::State(p_NeedsSaveOrLink); /*0x6e2d5a*/
    v23[0] = v10 + v20; /*0x6e2d6d*/
    v24 = GroundHeight; /*0x6e2d77*/
    v23[1] = v11 % v8 + v21; /*0x6e2d7f*/
    v24 = Cell::GetGroundHeight(v23); /*0x6e2d93*/
    v12 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6e2d9c*/
    if ( v12 ) /*0x6e2da3*/
    {
      v14 = abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) & 0x80000001; /*0x6e2dba*/
      v13 = v14 == 0; /*0x6e2dba*/
      if ( v14 < 0 ) /*0x6e2dbf*/
        v13 = (((_BYTE)v14 - 1) | 0xFFFFFFFE) == -1; /*0x6e2dc5*/
      v15 = String; /*0x6e2dc6*/
      if ( v13 ) /*0x6e2dc8*/
        v15 = v19; /*0x6e2dca*/
      AnimClass::ctor(v12, *(void **)(FootClass_Array.?[3] + 4 * v15), v23, 0, 1, (void *)0x600, 0, 0); /*0x6e2dec*/
    }
    --v18; /*0x6e2df6*/
  }
  while ( v18 ); /*0x6e2dfa*/
  return 1; /*0x6e2e01*/
}



// ==== 0x006E2E60  TActionClass::executeSelfDestructAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeSelfDestructAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  UpdateSurfaceAnimations( /*0x6e2e8d*/
    10 * *(_DWORD *)&this->pad_6E[34],
    10 * dword_A8B230[378].uniqueId,
    10 * dword_A8B230[378].abstractFlags,
    0);
  dword_A8B230[378].vtable3 = *(void **)&this->pad_6E[34]; /*0x6e2ea1*/
  return 1; /*0x6e2ea0*/
}



// ==== 0x006E2EB0  TActionClass::executeExplodeAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeExplodeAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  UpdateSurfaceAnimations( /*0x6e2edd*/
    10 * (int)dword_A8B230[378].vtable3,
    10 * *(_DWORD *)&this->pad_6E[34],
    10 * dword_A8B230[378].abstractFlags,
    0);
  dword_A8B230[378].uniqueId = *(_DWORD *)&this->pad_6E[34]; /*0x6e2ef1*/
  return 1; /*0x6e2ef0*/
}



// ==== 0x006E2F00  TActionClass::executeChronoshiftAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeChronoshiftAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  UpdateSurfaceAnimations( /*0x6e2f2d*/
    10 * (int)dword_A8B230[378].vtable3,
    10 * dword_A8B230[378].uniqueId,
    10 * *(_DWORD *)&this->pad_6E[34],
    0);
  dword_A8B230[378].abstractFlags = *(_DWORD *)&this->pad_6E[34]; /*0x6e2f41*/
  return 1; /*0x6e2f40*/
}



// ==== 0x006E30C0  ObjectClass::CreateHouseClass  this=ObjectClass  sig=csp ====
char __userpurge CreateHouseClass@<al>(
        int a1@<ecx>,
        _UNKNOWN **a2@<ebp>,
        _DWORD *a3@<edi>,
        int a4,
        int a5,
        Property *a6,
        int a7)
{
  HouseClass *v7; // esi
  int Field11; // eax
  HouseClass *v10; // [esp+0h] [ebp-4h]

  v7 = *(HouseClass **)(a1 + 144); /*0x6e30c1*/
  if ( !a6 ) /*0x6e30cd*/
    return 0; /*0x6e30cd*/
  if ( v7 == (HouseClass *)8997 ) /*0x6e30d5*/
  {
    Field11 = Property::GetField11(a6); /*0x6e30d7*/
  }
  else
  {
    if ( v7 == (HouseClass *)-1 ) /*0x6e30e1*/
      return 0; /*0x6e3103*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v7) ) /*0x6e30e5*/
      Field11 = BuildingType::FindOwnerHouse(v7); /*0x6e30f0*/
    else
      Field11 = HouseClass::FindOwner(v7); /*0x6e30f7*/
  }
  if ( !Field11 ) /*0x6e30fe*/
    return 0; /*0x6e30fe*/
  HouseClass::RespawnStartingForces(v10, a2, a3, (int)v7); /*0x6e3108*/
  return 1; /*0x6e3102*/
}



// ==== 0x006E3120  ObjectClass::SmallFunc_6E3120  this=ObjectClass  sig=csp ====
char __userpurge SmallFunc_6E3120@<al>(
        int a1@<ecx>,
        _UNKNOWN **a2@<ebx>,
        _DWORD *a3@<edi>,
        int a4,
        int a5,
        Property *a6,
        int a7)
{
  HouseClass *v7; // esi
  int Field11; // eax
  HouseClass *v10; // [esp+0h] [ebp-4h]

  v7 = *(HouseClass **)(a1 + 144); /*0x6e3121*/
  if ( !a6 ) /*0x6e312d*/
    return 0; /*0x6e312d*/
  if ( v7 == (HouseClass *)8997 ) /*0x6e3135*/
  {
    Field11 = Property::GetField11(a6); /*0x6e3137*/
  }
  else
  {
    if ( v7 == (HouseClass *)-1 ) /*0x6e3141*/
      return 0; /*0x6e3163*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v7) ) /*0x6e3145*/
      Field11 = BuildingType::FindOwnerHouse(v7); /*0x6e3150*/
    else
      Field11 = HouseClass::FindOwner(v7); /*0x6e3157*/
  }
  if ( !Field11 ) /*0x6e315e*/
    return 0; /*0x6e315e*/
  HouseClass::RespawnStartingBuildings(v10, a2, a3, (int)v7); /*0x6e3168*/
  return 1; /*0x6e3162*/
}



// ==== 0x006E3180  TActionClass::executePlaceBeaconAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executePlaceBeaconAction(TActionClass *this, int a2, int a3, _DWORD *a4, int a5)
{
  HouseClass *v5; // esi
  HouseClass *Field11; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e3181*/
  if ( !a4 ) /*0x6e318d*/
    return 0; /*0x6e318d*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e3195*/
  {
    Field11 = (HouseClass *)Property::GetField11((Property *)a4); /*0x6e3197*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e31a1*/
      return 0; /*0x6e31c3*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e31a5*/
      Field11 = (HouseClass *)BuildingType::FindOwnerHouse(v5); /*0x6e31b0*/
    else
      Field11 = (HouseClass *)HouseClass::FindOwner(v5); /*0x6e31b7*/
  }
  if ( !Field11 ) /*0x6e31be*/
    return 0; /*0x6e31be*/
  HouseClass::ClearLowPowerTargets(Field11); /*0x6e31c8*/
  return 1; /*0x6e31c2*/
}



// ==== 0x006E31E0  TActionClass::executeJumpjetAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeJumpjetAction(TActionClass *this, int a2, int a3, _DWORD *a4, int a5)
{
  HouseClass *v5; // esi
  HouseClass *Field11; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e31e1*/
  if ( !a4 ) /*0x6e31ed*/
    return 0; /*0x6e31ed*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e31f5*/
  {
    Field11 = (HouseClass *)Property::GetField11((Property *)a4); /*0x6e31f7*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e3201*/
      return 0; /*0x6e3223*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e3205*/
      Field11 = (HouseClass *)BuildingType::FindOwnerHouse(v5); /*0x6e3210*/
    else
      Field11 = (HouseClass *)HouseClass::FindOwner(v5); /*0x6e3217*/
  }
  if ( !Field11 ) /*0x6e321e*/
    return 0; /*0x6e321e*/
  HouseClass::DestroyAllBuildings(Field11); /*0x6e3228*/
  return 1; /*0x6e3222*/
}



// ==== 0x006E3240  TActionClass::executeOpenGateAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeOpenGateAction(TActionClass *this, int a2, int a3, _DWORD *a4, int a5)
{
  HouseClass *v5; // esi
  HouseClass *Field11; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e3241*/
  if ( !a4 ) /*0x6e324d*/
    return 0; /*0x6e324d*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e3255*/
  {
    Field11 = (HouseClass *)Property::GetField11((Property *)a4); /*0x6e3257*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e3261*/
      return 0; /*0x6e3283*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e3265*/
      Field11 = (HouseClass *)BuildingType::FindOwnerHouse(v5); /*0x6e3270*/
    else
      Field11 = (HouseClass *)HouseClass::FindOwner(v5); /*0x6e3277*/
  }
  if ( !Field11 ) /*0x6e327e*/
    return 0; /*0x6e327e*/
  HouseClass::DestroyAllNonBuildingsNonNaval(Field11); /*0x6e3288*/
  return 1; /*0x6e3282*/
}



// ==== 0x006E32A0  TActionClass::executeCloseGateAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeCloseGateAction(TActionClass *this, int a2, int a3, _DWORD *a4, int a5)
{
  HouseClass *v5; // esi
  HouseClass *Field11; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e32a1*/
  if ( !a4 ) /*0x6e32ad*/
    return 0; /*0x6e32ad*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e32b5*/
  {
    Field11 = (HouseClass *)Property::GetField11((Property *)a4); /*0x6e32b7*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e32c1*/
      return 0; /*0x6e32e3*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e32c5*/
      Field11 = (HouseClass *)BuildingType::FindOwnerHouse(v5); /*0x6e32d0*/
    else
      Field11 = (HouseClass *)HouseClass::FindOwner(v5); /*0x6e32d7*/
  }
  if ( !Field11 ) /*0x6e32de*/
    return 0; /*0x6e32de*/
  HouseClass::DestroyAllNonBuildingsNaval(Field11); /*0x6e32e8*/
  return 1; /*0x6e32e2*/
}



// ==== 0x006E3380  ObjectClass::method_6E3380  this=ObjectClass  sig=csp ====
char __thiscall sub_6E3380(int *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // eax
  int v7; // [esp+0h] [ebp-10h] BYREF
  int v8; // [esp+4h] [ebp-Ch] BYREF
  int v9; // [esp+8h] [ebp-8h]
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v7 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v7, this->q011); /*0x6e339b*/
  GroundHeight = 0; /*0x6e339f*/
  v9 = (SHIWORD(v7) << 8) + 128; /*0x6e33c0*/
  v8 = ((__int16)v7 << 8) + 128; /*0x6e33ca*/
  GroundHeight = Cell::GetGroundHeight(&v8); /*0x6e33d5*/
  v5 = __2_YAPAXI_Z(0x14u); /*0x6e33d9*/
  if ( v5 ) /*0x6e33e3*/
    ActionQueue::PushEntry(v5, v8, v9, GroundHeight); /*0x6e3400*/
  return 1; /*0x6e3407*/
}



// ==== 0x006E3410  TActionClass::CreateNukeEffect  this=TActionClass  sig=csp ====
char __thiscall TActionClass::CreateNukeEffect(TActionClass *this, int a2, int a3, int a4, int a5)
{
  double v5; // st3
  double v6; // st4
  double v7; // st5
  double v8; // st6
  double v9; // st7
  _DWORD *v10; // esi
  int v11; // edi
  CellClass *v12; // eax
  int *UIObjectCOM; // edi
  int v14; // eax
  int v16; // [esp-10h] [ebp-68h]
  int v17; // [esp-Ch] [ebp-64h]
  __int16 v18[2]; // [esp+Ch] [ebp-4Ch] BYREF
  double v19; // [esp+10h] [ebp-48h] BYREF
  double v20; // [esp+18h] [ebp-40h]
  double v21; // [esp+20h] [ebp-38h]
  int v22; // [esp+28h] [ebp-30h] BYREF
  int v23; // [esp+2Ch] [ebp-2Ch]
  int GroundHeight; // [esp+30h] [ebp-28h]
  _DWORD v25[3]; // [esp+34h] [ebp-24h] BYREF
  _QWORD v26[3]; // [esp+40h] [ebp-18h] BYREF

  *(_DWORD *)v18 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v19, (int)this->TActionClass_field_44); /*0x6e3433*/
  GroundHeight = 0; /*0x6e3437*/
  v23 = (v18[1] << 8) + 128; /*0x6e3458*/
  v22 = (v18[0] << 8) + 128; /*0x6e3462*/
  GroundHeight = Cell::GetGroundHeight(&v22); /*0x6e346b*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18) + 80) & 0x100) != 0 ) /*0x6e3487*/
    GroundHeight += dword_B0E6D4; /*0x6e3495*/
  v10 = (_DWORD *)*((_DWORD *)g_WeaponTypeConfig + SuperWeaponClass::FindByName((SuperWeaponClass *)&stru_81AF8C.?)); /*0x6e34ad*/
  v11 = v10[40]; /*0x6e34c3*/
  v17 = v10[43]; /*0x6e34c9*/
  v16 = v10[41]; /*0x6e34ca*/
  v12 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v22); /*0x6e34d3*/
  UIObjectCOM = (int *)CreateUIObjectCOM(v11, (int)v12, 0, v16, v17, 50, 0); /*0x6e34e1*/
  Function::Method_46B260(UIObjectCOM, (int)v10); /*0x6e34e6*/
  v25[0] = v22; /*0x6e34ff*/
  v25[1] = v23; /*0x6e3503*/
  v25[2] = GroundHeight + 20000; /*0x6e3507*/
  if ( !UIObjectCOM ) /*0x6e350b*/
    return 0; /*0x6e35dc*/
  Math::SinCos(1.570748388432313); /*0x6e351b*/
  v19 = v5; /*0x6e3520*/
  Math::ArcTan2(1.570748388432313); /*0x6e352e*/
  v19 = v6 * v19 * -100.0; /*0x6e3547*/
  Math::ArcTan2(1.570748388432313); /*0x6e354b*/
  v20 = v7; /*0x6e3550*/
  Math::ArcTan2(1.570748388432313); /*0x6e355e*/
  v21 = v19; /*0x6e356f*/
  *(double *)&v26[1] = v19; /*0x6e358b*/
  v20 = v8 * v20 * -100.0; /*0x6e358f*/
  *(double *)v26 = v20; /*0x6e359b*/
  Math::SinCos(1.570748388432313); /*0x6e35ab*/
  v14 = *UIObjectCOM; /*0x6e35b6*/
  *(double *)&v26[2] = v9 * -100.0; /*0x6e35c5*/
  (*(void (__thiscall **)(int *, _DWORD *, _QWORD *))(v14 + 496))(UIObjectCOM, v25, v26); /*0x6e35cb*/
  return 1; /*0x6e35d3*/
}



// ==== 0x006E35F0  ObjectClass::method_6E35F0  this=ObjectClass  sig=csp ====
char __thiscall sub_6E35F0(ObjectClass *this, void *a2, int a3, int a4, int a5)
{
  __int16 v6[2]; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+4h] [ebp-10h] BYREF
  int v8; // [esp+8h] [ebp-Ch] BYREF
  int v9; // [esp+Ch] [ebp-8h]
  int GroundHeight; // [esp+10h] [ebp-4h]

  *(_DWORD *)v6 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v7, this->ambientSoundController[2]); /*0x6e360b*/
  GroundHeight = 0; /*0x6e360f*/
  v9 = (v6[1] << 8) + 128; /*0x6e3630*/
  v8 = (v6[0] << 8) + 128; /*0x6e363a*/
  GroundHeight = Cell::GetGroundHeight(&v8); /*0x6e3643*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v6) + 80) & 0x100) != 0 ) /*0x6e365f*/
    GroundHeight += dword_B0E6D4; /*0x6e366d*/
  LOWORD(v7) = v8 / 256; /*0x6e3681*/
  HIWORD(v7) = v9 / 256; /*0x6e3696*/
  if ( (unsigned __int8)LightningStorm::IsActive() ) /*0x6e369b*/
    return 0; /*0x6e36cc*/
  LightningStorm::Start( /*0x6e36bf*/
    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6044),
    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6036),
    v7,
    (#375 *)a2);
  return 1; /*0x6e36c6*/
}



// ==== 0x006E36E0  TActionClass::executeParadropAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeParadropAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  void *v5; // eax
  int *v6; // eax
  int v7; // esi
  int v8; // edi
  int v9; // ebx
  AnimClass *v10; // eax
  char *v11; // edi
  int v12; // ebx
  __int16 v13; // cx
  _DWORD *i; // esi
  __int16 v16[2]; // [esp+Ch] [ebp-18h] BYREF
  int v17; // [esp+10h] [ebp-14h] BYREF
  __int16 v18[2]; // [esp+14h] [ebp-10h] BYREF
  int v19[3]; // [esp+18h] [ebp-Ch] BYREF

  *(_DWORD *)v16 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v17, (int)this->TActionClass_field_44); /*0x6e3706*/
  v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x6e370a*/
  v6 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v5 + 72))(v5, v19); /*0x6e3718*/
  v7 = *v6; /*0x6e371b*/
  v8 = v6[1]; /*0x6e3722*/
  v9 = v6[2]; /*0x6e3725*/
  v10 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6e3728*/
  if ( v10 ) /*0x6e3732*/
  {
    v19[2] = v9 + 5; /*0x6e373b*/
    v19[0] = v7; /*0x6e3752*/
    v19[1] = v8; /*0x6e3756*/
    AnimClass::ctor( /*0x6e3764*/
      v10,
      *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 840),
      v19,
      0,
      1,
      (void *)0x600,
      0,
      0);
  }
  v11 = &g_MissionQueueFrame.waypoints[2150]; /*0x6e3772*/
  v12 = 9; /*0x6e3777*/
  do /*0x6e37da*/
  {
    v13 = *((_WORD *)v11 + 1); /*0x6e377e*/
    LOWORD(v17) = *(_WORD *)v11 + v16[0]; /*0x6e378a*/
    HIWORD(v17) = v16[1] + v13; /*0x6e378f*/
    *(_DWORD *)v18 = v17; /*0x6e37a2*/
    for ( i = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18) + 57); /*0x6e37b3*/
          i;
          i = (_DWORD *)i[12] )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*i + 340))( /*0x6e37c9*/
        i,
        *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4072),
        0,
        0);
    }
    v11 += 4; /*0x6e37d6*/
    --v12; /*0x6e37d9*/
  }
  while ( v12 ); /*0x6e37da*/
  return 1; /*0x6e37dc*/
}



// ==== 0x006E37F0  ObjectClass::method_6E37F0  this=ObjectClass  sig=csp ====
char __thiscall sub_6E37F0(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // ebx
  int v7; // ecx
  char result; // al

  v5 = stru_A8EB00.ObjectTypeClass[4] - 1; /*0x6e37fa*/
  if ( stru_A8EB00.ObjectTypeClass[4] - 1 >= 0 ) /*0x6e3803*/
  {
    v6 = stru_A8EB00.ObjectTypeClass[1] + 4 * v5; /*0x6e380b*/
    while ( strcmp((const char *)(*(_DWORD *)v6 + 36), (const char *)&this->customSound_controller[1]) ) /*0x6e3845*/
    {
      --v5; /*0x6e3847*/
      v6 -= 4; /*0x6e3848*/
      if ( v5 < 0 ) /*0x6e384d*/
        goto LABEL_7; /*0x6e384d*/
    }
    *(_DWORD *)(*(_DWORD *)v6 + 1588) = *(_DWORD *)&this->isAliveFlag; /*0x6e385b*/
  }
LABEL_7:
  v7 = stru_A80220.? - 1; /*0x6e3861*/
  for ( result = 1; v7 >= 0; *(_BYTE *)(*((_DWORD *)stru_A80220.? + v7 + 1) + 508) = 1 ) /*0x6e3870*/
    --v7; /*0x6e3878*/
  return result; /*0x6e3867*/
}



// ==== 0x006E38F0  SuperWeaponClass::CreateChemLauncher  this=SuperWeaponClass  sig=csp ====
char __thiscall SuperWeaponClass::CreateChemLauncher(SuperWeaponClass *this, int a2, int a3, int a4, int a5)
{
  double v5; // st3
  double v6; // st4
  double v7; // st5
  double v8; // st6
  double v9; // st7
  int v10; // edi
  _DWORD *v11; // eax
  int v12; // esi
  CellClass *v13; // eax
  int *UIObjectCOM; // esi
  int v15; // eax
  int v17; // [esp-10h] [ebp-60h]
  int v18; // [esp-Ch] [ebp-5Ch]
  __int16 v19[2]; // [esp+8h] [ebp-48h] BYREF
  __int16 v20[2]; // [esp+Ch] [ebp-44h] BYREF
  double v21; // [esp+10h] [ebp-40h] BYREF
  double v22; // [esp+18h] [ebp-38h] BYREF
  double v23; // [esp+20h] [ebp-30h]
  int v24; // [esp+2Ch] [ebp-24h] BYREF
  int v25; // [esp+30h] [ebp-20h]
  int GroundHeight; // [esp+34h] [ebp-1Ch]
  _QWORD v27[3]; // [esp+38h] [ebp-18h] BYREF

  *(_DWORD *)v19 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v20, *((_DWORD *)this + 17)); /*0x6e3913*/
  GroundHeight = 0; /*0x6e3917*/
  v25 = (v19[1] << 8) + 128; /*0x6e3938*/
  v24 = (v19[0] << 8) + 128; /*0x6e3942*/
  GroundHeight = Cell::GetGroundHeight(&v24); /*0x6e394b*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19) + 80) & 0x100) != 0 ) /*0x6e3967*/
    GroundHeight += dword_B0E6D4; /*0x6e3975*/
  v20[0] = v24 / 256; /*0x6e398f*/
  v20[1] = v25 / 256; /*0x6e39a4*/
  v10 = *JumpjetLocomotionClass::ClampToCellBounds((JumpjetLocomotionClass *)&stru_87F5F0.__pad_58[416], &v21, v20, 0); /*0x6e39c1*/
  *(_DWORD *)v20 = v10; /*0x6e39c8*/
  v11 = (_DWORD *)*((_DWORD *)g_WeaponTypeConfig + SuperWeaponClass::FindByName(&stru_842C2C)); /*0x6e39de*/
  v12 = v11[40]; /*0x6e39ec*/
  v18 = v11[43]; /*0x6e39f2*/
  v17 = v11[41]; /*0x6e39f3*/
  v13 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v24); /*0x6e3a00*/
  UIObjectCOM = (int *)CreateUIObjectCOM(v12, (int)v13, 0, v17, v18, 20, 0); /*0x6e3a0e*/
  if ( !UIObjectCOM ) /*0x6e3a12*/
    return 0; /*0x6e3b0d*/
  Math::ArcTan2(-0.00009587672516830327); /*0x6e3a22*/
  v21 = v5; /*0x6e3a27*/
  Math::SinCos(1.570748388432313); /*0x6e3a35*/
  v21 = v6 * v21 * 100.0; /*0x6e3a4e*/
  Math::ArcTan2(-0.00009587672516830327); /*0x6e3a52*/
  v22 = v7; /*0x6e3a57*/
  Math::ArcTan2(1.570748388432313); /*0x6e3a65*/
  v23 = v21; /*0x6e3a76*/
  *(double *)&v27[1] = v21; /*0x6e3a92*/
  v22 = v8 * v22 * 100.0; /*0x6e3a96*/
  *(double *)v27 = v22; /*0x6e3aa2*/
  Math::SinCos(-0.00009587672516830327); /*0x6e3ab2*/
  *(double *)&v27[2] = v9 * 100.0; /*0x6e3ac5*/
  v15 = *UIObjectCOM; /*0x6e3ac9*/
  LODWORD(v22) = ((__int16)v10 << 8) + 128; /*0x6e3ae0*/
  HIDWORD(v22) = (v20[1] << 8) + 128; /*0x6e3ae4*/
  LODWORD(v23) = 0; /*0x6e3af4*/
  (*(void (__thiscall **)(int *, double *, _QWORD *))(v15 + 496))(UIObjectCOM, &v22, v27); /*0x6e3afc*/
  return 1; /*0x6e3b04*/
}



// ==== 0x006E3B40  TActionClass::executeLightningAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeLightningAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  if ( !a2 ) /*0x6e3b48*/
    return 0; /*0x6e3b4a*/
  HouseClass::CreateRadarOutage(a2, *(_DWORD *)&this->pad_6E[34]); /*0x6e3b56*/
  return 1; /*0x6e3b4c*/
}



// ==== 0x006E3B60  ScriptAction::GetActionTypeInfo  this=ScriptAction  sig=csp ====
int __thiscall ScriptAction::GetActionTypeInfo(ScriptAction *this)
{
  int result; // eax

  switch ( (unsigned int)this ) /*0x6e3b76*/
  {
    case 1u: /*0x6e3b76*/
    case 2u: /*0x6e3b76*/
    case 3u: /*0x6e3b76*/
    case 6u: /*0x6e3b76*/
    case 9u: /*0x6e3b76*/
    case 0xDu: /*0x6e3b76*/
    case 0xEu: /*0x6e3b76*/
    case 0x24u: /*0x6e3b76*/
    case 0x25u: /*0x6e3b76*/
    case 0x26u: /*0x6e3b76*/
    case 0x4Au: /*0x6e3b76*/
    case 0x4Bu: /*0x6e3b76*/
    case 0x71u: /*0x6e3b76*/
    case 0x77u: /*0x6e3b76*/
    case 0x78u: /*0x6e3b76*/
    case 0x79u: /*0x6e3b76*/
    case 0x7Au: /*0x6e3b76*/
    case 0x7Bu: /*0x6e3b76*/
    case 0x7Cu: /*0x6e3b76*/
    case 0x7Eu: /*0x6e3b76*/
    case 0x82u: /*0x6e3b76*/
      result = 13; /*0x6e3b89*/
      break; /*0x6e3b8e*/
    case 4u: /*0x6e3b76*/
    case 5u: /*0x6e3b76*/
    case 7u: /*0x6e3b76*/
    case 0x69u: /*0x6e3b76*/
      result = 12; /*0x6e3b95*/
      break; /*0x6e3b9a*/
    case 8u: /*0x6e3b76*/
    case 0x11u: /*0x6e3b76*/
    case 0x12u: /*0x6e3b76*/
    case 0x3Bu: /*0x6e3b76*/
    case 0x3Fu: /*0x6e3b76*/
    case 0x40u: /*0x6e3b76*/
    case 0x41u: /*0x6e3b76*/
    case 0x42u: /*0x6e3b76*/
    case 0x59u: /*0x6e3b76*/
    case 0x5Au: /*0x6e3b76*/
    case 0x5Eu: /*0x6e3b76*/
    case 0x5Fu: /*0x6e3b76*/
    case 0x60u: /*0x6e3b76*/
    case 0x65u: /*0x6e3b76*/
    case 0x66u: /*0x6e3b76*/
    case 0x6Du: /*0x6e3b76*/
    case 0x70u: /*0x6e3b76*/
    case 0x74u: /*0x6e3b76*/
    case 0x80u: /*0x6e3b76*/
    case 0x87u: /*0x6e3b76*/
    case 0x89u: /*0x6e3b76*/
    case 0x8Cu: /*0x6e3b76*/
      result = 9; /*0x6e3c01*/
      break; /*0x6e3c06*/
    case 0xAu: /*0x6e3b76*/
    case 0x64u: /*0x6e3b76*/
    case 0x75u: /*0x6e3b76*/
      result = 2; /*0x6e3bb9*/
      break; /*0x6e3bbe*/
    case 0xBu: /*0x6e3b76*/
    case 0x67u: /*0x6e3b76*/
      result = 39; /*0x6e3b7d*/
      break; /*0x6e3b82*/
    case 0xCu: /*0x6e3b76*/
    case 0x16u: /*0x6e3b76*/
    case 0x35u: /*0x6e3b76*/
    case 0x36u: /*0x6e3b76*/
      result = 11; /*0x6e3bad*/
      break; /*0x6e3bb2*/
    case 0x13u: /*0x6e3b76*/
    case 0x62u: /*0x6e3b76*/
      result = 3; /*0x6e3bbf*/
      break; /*0x6e3bc4*/
    case 0x14u: /*0x6e3b76*/
      result = 1; /*0x6e3bb3*/
      break; /*0x6e3bb8*/
    case 0x15u: /*0x6e3b76*/
      result = 4; /*0x6e3bc5*/
      break; /*0x6e3bca*/
    case 0x19u: /*0x6e3b76*/
    case 0x1Au: /*0x6e3b76*/
    case 0x1Bu: /*0x6e3b76*/
    case 0x27u: /*0x6e3b76*/
    case 0x2Cu: /*0x6e3b76*/
    case 0x49u: /*0x6e3b76*/
    case 0x4Cu: /*0x6e3b76*/
    case 0x4Du: /*0x6e3b76*/
    case 0x4Eu: /*0x6e3b76*/
    case 0x4Fu: /*0x6e3b76*/
    case 0x54u: /*0x6e3b76*/
    case 0x6Eu: /*0x6e3b76*/
    case 0x72u: /*0x6e3b76*/
    case 0x7Fu: /*0x6e3b76*/
    case 0x8Bu: /*0x6e3b76*/
    case 0x8Eu: /*0x6e3b76*/
    case 0x8Fu: /*0x6e3b76*/
    case 0x90u: /*0x6e3b76*/
      result = 10; /*0x6e3c19*/
      break; /*0x6e3c1e*/
    case 0x1Cu: /*0x6e3b76*/
    case 0x1Du: /*0x6e3b76*/
      result = 22; /*0x6e3bdd*/
      break; /*0x6e3be2*/
    case 0x1Eu: /*0x6e3b76*/
    case 0x55u: /*0x6e3b76*/
    case 0x56u: /*0x6e3b76*/
    case 0x57u: /*0x6e3b76*/
      result = 16; /*0x6e3b8f*/
      break; /*0x6e3b94*/
    case 0x21u: /*0x6e3b76*/
    case 0x22u: /*0x6e3b76*/
    case 0x86u: /*0x6e3b76*/
      result = 17; /*0x6e3b83*/
      break; /*0x6e3b88*/
    case 0x23u: /*0x6e3b76*/
      result = 15; /*0x6e3be9*/
      break; /*0x6e3bee*/
    case 0x28u: /*0x6e3b76*/
      result = 21; /*0x6e3bef*/
      break; /*0x6e3bf4*/
    case 0x29u: /*0x6e3b76*/
      result = 23; /*0x6e3bf5*/
      break; /*0x6e3bfa*/
    case 0x2Au: /*0x6e3b76*/
      result = 24; /*0x6e3c07*/
      break; /*0x6e3c0c*/
    case 0x2Bu: /*0x6e3b76*/
      result = 27; /*0x6e3c0d*/
      break; /*0x6e3c12*/
    case 0x30u: /*0x6e3b76*/
      result = 30; /*0x6e3c13*/
      break; /*0x6e3c18*/
    case 0x34u: /*0x6e3b76*/
      result = 25; /*0x6e3c1f*/
      break; /*0x6e3c24*/
    case 0x37u: /*0x6e3b76*/
      result = 28; /*0x6e3c25*/
      break; /*0x6e3c2a*/
    case 0x38u: /*0x6e3b76*/
    case 0x39u: /*0x6e3b76*/
      result = 29; /*0x6e3be3*/
      break; /*0x6e3be8*/
    case 0x3Au: /*0x6e3b76*/
      result = 31; /*0x6e3c2b*/
      break; /*0x6e3c30*/
    case 0x46u: /*0x6e3b76*/
      result = 26; /*0x6e3bcb*/
      break; /*0x6e3bd0*/
    case 0x47u: /*0x6e3b76*/
    case 0x48u: /*0x6e3b76*/
      result = 33; /*0x6e3c31*/
      break; /*0x6e3c36*/
    case 0x50u: /*0x6e3b76*/
    case 0x6Bu: /*0x6e3b76*/
      result = 34; /*0x6e3ba1*/
      break; /*0x6e3ba6*/
    case 0x58u: /*0x6e3b76*/
      result = 35; /*0x6e3ba7*/
      break; /*0x6e3bac*/
    case 0x63u: /*0x6e3b76*/
      result = 38; /*0x6e3bfb*/
      break; /*0x6e3c00*/
    case 0x68u: /*0x6e3b76*/
      result = 40; /*0x6e3b9b*/
      break; /*0x6e3ba0*/
    case 0x6Au: /*0x6e3b76*/
    case 0x73u: /*0x6e3b76*/
      result = 43; /*0x6e3bd1*/
      break; /*0x6e3bd6*/
    case 0x6Cu: /*0x6e3b76*/
      result = 44; /*0x6e3c37*/
      break; /*0x6e3c3c*/
    case 0x7Du: /*0x6e3b76*/
      result = 45; /*0x6e3c3d*/
      break; /*0x6e3c42*/
    case 0x81u: /*0x6e3b76*/
    case 0x84u: /*0x6e3b76*/
    case 0x85u: /*0x6e3b76*/
      result = 46; /*0x6e3bd7*/
      break; /*0x6e3bdc*/
    case 0x83u: /*0x6e3b76*/
      result = 47; /*0x6e3c43*/
      break; /*0x6e3c48*/
    default:
      result = 0; /*0x6e3c49*/
      break; /*0x6e3c49*/
  }
  return result; /*0x6e3b82*/
}



// ==== 0x006E3D70  TActionClass::ddtor  this=TActionClass  sig=csp ====
int __stdcall TActionClass::ddtor(TActionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6e3d76*/
    return -2147467261; /*0x6e3d78*/
  *a2 = 1326367634; /*0x6e3d86*/
  a2[1] = 298977877; /*0x6e3d8e*/
  a2[2] = 1610655660; /*0x6e3d97*/
  a2[3] = unk_7E980C; /*0x6e3da0*/
  return 0; /*0x6e3d7d*/
}



// ==== 0x006E3DB0  TActionClass::SaveLoad_Prefix  this=TActionClass  sig=csp ====
int __stdcall TActionClass::SaveLoad_Prefix(TActionClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6e3dbb*/
  if ( result >= 0 ) /*0x6e3dc2*/
  {
    if ( this ) /*0x6e3dc6*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x6e3dcf*/
      this->AbstractClass = &TActionClass::`vftable'; /*0x6e3dd4*/
      this->? = &TActionClass::`vftable'; /*0x6e3dda*/
      this->? = &TActionClass::`vftable'; /*0x6e3de1*/
      this->? = &TActionClass::`vftable'; /*0x6e3de8*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->TActionClass_field_28); /*0x6e3df8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->TActionClass_field_30); /*0x6e3e06*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->TActionClass_field_4C); /*0x6e3e14*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->TActionClass_field_50); /*0x6e3e22*/
    return 0; /*0x6e3e27*/
  }
  return result; /*0x6e3e29*/
}



// ==== 0x006E3E30  TActionClass::SaveLoad_Prefix_0  this=TActionClass  sig=csp ====
int __stdcall TActionClass::SaveLoad_Prefix_0(TActionClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6e3e3f*/
  if ( result >= 0 ) /*0x6e3e46*/
    return 0; /*0x6e3e48*/
  return result; /*0x6e3e4a*/
}



// ==== 0x006E3E50  TActionClass::Validate  this=TActionClass  sig=csp ====
int __thiscall TActionClass::Validate(TActionClass *this, int a2)
{
  _DWORD *TActionClass_field_28; // eax
  int v4; // eax
  _DWORD *TActionClass_field_30; // eax
  int v6; // eax
  _DWORD *TActionClass_field_4C; // eax
  int v8; // eax
  _DWORD *TActionClass_field_50; // eax
  int v10; // eax

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x6e3e59*/
  TActionClass_field_28 = this->TActionClass_field_28; /*0x6e3e5e*/
  if ( TActionClass_field_28 ) /*0x6e3e63*/
  {
    v4 = (*(int (__stdcall **)(_DWORD *))(TActionClass_field_28[1] + 16))(TActionClass_field_28 + 1); /*0x6e3e6c*/
    Power::TimerProcess(v4); /*0x6e3e72*/
  }
  Power::TimerProcess((int)this->TActionClass_field_2C); /*0x6e3e7d*/
  TActionClass_field_30 = this->TActionClass_field_30; /*0x6e3e82*/
  if ( TActionClass_field_30 ) /*0x6e3e87*/
  {
    v6 = (*(int (__stdcall **)(_DWORD *))(TActionClass_field_30[1] + 16))(TActionClass_field_30 + 1); /*0x6e3e90*/
    Power::TimerProcess(v6); /*0x6e3e96*/
  }
  TActionClass_field_4C = this->TActionClass_field_4C; /*0x6e3e9b*/
  if ( TActionClass_field_4C ) /*0x6e3ea0*/
  {
    v8 = (*(int (__stdcall **)(_DWORD *))(TActionClass_field_4C[1] + 16))(TActionClass_field_4C + 1); /*0x6e3ea9*/
    Power::TimerProcess(v8); /*0x6e3eaf*/
  }
  TActionClass_field_50 = this->TActionClass_field_50; /*0x6e3eb4*/
  if ( TActionClass_field_50 ) /*0x6e3eb9*/
  {
    v10 = (*(int (__stdcall **)(_DWORD *))(TActionClass_field_50[1] + 16))(TActionClass_field_50 + 1); /*0x6e3ec2*/
    Power::TimerProcess(v10); /*0x6e3ec8*/
  }
  return Power::TimerProcess(*(_DWORD *)&this->pad_6E[34]); /*0x6e3edb*/
}



// ==== 0x006E3EE0  TriggerTypeClass::Dispatch  this=TriggerTypeClass  sig=csp ====
int __thiscall TriggerTypeClass::Dispatch(TriggerTypeClass *this)
{
  int result; // eax

  result = 0; /*0x6e3ee3*/
  switch ( (unsigned int)this ) /*0x6e3ef2*/
  {
    case 0xEu: /*0x6e3ef2*/
    case 0x20u: /*0x6e3ef2*/
    case 0x3Cu: /*0x6e3ef2*/
    case 0x3Du: /*0x6e3ef2*/
    case 0x3Eu: /*0x6e3ef2*/
    case 0x5Bu: /*0x6e3ef2*/
    case 0x6Fu: /*0x6e3ef2*/
      result = 2; /*0x6e3ef9*/
      break; /*0x6e3ef9*/
    default:
      return result;
  }
  return result; /*0x6e3efe*/
}



// ==== 0x006E3F70  ObjectClass::method_6E3F70  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6E3F70(ObjectClass *this, _DWORD *a2)
{
  _DWORD *WorldCoords; // edx
  _DWORD v4[3]; // [esp+4h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, v4, *(_DWORD *)&this->isAliveFlag); /*0x6e3f8b*/
  *a2 = *WorldCoords; /*0x6e3f95*/
  a2[1] = WorldCoords[1]; /*0x6e3f9a*/
  a2[2] = WorldCoords[2]; /*0x6e3fa1*/
  return a2; /*0x6e3f9d*/
}



// ==== 0x006E4090  LoadBuildingClass  this=-  sig=csp ====
char __stdcall sub_6E4090(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // esi
  _DWORD *v6; // ecx

  v4 = 0; /*0x6e409b*/
  if ( dword_A8EB50 <= 0 ) /*0x6e409f*/
    return 0; /*0x6e40e3*/
  while ( 1 ) /*0x6e40aa*/
  {
    v5 = *((_DWORD *)dword_A8EB44 + v4); /*0x6e40aa*/
    if ( *(_BYTE *)(v5 + 144) ) /*0x6e40ad*/
    {
      if ( *(_BYTE *)(v5 + 116) ) /*0x6e40b7*/
      {
        if ( !*(_BYTE *)(v5 + 129) ) /*0x6e40be*/
        {
          v6 = *(_DWORD **)(v5 + 52); /*0x6e40c8*/
          if ( v6 ) /*0x6e40cd*/
          {
            if ( LinkedList::Contains(v6, a3) ) /*0x6e40d0*/
              break; /*0x6e40d0*/
          }
        }
      }
    }
    if ( ++v4 >= dword_A8EB50 ) /*0x6e40e1*/
      return 0; /*0x6e40e1*/
  }
  BuildingClass::UnloadUnits((int *)v5, 0, 0); /*0x6e40f2*/
  return 1; /*0x6e40e3*/
}



// ==== 0x006E4100  TActionClass::executePsychicDominatorAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executePsychicDominatorAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // esi

  v5 = *(_DWORD *)&this->pad_6E[34]; /*0x6e4101*/
  if ( v5 >= 4 || !(unsigned __int8)PlayerClass::HasPlayers((PlayerClass *)(3988 * v5 + 8916268)) ) /*0x6e4124*/
    return 0; /*0x6e413e*/
  SidebarClass::SwitchTab((int)&stru_87F5F0.__pad_58[416], v5); /*0x6e4133*/
  return 1; /*0x6e413a*/
}



// ==== 0x006E4150  TActionClass::executeGeneticMutatorAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeGeneticMutatorAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // edi
  char *p_TActionClass_field_54; // ebx
  int v8; // ebp

  v5 = -1; /*0x6e415d*/
  v6 = stru_A8EB00.ObjectTypeClass[4] - 1; /*0x6e4160*/
  if ( stru_A8EB00.ObjectTypeClass[4] - 1 >= 0 ) /*0x6e416b*/
  {
    p_TActionClass_field_54 = &this->TActionClass_field_54; /*0x6e4172*/
    v8 = stru_A8EB00.ObjectTypeClass[1] + 4 * v6; /*0x6e4175*/
    while ( strcmp((const char *)(*(_DWORD *)v8 + 36), p_TActionClass_field_54) ) /*0x6e41ab*/
    {
      --v6; /*0x6e41ad*/
      v8 -= 4; /*0x6e41ae*/
      if ( v6 < 0 ) /*0x6e41b3*/
      {
        v5 = -1; /*0x6e41b5*/
        goto LABEL_7; /*0x6e41b9*/
      }
    }
    v5 = v6; /*0x6e41bb*/
  }
LABEL_7:
  if ( v5 >= stru_A8EB00.ObjectTypeClass[4] || v5 < 0 ) /*0x6e41cd*/
    return 0; /*0x6e41f6*/
  TActionClass::executeHarvestAction( /*0x6e41e9*/
    (TActionClass *)&stru_87F5F0.__pad_58[416],
    *(_DWORD *)(stru_A8EB00.ObjectTypeClass[1] + 4 * v5),
    *(_DWORD *)&this->pad_6E[34]);
  return 1; /*0x6e41c3*/
}



// ==== 0x006E4200  TActionClass::executeForceShieldAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeForceShieldAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  void *v7; // eax
  _DWORD *v8; // eax
  int IndexByName; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // esi
  int v14; // [esp+8h] [ebp-1Ch] BYREF
  _DWORD v15[3]; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v16[12]; // [esp+18h] [ebp-Ch] BYREF

  v5 = a2; /*0x6e4205*/
  if ( !a2 ) /*0x6e420d*/
    return 0; /*0x6e420d*/
  a2 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v14, (int)this->TActionClass_field_44); /*0x6e4233*/
  v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x6e4237*/
  v8 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v7 + 72))(v7, v16); /*0x6e4245*/
  v15[0] = *v8; /*0x6e424a*/
  v15[1] = v8[1]; /*0x6e4251*/
  v15[2] = v8[2]; /*0x6e425b*/
  IndexByName = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)&this->TActionClass_field_54); /*0x6e425f*/
  if ( IndexByName < 0 ) /*0x6e4266*/
    return 0; /*0x6e4266*/
  if ( IndexByName > dword_A83C78 ) /*0x6e426e*/
    return 0; /*0x6e426e*/
  v10 = *((_DWORD *)dword_A83C6C + IndexByName); /*0x6e4276*/
  if ( !v10 ) /*0x6e427b*/
    return 0; /*0x6e427b*/
  v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 140))(v10, v5); /*0x6e4280*/
  v12 = v11; /*0x6e4286*/
  if ( !v11 ) /*0x6e428a*/
    return 0; /*0x6e428a*/
  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v11 + 1168))(v11, v15, 0) ) /*0x6e4297*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 248))(v12); /*0x6e42a5*/
    return 0; /*0x6e42b2*/
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 1244))(v12, 0); /*0x6e42bb*/
  return 1; /*0x6e42ab*/
}



// ==== 0x006E42D0  TActionClass::executeIronCurtainAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeIronCurtainAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax

  if ( !a2 ) /*0x6e42d6*/
    return 0; /*0x6e42d6*/
  v5 = *(_DWORD *)&this->pad_6E[34]; /*0x6e42d8*/
  if ( v5 < 0 ) /*0x6e42e0*/
    return 0; /*0x6e42e0*/
  if ( v5 > *(_DWORD *)(a2 + 612) ) /*0x6e42ec*/
    return 0; /*0x6e42ec*/
  v6 = *(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * v5); /*0x6e42f4*/
  if ( !*(_BYTE *)(v6 + 109) || this->TActionClass_field_48 > (void *)0x64 ) /*0x6e4303*/
    return 0; /*0x6e4317*/
  SuperClass::SetCharge(v6, (int)this->TActionClass_field_48); /*0x6e430d*/
  return 1; /*0x6e4314*/
}



// ==== 0x006E4320  TActionClass::executeNukeAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeNukeAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax

  if ( !a2 ) /*0x6e4326*/
    return 0; /*0x6e4326*/
  v5 = *(_DWORD *)&this->pad_6E[34]; /*0x6e4328*/
  if ( v5 < 0 || v5 > *(_DWORD *)(a2 + 612) ) /*0x6e433c*/
    return 0; /*0x6e4355*/
  SuperClass::SetRechargeTime(*(SuperClass **)(*(_DWORD *)(a2 + 600) + 4 * v5), (int)this->TActionClass_field_48); /*0x6e434b*/
  return 1; /*0x6e4352*/
}



// ==== 0x006E4360  TActionClass::executeSpyPlaneAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeSpyPlaneAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax

  if ( !a2 ) /*0x6e4366*/
    return 0; /*0x6e4366*/
  v5 = *(_DWORD *)&this->pad_6E[34]; /*0x6e4368*/
  if ( v5 < 0 || v5 > *(_DWORD *)(a2 + 612) ) /*0x6e4378*/
    return 0; /*0x6e438d*/
  SuperClass::ResetRechargeTime(*(SuperClass **)(*(_DWORD *)(a2 + 600) + 4 * v5)); /*0x6e4383*/
  return 1; /*0x6e438a*/
}



// ==== 0x006E43A0  TActionClass::executeChronoSphereAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeChronoSphereAction(TActionClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax

  if ( !a2 ) /*0x6e43a6*/
    return 0; /*0x6e43a6*/
  v5 = *(_DWORD *)&this->pad_6E[34]; /*0x6e43a8*/
  if ( v5 < 0 || v5 > *(_DWORD *)(a2 + 612) ) /*0x6e43b8*/
    return 0; /*0x6e43cd*/
  SuperClass::Reset(*(SuperClass **)(*(_DWORD *)(a2 + 600) + 4 * v5)); /*0x6e43c3*/
  return 1; /*0x6e43ca*/
}



// ==== 0x006E43E0  TActionClass::executeWeatherStormAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeWeatherStormAction(TActionClass *this, _DWORD *a2, int a3, int a4, int a5)
{
  TActionClass *v5; // esi
  _DWORD *v7; // eax

  v5 = (TActionClass *)a2; /*0x6e43e1*/
  if ( !a2 ) /*0x6e43e7*/
    return 0; /*0x6e43e9*/
  v7 = (_DWORD *)*ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a2, (int)this->TActionClass_field_44); /*0x6e4403*/
  a2 = v7; /*0x6e440c*/
  if ( v7 == *(_DWORD **)dword_B0E680 ) /*0x6e4410*/
    return 0; /*0x6e4420*/
  TActionClass::executeGuardAction(v5, (int)v7); /*0x6e4429*/
  return 1; /*0x6e43eb*/
}



// ==== 0x006E4440  globalHelper_0E4440  this=-  sig=csp ====
char __stdcall sub_6E4440(_DWORD *a1, int a2, int a3, int a4)
{
  if ( !a1 ) /*0x6e4446*/
    return 0; /*0x6e4448*/
  GlobalHelper_0E4440_Helper(a1); /*0x6e444d*/
  return 1; /*0x6e444a*/
}



// ==== 0x006E4460  TActionClass::executeDominatorAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeDominatorAction(TActionClass *this, _DWORD *a2, int a3, int a4, int a5)
{
  TActionClass *v5; // esi
  _DWORD *v7; // eax

  v5 = (TActionClass *)a2; /*0x6e4461*/
  if ( !a2 ) /*0x6e4467*/
    return 0; /*0x6e4469*/
  v7 = (_DWORD *)*ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a2, (int)this->TActionClass_field_44); /*0x6e4483*/
  a2 = v7; /*0x6e448c*/
  if ( v7 == *(_DWORD **)dword_B0E680 ) /*0x6e4490*/
    return 0; /*0x6e44a0*/
  TActionClass::executeHuntAction(v5, (int)v7); /*0x6e44a9*/
  return 1; /*0x6e446b*/
}



// ==== 0x006E44C0  globalHelper_0E44C0  this=-  sig=csp ====
char __stdcall sub_6E44C0(_DWORD *a1, int a2, int a3, int a4)
{
  if ( !a1 ) /*0x6e44c6*/
    return 0; /*0x6e44c8*/
  GlobalHelper_0E44C0_Helper(a1); /*0x6e44cd*/
  return 1; /*0x6e44ca*/
}



// ==== 0x006E44E0  TActionClass::executeRevealAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeRevealAction(TActionClass *this, _DWORD *a2, int a3, int a4, int a5)
{
  TActionClass *v5; // esi
  _DWORD *v7; // eax

  v5 = (TActionClass *)a2; /*0x6e44e1*/
  if ( !a2 ) /*0x6e44e7*/
    return 0; /*0x6e44e9*/
  v7 = (_DWORD *)*ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a2, (int)this->TActionClass_field_44); /*0x6e4503*/
  a2 = v7; /*0x6e450c*/
  if ( v7 == *(_DWORD **)dword_B0E680 ) /*0x6e4510*/
    return 0; /*0x6e4520*/
  TActionClass::executeDeployAction(v5, (int)v7); /*0x6e4529*/
  return 1; /*0x6e44eb*/
}



// ==== 0x006E4540  globalHelper_0E4540  this=-  sig=csp ====
char __stdcall sub_6E4540(_DWORD *a1, int a2, int a3, int a4)
{
  if ( !a1 ) /*0x6e4546*/
    return 0; /*0x6e4548*/
  GlobalHelper_0E4540_Helper(a1); /*0x6e454d*/
  return 1; /*0x6e454a*/
}



// ==== 0x006E4560  TActionClass::executeEMPulseAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E4560(int this, int a2, int a3, int a4, int a5)
{
  int i; // ebp
  int v7; // edi

  if ( !a2 ) /*0x6e456c*/
    return 0; /*0x6e456e*/
  for ( i = *(_DWORD *)(a2 + 120) - 1; i >= 0; --i ) /*0x6e457a*/
  {
    v7 = *(_DWORD *)(*(_DWORD *)(a2 + 108) + 4 * i); /*0x6e4585*/
    if ( !strcmp((const char *)(*(_DWORD *)(v7 + 1312) + 36), (const char *)(this + 84)) ) /*0x6e459a*/
      *(_DWORD *)(v7 + 240) = *(_DWORD *)(this + 144); /*0x6e45cb*/
  }
  return 1; /*0x6e4570*/
}



// ==== 0x006E45E0  ObjectClass::FindOwner  this=ObjectClass  sig=csp ====
int __stdcall ObjectClass_FindOwner(_DWORD *a1, void *a2)
{
  if ( !a1 ) /*0x6e45e6*/
    return 0; /*0x6e45e8*/
  if ( a2 == (void *)8997 ) /*0x6e45f8*/
    return Property::GetField11(a1); /*0x6e45fa*/
  if ( a2 == (void *)-1 ) /*0x6e4606*/
    return 0; /*0x6e4608*/
  if ( BuildingType::IsSpecialType(a2) ) /*0x6e4610*/
    return BuildingType::FindOwnerHouse(a2); /*0x6e461b*/
  return HouseClass::FindOwner(a2); /*0x6e45ea*/
}



// ==== 0x006E4630  TActionClass::StubReturn148  this=TActionClass  sig=csp ====
int TActionClass::StubReturn148(TActionClass *this)
{
  return 148; /*0x6e4635*/
}



// ==== 0x006E4640  TActionClass::StubReturn47  this=TActionClass  sig=csp ====
int TActionClass::StubReturn47(TActionClass *this)
{
  return 47; /*0x6e4645*/
}



// ==== 0x006E4650  TActionClass::Stub  this=TActionClass  sig=csp ====
int __thiscall TActionClass::Stub(TActionClass *this)
{
  return this->idxArray; /*0x6e4653*/
}



// ==== 0x006E4660  TActionClass::Destructor  this=TActionClass  sig=csp ====
void **__thiscall TActionClass::Destructor(TActionClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  TActionClass *v7; // [esp+8h] [ebp-4h] BYREF

  this->AbstractClass = &TActionClass::`vftable'; /*0x6e4666*/
  this->? = &TActionClass::`vftable'; /*0x6e466c*/
  this->? = &TActionClass::`vftable'; /*0x6e4673*/
  this->? = &TActionClass::`vftable'; /*0x6e467a*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x6e4681*/
  v7 = this; /*0x6e4696*/
  v3 = (*(int (__thiscall **)(int *, TActionClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6e469a*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v7);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x6e46aa*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x6e46af*/
    for ( ; /*0x6e46b5*/
          v3 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v3) )
    {
      ++v3; /*0x6e46bd*/
    }
  }
  v7 = this; /*0x6e46df*/
  v4 = (*(int (__thiscall **)(int *, TActionClass **))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 16))( /*0x6e46e3*/
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
         &v7);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.GateCloseDelay[0] ) /*0x6e46f3*/
  {
    --g_BuildingLoadQueue_Array.GateCloseDelay[0]; /*0x6e46f8*/
    for ( ; /*0x6e46fe*/
          v4 < g_BuildingLoadQueue_Array.GateCloseDelay[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v4) )
    {
      ++v4; /*0x6e4706*/
    }
  }
  v7 = this; /*0x6e4728*/
  v5 = (*(int (__thiscall **)(int *, TActionClass **))(dword_B0E658 + 16))(&dword_B0E658, &v7); /*0x6e472c*/
  if ( v5 != -1 && v5 < dword_B0E668 && v5 < --dword_B0E668 ) /*0x6e4747*/
  {
    do /*0x6e475f*/
    {
      ++v5; /*0x6e474f*/
      *((_DWORD *)dword_B0E65C + v5 - 1) = *((_DWORD *)dword_B0E65C + v5); /*0x6e4753*/
    }
    while ( v5 < dword_B0E668 ); /*0x6e475f*/
  }
  this->TActionClass_field_6D = 0; /*0x6e4763*/
  AbstractClass::DTOR((AbstractClass *)this); /*0x6e4767*/
  if ( (a2 & 1) != 0 ) /*0x6e4771*/
    __3_YAXPAX_Z(this); /*0x6e4774*/
  return &this->AbstractClass; /*0x6e477e*/
}



// ==== 0x006E4790  ScriptAction::CopyStringField  this=ScriptAction  sig=csp ====
char *__thiscall ScriptAction::CopyStringField(char *Destination, char *Source)
{
  if ( Source ) /*0x6e4799*/
  {
    strncpy(Destination, Source, 0x1Fu); /*0x6e47a7*/
    *(Destination + 31) = 0; /*0x6e47af*/
    return Destination; /*0x6e47b3*/
  }
  else
  {
    *Destination = 0; /*0x6e479b*/
    return Destination; /*0x6e479d*/
  }
}



// ==== 0x006E47C0  ScriptAction::CopyStructField  this=ScriptAction  sig=csp ====
void *__thiscall ScriptAction::CopyStructField(ScriptAction *this, void *a2, const void *a3)
{
  if ( a3 != this ) /*0x6e47ca*/
    qmemcpy(this, a3, 0x20u); /*0x6e47d3*/
  qmemcpy(a2, this, 0x20u); /*0x6e47e2*/
  return a2; /*0x6e47e4*/
}



// ==== 0x006E47F0  Tactical::ClearBuffer  this=Tactical  sig=csp ====
void __thiscall Tactical_42::ClearBuffer(Tactical *this)
{
  void *v2; // eax

  v2 = *(void **)&this->Tactical_field_0x2[2]; /*0x6e47f6*/
  *(_DWORD *)this->__pad_10 = 0; /*0x6e47f9*/
  if ( v2 && BYTE1(this->Tactical_field_0xC) ) /*0x6e4800*/
  {
    __3_YAXPAX_Z(v2); /*0x6e4806*/
    *(_DWORD *)&this->Tactical_field_0x2[2] = 0; /*0x6e480e*/
  }
  BYTE1(this->Tactical_field_0xC) = 0; /*0x6e4811*/
  this->Tactical_field_0x8 = 0; /*0x6e4814*/
}



// ==== 0x006E4820  Tactical::PointerToIndex  this=Tactical  sig=csp ====
unsigned int __thiscall Tactical_42::PointerToIndex(Tactical *this, int a2)
{
  if ( LOBYTE(this->Tactical_field_0xC) ) /*0x6e4820*/
    return (unsigned int)(a2 - *(_DWORD *)&this->Tactical_field_0x2[2]) >> 2; /*0x6e4835*/
  else
    return 0; /*0x6e4827*/
}



// ==== 0x006E4840  _VectorClass_PAVTActionClass::UpdateView  this=VectorClass  sig=csp ====
int __thiscall Tactical_42::UpdateView(_VectorClass_PAVTActionClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6e484a*/
}



// ==== 0x006E4850  _VectorClass_PAVTActionClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall Tactical_42::AddRef(_VectorClass_PAVTActionClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x6e4852*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6e485d*/
  {
    v3 = 0; /*0x6e485f*/
    if ( m_8 <= 0 ) /*0x6e4863*/
      return 1; /*0x6e4883*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6e4865*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6e486b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6e4874*/
    {
      ++v3; /*0x6e4876*/
      ++v4; /*0x6e4877*/
      if ( v3 >= m_8 ) /*0x6e487c*/
        return 1; /*0x6e487c*/
    }
  }
  return 0; /*0x6e487e*/
}



// ==== 0x006E4890  _VectorClass_PAVTActionClass::Release  this=VectorClass  sig=csp ====
char __thiscall Tactical_42::Release(_VectorClass_PAVTActionClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6e489c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6e48a6*/
    if ( a3 ) /*0x6e48ac*/
      v4 = a3; /*0x6e48c2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6e48be*/
    LOBYTE(this->m_C) = 1; /*0x6e48c6*/
    if ( v4 ) /*0x6e48ca*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6e48d5*/
      {
        m_8 = this->m_8; /*0x6e48dc*/
        if ( a2 < m_8 ) /*0x6e48e1*/
          m_8 = a2; /*0x6e48e3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6e48e9*/
          ++i; /*0x6e48ee*/
        if ( BYTE1(this->m_C) ) /*0x6e48fb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6e4906*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6e490e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6e4917*/
      this->m_8 = a2; /*0x6e491f*/
      BYTE1(this->m_C) = a3 == 0; /*0x6e4922*/
      return 1; /*0x6e4928*/
    }
    else
    {
      return 0; /*0x6e48cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVTActionClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6e4932*/
    return 1; /*0x6e4938*/
  }
}



// ==== 0x006E4940  _VectorClass_PAVTActionClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall Tactical_42::ddtor(_VectorClass_PAVTActionClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6e494d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6e4953*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6e495b*/
  }
  BYTE1(this->m_C) = 0; /*0x6e495e*/
  this->m_8 = 0; /*0x6e4961*/
}



// ==== 0x006E4970  _VectorClass_PAVTActionClass::Init  this=VectorClass  sig=csp ====
int __thiscall Tactical::Init(_VectorClass_PAVTActionClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6e4970*/
    return 0; /*0x6e4978*/
  m_8 = this->m_8; /*0x6e497e*/
  result = 0; /*0x6e4981*/
  if ( m_8 <= 0 ) /*0x6e4985*/
    return -1; /*0x6e499c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6e498b*/
  {
    if ( ++result >= m_8 ) /*0x6e499a*/
      return -1; /*0x6e499a*/
  }
  return result; /*0x6e497a*/
}



// ==== 0x006E49B0  _VectorClass_PAVTActionClass::InitMap  this=VectorClass  sig=csp ====
unsigned int __thiscall Tactical_42::InitMap(_VectorClass_PAVTActionClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6e49b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6e49c5*/
  else
    return 0; /*0x6e49b7*/
}



// ==== 0x006E49D0  Tactical::SetCapacity  this=Tactical  sig=csp ====
char __thiscall Tactical_42::SetCapacity(Tactical *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int Tactical_field_0x8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6e49dc*/
  {
    LOBYTE(this->Tactical_field_0xC) = 0; /*0x6e49e2*/
    if ( a3 ) /*0x6e49e8*/
      v4 = a3; /*0x6e49fe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6e49fa*/
    LOBYTE(this->Tactical_field_0xC) = 1; /*0x6e4a02*/
    if ( !v4 ) /*0x6e4a06*/
      return 0; /*0x6e4a7a*/
    if ( *(_DWORD *)&this->Tactical_field_0x2[2] ) /*0x6e4a08*/
    {
      Tactical_field_0x8 = this->Tactical_field_0x8; /*0x6e4a0f*/
      if ( a2 < Tactical_field_0x8 ) /*0x6e4a14*/
        Tactical_field_0x8 = a2; /*0x6e4a16*/
      for ( i = 0; i < Tactical_field_0x8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->Tactical_field_0x2[2] + 4 * i - 4) ) /*0x6e4a1c*/
        ++i; /*0x6e4a21*/
      if ( BYTE1(this->Tactical_field_0xC) ) /*0x6e4a2e*/
      {
        __3_YAXPAX_Z(*(void **)&this->Tactical_field_0x2[2]); /*0x6e4a39*/
        *(_DWORD *)&this->Tactical_field_0x2[2] = 0; /*0x6e4a41*/
      }
    }
    *(_DWORD *)&this->Tactical_field_0x2[2] = v4; /*0x6e4a4a*/
    this->Tactical_field_0x8 = a2; /*0x6e4a52*/
    BYTE1(this->Tactical_field_0xC) = a3 == 0; /*0x6e4a55*/
  }
  else
  {
    (*(void (__thiscall **)(Tactical *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6e4a5e*/
  }
  v7 = this->Tactical_field_0x8; /*0x6e4a61*/
  if ( v7 < *(_DWORD *)this->__pad_10 ) /*0x6e4a69*/
    *(_DWORD *)this->__pad_10 = v7; /*0x6e4a6b*/
  return 1; /*0x6e4a6e*/
}



// ==== 0x006E4A80  Tactical::FindItem  this=Tactical  sig=csp ====
int __thiscall Tactical_42::FindItem(Tactical *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(_DWORD *)this->__pad_10; /*0x6e4a80*/
  result = 0; /*0x6e4a83*/
  if ( v2 <= 0 ) /*0x6e4a88*/
    return -1; /*0x6e4a9f*/
  for ( i = *(_DWORD **)&this->Tactical_field_0x2[2]; *i != *a2; ++i ) /*0x6e4a8e*/
  {
    if ( ++result >= v2 ) /*0x6e4a9d*/
      return -1; /*0x6e4a9d*/
  }
  return result; /*0x6e4aa2*/
}



// ==== 0x006E4AB0  _VectorClass_PAVTActionClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall Tactical_42::QueryInterface(_VectorClass_PAVTActionClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6e4ab3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TActionClass *>::`vftable'; /*0x6e4ab6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6e4ac0*/
  {
    __3_YAXPAX_Z(v3); /*0x6e4ac8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6e4ad0*/
  }
  BYTE1(this->m_C) = 0; /*0x6e4adb*/
  this->m_8 = 0; /*0x6e4ae1*/
  if ( (a2 & 1) != 0 ) /*0x6e4ae8*/
    __3_YAXPAX_Z(this); /*0x6e4aeb*/
  return this->__pad_0; /*0x6e4af5*/
}



// ==== 0x006E4B00    this=Tactical_42_  sig=? ====
_DWORD *__thiscall Tactical_42_::loc_6E4B00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6e4b03*/
  *Block = &g_ptr_7F43F0; /*0x6e4b06*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6e4b10*/
  {
    __3_YAXPAX_Z(v3); /*0x6e4b18*/
    *(Block + 1) = 0; /*0x6e4b20*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6e4b2b*/
  *(Block + 2) = 0; /*0x6e4b31*/
  if ( (a2 & 1) != 0 ) /*0x6e4b38*/
    __3_YAXPAX_Z(Block); /*0x6e4b3b*/
  return Block; /*0x6e4b45*/
}


// ==== 0x006E4B50  sub_6E4B50  this=-  sig=ida-proto ====
void sub_6E4B50()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e4b5c*/
  dbl_B0E708 = Math::Sqrt(v0 + v0); /*0x6e4b6e*/
}



// ==== 0x006E4B80  sub_6E4B80  this=-  sig=ida-proto ====
void sub_6E4B80()
{
  dbl_B0E770 = dbl_B0E708 / 60.0; /*0x6e4b8c*/
}



// ==== 0x006E4BA0  sub_6E4BA0  this=-  sig=ida-proto ====
void sub_6E4BA0()
{
  dbl_B0E758 = 1.0 / dbl_B0E770; /*0x6e4bac*/
}



// ==== 0x006E4BC0  sub_6E4BC0  this=-  sig=ida-proto ====
void sub_6E4BC0()
{
  dbl_B0E750 = 0.0174532925199433 * 45.0; /*0x6e4bcc*/
}



// ==== 0x006E4BE0  sub_6E4BE0  this=-  sig=ida-proto ====
void sub_6E4BE0()
{
  dbl_B0E710 = 0.0174532925199433 * 60.0; /*0x6e4bec*/
}



// ==== 0x006E4C00  sub_6E4C00  this=-  sig=ida-proto ====
void sub_6E4C00()
{
  dbl_B0E6E8 = 0.0174532925199433 * 90.0; /*0x6e4c0c*/
}



// ==== 0x006E4C20  sub_6E4C20  this=-  sig=ida-proto ====
__int64 sub_6E4C20()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E6E8 - dbl_B0E710); /*0x6e4c32*/
  result = Math::RoundToInt(v0 * dbl_B0E708 * 0.5); /*0x6e4c46*/
  dword_B0E778 = result; /*0x6e4c4b*/
  return result; /*0x6e4c50*/
}



// ==== 0x006E4C60  sub_6E4C60  this=-  sig=ida-proto ====
void sub_6E4C60()
{
  dbl_B0E718 = Math::ArcTan((double)dword_B0E778 * 0.00390625); /*0x6e4c77*/
}



// ==== 0x006E4C90  sub_6E4C90  this=-  sig=ida-proto ====
void sub_6E4C90()
{
  dbl_B0E748 = Math::ArcTan((double)(2 * dword_B0E778) / dbl_B0E708); /*0x6e4cb2*/
}



// ==== 0x006E4CC0  sub_6E4CC0  this=-  sig=ida-proto ====
__int64 sub_6E4CC0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E778) + 0.5); /*0x6e4cdb*/
  dword_B0E76C = result; /*0x6e4ce0*/
  return result; /*0x6e4ce6*/
}



// ==== 0x006E4CF0  sub_6E4CF0  this=-  sig=ida-proto ====
int sub_6E4CF0()
{
  dword_B0E700 = 0; /*0x6e4cf2*/
  return 0; /*0x6e4cfe*/
}



// ==== 0x006E4D00  sub_6E4D00  this=-  sig=ida-proto ====
int sub_6E4D00()
{
  dword_B0E738 = 0; /*0x6e4d02*/
  dword_B0E73C = 0; /*0x6e4d07*/
  dword_B0E740 = 0; /*0x6e4d0c*/
  return 0; /*0x6e4d11*/
}



// ==== 0x006E4D20  sub_6E4D20  this=-  sig=ida-proto ====
int sub_6E4D20()
{
  dword_B0E768 = 0; /*0x6e4d25*/
  dword_B0E760 = 128; /*0x6e4d2f*/
  dword_B0E764 = 128; /*0x6e4d34*/
  return 128; /*0x6e4d39*/
}



// ==== 0x006E4D40  sub_6E4D40  this=-  sig=ida-proto ====
int sub_6E4D40()
{
  dword_B0E6F0 = 0; /*0x6e4d42*/
  dword_B0E6F4 = 0; /*0x6e4d47*/
  dword_B0E6F8 = 0; /*0x6e4d4c*/
  dword_B0E6FC = 0; /*0x6e4d51*/
  return 0; /*0x6e4d56*/
}



// ==== 0x006E4D60  sub_6E4D60  this=-  sig=ida-proto ====
int sub_6E4D60()
{
  g_TagClassCount = 0; /*0x6e4d67*/
  dword_B0E728 = 0; /*0x6e4d6c*/
  byte_B0E72C = 1; /*0x6e4d71*/
  byte_B0E72D = 0; /*0x6e4d78*/
  TagClass_Array = (int)&DynamicVectorClass<TagClass *>::`vftable'; /*0x6e4d7d*/
  dword_B0E734 = 10; /*0x6e4d87*/
  g_GameObjectCleanup = 0; /*0x6e4d91*/
  return atexit(sub_6E4DA0); /*0x6e4d9c*/
}



// ==== 0x006E4DA0  sub_6E4DA0  this=-  sig=ida-proto ====
void __cdecl sub_6E4DA0()
{
  TagClass_Array = (int)&VectorClass<TagClass *>::`vftable'; /*0x6e4da8*/
  if ( g_TagClassCount && byte_B0E72D ) /*0x6e4dbc*/
  {
    __3_YAXPAX_Z(g_TagClassCount); /*0x6e4dbf*/
    g_TagClassCount = 0; /*0x6e4dc7*/
  }
  byte_B0E72D = 0; /*0x6e4dcd*/
  dword_B0E728 = 0; /*0x6e4dd3*/
}



// ==== 0x006E4DE0  TagClass::GetType  this=TagClass  sig=csp ====
int __thiscall TagClass_Constructor(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int i; // edi
  void *v7; // eax
  int v8; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6e4de5*/
  *(_DWORD *)(this + 36) = a2; /*0x6e4df0*/
  *(_DWORD *)(this + 40) = 0; /*0x6e4df3*/
  *(_DWORD *)(this + 44) = 0; /*0x6e4df6*/
  *(_DWORD *)(this + 48) = dword_B0E700; /*0x6e4dfe*/
  *(_BYTE *)(this + 52) = 0; /*0x6e4e01*/
  *(_BYTE *)(this + 53) = 0; /*0x6e4e04*/
  *(_DWORD *)this = &TagClass::`vftable'; /*0x6e4e07*/
  *(_DWORD *)(this + 4) = &TagClass::`vftable'; /*0x6e4e0d*/
  *(_DWORD *)(this + 8) = &TagClass::`vftable'; /*0x6e4e14*/
  *(_DWORD *)(this + 12) = &TagClass::`vftable'; /*0x6e4e1b*/
  if ( g_GameObjectCleanup < dword_B0E728 /*0x6e4e54*/
    || (byte_B0E72D || !dword_B0E728)
    && dword_B0E734 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(TagClass_Array + 8))(
         &TagClass_Array,
         dword_B0E728 + dword_B0E734,
         0) )
  {
    v3 = g_GameObjectCleanup++; /*0x6e4e61*/
    *((_DWORD *)g_TagClassCount + v3) = this; /*0x6e4e70*/
  }
  if ( dword_B0F680 < dword_B0F678 /*0x6e4ea7*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F678 + dword_B0F684,
         0) )
  {
    v4 = dword_B0F680++; /*0x6e4eb4*/
    *((_DWORD *)dword_B0F674 + v4) = this; /*0x6e4ec3*/
  }
  if ( dword_B0F718 < dword_B0F710 /*0x6e4efa*/
    || (byte_B0F715 || !dword_B0F710)
    && dword_B0F71C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F708 + 8))(
         &dword_B0F708,
         dword_B0F710 + dword_B0F71C,
         0) )
  {
    v5 = dword_B0F718++; /*0x6e4f07*/
    *((_DWORD *)dword_B0F70C + v5) = this; /*0x6e4f16*/
  }
  if ( a2 ) /*0x6e4f1b*/
  {
    for ( i = *(_DWORD *)(a2 + 160); i; i = *(_DWORD *)(i + 168) ) /*0x6e4f25*/
    {
      v7 = __2_YAPAXI_Z(0x48u); /*0x6e4f29*/
      if ( v7 ) /*0x6e4f33*/
        v8 = TriggerClass::Construct((int)v7, i); /*0x6e4f38*/
      else
        v8 = 0; /*0x6e4f3f*/
      *(_DWORD *)(v8 + 40) = *(_DWORD *)(this + 40); /*0x6e4f44*/
      *(_DWORD *)(this + 40) = v8; /*0x6e4f47*/
    }
  }
  return this; /*0x6e4f56*/
}



// ==== 0x006E4F60  TagClass::Destructor  this=TagClass  sig=csp ====
int __thiscall TagClass::Destructor(TagClass *this)
{
  TagTypeClass *buildingType; // ecx
  int v3; // eax
  ParticleSystemClass *ambientParticles; // ecx
  int v5; // ecx
  TagTypeClass *v6; // ecx
  int v7; // eax
  TagClass **v8; // ecx
  void *SuperClass_field_0x6C; // ecx
  TriggerClass *firstTrigger; // eax
  TriggerTypeClass *v11; // eax
  int Owner; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  TriggerClass *v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  _DWORD v22[4]; // [esp+10h] [ebp-10h] BYREF

  this->AbstractClass = &TagClass::`vftable'; /*0x6e4f69*/
  this->? = &TagClass::`vftable'; /*0x6e4f6f*/
  this->? = &TagClass::`vftable'; /*0x6e4f76*/
  this->? = &TagClass::`vftable'; /*0x6e4f7d*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x6e4f84*/
  if ( byte_A8E9A0 ) /*0x6e4f90*/
  {
    if ( stru_A8EB00.?[376] ) /*0x6e4f9d*/
    {
      buildingType = this->buildingType; /*0x6e4f9f*/
      if ( buildingType ) /*0x6e4fa4*/
      {
        if ( (Debug::AccumFlags((Debug *)buildingType) & 0x10) != 0 ) /*0x6e4fad*/
        {
          v3 = 0; /*0x6e4fb5*/
          if ( (int)FootClass_Array.? <= 0 ) /*0x6e4fb9*/
          {
LABEL_9:
            v3 = -1; /*0x6e4fcd*/
          }
          else
          {
            ambientParticles = FootClass_Array.?; /*0x6e4fbb*/
            while ( ambientParticles->ObjectClass != this ) /*0x6e4fc3*/
            {
              ++v3; /*0x6e4fc5*/
              ambientParticles = (ParticleSystemClass *)((char *)ambientParticles + 4); /*0x6e4fc6*/
              if ( v3 >= (int)FootClass_Array.? ) /*0x6e4fcb*/
                goto LABEL_9; /*0x6e4fcb*/
            }
          }
          v5 = dword_A83CDC; /*0x6e4fd0*/
          if ( dword_A83CDC >= v3 ) /*0x6e4fd8*/
          {
            --dword_A83CDC; /*0x6e4fdd*/
            if ( v5 - 1 < 0 && !FootClass_Array.? ) /*0x6e4fe6*/
              dword_A83CDC = 0; /*0x6e4fe8*/
          }
        }
      }
    }
    if ( byte_A8E9A0 ) /*0x6e4ff5*/
    {
      if ( stru_A8EB00.?[376] ) /*0x6e5002*/
      {
        v6 = this->buildingType; /*0x6e5004*/
        if ( v6 ) /*0x6e5009*/
        {
          if ( (Debug::AccumFlags((Debug *)v6) & 4) != 0 ) /*0x6e5012*/
          {
            v7 = 0; /*0x6e501a*/
            if ( FootClass_Array.?[0] <= 0 ) /*0x6e501e*/
            {
LABEL_22:
              v7 = -1; /*0x6e5032*/
            }
            else
            {
              v8 = (TagClass **)FootClass_Array.?[5]; /*0x6e5020*/
              while ( *v8 != this ) /*0x6e5028*/
              {
                ++v7; /*0x6e502a*/
                ++v8; /*0x6e502b*/
                if ( v7 >= FootClass_Array.?[0] ) /*0x6e5030*/
                  goto LABEL_22; /*0x6e5030*/
              }
            }
            SuperClass_field_0x6C = stru_A83D50.SuperClass_field_0x6C; /*0x6e5035*/
            if ( (int)stru_A83D50.SuperClass_field_0x6C >= v7 ) /*0x6e503d*/
            {
              --stru_A83D50.SuperClass_field_0x6C; /*0x6e5042*/
              if ( (int)SuperClass_field_0x6C - 1 < 0 && !FootClass_Array.?[0] ) /*0x6e504b*/
                stru_A83D50.SuperClass_field_0x6C = 0; /*0x6e504d*/
            }
          }
        }
      }
      if ( byte_A8E9A0 ) /*0x6e505a*/
      {
        if ( stru_A8EB00.?[376] ) /*0x6e5063*/
        {
          firstTrigger = this->firstTrigger; /*0x6e5065*/
          if ( firstTrigger ) /*0x6e506a*/
          {
            v11 = firstTrigger->buildingType; /*0x6e506c*/
            if ( v11 ) /*0x6e5071*/
            {
              if ( v11->House && TagClass::HasValidHouse((TagClass *)this->buildingType) ) /*0x6e5080*/
              {
                Owner = HouseClass::FindOwner((HouseClass *)this->firstTrigger->buildingType->House->arrayIndex2); /*0x6e509b*/
                v13 = *(_DWORD *)(Owner + 636); /*0x6e50a0*/
                if ( v13 ) /*0x6e50a8*/
                  *(_DWORD *)(Owner + 636) = v13 - 1; /*0x6e50ab*/
                v14 = (_DWORD *)(Owner + 664); /*0x6e50b7*/
                *v14 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6e50c1*/
                v14[1] = v22[2]; /*0x6e50c7*/
                v14[2] = 60; /*0x6e50ca*/
              }
            }
          }
        }
      }
    }
  }
  v15 = this->firstTrigger; /*0x6e50cd*/
  if ( v15 ) /*0x6e50d2*/
  {
    v16 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x6e50d4*/
    do /*0x6e50d9*/
    {
      if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < v16 ) /*0x6e50df*/
        goto LABEL_43; /*0x6e50df*/
      if ( !g_BuildingLoadQueue_Array.__pad_E5C[9] && v16 || g_BuildingLoadQueue_Array.UnitExitSound <= 0 ) /*0x6e50f7*/
        goto LABEL_45; /*0x6e50f7*/
      if ( (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))( /*0x6e5109*/
             &g_BuildingLoadQueue_Array.ToTile,
             v16 + g_BuildingLoadQueue_Array.UnitExitSound,
             0) )
      {
LABEL_43:
        v17 = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x6e5116*/
        *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * v17) = v15; /*0x6e5125*/
      }
      v16 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x6e5128*/
LABEL_45:
      v15 = v15->nextTrigger; /*0x6e512d*/
    }
    while ( v15 ); /*0x6e50d9*/
  }
  v22[0] = this; /*0x6e5134*/
  v18 = (*(int (__thiscall **)(int *, _DWORD *))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6e5147*/
          &g_BuildingLoadQueue_Array.LightVisibility,
          v22);
  if ( v18 != -1 && v18 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x6e5157*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x6e515c*/
    for ( ; /*0x6e5162*/
          v18 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v18 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                          + 4 * v18) )
    {
      ++v18; /*0x6e516a*/
    }
  }
  v22[0] = this; /*0x6e518c*/
  v19 = (*(int (__thiscall **)(int *, _DWORD *))(g_BuildingLoadQueue_Array.ExitCoord[0] + 16))( /*0x6e5190*/
          g_BuildingLoadQueue_Array.ExitCoord,
          v22);
  if ( v19 != -1 && v19 < g_BuildingLoadQueue_Array.unknown___2 ) /*0x6e51a0*/
  {
    --g_BuildingLoadQueue_Array.unknown___2; /*0x6e51a5*/
    for ( ; /*0x6e51ab*/
          v19 < g_BuildingLoadQueue_Array.unknown___2;
          *(_DWORD *)(g_BuildingLoadQueue_Array.ExitCoord[1] + 4 * v19 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.ExitCoord[1]
                                                                                        + 4 * v19) )
    {
      ++v19; /*0x6e51b3*/
    }
  }
  v22[0] = this; /*0x6e51d5*/
  v20 = (*(int (__thiscall **)(int *, _DWORD *))(TagClass_Array + 16))(&TagClass_Array, v22); /*0x6e51d9*/
  if ( v20 != -1 && v20 < g_GameObjectCleanup && v20 < --g_GameObjectCleanup ) /*0x6e51f4*/
  {
    do /*0x6e520c*/
    {
      ++v20; /*0x6e51fc*/
      *((_DWORD *)g_TagClassCount + v20 - 1) = *((_DWORD *)g_TagClassCount + v20); /*0x6e5200*/
    }
    while ( v20 < g_GameObjectCleanup ); /*0x6e520c*/
  }
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x6e5212*/
  return AbstractClass::DTOR((AbstractClass *)this); /*0x6e521e*/
}



// ==== 0x006E5230  TagClass::Destroy  this=TagClass  sig=csp ====
int __thiscall TagClass::Destroy(TagClass *this)
{
  int result; // eax

  this->destroyed = 1; /*0x6e5233*/
  result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x6e5237*/
  if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x6e5270*/
    || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
    && g_BuildingLoadQueue_Array.UnitExitSound > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))(
                   &g_BuildingLoadQueue_Array.ToTile,
                   *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
                   0),
        (_BYTE)result) )
  {
    result = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x6e5278*/
    *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * result) = this; /*0x6e5287*/
  }
  return result; /*0x6e528a*/
}



// ==== 0x006E5290  ObjectClass::method_6E5290  this=ObjectClass  sig=csp ====
char __thiscall sub_6E5290(ObjectClass *this)
{
  return (char)this->attachedTag; /*0x6e5293*/
}



// ==== 0x006E52A0  TeamClass::FindOrCreate  this=TeamClass  sig=csp ====
int __thiscall TeamClass::FindOrCreate(TeamClass *this)
{
  int v2; // ecx
  char *v3; // edx
  int result; // eax
  int v5; // eax

  v2 = 0; /*0x6e52aa*/
  if ( g_GameObjectCleanup <= 0 ) /*0x6e52ae*/
  {
LABEL_5:
    v5 = __2_YAPAXI_Z(0x38u); /*0x6e52c5*/
    if ( v5 ) /*0x6e52d1*/
      return TeknoClass::GetType(v5, (int)this); /*0x6e52d6*/
    else
      return 0; /*0x6e52de*/
  }
  else
  {
    v3 = (char *)g_TagClassCount; /*0x6e52b0*/
    while ( 1 ) /*0x6e52b6*/
    {
      result = *(_DWORD *)v3; /*0x6e52b6*/
      if ( *(TeamClass **)(*(_DWORD *)v3 + 36) == this ) /*0x6e52bb*/
        break; /*0x6e52bb*/
      ++v2; /*0x6e52bd*/
      v3 += 4; /*0x6e52be*/
      if ( v2 >= g_GameObjectCleanup ) /*0x6e52c3*/
        goto LABEL_5; /*0x6e52c3*/
    }
  }
  return result; /*0x6e52db*/
}



// ==== 0x006E52F0  FootClass::processScriptAction  this=FootClass  sig=csp ====
_DWORD *__thiscall FootClass::processScriptAction(FootClass *this, _DWORD *a2)
{
  *a2 = this->?; /*0x6e52f7*/
  return a2; /*0x6e52f9*/
}



// ==== 0x006E5300  TagClass::HasCrossesVerticalLineEvent  this=TagClass  sig=csp ====
bool __thiscall TagClass::HasCrossesVerticalLineEvent(TagClass *this)
{
  TagTypeClass *buildingType; // ecx

  buildingType = this->buildingType; /*0x6e5300*/
  return buildingType && TagTypeClass::HasCrossesVerticalLineEvent(buildingType); /*0x6e5315*/
}



// ==== 0x006E5320  TagClass::HasCrossesHorizontalLineEvent  this=TagClass  sig=csp ====
bool __thiscall TagClass::HasCrossesHorizontalLineEvent(TagClass *this)
{
  TagTypeClass *buildingType; // ecx

  buildingType = this->buildingType; /*0x6e5320*/
  return buildingType && TagTypeClass::HasCrossesHorizontalLineEvent(buildingType); /*0x6e5335*/
}



// ==== 0x006E5340  TagClass::HasZoneEntryByEvent  this=TagClass  sig=csp ====
bool __thiscall TagClass::HasZoneEntryByEvent(TagClass *this)
{
  TagTypeClass *buildingType; // ecx

  buildingType = this->buildingType; /*0x6e5340*/
  return buildingType && TagTypeClass::HasZoneEntryByEvent(buildingType); /*0x6e5355*/
}



// ==== 0x006E5380  LinkedList::Contains  this=LinkedList  sig=csp ====
int __thiscall LinkedList::Contains(LinkedList *this, int a2)
{
  int result; // eax

  result = *((_DWORD *)this + 10); /*0x6e5380*/
  if ( result ) /*0x6e5385*/
  {
    while ( result != a2 ) /*0x6e538d*/
    {
      result = *(_DWORD *)(result + 40); /*0x6e538f*/
      if ( !result ) /*0x6e5394*/
        goto LABEL_4; /*0x6e5394*/
    }
    LOBYTE(result) = 1; /*0x6e539b*/
  }
  else
  {
LABEL_4:
    LOBYTE(result) = 0; /*0x6e5396*/
  }
  return result; /*0x6e5398*/
}



// ==== 0x006E53A0  TeamClass::Update_0  this=TOP  sig=csp ====
int __thiscall TeamClass::Update_0(TeamClass *this, int a2, int a3, int a4, char a5, int a6)
{
  int result; // eax
  char v7; // bl
  TeamClass *currentScript; // esi
  int v10; // eax
  ObjectClass *v11; // eax
  char v12; // [esp+Ah] [ebp-2h]
  char v13; // [esp+Bh] [ebp-1h]

  v7 = 0; /*0x6e53a7*/
  v13 = 0; /*0x6e53ae*/
  v12 = 0; /*0x6e53b2*/
  if ( stru_A8EB00.?[391] /*0x6e53d7*/
    || BYTE1(this->spawnCell)
    || LOBYTE(this->spawnCell)
    || (result = (int)this->buildingType) == 0 )
  {
    LOBYTE(result) = 0; /*0x6e5552*/
  }
  else
  {
    currentScript = (TeamClass *)this->currentScript; /*0x6e53de*/
    for ( BYTE1(this->spawnCell) = 1; currentScript; currentScript = (TeamClass *)currentScript->currentScript ) /*0x6e53ec*/
    {
      if ( TriggerClass::RegisterEvent( /*0x6e5414*/
             (int)currentScript,
             a2,
             a3,
             a5,
             *(_DWORD *)&this->buildingType[1].TeamTypeClass_field_28 == 2,
             a6) )
      {
        v10 = *(_DWORD *)&this->buildingType[1].TeamTypeClass_field_28; /*0x6e5420*/
        if ( !v10 ) /*0x6e5429*/
        {
          BuildingClass::ExecuteTriggers((int)currentScript, a3, a4); /*0x6e546d*/
          result = TeamClass::AddToBuildQueue(currentScript); /*0x6e5474*/
          v7 = 1; /*0x6e5479*/
          v13 = 1; /*0x6e547b*/
LABEL_14:
          v12 = 1; /*0x6e547f*/
          continue; /*0x6e547f*/
        }
        result = v10 - 1; /*0x6e542b*/
        if ( result ) /*0x6e542c*/
        {
          if ( !--result ) /*0x6e542f*/
          {
            result = BuildingClass::ExecuteTriggers((int)currentScript, a3, a4); /*0x6e5439*/
            v7 = 1; /*0x6e543e*/
          }
          continue; /*0x6e5440*/
        }
        if ( this->owner != (HouseClass *)1 ) /*0x6e5446*/
          goto LABEL_14; /*0x6e5446*/
        BuildingClass::ExecuteTriggers((int)currentScript, a3, a4); /*0x6e5450*/
        result = TeamClass::AddToBuildQueue(currentScript); /*0x6e5457*/
        v13 = 1; /*0x6e545c*/
        v7 = 1; /*0x6e5461*/
      }
    }
    BYTE1(this->spawnCell) = 0; /*0x6e548f*/
    if ( v12 ) /*0x6e5499*/
    {
      if ( a3 && *(TeamClass **)(a3 + 52) == this ) /*0x6e54a2*/
        ObjectClass::SetReference((ObjectClass *)a3, 0); /*0x6e54a8*/
      BYTE1(result) = BYTE1(a4); /*0x6e54ad*/
      if ( a4 != dword_B0E700 ) /*0x6e54b9*/
      {
        v11 = (ObjectClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x6e54d5*/
        result = ObjectClass::SetTriggerTarget(v11, 0); /*0x6e54dc*/
      }
    }
    if ( v13 ) /*0x6e54e9*/
    {
      AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x6e54ef*/
      result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x6e54f4*/
      if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x6e552f*/
        || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
        && g_BuildingLoadQueue_Array.UnitExitSound > 0
        && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))(
                       &g_BuildingLoadQueue_Array.ToTile,
                       *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
                       0),
            (_BYTE)result) )
      {
        result = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x6e5537*/
        *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * result) = this; /*0x6e5546*/
      }
    }
    LOBYTE(result) = v7; /*0x6e5549*/
  }
  return result; /*0x6e554b*/
}



// ==== 0x006E5560  ScenarioClass::checkMissionObjectives  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::checkMissionObjectives(ScenarioClass *this, int a2)
{
  this->nextScenario[12] = a2; /*0x6e5564*/
  return a2; /*0x6e5567*/
}



// ==== 0x006E5570  ObjectClass::Map_Reset_6E5570  this=ObjectClass  sig=csp ====
int Map_Reset_6E5570(ObjectClass *this)
{
  int result; // eax

  for ( result = g_GameObjectCleanup; g_GameObjectCleanup > 0; result = g_GameObjectCleanup ) /*0x6e5577*/
  {
    if ( *(_DWORD *)g_TagClassCount ) /*0x6e557e*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)g_TagClassCount + 32))(*(_DWORD *)g_TagClassCount, 1); /*0x6e5588*/
  }
  return result; /*0x6e5594*/
}



// ==== 0x006E55C0  TagClass::AddTrigger  this=TagClass  sig=csp ====
int __thiscall TagClass::AddTrigger(_DWORD *this, int a2)
{
  *(_DWORD *)(a2 + 40) = this->firstTrigger; /*0x6e55c7*/
  this->firstTrigger = a2; /*0x6e55ca*/
  return a2; /*0x6e55cd*/
}



// ==== 0x006E5610  TagClass::CheckEvent  this=TagClass  sig=csp ====
int __thiscall TagClass::CheckEvent(TagClass *this, int a2, int a3)
{
  TriggerClass *firstTrigger; // eax
  int result; // eax

  if ( this->buildingType == (TagTypeClass *)a2 ) /*0x6e561a*/
    this->buildingType = 0; /*0x6e561c*/
  firstTrigger = this->firstTrigger; /*0x6e5623*/
  if ( firstTrigger == (TriggerClass *)a2 ) /*0x6e5628*/
    this->firstTrigger = firstTrigger->nextTrigger; /*0x6e562d*/
  result = (int)this->buildingType; /*0x6e5630*/
  if ( !result ) /*0x6e5635*/
  {
    this->destroyed = 1; /*0x6e5637*/
    result = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x6e563b*/
    if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x6e5675*/
      || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
      && g_BuildingLoadQueue_Array.UnitExitSound > 0
      && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ToTile + 8))(
                     &g_BuildingLoadQueue_Array.ToTile,
                     *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
                     0),
          (_BYTE)result) )
    {
      result = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x6e567d*/
      *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * result) = this; /*0x6e568c*/
    }
  }
  return result; /*0x6e568f*/
}



// ==== 0x006E56A0  TagClass::ddtor  this=TagClass  sig=csp ====
int __stdcall TagClass::ddtor(TagClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6e56a6*/
    return -2147467261; /*0x6e56a8*/
  *a2 = 1425466418; /*0x6e56b6*/
  a2[1] = 298977773; /*0x6e56be*/
  a2[2] = 1610655148; /*0x6e56c7*/
  a2[3] = unk_7E97CC; /*0x6e56d0*/
  return 0; /*0x6e56ad*/
}



// ==== 0x006E56E0  TagClass::ProcessTag  this=TagClass  sig=csp ====
int __thiscall TagClass::ProcessTag(TagClass *this, int *a2)
{
  int v3; // eax
  TriggerClass *firstTrigger; // eax
  int v5; // eax

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x6e56e9*/
  v3 = (*((int (__stdcall **)(void **))this->buildingType->? + 4))(&this->buildingType->?); /*0x6e56f7*/
  Power::TimerProcess(v3); /*0x6e56fd*/
  firstTrigger = this->firstTrigger; /*0x6e5702*/
  if ( firstTrigger ) /*0x6e5707*/
  {
    v5 = (*((int (__stdcall **)(void **))firstTrigger->? + 4))(&firstTrigger->?); /*0x6e5710*/
    firstTrigger = (TriggerClass *)Power::TimerProcess(v5); /*0x6e5716*/
  }
  LOBYTE(firstTrigger) = this->destroyed; /*0x6e571b*/
  return Power::FlagProcess((Power *)a2, (int)firstTrigger); /*0x6e5726*/
}



// ==== 0x006E5730  TagClass::LoadTag  this=TagClass  sig=csp ====
int __stdcall TagClass::LoadTag(TagClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6e573b*/
  if ( result >= 0 ) /*0x6e5742*/
  {
    if ( this ) /*0x6e5746*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x6e574f*/
      this->AbstractClass = &TagClass::`vftable'; /*0x6e5754*/
      this->? = &TagClass::`vftable'; /*0x6e575a*/
      this->? = &TagClass::`vftable'; /*0x6e5761*/
      this->? = &TagClass::`vftable'; /*0x6e5768*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->buildingType); /*0x6e5778*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->firstTrigger); /*0x6e5786*/
    return 0; /*0x6e578b*/
  }
  return result; /*0x6e578d*/
}



// ==== 0x006E57A0  TagClass::SaveTag  this=TagClass  sig=csp ====
int __stdcall TagClass::SaveTag(TagClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6e57af*/
  if ( result >= 0 ) /*0x6e57b6*/
    return 0; /*0x6e57b8*/
  return result; /*0x6e57ba*/
}



// ==== 0x006E57C0  TechnoClass::HasAnyMission  this=TOP  sig=csp ====
int __thiscall TechnoClass::HasAnyMission(TechnoClass *this)
{
  int result; // eax
  std::codecvt_base *v2; // ecx

  result = this->?; /*0x6e57c0*/
  if ( result ) /*0x6e57c5*/
  {
    while ( 1 ) /*0x6e57c7*/
    {
      v2 = *(std::codecvt_base **)(result + 36); /*0x6e57c7*/
      if ( *((_BYTE *)v2 + 160) ) /*0x6e57ca*/
        break; /*0x6e57ca*/
      result = *(_DWORD *)(result + 40); /*0x6e57d4*/
      if ( !result ) /*0x6e57d9*/
        goto LABEL_4; /*0x6e57d9*/
    }
    LOBYTE(result) = _do_always_noconv_codecvt_base_std__MBE_NXZ_18(v2); /*0x6e57d2*/
  }
  else
  {
LABEL_4:
    LOBYTE(result) = 0; /*0x6e57db*/
  }
  return result; /*0x6e57dd*/
}



// ==== 0x006E57DE  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_18  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_18(std::codecvt_base *this)
{
  return 1; /*0x6e57e0*/
}



// ==== 0x006E57F0  HouseClass::UpdateAllTypes  this=HouseClass  sig=csp ====
int __thiscall HouseClass::UpdateAllTypes(HouseClass *this)
{
  int result; // eax
  int i; // esi

  result = g_GameObjectCleanup; /*0x6e57f0*/
  for ( i = 0; i < g_GameObjectCleanup; ++i ) /*0x6e57fd*/
  {
    TriggerClass::NotifyGlobalChanged(*(TriggerClass **)(*((_DWORD *)g_TagClassCount + i) + 40), (int)this); /*0x6e580b*/
    result = g_GameObjectCleanup; /*0x6e5810*/
  }
  return result; /*0x6e581a*/
}



// ==== 0x006E5820  TriggerActionQueue::ProcessAll  this=TriggerActionQueue  sig=csp ====
int __thiscall TriggerActionQueue::ProcessAll(TriggerActionQueue *this)
{
  int result; // eax
  int i; // esi

  result = g_GameObjectCleanup; /*0x6e5820*/
  for ( i = 0; i < g_GameObjectCleanup; ++i ) /*0x6e582d*/
  {
    TriggerClass::NotifyLocalChanged(*(TriggerClass **)(*((_DWORD *)g_TagClassCount + i) + 40), (int)this); /*0x6e583b*/
    result = g_GameObjectCleanup; /*0x6e5840*/
  }
  return result; /*0x6e584a*/
}



// ==== 0x006E5850  TagClass::IsOnlyInstanceOfType  this=TagClass  sig=csp ====
bool __thiscall TagClass::IsOnlyInstanceOfType(TagClass *this)
{
  int v1; // edx
  char *i; // esi

  v1 = 0; /*0x6e5859*/
  if ( g_GameObjectCleanup <= 0 ) /*0x6e585d*/
    return 1; /*0x6e587d*/
  for ( i = (char *)g_TagClassCount; /*0x6e585f*/
        *(TagClass **)i == this || *(TagTypeClass **)(*(_DWORD *)i + 36) != this->buildingType;
        i += 4 )
  {
    if ( ++v1 >= g_GameObjectCleanup ) /*0x6e587b*/
      return 1; /*0x6e587b*/
  }
  return 0; /*0x6e587d*/
}



// ==== 0x006E5890  TagClass::StubReturn56  this=TagClass  sig=csp ====
int TagClass::StubReturn56(TagClass *this)
{
  return 56; /*0x6e5895*/
}



// ==== 0x006E58A0  TagClass::StubReturn44  this=TagClass  sig=csp ====
int TagClass::StubReturn44(TagClass *this)
{
  return 44; /*0x6e58a5*/
}



// ==== 0x006E58B0  TagClass::ProcessTrigger  this=TagClass  sig=csp ====
void **__thiscall TagClass::ProcessTrigger(TagClass *this, char a2)
{
  TagClass::Destructor(this); /*0x6e58b3*/
  if ( (a2 & 1) != 0 ) /*0x6e58bd*/
    __3_YAXPAX_Z(this); /*0x6e58c0*/
  return &this->AbstractClass; /*0x6e58ca*/
}



// ==== 0x006E58D0  sub_6E58D0  this=-  sig=ida-proto ====
void sub_6E58D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e58dc*/
  dbl_B0E7B8 = Math::Sqrt(v0 + v0); /*0x6e58ee*/
}



// ==== 0x006E5900  sub_6E5900  this=-  sig=ida-proto ====
void sub_6E5900()
{
  dbl_B0E808 = dbl_B0E7B8 / 60.0; /*0x6e590c*/
}



// ==== 0x006E5920  sub_6E5920  this=-  sig=ida-proto ====
void sub_6E5920()
{
  dbl_B0E7F0 = 1.0 / dbl_B0E808; /*0x6e592c*/
}



// ==== 0x006E5940  sub_6E5940  this=-  sig=ida-proto ====
void sub_6E5940()
{
  dbl_B0E7E8 = 0.0174532925199433 * 45.0; /*0x6e594c*/
}



// ==== 0x006E5960  sub_6E5960  this=-  sig=ida-proto ====
void sub_6E5960()
{
  dbl_B0E7C0 = 0.0174532925199433 * 60.0; /*0x6e596c*/
}



// ==== 0x006E5980  sub_6E5980  this=-  sig=ida-proto ====
void sub_6E5980()
{
  dbl_B0E798 = 0.0174532925199433 * 90.0; /*0x6e598c*/
}



// ==== 0x006E59A0  sub_6E59A0  this=-  sig=ida-proto ====
__int64 sub_6E59A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E798 - dbl_B0E7C0); /*0x6e59b2*/
  result = Math::RoundToInt(v0 * dbl_B0E7B8 * 0.5); /*0x6e59c6*/
  dword_B0E810 = result; /*0x6e59cb*/
  return result; /*0x6e59d0*/
}



// ==== 0x006E59E0  sub_6E59E0  this=-  sig=ida-proto ====
void sub_6E59E0()
{
  dbl_B0E7C8 = Math::ArcTan((double)dword_B0E810 * 0.00390625); /*0x6e59f7*/
}



// ==== 0x006E5A10  sub_6E5A10  this=-  sig=ida-proto ====
void sub_6E5A10()
{
  dbl_B0E7E0 = Math::ArcTan((double)(2 * dword_B0E810) / dbl_B0E7B8); /*0x6e5a32*/
}



// ==== 0x006E5A40  sub_6E5A40  this=-  sig=ida-proto ====
__int64 sub_6E5A40()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E810) + 0.5); /*0x6e5a5b*/
  dword_B0E804 = result; /*0x6e5a60*/
  return result; /*0x6e5a66*/
}



// ==== 0x006E5A70  sub_6E5A70  this=-  sig=ida-proto ====
int sub_6E5A70()
{
  word_B0E7B0 = 0; /*0x6e5a72*/
  word_B0E7B2 = 0; /*0x6e5a78*/
  return 0; /*0x6e5a7e*/
}



// ==== 0x006E5A80  sub_6E5A80  this=-  sig=ida-proto ====
int sub_6E5A80()
{
  dword_B0E7D0 = 0; /*0x6e5a82*/
  dword_B0E7D4 = 0; /*0x6e5a87*/
  dword_B0E7D8 = 0; /*0x6e5a8c*/
  return 0; /*0x6e5a91*/
}



// ==== 0x006E5AA0  sub_6E5AA0  this=-  sig=ida-proto ====
int sub_6E5AA0()
{
  dword_B0E800 = 0; /*0x6e5aa5*/
  dword_B0E7F8 = 128; /*0x6e5aaf*/
  dword_B0E7FC = 128; /*0x6e5ab4*/
  return 128; /*0x6e5ab9*/
}



// ==== 0x006E5AC0  sub_6E5AC0  this=-  sig=ida-proto ====
int sub_6E5AC0()
{
  dword_B0E7A0 = 0; /*0x6e5ac2*/
  dword_B0E7A4 = 0; /*0x6e5ac7*/
  dword_B0E7A8 = 0; /*0x6e5acc*/
  dword_B0E7AC = 0; /*0x6e5ad1*/
  return 0; /*0x6e5ad6*/
}



// ==== 0x006E5AE0  sub_6E5AE0  this=-  sig=ida-proto ====
int sub_6E5AE0()
{
  dword_B0E784 = 0; /*0x6e5ae7*/
  dword_B0E788 = 0; /*0x6e5aec*/
  byte_B0E78C = 1; /*0x6e5af1*/
  byte_B0E78D = 0; /*0x6e5af8*/
  dword_B0E780 = (int)&DynamicVectorClass<TagTypeClass *>::`vftable'; /*0x6e5afd*/
  dword_B0E794 = 10; /*0x6e5b07*/
  g_MultiplayerCleanup = 0; /*0x6e5b11*/
  return atexit(sub_6E5B20); /*0x6e5b1c*/
}



// ==== 0x006E5B20  sub_6E5B20  this=-  sig=ida-proto ====
void __cdecl sub_6E5B20()
{
  dword_B0E780 = (int)&VectorClass<TagTypeClass *>::`vftable'; /*0x6e5b28*/
  if ( dword_B0E784 && byte_B0E78D ) /*0x6e5b3c*/
  {
    __3_YAXPAX_Z(dword_B0E784); /*0x6e5b3f*/
    dword_B0E784 = 0; /*0x6e5b47*/
  }
  byte_B0E78D = 0; /*0x6e5b4d*/
  dword_B0E788 = 0; /*0x6e5b53*/
}



// ==== 0x006E5B60  TagTypeClass::Construct  this=AbstractTypeClass  sig=csp ====
char *__thiscall TagTypeClass_Constructor(char *this, char *Source)
{
  int v3; // eax
  int v4; // eax
  char Destination[48]; // [esp+8h] [ebp-34h] BYREF
  char v7; // [esp+38h] [ebp-4h]

  AbstractTypeClass::Constructor((int)this, Source); /*0x6e5b6c*/
  *((_DWORD *)this + 38) = -1; /*0x6e5b78*/
  *((_DWORD *)this + 39) = 0; /*0x6e5b82*/
  this->u32_28 = 0; /*0x6e5b88*/
  *(_DWORD *)this = &TagTypeClass::`vftable'; /*0x6e5b8e*/
  this->vtable2 = &TagTypeClass::`vftable'; /*0x6e5b95*/
  this->vtable3 = &TagTypeClass::`vftable'; /*0x6e5b9c*/
  this->vtable4 = &TagTypeClass::`vftable'; /*0x6e5ba3*/
  if ( this == (char *)-36 ) /*0x6e5baa*/
  {
    Destination[0] = 0; /*0x6e5bac*/
  }
  else
  {
    strncpy(Destination, this + 36, 0x30u); /*0x6e5bba*/
    v7 = 0; /*0x6e5bc2*/
  }
  if ( Destination != this + 100 ) /*0x6e5bd0*/
  {
    qmemcpy(this + 100, Destination, 0x30u); /*0x6e5bdc*/
    this->q094 = v7; /*0x6e5bde*/
  }
  *((_DWORD *)this + 38) = g_MultiplayerCleanup; /*0x6e5be6*/
  if ( g_MultiplayerCleanup < dword_B0E788 /*0x6e5c1e*/
    || (byte_B0E78D || !dword_B0E788)
    && dword_B0E794 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0E780 + 8))(
         &dword_B0E780,
         dword_B0E788 + dword_B0E794,
         0) )
  {
    v3 = g_MultiplayerCleanup++; /*0x6e5c2b*/
    *((_DWORD *)dword_B0E784 + v3) = this; /*0x6e5c3a*/
  }
  if ( dword_B0F680 < dword_B0F678 /*0x6e5c71*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F678 + dword_B0F684,
         0) )
  {
    v4 = dword_B0F680++; /*0x6e5c7e*/
    *((_DWORD *)dword_B0F674 + v4) = this; /*0x6e5c8d*/
  }
  return this; /*0x6e5c92*/
}



// ==== 0x006E5CA0  TagTypeClass::CleanupMembers  this=TagTypeClass  sig=csp ====
int __thiscall TagTypeClass::CleanupMembers(AbstractTypeClass *this)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // esi
  int v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // eax
  AbstractTypeClass *v10; // [esp+Ch] [ebp-4h] BYREF

  this->AbstractClass = &TagTypeClass::`vftable'; /*0x6e5ca7*/
  this->? = &TagTypeClass::`vftable'; /*0x6e5cad*/
  this->? = &TagTypeClass::`vftable'; /*0x6e5cb4*/
  this->? = &TagTypeClass::`vftable'; /*0x6e5cbb*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x6e5cc2*/
  v2 = (_DWORD *)this->persistence; /*0x6e5cc7*/
  this->persistence = 0; /*0x6e5ccd*/
  if ( v2 ) /*0x6e5cd9*/
  {
    do /*0x6e5cfa*/
    {
      v3 = (_DWORD *)v2[42]; /*0x6e5cdb*/
      v2[42] = 0; /*0x6e5ce1*/
      if ( v2 ) /*0x6e5ced*/
        (*(void (__thiscall **)(_DWORD *, int))(*v2 + 32))(v2, 1); /*0x6e5cf3*/
      v2 = v3; /*0x6e5cf8*/
    }
    while ( v3 ); /*0x6e5cfa*/
  }
  v4 = 0; /*0x6e5d01*/
  if ( g_GameObjectCleanup > 0 ) /*0x6e5d05*/
  {
    v5 = g_TagClassCount; /*0x6e5d07*/
    do /*0x6e5d2e*/
    {
      v6 = (_DWORD *)v5[v4]; /*0x6e5d0c*/
      if ( (AbstractTypeClass *)v6[9] == this ) /*0x6e5d12*/
      {
        if ( v6 ) /*0x6e5d16*/
        {
          (*(void (__thiscall **)(_DWORD *, int))(*v6 + 32))(v6, 1); /*0x6e5d1c*/
          v5 = g_TagClassCount; /*0x6e5d1f*/
        }
        --v4; /*0x6e5d24*/
      }
      ++v4; /*0x6e5d2b*/
    }
    while ( v4 < g_GameObjectCleanup ); /*0x6e5d2e*/
  }
  v10 = this; /*0x6e5d40*/
  v7 = (*(int (__thiscall **)(int *, AbstractTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6e5d44*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v10);
  if ( v7 != -1 && v7 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x6e5d54*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x6e5d59*/
    for ( ; /*0x6e5d5f*/
          v7 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v7) )
    {
      ++v7; /*0x6e5d67*/
    }
  }
  v10 = this; /*0x6e5d89*/
  v8 = (*(int (__thiscall **)(int *, AbstractTypeClass **))(dword_B0E780 + 16))(&dword_B0E780, &v10); /*0x6e5d8d*/
  if ( v8 != -1 && v8 < g_MultiplayerCleanup && v8 < --g_MultiplayerCleanup ) /*0x6e5da8*/
  {
    do /*0x6e5dc0*/
    {
      ++v8; /*0x6e5db0*/
      *((_DWORD *)dword_B0E784 + v8 - 1) = *((_DWORD *)dword_B0E784 + v8); /*0x6e5db4*/
    }
    while ( v8 < g_MultiplayerCleanup ); /*0x6e5dc0*/
  }
  return AbstractTypeClass::Dtor(this); /*0x6e5dc9*/
}



// ==== 0x006E5E50  TagTypeClass::GetEvent  this=TagTypeClass  sig=csp ====
int __thiscall TagTypeClass::GetEvent(TagTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = this->persistence; /*0x6e5e50*/
  if ( result == a2 ) /*0x6e5e5c*/
  {
    result = *(_DWORD *)(result + 168); /*0x6e5e5e*/
    this->persistence = result; /*0x6e5e64*/
  }
  return result; /*0x6e5e6a*/
}



// ==== 0x006E5E70  ObjectTypeClass::FindByName  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::FindByName(ObjectTypeClass *this)
{
  int v2; // ebx
  int v3; // esi

  if ( !this ) /*0x6e5e77*/
    return 0; /*0x6e5e77*/
  v2 = 0; /*0x6e5e7e*/
  if ( g_MultiplayerCleanup <= 0 ) /*0x6e5e82*/
    return 0; /*0x6e5eb8*/
  while ( 1 ) /*0x6e5e8a*/
  {
    v3 = *((_DWORD *)dword_B0E784 + v2); /*0x6e5e8a*/
    if ( !_strcmpi((char *)(v3 + 36), (char *)this) || !_strcmpi((char *)(v3 + 100), (char *)this) ) /*0x6e5ea2*/
      break; /*0x6e5ea2*/
    if ( ++v2 >= g_MultiplayerCleanup ) /*0x6e5eb6*/
      return 0; /*0x6e5eb6*/
  }
  return v3; /*0x6e5eb8*/
}



// ==== 0x006E5ED0  CCINIClass::ProcessSection  this=INIClass  sig=csp ====
int __thiscall CCINIClass::ProcessSection(INIClass *this)
{
  int result; // eax
  int v3; // esi
  int v4; // ebp
  unsigned __int8 *StringByIndex; // edi
  int v6; // esi
  char *v7; // eax
  char *v8; // esi
  int v9; // eax
  int v10; // [esp+Ch] [ebp-1Ch]
  char Destination[24]; // [esp+10h] [ebp-18h] BYREF

  result = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)&stru_842C2C.SuperWeaponClass_field_0x10); /*0x6e5ede*/
  v3 = result; /*0x6e5ee3*/
  v4 = 0; /*0x6e5ee5*/
  v10 = result; /*0x6e5ee9*/
  if ( result > 0 ) /*0x6e5eed*/
  {
    while ( 1 ) /*0x6e5f07*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x6e5f07*/
                                           this->__pad_0,
                                           (unsigned __int8 *)&stru_842C2C.SuperWeaponClass_field_0x10,
                                           v4);
      result = INIClass::GetString( /*0x6e5f1a*/
                 this,
                 (unsigned __int8 *)&stru_842C2C.SuperWeaponClass_field_0x10,
                 StringByIndex,
                 &g_INI_DefaultBuffer,
                 Destination,
                 24);
      if ( result > 0 ) /*0x6e5f21*/
        break; /*0x6e5f21*/
LABEL_13:
      if ( ++v4 >= v3 ) /*0x6e5fc5*/
        return result; /*0x6e5fc5*/
    }
    if ( !_strcmpi(g_Str__none_, (char *)StringByIndex) || !_strcmpi(g_Str_none, (char *)StringByIndex) ) /*0x6e5f3f*/
      goto LABEL_11; /*0x6e5f3f*/
    v6 = 0; /*0x6e5f50*/
    if ( g_MultiplayerCleanup > 0 ) /*0x6e5f54*/
    {
      while ( _strcmpi((char *)(*((_DWORD *)dword_B0E784 + v6) + 36), (char *)StringByIndex) ) /*0x6e5f6e*/
      {
        if ( ++v6 >= g_MultiplayerCleanup ) /*0x6e5f78*/
          goto LABEL_8; /*0x6e5f78*/
      }
      v8 = (char *)*((_DWORD *)dword_B0E784 + v6); /*0x6e5f9c*/
      goto LABEL_12; /*0x6e5f9f*/
    }
LABEL_8:
    v7 = (char *)__2_YAPAXI_Z(0xA4u); /*0x6e5f7f*/
    if ( v7 ) /*0x6e5f89*/
      v8 = TagTypeClass::Construct(v7, (char *)StringByIndex); /*0x6e5f93*/
    else
LABEL_11:
      v8 = 0; /*0x6e5fa1*/
LABEL_12:
    v9 = sub_412610((char *)StringByIndex); /*0x6e5fa3*/
    SwizzleManagerClass::Here_I_Am((int)&SwizzleManagerClass_Instance, v9, (int)v8); /*0x6e5fb1*/
    result = (*(int (__thiscall **)(char *, INIClass *))(*(_DWORD *)v8 + 100))(v8, this); /*0x6e5fbb*/
    v3 = v10; /*0x6e5fbe*/
    goto LABEL_13; /*0x6e5fbe*/
  }
  return result; /*0x6e5fcc*/
}



// ==== 0x006E5FE0  ObjectClass::SaveTriggerTagsToINI  this=INIClass  sig=csp ====
int __thiscall SaveTriggerTagsToINI(INIClass *this)
{
  int KeyCount; // ebx
  int i; // edi
  unsigned __int8 *StringByIndex; // eax
  int result; // eax
  int j; // edi
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF

  KeyCount = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)&stru_842C2C.SuperWeaponClass_field_0x10); /*0x6e5ff3*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6e5ff9*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x6e6005*/
                                         this->__pad_0,
                                         (unsigned __int8 *)&stru_842C2C.SuperWeaponClass_field_0x10,
                                         i);
    INIClass::GetString( /*0x6e601f*/
      this,
      (unsigned __int8 *)&stru_842C2C.SuperWeaponClass_field_0x10,
      StringByIndex,
      &g_INI_DefaultBuffer,
      Destination,
      32);
    INIClass::ClearSection((int *)this->__pad_0, (int)Destination, 0); /*0x6e602d*/
  }
  INIClass::ClearSection((int *)this->__pad_0, (int)&stru_842C2C.SuperWeaponClass_field_0x10, 0); /*0x6e6042*/
  result = g_MultiplayerCleanup; /*0x6e6047*/
  for ( j = 0; j < g_MultiplayerCleanup; ++j ) /*0x6e6050*/
  {
    (*(void (__thiscall **)(_DWORD, INIClass *))(**((_DWORD **)dword_B0E784 + j) + 104))( /*0x6e605d*/
      *((_DWORD *)dword_B0E784 + j),
      this);
    result = g_MultiplayerCleanup; /*0x6e6060*/
  }
  return result; /*0x6e606a*/
}



// ==== 0x006E6080  TagTypeClass::GetAction  this=TagTypeClass  sig=csp ====
char __thiscall TagTypeClass::GetAction(TagTypeClass *this, unsigned __int8 ***a2)
{
  char *v3; // eax
  char *v4; // eax
  char Destination[48]; // [esp+8h] [ebp-B4h] BYREF
  char v7; // [esp+38h] [ebp-84h]
  char String[128]; // [esp+3Ch] [ebp-80h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x6e6093*/
  if ( !INIClass::GetString( /*0x6e60b4*/
          (INIClass *)a2,
          (unsigned __int8 *)&stru_842C2C.SuperWeaponClass_field_0x10,
          (unsigned __int8 *)&this->arrayIndex,
          &g_INI_DefaultBuffer,
          String,
          128) )
    return 0; /*0x6e6151*/
  strtok(String, Str); /*0x6e60cb*/
  *((_DWORD *)this + 39) = atoi(String); /*0x6e60e1*/
  v3 = strtok(0, Str); /*0x6e60e7*/
  if ( v3 ) /*0x6e60f1*/
  {
    strncpy(Destination, v3, 0x30u); /*0x6e6101*/
    v7 = 0; /*0x6e6109*/
  }
  else
  {
    Destination[0] = 0; /*0x6e60f3*/
  }
  if ( Destination != (char *)this + 100 ) /*0x6e6118*/
  {
    qmemcpy((char *)this + 100, Destination, 0x30u); /*0x6e6123*/
    *((_BYTE *)this + 148) = v7; /*0x6e6125*/
  }
  v4 = strtok(0, Str); /*0x6e612d*/
  this->persistence = TagTypeClass::FindOrCreateTriggerType(v4); /*0x6e613d*/
  return 1; /*0x6e6143*/
}



// ==== 0x006E6160  TagTypeClass::GetParameter  this=TagTypeClass  sig=csp ====
char __thiscall TagTypeClass::GetParameter(TagTypeClass *this, char *a2)
{
  int v3; // eax
  CHAR Source[128]; // [esp+4h] [ebp-80h] BYREF

  v3 = this->persistence; /*0x6e6169*/
  if ( v3 ) /*0x6e6171*/
    wsprintfA(Source, "%d,%s,%s", *((_DWORD *)this + 39), (const char *)this + 100, (const char *)(v3 + 36)); /*0x6e61b4*/
  else
    wsprintfA(Source, "%s,<none>", (const char *)this + 100); /*0x6e6181*/
  INIClass::SetString( /*0x6e6199*/
    a2,
    (unsigned __int8 *)&stru_842C2C.SuperWeaponClass_field_0x10,
    (char *)&this->arrayIndex,
    Source);
  return 1; /*0x6e61db*/
}



// ==== 0x006E61F0  Debug::AccumFlags  this=TagTypeClass  sig=csp ====
int __thiscall Debug::AccumFlags(Debug *this)
{
  TriggerTypeClass *Debug_field_0xA0; // esi
  int i; // edi
  int Flags; // eax

  Debug_field_0xA0 = (TriggerTypeClass *)this->Debug_field_0xA0; /*0x6e61f1*/
  for ( i = 0; Debug_field_0xA0; i |= Flags ) /*0x6e61fc*/
  {
    Flags = TriggerTypeClass::GetFlags(Debug_field_0xA0); /*0x6e6200*/
    Debug_field_0xA0 = Debug_field_0xA0->NextTrigger; /*0x6e6205*/
  }
  return i; /*0x6e6213*/
}



// ==== 0x006E6220  TagClass::HasValidHouse  this=TOP  sig=csp ====
char __thiscall TagClass::HasValidHouse(TagClass *this)
{
  HouseClass *v1; // esi

  v1 = (HouseClass *)this->u32_28; /*0x6e6221*/
  if ( !v1 ) /*0x6e6229*/
    return 0; /*0x6e6240*/
  while ( !HouseClass::FindType15(v1) ) /*0x6e6234*/
  {
    v1 = (HouseClass *)v1->psychicDetectionCount; /*0x6e6236*/
    if ( !v1 ) /*0x6e623e*/
      return 0; /*0x6e623e*/
  }
  return 1; /*0x6e6242*/
}



// ==== 0x006E6250  TagTypeClass::HasCrossesHorizontalLineEvent  this=TagTypeClass  sig=csp ====
bool __thiscall TagTypeClass::HasCrossesHorizontalLineEvent(TagTypeClass *this)
{
  HouseClass *v1; // esi

  v1 = (HouseClass *)this->persistence; /*0x6e6251*/
  if ( !v1 ) /*0x6e6259*/
    return 0; /*0x6e6270*/
  while ( !(unsigned __int8)HouseClass::HasType25Building(v1) ) /*0x6e6264*/
  {
    v1 = (HouseClass *)v1->psychicDetectionCount; /*0x6e6266*/
    if ( !v1 ) /*0x6e626e*/
      return 0; /*0x6e626e*/
  }
  return 1; /*0x6e6272*/
}



// ==== 0x006E6280  TagTypeClass::HasCrossesVerticalLineEvent  this=TagTypeClass  sig=csp ====
bool __thiscall TagTypeClass::HasCrossesVerticalLineEvent(TagTypeClass *this)
{
  HouseClass *v1; // esi

  v1 = (HouseClass *)this->persistence; /*0x6e6281*/
  if ( !v1 ) /*0x6e6289*/
    return 0; /*0x6e62a0*/
  while ( !(unsigned __int8)HouseClass::HasType26Building(v1) ) /*0x6e6294*/
  {
    v1 = (HouseClass *)v1->psychicDetectionCount; /*0x6e6296*/
    if ( !v1 ) /*0x6e629e*/
      return 0; /*0x6e629e*/
  }
  return 1; /*0x6e62a2*/
}



// ==== 0x006E62B0  TagTypeClass::HasZoneEntryByEvent  this=TagTypeClass  sig=csp ====
bool __thiscall TagTypeClass::HasZoneEntryByEvent(TagTypeClass *this)
{
  HouseClass *v1; // esi

  v1 = (HouseClass *)this->persistence; /*0x6e62b1*/
  if ( !v1 ) /*0x6e62b9*/
    return 0; /*0x6e62d0*/
  while ( !HouseClass::FindType24(v1) ) /*0x6e62c4*/
  {
    v1 = (HouseClass *)v1->psychicDetectionCount; /*0x6e62c6*/
    if ( !v1 ) /*0x6e62ce*/
      return 0; /*0x6e62ce*/
  }
  return 1; /*0x6e62d2*/
}



// ==== 0x006E6310  TagTypeClass::FindOrCreate  this=Coord  sig=csp ====
char *__thiscall TagTypeClass::FindOrCreate(char *Source)
{
  int v2; // esi
  char *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e632c*/
    return 0; /*0x6e638f*/
  v2 = 0; /*0x6e633d*/
  if ( g_MultiplayerCleanup <= 0 ) /*0x6e6341*/
  {
LABEL_6:
    v3 = (char *)__2_YAPAXI_Z(0xA4u); /*0x6e6366*/
    if ( v3 ) /*0x6e6375*/
      return TagTypeClass::Construct(v3, Source); /*0x6e6381*/
    return 0; /*0x6e6375*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)dword_B0E784 + v2) + 36), Source) ) /*0x6e635a*/
  {
    if ( ++v2 >= g_MultiplayerCleanup ) /*0x6e6364*/
      goto LABEL_6; /*0x6e6364*/
  }
  return (char *)*((_DWORD *)dword_B0E784 + v2); /*0x6e637f*/
}



// ==== 0x006E63A0  TagTypeClass::GetClassIdentifier  this=TagTypeClass  sig=csp ====
int __stdcall TagTypeClass::GetClassIdentifier(TagTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6e63a6*/
    return -2147467261; /*0x6e63a8*/
  *a2 = 1425466419; /*0x6e63b6*/
  a2[1] = 298977773; /*0x6e63be*/
  a2[2] = 1610655148; /*0x6e63c7*/
  a2[3] = unk_7E97DC; /*0x6e63d0*/
  return 0; /*0x6e63ad*/
}



// ==== 0x006E63E0  TagTypeClass::PowerDrainUpdate  this=TagTypeClass  sig=csp ====
int __thiscall TagTypeClass::PowerDrainUpdate(TagTypeClass *this, int *a2)
{
  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x6e63e9*/
  return Power::TimerProcess(*((_DWORD *)this + 39)); /*0x6e63fc*/
}



// ==== 0x006E6410  TagTypeClass::LoadTypeData  this=TagTypeClass  sig=csp ====
int __stdcall TagTypeClass::LoadTypeData(TagTypeClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6e641b*/
  if ( result >= 0 ) /*0x6e6422*/
  {
    if ( this ) /*0x6e6426*/
    {
      AbstractTypeClass::Init((int)this, (int)&a2); /*0x6e642f*/
      this->AbstractClass = &TagTypeClass::`vftable'; /*0x6e6434*/
      this->? = &TagTypeClass::`vftable'; /*0x6e643a*/
      this->? = &TagTypeClass::`vftable'; /*0x6e6441*/
      this->? = &TagTypeClass::`vftable'; /*0x6e6448*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 40); /*0x6e645b*/
    return 0; /*0x6e6460*/
  }
  return result; /*0x6e6462*/
}



// ==== 0x006E6470  TagTypeClass::SaveToINI  this=TagTypeClass  sig=csp ====
int __stdcall TagTypeClass::SaveToINI(TagTypeClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6e647f*/
  if ( result >= 0 ) /*0x6e6486*/
    return 0; /*0x6e6488*/
  return result; /*0x6e648a*/
}



// ==== 0x006E6490  TagTypeClass::GetTypeIdentifier  this=TagTypeClass  sig=csp ====
int TagTypeClass::GetTypeIdentifier(TagTypeClass *this)
{
  return 45; /*0x6e6495*/
}



// ==== 0x006E64A0  TagTypeClass::GetObjectSize  this=TagTypeClass  sig=csp ====
int TagTypeClass::GetObjectSize(TagTypeClass *this)
{
  return 164; /*0x6e64a5*/
}



// ==== 0x006E64B0  TagTypeClass::GetAuxField  this=TagTypeClass  sig=csp ====
int __thiscall TagTypeClass::GetAuxField(TagTypeClass *this)
{
  return *((_DWORD *)this + 38); /*0x6e64b6*/
}



// ==== 0x006E64C0  TagTypeClass::ddtor  this=TagTypeClass  sig=csp ====
void *__thiscall TagTypeClass::ddtor(TagTypeClass *this, char a2)
{
  TagTypeClass::CleanupMembers((AbstractTypeClass *)this); /*0x6e64c3*/
  if ( (a2 & 1) != 0 ) /*0x6e64cd*/
    __3_YAXPAX_Z(this); /*0x6e64d0*/
  return this; /*0x6e64da*/
}



// ==== 0x006E64E0  _DynamicVectorClass_PAVTagTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TagTypeClass::Destroy(_DynamicVectorClass_PAVTagTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6e64e6*/
  this->m_10 = 0; /*0x6e64e9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6e64f0*/
  {
    __3_YAXPAX_Z(v2); /*0x6e64f6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6e64fe*/
  }
  BYTE1(this->m_C) = 0; /*0x6e6501*/
  this->m_8 = 0; /*0x6e6504*/
}



// ==== 0x006E6510  _DynamicVectorClass_PAVTagTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TagTypeClass::GetItemIndex(_DynamicVectorClass_PAVTagTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6e6510*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6e6525*/
  else
    return 0; /*0x6e6517*/
}



// ==== 0x006E6530  _VectorClass_PAVTagTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TagTypeClass::Get(_VectorClass_PAVTagTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6e653a*/
}



// ==== 0x006E6540  _VectorClass_PAVTagTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TagTypeClass::Add(_VectorClass_PAVTagTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x6e6542*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6e654d*/
  {
    v3 = 0; /*0x6e654f*/
    if ( m_8 <= 0 ) /*0x6e6553*/
      return 1; /*0x6e6573*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6e6555*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6e655b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6e6564*/
    {
      ++v3; /*0x6e6566*/
      ++v4; /*0x6e6567*/
      if ( v3 >= m_8 ) /*0x6e656c*/
        return 1; /*0x6e656c*/
    }
  }
  return 0; /*0x6e656e*/
}



// ==== 0x006E6580  _VectorClass_PAVTagTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TagTypeClass::Release(_VectorClass_PAVTagTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6e658c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6e6596*/
    if ( a3 ) /*0x6e659c*/
      v4 = a3; /*0x6e65b2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6e65ae*/
    LOBYTE(this->m_C) = 1; /*0x6e65b6*/
    if ( v4 ) /*0x6e65ba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6e65c5*/
      {
        m_8 = this->m_8; /*0x6e65cc*/
        if ( a2 < m_8 ) /*0x6e65d1*/
          m_8 = a2; /*0x6e65d3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6e65d9*/
          ++i; /*0x6e65de*/
        if ( BYTE1(this->m_C) ) /*0x6e65eb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6e65f6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6e65fe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6e6607*/
      this->m_8 = a2; /*0x6e660f*/
      BYTE1(this->m_C) = a3 == 0; /*0x6e6612*/
      return 1; /*0x6e6618*/
    }
    else
    {
      return 0; /*0x6e65bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVTagTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6e6622*/
    return 1; /*0x6e6628*/
  }
}



// ==== 0x006E6630  _VectorClass_PAVTagTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TagTypeClass::Remove(_VectorClass_PAVTagTypeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6e663d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6e6643*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6e664b*/
  }
  BYTE1(this->m_C) = 0; /*0x6e664e*/
  this->m_8 = 0; /*0x6e6651*/
}



// ==== 0x006E6660  _VectorClass_PAVTagTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TagTypeClass::GetSize(_VectorClass_PAVTagTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6e6660*/
    return 0; /*0x6e6668*/
  m_8 = this->m_8; /*0x6e666e*/
  result = 0; /*0x6e6671*/
  if ( m_8 <= 0 ) /*0x6e6675*/
    return -1; /*0x6e668c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6e667b*/
  {
    if ( ++result >= m_8 ) /*0x6e668a*/
      return -1; /*0x6e668a*/
  }
  return result; /*0x6e666a*/
}



// ==== 0x006E66A0  _VectorClass_PAVTagTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TagTypeClass::LoadTypeData(_VectorClass_PAVTagTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6e66a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6e66b5*/
  else
    return 0; /*0x6e66a7*/
}



// ==== 0x006E66C0  _DynamicVectorClass_PAVTagTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TagTypeClass::SetCapacity(
        _DynamicVectorClass_PAVTagTypeClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6e66cc*/
  {
    LOBYTE(this->m_C) = 0; /*0x6e66d2*/
    if ( a3 ) /*0x6e66d8*/
      v4 = a3; /*0x6e66ee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6e66ea*/
    LOBYTE(this->m_C) = 1; /*0x6e66f2*/
    if ( !v4 ) /*0x6e66f6*/
      return 0; /*0x6e676a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6e66f8*/
    {
      m_8 = this->m_8; /*0x6e66ff*/
      if ( a2 < m_8 ) /*0x6e6704*/
        m_8 = a2; /*0x6e6706*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6e670c*/
        ++i; /*0x6e6711*/
      if ( BYTE1(this->m_C) ) /*0x6e671e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6e6729*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6e6731*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x6e673a*/
    this->m_8 = a2; /*0x6e6742*/
    BYTE1(this->m_C) = a3 == 0; /*0x6e6745*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVTagTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6e674e*/
  }
  v7 = this->m_8; /*0x6e6751*/
  if ( v7 < this->m_10 ) /*0x6e6759*/
    this->m_10 = v7; /*0x6e675b*/
  return 1; /*0x6e675e*/
}



// ==== 0x006E6770  _DynamicVectorClass_PAVTagTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TagTypeClass::FindItemIndex(_DynamicVectorClass_PAVTagTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6e6770*/
  result = 0; /*0x6e6773*/
  if ( m_10 <= 0 ) /*0x6e6778*/
    return -1; /*0x6e678f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6e677e*/
  {
    if ( ++result >= m_10 ) /*0x6e678d*/
      return -1; /*0x6e678d*/
  }
  return result; /*0x6e6792*/
}



// ==== 0x006E67A0  _VectorClass_PAVTagTypeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TagTypeClass::QueryInterface(_VectorClass_PAVTagTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6e67a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TagTypeClass *>::`vftable'; /*0x6e67a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6e67b0*/
  {
    __3_YAXPAX_Z(v3); /*0x6e67b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6e67c0*/
  }
  BYTE1(this->m_C) = 0; /*0x6e67cb*/
  this->m_8 = 0; /*0x6e67d1*/
  if ( (a2 & 1) != 0 ) /*0x6e67d8*/
    __3_YAXPAX_Z(this); /*0x6e67db*/
  return this->__pad_0; /*0x6e67e5*/
}



// ==== 0x006E67F0  _DynamicVectorClass_PAVTagTypeClass::Constructor_VectorClass_TagTypeClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TagTypeClass::Constructor_VectorClass_TagTypeClass___(
        _DynamicVectorClass_PAVTagTypeClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6e67f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TagTypeClass *>::`vftable'; /*0x6e67f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6e6800*/
  {
    __3_YAXPAX_Z(v3); /*0x6e6808*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6e6810*/
  }
  BYTE1(this->m_C) = 0; /*0x6e681b*/
  this->m_8 = 0; /*0x6e6821*/
  if ( (a2 & 1) != 0 ) /*0x6e6828*/
    __3_YAXPAX_Z(this); /*0x6e682b*/
  return this->__pad_0; /*0x6e6835*/
}



// ==== 0x006E6840  sub_6E6840  this=-  sig=ida-proto ====
void sub_6E6840()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e684c*/
  dbl_B0E838 = Math::Sqrt(v0 + v0); /*0x6e685e*/
}



// ==== 0x006E6870  sub_6E6870  this=-  sig=ida-proto ====
void sub_6E6870()
{
  dbl_B0E8A0 = dbl_B0E838 / 60.0; /*0x6e687c*/
}



// ==== 0x006E6890  sub_6E6890  this=-  sig=ida-proto ====
void sub_6E6890()
{
  dbl_B0E888 = 1.0 / dbl_B0E8A0; /*0x6e689c*/
}



// ==== 0x006E68B0  sub_6E68B0  this=-  sig=ida-proto ====
void sub_6E68B0()
{
  dbl_B0E880 = 0.0174532925199433 * 45.0; /*0x6e68bc*/
}



// ==== 0x006E68D0  sub_6E68D0  this=-  sig=ida-proto ====
void sub_6E68D0()
{
  dbl_B0E858 = 0.0174532925199433 * 60.0; /*0x6e68dc*/
}



// ==== 0x006E68F0  sub_6E68F0  this=-  sig=ida-proto ====
void sub_6E68F0()
{
  dbl_B0E818 = 0.0174532925199433 * 90.0; /*0x6e68fc*/
}



// ==== 0x006E6910  sub_6E6910  this=-  sig=ida-proto ====
__int64 sub_6E6910()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E818 - dbl_B0E858); /*0x6e6922*/
  result = Math::RoundToInt(v0 * dbl_B0E838 * 0.5); /*0x6e6936*/
  dword_B0E8A8 = result; /*0x6e693b*/
  return result; /*0x6e6940*/
}



// ==== 0x006E6950  sub_6E6950  this=-  sig=ida-proto ====
void sub_6E6950()
{
  dbl_B0E860 = Math::ArcTan((double)dword_B0E8A8 * 0.00390625); /*0x6e6967*/
}



// ==== 0x006E6980  sub_6E6980  this=-  sig=ida-proto ====
void sub_6E6980()
{
  dbl_B0E878 = Math::ArcTan((double)(2 * dword_B0E8A8) / dbl_B0E838); /*0x6e69a2*/
}



// ==== 0x006E69B0  sub_6E69B0  this=-  sig=ida-proto ====
__int64 sub_6E69B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E8A8) + 0.5); /*0x6e69cb*/
  dword_B0E89C = result; /*0x6e69d0*/
  return result; /*0x6e69d6*/
}



// ==== 0x006E69E0  sub_6E69E0  this=-  sig=ida-proto ====
int sub_6E69E0()
{
  word_B0E830 = 0; /*0x6e69e2*/
  word_B0E832 = 0; /*0x6e69e8*/
  return 0; /*0x6e69ee*/
}



// ==== 0x006E69F0  sub_6E69F0  this=-  sig=ida-proto ====
int sub_6E69F0()
{
  dword_B0E868 = 0; /*0x6e69f2*/
  dword_B0E86C = 0; /*0x6e69f7*/
  dword_B0E870 = 0; /*0x6e69fc*/
  return 0; /*0x6e6a01*/
}



// ==== 0x006E6A10  sub_6E6A10  this=-  sig=ida-proto ====
int sub_6E6A10()
{
  dword_B0E898 = 0; /*0x6e6a15*/
  dword_B0E890 = 128; /*0x6e6a1f*/
  dword_B0E894 = 128; /*0x6e6a24*/
  return 128; /*0x6e6a29*/
}



// ==== 0x006E6A30  sub_6E6A30  this=-  sig=ida-proto ====
int sub_6E6A30()
{
  dword_B0E820 = 0; /*0x6e6a32*/
  dword_B0E824 = 0; /*0x6e6a37*/
  dword_B0E828 = 0; /*0x6e6a3c*/
  dword_B0E82C = 0; /*0x6e6a41*/
  return 0; /*0x6e6a46*/
}



// ==== 0x006E6A50  sub_6E6A50  this=-  sig=ida-proto ====
int sub_6E6A50()
{
  g_BuildingLoadQueue_Array = 0; /*0x6e6a57*/
  dword_B0E844 = 0; /*0x6e6a5c*/
  dword_B0E848 = 0; /*0x6e6a61*/
  byte_B0E84C = 0; /*0x6e6a66*/
  dword_B0E850 = 0; /*0x6e6a6b*/
  return atexit(sub_6E6A80); /*0x6e6a76*/
}



// ==== 0x006E6A80  sub_6E6A80  this=-  sig=ida-proto ====
void __cdecl sub_6E6A80()
{
  __3_YAXPAX_Z(g_BuildingLoadQueue_Array); /*0x6e6a86*/
  g_BuildingLoadQueue_Array = 0; /*0x6e6a90*/
  dword_B0E844 = 0; /*0x6e6a95*/
  dword_B0E848 = 0; /*0x6e6a9a*/
  byte_B0E84C = 0; /*0x6e6a9f*/
  dword_B0E850 = 0; /*0x6e6aa4*/
}



// ==== 0x006E6AB0  ScriptAction::GetWaypointCoords  this=ScriptAction  sig=csp ====
_BYTE *__thiscall ScriptAction::GetWaypointCoords(ScriptAction *this, _DWORD *a2)
{
  if ( a2 ) /*0x6e6aba*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) == 11 ) /*0x6e6ac6*/
    {
      LOBYTE(this->ScriptAction_field_0x4[0]) = 11; /*0x6e6ac8*/
      *(_DWORD *)this->__pad_0 = (__int16)a2[9] + 1000 * (__int16)HIWORD(a2[9]); /*0x6e6ae7*/
    }
    else
    {
      LOBYTE(this->ScriptAction_field_0x4[0]) = 52; /*0x6e6af2*/
      *(_DWORD *)this->__pad_0 = (*(int (__stdcall **)(_DWORD *))(a2[1] + 16))(a2 + 1); /*0x6e6afc*/
    }
    return this->__pad_0; /*0x6e6ae9*/
  }
  else
  {
    LOBYTE(this->ScriptAction_field_0x4[0]) = 0; /*0x6e6b05*/
    *(_DWORD *)this->__pad_0 = 0; /*0x6e6b09*/
    return this->__pad_0; /*0x6e6b0f*/
  }
}



// ==== 0x006E6B70  ObjectClass::method_6E6B70  this=ObjectClass  sig=csp ====
_BYTE *__thiscall sub_6E6B70(ObjectClass *this, _DWORD *a2)
{
  LOBYTE(this->?) = 11; /*0x6e6b75*/
  this->AbstractClass = (void *)(*a2 / 256 + 1000 * (a2[1] / 256)); /*0x6e6ba4*/
  return this; /*0x6e6ba3*/
}



// ==== 0x006E6E20  BuildingLoadQueue::GetNext  this=BuildingLoadQueue  sig=csp ====
void *__thiscall BuildingLoadQueue::GetNext(BuildingLoadQueue *this)
{
  char BuildingLoadQueue_field_0x04; // al
  void *vtable1; // edx
  int uniqueId; // eax
  void ***v5; // eax
  int v7; // ecx
  __int16 v8[4]; // [esp+4h] [ebp-8h] BYREF

  BuildingLoadQueue_field_0x04 = this->BuildingLoadQueue_field_0x04; /*0x6e6e26*/
  if ( BuildingLoadQueue_field_0x04 == 52 ) /*0x6e6e2b*/
  {
    vtable1 = g_BuildingLoadQueue_Array.?; /*0x6e6e31*/
    if ( g_BuildingLoadQueue_Array.? ) /*0x6e6e39*/
    {
      uniqueId = g_BuildingLoadQueue_Array.?; /*0x6e6e3b*/
      if ( g_BuildingLoadQueue_Array.? && *(_DWORD *)g_BuildingLoadQueue_Array.? == *(_DWORD *)this->__pad_0 ) /*0x6e6e4c*/
        goto LABEL_10; /*0x6e6e4c*/
      if ( g_BuildingLoadQueue_Array.? ) /*0x6e6e50*/
      {
        if ( !LOBYTE(g_BuildingLoadQueue_Array.?) ) /*0x6e6e59*/
        {
          qsort( /*0x6e6e6a*/
            g_BuildingLoadQueue_Array.TechnoTypeClass,
            (size_t)g_BuildingLoadQueue_Array.?,
            8u,
            (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
          vtable1 = g_BuildingLoadQueue_Array.?; /*0x6e6e6f*/
          g_BuildingLoadQueue_Array.? = 0; /*0x6e6e78*/
          LOBYTE(g_BuildingLoadQueue_Array.?) = 1; /*0x6e6e82*/
        }
        *(_DWORD *)v8 = *(_DWORD *)this->__pad_0; /*0x6e6e96*/
        uniqueId = BinaryArraySearch((int)g_BuildingLoadQueue_Array.TechnoTypeClass, (int)vtable1, (int *)v8); /*0x6e6e9a*/
        if ( uniqueId ) /*0x6e6ea1*/
        {
          g_BuildingLoadQueue_Array.? = uniqueId; /*0x6e6ea3*/
LABEL_10:
          v5 = (void ***)(uniqueId + 4); /*0x6e6ea8*/
          return __RTDynamicCast( /*0x6e6ecf*/
                   *v5,
                   0,
                   &AbstractClass `RTTI Type Descriptor',
                   &AbstractClass `RTTI Type Descriptor',
                   0);
        }
      }
    }
    v5 = (void ***)&unk_B78828; /*0x6e6ead*/
    return __RTDynamicCast(*v5, 0, &AbstractClass `RTTI Type Descriptor', &AbstractClass `RTTI Type Descriptor', 0); /*0x6e6ead*/
  }
  if ( BuildingLoadQueue_field_0x04 != 11 ) /*0x6e6ed2*/
    return 0; /*0x6e6f0f*/
  v7 = *(_DWORD *)this->__pad_0; /*0x6e6ed4*/
  v8[0] = v7 % 1000; /*0x6e6ee5*/
  v8[1] = v7 / 1000; /*0x6e6f00*/
  return CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8); /*0x6e6ecb*/
}



// ==== 0x006E6F20  BuildingLoadQueue::Find  this=BuildingLoadQueue  sig=csp ====
void *__thiscall BuildingLoadQueue::Find(BuildingLoadQueue *this)
{
  int vtable1; // ecx
  int uniqueId; // edx
  int v4; // ebx
  _DWORD *vtable0; // edi
  int v6; // esi

  if ( LOBYTE(this->BuildingLoadQueue_field_0x04) != 52 ) /*0x6e6f27*/
    return 0; /*0x6e6fe0*/
  vtable1 = (int)g_BuildingLoadQueue_Array.?; /*0x6e6f2d*/
  if ( !g_BuildingLoadQueue_Array.? ) /*0x6e6f37*/
    return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6f37*/
  uniqueId = g_BuildingLoadQueue_Array.?; /*0x6e6f39*/
  if ( g_BuildingLoadQueue_Array.? && *(_DWORD *)g_BuildingLoadQueue_Array.? == *(_DWORD *)this->__pad_0 ) /*0x6e6f49*/
    return AbstractClass::IsTechnoType(*(AbstractClass **)(uniqueId + 4)); /*0x6e6fdf*/
  if ( !LOBYTE(g_BuildingLoadQueue_Array.?) ) /*0x6e6f56*/
  {
    qsort( /*0x6e6f67*/
      g_BuildingLoadQueue_Array.TechnoTypeClass,
      (size_t)g_BuildingLoadQueue_Array.?,
      8u,
      (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
    vtable1 = (int)g_BuildingLoadQueue_Array.?; /*0x6e6f6c*/
    g_BuildingLoadQueue_Array.? = 0; /*0x6e6f75*/
    LOBYTE(g_BuildingLoadQueue_Array.?) = 1; /*0x6e6f7f*/
  }
  v4 = *(_DWORD *)this->__pad_0; /*0x6e6f86*/
  vtable0 = g_BuildingLoadQueue_Array.TechnoTypeClass; /*0x6e6f88*/
  if ( vtable1 <= 0 ) /*0x6e6f90*/
    return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6f90*/
  while ( 1 ) /*0x6e6f99*/
  {
    v6 = vtable0[2 * (vtable1 / 2)]; /*0x6e6f99*/
    uniqueId = (int)&vtable0[2 * (vtable1 / 2)]; /*0x6e6f9c*/
    if ( v6 <= v4 ) /*0x6e6fa1*/
      break; /*0x6e6fa1*/
    vtable1 /= 2; /*0x6e6fa3*/
LABEL_12:
    if ( vtable1 <= 0 ) /*0x6e6fb5*/
      return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6fb5*/
  }
  if ( v6 != v4 ) /*0x6e6fa7*/
  {
    vtable0 = (_DWORD *)(uniqueId + 8); /*0x6e6fa9*/
    vtable1 += -1 - vtable1 / 2; /*0x6e6fb1*/
    goto LABEL_12; /*0x6e6fb1*/
  }
  if ( uniqueId ) /*0x6e6fc9*/
  {
    g_BuildingLoadQueue_Array.? = (int)&vtable0[2 * (vtable1 / 2)]; /*0x6e6fcb*/
    return AbstractClass::IsTechnoType(*(AbstractClass **)(uniqueId + 4)); /*0x6e6fcb*/
  }
  return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6fc5*/
}



// ==== 0x006E6FF0  BuildingLoadQueue::FindObject  this=BuildingLoadQueue  sig=csp ====
int __thiscall BuildingLoadQueue::FindObject(BuildingLoadQueue *this)
{
  int vtable1; // ecx
  int uniqueId; // edx
  int v4; // ebx
  _DWORD *vtable0; // edi
  int v6; // esi
  void ***v7; // eax

  if ( LOBYTE(this->BuildingLoadQueue_field_0x04) != 52 ) /*0x6e6ff7*/
    return 0; /*0x6e70b8*/
  vtable1 = (int)g_BuildingLoadQueue_Array.?; /*0x6e6ffd*/
  if ( !g_BuildingLoadQueue_Array.? ) /*0x6e7007*/
    goto LABEL_13; /*0x6e7007*/
  uniqueId = g_BuildingLoadQueue_Array.?; /*0x6e7009*/
  if ( g_BuildingLoadQueue_Array.? && *(_DWORD *)g_BuildingLoadQueue_Array.? == *(_DWORD *)this->__pad_0 ) /*0x6e7019*/
  {
LABEL_17:
    v7 = (void ***)(uniqueId + 4); /*0x6e70b3*/
    return (int)__RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &ObjectClass `RTTI Type Descriptor', 0); /*0x6e70b6*/
  }
  if ( !LOBYTE(g_BuildingLoadQueue_Array.?) ) /*0x6e7026*/
  {
    qsort( /*0x6e7037*/
      g_BuildingLoadQueue_Array.TechnoTypeClass,
      (size_t)g_BuildingLoadQueue_Array.?,
      8u,
      (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
    vtable1 = (int)g_BuildingLoadQueue_Array.?; /*0x6e703c*/
    g_BuildingLoadQueue_Array.? = 0; /*0x6e7045*/
    LOBYTE(g_BuildingLoadQueue_Array.?) = 1; /*0x6e704f*/
  }
  v4 = *(_DWORD *)this->__pad_0; /*0x6e7056*/
  vtable0 = g_BuildingLoadQueue_Array.TechnoTypeClass; /*0x6e7058*/
  if ( vtable1 <= 0 ) /*0x6e7060*/
    goto LABEL_13; /*0x6e7060*/
  while ( 1 ) /*0x6e7069*/
  {
    v6 = vtable0[2 * (vtable1 / 2)]; /*0x6e7069*/
    uniqueId = (int)&vtable0[2 * (vtable1 / 2)]; /*0x6e706c*/
    if ( v6 <= v4 ) /*0x6e7071*/
      break; /*0x6e7071*/
    vtable1 /= 2; /*0x6e7073*/
LABEL_12:
    if ( vtable1 <= 0 ) /*0x6e7085*/
      goto LABEL_13; /*0x6e7085*/
  }
  if ( v6 != v4 ) /*0x6e7077*/
  {
    vtable0 = (_DWORD *)(uniqueId + 8); /*0x6e7079*/
    vtable1 += -1 - vtable1 / 2; /*0x6e7081*/
    goto LABEL_12; /*0x6e7081*/
  }
  if ( uniqueId ) /*0x6e70ab*/
  {
    g_BuildingLoadQueue_Array.? = (int)&vtable0[2 * (vtable1 / 2)]; /*0x6e70ad*/
    goto LABEL_17; /*0x6e70ad*/
  }
LABEL_13:
  v7 = (void ***)&unk_B78828; /*0x6e7087*/
  return (int)__RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &ObjectClass `RTTI Type Descriptor', 0); /*0x6e70a7*/
}



// ==== 0x006E7330  ObjectClass::System_Read_6E7330  this=ObjectClass  sig=csp ====
int __thiscall System_Read_6E7330(ObjectClass *this)
{
  int vtable1; // ecx
  int uniqueId; // edx
  void *vtable0; // ebx
  _DWORD *v5; // edi
  void *v6; // esi
  void ***v7; // eax

  if ( LOBYTE(this->?) != 52 ) /*0x6e7337*/
    return 0; /*0x6e73f8*/
  vtable1 = (int)g_BuildingLoadQueue_Array.?; /*0x6e733d*/
  if ( !g_BuildingLoadQueue_Array.? ) /*0x6e7347*/
    goto LABEL_13; /*0x6e7347*/
  uniqueId = g_BuildingLoadQueue_Array.?; /*0x6e7349*/
  if ( g_BuildingLoadQueue_Array.? && *(void **)g_BuildingLoadQueue_Array.? == this->AbstractClass ) /*0x6e7359*/
  {
LABEL_17:
    v7 = (void ***)(uniqueId + 4); /*0x6e73f3*/
    return (int)__RTDynamicCast( /*0x6e73f6*/
                  *v7,
                  0,
                  &AbstractClass `RTTI Type Descriptor',
                  &TechnoTypeClass `RTTI Type Descriptor',
                  0);
  }
  if ( !LOBYTE(g_BuildingLoadQueue_Array.?) ) /*0x6e7366*/
  {
    qsort( /*0x6e7377*/
      g_BuildingLoadQueue_Array.TechnoTypeClass,
      (size_t)g_BuildingLoadQueue_Array.?,
      8u,
      (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
    vtable1 = (int)g_BuildingLoadQueue_Array.?; /*0x6e737c*/
    g_BuildingLoadQueue_Array.? = 0; /*0x6e7385*/
    LOBYTE(g_BuildingLoadQueue_Array.?) = 1; /*0x6e738f*/
  }
  vtable0 = this->AbstractClass; /*0x6e7396*/
  v5 = g_BuildingLoadQueue_Array.TechnoTypeClass; /*0x6e7398*/
  if ( vtable1 <= 0 ) /*0x6e73a0*/
    goto LABEL_13; /*0x6e73a0*/
  while ( 1 ) /*0x6e73a9*/
  {
    v6 = (void *)v5[2 * (vtable1 / 2)]; /*0x6e73a9*/
    uniqueId = (int)&v5[2 * (vtable1 / 2)]; /*0x6e73ac*/
    if ( (int)v6 <= (int)vtable0 ) /*0x6e73b1*/
      break; /*0x6e73b1*/
    vtable1 /= 2; /*0x6e73b3*/
LABEL_12:
    if ( vtable1 <= 0 ) /*0x6e73c5*/
      goto LABEL_13; /*0x6e73c5*/
  }
  if ( v6 != vtable0 ) /*0x6e73b7*/
  {
    v5 = (_DWORD *)(uniqueId + 8); /*0x6e73b9*/
    vtable1 += -1 - vtable1 / 2; /*0x6e73c1*/
    goto LABEL_12; /*0x6e73c1*/
  }
  if ( uniqueId ) /*0x6e73eb*/
  {
    g_BuildingLoadQueue_Array.? = (int)&v5[2 * (vtable1 / 2)]; /*0x6e73ed*/
    goto LABEL_17; /*0x6e73ed*/
  }
LABEL_13:
  v7 = (void ***)&unk_B78828; /*0x6e73c7*/
  return (int)__RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &TechnoTypeClass `RTTI Type Descriptor', 0); /*0x6e73e7*/
}



// ==== 0x006E7A80  BuildingLoadQueue::FindBuilding  this=BuildingLoadQueue  sig=csp ====
int __thiscall BuildingLoadQueue::FindBuilding(BuildingLoadQueue *this)
{
  int vtable1; // ecx
  int uniqueId; // edx
  int v4; // ebx
  _DWORD *vtable0; // edi
  int v6; // esi
  void ***v7; // eax

  if ( LOBYTE(this->BuildingLoadQueue_field_0x04) != 52 ) /*0x6e7a87*/
    return 0; /*0x6e7b48*/
  vtable1 = (int)g_BuildingLoadQueue_Array.?; /*0x6e7a8d*/
  if ( !g_BuildingLoadQueue_Array.? ) /*0x6e7a97*/
    goto LABEL_13; /*0x6e7a97*/
  uniqueId = g_BuildingLoadQueue_Array.?; /*0x6e7a99*/
  if ( g_BuildingLoadQueue_Array.? && *(_DWORD *)g_BuildingLoadQueue_Array.? == *(_DWORD *)this->__pad_0 ) /*0x6e7aa9*/
  {
LABEL_17:
    v7 = (void ***)(uniqueId + 4); /*0x6e7b43*/
    return (int)__RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &BuildingClass `RTTI Type Descriptor', 0); /*0x6e7b46*/
  }
  if ( !LOBYTE(g_BuildingLoadQueue_Array.?) ) /*0x6e7ab6*/
  {
    qsort( /*0x6e7ac7*/
      g_BuildingLoadQueue_Array.TechnoTypeClass,
      (size_t)g_BuildingLoadQueue_Array.?,
      8u,
      (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
    vtable1 = (int)g_BuildingLoadQueue_Array.?; /*0x6e7acc*/
    g_BuildingLoadQueue_Array.? = 0; /*0x6e7ad5*/
    LOBYTE(g_BuildingLoadQueue_Array.?) = 1; /*0x6e7adf*/
  }
  v4 = *(_DWORD *)this->__pad_0; /*0x6e7ae6*/
  vtable0 = g_BuildingLoadQueue_Array.TechnoTypeClass; /*0x6e7ae8*/
  if ( vtable1 <= 0 ) /*0x6e7af0*/
    goto LABEL_13; /*0x6e7af0*/
  while ( 1 ) /*0x6e7af9*/
  {
    v6 = vtable0[2 * (vtable1 / 2)]; /*0x6e7af9*/
    uniqueId = (int)&vtable0[2 * (vtable1 / 2)]; /*0x6e7afc*/
    if ( v6 <= v4 ) /*0x6e7b01*/
      break; /*0x6e7b01*/
    vtable1 /= 2; /*0x6e7b03*/
LABEL_12:
    if ( vtable1 <= 0 ) /*0x6e7b15*/
      goto LABEL_13; /*0x6e7b15*/
  }
  if ( v6 != v4 ) /*0x6e7b07*/
  {
    vtable0 = (_DWORD *)(uniqueId + 8); /*0x6e7b09*/
    vtable1 += -1 - vtable1 / 2; /*0x6e7b11*/
    goto LABEL_12; /*0x6e7b11*/
  }
  if ( uniqueId ) /*0x6e7b3b*/
  {
    g_BuildingLoadQueue_Array.? = (int)&vtable0[2 * (vtable1 / 2)]; /*0x6e7b3d*/
    goto LABEL_17; /*0x6e7b3d*/
  }
LABEL_13:
  v7 = (void ***)&unk_B78828; /*0x6e7b17*/
  return (int)__RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &BuildingClass `RTTI Type Descriptor', 0); /*0x6e7b37*/
}



// ==== 0x006E7C20  ObjectClass::Network_Process_6E7C20  this=ObjectClass  sig=csp ====
void *__thiscall Network_Process_6E7C20(ObjectClass *this)
{
  int vtable0; // ecx
  ObjectClass *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this; /*0x6e7c20*/
  if ( LOBYTE(this->?) != 11 ) /*0x6e7c25*/
    return 0; /*0x6e7c61*/
  vtable0 = (int)this->AbstractClass; /*0x6e7c27*/
  LOWORD(v3) = vtable0 % 1000; /*0x6e7c39*/
  HIWORD(v3) = vtable0 / 1000; /*0x6e7c54*/
  return CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v3); /*0x6e7c60*/
}



// ==== 0x006E7C70  sub_6E7C70  this=-  sig=ida-proto ====
void sub_6E7C70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e7c7c*/
  dbl_B0E8D0 = Math::Sqrt(v0 + v0); /*0x6e7c8e*/
}



// ==== 0x006E7CA0  sub_6E7CA0  this=-  sig=ida-proto ====
void sub_6E7CA0()
{
  dbl_B0E920 = dbl_B0E8D0 / 60.0; /*0x6e7cac*/
}



// ==== 0x006E7CC0  sub_6E7CC0  this=-  sig=ida-proto ====
void sub_6E7CC0()
{
  dbl_B0E908 = 1.0 / dbl_B0E920; /*0x6e7ccc*/
}



// ==== 0x006E7CE0  sub_6E7CE0  this=-  sig=ida-proto ====
void sub_6E7CE0()
{
  dbl_B0E900 = 0.0174532925199433 * 45.0; /*0x6e7cec*/
}



// ==== 0x006E7D00  sub_6E7D00  this=-  sig=ida-proto ====
void sub_6E7D00()
{
  dbl_B0E8D8 = 0.0174532925199433 * 60.0; /*0x6e7d0c*/
}



// ==== 0x006E7D20  sub_6E7D20  this=-  sig=ida-proto ====
void sub_6E7D20()
{
  dbl_B0E8B0 = 0.0174532925199433 * 90.0; /*0x6e7d2c*/
}



// ==== 0x006E7D40  sub_6E7D40  this=-  sig=ida-proto ====
__int64 sub_6E7D40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E8B0 - dbl_B0E8D8); /*0x6e7d52*/
  result = Math::RoundToInt(v0 * dbl_B0E8D0 * 0.5); /*0x6e7d66*/
  dword_B0E928 = result; /*0x6e7d6b*/
  return result; /*0x6e7d70*/
}



// ==== 0x006E7D80  sub_6E7D80  this=-  sig=ida-proto ====
void sub_6E7D80()
{
  dbl_B0E8E0 = Math::ArcTan((double)dword_B0E928 * 0.00390625); /*0x6e7d97*/
}



// ==== 0x006E7DB0  sub_6E7DB0  this=-  sig=ida-proto ====
void sub_6E7DB0()
{
  dbl_B0E8F8 = Math::ArcTan((double)(2 * dword_B0E928) / dbl_B0E8D0); /*0x6e7dd2*/
}



// ==== 0x006E7DE0  sub_6E7DE0  this=-  sig=ida-proto ====
__int64 sub_6E7DE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E928) + 0.5); /*0x6e7dfb*/
  dword_B0E91C = result; /*0x6e7e00*/
  return result; /*0x6e7e06*/
}



// ==== 0x006E7E10  sub_6E7E10  this=-  sig=ida-proto ====
int sub_6E7E10()
{
  word_B0E8C8 = 0; /*0x6e7e12*/
  word_B0E8CA = 0; /*0x6e7e18*/
  return 0; /*0x6e7e1e*/
}



// ==== 0x006E7E20  sub_6E7E20  this=-  sig=ida-proto ====
int sub_6E7E20()
{
  dword_B0E8E8 = 0; /*0x6e7e22*/
  dword_B0E8EC = 0; /*0x6e7e27*/
  dword_B0E8F0 = 0; /*0x6e7e2c*/
  return 0; /*0x6e7e31*/
}



// ==== 0x006E7E40  sub_6E7E40  this=-  sig=ida-proto ====
int sub_6E7E40()
{
  dword_B0E918 = 0; /*0x6e7e45*/
  dword_B0E910 = 128; /*0x6e7e4f*/
  dword_B0E914 = 128; /*0x6e7e54*/
  return 128; /*0x6e7e59*/
}



// ==== 0x006E7E60  sub_6E7E60  this=-  sig=ida-proto ====
int sub_6E7E60()
{
  dword_B0E8B8 = 0; /*0x6e7e62*/
  dword_B0E8BC = 0; /*0x6e7e67*/
  dword_B0E8C0 = 0; /*0x6e7e6c*/
  dword_B0E8C4 = 0; /*0x6e7e71*/
  return 0; /*0x6e7e76*/
}



// ==== 0x006E7E80  TaskForceClass::Construct  this=TaskForceClass  sig=csp ====
_DWORD *__thiscall TaskForceClass::Construct(TaskForceClass *this, char *Source)
{
  int v3; // eax
  ObjectTypeClass **p_TaskForceClass_field_0xA4; // eax
  int v5; // ecx

  AbstractTypeClass::Constructor((int *)this->__pad_0, Source); /*0x6e7e8a*/
  this->TaskForceClass_field_0x98 = (AbstractClass *)-1; /*0x6e7e8f*/
  this->TaskForceClass_field_0x9C[0] = 0; /*0x6e7e99*/
  *(_DWORD *)this->__pad_A0 = 0; /*0x6e7ea3*/
  *(_DWORD *)this->__pad_0 = &TaskForceClass::`vftable'; /*0x6e7ead*/
  this->TaskForceClass_field_0x4 = (int)&TaskForceClass::`vftable'; /*0x6e7eb3*/
  *(_DWORD *)this->__pad_8 = &TaskForceClass::`vftable'; /*0x6e7eba*/
  *(_DWORD *)&this->__pad_8[4] = &TaskForceClass::`vftable'; /*0x6e7ec1*/
  if ( dword_A8E8E0 < dword_A8E8D8 /*0x6e7f05*/
    || (byte_A8E8DD || !dword_A8E8D8)
    && dword_A8E8E4 > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E8D0 + 8))(
         &dword_A8E8D0,
         dword_A8E8D8 + dword_A8E8E4,
         0) )
  {
    v3 = dword_A8E8E0++; /*0x6e7f12*/
    *((_DWORD *)dword_A8E8D4 + v3) = this; /*0x6e7f21*/
  }
  p_TaskForceClass_field_0xA4 = &this->TaskForceClass_field_0xA4; /*0x6e7f28*/
  v5 = 6; /*0x6e7f2a*/
  do /*0x6e7f38*/
  {
    *p_TaskForceClass_field_0xA4 = 0; /*0x6e7f2f*/
    p_TaskForceClass_field_0xA4[1] = 0; /*0x6e7f31*/
    p_TaskForceClass_field_0xA4 += 2; /*0x6e7f34*/
    --v5; /*0x6e7f37*/
  }
  while ( v5 ); /*0x6e7f38*/
  return this->__pad_0; /*0x6e7f3c*/
}



// ==== 0x006E8000  ObjectClass::method_6E8000  this=AbstractClass  sig=csp ====
_DWORD *__thiscall sub_6E8000(ObjectClass *this, int a2)
{
  _DWORD *result; // eax
  int *v3; // ecx
  int v4; // edi
  int v5; // esi
  int v6; // edx

  result = &this->AbstractClass; /*0x6e8004*/
  this->? = &INoticeSink::`vftable'; /*0x6e8008*/
  this->? = &INoticeSource::`vftable'; /*0x6e800f*/
  this->? = *(_DWORD *)(a2 + 16); /*0x6e801c*/
  LOBYTE(this->?) = *(_BYTE *)(a2 + 20); /*0x6e8022*/
  this->? = *(_DWORD *)(a2 + 24); /*0x6e8028*/
  this->? = *(_DWORD *)(a2 + 28); /*0x6e802e*/
  LOBYTE(this->?) = *(_BYTE *)(a2 + 32); /*0x6e8034*/
  this->AbstractClass = &AbstractClass::`vftable'; /*0x6e803f*/
  this->? = &AbstractClass::`vftable'; /*0x6e8045*/
  this->? = &AbstractClass::`vftable'; /*0x6e804c*/
  this->? = &AbstractClass::`vftable'; /*0x6e8053*/
  qmemcpy(&this->occupant, (const void *)(a2 + 36), 0x19u); /*0x6e805a*/
  qmemcpy((char *)this->ambientSoundController + 1, (const void *)(a2 + 61), 0x20u); /*0x6e8068*/
  this->customSound_controller[4] = *(_DWORD *)(a2 + 96); /*0x6e8070*/
  qmemcpy(&this->customSound, (const void *)(a2 + 100), 0x31u); /*0x6e807b*/
  this->AbstractClass = &TaskForceClass::`vftable'; /*0x6e807e*/
  this->? = &TaskForceClass::`vftable'; /*0x6e8084*/
  this->? = &TaskForceClass::`vftable'; /*0x6e808b*/
  this->? = &TaskForceClass::`vftable'; /*0x6e8092*/
  v3 = &this->location[2]; /*0x6e809f*/
  result[38] = *(_DWORD *)(a2 + 152); /*0x6e80a5*/
  result[39] = *(_DWORD *)(a2 + 156); /*0x6e80b1*/
  v4 = result[39]; /*0x6e80bd*/
  result[40] = *(_DWORD *)(a2 + 160); /*0x6e80c3*/
  v5 = 0; /*0x6e80c9*/
  if ( v4 > 0 ) /*0x6e80cd*/
  {
    v6 = a2 - (_DWORD)result; /*0x6e80cf*/
    do /*0x6e80e9*/
    {
      ++v5; /*0x6e80d4*/
      *v3 = *(int *)((char *)v3 + v6); /*0x6e80d5*/
      v3[1] = *(int *)((char *)v3 + v6 + 4); /*0x6e80db*/
      v3 += 2; /*0x6e80e4*/
    }
    while ( v5 < result[39] ); /*0x6e80e9*/
  }
  return result; /*0x6e80eb*/
}



// ==== 0x006E8160  TeamClass::SumMemberCounts  this=TeamClass  sig=csp ====
int __thiscall TeamClass::SumMemberCounts(TeamClass *this)
{
  int v1; // edx
  int result; // eax
  TeamClass *v3; // ecx
  void *vtable0; // esi

  v1 = this->countObjects[5]; /*0x6e8160*/
  result = 0; /*0x6e8166*/
  if ( v1 > 0 ) /*0x6e816a*/
  {
    v3 = (TeamClass *)((char *)this + 164); /*0x6e816d*/
    do /*0x6e817b*/
    {
      vtable0 = v3->AbstractClass; /*0x6e8173*/
      v3 = (TeamClass *)((char *)v3 + 8); /*0x6e8175*/
      result += (int)vtable0; /*0x6e8178*/
      --v1; /*0x6e817a*/
    }
    while ( v1 ); /*0x6e817b*/
  }
  return result; /*0x6e817e*/
}



// ==== 0x006E8220  TaskForceClass::LoadFromINI  this=INIClass  sig=csp ====
int __fastcall TaskForceClass::LoadFromINI(INIClass *a1, int a2)
{
  int result; // eax
  int v5; // esi
  int v6; // ebx
  unsigned __int8 *StringByIndex; // eax
  int v8; // esi
  TaskForceClass *v9; // eax
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // [esp+10h] [ebp-1Ch]
  char Source[24]; // [esp+14h] [ebp-18h] BYREF

  result = INIClass::GetKeyCount(a1->__pad_0, g_INI_Key_TaskForces); /*0x6e8230*/
  v5 = result; /*0x6e8235*/
  v6 = 0; /*0x6e8237*/
  v12 = result; /*0x6e823b*/
  if ( result > 0 ) /*0x6e823f*/
  {
    while ( 1 ) /*0x6e824d*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1->__pad_0, g_INI_Key_TaskForces, v6); /*0x6e824d*/
      result = INIClass::GetString(a1, g_INI_Key_TaskForces, StringByIndex, &g_INI_DefaultBuffer, Source, 24); /*0x6e8266*/
      if ( result > 0 ) /*0x6e826d*/
        break; /*0x6e826d*/
LABEL_13:
      if ( ++v6 >= v5 ) /*0x6e832a*/
        return result; /*0x6e832a*/
    }
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e8293*/
      goto LABEL_11; /*0x6e8293*/
    v8 = 0; /*0x6e82a4*/
    if ( dword_A8E8E0 > 0 ) /*0x6e82a8*/
    {
      while ( _strcmpi((char *)(*((_DWORD *)dword_A8E8D4 + v8) + 36), Source) ) /*0x6e82c6*/
      {
        if ( ++v8 >= dword_A8E8E0 ) /*0x6e82d0*/
          goto LABEL_8; /*0x6e82d0*/
      }
      v10 = (_DWORD *)*((_DWORD *)dword_A8E8D4 + v8); /*0x6e82f9*/
      goto LABEL_12; /*0x6e82fc*/
    }
LABEL_8:
    v9 = (TaskForceClass *)__2_YAPAXI_Z(0xD4u); /*0x6e82d7*/
    if ( v9 ) /*0x6e82e1*/
      v10 = TaskForceClass::Construct(v9, Source); /*0x6e82ef*/
    else
LABEL_11:
      v10 = 0; /*0x6e82fe*/
LABEL_12:
    v11 = sub_412610(Source); /*0x6e8300*/
    SwizzleManagerClass::Here_I_Am((int)&SwizzleManagerClass_Instance, v11, (int)v10); /*0x6e8310*/
    result = (*(int (__thiscall **)(_DWORD *, INIClass *))(*v10 + 100))(v10, a1); /*0x6e831a*/
    v10[40] = a2; /*0x6e831d*/
    v5 = v12; /*0x6e8323*/
    goto LABEL_13; /*0x6e8323*/
  }
  return result; /*0x6e8330*/
}



// ==== 0x006E8340  ScriptTypeClass::ReadINI  this=ScriptTypeClass  sig=csp ====
int __fastcall ScriptTypeClass::ReadINI(INIClass *a1, int a2)
{
  int KeyCount; // ebx
  int i; // edi
  unsigned __int8 *StringByIndex; // eax
  int result; // eax
  int v7; // ebx
  int j; // ebp
  int v9; // edi
  int v10; // [esp-4h] [ebp-38h]
  char Buffer[32]; // [esp+14h] [ebp-20h] BYREF

  KeyCount = INIClass::GetKeyCount(a1->__pad_0, g_INI_Key_TaskForces); /*0x6e8357*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6e835d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1->__pad_0, g_INI_Key_TaskForces, i); /*0x6e8367*/
    INIClass::GetString(a1, g_INI_Key_TaskForces, StringByIndex, &g_INI_DefaultBuffer, Buffer, 32); /*0x6e8380*/
    INIClass::ClearSection((int *)a1->__pad_0, (int)Buffer, 0); /*0x6e838e*/
  }
  INIClass::ClearSection((int *)a1->__pad_0, (int)g_INI_Key_TaskForces, 0); /*0x6e83a1*/
  result = dword_A8E8E0; /*0x6e83a6*/
  v7 = 0; /*0x6e83ab*/
  for ( j = 0; j < dword_A8E8E0; ++j ) /*0x6e83b1*/
  {
    v9 = *((_DWORD *)dword_A8E8D4 + j); /*0x6e83bc*/
    if ( *(_DWORD *)(v9 + 160) == a2 ) /*0x6e83c5*/
    {
      v10 = v7++; /*0x6e83cd*/
      sprintf(Buffer, "%d", v10); /*0x6e83d5*/
      String::Trim(Buffer); /*0x6e83e1*/
      INIClass::SetString(a1->__pad_0, g_INI_Key_TaskForces, Buffer, (char *)(v9 + 36)); /*0x6e83f6*/
      (*(void (__thiscall **)(int, INIClass *))(*(_DWORD *)v9 + 104))(v9, a1); /*0x6e8400*/
    }
    result = dword_A8E8E0; /*0x6e8403*/
  }
  return result; /*0x6e840d*/
}



// ==== 0x006E8420  TaskForceClass::GetUnitCount  this=TaskForceClass  sig=csp ====
char __thiscall TaskForceClass::GetUnitCount(TaskForceClass *this, unsigned __int8 ***a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // eax
  TaskForceClass v8; // [esp+8h] [ebp-A8h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x6e8433*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)this, a2) ) /*0x6e843b*/
    return 0; /*0x6e84f7*/
  v3 = 0; /*0x6e844a*/
  this->TaskForceClass_field_0x9C[0] = 0; /*0x6e844f*/
  do /*0x6e84cb*/
  {
    sprintf(v8.__pad_8, "%d", v3); /*0x6e8460*/
    if ( INIClass::GetString( /*0x6e8486*/
           (INIClass *)a2,
           (unsigned __int8 *)&this->TaskForceClass_field_0x24,
           (unsigned __int8 *)v8.__pad_8,
           &g_INI_DefaultBuffer,
           v8.__pad_28,
           128) > 0 )
    {
      v4 = TaskForceClass::ParseUnitCountAndType(&v8, v8.__pad_28); /*0x6e8491*/
      v5 = this->TaskForceClass_field_0x9C[0]; /*0x6e8496*/
      *(_DWORD *)&this->__pad_A0[8 * v5 + 4] = *v4; /*0x6e849e*/
      *((_DWORD *)this + 2 * v5 + 42) = v4[1]; /*0x6e84a8*/
      v6 = this->TaskForceClass_field_0x9C[0]; /*0x6e84af*/
      if ( *((_DWORD *)this + 2 * v6 + 42) ) /*0x6e84b5*/
        this->TaskForceClass_field_0x9C[0] = v6 + 1; /*0x6e84c1*/
    }
    ++v3; /*0x6e84c7*/
  }
  while ( v3 < 6 ); /*0x6e84cb*/
  this->TaskForceClass_field_0x98 = (AbstractClass *)INIClass::ReadInt_Overwrite( /*0x6e84e2*/
                                                       (bool *)a2,
                                                       (unsigned __int8 *)&this->TaskForceClass_field_0x24,
                                                       (unsigned __int8 *)g_INI_Key_Group,
                                                       (int)this->TaskForceClass_field_0x98);
  return 1; /*0x6e84e9*/
}



// ==== 0x006E8510  TaskForceClass::GetUnitType  this=TaskForceClass  sig=csp ====
char __thiscall TaskForceClass::GetUnitType(TaskForceClass *this, char *a2)
{
  int v3; // esi
  ObjectTypeClass **p_TaskForceClass_field_0xA4; // ebx
  char *v5; // eax
  char Buffer[32]; // [esp+8h] [ebp-20h] BYREF

  if ( !AbstractTypeClass::WriteINI((AbstractTypeClass *)this, a2) ) /*0x6e851c*/
    return 0; /*0x6e85a5*/
  v3 = 0; /*0x6e8527*/
  p_TaskForceClass_field_0xA4 = &this->TaskForceClass_field_0xA4; /*0x6e8529*/
  do /*0x6e857d*/
  {
    sprintf(Buffer, "%d", v3); /*0x6e853a*/
    if ( v3 >= this->TaskForceClass_field_0x9C[0] ) /*0x6e854a*/
    {
      INIClass::ClearSection((int *)a2, (int)&this->TaskForceClass_field_0x24, (unsigned __int8 *)Buffer); /*0x6e8571*/
    }
    else
    {
      v5 = TaskForceClass::Check((TaskForceClass *)p_TaskForceClass_field_0xA4); /*0x6e854e*/
      INIClass::SetString(a2, (unsigned __int8 *)&this->TaskForceClass_field_0x24, Buffer, v5); /*0x6e855f*/
    }
    ++v3; /*0x6e8576*/
    p_TaskForceClass_field_0xA4 += 2; /*0x6e8577*/
  }
  while ( v3 < 6 ); /*0x6e857d*/
  INIClass::SetInt( /*0x6e8593*/
    a2,
    (unsigned __int8 *)&this->TaskForceClass_field_0x24,
    g_INI_Key_Group,
    (int)this->TaskForceClass_field_0x98,
    0);
  return 1; /*0x6e859a*/
}



// ==== 0x006E85B0  ObjectClass::method_6E85B0  this=ObjectClass  sig=csp ====
char __thiscall sub_6E85B0(ObjectClass *this)
{
  int v2; // edi
  void **i; // esi

  v2 = 0; /*0x6e85bb*/
  if ( this->location[0] <= 0 ) /*0x6e85bf*/
    return 1; /*0x6e85e1*/
  for ( i = &this->lineTrailer; (*(int (__thiscall **)(void *))(*(_DWORD *)*i + 44))(*i) == 16; i += 2 ) /*0x6e85c1*/
  {
    if ( ++v2 >= this->location[0] ) /*0x6e85df*/
      return 1; /*0x6e85df*/
  }
  return 0; /*0x6e85e1*/
}



// ==== 0x006E85F0  TeamTypeClass::FindOrCreateTaskForce  this=AbstractTypeClass  sig=csp ====
_DWORD *__thiscall TeamTypeClass::FindOrCreateTaskForce(char *Source)
{
  int v2; // esi
  TaskForceClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e860c*/
    return 0; /*0x6e866f*/
  v2 = 0; /*0x6e861d*/
  if ( dword_A8E8E0 <= 0 ) /*0x6e8621*/
  {
LABEL_6:
    v3 = (TaskForceClass *)__2_YAPAXI_Z(0xD4u); /*0x6e8646*/
    if ( v3 ) /*0x6e8655*/
      return TaskForceClass::Construct(v3, Source); /*0x6e8661*/
    return 0; /*0x6e8655*/
  }
  while ( _strcmpi((char *)(*((_DWORD *)dword_A8E8D4 + v2) + 36), Source) ) /*0x6e863a*/
  {
    if ( ++v2 >= dword_A8E8E0 ) /*0x6e8644*/
      goto LABEL_6; /*0x6e8644*/
  }
  return (_DWORD *)*((_DWORD *)dword_A8E8D4 + v2); /*0x6e865f*/
}



// ==== 0x006E8680  TaskForceClass::SaveTaskForce  this=TaskForceClass  sig=csp ====
int __stdcall TaskForceClass::SaveTaskForce(TaskForceClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x6e868f*/
  if ( result >= 0 ) /*0x6e8696*/
    return 0; /*0x6e8698*/
  return result; /*0x6e869a*/
}



// ==== 0x006E86A0  TaskForceClass::LoadTaskForce  this=TaskForceClass  sig=csp ====
int __stdcall TaskForceClass::LoadTaskForce(TaskForceClass *this, int a2)
{
  int result; // eax
  int *v3; // esi
  int v4; // edi

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6e86ab*/
  if ( result >= 0 ) /*0x6e86b2*/
  {
    if ( this ) /*0x6e86b6*/
    {
      AbstractTypeClass::Init((int)this, (int)&a2); /*0x6e86bf*/
      *(_DWORD *)this->__pad_0 = &TaskForceClass::`vftable'; /*0x6e86c4*/
      this->TaskForceClass_field_0x4 = (int)&TaskForceClass::`vftable'; /*0x6e86ca*/
      *(_DWORD *)this->__pad_8 = &TaskForceClass::`vftable'; /*0x6e86d1*/
      *(_DWORD *)&this->__pad_8[4] = &TaskForceClass::`vftable'; /*0x6e86d8*/
    }
    v3 = (int *)(this + 1); /*0x6e86e0*/
    v4 = 6; /*0x6e86e6*/
    do /*0x6e86fa*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v3); /*0x6e86f1*/
      v3 += 2; /*0x6e86f6*/
      --v4; /*0x6e86f9*/
    }
    while ( v4 ); /*0x6e86fa*/
    return 0; /*0x6e86fc*/
  }
  return result; /*0x6e86ff*/
}



// ==== 0x006E8710  TaskForceClass::ddtor  this=TaskForceClass  sig=csp ====
int __stdcall TaskForceClass::ddtor(TaskForceClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6e8716*/
    return -2147467261; /*0x6e8718*/
  *a2 = 1641952286; /*0x6e8726*/
  a2[1] = 298977140; /*0x6e872e*/
  a2[2] = 1610655148; /*0x6e8737*/
  a2[3] = unk_7E977C; /*0x6e8740*/
  return 0; /*0x6e871d*/
}



// ==== 0x006E8750  TaskForceClass::LoadTask  this=TaskForceClass  sig=csp ====
int __thiscall TaskForceClass::LoadTask(TaskForceClass *this, int *a2)
{
  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x6e8759*/
  Power::TimerProcess((int)this->TaskForceClass_field_0x98); /*0x6e8767*/
  return Power::TimerProcess(this->TaskForceClass_field_0x9C[0]); /*0x6e877a*/
}



// ==== 0x006E8780  HouseClass::GetMaxBuildLevel  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GetMaxBuildLevel(HouseClass *this)
{
  int secretLabsCount; // edx
  int result; // eax
  int *p_psychicDetectionCount; // esi
  int v4; // ecx

  secretLabsCount = this->secretLabsCount; /*0x6e8780*/
  result = 0; /*0x6e8786*/
  if ( secretLabsCount > 0 ) /*0x6e878a*/
  {
    p_psychicDetectionCount = &this->psychicDetectionCount; /*0x6e8794*/
    do /*0x6e87bc*/
    {
      v4 = *(_DWORD *)(*p_psychicDetectionCount + 1588); /*0x6e879c*/
      if ( v4 <= result ) /*0x6e87a4*/
      {
        if ( v4 == -1 ) /*0x6e87ad*/
        {
          if ( *(_DWORD *)&dword_A8B238 ) /*0x6e87b1*/
            result = 11; /*0x6e87b3*/
        }
      }
      else
      {
        result = *(_DWORD *)(*p_psychicDetectionCount + 1588); /*0x6e87a6*/
      }
      p_psychicDetectionCount += 2; /*0x6e87b8*/
      --secretLabsCount; /*0x6e87bb*/
    }
    while ( secretLabsCount ); /*0x6e87bc*/
  }
  return result; /*0x6e87c0*/
}



// ==== 0x006E87D0  TaskForceClass::StubReturn33  this=TaskForceClass  sig=csp ====
int TaskForceClass::StubReturn33(TaskForceClass *this)
{
  return 33; /*0x6e87d5*/
}



// ==== 0x006E87E0  TaskForceClass::StubReturn212  this=TaskForceClass  sig=csp ====
int TaskForceClass::StubReturn212(TaskForceClass *this)
{
  return 212; /*0x6e87e5*/
}



// ==== 0x006E87F0  TaskForceClass::ExecuteAction  this=TaskForceClass  sig=csp ====
void **__thiscall TaskForceClass::ExecuteAction(TaskForceClass *this, char a2)
{
  int v3; // eax
  TaskForceClass *v5; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->__pad_0 = &TaskForceClass::`vftable'; /*0x6e87f6*/
  this->TaskForceClass_field_0x4 = (int)&TaskForceClass::`vftable'; /*0x6e87fc*/
  *(_DWORD *)this->__pad_8 = &TaskForceClass::`vftable'; /*0x6e8803*/
  *(_DWORD *)&this->__pad_8[4] = &TaskForceClass::`vftable'; /*0x6e880a*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x6e8811*/
  v5 = this; /*0x6e8826*/
  v3 = (*(int (__thiscall **)(_DWORD *, TaskForceClass **))(dword_A8E8D0 + 16))(&dword_A8E8D0, &v5); /*0x6e882a*/
  if ( v3 != -1 && v3 < dword_A8E8E0 && v3 < --dword_A8E8E0 ) /*0x6e8845*/
  {
    do /*0x6e885d*/
    {
      ++v3; /*0x6e884d*/
      *((_DWORD *)dword_A8E8D4 + v3 - 1) = *((_DWORD *)dword_A8E8D4 + v3); /*0x6e8851*/
    }
    while ( v3 < dword_A8E8E0 ); /*0x6e885d*/
  }
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x6e8861*/
  if ( (a2 & 1) != 0 ) /*0x6e886b*/
    __3_YAXPAX_Z(this); /*0x6e886e*/
  return (void **)this; /*0x6e8878*/
}



// ==== 0x006E8880  sub_6E8880  this=-  sig=ida-proto ====
void sub_6E8880()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e888c*/
  dbl_B0E950 = Math::Sqrt(v0 + v0); /*0x6e889e*/
}



// ==== 0x006E88B0  sub_6E88B0  this=-  sig=ida-proto ====
void sub_6E88B0()
{
  dbl_B0E9A0 = dbl_B0E950 / 60.0; /*0x6e88bc*/
}



// ==== 0x006E88D0  sub_6E88D0  this=-  sig=ida-proto ====
void sub_6E88D0()
{
  dbl_B0E988 = 1.0 / dbl_B0E9A0; /*0x6e88dc*/
}



// ==== 0x006E88F0  sub_6E88F0  this=-  sig=ida-proto ====
void sub_6E88F0()
{
  dbl_B0E980 = 0.0174532925199433 * 45.0; /*0x6e88fc*/
}



// ==== 0x006E8910  sub_6E8910  this=-  sig=ida-proto ====
void sub_6E8910()
{
  dbl_B0E958 = 0.0174532925199433 * 60.0; /*0x6e891c*/
}



// ==== 0x006E8930  sub_6E8930  this=-  sig=ida-proto ====
void sub_6E8930()
{
  dbl_B0E930 = 0.0174532925199433 * 90.0; /*0x6e893c*/
}



// ==== 0x006E8950  sub_6E8950  this=-  sig=ida-proto ====
__int64 sub_6E8950()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E930 - dbl_B0E958); /*0x6e8962*/
  result = Math::RoundToInt(v0 * dbl_B0E950 * 0.5); /*0x6e8976*/
  dword_B0E9A8 = result; /*0x6e897b*/
  return result; /*0x6e8980*/
}



// ==== 0x006E8990  sub_6E8990  this=-  sig=ida-proto ====
void sub_6E8990()
{
  dbl_B0E960 = Math::ArcTan((double)dword_B0E9A8 * 0.00390625); /*0x6e89a7*/
}



// ==== 0x006E89C0  sub_6E89C0  this=-  sig=ida-proto ====
void sub_6E89C0()
{
  dbl_B0E978 = Math::ArcTan((double)(2 * dword_B0E9A8) / dbl_B0E950); /*0x6e89e2*/
}



// ==== 0x006E89F0  sub_6E89F0  this=-  sig=ida-proto ====
__int64 sub_6E89F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E9A8) + 0.5); /*0x6e8a0b*/
  dword_B0E99C = result; /*0x6e8a10*/
  return result; /*0x6e8a16*/
}



// ==== 0x006E8A20  sub_6E8A20  this=-  sig=ida-proto ====
int sub_6E8A20()
{
  dword_B0E948 = 0; /*0x6e8a22*/
  return 0; /*0x6e8a2e*/
}



// ==== 0x006E8A30  sub_6E8A30  this=-  sig=ida-proto ====
int sub_6E8A30()
{
  dword_B0E968 = 0; /*0x6e8a32*/
  dword_B0E96C = 0; /*0x6e8a37*/
  dword_B0E970 = 0; /*0x6e8a3c*/
  return 0; /*0x6e8a41*/
}



// ==== 0x006E8A50  sub_6E8A50  this=-  sig=ida-proto ====
int sub_6E8A50()
{
  dword_B0E998 = 0; /*0x6e8a55*/
  dword_B0E990 = 128; /*0x6e8a5f*/
  dword_B0E994 = 128; /*0x6e8a64*/
  return 128; /*0x6e8a69*/
}



// ==== 0x006E8A70  sub_6E8A70  this=-  sig=ida-proto ====
int sub_6E8A70()
{
  dword_B0E938 = 0; /*0x6e8a72*/
  dword_B0E93C = 0; /*0x6e8a77*/
  dword_B0E940 = 0; /*0x6e8a7c*/
  dword_B0E944 = 0; /*0x6e8a81*/
  return 0; /*0x6e8a86*/
}



// ==== 0x006E8A90  TeamClass::Construct  this=TeamClass  sig=csp ====
int __thiscall MissionClass_Constructor(int this, int a2, int a3, int a4)
{
  int v5; // ecx
  int v6; // edx
  wchar_t *v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  __int16 *WaypointCoords; // eax
  int v16; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6e8a94*/
  v5 = a3; /*0x6e8a9d*/
  v6 = a4; /*0x6e8aa1*/
  *(_DWORD *)(this + 36) = a2; /*0x6e8aa7*/
  *(_DWORD *)(this + 40) = 0; /*0x6e8aaa*/
  *(_DWORD *)(this + 44) = v5; /*0x6e8aad*/
  *(_DWORD *)(this + 48) = 0; /*0x6e8ab0*/
  *(_DWORD *)(this + 52) = 0; /*0x6e8ab3*/
  *(_DWORD *)(this + 56) = 0; /*0x6e8ab6*/
  *(_DWORD *)(this + 60) = 0; /*0x6e8ab9*/
  *(_DWORD *)(this + 64) = 0; /*0x6e8abc*/
  *(_DWORD *)(this + 68) = v6; /*0x6e8abf*/
  *(_DWORD *)(this + 72) = 0; /*0x6e8ac2*/
  *(_DWORD *)(this + 76) = 0; /*0x6e8ac5*/
  *(_DWORD *)(this + 80) = dword_A8ED84; /*0x6e8acd*/
  *(_DWORD *)(this + 84) = 0; /*0x6e8ad0*/
  v7 = dword_A8ED84; /*0x6e8ad3*/
  *(_DWORD *)(this + 96) = 0; /*0x6e8ad9*/
  *(_DWORD *)(this + 88) = v7; /*0x6e8adc*/
  *(_DWORD *)(this + 100) = dword_A8ED84; /*0x6e8ae7*/
  *(_DWORD *)(this + 108) = 0; /*0x6e8aea*/
  *(_DWORD *)(this + 112) = 0; /*0x6e8aed*/
  *(_BYTE *)(this + 116) = 0; /*0x6e8af0*/
  *(_BYTE *)(this + 117) = 0; /*0x6e8af3*/
  *(_BYTE *)(this + 118) = 0; /*0x6e8af6*/
  *(_BYTE *)(this + 119) = 0; /*0x6e8af9*/
  *(_BYTE *)(this + 120) = 0; /*0x6e8afc*/
  *(_BYTE *)(this + 121) = 0; /*0x6e8aff*/
  *(_BYTE *)(this + 122) = 1; /*0x6e8b02*/
  *(_BYTE *)(this + 123) = 0; /*0x6e8b05*/
  *(_BYTE *)(this + 124) = 0; /*0x6e8b08*/
  *(_BYTE *)(this + 125) = 1; /*0x6e8b0b*/
  *(_BYTE *)(this + 126) = 0; /*0x6e8b0e*/
  *(_BYTE *)(this + 127) = 0; /*0x6e8b11*/
  *(_BYTE *)(this + 128) = 1; /*0x6e8b14*/
  *(_BYTE *)(this + 129) = 0; /*0x6e8b1a*/
  *(_BYTE *)(this + 130) = 0; /*0x6e8b20*/
  *(_BYTE *)(this + 131) = 0; /*0x6e8b26*/
  *(_BYTE *)(this + 132) = 0; /*0x6e8b2c*/
  *(_DWORD *)this = &TeamClass::`vftable'; /*0x6e8b32*/
  *(_DWORD *)(this + 4) = &TeamClass::`vftable'; /*0x6e8b38*/
  *(_DWORD *)(this + 8) = &TeamClass::`vftable'; /*0x6e8b3f*/
  *(_DWORD *)(this + 12) = &TeamClass::`vftable'; /*0x6e8b46*/
  if ( dword_8B40F8 < dword_8B40F0 /*0x6e8b7e*/
    || (byte_8B40F5 || !dword_8B40F0)
    && dword_8B40FC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B40E8 + 8))(
         &dword_8B40E8,
         dword_8B40F0 + dword_8B40FC,
         0) )
  {
    v8 = dword_8B40F8++; /*0x6e8b8b*/
    *((_DWORD *)dword_8B40EC + v8) = this; /*0x6e8b9a*/
  }
  if ( dword_B0F680 < dword_B0F678 /*0x6e8bd1*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F678 + dword_B0F684,
         0) )
  {
    v9 = dword_B0F680++; /*0x6e8bde*/
    *((_DWORD *)dword_B0F674 + v9) = this; /*0x6e8bed*/
  }
  if ( dword_B0F628 < dword_B0F620 /*0x6e8c24*/
    || (byte_B0F625 || !dword_B0F620)
    && dword_B0F62C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F618 + 8))(
         &dword_B0F618,
         dword_B0F620 + dword_B0F62C,
         0) )
  {
    v10 = dword_B0F628++; /*0x6e8c31*/
    *((_DWORD *)dword_B0F61C + v10) = this; /*0x6e8c40*/
  }
  if ( dword_B0F730 < dword_B0F728 /*0x6e8c77*/
    || (byte_B0F72D || !dword_B0F728)
    && dword_B0F734 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F720 + 8))(
         &dword_B0F720,
         dword_B0F728 + dword_B0F734,
         0) )
  {
    v11 = dword_B0F730++; /*0x6e8c84*/
    *((_DWORD *)dword_B0F724 + v11) = this; /*0x6e8c93*/
  }
  if ( dword_B0F700 < dword_B0F6F8 /*0x6e8cca*/
    || (byte_B0F6FD || !dword_B0F6F8)
    && dword_B0F704 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F6F0 + 8))(
         &dword_B0F6F0,
         dword_B0F6F8 + dword_B0F704,
         0) )
  {
    v12 = dword_B0F700++; /*0x6e8cd7*/
    *((_DWORD *)dword_B0F6F4 + v12) = this; /*0x6e8ce6*/
  }
  memset((void *)(this + 136), 0, 0x18u); /*0x6e8cf7*/
  v13 = *(_DWORD *)(this + 36); /*0x6e8cf9*/
  if ( v13 ) /*0x6e8cff*/
  {
    v14 = *(_DWORD *)(this + 44); /*0x6e8d05*/
    if ( v14 && *(_BYTE *)(v13 + 246) ) /*0x6e8d0c*/
      ++*(_DWORD *)(v14 + 22124); /*0x6e8d14*/
    if ( *TechnoClass::GetWaypointCoords(*(_DWORD **)(this + 36), &a2) != dword_B0E948 ) /*0x6e8d31*/
    {
      WaypointCoords = (__int16 *)TechnoClass::GetWaypointCoords(*(_DWORD **)(this + 36), &a2); /*0x6e8d48*/
      *(_DWORD *)(this + 52) = CellCoord::To_CellObj(&dword_87F7E8, WaypointCoords); /*0x6e8d58*/
    }
    ++*(_DWORD *)(*(_DWORD *)(this + 36) + 220); /*0x6e8d65*/
    if ( *(_DWORD *)(*(_DWORD *)(this + 36) + 208) ) /*0x6e8d6e*/
    {
      if ( __2_YAPAXI_Z(0x38u) ) /*0x6e8d78*/
        v16 = TeknoClass::GetType(*(_DWORD *)(*(_DWORD *)(this + 36) + 208)); /*0x6e8d90*/
      else
        v16 = 0; /*0x6e8d97*/
      *(_DWORD *)(this + 112) = v16; /*0x6e8d99*/
    }
    if ( __2_YAPAXI_Z(0x30u) ) /*0x6e8d9e*/
    {
      *(_DWORD *)(this + 40) = ScriptClass::Construct(*(_DWORD *)(*(_DWORD *)(this + 36) + 224)); /*0x6e8dbb*/
      return this; /*0x6e8dc2*/
    }
    *(_DWORD *)(this + 40) = 0; /*0x6e8dc7*/
  }
  return this; /*0x6e8dc0*/
}



// ==== 0x006E8DE0  TeamClass::Destructor  this=TeamClass  sig=csp ====
int __thiscall TeamClass::Destructor(TeamClass *this)
{
  int v2; // edi
  int v3; // ecx
  HouseClass *owner; // ecx
  TeamTypeClass *buildingType; // eax
  FootClass *i; // eax
  TagClass *tag; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  TeamTypeClass *v13; // ecx
  TeamClass *v15; // [esp+10h] [ebp-4h] BYREF

  v2 = 0; /*0x6e8de5*/
  this->AbstractClass = &TeamClass::`vftable'; /*0x6e8de7*/
  this->? = &TeamClass::`vftable'; /*0x6e8ded*/
  this->? = &TeamClass::`vftable'; /*0x6e8df4*/
  for ( this->? = &TeamClass::`vftable'; v2 < dword_A8B210; ++v2 ) /*0x6e8e09*/
  {
    v3 = *((_DWORD *)dword_A8B204 + v2); /*0x6e8e10*/
    if ( *(TeamTypeClass **)(v3 + 220) == this->buildingType ) /*0x6e8e1e*/
    {
      if ( this->achievedGreatSuccess ) /*0x6e8e20*/
        AITriggerTypeClass::RegisterSuccess((AITriggerTypeClass *)v3); /*0x6e8e2a*/
      else
        AITriggerTypeClass::RegisterFailure((AITriggerTypeClass *)v3); /*0x6e8e31*/
    }
  }
  owner = this->owner; /*0x6e8e40*/
  if ( owner ) /*0x6e8e45*/
  {
    buildingType = this->buildingType; /*0x6e8e47*/
    if ( buildingType ) /*0x6e8e4c*/
    {
      if ( BYTE2(buildingType[2].?) ) /*0x6e8e4e*/
        --owner->dropshipData[5]; /*0x6e8e58*/
    }
  }
  if ( byte_A8E9A0 && this->buildingType ) /*0x6e8e67*/
  {
    for ( i = this->firstUnit; i; i = this->firstUnit ) /*0x6e8e73*/
      TeamClass::LiberateMember_Start((int *)this, (int)i, 0xFFFFFFFF, 0); /*0x6e8e7c*/
    --this->buildingType[1].TeamTypeClass_field_68; /*0x6e8e92*/
    tag = this->tag; /*0x6e8e98*/
    if ( tag ) /*0x6e8e9d*/
    {
      if ( !tag->instanceCount ) /*0x6e8e9f*/
        TagClass::Destroy(tag); /*0x6e8ea6*/
      this->tag = 0; /*0x6e8eab*/
    }
  }
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x6e8eb6*/
  v15 = this; /*0x6e8ecb*/
  v8 = (*(int (__thiscall **)(int *, TeamClass **))(g_BuildingLoadQueue_Array.unknown__ + 16))( /*0x6e8ecf*/
         &g_BuildingLoadQueue_Array.unknown__,
         &v15);
  if ( v8 != -1 && v8 < g_BuildingLoadQueue_Array.TargetCoordOffset[1] ) /*0x6e8edf*/
  {
    --g_BuildingLoadQueue_Array.TargetCoordOffset[1]; /*0x6e8ee4*/
    for ( ; /*0x6e8eea*/
          v8 < g_BuildingLoadQueue_Array.TargetCoordOffset[1];
          *(_DWORD *)(g_BuildingLoadQueue_Array.Adjacent + 4 * v8 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.Adjacent
                                                                                   + 4 * v8) )
    {
      ++v8; /*0x6e8ef2*/
    }
  }
  v15 = this; /*0x6e8f14*/
  v9 = (*(int (__thiscall **)(int *, TeamClass **))(g_BuildingLoadQueue_Array.PowerBonus + 16))( /*0x6e8f18*/
         &g_BuildingLoadQueue_Array.PowerBonus,
         &v15);
  if ( v9 != -1 && v9 < g_BuildingLoadQueue_Array.Foundation[0] ) /*0x6e8f28*/
  {
    --g_BuildingLoadQueue_Array.Foundation[0]; /*0x6e8f2d*/
    for ( ; /*0x6e8f33*/
          v9 < g_BuildingLoadQueue_Array.Foundation[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v9 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain
                                                                                     + 4 * v9) )
    {
      ++v9; /*0x6e8f3b*/
    }
  }
  v15 = this; /*0x6e8f5d*/
  v10 = (*(int (__thiscall **)(int *, TeamClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6e8f61*/
          &g_BuildingLoadQueue_Array.LightVisibility,
          &v15);
  if ( v10 != -1 && v10 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x6e8f71*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x6e8f76*/
    for ( ; /*0x6e8f7c*/
          v10 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v10 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                          + 4 * v10) )
    {
      ++v10; /*0x6e8f84*/
    }
  }
  v15 = this; /*0x6e8fa6*/
  v11 = (*(int (__thiscall **)(char *, TeamClass **))(*(_DWORD *)&g_BuildingLoadQueue_Array.?[16] + 16))( /*0x6e8faa*/
          &g_BuildingLoadQueue_Array.?[16],
          &v15);
  if ( v11 != -1 && v11 < *(int *)&g_BuildingLoadQueue_Array.?[32] ) /*0x6e8fba*/
  {
    --*(_DWORD *)&g_BuildingLoadQueue_Array.?[32]; /*0x6e8fbf*/
    for ( ; /*0x6e8fc5*/
          v11 < *(int *)&g_BuildingLoadQueue_Array.?[32];
          *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.?[20] + 4 * v11 - 4) = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.?[20]
                                                                                             + 4 * v11) )
    {
      ++v11; /*0x6e8fcd*/
    }
  }
  v15 = this; /*0x6e8fef*/
  v12 = ((int (__thiscall *)(ParticleSystemClass **, TeamClass **))FootClass_Array.?->?)(&FootClass_Array.?, &v15); /*0x6e8ff3*/
  if ( v12 != -1 && v12 < (int)FootClass_Array.? ) /*0x6e9003*/
  {
    --FootClass_Array.?; /*0x6e9008*/
    for ( ; /*0x6e900e*/
          v12 < (int)FootClass_Array.?;
          *((_DWORD *)FootClass_Array.? + v12 - 1) = *((_DWORD *)&FootClass_Array.?->ObjectClass + v12) )
    {
      ++v12; /*0x6e9016*/
    }
  }
  if ( this->unknown74 ) /*0x6e9028*/
  {
    v13 = this->buildingType; /*0x6e902f*/
    if ( v13 ) /*0x6e9034*/
      (*((void (__thiscall **)(TeamTypeClass *, int))v13->AbstractClass + 8))(v13, 1); /*0x6e903a*/
  }
  return AbstractClass::DTOR((AbstractClass *)this); /*0x6e9044*/
}



// ==== 0x006E9050  TeamClass::SelectMember  this=AbstractClass  sig=csp ====
char __thiscall TeamClass_SelectMember(int this, int a2)
{
  int v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // edx
  bool v8; // bl
  int v9; // eax
  _DWORD *v10; // esi
  bool v12; // [esp+10h] [ebp+4h]

  v4 = *(_DWORD *)(this + 60); /*0x6e9059*/
  if ( a2 != v4 ) /*0x6e905e*/
  {
    v5 = *(_DWORD **)(this + 84); /*0x6e9060*/
    if ( v4 ) /*0x6e9065*/
    {
      for ( ; v5; v5 = (_DWORD *)v5[374] ) /*0x6e9069*/
      {
        v6 = *(_DWORD *)(this + 60); /*0x6e906c*/
        v7 = v5[361]; /*0x6e9075*/
        v12 = v5[173] == v6; /*0x6e9082*/
        v8 = v7 == v6; /*0x6e9086*/
        if ( v5[173] == v6 || v7 == v6 ) /*0x6e908f*/
        {
          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v5 + 488))(v5, 5, 0); /*0x6e9099*/
          if ( v8 ) /*0x6e90a1*/
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v5 + 1152))(v5, 0, 1); /*0x6e90ab*/
          if ( v12 ) /*0x6e90b7*/
            (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 968))(v5, 0); /*0x6e90bf*/
        }
      }
    }
  }
  v9 = *(_DWORD *)(this + 64); /*0x6e90d0*/
  if ( v9 == *(_DWORD *)(this + 60) || !v9 ) /*0x6e90dc*/
    *(_DWORD *)(this + 64) = a2; /*0x6e90de*/
  *(_DWORD *)(this + 60) = a2; /*0x6e90e3*/
  if ( a2 ) /*0x6e90e6*/
  {
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2); /*0x6e90ed*/
    if ( v9 == 11 ) /*0x6e90f3*/
    {
      LOBYTE(v9) = Type::CheckAmbiguity(&dword_87F7E8, a2, 1); /*0x6e90fd*/
      if ( (_BYTE)v9 ) /*0x6e9104*/
      {
        *(_BYTE *)(this + 130) = 0; /*0x6e9132*/
      }
      else
      {
        v10 = *(_DWORD **)(this + 84); /*0x6e9106*/
        for ( *(_BYTE *)(this + 130) = 1; v10; v10 = (_DWORD *)v10[374] ) /*0x6e9112*/
          LOBYTE(v9) = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v10 + 1152))(v10, 0, 1); /*0x6e911c*/
      }
    }
  }
  return v9; /*0x6e912c*/
}



// ==== 0x006E9140  TeamClass::Update  this=TeamClass  sig=csp ====
void __usercall TeamClass::Update(TeamClass *this, _DWORD *a2@<ebp>, int j@<edi>)
{
  TeamClass *v3; // ecx
  int v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int i; // edi
  char v11; // cl
  char v12; // al
  char v13; // bl
  TeamClass *v14; // ecx
  int *Entry; // eax
  signed int v16; // ecx
  _DWORD *n; // edi
  int v18; // eax
  _DWORD *ii; // edi
  int v20; // eax
  _DWORD *v21; // edi
  _DWORD *v22; // ebp
  int v23; // eax
  void *MapSpawnCell; // eax
  _DWORD *m; // edi
  int *v26; // edi
  int *v27; // ebp
  int v28; // ebx
  int Owner; // eax
  int v30; // eax
  int *v31; // ebp
  int k; // edi
  int v33; // ecx
  ScriptClass *v34; // eax
  AbstractClass *v35; // eax
  _DWORD *v36; // edi
  _DWORD *v37; // edi
  _DWORD *v38; // edi
  _DWORD *v39; // eax
  int *v40; // edi
  char v41; // cl
  int v42; // edx
  _DWORD *v43; // eax
  _DWORD *v44; // edi
  _DWORD *v45; // edi
  int v46; // eax
  _DWORD *v47; // edi
  char v4... [26375 chars total]



// ==== 0x006EA080  ObjectClass::method_6EA080  this=ObjectClass  sig=csp ====
char __thiscall sub_6EA080(ObjectClass *this)
{
  int v2; // eax
  char result; // al

  v2 = this->customSound_controller[1]; /*0x6ea086*/
  HIBYTE(this->visibilityFlags) = 1; /*0x6ea089*/
  LOBYTE(this->spawnStatus) = 1; /*0x6ea08e*/
  for ( BYTE2(this->spawnStatus) = 0; v2; v2 = *(_DWORD *)(v2 + 1496) ) /*0x6ea095*/
  {
    if ( HIBYTE(this->spawnStatus) || this->alignmentPadding75[2] ) /*0x6ea09e*/
      *(_BYTE *)(v2 + 1673) = 1; /*0x6ea0a5*/
  }
  result = SetLandTypeMap((ObjectClass *)this->owningHouseIndex); /*0x6ea0b8*/
  this->needsRedraw = 1; /*0x6ea0bd*/
  return result; /*0x6ea0c3*/
}



// ==== 0x006EA0D0  ObjectClass::SelectTeamProductionBuilding  this=ObjectClass  sig=csp ====
void __thiscall SelectTeamProductionBuilding(ObjectClass *this)
{
  double v1; // st7
  ObjectClass *owningHouseIndex; // ecx
  TagClass **p_attachedTag; // esi
  BombClass *attachedBomb; // edi
  _DWORD *v6; // eax
  int fallRate; // ecx
  int v8; // eax
  int v9; // esi
  _DWORD *v10; // eax
  TagClass *attachedTag; // ecx
  _DWORD *v12; // edi
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // edi
  _DWORD *v18; // eax
  int v19; // esi
  int v20; // ebp
  int v21; // eax
  int v22; // [esp+2Ch] [ebp-68h] BYREF
  int v23; // [esp+30h] [ebp-64h]
  int v24; // [esp+34h] [ebp-60h]
  int v25; // [esp+38h] [ebp-5Ch]
  ObjectClass *v26; // [esp+3Ch] [ebp-58h]
  int v27; // [esp+40h] [ebp-54h]
  int i; // [esp+44h] [ebp-50h]
  __int16 v29[2]; // [esp+48h] [ebp-4Ch] BYREF
  int j; // [esp+4Ch] [ebp-48h] BYREF
  int v31; // [esp+50h] [ebp-44h]
  int v32; // [esp+54h] [ebp-40h] BYREF
  int v33; // [esp+58h] [ebp-3Ch] BYREF
  int v34; // [esp+5Ch] [ebp-38h]
  int v35; // [esp+60h] [ebp-34h]
  _BYTE v36[12]; // [esp+64h] [ebp-30h] BYREF
  _BYTE v37[12]; // [esp+70h] [ebp-24h] BYREF
  _BYTE v38[12]; // [esp+7Ch] [ebp-18h] BYREF
  _BYTE v39[12]; // [esp+88h] [ebp-Ch] BYREF

  owningHouseIndex = (ObjectClass *)this->owningHouseIndex; /*0x6ea0de*/
  HIBYTE(this->visibilityFlags) = 0; /*0x6ea0e2*/
  SetLandTypeMap(owningHouseIndex); /*0x6ea0e6*/
  if ( this->ambientSoundController[3] <= 0 ) /*0x6ea0f0*/
  {
    this->attachedTag = 0; /*0x6ea3c2*/
  }
  else
  {
    p_attachedTag = &this->attachedTag; /*0x6ea0f9*/
    TeamClass::FindClosestEnemy((int)this, (void **)&this->attachedTag, (int *)&this->attachedBomb); /*0x6ea100*/
    if ( !this->attachedTag ) /*0x6ea105*/
    {
      attachedBomb = this->attachedBomb; /*0x6ea10a*/
      if ( !attachedBomb ) /*0x6ea10e*/
        return; /*0x6ea10e*/
      *p_attachedTag = (TagClass *)attachedBomb; /*0x6ea114*/
    }
    v6 = (_DWORD *)(*((int (__thiscall **)(TagClass *, int *))(*p_attachedTag)->AbstractClass + 18))( /*0x6ea11f*/
                     *p_attachedTag,
                     &v33);
    v27 = 0x7FFFFFFF; /*0x6ea124*/
    LOWORD(v22) = *v6 / 256; /*0x6ea13a*/
    fallRate = this->fallRate; /*0x6ea143*/
    HIWORD(v22) = v6[1] / 256; /*0x6ea151*/
    *(_DWORD *)v29 = v22; /*0x6ea15a*/
    v8 = 0; /*0x6ea161*/
    v31 = *(_DWORD *)(fallRate + 120); /*0x6ea163*/
    for ( i = 0; i < v31; ++i ) /*0x6ea16d*/
    {
      v9 = *(_DWORD *)(*(_DWORD *)(this->fallRate + 108) + 4 * v8); /*0x6ea179*/
      if ( v9 && !*(_BYTE *)(v9 + 129) && !*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 1016))(v9, 0) ) /*0x6ea19e*/
      {
        v10 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 72))(v9, v36); /*0x6ea1b0*/
        LOWORD(v23) = *v10 / 256; /*0x6ea1c3*/
        attachedTag = this->attachedTag; /*0x6ea1d2*/
        HIWORD(v23) = v10[1] / 256; /*0x6ea1da*/
        v22 = v23; /*0x6ea1e3*/
        v12 = (_DWORD *)(*((int (__thiscall **)(TagClass *, _BYTE *))attachedTag->AbstractClass + 18))(attachedTag, v37); /*0x6ea1f5*/
        v13 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 72))(v9, v38); /*0x6ea1fc*/
        v14 = v13[1]; /*0x6ea203*/
        v33 = *v13 - *v12; /*0x6ea208*/
        v15 = v13[2]; /*0x6ea211*/
        v34 = v14 - v12[1]; /*0x6ea214*/
        v35 = v15 - v12[2]; /*0x6ea224*/
        Math::Sqrt((double)v33 * (double)v33 + (double)v35 * (double)v35 + (double)v34 * (double)v34); /*0x6ea249*/
        LOWORD(v16) = Math::RoundToInt(v1); /*0x6ea251*/
        v17 = v16 * (CellClass::GetTileData((__int16 *)&v22, this->fallRate) + 1); /*0x6ea27a*/
        if ( *(_BYTE *)(*(_DWORD *)(v9 + 1312) + 5801) ) /*0x6ea274*/
          v17 /= 2; /*0x6ea288*/
        if ( v17 < v27 ) /*0x6ea28e*/
        {
          v18 = (_DWORD *)(*((int (__thiscall **)(TagClass *, _BYTE *))this->attachedTag->AbstractClass + 18))( /*0x6ea29e*/
                            this->attachedTag,
                            v39);
          v19 = this->customSound_controller[1]; /*0x6ea2a3*/
          v26 = (ObjectClass *)v19; /*0x6ea2a6*/
          v25 = -1; /*0x6ea2aa*/
          LOWORD(v24) = *v18 / 256; /*0x6ea2c0*/
          HIWORD(v24) = v18[1] / 256; /*0x6ea2d4*/
          for ( j = v24; v19; v19 = *(_DWORD *)(v19 + 1496) ) /*0x6ea2e3*/
          {
            v20 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v19 + 132))(v19) + 1532); /*0x6ea2ef*/
            if ( *(_BYTE *)(v19 + 144) /*0x6ea337*/
              && *(_DWORD *)(v19 + 108)
              && (dword_A8E7AC || !*(_BYTE *)(v19 + 129))
              && (*(_BYTE *)(v19 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 44))(v19) == 2)
              && v20 > v25 )
            {
              v26 = (ObjectClass *)v19; /*0x6ea339*/
              v25 = v20; /*0x6ea33d*/
            }
          }
          v21 = *WalkPathfindingLine(v26, &v32, (int)&j, &v22, 2, 4); /*0x6ea367*/
          v22 = v21; /*0x6ea370*/
          if ( v21 != g_BuildingLoadQueue_Array.?[1] ) /*0x6ea374*/
          {
            v27 = v17; /*0x6ea384*/
            *(_DWORD *)v29 = v21; /*0x6ea388*/
          }
        }
      }
      v8 = i + 1; /*0x6ea394*/
    }
    this->ambientSoundController[1] = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x6ea3b2*/
    TeamClass::UpdateMembers((TeamClass *)this); /*0x6ea3b5*/
  }
}



// ==== 0x006EA3E0  TeamClass::UpdateReadinessState  this=TeamClass  sig=csp ====
char __thiscall TeamClass::UpdateReadinessState(TeamClass *this)
{
  int v2; // eax
  int totalObjects; // ecx
  TeamTypeClass *buildingType; // edi
  char spawnStatus; // al
  char *i; // edi
  char TeamClass_field_7A; // [esp+Fh] [ebp-1h]

  TeamClass_field_7A = this->TeamClass_field_7A; /*0x6ea3ec*/
  v2 = TeamClass::SumMemberCounts(*(TeamClass **)&this->buildingType[1].TeamTypeClass_field_70); /*0x6ea3f6*/
  totalObjects = this->totalObjects; /*0x6ea3fb*/
  if ( totalObjects > 0 ) /*0x6ea404*/
  {
    this->unknown79 = totalObjects == v2; /*0x6ea40d*/
    if ( totalObjects == v2 ) /*0x6ea410*/
      this->spawnStatus = 1; /*0x6ea412*/
    buildingType = this->buildingType; /*0x6ea416*/
    if ( HIBYTE(buildingType[1].TeamTypeClass_field_34) ) /*0x6ea419*/
    {
      if ( v2 <= 2 ) /*0x6ea424*/
        this->TeamClass_field_7A = totalObjects < v2; /*0x6ea443*/
      else
        this->TeamClass_field_7A = totalObjects <= v2 / 3; /*0x6ea439*/
    }
    else
    {
      this->TeamClass_field_7A = this->spawnStatus == 0; /*0x6ea44e*/
    }
    if ( HIBYTE(buildingType[1].TeamTypeClass_field_30) ) /*0x6ea451*/
    {
      if ( this->TeamClass_field_7A ) /*0x6ea459*/
        this->unknown76 = 0; /*0x6ea45e*/
      else
        this->unknown76 = 1; /*0x6ea463*/
    }
    this->TeamClass_field_7E = 0; /*0x6ea467*/
    this->needsToDisappear = 0; /*0x6ea46a*/
    goto LABEL_14; /*0x6ea46a*/
  }
  spawnStatus = this->spawnStatus; /*0x6ea483*/
  this->unknown76 = 0; /*0x6ea486*/
  this->TeamClass_field_7A = 1; /*0x6ea48b*/
  this->unknown79 = 0; /*0x6ea48f*/
  this->spawnCell = 0; /*0x6ea492*/
  if ( !spawnStatus ) /*0x6ea495*/
  {
LABEL_14:
    if ( TeamClass_field_7A != this->TeamClass_field_7A ) /*0x6ea476*/
      this->TeamClass_field_7B = 1; /*0x6ea478*/
    return 1; /*0x6ea482*/
  }
  if ( this->unknown82 ) /*0x6ea497*/
  {
    for ( i = (char *)&FootClass_Array.?[-1].OwnerHouse + 3; (int)i >= 0; --i ) /*0x6ea4aa*/
    {
      if ( (unsigned __int8)TeamClass::Update_0( /*0x6ea4cf*/
                              *((TeamClass **)&FootClass_Array.?->ObjectClass + (_DWORD)i),
                              23,
                              0,
                              g_BuildingLoadQueue_Array.?[1],
                              0,
                              0)
        && !FootClass_Array.? )
      {
        break; /*0x6ea4cf*/
      }
    }
  }
  if ( this ) /*0x6ea4d6*/
    (*((void (__thiscall **)(TeamClass *, int))this->AbstractClass + 8))(this, 1); /*0x6ea4de*/
  return 0; /*0x6ea47c*/
}



// ==== 0x006EA4F0  CaptureManagerClass::AddMember  this=CaptureManagerClass  sig=csp ====
char __thiscall CaptureManagerClass::AddMember(CaptureManagerClass *this, int a2)
{
  return TeamClass::AddMember((int *)this, a2, 1); /*0x6ea4fc*/
}



// ==== 0x006EA500  TeamClass::AddMember  this=ObjectClass  sig=csp ====
int __thiscall TeamClass::AddMember(int *this, int a2, char a3)
{
  int v3; // edi
  int result; // eax
  char v6; // bl
  int *v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // edx

  v3 = a2; /*0x6ea503*/
  if ( a2 ) /*0x6ea50b*/
  {
    v6 = a3; /*0x6ea515*/
    result = TeamClass::ValidateMember((TeamClass *)this, a2, &a2, a3); /*0x6ea522*/
    if ( (_BYTE)result ) /*0x6ea529*/
    {
      v7 = *(int **)(v3 + 1492); /*0x6ea531*/
      if ( v7 ) /*0x6ea539*/
        TeamClass::LiberateMember_Start(v7, v3, 0xFFFFFFFF, 0); /*0x6ea540*/
      if ( !v6 ) /*0x6ea547*/
        ++*(this + a2 + 34); /*0x6ea54d*/
      *(_BYTE *)(v3 + 1673) = this->q054 == 0; /*0x6ea55c*/
      *(_DWORD *)(v3 + 1496) = this->q054; /*0x6ea565*/
      this->q054 = v3; /*0x6ea56b*/
      *(_DWORD *)(v3 + 1492) = this; /*0x6ea56e*/
      *(_DWORD *)(v3 + 532) = TeamTypeClass::GetGroup((TeamTypeClass *)this->objectTypeFlags); /*0x6ea57c*/
      if ( this->referenceCount /*0x6ea5a8*/
        && (!*(_BYTE *)(this->objectTypeFlags + 179) || *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 132))(v3) + 1504) > 0) )
      {
        ObjectClass::SetReference((ObjectClass *)v3, this->referenceCount); /*0x6ea5b0*/
      }
      ++this->q048; /*0x6ea5bb*/
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 704))(v3); /*0x6ea5c0*/
      v9 = this->attachedTag; /*0x6ea5c9*/
      v10 = v8 + this->IsAllocated; /*0x6ea5cc*/
      result = (int)(this + 13); /*0x6ea5ce*/
      this->IsAllocated = v10; /*0x6ea5d3*/
      if ( !v9 ) /*0x6ea5d6*/
        TeamClass::FindClosestEnemy((int)this, (void **)this + 13, this + 14); /*0x6ea5df*/
      v11 = this->objectTypeFlags; /*0x6ea5e4*/
      LOBYTE(result) = 1; /*0x6ea5e7*/
      *((_BYTE *)this + 126) = 1; /*0x6ea5e9*/
      *((_BYTE *)this + 125) = 1; /*0x6ea5ec*/
      *(_BYTE *)(v3 + 1058) = *(_BYTE *)(v11 + 245); /*0x6ea5f5*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x6ea50f*/
  }
  return result; /*0x6ea50d*/
}



// ==== 0x006EA610  TeamClass::ValidateMember  this=TeamClass  sig=csp ====
int __thiscall TeamClass::ValidateMember(TeamClass *this, int a2, int *a3, char a4)
{
  int result; // eax
  int v6; // edi
  int v7; // eax
  ScriptClass *currentScript; // ecx
  bool v9; // bl
  int v10; // eax
  int v11; // edx
  int v12; // [esp+10h] [ebp-8h] BYREF

  if ( this == *(TeamClass **)(a2 + 1492) ) /*0x6ea623*/
    goto LABEL_39; /*0x6ea623*/
  if ( !a2 ) /*0x6ea62b*/
    goto LABEL_39; /*0x6ea62b*/
  if ( !*(_BYTE *)(a2 + 144) ) /*0x6ea631*/
    goto LABEL_39; /*0x6ea631*/
  result = *(_DWORD *)(a2 + 108); /*0x6ea63f*/
  if ( !result ) /*0x6ea644*/
    goto LABEL_39; /*0x6ea644*/
  if ( !dword_A8E7AC ) /*0x6ea651*/
  {
    result = *(unsigned __int8 *)(a2 + 129); /*0x6ea653*/
    if ( (_BYTE)result ) /*0x6ea65b*/
      goto LABEL_39; /*0x6ea65b*/
  }
  result = *(_DWORD *)(a2 + 540); /*0x6ea661*/
  if ( (HouseClass *)result != this->owner ) /*0x6ea66c*/
    goto LABEL_39; /*0x6ea66c*/
  if ( (unsigned __int8)Team::AllMembersValid((Team *)a2) ) /*0x6ea674*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2); /*0x6ea681*/
    if ( result != 2 ) /*0x6ea687*/
      goto LABEL_39; /*0x6ea687*/
    result = *(_DWORD *)(a2 + 1732); /*0x6ea68d*/
    if ( !*(_BYTE *)(result + 3597) ) /*0x6ea693*/
      goto LABEL_39; /*0x6ea693*/
  }
  *a3 = 0; /*0x6ea6a5*/
  if ( *(int *)(*(_DWORD *)&this->buildingType[1].TeamTypeClass_field_70 + 156) > 0 ) /*0x6ea6bc*/
  {
    do /*0x6ea6f0*/
    {
      v6 = *a3; /*0x6ea6c0*/
      if ( *(_DWORD *)(*(_DWORD *)&this->buildingType[1].TeamTypeClass_field_70 + 8 * v6 + 168) == (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 136))(a2) ) /*0x6ea6da*/
        break; /*0x6ea6da*/
      *a3 = v6 + 1; /*0x6ea6df*/
    }
    while ( v6 + 1 < *(_DWORD *)(*(_DWORD *)&this->buildingType[1].TeamTypeClass_field_70 + 156) ); /*0x6ea6f0*/
  }
  result = (int)this->buildingType; /*0x6ea6f2*/
  if ( *a3 == *(_DWORD *)(*(_DWORD *)(result + 228) + 156) && !a4 ) /*0x6ea70b*/
    goto LABEL_39; /*0x6ea70b*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 388))(a2) != -1 ) /*0x6ea71e*/
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 388))(a2); /*0x6ea724*/
    if ( !IPersistStream::SetField(v7) ) /*0x6ea72c*/
      goto LABEL_39; /*0x6ea72c*/
  }
  if ( !*(_BYTE *)(a2 + 1057) ) /*0x6ea739*/
  {
    result = (int)this->buildingType; /*0x6ea743*/
    if ( !*(_BYTE *)(result + 169) ) /*0x6ea746*/
      goto LABEL_39; /*0x6ea746*/
  }
  currentScript = this->currentScript; /*0x6ea754*/
  v9 = 0; /*0x6ea757*/
  if ( currentScript ) /*0x6ea75b*/
    v9 = *SessionClass::GetEntry((SessionClass *)currentScript, &v12) == 8; /*0x6ea76c*/
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2); /*0x6ea772*/
  if ( result == 2 ) /*0x6ea778*/
    v9 = 1; /*0x6ea77a*/
  if ( !*(_BYTE *)(a2 + 1058) && BYTE1(this->buildingType[1].TeamTypeClass_field_34) && !v9 ) /*0x6ea795*/
    goto LABEL_39; /*0x6ea795*/
  result = TeamClass::HasAnyMemberFlagged((TeamClass *)a2); /*0x6ea79d*/
  if ( (_BYTE)result ) /*0x6ea7a4*/
    goto LABEL_39; /*0x6ea7a4*/
  result = FootClass::checkPassability((FootClass *)a2); /*0x6ea7ac*/
  if ( (_BYTE)result ) /*0x6ea7b3*/
    goto LABEL_39; /*0x6ea7b3*/
  result = *(_DWORD *)(a2 + 740); /*0x6ea7b9*/
  if ( result ) /*0x6ea7c1*/
    goto LABEL_39; /*0x6ea7c1*/
  v10 = *(_DWORD *)(a2 + 1492); /*0x6ea7c7*/
  if ( v10 ) /*0x6ea7cf*/
  {
    v11 = *(_DWORD *)(v10 + 36); /*0x6ea7d1*/
    result = (int)this->buildingType; /*0x6ea7d4*/
    if ( *(_DWORD *)(v11 + 180) >= *(_DWORD *)(result + 180) ) /*0x6ea7e5*/
      goto LABEL_39; /*0x6ea7e5*/
  }
  if ( ((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) != 2 /*0x6ea83f*/
     || !*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 1016))(a2, 0)
     || (result = *(_DWORD *)(a2 + 764)) != 0)
    && ((result = *a3,
         this->countObjects[*a3] < *(_DWORD *)(*(_DWORD *)&this->buildingType[1].TeamTypeClass_field_70 + 8 * *a3 + 164))
     || a4)
    && (result = *(_DWORD *)(a2 + 740)) == 0 )
  {
    result = *(_DWORD *)(a2 + 688); /*0x6ea841*/
    LOBYTE(result) = result == 0; /*0x6ea84c*/
  }
  else
  {
LABEL_39:
    LOBYTE(result) = 0; /*0x6ea859*/
  }
  return result; /*0x6ea847*/
}



// ==== 0x006EA870  TeamClass::LiberateMember_Start  this=TeamClass  sig=csp ====
int __thiscall TeamClass::LiberateMember_Start(int *this, int a2, unsigned int a3, char a4)
{
  int result; // eax
  #375 *v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // esi
  char v14; // cl
  int v15; // eax
  char v16; // dl
  int v17; // eax
  int v18; // eax
  int v19; // [esp+8h] [ebp-4h]
  char v20; // [esp+14h] [ebp+8h]

  result = *(_DWORD *)(a2 + 1492); /*0x6ea879*/
  *(_BYTE *)(a2 + 1720) = 1; /*0x6ea87f*/
  if ( this == (int *)result ) /*0x6ea888*/
  {
    if ( *(_DWORD *)(a2 + 52) == this->referenceCount ) /*0x6ea89b*/
    {
      v6 = *(#375 **)(a2 + 540); /*0x6ea89d*/
      if ( v6 ) /*0x6ea8a7*/
      {
        if ( !(unsigned __int8)House::IsCurrentPlayer(v6) ) /*0x6ea8a9*/
          ObjectClass::SetReference((_DWORD *)a2, 0); /*0x6ea8b5*/
      }
    }
    if ( a3 == -1 ) /*0x6ea8c6*/
    {
      v7 = this->buildingType; /*0x6ea8c8*/
      if ( v7 ) /*0x6ea8cd*/
      {
        v8 = *(_DWORD *)(v7 + 228); /*0x6ea8cf*/
        if ( v8 ) /*0x6ea8d7*/
        {
          a3 = 0; /*0x6ea8df*/
          if ( *(int *)(v8 + 156) > 0 ) /*0x6ea8e5*/
          {
            v9 = 168; /*0x6ea8e7*/
            do /*0x6ea919*/
            {
              v10 = *(_DWORD *)(this->buildingType + 228); /*0x6ea8f2*/
              if ( *(_DWORD *)(v9 + v10) == (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 136))(a2) ) /*0x6ea903*/
                break; /*0x6ea903*/
              v9 += 8; /*0x6ea910*/
              ++a3; /*0x6ea915*/
            }
            while ( (signed int)a3 < *(_DWORD *)(v10 + 156) ); /*0x6ea919*/
          }
        }
      }
    }
    v11 = this->buildingType; /*0x6ea91d*/
    if ( v11 ) /*0x6ea922*/
    {
      v12 = *(_DWORD *)(v11 + 228); /*0x6ea924*/
      if ( v12 ) /*0x6ea92c*/
      {
        if ( a3 < *(_DWORD *)(v12 + 156) ) /*0x6ea93a*/
          --*(this + a3 + 34); /*0x6ea93c*/
      }
    }
    v13 = this->firstUnit; /*0x6ea943*/
    v14 = 0; /*0x6ea946*/
    v15 = 0; /*0x6ea948*/
    v16 = 0; /*0x6ea94a*/
    v20 = 0; /*0x6ea94e*/
    v19 = 0; /*0x6ea952*/
    if ( v13 ) /*0x6ea956*/
    {
      while ( !v16 || !v14 ) /*0x6ea96c*/
      {
        if ( v13 == a2 ) /*0x6ea974*/
        {
          if ( v15 ) /*0x6ea978*/
            *(_DWORD *)(v15 + 1496) = *(_DWORD *)(v13 + 1496); /*0x6ea980*/
          else
            this->firstUnit = *(_DWORD *)(v13 + 1496); /*0x6ea98e*/
          v17 = *(_DWORD *)(v13 + 1496); /*0x6ea991*/
          *(_DWORD *)(v13 + 1496) = 0; /*0x6ea997*/
          *(_DWORD *)(v13 + 1492) = 0; /*0x6ea99d*/
          *(_DWORD *)(v13 + 176) = -1; /*0x6ea9a3*/
          *(_DWORD *)(v13 + 1448) = 0; /*0x6ea9ad*/
          *(_DWORD *)(v13 + 696) = 0; /*0x6ea9b3*/
          v13 = v17; /*0x6ea9bc*/
          --this->totalObjects; /*0x6ea9c1*/
          v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 704))(a2); /*0x6ea9cc*/
          v16 = 1; /*0x6ea9d5*/
          this->totalThreatValue -= v18; /*0x6ea9db*/
        }
        else
        {
          if ( v14 || (v20 = 0, *(_BYTE *)(v13 + 1673)) ) /*0x6ea9e4*/
            v20 = 1; /*0x6ea9f2*/
          v19 = v13; /*0x6ea9f7*/
          v13 = *(_DWORD *)(v13 + 1496); /*0x6ea9fb*/
        }
        if ( !v13 ) /*0x6eaa03*/
        {
          v14 = v20; /*0x6eaa09*/
          break; /*0x6eaa09*/
        }
        v15 = v19; /*0x6ea95e*/
        v14 = v20; /*0x6ea962*/
      }
    }
    result = *(_DWORD *)(a2 + 1492); /*0x6eaa0d*/
    if ( result ) /*0x6eaa16*/
      *(_DWORD *)(a2 + 1492) = 0; /*0x6eaa18*/
    if ( !dword_A8E7AC && *(_BYTE *)(a2 + 144) && !*(_BYTE *)(a2 + 1061) && !*(_BYTE *)(a2 + 129) && !a4 ) /*0x6eaa4a*/
    {
      result = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a2 + 1156))(a2, 0, 1); /*0x6eaa54*/
      v14 = v20; /*0x6eaa5a*/
    }
    if ( !v14 ) /*0x6eaa60*/
    {
      result = this->firstUnit; /*0x6eaa62*/
      if ( result ) /*0x6eaa67*/
      {
        *(_BYTE *)(result + 1673) = 1; /*0x6eaa69*/
        this->spawnCell = 0; /*0x6eaa70*/
      }
    }
    this->TeamClass_field_7E = 1; /*0x6eaa73*/
    this->needsToDisappear = 1; /*0x6eaa77*/
    LOBYTE(result) = 1; /*0x6eaa7d*/
  }
  else
  {
    LOBYTE(result) = 1; /*0x6ea88b*/
  }
  return result; /*0x6ea88a*/
}



// ==== 0x006EAA90  TeamClass::RecruitMember  this=TeamClass  sig=csp ====
int __thiscall TeamClass::RecruitMember(TeamClass *this, int a2)
{
  TeamClass *v2; // edi
  int v3; // ebx
  CellClass *spawnCell; // ecx
  int *v5; // eax
  TechnoClass *buildingType; // ecx
  _DWORD *WaypointCoords; // eax
  int v8; // ecx
  int v9; // eax
  TeamTypeClass *v10; // ecx
  int v11; // ecx
  int v12; // ebp
  int v13; // eax
  Math *v14; // esi
  int v15; // eax
  int v16; // edi
  int v18; // ebp
  int v19; // eax
  Math *v20; // esi
  int v21; // eax
  int v22; // edi
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // edi
  int DB; // esi
  int Group; // [esp+14h] [ebp-28h]
  int v30; // [esp+18h] [ebp-24h]
  int v31; // [esp+1Ch] [ebp-20h]
  int v32; // [esp+1Ch] [ebp-20h]
  int v33; // [esp+1Ch] [ebp-20h]
  int v34; // [esp+20h] [ebp-1Ch] BYREF
  int v35; // [esp+24h] [ebp-18h] BYREF
  int v36; // [esp+28h] [ebp-14h]
  int v37; // [esp+2Ch] [ebp-10h]
  _BYTE v38[12]; // [esp+30h] [ebp-Ch] BYREF

  v2 = this; /*0x6eaa97*/
  v3 = 0; /*0x6eaa99*/
  spawnCell = this->spawnCell; /*0x6eaa9f*/
  if ( spawnCell ) /*0x6eaaa4*/
    v5 = (int *)(*(int (__thiscall **)(CellClass *, _BYTE *))(spawnCell->mapCoords[0] + 72))(spawnCell, v38); /*0x6eaaad*/
  else
    v5 = &g_BuildingLoadQueue_Array.?[9]; /*0x6eaab2*/
  v35 = *v5; /*0x6eaab9*/
  v36 = v5[1]; /*0x6eaac4*/
  buildingType = (TechnoClass *)v2->buildingType; /*0x6eaacc*/
  v37 = v5[2]; /*0x6eaacf*/
  if ( *TechnoClass::GetWaypointCoords(buildingType, &v34) != g_BuildingLoadQueue_Array.?[1] ) /*0x6eaae2*/
  {
    WaypointCoords = TechnoClass::GetWaypointCoords((TechnoClass *)v2->buildingType, &v34); /*0x6eaaf9*/
    v8 = (*(__int16 *)WaypointCoords << 8) + 128; /*0x6eab0b*/
    v9 = (*((__int16 *)WaypointCoords + 1) << 8) + 128; /*0x6eab11*/
    v35 = v8; /*0x6eab18*/
    v36 = v9; /*0x6eab1c*/
    v37 = 0; /*0x6eab20*/
  }
  v10 = v2->buildingType; /*0x6eab24*/
  v30 = 0; /*0x6eab2b*/
  if ( *(_DWORD *)(*(_DWORD *)&v10[1].TeamTypeClass_field_70 + 8 * a2 + 164) <= v2->countObjects[a2] ) /*0x6eab45*/
    return v30; /*0x6eae19*/
  Group = TeamTypeClass::GetGroup(v10); /*0x6eab54*/
  v11 = *(_DWORD *)(*(_DWORD *)&v2->buildingType[1].TeamTypeClass_field_70 + 8 * a2 + 168); /*0x6eab61*/
  switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) ) /*0x6eab7f*/
  {
    case 1: /*0x6eab7f*/
    case 40: /*0x6eab7f*/
      v23 = 0; /*0x6ead07*/
      v33 = -1; /*0x6ead0b*/
      v34 = 0; /*0x6ead13*/
      if ( FootClass_Array.?[2] > 0 ) /*0x6ead17*/
      {
        do /*0x6eadc8*/
        {
          v24 = *(_DWORD *)(FootClass_Array.? + 4 * v23); /*0x6ead23*/
          if ( Group == -2 || *(_DWORD *)(v24 + 532) == Group || LOBYTE(v2->buildingType[1].TeamTypeClass_field_34) ) /*0x6ead3a*/
          {
            v25 = Math::DistSq2D((Math *)v24, &v35); /*0x6ead4b*/
            v26 = v25; /*0x6ead54*/
            if ( *(_DWORD *)(v24 + 532) != Group ) /*0x6ead5c*/
              v26 = v25 + 12800; /*0x6ead5e*/
            if ( *(HouseClass **)(v24 + 540) == this->owner /*0x6eada4*/
              && *(_DWORD *)(v24 + 1732) == *(_DWORD *)(*(_DWORD *)&this->buildingType[1].TeamTypeClass_field_70
                                                      + 8 * a2
                                                      + 168)
              && (v26 < v33 || v33 == -1)
              && (unsigned __int8)TeamClass::ValidateMember(this, v24, &a2, 0) )
            {
              v3 = v24; /*0x6eadad*/
              v33 = v26; /*0x6eadaf*/
            }
            v2 = this; /*0x6eadb3*/
          }
          v23 = ++v34; /*0x6eadc1*/
        }
        while ( v34 < FootClass_Array.?[2] ); /*0x6eadc8*/
        if ( v3 ) /*0x6eadd0*/
        {
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 968))(v3, 0); /*0x6eadd8*/
          TeamClass::AddMember((int *)v2, v3, 0); /*0x6eade3*/
          v30 = 1; /*0x6eadee*/
          DB = CCINIClass::GetDB((CCINIClass *)(v3 + 276)); /*0x6eadfb*/
          if ( DB ) /*0x6eadff*/
          {
            do /*0x6eae17*/
            {
              TeamClass::AddMember((int *)v2, DB, 0); /*0x6eae08*/
              DB = *(_DWORD *)(DB + 48); /*0x6eae0d*/
            }
            while ( DB && (*(_BYTE *)(DB + 20) & 4) != 0 ); /*0x6eae17*/
          }
        }
      }
      return v30; /*0x6eae17*/
    case 2: /*0x6eab7f*/
    case 3: /*0x6eab7f*/
      v18 = -1; /*0x6eac57*/
      v19 = 0; /*0x6eac5a*/
      v32 = 0; /*0x6eac5e*/
      if ( dword_A8E3A0 <= 0 ) /*0x6eac62*/
        return v30; /*0x6eac62*/
      do /*0x6eace6*/
      {
        v20 = (Math *)*((_DWORD *)dword_A8E394 + v19); /*0x6eac6e*/
        if ( Group == -2 || v20[33].field_4 == (void *)Group || LOBYTE(v2->buildingType[1].TeamTypeClass_field_34) ) /*0x6eac85*/
        {
          v21 = Math::DistSq2D(v20, &v35); /*0x6eac96*/
          v22 = v21; /*0x6eac9f*/
          if ( v20[33].field_4 != (void *)Group ) /*0x6eaca7*/
            v22 = v21 + 12800; /*0x6eaca9*/
          if ( (v22 < v18 || v18 == -1) && (unsigned __int8)TeamClass::ValidateMember(this, (int)v20, &a2, 0) ) /*0x6eacc4*/
          {
            v3 = (int)v20; /*0x6eaccd*/
            v18 = v22; /*0x6eaccf*/
          }
          v2 = this; /*0x6eacd1*/
        }
        v19 = ++v32; /*0x6eacdf*/
      }
      while ( v32 < dword_A8E3A0 ); /*0x6eace6*/
      if ( !v3 ) /*0x6eacea*/
        return v30; /*0x6eacea*/
      break; /*0x6eacea*/
    case 15: /*0x6eab7f*/
    case 16: /*0x6eab7f*/
      v12 = -1; /*0x6eab8c*/
      v13 = 0; /*0x6eab8f*/
      v31 = 0; /*0x6eab93*/
      if ( *(int *)&stru_A83D50.__pad_80[40] <= 0 ) /*0x6eab97*/
        return v30; /*0x6eab97*/
      do /*0x6eac1b*/
      {
        v14 = *(Math **)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * v13); /*0x6eaba3*/
        if ( Group == -2 || v14[33].field_4 == (void *)Group || LOBYTE(v2->buildingType[1].TeamTypeClass_field_34) ) /*0x6eabba*/
        {
          v15 = Math::DistSq2D(v14, &v35); /*0x6eabcb*/
          v16 = v15; /*0x6eabd4*/
          if ( v14[33].field_4 != (void *)Group ) /*0x6eabdc*/
            v16 = v15 + 12800; /*0x6eabde*/
          if ( (v16 < v12 || v12 == -1) && (unsigned __int8)TeamClass::ValidateMember(this, (int)v14, &a2, 0) ) /*0x6eabf9*/
          {
            v3 = (int)v14; /*0x6eac02*/
            v12 = v16; /*0x6eac04*/
          }
          v2 = this; /*0x6eac06*/
        }
        v13 = ++v31; /*0x6eac14*/
      }
      while ( v31 < *(int *)&stru_A83D50.__pad_80[40] ); /*0x6eac1b*/
      if ( !v3 ) /*0x6eac1f*/
        return v30; /*0x6eac1f*/
      break; /*0x6eac1f*/
    default:
      return v30;
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 968))(v3, 0); /*0x6eac2b*/
  TeamClass::AddMember((int *)v2, v3, 0); /*0x6eac36*/
  return 1; /*0x6eac3b*/
}



// ==== 0x006EAE60  TeamClass::ExecuteAction  this=TeamClass  sig=csp ====
int __thiscall TeamClass::ExecuteAction(TeamClass *this, int a2, char a3)
{
  int result; // eax
  FootClass *firstUnit; // edx

  result = a2; /*0x6eae60*/
  if ( (TagClass *)a2 == this->tag ) /*0x6eae6c*/
    this->tag = 0; /*0x6eae6e*/
  firstUnit = this->firstUnit; /*0x6eae71*/
  if ( (FootClass *)a2 == firstUnit && a3 ) /*0x6eae7c*/
    this->firstUnit = firstUnit->nextTeamMember; /*0x6eae84*/
  if ( (HouseClass *)a2 == this->owner ) /*0x6eae8a*/
    this->owner = 0; /*0x6eae8c*/
  if ( (ScriptClass *)a2 == this->currentScript ) /*0x6eae92*/
    this->currentScript = 0; /*0x6eae94*/
  if ( this->focus == (AbstractClass *)a2 ) /*0x6eae9a*/
    this->focus = 0; /*0x6eae9c*/
  if ( this->queuedFocus == (AbstractClass *)a2 ) /*0x6eaea2*/
    this->queuedFocus = 0; /*0x6eaea4*/
  if ( this->spawnCell == (CellClass *)a2 ) /*0x6eaeaa*/
    this->spawnCell = 0; /*0x6eaeac*/
  if ( this->buildingType == (TeamTypeClass *)a2 ) /*0x6eaeb2*/
    this->buildingType = 0; /*0x6eaeb4*/
  if ( this->unknown38 == a2 ) /*0x6eaeba*/
    this->unknown38 = 0; /*0x6eaebc*/
  if ( this->unknown44 == a2 ) /*0x6eaec2*/
    this->unknown44 = 0; /*0x6eaec4*/
  if ( this->target == (HouseClass *)a2 ) /*0x6eaeca*/
    this->target = 0; /*0x6eaecc*/
  return result; /*0x6eaecf*/
}



// ==== 0x006EAEE0  TeamClass::FindClosestEnemy  this=AbstractClass  sig=csp ====
char __thiscall TeamClass_FindClosestEnemy(int this, void **a2, int *a3)
{
  int v3; // eax
  int v4; // esi
  int v5; // ebx
  int v6; // edi
  char *v7; // ecx
  int v8; // ebp
  int v9; // eax
  char *v10; // esi
  _DWORD *v11; // ebx
  _DWORD *v12; // eax
  int *v13; // eax
  int v14; // eax
  char *v15; // esi
  _DWORD *v16; // ebx
  _DWORD *v17; // eax
  int *v18; // eax
  double v19; // st7
  int v20; // eax
  char v21; // al
  int v22; // ebp
  void *v23; // esi
  int *v24; // esi
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  void *v28; // eax
  int v31; // [esp+2Ch] [ebp-38h]
  int v32; // [esp+2Ch] [ebp-38h]
  int v33; // [esp+2Ch] [ebp-38h]
  char *v34; // [esp+30h] [ebp-34h]
  void *v35; // [esp+30h] [ebp-34h]
  int v36; // [esp+34h] [ebp-30h] BYREF
  int v37; // [esp+38h] [ebp-2Ch]
  int v38; // [esp+3Ch] [ebp-28h]
  int v39; // [esp+40h] [ebp-24h] BYREF
  int v40; // [esp+44h] [ebp-20h]
  int v41; // [esp+48h] [ebp-1Ch]
  _BYTE v42[12]; // [esp+4Ch] [ebp-18h] BYREF
  _DWORD v43[3]; // [esp+58h] [ebp-Ch] BYREF

  LOBYTE(v3) = (_BYTE)a3; /*0x6eaee3*/
  v4 = this; /*0x6eaeea*/
  v5 = 0; /*0x6eaeec*/
  *a3 = 0; /*0x6eaef2*/
  *a2 = 0; /*0x6eaef9*/
  v6 = *(_DWORD *)(this + 84); /*0x6eaefb*/
  if ( v6 ) /*0x6eaf00*/
  {
    if ( *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v36) == 10 ) /*0x6eaf16*/
    {
      v7 = 0; /*0x6eaf22*/
      v8 = -1; /*0x6eaf24*/
      v9 = 0; /*0x6eaf27*/
      v34 = 0; /*0x6eaf2b*/
      v31 = 0; /*0x6eaf2f*/
      if ( dword_8B4118 > 0 ) /*0x6eaf33*/
      {
        do /*0x6eb012*/
        {
          v10 = (char *)*((_DWORD *)dword_8B410C + v9); /*0x6eaf3f*/
          if ( v10 && v10[144] && *((_DWORD *)v10 + 27) && (dword_A8E7AC || !v10[129]) ) /*0x6eaf6c*/
          {
            if ( (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)v10 + 135), *(#375 **)(this + 44)) ) /*0x6eaf88*/
            {
              if ( this != *((_DWORD *)v10 + 373) ) /*0x6eaf97*/
              {
                v11 = (_DWORD *)(*(int (__thiscall **)(char *, int *))(*(_DWORD *)v10 + 72))(v10, &v39); /*0x6eafa7*/
                v12 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 72))(v6, v42); /*0x6eafb0*/
                v13 = Coord::Subtract(v43, *v12 - *v11, v12[1] - v11[1], v12[2] - v11[2]); /*0x6eafd0*/
                v36 = *v13; /*0x6eafd7*/
                v37 = v13[1]; /*0x6eafe2*/
                v38 = v13[2]; /*0x6eafe9*/
                v14 = Coord::Length(&v36); /*0x6eafed*/
                if ( v8 == -1 || v14 < v8 ) /*0x6eaff9*/
                {
                  v8 = v14; /*0x6eaffb*/
                  v34 = v10; /*0x6eaffd*/
                }
              }
            }
          }
          v9 = ++v31; /*0x6eb00b*/
        }
        while ( v31 < dword_8B4118 ); /*0x6eb012*/
        v4 = this; /*0x6eb018*/
        v7 = v34; /*0x6eb01c*/
      }
      v3 = 0; /*0x6eb026*/
      v32 = 0; /*0x6eb02a*/
      if ( dword_A83DF8 > 0 ) /*0x6eb02e*/
      {
        do /*0x6eb141*/
        {
          v15 = (char *)*((_DWORD *)dword_A83DEC + v3); /*0x6eb03a*/
          if ( v15 && v15[144] && *((_DWORD *)v15 + 27) && (dword_A8E7AC || !v15[129]) ) /*0x6eb067*/
          {
            if ( (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)v15 + 135), *(#375 **)(this + 44)) ) /*0x6eb083*/
            {
              if ( this != *((_DWORD *)v15 + 373) ) /*0x6eb096*/
              {
                v16 = (_DWORD *)(*(int (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v15 + 72))(v15, v43); /*0x6eb0aa*/
                v17 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 72))(v6, v42); /*0x6eb0b3*/
                v18 = Coord::Subtract(&v39, *v17 - *v16, v17[1] - v16[1], v17[2] - v16[2]); /*0x6eb0d3*/
                v36 = *v18; /*0x6eb0dd*/
                v37 = v18[1]; /*0x6eb0e4*/
                v38 = v18[2]; /*0x6eb0ef*/
                v19 = Math::Sqrt((double)v36 * (double)v36 + (double)v38 * (double)v38 + (double)v37 * (double)v37); /*0x6eb114*/
                v20 = Math::RoundToInt(v19); /*0x6eb11c*/
                if ( v8 == -1 || v20 < v8 ) /*0x6eb128*/
                {
                  v8 = v20; /*0x6eb12a*/
                  v34 = v15; /*0x6eb12c*/
                }
              }
            }
          }
          v3 = ++v32; /*0x6eb13a*/
        }
        while ( v32 < dword_A83DF8 ); /*0x6eb141*/
        v4 = this; /*0x6eb147*/
        v7 = v34; /*0x6eb14b*/
      }
      if ( v7 ) /*0x6eb151*/
      {
        v21 = v7[1668]; /*0x6eb157*/
        if ( v21 < 0 ) /*0x6eb15f*/
        {
          *a2 = v7; /*0x6eb1a1*/
        }
        else
        {
          v36 = *(_DWORD *)(*((_DWORD *)dword_8B413C + v21) + 40); /*0x6eb175*/
          *a2 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v36); /*0x6eb188*/
        }
        v3 = *(_DWORD *)(v4 + 84); /*0x6eb18a*/
        *a3 = v3; /*0x6eb194*/
      }
    }
    else
    {
      v22 = 0; /*0x6eb1b5*/
      v23 = 0; /*0x6eb1b7*/
      v33 = 0; /*0x6eb1bb*/
      v36 = 0; /*0x6eb1bf*/
      v35 = 0; /*0x6eb1c3*/
      do /*0x6eb301*/
      {
        LOBYTE(v3) = *(_BYTE *)(v6 + 144); /*0x6eb1cd*/
        if ( (_BYTE)v3 ) /*0x6eb1d5*/
        {
          v3 = *(_DWORD *)(v6 + 108); /*0x6eb1db*/
          if ( v3 ) /*0x6eb1e0*/
          {
            if ( dword_A8E7AC || (LOBYTE(v3) = *(_BYTE *)(v6 + 129), !(_BYTE)v3) ) /*0x6eb1f7*/
            {
              if ( *(_BYTE *)(v6 + 1673) || (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6), v3 == 2) ) /*0x6eb211*/
              {
                LOBYTE(v3) = *(_BYTE *)(v6 + 981); /*0x6eb217*/
                if ( (_BYTE)v3 ) /*0x6eb21f*/
                {
                  v24 = (int *)(v6 + 156); /*0x6eb225*/
                  v5 += *(_DWORD *)(v6 + 156); /*0x6eb22f*/
                  v40 = *(_DWORD *)(v6 + 160); /*0x6eb234*/
                  v25 = *(_DWORD *)(v6 + 156); /*0x6eb23d*/
                  v41 = *(_DWORD *)(v6 + 164); /*0x6eb23f*/
                  v39 = v25; /*0x6eb243*/
                  v26 = *(_DWORD *)(v6 + 160); /*0x6eb247*/
                  v41 = *(_DWORD *)(v6 + 164); /*0x6eb251*/
                  v33 += v26; /*0x6eb25e*/
                  ++v22; /*0x6eb262*/
                  if ( *(_BYTE *)(*(_DWORD *)(this + 36) + 167) /*0x6eb271*/
                    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 1248))(v6) )
                  {
                    v5 += *v24; /*0x6eb27f*/
                    v40 = *(_DWORD *)(v6 + 160); /*0x6eb287*/
                    v27 = *(_DWORD *)(v6 + 164); /*0x6eb28d*/
                    v39 = *v24; /*0x6eb290*/
                    v41 = v27; /*0x6eb294*/
                    v41 = *(_DWORD *)(v6 + 164); /*0x6eb29b*/
                    ++v22; /*0x6eb2a5*/
                    v33 += v40; /*0x6eb2a6*/
                  }
                  if ( *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)v6 + 132))(v6) + 1504) <= 0 /*0x6eb2c8*/
                    || (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 132))(v6), !*(_BYTE *)(v3 + 3278)) )
                  {
                    v3 = BuildingClass::SquaredDistanceTo(*(_DWORD *)(this + 64)); /*0x6eb2dc*/
                    if ( !v36 || v3 < v36 ) /*0x6eb2eb*/
                    {
                      v36 = v3; /*0x6eb2ed*/
                      v35 = (void *)v6; /*0x6eb2f1*/
                    }
                  }
                  v23 = v35; /*0x6eb2f5*/
                }
              }
            }
          }
        }
        v6 = *(_DWORD *)(v6 + 1496); /*0x6eb2f9*/
      }
      while ( v6 ); /*0x6eb301*/
      if ( v22 ) /*0x6eb309*/
      {
        v36 = v5 / v22; /*0x6eb31b*/
        v38 = 0; /*0x6eb324*/
        v37 = v33 / v22; /*0x6eb328*/
        v28 = Coord::To_Cell(&dword_87F7E8, &v36); /*0x6eb331*/
        *a2 = v28; /*0x6eb33c*/
        if ( !v23 ) /*0x6eb33e*/
          v23 = *(void **)(this + 84); /*0x6eb34b*/
        v3 = (*(int (__thiscall **)(void *, void *, int, int, _DWORD, int))(*(_DWORD *)v23 + 428))( /*0x6eb35a*/
               v23,
               v28,
               -1,
               -1,
               0,
               1);
        if ( v3 ) /*0x6eb362*/
          *a2 = v23; /*0x6eb364*/
      }
      if ( v23 ) /*0x6eb368*/
      {
        *a3 = (int)v23; /*0x6eb36e*/
        LOBYTE(v3) = (_BYTE)a3; /*0x6eb36a*/
      }
    }
  }
  return v3; /*0x6eb187*/
}



// ==== 0x006EB380  FootClass::LinkToTransporter  this=TechnoClass  sig=csp ====
void __thiscall FootClass::LinkToTransporter(int this, int a2, int a3, AbstractClass *a4)
{
  int v5; // ecx
  AbstractClass *abstractFlags; // eax
  AbstractClass *v7; // ecx
  int *v8; // eax
  int *v9; // edi
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  char v13[12]; // [esp+Ch] [ebp-Ch] BYREF

  if ( a4 && a3 && !*(_BYTE *)(*(_DWORD *)(this + 36) + 175) ) /*0x6eb3a3*/
  {
    if ( *(_BYTE *)(this + 127) ) /*0x6eb3b1*/
    {
      v5 = *(_DWORD *)(this + 84); /*0x6eb3d0*/
      abstractFlags = *(AbstractClass **)(this + 84); /*0x6eb3d3*/
      if ( abstractFlags ) /*0x6eb3d7*/
      {
        while ( abstractFlags != a4 ) /*0x6eb3db*/
        {
          abstractFlags = (AbstractClass *)abstractFlags[41].abstractFlags; /*0x6eb3e1*/
          if ( !abstractFlags ) /*0x6eb3e9*/
            goto LABEL_9; /*0x6eb3e9*/
        }
      }
      else
      {
LABEL_9:
        if ( v5 ) /*0x6eb3ed*/
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) != 2 ) /*0x6eb3fb*/
          {
            if ( *(_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 84) + 1016))( /*0x6eb40a*/
                              *(_DWORD *)(this + 84),
                              0) )
            {
              v7 = *(AbstractClass **)(this + 64); /*0x6eb40f*/
              if ( v7 != a4 ) /*0x6eb414*/
              {
                if ( *(_BYTE *)(*(_DWORD *)(this + 36) + 166) ) /*0x6eb419*/
                {
                  *(_DWORD *)(this + 52) = 0; /*0x6eb425*/
                  *(_BYTE *)(this + 117) = 1; /*0x6eb42c*/
                  *(_BYTE *)(this + 123) = 1; /*0x6eb42f*/
                }
                if ( !v7 /*0x6eb468*/
                  || (v8 = (int *)AbstractClass::IsTechnoType(v7), (v9 = v8) == 0)
                  || !*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(*v8 + 1016))(v8, 0)
                  || (v10 = *(_DWORD *)(this + 52)) != 0
                  && (v11 = *v9,
                      v12 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)v10 + 72))(v10, v13),
                      !(*(unsigned __int8 (__thiscall **)(int *, int))(v11 + 944))(v9, v12)) )
                {
                  (*(void (__thiscall **)(AbstractClass *))(a4->vtable0 + 44))(a4); /*0x6eb477*/
                }
              }
            }
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(this + 52) = 0; /*0x6eb3ba*/
      *(_BYTE *)(this + 117) = 1; /*0x6eb3c1*/
      *(_BYTE *)(this + 123) = 1; /*0x6eb3c4*/
    }
  }
}



// ==== 0x006EB490  TeamClass::AttackCoordinator  this=TeamClass  sig=csp ====
char __thiscall TeamClass::AttackCoordinator(TeamClass *this)
{
  TeamClass *v1; // edi
  FootClass *firstUnit; // esi
  int v3; // ebp
  FootClass *v4; // ebx
  int v5; // edi
  AbstractClass *focus; // ecx
  AbstractClass *v7; // edi
  Object *v8; // esi
  int (__thiscall **vtable0)(FootClass *, AbstractClass *, int); // esi
  int v10; // eax
  _DWORD *p_vtable0; // eax
  FootClass *v12; // esi
  char v13; // bl
  int v14; // eax
  int v15; // edi
  AbstractClass *target; // eax
  int v19; // [esp+14h] [ebp-10h] BYREF
  int v20; // [esp+18h] [ebp-Ch]
  _DWORD v21[2]; // [esp+1Ch] [ebp-8h] BYREF

  v1 = this; /*0x6eb497*/
  if ( !this->focus ) /*0x6eb49d*/
    this->focus = this->queuedFocus; /*0x6eb4a7*/
  firstUnit = this->firstUnit; /*0x6eb4aa*/
  v3 = -1; /*0x6eb4ad*/
  v4 = firstUnit; /*0x6eb4b2*/
  if ( firstUnit ) /*0x6eb4b4*/
  {
    do /*0x6eb514*/
    {
      v5 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 1532); /*0x6eb4c0*/
      if ( firstUnit->? /*0x6eb506*/
        && firstUnit->?
        && (dword_A8E7AC || !firstUnit->?)
        && (firstUnit->isTeamLeader || (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2)
        && v5 > v3 )
      {
        v4 = firstUnit; /*0x6eb508*/
        v3 = v5; /*0x6eb50a*/
      }
      firstUnit = firstUnit->nextTeamMember; /*0x6eb50c*/
    }
    while ( firstUnit ); /*0x6eb514*/
    v1 = this; /*0x6eb516*/
  }
  focus = v1->focus; /*0x6eb51a*/
  if ( focus
    && (*((int (__thiscall **)(AbstractClass *))focus->vtable0 + 11))(focus) == 11
    && v1->firstUnit
    && (*((int (__thiscall **)(FootClass *))v4->TechnoClass + 11))(v4) != 2 )
  {
    v7 = v1->focus; /*0x6eb53e*/
    if ( v7 )
      v8 = (*((int (__thiscall **)(AbstractClass *))v7->vtable0 + 11))(v7) == 11 ? (Object *)v7 : 0;
    else
      v8 = 0; /*0x6eb547*/
    v19 = 0; /*0x6eb567*/
    v20 = 0; /*0x6eb56b*/
    if ( Object::FindObjectCell(v8, &v19, 0) ) /*0x6eb56f*/
    {
      v19 = 0; /*0x6eb582*/
      v20 = 0; /*0x6eb586*/
      this->focus = (AbstractClass *)Object::FindObjectCell(v8, &v19, 0); /*0x6eb593*/
    }
    v1 = this; /*0x6eb596*/
  }
  if ( *(_DWORD *)&stru_A8EB00.?[416] % 8 == 4 ) /*0x6eb5ae*/
  {
    vtable0 = (int (__thiscall **)(FootClass *, AbstractClass *, int))v4->TechnoClass; /*0x6eb5b3*/
    v10 = (*((int (__thiscall **)(FootClass *, AbstractClass *, int))v4->TechnoClass + 185))(v4, v1->focus, 1); /*0x6eb5ba*/
    if ( vtable0[240](v4, v1->focus, v10) == 5 ) /*0x6eb5d0*/
      v1->unknown81 = 1; /*0x6eb5d2*/
  }
  p_vtable0 = &v1->focus->vtable0; /*0x6eb5d9*/
  if ( !p_vtable0 /*0x6eb605*/
    || (p_vtable0 = SessionClass::GetEntry((SessionClass *)v1->currentScript, v21),
        v12 = v1->firstUnit,
        v13 = 0,
        v19 = *p_vtable0,
        v20 = p_vtable0[1],
        !v12) )
  {
LABEL_72:
    v1->stepCompleted = 1; /*0x6eb85b*/
    return (char)p_vtable0; /*0x6eb85b*/
  }
  do /*0x6eb851*/
  {
    if ( !v12->? ) /*0x6eb60b*/
      goto LABEL_67; /*0x6eb60b*/
    if ( v12->? && (dword_A8E7AC || !v12->?) && !v12->isTeamLeader ) /*0x6eb63b*/
    {
      v14 = *SessionClass::GetEntry((SessionClass *)v1->currentScript, v21); /*0x6eb656*/
      if ( v14 == 54 || v14 == 53 ) /*0x6eb660*/
        v15 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6eb676*/
      else
        v15 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6eb668*/
      if ( ObjectClass::DistanceTo((ObjectClass *)v12, (int)this->spawnCell->mapCoords) <= v15 ) /*0x6eb68d*/
      {
        v12->isTeamLeader = 1; /*0x6eb6c5*/
      }
      else if ( !v12->movementDestination ) /*0x6eb68f*/
      {
        (*((void (__thiscall **)(FootClass *, int, _DWORD))v12->TechnoClass + 122))(v12, 2, 0); /*0x6eb6a1*/
        (*((void (__thiscall **)(FootClass *, _DWORD))v12->TechnoClass + 242))(v12, 0); /*0x6eb6ad*/
        (*((void (__thiscall **)(FootClass *, CellClass *, int))v12->TechnoClass + 288))(v12, this->spawnCell, 1); /*0x6eb6bd*/
      }
      v1 = this; /*0x6eb6cc*/
    }
    if ( v12->? /*0x6eb714*/
      && v12->?
      && (dword_A8E7AC || !v12->?)
      && (v12->isTeamLeader || (*((int (__thiscall **)(FootClass *))v12->TechnoClass + 11))(v12) == 2) )
    {
      if ( v19 == 15 /*0x6eb733*/
        && (*((int (__thiscall **)(FootClass *))v12->TechnoClass + 11))(v12) == 15
        && *((_BYTE *)v12[1].TechnoClass + 3774) )
      {
        (*((void (__thiscall **)(FootClass *, int, _DWORD))v12->TechnoClass + 122))(v12, 8, 0); /*0x6eb745*/
        (*((void (__thiscall **)(FootClass *, AbstractClass *))v12->TechnoClass + 242))(v12, v1->focus); /*0x6eb753*/
      }
      else if ( (*((int (__thiscall **)(FootClass *))v12->TechnoClass + 97))(v12) != 1 /*0x6eb7ad*/
             && (*((int (__thiscall **)(FootClass *))v12->TechnoClass + 97))(v12) != 7
             && (*((int (__thiscall **)(FootClass *))v12->TechnoClass + 97))(v12) != 8
             && (*((int (__thiscall **)(FootClass *))v12->TechnoClass + 97))(v12) != 17
             && ((*((int (__thiscall **)(FootClass *))v12->TechnoClass + 97))(v12) != 16
              || !(*((unsigned __int8 (__thiscall **)(FootClass *))v12->TechnoClass + 313))(v12)) )
      {
        (*((void (__thiscall **)(FootClass *, int))v12->TechnoClass + 157))(v12, 3); /*0x6eb7bd*/
        (*((void (__thiscall **)(FootClass *, int, _DWORD))v12->TechnoClass + 122))(v12, 1, 0); /*0x6eb7cb*/
        (*((void (__thiscall **)(FootClass *, _DWORD))v12->TechnoClass + 242))(v12, 0); /*0x6eb7d7*/
        (*((void (__thiscall **)(FootClass *, _DWORD, int))v12->TechnoClass + 288))(v12, 0, 1); /*0x6eb7e5*/
      }
      target = v12->?; /*0x6eb7eb*/
      if ( target != v1->focus && !target ) /*0x6eb7fa*/
        (*((void (__thiscall **)(FootClass *, AbstractClass *))v12->TechnoClass + 242))(v12, v1->focus); /*0x6eb801*/
      p_vtable0 = (_DWORD *)(*((int (__thiscall **)(FootClass *))v12->TechnoClass + 11))(v12); /*0x6eb80b*/
      if ( p_vtable0 != (_DWORD *)2 /*0x6eb82c*/
        || (p_vtable0 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _DWORD))v12->TechnoClass + 254))(v12, 0),
            !*p_vtable0)
        || (p_vtable0 = (_DWORD *)v12->?, (int)p_vtable0 > 0) )
      {
LABEL_69:
        v13 = 1; /*0x6eb847*/
      }
    }
    else
    {
LABEL_67:
      p_vtable0 = &v1->buildingType->AbstractClass; /*0x6eb830*/
      if ( *((_BYTE *)p_vtable0 + 176) ) /*0x6eb833*/
      {
        LOBYTE(p_vtable0) = v12->?; /*0x6eb83d*/
        if ( (_BYTE)p_vtable0 ) /*0x6eb845*/
          goto LABEL_69; /*0x6eb845*/
      }
    }
    v12 = v12->nextTeamMember; /*0x6eb849*/
  }
  while ( v12 ); /*0x6eb851*/
  if ( !v13 ) /*0x6eb859*/
    goto LABEL_72; /*0x6eb859*/
  return (char)p_vtable0; /*0x6eb862*/
}



// ==== 0x006EB870  HouseClass::EvaluateTarget  this=HouseClass  sig=csp ====
char __thiscall HouseClass::EvaluateTarget(HouseClass *this)
{
  char v2; // bl
  int repairStationsCount; // esi
  int v4; // eax
  int v5; // ebp
  int v6; // eax
  int v7; // ebp
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10; // ebp
  void *v11; // eax
  int v13; // [esp+Ch] [ebp-2Ch]
  int v14; // [esp+10h] [ebp-28h] BYREF
  __int16 v15[2]; // [esp+14h] [ebp-24h] BYREF
  int v16; // [esp+18h] [ebp-20h] BYREF
  int v17; // [esp+1Ch] [ebp-1Ch] BYREF
  int v18; // [esp+24h] [ebp-14h] BYREF
  _BYTE v19[12]; // [esp+2Ch] [ebp-Ch] BYREF

  v2 = 1; /*0x6eb878*/
  repairStationsCount = this->repairStationsCount; /*0x6eb87a*/
  if ( !repairStationsCount ) /*0x6eb87f*/
    goto LABEL_34; /*0x6eb87f*/
  do /*0x6ebab6*/
  {
    if ( *(_BYTE *)(repairStationsCount + 144) ) /*0x6eb88c*/
    {
      if ( *(_DWORD *)(repairStationsCount + 108) /*0x6eb8bc*/
        && (dword_A8E7AC || !*(_BYTE *)(repairStationsCount + 129))
        && !*(_BYTE *)(repairStationsCount + 1673) )
      {
        v4 = *SessionClass::GetEntry((SessionClass *)this->buildingType, &v17); /*0x6eb8d3*/
        if ( v4 == 54 || v4 == 53 ) /*0x6eb8dd*/
          v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6eb8f3*/
        else
          v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6eb8e5*/
        if ( ObjectClass::DistanceTo((ObjectClass *)repairStationsCount, this->relatedTagsCapacity) <= v5 ) /*0x6eb906*/
        {
          *(_BYTE *)(repairStationsCount + 1673) = 1; /*0x6eb93e*/
        }
        else if ( !*(_DWORD *)(repairStationsCount + 1444) ) /*0x6eb908*/
        {
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)repairStationsCount + 488))(repairStationsCount, 2, 0); /*0x6eb91a*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)repairStationsCount + 968))(repairStationsCount, 0); /*0x6eb926*/
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)repairStationsCount + 1152))( /*0x6eb936*/
            repairStationsCount,
            this->relatedTagsCapacity,
            1);
        }
      }
      if ( *(_BYTE *)(repairStationsCount + 144) /*0x6eb989*/
        && *(_DWORD *)(repairStationsCount + 108)
        && (dword_A8E7AC || !*(_BYTE *)(repairStationsCount + 129))
        && (*(_BYTE *)(repairStationsCount + 1673)
         || (*(int (__thiscall **)(int))(*(_DWORD *)repairStationsCount + 44))(repairStationsCount) == 2) )
      {
        v6 = *SessionClass::GetEntry((SessionClass *)this->buildingType, &v18); /*0x6eb99c*/
        if ( v6 == 54 || v6 == 53 ) /*0x6eb9a6*/
          v7 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6eb9bc*/
        else
          v7 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6eb9ae*/
        if ( ObjectClass::DistanceTo((ObjectClass *)repairStationsCount, this->relatedTagsCapacity) <= v7 /*0x6eb9e4*/
          || (*(int (__thiscall **)(int))(*(_DWORD *)repairStationsCount + 388))(repairStationsCount) == 11
          && *(_DWORD *)(repairStationsCount + 692) )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)repairStationsCount + 388))(repairStationsCount) != 11 ) /*0x6eba90*/
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)repairStationsCount + 488))(repairStationsCount, 5, 0); /*0x6eba9a*/
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)repairStationsCount + 1152))( /*0x6ebaa8*/
              repairStationsCount,
              0,
              1);
          }
        }
        else if ( !*(_DWORD *)(repairStationsCount + 1444) ) /*0x6eb9f2*/
        {
          v2 = 0; /*0x6eba08*/
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)repairStationsCount + 488))(repairStationsCount, 2, 0); /*0x6eba0a*/
          v8 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->relatedTagsCapacity + 72))( /*0x6eba1a*/
                           this->relatedTagsCapacity,
                           v19);
          LOWORD(v13) = *v8 / 256; /*0x6eba2d*/
          HIWORD(v13) = v8[1] / 256; /*0x6eba45*/
          v14 = v13; /*0x6eba52*/
          v9 = globalHelper_0DA020(&v16, &v14); /*0x6eba5a*/
          v10 = *(_DWORD *)repairStationsCount; /*0x6eba61*/
          *(_DWORD *)v15 = *v9; /*0x6eba67*/
          v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v15); /*0x6eba73*/
          (*(void (__thiscall **)(int, void *, int))(v10 + 1152))(repairStationsCount, v11, 1); /*0x6eba7b*/
        }
      }
    }
    repairStationsCount = *(_DWORD *)(repairStationsCount + 1496); /*0x6ebaae*/
  }
  while ( repairStationsCount ); /*0x6ebab6*/
  if ( v2 == 1 ) /*0x6ebac0*/
LABEL_34:
    BYTE1(this->bunkers[0]) = 0; /*0x6ebac2*/
  return v2; /*0x6ebac6*/
}



// ==== 0x006EBAD0  TeamClass::UpdateMembers  this=TeamClass  sig=csp ====
void __thiscall TeamClass::UpdateMembers(TeamClass *this)
{
  FootClass *firstUnit; // esi
  AbstractClass *queuedFocus; // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  AbstractClass *movementDestination; // edi
  bool v9; // bl
  bool v10; // al
  char v11; // [esp+30h] [ebp-36h]
  char v12; // [esp+31h] [ebp-35h]
  int v13; // [esp+32h] [ebp-34h]
  int v14; // [esp+36h] [ebp-30h]
  int v15; // [esp+3Ah] [ebp-2Ch] BYREF
  int v16; // [esp+42h] [ebp-24h] BYREF
  _DWORD v17[2]; // [esp+4Ah] [ebp-1Ch] BYREF
  _DWORD v18[2]; // [esp+52h] [ebp-14h] BYREF
  _BYTE v19[12]; // [esp+5Ah] [ebp-Ch] BYREF

  v11 = 1; /*0x6ebad7*/
  firstUnit = this->firstUnit; /*0x6ebadc*/
  v12 = 0; /*0x6ebadf*/
  if ( firstUnit ) /*0x6ebae6*/
  {
    if ( this->focus || (queuedFocus = this->queuedFocus, (this->focus = queuedFocus) != 0) ) /*0x6ebafb*/
    {
      if ( !TeamClass::ProcessMemberPositions(this) ) /*0x6ebb03*/
      {
        while ( 1 ) /*0x6ebb1a*/
        {
          if ( firstUnit->? && firstUnit->? && (dword_A8E7AC || !firstUnit->?) && !firstUnit->isTeamLeader ) /*0x6ebb4a*/
          {
            v4 = *SessionClass::GetEntry((SessionClass *)this->currentScript, &v15); /*0x6ebb61*/
            if ( v4 == 54 || v4 == 53 ) /*0x6ebb6b*/
              v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6ebb80*/
            else
              v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6ebb73*/
            if ( ObjectClass::DistanceTo((ObjectClass *)firstUnit, (int)this->spawnCell->mapCoords) <= v5 ) /*0x6ebb93*/
            {
              firstUnit->isTeamLeader = 1; /*0x6ebc8d*/
            }
            else
            {
              if ( !firstUnit->movementDestination ) /*0x6ebb99*/
              {
                (*((void (__thiscall **)(FootClass *, int, _DWORD))firstUnit->TechnoClass + 122))(firstUnit, 2, 0); /*0x6ebbab*/
                (*((void (__thiscall **)(FootClass *, _DWORD))firstUnit->TechnoClass + 242))(firstUnit, 0); /*0x6ebbb7*/
                (*((void (__thiscall **)(FootClass *, CellClass *, int))firstUnit->TechnoClass + 288))( /*0x6ebbc7*/
                  firstUnit,
                  this->spawnCell,
                  1);
              }
              v11 = 0; /*0x6ebbcd*/
            }
          }
          if ( (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) == 16 || firstUnit->? == 16 ) /*0x6ebbeb*/
            v11 = 0; /*0x6ebbed*/
          if ( !firstUnit->? /*0x6ebc5c*/
            || !firstUnit->?
            || !dword_A8E7AC && firstUnit->?
            || !firstUnit->isTeamLeader
            && (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) != 2
            || (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) == 16
            || firstUnit->? == 16 )
          {
            goto LABEL_80; /*0x6ebc5c*/
          }
          v6 = *SessionClass::GetEntry((SessionClass *)this->currentScript, &v16); /*0x6ebc6f*/
          if ( v6 == 54 || v6 == 53 ) /*0x6ebc79*/
            v13 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6ebca4*/
          else
            v13 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6ebc87*/
          if ( (*((unsigned __int8 (__thiscall **)(FootClass *))firstUnit->TechnoClass + 21))(firstUnit) ) /*0x6ebcac*/
            v13 *= 2; /*0x6ebcba*/
          v12 = 1; /*0x6ebcc4*/
          v14 = ObjectClass::DistanceTo((ObjectClass *)firstUnit, (int)this->focus); /*0x6ebcd2*/
          if ( v14 <= v13 /*0x6ebcfc*/
            && ((*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 114))(firstUnit) >= 0
             || *ScriptClass::GetNextAction(this->currentScript, v17) == 3) )
          {
            if ( (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) != 2 ) /*0x6ebd0c*/
              break; /*0x6ebd0c*/
            if ( (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 116))(firstUnit) <= 0 ) /*0x6ebd1a*/
              break; /*0x6ebd1a*/
            v7 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))firstUnit->TechnoClass + 18))(firstUnit, v19); /*0x6ebd25*/
            if ( Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v7) == (CellClass *)this->focus /*0x6ebd48*/
              || *ScriptClass::GetNextAction(this->currentScript, v18) == 3 )
            {
              break; /*0x6ebd48*/
            }
          }
          if ( !BYTE1(this->buildingType[1].TeamTypeClass_field_38) || !firstUnit->? ) /*0x6ebde9*/
            goto LABEL_55; /*0x6ebdf1*/
          if ( firstUnit->FootClass_field_bool_68E ) /*0x6ebdf3*/
          {
            (*((void (__thiscall **)(FootClass *, _DWORD))firstUnit->TechnoClass + 242))(firstUnit, 0); /*0x6ebe07*/
LABEL_55:
            if ( (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) != 2 ) /*0x6ebe1a*/
            {
              (*((void (__thiscall **)(FootClass *, int, _DWORD))firstUnit->TechnoClass + 122))(firstUnit, 2, 0); /*0x6ebe24*/
              if ( (*((unsigned __int8 (__thiscall **)(FootClass *))firstUnit->TechnoClass + 128))(firstUnit) ) /*0x6ebe2e*/
                (*((void (__thiscall **)(FootClass *))firstUnit->TechnoClass + 123))(firstUnit); /*0x6ebe3c*/
            }
            if ( !firstUnit->movementDestination ) /*0x6ebe42*/
              (*((void (__thiscall **)(FootClass *, AbstractClass *, int))firstUnit->TechnoClass + 288))( /*0x6ebe56*/
                firstUnit,
                this->focus,
                1);
            movementDestination = firstUnit->movementDestination; /*0x6ebe5c*/
            if ( movementDestination != this->focus /*0x6ebe9a*/
              && (*(_BYTE *)((*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 3434)
               || movementDestination != this->focus
               && (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2
               && movementDestination == (AbstractClass *)(*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass
                                                           + 111))(firstUnit)) )
            {
              (*((void (__thiscall **)(FootClass *, AbstractClass *, int))firstUnit->TechnoClass + 288))( /*0x6ebea6*/
                firstUnit,
                this->focus,
                1);
            }
            v11 = 0; /*0x6ebeac*/
LABEL_67:
            v9 = (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2 /*0x6ebecf*/
              && firstUnit->movementDestination == (AbstractClass *)(*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass
                                                                     + 111))(firstUnit);
            v10 = (firstUnit->? & 1) != 0 /*0x6ebefb*/
               && *(_BYTE *)((*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 3434)
               && v14 < v13;
            if ( firstUnit->movementDestination && !v9 && !v10 ) /*0x6ebf11*/
              v11 = 0; /*0x6ebf13*/
          }
LABEL_80:
          firstUnit = firstUnit->nextTeamMember; /*0x6ebf17*/
          if ( !firstUnit ) /*0x6ebf1f*/
          {
            if ( v12 && v11 ) /*0x6ebf35*/
            {
              if ( this->TeamClass_field_7F ) /*0x6ebf37*/
                this->stepCompleted = 1; /*0x6ebf3e*/
            }
            return; /*0x6ebf3e*/
          }
        }
        if ( (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) == 2 ) /*0x6ebd5b*/
        {
          if ( !firstUnit->movementDestination ) /*0x6ebd61*/
            goto LABEL_87; /*0x6ebd61*/
          if ( ObjectClass::DistanceTo((ObjectClass *)firstUnit, (int)firstUnit->movementDestination) <= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5912) ) /*0x6ebd7f*/
          {
            if ( !firstUnit->locomotor[0] ) /*0x6ebd85*/
              WinAPI::Wrapper(-2147467261); /*0x6ebd94*/
            if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)firstUnit->locomotor[0] + 16))(firstUnit->locomotor[0]) ) /*0x6ebda2*/
            {
LABEL_87:
              if ( !firstUnit->? ) /*0x6ebdad*/
              {
                (*((void (__thiscall **)(FootClass *, _DWORD, int))firstUnit->TechnoClass + 288))(firstUnit, 0, 1); /*0x6ebdc3*/
                (*((void (__thiscall **)(FootClass *, _DWORD, int))firstUnit->TechnoClass + 289))(firstUnit, 0, 1); /*0x6ebdd1*/
              }
            }
          }
        }
        goto LABEL_67; /*0x6ebdd7*/
      }
    }
  }
}



// ==== 0x006EBF50  TeamClass::ProcessMemberPositions  this=TeamClass  sig=csp ====
char __thiscall TeamClass::ProcessMemberPositions(TeamClass *this)
{
  double v1; // st7
  char result; // al
  FootClass *firstUnit; // esi
  int v5; // eax
  int v6; // ebp
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  char v14; // [esp+23h] [ebp-2Dh]
  _DWORD v15[3]; // [esp+24h] [ebp-2Ch] BYREF
  int v16; // [esp+30h] [ebp-20h]
  int v17; // [esp+34h] [ebp-1Ch]
  _BYTE v18[12]; // [esp+38h] [ebp-18h] BYREF
  _BYTE v19[12]; // [esp+44h] [ebp-Ch] BYREF

  result = 0; /*0x6ebf5d*/
  firstUnit = this->firstUnit; /*0x6ebf63*/
  v14 = 0; /*0x6ebf69*/
  if ( this->visibilityFlags ) /*0x6ebf5f*/
  {
    if ( firstUnit ) /*0x6ebf79*/
    {
      do /*0x6ec10e*/
      {
        if ( firstUnit->? /*0x6ebfc3*/
          && firstUnit->?
          && (dword_A8E7AC || !firstUnit->?)
          && (firstUnit->isTeamLeader
           || (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2) )
        {
          v5 = *SessionClass::GetEntry((SessionClass *)this->currentScript, v15); /*0x6ebfd6*/
          if ( v5 == 54 || v5 == 53 ) /*0x6ebfe0*/
            v6 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6ebff5*/
          else
            v6 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6ebfe8*/
          if ( (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2 ) /*0x6ec005*/
            v6 *= 3; /*0x6ec007*/
          if ( HIBYTE(this->buildingType[1].TeamTypeClass_field_30) /*0x6ec01c*/
            && !(*((unsigned __int8 (__thiscall **)(FootClass *))firstUnit->TechnoClass + 312))(firstUnit) )
          {
            v6 /= 3; /*0x6ec034*/
          }
          v7 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->unknown38 + 72))(this->unknown38, v18); /*0x6ec045*/
          v8 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))firstUnit->TechnoClass + 18))(firstUnit, v19); /*0x6ec04e*/
          v9 = *v8 - *v7; /*0x6ec055*/
          v10 = v8[1]; /*0x6ec057*/
          v11 = v8[2]; /*0x6ec05a*/
          v15[2] = v9; /*0x6ec05d*/
          v12 = v11 - v7[2]; /*0x6ec06c*/
          v16 = v10 - v7[1]; /*0x6ec06e*/
          v17 = v12; /*0x6ec072*/
          Math::Sqrt((double)v9 * (double)v9 + (double)v16 * (double)v16 + (double)v12 * (double)v12); /*0x6ec09b*/
          LOWORD(v13) = Math::RoundToInt(v1); /*0x6ec0a3*/
          if ( v13 <= v6 ) /*0x6ec0aa*/
          {
            if ( (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) != 5 ) /*0x6ec0e8*/
            {
              (*((void (__thiscall **)(FootClass *, int, _DWORD))firstUnit->TechnoClass + 122))(firstUnit, 5, 0); /*0x6ec0f2*/
              (*((void (__thiscall **)(FootClass *, _DWORD, int))firstUnit->TechnoClass + 288))(firstUnit, 0, 1); /*0x6ec100*/
            }
          }
          else
          {
            if ( !firstUnit->movementDestination ) /*0x6ec0ac*/
            {
              (*((void (__thiscall **)(FootClass *, int, _DWORD))firstUnit->TechnoClass + 122))(firstUnit, 2, 0); /*0x6ec0be*/
              (*((void (__thiscall **)(FootClass *, int, int))firstUnit->TechnoClass + 288))( /*0x6ec0ce*/
                firstUnit,
                this->unknown38,
                1);
            }
            v14 = 1; /*0x6ec0d4*/
          }
        }
        firstUnit = firstUnit->nextTeamMember; /*0x6ec106*/
      }
      while ( firstUnit ); /*0x6ec10e*/
      result = v14; /*0x6ec114*/
    }
    this->visibilityFlags = result; /*0x6ec119*/
  }
  return result; /*0x6ebf6f*/
}



// ==== 0x006EC130  ObjectClass::Get  this=ObjectClass  sig=csp ====
char __thiscall ObjectClass::Get(ObjectClass *this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v6; // [esp+8h] [ebp-8h] BYREF

  if ( !a2 /*0x6ec173*/
    || !*(_BYTE *)(a2 + 144)
    || !*(_DWORD *)(a2 + 108)
    || !dword_A8E7AC && *(_BYTE *)(a2 + 129)
    || *(_BYTE *)(a2 + 1673) )
  {
    return 0; /*0x6ec17b*/
  }
  v3 = *SessionClass::GetEntry((SessionClass *)this->owningHouseIndex, &v6); /*0x6ec18f*/
  if ( v3 == 54 || v3 == 53 ) /*0x6ec199*/
    v4 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6ec1af*/
  else
    v4 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6ec1a1*/
  if ( ObjectClass::DistanceTo((ObjectClass *)a2, (int)this->attachedTag) <= v4 ) /*0x6ec1c3*/
  {
    *(_BYTE *)(a2 + 1673) = 1; /*0x6ec203*/
    return 0; /*0x6ec20b*/
  }
  if ( !*(_DWORD *)(a2 + 1444) ) /*0x6ec1c5*/
  {
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 488))(a2, 2, 0); /*0x6ec1d7*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 968))(a2, 0); /*0x6ec1e3*/
    (*(void (__thiscall **)(int, TagClass *, int))(*(_DWORD *)a2 + 1152))(a2, this->attachedTag, 1); /*0x6ec1f3*/
  }
  return 1; /*0x6ec1f9*/
}



// ==== 0x006EC250  globalHelper_0EC250  this=-  sig=ida-proto ====
int __fastcall sub_6EC250(int a1, int a2)
{
  int result; // eax
  int i; // ebp
  int v4; // esi
  int j; // eax
  wchar_t *v6; // edi
  int v7; // eax
  int v10; // [esp+10h] [ebp-8h]

  result = dword_8B40F8; /*0x6ec253*/
  for ( i = 0; i < dword_8B40F8; ++i ) /*0x6ec265*/
  {
    v4 = *((_DWORD *)dword_8B40EC + i); /*0x6ec275*/
    if ( v4 && a2 == *(_DWORD *)(v4 + 44) && *(_DWORD *)(*(_DWORD *)(v4 + 36) + 180) < a1 ) /*0x6ec294*/
    {
      for ( j = *(_DWORD *)(v4 + 84); j; j = *(_DWORD *)(v4 + 84) ) /*0x6ec29b*/
        TeamClass::LiberateMember_Start(v4, j, 0xFFFFFFFF, 0); /*0x6ec2a4*/
      *(_BYTE *)(v4 + 126) = 1; /*0x6ec2b0*/
      *(_BYTE *)(v4 + 125) = 1; /*0x6ec2b3*/
      v6 = dword_A8ED84; /*0x6ec2bc*/
      v7 = Math::RoundToInt(*(double *)&dword_8871E0[1].AITriggerFailureWeightDelta * 900.0); /*0x6ec2ce*/
      *(_BYTE *)(v4 + 131) = 1; /*0x6ec2da*/
      *(_DWORD *)(v4 + 100) = v6; /*0x6ec2e0*/
      *(_DWORD *)(v4 + 104) = v10; /*0x6ec2e2*/
      *(_DWORD *)(v4 + 108) = v7; /*0x6ec2e5*/
    }
    result = dword_8B40F8; /*0x6ec2e8*/
  }
  return result; /*0x6ec2f9*/
}



// ==== 0x006EC300  TechnoClass::IsWaypointHidden  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsWaypointHidden(TechnoClass *this)
{
  int result; // eax
  int *Entry; // ecx
  int v4; // ecx
  __int16 *Waypoint_Location; // eax
  _DWORD v6[2]; // [esp+4h] [ebp-8h] BYREF

  LOBYTE(result) = HIBYTE(this->?) /*0x6ec354*/
                && (result = SessionClass::SetField((SessionClass *)this->?), (_BYTE)result)
                && (Entry = SessionClass::GetEntry((SessionClass *)this->?, v6),
                    result = *Entry,
                    v4 = Entry[1],
                    result == 3)
                && (Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v6, v4),
                    result = LayerClass::IsWithinUsableArea(
                               (LayerClass *)&stru_87F5F0.__pad_58[416],
                               Waypoint_Location,
                               1),
                    !(_BYTE)result);
  return result; /*0x6ec356*/
}



// ==== 0x006EC370  AnimTypeClass::method_6EC370  this=AnimTypeClass  sig=csp ====
char __thiscall sub_6EC370(AnimTypeClass *this)
{
  int v1; // ecx
  char result; // al

  v1 = *(_DWORD *)&this->?[23]; /*0x6ec370*/
  result = 1; /*0x6ec373*/
  if ( v1 ) /*0x6ec377*/
  {
    while ( *(_BYTE *)(v1 + 981) ) /*0x6ec381*/
    {
      v1 = *(_DWORD *)(v1 + 1496); /*0x6ec383*/
      if ( !v1 ) /*0x6ec38b*/
        return result; /*0x6ec38b*/
    }
    return 0; /*0x6ec38e*/
  }
  return result; /*0x6ec38d*/
}



// ==== 0x006EC3A0  TeamClass::WakeUpAllMembers  this=TeamClass  sig=csp ====
char __thiscall TeamClass::WakeUpAllMembers(TeamClass *this)
{
  char result; // al
  FootClass *i; // esi

  result = TeamClass::SelectMember((int)this, 0); /*0x6ec3a5*/
  for ( i = this->firstUnit; i; i = i->nextTeamMember ) /*0x6ec3af*/
  {
    result = (*((int (__thiscall **)(FootClass *, _DWORD))i->TechnoClass + 242))(i, 0); /*0x6ec3b7*/
    i->unknownBool688 = 1; /*0x6ec3bd*/
  }
  return result; /*0x6ec3ce*/
}



// ==== 0x006EC3D0  HouseClass::FindBestBuildingToRepair  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::FindBestBuildingToRepair(HouseClass *this)
{
  _DWORD *repairStationsCount; // esi
  int v2; // ebx
  _DWORD *v3; // ebp
  int v4; // edi

  repairStationsCount = (_DWORD *)this->repairStationsCount; /*0x6ec3d3*/
  v2 = -1; /*0x6ec3d6*/
  v3 = repairStationsCount; /*0x6ec3d9*/
  if ( !repairStationsCount ) /*0x6ec3dd*/
    return 0; /*0x6ec447*/
  do /*0x6ec43e*/
  {
    v4 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*repairStationsCount + 132))(repairStationsCount) + 1532); /*0x6ec3ea*/
    if ( *((_BYTE *)repairStationsCount + 144) /*0x6ec430*/
      && repairStationsCount[27]
      && (dword_A8E7AC || !*((_BYTE *)repairStationsCount + 129))
      && (*((_BYTE *)repairStationsCount + 1673)
       || (*(int (__thiscall **)(_DWORD *))(*repairStationsCount + 44))(repairStationsCount) == 2)
      && v4 > v2 )
    {
      v3 = repairStationsCount; /*0x6ec432*/
      v2 = v4; /*0x6ec434*/
    }
    repairStationsCount = (_DWORD *)repairStationsCount[374]; /*0x6ec436*/
  }
  while ( repairStationsCount ); /*0x6ec43e*/
  return v3; /*0x6ec443*/
}



// ==== 0x006EC450  TeamClass::SaveLoad_Prefix  this=TeamClass  sig=csp ====
int __stdcall TeamClass::SaveLoad_Prefix(TeamClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6ec45b*/
  if ( result >= 0 ) /*0x6ec462*/
  {
    if ( this ) /*0x6ec46a*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x6ec473*/
      __4type_info_AAEAAV0_ABV0__Z(this->suspendTimer, (int)&a2); /*0x6ec480*/
      this->AbstractClass = &TeamClass::`vftable'; /*0x6ec485*/
      this->? = &TeamClass::`vftable'; /*0x6ec48b*/
      this->? = &TeamClass::`vftable'; /*0x6ec492*/
      this->? = &TeamClass::`vftable'; /*0x6ec499*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->buildingType); /*0x6ec4a9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->currentScript); /*0x6ec4b7*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->owner); /*0x6ec4c5*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->tag); /*0x6ec4d3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->firstUnit); /*0x6ec4e1*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->unknown38); /*0x6ec4ef*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->focus); /*0x6ec4fd*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->spawnCell); /*0x6ec50b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->queuedFocus); /*0x6ec519*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->target); /*0x6ec527*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->unknown44); /*0x6ec535*/
    return 0; /*0x6ec53a*/
  }
  return result; /*0x6ec53c*/
}



// ==== 0x006EC540  TeamClass::SaveLoad_Prefix_0  this=TeamClass  sig=csp ====
int __stdcall TeamClass::SaveLoad_Prefix_0(TeamClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6ec54f*/
  if ( result >= 0 ) /*0x6ec556*/
    return 0; /*0x6ec558*/
  return result; /*0x6ec55a*/
}



// ==== 0x006EC560  TeamClass::ddtor  this=TeamClass  sig=csp ====
int __stdcall TeamClass::ddtor(TeamClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6ec566*/
    return -2147467261; /*0x6ec568*/
  *a2 = 237448655; /*0x6ec576*/
  a2[1] = 298949647; /*0x6ec57e*/
  a2[2] = -1610610249; /*0x6ec587*/
  a2[3] = unk_7E976C; /*0x6ec590*/
  return 0; /*0x6ec56d*/
}



// ==== 0x006EC5A0  TeamClass::PowerDrainUpdate  this=TeamClass  sig=csp ====
int __thiscall TeamClass::PowerDrainUpdate(TeamClass *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int unknown38; // eax
  int v6; // eax
  FootClass *firstUnit; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  TagClass *tag; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  int v25; // edx

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x6ec5a9*/
  v3 = (*((int (__stdcall **)(void **))this->buildingType->? + 4))(&this->buildingType->?); /*0x6ec5b7*/
  Power::TimerProcess(v3); /*0x6ec5bd*/
  v4 = (*((int (__stdcall **)(void **))this->owner->? + 4))(&this->owner->?); /*0x6ec5cb*/
  Power::TimerProcess(v4); /*0x6ec5d1*/
  unknown38 = this->unknown38; /*0x6ec5d6*/
  if ( unknown38 ) /*0x6ec5db*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(unknown38 + 4) + 16))(unknown38 + 4); /*0x6ec5e4*/
    Power::TimerProcess(v6); /*0x6ec5ea*/
  }
  Power::TimerProcess(this->totalObjects); /*0x6ec5f5*/
  Power::TimerProcess(this->totalThreatValue); /*0x6ec600*/
  firstUnit = this->firstUnit; /*0x6ec605*/
  if ( firstUnit ) /*0x6ec60a*/
  {
    v8 = (*((int (__stdcall **)(void **))firstUnit->? + 4))(&firstUnit->?); /*0x6ec613*/
    Power::TimerProcess(v8); /*0x6ec619*/
  }
  v9 = this->guardAreaTimer[0]; /*0x6ec61e*/
  v10 = this->guardAreaTimer[2]; /*0x6ec621*/
  if ( v9 != -1 ) /*0x6ec627*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 >= v10 ) /*0x6ec633*/
      v10 = 0; /*0x6ec639*/
    else
      v10 -= *(_DWORD *)&stru_A8EB00.?[416] - v9; /*0x6ec635*/
  }
  Power::TimerProcess(v10); /*0x6ec63e*/
  v11 = this->suspendTimer[0]; /*0x6ec643*/
  v12 = this->suspendTimer[2]; /*0x6ec646*/
  if ( v11 != -1 ) /*0x6ec64c*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v11 >= v12 ) /*0x6ec658*/
      v12 = 0; /*0x6ec65e*/
    else
      v12 -= *(_DWORD *)&stru_A8EB00.?[416] - v11; /*0x6ec65a*/
  }
  Power::TimerProcess(v12); /*0x6ec663*/
  tag = this->tag; /*0x6ec668*/
  if ( tag ) /*0x6ec66d*/
  {
    v14 = (*((int (__stdcall **)(void **))tag->? + 4))(&tag->?); /*0x6ec676*/
    tag = (TagClass *)Power::TimerProcess(v14); /*0x6ec67c*/
  }
  LOBYTE(tag) = this->unknown77; /*0x6ec681*/
  Power::FlagProcess((Power *)a2, (int)tag); /*0x6ec687*/
  LOBYTE(v15) = this->spawnStatus; /*0x6ec68c*/
  Power::FlagProcess((Power *)a2, v15); /*0x6ec692*/
  LOBYTE(v16) = this->unknown79; /*0x6ec697*/
  v17 = Power::FlagProcess((Power *)a2, v16); /*0x6ec69d*/
  LOBYTE(v17) = this->TeamClass_field_7A; /*0x6ec6a2*/
  Power::FlagProcess((Power *)a2, v17); /*0x6ec6a8*/
  LOBYTE(v18) = this->TeamClass_field_7B; /*0x6ec6ad*/
  Power::FlagProcess((Power *)a2, v18); /*0x6ec6b3*/
  LOBYTE(v19) = this->visibilityFlags; /*0x6ec6b8*/
  v20 = Power::FlagProcess((Power *)a2, v19); /*0x6ec6be*/
  LOBYTE(v20) = this->needsToDisappear; /*0x6ec6c3*/
  Power::FlagProcess((Power *)a2, v20); /*0x6ec6c9*/
  LOBYTE(v21) = this->TeamClass_field_7E; /*0x6ec6ce*/
  Power::FlagProcess((Power *)a2, v21); /*0x6ec6d4*/
  LOBYTE(v22) = this->TeamClass_field_7F; /*0x6ec6d9*/
  v23 = Power::FlagProcess((Power *)a2, v22); /*0x6ec6df*/
  LOBYTE(v23) = this->stepCompleted; /*0x6ec6e4*/
  Power::FlagProcess((Power *)a2, v23); /*0x6ec6ed*/
  LOBYTE(v24) = this->unknown82; /*0x6ec6f2*/
  Power::FlagProcess((Power *)a2, v24); /*0x6ec6fb*/
  LOBYTE(v25) = this->isSuspended; /*0x6ec700*/
  Power::FlagProcess((Power *)a2, v25); /*0x6ec709*/
  return Checksummer::Add_Buffer((Checksummer *)a2, (unsigned __int8 *)this->countObjects, 24); /*0x6ec71e*/
}



// ==== 0x006EC7D0  TeamClass::MoveTeamToWaypoint  this=TeamClass  sig=csp ====
void __thiscall TeamClass::MoveTeamToWaypoint(TeamClass *this, int a2, int a3)
{
  TeamClass *v3; // ebp
  FootClass *firstUnit; // esi
  int v5; // ebx
  FootClass *v6; // edi
  int v7; // ebp
  void *v8; // eax
  _DWORD *Entry; // eax
  __int16 *Waypoint_Location; // eax
  void *vtable0; // ebx
  void *v12; // eax
  int (__thiscall **v13)(FootClass *); // eax
  int v14; // eax
  void *v15; // [esp+Ch] [ebp-10h]
  _DWORD v16[2]; // [esp+14h] [ebp-8h] BYREF

  v3 = this; /*0x6ec7d8*/
  v16[0] = this; /*0x6ec7dc*/
  if ( (_BYTE)a3 ) /*0x6ec7e0*/
  {
    firstUnit = this->firstUnit; /*0x6ec7e8*/
    v5 = -1; /*0x6ec7eb*/
    v6 = firstUnit; /*0x6ec7ef*/
    if ( firstUnit ) /*0x6ec7f3*/
    {
      do /*0x6ec853*/
      {
        v7 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 1532); /*0x6ec7ff*/
        if ( firstUnit->? /*0x6ec845*/
          && firstUnit->?
          && (dword_A8E7AC || !firstUnit->?)
          && (firstUnit->isTeamLeader
           || (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2)
          && v7 > v5 )
        {
          v6 = firstUnit; /*0x6ec847*/
          v5 = v7; /*0x6ec849*/
        }
        firstUnit = firstUnit->nextTeamMember; /*0x6ec84b*/
      }
      while ( firstUnit ); /*0x6ec853*/
      v3 = (TeamClass *)v16[0]; /*0x6ec855*/
    }
    a3 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a2, *(_DWORD *)(a2 + 4)); /*0x6ec87d*/
    v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x6ec881*/
    TeamClass::SelectMember((int)v3, (int)v8); /*0x6ec889*/
    if ( !v3->TeamClass_field_7F /*0x6ec8d3*/
      || !(unsigned __int8)SessionClass::SetField((SessionClass *)v3->currentScript)
      || (Entry = SessionClass::GetEntry((SessionClass *)v3->currentScript, v16), *Entry != 3)
      || (Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a2, Entry[1]),
          (unsigned __int8)LayerClass::IsWithinUsableArea(
                             (LayerClass *)&stru_87F5F0.__pad_58[416],
                             Waypoint_Location,
                             1)) )
    {
      vtable0 = v6->TechnoClass; /*0x6ec8dc*/
      v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x6ec8f0*/
      if ( (*((int (__thiscall **)(FootClass *, void *, int, int, _DWORD, _DWORD))vtable0 + 107))(v6, v12, -1, -1, 0, 0) ) /*0x6ec8f8*/
      {
        v13 = (int (__thiscall **)(FootClass *))v6->TechnoClass; /*0x6ec916*/
        a2 = 0; /*0x6ec91e*/
        v14 = v13[33](v6); /*0x6ec928*/
        a3 = *LayerClass::Pathfinding_Find( /*0x6ec94b*/
                (Type *)&stru_87F5F0.__pad_58[416],
                (int)&a3,
                v16,
                (__int16 *)&a3,
                *(_DWORD *)(v14 + 1660),
                -1,
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
      }
    }
    if ( a3 == g_BuildingLoadQueue_Array.?[1] ) /*0x6ec95e*/
    {
      TeamClass::SelectMember((int)v3, 0); /*0x6ec984*/
    }
    else
    {
      v15 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x6ec97d*/
      TeamClass::SelectMember((int)v3, (int)v15); /*0x6ec97e*/
    }
  }
  TeamClass::UpdateMembers(v3); /*0x6ec98b*/
}



// ==== 0x006EC9A0  TeamClass::SelectWaypointTarget  this=TeamClass  sig=csp ====
char __thiscall TeamClass::SelectWaypointTarget(TeamClass *this, int a2, char a3)
{
  void *CellFromArray; // eax
  int v5; // esi
  char v6; // al
  int ObjectCell; // eax
  int *firstUnit; // esi
  char result; // al
  _DWORD v10[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a3 ) /*0x6ec9ad*/
  {
    CellFromArray = ScenarioClass::GetCellFromArray((ScenarioClass *)dword_A8B230, *(_DWORD *)(a2 + 4)); /*0x6ec9bd*/
    v5 = (int)CellFromArray; /*0x6ec9c2*/
    if ( CellFromArray ) /*0x6ec9c6*/
    {
      if ( (*(int (__thiscall **)(void *))(*(_DWORD *)CellFromArray + 44))(CellFromArray) == 11 ) /*0x6ec9d2*/
      {
        v6 = BYTE1(*(_DWORD *)(v5 + 320)) & 1; /*0x6ec9e1*/
        v10[0] = 0; /*0x6ec9e3*/
        v10[1] = 0; /*0x6ec9ef*/
        ObjectCell = Object::FindObjectCell((Object *)v5, v10, v6); /*0x6ec9f7*/
        if ( ObjectCell ) /*0x6ec9fe*/
          v5 = ObjectCell; /*0x6eca00*/
      }
    }
    TeamClass::SelectMember((int)this, v5); /*0x6eca05*/
  }
  if ( this->queuedFocus && (firstUnit = (int *)this->firstUnit) != 0 ) /*0x6eca16*/
  {
    while ( *(int *)((*(int (__thiscall **)(int *))(*firstUnit + 132))(firstUnit) + 1668) > 0 && firstUnit[191] <= 0 ) /*0x6eca34*/
    {
      firstUnit = (int *)firstUnit[374]; /*0x6eca36*/
      if ( !firstUnit ) /*0x6eca3e*/
        goto LABEL_12; /*0x6eca3e*/
    }
    return TeamClass::AttackCoordinator(this); /*0x6eca5a*/
  }
  else
  {
LABEL_12:
    result = TeamClass::SelectMember((int)this, 0); /*0x6eca40*/
    this->stepCompleted = 1; /*0x6eca49*/
  }
  return result; /*0x6eca50*/
}



// ==== 0x006ECA70  TeamClass::SelectAttackTarget  this=TeamClass  sig=csp ====
char __thiscall TeamClass::SelectAttackTarget(TeamClass *this, int a2, char a3)
{
  Object *CellFromArray; // eax
  Object *v5; // esi
  char v6; // al
  int ObjectCell; // eax
  int v8; // esi
  int *firstUnit; // esi
  char result; // al
  _DWORD v11[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a3 ) /*0x6eca7d*/
  {
    CellFromArray = (Object *)ScenarioClass::GetCellFromArray((ScenarioClass *)dword_A8B230, *(_DWORD *)(a2 + 4)); /*0x6eca8d*/
    v5 = CellFromArray; /*0x6eca92*/
    if ( !CellFromArray /*0x6ecadc*/
      || (*(int (__thiscall **)(Object *))(*(_DWORD *)CellFromArray->__pad_0 + 44))(CellFromArray) != 11
      || (v6 = BYTE1(*(_DWORD *)v5->__pad_140) & 1,
          v11[0] = 0,
          v11[1] = 0,
          ObjectCell = Object::FindObjectCell(v5, v11, v6),
          (v8 = ObjectCell) == 0)
      || (*(int (__thiscall **)(int))(*(_DWORD *)ObjectCell + 44))(ObjectCell) != 6 )
    {
      v8 = 0; /*0x6ecade*/
    }
    TeamClass::SelectMember((int)this, v8); /*0x6ecae3*/
  }
  if ( this->queuedFocus && (firstUnit = (int *)this->firstUnit) != 0 ) /*0x6ecaf4*/
  {
    while ( *(int *)((*(int (__thiscall **)(int *))(*firstUnit + 132))(firstUnit) + 1668) > 0 && firstUnit[191] <= 0 ) /*0x6ecb12*/
    {
      firstUnit = (int *)firstUnit[374]; /*0x6ecb14*/
      if ( !firstUnit ) /*0x6ecb1c*/
        goto LABEL_13; /*0x6ecb1c*/
    }
    return TeamClass::AttackCoordinator(this); /*0x6ecb38*/
  }
  else
  {
LABEL_13:
    result = TeamClass::SelectMember((int)this, 0); /*0x6ecb1e*/
    this->stepCompleted = 1; /*0x6ecb27*/
  }
  return result; /*0x6ecb2e*/
}



// ==== 0x006ECCE0  TeamClass::MoveToCellAndAttack  this=TeamClass  sig=csp ====
void __thiscall TeamClass::MoveToCellAndAttack(TeamClass *this, int a2, char a3)
{
  TeamClass *v3; // edi
  void *CellFromArray; // esi
  _DWORD *Entry; // eax
  int v6; // eax
  FootClass *firstUnit; // esi
  int v8; // ebp
  FootClass *v9; // ebx
  int v10; // edi
  void *vtable0; // edx
  int v12; // eax
  AbstractClass *focus; // eax
  int v15; // [esp+10h] [ebp-14h] BYREF
  _DWORD v16[3]; // [esp+18h] [ebp-Ch] BYREF
  int v17; // [esp+28h] [ebp+4h]

  v3 = this; /*0x6eccea*/
  CellFromArray = ScenarioClass::GetCellFromArray((ScenarioClass *)dword_A8B230, *(_DWORD *)(a2 + 4)); /*0x6eccff*/
  v17 = (int)CellFromArray; /*0x6ecd07*/
  if ( a3 ) /*0x6ecd0b*/
    TeamClass::SelectMember((int)v3, (int)CellFromArray); /*0x6ecd10*/
  if ( !v3->focus ) /*0x6ecd15*/
  {
    Entry = SessionClass::GetEntry((SessionClass *)v3->currentScript, &v15); /*0x6ecd24*/
    v16[0] = *Entry; /*0x6ecd2b*/
    if ( Entry[1] < 0x2BEu ) /*0x6ecd36*/
      TeamClass::SelectMember((int)v3, (int)CellFromArray); /*0x6ecd3b*/
  }
  LOWORD(v6) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4432) * 900.0); /*0x6ecd52*/
  if ( !(*(_DWORD *)&stru_A8EB00.?[416] % v6) ) /*0x6ecd5f*/
  {
    firstUnit = v3->firstUnit; /*0x6ecd69*/
    v8 = -1; /*0x6ecd6d*/
    v9 = firstUnit; /*0x6ecd70*/
    if ( firstUnit ) /*0x6ecd74*/
    {
      do /*0x6ecdd4*/
      {
        v10 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 1532); /*0x6ecd80*/
        if ( firstUnit->? /*0x6ecdc6*/
          && firstUnit->?
          && (dword_A8E7AC || !firstUnit->?)
          && (firstUnit->isTeamLeader
           || (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2)
          && v10 > v8 )
        {
          v9 = firstUnit; /*0x6ecdc8*/
          v8 = v10; /*0x6ecdca*/
        }
        firstUnit = firstUnit->nextTeamMember; /*0x6ecdcc*/
      }
      while ( firstUnit ); /*0x6ecdd4*/
      v3 = this; /*0x6ecdd6*/
    }
    if ( v9 ) /*0x6ecddd*/
    {
      v16[0] = v9->?[0]; /*0x6ecde9*/
      vtable0 = v9->TechnoClass; /*0x6ecded*/
      v16[1] = v9->?[1]; /*0x6ecdf2*/
      v16[2] = v9->?[2]; /*0x6ecdfe*/
      v12 = (*((int (__thiscall **)(FootClass *, int, _DWORD *, _DWORD))vtable0 + 241))(v9, 1, v16, 0); /*0x6ece06*/
      if ( v12 ) /*0x6ece0e*/
      {
        TeamClass::SelectMember((int)v3, v12); /*0x6ece11*/
      }
      else if ( v3->focus != (AbstractClass *)v17 ) /*0x6ece1c*/
      {
        TeamClass::SelectMember((int)v3, 0); /*0x6ece22*/
      }
    }
  }
  focus = v3->focus; /*0x6ece27*/
  if ( focus && (focus->abstractFlags & 2) != 0 ) /*0x6ece32*/
    TeamClass::AttackCoordinator(v3); /*0x6ece36*/
  else
    TeamClass::UpdateMembers(v3); /*0x6ece46*/
}



// ==== 0x006ECE60  TeamClass::AssignMemberToCoordinator  this=TeamClass  sig=csp ====
char __thiscall TeamClass::AssignMemberToCoordinator(TeamClass *this, int a2, char a3)
{
  void *CellFromArray; // eax
  AbstractClass *queuedFocus; // ecx
  AbstractClass *v6; // esi
  Object *v7; // eax
  int ObjectCell; // eax
  _DWORD v10[2]; // [esp+4h] [ebp-8h] BYREF

  if ( a3 ) /*0x6ece6c*/
  {
    CellFromArray = ScenarioClass::GetCellFromArray((ScenarioClass *)dword_A8B230, *(_DWORD *)(a2 + 4)); /*0x6ece7c*/
    TeamClass::SelectMember((int)this, (int)CellFromArray); /*0x6ece84*/
  }
  queuedFocus = this->queuedFocus; /*0x6ece89*/
  if ( queuedFocus && (*((int (__thiscall **)(AbstractClass *))queuedFocus->vtable0 + 11))(queuedFocus) == 11 )
  {
    v6 = this->queuedFocus; /*0x6ece9b*/
    if ( v6 )
      v7 = (*((int (__thiscall **)(AbstractClass *))v6->vtable0 + 11))(this->queuedFocus) == 11 ? (Object *)v6 : 0;
    else
      v7 = 0; /*0x6ecea2*/
    v10[0] = 0; /*0x6ecec1*/
    v10[1] = 0; /*0x6ecec9*/
    ObjectCell = Object::FindObjectCell(v7, v10, 0); /*0x6eced1*/
    if ( ObjectCell ) /*0x6eced9*/
    {
      TeamClass::SelectMember((int)this, ObjectCell); /*0x6ecede*/
LABEL_10:
      LOBYTE(ObjectCell) = TeamClass::AttackCoordinator(this); /*0x6ecee3*/
    }
  }
  else
  {
    if ( this->queuedFocus ) /*0x6ecef1*/
      goto LABEL_10; /*0x6ecef6*/
    LOBYTE(ObjectCell) = TeamClass::SelectMember((int)this, 0); /*0x6ecefc*/
    this->stepCompleted = 1; /*0x6ecf01*/
  }
  return ObjectCell; /*0x6eceea*/
}



// ==== 0x006ECFB0  TeamClass::Create  this=TeamClass  sig=csp ====
char __thiscall TeamClass::Create(TeamClass *this, int a2, int a3)
{
  int v4; // eax
  int *v5; // ebx
  FootClass *i; // esi

  v4 = __2_YAPAXI_Z(0xA0u); /*0x6ecfba*/
  if ( v4 ) /*0x6ecfc4*/
  {
    v4 = MissionClass::Construct( /*0x6ecfdf*/
           v4,
           *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * *(_DWORD *)(a2 + 4)),
           (int)this->owner,
           0);
    v5 = (int *)v4; /*0x6ecfe4*/
  }
  else
  {
    v5 = 0; /*0x6ecfe8*/
  }
  for ( i = this->firstUnit; i; i = this->firstUnit ) /*0x6ecfef*/
  {
    TeamClass::LiberateMember_Start((int *)this, (int)i, 0xFFFFFFFF, 0); /*0x6ecff8*/
    LOBYTE(v4) = TeamClass::AddMember(v5, (int)i, 0); /*0x6ed002*/
  }
  if ( this ) /*0x6ed010*/
    LOBYTE(v4) = (*((char (__thiscall **)(TeamClass *, int))this->AbstractClass + 8))(this, 1); /*0x6ed018*/
  return v4; /*0x6ed01b*/
}



// ==== 0x006ED090  TeamClass::CoordinateSuperWeaponAttack  this=TeamClass  sig=csp ====
char __thiscall TeamClass::CoordinateSuperWeaponAttack(int this, int a2, int a3)
{
  TeamClass *v3; // ebp
  int *v4; // esi
  int v5; // ebx
  int *v6; // edi
  int v7; // ebp
  int SuperWeaponTypeFlag; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int *v12; // esi
  int *firstUnit; // esi
  _DWORD v16[3]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = (TeamClass *)this; /*0x6ed094*/
  if ( !*(_DWORD *)(this + 60) ) /*0x6ed09b*/
  {
    v4 = *(int **)(this + 84); /*0x6ed0a6*/
    if ( v4 ) /*0x6ed0ab*/
    {
      v5 = -1; /*0x6ed0b2*/
      v6 = *(int **)(this + 84); /*0x6ed0b6*/
      do /*0x6ed11a*/
      {
        v7 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v4 + 132))(v4) + 1532); /*0x6ed0c6*/
        if ( *((_BYTE *)v4 + 144) /*0x6ed10c*/
          && v4[27]
          && (dword_A8E7AC || !*((_BYTE *)v4 + 129))
          && (*((_BYTE *)v4 + 1673) || (*(int (__thiscall **)(int *))(*v4 + 44))(v4) == 2)
          && v7 > v5 )
        {
          v6 = v4; /*0x6ed10e*/
          v5 = v7; /*0x6ed110*/
        }
        v4 = (int *)v4[374]; /*0x6ed112*/
      }
      while ( v4 ); /*0x6ed11a*/
      v3 = (TeamClass *)this; /*0x6ed11c*/
      SuperWeaponTypeFlag = GetSuperWeaponTypeFlag(*(ObjectClass **)(a2 + 4)); /*0x6ed127*/
      v16[0] = v6[39]; /*0x6ed138*/
      v16[1] = v6[40]; /*0x6ed13f*/
      v9 = *v6; /*0x6ed143*/
      v16[2] = v6[41]; /*0x6ed148*/
      v10 = *(_DWORD *)(this + 36); /*0x6ed14c*/
      LOBYTE(v10) = *(_BYTE *)(v10 + 247); /*0x6ed14f*/
      v11 = (*(int (__thiscall **)(int *, int, _DWORD *, int))(v9 + 964))(v6, SuperWeaponTypeFlag, v16, v10); /*0x6ed15e*/
      TeamClass::SelectMember(this, v11); /*0x6ed167*/
      if ( *(_DWORD *)(this + 60) && (v12 = *(int **)(this + 84)) != 0 ) /*0x6ed17a*/
      {
        while ( *(int *)((*(int (__thiscall **)(int *))(*v12 + 132))(v12) + 1668) > 0 && v12[191] <= 0 ) /*0x6ed198*/
        {
          v12 = (int *)v12[374]; /*0x6ed19a*/
          if ( !v12 ) /*0x6ed1a2*/
            goto LABEL_19; /*0x6ed1a2*/
        }
      }
      else
      {
LABEL_19:
        *(_BYTE *)(this + 128) = 1; /*0x6ed1a4*/
      }
    }
    if ( !v3->queuedFocus ) /*0x6ed1ab*/
      goto LABEL_25; /*0x6ed1ab*/
  }
  firstUnit = (int *)v3->firstUnit; /*0x6ed1b2*/
  if ( firstUnit ) /*0x6ed1b7*/
  {
    while ( *(int *)((*(int (__thiscall **)(int *))(*firstUnit + 132))(firstUnit) + 1668) > 0 && firstUnit[191] <= 0 ) /*0x6ed1d5*/
    {
      firstUnit = (int *)firstUnit[374]; /*0x6ed1d7*/
      if ( !firstUnit ) /*0x6ed1df*/
        goto LABEL_25; /*0x6ed1df*/
    }
  }
  else
  {
LABEL_25:
    v3->stepCompleted = 1; /*0x6ed1e1*/
  }
  return TeamClass::AttackCoordinator(v3); /*0x6ed1ef*/
}



// ==== 0x006ED200  ObjectClass::AssignTeamProductionFacilities  this=ObjectClass  sig=csp ====
char __thiscall AssignTeamProductionFacilities(ObjectClass *this, int a2, int a3)
{
  int v3; // eax
  Team *v4; // esi
  int v5; // ebp
  int v6; // ebx
  _DWORD *v7; // edi
  char v8; // bl
  int v9; // edi
  TechnoClass *v10; // edi
  int v11; // ebp
  char v12; // bl
  int v13; // esi
  int v14; // eax
  int v15; // edi
  TechnoClass *v16; // edi
  CellClass *v17; // eax
  _DWORD v19[3]; // [esp+10h] [ebp-10h] BYREF
  TechnoClass *v20; // [esp+1Ch] [ebp-4h]

  v3 = *(_DWORD *)(this->occupant + 228); /*0x6ed209*/
  v4 = (Team *)this->customSound_controller[1]; /*0x6ed20f*/
  v19[0] = this; /*0x6ed212*/
  v5 = 0; /*0x6ed216*/
  if ( *(int *)(v3 + 156) <= 0 ) /*0x6ed221*/
  {
LABEL_6:
    v8 = 0; /*0x6ed25a*/
  }
  else
  {
    v6 = 168; /*0x6ed223*/
    while ( 1 ) /*0x6ed228*/
    {
      v7 = *(_DWORD **)(v6 + v3); /*0x6ed228*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7) == 3 ) /*0x6ed235*/
      {
        v3 = v7[376]; /*0x6ed237*/
        if ( v3 > 0 ) /*0x6ed23f*/
          break; /*0x6ed23f*/
      }
      ++v5; /*0x6ed245*/
      v6 += 8; /*0x6ed246*/
      v3 = *(_DWORD *)(*(_DWORD *)(v19[0] + 36) + 228); /*0x6ed24c*/
      if ( v5 >= *(_DWORD *)(v3 + 156) ) /*0x6ed258*/
        goto LABEL_6; /*0x6ed258*/
    }
    v8 = 1; /*0x6ed29e*/
  }
  if ( !v4 ) /*0x6ed25e*/
  {
    *(_BYTE *)(v19[0] + 128) = 1; /*0x6ed2de*/
    return v3; /*0x6ed2e9*/
  }
  while ( 1 ) /*0x6ed264*/
  {
    v3 = (*(int (__thiscall **)(Team *))(*(_DWORD *)v4->__pad_0 + 132))(v4); /*0x6ed264*/
    if ( *(int *)(v3 + 1504) <= 0 ) /*0x6ed272*/
      goto LABEL_15; /*0x6ed272*/
    v9 = *(_DWORD *)&v4[1].__pad_0[40]; /*0x6ed276*/
    v3 = (*(int (__thiscall **)(Team *))(*(_DWORD *)v4->__pad_0 + 132))(v4); /*0x6ed27e*/
    if ( v9 >= *(_DWORD *)(v3 + 1504) ) /*0x6ed28a*/
      goto LABEL_15; /*0x6ed28a*/
    if ( v8 ) /*0x6ed28e*/
      break; /*0x6ed28e*/
    v3 = (*(int (__thiscall **)(Team *))(*(_DWORD *)v4->__pad_0 + 44))(v4); /*0x6ed294*/
    if ( v3 == 1 ) /*0x6ed29a*/
      goto LABEL_17; /*0x6ed29a*/
LABEL_15:
    v4 = *(Team **)&v4[6].__pad_0[80]; /*0x6ed2ae*/
    if ( !v4 ) /*0x6ed2b6*/
    {
      *(_BYTE *)(v19[0] + 128) = 1; /*0x6ed2bf*/
      return v3; /*0x6ed2ca*/
    }
  }
  v3 = (*(int (__thiscall **)(Team *))(*(_DWORD *)v4->__pad_0 + 44))(v4); /*0x6ed2a6*/
  if ( v3 != 2 ) /*0x6ed2ac*/
    goto LABEL_15; /*0x6ed2ac*/
LABEL_17:
  v10 = (TechnoClass *)v4; /*0x6ed2cd*/
  v20 = (TechnoClass *)v4; /*0x6ed2d1*/
  LOBYTE(v3) = Team::AllMembersValid(v4); /*0x6ed2ee*/
  if ( !(_BYTE)v3 ) /*0x6ed2f5*/
  {
    v11 = v19[0]; /*0x6ed2fb*/
    v12 = 1; /*0x6ed2ff*/
    v13 = *(_DWORD *)(v19[0] + 84); /*0x6ed301*/
    if ( v13 ) /*0x6ed306*/
    {
      do /*0x6ed431*/
      {
        if ( *(int *)(v11 + 72) <= 1 ) /*0x6ed310*/
          break; /*0x6ed310*/
        LOBYTE(v3) = *(_BYTE *)(v13 + 144); /*0x6ed31e*/
        if ( (_BYTE)v3 ) /*0x6ed326*/
        {
          if ( *(_DWORD *)(v13 + 108) && (dword_A8E7AC || !*(_BYTE *)(v13 + 129)) && !*(_BYTE *)(v13 + 1673) ) /*0x6ed34e*/
          {
            v14 = *SessionClass::GetEntry(*(SessionClass **)(v11 + 40), v19); /*0x6ed365*/
            if ( v14 == 54 || v14 == 53 ) /*0x6ed36f*/
              v15 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6ed384*/
            else
              v15 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6ed376*/
            if ( ObjectClass::DistanceTo((ObjectClass *)v13, *(_DWORD *)(v11 + 52)) <= v15 ) /*0x6ed397*/
            {
              *(_BYTE *)(v13 + 1673) = 1; /*0x6ed3cf*/
            }
            else if ( !*(_DWORD *)(v13 + 1444) ) /*0x6ed399*/
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v13 + 488))(v13, 2, 0); /*0x6ed3ab*/
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 968))(v13, 0); /*0x6ed3b7*/
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v13 + 1152))(v13, *(_DWORD *)(v11 + 52), 1); /*0x6ed3c7*/
            }
          }
          LOBYTE(v3) = *(_BYTE *)(v13 + 144); /*0x6ed3d6*/
          if ( (_BYTE)v3 ) /*0x6ed3de*/
          {
            v3 = *(_DWORD *)(v13 + 108); /*0x6ed3e0*/
            if ( v3 ) /*0x6ed3e5*/
            {
              if ( dword_A8E7AC || (v3 = *(unsigned __int8 *)(v13 + 129), !(_BYTE)v3) ) /*0x6ed3f8*/
              {
                LOBYTE(v3) = *(_BYTE *)(v13 + 1673); /*0x6ed3fa*/
                if ( (_BYTE)v3 || (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13), v3 == 2) ) /*0x6ed40e*/
                {
                  v16 = v20; /*0x6ed410*/
                  if ( (TechnoClass *)v13 != v20 ) /*0x6ed416*/
                  {
                    v12 = 0; /*0x6ed41c*/
                    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 388))(v13); /*0x6ed41e*/
                    if ( v3 != 7 ) /*0x6ed427*/
                    {
                      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v13 + 488))(v13, 7, 0); /*0x6ed49a*/
                      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 968))(v13, 0); /*0x6ed4a6*/
                      LOBYTE(v3) = (*(char (__thiscall **)(int, TechnoClass *, int))(*(_DWORD *)v13 + 1152))( /*0x6ed4b3*/
                                     v13,
                                     v16,
                                     1);
                      return v3; /*0x6ed4b3*/
                    }
                  }
                }
              }
            }
          }
        }
        v13 = *(_DWORD *)(v13 + 1496); /*0x6ed429*/
      }
      while ( v13 ); /*0x6ed431*/
      if ( !v12 ) /*0x6ed439*/
        return v3; /*0x6ed439*/
      v10 = v20; /*0x6ed43b*/
    }
    v3 = *(_DWORD *)(v11 + 36); /*0x6ed43f*/
    if ( *(_BYTE *)(v3 + 244) ) /*0x6ed442*/
    {
      v19[0] = v10->?[0]; /*0x6ed458*/
      v19[1] = v10->?[1]; /*0x6ed464*/
      v19[2] = v10->?[2]; /*0x6ed46b*/
      v17 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v19); /*0x6ed474*/
      LOBYTE(v3) = TechnoClass::SetFocus(v10, (int)v17); /*0x6ed47c*/
    }
    *(_BYTE *)(v11 + 128) = 1; /*0x6ed481*/
  }
  return v3; /*0x6ed2bc*/
}



// ==== 0x006ED4D0  TechnoClass::ProcessBorderTower  this=TechnoClass  sig=csp ====
void __userpurge sub_6ED4D0(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, int a5)
{
  int v6; // esi
  int v7; // eax
  int v8; // edi
  bool v9; // bl
  bool v10; // al
  int v11; // edi
  int v12; // eax
  int v13; // eax
  char v16; // [esp+Ah] [ebp-12h]
  char v17; // [esp+Bh] [ebp-11h]
  int v18; // [esp+14h] [ebp-8h] BYREF
  char v19; // [esp+18h] [ebp-4h] BYREF

  v17 = 1; /*0x6ed4d7*/
  v6 = *(_DWORD *)(a1 + 84); /*0x6ed4dc*/
  if ( !v6 ) /*0x6ed4e1*/
  {
LABEL_43:
    *(_BYTE *)(a1 + 128) = 1; /*0x6ed758*/
    return; /*0x6ed758*/
  }
  do /*0x6ed748*/
  {
    if ( *(_BYTE *)(v6 + 144) ) /*0x6ed4ef*/
    {
      if ( *(_DWORD *)(v6 + 108) && (dword_A8E7AC || !*(_BYTE *)(v6 + 129)) && !*(_BYTE *)(v6 + 1673) ) /*0x6ed51f*/
      {
        v7 = *SessionClass::GetEntry(*(_DWORD **)(a1 + 40), &v18); /*0x6ed536*/
        if ( v7 == 54 || v7 == 53 ) /*0x6ed540*/
          v8 = *((_DWORD *)dword_8871E0 + 1480); /*0x6ed556*/
        else
          v8 = *((_DWORD *)dword_8871E0 + 1479); /*0x6ed548*/
        if ( ObjectClass::DistanceTo((void *)v6, *(_DWORD *)(a1 + 52)) <= v8 ) /*0x6ed569*/
        {
          *(_BYTE *)(v6 + 1673) = 1; /*0x6ed5a1*/
        }
        else if ( !*(_DWORD *)(v6 + 1444) ) /*0x6ed56b*/
        {
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 488))(v6, 2, 0); /*0x6ed57d*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 968))(v6, 0); /*0x6ed589*/
          (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v6 + 1152))(v6, *(_DWORD *)(a1 + 52), 1); /*0x6ed599*/
        }
      }
      if ( *(_BYTE *)(v6 + 144) /*0x6ed5ec*/
        && *(_DWORD *)(v6 + 108)
        && (dword_A8E7AC || !*(_BYTE *)(v6 + 129))
        && (*(_BYTE *)(v6 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6) == 2) )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6) != 1 /*0x6ed609*/
          || (v16 = 1, !*(_DWORD *)(*(_DWORD *)(v6 + 1732) + 1028)) )
        {
          v16 = 0; /*0x6ed613*/
        }
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6) == 1 && *(_BYTE *)(*(_DWORD *)(v6 + 1732) + 3603); /*0x6ed634*/
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6) == 15 /*0x6ed651*/
           && (unsigned __int8)TechnoClass::GetTypeFlag(v6);
        if ( v16 ) /*0x6ed65d*/
        {
          v17 = 0; /*0x6ed667*/
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 388))(v6) == 16 ) /*0x6ed675*/
            goto LABEL_41; /*0x6ed675*/
          (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v6 + 292))(v6, 0, a3, a2); /*0x6ed681*/
          v11 = **(_DWORD **)(*(_DWORD *)(v6 + 1732) + 1028); /*0x6ed69c*/
          v12 = (*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v6 + 440))(v6, &v18, 0); /*0x6ed6a0*/
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(v11 + 168))( /*0x6ed6b3*/
                  *(_DWORD *)(*(_DWORD *)(v6 + 1732) + 1028),
                  v12) )
          {
            a2 = *(_DWORD *)(v6 + 540); /*0x6ed6c9*/
            v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 440))(v6); /*0x6ed6cd*/
            BuildingClass::ApplyFoundationDamage(v13, (#375 *)&v19); /*0x6ed6e0*/
            a3 = 1; /*0x6ed6e7*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 292))(v6); /*0x6ed6eb*/
            goto LABEL_41; /*0x6ed6f1*/
          }
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 292))(v6, 1); /*0x6ed6f9*/
          a2 = 1; /*0x6ed701*/
          a3 = 0; /*0x6ed703*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 1152))(v6); /*0x6ed707*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 968))(v6, 0); /*0x6ed713*/
LABEL_40:
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 488))(v6, 16, 0); /*0x6ed732*/
          goto LABEL_41; /*0x6ed73a*/
        }
        if ( (v9 || v10) && (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 388))(v6) != 16 ) /*0x6ed730*/
          goto LABEL_40; /*0x6ed730*/
      }
    }
LABEL_41:
    v6 = *(_DWORD *)(v6 + 1496); /*0x6ed740*/
  }
  while ( v6 ); /*0x6ed748*/
  if ( v17 ) /*0x6ed756*/
    goto LABEL_43; /*0x6ed756*/
}



// ==== 0x006ED770  HouseClass::CheckDefeated  this=HouseClass  sig=csp ====
int __thiscall HouseClass::CheckDefeated(HouseClass *this, int a2, char a3)
{
  int v4; // eax
  int repairStationsCapacity; // edx
  int result; // eax
  int v7; // [esp+8h] [ebp-8h]

  if ( a3 ) /*0x6ed77c*/
  {
    v4 = *(_DWORD *)(a2 + 4); /*0x6ed78b*/
    this->repairStationsCapacity = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6ed78e*/
    this->grinders[0] = v7; /*0x6ed797*/
    this->grindersCount = 15 * v4; /*0x6ed79d*/
  }
  HouseClass::EvaluateTarget(this); /*0x6ed7a2*/
  repairStationsCapacity = this->repairStationsCapacity; /*0x6ed7a7*/
  result = this->grindersCount; /*0x6ed7aa*/
  if ( repairStationsCapacity == -1 ) /*0x6ed7b0*/
  {
LABEL_6:
    if ( result ) /*0x6ed7c2*/
      return result; /*0x6ed7c2*/
    goto LABEL_7; /*0x6ed7c2*/
  }
  if ( *(_DWORD *)&stru_A8EB00.?[416] - repairStationsCapacity < result ) /*0x6ed7bc*/
  {
    result -= *(_DWORD *)&stru_A8EB00.?[416] - repairStationsCapacity; /*0x6ed7be*/
    goto LABEL_6; /*0x6ed7be*/
  }
LABEL_7:
  LOBYTE(this->occupiables[0]) = 1; /*0x6ed7c4*/
  return result; /*0x6ed7cb*/
}



// ==== 0x006ED7E0  Mission::AssignTeamMemberMissions  this=Mission  sig=csp ====
char __thiscall AssignTeamMemberMissions(int this, int a2, int a3)
{
  int v3; // eax
  int v4; // ebx
  int *i; // esi
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  int v10; // ebp
  _DWORD *v11; // eax
  int *v12; // eax
  int v13; // ebp
  void *v14; // eax
  int v16; // [esp+1Ch] [ebp-28h] BYREF
  int v17; // [esp+20h] [ebp-24h] BYREF
  _BYTE v18[4]; // [esp+24h] [ebp-20h] BYREF
  int v19; // [esp+28h] [ebp-1Ch] BYREF
  int v20; // [esp+30h] [ebp-14h] BYREF
  _BYTE v21[12]; // [esp+38h] [ebp-Ch] BYREF
  int v22; // [esp+48h] [ebp+4h]

  LOBYTE(v3) = a2; /*0x6ed7e3*/
  v4 = *(_DWORD *)(a2 + 4); /*0x6ed7e9*/
  for ( i = *(int **)(this + 84); i; i = (int *)i[374] )
  {
    LOBYTE(v3) = *((_BYTE *)i + 144); /*0x6ed801*/
    if ( (_BYTE)v3 )
    {
      if ( i[27] && (dword_A8E7AC || !*((_BYTE *)i + 129)) && !*((_BYTE *)i + 1673) ) /*0x6ed831*/
      {
        v7 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v19); /*0x6ed848*/
        if ( v7 == 54 || v7 == 53 ) /*0x6ed852*/
          v8 = dword_8871E0[1].?[1]; /*0x6ed867*/
        else
          v8 = dword_8871E0[1].?[0]; /*0x6ed85a*/
        if ( ObjectClass::DistanceTo(i, *(_DWORD *)(this + 52)) <= v8 ) /*0x6ed87a*/
        {
          *((_BYTE *)i + 1673) = 1; /*0x6ed8b2*/
        }
        else if ( !i[361] ) /*0x6ed87c*/
        {
          (*(void (__thiscall **)(int *, int, _DWORD))(*i + 488))(i, 2, 0); /*0x6ed88e*/
          (*(void (__thiscall **)(int *, _DWORD))(*i + 968))(i, 0); /*0x6ed89a*/
          (*(void (__thiscall **)(int *, _DWORD, int))(*i + 1152))(i, *(_DWORD *)(this + 52), 1); /*0x6ed8aa*/
        }
      }
      LOBYTE(v3) = *((_BYTE *)i + 144); /*0x6ed8b9*/
      if ( (_BYTE)v3 )
      {
        v3 = i[27]; /*0x6ed8c7*/
        if ( v3 )
        {
          if ( dword_A8E7AC || (LOBYTE(v3) = *((_BYTE *)i + 129), !(_BYTE)v3) )
          {
            if ( *((_BYTE *)i + 1673) || (v3 = (*(int (__thiscall **)(int *))(*i + 44))(i), v3 == 2) )
            {
              v3 = i[173]; /*0x6ed903*/
              if ( !v3 )
              {
                if ( i[361]
                  || ((v9 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v20), v9 == 54) || v9 == 53
                    ? (v10 = dword_8871E0[1].?[1])
                    : (v10 = dword_8871E0[1].?[0]),
                      ObjectClass::DistanceTo(i, *(_DWORD *)(this + 52)) <= 2 * v10 || v4 == 11) )
                {
                  v3 = i[173]; /*0x6eda11*/
                  if ( !v3 ) /*0x6eda19*/
                  {
                    v3 = i[361]; /*0x6eda1b*/
                    if ( !v3 ) /*0x6eda23*/
                    {
                      v3 = (*(int (__thiscall **)(int *))(*i + 388))(i); /*0x6eda29*/
                      if ( v3 != v4 ) /*0x6eda31*/
                      {
                        if ( v4 != 5 || (v3 = (*(int (__thiscall **)(int *))(*i + 388))(i), v3 != 16) ) /*0x6eda45*/
                        {
                          TechnoClass::SetFocus(i, 0); /*0x6eda4b*/
                          (*(void (__thiscall **)(int *, int, _DWORD))(*i + 488))(i, v4, 0); /*0x6eda57*/
                          (*(void (__thiscall **)(int *, _DWORD))(*i + 968))(i, 0); /*0x6eda63*/
                          LOBYTE(v3) = (*(int (__thiscall **)(int *, _DWORD, int))(*i + 1152))(i, 0, 1); /*0x6eda71*/
                        }
                      }
                    }
                  }
                }
                else
                {
                  (*(void (__thiscall **)(int *, int, _DWORD))(*i + 488))(i, 2, 0); /*0x6ed97a*/
                  (*(void (__thiscall **)(int *, _DWORD, int))(*i + 1152))(i, *(_DWORD *)(this + 52), 1); /*0x6ed98a*/
                  (*(void (__thiscall **)(int *, int, _DWORD))(*i + 488))(i, 2, 0); /*0x6ed998*/
                  v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 52) + 72))( /*0x6ed9a8*/
                                    *(_DWORD *)(this + 52),
                                    v21);
                  LOWORD(v22) = *v11 / 256; /*0x6ed9bb*/
                  HIWORD(v22) = v11[1] / 256; /*0x6ed9d7*/
                  v16 = v22; /*0x6ed9e4*/
                  v12 = (int *)globalHelper_0DA020(v18, &v16); /*0x6ed9e8*/
                  v13 = *i; /*0x6ed9ef*/
                  v17 = *v12; /*0x6ed9fd*/
                  v14 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v17); /*0x6eda01*/
                  LOBYTE(v3) = (*(int (__thiscall **)(int *, void *, int))(v13 + 1152))(i, v14, 1); /*0x6eda09*/
                }
              }
            }
          }
        }
      }
    }
  }
  return v3; /*0x6eda86*/
}



// ==== 0x006EDB50  TeamClass::AssignAttackTarget  this=TeamClass  sig=csp ====
char __thiscall TeamClass::AssignAttackTarget(TeamClass *this, int a2, int a3)
{
  AbstractClass **p_spawnCell; // edi
  _DWORD *health; // eax
  _DWORD *v6; // edi
  FootClass *i; // esi
  AbstractClass *target; // eax

  p_spawnCell = (AbstractClass **)&this->spawnCell; /*0x6edb57*/
  TeamClass::FindClosestEnemy((int)this, (void **)&this->spawnCell, &this->unknown38); /*0x6edb5c*/
  this->focus = *p_spawnCell; /*0x6edb63*/
  TeamClass::UpdateMembers(this); /*0x6edb68*/
  health = AbstractClass::IsTechnoType(*p_spawnCell); /*0x6edb6f*/
  v6 = health; /*0x6edb74*/
  if ( health ) /*0x6edb78*/
  {
    for ( i = this->firstUnit; i; i = i->nextTeamMember ) /*0x6edb83*/
    {
      LOBYTE(health) = i->?; /*0x6edb89*/
      if ( (_BYTE)health ) /*0x6edb91*/
      {
        health = (_DWORD *)i->?; /*0x6edb97*/
        if ( health ) /*0x6edb9c*/
        {
          if ( dword_A8E7AC || (LOBYTE(health) = i->?, !(_BYTE)health) ) /*0x6edbb3*/
          {
            if ( i->isTeamLeader /*0x6edbcd*/
              || (health = (_DWORD *)(*((int (__thiscall **)(FootClass *))i->TechnoClass + 11))(i), health == (_DWORD *)2) )
            {
              target = i->?; /*0x6edbd3*/
              if ( target && target != (AbstractClass *)v6[173] ) /*0x6edbe3*/
                (*((void (__thiscall **)(FootClass *, _DWORD))i->TechnoClass + 242))(i, 0); /*0x6edbeb*/
              health = (_DWORD *)v6[173]; /*0x6edbf1*/
              if ( health ) /*0x6edbf9*/
              {
                if ( !i->locomotor[0] ) /*0x6edbfb*/
                  WinAPI::Wrapper(-2147467261); /*0x6edc0a*/
                LOBYTE(health) = (*(int (__stdcall **)(int))(*(_DWORD *)i->locomotor[0] + 16))(i->locomotor[0]); /*0x6edc18*/
                if ( !(_BYTE)health ) /*0x6edc1d*/
                {
                  LOBYTE(health) = (*((int (__thiscall **)(FootClass *))i->TechnoClass + 171))(i); /*0x6edc23*/
                  if ( (_BYTE)health ) /*0x6edc2b*/
                  {
                    health = (_DWORD *)(*((int (__thiscall **)(FootClass *))i->TechnoClass + 97))(i); /*0x6edc31*/
                    if ( health == (_DWORD *)5 ) /*0x6edc3a*/
                    {
                      (*((void (__thiscall **)(FootClass *, int, _DWORD))i->TechnoClass + 122))(i, 1, 0); /*0x6edc44*/
                      LOBYTE(health) = (*((int (__thiscall **)(FootClass *, _DWORD))i->TechnoClass + 242))(i, v6[173]); /*0x6edc55*/
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (char)health; /*0x6edc69*/
}



// ==== 0x006EDCA0  TeamClass::SyncMemberFacing  this=TeamClass  sig=csp ====
void __thiscall sub_6EDCA0(int this, int a2, int a3)
{
  int v3; // esi
  char v4; // bl
  int v5; // ebp
  int v6; // edi
  int v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h] BYREF

  v3 = *(_DWORD *)(this + 84); /*0x6edca5*/
  v7 = this; /*0x6edca8*/
  v4 = 1; /*0x6edcae*/
  if ( !v3 ) /*0x6edcb0*/
    goto LABEL_14; /*0x6edcb0*/
  v5 = a2; /*0x6edcb7*/
  do /*0x6edd37*/
  {
    if ( !*(_DWORD *)(v3 + 1652) ) /*0x6edcbc*/
      WinAPI::Wrapper(-2147467261); /*0x6edccb*/
    if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + 1652) + 16))(*(_DWORD *)(v3 + 1652)) ) /*0x6edcd9*/
    {
      v4 = 0; /*0x6edce0*/
    }
    else
    {
      v6 = *(_DWORD *)(v5 + 4); /*0x6edce4*/
      if ( *(_WORD *)ProgressTimer::GetValue((_WORD *)(v3 + 904), &v8) != (_WORD)v6 << 13 ) /*0x6edcfd*/
      {
        if ( !*(_DWORD *)(v3 + 1652) ) /*0x6edd0a*/
          WinAPI::Wrapper(-2147467261); /*0x6edd19*/
        LOWORD(a2) = (unsigned __int16)*(_DWORD *)(v5 + 4) << 13; /*0x6edd05*/
        (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(v3 + 1652) + 76))(*(_DWORD *)(v3 + 1652), a2); /*0x6edd2c*/
      }
    }
    v3 = *(_DWORD *)(v3 + 1496); /*0x6edd2f*/
  }
  while ( v3 ); /*0x6edd37*/
  if ( v4 ) /*0x6edd3d*/
  {
    this = v7; /*0x6edd3f*/
LABEL_14:
    *(_BYTE *)(this + 128) = 1; /*0x6edd43*/
  }
}



// ==== 0x006EDDC0  ObjectClass::method_6EDDC0  this=ObjectClass  sig=csp ====
int __thiscall sub_6EDDC0(ObjectClass *this, int a2, int a3)
{
  _DWORD *v4; // esi
  int result; // eax

  v4 = (_DWORD *)this->customSound_controller[1]; /*0x6eddc4*/
  if ( v4 ) /*0x6eddc9*/
  {
    do /*0x6edde6*/
    {
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v4 + 1312))(v4, *(_DWORD *)(a2 + 4)); /*0x6eddd8*/
      v4 = (_DWORD *)v4[374]; /*0x6eddde*/
    }
    while ( v4 ); /*0x6edde6*/
    this->needsRedraw = 1; /*0x6edde9*/
  }
  else
  {
    this->needsRedraw = 1; /*0x6eddf5*/
  }
  return result; /*0x6eddf0*/
}



// ==== 0x006EDE80  ObjectClass::method_6EDE80  this=ObjectClass  sig=csp ====
void __thiscall sub_6EDE80(ObjectClass *this, int a2, int a3)
{
  this->needsRedraw = 1; /*0x6ede80*/
}



// ==== 0x006EDF10  ObjectClass::method_6EDF10  this=ObjectClass  sig=csp ====
void __thiscall sub_6EDF10(ObjectClass *this, int a2, int a3)
{
  _DWORD *i; // esi
  _DWORD *v5; // eax
  int v6; // [esp+8h] [ebp-14h]
  int v7; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v8[12]; // [esp+10h] [ebp-Ch] BYREF

  for ( i = (_DWORD *)this->customSound_controller[1]; i; i = (_DWORD *)i[374] ) /*0x6edf1c*/
  {
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*i + 72))(i, v8); /*0x6edf27*/
    LOWORD(v6) = *v5 / 256; /*0x6edf3a*/
    HIWORD(v6) = v5[1] / 256; /*0x6edf53*/
    v7 = v6; /*0x6edf60*/
    MapClass::TriggerEVA((__int16 *)&v7); /*0x6edf65*/
  }
  this->needsRedraw = 1; /*0x6edf74*/
}



// ==== 0x006EDF90  ObjectClass::method_6EDF90  this=ObjectClass  sig=csp ====
char __thiscall sub_6EDF90(ObjectClass *this, int a2, int a3)
{
  *(_BYTE *)(this->fallRate + 494) = 1; /*0x6edf95*/
  this->needsRedraw = 1; /*0x6edf9b*/
  return 1; /*0x6edfa1*/
}



// ==== 0x006EDFB0  ObjectClass::method_6EDFB0  this=ObjectClass  sig=csp ====
int __thiscall sub_6EDFB0(ObjectClass *this, int a2, int a3)
{
  int result; // eax

  result = this->fallRate; /*0x6edfb0*/
  *(_DWORD *)(result + 592) = 4; /*0x6edfb3*/
  this->needsRedraw = 1; /*0x6edfbd*/
  return result; /*0x6edfc4*/
}



// ==== 0x006EDFD0  ObjectClass::method_6EDFD0  this=ObjectClass  sig=csp ====
void __thiscall sub_6EDFD0(ObjectClass *this, int a2, int a3)
{
  int v4; // esi
  char v5; // cl
  int v6; // [esp+8h] [ebp-4h] BYREF

  do /*0x6ee038*/
  {
    v4 = this->customSound_controller[1]; /*0x6edfd5*/
    v5 = 0; /*0x6edfd8*/
    if ( !v4 ) /*0x6edfdc*/
      break; /*0x6edfdc*/
    do /*0x6ee034*/
    {
      if ( *(int *)(v4 + 108) > 0 && *(_BYTE *)(v4 + 144) && *(_BYTE *)(v4 + 116) && !*(_BYTE *)(v4 + 129) ) /*0x6edff6*/
      {
        v6 = *(_DWORD *)(v4 + 108); /*0x6ee008*/
        (*(void (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 364))( /*0x6ee024*/
          v4,
          &v6,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          1,
          0,
          0);
        v5 = 1; /*0x6ee02a*/
      }
      v4 = *(_DWORD *)(v4 + 1496); /*0x6ee02c*/
    }
    while ( v4 ); /*0x6ee034*/
  }
  while ( v5 ); /*0x6ee038*/
  this->needsRedraw = 1; /*0x6ee03a*/
}



// ==== 0x006EE050  ObjectClass::method_6EE050  this=ObjectClass  sig=csp ====
int __thiscall sub_6EE050(ObjectClass *this, int a2, int a3)
{
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  int result; // eax

  v4 = (_DWORD *)this->customSound_controller[1]; /*0x6ee054*/
  if ( v4 ) /*0x6ee059*/
  {
    do /*0x6ee07a*/
    {
      v5 = (_DWORD *)v4[374]; /*0x6ee05e*/
      (*(void (__thiscall **)(_DWORD *))(*v4 + 212))(v4); /*0x6ee066*/
      result = (*(int (__thiscall **)(_DWORD *))(*v4 + 248))(v4); /*0x6ee070*/
      v4 = v5; /*0x6ee078*/
    }
    while ( v5 ); /*0x6ee07a*/
    this->needsRedraw = 1; /*0x6ee07d*/
  }
  else
  {
    this->needsRedraw = 1; /*0x6ee089*/
  }
  return result; /*0x6ee084*/
}



// ==== 0x006EE100  TacticalClass::Get  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::Get(TacticalClass *this, int a2, int a3)
{
  _DWORD *v4; // eax
  int result; // eax
  _DWORD v6[2]; // [esp+4h] [ebp-18h] BYREF
  int GroundHeight; // [esp+Ch] [ebp-10h]
  _BYTE v8[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->field34 + 72))(this->field34, v8); /*0x6ee110*/
  v6[0] = *v4; /*0x6ee115*/
  v6[1] = v4[1]; /*0x6ee121*/
  GroundHeight = v4[2]; /*0x6ee12d*/
  GroundHeight = Cell::GetGroundHeight(v6); /*0x6ee140*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6)->flags[0] & 0x100) != 0 /*0x6ee16c*/
    || (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v6)->flags[0] & 0x400) != 0 )
  {
    GroundHeight += *(_DWORD *)&g_BuildingLoadQueue_Array.?[15]; /*0x6ee17a*/
  }
  result = TacticalClass::SetPosition((TacticalClass *)g_TacticalClass_Instance, v6, *(_DWORD *)(a2 + 4)); /*0x6ee191*/
  LOBYTE(this->field80) = 1; /*0x6ee196*/
  return result; /*0x6ee19d*/
}



// ==== 0x006EE310  TeamClass::SelectAreaAttackTarget  this=TeamClass  sig=csp ====
char __thiscall TeamClass::SelectAreaAttackTarget(TeamClass *this, int a2, char a3)
{
  int firstUnit; // edi
  #375 *v5; // edx
  int v6; // ebx
  _DWORD *v7; // eax
  int *v8; // esi
  char result; // al

  if ( a3 ) /*0x6ee31b*/
  {
    if ( this->queuedFocus ) /*0x6ee31d*/
      goto LABEL_9; /*0x6ee322*/
    firstUnit = (int)this->firstUnit; /*0x6ee324*/
    if ( firstUnit ) /*0x6ee329*/
    {
      v5 = 0; /*0x6ee336*/
      v6 = *(_DWORD *)(*(_DWORD *)(firstUnit + 540) + 22016); /*0x6ee354*/
      if ( v6 != -1 ) /*0x6ee35d*/
        v5 = (#375 *)*((_DWORD *)stru_A80220.? + v6); /*0x6ee365*/
      v7 = DamageMapClassArea( /*0x6ee376*/
             *((_DWORD *)dword_A83C6C + (unsigned __int16)*(_DWORD *)(a2 + 4)),
             v5,
             firstUnit,
             (unsigned __int16)HIWORD(*(_DWORD *)(a2 + 4)),
             HIBYTE(this->buildingType[2].?));
      if ( v7 ) /*0x6ee37e*/
        TeamClass::SelectMember((int)this, (int)v7); /*0x6ee383*/
    }
  }
  if ( !this->queuedFocus ) /*0x6ee38d*/
  {
LABEL_13:
    result = TeamClass::SelectMember((int)this, 0); /*0x6ee3be*/
    this->stepCompleted = 1; /*0x6ee3c8*/
    return result; /*0x6ee3d1*/
  }
LABEL_9:
  v8 = (int *)this->firstUnit; /*0x6ee38f*/
  if ( !v8 ) /*0x6ee394*/
    goto LABEL_13; /*0x6ee394*/
  while ( *(int *)((*(int (__thiscall **)(int *))(*v8 + 132))(v8) + 1668) > 0 && v8[191] <= 0 ) /*0x6ee3b2*/
  {
    v8 = (int *)v8[374]; /*0x6ee3b4*/
    if ( !v8 ) /*0x6ee3bc*/
      goto LABEL_13; /*0x6ee3bc*/
  }
  return TeamClass::AttackCoordinator(this); /*0x6ee3c7*/
}



// ==== 0x006EE3F0  TeamClass::ProcessTeamMovement  this=TeamClass  sig=csp ====
void __thiscall TeamClass::ProcessTeamMovement(TeamClass *this, int a2, int a3)
{
  TeamClass *v3; // ebp
  FootClass *firstUnit; // esi
  #375 *v5; // edx
  int enemyHouseIndex; // ebx
  _DWORD *v7; // ebx
  int v8; // edi
  int *v9; // ebx
  int v10; // eax
  int v11; // ecx
  int (__thiscall **vtable0)(FootClass *, _BYTE *); // edx
  _DWORD *v13; // eax
  int v14; // eax
  int TileIndex; // [esp-38h] [ebp-64h]
  void *v16; // [esp-Ch] [ebp-38h]
  int v18; // [esp+Ch] [ebp-20h] BYREF
  __int16 v19[2]; // [esp+10h] [ebp-1Ch] BYREF
  __int16 v20[2]; // [esp+14h] [ebp-18h] BYREF
  int v21; // [esp+18h] [ebp-14h] BYREF
  int v22; // [esp+1Ch] [ebp-10h] BYREF
  _BYTE v23[8]; // [esp+20h] [ebp-Ch] BYREF
  int v24; // [esp+28h] [ebp-4h]
  int v25; // [esp+30h] [ebp+4h]

  v3 = this; /*0x6ee3f4*/
  if ( !this->queuedFocus ) /*0x6ee3fb*/
  {
    firstUnit = this->firstUnit; /*0x6ee406*/
    if ( firstUnit ) /*0x6ee40b*/
    {
      v5 = 0; /*0x6ee420*/
      enemyHouseIndex = firstUnit->?->enemyHouseIndex; /*0x6ee43b*/
      if ( enemyHouseIndex != -1 ) /*0x6ee444*/
        v5 = (#375 *)*((_DWORD *)stru_A80220.? + enemyHouseIndex); /*0x6ee44c*/
      v7 = DamageMapClassArea( /*0x6ee462*/
             *((_DWORD *)dword_A83C6C + (unsigned __int16)*(_DWORD *)(a2 + 4)),
             v5,
             (int)firstUnit,
             (unsigned __int16)HIWORD(*(_DWORD *)(a2 + 4)),
             HIBYTE(this->buildingType[2].?));
      if ( v7 ) /*0x6ee466*/
      {
        v8 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 1460); /*0x6ee476*/
        v9 = v7 + 39; /*0x6ee47c*/
        v10 = *v9; /*0x6ee482*/
        v11 = v9[1]; /*0x6ee484*/
        v24 = v9[2]; /*0x6ee48f*/
        LOWORD(v25) = v10 / 256; /*0x6ee4a1*/
        vtable0 = (int (__thiscall **)(FootClass *, _BYTE *))firstUnit->TechnoClass; /*0x6ee4b3*/
        HIWORD(v25) = v11 / 256; /*0x6ee4b8*/
        v21 = v25; /*0x6ee4c1*/
        v18 = 0; /*0x6ee4c7*/
        v13 = (_DWORD *)vtable0[18](firstUnit, v23); /*0x6ee4d6*/
        LOWORD(v25) = *v13 / 256; /*0x6ee4ed*/
        HIWORD(v25) = v13[1] / 256; /*0x6ee50d*/
        LOBYTE(v13) = firstUnit->?; /*0x6ee516*/
        *(_DWORD *)v20 = v25; /*0x6ee520*/
        TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v20, v8, (char)v13); /*0x6ee538*/
        v14 = (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit); /*0x6ee53b*/
        *(_DWORD *)v19 = *LayerClass::Pathfinding_Find( /*0x6ee565*/
                            (Type *)&stru_87F5F0.__pad_58[416],
                            (int)&v22,
                            &v22,
                            (__int16 *)&v21,
                            *(_DWORD *)(v14 + 1660),
                            TileIndex,
                            v8,
                            0,
                            1,
                            1,
                            0,
                            0,
                            0,
                            1,
                            (__int16 *)&v18,
                            0,
                            0);
        if ( *(_DWORD *)v19 == g_BuildingLoadQueue_Array.?[1] ) /*0x6ee569*/
        {
          TeamClass::SelectMember((int)this, 0); /*0x6ee591*/
        }
        else
        {
          v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x6ee588*/
          TeamClass::SelectMember((int)this, (int)v16); /*0x6ee589*/
        }
        v3 = this; /*0x6ee596*/
      }
      if ( !v3->queuedFocus ) /*0x6ee59a*/
        v3->stepCompleted = 1; /*0x6ee5a3*/
    }
  }
  TeamClass::UpdateMembers(v3); /*0x6ee5ac*/
}



// ==== 0x006EE5C0  TeamClass::SelectBestMember  this=TeamClass  sig=csp ====
void __thiscall TeamClass::SelectBestMember(TeamClass *this, int a2, int a3)
{
  TeamClass *v3; // ebp
  FootClass *firstUnit; // esi
  FootClass *v5; // edi
  int v6; // ebx
  int v7; // ebp
  _DWORD *v8; // ebx
  int v9; // edi
  int *v10; // ebx
  int v11; // eax
  int v12; // ecx
  int (__thiscall **vtable0)(FootClass *, _BYTE *); // edx
  _DWORD *v14; // eax
  int v15; // eax
  int TileIndex; // [esp-30h] [ebp-60h]
  void *v17; // [esp-4h] [ebp-34h]
  __int16 v19[2]; // [esp+14h] [ebp-1Ch] BYREF
  __int16 v20[2]; // [esp+18h] [ebp-18h] BYREF
  int v21; // [esp+1Ch] [ebp-14h] BYREF
  int v22; // [esp+20h] [ebp-10h] BYREF
  _BYTE v23[8]; // [esp+24h] [ebp-Ch] BYREF
  int v24; // [esp+2Ch] [ebp-4h]

  v3 = this; /*0x6ee5c9*/
  if ( (_BYTE)a3 ) /*0x6ee5d3*/
  {
    if ( this->queuedFocus ) /*0x6ee5d9*/
      goto LABEL_22; /*0x6ee5de*/
    firstUnit = this->firstUnit; /*0x6ee5e4*/
    if ( firstUnit ) /*0x6ee5e9*/
    {
      v5 = this->firstUnit; /*0x6ee5f9*/
      a3 = -1; /*0x6ee5fb*/
      v6 = (unsigned __int16)HIWORD(*(_DWORD *)(a2 + 4)); /*0x6ee613*/
      a2 = *((_DWORD *)dword_A83C6C + (unsigned __int16)*(_DWORD *)(a2 + 4)); /*0x6ee61b*/
      do /*0x6ee683*/
      {
        v7 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))v5->TechnoClass + 33))(v5) + 1532); /*0x6ee62b*/
        if ( v5 /*0x6ee673*/
          && v5->?
          && v5->?
          && (dword_A8E7AC || !v5->?)
          && (v5->isTeamLeader || (*((int (__thiscall **)(FootClass *))v5->TechnoClass + 11))(v5) == 2)
          && v7 > a3 )
        {
          firstUnit = v5; /*0x6ee675*/
          a3 = v7; /*0x6ee677*/
        }
        v5 = v5->nextTeamMember; /*0x6ee67b*/
      }
      while ( v5 ); /*0x6ee683*/
      v3 = this; /*0x6ee685*/
      v8 = TeamClass::ScoreMember((TeamClass *)a2, firstUnit, v6, 0); /*0x6ee698*/
      if ( v8 ) /*0x6ee69c*/
      {
        v9 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 1460); /*0x6ee6ac*/
        v10 = v8 + 39; /*0x6ee6b2*/
        v11 = *v10; /*0x6ee6bd*/
        v12 = v10[1]; /*0x6ee6bf*/
        v24 = v10[2]; /*0x6ee6c7*/
        LOWORD(a3) = v11 / 256; /*0x6ee6d7*/
        vtable0 = (int (__thiscall **)(FootClass *, _BYTE *))firstUnit->TechnoClass; /*0x6ee6e9*/
        HIWORD(a3) = v12 / 256; /*0x6ee6ee*/
        v21 = a3; /*0x6ee6f7*/
        a2 = 0; /*0x6ee6fd*/
        v14 = (_DWORD *)vtable0[18](firstUnit, v23); /*0x6ee70c*/
        LOWORD(a3) = *v14 / 256; /*0x6ee723*/
        HIWORD(a3) = v14[1] / 256; /*0x6ee743*/
        LOBYTE(v14) = firstUnit->?; /*0x6ee74c*/
        *(_DWORD *)v20 = a3; /*0x6ee756*/
        TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v20, v9, (char)v14); /*0x6ee76e*/
        v15 = (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit); /*0x6ee771*/
        *(_DWORD *)v19 = *LayerClass::Pathfinding_Find( /*0x6ee79b*/
                            (Type *)&stru_87F5F0.__pad_58[416],
                            (int)&v22,
                            &v22,
                            (__int16 *)&v21,
                            *(_DWORD *)(v15 + 1660),
                            TileIndex,
                            v9,
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
        if ( *(_DWORD *)v19 == g_BuildingLoadQueue_Array.?[1] ) /*0x6ee79f*/
        {
          TeamClass::SelectMember((int)this, 0); /*0x6ee7c7*/
        }
        else
        {
          v17 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x6ee7be*/
          TeamClass::SelectMember((int)this, (int)v17); /*0x6ee7bf*/
        }
        v3 = this; /*0x6ee7cc*/
      }
    }
  }
  if ( !v3->queuedFocus ) /*0x6ee7d0*/
  {
    v3->stepCompleted = 1; /*0x6ee7d8*/
    return; /*0x6ee7e5*/
  }
LABEL_22:
  TeamClass::UpdateMembers(v3); /*0x6ee7e8*/
}



// ==== 0x006EE800  ObjectClass::SelectTeamMembers  this=ObjectClass  sig=csp ====
char __thiscall SelectTeamMembers(ObjectClass *this, int a2, int a3)
{
  ObjectClass *v3; // edi
  int fallRate; // eax
  int v5; // edx
  int v6; // ecx
  _BYTE *v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // esi
  int v12; // edx
  _BYTE *v13; // edi
  int v14; // ecx
  int v15; // ebx
  int Capacity; // eax
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // esi
  int v21; // ebx
  int v22; // ebp
  int v23; // edi
  int v24; // eax
  int v25; // edi
  int v26; // eax
  void *v27; // eax
  _DWORD *v28; // esi
  int v29; // ebp
  _DWORD *v30; // ebx
  int v31; // edi
  char result; // al
  char v33; // [esp+13h] [ebp-39h]
  _DWORD *i; // [esp+18h] [ebp-34h] BYREF
  __int16 v36[2]; // [esp+1Ch] [ebp-30h] BYREF
  __int16 v37[2]; // [esp+20h] [ebp-2Ch] BYREF
  _DWORD v38[4]; // [esp+24h] [ebp-28h] BYREF
  VectorClass v39; // [esp+34h] [ebp-18h] BYREF
  int v40; // [esp+44h] [ebp-8h]
  int v41; // [esp+48h] [ebp-4h]

  v3 = this; /*0x6ee807*/
  v33 = 1; /*0x6ee809*/
  if ( this->nextObject ) /*0x6ee812*/
  {
    v28 = (_DWORD *)this->customSound_controller[1]; /*0x6eeaf6*/
    v29 = -1; /*0x6eeaf9*/
    v30 = v28; /*0x6eeafe*/
    if ( v28 ) /*0x6eeb00*/
    {
      do /*0x6eeb60*/
      {
        v31 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v28 + 132))(v28) + 1532); /*0x6eeb0c*/
        if ( *((_BYTE *)v28 + 144) /*0x6eeb52*/
          && v28[27]
          && (dword_A8E7AC || !*((_BYTE *)v28 + 129))
          && (*((_BYTE *)v28 + 1673) || (*(int (__thiscall **)(_DWORD *))(*v28 + 44))(v28) == 2)
          && v31 > v29 )
        {
          v30 = v28; /*0x6eeb54*/
          v29 = v31; /*0x6eeb56*/
        }
        v28 = (_DWORD *)v28[374]; /*0x6eeb58*/
      }
      while ( v28 ); /*0x6eeb60*/
      v3 = this; /*0x6eeb62*/
    }
    if ( v30 && v30[43] != 2 && v30[45] != 2 ) /*0x6eeb7f*/
    {
      Team_Helper((ObjectClass *)v3->fallRate, (int)v3->nextObject); /*0x6eeb88*/
      v3->nextObject = 0; /*0x6eeb8d*/
    }
  }
  else
  {
    fallRate = this->fallRate; /*0x6ee81d*/
    v5 = 0; /*0x6ee820*/
    v6 = *(_DWORD *)(fallRate + 22060); /*0x6ee822*/
    if ( v6 <= 0 ) /*0x6ee82a*/
      goto LABEL_47; /*0x6ee82a*/
    v7 = (_BYTE *)(*(_DWORD *)(fallRate + 22048) + 4); /*0x6ee836*/
    do /*0x6ee843*/
    {
      if ( !*v7 ) /*0x6ee839*/
        ++v5; /*0x6ee83e*/
      v7 += 8; /*0x6ee83f*/
      --v6; /*0x6ee842*/
    }
    while ( v6 ); /*0x6ee843*/
    if ( v5 <= 0 ) /*0x6ee847*/
    {
LABEL_47:
      v33 = 0; /*0x6eeaec*/
    }
    else
    {
      v8 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v5 - 1); /*0x6ee85c*/
      v9 = v3->fallRate; /*0x6ee861*/
      v10 = 0; /*0x6ee864*/
      v11 = *(_DWORD *)(v9 + 22060); /*0x6ee866*/
      if ( v11 <= 0 ) /*0x6ee86e*/
        goto LABEL_17; /*0x6ee86e*/
      v12 = *(_DWORD *)(v9 + 22048); /*0x6ee870*/
      v13 = (_BYTE *)(v12 + 4); /*0x6ee876*/
      while ( *v13 ) /*0x6ee87c*/
      {
LABEL_13:
        ++v10; /*0x6ee883*/
        v13 += 8; /*0x6ee884*/
        if ( v10 >= v11 ) /*0x6ee889*/
          goto LABEL_16; /*0x6ee889*/
      }
      if ( v8 ) /*0x6ee880*/
      {
        --v8; /*0x6ee882*/
        goto LABEL_13; /*0x6ee882*/
      }
      this->nextObject = *(ObjectClass **)(v12 + 8 * v10); /*0x6ee894*/
LABEL_16:
      v3 = this; /*0x6ee897*/
LABEL_17:
      VectorClass::BuildingConstructor(&v39, 0, 0); /*0x6ee89b*/
      v14 = 0; /*0x6ee8ad*/
      v15 = 0; /*0x6ee8af*/
      v39.vtable0 = &DynamicVectorClass<BuildingClass *>::`vftable'; /*0x6ee8b1*/
      v41 = 10; /*0x6ee8bb*/
      v40 = 0; /*0x6ee8c3*/
      if ( stru_A8EB00.ObjectTypeClass[20] > 0 ) /*0x6ee8c7*/
      {
        Capacity = v39.Capacity; /*0x6ee8c9*/
        do /*0x6ee8d6*/
        {
          v17 = stru_A8EB00.ObjectTypeClass[17] + 4 * v15; /*0x6ee8d6*/
          if ( v3->nextObject == *(ObjectClass **)(*(_DWORD *)v17 + 540) ) /*0x6ee8e2*/
          {
            if ( v14 < Capacity ) /*0x6ee8e6*/
              goto LABEL_25; /*0x6ee8e6*/
            if ( !v39.IsAllocated && Capacity || v41 <= 0 ) /*0x6ee8fa*/
              goto LABEL_27; /*0x6ee8fa*/
            if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v39.vtable0 + 2))( /*0x6ee909*/
                   &v39,
                   v41 + Capacity,
                   0) )
            {
LABEL_25:
              v18 = v40++; /*0x6ee918*/
              *((_DWORD *)v39.Items + v18) = *(_DWORD *)v17; /*0x6ee921*/
            }
            Capacity = v39.Capacity; /*0x6ee924*/
          }
LABEL_27:
          ++v15; /*0x6ee928*/
          v14 = v40; /*0x6ee931*/
        }
        while ( v15 < stru_A8EB00.ObjectTypeClass[20] ); /*0x6ee8d6*/
      }
      if ( v14 <= 0 ) /*0x6ee939*/
      {
        Team_Helper((ObjectClass *)v3->fallRate, (int)v3->nextObject); /*0x6eeab2*/
        v3->nextObject = 0; /*0x6eeab7*/
      }
      else
      {
        v19 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v14 - 1); /*0x6ee94e*/
        v20 = v3->customSound_controller[1]; /*0x6ee957*/
        v21 = -1; /*0x6ee95a*/
        v22 = v20; /*0x6ee95d*/
        for ( i = (_DWORD *)*((_DWORD *)v39.Items + v19); v20; v20 = *(_DWORD *)(v20 + 1496) ) /*0x6ee968*/
        {
          v23 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v20 + 132))(v20) + 1532); /*0x6ee974*/
          if ( *(_BYTE *)(v20 + 144) /*0x6ee9ba*/
            && *(_DWORD *)(v20 + 108)
            && (dword_A8E7AC || !*(_BYTE *)(v20 + 129))
            && (*(_BYTE *)(v20 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 44))(v20) == 2)
            && v23 > v21 )
          {
            v22 = v20; /*0x6ee9bc*/
            v21 = v23; /*0x6ee9be*/
          }
        }
        v36[0] = 0; /*0x6ee9ce*/
        v36[1] = 0; /*0x6ee9d3*/
        v24 = i[39]; /*0x6ee9ec*/
        v25 = i[40]; /*0x6ee9ee*/
        v38[3] = i[41]; /*0x6ee9f4*/
        LOWORD(i) = v24 / 256; /*0x6eea04*/
        HIWORD(i) = v25 / 256; /*0x6eea21*/
        v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 132))(v22); /*0x6eea3d*/
        *(_DWORD *)v37 = *LayerClass::Pathfinding_Find( /*0x6eea67*/
                            (Type *)&stru_87F5F0.__pad_58[416],
                            (int)&i,
                            v38,
                            (__int16 *)&i,
                            *(_DWORD *)(v26 + 1660),
                            -1,
                            0,
                            0,
                            1,
                            1,
                            0,
                            0,
                            0,
                            1,
                            v36,
                            0,
                            0);
        if ( *(_DWORD *)v37 == g_BuildingLoadQueue_Array.?[1] ) /*0x6eea6b*/
        {
          TeamClass::SelectMember((int)this, 0); /*0x6eeaa0*/
        }
        else
        {
          v27 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v37); /*0x6eea85*/
          TeamClass::SelectMember((int)this, (int)v27); /*0x6eea8f*/
        }
        v3 = this; /*0x6eeaa5*/
      }
      v39.vtable0 = &VectorClass<BuildingClass *>::`vftable'; /*0x6eeac2*/
      if ( v39.Items && v39.IsAllocated ) /*0x6eead8*/
        __3_YAXPAX_Z(v39.Items); /*0x6eeadf*/
    }
  }
  TeamClass::UpdateMembers((TeamClass *)v3); /*0x6eeb96*/
  result = v33; /*0x6eeb9b*/
  if ( v33 ) /*0x6eeba1*/
    v3->needsRedraw = 0; /*0x6eeba3*/
  else
    v3->needsRedraw = 1; /*0x6eebb4*/
  return result; /*0x6eebaa*/
}



// ==== 0x006EEBD0  DamageMapClassArea  this=FootClass  sig=csp ====
_DWORD *__fastcall MapClass_DamageArea(int a1, #375 *a2, int a3, int a4, char a5)
{
  int v5; // ecx
  _DWORD *result; // eax
  _DWORD *v7; // esi
  #375 *v8; // eax
  int v9; // edi
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // edx
  _DWORD *v13; // eax
  int v14; // edx
  int TileData; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // ebx
  int v19; // ecx
  int v20; // edx
  double v21; // st7
  int v22; // eax
  int v23; // edi
  int v24; // ebx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  double v29; // st7
  bool v30; // [esp+1Bh] [ebp-75h]
  int v31; // [esp+1Ch] [ebp-74h]
  int v32; // [esp+20h] [ebp-70h]
  int v33; // [esp+24h] [ebp-6Ch]
  int v34; // [esp+28h] [ebp-68h]
  int v35; // [esp+2Ch] [ebp-64h]
  _DWORD *v36; // [esp+30h] [ebp-60h]
  _DWORD *v37; // [esp+34h] [ebp-5Ch]
  int v40; // [esp+40h] [ebp-50h] BYREF
  int v41; // [esp+44h] [ebp-4Ch] BYREF
  int v42; // [esp+48h] [ebp-48h]
  int v43; // [esp+4Ch] [ebp-44h]
  int v44; // [esp+50h] [ebp-40h]
  int v45; // [esp+54h] [ebp-3Ch]
  int v46; // [esp+58h] [ebp-38h]
  int v47; // [esp+5Ch] [ebp-34h]
  int v48; // [esp+68h] [ebp-28h]
  int v49; // [esp+74h] [ebp-1Ch]
  char v50[12]; // [esp+78h] [ebp-18h] BYREF
  char v51[12]; // [esp+84h] [ebp-Ch] BYREF

  v5 = 0; /*0x6eebe4*/
  v31 = -1; /*0x6eebe6*/
  v32 = -1; /*0x6eebea*/
  result = 0; /*0x6eebf5*/
  v36 = 0; /*0x6eebfb*/
  v37 = 0; /*0x6eebff*/
  v35 = 0; /*0x6eec03*/
  if ( dword_A8EB50 <= 0 ) /*0x6eec07*/
  {
LABEL_22:
    if ( !a5 ) /*0x6eee74*/
      return v37; /*0x6eee76*/
    return result; /*0x6eee76*/
  }
  do /*0x6eee55*/
  {
    v7 = (_DWORD *)*((_DWORD *)dword_A8EB44 + v5); /*0x6eec1a*/
    v8 = (#375 *)v7[135]; /*0x6eec1d*/
    v30 = v8 == a2; /*0x6eec30*/
    if ( v7[328] != a1 ) /*0x6eec34*/
      goto LABEL_19; /*0x6eec34*/
    if ( v8 == a2 ) /*0x6eec3c*/
    {
      v9 = a3; /*0x6eec6a*/
    }
    else
    {
      v9 = a3; /*0x6eec3e*/
      if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(a3 + 540), v8) /*0x6eec62*/
        && !*(_BYTE *)(*(_DWORD *)(v7[135] + 52) + 422) )
      {
        goto LABEL_19; /*0x6eec62*/
      }
    }
    v10 = -1; /*0x6eec70*/
    switch ( a4 ) /*0x6eec7c*/
    {
      case 0: /*0x6eec7c*/
        v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v7 + 72))(v7, v50); /*0x6eec8c*/
        LOWORD(v33) = *v11 / 256; /*0x6eec9f*/
        v12 = *(_DWORD *)(v9 + 540); /*0x6eecb0*/
        HIWORD(v33) = v11[1] / 256; /*0x6eecb9*/
        v40 = v33; /*0x6eecc6*/
        v10 = 0x7FFFFFFF - CellClass::GetTileData((__int16 *)&v40, v12); /*0x6eecdb*/
        break; /*0x6eecdd*/
      case 1: /*0x6eec7c*/
        v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v7 + 72))(v7, v51); /*0x6eeceb*/
        LOWORD(v34) = *v13 / 256; /*0x6eecfe*/
        v14 = *(_DWORD *)(v9 + 540); /*0x6eed0f*/
        HIWORD(v34) = v13[1] / 256; /*0x6eed18*/
        v41 = v34; /*0x6eed25*/
        TileData = CellClass::GetTileData((__int16 *)&v41, v14); /*0x6eed30*/
        goto LABEL_13; /*0x6eed35*/
      case 2: /*0x6eec7c*/
        v16 = v9 + 156; /*0x6eed46*/
        v17 = *(_DWORD *)(v9 + 156); /*0x6eed4b*/
        v18 = *(_DWORD *)(v16 + 4); /*0x6eed4d*/
        v48 = *(_DWORD *)(v16 + 8); /*0x6eed53*/
        v19 = v7[40]; /*0x6eed5d*/
        v42 = v7[39] - v17; /*0x6eed60*/
        v20 = v7[41]; /*0x6eed6a*/
        v43 = v19 - v18; /*0x6eed6d*/
        v44 = v20 - v48; /*0x6eed77*/
        v21 = Math::Sqrt( /*0x6eed9c*/
                (double)v42 * (double)v42
              + (double)(v20 - v48) * (double)(v20 - v48)
              + (double)(v19 - v18) * (double)(v19 - v18));
        v10 = 0x7FFFFFFF - Math::RoundToInt(v21); /*0x6eedae*/
        break; /*0x6eedb0*/
      case 3: /*0x6eec7c*/
        v22 = v9 + 156; /*0x6eedbe*/
        v23 = *(_DWORD *)(v9 + 156); /*0x6eedc3*/
        v24 = *(_DWORD *)(v22 + 4); /*0x6eedc5*/
        v25 = *(_DWORD *)(v22 + 8); /*0x6eedc8*/
        v26 = v7[39]; /*0x6eedcb*/
        v49 = v25; /*0x6eedcd*/
        v27 = v7[40] - v24; /*0x6eedda*/
        v45 = v26 - v23; /*0x6eeddc*/
        v28 = v7[41]; /*0x6eede0*/
        v46 = v27; /*0x6eede3*/
        v47 = v28 - v49; /*0x6eeded*/
        v29 = Math::Sqrt( /*0x6eee12*/
                (double)(v26 - v23) * (double)(v26 - v23)
              + (double)(v28 - v49) * (double)(v28 - v49)
              + (double)v27 * (double)v27);
        TileData = Math::RoundToInt(v29); /*0x6eee1a*/
LABEL_13:
        v10 = TileData; /*0x6eee1f*/
        break; /*0x6eee1f*/
      default:
        break;
    }
    if ( v10 > v31 && v30 ) /*0x6eee2d*/
    {
      v36 = v7; /*0x6eee2f*/
      v31 = v10; /*0x6eee33*/
    }
    if ( v10 > v32 ) /*0x6eee3b*/
    {
      v37 = v7; /*0x6eee3d*/
      v32 = v10; /*0x6eee41*/
    }
LABEL_19:
    v5 = ++v35; /*0x6eee45*/
  }
  while ( v35 < dword_A8EB50 ); /*0x6eee55*/
  result = v36; /*0x6eee5b*/
  if ( !v36 || v31 <= v32 ) /*0x6eee6d*/
    goto LABEL_22; /*0x6eee6d*/
  return result; /*0x6eee7a*/
}



// ==== 0x006EEEA0  TeamClass::ScoreMember  this=TeamClass  sig=csp ====
_DWORD *__thiscall TeamClass::ScoreMember(TeamClass *this, _DWORD *a2, int a3, int a4)
{
  double v4; // st7
  _DWORD *result; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // edx
  _DWORD *v9; // esi
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // edx
  _DWORD *v13; // eax
  int v14; // edx
  int TileData; // eax
  int v16; // ebx
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ebx
  int v21; // ecx
  int v22; // edx
  double v23; // [esp+0h] [ebp-88h]
  double v24; // [esp+0h] [ebp-88h]
  int v25; // [esp+18h] [ebp-70h]
  int v26; // [esp+1Ch] [ebp-6Ch]
  int v27; // [esp+20h] [ebp-68h]
  _DWORD *v28; // [esp+24h] [ebp-64h]
  int v29; // [esp+28h] [ebp-60h]
  int v30; // [esp+2Ch] [ebp-5Ch]
  int v32; // [esp+34h] [ebp-54h] BYREF
  int v33; // [esp+38h] [ebp-50h] BYREF
  int v34; // [esp+3Ch] [ebp-4Ch]
  int v35; // [esp+40h] [ebp-48h]
  int v36; // [esp+44h] [ebp-44h]
  int v37; // [esp+48h] [ebp-40h]
  int v38; // [esp+4Ch] [ebp-3Ch]
  int v39; // [esp+50h] [ebp-38h]
  int v40; // [esp+54h] [ebp-34h]
  int v41; // [esp+5Ch] [ebp-2Ch]
  int v42; // [esp+60h] [ebp-28h]
  int v43; // [esp+68h] [ebp-20h]
  int v44; // [esp+6Ch] [ebp-1Ch]
  char v45[12]; // [esp+70h] [ebp-18h] BYREF
  char v46[12]; // [esp+7Ch] [ebp-Ch] BYREF

  result = 0; /*0x6eeeb3*/
  v6 = a2[135]; /*0x6eeeb5*/
  v7 = 0; /*0x6eeebb*/
  v28 = 0; /*0x6eeebd*/
  v27 = -1; /*0x6eeec1*/
  v30 = v6; /*0x6eeecc*/
  v34 = *(_DWORD *)(v6 + 120); /*0x6eeed2*/
  v29 = 0; /*0x6eeed6*/
  if ( v34 > 0 ) /*0x6eeeda*/
  {
    v8 = a3; /*0x6eeee0*/
    while ( 1 ) /*0x6eeeef*/
    {
      v9 = *(_DWORD **)(*(_DWORD *)(v6 + 108) + 4 * v7); /*0x6eeeef*/
      if ( (TeamClass *)v9[328] == this ) /*0x6eeefc*/
      {
        v10 = -1; /*0x6eef02*/
        switch ( v8 ) /*0x6eef0e*/
        {
          case 0: /*0x6eef0e*/
            v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v9 + 72))(v9, v45); /*0x6eef1e*/
            LOWORD(v25) = *v11 / 256; /*0x6eef31*/
            v12 = a2[135]; /*0x6eef42*/
            HIWORD(v25) = v11[1] / 256; /*0x6eef4b*/
            v32 = v25; /*0x6eef58*/
            v10 = 0x7FFFFFFF - CellClass::GetTileData((__int16 *)&v32, v12); /*0x6eef6d*/
            break; /*0x6eef6f*/
          case 1: /*0x6eef0e*/
            v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v9 + 72))(v9, v46); /*0x6eef7d*/
            LOWORD(v26) = *v13 / 256; /*0x6eef90*/
            v14 = a2[135]; /*0x6eefa1*/
            HIWORD(v26) = v13[1] / 256; /*0x6eefaa*/
            v33 = v26; /*0x6eefb7*/
            TileData = CellClass::GetTileData((__int16 *)&v33, v14); /*0x6eefc2*/
            goto LABEL_10; /*0x6eefc7*/
          case 2: /*0x6eef0e*/
            v16 = a2[39]; /*0x6eefd5*/
            v41 = a2[40]; /*0x6eefda*/
            v42 = a2[41]; /*0x6eefe9*/
            v17 = v9[40]; /*0x6eeff5*/
            v35 = v9[39] - v16; /*0x6eeff8*/
            v18 = v9[41]; /*0x6eeffe*/
            v36 = v17 - v41; /*0x6ef001*/
            __asm { fild [esp+88h+var_44] } /*0x6ef009*/
            v37 = v18 - v42; /*0x6ef00f*/
            __asm /*0x6ef013*/
            {
              fild [esp+88h+var_40]
              fild [esp+88h+var_48]
              fld st
              fmul st, st(1)
              fld st(2)
              fmul st, st(3)
              faddp st(1), st
              fld st(3)
              fmul st, st(4)
              faddp st(1), st
              fstp [esp+88h+var_88]; double
              fstp st
              fstp st
              fstp st
            }
            Math::Sqrt(v23); /*0x6ef034*/
            LOWORD(v19) = Math::RoundToInt(v4); /*0x6ef03c*/
            v10 = 0x7FFFFFFF - v19; /*0x6ef046*/
            break; /*0x6ef048*/
          case 3: /*0x6eef0e*/
            v20 = a2[39]; /*0x6ef053*/
            v43 = a2[40]; /*0x6ef058*/
            v44 = a2[41]; /*0x6ef065*/
            v21 = v9[40]; /*0x6ef073*/
            v38 = v9[39] - v20; /*0x6ef076*/
            v22 = v9[41]; /*0x6ef07e*/
            v39 = v21 - v43; /*0x6ef083*/
            __asm { fild [esp+88h+var_38] } /*0x6ef089*/
            v40 = v22 - v44; /*0x6ef08d*/
            __asm /*0x6ef091*/
            {
              fild [esp+88h+var_34]
              fild [esp+88h+var_3C]
              fld st
              fmul st, st(1)
              fld st(2)
              fmul st, st(3)
              faddp st(1), st
              fld st(3)
              fmul st, st(4)
              faddp st(1), st
              fstp [esp+88h+var_88]; double
              fstp st
              fstp st
              fstp st
            }
            Math::Sqrt(v24); /*0x6ef0b2*/
            LOWORD(TileData) = Math::RoundToInt(v4); /*0x6ef0ba*/
LABEL_10:
            v10 = TileData; /*0x6ef0bf*/
            break; /*0x6ef0bf*/
          default:
            break;
        }
        if ( v10 <= v27 ) /*0x6ef0c5*/
        {
          result = v28; /*0x6ef0d3*/
        }
        else
        {
          result = v9; /*0x6ef0c7*/
          v27 = v10; /*0x6ef0c9*/
          v28 = v9; /*0x6ef0cd*/
        }
      }
      v7 = ++v29; /*0x6ef0df*/
      if ( v29 >= v34 ) /*0x6ef0e6*/
        break; /*0x6ef0e6*/
      v8 = a3; /*0x6eeee5*/
      v6 = v30; /*0x6eeee8*/
    }
  }
  return result; /*0x6ef0ec*/
}



// ==== 0x006EF110  ObjectClass::DispatchTeamOrders  this=ObjectClass  sig=csp ====
char __thiscall DispatchTeamOrders(ObjectClass *this, int a2, int a3)
{
  ObjectClass *v3; // ebx
  int v4; // esi
  int v5; // ebp
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // eax
  CellClass *v9; // eax
  int v10; // eax
  TechnoClass *v11; // esi
  int v12; // ebp
  int v13; // edi
  int v14; // ebx
  _DWORD *v15; // edi
  TechnoClass *v16; // ebp
  char v18; // [esp+19h] [ebp-19h]
  int v20; // [esp+1Eh] [ebp-14h] BYREF
  _BYTE v21[12]; // [esp+26h] [ebp-Ch] BYREF
  char v22; // [esp+36h] [ebp+4h]

  v3 = this; /*0x6ef114*/
  v4 = this->customSound_controller[1]; /*0x6ef118*/
  v18 = 1; /*0x6ef122*/
  if ( !v4 ) /*0x6ef127*/
    goto LABEL_28; /*0x6ef127*/
  do /*0x6ef2ab*/
  {
    v5 = *(_DWORD *)(v4 + 1496); /*0x6ef12d*/
    if ( v4 && *(_BYTE *)(v4 + 144) ) /*0x6ef13b*/
    {
      if ( *(_DWORD *)(v4 + 108) && (dword_A8E7AC || !*(_BYTE *)(v4 + 129)) && !*(_BYTE *)(v4 + 1673) ) /*0x6ef16b*/
      {
        v6 = *SessionClass::GetEntry((SessionClass *)v3->owningHouseIndex, &v20); /*0x6ef182*/
        if ( v6 == 54 || v6 == 53 ) /*0x6ef18c*/
          v7 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6ef1a2*/
        else
          v7 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6ef194*/
        if ( ObjectClass::DistanceTo((ObjectClass *)v4, (int)v3->attachedTag) <= v7 ) /*0x6ef1b5*/
        {
          *(_BYTE *)(v4 + 1673) = 1; /*0x6ef1ed*/
        }
        else if ( !*(_DWORD *)(v4 + 1444) ) /*0x6ef1b7*/
        {
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 488))(v4, 2, 0); /*0x6ef1c9*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 968))(v4, 0); /*0x6ef1d5*/
          (*(void (__thiscall **)(int, TagClass *, int))(*(_DWORD *)v4 + 1152))(v4, v3->attachedTag, 1); /*0x6ef1e5*/
        }
      }
      if ( *(_BYTE *)(v4 + 144) /*0x6ef238*/
        && *(_DWORD *)(v4 + 108)
        && (dword_A8E7AC || !*(_BYTE *)(v4 + 129))
        && (*(_BYTE *)(v4 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 2) )
      {
        if ( *(_DWORD *)(v4 + 280) ) /*0x6ef23a*/
        {
          v18 = 0; /*0x6ef24d*/
          v8 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v21); /*0x6ef252*/
          v9 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v8); /*0x6ef25b*/
          if ( !Cell::IsBridge((Cell *)v9) && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 388))(v4) != 16 ) /*0x6ef278*/
          {
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v4 + 1152))(v4, 0, 1); /*0x6ef282*/
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 968))(v4, 0); /*0x6ef28e*/
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 488))(v4, 16, 0); /*0x6ef29c*/
            v18 = 0; /*0x6ef2a2*/
          }
        }
      }
    }
    v4 = v5; /*0x6ef2a9*/
  }
  while ( v5 ); /*0x6ef2ab*/
  LOBYTE(v10) = v18; /*0x6ef2b1*/
  if ( v18 ) /*0x6ef2b7*/
  {
LABEL_28:
    v11 = (TechnoClass *)v3->customSound_controller[1]; /*0x6ef2c4*/
    v12 = 0; /*0x6ef2c7*/
    v10 = *(_DWORD *)(v3->occupant + 228); /*0x6ef2c9*/
    v13 = *(_DWORD *)(a2 + 4); /*0x6ef2cf*/
    v20 = v13; /*0x6ef2d2*/
    if ( *(int *)(v10 + 156) <= 0 ) /*0x6ef2de*/
    {
LABEL_34:
      v22 = 0; /*0x6ef323*/
    }
    else
    {
      v14 = 168; /*0x6ef2e0*/
      while ( 1 ) /*0x6ef2e5*/
      {
        v15 = *(_DWORD **)(v14 + v10); /*0x6ef2e5*/
        if ( (*(int (__thiscall **)(_DWORD *))(*v15 + 44))(v15) == 3 ) /*0x6ef2f2*/
        {
          v10 = v15[376]; /*0x6ef2f4*/
          if ( v10 > 0 ) /*0x6ef2fc*/
            break; /*0x6ef2fc*/
        }
        ++v12; /*0x6ef306*/
        v14 += 8; /*0x6ef307*/
        v10 = *(_DWORD *)(this->occupant + 228); /*0x6ef30d*/
        if ( v12 >= *(_DWORD *)(v10 + 156) ) /*0x6ef319*/
        {
          v13 = v20; /*0x6ef31b*/
          v3 = this; /*0x6ef31f*/
          goto LABEL_34; /*0x6ef31f*/
        }
      }
      v13 = v20; /*0x6ef3e7*/
      v3 = this; /*0x6ef3eb*/
      v22 = 1; /*0x6ef3ef*/
    }
    if ( v11 ) /*0x6ef32a*/
    {
      while ( 1 ) /*0x6ef332*/
      {
        v16 = *(TechnoClass **)&v11[1].?; /*0x6ef332*/
        v10 = (*((int (__thiscall **)(TechnoClass *))v11->RadioClass + 33))(v11); /*0x6ef33a*/
        if ( !*(_DWORD *)(v10 + 1504) ) /*0x6ef340*/
          break; /*0x6ef340*/
        if ( v22 ) /*0x6ef354*/
        {
          v10 = (*((int (__thiscall **)(TechnoClass *))v11->RadioClass + 11))(v11); /*0x6ef35a*/
          if ( v10 != 2 ) /*0x6ef360*/
            break; /*0x6ef360*/
        }
        v10 = (*((int (__thiscall **)(TechnoClass *))v11->RadioClass + 33))(v11); /*0x6ef36a*/
        if ( *(int *)(v10 + 1504) > 0 ) /*0x6ef378*/
        {
          LOBYTE(v10) = *(_BYTE *)(v3->occupant + 244); /*0x6ef381*/
          if ( (_BYTE)v10 ) /*0x6ef389*/
          {
            TeamClass::LiberateMember_Start((int *)v3, (int)v11, 0xFFFFFFFF, 0); /*0x6ef392*/
            (*((void (__thiscall **)(TechnoClass *, _DWORD))v11->RadioClass + 242))(v11, 0); /*0x6ef39d*/
            (*((void (__thiscall **)(TechnoClass *, AbstractClass *, int))v11->RadioClass + 288))(v11, v11->focus, 1); /*0x6ef3b0*/
            (*((void (__thiscall **)(TechnoClass *, int, _DWORD))v11->RadioClass + 122))(v11, 2, 0); /*0x6ef3be*/
            if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))v11->RadioClass + 128))(v11) ) /*0x6ef3c8*/
              (*((void (__thiscall **)(TechnoClass *))v11->RadioClass + 123))(v11); /*0x6ef3d6*/
            LOBYTE(v10) = TechnoClass::SetFocus(v11, 0); /*0x6ef3e0*/
            goto LABEL_51; /*0x6ef3e5*/
          }
          if ( v13 == 3 || v13 == 2 ) /*0x6ef401*/
            goto LABEL_50; /*0x6ef401*/
        }
LABEL_51:
        v11 = v16; /*0x6ef435*/
        if ( !v16 ) /*0x6ef439*/
          goto LABEL_52; /*0x6ef439*/
      }
      if ( v13 != 1 && v13 != 3 ) /*0x6ef40d*/
        goto LABEL_51; /*0x6ef40d*/
LABEL_50:
      TeamClass::LiberateMember_Start((int *)v3, (int)v11, 0xFFFFFFFF, 0); /*0x6ef40f*/
      (*((void (__thiscall **)(TechnoClass *, _DWORD))v11->RadioClass + 242))(v11, 0); /*0x6ef421*/
      LOBYTE(v10) = (*((int (__thiscall **)(TechnoClass *, _DWORD, int))v11->RadioClass + 288))(v11, 0, 1); /*0x6ef42f*/
      goto LABEL_51; /*0x6ef42f*/
    }
LABEL_52:
    v3->needsRedraw = 1; /*0x6ef43f*/
  }
  return v10; /*0x6ef446*/
}



// ==== 0x006EF450  ObjectClass::method_6EF450  this=ObjectClass  sig=csp ====
char __thiscall sub_6EF450(ObjectClass *this, int a2, int a3)
{
  this->needsRedraw = 1; /*0x6ef452*/
  this->hasParachute = 1; /*0x6ef458*/
  return 1; /*0x6ef45e*/
}



// ==== 0x006EF470  ObjectClass::Team_Create  this=ObjectClass  sig=csp ====
char __thiscall Team_Create(ObjectClass *this)
{
  int v2; // edi
  int v3; // eax
  int i; // ebx
  int *v5; // esi

  v2 = 0; /*0x6ef476*/
  v3 = *(_DWORD *)(this->occupant + 228); /*0x6ef47b*/
  if ( *(int *)(v3 + 156) <= 0 ) /*0x6ef489*/
    return 0; /*0x6ef4be*/
  for ( i = 168; ; i += 8 ) /*0x6ef48b*/
  {
    v5 = *(int **)(i + v3); /*0x6ef490*/
    if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 3 && v5[376] > 0 ) /*0x6ef4a7*/
      break; /*0x6ef4a7*/
    ++v2; /*0x6ef4ac*/
    v3 = *(_DWORD *)(this->occupant + 228); /*0x6ef4b0*/
    if ( v2 >= *(_DWORD *)(v3 + 156) ) /*0x6ef4bc*/
      return 0; /*0x6ef4bc*/
  }
  return 1; /*0x6ef4be*/
}



// ==== 0x006EF4D0  HouseClass::UpdateProductionQueue  this=HouseClass  sig=csp ====
int __thiscall HouseClass::UpdateProductionQueue(HouseClass *this, int a2)
{
  int v3; // esi
  int v4; // edi
  int result; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  _DWORD *i; // edi
  int v13; // ecx
  int v14; // ecx

  v3 = a2; /*0x6ef4d4*/
  v4 = 0; /*0x6ef4dc*/
  result = *(_DWORD *)(this->arrayIndex + 228); /*0x6ef4de*/
  if ( *(int *)(result + 156) > 0 ) /*0x6ef4ec*/
  {
    do /*0x6ef55b*/
    {
      v6 = *(_DWORD *)(result + 8 * v4 + 168); /*0x6ef4ef*/
      v7 = *(_DWORD *)(result + 8 * v4 + 164); /*0x6ef4f6*/
      if ( v7 > 0 ) /*0x6ef4ff*/
      {
        a2 = v7; /*0x6ef501*/
        do /*0x6ef549*/
        {
          v8 = *(_DWORD *)(v3 + 8); /*0x6ef505*/
          if ( *(_DWORD *)(v3 + 16) < v8 /*0x6ef52a*/
            || (*(_BYTE *)(v3 + 13) || !v8)
            && (v9 = *(_DWORD *)(v3 + 20), v9 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 8))(v3, v8 + v9, 0) )
          {
            v10 = *(_DWORD *)(v3 + 16); /*0x6ef531*/
            v11 = *(_DWORD *)(v3 + 4); /*0x6ef534*/
            *(_DWORD *)(v3 + 16) = v10 + 1; /*0x6ef53a*/
            *(_DWORD *)(v11 + 4 * v10) = v6; /*0x6ef53d*/
          }
          --a2; /*0x6ef545*/
        }
        while ( a2 ); /*0x6ef549*/
      }
      ++v4; /*0x6ef54e*/
      result = *(_DWORD *)(this->arrayIndex + 228); /*0x6ef54f*/
    }
    while ( v4 < *(_DWORD *)(result + 156) ); /*0x6ef55b*/
  }
  for ( i = (_DWORD *)this->repairStationsCount; i; i = (_DWORD *)i[374] ) /*0x6ef563*/
  {
    a2 = (*(int (__thiscall **)(_DWORD *))(*i + 132))(i); /*0x6ef573*/
    result = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v3 + 16))(v3, &a2); /*0x6ef57c*/
    if ( result != -1 ) /*0x6ef582*/
    {
      v13 = *(_DWORD *)(v3 + 16); /*0x6ef584*/
      if ( result < v13 ) /*0x6ef589*/
      {
        v14 = v13 - 1; /*0x6ef58b*/
        for ( *(_DWORD *)(v3 + 16) = v14; /*0x6ef591*/
              result < *(_DWORD *)(v3 + 16);
              *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * result - 4) = *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * result) )
        {
          ++result; /*0x6ef596*/
        }
      }
    }
  }
  return result; /*0x6ef5af*/
}



// ==== 0x006EF5F0  TeamTypeClass::Check  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::Check(TeamTypeClass *this, int a2)
{
  int result; // eax

  for ( result = *(_DWORD *)&this->__pad_4C[8]; result; result = *(_DWORD *)(result + 1496) ) /*0x6ef5f5*/
    *(_DWORD *)(result + 240) = a2; /*0x6ef5fb*/
  return result; /*0x6ef60b*/
}



// ==== 0x006EF610  TeamClass::PlayMemberAnimation  this=TeamClass  sig=csp ====
void __thiscall sub_6EF610(int this, int a2, char a3)
{
  int v3; // eax
  int v4; // esi
  int v5; // ebx
  void *v6; // ebp
  void **v7; // edi
  int *v8; // eax
  void **v9; // eax
  _BYTE v11[12]; // [esp+10h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)(a2 + 4); /*0x6ef61e*/
  if ( a3 /*0x6ef65e*/
    && (unsigned __int16)v3 < dword_8B4160
    && (v4 = *(_DWORD *)(this + 84), v5 = HIWORD(v3), v6 = (void *)*((_DWORD *)dword_8B4154 + (unsigned __int16)v3), v4) )
  {
    do /*0x6ef6a9*/
    {
      v7 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6ef66b*/
      if ( v7 ) /*0x6ef672*/
      {
        v8 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v11); /*0x6ef689*/
        v9 = AnimClass::ctor(v7, v6, v8, 0, v5, (void *)0x600, 0, 0); /*0x6ef690*/
        if ( v9 ) /*0x6ef697*/
          BuildingClass::AimTurret(v9, (_BYTE *)v4); /*0x6ef69c*/
      }
      v4 = *(_DWORD *)(v4 + 1496); /*0x6ef6a1*/
    }
    while ( v4 ); /*0x6ef6a9*/
    *(_BYTE *)(this + 128) = 1; /*0x6ef6b2*/
  }
  else
  {
    *(_BYTE *)(this + 128) = 1; /*0x6ef6c2*/
  }
}



// ==== 0x006EF700  ObjectClass::DeployTeamMembersAtStart  this=ObjectClass  sig=csp ====
void __thiscall DeployTeamMembersAtStart(int this, int a2, char a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  int v5; // ebx
  int v6; // eax
  _DWORD *v7; // eax
  int *StartCoordsHouseClass; // eax
  int v9; // esi
  bool v10; // zf
  int v11; // ebx
  int v12; // eax
  int *v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  int *v17; // edx
  double v18; // st7
  int v19; // edx
  double v20; // st7
  double v21; // st7
  int v22; // eax
  int v23; // eax
  void *v24; // eax
  int v25; // esi
  int v26; // [esp+24h] [ebp-38h] BYREF
  int v27; // [esp+28h] [ebp-34h]
  double v28; // [esp+2Ch] [ebp-30h] BYREF
  double v29; // [esp+34h] [ebp-28h] BYREF
  double v30; // [esp+3Ch] [ebp-20h]
  int v31; // [esp+44h] [ebp-18h]
  int v32; // [esp+48h] [ebp-14h]
  int v33; // [esp+4Ch] [ebp-10h]
  _DWORD v34[3]; // [esp+50h] [ebp-Ch] BYREF

  v27 = this; /*0x6ef711*/
  if ( a3 ) /*0x6ef715*/
  {
    v3 = *(_DWORD **)(this + 84); /*0x6ef71b*/
    LODWORD(v28) = -1; /*0x6ef71e*/
    v4 = v3; /*0x6ef728*/
    if ( v3 ) /*0x6ef72a*/
    {
      do /*0x6ef771*/
      {
        v5 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v3 + 132))(v3) + 1532); /*0x6ef736*/
        if ( TechnoClass::IsDeployed((int)v3) /*0x6ef761*/
          && (*((_BYTE *)v3 + 1673) || (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3) == 2)
          && v5 > SLODWORD(v28) )
        {
          v4 = v3; /*0x6ef763*/
          LODWORD(v28) = v5; /*0x6ef765*/
        }
        v3 = (_DWORD *)v3[374]; /*0x6ef769*/
      }
      while ( v3 ); /*0x6ef771*/
      this = v27; /*0x6ef773*/
    }
    if ( !v4 ) /*0x6ef779*/
    {
      *(_BYTE *)(this + 128) = 1; /*0x6ef77b*/
      return; /*0x6ef788*/
    }
    v6 = *(_DWORD *)(v4[135] + 22016); /*0x6ef791*/
    if ( v6 == -1 || (v7 = *(_DWORD **)&dword_A8022C->AbstractClass[4 * v6]) == 0 ) /*0x6ef7a7*/
    {
      *(_BYTE *)(this + 128) = 1; /*0x6ef7a9*/
      return; /*0x6ef7b6*/
    }
    StartCoordsHouseClass = HouseClass::GetStartCoords(v7, v34); /*0x6ef7c0*/
    v9 = *StartCoordsHouseClass; /*0x6ef7c5*/
    v10 = *StartCoordsHouseClass == dword_B0E968; /*0x6ef7cd*/
    v31 = *StartCoordsHouseClass; /*0x6ef7cf*/
    v11 = StartCoordsHouseClass[1]; /*0x6ef7d3*/
    v32 = v11; /*0x6ef7d6*/
    v12 = StartCoordsHouseClass[2]; /*0x6ef7da*/
    v33 = v12; /*0x6ef7dd*/
    if ( v10 && v11 == dword_B0E96C && v12 == dword_B0E970 ) /*0x6ef7f1*/
    {
      *(_BYTE *)(v27 + 128) = 1; /*0x6ef7f7*/
      return; /*0x6ef804*/
    }
    v13 = HouseClass::GetStartCoords((_DWORD *)v4[135], v34); /*0x6ef817*/
    v14 = *v13; /*0x6ef819*/
    v10 = *v13 == dword_B0E968; /*0x6ef81b*/
    v15 = v13[1]; /*0x6ef821*/
    v16 = v13[2]; /*0x6ef824*/
    if ( v10 && v15 == dword_B0E96C && v16 == dword_B0E970 ) /*0x6ef837*/
    {
      v17 = (int *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*v4 + 72))(v4, v34); /*0x6ef845*/
      v14 = *v17; /*0x6ef847*/
      v15 = v17[1]; /*0x6ef849*/
      v34[2] = v17[2]; /*0x6ef84f*/
    }
    v34[0] = v14 - v9; /*0x6ef857*/
    v18 = Math::CalcAngle((double)(v11 - v15), (double)(v14 - v9)); /*0x6ef875*/
    LODWORD(v28) = (__int16)Math::RoundToInt((v18 - 1.570796326794897) * -10430.06004058427) - 0x3FFF; /*0x6ef899*/
    v19 = HIDWORD(dword_8871E0->?) << 8; /*0x6ef8a7*/
    v28 = (double)SLODWORD(v28) * -0.00009587672516830327; /*0x6ef8b4*/
    v30 = (double)v19; /*0x6ef8c6*/
    v29 = (double)v32; /*0x6ef8ce*/
    v20 = Math::SinCos(v28); /*0x6ef8d2*/
    LODWORD(v29) = Math::RoundToInt(v29 - v20 * v30); /*0x6ef8e6*/
    v21 = Math::ArcTan2(v28); /*0x6ef8ea*/
    v22 = Math::RoundToInt(v21 * v30 + (double)v31); /*0x6ef8fa*/
    Coord::Subtract(v34, v22, SLODWORD(v29), v33); /*0x6ef90e*/
    LOWORD(v28) = v34[0] / 256; /*0x6ef927*/
    WORD1(v28) = v34[1] / 256; /*0x6ef93e*/
    v26 = LODWORD(v28); /*0x6ef949*/
    LODWORD(v28) = 0; /*0x6ef956*/
    v23 = (*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4); /*0x6ef96e*/
    v26 = *LayerClass::Pathfinding_Find( /*0x6ef99b*/
             &dword_87F7E8,
             (int)&v29,
             &v29,
             (__int16 *)&v26,
             *(_DWORD *)(v23 + 1660),
             -1,
             0,
             0,
             3,
             3,
             0,
             0,
             0,
             1,
             (__int16 *)&v28,
             0,
             0);
    v24 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v26); /*0x6ef99f*/
    v25 = v27; /*0x6ef9a4*/
    TeamClass::SelectMember(v27, (int)v24); /*0x6ef9ab*/
    Debug::Log(); /*0x6ef9c8*/
    this = v25; /*0x6ef9d0*/
  }
  TeamClass::UpdateMembers(this); /*0x6ef9d2*/
}



// ==== 0x006EF9E0  TechnoClass::IsDeployed  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsDeployed(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = this /*0x6efa08*/
                && this->?
                && (result = this->?) != 0
                && ((result = dword_A8E7AC) != 0 || (result = (unsigned __int8)this->?, !(_BYTE)result));
  return result; /*0x6efa0a*/
}



// ==== 0x006EFA10  TeamClass::SelectDeploymentTarget  this=TeamClass  sig=csp ====
void __thiscall TeamClass::SelectDeploymentTarget(TeamClass *this, int a2, char a3)
{
  double v3; // st7
  FootClass *firstUnit; // esi
  HouseClass **i; // edi
  int v6; // ebx
  HouseClass *v7; // esi
  int enemyHouseIndex; // eax
  int *StartCoords; // eax
  int v10; // ebx
  int v11; // ecx
  char v12; // al
  __int16 v13; // cx
  __int16 v14; // ax
  _DWORD *v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  void *v21; // eax
  double v22; // [esp+0h] [ebp-58h]
  double v23; // [esp+8h] [ebp-50h]
  __int16 v24[2]; // [esp+1Ch] [ebp-3Ch] BYREF
  double v25; // [esp+20h] [ebp-38h] BYREF
  TeamClass *v26; // [esp+2Ch] [ebp-2Ch]
  double v27; // [esp+30h] [ebp-28h] BYREF
  double v28; // [esp+38h] [ebp-20h] BYREF
  int v29; // [esp+40h] [ebp-18h]
  int v30; // [esp+4Ch] [ebp-Ch]
  int v31; // [esp+50h] [ebp-8h]
  int v32; // [esp+54h] [ebp-4h]

  v26 = this; /*0x6efa21*/
  if ( a3 ) /*0x6efa25*/
  {
    firstUnit = this->firstUnit; /*0x6efa2b*/
    LODWORD(v25) = -1; /*0x6efa2e*/
    for ( i = (HouseClass **)firstUnit; firstUnit; firstUnit = firstUnit->nextTeamMember ) /*0x6efa3a*/
    {
      v6 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 1532); /*0x6efa46*/
      if ( (unsigned __int8)TechnoClass::IsDeployed((TechnoClass *)firstUnit) /*0x6efa71*/
        && (firstUnit->isTeamLeader || (*((int (__thiscall **)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2)
        && v6 > SLODWORD(v25) )
      {
        i = (HouseClass **)firstUnit; /*0x6efa73*/
        LODWORD(v25) = v6; /*0x6efa75*/
      }
    }
    v7 = 0; /*0x6efa83*/
    if ( i ) /*0x6efa87*/
    {
      enemyHouseIndex = i[135]->enemyHouseIndex; /*0x6efa8f*/
      if ( enemyHouseIndex != -1 ) /*0x6efa98*/
        v7 = (HouseClass *)*((_DWORD *)stru_A80220.? + enemyHouseIndex); /*0x6efaa0*/
    }
    StartCoords = HouseClass::GetStartCoords(i[135], &v28); /*0x6efaae*/
    v10 = *StartCoords; /*0x6efab3*/
    v11 = StartCoords[1]; /*0x6efab7*/
    v30 = *StartCoords; /*0x6efaba*/
    v31 = v11; /*0x6efabe*/
    v32 = StartCoords[2]; /*0x6efac5*/
    if ( v7 ) /*0x6efac9*/
    {
      v15 = HouseClass::GetStartCoords(v7, &v28); /*0x6efaf7*/
      v16 = v15[1] - v31; /*0x6efb0f*/
      v17 = v15[2]; /*0x6efb11*/
      LODWORD(v28) = *v15 - v10; /*0x6efb14*/
      __asm { fild [esp+58h+var_20] } /*0x6efb18*/
      LODWORD(v25) = -v16; /*0x6efb1e*/
      v29 = v17; /*0x6efb22*/
      __asm /*0x6efb26*/
      {
        fstp [esp+58h+var_50]; double
        fild dword ptr [esp+58h+var_38]
        fstp [esp+58h+var_58]; double
      }
      Math::CalcAngle(v22, v23); /*0x6efb31*/
      __asm { fsub ds:dbl_7E2820 } /*0x6efb36*/
      __asm { fmul ds:dbl_7E2818 }
      v14 = Math::RoundToInt(v3); /*0x6efb45*/
      LOWORD(v25) = v14; /*0x6efb4a*/
    }
    else
    {
      v12 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 255); /*0x6efadc*/
      LOBYTE(v13) = 0; /*0x6efae1*/
      HIBYTE(v13) = v12; /*0x6efae3*/
      v14 = v13; /*0x6efaea*/
    }
    LODWORD(v25) = v14 - 0x3FFF; /*0x6efb61*/
    __asm { fild dword ptr [esp+48h+var_38] } /*0x6efb65*/
    __asm { fmul ds:dbl_7E2810 }
    LODWORD(v27) = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3444) << 8; /*0x6efb78*/
    __asm /*0x6efb7c*/
    {
      fstp [esp+48h+var_38]
      fild dword ptr [esp+48h+var_28]
    }
    __asm
    {
      fstp qword ptr [esp+50h+var_20]
      fild [esp+50h+var_8]
      fstp [esp+50h+var_28]
    }
    Math::SinCos(v25); /*0x6efb9a*/
    __asm /*0x6efb9f*/
    {
      fmul qword ptr [esp+50h+var_20]
      fsubr [esp+50h+var_28]
    }
    LOWORD(v18) = Math::RoundToInt(v3); /*0x6efba7*/
    LODWORD(v27) = v18; /*0x6efbae*/
    Math::ArcTan2(v25); /*0x6efbb2*/
    __asm { fmul qword ptr [esp+58h+var_20] } /*0x6efbb7*/
    __asm { fiadd [esp+48h+var_C] }
    LOWORD(v19) = Math::RoundToInt(v3); /*0x6efbc2*/
    LOWORD(v25) = v19 / 256; /*0x6efbd7*/
    WORD1(v25) = SLODWORD(v27) / 256; /*0x6efbef*/
    *(_DWORD *)v24 = LODWORD(v25); /*0x6efc01*/
    LODWORD(v25) = 0; /*0x6efc0d*/
    v20 = ((int (__thiscall *)(HouseClass **))(*i)->occupiablesCount)(i); /*0x6efc1e*/
    *(_DWORD *)v24 = *LayerClass::Pathfinding_Find( /*0x6efc4b*/
                        (Type *)&stru_87F5F0.__pad_58[416],
                        (int)&v27,
                        &v27,
                        v24,
                        *(_DWORD *)(v20 + 1660),
                        -1,
                        0,
                        0,
                        3,
                        3,
                        0,
                        0,
                        0,
                        1,
                        (__int16 *)&v25,
                        0,
                        0);
    v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x6efc4f*/
    TeamClass::SelectMember((int)v26, (int)v21); /*0x6efc59*/
    this = v26; /*0x6efc5e*/
  }
  TeamClass::UpdateMembers(this); /*0x6efc62*/
}



// ==== 0x006EFC70  ObjectClass::ProcessAISuperWeaponSelection  this=ObjectClass  sig=csp ====
void __thiscall ProcessAISuperWeaponSelection(ObjectClass *this, int a2, int a3)
{
  TechnoClass *v3; // esi
  int v4; // ebp
  TechnoClass *i; // ebx
  int v6; // edi
  HouseClass *owner; // edi
  int v8; // eax
  int lastBuiltInfantryType; // ecx
  int j; // edx
  int v11; // esi
  int v13; // ebp
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v20; // [esp+10h] [ebp-18h] BYREF
  int v21; // [esp+14h] [ebp-14h]
  int DefaultTimer; // [esp+18h] [ebp-10h]
  char v23[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v3 = (TechnoClass *)this->customSound_controller[1]; /*0x6efc76*/
  v4 = -1; /*0x6efc79*/
  v20 = (int)this; /*0x6efc7f*/
  for ( i = v3; v3; v3 = *(TechnoClass **)&v3[1].? ) /*0x6efc85*/
  {
    v6 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 1532); /*0x6efc91*/
    if ( (unsigned __int8)TechnoClass::IsDeployed(v3) /*0x6efcba*/
      && (BYTE1(v3[1].idleActionTimer[0]) || (*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 11))(v3) == 2)
      && v6 > v4 )
    {
      i = v3; /*0x6efcbc*/
      v4 = v6; /*0x6efcbe*/
    }
  }
  if ( !i ) /*0x6efccc*/
  {
    *(_BYTE *)(v20 + 128) = 1; /*0x6efcd5*/
    return; /*0x6efce0*/
  }
  owner = i->owner; /*0x6efce3*/
  v8 = 0; /*0x6efce9*/
  lastBuiltInfantryType = owner->lastBuiltInfantryType; /*0x6efcf0*/
  if ( lastBuiltInfantryType <= 0 ) /*0x6efcf8*/
    goto LABEL_16; /*0x6efcf8*/
  for ( j = owner->supersCount; *(_DWORD *)(*(_DWORD *)(*(_DWORD *)j + 40) + 180) != 1; j += 4 ) /*0x6efd00*/
  {
    if ( ++v8 >= lastBuiltInfantryType ) /*0x6efd15*/
    {
      *(_BYTE *)(v20 + 128) = 1; /*0x6efd1e*/
      return; /*0x6efd28*/
    }
  }
  v11 = *(_DWORD *)(owner->supersCount + 4 * v8); /*0x6efd2b*/
  if ( !v11 ) /*0x6efd30*/
  {
LABEL_16:
    *(_BYTE *)(v20 + 128) = 1; /*0x6efd39*/
    return; /*0x6efd43*/
  }
  if ( *(_BYTE *)(v11 + 111) ) /*0x6efd46*/
  {
    HouseClass::GetPowerRatio(owner); /*0x6efd4f*/
    __asm /*0x6efd54*/
    {
      fcomp ds:dbl_7E1718
      fnstsw ax
    }
    if ( (_AX & 0x100) == 0 ) /*0x6efd5f*/
    {
      v13 = v20; /*0x6efd61*/
      v14 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(v20 + 52) + 72))(*(_DWORD *)(v20 + 52), v23); /*0x6efd6f*/
      LOWORD(v21) = *v14 / 256; /*0x6efd82*/
      HIWORD(v21) = v14[1] / 256; /*0x6efd9a*/
      v15 = *(_DWORD *)(v11 + 40); /*0x6efda3*/
      v20 = v21; /*0x6efda6*/
      SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)owner, *(_DWORD *)(v15 + 180), (int)&v20); /*0x6efdb4*/
      *(_BYTE *)(v13 + 128) = 1; /*0x6efdba*/
      return; /*0x6efdc6*/
    }
  }
  v16 = *(_DWORD *)(v11 + 48); /*0x6efdc9*/
  v17 = *(_DWORD *)(v11 + 56); /*0x6efdcc*/
  if ( v16 == -1 ) /*0x6efdd2*/
    goto LABEL_23; /*0x6efdd2*/
  if ( *(_DWORD *)&stru_A8EB00.?[416] - v16 < v17 ) /*0x6efddd*/
  {
    v17 -= *(_DWORD *)&stru_A8EB00.?[416] - v16; /*0x6efddf*/
LABEL_23:
    v21 = v17; /*0x6efde1*/
    goto LABEL_24; /*0x6efde1*/
  }
  v21 = 0; /*0x6efe32*/
LABEL_24:
  DefaultTimer = Super::GetDefaultTimer((Super *)v11); /*0x6efde5*/
  __asm { fild [esp+28h+var_10] } /*0x6efdf3*/
  if ( *(_BYTE *)(v11 + 109) ) /*0x6efdf0*/
  {
    __asm { fild [esp+28h+var_14] } /*0x6efdfb*/
    _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6efdff*/
    __asm /*0x6efe05*/
    {
      fdiv st, st(1)
      fld ds:flt_7E2AC8
      fsub dword ptr [edx+0D70h]
      fcompp
      fnstsw ax
    }
    __asm { fstp st }
    if ( (_AX & 0x100) != 0 ) /*0x6efe1c*/
      *(_BYTE *)(v20 + 128) = 1; /*0x6efe25*/
  }
  else
  {
    __asm { fstp st } /*0x6efe40*/
    *(_BYTE *)(v20 + 128) = 1; /*0x6efe42*/
  }
}



// ==== 0x006EFE60  SuperWeapon::DispatchTeam  this=SuperWeapon  sig=csp ====
void __thiscall DispatchTeamSuperWeapon(int this, int a2, int a3)
{
  int v4; // ebx
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  int v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // ebx
  int v11; // eax
  int *v12; // edx
  int v13; // edi
  int v14; // ecx
  #375 *v15; // edx
  int v16; // edi
  int v17; // edi
  _DWORD *v18; // esi
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // [esp+10h] [ebp-1Ch]
  int v24; // [esp+14h] [ebp-18h] BYREF
  int v25; // [esp+18h] [ebp-14h] BYREF
  int DefaultTimerSuper; // [esp+1Ch] [ebp-10h]
  _BYTE v27[12]; // [esp+20h] [ebp-Ch] BYREF
  int v28; // [esp+30h] [ebp+4h]
  int v29; // [esp+30h] [ebp+4h]

  v4 = -1; /*0x6efe68*/
  v5 = *(_DWORD **)(this + 84); /*0x6efe6c*/
  v24 = this; /*0x6efe6f*/
  v6 = v5; /*0x6efe73*/
  v23 = (int)v5; /*0x6efe77*/
  if ( v5 ) /*0x6efe7b*/
  {
    do /*0x6efec0*/
    {
      v7 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v5 + 132))(v5) + 1532); /*0x6efe87*/
      if ( TechnoClass::IsDeployed((int)v5) /*0x6efeb0*/
        && (*((_BYTE *)v5 + 1673) || (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) == 2)
        && v7 > v4 )
      {
        v23 = (int)v5; /*0x6efeb2*/
        v4 = v7; /*0x6efeb6*/
      }
      v5 = (_DWORD *)v5[374]; /*0x6efeb8*/
    }
    while ( v5 ); /*0x6efec0*/
    v6 = (_DWORD *)v23; /*0x6efec2*/
  }
  if ( !v6 ) /*0x6efec8*/
  {
    *(_BYTE *)(this + 128) = 1; /*0x6efecb*/
    return; /*0x6efed8*/
  }
  v8 = v6[135]; /*0x6efedb*/
  v9 = 0; /*0x6efee1*/
  v10 = 0; /*0x6efee3*/
  v25 = 0; /*0x6efee5*/
  v11 = *(_DWORD *)(v8 + 612); /*0x6efee9*/
  DefaultTimerSuper = 0; /*0x6efeef*/
  if ( v11 <= 0 ) /*0x6efef5*/
    goto LABEL_36; /*0x6efef5*/
  v12 = *(int **)(v8 + 600); /*0x6efefb*/
  v13 = v11; /*0x6eff01*/
  do /*0x6eff20*/
  {
    v14 = *(_DWORD *)(*(_DWORD *)(*v12 + 40) + 180); /*0x6eff08*/
    if ( v14 == 3 ) /*0x6eff11*/
      v9 = *v12; /*0x6eff13*/
    if ( v14 == 4 ) /*0x6eff18*/
      v10 = *v12; /*0x6eff1a*/
    ++v12; /*0x6eff1c*/
    --v13; /*0x6eff1f*/
  }
  while ( v13 ); /*0x6eff20*/
  DefaultTimerSuper = v10; /*0x6eff24*/
  v25 = v9; /*0x6eff28*/
  if ( !v9 || !v10 ) /*0x6eff34*/
  {
LABEL_36:
    *(_BYTE *)(v24 + 128) = 1; /*0x6f0114*/
    return; /*0x6f0114*/
  }
  if ( *(_BYTE *)(v9 + 111) && HouseClass::GetPowerRatio((int *)v8) >= 1.0 ) /*0x6eff57*/
  {
    v15 = 0; /*0x6eff6a*/
    v16 = *(_DWORD *)(*(_DWORD *)(v23 + 540) + 22016); /*0x6eff89*/
    if ( v16 != -1 ) /*0x6eff92*/
      v15 = *(#375 **)&dword_A8022C->AbstractClass[4 * v16]; /*0x6eff9a*/
    v17 = v24; /*0x6eff9d*/
    v18 = DamageMapClassArea( /*0x6effb4*/
            *((_DWORD *)dword_A83C6C + (unsigned __int16)*(_DWORD *)(a2 + 4)),
            v15,
            v23,
            (unsigned __int16)HIWORD(*(_DWORD *)(a2 + 4)),
            *(_BYTE *)(*(_DWORD *)(v24 + 36) + 247));
    if ( v18 ) /*0x6effb8*/
    {
      v19 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v24 + 52) + 72))( /*0x6effc8*/
                        *(_DWORD *)(v24 + 52),
                        v27);
      LOWORD(v28) = *v19 / 256; /*0x6effdb*/
      HIWORD(v28) = v19[1] / 256; /*0x6efff7*/
      v24 = v28; /*0x6f0000*/
      SuperWeapon::FireSuperWeaponHouseClass((#375 *)v8, *(_DWORD *)(*(_DWORD *)(v25 + 40) + 180), (int)&v24); /*0x6f0011*/
      v20 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v18 + 72))(v18, v27); /*0x6f001f*/
      LOWORD(v28) = *v20 / 256; /*0x6f0032*/
      HIWORD(v28) = v20[1] / 256; /*0x6f004a*/
      v25 = v28; /*0x6f0057*/
      SuperWeapon::FireSuperWeaponHouseClass( /*0x6f0068*/
        (#375 *)v8,
        *(_DWORD *)(*(_DWORD *)(DefaultTimerSuper + 40) + 180),
        (int)&v25);
      TeamClass::SelectMember(v17, (int)v18); /*0x6f0070*/
    }
    *(_BYTE *)(v17 + 128) = 1; /*0x6f0075*/
    return; /*0x6f0083*/
  }
  v21 = *(_DWORD *)(v9 + 48); /*0x6f0086*/
  v22 = *(_DWORD *)(v9 + 56); /*0x6f0089*/
  if ( v21 == -1 ) /*0x6f008f*/
    goto LABEL_30; /*0x6f008f*/
  if ( (int)dword_A8ED84 - v21 < v22 ) /*0x6f009a*/
  {
    v22 -= (int)dword_A8ED84 - v21; /*0x6f009c*/
LABEL_30:
    v29 = v22; /*0x6f009e*/
    goto LABEL_31; /*0x6f009e*/
  }
  v29 = 0; /*0x6f00ef*/
LABEL_31:
  DefaultTimerSuper = Super::GetDefaultTimer((_DWORD *)v9); /*0x6f00a2*/
  if ( *(_BYTE *)(v9 + 109) ) /*0x6f00ad*/
  {
    if ( 1.0 - *(float *)&dword_8871E0->? < (double)v29 / (double)DefaultTimerSuper ) /*0x6f00d8*/
      *(_BYTE *)(v24 + 128) = 1; /*0x6f00e1*/
  }
  else
  {
    *(_BYTE *)(v24 + 128) = 1; /*0x6f0102*/
  }
}


