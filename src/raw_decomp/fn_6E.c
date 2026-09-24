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
char __thiscall sub_6E0080(int *this, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int v6; // edi
  __int16 v7; // bp
  _BYTE *v8; // esi
  _WORD *v9; // eax
  int v11; // [esp+8h] [ebp-4h] BYREF

  v5 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v11, this->q011); /*0x6e0097*/
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
char __thiscall sub_6E0110(int *this, int a2, int a3, int a4, int a5)
{
  void *v6; // eax
  int v8; // [esp+4h] [ebp-1Ch] BYREF
  int v9; // [esp+8h] [ebp-18h] BYREF
  int v10; // [esp+Ch] [ebp-14h]
  int GroundHeight; // [esp+10h] [ebp-10h]
  _DWORD v12[3]; // [esp+14h] [ebp-Ch] BYREF

  v8 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v8, this->q011); /*0x6e012f*/
  GroundHeight = 0; /*0x6e014c*/
  v12[2] = 0; /*0x6e0150*/
  v10 = (SHIWORD(v8) << 8) + 128; /*0x6e0158*/
  v12[1] = v10; /*0x6e015c*/
  v9 = ((__int16)v8 << 8) + 128; /*0x6e0166*/
  v12[0] = v9; /*0x6e016a*/
  GroundHeight = Cell::GetGroundHeight(v12); /*0x6e0178*/
  v6 = __2_YAPAXI_Z(0x100u); /*0x6e017c*/
  if ( v6 ) /*0x6e0186*/
    ParticleSystemClass::Constructor((int)v6, *((_DWORD *)dword_A83D6C + this->q024), &v9, 0, 0, &dword_B0E6A0, 0); /*0x6e01aa*/
  return 1; /*0x6e01b1*/
}



// ==== 0x006E01C0  globalHelper_0E01C0  this=-  sig=csp ====
char __stdcall sub_6E01C0(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  _BYTE *v5; // esi
  _DWORD *v6; // ecx

  v4 = 0; /*0x6e01c6*/
  if ( g_SidebarState <= 0 ) /*0x6e01ca*/
    return 1; /*0x6e0245*/
  do /*0x6e023b*/
  {
    v5 = (_BYTE *)*((_DWORD *)g_TechnoClass_Count + v4); /*0x6e01d7*/
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
  while ( v4 < g_SidebarState ); /*0x6e023b*/
  return 1; /*0x6e0241*/
}



// ==== 0x006E0250  ObjectClass::method_6E0250  this=ObjectClass  sig=csp ====
char __thiscall sub_6E0250(_BYTE *this, int a2, int a3, int a4, int a5)
{
  *((_BYTE *)g_ScenarioClass_Instance + 13479) = this->isAliveFlag; /*0x6e025c*/
  return 1; /*0x6e0264*/
}



// ==== 0x006E0270  ObjectClass::method_6E0270  this=ObjectClass  sig=csp ====
char __thiscall sub_6E0270(_BYTE *this, int a2, int a3, int a4, int a5)
{
  *((_BYTE *)g_ScenarioClass_Instance + 13478) = this->isAliveFlag; /*0x6e027c*/
  return 1; /*0x6e0284*/
}



// ==== 0x006E0290  ObjectClass::method_6E0290  this=ObjectClass  sig=csp ====
char __thiscall sub_6E0290(_BYTE *this, int a2, int a3, int a4, int a5)
{
  *((_BYTE *)g_ScenarioClass_Instance + 13480) = this->isAliveFlag; /*0x6e029c*/
  return 1; /*0x6e02a4*/
}



// ==== 0x006E0490  ObjectClass::PlayWaypointEffect  this=ObjectClass  sig=csp ====
char __thiscall PlayWaypointEffect(int *this, int a2, int a3, int a4, int a5)
{
  int *WorldCoordsCell; // eax
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
  int v18; // [esp+8h] [ebp-38h] BYREF
  _BYTE v19[4]; // [esp+Ch] [ebp-34h] BYREF
  int v20; // [esp+10h] [ebp-30h] BYREF
  int v21; // [esp+14h] [ebp-2Ch]
  int v22; // [esp+18h] [ebp-28h]
  int v23; // [esp+1Ch] [ebp-24h] BYREF
  int v24; // [esp+20h] [ebp-20h]
  int v25; // [esp+24h] [ebp-1Ch]
  _DWORD v26[3]; // [esp+28h] [ebp-18h] BYREF
  _DWORD v27[3]; // [esp+34h] [ebp-Ch] BYREF

  WorldCoordsCell = Cell::GetWorldCoords((__int16 *)g_ScenarioClass_Instance, &v20, this->objectTypeFlags); /*0x6e04a9*/
  v23 = *WorldCoordsCell; /*0x6e04b2*/
  v24 = WorldCoordsCell[1]; /*0x6e04bb*/
  v25 = WorldCoordsCell[2]; /*0x6e04c7*/
  PlaySoundEffectAt(&v23, 100, 0, g_RulesClass_Instance->SilverCrate[5], 1, 0); /*0x6e04dd*/
  v7 = Cell::GetWorldCoords((__int16 *)g_ScenarioClass_Instance, &v20, this->objectTypeFlags); /*0x6e04f4*/
  v8 = Coord::Subtract(v26, *v7 + 85, v7[1] + 85, v7[2]); /*0x6e0510*/
  v23 = *v8; /*0x6e0519*/
  v24 = v8[1]; /*0x6e0528*/
  v25 = v8[2]; /*0x6e052f*/
  PlaySoundEffectAt(&v23, 100, 0, g_RulesClass_Instance->SilverCrate[5], 1, 0); /*0x6e0545*/
  v9 = Cell::GetWorldCoords((__int16 *)g_ScenarioClass_Instance, v26, this->objectTypeFlags); /*0x6e055c*/
  v10 = Coord::Subtract(&v20, *v9 - 85, v9[1] + 85, v9[2]); /*0x6e0578*/
  v23 = *v10; /*0x6e0581*/
  v24 = v10[1]; /*0x6e058a*/
  v25 = v10[2]; /*0x6e0591*/
  PlaySoundEffectAt(&v23, 100, 0, g_RulesClass_Instance->SilverCrate[5], 1, 0); /*0x6e05ad*/
  Coord::Subtract(&v23, 85, -85, 0); /*0x6e05bc*/
  v11 = Cell::GetWorldCoords((__int16 *)g_ScenarioClass_Instance, v26, this->objectTypeFlags); /*0x6e05d3*/
  v12 = Coord::Subtract(v27, *v11 + v23, v11[1] + v24, v11[2] + v25); /*0x6e05fb*/
  v20 = *v12; /*0x6e0604*/
  v21 = v12[1]; /*0x6e060d*/
  v22 = v12[2]; /*0x6e0619*/
  PlaySoundEffectAt(&v20, 100, 0, g_RulesClass_Instance->SilverCrate[5], 1, 0); /*0x6e062f*/
  v13 = Cell::GetWorldCoords((__int16 *)g_ScenarioClass_Instance, v27, this->objectTypeFlags); /*0x6e0646*/
  v14 = Coord::Subtract(v26, *v13 - 85, v13[1] - 85, v13[2]); /*0x6e0662*/
  v23 = *v14; /*0x6e066b*/
  v24 = v14[1]; /*0x6e067a*/
  v25 = v14[2]; /*0x6e0681*/
  PlaySoundEffectAt(&v23, 100, 0, g_RulesClass_Instance->SilverCrate[5], 1, 0); /*0x6e0697*/
  if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid(this->objectTypeFlags) ) /*0x6e06a9*/
  {
    v18 = *(_DWORD *)ScenarioClass::Get_Waypoint_Location(v19, this->objectTypeFlags); /*0x6e06d9*/
    v15 = 3; /*0x6e06dd*/
    if ( !CellClass::SetTerrainType(&MapClass_Instance, (__int16 *)&v18) ) /*0x6e06e2*/
    {
      do /*0x6e0703*/
        v16 = v15--; /*0x6e06eb*/
      while ( v16 > 0 && !CellClass::SetTerrainType(&MapClass_Instance, (__int16 *)&v18) ); /*0x6e0703*/
    }
    v24 = (SHIWORD(v18) << 8) + 128; /*0x6e0722*/
    v23 = ((__int16)v18 << 8) + 128; /*0x6e0730*/
    v25 = dword_B0E6D4; /*0x6e073c*/
    Coord::To_Screen(g_TacticalClass_Instance, &v23, &v20); /*0x6e0748*/
    Cell::CreateCrater(v20 - 128, v21 - 128, 256, 256, 0); /*0x6e077a*/
  }
  return 1; /*0x6e077f*/
}



// ==== 0x006E0790  AnimTypeClass::method_6E0790  this=AnimTypeClass  sig=csp ====
char __thiscall sub_6E0790(int *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int *WorldCoords; // eax
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = g_RulesClass_Instance->SilverCrate[5]; /*0x6e07a3*/
  WorldCoords = Cell::GetWorldCoords((__int16 *)g_ScenarioClass_Instance, v8, this->LoopStart); /*0x6e07b5*/
  CreateSmokeEffectAt(50, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e07d6*/
  return 1; /*0x6e07dd*/
}



// ==== 0x006E07F0  AnimTypeClass::method_6E07F0  this=AnimTypeClass  sig=csp ====
char __thiscall sub_6E07F0(int *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int *WorldCoords; // eax
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = g_RulesClass_Instance->SilverCrate[5]; /*0x6e0803*/
  WorldCoords = Cell::GetWorldCoords((__int16 *)g_ScenarioClass_Instance, v8, this->LoopStart); /*0x6e0815*/
  CreateSmokeEffectAt(100, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e0836*/
  return 1; /*0x6e083d*/
}



// ==== 0x006E0850  AnimTypeClass::method_6E0850  this=AnimTypeClass  sig=csp ====
char __thiscall sub_6E0850(int *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int *WorldCoords; // eax
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = g_RulesClass_Instance->SilverCrate[5]; /*0x6e0863*/
  WorldCoords = Cell::GetWorldCoords((__int16 *)g_ScenarioClass_Instance, v8, this->LoopStart); /*0x6e0875*/
  CreateSmokeEffectAt(300, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e0896*/
  return 1; /*0x6e089d*/
}



// ==== 0x006E0AA0  TActionClass::executeEnterAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E0AA0(_DWORD *this, int a2, int a3, _DWORD *a4, int a5)
{
  void *v5; // esi
  int Field11; // eax
  int v7; // edi
  char v9; // bl
  int i; // ebp
  int v11; // esi
  _DWORD *v12; // ecx

  v5 = (void *)this->Value; /*0x6e0aa1*/
  if ( !a4 ) /*0x6e0aae*/
    return 0; /*0x6e0aae*/
  if ( v5 == (void *)8997 ) /*0x6e0ab6*/
  {
    Field11 = Property::GetField11(a4); /*0x6e0ab8*/
  }
  else
  {
    if ( v5 == (void *)-1 ) /*0x6e0ac2*/
      return 0; /*0x6e0ae7*/
    if ( BuildingType::IsSpecialType(v5) ) /*0x6e0ac6*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0ad1*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0ad8*/
  }
  v7 = Field11; /*0x6e0add*/
  if ( !Field11 ) /*0x6e0ae1*/
    return 0; /*0x6e0ae1*/
  v9 = 0; /*0x6e0af1*/
  for ( i = 0; i < g_SidebarState; ++i ) /*0x6e0af7*/
  {
    v11 = *((_DWORD *)g_TechnoClass_Count + i); /*0x6e0afe*/
    if ( *(_BYTE *)(v11 + 144) ) /*0x6e0b01*/
    {
      if ( *(_BYTE *)(v11 + 116) ) /*0x6e0b0b*/
      {
        if ( !*(_BYTE *)(v11 + 129) ) /*0x6e0b12*/
        {
          v12 = *(_DWORD **)(v11 + 52); /*0x6e0b1c*/
          if ( v12 ) /*0x6e0b21*/
          {
            if ( LinkedList::Contains(v12, (int)a4) ) /*0x6e0b28*/
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
char __thiscall sub_6E0B60(_DWORD *this, int a2, int a3, _DWORD *a4, int a5)
{
  void *v5; // esi
  char v6; // bl
  int Field11; // eax
  int v8; // ebp
  int v10; // eax
  int i; // edi
  _DWORD *v12; // esi
  int v13; // esi
  int v14; // edi
  _DWORD *v15; // esi
  int v16; // eax

  v5 = (void *)this->Value; /*0x6e0b63*/
  v6 = 0; /*0x6e0b6d*/
  if ( !a4 ) /*0x6e0b71*/
    return 0; /*0x6e0b71*/
  if ( v5 == (void *)8997 ) /*0x6e0b79*/
  {
    Field11 = Property::GetField11(a4); /*0x6e0b7b*/
  }
  else
  {
    if ( v5 == (void *)-1 ) /*0x6e0b85*/
      return 0; /*0x6e0bab*/
    if ( BuildingType::IsSpecialType(v5) ) /*0x6e0b89*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0b94*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0b9b*/
  }
  v8 = Field11; /*0x6e0ba0*/
  if ( !Field11 ) /*0x6e0ba4*/
    return 0; /*0x6e0ba4*/
  v10 = g_SidebarState; /*0x6e0bae*/
  for ( i = 0; i < g_SidebarState; ++i ) /*0x6e0bb8*/
  {
    v12 = (_DWORD *)*((_DWORD *)g_TechnoClass_Count + i); /*0x6e0bbf*/
    if ( v12[135] == a2 /*0x6e0bf4*/
      && (!v12
       || (*(int (__thiscall **)(_DWORD))(*v12 + 44))(*((_DWORD *)g_TechnoClass_Count + i)) != 6
       || (v13 = v12[328]) == 0
       || !*(_BYTE *)(v13 + 5491) && !*(_BYTE *)(v13 + 5492)) )
    {
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)g_TechnoClass_Count + i) + 980))( /*0x6e0c0b*/
        *((_DWORD *)g_TechnoClass_Count + i),
        v8,
        0);
      v6 = 1; /*0x6e0c11*/
    }
    v10 = g_SidebarState; /*0x6e0c13*/
  }
  v14 = 0; /*0x6e0c1d*/
  if ( v10 > 0 ) /*0x6e0c21*/
  {
    do /*0x6e0c89*/
    {
      v15 = (_DWORD *)*((_DWORD *)g_TechnoClass_Count + v14); /*0x6e0c2c*/
      if ( v15[135] == a2 ) /*0x6e0c35*/
      {
        if ( v15 ) /*0x6e0c39*/
        {
          if ( (*(int (__thiscall **)(_DWORD))(*v15 + 44))(*((_DWORD *)g_TechnoClass_Count + v14)) == 6 ) /*0x6e0c45*/
          {
            v16 = v15[328]; /*0x6e0c47*/
            if ( v16 ) /*0x6e0c4f*/
            {
              if ( *(_BYTE *)(v16 + 5491) || *(_BYTE *)(v16 + 5492) ) /*0x6e0c5b*/
              {
                (*(void (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)g_TechnoClass_Count + v14) + 980))( /*0x6e0c72*/
                  *((_DWORD *)g_TechnoClass_Count + v14),
                  v8,
                  0);
                Animation::UpdateBuildingAnimations((int)v15); /*0x6e0c7a*/
                v6 = 1; /*0x6e0c7f*/
              }
            }
          }
        }
      }
      ++v14; /*0x6e0c86*/
    }
    while ( v14 < g_SidebarState ); /*0x6e0c89*/
  }
  return v6; /*0x6e0ba6*/
}



// ==== 0x006E0CA0  TActionClass::executeCaptureAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E0CA0(_DWORD *this, void *a2, int a3, _DWORD *a4, int a5)
{
  void *v5; // esi
  int Field11; // eax

  v5 = (void *)this->Value; /*0x6e0ca1*/
  if ( !a4 ) /*0x6e0cad*/
    return 0; /*0x6e0cad*/
  if ( v5 == (void *)8997 ) /*0x6e0cb5*/
  {
    Field11 = Property::GetField11(a4); /*0x6e0cb7*/
  }
  else
  {
    if ( v5 == (void *)-1 ) /*0x6e0cc1*/
      return 0; /*0x6e0ce3*/
    if ( BuildingType::IsSpecialType(v5) ) /*0x6e0cc5*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0cd0*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0cd7*/
  }
  if ( !Field11 ) /*0x6e0cde*/
    return 0; /*0x6e0cde*/
  TActionClass::executeAttackAction(a2, Field11); /*0x6e0ceb*/
  return 1; /*0x6e0ce2*/
}



// ==== 0x006E0D00  TActionClass::executeSabotageAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E0D00(_DWORD *this, _DWORD *a2, int a3, _DWORD *a4, int a5)
{
  void *v5; // esi
  int Field11; // eax

  v5 = (void *)this->Value; /*0x6e0d01*/
  if ( !a4 ) /*0x6e0d0d*/
    return 0; /*0x6e0d0d*/
  if ( v5 == (void *)8997 ) /*0x6e0d15*/
  {
    Field11 = Property::GetField11(a4); /*0x6e0d17*/
  }
  else
  {
    if ( v5 == (void *)-1 ) /*0x6e0d21*/
      return 0; /*0x6e0d43*/
    if ( BuildingType::IsSpecialType(v5) ) /*0x6e0d25*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0d30*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0d37*/
  }
  if ( !Field11 ) /*0x6e0d3e*/
    return 0; /*0x6e0d3e*/
  TActionClass::executeMoveAction(a2, Field11); /*0x6e0d4b*/
  return 1; /*0x6e0d42*/
}



// ==== 0x006E0EF0  HouseClass::UpdateTechBuildings  this=HouseClass  sig=csp ====
char __thiscall sub_6E0EF0(_BYTE *this, int a2, int a3, int a4, int a5)
{
  int v7; // [esp+14h] [ebp+4h]

  if ( this->cloningVatsCount ) /*0x6e0ef0*/
  {
    *(_BYTE *)(a2 + 499) = 1; /*0x6e0f02*/
    if ( *(int *)(a2 + 96) > 0 ) /*0x6e0f0e*/
    {
      LOWORD(v7) = *(_DWORD *)(**(_DWORD **)(a2 + 84) + 156) / 256; /*0x6e0f36*/
      HIWORD(v7) = *(_DWORD *)(**(_DWORD **)(a2 + 84) + 160) / 256; /*0x6e0f4b*/
      HouseClass::SetMapSeed((_DWORD *)a2, v7); /*0x6e0f55*/
      *(_DWORD *)(a2 + 22352) = v7; /*0x6e0f5a*/
    }
    if ( !*(_DWORD *)(a2 + 22292) ) /*0x6e0f61*/
    {
      HouseClass::SetPrimaryTechBuilding(a2); /*0x6e0f6d*/
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
char __thiscall sub_6E0FE0(int *this, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // esi
  int v8; // [esp+0h] [ebp-14h] BYREF
  int v9; // [esp+4h] [ebp-10h]
  int v10; // [esp+8h] [ebp-Ch]
  __int16 v11[4]; // [esp+Ch] [ebp-8h] BYREF

  if ( *((_BYTE *)HouseClass_Player + 576) ) /*0x6e0fe8*/
    return 1; /*0x6e116a*/
  *(_DWORD *)v11 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v8, this->idxArray); /*0x6e101b*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, v11) + 80) & 0x100) != 0 /*0x6e1047*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, v11) + 80) & 0x400) != 0 )
  {
    v5 = 4; /*0x6e104d*/
  }
  else
  {
    v5 = 0; /*0x6e1049*/
  }
  v6 = v5 + *((char *)CellCoord::To_CellObj(&MapClass_Instance, v11) + 283); /*0x6e1068*/
  v10 = v6 * dword_B0E6E0; /*0x6e10b2*/
  v9 = ((__int16)(v11[1] - v6 / 2) << 8) + 128; /*0x6e10c1*/
  v8 = ((__int16)(v11[0] - v6 / 2) << 8) + 128; /*0x6e10cd*/
  MapClass::RevealArea1( /*0x6e10e5*/
    (int *)&MapClass_Instance,
    &v8,
    g_RulesClass_Instance->ScoldSound,
    HouseClass_Player,
    0,
    0,
    0,
    1,
    0);
  v8 = ((__int16)(v11[0] - v6 / 2) << 8) + 128; /*0x6e1126*/
  v10 = v6 * dword_B0E6E0; /*0x6e1135*/
  v9 = ((__int16)(v11[1] - v6 / 2) << 8) + 128; /*0x6e1143*/
  MapClass::RevealArea1( /*0x6e115b*/
    (int *)&MapClass_Instance,
    &v8,
    g_RulesClass_Instance->ScoldSound,
    HouseClass_Player,
    0,
    0,
    0,
    1,
    1);
  return 1; /*0x6e1164*/
}



// ==== 0x006E1180  ObjectClass::method_6E1180  this=ObjectClass  sig=csp ====
char __thiscall sub_6E1180(int *this, int a2, int a3, int a4, int a5)
{
  int v6; // [esp+0h] [ebp-8h] BYREF
  int v7; // [esp+4h] [ebp-4h] BYREF

  v6 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v7, this->objectTypeFlags); /*0x6e11a6*/
  MapClass::TriggerEVA((__int16 *)&v6); /*0x6e11aa*/
  return 1; /*0x6e11b1*/
}



// ==== 0x006E11C0  TActionClass::RevealTileTypeAtWaypoint  this=TActionClass  sig=csp ====
char __thiscall sub_6E11C0(int *this, int a2, int a3, int a4, int a5)
{
  __int16 *Waypoint_Location; // eax
  int TileIndex; // ebp
  _WORD *v7; // esi
  __int16 *v8; // ebx
  __int16 v9; // cx
  int v10; // esi
  __int16 v11; // ax
  __int16 v12; // bx
  int v14; // [esp+8h] [ebp-1Ch] BYREF
  int v15[3]; // [esp+Ch] [ebp-18h] BYREF
  int v16[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( *((_BYTE *)HouseClass_Player + 576) ) /*0x6e11c8*/
    return 1; /*0x6e11c8*/
  Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location( /*0x6e11ee*/
                                   (char *)g_ScenarioClass_Instance,
                                   &v14,
                                   this->idxArray);
  TileIndex = MapClass::GetTileIndex(&MapClass_Instance, Waypoint_Location, 1, 0); /*0x6e1203*/
  TActionClass::executeSellAction(&MapClass_Instance); /*0x6e1205*/
  v7 = MapClass::SpiralSearch(&MapClass_Instance); /*0x6e1214*/
  if ( !v7 ) /*0x6e1218*/
    return 1; /*0x6e1327*/
  do /*0x6e1314*/
  {
    v8 = v7 + 18; /*0x6e1220*/
    if ( MapClass::GetTileIndex(&MapClass_Instance, v7 + 18, 1, 0) == TileIndex ) /*0x6e1234*/
    {
      v9 = v7[19]; /*0x6e1244*/
      v10 = *((char *)v7 + 283) / 2; /*0x6e124c*/
      v15[0] = ((__int16)(*v8 - v10 / 2) << 8) + 128; /*0x6e1284*/
      v15[1] = ((__int16)(v9 - v10 / 2) << 8) + 128; /*0x6e128f*/
      v15[2] = v10 * dword_B0E6E0; /*0x6e12a2*/
      MapClass::RevealArea1((int *)&MapClass_Instance, v15, 2, HouseClass_Player, 0, 0, 0, 1, 0); /*0x6e12a6*/
      v11 = *v8; /*0x6e12b1*/
      v12 = v8[1] - v10 / 2; /*0x6e12be*/
      v16[2] = v10 * dword_B0E6E0; /*0x6e12d3*/
      v16[0] = ((__int16)(v11 - v10 / 2) << 8) + 128; /*0x6e12ea*/
      v16[1] = (v12 << 8) + 128; /*0x6e12f5*/
      MapClass::RevealArea1((int *)&MapClass_Instance, v16, 2, HouseClass_Player, 0, 0, 0, 1, 1); /*0x6e1301*/
    }
    v7 = MapClass::SpiralSearch(&MapClass_Instance); /*0x6e1310*/
  }
  while ( v7 ); /*0x6e1314*/
  return 1; /*0x6e131c*/
}



// ==== 0x006E1440  ObjectClass::Render  this=ObjectClass  sig=csp ====
char __thiscall sub_6E1440(_DWORD *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // edx
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v11; // [esp+10h] [ebp-8h]

  v5 = (char *)g_ScenarioClass_Instance + 4584; /*0x6e144f*/
  v6 = *((_DWORD *)g_ScenarioClass_Instance + 1146); /*0x6e1457*/
  v7 = *((_DWORD *)g_ScenarioClass_Instance + 1148); /*0x6e1459*/
  if ( v6 != -1 ) /*0x6e145f*/
  {
    if ( (int)g_CurrentFrame - v6 >= v7 ) /*0x6e1467*/
    {
      v8 = 0; /*0x6e149c*/
      goto LABEL_5; /*0x6e149e*/
    }
    v7 -= (int)g_CurrentFrame - v6; /*0x6e1469*/
  }
  v8 = v7; /*0x6e146b*/
LABEL_5:
  v9 = this->isAliveFlag; /*0x6e146d*/
  *v5 = g_CurrentFrame; /*0x6e1473*/
  v5[1] = v11; /*0x6e1481*/
  v5[2] = v8 + 12 * v9 + 3 * v9; /*0x6e1489*/
  ObjectClass::PreDraw(&MapClass_Instance); /*0x6e148c*/
  return 1; /*0x6e1491*/
}



// ==== 0x006E14A0  ObjectClass::ProcessDataObjectClass  this=ObjectClass  sig=csp ====
char __thiscall sub_6E14A0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  int v6; // edx
  int v7; // esi
  int v8; // edi
  int v9; // edx
  int v10; // ecx
  int v11; // esi
  int v12; // ecx
  int v14; // [esp+10h] [ebp-8h]

  v5 = (int *)((char *)g_ScenarioClass_Instance + 4584); /*0x6e14a8*/
  v6 = *((_DWORD *)g_ScenarioClass_Instance + 1148); /*0x6e14b4*/
  v7 = *((_DWORD *)g_ScenarioClass_Instance + 1146); /*0x6e14b8*/
  if ( v7 != -1 ) /*0x6e14be*/
  {
    if ( (int)g_CurrentFrame - v7 >= v6 ) /*0x6e14c6*/
      v6 = 0; /*0x6e14cc*/
    else
      v6 -= (int)g_CurrentFrame - v7; /*0x6e14c8*/
  }
  v8 = 15 * this->isAliveFlag; /*0x6e14d7*/
  if ( v6 > v8 ) /*0x6e14dc*/
  {
    v11 = *v5; /*0x6e14e8*/
    v12 = *((_DWORD *)g_ScenarioClass_Instance + 1148); /*0x6e14ea*/
    if ( *v5 != -1 ) /*0x6e14f0*/
    {
      if ( (int)g_CurrentFrame - v11 >= v12 ) /*0x6e14f8*/
        v12 = 0; /*0x6e14fe*/
      else
        v12 -= (int)g_CurrentFrame - v11; /*0x6e14fa*/
    }
    v9 = v14; /*0x6e1500*/
    v10 = v12 - v8; /*0x6e1504*/
    *v5 = (int)g_CurrentFrame; /*0x6e1506*/
  }
  else
  {
    v9 = v14; /*0x6e14de*/
    v10 = 0; /*0x6e14e2*/
    *v5 = (int)g_CurrentFrame; /*0x6e14e4*/
  }
  v5[1] = v9; /*0x6e1508*/
  v5[2] = v10; /*0x6e150b*/
  ObjectClass::PreDraw(&MapClass_Instance); /*0x6e1513*/
  return 1; /*0x6e1518*/
}



// ==== 0x006E1530  ScenarioClass::PrepareTextDisplay  this=ScenarioClass  sig=csp ====
char __thiscall sub_6E1530(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  char *v6; // ecx
  _DWORD *v7; // eax
  int v9; // [esp+4h] [ebp-28h]
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF

  v5 = this->u32_90; /*0x6e1530*/
  v6 = (char *)g_ScenarioClass_Instance + 4584; /*0x6e1542*/
  *((_DWORD *)g_ScenarioClass_Instance + 1146) = g_CurrentFrame; /*0x6e154e*/
  *((_DWORD *)v6 + 1) = v9; /*0x6e1557*/
  *((_DWORD *)v6 + 2) = 15 * v5; /*0x6e155a*/
  v7 = g_ScenarioClass_Instance; /*0x6e155d*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 1146) == -1 ) /*0x6e1569*/
  {
    *((_DWORD *)g_ScenarioClass_Instance + 1146) = g_CurrentFrame; /*0x6e1571*/
    v7 = g_ScenarioClass_Instance; /*0x6e1577*/
  }
  v7[1149] = &g_TypeClass_DefaultString; /*0x6e1581*/
  if ( &g_INI_DefaultBuffer ) /*0x6e158d*/
  {
    strncpy(Destination, &g_INI_DefaultBuffer, 0x1Fu); /*0x6e15a1*/
    Destination[31] = 0; /*0x6e15a9*/
  }
  else
  {
    Destination[0] = (unsigned __int8)&g_INI_DefaultBuffer; /*0x6e158f*/
  }
  if ( Destination != (char *)g_ScenarioClass_Instance + 4600 ) /*0x6e15c1*/
    qmemcpy((char *)g_ScenarioClass_Instance + 4600, Destination, 0x20u); /*0x6e15cd*/
  ObjectClass::PreDraw(&MapClass_Instance); /*0x6e15d5*/
  return 1; /*0x6e15dd*/
}



// ==== 0x006E15F0  ObjectClass::ReadINIEntry  this=ObjectClass  sig=csp ====
char __thiscall sub_6E15F0(const char *this, int a2, int a3, int a4, int a5)
{
  wchar_t *v5; // esi
  char *v6; // edi
  char *v7; // esi
  char Destination[32]; // [esp+Ch] [ebp-40h] BYREF
  char v10[32]; // [esp+2Ch] [ebp-20h] BYREF

  v5 = (wchar_t *)(this + 109); /*0x6e15f8*/
  if ( this->u32_1B4 && this != (const char *)-109 ) /*0x6e1604*/
  {
    strncpy(Destination, this + 109, 0x1Fu); /*0x6e1631*/
    Destination[31] = 0; /*0x6e163d*/
    *((_DWORD *)g_ScenarioClass_Instance + 1149) = GetStringCSF(v5, 0, g_Str_File_TAction_CPP, 2242); /*0x6e1656*/
    v6 = (char *)g_ScenarioClass_Instance + 4600; /*0x6e1666*/
    if ( Destination != (char *)g_ScenarioClass_Instance + 4600 ) /*0x6e166e*/
    {
      v7 = Destination; /*0x6e1675*/
LABEL_10:
      qmemcpy(v6, v7, 0x20u); /*0x6e16b0*/
    }
  }
  else
  {
    Destination[0] = 0; /*0x6e1611*/
    *((_DWORD *)g_ScenarioClass_Instance + 1149) = &g_TypeClass_DefaultString; /*0x6e1617*/
    if ( &g_INI_DefaultBuffer ) /*0x6e1621*/
    {
      strncpy(v10, &g_INI_DefaultBuffer, 0x1Fu); /*0x6e1687*/
      v10[31] = 0; /*0x6e168f*/
    }
    else
    {
      v10[0] = 0; /*0x6e1623*/
    }
    v6 = (char *)g_ScenarioClass_Instance + 4600; /*0x6e169d*/
    if ( v10 != (char *)g_ScenarioClass_Instance + 4600 ) /*0x6e16a5*/
    {
      v7 = v10; /*0x6e16ac*/
      goto LABEL_10; /*0x6e16ac*/
    }
  }
  ObjectClass::PreDraw(&MapClass_Instance); /*0x6e16b2*/
  return 1; /*0x6e16bc*/
}



// ==== 0x006E1780  TActionClass::PlayAudioAtRandomWP  this=TActionClass  sig=csp ====
char __thiscall TActionClass::PlayAudioAtRandomWP(int *this, int a2, int a3, int a4, int a5)
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
    if ( ScenarioClass::Is_Waypoint_Valid((char *)g_ScenarioClass_Instance, v7) ) /*0x6e179b*/
    {
      ++v5; /*0x6e17b7*/
      *v8++ = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v14, v7); /*0x6e17b8*/
      if ( v5 == 400 ) /*0x6e17c3*/
        break; /*0x6e17c3*/
    }
    ++v7; /*0x6e17c5*/
  }
  while ( v7 < 702 ); /*0x6e17cc*/
  v9 = (__int16 *)&v15[Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v5 - 1)]; /*0x6e17e3*/
  v10 = (v9[1] << 8) + 128; /*0x6e1800*/
  v13[0] = (*v9 << 8) + 128; /*0x6e1805*/
  v11 = this->idxArray; /*0x6e1809*/
  v13[1] = v10; /*0x6e180f*/
  v13[2] = 0; /*0x6e1813*/
  PlayAudioAt2(v11, v13, 0); /*0x6e181b*/
  return 1; /*0x6e1820*/
}



// ==== 0x006E1830  ScriptAction::ReadParameter  this=ParticleSystemClass  sig=csp ====
_DWORD *__thiscall sub_6E1830(_DWORD *this)
{
  int v1; // esi
  int v2; // eax
  _DWORD *v3; // esi
  _DWORD *result; // eax
  __int16 v5[2]; // [esp+4h] [ebp-4h] BYREF

  v1 = *this / 256; /*0x6e184b*/
  v2 = this->vtable2 / 256; /*0x6e184e*/
  v5[0] = v1; /*0x6e1851*/
  v5[1] = v2; /*0x6e1856*/
  if ( __PAIR32__(v2, v1) == dword_B0E680 ) /*0x6e186c*/
    return 0; /*0x6e189e*/
  v3 = CellCoord::To_CellObj(&MapClass_Instance, v5); /*0x6e1886*/
  result = Cell::IsBridge(v3); /*0x6e188a*/
  if ( !result ) /*0x6e1891*/
    return CellClass::FindInfantry(v3, 0); /*0x6e1896*/
  return result; /*0x6e189b*/
}



// ==== 0x006E18B0  CellClass::Find  this=CellClass  sig=csp ====
char __thiscall sub_6E18B0(int *this, int a2, int a3, int a4, int a5)
{
  int *WorldCoords; // eax
  _DWORD *v7; // edi
  _DWORD *Infantry; // eax
  int v10; // [esp+8h] [ebp-1Ch] BYREF
  int v11; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h]
  int v13; // [esp+14h] [ebp-10h]
  _DWORD v14[3]; // [esp+18h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((__int16 *)g_ScenarioClass_Instance, v14, this->q044); /*0x6e18c6*/
  v11 = *WorldCoords; /*0x6e18cf*/
  v12 = WorldCoords[1]; /*0x6e18d6*/
  v13 = WorldCoords[2]; /*0x6e18e4*/
  LOWORD(v10) = v11 / 256; /*0x6e1904*/
  HIWORD(v10) = v12 / 256; /*0x6e1909*/
  if ( v10 != dword_B0E680 /*0x6e1947*/
    && ((v7 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10), (Infantry = Cell::IsBridge(v7)) != 0)
     || (Infantry = CellClass::FindInfantry(v7, 0)) != 0) )
  {
    ObjectClass::CheckFlagD0(Infantry, this->smudgeTypeIndex); /*0x6e1952*/
    return 1; /*0x6e1958*/
  }
  else
  {
    PlayAudioAt2(this->smudgeTypeIndex, &v11, 1); /*0x6e196d*/
    return 1; /*0x6e1973*/
  }
}



// ==== 0x006E1980  TActionClass::executeGuardAreaAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E1980(int *this, int a2, int a3, int a4, int a5)
{
  int *WorldCoords; // eax
  _DWORD *v6; // esi
  _DWORD *Infantry; // eax
  int v9; // [esp+4h] [ebp-1Ch] BYREF
  int v10; // [esp+8h] [ebp-18h] BYREF
  int v11; // [esp+Ch] [ebp-14h]
  int v12; // [esp+10h] [ebp-10h]
  _DWORD v13[3]; // [esp+14h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((__int16 *)g_ScenarioClass_Instance, v13, this->q011); /*0x6e1993*/
  v10 = *WorldCoords; /*0x6e199c*/
  v11 = WorldCoords[1]; /*0x6e19a3*/
  v12 = WorldCoords[2]; /*0x6e19b1*/
  LOWORD(v9) = v10 / 256; /*0x6e19d1*/
  HIWORD(v9) = v11 / 256; /*0x6e19d6*/
  if ( v9 != dword_B0E680 /*0x6e1a14*/
    && ((v6 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v9), (Infantry = Cell::IsBridge(v6)) != 0)
     || (Infantry = CellClass::FindInfantry(v6, 0)) != 0) )
  {
    ObjectClass::CheckFlagD0(Infantry, -1); /*0x6e1a1a*/
    return 1; /*0x6e1a1f*/
  }
  else
  {
    globalHelper_050F40(&v10, 1); /*0x6e1a31*/
    return 1; /*0x6e1a36*/
  }
}



// ==== 0x006E1A40  TActionClass::executePatrolAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E1A40(int *this, void *a2, int a3, int a4, int a5)
{
  int *Waypoint_Location; // eax
  int *v7; // [esp+0h] [ebp-4h] BYREF

  v7 = this; /*0x6e1a40*/
  Waypoint_Location = ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v7, this->q011); /*0x6e1a50*/
  SelectSimilarBuildingTypes(a2, *Waypoint_Location); /*0x6e1a5c*/
  return 1; /*0x6e1a64*/
}



// ==== 0x006E1A70  TActionClass::executeScatterAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E1A70(int *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // kr00_4
  int v8[3]; // [esp+0h] [ebp-14h] BYREF
  __int16 v9[4]; // [esp+Ch] [ebp-8h] BYREF

  if ( *((_BYTE *)HouseClass_Player + 576) ) /*0x6e1a78*/
    return 1; /*0x6e1b79*/
  *(_DWORD *)v9 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, v8, this->idxArray); /*0x6e1aaa*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, v9) + 80) & 0x100) != 0 /*0x6e1ad6*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, v9) + 80) & 0x400) != 0 )
  {
    v5 = 4; /*0x6e1adc*/
  }
  else
  {
    v5 = 0; /*0x6e1ad8*/
  }
  v6 = v5 + *((char *)CellCoord::To_CellObj(&MapClass_Instance, v9) + 283); /*0x6e1afc*/
  v8[2] = v6 * dword_B0E6E0; /*0x6e1b36*/
  v8[1] = ((__int16)(v9[1] - v6 / 2) << 8) + 128; /*0x6e1b3d*/
  v8[0] = ((__int16)(v9[0] - v6 / 2) << 8) + 128; /*0x6e1b4c*/
  TActionClass_Helper(v8, g_RulesClass_Instance->ScoldSound); /*0x6e1b61*/
  CellSystem::UpdateVisibility(&MapClass_Instance); /*0x6e1b6b*/
  return 1; /*0x6e1b73*/
}



// ==== 0x006E1BD0  ScenarioClass::UpdateCounters  this=ScenarioClass  sig=csp ====
char __thiscall sub_6E1BD0(int *this, int a2, int a3, int a4, int a5)
{
  int Status; // eax

  SuperClass::StartTimer(*(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * this->q024), 1, 0, 0); /*0x6e1bed*/
  if ( HouseClass_Player == (#375 *)a2 ) /*0x6e1bf8*/
  {
    SidebarClass::AddCameo((int *)&MapClass_Instance, 31, this->q024); /*0x6e1c08*/
    Status = HouseClass::GetStatus((void *)0x1F, 0); /*0x6e1c1a*/
    Sidebar::ActivateTab((int)&MapClass_Instance, Status); /*0x6e1c25*/
  }
  return 1; /*0x6e1c2a*/
}



// ==== 0x006E1C40  SuperClass::Get  this=SuperClass  sig=csp ====
char __thiscall sub_6E1C40(int *this, int a2, int a3, int a4, int a5)
{
  int Status; // eax

  SuperClass::StartTimer(*(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * this->q024), 0, 0, 0); /*0x6e1c5d*/
  *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * this->q024) + 96) = 0; /*0x6e1c71*/
  if ( HouseClass_Player == (#375 *)a2 ) /*0x6e1c7c*/
  {
    SidebarClass::AddCameo((int *)&MapClass_Instance, 31, this->q024); /*0x6e1c8c*/
    Status = HouseClass::GetStatus((void *)0x1F, 0); /*0x6e1c9e*/
    Sidebar::ActivateTab((int)&MapClass_Instance, Status); /*0x6e1ca9*/
  }
  return 1; /*0x6e1cae*/
}



// ==== 0x006E1CC0  TActionClass::executeRetreatAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E1CC0(int *this, int a2, int a3, int a4, int a5)
{
  void **v5; // eax
  int v7; // [esp+0h] [ebp-14h] BYREF
  int v8; // [esp+4h] [ebp-10h] BYREF
  int v9[2]; // [esp+8h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+10h] [ebp-4h]

  v7 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v8, this->q011); /*0x6e1cdb*/
  GroundHeight = 0; /*0x6e1cdf*/
  v9[1] = (SHIWORD(v7) << 8) + 128; /*0x6e1d00*/
  v9[0] = ((__int16)v7 << 8) + 128; /*0x6e1d0a*/
  GroundHeight = Cell::GetGroundHeight(v9); /*0x6e1d13*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v7) + 80) & 0x100) != 0 /*0x6e1d49*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v7) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e1d57*/
  }
  v5 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6e1d60*/
  if ( v5 ) /*0x6e1d6a*/
    *((_BYTE *)AnimClass::ctor(v5, (void *)g_RulesClass_Instance[1].BarrelDebris[1], v9, 0, 1, (void *)0x600, 0, 0) + 408) = 1; /*0x6e1d92*/
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
    if ( g_SidebarState <= 0 ) /*0x6e206b*/
      break; /*0x6e206b*/
    do /*0x6e20e8*/
    {
      v7 = (int *)*((_DWORD *)g_TechnoClass_Count + v6); /*0x6e2076*/
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
                    g_RulesClass_Instance->SilverCrate[5],
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
    while ( v6 < g_SidebarState ); /*0x6e20e8*/
  }
  while ( v5 ); /*0x6e20ec*/
  v10 = a4; /*0x6e20f2*/
  if ( *(_DWORD *)a4 != dword_B0E680 ) /*0x6e2100*/
  {
    v11 = 3; /*0x6e2119*/
    if ( !CellClass::SetTerrainType(&MapClass_Instance, a4) ) /*0x6e211e*/
    {
      do /*0x6e213b*/
        v12 = v11--; /*0x6e2127*/
      while ( v12 > 0 && !CellClass::SetTerrainType(&MapClass_Instance, v10) ); /*0x6e213b*/
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
char __thiscall sub_6E21E0(int *this, int a2, int a3, int a4, int a5)
{
  int *v5; // ecx
  int i; // eax
  int j; // esi

  v5 = this + 13; /*0x6e21e0*/
  dword_87F8E4 = *v5; /*0x6e21e5*/
  dword_87F8E8 = v5[1]; /*0x6e21ed*/
  dword_87F8EC = v5[2]; /*0x6e21f6*/
  dword_87F8F0 = v5[3]; /*0x6e21fe*/
  RadarClass::Process(&MapClass_Instance); /*0x6e2209*/
  LayerClass::CellIteratorReset(&MapClass_Instance); /*0x6e2213*/
  for ( i = LayerClass::CellIteratorNext(&MapClass_Instance); i; i = LayerClass::CellIteratorNext(&MapClass_Instance) ) /*0x6e2224*/
    House::AnnounceUpgrade(i, -1); /*0x6e222a*/
  Terrain::ConnectivityGraph(&MapClass_Instance); /*0x6e2243*/
  MapClass::BuildSubzones(&MapClass_Instance); /*0x6e224d*/
  FogOfWar::Render((int **)&MapClass_Instance); /*0x6e2257*/
  for ( j = g_BuildingProductionState - 1; j >= 0; --j ) /*0x6e2267*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)g_BuildingClass_InstanceCount + j) + 1184))( /*0x6e2275*/
      *((_DWORD *)g_BuildingClass_InstanceCount + j),
      1);
  return 1; /*0x6e2281*/
}



// ==== 0x006E2290  TActionClass::executeEscortAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E2290(int *this, int a2, int a3, int a4, int a5)
{
  void **v6; // eax
  int v8; // [esp+4h] [ebp-14h] BYREF
  int v9; // [esp+8h] [ebp-10h] BYREF
  int v10[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  v8 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v9, this->q011); /*0x6e22ae*/
  GroundHeight = 0; /*0x6e22b2*/
  v10[1] = (SHIWORD(v8) << 8) + 128; /*0x6e22d3*/
  v10[0] = ((__int16)v8 << 8) + 128; /*0x6e22dd*/
  GroundHeight = Cell::GetGroundHeight(v10); /*0x6e22e6*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v8) + 80) & 0x100) != 0 /*0x6e231c*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v8) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e232a*/
  }
  v6 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6e2333*/
  if ( v6 ) /*0x6e233d*/
    *((_BYTE *)AnimClass::ctor(v6, *((void **)g_AnimTypeCount + this->idxArray), v10, 0, 1, (void *)0x600, 0, 0) + 408) = 1; /*0x6e2368*/
  else
    MEMORY[0x198] = 1; /*0x6e237b*/
  return 1; /*0x6e2371*/
}



// ==== 0x006E2390  TActionClass::CreateWeaponImpactAtWaypoint  this=TActionClass  sig=csp ====
char __thiscall sub_6E2390(int *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // esi
  int v8; // ebx
  _DWORD *v9; // eax
  void *WarheadVersusMultiplier; // esi
  void **v11; // ebp
  void *v12; // eax
  int v14; // [esp+10h] [ebp-14h] BYREF
  int v15; // [esp+14h] [ebp-10h] BYREF
  int v16; // [esp+18h] [ebp-Ch] BYREF
  int v17; // [esp+1Ch] [ebp-8h]
  int GroundHeight; // [esp+20h] [ebp-4h]

  v14 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v15, this->q011); /*0x6e23b1*/
  GroundHeight = 0; /*0x6e23b5*/
  v17 = (SHIWORD(v14) << 8) + 128; /*0x6e23d6*/
  v16 = ((__int16)v14 << 8) + 128; /*0x6e23e0*/
  GroundHeight = Cell::GetGroundHeight(&v16); /*0x6e23e9*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v14) + 80) & 0x100) != 0 /*0x6e241f*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v14) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e242d*/
  }
  v6 = this->idxArray; /*0x6e2431*/
  v7 = *((_DWORD *)g_WeaponTypeConfig + v6); /*0x6e2440*/
  v8 = *(_DWORD *)(v7 + 164); /*0x6e2449*/
  v9 = Coord::To_Cell(&MapClass_Instance, &v16); /*0x6e244f*/
  WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier(v8, *(_DWORD *)(v7 + 172), v9[59], &v16); /*0x6e246d*/
  if ( WarheadVersusMultiplier ) /*0x6e2471*/
  {
    v11 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6e247d*/
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
char __thiscall sub_6E2520(int *this, int a2, int a3, int a4, int a5)
{
  #374 *v6; // eax
  int v8; // [esp+4h] [ebp-14h] BYREF
  int v9; // [esp+8h] [ebp-10h] BYREF
  int v10[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  v8 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v9, this->q011); /*0x6e253e*/
  GroundHeight = 0; /*0x6e2542*/
  v10[1] = (SHIWORD(v8) << 8) + 128; /*0x6e2563*/
  v10[0] = ((__int16)v8 << 8) + 128; /*0x6e256d*/
  GroundHeight = Cell::GetGroundHeight(v10); /*0x6e2576*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v8) + 80) & 0x100) != 0 /*0x6e25ac*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v8) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e25ba*/
  }
  v6 = (#374 *)__2_YAPAXI_Z(0x148u); /*0x6e25c3*/
  if ( v6 ) /*0x6e25cd*/
    DamageAnimClass::Constructor(v6, *((_DWORD *)dword_A8EB2C + this->idxArray), v10, 0); /*0x6e25e8*/
  return 1; /*0x6e25ef*/
}



// ==== 0x006E2660  SmallFunc_6E2660  this=-  sig=csp ====
char __stdcall sub_6E2660(int a1, int a2, int a3, int a4)
{
  g_RadarBlipPool = 0; /*0x6e2669*/
  g_RadarBlipManager = 0; /*0x6e266f*/
  dword_880994 = -1; /*0x6e2675*/
  Mouse::SetBounds((int)&MapClass_Instance, 0); /*0x6e267f*/
  BuildingClass::TogglePower2(&MapClass_Instance, 0); /*0x6e268a*/
  BuildingClass::TogglePower(&MapClass_Instance, 0); /*0x6e2695*/
  byte_88099A = 0; /*0x6e269a*/
  byte_88099B = 0; /*0x6e26a0*/
  byte_88099C = 0; /*0x6e26a6*/
  Scenario::ClearScreen(); /*0x6e26ac*/
  return 1; /*0x6e26b3*/
}



// ==== 0x006E26D0  ScenarioClass::Set  this=ScenarioClass  sig=csp ====
char __thiscall sub_6E26D0(int *this, int a2, int a3, int a4, int a5)
{
  int v7; // [esp+4h] [ebp-14h] BYREF
  int v8; // [esp+8h] [ebp-10h] BYREF
  _DWORD v9[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  v7 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v8, this->q011); /*0x6e26ee*/
  GroundHeight = 0; /*0x6e26f2*/
  v9[1] = (SHIWORD(v7) << 8) + 128; /*0x6e2713*/
  v9[0] = ((__int16)v7 << 8) + 128; /*0x6e271d*/
  GroundHeight = Cell::GetGroundHeight(v9); /*0x6e2726*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v7) + 80) & 0x100) != 0 /*0x6e275c*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v7) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e276a*/
  }
  TacticalClass::SetPosition(g_TacticalClass_Instance, v9, this->q024); /*0x6e2780*/
  return 1; /*0x6e2787*/
}



// ==== 0x006E2790  ObjectClass::method_6E2790  this=ObjectClass  sig=csp ====
char __thiscall sub_6E2790(int *this, int a2, int a3, int a4, int a5)
{
  int v6; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+4h] [ebp-10h] BYREF
  int v8[2]; // [esp+8h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+10h] [ebp-4h]

  v6 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v7, this->q011); /*0x6e27ab*/
  GroundHeight = 0; /*0x6e27af*/
  v8[1] = (SHIWORD(v6) << 8) + 128; /*0x6e27d0*/
  v8[0] = ((__int16)v6 << 8) + 128; /*0x6e27da*/
  GroundHeight = Cell::GetGroundHeight(v8); /*0x6e27e3*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v6) + 80) & 0x100) != 0 /*0x6e2819*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v6) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e2827*/
  }
  Tactical::SetTacticalPosition((int)g_TacticalClass_Instance, v8); /*0x6e2836*/
  return 1; /*0x6e283d*/
}



// ==== 0x006E2970  BuildingLightClass::FindAllTargets  this=BuildingLightClass  sig=csp ====
char __thiscall sub_6E2970(_DWORD **this, int a2, int a3, int a4, int a5)
{
  char v5; // bl
  int v6; // edi
  int v8; // esi
  _DWORD *v9; // ecx

  v5 = 0; /*0x6e2978*/
  v6 = 0; /*0x6e297a*/
  if ( g_BuildingProductionState <= 0 ) /*0x6e2980*/
    return 0; /*0x6e2a08*/
  do /*0x6e29fc*/
  {
    v8 = *((_DWORD *)g_BuildingClass_InstanceCount + v6); /*0x6e298c*/
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
                v9 = *(_DWORD **)(v8 + 52); /*0x6e29cb*/
                if ( v9 ) /*0x6e29d0*/
                {
                  if ( LinkedList::Contains(v9, a4) ) /*0x6e29d7*/
                  {
                    BuildingLightClass::FindTarget(*(_DWORD **)(v8 + 1536), this->objectTypeFlags); /*0x6e29ed*/
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
  while ( v6 < g_BuildingProductionState ); /*0x6e29fc*/
  return v5; /*0x6e29ff*/
}



// ==== 0x006E2A50  ObjectClass::method_6E2A50  this=ObjectClass  sig=csp ====
char __thiscall sub_6E2A50(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // esi
  _DWORD *v8; // eax
  int v9; // ecx

  if ( this->q04C ) /*0x6e2a55*/
  {
    v6 = g_GameObjectCleanup; /*0x6e2a5c*/
    v7 = 0; /*0x6e2a62*/
    if ( g_GameObjectCleanup > 0 ) /*0x6e2a66*/
    {
      v8 = g_TagClassCount; /*0x6e2a68*/
      do /*0x6e2a91*/
      {
        if ( *(_DWORD *)(v8[v7] + 36) == this->q04C ) /*0x6e2a78*/
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
char __thiscall sub_6E2AF0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // esi
  int *v7; // ecx
  _BYTE *v8; // eax
  int v9; // edx

  if ( !this->TActionClass_field_50 ) /*0x6e2af4*/
    return 1; /*0x6e2af4*/
  v6 = 0; /*0x6e2b00*/
  if ( g_ProductionQueueState <= 0 ) /*0x6e2b04*/
    return 1; /*0x6e2b69*/
  do /*0x6e2b5e*/
  {
    v7 = (int *)*((_DWORD *)g_TriggerClassCapacity + v6); /*0x6e2b0f*/
    v8 = (_BYTE *)v7[9]; /*0x6e2b12*/
    if ( v8 == (_BYTE *)this->TActionClass_field_50 ) /*0x6e2b17*/
    {
      v9 = *((_DWORD *)g_ScenarioClass_Instance + 387); /*0x6e2b1f*/
      if ( (v9 || v8[156]) && (v9 != 1 || v8[157]) && (v9 != 2 || v8[158]) ) /*0x6e2b47*/
        TActionClass::executeAirstrikeAction(v7); /*0x6e2b51*/
    }
    ++v6; /*0x6e2b5b*/
  }
  while ( v6 < g_ProductionQueueState ); /*0x6e2b5e*/
  return 1; /*0x6e2b61*/
}



// ==== 0x006E2C20  globalHelper_0E2C20  this=-  sig=csp ====
char __stdcall sub_6E2C20(int a1, int a2, int a3, int a4)
{
  LayerClass::ClearFactoryCellAssignments(&MapClass_Instance); /*0x6e2c25*/
  MapClass::MarkForRedraw(&MapClass_Instance, 1); /*0x6e2c31*/
  return 1; /*0x6e2c38*/
}



// ==== 0x006E2C40  TActionClass::SpawnMeteorShower  this=TActionClass  sig=csp ====
char __thiscall sub_6E2C40(int *this, int a2, int a3, int a4, int a5)
{
  int v6; // esi
  int String; // ebp
  int v8; // edi
  _DWORD *v9; // esi
  int v10; // ebx
  int v11; // eax
  void **v12; // esi
  bool v13; // zf
  signed int v14; // eax
  int v15; // eax
  int v17; // [esp+Ch] [ebp-24h] BYREF
  int v18; // [esp+10h] [ebp-20h]
  int v19; // [esp+14h] [ebp-1Ch] BYREF
  int v20; // [esp+18h] [ebp-18h] BYREF
  int v21; // [esp+1Ch] [ebp-14h]
  int GroundHeight; // [esp+20h] [ebp-10h]
  int v23[2]; // [esp+24h] [ebp-Ch] BYREF
  int v24; // [esp+2Ch] [ebp-4h]

  v17 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v19, this->q011); /*0x6e2c60*/
  GroundHeight = 0; /*0x6e2c64*/
  v21 = (SHIWORD(v17) << 8) + 128; /*0x6e2c85*/
  v20 = ((__int16)v17 << 8) + 128; /*0x6e2c8f*/
  GroundHeight = Cell::GetGroundHeight(&v20); /*0x6e2c98*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v17) + 80) & 0x100) != 0 /*0x6e2cce*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v17) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e2cdc*/
  }
  v6 = dword_842AFC[this->idxArray] + (int)abs32(Random::State((_DWORD *)g_ScenarioClass_Instance + 134)) % 3; /*0x6e2d0a*/
  String = GlobalArray::FindString(aMetlarge); /*0x6e2d1b*/
  v19 = GlobalArray::FindString(aMetsmall); /*0x6e2d22*/
  v8 = 70 * v6; /*0x6e2d32*/
  if ( v6 <= 0 ) /*0x6e2d36*/
    return 1; /*0x6e2e0e*/
  v18 = v6; /*0x6e2d3d*/
  do /*0x6e2dfa*/
  {
    v9 = (char *)g_ScenarioClass_Instance + 536; /*0x6e2d46*/
    v10 = Random::State((_DWORD *)g_ScenarioClass_Instance + 134) % v8; /*0x6e2d58*/
    v11 = Random::State(v9); /*0x6e2d5a*/
    v23[0] = v10 + v20; /*0x6e2d6d*/
    v24 = GroundHeight; /*0x6e2d77*/
    v23[1] = v11 % v8 + v21; /*0x6e2d7f*/
    v24 = Cell::GetGroundHeight(v23); /*0x6e2d93*/
    v12 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6e2d9c*/
    if ( v12 ) /*0x6e2da3*/
    {
      v14 = abs32(Random::State((_DWORD *)g_ScenarioClass_Instance + 134)) & 0x80000001; /*0x6e2dba*/
      v13 = v14 == 0; /*0x6e2dba*/
      if ( v14 < 0 ) /*0x6e2dbf*/
        v13 = (((_BYTE)v14 - 1) | 0xFFFFFFFE) == -1; /*0x6e2dc5*/
      v15 = String; /*0x6e2dc6*/
      if ( v13 ) /*0x6e2dc8*/
        v15 = v19; /*0x6e2dca*/
      AnimClass::ctor(v12, *((void **)g_AnimTypeCount + v15), v23, 0, 1, (void *)0x600, 0, 0); /*0x6e2dec*/
    }
    --v18; /*0x6e2df6*/
  }
  while ( v18 ); /*0x6e2dfa*/
  return 1; /*0x6e2e01*/
}



// ==== 0x006E2E60  TActionClass::executeSelfDestructAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E2E60(_DWORD *this, int a2, int a3, int a4, int a5)
{
  UpdateSurfaceAnimations( /*0x6e2e8d*/
    10 * this->Value,
    10 * *((_DWORD *)g_ScenarioClass_Instance + 3406),
    10 * *((_DWORD *)g_ScenarioClass_Instance + 3407),
    0);
  *((_DWORD *)g_ScenarioClass_Instance + 3405) = this->Value; /*0x6e2ea1*/
  return 1; /*0x6e2ea0*/
}



// ==== 0x006E2EB0  TActionClass::executeExplodeAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E2EB0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  UpdateSurfaceAnimations( /*0x6e2edd*/
    10 * *((_DWORD *)g_ScenarioClass_Instance + 3405),
    10 * this->Value,
    10 * *((_DWORD *)g_ScenarioClass_Instance + 3407),
    0);
  *((_DWORD *)g_ScenarioClass_Instance + 3406) = this->Value; /*0x6e2ef1*/
  return 1; /*0x6e2ef0*/
}



// ==== 0x006E2F00  TActionClass::executeChronoshiftAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E2F00(_DWORD *this, int a2, int a3, int a4, int a5)
{
  UpdateSurfaceAnimations( /*0x6e2f2d*/
    10 * *((_DWORD *)g_ScenarioClass_Instance + 3405),
    10 * *((_DWORD *)g_ScenarioClass_Instance + 3406),
    10 * this->Value,
    0);
  *((_DWORD *)g_ScenarioClass_Instance + 3407) = this->Value; /*0x6e2f41*/
  return 1; /*0x6e2f40*/
}



// ==== 0x006E30C0  ObjectClass::CreateHouseClass  this=ObjectClass  sig=csp ====
char __userpurge sub_6E30C0@<al>(
        int a1@<ecx>,
        _UNKNOWN **a2@<ebp>,
        _DWORD *a3@<edi>,
        int a4,
        int a5,
        _DWORD *a6,
        int a7)
{
  void *v7; // esi
  int Field11; // eax

  v7 = *(void **)(a1 + 144); /*0x6e30c1*/
  if ( !a6 ) /*0x6e30cd*/
    return 0; /*0x6e30cd*/
  if ( v7 == (void *)8997 ) /*0x6e30d5*/
  {
    Field11 = Property::GetField11(a6); /*0x6e30d7*/
  }
  else
  {
    if ( v7 == (void *)-1 ) /*0x6e30e1*/
      return 0; /*0x6e3103*/
    if ( BuildingType::IsSpecialType(v7) ) /*0x6e30e5*/
      Field11 = BuildingType::FindOwnerHouse(v7); /*0x6e30f0*/
    else
      Field11 = HouseClass::FindOwner(v7); /*0x6e30f7*/
  }
  if ( !Field11 ) /*0x6e30fe*/
    return 0; /*0x6e30fe*/
  HouseClass::RespawnStartingForces(Field11, a2, a3, (int)v7); /*0x6e3108*/
  return 1; /*0x6e3102*/
}



// ==== 0x006E3120  ObjectClass::SmallFunc_6E3120  this=ObjectClass  sig=csp ====
char __userpurge sub_6E3120@<al>(
        int a1@<ecx>,
        _UNKNOWN **a2@<ebx>,
        _DWORD *a3@<edi>,
        int a4,
        int a5,
        _DWORD *a6,
        int a7)
{
  void *v7; // esi
  int Field11; // eax

  v7 = *(void **)(a1 + 144); /*0x6e3121*/
  if ( !a6 ) /*0x6e312d*/
    return 0; /*0x6e312d*/
  if ( v7 == (void *)8997 ) /*0x6e3135*/
  {
    Field11 = Property::GetField11(a6); /*0x6e3137*/
  }
  else
  {
    if ( v7 == (void *)-1 ) /*0x6e3141*/
      return 0; /*0x6e3163*/
    if ( BuildingType::IsSpecialType(v7) ) /*0x6e3145*/
      Field11 = BuildingType::FindOwnerHouse(v7); /*0x6e3150*/
    else
      Field11 = HouseClass::FindOwner(v7); /*0x6e3157*/
  }
  if ( !Field11 ) /*0x6e315e*/
    return 0; /*0x6e315e*/
  HouseClass::RespawnStartingBuildings(Field11, a2, a3, (int)v7); /*0x6e3168*/
  return 1; /*0x6e3162*/
}



// ==== 0x006E3180  TActionClass::executePlaceBeaconAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E3180(_DWORD *this, int a2, int a3, _DWORD *a4, int a5)
{
  void *v5; // esi
  void *Field11; // eax

  v5 = (void *)this->Value; /*0x6e3181*/
  if ( !a4 ) /*0x6e318d*/
    return 0; /*0x6e318d*/
  if ( v5 == (void *)8997 ) /*0x6e3195*/
  {
    Field11 = (void *)Property::GetField11(a4); /*0x6e3197*/
  }
  else
  {
    if ( v5 == (void *)-1 ) /*0x6e31a1*/
      return 0; /*0x6e31c3*/
    if ( BuildingType::IsSpecialType(v5) ) /*0x6e31a5*/
      Field11 = (void *)BuildingType::FindOwnerHouse(v5); /*0x6e31b0*/
    else
      Field11 = (void *)HouseClass::FindOwner(v5); /*0x6e31b7*/
  }
  if ( !Field11 ) /*0x6e31be*/
    return 0; /*0x6e31be*/
  HouseClass::ClearLowPowerTargets(Field11); /*0x6e31c8*/
  return 1; /*0x6e31c2*/
}



// ==== 0x006E31E0  TActionClass::executeJumpjetAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E31E0(_DWORD *this, int a2, int a3, _DWORD *a4, int a5)
{
  void *v5; // esi
  void *Field11; // eax

  v5 = (void *)this->Value; /*0x6e31e1*/
  if ( !a4 ) /*0x6e31ed*/
    return 0; /*0x6e31ed*/
  if ( v5 == (void *)8997 ) /*0x6e31f5*/
  {
    Field11 = (void *)Property::GetField11(a4); /*0x6e31f7*/
  }
  else
  {
    if ( v5 == (void *)-1 ) /*0x6e3201*/
      return 0; /*0x6e3223*/
    if ( BuildingType::IsSpecialType(v5) ) /*0x6e3205*/
      Field11 = (void *)BuildingType::FindOwnerHouse(v5); /*0x6e3210*/
    else
      Field11 = (void *)HouseClass::FindOwner(v5); /*0x6e3217*/
  }
  if ( !Field11 ) /*0x6e321e*/
    return 0; /*0x6e321e*/
  HouseClass::DestroyAllBuildings(Field11); /*0x6e3228*/
  return 1; /*0x6e3222*/
}



// ==== 0x006E3240  TActionClass::executeOpenGateAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E3240(_DWORD *this, int a2, int a3, _DWORD *a4, int a5)
{
  void *v5; // esi
  void *Field11; // eax

  v5 = (void *)this->Value; /*0x6e3241*/
  if ( !a4 ) /*0x6e324d*/
    return 0; /*0x6e324d*/
  if ( v5 == (void *)8997 ) /*0x6e3255*/
  {
    Field11 = (void *)Property::GetField11(a4); /*0x6e3257*/
  }
  else
  {
    if ( v5 == (void *)-1 ) /*0x6e3261*/
      return 0; /*0x6e3283*/
    if ( BuildingType::IsSpecialType(v5) ) /*0x6e3265*/
      Field11 = (void *)BuildingType::FindOwnerHouse(v5); /*0x6e3270*/
    else
      Field11 = (void *)HouseClass::FindOwner(v5); /*0x6e3277*/
  }
  if ( !Field11 ) /*0x6e327e*/
    return 0; /*0x6e327e*/
  HouseClass::DestroyAllNonBuildingsNonNaval(Field11); /*0x6e3288*/
  return 1; /*0x6e3282*/
}



// ==== 0x006E32A0  TActionClass::executeCloseGateAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E32A0(_DWORD *this, int a2, int a3, _DWORD *a4, int a5)
{
  void *v5; // esi
  void *Field11; // eax

  v5 = (void *)this->Value; /*0x6e32a1*/
  if ( !a4 ) /*0x6e32ad*/
    return 0; /*0x6e32ad*/
  if ( v5 == (void *)8997 ) /*0x6e32b5*/
  {
    Field11 = (void *)Property::GetField11(a4); /*0x6e32b7*/
  }
  else
  {
    if ( v5 == (void *)-1 ) /*0x6e32c1*/
      return 0; /*0x6e32e3*/
    if ( BuildingType::IsSpecialType(v5) ) /*0x6e32c5*/
      Field11 = (void *)BuildingType::FindOwnerHouse(v5); /*0x6e32d0*/
    else
      Field11 = (void *)HouseClass::FindOwner(v5); /*0x6e32d7*/
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

  v7 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v7, this->q011); /*0x6e339b*/
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
char __thiscall sub_6E3410(int *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // esi
  int v6; // edi
  void *v7; // eax
  int *UIObjectCOM; // edi
  double v9; // st7
  double v10; // st7
  int v11; // eax
  int v13; // [esp-10h] [ebp-68h]
  int v14; // [esp-Ch] [ebp-64h]
  int v15; // [esp+Ch] [ebp-4Ch] BYREF
  double v16; // [esp+10h] [ebp-48h] BYREF
  double v17; // [esp+18h] [ebp-40h]
  double v18; // [esp+20h] [ebp-38h]
  int v19; // [esp+28h] [ebp-30h] BYREF
  int v20; // [esp+2Ch] [ebp-2Ch]
  int GroundHeight; // [esp+30h] [ebp-28h]
  _DWORD v22[3]; // [esp+34h] [ebp-24h] BYREF
  _QWORD v23[3]; // [esp+40h] [ebp-18h] BYREF

  v15 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v16, this->q011); /*0x6e3433*/
  GroundHeight = 0; /*0x6e3437*/
  v20 = (SHIWORD(v15) << 8) + 128; /*0x6e3458*/
  v19 = ((__int16)v15 << 8) + 128; /*0x6e3462*/
  GroundHeight = Cell::GetGroundHeight(&v19); /*0x6e346b*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v15) + 80) & 0x100) != 0 ) /*0x6e3487*/
    GroundHeight += dword_B0E6D4; /*0x6e3495*/
  v5 = (_DWORD *)*((_DWORD *)g_WeaponTypeConfig + SuperWeaponClass::FindByName(g_INI_Key_NukePayload)); /*0x6e34ad*/
  v6 = v5[40]; /*0x6e34c3*/
  v14 = v5[43]; /*0x6e34c9*/
  v13 = v5[41]; /*0x6e34ca*/
  v7 = Coord::To_Cell(&MapClass_Instance, &v19); /*0x6e34d3*/
  UIObjectCOM = (int *)CreateUIObjectCOM(v6, (int)v7, 0, v13, v14, 50, 0); /*0x6e34e1*/
  Function::46B260(UIObjectCOM, (int)v5); /*0x6e34e6*/
  v22[0] = v19; /*0x6e34ff*/
  v22[1] = v20; /*0x6e3503*/
  v22[2] = GroundHeight + 20000; /*0x6e3507*/
  if ( !UIObjectCOM ) /*0x6e350b*/
    return 0; /*0x6e35dc*/
  v16 = Math::SinCos(1.570748388432313); /*0x6e3520*/
  v16 = Math::ArcTan2(1.570748388432313) * v16 * -100.0; /*0x6e3547*/
  v17 = Math::ArcTan2(1.570748388432313); /*0x6e3550*/
  v9 = Math::ArcTan2(1.570748388432313); /*0x6e355e*/
  v18 = v16; /*0x6e356f*/
  *(double *)&v23[1] = v16; /*0x6e358b*/
  v17 = v9 * v17 * -100.0; /*0x6e358f*/
  *(double *)v23 = v17; /*0x6e359b*/
  v10 = Math::SinCos(1.570748388432313); /*0x6e35ab*/
  v11 = *UIObjectCOM; /*0x6e35b6*/
  *(double *)&v23[2] = v10 * -100.0; /*0x6e35c5*/
  (*(void (__thiscall **)(int *, _DWORD *, _QWORD *))(v11 + 496))(UIObjectCOM, v22, v23); /*0x6e35cb*/
  return 1; /*0x6e35d3*/
}



// ==== 0x006E35F0  ObjectClass::method_6E35F0  this=ObjectClass  sig=csp ====
char __thiscall sub_6E35F0(int *this, #375 *a2, int a3, int a4, int a5)
{
  int v6; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+4h] [ebp-10h] BYREF
  int v8; // [esp+8h] [ebp-Ch] BYREF
  int v9; // [esp+Ch] [ebp-8h]
  int GroundHeight; // [esp+10h] [ebp-4h]

  v6 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v7, this->q011); /*0x6e360b*/
  GroundHeight = 0; /*0x6e360f*/
  v9 = (SHIWORD(v6) << 8) + 128; /*0x6e3630*/
  v8 = ((__int16)v6 << 8) + 128; /*0x6e363a*/
  GroundHeight = Cell::GetGroundHeight(&v8); /*0x6e3643*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v6) + 80) & 0x100) != 0 ) /*0x6e365f*/
    GroundHeight += dword_B0E6D4; /*0x6e366d*/
  LOWORD(v7) = v8 / 256; /*0x6e3681*/
  HIWORD(v7) = v9 / 256; /*0x6e3696*/
  if ( LightningStorm::IsActive() ) /*0x6e369b*/
    return 0; /*0x6e36cc*/
  LightningStorm::Start(HIDWORD(g_RulesClass_Instance[1].Climb), *(_DWORD *)&g_RulesClass_Instance[1].gap370[4], v7, a2); /*0x6e36bf*/
  return 1; /*0x6e36c6*/
}



// ==== 0x006E36E0  TActionClass::executeParadropAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E36E0(int *this, int a2, int a3, int a4, int a5)
{
  void *v5; // eax
  int *v6; // eax
  int v7; // esi
  int v8; // edi
  int v9; // ebx
  void **v10; // eax
  int *v11; // edi
  int v12; // ebx
  __int16 v13; // cx
  _DWORD *i; // esi
  int v16; // [esp+Ch] [ebp-18h] BYREF
  int v17; // [esp+10h] [ebp-14h] BYREF
  int v18; // [esp+14h] [ebp-10h] BYREF
  int v19[3]; // [esp+18h] [ebp-Ch] BYREF

  v16 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v17, this->q011); /*0x6e3706*/
  v5 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v16); /*0x6e370a*/
  v6 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v5 + 72))(v5, v19); /*0x6e3718*/
  v7 = *v6; /*0x6e371b*/
  v8 = v6[1]; /*0x6e3722*/
  v9 = v6[2]; /*0x6e3725*/
  v10 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6e3728*/
  if ( v10 ) /*0x6e3732*/
  {
    v19[2] = v9 + 5; /*0x6e373b*/
    v19[0] = v7; /*0x6e3752*/
    v19[1] = v8; /*0x6e3756*/
    AnimClass::ctor(v10, (void *)g_RulesClass_Instance->PrerequisiteTech[3], v19, 0, 1, (void *)0x600, 0, 0); /*0x6e3764*/
  }
  v11 = dword_ABD490; /*0x6e3772*/
  v12 = 9; /*0x6e3777*/
  do /*0x6e37da*/
  {
    v13 = *((_WORD *)v11 + 1); /*0x6e377e*/
    LOWORD(v17) = *(_WORD *)v11 + v16; /*0x6e378a*/
    HIWORD(v17) = HIWORD(v16) + v13; /*0x6e378f*/
    v18 = v17; /*0x6e37a2*/
    for ( i = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v18) + 57); i; i = (_DWORD *)i[12] ) /*0x6e37b3*/
      (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*i + 340))(i, g_RulesClass_Instance->CrateMinimum, 0, 0); /*0x6e37c9*/
    ++v11; /*0x6e37d6*/
    --v12; /*0x6e37d9*/
  }
  while ( v12 ); /*0x6e37da*/
  return 1; /*0x6e37dc*/
}



// ==== 0x006E37F0  ObjectClass::method_6E37F0  this=ObjectClass  sig=csp ====
char __thiscall sub_6E37F0(int this, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  char *v6; // ebx
  int v7; // ecx
  char result; // al

  v5 = dword_A8EB10 - 1; /*0x6e37fa*/
  if ( dword_A8EB10 - 1 >= 0 ) /*0x6e3803*/
  {
    v6 = (char *)dword_A8EB04 + 4 * v5; /*0x6e380b*/
    while ( strcmp((const char *)(*(_DWORD *)v6 + 36), (const char *)(this + 84)) ) /*0x6e3845*/
    {
      --v5; /*0x6e3847*/
      v6 -= 4; /*0x6e3848*/
      if ( v5 < 0 ) /*0x6e384d*/
        goto LABEL_7; /*0x6e384d*/
    }
    *(_DWORD *)(*(_DWORD *)v6 + 1588) = *(_DWORD *)(this + 144); /*0x6e385b*/
  }
LABEL_7:
  v7 = HouseClass_Count - 1; /*0x6e3861*/
  for ( result = 1; v7 >= 0; *(_BYTE *)(*(_DWORD *)&HouseClass_Array->gap0[4 * v7 + 4] + 508) = 1 ) /*0x6e3870*/
    --v7; /*0x6e3878*/
  return result; /*0x6e3867*/
}



// ==== 0x006E38F0  SuperWeaponClass::CreateChemLauncher  this=SuperWeaponClass  sig=csp ====
char __thiscall SuperWeaponClass::CreateChemLauncher(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // esi
  void *v8; // eax
  int *UIObjectCOM; // esi
  double v10; // st7
  int v11; // eax
  int v13; // [esp-10h] [ebp-60h]
  int v14; // [esp-Ch] [ebp-5Ch]
  int v15; // [esp+8h] [ebp-48h] BYREF
  int v16; // [esp+Ch] [ebp-44h] BYREF
  double v17; // [esp+10h] [ebp-40h] BYREF
  double v18; // [esp+18h] [ebp-38h] BYREF
  double v19; // [esp+20h] [ebp-30h]
  int v20; // [esp+2Ch] [ebp-24h] BYREF
  int v21; // [esp+30h] [ebp-20h]
  int GroundHeight; // [esp+34h] [ebp-1Ch]
  _QWORD v23[3]; // [esp+38h] [ebp-18h] BYREF

  v15 = *(_DWORD *)ScenarioClass::Get_Waypoint_Location(&v16, this->q044); /*0x6e3913*/
  GroundHeight = 0; /*0x6e3917*/
  v21 = (SHIWORD(v15) << 8) + 128; /*0x6e3938*/
  v20 = ((__int16)v15 << 8) + 128; /*0x6e3942*/
  GroundHeight = Cell::GetGroundHeight(&v20); /*0x6e394b*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v15) + 80) & 0x100) != 0 ) /*0x6e3967*/
    GroundHeight += dword_B0E6D4; /*0x6e3975*/
  LOWORD(v16) = v20 / 256; /*0x6e398f*/
  HIWORD(v16) = v21 / 256; /*0x6e39a4*/
  v5 = *(_DWORD *)JumpjetLocomotionClass::ClampToCellBounds(&v17, &v16, 0); /*0x6e39c1*/
  v16 = v5; /*0x6e39c8*/
  v6 = (_DWORD *)*((_DWORD *)g_WeaponTypeConfig + SuperWeaponClass::FindByName(aChemlauncher)); /*0x6e39de*/
  v7 = v6[40]; /*0x6e39ec*/
  v14 = v6[43]; /*0x6e39f2*/
  v13 = v6[41]; /*0x6e39f3*/
  v8 = Coord::To_Cell(&MapClass_Instance, &v20); /*0x6e3a00*/
  UIObjectCOM = (int *)CreateUIObjectCOM(v7, (int)v8, 0, v13, v14, 20, 0); /*0x6e3a0e*/
  if ( !UIObjectCOM ) /*0x6e3a12*/
    return 0; /*0x6e3b0d*/
  v17 = Math::ArcTan2(-0.00009587672516830327); /*0x6e3a27*/
  v17 = Math::SinCos(1.570748388432313) * v17 * 100.0; /*0x6e3a4e*/
  v18 = Math::ArcTan2(-0.00009587672516830327); /*0x6e3a57*/
  v10 = Math::ArcTan2(1.570748388432313); /*0x6e3a65*/
  v19 = v17; /*0x6e3a76*/
  *(double *)&v23[1] = v17; /*0x6e3a92*/
  v18 = v10 * v18 * 100.0; /*0x6e3a96*/
  *(double *)v23 = v18; /*0x6e3aa2*/
  *(double *)&v23[2] = Math::SinCos(-0.00009587672516830327) * 100.0; /*0x6e3ac5*/
  v11 = *UIObjectCOM; /*0x6e3ac9*/
  LODWORD(v18) = ((__int16)v5 << 8) + 128; /*0x6e3ae0*/
  HIDWORD(v18) = (SHIWORD(v16) << 8) + 128; /*0x6e3ae4*/
  LODWORD(v19) = 0; /*0x6e3af4*/
  (*(void (__thiscall **)(int *, double *, _QWORD *))(v11 + 496))(UIObjectCOM, &v18, v23); /*0x6e3afc*/
  return 1; /*0x6e3b04*/
}



// ==== 0x006E3B40  TActionClass::executeLightningAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E3B40(int *this, int a2, int a3, int a4, int a5)
{
  if ( !a2 ) /*0x6e3b48*/
    return 0; /*0x6e3b4a*/
  HouseClass::CreateRadarOutage(a2, this->idxArray); /*0x6e3b56*/
  return 1; /*0x6e3b4c*/
}



// ==== 0x006E3B60  ScriptAction::GetActionTypeInfo  this=ScriptAction  sig=csp ====
int __thiscall sub_6E3B60(void *this)
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
int __stdcall TActionClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6e3d76*/
    return -2147467261; /*0x6e3d78*/
  *a2 = 1326367634; /*0x6e3d86*/
  a2[1] = 298977877; /*0x6e3d8e*/
  a2[2] = 1610655660; /*0x6e3d97*/
  a2[3] = -1252326136; /*0x6e3da0*/
  return 0; /*0x6e3d7d*/
}



// ==== 0x006E3DB0  TActionClass::SaveLoad_Prefix  this=TActionClass  sig=csp ====
int __stdcall TActionClass::SaveLoad_Prefix(int *a1, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x6e3dbb*/
  if ( result >= 0 ) /*0x6e3dc2*/
  {
    if ( a1 ) /*0x6e3dc6*/
    {
      AbstractClass::InitVtables(a1, (int)&a2); /*0x6e3dcf*/
      *a1 = (int)&TActionClass::`vftable'; /*0x6e3dd4*/
      a1[1] = (int)&TActionClass::`vftable'; /*0x6e3dda*/
      a1[2] = (int)&TActionClass::`vftable'; /*0x6e3de1*/
      a1[3] = (int)&TActionClass::`vftable'; /*0x6e3de8*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 10); /*0x6e3df8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 12); /*0x6e3e06*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 19); /*0x6e3e14*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 20); /*0x6e3e22*/
    return 0; /*0x6e3e27*/
  }
  return result; /*0x6e3e29*/
}



// ==== 0x006E3E30  TActionClass::SaveLoad_Prefix_0  this=TActionClass  sig=csp ====
int __stdcall TActionClass::SaveLoad_Prefix_0(int *a1, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix(a1, a2, a3); /*0x6e3e3f*/
  if ( result >= 0 ) /*0x6e3e46*/
    return 0; /*0x6e3e48*/
  return result; /*0x6e3e4a*/
}



// ==== 0x006E3E50  TActionClass::Validate  this=TActionClass  sig=csp ====
int __thiscall TActionClass::_vt13(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  AbstractClass::ProcessPower((#378 *)this); /*0x6e3e59*/
  v3 = *(_DWORD *)(this + 40); /*0x6e3e5e*/
  if ( v3 ) /*0x6e3e63*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4); /*0x6e3e6c*/
    Power::TimerProcess(v4); /*0x6e3e72*/
  }
  Power::TimerProcess(*(_DWORD *)(this + 44)); /*0x6e3e7d*/
  v5 = *(_DWORD *)(this + 48); /*0x6e3e82*/
  if ( v5 ) /*0x6e3e87*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x6e3e90*/
    Power::TimerProcess(v6); /*0x6e3e96*/
  }
  v7 = *(_DWORD *)(this + 76); /*0x6e3e9b*/
  if ( v7 ) /*0x6e3ea0*/
  {
    v8 = (*(int (__stdcall **)(int))(*(_DWORD *)(v7 + 4) + 16))(v7 + 4); /*0x6e3ea9*/
    Power::TimerProcess(v8); /*0x6e3eaf*/
  }
  v9 = *(_DWORD *)(this + 80); /*0x6e3eb4*/
  if ( v9 ) /*0x6e3eb9*/
  {
    v10 = (*(int (__stdcall **)(int))(*(_DWORD *)(v9 + 4) + 16))(v9 + 4); /*0x6e3ec2*/
    Power::TimerProcess(v10); /*0x6e3ec8*/
  }
  return Power::TimerProcess(*(_DWORD *)(this + 144)); /*0x6e3edb*/
}



// ==== 0x006E3EE0  TriggerTypeClass::Dispatch  this=TriggerTypeClass  sig=csp ====
int __thiscall sub_6E3EE0(void *this)
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
_DWORD *__thiscall sub_6E3F70(int *this, _DWORD *a2)
{
  _DWORD *WorldCoords; // edx
  _DWORD v4[3]; // [esp+4h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((__int16 *)g_ScenarioClass_Instance, v4, this->objectTypeFlags); /*0x6e3f8b*/
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
  if ( g_BuildingProductionState <= 0 ) /*0x6e409f*/
    return 0; /*0x6e40e3*/
  while ( 1 ) /*0x6e40aa*/
  {
    v5 = *((_DWORD *)g_BuildingClass_InstanceCount + v4); /*0x6e40aa*/
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
    if ( ++v4 >= g_BuildingProductionState ) /*0x6e40e1*/
      return 0; /*0x6e40e1*/
  }
  BuildingClass::UnloadUnits((int *)v5, 0, 0); /*0x6e40f2*/
  return 1; /*0x6e40e3*/
}



// ==== 0x006E4100  TActionClass::executePsychicDominatorAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E4100(unsigned int *this, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // esi

  v5 = this->idxArray; /*0x6e4101*/
  if ( v5 >= 4 || !PlayerClass::HasPlayers((_DWORD *)(3988 * v5 + 8916268)) ) /*0x6e4124*/
    return 0; /*0x6e413e*/
  SidebarClass::SwitchTab((int)&MapClass_Instance, v5); /*0x6e4133*/
  return 1; /*0x6e413a*/
}



// ==== 0x006E4150  TActionClass::executeGeneticMutatorAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E4150(int *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // edi
  const char *v7; // ebx
  char *v8; // ebp

  v5 = -1; /*0x6e415d*/
  v6 = dword_A8EB10 - 1; /*0x6e4160*/
  if ( dword_A8EB10 - 1 >= 0 ) /*0x6e416b*/
  {
    v7 = (const char *)(this + 21); /*0x6e4172*/
    v8 = (char *)dword_A8EB04 + 4 * v6; /*0x6e4175*/
    while ( strcmp((const char *)(*(_DWORD *)v8 + 36), v7) ) /*0x6e41ab*/
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
  if ( v5 >= dword_A8EB10 || v5 < 0 ) /*0x6e41cd*/
    return 0; /*0x6e41f6*/
  TActionClass::executeHarvestAction(&MapClass_Instance, *((_DWORD *)dword_A8EB04 + v5), this->idxArray); /*0x6e41e9*/
  return 1; /*0x6e41c3*/
}



// ==== 0x006E4200  TActionClass::executeForceShieldAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E4200(int *this, int a2, int a3, int a4, int a5)
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
  a2 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v14, this->q011); /*0x6e4233*/
  v7 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2); /*0x6e4237*/
  v8 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v7 + 72))(v7, v16); /*0x6e4245*/
  v15[0] = *v8; /*0x6e424a*/
  v15[1] = v8[1]; /*0x6e4251*/
  v15[2] = v8[2]; /*0x6e425b*/
  IndexByName = BuildingTypeClass::FindIndexByName(this + 21); /*0x6e425f*/
  if ( IndexByName < 0 ) /*0x6e4266*/
    return 0; /*0x6e4266*/
  if ( IndexByName > g_TriggerClassCount ) /*0x6e426e*/
    return 0; /*0x6e426e*/
  v10 = *((_DWORD *)g_TriggerTypeCount + IndexByName); /*0x6e4276*/
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
char __thiscall sub_6E42D0(int *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax

  if ( !a2 ) /*0x6e42d6*/
    return 0; /*0x6e42d6*/
  v5 = this->idxArray; /*0x6e42d8*/
  if ( v5 < 0 ) /*0x6e42e0*/
    return 0; /*0x6e42e0*/
  if ( v5 > *(_DWORD *)(a2 + 612) ) /*0x6e42ec*/
    return 0; /*0x6e42ec*/
  v6 = *(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * v5); /*0x6e42f4*/
  if ( !*(_BYTE *)(v6 + 109) || (unsigned int)this->q012 > 0x64 ) /*0x6e4303*/
    return 0; /*0x6e4317*/
  SuperClass::SetCharge(v6, this->q012); /*0x6e430d*/
  return 1; /*0x6e4314*/
}



// ==== 0x006E4320  TActionClass::executeNukeAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E4320(int *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax

  if ( !a2 ) /*0x6e4326*/
    return 0; /*0x6e4326*/
  v5 = this->idxArray; /*0x6e4328*/
  if ( v5 < 0 || v5 > *(_DWORD *)(a2 + 612) ) /*0x6e433c*/
    return 0; /*0x6e4355*/
  SuperClass::SetRechargeTime(*(_DWORD **)(*(_DWORD *)(a2 + 600) + 4 * v5), this->q012); /*0x6e434b*/
  return 1; /*0x6e4352*/
}



// ==== 0x006E4360  TActionClass::executeSpyPlaneAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E4360(int *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax

  if ( !a2 ) /*0x6e4366*/
    return 0; /*0x6e4366*/
  v5 = this->idxArray; /*0x6e4368*/
  if ( v5 < 0 || v5 > *(_DWORD *)(a2 + 612) ) /*0x6e4378*/
    return 0; /*0x6e438d*/
  SuperClass::ResetRechargeTime(*(_DWORD **)(*(_DWORD *)(a2 + 600) + 4 * v5)); /*0x6e4383*/
  return 1; /*0x6e438a*/
}



// ==== 0x006E43A0  TActionClass::executeChronoSphereAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E43A0(int *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax

  if ( !a2 ) /*0x6e43a6*/
    return 0; /*0x6e43a6*/
  v5 = this->idxArray; /*0x6e43a8*/
  if ( v5 < 0 || v5 > *(_DWORD *)(a2 + 612) ) /*0x6e43b8*/
    return 0; /*0x6e43cd*/
  SuperClass::Reset(*(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * v5)); /*0x6e43c3*/
  return 1; /*0x6e43ca*/
}



// ==== 0x006E43E0  TActionClass::executeWeatherStormAction  this=TActionClass  sig=csp ====
char __thiscall sub_6E43E0(int *this, _DWORD *a2, int a3, int a4, int a5)
{
  _DWORD *v5; // esi
  int v7; // eax

  v5 = a2; /*0x6e43e1*/
  if ( !a2 ) /*0x6e43e7*/
    return 0; /*0x6e43e9*/
  v7 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &a2, this->q011); /*0x6e4403*/
  a2 = (_DWORD *)v7; /*0x6e440c*/
  if ( v7 == dword_B0E680 ) /*0x6e4410*/
    return 0; /*0x6e4420*/
  TActionClass::executeGuardAction(v5, v7); /*0x6e4429*/
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
char __thiscall sub_6E4460(int *this, _DWORD *a2, int a3, int a4, int a5)
{
  _DWORD *v5; // esi
  int v7; // eax

  v5 = a2; /*0x6e4461*/
  if ( !a2 ) /*0x6e4467*/
    return 0; /*0x6e4469*/
  v7 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &a2, this->q011); /*0x6e4483*/
  a2 = (_DWORD *)v7; /*0x6e448c*/
  if ( v7 == dword_B0E680 ) /*0x6e4490*/
    return 0; /*0x6e44a0*/
  TActionClass::executeHuntAction(v5, v7); /*0x6e44a9*/
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
char __thiscall sub_6E44E0(int *this, _DWORD *a2, int a3, int a4, int a5)
{
  _DWORD *v5; // esi
  int v7; // eax

  v5 = a2; /*0x6e44e1*/
  if ( !a2 ) /*0x6e44e7*/
    return 0; /*0x6e44e9*/
  v7 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &a2, this->q011); /*0x6e4503*/
  a2 = (_DWORD *)v7; /*0x6e450c*/
  if ( v7 == dword_B0E680 ) /*0x6e4510*/
    return 0; /*0x6e4520*/
  TActionClass::executeDeployAction(v5, v7); /*0x6e4529*/
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
int TActionClass::_vt12()
{
  return 148; /*0x6e4635*/
}



// ==== 0x006E4640  TActionClass::StubReturn47  this=TActionClass  sig=csp ====
int TActionClass::_vt11()
{
  return 47; /*0x6e4645*/
}



// ==== 0x006E4650  TActionClass::Stub  this=TActionClass  sig=csp ====
int __thiscall TActionClass::_vt16(_DWORD *this)
{
  return this->idxArray; /*0x6e4653*/
}



// ==== 0x006E4660  TActionClass::Destructor  this=TActionClass  sig=csp ====
void **__thiscall TActionClass::Destructor(void **Block, char a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  void **v7; // [esp+8h] [ebp-4h] BYREF

  *Block = &TActionClass::`vftable'; /*0x6e4666*/
  *(Block + 1) = &TActionClass::`vftable'; /*0x6e466c*/
  *(Block + 2) = &TActionClass::`vftable'; /*0x6e4673*/
  *(Block + 3) = &TActionClass::`vftable'; /*0x6e467a*/
  AbstractClass::AnnounceExpiredPointer(Block); /*0x6e4681*/
  v7 = Block; /*0x6e4696*/
  v3 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v7); /*0x6e469a*/
  if ( v3 != -1 && v3 < g_AnimManager && v3 < --g_AnimManager ) /*0x6e46b5*/
  {
    do /*0x6e46cd*/
    {
      ++v3; /*0x6e46bd*/
      *((_DWORD *)g_AnimPoolCount + v3 - 1) = *((_DWORD *)g_AnimPoolCount + v3); /*0x6e46c1*/
    }
    while ( v3 < g_AnimManager ); /*0x6e46cd*/
  }
  v7 = Block; /*0x6e46df*/
  v4 = (*(int (__thiscall **)(int *, void ***))(TActionClass_Array + 16))(&TActionClass_Array, &v7); /*0x6e46e3*/
  if ( v4 != -1 && v4 < g_TActionClassState && v4 < --g_TActionClassState ) /*0x6e46fe*/
  {
    do /*0x6e4716*/
    {
      ++v4; /*0x6e4706*/
      *((_DWORD *)dword_B0F65C + v4 - 1) = *((_DWORD *)dword_B0F65C + v4); /*0x6e470a*/
    }
    while ( v4 < g_TActionClassState ); /*0x6e4716*/
  }
  v7 = Block; /*0x6e4728*/
  v5 = (*(int (__thiscall **)(int *, void ***))(dword_B0E658 + 16))(&dword_B0E658, &v7); /*0x6e472c*/
  if ( v5 != -1 && v5 < dword_B0E668 && v5 < --dword_B0E668 ) /*0x6e4747*/
  {
    do /*0x6e475f*/
    {
      ++v5; /*0x6e474f*/
      *((_DWORD *)dword_B0E65C + v5 - 1) = *((_DWORD *)dword_B0E65C + v5); /*0x6e4753*/
    }
    while ( v5 < dword_B0E668 ); /*0x6e475f*/
  }
  *((_BYTE *)Block + 109) = 0; /*0x6e4763*/
  AbstractClass::DTOR(Block); /*0x6e4767*/
  if ( (a2 & 1) != 0 ) /*0x6e4771*/
    __3_YAXPAX_Z(Block); /*0x6e4774*/
  return Block; /*0x6e477e*/
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



// ==== 0x006E47C0  ScriptAction::CopyStructField  this=ScenarioClass  sig=csp ====
void *__thiscall ScriptAction::CopyStructField(void *this, void *a2, const void *a3)
{
  if ( a3 != this ) /*0x6e47ca*/
    qmemcpy(this, a3, 0x20u); /*0x6e47d3*/
  qmemcpy(a2, this, 0x20u); /*0x6e47e2*/
  return a2; /*0x6e47e4*/
}



// ==== 0x006E47F0  Tactical::ClearBuffer  this=Tactical  sig=csp ====
void __thiscall Tactical_42_::sub_6E47F0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x6e47f6*/
  *(_DWORD *)(this + 16) = 0; /*0x6e47f9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6e4800*/
  {
    __3_YAXPAX_Z(v2); /*0x6e4806*/
    *(_DWORD *)(this + 4) = 0; /*0x6e480e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6e4811*/
  *(_DWORD *)(this + 8) = 0; /*0x6e4814*/
}



// ==== 0x006E4820  Tactical::PointerToIndex  this=Tactical  sig=csp ====
unsigned int __thiscall Tactical_42_::sub_6E4820(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6e4820*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6e4835*/
  else
    return 0; /*0x6e4827*/
}



// ==== 0x006E4840  _VectorClass_PAVTActionClass::UpdateView  this=VectorClass  sig=csp ====
int __thiscall Tactical_42_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x6e484a*/
}



// ==== 0x006E4850  _VectorClass_PAVTActionClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall Tactical_42_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x6e4852*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x6e485d*/
  {
    v3 = 0; /*0x6e485f*/
    if ( v2 <= 0 ) /*0x6e4863*/
      return 1; /*0x6e4883*/
    v4 = (_DWORD *)this->Items; /*0x6e4865*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6e486b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6e4874*/
    {
      ++v3; /*0x6e4876*/
      ++v4; /*0x6e4877*/
      if ( v3 >= v2 ) /*0x6e487c*/
        return 1; /*0x6e487c*/
    }
  }
  return 0; /*0x6e487e*/
}



// ==== 0x006E4890  _VectorClass_PAVTActionClass::Release  this=VectorClass  sig=csp ====
char __thiscall Tactical_42_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x6e489c*/
  {
    this->IsInitialized = 0; /*0x6e48a6*/
    if ( a3 ) /*0x6e48ac*/
      v4 = a3; /*0x6e48c2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6e48be*/
    this->IsInitialized = 1; /*0x6e48c6*/
    if ( v4 ) /*0x6e48ca*/
    {
      if ( this->Items ) /*0x6e48d5*/
      {
        v6 = this->Capacity; /*0x6e48dc*/
        if ( a2 < v6 ) /*0x6e48e1*/
          v6 = a2; /*0x6e48e3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6e48e9*/
          ++i; /*0x6e48ee*/
        if ( this->IsAllocated ) /*0x6e48fb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x6e4906*/
          this->Items = 0; /*0x6e490e*/
        }
      }
      this->Items = v4; /*0x6e4917*/
      this->Capacity = a2; /*0x6e491f*/
      this->IsAllocated = a3 == 0; /*0x6e4922*/
      return 1; /*0x6e4928*/
    }
    else
    {
      return 0; /*0x6e48cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6e4932*/
    return 1; /*0x6e4938*/
  }
}



// ==== 0x006E4940  _VectorClass_PAVTActionClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall Tactical_42_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x6e494d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x6e4953*/
    *(_DWORD *)(this + 4) = 0; /*0x6e495b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6e495e*/
  *(_DWORD *)(this + 8) = 0; /*0x6e4961*/
}



// ==== 0x006E4970  _VectorClass_PAVTActionClass::Init  this=VectorClass  sig=csp ====
int __thiscall Tactical_42_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x6e4970*/
    return 0; /*0x6e4978*/
  v3 = *(_DWORD *)(this + 8); /*0x6e497e*/
  result = 0; /*0x6e4981*/
  if ( v3 <= 0 ) /*0x6e4985*/
    return -1; /*0x6e499c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x6e498b*/
  {
    if ( ++result >= v3 ) /*0x6e499a*/
      return -1; /*0x6e499a*/
  }
  return result; /*0x6e497a*/
}



// ==== 0x006E49B0  _VectorClass_PAVTActionClass::InitMap  this=VectorClass  sig=csp ====
unsigned int __thiscall Tactical_42_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6e49b0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6e49c5*/
  else
    return 0; /*0x6e49b7*/
}



// ==== 0x006E49D0  Tactical::SetCapacity  this=Tactical  sig=csp ====
char __thiscall Tactical_42_::sub_6E49D0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6e49dc*/
  {
    this->vtable4 = 0; /*0x6e49e2*/
    if ( a3 ) /*0x6e49e8*/
      v4 = a3; /*0x6e49fe*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6e49fa*/
    this->vtable4 = 1; /*0x6e4a02*/
    if ( !v4 ) /*0x6e4a06*/
      return 0; /*0x6e4a7a*/
    if ( this->vtable2 ) /*0x6e4a08*/
    {
      v5 = this->vtable3; /*0x6e4a0f*/
      if ( a2 < v5 ) /*0x6e4a14*/
        v5 = a2; /*0x6e4a16*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->vtable2 + 4 * i - 4) ) /*0x6e4a1c*/
        ++i; /*0x6e4a21*/
      if ( this->u32_34 ) /*0x6e4a2e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x6e4a39*/
        this->vtable2 = 0; /*0x6e4a41*/
      }
    }
    this->vtable2 = v4; /*0x6e4a4a*/
    this->vtable3 = a2; /*0x6e4a52*/
    this->u32_34 = a3 == 0; /*0x6e4a55*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->vtable4)(this); /*0x6e4a5e*/
  }
  v7 = this->vtable3; /*0x6e4a61*/
  if ( v7 < this->vtable2 ) /*0x6e4a69*/
    this->vtable2 = v7; /*0x6e4a6b*/
  return 1; /*0x6e4a6e*/
}



// ==== 0x006E4A80  Tactical::FindItem  this=Tactical  sig=csp ====
int __thiscall Tactical_42_::sub_6E4A80(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->vtable2; /*0x6e4a80*/
  result = 0; /*0x6e4a83*/
  if ( v2 <= 0 ) /*0x6e4a88*/
    return -1; /*0x6e4a9f*/
  for ( i = (_DWORD *)this->vtable2; *i != *a2; ++i ) /*0x6e4a8e*/
  {
    if ( ++result >= v2 ) /*0x6e4a9d*/
      return -1; /*0x6e4a9d*/
  }
  return result; /*0x6e4aa2*/
}



// ==== 0x006E4AB0  _VectorClass_PAVTActionClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall Tactical_42_::_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6e4ab3*/
  *Block = &VectorClass<TActionClass *>::`vftable'; /*0x6e4ab6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6e4ac0*/
  {
    __3_YAXPAX_Z(v3); /*0x6e4ac8*/
    *(Block + 1) = 0; /*0x6e4ad0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6e4adb*/
  *(Block + 2) = 0; /*0x6e4ae1*/
  if ( (a2 & 1) != 0 ) /*0x6e4ae8*/
    __3_YAXPAX_Z(Block); /*0x6e4aeb*/
  return Block; /*0x6e4af5*/
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
  if ( g_AnimManager < g_AnimTypePool /*0x6e4ea7*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimTypePool + g_AnimManagerConfig,
         0) )
  {
    v4 = g_AnimManager++; /*0x6e4eb4*/
    *((_DWORD *)g_AnimPoolCount + v4) = this; /*0x6e4ec3*/
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
int __thiscall TagClass::Destructor(void **this)
{
  _DWORD *v2; // ecx
  int v3; // eax
  void ***v4; // ecx
  int v5; // ecx
  _DWORD *v6; // ecx
  int v7; // eax
  void ***v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int OwnerHouseClass; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  _DWORD v22[4]; // [esp+10h] [ebp-10h] BYREF

  *this = &TagClass::`vftable'; /*0x6e4f69*/
  this->vtable2 = &TagClass::`vftable'; /*0x6e4f6f*/
  this->vtable3 = &TagClass::`vftable'; /*0x6e4f76*/
  this->vtable4 = &TagClass::`vftable'; /*0x6e4f7d*/
  AbstractClass::AnnounceExpiredPointer(this); /*0x6e4f84*/
  if ( g_WTFMode ) /*0x6e4f90*/
  {
    if ( g_BounceClassInit ) /*0x6e4f9d*/
    {
      v2 = this->buildingType; /*0x6e4f9f*/
      if ( v2 ) /*0x6e4fa4*/
      {
        if ( (Debug::AccumFlags(v2) & 0x10) != 0 ) /*0x6e4fad*/
        {
          v3 = 0; /*0x6e4fb5*/
          if ( g_ScenarioUpdateState <= 0 ) /*0x6e4fb9*/
          {
LABEL_9:
            v3 = -1; /*0x6e4fcd*/
          }
          else
          {
            v4 = (void ***)dword_8B40CC; /*0x6e4fbb*/
            while ( *v4 != this ) /*0x6e4fc3*/
            {
              ++v3; /*0x6e4fc5*/
              ++v4; /*0x6e4fc6*/
              if ( v3 >= g_ScenarioUpdateState ) /*0x6e4fcb*/
                goto LABEL_9; /*0x6e4fcb*/
            }
          }
          v5 = dword_A83CDC; /*0x6e4fd0*/
          if ( dword_A83CDC >= v3 ) /*0x6e4fd8*/
          {
            --dword_A83CDC; /*0x6e4fdd*/
            if ( v5 - 1 < 0 && !g_ScenarioUpdateState ) /*0x6e4fe6*/
              dword_A83CDC = 0; /*0x6e4fe8*/
          }
        }
      }
    }
    if ( g_WTFMode ) /*0x6e4ff5*/
    {
      if ( g_BounceClassInit ) /*0x6e5002*/
      {
        v6 = this->buildingType; /*0x6e5004*/
        if ( v6 ) /*0x6e5009*/
        {
          if ( (Debug::AccumFlags(v6) & 4) != 0 ) /*0x6e5012*/
          {
            v7 = 0; /*0x6e501a*/
            if ( dword_8B41B8 <= 0 ) /*0x6e501e*/
            {
LABEL_22:
              v7 = -1; /*0x6e5032*/
            }
            else
            {
              v8 = (void ***)dword_8B41AC; /*0x6e5020*/
              while ( *v8 != this ) /*0x6e5028*/
              {
                ++v7; /*0x6e502a*/
                ++v8; /*0x6e502b*/
                if ( v7 >= dword_8B41B8 ) /*0x6e5030*/
                  goto LABEL_22; /*0x6e5030*/
              }
            }
            v9 = dword_A83DBC; /*0x6e5035*/
            if ( dword_A83DBC >= v7 ) /*0x6e503d*/
            {
              --dword_A83DBC; /*0x6e5042*/
              if ( v9 - 1 < 0 && !dword_8B41B8 ) /*0x6e504b*/
                dword_A83DBC = 0; /*0x6e504d*/
            }
          }
        }
      }
      if ( g_WTFMode ) /*0x6e505a*/
      {
        if ( g_BounceClassInit ) /*0x6e5063*/
        {
          v10 = (int)this->firstTrigger; /*0x6e5065*/
          if ( v10 ) /*0x6e506a*/
          {
            v11 = *(_DWORD *)(v10 + 36); /*0x6e506c*/
            if ( v11 ) /*0x6e5071*/
            {
              if ( *(_DWORD *)(v11 + 164) && (unsigned __int8)TagClass::HasValidHouse(this->buildingType) ) /*0x6e5080*/
              {
                OwnerHouseClass = HouseClass::FindOwner(*(void **)(*(_DWORD *)(*((_DWORD *)this->firstTrigger + 9) + 164) + 184)); /*0x6e509b*/
                v13 = *(_DWORD *)(OwnerHouseClass + 636); /*0x6e50a0*/
                if ( v13 ) /*0x6e50a8*/
                  *(_DWORD *)(OwnerHouseClass + 636) = v13 - 1; /*0x6e50ab*/
                v14 = (_DWORD *)(OwnerHouseClass + 664); /*0x6e50b7*/
                *v14 = g_CurrentFrame; /*0x6e50c1*/
                v14[1] = v22[2]; /*0x6e50c7*/
                v14[2] = 60; /*0x6e50ca*/
              }
            }
          }
        }
      }
    }
  }
  v15 = (int)this->firstTrigger; /*0x6e50cd*/
  if ( v15 ) /*0x6e50d2*/
  {
    v16 = dword_B0F6A0; /*0x6e50d4*/
    do /*0x6e50d9*/
    {
      if ( g_LaserDrawConfig < v16 ) /*0x6e50df*/
        goto LABEL_43; /*0x6e50df*/
      if ( !byte_B0F6A5 && v16 || dword_B0F6AC <= 0 ) /*0x6e50f7*/
        goto LABEL_45; /*0x6e50f7*/
      if ( (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_DiskLaserManager + 8))( /*0x6e5109*/
             &g_DiskLaserManager,
             v16 + dword_B0F6AC,
             0) )
      {
LABEL_43:
        v17 = g_LaserDrawConfig++; /*0x6e5116*/
        *((_DWORD *)dword_B0F69C + v17) = v15; /*0x6e5125*/
      }
      v16 = dword_B0F6A0; /*0x6e5128*/
LABEL_45:
      v15 = *(_DWORD *)(v15 + 40); /*0x6e512d*/
    }
    while ( v15 ); /*0x6e50d9*/
  }
  v22[0] = this; /*0x6e5134*/
  v18 = (*(int (__thiscall **)(int *, _DWORD *))(g_AnimPoolManager + 16))(&g_AnimPoolManager, v22); /*0x6e5147*/
  if ( v18 != -1 && v18 < g_AnimManager && v18 < --g_AnimManager ) /*0x6e5162*/
  {
    do /*0x6e517a*/
    {
      ++v18; /*0x6e516a*/
      *((_DWORD *)g_AnimPoolCount + v18 - 1) = *((_DWORD *)g_AnimPoolCount + v18); /*0x6e516e*/
    }
    while ( v18 < g_AnimManager ); /*0x6e517a*/
  }
  v22[0] = this; /*0x6e518c*/
  v19 = (*(int (__thiscall **)(int *, _DWORD *))(dword_B0F708 + 16))(&dword_B0F708, v22); /*0x6e5190*/
  if ( v19 != -1 && v19 < dword_B0F718 && v19 < --dword_B0F718 ) /*0x6e51ab*/
  {
    do /*0x6e51c3*/
    {
      ++v19; /*0x6e51b3*/
      *((_DWORD *)dword_B0F70C + v19 - 1) = *((_DWORD *)dword_B0F70C + v19); /*0x6e51b7*/
    }
    while ( v19 < dword_B0F718 ); /*0x6e51c3*/
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
  AbstractClass::AnnounceExpiredPointer(this); /*0x6e5212*/
  return AbstractClass::DTOR(this); /*0x6e521e*/
}



// ==== 0x006E5230  TagClass::Destroy  this=TagClass  sig=csp ====
int __thiscall TagClass::Destroy(_BYTE *this)
{
  int result; // eax

  this->destroyed = 1; /*0x6e5233*/
  result = dword_B0F6A0; /*0x6e5237*/
  if ( g_LaserDrawConfig < dword_B0F6A0 /*0x6e5270*/
    || (byte_B0F6A5 || !dword_B0F6A0)
    && dword_B0F6AC > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_DiskLaserManager + 8))(
                   &g_DiskLaserManager,
                   dword_B0F6A0 + dword_B0F6AC,
                   0),
        (_BYTE)result) )
  {
    result = g_LaserDrawConfig++; /*0x6e5278*/
    *((_DWORD *)dword_B0F69C + result) = this; /*0x6e5287*/
  }
  return result; /*0x6e528a*/
}



// ==== 0x006E5290  ObjectClass::method_6E5290  this=ObjectClass  sig=csp ====
char __thiscall sub_6E5290(_BYTE *this)
{
  return this->attachedTag; /*0x6e5293*/
}



// ==== 0x006E52A0  TeamClass::FindOrCreate  this=TeamClass  sig=csp ====
int __thiscall TeamClass_FindOrCreate(void *this)
{
  int v2; // ecx
  char *v3; // edx
  int result; // eax

  v2 = 0; /*0x6e52aa*/
  if ( g_GameObjectCleanup <= 0 ) /*0x6e52ae*/
  {
LABEL_5:
    if ( __2_YAPAXI_Z(0x38u) ) /*0x6e52c7*/
      return TeknoClass::GetType(this); /*0x6e52d6*/
    else
      return 0; /*0x6e52de*/
  }
  else
  {
    v3 = (char *)g_TagClassCount; /*0x6e52b0*/
    while ( 1 ) /*0x6e52b6*/
    {
      result = *(_DWORD *)v3; /*0x6e52b6*/
      if ( *(void **)(*(_DWORD *)v3 + 36) == this ) /*0x6e52bb*/
        break; /*0x6e52bb*/
      ++v2; /*0x6e52bd*/
      v3 += 4; /*0x6e52be*/
      if ( v2 >= g_GameObjectCleanup ) /*0x6e52c3*/
        goto LABEL_5; /*0x6e52c3*/
    }
  }
  return result; /*0x6e52db*/
}



// ==== 0x006E52F0  FootClass::processScriptAction  this=TagClass  sig=csp ====
_DWORD *__thiscall sub_6E52F0(_DWORD *this, _DWORD *a2)
{
  *a2 = this->defaultCoords; /*0x6e52f7*/
  return a2; /*0x6e52f9*/
}



// ==== 0x006E5300  TagClass::HasCrossesVerticalLineEvent  this=TagClass  sig=csp ====
BOOL __thiscall TagClass::HasCrossesVerticalLineEvent(_DWORD *this)
{
  _DWORD *v1; // ecx

  v1 = (_DWORD *)this->buildingType; /*0x6e5300*/
  return v1 && TagTypeClass::HasCrossesVerticalLineEvent(v1); /*0x6e5315*/
}



// ==== 0x006E5320  TagClass::HasCrossesHorizontalLineEvent  this=TagClass  sig=csp ====
BOOL __thiscall TagClass::HasCrossesHorizontalLineEvent(_DWORD *this)
{
  _DWORD *v1; // ecx

  v1 = (_DWORD *)this->buildingType; /*0x6e5320*/
  return v1 && TagTypeClass::HasCrossesHorizontalLineEvent(v1); /*0x6e5335*/
}



// ==== 0x006E5340  TagClass::HasZoneEntryByEvent  this=TagClass  sig=csp ====
BOOL __thiscall TagClass::HasZoneEntryByEvent(_DWORD *this)
{
  _DWORD *v1; // ecx

  v1 = (_DWORD *)this->buildingType; /*0x6e5340*/
  return v1 && TagTypeClass::HasZoneEntryByEvent(v1); /*0x6e5355*/
}



// ==== 0x006E5380  LinkedList::Contains  this=LinkedList  sig=csp ====
char __thiscall LinkedList_Contains(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = this->q028; /*0x6e5380*/
  if ( !v2 ) /*0x6e5385*/
    return 0; /*0x6e5396*/
  while ( v2 != a2 ) /*0x6e538d*/
  {
    v2 = *(_DWORD *)(v2 + 40); /*0x6e538f*/
    if ( !v2 ) /*0x6e5394*/
      return 0; /*0x6e5394*/
  }
  return 1; /*0x6e5398*/
}



// ==== 0x006E53A0  TeamClass::Update_0  this=TagClass  sig=csp ====
char __thiscall TeamClass_Update(void **this, int a2, int a3, int a4, char a5, int a6)
{
  char v6; // bl
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char v13; // [esp+Ah] [ebp-2h]
  char v14; // [esp+Bh] [ebp-1h]

  v6 = 0; /*0x6e53a7*/
  v14 = 0; /*0x6e53ae*/
  v13 = 0; /*0x6e53b2*/
  if ( g_ArmageddonMode || this->isExecuting || this->destroyed || !this->buildingType ) /*0x6e53d2*/
    return 0; /*0x6e5552*/
  v8 = (int)this->firstTrigger; /*0x6e53de*/
  for ( this->isExecuting = 1; v8; v8 = *(_DWORD *)(v8 + 40) ) /*0x6e53ec*/
  {
    if ( (unsigned __int8)TriggerClass::RegisterEvent(a2, a3, a5, *((_DWORD *)this->buildingType + 39) == 2, a6) ) /*0x6e5414*/
    {
      v9 = *((_DWORD *)this->buildingType + 39); /*0x6e5420*/
      if ( !v9 ) /*0x6e5429*/
      {
        BuildingClass::ExecuteTriggers(a3, a4); /*0x6e546d*/
        TeamClass::AddToBuildQueue(v8); /*0x6e5474*/
        v6 = 1; /*0x6e5479*/
        v14 = 1; /*0x6e547b*/
LABEL_14:
        v13 = 1; /*0x6e547f*/
        continue; /*0x6e547f*/
      }
      v10 = v9 - 1; /*0x6e542b*/
      if ( v10 ) /*0x6e542c*/
      {
        if ( v10 == 1 ) /*0x6e542f*/
        {
          BuildingClass::ExecuteTriggers(a3, a4); /*0x6e5439*/
          v6 = 1; /*0x6e543e*/
        }
        continue; /*0x6e5440*/
      }
      if ( this->instanceCount != (void *)1 ) /*0x6e5446*/
        goto LABEL_14; /*0x6e5446*/
      BuildingClass::ExecuteTriggers(a3, a4); /*0x6e5450*/
      TeamClass::AddToBuildQueue(v8); /*0x6e5457*/
      v14 = 1; /*0x6e545c*/
      v6 = 1; /*0x6e5461*/
    }
  }
  this->isExecuting = 0; /*0x6e548f*/
  if ( v13 ) /*0x6e5499*/
  {
    if ( a3 && *(void ***)(a3 + 52) == this ) /*0x6e54a2*/
      ObjectClass::SetReference(0); /*0x6e54a8*/
    if ( a4 != dword_B0E700 ) /*0x6e54b9*/
    {
      CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4); /*0x6e54d5*/
      ObjectClass::SetTriggerTarget(0); /*0x6e54dc*/
    }
  }
  if ( v14 ) /*0x6e54e9*/
  {
    AbstractClass::AnnounceExpiredPointer(this); /*0x6e54ef*/
    if ( g_LaserDrawConfig < dword_B0F6A0 /*0x6e552a*/
      || (byte_B0F6A5 || !dword_B0F6A0)
      && dword_B0F6AC > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_DiskLaserManager + 8))(
           &g_DiskLaserManager,
           dword_B0F6A0 + dword_B0F6AC,
           0) )
    {
      v11 = g_LaserDrawConfig++; /*0x6e5537*/
      *((_DWORD *)dword_B0F69C + v11) = this; /*0x6e5546*/
    }
  }
  return v6; /*0x6e554b*/
}



// ==== 0x006E5560  ScenarioClass::checkMissionObjectives  this=SpeedType  sig=csp ====
int __thiscall sub_6E5560(_DWORD *this, int a2)
{
  *(this + 12) = a2; /*0x6e5564*/
  return a2; /*0x6e5567*/
}



// ==== 0x006E5570  ObjectClass::Map_Reset_6E5570  this=ObjectClass  sig=csp ====
int sub_6E5570()
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
int __thiscall TagClass::_vt10(int this, int a2, int a3)
{
  int v4; // eax
  int result; // eax

  if ( *(_DWORD *)(this + 36) == a2 ) /*0x6e561a*/
    *(_DWORD *)(this + 36) = 0; /*0x6e561c*/
  v4 = *(_DWORD *)(this + 40); /*0x6e5623*/
  if ( v4 == a2 ) /*0x6e5628*/
    *(_DWORD *)(this + 40) = *(_DWORD *)(v4 + 40); /*0x6e562d*/
  result = *(_DWORD *)(this + 36); /*0x6e5630*/
  if ( !result ) /*0x6e5635*/
  {
    *(_BYTE *)(this + 52) = 1; /*0x6e5637*/
    result = dword_B0F6A0; /*0x6e563b*/
    if ( g_LaserDrawConfig < dword_B0F6A0 /*0x6e5675*/
      || (byte_B0F6A5 || !dword_B0F6A0)
      && dword_B0F6AC > 0
      && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_DiskLaserManager + 8))(
                     &g_DiskLaserManager,
                     dword_B0F6A0 + dword_B0F6AC,
                     0),
          (_BYTE)result) )
    {
      result = g_LaserDrawConfig++; /*0x6e567d*/
      *((_DWORD *)dword_B0F69C + result) = this; /*0x6e568c*/
    }
  }
  return result; /*0x6e568f*/
}



// ==== 0x006E56A0  TagClass::ddtor  this=TagClass  sig=csp ====
int __stdcall TagClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6e56a6*/
    return -2147467261; /*0x6e56a8*/
  *a2 = 1425466418; /*0x6e56b6*/
  a2[1] = 298977773; /*0x6e56be*/
  a2[2] = 1610655148; /*0x6e56c7*/
  a2[3] = -1252326136; /*0x6e56d0*/
  return 0; /*0x6e56ad*/
}



// ==== 0x006E56E0  TagClass::ProcessTag  this=TagClass  sig=csp ====
int __thiscall TagClass::_vt13(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  AbstractClass::ProcessPower((#378 *)this); /*0x6e56e9*/
  v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 36) + 4) + 16))(*(_DWORD *)(this + 36) + 4); /*0x6e56f7*/
  Power::TimerProcess(v3); /*0x6e56fd*/
  v4 = *(_DWORD *)(this + 40); /*0x6e5702*/
  if ( v4 ) /*0x6e5707*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(v4 + 4) + 16))(v4 + 4); /*0x6e5710*/
    v4 = Power::TimerProcess(v5); /*0x6e5716*/
  }
  LOBYTE(v4) = *(_BYTE *)(this + 52); /*0x6e571b*/
  return Power::FlagProcess(a2, v4); /*0x6e5726*/
}



// ==== 0x006E5730  TagClass::LoadTag  this=TagClass  sig=csp ====
int __stdcall TagClass::_vt05(_DWORD *a1, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x6e573b*/
  if ( result >= 0 ) /*0x6e5742*/
  {
    if ( a1 ) /*0x6e5746*/
    {
      AbstractClass::InitVtables(a1, (int)&a2); /*0x6e574f*/
      *a1 = &TagClass::`vftable'; /*0x6e5754*/
      a1[1] = &TagClass::`vftable'; /*0x6e575a*/
      a1[2] = &TagClass::`vftable'; /*0x6e5761*/
      a1[3] = &TagClass::`vftable'; /*0x6e5768*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 9); /*0x6e5778*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 10); /*0x6e5786*/
    return 0; /*0x6e578b*/
  }
  return result; /*0x6e578d*/
}



// ==== 0x006E57A0  TagClass::SaveTag  this=TagClass  sig=csp ====
int __stdcall TagClass::_vt06(int *a1, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix(a1, a2, a3); /*0x6e57af*/
  if ( result >= 0 ) /*0x6e57b6*/
    return 0; /*0x6e57b8*/
  return result; /*0x6e57ba*/
}



// ==== 0x006E57C0  TechnoClass::HasAnyMission  this=TagClass  sig=csp ====
bool __thiscall TechnoClass_HasAnyMission(_DWORD *this)
{
  int v1; // eax
  std::codecvt_base *v2; // ecx

  v1 = this->firstTrigger; /*0x6e57c0*/
  if ( !v1 ) /*0x6e57c5*/
    return 0; /*0x6e57db*/
  while ( 1 ) /*0x6e57c7*/
  {
    v2 = *(std::codecvt_base **)(v1 + 36); /*0x6e57c7*/
    if ( *((_BYTE *)v2 + 160) ) /*0x6e57ca*/
      break; /*0x6e57ca*/
    v1 = *(_DWORD *)(v1 + 40); /*0x6e57d4*/
    if ( !v1 ) /*0x6e57d9*/
      return 0; /*0x6e57d9*/
  }
  return _do_always_noconv_codecvt_base_std__MBE_NXZ_18(v2); /*0x6e57dd*/
}



// ==== 0x006E57DE  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_18  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_18(std::codecvt_base *this)
{
  return 1; /*0x6e57e0*/
}



// ==== 0x006E57F0  HouseClass::UpdateAllTypes  this=HouseClass  sig=csp ====
int __thiscall HouseClass_UpdateAllTypes(void *this)
{
  int result; // eax
  int i; // esi

  result = g_GameObjectCleanup; /*0x6e57f0*/
  for ( i = 0; i < g_GameObjectCleanup; ++i ) /*0x6e57fd*/
  {
    TriggerClass::NotifyGlobalChanged(this); /*0x6e580b*/
    result = g_GameObjectCleanup; /*0x6e5810*/
  }
  return result; /*0x6e581a*/
}



// ==== 0x006E5820  TriggerActionQueue::ProcessAll  this=TriggerActionQueue  sig=csp ====
int __thiscall TriggerActionQueue::ProcessAll(void *this)
{
  int result; // eax
  int i; // esi

  result = g_GameObjectCleanup; /*0x6e5820*/
  for ( i = 0; i < g_GameObjectCleanup; ++i ) /*0x6e582d*/
  {
    TriggerClass::NotifyLocalChanged(this); /*0x6e583b*/
    result = g_GameObjectCleanup; /*0x6e5840*/
  }
  return result; /*0x6e584a*/
}



// ==== 0x006E5850  TagClass::IsOnlyInstanceOfType  this=TagClass  sig=csp ====
char __thiscall TagClass::IsOnlyInstanceOfType(_DWORD *this)
{
  int v1; // edx
  char *i; // esi

  v1 = 0; /*0x6e5859*/
  if ( g_GameObjectCleanup <= 0 ) /*0x6e585d*/
    return 1; /*0x6e587d*/
  for ( i = (char *)g_TagClassCount; *(_DWORD **)i == this || *(_DWORD *)(*(_DWORD *)i + 36) != this->buildingType; i += 4 ) /*0x6e585f*/
  {
    if ( ++v1 >= g_GameObjectCleanup ) /*0x6e587b*/
      return 1; /*0x6e587b*/
  }
  return 0; /*0x6e587d*/
}



// ==== 0x006E5890  TagClass::StubReturn56  this=TagClass  sig=csp ====
int TagClass::_vt12()
{
  return 56; /*0x6e5895*/
}



// ==== 0x006E58A0  TagClass::StubReturn44  this=TagClass  sig=csp ====
int TagClass::_vt11()
{
  return 44; /*0x6e58a5*/
}



// ==== 0x006E58B0  TagClass::ProcessTrigger  this=TagClass  sig=csp ====
void **__thiscall TagClass::_vt08(void **Block, char a2)
{
  TagClass::Destructor(Block); /*0x6e58b3*/
  if ( (a2 & 1) != 0 ) /*0x6e58bd*/
    __3_YAXPAX_Z(Block); /*0x6e58c0*/
  return Block; /*0x6e58ca*/
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
  this->q026 = -1; /*0x6e5b78*/
  this->q09C = 0; /*0x6e5b82*/
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
  this->q026 = g_MultiplayerCleanup; /*0x6e5be6*/
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
  if ( g_AnimManager < g_AnimTypePool /*0x6e5c71*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimTypePool + g_AnimManagerConfig,
         0) )
  {
    v4 = g_AnimManager++; /*0x6e5c7e*/
    *((_DWORD *)g_AnimPoolCount + v4) = this; /*0x6e5c8d*/
  }
  return this; /*0x6e5c92*/
}



// ==== 0x006E5CA0  TagTypeClass::CleanupMembers  this=TagTypeClass  sig=csp ====
int __thiscall sub_6E5CA0(int this)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // esi
  int v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // eax
  int v10; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)this = &TagTypeClass::`vftable'; /*0x6e5ca7*/
  *(_DWORD *)(this + 4) = &TagTypeClass::`vftable'; /*0x6e5cad*/
  *(_DWORD *)(this + 8) = &TagTypeClass::`vftable'; /*0x6e5cb4*/
  *(_DWORD *)(this + 12) = &TagTypeClass::`vftable'; /*0x6e5cbb*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x6e5cc2*/
  v2 = *(_DWORD **)(this + 160); /*0x6e5cc7*/
  *(_DWORD *)(this + 160) = 0; /*0x6e5ccd*/
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
      if ( v6[9] == this ) /*0x6e5d12*/
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
  v7 = (*(int (__thiscall **)(int *, int *))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v10); /*0x6e5d44*/
  if ( v7 != -1 && v7 < g_AnimManager && v7 < --g_AnimManager ) /*0x6e5d5f*/
  {
    do /*0x6e5d77*/
    {
      ++v7; /*0x6e5d67*/
      *((_DWORD *)g_AnimPoolCount + v7 - 1) = *((_DWORD *)g_AnimPoolCount + v7); /*0x6e5d6b*/
    }
    while ( v7 < g_AnimManager ); /*0x6e5d77*/
  }
  v10 = this; /*0x6e5d89*/
  v8 = (*(int (__thiscall **)(int *, int *))(dword_B0E780 + 16))(&dword_B0E780, &v10); /*0x6e5d8d*/
  if ( v8 != -1 && v8 < g_MultiplayerCleanup && v8 < --g_MultiplayerCleanup ) /*0x6e5da8*/
  {
    do /*0x6e5dc0*/
    {
      ++v8; /*0x6e5db0*/
      *((_DWORD *)dword_B0E784 + v8 - 1) = *((_DWORD *)dword_B0E784 + v8); /*0x6e5db4*/
    }
    while ( v8 < g_MultiplayerCleanup ); /*0x6e5dc0*/
  }
  return AbstractTypeClass::Dtor((_DWORD *)this); /*0x6e5dc9*/
}



// ==== 0x006E5E50  TagTypeClass::GetEvent  this=TagTypeClass  sig=csp ====
int __thiscall TagTypeClass::_vt10(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = this->u32_A0; /*0x6e5e50*/
  if ( result == a2 ) /*0x6e5e5c*/
  {
    result = *(_DWORD *)(result + 168); /*0x6e5e5e*/
    this->u32_A0 = result; /*0x6e5e64*/
  }
  return result; /*0x6e5e6a*/
}



// ==== 0x006E5E70  ObjectTypeClass::FindByName  this=Coord  sig=csp ====
int __thiscall ObjectTypeClass_FindByName(void *this)
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
    if ( !_strcmpi((const void *)(v3 + 36), this) || !_strcmpi((const void *)(v3 + 100), this) ) /*0x6e5ea2*/
      break; /*0x6e5ea2*/
    if ( ++v2 >= g_MultiplayerCleanup ) /*0x6e5eb6*/
      return 0; /*0x6e5eb6*/
  }
  return v3; /*0x6e5eb8*/
}



// ==== 0x006E5ED0  CCINIClass::ProcessSection  this=IUnknown  sig=csp ====
int __thiscall sub_6E5ED0(char *this)
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

  result = INIClass::GetKeyCount(this, (unsigned __int8 *)aTags); /*0x6e5ede*/
  v3 = result; /*0x6e5ee3*/
  v4 = 0; /*0x6e5ee5*/
  v10 = result; /*0x6e5ee9*/
  if ( result > 0 ) /*0x6e5eed*/
  {
    while ( 1 ) /*0x6e5f07*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this, (unsigned __int8 *)aTags, v4); /*0x6e5f07*/
      result = INIClass::GetString( /*0x6e5f1a*/
                 (unsigned __int8 ***)this,
                 (unsigned __int8 *)aTags,
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
    if ( !_strcmpi(g_Str__none_, StringByIndex) || !_strcmpi(g_Str_none, StringByIndex) ) /*0x6e5f3f*/
      goto LABEL_11; /*0x6e5f3f*/
    v6 = 0; /*0x6e5f50*/
    if ( g_MultiplayerCleanup > 0 ) /*0x6e5f54*/
    {
      while ( _strcmpi((const void *)(*((_DWORD *)dword_B0E784 + v6) + 36), StringByIndex) ) /*0x6e5f6e*/
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
    result = (*(int (__thiscall **)(char *, char *))(*(_DWORD *)v8 + 100))(v8, this); /*0x6e5fbb*/
    v3 = v10; /*0x6e5fbe*/
    goto LABEL_13; /*0x6e5fbe*/
  }
  return result; /*0x6e5fcc*/
}



// ==== 0x006E5FE0  ObjectClass::SaveTriggerTagsToINI  this=ObjectClass  sig=csp ====
int __thiscall SaveTriggerTagsToINI(char *this)
{
  int KeyCount; // ebx
  int i; // edi
  unsigned __int8 *StringByIndex; // eax
  int result; // eax
  int j; // edi
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF

  KeyCount = INIClass::GetKeyCount(this, (unsigned __int8 *)aTags); /*0x6e5ff3*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6e5ff9*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this, (unsigned __int8 *)aTags, i); /*0x6e6005*/
    INIClass::GetString( /*0x6e601f*/
      (unsigned __int8 ***)this,
      (unsigned __int8 *)aTags,
      StringByIndex,
      &g_INI_DefaultBuffer,
      Destination,
      32);
    INIClass::ClearSection((int)this, (int)Destination, 0); /*0x6e602d*/
  }
  INIClass::ClearSection((int)this, (int)aTags, 0); /*0x6e6042*/
  result = g_MultiplayerCleanup; /*0x6e6047*/
  for ( j = 0; j < g_MultiplayerCleanup; ++j ) /*0x6e6050*/
  {
    (*(void (__thiscall **)(_DWORD, char *))(**((_DWORD **)dword_B0E784 + j) + 104))( /*0x6e605d*/
      *((_DWORD *)dword_B0E784 + j),
      this);
    result = g_MultiplayerCleanup; /*0x6e6060*/
  }
  return result; /*0x6e606a*/
}



// ==== 0x006E6080  TagTypeClass::GetAction  this=TagTypeClass  sig=csp ====
char __thiscall TagTypeClass::_vt25(int this, unsigned __int8 ***a2)
{
  char *v3; // eax
  char *v4; // eax
  char Destination[48]; // [esp+8h] [ebp-B4h] BYREF
  char v7; // [esp+38h] [ebp-84h]
  char String[128]; // [esp+3Ch] [ebp-80h] BYREF

  INIClass::ResetSection(a2); /*0x6e6093*/
  if ( !INIClass::GetString( /*0x6e60b4*/
          a2,
          (unsigned __int8 *)aTags,
          (unsigned __int8 *)(this + 36),
          &g_INI_DefaultBuffer,
          String,
          128) )
    return 0; /*0x6e6151*/
  strtok(String, Delimiter); /*0x6e60cb*/
  *(_DWORD *)(this + 156) = atoi(String); /*0x6e60e1*/
  v3 = strtok(0, Delimiter); /*0x6e60e7*/
  if ( v3 ) /*0x6e60f1*/
  {
    strncpy(Destination, v3, 0x30u); /*0x6e6101*/
    v7 = 0; /*0x6e6109*/
  }
  else
  {
    Destination[0] = 0; /*0x6e60f3*/
  }
  if ( Destination != (char *)(this + 100) ) /*0x6e6118*/
  {
    qmemcpy((void *)(this + 100), Destination, 0x30u); /*0x6e6123*/
    *(_BYTE *)(this + 148) = v7; /*0x6e6125*/
  }
  v4 = strtok(0, Delimiter); /*0x6e612d*/
  *(_DWORD *)(this + 160) = TagTypeClass::FindOrCreateTriggerType(v4); /*0x6e613d*/
  return 1; /*0x6e6143*/
}



// ==== 0x006E6160  TagTypeClass::GetParameter  this=TagTypeClass  sig=csp ====
char __thiscall TagTypeClass::_vt26(int this, char *a2)
{
  int v3; // eax
  CHAR Source[128]; // [esp+4h] [ebp-80h] BYREF

  v3 = *(_DWORD *)(this + 160); /*0x6e6169*/
  if ( v3 ) /*0x6e6171*/
    wsprintfA(Source, "%d,%s,%s", *(_DWORD *)(this + 156), (const char *)(this + 100), (const char *)(v3 + 36)); /*0x6e61b4*/
  else
    wsprintfA(Source, "%s,<none>", (const char *)(this + 100)); /*0x6e6181*/
  INIClass::SetString(a2, (unsigned __int8 *)aTags, (char *)(this + 36), Source); /*0x6e6199*/
  return 1; /*0x6e61db*/
}



// ==== 0x006E61F0  Debug::AccumFlags  this=TagTypeClass  sig=csp ====
int __thiscall Debug_AccumFlags(_DWORD *this)
{
  int v1; // esi
  int i; // edi
  int v3; // eax

  v1 = this->u32_A0; /*0x6e61f1*/
  for ( i = 0; v1; i |= v3 ) /*0x6e61fc*/
  {
    v3 = TriggerTypeClass::GetFlags(v1); /*0x6e6200*/
    v1 = *(_DWORD *)(v1 + 168); /*0x6e6205*/
  }
  return i; /*0x6e6213*/
}



// ==== 0x006E6220  TagClass::HasValidHouse  this=TagTypeClass  sig=csp ====
char __thiscall TagClass::HasValidHouse(_DWORD *this)
{
  _DWORD *v1; // esi

  v1 = (_DWORD *)this->u32_A0; /*0x6e6221*/
  if ( !v1 ) /*0x6e6229*/
    return 0; /*0x6e6240*/
  while ( !HouseClass::FindType15(v1) ) /*0x6e6234*/
  {
    v1 = (_DWORD *)v1[42]; /*0x6e6236*/
    if ( !v1 ) /*0x6e623e*/
      return 0; /*0x6e623e*/
  }
  return 1; /*0x6e6242*/
}



// ==== 0x006E6250  TagTypeClass::HasCrossesHorizontalLineEvent  this=TagTypeClass  sig=csp ====
char __thiscall TagTypeClass::HasCrossesHorizontalLineEvent(_DWORD *this)
{
  _DWORD *v1; // esi

  v1 = (_DWORD *)this->u32_A0; /*0x6e6251*/
  if ( !v1 ) /*0x6e6259*/
    return 0; /*0x6e6270*/
  while ( !HouseClass::HasType25Building(v1) ) /*0x6e6264*/
  {
    v1 = (_DWORD *)v1[42]; /*0x6e6266*/
    if ( !v1 ) /*0x6e626e*/
      return 0; /*0x6e626e*/
  }
  return 1; /*0x6e6272*/
}



// ==== 0x006E6280  TagTypeClass::HasCrossesVerticalLineEvent  this=TagTypeClass  sig=csp ====
char __thiscall TagTypeClass::HasCrossesVerticalLineEvent(_DWORD *this)
{
  _DWORD *v1; // esi

  v1 = (_DWORD *)this->u32_A0; /*0x6e6281*/
  if ( !v1 ) /*0x6e6289*/
    return 0; /*0x6e62a0*/
  while ( !HouseClass::HasType26Building(v1) ) /*0x6e6294*/
  {
    v1 = (_DWORD *)v1[42]; /*0x6e6296*/
    if ( !v1 ) /*0x6e629e*/
      return 0; /*0x6e629e*/
  }
  return 1; /*0x6e62a2*/
}



// ==== 0x006E62B0  TagTypeClass::HasZoneEntryByEvent  this=TagTypeClass  sig=csp ====
char __thiscall TagTypeClass::HasZoneEntryByEvent(_DWORD *this)
{
  int v1; // esi

  v1 = this->u32_A0; /*0x6e62b1*/
  if ( !v1 ) /*0x6e62b9*/
    return 0; /*0x6e62d0*/
  while ( !HouseClass::FindType24((std::codecvt_base **)v1) ) /*0x6e62c4*/
  {
    v1 = *(_DWORD *)(v1 + 168); /*0x6e62c6*/
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
int __stdcall TagTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6e63a6*/
    return -2147467261; /*0x6e63a8*/
  *a2 = 1425466419; /*0x6e63b6*/
  a2[1] = 298977773; /*0x6e63be*/
  a2[2] = 1610655148; /*0x6e63c7*/
  a2[3] = -1252326136; /*0x6e63d0*/
  return 0; /*0x6e63ad*/
}



// ==== 0x006E63E0  TagTypeClass::PowerDrainUpdate  this=TagTypeClass  sig=csp ====
int __thiscall TagTypeClass::_vt13(int this, int *a2)
{
  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6e63e9*/
  return Power::TimerProcess(*(_DWORD *)(this + 156)); /*0x6e63fc*/
}



// ==== 0x006E6410  TagTypeClass::LoadTypeData  this=TagTypeClass  sig=csp ====
int __stdcall TagTypeClass::_vt05(_DWORD *a1, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x6e641b*/
  if ( result >= 0 ) /*0x6e6422*/
  {
    if ( a1 ) /*0x6e6426*/
    {
      AbstractTypeClass::Init((int)a1, (int)&a2); /*0x6e642f*/
      *a1 = &TagTypeClass::`vftable'; /*0x6e6434*/
      a1[1] = &TagTypeClass::`vftable'; /*0x6e643a*/
      a1[2] = &TagTypeClass::`vftable'; /*0x6e6441*/
      a1[3] = &TagTypeClass::`vftable'; /*0x6e6448*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 40); /*0x6e645b*/
    return 0; /*0x6e6460*/
  }
  return result; /*0x6e6462*/
}



// ==== 0x006E6470  TagTypeClass::SaveToINI  this=TagTypeClass  sig=csp ====
int __stdcall TagTypeClass::_vt06(int *a1, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix(a1, a2, a3); /*0x6e647f*/
  if ( result >= 0 ) /*0x6e6486*/
    return 0; /*0x6e6488*/
  return result; /*0x6e648a*/
}



// ==== 0x006E6490  TagTypeClass::GetTypeIdentifier  this=TagTypeClass  sig=csp ====
int TagTypeClass::_vt11()
{
  return 45; /*0x6e6495*/
}



// ==== 0x006E64A0  TagTypeClass::GetObjectSize  this=TagTypeClass  sig=csp ====
int TagTypeClass::_vt12()
{
  return 164; /*0x6e64a5*/
}



// ==== 0x006E64B0  TagTypeClass::GetAuxField  this=TagTypeClass  sig=csp ====
int __thiscall TagTypeClass::_vt16(_DWORD *this)
{
  return this->q098; /*0x6e64b6*/
}



// ==== 0x006E64C0  TagTypeClass::ddtor  this=TagTypeClass  sig=csp ====
void *__thiscall TagTypeClass::_vt08(void *Block, char a2)
{
  TagTypeClass::CleanupMembers((int)Block); /*0x6e64c3*/
  if ( (a2 & 1) != 0 ) /*0x6e64cd*/
    __3_YAXPAX_Z(Block); /*0x6e64d0*/
  return Block; /*0x6e64da*/
}



// ==== 0x006E64E0  _DynamicVectorClass_PAVTagTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TagTypeClass::sub_6E64E0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x6e64e6*/
  *(_DWORD *)(this + 16) = 0; /*0x6e64e9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6e64f0*/
  {
    __3_YAXPAX_Z(v2); /*0x6e64f6*/
    *(_DWORD *)(this + 4) = 0; /*0x6e64fe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6e6501*/
  *(_DWORD *)(this + 8) = 0; /*0x6e6504*/
}



// ==== 0x006E6510  _DynamicVectorClass_PAVTagTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TagTypeClass::sub_6E6510(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6e6510*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6e6525*/
  else
    return 0; /*0x6e6517*/
}



// ==== 0x006E6530  _VectorClass_PAVTagTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TagTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x6e653a*/
}



// ==== 0x006E6540  _VectorClass_PAVTagTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TagTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x6e6542*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x6e654d*/
  {
    v3 = 0; /*0x6e654f*/
    if ( v2 <= 0 ) /*0x6e6553*/
      return 1; /*0x6e6573*/
    v4 = (_DWORD *)this->Items; /*0x6e6555*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6e655b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6e6564*/
    {
      ++v3; /*0x6e6566*/
      ++v4; /*0x6e6567*/
      if ( v3 >= v2 ) /*0x6e656c*/
        return 1; /*0x6e656c*/
    }
  }
  return 0; /*0x6e656e*/
}



// ==== 0x006E6580  _VectorClass_PAVTagTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TagTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x6e658c*/
  {
    this->IsInitialized = 0; /*0x6e6596*/
    if ( a3 ) /*0x6e659c*/
      v4 = a3; /*0x6e65b2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6e65ae*/
    this->IsInitialized = 1; /*0x6e65b6*/
    if ( v4 ) /*0x6e65ba*/
    {
      if ( this->Items ) /*0x6e65c5*/
      {
        v6 = this->Capacity; /*0x6e65cc*/
        if ( a2 < v6 ) /*0x6e65d1*/
          v6 = a2; /*0x6e65d3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6e65d9*/
          ++i; /*0x6e65de*/
        if ( this->IsAllocated ) /*0x6e65eb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x6e65f6*/
          this->Items = 0; /*0x6e65fe*/
        }
      }
      this->Items = v4; /*0x6e6607*/
      this->Capacity = a2; /*0x6e660f*/
      this->IsAllocated = a3 == 0; /*0x6e6612*/
      return 1; /*0x6e6618*/
    }
    else
    {
      return 0; /*0x6e65bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6e6622*/
    return 1; /*0x6e6628*/
  }
}



// ==== 0x006E6630  _VectorClass_PAVTagTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TagTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x6e663d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x6e6643*/
    *(_DWORD *)(this + 4) = 0; /*0x6e664b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6e664e*/
  *(_DWORD *)(this + 8) = 0; /*0x6e6651*/
}



// ==== 0x006E6660  _VectorClass_PAVTagTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TagTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x6e6660*/
    return 0; /*0x6e6668*/
  v3 = *(_DWORD *)(this + 8); /*0x6e666e*/
  result = 0; /*0x6e6671*/
  if ( v3 <= 0 ) /*0x6e6675*/
    return -1; /*0x6e668c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x6e667b*/
  {
    if ( ++result >= v3 ) /*0x6e668a*/
      return -1; /*0x6e668a*/
  }
  return result; /*0x6e666a*/
}



// ==== 0x006E66A0  _VectorClass_PAVTagTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TagTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6e66a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6e66b5*/
  else
    return 0; /*0x6e66a7*/
}



// ==== 0x006E66C0  _DynamicVectorClass_PAVTagTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TagTypeClass::sub_6E66C0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6e66cc*/
  {
    this->IsInitialized = 0; /*0x6e66d2*/
    if ( a3 ) /*0x6e66d8*/
      v4 = a3; /*0x6e66ee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6e66ea*/
    this->IsInitialized = 1; /*0x6e66f2*/
    if ( !v4 ) /*0x6e66f6*/
      return 0; /*0x6e676a*/
    if ( this->Items ) /*0x6e66f8*/
    {
      v5 = this->q008; /*0x6e66ff*/
      if ( a2 < v5 ) /*0x6e6704*/
        v5 = a2; /*0x6e6706*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6e670c*/
        ++i; /*0x6e6711*/
      if ( this->IsAllocated ) /*0x6e671e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x6e6729*/
        this->Items = 0; /*0x6e6731*/
      }
    }
    this->Items = v4; /*0x6e673a*/
    this->q008 = a2; /*0x6e6742*/
    this->IsAllocated = a3 == 0; /*0x6e6745*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6e674e*/
  }
  v7 = this->q008; /*0x6e6751*/
  if ( v7 < this->Items ) /*0x6e6759*/
    this->Items = v7; /*0x6e675b*/
  return 1; /*0x6e675e*/
}



// ==== 0x006E6770  _DynamicVectorClass_PAVTagTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TagTypeClass::sub_6E6770(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x6e6770*/
  result = 0; /*0x6e6773*/
  if ( v2 <= 0 ) /*0x6e6778*/
    return -1; /*0x6e678f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x6e677e*/
  {
    if ( ++result >= v2 ) /*0x6e678d*/
      return -1; /*0x6e678d*/
  }
  return result; /*0x6e6792*/
}



// ==== 0x006E67A0  _VectorClass_PAVTagTypeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TagTypeClass::_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6e67a3*/
  *Block = &VectorClass<TagTypeClass *>::`vftable'; /*0x6e67a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6e67b0*/
  {
    __3_YAXPAX_Z(v3); /*0x6e67b8*/
    *(Block + 1) = 0; /*0x6e67c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6e67cb*/
  *(Block + 2) = 0; /*0x6e67d1*/
  if ( (a2 & 1) != 0 ) /*0x6e67d8*/
    __3_YAXPAX_Z(Block); /*0x6e67db*/
  return Block; /*0x6e67e5*/
}



// ==== 0x006E67F0  _DynamicVectorClass_PAVTagTypeClass::Constructor_VectorClass_TagTypeClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TagTypeClass::sub_6E67F0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6e67f3*/
  *Block = &VectorClass<TagTypeClass *>::`vftable'; /*0x6e67f6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6e6800*/
  {
    __3_YAXPAX_Z(v3); /*0x6e6808*/
    *(Block + 1) = 0; /*0x6e6810*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6e681b*/
  *(Block + 2) = 0; /*0x6e6821*/
  if ( (a2 & 1) != 0 ) /*0x6e6828*/
    __3_YAXPAX_Z(Block); /*0x6e682b*/
  return Block; /*0x6e6835*/
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
  g_BuildingLoadQueue_Count = 0; /*0x6e6a5c*/
  g_BuildingLoadQueue_Capacity = 0; /*0x6e6a61*/
  g_BuildingLoadQueue_Dirty = 0; /*0x6e6a66*/
  g_BuildingLoadQueue_Active = 0; /*0x6e6a6b*/
  return atexit(sub_6E6A80); /*0x6e6a76*/
}



// ==== 0x006E6A80  sub_6E6A80  this=-  sig=ida-proto ====
void __cdecl sub_6E6A80()
{
  __3_YAXPAX_Z(g_BuildingLoadQueue_Array); /*0x6e6a86*/
  g_BuildingLoadQueue_Array = 0; /*0x6e6a90*/
  g_BuildingLoadQueue_Count = 0; /*0x6e6a95*/
  g_BuildingLoadQueue_Capacity = 0; /*0x6e6a9a*/
  g_BuildingLoadQueue_Dirty = 0; /*0x6e6a9f*/
  g_BuildingLoadQueue_Active = 0; /*0x6e6aa4*/
}



// ==== 0x006E6AB0  ScriptAction::GetWaypointCoords  this=IUnknown  sig=csp ====
_BYTE *__thiscall ScriptAction_GetWaypointCoords(_BYTE *this, _DWORD *a2)
{
  if ( a2 ) /*0x6e6aba*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) == 11 ) /*0x6e6ac6*/
    {
      this->ptr_4 = 11; /*0x6e6ac8*/
      *(_DWORD *)this = (__int16)a2[9] + 1000 * (__int16)HIWORD(a2[9]); /*0x6e6ae7*/
    }
    else
    {
      this->ptr_4 = 52; /*0x6e6af2*/
      *(_DWORD *)this = (*(int (__stdcall **)(_DWORD *))(a2[1] + 16))(a2 + 1); /*0x6e6afc*/
    }
    return this; /*0x6e6ae9*/
  }
  else
  {
    this->ptr_4 = 0; /*0x6e6b05*/
    *(_DWORD *)this = 0; /*0x6e6b09*/
    return this; /*0x6e6b0f*/
  }
}



// ==== 0x006E6B70  ObjectClass::method_6E6B70  this=ObjectClass  sig=csp ====
_BYTE *__thiscall sub_6E6B70(_BYTE *this, _DWORD *a2)
{
  this->vtable2 = 11; /*0x6e6b75*/
  *(_DWORD *)this = *a2 / 256 + 1000 * (a2[1] / 256); /*0x6e6ba4*/
  return this; /*0x6e6ba3*/
}



// ==== 0x006E6E20  BuildingLoadQueue::GetNext  this=BuildingLoadQueue  sig=csp ====
void *__thiscall BuildingLoadQueue_Get(_BYTE *this)
{
  char v2; // al
  int v3; // eax
  void ***v4; // eax
  int v6; // ecx
  __int16 v7[4]; // [esp+4h] [ebp-8h] BYREF

  v2 = this->q004; /*0x6e6e26*/
  if ( v2 == 52 ) /*0x6e6e2b*/
  {
    if ( g_BuildingLoadQueue_Count ) /*0x6e6e39*/
    {
      v3 = g_BuildingLoadQueue_Active; /*0x6e6e3b*/
      if ( g_BuildingLoadQueue_Active && *(_DWORD *)g_BuildingLoadQueue_Active == *(_DWORD *)this ) /*0x6e6e4c*/
        goto LABEL_10; /*0x6e6e4c*/
      if ( g_BuildingLoadQueue_Count ) /*0x6e6e50*/
      {
        if ( !g_BuildingLoadQueue_Dirty ) /*0x6e6e59*/
        {
          qsort(g_BuildingLoadQueue_Array, g_BuildingLoadQueue_Count, 8u, CompareFunction); /*0x6e6e6a*/
          g_BuildingLoadQueue_Active = 0; /*0x6e6e78*/
          g_BuildingLoadQueue_Dirty = 1; /*0x6e6e82*/
        }
        *(_DWORD *)v7 = *(_DWORD *)this; /*0x6e6e96*/
        v3 = BinaryArraySearch(v7); /*0x6e6e9a*/
        if ( v3 ) /*0x6e6ea1*/
        {
          g_BuildingLoadQueue_Active = v3; /*0x6e6ea3*/
LABEL_10:
          v4 = (void ***)(v3 + 4); /*0x6e6ea8*/
          return (void *)__RTDynamicCast( /*0x6e6ecf*/
                           *v4,
                           0,
                           &AbstractClass `RTTI Type Descriptor',
                           &AbstractClass `RTTI Type Descriptor',
                           0);
        }
      }
    }
    v4 = (void ***)&unk_B78828; /*0x6e6ead*/
    return (void *)__RTDynamicCast( /*0x6e6ead*/
                     *v4,
                     0,
                     &AbstractClass `RTTI Type Descriptor',
                     &AbstractClass `RTTI Type Descriptor',
                     0);
  }
  if ( v2 != 11 ) /*0x6e6ed2*/
    return 0; /*0x6e6f0f*/
  v6 = *(_DWORD *)this; /*0x6e6ed4*/
  v7[0] = v6 % 1000; /*0x6e6ee5*/
  v7[1] = v6 / 1000; /*0x6e6f00*/
  return CellCoord::To_CellObj(&MapClass_Instance, v7); /*0x6e6ecb*/
}



// ==== 0x006E6F20  BuildingLoadQueue::Find  this=BuildingLoadQueue  sig=csp ====
void *__thiscall BuildingLoadQueue_Find(_BYTE *this)
{
  int v2; // ecx
  int v3; // edx
  int v4; // ebx
  _DWORD *v5; // edi
  int v6; // esi

  if ( this->q004 != 52 ) /*0x6e6f27*/
    return 0; /*0x6e6fe0*/
  v2 = g_BuildingLoadQueue_Count; /*0x6e6f2d*/
  if ( !g_BuildingLoadQueue_Count ) /*0x6e6f37*/
    return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6f37*/
  v3 = g_BuildingLoadQueue_Active; /*0x6e6f39*/
  if ( g_BuildingLoadQueue_Active && *(_DWORD *)g_BuildingLoadQueue_Active == *(_DWORD *)this ) /*0x6e6f49*/
    return AbstractClass::IsTechnoType(*(void **)(v3 + 4)); /*0x6e6fdf*/
  if ( !g_BuildingLoadQueue_Dirty ) /*0x6e6f56*/
  {
    qsort(g_BuildingLoadQueue_Array, g_BuildingLoadQueue_Count, 8u, CompareFunction); /*0x6e6f67*/
    v2 = g_BuildingLoadQueue_Count; /*0x6e6f6c*/
    g_BuildingLoadQueue_Active = 0; /*0x6e6f75*/
    g_BuildingLoadQueue_Dirty = 1; /*0x6e6f7f*/
  }
  v4 = *(_DWORD *)this; /*0x6e6f86*/
  v5 = g_BuildingLoadQueue_Array; /*0x6e6f88*/
  if ( v2 <= 0 ) /*0x6e6f90*/
    return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6f90*/
  while ( 1 ) /*0x6e6f99*/
  {
    v6 = v5[2 * (v2 / 2)]; /*0x6e6f99*/
    v3 = (int)&v5[2 * (v2 / 2)]; /*0x6e6f9c*/
    if ( v6 <= v4 ) /*0x6e6fa1*/
      break; /*0x6e6fa1*/
    v2 /= 2; /*0x6e6fa3*/
LABEL_12:
    if ( v2 <= 0 ) /*0x6e6fb5*/
      return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6fb5*/
  }
  if ( v6 != v4 ) /*0x6e6fa7*/
  {
    v5 = (_DWORD *)(v3 + 8); /*0x6e6fa9*/
    v2 += -1 - v2 / 2; /*0x6e6fb1*/
    goto LABEL_12; /*0x6e6fb1*/
  }
  if ( v3 ) /*0x6e6fc9*/
  {
    g_BuildingLoadQueue_Active = (int)&v5[2 * (v2 / 2)]; /*0x6e6fcb*/
    return AbstractClass::IsTechnoType(*(void **)(v3 + 4)); /*0x6e6fcb*/
  }
  return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6fc5*/
}



// ==== 0x006E6FF0  BuildingLoadQueue::FindObject  this=BuildingLoadQueue  sig=csp ====
int __thiscall BuildingLoadQueue_FindObject(_BYTE *this)
{
  int v2; // ecx
  int v3; // edx
  int v4; // ebx
  _DWORD *v5; // edi
  int v6; // esi
  void ***v7; // eax

  if ( this->q004 != 52 ) /*0x6e6ff7*/
    return 0; /*0x6e70b8*/
  v2 = g_BuildingLoadQueue_Count; /*0x6e6ffd*/
  if ( !g_BuildingLoadQueue_Count ) /*0x6e7007*/
    goto LABEL_13; /*0x6e7007*/
  v3 = g_BuildingLoadQueue_Active; /*0x6e7009*/
  if ( g_BuildingLoadQueue_Active && *(_DWORD *)g_BuildingLoadQueue_Active == *(_DWORD *)this ) /*0x6e7019*/
  {
LABEL_17:
    v7 = (void ***)(v3 + 4); /*0x6e70b3*/
    return __RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &ObjectClass `RTTI Type Descriptor', 0); /*0x6e70b6*/
  }
  if ( !g_BuildingLoadQueue_Dirty ) /*0x6e7026*/
  {
    qsort(g_BuildingLoadQueue_Array, g_BuildingLoadQueue_Count, 8u, CompareFunction); /*0x6e7037*/
    v2 = g_BuildingLoadQueue_Count; /*0x6e703c*/
    g_BuildingLoadQueue_Active = 0; /*0x6e7045*/
    g_BuildingLoadQueue_Dirty = 1; /*0x6e704f*/
  }
  v4 = *(_DWORD *)this; /*0x6e7056*/
  v5 = g_BuildingLoadQueue_Array; /*0x6e7058*/
  if ( v2 <= 0 ) /*0x6e7060*/
    goto LABEL_13; /*0x6e7060*/
  while ( 1 ) /*0x6e7069*/
  {
    v6 = v5[2 * (v2 / 2)]; /*0x6e7069*/
    v3 = (int)&v5[2 * (v2 / 2)]; /*0x6e706c*/
    if ( v6 <= v4 ) /*0x6e7071*/
      break; /*0x6e7071*/
    v2 /= 2; /*0x6e7073*/
LABEL_12:
    if ( v2 <= 0 ) /*0x6e7085*/
      goto LABEL_13; /*0x6e7085*/
  }
  if ( v6 != v4 ) /*0x6e7077*/
  {
    v5 = (_DWORD *)(v3 + 8); /*0x6e7079*/
    v2 += -1 - v2 / 2; /*0x6e7081*/
    goto LABEL_12; /*0x6e7081*/
  }
  if ( v3 ) /*0x6e70ab*/
  {
    g_BuildingLoadQueue_Active = (int)&v5[2 * (v2 / 2)]; /*0x6e70ad*/
    goto LABEL_17; /*0x6e70ad*/
  }
LABEL_13:
  v7 = (void ***)&unk_B78828; /*0x6e7087*/
  return __RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &ObjectClass `RTTI Type Descriptor', 0); /*0x6e70a7*/
}



// ==== 0x006E7330  ObjectClass::System_Read_6E7330  this=ObjectClass  sig=csp ====
int __thiscall sub_6E7330(_BYTE *this)
{
  int v2; // ecx
  int v3; // edx
  int v4; // ebx
  #374 *v5; // edi
  int v6; // esi
  void ***v7; // eax

  if ( this->vtable2 != 52 ) /*0x6e7337*/
    return 0; /*0x6e73f8*/
  v2 = g_BuildingLoadQueue_Count; /*0x6e733d*/
  if ( !g_BuildingLoadQueue_Count ) /*0x6e7347*/
    goto LABEL_13; /*0x6e7347*/
  v3 = g_BuildingLoadQueue_Active; /*0x6e7349*/
  if ( g_BuildingLoadQueue_Active && *(_DWORD *)g_BuildingLoadQueue_Active == *(_DWORD *)this ) /*0x6e7359*/
  {
LABEL_17:
    v7 = (void ***)(v3 + 4); /*0x6e73f3*/
    return __RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &TechnoTypeClass `RTTI Type Descriptor', 0); /*0x6e73f6*/
  }
  if ( !g_BuildingLoadQueue_Dirty ) /*0x6e7366*/
  {
    qsort( /*0x6e7377*/
      g_BuildingLoadQueue_Array,
      g_BuildingLoadQueue_Count,
      8u,
      (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
    v2 = g_BuildingLoadQueue_Count; /*0x6e737c*/
    g_BuildingLoadQueue_Active = 0; /*0x6e7385*/
    g_BuildingLoadQueue_Dirty = 1; /*0x6e738f*/
  }
  v4 = *(_DWORD *)this; /*0x6e7396*/
  v5 = g_BuildingLoadQueue_Array; /*0x6e7398*/
  if ( v2 <= 0 ) /*0x6e73a0*/
    goto LABEL_13; /*0x6e73a0*/
  while ( 1 ) /*0x6e73a9*/
  {
    v6 = *((_DWORD *)v5 + 2 * (v2 / 2)); /*0x6e73a9*/
    v3 = (int)v5 + 8 * (v2 / 2); /*0x6e73ac*/
    if ( v6 <= v4 ) /*0x6e73b1*/
      break; /*0x6e73b1*/
    v2 /= 2; /*0x6e73b3*/
LABEL_12:
    if ( v2 <= 0 ) /*0x6e73c5*/
      goto LABEL_13; /*0x6e73c5*/
  }
  if ( v6 != v4 ) /*0x6e73b7*/
  {
    v5 = (#374 *)(v3 + 8); /*0x6e73b9*/
    v2 += -1 - v2 / 2; /*0x6e73c1*/
    goto LABEL_12; /*0x6e73c1*/
  }
  if ( v3 ) /*0x6e73eb*/
  {
    g_BuildingLoadQueue_Active = (int)v5 + 8 * (v2 / 2); /*0x6e73ed*/
    goto LABEL_17; /*0x6e73ed*/
  }
LABEL_13:
  v7 = (void ***)&unk_B78828; /*0x6e73c7*/
  return __RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &TechnoTypeClass `RTTI Type Descriptor', 0); /*0x6e73e7*/
}



// ==== 0x006E7A80  BuildingLoadQueue::FindBuilding  this=BuildingLoadQueue  sig=csp ====
int __thiscall BuildingLoadQueue_FindBuilding(_BYTE *this)
{
  int v2; // ecx
  int v3; // edx
  int v4; // ebx
  _DWORD *v5; // edi
  int v6; // esi
  void ***v7; // eax

  if ( this->q004 != 52 ) /*0x6e7a87*/
    return 0; /*0x6e7b48*/
  v2 = g_BuildingLoadQueue_Count; /*0x6e7a8d*/
  if ( !g_BuildingLoadQueue_Count ) /*0x6e7a97*/
    goto LABEL_13; /*0x6e7a97*/
  v3 = g_BuildingLoadQueue_Active; /*0x6e7a99*/
  if ( g_BuildingLoadQueue_Active && *(_DWORD *)g_BuildingLoadQueue_Active == *(_DWORD *)this ) /*0x6e7aa9*/
  {
LABEL_17:
    v7 = (void ***)(v3 + 4); /*0x6e7b43*/
    return __RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &BuildingClass `RTTI Type Descriptor', 0); /*0x6e7b46*/
  }
  if ( !g_BuildingLoadQueue_Dirty ) /*0x6e7ab6*/
  {
    qsort(g_BuildingLoadQueue_Array, g_BuildingLoadQueue_Count, 8u, CompareFunction); /*0x6e7ac7*/
    v2 = g_BuildingLoadQueue_Count; /*0x6e7acc*/
    g_BuildingLoadQueue_Active = 0; /*0x6e7ad5*/
    g_BuildingLoadQueue_Dirty = 1; /*0x6e7adf*/
  }
  v4 = *(_DWORD *)this; /*0x6e7ae6*/
  v5 = g_BuildingLoadQueue_Array; /*0x6e7ae8*/
  if ( v2 <= 0 ) /*0x6e7af0*/
    goto LABEL_13; /*0x6e7af0*/
  while ( 1 ) /*0x6e7af9*/
  {
    v6 = v5[2 * (v2 / 2)]; /*0x6e7af9*/
    v3 = (int)&v5[2 * (v2 / 2)]; /*0x6e7afc*/
    if ( v6 <= v4 ) /*0x6e7b01*/
      break; /*0x6e7b01*/
    v2 /= 2; /*0x6e7b03*/
LABEL_12:
    if ( v2 <= 0 ) /*0x6e7b15*/
      goto LABEL_13; /*0x6e7b15*/
  }
  if ( v6 != v4 ) /*0x6e7b07*/
  {
    v5 = (_DWORD *)(v3 + 8); /*0x6e7b09*/
    v2 += -1 - v2 / 2; /*0x6e7b11*/
    goto LABEL_12; /*0x6e7b11*/
  }
  if ( v3 ) /*0x6e7b3b*/
  {
    g_BuildingLoadQueue_Active = (int)&v5[2 * (v2 / 2)]; /*0x6e7b3d*/
    goto LABEL_17; /*0x6e7b3d*/
  }
LABEL_13:
  v7 = (void ***)&unk_B78828; /*0x6e7b17*/
  return __RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &BuildingClass `RTTI Type Descriptor', 0); /*0x6e7b37*/
}



// ==== 0x006E7C20  ObjectClass::Network_Process_6E7C20  this=ObjectClass  sig=csp ====
void *__thiscall sub_6E7C20(_BYTE *this)
{
  int v1; // ecx
  _BYTE *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this; /*0x6e7c20*/
  if ( this->vtable2 != 11 ) /*0x6e7c25*/
    return 0; /*0x6e7c61*/
  v1 = *(_DWORD *)this; /*0x6e7c27*/
  LOWORD(v3) = v1 % 1000; /*0x6e7c39*/
  HIWORD(v3) = v1 / 1000; /*0x6e7c54*/
  return CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v3); /*0x6e7c60*/
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
_DWORD *__thiscall TaskForceClass_Constructor(_DWORD *this, char *Source)
{
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // ecx

  AbstractTypeClass::Constructor((int)this, Source); /*0x6e7e8a*/
  this->ptr_98 = -1; /*0x6e7e8f*/
  this->u32_9C = 0; /*0x6e7e99*/
  this->q0A0 = 0; /*0x6e7ea3*/
  *this = &TaskForceClass::`vftable'; /*0x6e7ead*/
  this->vtable2 = &TaskForceClass::`vftable'; /*0x6e7eb3*/
  this->vtable3 = &TaskForceClass::`vftable'; /*0x6e7eba*/
  this->vtable4 = &TaskForceClass::`vftable'; /*0x6e7ec1*/
  if ( g_MultiplayerLogFlags < dword_A8E8D8 /*0x6e7f05*/
    || (byte_A8E8DD || !dword_A8E8D8)
    && dword_A8E8E4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8E8D0 + 8))(
         &dword_A8E8D0,
         dword_A8E8D8 + dword_A8E8E4,
         0) )
  {
    v3 = g_MultiplayerLogFlags++; /*0x6e7f12*/
    *((_DWORD *)g_MultiplayerLogEntry + v3) = this; /*0x6e7f21*/
  }
  v4 = this + 41; /*0x6e7f28*/
  v5 = 6; /*0x6e7f2a*/
  do /*0x6e7f38*/
  {
    *v4 = 0; /*0x6e7f2f*/
    v4[1] = 0; /*0x6e7f31*/
    v4 += 2; /*0x6e7f34*/
    --v5; /*0x6e7f37*/
  }
  while ( v5 ); /*0x6e7f38*/
  return this; /*0x6e7f3c*/
}



// ==== 0x006E8000  ObjectClass::method_6E8000  this=AbstractClass  sig=csp ====
_DWORD *__thiscall sub_6E8000(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // ecx
  int v4; // edi
  int v5; // esi
  int v6; // edx

  result = this; /*0x6e8004*/
  this->vtable3 = &INoticeSink::`vftable'; /*0x6e8008*/
  this->vtable4 = &INoticeSource::`vftable'; /*0x6e800f*/
  this->uniqueId = *(_DWORD *)(a2 + 16); /*0x6e801c*/
  this->q050 = *(_BYTE *)(a2 + 20); /*0x6e8022*/
  this->nextArrayIndex = *(_DWORD *)(a2 + 24); /*0x6e8028*/
  this->referenceCount = *(_DWORD *)(a2 + 28); /*0x6e802e*/
  this->q080 = *(_BYTE *)(a2 + 32); /*0x6e8034*/
  *this = &AbstractClass::`vftable'; /*0x6e803f*/
  this->vtable2 = &AbstractClass::`vftable'; /*0x6e8045*/
  this->vtable3 = &AbstractClass::`vftable'; /*0x6e804c*/
  this->vtable4 = &AbstractClass::`vftable'; /*0x6e8053*/
  qmemcpy(this + 9, (const void *)(a2 + 36), 0x19u); /*0x6e805a*/
  qmemcpy((char *)this + 61, (const void *)(a2 + 61), 0x20u); /*0x6e8068*/
  this->q060 = *(_DWORD *)(a2 + 96); /*0x6e8070*/
  qmemcpy(this + 25, (const void *)(a2 + 100), 0x31u); /*0x6e807b*/
  *this = &TaskForceClass::`vftable'; /*0x6e807e*/
  this->vtable2 = &TaskForceClass::`vftable'; /*0x6e8084*/
  this->vtable3 = &TaskForceClass::`vftable'; /*0x6e808b*/
  this->vtable4 = &TaskForceClass::`vftable'; /*0x6e8092*/
  v3 = this + 41; /*0x6e809f*/
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
      *v3 = *(_DWORD *)((char *)v3 + v6); /*0x6e80d5*/
      v3[1] = *(_DWORD *)((char *)v3 + v6 + 4); /*0x6e80db*/
      v3 += 2; /*0x6e80e4*/
    }
    while ( v5 < result[39] ); /*0x6e80e9*/
  }
  return result; /*0x6e80eb*/
}



// ==== 0x006E8160  TeamClass::SumMemberCounts  this=TeamClass  sig=csp ====
int __thiscall sub_6E8160(int *this)
{
  int v1; // edx
  int result; // eax
  int *v3; // ecx
  int v4; // esi

  v1 = this->q09C; /*0x6e8160*/
  result = 0; /*0x6e8166*/
  if ( v1 > 0 ) /*0x6e816a*/
  {
    v3 = this + 41; /*0x6e816d*/
    do /*0x6e817b*/
    {
      v4 = *v3; /*0x6e8173*/
      v3 += 2; /*0x6e8175*/
      result += v4; /*0x6e8178*/
      --v1; /*0x6e817a*/
    }
    while ( v1 ); /*0x6e817b*/
  }
  return result; /*0x6e817e*/
}



// ==== 0x006E8220  TaskForceClass::LoadFromINI  this=IUnknown  sig=csp ====
int __fastcall sub_6E8220(char *a1, int a2)
{
  int result; // eax
  int v5; // esi
  int v6; // ebx
  unsigned __int8 *StringByIndex; // eax
  int v8; // esi
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // [esp+10h] [ebp-1Ch]
  char Source[24]; // [esp+14h] [ebp-18h] BYREF

  result = INIClass::GetKeyCount(a1, (unsigned __int8 *)g_INI_Key_TaskForces); /*0x6e8230*/
  v5 = result; /*0x6e8235*/
  v6 = 0; /*0x6e8237*/
  v12 = result; /*0x6e823b*/
  if ( result > 0 ) /*0x6e823f*/
  {
    while ( 1 ) /*0x6e824d*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1, (unsigned __int8 *)g_INI_Key_TaskForces, v6); /*0x6e824d*/
      result = INIClass::GetString( /*0x6e8266*/
                 (unsigned __int8 ***)a1,
                 (unsigned __int8 *)g_INI_Key_TaskForces,
                 StringByIndex,
                 &g_INI_DefaultBuffer,
                 Source,
                 24);
      if ( result > 0 ) /*0x6e826d*/
        break; /*0x6e826d*/
LABEL_13:
      if ( ++v6 >= v5 ) /*0x6e832a*/
        return result; /*0x6e832a*/
    }
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e8293*/
      goto LABEL_11; /*0x6e8293*/
    v8 = 0; /*0x6e82a4*/
    if ( g_MultiplayerLogFlags > 0 ) /*0x6e82a8*/
    {
      while ( _strcmpi((const void *)(*((_DWORD *)g_MultiplayerLogEntry + v8) + 36), Source) ) /*0x6e82c6*/
      {
        if ( ++v8 >= g_MultiplayerLogFlags ) /*0x6e82d0*/
          goto LABEL_8; /*0x6e82d0*/
      }
      v10 = (_DWORD *)*((_DWORD *)g_MultiplayerLogEntry + v8); /*0x6e82f9*/
      goto LABEL_12; /*0x6e82fc*/
    }
LABEL_8:
    v9 = __2_YAPAXI_Z(0xD4u); /*0x6e82d7*/
    if ( v9 ) /*0x6e82e1*/
      v10 = TaskForceClass::Construct(v9, Source); /*0x6e82ef*/
    else
LABEL_11:
      v10 = 0; /*0x6e82fe*/
LABEL_12:
    v11 = sub_412610(Source); /*0x6e8300*/
    SwizzleManagerClass::Here_I_Am((int)&SwizzleManagerClass_Instance, v11, (int)v10); /*0x6e8310*/
    result = (*(int (__thiscall **)(_DWORD *, char *))(*v10 + 100))(v10, a1); /*0x6e831a*/
    v10[40] = a2; /*0x6e831d*/
    v5 = v12; /*0x6e8323*/
    goto LABEL_13; /*0x6e8323*/
  }
  return result; /*0x6e8330*/
}



// ==== 0x006E8340  ScriptTypeClass::ReadINI  this=ScriptTypeClass  sig=csp ====
int __fastcall sub_6E8340(char *a1, int a2)
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

  KeyCount = INIClass::GetKeyCount(a1, (unsigned __int8 *)g_INI_Key_TaskForces); /*0x6e8357*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6e835d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1, (unsigned __int8 *)g_INI_Key_TaskForces, i); /*0x6e8367*/
    INIClass::GetString( /*0x6e8380*/
      (unsigned __int8 ***)a1,
      (unsigned __int8 *)g_INI_Key_TaskForces,
      StringByIndex,
      &g_INI_DefaultBuffer,
      Buffer,
      32);
    INIClass::ClearSection((int)a1, (int)Buffer, 0); /*0x6e838e*/
  }
  INIClass::ClearSection((int)a1, (int)g_INI_Key_TaskForces, 0); /*0x6e83a1*/
  result = g_MultiplayerLogFlags; /*0x6e83a6*/
  v7 = 0; /*0x6e83ab*/
  for ( j = 0; j < g_MultiplayerLogFlags; ++j ) /*0x6e83b1*/
  {
    v9 = *((_DWORD *)g_MultiplayerLogEntry + j); /*0x6e83bc*/
    if ( *(_DWORD *)(v9 + 160) == a2 ) /*0x6e83c5*/
    {
      v10 = v7++; /*0x6e83cd*/
      sprintf(Buffer, "%d", v10); /*0x6e83d5*/
      String::Trim(Buffer); /*0x6e83e1*/
      INIClass::SetString(a1, (unsigned __int8 *)g_INI_Key_TaskForces, Buffer, (char *)(v9 + 36)); /*0x6e83f6*/
      (*(void (__thiscall **)(int, char *))(*(_DWORD *)v9 + 104))(v9, a1); /*0x6e8400*/
    }
    result = g_MultiplayerLogFlags; /*0x6e8403*/
  }
  return result; /*0x6e840d*/
}



// ==== 0x006E8420  TaskForceClass::GetUnitCount  this=TaskForceClass  sig=csp ====
char __thiscall TaskForceClass::_vt25(int this, unsigned __int8 ***a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // eax
  int v8; // [esp+8h] [ebp-A8h] BYREF
  char Buffer[32]; // [esp+10h] [ebp-A0h] BYREF
  char Destination[128]; // [esp+30h] [ebp-80h] BYREF

  INIClass::ResetSection(a2); /*0x6e8433*/
  if ( !AbstractTypeClass::LoadFromINI(this, a2) ) /*0x6e843b*/
    return 0; /*0x6e84f7*/
  v3 = 0; /*0x6e844a*/
  *(_DWORD *)(this + 156) = 0; /*0x6e844f*/
  do /*0x6e84cb*/
  {
    sprintf(Buffer, "%d", v3); /*0x6e8460*/
    if ( (int)INIClass::GetString( /*0x6e8486*/
                a2,
                (unsigned __int8 *)(this + 36),
                (unsigned __int8 *)Buffer,
                &g_INI_DefaultBuffer,
                Destination,
                128) > 0 )
    {
      v4 = TaskForceClass::ParseUnitCountAndType(&v8, Destination); /*0x6e8491*/
      v5 = *(_DWORD *)(this + 156); /*0x6e8496*/
      *(_DWORD *)(this + 8 * v5 + 164) = *v4; /*0x6e849e*/
      *(_DWORD *)(this + 8 * v5 + 168) = v4[1]; /*0x6e84a8*/
      v6 = *(_DWORD *)(this + 156); /*0x6e84af*/
      if ( *(_DWORD *)(this + 8 * v6 + 168) ) /*0x6e84b5*/
        *(_DWORD *)(this + 156) = v6 + 1; /*0x6e84c1*/
    }
    ++v3; /*0x6e84c7*/
  }
  while ( v3 < 6 ); /*0x6e84cb*/
  *(_DWORD *)(this + 152) = INIClass::ReadInt_Overwrite( /*0x6e84e2*/
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (unsigned __int8 *)g_INI_Key_Group,
                              *(_DWORD *)(this + 152));
  return 1; /*0x6e84e9*/
}



// ==== 0x006E8510  TaskForceClass::GetUnitType  this=TaskForceClass  sig=csp ====
char __thiscall TaskForceClass::_vt26(int this, char *a2)
{
  int v3; // esi
  _DWORD *v4; // ebx
  char *v5; // eax
  char Buffer[32]; // [esp+8h] [ebp-20h] BYREF

  if ( !AbstractTypeClass::WriteINI((char *)this, a2) ) /*0x6e851c*/
    return 0; /*0x6e85a5*/
  v3 = 0; /*0x6e8527*/
  v4 = (_DWORD *)(this + 164); /*0x6e8529*/
  do /*0x6e857d*/
  {
    sprintf(Buffer, "%d", v3); /*0x6e853a*/
    if ( v3 >= *(_DWORD *)(this + 156) ) /*0x6e854a*/
    {
      INIClass::ClearSection((int)a2, this + 36, (unsigned __int8 *)Buffer); /*0x6e8571*/
    }
    else
    {
      v5 = TaskForceClass::Check(v4); /*0x6e854e*/
      INIClass::SetString(a2, (unsigned __int8 *)(this + 36), Buffer, v5); /*0x6e855f*/
    }
    ++v3; /*0x6e8576*/
    v4 += 2; /*0x6e8577*/
  }
  while ( v3 < 6 ); /*0x6e857d*/
  INIClass::SetInt(a2, (unsigned __int8 *)(this + 36), g_INI_Key_Group, *(_DWORD *)(this + 152), 0); /*0x6e8593*/
  return 1; /*0x6e859a*/
}



// ==== 0x006E85B0  ObjectClass::method_6E85B0  this=ObjectClass  sig=csp ====
char __thiscall sub_6E85B0(int *this)
{
  int v2; // edi
  _DWORD *i; // esi

  v2 = 0; /*0x6e85bb*/
  if ( this->q027 <= 0 ) /*0x6e85bf*/
    return 1; /*0x6e85e1*/
  for ( i = this + 42; (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*i + 44))(*i) == 16; i += 2 ) /*0x6e85c1*/
  {
    if ( ++v2 >= this->q027 ) /*0x6e85df*/
      return 1; /*0x6e85df*/
  }
  return 0; /*0x6e85e1*/
}



// ==== 0x006E85F0  TeamTypeClass::FindOrCreateTaskForce  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6E85F0(char *Source)
{
  int v2; // esi
  _DWORD *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e860c*/
    return 0; /*0x6e866f*/
  v2 = 0; /*0x6e861d*/
  if ( g_MultiplayerLogFlags <= 0 ) /*0x6e8621*/
  {
LABEL_6:
    v3 = __2_YAPAXI_Z(0xD4u); /*0x6e8646*/
    if ( v3 ) /*0x6e8655*/
      return TaskForceClass::Construct(v3, Source); /*0x6e8661*/
    return 0; /*0x6e8655*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)g_MultiplayerLogEntry + v2) + 36), Source) ) /*0x6e863a*/
  {
    if ( ++v2 >= g_MultiplayerLogFlags ) /*0x6e8644*/
      goto LABEL_6; /*0x6e8644*/
  }
  return (_DWORD *)*((_DWORD *)g_MultiplayerLogEntry + v2); /*0x6e865f*/
}



// ==== 0x006E8680  TaskForceClass::SaveTaskForce  this=TaskForceClass  sig=csp ====
int __stdcall TaskForceClass::_vt06(int *a1, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix(a1, a2, a3); /*0x6e868f*/
  if ( result >= 0 ) /*0x6e8696*/
    return 0; /*0x6e8698*/
  return result; /*0x6e869a*/
}



// ==== 0x006E86A0  TaskForceClass::LoadTaskForce  this=TaskForceClass  sig=csp ====
int __stdcall TaskForceClass::_vt05(_DWORD *a1, int a2)
{
  int result; // eax
  int *v3; // esi
  int v4; // edi

  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x6e86ab*/
  if ( result >= 0 ) /*0x6e86b2*/
  {
    if ( a1 ) /*0x6e86b6*/
    {
      AbstractTypeClass::Init((int)a1, (int)&a2); /*0x6e86bf*/
      *a1 = &TaskForceClass::`vftable'; /*0x6e86c4*/
      a1[1] = &TaskForceClass::`vftable'; /*0x6e86ca*/
      a1[2] = &TaskForceClass::`vftable'; /*0x6e86d1*/
      a1[3] = &TaskForceClass::`vftable'; /*0x6e86d8*/
    }
    v3 = a1 + 42; /*0x6e86e0*/
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
int __stdcall TaskForceClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6e8716*/
    return -2147467261; /*0x6e8718*/
  *a2 = 1641952286; /*0x6e8726*/
  a2[1] = 298977140; /*0x6e872e*/
  a2[2] = 1610655148; /*0x6e8737*/
  a2[3] = -1252326136; /*0x6e8740*/
  return 0; /*0x6e871d*/
}



// ==== 0x006E8750  TaskForceClass::LoadTask  this=TaskForceClass  sig=csp ====
int __thiscall TaskForceClass::_vt13(int this, int *a2)
{
  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6e8759*/
  Power::TimerProcess(*(_DWORD *)(this + 152)); /*0x6e8767*/
  return Power::TimerProcess(*(_DWORD *)(this + 156)); /*0x6e877a*/
}



// ==== 0x006E8780  HouseClass::GetMaxBuildLevel  this=HouseClass  sig=csp ====
int __thiscall HouseClass_GetMaxBuildLevel(int *this)
{
  int v1; // edx
  int result; // eax
  _DWORD *v3; // esi
  int v4; // ecx

  v1 = this->secretLabsCount; /*0x6e8780*/
  result = 0; /*0x6e8786*/
  if ( v1 > 0 ) /*0x6e878a*/
  {
    v3 = this + 42; /*0x6e8794*/
    do /*0x6e87bc*/
    {
      v4 = *(_DWORD *)(*v3 + 1588); /*0x6e879c*/
      if ( v4 <= result ) /*0x6e87a4*/
      {
        if ( v4 == -1 ) /*0x6e87ad*/
        {
          if ( g_GameMode_Current[0] ) /*0x6e87b1*/
            result = 11; /*0x6e87b3*/
        }
      }
      else
      {
        result = *(_DWORD *)(*v3 + 1588); /*0x6e87a6*/
      }
      v3 += 2; /*0x6e87b8*/
      --v1; /*0x6e87bb*/
    }
    while ( v1 ); /*0x6e87bc*/
  }
  return result; /*0x6e87c0*/
}



// ==== 0x006E87D0  TaskForceClass::StubReturn33  this=TaskForceClass  sig=csp ====
int TaskForceClass::_vt11()
{
  return 33; /*0x6e87d5*/
}



// ==== 0x006E87E0  TaskForceClass::StubReturn212  this=TaskForceClass  sig=csp ====
int TaskForceClass::_vt12()
{
  return 212; /*0x6e87e5*/
}



// ==== 0x006E87F0  TaskForceClass::ExecuteAction  this=TaskForceClass  sig=csp ====
void **__thiscall TaskForceClass::_vt08(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &TaskForceClass::`vftable'; /*0x6e87f6*/
  *(Block + 1) = &TaskForceClass::`vftable'; /*0x6e87fc*/
  *(Block + 2) = &TaskForceClass::`vftable'; /*0x6e8803*/
  *(Block + 3) = &TaskForceClass::`vftable'; /*0x6e880a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x6e8811*/
  v5 = Block; /*0x6e8826*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_A8E8D0 + 16))(&dword_A8E8D0, &v5); /*0x6e882a*/
  if ( v3 != -1 && v3 < g_MultiplayerLogFlags && v3 < --g_MultiplayerLogFlags ) /*0x6e8845*/
  {
    do /*0x6e885d*/
    {
      ++v3; /*0x6e884d*/
      *((_DWORD *)g_MultiplayerLogEntry + v3 - 1) = *((_DWORD *)g_MultiplayerLogEntry + v3); /*0x6e8851*/
    }
    while ( v3 < g_MultiplayerLogFlags ); /*0x6e885d*/
  }
  AbstractTypeClass::Dtor(Block); /*0x6e8861*/
  if ( (a2 & 1) != 0 ) /*0x6e886b*/
    __3_YAXPAX_Z(Block); /*0x6e886e*/
  return Block; /*0x6e8878*/
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
  *(_DWORD *)(this + 80) = g_CurrentFrame; /*0x6e8acd*/
  *(_DWORD *)(this + 84) = 0; /*0x6e8ad0*/
  v7 = g_CurrentFrame; /*0x6e8ad3*/
  *(_DWORD *)(this + 96) = 0; /*0x6e8ad9*/
  *(_DWORD *)(this + 88) = v7; /*0x6e8adc*/
  *(_DWORD *)(this + 100) = g_CurrentFrame; /*0x6e8ae7*/
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
  if ( g_HouseClass_AIProductionState < dword_8B40F0 /*0x6e8b7e*/
    || (byte_8B40F5 || !dword_8B40F0)
    && dword_8B40FC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(TeamClass_Array + 8))(
         &TeamClass_Array,
         dword_8B40F0 + dword_8B40FC,
         0) )
  {
    v8 = g_HouseClass_AIProductionState++; /*0x6e8b8b*/
    *((_DWORD *)g_TeamClassPool + v8) = this; /*0x6e8b9a*/
  }
  if ( g_AnimManager < g_AnimTypePool /*0x6e8bd1*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimTypePool + g_AnimManagerConfig,
         0) )
  {
    v9 = g_AnimManager++; /*0x6e8bde*/
    *((_DWORD *)g_AnimPoolCount + v9) = this; /*0x6e8bed*/
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
  if ( g_AlphaShapePool < dword_B0F728 /*0x6e8c77*/
    || (byte_B0F72D || !dword_B0F728)
    && dword_B0F734 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(AbstractClass_Array + 8))(
         &AbstractClass_Array,
         dword_B0F728 + dword_B0F734,
         0) )
  {
    v11 = g_AlphaShapePool++; /*0x6e8c84*/
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
      *(_DWORD *)(this + 52) = CellCoord::To_CellObj(&MapClass_Instance, WaypointCoords); /*0x6e8d58*/
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
int __thiscall TeamClass::Destructor(void **this)
{
  int v2; // edi
  int v3; // ecx
  int v4; // eax
  int i; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  void **v14; // [esp+10h] [ebp-4h] BYREF

  v2 = 0; /*0x6e8de5*/
  *this = &TeamClass::`vftable'; /*0x6e8de7*/
  this->vtable2 = &TeamClass::`vftable'; /*0x6e8ded*/
  this->vtable3 = &TeamClass::`vftable'; /*0x6e8df4*/
  for ( this->vtable4 = &TeamClass::`vftable'; v2 < g_AnimTypeInitQueue; ++v2 ) /*0x6e8e09*/
  {
    if ( *(void **)(*((_DWORD *)dword_A8B204 + v2) + 220) == this->buildingType ) /*0x6e8e1e*/
    {
      if ( this->achievedGreatSuccess ) /*0x6e8e20*/
        AITriggerTypeClass::RegisterSuccess(); /*0x6e8e2a*/
      else
        AITriggerTypeClass::RegisterFailure(); /*0x6e8e31*/
    }
  }
  v3 = (int)this->owner; /*0x6e8e40*/
  if ( v3 ) /*0x6e8e45*/
  {
    v4 = (int)this->buildingType; /*0x6e8e47*/
    if ( v4 ) /*0x6e8e4c*/
    {
      if ( *(_BYTE *)(v4 + 246) ) /*0x6e8e4e*/
        --*(_DWORD *)(v3 + 22124); /*0x6e8e58*/
    }
  }
  if ( g_WTFMode && this->buildingType ) /*0x6e8e67*/
  {
    for ( i = (int)this->u8_15; i; i = (int)this->u8_15 ) /*0x6e8e73*/
      TeamClass::LiberateMember_Start(i, -1, 0); /*0x6e8e7c*/
    --*((_DWORD *)this->buildingType + 55); /*0x6e8e92*/
    v6 = (int)this->referenceCount; /*0x6e8e98*/
    if ( v6 ) /*0x6e8e9d*/
    {
      if ( !*(_DWORD *)(v6 + 44) ) /*0x6e8e9f*/
        TagClass::Destroy(); /*0x6e8ea6*/
      this->referenceCount = 0; /*0x6e8eab*/
    }
  }
  AbstractClass::AnnounceExpiredPointer(this); /*0x6e8eb6*/
  v14 = this; /*0x6e8ecb*/
  v7 = (*(int (__thiscall **)(int *, void ***))(dword_B0F6F0 + 16))(&dword_B0F6F0, &v14); /*0x6e8ecf*/
  if ( v7 != -1 && v7 < dword_B0F700 && v7 < --dword_B0F700 ) /*0x6e8eea*/
  {
    do /*0x6e8f02*/
    {
      ++v7; /*0x6e8ef2*/
      *((_DWORD *)dword_B0F6F4 + v7 - 1) = *((_DWORD *)dword_B0F6F4 + v7); /*0x6e8ef6*/
    }
    while ( v7 < dword_B0F700 ); /*0x6e8f02*/
  }
  v14 = this; /*0x6e8f14*/
  v8 = (*(int (__thiscall **)(int *, void ***))(AbstractClass_Array + 16))(&AbstractClass_Array, &v14); /*0x6e8f18*/
  if ( v8 != -1 && v8 < g_AlphaShapePool && v8 < --g_AlphaShapePool ) /*0x6e8f33*/
  {
    do /*0x6e8f4b*/
    {
      ++v8; /*0x6e8f3b*/
      *((_DWORD *)dword_B0F724 + v8 - 1) = *((_DWORD *)dword_B0F724 + v8); /*0x6e8f3f*/
    }
    while ( v8 < g_AlphaShapePool ); /*0x6e8f4b*/
  }
  v14 = this; /*0x6e8f5d*/
  v9 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v14); /*0x6e8f61*/
  if ( v9 != -1 && v9 < g_AnimManager && v9 < --g_AnimManager ) /*0x6e8f7c*/
  {
    do /*0x6e8f94*/
    {
      ++v9; /*0x6e8f84*/
      *((_DWORD *)g_AnimPoolCount + v9 - 1) = *((_DWORD *)g_AnimPoolCount + v9); /*0x6e8f88*/
    }
    while ( v9 < g_AnimManager ); /*0x6e8f94*/
  }
  v14 = this; /*0x6e8fa6*/
  v10 = (*(int (__thiscall **)(int *, void ***))(dword_B0F618 + 16))(&dword_B0F618, &v14); /*0x6e8faa*/
  if ( v10 != -1 && v10 < dword_B0F628 && v10 < --dword_B0F628 ) /*0x6e8fc5*/
  {
    do /*0x6e8fdd*/
    {
      ++v10; /*0x6e8fcd*/
      *((_DWORD *)dword_B0F61C + v10 - 1) = *((_DWORD *)dword_B0F61C + v10); /*0x6e8fd1*/
    }
    while ( v10 < dword_B0F628 ); /*0x6e8fdd*/
  }
  v14 = this; /*0x6e8fef*/
  v11 = (*(int (__thiscall **)(int *, void ***))(TeamClass_Array + 16))(&TeamClass_Array, &v14); /*0x6e8ff3*/
  if ( v11 != -1 && v11 < g_HouseClass_AIProductionState && v11 < --g_HouseClass_AIProductionState ) /*0x6e900e*/
  {
    do /*0x6e9026*/
    {
      ++v11; /*0x6e9016*/
      *((_DWORD *)g_TeamClassPool + v11 - 1) = *((_DWORD *)g_TeamClassPool + v11); /*0x6e901a*/
    }
    while ( v11 < g_HouseClass_AIProductionState ); /*0x6e9026*/
  }
  if ( this->unknown74 ) /*0x6e9028*/
  {
    v12 = (int)this->buildingType; /*0x6e902f*/
    if ( v12 ) /*0x6e9034*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 32))(v12, 1); /*0x6e903a*/
  }
  return AbstractClass::DTOR(this); /*0x6e9044*/
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
      LOBYTE(v9) = Type::CheckAmbiguity(&MapClass_Instance, a2, 1); /*0x6e90fd*/
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
void __usercall TeamClass::Update(int a1@<ecx>, _DWORD *a2@<ebp>, int j@<edi>)
{
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int i; // edi
  char v10; // cl
  char v11; // al
  char v12; // bl
  int v13; // ecx
  int *Entry; // eax
  int v15; // ecx
  _DWORD *n; // edi
  int v17; // eax
  _DWORD *ii; // edi
  int v19; // eax
  _DWORD *v20; // edi
  _DWORD *v21; // ebp
  int v22; // eax
  void *v23; // eax
  _DWORD *m; // edi
  int *v25; // edi
  int *v26; // ebp
  int v27; // ebx
  int Owner; // eax
  void *v29; // eax
  int v30; // ebp
  int k; // edi
  int v32; // ecx
  AbstractClass *v33; // eax
  AbstractClass *v34; // eax
  _DWORD *v35; // edi
  _DWORD *v36; // edi
  _DWORD *v37; // edi
  _DWORD *v38; // eax
  int *v39; // edi
  char v40; // cl
  int v41; // edx
  _DWORD *v42; // eax
  _DWORD *v43; // edi
  _DWORD *v44; // edi
  int v45; // eax
  _DWORD *v46; // edi
  char v47; // al
  _DWORD *v48; // ebp
  _DWORD *v49; // edi
  char v50;... [24476 chars total]



// ==== 0x006EA080  ObjectClass::method_6EA080  this=ObjectClass  sig=csp ====
char __thiscall sub_6EA080(int this)
{
  int v2; // eax
  char result; // al

  v2 = *(_DWORD *)(this + 84); /*0x6ea086*/
  *(_BYTE *)(this + 127) = 1; /*0x6ea089*/
  *(_BYTE *)(this + 120) = 1; /*0x6ea08e*/
  for ( *(_BYTE *)(this + 122) = 0; v2; v2 = *(_DWORD *)(v2 + 1496) ) /*0x6ea095*/
  {
    if ( *(_BYTE *)(this + 123) || *(_BYTE *)(this + 119) ) /*0x6ea09e*/
      *(_BYTE *)(v2 + 1673) = 1; /*0x6ea0a5*/
  }
  result = SetLandTypeMap(*(_DWORD **)(this + 40)); /*0x6ea0b8*/
  *(_BYTE *)(this + 128) = 1; /*0x6ea0bd*/
  return result; /*0x6ea0c3*/
}



// ==== 0x006EA0D0  ObjectClass::SelectTeamProductionBuilding  this=ObjectClass  sig=csp ====
void __thiscall SelectTeamProductionBuilding(int this)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // esi
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // eax
  int v10; // ecx
  _DWORD *v11; // edi
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // edx
  double v15; // st7
  int v16; // ebp
  int v17; // edi
  _DWORD *v18; // eax
  int v19; // esi
  int v20; // ebp
  int v21; // eax
  int v22; // [esp+2Ch] [ebp-68h] BYREF
  int v23; // [esp+30h] [ebp-64h]
  int v24; // [esp+34h] [ebp-60h]
  int v25; // [esp+38h] [ebp-5Ch]
  int v26; // [esp+3Ch] [ebp-58h]
  int v27; // [esp+40h] [ebp-54h]
  int i; // [esp+44h] [ebp-50h]
  int v29; // [esp+48h] [ebp-4Ch] BYREF
  int j; // [esp+4Ch] [ebp-48h] BYREF
  int v31; // [esp+50h] [ebp-44h]
  _BYTE v32[4]; // [esp+54h] [ebp-40h] BYREF
  int v33; // [esp+58h] [ebp-3Ch] BYREF
  int v34; // [esp+5Ch] [ebp-38h]
  int v35; // [esp+60h] [ebp-34h]
  _BYTE v36[12]; // [esp+64h] [ebp-30h] BYREF
  _BYTE v37[12]; // [esp+70h] [ebp-24h] BYREF
  _BYTE v38[12]; // [esp+7Ch] [ebp-18h] BYREF
  _BYTE v39[12]; // [esp+88h] [ebp-Ch] BYREF

  v2 = *(_DWORD **)(this + 40); /*0x6ea0de*/
  *(_BYTE *)(this + 127) = 0; /*0x6ea0e2*/
  SetLandTypeMap(v2); /*0x6ea0e6*/
  if ( *(int *)(this + 72) <= 0 ) /*0x6ea0f0*/
  {
    *(_DWORD *)(this + 52) = 0; /*0x6ea3c2*/
  }
  else
  {
    v3 = (_DWORD *)(this + 52); /*0x6ea0f9*/
    TeamClass::FindClosestEnemy(this, (void **)(this + 52), (int *)(this + 56)); /*0x6ea100*/
    if ( !*(_DWORD *)(this + 52) ) /*0x6ea105*/
    {
      v4 = *(_DWORD *)(this + 56); /*0x6ea10a*/
      if ( !v4 ) /*0x6ea10e*/
        return; /*0x6ea10e*/
      *v3 = v4; /*0x6ea114*/
    }
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)*v3 + 72))(*v3, &v33); /*0x6ea11f*/
    v27 = 0x7FFFFFFF; /*0x6ea124*/
    LOWORD(v22) = *v5 / 256; /*0x6ea13a*/
    v6 = *(_DWORD *)(this + 44); /*0x6ea143*/
    HIWORD(v22) = v5[1] / 256; /*0x6ea151*/
    v29 = v22; /*0x6ea15a*/
    v7 = 0; /*0x6ea161*/
    v31 = *(_DWORD *)(v6 + 120); /*0x6ea163*/
    for ( i = 0; i < v31; ++i ) /*0x6ea16d*/
    {
      v8 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 44) + 108) + 4 * v7); /*0x6ea179*/
      if ( v8 && !*(_BYTE *)(v8 + 129) && !*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 1016))(v8, 0) ) /*0x6ea19e*/
      {
        v9 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 72))(v8, v36); /*0x6ea1b0*/
        LOWORD(v23) = *v9 / 256; /*0x6ea1c3*/
        v10 = *(_DWORD *)(this + 52); /*0x6ea1d2*/
        HIWORD(v23) = v9[1] / 256; /*0x6ea1da*/
        v22 = v23; /*0x6ea1e3*/
        v11 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v10 + 72))(v10, v37); /*0x6ea1f5*/
        v12 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 72))(v8, v38); /*0x6ea1fc*/
        v13 = v12[1]; /*0x6ea203*/
        v33 = *v12 - *v11; /*0x6ea208*/
        v14 = v12[2]; /*0x6ea211*/
        v34 = v13 - v11[1]; /*0x6ea214*/
        v35 = v14 - v11[2]; /*0x6ea224*/
        v15 = Math::Sqrt((double)v33 * (double)v33 + (double)v35 * (double)v35 + (double)v34 * (double)v34); /*0x6ea249*/
        v16 = Math::RoundToInt(v15); /*0x6ea256*/
        v17 = v16 * (CellClass::GetTileData((__int16 *)&v22, *(_DWORD *)(this + 44)) + 1); /*0x6ea27a*/
        if ( *(_BYTE *)(*(_DWORD *)(v8 + 1312) + 5801) ) /*0x6ea274*/
          v17 /= 2; /*0x6ea288*/
        if ( v17 < v27 ) /*0x6ea28e*/
        {
          v18 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 52) + 72))( /*0x6ea29e*/
                            *(_DWORD *)(this + 52),
                            v39);
          v19 = *(_DWORD *)(this + 84); /*0x6ea2a3*/
          v26 = v19; /*0x6ea2a6*/
          v25 = -1; /*0x6ea2aa*/
          LOWORD(v24) = *v18 / 256; /*0x6ea2c0*/
          HIWORD(v24) = v18[1] / 256; /*0x6ea2d4*/
          for ( j = v24; v19; v19 = *(_DWORD *)(v19 + 1496) ) /*0x6ea2e3*/
          {
            v20 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v19 + 132))(v19) + 1532); /*0x6ea2ef*/
            if ( *(_BYTE *)(v19 + 144) /*0x6ea337*/
              && *(_DWORD *)(v19 + 108)
              && (g_IKnowWhatImDoing || !*(_BYTE *)(v19 + 129))
              && (*(_BYTE *)(v19 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 44))(v19) == 2)
              && v20 > v25 )
            {
              v26 = v19; /*0x6ea339*/
              v25 = v20; /*0x6ea33d*/
            }
          }
          v21 = *(_DWORD *)WalkPathfindingLine(v32, &j, &v22, 2, 4); /*0x6ea367*/
          v22 = v21; /*0x6ea370*/
          if ( v21 != dword_B0E948 ) /*0x6ea374*/
          {
            v27 = v17; /*0x6ea384*/
            v29 = v21; /*0x6ea388*/
          }
        }
      }
      v7 = i + 1; /*0x6ea394*/
    }
    *(_DWORD *)(this + 64) = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v29); /*0x6ea3b2*/
    TeamClass::UpdateMembers(this); /*0x6ea3b5*/
  }
}



// ==== 0x006EA3E0  TeamClass::UpdateReadinessState  this=TeamClass  sig=csp ====
char __thiscall sub_6EA3E0(void *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  char v6; // al
  int i; // edi
  char v8; // [esp+Fh] [ebp-1h]

  v8 = this->TeamClass_field_7A; /*0x6ea3ec*/
  v2 = TeamClass::SumMemberCounts(*(int **)(this->buildingType + 228)); /*0x6ea3f6*/
  v3 = this->u32_C; /*0x6ea3fb*/
  if ( v3 > 0 ) /*0x6ea404*/
  {
    this->unknown79 = v3 == v2; /*0x6ea40d*/
    if ( v3 == v2 ) /*0x6ea410*/
      this->spawnStatus = 1; /*0x6ea412*/
    v4 = this->buildingType; /*0x6ea416*/
    if ( *(_BYTE *)(v4 + 171) ) /*0x6ea419*/
    {
      if ( v2 <= 2 ) /*0x6ea424*/
        this->TeamClass_field_7A = v3 < v2; /*0x6ea443*/
      else
        this->TeamClass_field_7A = v3 <= v2 / 3; /*0x6ea439*/
    }
    else
    {
      this->TeamClass_field_7A = this->spawnStatus == 0; /*0x6ea44e*/
    }
    if ( *(_BYTE *)(v4 + 167) ) /*0x6ea451*/
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
  v6 = this->spawnStatus; /*0x6ea483*/
  this->unknown76 = 0; /*0x6ea486*/
  this->TeamClass_field_7A = 1; /*0x6ea48b*/
  this->unknown79 = 0; /*0x6ea48f*/
  this->spawnCell = 0; /*0x6ea492*/
  if ( !v6 ) /*0x6ea495*/
  {
LABEL_14:
    if ( v8 != this->TeamClass_field_7A ) /*0x6ea476*/
      this->TeamClass_field_7B = 1; /*0x6ea478*/
    return 1; /*0x6ea482*/
  }
  if ( this->unknown82 ) /*0x6ea497*/
  {
    for ( i = g_ScenarioUpdateState - 1; i >= 0; --i ) /*0x6ea4aa*/
    {
      if ( TeamClass::Update_0(*((void ***)dword_8B40CC + i), 23, 0, dword_B0E948, 0, 0) && !g_ScenarioUpdateState ) /*0x6ea4cf*/
        break; /*0x6ea4cf*/
    }
  }
  if ( this ) /*0x6ea4d6*/
    (*(void (__thiscall **)(void *, int))(this->NeedsSaveOrLink)(this, 1); /*0x6ea4de*/
  return 0; /*0x6ea47c*/
}



// ==== 0x006EA4F0  CaptureManagerClass::AddMember  this=CaptureManagerClass  sig=csp ====
char __thiscall sub_6EA4F0(void *this, int a2)
{
  return TeamClass::AddMember((int)this, a2, 1); /*0x6ea4fc*/
}



// ==== 0x006EA500  TeamClass::AddMember  this=TeamClass  sig=csp ====
char __thiscall TeamClass_AddMember(int this, int a2, char a3)
{
  int v3; // edi
  char result; // al
  char v6; // bl
  int v7; // eax
  int v8; // ecx
  int v9; // edx

  v3 = a2; /*0x6ea503*/
  if ( !a2 ) /*0x6ea50b*/
    return 0; /*0x6ea50f*/
  v6 = a3; /*0x6ea515*/
  result = TeamClass::ValidateMember(a2, &a2, a3); /*0x6ea522*/
  if ( result ) /*0x6ea529*/
  {
    if ( *(_DWORD *)(v3 + 1492) ) /*0x6ea531*/
      TeamClass::LiberateMember_Start(v3, -1, 0); /*0x6ea540*/
    if ( !v6 ) /*0x6ea547*/
      ++*(_DWORD *)(this + 4 * a2 + 136); /*0x6ea54d*/
    *(_BYTE *)(v3 + 1673) = *(_DWORD *)(this + 84) == 0; /*0x6ea55c*/
    *(_DWORD *)(v3 + 1496) = *(_DWORD *)(this + 84); /*0x6ea565*/
    *(_DWORD *)(this + 84) = v3; /*0x6ea56b*/
    *(_DWORD *)(v3 + 1492) = this; /*0x6ea56e*/
    *(_DWORD *)(v3 + 532) = TeamTypeClass::GetGroup(*(_DWORD *)(this + 36)); /*0x6ea57c*/
    if ( *(_DWORD *)(this + 112) /*0x6ea5a8*/
      && (!*(_BYTE *)(*(_DWORD *)(this + 36) + 179)
       || *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 132))(v3) + 1504) > 0) )
    {
      ObjectClass::SetReference((_DWORD *)v3, *(_DWORD *)(this + 112)); /*0x6ea5b0*/
    }
    ++*(_DWORD *)(this + 72); /*0x6ea5bb*/
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 704))(v3); /*0x6ea5c0*/
    v8 = *(_DWORD *)(this + 52); /*0x6ea5c9*/
    *(_DWORD *)(this + 76) += v7; /*0x6ea5d3*/
    if ( !v8 ) /*0x6ea5d6*/
      TeamClass::FindClosestEnemy(this + 52, this + 56); /*0x6ea5df*/
    v9 = *(_DWORD *)(this + 36); /*0x6ea5e4*/
    *(_BYTE *)(this + 126) = 1; /*0x6ea5e9*/
    *(_BYTE *)(this + 125) = 1; /*0x6ea5ec*/
    *(_BYTE *)(v3 + 1058) = *(_BYTE *)(v9 + 245); /*0x6ea5f5*/
    return 1; /*0x6ea5e7*/
  }
  return result; /*0x6ea50d*/
}



// ==== 0x006EA610  TeamClass::ValidateMember  this=TeamClass  sig=csp ====
bool __thiscall TeamClass_ValidateMember(_DWORD *this, int a2, int *a3, char a4)
{
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  bool v8; // bl
  int v9; // eax
  int v11; // [esp+10h] [ebp-8h] BYREF

  if ( this == *(_DWORD **)(a2 + 1492) /*0x6ea693*/
    || !a2
    || !*(_BYTE *)(a2 + 144)
    || !*(_DWORD *)(a2 + 108)
    || !g_IKnowWhatImDoing && *(_BYTE *)(a2 + 129)
    || *(_DWORD *)(a2 + 540) != this->owner
    || Team::AllMembersValid((int *)a2)
    && ((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) != 2 || !*(_BYTE *)(*(_DWORD *)(a2 + 1732) + 3597)) )
  {
    return 0; /*0x6ea693*/
  }
  *a3 = 0; /*0x6ea6a5*/
  if ( *(int *)(*(_DWORD *)(this->buildingType + 228) + 156) > 0 ) /*0x6ea6bc*/
  {
    do /*0x6ea6f0*/
    {
      v5 = *a3; /*0x6ea6c0*/
      if ( *(_DWORD *)(*(_DWORD *)(this->buildingType + 228) + 8 * v5 + 168) == (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 136))(a2) ) /*0x6ea6da*/
        break; /*0x6ea6da*/
      *a3 = v5 + 1; /*0x6ea6df*/
    }
    while ( v5 + 1 < *(_DWORD *)(*(_DWORD *)(this->buildingType + 228) + 156) ); /*0x6ea6f0*/
  }
  if ( *a3 == *(_DWORD *)(*(_DWORD *)(this->buildingType + 228) + 156) && !a4 ) /*0x6ea70b*/
    return 0; /*0x6ea70b*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 388))(a2) != -1 ) /*0x6ea71e*/
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 388))(a2); /*0x6ea724*/
    if ( !(unsigned __int8)IPersistStream::SetField(v6) ) /*0x6ea72c*/
      return 0; /*0x6ea72c*/
  }
  if ( !*(_BYTE *)(a2 + 1057) && !*(_BYTE *)(this->buildingType + 169) ) /*0x6ea746*/
    return 0; /*0x6ea746*/
  v7 = (_DWORD *)this->currentScript; /*0x6ea754*/
  v8 = 0; /*0x6ea757*/
  if ( v7 ) /*0x6ea75b*/
    v8 = *SessionClass::GetEntry(v7, &v11) == 8; /*0x6ea76c*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 2 ) /*0x6ea778*/
    v8 = 1; /*0x6ea77a*/
  return (*(_BYTE *)(a2 + 1058) || !*(_BYTE *)(this->buildingType + 169) || v8) /*0x6ea84c*/
      && !(unsigned __int8)TeamClass::HasAnyMemberFlagged(a2)
      && !(unsigned __int8)FootClass::checkPassability(a2)
      && !*(_DWORD *)(a2 + 740)
      && ((v9 = *(_DWORD *)(a2 + 1492)) == 0 || *(_DWORD *)(*(_DWORD *)(v9 + 36) + 180) < *(_DWORD *)(this->buildingType + 180))
      && ((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) != 2
       || !*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 1016))(a2, 0)
       || *(_DWORD *)(a2 + 764))
      && (*(this + *a3 + 34) < *(_DWORD *)(*(_DWORD *)(this->buildingType + 228) + 8 * *a3 + 164) || a4)
      && !*(_DWORD *)(a2 + 740)
      && *(_DWORD *)(a2 + 688) == 0;
}



// ==== 0x006EA870  TeamClass::LiberateMember_Start  this=TeamClass  sig=csp ====
char __thiscall TeamClass::LiberateMember_Start(int this, int a2, unsigned int a3, char a4)
{
  int v5; // eax
  #375 *v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // esi
  char v15; // cl
  int v16; // eax
  char v17; // dl
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // [esp+8h] [ebp-4h]
  char v22; // [esp+14h] [ebp+8h]

  v5 = *(_DWORD *)(a2 + 1492); /*0x6ea879*/
  *(_BYTE *)(a2 + 1720) = 1; /*0x6ea87f*/
  if ( this != v5 ) /*0x6ea888*/
    return 1; /*0x6ea88b*/
  if ( *(_DWORD *)(a2 + 52) == *(_DWORD *)(this + 112) ) /*0x6ea89b*/
  {
    v7 = *(#375 **)(a2 + 540); /*0x6ea89d*/
    if ( v7 ) /*0x6ea8a7*/
    {
      if ( !(unsigned __int8)House::IsCurrentPlayer(v7) ) /*0x6ea8a9*/
        ObjectClass::SetReference((_DWORD *)a2, 0); /*0x6ea8b5*/
    }
  }
  if ( a3 == -1 ) /*0x6ea8c6*/
  {
    v8 = *(_DWORD *)(this + 36); /*0x6ea8c8*/
    if ( v8 ) /*0x6ea8cd*/
    {
      v9 = *(_DWORD *)(v8 + 228); /*0x6ea8cf*/
      if ( v9 ) /*0x6ea8d7*/
      {
        a3 = 0; /*0x6ea8df*/
        if ( *(int *)(v9 + 156) > 0 ) /*0x6ea8e5*/
        {
          v10 = 168; /*0x6ea8e7*/
          do /*0x6ea919*/
          {
            v11 = *(_DWORD *)(*(_DWORD *)(this + 36) + 228); /*0x6ea8f2*/
            if ( *(_DWORD *)(v10 + v11) == (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 136))(a2) ) /*0x6ea903*/
              break; /*0x6ea903*/
            v10 += 8; /*0x6ea910*/
            ++a3; /*0x6ea915*/
          }
          while ( (signed int)a3 < *(_DWORD *)(v11 + 156) ); /*0x6ea919*/
        }
      }
    }
  }
  v12 = *(_DWORD *)(this + 36); /*0x6ea91d*/
  if ( v12 ) /*0x6ea922*/
  {
    v13 = *(_DWORD *)(v12 + 228); /*0x6ea924*/
    if ( v13 ) /*0x6ea92c*/
    {
      if ( a3 < *(_DWORD *)(v13 + 156) ) /*0x6ea93a*/
        --*(_DWORD *)(this + 4 * a3 + 136); /*0x6ea93c*/
    }
  }
  v14 = *(_DWORD *)(this + 84); /*0x6ea943*/
  v15 = 0; /*0x6ea946*/
  v16 = 0; /*0x6ea948*/
  v17 = 0; /*0x6ea94a*/
  v22 = 0; /*0x6ea94e*/
  v21 = 0; /*0x6ea952*/
  if ( v14 ) /*0x6ea956*/
  {
    while ( !v17 || !v15 ) /*0x6ea96c*/
    {
      if ( v14 == a2 ) /*0x6ea974*/
      {
        if ( v16 ) /*0x6ea978*/
          *(_DWORD *)(v16 + 1496) = *(_DWORD *)(v14 + 1496); /*0x6ea980*/
        else
          *(_DWORD *)(this + 84) = *(_DWORD *)(v14 + 1496); /*0x6ea98e*/
        v18 = *(_DWORD *)(v14 + 1496); /*0x6ea991*/
        *(_DWORD *)(v14 + 1496) = 0; /*0x6ea997*/
        *(_DWORD *)(v14 + 1492) = 0; /*0x6ea99d*/
        *(_DWORD *)(v14 + 176) = -1; /*0x6ea9a3*/
        *(_DWORD *)(v14 + 1448) = 0; /*0x6ea9ad*/
        *(_DWORD *)(v14 + 696) = 0; /*0x6ea9b3*/
        v14 = v18; /*0x6ea9bc*/
        --*(_DWORD *)(this + 72); /*0x6ea9c1*/
        v19 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 704))(a2); /*0x6ea9cc*/
        v17 = 1; /*0x6ea9d5*/
        *(_DWORD *)(this + 76) -= v19; /*0x6ea9db*/
      }
      else
      {
        if ( v15 || (v22 = 0, *(_BYTE *)(v14 + 1673)) ) /*0x6ea9e4*/
          v22 = 1; /*0x6ea9f2*/
        v21 = v14; /*0x6ea9f7*/
        v14 = *(_DWORD *)(v14 + 1496); /*0x6ea9fb*/
      }
      if ( !v14 ) /*0x6eaa03*/
      {
        v15 = v22; /*0x6eaa09*/
        break; /*0x6eaa09*/
      }
      v16 = v21; /*0x6ea95e*/
      v15 = v22; /*0x6ea962*/
    }
  }
  if ( *(_DWORD *)(a2 + 1492) ) /*0x6eaa0d*/
    *(_DWORD *)(a2 + 1492) = 0; /*0x6eaa18*/
  if ( !g_IKnowWhatImDoing && *(_BYTE *)(a2 + 144) && !*(_BYTE *)(a2 + 1061) && !*(_BYTE *)(a2 + 129) && !a4 ) /*0x6eaa4a*/
  {
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a2 + 1156))(a2, 0, 1); /*0x6eaa54*/
    v15 = v22; /*0x6eaa5a*/
  }
  if ( !v15 ) /*0x6eaa60*/
  {
    v20 = *(_DWORD *)(this + 84); /*0x6eaa62*/
    if ( v20 ) /*0x6eaa67*/
    {
      *(_BYTE *)(v20 + 1673) = 1; /*0x6eaa69*/
      *(_DWORD *)(this + 52) = 0; /*0x6eaa70*/
    }
  }
  *(_BYTE *)(this + 126) = 1; /*0x6eaa73*/
  *(_BYTE *)(this + 125) = 1; /*0x6eaa77*/
  return 1; /*0x6ea88a*/
}



// ==== 0x006EAA90  TeamClass::RecruitMember  this=TeamClass  sig=csp ====
int __thiscall TeamClass_RecruitMember(_DWORD *this, int a2)
{
  int v2; // edi
  _DWORD *v3; // ebx
  int v4; // ecx
  int *v5; // eax
  _DWORD *v6; // ecx
  _DWORD *WaypointCoords; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // ebp
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // eax
  int v16; // edi
  int v18; // ebp
  int v19; // eax
  _DWORD *v20; // esi
  int v21; // eax
  int v22; // edi
  int v23; // eax
  _DWORD *v24; // esi
  int v25; // eax
  int v26; // edi
  int DB; // esi
  int v29; // [esp+14h] [ebp-28h]
  int v30; // [esp+18h] [ebp-24h]
  int v31; // [esp+1Ch] [ebp-20h]
  int v32; // [esp+1Ch] [ebp-20h]
  int v33; // [esp+1Ch] [ebp-20h]
  int v34; // [esp+20h] [ebp-1Ch] BYREF
  int v35; // [esp+24h] [ebp-18h] BYREF
  int v36; // [esp+28h] [ebp-14h]
  int v37; // [esp+2Ch] [ebp-10h]
  _BYTE v38[12]; // [esp+30h] [ebp-Ch] BYREF

  v2 = (int)this; /*0x6eaa97*/
  v3 = 0; /*0x6eaa99*/
  v4 = this->spawnCell; /*0x6eaa9f*/
  if ( v4 ) /*0x6eaaa4*/
    v5 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v38); /*0x6eaaad*/
  else
    v5 = &dword_B0E968; /*0x6eaab2*/
  v35 = *v5; /*0x6eaab9*/
  v36 = v5[1]; /*0x6eaac4*/
  v6 = *(_DWORD **)(v2 + 36); /*0x6eaacc*/
  v37 = v5[2]; /*0x6eaacf*/
  if ( *TechnoClass::GetWaypointCoords(v6, &v34) != dword_B0E948 ) /*0x6eaae2*/
  {
    WaypointCoords = TechnoClass::GetWaypointCoords(*(_DWORD **)(v2 + 36), &v34); /*0x6eaaf9*/
    v8 = (*(__int16 *)WaypointCoords << 8) + 128; /*0x6eab0b*/
    v9 = (*((__int16 *)WaypointCoords + 1) << 8) + 128; /*0x6eab11*/
    v35 = v8; /*0x6eab18*/
    v36 = v9; /*0x6eab1c*/
    v37 = 0; /*0x6eab20*/
  }
  v10 = *(_DWORD *)(v2 + 36); /*0x6eab24*/
  v30 = 0; /*0x6eab2b*/
  if ( *(_DWORD *)(*(_DWORD *)(v10 + 228) + 8 * a2 + 164) <= *(_DWORD *)(v2 + 4 * a2 + 136) ) /*0x6eab45*/
    return v30; /*0x6eae19*/
  v29 = TeamTypeClass::GetGroup(v10); /*0x6eab54*/
  v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 36) + 228) + 8 * a2 + 168); /*0x6eab61*/
  switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) ) /*0x6eab7f*/
  {
    case 1: /*0x6eab7f*/
    case 40: /*0x6eab7f*/
      v23 = 0; /*0x6ead07*/
      v33 = -1; /*0x6ead0b*/
      v34 = 0; /*0x6ead13*/
      if ( g_HouseClass_BuildState > 0 ) /*0x6ead17*/
      {
        do /*0x6eadc8*/
        {
          v24 = (_DWORD *)*((_DWORD *)g_UnitClassPool + v23); /*0x6ead23*/
          if ( v29 == -2 || v24[133] == v29 || *(_BYTE *)(*(_DWORD *)(v2 + 36) + 168) ) /*0x6ead3a*/
          {
            v25 = Math::DistSq2D(v24, &v35); /*0x6ead4b*/
            v26 = v25; /*0x6ead54*/
            if ( v24[133] != v29 ) /*0x6ead5c*/
              v26 = v25 + 12800; /*0x6ead5e*/
            if ( v24[135] == this->owner /*0x6eada4*/
              && v24[433] == *(_DWORD *)(*(_DWORD *)(this->buildingType + 228) + 8 * a2 + 168)
              && (v26 < v33 || v33 == -1)
              && TeamClass::ValidateMember(this, (int)v24, &a2, 0) )
            {
              v3 = v24; /*0x6eadad*/
              v33 = v26; /*0x6eadaf*/
            }
            v2 = (int)this; /*0x6eadb3*/
          }
          v23 = ++v34; /*0x6eadc1*/
        }
        while ( v34 < g_HouseClass_BuildState ); /*0x6eadc8*/
        if ( v3 ) /*0x6eadd0*/
        {
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*v3 + 968))(v3, 0); /*0x6eadd8*/
          TeamClass::AddMember(v2, (int)v3, 0); /*0x6eade3*/
          v30 = 1; /*0x6eadee*/
          DB = CCINIClass::GetDB(v3 + 69); /*0x6eadfb*/
          if ( DB ) /*0x6eadff*/
          {
            do /*0x6eae17*/
            {
              TeamClass::AddMember(v2, DB, 0); /*0x6eae08*/
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
      if ( g_AircraftClassCount <= 0 ) /*0x6eac62*/
        return v30; /*0x6eac62*/
      do /*0x6eace6*/
      {
        v20 = (_DWORD *)*((_DWORD *)dword_A8E394 + v19); /*0x6eac6e*/
        if ( v29 == -2 || v20[133] == v29 || *(_BYTE *)(*(_DWORD *)(v2 + 36) + 168) ) /*0x6eac85*/
        {
          v21 = Math::DistSq2D(v20, &v35); /*0x6eac96*/
          v22 = v21; /*0x6eac9f*/
          if ( v20[133] != v29 ) /*0x6eaca7*/
            v22 = v21 + 12800; /*0x6eaca9*/
          if ( (v22 < v18 || v18 == -1) && TeamClass::ValidateMember(this, (int)v20, &a2, 0) ) /*0x6eacc4*/
          {
            v3 = v20; /*0x6eaccd*/
            v18 = v22; /*0x6eaccf*/
          }
          v2 = (int)this; /*0x6eacd1*/
        }
        v19 = ++v32; /*0x6eacdf*/
      }
      while ( v32 < g_AircraftClassCount ); /*0x6eace6*/
      if ( !v3 ) /*0x6eacea*/
        return v30; /*0x6eacea*/
      break; /*0x6eacea*/
    case 15: /*0x6eab7f*/
    case 16: /*0x6eab7f*/
      v12 = -1; /*0x6eab8c*/
      v13 = 0; /*0x6eab8f*/
      v31 = 0; /*0x6eab93*/
      if ( g_BuildingClass_Count <= 0 ) /*0x6eab97*/
        return v30; /*0x6eab97*/
      do /*0x6eac1b*/
      {
        v14 = (_DWORD *)*((_DWORD *)g_InfantryClassLimit + v13); /*0x6eaba3*/
        if ( v29 == -2 || v14[133] == v29 || *(_BYTE *)(*(_DWORD *)(v2 + 36) + 168) ) /*0x6eabba*/
        {
          v15 = Math::DistSq2D(v14, &v35); /*0x6eabcb*/
          v16 = v15; /*0x6eabd4*/
          if ( v14[133] != v29 ) /*0x6eabdc*/
            v16 = v15 + 12800; /*0x6eabde*/
          if ( (v16 < v12 || v12 == -1) && TeamClass::ValidateMember(this, (int)v14, &a2, 0) ) /*0x6eabf9*/
          {
            v3 = v14; /*0x6eac02*/
            v12 = v16; /*0x6eac04*/
          }
          v2 = (int)this; /*0x6eac06*/
        }
        v13 = ++v31; /*0x6eac14*/
      }
      while ( v31 < g_BuildingClass_Count ); /*0x6eac1b*/
      if ( !v3 ) /*0x6eac1f*/
        return v30; /*0x6eac1f*/
      break; /*0x6eac1f*/
    default:
      return v30;
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v3 + 968))(v3, 0); /*0x6eac2b*/
  TeamClass::AddMember(v2, (int)v3, 0); /*0x6eac36*/
  return 1; /*0x6eac3b*/
}



// ==== 0x006EAE60  TeamClass::ExecuteAction  this=TeamClass  sig=csp ====
int __thiscall TeamClass::_vt10(_DWORD *this, int a2, char a3)
{
  int result; // eax
  int v4; // edx

  result = a2; /*0x6eae60*/
  if ( a2 == this->tag ) /*0x6eae6c*/
    this->tag = 0; /*0x6eae6e*/
  v4 = this->firstUnit; /*0x6eae71*/
  if ( a2 == v4 && a3 ) /*0x6eae7c*/
    this->firstUnit = *(_DWORD *)(v4 + 1496); /*0x6eae84*/
  if ( a2 == this->owner ) /*0x6eae8a*/
    this->owner = 0; /*0x6eae8c*/
  if ( a2 == this->currentScript ) /*0x6eae92*/
    this->currentScript = 0; /*0x6eae94*/
  if ( this->focus == a2 ) /*0x6eae9a*/
    this->focus = 0; /*0x6eae9c*/
  if ( this->queuedFocus == a2 ) /*0x6eaea2*/
    this->queuedFocus = 0; /*0x6eaea4*/
  if ( this->spawnCell == a2 ) /*0x6eaeaa*/
    this->spawnCell = 0; /*0x6eaeac*/
  if ( this->buildingType == a2 ) /*0x6eaeb2*/
    this->buildingType = 0; /*0x6eaeb4*/
  if ( this->unknown38 == a2 ) /*0x6eaeba*/
    this->unknown38 = 0; /*0x6eaebc*/
  if ( this->unknown44 == a2 ) /*0x6eaec2*/
    this->unknown44 = 0; /*0x6eaec4*/
  if ( this->target == a2 ) /*0x6eaeca*/
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
      if ( g_HouseClass_BuildState > 0 ) /*0x6eaf33*/
      {
        do /*0x6eb012*/
        {
          v10 = (char *)*((_DWORD *)g_UnitClassPool + v9); /*0x6eaf3f*/
          if ( v10 && v10[144] && *((_DWORD *)v10 + 27) && (g_IKnowWhatImDoing || !v10[129]) ) /*0x6eaf6c*/
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
        while ( v31 < g_HouseClass_BuildState ); /*0x6eb012*/
        v4 = this; /*0x6eb018*/
        v7 = v34; /*0x6eb01c*/
      }
      v3 = 0; /*0x6eb026*/
      v32 = 0; /*0x6eb02a*/
      if ( g_BuildingClass_Count > 0 ) /*0x6eb02e*/
      {
        do /*0x6eb141*/
        {
          v15 = (char *)*((_DWORD *)g_InfantryClassLimit + v3); /*0x6eb03a*/
          if ( v15 && v15[144] && *((_DWORD *)v15 + 27) && (g_IKnowWhatImDoing || !v15[129]) ) /*0x6eb067*/
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
        while ( v32 < g_BuildingClass_Count ); /*0x6eb141*/
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
          v36 = *(_DWORD *)(*((_DWORD *)g_PathClass_State + v21) + 40); /*0x6eb175*/
          *a2 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v36); /*0x6eb188*/
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
            if ( g_IKnowWhatImDoing || (LOBYTE(v3) = *(_BYTE *)(v6 + 129), !(_BYTE)v3) ) /*0x6eb1f7*/
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
        v28 = Coord::To_Cell(&MapClass_Instance, &v36); /*0x6eb331*/
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
void __thiscall sub_6EB380(int this, int a2, int a3, _DWORD *a4)
{
  int v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
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
      v6 = *(_DWORD **)(this + 84); /*0x6eb3d3*/
      if ( v6 ) /*0x6eb3d7*/
      {
        while ( v6 != a4 ) /*0x6eb3db*/
        {
          v6 = (_DWORD *)v6[374]; /*0x6eb3e1*/
          if ( !v6 ) /*0x6eb3e9*/
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
              v7 = *(_DWORD **)(this + 64); /*0x6eb40f*/
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
                  (*(void (__thiscall **)(_DWORD *))(*a4 + 44))(a4); /*0x6eb477*/
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



// ==== 0x006EB490  TeamClass::AttackCoordinator  this=AbstractClass  sig=csp ====
char __thiscall sub_6EB490(int *this)
{
  int *v1; // edi
  _DWORD *v2; // esi
  int v3; // ebp
  _DWORD *v4; // ebx
  int v5; // edi
  int v6; // ecx
  int v7; // edi
  _DWORD *v8; // esi
  int v9; // esi
  int v10; // eax
  _DWORD *Entry; // eax
  int v12; // esi
  char v13; // bl
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v19; // [esp+14h] [ebp-10h] BYREF
  int v20; // [esp+18h] [ebp-Ch]
  _DWORD v21[2]; // [esp+1Ch] [ebp-8h] BYREF

  v1 = this; /*0x6eb497*/
  if ( !this->uniqueId ) /*0x6eb49d*/
    this->uniqueId = this->q03C; /*0x6eb4a7*/
  v2 = (_DWORD *)this->u8_15; /*0x6eb4aa*/
  v3 = -1; /*0x6eb4ad*/
  v4 = v2; /*0x6eb4b2*/
  if ( v2 ) /*0x6eb4b4*/
  {
    do /*0x6eb514*/
    {
      v5 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v2 + 132))(v2) + 1532); /*0x6eb4c0*/
      if ( *((_BYTE *)v2 + 144) /*0x6eb506*/
        && v2[27]
        && (g_IKnowWhatImDoing || !*((_BYTE *)v2 + 129))
        && (*((_BYTE *)v2 + 1673) || (*(int (__thiscall **)(_DWORD *))(*v2 + 44))(v2) == 2)
        && v5 > v3 )
      {
        v4 = v2; /*0x6eb508*/
        v3 = v5; /*0x6eb50a*/
      }
      v2 = (_DWORD *)v2[374]; /*0x6eb50c*/
    }
    while ( v2 ); /*0x6eb514*/
    v1 = this; /*0x6eb516*/
  }
  v6 = v1[16]; /*0x6eb51a*/
  if ( v6
    && (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6) == 11
    && v1[21]
    && (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 2 )
  {
    v7 = v1[16]; /*0x6eb53e*/
    if ( v7 )
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 44))(v7) == 11 ? (_DWORD *)v7 : 0;
    else
      v8 = 0; /*0x6eb547*/
    v19 = 0; /*0x6eb567*/
    v20 = 0; /*0x6eb56b*/
    if ( Object::FindObjectCell(v8, &v19, 0) ) /*0x6eb56f*/
    {
      v19 = 0; /*0x6eb582*/
      v20 = 0; /*0x6eb586*/
      this->uniqueId = Object::FindObjectCell(v8, &v19, 0); /*0x6eb593*/
    }
    v1 = this; /*0x6eb596*/
  }
  if ( (int)g_CurrentFrame % 8 == 4 ) /*0x6eb5ae*/
  {
    v9 = *v4; /*0x6eb5b3*/
    v10 = (*(int (__thiscall **)(_DWORD *, int, int))(*v4 + 740))(v4, v1[16], 1); /*0x6eb5ba*/
    if ( (*(int (__thiscall **)(_DWORD *, int, int))(v9 + 960))(v4, v1[16], v10) == 5 ) /*0x6eb5d0*/
      *((_BYTE *)v1 + 129) = 1; /*0x6eb5d2*/
  }
  Entry = (_DWORD *)v1[16]; /*0x6eb5d9*/
  if ( !Entry /*0x6eb605*/
    || (Entry = SessionClass::GetEntry((_DWORD *)v1[10], v21), v12 = v1[21], v13 = 0, v19 = *Entry, v20 = Entry[1], !v12) )
  {
LABEL_72:
    *((_BYTE *)v1 + 128) = 1; /*0x6eb85b*/
    return (char)Entry; /*0x6eb85b*/
  }
  do /*0x6eb851*/
  {
    if ( !*(_BYTE *)(v12 + 144) ) /*0x6eb60b*/
      goto LABEL_67; /*0x6eb60b*/
    if ( *(_DWORD *)(v12 + 108) && (g_IKnowWhatImDoing || !*(_BYTE *)(v12 + 129)) && !*(_BYTE *)(v12 + 1673) ) /*0x6eb63b*/
    {
      v14 = *SessionClass::GetEntry((_DWORD *)v1[10], v21); /*0x6eb656*/
      if ( v14 == 54 || v14 == 53 ) /*0x6eb660*/
        v15 = *((_DWORD *)g_RulesClass_Instance + 1480); /*0x6eb676*/
      else
        v15 = *((_DWORD *)g_RulesClass_Instance + 1479); /*0x6eb668*/
      if ( ObjectClass::DistanceTo((void *)v12, this->q034) <= v15 ) /*0x6eb68d*/
      {
        *(_BYTE *)(v12 + 1673) = 1; /*0x6eb6c5*/
      }
      else if ( !*(_DWORD *)(v12 + 1444) ) /*0x6eb68f*/
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 488))(v12, 2, 0); /*0x6eb6a1*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 968))(v12, 0); /*0x6eb6ad*/
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v12 + 1152))(v12, this->q034, 1); /*0x6eb6bd*/
      }
      v1 = this; /*0x6eb6cc*/
    }
    if ( *(_BYTE *)(v12 + 144) /*0x6eb714*/
      && *(_DWORD *)(v12 + 108)
      && (g_IKnowWhatImDoing || !*(_BYTE *)(v12 + 129))
      && (*(_BYTE *)(v12 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12) == 2) )
    {
      if ( v19 == 15 /*0x6eb733*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12) == 15
        && *(_BYTE *)(*(_DWORD *)(v12 + 1728) + 3774) )
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 488))(v12, 8, 0); /*0x6eb745*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 968))(v12, v1[16]); /*0x6eb753*/
      }
      else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 1 /*0x6eb7ad*/
             && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 7
             && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 8
             && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 17
             && ((*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 16
              || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 1252))(v12)) )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 628))(v12, 3); /*0x6eb7bd*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 488))(v12, 1, 0); /*0x6eb7cb*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 968))(v12, 0); /*0x6eb7d7*/
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v12 + 1152))(v12, 0, 1); /*0x6eb7e5*/
      }
      v16 = *(_DWORD *)(v12 + 692); /*0x6eb7eb*/
      if ( v16 != v1[16] && !v16 ) /*0x6eb7fa*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 968))(v12, v1[16]); /*0x6eb801*/
      Entry = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12); /*0x6eb80b*/
      if ( Entry != (_DWORD *)2 /*0x6eb82c*/
        || (Entry = (_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 1016))(v12, 0), !*Entry)
        || (Entry = *(_DWORD **)(v12 + 764), (int)Entry > 0) )
      {
LABEL_69:
        v13 = 1; /*0x6eb847*/
      }
    }
    else
    {
LABEL_67:
      Entry = (_DWORD *)v1[9]; /*0x6eb830*/
      if ( *((_BYTE *)Entry + 176) ) /*0x6eb833*/
      {
        LOBYTE(Entry) = *(_BYTE *)(v12 + 129); /*0x6eb83d*/
        if ( (_BYTE)Entry ) /*0x6eb845*/
          goto LABEL_69; /*0x6eb845*/
      }
    }
    v12 = *(_DWORD *)(v12 + 1496); /*0x6eb849*/
  }
  while ( v12 ); /*0x6eb851*/
  if ( !v13 ) /*0x6eb859*/
    goto LABEL_72; /*0x6eb859*/
  return (char)Entry; /*0x6eb862*/
}



// ==== 0x006EB870  HouseClass::EvaluateTarget  this=HouseClass  sig=csp ====
char __thiscall HouseClass_EvaluateTarget(int this)
{
  char v2; // bl
  int *v3; // esi
  int v4; // eax
  int v5; // ebp
  int v6; // eax
  int v7; // ebp
  _DWORD *v8; // eax
  int *v9; // eax
  int v10; // ebp
  void *v11; // eax
  int v13; // [esp+Ch] [ebp-2Ch]
  int v14; // [esp+10h] [ebp-28h] BYREF
  int v15; // [esp+14h] [ebp-24h] BYREF
  _BYTE v16[4]; // [esp+18h] [ebp-20h] BYREF
  int v17; // [esp+1Ch] [ebp-1Ch] BYREF
  int v18; // [esp+24h] [ebp-14h] BYREF
  _BYTE v19[12]; // [esp+2Ch] [ebp-Ch] BYREF

  v2 = 1; /*0x6eb878*/
  v3 = *(int **)(this + 84); /*0x6eb87a*/
  if ( !v3 ) /*0x6eb87f*/
    goto LABEL_34; /*0x6eb87f*/
  do /*0x6ebab6*/
  {
    if ( *((_BYTE *)v3 + 144) ) /*0x6eb88c*/
    {
      if ( v3[27] && (g_IKnowWhatImDoing || !*((_BYTE *)v3 + 129)) && !*((_BYTE *)v3 + 1673) ) /*0x6eb8bc*/
      {
        v4 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v17); /*0x6eb8d3*/
        if ( v4 == 54 || v4 == 53 ) /*0x6eb8dd*/
          v5 = *((_DWORD *)g_RulesClass_Instance + 1480); /*0x6eb8f3*/
        else
          v5 = *((_DWORD *)g_RulesClass_Instance + 1479); /*0x6eb8e5*/
        if ( ObjectClass::DistanceTo(v3, *(_DWORD *)(this + 52)) <= v5 ) /*0x6eb906*/
        {
          *((_BYTE *)v3 + 1673) = 1; /*0x6eb93e*/
        }
        else if ( !v3[361] ) /*0x6eb908*/
        {
          (*(void (__thiscall **)(int *, int, _DWORD))(*v3 + 488))(v3, 2, 0); /*0x6eb91a*/
          (*(void (__thiscall **)(int *, _DWORD))(*v3 + 968))(v3, 0); /*0x6eb926*/
          (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1152))(v3, *(_DWORD *)(this + 52), 1); /*0x6eb936*/
        }
      }
      if ( *((_BYTE *)v3 + 144) /*0x6eb989*/
        && v3[27]
        && (g_IKnowWhatImDoing || !*((_BYTE *)v3 + 129))
        && (*((_BYTE *)v3 + 1673) || (*(int (__thiscall **)(int *))(*v3 + 44))(v3) == 2) )
      {
        v6 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v18); /*0x6eb99c*/
        if ( v6 == 54 || v6 == 53 ) /*0x6eb9a6*/
          v7 = *((_DWORD *)g_RulesClass_Instance + 1480); /*0x6eb9bc*/
        else
          v7 = *((_DWORD *)g_RulesClass_Instance + 1479); /*0x6eb9ae*/
        if ( ObjectClass::DistanceTo(v3, *(_DWORD *)(this + 52)) <= v7 /*0x6eb9e4*/
          || (*(int (__thiscall **)(int *))(*v3 + 388))(v3) == 11 && v3[173] )
        {
          if ( (*(int (__thiscall **)(int *))(*v3 + 388))(v3) != 11 ) /*0x6eba90*/
          {
            (*(void (__thiscall **)(int *, int, _DWORD))(*v3 + 488))(v3, 5, 0); /*0x6eba9a*/
            (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1152))(v3, 0, 1); /*0x6ebaa8*/
          }
        }
        else if ( !v3[361] ) /*0x6eb9f2*/
        {
          v2 = 0; /*0x6eba08*/
          (*(void (__thiscall **)(int *, int, _DWORD))(*v3 + 488))(v3, 2, 0); /*0x6eba0a*/
          v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 52) + 72))( /*0x6eba1a*/
                           *(_DWORD *)(this + 52),
                           v19);
          LOWORD(v13) = *v8 / 256; /*0x6eba2d*/
          HIWORD(v13) = v8[1] / 256; /*0x6eba45*/
          v14 = v13; /*0x6eba52*/
          v9 = (int *)globalHelper_0DA020(v16, &v14); /*0x6eba5a*/
          v10 = *v3; /*0x6eba61*/
          v15 = *v9; /*0x6eba67*/
          v11 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v15); /*0x6eba73*/
          (*(void (__thiscall **)(int *, void *, int))(v10 + 1152))(v3, v11, 1); /*0x6eba7b*/
        }
      }
    }
    v3 = (int *)v3[374]; /*0x6ebaae*/
  }
  while ( v3 ); /*0x6ebab6*/
  if ( v2 == 1 ) /*0x6ebac0*/
LABEL_34:
    *(_BYTE *)(this + 117) = 0; /*0x6ebac2*/
  return v2; /*0x6ebac6*/
}



// ==== 0x006EBAD0  TeamClass::UpdateMembers  this=TeamClass  sig=csp ====
void __thiscall TeamClass_UpdateMembers(int this)
{
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // edi
  bool v9; // bl
  bool v10; // al
  char v11; // [esp+30h] [ebp-36h]
  char v12; // [esp+31h] [ebp-35h]
  int v13; // [esp+32h] [ebp-34h]
  int v14; // [esp+36h] [ebp-30h]
  int v15; // [esp+3Ah] [ebp-2Ch] BYREF
  int v16; // [esp+42h] [ebp-24h] BYREF
  _BYTE v17[8]; // [esp+4Ah] [ebp-1Ch] BYREF
  _BYTE v18[8]; // [esp+52h] [ebp-14h] BYREF
  _BYTE v19[12]; // [esp+5Ah] [ebp-Ch] BYREF

  v11 = 1; /*0x6ebad7*/
  v2 = *(_DWORD *)(this + 84); /*0x6ebadc*/
  v12 = 0; /*0x6ebadf*/
  if ( v2 ) /*0x6ebae6*/
  {
    if ( *(_DWORD *)(this + 64) || (v3 = *(_DWORD *)(this + 60), (*(_DWORD *)(this + 64) = v3) != 0) ) /*0x6ebafb*/
    {
      if ( !(unsigned __int8)TeamClass::ProcessMemberPositions(this) ) /*0x6ebb03*/
      {
        while ( 1 ) /*0x6ebb1a*/
        {
          if ( *(_BYTE *)(v2 + 144) /*0x6ebb4a*/
            && *(_DWORD *)(v2 + 108)
            && (g_IKnowWhatImDoing || !*(_BYTE *)(v2 + 129))
            && !*(_BYTE *)(v2 + 1673) )
          {
            v4 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v15); /*0x6ebb61*/
            if ( v4 == 54 || v4 == 53 ) /*0x6ebb6b*/
              v5 = *((_DWORD *)g_RulesClass_Instance + 1480); /*0x6ebb80*/
            else
              v5 = *((_DWORD *)g_RulesClass_Instance + 1479); /*0x6ebb73*/
            if ( ObjectClass::DistanceTo((void *)v2, *(_DWORD *)(this + 52)) <= v5 ) /*0x6ebb93*/
            {
              *(_BYTE *)(v2 + 1673) = 1; /*0x6ebc8d*/
            }
            else
            {
              if ( !*(_DWORD *)(v2 + 1444) ) /*0x6ebb99*/
              {
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v2 + 488))(v2, 2, 0); /*0x6ebbab*/
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 968))(v2, 0); /*0x6ebbb7*/
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 1152))(v2, *(_DWORD *)(this + 52), 1); /*0x6ebbc7*/
              }
              v11 = 0; /*0x6ebbcd*/
            }
          }
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 388))(v2) == 16 || *(_DWORD *)(v2 + 180) == 16 ) /*0x6ebbeb*/
            v11 = 0; /*0x6ebbed*/
          if ( !*(_BYTE *)(v2 + 144) /*0x6ebc5c*/
            || !*(_DWORD *)(v2 + 108)
            || !g_IKnowWhatImDoing && *(_BYTE *)(v2 + 129)
            || !*(_BYTE *)(v2 + 1673) && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) != 2
            || (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 388))(v2) == 16
            || *(_DWORD *)(v2 + 180) == 16 )
          {
            goto LABEL_80; /*0x6ebc5c*/
          }
          v6 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v16); /*0x6ebc6f*/
          if ( v6 == 54 || v6 == 53 ) /*0x6ebc79*/
            v13 = *((_DWORD *)g_RulesClass_Instance + 1480); /*0x6ebca4*/
          else
            v13 = *((_DWORD *)g_RulesClass_Instance + 1479); /*0x6ebc87*/
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 84))(v2) ) /*0x6ebcac*/
            v13 *= 2; /*0x6ebcba*/
          v12 = 1; /*0x6ebcc4*/
          v14 = ObjectClass::DistanceTo((void *)v2, *(_DWORD *)(this + 64)); /*0x6ebcd2*/
          if ( v14 <= v13 /*0x6ebcfc*/
            && ((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 456))(v2) >= 0
             || *(_DWORD *)ScriptClass::GetNextAction(v17) == 3) )
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) != 2 ) /*0x6ebd0c*/
              break; /*0x6ebd0c*/
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 464))(v2) <= 0 ) /*0x6ebd1a*/
              break; /*0x6ebd1a*/
            v7 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 72))(v2, v19); /*0x6ebd25*/
            if ( Coord::To_Cell(&MapClass_Instance, v7) == *(void **)(this + 64) /*0x6ebd48*/
              || *(_DWORD *)ScriptClass::GetNextAction(v18) == 3 )
            {
              break; /*0x6ebd48*/
            }
          }
          if ( !*(_BYTE *)(*(_DWORD *)(this + 36) + 173) || !*(_DWORD *)(v2 + 692) ) /*0x6ebde9*/
            goto LABEL_55; /*0x6ebdf1*/
          if ( *(_BYTE *)(v2 + 1678) ) /*0x6ebdf3*/
          {
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 968))(v2, 0); /*0x6ebe07*/
LABEL_55:
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 388))(v2) != 2 ) /*0x6ebe1a*/
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v2 + 488))(v2, 2, 0); /*0x6ebe24*/
              if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 512))(v2) ) /*0x6ebe2e*/
                (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 492))(v2); /*0x6ebe3c*/
            }
            if ( !*(_DWORD *)(v2 + 1444) ) /*0x6ebe42*/
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 1152))(v2, *(_DWORD *)(this + 64), 1); /*0x6ebe56*/
            v8 = *(_DWORD *)(v2 + 1444); /*0x6ebe5c*/
            if ( v8 != *(_DWORD *)(this + 64) /*0x6ebe9a*/
              && (*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3434)
               || v8 != *(_DWORD *)(this + 64)
               && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 2
               && v8 == (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 444))(v2)) )
            {
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 1152))(v2, *(_DWORD *)(this + 64), 1); /*0x6ebea6*/
            }
            v11 = 0; /*0x6ebeac*/
LABEL_67:
            v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 2 /*0x6ebecf*/
              && *(_DWORD *)(v2 + 1444) == (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 444))(v2);
            v10 = (*(_BYTE *)(v2 + 20) & 1) != 0 /*0x6ebefb*/
               && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3434)
               && v14 < v13;
            if ( *(_DWORD *)(v2 + 1444) && !v9 && !v10 ) /*0x6ebf11*/
              v11 = 0; /*0x6ebf13*/
          }
LABEL_80:
          v2 = *(_DWORD *)(v2 + 1496); /*0x6ebf17*/
          if ( !v2 ) /*0x6ebf1f*/
          {
            if ( v12 && v11 ) /*0x6ebf35*/
            {
              if ( *(_BYTE *)(this + 127) ) /*0x6ebf37*/
                *(_BYTE *)(this + 128) = 1; /*0x6ebf3e*/
            }
            return; /*0x6ebf3e*/
          }
        }
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 388))(v2) == 2 ) /*0x6ebd5b*/
        {
          if ( !*(_DWORD *)(v2 + 1444) ) /*0x6ebd61*/
            goto LABEL_87; /*0x6ebd61*/
          if ( ObjectClass::DistanceTo((void *)v2, *(_DWORD *)(v2 + 1444)) <= *((_DWORD *)g_RulesClass_Instance + 1478) ) /*0x6ebd7f*/
          {
            if ( !*(_DWORD *)(v2 + 1652) ) /*0x6ebd85*/
              WinAPI::Wrapper(-2147467261); /*0x6ebd94*/
            if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v2 + 1652) + 16))(*(_DWORD *)(v2 + 1652)) ) /*0x6ebda2*/
            {
LABEL_87:
              if ( !*(_DWORD *)(v2 + 692) ) /*0x6ebdad*/
              {
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 1152))(v2, 0, 1); /*0x6ebdc3*/
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 1156))(v2, 0, 1); /*0x6ebdd1*/
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
char __thiscall sub_6EBF50(int this)
{
  char result; // al
  int v3; // esi
  int v4; // eax
  int v5; // ebp
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  double v12; // st7
  char v13; // [esp+23h] [ebp-2Dh]
  _DWORD v14[3]; // [esp+24h] [ebp-2Ch] BYREF
  int v15; // [esp+30h] [ebp-20h]
  int v16; // [esp+34h] [ebp-1Ch]
  _BYTE v17[12]; // [esp+38h] [ebp-18h] BYREF
  _BYTE v18[12]; // [esp+44h] [ebp-Ch] BYREF

  result = 0; /*0x6ebf5d*/
  v3 = *(_DWORD *)(this + 84); /*0x6ebf63*/
  v13 = 0; /*0x6ebf69*/
  if ( *(_BYTE *)(this + 124) ) /*0x6ebf5f*/
  {
    if ( v3 ) /*0x6ebf79*/
    {
      do /*0x6ec10e*/
      {
        if ( *(_BYTE *)(v3 + 144) /*0x6ebfc3*/
          && *(_DWORD *)(v3 + 108)
          && (g_IKnowWhatImDoing || !*(_BYTE *)(v3 + 129))
          && (*(_BYTE *)(v3 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 2) )
        {
          v4 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), v14); /*0x6ebfd6*/
          if ( v4 == 54 || v4 == 53 ) /*0x6ebfe0*/
            v5 = g_RulesClass_Instance[1].PrerequisitePower[1]; /*0x6ebff5*/
          else
            v5 = g_RulesClass_Instance[1].PrerequisitePower[0]; /*0x6ebfe8*/
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 2 ) /*0x6ec005*/
            v5 *= 3; /*0x6ec007*/
          if ( *(_BYTE *)(*(_DWORD *)(this + 36) + 167) /*0x6ec01c*/
            && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 1248))(v3) )
          {
            v5 /= 3; /*0x6ec034*/
          }
          v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 56) + 72))( /*0x6ec045*/
                           *(_DWORD *)(this + 56),
                           v17);
          v7 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 72))(v3, v18); /*0x6ec04e*/
          v8 = *v7 - *v6; /*0x6ec055*/
          v9 = v7[1]; /*0x6ec057*/
          v10 = v7[2]; /*0x6ec05a*/
          v14[2] = v8; /*0x6ec05d*/
          v11 = v10 - v6[2]; /*0x6ec06c*/
          v15 = v9 - v6[1]; /*0x6ec06e*/
          v16 = v11; /*0x6ec072*/
          v12 = Math::Sqrt((double)v8 * (double)v8 + (double)v15 * (double)v15 + (double)v11 * (double)v11); /*0x6ec09b*/
          if ( (int)Math::RoundToInt(v12) <= v5 ) /*0x6ec0aa*/
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 388))(v3) != 5 ) /*0x6ec0e8*/
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 488))(v3, 5, 0); /*0x6ec0f2*/
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v3 + 1152))(v3, 0, 1); /*0x6ec100*/
            }
          }
          else
          {
            if ( !*(_DWORD *)(v3 + 1444) ) /*0x6ec0ac*/
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 488))(v3, 2, 0); /*0x6ec0be*/
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v3 + 1152))(v3, *(_DWORD *)(this + 56), 1); /*0x6ec0ce*/
            }
            v13 = 1; /*0x6ec0d4*/
          }
        }
        v3 = *(_DWORD *)(v3 + 1496); /*0x6ec106*/
      }
      while ( v3 ); /*0x6ec10e*/
      result = v13; /*0x6ec114*/
    }
    *(_BYTE *)(this + 124) = result; /*0x6ec119*/
  }
  return result; /*0x6ebf6f*/
}



// ==== 0x006EC130  ObjectClass::Get  this=ObjectClass  sig=csp ====
char __thiscall sub_6EC130(int this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v6; // [esp+8h] [ebp-8h] BYREF

  if ( !a2 /*0x6ec173*/
    || !*(_BYTE *)(a2 + 144)
    || !*(_DWORD *)(a2 + 108)
    || !g_IKnowWhatImDoing && *(_BYTE *)(a2 + 129)
    || *(_BYTE *)(a2 + 1673) )
  {
    return 0; /*0x6ec17b*/
  }
  v3 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v6); /*0x6ec18f*/
  if ( v3 == 54 || v3 == 53 ) /*0x6ec199*/
    v4 = g_RulesClass_Instance[1].PrerequisitePower[1]; /*0x6ec1af*/
  else
    v4 = g_RulesClass_Instance[1].PrerequisitePower[0]; /*0x6ec1a1*/
  if ( ObjectClass::DistanceTo((void *)a2, *(_DWORD *)(this + 52)) <= v4 ) /*0x6ec1c3*/
  {
    *(_BYTE *)(a2 + 1673) = 1; /*0x6ec203*/
    return 0; /*0x6ec20b*/
  }
  if ( !*(_DWORD *)(a2 + 1444) ) /*0x6ec1c5*/
  {
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 488))(a2, 2, 0); /*0x6ec1d7*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 968))(a2, 0); /*0x6ec1e3*/
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a2 + 1152))(a2, *(_DWORD *)(this + 52), 1); /*0x6ec1f3*/
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

  result = g_HouseClass_AIProductionState; /*0x6ec253*/
  for ( i = 0; i < g_HouseClass_AIProductionState; ++i ) /*0x6ec265*/
  {
    v4 = *((_DWORD *)g_TeamClassPool + i); /*0x6ec275*/
    if ( v4 && a2 == *(_DWORD *)(v4 + 44) && *(_DWORD *)(*(_DWORD *)(v4 + 36) + 180) < a1 ) /*0x6ec294*/
    {
      for ( j = *(_DWORD *)(v4 + 84); j; j = *(_DWORD *)(v4 + 84) ) /*0x6ec29b*/
        TeamClass::LiberateMember_Start(v4, j, 0xFFFFFFFF, 0); /*0x6ec2a4*/
      *(_BYTE *)(v4 + 126) = 1; /*0x6ec2b0*/
      *(_BYTE *)(v4 + 125) = 1; /*0x6ec2b3*/
      v6 = g_CurrentFrame; /*0x6ec2bc*/
      v7 = Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].AITriggerTrackRecordCoefficient * 900.0); /*0x6ec2ce*/
      *(_BYTE *)(v4 + 131) = 1; /*0x6ec2da*/
      *(_DWORD *)(v4 + 100) = v6; /*0x6ec2e0*/
      *(_DWORD *)(v4 + 104) = v10; /*0x6ec2e2*/
      *(_DWORD *)(v4 + 108) = v7; /*0x6ec2e5*/
    }
    result = g_HouseClass_AIProductionState; /*0x6ec2e8*/
  }
  return result; /*0x6ec2f9*/
}



// ==== 0x006EC300  TechnoClass::IsWaypointHidden  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass_IsWaypointHidden(int this)
{
  _DWORD *Entry; // eax
  __int16 *Waypoint_Location; // eax
  bool result; // al
  _DWORD v5[2]; // [esp+4h] [ebp-8h] BYREF

  result = 0; /*0x6ec354*/
  if ( *(_BYTE *)(this + 127) ) /*0x6ec306*/
  {
    if ( (unsigned __int8)SessionClass::SetField(*(_DWORD *)(this + 40)) ) /*0x6ec310*/
    {
      Entry = SessionClass::GetEntry(*(_DWORD **)(this + 40), v5); /*0x6ec321*/
      if ( *Entry == 3 ) /*0x6ec330*/
      {
        Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location(v5, Entry[1]); /*0x6ec340*/
        if ( !LayerClass::IsWithinUsableArea(&MapClass_Instance, Waypoint_Location, 1) ) /*0x6ec34b*/
          return 1; /*0x6ec30b*/
      }
    }
  }
  return result; /*0x6ec356*/
}



// ==== 0x006EC370  AnimTypeClass::method_6EC370  this=AnimTypeClass  sig=csp ====
char __thiscall sub_6EC370(_DWORD *this)
{
  int v1; // ecx
  char result; // al

  v1 = this->Spawns; /*0x6ec370*/
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



// ==== 0x006EC3A0  TeamClass::WakeUpAllMembers  this=TechnoClass  sig=csp ====
char __thiscall TeamClass::WakeUpAllMembers(_DWORD *this)
{
  char result; // al
  int i; // esi

  result = TeamClass::SelectMember((int)this, 0); /*0x6ec3a5*/
  for ( i = this->u32_54; i; i = *(_DWORD *)(i + 1496) ) /*0x6ec3af*/
  {
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)i + 968))(i, 0); /*0x6ec3b7*/
    *(_BYTE *)(i + 1672) = 1; /*0x6ec3bd*/
  }
  return result; /*0x6ec3ce*/
}



// ==== 0x006EC3D0  HouseClass::FindBestBuildingToRepair  this=HouseClass  sig=csp ====
_DWORD *__thiscall sub_6EC3D0(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // ebx
  _DWORD *v3; // ebp
  int v4; // edi

  v1 = (_DWORD *)this->repairStationsCount; /*0x6ec3d3*/
  v2 = -1; /*0x6ec3d6*/
  v3 = v1; /*0x6ec3d9*/
  if ( !v1 ) /*0x6ec3dd*/
    return 0; /*0x6ec447*/
  do /*0x6ec43e*/
  {
    v4 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v1 + 132))(v1) + 1532); /*0x6ec3ea*/
    if ( *((_BYTE *)v1 + 144) /*0x6ec430*/
      && v1[27]
      && (g_IKnowWhatImDoing || !*((_BYTE *)v1 + 129))
      && (*((_BYTE *)v1 + 1673) || (*(int (__thiscall **)(_DWORD *))(*v1 + 44))(v1) == 2)
      && v4 > v2 )
    {
      v3 = v1; /*0x6ec432*/
      v2 = v4; /*0x6ec434*/
    }
    v1 = (_DWORD *)v1[374]; /*0x6ec436*/
  }
  while ( v1 ); /*0x6ec43e*/
  return v3; /*0x6ec443*/
}



// ==== 0x006EC450  TeamClass::SaveLoad_Prefix  this=TeamClass  sig=csp ====
int __stdcall TeamClass_SaveLoad_Prefix(int *a1, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x6ec45b*/
  if ( result >= 0 ) /*0x6ec462*/
  {
    if ( a1 ) /*0x6ec46a*/
    {
      AbstractClass::InitVtables(a1, (int)&a2); /*0x6ec473*/
      __4type_info_AAEAAV0_ABV0__Z(&a2); /*0x6ec480*/
      *a1 = (int)&TeamClass::`vftable'; /*0x6ec485*/
      a1[1] = (int)&TeamClass::`vftable'; /*0x6ec48b*/
      a1[2] = (int)&TeamClass::`vftable'; /*0x6ec492*/
      a1[3] = (int)&TeamClass::`vftable'; /*0x6ec499*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 9); /*0x6ec4a9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 10); /*0x6ec4b7*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 11); /*0x6ec4c5*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 28); /*0x6ec4d3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 21); /*0x6ec4e1*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 14); /*0x6ec4ef*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 16); /*0x6ec4fd*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 13); /*0x6ec50b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 15); /*0x6ec519*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 12); /*0x6ec527*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 17); /*0x6ec535*/
    return 0; /*0x6ec53a*/
  }
  return result; /*0x6ec53c*/
}



// ==== 0x006EC540  TeamClass::SaveLoad_Prefix_0  this=TeamClass  sig=csp ====
int __stdcall TeamClass::SaveLoad_Prefix_0(int *a1, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix(a1, a2, a3); /*0x6ec54f*/
  if ( result >= 0 ) /*0x6ec556*/
    return 0; /*0x6ec558*/
  return result; /*0x6ec55a*/
}



// ==== 0x006EC560  TeamClass::ddtor  this=TeamClass  sig=csp ====
int __stdcall TeamClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6ec566*/
    return -2147467261; /*0x6ec568*/
  *a2 = 237448655; /*0x6ec576*/
  a2[1] = 298949647; /*0x6ec57e*/
  a2[2] = -1610610249; /*0x6ec587*/
  a2[3] = -777003740; /*0x6ec590*/
  return 0; /*0x6ec56d*/
}



// ==== 0x006EC5A0  TeamClass::PowerDrainUpdate  this=TeamClass  sig=csp ====
int __thiscall TeamClass::_vt13(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // eax
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

  AbstractClass::ProcessPower((#378 *)this); /*0x6ec5a9*/
  v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 36) + 4) + 16))(*(_DWORD *)(this + 36) + 4); /*0x6ec5b7*/
  Power::TimerProcess(v3); /*0x6ec5bd*/
  v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 44) + 4) + 16))(*(_DWORD *)(this + 44) + 4); /*0x6ec5cb*/
  Power::TimerProcess(v4); /*0x6ec5d1*/
  v5 = *(_DWORD *)(this + 56); /*0x6ec5d6*/
  if ( v5 ) /*0x6ec5db*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x6ec5e4*/
    Power::TimerProcess(v6); /*0x6ec5ea*/
  }
  Power::TimerProcess(*(_DWORD *)(this + 72)); /*0x6ec5f5*/
  Power::TimerProcess(*(_DWORD *)(this + 76)); /*0x6ec600*/
  v7 = *(_DWORD *)(this + 84); /*0x6ec605*/
  if ( v7 ) /*0x6ec60a*/
  {
    v8 = (*(int (__stdcall **)(int))(*(_DWORD *)(v7 + 4) + 16))(v7 + 4); /*0x6ec613*/
    Power::TimerProcess(v8); /*0x6ec619*/
  }
  v9 = *(_DWORD *)(this + 88); /*0x6ec61e*/
  v10 = *(_DWORD *)(this + 96); /*0x6ec621*/
  if ( v9 != -1 ) /*0x6ec627*/
  {
    if ( (int)g_CurrentFrame - v9 >= v10 ) /*0x6ec633*/
      v10 = 0; /*0x6ec639*/
    else
      v10 -= (int)g_CurrentFrame - v9; /*0x6ec635*/
  }
  Power::TimerProcess(v10); /*0x6ec63e*/
  v11 = *(_DWORD *)(this + 100); /*0x6ec643*/
  v12 = *(_DWORD *)(this + 108); /*0x6ec646*/
  if ( v11 != -1 ) /*0x6ec64c*/
  {
    if ( (int)g_CurrentFrame - v11 >= v12 ) /*0x6ec658*/
      v12 = 0; /*0x6ec65e*/
    else
      v12 -= (int)g_CurrentFrame - v11; /*0x6ec65a*/
  }
  Power::TimerProcess(v12); /*0x6ec663*/
  v13 = *(_DWORD *)(this + 112); /*0x6ec668*/
  if ( v13 ) /*0x6ec66d*/
  {
    v14 = (*(int (__stdcall **)(int))(*(_DWORD *)(v13 + 4) + 16))(v13 + 4); /*0x6ec676*/
    v13 = Power::TimerProcess(v14); /*0x6ec67c*/
  }
  LOBYTE(v13) = *(_BYTE *)(this + 119); /*0x6ec681*/
  Power::FlagProcess(a2, v13); /*0x6ec687*/
  LOBYTE(v15) = *(_BYTE *)(this + 120); /*0x6ec68c*/
  Power::FlagProcess(a2, v15); /*0x6ec692*/
  LOBYTE(v16) = *(_BYTE *)(this + 121); /*0x6ec697*/
  v17 = Power::FlagProcess(a2, v16); /*0x6ec69d*/
  LOBYTE(v17) = *(_BYTE *)(this + 122); /*0x6ec6a2*/
  Power::FlagProcess(a2, v17); /*0x6ec6a8*/
  LOBYTE(v18) = *(_BYTE *)(this + 123); /*0x6ec6ad*/
  Power::FlagProcess(a2, v18); /*0x6ec6b3*/
  LOBYTE(v19) = *(_BYTE *)(this + 124); /*0x6ec6b8*/
  v20 = Power::FlagProcess(a2, v19); /*0x6ec6be*/
  LOBYTE(v20) = *(_BYTE *)(this + 125); /*0x6ec6c3*/
  Power::FlagProcess(a2, v20); /*0x6ec6c9*/
  LOBYTE(v21) = *(_BYTE *)(this + 126); /*0x6ec6ce*/
  Power::FlagProcess(a2, v21); /*0x6ec6d4*/
  LOBYTE(v22) = *(_BYTE *)(this + 127); /*0x6ec6d9*/
  v23 = Power::FlagProcess(a2, v22); /*0x6ec6df*/
  LOBYTE(v23) = *(_BYTE *)(this + 128); /*0x6ec6e4*/
  Power::FlagProcess(a2, v23); /*0x6ec6ed*/
  LOBYTE(v24) = *(_BYTE *)(this + 130); /*0x6ec6f2*/
  Power::FlagProcess(a2, v24); /*0x6ec6fb*/
  LOBYTE(v25) = *(_BYTE *)(this + 131); /*0x6ec700*/
  Power::FlagProcess(a2, v25); /*0x6ec709*/
  return Checksummer::Add_Buffer((unsigned int *)a2, (unsigned __int8 *)(this + 136), 24); /*0x6ec71e*/
}



// ==== 0x006EC7D0  TeamClass::MoveTeamToWaypoint  this=TeamClass  sig=csp ====
void __thiscall sub_6EC7D0(int **this, int a2, int a3)
{
  int v3; // ebp
  int *v4; // esi
  int v5; // ebx
  int *v6; // edi
  int v7; // ebp
  void *v8; // eax
  _DWORD *Entry; // eax
  __int16 *Waypoint_Location; // eax
  int v11; // ebx
  void *v12; // eax
  int v13; // eax
  int v14; // eax
  void *v15; // [esp+Ch] [ebp-10h]
  _DWORD v16[2]; // [esp+14h] [ebp-8h] BYREF

  v3 = (int)this; /*0x6ec7d8*/
  v16[0] = this; /*0x6ec7dc*/
  if ( (_BYTE)a3 ) /*0x6ec7e0*/
  {
    v4 = this->u8_15; /*0x6ec7e8*/
    v5 = -1; /*0x6ec7eb*/
    v6 = v4; /*0x6ec7ef*/
    if ( v4 ) /*0x6ec7f3*/
    {
      do /*0x6ec853*/
      {
        v7 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v4 + 132))(v4) + 1532); /*0x6ec7ff*/
        if ( *((_BYTE *)v4 + 144) /*0x6ec845*/
          && v4[27]
          && (g_IKnowWhatImDoing || !*((_BYTE *)v4 + 129))
          && (*((_BYTE *)v4 + 1673) || (*(int (__thiscall **)(int *))(*v4 + 44))(v4) == 2)
          && v7 > v5 )
        {
          v6 = v4; /*0x6ec847*/
          v5 = v7; /*0x6ec849*/
        }
        v4 = (int *)v4[374]; /*0x6ec84b*/
      }
      while ( v4 ); /*0x6ec853*/
      v3 = v16[0]; /*0x6ec855*/
    }
    a3 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &a2, *(_DWORD *)(a2 + 4)); /*0x6ec87d*/
    v8 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a3); /*0x6ec881*/
    TeamClass::SelectMember(v3, (int)v8); /*0x6ec889*/
    if ( !*(_BYTE *)(v3 + 127) /*0x6ec8d3*/
      || !SessionClass::SetField(*(_DWORD **)(v3 + 40))
      || (Entry = SessionClass::GetEntry(*(_DWORD **)(v3 + 40), v16), *Entry != 3)
      || (Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location(
                                           (char *)g_ScenarioClass_Instance,
                                           &a2,
                                           Entry[1]),
          LayerClass::IsWithinUsableArea(&MapClass_Instance, Waypoint_Location, 1)) )
    {
      v11 = *v6; /*0x6ec8dc*/
      v12 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a3); /*0x6ec8f0*/
      if ( (*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v11 + 428))(v6, v12, -1, -1, 0, 0) ) /*0x6ec8f8*/
      {
        v13 = *v6; /*0x6ec916*/
        a2 = 0; /*0x6ec91e*/
        v14 = (*(int (__thiscall **)(int *))(v13 + 132))(v6); /*0x6ec928*/
        a3 = *LayerClass::Pathfinding_Find( /*0x6ec94b*/
                &MapClass_Instance,
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
    if ( a3 == dword_B0E948 ) /*0x6ec95e*/
    {
      TeamClass::SelectMember(v3, 0); /*0x6ec984*/
    }
    else
    {
      v15 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a3); /*0x6ec97d*/
      TeamClass::SelectMember(v3, (int)v15); /*0x6ec97e*/
    }
  }
  TeamClass::UpdateMembers(v3); /*0x6ec98b*/
}



// ==== 0x006EC9A0  TeamClass::SelectWaypointTarget  this=TeamClass  sig=csp ====
char __thiscall sub_6EC9A0(int this, int a2, char a3)
{
  _DWORD *CellFromArray; // eax
  _DWORD *v5; // esi
  char v6; // al
  int ObjectCell; // eax
  int *v8; // esi
  char result; // al
  _DWORD v10[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a3 ) /*0x6ec9ad*/
  {
    CellFromArray = ScenarioClass::GetCellFromArray((__int16 *)g_ScenarioClass_Instance, *(_DWORD *)(a2 + 4)); /*0x6ec9bd*/
    v5 = CellFromArray; /*0x6ec9c2*/
    if ( CellFromArray ) /*0x6ec9c6*/
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*CellFromArray + 44))(CellFromArray) == 11 ) /*0x6ec9d2*/
      {
        v6 = BYTE1(v5[80]) & 1; /*0x6ec9e1*/
        v10[0] = 0; /*0x6ec9e3*/
        v10[1] = 0; /*0x6ec9ef*/
        ObjectCell = Object::FindObjectCell(v5, v10, v6); /*0x6ec9f7*/
        if ( ObjectCell ) /*0x6ec9fe*/
          v5 = (_DWORD *)ObjectCell; /*0x6eca00*/
      }
    }
    TeamClass::SelectMember(this, (int)v5); /*0x6eca05*/
  }
  if ( *(_DWORD *)(this + 60) && (v8 = *(int **)(this + 84)) != 0 ) /*0x6eca16*/
  {
    while ( *(int *)((*(int (__thiscall **)(int *))(*v8 + 132))(v8) + 1668) > 0 && v8[191] <= 0 ) /*0x6eca34*/
    {
      v8 = (int *)v8[374]; /*0x6eca36*/
      if ( !v8 ) /*0x6eca3e*/
        goto LABEL_12; /*0x6eca3e*/
    }
    return TeamClass::AttackCoordinator((int *)this); /*0x6eca5a*/
  }
  else
  {
LABEL_12:
    result = TeamClass::SelectMember(this, 0); /*0x6eca40*/
    *(_BYTE *)(this + 128) = 1; /*0x6eca49*/
  }
  return result; /*0x6eca50*/
}



// ==== 0x006ECA70  TeamClass::SelectAttackTarget  this=TeamClass  sig=csp ====
char __thiscall sub_6ECA70(int this, int a2, char a3)
{
  _DWORD *CellFromArray; // eax
  _DWORD *v5; // esi
  char v6; // al
  int ObjectCell; // eax
  int v8; // esi
  int *v9; // esi
  char result; // al
  _DWORD v11[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a3 ) /*0x6eca7d*/
  {
    CellFromArray = ScenarioClass::GetCellFromArray((__int16 *)g_ScenarioClass_Instance, *(_DWORD *)(a2 + 4)); /*0x6eca8d*/
    v5 = CellFromArray; /*0x6eca92*/
    if ( !CellFromArray /*0x6ecadc*/
      || (*(int (__thiscall **)(_DWORD *))(*CellFromArray + 44))(CellFromArray) != 11
      || (v6 = BYTE1(v5[80]) & 1,
          v11[0] = 0,
          v11[1] = 0,
          ObjectCell = Object::FindObjectCell(v5, v11, v6),
          (v8 = ObjectCell) == 0)
      || (*(int (__thiscall **)(int))(*(_DWORD *)ObjectCell + 44))(ObjectCell) != 6 )
    {
      v8 = 0; /*0x6ecade*/
    }
    TeamClass::SelectMember(this, v8); /*0x6ecae3*/
  }
  if ( *(_DWORD *)(this + 60) && (v9 = *(int **)(this + 84)) != 0 ) /*0x6ecaf4*/
  {
    while ( *(int *)((*(int (__thiscall **)(int *))(*v9 + 132))(v9) + 1668) > 0 && v9[191] <= 0 ) /*0x6ecb12*/
    {
      v9 = (int *)v9[374]; /*0x6ecb14*/
      if ( !v9 ) /*0x6ecb1c*/
        goto LABEL_13; /*0x6ecb1c*/
    }
    return TeamClass::AttackCoordinator((int *)this); /*0x6ecb38*/
  }
  else
  {
LABEL_13:
    result = TeamClass::SelectMember(this, 0); /*0x6ecb1e*/
    *(_BYTE *)(this + 128) = 1; /*0x6ecb27*/
  }
  return result; /*0x6ecb2e*/
}



// ==== 0x006ECCE0  TeamClass::MoveToCellAndAttack  this=TeamClass  sig=csp ====
void __thiscall sub_6ECCE0(void *this, int a2, char a3)
{
  int v3; // edi
  void *CellFromArray; // esi
  _DWORD *Entry; // eax
  int *v6; // esi
  int v7; // ebp
  int *v8; // ebx
  int v9; // edi
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v14; // [esp+10h] [ebp-14h] BYREF
  _DWORD v15[3]; // [esp+18h] [ebp-Ch] BYREF
  void *v16; // [esp+28h] [ebp+4h]

  v3 = (int)this; /*0x6eccea*/
  CellFromArray = ScenarioClass::GetCellFromArray((__int16 *)g_ScenarioClass_Instance, *(_DWORD *)(a2 + 4)); /*0x6eccff*/
  v16 = CellFromArray; /*0x6ecd07*/
  if ( a3 ) /*0x6ecd0b*/
    TeamClass::SelectMember(v3, (int)CellFromArray); /*0x6ecd10*/
  if ( !*(_DWORD *)(v3 + 64) ) /*0x6ecd15*/
  {
    Entry = SessionClass::GetEntry(*(_DWORD **)(v3 + 40), &v14); /*0x6ecd24*/
    v15[0] = *Entry; /*0x6ecd2b*/
    if ( Entry[1] < 0x2BEu ) /*0x6ecd36*/
      TeamClass::SelectMember(v3, (int)CellFromArray); /*0x6ecd3b*/
  }
  if ( !((int)g_CurrentFrame % (int)Math::RoundToInt(*(double *)g_RulesClass_Instance->Difficult * 900.0)) ) /*0x6ecd5f*/
  {
    v6 = *(int **)(v3 + 84); /*0x6ecd69*/
    v7 = -1; /*0x6ecd6d*/
    v8 = v6; /*0x6ecd70*/
    if ( v6 ) /*0x6ecd74*/
    {
      do /*0x6ecdd4*/
      {
        v9 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v6 + 132))(v6) + 1532); /*0x6ecd80*/
        if ( *((_BYTE *)v6 + 144) /*0x6ecdc6*/
          && v6[27]
          && (g_IKnowWhatImDoing || !*((_BYTE *)v6 + 129))
          && (*((_BYTE *)v6 + 1673) || (*(int (__thiscall **)(int *))(*v6 + 44))(v6) == 2)
          && v9 > v7 )
        {
          v8 = v6; /*0x6ecdc8*/
          v7 = v9; /*0x6ecdca*/
        }
        v6 = (int *)v6[374]; /*0x6ecdcc*/
      }
      while ( v6 ); /*0x6ecdd4*/
      v3 = (int)this; /*0x6ecdd6*/
    }
    if ( v8 ) /*0x6ecddd*/
    {
      v15[0] = v8[39]; /*0x6ecde9*/
      v10 = *v8; /*0x6ecded*/
      v15[1] = v8[40]; /*0x6ecdf2*/
      v15[2] = v8[41]; /*0x6ecdfe*/
      v11 = (*(int (__thiscall **)(int *, int, _DWORD *, _DWORD))(v10 + 964))(v8, 1, v15, 0); /*0x6ece06*/
      if ( v11 ) /*0x6ece0e*/
      {
        TeamClass::SelectMember(v3, v11); /*0x6ece11*/
      }
      else if ( *(void **)(v3 + 64) != v16 ) /*0x6ece1c*/
      {
        TeamClass::SelectMember(v3, 0); /*0x6ece22*/
      }
    }
  }
  v12 = *(_DWORD *)(v3 + 64); /*0x6ece27*/
  if ( v12 && (*(_BYTE *)(v12 + 20) & 2) != 0 ) /*0x6ece32*/
    TeamClass::AttackCoordinator((int *)v3); /*0x6ece36*/
  else
    TeamClass::UpdateMembers(v3); /*0x6ece46*/
}



// ==== 0x006ECE60  TeamClass::AssignMemberToCoordinator  this=TeamClass  sig=csp ====
char __thiscall sub_6ECE60(int this, int a2, char a3)
{
  void *CellFromArray; // eax
  int v5; // ecx
  int v6; // esi
  _DWORD *v7; // eax
  int ObjectCell; // eax
  _DWORD v10[2]; // [esp+4h] [ebp-8h] BYREF

  if ( a3 ) /*0x6ece6c*/
  {
    CellFromArray = ScenarioClass::GetCellFromArray((__int16 *)g_ScenarioClass_Instance, *(_DWORD *)(a2 + 4)); /*0x6ece7c*/
    TeamClass::SelectMember(this, (int)CellFromArray); /*0x6ece84*/
  }
  v5 = *(_DWORD *)(this + 60); /*0x6ece89*/
  if ( v5 && (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 11 )
  {
    v6 = *(_DWORD *)(this + 60); /*0x6ece9b*/
    if ( v6 )
      v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 44))(*(_DWORD *)(this + 60)) == 11 ? (_DWORD *)v6 : 0;
    else
      v7 = 0; /*0x6ecea2*/
    v10[0] = 0; /*0x6ecec1*/
    v10[1] = 0; /*0x6ecec9*/
    ObjectCell = Object::FindObjectCell(v7, v10, 0); /*0x6eced1*/
    if ( ObjectCell ) /*0x6eced9*/
    {
      TeamClass::SelectMember(this, ObjectCell); /*0x6ecede*/
LABEL_10:
      LOBYTE(ObjectCell) = TeamClass::AttackCoordinator((int *)this); /*0x6ecee3*/
    }
  }
  else
  {
    if ( *(_DWORD *)(this + 60) ) /*0x6ecef1*/
      goto LABEL_10; /*0x6ecef6*/
    LOBYTE(ObjectCell) = TeamClass::SelectMember(this, 0); /*0x6ecefc*/
    *(_BYTE *)(this + 128) = 1; /*0x6ecf01*/
  }
  return ObjectCell; /*0x6eceea*/
}



// ==== 0x006ECFB0  TeamClass::Create  this=TeamClass  sig=csp ====
char __thiscall sub_6ECFB0(int *this, int a2, int a3)
{
  void *v4; // eax
  int v5; // ebx
  int i; // esi

  v4 = __2_YAPAXI_Z(0xA0u); /*0x6ecfba*/
  if ( v4 ) /*0x6ecfc4*/
  {
    v4 = (void *)MissionClass::Construct((int)v4, *((_DWORD *)g_TeamTypePool + *(_DWORD *)(a2 + 4)), this->owner, 0); /*0x6ecfdf*/
    v5 = (int)v4; /*0x6ecfe4*/
  }
  else
  {
    v5 = 0; /*0x6ecfe8*/
  }
  for ( i = this->u8_15; i; i = this->u8_15 ) /*0x6ecfef*/
  {
    TeamClass::LiberateMember_Start((int)this, i, 0xFFFFFFFF, 0); /*0x6ecff8*/
    LOBYTE(v4) = TeamClass::AddMember(v5, i, 0); /*0x6ed002*/
  }
  if ( this ) /*0x6ed010*/
    LOBYTE(v4) = (*(int (__thiscall **)(int *, int))(*this + 32))(this, 1); /*0x6ed018*/
  return (char)v4; /*0x6ed01b*/
}



// ==== 0x006ED090  TeamClass::CoordinateSuperWeaponAttack  this=TeamClass  sig=csp ====
char __thiscall sub_6ED090(int this, int a2, int a3)
{
  int v3; // ebp
  int *v4; // esi
  int v5; // ebx
  int *v6; // edi
  int v7; // ebp
  int SuperWeaponTypeFlag; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int *v12; // esi
  int *v13; // esi
  _DWORD v16[3]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = this; /*0x6ed094*/
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
          && (g_IKnowWhatImDoing || !*((_BYTE *)v4 + 129))
          && (*((_BYTE *)v4 + 1673) || (*(int (__thiscall **)(int *))(*v4 + 44))(v4) == 2)
          && v7 > v5 )
        {
          v6 = v4; /*0x6ed10e*/
          v5 = v7; /*0x6ed110*/
        }
        v4 = (int *)v4[374]; /*0x6ed112*/
      }
      while ( v4 ); /*0x6ed11a*/
      v3 = this; /*0x6ed11c*/
      SuperWeaponTypeFlag = GetSuperWeaponTypeFlag(*(void **)(a2 + 4)); /*0x6ed127*/
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
    if ( !*(_DWORD *)(v3 + 60) ) /*0x6ed1ab*/
      goto LABEL_25; /*0x6ed1ab*/
  }
  v13 = *(int **)(v3 + 84); /*0x6ed1b2*/
  if ( v13 ) /*0x6ed1b7*/
  {
    while ( *(int *)((*(int (__thiscall **)(int *))(*v13 + 132))(v13) + 1668) > 0 && v13[191] <= 0 ) /*0x6ed1d5*/
    {
      v13 = (int *)v13[374]; /*0x6ed1d7*/
      if ( !v13 ) /*0x6ed1df*/
        goto LABEL_25; /*0x6ed1df*/
    }
  }
  else
  {
LABEL_25:
    *(_BYTE *)(v3 + 128) = 1; /*0x6ed1e1*/
  }
  return TeamClass::AttackCoordinator((int *)v3); /*0x6ed1ef*/
}



// ==== 0x006ED200  ObjectClass::AssignTeamProductionFacilities  this=ObjectClass  sig=csp ====
char __thiscall AssignTeamProductionFacilities(int **this, int a2, int a3)
{
  int v3; // eax
  int *v4; // esi
  int v5; // ebp
  int v6; // ebx
  _DWORD *v7; // edi
  char v8; // bl
  int v9; // edi
  int *v10; // edi
  int v11; // ebp
  char v12; // bl
  int v13; // esi
  int v14; // eax
  int v15; // edi
  int *v16; // edi
  void *v17; // eax
  _DWORD v19[3]; // [esp+10h] [ebp-10h] BYREF
  int *v20; // [esp+1Ch] [ebp-4h]

  v3 = (this->objectTypeFlags)[57]; /*0x6ed209*/
  v4 = this->u8_15; /*0x6ed20f*/
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
    v3 = (*(int (__thiscall **)(int *))(*v4 + 132))(v4); /*0x6ed264*/
    if ( *(int *)(v3 + 1504) <= 0 ) /*0x6ed272*/
      goto LABEL_15; /*0x6ed272*/
    v9 = v4[69]; /*0x6ed276*/
    v3 = (*(int (__thiscall **)(int *))(*v4 + 132))(v4); /*0x6ed27e*/
    if ( v9 >= *(_DWORD *)(v3 + 1504) ) /*0x6ed28a*/
      goto LABEL_15; /*0x6ed28a*/
    if ( v8 ) /*0x6ed28e*/
      break; /*0x6ed28e*/
    v3 = (*(int (__thiscall **)(int *))(*v4 + 44))(v4); /*0x6ed294*/
    if ( v3 == 1 ) /*0x6ed29a*/
      goto LABEL_17; /*0x6ed29a*/
LABEL_15:
    v4 = (int *)v4[374]; /*0x6ed2ae*/
    if ( !v4 ) /*0x6ed2b6*/
    {
      *(_BYTE *)(v19[0] + 128) = 1; /*0x6ed2bf*/
      return v3; /*0x6ed2ca*/
    }
  }
  v3 = (*(int (__thiscall **)(int *))(*v4 + 44))(v4); /*0x6ed2a6*/
  if ( v3 != 2 ) /*0x6ed2ac*/
    goto LABEL_15; /*0x6ed2ac*/
LABEL_17:
  v10 = v4; /*0x6ed2cd*/
  v20 = v4; /*0x6ed2d1*/
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
          if ( *(_DWORD *)(v13 + 108) && (g_IKnowWhatImDoing || !*(_BYTE *)(v13 + 129)) && !*(_BYTE *)(v13 + 1673) ) /*0x6ed34e*/
          {
            v14 = *SessionClass::GetEntry(*(_DWORD **)(v11 + 40), v19); /*0x6ed365*/
            if ( v14 == 54 || v14 == 53 ) /*0x6ed36f*/
              v15 = g_RulesClass_Instance[1].PrerequisitePower[1]; /*0x6ed384*/
            else
              v15 = g_RulesClass_Instance[1].PrerequisitePower[0]; /*0x6ed376*/
            if ( ObjectClass::DistanceTo((void *)v13, *(_DWORD *)(v11 + 52)) <= v15 ) /*0x6ed397*/
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
              if ( g_IKnowWhatImDoing || (LOBYTE(v3) = *(_BYTE *)(v13 + 129), !(_BYTE)v3) ) /*0x6ed3f8*/
              {
                LOBYTE(v3) = *(_BYTE *)(v13 + 1673); /*0x6ed3fa*/
                if ( (_BYTE)v3 || (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13), v3 == 2) ) /*0x6ed40e*/
                {
                  v16 = v20; /*0x6ed410*/
                  if ( (int *)v13 != v20 ) /*0x6ed416*/
                  {
                    v12 = 0; /*0x6ed41c*/
                    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 388))(v13); /*0x6ed41e*/
                    if ( v3 != 7 ) /*0x6ed427*/
                    {
                      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v13 + 488))(v13, 7, 0); /*0x6ed49a*/
                      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 968))(v13, 0); /*0x6ed4a6*/
                      LOBYTE(v3) = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v13 + 1152))(v13, v16, 1); /*0x6ed4b3*/
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
      v19[0] = v10[39]; /*0x6ed458*/
      v19[1] = v10[40]; /*0x6ed464*/
      v19[2] = v10[41]; /*0x6ed46b*/
      v17 = Coord::To_Cell(&MapClass_Instance, v19); /*0x6ed474*/
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
      if ( *(_DWORD *)(v6 + 108) && (g_IKnowWhatImDoing || !*(_BYTE *)(v6 + 129)) && !*(_BYTE *)(v6 + 1673) ) /*0x6ed51f*/
      {
        v7 = *SessionClass::GetEntry(*(_DWORD **)(a1 + 40), &v18); /*0x6ed536*/
        if ( v7 == 54 || v7 == 53 ) /*0x6ed540*/
          v8 = *((_DWORD *)g_RulesClass_Instance + 1480); /*0x6ed556*/
        else
          v8 = *((_DWORD *)g_RulesClass_Instance + 1479); /*0x6ed548*/
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
        && (g_IKnowWhatImDoing || !*(_BYTE *)(v6 + 129))
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
int __thiscall sub_6ED770(int this, int a2, char a3)
{
  int v4; // eax
  int v5; // edx
  int result; // eax
  int v7; // [esp+8h] [ebp-8h]

  if ( a3 ) /*0x6ed77c*/
  {
    v4 = *(_DWORD *)(a2 + 4); /*0x6ed78b*/
    *(_DWORD *)(this + 88) = g_CurrentFrame; /*0x6ed78e*/
    *(_DWORD *)(this + 92) = v7; /*0x6ed797*/
    *(_DWORD *)(this + 96) = 15 * v4; /*0x6ed79d*/
  }
  HouseClass::EvaluateTarget(this); /*0x6ed7a2*/
  v5 = *(_DWORD *)(this + 88); /*0x6ed7a7*/
  result = *(_DWORD *)(this + 96); /*0x6ed7aa*/
  if ( v5 == -1 ) /*0x6ed7b0*/
  {
LABEL_6:
    if ( result ) /*0x6ed7c2*/
      return result; /*0x6ed7c2*/
    goto LABEL_7; /*0x6ed7c2*/
  }
  if ( (int)g_CurrentFrame - v5 < result ) /*0x6ed7bc*/
  {
    result -= (int)g_CurrentFrame - v5; /*0x6ed7be*/
    goto LABEL_6; /*0x6ed7be*/
  }
LABEL_7:
  *(_BYTE *)(this + 128) = 1; /*0x6ed7c4*/
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
      if ( i[27] && (g_IKnowWhatImDoing || !*((_BYTE *)i + 129)) && !*((_BYTE *)i + 1673) ) /*0x6ed831*/
      {
        v7 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v19); /*0x6ed848*/
        if ( v7 == 54 || v7 == 53 ) /*0x6ed852*/
          v8 = g_RulesClass_Instance[1].PrerequisitePower[1]; /*0x6ed867*/
        else
          v8 = g_RulesClass_Instance[1].PrerequisitePower[0]; /*0x6ed85a*/
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
          if ( g_IKnowWhatImDoing || (LOBYTE(v3) = *((_BYTE *)i + 129), !(_BYTE)v3) )
          {
            if ( *((_BYTE *)i + 1673) || (v3 = (*(int (__thiscall **)(int *))(*i + 44))(i), v3 == 2) )
            {
              v3 = i[173]; /*0x6ed903*/
              if ( !v3 )
              {
                if ( i[361]
                  || ((v9 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v20), v9 == 54) || v9 == 53
                    ? (v10 = g_RulesClass_Instance[1].PrerequisitePower[1])
                    : (v10 = g_RulesClass_Instance[1].PrerequisitePower[0]),
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
                  v14 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v17); /*0x6eda01*/
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
char __thiscall sub_6EDB50(int this, int a2, int a3)
{
  void **v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  _BYTE *i; // esi
  int v8; // eax

  v4 = (void **)(this + 52); /*0x6edb57*/
  TeamClass::FindClosestEnemy(this, (void **)(this + 52), (int *)(this + 56)); /*0x6edb5c*/
  *(_DWORD *)(this + 64) = *v4; /*0x6edb63*/
  TeamClass::UpdateMembers(this); /*0x6edb68*/
  v5 = AbstractClass::IsTechnoType(*v4); /*0x6edb6f*/
  v6 = v5; /*0x6edb74*/
  if ( v5 ) /*0x6edb78*/
  {
    for ( i = *(_BYTE **)(this + 84); i; i = (_BYTE *)*((_DWORD *)i + 374) ) /*0x6edb83*/
    {
      LOBYTE(v5) = i[144]; /*0x6edb89*/
      if ( (_BYTE)v5 ) /*0x6edb91*/
      {
        v5 = (_DWORD *)*((_DWORD *)i + 27); /*0x6edb97*/
        if ( v5 ) /*0x6edb9c*/
        {
          if ( g_IKnowWhatImDoing || (LOBYTE(v5) = i[129], !(_BYTE)v5) ) /*0x6edbb3*/
          {
            if ( i[1673] || (v5 = (_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)i + 44))(i), v5 == (_DWORD *)2) ) /*0x6edbcd*/
            {
              v8 = *((_DWORD *)i + 173); /*0x6edbd3*/
              if ( v8 && v8 != v6[173] ) /*0x6edbe3*/
                (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)i + 968))(i, 0); /*0x6edbeb*/
              v5 = (_DWORD *)v6[173]; /*0x6edbf1*/
              if ( v5 ) /*0x6edbf9*/
              {
                if ( !*((_DWORD *)i + 413) ) /*0x6edbfb*/
                  WinAPI::Wrapper(-2147467261); /*0x6edc0a*/
                LOBYTE(v5) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)i + 413) + 16))(*((_DWORD *)i + 413)); /*0x6edc18*/
                if ( !(_BYTE)v5 ) /*0x6edc1d*/
                {
                  LOBYTE(v5) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)i + 684))(i); /*0x6edc23*/
                  if ( (_BYTE)v5 ) /*0x6edc2b*/
                  {
                    v5 = (_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)i + 388))(i); /*0x6edc31*/
                    if ( v5 == (_DWORD *)5 ) /*0x6edc3a*/
                    {
                      (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)i + 488))(i, 1, 0); /*0x6edc44*/
                      LOBYTE(v5) = (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)i + 968))(i, v6[173]); /*0x6edc55*/
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
  return (char)v5; /*0x6edc69*/
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
int __thiscall sub_6EDDC0(int this, int a2, int a3)
{
  _DWORD *v4; // esi
  int result; // eax

  v4 = *(_DWORD **)(this + 84); /*0x6eddc4*/
  if ( v4 ) /*0x6eddc9*/
  {
    do /*0x6edde6*/
    {
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v4 + 1312))(v4, *(_DWORD *)(a2 + 4)); /*0x6eddd8*/
      v4 = (_DWORD *)v4[374]; /*0x6eddde*/
    }
    while ( v4 ); /*0x6edde6*/
    *(_BYTE *)(this + 128) = 1; /*0x6edde9*/
  }
  else
  {
    *(_BYTE *)(this + 128) = 1; /*0x6eddf5*/
  }
  return result; /*0x6eddf0*/
}



// ==== 0x006EDE80  ObjectClass::method_6EDE80  this=ObjectClass  sig=csp ====
void __thiscall sub_6EDE80(_BYTE *this, int a2, int a3)
{
  this->needsRedraw = 1; /*0x6ede80*/
}



// ==== 0x006EDF10  ObjectClass::method_6EDF10  this=ObjectClass  sig=csp ====
void __thiscall sub_6EDF10(int this, int a2, int a3)
{
  _DWORD *i; // esi
  _DWORD *v5; // eax
  int v6; // [esp+8h] [ebp-14h]
  int v7; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v8[12]; // [esp+10h] [ebp-Ch] BYREF

  for ( i = *(_DWORD **)(this + 84); i; i = (_DWORD *)i[374] ) /*0x6edf1c*/
  {
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*i + 72))(i, v8); /*0x6edf27*/
    LOWORD(v6) = *v5 / 256; /*0x6edf3a*/
    HIWORD(v6) = v5[1] / 256; /*0x6edf53*/
    v7 = v6; /*0x6edf60*/
    MapClass::TriggerEVA((__int16 *)&v7); /*0x6edf65*/
  }
  *(_BYTE *)(this + 128) = 1; /*0x6edf74*/
}



// ==== 0x006EDF90  ObjectClass::method_6EDF90  this=ObjectClass  sig=csp ====
char __thiscall sub_6EDF90(int this, int a2, int a3)
{
  *(_BYTE *)(*(_DWORD *)(this + 44) + 494) = 1; /*0x6edf95*/
  *(_BYTE *)(this + 128) = 1; /*0x6edf9b*/
  return 1; /*0x6edfa1*/
}



// ==== 0x006EDFB0  ObjectClass::method_6EDFB0  this=ObjectClass  sig=csp ====
int __thiscall sub_6EDFB0(int this, int a2, int a3)
{
  int result; // eax

  result = *(_DWORD *)(this + 44); /*0x6edfb0*/
  *(_DWORD *)(result + 592) = 4; /*0x6edfb3*/
  *(_BYTE *)(this + 128) = 1; /*0x6edfbd*/
  return result; /*0x6edfc4*/
}



// ==== 0x006EDFD0  ObjectClass::method_6EDFD0  this=ObjectClass  sig=csp ====
void __thiscall sub_6EDFD0(int this, int a2, int a3)
{
  int v4; // esi
  char v5; // cl
  int v6; // [esp+8h] [ebp-4h] BYREF

  do /*0x6ee038*/
  {
    v4 = *(_DWORD *)(this + 84); /*0x6edfd5*/
    v5 = 0; /*0x6edfd8*/
    if ( !v4 ) /*0x6edfdc*/
      break; /*0x6edfdc*/
    do /*0x6ee034*/
    {
      if ( *(int *)(v4 + 108) > 0 && *(_BYTE *)(v4 + 144) && *(_BYTE *)(v4 + 116) && !*(_BYTE *)(v4 + 129) ) /*0x6edff6*/
      {
        v6 = *(_DWORD *)(v4 + 108); /*0x6ee008*/
        (*(void (__thiscall **)(int, int *, _DWORD, int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 364))( /*0x6ee024*/
          v4,
          &v6,
          0,
          g_RulesClass_Instance->SilverCrate[5],
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
  *(_BYTE *)(this + 128) = 1; /*0x6ee03a*/
}



// ==== 0x006EE050  ObjectClass::method_6EE050  this=ObjectClass  sig=csp ====
int __thiscall sub_6EE050(int this, int a2, int a3)
{
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  int result; // eax

  v4 = *(_DWORD **)(this + 84); /*0x6ee054*/
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
    *(_BYTE *)(this + 128) = 1; /*0x6ee07d*/
  }
  else
  {
    *(_BYTE *)(this + 128) = 1; /*0x6ee089*/
  }
  return result; /*0x6ee084*/
}



// ==== 0x006EE100  TacticalClass::Get  this=TacticalClass  sig=csp ====
int __thiscall sub_6EE100(int this, int a2, int a3)
{
  _DWORD *v4; // eax
  int result; // eax
  _DWORD v6[2]; // [esp+4h] [ebp-18h] BYREF
  int GroundHeight; // [esp+Ch] [ebp-10h]
  _BYTE v8[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 52) + 72))(*(_DWORD *)(this + 52), v8); /*0x6ee110*/
  v6[0] = *v4; /*0x6ee115*/
  v6[1] = v4[1]; /*0x6ee121*/
  GroundHeight = v4[2]; /*0x6ee12d*/
  GroundHeight = Cell::GetGroundHeight(v6); /*0x6ee140*/
  if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, v6) + 80) & 0x100) != 0 /*0x6ee16c*/
    || (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, v6) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E99C; /*0x6ee17a*/
  }
  result = TacticalClass::SetPosition(g_TacticalClass_Instance, v6, *(_DWORD *)(a2 + 4)); /*0x6ee191*/
  *(_BYTE *)(this + 128) = 1; /*0x6ee196*/
  return result; /*0x6ee19d*/
}



// ==== 0x006EE310  TeamClass::SelectAreaAttackTarget  this=TeamClass  sig=csp ====
char __thiscall sub_6EE310(int this, int a2, char a3)
{
  int v4; // edi
  #375 *v5; // edx
  int v6; // ebx
  _DWORD *v7; // eax
  int *v8; // esi
  char result; // al

  if ( a3 ) /*0x6ee31b*/
  {
    if ( *(_DWORD *)(this + 60) ) /*0x6ee31d*/
      goto LABEL_9; /*0x6ee322*/
    v4 = *(_DWORD *)(this + 84); /*0x6ee324*/
    if ( v4 ) /*0x6ee329*/
    {
      v5 = 0; /*0x6ee336*/
      v6 = *(_DWORD *)(*(_DWORD *)(v4 + 540) + 22016); /*0x6ee354*/
      if ( v6 != -1 ) /*0x6ee35d*/
        v5 = *(#375 **)&HouseClass_Array->gap0[4 * v6]; /*0x6ee365*/
      v7 = DamageMapClassArea( /*0x6ee376*/
             *((_DWORD *)g_TriggerTypeCount + (unsigned __int16)*(_DWORD *)(a2 + 4)),
             v5,
             v4,
             (unsigned __int16)HIWORD(*(_DWORD *)(a2 + 4)),
             *(_BYTE *)(*(_DWORD *)(this + 36) + 247));
      if ( v7 ) /*0x6ee37e*/
        TeamClass::SelectMember(this, (int)v7); /*0x6ee383*/
    }
  }
  if ( !*(_DWORD *)(this + 60) ) /*0x6ee38d*/
  {
LABEL_13:
    result = TeamClass::SelectMember(this, 0); /*0x6ee3be*/
    *(_BYTE *)(this + 128) = 1; /*0x6ee3c8*/
    return result; /*0x6ee3d1*/
  }
LABEL_9:
  v8 = *(int **)(this + 84); /*0x6ee38f*/
  if ( !v8 ) /*0x6ee394*/
    goto LABEL_13; /*0x6ee394*/
  while ( *(int *)((*(int (__thiscall **)(int *))(*v8 + 132))(v8) + 1668) > 0 && v8[191] <= 0 ) /*0x6ee3b2*/
  {
    v8 = (int *)v8[374]; /*0x6ee3b4*/
    if ( !v8 ) /*0x6ee3bc*/
      goto LABEL_13; /*0x6ee3bc*/
  }
  return TeamClass::AttackCoordinator((int *)this); /*0x6ee3c7*/
}



// ==== 0x006EE3F0  TeamClass::ProcessTeamMovement  this=TeamClass  sig=csp ====
void __thiscall sub_6EE3F0(int *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // esi
  #375 *v5; // edx
  int v6; // ebx
  _DWORD *v7; // ebx
  int v8; // edi
  int *v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  _DWORD *v13; // eax
  int v14; // eax
  int TileIndex; // [esp-38h] [ebp-64h]
  void *v16; // [esp-Ch] [ebp-38h]
  int v18; // [esp+Ch] [ebp-20h] BYREF
  int v19; // [esp+10h] [ebp-1Ch] BYREF
  int v20; // [esp+14h] [ebp-18h] BYREF
  int v21; // [esp+18h] [ebp-14h] BYREF
  int v22; // [esp+1Ch] [ebp-10h] BYREF
  _BYTE v23[8]; // [esp+20h] [ebp-Ch] BYREF
  int v24; // [esp+28h] [ebp-4h]
  int v25; // [esp+30h] [ebp+4h]

  v3 = (int)this; /*0x6ee3f4*/
  if ( !this->queuedFocus ) /*0x6ee3fb*/
  {
    v4 = this->u8_15; /*0x6ee406*/
    if ( v4 ) /*0x6ee40b*/
    {
      v5 = 0; /*0x6ee420*/
      v6 = *(_DWORD *)(*(_DWORD *)(v4 + 540) + 22016); /*0x6ee43b*/
      if ( v6 != -1 ) /*0x6ee444*/
        v5 = *(#375 **)&HouseClass_Array->gap0[4 * v6]; /*0x6ee44c*/
      v7 = DamageMapClassArea( /*0x6ee462*/
             *((_DWORD *)g_TriggerTypeCount + (unsigned __int16)*(_DWORD *)(a2 + 4)),
             v5,
             v4,
             (unsigned __int16)HIWORD(*(_DWORD *)(a2 + 4)),
             *(_BYTE *)(this->buildingType + 247));
      if ( v7 ) /*0x6ee466*/
      {
        v8 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 1460); /*0x6ee476*/
        v9 = v7 + 39; /*0x6ee47c*/
        v10 = *v9; /*0x6ee482*/
        v11 = v9[1]; /*0x6ee484*/
        v24 = v9[2]; /*0x6ee48f*/
        LOWORD(v25) = v10 / 256; /*0x6ee4a1*/
        v12 = *(_DWORD *)v4; /*0x6ee4b3*/
        HIWORD(v25) = v11 / 256; /*0x6ee4b8*/
        v21 = v25; /*0x6ee4c1*/
        v18 = 0; /*0x6ee4c7*/
        v13 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(v12 + 72))(v4, v23); /*0x6ee4d6*/
        LOWORD(v25) = *v13 / 256; /*0x6ee4ed*/
        HIWORD(v25) = v13[1] / 256; /*0x6ee50d*/
        LOBYTE(v13) = *(_BYTE *)(v4 + 140); /*0x6ee516*/
        v20 = v25; /*0x6ee520*/
        TileIndex = MapClass::GetTileIndex(&MapClass_Instance, (__int16 *)&v20, v8, (char)v13); /*0x6ee538*/
        v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4); /*0x6ee53b*/
        v19 = *LayerClass::Pathfinding_Find( /*0x6ee565*/
                 &MapClass_Instance,
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
        if ( v19 == dword_B0E948 ) /*0x6ee569*/
        {
          TeamClass::SelectMember((int)this, 0); /*0x6ee591*/
        }
        else
        {
          v16 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19); /*0x6ee588*/
          TeamClass::SelectMember((int)this, (int)v16); /*0x6ee589*/
        }
        v3 = (int)this; /*0x6ee596*/
      }
      if ( !*(_DWORD *)(v3 + 60) ) /*0x6ee59a*/
        *(_BYTE *)(v3 + 128) = 1; /*0x6ee5a3*/
    }
  }
  TeamClass::UpdateMembers(v3); /*0x6ee5ac*/
}



// ==== 0x006EE5C0  TeamClass::SelectBestMember  this=TeamClass  sig=csp ====
void __thiscall TeamClass::SelectBestMember(_DWORD *this, int a2, int a3)
{
  int v3; // ebp
  _BYTE *v4; // esi
  _DWORD *v5; // edi
  int v6; // ebx
  int v7; // ebp
  int v8; // ebx
  int v9; // edi
  int *v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  _DWORD *v14; // eax
  int v15; // eax
  int TileIndex; // [esp-30h] [ebp-60h]
  void *v17; // [esp-4h] [ebp-34h]
  int v19; // [esp+14h] [ebp-1Ch] BYREF
  int v20; // [esp+18h] [ebp-18h] BYREF
  int v21; // [esp+1Ch] [ebp-14h] BYREF
  int v22; // [esp+20h] [ebp-10h] BYREF
  _BYTE v23[8]; // [esp+24h] [ebp-Ch] BYREF
  int v24; // [esp+2Ch] [ebp-4h]

  v3 = (int)this; /*0x6ee5c9*/
  if ( (_BYTE)a3 ) /*0x6ee5d3*/
  {
    if ( this->queuedFocus ) /*0x6ee5d9*/
      goto LABEL_22; /*0x6ee5de*/
    v4 = (_BYTE *)this->firstUnit; /*0x6ee5e4*/
    if ( v4 ) /*0x6ee5e9*/
    {
      v5 = (_DWORD *)this->firstUnit; /*0x6ee5f9*/
      a3 = -1; /*0x6ee5fb*/
      v6 = (unsigned __int16)HIWORD(*(_DWORD *)(a2 + 4)); /*0x6ee613*/
      a2 = *((_DWORD *)g_TriggerTypeCount + (unsigned __int16)*(_DWORD *)(a2 + 4)); /*0x6ee61b*/
      do /*0x6ee683*/
      {
        v7 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v5 + 132))(v5) + 1532); /*0x6ee62b*/
        if ( v5 /*0x6ee673*/
          && *((_BYTE *)v5 + 144)
          && v5[27]
          && (g_IKnowWhatImDoing || !*((_BYTE *)v5 + 129))
          && (*((_BYTE *)v5 + 1673) || (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) == 2)
          && v7 > a3 )
        {
          v4 = v5; /*0x6ee675*/
          a3 = v7; /*0x6ee677*/
        }
        v5 = (_DWORD *)v5[374]; /*0x6ee67b*/
      }
      while ( v5 ); /*0x6ee683*/
      v3 = (int)this; /*0x6ee685*/
      v8 = TeamClass::ScoreMember(v4, v6, 0); /*0x6ee698*/
      if ( v8 ) /*0x6ee69c*/
      {
        v9 = *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 132))(v4) + 1460); /*0x6ee6ac*/
        v10 = (int *)(v8 + 156); /*0x6ee6b2*/
        v11 = *v10; /*0x6ee6bd*/
        v12 = v10[1]; /*0x6ee6bf*/
        v24 = v10[2]; /*0x6ee6c7*/
        LOWORD(a3) = v11 / 256; /*0x6ee6d7*/
        v13 = *(_DWORD *)v4; /*0x6ee6e9*/
        HIWORD(a3) = v12 / 256; /*0x6ee6ee*/
        v21 = a3; /*0x6ee6f7*/
        a2 = 0; /*0x6ee6fd*/
        v14 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(v13 + 72))(v4, v23); /*0x6ee70c*/
        LOWORD(a3) = *v14 / 256; /*0x6ee723*/
        HIWORD(a3) = v14[1] / 256; /*0x6ee743*/
        LOBYTE(v14) = v4[140]; /*0x6ee74c*/
        v20 = a3; /*0x6ee756*/
        TileIndex = MapClass::GetTileIndex(&MapClass_Instance, (__int16 *)&v20, v9, (char)v14); /*0x6ee76e*/
        v15 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 132))(v4); /*0x6ee771*/
        v19 = *LayerClass::Pathfinding_Find( /*0x6ee79b*/
                 &MapClass_Instance,
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
        if ( v19 == dword_B0E948 ) /*0x6ee79f*/
        {
          TeamClass::SelectMember((int)this, 0); /*0x6ee7c7*/
        }
        else
        {
          v17 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19); /*0x6ee7be*/
          TeamClass::SelectMember((int)this, (int)v17); /*0x6ee7bf*/
        }
        v3 = (int)this; /*0x6ee7cc*/
      }
    }
  }
  if ( !*(_DWORD *)(v3 + 60) ) /*0x6ee7d0*/
  {
    *(_BYTE *)(v3 + 128) = 1; /*0x6ee7d8*/
    return; /*0x6ee7e5*/
  }
LABEL_22:
  TeamClass::UpdateMembers(v3); /*0x6ee7e8*/
}



// ==== 0x006EE800  ObjectClass::SelectTeamMembers  this=ObjectClass  sig=csp ====
char __thiscall SelectTeamMembers(_DWORD *this, int a2, int a3)
{
  int v3; // edi
  int v4; // eax
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
  int v16; // eax
  char *v17; // esi
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
  int v37; // [esp+20h] [ebp-2Ch] BYREF
  _DWORD v38[4]; // [esp+24h] [ebp-28h] BYREF
  void **v39; // [esp+34h] [ebp-18h] BYREF
  void *Block; // [esp+38h] [ebp-14h]
  int v41; // [esp+3Ch] [ebp-10h]
  char v42; // [esp+41h] [ebp-Bh]
  int v43; // [esp+44h] [ebp-8h]
  int v44; // [esp+48h] [ebp-4h]

  v3 = (int)this; /*0x6ee807*/
  v33 = 1; /*0x6ee809*/
  if ( this->nextObject ) /*0x6ee812*/
  {
    v28 = (_DWORD *)this->q054; /*0x6eeaf6*/
    v29 = -1; /*0x6eeaf9*/
    v30 = v28; /*0x6eeafe*/
    if ( v28 ) /*0x6eeb00*/
    {
      do /*0x6eeb60*/
      {
        v31 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v28 + 132))(v28) + 1532); /*0x6eeb0c*/
        if ( *((_BYTE *)v28 + 144) /*0x6eeb52*/
          && v28[27]
          && (g_IKnowWhatImDoing || !*((_BYTE *)v28 + 129))
          && (*((_BYTE *)v28 + 1673) || (*(int (__thiscall **)(_DWORD *))(*v28 + 44))(v28) == 2)
          && v31 > v29 )
        {
          v30 = v28; /*0x6eeb54*/
          v29 = v31; /*0x6eeb56*/
        }
        v28 = (_DWORD *)v28[374]; /*0x6eeb58*/
      }
      while ( v28 ); /*0x6eeb60*/
      v3 = (int)this; /*0x6eeb62*/
    }
    if ( v30 && v30[43] != 2 && v30[45] != 2 ) /*0x6eeb7f*/
    {
      Team_Helper(*(_DWORD *)(v3 + 48)); /*0x6eeb88*/
      *(_DWORD *)(v3 + 48) = 0; /*0x6eeb8d*/
    }
  }
  else
  {
    v4 = this->fallRate; /*0x6ee81d*/
    v5 = 0; /*0x6ee820*/
    v6 = *(_DWORD *)(v4 + 22060); /*0x6ee822*/
    if ( v6 <= 0 ) /*0x6ee82a*/
      goto LABEL_47; /*0x6ee82a*/
    v7 = (_BYTE *)(*(_DWORD *)(v4 + 22048) + 4); /*0x6ee836*/
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
      v8 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v5 - 1); /*0x6ee85c*/
      v9 = *(_DWORD *)(v3 + 44); /*0x6ee861*/
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
      this->nextObject = *(_DWORD *)(v12 + 8 * v10); /*0x6ee894*/
LABEL_16:
      v3 = (int)this; /*0x6ee897*/
LABEL_17:
      VectorClass::BuildingConstructor(&v39, 0, 0); /*0x6ee89b*/
      v14 = 0; /*0x6ee8ad*/
      v15 = 0; /*0x6ee8af*/
      v39 = &DynamicVectorClass<BuildingClass *>::`vftable'; /*0x6ee8b1*/
      v44 = 10; /*0x6ee8bb*/
      v43 = 0; /*0x6ee8c3*/
      if ( g_BuildingProductionState > 0 ) /*0x6ee8c7*/
      {
        v16 = v41; /*0x6ee8c9*/
        do /*0x6ee8d6*/
        {
          v17 = (char *)g_BuildingClass_InstanceCount + 4 * v15; /*0x6ee8d6*/
          if ( *(_DWORD *)(v3 + 48) == *(_DWORD *)(*(_DWORD *)v17 + 540) ) /*0x6ee8e2*/
          {
            if ( v14 < v16 ) /*0x6ee8e6*/
              goto LABEL_25; /*0x6ee8e6*/
            if ( !v42 && v16 || v44 <= 0 ) /*0x6ee8fa*/
              goto LABEL_27; /*0x6ee8fa*/
            if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v39[2])(&v39, v44 + v16, 0) ) /*0x6ee909*/
            {
LABEL_25:
              v18 = v43++; /*0x6ee918*/
              *((_DWORD *)Block + v18) = *(_DWORD *)v17; /*0x6ee921*/
            }
            v16 = v41; /*0x6ee924*/
          }
LABEL_27:
          ++v15; /*0x6ee928*/
          v14 = v43; /*0x6ee931*/
        }
        while ( v15 < g_BuildingProductionState ); /*0x6ee8d6*/
      }
      if ( v14 <= 0 ) /*0x6ee939*/
      {
        Team_Helper(*(_DWORD *)(v3 + 48)); /*0x6eeab2*/
        *(_DWORD *)(v3 + 48) = 0; /*0x6eeab7*/
      }
      else
      {
        v19 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v14 - 1); /*0x6ee94e*/
        v20 = *(_DWORD *)(v3 + 84); /*0x6ee957*/
        v21 = -1; /*0x6ee95a*/
        v22 = v20; /*0x6ee95d*/
        for ( i = (_DWORD *)*((_DWORD *)Block + v19); v20; v20 = *(_DWORD *)(v20 + 1496) ) /*0x6ee968*/
        {
          v23 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v20 + 132))(v20) + 1532); /*0x6ee974*/
          if ( *(_BYTE *)(v20 + 144) /*0x6ee9ba*/
            && *(_DWORD *)(v20 + 108)
            && (g_IKnowWhatImDoing || !*(_BYTE *)(v20 + 129))
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
        v37 = *LayerClass::Pathfinding_Find( /*0x6eea67*/
                 &MapClass_Instance,
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
        if ( v37 == dword_B0E948 ) /*0x6eea6b*/
        {
          TeamClass::SelectMember((int)this, 0); /*0x6eeaa0*/
        }
        else
        {
          v27 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v37); /*0x6eea85*/
          TeamClass::SelectMember((int)this, (int)v27); /*0x6eea8f*/
        }
        v3 = (int)this; /*0x6eeaa5*/
      }
      v39 = &VectorClass<BuildingClass *>::`vftable'; /*0x6eeac2*/
      if ( Block && v42 ) /*0x6eead8*/
        __3_YAXPAX_Z(Block); /*0x6eeadf*/
    }
  }
  TeamClass::UpdateMembers(v3); /*0x6eeb96*/
  result = v33; /*0x6eeb9b*/
  if ( v33 ) /*0x6eeba1*/
    *(_BYTE *)(v3 + 128) = 0; /*0x6eeba3*/
  else
    *(_BYTE *)(v3 + 128) = 1; /*0x6eebb4*/
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
  if ( g_BuildingProductionState <= 0 ) /*0x6eec07*/
  {
LABEL_22:
    if ( !a5 ) /*0x6eee74*/
      return v37; /*0x6eee76*/
    return result; /*0x6eee76*/
  }
  do /*0x6eee55*/
  {
    v7 = (_DWORD *)*((_DWORD *)g_BuildingClass_InstanceCount + v5); /*0x6eec1a*/
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
  while ( v35 < g_BuildingProductionState ); /*0x6eee55*/
  result = v36; /*0x6eee5b*/
  if ( !v36 || v31 <= v32 ) /*0x6eee6d*/
    goto LABEL_22; /*0x6eee6d*/
  return result; /*0x6eee7a*/
}



// ==== 0x006EEEA0  TeamClass::ScoreMember  this=TeamClass  sig=csp ====
_DWORD *__thiscall TeamClass::ScoreMember(void *this, _DWORD *a2, int a3, int a4)
{
  _DWORD *result; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // edx
  _DWORD *v8; // esi
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // edx
  _DWORD *v12; // eax
  int v13; // edx
  int TileData; // eax
  int v15; // ebx
  int v16; // ecx
  int v17; // edx
  double v18; // st7
  int v19; // ebx
  int v20; // ecx
  int v21; // edx
  double v22; // st7
  int v23; // [esp+18h] [ebp-70h]
  int v24; // [esp+1Ch] [ebp-6Ch]
  int v25; // [esp+20h] [ebp-68h]
  _DWORD *v26; // [esp+24h] [ebp-64h]
  int v27; // [esp+28h] [ebp-60h]
  int v28; // [esp+2Ch] [ebp-5Ch]
  int v30; // [esp+34h] [ebp-54h] BYREF
  int v31; // [esp+38h] [ebp-50h] BYREF
  int v32; // [esp+3Ch] [ebp-4Ch]
  int v33; // [esp+40h] [ebp-48h]
  int v34; // [esp+44h] [ebp-44h]
  int v35; // [esp+48h] [ebp-40h]
  int v36; // [esp+4Ch] [ebp-3Ch]
  int v37; // [esp+50h] [ebp-38h]
  int v38; // [esp+54h] [ebp-34h]
  int v39; // [esp+5Ch] [ebp-2Ch]
  int v40; // [esp+60h] [ebp-28h]
  int v41; // [esp+68h] [ebp-20h]
  int v42; // [esp+6Ch] [ebp-1Ch]
  char v43[12]; // [esp+70h] [ebp-18h] BYREF
  char v44[12]; // [esp+7Ch] [ebp-Ch] BYREF

  result = 0; /*0x6eeeb3*/
  v5 = a2[135]; /*0x6eeeb5*/
  v6 = 0; /*0x6eeebb*/
  v26 = 0; /*0x6eeebd*/
  v25 = -1; /*0x6eeec1*/
  v28 = v5; /*0x6eeecc*/
  v32 = *(_DWORD *)(v5 + 120); /*0x6eeed2*/
  v27 = 0; /*0x6eeed6*/
  if ( v32 > 0 ) /*0x6eeeda*/
  {
    v7 = a3; /*0x6eeee0*/
    while ( 1 ) /*0x6eeeef*/
    {
      v8 = *(_DWORD **)(*(_DWORD *)(v5 + 108) + 4 * v6); /*0x6eeeef*/
      if ( (void *)v8[328] == this ) /*0x6eeefc*/
      {
        v9 = -1; /*0x6eef02*/
        switch ( v7 ) /*0x6eef0e*/
        {
          case 0: /*0x6eef0e*/
            v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v8 + 72))(v8, v43); /*0x6eef1e*/
            LOWORD(v23) = *v10 / 256; /*0x6eef31*/
            v11 = a2[135]; /*0x6eef42*/
            HIWORD(v23) = v10[1] / 256; /*0x6eef4b*/
            v30 = v23; /*0x6eef58*/
            v9 = 0x7FFFFFFF - CellClass::GetTileData((__int16 *)&v30, v11); /*0x6eef6d*/
            break; /*0x6eef6f*/
          case 1: /*0x6eef0e*/
            v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v8 + 72))(v8, v44); /*0x6eef7d*/
            LOWORD(v24) = *v12 / 256; /*0x6eef90*/
            v13 = a2[135]; /*0x6eefa1*/
            HIWORD(v24) = v12[1] / 256; /*0x6eefaa*/
            v31 = v24; /*0x6eefb7*/
            TileData = CellClass::GetTileData((__int16 *)&v31, v13); /*0x6eefc2*/
            goto LABEL_10; /*0x6eefc7*/
          case 2: /*0x6eef0e*/
            v15 = a2[39]; /*0x6eefd5*/
            v39 = a2[40]; /*0x6eefda*/
            v40 = a2[41]; /*0x6eefe9*/
            v16 = v8[40]; /*0x6eeff5*/
            v33 = v8[39] - v15; /*0x6eeff8*/
            v17 = v8[41]; /*0x6eeffe*/
            v34 = v16 - v39; /*0x6ef001*/
            v35 = v17 - v40; /*0x6ef00f*/
            v18 = Math::Sqrt( /*0x6ef034*/
                    (double)v33 * (double)v33
                  + (double)(v17 - v40) * (double)(v17 - v40)
                  + (double)(v16 - v39) * (double)(v16 - v39));
            v9 = 0x7FFFFFFF - Math::RoundToInt(v18); /*0x6ef046*/
            break; /*0x6ef048*/
          case 3: /*0x6eef0e*/
            v19 = a2[39]; /*0x6ef053*/
            v41 = a2[40]; /*0x6ef058*/
            v42 = a2[41]; /*0x6ef065*/
            v20 = v8[40]; /*0x6ef073*/
            v36 = v8[39] - v19; /*0x6ef076*/
            v21 = v8[41]; /*0x6ef07e*/
            v37 = v20 - v41; /*0x6ef083*/
            v38 = v21 - v42; /*0x6ef08d*/
            v22 = Math::Sqrt( /*0x6ef0b2*/
                    (double)v36 * (double)v36
                  + (double)(v21 - v42) * (double)(v21 - v42)
                  + (double)(v20 - v41) * (double)(v20 - v41));
            TileData = Math::RoundToInt(v22); /*0x6ef0ba*/
LABEL_10:
            v9 = TileData; /*0x6ef0bf*/
            break; /*0x6ef0bf*/
          default:
            break;
        }
        if ( v9 <= v25 ) /*0x6ef0c5*/
        {
          result = v26; /*0x6ef0d3*/
        }
        else
        {
          result = v8; /*0x6ef0c7*/
          v25 = v9; /*0x6ef0c9*/
          v26 = v8; /*0x6ef0cd*/
        }
      }
      v6 = ++v27; /*0x6ef0df*/
      if ( v27 >= v32 ) /*0x6ef0e6*/
        break; /*0x6ef0e6*/
      v7 = a3; /*0x6eeee5*/
      v5 = v28; /*0x6eeee8*/
    }
  }
  return result; /*0x6ef0ec*/
}



// ==== 0x006EF110  ObjectClass::DispatchTeamOrders  this=ObjectClass  sig=csp ====
char __thiscall DispatchTeamOrders(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // ebx
  int v4; // esi
  int v5; // ebp
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  _DWORD *v11; // esi
  int v12; // ebp
  int v13; // edi
  int v14; // ebx
  _DWORD *v15; // edi
  _DWORD *v16; // ebp
  char v18; // [esp+19h] [ebp-19h]
  int v20; // [esp+1Eh] [ebp-14h] BYREF
  _BYTE v21[12]; // [esp+26h] [ebp-Ch] BYREF
  char v22; // [esp+36h] [ebp+4h]

  v3 = this; /*0x6ef114*/
  v4 = this->q054; /*0x6ef118*/
  v18 = 1; /*0x6ef122*/
  if ( !v4 ) /*0x6ef127*/
    goto LABEL_28; /*0x6ef127*/
  do /*0x6ef2ab*/
  {
    v5 = *(_DWORD *)(v4 + 1496); /*0x6ef12d*/
    if ( v4 && *(_BYTE *)(v4 + 144) ) /*0x6ef13b*/
    {
      if ( *(_DWORD *)(v4 + 108) && (g_IKnowWhatImDoing || !*(_BYTE *)(v4 + 129)) && !*(_BYTE *)(v4 + 1673) ) /*0x6ef16b*/
      {
        v6 = *SessionClass::GetEntry((_DWORD *)v3[10], &v20); /*0x6ef182*/
        if ( v6 == 54 || v6 == 53 ) /*0x6ef18c*/
          v7 = g_RulesClass_Instance[1].PrerequisitePower[1]; /*0x6ef1a2*/
        else
          v7 = g_RulesClass_Instance[1].PrerequisitePower[0]; /*0x6ef194*/
        if ( ObjectClass::DistanceTo((void *)v4, v3[13]) <= v7 ) /*0x6ef1b5*/
        {
          *(_BYTE *)(v4 + 1673) = 1; /*0x6ef1ed*/
        }
        else if ( !*(_DWORD *)(v4 + 1444) ) /*0x6ef1b7*/
        {
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 488))(v4, 2, 0); /*0x6ef1c9*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 968))(v4, 0); /*0x6ef1d5*/
          (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v4 + 1152))(v4, v3[13], 1); /*0x6ef1e5*/
        }
      }
      if ( *(_BYTE *)(v4 + 144) /*0x6ef238*/
        && *(_DWORD *)(v4 + 108)
        && (g_IKnowWhatImDoing || !*(_BYTE *)(v4 + 129))
        && (*(_BYTE *)(v4 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 2) )
      {
        if ( *(_DWORD *)(v4 + 280) ) /*0x6ef23a*/
        {
          v18 = 0; /*0x6ef24d*/
          v8 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v21); /*0x6ef252*/
          v9 = Coord::To_Cell(&MapClass_Instance, v8); /*0x6ef25b*/
          if ( !Cell::IsBridge(v9) && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 388))(v4) != 16 ) /*0x6ef278*/
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
    v11 = (_DWORD *)v3[21]; /*0x6ef2c4*/
    v12 = 0; /*0x6ef2c7*/
    v10 = *(_DWORD *)(v3[9] + 228); /*0x6ef2c9*/
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
        v10 = *(_DWORD *)(this->objectTypeFlags + 228); /*0x6ef30d*/
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
        v16 = (_DWORD *)v11[374]; /*0x6ef332*/
        v10 = (*(int (__thiscall **)(_DWORD *))(*v11 + 132))(v11); /*0x6ef33a*/
        if ( !*(_DWORD *)(v10 + 1504) ) /*0x6ef340*/
          break; /*0x6ef340*/
        if ( v22 ) /*0x6ef354*/
        {
          v10 = (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11); /*0x6ef35a*/
          if ( v10 != 2 ) /*0x6ef360*/
            break; /*0x6ef360*/
        }
        v10 = (*(int (__thiscall **)(_DWORD *))(*v11 + 132))(v11); /*0x6ef36a*/
        if ( *(int *)(v10 + 1504) > 0 ) /*0x6ef378*/
        {
          LOBYTE(v10) = *(_BYTE *)(v3[9] + 244); /*0x6ef381*/
          if ( (_BYTE)v10 ) /*0x6ef389*/
          {
            TeamClass::LiberateMember_Start(v11, -1, 0); /*0x6ef392*/
            (*(void (__thiscall **)(_DWORD *, _DWORD))(*v11 + 968))(v11, 0); /*0x6ef39d*/
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v11 + 1152))(v11, v11[134], 1); /*0x6ef3b0*/
            (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v11 + 488))(v11, 2, 0); /*0x6ef3be*/
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 512))(v11) ) /*0x6ef3c8*/
              (*(void (__thiscall **)(_DWORD *))(*v11 + 492))(v11); /*0x6ef3d6*/
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
      TeamClass::LiberateMember_Start(v11, -1, 0); /*0x6ef40f*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v11 + 968))(v11, 0); /*0x6ef421*/
      LOBYTE(v10) = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v11 + 1152))(v11, 0, 1); /*0x6ef42f*/
      goto LABEL_51; /*0x6ef42f*/
    }
LABEL_52:
    *((_BYTE *)v3 + 128) = 1; /*0x6ef43f*/
  }
  return v10; /*0x6ef446*/
}



// ==== 0x006EF450  ObjectClass::method_6EF450  this=ObjectClass  sig=csp ====
char __thiscall sub_6EF450(_BYTE *this, int a2, int a3)
{
  this->needsRedraw = 1; /*0x6ef452*/
  this->hasParachute = 1; /*0x6ef458*/
  return 1; /*0x6ef45e*/
}



// ==== 0x006EF470  ObjectClass::Team_Create  this=ObjectClass  sig=csp ====
char __thiscall sub_6EF470(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  int i; // ebx
  int *v5; // esi

  v2 = 0; /*0x6ef476*/
  v3 = *(_DWORD *)(this->objectTypeFlags + 228); /*0x6ef47b*/
  if ( *(int *)(v3 + 156) <= 0 ) /*0x6ef489*/
    return 0; /*0x6ef4be*/
  for ( i = 168; ; i += 8 ) /*0x6ef48b*/
  {
    v5 = *(int **)(i + v3); /*0x6ef490*/
    if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 3 && v5[376] > 0 ) /*0x6ef4a7*/
      break; /*0x6ef4a7*/
    ++v2; /*0x6ef4ac*/
    v3 = *(_DWORD *)(this->objectTypeFlags + 228); /*0x6ef4b0*/
    if ( v2 >= *(_DWORD *)(v3 + 156) ) /*0x6ef4bc*/
      return 0; /*0x6ef4bc*/
  }
  return 1; /*0x6ef4be*/
}



// ==== 0x006EF4D0  HouseClass::UpdateProductionQueue  this=HouseClass  sig=csp ====
int __thiscall HouseClass_UpdateProductionQueue(_DWORD *this, int a2)
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
  result = *(_DWORD *)(this->vtable5 + 228); /*0x6ef4de*/
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
      result = *(_DWORD *)(this->vtable5 + 228); /*0x6ef54f*/
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
int __thiscall sub_6EF5F0(_DWORD *this, int a2)
{
  int result; // eax

  for ( result = this->q054; result; result = *(_DWORD *)(result + 1496) ) /*0x6ef5f5*/
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
    && (unsigned __int16)v3 < g_BuildingTypeCount2
    && (v4 = *(_DWORD *)(this + 84),
        v5 = HIWORD(v3),
        v6 = (void *)*((_DWORD *)g_AnimTypeCount + (unsigned __int16)v3),
        v4) )
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
    if ( v6 == -1 || (v7 = *(_DWORD **)&HouseClass_Array->gap0[4 * v6]) == 0 ) /*0x6ef7a7*/
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
    v19 = HIDWORD(g_RulesClass_Instance->RefineryRatio) << 8; /*0x6ef8a7*/
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
             &MapClass_Instance,
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
    v24 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v26); /*0x6ef99f*/
    v25 = v27; /*0x6ef9a4*/
    TeamClass::SelectMember(v27, (int)v24); /*0x6ef9ab*/
    Debug::Log(); /*0x6ef9c8*/
    this = v25; /*0x6ef9d0*/
  }
  TeamClass::UpdateMembers(this); /*0x6ef9d2*/
}



// ==== 0x006EF9E0  TechnoClass::IsDeployed  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass_IsDeployed(int this)
{
  return this && *(_BYTE *)(this + 144) && *(_DWORD *)(this + 108) && (g_IKnowWhatImDoing || !*(_BYTE *)(this + 129)); /*0x6efa0a*/
}



// ==== 0x006EFA10  TeamClass::SelectDeploymentTarget  this=TeamClass  sig=csp ====
void __thiscall TeamClass::SelectDeploymentTarget(int *this, int a2, char a3)
{
  int v3; // esi
  _DWORD *i; // edi
  int v5; // ebx
  _DWORD *v6; // esi
  int v7; // eax
  int *StartCoords; // eax
  int v9; // ebx
  int v10; // ecx
  char v11; // al
  __int16 v12; // cx
  __int16 v13; // ax
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // edx
  double v17; // st7
  int v18; // edx
  double v19; // st7
  double v20; // st7
  int v21; // eax
  void *v22; // eax
  int v23; // [esp+1Ch] [ebp-3Ch] BYREF
  double v24; // [esp+20h] [ebp-38h] BYREF
  int *v25; // [esp+2Ch] [ebp-2Ch]
  double v26; // [esp+30h] [ebp-28h] BYREF
  double v27; // [esp+38h] [ebp-20h] BYREF
  int v28; // [esp+40h] [ebp-18h]
  int v29; // [esp+4Ch] [ebp-Ch]
  int v30; // [esp+50h] [ebp-8h]
  int v31; // [esp+54h] [ebp-4h]

  v25 = this; /*0x6efa21*/
  if ( a3 ) /*0x6efa25*/
  {
    v3 = this->u8_15; /*0x6efa2b*/
    LODWORD(v24) = -1; /*0x6efa2e*/
    for ( i = (_DWORD *)v3; v3; v3 = *(_DWORD *)(v3 + 1496) ) /*0x6efa3a*/
    {
      v5 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 132))(v3) + 1532); /*0x6efa46*/
      if ( TechnoClass::IsDeployed(v3) /*0x6efa71*/
        && (*(_BYTE *)(v3 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 2)
        && v5 > SLODWORD(v24) )
      {
        i = (_DWORD *)v3; /*0x6efa73*/
        LODWORD(v24) = v5; /*0x6efa75*/
      }
    }
    v6 = 0; /*0x6efa83*/
    if ( i ) /*0x6efa87*/
    {
      v7 = *(_DWORD *)(i[135] + 22016); /*0x6efa8f*/
      if ( v7 != -1 ) /*0x6efa98*/
        v6 = *(_DWORD **)&HouseClass_Array->gap0[4 * v7]; /*0x6efaa0*/
    }
    StartCoords = HouseClass::GetStartCoords((_DWORD *)i[135], &v27); /*0x6efaae*/
    v9 = *StartCoords; /*0x6efab3*/
    v10 = StartCoords[1]; /*0x6efab7*/
    v29 = *StartCoords; /*0x6efaba*/
    v30 = v10; /*0x6efabe*/
    v31 = StartCoords[2]; /*0x6efac5*/
    if ( v6 ) /*0x6efac9*/
    {
      v14 = HouseClass::GetStartCoords(v6, &v27); /*0x6efaf7*/
      v15 = v14[1] - v30; /*0x6efb0f*/
      v16 = v14[2]; /*0x6efb11*/
      LODWORD(v27) = *v14 - v9; /*0x6efb14*/
      LODWORD(v24) = -v15; /*0x6efb1e*/
      v28 = v16; /*0x6efb22*/
      v17 = Math::CalcAngle((double)-v15, (double)SLODWORD(v27)); /*0x6efb31*/
      v13 = Math::RoundToInt((v17 - 1.570796326794897) * -10430.06004058427); /*0x6efb45*/
      LOWORD(v24) = v13; /*0x6efb4a*/
    }
    else
    {
      v11 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 255); /*0x6efadc*/
      LOBYTE(v12) = 0; /*0x6efae1*/
      HIBYTE(v12) = v11; /*0x6efae3*/
      v13 = v12; /*0x6efaea*/
    }
    LODWORD(v24) = v13 - 0x3FFF; /*0x6efb61*/
    v18 = HIDWORD(g_RulesClass_Instance->RefineryRatio) << 8; /*0x6efb6f*/
    v24 = (double)SLODWORD(v24) * -0.00009587672516830327; /*0x6efb7c*/
    v27 = (double)v18; /*0x6efb8e*/
    v26 = (double)v30; /*0x6efb96*/
    v19 = Math::SinCos(v24); /*0x6efb9a*/
    LODWORD(v26) = Math::RoundToInt(v26 - v19 * v27); /*0x6efbae*/
    v20 = Math::ArcTan2(v24); /*0x6efbb2*/
    LOWORD(v24) = (int)Math::RoundToInt(v20 * v27 + (double)v29) / 256; /*0x6efbd7*/
    WORD1(v24) = SLODWORD(v26) / 256; /*0x6efbef*/
    v23 = LODWORD(v24); /*0x6efc01*/
    LODWORD(v24) = 0; /*0x6efc0d*/
    v21 = (*(int (__thiscall **)(_DWORD *))(*i + 132))(i); /*0x6efc1e*/
    v23 = *LayerClass::Pathfinding_Find( /*0x6efc4b*/
             &MapClass_Instance,
             (int)&v26,
             &v26,
             (__int16 *)&v23,
             *(_DWORD *)(v21 + 1660),
             -1,
             0,
             0,
             3,
             3,
             0,
             0,
             0,
             1,
             (__int16 *)&v24,
             0,
             0);
    v22 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v23); /*0x6efc4f*/
    TeamClass::SelectMember((int)v25, (int)v22); /*0x6efc59*/
    this = v25; /*0x6efc5e*/
  }
  TeamClass::UpdateMembers((int)this); /*0x6efc62*/
}



// ==== 0x006EFC70  ObjectClass::ProcessAISuperWeaponSelection  this=ObjectClass  sig=csp ====
void __thiscall sub_6EFC70(int *this, int a2, int a3)
{
  int v3; // esi
  int v4; // ebp
  int i; // ebx
  int v6; // edi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int j; // edx
  int v11; // esi
  int *v12; // ebp
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int *v17; // [esp+10h] [ebp-18h] BYREF
  int v18; // [esp+14h] [ebp-14h]
  int DefaultTimer; // [esp+18h] [ebp-10h]
  char v20[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v3 = this->u8_15; /*0x6efc76*/
  v4 = -1; /*0x6efc79*/
  v17 = this; /*0x6efc7f*/
  for ( i = v3; v3; v3 = *(_DWORD *)(v3 + 1496) ) /*0x6efc85*/
  {
    v6 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 132))(v3) + 1532); /*0x6efc91*/
    if ( TechnoClass::IsDeployed(v3) /*0x6efcba*/
      && (*(_BYTE *)(v3 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 2)
      && v6 > v4 )
    {
      i = v3; /*0x6efcbc*/
      v4 = v6; /*0x6efcbe*/
    }
  }
  if ( !i ) /*0x6efccc*/
  {
    *((_BYTE *)v17 + 128) = 1; /*0x6efcd5*/
    return; /*0x6efce0*/
  }
  v7 = *(_DWORD *)(i + 540); /*0x6efce3*/
  v8 = 0; /*0x6efce9*/
  v9 = *(_DWORD *)(v7 + 612); /*0x6efcf0*/
  if ( v9 <= 0 ) /*0x6efcf8*/
    goto LABEL_16; /*0x6efcf8*/
  for ( j = *(_DWORD *)(v7 + 600); *(_DWORD *)(*(_DWORD *)(*(_DWORD *)j + 40) + 180) != 1; j += 4 ) /*0x6efd00*/
  {
    if ( ++v8 >= v9 ) /*0x6efd15*/
    {
      *((_BYTE *)v17 + 128) = 1; /*0x6efd1e*/
      return; /*0x6efd28*/
    }
  }
  v11 = *(_DWORD *)(*(_DWORD *)(v7 + 600) + 4 * v8); /*0x6efd2b*/
  if ( !v11 ) /*0x6efd30*/
  {
LABEL_16:
    *((_BYTE *)v17 + 128) = 1; /*0x6efd39*/
    return; /*0x6efd43*/
  }
  if ( *(_BYTE *)(v11 + 111) && HouseClass::GetPowerRatio((int *)v7) >= 1.0 ) /*0x6efd5f*/
  {
    v12 = v17; /*0x6efd61*/
    v13 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v17[13] + 72))(v17[13], v20); /*0x6efd6f*/
    LOWORD(v18) = *v13 / 256; /*0x6efd82*/
    HIWORD(v18) = v13[1] / 256; /*0x6efd9a*/
    v14 = *(_DWORD *)(v11 + 40); /*0x6efda3*/
    v17 = (int *)v18; /*0x6efda6*/
    SuperWeapon::FireSuperWeaponHouseClass((#375 *)v7, *(_DWORD *)(v14 + 180), (int)&v17); /*0x6efdb4*/
    *((_BYTE *)v12 + 128) = 1; /*0x6efdba*/
    return; /*0x6efdc6*/
  }
  v15 = *(_DWORD *)(v11 + 48); /*0x6efdc9*/
  v16 = *(_DWORD *)(v11 + 56); /*0x6efdcc*/
  if ( v15 == -1 ) /*0x6efdd2*/
    goto LABEL_23; /*0x6efdd2*/
  if ( (int)g_CurrentFrame - v15 < v16 ) /*0x6efddd*/
  {
    v16 -= (int)g_CurrentFrame - v15; /*0x6efddf*/
LABEL_23:
    v18 = v16; /*0x6efde1*/
    goto LABEL_24; /*0x6efde1*/
  }
  v18 = 0; /*0x6efe32*/
LABEL_24:
  DefaultTimer = Super::GetDefaultTimer((_DWORD *)v11); /*0x6efde5*/
  if ( *(_BYTE *)(v11 + 109) ) /*0x6efdf0*/
  {
    if ( 1.0 - *(float *)&g_RulesClass_Instance->RefineryRatio < (double)v18 / (double)DefaultTimer ) /*0x6efe1c*/
      *((_BYTE *)v17 + 128) = 1; /*0x6efe25*/
  }
  else
  {
    *((_BYTE *)v17 + 128) = 1; /*0x6efe42*/
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
      v15 = *(#375 **)&HouseClass_Array->gap0[4 * v16]; /*0x6eff9a*/
    v17 = v24; /*0x6eff9d*/
    v18 = DamageMapClassArea( /*0x6effb4*/
            *((_DWORD *)g_TriggerTypeCount + (unsigned __int16)*(_DWORD *)(a2 + 4)),
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
  if ( (int)g_CurrentFrame - v21 < v22 ) /*0x6f009a*/
  {
    v22 -= (int)g_CurrentFrame - v21; /*0x6f009c*/
LABEL_30:
    v29 = v22; /*0x6f009e*/
    goto LABEL_31; /*0x6f009e*/
  }
  v29 = 0; /*0x6f00ef*/
LABEL_31:
  DefaultTimerSuper = Super::GetDefaultTimer((_DWORD *)v9); /*0x6f00a2*/
  if ( *(_BYTE *)(v9 + 109) ) /*0x6f00ad*/
  {
    if ( 1.0 - *(float *)&g_RulesClass_Instance->RefineryRatio < (double)v29 / (double)DefaultTimerSuper ) /*0x6f00d8*/
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
char __thiscall sub_6E0080(int *this, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int v6; // edi
  __int16 v7; // bp
  _BYTE *v8; // esi
  _WORD *v9; // eax
  int v11; // [esp+8h] [ebp-4h] BYREF

  v5 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v11, this->q011); /*0x6e0097*/
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
char __thiscall ScenarioClass::Create(int *this, int a2, int a3, ParticleSystemClass *aP3, ParticleSystemClass *aP4)
{
  int v6; // eax
  ParticleSystemClass *v8; // [esp+4h] [ebp-1Ch] BYREF
  int v9; // [esp+8h] [ebp-18h] BYREF
  int v10; // [esp+Ch] [ebp-14h]
  int GroundHeight; // [esp+10h] [ebp-10h]
  _DWORD v12[3]; // [esp+14h] [ebp-Ch] BYREF

  v8 = (ParticleSystemClass *)*ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v8, this->q011); /*0x6e012f*/
  GroundHeight = 0; /*0x6e014c*/
  v12[2] = 0; /*0x6e0150*/
  v10 = (SHIWORD(v8) << 8) + 128; /*0x6e0158*/
  v12[1] = v10; /*0x6e015c*/
  v9 = ((__int16)v8 << 8) + 128; /*0x6e0166*/
  v12[0] = v9; /*0x6e016a*/
  GroundHeight = Cell::GetGroundHeight(v12); /*0x6e0178*/
  v6 = __2_YAPAXI_Z(0x100u); /*0x6e017c*/
  if ( v6 ) /*0x6e0186*/
    ParticleSystemClass::Constructor( /*0x6e01aa*/
      v6,
      *(_DWORD *)&MEMORY[0xA83D6C]->__pad_0[4 * this->q024],
      &v9,
      0,
      0,
      &MEMORY[0xB077F8].__pad_579C[5900],
      0);
  return 1; /*0x6e01b1*/
}


// ==== 0x006E01C0  globalHelper_0E01C0  this=-  sig=csp ====
char __stdcall globalHelper_0E01C0(int a1, int a2, int aP1, IUnknown *aP3)
{
  int v4; // edi
  _BYTE *v5; // esi
  _DWORD *v6; // ecx

  v4 = 0; /*0x6e01c6*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22996] <= 0 ) /*0x6e01ca*/
    return 1; /*0x6e0245*/
  do /*0x6e023b*/
  {
    v5 = *(_BYTE **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22984] + 4 * v4); /*0x6e01d7*/
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 44))(v5) != 6 ) /*0x6e01e4*/
    {
      if ( v5[144] ) /*0x6e01e6*/
      {
        if ( v5[116] ) /*0x6e01f0*/
        {
          v6 = (_DWORD *)*((_DWORD *)v5 + 13); /*0x6e01f7*/
          if ( v6 ) /*0x6e01fc*/
          {
            if ( LinkedList::Contains(v6, (IUnknown *)aP1) /*0x6e0223*/
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
  while ( v4 < *(int *)&HouseClass_Player.__pad_5568[22996] ); /*0x6e023b*/
  return 1; /*0x6e0241*/
}


// ==== 0x006E0250  ObjectClass::method_6E0250  this=ObjectClass  sig=csp ====
char __thiscall sub_6E0250(_BYTE *this, int a2, int a3, int a4, int a5)
{
  *((_BYTE *)MEMORY[0xA8B230] + 13479) = this->isAliveFlag; /*0x6e025c*/
  return 1; /*0x6e0264*/
}


// ==== 0x006E0270  ObjectClass::method_6E0270  this=ObjectClass  sig=csp ====
char __thiscall sub_6E0270(_BYTE *this, int a2, int a3, int a4, int a5)
{
  *((_BYTE *)MEMORY[0xA8B230] + 13478) = this->isAliveFlag; /*0x6e027c*/
  return 1; /*0x6e0284*/
}


// ==== 0x006E0290  ObjectClass::method_6E0290  this=ObjectClass  sig=csp ====
char __thiscall sub_6E0290(_BYTE *this, int a2, int a3, int a4, int a5)
{
  *((_BYTE *)MEMORY[0xA8B230] + 13480) = this->isAliveFlag; /*0x6e029c*/
  return 1; /*0x6e02a4*/
}


// ==== 0x006E0490  ObjectClass::PlayWaypointEffect  this=ObjectClass  sig=csp ====
char __thiscall PlayWaypointEffect(int *this, int a2, int a3, int a4, IUnknown *aP4)
{
  int *WorldCoords; // eax
  _DWORD *v7; // eax
  IUnknown *v8; // eax
  _DWORD *v9; // eax
  IUnknown *v10; // eax
  _DWORD *v11; // eax
  IUnknown *v12; // eax
  _DWORD *v13; // eax
  IUnknown *v14; // eax
  int v15; // esi
  int v16; // edx
  IUnknown *v18; // [esp+8h] [ebp-38h] BYREF
  int v19; // [esp+Ch] [ebp-34h] BYREF
  int v20; // [esp+10h] [ebp-30h] BYREF
  IUnknown *v21; // [esp+14h] [ebp-2Ch]
  int v22; // [esp+18h] [ebp-28h]
  int a1; // [esp+1Ch] [ebp-24h] BYREF
  int v24; // [esp+20h] [ebp-20h]
  int v25; // [esp+24h] [ebp-1Ch]
  _DWORD v26[3]; // [esp+28h] [ebp-18h] BYREF
  _DWORD v27[3]; // [esp+34h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((__int16 *)MEMORY[0xA8B230], &v20, this->objectTypeFlags); /*0x6e04a9*/
  a1 = *WorldCoords; /*0x6e04b2*/
  v24 = WorldCoords[1]; /*0x6e04bb*/
  v25 = WorldCoords[2]; /*0x6e04c7*/
  PlaySoundEffectAt(&a1, 100, 0, *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4008), 1, 0); /*0x6e04dd*/
  v7 = Cell::GetWorldCoords((__int16 *)MEMORY[0xA8B230], &v20, this->objectTypeFlags); /*0x6e04f4*/
  v8 = Coord::Subtract(v26, (IUnknown *)(*v7 + 85), (IUnknown *)(v7[1] + 85), (IUnknown *)v7[2]); /*0x6e0510*/
  a1 = v8->field_0; /*0x6e0519*/
  v24 = v8->field_4; /*0x6e0528*/
  v25 = v8->field_8; /*0x6e052f*/
  PlaySoundEffectAt(&a1, 100, 0, *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4008), 1, 0); /*0x6e0545*/
  v9 = Cell::GetWorldCoords((__int16 *)MEMORY[0xA8B230], v26, this->objectTypeFlags); /*0x6e055c*/
  v10 = Coord::Subtract(&v20, (IUnknown *)(*v9 - 85), (IUnknown *)(v9[1] + 85), (IUnknown *)v9[2]); /*0x6e0578*/
  a1 = v10->field_0; /*0x6e0581*/
  v24 = v10->field_4; /*0x6e058a*/
  v25 = v10->field_8; /*0x6e0591*/
  PlaySoundEffectAt(&a1, 100, 0, *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4008), 1, 0); /*0x6e05ad*/
  Coord::Subtract(&a1, (IUnknown *)0x55, (IUnknown *)0xFFFFFFAB, 0); /*0x6e05bc*/
  v11 = Cell::GetWorldCoords((__int16 *)MEMORY[0xA8B230], v26, this->objectTypeFlags); /*0x6e05d3*/
  v12 = Coord::Subtract(v27, (IUnknown *)(*v11 + a1), (IUnknown *)(v11[1] + v24), (IUnknown *)(v11[2] + v25)); /*0x6e05fb*/
  v20 = v12->field_0; /*0x6e0604*/
  v21 = (IUnknown *)v12->field_4; /*0x6e060d*/
  v22 = v12->field_8; /*0x6e0619*/
  PlaySoundEffectAt(&v20, 100, 0, *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4008), 1, 0); /*0x6e062f*/
  v13 = Cell::GetWorldCoords((__int16 *)MEMORY[0xA8B230], v27, this->objectTypeFlags); /*0x6e0646*/
  v14 = Coord::Subtract(v26, (IUnknown *)(*v13 - 85), (IUnknown *)(v13[1] - 85), (IUnknown *)v13[2]); /*0x6e0662*/
  a1 = v14->field_0; /*0x6e066b*/
  v24 = v14->field_4; /*0x6e067a*/
  v25 = v14->field_8; /*0x6e0681*/
  PlaySoundEffectAt(&a1, 100, 0, *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4008), 1, 0); /*0x6e0697*/
  if ( ScenarioClass::Is_Waypoint_Valid((char *)MEMORY[0xA8B230], this->objectTypeFlags) ) /*0x6e06a9*/
  {
    v18 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v19, this->objectTypeFlags); /*0x6e06d9*/
    v15 = 3; /*0x6e06dd*/
    if ( !CellClass::SetTerrainType(&MEMORY[0x87F7E8], (IUnknown *)&v18) ) /*0x6e06e2*/
    {
      do /*0x6e0703*/
        v16 = v15--; /*0x6e06eb*/
      while ( v16 > 0 && !CellClass::SetTerrainType(&MEMORY[0x87F7E8], (IUnknown *)&v18) ); /*0x6e0703*/
    }
    v24 = (SHIWORD(v18) << 8) + 128; /*0x6e0722*/
    a1 = ((__int16)v18 << 8) + 128; /*0x6e0730*/
    v25 = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[5952]; /*0x6e073c*/
    Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], &a1, (IUnknown *)&v20); /*0x6e0748*/
    Cell::CreateCrater(v20 - 128, (int)&v21[-1].__pad_579C[67604], 256, 256, 0); /*0x6e077a*/
  }
  return 1; /*0x6e077f*/
}


// ==== 0x006E0790  AnimTypeClass::method_6E0790  this=AnimTypeClass  sig=csp ====
char __thiscall sub_6E0790(int *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int *WorldCoords; // eax
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = MEMORY[0x8871E0]->?[5]; /*0x6e07a3*/
  WorldCoords = Cell::GetWorldCoords((__int16 *)MEMORY[0xA8B230], v8, this->LoopStart); /*0x6e07b5*/
  CreateSmokeEffectAt(50, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e07d6*/
  return 1; /*0x6e07dd*/
}


// ==== 0x006E07F0  AnimTypeClass::method_6E07F0  this=AnimTypeClass  sig=csp ====
char __thiscall sub_6E07F0(int *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int *WorldCoords; // eax
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = MEMORY[0x8871E0]->?[5]; /*0x6e0803*/
  WorldCoords = Cell::GetWorldCoords((__int16 *)MEMORY[0xA8B230], v8, this->LoopStart); /*0x6e0815*/
  CreateSmokeEffectAt(100, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e0836*/
  return 1; /*0x6e083d*/
}


// ==== 0x006E0850  AnimTypeClass::method_6E0850  this=AnimTypeClass  sig=csp ====
char __thiscall sub_6E0850(int *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int *WorldCoords; // eax
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = MEMORY[0x8871E0]->?[5]; /*0x6e0863*/
  WorldCoords = Cell::GetWorldCoords((__int16 *)MEMORY[0xA8B230], v8, this->LoopStart); /*0x6e0875*/
  CreateSmokeEffectAt(300, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e0896*/
  return 1; /*0x6e089d*/
}


// ==== 0x006E0AA0  TActionClass::executeEnterAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeEnterAction(_DWORD *this, int a2, int _10, _DWORD *a3, IUnknown *aP4)
{
  void *v5; // esi
  int Field11; // eax
  int v7; // edi
  char v9; // bl
  int i; // ebp
  int v11; // esi
  _DWORD *v12; // ecx

  v5 = (void *)this->Value; /*0x6e0aa1*/
  if ( !a3 ) /*0x6e0aae*/
    return 0; /*0x6e0aae*/
  if ( v5 == (void *)8997 ) /*0x6e0ab6*/
  {
    Field11 = Property::GetField11(a3); /*0x6e0ab8*/
  }
  else
  {
    if ( v5 == (void *)-1 ) /*0x6e0ac2*/
      return 0; /*0x6e0ae7*/
    if ( BuildingType::IsSpecialType(v5) ) /*0x6e0ac6*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0ad1*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0ad8*/
  }
  v7 = Field11; /*0x6e0add*/
  if ( !Field11 ) /*0x6e0ae1*/
    return 0; /*0x6e0ae1*/
  v9 = 0; /*0x6e0af1*/
  for ( i = 0; i < *(int *)&MEMORY[0xA8D63C].__pad_14B0[412]; ++i ) /*0x6e0af7*/
  {
    v11 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[400] + 4 * i); /*0x6e0afe*/
    if ( *(_BYTE *)(v11 + 144) ) /*0x6e0b01*/
    {
      if ( *(_BYTE *)(v11 + 116) ) /*0x6e0b0b*/
      {
        if ( !*(_BYTE *)(v11 + 129) ) /*0x6e0b12*/
        {
          v12 = *(_DWORD **)(v11 + 52); /*0x6e0b1c*/
          if ( v12 ) /*0x6e0b21*/
          {
            if ( LinkedList::Contains(v12, (IUnknown *)a3) ) /*0x6e0b28*/
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
char __thiscall TActionClass::ConvertHouseUnits(_DWORD *this, int a2, int _14, _DWORD *a3, IUnknown *aP4)
{
  void *v5; // esi
  char v6; // bl
  int Field11; // eax
  int v8; // ebp
  int v10; // eax
  int i; // edi
  _DWORD *v12; // esi
  int v13; // esi
  int v14; // edi
  Animation *v15; // esi
  int v16; // eax

  v5 = (void *)this->Value; /*0x6e0b63*/
  v6 = 0; /*0x6e0b6d*/
  if ( !a3 ) /*0x6e0b71*/
    return 0; /*0x6e0b71*/
  if ( v5 == (void *)8997 ) /*0x6e0b79*/
  {
    Field11 = Property::GetField11(a3); /*0x6e0b7b*/
  }
  else
  {
    if ( v5 == (void *)-1 ) /*0x6e0b85*/
      return 0; /*0x6e0bab*/
    if ( BuildingType::IsSpecialType(v5) ) /*0x6e0b89*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0b94*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0b9b*/
  }
  v8 = Field11; /*0x6e0ba0*/
  if ( !Field11 ) /*0x6e0ba4*/
    return 0; /*0x6e0ba4*/
  v10 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[412]; /*0x6e0bae*/
  for ( i = 0; i < *(int *)&MEMORY[0xA8D63C].__pad_14B0[412]; ++i ) /*0x6e0bb8*/
  {
    v12 = *(_DWORD **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[400] + 4 * i); /*0x6e0bbf*/
    if ( v12[135] == a2 /*0x6e0bf4*/
      && (!v12
       || (*(int (__thiscall **)(_DWORD))(*v12 + 44))(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[400] + 4 * i)) != 6
       || (v13 = v12[328]) == 0
       || !*(_BYTE *)(v13 + 5491) && !*(_BYTE *)(v13 + 5492)) )
    {
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[400] + 4 * i) /*0x6e0c0b*/
                                                  + 980))(
        *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[400] + 4 * i),
        v8,
        0);
      v6 = 1; /*0x6e0c11*/
    }
    v10 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[412]; /*0x6e0c13*/
  }
  v14 = 0; /*0x6e0c1d*/
  if ( v10 > 0 ) /*0x6e0c21*/
  {
    do /*0x6e0c89*/
    {
      v15 = *(Animation **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[400] + 4 * v14); /*0x6e0c2c*/
      if ( *(_DWORD *)&v15[540] == a2 ) /*0x6e0c35*/
      {
        if ( v15 ) /*0x6e0c39*/
        {
          if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v15 + 44))(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[400] /*0x6e0c45*/
                                                                               + 4 * v14)) == 6 )
          {
            v16 = *(_DWORD *)&v15[1312]; /*0x6e0c47*/
            if ( v16 ) /*0x6e0c4f*/
            {
              if ( *(_BYTE *)(v16 + 5491) || *(_BYTE *)(v16 + 5492) ) /*0x6e0c5b*/
              {
                (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[400] /*0x6e0c72*/
                                                                          + 4 * v14)
                                                            + 980))(
                  *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[400] + 4 * v14),
                  v8,
                  0);
                Animation::UpdateBuildingAnimations((int)v15); /*0x6e0c7a*/
                v6 = 1; /*0x6e0c7f*/
              }
            }
          }
        }
      }
      ++v14; /*0x6e0c86*/
    }
    while ( v14 < *(int *)&MEMORY[0xA8D63C].__pad_14B0[412] ); /*0x6e0c89*/
  }
  return v6; /*0x6e0ba6*/
}


// ==== 0x006E0CA0  TActionClass::executeCaptureAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeCaptureAction(_DWORD *this, void *a1, int _C, _DWORD *a3, IUnknown *aP4)
{
  void *v5; // esi
  int Field11; // eax

  v5 = (void *)this->Value; /*0x6e0ca1*/
  if ( !a3 ) /*0x6e0cad*/
    return 0; /*0x6e0cad*/
  if ( v5 == (void *)8997 ) /*0x6e0cb5*/
  {
    Field11 = Property::GetField11(a3); /*0x6e0cb7*/
  }
  else
  {
    if ( v5 == (void *)-1 ) /*0x6e0cc1*/
      return 0; /*0x6e0ce3*/
    if ( BuildingType::IsSpecialType(v5) ) /*0x6e0cc5*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0cd0*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0cd7*/
  }
  if ( !Field11 ) /*0x6e0cde*/
    return 0; /*0x6e0cde*/
  TActionClass::executeAttackAction(a1, Field11); /*0x6e0ceb*/
  return 1; /*0x6e0ce2*/
}


// ==== 0x006E0D00  TActionClass::executeSabotageAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeSabotageAction(_DWORD *this, _DWORD *a1, int _C, _DWORD *a3, IUnknown *aP4)
{
  void *v5; // esi
  int Field11; // eax

  v5 = (void *)this->Value; /*0x6e0d01*/
  if ( !a3 ) /*0x6e0d0d*/
    return 0; /*0x6e0d0d*/
  if ( v5 == (void *)8997 ) /*0x6e0d15*/
  {
    Field11 = Property::GetField11(a3); /*0x6e0d17*/
  }
  else
  {
    if ( v5 == (void *)-1 ) /*0x6e0d21*/
      return 0; /*0x6e0d43*/
    if ( BuildingType::IsSpecialType(v5) ) /*0x6e0d25*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0d30*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0d37*/
  }
  if ( !Field11 ) /*0x6e0d3e*/
    return 0; /*0x6e0d3e*/
  TActionClass::executeMoveAction(a1, Field11); /*0x6e0d4b*/
  return 1; /*0x6e0d42*/
}


// ==== 0x006E0EF0  HouseClass::UpdateTechBuildings  this=HouseClass  sig=csp ====
char __thiscall sub_6E0EF0(_BYTE *this, int a2, int a3, int a4, int a5)
{
  int v7; // [esp+14h] [ebp+4h]

  if ( this->cloningVatsCount ) /*0x6e0ef0*/
  {
    *(_BYTE *)(a2 + 499) = 1; /*0x6e0f02*/
    if ( *(int *)(a2 + 96) > 0 ) /*0x6e0f0e*/
    {
      LOWORD(v7) = *(_DWORD *)(**(_DWORD **)(a2 + 84) + 156) / 256; /*0x6e0f36*/
      HIWORD(v7) = *(_DWORD *)(**(_DWORD **)(a2 + 84) + 160) / 256; /*0x6e0f4b*/
      HouseClass::SetMapSeed((_DWORD *)a2, v7); /*0x6e0f55*/
      *(_DWORD *)(a2 + 22352) = v7; /*0x6e0f5a*/
    }
    if ( !*(_DWORD *)(a2 + 22292) ) /*0x6e0f61*/
    {
      HouseClass::SetPrimaryTechBuilding(a2); /*0x6e0f6d*/
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
char __thiscall TActionClass::RevealWaypointArea(int *this, int a2, int a3, int a4, IUnknown *aP4)
{
  int v5; // edi
  int v6; // esi
  int v8; // [esp+0h] [ebp-14h] BYREF
  int v9; // [esp+4h] [ebp-10h]
  int v10; // [esp+8h] [ebp-Ch]
  __int16 v11[4]; // [esp+Ch] [ebp-8h] BYREF

  if ( HouseClass_Player->__pad_220[32] ) /*0x6e0fe8*/
    return 1; /*0x6e116a*/
  *(_DWORD *)v11 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v8, this->idxArray); /*0x6e101b*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v11) + 80) & 0x100) != 0 /*0x6e1047*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v11) + 80) & 0x400) != 0 )
  {
    v5 = 4; /*0x6e104d*/
  }
  else
  {
    v5 = 0; /*0x6e1049*/
  }
  v6 = v5 + *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v11) + 283); /*0x6e1068*/
  v10 = v6 * *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[5964]; /*0x6e10b2*/
  v9 = ((__int16)(v11[1] - v6 / 2) << 8) + 128; /*0x6e10c1*/
  v8 = ((__int16)(v11[0] - v6 / 2) << 8) + 128; /*0x6e10cd*/
  MapClass::RevealArea1( /*0x6e10e5*/
    (int *)&MEMORY[0x87F7E8],
    &v8,
    *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1580),
    (#375 *)HouseClass_Player,
    0,
    0,
    0,
    1,
    0);
  v8 = ((__int16)(v11[0] - v6 / 2) << 8) + 128; /*0x6e1126*/
  v10 = v6 * *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[5964]; /*0x6e1135*/
  v9 = ((__int16)(v11[1] - v6 / 2) << 8) + 128; /*0x6e1143*/
  MapClass::RevealArea1( /*0x6e115b*/
    (int *)&MEMORY[0x87F7E8],
    &v8,
    *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1580),
    (#375 *)HouseClass_Player,
    0,
    0,
    0,
    1,
    1);
  return 1; /*0x6e1164*/
}


// ==== 0x006E1180  ObjectClass::method_6E1180  this=ObjectClass  sig=csp ====
char __thiscall sub_6E1180(int *this, int a2, int a3, int a4, int a5)
{
  int v6; // [esp+0h] [ebp-8h] BYREF
  int v7; // [esp+4h] [ebp-4h] BYREF

  v6 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v7, this->objectTypeFlags); /*0x6e11a6*/
  MapClass::TriggerEVA((__int16 *)&v6); /*0x6e11aa*/
  return 1; /*0x6e11b1*/
}


// ==== 0x006E11C0  TActionClass::RevealTileTypeAtWaypoint  this=TActionClass  sig=csp ====
char __thiscall TActionClass::RevealTileTypeAtWaypoint(int *this, int a2, int a3, int a4, IUnknown *aP4)
{
  IUnknown *Waypoint_Location; // eax
  int TileIndex; // ebp
  IUnknown *v7; // esi
  MouseClass *v8; // ebx
  __int16 v9; // cx
  int v10; // esi
  __int16 v11; // ax
  __int16 v12; // bx
  int v14; // [esp+8h] [ebp-1Ch] BYREF
  int v15[3]; // [esp+Ch] [ebp-18h] BYREF
  int v16[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( HouseClass_Player->__pad_220[32] ) /*0x6e11c8*/
    return 1; /*0x6e11c8*/
  Waypoint_Location = (IUnknown *)ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v14, this->idxArray); /*0x6e11ee*/
  TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], Waypoint_Location, (IUnknown *)1, 0); /*0x6e1203*/
  TActionClass::executeSellAction(&MEMORY[0x87F7E8]); /*0x6e1205*/
  v7 = (IUnknown *)MapClass::SpiralSearch(&MEMORY[0x87F7E8]); /*0x6e1214*/
  if ( !v7 ) /*0x6e1218*/
    return 1; /*0x6e1327*/
  do /*0x6e1314*/
  {
    v8 = (MouseClass *)&v7->field_24; /*0x6e1220*/
    if ( MapClass::GetTileIndex(&MEMORY[0x87F7E8], (IUnknown *)&v7->field_24, (IUnknown *)1, 0) == TileIndex ) /*0x6e1234*/
    {
      v9 = HIWORD(v7->field_24); /*0x6e1244*/
      v10 = SHIBYTE(v7->field_118) / 2; /*0x6e124c*/
      v15[0] = ((__int16)(LOWORD(v8->field_0) - v10 / 2) << 8) + 128; /*0x6e1284*/
      v15[1] = ((__int16)(v9 - v10 / 2) << 8) + 128; /*0x6e128f*/
      v15[2] = v10 * *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[5964]; /*0x6e12a2*/
      MapClass::RevealArea1((int *)&MEMORY[0x87F7E8], v15, 2, (#375 *)HouseClass_Player, 0, 0, 0, 1, 0); /*0x6e12a6*/
      v11 = v8->field_0; /*0x6e12b1*/
      v12 = HIWORD(v8->field_0) - v10 / 2; /*0x6e12be*/
      v16[2] = v10 * *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[5964]; /*0x6e12d3*/
      v16[0] = ((__int16)(v11 - v10 / 2) << 8) + 128; /*0x6e12ea*/
      v16[1] = (v12 << 8) + 128; /*0x6e12f5*/
      MapClass::RevealArea1((int *)&MEMORY[0x87F7E8], v16, 2, (#375 *)HouseClass_Player, 0, 0, 0, 1, 1); /*0x6e1301*/
    }
    v7 = (IUnknown *)MapClass::SpiralSearch(&MEMORY[0x87F7E8]); /*0x6e1310*/
  }
  while ( v7 ); /*0x6e1314*/
  return 1; /*0x6e131c*/
}


// ==== 0x006E1440  ObjectClass::Render  this=ObjectClass  sig=csp ====
char __thiscall sub_6E1440(_DWORD *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // edx
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v11; // [esp+10h] [ebp-8h]

  v5 = (char *)MEMORY[0xA8B230] + 4584; /*0x6e144f*/
  v6 = *((_DWORD *)MEMORY[0xA8B230] + 1146); /*0x6e1457*/
  v7 = *((_DWORD *)MEMORY[0xA8B230] + 1148); /*0x6e1459*/
  if ( v6 != -1 ) /*0x6e145f*/
  {
    if ( (int)MEMORY[0xA8ED84] - v6 >= v7 ) /*0x6e1467*/
    {
      v8 = 0; /*0x6e149c*/
      goto LABEL_5; /*0x6e149e*/
    }
    v7 -= (int)MEMORY[0xA8ED84] - v6; /*0x6e1469*/
  }
  v8 = v7; /*0x6e146b*/
LABEL_5:
  v9 = this->isAliveFlag; /*0x6e146d*/
  *v5 = MEMORY[0xA8ED84]; /*0x6e1473*/
  v5[1] = v11; /*0x6e1481*/
  v5[2] = v8 + 12 * v9 + 3 * v9; /*0x6e1489*/
  ObjectClass::PreDraw(&MEMORY[0x87F7E8]); /*0x6e148c*/
  return 1; /*0x6e1491*/
}


// ==== 0x006E14A0  ObjectClass::ProcessDataObjectClass  this=ObjectClass  sig=csp ====
char __thiscall sub_6E14A0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int *v5; // eax
  int v6; // edx
  int v7; // esi
  int v8; // edi
  int v9; // edx
  int v10; // ecx
  int v11; // esi
  int v12; // ecx
  int v14; // [esp+10h] [ebp-8h]

  v5 = (int *)((char *)MEMORY[0xA8B230] + 4584); /*0x6e14a8*/
  v6 = *((_DWORD *)MEMORY[0xA8B230] + 1148); /*0x6e14b4*/
  v7 = *((_DWORD *)MEMORY[0xA8B230] + 1146); /*0x6e14b8*/
  if ( v7 != -1 ) /*0x6e14be*/
  {
    if ( (int)MEMORY[0xA8ED84] - v7 >= v6 ) /*0x6e14c6*/
      v6 = 0; /*0x6e14cc*/
    else
      v6 -= (int)MEMORY[0xA8ED84] - v7; /*0x6e14c8*/
  }
  v8 = 15 * this->isAliveFlag; /*0x6e14d7*/
  if ( v6 > v8 ) /*0x6e14dc*/
  {
    v11 = *v5; /*0x6e14e8*/
    v12 = *((_DWORD *)MEMORY[0xA8B230] + 1148); /*0x6e14ea*/
    if ( *v5 != -1 ) /*0x6e14f0*/
    {
      if ( (int)MEMORY[0xA8ED84] - v11 >= v12 ) /*0x6e14f8*/
        v12 = 0; /*0x6e14fe*/
      else
        v12 -= (int)MEMORY[0xA8ED84] - v11; /*0x6e14fa*/
    }
    v9 = v14; /*0x6e1500*/
    v10 = v12 - v8; /*0x6e1504*/
    *v5 = (int)MEMORY[0xA8ED84]; /*0x6e1506*/
  }
  else
  {
    v9 = v14; /*0x6e14de*/
    v10 = 0; /*0x6e14e2*/
    *v5 = (int)MEMORY[0xA8ED84]; /*0x6e14e4*/
  }
  v5[1] = v9; /*0x6e1508*/
  v5[2] = v10; /*0x6e150b*/
  ObjectClass::PreDraw(&MEMORY[0x87F7E8]); /*0x6e1513*/
  return 1; /*0x6e1518*/
}


// ==== 0x006E1530  ScenarioClass::PrepareTextDisplay  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::PrepareTextDisplay(_DWORD *this, int a2, int a3, ObjectClass *aP3, int a5)
{
  int v5; // eax
  int *missionTimer; // ecx
  ScenarioClass *v7; // eax
  int v9; // [esp+4h] [ebp-28h]
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF

  v5 = this->u32_90; /*0x6e1530*/
  missionTimer = MEMORY[0xA8B230]->missionTimer; /*0x6e1542*/
  MEMORY[0xA8B230]->missionTimer[0] = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6e154e*/
  missionTimer[1] = v9; /*0x6e1557*/
  missionTimer[2] = 15 * v5; /*0x6e155a*/
  v7 = MEMORY[0xA8B230]; /*0x6e155d*/
  if ( MEMORY[0xA8B230]->missionTimer[0] == -1 ) /*0x6e1569*/
  {
    MEMORY[0xA8B230]->missionTimer[0] = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6e1571*/
    v7 = MEMORY[0xA8B230]; /*0x6e1577*/
  }
  v7->missionTimer_text_csf = &MEMORY[0x87F8E4].__pad_5568[10472]; /*0x6e1581*/
  if ( &MEMORY[0x87F8E4] == (MouseClass *)-42624 ) /*0x6e158d*/
  {
    Destination[0] = (unsigned __int8)&MEMORY[0x87F8E4].__pad_5568[20760]; /*0x6e158f*/
  }
  else
  {
    strncpy(Destination, &MEMORY[0x87F8E4].__pad_5568[20760], 0x1Fu); /*0x6e15a1*/
    Destination[31] = 0; /*0x6e15a9*/
  }
  if ( Destination != (char *)MEMORY[0xA8B230]->missionTimer_text ) /*0x6e15c1*/
    qmemcpy(MEMORY[0xA8B230]->missionTimer_text, Destination, sizeof(MEMORY[0xA8B230]->missionTimer_text)); /*0x6e15cd*/
  ObjectClass::PreDraw(&MEMORY[0x87F7E8]); /*0x6e15d5*/
  return 1; /*0x6e15dd*/
}


// ==== 0x006E15F0  ObjectClass::ReadINIEntry  this=ObjectClass  sig=csp ====
char __thiscall ObjectClass::ReadINIEntry(const char *this, int a2, int a3, ObjectClass *aP3, int a5)
{
  RandomStruct *v5; // esi
  int *missionTimer_text; // edi
  char *v7; // esi
  char Destination[32]; // [esp+Ch] [ebp-40h] BYREF
  char v10[32]; // [esp+2Ch] [ebp-20h] BYREF

  v5 = (RandomStruct *)(this + 109); /*0x6e15f8*/
  if ( this->u32_1B4 && this != (const char *)-109 ) /*0x6e1604*/
  {
    strncpy(Destination, this + 109, 0x1Fu); /*0x6e1631*/
    Destination[31] = 0; /*0x6e163d*/
    MEMORY[0xA8B230]->missionTimer_text_csf = GetStringCSF((wchar_t *)v5, 0, &stru_830620.__pad_579C[52796], 2242); /*0x6e1656*/
    missionTimer_text = MEMORY[0xA8B230]->missionTimer_text; /*0x6e1666*/
    if ( Destination != (char *)MEMORY[0xA8B230]->missionTimer_text ) /*0x6e166e*/
    {
      v7 = Destination; /*0x6e1675*/
LABEL_10:
      qmemcpy(missionTimer_text, v7, 0x20u); /*0x6e16b0*/
    }
  }
  else
  {
    Destination[0] = 0; /*0x6e1611*/
    MEMORY[0xA8B230]->missionTimer_text_csf = &MEMORY[0x87F8E4].__pad_5568[10472]; /*0x6e1617*/
    if ( &MEMORY[0x87F8E4] == (MouseClass *)-42624 ) /*0x6e1621*/
    {
      v10[0] = 0; /*0x6e1623*/
    }
    else
    {
      strncpy(v10, &MEMORY[0x87F8E4].__pad_5568[20760], 0x1Fu); /*0x6e1687*/
      v10[31] = 0; /*0x6e168f*/
    }
    missionTimer_text = MEMORY[0xA8B230]->missionTimer_text; /*0x6e169d*/
    if ( v10 != (char *)MEMORY[0xA8B230]->missionTimer_text ) /*0x6e16a5*/
    {
      v7 = v10; /*0x6e16ac*/
      goto LABEL_10; /*0x6e16ac*/
    }
  }
  ObjectClass::PreDraw(&MEMORY[0x87F7E8]); /*0x6e16b2*/
  return 1; /*0x6e16bc*/
}


// ==== 0x006E1780  TActionClass::PlayAudioAtRandomWP  this=TActionClass  sig=csp ====
char __thiscall TActionClass::PlayAudioAtRandomWP(int *this, int a2, int a3, int a4, int a5)
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
    if ( ScenarioClass::Is_Waypoint_Valid((char *)MEMORY[0xA8B230], v7) ) /*0x6e179b*/
    {
      ++v5; /*0x6e17b7*/
      *v8++ = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v14, v7); /*0x6e17b8*/
      if ( v5 == 400 ) /*0x6e17c3*/
        break; /*0x6e17c3*/
    }
    ++v7; /*0x6e17c5*/
  }
  while ( v7 < 702 ); /*0x6e17cc*/
  v9 = (__int16 *)&v15[Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, v5 - 1)]; /*0x6e17e3*/
  v10 = (v9[1] << 8) + 128; /*0x6e1800*/
  v13[0] = (*v9 << 8) + 128; /*0x6e1805*/
  v11 = this->idxArray; /*0x6e1809*/
  v13[1] = v10; /*0x6e180f*/
  v13[2] = 0; /*0x6e1813*/
  PlayAudioAt2(v11, v13, 0); /*0x6e181b*/
  return 1; /*0x6e1820*/
}


// ==== 0x006E1830  ScriptAction::ReadParameter  this=ParticleSystemClass  sig=csp ====
_DWORD *__thiscall sub_6E1830(_DWORD *this)
{
  int v1; // esi
  int v2; // eax
  _DWORD *v3; // esi
  _DWORD *result; // eax
  __int16 v5[2]; // [esp+4h] [ebp-4h] BYREF

  v1 = *this / 256; /*0x6e184b*/
  v2 = this->vtable2 / 256; /*0x6e184e*/
  v5[0] = v1; /*0x6e1851*/
  v5[1] = v2; /*0x6e1856*/
  if ( __PAIR32__(v2, v1) == MEMORY[0xB0E680] ) /*0x6e186c*/
    return 0; /*0x6e189e*/
  v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v5); /*0x6e1886*/
  result = Cell::IsBridge(v3); /*0x6e188a*/
  if ( !result ) /*0x6e1891*/
    return CellClass::FindInfantry(v3, 0); /*0x6e1896*/
  return result; /*0x6e189b*/
}


// ==== 0x006E18B0  CellClass::Find  this=CellClass  sig=csp ====
char __thiscall sub_6E18B0(int *this, int a2, int a3, int a4, int a5)
{
  int *WorldCoords; // eax
  _DWORD *v7; // edi
  _DWORD *Infantry; // eax
  int v10; // [esp+8h] [ebp-1Ch] BYREF
  int v11; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h]
  int v13; // [esp+14h] [ebp-10h]
  _DWORD v14[3]; // [esp+18h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((__int16 *)MEMORY[0xA8B230], v14, this->q044); /*0x6e18c6*/
  v11 = *WorldCoords; /*0x6e18cf*/
  v12 = WorldCoords[1]; /*0x6e18d6*/
  v13 = WorldCoords[2]; /*0x6e18e4*/
  LOWORD(v10) = v11 / 256; /*0x6e1904*/
  HIWORD(v10) = v12 / 256; /*0x6e1909*/
  if ( v10 != MEMORY[0xB0E680] /*0x6e1947*/
    && ((v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v10), (Infantry = Cell::IsBridge(v7)) != 0)
     || (Infantry = CellClass::FindInfantry(v7, 0)) != 0) )
  {
    ObjectClass::CheckFlagD0(Infantry, this->smudgeTypeIndex); /*0x6e1952*/
    return 1; /*0x6e1958*/
  }
  else
  {
    PlayAudioAt2(this->smudgeTypeIndex, &v11, 1); /*0x6e196d*/
    return 1; /*0x6e1973*/
  }
}


// ==== 0x006E1980  TActionClass::executeGuardAreaAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeGuardAreaAction(int *this, int a2, int a3, int a4, IUnknown *aP4)
{
  IUnknown **WorldCoords; // eax
  BuildingTypeClass *v6; // esi
  _DWORD *Infantry; // eax
  __int16 v9[2]; // [esp+4h] [ebp-1Ch] BYREF
  IUnknown *v10; // [esp+8h] [ebp-18h] BYREF
  IUnknown *v11; // [esp+Ch] [ebp-14h]
  IUnknown *v12; // [esp+10h] [ebp-10h]
  _DWORD v13[3]; // [esp+14h] [ebp-Ch] BYREF

  WorldCoords = (IUnknown **)Cell::GetWorldCoords((__int16 *)MEMORY[0xA8B230], v13, this->q011); /*0x6e1993*/
  v10 = *WorldCoords; /*0x6e199c*/
  v11 = WorldCoords[1]; /*0x6e19a3*/
  v12 = WorldCoords[2]; /*0x6e19b1*/
  v9[0] = (int)v10 / 256; /*0x6e19d1*/
  v9[1] = (int)v11 / 256; /*0x6e19d6*/
  if ( v9[0] == *(_WORD *)&MEMORY[0xB077F8].__pad_579C[5868] /*0x6e1a14*/
    && (unsigned __int16)((int)v11 / 256) == *(_WORD *)&MEMORY[0xB077F8].__pad_579C[5870]
    || (v6 = (BuildingTypeClass *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v9), (Infantry = Cell::IsBridge(v6)) == 0)
    && (Infantry = CellClass::FindInfantry(v6, 0)) == 0 )
  {
    globalHelper_050F40(&v10, 1); /*0x6e1a31*/
    return 1; /*0x6e1a36*/
  }
  else
  {
    ObjectClass::CheckFlagD0(Infantry, (IUnknown *)0xFFFFFFFF); /*0x6e1a1a*/
    return 1; /*0x6e1a1f*/
  }
}


// ==== 0x006E1A40  TActionClass::executePatrolAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executePatrolAction(int *this, void *a1, int a3, int a4, IUnknown *aP4)
{
  int *Waypoint_Location; // eax
  int *v7; // [esp+0h] [ebp-4h] BYREF

  v7 = this; /*0x6e1a40*/
  Waypoint_Location = ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v7, this->q011); /*0x6e1a50*/
  SelectSimilarBuildingTypes(a1, *Waypoint_Location); /*0x6e1a5c*/
  return 1; /*0x6e1a64*/
}


// ==== 0x006E1A70  TActionClass::executeScatterAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeScatterAction(int *this, int a2, int a3, int a4, IUnknown *aP4)
{
  int v5; // esi
  int v6; // kr00_4
  int v8[3]; // [esp+0h] [ebp-14h] BYREF
  __int16 v9[4]; // [esp+Ch] [ebp-8h] BYREF

  if ( HouseClass_Player->__pad_220[32] ) /*0x6e1a78*/
    return 1; /*0x6e1b79*/
  *(_DWORD *)v9 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], v8, this->idxArray); /*0x6e1aaa*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v9) + 80) & 0x100) != 0 /*0x6e1ad6*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v9) + 80) & 0x400) != 0 )
  {
    v5 = 4; /*0x6e1adc*/
  }
  else
  {
    v5 = 0; /*0x6e1ad8*/
  }
  v6 = v5 + *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v9) + 283); /*0x6e1afc*/
  v8[2] = v6 * *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[5964]; /*0x6e1b36*/
  v8[1] = ((__int16)(v9[1] - v6 / 2) << 8) + 128; /*0x6e1b3d*/
  v8[0] = ((__int16)(v9[0] - v6 / 2) << 8) + 128; /*0x6e1b4c*/
  TActionClass_Helper(v8, *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1580)); /*0x6e1b61*/
  CellSystem::UpdateVisibility(&MEMORY[0x87F7E8]); /*0x6e1b6b*/
  return 1; /*0x6e1b73*/
}


// ==== 0x006E1BD0  ScenarioClass::UpdateCounters  this=ScenarioClass  sig=csp ====
char __thiscall sub_6E1BD0(int *this, int a2, int a3, int a4, int a5)
{
  int Status; // eax

  SuperClass::StartTimer(*(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * this->q024), 1, 0, 0); /*0x6e1bed*/
  if ( HouseClass_Player == (#375 *)a2 ) /*0x6e1bf8*/
  {
    SidebarClass::AddCameo((int *)&MEMORY[0x87F7E8], 31, this->q024); /*0x6e1c08*/
    Status = HouseClass::GetStatus((void *)0x1F, 0); /*0x6e1c1a*/
    Sidebar::ActivateTab((int)&MEMORY[0x87F7E8], Status); /*0x6e1c25*/
  }
  return 1; /*0x6e1c2a*/
}


// ==== 0x006E1C40  SuperClass::Get  this=SuperClass  sig=csp ====
char __thiscall sub_6E1C40(int *this, int a2, int a3, int a4, int a5)
{
  int Status; // eax

  SuperClass::StartTimer(*(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * this->q024), 0, 0, 0); /*0x6e1c5d*/
  *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * this->q024) + 96) = 0; /*0x6e1c71*/
  if ( HouseClass_Player == (#375 *)a2 ) /*0x6e1c7c*/
  {
    SidebarClass::AddCameo((int *)&MEMORY[0x87F7E8], 31, this->q024); /*0x6e1c8c*/
    Status = HouseClass::GetStatus((void *)0x1F, 0); /*0x6e1c9e*/
    Sidebar::ActivateTab((int)&MEMORY[0x87F7E8], Status); /*0x6e1ca9*/
  }
  return 1; /*0x6e1cae*/
}


// ==== 0x006E1CC0  TActionClass::executeRetreatAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeRetreatAction(int *this, AbstractClass *aP1, int a3, int a4, AbstractClass *aP4)
{
  void **v5; // eax
  int v7; // [esp+0h] [ebp-14h] BYREF
  int v8; // [esp+4h] [ebp-10h] BYREF
  CoordStruct aP2; // [esp+8h] [ebp-Ch] BYREF

  v7 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v8, this->q011); /*0x6e1cdb*/
  aP2.Z = 0; /*0x6e1cdf*/
  aP2.Y = (SHIWORD(v7) << 8) + 128; /*0x6e1d00*/
  aP2.X = ((__int16)v7 << 8) + 128; /*0x6e1d0a*/
  aP2.Z = Cell::GetGroundHeight(&aP2); /*0x6e1d13*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v7) + 80) & 0x100) != 0 /*0x6e1d49*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v7) + 80) & 0x400) != 0 )
  {
    aP2.Z += *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[5952]; /*0x6e1d57*/
  }
  v5 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6e1d60*/
  if ( v5 ) /*0x6e1d6a*/
    AnimClass::ctor( /*0x6e1d92*/
      v5,
      *(CoordStruct **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5244),
      &aP2,
      0,
      (CoordStruct *)1,
      (void *)0x600,
      0,
      0)->__pad_194[4] = 1;
  else
    MEMORY[0x198] = 1; /*0x6e1da3*/
  return 1; /*0x6e1d9b*/
}


// ==== 0x006E2050  globalHelper_0E2050  this=-  sig=csp ====
char __stdcall sub_6E21D0(int a1, int a2, int a3, int a4)
{
  return 1; /*0x6e21d2*/
}


// ==== 0x006E21D0  sub_6E21D0  this=-  sig=csp ====
char __stdcall sub_6E21D0(int a1, int a2, int a3, int a4)
{
  return 1; /*0x6e21d2*/
}


// ==== 0x006E21E0  TActionClass::executeFollowAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeFollowAction(int *this, int a2, int a3, int a4, IUnknown *aP4)
{
  int *v5; // ecx
  int i; // eax
  int j; // esi

  v5 = this + 13; /*0x6e21e0*/
  MEMORY[0x87F8E4].field_0 = *v5; /*0x6e21e5*/
  MEMORY[0x87F8E4].field_4 = (void *)v5[1]; /*0x6e21ed*/
  MEMORY[0x87F8E4].field_8 = (void *)v5[2]; /*0x6e21f6*/
  MEMORY[0x87F8E4].field_C = (void *)v5[3]; /*0x6e21fe*/
  RadarClass::Process(&MEMORY[0x87F7E8]); /*0x6e2209*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x6e2213*/
  for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x6e2224*/
    House::AnnounceUpgrade(i, (IUnknown *)0xFFFFFFFF); /*0x6e222a*/
  Terrain::ConnectivityGraph(&MEMORY[0x87F7E8]); /*0x6e2243*/
  MapClass::BuildSubzones(&MEMORY[0x87F7E8]); /*0x6e224d*/
  FogOfWar::Render((int **)&MEMORY[0x87F7E8]); /*0x6e2257*/
  for ( j = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[100] - 1; j >= 0; --j ) /*0x6e2267*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[88] + 4 * j) + 1184))( /*0x6e2275*/
      *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[88] + 4 * j),
      1);
  return 1; /*0x6e2281*/
}


// ==== 0x006E2290  TActionClass::executeEscortAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeEscortAction(int *this, int a2, int a3, int a4, IUnknown *aP4)
{
  void **v6; // eax
  int v8; // [esp+4h] [ebp-14h] BYREF
  int v9; // [esp+8h] [ebp-10h] BYREF
  CoordStruct aP2; // [esp+Ch] [ebp-Ch] BYREF

  v8 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v9, this->q011); /*0x6e22ae*/
  aP2.Z = 0; /*0x6e22b2*/
  aP2.Y = (SHIWORD(v8) << 8) + 128; /*0x6e22d3*/
  aP2.X = ((__int16)v8 << 8) + 128; /*0x6e22dd*/
  aP2.Z = Cell::GetGroundHeight(&aP2); /*0x6e22e6*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v8) + 80) & 0x100) != 0 /*0x6e231c*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v8) + 80) & 0x400) != 0 )
  {
    aP2.Z += *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[5952]; /*0x6e232a*/
  }
  v6 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6e2333*/
  if ( v6 ) /*0x6e233d*/
    AnimClass::ctor( /*0x6e2368*/
      v6,
      *(CoordStruct **)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62248] + 4 * this->idxArray),
      &aP2,
      0,
      (CoordStruct *)1,
      (void *)0x600,
      0,
      0)->__pad_194[4] = 1;
  else
    MEMORY[0x198] = 1; /*0x6e237b*/
  return 1; /*0x6e2371*/
}


// ==== 0x006E2390  TActionClass::CreateWeaponImpactAtWaypoint  this=TActionClass  sig=csp ====
char __thiscall TActionClass::CreateWeaponImpactAtWaypoint(int *this, int a2, int a3, int a4, IUnknown *aP4)
{
  int v6; // edi
  int v7; // esi
  int v8; // ebx
  _DWORD *v9; // eax
  CoordStruct *WarheadVersusMultiplier; // esi
  void **v11; // ebp
  void *v12; // eax
  int v14; // [esp+10h] [ebp-14h] BYREF
  int v15; // [esp+14h] [ebp-10h] BYREF
  CoordStruct aP2; // [esp+18h] [ebp-Ch] BYREF

  v14 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v15, this->q011); /*0x6e23b1*/
  aP2.Z = 0; /*0x6e23b5*/
  aP2.Y = (SHIWORD(v14) << 8) + 128; /*0x6e23d6*/
  aP2.X = ((__int16)v14 << 8) + 128; /*0x6e23e0*/
  aP2.Z = Cell::GetGroundHeight(&aP2); /*0x6e23e9*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v14) + 80) & 0x100) != 0 /*0x6e241f*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v14) + 80) & 0x400) != 0 )
  {
    aP2.Z += *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[5952]; /*0x6e242d*/
  }
  v6 = this->idxArray; /*0x6e2431*/
  v7 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10016] + 4 * v6); /*0x6e2440*/
  v8 = *(_DWORD *)(v7 + 164); /*0x6e2449*/
  v9 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&aP2); /*0x6e244f*/
  WarheadVersusMultiplier = (CoordStruct *)GetWarheadVersusMultiplier(v8, *(_DWORD *)(v7 + 172), v9[59], &aP2); /*0x6e246d*/
  if ( WarheadVersusMultiplier ) /*0x6e2471*/
  {
    v11 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6e247d*/
    if ( v11 ) /*0x6e2484*/
    {
      v12 = (void *)Return::HRESULT_Fail(aP2.X, aP2.Y, aP2.Z); /*0x6e24a1*/
      AnimClass::ctor(v11, WarheadVersusMultiplier, &aP2, 0, (CoordStruct *)1, (void *)0x2600, v12, 0); /*0x6e24b8*/
    }
  }
  CreateSmokeEffectAt( /*0x6e24ea*/
    v8,
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10016] + 4 * v6) + 172),
    aP2.X,
    aP2.Y,
    aP2.Z,
    0,
    0);
  PlaySoundEffectAt( /*0x6e250b*/
    &aP2,
    v8,
    0,
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10016] + 4 * v6) + 172),
    1,
    0);
  return 1; /*0x6e2510*/
}


// ==== 0x006E2520  TActionClass::executeLoadAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeLoadAction(int *this, int a2, int a3, int a4, IUnknown *aP4)
{
  #374 *v6; // eax
  IUnknown *v8; // [esp+4h] [ebp-14h] BYREF
  VoxelAnimClass *v9; // [esp+8h] [ebp-10h] BYREF
  int v10[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  v8 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v9, this->q011); /*0x6e253e*/
  GroundHeight = 0; /*0x6e2542*/
  v10[1] = (SHIWORD(v8) << 8) + 128; /*0x6e2563*/
  v10[0] = ((__int16)v8 << 8) + 128; /*0x6e256d*/
  GroundHeight = Cell::GetGroundHeight(v10); /*0x6e2576*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v8) + 80) & 0x100) != 0 /*0x6e25ac*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v8) + 80) & 0x400) != 0 )
  {
    GroundHeight += *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[5952]; /*0x6e25ba*/
  }
  v6 = (#374 *)__2_YAPAXI_Z(0x148u); /*0x6e25c3*/
  if ( v6 ) /*0x6e25cd*/
    DamageAnimClass::Constructor( /*0x6e25e8*/
      v6,
      *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[64] + 4 * this->idxArray),
      v10,
      0);
  return 1; /*0x6e25ef*/
}


// ==== 0x006E2660  SmallFunc_6E2660  this=-  sig=csp ====
char __stdcall sub_6E2660(int a1, int a2, int a3, int a4)
{
  MEMORY[0x88098C] = 0; /*0x6e2669*/
  MEMORY[0x880990] = 0; /*0x6e266f*/
  MEMORY[0x880994] = -1; /*0x6e2675*/
  Mouse::SetBounds((int)&MEMORY[0x87F7E8], 0); /*0x6e267f*/
  BuildingClass::TogglePower2(&MEMORY[0x87F7E8], 0); /*0x6e268a*/
  BuildingClass::TogglePower(&MEMORY[0x87F7E8], 0); /*0x6e2695*/
  MEMORY[0x88099A] = 0; /*0x6e269a*/
  MEMORY[0x88099B] = 0; /*0x6e26a0*/
  MEMORY[0x88099C] = 0; /*0x6e26a6*/
  Scenario::ClearScreen(); /*0x6e26ac*/
  return 1; /*0x6e26b3*/
}


// ==== 0x006E26D0  ScenarioClass::Set  this=ScenarioClass  sig=csp ====
char __thiscall sub_6E26D0(int *this, int a2, int a3, int a4, int a5)
{
  int v7; // [esp+4h] [ebp-14h] BYREF
  int v8; // [esp+8h] [ebp-10h] BYREF
  _DWORD v9[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  v7 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v8, this->q011); /*0x6e26ee*/
  GroundHeight = 0; /*0x6e26f2*/
  v9[1] = (SHIWORD(v7) << 8) + 128; /*0x6e2713*/
  v9[0] = ((__int16)v7 << 8) + 128; /*0x6e271d*/
  GroundHeight = Cell::GetGroundHeight(v9); /*0x6e2726*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v7) + 80) & 0x100) != 0 /*0x6e275c*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v7) + 80) & 0x400) != 0 )
  {
    GroundHeight += MEMORY[0xB0E6D4]; /*0x6e276a*/
  }
  TacticalClass::SetPosition(MEMORY[0x887324], v9, this->q024); /*0x6e2780*/
  return 1; /*0x6e2787*/
}


// ==== 0x006E2790  ObjectClass::method_6E2790  this=ObjectClass  sig=csp ====
char __thiscall sub_6E2790(int *this, int a2, int a3, int a4, int a5)
{
  int v6; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+4h] [ebp-10h] BYREF
  int v8[2]; // [esp+8h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+10h] [ebp-4h]

  v6 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v7, this->q011); /*0x6e27ab*/
  GroundHeight = 0; /*0x6e27af*/
  v8[1] = (SHIWORD(v6) << 8) + 128; /*0x6e27d0*/
  v8[0] = ((__int16)v6 << 8) + 128; /*0x6e27da*/
  GroundHeight = Cell::GetGroundHeight(v8); /*0x6e27e3*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v6) + 80) & 0x100) != 0 /*0x6e2819*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v6) + 80) & 0x400) != 0 )
  {
    GroundHeight += MEMORY[0xB0E6D4]; /*0x6e2827*/
  }
  Tactical::SetTacticalPosition((int)MEMORY[0x887324], v8); /*0x6e2836*/
  return 1; /*0x6e283d*/
}


// ==== 0x006E2970  BuildingLightClass::FindAllTargets  this=BuildingLightClass  sig=csp ====
char __thiscall sub_6E2970(_DWORD **this, int a2, int a3, int a4, int a5)
{
  char v5; // bl
  int v6; // edi
  int v8; // esi
  _DWORD *v9; // ecx

  v5 = 0; /*0x6e2978*/
  v6 = 0; /*0x6e297a*/
  if ( MEMORY[0xA8EB50] <= 0 ) /*0x6e2980*/
    return 0; /*0x6e2a08*/
  do /*0x6e29fc*/
  {
    v8 = *((_DWORD *)MEMORY[0xA8EB44] + v6); /*0x6e298c*/
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
                v9 = *(_DWORD **)(v8 + 52); /*0x6e29cb*/
                if ( v9 ) /*0x6e29d0*/
                {
                  if ( LinkedList::Contains(v9, a4) ) /*0x6e29d7*/
                  {
                    BuildingLightClass::FindTarget(*(_DWORD **)(v8 + 1536), this->objectTypeFlags); /*0x6e29ed*/
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
  while ( v6 < MEMORY[0xA8EB50] ); /*0x6e29fc*/
  return v5; /*0x6e29ff*/
}


// ==== 0x006E2A50  ObjectClass::method_6E2A50  this=ObjectClass  sig=csp ====
char __thiscall sub_6E2A50(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // esi
  _DWORD *v8; // eax
  int v9; // ecx

  if ( this->q04C ) /*0x6e2a55*/
  {
    v6 = MEMORY[0xB0E730]; /*0x6e2a5c*/
    v7 = 0; /*0x6e2a62*/
    if ( MEMORY[0xB0E730] > 0 ) /*0x6e2a66*/
    {
      v8 = MEMORY[0xB0E724]; /*0x6e2a68*/
      do /*0x6e2a91*/
      {
        if ( *(_DWORD *)(v8[v7] + 36) == this->q04C ) /*0x6e2a78*/
        {
          v9 = v8[v7]; /*0x6e2a7a*/
          if ( v9 ) /*0x6e2a7f*/
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 32))(v9, 1); /*0x6e2a85*/
            v8 = MEMORY[0xB0E724]; /*0x6e2a88*/
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
char __thiscall TActionClass::executeUnloadAction(_DWORD *this, int a2, int a3, int a4, IUnknown *aP4)
{
  int v6; // esi
  int *v7; // ecx
  _BYTE *v8; // eax
  int difficulty2; // edx

  if ( !this->TActionClass_field_50 ) /*0x6e2af4*/
    return 1; /*0x6e2af4*/
  v6 = 0; /*0x6e2b00*/
  if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[12] <= 0 ) /*0x6e2b04*/
    return 1; /*0x6e2b69*/
  do /*0x6e2b5e*/
  {
    v7 = *(int **)(*(_DWORD *)MEMORY[0xA8D63C].__pad_14B0 + 4 * v6); /*0x6e2b0f*/
    v8 = (_BYTE *)v7[9]; /*0x6e2b12*/
    if ( v8 == (_BYTE *)this->TActionClass_field_50 ) /*0x6e2b17*/
    {
      difficulty2 = MEMORY[0xA8B230]->difficulty2; /*0x6e2b1f*/
      if ( (difficulty2 || v8[156]) && (difficulty2 != 1 || v8[157]) && (difficulty2 != 2 || v8[158]) ) /*0x6e2b47*/
        TActionClass::executeAirstrikeAction(v7); /*0x6e2b51*/
    }
    ++v6; /*0x6e2b5b*/
  }
  while ( v6 < *(int *)&MEMORY[0xA8D63C].__pad_14B0[12] ); /*0x6e2b5e*/
  return 1; /*0x6e2b61*/
}


// ==== 0x006E2C20  globalHelper_0E2C20  this=-  sig=csp ====
char __stdcall globalHelper_0E2C20(int a1, int a2, int a3, IUnknown *aP3)
{
  LayerClass::ClearFactoryCellAssignments(&stru_87C374.__pad_14B0[8132]); /*0x6e2c25*/
  MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 1); /*0x6e2c31*/
  return 1; /*0x6e2c38*/
}


// ==== 0x006E2C40  TActionClass::SpawnMeteorShower  this=TActionClass  sig=csp ====
char __thiscall TActionClass::SpawnMeteorShower(int *this, AbstractClass *aP1, int a3, int a4, AbstractClass *aP4)
{
  int v6; // esi
  int String; // ebp
  int v8; // edi
  int *v9; // esi
  int v10; // ebx
  int v11; // eax
  AnimClass *v12; // esi
  bool v13; // zf
  signed int v14; // eax
  int v15; // eax
  int v17; // [esp+Ch] [ebp-24h] BYREF
  int v18; // [esp+10h] [ebp-20h]
  int v19; // [esp+14h] [ebp-1Ch] BYREF
  int v20; // [esp+18h] [ebp-18h] BYREF
  int v21; // [esp+1Ch] [ebp-14h]
  int GroundHeight; // [esp+20h] [ebp-10h]
  CoordStruct aP2; // [esp+24h] [ebp-Ch] BYREF

  v17 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v19, this->q011); /*0x6e2c60*/
  GroundHeight = 0; /*0x6e2c64*/
  v21 = (SHIWORD(v17) << 8) + 128; /*0x6e2c85*/
  v20 = ((__int16)v17 << 8) + 128; /*0x6e2c8f*/
  GroundHeight = Cell::GetGroundHeight(&v20); /*0x6e2c98*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v17) + 80) & 0x100) != 0 /*0x6e2cce*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v17) + 80) & 0x400) != 0 )
  {
    GroundHeight += *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[5952]; /*0x6e2cdc*/
  }
  v6 = *(_DWORD *)&stru_830620.__pad_579C[4 * this->idxArray + 52544] /*0x6e2d0a*/
     + (int)abs32(Random::State(&MEMORY[0xA8B230]->random[1])) % 3;
  String = GlobalArray::FindString(&stru_830620.__pad_579C[52836]); /*0x6e2d1b*/
  v19 = GlobalArray::FindString(&stru_830620.__pad_579C[52824]); /*0x6e2d22*/
  v8 = 70 * v6; /*0x6e2d32*/
  if ( v6 <= 0 ) /*0x6e2d36*/
    return 1; /*0x6e2e0e*/
  v18 = v6; /*0x6e2d3d*/
  do /*0x6e2dfa*/
  {
    v9 = &MEMORY[0xA8B230]->random[1]; /*0x6e2d46*/
    v10 = Random::State(&MEMORY[0xA8B230]->random[1]) % v8; /*0x6e2d58*/
    v11 = Random::State(v9); /*0x6e2d5a*/
    aP2.X = v10 + v20; /*0x6e2d6d*/
    aP2.Z = GroundHeight; /*0x6e2d77*/
    aP2.Y = v11 % v8 + v21; /*0x6e2d7f*/
    aP2.Z = Cell::GetGroundHeight(&aP2); /*0x6e2d93*/
    v12 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6e2d9c*/
    if ( v12 ) /*0x6e2da3*/
    {
      v14 = abs32(Random::State(&MEMORY[0xA8B230]->random[1])) & 0x80000001; /*0x6e2dba*/
      v13 = v14 == 0; /*0x6e2dba*/
      if ( v14 < 0 ) /*0x6e2dbf*/
        v13 = (((_BYTE)v14 - 1) | 0xFFFFFFFE) == -1; /*0x6e2dc5*/
      v15 = String; /*0x6e2dc6*/
      if ( v13 ) /*0x6e2dc8*/
        v15 = v19; /*0x6e2dca*/
      AnimClass::ctor( /*0x6e2dec*/
        (void **)v12,
        *(CoordStruct **)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62248] + 4 * v15),
        &aP2,
        0,
        (CoordStruct *)1,
        (void *)0x600,
        0,
        0);
    }
    --v18; /*0x6e2df6*/
  }
  while ( v18 ); /*0x6e2dfa*/
  return 1; /*0x6e2e01*/
}


// ==== 0x006E2E60  TActionClass::executeSelfDestructAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeSelfDestructAction(_DWORD *this, int a2, int a3, int a4, IUnknown *aP4)
{
  UpdateSurfaceAnimations( /*0x6e2e8d*/
    10 * this->Value,
    10 * MEMORY[0xA8B230]->nukeLevel,
    10 * MEMORY[0xA8B230]->nukeAmbientChangeRate,
    0);
  MEMORY[0xA8B230]->nukeGround = this->Value; /*0x6e2ea1*/
  return 1; /*0x6e2ea0*/
}


// ==== 0x006E2EB0  TActionClass::executeExplodeAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeExplodeAction(_DWORD *this, int a2, int a3, int a4, IUnknown *aP4)
{
  UpdateSurfaceAnimations( /*0x6e2edd*/
    10 * MEMORY[0xA8B230]->nukeGround,
    10 * this->Value,
    10 * MEMORY[0xA8B230]->nukeAmbientChangeRate,
    0);
  MEMORY[0xA8B230]->nukeLevel = this->Value; /*0x6e2ef1*/
  return 1; /*0x6e2ef0*/
}


// ==== 0x006E2F00  TActionClass::executeChronoshiftAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeChronoshiftAction(_DWORD *this, int a2, int a3, int a4, IUnknown *aP4)
{
  UpdateSurfaceAnimations(10 * MEMORY[0xA8B230]->nukeGround, 10 * MEMORY[0xA8B230]->nukeLevel, 10 * this->Value, 0); /*0x6e2f2d*/
  MEMORY[0xA8B230]->nukeAmbientChangeRate = this->Value; /*0x6e2f41*/
  return 1; /*0x6e2f40*/
}


// ==== 0x006E30C0  ObjectClass::CreateHouseClass  this=ObjectClass  sig=csp ====
char __thiscall sub_6E3380(int *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // eax
  int v7; // [esp+0h] [ebp-10h] BYREF
  int v8; // [esp+4h] [ebp-Ch] BYREF
  int v9; // [esp+8h] [ebp-8h]
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v7 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v7, this->q011); /*0x6e339b*/
  GroundHeight = 0; /*0x6e339f*/
  v9 = (SHIWORD(v7) << 8) + 128; /*0x6e33c0*/
  v8 = ((__int16)v7 << 8) + 128; /*0x6e33ca*/
  GroundHeight = Cell::GetGroundHeight(&v8); /*0x6e33d5*/
  v5 = __2_YAPAXI_Z(0x14u); /*0x6e33d9*/
  if ( v5 ) /*0x6e33e3*/
    ActionQueue::PushEntry(v5, v8, v9, GroundHeight); /*0x6e3400*/
  return 1; /*0x6e3407*/
}


// ==== 0x006E3120  ObjectClass::SmallFunc_6E3120  this=ObjectClass  sig=csp ====
char SmallFunc_6E3120(int _8, _UNKNOWN **a1, _DWORD *a2, IUnknown *aP3, int _18, _DWORD *a5, int a7)
{
  int v7; // ecx
  _UNKNOWN **v8; // ebx
  _DWORD *v9; // edi
  void *v10; // esi
  int Field11; // eax

  v10 = *(void **)(v7 + 144); /*0x6e3121*/
  if ( !a2 ) /*0x6e312d*/
    return 0; /*0x6e312d*/
  if ( v10 == (void *)8997 ) /*0x6e3135*/
  {
    Field11 = Property::GetField11(a2); /*0x6e3137*/
  }
  else
  {
    if ( v10 == (void *)-1 ) /*0x6e3141*/
      return 0; /*0x6e3163*/
    if ( BuildingType::IsSpecialType(v10) ) /*0x6e3145*/
      Field11 = BuildingType::FindOwnerHouse(v10); /*0x6e3150*/
    else
      Field11 = HouseClass::FindOwner(v10); /*0x6e3157*/
  }
  if ( !Field11 ) /*0x6e315e*/
    return 0; /*0x6e315e*/
  HouseClass::RespawnStartingBuildings(Field11, v8, v9, (int)v10); /*0x6e3168*/
  return 1; /*0x6e3162*/
}


// ==== 0x006E3180  TActionClass::executePlaceBeaconAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executePlaceBeaconAction(_DWORD *this, int a2, int _C, _DWORD *a3, IUnknown *aP4)
{
  void *v5; // esi
  void *Field11; // eax

  v5 = (void *)this->Value; /*0x6e3181*/
  if ( !a3 ) /*0x6e318d*/
    return 0; /*0x6e318d*/
  if ( v5 == (void *)8997 ) /*0x6e3195*/
  {
    Field11 = (void *)Property::GetField11(a3); /*0x6e3197*/
  }
  else
  {
    if ( v5 == (void *)-1 ) /*0x6e31a1*/
      return 0; /*0x6e31c3*/
    if ( BuildingType::IsSpecialType(v5) ) /*0x6e31a5*/
      Field11 = (void *)BuildingType::FindOwnerHouse(v5); /*0x6e31b0*/
    else
      Field11 = (void *)HouseClass::FindOwner(v5); /*0x6e31b7*/
  }
  if ( !Field11 ) /*0x6e31be*/
    return 0; /*0x6e31be*/
  HouseClass::ClearLowPowerTargets(Field11); /*0x6e31c8*/
  return 1; /*0x6e31c2*/
}


// ==== 0x006E31E0  TActionClass::executeJumpjetAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeJumpjetAction(_DWORD *this, int a2, int _C, _DWORD *a3, IUnknown *aP4)
{
  void *v5; // esi
  void *Field11; // eax

  v5 = (void *)this->Value; /*0x6e31e1*/
  if ( !a3 ) /*0x6e31ed*/
    return 0; /*0x6e31ed*/
  if ( v5 == (void *)8997 ) /*0x6e31f5*/
  {
    Field11 = (void *)Property::GetField11(a3); /*0x6e31f7*/
  }
  else
  {
    if ( v5 == (void *)-1 ) /*0x6e3201*/
      return 0; /*0x6e3223*/
    if ( BuildingType::IsSpecialType(v5) ) /*0x6e3205*/
      Field11 = (void *)BuildingType::FindOwnerHouse(v5); /*0x6e3210*/
    else
      Field11 = (void *)HouseClass::FindOwner(v5); /*0x6e3217*/
  }
  if ( !Field11 ) /*0x6e321e*/
    return 0; /*0x6e321e*/
  HouseClass::DestroyAllBuildings(Field11); /*0x6e3228*/
  return 1; /*0x6e3222*/
}


// ==== 0x006E3240  TActionClass::executeOpenGateAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeOpenGateAction(_DWORD *this, int a2, int _C, _DWORD *a3, IUnknown *aP4)
{
  void *v5; // esi
  void *Field11; // eax

  v5 = (void *)this->Value; /*0x6e3241*/
  if ( !a3 ) /*0x6e324d*/
    return 0; /*0x6e324d*/
  if ( v5 == (void *)8997 ) /*0x6e3255*/
  {
    Field11 = (void *)Property::GetField11(a3); /*0x6e3257*/
  }
  else
  {
    if ( v5 == (void *)-1 ) /*0x6e3261*/
      return 0; /*0x6e3283*/
    if ( BuildingType::IsSpecialType(v5) ) /*0x6e3265*/
      Field11 = (void *)BuildingType::FindOwnerHouse(v5); /*0x6e3270*/
    else
      Field11 = (void *)HouseClass::FindOwner(v5); /*0x6e3277*/
  }
  if ( !Field11 ) /*0x6e327e*/
    return 0; /*0x6e327e*/
  HouseClass::DestroyAllNonBuildingsNonNaval(Field11); /*0x6e3288*/
  return 1; /*0x6e3282*/
}


// ==== 0x006E32A0  TActionClass::executeCloseGateAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeCloseGateAction(_DWORD *this, int a2, int _C, _DWORD *a3, IUnknown *aP4)
{
  void *v5; // esi
  void *Field11; // eax

  v5 = (void *)this->Value; /*0x6e32a1*/
  if ( !a3 ) /*0x6e32ad*/
    return 0; /*0x6e32ad*/
  if ( v5 == (void *)8997 ) /*0x6e32b5*/
  {
    Field11 = (void *)Property::GetField11(a3); /*0x6e32b7*/
  }
  else
  {
    if ( v5 == (void *)-1 ) /*0x6e32c1*/
      return 0; /*0x6e32e3*/
    if ( BuildingType::IsSpecialType(v5) ) /*0x6e32c5*/
      Field11 = (void *)BuildingType::FindOwnerHouse(v5); /*0x6e32d0*/
    else
      Field11 = (void *)HouseClass::FindOwner(v5); /*0x6e32d7*/
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

  v7 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v7, this->q011); /*0x6e339b*/
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
char __thiscall TActionClass::CreateNukeEffect(int *this, AbstractClass *aP1, int a3, int a4, AbstractClass *aP4)
{
  int v5; // esi
  BuildingTypeClass *v6; // edi
  TechnoClass *v7; // eax
  BulletClass *UIObjectCOM; // edi
  double v9; // st7
  double v10; // st7
  int v11; // eax
  TechnoClass *v13; // [esp-10h] [ebp-68h]
  InfantryClass *v14; // [esp-Ch] [ebp-64h]
  int v15; // [esp+Ch] [ebp-4Ch] BYREF
  double v16; // [esp+10h] [ebp-48h] BYREF
  double v17; // [esp+18h] [ebp-40h]
  double v18; // [esp+20h] [ebp-38h]
  int v19; // [esp+28h] [ebp-30h] BYREF
  int v20; // [esp+2Ch] [ebp-2Ch]
  int GroundHeight; // [esp+30h] [ebp-28h]
  _DWORD v22[3]; // [esp+34h] [ebp-24h] BYREF
  _QWORD v23[3]; // [esp+40h] [ebp-18h] BYREF

  v15 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v16, this->q011); /*0x6e3433*/
  GroundHeight = 0; /*0x6e3437*/
  v20 = (SHIWORD(v15) << 8) + 128; /*0x6e3458*/
  v19 = ((__int16)v15 << 8) + 128; /*0x6e3462*/
  GroundHeight = Cell::GetGroundHeight(&v19); /*0x6e346b*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v15) + 80) & 0x100) != 0 ) /*0x6e3487*/
    GroundHeight += *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[5952]; /*0x6e3495*/
  v5 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10016] /*0x6e34ad*/
                 + 4 * SuperWeaponClass::FindByName(g_INI_Key_NukePayload));
  v6 = *(BuildingTypeClass **)(v5 + 160); /*0x6e34c3*/
  v14 = *(InfantryClass **)(v5 + 172); /*0x6e34c9*/
  v13 = *(TechnoClass **)(v5 + 164); /*0x6e34ca*/
  v7 = (TechnoClass *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v19); /*0x6e34d3*/
  UIObjectCOM = (BulletClass *)CreateUIObjectCOM((AbstractClass *)v6, v7, 0, v13, v14, 50, 0); /*0x6e34e1*/
  Function::Method_46B260(UIObjectCOM, v5); /*0x6e34e6*/
  v22[0] = v19; /*0x6e34ff*/
  v22[1] = v20; /*0x6e3503*/
  v22[2] = GroundHeight + 20000; /*0x6e3507*/
  if ( !UIObjectCOM ) /*0x6e350b*/
    return 0; /*0x6e35dc*/
  v16 = Math::SinCos(1.570748388432313); /*0x6e3520*/
  v16 = Math::ArcTan2(1.570748388432313) * v16 * -100.0; /*0x6e3547*/
  v17 = Math::ArcTan2(1.570748388432313); /*0x6e3550*/
  v9 = Math::ArcTan2(1.570748388432313); /*0x6e355e*/
  v18 = v16; /*0x6e356f*/
  *(double *)&v23[1] = v16; /*0x6e358b*/
  v17 = v9 * v17 * -100.0; /*0x6e358f*/
  *(double *)v23 = v17; /*0x6e359b*/
  v10 = Math::SinCos(1.570748388432313); /*0x6e35ab*/
  v11 = *(_DWORD *)UIObjectCOM->__pad_0; /*0x6e35b6*/
  *(double *)&v23[2] = v10 * -100.0; /*0x6e35c5*/
  (*(void (__thiscall **)(BulletClass *, _DWORD *, _QWORD *))(v11 + 496))(UIObjectCOM, v22, v23); /*0x6e35cb*/
  return 1; /*0x6e35d3*/
}


// ==== 0x006E35F0  ObjectClass::method_6E35F0  this=ObjectClass  sig=csp ====
char __thiscall sub_6E35F0(int *this, #375 *a2, int a3, int a4, int a5)
{
  int v6; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+4h] [ebp-10h] BYREF
  int v8; // [esp+8h] [ebp-Ch] BYREF
  int v9; // [esp+Ch] [ebp-8h]
  int GroundHeight; // [esp+10h] [ebp-4h]

  v6 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v7, this->q011); /*0x6e360b*/
  GroundHeight = 0; /*0x6e360f*/
  v9 = (SHIWORD(v6) << 8) + 128; /*0x6e3630*/
  v8 = ((__int16)v6 << 8) + 128; /*0x6e363a*/
  GroundHeight = Cell::GetGroundHeight(&v8); /*0x6e3643*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v6) + 80) & 0x100) != 0 ) /*0x6e365f*/
    GroundHeight += MEMORY[0xB0E6D4]; /*0x6e366d*/
  LOWORD(v7) = v8 / 256; /*0x6e3681*/
  HIWORD(v7) = v9 / 256; /*0x6e3696*/
  if ( LightningStorm::IsActive() ) /*0x6e369b*/
    return 0; /*0x6e36cc*/
  LightningStorm::Start(HIDWORD(MEMORY[0x8871E0][1].?), *(_DWORD *)&MEMORY[0x8871E0][1].?[4], v7, a2); /*0x6e36bf*/
  return 1; /*0x6e36c6*/
}


// ==== 0x006E36E0  TActionClass::executeParadropAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeParadropAction(int *this, int a2, int a3, int a4, IUnknown *aP4)
{
  void *v5; // eax
  int *v6; // eax
  int v7; // esi
  int v8; // edi
  int v9; // ebx
  void **v10; // eax
  MouseClass *v11; // edi
  int v12; // ebx
  __int16 v13; // cx
  _DWORD *i; // esi
  int v16; // [esp+Ch] [ebp-18h] BYREF
  int v17; // [esp+10h] [ebp-14h] BYREF
  int v18; // [esp+14h] [ebp-10h] BYREF
  CoordStruct aP2; // [esp+18h] [ebp-Ch] BYREF

  v16 = *ScenarioClass::Get_Waypoint_Location(*(char **)&HouseClass_Player.__pad_5568[8060], &v17, this->q011); /*0x6e3706*/
  v5 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v16); /*0x6e370a*/
  v6 = (int *)(*(int (__thiscall **)(void *, CoordStruct *))(*(_DWORD *)v5 + 72))(v5, &aP2); /*0x6e3718*/
  v7 = *v6; /*0x6e371b*/
  v8 = v6[1]; /*0x6e3722*/
  v9 = v6[2]; /*0x6e3725*/
  v10 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6e3728*/
  if ( v10 ) /*0x6e3732*/
  {
    aP2.Z = v9 + 5; /*0x6e373b*/
    aP2.X = v7; /*0x6e3752*/
    aP2.Y = v8; /*0x6e3756*/
    AnimClass::ctor( /*0x6e3764*/
      v10,
      *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 840),
      &aP2,
      0,
      (CoordStruct *)1,
      (void *)0x600,
      0,
      0);
  }
  v11 = (MouseClass *)dword_ABD490; /*0x6e3772*/
  v12 = 9; /*0x6e3777*/
  do /*0x6e37da*/
  {
    v13 = HIWORD(v11->field_0); /*0x6e377e*/
    LOWORD(v17) = LOWORD(v11->field_0) + v16; /*0x6e378a*/
    HIWORD(v17) = HIWORD(v16) + v13; /*0x6e378f*/
    v18 = v17; /*0x6e37a2*/
    for ( i = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v18) + 57); /*0x6e37b3*/
          i;
          i = (_DWORD *)i[12] )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*i + 340))( /*0x6e37c9*/
        i,
        *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4072),
        0,
        0);
    }
    v11 = (MouseClass *)((char *)v11 + 4); /*0x6e37d6*/
    --v12; /*0x6e37d9*/
  }
  while ( v12 ); /*0x6e37da*/
  return 1; /*0x6e37dc*/
}


// ==== 0x006E37F0  ObjectClass::method_6E37F0  this=ObjectClass  sig=csp ====
char __thiscall sub_6E37F0(int this, int a2, int a3, int a4, ObjectClass *aP4)
{
  int v5; // edi
  int v6; // ebx
  int v7; // ecx
  char result; // al

  v5 = *(_DWORD *)&HouseClass_Player.__pad_5568[22620] - 1; /*0x6e37fa*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[22620] - 1 >= 0 ) /*0x6e3803*/
  {
    v6 = *(_DWORD *)&HouseClass_Player.__pad_5568[22608] + 4 * v5; /*0x6e380b*/
    while ( strcmp((const char *)(*(_DWORD *)v6 + 36), (const char *)(this + 84)) ) /*0x6e3845*/
    {
      --v5; /*0x6e3847*/
      v6 -= 4; /*0x6e3848*/
      if ( v5 < 0 ) /*0x6e384d*/
        goto LABEL_7; /*0x6e384d*/
    }
    *(_DWORD *)(*(_DWORD *)v6 + 1588) = *(_DWORD *)(this + 144); /*0x6e385b*/
  }
LABEL_7:
  v7 = (int)&HouseClass_Count[-1].__tail_1602E[1]; /*0x6e3861*/
  for ( result = 1; v7 >= 0; *(_BYTE *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * v7 + 4] + 508) = 1 ) /*0x6e3870*/
    --v7; /*0x6e3878*/
  return result; /*0x6e3867*/
}


// ==== 0x006E38F0  SuperWeaponClass::CreateChemLauncher  this=SuperWeaponClass  sig=csp ====
char __thiscall SuperWeaponClass::CreateChemLauncher(_DWORD *this, int a2, int a3, int a4, IUnknown *aP4)
{
  int v5; // edi
  int v6; // eax
  BuildingTypeClass *v7; // esi
  TechnoClass *v8; // eax
  BulletClass *UIObjectCOM; // esi
  double v10; // st7
  int v11; // eax
  TechnoClass *v13; // [esp-10h] [ebp-60h]
  InfantryClass *v14; // [esp-Ch] [ebp-5Ch]
  IUnknown *v15; // [esp+8h] [ebp-48h] BYREF
  int v16; // [esp+Ch] [ebp-44h] BYREF
  double v17; // [esp+10h] [ebp-40h] BYREF
  double v18; // [esp+18h] [ebp-38h] BYREF
  double v19; // [esp+20h] [ebp-30h]
  int v20; // [esp+2Ch] [ebp-24h] BYREF
  int v21; // [esp+30h] [ebp-20h]
  int GroundHeight; // [esp+34h] [ebp-1Ch]
  _QWORD v23[3]; // [esp+38h] [ebp-18h] BYREF

  v15 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v16, this->q044); /*0x6e3913*/
  GroundHeight = 0; /*0x6e3917*/
  v21 = (SHIWORD(v15) << 8) + 128; /*0x6e3938*/
  v20 = ((__int16)v15 << 8) + 128; /*0x6e3942*/
  GroundHeight = Cell::GetGroundHeight(&v20); /*0x6e394b*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v15) + 80) & 0x100) != 0 ) /*0x6e3967*/
    GroundHeight += *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[5952]; /*0x6e3975*/
  LOWORD(v16) = v20 / 256; /*0x6e398f*/
  HIWORD(v16) = v21 / 256; /*0x6e39a4*/
  v5 = *JumpjetLocomotionClass::ClampToCellBounds((int *)&MEMORY[0x87F7E8], (MouseClass *)&v17, (IUnknown *)&v16, 0); /*0x6e39c1*/
  v16 = v5; /*0x6e39c8*/
  v6 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10016] /*0x6e39de*/
                 + 4 * SuperWeaponClass::FindByName(&stru_830620.__pad_579C[52848]));
  v7 = *(BuildingTypeClass **)(v6 + 160); /*0x6e39ec*/
  v14 = *(InfantryClass **)(v6 + 172); /*0x6e39f2*/
  v13 = *(TechnoClass **)(v6 + 164); /*0x6e39f3*/
  v8 = (TechnoClass *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v20); /*0x6e3a00*/
  UIObjectCOM = (BulletClass *)CreateUIObjectCOM((AbstractClass *)v7, v8, 0, v13, v14, 20, 0); /*0x6e3a0e*/
  if ( !UIObjectCOM ) /*0x6e3a12*/
    return 0; /*0x6e3b0d*/
  v17 = Math::ArcTan2(-0.00009587672516830327); /*0x6e3a27*/
  v17 = Math::SinCos(1.570748388432313) * v17 * 100.0; /*0x6e3a4e*/
  v18 = Math::ArcTan2(-0.00009587672516830327); /*0x6e3a57*/
  v10 = Math::ArcTan2(1.570748388432313); /*0x6e3a65*/
  v19 = v17; /*0x6e3a76*/
  *(double *)&v23[1] = v17; /*0x6e3a92*/
  v18 = v10 * v18 * 100.0; /*0x6e3a96*/
  *(double *)v23 = v18; /*0x6e3aa2*/
  *(double *)&v23[2] = Math::SinCos(-0.00009587672516830327) * 100.0; /*0x6e3ac5*/
  v11 = *(_DWORD *)UIObjectCOM->__pad_0; /*0x6e3ac9*/
  LODWORD(v18) = ((__int16)v5 << 8) + 128; /*0x6e3ae0*/
  HIDWORD(v18) = (SHIWORD(v16) << 8) + 128; /*0x6e3ae4*/
  LODWORD(v19) = 0; /*0x6e3af4*/
  (*(void (__thiscall **)(BulletClass *, double *, _QWORD *))(v11 + 496))(UIObjectCOM, &v18, v23); /*0x6e3afc*/
  return 1; /*0x6e3b04*/
}


// ==== 0x006E3B40  TActionClass::executeLightningAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeLightningAction(int *this, int a2, int a3, int a4, IUnknown *aP4)
{
  if ( !a2 ) /*0x6e3b48*/
    return 0; /*0x6e3b4a*/
  HouseClass::CreateRadarOutage(a2, this->idxArray); /*0x6e3b56*/
  return 1; /*0x6e3b4c*/
}


// ==== 0x006E3B60  ScriptAction::GetActionTypeInfo  this=ScriptAction  sig=csp ====
int __thiscall sub_6E3B60(void *this)
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
int __stdcall TActionClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6e3d76*/
    return -2147467261; /*0x6e3d78*/
  *a2 = 1326367634; /*0x6e3d86*/
  a2[1] = 298977877; /*0x6e3d8e*/
  a2[2] = 1610655660; /*0x6e3d97*/
  a2[3] = -1252326136; /*0x6e3da0*/
  return 0; /*0x6e3d7d*/
}


// ==== 0x006E3DB0  TActionClass::SaveLoad_Prefix  this=TActionClass  sig=csp ====
int __stdcall TActionClass::SaveLoad_Prefix(AbstractClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x6e3dbb*/
  if ( result >= 0 ) /*0x6e3dc2*/
  {
    if ( aP0 ) /*0x6e3dc6*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x6e3dcf*/
      *(_DWORD *)aP0->__pad_0 = &TActionClass::`vftable'; /*0x6e3dd4*/
      *(_DWORD *)&aP0->__pad_0[4] = &TActionClass::`vftable'; /*0x6e3dda*/
      *(_DWORD *)&aP0->__pad_0[8] = &TActionClass::`vftable'; /*0x6e3de1*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_TActionClass; /*0x6e3de8*/
    }
    ObjectPtr::RegisterForTracking( /*0x6e3df8*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( /*0x6e3e06*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[12]);
    ObjectPtr::RegisterForTracking( /*0x6e3e14*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].__pad_0[4]);
    ObjectPtr::RegisterForTracking( /*0x6e3e22*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].__pad_0[8]);
    return 0; /*0x6e3e27*/
  }
  return result; /*0x6e3e29*/
}


// ==== 0x006E3E30  TActionClass::SaveLoad_Prefix_0  this=TActionClass  sig=csp ====
int __stdcall TActionClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6e3e3f*/
  if ( result >= 0 ) /*0x6e3e46*/
    return 0; /*0x6e3e48*/
  return result; /*0x6e3e4a*/
}


// ==== 0x006E3E50  TActionClass::Validate  this=TActionClass  sig=csp ====
int __thiscall TActionClass::_vt13(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  AbstractClass::ProcessPower((#378 *)this); /*0x6e3e59*/
  v3 = *(_DWORD *)(this + 40); /*0x6e3e5e*/
  if ( v3 ) /*0x6e3e63*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4); /*0x6e3e6c*/
    Power::TimerProcess(v4); /*0x6e3e72*/
  }
  Power::TimerProcess(*(_DWORD *)(this + 44)); /*0x6e3e7d*/
  v5 = *(_DWORD *)(this + 48); /*0x6e3e82*/
  if ( v5 ) /*0x6e3e87*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x6e3e90*/
    Power::TimerProcess(v6); /*0x6e3e96*/
  }
  v7 = *(_DWORD *)(this + 76); /*0x6e3e9b*/
  if ( v7 ) /*0x6e3ea0*/
  {
    v8 = (*(int (__stdcall **)(int))(*(_DWORD *)(v7 + 4) + 16))(v7 + 4); /*0x6e3ea9*/
    Power::TimerProcess(v8); /*0x6e3eaf*/
  }
  v9 = *(_DWORD *)(this + 80); /*0x6e3eb4*/
  if ( v9 ) /*0x6e3eb9*/
  {
    v10 = (*(int (__stdcall **)(int))(*(_DWORD *)(v9 + 4) + 16))(v9 + 4); /*0x6e3ec2*/
    Power::TimerProcess(v10); /*0x6e3ec8*/
  }
  return Power::TimerProcess(*(_DWORD *)(this + 144)); /*0x6e3edb*/
}


// ==== 0x006E3EE0  TriggerTypeClass::Dispatch  this=TriggerTypeClass  sig=csp ====
int __thiscall sub_6E3EE0(void *this)
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
_DWORD *__thiscall sub_6E3F70(int *this, _DWORD *a2)
{
  _DWORD *WorldCoords; // edx
  _DWORD v4[3]; // [esp+4h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((__int16 *)MEMORY[0xA8B230], v4, this->objectTypeFlags); /*0x6e3f8b*/
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
  if ( MEMORY[0xA8EB50] <= 0 ) /*0x6e409f*/
    return 0; /*0x6e40e3*/
  while ( 1 ) /*0x6e40aa*/
  {
    v5 = *((_DWORD *)MEMORY[0xA8EB44] + v4); /*0x6e40aa*/
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
    if ( ++v4 >= MEMORY[0xA8EB50] ) /*0x6e40e1*/
      return 0; /*0x6e40e1*/
  }
  BuildingClass::UnloadUnits((int *)v5, 0, 0); /*0x6e40f2*/
  return 1; /*0x6e40e3*/
}


// ==== 0x006E4100  TActionClass::executePsychicDominatorAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executePsychicDominatorAction(unsigned int *this, int a2, int a3, int a4, IUnknown *aP4)
{
  unsigned int v5; // esi

  v5 = this->idxArray; /*0x6e4101*/
  if ( v5 >= 4 || !PlayerClass::HasPlayers((_DWORD *)(3988 * v5 + 8916268)) ) /*0x6e4124*/
    return 0; /*0x6e413e*/
  SidebarClass::SwitchTab((int)&MEMORY[0x87F7E8], v5); /*0x6e4133*/
  return 1; /*0x6e413a*/
}


// ==== 0x006E4150  TActionClass::executeGeneticMutatorAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeGeneticMutatorAction(int *this, int a2, int a3, int a4, IUnknown *aP4)
{
  int v5; // eax
  int v6; // edi
  const char *v7; // ebx
  int v8; // ebp

  v5 = -1; /*0x6e415d*/
  v6 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[36] - 1; /*0x6e4160*/
  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[36] - 1 >= 0 ) /*0x6e416b*/
  {
    v7 = (const char *)(this + 21); /*0x6e4172*/
    v8 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[24] + 4 * v6; /*0x6e4175*/
    while ( strcmp((const char *)(*(_DWORD *)v8 + 36), v7) ) /*0x6e41ab*/
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
  if ( v5 >= *(int *)&MEMORY[0xA8D63C].__pad_14B0[36] || v5 < 0 ) /*0x6e41cd*/
    return 0; /*0x6e41f6*/
  TActionClass::executeHarvestAction( /*0x6e41e9*/
    &MEMORY[0x87F7E8],
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[24] + 4 * v5),
    (MouseClass *)this->idxArray);
  return 1; /*0x6e41c3*/
}


// ==== 0x006E4200  TActionClass::executeForceShieldAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeForceShieldAction(int *this, int a2, int a3, int a4, IUnknown *aP4)
{
  int v5; // edi
  void *v7; // eax
  _DWORD *v8; // eax
  int IndexByName; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // esi
  IUnknown *v14; // [esp+8h] [ebp-1Ch] BYREF
  _DWORD v15[3]; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v16[12]; // [esp+18h] [ebp-Ch] BYREF

  v5 = a2; /*0x6e4205*/
  if ( !a2 ) /*0x6e420d*/
    return 0; /*0x6e420d*/
  a2 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v14, this->q011); /*0x6e4233*/
  v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x6e4237*/
  v8 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v7 + 72))(v7, v16); /*0x6e4245*/
  v15[0] = *v8; /*0x6e424a*/
  v15[1] = v8[1]; /*0x6e4251*/
  v15[2] = v8[2]; /*0x6e425b*/
  IndexByName = BuildingTypeClass::FindIndexByName(this + 21); /*0x6e425f*/
  if ( IndexByName < 0 ) /*0x6e4266*/
    return 0; /*0x6e4266*/
  if ( IndexByName > (int)g_TriggerClassCount ) /*0x6e426e*/
    return 0; /*0x6e426e*/
  v10 = *((_DWORD *)g_TriggerTypeCount + IndexByName); /*0x6e4276*/
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
char __thiscall TActionClass::executeIronCurtainAction(int *this, int a2, int a3, int a4, IUnknown *aP4)
{
  int v5; // eax
  int v6; // eax

  if ( !a2 ) /*0x6e42d6*/
    return 0; /*0x6e42d6*/
  v5 = this->idxArray; /*0x6e42d8*/
  if ( v5 < 0 ) /*0x6e42e0*/
    return 0; /*0x6e42e0*/
  if ( v5 > *(_DWORD *)(a2 + 612) ) /*0x6e42ec*/
    return 0; /*0x6e42ec*/
  v6 = *(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * v5); /*0x6e42f4*/
  if ( !*(_BYTE *)(v6 + 109) || (unsigned int)this->q012 > 0x64 ) /*0x6e4303*/
    return 0; /*0x6e4317*/
  SuperClass::SetCharge(v6, this->q012); /*0x6e430d*/
  return 1; /*0x6e4314*/
}


// ==== 0x006E4320  TActionClass::executeNukeAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeNukeAction(int *this, int a2, int a3, int a4, IUnknown *aP4)
{
  int v5; // eax

  if ( !a2 ) /*0x6e4326*/
    return 0; /*0x6e4326*/
  v5 = this->idxArray; /*0x6e4328*/
  if ( v5 < 0 || v5 > *(_DWORD *)(a2 + 612) ) /*0x6e433c*/
    return 0; /*0x6e4355*/
  SuperClass::SetRechargeTime(*(_DWORD **)(*(_DWORD *)(a2 + 600) + 4 * v5), this->q012); /*0x6e434b*/
  return 1; /*0x6e4352*/
}


// ==== 0x006E4360  TActionClass::executeSpyPlaneAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeSpyPlaneAction(int *this, int a2, int a3, int a4, IUnknown *aP4)
{
  int v5; // eax

  if ( !a2 ) /*0x6e4366*/
    return 0; /*0x6e4366*/
  v5 = this->idxArray; /*0x6e4368*/
  if ( v5 < 0 || v5 > *(_DWORD *)(a2 + 612) ) /*0x6e4378*/
    return 0; /*0x6e438d*/
  SuperClass::ResetRechargeTime(*(_DWORD **)(*(_DWORD *)(a2 + 600) + 4 * v5)); /*0x6e4383*/
  return 1; /*0x6e438a*/
}


// ==== 0x006E43A0  TActionClass::executeChronoSphereAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeChronoSphereAction(int *this, int a2, int a3, int a4, IUnknown *aP4)
{
  int v5; // eax

  if ( !a2 ) /*0x6e43a6*/
    return 0; /*0x6e43a6*/
  v5 = this->idxArray; /*0x6e43a8*/
  if ( v5 < 0 || v5 > *(_DWORD *)(a2 + 612) ) /*0x6e43b8*/
    return 0; /*0x6e43cd*/
  SuperClass::Reset(*(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * v5)); /*0x6e43c3*/
  return 1; /*0x6e43ca*/
}


// ==== 0x006E43E0  TActionClass::executeWeatherStormAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeWeatherStormAction(int *this, _DWORD *a1, int a3, int a4, IUnknown *aP4)
{
  _DWORD *v5; // esi
  _DWORD *v7; // eax

  v5 = a1; /*0x6e43e1*/
  if ( !a1 ) /*0x6e43e7*/
    return 0; /*0x6e43e9*/
  v7 = (_DWORD *)*ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &a1, this->q011); /*0x6e4403*/
  a1 = v7; /*0x6e440c*/
  if ( v7 == *(_DWORD **)&MEMORY[0xB077F8].__pad_579C[5868] ) /*0x6e4410*/
    return 0; /*0x6e4420*/
  TActionClass::executeGuardAction(v5, (int)v7); /*0x6e4429*/
  return 1; /*0x6e43eb*/
}


// ==== 0x006E4440  globalHelper_0E4440  this=-  sig=csp ====
char __stdcall globalHelper_0E4440(_DWORD *a0, int a2, int a3, IUnknown *aP3)
{
  if ( !a0 ) /*0x6e4446*/
    return 0; /*0x6e4448*/
  GlobalHelper_0E4440_Helper(a0); /*0x6e444d*/
  return 1; /*0x6e444a*/
}


// ==== 0x006E4460  TActionClass::executeDominatorAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeDominatorAction(int *this, _DWORD *a1, int a3, int a4, IUnknown *aP4)
{
  _DWORD *v5; // esi
  _DWORD *v7; // eax

  v5 = a1; /*0x6e4461*/
  if ( !a1 ) /*0x6e4467*/
    return 0; /*0x6e4469*/
  v7 = (_DWORD *)*ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &a1, this->q011); /*0x6e4483*/
  a1 = v7; /*0x6e448c*/
  if ( v7 == *(_DWORD **)&MEMORY[0xB077F8].__pad_579C[5868] ) /*0x6e4490*/
    return 0; /*0x6e44a0*/
  TActionClass::executeHuntAction(v5, (int)v7); /*0x6e44a9*/
  return 1; /*0x6e446b*/
}


// ==== 0x006E44C0  globalHelper_0E44C0  this=-  sig=csp ====
char __stdcall globalHelper_0E44C0(_DWORD *a0, int a2, int a3, IUnknown *aP3)
{
  if ( !a0 ) /*0x6e44c6*/
    return 0; /*0x6e44c8*/
  GlobalHelper_0E44C0_Helper(a0); /*0x6e44cd*/
  return 1; /*0x6e44ca*/
}


// ==== 0x006E44E0  TActionClass::executeRevealAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeRevealAction(int *this, _DWORD *a1, int a3, int a4, IUnknown *aP4)
{
  _DWORD *v5; // esi
  _DWORD *v7; // eax

  v5 = a1; /*0x6e44e1*/
  if ( !a1 ) /*0x6e44e7*/
    return 0; /*0x6e44e9*/
  v7 = (_DWORD *)*ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &a1, this->q011); /*0x6e4503*/
  a1 = v7; /*0x6e450c*/
  if ( v7 == *(_DWORD **)&MEMORY[0xB077F8].__pad_579C[5868] ) /*0x6e4510*/
    return 0; /*0x6e4520*/
  TActionClass::executeDeployAction(v5, (int)v7); /*0x6e4529*/
  return 1; /*0x6e44eb*/
}


// ==== 0x006E4540  globalHelper_0E4540  this=-  sig=csp ====
char __stdcall globalHelper_0E4540(_DWORD *a0, int a2, int a3, IUnknown *aP3)
{
  if ( !a0 ) /*0x6e4546*/
    return 0; /*0x6e4548*/
  GlobalHelper_0E4540_Helper(a0); /*0x6e454d*/
  return 1; /*0x6e454a*/
}


// ==== 0x006E4560  TActionClass::executeEMPulseAction  this=TActionClass  sig=csp ====
char __thiscall TActionClass::executeEMPulseAction(int this, int a2, int a3, int a4, IUnknown *aP4)
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
int __stdcall ObjectClass::FindOwner(_DWORD *a0, AnimClass *aP1)
{
  if ( !a0 ) /*0x6e45e6*/
    return 0; /*0x6e45e8*/
  if ( aP1 == (AnimClass *)8997 ) /*0x6e45f8*/
    return Property::GetField11(a0); /*0x6e45fa*/
  if ( aP1 == (AnimClass *)-1 ) /*0x6e4606*/
    return 0; /*0x6e4608*/
  if ( BuildingType::IsSpecialType(aP1) ) /*0x6e4610*/
    return BuildingType::FindOwnerHouse(aP1); /*0x6e461b*/
  return HouseClass::FindOwner(aP1); /*0x6e45ea*/
}


// ==== 0x006E4630  TActionClass::StubReturn148  this=TActionClass  sig=csp ====
int TActionClass::_vt12()
{
  return 148; /*0x6e4635*/
}


// ==== 0x006E4640  TActionClass::StubReturn47  this=TActionClass  sig=csp ====
int TActionClass::_vt11()
{
  return 47; /*0x6e4645*/
}


// ==== 0x006E4650  TActionClass::Stub  this=TActionClass  sig=csp ====
int __thiscall TActionClass::_vt16(_DWORD *this)
{
  return this->idxArray; /*0x6e4653*/
}


// ==== 0x006E4660  TActionClass::Destructor  this=TActionClass  sig=csp ====
TActionClass *__thiscall TActionClass::Destructor(void **Block, char a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  void **v7; // [esp+8h] [ebp-4h] BYREF

  *Block = &TActionClass::`vftable'; /*0x6e4666*/
  *(Block + 1) = &TActionClass::`vftable'; /*0x6e466c*/
  *(Block + 2) = &TActionClass::`vftable'; /*0x6e4673*/
  *(Block + 3) = &vt_TActionClass; /*0x6e467a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x6e4681*/
  v7 = Block; /*0x6e4696*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v7); /*0x6e469a*/
  if ( v3 != -1 && v3 < MEMORY[0xB0F680] && v3 < --MEMORY[0xB0F680] ) /*0x6e46b5*/
  {
    do /*0x6e46cd*/
    {
      ++v3; /*0x6e46bd*/
      *((_DWORD *)MEMORY[0xB0F674] + v3 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v3); /*0x6e46c1*/
    }
    while ( v3 < MEMORY[0xB0F680] ); /*0x6e46cd*/
  }
  v7 = Block; /*0x6e46df*/
  v4 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xB0F658] + 16))(&MEMORY[0xB0F658], &v7); /*0x6e46e3*/
  if ( v4 != -1 && v4 < MEMORY[0xB0F668] && v4 < --MEMORY[0xB0F668] ) /*0x6e46fe*/
  {
    do /*0x6e4716*/
    {
      ++v4; /*0x6e4706*/
      *((_DWORD *)MEMORY[0xB0F65C] + v4 - 1) = *((_DWORD *)MEMORY[0xB0F65C] + v4); /*0x6e470a*/
    }
    while ( v4 < MEMORY[0xB0F668] ); /*0x6e4716*/
  }
  v7 = Block; /*0x6e4728*/
  v5 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xB0E658] + 16))(&MEMORY[0xB0E658], &v7); /*0x6e472c*/
  if ( v5 != -1 && v5 < MEMORY[0xB0E668] && v5 < --MEMORY[0xB0E668] ) /*0x6e4747*/
  {
    do /*0x6e475f*/
    {
      ++v5; /*0x6e474f*/
      *((_DWORD *)MEMORY[0xB0E65C] + v5 - 1) = *((_DWORD *)MEMORY[0xB0E65C] + v5); /*0x6e4753*/
    }
    while ( v5 < MEMORY[0xB0E668] ); /*0x6e475f*/
  }
  *((_BYTE *)Block + 109) = 0; /*0x6e4763*/
  AbstractClass::DTOR(Block); /*0x6e4767*/
  if ( (a2 & 1) != 0 ) /*0x6e4771*/
    __3_YAXPAX_Z(Block); /*0x6e4774*/
  return (TActionClass *)Block; /*0x6e477e*/
}


// ==== 0x006E4790  ScriptAction::CopyStringField  this=ScriptAction  sig=csp ====
IUnknown *__thiscall ScriptAction::CopyStringField(char *Destination, char *Source)
{
  if ( Source ) /*0x6e4799*/
  {
    strncpy(Destination, Source, (IUnknown *)0x1F); /*0x6e47a7*/
    *(Destination + 31) = 0; /*0x6e47af*/
    return (IUnknown *)Destination; /*0x6e47b3*/
  }
  else
  {
    *Destination = 0; /*0x6e479b*/
    return (IUnknown *)Destination; /*0x6e479d*/
  }
}


// ==== 0x006E47C0  ScriptAction::CopyStructField  this=ScenarioClass  sig=csp ====
void *__thiscall ScriptAction::CopyStructField(void *this, void *a2, const void *a3)
{
  if ( a3 != this ) /*0x6e47ca*/
    qmemcpy(this, a3, 0x20u); /*0x6e47d3*/
  qmemcpy(a2, this, 0x20u); /*0x6e47e2*/
  return a2; /*0x6e47e4*/
}


// ==== 0x006E47F0  Tactical::ClearBuffer  this=Tactical  sig=csp ====
void __thiscall Tactical_42_::sub_6E47F0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x6e47f6*/
  *(_DWORD *)(this + 16) = 0; /*0x6e47f9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6e4800*/
  {
    __3_YAXPAX_Z(v2); /*0x6e4806*/
    *(_DWORD *)(this + 4) = 0; /*0x6e480e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6e4811*/
  *(_DWORD *)(this + 8) = 0; /*0x6e4814*/
}


// ==== 0x006E4820  Tactical::PointerToIndex  this=Tactical  sig=csp ====
unsigned int __thiscall Tactical_42_::sub_6E4820(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6e4820*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6e4835*/
  else
    return 0; /*0x6e4827*/
}


// ==== 0x006E4840  _VectorClass_PAVTActionClass::UpdateView  this=VectorClass  sig=csp ====
int __thiscall Tactical_42_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x6e484a*/
}


// ==== 0x006E4850  _VectorClass_PAVTActionClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall Tactical_42_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x6e4852*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x6e485d*/
  {
    v3 = 0; /*0x6e485f*/
    if ( v2 <= 0 ) /*0x6e4863*/
      return 1; /*0x6e4883*/
    v4 = (_DWORD *)this->Items; /*0x6e4865*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6e486b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6e4874*/
    {
      ++v3; /*0x6e4876*/
      ++v4; /*0x6e4877*/
      if ( v3 >= v2 ) /*0x6e487c*/
        return 1; /*0x6e487c*/
    }
  }
  return 0; /*0x6e487e*/
}


// ==== 0x006E4890  _VectorClass_PAVTActionClass::Release  this=VectorClass  sig=csp ====
char __thiscall Tactical_42_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x6e489c*/
  {
    this->IsInitialized = 0; /*0x6e48a6*/
    if ( a3 ) /*0x6e48ac*/
      v4 = a3; /*0x6e48c2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6e48be*/
    this->IsInitialized = 1; /*0x6e48c6*/
    if ( v4 ) /*0x6e48ca*/
    {
      if ( this->Items ) /*0x6e48d5*/
      {
        v6 = this->Capacity; /*0x6e48dc*/
        if ( a2 < v6 ) /*0x6e48e1*/
          v6 = a2; /*0x6e48e3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6e48e9*/
          ++i; /*0x6e48ee*/
        if ( this->IsAllocated ) /*0x6e48fb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x6e4906*/
          this->Items = 0; /*0x6e490e*/
        }
      }
      this->Items = v4; /*0x6e4917*/
      this->Capacity = a2; /*0x6e491f*/
      this->IsAllocated = a3 == 0; /*0x6e4922*/
      return 1; /*0x6e4928*/
    }
    else
    {
      return 0; /*0x6e48cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6e4932*/
    return 1; /*0x6e4938*/
  }
}


// ==== 0x006E4940  _VectorClass_PAVTActionClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall Tactical_42_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x6e494d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x6e4953*/
    *(_DWORD *)(this + 4) = 0; /*0x6e495b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6e495e*/
  *(_DWORD *)(this + 8) = 0; /*0x6e4961*/
}


// ==== 0x006E4970  _VectorClass_PAVTActionClass::Init  this=VectorClass  sig=csp ====
int __thiscall Tactical_42_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x6e4970*/
    return 0; /*0x6e4978*/
  v3 = *(_DWORD *)(this + 8); /*0x6e497e*/
  result = 0; /*0x6e4981*/
  if ( v3 <= 0 ) /*0x6e4985*/
    return -1; /*0x6e499c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x6e498b*/
  {
    if ( ++result >= v3 ) /*0x6e499a*/
      return -1; /*0x6e499a*/
  }
  return result; /*0x6e497a*/
}


// ==== 0x006E49B0  _VectorClass_PAVTActionClass::InitMap  this=VectorClass  sig=csp ====
unsigned int __thiscall Tactical_42_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6e49b0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6e49c5*/
  else
    return 0; /*0x6e49b7*/
}


// ==== 0x006E49D0  Tactical::SetCapacity  this=Tactical  sig=csp ====
char __thiscall Tactical_42_::sub_6E49D0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6e49dc*/
  {
    this->vtable4 = 0; /*0x6e49e2*/
    if ( a3 ) /*0x6e49e8*/
      v4 = a3; /*0x6e49fe*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6e49fa*/
    this->vtable4 = 1; /*0x6e4a02*/
    if ( !v4 ) /*0x6e4a06*/
      return 0; /*0x6e4a7a*/
    if ( this->vtable2 ) /*0x6e4a08*/
    {
      v5 = this->vtable3; /*0x6e4a0f*/
      if ( a2 < v5 ) /*0x6e4a14*/
        v5 = a2; /*0x6e4a16*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->vtable2 + 4 * i - 4) ) /*0x6e4a1c*/
        ++i; /*0x6e4a21*/
      if ( this->u32_34 ) /*0x6e4a2e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x6e4a39*/
        this->vtable2 = 0; /*0x6e4a41*/
      }
    }
    this->vtable2 = v4; /*0x6e4a4a*/
    this->vtable3 = a2; /*0x6e4a52*/
    this->u32_34 = a3 == 0; /*0x6e4a55*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->vtable4)(this); /*0x6e4a5e*/
  }
  v7 = this->vtable3; /*0x6e4a61*/
  if ( v7 < this->vtable2 ) /*0x6e4a69*/
    this->vtable2 = v7; /*0x6e4a6b*/
  return 1; /*0x6e4a6e*/
}


// ==== 0x006E4A80  Tactical::FindItem  this=Tactical  sig=csp ====
int __thiscall Tactical_42_::sub_6E4A80(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->vtable2; /*0x6e4a80*/
  result = 0; /*0x6e4a83*/
  if ( v2 <= 0 ) /*0x6e4a88*/
    return -1; /*0x6e4a9f*/
  for ( i = (_DWORD *)this->vtable2; *i != *a2; ++i ) /*0x6e4a8e*/
  {
    if ( ++result >= v2 ) /*0x6e4a9d*/
      return -1; /*0x6e4a9d*/
  }
  return result; /*0x6e4aa2*/
}


// ==== 0x006E4AB0  _VectorClass_PAVTActionClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall Tactical_42_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6e4ab3*/
  *Block = &vt_VectorClass_TActionClass; /*0x6e4ab6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6e4ac0*/
  {
    __3_YAXPAX_Z(v3); /*0x6e4ac8*/
    *(Block + 1) = 0; /*0x6e4ad0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6e4adb*/
  *(Block + 2) = 0; /*0x6e4ae1*/
  if ( (a2 & 1) != 0 ) /*0x6e4ae8*/
    __3_YAXPAX_Z(Block); /*0x6e4aeb*/
  return (VectorClass *)Block; /*0x6e4af5*/
}


// ==== 0x006E4B00    this=Tactical_42_  sig=? ====
_DWORD *__thiscall Tactical_42_::loc_6E4B00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6e4b03*/
  *Block = &vt_VectorClass_TActionClass; /*0x6e4b06*/
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
  MEMORY[0xB0E708] = Math::Sqrt(v0 + v0); /*0x6e4b6e*/
}


// ==== 0x006E4B80  sub_6E4B80  this=-  sig=ida-proto ====
void sub_6E4B80()
{
  MEMORY[0xB0E770] = MEMORY[0xB0E708] / 60.0; /*0x6e4b8c*/
}


// ==== 0x006E4BA0  sub_6E4BA0  this=-  sig=ida-proto ====
void sub_6E4BA0()
{
  MEMORY[0xB0E758] = 1.0 / MEMORY[0xB0E770]; /*0x6e4bac*/
}


// ==== 0x006E4BC0  sub_6E4BC0  this=-  sig=ida-proto ====
void sub_6E4BC0()
{
  MEMORY[0xB0E750] = 0.0174532925199433 * 45.0; /*0x6e4bcc*/
}


// ==== 0x006E4BE0  sub_6E4BE0  this=-  sig=ida-proto ====
void sub_6E4BE0()
{
  MEMORY[0xB0E710] = 0.0174532925199433 * 60.0; /*0x6e4bec*/
}


// ==== 0x006E4C00  sub_6E4C00  this=-  sig=ida-proto ====
void sub_6E4C00()
{
  MEMORY[0xB0E6E8] = 0.0174532925199433 * 90.0; /*0x6e4c0c*/
}


// ==== 0x006E4C20  sub_6E4C20  this=-  sig=ida-proto ====
__int64 sub_6E4C20()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0E6E8] - MEMORY[0xB0E710]); /*0x6e4c32*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0E708] * 0.5); /*0x6e4c46*/
  MEMORY[0xB0E778] = result; /*0x6e4c4b*/
  return result; /*0x6e4c50*/
}


// ==== 0x006E4C60  sub_6E4C60  this=-  sig=ida-proto ====
void sub_6E4C60()
{
  MEMORY[0xB0E718] = Math::ArcTan((double)MEMORY[0xB0E778] * 0.00390625); /*0x6e4c77*/
}


// ==== 0x006E4C90  sub_6E4C90  this=-  sig=ida-proto ====
void sub_6E4C90()
{
  MEMORY[0xB0E748] = Math::ArcTan((double)(2 * MEMORY[0xB0E778]) / MEMORY[0xB0E708]); /*0x6e4cb2*/
}


// ==== 0x006E4CC0  sub_6E4CC0  this=-  sig=ida-proto ====
__int64 sub_6E4CC0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0E778]) + 0.5); /*0x6e4cdb*/
  MEMORY[0xB0E76C] = result; /*0x6e4ce0*/
  return result; /*0x6e4ce6*/
}


// ==== 0x006E4CF0  sub_6E4CF0  this=-  sig=ida-proto ====
int sub_6E4CF0()
{
  MEMORY[0xB0E700] = 0; /*0x6e4cf2*/
  return 0; /*0x6e4cfe*/
}


// ==== 0x006E4D00  sub_6E4D00  this=-  sig=ida-proto ====
int sub_6E4D00()
{
  MEMORY[0xB0E738] = 0; /*0x6e4d02*/
  MEMORY[0xB0E73C] = 0; /*0x6e4d07*/
  MEMORY[0xB0E740] = 0; /*0x6e4d0c*/
  return 0; /*0x6e4d11*/
}


// ==== 0x006E4D20  sub_6E4D20  this=-  sig=ida-proto ====
int sub_6E4D20()
{
  MEMORY[0xB0E768] = 0; /*0x6e4d25*/
  MEMORY[0xB0E760] = 128; /*0x6e4d2f*/
  MEMORY[0xB0E764] = 128; /*0x6e4d34*/
  return 128; /*0x6e4d39*/
}


// ==== 0x006E4D40  sub_6E4D40  this=-  sig=ida-proto ====
int sub_6E4D40()
{
  MEMORY[0xB0E6F0] = 0; /*0x6e4d42*/
  MEMORY[0xB0E6F4] = 0; /*0x6e4d47*/
  MEMORY[0xB0E6F8] = 0; /*0x6e4d4c*/
  MEMORY[0xB0E6FC] = 0; /*0x6e4d51*/
  return 0; /*0x6e4d56*/
}


// ==== 0x006E4D60  sub_6E4D60  this=-  sig=ida-proto ====
int sub_6E4D60()
{
  MEMORY[0xB0E724] = 0; /*0x6e4d67*/
  MEMORY[0xB0E728] = 0; /*0x6e4d6c*/
  MEMORY[0xB0E72C] = 1; /*0x6e4d71*/
  MEMORY[0xB0E72D] = 0; /*0x6e4d78*/
  MEMORY[0xB0E720] = (int)&vt_DynamicVectorClass_TagClass; /*0x6e4d7d*/
  MEMORY[0xB0E734] = 10; /*0x6e4d87*/
  MEMORY[0xB0E730] = 0; /*0x6e4d91*/
  return atexit(sub_6E4DA0); /*0x6e4d9c*/
}


// ==== 0x006E4DA0  sub_6E4DA0  this=-  sig=ida-proto ====
void __cdecl sub_6E4DA0()
{
  MEMORY[0xB0E720] = (int)&vt_VectorClass_TagClass; /*0x6e4da8*/
  if ( MEMORY[0xB0E724] && MEMORY[0xB0E72D] ) /*0x6e4dbc*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0E724]); /*0x6e4dbf*/
    MEMORY[0xB0E724] = 0; /*0x6e4dc7*/
  }
  MEMORY[0xB0E72D] = 0; /*0x6e4dcd*/
  MEMORY[0xB0E728] = 0; /*0x6e4dd3*/
}


// ==== 0x006E4DE0  TagClass::GetType  this=TagClass  sig=csp ====
int __thiscall TeknoClass::GetType(int this, TeamTypeClass *aP1)
{
  int v3; // eax
  int v4; // eax
  TriggerClass *v5; // eax
  TriggerClass *i; // edi
  int v7; // eax
  TriggerClass *v8; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6e4de5*/
  *(_DWORD *)(this + 36) = aP1; /*0x6e4df0*/
  *(_DWORD *)(this + 40) = 0; /*0x6e4df3*/
  *(_DWORD *)(this + 44) = 0; /*0x6e4df6*/
  *(_DWORD *)(this + 48) = *(_DWORD *)&stru_B05488.__pad_579C[15068]; /*0x6e4dfe*/
  *(_BYTE *)(this + 52) = 0; /*0x6e4e01*/
  *(_BYTE *)(this + 53) = 0; /*0x6e4e04*/
  *(_DWORD *)this = &TagClass::`vftable'; /*0x6e4e07*/
  *(_DWORD *)(this + 4) = &TagClass::`vftable'; /*0x6e4e0d*/
  *(_DWORD *)(this + 8) = &TagClass::`vftable'; /*0x6e4e14*/
  *(_DWORD *)(this + 12) = &vt_TagClass; /*0x6e4e1b*/
  if ( *(int *)&stru_B05488.__pad_579C[15116] < *(int *)&stru_B05488.__pad_579C[15108] /*0x6e4e54*/
    || (stru_B05488.__pad_579C[15113] || !*(_DWORD *)&stru_B05488.__pad_579C[15108])
    && *(int *)&stru_B05488.__pad_579C[15120] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[15100] + 8))(
         &stru_B05488.__pad_579C[15100],
         *(_DWORD *)&stru_B05488.__pad_579C[15108] + *(_DWORD *)&stru_B05488.__pad_579C[15120],
         0) )
  {
    v3 = (*(_DWORD *)&stru_B05488.__pad_579C[15116])++; /*0x6e4e61*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15104] + 4 * v3) = this; /*0x6e4e70*/
  }
  if ( *(int *)&stru_B05488.__pad_579C[19036] < *(int *)&stru_B05488.__pad_579C[19028] /*0x6e4ea7*/
    || (stru_B05488.__pad_579C[19033] || !*(_DWORD *)&stru_B05488.__pad_579C[19028])
    && *(int *)&stru_B05488.__pad_579C[19040] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19020] + 8))(
         &stru_B05488.__pad_579C[19020],
         *(_DWORD *)&stru_B05488.__pad_579C[19028] + *(_DWORD *)&stru_B05488.__pad_579C[19040],
         0) )
  {
    v4 = (*(_DWORD *)&stru_B05488.__pad_579C[19036])++; /*0x6e4eb4*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024] + 4 * v4) = this; /*0x6e4ec3*/
  }
  if ( *(int *)&stru_B05488.__pad_579C[19188] < *(int *)&stru_B05488.__pad_579C[19180] /*0x6e4efa*/
    || (stru_B05488.__pad_579C[19185] || !*(_DWORD *)&stru_B05488.__pad_579C[19180])
    && *(int *)&stru_B05488.__pad_579C[19192] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19172] + 8))(
         &stru_B05488.__pad_579C[19172],
         *(_DWORD *)&stru_B05488.__pad_579C[19180] + *(_DWORD *)&stru_B05488.__pad_579C[19192],
         0) )
  {
    v5 = (TriggerClass *)(*(_DWORD *)&stru_B05488.__pad_579C[19188])++; /*0x6e4f07*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19176] + 4 * (_DWORD)v5) = this; /*0x6e4f16*/
  }
  if ( aP1 ) /*0x6e4f1b*/
  {
    for ( i = (TriggerClass *)aP1[1].TeamTypeClass_field_2C; i; i = (TriggerClass *)i[2].nextArrayIndex ) /*0x6e4f25*/
    {
      v7 = __2_YAPAXI_Z(0x48u); /*0x6e4f29*/
      if ( v7 ) /*0x6e4f33*/
        v8 = (TriggerClass *)TriggerClass::Construct(v7, i); /*0x6e4f38*/
      else
        v8 = 0; /*0x6e4f3f*/
      v8->nextTrigger = *(void **)(this + 40); /*0x6e4f44*/
      *(_DWORD *)(this + 40) = v8; /*0x6e4f47*/
    }
  }
  return this; /*0x6e4f56*/
}


// ==== 0x006E4F60  TagClass::Destructor  this=TagClass  sig=csp ====
void __fastcall TagClass::Destructor(void **a1, AbstractClass *a2)
{
  TagTypeClass *v2; // ecx
  int eax5; // eax
  ParticleSystemClass *v4; // ecx
  ParticleSystemClass *v5; // ecx
  TagTypeClass *v6; // ecx
  int eax18; // eax
  ParticleSystemClass *v8; // ecx
  ParticleSystemClass *v9; // ecx
  TriggerClass *v10; // eax
  _DWORD *buildingType; // eax
  int Owner; // eax
  int v14; // ecx
  _DWORD *eax35; // eax
  TriggerClass *v15; // esi
  int eax37; // eax
  AbstractClass *v17; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  AbstractClass *v22; // edx
  _DWORD v23[4]; // [esp+10h] [ebp-10h] BYREF

  LOBYTE(a2) = 1; /*0x6e4f63*/
  *a1 = &TagClass::`vftable'; /*0x6e4f69*/
  a1[1] = &TagClass::`vftable'; /*0x6e4f6f*/
  a1[2] = &TagClass::`vftable'; /*0x6e4f76*/
  a1[3] = &vt_TagClass; /*0x6e4f7d*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)a1, a2); /*0x6e4f84*/
  if ( HouseClass_Player.__pad_5568[22252] ) /*0x6e4f90*/
  {
    if ( HouseClass_Player.__pad_5568[23208] ) /*0x6e4f9d*/
    {
      v2 = (TagTypeClass *)a1[9]; /*0x6e4f9f*/
      if ( v2 ) /*0x6e4fa4*/
      {
        if ( (Debug::AccumFlags(v2) & 0x10) != 0 ) /*0x6e4fad*/
        {
          eax5 = 0; /*0x6e4fb5*/
          if ( *(int *)&stru_89E138.__pad_579C[67588] <= 0 ) /*0x6e4fb9*/
          {
LABEL_9:
            eax5 = -1; /*0x6e4fcd*/
          }
          else
          {
            v4 = *(ParticleSystemClass **)&stru_89E138.__pad_579C[67576]; /*0x6e4fbb*/
            while ( *(void ***)v4->__pad_0 != a1 ) /*0x6e4fc3*/
            {
              ++eax5; /*0x6e4fc5*/
              v4 = (ParticleSystemClass *)((char *)v4 + 4); /*0x6e4fc6*/
              if ( eax5 >= *(int *)&stru_89E138.__pad_579C[67588] ) /*0x6e4fcb*/
                goto LABEL_9; /*0x6e4fcb*/
            }
          }
          v5 = (ParticleSystemClass *)dword_A83CDC; /*0x6e4fd0*/
          if ( dword_A83CDC >= eax5 ) /*0x6e4fd8*/
          {
            --dword_A83CDC; /*0x6e4fdd*/
            if ( (int)&v5[-1].OwnerHouse + 3 < 0 && !*(_DWORD *)&stru_89E138.__pad_579C[67588] ) /*0x6e4fe6*/
              dword_A83CDC = 0; /*0x6e4fe8*/
          }
        }
      }
    }
    if ( HouseClass_Player.__pad_5568[22252] ) /*0x6e4ff5*/
    {
      if ( HouseClass_Player.__pad_5568[23208] ) /*0x6e5002*/
      {
        v6 = (TagTypeClass *)a1[9]; /*0x6e5004*/
        if ( v6 ) /*0x6e5009*/
        {
          if ( (Debug::AccumFlags(v6) & 4) != 0 ) /*0x6e5012*/
          {
            eax18 = 0; /*0x6e501a*/
            if ( dword_8B41B8 <= 0 ) /*0x6e501e*/
            {
LABEL_22:
              eax18 = -1; /*0x6e5032*/
            }
            else
            {
              v8 = (ParticleSystemClass *)unk_8B41AC; /*0x6e5020*/
              while ( *(void ***)v8->__pad_0 != a1 ) /*0x6e5028*/
              {
                ++eax18; /*0x6e502a*/
                v8 = (ParticleSystemClass *)((char *)v8 + 4); /*0x6e502b*/
                if ( eax18 >= dword_8B41B8 ) /*0x6e5030*/
                  goto LABEL_22; /*0x6e5030*/
              }
            }
            v9 = (ParticleSystemClass *)HouseClass_Player.field_70; /*0x6e5035*/
            if ( HouseClass_Player.field_70 >= eax18 ) /*0x6e503d*/
            {
              --HouseClass_Player.field_70; /*0x6e5042*/
              if ( (int)&v9[-1].OwnerHouse + 3 < 0 && !dword_8B41B8 ) /*0x6e504b*/
                HouseClass_Player.field_70 = 0; /*0x6e504d*/
            }
          }
        }
      }
      if ( HouseClass_Player.__pad_5568[22252] ) /*0x6e505a*/
      {
        if ( HouseClass_Player.__pad_5568[23208] ) /*0x6e5063*/
        {
          v10 = (TriggerClass *)a1[10]; /*0x6e5065*/
          if ( v10 ) /*0x6e506a*/
          {
            buildingType = v10->buildingType; /*0x6e506c*/
            if ( buildingType ) /*0x6e5071*/
            {
              if ( buildingType[41] && TagClass::HasValidHouse(a1[9]) ) /*0x6e5080*/
              {
                Owner = HouseClass::FindOwner(*(void **)(*(_DWORD *)(*((_DWORD *)a1[10] + 9) + 164) + 184)); /*0x6e509b*/
                v14 = *(_DWORD *)(Owner + 636); /*0x6e50a0*/
                if ( v14 ) /*0x6e50a8*/
                  *(_DWORD *)(Owner + 636) = v14 - 1; /*0x6e50ab*/
                eax35 = (_DWORD *)(Owner + 664); /*0x6e50b7*/
                *eax35 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x6e50c1*/
                eax35[1] = v23[2]; /*0x6e50c7*/
                eax35[2] = 60; /*0x6e50ca*/
              }
            }
          }
        }
      }
    }
  }
  v15 = (TriggerClass *)a1[10]; /*0x6e50cd*/
  if ( v15 ) /*0x6e50d2*/
  {
    eax37 = *(_DWORD *)&stru_B05488.__pad_579C[19068]; /*0x6e50d4*/
    do /*0x6e50d9*/
    {
      if ( *(int *)&stru_B05488.__pad_579C[19076] < eax37 ) /*0x6e50df*/
        goto LABEL_43; /*0x6e50df*/
      if ( !stru_B05488.__pad_579C[19073] && eax37 || *(int *)&stru_B05488.__pad_579C[19080] <= 0 ) /*0x6e50f7*/
        goto LABEL_45; /*0x6e50f7*/
      if ( (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19060] + 8))( /*0x6e5109*/
             &stru_B05488.__pad_579C[19060],
             eax37 + *(_DWORD *)&stru_B05488.__pad_579C[19080],
             0) )
      {
LABEL_43:
        v17 = (AbstractClass *)(*(_DWORD *)&stru_B05488.__pad_579C[19076])++; /*0x6e5116*/
        *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19064] + 4 * (_DWORD)v17) = v15; /*0x6e5125*/
      }
      eax37 = *(_DWORD *)&stru_B05488.__pad_579C[19068]; /*0x6e5128*/
LABEL_45:
      v15 = (TriggerClass *)v15->nextTrigger; /*0x6e512d*/
    }
    while ( v15 ); /*0x6e50d9*/
  }
  v23[0] = a1; /*0x6e5134*/
  v19 = (*(int (__thiscall **)(char *, _DWORD *))(*(_DWORD *)&stru_B05488.__pad_579C[19020] + 16))( /*0x6e5147*/
          &stru_B05488.__pad_579C[19020],
          v23);
  if ( v19 != -1 && v19 < *(int *)&stru_B05488.__pad_579C[19036] ) /*0x6e5157*/
  {
    --*(_DWORD *)&stru_B05488.__pad_579C[19036]; /*0x6e515c*/
    for ( ; /*0x6e5162*/
          v19 < *(int *)&stru_B05488.__pad_579C[19036];
          *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024] + 4 * v19 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024]
                                                                                           + 4 * v19) )
    {
      ++v19; /*0x6e516a*/
    }
  }
  v23[0] = a1; /*0x6e518c*/
  v20 = (*(int (__thiscall **)(char *, _DWORD *))(*(_DWORD *)&stru_B05488.__pad_579C[19172] + 16))( /*0x6e5190*/
          &stru_B05488.__pad_579C[19172],
          v23);
  if ( v20 != -1 && v20 < *(int *)&stru_B05488.__pad_579C[19188] ) /*0x6e51a0*/
  {
    --*(_DWORD *)&stru_B05488.__pad_579C[19188]; /*0x6e51a5*/
    for ( ; /*0x6e51ab*/
          v20 < *(int *)&stru_B05488.__pad_579C[19188];
          *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19176] + 4 * v20 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19176]
                                                                                           + 4 * v20) )
    {
      ++v20; /*0x6e51b3*/
    }
  }
  v23[0] = a1; /*0x6e51d5*/
  v21 = (*(int (__thiscall **)(char *, _DWORD *))(*(_DWORD *)&stru_B05488.__pad_579C[15100] + 16))( /*0x6e51d9*/
          &stru_B05488.__pad_579C[15100],
          v23);
  if ( v21 != -1 && v21 < *(int *)&stru_B05488.__pad_579C[15116] ) /*0x6e51e9*/
  {
    --*(_DWORD *)&stru_B05488.__pad_579C[15116]; /*0x6e51ee*/
    for ( ; /*0x6e51f4*/
          v21 < *(int *)&stru_B05488.__pad_579C[15116];
          *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15104] + 4 * v21 - 4) = v22 )
    {
      ++v21; /*0x6e51fc*/
      v22 = *(AbstractClass **)(*(_DWORD *)&stru_B05488.__pad_579C[15104] + 4 * v21); /*0x6e51fd*/
    }
  }
  LOBYTE(v22) = 1; /*0x6e520e*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)a1, v22); /*0x6e5212*/
  AbstractClass::DTOR(a1); /*0x6e5219*/
}


// ==== 0x006E5230  TagClass::Destroy  this=TagClass  sig=csp ====
int __thiscall TagClass::Destroy(_BYTE *this)
{
  int result; // eax

  this->destroyed = 1; /*0x6e5233*/
  result = MEMORY[0xB0F6A0]; /*0x6e5237*/
  if ( MEMORY[0xB0F6A8] < MEMORY[0xB0F6A0] /*0x6e5270*/
    || (MEMORY[0xB0F6A5] || !MEMORY[0xB0F6A0])
    && MEMORY[0xB0F6AC] > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F698] + 8))(
                   &MEMORY[0xB0F698],
                   MEMORY[0xB0F6A0] + MEMORY[0xB0F6AC],
                   0),
        (_BYTE)result) )
  {
    result = MEMORY[0xB0F6A8]++; /*0x6e5278*/
    *((_DWORD *)MEMORY[0xB0F69C] + result) = this; /*0x6e5287*/
  }
  return result; /*0x6e528a*/
}


// ==== 0x006E5290  ObjectClass::method_6E5290  this=ObjectClass  sig=csp ====
char __thiscall sub_6E5290(_BYTE *this)
{
  return this->attachedTag; /*0x6e5293*/
}


// ==== 0x006E52A0  TeamClass::FindOrCreate  this=TeamClass  sig=csp ====
TagClass *__thiscall TeamClass::FindOrCreate(TeamTypeClass *this)
{
  int v2; // ecx
  CCINIClass *v3; // edx
  TagClass *result; // eax
  int v5; // eax

  v2 = 0; /*0x6e52aa*/
  if ( *(int *)&stru_B05488.__pad_579C[15116] <= 0 ) /*0x6e52ae*/
  {
LABEL_5:
    v5 = __2_YAPAXI_Z(0x38u); /*0x6e52c5*/
    if ( v5 ) /*0x6e52d1*/
      return (TagClass *)TeknoClass::GetType(v5, this); /*0x6e52d6*/
    else
      return 0; /*0x6e52de*/
  }
  else
  {
    v3 = *(CCINIClass **)&stru_B05488.__pad_579C[15104]; /*0x6e52b0*/
    while ( 1 ) /*0x6e52b6*/
    {
      result = *(TagClass **)v3->__pad_0; /*0x6e52b6*/
      if ( *(TeamTypeClass **)(*(_DWORD *)v3->__pad_0 + 36) == this ) /*0x6e52bb*/
        break; /*0x6e52bb*/
      ++v2; /*0x6e52bd*/
      v3 = (CCINIClass *)((char *)v3 + 4); /*0x6e52be*/
      if ( v2 >= *(int *)&stru_B05488.__pad_579C[15116] ) /*0x6e52c3*/
        goto LABEL_5; /*0x6e52c3*/
    }
  }
  return result; /*0x6e52db*/
}


// ==== 0x006E52F0  FootClass::processScriptAction  this=TagClass  sig=csp ====
CellStruct *__thiscall FootClass::processScriptAction(_DWORD *this, TagClass *aP1)
{
  *(_DWORD *)aP1->__pad_0 = this->defaultCoords; /*0x6e52f7*/
  return (CellStruct *)aP1; /*0x6e52f9*/
}


// ==== 0x006E5300  TagClass::HasCrossesVerticalLineEvent  this=TagClass  sig=csp ====
BOOL __thiscall TagClass::HasCrossesVerticalLineEvent(_DWORD *this)
{
  _DWORD *v1; // ecx

  v1 = (_DWORD *)this->buildingType; /*0x6e5300*/
  return v1 && TagTypeClass::HasCrossesVerticalLineEvent(v1); /*0x6e5315*/
}


// ==== 0x006E5320  TagClass::HasCrossesHorizontalLineEvent  this=TagClass  sig=csp ====
BOOL __thiscall TagClass::HasCrossesHorizontalLineEvent(_DWORD *this)
{
  _DWORD *v1; // ecx

  v1 = (_DWORD *)this->buildingType; /*0x6e5320*/
  return v1 && TagTypeClass::HasCrossesHorizontalLineEvent(v1); /*0x6e5335*/
}


// ==== 0x006E5340  TagClass::HasZoneEntryByEvent  this=TagClass  sig=csp ====
BOOL __thiscall TagClass::HasZoneEntryByEvent(_DWORD *this)
{
  _DWORD *v1; // ecx

  v1 = (_DWORD *)this->buildingType; /*0x6e5340*/
  return v1 && TagTypeClass::HasZoneEntryByEvent(v1); /*0x6e5355*/
}


// ==== 0x006E5380  LinkedList::Contains  this=LinkedList  sig=csp ====
char __thiscall LinkedList::Contains(_DWORD *this, IUnknown *aP1)
{
  int v2; // eax

  v2 = this->q028; /*0x6e5380*/
  if ( !v2 ) /*0x6e5385*/
    return 0; /*0x6e5396*/
  while ( (IUnknown *)v2 != aP1 ) /*0x6e538d*/
  {
    v2 = *(_DWORD *)(v2 + 40); /*0x6e538f*/
    if ( !v2 ) /*0x6e5394*/
      return 0; /*0x6e5394*/
  }
  return 1; /*0x6e5398*/
}


// ==== 0x006E53A0  TeamClass::Update_0  this=TagClass  sig=csp ====
char __thiscall TeamClass::Update_0(
        void **this,
        int aP1,
        AbstractClass *aP2,
        IUnknown *aP3,
        AbstractClass *aP4,
        AbstractClass *aP5)
{
  int v6; // edx
  char v7; // bl
  TriggerClass *v8; // esi
  int v10; // eax
  int eax8; // eax
  _DWORD *v12; // eax
  AbstractClass *v11; // eax
  char v15; // [esp+Ah] [ebp-2h]
  char v16; // [esp+Bh] [ebp-1h]

  v7 = 0; /*0x6e53a7*/
  v16 = 0; /*0x6e53ae*/
  v15 = 0; /*0x6e53b2*/
  if ( HouseClass_Player.__pad_5568[23223] || this->isExecuting || this->destroyed || !this->buildingType ) /*0x6e53d2*/
    return 0; /*0x6e5552*/
  v8 = (TriggerClass *)this->firstTrigger; /*0x6e53de*/
  for ( this->isExecuting = 1; v8; v8 = (TriggerClass *)v8->nextTrigger ) /*0x6e53ec*/
  {
    if ( TriggerClass::RegisterEvent( /*0x6e5414*/
           (int)v8,
           (TriggerClass *)aP1,
           (TechnoClass *)aP2,
           (char)aP4,
           *((_DWORD *)this->buildingType + 39) == 2,
           (int)aP5) )
    {
      v6 = (int)this->buildingType; /*0x6e541d*/
      v10 = *(_DWORD *)(v6 + 156); /*0x6e5420*/
      if ( !v10 ) /*0x6e5429*/
      {
        BuildingClass::ExecuteTriggers((int)v8, (TechnoClass *)aP2, (TriggerClass *)aP3); /*0x6e546d*/
        TeamClass::AddToBuildQueue(v8); /*0x6e5474*/
        v7 = 1; /*0x6e5479*/
        v16 = 1; /*0x6e547b*/
LABEL_14:
        v15 = 1; /*0x6e547f*/
        continue; /*0x6e547f*/
      }
      eax8 = v10 - 1; /*0x6e542b*/
      if ( eax8 ) /*0x6e542c*/
      {
        if ( eax8 == 1 ) /*0x6e542f*/
        {
          BuildingClass::ExecuteTriggers((int)v8, (TechnoClass *)aP2, (TriggerClass *)aP3); /*0x6e5439*/
          v7 = 1; /*0x6e543e*/
        }
        continue; /*0x6e5440*/
      }
      if ( this->instanceCount != (void *)1 ) /*0x6e5446*/
        goto LABEL_14; /*0x6e5446*/
      BuildingClass::ExecuteTriggers((int)v8, (TechnoClass *)aP2, (TriggerClass *)aP3); /*0x6e5450*/
      TeamClass::AddToBuildQueue(v8); /*0x6e5457*/
      v16 = 1; /*0x6e545c*/
      v7 = 1; /*0x6e5461*/
    }
  }
  this->isExecuting = 0; /*0x6e548f*/
  if ( v15 ) /*0x6e5499*/
  {
    if ( aP2 && (void **)aP2[1].uniqueId == this ) /*0x6e54a2*/
      ObjectClass::SetReference(aP2, 0); /*0x6e54a8*/
    if ( aP3 != *(IUnknown **)&stru_B05488.__pad_579C[15068] ) /*0x6e54b9*/
    {
      v12 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP3); /*0x6e54d5*/
      ObjectClass::SetTriggerTarget(v12, 0); /*0x6e54dc*/
    }
  }
  if ( v16 ) /*0x6e54e9*/
  {
    LOBYTE(v6) = 1; /*0x6e54eb*/
    AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, (AbstractClass *)v6); /*0x6e54ef*/
    if ( *(int *)&stru_B05488.__pad_579C[19076] < *(int *)&stru_B05488.__pad_579C[19068] /*0x6e552a*/
      || (stru_B05488.__pad_579C[19073] || !*(_DWORD *)&stru_B05488.__pad_579C[19068])
      && *(int *)&stru_B05488.__pad_579C[19080] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19060] + 8))(
           &stru_B05488.__pad_579C[19060],
           *(_DWORD *)&stru_B05488.__pad_579C[19068] + *(_DWORD *)&stru_B05488.__pad_579C[19080],
           0) )
    {
      v11 = (AbstractClass *)(*(_DWORD *)&stru_B05488.__pad_579C[19076])++; /*0x6e5537*/
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19064] + 4 * (_DWORD)v11) = this; /*0x6e5546*/
    }
  }
  return v7; /*0x6e554b*/
}


// ==== 0x006E5560  ScenarioClass::checkMissionObjectives  this=SpeedType  sig=csp ====
int __thiscall sub_6E5560(_DWORD *this, int a2)
{
  *(this + 12) = a2; /*0x6e5564*/
  return a2; /*0x6e5567*/
}


// ==== 0x006E5570  ObjectClass::Map_Reset_6E5570  this=ObjectClass  sig=csp ====
int sub_6E5570()
{
  int result; // eax

  for ( result = MEMORY[0xB0E730]; MEMORY[0xB0E730] > 0; result = MEMORY[0xB0E730] ) /*0x6e5577*/
  {
    if ( *(_DWORD *)MEMORY[0xB0E724] ) /*0x6e557e*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)MEMORY[0xB0E724] + 32))(*(_DWORD *)MEMORY[0xB0E724], 1); /*0x6e5588*/
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
int __thiscall TagClass::CheckEvent(int this, int a2, TagTypeClass *aP2)
{
  TriggerClass *v4; // eax
  TagTypeClass *result; // eax

  if ( *(_DWORD *)(this + 36) == a2 ) /*0x6e561a*/
    *(_DWORD *)(this + 36) = 0; /*0x6e561c*/
  v4 = *(TriggerClass **)(this + 40); /*0x6e5623*/
  if ( v4 == (TriggerClass *)a2 ) /*0x6e5628*/
    *(_DWORD *)(this + 40) = v4->nextTrigger; /*0x6e562d*/
  result = *(TagTypeClass **)(this + 36); /*0x6e5630*/
  if ( !result ) /*0x6e5635*/
  {
    *(_BYTE *)(this + 52) = 1; /*0x6e5637*/
    result = *(TagTypeClass **)&stru_B05488.__pad_579C[19068]; /*0x6e563b*/
    if ( *(int *)&stru_B05488.__pad_579C[19076] < *(int *)&stru_B05488.__pad_579C[19068] /*0x6e5675*/
      || (stru_B05488.__pad_579C[19073] || !*(_DWORD *)&stru_B05488.__pad_579C[19068])
      && *(int *)&stru_B05488.__pad_579C[19080] > 0
      && (result = (TagTypeClass *)(*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19060]
                                                                              + 8))(
                                     &stru_B05488.__pad_579C[19060],
                                     *(_DWORD *)&stru_B05488.__pad_579C[19068]
                                   + *(_DWORD *)&stru_B05488.__pad_579C[19080],
                                     0),
          (_BYTE)result) )
    {
      result = (TagTypeClass *)(*(_DWORD *)&stru_B05488.__pad_579C[19076])++; /*0x6e567d*/
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19064] + 4 * (_DWORD)result) = this; /*0x6e568c*/
    }
  }
  return (int)result->__pad_0; /*0x6e568f*/
}


// ==== 0x006E56A0  TagClass::ddtor  this=TagClass  sig=csp ====
int __stdcall TagClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6e56a6*/
    return -2147467261; /*0x6e56a8*/
  *a2 = 1425466418; /*0x6e56b6*/
  a2[1] = 298977773; /*0x6e56be*/
  a2[2] = 1610655148; /*0x6e56c7*/
  a2[3] = -1252326136; /*0x6e56d0*/
  return 0; /*0x6e56ad*/
}


// ==== 0x006E56E0  TagClass::ProcessTag  this=TagClass  sig=csp ====
int __thiscall TagClass::_vt13(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  AbstractClass::ProcessPower((#378 *)this); /*0x6e56e9*/
  v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 36) + 4) + 16))(*(_DWORD *)(this + 36) + 4); /*0x6e56f7*/
  Power::TimerProcess(v3); /*0x6e56fd*/
  v4 = *(_DWORD *)(this + 40); /*0x6e5702*/
  if ( v4 ) /*0x6e5707*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(v4 + 4) + 16))(v4 + 4); /*0x6e5710*/
    v4 = Power::TimerProcess(v5); /*0x6e5716*/
  }
  LOBYTE(v4) = *(_BYTE *)(this + 52); /*0x6e571b*/
  return Power::FlagProcess(a2, v4); /*0x6e5726*/
}


// ==== 0x006E5730  TagClass::LoadTag  this=TagClass  sig=csp ====
int __stdcall TagClass::LoadTag(AbstractClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x6e573b*/
  if ( result >= 0 ) /*0x6e5742*/
  {
    if ( aP0 ) /*0x6e5746*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x6e574f*/
      *(_DWORD *)aP0->__pad_0 = &TagClass::`vftable'; /*0x6e5754*/
      *(_DWORD *)&aP0->__pad_0[4] = &TagClass::`vftable'; /*0x6e575a*/
      *(_DWORD *)&aP0->__pad_0[8] = &TagClass::`vftable'; /*0x6e5761*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_TagClass; /*0x6e5768*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]); /*0x6e5778*/
    ObjectPtr::RegisterForTracking( /*0x6e5786*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[4]);
    return 0; /*0x6e578b*/
  }
  return result; /*0x6e578d*/
}


// ==== 0x006E57A0  TagClass::SaveTag  this=TagClass  sig=csp ====
int __stdcall TagClass::SaveTag(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6e57af*/
  if ( result >= 0 ) /*0x6e57b6*/
    return 0; /*0x6e57b8*/
  return result; /*0x6e57ba*/
}


// ==== 0x006E57C0  TechnoClass::HasAnyMission  this=TagClass  sig=csp ====
bool __thiscall TechnoClass_HasAnyMission(_DWORD *this)
{
  int v1; // eax
  std::codecvt_base *v2; // ecx

  v1 = this->firstTrigger; /*0x6e57c0*/
  if ( !v1 ) /*0x6e57c5*/
    return 0; /*0x6e57db*/
  while ( 1 ) /*0x6e57c7*/
  {
    v2 = *(std::codecvt_base **)(v1 + 36); /*0x6e57c7*/
    if ( *((_BYTE *)v2 + 160) ) /*0x6e57ca*/
      break; /*0x6e57ca*/
    v1 = *(_DWORD *)(v1 + 40); /*0x6e57d4*/
    if ( !v1 ) /*0x6e57d9*/
      return 0; /*0x6e57d9*/
  }
  return _do_always_noconv_codecvt_base_std__MBE_NXZ_18(v2); /*0x6e57dd*/
}


// ==== 0x006E57DE  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_18  this=ObjectClass  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_18(std::codecvt_base *this)
{
  return 1; /*0x6e57e0*/
}


// ==== 0x006E57F0  HouseClass::UpdateAllTypes  this=HouseClass  sig=csp ====
int __thiscall HouseClass_UpdateAllTypes(void *this)
{
  int result; // eax
  int i; // esi

  result = MEMORY[0xB0E730]; /*0x6e57f0*/
  for ( i = 0; i < MEMORY[0xB0E730]; ++i ) /*0x6e57fd*/
  {
    TriggerClass::NotifyGlobalChanged(this); /*0x6e580b*/
    result = MEMORY[0xB0E730]; /*0x6e5810*/
  }
  return result; /*0x6e581a*/
}


// ==== 0x006E5820  TriggerActionQueue::ProcessAll  this=TriggerActionQueue  sig=csp ====
int __thiscall TriggerActionQueue::ProcessAll(void *this)
{
  int result; // eax
  int i; // esi

  result = MEMORY[0xB0E730]; /*0x6e5820*/
  for ( i = 0; i < MEMORY[0xB0E730]; ++i ) /*0x6e582d*/
  {
    TriggerClass::NotifyLocalChanged(this); /*0x6e583b*/
    result = MEMORY[0xB0E730]; /*0x6e5840*/
  }
  return result; /*0x6e584a*/
}


// ==== 0x006E5850  TagClass::IsOnlyInstanceOfType  this=TagClass  sig=csp ====
char __thiscall TagClass::IsOnlyInstanceOfType(_DWORD *this)
{
  int v1; // edx
  char *i; // esi

  v1 = 0; /*0x6e5859*/
  if ( MEMORY[0xB0E730] <= 0 ) /*0x6e585d*/
    return 1; /*0x6e587d*/
  for ( i = (char *)MEMORY[0xB0E724]; *(_DWORD **)i == this || *(_DWORD *)(*(_DWORD *)i + 36) != this->buildingType; i += 4 ) /*0x6e585f*/
  {
    if ( ++v1 >= MEMORY[0xB0E730] ) /*0x6e587b*/
      return 1; /*0x6e587b*/
  }
  return 0; /*0x6e587d*/
}


// ==== 0x006E5890  TagClass::StubReturn56  this=TagClass  sig=csp ====
int TagClass::_vt12()
{
  return 56; /*0x6e5895*/
}


// ==== 0x006E58A0  TagClass::StubReturn44  this=TagClass  sig=csp ====
int TagClass::_vt11()
{
  return 44; /*0x6e58a5*/
}


// ==== 0x006E58B0  TagClass::ProcessTrigger  this=TagClass  sig=csp ====
TagClass *__thiscall TagClass::ProcessTrigger(void **Block, char a2)
{
  TagClass::Destructor(Block); /*0x6e58b3*/
  if ( (a2 & 1) != 0 ) /*0x6e58bd*/
    __3_YAXPAX_Z(Block); /*0x6e58c0*/
  return (TagClass *)Block; /*0x6e58ca*/
}


// ==== 0x006E58D0  sub_6E58D0  this=-  sig=ida-proto ====
void sub_6E58D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e58dc*/
  MEMORY[0xB0E7B8] = Math::Sqrt(v0 + v0); /*0x6e58ee*/
}


// ==== 0x006E5900  sub_6E5900  this=-  sig=ida-proto ====
void sub_6E5900()
{
  MEMORY[0xB0E808] = MEMORY[0xB0E7B8] / 60.0; /*0x6e590c*/
}


// ==== 0x006E5920  sub_6E5920  this=-  sig=ida-proto ====
void sub_6E5920()
{
  MEMORY[0xB0E7F0] = 1.0 / MEMORY[0xB0E808]; /*0x6e592c*/
}


// ==== 0x006E5940  sub_6E5940  this=-  sig=ida-proto ====
void sub_6E5940()
{
  MEMORY[0xB0E7E8] = 0.0174532925199433 * 45.0; /*0x6e594c*/
}


// ==== 0x006E5960  sub_6E5960  this=-  sig=ida-proto ====
void sub_6E5960()
{
  MEMORY[0xB0E7C0] = 0.0174532925199433 * 60.0; /*0x6e596c*/
}


// ==== 0x006E5980  sub_6E5980  this=-  sig=ida-proto ====
void sub_6E5980()
{
  MEMORY[0xB0E798] = 0.0174532925199433 * 90.0; /*0x6e598c*/
}


// ==== 0x006E59A0  sub_6E59A0  this=-  sig=ida-proto ====
__int64 sub_6E59A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0E798] - MEMORY[0xB0E7C0]); /*0x6e59b2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0E7B8] * 0.5); /*0x6e59c6*/
  MEMORY[0xB0E810] = result; /*0x6e59cb*/
  return result; /*0x6e59d0*/
}


// ==== 0x006E59E0  sub_6E59E0  this=-  sig=ida-proto ====
void sub_6E59E0()
{
  MEMORY[0xB0E7C8] = Math::ArcTan((double)MEMORY[0xB0E810] * 0.00390625); /*0x6e59f7*/
}


// ==== 0x006E5A10  sub_6E5A10  this=-  sig=ida-proto ====
void sub_6E5A10()
{
  MEMORY[0xB0E7E0] = Math::ArcTan((double)(2 * MEMORY[0xB0E810]) / MEMORY[0xB0E7B8]); /*0x6e5a32*/
}


// ==== 0x006E5A40  sub_6E5A40  this=-  sig=ida-proto ====
__int64 sub_6E5A40()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0E810]) + 0.5); /*0x6e5a5b*/
  MEMORY[0xB0E804] = result; /*0x6e5a60*/
  return result; /*0x6e5a66*/
}


// ==== 0x006E5A70  sub_6E5A70  this=-  sig=ida-proto ====
int sub_6E5A70()
{
  MEMORY[0xB0E7B0] = 0; /*0x6e5a72*/
  MEMORY[0xB0E7B2] = 0; /*0x6e5a78*/
  return 0; /*0x6e5a7e*/
}


// ==== 0x006E5A80  sub_6E5A80  this=-  sig=ida-proto ====
int sub_6E5A80()
{
  MEMORY[0xB0E7D0] = 0; /*0x6e5a82*/
  MEMORY[0xB0E7D4] = 0; /*0x6e5a87*/
  MEMORY[0xB0E7D8] = 0; /*0x6e5a8c*/
  return 0; /*0x6e5a91*/
}


// ==== 0x006E5AA0  sub_6E5AA0  this=-  sig=ida-proto ====
int sub_6E5AA0()
{
  MEMORY[0xB0E800] = 0; /*0x6e5aa5*/
  MEMORY[0xB0E7F8] = 128; /*0x6e5aaf*/
  MEMORY[0xB0E7FC] = 128; /*0x6e5ab4*/
  return 128; /*0x6e5ab9*/
}


// ==== 0x006E5AC0  sub_6E5AC0  this=-  sig=ida-proto ====
int sub_6E5AC0()
{
  MEMORY[0xB0E7A0] = 0; /*0x6e5ac2*/
  MEMORY[0xB0E7A4] = 0; /*0x6e5ac7*/
  MEMORY[0xB0E7A8] = 0; /*0x6e5acc*/
  MEMORY[0xB0E7AC] = 0; /*0x6e5ad1*/
  return 0; /*0x6e5ad6*/
}


// ==== 0x006E5AE0  sub_6E5AE0  this=-  sig=ida-proto ====
int sub_6E5AE0()
{
  MEMORY[0xB0E784] = 0; /*0x6e5ae7*/
  MEMORY[0xB0E788] = 0; /*0x6e5aec*/
  MEMORY[0xB0E78C] = 1; /*0x6e5af1*/
  MEMORY[0xB0E78D] = 0; /*0x6e5af8*/
  MEMORY[0xB0E780] = (int)&vt_DynamicVectorClass_TagTypeClass; /*0x6e5afd*/
  MEMORY[0xB0E794] = 10; /*0x6e5b07*/
  MEMORY[0xB0E790] = 0; /*0x6e5b11*/
  return atexit(sub_6E5B20); /*0x6e5b1c*/
}


// ==== 0x006E5B20  sub_6E5B20  this=-  sig=ida-proto ====
void __cdecl sub_6E5B20()
{
  MEMORY[0xB0E780] = (int)&vt_VectorClass_TagTypeClass; /*0x6e5b28*/
  if ( MEMORY[0xB0E784] && MEMORY[0xB0E78D] ) /*0x6e5b3c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0E784]); /*0x6e5b3f*/
    MEMORY[0xB0E784] = 0; /*0x6e5b47*/
  }
  MEMORY[0xB0E78D] = 0; /*0x6e5b4d*/
  MEMORY[0xB0E788] = 0; /*0x6e5b53*/
}


// ==== 0x006E5B60  TagTypeClass::Construct  this=AbstractTypeClass  sig=csp ====
char *__thiscall TagTypeClass::Construct(char *this, ObjectClass *aP1)
{
  AbstractTypeClass *v3; // eax
  int v4; // eax
  char Destination[48]; // [esp+8h] [ebp-34h] BYREF
  char v7; // [esp+38h] [ebp-4h]

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x6e5b6c*/
  this->q026 = -1; /*0x6e5b78*/
  this->q09C = 0; /*0x6e5b82*/
  this->u32_28 = 0; /*0x6e5b88*/
  *(_DWORD *)this = &TagTypeClass::`vftable'; /*0x6e5b8e*/
  this->vtable2 = &TagTypeClass::`vftable'; /*0x6e5b95*/
  this->vtable3 = &TagTypeClass::`vftable'; /*0x6e5b9c*/
  this->vtable4 = &vt_TagTypeClass; /*0x6e5ba3*/
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
  this->q026 = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6140]; /*0x6e5be6*/
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[6140] < *(int *)&MEMORY[0xB077F8].__pad_579C[6132] /*0x6e5c1e*/
    || (MEMORY[0xB077F8].__pad_579C[6137] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6132])
    && *(int *)&MEMORY[0xB077F8].__pad_579C[6144] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6124] + 8))(
         &MEMORY[0xB077F8].__pad_579C[6124],
         *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6132] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6144],
         0) )
  {
    v3 = (AbstractTypeClass *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6140])++; /*0x6e5c2b*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6128] + 4 * (_DWORD)v3) = this; /*0x6e5c3a*/
  }
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[9964] < *(int *)&MEMORY[0xB077F8].__pad_579C[9956] /*0x6e5c71*/
    || (MEMORY[0xB077F8].__pad_579C[9961] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9956])
    && *(int *)&MEMORY[0xB077F8].__pad_579C[9968] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9948] + 8))(
         &MEMORY[0xB077F8].__pad_579C[9948],
         *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9956] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9968],
         0) )
  {
    v4 = (*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9964])++; /*0x6e5c7e*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9952] + 4 * v4) = this; /*0x6e5c8d*/
  }
  return this; /*0x6e5c92*/
}


// ==== 0x006E5CA0  TagTypeClass::CleanupMembers  this=TagTypeClass  sig=csp ====
int __thiscall sub_6E5CA0(int this)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // esi
  int v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // eax
  int v10; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)this = &TagTypeClass::`vftable'; /*0x6e5ca7*/
  *(_DWORD *)(this + 4) = &TagTypeClass::`vftable'; /*0x6e5cad*/
  *(_DWORD *)(this + 8) = &TagTypeClass::`vftable'; /*0x6e5cb4*/
  *(_DWORD *)(this + 12) = &vt_TagTypeClass; /*0x6e5cbb*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x6e5cc2*/
  v2 = *(_DWORD **)(this + 160); /*0x6e5cc7*/
  *(_DWORD *)(this + 160) = 0; /*0x6e5ccd*/
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
  if ( MEMORY[0xB0E730] > 0 ) /*0x6e5d05*/
  {
    v5 = MEMORY[0xB0E724]; /*0x6e5d07*/
    do /*0x6e5d2e*/
    {
      v6 = (_DWORD *)v5[v4]; /*0x6e5d0c*/
      if ( v6[9] == this ) /*0x6e5d12*/
      {
        if ( v6 ) /*0x6e5d16*/
        {
          (*(void (__thiscall **)(_DWORD *, int))(*v6 + 32))(v6, 1); /*0x6e5d1c*/
          v5 = MEMORY[0xB0E724]; /*0x6e5d1f*/
        }
        --v4; /*0x6e5d24*/
      }
      ++v4; /*0x6e5d2b*/
    }
    while ( v4 < MEMORY[0xB0E730] ); /*0x6e5d2e*/
  }
  v10 = this; /*0x6e5d40*/
  v7 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v10); /*0x6e5d44*/
  if ( v7 != -1 && v7 < MEMORY[0xB0F680] && v7 < --MEMORY[0xB0F680] ) /*0x6e5d5f*/
  {
    do /*0x6e5d77*/
    {
      ++v7; /*0x6e5d67*/
      *((_DWORD *)MEMORY[0xB0F674] + v7 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v7); /*0x6e5d6b*/
    }
    while ( v7 < MEMORY[0xB0F680] ); /*0x6e5d77*/
  }
  v10 = this; /*0x6e5d89*/
  v8 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0E780] + 16))(&MEMORY[0xB0E780], &v10); /*0x6e5d8d*/
  if ( v8 != -1 && v8 < MEMORY[0xB0E790] && v8 < --MEMORY[0xB0E790] ) /*0x6e5da8*/
  {
    do /*0x6e5dc0*/
    {
      ++v8; /*0x6e5db0*/
      *((_DWORD *)MEMORY[0xB0E784] + v8 - 1) = *((_DWORD *)MEMORY[0xB0E784] + v8); /*0x6e5db4*/
    }
    while ( v8 < MEMORY[0xB0E790] ); /*0x6e5dc0*/
  }
  return AbstractTypeClass::Dtor((_DWORD *)this); /*0x6e5dc9*/
}


// ==== 0x006E5E50  TagTypeClass::GetEvent  this=TagTypeClass  sig=csp ====
int __thiscall TagTypeClass::_vt10(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = this->u32_A0; /*0x6e5e50*/
  if ( result == a2 ) /*0x6e5e5c*/
  {
    result = *(_DWORD *)(result + 168); /*0x6e5e5e*/
    this->u32_A0 = result; /*0x6e5e64*/
  }
  return result; /*0x6e5e6a*/
}


// ==== 0x006E5E70  ObjectTypeClass::FindByName  this=Coord  sig=csp ====
int __thiscall ObjectTypeClass::FindByName(void *this)
{
  int v2; // ebx
  int v3; // esi

  if ( !this ) /*0x6e5e77*/
    return 0; /*0x6e5e77*/
  v2 = 0; /*0x6e5e7e*/
  if ( *(int *)&stru_B05488.__pad_579C[15212] <= 0 ) /*0x6e5e82*/
    return 0; /*0x6e5eb8*/
  while ( 1 ) /*0x6e5e8a*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15200] + 4 * v2); /*0x6e5e8a*/
    if ( !_strcmpi((const void *)(v3 + 36), this) || !_strcmpi((const void *)(v3 + 100), this) ) /*0x6e5ea2*/
      break; /*0x6e5ea2*/
    if ( ++v2 >= *(int *)&stru_B05488.__pad_579C[15212] ) /*0x6e5eb6*/
      return 0; /*0x6e5eb6*/
  }
  return v3; /*0x6e5eb8*/
}


// ==== 0x006E5ED0  CCINIClass::ProcessSection  this=IUnknown  sig=csp ====
ObjectClass *__thiscall CCINIClass::ProcessSection(char *this)
{
  ObjectClass *result; // eax
  ObjectClass *v3; // esi
  CCINIClass *v4; // ebp
  ObjectClass *StringByIndex; // edi
  int v6; // esi
  char *v7; // eax
  AbstractTypeClass *v8; // esi
  int v9; // eax
  ObjectClass *v10; // [esp+Ch] [ebp-1Ch]
  char Destination[24]; // [esp+10h] [ebp-18h] BYREF

  result = (ObjectClass *)INIClass::GetKeyCount(this, (INIClass *)&stru_830620.__pad_579C[52864]); /*0x6e5ede*/
  v3 = result; /*0x6e5ee3*/
  v4 = 0; /*0x6e5ee5*/
  v10 = result; /*0x6e5ee9*/
  if ( (int)result > 0 ) /*0x6e5eed*/
  {
    while ( 1 ) /*0x6e5f07*/
    {
      StringByIndex = (ObjectClass *)INIClass::GetStringByIndex(this, (CCINIClass *)&stru_830620.__pad_579C[52864], v4); /*0x6e5f07*/
      result = (ObjectClass *)INIClass::GetString( /*0x6e5f1a*/
                                (unsigned __int8 ***)this,
                                (INIClass *)&stru_830620.__pad_579C[52864],
                                (unsigned __int8 *)StringByIndex,
                                (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
                                (INIClass *)Destination,
                                24);
      if ( (int)result > 0 ) /*0x6e5f21*/
        break; /*0x6e5f21*/
LABEL_13:
      v4 = (CCINIClass *)((char *)v4 + 1); /*0x6e5fc2*/
      if ( (int)v4 >= (int)v3 ) /*0x6e5fc5*/
        return result; /*0x6e5fc5*/
    }
    if ( !_strcmpi((char *)&stru_817460.sectionHead[1], StringByIndex->__pad_0) /*0x6e5f3f*/
      || !_strcmpi(g_Str_none, StringByIndex->__pad_0) )
    {
      goto LABEL_11; /*0x6e5f3f*/
    }
    v6 = 0; /*0x6e5f50*/
    if ( *(int *)&MEMORY[0xB077F8].__pad_579C[6140] > 0 ) /*0x6e5f54*/
    {
      while ( _strcmpi( /*0x6e5f6e*/
                (char *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6128] + 4 * v6) + 36),
                StringByIndex->__pad_0) )
      {
        if ( ++v6 >= *(int *)&MEMORY[0xB077F8].__pad_579C[6140] ) /*0x6e5f78*/
          goto LABEL_8; /*0x6e5f78*/
      }
      v8 = *(AbstractTypeClass **)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6128] + 4 * v6); /*0x6e5f9c*/
      goto LABEL_12; /*0x6e5f9f*/
    }
LABEL_8:
    v7 = (char *)__2_YAPAXI_Z(0xA4u); /*0x6e5f7f*/
    if ( v7 ) /*0x6e5f89*/
      v8 = (AbstractTypeClass *)TagTypeClass::Construct(v7, StringByIndex); /*0x6e5f93*/
    else
LABEL_11:
      v8 = 0; /*0x6e5fa1*/
LABEL_12:
    v9 = sub_412610(StringByIndex->__pad_0); /*0x6e5fa3*/
    SwizzleManagerClass::Here_I_Am((int)&MEMORY[0xB077F8].__pad_14B0[13416], v9, (int)v8); /*0x6e5fb1*/
    result = (ObjectClass *)(*(int (__thiscall **)(AbstractTypeClass *, char *))(*(_DWORD *)v8->__pad_0 + 100))( /*0x6e5fbb*/
                              v8,
                              this);
    v3 = v10; /*0x6e5fbe*/
    goto LABEL_13; /*0x6e5fbe*/
  }
  return result; /*0x6e5fcc*/
}


// ==== 0x006E5FE0  ObjectClass::SaveTriggerTagsToINI  this=ObjectClass  sig=csp ====
AbstractTypeClass *__thiscall SaveTriggerTagsToINI(char *this)
{
  ObjectClass *KeyCount; // ebx
  CCINIClass *i; // edi
  unsigned __int8 *StringByIndex; // eax
  AbstractTypeClass *result; // eax
  int j; // edi
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF

  KeyCount = (ObjectClass *)INIClass::GetKeyCount(this, (INIClass *)&stru_830620.__pad_579C[52864]); /*0x6e5ff3*/
  for ( i = 0; (int)i < (int)KeyCount; i = (CCINIClass *)((char *)i + 1) ) /*0x6e5ff9*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this, (CCINIClass *)&stru_830620.__pad_579C[52864], i); /*0x6e6005*/
    INIClass::GetString( /*0x6e601f*/
      (unsigned __int8 ***)this,
      (INIClass *)&stru_830620.__pad_579C[52864],
      StringByIndex,
      (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
      (INIClass *)Destination,
      32);
    INIClass::ClearSection((int)this, (INIClass *)Destination, 0); /*0x6e602d*/
  }
  INIClass::ClearSection((int)this, (INIClass *)&stru_830620.__pad_579C[52864], 0); /*0x6e6042*/
  result = *(AbstractTypeClass **)&MEMORY[0xB077F8].__pad_579C[6140]; /*0x6e6047*/
  for ( j = 0; j < *(int *)&MEMORY[0xB077F8].__pad_579C[6140]; ++j ) /*0x6e6050*/
  {
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6128] + 4 * j) + 104))( /*0x6e605d*/
      *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6128] + 4 * j),
      this);
    result = *(AbstractTypeClass **)&MEMORY[0xB077F8].__pad_579C[6140]; /*0x6e6060*/
  }
  return result; /*0x6e606a*/
}


// ==== 0x006E6080  TagTypeClass::GetAction  this=TagTypeClass  sig=csp ====
char __thiscall TagTypeClass::_vt25(int this, unsigned __int8 ***a2)
{
  char *v3; // eax
  char *v4; // eax
  char Destination[48]; // [esp+8h] [ebp-B4h] BYREF
  char v7; // [esp+38h] [ebp-84h]
  char String[128]; // [esp+3Ch] [ebp-80h] BYREF

  INIClass::ResetSection(a2); /*0x6e6093*/
  if ( !INIClass::GetString( /*0x6e60b4*/
          a2,
          (unsigned __int8 *)MEMORY[0x842C3C],
          (unsigned __int8 *)(this + 36),
          &MEMORY[0x889F64],
          String,
          128) )
    return 0; /*0x6e6151*/
  strtok(String, MEMORY[0x817F70]); /*0x6e60cb*/
  *(_DWORD *)(this + 156) = atoi(String); /*0x6e60e1*/
  v3 = strtok(0, MEMORY[0x817F70]); /*0x6e60e7*/
  if ( v3 ) /*0x6e60f1*/
  {
    strncpy(Destination, v3, 0x30u); /*0x6e6101*/
    v7 = 0; /*0x6e6109*/
  }
  else
  {
    Destination[0] = 0; /*0x6e60f3*/
  }
  if ( Destination != (char *)(this + 100) ) /*0x6e6118*/
  {
    qmemcpy((void *)(this + 100), Destination, 0x30u); /*0x6e6123*/
    *(_BYTE *)(this + 148) = v7; /*0x6e6125*/
  }
  v4 = strtok(0, MEMORY[0x817F70]); /*0x6e612d*/
  *(_DWORD *)(this + 160) = TagTypeClass::FindOrCreateTriggerType(v4); /*0x6e613d*/
  return 1; /*0x6e6143*/
}


// ==== 0x006E6160  TagTypeClass::GetParameter  this=TagTypeClass  sig=csp ====
char __thiscall TagTypeClass::_vt26(int this, char *a2)
{
  int v3; // eax
  CHAR Source[128]; // [esp+4h] [ebp-80h] BYREF

  v3 = *(_DWORD *)(this + 160); /*0x6e6169*/
  if ( v3 ) /*0x6e6171*/
    wsprintfA(Source, MEMORY[0x842CCC], *(_DWORD *)(this + 156), (const char *)(this + 100), (const char *)(v3 + 36)); /*0x6e61b4*/
  else
    wsprintfA(Source, MEMORY[0x842CD8], (const char *)(this + 100)); /*0x6e6181*/
  INIClass::SetString(a2, (unsigned __int8 *)MEMORY[0x842C3C], (char *)(this + 36), Source); /*0x6e6199*/
  return 1; /*0x6e61db*/
}


// ==== 0x006E61F0  Debug::AccumFlags  this=TagTypeClass  sig=csp ====
int __thiscall Debug_AccumFlags(_DWORD *this)
{
  int v1; // esi
  int i; // edi
  int v3; // eax

  v1 = this->u32_A0; /*0x6e61f1*/
  for ( i = 0; v1; i |= v3 ) /*0x6e61fc*/
  {
    v3 = TriggerTypeClass::GetFlags(v1); /*0x6e6200*/
    v1 = *(_DWORD *)(v1 + 168); /*0x6e6205*/
  }
  return i; /*0x6e6213*/
}


// ==== 0x006E6220  TagClass::HasValidHouse  this=TagTypeClass  sig=csp ====
char __thiscall TagClass::HasValidHouse(_DWORD *this)
{
  _DWORD *v1; // esi

  v1 = (_DWORD *)this->u32_A0; /*0x6e6221*/
  if ( !v1 ) /*0x6e6229*/
    return 0; /*0x6e6240*/
  while ( !HouseClass::FindType15(v1) ) /*0x6e6234*/
  {
    v1 = (_DWORD *)v1[42]; /*0x6e6236*/
    if ( !v1 ) /*0x6e623e*/
      return 0; /*0x6e623e*/
  }
  return 1; /*0x6e6242*/
}


// ==== 0x006E6250  TagTypeClass::HasCrossesHorizontalLineEvent  this=TagTypeClass  sig=csp ====
char __thiscall TagTypeClass::HasCrossesHorizontalLineEvent(_DWORD *this)
{
  _DWORD *v1; // esi

  v1 = (_DWORD *)this->u32_A0; /*0x6e6251*/
  if ( !v1 ) /*0x6e6259*/
    return 0; /*0x6e6270*/
  while ( !HouseClass::HasType25Building(v1) ) /*0x6e6264*/
  {
    v1 = (_DWORD *)v1[42]; /*0x6e6266*/
    if ( !v1 ) /*0x6e626e*/
      return 0; /*0x6e626e*/
  }
  return 1; /*0x6e6272*/
}


// ==== 0x006E6280  TagTypeClass::HasCrossesVerticalLineEvent  this=TagTypeClass  sig=csp ====
char __thiscall TagTypeClass::HasCrossesVerticalLineEvent(_DWORD *this)
{
  _DWORD *v1; // esi

  v1 = (_DWORD *)this->u32_A0; /*0x6e6281*/
  if ( !v1 ) /*0x6e6289*/
    return 0; /*0x6e62a0*/
  while ( !HouseClass::HasType26Building(v1) ) /*0x6e6294*/
  {
    v1 = (_DWORD *)v1[42]; /*0x6e6296*/
    if ( !v1 ) /*0x6e629e*/
      return 0; /*0x6e629e*/
  }
  return 1; /*0x6e62a2*/
}


// ==== 0x006E62B0  TagTypeClass::HasZoneEntryByEvent  this=TagTypeClass  sig=csp ====
char __thiscall TagTypeClass::HasZoneEntryByEvent(_DWORD *this)
{
  int v1; // esi

  v1 = this->u32_A0; /*0x6e62b1*/
  if ( !v1 ) /*0x6e62b9*/
    return 0; /*0x6e62d0*/
  while ( !HouseClass::FindType24((std::codecvt_base **)v1) ) /*0x6e62c4*/
  {
    v1 = *(_DWORD *)(v1 + 168); /*0x6e62c6*/
    if ( !v1 ) /*0x6e62ce*/
      return 0; /*0x6e62ce*/
  }
  return 1; /*0x6e62d2*/
}


// ==== 0x006E6310  TagTypeClass::FindOrCreate  this=Coord  sig=csp ====
char *__thiscall TagTypeClass::FindOrCreate(ObjectClass *Source)
{
  int v2; // esi
  char *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e632c*/
    return 0; /*0x6e638f*/
  v2 = 0; /*0x6e633d*/
  if ( *(int *)&stru_B05488.__pad_579C[15212] <= 0 ) /*0x6e6341*/
  {
LABEL_6:
    v3 = (char *)__2_YAPAXI_Z(0xA4u); /*0x6e6366*/
    if ( v3 ) /*0x6e6375*/
      return TagTypeClass::Construct(v3, Source); /*0x6e6381*/
    return 0; /*0x6e6375*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15200] + 4 * v2) + 36), Source) ) /*0x6e635a*/
  {
    if ( ++v2 >= *(int *)&stru_B05488.__pad_579C[15212] ) /*0x6e6364*/
      goto LABEL_6; /*0x6e6364*/
  }
  return *(char **)(*(_DWORD *)&stru_B05488.__pad_579C[15200] + 4 * v2); /*0x6e637f*/
}


// ==== 0x006E63A0  TagTypeClass::GetClassIdentifier  this=TagTypeClass  sig=csp ====
int __stdcall TagTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6e63a6*/
    return -2147467261; /*0x6e63a8*/
  *a2 = 1425466419; /*0x6e63b6*/
  a2[1] = 298977773; /*0x6e63be*/
  a2[2] = 1610655148; /*0x6e63c7*/
  a2[3] = -1252326136; /*0x6e63d0*/
  return 0; /*0x6e63ad*/
}


// ==== 0x006E63E0  TagTypeClass::PowerDrainUpdate  this=TagTypeClass  sig=csp ====
int __thiscall TagTypeClass::_vt13(int this, int *a2)
{
  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6e63e9*/
  return Power::TimerProcess(*(_DWORD *)(this + 156)); /*0x6e63fc*/
}


// ==== 0x006E6410  TagTypeClass::LoadTypeData  this=TagTypeClass  sig=csp ====
int __stdcall TagTypeClass::LoadTypeData(AbstractTypeClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1); /*0x6e641b*/
  if ( result >= 0 ) /*0x6e6422*/
  {
    if ( aP0 ) /*0x6e6426*/
    {
      AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1); /*0x6e642f*/
      *(_DWORD *)aP0->__pad_0 = &TagTypeClass::`vftable'; /*0x6e6434*/
      *(_DWORD *)&aP0->__pad_0[4] = &TagTypeClass::`vftable'; /*0x6e643a*/
      *(_DWORD *)&aP0->__pad_0[8] = &TagTypeClass::`vftable'; /*0x6e6441*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_TagTypeClass; /*0x6e6448*/
    }
    ObjectPtr::RegisterForTracking( /*0x6e645b*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[8]);
    return 0; /*0x6e6460*/
  }
  return result; /*0x6e6462*/
}


// ==== 0x006E6470  TagTypeClass::SaveToINI  this=TagTypeClass  sig=csp ====
int __stdcall TagTypeClass::SaveToINI(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6e647f*/
  if ( result >= 0 ) /*0x6e6486*/
    return 0; /*0x6e6488*/
  return result; /*0x6e648a*/
}


// ==== 0x006E6490  TagTypeClass::GetTypeIdentifier  this=TagTypeClass  sig=csp ====
int TagTypeClass::_vt11()
{
  return 45; /*0x6e6495*/
}


// ==== 0x006E64A0  TagTypeClass::GetObjectSize  this=TagTypeClass  sig=csp ====
int TagTypeClass::_vt12()
{
  return 164; /*0x6e64a5*/
}


// ==== 0x006E64B0  TagTypeClass::GetAuxField  this=TagTypeClass  sig=csp ====
int __thiscall TagTypeClass::_vt16(_DWORD *this)
{
  return this->q098; /*0x6e64b6*/
}


// ==== 0x006E64C0  TagTypeClass::ddtor  this=TagTypeClass  sig=csp ====
TagTypeClass *__thiscall TagTypeClass::ddtor(void *Block, char a2)
{
  TagTypeClass::CleanupMembers((int)Block); /*0x6e64c3*/
  if ( (a2 & 1) != 0 ) /*0x6e64cd*/
    __3_YAXPAX_Z(Block); /*0x6e64d0*/
  return (TagTypeClass *)Block; /*0x6e64da*/
}


// ==== 0x006E64E0  _DynamicVectorClass_PAVTagTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TagTypeClass::sub_6E64E0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x6e64e6*/
  *(_DWORD *)(this + 16) = 0; /*0x6e64e9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6e64f0*/
  {
    __3_YAXPAX_Z(v2); /*0x6e64f6*/
    *(_DWORD *)(this + 4) = 0; /*0x6e64fe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6e6501*/
  *(_DWORD *)(this + 8) = 0; /*0x6e6504*/
}


// ==== 0x006E6510  _DynamicVectorClass_PAVTagTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TagTypeClass::sub_6E6510(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6e6510*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6e6525*/
  else
    return 0; /*0x6e6517*/
}


// ==== 0x006E6530  _VectorClass_PAVTagTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TagTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x6e653a*/
}


// ==== 0x006E6540  _VectorClass_PAVTagTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TagTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x6e6542*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x6e654d*/
  {
    v3 = 0; /*0x6e654f*/
    if ( v2 <= 0 ) /*0x6e6553*/
      return 1; /*0x6e6573*/
    v4 = (_DWORD *)this->Items; /*0x6e6555*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6e655b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6e6564*/
    {
      ++v3; /*0x6e6566*/
      ++v4; /*0x6e6567*/
      if ( v3 >= v2 ) /*0x6e656c*/
        return 1; /*0x6e656c*/
    }
  }
  return 0; /*0x6e656e*/
}


// ==== 0x006E6580  _VectorClass_PAVTagTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TagTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x6e658c*/
  {
    this->IsInitialized = 0; /*0x6e6596*/
    if ( a3 ) /*0x6e659c*/
      v4 = a3; /*0x6e65b2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6e65ae*/
    this->IsInitialized = 1; /*0x6e65b6*/
    if ( v4 ) /*0x6e65ba*/
    {
      if ( this->Items ) /*0x6e65c5*/
      {
        v6 = this->Capacity; /*0x6e65cc*/
        if ( a2 < v6 ) /*0x6e65d1*/
          v6 = a2; /*0x6e65d3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6e65d9*/
          ++i; /*0x6e65de*/
        if ( this->IsAllocated ) /*0x6e65eb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x6e65f6*/
          this->Items = 0; /*0x6e65fe*/
        }
      }
      this->Items = v4; /*0x6e6607*/
      this->Capacity = a2; /*0x6e660f*/
      this->IsAllocated = a3 == 0; /*0x6e6612*/
      return 1; /*0x6e6618*/
    }
    else
    {
      return 0; /*0x6e65bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6e6622*/
    return 1; /*0x6e6628*/
  }
}


// ==== 0x006E6630  _VectorClass_PAVTagTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TagTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x6e663d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x6e6643*/
    *(_DWORD *)(this + 4) = 0; /*0x6e664b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6e664e*/
  *(_DWORD *)(this + 8) = 0; /*0x6e6651*/
}


// ==== 0x006E6660  _VectorClass_PAVTagTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TagTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x6e6660*/
    return 0; /*0x6e6668*/
  v3 = *(_DWORD *)(this + 8); /*0x6e666e*/
  result = 0; /*0x6e6671*/
  if ( v3 <= 0 ) /*0x6e6675*/
    return -1; /*0x6e668c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x6e667b*/
  {
    if ( ++result >= v3 ) /*0x6e668a*/
      return -1; /*0x6e668a*/
  }
  return result; /*0x6e666a*/
}


// ==== 0x006E66A0  _VectorClass_PAVTagTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TagTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6e66a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6e66b5*/
  else
    return 0; /*0x6e66a7*/
}


// ==== 0x006E66C0  _DynamicVectorClass_PAVTagTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TagTypeClass::sub_6E66C0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6e66cc*/
  {
    this->IsInitialized = 0; /*0x6e66d2*/
    if ( a3 ) /*0x6e66d8*/
      v4 = a3; /*0x6e66ee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6e66ea*/
    this->IsInitialized = 1; /*0x6e66f2*/
    if ( !v4 ) /*0x6e66f6*/
      return 0; /*0x6e676a*/
    if ( this->Items ) /*0x6e66f8*/
    {
      v5 = this->q008; /*0x6e66ff*/
      if ( a2 < v5 ) /*0x6e6704*/
        v5 = a2; /*0x6e6706*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6e670c*/
        ++i; /*0x6e6711*/
      if ( this->IsAllocated ) /*0x6e671e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x6e6729*/
        this->Items = 0; /*0x6e6731*/
      }
    }
    this->Items = v4; /*0x6e673a*/
    this->q008 = a2; /*0x6e6742*/
    this->IsAllocated = a3 == 0; /*0x6e6745*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6e674e*/
  }
  v7 = this->q008; /*0x6e6751*/
  if ( v7 < this->Items ) /*0x6e6759*/
    this->Items = v7; /*0x6e675b*/
  return 1; /*0x6e675e*/
}


// ==== 0x006E6770  _DynamicVectorClass_PAVTagTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TagTypeClass::sub_6E6770(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x6e6770*/
  result = 0; /*0x6e6773*/
  if ( v2 <= 0 ) /*0x6e6778*/
    return -1; /*0x6e678f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x6e677e*/
  {
    if ( ++result >= v2 ) /*0x6e678d*/
      return -1; /*0x6e678d*/
  }
  return result; /*0x6e6792*/
}


// ==== 0x006E67A0  _VectorClass_PAVTagTypeClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_TagTypeClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6e67a3*/
  *Block = &vt_VectorClass_TagTypeClass; /*0x6e67a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6e67b0*/
  {
    __3_YAXPAX_Z(v3); /*0x6e67b8*/
    *(Block + 1) = 0; /*0x6e67c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6e67cb*/
  *(Block + 2) = 0; /*0x6e67d1*/
  if ( (a2 & 1) != 0 ) /*0x6e67d8*/
    __3_YAXPAX_Z(Block); /*0x6e67db*/
  return (VectorClass *)Block; /*0x6e67e5*/
}


// ==== 0x006E67F0  _DynamicVectorClass_PAVTagTypeClass::Constructor_VectorClass_TagTypeClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_TagTypeClass::Constructor_VectorClass_TagTypeClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6e67f3*/
  *Block = &vt_VectorClass_TagTypeClass; /*0x6e67f6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6e6800*/
  {
    __3_YAXPAX_Z(v3); /*0x6e6808*/
    *(Block + 1) = 0; /*0x6e6810*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6e681b*/
  *(Block + 2) = 0; /*0x6e6821*/
  if ( (a2 & 1) != 0 ) /*0x6e6828*/
    __3_YAXPAX_Z(Block); /*0x6e682b*/
  return (DynamicVector *)Block; /*0x6e6835*/
}


// ==== 0x006E6840  sub_6E6840  this=-  sig=ida-proto ====
void sub_6E6840()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e684c*/
  MEMORY[0xB0E838] = Math::Sqrt(v0 + v0); /*0x6e685e*/
}


// ==== 0x006E6870  sub_6E6870  this=-  sig=ida-proto ====
void sub_6E6870()
{
  MEMORY[0xB0E8A0] = MEMORY[0xB0E838] / 60.0; /*0x6e687c*/
}


// ==== 0x006E6890  sub_6E6890  this=-  sig=ida-proto ====
void sub_6E6890()
{
  MEMORY[0xB0E888] = 1.0 / MEMORY[0xB0E8A0]; /*0x6e689c*/
}


// ==== 0x006E68B0  sub_6E68B0  this=-  sig=ida-proto ====
void sub_6E68B0()
{
  MEMORY[0xB0E880] = 0.0174532925199433 * 45.0; /*0x6e68bc*/
}


// ==== 0x006E68D0  sub_6E68D0  this=-  sig=ida-proto ====
void sub_6E68D0()
{
  MEMORY[0xB0E858] = 0.0174532925199433 * 60.0; /*0x6e68dc*/
}


// ==== 0x006E68F0  sub_6E68F0  this=-  sig=ida-proto ====
void sub_6E68F0()
{
  MEMORY[0xB0E818] = 0.0174532925199433 * 90.0; /*0x6e68fc*/
}


// ==== 0x006E6910  sub_6E6910  this=-  sig=ida-proto ====
__int64 sub_6E6910()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0E818] - MEMORY[0xB0E858]); /*0x6e6922*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0E838] * 0.5); /*0x6e6936*/
  MEMORY[0xB0E8A8] = result; /*0x6e693b*/
  return result; /*0x6e6940*/
}


// ==== 0x006E6950  sub_6E6950  this=-  sig=ida-proto ====
void sub_6E6950()
{
  MEMORY[0xB0E860] = Math::ArcTan((double)MEMORY[0xB0E8A8] * 0.00390625); /*0x6e6967*/
}


// ==== 0x006E6980  sub_6E6980  this=-  sig=ida-proto ====
void sub_6E6980()
{
  MEMORY[0xB0E878] = Math::ArcTan((double)(2 * MEMORY[0xB0E8A8]) / MEMORY[0xB0E838]); /*0x6e69a2*/
}


// ==== 0x006E69B0  sub_6E69B0  this=-  sig=ida-proto ====
__int64 sub_6E69B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0E8A8]) + 0.5); /*0x6e69cb*/
  MEMORY[0xB0E89C] = result; /*0x6e69d0*/
  return result; /*0x6e69d6*/
}


// ==== 0x006E69E0  sub_6E69E0  this=-  sig=ida-proto ====
int sub_6E69E0()
{
  MEMORY[0xB0E830] = 0; /*0x6e69e2*/
  MEMORY[0xB0E832] = 0; /*0x6e69e8*/
  return 0; /*0x6e69ee*/
}


// ==== 0x006E69F0  sub_6E69F0  this=-  sig=ida-proto ====
int sub_6E69F0()
{
  MEMORY[0xB0E868] = 0; /*0x6e69f2*/
  MEMORY[0xB0E86C] = 0; /*0x6e69f7*/
  MEMORY[0xB0E870] = 0; /*0x6e69fc*/
  return 0; /*0x6e6a01*/
}


// ==== 0x006E6A10  sub_6E6A10  this=-  sig=ida-proto ====
int sub_6E6A10()
{
  MEMORY[0xB0E898] = 0; /*0x6e6a15*/
  MEMORY[0xB0E890] = 128; /*0x6e6a1f*/
  MEMORY[0xB0E894] = 128; /*0x6e6a24*/
  return 128; /*0x6e6a29*/
}


// ==== 0x006E6A30  sub_6E6A30  this=-  sig=ida-proto ====
int sub_6E6A30()
{
  MEMORY[0xB0E820] = 0; /*0x6e6a32*/
  MEMORY[0xB0E824] = 0; /*0x6e6a37*/
  MEMORY[0xB0E828] = 0; /*0x6e6a3c*/
  MEMORY[0xB0E82C] = 0; /*0x6e6a41*/
  return 0; /*0x6e6a46*/
}


// ==== 0x006E6A50  sub_6E6A50  this=-  sig=ida-proto ====
int sub_6E6A50()
{
  MEMORY[0xB0E840] = 0; /*0x6e6a57*/
  MEMORY[0xB0E844] = 0; /*0x6e6a5c*/
  MEMORY[0xB0E848] = 0; /*0x6e6a61*/
  MEMORY[0xB0E84C] = 0; /*0x6e6a66*/
  MEMORY[0xB0E850] = 0; /*0x6e6a6b*/
  return atexit(sub_6E6A80); /*0x6e6a76*/
}


// ==== 0x006E6A80  sub_6E6A80  this=-  sig=ida-proto ====
void __cdecl sub_6E6A80()
{
  __3_YAXPAX_Z(MEMORY[0xB0E840]); /*0x6e6a86*/
  MEMORY[0xB0E840] = 0; /*0x6e6a90*/
  MEMORY[0xB0E844] = 0; /*0x6e6a95*/
  MEMORY[0xB0E848] = 0; /*0x6e6a9a*/
  MEMORY[0xB0E84C] = 0; /*0x6e6a9f*/
  MEMORY[0xB0E850] = 0; /*0x6e6aa4*/
}


// ==== 0x006E6AB0  ScriptAction::GetWaypointCoords  this=IUnknown  sig=csp ====
_BYTE *__thiscall ScriptAction::GetWaypointCoords(_BYTE *this, IUnknown *aP1)
{
  if ( aP1 ) /*0x6e6aba*/
  {
    if ( (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 44))(aP1) == 11 ) /*0x6e6ac6*/
    {
      this->ptr_4 = 11; /*0x6e6ac8*/
      *(_DWORD *)this = (__int16)aP1->field_24 + 1000 * (__int16)HIWORD(aP1->field_24); /*0x6e6ae7*/
    }
    else
    {
      this->ptr_4 = 52; /*0x6e6af2*/
      *(_DWORD *)this = (*(int (__stdcall **)(int *))(aP1->field_4 + 16))(&aP1->field_4); /*0x6e6afc*/
    }
    return this; /*0x6e6ae9*/
  }
  else
  {
    this->ptr_4 = 0; /*0x6e6b05*/
    *(_DWORD *)this = 0; /*0x6e6b09*/
    return this; /*0x6e6b0f*/
  }
}


// ==== 0x006E6B70  ObjectClass::method_6E6B70  this=ObjectClass  sig=csp ====
_BYTE *__thiscall sub_6E6B70(_BYTE *this, _DWORD *a2)
{
  this->vtable2 = 11; /*0x6e6b75*/
  *(_DWORD *)this = *a2 / 256 + 1000 * (a2[1] / 256); /*0x6e6ba4*/
  return this; /*0x6e6ba3*/
}


// ==== 0x006E6E20  BuildingLoadQueue::GetNext  this=BuildingLoadQueue  sig=csp ====
void *__thiscall BuildingLoadQueue_Get(_BYTE *this)
{
  char v2; // al
  int v3; // eax
  void ***v4; // eax
  int v6; // ecx
  __int16 v7[4]; // [esp+4h] [ebp-8h] BYREF

  v2 = this->q004; /*0x6e6e26*/
  if ( v2 == 52 ) /*0x6e6e2b*/
  {
    if ( MEMORY[0xB0E844] ) /*0x6e6e39*/
    {
      v3 = MEMORY[0xB0E850]; /*0x6e6e3b*/
      if ( MEMORY[0xB0E850] && *(_DWORD *)MEMORY[0xB0E850] == *(_DWORD *)this ) /*0x6e6e4c*/
        goto LABEL_10; /*0x6e6e4c*/
      if ( MEMORY[0xB0E844] ) /*0x6e6e50*/
      {
        if ( !MEMORY[0xB0E84C] ) /*0x6e6e59*/
        {
          qsort(MEMORY[0xB0E840], MEMORY[0xB0E844], 8u, CompareFunction); /*0x6e6e6a*/
          MEMORY[0xB0E850] = 0; /*0x6e6e78*/
          MEMORY[0xB0E84C] = 1; /*0x6e6e82*/
        }
        *(_DWORD *)v7 = *(_DWORD *)this; /*0x6e6e96*/
        v3 = BinaryArraySearch(v7); /*0x6e6e9a*/
        if ( v3 ) /*0x6e6ea1*/
        {
          MEMORY[0xB0E850] = v3; /*0x6e6ea3*/
LABEL_10:
          v4 = (void ***)(v3 + 4); /*0x6e6ea8*/
          return (void *)__RTDynamicCast( /*0x6e6ecf*/
                           *v4,
                           0,
                           &AbstractClass `RTTI Type Descriptor',
                           &AbstractClass `RTTI Type Descriptor',
                           0);
        }
      }
    }
    v4 = (void ***)&unk_B78828; /*0x6e6ead*/
    return (void *)__RTDynamicCast( /*0x6e6ead*/
                     *v4,
                     0,
                     &AbstractClass `RTTI Type Descriptor',
                     &AbstractClass `RTTI Type Descriptor',
                     0);
  }
  if ( v2 != 11 ) /*0x6e6ed2*/
    return 0; /*0x6e6f0f*/
  v6 = *(_DWORD *)this; /*0x6e6ed4*/
  v7[0] = v6 % 1000; /*0x6e6ee5*/
  v7[1] = v6 / 1000; /*0x6e6f00*/
  return CellCoord::To_CellObj(&MEMORY[0x87F7E8], v7); /*0x6e6ecb*/
}


// ==== 0x006E6F20  BuildingLoadQueue::Find  this=BuildingLoadQueue  sig=csp ====
void *__thiscall BuildingLoadQueue_Find(_BYTE *this)
{
  int v2; // ecx
  int v3; // edx
  int v4; // ebx
  _DWORD *v5; // edi
  int v6; // esi

  if ( this->q004 != 52 ) /*0x6e6f27*/
    return 0; /*0x6e6fe0*/
  v2 = MEMORY[0xB0E844]; /*0x6e6f2d*/
  if ( !MEMORY[0xB0E844] ) /*0x6e6f37*/
    return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6f37*/
  v3 = MEMORY[0xB0E850]; /*0x6e6f39*/
  if ( MEMORY[0xB0E850] && *(_DWORD *)MEMORY[0xB0E850] == *(_DWORD *)this ) /*0x6e6f49*/
    return AbstractClass::IsTechnoType(*(void **)(v3 + 4)); /*0x6e6fdf*/
  if ( !MEMORY[0xB0E84C] ) /*0x6e6f56*/
  {
    qsort(MEMORY[0xB0E840], MEMORY[0xB0E844], 8u, CompareFunction); /*0x6e6f67*/
    v2 = MEMORY[0xB0E844]; /*0x6e6f6c*/
    MEMORY[0xB0E850] = 0; /*0x6e6f75*/
    MEMORY[0xB0E84C] = 1; /*0x6e6f7f*/
  }
  v4 = *(_DWORD *)this; /*0x6e6f86*/
  v5 = MEMORY[0xB0E840]; /*0x6e6f88*/
  if ( v2 <= 0 ) /*0x6e6f90*/
    return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6f90*/
  while ( 1 ) /*0x6e6f99*/
  {
    v6 = v5[2 * (v2 / 2)]; /*0x6e6f99*/
    v3 = (int)&v5[2 * (v2 / 2)]; /*0x6e6f9c*/
    if ( v6 <= v4 ) /*0x6e6fa1*/
      break; /*0x6e6fa1*/
    v2 /= 2; /*0x6e6fa3*/
LABEL_12:
    if ( v2 <= 0 ) /*0x6e6fb5*/
      return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6fb5*/
  }
  if ( v6 != v4 ) /*0x6e6fa7*/
  {
    v5 = (_DWORD *)(v3 + 8); /*0x6e6fa9*/
    v2 += -1 - v2 / 2; /*0x6e6fb1*/
    goto LABEL_12; /*0x6e6fb1*/
  }
  if ( v3 ) /*0x6e6fc9*/
  {
    MEMORY[0xB0E850] = (int)&v5[2 * (v2 / 2)]; /*0x6e6fcb*/
    return AbstractClass::IsTechnoType(*(void **)(v3 + 4)); /*0x6e6fcb*/
  }
  return AbstractClass::IsTechnoType(unk_B78828); /*0x6e6fc5*/
}


// ==== 0x006E6FF0  BuildingLoadQueue::FindObject  this=BuildingLoadQueue  sig=csp ====
int __thiscall BuildingLoadQueue_FindObject(_BYTE *this)
{
  int v2; // ecx
  int v3; // edx
  int v4; // ebx
  _DWORD *v5; // edi
  int v6; // esi
  void ***v7; // eax

  if ( this->q004 != 52 ) /*0x6e6ff7*/
    return 0; /*0x6e70b8*/
  v2 = MEMORY[0xB0E844]; /*0x6e6ffd*/
  if ( !MEMORY[0xB0E844] ) /*0x6e7007*/
    goto LABEL_13; /*0x6e7007*/
  v3 = MEMORY[0xB0E850]; /*0x6e7009*/
  if ( MEMORY[0xB0E850] && *(_DWORD *)MEMORY[0xB0E850] == *(_DWORD *)this ) /*0x6e7019*/
  {
LABEL_17:
    v7 = (void ***)(v3 + 4); /*0x6e70b3*/
    return __RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &ObjectClass `RTTI Type Descriptor', 0); /*0x6e70b6*/
  }
  if ( !MEMORY[0xB0E84C] ) /*0x6e7026*/
  {
    qsort(MEMORY[0xB0E840], MEMORY[0xB0E844], 8u, CompareFunction); /*0x6e7037*/
    v2 = MEMORY[0xB0E844]; /*0x6e703c*/
    MEMORY[0xB0E850] = 0; /*0x6e7045*/
    MEMORY[0xB0E84C] = 1; /*0x6e704f*/
  }
  v4 = *(_DWORD *)this; /*0x6e7056*/
  v5 = MEMORY[0xB0E840]; /*0x6e7058*/
  if ( v2 <= 0 ) /*0x6e7060*/
    goto LABEL_13; /*0x6e7060*/
  while ( 1 ) /*0x6e7069*/
  {
    v6 = v5[2 * (v2 / 2)]; /*0x6e7069*/
    v3 = (int)&v5[2 * (v2 / 2)]; /*0x6e706c*/
    if ( v6 <= v4 ) /*0x6e7071*/
      break; /*0x6e7071*/
    v2 /= 2; /*0x6e7073*/
LABEL_12:
    if ( v2 <= 0 ) /*0x6e7085*/
      goto LABEL_13; /*0x6e7085*/
  }
  if ( v6 != v4 ) /*0x6e7077*/
  {
    v5 = (_DWORD *)(v3 + 8); /*0x6e7079*/
    v2 += -1 - v2 / 2; /*0x6e7081*/
    goto LABEL_12; /*0x6e7081*/
  }
  if ( v3 ) /*0x6e70ab*/
  {
    MEMORY[0xB0E850] = (int)&v5[2 * (v2 / 2)]; /*0x6e70ad*/
    goto LABEL_17; /*0x6e70ad*/
  }
LABEL_13:
  v7 = (void ***)&unk_B78828; /*0x6e7087*/
  return __RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &ObjectClass `RTTI Type Descriptor', 0); /*0x6e70a7*/
}


// ==== 0x006E7330  ObjectClass::System_Read_6E7330  this=ObjectClass  sig=csp ====
int __thiscall sub_6E7330(_BYTE *this)
{
  int v2; // ecx
  int v3; // edx
  int v4; // ebx
  #374 *v5; // edi
  int v6; // esi
  void ***v7; // eax

  if ( this->vtable2 != 52 ) /*0x6e7337*/
    return 0; /*0x6e73f8*/
  v2 = MEMORY[0xB0E844]; /*0x6e733d*/
  if ( !MEMORY[0xB0E844] ) /*0x6e7347*/
    goto LABEL_13; /*0x6e7347*/
  v3 = MEMORY[0xB0E850]; /*0x6e7349*/
  if ( MEMORY[0xB0E850] && *(_DWORD *)MEMORY[0xB0E850] == *(_DWORD *)this ) /*0x6e7359*/
  {
LABEL_17:
    v7 = (void ***)(v3 + 4); /*0x6e73f3*/
    return __RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &MEMORY[0x817F98], 0); /*0x6e73f6*/
  }
  if ( !MEMORY[0xB0E84C] ) /*0x6e7366*/
  {
    qsort(MEMORY[0xB0E840], MEMORY[0xB0E844], 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction); /*0x6e7377*/
    v2 = MEMORY[0xB0E844]; /*0x6e737c*/
    MEMORY[0xB0E850] = 0; /*0x6e7385*/
    MEMORY[0xB0E84C] = 1; /*0x6e738f*/
  }
  v4 = *(_DWORD *)this; /*0x6e7396*/
  v5 = MEMORY[0xB0E840]; /*0x6e7398*/
  if ( v2 <= 0 ) /*0x6e73a0*/
    goto LABEL_13; /*0x6e73a0*/
  while ( 1 ) /*0x6e73a9*/
  {
    v6 = *((_DWORD *)v5 + 2 * (v2 / 2)); /*0x6e73a9*/
    v3 = (int)v5 + 8 * (v2 / 2); /*0x6e73ac*/
    if ( v6 <= v4 ) /*0x6e73b1*/
      break; /*0x6e73b1*/
    v2 /= 2; /*0x6e73b3*/
LABEL_12:
    if ( v2 <= 0 ) /*0x6e73c5*/
      goto LABEL_13; /*0x6e73c5*/
  }
  if ( v6 != v4 ) /*0x6e73b7*/
  {
    v5 = (#374 *)(v3 + 8); /*0x6e73b9*/
    v2 += -1 - v2 / 2; /*0x6e73c1*/
    goto LABEL_12; /*0x6e73c1*/
  }
  if ( v3 ) /*0x6e73eb*/
  {
    MEMORY[0xB0E850] = (int)v5 + 8 * (v2 / 2); /*0x6e73ed*/
    goto LABEL_17; /*0x6e73ed*/
  }
LABEL_13:
  v7 = (void ***)&unk_B78828; /*0x6e73c7*/
  return __RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &MEMORY[0x817F98], 0); /*0x6e73e7*/
}


// ==== 0x006E7A80  BuildingLoadQueue::FindBuilding  this=BuildingLoadQueue  sig=csp ====
int __thiscall BuildingLoadQueue_FindBuilding(_BYTE *this)
{
  int v2; // ecx
  int v3; // edx
  int v4; // ebx
  _DWORD *v5; // edi
  int v6; // esi
  void ***v7; // eax

  if ( this->q004 != 52 ) /*0x6e7a87*/
    return 0; /*0x6e7b48*/
  v2 = MEMORY[0xB0E844]; /*0x6e7a8d*/
  if ( !MEMORY[0xB0E844] ) /*0x6e7a97*/
    goto LABEL_13; /*0x6e7a97*/
  v3 = MEMORY[0xB0E850]; /*0x6e7a99*/
  if ( MEMORY[0xB0E850] && *(_DWORD *)MEMORY[0xB0E850] == *(_DWORD *)this ) /*0x6e7aa9*/
  {
LABEL_17:
    v7 = (void ***)(v3 + 4); /*0x6e7b43*/
    return __RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &BuildingClass `RTTI Type Descriptor', 0); /*0x6e7b46*/
  }
  if ( !MEMORY[0xB0E84C] ) /*0x6e7ab6*/
  {
    qsort(MEMORY[0xB0E840], MEMORY[0xB0E844], 8u, CompareFunction); /*0x6e7ac7*/
    v2 = MEMORY[0xB0E844]; /*0x6e7acc*/
    MEMORY[0xB0E850] = 0; /*0x6e7ad5*/
    MEMORY[0xB0E84C] = 1; /*0x6e7adf*/
  }
  v4 = *(_DWORD *)this; /*0x6e7ae6*/
  v5 = MEMORY[0xB0E840]; /*0x6e7ae8*/
  if ( v2 <= 0 ) /*0x6e7af0*/
    goto LABEL_13; /*0x6e7af0*/
  while ( 1 ) /*0x6e7af9*/
  {
    v6 = v5[2 * (v2 / 2)]; /*0x6e7af9*/
    v3 = (int)&v5[2 * (v2 / 2)]; /*0x6e7afc*/
    if ( v6 <= v4 ) /*0x6e7b01*/
      break; /*0x6e7b01*/
    v2 /= 2; /*0x6e7b03*/
LABEL_12:
    if ( v2 <= 0 ) /*0x6e7b15*/
      goto LABEL_13; /*0x6e7b15*/
  }
  if ( v6 != v4 ) /*0x6e7b07*/
  {
    v5 = (_DWORD *)(v3 + 8); /*0x6e7b09*/
    v2 += -1 - v2 / 2; /*0x6e7b11*/
    goto LABEL_12; /*0x6e7b11*/
  }
  if ( v3 ) /*0x6e7b3b*/
  {
    MEMORY[0xB0E850] = (int)&v5[2 * (v2 / 2)]; /*0x6e7b3d*/
    goto LABEL_17; /*0x6e7b3d*/
  }
LABEL_13:
  v7 = (void ***)&unk_B78828; /*0x6e7b17*/
  return __RTDynamicCast(*v7, 0, &AbstractClass `RTTI Type Descriptor', &BuildingClass `RTTI Type Descriptor', 0); /*0x6e7b37*/
}


// ==== 0x006E7C20  ObjectClass::Network_Process_6E7C20  this=ObjectClass  sig=csp ====
void *__thiscall sub_6E7C20(_BYTE *this)
{
  int v1; // ecx
  _BYTE *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this; /*0x6e7c20*/
  if ( this->vtable2 != 11 ) /*0x6e7c25*/
    return 0; /*0x6e7c61*/
  v1 = *(_DWORD *)this; /*0x6e7c27*/
  LOWORD(v3) = v1 % 1000; /*0x6e7c39*/
  HIWORD(v3) = v1 / 1000; /*0x6e7c54*/
  return CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v3); /*0x6e7c60*/
}


// ==== 0x006E7C70  sub_6E7C70  this=-  sig=ida-proto ====
void sub_6E7C70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e7c7c*/
  MEMORY[0xB0E8D0] = Math::Sqrt(v0 + v0); /*0x6e7c8e*/
}


// ==== 0x006E7CA0  sub_6E7CA0  this=-  sig=ida-proto ====
void sub_6E7CA0()
{
  MEMORY[0xB0E920] = MEMORY[0xB0E8D0] / 60.0; /*0x6e7cac*/
}


// ==== 0x006E7CC0  sub_6E7CC0  this=-  sig=ida-proto ====
void sub_6E7CC0()
{
  MEMORY[0xB0E908] = 1.0 / MEMORY[0xB0E920]; /*0x6e7ccc*/
}


// ==== 0x006E7CE0  sub_6E7CE0  this=-  sig=ida-proto ====
void sub_6E7CE0()
{
  MEMORY[0xB0E900] = 0.0174532925199433 * 45.0; /*0x6e7cec*/
}


// ==== 0x006E7D00  sub_6E7D00  this=-  sig=ida-proto ====
void sub_6E7D00()
{
  MEMORY[0xB0E8D8] = 0.0174532925199433 * 60.0; /*0x6e7d0c*/
}


// ==== 0x006E7D20  sub_6E7D20  this=-  sig=ida-proto ====
void sub_6E7D20()
{
  MEMORY[0xB0E8B0] = 0.0174532925199433 * 90.0; /*0x6e7d2c*/
}


// ==== 0x006E7D40  sub_6E7D40  this=-  sig=ida-proto ====
__int64 sub_6E7D40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0E8B0] - MEMORY[0xB0E8D8]); /*0x6e7d52*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0E8D0] * 0.5); /*0x6e7d66*/
  MEMORY[0xB0E928] = result; /*0x6e7d6b*/
  return result; /*0x6e7d70*/
}


// ==== 0x006E7D80  sub_6E7D80  this=-  sig=ida-proto ====
void sub_6E7D80()
{
  MEMORY[0xB0E8E0] = Math::ArcTan((double)MEMORY[0xB0E928] * 0.00390625); /*0x6e7d97*/
}


// ==== 0x006E7DB0  sub_6E7DB0  this=-  sig=ida-proto ====
void sub_6E7DB0()
{
  MEMORY[0xB0E8F8] = Math::ArcTan((double)(2 * MEMORY[0xB0E928]) / MEMORY[0xB0E8D0]); /*0x6e7dd2*/
}


// ==== 0x006E7DE0  sub_6E7DE0  this=-  sig=ida-proto ====
__int64 sub_6E7DE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0E928]) + 0.5); /*0x6e7dfb*/
  MEMORY[0xB0E91C] = result; /*0x6e7e00*/
  return result; /*0x6e7e06*/
}


// ==== 0x006E7E10  sub_6E7E10  this=-  sig=ida-proto ====
int sub_6E7E10()
{
  MEMORY[0xB0E8C8] = 0; /*0x6e7e12*/
  MEMORY[0xB0E8CA] = 0; /*0x6e7e18*/
  return 0; /*0x6e7e1e*/
}


// ==== 0x006E7E20  sub_6E7E20  this=-  sig=ida-proto ====
int sub_6E7E20()
{
  MEMORY[0xB0E8E8] = 0; /*0x6e7e22*/
  MEMORY[0xB0E8EC] = 0; /*0x6e7e27*/
  MEMORY[0xB0E8F0] = 0; /*0x6e7e2c*/
  return 0; /*0x6e7e31*/
}


// ==== 0x006E7E40  sub_6E7E40  this=-  sig=ida-proto ====
int sub_6E7E40()
{
  MEMORY[0xB0E918] = 0; /*0x6e7e45*/
  MEMORY[0xB0E910] = 128; /*0x6e7e4f*/
  MEMORY[0xB0E914] = 128; /*0x6e7e54*/
  return 128; /*0x6e7e59*/
}


// ==== 0x006E7E60  sub_6E7E60  this=-  sig=ida-proto ====
int sub_6E7E60()
{
  MEMORY[0xB0E8B8] = 0; /*0x6e7e62*/
  MEMORY[0xB0E8BC] = 0; /*0x6e7e67*/
  MEMORY[0xB0E8C0] = 0; /*0x6e7e6c*/
  MEMORY[0xB0E8C4] = 0; /*0x6e7e71*/
  return 0; /*0x6e7e76*/
}


// ==== 0x006E7E80  TaskForceClass::Construct  this=TaskForceClass  sig=csp ====
_DWORD *__thiscall TaskForceClass::Construct(_DWORD *this, ObjectClass *aP1)
{
  TaskForceClass *v3; // eax
  ObjectTypeClass *v4; // eax
  int v5; // ecx

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x6e7e8a*/
  this->ptr_98 = -1; /*0x6e7e8f*/
  this->u32_9C = 0; /*0x6e7e99*/
  this->q0A0 = 0; /*0x6e7ea3*/
  *this = &TaskForceClass::`vftable'; /*0x6e7ead*/
  this->vtable2 = &TaskForceClass::`vftable'; /*0x6e7eb3*/
  this->vtable3 = &TaskForceClass::`vftable'; /*0x6e7eba*/
  this->vtable4 = &vt_TaskForceClass; /*0x6e7ec1*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22060] < *(int *)&HouseClass_Player.__pad_5568[22052] /*0x6e7f05*/
    || (HouseClass_Player.__pad_5568[22057] || !*(_DWORD *)&HouseClass_Player.__pad_5568[22052])
    && *(int *)&HouseClass_Player.__pad_5568[22064] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[22044] + 8))(
         &HouseClass_Player.__pad_5568[22044],
         *(_DWORD *)&HouseClass_Player.__pad_5568[22052] + *(_DWORD *)&HouseClass_Player.__pad_5568[22064],
         0) )
  {
    v3 = (TaskForceClass *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22060])++; /*0x6e7f12*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22048] + 4 * (_DWORD)v3) = this; /*0x6e7f21*/
  }
  v4 = (ObjectTypeClass *)(this + 41); /*0x6e7f28*/
  v5 = 6; /*0x6e7f2a*/
  do /*0x6e7f38*/
  {
    *(_DWORD *)v4->__pad_0 = 0; /*0x6e7f2f*/
    *(_DWORD *)&v4->__pad_0[4] = 0; /*0x6e7f31*/
    v4 = (ObjectTypeClass *)((char *)v4 + 8); /*0x6e7f34*/
    --v5; /*0x6e7f37*/
  }
  while ( v5 ); /*0x6e7f38*/
  return this; /*0x6e7f3c*/
}


// ==== 0x006E8000  ObjectClass::method_6E8000  this=AbstractClass  sig=csp ====
_DWORD *__thiscall sub_6E8000(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // ecx
  int v4; // edi
  int v5; // esi
  int v6; // edx

  result = this; /*0x6e8004*/
  this->vtable3 = &vt_INoticeSink; /*0x6e8008*/
  this->vtable4 = &vt_INoticeSource; /*0x6e800f*/
  this->uniqueId = *(_DWORD *)(a2 + 16); /*0x6e801c*/
  this->q050 = *(_BYTE *)(a2 + 20); /*0x6e8022*/
  this->nextArrayIndex = *(_DWORD *)(a2 + 24); /*0x6e8028*/
  this->referenceCount = *(_DWORD *)(a2 + 28); /*0x6e802e*/
  this->q080 = *(_BYTE *)(a2 + 32); /*0x6e8034*/
  *this = &AbstractClass::`vftable'; /*0x6e803f*/
  this->vtable2 = &AbstractClass::`vftable'; /*0x6e8045*/
  this->vtable3 = &AbstractClass::`vftable'; /*0x6e804c*/
  this->vtable4 = &vt_AbstractClass; /*0x6e8053*/
  qmemcpy(this + 9, (const void *)(a2 + 36), 0x19u); /*0x6e805a*/
  qmemcpy((char *)this + 61, (const void *)(a2 + 61), 0x20u); /*0x6e8068*/
  this->q060 = *(_DWORD *)(a2 + 96); /*0x6e8070*/
  qmemcpy(this + 25, (const void *)(a2 + 100), 0x31u); /*0x6e807b*/
  *this = &TaskForceClass::`vftable'; /*0x6e807e*/
  this->vtable2 = &TaskForceClass::`vftable'; /*0x6e8084*/
  this->vtable3 = &TaskForceClass::`vftable'; /*0x6e808b*/
  this->vtable4 = &vt_TaskForceClass; /*0x6e8092*/
  v3 = this + 41; /*0x6e809f*/
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
      *v3 = *(_DWORD *)((char *)v3 + v6); /*0x6e80d5*/
      v3[1] = *(_DWORD *)((char *)v3 + v6 + 4); /*0x6e80db*/
      v3 += 2; /*0x6e80e4*/
    }
    while ( v5 < result[39] ); /*0x6e80e9*/
  }
  return result; /*0x6e80eb*/
}


// ==== 0x006E8160  TeamClass::SumMemberCounts  this=TeamClass  sig=csp ====
int __thiscall sub_6E8160(int *this)
{
  int v1; // edx
  int result; // eax
  int *v3; // ecx
  int v4; // esi

  v1 = this->q09C; /*0x6e8160*/
  result = 0; /*0x6e8166*/
  if ( v1 > 0 ) /*0x6e816a*/
  {
    v3 = this + 41; /*0x6e816d*/
    do /*0x6e817b*/
    {
      v4 = *v3; /*0x6e8173*/
      v3 += 2; /*0x6e8175*/
      result += v4; /*0x6e8178*/
      --v1; /*0x6e817a*/
    }
    while ( v1 ); /*0x6e817b*/
  }
  return result; /*0x6e817e*/
}


// ==== 0x006E8220  TaskForceClass::LoadFromINI  this=IUnknown  sig=csp ====
CCINIClass *__fastcall TaskForceClass::LoadFromINI(char *a1, int a2)
{
  CCINIClass *result; // eax
  CCINIClass *v5; // esi
  CCINIClass *v6; // ebx
  unsigned __int8 *StringByIndex; // eax
  int v8; // esi
  _DWORD *v9; // eax
  TaskForceClass *v10; // esi
  int v11; // eax
  CCINIClass *v12; // [esp+10h] [ebp-1Ch]
  char Source[24]; // [esp+14h] [ebp-18h] BYREF

  result = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)&stru_830620.__pad_579C[53244]); /*0x6e8230*/
  v5 = result; /*0x6e8235*/
  v6 = 0; /*0x6e8237*/
  v12 = result; /*0x6e823b*/
  if ( (int)result > 0 ) /*0x6e823f*/
  {
    while ( 1 ) /*0x6e824d*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x6e824d*/
                                           a1,
                                           (CCINIClass *)&stru_830620.__pad_579C[53244],
                                           v6);
      result = (CCINIClass *)INIClass::GetString( /*0x6e8266*/
                               (unsigned __int8 ***)a1,
                               (INIClass *)&stru_830620.__pad_579C[53244],
                               StringByIndex,
                               (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
                               (INIClass *)Source,
                               24);
      if ( (int)result > 0 ) /*0x6e826d*/
        break; /*0x6e826d*/
LABEL_13:
      v6 = (CCINIClass *)((char *)v6 + 1); /*0x6e8327*/
      if ( (int)v6 >= (int)v5 ) /*0x6e832a*/
        return result; /*0x6e832a*/
    }
    if ( !_strcmpi((char *)&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e8293*/
      goto LABEL_11; /*0x6e8293*/
    v8 = 0; /*0x6e82a4*/
    if ( *(int *)&MEMORY[0xA8D63C].__pad_1258[76] > 0 ) /*0x6e82a8*/
    {
      while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[64] + 4 * v8) + 36), Source) ) /*0x6e82c6*/
      {
        if ( ++v8 >= *(int *)&MEMORY[0xA8D63C].__pad_1258[76] ) /*0x6e82d0*/
          goto LABEL_8; /*0x6e82d0*/
      }
      v10 = *(TaskForceClass **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[64] + 4 * v8); /*0x6e82f9*/
      goto LABEL_12; /*0x6e82fc*/
    }
LABEL_8:
    v9 = (_DWORD *)__2_YAPAXI_Z(0xD4u); /*0x6e82d7*/
    if ( v9 ) /*0x6e82e1*/
      v10 = (TaskForceClass *)TaskForceClass::Construct(v9, Source); /*0x6e82ef*/
    else
LABEL_11:
      v10 = 0; /*0x6e82fe*/
LABEL_12:
    v11 = sub_412610(Source); /*0x6e8300*/
    SwizzleManagerClass::Here_I_Am((int)&MEMORY[0xB077F8].__pad_14B0[13416], v11, (int)v10); /*0x6e8310*/
    result = (CCINIClass *)(*(int (__thiscall **)(TaskForceClass *, char *))(*(_DWORD *)v10->__pad_0 + 100))(v10, a1); /*0x6e831a*/
    *(_DWORD *)v10->__pad_A0 = a2; /*0x6e831d*/
    v5 = v12; /*0x6e8323*/
    goto LABEL_13; /*0x6e8323*/
  }
  return result; /*0x6e8330*/
}


// ==== 0x006E8340  ScriptTypeClass::ReadINI  this=ScriptTypeClass  sig=csp ====
TaskForceClass *__fastcall ScriptTypeClass::ReadINI(char *a1, int a2)
{
  CCINIClass *KeyCount; // ebx
  CCINIClass *i; // edi
  unsigned __int8 *StringByIndex; // eax
  TaskForceClass *result; // eax
  INIClass *v7; // ebx
  int j; // ebp
  int v9; // edi
  INIClass *v10; // [esp-4h] [ebp-38h]
  char Buffer[32]; // [esp+14h] [ebp-20h] BYREF

  KeyCount = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)&stru_830620.__pad_579C[53244]); /*0x6e8357*/
  for ( i = 0; (int)i < (int)KeyCount; i = (CCINIClass *)((char *)i + 1) ) /*0x6e835d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1, (CCINIClass *)&stru_830620.__pad_579C[53244], i); /*0x6e8367*/
    INIClass::GetString( /*0x6e8380*/
      (unsigned __int8 ***)a1,
      (INIClass *)&stru_830620.__pad_579C[53244],
      StringByIndex,
      (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
      (INIClass *)Buffer,
      32);
    INIClass::ClearSection((int)a1, (INIClass *)Buffer, 0); /*0x6e838e*/
  }
  INIClass::ClearSection((int)a1, (INIClass *)&stru_830620.__pad_579C[53244], 0); /*0x6e83a1*/
  result = *(TaskForceClass **)&MEMORY[0xA8D63C].__pad_1258[76]; /*0x6e83a6*/
  v7 = 0; /*0x6e83ab*/
  for ( j = 0; j < *(int *)&MEMORY[0xA8D63C].__pad_1258[76]; ++j ) /*0x6e83b1*/
  {
    v9 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[64] + 4 * j); /*0x6e83bc*/
    if ( *(_DWORD *)(v9 + 160) == a2 ) /*0x6e83c5*/
    {
      v10 = v7; /*0x6e83cd*/
      v7 = (INIClass *)((char *)v7 + 1); /*0x6e83d4*/
      sprintf(Buffer, MEMORY[0x817F6C], v10); /*0x6e83d5*/
      String::Trim(Buffer); /*0x6e83e1*/
      INIClass::SetString(a1, (INIClass *)&stru_830620.__pad_579C[53244], (INIClass *)Buffer, (INIClass *)(v9 + 36)); /*0x6e83f6*/
      (*(void (__thiscall **)(int, char *))(*(_DWORD *)v9 + 104))(v9, a1); /*0x6e8400*/
    }
    result = *(TaskForceClass **)&MEMORY[0xA8D63C].__pad_1258[76]; /*0x6e8403*/
  }
  return result; /*0x6e840d*/
}


// ==== 0x006E8420  TaskForceClass::GetUnitCount  this=TaskForceClass  sig=csp ====
char __thiscall TaskForceClass::GetUnitCount(int this, unsigned __int8 ***aP1)
{
  INIClass *v3; // edi
  _DWORD *v4; // eax
  INIClass *v5; // ecx
  INIClass *v6; // eax
  int v8; // [esp+8h] [ebp-A8h] BYREF
  char Buffer[32]; // [esp+10h] [ebp-A0h] BYREF
  INIClass Destination[2]; // [esp+30h] [ebp-80h] BYREF

  INIClass::ResetSection(aP1); /*0x6e8433*/
  if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) ) /*0x6e843b*/
    return 0; /*0x6e84f7*/
  v3 = 0; /*0x6e844a*/
  *(_DWORD *)(this + 156) = 0; /*0x6e844f*/
  do /*0x6e84cb*/
  {
    sprintf(Buffer, MEMORY[0x817F6C], v3); /*0x6e8460*/
    if ( (int)INIClass::GetString( /*0x6e8486*/
                aP1,
                (INIClass *)(this + 36),
                (unsigned __int8 *)Buffer,
                (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
                Destination,
                128) > 0 )
    {
      v4 = TaskForceClass::ParseUnitCountAndType(&v8, Destination[0].__pad_0); /*0x6e8491*/
      v5 = *(INIClass **)(this + 156); /*0x6e8496*/
      *(_DWORD *)(this + 8 * (_DWORD)v5 + 164) = *v4; /*0x6e849e*/
      *(_DWORD *)(this + 8 * (_DWORD)v5 + 168) = v4[1]; /*0x6e84a8*/
      v6 = *(INIClass **)(this + 156); /*0x6e84af*/
      if ( *(_DWORD *)(this + 8 * (_DWORD)v6 + 168) ) /*0x6e84b5*/
        *(_DWORD *)(this + 156) = &v6->__pad_0[1]; /*0x6e84c1*/
    }
    v3 = (INIClass *)((char *)v3 + 1); /*0x6e84c7*/
  }
  while ( (int)v3 < 6 ); /*0x6e84cb*/
  *(_DWORD *)(this + 152) = INIClass::ReadInt_Overwrite( /*0x6e84e2*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_830620.__pad_579C[53256],
                              *(INIClass **)(this + 152));
  return 1; /*0x6e84e9*/
}


// ==== 0x006E8510  TaskForceClass::GetUnitType  this=TaskForceClass  sig=csp ====
char __thiscall TaskForceClass::_vt26(int this, char *a2)
{
  int v3; // esi
  _DWORD *v4; // ebx
  char *v5; // eax
  char Buffer[32]; // [esp+8h] [ebp-20h] BYREF

  if ( !AbstractTypeClass::WriteINI((char *)this, a2) ) /*0x6e851c*/
    return 0; /*0x6e85a5*/
  v3 = 0; /*0x6e8527*/
  v4 = (_DWORD *)(this + 164); /*0x6e8529*/
  do /*0x6e857d*/
  {
    sprintf(Buffer, MEMORY[0x817F6C], v3); /*0x6e853a*/
    if ( v3 >= *(_DWORD *)(this + 156) ) /*0x6e854a*/
    {
      INIClass::ClearSection((int)a2, this + 36, (unsigned __int8 *)Buffer); /*0x6e8571*/
    }
    else
    {
      v5 = TaskForceClass::Check(v4); /*0x6e854e*/
      INIClass::SetString(a2, (unsigned __int8 *)(this + 36), Buffer, v5); /*0x6e855f*/
    }
    ++v3; /*0x6e8576*/
    v4 += 2; /*0x6e8577*/
  }
  while ( v3 < 6 ); /*0x6e857d*/
  INIClass::SetInt(a2, (unsigned __int8 *)(this + 36), MEMORY[0x842DC4], *(_DWORD *)(this + 152), 0); /*0x6e8593*/
  return 1; /*0x6e859a*/
}


// ==== 0x006E85B0  ObjectClass::method_6E85B0  this=ObjectClass  sig=csp ====
char __thiscall sub_6E85B0(int *this)
{
  int v2; // edi
  _DWORD *i; // esi

  v2 = 0; /*0x6e85bb*/
  if ( this->q027 <= 0 ) /*0x6e85bf*/
    return 1; /*0x6e85e1*/
  for ( i = this + 42; (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*i + 44))(*i) == 16; i += 2 ) /*0x6e85c1*/
  {
    if ( ++v2 >= this->q027 ) /*0x6e85df*/
      return 1; /*0x6e85df*/
  }
  return 0; /*0x6e85e1*/
}


// ==== 0x006E85F0  TeamTypeClass::FindOrCreateTaskForce  this=ObjectClass  sig=csp ====
TaskForceClass *__thiscall TeamTypeClass::FindOrCreateTaskForce(ObjectClass *Source)
{
  int v2; // esi
  _DWORD *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e860c*/
    return 0; /*0x6e866f*/
  v2 = 0; /*0x6e861d*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22060] <= 0 ) /*0x6e8621*/
  {
LABEL_6:
    v3 = (_DWORD *)__2_YAPAXI_Z(0xD4u); /*0x6e8646*/
    if ( v3 ) /*0x6e8655*/
      return (TaskForceClass *)TaskForceClass::Construct(v3, Source); /*0x6e8661*/
    return 0; /*0x6e8655*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22048] + 4 * v2) + 36), Source) ) /*0x6e863a*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[22060] ) /*0x6e8644*/
      goto LABEL_6; /*0x6e8644*/
  }
  return *(TaskForceClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22048] + 4 * v2); /*0x6e865f*/
}


// ==== 0x006E8680  TaskForceClass::SaveTaskForce  this=TaskForceClass  sig=csp ====
int __stdcall TaskForceClass::SaveTaskForce(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6e868f*/
  if ( result >= 0 ) /*0x6e8696*/
    return 0; /*0x6e8698*/
  return result; /*0x6e869a*/
}


// ==== 0x006E86A0  TaskForceClass::LoadTaskForce  this=TaskForceClass  sig=csp ====
int __stdcall TaskForceClass::LoadTaskForce(AbstractTypeClass *aP0, int aP1)
{
  int result; // eax
  MouseClass *v3; // esi
  int v4; // edi

  result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1); /*0x6e86ab*/
  if ( result >= 0 ) /*0x6e86b2*/
  {
    if ( aP0 ) /*0x6e86b6*/
    {
      AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1); /*0x6e86bf*/
      *(_DWORD *)aP0->__pad_0 = &TaskForceClass::`vftable'; /*0x6e86c4*/
      *(_DWORD *)&aP0->__pad_0[4] = &TaskForceClass::`vftable'; /*0x6e86ca*/
      *(_DWORD *)&aP0->__pad_0[8] = &TaskForceClass::`vftable'; /*0x6e86d1*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_TaskForceClass; /*0x6e86d8*/
    }
    v3 = (MouseClass *)&aP0[1].uniqueId; /*0x6e86e0*/
    v4 = 6; /*0x6e86e6*/
    do /*0x6e86fa*/
    {
      ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], v3); /*0x6e86f1*/
      v3 = (MouseClass *)((char *)v3 + 8); /*0x6e86f6*/
      --v4; /*0x6e86f9*/
    }
    while ( v4 ); /*0x6e86fa*/
    return 0; /*0x6e86fc*/
  }
  return result; /*0x6e86ff*/
}


// ==== 0x006E8710  TaskForceClass::ddtor  this=TaskForceClass  sig=csp ====
int __stdcall TaskForceClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6e8716*/
    return -2147467261; /*0x6e8718*/
  *a2 = 1641952286; /*0x6e8726*/
  a2[1] = 298977140; /*0x6e872e*/
  a2[2] = 1610655148; /*0x6e8737*/
  a2[3] = -1252326136; /*0x6e8740*/
  return 0; /*0x6e871d*/
}


// ==== 0x006E8750  TaskForceClass::LoadTask  this=TaskForceClass  sig=csp ====
int __thiscall TaskForceClass::_vt13(int this, int *a2)
{
  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6e8759*/
  Power::TimerProcess(*(_DWORD *)(this + 152)); /*0x6e8767*/
  return Power::TimerProcess(*(_DWORD *)(this + 156)); /*0x6e877a*/
}


// ==== 0x006E8780  HouseClass::GetMaxBuildLevel  this=HouseClass  sig=csp ====
int __thiscall HouseClass_GetMaxBuildLevel(int *this)
{
  int v1; // edx
  int result; // eax
  _DWORD *v3; // esi
  int v4; // ecx

  v1 = this->secretLabsCount; /*0x6e8780*/
  result = 0; /*0x6e8786*/
  if ( v1 > 0 ) /*0x6e878a*/
  {
    v3 = this + 42; /*0x6e8794*/
    do /*0x6e87bc*/
    {
      v4 = *(_DWORD *)(*v3 + 1588); /*0x6e879c*/
      if ( v4 <= result ) /*0x6e87a4*/
      {
        if ( v4 == -1 ) /*0x6e87ad*/
        {
          if ( MEMORY[0xA8B238][0] ) /*0x6e87b1*/
            result = 11; /*0x6e87b3*/
        }
      }
      else
      {
        result = *(_DWORD *)(*v3 + 1588); /*0x6e87a6*/
      }
      v3 += 2; /*0x6e87b8*/
      --v1; /*0x6e87bb*/
    }
    while ( v1 ); /*0x6e87bc*/
  }
  return result; /*0x6e87c0*/
}


// ==== 0x006E87D0  TaskForceClass::StubReturn33  this=TaskForceClass  sig=csp ====
int TaskForceClass::_vt11()
{
  return 33; /*0x6e87d5*/
}


// ==== 0x006E87E0  TaskForceClass::StubReturn212  this=TaskForceClass  sig=csp ====
int TaskForceClass::_vt12()
{
  return 212; /*0x6e87e5*/
}


// ==== 0x006E87F0  TaskForceClass::ExecuteAction  this=TaskForceClass  sig=csp ====
TaskForceClass *__thiscall TaskForceClass::ExecuteAction(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &TaskForceClass::`vftable'; /*0x6e87f6*/
  *(Block + 1) = &TaskForceClass::`vftable'; /*0x6e87fc*/
  *(Block + 2) = &TaskForceClass::`vftable'; /*0x6e8803*/
  *(Block + 3) = &vt_TaskForceClass; /*0x6e880a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x6e8811*/
  v5 = Block; /*0x6e8826*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA8E8D0] + 16))(&MEMORY[0xA8E8D0], &v5); /*0x6e882a*/
  if ( v3 != -1 && v3 < MEMORY[0xA8E8E0] && v3 < --MEMORY[0xA8E8E0] ) /*0x6e8845*/
  {
    do /*0x6e885d*/
    {
      ++v3; /*0x6e884d*/
      *((_DWORD *)MEMORY[0xA8E8D4] + v3 - 1) = *((_DWORD *)MEMORY[0xA8E8D4] + v3); /*0x6e8851*/
    }
    while ( v3 < MEMORY[0xA8E8E0] ); /*0x6e885d*/
  }
  AbstractTypeClass::Dtor(Block); /*0x6e8861*/
  if ( (a2 & 1) != 0 ) /*0x6e886b*/
    __3_YAXPAX_Z(Block); /*0x6e886e*/
  return (TaskForceClass *)Block; /*0x6e8878*/
}


// ==== 0x006E8880  sub_6E8880  this=-  sig=ida-proto ====
void sub_6E8880()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e888c*/
  MEMORY[0xB0E950] = Math::Sqrt(v0 + v0); /*0x6e889e*/
}


// ==== 0x006E88B0  sub_6E88B0  this=-  sig=ida-proto ====
void sub_6E88B0()
{
  MEMORY[0xB0E9A0] = MEMORY[0xB0E950] / 60.0; /*0x6e88bc*/
}


// ==== 0x006E88D0  sub_6E88D0  this=-  sig=ida-proto ====
void sub_6E88D0()
{
  MEMORY[0xB0E988] = 1.0 / MEMORY[0xB0E9A0]; /*0x6e88dc*/
}


// ==== 0x006E88F0  sub_6E88F0  this=-  sig=ida-proto ====
void sub_6E88F0()
{
  MEMORY[0xB0E980] = 0.0174532925199433 * 45.0; /*0x6e88fc*/
}


// ==== 0x006E8910  sub_6E8910  this=-  sig=ida-proto ====
void sub_6E8910()
{
  MEMORY[0xB0E958] = 0.0174532925199433 * 60.0; /*0x6e891c*/
}


// ==== 0x006E8930  sub_6E8930  this=-  sig=ida-proto ====
void sub_6E8930()
{
  MEMORY[0xB0E930] = 0.0174532925199433 * 90.0; /*0x6e893c*/
}


// ==== 0x006E8950  sub_6E8950  this=-  sig=ida-proto ====
__int64 sub_6E8950()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0E930] - MEMORY[0xB0E958]); /*0x6e8962*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0E950] * 0.5); /*0x6e8976*/
  MEMORY[0xB0E9A8] = result; /*0x6e897b*/
  return result; /*0x6e8980*/
}


// ==== 0x006E8990  sub_6E8990  this=-  sig=ida-proto ====
void sub_6E8990()
{
  MEMORY[0xB0E960] = Math::ArcTan((double)MEMORY[0xB0E9A8] * 0.00390625); /*0x6e89a7*/
}


// ==== 0x006E89C0  sub_6E89C0  this=-  sig=ida-proto ====
void sub_6E89C0()
{
  MEMORY[0xB0E978] = Math::ArcTan((double)(2 * MEMORY[0xB0E9A8]) / MEMORY[0xB0E950]); /*0x6e89e2*/
}


// ==== 0x006E89F0  sub_6E89F0  this=-  sig=ida-proto ====
__int64 sub_6E89F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0E9A8]) + 0.5); /*0x6e8a0b*/
  MEMORY[0xB0E99C] = result; /*0x6e8a10*/
  return result; /*0x6e8a16*/
}


// ==== 0x006E8A20  sub_6E8A20  this=-  sig=ida-proto ====
int sub_6E8A20()
{
  MEMORY[0xB0E948] = 0; /*0x6e8a22*/
  return 0; /*0x6e8a2e*/
}


// ==== 0x006E8A30  sub_6E8A30  this=-  sig=ida-proto ====
int sub_6E8A30()
{
  MEMORY[0xB0E968] = 0; /*0x6e8a32*/
  MEMORY[0xB0E96C] = 0; /*0x6e8a37*/
  MEMORY[0xB0E970] = 0; /*0x6e8a3c*/
  return 0; /*0x6e8a41*/
}


// ==== 0x006E8A50  sub_6E8A50  this=-  sig=ida-proto ====
int sub_6E8A50()
{
  MEMORY[0xB0E998] = 0; /*0x6e8a55*/
  MEMORY[0xB0E990] = 128; /*0x6e8a5f*/
  MEMORY[0xB0E994] = 128; /*0x6e8a64*/
  return 128; /*0x6e8a69*/
}


// ==== 0x006E8A70  sub_6E8A70  this=-  sig=ida-proto ====
int sub_6E8A70()
{
  MEMORY[0xB0E938] = 0; /*0x6e8a72*/
  MEMORY[0xB0E93C] = 0; /*0x6e8a77*/
  MEMORY[0xB0E940] = 0; /*0x6e8a7c*/
  MEMORY[0xB0E944] = 0; /*0x6e8a81*/
  return 0; /*0x6e8a86*/
}


// ==== 0x006E8A90  TeamClass::Construct  this=TeamClass  sig=csp ====
int __thiscall MissionClass::Construct(int this, AbstractClass *aP1, AbstractClass *aP2, TeamTypeClass *aP3)
{
  AbstractClass *v5; // ecx
  TeamTypeClass *v6; // edx
  TimerStruct *v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  TeamTypeClass *v13; // ecx
  int v14; // eax
  _WORD *v15; // eax
  CellClass *WaypointCoords; // eax
  int v17; // eax
  TagClass *v16; // eax
  AbstractClass *v19; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6e8a94*/
  v5 = aP2; /*0x6e8a9d*/
  v6 = aP3; /*0x6e8aa1*/
  *(_DWORD *)(this + 36) = aP1; /*0x6e8aa7*/
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
  *(_DWORD *)(this + 80) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x6e8acd*/
  *(_DWORD *)(this + 84) = 0; /*0x6e8ad0*/
  v7 = *(TimerStruct **)&HouseClass_Player.__pad_5568[23248]; /*0x6e8ad3*/
  *(_DWORD *)(this + 96) = 0; /*0x6e8ad9*/
  *(_DWORD *)(this + 88) = v7; /*0x6e8adc*/
  *(_DWORD *)(this + 100) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x6e8ae7*/
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
  *(_DWORD *)(this + 12) = &vt_TeamClass; /*0x6e8b46*/
  if ( *(int *)&stru_89E138.__pad_579C[67620] < *(int *)&stru_89E138.__pad_579C[67612] /*0x6e8b7e*/
    || (stru_89E138.__pad_579C[67617] || !*(_DWORD *)&stru_89E138.__pad_579C[67612])
    && *(int *)&stru_89E138.__pad_579C[67624] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_89E138.__pad_579C[67604] + 8))(
         &stru_89E138.__pad_579C[67604],
         *(_DWORD *)&stru_89E138.__pad_579C[67612] + *(_DWORD *)&stru_89E138.__pad_579C[67624],
         0) )
  {
    v8 = (*(_DWORD *)&stru_89E138.__pad_579C[67620])++; /*0x6e8b8b*/
    *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[67608] + 4 * v8) = this; /*0x6e8b9a*/
  }
  if ( *(int *)&stru_B05488.__pad_579C[19036] < *(int *)&stru_B05488.__pad_579C[19028] /*0x6e8bd1*/
    || (stru_B05488.__pad_579C[19033] || !*(_DWORD *)&stru_B05488.__pad_579C[19028])
    && *(int *)&stru_B05488.__pad_579C[19040] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19020] + 8))(
         &stru_B05488.__pad_579C[19020],
         *(_DWORD *)&stru_B05488.__pad_579C[19028] + *(_DWORD *)&stru_B05488.__pad_579C[19040],
         0) )
  {
    v9 = (*(_DWORD *)&stru_B05488.__pad_579C[19036])++; /*0x6e8bde*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024] + 4 * v9) = this; /*0x6e8bed*/
  }
  if ( *(int *)&stru_B05488.__pad_579C[18948] < *(int *)&stru_B05488.__pad_579C[18940] /*0x6e8c24*/
    || (stru_B05488.__pad_579C[18945] || !*(_DWORD *)&stru_B05488.__pad_579C[18940])
    && *(int *)&stru_B05488.__pad_579C[18952] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[18932] + 8))(
         &stru_B05488.__pad_579C[18932],
         *(_DWORD *)&stru_B05488.__pad_579C[18940] + *(_DWORD *)&stru_B05488.__pad_579C[18952],
         0) )
  {
    v10 = (*(_DWORD *)&stru_B05488.__pad_579C[18948])++; /*0x6e8c31*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18936] + 4 * v10) = this; /*0x6e8c40*/
  }
  if ( *(int *)&stru_B05488.__pad_579C[19212] < *(int *)&stru_B05488.__pad_579C[19204] /*0x6e8c77*/
    || (stru_B05488.__pad_579C[19209] || !*(_DWORD *)&stru_B05488.__pad_579C[19204])
    && *(int *)&stru_B05488.__pad_579C[19216] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19196] + 8))(
         &stru_B05488.__pad_579C[19196],
         *(_DWORD *)&stru_B05488.__pad_579C[19204] + *(_DWORD *)&stru_B05488.__pad_579C[19216],
         0) )
  {
    v11 = (*(_DWORD *)&stru_B05488.__pad_579C[19212])++; /*0x6e8c84*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19200] + 4 * v11) = this; /*0x6e8c93*/
  }
  if ( *(int *)&stru_B05488.__pad_579C[19164] < *(int *)&stru_B05488.__pad_579C[19156] /*0x6e8cca*/
    || (stru_B05488.__pad_579C[19161] || !*(_DWORD *)&stru_B05488.__pad_579C[19156])
    && *(int *)&stru_B05488.__pad_579C[19168] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19148] + 8))(
         &stru_B05488.__pad_579C[19148],
         *(_DWORD *)&stru_B05488.__pad_579C[19156] + *(_DWORD *)&stru_B05488.__pad_579C[19168],
         0) )
  {
    v12 = (*(_DWORD *)&stru_B05488.__pad_579C[19164])++; /*0x6e8cd7*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19152] + 4 * v12) = this; /*0x6e8ce6*/
  }
  memset((void *)(this + 136), 0, 0x18u); /*0x6e8cf7*/
  v13 = *(TeamTypeClass **)(this + 36); /*0x6e8cf9*/
  if ( v13 ) /*0x6e8cff*/
  {
    v14 = *(_DWORD *)(this + 44); /*0x6e8d05*/
    if ( v14 && v13[2].__pad_0[14] ) /*0x6e8d0c*/
      ++*(_DWORD *)(v14 + 22124); /*0x6e8d14*/
    v15 = TechnoClass::GetWaypointCoords(*(_DWORD **)(this + 36), (AbstractClass *)&aP1); /*0x6e8d22*/
    if ( *v15 != *(_WORD *)&stru_B05488.__pad_579C[15652] || v15[1] != *(_WORD *)&stru_B05488.__pad_579C[15654] ) /*0x6e8d3e*/
    {
      WaypointCoords = (CellClass *)TechnoClass::GetWaypointCoords(*(_DWORD **)(this + 36), (AbstractClass *)&aP1); /*0x6e8d48*/
      *(_DWORD *)(this + 52) = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)WaypointCoords); /*0x6e8d58*/
    }
    ++*(_DWORD *)(*(_DWORD *)(this + 36) + 220); /*0x6e8d65*/
    if ( *(_DWORD *)(*(_DWORD *)(this + 36) + 208) ) /*0x6e8d6e*/
    {
      v17 = __2_YAPAXI_Z(0x38u); /*0x6e8d78*/
      if ( v17 ) /*0x6e8d82*/
        v16 = (TagClass *)TeknoClass::GetType(v17, *(TeamTypeClass **)(*(_DWORD *)(this + 36) + 208)); /*0x6e8d90*/
      else
        v16 = 0; /*0x6e8d97*/
      *(_DWORD *)(this + 112) = v16; /*0x6e8d99*/
    }
    v19 = (AbstractClass *)__2_YAPAXI_Z(0x30u); /*0x6e8d9e*/
    if ( v19 ) /*0x6e8da8*/
    {
      *(_DWORD *)(this + 40) = ScriptClass::Construct(v19, *(AbstractClass **)(*(_DWORD *)(this + 36) + 224)); /*0x6e8dbb*/
      return this; /*0x6e8dc2*/
    }
    *(_DWORD *)(this + 40) = 0; /*0x6e8dc7*/
  }
  return this; /*0x6e8dc0*/
}


// ==== 0x006E8DE0  TeamClass::Destructor  this=TeamClass  sig=csp ====
void __fastcall TeamClass::Destructor(void **this, AbstractClass *a2)
{
  int edi1; // edi
  int ecx2; // ecx
  HouseClass *v3; // ecx
  TeamTypeClass *v4; // eax
  FootClass *i; // eax
  TagClass *v6; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int eax31; // eax
  int v13; // eax
  TeamTypeClass *v12; // ecx
  void **v15; // [esp+10h] [ebp-4h] BYREF

  edi1 = 0; /*0x6e8de5*/
  *this = &TeamClass::`vftable'; /*0x6e8de7*/
  this->vtable2 = &TeamClass::`vftable'; /*0x6e8ded*/
  this->vtable3 = &TeamClass::`vftable'; /*0x6e8df4*/
  for ( this->vtable4 = &vt_TeamClass; edi1 < *(int *)&HouseClass_Player.__pad_5568[8028]; ++edi1 ) /*0x6e8e09*/
  {
    ecx2 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8016] + 4 * edi1); /*0x6e8e10*/
    a2 = *(AbstractClass **)(ecx2 + 220); /*0x6e8e16*/
    if ( a2 == this->buildingType ) /*0x6e8e1e*/
    {
      if ( this->achievedGreatSuccess ) /*0x6e8e20*/
        AITriggerTypeClass::RegisterSuccess(ecx2); /*0x6e8e2a*/
      else
        AITriggerTypeClass::RegisterFailure(ecx2); /*0x6e8e31*/
    }
  }
  v3 = (HouseClass *)this->owner; /*0x6e8e40*/
  if ( v3 ) /*0x6e8e45*/
  {
    v4 = (TeamTypeClass *)this->buildingType; /*0x6e8e47*/
    if ( v4 ) /*0x6e8e4c*/
    {
      if ( v4[2].__pad_0[14] ) /*0x6e8e4e*/
        --v3->dropshipData[5]; /*0x6e8e58*/
    }
  }
  if ( HouseClass_Player.__pad_5568[22252] && this->buildingType ) /*0x6e8e67*/
  {
    for ( i = (FootClass *)this->u8_15; i; i = (FootClass *)this->u8_15 ) /*0x6e8e73*/
      TeamClass::LiberateMember_Start((int)this, (IUnknown *)i, 0xFFFFFFFF, 0); /*0x6e8e7c*/
    --*((_DWORD *)this->buildingType + 55); /*0x6e8e92*/
    v6 = (TagClass *)this->referenceCount; /*0x6e8e98*/
    if ( v6 ) /*0x6e8e9d*/
    {
      if ( !v6->instanceCount ) /*0x6e8e9f*/
        TagClass::Destroy(v6); /*0x6e8ea6*/
      this->referenceCount = 0; /*0x6e8eab*/
    }
  }
  LOBYTE(a2) = 1; /*0x6e8eb2*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, a2); /*0x6e8eb6*/
  v15 = this; /*0x6e8ecb*/
  v9 = (*(int (__thiscall **)(char *, void ***))(*(_DWORD *)&stru_B05488.__pad_579C[19148] + 16))( /*0x6e8ecf*/
         &stru_B05488.__pad_579C[19148],
         &v15);
  if ( v9 != -1 && v9 < *(int *)&stru_B05488.__pad_579C[19164] ) /*0x6e8edf*/
  {
    --*(_DWORD *)&stru_B05488.__pad_579C[19164]; /*0x6e8ee4*/
    for ( ; /*0x6e8eea*/
          v9 < *(int *)&stru_B05488.__pad_579C[19164];
          *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19152] + 4 * v9 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19152]
                                                                                          + 4 * v9) )
    {
      ++v9; /*0x6e8ef2*/
    }
  }
  v15 = this; /*0x6e8f14*/
  v10 = (*(int (__thiscall **)(char *, void ***))(*(_DWORD *)&stru_B05488.__pad_579C[19196] + 16))( /*0x6e8f18*/
          &stru_B05488.__pad_579C[19196],
          &v15);
  if ( v10 != -1 && v10 < *(int *)&stru_B05488.__pad_579C[19212] ) /*0x6e8f28*/
  {
    --*(_DWORD *)&stru_B05488.__pad_579C[19212]; /*0x6e8f2d*/
    for ( ; /*0x6e8f33*/
          v10 < *(int *)&stru_B05488.__pad_579C[19212];
          *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19200] + 4 * v10 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19200]
                                                                                           + 4 * v10) )
    {
      ++v10; /*0x6e8f3b*/
    }
  }
  v15 = this; /*0x6e8f5d*/
  v11 = (*(int (__thiscall **)(char *, void ***))(*(_DWORD *)&stru_B05488.__pad_579C[19020] + 16))( /*0x6e8f61*/
          &stru_B05488.__pad_579C[19020],
          &v15);
  if ( v11 != -1 && v11 < *(int *)&stru_B05488.__pad_579C[19036] ) /*0x6e8f71*/
  {
    --*(_DWORD *)&stru_B05488.__pad_579C[19036]; /*0x6e8f76*/
    for ( ; /*0x6e8f7c*/
          v11 < *(int *)&stru_B05488.__pad_579C[19036];
          *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024] + 4 * v11 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024]
                                                                                           + 4 * v11) )
    {
      ++v11; /*0x6e8f84*/
    }
  }
  v15 = this; /*0x6e8fa6*/
  eax31 = (*(int (__thiscall **)(char *, void ***))(*(_DWORD *)&stru_B05488.__pad_579C[18932] + 16))( /*0x6e8faa*/
            &stru_B05488.__pad_579C[18932],
            &v15);
  if ( eax31 != -1 && eax31 < *(int *)&stru_B05488.__pad_579C[18948] ) /*0x6e8fba*/
  {
    --*(_DWORD *)&stru_B05488.__pad_579C[18948]; /*0x6e8fbf*/
    for ( ; /*0x6e8fc5*/
          eax31 < *(int *)&stru_B05488.__pad_579C[18948];
          *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18936] + 4 * eax31 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18936]
                                                                                             + 4 * eax31) )
    {
      ++eax31; /*0x6e8fcd*/
    }
  }
  v15 = this; /*0x6e8fef*/
  v13 = (*(int (__thiscall **)(char *, void ***))(*(_DWORD *)&stru_89E138.__pad_579C[67604] + 16))( /*0x6e8ff3*/
          &stru_89E138.__pad_579C[67604],
          &v15);
  if ( v13 != -1 && v13 < *(int *)&stru_89E138.__pad_579C[67620] ) /*0x6e9003*/
  {
    --*(_DWORD *)&stru_89E138.__pad_579C[67620]; /*0x6e9008*/
    for ( ; /*0x6e900e*/
          v13 < *(int *)&stru_89E138.__pad_579C[67620];
          *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[67608] + 4 * v13 - 4) = *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[67608]
                                                                                           + 4 * v13) )
    {
      ++v13; /*0x6e9016*/
    }
  }
  if ( this->unknown74 ) /*0x6e9028*/
  {
    v12 = (TeamTypeClass *)this->buildingType; /*0x6e902f*/
    if ( v12 ) /*0x6e9034*/
      (*(void (__thiscall **)(TeamTypeClass *, int))(*(_DWORD *)v12->__pad_0 + 32))(v12, 1); /*0x6e903a*/
  }
  AbstractClass::DTOR(this); /*0x6e903f*/
}


// ==== 0x006E9050  TeamClass::SelectMember  this=AbstractClass  sig=csp ====
char __thiscall TeamClass::SelectMember(int this, AbstractClass *aP1)
{
  AbstractClass *v4; // eax
  FootClass *v5; // esi
  AbstractClass *v6; // eax
  AbstractClass *movementDestination; // edx
  bool v8; // bl
  AbstractClass *v9; // eax
  FootClass *v10; // esi
  bool aP1a; // [esp+10h] [ebp+4h]

  v4 = *(AbstractClass **)(this + 60); /*0x6e9059*/
  if ( aP1 != v4 ) /*0x6e905e*/
  {
    v5 = *(FootClass **)(this + 84); /*0x6e9060*/
    if ( v4 ) /*0x6e9065*/
    {
      for ( ; v5; v5 = (FootClass *)v5->nextTeamMember ) /*0x6e9069*/
      {
        v6 = *(AbstractClass **)(this + 60); /*0x6e906c*/
        movementDestination = (AbstractClass *)v5->movementDestination; /*0x6e9075*/
        aP1a = v5->sprayOffsetIndex == (_DWORD)v6; /*0x6e9082*/
        v8 = movementDestination == v6; /*0x6e9086*/
        if ( (AbstractClass *)v5->sprayOffsetIndex == v6 || movementDestination == v6 ) /*0x6e908f*/
        {
          (*(void (__thiscall **)(FootClass *, int, _DWORD))(*(_DWORD *)v5->__pad_0 + 488))(v5, 5, 0); /*0x6e9099*/
          if ( v8 ) /*0x6e90a1*/
            (*(void (__thiscall **)(FootClass *, _DWORD, int))(*(_DWORD *)v5->__pad_0 + 1152))(v5, 0, 1); /*0x6e90ab*/
          if ( aP1a ) /*0x6e90b7*/
            (*(void (__thiscall **)(FootClass *, _DWORD))(*(_DWORD *)v5->__pad_0 + 968))(v5, 0); /*0x6e90bf*/
        }
      }
    }
  }
  v9 = *(AbstractClass **)(this + 64); /*0x6e90d0*/
  if ( v9 == *(AbstractClass **)(this + 60) || !v9 ) /*0x6e90dc*/
    *(_DWORD *)(this + 64) = aP1; /*0x6e90de*/
  *(_DWORD *)(this + 60) = aP1; /*0x6e90e3*/
  if ( aP1 ) /*0x6e90e6*/
  {
    v9 = (AbstractClass *)(*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1); /*0x6e90ed*/
    if ( v9 == (AbstractClass *)11 ) /*0x6e90f3*/
    {
      LOBYTE(v9) = Type::CheckAmbiguity(&stru_87C374.__pad_14B0[8132], (int)aP1, 1); /*0x6e90fd*/
      if ( (_BYTE)v9 ) /*0x6e9104*/
      {
        *(_BYTE *)(this + 130) = 0; /*0x6e9132*/
      }
      else
      {
        v10 = *(FootClass **)(this + 84); /*0x6e9106*/
        for ( *(_BYTE *)(this + 130) = 1; v10; v10 = (FootClass *)v10->nextTeamMember ) /*0x6e9112*/
          LOBYTE(v9) = (*(int (__thiscall **)(FootClass *, _DWORD, int))(*(_DWORD *)v10->__pad_0 + 1152))(v10, 0, 1); /*0x6e911c*/
      }
    }
  }
  return (char)v9; /*0x6e912c*/
}


// ==== 0x006E9140  TeamClass::Update  this=TeamClass  sig=csp ====
void TeamClass::Update(TechnoClass *aP0, _DWORD *a1, int j)
{
  int v3; // ecx
  int *countObjects; // ebp
  int jj; // edi
  TeamClass *esi1; // esi
  TimerStruct *v4; // edx
  int eax2; // eax
  FootClass *v6; // eax
  int v10; // eax
  FootClass *v8; // ecx
  int i; // edi
  char cl48; // cl
  char stepCompleted; // al
  char v15; // bl
  ScriptClass *v13; // ecx
  int *Entry; // eax
  int v18; // ecx
  FootClass *n; // edi
  int eax71; // eax
  FootClass *ii; // edi
  int eax77; // eax
  FootClass *v20; // edi
  FootClass *v24; // ebp
  CellClass *v22; // eax
  AbstractClass *MapSpawnCell; // eax
  FootClass *m; // edi
  FootClass *v25; // edi
  FootClass *nextTeamMember; // ebp
  int v30; // ebx
  int Owner; // eax
  int eax107; // eax
  int v33; // ebp
  FootClass *k; // edi
  ScriptClass *v32; // ecx
  AbstractClass *eax116; // eax
  AbstractClass *eax117; // eax
  FootClass *v35; // edi
  FootClass *v36; // edi
  FootClass *v37; // edi
  _DWORD *v41; // eax
  FootClass *v39; // edi
  char cl148; // cl
  int edx153; // edx
  _DWORD *eax161; // eax
  FootClass *v43; // edi
  FootClass *v44; // edi
  FootClass *v45; // eax
  FootClass *v46; // edi
  char v50; // al
  FootClass *v51; // ebp
  FootClass *v49; // edi
  char v53; // al
  FootClass *v54; // ebp
  FootClass *v52; // edi
  char v56; // al
  FootClass *v57; // ebp
  FootClass *v55; // edi
  char v59; // al
  FootClass *v60; // ebp
  FootClass *v58; // edi
  char v62; // al
  FootClass *v63; // ebp
  TeamClass *aP2; // [esp+10h] [ebp-28h] BYREF
  _DWORD v65[2]; // [esp+14h] [ebp-24h] BYREF
  int GroundHeight; // [esp+1Ch] [ebp-1Ch]
  int v67; // [esp+20h] [ebp-18h] BYREF
  AbstractClass *v68; // [esp+24h] [ebp-14h]
  _BYTE v69[12]; // [esp+2Ch] [ebp-Ch] BYREF

  esi1 = (TeamClass *)v3;
  if ( *(_BYTE *)(v3 + 131) )
  {
    v4 = *(TimerStruct **)(v3 + 100);
    eax2 = *(_DWORD *)(v3 + 108);
    if ( v4 != (TimerStruct *)-1 )
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (int)v4 >= eax2 )
      {
LABEL_6:
        *(_BYTE *)(v3 + 131) = 0;
        goto LABEL_7;
      }
      eax2 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (_DWORD)v4;
    }
    if ( eax2 )
      return;
    goto LABEL_6;
  }
LABEL_7:
  if ( *(_BYTE *)(v3 + 125) && !TeamClass::UpdateReadinessState((void *)v3) )
    return;
  if ( !esi1->TeamClass_field_7F )
    goto LABEL_224;
  if ( esi1->TeamClass_field_7A )
    SelectTeamProductionBuilding((int)esi1);
  if ( !esi1->TeamClass_field_7F )
  {
LABEL_224:
    if ( esi1->unknown79 || esi1->unknown77 )
    {
      v6 = (FootClass *)esi1->firstUnit;
      esi1->TeamClass_field_7F = 1;
      esi1->spawnStatus = 1;
      for ( esi1->TeamClass_field_7A = 0; v6; v6 = (FootClass *)v6->nextTeamMember )
      {
        if ( esi1->TeamClass_field_7B || esi1->unknown77 )
          v6->isTeamLeader = 1;
      }
      SetLandTypeMap((_DWORD *)esi1->currentScript);
      esi1->stepCompleted = 1;
    }
  }
  if ( esi1->TeamClass_field_7B || esi1->TeamClass_field_7F || !esi1->spawnCell || !esi1->unknown38 )
    TeamClass::FindClosestEnemy((int)esi1, (AbstractClass *)&esi1->spawnCell, (AbstractClass *)&esi1->unknown38);
  if ( (!esi1->TeamClass_field_7F || !esi1->unknown79 && *((_BYTE *)esi1->buildingType + 171))
    && (!(unsigned __int8)House::IsCurrentPlayer((#375 *)esi1->owner) || !esi1->spawnStatus) )
  {
    jj = 0;
    v10 = *((_DWORD *)esi1->buildingType + 57);
    if ( *(int *)(v10 + 156) > 0 )
    {
      countObjects = esi1->countObjects;
      do
      {
        if ( *countObjects < *(_DWORD *)(v10 + 8 * jj + 164) )
          TeamClass::RecruitMember(esi1, jj);
        ++jj;
        ++countObjects;
        v10 = *((_DWORD *)esi1->buildingType + 57);
      }
      while ( jj < *(_DWORD *)(v10 + 156) );
    }
  }
  v8 = (FootClass *)esi1->firstUnit;
  if ( !v8 )
  {
    if ( esi1->spawnStatus
      || *(_DWORD *)&HouseClass_Player.__pad_5568[8068]
      && (jj = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4496),
          *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - esi1->creationFrame > jj) )
    {
      if ( esi1->unknown82 )
      {
        for ( i = 0; i < *(int *)&stru_89E138.__pad_579C[67588]; ++i )
        {
          if ( TeamClass::Update_0(
                 *(void ***)(*(_DWORD *)&stru_89E138.__pad_579C[67576] + 4 * i),
                 23,
                 0,
                 *(IUnknown **)&stru_B05488.__pad_579C[15652],
                 0,
                 0) )
          {
            --i;
            if ( !*(_DWORD *)&stru_89E138.__pad_579C[67588] )
              break;
          }
        }
      }
LABEL_112:
      if ( esi1 )
        (*(void (__thiscall **)(TeamClass *, int))(*(_DWORD *)esi1->__pad_0 + 32))(esi1, 1);
      return;
    }
    goto LABEL_49;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(FootClass *))(*(_DWORD *)v8->__pad_0 + 472))(v8) )
  {
LABEL_49:
    cl48 = 0;
    goto LABEL_50;
  }
  cl48 = 1;
LABEL_50:
  if ( !esi1->TeamClass_field_7F )
  {
LABEL_91:
    TeamClass::UpdateMembers((int)esi1);
    return;
  }
  if ( esi1->TeamClass_field_7B || esi1->TeamClass_field_7A || cl48 )
  {
    esi1->TeamClass_field_7B = HouseClass::EvaluateTarget((int)esi1) == 0;
    return;
  }
  stepCompleted = esi1->stepCompleted;
  v15 = 0;
  LOBYTE(aP2) = 0;
  if ( stepCompleted )
  {
    v15 = 1;
    esi1->stepCompleted = 0;
    v13 = (ScriptClass *)esi1->currentScript;
    LOBYTE(aP2) = 1;
    TeamClass::Check(v13);
    for ( jj = (int)esi1->firstUnit; jj; jj = *(_DWORD *)(jj + 1496) )
    {
      if ( *((_BYTE *)esi1->buildingType + 244)
        && *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)jj + 132))(jj) + 1504) > 0 )
      {
        if ( *(_DWORD *)(jj + 536) )
          Debug::Log();
      }
      else
      {
        TechnoClass::SetFocus((_DWORD *)jj, 0);
      }
    }
    if ( !SessionClass::SetField((_DWORD *)esi1->currentScript) )
      goto LABEL_112;
    TeamClass::SelectMember((int)esi1, 0);
    esi1->focus = 0;
  }
  else if ( !esi1->focus )
  {
    esi1->focus = esi1->queuedFocus;
  }
  if ( esi1->unknown81 )
  {
    v15 = 1;
    LOBYTE(aP2) = 1;
    esi1->unknown81 = 0;
    TeamClass::SelectMember((int)esi1, 0);
    esi1->focus = 0;
  }
  Entry = SessionClass::GetEntry((_DWORD *)esi1->currentScript, (IUnknown *)v65);
  v67 = *Entry;
  v18 = Entry[1];
  v68 = (AbstractClass *)v18;
  switch ( v67 )
  {
    case 0:
      TeamClass::CoordinateSuperWeaponAttack((int)esi1, (ScriptClass *)&v67, (int)aP2);
      return;
    case 1:
      TeamClass::SelectWaypointTarget((int)esi1, (TeamClass *)&v67, (char)aP2);
      return;
    case 3:
      TeamClass::MoveTeamToWaypoint((int **)esi1, (ScriptClass *)&v67, aP2);
      return;
    case 4:
      if ( !v15 )
        goto LABEL_91;
      LOWORD(aP2) = v18 % 128;
      HIWORD(aP2) = v18 / 128;
      MapSpawnCell = (AbstractClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP2);
      goto LABEL_90;
    case 5:
      if ( v15 )
      {
        esi1->guardAreaTimer[0] = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
        esi1->guardAreaTimer[1] = (int)v68;
        esi1->guardAreaTimer[2] = 15 * v18;
      }
      HouseClass::EvaluateTarget((int)esi1);
      if ( !CDTimerClass::TimeRemaining(esi1->guardAreaTimer) )
        esi1->stepCompleted = 1;
      return;
    case 6:
      TeamClass::SetField11((_DWORD *)esi1->currentScript, (ScriptClass *)(v18 - 2));
      esi1->stepCompleted = 1;
      return;
    case 7:
      HouseClass::CheckWinCondition(HouseClass_Player.field_0, 0);
      esi1->stepCompleted = 1;
      return;
    case 8:
      DispatchTeamOrders((ObjectClass **)esi1, (int)&v67, (int)aP2);
      return;
    case 9:
      TechnoClass::ProcessBorderTower((int)esi1, v15, jj, (int)&v67, (int)aP2);
      return;
    case 10:
      TeamClass::AssignAttackTarget((int)esi1, (TeamClass *)&v67, (IUnknown *)aP2);
      return;
    case 11:
      Mission::AssignTeamMemberMissions((int)esi1, (ScriptClass *)&v67, (int)aP2);
      return;
    case 12:
      ScenarioClass::SetGlobalToByID(*(_BYTE **)&HouseClass_Player.__pad_5568[8060], v18, 1);
      goto LABEL_82;
    case 13:
      v36 = (FootClass *)esi1->firstUnit;
      if ( !v36 )
        goto LABEL_82;
      while ( 1 )
      {
        (*(void (__thiscall **)(FootClass *, int))(*(_DWORD *)v36->__pad_0 + 1312))(v36, v18);
        v36 = (FootClass *)v36->nextTeamMember;
        if ( !v36 )
          break;
        v18 = (int)v68;
      }
      esi1->stepCompleted = 1;
      return;
    case 14:
      AssignTeamProductionFacilities((int **)esi1, (ScriptClass *)&v67, (int)aP2);
      return;
    case 15:
      TeamClass::AssignMemberToCoordinator((int)esi1, (ScriptClass *)&v67, aP2);
      return;
    case 16:
      TeamClass::MoveToCellAndAttack(esi1, (ScriptClass *)&v67, (char)aP2);
      return;
    case 17:
      v32 = (ScriptClass *)esi1->currentScript;
      if ( v32 )
        (*(void (__thiscall **)(ScriptClass *, int))(*(_DWORD *)v32->__pad_0 + 32))(v32, 1);
      eax116 = (AbstractClass *)__2_YAPAXI_Z(0x30u);
      if ( eax116 )
      {
        eax117 = ScriptClass::Construct(eax116, *((AbstractClass **)unk_8B41CC + (_DWORD)v68));
        esi1->currentScript = eax117;
        SetLandTypeMap(eax117);
      }
      else
      {
        esi1->currentScript = 0;
        SetLandTypeMap(0);
      }
      return;
    case 18:
      eax107 = __2_YAPAXI_Z(0xA0u);
      if ( eax107 )
        v33 = MissionClass::Construct(
                eax107,
                *(AbstractClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[23024] + 4 * (_DWORD)v68),
                (AbstractClass *)esi1->owner,
                0);
      else
        v33 = 0;
      for ( k = (FootClass *)esi1->firstUnit; k; k = (FootClass *)esi1->firstUnit )
      {
        TeamClass::LiberateMember_Start((int)esi1, (IUnknown *)k, 0xFFFFFFFF, 0);
        TeamClass::AddMember(v33, (IUnknown *)k, 0);
      }
      goto LABEL_112;
    case 19:
      v35 = (FootClass *)esi1->firstUnit;
      if ( !v35 )
        goto LABEL_82;
      do
      {
        (*(void (__thiscall **)(FootClass *))(*(_DWORD *)v35->__pad_0 + 1304))(v35);
        v35 = (FootClass *)v35->nextTeamMember;
      }
      while ( v35 );
      esi1->stepCompleted = 1;
      return;
    case 20:
      v25 = (FootClass *)esi1->firstUnit;
      if ( v25 )
      {
        while ( 1 )
        {
          nextTeamMember = (FootClass *)v25->nextTeamMember;
          v30 = *(_DWORD *)v25->__pad_0;
          Owner = HouseClass::FindOwner((void *)v18);
          (*(void (__thiscall **)(FootClass *, int, int))(v30 + 980))(v25, Owner, 1);
          v25 = nextTeamMember;
          if ( !nextTeamMember )
            break;
          v18 = (int)v68;
        }
      }
      esi1->stepCompleted = 1;
      return;
    case 21:
      for ( m = (FootClass *)esi1->firstUnit; m; m = (FootClass *)m->nextTeamMember )
        (*(void (__thiscall **)(FootClass *, char *, int, _DWORD))(*(_DWORD *)m->__pad_0 + 372))(
          m,
          &stru_B05488.__pad_579C[15684],
          1,
          0);
      esi1->stepCompleted = 1;
      return;
    case 22:
      if ( !v15 )
        goto LABEL_91;
      v22 = (CellClass *)esi1->spawnCell;
      if ( !v22 )
        v22 = (CellClass *)esi1->firstUnit;
      MapSpawnCell = (AbstractClass *)FindMapSpawnCell(&stru_87C374.__pad_14B0[8132], (FootClass *)v22);
LABEL_90:
      TeamClass::SelectMember((int)esi1, MapSpawnCell);
      goto LABEL_91;
    case 23:
      HouseClass::CheckDefeat(HouseClass_Player.field_0, 0);
      esi1->stepCompleted = 1;
      return;
    case 24:
      goto LABEL_74;
    case 25:
      PlayVocClass(v18, 0x2000, 1.0, 0);
      esi1->stepCompleted = 1;
      return;
    case 26:
      Movie::PlayWrapper(v18, (int)countObjects, jj, 1, 1, 1);
      esi1->stepCompleted = 1;
      return;
    case 27:
      Theme::QueueSong((int)&g_BuildingTypeClass_Count, (IUnknown *)v18);
      esi1->stepCompleted = 1;
      return;
    case 28:
      v37 = (FootClass *)esi1->firstUnit;
      if ( !v37 )
        goto LABEL_82;
      do
      {
        v41 = (_DWORD *)(*(int (__thiscall **)(FootClass *, _BYTE *))(*(_DWORD *)v37->__pad_0 + 72))(v37, v69);
        LOWORD(aP2) = *v41 / 256;
        HIWORD(aP2) = v41[1] / 256;
        v65[0] = aP2;
        MapClass::TriggerEVA((IUnknown *)v65);
        v37 = (FootClass *)v37->nextTeamMember;
      }
      while ( v37 );
      esi1->stepCompleted = 1;
      return;
    case 29:
      *((_BYTE *)esi1->owner + 494) = 1;
      esi1->stepCompleted = 1;
      return;
    case 30:
      *((_DWORD *)esi1->owner + 148) = 4;
      esi1->stepCompleted = 1;
      return;
    case 31:
      do
      {
        v39 = (FootClass *)esi1->firstUnit;
        cl148 = 0;
        if ( !v39 )
        {
LABEL_82:
          esi1->stepCompleted = 1;
          return;
        }
        do
        {
          if ( v39->health > 0 && v39->isAliveFlag && v39->isOnMap && !v39->inLimbo )
          {
            edx153 = *(_DWORD *)v39->__pad_0;
            v65[0] = v39->health;
            (*(void (__thiscall **)(FootClass *, _DWORD *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(edx153 + 364))(
              v39,
              v65,
              0,
              *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008),
              0,
              1,
              0,
              0);
            cl148 = 1;
          }
          v39 = (FootClass *)v39->nextTeamMember;
        }
        while ( v39 );
      }
      while ( cl148 );
      esi1->stepCompleted = 1;
      return;
    case 32:
      if ( LightningStorm::IsActive() )
        goto LABEL_82;
      LightningStorm::Start(
        (int)v68,
        *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6036),
        *(int *)&stru_B05488.__pad_579C[15652],
        0);
      esi1->stepCompleted = 1;
      return;
    case 33:
      if ( !LightningStorm::IsActive() )
        goto LABEL_82;
      LightningStorm::End();
      esi1->stepCompleted = 1;
      return;
    case 34:
      eax161 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)esi1->spawnCell + 72))(
                           esi1->spawnCell,
                           v69);
      v65[0] = *eax161;
      v65[1] = eax161[1];
      GroundHeight = eax161[2];
      GroundHeight = Cell::GetGroundHeight((IUnknown *)v65);
      if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v65) + 80) & 0x100) != 0
        || (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v65) + 80) & 0x400) != 0 )
      {
        GroundHeight += *(_DWORD *)&stru_B05488.__pad_579C[15736];
      }
      TacticalClass::SetPosition(*(_DWORD **)&stru_87C374.__pad_579C[22548], (IUnknown *)v65, v68);
      esi1->stepCompleted = 1;
      return;
    case 35:
      TeamClass::DisbandTeam(&stru_87C374.__pad_14B0[8132], 0);
      esi1->stepCompleted = 1;
      return;
    case 36:
      MapClass::ClearShroud(&stru_87C374.__pad_14B0[8132], 0);
      esi1->stepCompleted = 1;
      return;
    case 37:
      v20 = (FootClass *)esi1->firstUnit;
      if ( v20 )
      {
        do
        {
          v24 = (FootClass *)v20->nextTeamMember;
          (*(void (__thiscall **)(FootClass *))(*(_DWORD *)v20->__pad_0 + 212))(v20);
          (*(void (__thiscall **)(FootClass *))(*(_DWORD *)v20->__pad_0 + 248))(v20);
          v20 = v24;
        }
        while ( v24 );
      }
      esi1->stepCompleted = 1;
      return;
    case 38:
      ScenarioClass::SetGlobalToByID(*(_BYTE **)&HouseClass_Player.__pad_5568[8060], v18, 0);
      goto LABEL_82;
    case 39:
      ScenarioClass::SetLocalToByID(*(_BYTE **)&HouseClass_Player.__pad_5568[8060], v18, 1);
      esi1->stepCompleted = 1;
      return;
    case 40:
      ScenarioClass::SetLocalToByID(*(_BYTE **)&HouseClass_Player.__pad_5568[8060], v18, 0);
      esi1->stepCompleted = 1;
      return;
    case 41:
      v43 = (FootClass *)esi1->firstUnit;
      if ( !v43 )
        goto LABEL_82;
      do
      {
        (*(void (__thiscall **)(FootClass *))(*(_DWORD *)v43->__pad_0 + 1308))(v43);
        v43 = (FootClass *)v43->nextTeamMember;
      }
      while ( v43 );
      esi1->stepCompleted = 1;
      return;
    case 42:
      TeamClass::SyncMemberFacing((int)esi1, (int)&v67, (int)aP2);
      return;
    case 43:
      v44 = (FootClass *)esi1->firstUnit;
      if ( !v44 )
        goto LABEL_82;
      break;
    case 44:
      for ( n = (FootClass *)esi1->firstUnit; n; n = (FootClass *)n->nextTeamMember )
      {
        if ( (*(int (__thiscall **)(FootClass *))(*(_DWORD *)n->__pad_0 + 44))(n) == 1 )
        {
          eax71 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)n->__pad_0 + 132))(n);
          if ( !_strcmpi((const void *)(eax71 + 36), &stru_830620.__pad_579C[53272]) )
            *(_DWORD *)&n[1].__pad_0[4] = *(_DWORD *)&g_UnitTypeCount2->__pad_0[4
                                                                              * BuildingTypeClass::FindIndex(&stru_830620.__pad_579C[53264])];
        }
      }
LABEL_74:
      esi1->stepCompleted = 1;
      return;
    case 45:
      for ( ii = (FootClass *)esi1->firstUnit; ii; ii = (FootClass *)ii->nextTeamMember )
      {
        if ( (*(int (__thiscall **)(FootClass *))(*(_DWORD *)ii->__pad_0 + 44))(ii) == 1 )
        {
          eax77 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)ii->__pad_0 + 132))(ii);
          if ( !_strcmpi((const void *)(eax77 + 36), &stru_830620.__pad_579C[53264]) )
            *(_DWORD *)&ii[1].__pad_0[4] = *(_DWORD *)&g_UnitTypeCount2->__pad_0[4
                                                                               * BuildingTypeClass::FindIndex(&stru_830620.__pad_579C[53272])];
        }
      }
      esi1->stepCompleted = 1;
      return;
    case 46:
      TeamClass::SelectAreaAttackTarget((int)esi1, (ScriptClass *)&v67, aP2);
      return;
    case 47:
      TeamClass::ProcessTeamMovement((int *)esi1->__pad_0, (int)&v67, (int)aP2);
      return;
    case 48:
      SelectTeamMembers(esi1, (ScriptClass *)&v67, (int)aP2);
      return;
    case 49:
      esi1->stepCompleted = 1;
      esi1->achievedGreatSuccess = 1;
      return;
    case 50:
      if ( !v15 )
        return;
      v45 = (FootClass *)esi1->firstUnit;
      if ( !v45 )
        goto LABEL_82;
      do
      {
        v45->animation[1] = v18;
        v45 = (FootClass *)v45->nextTeamMember;
      }
      while ( v45 );
      esi1->stepCompleted = 1;
      return;
    case 51:
      TeamClass::PlayMemberAnimation((int)esi1, (ScriptClass *)&v67, (char)aP2);
      return;
    case 52:
      if ( v15 )
      {
        RevealTechnoClassRadarEvent((int)esi1->firstUnit, v18);
        esi1->stepCompleted = 1;
      }
      return;
    case 53:
      DeployTeamMembersAtStart((int)esi1, (ScriptClass *)&v67, (char)aP2);
      return;
    case 54:
      TeamClass::SelectDeploymentTarget((int *)esi1->__pad_0, (int)&v67, (char)aP2);
      return;
    case 55:
      ProcessAISuperWeaponSelection((int *)esi1->__pad_0, (ScriptClass *)&v67, (int)aP2);
      return;
    case 56:
      SuperWeapon::DispatchTeam((int)esi1, (ScriptClass *)&v67, (int)aP2);
      return;
    case 57:
      TeamClass::CheckMemberSuperWeapon((int)esi1, (int)&v67, (int)aP2);
      return;
    case 58:
      TeamClass::SelectBestMember(esi1, (ScriptClass *)&v67, (int)aP2);
      return;
    case 59:
      TeamClass::SelectAttackTarget((int)esi1, (ScriptClass *)&v67, (char)aP2);
      return;
    case 60:
      v46 = (FootClass *)esi1->firstUnit;
      if ( !v46 )
        goto LABEL_82;
      do
      {
        v50 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v46->__pad_0 + 828))(v46);
        v51 = (FootClass *)v46->nextTeamMember;
        if ( v50 )
          TeamClass::LiberateMember_Start((int)esi1, (IUnknown *)v46, 0xFFFFFFFF, (AbstractClass *)1);
        v46 = v51;
      }
      while ( v51 );
      esi1->stepCompleted = 1;
      return;
    case 61:
      v49 = (FootClass *)esi1->firstUnit;
      if ( !v49 )
        goto LABEL_82;
      do
      {
        v53 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v49->__pad_0 + 836))(v49);
        v54 = (FootClass *)v49->nextTeamMember;
        if ( v53 )
          TeamClass::LiberateMember_Start((int)esi1, (IUnknown *)v49, 0xFFFFFFFF, (AbstractClass *)1);
        v49 = v54;
      }
      while ( v54 );
      esi1->stepCompleted = 1;
      return;
    case 62:
      v52 = (FootClass *)esi1->firstUnit;
      if ( !v52 )
        goto LABEL_82;
      do
      {
        v56 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v52->__pad_0 + 832))(v52);
        v57 = (FootClass *)v52->nextTeamMember;
        if ( v56 )
          TeamClass::LiberateMember_Start((int)esi1, (IUnknown *)v52, 0xFFFFFFFF, (AbstractClass *)1);
        v52 = v57;
      }
      while ( v57 );
      esi1->stepCompleted = 1;
      return;
    case 63:
      v55 = (FootClass *)esi1->firstUnit;
      if ( !v55 )
        goto LABEL_82;
      do
      {
        v59 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v55->__pad_0 + 840))(v55);
        v60 = (FootClass *)v55->nextTeamMember;
        if ( v59 )
          TeamClass::LiberateMember_Start((int)esi1, (IUnknown *)v55, 0xFFFFFFFF, (AbstractClass *)1);
        v55 = v60;
      }
      while ( v60 );
      esi1->stepCompleted = 1;
      return;
    case 64:
      v58 = (FootClass *)esi1->firstUnit;
      if ( !v58 )
        goto LABEL_82;
      do
      {
        v62 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v58->__pad_0 + 844))(v58);
        v63 = (FootClass *)v58->nextTeamMember;
        if ( v62 )
          TeamClass::LiberateMember_Start((int)esi1, (IUnknown *)v58, 0xFFFFFFFF, (AbstractClass *)1);
        v58 = v63;
      }
      while ( v63 );
      esi1->stepCompleted = 1;
      return;
    default:
      return;
  }
  while ( *(_DWORD *)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)v44->__pad_0 + 132))(v44) + 1504) <= *(_DWORD *)&v44->inAirFlag )
  {
    v44 = (FootClass *)v44->nextTeamMember;
    if ( !v44 )
    {
      esi1->stepCompleted = 1;
      return;
    }
  }
}


// ==== 0x006EA080  ObjectClass::method_6EA080  this=ObjectClass  sig=csp ====
char __thiscall sub_6EA080(int this)
{
  int v2; // eax
  char result; // al

  v2 = *(_DWORD *)(this + 84); /*0x6ea086*/
  *(_BYTE *)(this + 127) = 1; /*0x6ea089*/
  *(_BYTE *)(this + 120) = 1; /*0x6ea08e*/
  for ( *(_BYTE *)(this + 122) = 0; v2; v2 = *(_DWORD *)(v2 + 1496) ) /*0x6ea095*/
  {
    if ( *(_BYTE *)(this + 123) || *(_BYTE *)(this + 119) ) /*0x6ea09e*/
      *(_BYTE *)(v2 + 1673) = 1; /*0x6ea0a5*/
  }
  result = SetLandTypeMap(*(_DWORD **)(this + 40)); /*0x6ea0b8*/
  *(_BYTE *)(this + 128) = 1; /*0x6ea0bd*/
  return result; /*0x6ea0c3*/
}


// ==== 0x006EA0D0  ObjectClass::SelectTeamProductionBuilding  this=ObjectClass  sig=csp ====
void __thiscall SelectTeamProductionBuilding(int this)
{
  _DWORD *v2; // ecx
  TagClass *v3; // esi
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // eax
  TagClass *v10; // ecx
  ObjectClass *v11; // edi
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // edx
  double v15; // st7
  int v16; // ebp
  int v17; // edi
  _DWORD *v18; // eax
  int v19; // esi
  int v20; // ebp
  int v21; // eax
  int v22; // [esp+2Ch] [ebp-68h] BYREF
  int v23; // [esp+30h] [ebp-64h]
  int v24; // [esp+34h] [ebp-60h]
  int v25; // [esp+38h] [ebp-5Ch]
  int *v26; // [esp+3Ch] [ebp-58h]
  int v27; // [esp+40h] [ebp-54h]
  int i; // [esp+44h] [ebp-50h]
  int v29; // [esp+48h] [ebp-4Ch] BYREF
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

  v2 = *(_DWORD **)(this + 40); /*0x6ea0de*/
  *(_BYTE *)(this + 127) = 0; /*0x6ea0e2*/
  SetLandTypeMap(v2); /*0x6ea0e6*/
  if ( *(int *)(this + 72) <= 0 ) /*0x6ea0f0*/
  {
    *(_DWORD *)(this + 52) = 0; /*0x6ea3c2*/
  }
  else
  {
    v3 = (TagClass *)(this + 52); /*0x6ea0f9*/
    TeamClass::FindClosestEnemy(this, (AbstractClass *)(this + 52), (AbstractClass *)(this + 56)); /*0x6ea100*/
    if ( !*(_DWORD *)(this + 52) ) /*0x6ea105*/
    {
      v4 = *(_DWORD *)(this + 56); /*0x6ea10a*/
      if ( !v4 ) /*0x6ea10e*/
        return; /*0x6ea10e*/
      *(_DWORD *)v3->__pad_0 = v4; /*0x6ea114*/
    }
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)v3->__pad_0 + 72))(*(_DWORD *)v3->__pad_0, &v33); /*0x6ea11f*/
    v27 = 0x7FFFFFFF; /*0x6ea124*/
    LOWORD(v22) = *v5 / 256; /*0x6ea13a*/
    v6 = *(_DWORD *)(this + 44); /*0x6ea143*/
    HIWORD(v22) = v5[1] / 256; /*0x6ea151*/
    v29 = v22; /*0x6ea15a*/
    v7 = 0; /*0x6ea161*/
    v31 = *(_DWORD *)(v6 + 120); /*0x6ea163*/
    for ( i = 0; i < v31; ++i ) /*0x6ea16d*/
    {
      v8 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 44) + 108) + 4 * v7); /*0x6ea179*/
      if ( v8 && !*(_BYTE *)(v8 + 129) && !*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 1016))(v8, 0) ) /*0x6ea19e*/
      {
        v9 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 72))(v8, v36); /*0x6ea1b0*/
        LOWORD(v23) = *v9 / 256; /*0x6ea1c3*/
        v10 = *(TagClass **)(this + 52); /*0x6ea1d2*/
        HIWORD(v23) = v9[1] / 256; /*0x6ea1da*/
        v22 = v23; /*0x6ea1e3*/
        v11 = (ObjectClass *)(*(int (__thiscall **)(TagClass *, _BYTE *))(*(_DWORD *)v10->__pad_0 + 72))(v10, v37); /*0x6ea1f5*/
        v12 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 72))(v8, v38); /*0x6ea1fc*/
        v13 = v12[1]; /*0x6ea203*/
        v33 = *v12 - *(_DWORD *)v11->__pad_0; /*0x6ea208*/
        v14 = v12[2]; /*0x6ea211*/
        v34 = v13 - *(_DWORD *)&v11->__pad_0[4]; /*0x6ea214*/
        v35 = v14 - *(_DWORD *)&v11->__pad_0[8]; /*0x6ea224*/
        v15 = Math::Sqrt((double)v33 * (double)v33 + (double)v35 * (double)v35 + (double)v34 * (double)v34); /*0x6ea249*/
        v16 = Math::RoundToInt(v15); /*0x6ea256*/
        v17 = v16 * (CellClass::GetTileData((__int16 *)&v22, *(_DWORD *)(this + 44)) + 1); /*0x6ea27a*/
        if ( *(_BYTE *)(*(_DWORD *)(v8 + 1312) + 5801) ) /*0x6ea274*/
          v17 /= 2; /*0x6ea288*/
        if ( v17 < v27 ) /*0x6ea28e*/
        {
          v18 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 52) + 72))( /*0x6ea29e*/
                            *(_DWORD *)(this + 52),
                            v39);
          v19 = *(_DWORD *)(this + 84); /*0x6ea2a3*/
          v26 = (int *)v19; /*0x6ea2a6*/
          v25 = -1; /*0x6ea2aa*/
          LOWORD(v24) = *v18 / 256; /*0x6ea2c0*/
          HIWORD(v24) = v18[1] / 256; /*0x6ea2d4*/
          for ( j = v24; v19; v19 = *(_DWORD *)(v19 + 1496) ) /*0x6ea2e3*/
          {
            v20 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v19 + 132))(v19) + 1532); /*0x6ea2ef*/
            if ( *(_BYTE *)(v19 + 144) /*0x6ea337*/
              && *(_DWORD *)(v19 + 108)
              && (*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] || !*(_BYTE *)(v19 + 129))
              && (*(_BYTE *)(v19 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 44))(v19) == 2)
              && v20 > v25 )
            {
              v26 = (int *)v19; /*0x6ea339*/
              v25 = v20; /*0x6ea33d*/
            }
          }
          v21 = *WalkPathfindingLine(v26, &v32, (int)&j, &v22, 2, 4); /*0x6ea367*/
          v22 = v21; /*0x6ea370*/
          if ( v21 != *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6580] ) /*0x6ea374*/
          {
            v27 = v17; /*0x6ea384*/
            v29 = v21; /*0x6ea388*/
          }
        }
      }
      v7 = i + 1; /*0x6ea394*/
    }
    *(_DWORD *)(this + 64) = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v29); /*0x6ea3b2*/
    TeamClass::UpdateMembers(this); /*0x6ea3b5*/
  }
}


// ==== 0x006EA3E0  TeamClass::UpdateReadinessState  this=TeamClass  sig=csp ====
char __thiscall sub_6EA3E0(void *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  char v6; // al
  int i; // edi
  char v8; // [esp+Fh] [ebp-1h]

  v8 = this->TeamClass_field_7A; /*0x6ea3ec*/
  v2 = TeamClass::SumMemberCounts(*(int **)(this->buildingType + 228)); /*0x6ea3f6*/
  v3 = this->u32_C; /*0x6ea3fb*/
  if ( v3 > 0 ) /*0x6ea404*/
  {
    this->unknown79 = v3 == v2; /*0x6ea40d*/
    if ( v3 == v2 ) /*0x6ea410*/
      this->spawnStatus = 1; /*0x6ea412*/
    v4 = this->buildingType; /*0x6ea416*/
    if ( *(_BYTE *)(v4 + 171) ) /*0x6ea419*/
    {
      if ( v2 <= 2 ) /*0x6ea424*/
        this->TeamClass_field_7A = v3 < v2; /*0x6ea443*/
      else
        this->TeamClass_field_7A = v3 <= v2 / 3; /*0x6ea439*/
    }
    else
    {
      this->TeamClass_field_7A = this->spawnStatus == 0; /*0x6ea44e*/
    }
    if ( *(_BYTE *)(v4 + 167) ) /*0x6ea451*/
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
  v6 = this->spawnStatus; /*0x6ea483*/
  this->unknown76 = 0; /*0x6ea486*/
  this->TeamClass_field_7A = 1; /*0x6ea48b*/
  this->unknown79 = 0; /*0x6ea48f*/
  this->spawnCell = 0; /*0x6ea492*/
  if ( !v6 ) /*0x6ea495*/
  {
LABEL_14:
    if ( v8 != this->TeamClass_field_7A ) /*0x6ea476*/
      this->TeamClass_field_7B = 1; /*0x6ea478*/
    return 1; /*0x6ea482*/
  }
  if ( this->unknown82 ) /*0x6ea497*/
  {
    for ( i = MEMORY[0x8B40D8] - 1; i >= 0; --i ) /*0x6ea4aa*/
    {
      if ( TeamClass::Update_0(*((void ***)MEMORY[0x8B40CC] + i), 23, 0, MEMORY[0xB0E948], 0, 0) && !MEMORY[0x8B40D8] ) /*0x6ea4cf*/
        break; /*0x6ea4cf*/
    }
  }
  if ( this ) /*0x6ea4d6*/
    (*(void (__thiscall **)(void *, int))(this->NeedsSaveOrLink)(this, 1); /*0x6ea4de*/
  return 0; /*0x6ea47c*/
}


// ==== 0x006EA4F0  CaptureManagerClass::AddMember  this=CaptureManagerClass  sig=csp ====
char __thiscall CaptureManagerClass::AddMember(void *this, TechnoClass *aP1)
{
  return TeamClass::AddMember((int)this, (IUnknown *)aP1, (IUnknown *)1); /*0x6ea4fc*/
}


// ==== 0x006EA500  TeamClass::AddMember  this=TeamClass  sig=csp ====
char __thiscall TeamClass::AddMember(int this, IUnknown *aP1, IUnknown *aP2)
{
  IUnknown *v3; // edi
  char result; // al
  char v6; // bl
  int v7; // ecx
  int eax12; // eax
  AbstractClass *v8; // ecx
  int v10; // edx

  v3 = aP1; /*0x6ea503*/
  if ( !aP1 ) /*0x6ea50b*/
    return 0; /*0x6ea50f*/
  v6 = (char)aP2; /*0x6ea515*/
  result = TeamClass::ValidateMember((_DWORD *)this, (TechnoClass *)aP1, (int *)&aP1, (char)aP2); /*0x6ea522*/
  if ( result ) /*0x6ea529*/
  {
    v7 = *(_DWORD *)&v3->__pad_524[176]; /*0x6ea531*/
    if ( v7 ) /*0x6ea539*/
      TeamClass::LiberateMember_Start(v7, v3, 0xFFFFFFFF, 0); /*0x6ea540*/
    if ( !v6 ) /*0x6ea547*/
      ++*(_DWORD *)(this + 4 * (_DWORD)aP1 + 136); /*0x6ea54d*/
    v3->__pad_524[357] = *(_DWORD *)(this + 84) == 0; /*0x6ea55c*/
    *(_DWORD *)&v3->__pad_524[180] = *(_DWORD *)(this + 84); /*0x6ea565*/
    *(_DWORD *)(this + 84) = v3; /*0x6ea56b*/
    *(_DWORD *)&v3->__pad_524[176] = this; /*0x6ea56e*/
    *(_DWORD *)&v3->__pad_1D8[60] = TeamTypeClass::GetGroup(*(_DWORD **)(this + 36)); /*0x6ea57c*/
    if ( *(_DWORD *)(this + 112) /*0x6ea5a8*/
      && (!*(_BYTE *)(*(_DWORD *)(this + 36) + 179)
       || *(int *)((*(int (__thiscall **)(IUnknown *))(v3->field_0 + 132))(v3) + 1504) > 0) )
    {
      ObjectClass::SetReference(v3, *(_DWORD *)(this + 112)); /*0x6ea5b0*/
    }
    ++*(_DWORD *)(this + 72); /*0x6ea5bb*/
    eax12 = (*(int (__thiscall **)(IUnknown *))(v3->field_0 + 704))(v3); /*0x6ea5c0*/
    v8 = *(AbstractClass **)(this + 52); /*0x6ea5c9*/
    *(_DWORD *)(this + 76) += eax12; /*0x6ea5d3*/
    if ( !v8 ) /*0x6ea5d6*/
      TeamClass::FindClosestEnemy(this, (AbstractClass *)(this + 52), (AbstractClass *)(this + 56)); /*0x6ea5df*/
    v10 = *(_DWORD *)(this + 36); /*0x6ea5e4*/
    *(_BYTE *)(this + 126) = 1; /*0x6ea5e9*/
    *(_BYTE *)(this + 125) = 1; /*0x6ea5ec*/
    v3->__pad_3BC[102] = *(_BYTE *)(v10 + 245); /*0x6ea5f5*/
    return 1; /*0x6ea5e7*/
  }
  return result; /*0x6ea50d*/
}


// ==== 0x006EA610  TeamClass::ValidateMember  this=TeamClass  sig=csp ====
bool __thiscall TeamClass::ValidateMember(_DWORD *this, TechnoClass *aP1, int *a2, char a4)
{
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  bool v8; // bl
  int queuedMission; // eax
  TechnoClass *v11; // [esp+10h] [ebp-8h] BYREF

  if ( this == (_DWORD *)aP1[1].queuedMission /*0x6ea693*/
    || !aP1
    || !aP1->isAliveFlag
    || !aP1->health
    || !*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] && aP1->inLimbo
    || aP1->focus != (void *)this->owner
    || Team::AllMembersValid((int *)aP1->__pad_0)
    && ((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) != 2
     || !*(_BYTE *)(aP1[1].ironTintTimer[2] + 3597)) )
  {
    return 0; /*0x6ea693*/
  }
  *a2 = 0; /*0x6ea6a5*/
  if ( *(int *)(*(_DWORD *)(this->buildingType + 228) + 156) > 0 ) /*0x6ea6bc*/
  {
    do /*0x6ea6f0*/
    {
      v5 = *a2; /*0x6ea6c0*/
      if ( *(_DWORD *)(*(_DWORD *)(this->buildingType + 228) + 8 * v5 + 168) == (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 136))(aP1) ) /*0x6ea6da*/
        break; /*0x6ea6da*/
      *a2 = v5 + 1; /*0x6ea6df*/
    }
    while ( v5 + 1 < *(_DWORD *)(*(_DWORD *)(this->buildingType + 228) + 156) ); /*0x6ea6f0*/
  }
  if ( *a2 == *(_DWORD *)(*(_DWORD *)(this->buildingType + 228) + 156) && !a4 ) /*0x6ea70b*/
    return 0; /*0x6ea70b*/
  if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 388))(aP1) != -1 ) /*0x6ea71e*/
  {
    v6 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 388))(aP1); /*0x6ea724*/
    if ( !IPersistStream::SetField(v6) ) /*0x6ea72c*/
      return 0; /*0x6ea72c*/
  }
  if ( !aP1->__pad_3F7[42] && !*(_BYTE *)(this->buildingType + 169) ) /*0x6ea746*/
    return 0; /*0x6ea746*/
  v7 = (_DWORD *)this->currentScript; /*0x6ea754*/
  v8 = 0; /*0x6ea757*/
  if ( v7 ) /*0x6ea75b*/
    v8 = *SessionClass::GetEntry(v7, (IUnknown *)&v11) == 8; /*0x6ea76c*/
  if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) == 2 ) /*0x6ea778*/
    v8 = 1; /*0x6ea77a*/
  return (aP1->__pad_3F7[43] || !*(_BYTE *)(this->buildingType + 169) || v8) /*0x6ea84c*/
      && !TeamClass::HasAnyMemberFlagged(aP1)
      && !FootClass::checkPassability(aP1)
      && !aP1->spawnManager
      && ((queuedMission = aP1[1].queuedMission) == 0
       || *(_DWORD *)(*(_DWORD *)(queuedMission + 36) + 180) < *(_DWORD *)(this->buildingType + 180))
      && ((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) != 2
       || !*(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)aP1->__pad_0 + 1016))(aP1, 0)
       || LODWORD(aP1->pitchAngle))
      && (*(this + *a2 + 34) < *(_DWORD *)(*(_DWORD *)(this->buildingType + 228) + 8 * *a2 + 164) || a4)
      && !aP1->spawnManager
      && aP1->isBerserk_duration_left == 0;
}


// ==== 0x006EA870  TeamClass::LiberateMember_Start  this=TeamClass  sig=csp ====
char __thiscall TeamClass::LiberateMember_Start(int this, IUnknown *aP1, unsigned int a3, AbstractClass *aP3)
{
  CellClass *v5; // eax
  #375 *v7; // ecx
  TeamTypeClass *v8; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // esi
  TeamTypeClass *v12; // eax
  int v13; // eax
  FootClass *v14; // esi
  char v15; // cl
  FootClass *v16; // eax
  char v17; // dl
  FootClass *nextTeamMember; // eax
  int v19; // eax
  FootClass *v20; // eax
  FootClass *v21; // [esp+8h] [ebp-4h]
  char v22; // [esp+14h] [ebp+8h]

  v5 = *(CellClass **)&aP1->__pad_524[176]; /*0x6ea879*/
  aP1->__pad_690[40] = 1; /*0x6ea87f*/
  if ( (CellClass *)this != v5 ) /*0x6ea888*/
    return 1; /*0x6ea88b*/
  if ( aP1->field_34 == *(_DWORD *)(this + 112) ) /*0x6ea89b*/
  {
    v7 = (#375 *)aP1->field_21C; /*0x6ea89d*/
    if ( v7 ) /*0x6ea8a7*/
    {
      if ( !(unsigned __int8)House::IsCurrentPlayer(v7) ) /*0x6ea8a9*/
        ObjectClass::SetReference(aP1, 0); /*0x6ea8b5*/
    }
  }
  if ( a3 == -1 ) /*0x6ea8c6*/
  {
    v8 = *(TeamTypeClass **)(this + 36); /*0x6ea8c8*/
    if ( v8 ) /*0x6ea8cd*/
    {
      v9 = *(_DWORD *)&v8[1].TeamTypeClass_field_70; /*0x6ea8cf*/
      if ( v9 ) /*0x6ea8d7*/
      {
        a3 = 0; /*0x6ea8df*/
        if ( *(int *)(v9 + 156) > 0 ) /*0x6ea8e5*/
        {
          v10 = 168; /*0x6ea8e7*/
          do /*0x6ea919*/
          {
            v11 = *(_DWORD *)(*(_DWORD *)(this + 36) + 228); /*0x6ea8f2*/
            if ( *(_DWORD *)(v10 + v11) == (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 136))(aP1) ) /*0x6ea903*/
              break; /*0x6ea903*/
            v10 += 8; /*0x6ea910*/
            ++a3; /*0x6ea915*/
          }
          while ( (signed int)a3 < *(_DWORD *)(v11 + 156) ); /*0x6ea919*/
        }
      }
    }
  }
  v12 = *(TeamTypeClass **)(this + 36); /*0x6ea91d*/
  if ( v12 ) /*0x6ea922*/
  {
    v13 = *(_DWORD *)&v12[1].TeamTypeClass_field_70; /*0x6ea924*/
    if ( v13 ) /*0x6ea92c*/
    {
      if ( a3 < *(_DWORD *)(v13 + 156) ) /*0x6ea93a*/
        --*(_DWORD *)(this + 4 * a3 + 136); /*0x6ea93c*/
    }
  }
  v14 = *(FootClass **)(this + 84); /*0x6ea943*/
  v15 = 0; /*0x6ea946*/
  v16 = 0; /*0x6ea948*/
  v17 = 0; /*0x6ea94a*/
  v22 = 0; /*0x6ea94e*/
  v21 = 0; /*0x6ea952*/
  if ( v14 ) /*0x6ea956*/
  {
    while ( !v17 || !v15 ) /*0x6ea96c*/
    {
      if ( v14 == (FootClass *)aP1 ) /*0x6ea974*/
      {
        if ( v16 ) /*0x6ea978*/
          v16->nextTeamMember = v14->nextTeamMember; /*0x6ea980*/
        else
          *(_DWORD *)(this + 84) = v14->nextTeamMember; /*0x6ea98e*/
        nextTeamMember = (FootClass *)v14->nextTeamMember; /*0x6ea991*/
        v14->nextTeamMember = 0; /*0x6ea997*/
        v14->team = 0; /*0x6ea99d*/
        v14->suspendedMission = -1; /*0x6ea9a3*/
        v14->lastDestination = 0; /*0x6ea9ad*/
        *(_DWORD *)&v14->isUncrushable = 0; /*0x6ea9b3*/
        v14 = nextTeamMember; /*0x6ea9bc*/
        --*(_DWORD *)(this + 72); /*0x6ea9c1*/
        v19 = (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 704))(aP1); /*0x6ea9cc*/
        v17 = 1; /*0x6ea9d5*/
        *(_DWORD *)(this + 76) -= v19; /*0x6ea9db*/
      }
      else
      {
        if ( v15 || (v22 = 0, v14->isTeamLeader) ) /*0x6ea9e4*/
          v22 = 1; /*0x6ea9f2*/
        v21 = v14; /*0x6ea9f7*/
        v14 = (FootClass *)v14->nextTeamMember; /*0x6ea9fb*/
      }
      if ( !v14 ) /*0x6eaa03*/
      {
        v15 = v22; /*0x6eaa09*/
        break; /*0x6eaa09*/
      }
      v16 = v21; /*0x6ea95e*/
      v15 = v22; /*0x6ea962*/
    }
  }
  if ( *(_DWORD *)&aP1->__pad_524[176] ) /*0x6eaa0d*/
    *(_DWORD *)&aP1->__pad_524[176] = 0; /*0x6eaa18*/
  if ( !*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] /*0x6eaa4a*/
    && aP1->__pad_8C[4]
    && !aP1->__pad_3BC[105]
    && !aP1->__pad_68[25]
    && !(_BYTE)aP3 )
  {
    (*(void (__thiscall **)(IUnknown *, _DWORD, int))(aP1->field_0 + 1156))(aP1, 0, 1); /*0x6eaa54*/
    v15 = v22; /*0x6eaa5a*/
  }
  if ( !v15 ) /*0x6eaa60*/
  {
    v20 = *(FootClass **)(this + 84); /*0x6eaa62*/
    if ( v20 ) /*0x6eaa67*/
    {
      v20->isTeamLeader = 1; /*0x6eaa69*/
      *(_DWORD *)(this + 52) = 0; /*0x6eaa70*/
    }
  }
  *(_BYTE *)(this + 126) = 1; /*0x6eaa73*/
  *(_BYTE *)(this + 125) = 1; /*0x6eaa77*/
  return 1; /*0x6ea88a*/
}


// ==== 0x006EAA90  TeamClass::RecruitMember  this=TeamClass  sig=csp ====
int __thiscall TeamClass::RecruitMember(_DWORD *this, int a2)
{
  TeamClass *v2; // edi
  TechnoClass *v3; // ebx
  CellClass *v4; // ecx
  char *v5; // eax
  TeamTypeClass *v6; // ecx
  _WORD *v7; // eax
  CellClass *WaypointCoords; // eax
  int v9; // ecx
  int eax6; // eax
  TeamTypeClass *v10; // ecx
  int v12; // ecx
  int v13; // ebp
  int eax9; // eax
  TechnoClass *v14; // esi
  int eax13; // eax
  TeamTypeClass *v16; // edi
  int v19; // ebp
  int eax23; // eax
  TechnoClass *v20; // esi
  int eax27; // eax
  TechnoClass *v22; // edi
  int eax37; // eax
  TechnoClass *v24; // esi
  int eax41; // eax
  TechnoClass *v26; // edi
  TechnoClass *DB; // esi
  int Group; // [esp+14h] [ebp-28h]
  int v31; // [esp+18h] [ebp-24h]
  int v32; // [esp+1Ch] [ebp-20h]
  int v33; // [esp+1Ch] [ebp-20h]
  int v34; // [esp+1Ch] [ebp-20h]
  int v35; // [esp+20h] [ebp-1Ch] BYREF
  int v36; // [esp+24h] [ebp-18h] BYREF
  int v37; // [esp+28h] [ebp-14h]
  int v38; // [esp+2Ch] [ebp-10h]
  _BYTE v39[12]; // [esp+30h] [ebp-Ch] BYREF

  v2 = (TeamClass *)this; /*0x6eaa97*/
  v3 = 0; /*0x6eaa99*/
  v4 = (CellClass *)this->spawnCell; /*0x6eaa9f*/
  if ( v4 ) /*0x6eaaa4*/
    v5 = (char *)(*(int (__thiscall **)(CellClass *, _BYTE *))(v4->mapCoords[0] + 72))(v4, v39); /*0x6eaaad*/
  else
    v5 = &MEMORY[0xB077F8].__pad_579C[6612]; /*0x6eaab2*/
  v36 = *(_DWORD *)v5; /*0x6eaab9*/
  v37 = *((_DWORD *)v5 + 1); /*0x6eaac4*/
  v6 = (TeamTypeClass *)v2->buildingType; /*0x6eaacc*/
  v38 = *((_DWORD *)v5 + 2); /*0x6eaacf*/
  v7 = TechnoClass::GetWaypointCoords(v6, &v35); /*0x6eaad3*/
  if ( *v7 != *(_WORD *)&MEMORY[0xB077F8].__pad_579C[6580] || v7[1] != *(_WORD *)&MEMORY[0xB077F8].__pad_579C[6582] ) /*0x6eaaef*/
  {
    WaypointCoords = (CellClass *)TechnoClass::GetWaypointCoords((_DWORD *)v2->buildingType, &v35); /*0x6eaaf9*/
    v9 = (SLOWORD(WaypointCoords->mapCoords[0]) << 8) + 128; /*0x6eab0b*/
    eax6 = (SHIWORD(WaypointCoords->mapCoords[0]) << 8) + 128; /*0x6eab11*/
    v36 = v9; /*0x6eab18*/
    v37 = eax6; /*0x6eab1c*/
    v38 = 0; /*0x6eab20*/
  }
  v10 = (TeamTypeClass *)v2->buildingType; /*0x6eab24*/
  v31 = 0; /*0x6eab2b*/
  if ( *(_DWORD *)(*(_DWORD *)&v10[1].TeamTypeClass_field_70 + 8 * a2 + 164) <= v2->countObjects[a2] ) /*0x6eab45*/
    return v31; /*0x6eae19*/
  Group = TeamTypeClass::GetGroup(v10); /*0x6eab54*/
  v12 = *(_DWORD *)(*((_DWORD *)v2->buildingType + 57) + 8 * a2 + 168); /*0x6eab61*/
  switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12) ) /*0x6eab7f*/
  {
    case 1: /*0x6eab7f*/
    case 40: /*0x6eab7f*/
      eax37 = 0; /*0x6ead07*/
      v34 = -1; /*0x6ead0b*/
      v35 = 0; /*0x6ead13*/
      if ( *(int *)&MEMORY[0x89F690].__pad_579C[62188] > 0 ) /*0x6ead17*/
      {
        do /*0x6eadc8*/
        {
          v24 = *(TechnoClass **)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62176] + 4 * eax37); /*0x6ead23*/
          if ( Group == -2 || v24->displayProductionTo[0] == Group || *((_BYTE *)v2->buildingType + 168) ) /*0x6ead3a*/
          {
            eax41 = Math::DistSq2D(v24, (TechnoClass *)&v36); /*0x6ead4b*/
            v26 = (TechnoClass *)eax41; /*0x6ead54*/
            if ( v24->displayProductionTo[0] != Group ) /*0x6ead5c*/
              v26 = (TechnoClass *)(eax41 + 12800); /*0x6ead5e*/
            if ( v24->focus == (void *)this->owner /*0x6eada4*/
              && v24[1].ironTintTimer[2] == *(_DWORD *)(*(_DWORD *)(this->buildingType + 228) + 8 * a2 + 168)
              && ((int)v26 < v34 || v34 == -1)
              && TeamClass::ValidateMember(this, v24, &a2, 0) )
            {
              v3 = v24; /*0x6eadad*/
              v34 = (int)v26; /*0x6eadaf*/
            }
            v2 = (TeamClass *)this; /*0x6eadb3*/
          }
          eax37 = ++v35; /*0x6eadc1*/
        }
        while ( v35 < *(int *)&MEMORY[0x89F690].__pad_579C[62188] ); /*0x6eadc8*/
        if ( v3 ) /*0x6eadd0*/
        {
          (*(void (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)v3->__pad_0 + 968))(v3, 0); /*0x6eadd8*/
          TeamClass::AddMember((int)v2, (IUnknown *)v3, 0); /*0x6eade3*/
          v31 = 1; /*0x6eadee*/
          DB = (TechnoClass *)CCINIClass::GetDB(&v3->inAirFlag); /*0x6eadfb*/
          if ( DB ) /*0x6eadff*/
          {
            do /*0x6eae17*/
            {
              TeamClass::AddMember((int)v2, (IUnknown *)DB, 0); /*0x6eae08*/
              DB = (TechnoClass *)DB->nextObject; /*0x6eae0d*/
            }
            while ( DB && (DB->abstractFlags & 4) != 0 ); /*0x6eae17*/
          }
        }
      }
      return v31; /*0x6eae17*/
    case 2: /*0x6eab7f*/
    case 3: /*0x6eab7f*/
      v19 = -1; /*0x6eac57*/
      eax23 = 0; /*0x6eac5a*/
      v33 = 0; /*0x6eac5e*/
      if ( *(int *)&MEMORY[0xA8D63C].__pad_BC0[420] <= 0 ) /*0x6eac62*/
        return v31; /*0x6eac62*/
      do /*0x6eace6*/
      {
        v20 = *(TechnoClass **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[408] + 4 * eax23); /*0x6eac6e*/
        if ( Group == -2 || v20->displayProductionTo[0] == Group || *((_BYTE *)v2->buildingType + 168) ) /*0x6eac85*/
        {
          eax27 = Math::DistSq2D(v20, (TechnoClass *)&v36); /*0x6eac96*/
          v22 = (TechnoClass *)eax27; /*0x6eac9f*/
          if ( v20->displayProductionTo[0] != Group ) /*0x6eaca7*/
            v22 = (TechnoClass *)(eax27 + 12800); /*0x6eaca9*/
          if ( ((int)v22 < v19 || v19 == -1) && TeamClass::ValidateMember(this, v20, &a2, 0) ) /*0x6eacc4*/
          {
            v3 = v20; /*0x6eaccd*/
            v19 = (int)v22; /*0x6eaccf*/
          }
          v2 = (TeamClass *)this; /*0x6eacd1*/
        }
        eax23 = ++v33; /*0x6eacdf*/
      }
      while ( v33 < *(int *)&MEMORY[0xA8D63C].__pad_BC0[420] ); /*0x6eace6*/
      if ( !v3 ) /*0x6eacea*/
        return v31; /*0x6eacea*/
      break; /*0x6eacea*/
    case 15: /*0x6eab7f*/
    case 16: /*0x6eab7f*/
      v13 = -1; /*0x6eab8c*/
      eax9 = 0; /*0x6eab8f*/
      v32 = 0; /*0x6eab93*/
      if ( (int)MEMORY[0xA83DF8] <= 0 ) /*0x6eab97*/
        return v31; /*0x6eab97*/
      do /*0x6eac1b*/
      {
        v14 = *(TechnoClass **)&MEMORY[0xA83DEC]->__pad_0[4 * eax9]; /*0x6eaba3*/
        if ( Group == -2 || v14->displayProductionTo[0] == Group || *((_BYTE *)v2->buildingType + 168) ) /*0x6eabba*/
        {
          eax13 = Math::DistSq2D(v14, (TechnoClass *)&v36); /*0x6eabcb*/
          v16 = (TeamTypeClass *)eax13; /*0x6eabd4*/
          if ( v14->displayProductionTo[0] != Group ) /*0x6eabdc*/
            v16 = (TeamTypeClass *)(eax13 + 12800); /*0x6eabde*/
          if ( ((int)v16 < v13 || v13 == -1) && TeamClass::ValidateMember(this, v14, &a2, 0) ) /*0x6eabf9*/
          {
            v3 = v14; /*0x6eac02*/
            v13 = (int)v16; /*0x6eac04*/
          }
          v2 = (TeamClass *)this; /*0x6eac06*/
        }
        eax9 = ++v32; /*0x6eac14*/
      }
      while ( v32 < (int)MEMORY[0xA83DF8] ); /*0x6eac1b*/
      if ( !v3 ) /*0x6eac1f*/
        return v31; /*0x6eac1f*/
      break; /*0x6eac1f*/
    default:
      return v31;
  }
  (*(void (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)v3->__pad_0 + 968))(v3, 0); /*0x6eac2b*/
  TeamClass::AddMember((int)v2, (IUnknown *)v3, 0); /*0x6eac36*/
  return 1; /*0x6eac3b*/
}


// ==== 0x006EAE60  TeamClass::ExecuteAction  this=TeamClass  sig=csp ====
int __thiscall TeamClass::_vt10(_DWORD *this, int a2, char a3)
{
  int result; // eax
  int v4; // edx

  result = a2; /*0x6eae60*/
  if ( a2 == this->tag ) /*0x6eae6c*/
    this->tag = 0; /*0x6eae6e*/
  v4 = this->firstUnit; /*0x6eae71*/
  if ( a2 == v4 && a3 ) /*0x6eae7c*/
    this->firstUnit = *(_DWORD *)(v4 + 1496); /*0x6eae84*/
  if ( a2 == this->owner ) /*0x6eae8a*/
    this->owner = 0; /*0x6eae8c*/
  if ( a2 == this->currentScript ) /*0x6eae92*/
    this->currentScript = 0; /*0x6eae94*/
  if ( this->focus == a2 ) /*0x6eae9a*/
    this->focus = 0; /*0x6eae9c*/
  if ( this->queuedFocus == a2 ) /*0x6eaea2*/
    this->queuedFocus = 0; /*0x6eaea4*/
  if ( this->spawnCell == a2 ) /*0x6eaeaa*/
    this->spawnCell = 0; /*0x6eaeac*/
  if ( this->buildingType == a2 ) /*0x6eaeb2*/
    this->buildingType = 0; /*0x6eaeb4*/
  if ( this->unknown38 == a2 ) /*0x6eaeba*/
    this->unknown38 = 0; /*0x6eaebc*/
  if ( this->unknown44 == a2 ) /*0x6eaec2*/
    this->unknown44 = 0; /*0x6eaec4*/
  if ( this->target == a2 ) /*0x6eaeca*/
    this->target = 0; /*0x6eaecc*/
  return result; /*0x6eaecf*/
}


// ==== 0x006EAEE0  TeamClass::FindClosestEnemy  this=AbstractClass  sig=csp ====
char __thiscall TeamClass::FindClosestEnemy(int this, AbstractClass *aP1, AbstractClass *aP2)
{
  int v3; // eax
  AbstractClass *v4; // esi
  int v5; // ebx
  int v6; // edi
  int v7; // ecx
  int v8; // ebp
  char *v9; // eax
  int v10; // esi
  _DWORD *v11; // ebx
  _DWORD *v12; // eax
  IUnknown *v13; // eax
  int v14; // eax
  int v15; // esi
  _DWORD *v16; // ebx
  _DWORD *v17; // eax
  IUnknown *v18; // eax
  double v19; // st7
  int v20; // eax
  char v21; // al
  int v22; // ebp
  int v23; // esi
  int *v24; // esi
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  void *v28; // eax
  BuildingTypeClass *v31; // [esp+2Ch] [ebp-38h]
  BuildingTypeClass *v32; // [esp+2Ch] [ebp-38h]
  BuildingTypeClass *v33; // [esp+2Ch] [ebp-38h]
  int v34; // [esp+30h] [ebp-34h]
  int v35; // [esp+30h] [ebp-34h]
  int v36; // [esp+34h] [ebp-30h] BYREF
  int v37; // [esp+38h] [ebp-2Ch]
  int v38; // [esp+3Ch] [ebp-28h]
  int v39; // [esp+40h] [ebp-24h] BYREF
  int v40; // [esp+44h] [ebp-20h]
  int v41; // [esp+48h] [ebp-1Ch]
  _BYTE v42[12]; // [esp+4Ch] [ebp-18h] BYREF
  _DWORD v43[3]; // [esp+58h] [ebp-Ch] BYREF

  LOBYTE(v3) = (_BYTE)aP2; /*0x6eaee3*/
  v4 = (AbstractClass *)this; /*0x6eaeea*/
  v5 = 0; /*0x6eaeec*/
  *(_DWORD *)aP2->__pad_0 = 0; /*0x6eaef2*/
  *(_DWORD *)aP1->__pad_0 = 0; /*0x6eaef9*/
  v6 = *(_DWORD *)(this + 84); /*0x6eaefb*/
  if ( v6 ) /*0x6eaf00*/
  {
    if ( *SessionClass::GetEntry(*(_DWORD **)(this + 40), (IUnknown *)&v36) == 10 ) /*0x6eaf16*/
    {
      v7 = 0; /*0x6eaf22*/
      v8 = -1; /*0x6eaf24*/
      v9 = 0; /*0x6eaf27*/
      v34 = 0; /*0x6eaf2b*/
      v31 = 0; /*0x6eaf2f*/
      if ( *(int *)&MEMORY[0x89F690].__pad_579C[62188] > 0 ) /*0x6eaf33*/
      {
        do /*0x6eb012*/
        {
          v10 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62176] + 4 * (_DWORD)v9); /*0x6eaf3f*/
          if ( v10 /*0x6eaf6c*/
            && *(_BYTE *)(v10 + 144)
            && *(_DWORD *)(v10 + 108)
            && (*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] || !*(_BYTE *)(v10 + 129)) )
          {
            if ( (unsigned __int8)HouseClass::IsAlliedWith(*(void **)(v10 + 540), *(IUnknown **)(this + 44)) ) /*0x6eaf88*/
            {
              if ( this != *(_DWORD *)(v10 + 1492) ) /*0x6eaf97*/
              {
                v11 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v10 + 72))(v10, &v39); /*0x6eafa7*/
                v12 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 72))(v6, v42); /*0x6eafb0*/
                v13 = Coord::Subtract( /*0x6eafd0*/
                        v43,
                        (IUnknown *)(*v12 - *v11),
                        (IUnknown *)(v12[1] - v11[1]),
                        (IUnknown *)(v12[2] - v11[2]));
                v36 = v13->field_0; /*0x6eafd7*/
                v37 = v13->field_4; /*0x6eafe2*/
                v38 = v13->field_8; /*0x6eafe9*/
                v14 = Coord::Length(&v36); /*0x6eafed*/
                if ( v8 == -1 || v14 < v8 ) /*0x6eaff9*/
                {
                  v8 = v14; /*0x6eaffb*/
                  v34 = v10; /*0x6eaffd*/
                }
              }
            }
          }
          v9 = &v31->vtable0[1]; /*0x6eb00b*/
          v31 = (BuildingTypeClass *)((char *)v31 + 1); /*0x6eb00e*/
        }
        while ( (int)v31 < *(int *)&MEMORY[0x89F690].__pad_579C[62188] ); /*0x6eb012*/
        v4 = (AbstractClass *)this; /*0x6eb018*/
        v7 = v34; /*0x6eb01c*/
      }
      v3 = 0; /*0x6eb026*/
      v32 = 0; /*0x6eb02a*/
      if ( (int)MEMORY[0xA83DF8] > 0 ) /*0x6eb02e*/
      {
        do /*0x6eb141*/
        {
          v15 = *(_DWORD *)&MEMORY[0xA83DEC]->__pad_0[4 * v3]; /*0x6eb03a*/
          if ( v15 /*0x6eb067*/
            && *(_BYTE *)(v15 + 144)
            && *(_DWORD *)(v15 + 108)
            && (*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] || !*(_BYTE *)(v15 + 129)) )
          {
            if ( (unsigned __int8)HouseClass::IsAlliedWith(*(void **)(v15 + 540), *(IUnknown **)(this + 44)) ) /*0x6eb083*/
            {
              if ( this != *(_DWORD *)(v15 + 1492) ) /*0x6eb096*/
              {
                v16 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v15 + 72))(v15, v43); /*0x6eb0aa*/
                v17 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 72))(v6, v42); /*0x6eb0b3*/
                v18 = Coord::Subtract( /*0x6eb0d3*/
                        &v39,
                        (IUnknown *)(*v17 - *v16),
                        (IUnknown *)(v17[1] - v16[1]),
                        (IUnknown *)(v17[2] - v16[2]));
                v36 = v18->field_0; /*0x6eb0dd*/
                v37 = v18->field_4; /*0x6eb0e4*/
                v38 = v18->field_8; /*0x6eb0ef*/
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
          v3 = (int)&v32->vtable0[1]; /*0x6eb13a*/
          v32 = (BuildingTypeClass *)((char *)v32 + 1); /*0x6eb13d*/
        }
        while ( (int)v32 < (int)MEMORY[0xA83DF8] ); /*0x6eb141*/
        v4 = (AbstractClass *)this; /*0x6eb147*/
        v7 = v34; /*0x6eb14b*/
      }
      if ( v7 ) /*0x6eb151*/
      {
        v21 = *(_BYTE *)(v7 + 1668); /*0x6eb157*/
        if ( v21 < 0 ) /*0x6eb15f*/
        {
          *(_DWORD *)aP1->__pad_0 = v7; /*0x6eb1a1*/
        }
        else
        {
          v36 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62224] + 4 * v21) + 40); /*0x6eb175*/
          *(_DWORD *)aP1->__pad_0 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v36); /*0x6eb188*/
        }
        v3 = *(_DWORD *)&v4[2].__pad_0[12]; /*0x6eb18a*/
        *(_DWORD *)aP2->__pad_0 = v3; /*0x6eb194*/
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
            if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] || (v3 = *(unsigned __int8 *)(v6 + 129), !(_BYTE)v3) ) /*0x6eb1f7*/
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
                  v33 = (BuildingTypeClass *)((char *)v33 + v26); /*0x6eb25e*/
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
                    v33 = (BuildingTypeClass *)((char *)v33 + v40); /*0x6eb2a6*/
                  }
                  if ( *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)v6 + 132))(v6) + 1504) <= 0 /*0x6eb2c8*/
                    || (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 132))(v6), !*(_BYTE *)(v3 + 3278)) )
                  {
                    v3 = BuildingClass::SquaredDistanceTo((void *)v6, *(AbstractClass **)(this + 64)); /*0x6eb2dc*/
                    if ( !v36 || v3 < v36 ) /*0x6eb2eb*/
                    {
                      v36 = v3; /*0x6eb2ed*/
                      v35 = v6; /*0x6eb2f1*/
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
        v37 = (int)v33 / v22; /*0x6eb328*/
        v28 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v36); /*0x6eb331*/
        *(_DWORD *)aP1->__pad_0 = v28; /*0x6eb33c*/
        if ( !v23 ) /*0x6eb33e*/
          v23 = *(_DWORD *)(this + 84); /*0x6eb34b*/
        v3 = (*(int (__thiscall **)(int, void *, int, int, _DWORD, int))(*(_DWORD *)v23 + 428))(v23, v28, -1, -1, 0, 1); /*0x6eb35a*/
        if ( v3 ) /*0x6eb362*/
          *(_DWORD *)aP1->__pad_0 = v23; /*0x6eb364*/
      }
      if ( v23 ) /*0x6eb368*/
      {
        *(_DWORD *)aP2->__pad_0 = v23; /*0x6eb36e*/
        LOBYTE(v3) = (_BYTE)aP2; /*0x6eb36a*/
      }
    }
  }
  return v3; /*0x6eb187*/
}


// ==== 0x006EB380  FootClass::LinkToTransporter  this=TechnoClass  sig=csp ====
void __thiscall FootClass::LinkToTransporter(int this, TechnoClass *aP1, int arg4, _DWORD *a3)
{
  int v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  int *v8; // eax
  int *v9; // edi
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  char v13[12]; // [esp+Ch] [ebp-Ch] BYREF

  if ( a3 && arg4 && !*(_BYTE *)(*(_DWORD *)(this + 36) + 175) ) /*0x6eb3a3*/
  {
    if ( *(_BYTE *)(this + 127) ) /*0x6eb3b1*/
    {
      v5 = *(_DWORD *)(this + 84); /*0x6eb3d0*/
      v6 = *(_DWORD **)(this + 84); /*0x6eb3d3*/
      if ( v6 ) /*0x6eb3d7*/
      {
        while ( v6 != a3 ) /*0x6eb3db*/
        {
          v6 = (_DWORD *)v6[374]; /*0x6eb3e1*/
          if ( !v6 ) /*0x6eb3e9*/
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
              v7 = *(_DWORD **)(this + 64); /*0x6eb40f*/
              if ( v7 != a3 ) /*0x6eb414*/
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
                  (*(void (__thiscall **)(_DWORD *))(*a3 + 44))(a3); /*0x6eb477*/
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


// ==== 0x006EB490  TeamClass::AttackCoordinator  this=AbstractClass  sig=csp ====
char __thiscall sub_6EB490(int *this)
{
  int *v1; // edi
  _DWORD *v2; // esi
  int v3; // ebp
  _DWORD *v4; // ebx
  int v5; // edi
  int v6; // ecx
  int v7; // edi
  _DWORD *v8; // esi
  int v9; // esi
  int v10; // eax
  _DWORD *Entry; // eax
  int v12; // esi
  char v13; // bl
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v19; // [esp+14h] [ebp-10h] BYREF
  int v20; // [esp+18h] [ebp-Ch]
  _DWORD v21[2]; // [esp+1Ch] [ebp-8h] BYREF

  v1 = this; /*0x6eb497*/
  if ( !this->uniqueId ) /*0x6eb49d*/
    this->uniqueId = this->q03C; /*0x6eb4a7*/
  v2 = (_DWORD *)this->u8_15; /*0x6eb4aa*/
  v3 = -1; /*0x6eb4ad*/
  v4 = v2; /*0x6eb4b2*/
  if ( v2 ) /*0x6eb4b4*/
  {
    do /*0x6eb514*/
    {
      v5 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v2 + 132))(v2) + 1532); /*0x6eb4c0*/
      if ( *((_BYTE *)v2 + 144) /*0x6eb506*/
        && v2[27]
        && (MEMORY[0xA8E7AC] || !*((_BYTE *)v2 + 129))
        && (*((_BYTE *)v2 + 1673) || (*(int (__thiscall **)(_DWORD *))(*v2 + 44))(v2) == 2)
        && v5 > v3 )
      {
        v4 = v2; /*0x6eb508*/
        v3 = v5; /*0x6eb50a*/
      }
      v2 = (_DWORD *)v2[374]; /*0x6eb50c*/
    }
    while ( v2 ); /*0x6eb514*/
    v1 = this; /*0x6eb516*/
  }
  v6 = v1[16]; /*0x6eb51a*/
  if ( v6
    && (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6) == 11
    && v1[21]
    && (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 2 )
  {
    v7 = v1[16]; /*0x6eb53e*/
    if ( v7 )
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 44))(v7) == 11 ? (_DWORD *)v7 : 0;
    else
      v8 = 0; /*0x6eb547*/
    v19 = 0; /*0x6eb567*/
    v20 = 0; /*0x6eb56b*/
    if ( Object::FindObjectCell(v8, &v19, 0) ) /*0x6eb56f*/
    {
      v19 = 0; /*0x6eb582*/
      v20 = 0; /*0x6eb586*/
      this->uniqueId = Object::FindObjectCell(v8, &v19, 0); /*0x6eb593*/
    }
    v1 = this; /*0x6eb596*/
  }
  if ( (int)MEMORY[0xA8ED84] % 8 == 4 ) /*0x6eb5ae*/
  {
    v9 = *v4; /*0x6eb5b3*/
    v10 = (*(int (__thiscall **)(_DWORD *, int, int))(*v4 + 740))(v4, v1[16], 1); /*0x6eb5ba*/
    if ( (*(int (__thiscall **)(_DWORD *, int, int))(v9 + 960))(v4, v1[16], v10) == 5 ) /*0x6eb5d0*/
      *((_BYTE *)v1 + 129) = 1; /*0x6eb5d2*/
  }
  Entry = (_DWORD *)v1[16]; /*0x6eb5d9*/
  if ( !Entry /*0x6eb605*/
    || (Entry = SessionClass::GetEntry((_DWORD *)v1[10], v21), v12 = v1[21], v13 = 0, v19 = *Entry, v20 = Entry[1], !v12) )
  {
LABEL_72:
    *((_BYTE *)v1 + 128) = 1; /*0x6eb85b*/
    return (char)Entry; /*0x6eb85b*/
  }
  do /*0x6eb851*/
  {
    if ( !*(_BYTE *)(v12 + 144) ) /*0x6eb60b*/
      goto LABEL_67; /*0x6eb60b*/
    if ( *(_DWORD *)(v12 + 108) && (MEMORY[0xA8E7AC] || !*(_BYTE *)(v12 + 129)) && !*(_BYTE *)(v12 + 1673) ) /*0x6eb63b*/
    {
      v14 = *SessionClass::GetEntry((_DWORD *)v1[10], v21); /*0x6eb656*/
      if ( v14 == 54 || v14 == 53 ) /*0x6eb660*/
        v15 = *((_DWORD *)MEMORY[0x8871E0] + 1480); /*0x6eb676*/
      else
        v15 = *((_DWORD *)MEMORY[0x8871E0] + 1479); /*0x6eb668*/
      if ( ObjectClass::DistanceTo((void *)v12, this->q034) <= v15 ) /*0x6eb68d*/
      {
        *(_BYTE *)(v12 + 1673) = 1; /*0x6eb6c5*/
      }
      else if ( !*(_DWORD *)(v12 + 1444) ) /*0x6eb68f*/
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 488))(v12, 2, 0); /*0x6eb6a1*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 968))(v12, 0); /*0x6eb6ad*/
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v12 + 1152))(v12, this->q034, 1); /*0x6eb6bd*/
      }
      v1 = this; /*0x6eb6cc*/
    }
    if ( *(_BYTE *)(v12 + 144) /*0x6eb714*/
      && *(_DWORD *)(v12 + 108)
      && (MEMORY[0xA8E7AC] || !*(_BYTE *)(v12 + 129))
      && (*(_BYTE *)(v12 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12) == 2) )
    {
      if ( v19 == 15 /*0x6eb733*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12) == 15
        && *(_BYTE *)(*(_DWORD *)(v12 + 1728) + 3774) )
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 488))(v12, 8, 0); /*0x6eb745*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 968))(v12, v1[16]); /*0x6eb753*/
      }
      else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 1 /*0x6eb7ad*/
             && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 7
             && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 8
             && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 17
             && ((*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 16
              || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 1252))(v12)) )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 628))(v12, 3); /*0x6eb7bd*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 488))(v12, 1, 0); /*0x6eb7cb*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 968))(v12, 0); /*0x6eb7d7*/
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v12 + 1152))(v12, 0, 1); /*0x6eb7e5*/
      }
      v16 = *(_DWORD *)(v12 + 692); /*0x6eb7eb*/
      if ( v16 != v1[16] && !v16 ) /*0x6eb7fa*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 968))(v12, v1[16]); /*0x6eb801*/
      Entry = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12); /*0x6eb80b*/
      if ( Entry != (_DWORD *)2 /*0x6eb82c*/
        || (Entry = (_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 1016))(v12, 0), !*Entry)
        || (Entry = *(_DWORD **)(v12 + 764), (int)Entry > 0) )
      {
LABEL_69:
        v13 = 1; /*0x6eb847*/
      }
    }
    else
    {
LABEL_67:
      Entry = (_DWORD *)v1[9]; /*0x6eb830*/
      if ( *((_BYTE *)Entry + 176) ) /*0x6eb833*/
      {
        LOBYTE(Entry) = *(_BYTE *)(v12 + 129); /*0x6eb83d*/
        if ( (_BYTE)Entry ) /*0x6eb845*/
          goto LABEL_69; /*0x6eb845*/
      }
    }
    v12 = *(_DWORD *)(v12 + 1496); /*0x6eb849*/
  }
  while ( v12 ); /*0x6eb851*/
  if ( !v13 ) /*0x6eb859*/
    goto LABEL_72; /*0x6eb859*/
  return (char)Entry; /*0x6eb862*/
}


// ==== 0x006EB870  HouseClass::EvaluateTarget  this=HouseClass  sig=csp ====
char __thiscall HouseClass_EvaluateTarget(int this)
{
  char v2; // bl
  int *v3; // esi
  int v4; // eax
  int v5; // ebp
  int v6; // eax
  int v7; // ebp
  _DWORD *v8; // eax
  int *v9; // eax
  int v10; // ebp
  void *v11; // eax
  int v13; // [esp+Ch] [ebp-2Ch]
  int v14; // [esp+10h] [ebp-28h] BYREF
  int v15; // [esp+14h] [ebp-24h] BYREF
  _BYTE v16[4]; // [esp+18h] [ebp-20h] BYREF
  int v17; // [esp+1Ch] [ebp-1Ch] BYREF
  int v18; // [esp+24h] [ebp-14h] BYREF
  _BYTE v19[12]; // [esp+2Ch] [ebp-Ch] BYREF

  v2 = 1; /*0x6eb878*/
  v3 = *(int **)(this + 84); /*0x6eb87a*/
  if ( !v3 ) /*0x6eb87f*/
    goto LABEL_34; /*0x6eb87f*/
  do /*0x6ebab6*/
  {
    if ( *((_BYTE *)v3 + 144) ) /*0x6eb88c*/
    {
      if ( v3[27] && (MEMORY[0xA8E7AC] || !*((_BYTE *)v3 + 129)) && !*((_BYTE *)v3 + 1673) ) /*0x6eb8bc*/
      {
        v4 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v17); /*0x6eb8d3*/
        if ( v4 == 54 || v4 == 53 ) /*0x6eb8dd*/
          v5 = *((_DWORD *)MEMORY[0x8871E0] + 1480); /*0x6eb8f3*/
        else
          v5 = *((_DWORD *)MEMORY[0x8871E0] + 1479); /*0x6eb8e5*/
        if ( ObjectClass::DistanceTo(v3, *(_DWORD *)(this + 52)) <= v5 ) /*0x6eb906*/
        {
          *((_BYTE *)v3 + 1673) = 1; /*0x6eb93e*/
        }
        else if ( !v3[361] ) /*0x6eb908*/
        {
          (*(void (__thiscall **)(int *, int, _DWORD))(*v3 + 488))(v3, 2, 0); /*0x6eb91a*/
          (*(void (__thiscall **)(int *, _DWORD))(*v3 + 968))(v3, 0); /*0x6eb926*/
          (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1152))(v3, *(_DWORD *)(this + 52), 1); /*0x6eb936*/
        }
      }
      if ( *((_BYTE *)v3 + 144) /*0x6eb989*/
        && v3[27]
        && (MEMORY[0xA8E7AC] || !*((_BYTE *)v3 + 129))
        && (*((_BYTE *)v3 + 1673) || (*(int (__thiscall **)(int *))(*v3 + 44))(v3) == 2) )
      {
        v6 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v18); /*0x6eb99c*/
        if ( v6 == 54 || v6 == 53 ) /*0x6eb9a6*/
          v7 = *((_DWORD *)MEMORY[0x8871E0] + 1480); /*0x6eb9bc*/
        else
          v7 = *((_DWORD *)MEMORY[0x8871E0] + 1479); /*0x6eb9ae*/
        if ( ObjectClass::DistanceTo(v3, *(_DWORD *)(this + 52)) <= v7 /*0x6eb9e4*/
          || (*(int (__thiscall **)(int *))(*v3 + 388))(v3) == 11 && v3[173] )
        {
          if ( (*(int (__thiscall **)(int *))(*v3 + 388))(v3) != 11 ) /*0x6eba90*/
          {
            (*(void (__thiscall **)(int *, int, _DWORD))(*v3 + 488))(v3, 5, 0); /*0x6eba9a*/
            (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1152))(v3, 0, 1); /*0x6ebaa8*/
          }
        }
        else if ( !v3[361] ) /*0x6eb9f2*/
        {
          v2 = 0; /*0x6eba08*/
          (*(void (__thiscall **)(int *, int, _DWORD))(*v3 + 488))(v3, 2, 0); /*0x6eba0a*/
          v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 52) + 72))( /*0x6eba1a*/
                           *(_DWORD *)(this + 52),
                           v19);
          LOWORD(v13) = *v8 / 256; /*0x6eba2d*/
          HIWORD(v13) = v8[1] / 256; /*0x6eba45*/
          v14 = v13; /*0x6eba52*/
          v9 = (int *)globalHelper_0DA020(v16, &v14); /*0x6eba5a*/
          v10 = *v3; /*0x6eba61*/
          v15 = *v9; /*0x6eba67*/
          v11 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v15); /*0x6eba73*/
          (*(void (__thiscall **)(int *, void *, int))(v10 + 1152))(v3, v11, 1); /*0x6eba7b*/
        }
      }
    }
    v3 = (int *)v3[374]; /*0x6ebaae*/
  }
  while ( v3 ); /*0x6ebab6*/
  if ( v2 == 1 ) /*0x6ebac0*/
LABEL_34:
    *(_BYTE *)(this + 117) = 0; /*0x6ebac2*/
  return v2; /*0x6ebac6*/
}


// ==== 0x006EBAD0  TeamClass::UpdateMembers  this=TeamClass  sig=csp ====
void __thiscall TeamClass_UpdateMembers(int this)
{
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // edi
  bool v9; // bl
  bool v10; // al
  char v11; // [esp+30h] [ebp-36h]
  char v12; // [esp+31h] [ebp-35h]
  int v13; // [esp+32h] [ebp-34h]
  int v14; // [esp+36h] [ebp-30h]
  int v15; // [esp+3Ah] [ebp-2Ch] BYREF
  int v16; // [esp+42h] [ebp-24h] BYREF
  _BYTE v17[8]; // [esp+4Ah] [ebp-1Ch] BYREF
  _BYTE v18[8]; // [esp+52h] [ebp-14h] BYREF
  _BYTE v19[12]; // [esp+5Ah] [ebp-Ch] BYREF

  v11 = 1; /*0x6ebad7*/
  v2 = *(_DWORD *)(this + 84); /*0x6ebadc*/
  v12 = 0; /*0x6ebadf*/
  if ( v2 ) /*0x6ebae6*/
  {
    if ( *(_DWORD *)(this + 64) || (v3 = *(_DWORD *)(this + 60), (*(_DWORD *)(this + 64) = v3) != 0) ) /*0x6ebafb*/
    {
      if ( !(unsigned __int8)TeamClass::ProcessMemberPositions(this) ) /*0x6ebb03*/
      {
        while ( 1 ) /*0x6ebb1a*/
        {
          if ( *(_BYTE *)(v2 + 144) /*0x6ebb4a*/
            && *(_DWORD *)(v2 + 108)
            && (MEMORY[0xA8E7AC] || !*(_BYTE *)(v2 + 129))
            && !*(_BYTE *)(v2 + 1673) )
          {
            v4 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v15); /*0x6ebb61*/
            if ( v4 == 54 || v4 == 53 ) /*0x6ebb6b*/
              v5 = *((_DWORD *)MEMORY[0x8871E0] + 1480); /*0x6ebb80*/
            else
              v5 = *((_DWORD *)MEMORY[0x8871E0] + 1479); /*0x6ebb73*/
            if ( ObjectClass::DistanceTo((void *)v2, *(_DWORD *)(this + 52)) <= v5 ) /*0x6ebb93*/
            {
              *(_BYTE *)(v2 + 1673) = 1; /*0x6ebc8d*/
            }
            else
            {
              if ( !*(_DWORD *)(v2 + 1444) ) /*0x6ebb99*/
              {
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v2 + 488))(v2, 2, 0); /*0x6ebbab*/
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 968))(v2, 0); /*0x6ebbb7*/
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 1152))(v2, *(_DWORD *)(this + 52), 1); /*0x6ebbc7*/
              }
              v11 = 0; /*0x6ebbcd*/
            }
          }
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 388))(v2) == 16 || *(_DWORD *)(v2 + 180) == 16 ) /*0x6ebbeb*/
            v11 = 0; /*0x6ebbed*/
          if ( !*(_BYTE *)(v2 + 144) /*0x6ebc5c*/
            || !*(_DWORD *)(v2 + 108)
            || !MEMORY[0xA8E7AC] && *(_BYTE *)(v2 + 129)
            || !*(_BYTE *)(v2 + 1673) && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) != 2
            || (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 388))(v2) == 16
            || *(_DWORD *)(v2 + 180) == 16 )
          {
            goto LABEL_80; /*0x6ebc5c*/
          }
          v6 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v16); /*0x6ebc6f*/
          if ( v6 == 54 || v6 == 53 ) /*0x6ebc79*/
            v13 = *((_DWORD *)MEMORY[0x8871E0] + 1480); /*0x6ebca4*/
          else
            v13 = *((_DWORD *)MEMORY[0x8871E0] + 1479); /*0x6ebc87*/
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 84))(v2) ) /*0x6ebcac*/
            v13 *= 2; /*0x6ebcba*/
          v12 = 1; /*0x6ebcc4*/
          v14 = ObjectClass::DistanceTo((void *)v2, *(_DWORD *)(this + 64)); /*0x6ebcd2*/
          if ( v14 <= v13 /*0x6ebcfc*/
            && ((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 456))(v2) >= 0
             || *(_DWORD *)ScriptClass::GetNextAction(v17) == 3) )
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) != 2 ) /*0x6ebd0c*/
              break; /*0x6ebd0c*/
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 464))(v2) <= 0 ) /*0x6ebd1a*/
              break; /*0x6ebd1a*/
            v7 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 72))(v2, v19); /*0x6ebd25*/
            if ( Coord::To_Cell(&MEMORY[0x87F7E8], v7) == *(void **)(this + 64) /*0x6ebd48*/
              || *(_DWORD *)ScriptClass::GetNextAction(v18) == 3 )
            {
              break; /*0x6ebd48*/
            }
          }
          if ( !*(_BYTE *)(*(_DWORD *)(this + 36) + 173) || !*(_DWORD *)(v2 + 692) ) /*0x6ebde9*/
            goto LABEL_55; /*0x6ebdf1*/
          if ( *(_BYTE *)(v2 + 1678) ) /*0x6ebdf3*/
          {
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 968))(v2, 0); /*0x6ebe07*/
LABEL_55:
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 388))(v2) != 2 ) /*0x6ebe1a*/
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v2 + 488))(v2, 2, 0); /*0x6ebe24*/
              if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 512))(v2) ) /*0x6ebe2e*/
                (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 492))(v2); /*0x6ebe3c*/
            }
            if ( !*(_DWORD *)(v2 + 1444) ) /*0x6ebe42*/
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 1152))(v2, *(_DWORD *)(this + 64), 1); /*0x6ebe56*/
            v8 = *(_DWORD *)(v2 + 1444); /*0x6ebe5c*/
            if ( v8 != *(_DWORD *)(this + 64) /*0x6ebe9a*/
              && (*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3434)
               || v8 != *(_DWORD *)(this + 64)
               && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 2
               && v8 == (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 444))(v2)) )
            {
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 1152))(v2, *(_DWORD *)(this + 64), 1); /*0x6ebea6*/
            }
            v11 = 0; /*0x6ebeac*/
LABEL_67:
            v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 2 /*0x6ebecf*/
              && *(_DWORD *)(v2 + 1444) == (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 444))(v2);
            v10 = (*(_BYTE *)(v2 + 20) & 1) != 0 /*0x6ebefb*/
               && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3434)
               && v14 < v13;
            if ( *(_DWORD *)(v2 + 1444) && !v9 && !v10 ) /*0x6ebf11*/
              v11 = 0; /*0x6ebf13*/
          }
LABEL_80:
          v2 = *(_DWORD *)(v2 + 1496); /*0x6ebf17*/
          if ( !v2 ) /*0x6ebf1f*/
          {
            if ( v12 && v11 ) /*0x6ebf35*/
            {
              if ( *(_BYTE *)(this + 127) ) /*0x6ebf37*/
                *(_BYTE *)(this + 128) = 1; /*0x6ebf3e*/
            }
            return; /*0x6ebf3e*/
          }
        }
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 388))(v2) == 2 ) /*0x6ebd5b*/
        {
          if ( !*(_DWORD *)(v2 + 1444) ) /*0x6ebd61*/
            goto LABEL_87; /*0x6ebd61*/
          if ( ObjectClass::DistanceTo((void *)v2, *(_DWORD *)(v2 + 1444)) <= *((_DWORD *)MEMORY[0x8871E0] + 1478) ) /*0x6ebd7f*/
          {
            if ( !*(_DWORD *)(v2 + 1652) ) /*0x6ebd85*/
              WinAPI::Wrapper(-2147467261); /*0x6ebd94*/
            if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v2 + 1652) + 16))(*(_DWORD *)(v2 + 1652)) ) /*0x6ebda2*/
            {
LABEL_87:
              if ( !*(_DWORD *)(v2 + 692) ) /*0x6ebdad*/
              {
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 1152))(v2, 0, 1); /*0x6ebdc3*/
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 1156))(v2, 0, 1); /*0x6ebdd1*/
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
char __thiscall sub_6EBF50(int this)
{
  char result; // al
  int v3; // esi
  int v4; // eax
  int v5; // ebp
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  double v12; // st7
  char v13; // [esp+23h] [ebp-2Dh]
  _DWORD v14[3]; // [esp+24h] [ebp-2Ch] BYREF
  int v15; // [esp+30h] [ebp-20h]
  int v16; // [esp+34h] [ebp-1Ch]
  _BYTE v17[12]; // [esp+38h] [ebp-18h] BYREF
  _BYTE v18[12]; // [esp+44h] [ebp-Ch] BYREF

  result = 0; /*0x6ebf5d*/
  v3 = *(_DWORD *)(this + 84); /*0x6ebf63*/
  v13 = 0; /*0x6ebf69*/
  if ( *(_BYTE *)(this + 124) ) /*0x6ebf5f*/
  {
    if ( v3 ) /*0x6ebf79*/
    {
      do /*0x6ec10e*/
      {
        if ( *(_BYTE *)(v3 + 144) /*0x6ebfc3*/
          && *(_DWORD *)(v3 + 108)
          && (MEMORY[0xA8E7AC] || !*(_BYTE *)(v3 + 129))
          && (*(_BYTE *)(v3 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 2) )
        {
          v4 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), v14); /*0x6ebfd6*/
          if ( v4 == 54 || v4 == 53 ) /*0x6ebfe0*/
            v5 = MEMORY[0x8871E0][1].?[1]; /*0x6ebff5*/
          else
            v5 = MEMORY[0x8871E0][1].?[0]; /*0x6ebfe8*/
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 2 ) /*0x6ec005*/
            v5 *= 3; /*0x6ec007*/
          if ( *(_BYTE *)(*(_DWORD *)(this + 36) + 167) /*0x6ec01c*/
            && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 1248))(v3) )
          {
            v5 /= 3; /*0x6ec034*/
          }
          v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 56) + 72))( /*0x6ec045*/
                           *(_DWORD *)(this + 56),
                           v17);
          v7 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 72))(v3, v18); /*0x6ec04e*/
          v8 = *v7 - *v6; /*0x6ec055*/
          v9 = v7[1]; /*0x6ec057*/
          v10 = v7[2]; /*0x6ec05a*/
          v14[2] = v8; /*0x6ec05d*/
          v11 = v10 - v6[2]; /*0x6ec06c*/
          v15 = v9 - v6[1]; /*0x6ec06e*/
          v16 = v11; /*0x6ec072*/
          v12 = Math::Sqrt((double)v8 * (double)v8 + (double)v15 * (double)v15 + (double)v11 * (double)v11); /*0x6ec09b*/
          if ( (int)Math::RoundToInt(v12) <= v5 ) /*0x6ec0aa*/
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 388))(v3) != 5 ) /*0x6ec0e8*/
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 488))(v3, 5, 0); /*0x6ec0f2*/
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v3 + 1152))(v3, 0, 1); /*0x6ec100*/
            }
          }
          else
          {
            if ( !*(_DWORD *)(v3 + 1444) ) /*0x6ec0ac*/
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 488))(v3, 2, 0); /*0x6ec0be*/
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v3 + 1152))(v3, *(_DWORD *)(this + 56), 1); /*0x6ec0ce*/
            }
            v13 = 1; /*0x6ec0d4*/
          }
        }
        v3 = *(_DWORD *)(v3 + 1496); /*0x6ec106*/
      }
      while ( v3 ); /*0x6ec10e*/
      result = v13; /*0x6ec114*/
    }
    *(_BYTE *)(this + 124) = result; /*0x6ec119*/
  }
  return result; /*0x6ebf6f*/
}


// ==== 0x006EC130  ObjectClass::Get  this=ObjectClass  sig=csp ====
char __thiscall sub_6EC130(int this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v6; // [esp+8h] [ebp-8h] BYREF

  if ( !a2 /*0x6ec173*/
    || !*(_BYTE *)(a2 + 144)
    || !*(_DWORD *)(a2 + 108)
    || !MEMORY[0xA8E7AC] && *(_BYTE *)(a2 + 129)
    || *(_BYTE *)(a2 + 1673) )
  {
    return 0; /*0x6ec17b*/
  }
  v3 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v6); /*0x6ec18f*/
  if ( v3 == 54 || v3 == 53 ) /*0x6ec199*/
    v4 = MEMORY[0x8871E0][1].?[1]; /*0x6ec1af*/
  else
    v4 = MEMORY[0x8871E0][1].?[0]; /*0x6ec1a1*/
  if ( ObjectClass::DistanceTo((void *)a2, *(_DWORD *)(this + 52)) <= v4 ) /*0x6ec1c3*/
  {
    *(_BYTE *)(a2 + 1673) = 1; /*0x6ec203*/
    return 0; /*0x6ec20b*/
  }
  if ( !*(_DWORD *)(a2 + 1444) ) /*0x6ec1c5*/
  {
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 488))(a2, 2, 0); /*0x6ec1d7*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 968))(a2, 0); /*0x6ec1e3*/
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a2 + 1152))(a2, *(_DWORD *)(this + 52), 1); /*0x6ec1f3*/
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

  result = MEMORY[0x8B40F8]; /*0x6ec253*/
  for ( i = 0; i < MEMORY[0x8B40F8]; ++i ) /*0x6ec265*/
  {
    v4 = *((_DWORD *)MEMORY[0x8B40EC] + i); /*0x6ec275*/
    if ( v4 && a2 == *(_DWORD *)(v4 + 44) && *(_DWORD *)(*(_DWORD *)(v4 + 36) + 180) < a1 ) /*0x6ec294*/
    {
      for ( j = *(_DWORD *)(v4 + 84); j; j = *(_DWORD *)(v4 + 84) ) /*0x6ec29b*/
        TeamClass::LiberateMember_Start(v4, j, 0xFFFFFFFF, 0); /*0x6ec2a4*/
      *(_BYTE *)(v4 + 126) = 1; /*0x6ec2b0*/
      *(_BYTE *)(v4 + 125) = 1; /*0x6ec2b3*/
      v6 = MEMORY[0xA8ED84]; /*0x6ec2bc*/
      v7 = Math::RoundToInt(*(double *)&MEMORY[0x8871E0][1].AITriggerFailureWeightDelta * 900.0); /*0x6ec2ce*/
      *(_BYTE *)(v4 + 131) = 1; /*0x6ec2da*/
      *(_DWORD *)(v4 + 100) = v6; /*0x6ec2e0*/
      *(_DWORD *)(v4 + 104) = v10; /*0x6ec2e2*/
      *(_DWORD *)(v4 + 108) = v7; /*0x6ec2e5*/
    }
    result = MEMORY[0x8B40F8]; /*0x6ec2e8*/
  }
  return result; /*0x6ec2f9*/
}


// ==== 0x006EC300  TechnoClass::IsWaypointHidden  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass_IsWaypointHidden(int this)
{
  _DWORD *Entry; // eax
  __int16 *Waypoint_Location; // eax
  bool result; // al
  _DWORD v5[2]; // [esp+4h] [ebp-8h] BYREF

  result = 0; /*0x6ec354*/
  if ( *(_BYTE *)(this + 127) ) /*0x6ec306*/
  {
    if ( (unsigned __int8)SessionClass::SetField(*(_DWORD *)(this + 40)) ) /*0x6ec310*/
    {
      Entry = SessionClass::GetEntry(*(_DWORD **)(this + 40), v5); /*0x6ec321*/
      if ( *Entry == 3 ) /*0x6ec330*/
      {
        Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location(v5, Entry[1]); /*0x6ec340*/
        if ( !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], Waypoint_Location, 1) ) /*0x6ec34b*/
          return 1; /*0x6ec30b*/
      }
    }
  }
  return result; /*0x6ec356*/
}


// ==== 0x006EC370  AnimTypeClass::method_6EC370  this=AnimTypeClass  sig=csp ====
char __thiscall sub_6EC370(_DWORD *this)
{
  int v1; // ecx
  char result; // al

  v1 = this->Spawns; /*0x6ec370*/
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


// ==== 0x006EC3A0  TeamClass::WakeUpAllMembers  this=TechnoClass  sig=csp ====
char __thiscall TeamClass::WakeUpAllMembers(_DWORD *this)
{
  char result; // al
  int i; // esi

  result = TeamClass::SelectMember((int)this, 0); /*0x6ec3a5*/
  for ( i = this->u32_54; i; i = *(_DWORD *)(i + 1496) ) /*0x6ec3af*/
  {
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)i + 968))(i, 0); /*0x6ec3b7*/
    *(_BYTE *)(i + 1672) = 1; /*0x6ec3bd*/
  }
  return result; /*0x6ec3ce*/
}


// ==== 0x006EC3D0  HouseClass::FindBestBuildingToRepair  this=HouseClass  sig=csp ====
_DWORD *__thiscall sub_6EC3D0(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // ebx
  _DWORD *v3; // ebp
  int v4; // edi

  v1 = (_DWORD *)this->repairStationsCount; /*0x6ec3d3*/
  v2 = -1; /*0x6ec3d6*/
  v3 = v1; /*0x6ec3d9*/
  if ( !v1 ) /*0x6ec3dd*/
    return 0; /*0x6ec447*/
  do /*0x6ec43e*/
  {
    v4 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v1 + 132))(v1) + 1532); /*0x6ec3ea*/
    if ( *((_BYTE *)v1 + 144) /*0x6ec430*/
      && v1[27]
      && (MEMORY[0xA8E7AC] || !*((_BYTE *)v1 + 129))
      && (*((_BYTE *)v1 + 1673) || (*(int (__thiscall **)(_DWORD *))(*v1 + 44))(v1) == 2)
      && v4 > v2 )
    {
      v3 = v1; /*0x6ec432*/
      v2 = v4; /*0x6ec434*/
    }
    v1 = (_DWORD *)v1[374]; /*0x6ec436*/
  }
  while ( v1 ); /*0x6ec43e*/
  return v3; /*0x6ec443*/
}


// ==== 0x006EC450  TeamClass::SaveLoad_Prefix  this=TeamClass  sig=csp ====
int __stdcall TeamClass::SaveLoad_Prefix(AbstractClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x6ec45b*/
  if ( result >= 0 ) /*0x6ec462*/
  {
    if ( aP0 ) /*0x6ec46a*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x6ec473*/
      __4type_info_AAEAAV0_ABV0__Z(&aP0[2].referenceCount, (int)&aP1); /*0x6ec480*/
      *(_DWORD *)aP0->__pad_0 = &TeamClass::`vftable'; /*0x6ec485*/
      *(_DWORD *)&aP0->__pad_0[4] = &TeamClass::`vftable'; /*0x6ec48b*/
      *(_DWORD *)&aP0->__pad_0[8] = &TeamClass::`vftable'; /*0x6ec492*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_TeamClass; /*0x6ec499*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]); /*0x6ec4a9*/
    ObjectPtr::RegisterForTracking( /*0x6ec4b7*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( /*0x6ec4c5*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[8]);
    ObjectPtr::RegisterForTracking( /*0x6ec4d3*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[3].__pad_0[4]);
    ObjectPtr::RegisterForTracking( /*0x6ec4e1*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].__pad_0[12]);
    ObjectPtr::RegisterForTracking( /*0x6ec4ef*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].abstractFlags);
    ObjectPtr::RegisterForTracking( /*0x6ec4fd*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].referenceCount);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].uniqueId); /*0x6ec50b*/
    ObjectPtr::RegisterForTracking( /*0x6ec519*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].nextArrayIndex);
    ObjectPtr::RegisterForTracking( /*0x6ec527*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[12]);
    ObjectPtr::RegisterForTracking( /*0x6ec535*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].NeedsSaveOrLink);
    return 0; /*0x6ec53a*/
  }
  return result; /*0x6ec53c*/
}


// ==== 0x006EC540  TeamClass::SaveLoad_Prefix_0  this=TeamClass  sig=csp ====
int __stdcall TeamClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6ec54f*/
  if ( result >= 0 ) /*0x6ec556*/
    return 0; /*0x6ec558*/
  return result; /*0x6ec55a*/
}


// ==== 0x006EC560  TeamClass::ddtor  this=TeamClass  sig=csp ====
int __stdcall TeamClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6ec566*/
    return -2147467261; /*0x6ec568*/
  *a2 = 237448655; /*0x6ec576*/
  a2[1] = 298949647; /*0x6ec57e*/
  a2[2] = -1610610249; /*0x6ec587*/
  a2[3] = -777003740; /*0x6ec590*/
  return 0; /*0x6ec56d*/
}


// ==== 0x006EC5A0  TeamClass::PowerDrainUpdate  this=TeamClass  sig=csp ====
int __thiscall TeamClass::_vt13(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // eax
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

  AbstractClass::ProcessPower((#378 *)this); /*0x6ec5a9*/
  v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 36) + 4) + 16))(*(_DWORD *)(this + 36) + 4); /*0x6ec5b7*/
  Power::TimerProcess(v3); /*0x6ec5bd*/
  v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 44) + 4) + 16))(*(_DWORD *)(this + 44) + 4); /*0x6ec5cb*/
  Power::TimerProcess(v4); /*0x6ec5d1*/
  v5 = *(_DWORD *)(this + 56); /*0x6ec5d6*/
  if ( v5 ) /*0x6ec5db*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x6ec5e4*/
    Power::TimerProcess(v6); /*0x6ec5ea*/
  }
  Power::TimerProcess(*(_DWORD *)(this + 72)); /*0x6ec5f5*/
  Power::TimerProcess(*(_DWORD *)(this + 76)); /*0x6ec600*/
  v7 = *(_DWORD *)(this + 84); /*0x6ec605*/
  if ( v7 ) /*0x6ec60a*/
  {
    v8 = (*(int (__stdcall **)(int))(*(_DWORD *)(v7 + 4) + 16))(v7 + 4); /*0x6ec613*/
    Power::TimerProcess(v8); /*0x6ec619*/
  }
  v9 = *(_DWORD *)(this + 88); /*0x6ec61e*/
  v10 = *(_DWORD *)(this + 96); /*0x6ec621*/
  if ( v9 != -1 ) /*0x6ec627*/
  {
    if ( (int)MEMORY[0xA8ED84] - v9 >= v10 ) /*0x6ec633*/
      v10 = 0; /*0x6ec639*/
    else
      v10 -= (int)MEMORY[0xA8ED84] - v9; /*0x6ec635*/
  }
  Power::TimerProcess(v10); /*0x6ec63e*/
  v11 = *(_DWORD *)(this + 100); /*0x6ec643*/
  v12 = *(_DWORD *)(this + 108); /*0x6ec646*/
  if ( v11 != -1 ) /*0x6ec64c*/
  {
    if ( (int)MEMORY[0xA8ED84] - v11 >= v12 ) /*0x6ec658*/
      v12 = 0; /*0x6ec65e*/
    else
      v12 -= (int)MEMORY[0xA8ED84] - v11; /*0x6ec65a*/
  }
  Power::TimerProcess(v12); /*0x6ec663*/
  v13 = *(_DWORD *)(this + 112); /*0x6ec668*/
  if ( v13 ) /*0x6ec66d*/
  {
    v14 = (*(int (__stdcall **)(int))(*(_DWORD *)(v13 + 4) + 16))(v13 + 4); /*0x6ec676*/
    v13 = Power::TimerProcess(v14); /*0x6ec67c*/
  }
  LOBYTE(v13) = *(_BYTE *)(this + 119); /*0x6ec681*/
  Power::FlagProcess(a2, v13); /*0x6ec687*/
  LOBYTE(v15) = *(_BYTE *)(this + 120); /*0x6ec68c*/
  Power::FlagProcess(a2, v15); /*0x6ec692*/
  LOBYTE(v16) = *(_BYTE *)(this + 121); /*0x6ec697*/
  v17 = Power::FlagProcess(a2, v16); /*0x6ec69d*/
  LOBYTE(v17) = *(_BYTE *)(this + 122); /*0x6ec6a2*/
  Power::FlagProcess(a2, v17); /*0x6ec6a8*/
  LOBYTE(v18) = *(_BYTE *)(this + 123); /*0x6ec6ad*/
  Power::FlagProcess(a2, v18); /*0x6ec6b3*/
  LOBYTE(v19) = *(_BYTE *)(this + 124); /*0x6ec6b8*/
  v20 = Power::FlagProcess(a2, v19); /*0x6ec6be*/
  LOBYTE(v20) = *(_BYTE *)(this + 125); /*0x6ec6c3*/
  Power::FlagProcess(a2, v20); /*0x6ec6c9*/
  LOBYTE(v21) = *(_BYTE *)(this + 126); /*0x6ec6ce*/
  Power::FlagProcess(a2, v21); /*0x6ec6d4*/
  LOBYTE(v22) = *(_BYTE *)(this + 127); /*0x6ec6d9*/
  v23 = Power::FlagProcess(a2, v22); /*0x6ec6df*/
  LOBYTE(v23) = *(_BYTE *)(this + 128); /*0x6ec6e4*/
  Power::FlagProcess(a2, v23); /*0x6ec6ed*/
  LOBYTE(v24) = *(_BYTE *)(this + 130); /*0x6ec6f2*/
  Power::FlagProcess(a2, v24); /*0x6ec6fb*/
  LOBYTE(v25) = *(_BYTE *)(this + 131); /*0x6ec700*/
  Power::FlagProcess(a2, v25); /*0x6ec709*/
  return Checksummer::Add_Buffer((unsigned int *)a2, (unsigned __int8 *)(this + 136), 24); /*0x6ec71e*/
}


// ==== 0x006EC7D0  TeamClass::MoveTeamToWaypoint  this=TeamClass  sig=csp ====
void __thiscall TeamClass::MoveTeamToWaypoint(int **this, ScriptClass *aP1, TeamClass *aP2)
{
  int **v3; // ebp
  FootClass *v4; // esi
  int v5; // ebx
  FootClass *v6; // edi
  int v7; // ebp
  AbstractClass *v8; // eax
  _DWORD *Entry; // eax
  IUnknown *Waypoint_Location; // eax
  int v11; // ebx
  void *v12; // eax
  int v13; // eax
  int v14; // eax
  AbstractClass *v15; // [esp+Ch] [ebp-10h]
  _DWORD v16[2]; // [esp+14h] [ebp-8h] BYREF

  v3 = this; /*0x6ec7d8*/
  v16[0] = this; /*0x6ec7dc*/
  if ( (_BYTE)aP2 ) /*0x6ec7e0*/
  {
    v4 = (FootClass *)this->u8_15; /*0x6ec7e8*/
    v5 = -1; /*0x6ec7eb*/
    v6 = v4; /*0x6ec7ef*/
    if ( v4 ) /*0x6ec7f3*/
    {
      do /*0x6ec853*/
      {
        v7 = *(_DWORD *)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)v4->__pad_0 + 132))(v4) + 1532); /*0x6ec7ff*/
        if ( v4->isAliveFlag /*0x6ec845*/
          && v4->health
          && (*(_DWORD *)&HouseClass_Player.__pad_5568[21752] || !v4->inLimbo)
          && (v4->isTeamLeader || (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v4->__pad_0 + 44))(v4) == 2)
          && v7 > v5 )
        {
          v6 = v4; /*0x6ec847*/
          v5 = v7; /*0x6ec849*/
        }
        v4 = (FootClass *)v4->nextTeamMember; /*0x6ec84b*/
      }
      while ( v4 ); /*0x6ec853*/
      v3 = (int **)v16[0]; /*0x6ec855*/
    }
    aP2 = (TeamClass *)*ScenarioClass::Get_Waypoint_Location( /*0x6ec87d*/
                          *(char **)&HouseClass_Player.__pad_5568[8060],
                          &aP1,
                          *(_DWORD *)&aP1->__pad_0[4]);
    v8 = (AbstractClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP2); /*0x6ec881*/
    TeamClass::SelectMember((int)v3, v8); /*0x6ec889*/
    if ( !*((_BYTE *)v3 + 127) /*0x6ec8d3*/
      || !SessionClass::SetField(v3[10])
      || (Entry = SessionClass::GetEntry(v3[10], (IUnknown *)v16), *Entry != 3)
      || (Waypoint_Location = (IUnknown *)ScenarioClass::Get_Waypoint_Location(
                                            *(char **)&HouseClass_Player.__pad_5568[8060],
                                            &aP1,
                                            Entry[1]),
          LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], Waypoint_Location, (TechnoClass *)1)) )
    {
      v11 = *(_DWORD *)v6->__pad_0; /*0x6ec8dc*/
      v12 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP2); /*0x6ec8f0*/
      if ( (*(int (__thiscall **)(FootClass *, void *, int, int, _DWORD, _DWORD))(v11 + 428))(v6, v12, -1, -1, 0, 0) ) /*0x6ec8f8*/
      {
        v13 = *(_DWORD *)v6->__pad_0; /*0x6ec916*/
        aP1 = 0; /*0x6ec91e*/
        v14 = (*(int (__thiscall **)(FootClass *))(v13 + 132))(v6); /*0x6ec928*/
        aP2 = (TeamClass *)*LayerClass::Pathfinding_Find( /*0x6ec94b*/
                              (IUnknown *)&stru_87C374.__pad_14B0[8132],
                              (IUnknown *)&aP2,
                              (IUnknown *)v16,
                              (IUnknown *)&aP2,
                              *(IUnknown **)(v14 + 1660),
                              (IUnknown *)0xFFFFFFFF,
                              0,
                              0,
                              (IUnknown *)1,
                              (IUnknown *)1,
                              0,
                              0,
                              0,
                              (IUnknown *)1,
                              (IUnknown *)&aP1,
                              0,
                              0);
      }
    }
    if ( aP2 == *(TeamClass **)&stru_B05488.__pad_579C[15652] ) /*0x6ec95e*/
    {
      TeamClass::SelectMember((int)v3, 0); /*0x6ec984*/
    }
    else
    {
      v15 = (AbstractClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP2); /*0x6ec97d*/
      TeamClass::SelectMember((int)v3, v15); /*0x6ec97e*/
    }
  }
  TeamClass::UpdateMembers((int)v3); /*0x6ec98b*/
}


// ==== 0x006EC9A0  TeamClass::SelectWaypointTarget  this=TeamClass  sig=csp ====
char __thiscall TeamClass::SelectWaypointTarget(int this, TeamClass *aP1, char a3)
{
  TechnoClass *CellFromArray; // eax
  TechnoClass *v5; // esi
  char v6; // al
  TechnoClass *ObjectCell; // eax
  FootClass *v8; // esi
  char result; // al
  _DWORD v10[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a3 ) /*0x6ec9ad*/
  {
    CellFromArray = (TechnoClass *)ScenarioClass::GetCellFromArray( /*0x6ec9bd*/
                                     *(__int16 **)&HouseClass_Player.__pad_5568[8060],
                                     *(ScenarioClass **)&aP1->__pad_0[4]);
    v5 = CellFromArray; /*0x6ec9c2*/
    if ( CellFromArray ) /*0x6ec9c6*/
    {
      if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)CellFromArray->__pad_0 + 44))(CellFromArray) == 11 ) /*0x6ec9d2*/
      {
        v6 = BYTE1(v5->currentRank) & 1; /*0x6ec9e1*/
        v10[0] = 0; /*0x6ec9e3*/
        v10[1] = 0; /*0x6ec9ef*/
        ObjectCell = (TechnoClass *)Object::FindObjectCell(v5, (TechnoClass *)v10, v6); /*0x6ec9f7*/
        if ( ObjectCell ) /*0x6ec9fe*/
          v5 = ObjectCell; /*0x6eca00*/
      }
    }
    TeamClass::SelectMember(this, (AbstractClass *)v5); /*0x6eca05*/
  }
  if ( *(_DWORD *)(this + 60) && (v8 = *(FootClass **)(this + 84)) != 0 ) /*0x6eca16*/
  {
    while ( *(int *)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)v8->__pad_0 + 132))(v8) + 1668) > 0 /*0x6eca34*/
         && SLODWORD(v8->pitchAngle) <= 0 )
    {
      v8 = (FootClass *)v8->nextTeamMember; /*0x6eca36*/
      if ( !v8 ) /*0x6eca3e*/
        goto LABEL_12; /*0x6eca3e*/
    }
    return TeamClass::AttackCoordinator((int *)this); /*0x6eca5a*/
  }
  else
  {
LABEL_12:
    result = TeamClass::SelectMember(this, 0); /*0x6eca40*/
    *(_BYTE *)(this + 128) = 1; /*0x6eca49*/
  }
  return result; /*0x6eca50*/
}


// ==== 0x006ECA70  TeamClass::SelectAttackTarget  this=TeamClass  sig=csp ====
char __thiscall TeamClass::SelectAttackTarget(int this, ScriptClass *aP1, char a3)
{
  TechnoClass *CellFromArray; // eax
  TechnoClass *v5; // esi
  char v6; // al
  int ObjectCell; // eax
  AbstractClass *v8; // esi
  int *v9; // esi
  char result; // al
  _DWORD v11[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a3 ) /*0x6eca7d*/
  {
    CellFromArray = (TechnoClass *)ScenarioClass::GetCellFromArray( /*0x6eca8d*/
                                     *(__int16 **)&HouseClass_Player.__pad_5568[8060],
                                     *(ScenarioClass **)&aP1->__pad_0[4]);
    v5 = CellFromArray; /*0x6eca92*/
    if ( !CellFromArray /*0x6ecadc*/
      || (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)CellFromArray->__pad_0 + 44))(CellFromArray) != 11
      || (v6 = BYTE1(v5->currentRank) & 1,
          v11[0] = 0,
          v11[1] = 0,
          ObjectCell = Object::FindObjectCell(v5, (TechnoClass *)v11, v6),
          (v8 = (AbstractClass *)ObjectCell) == 0)
      || (*(int (__thiscall **)(int))(*(_DWORD *)ObjectCell + 44))(ObjectCell) != 6 )
    {
      v8 = 0; /*0x6ecade*/
    }
    TeamClass::SelectMember(this, v8); /*0x6ecae3*/
  }
  if ( *(_DWORD *)(this + 60) && (v9 = *(int **)(this + 84)) != 0 ) /*0x6ecaf4*/
  {
    while ( *(int *)((*(int (__thiscall **)(int *))(*v9 + 132))(v9) + 1668) > 0 && v9[191] <= 0 ) /*0x6ecb12*/
    {
      v9 = (int *)v9[374]; /*0x6ecb14*/
      if ( !v9 ) /*0x6ecb1c*/
        goto LABEL_13; /*0x6ecb1c*/
    }
    return TeamClass::AttackCoordinator((int *)this); /*0x6ecb38*/
  }
  else
  {
LABEL_13:
    result = TeamClass::SelectMember(this, 0); /*0x6ecb1e*/
    *(_BYTE *)(this + 128) = 1; /*0x6ecb27*/
  }
  return result; /*0x6ecb2e*/
}


// ==== 0x006ECCE0  TeamClass::MoveToCellAndAttack  this=TeamClass  sig=csp ====
void __thiscall TeamClass::MoveToCellAndAttack(void *this, ScriptClass *aP1, char a3)
{
  TeamClass *v3; // edi
  AbstractClass *CellFromArray; // esi
  _DWORD *Entry; // eax
  int *firstUnit; // esi
  int v7; // ebp
  int *v8; // ebx
  int v9; // edi
  int v10; // edx
  AbstractClass *v11; // eax
  _BYTE *focus; // eax
  int v14; // [esp+10h] [ebp-14h] BYREF
  _DWORD v15[3]; // [esp+18h] [ebp-Ch] BYREF
  AbstractClass *aP1a; // [esp+28h] [ebp+4h]

  v3 = (TeamClass *)this; /*0x6eccea*/
  CellFromArray = (AbstractClass *)ScenarioClass::GetCellFromArray( /*0x6eccff*/
                                     *(__int16 **)&HouseClass_Player.__pad_5568[8060],
                                     *(ScenarioClass **)&aP1->__pad_0[4]);
  aP1a = CellFromArray; /*0x6ecd07*/
  if ( a3 ) /*0x6ecd0b*/
    TeamClass::SelectMember((int)v3, CellFromArray); /*0x6ecd10*/
  if ( !v3->focus ) /*0x6ecd15*/
  {
    Entry = SessionClass::GetEntry((_DWORD *)v3->currentScript, (IUnknown *)&v14); /*0x6ecd24*/
    v15[0] = *Entry; /*0x6ecd2b*/
    if ( Entry[1] < 0x2BEu ) /*0x6ecd36*/
      TeamClass::SelectMember((int)v3, CellFromArray); /*0x6ecd3b*/
  }
  if ( !(*(_DWORD *)&HouseClass_Player.__pad_5568[23248] /*0x6ecd5f*/
       % (int)Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4432) * 900.0)) )
  {
    firstUnit = (int *)v3->firstUnit; /*0x6ecd69*/
    v7 = -1; /*0x6ecd6d*/
    v8 = firstUnit; /*0x6ecd70*/
    if ( firstUnit ) /*0x6ecd74*/
    {
      do /*0x6ecdd4*/
      {
        v9 = *(_DWORD *)((*(int (__thiscall **)(int *))(*firstUnit + 132))(firstUnit) + 1532); /*0x6ecd80*/
        if ( *((_BYTE *)firstUnit + 144) /*0x6ecdc6*/
          && firstUnit[27]
          && (*(_DWORD *)&HouseClass_Player.__pad_5568[21752] || !*((_BYTE *)firstUnit + 129))
          && (*((_BYTE *)firstUnit + 1673) || (*(int (__thiscall **)(int *))(*firstUnit + 44))(firstUnit) == 2)
          && v9 > v7 )
        {
          v8 = firstUnit; /*0x6ecdc8*/
          v7 = v9; /*0x6ecdca*/
        }
        firstUnit = (int *)firstUnit[374]; /*0x6ecdcc*/
      }
      while ( firstUnit ); /*0x6ecdd4*/
      v3 = (TeamClass *)this; /*0x6ecdd6*/
    }
    if ( v8 ) /*0x6ecddd*/
    {
      v15[0] = v8[39]; /*0x6ecde9*/
      v10 = *v8; /*0x6ecded*/
      v15[1] = v8[40]; /*0x6ecdf2*/
      v15[2] = v8[41]; /*0x6ecdfe*/
      v11 = (AbstractClass *)(*(int (__thiscall **)(int *, int, _DWORD *, _DWORD))(v10 + 964))(v8, 1, v15, 0); /*0x6ece06*/
      if ( v11 ) /*0x6ece0e*/
      {
        TeamClass::SelectMember((int)v3, v11); /*0x6ece11*/
      }
      else if ( v3->focus != aP1a ) /*0x6ece1c*/
      {
        TeamClass::SelectMember((int)v3, 0); /*0x6ece22*/
      }
    }
  }
  focus = v3->focus; /*0x6ece27*/
  if ( focus && (focus[20] & 2) != 0 ) /*0x6ece32*/
    TeamClass::AttackCoordinator((int *)v3->__pad_0); /*0x6ece36*/
  else
    TeamClass::UpdateMembers((int)v3); /*0x6ece46*/
}


// ==== 0x006ECE60  TeamClass::AssignMemberToCoordinator  this=TeamClass  sig=csp ====
char __thiscall TeamClass::AssignMemberToCoordinator(int this, ScriptClass *aP1, TeamClass *aP2)
{
  AbstractClass *CellFromArray; // eax
  int v5; // ecx
  int v6; // esi
  _DWORD *v7; // eax
  AbstractClass *ObjectCell; // eax
  _DWORD v10[2]; // [esp+4h] [ebp-8h] BYREF

  if ( (_BYTE)aP2 ) /*0x6ece6c*/
  {
    CellFromArray = (AbstractClass *)ScenarioClass::GetCellFromArray( /*0x6ece7c*/
                                       *(__int16 **)&HouseClass_Player.__pad_5568[8060],
                                       *(ScenarioClass **)&aP1->__pad_0[4]);
    TeamClass::SelectMember(this, CellFromArray); /*0x6ece84*/
  }
  v5 = *(_DWORD *)(this + 60); /*0x6ece89*/
  if ( v5 && (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 11 )
  {
    v6 = *(_DWORD *)(this + 60); /*0x6ece9b*/
    if ( v6 )
      v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 44))(*(_DWORD *)(this + 60)) == 11 ? (_DWORD *)v6 : 0;
    else
      v7 = 0; /*0x6ecea2*/
    v10[0] = 0; /*0x6ecec1*/
    v10[1] = 0; /*0x6ecec9*/
    ObjectCell = (AbstractClass *)Object::FindObjectCell(v7, (TechnoClass *)v10, 0); /*0x6eced1*/
    if ( ObjectCell ) /*0x6eced9*/
    {
      TeamClass::SelectMember(this, ObjectCell); /*0x6ecede*/
LABEL_10:
      LOBYTE(ObjectCell) = TeamClass::AttackCoordinator((int *)this); /*0x6ecee3*/
    }
  }
  else
  {
    if ( *(_DWORD *)(this + 60) ) /*0x6ecef1*/
      goto LABEL_10; /*0x6ecef6*/
    LOBYTE(ObjectCell) = TeamClass::SelectMember(this, 0); /*0x6ecefc*/
    *(_BYTE *)(this + 128) = 1; /*0x6ecf01*/
  }
  return (char)ObjectCell; /*0x6eceea*/
}


// ==== 0x006ECFB0  TeamClass::Create  this=TeamClass  sig=csp ====
char __thiscall TeamClass::Create(int *this, int a2, int a3)
{
  TeamClass *v4; // eax
  TeamClass *v5; // ebx
  FootClass *i; // esi

  v4 = (TeamClass *)__2_YAPAXI_Z(0xA0u); /*0x6ecfba*/
  if ( v4 ) /*0x6ecfc4*/
  {
    v4 = (TeamClass *)MissionClass::Construct( /*0x6ecfdf*/
                        (int)v4,
                        *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[440] + 4 * *(_DWORD *)(a2 + 4)),
                        this->owner,
                        0);
    v5 = v4; /*0x6ecfe4*/
  }
  else
  {
    v5 = 0; /*0x6ecfe8*/
  }
  for ( i = (FootClass *)this->u8_15; i; i = (FootClass *)this->u8_15 ) /*0x6ecfef*/
  {
    TeamClass::LiberateMember_Start((int)this, (IUnknown *)i, 0xFFFFFFFF, 0); /*0x6ecff8*/
    LOBYTE(v4) = TeamClass::AddMember((int)v5, (IUnknown *)i, 0); /*0x6ed002*/
  }
  if ( this ) /*0x6ed010*/
    LOBYTE(v4) = (*(char (__thiscall **)(int *, int))(*this + 32))(this, 1); /*0x6ed018*/
  return (char)v4; /*0x6ed01b*/
}


// ==== 0x006ED090  TeamClass::CoordinateSuperWeaponAttack  this=TeamClass  sig=csp ====
char __thiscall TeamClass::CoordinateSuperWeaponAttack(int this, ScriptClass *aP1, int a3)
{
  int v3; // ebp
  int *v4; // esi
  int v5; // ebx
  int *v6; // edi
  int v7; // ebp
  int SuperWeaponTypeFlag; // eax
  int v9; // edx
  int v10; // ecx
  AbstractClass *v11; // eax
  int *v12; // esi
  int *v13; // esi
  _DWORD v16[3]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = this; /*0x6ed094*/
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
          && (*(_DWORD *)&HouseClass_Player.__pad_5568[21752] || !*((_BYTE *)v4 + 129))
          && (*((_BYTE *)v4 + 1673) || (*(int (__thiscall **)(int *))(*v4 + 44))(v4) == 2)
          && v7 > v5 )
        {
          v6 = v4; /*0x6ed10e*/
          v5 = v7; /*0x6ed110*/
        }
        v4 = (int *)v4[374]; /*0x6ed112*/
      }
      while ( v4 ); /*0x6ed11a*/
      v3 = this; /*0x6ed11c*/
      SuperWeaponTypeFlag = GetSuperWeaponTypeFlag(*(void **)&aP1->__pad_0[4]); /*0x6ed127*/
      v16[0] = v6[39]; /*0x6ed138*/
      v16[1] = v6[40]; /*0x6ed13f*/
      v9 = *v6; /*0x6ed143*/
      v16[2] = v6[41]; /*0x6ed148*/
      v10 = *(_DWORD *)(this + 36); /*0x6ed14c*/
      LOBYTE(v10) = *(_BYTE *)(v10 + 247); /*0x6ed14f*/
      v11 = (AbstractClass *)(*(int (__thiscall **)(int *, int, _DWORD *, int))(v9 + 964))( /*0x6ed15e*/
                               v6,
                               SuperWeaponTypeFlag,
                               v16,
                               v10);
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
    if ( !*(_DWORD *)(v3 + 60) ) /*0x6ed1ab*/
      goto LABEL_25; /*0x6ed1ab*/
  }
  v13 = *(int **)(v3 + 84); /*0x6ed1b2*/
  if ( v13 ) /*0x6ed1b7*/
  {
    while ( *(int *)((*(int (__thiscall **)(int *))(*v13 + 132))(v13) + 1668) > 0 && v13[191] <= 0 ) /*0x6ed1d5*/
    {
      v13 = (int *)v13[374]; /*0x6ed1d7*/
      if ( !v13 ) /*0x6ed1df*/
        goto LABEL_25; /*0x6ed1df*/
    }
  }
  else
  {
LABEL_25:
    *(_BYTE *)(v3 + 128) = 1; /*0x6ed1e1*/
  }
  return TeamClass::AttackCoordinator((int *)v3); /*0x6ed1ef*/
}


// ==== 0x006ED200  ObjectClass::AssignTeamProductionFacilities  this=ObjectClass  sig=csp ====
char __thiscall AssignTeamProductionFacilities(int **this, ScriptClass *aP1, int a3)
{
  int health; // eax
  TechnoClass *v4; // esi
  int v5; // ebp
  int v6; // ebx
  _DWORD *v7; // edi
  char v8; // bl
  int v9; // edi
  TechnoClass *v10; // edi
  int v11; // ebp
  char v12; // bl
  ObjectClass *v13; // esi
  int v14; // eax
  int v15; // edi
  TechnoClass *v16; // edi
  void *v17; // eax
  _DWORD v19[3]; // [esp+10h] [ebp-10h] BYREF
  TechnoClass *v20; // [esp+1Ch] [ebp-4h]

  health = (this->objectTypeFlags)[57]; /*0x6ed209*/
  v4 = (TechnoClass *)this->u8_15; /*0x6ed20f*/
  v19[0] = this; /*0x6ed212*/
  v5 = 0; /*0x6ed216*/
  if ( *(int *)(health + 156) <= 0 ) /*0x6ed221*/
  {
LABEL_6:
    v8 = 0; /*0x6ed25a*/
  }
  else
  {
    v6 = 168; /*0x6ed223*/
    while ( 1 ) /*0x6ed228*/
    {
      v7 = *(_DWORD **)(v6 + health); /*0x6ed228*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7) == 3 ) /*0x6ed235*/
      {
        health = v7[376]; /*0x6ed237*/
        if ( health > 0 ) /*0x6ed23f*/
          break; /*0x6ed23f*/
      }
      ++v5; /*0x6ed245*/
      v6 += 8; /*0x6ed246*/
      health = *(_DWORD *)(*(_DWORD *)(v19[0] + 36) + 228); /*0x6ed24c*/
      if ( v5 >= *(_DWORD *)(health + 156) ) /*0x6ed258*/
        goto LABEL_6; /*0x6ed258*/
    }
    v8 = 1; /*0x6ed29e*/
  }
  if ( !v4 ) /*0x6ed25e*/
  {
    *(_BYTE *)(v19[0] + 128) = 1; /*0x6ed2de*/
    return health; /*0x6ed2e9*/
  }
  while ( 1 ) /*0x6ed264*/
  {
    health = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v4->__pad_0 + 132))(v4); /*0x6ed264*/
    if ( *(int *)(health + 1504) <= 0 ) /*0x6ed272*/
      goto LABEL_15; /*0x6ed272*/
    v9 = *(_DWORD *)&v4->inAirFlag; /*0x6ed276*/
    health = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v4->__pad_0 + 132))(v4); /*0x6ed27e*/
    if ( v9 >= *(_DWORD *)(health + 1504) ) /*0x6ed28a*/
      goto LABEL_15; /*0x6ed28a*/
    if ( v8 ) /*0x6ed28e*/
      break; /*0x6ed28e*/
    health = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v4->__pad_0 + 44))(v4); /*0x6ed294*/
    if ( health == 1 ) /*0x6ed29a*/
      goto LABEL_17; /*0x6ed29a*/
LABEL_15:
    v4 = *(TechnoClass **)&v4[1].missionQueued; /*0x6ed2ae*/
    if ( !v4 ) /*0x6ed2b6*/
    {
      *(_BYTE *)(v19[0] + 128) = 1; /*0x6ed2bf*/
      return health; /*0x6ed2ca*/
    }
  }
  health = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v4->__pad_0 + 44))(v4); /*0x6ed2a6*/
  if ( health != 2 ) /*0x6ed2ac*/
    goto LABEL_15; /*0x6ed2ac*/
LABEL_17:
  v10 = v4; /*0x6ed2cd*/
  v20 = v4; /*0x6ed2d1*/
  LOBYTE(health) = Team::AllMembersValid((int *)v4->__pad_0); /*0x6ed2ee*/
  if ( !(_BYTE)health ) /*0x6ed2f5*/
  {
    v11 = v19[0]; /*0x6ed2fb*/
    v12 = 1; /*0x6ed2ff*/
    v13 = *(ObjectClass **)(v19[0] + 84); /*0x6ed301*/
    if ( v13 ) /*0x6ed306*/
    {
      do /*0x6ed431*/
      {
        if ( *(int *)(v11 + 72) <= 1 ) /*0x6ed310*/
          break; /*0x6ed310*/
        LOBYTE(health) = v13->isAliveFlag; /*0x6ed31e*/
        if ( (_BYTE)health ) /*0x6ed326*/
        {
          if ( v13->health /*0x6ed34e*/
            && (*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] || !v13->inLimbo)
            && !BYTE1(v13[9].visibilityFlags) )
          {
            v14 = *SessionClass::GetEntry(*(_DWORD **)(v11 + 40), (IUnknown *)v19); /*0x6ed365*/
            if ( v14 == 54 || v14 == 53 ) /*0x6ed36f*/
              v15 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5920); /*0x6ed384*/
            else
              v15 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5916); /*0x6ed376*/
            if ( ObjectClass::DistanceTo(v13, *(AbstractClass **)(v11 + 52)) <= v15 ) /*0x6ed397*/
            {
              BYTE1(v13[9].visibilityFlags) = 1; /*0x6ed3cf*/
            }
            else if ( !v13[8].ambientSoundController[2] ) /*0x6ed399*/
            {
              (*(void (__thiscall **)(ObjectClass *, int, _DWORD))(*(_DWORD *)v13->__pad_0 + 488))(v13, 2, 0); /*0x6ed3ab*/
              (*(void (__thiscall **)(ObjectClass *, _DWORD))(*(_DWORD *)v13->__pad_0 + 968))(v13, 0); /*0x6ed3b7*/
              (*(void (__thiscall **)(ObjectClass *, _DWORD, int))(*(_DWORD *)v13->__pad_0 + 1152))( /*0x6ed3c7*/
                v13,
                *(_DWORD *)(v11 + 52),
                1);
            }
          }
          LOBYTE(health) = v13->isAliveFlag; /*0x6ed3d6*/
          if ( (_BYTE)health ) /*0x6ed3de*/
          {
            health = v13->health; /*0x6ed3e0*/
            if ( health ) /*0x6ed3e5*/
            {
              if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] /*0x6ed3f8*/
                || (health = (unsigned __int8)v13->inLimbo, !(_BYTE)health) )
              {
                LOBYTE(health) = BYTE1(v13[9].visibilityFlags); /*0x6ed3fa*/
                if ( (_BYTE)health /*0x6ed40e*/
                  || (health = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v13->__pad_0 + 44))(v13), health == 2) )
                {
                  v16 = v20; /*0x6ed410*/
                  if ( v13 != (ObjectClass *)v20 ) /*0x6ed416*/
                  {
                    v12 = 0; /*0x6ed41c*/
                    health = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v13->__pad_0 + 388))(v13); /*0x6ed41e*/
                    if ( health != 7 ) /*0x6ed427*/
                    {
                      (*(void (__thiscall **)(ObjectClass *, int, _DWORD))(*(_DWORD *)v13->__pad_0 + 488))(v13, 7, 0); /*0x6ed49a*/
                      (*(void (__thiscall **)(ObjectClass *, _DWORD))(*(_DWORD *)v13->__pad_0 + 968))(v13, 0); /*0x6ed4a6*/
                      LOBYTE(health) = (*(char (__thiscall **)(ObjectClass *, TechnoClass *, int))(*(_DWORD *)v13->__pad_0 /*0x6ed4b3*/
                                                                                                 + 1152))(
                                         v13,
                                         v16,
                                         1);
                      return health; /*0x6ed4b3*/
                    }
                  }
                }
              }
            }
          }
        }
        v13 = (ObjectClass *)v13[8].spawnStatus; /*0x6ed429*/
      }
      while ( v13 ); /*0x6ed431*/
      if ( !v12 ) /*0x6ed439*/
        return health; /*0x6ed439*/
      v10 = v20; /*0x6ed43b*/
    }
    health = *(_DWORD *)(v11 + 36); /*0x6ed43f*/
    if ( *(_BYTE *)(health + 244) ) /*0x6ed442*/
    {
      v19[0] = v10->location[0]; /*0x6ed458*/
      v19[1] = v10->location[1]; /*0x6ed464*/
      v19[2] = v10->location[2]; /*0x6ed46b*/
      v17 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v19); /*0x6ed474*/
      LOBYTE(health) = TechnoClass::SetFocus(v10, (int)v17); /*0x6ed47c*/
    }
    *(_BYTE *)(v11 + 128) = 1; /*0x6ed481*/
  }
  return health; /*0x6ed2bc*/
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
      if ( *(_DWORD *)(v6 + 108) && (MEMORY[0xA8E7AC] || !*(_BYTE *)(v6 + 129)) && !*(_BYTE *)(v6 + 1673) ) /*0x6ed51f*/
      {
        v7 = *SessionClass::GetEntry(*(_DWORD **)(a1 + 40), &v18); /*0x6ed536*/
        if ( v7 == 54 || v7 == 53 ) /*0x6ed540*/
          v8 = *((_DWORD *)MEMORY[0x8871E0] + 1480); /*0x6ed556*/
        else
          v8 = *((_DWORD *)MEMORY[0x8871E0] + 1479); /*0x6ed548*/
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
        && (MEMORY[0xA8E7AC] || !*(_BYTE *)(v6 + 129))
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
int __thiscall sub_6ED770(int this, int a2, char a3)
{
  int v4; // eax
  int v5; // edx
  int result; // eax
  int v7; // [esp+8h] [ebp-8h]

  if ( a3 ) /*0x6ed77c*/
  {
    v4 = *(_DWORD *)(a2 + 4); /*0x6ed78b*/
    *(_DWORD *)(this + 88) = MEMORY[0xA8ED84]; /*0x6ed78e*/
    *(_DWORD *)(this + 92) = v7; /*0x6ed797*/
    *(_DWORD *)(this + 96) = 15 * v4; /*0x6ed79d*/
  }
  HouseClass::EvaluateTarget(this); /*0x6ed7a2*/
  v5 = *(_DWORD *)(this + 88); /*0x6ed7a7*/
  result = *(_DWORD *)(this + 96); /*0x6ed7aa*/
  if ( v5 == -1 ) /*0x6ed7b0*/
  {
LABEL_6:
    if ( result ) /*0x6ed7c2*/
      return result; /*0x6ed7c2*/
    goto LABEL_7; /*0x6ed7c2*/
  }
  if ( (int)MEMORY[0xA8ED84] - v5 < result ) /*0x6ed7bc*/
  {
    result -= (int)MEMORY[0xA8ED84] - v5; /*0x6ed7be*/
    goto LABEL_6; /*0x6ed7be*/
  }
LABEL_7:
  *(_BYTE *)(this + 128) = 1; /*0x6ed7c4*/
  return result; /*0x6ed7cb*/
}


// ==== 0x006ED7E0  Mission::AssignTeamMemberMissions  this=Mission  sig=csp ====
char __thiscall Mission::AssignTeamMemberMissions(int this, ScriptClass *aP1, int a3)
{
  ScriptClass *v3; // eax
  ScriptClass *v4; // ebx
  ObjectClass *i; // esi
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  int v10; // ebp
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int v13; // ebp
  void *v14; // eax
  AbstractClass v16; // [esp+1Ch] [ebp-28h] BYREF
  ScriptClass *aP1a; // [esp+48h] [ebp+4h]

  LOBYTE(v3) = (_BYTE)aP1; /*0x6ed7e3*/
  v4 = *(ScriptClass **)&aP1->__pad_0[4]; /*0x6ed7e9*/
  for ( i = *(ObjectClass **)(this + 84); i; i = (ObjectClass *)i[8].spawnStatus )
  {
    LOBYTE(v3) = i->isAliveFlag; /*0x6ed801*/
    if ( (_BYTE)v3 )
    {
      if ( i->health && (*(_DWORD *)&HouseClass_Player.__pad_5568[21752] || !i->inLimbo) && !BYTE1(i[9].visibilityFlags) ) /*0x6ed831*/
      {
        v7 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), (IUnknown *)&v16.__pad_0[12]); /*0x6ed848*/
        if ( v7 == 54 || v7 == 53 ) /*0x6ed852*/
          v8 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5920); /*0x6ed867*/
        else
          v8 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5916); /*0x6ed85a*/
        if ( ObjectClass::DistanceTo(i, *(AbstractClass **)(this + 52)) <= v8 ) /*0x6ed87a*/
        {
          BYTE1(i[9].visibilityFlags) = 1; /*0x6ed8b2*/
        }
        else if ( !i[8].ambientSoundController[2] ) /*0x6ed87c*/
        {
          (*(void (__thiscall **)(ObjectClass *, int, _DWORD))(*(_DWORD *)i->__pad_0 + 488))(i, 2, 0); /*0x6ed88e*/
          (*(void (__thiscall **)(ObjectClass *, _DWORD))(*(_DWORD *)i->__pad_0 + 968))(i, 0); /*0x6ed89a*/
          (*(void (__thiscall **)(ObjectClass *, _DWORD, int))(*(_DWORD *)i->__pad_0 + 1152))( /*0x6ed8aa*/
            i,
            *(_DWORD *)(this + 52),
            1);
        }
      }
      LOBYTE(v3) = i->isAliveFlag; /*0x6ed8b9*/
      if ( (_BYTE)v3 )
      {
        v3 = (ScriptClass *)i->health; /*0x6ed8c7*/
        if ( v3 )
        {
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[21752]
            || (v3 = (ScriptClass *)(unsigned __int8)i->inLimbo, !(_BYTE)v3) )
          {
            if ( BYTE1(i[9].visibilityFlags)
              || (v3 = (ScriptClass *)(*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)i->__pad_0 + 44))(i),
                  v3 == (ScriptClass *)2) )
            {
              v3 = *(ScriptClass **)&i[4].__pad_0[4]; /*0x6ed903*/
              if ( !v3 )
              {
                if ( i[8].ambientSoundController[2]
                  || ((v9 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), (IUnknown *)&v16.abstractFlags), v9 == 54)
                   || v9 == 53
                    ? (v10 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5920))
                    : (v10 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5916)),
                      ObjectClass::DistanceTo(i, *(AbstractClass **)(this + 52)) <= 2 * v10 || v4 == (ScriptClass *)11) )
                {
                  v3 = *(ScriptClass **)&i[4].__pad_0[4]; /*0x6eda11*/
                  if ( !v3 ) /*0x6eda19*/
                  {
                    v3 = (ScriptClass *)i[8].ambientSoundController[2]; /*0x6eda1b*/
                    if ( !v3 ) /*0x6eda23*/
                    {
                      v3 = (ScriptClass *)(*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)i->__pad_0 + 388))(i); /*0x6eda29*/
                      if ( v3 != v4 ) /*0x6eda31*/
                      {
                        if ( v4 != (ScriptClass *)5 /*0x6eda45*/
                          || (v3 = (ScriptClass *)(*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)i->__pad_0 + 388))(i),
                              v3 != (ScriptClass *)16) )
                        {
                          TechnoClass::SetFocus(i, 0); /*0x6eda4b*/
                          (*(void (__thiscall **)(ObjectClass *, ScriptClass *, _DWORD))(*(_DWORD *)i->__pad_0 + 488))( /*0x6eda57*/
                            i,
                            v4,
                            0);
                          (*(void (__thiscall **)(ObjectClass *, _DWORD))(*(_DWORD *)i->__pad_0 + 968))(i, 0); /*0x6eda63*/
                          LOBYTE(v3) = (*(int (__thiscall **)(ObjectClass *, _DWORD, int))(*(_DWORD *)i->__pad_0 + 1152))( /*0x6eda71*/
                                         i,
                                         0,
                                         1);
                        }
                      }
                    }
                  }
                }
                else
                {
                  (*(void (__thiscall **)(ObjectClass *, int, _DWORD))(*(_DWORD *)i->__pad_0 + 488))(i, 2, 0); /*0x6ed97a*/
                  (*(void (__thiscall **)(ObjectClass *, _DWORD, int))(*(_DWORD *)i->__pad_0 + 1152))( /*0x6ed98a*/
                    i,
                    *(_DWORD *)(this + 52),
                    1);
                  (*(void (__thiscall **)(ObjectClass *, int, _DWORD))(*(_DWORD *)i->__pad_0 + 488))(i, 2, 0); /*0x6ed998*/
                  v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 52) + 72))( /*0x6ed9a8*/
                                    *(_DWORD *)(this + 52),
                                    &v16.referenceCount);
                  LOWORD(aP1a) = *v11 / 256; /*0x6ed9bb*/
                  HIWORD(aP1a) = v11[1] / 256; /*0x6ed9d7*/
                  *(_DWORD *)v16.__pad_0 = aP1a; /*0x6ed9e4*/
                  v12 = globalHelper_0DA020(&v16.__pad_0[8], &v16); /*0x6ed9e8*/
                  v13 = *(_DWORD *)i->__pad_0; /*0x6ed9ef*/
                  *(_DWORD *)&v16.__pad_0[4] = *v12; /*0x6ed9fd*/
                  v14 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v16.__pad_0[4]); /*0x6eda01*/
                  LOBYTE(v3) = (*(int (__thiscall **)(ObjectClass *, void *, int))(v13 + 1152))(i, v14, 1); /*0x6eda09*/
                }
              }
            }
          }
        }
      }
    }
  }
  return (char)v3; /*0x6eda86*/
}


// ==== 0x006EDB50  TeamClass::AssignAttackTarget  this=TeamClass  sig=csp ====
char __thiscall TeamClass::AssignAttackTarget(int this, TeamClass *aP1, IUnknown *aP2)
{
  ObjectClass *v4; // edi
  int health; // eax
  AbstractClass *v6; // edi
  FootClass *i; // esi
  int sprayOffsetIndex; // eax

  v4 = (ObjectClass *)(this + 52); /*0x6edb57*/
  TeamClass::FindClosestEnemy(this, (AbstractClass *)(this + 52), (AbstractClass *)(this + 56)); /*0x6edb5c*/
  *(_DWORD *)(this + 64) = *(_DWORD *)v4->__pad_0; /*0x6edb63*/
  TeamClass::UpdateMembers(this); /*0x6edb68*/
  health = (int)AbstractClass::IsTechnoType(*(void **)v4->__pad_0); /*0x6edb6f*/
  v6 = (AbstractClass *)health; /*0x6edb74*/
  if ( health ) /*0x6edb78*/
  {
    for ( i = *(FootClass **)(this + 84); i; i = (FootClass *)i->nextTeamMember ) /*0x6edb83*/
    {
      LOBYTE(health) = i->isAliveFlag; /*0x6edb89*/
      if ( (_BYTE)health ) /*0x6edb91*/
      {
        health = i->health; /*0x6edb97*/
        if ( health ) /*0x6edb9c*/
        {
          if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] || (health = (unsigned __int8)i->inLimbo, !(_BYTE)health) ) /*0x6edbb3*/
          {
            if ( i->isTeamLeader /*0x6edbcd*/
              || (health = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)i->__pad_0 + 44))(i), health == 2) )
            {
              sprayOffsetIndex = i->sprayOffsetIndex; /*0x6edbd3*/
              if ( sprayOffsetIndex && sprayOffsetIndex != *(_DWORD *)&v6[19].__pad_0[8] ) /*0x6edbe3*/
                (*(void (__thiscall **)(FootClass *, _DWORD))(*(_DWORD *)i->__pad_0 + 968))(i, 0); /*0x6edbeb*/
              health = *(_DWORD *)&v6[19].__pad_0[8]; /*0x6edbf1*/
              if ( health ) /*0x6edbf9*/
              {
                if ( !i->locomotor[0] ) /*0x6edbfb*/
                  WinAPI::Wrapper(-2147467261); /*0x6edc0a*/
                LOBYTE(health) = (*(int (__stdcall **)(int))(*(_DWORD *)i->locomotor[0] + 16))(i->locomotor[0]); /*0x6edc18*/
                if ( !(_BYTE)health ) /*0x6edc1d*/
                {
                  LOBYTE(health) = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)i->__pad_0 + 684))(i); /*0x6edc23*/
                  if ( (_BYTE)health ) /*0x6edc2b*/
                  {
                    health = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)i->__pad_0 + 388))(i); /*0x6edc31*/
                    if ( health == 5 ) /*0x6edc3a*/
                    {
                      (*(void (__thiscall **)(FootClass *, int, _DWORD))(*(_DWORD *)i->__pad_0 + 488))(i, 1, 0); /*0x6edc44*/
                      LOBYTE(health) = (*(int (__thiscall **)(FootClass *, _DWORD))(*(_DWORD *)i->__pad_0 + 968))( /*0x6edc55*/
                                         i,
                                         *(_DWORD *)&v6[19].__pad_0[8]);
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
  return health; /*0x6edc69*/
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
int __thiscall sub_6EDDC0(int this, int a2, int a3)
{
  _DWORD *v4; // esi
  int result; // eax

  v4 = *(_DWORD **)(this + 84); /*0x6eddc4*/
  if ( v4 ) /*0x6eddc9*/
  {
    do /*0x6edde6*/
    {
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v4 + 1312))(v4, *(_DWORD *)(a2 + 4)); /*0x6eddd8*/
      v4 = (_DWORD *)v4[374]; /*0x6eddde*/
    }
    while ( v4 ); /*0x6edde6*/
    *(_BYTE *)(this + 128) = 1; /*0x6edde9*/
  }
  else
  {
    *(_BYTE *)(this + 128) = 1; /*0x6eddf5*/
  }
  return result; /*0x6eddf0*/
}


// ==== 0x006EDE80  ObjectClass::method_6EDE80  this=ObjectClass  sig=csp ====
void __thiscall sub_6EDE80(_BYTE *this, int a2, int a3)
{
  this->needsRedraw = 1; /*0x6ede80*/
}


// ==== 0x006EDF10  ObjectClass::method_6EDF10  this=ObjectClass  sig=csp ====
void __thiscall sub_6EDF10(int this, int a2, int a3)
{
  _DWORD *i; // esi
  _DWORD *v5; // eax
  int v6; // [esp+8h] [ebp-14h]
  int v7; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v8[12]; // [esp+10h] [ebp-Ch] BYREF

  for ( i = *(_DWORD **)(this + 84); i; i = (_DWORD *)i[374] ) /*0x6edf1c*/
  {
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*i + 72))(i, v8); /*0x6edf27*/
    LOWORD(v6) = *v5 / 256; /*0x6edf3a*/
    HIWORD(v6) = v5[1] / 256; /*0x6edf53*/
    v7 = v6; /*0x6edf60*/
    MapClass::TriggerEVA((__int16 *)&v7); /*0x6edf65*/
  }
  *(_BYTE *)(this + 128) = 1; /*0x6edf74*/
}


// ==== 0x006EDF90  ObjectClass::method_6EDF90  this=ObjectClass  sig=csp ====
char __thiscall sub_6EDF90(int this, int a2, int a3)
{
  *(_BYTE *)(*(_DWORD *)(this + 44) + 494) = 1; /*0x6edf95*/
  *(_BYTE *)(this + 128) = 1; /*0x6edf9b*/
  return 1; /*0x6edfa1*/
}


// ==== 0x006EDFB0  ObjectClass::method_6EDFB0  this=ObjectClass  sig=csp ====
int __thiscall sub_6EDFB0(int this, int a2, int a3)
{
  int result; // eax

  result = *(_DWORD *)(this + 44); /*0x6edfb0*/
  *(_DWORD *)(result + 592) = 4; /*0x6edfb3*/
  *(_BYTE *)(this + 128) = 1; /*0x6edfbd*/
  return result; /*0x6edfc4*/
}


// ==== 0x006EDFD0  ObjectClass::method_6EDFD0  this=ObjectClass  sig=csp ====
void __thiscall sub_6EDFD0(int this, int a2, int a3)
{
  int v4; // esi
  char v5; // cl
  int v6; // [esp+8h] [ebp-4h] BYREF

  do /*0x6ee038*/
  {
    v4 = *(_DWORD *)(this + 84); /*0x6edfd5*/
    v5 = 0; /*0x6edfd8*/
    if ( !v4 ) /*0x6edfdc*/
      break; /*0x6edfdc*/
    do /*0x6ee034*/
    {
      if ( *(int *)(v4 + 108) > 0 && *(_BYTE *)(v4 + 144) && *(_BYTE *)(v4 + 116) && !*(_BYTE *)(v4 + 129) ) /*0x6edff6*/
      {
        v6 = *(_DWORD *)(v4 + 108); /*0x6ee008*/
        (*(void (__thiscall **)(int, int *, _DWORD, int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 364))( /*0x6ee024*/
          v4,
          &v6,
          0,
          MEMORY[0x8871E0]->?[5],
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
  *(_BYTE *)(this + 128) = 1; /*0x6ee03a*/
}


// ==== 0x006EE050  ObjectClass::method_6EE050  this=ObjectClass  sig=csp ====
int __thiscall sub_6EE050(int this, int a2, int a3)
{
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  int result; // eax

  v4 = *(_DWORD **)(this + 84); /*0x6ee054*/
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
    *(_BYTE *)(this + 128) = 1; /*0x6ee07d*/
  }
  else
  {
    *(_BYTE *)(this + 128) = 1; /*0x6ee089*/
  }
  return result; /*0x6ee084*/
}


// ==== 0x006EE100  TacticalClass::Get  this=TacticalClass  sig=csp ====
int __thiscall sub_6EE100(int this, int a2, int a3)
{
  _DWORD *v4; // eax
  int result; // eax
  _DWORD v6[2]; // [esp+4h] [ebp-18h] BYREF
  int GroundHeight; // [esp+Ch] [ebp-10h]
  _BYTE v8[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 52) + 72))(*(_DWORD *)(this + 52), v8); /*0x6ee110*/
  v6[0] = *v4; /*0x6ee115*/
  v6[1] = v4[1]; /*0x6ee121*/
  GroundHeight = v4[2]; /*0x6ee12d*/
  GroundHeight = Cell::GetGroundHeight(v6); /*0x6ee140*/
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v6) + 80) & 0x100) != 0 /*0x6ee16c*/
    || (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v6) + 80) & 0x400) != 0 )
  {
    GroundHeight += MEMORY[0xB0E99C]; /*0x6ee17a*/
  }
  result = TacticalClass::SetPosition(MEMORY[0x887324], v6, *(_DWORD *)(a2 + 4)); /*0x6ee191*/
  *(_BYTE *)(this + 128) = 1; /*0x6ee196*/
  return result; /*0x6ee19d*/
}


// ==== 0x006EE310  TeamClass::SelectAreaAttackTarget  this=TeamClass  sig=csp ====
char __thiscall TeamClass::SelectAreaAttackTarget(int this, ScriptClass *aP1, TeamClass *aP2)
{
  FootClass *v4; // edi
  void *v5; // edx
  int v6; // ebx
  AbstractClass *v7; // eax
  int *v8; // esi
  char result; // al

  if ( (_BYTE)aP2 ) /*0x6ee31b*/
  {
    if ( *(_DWORD *)(this + 60) ) /*0x6ee31d*/
      goto LABEL_9; /*0x6ee322*/
    v4 = *(FootClass **)(this + 84); /*0x6ee324*/
    if ( v4 ) /*0x6ee329*/
    {
      v5 = 0; /*0x6ee336*/
      v6 = *((_DWORD *)v4->focus + 5504); /*0x6ee354*/
      if ( v6 != -1 ) /*0x6ee35d*/
        v5 = *(void **)&HouseClass_Array->__pad_0[4 * v6]; /*0x6ee365*/
      v7 = (AbstractClass *)DamageMapClassArea( /*0x6ee376*/
                              *((_DWORD *)g_TriggerTypeCount + (unsigned __int16)*(_DWORD *)&aP1->__pad_0[4]),
                              v5,
                              v4,
                              (unsigned __int16)HIWORD(*(_DWORD *)&aP1->__pad_0[4]),
                              *(_BYTE *)(*(_DWORD *)(this + 36) + 247));
      if ( v7 ) /*0x6ee37e*/
        TeamClass::SelectMember(this, v7); /*0x6ee383*/
    }
  }
  if ( !*(_DWORD *)(this + 60) ) /*0x6ee38d*/
  {
LABEL_13:
    result = TeamClass::SelectMember(this, 0); /*0x6ee3be*/
    *(_BYTE *)(this + 128) = 1; /*0x6ee3c8*/
    return result; /*0x6ee3d1*/
  }
LABEL_9:
  v8 = *(int **)(this + 84); /*0x6ee38f*/
  if ( !v8 ) /*0x6ee394*/
    goto LABEL_13; /*0x6ee394*/
  while ( *(int *)((*(int (__thiscall **)(int *))(*v8 + 132))(v8) + 1668) > 0 && v8[191] <= 0 ) /*0x6ee3b2*/
  {
    v8 = (int *)v8[374]; /*0x6ee3b4*/
    if ( !v8 ) /*0x6ee3bc*/
      goto LABEL_13; /*0x6ee3bc*/
  }
  return TeamClass::AttackCoordinator((int *)this); /*0x6ee3c7*/
}


// ==== 0x006EE3F0  TeamClass::ProcessTeamMovement  this=TeamClass  sig=csp ====
void __thiscall sub_6EE3F0(int *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // esi
  #375 *v5; // edx
  int v6; // ebx
  _DWORD *v7; // ebx
  int v8; // edi
  int *v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  _DWORD *v13; // eax
  int v14; // eax
  int TileIndex; // [esp-38h] [ebp-64h]
  void *v16; // [esp-Ch] [ebp-38h]
  int v18; // [esp+Ch] [ebp-20h] BYREF
  int v19; // [esp+10h] [ebp-1Ch] BYREF
  int v20; // [esp+14h] [ebp-18h] BYREF
  int v21; // [esp+18h] [ebp-14h] BYREF
  int v22; // [esp+1Ch] [ebp-10h] BYREF
  _BYTE v23[8]; // [esp+20h] [ebp-Ch] BYREF
  int v24; // [esp+28h] [ebp-4h]
  int v25; // [esp+30h] [ebp+4h]

  v3 = (int)this; /*0x6ee3f4*/
  if ( !this->queuedFocus ) /*0x6ee3fb*/
  {
    v4 = this->u8_15; /*0x6ee406*/
    if ( v4 ) /*0x6ee40b*/
    {
      v5 = 0; /*0x6ee420*/
      v6 = *(_DWORD *)(*(_DWORD *)(v4 + 540) + 22016); /*0x6ee43b*/
      if ( v6 != -1 ) /*0x6ee444*/
        v5 = *(#375 **)&HouseClass_Array->__pad_0[4 * v6]; /*0x6ee44c*/
      v7 = DamageMapClassArea( /*0x6ee462*/
             *((_DWORD *)g_TriggerTypeCount + (unsigned __int16)*(_DWORD *)(a2 + 4)),
             v5,
             v4,
             (unsigned __int16)HIWORD(*(_DWORD *)(a2 + 4)),
             *(_BYTE *)(this->buildingType + 247));
      if ( v7 ) /*0x6ee466*/
      {
        v8 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 1460); /*0x6ee476*/
        v9 = v7 + 39; /*0x6ee47c*/
        v10 = *v9; /*0x6ee482*/
        v11 = v9[1]; /*0x6ee484*/
        v24 = v9[2]; /*0x6ee48f*/
        LOWORD(v25) = v10 / 256; /*0x6ee4a1*/
        v12 = *(_DWORD *)v4; /*0x6ee4b3*/
        HIWORD(v25) = v11 / 256; /*0x6ee4b8*/
        v21 = v25; /*0x6ee4c1*/
        v18 = 0; /*0x6ee4c7*/
        v13 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(v12 + 72))(v4, v23); /*0x6ee4d6*/
        LOWORD(v25) = *v13 / 256; /*0x6ee4ed*/
        HIWORD(v25) = v13[1] / 256; /*0x6ee50d*/
        LOBYTE(v13) = *(_BYTE *)(v4 + 140); /*0x6ee516*/
        v20 = v25; /*0x6ee520*/
        TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v20, v8, (char)v13); /*0x6ee538*/
        v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4); /*0x6ee53b*/
        v19 = *LayerClass::Pathfinding_Find( /*0x6ee565*/
                 &MEMORY[0x87F7E8],
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
        if ( v19 == MEMORY[0xB0E948] ) /*0x6ee569*/
        {
          TeamClass::SelectMember((int)this, 0); /*0x6ee591*/
        }
        else
        {
          v16 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x6ee588*/
          TeamClass::SelectMember((int)this, (int)v16); /*0x6ee589*/
        }
        v3 = (int)this; /*0x6ee596*/
      }
      if ( !*(_DWORD *)(v3 + 60) ) /*0x6ee59a*/
        *(_BYTE *)(v3 + 128) = 1; /*0x6ee5a3*/
    }
  }
  TeamClass::UpdateMembers(v3); /*0x6ee5ac*/
}


// ==== 0x006EE5C0  TeamClass::SelectBestMember  this=TeamClass  sig=csp ====
void __thiscall TeamClass::SelectBestMember(_DWORD *this, ScriptClass *aP1, int a3)
{
  _DWORD *v3; // ebp
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  int v6; // ebx
  int v7; // ebp
  _DWORD *v8; // ebx
  MouseClass *v9; // edi
  int *v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // eax
  int TileIndex; // [esp-30h] [ebp-60h]
  void *v18; // [esp-4h] [ebp-34h]
  MouseClass *v19; // [esp+14h] [ebp-1Ch] BYREF
  int v21; // [esp+18h] [ebp-18h] BYREF
  int v22; // [esp+1Ch] [ebp-14h] BYREF
  int v23; // [esp+20h] [ebp-10h] BYREF
  _BYTE v24[8]; // [esp+24h] [ebp-Ch] BYREF
  int v25; // [esp+2Ch] [ebp-4h]

  v3 = this; /*0x6ee5c9*/
  if ( (_BYTE)a3 ) /*0x6ee5d3*/
  {
    if ( this->queuedFocus ) /*0x6ee5d9*/
      goto LABEL_22; /*0x6ee5de*/
    v4 = (_DWORD *)this->firstUnit; /*0x6ee5e4*/
    if ( v4 ) /*0x6ee5e9*/
    {
      v5 = (_DWORD *)this->firstUnit; /*0x6ee5f9*/
      a3 = -1; /*0x6ee5fb*/
      v6 = (unsigned __int16)HIWORD(*(_DWORD *)&aP1->__pad_0[4]); /*0x6ee613*/
      aP1 = (ScriptClass *)*((_DWORD *)g_TriggerTypeCount + (unsigned __int16)*(_DWORD *)&aP1->__pad_0[4]); /*0x6ee61b*/
      do /*0x6ee683*/
      {
        v7 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v5 + 132))(v5) + 1532); /*0x6ee62b*/
        if ( v5 /*0x6ee673*/
          && *((_BYTE *)v5 + 144)
          && v5[27]
          && (*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] || !*((_BYTE *)v5 + 129))
          && (*((_BYTE *)v5 + 1673) || (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) == 2)
          && v7 > a3 )
        {
          v4 = v5; /*0x6ee675*/
          a3 = v7; /*0x6ee677*/
        }
        v5 = (_DWORD *)v5[374]; /*0x6ee67b*/
      }
      while ( v5 ); /*0x6ee683*/
      v3 = this; /*0x6ee685*/
      v8 = TeamClass::ScoreMember(aP1, v4, v6, 0); /*0x6ee698*/
      if ( v8 ) /*0x6ee69c*/
      {
        v9 = *(MouseClass **)((*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4) + 1460); /*0x6ee6ac*/
        v10 = v8 + 39; /*0x6ee6b2*/
        v11 = *v10; /*0x6ee6bd*/
        v12 = v10[1]; /*0x6ee6bf*/
        v25 = v10[2]; /*0x6ee6c7*/
        LOWORD(a3) = v11 / 256; /*0x6ee6d7*/
        v13 = *v4; /*0x6ee6e9*/
        HIWORD(a3) = v12 / 256; /*0x6ee6ee*/
        v22 = a3; /*0x6ee6f7*/
        aP1 = 0; /*0x6ee6fd*/
        v14 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(v13 + 72))(v4, v24); /*0x6ee70c*/
        LOWORD(a3) = *v14 / 256; /*0x6ee723*/
        v15 = v14[1] / 256; /*0x6ee73e*/
        HIWORD(a3) = v15; /*0x6ee743*/
        LOBYTE(v15) = *((_BYTE *)v4 + 140); /*0x6ee74c*/
        v21 = a3; /*0x6ee756*/
        TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (IUnknown *)&v21, (IUnknown *)v9, (IUnknown *)v15); /*0x6ee76e*/
        v16 = (*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4); /*0x6ee771*/
        v19 = (MouseClass *)*LayerClass::Pathfinding_Find( /*0x6ee79b*/
                               &MEMORY[0x87F7E8],
                               (int)&v23,
                               &v23,
                               (__int16 *)&v22,
                               *(_DWORD *)(v16 + 1660),
                               TileIndex,
                               (int)v9,
                               0,
                               1,
                               1,
                               0,
                               0,
                               0,
                               1,
                               (__int16 *)&aP1,
                               0,
                               0);
        if ( v19 == *(MouseClass **)&MEMORY[0xB077F8].__pad_579C[6580] ) /*0x6ee79f*/
        {
          TeamClass::SelectMember((int)this, 0); /*0x6ee7c7*/
        }
        else
        {
          v18 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x6ee7be*/
          TeamClass::SelectMember((int)this, (int)v18); /*0x6ee7bf*/
        }
        v3 = this; /*0x6ee7cc*/
      }
    }
  }
  if ( !v3[15] ) /*0x6ee7d0*/
  {
    *((_BYTE *)v3 + 128) = 1; /*0x6ee7d8*/
    return; /*0x6ee7e5*/
  }
LABEL_22:
  TeamClass::UpdateMembers((int)v3); /*0x6ee7e8*/
}


// ==== 0x006EE800  ObjectClass::SelectTeamMembers  this=ObjectClass  sig=csp ====
char __thiscall SelectTeamMembers(_DWORD *this, ScriptClass *aP1, int a3)
{
  _DWORD *v3; // edi
  int v4; // eax
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
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // esi
  int v21; // ebx
  int v22; // ebp
  int v23; // edi
  FootClass *v24; // eax
  int v25; // edi
  int v26; // eax
  void *v27; // eax
  _DWORD *v28; // esi
  int v29; // ebp
  _DWORD *v30; // ebx
  int v31; // edi
  char result; // al
  char v33; // [esp+13h] [ebp-39h]
  MouseClass *i; // [esp+18h] [ebp-34h] BYREF
  __int16 v36[2]; // [esp+1Ch] [ebp-30h] BYREF
  int v37; // [esp+20h] [ebp-2Ch] BYREF
  _DWORD v38[4]; // [esp+24h] [ebp-28h] BYREF
  void **v39; // [esp+34h] [ebp-18h] BYREF
  void *Block; // [esp+38h] [ebp-14h]
  int v41; // [esp+3Ch] [ebp-10h]
  char v42; // [esp+41h] [ebp-Bh]
  int v43; // [esp+44h] [ebp-8h]
  int v44; // [esp+48h] [ebp-4h]

  v3 = this; /*0x6ee807*/
  v33 = 1; /*0x6ee809*/
  if ( this->nextObject ) /*0x6ee812*/
  {
    v28 = (_DWORD *)this->q054; /*0x6eeaf6*/
    v29 = -1; /*0x6eeaf9*/
    v30 = v28; /*0x6eeafe*/
    if ( v28 ) /*0x6eeb00*/
    {
      do /*0x6eeb60*/
      {
        v31 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v28 + 132))(v28) + 1532); /*0x6eeb0c*/
        if ( *((_BYTE *)v28 + 144) /*0x6eeb52*/
          && v28[27]
          && (*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] || !*((_BYTE *)v28 + 129))
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
      Team_Helper((_DWORD *)v3[11], v3[12]); /*0x6eeb88*/
      v3[12] = 0; /*0x6eeb8d*/
    }
  }
  else
  {
    v4 = this->fallRate; /*0x6ee81d*/
    v5 = 0; /*0x6ee820*/
    v6 = *(_DWORD *)(v4 + 22060); /*0x6ee822*/
    if ( v6 <= 0 ) /*0x6ee82a*/
      goto LABEL_47; /*0x6ee82a*/
    v7 = (_BYTE *)(*(_DWORD *)(v4 + 22048) + 4); /*0x6ee836*/
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
      v8 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)(v5 - 1)); /*0x6ee85c*/
      v9 = v3[11]; /*0x6ee861*/
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
      this->nextObject = *(_DWORD *)(v12 + 8 * v10); /*0x6ee894*/
LABEL_16:
      v3 = this; /*0x6ee897*/
LABEL_17:
      VectorClass::BuildingConstructor(&v39, 0, 0); /*0x6ee89b*/
      v14 = 0; /*0x6ee8ad*/
      v15 = 0; /*0x6ee8af*/
      v39 = &vt_DynamicVectorClass_BuildingClass; /*0x6ee8b1*/
      v44 = 10; /*0x6ee8bb*/
      v43 = 0; /*0x6ee8c3*/
      if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[100] > 0 ) /*0x6ee8c7*/
      {
        v16 = v41; /*0x6ee8c9*/
        do /*0x6ee8d6*/
        {
          v17 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[88] + 4 * v15; /*0x6ee8d6*/
          if ( v3[12] == *(_DWORD *)(*(_DWORD *)v17 + 540) ) /*0x6ee8e2*/
          {
            if ( v14 < v16 ) /*0x6ee8e6*/
              goto LABEL_25; /*0x6ee8e6*/
            if ( !v42 && v16 || v44 <= 0 ) /*0x6ee8fa*/
              goto LABEL_27; /*0x6ee8fa*/
            if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v39[2])(&v39, v44 + v16, 0) ) /*0x6ee909*/
            {
LABEL_25:
              v18 = v43++; /*0x6ee918*/
              *((_DWORD *)Block + v18) = *(_DWORD *)v17; /*0x6ee921*/
            }
            v16 = v41; /*0x6ee924*/
          }
LABEL_27:
          ++v15; /*0x6ee928*/
          v14 = v43; /*0x6ee931*/
        }
        while ( v15 < *(int *)&MEMORY[0xA8D63C].__pad_14B0[100] ); /*0x6ee8d6*/
      }
      if ( v14 <= 0 ) /*0x6ee939*/
      {
        Team_Helper((_DWORD *)v3[11], v3[12]); /*0x6eeab2*/
        v3[12] = 0; /*0x6eeab7*/
      }
      else
      {
        v19 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)(v14 - 1)); /*0x6ee94e*/
        v20 = v3[21]; /*0x6ee957*/
        v21 = -1; /*0x6ee95a*/
        v22 = v20; /*0x6ee95d*/
        for ( i = (MouseClass *)*((_DWORD *)Block + v19); v20; v20 = *(_DWORD *)(v20 + 1496) ) /*0x6ee968*/
        {
          v23 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v20 + 132))(v20) + 1532); /*0x6ee974*/
          if ( *(_BYTE *)(v20 + 144) /*0x6ee9ba*/
            && *(_DWORD *)(v20 + 108)
            && (*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] || !*(_BYTE *)(v20 + 129))
            && (*(_BYTE *)(v20 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 44))(v20) == 2)
            && v23 > v21 )
          {
            v22 = v20; /*0x6ee9bc*/
            v21 = v23; /*0x6ee9be*/
          }
        }
        v36[0] = 0; /*0x6ee9ce*/
        v36[1] = 0; /*0x6ee9d3*/
        v24 = *(FootClass **)&i->__pad_74[40]; /*0x6ee9ec*/
        v25 = *(_DWORD *)&i->__pad_74[44]; /*0x6ee9ee*/
        v38[3] = *(_DWORD *)&i->__pad_74[48]; /*0x6ee9f4*/
        LOWORD(i) = (int)v24 / 256; /*0x6eea04*/
        HIWORD(i) = v25 / 256; /*0x6eea21*/
        v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 132))(v22); /*0x6eea3d*/
        v37 = *LayerClass::Pathfinding_Find( /*0x6eea67*/
                 &MEMORY[0x87F7E8],
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
        if ( v37 == *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6580] ) /*0x6eea6b*/
        {
          TeamClass::SelectMember((int)this, 0); /*0x6eeaa0*/
        }
        else
        {
          v27 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v37); /*0x6eea85*/
          TeamClass::SelectMember((int)this, (int)v27); /*0x6eea8f*/
        }
        v3 = this; /*0x6eeaa5*/
      }
      v39 = &vt_VectorClass_BuildingClass; /*0x6eeac2*/
      if ( Block && v42 ) /*0x6eead8*/
        __3_YAXPAX_Z(Block); /*0x6eeadf*/
    }
  }
  TeamClass::UpdateMembers((int)v3); /*0x6eeb96*/
  result = v33; /*0x6eeb9b*/
  if ( v33 ) /*0x6eeba1*/
    *((_BYTE *)v3 + 128) = 0; /*0x6eeba3*/
  else
    *((_BYTE *)v3 + 128) = 1; /*0x6eebb4*/
  return result; /*0x6eebaa*/
}


// ==== 0x006EEBD0  DamageMapClassArea  this=FootClass  sig=csp ====
_DWORD *__fastcall DamageMapClassArea(int ecx0, void *a1, FootClass *aP2, int a4, char a5)
{
  int v5; // ecx
  _DWORD *result; // eax
  _DWORD *v7; // esi
  HouseClass *v8; // eax
  FootClass *v9; // edi
  int v10; // ecx
  _DWORD *v11; // eax
  HouseClass *v12; // edx
  _DWORD *v13; // eax
  HouseClass *v14; // edx
  int TileData; // eax
  int *location; // ecx
  int v17; // edi
  int v18; // ebx
  int v19; // ecx
  int v20; // edx
  double v21; // st7
  int *v22; // eax
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
  MouseClass *v33; // [esp+24h] [ebp-6Ch]
  int v34; // [esp+28h] [ebp-68h]
  int v35; // [esp+2Ch] [ebp-64h]
  _DWORD *v36; // [esp+30h] [ebp-60h]
  _DWORD *v37; // [esp+34h] [ebp-5Ch]
  MouseClass *v40; // [esp+40h] [ebp-50h] BYREF
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
  if ( *(int *)&HouseClass_Player.__pad_5568[22684] <= 0 ) /*0x6eec07*/
  {
LABEL_22:
    if ( !a5 ) /*0x6eee74*/
      return v37; /*0x6eee76*/
    return result; /*0x6eee76*/
  }
  do /*0x6eee55*/
  {
    v7 = *(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672] + 4 * v5); /*0x6eec1a*/
    v8 = (HouseClass *)v7[135]; /*0x6eec1d*/
    v30 = v8 == a1; /*0x6eec30*/
    if ( v7[328] != ecx0 ) /*0x6eec34*/
      goto LABEL_19; /*0x6eec34*/
    if ( v8 == a1 ) /*0x6eec3c*/
    {
      v9 = aP2; /*0x6eec6a*/
    }
    else
    {
      v9 = aP2; /*0x6eec3e*/
      if ( (unsigned __int8)HouseClass::IsAlliedWith(aP2->focus, (IUnknown *)v8) /*0x6eec62*/
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
        v12 = (HouseClass *)v9->focus; /*0x6eecb0*/
        HIWORD(v33) = v11[1] / 256; /*0x6eecb9*/
        v40 = v33; /*0x6eecc6*/
        v10 = 0x7FFFFFFF - CellClass::GetTileData((IUnknown *)&v40, (IUnknown *)v12); /*0x6eecdb*/
        break; /*0x6eecdd*/
      case 1: /*0x6eec7c*/
        v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v7 + 72))(v7, v51); /*0x6eeceb*/
        LOWORD(v34) = *v13 / 256; /*0x6eecfe*/
        v14 = (HouseClass *)v9->focus; /*0x6eed0f*/
        HIWORD(v34) = v13[1] / 256; /*0x6eed18*/
        v41 = v34; /*0x6eed25*/
        TileData = CellClass::GetTileData((IUnknown *)&v41, (IUnknown *)v14); /*0x6eed30*/
        goto LABEL_13; /*0x6eed35*/
      case 2: /*0x6eec7c*/
        location = v9->location; /*0x6eed46*/
        v17 = v9->location[0]; /*0x6eed4b*/
        v18 = location[1]; /*0x6eed4d*/
        v48 = location[2]; /*0x6eed53*/
        v19 = v7[40]; /*0x6eed5d*/
        v42 = v7[39] - v17; /*0x6eed60*/
        v20 = v7[41]; /*0x6eed6a*/
        v43 = v19 - v18; /*0x6eed6d*/
        v44 = v20 - v48; /*0x6eed77*/
        v21 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x6eed9c*/
                                            (double)v42 * (double)v42
                                          + (double)(v20 - v48) * (double)(v20 - v48)
                                          + (double)(v19 - v18) * (double)(v19 - v18)));
        v10 = 0x7FFFFFFF - Math::RoundToInt(v21); /*0x6eedae*/
        break; /*0x6eedb0*/
      case 3: /*0x6eec7c*/
        v22 = v9->location; /*0x6eedbe*/
        v23 = v9->location[0]; /*0x6eedc3*/
        v24 = v22[1]; /*0x6eedc5*/
        v25 = v22[2]; /*0x6eedc8*/
        v26 = v7[39]; /*0x6eedcb*/
        v49 = v25; /*0x6eedcd*/
        v27 = v7[40] - v24; /*0x6eedda*/
        v45 = v26 - v23; /*0x6eeddc*/
        v28 = v7[41]; /*0x6eede0*/
        v46 = v27; /*0x6eede3*/
        v47 = v28 - v49; /*0x6eeded*/
        v29 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x6eee12*/
                                            (double)(v26 - v23) * (double)(v26 - v23)
                                          + (double)(v28 - v49) * (double)(v28 - v49)
                                          + (double)v27 * (double)v27));
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
  while ( v35 < *(int *)&HouseClass_Player.__pad_5568[22684] ); /*0x6eee55*/
  result = v36; /*0x6eee5b*/
  if ( !v36 || v31 <= v32 ) /*0x6eee6d*/
    goto LABEL_22; /*0x6eee6d*/
  return result; /*0x6eee7a*/
}


// ==== 0x006EEEA0  TeamClass::ScoreMember  this=TeamClass  sig=csp ====
_DWORD *__thiscall TeamClass::ScoreMember(void *this, _DWORD *a2, int a3, int a4)
{
  _DWORD *result; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // edx
  _DWORD *v8; // esi
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // edx
  _DWORD *v12; // eax
  int v13; // edx
  int TileData; // eax
  int v15; // ebx
  int v16; // ecx
  int v17; // edx
  double v18; // st7
  int v19; // ebx
  int v20; // ecx
  int v21; // edx
  double v22; // st7
  int v23; // [esp+18h] [ebp-70h]
  int v24; // [esp+1Ch] [ebp-6Ch]
  int v25; // [esp+20h] [ebp-68h]
  _DWORD *v26; // [esp+24h] [ebp-64h]
  int v27; // [esp+28h] [ebp-60h]
  int v28; // [esp+2Ch] [ebp-5Ch]
  int v30; // [esp+34h] [ebp-54h] BYREF
  int v31; // [esp+38h] [ebp-50h] BYREF
  int v32; // [esp+3Ch] [ebp-4Ch]
  int v33; // [esp+40h] [ebp-48h]
  int v34; // [esp+44h] [ebp-44h]
  int v35; // [esp+48h] [ebp-40h]
  int v36; // [esp+4Ch] [ebp-3Ch]
  int v37; // [esp+50h] [ebp-38h]
  int v38; // [esp+54h] [ebp-34h]
  int v39; // [esp+5Ch] [ebp-2Ch]
  int v40; // [esp+60h] [ebp-28h]
  int v41; // [esp+68h] [ebp-20h]
  int v42; // [esp+6Ch] [ebp-1Ch]
  char v43[12]; // [esp+70h] [ebp-18h] BYREF
  char v44[12]; // [esp+7Ch] [ebp-Ch] BYREF

  result = 0; /*0x6eeeb3*/
  v5 = a2[135]; /*0x6eeeb5*/
  v6 = 0; /*0x6eeebb*/
  v26 = 0; /*0x6eeebd*/
  v25 = -1; /*0x6eeec1*/
  v28 = v5; /*0x6eeecc*/
  v32 = *(_DWORD *)(v5 + 120); /*0x6eeed2*/
  v27 = 0; /*0x6eeed6*/
  if ( v32 > 0 ) /*0x6eeeda*/
  {
    v7 = a3; /*0x6eeee0*/
    while ( 1 ) /*0x6eeeef*/
    {
      v8 = *(_DWORD **)(*(_DWORD *)(v5 + 108) + 4 * v6); /*0x6eeeef*/
      if ( (void *)v8[328] == this ) /*0x6eeefc*/
      {
        v9 = -1; /*0x6eef02*/
        switch ( v7 ) /*0x6eef0e*/
        {
          case 0: /*0x6eef0e*/
            v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v8 + 72))(v8, v43); /*0x6eef1e*/
            LOWORD(v23) = *v10 / 256; /*0x6eef31*/
            v11 = a2[135]; /*0x6eef42*/
            HIWORD(v23) = v10[1] / 256; /*0x6eef4b*/
            v30 = v23; /*0x6eef58*/
            v9 = 0x7FFFFFFF - CellClass::GetTileData((__int16 *)&v30, v11); /*0x6eef6d*/
            break; /*0x6eef6f*/
          case 1: /*0x6eef0e*/
            v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v8 + 72))(v8, v44); /*0x6eef7d*/
            LOWORD(v24) = *v12 / 256; /*0x6eef90*/
            v13 = a2[135]; /*0x6eefa1*/
            HIWORD(v24) = v12[1] / 256; /*0x6eefaa*/
            v31 = v24; /*0x6eefb7*/
            TileData = CellClass::GetTileData((__int16 *)&v31, v13); /*0x6eefc2*/
            goto LABEL_10; /*0x6eefc7*/
          case 2: /*0x6eef0e*/
            v15 = a2[39]; /*0x6eefd5*/
            v39 = a2[40]; /*0x6eefda*/
            v40 = a2[41]; /*0x6eefe9*/
            v16 = v8[40]; /*0x6eeff5*/
            v33 = v8[39] - v15; /*0x6eeff8*/
            v17 = v8[41]; /*0x6eeffe*/
            v34 = v16 - v39; /*0x6ef001*/
            v35 = v17 - v40; /*0x6ef00f*/
            v18 = Math::Sqrt( /*0x6ef034*/
                    (double)v33 * (double)v33
                  + (double)(v17 - v40) * (double)(v17 - v40)
                  + (double)(v16 - v39) * (double)(v16 - v39));
            v9 = 0x7FFFFFFF - Math::RoundToInt(v18); /*0x6ef046*/
            break; /*0x6ef048*/
          case 3: /*0x6eef0e*/
            v19 = a2[39]; /*0x6ef053*/
            v41 = a2[40]; /*0x6ef058*/
            v42 = a2[41]; /*0x6ef065*/
            v20 = v8[40]; /*0x6ef073*/
            v36 = v8[39] - v19; /*0x6ef076*/
            v21 = v8[41]; /*0x6ef07e*/
            v37 = v20 - v41; /*0x6ef083*/
            v38 = v21 - v42; /*0x6ef08d*/
            v22 = Math::Sqrt( /*0x6ef0b2*/
                    (double)v36 * (double)v36
                  + (double)(v21 - v42) * (double)(v21 - v42)
                  + (double)(v20 - v41) * (double)(v20 - v41));
            TileData = Math::RoundToInt(v22); /*0x6ef0ba*/
LABEL_10:
            v9 = TileData; /*0x6ef0bf*/
            break; /*0x6ef0bf*/
          default:
            break;
        }
        if ( v9 <= v25 ) /*0x6ef0c5*/
        {
          result = v26; /*0x6ef0d3*/
        }
        else
        {
          result = v8; /*0x6ef0c7*/
          v25 = v9; /*0x6ef0c9*/
          v26 = v8; /*0x6ef0cd*/
        }
      }
      v6 = ++v27; /*0x6ef0df*/
      if ( v27 >= v32 ) /*0x6ef0e6*/
        break; /*0x6ef0e6*/
      v7 = a3; /*0x6eeee5*/
      v5 = v28; /*0x6eeee8*/
    }
  }
  return result; /*0x6ef0ec*/
}


// ==== 0x006EF110  ObjectClass::DispatchTeamOrders  this=ObjectClass  sig=csp ====
char __thiscall DispatchTeamOrders(ObjectClass **this, int a2, int a3)
{
  ObjectClass **v3; // ebx
  ObjectClass *v4; // esi
  ObjectClass *spawnStatus; // ebp
  int v6; // eax
  int v7; // edi
  IUnknown *v8; // eax
  _DWORD *v9; // eax
  int attachedBomb; // eax
  ObjectClass *v11; // esi
  int v12; // ebp
  int v13; // edi
  int v14; // ebx
  _DWORD *v15; // edi
  ObjectClass *v16; // ebp
  char v18; // [esp+19h] [ebp-19h]
  int v20; // [esp+1Eh] [ebp-14h] BYREF
  _BYTE v21[12]; // [esp+26h] [ebp-Ch] BYREF
  char v22; // [esp+36h] [ebp+4h]

  v3 = this; /*0x6ef114*/
  v4 = this->u8_15; /*0x6ef118*/
  v18 = 1; /*0x6ef122*/
  if ( !v4 ) /*0x6ef127*/
    goto LABEL_28; /*0x6ef127*/
  do /*0x6ef2ab*/
  {
    spawnStatus = (ObjectClass *)v4[8].spawnStatus; /*0x6ef12d*/
    if ( v4 && v4->isAliveFlag ) /*0x6ef13b*/
    {
      if ( v4->health && (*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] || !v4->inLimbo) && !BYTE1(v4[9].visibilityFlags) ) /*0x6ef16b*/
      {
        v6 = *SessionClass::GetEntry(v3[10], (IUnknown *)&v20); /*0x6ef182*/
        if ( v6 == 54 || v6 == 53 ) /*0x6ef18c*/
          v7 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5920); /*0x6ef1a2*/
        else
          v7 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5916); /*0x6ef194*/
        if ( ObjectClass::DistanceTo(v4, (AbstractClass *)v3[13]) <= v7 ) /*0x6ef1b5*/
        {
          BYTE1(v4[9].visibilityFlags) = 1; /*0x6ef1ed*/
        }
        else if ( !v4[8].ambientSoundController[2] ) /*0x6ef1b7*/
        {
          (*(void (__thiscall **)(ObjectClass *, int, _DWORD))(*(_DWORD *)v4->__pad_0 + 488))(v4, 2, 0); /*0x6ef1c9*/
          (*(void (__thiscall **)(ObjectClass *, _DWORD))(*(_DWORD *)v4->__pad_0 + 968))(v4, 0); /*0x6ef1d5*/
          (*(void (__thiscall **)(ObjectClass *, ObjectClass *, int))(*(_DWORD *)v4->__pad_0 + 1152))(v4, v3[13], 1); /*0x6ef1e5*/
        }
      }
      if ( v4->isAliveFlag /*0x6ef238*/
        && v4->health
        && (*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] || !v4->inLimbo)
        && (BYTE1(v4[9].visibilityFlags) || (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v4->__pad_0 + 44))(v4) == 2) )
      {
        if ( v4[1].health ) /*0x6ef23a*/
        {
          v18 = 0; /*0x6ef24d*/
          v8 = (IUnknown *)(*(int (__thiscall **)(ObjectClass *, _BYTE *))(*(_DWORD *)v4->__pad_0 + 72))(v4, v21); /*0x6ef252*/
          v9 = Coord::To_Cell(&MEMORY[0x87F7E8], v8); /*0x6ef25b*/
          if ( !Cell::IsBridge(v9) && (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v4->__pad_0 + 388))(v4) != 16 ) /*0x6ef278*/
          {
            (*(void (__thiscall **)(ObjectClass *, _DWORD, int))(*(_DWORD *)v4->__pad_0 + 1152))(v4, 0, 1); /*0x6ef282*/
            (*(void (__thiscall **)(ObjectClass *, _DWORD))(*(_DWORD *)v4->__pad_0 + 968))(v4, 0); /*0x6ef28e*/
            (*(void (__thiscall **)(ObjectClass *, int, _DWORD))(*(_DWORD *)v4->__pad_0 + 488))(v4, 16, 0); /*0x6ef29c*/
            v18 = 0; /*0x6ef2a2*/
          }
        }
      }
    }
    v4 = spawnStatus; /*0x6ef2a9*/
  }
  while ( spawnStatus ); /*0x6ef2ab*/
  LOBYTE(attachedBomb) = v18; /*0x6ef2b1*/
  if ( v18 ) /*0x6ef2b7*/
  {
LABEL_28:
    v11 = v3[21]; /*0x6ef2c4*/
    v12 = 0; /*0x6ef2c7*/
    attachedBomb = (int)v3[9][1].attachedBomb; /*0x6ef2c9*/
    v13 = *(_DWORD *)(a2 + 4); /*0x6ef2cf*/
    v20 = v13; /*0x6ef2d2*/
    if ( *(int *)(attachedBomb + 156) <= 0 ) /*0x6ef2de*/
    {
LABEL_34:
      v22 = 0; /*0x6ef323*/
    }
    else
    {
      v14 = 168; /*0x6ef2e0*/
      while ( 1 ) /*0x6ef2e5*/
      {
        v15 = *(_DWORD **)(v14 + attachedBomb); /*0x6ef2e5*/
        if ( (*(int (__thiscall **)(_DWORD *))(*v15 + 44))(v15) == 3 ) /*0x6ef2f2*/
        {
          attachedBomb = v15[376]; /*0x6ef2f4*/
          if ( attachedBomb > 0 ) /*0x6ef2fc*/
            break; /*0x6ef2fc*/
        }
        ++v12; /*0x6ef306*/
        v14 += 8; /*0x6ef307*/
        attachedBomb = (int)(this->objectTypeFlags)[1].attachedBomb; /*0x6ef30d*/
        if ( v12 >= *(_DWORD *)(attachedBomb + 156) ) /*0x6ef319*/
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
        v16 = (ObjectClass *)v11[8].spawnStatus; /*0x6ef332*/
        attachedBomb = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v11->__pad_0 + 132))(v11); /*0x6ef33a*/
        if ( !*(_DWORD *)(attachedBomb + 1504) ) /*0x6ef340*/
          break; /*0x6ef340*/
        if ( v22 ) /*0x6ef354*/
        {
          attachedBomb = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v11->__pad_0 + 44))(v11); /*0x6ef35a*/
          if ( attachedBomb != 2 ) /*0x6ef360*/
            break; /*0x6ef360*/
        }
        attachedBomb = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v11->__pad_0 + 132))(v11); /*0x6ef36a*/
        if ( *(int *)(attachedBomb + 1504) > 0 ) /*0x6ef378*/
        {
          LOBYTE(attachedBomb) = v3[9][1].ambientSoundController[3]; /*0x6ef381*/
          if ( (_BYTE)attachedBomb ) /*0x6ef389*/
          {
            TeamClass::LiberateMember_Start((int)v3, (IUnknown *)v11, 0xFFFFFFFF, 0); /*0x6ef392*/
            (*(void (__thiscall **)(ObjectClass *, _DWORD))(*(_DWORD *)v11->__pad_0 + 968))(v11, 0); /*0x6ef39d*/
            (*(void (__thiscall **)(ObjectClass *, int, int))(*(_DWORD *)v11->__pad_0 + 1152))( /*0x6ef3b0*/
              v11,
              v11[3].abstractFlags,
              1);
            (*(void (__thiscall **)(ObjectClass *, int, _DWORD))(*(_DWORD *)v11->__pad_0 + 488))(v11, 2, 0); /*0x6ef3be*/
            if ( (*(unsigned __int8 (__thiscall **)(ObjectClass *))(*(_DWORD *)v11->__pad_0 + 512))(v11) ) /*0x6ef3c8*/
              (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)v11->__pad_0 + 492))(v11); /*0x6ef3d6*/
            LOBYTE(attachedBomb) = TechnoClass::SetFocus(v11, 0); /*0x6ef3e0*/
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
      TeamClass::LiberateMember_Start((int)v3, (IUnknown *)v11, 0xFFFFFFFF, 0); /*0x6ef40f*/
      (*(void (__thiscall **)(ObjectClass *, _DWORD))(*(_DWORD *)v11->__pad_0 + 968))(v11, 0); /*0x6ef421*/
      LOBYTE(attachedBomb) = (*(int (__thiscall **)(ObjectClass *, _DWORD, int))(*(_DWORD *)v11->__pad_0 + 1152))( /*0x6ef42f*/
                               v11,
                               0,
                               1);
      goto LABEL_51; /*0x6ef42f*/
    }
LABEL_52:
    *((_BYTE *)v3 + 128) = 1; /*0x6ef43f*/
  }
  return attachedBomb; /*0x6ef446*/
}


// ==== 0x006EF450  ObjectClass::method_6EF450  this=ObjectClass  sig=csp ====
char __thiscall sub_6EF450(_BYTE *this, int a2, int a3)
{
  this->needsRedraw = 1; /*0x6ef452*/
  this->hasParachute = 1; /*0x6ef458*/
  return 1; /*0x6ef45e*/
}


// ==== 0x006EF470  ObjectClass::Team_Create  this=ObjectClass  sig=csp ====
char __thiscall sub_6EF470(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  int i; // ebx
  int *v5; // esi

  v2 = 0; /*0x6ef476*/
  v3 = *(_DWORD *)(this->objectTypeFlags + 228); /*0x6ef47b*/
  if ( *(int *)(v3 + 156) <= 0 ) /*0x6ef489*/
    return 0; /*0x6ef4be*/
  for ( i = 168; ; i += 8 ) /*0x6ef48b*/
  {
    v5 = *(int **)(i + v3); /*0x6ef490*/
    if ( (*(int (__thiscall **)(int *))(*v5 + 44))(v5) == 3 && v5[376] > 0 ) /*0x6ef4a7*/
      break; /*0x6ef4a7*/
    ++v2; /*0x6ef4ac*/
    v3 = *(_DWORD *)(this->objectTypeFlags + 228); /*0x6ef4b0*/
    if ( v2 >= *(_DWORD *)(v3 + 156) ) /*0x6ef4bc*/
      return 0; /*0x6ef4bc*/
  }
  return 1; /*0x6ef4be*/
}


// ==== 0x006EF4D0  HouseClass::UpdateProductionQueue  this=HouseClass  sig=csp ====
int __thiscall HouseClass_UpdateProductionQueue(_DWORD *this, int a2)
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
  result = *(_DWORD *)(this->vtable5 + 228); /*0x6ef4de*/
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
      result = *(_DWORD *)(this->vtable5 + 228); /*0x6ef54f*/
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
int __thiscall sub_6EF5F0(_DWORD *this, int a2)
{
  int result; // eax

  for ( result = this->q054; result; result = *(_DWORD *)(result + 1496) ) /*0x6ef5f5*/
    *(_DWORD *)(result + 240) = a2; /*0x6ef5fb*/
  return result; /*0x6ef60b*/
}


// ==== 0x006EF610  TeamClass::PlayMemberAnimation  this=TeamClass  sig=csp ====
void __thiscall TeamClass::PlayMemberAnimation(int this, ScriptClass *aP1, char a3)
{
  int v3; // eax
  IUnknown *v4; // esi
  CoordStruct *v5; // ebx
  CoordStruct *v6; // ebp
  ObjectClass *v7; // edi
  CoordStruct *v8; // eax
  AnimClass *v9; // eax
  _BYTE v11[12]; // [esp+10h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)&aP1->__pad_0[4]; /*0x6ef61e*/
  if ( a3 /*0x6ef65e*/
    && (unsigned __int16)v3 < *(int *)&MEMORY[0x89F690].__pad_579C[62260]
    && (v4 = *(IUnknown **)(this + 84),
        v5 = (CoordStruct *)HIWORD(v3),
        v6 = *(CoordStruct **)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62248] + 4 * (unsigned __int16)v3),
        v4) )
  {
    do /*0x6ef6a9*/
    {
      v7 = (ObjectClass *)__2_YAPAXI_Z(0x1C8u); /*0x6ef66b*/
      if ( v7 ) /*0x6ef672*/
      {
        v8 = (CoordStruct *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(v4->field_0 + 72))(v4, v11); /*0x6ef689*/
        v9 = AnimClass::ctor((void **)v7, v6, v8, 0, v5, (void *)0x600, 0, 0); /*0x6ef690*/
        if ( v9 ) /*0x6ef697*/
          BuildingClass::AimTurret(v9, v4); /*0x6ef69c*/
      }
      v4 = *(IUnknown **)&v4->__pad_524[180]; /*0x6ef6a1*/
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
void __thiscall DeployTeamMembersAtStart(int this, ScriptClass *aP1, char a3)
{
  TechnoClass *v3; // esi
  TechnoClass *v4; // edi
  int v5; // ebx
  int v6; // eax
  AbstractClass *v7; // eax
  AbstractClass *StartCoordsHouseClass; // eax
  int v9; // esi
  bool v10; // zf
  int v11; // ebx
  IUnknown *v12; // eax
  AbstractClass *v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  int *v17; // edx
  double v18; // st7
  int v19; // edx
  double v20; // st7
  double v21; // st7
  IUnknown *v22; // eax
  int v23; // eax
  void *v24; // eax
  TeamClass *v25; // esi
  int v26; // [esp+24h] [ebp-38h] BYREF
  TeamClass *v27; // [esp+28h] [ebp-34h]
  double v28; // [esp+2Ch] [ebp-30h] BYREF
  double aP2_4; // [esp+34h] [ebp-28h] BYREF
  double v30; // [esp+3Ch] [ebp-20h]
  int v31; // [esp+44h] [ebp-18h]
  int v32; // [esp+48h] [ebp-14h]
  IUnknown *aP3; // [esp+4Ch] [ebp-10h]
  _DWORD v34[3]; // [esp+50h] [ebp-Ch] BYREF

  v27 = (TeamClass *)this; /*0x6ef711*/
  if ( a3 ) /*0x6ef715*/
  {
    v3 = *(TechnoClass **)(this + 84); /*0x6ef71b*/
    LODWORD(v28) = -1; /*0x6ef71e*/
    v4 = v3; /*0x6ef728*/
    if ( v3 ) /*0x6ef72a*/
    {
      do /*0x6ef771*/
      {
        v5 = *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v3->__pad_0 + 132))(v3) + 1532); /*0x6ef736*/
        if ( TechnoClass::IsDeployed((int)v3) /*0x6ef761*/
          && (BYTE1(v3[1].firepowerMultiplier[1])
           || (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v3->__pad_0 + 44))(v3) == 2)
          && v5 > SLODWORD(v28) )
        {
          v4 = v3; /*0x6ef763*/
          LODWORD(v28) = v5; /*0x6ef765*/
        }
        v3 = *(TechnoClass **)&v3[1].missionQueued; /*0x6ef769*/
      }
      while ( v3 ); /*0x6ef771*/
      this = (int)v27; /*0x6ef773*/
    }
    if ( !v4 ) /*0x6ef779*/
    {
      *(_BYTE *)(this + 128) = 1; /*0x6ef77b*/
      return; /*0x6ef788*/
    }
    v6 = *((_DWORD *)v4->focus + 5504); /*0x6ef791*/
    if ( v6 == -1 || (v7 = *(AbstractClass **)&HouseClass_Array->__pad_0[4 * v6]) == 0 ) /*0x6ef7a7*/
    {
      *(_BYTE *)(this + 128) = 1; /*0x6ef7a9*/
      return; /*0x6ef7b6*/
    }
    StartCoordsHouseClass = (AbstractClass *)HouseClass::GetStartCoords(v7, (AbstractClass *)v34); /*0x6ef7c0*/
    v9 = *(_DWORD *)StartCoordsHouseClass->__pad_0; /*0x6ef7c5*/
    v10 = *(_DWORD *)StartCoordsHouseClass->__pad_0 == *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6612]; /*0x6ef7cd*/
    v31 = *(_DWORD *)StartCoordsHouseClass->__pad_0; /*0x6ef7cf*/
    v11 = *(_DWORD *)&StartCoordsHouseClass->__pad_0[4]; /*0x6ef7d3*/
    v32 = v11; /*0x6ef7d6*/
    v12 = *(IUnknown **)&StartCoordsHouseClass->__pad_0[8]; /*0x6ef7da*/
    aP3 = v12; /*0x6ef7dd*/
    if ( v10 /*0x6ef7f1*/
      && v11 == *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6616]
      && v12 == *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6620] )
    {
      v27->stepCompleted = 1; /*0x6ef7f7*/
      return; /*0x6ef804*/
    }
    v13 = (AbstractClass *)HouseClass::GetStartCoords((_DWORD *)v4->focus, (AbstractClass *)v34); /*0x6ef817*/
    v14 = *(_DWORD *)v13->__pad_0; /*0x6ef819*/
    v10 = *(_DWORD *)v13->__pad_0 == *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6612]; /*0x6ef81b*/
    v15 = *(_DWORD *)&v13->__pad_0[4]; /*0x6ef821*/
    v16 = *(_DWORD *)&v13->__pad_0[8]; /*0x6ef824*/
    if ( v10 /*0x6ef837*/
      && v15 == *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6616]
      && v16 == *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6620] )
    {
      v17 = (int *)(*(int (__thiscall **)(TechnoClass *, _DWORD *))(*(_DWORD *)v4->__pad_0 + 72))(v4, v34); /*0x6ef845*/
      v14 = *v17; /*0x6ef847*/
      v15 = v17[1]; /*0x6ef849*/
      v34[2] = v17[2]; /*0x6ef84f*/
    }
    v34[0] = v14 - v9; /*0x6ef857*/
    v18 = Math::CalcAngle((double)(v11 - v15), (double)(v14 - v9)); /*0x6ef875*/
    LODWORD(v28) = (__int16)Math::RoundToInt((v18 - 1.570796326794897) * -10430.06004058427) - 0x3FFF; /*0x6ef899*/
    v19 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3444) << 8; /*0x6ef8a7*/
    v28 = (double)SLODWORD(v28) * -0.00009587672516830327; /*0x6ef8b4*/
    v30 = (double)v19; /*0x6ef8c6*/
    aP2_4 = (double)v32; /*0x6ef8ce*/
    v20 = Math::SinCos(v28); /*0x6ef8d2*/
    LODWORD(aP2_4) = Math::RoundToInt(aP2_4 - v20 * v30); /*0x6ef8e6*/
    v21 = Math::ArcTan2(v28); /*0x6ef8ea*/
    v22 = (IUnknown *)Math::RoundToInt(v21 * v30 + (double)v31); /*0x6ef8fa*/
    Coord::Subtract(v34, v22, (IUnknown *)LODWORD(aP2_4), aP3); /*0x6ef90e*/
    LOWORD(v28) = v34[0] / 256; /*0x6ef927*/
    WORD1(v28) = v34[1] / 256; /*0x6ef93e*/
    v26 = LODWORD(v28); /*0x6ef949*/
    LODWORD(v28) = 0; /*0x6ef956*/
    v23 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v4->__pad_0 + 132))(v4); /*0x6ef96e*/
    v26 = *LayerClass::Pathfinding_Find( /*0x6ef99b*/
             &MEMORY[0x87F7E8],
             (int)&aP2_4,
             &aP2_4,
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
    v24 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v26); /*0x6ef99f*/
    v25 = v27; /*0x6ef9a4*/
    TeamClass::SelectMember((int)v27, (int)v24); /*0x6ef9ab*/
    Debug::Log(); /*0x6ef9c8*/
    this = (int)v25; /*0x6ef9d0*/
  }
  TeamClass::UpdateMembers(this); /*0x6ef9d2*/
}


// ==== 0x006EF9E0  TechnoClass::IsDeployed  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass_IsDeployed(int this)
{
  return this && *(_BYTE *)(this + 144) && *(_DWORD *)(this + 108) && (MEMORY[0xA8E7AC] || !*(_BYTE *)(this + 129)); /*0x6efa0a*/
}


// ==== 0x006EFA10  TeamClass::SelectDeploymentTarget  this=TeamClass  sig=csp ====
void __thiscall TeamClass::SelectDeploymentTarget(int *this, int a2, char a3)
{
  int v3; // esi
  _DWORD *i; // edi
  int v5; // ebx
  _DWORD *v6; // esi
  int v7; // eax
  int *StartCoords; // eax
  int v9; // ebx
  int v10; // ecx
  char v11; // al
  __int16 v12; // cx
  __int16 v13; // ax
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // edx
  double v17; // st7
  int v18; // edx
  double v19; // st7
  double v20; // st7
  int v21; // eax
  void *v22; // eax
  int v23; // [esp+1Ch] [ebp-3Ch] BYREF
  double v24; // [esp+20h] [ebp-38h] BYREF
  int *v25; // [esp+2Ch] [ebp-2Ch]
  double v26; // [esp+30h] [ebp-28h] BYREF
  double v27; // [esp+38h] [ebp-20h] BYREF
  int v28; // [esp+40h] [ebp-18h]
  int v29; // [esp+4Ch] [ebp-Ch]
  int v30; // [esp+50h] [ebp-8h]
  int v31; // [esp+54h] [ebp-4h]

  v25 = this; /*0x6efa21*/
  if ( a3 ) /*0x6efa25*/
  {
    v3 = this->u8_15; /*0x6efa2b*/
    LODWORD(v24) = -1; /*0x6efa2e*/
    for ( i = (_DWORD *)v3; v3; v3 = *(_DWORD *)(v3 + 1496) ) /*0x6efa3a*/
    {
      v5 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 132))(v3) + 1532); /*0x6efa46*/
      if ( TechnoClass::IsDeployed(v3) /*0x6efa71*/
        && (*(_BYTE *)(v3 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 2)
        && v5 > SLODWORD(v24) )
      {
        i = (_DWORD *)v3; /*0x6efa73*/
        LODWORD(v24) = v5; /*0x6efa75*/
      }
    }
    v6 = 0; /*0x6efa83*/
    if ( i ) /*0x6efa87*/
    {
      v7 = *(_DWORD *)(i[135] + 22016); /*0x6efa8f*/
      if ( v7 != -1 ) /*0x6efa98*/
        v6 = *(_DWORD **)&HouseClass_Array->__pad_0[4 * v7]; /*0x6efaa0*/
    }
    StartCoords = HouseClass::GetStartCoords((_DWORD *)i[135], &v27); /*0x6efaae*/
    v9 = *StartCoords; /*0x6efab3*/
    v10 = StartCoords[1]; /*0x6efab7*/
    v29 = *StartCoords; /*0x6efaba*/
    v30 = v10; /*0x6efabe*/
    v31 = StartCoords[2]; /*0x6efac5*/
    if ( v6 ) /*0x6efac9*/
    {
      v14 = HouseClass::GetStartCoords(v6, &v27); /*0x6efaf7*/
      v15 = v14[1] - v30; /*0x6efb0f*/
      v16 = v14[2]; /*0x6efb11*/
      LODWORD(v27) = *v14 - v9; /*0x6efb14*/
      LODWORD(v24) = -v15; /*0x6efb1e*/
      v28 = v16; /*0x6efb22*/
      v17 = Math::CalcAngle((double)-v15, (double)SLODWORD(v27)); /*0x6efb31*/
      v13 = Math::RoundToInt((v17 - 1.570796326794897) * -10430.06004058427); /*0x6efb45*/
      LOWORD(v24) = v13; /*0x6efb4a*/
    }
    else
    {
      v11 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 255); /*0x6efadc*/
      LOBYTE(v12) = 0; /*0x6efae1*/
      HIBYTE(v12) = v11; /*0x6efae3*/
      v13 = v12; /*0x6efaea*/
    }
    LODWORD(v24) = v13 - 0x3FFF; /*0x6efb61*/
    v18 = HIDWORD(MEMORY[0x8871E0]->?) << 8; /*0x6efb6f*/
    v24 = (double)SLODWORD(v24) * -0.00009587672516830327; /*0x6efb7c*/
    v27 = (double)v18; /*0x6efb8e*/
    v26 = (double)v30; /*0x6efb96*/
    v19 = Math::SinCos(v24); /*0x6efb9a*/
    LODWORD(v26) = Math::RoundToInt(v26 - v19 * v27); /*0x6efbae*/
    v20 = Math::ArcTan2(v24); /*0x6efbb2*/
    LOWORD(v24) = (int)Math::RoundToInt(v20 * v27 + (double)v29) / 256; /*0x6efbd7*/
    WORD1(v24) = SLODWORD(v26) / 256; /*0x6efbef*/
    v23 = LODWORD(v24); /*0x6efc01*/
    LODWORD(v24) = 0; /*0x6efc0d*/
    v21 = (*(int (__thiscall **)(_DWORD *))(*i + 132))(i); /*0x6efc1e*/
    v23 = *LayerClass::Pathfinding_Find( /*0x6efc4b*/
             &MEMORY[0x87F7E8],
             (int)&v26,
             &v26,
             (__int16 *)&v23,
             *(_DWORD *)(v21 + 1660),
             -1,
             0,
             0,
             3,
             3,
             0,
             0,
             0,
             1,
             (__int16 *)&v24,
             0,
             0);
    v22 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v23); /*0x6efc4f*/
    TeamClass::SelectMember((int)v25, (int)v22); /*0x6efc59*/
    this = v25; /*0x6efc5e*/
  }
  TeamClass::UpdateMembers((int)this); /*0x6efc62*/
}


// ==== 0x006EFC70  ObjectClass::ProcessAISuperWeaponSelection  this=ObjectClass  sig=csp ====
void __thiscall ProcessAISuperWeaponSelection(int *this, ScriptClass *aP1, int a3)
{
  TechnoClass *v3; // esi
  int v4; // ebp
  TechnoClass *i; // ebx
  int v6; // edi
  _DWORD *focus; // edi
  int v8; // eax
  int v9; // ecx
  int j; // edx
  int v11; // esi
  int *v12; // ebp
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int *v17; // [esp+10h] [ebp-18h] BYREF
  int v18; // [esp+14h] [ebp-14h]
  int DefaultTimer; // [esp+18h] [ebp-10h]
  char v20[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v3 = (TechnoClass *)this->u8_15; /*0x6efc76*/
  v4 = -1; /*0x6efc79*/
  v17 = this; /*0x6efc7f*/
  for ( i = v3; v3; v3 = *(TechnoClass **)&v3[1].missionQueued ) /*0x6efc85*/
  {
    v6 = *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v3->__pad_0 + 132))(v3) + 1532); /*0x6efc91*/
    if ( TechnoClass::IsDeployed((int)v3) /*0x6efcba*/
      && (BYTE1(v3[1].firepowerMultiplier[1])
       || (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v3->__pad_0 + 44))(v3) == 2)
      && v6 > v4 )
    {
      i = v3; /*0x6efcbc*/
      v4 = v6; /*0x6efcbe*/
    }
  }
  if ( !i ) /*0x6efccc*/
  {
    *((_BYTE *)v17 + 128) = 1; /*0x6efcd5*/
    return; /*0x6efce0*/
  }
  focus = i->focus; /*0x6efce3*/
  v8 = 0; /*0x6efce9*/
  v9 = focus[153]; /*0x6efcf0*/
  if ( v9 <= 0 ) /*0x6efcf8*/
    goto LABEL_16; /*0x6efcf8*/
  for ( j = focus[150]; *(_DWORD *)(*(_DWORD *)(*(_DWORD *)j + 40) + 180) != 1; j += 4 ) /*0x6efd00*/
  {
    if ( ++v8 >= v9 ) /*0x6efd15*/
    {
      *((_BYTE *)v17 + 128) = 1; /*0x6efd1e*/
      return; /*0x6efd28*/
    }
  }
  v11 = *(_DWORD *)(focus[150] + 4 * v8); /*0x6efd2b*/
  if ( !v11 ) /*0x6efd30*/
  {
LABEL_16:
    *((_BYTE *)v17 + 128) = 1; /*0x6efd39*/
    return; /*0x6efd43*/
  }
  if ( *(_BYTE *)(v11 + 111) && HouseClass::GetPowerRatio(focus) >= 1.0 ) /*0x6efd5f*/
  {
    v12 = v17; /*0x6efd61*/
    v13 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v17[13] + 72))(v17[13], v20); /*0x6efd6f*/
    LOWORD(v18) = *v13 / 256; /*0x6efd82*/
    HIWORD(v18) = v13[1] / 256; /*0x6efd9a*/
    v14 = *(_DWORD *)(v11 + 40); /*0x6efda3*/
    v17 = (int *)v18; /*0x6efda6*/
    SuperWeapon::FireSuperWeaponHouseClass(focus, *(AbstractClass **)(v14 + 180), (AbstractClass *)&v17); /*0x6efdb4*/
    *((_BYTE *)v12 + 128) = 1; /*0x6efdba*/
    return; /*0x6efdc6*/
  }
  v15 = *(_DWORD *)(v11 + 48); /*0x6efdc9*/
  v16 = *(_DWORD *)(v11 + 56); /*0x6efdcc*/
  if ( v15 == -1 ) /*0x6efdd2*/
    goto LABEL_23; /*0x6efdd2*/
  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v15 < v16 ) /*0x6efddd*/
  {
    v16 -= *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v15; /*0x6efddf*/
LABEL_23:
    v18 = v16; /*0x6efde1*/
    goto LABEL_24; /*0x6efde1*/
  }
  v18 = 0; /*0x6efe32*/
LABEL_24:
  DefaultTimer = Super::GetDefaultTimer((_DWORD *)v11); /*0x6efde5*/
  if ( *(_BYTE *)(v11 + 109) ) /*0x6efdf0*/
  {
    if ( 1.0 - *(float *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3440) < (double)v18 / (double)DefaultTimer ) /*0x6efe1c*/
      *((_BYTE *)v17 + 128) = 1; /*0x6efe25*/
  }
  else
  {
    *((_BYTE *)v17 + 128) = 1; /*0x6efe42*/
  }
}


// ==== 0x006EFE60  SuperWeapon::DispatchTeam  this=SuperWeapon  sig=csp ====
void __thiscall SuperWeapon::DispatchTeam(int this, ScriptClass *aP1, int a3)
{
  int v4; // ebx
  TechnoClass *v5; // esi
  TechnoClass *v6; // eax
  int v7; // edi
  _DWORD *focus; // ebp
  int v9; // esi
  int v10; // ebx
  int v11; // eax
  int *v12; // edx
  int v13; // edi
  AbstractClass *v14; // ecx
  #375 *v15; // edx
  int v16; // edi
  TeamClass *v17; // edi
  FootClass *v18; // esi
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  int v21; // edx
  ScriptClass *v22; // ecx
  TechnoClass *v23; // [esp+10h] [ebp-1Ch]
  int v24; // [esp+14h] [ebp-18h] BYREF
  ScriptClass *v25; // [esp+18h] [ebp-14h] BYREF
  int DefaultTimer; // [esp+1Ch] [ebp-10h]
  _BYTE v27[12]; // [esp+20h] [ebp-Ch] BYREF
  ScriptClass *aP1b; // [esp+30h] [ebp+4h]
  ScriptClass *aP1a; // [esp+30h] [ebp+4h]

  v4 = -1; /*0x6efe68*/
  v5 = *(TechnoClass **)(this + 84); /*0x6efe6c*/
  v24 = this; /*0x6efe6f*/
  v6 = v5; /*0x6efe73*/
  v23 = v5; /*0x6efe77*/
  if ( v5 ) /*0x6efe7b*/
  {
    do /*0x6efec0*/
    {
      v7 = *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v5->__pad_0 + 132))(v5) + 1532); /*0x6efe87*/
      if ( TechnoClass::IsDeployed((int)v5) /*0x6efeb0*/
        && (BYTE1(v5[1].firepowerMultiplier[1])
         || (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v5->__pad_0 + 44))(v5) == 2)
        && v7 > v4 )
      {
        v23 = v5; /*0x6efeb2*/
        v4 = v7; /*0x6efeb6*/
      }
      v5 = *(TechnoClass **)&v5[1].missionQueued; /*0x6efeb8*/
    }
    while ( v5 ); /*0x6efec0*/
    v6 = v23; /*0x6efec2*/
  }
  if ( !v6 ) /*0x6efec8*/
  {
    *(_BYTE *)(this + 128) = 1; /*0x6efecb*/
    return; /*0x6efed8*/
  }
  focus = v6->focus; /*0x6efedb*/
  v9 = 0; /*0x6efee1*/
  v10 = 0; /*0x6efee3*/
  v25 = 0; /*0x6efee5*/
  v11 = focus[153]; /*0x6efee9*/
  DefaultTimer = 0; /*0x6efeef*/
  if ( v11 <= 0 ) /*0x6efef5*/
    goto LABEL_36; /*0x6efef5*/
  v12 = (int *)focus[150]; /*0x6efefb*/
  v13 = v11; /*0x6eff01*/
  do /*0x6eff20*/
  {
    v14 = *(AbstractClass **)(*(_DWORD *)(*v12 + 40) + 180); /*0x6eff08*/
    if ( v14 == (AbstractClass *)3 ) /*0x6eff11*/
      v9 = *v12; /*0x6eff13*/
    if ( v14 == (AbstractClass *)4 ) /*0x6eff18*/
      v10 = *v12; /*0x6eff1a*/
    ++v12; /*0x6eff1c*/
    --v13; /*0x6eff1f*/
  }
  while ( v13 ); /*0x6eff20*/
  DefaultTimer = v10; /*0x6eff24*/
  v25 = (ScriptClass *)v9; /*0x6eff28*/
  if ( !v9 || !v10 ) /*0x6eff34*/
  {
LABEL_36:
    *(_BYTE *)(v24 + 128) = 1; /*0x6f0114*/
    return; /*0x6f0114*/
  }
  if ( *(_BYTE *)(v9 + 111) && HouseClass::GetPowerRatio(focus) >= 1.0 ) /*0x6eff57*/
  {
    v15 = 0; /*0x6eff6a*/
    v16 = *((_DWORD *)v23->focus + 5504); /*0x6eff89*/
    if ( v16 != -1 ) /*0x6eff92*/
      v15 = *(#375 **)&HouseClass_Array->__pad_0[4 * v16]; /*0x6eff9a*/
    v17 = (TeamClass *)v24; /*0x6eff9d*/
    v18 = (FootClass *)DamageMapClassArea( /*0x6effb4*/
                         *((_DWORD *)g_TriggerTypeCount + (unsigned __int16)*(_DWORD *)&aP1->__pad_0[4]),
                         v15,
                         (int)v23,
                         (unsigned __int16)HIWORD(*(_DWORD *)&aP1->__pad_0[4]),
                         *(_BYTE *)(*(_DWORD *)(v24 + 36) + 247));
    if ( v18 ) /*0x6effb8*/
    {
      v19 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v24 + 52) + 72))( /*0x6effc8*/
                        *(_DWORD *)(v24 + 52),
                        v27);
      LOWORD(aP1b) = *v19 / 256; /*0x6effdb*/
      HIWORD(aP1b) = v19[1] / 256; /*0x6efff7*/
      v24 = (int)aP1b; /*0x6f0000*/
      SuperWeapon::FireSuperWeaponHouseClass(focus, *(AbstractClass **)(v25->field28 + 180), (AbstractClass *)&v24); /*0x6f0011*/
      v20 = (_DWORD *)(*(int (__thiscall **)(FootClass *, _BYTE *))(*(_DWORD *)v18->__pad_0 + 72))(v18, v27); /*0x6f001f*/
      LOWORD(aP1b) = *v20 / 256; /*0x6f0032*/
      HIWORD(aP1b) = v20[1] / 256; /*0x6f004a*/
      v25 = aP1b; /*0x6f0057*/
      SuperWeapon::FireSuperWeaponHouseClass( /*0x6f0068*/
        focus,
        *(AbstractClass **)(*(_DWORD *)(DefaultTimer + 40) + 180),
        (AbstractClass *)&v25);
      TeamClass::SelectMember((int)v17, (int)v18); /*0x6f0070*/
    }
    v17->stepCompleted = 1; /*0x6f0075*/
    return; /*0x6f0083*/
  }
  v21 = *(_DWORD *)(v9 + 48); /*0x6f0086*/
  v22 = *(ScriptClass **)(v9 + 56); /*0x6f0089*/
  if ( v21 == -1 ) /*0x6f008f*/
    goto LABEL_30; /*0x6f008f*/
  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v21 < (int)v22 ) /*0x6f009a*/
  {
    v22 = (ScriptClass *)((char *)v22 - (*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v21)); /*0x6f009c*/
LABEL_30:
    aP1a = v22; /*0x6f009e*/
    goto LABEL_31; /*0x6f009e*/
  }
  aP1a = 0; /*0x6f00ef*/
LABEL_31:
  DefaultTimer = Super::GetDefaultTimer((_DWORD *)v9); /*0x6f00a2*/
  if ( *(_BYTE *)(v9 + 109) ) /*0x6f00ad*/
  {
    if ( 1.0 - *(float *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3440) < (double)(int)aP1a /*0x6f00d8*/
                                                                                / (double)DefaultTimer )
      *(_BYTE *)(v24 + 128) = 1; /*0x6f00e1*/
  }
  else
  {
    *(_BYTE *)(v24 + 128) = 1; /*0x6f0102*/
  }
}

