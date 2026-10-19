// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00500200  BuildingPlacement::FindPosition  this=BuildingPlacement  sig=csp ====
_DWORD *__thiscall BuildingPlacement::FindPosition(HouseClass *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int v5; // ebx
  int v6; // ebx
  int v7; // eax
  int *v8; // eax
  _DWORD *v9; // edx
  int v10; // eax
  int v11; // esi
  int TileIndex; // eax
  int v13; // ecx
  __int16 v15[2]; // [esp+Ch] [ebp-18h] BYREF
  int v16; // [esp+10h] [ebp-14h] BYREF
  _DWORD v17[4]; // [esp+14h] [ebp-10h] BYREF

  v3 = a3; /*0x500205*/
  v5 = (*(int (__thiscall **)(_DWORD *))(*a3 + 732))(a3); /*0x50021a*/
  v6 = (*(int (__thiscall **)(_DWORD *))(*v3 + 728))(v3) + v5; /*0x500222*/
  if ( (*(int (__thiscall **)(_DWORD *))(*v3 + 724))(v3) + v6 ) /*0x50022e*/
    v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 4); /*0x50024b*/
  else
    v7 = 0; /*0x500237*/
  v8 = HouseClass::GenerateAttackCoords(this, &a3, v7); /*0x500258*/
  v9 = v3 + 39; /*0x500265*/
  v16 = *v8; /*0x500267*/
  v10 = v3[39]; /*0x500271*/
  v15[0] = 0; /*0x500276*/
  v11 = v3[40]; /*0x50027b*/
  v15[1] = 0; /*0x50027e*/
  v17[3] = v9[2]; /*0x500286*/
  LOWORD(a3) = v10 / 256; /*0x500296*/
  HIWORD(a3) = v11 / 256; /*0x5002b2*/
  TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3, 0, 0); /*0x5002cf*/
  v13 = *LayerClass::Pathfinding_Find( /*0x5002ea*/
           &stru_87F5F0.__pad_58[416],
           (int)v17,
           v17,
           (__int16 *)&v16,
           1,
           TileIndex,
           0,
           0,
           1,
           1,
           0,
           0,
           0,
           1,
           v15,
           0,
           0);
  *a2 = v13; /*0x5002f2*/
  return a2; /*0x5002f0*/
}



// ==== 0x00500300  CellClass::ScanOccupiers  this=CellClass  sig=csp ====
_DWORD *__thiscall CellClass::ScanOccupiers(CellClass *this, _DWORD *a2)
{
  double v2; // st7
  CellClass *v4; // edi
  int v5; // ecx
  int v6; // edx
  char *v7; // ebp
  CellClass *v8; // eax
  _BYTE *Building; // eax
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // ecx
  bool v13; // al
  PathfindingClass *v14; // edi
  unsigned int *v15; // eax
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  _DWORD *result; // eax
  int v21; // [esp+20h] [ebp-3Ch]
  int v22; // [esp+24h] [ebp-38h]
  int v24; // [esp+2Ch] [ebp-30h]
  _DWORD *v25; // [esp+30h] [ebp-2Ch]
  __int16 v26[2]; // [esp+34h] [ebp-28h] BYREF
  int v27; // [esp+38h] [ebp-24h]
  int v28; // [esp+3Ch] [ebp-20h]
  int v29; // [esp+40h] [ebp-1Ch]
  char v30[12]; // [esp+44h] [ebp-18h] BYREF
  char v31[12]; // [esp+50h] [ebp-Ch] BYREF
  __int16 v32; // [esp+60h] [ebp+4h]
  __int16 v33; // [esp+62h] [ebp+6h]

  v4 = this; /*0x50030c*/
  v25 = 0; /*0x500329*/
  v5 = *a2 / 256; /*0x500334*/
  v6 = a2[1] / 256; /*0x500337*/
  v22 = 0; /*0x50033c*/
  v32 = v5; /*0x500340*/
  v33 = v6; /*0x500345*/
  v7 = &g_MissionQueueFrame.waypoints[2150]; /*0x500351*/
  v24 = 369; /*0x500356*/
  while ( 1 )
  {
    LOWORD(v21) = *(_WORD *)v7 + v5; /*0x500375*/
    HIWORD(v21) = v6 + *((_WORD *)v7 + 1); /*0x50037a*/
    *(_DWORD *)v26 = v21; /*0x500385*/
    v8 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26); /*0x50038f*/
    Building = CellClass::FindBuilding(v8, 1); /*0x500396*/
    v10 = Building; /*0x50039b*/
    if ( Building && !Building[129] )
    {
      v11 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)Building + 60))(Building); /*0x5003b7*/
      if ( !v11
        || (CellClass *)v11 != v4
        && ((v12 = *(_DWORD *)(v11 + 48), v12 != *(_DWORD *)&v4->__pad_28[8])
          ? (v12 == -1
           ? (v13 = 0)
           : (v13 = (v4[68].unknown68 & (1 << v12)) != 0))
          : (v13 = 1),
            !v13) )
      {
        v14 = (PathfindingClass *)v10[135]; /*0x5003f9*/
        v15 = (unsigned int *)(*(int (__thiscall **)(_DWORD *, char *))(*v10 + 72))(v10, v30); /*0x500406*/
        if ( PathfindingClass::FindPath(v14, v15) == -1 /*0x500434*/
          && (*(int (__thiscall **)(_DWORD *))(*v10 + 456))(v10) >= -20
          && v10[136] != 2 )
        {
          v16 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v10 + 72))(v10, v31); /*0x50043f*/
          v17 = a2[1]; /*0x500446*/
          v27 = *a2 - *v16; /*0x50044b*/
          v18 = a2[2]; /*0x500454*/
          v28 = v17 - v16[1]; /*0x500457*/
          v29 = v18 - v16[2]; /*0x500467*/
          Math::Sqrt((double)v27 * (double)v27 + (double)v29 * (double)v29 + (double)v28 * (double)v28); /*0x50048c*/
          LOWORD(v19) = Math::RoundToInt(v2); /*0x500494*/
          if ( !v22 || v19 < v22 ) /*0x5004a3*/
          {
            v22 = v19; /*0x5004a5*/
            v25 = v10; /*0x5004a9*/
          }
        }
        v4 = this; /*0x5004ad*/
      }
    }
    v7 += 4; /*0x5004b5*/
    if ( !--v24 ) /*0x5004bd*/
      break; /*0x5004bd*/
    LOWORD(v6) = v33; /*0x500361*/
    LOWORD(v5) = v32; /*0x500361*/
  }
  result = v25; /*0x5004c3*/
  if ( !v25 ) /*0x5004ca*/
    return 0; /*0x5004cc*/
  return result; /*0x5004ce*/
}



// ==== 0x005004E0  GetHouseTechLevel  this=AbstractClass  sig=ida-proto ====
int __fastcall House_GetTechLevel(int a1, int a2)
{
  int v4; // eax

  if ( a2 < 0 ) /*0x5004e5*/
    return 0; /*0x5004e7*/
  v4 = TechnoTypeClass::GetByTypeAndIndex(a1, a2); /*0x5004ed*/
  if ( a1 == 6 || a1 == 7 ) /*0x5004fa*/
    return *(_DWORD *)(v4 + 3592); /*0x500500*/
  else
    return 0; /*0x5004fc*/
}



// ==== 0x00500510  HouseClass::GetBuildLimit  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GetBuildLimit(HouseClass *this, int a2, char a3, int a4)
{
  int result; // eax

  switch ( a2 ) /*0x500522*/
  {
    case 1: /*0x500522*/
    case 40: /*0x500522*/
      if ( a3 ) /*0x500538*/
        result = (int)this->primaryForShips; /*0x50053a*/
      else
        result = (int)this->primaryForVehicles; /*0x500543*/
      break; /*0x500540*/
    case 2: /*0x500522*/
    case 3: /*0x500522*/
      result = (int)this->primaryForAircraft; /*0x500565*/
      break; /*0x50056b*/
    case 6: /*0x500522*/
    case 7: /*0x500522*/
      if ( a4 == 5 ) /*0x500551*/
        result = (int)this->primaryForDefenses; /*0x500553*/
      else
        result = (int)this->primaryForBuildings; /*0x50055c*/
      break; /*0x500559*/
    case 15: /*0x500522*/
    case 16: /*0x500522*/
      result = (int)this->primaryForInfantry; /*0x500529*/
      break; /*0x50052f*/
    default:
      result = 0; /*0x50056e*/
      break; /*0x50056e*/
  }
  return result; /*0x50052f*/
}



// ==== 0x005005B0  SidebarClass::MarkTabForRebuild  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::MarkTabForRebuild(SidebarClass *this, int a2, char a3, int a4)
{
  char result; // al

  result = a2 - 1; /*0x5005b5*/
  switch ( a2 ) /*0x5005c5*/
  {
    case 1: /*0x5005c5*/
    case 40: /*0x5005c5*/
      goto LABEL_3;
    case 2: /*0x5005c5*/
    case 3: /*0x5005c5*/
      *((_BYTE *)this + 21456) = 1; /*0x50060b*/
      break; /*0x50060b*/
    case 6: /*0x5005c5*/
    case 7: /*0x5005c5*/
      if ( a4 == 5 ) /*0x5005f3*/
        *((_BYTE *)this + 21464) = 1; /*0x5005f5*/
      else
        *((_BYTE *)this + 21460) = 1; /*0x500600*/
      break; /*0x5005fd*/
    case 15: /*0x5005c5*/
    case 16: /*0x5005c5*/
      *((_BYTE *)this + 21457) = 1; /*0x5005cc*/
LABEL_3:
      result = a3; /*0x5005d2*/
      if ( a3 ) /*0x5005d8*/
        *((_BYTE *)this + 21459) = 1; /*0x5005da*/
      else
        *((_BYTE *)this + 21458) = 1; /*0x5005e4*/
      break; /*0x5005e1*/
    default:
      return result;
  }
  return result; /*0x5005e0*/
}



// ==== 0x00500700  SidebarClass::getTypeProductionCount  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::getTypeProductionCount(SidebarClass *this, int a2, char a3, int a4)
{
  char result; // al

  switch ( a2 ) /*0x500712*/
  {
    case 1: /*0x500712*/
    case 40: /*0x500712*/
      if ( a3 ) /*0x500728*/
        result = *((_BYTE *)this + 21459); /*0x50072a*/
      else
        result = *((_BYTE *)this + 21458); /*0x500733*/
      break; /*0x500730*/
    case 2: /*0x500712*/
    case 3: /*0x500712*/
      result = *((_BYTE *)this + 21456); /*0x500755*/
      break; /*0x50075b*/
    case 6: /*0x500712*/
    case 7: /*0x500712*/
      if ( a4 == 5 ) /*0x500741*/
        result = *((_BYTE *)this + 21464); /*0x500743*/
      else
        result = *((_BYTE *)this + 21460); /*0x50074c*/
      break; /*0x500749*/
    case 15: /*0x500712*/
    case 16: /*0x500712*/
      result = *((_BYTE *)this + 21457); /*0x500719*/
      break; /*0x50071f*/
    default:
      result = 0; /*0x50075e*/
      break; /*0x50075e*/
  }
  return result; /*0x50071f*/
}



// ==== 0x005007A0  Sidebar::Dispatch  this=HouseClass  sig=csp ====
char __thiscall Sidebar::Dispatch(Sidebar *this, int a2, char a3, int a4, char a5)
{
  char result; // al

  result = a2 - 1; /*0x5007a5*/
  switch ( a2 ) /*0x5007b7*/
  {
    case 1: /*0x5007b7*/
    case 40: /*0x5007b7*/
      goto LABEL_3;
    case 2: /*0x5007b7*/
    case 3: /*0x5007b7*/
      this->HouseClass_field_53D0 = a5; /*0x500807*/
      break; /*0x500807*/
    case 6: /*0x5007b7*/
    case 7: /*0x5007b7*/
      if ( a4 == 5 ) /*0x5007e5*/
      {
        this->q53D8 = a5; /*0x5007ec*/
      }
      else
      {
        this->q53D4 = a5; /*0x5007fa*/
        result = a5; /*0x5007f5*/
      }
      break; /*0x5007f2*/
    case 15: /*0x5007b7*/
    case 16: /*0x5007b7*/
      this->q53D1 = a5; /*0x5007be*/
LABEL_3:
      result = a3; /*0x5007c4*/
      if ( a3 ) /*0x5007ca*/
        this->q53D3 = a5; /*0x5007cc*/
      else
        this->q53D2 = a5; /*0x5007d6*/
      break; /*0x5007d3*/
    default:
      return result;
  }
  return result; /*0x5007d2*/
}



// ==== 0x00500910  HouseClass::GetFactoryCount  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GetFactoryCount(HouseClass *this, int a2, char a3)
{
  int *p_numShipyards; // eax
  int result; // eax

  switch ( a2 ) /*0x500922*/
  {
    case 1: /*0x500922*/
    case 40: /*0x500922*/
      if ( a3 ) /*0x50092f*/
        p_numShipyards = &this->numShipyards; /*0x500931*/
      else
        p_numShipyards = &this->numWarFactories; /*0x500939*/
      goto LABEL_8; /*0x500937*/
    case 2: /*0x500922*/
    case 3: /*0x500922*/
      p_numShipyards = &this->numAirpads; /*0x500941*/
      goto LABEL_8; /*0x500947*/
    case 6: /*0x500922*/
    case 7: /*0x500922*/
      p_numShipyards = &this->numConYards; /*0x500951*/
      goto LABEL_8; /*0x500951*/
    case 15: /*0x500922*/
    case 16: /*0x500922*/
      p_numShipyards = &this->numBarracks; /*0x500949*/
LABEL_8:
      if ( !p_numShipyards ) /*0x500959*/
        goto LABEL_10; /*0x500959*/
      result = *p_numShipyards; /*0x50095b*/
      break; /*0x50095d*/
    default:
LABEL_10:
      result = 0; /*0x500960*/
      break; /*0x500960*/
  }
  return result; /*0x50095d*/
}



// ==== 0x005009B0  HouseClass::LoadTypeList  this=HouseClass  sig=csp ====
int __usercall HouseClass::LoadTypeList@<eax>(INIClass *this@<ecx>, double a2@<st0>)
{
  int v3; // ebx
  unsigned __int8 *StringByIndex; // eax
  int v5; // esi
  int *v6; // eax
  int v7; // esi
  int result; // eax
  int v9; // edi
  bool v10; // zf
  int v11; // esi
  int i; // esi
  int *v13; // eax
  int v14; // eax
  int KeyCount; // [esp+10h] [ebp-30h]
  char Source[20]; // [esp+14h] [ebp-2Ch] BYREF
  char Destination[20]; // [esp+28h] [ebp-18h] BYREF
  char v18; // [esp+3Ch] [ebp-4h]

  v3 = 0; /*0x5009c3*/
  KeyCount = INIClass::GetKeyCount(this->__pad_0, g_INI_Key_Houses); /*0x5009c7*/
  if ( KeyCount > 0 ) /*0x5009cb*/
  {
    do /*0x500a83*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this->__pad_0, g_INI_Key_Houses, v3); /*0x5009e5*/
      INIClass::GetString(this, g_INI_Key_Houses, StringByIndex, &g_INI_DefaultBuffer, Source, 20); /*0x5009f2*/
      v5 = SuperWeaponTypeClass::FindOrCreate( /*0x500a0a*/
             (SuperWeaponTypeClass *)this,
             (unsigned __int8 *)Source,
             (unsigned __int8 *)g_INI_Key_Country,
             -1);
      if ( v5 == -1 ) /*0x500a0f*/
        v5 = 0; /*0x500a11*/
      v6 = (int *)__2_YAPAXI_Z(0x160B8u); /*0x500a18*/
      if ( v6 ) /*0x500a22*/
        v7 = HouseClass::Construct(v6, *((_DWORD *)dword_A83C9C + v5)); /*0x500a35*/
      else
        v7 = 0; /*0x500a39*/
      if ( Source ) /*0x500a41*/
      {
        strncpy(Destination, Source, 0x14u); /*0x500a55*/
        v18 = 0; /*0x500a5d*/
      }
      else
      {
        Destination[0] = (unsigned __int8)Source; /*0x500a43*/
      }
      if ( Destination != (char *)(v7 + 90100) ) /*0x500a6e*/
      {
        qmemcpy((void *)(v7 + 90100), Destination, 0x14u); /*0x500a79*/
        *(_BYTE *)(v7 + 90120) = v18; /*0x500a7b*/
      }
      ++v3; /*0x500a80*/
    }
    while ( v3 < KeyCount ); /*0x500a83*/
  }
  result = stru_A80220.?; /*0x500a89*/
  v9 = 0; /*0x500a8e*/
  v10 = stru_A80220.? == 0; /*0x500a90*/
  if ( stru_A80220.? > 0 ) /*0x500a92*/
  {
    do /*0x500aeb*/
    {
      v11 = *((_DWORD *)stru_A80220.? + v9); /*0x500a9a*/
      HouseClass::ReadFromINI(v11, a2, (unsigned __int8 ***)this); /*0x500a9f*/
      if ( !*(_DWORD *)&dword_A8B238 ) /*0x500aab*/
      {
        if ( *(_BYTE *)(v11 + 492) || *(_BYTE *)(v11 + 493) ) /*0x500ab7*/
          HouseClass::SetCombatPower((int *)v11, (int)dword_A8B230[43].ptr_0); /*0x500ace*/
        else
          HouseClass::SetCombatPower((int *)v11, (int)dword_A8B230[43].ptr_4); /*0x500ade*/
      }
      result = stru_A80220.?; /*0x500ae3*/
      ++v9; /*0x500ae8*/
    }
    while ( v9 < stru_A80220.? ); /*0x500aeb*/
    v10 = stru_A80220.? == 0; /*0x500aed*/
  }
  if ( v10 ) /*0x500aef*/
  {
    result = dword_A83CA8; /*0x500af1*/
    for ( i = 0; i < dword_A83CA8; ++i ) /*0x500afa*/
    {
      v13 = (int *)__2_YAPAXI_Z(0x160B8u); /*0x500b01*/
      if ( v13 ) /*0x500b0b*/
        v14 = HouseClass::Construct(v13, *((_DWORD *)dword_A83C9C + i)); /*0x500b19*/
      else
        v14 = 0; /*0x500b20*/
      HouseClass::ReadFromINI(v14, a2, (unsigned __int8 ***)this); /*0x500b25*/
      result = dword_A83CA8; /*0x500b2a*/
    }
  }
  return result; /*0x500b34*/
}



// ==== 0x00500B40  HouseClass::ReadFromINI  this=IUnknown  sig=csp ====
int __userpurge HouseClass::ReadFromINI@<eax>(int this@<ecx>, double a2@<st0>, unsigned __int8 ***a3)
{
  bool *v4; // esi
  char Bool_Overwrite; // al
  int v6; // edx
  char *v7; // edi
  wchar_t *StringCSF; // eax
  int v9; // eax
  int Int_Overwrite; // eax
  int IntFromINI; // eax
  int AnimByName; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  unsigned __int16 v18; // di
  char v19; // al
  double v20; // st6
  int v21; // edx
  double v22; // st7
  unsigned __int8 v24; // c0
  unsigned __int8 v25; // c3
  char v26; // al
  int v27; // ecx
  int v28; // edi
  int v29; // eax
  int v30; // eax
  int result; // eax
  char v32; // [esp+0h] [ebp-D0h]
  int v33; // [esp+4h] [ebp-CCh]
  char v34; // [esp+4h] [ebp-CCh]
  double v35; // [esp+18h] [ebp-B8h] BYREF
  double v36; // [esp+20h] [ebp-B0h] BYREF
  double v37; // [esp+28h] [ebp-A8h] BYREF
  char v38[20]; // [esp+38h] [ebp-98h] BYREF
  char Destination[32]; // [esp+4Ch] [ebp-84h] BYREF
  char Source[100]; // [esp+6Ch] [ebp-64h] BYREF

  strcpy(v38, (const char *)(this + 90100)); /*0x500b6f*/
  v4 = (bool *)a3; /*0x500b78*/
  INIClass::ResetSection(a3); /*0x500b7d*/
  *(_DWORD *)(this + 468) = INIClass::ReadInt_Overwrite( /*0x500bae*/
                              (bool *)a3,
                              (unsigned __int8 *)v38,
                              (unsigned __int8 *)g_INI_Key_TechLevel,
                              *((_DWORD *)dword_A8B230 + 1173));
  *(_DWORD *)(this + 476) = 100 /*0x500bd0*/
                          * INIClass::ReadInt_Overwrite(
                              (bool *)a3,
                              (unsigned __int8 *)v38,
                              (unsigned __int8 *)g_INI_Key_Credits,
                              0);
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)a3, (unsigned __int8 *)v38, (unsigned __int8 *)aPlayercontrol, 0); /*0x500bd6*/
  *(_BYTE *)(this + 493) = Bool_Overwrite; /*0x500bdd*/
  if ( Bool_Overwrite && !dword_A8B238[0] ) /*0x500bec*/
  {
    if ( dword_A8EB64 ) /*0x500bf5*/
    {
      if ( dword_A8EB64 == 2 ) /*0x500c10*/
      {
        *(_DWORD *)(this + 780) = *(_DWORD *)(this + 476) + *(_DWORD *)&dword_8871E0->__pad_C3C[452]; /*0x500c25*/
LABEL_9:
        *(_DWORD *)(this + 780) &= (*(_DWORD *)(this + 780) <= 0) - 1; /*0x500c39*/
        goto LABEL_11; /*0x500c4f*/
      }
      v6 = *(_DWORD *)(this + 476); /*0x500c2d*/
    }
    else
    {
      v6 = *(_DWORD *)(this + 476) + *(_DWORD *)&dword_8871E0->__pad_C3C[448]; /*0x500c09*/
    }
    *(_DWORD *)(this + 780) = v6; /*0x500c33*/
    goto LABEL_9; /*0x500c33*/
  }
  *(_DWORD *)(this + 780) = *(_DWORD *)(this + 476); /*0x500c57*/
LABEL_11:
  v7 = (char *)(this + 90121); /*0x500c5d*/
  INIClass::GetString( /*0x500c77*/
    a3,
    (unsigned __int8 *)v38,
    (unsigned __int8 *)g_INI_Key_UIName,
    (char *)(this + 90121),
    Source,
    32);
  if ( Source ) /*0x500c82*/
  {
    strncpy(Destination, Source, 0x1Fu); /*0x500c96*/
    Destination[31] = 0; /*0x500c9e*/
  }
  else
  {
    Destination[0] = (unsigned __int8)Source; /*0x500c84*/
  }
  if ( Destination != v7 ) /*0x500ca9*/
  {
    qmemcpy(v7, Destination, 0x20u); /*0x500cb4*/
    v4 = (bool *)a3; /*0x500cb6*/
  }
  if ( *(_BYTE *)(this + 90121) ) /*0x500cb9*/
  {
    StringCSF = GetStringCSF((wchar_t *)(this + 90121), 0, g_Str_File_House_CPP, 8507); /*0x500cd7*/
    wcsncpy((wchar_t *)(this + 90154), StringCSF, 0x20u); /*0x500ce4*/
    *(_WORD *)(this + 90194) = 0; /*0x500cec*/
  }
  else
  {
    wcscpy((wchar_t *)(this + 90154), *(const wchar_t **)(*(_DWORD *)(this + 52) + 96)); /*0x500d05*/
  }
  *(_DWORD *)(this + 22108) = INIClass::ReadInt_Overwrite( /*0x500d25*/
                                v4,
                                (unsigned __int8 *)v38,
                                aRatioaitrigger,
                                *(_DWORD *)(this + 22108));
  *(_DWORD *)(this + 22112) = INIClass::ReadInt_Overwrite(v4, (unsigned __int8 *)v38, aRatioteamaircr, 75); /*0x500d4c*/
  *(_DWORD *)(this + 22116) = INIClass::ReadInt_Overwrite(v4, (unsigned __int8 *)v38, aRatioteaminfan, 75); /*0x500d65*/
  *(_DWORD *)(this + 22120) = INIClass::ReadInt_Overwrite(v4, (unsigned __int8 *)v38, aRatioteamunits, 75); /*0x500d70*/
  v9 = *(_DWORD *)(*(_DWORD *)(this + 52) + 188); /*0x500d79*/
  *(_DWORD *)(this + 488) = v9; /*0x500d82*/
  if ( v9 == -1 ) /*0x500d88*/
    *(_DWORD *)(this + 488) = 0; /*0x500d8a*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(v4, (unsigned __int8 *)v38, (unsigned __int8 *)g_INI_Key_IQ, 0); /*0x500da2*/
  if ( Int_Overwrite > *(_DWORD *)&dword_8871E0->__pad_C3C[2040] ) /*0x500db3*/
    Int_Overwrite = 1; /*0x500db5*/
  *(_DWORD *)(this + 464) = Int_Overwrite; /*0x500dba*/
  *(_DWORD *)(this + 588) = Int_Overwrite; /*0x500dc0*/
  IntFromINI = HouseClass::ReadIntFromINI((unsigned __int8 ***)v4, (unsigned __int8 *)v38, (unsigned __int8 *)aEdge, -1); /*0x500dd4*/
  v33 = *(_DWORD *)(this + 90196); /*0x500de3*/
  *(_DWORD *)(this + 480) = IntFromINI; /*0x500dec*/
  AnimByName = BuildingTypeClass::FindAnimByName( /*0x500df2*/
                 (unsigned __int8 ***)v4,
                 (unsigned __int8 *)v38,
                 (unsigned __int8 *)aColor,
                 v33);
  *(_DWORD *)(this + 90196) = AnimByName; /*0x500df9*/
  if ( AnimByName < 0 ) /*0x500e04*/
    *(_DWORD *)(this + 90196) = 5; /*0x500e06*/
  v13 = *((_DWORD *)dword_B054D4 + *(_DWORD *)(this + 90196)); /*0x500e17*/
  if ( !v13 ) /*0x500e1c*/
  {
    Debug::Log(); /*0x500e32*/
    *(_DWORD *)(this + 90196) = 5; /*0x500e37*/
    v13 = *((_DWORD *)dword_B054D4 + 5); /*0x500e46*/
  }
  v14 = *(_DWORD *)(v13 + 816); /*0x500e49*/
  v15 = *(_DWORD *)(v13 + 780); /*0x500e4f*/
  v16 = *(_DWORD *)(v15 + 4); /*0x500e55*/
  v17 = *(_DWORD *)(v15 + 372); /*0x500e58*/
  if ( v16 == 1 ) /*0x500e61*/
    v18 = *(unsigned __int8 *)(v17 + v14); /*0x500e68*/
  else
    v18 = *(_WORD *)(v17 + 2 * v14); /*0x500e6e*/
  LOBYTE(v35) = (unsigned __int8)(v18 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x500e9b*/
  BYTE1(v35) = (unsigned __int8)(v18 >> g_BitMask_Green) << g_BitMask_Blue; /*0x500ea8*/
  v19 = (unsigned __int8)(v18 >> g_BitShift_Blue) << g_BitMask_Red; /*0x500ebc*/
  *(_WORD *)(this + 22265) = LOWORD(v35); /*0x500ec6*/
  *(_BYTE *)(this + 22267) = v19; /*0x500ec9*/
  v20 = (double)*(unsigned __int8 *)(this + 22265); /*0x500edc*/
  LODWORD(v35) = *(unsigned __int8 *)(this + 22266); /*0x500ee0*/
  v21 = *(unsigned __int8 *)(this + 22267); /*0x500ee6*/
  v36 = v20; /*0x500eec*/
  v37 = (double)SLODWORD(v35); /*0x500ef8*/
  v35 = (double)v21; /*0x500f00*/
  Math::Sqrt(v35 * v35 + v37 * v37 + v20 * v20); /*0x500f1d*/
  if ( a2 == 0.0 ) /*0x500f30*/
  {
    v35 = 255.0; /*0x500f34*/
    v37 = 255.0; /*0x500f44*/
    v36 = 255.0; /*0x500f54*/
  }
  else
  {
    v36 = v36 * 240.0 / a2; /*0x500f75*/
    if ( v36 > 255.0 ) /*0x500f84*/
      v36 = 255.0; /*0x500f86*/
    v37 = v37 * 240.0 / a2; /*0x500fa2*/
    if ( v37 > 255.0 ) /*0x500fb1*/
      v37 = 255.0; /*0x500fb3*/
    v22 = v35 * 240.0 / a2; /*0x500fcd*/
    v35 = v22; /*0x500fd5*/
    if ( !(v24 | v25) ) /*0x500fdb*/
    {
      v22 = 255.0; /*0x500fe2*/
      v35 = 255.0; /*0x500fe8*/
    }
    if ( v36 < 96.0 ) /*0x500ffb*/
      v36 = 0.0; /*0x500ffd*/
    if ( v37 < 96.0 ) /*0x50101c*/
      v37 = 0.0; /*0x50101e*/
    if ( v22 < 96.0 ) /*0x501039*/
      v35 = 0.0; /*0x50103b*/
  }
  globalHelper_00B920((int)&v36, (int)&v37, (int)&v35); /*0x501058*/
  v34 = Math::RoundToInt(v35); /*0x50106a*/
  v32 = Math::RoundToInt(v37); /*0x501074*/
  v26 = Math::RoundToInt(v36); /*0x501075*/
  HouseClass::processRadar((_BYTE *)(this + 22268), v26, v32, v34); /*0x501081*/
  v27 = *(_DWORD *)(this + 48); /*0x501086*/
  v28 = 0; /*0x501089*/
  *(_DWORD *)(this + 22496) = 0; /*0x50108b*/
  HouseClass::HandleAlliance((int *)this, *((_DWORD *)&dword_A8022C->AbstractClass + v27), 0); /*0x50109e*/
  LODWORD(v35) = HouseClass::ReadHouseNamesToBitmask( /*0x5010b5*/
                   (unsigned __int8 ***)v4,
                   (unsigned __int8 *)v38,
                   (unsigned __int8 *)aAllies,
                   0);
  if ( dword_A80238 > 0 ) /*0x5010c0*/
  {
    do /*0x5010ef*/
    {
      v29 = *((_DWORD *)&dword_A8022C->AbstractClass + v28); /*0x5010c8*/
      if ( ((1 << *(_DWORD *)(v29 + 48)) & LODWORD(v35)) != 0 ) /*0x5010db*/
        HouseClass::HandleAlliance((int *)this, v29, 0); /*0x5010e2*/
      ++v28; /*0x5010ec*/
    }
    while ( v28 < dword_A80238 ); /*0x5010ef*/
  }
  v30 = 175 * *(_DWORD *)(this + 48) /*0x501117*/
      + *(_DWORD *)(*(_DWORD *)&dword_8871E0->__pad_C3C[1312] + 4 * *(_DWORD *)(this + 388));
  *(_DWORD *)(this + 22424) = dword_A8ED84; /*0x501125*/
  *(_DWORD *)(this + 22428) = HIDWORD(v37); /*0x50112f*/
  *(_DWORD *)(this + 22432) = v30; /*0x501138*/
  result = BuildingPrerequisiteClass::ReadNodeGraph( /*0x501141*/
             (int *)(this + 22272),
             (unsigned __int8 ***)v4,
             (unsigned __int8 *)v38);
  *(_DWORD *)(this + 22388) = this; /*0x501147*/
  return result; /*0x501146*/
}



// ==== 0x00501160  CCINIClass::WriteHouses  this=INIClass  sig=csp ====
int __thiscall sub_501160(char *this)
{
  int result; // eax
  int i; // ebx
  int v4; // esi
  char Source[32]; // [esp+Ch] [ebp-40h] BYREF
  char Buffer[32]; // [esp+2Ch] [ebp-20h] BYREF

  INIClass::ClearSection((int)this, (int)g_INI_Key_Houses, 0); /*0x50116f*/
  result = dword_A80238; /*0x501174*/
  for ( i = 0; i < dword_A80238; ++i ) /*0x50117d*/
  {
    strcpy(Source, (const char *)(*(_DWORD *)&dword_A8022C->AbstractClass[4 * i] + 90100)); /*0x5011ac*/
    sprintf(Buffer, g_Str_Trace, i); /*0x5011ba*/
    INIClass::SetString(this, (unsigned __int8 *)g_INI_Key_Houses, Buffer, Source); /*0x5011d3*/
    result = dword_A80238; /*0x5011d8*/
  }
  v4 = 0; /*0x5011e3*/
  if ( result > 0 ) /*0x5011e7*/
  {
    do /*0x501200*/
    {
      HouseClass::SaveToINI(*(_DWORD *)&dword_A8022C->AbstractClass[4 * v4], this); /*0x5011f3*/
      result = dword_A80238; /*0x5011f8*/
      ++v4; /*0x5011fd*/
    }
    while ( v4 < dword_A80238 ); /*0x501200*/
  }
  return result; /*0x501202*/
}



// ==== 0x00501210  HouseClass::SaveToINI  this=MapClass  sig=csp ====
int __thiscall HouseClass_SaveToINI(int this, char *a2)
{
  int v4; // ebp
  char *v5; // edx
  int v6; // ecx
  char Block[20]; // [esp+10h] [ebp-14h] BYREF
  int v9; // [esp+28h] [ebp+4h]

  strcpy(Block, (const char *)(this + 90100)); /*0x501239*/
  INIClass::ClearSection((int)a2, (int)Block, 0); /*0x50124d*/
  INIClass::SetString(a2, (unsigned __int8 *)Block, g_INI_Key_Country, (char *)(*(_DWORD *)(this + 52) + 36)); /*0x501265*/
  INIClass::SetInt(a2, (unsigned __int8 *)Block, g_INI_Key_TechLevel, *(_DWORD *)(this + 468), 0); /*0x50127f*/
  INIClass::SetInt(a2, (unsigned __int8 *)Block, g_INI_Key_Credits, *(_DWORD *)(this + 476) / 100, 0); /*0x5012aa*/
  INIClass::SetInt(a2, (unsigned __int8 *)Block, g_INI_Key_IQ, *(_DWORD *)(this + 464), 0); /*0x5012c4*/
  HouseClass::updateBuildingProduction(Block, aEdge, *(_DWORD *)(this + 480)); /*0x5012dc*/
  INIClass::SetBool(a2, (unsigned __int8 *)Block, aPlayercontrol, *(_BYTE *)(this + 493)); /*0x5012f4*/
  HouseClass::WriteBuildingTypeNameToINI(Block, aColor, *(_DWORD *)(this + 90196)); /*0x50130c*/
  v4 = 0; /*0x501316*/
  if ( dword_A80238 > 0 ) /*0x50131a*/
  {
    v5 = (char *)dword_A8022C; /*0x501322*/
    v9 = dword_A80238; /*0x501328*/
    do /*0x50134a*/
    {
      v6 = *(_DWORD *)(*(_DWORD *)v5 + 48); /*0x501333*/
      if ( (*(_DWORD *)(this + 472) & (1 << v6)) != 0 ) /*0x50133a*/
        v4 |= 1 << v6; /*0x50133c*/
      v5 += 4; /*0x501342*/
      --v9; /*0x501346*/
    }
    while ( v9 ); /*0x50134a*/
  }
  HouseClass::WriteHouseListToINI(Block, aAllies, v4); /*0x501359*/
  if ( *(_BYTE *)(this + 90121) ) /*0x50135e*/
    INIClass::SetString(a2, (unsigned __int8 *)Block, g_INI_Key_UIName, (char *)(this + 90121)); /*0x50137b*/
  return HouseClass::SaveTriggerNodeData((int)a2, Block); /*0x501391*/
}



// ==== 0x005013A0  HouseClass::ScalarDeletingDestructor  this=HouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::ScalarDeletingDestructor(HouseClass *this)
{
  int repairStationsCount; // ebx
  int i; // esi
  int v3; // ecx

  if ( this->aircraftAltOwner <= 0 ) /*0x5013ad*/
    return 1; /*0x5013ec*/
  repairStationsCount = this->repairStationsCount; /*0x5013b0*/
  for ( i = 0; i < repairStationsCount; ++i ) /*0x5013b8*/
  {
    v3 = *(_DWORD *)(this->buildingsCount + 4 * i); /*0x5013bd*/
    if ( v3 && !*(_BYTE *)(v3 + 129) && *(int *)(v3 + 108) > 0 ) /*0x5013d3*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 416))(v3, 1); /*0x5013d9*/
  }
  return 0; /*0x5013e8*/
}



// ==== 0x00501400  HouseClass::SetCapacity_5  this=HouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_5(HouseClass *this)
{
  int v1; // edi
  BuildingClass *v2; // esi
  int v3; // eax
  void *ptr_0; // edx
  int *v5; // ecx
  int v7; // [esp+8h] [ebp-4h] BYREF

  v1 = *(_DWORD *)&stru_A8EB00.?[164] - 1; /*0x501409*/
  if ( *(_DWORD *)&stru_A8EB00.?[164] - 1 < 0 ) /*0x50140e*/
  {
    BYTE1(this->planningPaths[5]) = 1; /*0x501532*/
    return 0; /*0x50152f*/
  }
  else
  {
    do /*0x50150f*/
    {
      v2 = *(BuildingClass **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v1); /*0x501423*/
      if ( (HouseClass *)((char *)this - 36) == v2->? && v2->? && !v2->? ) /*0x50143d*/
      {
        if ( v2->? /*0x50146d*/
          && *(_BYTE *)((*((int (__thiscall **)(_DWORD))v2->TechnoClass + 33))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152]
                                                                                         + 4 * v1))
                      + 562)
          && !this->__pad_13C[140] )
        {
          v3 = (*((int (__thiscall **)(BuildingClass *))v2->TechnoClass + 33))(v2); /*0x50147b*/
          ptr_0 = v2->TechnoClass; /*0x501487*/
          v7 = *(_DWORD *)(v3 + 160); /*0x501489*/
          (*((void (__thiscall **)(BuildingClass *, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))ptr_0 + 91))( /*0x5014aa*/
            v2,
            &v7,
            0,
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
            0,
            1,
            1,
            0);
        }
        else if ( v2 ) /*0x5014b4*/
        {
          if ( (v2->? & 4) != 0 ) /*0x5014c3*/
          {
            v5 = (int *)v2->DamageFireAnims[3]; /*0x5014c5*/
            if ( v5 ) /*0x5014cd*/
              TeamClass::LiberateMember_Start(v5, (int)v2, 0xFFFFFFFF, 0); /*0x5014d4*/
            (*((void (__thiscall **)(BuildingClass *, int, _DWORD))v2->TechnoClass + 122))(v2, 15, 0); /*0x5014e1*/
          }
          else if ( (*((int (__thiscall **)(BuildingClass *))v2->TechnoClass + 11))(v2) == 6 /*0x501501*/
                 && (*((int (__thiscall **)(BuildingClass *))v2->TechnoClass + 258))(v2) > 0 )
          {
            BuildingClass::UnloadUnits(v2, 1, 0); /*0x501509*/
          }
        }
      }
      --v1; /*0x50150e*/
    }
    while ( v1 >= 0 ); /*0x50150f*/
    BYTE1(this->planningPaths[5]) = 1; /*0x50151c*/
    return 0; /*0x501523*/
  }
}



// ==== 0x00501540  HouseClass::CanAlly  this=HouseClass  sig=csp ====
bool __thiscall HouseClass::CanAlly(int this, int a2)
{
  int v3; // ecx
  int v5; // edi
  int v6; // ebp
  HouseClass *v7; // edx
  int v8; // ebx
  int v9; // eax
  int v10; // eax

  if ( a2 ) /*0x50154a*/
  {
    if ( a2 == this ) /*0x50154e*/
      return 0; /*0x50154e*/
    v3 = *(_DWORD *)(a2 + 48); /*0x501550*/
    if ( v3 == *(_DWORD *)(this + 48) || v3 != -1 && (*(_DWORD *)(this + 22408) & (1 << v3)) != 0 ) /*0x501573*/
      return 0; /*0x501576*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(a2 + 52) + 188) == HouseTypeClass::Find(g_INI_Key_Civilian) && dword_A8B238[0] ) /*0x501598*/
    return 0; /*0x50159b*/
  if ( dword_A8E7AC ) /*0x5015a8*/
    return 1; /*0x5015ab*/
  if ( *(_BYTE *)(this + 501) ) /*0x5015b1*/
    return 0; /*0x5015bc*/
  v5 = 0; /*0x5015c8*/
  v6 = 0; /*0x5015ca*/
  if ( dword_A80238 > 0 ) /*0x5015ce*/
  {
    v7 = dword_A8022C; /*0x5015d0*/
    v8 = dword_A80238; /*0x5015d7*/
    do /*0x50162c*/
    {
      v9 = *(_DWORD *)v7->AbstractClass; /*0x5015d9*/
      if ( !*(_BYTE *)(*(_DWORD *)v7->AbstractClass + 501) && !*(_BYTE *)(*(_DWORD *)(v9 + 52) + 422) ) /*0x5015e8*/
      {
        ++v5; /*0x5015f1*/
        if ( v9 ) /*0x5015f4*/
        {
          if ( v9 == this /*0x501625*/
            || (v10 = *(_DWORD *)(v9 + 48), v10 == *(_DWORD *)(this + 48))
            || v10 != -1 && ((1 << v10) & *(_DWORD *)(this + 22408)) != 0 )
          {
            ++v6; /*0x501627*/
          }
        }
      }
      v7 = (HouseClass *)((char *)v7 + 4); /*0x501628*/
      --v8; /*0x50162b*/
    }
    while ( v8 ); /*0x50162c*/
  }
  return v5 != v6 + 1; /*0x501575*/
}



// ==== 0x00501640  HouseClass::CanDetect  this=HouseClass  sig=csp ====
int HouseClass::CanDetect(HouseClass *this)
{
  int result; // eax
  char v2; // bl
  int nextArrayIndex; // ecx
  int i; // ebp
  unsigned int v5; // esi
  int j; // edi
  char v7; // cl

  result = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x501640*/
  v2 = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5301); /*0x50164d*/
  if ( dword_A8B23C /*0x501662*/
    && (result = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C), (_BYTE)result)
    || v2 )
  {
    result = (int)dword_A8B230; /*0x501668*/
    if ( !LOBYTE(dword_A8B230[127].ptr_4) ) /*0x50166d*/
    {
      nextArrayIndex = stru_A80220.?; /*0x50167b*/
      for ( i = 0; i < nextArrayIndex; ++i ) /*0x501685*/
      {
        v5 = *((_DWORD *)stru_A80220.? + i); /*0x501695*/
        if ( v5 ) /*0x50169a*/
        {
          LOBYTE(result) = *(_BYTE *)(v5 + 501); /*0x5016a0*/
          if ( !(_BYTE)result ) /*0x5016a8*/
          {
            result = *(_DWORD *)&dword_A8B238; /*0x5016ae*/
            LOBYTE(result) = *(_BYTE *)(v5 + 492); /*0x5016b5*/
            if ( !*(_DWORD *)&dword_A8B238 ) /*0x5016bb*/
              LOBYTE(result) = (_BYTE)result || *(_BYTE *)(v5 + 493); /*0x5016cf*/
            if ( !(_BYTE)result ) /*0x5016d3*/
            {
              *(_BYTE *)(v5 + 586) = 1; /*0x5016d5*/
              nextArrayIndex = stru_A80220.?; /*0x5016db*/
              for ( j = 0; j < stru_A80220.?; ++j ) /*0x5016e5*/
              {
                result = *((_DWORD *)stru_A80220.? + j); /*0x5016ec*/
                if ( result && !*(_BYTE *)(result + 501) ) /*0x5016f3*/
                {
                  v7 = *(_BYTE *)(result + 492); /*0x501705*/
                  if ( !*(_DWORD *)&dword_A8B238 ) /*0x50170b*/
                    v7 = v7 || *(_BYTE *)(result + 493); /*0x50171f*/
                  if ( v7 ) /*0x501728*/
                    LOBYTE(result) = HouseClass::SetAlliance(v5, (HouseClass *)result, 0); /*0x50172a*/
                  else
                    result = HouseClass::HandleAlliance((int *)v5, result, 0); /*0x501731*/
                }
                nextArrayIndex = stru_A80220.?; /*0x501736*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x50174c*/
}



// ==== 0x00501750  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_501750(ObjectClass *this, int a2)
{
  char result; // al
  int v4; // eax
  char v5; // bl
  int v6; // [esp+5Ch] [ebp-28h] BYREF
  int v7; // [esp+60h] [ebp-24h] BYREF
  int v8; // [esp+64h] [ebp-20h] BYREF
  int v9; // [esp+68h] [ebp-1Ch] BYREF
  _DWORD v10[2]; // [esp+6Ch] [ebp-18h] BYREF
  _BYTE v11[16]; // [esp+74h] [ebp-10h] BYREF
  char v12; // [esp+88h] [ebp+4h]

  result = byte_A8E9A0; /*0x501750*/
  if ( byte_A8E9A0 ) /*0x50175f*/
  {
    v4 = *((_DWORD *)this + 5353); /*0x501765*/
    v5 = v4 < *((_DWORD *)this + 5354); /*0x501777*/
    *((_DWORD *)this + 5353) = a2 + v4; /*0x50177e*/
    House_Notify(); /*0x501784*/
    result = *((_DWORD *)this + 5353) < *((_DWORD *)this + 5354); /*0x50179d*/
    v12 = result; /*0x5017a2*/
    if ( !dword_A8E7AC && v5 != result ) /*0x5017ae*/
    {
      (*(void (__stdcall **)(ObjectClass *, void *, int *))this->AbstractClass)(this, &unk_7F7CD0, &v9); /*0x5017c1*/
      (*(void (__stdcall **)(int, int *))(*(_DWORD *)v9 + 12))(v9, &v8); /*0x5017cf*/
      if ( (*(int (__stdcall **)(int, int, int *, _DWORD))(*(_DWORD *)v8 + 12))(v8, 1, &v6, 0) >= 0 ) /*0x5017e7*/
      {
        while ( 1 ) /*0x5017f7*/
        {
          (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v6 + 12))(v6, v11); /*0x5017f9*/
          if ( !memcmp(v11, dword_7E9550, 0x10u) ) /*0x501810*/
            break; /*0x501810*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x501817*/
          if ( (*(int (__stdcall **)(int, int, int *, _DWORD))(*(_DWORD *)v8 + 12))(v8, 1, &v6, 0) < 0 ) /*0x50182f*/
            goto LABEL_14; /*0x50182f*/
        }
        (*(void (__stdcall **)(int, int *))(*(_DWORD *)v6 + 28))(v6, &v7); /*0x50183b*/
        while ( (*(int (__stdcall **)(int, int, _DWORD *, _DWORD))(*(_DWORD *)v7 + 12))(v7, 1, v10, 0) >= 0 ) /*0x501853*/
        {
          if ( v12 ) /*0x50185f*/
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v10[0] + 16))(v10[0]); /*0x501864*/
          else
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v10[0] + 12))(v10[0]); /*0x50186c*/
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v10[0] + 8))(v10[0]); /*0x501876*/
        }
        (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x501897*/
      }
LABEL_14:
      (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x50189a*/
      return (*(char (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x5018ab*/
    }
  }
  return result; /*0x5018ae*/
}



// ==== 0x005018C0  HouseClass::NotifyPowerStateChange  this=HouseClass  sig=csp ====
char __thiscall HouseClass::NotifyPowerStateChange(HouseClass *this, int a2)
{
  int powerDrain; // eax
  char v4; // bl
  char result; // al
  int v6; // esi
  int v7; // [esp+5Ch] [ebp-28h] BYREF
  int v8; // [esp+60h] [ebp-24h] BYREF
  int v9; // [esp+64h] [ebp-20h] BYREF
  int v10; // [esp+68h] [ebp-1Ch] BYREF
  _DWORD v11[2]; // [esp+6Ch] [ebp-18h] BYREF
  _BYTE v12[16]; // [esp+74h] [ebp-10h] BYREF
  char v13; // [esp+88h] [ebp+4h]

  powerDrain = this->powerDrain; /*0x5018cc*/
  v4 = this->powerOutput < powerDrain; /*0x5018da*/
  this->powerDrain = a2 + powerDrain; /*0x5018e1*/
  House_Notify(); /*0x5018e7*/
  result = this->powerOutput < this->powerDrain; /*0x501900*/
  v13 = result; /*0x501905*/
  if ( !dword_A8E7AC && v4 != result ) /*0x501911*/
  {
    (*(void (__stdcall **)(HouseClass *, void *, int *))this->AbstractClass)(this, &unk_7F7CD0, &v10); /*0x501924*/
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)v10 + 12))(v10, &v9); /*0x501932*/
    if ( (*(int (__stdcall **)(int, int, int *, _DWORD))(*(_DWORD *)v9 + 12))(v9, 1, &v7, 0) >= 0 ) /*0x50194a*/
    {
      while ( 1 ) /*0x50195a*/
      {
        (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v7 + 12))(v7, v12); /*0x50195c*/
        if ( !memcmp(v12, dword_7E9550, 0x10u) ) /*0x501973*/
          break; /*0x501973*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x50197a*/
        if ( (*(int (__stdcall **)(int, int, int *, _DWORD))(*(_DWORD *)v9 + 12))(v9, 1, &v7, 0) < 0 ) /*0x501992*/
          goto LABEL_13; /*0x501992*/
      }
      (*(void (__stdcall **)(int, int *))(*(_DWORD *)v7 + 28))(v7, &v8); /*0x50199e*/
      while ( (*(int (__stdcall **)(int, int, _DWORD *, _DWORD))(*(_DWORD *)v8 + 12))(v8, 1, v11, 0) >= 0 ) /*0x5019b6*/
      {
        v6 = v11[0]; /*0x5019bc*/
        if ( v13 ) /*0x5019c2*/
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v11[0] + 16))(v11[0]); /*0x5019c7*/
        else
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v11[0] + 12))(v11[0]); /*0x5019cf*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x5019d5*/
      }
      (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x5019f6*/
    }
LABEL_13:
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x5019f9*/
    return (*(char (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x501a0a*/
  }
  return result; /*0x501a0d*/
}



// ==== 0x00501A20  ObjectClass::House_Notify  this=AbstractClass  sig=csp ====
void sub_501A20()
{
  wchar_t *v0; // ebx
  int v1; // edi
  int v2; // esi

  v0 = dword_A8ECC8; /*0x501a21*/
  if ( dword_A8ECC8 ) /*0x501a2a*/
  {
    v1 = 0; /*0x501a2c*/
    if ( (int)dword_A8ECC8 > 0 ) /*0x501a30*/
    {
      do /*0x501a92*/
      {
        v2 = *((_DWORD *)dword_A8ECBC + v1); /*0x501a38*/
        if ( v2 /*0x501a81*/
          && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 44))(*((_DWORD *)dword_A8ECBC + v1)) == 6
          && !*(_BYTE *)(v2 + 1050)
          && *(int *)(*(_DWORD *)(v2 + 1312) + 3808) > 0
          && ((1 << *(_DWORD *)(*((_DWORD *)dword_A83D4C + 13) + 184)) & *(_DWORD *)(v2 + 528)) != 0 )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 292))(v2, 2); /*0x501a89*/
        }
        ++v1; /*0x501a8f*/
      }
      while ( v1 < (int)v0 ); /*0x501a92*/
    }
  }
}



// ==== 0x00501AA0  sub_501AA0  this=-  sig=csp ====
_DWORD *__stdcall sub_501AA0(_DWORD *a1, int a2, int a3)
{
  *a1 = 0; /*0x501ab5*/
  return a1; /*0x501ab8*/
}



// ==== 0x00501AC0  HouseClass::GenerateAttackCoords  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::GenerateAttackCoords(HouseClass *this, _DWORD *a2, int a3)
{
  double v3; // st7
  int unknown5498; // eax
  int v6; // esi
  int v7; // edx
  void *v8; // eax
  int *v9; // eax
  int *v10; // eax
  int v11; // eax
  int v12; // eax
  void *v13; // eax
  int *v14; // eax
  double v15; // rdi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  void *v20; // eax
  int *v21; // eax
  double v22; // rdi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  void *v27; // eax
  int *v28; // eax
  double v29; // rdi
  int v30; // eax
  int v31; // eax
  int v33; // eax
  int v34; // eax
  int v36; // [esp-8h] [ebp-A0h]
  int v37; // [esp-8h] [ebp-A0h]
  int v38; // [esp-8h] [ebp-A0h]
  int v39; // [esp-8h] [ebp-A0h]
  int v40; // [esp-4h] [ebp-9Ch]
  int v41; // [esp-4h] [ebp-9Ch]
  int v42; // [esp-4h] [ebp-9Ch]
  int v43; // [esp-4h] [ebp-9Ch]
  int v44; // [esp+Ch] [ebp-8Ch] BYREF
  double v45; // [esp+10h] [ebp-88h] BYREF
  _DWORD v46[4]; // [esp+1Ch] [ebp-7Ch] BYREF
  Coord3D v47; // [esp+2Ch] [ebp-6Ch] BYREF
  _DWORD v48[5]; // [esp+3Ch] [ebp-5Ch] BYREF
  Coord3D v49; // [esp+50h] [ebp-48h] BYREF
  int v50; // [esp+5Ch] [ebp-3Ch] BYREF
  int v51; // [esp+60h] [ebp-38h]
  int v52; // [esp+64h] [ebp-34h]
  int v53; // [esp+68h] [ebp-30h] BYREF
  int v54; // [esp+6Ch] [ebp-2Ch]
  int v55[3]; // [esp+74h] [ebp-24h] BYREF
  Coord3D v56; // [esp+80h] [ebp-18h] BYREF
  _DWORD v57[3]; // [esp+8Ch] [ebp-Ch] BYREF

  *(_DWORD *)v49.__pad_0 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x501ae0*/
  unknown5498 = this->unknown5498; /*0x501ae4*/
  v49.Coord3D_field_0x04 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x501af1*/
  v49.Coord3D_field_0x08 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x501af5*/
  if ( unknown5498 >= 2048 ) /*0x501af9*/
  {
    unknown5498 = 2048; /*0x501b10*/
  }
  else if ( unknown5498 < 768 ) /*0x501b00*/
  {
    unknown5498 = 768; /*0x501b02*/
  }
  switch ( a3 ) /*0x501b24*/
  {
    case 0: /*0x501b24*/
      v6 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, unknown5498); /*0x501b42*/
      LODWORD(v45) = *HouseClass::GetCurrentOption(this, &v47.Coord3D_field_0x04); /*0x501b57*/
      if ( (unsigned __int8)CellStruct::Equals((CellStruct *)&v45, &stru_A8EB00.?[948]) ) /*0x501b5b*/
      {
        v7 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x501b6f*/
        v50 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x501b75*/
        v51 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x501b79*/
      }
      else
      {
        v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v45); /*0x501b89*/
        v9 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v8 + 72))(v8, &v53); /*0x501b97*/
        v50 = *v9; /*0x501b9c*/
        v51 = v9[1]; /*0x501ba3*/
        v7 = v9[2]; /*0x501ba7*/
      }
      v52 = v7; /*0x501baa*/
      v10 = RandomCoordScatter(v55, &v50, v3, v6, 1); /*0x501bb9*/
      goto LABEL_23; /*0x501bbe*/
    case 1: /*0x501b24*/
      v46[1] = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, unknown5498, 2 * unknown5498); /*0x501bdc*/
      LOWORD(v45) = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x501beb*/
      v11 = LODWORD(v45); /*0x501bf0*/
      BYTE1(v11) = BYTE1(v45) & 0x3F; /*0x501bf4*/
      LODWORD(v45) = ((unsigned __int16)v11 ^ (unsigned __int16)((v11 & 0xE000) - 1)) & 0xE000 ^ v11; /*0x501c11*/
      v46[0] = *HouseClass::GetCurrentOption(this, &v47.Coord3D_field_0x04); /*0x501c25*/
      if ( (unsigned __int8)CellStruct::Equals((CellStruct *)v46, &stru_A8EB00.?[948]) ) /*0x501c29*/
      {
        v12 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x501c3e*/
        v53 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x501c43*/
        v54 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x501c47*/
      }
      else
      {
        v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v46); /*0x501c57*/
        v14 = (int *)(*(int (__thiscall **)(void *, Coord3D *))(*(_DWORD *)v13 + 72))(v13, &v56); /*0x501c68*/
        v53 = *v14; /*0x501c6d*/
        v54 = v14[1]; /*0x501c74*/
        v12 = v14[2]; /*0x501c78*/
      }
      v40 = v12; /*0x501c86*/
      LODWORD(v45) = SLOWORD(v45) - 0x3FFF; /*0x501c87*/
      __asm /*0x501c8b*/
      {
        fild dword ptr [esp+9Ch+var_8C+4]
        fmul ds:dbl_7E2810
        fstp qword ptr [esp+9Ch+var_5C+4]
        fild dword ptr [esp+9Ch+var_7C+4]
      }
      v15 = *(double *)&v48[1]; /*0x501ca1*/
      __asm /*0x501ca7*/
      {
        fstp qword ptr [esp+0A4h+var_7C+4]
        fild [esp+0A4h+var_2C]
        fstp qword ptr [esp+0A4h+var_8C+4]
      }
      Math::SinCos(*(double *)&v48[1]); /*0x501cb3*/
      __asm { fmul qword ptr [esp+0A4h+var_7C+4] } /*0x501cb8*/
      __asm { fsubr qword ptr [esp+9Ch+var_8C+4] }
      LOWORD(v16) = Math::RoundToInt(v3); /*0x501cc3*/
      v36 = v16; /*0x501cc8*/
      Math::ArcTan2(v15); /*0x501ccb*/
      __asm { fmul qword ptr [esp+0A8h+var_7C+4] } /*0x501cd0*/
      __asm { fiadd [esp+0A0h+var_30] }
      LOWORD(v17) = Math::RoundToInt(v3); /*0x501cdb*/
      v10 = Coord3D::Set((Coord3D *)&v48[1], v17, v36, v40); /*0x501ce5*/
      goto LABEL_23; /*0x501ce5*/
    case 2: /*0x501b24*/
      v47.Coord3D_field_0x04 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, unknown5498, 2 * unknown5498); /*0x501d03*/
      LOWORD(v45) = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x501d12*/
      v18 = LODWORD(v45); /*0x501d17*/
      BYTE1(v18) = BYTE1(v45) & 0x3F | 0x40; /*0x501d22*/
      LODWORD(v45) = ((unsigned __int16)v18 ^ (unsigned __int16)((v18 & 0xE000) - 1)) & 0xE000 ^ v18; /*0x501d3b*/
      v46[0] = *HouseClass::GetCurrentOption(this, &v48[1]); /*0x501d4f*/
      if ( (unsigned __int8)CellStruct::Equals((CellStruct *)v46, &stru_A8EB00.?[948]) ) /*0x501d53*/
      {
        v19 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x501d68*/
        v53 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x501d6d*/
        v54 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x501d71*/
      }
      else
      {
        v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v46); /*0x501d81*/
        v21 = (int *)(*(int (__thiscall **)(void *, Coord3D *))(*(_DWORD *)v20 + 72))(v20, &v56); /*0x501d92*/
        v53 = *v21; /*0x501d97*/
        v54 = v21[1]; /*0x501d9e*/
        v19 = v21[2]; /*0x501da2*/
      }
      v41 = v19; /*0x501db0*/
      v46[1] = SLOWORD(v45) - 0x3FFF; /*0x501db1*/
      __asm /*0x501db5*/
      {
        fild dword ptr [esp+9Ch+var_7C+4]
        fmul ds:dbl_7E2810
        fstp qword ptr [esp+9Ch+var_7C+4]
        fild [esp+9Ch+var_6C.Coord3D_field_0x04]
      }
      v22 = *(double *)&v46[1]; /*0x501dcb*/
      __asm /*0x501dd1*/
      {
        fstp qword ptr [esp+0A4h+var_6C.Coord3D_field_0x04]
        fild [esp+0A4h+var_2C]
        fstp qword ptr [esp+0A4h+var_8C+4]
      }
      Math::SinCos(*(double *)&v46[1]); /*0x501ddd*/
      __asm { fmul qword ptr [esp+0A4h+var_6C.Coord3D_field_0x04] } /*0x501de2*/
      __asm { fsubr qword ptr [esp+9Ch+var_8C+4] }
      LOWORD(v23) = Math::RoundToInt(v3); /*0x501ded*/
      v37 = v23; /*0x501df2*/
      Math::ArcTan2(v22); /*0x501df5*/
      __asm { fmul qword ptr [esp+0A8h+var_6C.Coord3D_field_0x04] } /*0x501dfa*/
      __asm { fiadd [esp+0A0h+var_30] }
      LOWORD(v24) = Math::RoundToInt(v3); /*0x501e05*/
      v10 = Coord3D::Set((Coord3D *)&v46[1], v24, v37, v41); /*0x501e0f*/
      goto LABEL_23; /*0x501e0f*/
    case 3: /*0x501b24*/
      v46[1] = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, unknown5498, 2 * unknown5498); /*0x501e2d*/
      LOWORD(v45) = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x501e3c*/
      v25 = LODWORD(v45); /*0x501e41*/
      BYTE1(v25) = BYTE1(v45) & 0x3F | 0x80; /*0x501e4c*/
      LODWORD(v45) = ((unsigned __int16)v25 ^ (unsigned __int16)((v25 & 0xE000) - 1)) & 0xE000 ^ v25; /*0x501e65*/
      v46[0] = *HouseClass::GetCurrentOption(this, &v48[1]); /*0x501e79*/
      if ( (unsigned __int8)CellStruct::Equals((CellStruct *)v46, &stru_A8EB00.?[948]) ) /*0x501e7d*/
      {
        v26 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x501e92*/
        v53 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x501e97*/
        v54 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x501e9b*/
      }
      else
      {
        v27 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v46); /*0x501eab*/
        v28 = (int *)(*(int (__thiscall **)(void *, Coord3D *))(*(_DWORD *)v27 + 72))(v27, &v56); /*0x501ebc*/
        v53 = *v28; /*0x501ec1*/
        v54 = v28[1]; /*0x501ec8*/
        v26 = v28[2]; /*0x501ecc*/
      }
      v42 = v26; /*0x501eda*/
      v47.Coord3D_field_0x04 = SLOWORD(v45) - 0x3FFF; /*0x501edb*/
      __asm /*0x501edf*/
      {
        fild [esp+9Ch+var_6C.Coord3D_field_0x04]
        fmul ds:dbl_7E2810
        fstp qword ptr [esp+9Ch+var_6C.Coord3D_field_0x04]
        fild dword ptr [esp+9Ch+var_7C+4]
      }
      v29 = *(double *)&v47.Coord3D_field_0x04; /*0x501ef5*/
      __asm /*0x501efb*/
      {
        fstp qword ptr [esp+0A4h+var_7C+4]
        fild [esp+0A4h+var_2C]
        fstp qword ptr [esp+0A4h+var_8C+4]
      }
      Math::SinCos(*(double *)&v47.Coord3D_field_0x04); /*0x501f07*/
      __asm { fmul qword ptr [esp+0A4h+var_7C+4] } /*0x501f0c*/
      __asm { fsubr qword ptr [esp+9Ch+var_8C+4] }
      LOWORD(v30) = Math::RoundToInt(v3); /*0x501f17*/
      v38 = v30; /*0x501f1c*/
      Math::ArcTan2(v29); /*0x501f1f*/
      __asm { fmul qword ptr [esp+0A8h+var_7C+4] } /*0x501f24*/
      __asm { fiadd [esp+0A0h+var_30] }
      LOWORD(v31) = Math::RoundToInt(v3); /*0x501f2f*/
      v10 = Coord3D::Set((Coord3D *)&v47.Coord3D_field_0x04, v31, v38, v42); /*0x501f39*/
LABEL_23:
      v49 = *(Coord3D *)v10; /*0x501f3e*/
      break; /*0x501f52*/
    case 4: /*0x501b24*/
      v46[1] = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, unknown5498, 2 * unknown5498); /*0x501f70*/
      LOWORD(v45) = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x501f7f*/
      LODWORD(v45) |= 0xC000u; /*0x501f98*/
      _EDI = HouseClass::GetStartCoords(this, v57); /*0x501fa7*/
      v43 = _EDI[2]; /*0x501fc2*/
      v47.Coord3D_field_0x04 = (LOWORD(v45) & 0x1FFF ^ (__int16)((LOWORD(v45) & 0xE000) - 1) & 0xFFFFE000) - 0x3FFF; /*0x501fc9*/
      __asm /*0x501fcd*/
      {
        fild [esp+9Ch+var_6C.Coord3D_field_0x04]
        fmul ds:dbl_7E2810
        fstp qword ptr [esp+9Ch+var_5C+4]
        fild dword ptr [esp+9Ch+var_7C+4]
      }
      __asm
      {
        fstp qword ptr [esp+0A4h+var_6C.Coord3D_field_0x04]
        fild dword ptr [edi+4]
        fstp qword ptr [esp+0A4h+var_7C+4]
      }
      Math::SinCos(*(double *)&v48[1]); /*0x501ff4*/
      __asm { fmul qword ptr [esp+0A4h+var_6C.Coord3D_field_0x04] } /*0x501ff9*/
      __asm { fsubr qword ptr [esp+9Ch+var_7C+4] }
      LOWORD(v33) = Math::RoundToInt(v3); /*0x502004*/
      v39 = v33; /*0x50200d*/
      Math::ArcTan2(*(double *)&v48[1]); /*0x502010*/
      __asm { fmul qword ptr [esp+0A8h+var_6C.Coord3D_field_0x04] } /*0x502015*/
      __asm { fiadd dword ptr [edi] }
      LOWORD(v34) = Math::RoundToInt(v3); /*0x50201e*/
      v49 = *(Coord3D *)Coord3D::Set(&v56, v34, v39, v43); /*0x502032*/
      break; /*0x502032*/
    default:
      break;
  }
  if ( (unsigned __int8)Coord3D::Equals(&v49, &stru_A8EB00.?[1044]) ) /*0x50204d*/
  {
    if ( a3 ) /*0x50205b*/
      v44 = *HouseClass::GenerateAttackCoords(this, &v48[1], 0); /*0x502081*/
    else
      v44 = *HouseClass::GetCurrentOption(this, &v48[1]); /*0x50206b*/
  }
  else
  {
    v44 = *Coord::ToCell((Coord *)&v49, &v48[1]); /*0x502097*/
  }
  if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&v44, 1) ) /*0x5020a7*/
    *a2 = v44; /*0x5020df*/
  else
    *a2 = *HouseClass::ClampToUsableCell((HouseClass *)&stru_87F5F0.__pad_58[416], &v48[1], (__int16 *)&v44); /*0x5020c9*/
  return a2; /*0x5020cd*/
}



// ==== 0x00502160  WaypointClass::FindOrAddPath  this=WaypointClass  sig=csp ====
char __thiscall WaypointClass::FindOrAddPath(WaypointClass *this, _DWORD *a2)
{
  int *v2; // ebp
  int v3; // ebx
  signed int v4; // esi
  int v5; // eax
  int v6; // eax
  Array *v7; // ecx
  int v8; // edi
  int *Element; // eax
  int v10; // kr08_4
  int v11; // eax
  char result; // al
  unsigned int v13; // esi
  int v14; // eax
  int v15; // eax
  signed int v16; // [esp+10h] [ebp-Ch]
  __int16 v18; // [esp+1Ah] [ebp-2h]

  v2 = &this->padding_18[114]; /*0x502171*/
  v3 = *a2 / 256; /*0x50218e*/
  v4 = 0; /*0x502194*/
  v18 = a2[1] / 256; /*0x502196*/
  v16 = 0; /*0x50219b*/
  while ( 1 ) /*0x50219f*/
  {
    if ( !*v2 ) /*0x50219f*/
    {
      v5 = __2_YAPAXI_Z(0x40u); /*0x5021a7*/
      if ( v5 ) /*0x5021b1*/
        v6 = WaypointPathClass::Construct(v5, v4); /*0x5021b6*/
      else
        v6 = 0; /*0x5021bd*/
      *v2 = v6; /*0x5021bf*/
    }
    v7 = (Array *)*v2; /*0x5021c2*/
    v8 = 0; /*0x5021c5*/
    if ( *(int *)(*v2 + 56) > 0 ) /*0x5021cc*/
      break; /*0x5021cc*/
LABEL_13:
    ++v4; /*0x50221e*/
    ++v2; /*0x50221f*/
    v16 = v4; /*0x502225*/
    if ( v4 >= 12 ) /*0x502229*/
    {
      v13 = this->padding_18[113]; /*0x502233*/
      if ( !this->padding_18[v13 + 114] ) /*0x502239*/
      {
        v14 = __2_YAPAXI_Z(0x40u); /*0x502246*/
        if ( v14 ) /*0x502250*/
          v15 = WaypointPathClass::Construct(v14, v13); /*0x502255*/
        else
          v15 = 0; /*0x50225c*/
        this->padding_18[v13 + 114] = v15; /*0x50225e*/
      }
      return WaypointClass_Find((ObjectClass *)this->padding_18[this->padding_18[113] + 114], a2); /*0x502277*/
    }
  }
  while ( 1 ) /*0x5021cf*/
  {
    Element = (int *)Array::GetElement(v7, v8); /*0x5021cf*/
    v10 = *Element; /*0x5021e1*/
    v11 = Element[1] / 256; /*0x5021f2*/
    if ( (unsigned __int16)(v10 / 256) == (_WORD)v3 && (_WORD)v11 == v18 ) /*0x5021ff*/
    {
      result = v16; /*0x502205*/
      if ( v16 != this->padding_18[113] ) /*0x50220f*/
        return result; /*0x50227c*/
    }
    v7 = (Array *)*v2; /*0x502211*/
    if ( ++v8 >= *(_DWORD *)(*v2 + 56) ) /*0x502218*/
    {
      v4 = v16; /*0x50221a*/
      goto LABEL_13; /*0x50221a*/
    }
  }
}



// ==== 0x005022F0  WaypointClass::IsCoordinateUsed  this=WaypointClass  sig=csp ====
char __thiscall WaypointClass::IsCoordinateUsed(WaypointClass *this, _WORD *a2)
{
  signed int v2; // esi
  int *i; // ebx
  int v4; // eax
  int v5; // eax
  Array *v6; // ecx
  int v7; // edi
  int *Element; // eax
  int v9; // kr04_4
  int v10; // eax
  signed int v12; // [esp+10h] [ebp-8h]

  v2 = 0; /*0x5022fa*/
  v12 = 0; /*0x502301*/
  for ( i = &this->padding_18[114]; ; ++i ) /*0x502305*/
  {
    if ( !*i ) /*0x50230b*/
    {
      v4 = __2_YAPAXI_Z(0x40u); /*0x502312*/
      if ( v4 ) /*0x50231c*/
        v5 = WaypointPathClass::Construct(v4, v2); /*0x502321*/
      else
        v5 = 0; /*0x502328*/
      *i = v5; /*0x50232a*/
    }
    v6 = (Array *)*i; /*0x50232c*/
    v7 = 0; /*0x50232e*/
    if ( *(int *)(*i + 56) > 0 ) /*0x502335*/
      break; /*0x502335*/
LABEL_13:
    v12 = ++v2; /*0x50238d*/
    if ( v2 >= 12 ) /*0x502391*/
      return 1; /*0x5023a0*/
  }
  while ( 1 ) /*0x502338*/
  {
    Element = (int *)Array::GetElement(v6, v7); /*0x502338*/
    v9 = *Element; /*0x50234a*/
    v10 = Element[1] / 256; /*0x50235b*/
    if ( (unsigned __int16)(v9 / 256) == *a2 && (_WORD)v10 == a2[1] && v12 != this->padding_18[113] ) /*0x502378*/
      return 0; /*0x502397*/
    v6 = (Array *)*i; /*0x50237a*/
    if ( ++v7 >= *(_DWORD *)(*i + 56) ) /*0x502380*/
    {
      v2 = v12; /*0x502382*/
      goto LABEL_13; /*0x502382*/
    }
  }
}



// ==== 0x005023B0  Waypoint::FindByCell  this=AbstractClass  sig=csp ====
_DWORD *__thiscall Waypoint_FindByCell(char *this, _WORD *a2)
{
  signed int v2; // esi
  char *i; // ebx
  void *v4; // eax
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // edi
  _DWORD *Element; // esi
  signed int v10; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x5023b8*/
  v10 = 0; /*0x5023bb*/
  for ( i = this + 528; ; i += 4 ) /*0x5023bf*/
  {
    if ( !*(_DWORD *)i ) /*0x5023c5*/
    {
      v4 = __2_YAPAXI_Z(0x40u); /*0x5023cc*/
      if ( v4 ) /*0x5023d6*/
        v5 = WaypointPathClass::Construct((int)v4, v2); /*0x5023db*/
      else
        v5 = 0; /*0x5023e2*/
      *(_DWORD *)i = v5; /*0x5023e4*/
    }
    v6 = *(_DWORD **)i; /*0x5023e6*/
    v7 = 0; /*0x5023e8*/
    if ( *(int *)(*(_DWORD *)i + 56) > 0 ) /*0x5023ef*/
      break; /*0x5023ef*/
LABEL_12:
    v10 = ++v2; /*0x502437*/
    if ( v2 >= 12 ) /*0x50243b*/
      return 0; /*0x50244c*/
  }
  while ( 1 ) /*0x5023f7*/
  {
    Element = (_DWORD *)Array::GetElement(v6, v7); /*0x5023f7*/
    if ( (unsigned __int16)(*Element / 256) == *a2 && (unsigned __int16)(Element[1] / 256) == a2[1] ) /*0x502422*/
      return Element; /*0x502441*/
    v6 = *(_DWORD **)i; /*0x502424*/
    if ( ++v7 >= *(_DWORD *)(*(_DWORD *)i + 56) ) /*0x50242a*/
    {
      v2 = v10; /*0x50242c*/
      goto LABEL_12; /*0x50242c*/
    }
  }
}



// ==== 0x00502460  WaypointClass::FindOrCreate  this=AbstractClass  sig=csp ====
int __thiscall WaypointClass::FindOrCreate(char *this, int a2, unsigned int *a3, _BYTE *a4)
{
  unsigned int v4; // edi
  char *i; // esi
  void *v6; // eax
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // ebx
  int result; // eax

  v4 = 0; /*0x502468*/
  for ( i = this + 528; ; i += 4 ) /*0x50246a*/
  {
    if ( !*(_DWORD *)i ) /*0x502470*/
    {
      v6 = __2_YAPAXI_Z(0x40u); /*0x502477*/
      if ( v6 ) /*0x502481*/
        v7 = WaypointPathClass::Construct((int)v6, v4); /*0x502486*/
      else
        v7 = 0; /*0x50248d*/
      *(_DWORD *)i = v7; /*0x50248f*/
    }
    v8 = *(_DWORD **)i; /*0x502491*/
    v9 = 0; /*0x502493*/
    if ( *(int *)(*(_DWORD *)i + 56) > 0 ) /*0x50249a*/
      break; /*0x50249a*/
LABEL_10:
    if ( (int)++v4 >= 12 ) /*0x5024b5*/
    {
      result = (int)a4; /*0x5024bb*/
      *a3 = -1; /*0x5024c1*/
      *a4 = 0; /*0x5024c7*/
      LOBYTE(result) = 0; /*0x5024cb*/
      return result; /*0x5024ce*/
    }
  }
  while ( Array::GetElement(v8, v9) != a2 ) /*0x5024a4*/
  {
    v8 = *(_DWORD **)i; /*0x5024a6*/
    if ( ++v9 >= *(_DWORD *)(*(_DWORD *)i + 56) ) /*0x5024ac*/
      goto LABEL_10; /*0x5024ac*/
  }
  result = (int)a3; /*0x5024d1*/
  *a3 = v4; /*0x5024d9*/
  *a4 = v9; /*0x5024dd*/
  LOBYTE(result) = 1; /*0x5024e0*/
  return result; /*0x5024bf*/
}



// ==== 0x005024F0  HouseClass::StubReturnNullPointer  this=HouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::StubReturnNullPointer(HouseClass *this, _DWORD *a2)
{
  VectorClass_ptr_BuildChoiceClass_int_ouseClass *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // esi

  if ( !a2 ) /*0x5024f8*/
    return -2147467261; /*0x5024fb*/
  v3 = (VectorClass_ptr_BuildChoiceClass_int_ouseClass *)__2_YAPAXI_Z(0x24u); /*0x502506*/
  if ( !v3 ) /*0x502510*/
    return -2147024882; /*0x502510*/
  v4 = VectorClass_ptr_BuildChoiceClass_int_ouseClass::Constructor(v3, &this->uiName[18]); /*0x50251f*/
  v5 = v4; /*0x502524*/
  if ( !v4 ) /*0x502528*/
    return -2147024882; /*0x50252b*/
  (*(void (__stdcall **)(_DWORD *))(*v4 + 4))(v4); /*0x502537*/
  *a2 = v5; /*0x50253a*/
  return 0; /*0x5024fa*/
}



// ==== 0x00502550  HouseClass::StubReturnNullPointer_0  this=HouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::StubReturnNullPointer_0(
        HouseClass *this,
        const void *a2,
        _DWORD *a3)
{
  int v4; // ebp
  int v5; // ebx
  _BYTE v6[16]; // [esp+10h] [ebp-10h] BYREF

  if ( !a3 ) /*0x50255d*/
    return -2147467261; /*0x502562*/
  *a3 = 0; /*0x50256e*/
  v4 = 0; /*0x502578*/
  if ( *(int *)&this->uiName[34] <= 0 ) /*0x502582*/
    return -2147220990; /*0x5025bc*/
  while ( 1 ) /*0x502593*/
  {
    v5 = *(_DWORD *)(*(_DWORD *)&this->uiName[22] + 4 * v4); /*0x502593*/
    (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v5 + 12))(v5, v6); /*0x502599*/
    if ( !memcmp(v6, a2, 0x10u) ) /*0x5025ab*/
      break; /*0x5025ab*/
    if ( ++v4 >= *(_DWORD *)&this->uiName[34] ) /*0x5025ba*/
      return -2147220990; /*0x5025ba*/
  }
  *a3 = v5; /*0x5025d0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 4))(v5); /*0x5025d4*/
  return 0; /*0x50255f*/
}



// ==== 0x005025F0  HouseClass::RegisterGain  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::RegisterGain(int this, int a2, char a3)
{
  int v5; // eax
  int v6; // ecx
  int v7; // ebx
  int v8; // ebp
  _DWORD *result; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edx
  float *v14; // ebx
  int i; // esi
  double v16; // st7
  double v17; // st7
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // [esp+Ch] [ebp-14h]
  _DWORD v30[4]; // [esp+10h] [ebp-10h] BYREF
  char v31; // [esp+24h] [ebp+4h]

  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 1516) ) /*0x502606*/
    --*(_DWORD *)(this + 344); /*0x502610*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 1517) ) /*0x502620*/
    --*(_DWORD *)(this + 348); /*0x50262a*/
  SidebarClass::UpdateCameoProductionState((int)&dword_87F7E8, (_DWORD *)a2); /*0x502636*/
  if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 1036) )
  {
    if ( a2 )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 )
      {
        if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 ? a2 + 0x662 : 1634) )
        {
          *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 ? a2 + 0x662 : 1634) = 0;
          v5 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 1036); /*0x5026b4*/
          v6 = *(_DWORD *)(this + 728) - 1; /*0x5026ba*/
          v29 = v5; /*0x5026bb*/
          *(_DWORD *)(this + 728) = v6; /*0x5026bf*/
          if ( !v6 ) /*0x5026c5*/
          {
            if ( v5 ) /*0x5026cd*/
            {
              v31 = 0; /*0x5026d9*/
              v7 = dword_A8EC88 - 1; /*0x5026de*/
              if ( dword_A8EC88 - 1 >= 0 ) /*0x5026e3*/
              {
                do /*0x502723*/
                {
                  v8 = *((_DWORD *)dword_A8EC7C + v7); /*0x5026f0*/
                  if ( *(_DWORD *)(v8 + 540) == this /*0x50270c*/
                    && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v8 + 132))(*((_DWORD *)dword_A8EC7C + v7)) == v29
                    && !*(_BYTE *)(v8 + 129) )
                  {
                    TechnoClass::Deactivate((_DWORD *)v8); /*0x502718*/
                    v31 = 1; /*0x50271d*/
                  }
                  --v7; /*0x502722*/
                }
                while ( v7 >= 0 ); /*0x502723*/
                if ( v31 && byte_A8E9A0 ) /*0x502735*/
                {
                  if ( dword_A8B238[0] ) /*0x50273e*/
                  {
                    if ( (#375 *)this != dword_A83D4C ) /*0x502761*/
                      goto LABEL_26; /*0x502761*/
                  }
                  else if ( !*(_BYTE *)(this + 492) && !*(_BYTE *)(this + 493) ) /*0x502752*/
                  {
                    goto LABEL_26; /*0x502752*/
                  }
                  if ( !dword_A8E7AC ) /*0x50276a*/
                    VoxClass::FindAndPlay(g_Str_EVA_RobotTanksOffline, -1); /*0x502776*/
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_26:
  result = (_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) - 1); /*0x502782*/
  switch ( (unsigned int)result ) /*0x502794*/
  {
    case 0u: /*0x502794*/
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 3478) /*0x5029d9*/
        || *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 3416) )
      {
        v26 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x502a04*/
        *(_DWORD *)(this + 90288) -= (*(int (__thiscall **)(int, int))(*(_DWORD *)v26 + 132))(v26, this); /*0x502a15*/
      }
      else
      {
        v25 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x5029e7*/
        *(_DWORD *)(this + 90284) -= (*(int (__thiscall **)(int, int))(*(_DWORD *)v25 + 132))(v25, this); /*0x5029f8*/
      }
      result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x502a1f*/
      if ( !*((_BYTE *)result + 3231) ) /*0x502a25*/
      {
        v27 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x502a33*/
        v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 64))(v27); /*0x502a3d*/
        result = (_DWORD *)CounterClass::Decrement((_DWORD *)(this + 21860), v28); /*0x502a47*/
      }
      break; /*0x502a47*/
    case 1u: /*0x502794*/
      v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x5028d4*/
      *(_DWORD *)(this + 90288) -= (*(int (__thiscall **)(int, int))(*(_DWORD *)v18 + 132))(v18, this); /*0x5028ef*/
      result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x5028f7*/
      if ( !*((_BYTE *)result + 3231) ) /*0x5028fd*/
      {
        v19 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x50290f*/
        v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 64))(v19); /*0x502919*/
        result = (_DWORD *)CounterClass::Decrement((_DWORD *)(this + 21900), v20); /*0x502923*/
      }
      break; /*0x50292e*/
    case 5u: /*0x502794*/
      result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x50279f*/
      if ( !*((_BYTE *)result + 3231) ) /*0x5027a5*/
      {
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x5027b3*/
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 64))(v10); /*0x5027bd*/
        result = (_DWORD *)CounterClass::Decrement((_DWORD *)(this + 21840), v11); /*0x5027c7*/
      }
      if ( a2 ) /*0x5027ce*/
      {
        v12 = *(_DWORD *)(a2 + 1312); /*0x5027d4*/
        if ( *(_BYTE *)(v12 + 5821) && !*(_BYTE *)(v12 + 3278) ) /*0x5027e4*/
          --*(_DWORD *)(this + 352); /*0x5027ee*/
        v13 = *(_DWORD *)(this + 784); /*0x5027f4*/
        *(_BYTE *)(this + 22392) = 1; /*0x5027fa*/
        *(_DWORD *)(this + 784) = v13 - *(_DWORD *)(*(_DWORD *)(a2 + 1312) + 2048); /*0x502815*/
        if ( a3 ) /*0x50281b*/
        {
          v14 = (float *)(a2 + 828); /*0x502821*/
          result = (_DWORD *)FirstFloatPositive((float *)(a2 + 828)); /*0x502829*/
          for ( i = (int)result; result != (_DWORD *)-1; i = (int)result ) /*0x502833*/
          {
            v16 = Float::SubtractClamped(v14, 2147483600.0, i); /*0x502841*/
            v17 = (double)(int)Math::RoundToInt(v16); /*0x50284f*/
            *(_DWORD *)(this + 21736) = Math::RoundToInt(v17); /*0x502866*/
            *(_DWORD *)(this + 780) = Math::RoundToInt(v17); /*0x502893*/
            result = (_DWORD *)FirstFloatPositive(v14); /*0x50289b*/
          }
        }
        else
        {
          result = HouseClass::ComputeResourceDelta((float *)(this + 764), v30, a2 + 828); /*0x5028c2*/
        }
      }
      break; /*0x5028a5*/
    case 0xEu: /*0x502794*/
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 3478) ) /*0x50293b*/
      {
        v21 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x502949*/
        *(_DWORD *)(this + 90288) -= (*(int (__thiscall **)(int, int))(*(_DWORD *)v21 + 132))(v21, this); /*0x50295a*/
      }
      else
      {
        v22 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x502966*/
        *(_DWORD *)(this + 90280) -= (*(int (__thiscall **)(int, int))(*(_DWORD *)v22 + 132))(v22, this); /*0x502977*/
      }
      result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x502981*/
      if ( !*((_BYTE *)result + 3231) ) /*0x502987*/
      {
        v23 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x502999*/
        v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 64))(v23); /*0x5029a3*/
        result = (_DWORD *)CounterClass::Decrement((_DWORD *)(this + 21880), v24); /*0x5029ad*/
      }
      break; /*0x5029b8*/
    default:
      return result;
  }
  return result; /*0x5028a7*/
}



// ==== 0x00502A80  HouseClass::RegisterGain_0  this=HouseClass  sig=csp ====
char __thiscall HouseClass::RegisterGain_0(int this, BuildingClass *a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  BuildingTypeClass *Type; // eax
  int PowerDrain; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  _DWORD v21[4]; // [esp+8h] [ebp-10h] BYREF

  if ( *(_BYTE *)((*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2) + 1516) ) /*0x502a95*/
    ++*(_DWORD *)(this + 344); /*0x502a9f*/
  if ( *(_BYTE *)((*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2) + 1517) ) /*0x502aaf*/
    ++*(_DWORD *)(this + 348); /*0x502ab9*/
  v4 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 11))(a2) - 1; /*0x502ac6*/
  switch ( v4 ) /*0x502ad8*/
  {
    case 0: /*0x502ad8*/
      if ( *(_BYTE *)((*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2) + 3478) /*0x502ca5*/
        || *(_DWORD *)((*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2) + 3416) )
      {
        v17 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502cd0*/
        *(_DWORD *)(this + 90288) += (*(int (__thiscall **)(int, int))(*(_DWORD *)v17 + 132))(v17, this); /*0x502ce1*/
      }
      else
      {
        v16 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502cb3*/
        *(_DWORD *)(this + 90284) += (*(int (__thiscall **)(int, int))(*(_DWORD *)v16 + 132))(v16, this); /*0x502cc4*/
      }
      v18 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502ceb*/
      v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 64))(v18); /*0x502cf5*/
      LOBYTE(v4) = RefCount::Increment((RefCount *)(this + 21860), v19); /*0x502cff*/
      break; /*0x502cff*/
    case 1: /*0x502ad8*/
      v9 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502b94*/
      *(_DWORD *)(this + 90288) += (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 132))(v9, this); /*0x502baf*/
      v4 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502bb7*/
      if ( !*(_BYTE *)(v4 + 3231) ) /*0x502bbd*/
      {
        v10 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502bcf*/
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 64))(v10); /*0x502bd9*/
        LOBYTE(v4) = RefCount::Increment((RefCount *)(this + 21900), v11); /*0x502be3*/
      }
      break; /*0x502bed*/
    case 5: /*0x502ad8*/
      v4 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502ae3*/
      if ( !*(_BYTE *)(v4 + 3231) ) /*0x502ae9*/
      {
        v5 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502af7*/
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 64))(v5); /*0x502b01*/
        LOBYTE(v4) = RefCount::Increment((RefCount *)(this + 21840), v6); /*0x502b0b*/
      }
      if ( a2 ) /*0x502b12*/
      {
        v4 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 11))(a2); /*0x502b1c*/
        if ( v4 == 6 ) /*0x502b22*/
        {
          Type = a2->Type; /*0x502b28*/
          if ( Type->WeaponsFactory && !Type->?[1] ) /*0x502b38*/
            ++*(_DWORD *)(this + 352); /*0x502b42*/
          PowerDrain = BuildingClass::GetPowerDrain(a2); /*0x502b4a*/
          HouseClass::NotifyPowerStateChange((HouseClass *)this, PowerDrain); /*0x502b52*/
          *(_DWORD *)(this + 784) += a2->Type->?; /*0x502b78*/
          LOBYTE(v4) = (unsigned __int8)HouseClass::AccumulateFloat4((float *)(this + 764), v21, (int)&a2->?); /*0x502b83*/
        }
      }
      break; /*0x502b8d*/
    case 14: /*0x502ad8*/
      if ( *(_BYTE *)((*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2) + 3478) ) /*0x502bfa*/
      {
        v12 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502c08*/
        *(_DWORD *)(this + 90288) += (*(int (__thiscall **)(int, int))(*(_DWORD *)v12 + 132))(v12, this); /*0x502c19*/
      }
      else
      {
        v13 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502c25*/
        *(_DWORD *)(this + 90280) += (*(int (__thiscall **)(int, int))(*(_DWORD *)v13 + 132))(v13, this); /*0x502c36*/
      }
      LOBYTE(v4) = a2->__pad_6B8[33]; /*0x502c3c*/
      if ( !(_BYTE)v4 ) /*0x502c44*/
      {
        v4 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502c4e*/
        if ( !*(_BYTE *)(v4 + 3231) ) /*0x502c54*/
        {
          v14 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502c66*/
          v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 64))(v14); /*0x502c70*/
          LOBYTE(v4) = RefCount::Increment((RefCount *)(this + 21880), v15); /*0x502c7a*/
        }
      }
      break; /*0x502c84*/
    default:
      return v4;
  }
  return v4; /*0x502b88*/
}



// ==== 0x00502D30  HouseClass::FindOwner  this=HouseClass  sig=csp ====
int __thiscall HouseClass::FindOwner(HouseClass *this)
{
  int v1; // edx
  char *i; // esi
  int result; // eax

  v1 = 0; /*0x502d39*/
  if ( stru_A80220.? <= 0 ) /*0x502d3d*/
    return 0; /*0x502d5a*/
  for ( i = (char *)stru_A80220.?; ; i += 4 ) /*0x502d3f*/
  {
    result = *(_DWORD *)i; /*0x502d45*/
    if ( *(HouseClass **)(*(_DWORD *)(*(_DWORD *)i + 52) + 184) == this ) /*0x502d50*/
      break; /*0x502d50*/
    if ( ++v1 >= stru_A80220.? ) /*0x502d58*/
      return 0; /*0x502d58*/
  }
  return result; /*0x502d5c*/
}



// ==== 0x00502D60  HouseClass::UpdatePowerTimers  this=HouseClass  sig=csp ====
int __thiscall HouseClass::UpdatePowerTimers(HouseClass *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x502d69*/
  Power::TimerProcess(*(_DWORD *)&this->__pad_13C[72]); /*0x502d77*/
  Power::TimerProcess(*(_DWORD *)(this->relatedTagsCapacity + 184)); /*0x502d88*/
  Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_13C[76], *(_DWORD *)&this->__pad_13C[80]); /*0x502d9d*/
  Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_13C[84], *(_DWORD *)&this->__pad_13C[88]); /*0x502db2*/
  Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_13C[92], *(_DWORD *)&this->__pad_13C[96]); /*0x502dc7*/
  Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_13C[100], *(_DWORD *)&this->__pad_13C[104]); /*0x502ddc*/
  Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_13C[108], *(_DWORD *)&this->__pad_13C[112]); /*0x502df1*/
  Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_13C[116], *(_DWORD *)&this->__pad_13C[120]); /*0x502e06*/
  Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_13C[124], *(_DWORD *)&this->__pad_13C[128]); /*0x502e1b*/
  Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_13C[132], *(_DWORD *)&this->__pad_13C[136]); /*0x502e30*/
  v3 = Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_13C[140], *(_DWORD *)&this->__pad_13C[144]); /*0x502e45*/
  LOBYTE(v3) = this->currentPlayer; /*0x502e4a*/
  Power::FlagProcess((Power *)a2, v3); /*0x502e53*/
  LOBYTE(v4) = this->production; /*0x502e58*/
  Power::FlagProcess((Power *)a2, v4); /*0x502e61*/
  LOBYTE(v5) = this->autocreateAllowed; /*0x502e66*/
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x502e6f*/
  LOBYTE(v6) = this->aiTriggersActive; /*0x502e74*/
  Power::FlagProcess((Power *)a2, v6); /*0x502e7d*/
  LOBYTE(v7) = this->defeated; /*0x502e82*/
  Power::FlagProcess((Power *)a2, v7); /*0x502e8b*/
  Power::TimerProcess(this->iqLevel2); /*0x502e99*/
  Power::TimerProcess(this->aiMode); /*0x502ea7*/
  Power::TimerProcess(this->repairTimer[2]); /*0x502eb5*/
  v8 = *(_DWORD *)this->__pad_280; /*0x502eba*/
  v9 = *(_DWORD *)&this->__pad_280[8]; /*0x502ec0*/
  if ( v8 != -1 ) /*0x502ec9*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v8 >= v9 ) /*0x502ed5*/
      v9 = 0; /*0x502edb*/
    else
      v9 -= *(_DWORD *)&stru_A8EB00.?[416] - v8; /*0x502ed7*/
  }
  Power::TimerProcess(v9); /*0x502ee0*/
  v10 = this->HouseClass_field_timer_28C[0]; /*0x502ee5*/
  v11 = this->HouseClass_field_timer_28C[2]; /*0x502eeb*/
  if ( v10 != -1 ) /*0x502ef4*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v10 >= v11 ) /*0x502f00*/
      v11 = 0; /*0x502f06*/
    else
      v11 -= *(_DWORD *)&stru_A8EB00.?[416] - v10; /*0x502f02*/
  }
  Power::TimerProcess(v11); /*0x502f0b*/
  v12 = this->savourTimer[0]; /*0x502f10*/
  v13 = this->savourTimer[2]; /*0x502f16*/
  if ( v12 != -1 ) /*0x502f1f*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v12 >= v13 ) /*0x502f2b*/
      v13 = 0; /*0x502f31*/
    else
      v13 -= *(_DWORD *)&stru_A8EB00.?[416] - v12; /*0x502f2d*/
  }
  Power::TimerProcess(v13); /*0x502f36*/
  Power::TimerProcess(this->ownedUnits); /*0x502f44*/
  Power::TimerProcess(this->ownedBuildings); /*0x502f52*/
  Power::TimerProcess(this->ownedInfantry); /*0x502f60*/
  Power::TimerProcess(this->ownedAircraft); /*0x502f6e*/
  Power::TimerProcess(this->balance); /*0x502f7c*/
  Power::TimerProcess(this->totalStorage); /*0x502f8a*/
  Power::TimerProcess(this->numAirpads); /*0x502f98*/
  Power::TimerProcess(this->numBarracks); /*0x502fa6*/
  Power::TimerProcess(this->numWarFactories); /*0x502fb4*/
  Power::TimerProcess(this->numShipyards); /*0x502fc2*/
  Power::TimerProcess(this->numConYards); /*0x502fd0*/
  Power::TimerProcess(this->numOrePurifiers); /*0x502fde*/
  Power::TimerProcess(this->powerOutput); /*0x502fec*/
  Power::TimerProcess(this->powerDrain); /*0x502ffa*/
  LOBYTE(v14) = this->mapIsClear; /*0x502fff*/
  Power::FlagProcess((Power *)a2, v14); /*0x503008*/
  Power::TimerProcess(this->HouseClass_field_548C); /*0x503016*/
  Power::TimerProcess(this->enemyHouseIndex); /*0x503024*/
  return (*(int (__thiscall **)(int *, int *))(this->base[6] + 8))(&this->base[6], a2); /*0x503039*/
}



// ==== 0x00503040  HouseClass::SaveLoad_Prefix  this=HouseClass  sig=csp ====
int __stdcall HouseClass::SaveLoad_Prefix(HouseClass *this, LPSTREAM pStm)
{
  HouseClass *v2; // esi
  int i; // edi
  int j; // edi
  int v5; // ecx
  int lastBuiltInfantryType; // eax
  int v7; // ecx
  int v8; // eax
  LPSTREAM v9; // edi
  int result; // eax
  int *planningPaths; // ebp
  int v12; // ebx
  HouseClass *v13; // ebp
  int v14; // ebx
  int v15; // ecx
  bool v16; // zf
  int v17; // edx
  int supersCapacity; // ecx
  int lastBuiltAircraftType; // eax
  int v20; // eax
  int supersCount; // edx
  int v22; // eax
  int v23; // eax
  int conYardsCapacity; // ecx
  int buildingsCapacity; // eax
  int buildingsCount; // eax
  int conYardsCount; // edx
  int v28; // eax
  int v29; // eax
  int angerNodesCapacity; // ecx
  int scoutNodesCapacity; // eax
  int scoutNodesCount; // eax
  int angerNodesCount; // edx
  int k; // ebp
  int v35; // edx
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // edx
  int v41; // eax
  int m; // ebp
  int ... [68169 chars total]



// ==== 0x00504740  HouseClass::EnsurePlanningPathExists  this=HouseClass  sig=csp ====
int __thiscall HouseClass::EnsurePlanningPathExists(HouseClass *this, unsigned int a2)
{
  int result; // eax
  int v4; // eax

  result = this->planningPaths[a2]; /*0x504748*/
  if ( !result ) /*0x504751*/
  {
    v4 = __2_YAPAXI_Z(0x40u); /*0x504755*/
    if ( v4 ) /*0x50475f*/
    {
      result = WaypointPathClass::Construct(v4, a2); /*0x504764*/
      this->planningPaths[a2] = result; /*0x504769*/
    }
    else
    {
      this->planningPaths[a2] = 0; /*0x504777*/
      return 0; /*0x504775*/
    }
  }
  return result; /*0x504770*/
}



// ==== 0x00504790  UpdateHouseClassAnger  this=HouseClass  sig=csp ====
int __fastcall UpdateHouseClassAnger(unsigned int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  __int64 v5; // rax
  int v6; // ecx
  int v7; // ebp
  int v8; // ecx
  _DWORD *v9; // edi
  int v10; // ecx
  int v12; // [esp+14h] [ebp+4h]
  int v13; // [esp+18h] [ebp+8h]

  v4 = 0; /*0x504793*/
  v5 = a1; /*0x50479c*/
  if ( *(int *)(a1 + 22036) > 0 ) /*0x5047a2*/
  {
    do /*0x5047c8*/
    {
      v6 = *(_DWORD *)(v5 + 22024); /*0x5047ac*/
      v7 = *(_DWORD *)(v6 + 8 * HIDWORD(v5)); /*0x5047b2*/
      v8 = v6 + 8 * HIDWORD(v5); /*0x5047b5*/
      if ( v7 == a4 ) /*0x5047ba*/
        *(_DWORD *)(v8 + 4) += a3; /*0x5047bc*/
      ++HIDWORD(v5); /*0x5047c5*/
    }
    while ( SHIDWORD(v5) < *(_DWORD *)(v5 + 22036) ); /*0x5047c8*/
  }
  v12 = 0; /*0x5047d0*/
  if ( *(int *)(v5 + 22036) <= 0 ) /*0x5047d6*/
    goto LABEL_18; /*0x5047d6*/
  v9 = *(_DWORD **)(v5 + 22024); /*0x5047d8*/
  v13 = *(_DWORD *)(v5 + 22036); /*0x5047de*/
  do /*0x504832*/
  {
    HIDWORD(v5) = *v9; /*0x5047e5*/
    if ( v9[1] > v4 && !*(_BYTE *)(HIDWORD(v5) + 501) ) /*0x5047eb*/
    {
      if ( !HIDWORD(v5) /*0x50481e*/
        || HIDWORD(v5) != (_DWORD)v5
        && (v10 = *(_DWORD *)(HIDWORD(v5) + 48), v10 != *(_DWORD *)(v5 + 48))
        && (v10 == -1 || ((1 << v10) & *(_DWORD *)(v5 + 22408)) == 0) )
      {
        v4 = v9[1]; /*0x504820*/
        v12 = *v9; /*0x504822*/
      }
    }
    v9 += 2; /*0x50482a*/
    --v13; /*0x50482e*/
  }
  while ( v13 ); /*0x504832*/
  if ( v12 ) /*0x50483a*/
    *(_DWORD *)(v5 + 22016) = *(_DWORD *)(v12 + 48); /*0x504842*/
  else
LABEL_18:
    *(_DWORD *)(v5 + 22016) = -1; /*0x50484f*/
  return v5; /*0x50483f*/
}



// ==== 0x00504860  ObjectClass::Team_Helper  this=ObjectClass  sig=csp ====
int __thiscall Team_Helper(ObjectClass *this, int a2)
{
  int result; // eax
  int i; // edx
  int v4; // eax
  int v5; // edi
  int v6; // eax

  result = *((_DWORD *)this + 5515); /*0x504860*/
  for ( i = 0; i < result; ++i ) /*0x50486a*/
  {
    v4 = *((_DWORD *)this + 5512); /*0x504872*/
    v5 = *(_DWORD *)(v4 + 8 * i); /*0x504878*/
    v6 = v4 + 8 * i; /*0x50487b*/
    if ( v5 == a2 ) /*0x504880*/
      *(_BYTE *)(v6 + 4) = 1; /*0x504882*/
    result = *((_DWORD *)this + 5515); /*0x504886*/
  }
  return result; /*0x504893*/
}



// ==== 0x00505180  TechnoClass::checkBuildLimit  this=TechnoClass  sig=csp ====
void __thiscall TechnoClass::checkBuildLimit(TechnoClass *this)
{
  char v2; // al
  int v3; // edi
  HouseClass *v4; // [esp+0h] [ebp-4h]

  v2 = this->disguiseBlinkTimer[0]; /*0x505189*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x505191*/
    v2 = v2 || BYTE1(this->disguiseBlinkTimer[0]); /*0x5051a5*/
  if ( !v2 && *(_DWORD *)&dword_A8B238 ) /*0x5051ad*/
    HouseClass::CanDetect(v4); /*0x5051af*/
  if ( !*((_DWORD *)this + 5573) ) /*0x5051b4*/
  {
    v3 = dword_A8E7AC; /*0x5051bf*/
    dword_A8E7AC = 0; /*0x5051c7*/
    HouseClass::GenerateAIBuildListEnsureSanity((HouseClass *)this); /*0x5051d1*/
    dword_A8E7AC = v3; /*0x5051d6*/
  }
}



// ==== 0x005051E0  HouseClass::FirstBuildableFromArray  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::FirstBuildableFromArray(HouseClass *this, int a2)
{
  char v3; // cl
  int v4; // esi
  int v5; // ebx
  _DWORD **v6; // eax
  _DWORD *result; // eax
  int v8; // edx
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  int v12; // ecx
  int v13; // esi
  _DWORD **v14; // edx
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]
  int i; // [esp+1Ch] [ebp+4h]

  v3 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)(this->relatedTagsCapacity + 152)); /*0x5051f7*/
  v16 = 0; /*0x505202*/
  v4 = *(_DWORD *)(a2 + 16); /*0x50520a*/
  v5 = 1 << v3; /*0x50520d*/
  v17 = v4; /*0x505211*/
  if ( v4 <= 0 ) /*0x505215*/
    return 0; /*0x5052f7*/
  v6 = *(_DWORD ***)(a2 + 4); /*0x50521b*/
  for ( i = (int)v6; ; i += 4 ) /*0x50521e*/
  {
    result = *v6; /*0x505222*/
    if ( (v5 & result[435]) != 0 ) /*0x50522a*/
    {
      v8 = result[872]; /*0x505230*/
      if ( v8 == -1 || ((1 << *(_DWORD *)(this->relatedTagsCapacity + 184)) & v8) != 0 ) /*0x50524d*/
      {
        v9 = result[873]; /*0x505253*/
        if ( v9 == -1 || ((1 << *(_DWORD *)(this->relatedTagsCapacity + 184)) & v9) == 0 ) /*0x505270*/
        {
          v10 = result[436]; /*0x505272*/
          if ( v10 == -1 || v10 == *(_DWORD *)(this->relatedTagsCapacity + 188) ) /*0x505286*/
            break; /*0x505286*/
        }
      }
    }
LABEL_18:
    v6 = (_DWORD **)(i + 4); /*0x5052db*/
    if ( ++v16 >= v4 ) /*0x5052e7*/
      return 0; /*0x5052f1*/
  }
  if ( stru_A8B250.__pad_0[19] ) /*0x505290*/
    return result; /*0x505290*/
  v11 = result[1468]; /*0x505292*/
  if ( v11 == -1 ) /*0x50529b*/
    return result; /*0x50529b*/
  v12 = 0; /*0x5052a3*/
  v13 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2348); /*0x5052a5*/
  if ( v13 <= 0 ) /*0x5052ad*/
  {
LABEL_16:
    if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this->supersCount + 4 * v11) + 40) + 231) ) /*0x5052d5*/
      return result; /*0x5052d5*/
    v4 = v17; /*0x5052d7*/
    goto LABEL_18; /*0x5052d7*/
  }
  v14 = *(_DWORD ***)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2336); /*0x5052af*/
  while ( *v14 != result ) /*0x5052b7*/
  {
    ++v12; /*0x5052b9*/
    ++v14; /*0x5052ba*/
    if ( v12 >= v13 ) /*0x5052bf*/
      goto LABEL_16; /*0x5052bf*/
  }
  return result; /*0x5052f9*/
}



// ==== 0x00505310  BuildingClass::FindBySWType  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::FindBySWType(BuildingClass *this, int a2)
{
  char v2; // cl
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  int i; // esi

  v2 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)&this->?[2].firstTrigger); /*0x50532a*/
  v3 = 0; /*0x50532c*/
  v4 = 1 << v2; /*0x50532e*/
  v5 = *(_DWORD *)(a2 + 16); /*0x505330*/
  if ( v5 <= 0 ) /*0x505335*/
    return 0; /*0x50534e*/
  for ( i = *(_DWORD *)(a2 + 4); (v4 & *(_DWORD *)(*(_DWORD *)i + 1740)) == 0; i += 4 ) /*0x50533a*/
  {
    if ( ++v3 >= v5 ) /*0x50534c*/
      return 0; /*0x50534c*/
  }
  return *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v3); /*0x50534e*/
}



// ==== 0x00505360  HouseClass::PrerequisitesForTechnoTypeAreListed  this=VectorClass  sig=csp ====
int __stdcall HouseClass::PrerequisitesForTechnoTypeAreListed(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // ecx
  int v5; // edx
  int *HarvesterUnit; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // edx
  int v11; // [esp+10h] [ebp-4h]

  result = a1; /*0x505361*/
  v11 = 0; /*0x505371*/
  if ( *(int *)(a1 + 1608) > 0 ) /*0x505379*/
  {
    do /*0x505395*/
    {
      result = *(_DWORD *)(*(_DWORD *)(a1 + 1596) + 4 * v11); /*0x505395*/
      if ( result < 0 ) /*0x50539a*/
      {
        HarvesterUnit = 0; /*0x5053cb*/
        switch ( result ) /*0x5053d2*/
        {
          case -6: /*0x5053d2*/
            HarvesterUnit = (int *)&dword_8871E0->? + 1; /*0x505423*/
            break; /*0x505423*/
          case -5: /*0x5053d2*/
            HarvesterUnit = &dword_8871E0->?[3]; /*0x505415*/
            break; /*0x50541b*/
          case -4: /*0x5053d2*/
            HarvesterUnit = &dword_8871E0->InfantryBaseMult[2]; /*0x505407*/
            break; /*0x50540d*/
          case -3: /*0x5053d2*/
            HarvesterUnit = dword_8871E0->?; /*0x5053fa*/
            break; /*0x505400*/
          case -2: /*0x5053d2*/
            HarvesterUnit = &dword_8871E0->?[2]; /*0x5053ec*/
            break; /*0x5053f2*/
          case -1: /*0x5053d2*/
            HarvesterUnit = (int *)&dword_8871E0->CHRONOSK_SHP; /*0x5053de*/
            break; /*0x5053e4*/
          default:
            break;
        }
        result = HarvesterUnit[4]; /*0x505429*/
        v7 = 0; /*0x50542c*/
        if ( result <= 0 ) /*0x505430*/
        {
LABEL_24:
          LOBYTE(result) = 0; /*0x505475*/
          return result; /*0x50547c*/
        }
        while ( 1 ) /*0x505437*/
        {
          v8 = (*(int (__thiscall **)(int *, int))(*HarvesterUnit + 24))(HarvesterUnit, v7); /*0x505437*/
          v9 = 0; /*0x50543a*/
          if ( a3 > 0 ) /*0x50543e*/
            break; /*0x50543e*/
LABEL_20:
          result = HarvesterUnit[4]; /*0x50544f*/
          if ( ++v7 >= result ) /*0x505455*/
            goto LABEL_24; /*0x505455*/
        }
        v10 = *(_DWORD **)(a2 + 4); /*0x505440*/
        while ( *v10 != v8 ) /*0x505445*/
        {
          ++v9; /*0x505447*/
          ++v10; /*0x505448*/
          if ( v9 >= a3 ) /*0x50544d*/
            goto LABEL_20; /*0x50544d*/
        }
      }
      else
      {
        v4 = 0; /*0x50539c*/
        if ( a3 <= 0 ) /*0x5053a0*/
          goto LABEL_24; /*0x5053a0*/
        v5 = *((_DWORD *)dword_A83C6C + result); /*0x5053ac*/
        result = *(_DWORD *)(a2 + 4); /*0x5053af*/
        while ( *(_DWORD *)result != v5 ) /*0x5053b4*/
        {
          ++v4; /*0x5053ba*/
          result += 4; /*0x5053bb*/
          if ( v4 >= a3 ) /*0x5053c0*/
            goto LABEL_24; /*0x5053c0*/
        }
      }
      result = v11 + 1; /*0x505461*/
      v11 = result; /*0x505468*/
    }
    while ( result < *(_DWORD *)(a1 + 1608) ); /*0x505395*/
  }
  LOBYTE(result) = 1; /*0x50547f*/
  return result; /*0x505475*/
}



// ==== 0x005054B0  HouseClass::GenerateAIBuildListEnsureSanity  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GenerateAIBuildListEnsureSanity(HouseClass *this)
{
  int relatedTagsCapacity; // eax
  int v3; // edx
  int v4; // ebp
  int v5; // esi
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // edx
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ebp
  _DWORD *BuildableFromArray; // esi
  int v18; // eax
  _DWORD *Items; // ecx
  int v20; // eax
  _DWORD *v21; // esi
  int v22; // eax
  _DWORD *v23; // eax
  int v24; // ecx
  _DWORD *v25; // esi
  int v26; // edx
  _DWORD *v27; // eax
  int v28; // ecx
  _DWORD *v29; // esi
  int v30; // edx
  int v31; // ebp
  char v32; // bl
  int v33; // esi
  int v34; // edi
  int v35; // eax
  _DWORD *v36; // esi
  int v37; // eax
  HouseClass *v38; // edi
  _DWORD *v39; // ebp
  int v40; // esi
  int v41; // edx
  int v42; // ecx
  int v43; // eax
  int v44; // esi
  int v45; // edi
  HouseClass *v46; // ebx
  int v47; // edx
  int v48; // edi
  _DWORD *v49; // ecx
  int v50; // ebx
  int v51; // esi
  int m_8; // eax
  _DWORD *v53; // esi
  int v54; // eax
  _DWORD *v55; // esi
  int v56; // eax
  _DWORD *v57; // esi
  int v58; // eax
  int j; // edi
  _DWORD *v60; // esi
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // edx
  int v65; // edi
  int v66; // esi
  int v67; // ecx
  unsigned int v68; // edi
  int *v69; // esi
  int v70; // eax
  int v71; // ecx
  int v72; // eax
  unsigned int v73; // edx
  unsigned int *v74; // eax
  unsigned int v75; // edi
  int v76; // ecx
  int *v77; // esi
  int v78; // eax
  int v79; // ecx
  int v80; // eax
  int result; // eax
  int i; // [esp+60h] [ebp-94h]
  int v83; // [esp+60h] [ebp-94h]
  int k; // [esp+60h] [ebp-94h]
  VectorClass v85; // [esp+64h] [ebp-90h] BYREF
  int v86; // [esp+74h] [ebp-80h]
  int v87; // [esp+78h] [ebp-7Ch]
  _DynamicVectorClass_PBVBuildingTypeClass v88; // [esp+7Ch] [ebp-78h] BYREF
  int v89; // [esp+90h] [ebp-64h]
  HouseClass *v90; // [esp+94h] [ebp-60h]
  int v91; // [esp+98h] [ebp-5Ch]
  int v92; // [esp+9Ch] [ebp-58h]
  VectorClass v93; // [esp+A0h] [ebp-54h] BYREF
  int v94; // [esp+B0h] [ebp-44h]
  int v95; // [esp+B4h] [ebp-40h]
  BoolVector v96; // [esp+B8h] [ebp-3Ch] BYREF
  void *v97; // [esp+BCh] [ebp-38h]
  int v98; // [esp+C0h] [ebp-34h]
  int v99; // [esp+C4h] [ebp-30h]
  int v100; // [esp+C8h] [ebp-2Ch]
  int v101; // [esp+CCh] [ebp-28h]
  int v102; // [esp+D0h] [ebp-24h]
  unsigned int v103; // [esp+DCh] [ebp-18h]
  unsigned int v104; // [esp+ECh] [ebp-8h]

  relatedTagsCapacity = this->relatedTagsCapacity; /*0x5054bb*/
  v3 = this->base[7]; /*0x5054be*/
  v90 = this; /*0x5054c5*/
  v102 = *(_DWORD *)(relatedTagsCapacity + 188); /*0x5054cf*/
  (*(void (__thiscall **)(int *))(v3 + 12))(&this->base[7]); /*0x5054dc*/
  v4 = 1 << SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)(this->relatedTagsCapacity + 152)); /*0x5054f6*/
  VectorClass::BuildingTypeConstructor(&v93, 0, 0); /*0x5054fe*/
  v93.ptr_0 = &DynamicVectorClass<BuildingTypeClass const *>::`vftable'; /*0x50550e*/
  v95 = 10; /*0x505516*/
  v94 = 0; /*0x50551a*/
  BoolVector::Construct(&v96, 0, 0); /*0x50551e*/
  v96 = (BoolVector)&DynamicVectorClass<bool>::`vftable'; /*0x505528*/
  v101 = 10; /*0x505532*/
  v100 = 0; /*0x505536*/
  for ( i = 0; i < dword_A83C78; ++i ) /*0x50553a*/
  {
    v5 = *((_DWORD *)dword_A83C6C + i); /*0x50554d*/
    if ( (v4 & *(_DWORD *)(v5 + 1740)) != 0 ) /*0x505556*/
    {
      v6 = this->relatedTagsCapacity; /*0x50555c*/
      v7 = *(_DWORD *)(v5 + 1744); /*0x50555f*/
      if ( v7 == *(_DWORD *)(v6 + 188) || v7 == -1 ) /*0x505570*/
      {
        if ( *(_BYTE *)(v5 + 5893) ) /*0x505576*/
        {
          if ( *(_DWORD *)(v5 + 1588) <= *(_DWORD *)&this->__pad_13C[152] ) /*0x505592*/
          {
            v8 = *(_DWORD *)(v5 + 3488); /*0x505598*/
            if ( v8 == -1 || ((1 << *(_DWORD *)(v6 + 184)) & v8) != 0 ) /*0x5055b2*/
            {
              v9 = *(_DWORD *)(v5 + 3492); /*0x5055b8*/
              if ( v9 == -1 || ((1 << *(_DWORD *)(v6 + 184)) & v9) == 0 ) /*0x5055d2*/
              {
                if ( stru_A8B250.__pad_0[19] ) /*0x5055df*/
                  goto LABEL_18; /*0x5055df*/
                v10 = *(_DWORD *)(v5 + 5872); /*0x5055e1*/
                if ( v10 == -1 ) /*0x5055ea*/
                  goto LABEL_18; /*0x5055ea*/
                v11 = 0; /*0x5055f2*/
                v12 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2348); /*0x5055f4*/
                if ( v12 > 0 ) /*0x5055fc*/
                {
                  v13 = *(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2336); /*0x5055fe*/
                  while ( *v13 != v5 ) /*0x505606*/
                  {
                    ++v11; /*0x505608*/
                    ++v13; /*0x505609*/
                    if ( v11 >= v12 ) /*0x50560e*/
                      goto LABEL_17; /*0x50560e*/
                  }
LABEL_18:
                  if ( v94 < v93.Capacity /*0x505661*/
                    || (v93.IsAllocated || !v93.Capacity)
                    && v95 > 0
                    && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v93.ptr_0 + 2))(
                         &v93,
                         v95 + v93.Capacity,
                         0) )
                  {
                    v14 = v94++; /*0x50566c*/
                    *((_DWORD *)v93.Items + v14) = v5; /*0x505677*/
                  }
                  if ( v100 < v98 /*0x5056a7*/
                    || (BYTE1(v99) || !v98)
                    && v101 > 0
                    && (*(unsigned __int8 (__thiscall **)(BoolVector *, int, _DWORD))(*(_DWORD *)&v96 + 8))(
                         &v96,
                         v101 + v98,
                         0) )
                  {
                    v15 = v100++; /*0x5056b2*/
                    *((_BYTE *)v97 + v15) = 0; /*0x5056bd*/
                  }
                  continue; /*0x5056bd*/
                }
LABEL_17:
                if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this->supersCount + 4 * v10) + 40) + 231) ) /*0x50561c*/
                  goto LABEL_18; /*0x505624*/
              }
            }
          }
        }
      }
    }
  }
  v16 = v94; /*0x5056d8*/
  v91 = v94; /*0x5056e4*/
  VectorClass::BuildingTypeConstructor(&v85, 0, 0); /*0x5056e8*/
  v85.ptr_0 = &DynamicVectorClass<BuildingTypeClass const *>::`vftable'; /*0x5056fb*/
  v87 = 10; /*0x505704*/
  v86 = 0; /*0x50570c*/
  BuildableFromArray = HouseClass::FirstBuildableFromArray(this, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2220); /*0x505719*/
  v18 = 0; /*0x50571b*/
  if ( v16 > 0 ) /*0x50571f*/
  {
    Items = v93.Items; /*0x505721*/
    while ( BuildableFromArray != (_DWORD *)*Items ) /*0x505727*/
    {
      ++v18; /*0x505729*/
      ++Items; /*0x50572a*/
      if ( v18 >= v16 ) /*0x50572f*/
        goto LABEL_42; /*0x50572f*/
    }
    *((_BYTE *)v97 + v18) = 1; /*0x505737*/
    if ( v86 < v85.Capacity /*0x505766*/
      || (v85.IsAllocated || !v85.Capacity)
      && v87 > 0
      && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v85.ptr_0 + 2))(&v85, v87 + v85.Capacity, 0) )
    {
      v20 = v86++; /*0x505771*/
      *((_DWORD *)v85.Items + v20) = BuildableFromArray; /*0x50577c*/
    }
  }
LABEL_42:
  v21 = HouseClass::FirstBuildableFromArray(this, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2248); /*0x50577f*/
  if ( v86 < v85.Capacity /*0x5057c2*/
    || (v85.IsAllocated || !v85.Capacity)
    && v87 > 0
    && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v85.ptr_0 + 2))(&v85, v87 + v85.Capacity, 0) )
  {
    v22 = v86++; /*0x5057cd*/
    *((_DWORD *)v85.Items + v22) = v21; /*0x5057d8*/
  }
  v23 = HouseClass::FirstBuildableFromArray(this, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2304); /*0x5057ea*/
  v24 = 0; /*0x5057f3*/
  if ( v94 > 0 ) /*0x5057f7*/
  {
    v25 = v93.Items; /*0x5057fd*/
    while ( (_DWORD *)*v25 != v23 ) /*0x505801*/
    {
      ++v24; /*0x505803*/
      ++v25; /*0x505804*/
      if ( v24 >= v94 ) /*0x505809*/
        goto LABEL_54; /*0x505809*/
    }
    v26 = *(_DWORD *)v93.Items; /*0x50580d*/
    *(_DWORD *)v93.Items = v23; /*0x50580f*/
    *((_BYTE *)v97 + v24) = *(_BYTE *)v97; /*0x505817*/
    *(_BYTE *)v97 = 0; /*0x50581e*/
    *((_DWORD *)v93.Items + v24) = v26; /*0x505825*/
  }
LABEL_54:
  v27 = HouseClass::FirstBuildableFromArray(this, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2360); /*0x505828*/
  v28 = 0; /*0x505840*/
  if ( v94 > 0 ) /*0x505844*/
  {
    v29 = v93.Items; /*0x50584a*/
    while ( (_DWORD *)*v29 != v27 ) /*0x50584e*/
    {
      ++v28; /*0x505850*/
      ++v29; /*0x505851*/
      if ( v28 >= v94 ) /*0x505856*/
        goto LABEL_60; /*0x505856*/
    }
    v30 = *((_DWORD *)v93.Items + 1); /*0x50585a*/
    *((_DWORD *)v93.Items + 1) = v27; /*0x50585d*/
    *((_BYTE *)v97 + v28) = *((_BYTE *)v97 + 1); /*0x505867*/
    *((_BYTE *)v97 + 1) = 0; /*0x50586e*/
    *((_DWORD *)v93.Items + v28) = v30; /*0x505876*/
  }
LABEL_60:
  v83 = v16 - 1; /*0x505879*/
  while ( v83 > 0 ) /*0x505882*/
  {
    v31 = -1; /*0x505890*/
    v32 = 0; /*0x505893*/
    v33 = 0; /*0x505895*/
    v92 = v86; /*0x505897*/
    if ( v91 <= 0 ) /*0x50589d*/
      break; /*0x50589d*/
    do /*0x505947*/
    {
      if ( !*((_BYTE *)v97 + v33) ) /*0x5058a7*/
      {
        v34 = *((_DWORD *)v93.Items + v33); /*0x5058ba*/
        if ( _strcmpi((char *)(v34 + 36), aGaplug) ) /*0x5058c1*/
        {
          if ( (unsigned __int8)HouseClass::PrerequisitesForTechnoTypeAreListed(v34, (int)&v85, v92) ) /*0x5058e0*/
          {
            *((_BYTE *)v97 + v33) = 1; /*0x5058ed*/
            if ( v86 < v85.Capacity /*0x50591c*/
              || (v85.IsAllocated || !v85.Capacity)
              && v87 > 0
              && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v85.ptr_0 + 2))(
                   &v85,
                   v87 + v85.Capacity,
                   0) )
            {
              v35 = v86++; /*0x505927*/
              *((_DWORD *)v85.Items + v35) = v34; /*0x505932*/
            }
            v32 = 1; /*0x505939*/
            --v83; /*0x50593c*/
          }
        }
        else
        {
          v31 = v33; /*0x5058cd*/
        }
      }
      ++v33; /*0x505944*/
    }
    while ( v33 < v91 ); /*0x505947*/
    if ( !v32 ) /*0x50594f*/
    {
      if ( v31 == -1 ) /*0x505954*/
        break; /*0x505954*/
      *((_BYTE *)v97 + v31) = 1; /*0x50595a*/
      v36 = (char *)v93.Items + 4 * v31; /*0x505966*/
      if ( v86 < v85.Capacity /*0x505992*/
        || (v85.IsAllocated || !v85.Capacity)
        && v87 > 0
        && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v85.ptr_0 + 2))(
             &v85,
             v87 + v85.Capacity,
             0) )
      {
        v37 = v86++; /*0x5059a1*/
        *((_DWORD *)v85.Items + v37) = *v36; /*0x5059aa*/
      }
      --v83; /*0x5059ad*/
    }
  }
  v38 = v90; /*0x5059bd*/
  v39 = HouseClass::FirstBuildableFromArray(v90, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2276); /*0x5059d9*/
  v40 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2876; /*0x5059db*/
  v41 = 1 << SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)(v38->relatedTagsCapacity + 152)); /*0x5059f6*/
  v42 = *(_DWORD *)(v40 + 16); /*0x5059f8*/
  v43 = 0; /*0x5059fb*/
  if ( v42 <= 0 ) /*0x5059ff*/
    goto LABEL_88; /*0x5059ff*/
  v44 = *(_DWORD *)(v40 + 4); /*0x505a01*/
  v45 = v44; /*0x505a04*/
  while ( (v41 & *(_DWORD *)(*(_DWORD *)v45 + 1740)) == 0 ) /*0x505a0e*/
  {
    ++v43; /*0x505a10*/
    v45 += 4; /*0x505a11*/
    if ( v43 >= v42 ) /*0x505a16*/
      goto LABEL_88; /*0x505a16*/
  }
  if ( *(_DWORD *)(v44 + 4 * v43) ) /*0x505a5a*/
  {
    v46 = v90; /*0x505a60*/
    v47 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4984) /*0x505a75*/
                    + 4 * *(_DWORD *)&v90->__pad_13C[72]);
  }
  else
  {
LABEL_88:
    v46 = v90; /*0x505a18*/
    v47 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4928) /*0x505a35*/
                    + 4 * *(_DWORD *)&v90->__pad_13C[72])
        - 1;
  }
  v48 = 0; /*0x505a3a*/
  if ( v86 - 1 > 0 ) /*0x505a3f*/
  {
    v49 = v85.Items; /*0x505a45*/
    while ( (_DWORD *)*v49 != v39 ) /*0x505a4b*/
    {
      ++v48; /*0x505a4d*/
      ++v49; /*0x505a4e*/
      if ( v48 >= v86 - 1 ) /*0x505a53*/
        goto LABEL_109; /*0x505a53*/
    }
    if ( v48 != -1 && v47 > 0 ) /*0x505a85*/
    {
      v50 = v47; /*0x505a8b*/
      do /*0x505b1f*/
      {
        v51 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, v48, v86 - 1); /*0x505aa9*/
        if ( v86 < v85.Capacity /*0x505ad4*/
          || (v85.IsAllocated || !v85.Capacity)
          && v87 > 0
          && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v85.ptr_0 + 2))(
               &v85,
               v87 + v85.Capacity,
               0) )
        {
          if ( v51 < v86 - 1 ) /*0x505ae2*/
            memcpy((char *)v85.Items + 4 * v51 + 8, (char *)v85.Items + 4 * v51 + 4, 4 * (v86 + 0x3FFFFFFF * (v51 + 1))); /*0x505b05*/
          *((_DWORD *)v85.Items + v51 + 1) = v39; /*0x505b11*/
          ++v86; /*0x505b1a*/
        }
        --v50; /*0x505b1e*/
      }
      while ( v50 ); /*0x505b1f*/
      v46 = v90; /*0x505b25*/
    }
  }
LABEL_109:
  VectorClass::BuildingTypeConstructor((VectorClass *)&v88, 0, 0); /*0x505b29*/
  m_8 = v88.m_8; /*0x505b36*/
  v53 = v85.Items; /*0x505b3a*/
  *(_DWORD *)v88.__pad_0 = &DynamicVectorClass<BuildingTypeClass const *>::`vftable'; /*0x505b40*/
  v89 = 10; /*0x505b48*/
  v88.m_10 = 0; /*0x505b50*/
  if ( v88.m_8 > 0 ) /*0x505b58*/
    goto LABEL_113; /*0x505b58*/
  if ( BYTE1(v88.m_C) || !v88.m_8 ) /*0x505b64*/
  {
    if ( !GenericVector::Resize2(&v88, v88.m_8 + 10, 0) ) /*0x505b78*/
    {
LABEL_114:
      m_8 = v88.m_8; /*0x505b8e*/
      goto LABEL_115; /*0x505b8e*/
    }
LABEL_113:
    v54 = v88.m_10++; /*0x505b7a*/
    *(_DWORD *)(*(_DWORD *)&v88.m_1[3] + 4 * v54) = *v53; /*0x505b8b*/
    goto LABEL_114; /*0x505b8b*/
  }
LABEL_115:
  v55 = (char *)v85.Items + 4; /*0x505b92*/
  if ( v88.m_10 < m_8 ) /*0x505b9f*/
    goto LABEL_120; /*0x505b9f*/
  if ( (BYTE1(v88.m_C) || !m_8) && v89 > 0 ) /*0x505bb3*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DynamicVectorClass_PBVBuildingTypeClass *, int, _DWORD))(*(_DWORD *)v88.__pad_0 + 8))( /*0x505bc7*/
            &v88,
            v89 + m_8,
            0) )
    {
LABEL_121:
      m_8 = v88.m_8; /*0x505bdd*/
      goto LABEL_122; /*0x505bdd*/
    }
LABEL_120:
    v56 = v88.m_10++; /*0x505bc9*/
    *(_DWORD *)(*(_DWORD *)&v88.m_1[3] + 4 * v56) = *v55; /*0x505bda*/
    goto LABEL_121; /*0x505bda*/
  }
LABEL_122:
  v57 = (char *)v85.Items + 8; /*0x505be1*/
  if ( v88.m_10 < m_8 ) /*0x505bee*/
    goto LABEL_127; /*0x505bee*/
  if ( (BYTE1(v88.m_C) || !m_8) && v89 > 0 ) /*0x505c02*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DynamicVectorClass_PBVBuildingTypeClass *, int, _DWORD))(*(_DWORD *)v88.__pad_0 + 8))( /*0x505c16*/
            &v88,
            v89 + m_8,
            0) )
    {
LABEL_128:
      m_8 = v88.m_8; /*0x505c2c*/
      goto LABEL_129; /*0x505c2c*/
    }
LABEL_127:
    v58 = v88.m_10++; /*0x505c18*/
    *(_DWORD *)(*(_DWORD *)&v88.m_1[3] + 4 * v58) = *v57; /*0x505c29*/
    goto LABEL_128; /*0x505c29*/
  }
LABEL_129:
  for ( j = 3; j < v86; ++j ) /*0x505c3b*/
  {
    v60 = (char *)v85.Items + 4 * j; /*0x505c41*/
    if ( v88.m_10 < m_8 ) /*0x505c4a*/
      goto LABEL_135; /*0x505c4a*/
    if ( !BYTE1(v88.m_C) && m_8 || v89 <= 0 ) /*0x505c5e*/
      continue; /*0x505c5e*/
    if ( (*(unsigned __int8 (__thiscall **)(_DynamicVectorClass_PBVBuildingTypeClass *, int, _DWORD))(*(_DWORD *)v88.__pad_0 + 8))( /*0x505c6d*/
           &v88,
           v89 + m_8,
           0) )
    {
LABEL_135:
      v61 = v88.m_10++; /*0x505c7c*/
      *(_DWORD *)(*(_DWORD *)&v88.m_1[3] + 4 * v61) = *v60; /*0x505c85*/
    }
    m_8 = v88.m_8; /*0x505c88*/
  }
  v62 = 0; /*0x505c95*/
  if ( v102 ) /*0x505ca0*/
  {
    if ( v102 == 1 ) /*0x505cb9*/
    {
      v63 = *(_DWORD *)&v46->__pad_13C[72]; /*0x505cc1*/
      v64 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3488); /*0x505cc7*/
    }
    else
    {
      if ( v102 != 2 ) /*0x505cd2*/
        goto LABEL_145; /*0x505cd2*/
      v63 = *(_DWORD *)&v46->__pad_13C[72]; /*0x505cda*/
      v64 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3516); /*0x505ce0*/
    }
  }
  else
  {
    v63 = *(_DWORD *)&v46->__pad_13C[72]; /*0x505ca8*/
    v64 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3460); /*0x505cae*/
  }
  v62 = *(_DWORD *)(v64 + 4 * v63); /*0x505ce6*/
LABEL_145:
  if ( v62 > 0 ) /*0x505ceb*/
  {
    v65 = v62; /*0x505cf1*/
    do /*0x505d87*/
    {
      v66 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 3, v88.m_10 - 1); /*0x505d13*/
      if ( v88.m_10 < v88.m_8 /*0x505d3e*/
        || (BYTE1(v88.m_C) || !v88.m_8)
        && v89 > 0
        && (*(unsigned __int8 (__thiscall **)(_DynamicVectorClass_PBVBuildingTypeClass *, int, _DWORD))(*(_DWORD *)v88.__pad_0 + 8))(
             &v88,
             v89 + v88.m_8,
             0) )
      {
        if ( v66 < v88.m_10 - 1 ) /*0x505d4e*/
          memcpy( /*0x505d6d*/
            (void *)(*(_DWORD *)&v88.m_1[3] + 4 * v66 + 8),
            (const void *)(*(_DWORD *)&v88.m_1[3] + 4 * (v66 + 1)),
            4 * (v88.m_10 + 0x3FFFFFFF * (v66 + 1)));
        *(_DWORD *)(*(_DWORD *)&v88.m_1[3] + 4 * v66 + 4) = -1; /*0x505d79*/
        ++v88.m_10; /*0x505d82*/
      }
      --v65; /*0x505d86*/
    }
    while ( v65 ); /*0x505d87*/
  }
  v67 = 0; /*0x505d91*/
  for ( k = 0; k < v88.m_10; v67 = ++k ) /*0x505d99*/
  {
    v68 = *(_DWORD *)(*(_DWORD *)&v88.m_1[3] + 4 * v67); /*0x505da5*/
    if ( v68 < 0xFFFFFFFC ) /*0x505daa*/
    {
      v92 = 0; /*0x505e33*/
      v75 = *(_DWORD *)(v68 + 3576); /*0x505e41*/
      v76 = v90->base[11]; /*0x505e4d*/
      v77 = &v90->base[7]; /*0x505e53*/
      LOBYTE(v104) = 0; /*0x505e59*/
      v78 = v90->base[9]; /*0x505e61*/
      if ( v76 >= v78 ) /*0x505e66*/
      {
        if ( !BYTE1(v90->base[10]) && v78 ) /*0x505e71*/
          continue; /*0x505e71*/
        v79 = v90->base[12]; /*0x505e73*/
        if ( v79 <= 0 /*0x505e83*/
          || !(*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v77 + 8))(&v90->base[7], v78 + v79, 0) )
        {
          continue; /*0x505e88*/
        }
      }
      v80 = v77[4]; /*0x505e8a*/
      v73 = v104; /*0x505e8d*/
      v77[4] = v80 + 1; /*0x505e97*/
      v74 = (unsigned int *)(v77[1] + 16 * v80); /*0x505ea0*/
      *v74 = v75; /*0x505ea2*/
      v74[1] = 0; /*0x505ea4*/
    }
    else
    {
      v91 = 0; /*0x505db5*/
      LOBYTE(v103) = 0; /*0x505dbf*/
      v69 = &v90->base[7]; /*0x505dd6*/
      v70 = v90->base[9]; /*0x505ddc*/
      if ( v90->base[11] >= v70 ) /*0x505de4*/
      {
        if ( !BYTE1(v90->base[10]) && v70 ) /*0x505def*/
          continue; /*0x505def*/
        v71 = v90->base[12]; /*0x505df5*/
        if ( v71 <= 0 /*0x505e09*/
          || !(*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v69 + 8))(&v90->base[7], v70 + v71, 0) )
        {
          continue; /*0x505e0e*/
        }
      }
      v72 = v69[4]; /*0x505e14*/
      v73 = v103; /*0x505e17*/
      v69[4] = v72 + 1; /*0x505e21*/
      v74 = (unsigned int *)(v69[1] + 16 * v72); /*0x505e2a*/
      *v74 = v68; /*0x505e2c*/
      v74[1] = 0; /*0x505e2e*/
    }
    v74[2] = v73; /*0x505ea7*/
    v74[3] = 0; /*0x505eaa*/
  }
  *(_DWORD *)v88.__pad_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x505ec2*/
  if ( *(_DWORD *)&v88.m_1[3] && BYTE1(v88.m_C) ) /*0x505edb*/
  {
    __3_YAXPAX_Z(*(void **)&v88.m_1[3]); /*0x505ede*/
    *(_DWORD *)&v88.m_1[3] = 0; /*0x505ee6*/
  }
  BYTE1(v88.m_C) = 0; /*0x505eee*/
  v88.m_8 = 0; /*0x505ef5*/
  v85.ptr_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x505ef9*/
  if ( v85.Items && v85.IsAllocated ) /*0x505f05*/
  {
    __3_YAXPAX_Z(v85.Items); /*0x505f08*/
    v85.Items = 0; /*0x505f10*/
  }
  v85.IsAllocated = 0; /*0x505f18*/
  v85.Capacity = 0; /*0x505f1f*/
  v96 = (BoolVector)&VectorClass<bool>::`vftable'; /*0x505f23*/
  if ( v97 && BYTE1(v99) ) /*0x505f33*/
  {
    __3_YAXPAX_Z(v97); /*0x505f36*/
    v97 = 0; /*0x505f3e*/
  }
  result = (int)v93.Items; /*0x505f42*/
  v98 = 0; /*0x505f46*/
  v93.ptr_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x505f4c*/
  BYTE1(v99) = 0; /*0x505f53*/
  if ( v93.Items ) /*0x505f59*/
  {
    if ( v93.IsAllocated ) /*0x505f61*/
      __3_YAXPAX_Z(v93.Items); /*0x505f64*/
  }
  return result; /*0x505f50*/
}



// ==== 0x00505F80  globalHelper_005F80  this=-  sig=ida-proto ====
int __fastcall globalHelper_005F80(int a1, int *a2, int a3, int a4)
{
  int v4; // esi
  __int64 v5; // rax
  signed int v6; // ecx
  signed int v7; // eax

  v4 = *(__int16 *)a2 - *(__int16 *)(a1 + 22352); /*0x505f92*/
  v5 = *((__int16 *)a2 + 1) - *(__int16 *)(a1 + 22354); /*0x505f9a*/
  v6 = (HIDWORD(v5) ^ v5) - HIDWORD(v5); /*0x505fa2*/
  v7 = abs32(v4); /*0x505fa7*/
  if ( v7 <= v6 ) /*0x505fab*/
    v7 = v6; /*0x505fad*/
  return a3 + 1000 * v7; /*0x505fa1*/
}



// ==== 0x00505FD0  globalHelper_005FD0  this=HouseClass  sig=csp ====
int __userpurge globalHelper_005FD0@<eax>(int a1@<ecx>, int *a2@<edx>, double a3@<st0>, int a4, int a5)
{
  int v5; // esi
  int v6; // edx
  int v8; // edi
  int v9; // eax
  __int64 v10; // rax
  double v12; // [esp+0h] [ebp-24h]
  double v13; // [esp+8h] [ebp-1Ch]
  int v14; // [esp+1Ch] [ebp-8h]
  unsigned int v15; // [esp+2Ch] [ebp+8h]

  v5 = *((__int16 *)a2 + 1); /*0x505fd5*/
  v6 = *(__int16 *)a2; /*0x505ff7*/
  v8 = *(_DWORD *)(*(_DWORD *)(a1 + 90208) /*0x506002*/
                 + 4 * (v6 + *(_DWORD *)(a1 + 22364) * (v5 - *(_DWORD *)(a1 + 22360)) - *(_DWORD *)(a1 + 22356)));
  v9 = 0; /*0x506005*/
  if ( a5 != -1 ) /*0x50600a*/
  {
    v14 = v6 - *(__int16 *)(a1 + 22352); /*0x50601e*/
    __asm { fild [esp+1Ch+var_8] } /*0x506025*/
    v15 = *(__int16 *)(a1 + 22354) - v5; /*0x50602b*/
    __asm /*0x50602f*/
    {
      fstp [esp+1Ch+var_1C]; double
      fild [esp+1Ch+arg_4]
    }
    __asm { fstp [esp+24h+var_24]; double }
    Math::CalcAngle(v12, v13); /*0x50603c*/
    __asm { fsub ds:dbl_7E2820 } /*0x506041*/
    __asm { fmul ds:dbl_7E2818 }
    LOWORD(v15) = Math::RoundToInt(a3); /*0x506055*/
    v10 = 32 * a5 - (unsigned __int8)(((v15 >> 7) + 1) >> 1); /*0x506071*/
    v9 = (HIDWORD(v10) ^ v10) - HIDWORD(v10); /*0x506074*/
    if ( v9 >= 128 ) /*0x50607b*/
      v9 = 255 - v9; /*0x506084*/
  }
  return a4 + 1000 * (v9 + (v8 << 7)); /*0x50608e*/
}



// ==== 0x005060B0  HouseClass::ScanBuildLocation  this=HouseClass  sig=csp ====
unsigned int *__thiscall HouseClass::ScanBuildLocation(
        HouseClass *this,
        unsigned int *a2,
        int a3,
        int (__fastcall *a4)(int, int *, int, int),
        int a5)
{
  double v5; // st7
  BuildingTypeClass *BuildableFromArray; // eax
  int v9; // esi
  int *v10; // eax
  int v11; // eax
  BuildingTypeClass *v12; // eax
  int v13; // ecx
  _DWORD *v14; // esi
  void *v15; // eax
  Vector3 *v16; // eax
  int *v17; // eax
  bool v18; // zf
  unsigned int v19; // ebx
  int v20; // edi
  int v21; // eax
  int v22; // eax
  char v23; // cl
  int v24; // esi
  int v25; // esi
  int v26; // edi
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  void *v30; // eax
  int *v31; // edx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  size_t v35; // eax
  signed int i; // ebx
  _DWORD *v37; // esi
  int v38; // eax
  int v39; // eax
  int v40; // ebx
  int v41; // edi
  int v42; // edx
  signed int v43; // esi
  int FoundationWidth; // ebx
  int FoundationHeight; // eax
  char v46; // cl
  bool v47; // cl
  int v48; // edi
  __int16 v49; // ax
  __int16 v50; // cx
  int v51; // edx
  __int16 v52; // ax
  __int16 v53; // cx
  int v54; // ebx
  int TargetSpecialThreatCoefficient; // edx
  char *v56; // eax
  __int64 v57; // rax
  unsigned int *v58; // esi
  double v59; // [esp+Ch] [ebp-100h]
  double v60; // [esp+14h] [ebp-F8h]
  double v61; // [esp+14h] [ebp-F8h]
  void *v62; // [esp+18h] [ebp-F4h]
  void *v63; // [esp+18h] [ebp-F4h]
  int v64; // [esp+2Ch] [ebp-E0h] BYREF
  __int16 v65[2]; // [esp+30h] [ebp-DCh] BYREF
  __int16 v66[2]; // [esp+34h] [ebp-D8h] BYREF
  BuildingTypeClass *v67; // [esp+38h] [ebp-D4h] BYREF
  int v68; // [esp+3Ch] [ebp-D0h]
  __int16 *v69; // [esp+40h] [ebp-CCh]
  void *Base; // [esp+44h] [ebp-C8h] BYREF
  size_t NumOfElements; // [esp+48h] [ebp-C4h]
  signed int v72; // [esp+4Ch] [ebp-C0h]
  int v73; // [esp+50h] [ebp-BCh]
  int v74; // [esp+54h] [ebp-B8h]
  _VectorClass_VCell v75; // [esp+58h] [ebp-B4h] BYREF
  int v76; // [esp+6Ch] [ebp-A0h]
  _DWORD v77[6]; // [esp+70h] [ebp-9Ch] BYREF
  int v78; // [esp+88h] [ebp-84h]
  int v79; // [esp+8Ch] [ebp-80h]
  int v80; // [esp+90h] [ebp-7Ch]
  int v81; // [esp+94h] [ebp-78h]
  int v82; // [esp+98h] [ebp-74h]
  int v83; // [esp+9Ch] [ebp-70h]
  int v84; // [esp+A0h] [ebp-6Ch]
  int v85; // [esp+A4h] [ebp-68h]
  int v86; // [esp+A8h] [ebp-64h]
  int v87; // [esp+ACh] [ebp-60h]
  int v88[4]; // [esp+B0h] [ebp-5Ch] BYREF
  int v89; // [esp+C0h] [ebp-4Ch] BYREF
  int v90; // [esp+C4h] [ebp-48h]
  int v91; // [esp+C8h] [ebp-44h]
  int v92; // [esp+CCh] [ebp-40h]
  int v93; // [esp+D0h] [ebp-3Ch]
  __int16 v94[2]; // [esp+D4h] [ebp-38h] BYREF
  _DWORD v95[3]; // [esp+D8h] [ebp-34h] BYREF
  int v96; // [esp+E4h] [ebp-28h]
  int v97; // [esp+E8h] [ebp-24h]
  int v98; // [esp+ECh] [ebp-20h]
  unsigned int v99; // [esp+F0h] [ebp-1Ch]
  int v100[4]; // [esp+F4h] [ebp-18h] BYREF
  int v101; // [esp+104h] [ebp-8h] BYREF
  int v102; // [esp+108h] [ebp-4h] BYREF

  v67 = (BuildingTypeClass *)this; /*0x5060c8*/
  if ( !a3 ) /*0x5060cc*/
  {
    *a2 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x5060d7*/
    return a2; /*0x5060df*/
  }
  if ( *(_BYTE *)(a3 + 3278) ) /*0x5060e2*/
  {
    v65[0] = 0; /*0x5060fe*/
    v65[1] = 0; /*0x506104*/
    BuildableFromArray = (BuildingTypeClass *)HouseClass::FirstBuildableFromArray( /*0x506109*/
                                                this,
                                                *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2176);
    v9 = BuildingTypeClass::GetFoundationWidth(BuildableFromArray) + 2; /*0x506125*/
    v10 = HouseClass::FirstBuildableFromArray(this, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2176); /*0x506128*/
    v11 = BuildingTypeClass::GetFoundationHeight(v10, 0) + 2; /*0x50613b*/
    if ( LOWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[948] /*0x506155*/
      && HIWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[950] )
    {
      v64 = this->baseSpawnCell[0]; /*0x50615d*/
    }
    else
    {
      v64 = this->baseCenter[0]; /*0x506169*/
    }
    v12 = (BuildingTypeClass *)*LayerClass::Pathfinding_Find( /*0x506198*/
                                  &stru_87F5F0.__pad_58[416],
                                  (int)&v64,
                                  v77,
                                  (__int16 *)&v64,
                                  5,
                                  -1,
                                  0,
                                  0,
                                  v9,
                                  v11,
                                  0,
                                  0,
                                  0,
                                  1,
                                  v65,
                                  0,
                                  0);
    v67 = v12; /*0x5061a1*/
    if ( v12 != *(BuildingTypeClass **)&stru_A8EB00.?[948] ) /*0x5061a5*/
    {
      v13 = *(_DWORD *)this->repairStationsCount; /*0x5061b8*/
      if ( v13 ) /*0x5061bc*/
      {
        v14 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v13 + 72))(v13, &v89); /*0x5061cf*/
        v15 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v67); /*0x5061d7*/
        v16 = (Vector3 *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v15 + 72))(v15, v95); /*0x5061e8*/
        v17 = Vector3::Subtract(v16, v88, v14); /*0x5061f6*/
        if ( (int)Coord::Length((Coord *)v17) > *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3596) << 8 ) /*0x506213*/
        {
          *a2 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50621e*/
          return a2; /*0x506226*/
        }
        v12 = v67; /*0x506229*/
      }
    }
    *a2 = (unsigned int)v12; /*0x506230*/
    return a2; /*0x506232*/
  }
  else
  {
    VectorClass::CellConstructor((VectorClass *)&v75, 0, 0); /*0x506243*/
    v18 = LOWORD(this->damageDelayTimer[1]) == 0; /*0x506248*/
    *(_DWORD *)v75.__pad_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x506255*/
    v76 = 10; /*0x50625d*/
    *(_DWORD *)v75.__tail_10 = 0; /*0x506265*/
    v69 = (__int16 *)&this->damageDelayTimer[1]; /*0x506269*/
    if ( !v18 || HIWORD(this->damageDelayTimer[1]) ) /*0x50626f*/
    {
      v20 = 0; /*0x5062c4*/
      Base = 0; /*0x5062ca*/
      NumOfElements = 0; /*0x5062ce*/
      v72 = 0; /*0x5062d2*/
      LOBYTE(v73) = 0; /*0x5062d6*/
      v74 = 0; /*0x5062db*/
      *(_DWORD *)v75.__tail_10 = 0; /*0x5062df*/
      Buffer::Cleanup(&v75); /*0x5062e3*/
      v21 = this->base[18]; /*0x5062e8*/
      v68 = 0; /*0x5062ee*/
      if ( v21 > 0 ) /*0x5062f4*/
      {
        do /*0x50646a*/
        {
          v22 = *(_DWORD *)(this->base[15] + 4 * v20); /*0x506303*/
          v23 = *(_BYTE *)(a3 + 5831); /*0x506306*/
          v64 = v22; /*0x50630e*/
          if ( v23 ) /*0x506312*/
          {
            v25 = ((__int16)v22 << 8) + 128; /*0x50633e*/
            v26 = (SHIWORD(v64) << 8) + 128; /*0x506344*/
            *(_DWORD *)v65 = *HouseClass::GetCurrentOption(this, v77); /*0x506358*/
            if ( v65[0] == *(_WORD *)&stru_A8EB00.?[948] && v65[1] == *(_WORD *)&stru_A8EB00.?[950] ) /*0x50636a*/
            {
              v27 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x50636c*/
              v28 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x506371*/
              v29 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x506377*/
            }
            else
            {
              v30 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v65); /*0x506389*/
              v31 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v30 + 72))(v30, v95); /*0x50639d*/
              v27 = *v31; /*0x50639f*/
              v28 = v31[1]; /*0x5063a1*/
              v29 = v31[2]; /*0x5063a4*/
            }
            v90 = v28 - v26; /*0x5063ab*/
            v91 = v29; /*0x5063b2*/
            __asm /*0x5063b9*/
            {
              fild [esp+0F0h+var_48]
              fild [esp+0F0h+var_44]
            }
            v89 = v27 - v25; /*0x5063c7*/
            __asm /*0x5063d1*/
            {
              fild [esp+0F8h+var_4C]
              fld st
              fmul st, st(1)
              fld st(2)
              fmul st, st(3)
              faddp st(1), st
              fld st(3)
              fmul st, st(4)
              faddp st(1), st
              fstp [esp+0F8h+var_FC+4]; double
              fstp st
              fstp st
              fstp st
            }
            Math::Sqrt(v60); /*0x5063f1*/
            LOWORD(v32) = Math::RoundToInt(v5); /*0x5063f9*/
            v20 = v68; /*0x506405*/
            v24 = v68 + 1000 * v32; /*0x50640d*/
          }
          else
          {
            v24 = a4((int)this, &v64, v20, a5); /*0x506322*/
          }
          v33 = v72; /*0x506414*/
          if ( (int)(NumOfElements + 1) <= v72 ) /*0x50641b*/
            goto LABEL_33; /*0x50641b*/
          if ( !v72 ) /*0x50641f*/
            v33 = 10; /*0x506421*/
          if ( BuildLocationVector::Grow((int)&Base, v33) ) /*0x50642b*/
          {
LABEL_33:
            *((_DWORD *)Base + 2 * NumOfElements) = v24; /*0x50643c*/
            *((_DWORD *)Base + 2 * NumOfElements + 1) = v64; /*0x50644b*/
            LOBYTE(v73) = 0; /*0x506454*/
            ++NumOfElements; /*0x506459*/
          }
          v34 = this->base[18]; /*0x50645d*/
          v68 = ++v20; /*0x506466*/
        }
        while ( v20 < v34 ); /*0x50646a*/
      }
      v35 = NumOfElements; /*0x506472*/
      for ( i = 0; i < (int)NumOfElements; ++i ) /*0x50647a*/
      {
        if ( !(_BYTE)v73 ) /*0x50648a*/
        {
          qsort(Base, v35, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)globalHelper_0108F0); /*0x506499*/
          v74 = 0; /*0x5064a1*/
          LOBYTE(v73) = 1; /*0x5064a5*/
        }
        v37 = (char *)Base + 8 * i + 4; /*0x5064b2*/
        if ( *(int *)v75.__tail_10 < v75.m_8 /*0x5064df*/
          || (BYTE1(v75.m_C) || !v75.m_8)
          && v76 > 0
          && (*(unsigned __int8 (__thiscall **)(_VectorClass_VCell *, int, _DWORD))(*(_DWORD *)v75.__pad_0 + 8))(
               &v75,
               v76 + v75.m_8,
               0) )
        {
          v38 = (*(_DWORD *)v75.__tail_10)++; /*0x5064ee*/
          *(_DWORD *)(*(_DWORD *)&v75.m_1[3] + 4 * v38) = *v37; /*0x5064f7*/
        }
        v35 = NumOfElements; /*0x5064fa*/
      }
      v98 = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v69) + 283); /*0x506521*/
      v39 = *(_DWORD *)v75.__tail_10; /*0x506528*/
      v40 = 1 << v67->?; /*0x506534*/
      v41 = 0; /*0x506536*/
      v69 = 0; /*0x506538*/
      v77[0] = v40; /*0x50653c*/
      while ( 1 ) /*0x506542*/
      {
        v68 = 0; /*0x506542*/
        if ( v39 > 0 ) /*0x506546*/
          break; /*0x506546*/
LABEL_88:
        v69 = (__int16 *)((char *)v69 + 1); /*0x506a9b*/
        if ( (int)v69 >= 2 ) /*0x506aa7*/
        {
          v58 = a2; /*0x506aad*/
          v69 = 0; /*0x506ab4*/
          v62 = Base; /*0x506ac2*/
          *a2 = 0; /*0x506ac3*/
          __3_YAXPAX_Z(v62); /*0x506ac5*/
          Base = 0; /*0x506ad3*/
          NumOfElements = 0; /*0x506ad7*/
          v72 = 0; /*0x506adb*/
          LOBYTE(v73) = 0; /*0x506adf*/
          v74 = 0; /*0x506ae4*/
          *(_DWORD *)v75.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x506ae8*/
          if ( *(_DWORD *)&v75.m_1[3] && BYTE1(v75.m_C) ) /*0x506af8*/
            __3_YAXPAX_Z(*(void **)&v75.m_1[3]); /*0x506afb*/
          return v58; /*0x506afb*/
        }
      }
      while ( 1 ) /*0x506558*/
      {
        v42 = *(_DWORD *)(*(_DWORD *)&v75.m_1[3] + 4 * v68); /*0x506558*/
        v64 = 0; /*0x50655b*/
        v95[0] = v42; /*0x506560*/
        do /*0x5065cc*/
        {
          *(_DWORD *)v94 = *CellStruct::Add((CellStruct *)v95, &v102, (_WORD *)(4 * (v41 & 7) + 9041544)); /*0x50659c*/
          if ( (v40 & *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v94) + 55)) != 0 ) /*0x5065ae*/
            v64 = *CellStruct::Add((CellStruct *)&v64, &v101, (_WORD *)(4 * (v41 & 7) + 9041544)); /*0x5065c4*/
          ++v41; /*0x5065c8*/
        }
        while ( v41 < 8 ); /*0x5065cc*/
        if ( v64 ) /*0x5065db*/
          break; /*0x5065db*/
LABEL_86:
        v39 = *(_DWORD *)v75.__tail_10; /*0x506a84*/
        if ( ++v68 >= *(int *)v75.__tail_10 ) /*0x506a93*/
        {
          v41 = 0; /*0x506a99*/
          goto LABEL_88; /*0x506a99*/
        }
        v41 = 0; /*0x50654e*/
      }
      v89 = -(__int16)v64; /*0x5065ee*/
      __asm { fild [esp+0F8h+var_4C] } /*0x5065f8*/
      __asm { fstp [esp+0F8h+var_FC+4]; double }
      *(_DWORD *)v65 = SHIWORD(v64); /*0x506606*/
      __asm /*0x50660d*/
      {
        fild dword ptr [esp+100h+var_DC]
        fstp [esp+100h+var_104+4]; double
      }
      Math::CalcAngle(v59, v61); /*0x506614*/
      __asm { fsub ds:dbl_7E2820 } /*0x506619*/
      __asm { fmul ds:dbl_7E2818 }
      LOWORD(v99) = Math::RoundToInt(v5); /*0x506630*/
      v43 = (((v99 >> 12) + 1) >> 1) & 7; /*0x506649*/
      v88[0] = 0; /*0x50664c*/
      FoundationWidth = BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)a3); /*0x506661*/
      v97 = FoundationWidth; /*0x506667*/
      FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)a3, 0); /*0x50666e*/
      v46 = *(_BYTE *)(a3 + 5989); /*0x506673*/
      v96 = FoundationHeight; /*0x506679*/
      v47 = v46 || *(_BYTE *)(a3 + 5496); /*0x506692*/
      v48 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5216); /*0x50669c*/
      if ( v47 ) /*0x5066a2*/
        ++v48; /*0x5066a4*/
      if ( v43 < 1 || v43 > 3 ) /*0x5066ad*/
      {
        if ( v43 >= 5 ) /*0x5066bc*/
          LOWORD(v88[0]) = 1 - FoundationWidth - v48; /*0x5066cc*/
      }
      else
      {
        LOWORD(v88[0]) = v48; /*0x5066af*/
      }
      if ( v43 < 3 || v43 > 5 ) /*0x5066dc*/
      {
        if ( v43 >= 7 || v43 <= 1 ) /*0x5066f3*/
          HIWORD(v88[0]) = 1 - FoundationHeight - v48; /*0x5066fe*/
      }
      else
      {
        HIWORD(v88[0]) = v48 + 1; /*0x5066e1*/
      }
      *(_DWORD *)v65 = 0; /*0x506706*/
LABEL_72:
      if ( (stru_A8EB00.?[1056] & 1) == 0 ) /*0x506715*/
      {
        stru_A8EB00.?[1056] |= 1u; /*0x506725*/
        v83 = 0xFFFF; /*0x50672b*/
        *(_DWORD *)&stru_A8EB00.?[916] = 0xFFFF; /*0x506742*/
        v77[2] = -1; /*0x506748*/
        *(_DWORD *)&stru_A8EB00.?[920] = -1; /*0x506756*/
        v86 = -65536; /*0x50675c*/
        *(_DWORD *)&stru_A8EB00.?[924] = -65536; /*0x506778*/
        v93 = -65535; /*0x50677e*/
        v92 = 1; /*0x506795*/
        *(_DWORD *)&stru_A8EB00.?[928] = -65535; /*0x50679d*/
        v82 = 65537; /*0x5067b2*/
        *(_DWORD *)&stru_A8EB00.?[932] = 1; /*0x5067b7*/
        v84 = 0x10000; /*0x5067c6*/
        *(_DWORD *)&stru_A8EB00.?[936] = 65537; /*0x5067ce*/
        v77[5] = 0x1FFFF; /*0x5067e3*/
        *(_DWORD *)&stru_A8EB00.?[940] = 0x10000; /*0x5067f6*/
        *(_DWORD *)&stru_A8EB00.?[944] = 0x1FFFF; /*0x5067fc*/
        atexit(nullsub_17); /*0x506802*/
      }
      if ( (stru_A8EB00.?[1056] & 2) == 0 ) /*0x506818*/
      {
        v85 = 1; /*0x506822*/
        v88[3] = 0x10000; /*0x506839*/
        *(_DWORD *)&stru_A8EB00.?[964] = 1; /*0x506841*/
        stru_A8EB00.?[1056] |= 2u; /*0x506858*/
        v79 = 65537; /*0x50685e*/
        *(_DWORD *)&stru_A8EB00.?[972] = 0x10000; /*0x50686c*/
        *(_DWORD *)&stru_A8EB00.?[968] = 65537; /*0x506874*/
        v81 = 0x1FFFF; /*0x50687a*/
        *(_DWORD *)&stru_A8EB00.?[976] = 0x1FFFF; /*0x506888*/
        v87 = 0xFFFF; /*0x50688e*/
        *(_DWORD *)&stru_A8EB00.?[980] = 0xFFFF; /*0x5068a5*/
        v77[1] = -1; /*0x5068ab*/
        *(_DWORD *)&stru_A8EB00.?[984] = -1; /*0x5068b9*/
        v77[3] = -65536; /*0x5068bf*/
        v77[4] = -65535; /*0x5068cd*/
        *(_DWORD *)&stru_A8EB00.?[988] = -65536; /*0x5068e0*/
        *(_DWORD *)&stru_A8EB00.?[992] = -65535; /*0x5068e6*/
        atexit(nullsub_16); /*0x5068ec*/
      }
      v49 = LOWORD(v95[0]) + LOWORD(v88[0]) + *(_WORD *)&stru_A8EB00.?[4 * v43 + 916]; /*0x50691c*/
      v50 = HIWORD(v88[0]) + HIWORD(v95[0]) + *(_WORD *)&stru_A8EB00.?[4 * v43 + 918]; /*0x506927*/
      LOWORD(v78) = v49; /*0x50692a*/
      HIWORD(v78) = v50; /*0x50692f*/
      *(_DWORD *)v66 = v78; /*0x506938*/
      if ( *(_DWORD *)v65 == 1 ) /*0x506942*/
      {
        v51 = ((_BYTE)v43 - 4) & 7; /*0x506947*/
        LOWORD(v80) = LOWORD(g_DDrawSurfaceManager.scenario[v51 + 82]) + v49; /*0x506959*/
        HIWORD(v80) = v50 + HIWORD(g_DDrawSurfaceManager.scenario[v51 + 82]); /*0x50696b*/
        *(_DWORD *)v66 = v80; /*0x506974*/
        v48 -= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5216); /*0x50697e*/
      }
      v52 = v66[0]; /*0x506980*/
      v53 = v66[1]; /*0x506985*/
      v54 = 0; /*0x50698a*/
      while ( 1 ) /*0x50699b*/
      {
        v100[0] = v52 - v48; /*0x50699b*/
        v100[2] = v97 + 2 * v48; /*0x5069a7*/
        v100[1] = v53 - v48; /*0x5069b5*/
        TargetSpecialThreatCoefficient = v67->?; /*0x5069c3*/
        v100[3] = v96 + 2 * v48; /*0x5069c6*/
        if ( (unsigned __int8)MapClass::IsAreaFree( /*0x5069db*/
                                (MapClass *)&stru_87F5F0.__pad_58[416],
                                v100,
                                TargetSpecialThreatCoefficient) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int, __int16 *, BuildingTypeClass *))(*(_DWORD *)a3 + 168))( /*0x5069f3*/
                 a3,
                 v66,
                 v67) )
          {
            v56 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v66); /*0x506a07*/
            v57 = v98 - v56[283]; /*0x506a1c*/
            if ( (int)((HIDWORD(v57) ^ v57) - HIDWORD(v57)) < 3 ) /*0x506a24*/
            {
              if ( BuildingTypeClass::ProcessData(v67, (_DWORD *)a3, v66) ) /*0x506a33*/
                break; /*0x506a33*/
            }
          }
        }
        v52 = *(_WORD *)&stru_A8EB00.?[4 * v43 + 964] + v66[0]; /*0x506a4a*/
        v53 = *(_WORD *)&stru_A8EB00.?[4 * v43 + 966] + v66[1]; /*0x506a52*/
        ++v54; /*0x506a5a*/
        v66[0] = v52; /*0x506a5e*/
        v66[1] = v53; /*0x506a63*/
        if ( v54 >= 3 ) /*0x506a68*/
        {
          ++*(_DWORD *)v65; /*0x506a76*/
          if ( *(int *)v65 < 2 ) /*0x506a7a*/
            goto LABEL_72; /*0x506a7a*/
          v40 = v77[0]; /*0x506a80*/
          goto LABEL_86; /*0x506a80*/
        }
      }
      v58 = a2; /*0x506b0e*/
      v63 = Base; /*0x506b19*/
      *a2 = *(_DWORD *)v66; /*0x506b1a*/
      __3_YAXPAX_Z(v63); /*0x506b1c*/
      Base = 0; /*0x506b2c*/
      NumOfElements = 0; /*0x506b30*/
      v72 = 0; /*0x506b34*/
      LOBYTE(v73) = 0; /*0x506b38*/
      v74 = 0; /*0x506b3c*/
      *(_DWORD *)v75.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x506b40*/
      if ( *(_DWORD *)&v75.m_1[3] && BYTE1(v75.m_C) ) /*0x506b50*/
      {
        __3_YAXPAX_Z(*(void **)&v75.m_1[3]); /*0x506b53*/
        return a2; /*0x506b5b*/
      }
      return v58; /*0x506b03*/
    }
    else
    {
      if ( LOWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[948] /*0x506293*/
        && HIWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[950] )
      {
        v19 = this->baseSpawnCell[0]; /*0x506295*/
      }
      else
      {
        v19 = this->baseCenter[0]; /*0x50629d*/
      }
      *(_DWORD *)v75.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x5062aa*/
      *a2 = v19; /*0x5062b2*/
      Buffer::Cleanup(&v75); /*0x5062b4*/
      return a2; /*0x5062b9*/
    }
  }
}



// ==== 0x00506B70  nullsub_16  this=-  sig=ida-proto ====
void __cdecl nullsub_16()
{
  ; /*0x506b70*/
}



// ==== 0x00506B80  nullsub_17  this=-  sig=ida-proto ====
void __cdecl nullsub_17()
{
  ; /*0x506b80*/
}



// ==== 0x00506B90  HouseClass::FindBestProductionBuilding  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::FindBestProductionBuilding(HouseClass *this, _DWORD *a2, int a3)
{
  int IndexByName; // eax
  int v5; // ebx
  int v6; // ebp
  int v7; // ecx
  int v8; // edi
  int v9; // esi
  char v10; // al
  _DWORD *v11; // ebp
  bool v12; // [esp+13h] [ebp-15h]
  int v13; // [esp+14h] [ebp-14h]
  int v15; // [esp+30h] [ebp+8h]

  IndexByName = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)(a3 + 3720)); /*0x506ba5*/
  if ( IndexByName == -1 ) /*0x506bad*/
  {
    *a2 = 0; /*0x506bc6*/
    return a2; /*0x506bcc*/
  }
  v5 = 0; /*0x506bd5*/
  v6 = 0; /*0x506bd7*/
  v7 = *((_DWORD *)dword_A83C6C + IndexByName); /*0x506bd9*/
  v13 = v7; /*0x506be7*/
  v8 = *(_DWORD *)(v7 + 5344) + 10; /*0x506bf1*/
  v12 = *(_DWORD *)(a3 + 5884) == -1; /*0x506bf7*/
  if ( stru_A8EB00.ObjectTypeClass[20] <= 0 ) /*0x506bfe*/
    goto LABEL_17; /*0x506bfe*/
  while ( 1 ) /*0x506c0f*/
  {
    v9 = *(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * v5); /*0x506c0f*/
    if ( *(HouseClass **)(v9 + 540) == this /*0x506c2e*/
      && *(_DWORD *)(v9 + 1312) == v7
      && (unsigned __int8)BuildingClass::CanAcceptType((bool *)v9, a3, (int)this) )
    {
      v10 = *(_BYTE *)(v9 + 1794); /*0x506c3d*/
      if ( !v12 ) /*0x506c43*/
      {
        if ( v10 ) /*0x506c50*/
          goto LABEL_14; /*0x506c50*/
LABEL_13:
        v8 = v10; /*0x506c52*/
        v6 = v9; /*0x506c55*/
        goto LABEL_14; /*0x506c55*/
      }
      if ( v8 > v10 ) /*0x506c4a*/
        goto LABEL_13; /*0x506c4a*/
    }
LABEL_14:
    if ( ++v5 >= stru_A8EB00.ObjectTypeClass[20] ) /*0x506c5f*/
      break; /*0x506c5f*/
    v7 = v13; /*0x506c06*/
  }
  if ( v6 ) /*0x506c65*/
  {
    v11 = (_DWORD *)(v6 + 156); /*0x506c67*/
    LOWORD(v15) = *v11 / 256; /*0x506c8a*/
    HIWORD(v15) = v11[1] / 256; /*0x506c9d*/
    *a2 = v15; /*0x506caa*/
    return a2; /*0x506caf*/
  }
LABEL_17:
  *a2 = 0; /*0x506cb2*/
  return a2; /*0x506bb1*/
}



// ==== 0x00506D50  MapClass::CalcVisibleCellRange  this=AbstractClass  sig=csp ====
int __stdcall sub_506D50(int a1, int a2, int a3, int *a4)
{
  int v4; // kr04_4
  int v5; // esi
  int v6; // ebx
  int v7; // esi
  int v8; // edx
  int v9; // eax
  int v10; // esi
  int result; // eax
  int v12; // esi
  double v13; // st7
  int *v14; // esi
  int v15; // [esp+14h] [ebp-2Ch]
  int v16; // [esp+18h] [ebp-28h]
  int i; // [esp+1Ch] [ebp-24h]
  int v18; // [esp+20h] [ebp-20h]
  double v19; // [esp+28h] [ebp-18h]
  int v20; // [esp+38h] [ebp-8h]
  int v21; // [esp+3Ch] [ebp-4h]

  if ( a2 <= 0 ) /*0x506d61*/
    a2 = 1; /*0x506d63*/
  v4 = *(_DWORD *)(a1 + 156); /*0x506d8c*/
  v5 = (__int16)(v4 / 256); /*0x506d94*/
  if ( v5 - 6 <= *a4 ) /*0x506dad*/
  {
    v16 = *a4; /*0x506db7*/
    v6 = *a4; /*0x506dbb*/
  }
  else
  {
    v6 = v5 - 6; /*0x506daf*/
    v16 = v5 - 6; /*0x506db1*/
  }
  v7 = v5 + 6; /*0x506dc0*/
  v15 = a4[2] + *a4; /*0x506dc7*/
  if ( v15 >= v7 ) /*0x506dcb*/
    v15 = v7; /*0x506dcd*/
  v8 = (__int16)(*(_DWORD *)(a1 + 160) / 256); /*0x506dd1*/
  v9 = a4[1]; /*0x506dd4*/
  v21 = v8; /*0x506dd7*/
  v10 = v8 - 6; /*0x506de0*/
  if ( v8 - 6 <= v9 ) /*0x506de2*/
    v10 = a4[1]; /*0x506de4*/
  v18 = a4[3] + v9; /*0x506df0*/
  if ( v18 >= v8 + 6 ) /*0x506df4*/
    v18 = v8 + 6; /*0x506df6*/
  result = v18; /*0x506dfa*/
  for ( i = v10; v10 < v18; i = v10 ) /*0x506e04*/
  {
    if ( v6 < v15 ) /*0x506e0e*/
    {
      v12 = (v10 - v8) * (v10 - v8); /*0x506e16*/
      v20 = v12; /*0x506e19*/
      do /*0x506eba*/
      {
        v19 = Math::Sqrt((double)(v12 + (v6 - (__int16)(v4 / 256)) * (v6 - (__int16)(v4 / 256)))); /*0x506e3f*/
        if ( v19 < 6.0 ) /*0x506e51*/
        {
          v13 = v19; /*0x506e53*/
          if ( v19 < 1.0 ) /*0x506e75*/
            v13 = 1.0; /*0x506e79*/
          v14 = (int *)(a3 + 4 * (v6 - *a4 + (i - a4[1]) * a4[2])); /*0x506ea1*/
          *v14 = Math::RoundToInt((double)a2 / ((v13 - 1.0) * 0.1 + 1.0) + (double)*v14); /*0x506ead*/
          v12 = v20; /*0x506eaf*/
        }
        ++v6; /*0x506eb7*/
      }
      while ( v6 < v15 ); /*0x506eba*/
      v10 = i; /*0x506ec0*/
      v8 = v21; /*0x506ec4*/
      v6 = v16; /*0x506ec8*/
    }
    result = v18; /*0x506ecc*/
    ++v10; /*0x506ed0*/
  }
  return result; /*0x506edd*/
}



// ==== 0x00506EF0  HouseClass::AutoBuildScanAndSort  this=AbstractClass  sig=csp ====
char __userpurge HouseClass::AutoBuildScanAndSort@<al>(int this@<ecx>, double a2@<st0>, int a3, _DWORD *a4)
{
  DynamicVector *v5; // edi
  int v6; // ebx
  size_t v7; // esi
  _DWORD *v8; // ebx
  int v9; // eax
  _WORD *v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  __int16 v13; // ax
  int v14; // edi
  _DWORD *v15; // edi
  int v16; // eax
  char *v17; // esi
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // esi
  _WORD *v24; // eax
  __int16 v25; // cx
  __int16 v26; // ax
  int v27; // edx
  int v28; // kr00_4
  unsigned int v29; // edi
  int v30; // ebx
  int v31; // eax
  int v32; // edx
  void *v33; // ecx
  int v34; // edx
  int v35; // eax
  void **p_DynamicVector_field_0x10; // esi
  char *v37; // ecx
  bool v38; // cc
  int v39; // ecx
  int v40; // eax
  float v41; // edx
  int v42; // edi
  int v43; // ebx
  int Capacity; // ecx
  int v45; // esi
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  int *v51; // esi
  int v52; // ebx
  int v54; // eax
  float v55; // esi
  void *v56; // eax
  bool v57; // zf
  int *v58; // esi
  int v59; // ebx
  void *v60; // eax
  int v62; // eax
  int v63; // ecx
  _DWORD *v64; // eax
  int v65; // edi
  int v66; // ecx
  unsigned int v67; // edi
  unsigned int v68; // eax
  char *v69; // ecx
  int v70; // edx
  _DWORD *v71; // ebx
  int v72; // eax
  int v73; // esi
  int v74; // edx
  char *v75; // edi
  int v76; // ebx
  int v77; // eax
  size_t v78; // eax
  signed int i; // edi
  _DWORD *v80; // esi
  int v81; // eax
  _DWORD *v82; // esi
  int v83; // edx
  int v84; // eax
  int v85; // ecx
  int v86; // ecx
  unsigned int *v87; // eax
  float v88; // edx
  int v89; // ecx
  _DWORD *v90; // eax
  _DWORD *BuildableFromArray; // eax
  int v92; // ecx
  _DWORD *v93; // edx
  int v94; // eax
  int v95; // eax
  int v96; // edx
  int v97; // ecx
  int v98; // eax
  _DWORD *v99; // esi
  _DWORD *v100; // eax
  int v101; // eax
  double v102; // [esp+Ch] [ebp-174h]
  double v103; // [esp+Ch] [ebp-174h]
  double v104; // [esp+14h] [ebp-16Ch]
  double v105; // [esp+14h] [ebp-16Ch]
  int v106; // [esp+2Ch] [ebp-154h] BYREF
  float v107; // [esp+30h] [ebp-150h]
  int v108; // [esp+34h] [ebp-14Ch]
  float v109; // [esp+38h] [ebp-148h]
  int v110; // [esp+3Ch] [ebp-144h] BYREF
  int v111; // [esp+40h] [ebp-140h]
  float v112; // [esp+44h] [ebp-13Ch]
  void *Base; // [esp+48h] [ebp-138h] BYREF
  size_t NumOfElements; // [esp+4Ch] [ebp-134h]
  signed int v115; // [esp+50h] [ebp-130h]
  int v116; // [esp+54h] [ebp-12Ch]
  int v117; // [esp+58h] [ebp-128h]
  void *v118; // [esp+5Ch] [ebp-124h]
  VectorClass v119; // [esp+60h] [ebp-120h] BYREF
  int v120; // [esp+70h] [ebp-110h]
  int v121; // [esp+74h] [ebp-10Ch]
  void *Block; // [esp+78h] [ebp-108h]
  void *v123; // [esp+7Ch] [ebp-104h]
  int v124; // [esp+80h] [ebp-100h]
  unsigned int v125[2]; // [esp+84h] [ebp-FCh] BYREF
  VectorClass v126; // [esp+8Ch] [ebp-F4h] BYREF
  int v127; // [esp+9Ch] [ebp-E4h]
  int v128; // [esp+A0h] [ebp-E0h]
  DistributionVector_BuildingType v129; // [esp+A4h] [ebp-DCh] BYREF
  void *v130; // [esp+A8h] [ebp-D8h]
  int v131; // [esp+ACh] [ebp-D4h]
  int v132; // [esp+B0h] [ebp-D0h]
  int v133; // [esp+B4h] [ebp-CCh]
  int v134; // [esp+B8h] [ebp-C8h]
  int v135; // [esp+BCh] [ebp-C4h]
  _DWORD v136[2]; // [esp+C0h] [ebp-C0h] BYREF
  int v137; // [esp+C8h] [ebp-B8h] BYREF
  void *v138; // [esp+CCh] [ebp-B4h]
  int v139; // [esp+D0h] [ebp-B0h]
  int v140; // [esp+D4h] [ebp-ACh]
  int v141; // [esp+D8h] [ebp-A8h]
  int v142; // [esp+E0h] [ebp-A0h] BYREF
  void *v143; // [esp+E4h] [ebp-9Ch]
  int v144; // [esp+E8h] [ebp-98h]
  int v145; // [esp+ECh] [ebp-94h]
  int v146; // [esp+F0h] [ebp-90h]
  int v147; // [esp+F8h] [ebp-88h] BYREF
  void *v148; // [esp+FCh] [ebp-84h]
  int v149; // [esp+100h] [ebp-80h]
  int v150; // [esp+104h] [ebp-7Ch]
  int v151; // [esp+108h] [ebp-78h]
  _DWORD v152[4]; // [esp+110h] [ebp-70h]
  DynamicVector v153; // [esp+120h] [ebp-60h] BYREF

  _EBP = this; /*0x506efc*/
  v124 = -1; /*0x506efe*/
  v106 = 999999; /*0x506f06*/
  v129 = 0; /*0x506f0e*/
  v130 = 0; /*0x506f15*/
  v131 = 0; /*0x506f1c*/
  v132 = 0; /*0x506f23*/
  memset(&v119, 0, sizeof(v119)); /*0x506f2a*/
  Base = 0; /*0x506f3a*/
  NumOfElements = 0; /*0x506f3e*/
  v115 = 0; /*0x506f42*/
  v116 = 0; /*0x506f46*/
  v5 = &v153; /*0x506f4a*/
  v6 = 4; /*0x506f51*/
  do /*0x506f63*/
  {
    DynamicVector::Constructor_Cell(v5, 0, 0); /*0x506f5a*/
    v5 = (DynamicVector *)((char *)v5 + 24); /*0x506f5f*/
    --v6; /*0x506f62*/
  }
  while ( v6 ); /*0x506f63*/
  v7 = 4 * *(_DWORD *)(_EBP + 22364) * *(_DWORD *)(_EBP + 22368); /*0x506f72*/
  Block = (void *)__2_YAPAXI_Z(v7); /*0x506f82*/
  v123 = (void *)__2_YAPAXI_Z(v7); /*0x506f8e*/
  v118 = (void *)__2_YAPAXI_Z(v7); /*0x506f99*/
  memset(Block, 0, v7); /*0x506fa4*/
  v8 = a4; /*0x506fb6*/
  memset(v123, 0, v7); /*0x506fc0*/
  memset(v118, 0, v7); /*0x506fd4*/
  if ( v8 ) /*0x506fdf*/
  {
    v9 = v8[4]; /*0x506fe5*/
    v107 = 0.0; /*0x506fe8*/
    if ( v9 > 0 ) /*0x506ff2*/
    {
      do /*0x5070cf*/
      {
        v10 = (_WORD *)(4 * LODWORD(v107) + v8[1]); /*0x50700c*/
        v11 = (__int16)(*v10 - *(_WORD *)(_EBP + 22352)); /*0x507023*/
        v12 = (__int16)(v10[1] - *(_WORD *)(_EBP + 22354)); /*0x507026*/
        v125[0] = v11; /*0x507029*/
        __asm { fild [esp+174h+var_FC] } /*0x50702d*/
        v111 = -v12; /*0x507033*/
        __asm /*0x507037*/
        {
          fstp [esp+174h+var_16C]; double
          fild [esp+174h+var_140]
          fstp [esp+174h+var_174]; double
        }
        Math::CalcAngle(v102, v104); /*0x507042*/
        __asm { fsub ds:dbl_7E2820 } /*0x507047*/
        __asm { fmul ds:dbl_7E2818 }
        v13 = Math::RoundToInt(a2); /*0x507056*/
        v14 = v8[1]; /*0x50705b*/
        LOWORD(v112) = v13; /*0x50705e*/
        v15 = (_DWORD *)(4 * LODWORD(v107) + v14); /*0x507067*/
        v16 = *(_DWORD *)&v153.__pad_5[24 * (((unsigned int)((LODWORD(v112) >> 13) + 1) >> 1) & 3) + 3]; /*0x507075*/
        v17 = &v153.__pad_0[24 * (((unsigned int)((LODWORD(v112) >> 13) + 1) >> 1) & 3)]; /*0x507083*/
        if ( *(_DWORD *)&v153.__pad_C[24 * (((unsigned int)((LODWORD(v112) >> 13) + 1) >> 1) & 3) + 4] < v16 /*0x5070a9*/
          || (v17[13] || !v16)
          && (v18 = *((_DWORD *)v17 + 5), v18 > 0)
          && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v17 + 8))(
               &v153.__pad_0[24 * (((unsigned int)((LODWORD(v112) >> 13) + 1) >> 1) & 3)],
               v16 + v18,
               0) )
        {
          v19 = *((_DWORD *)v17 + 4); /*0x5070b0*/
          v20 = *((_DWORD *)v17 + 1); /*0x5070b3*/
          *((_DWORD *)v17 + 4) = v19 + 1; /*0x5070b9*/
          *(_DWORD *)(v20 + 4 * v19) = *v15; /*0x5070be*/
        }
        v21 = v8[4]; /*0x5070c5*/
        ++LODWORD(v107); /*0x5070cb*/
      }
      while ( SLODWORD(v107) < v21 ); /*0x5070cf*/
    }
  }
  v22 = 0; /*0x5070d8*/
  v136[0] = *(_DWORD *)(_EBP + 120); /*0x5070dc*/
  v107 = 0.0; /*0x5070e3*/
  if ( v136[0] > 0 ) /*0x5070e7*/
  {
    do /*0x507229*/
    {
      v23 = *(_DWORD *)(*(_DWORD *)(_EBP + 108) + 4 * v22); /*0x5070f5*/
      v24 = (_WORD *)(*(int (__thiscall **)(int, unsigned int *))(*(_DWORD *)v23 + 440))(v23, v125); /*0x5070fc*/
      v25 = *v24 - *(_WORD *)(_EBP + 22352); /*0x507109*/
      v26 = v24[1] - *(_WORD *)(_EBP + 22354); /*0x507110*/
      if ( v25 || v26 ) /*0x50711f*/
      {
        v152[0] = v25; /*0x50712b*/
        __asm { fild [esp+16Ch+var_70] } /*0x507135*/
        v111 = -v26; /*0x50713e*/
        __asm /*0x507142*/
        {
          fstp [esp+16Ch+var_16C]; double
          fild [esp+16Ch+var_140]
        }
        __asm { fstp [esp+174h+var_174]; double }
        Math::CalcAngle(v103, v105); /*0x50714f*/
        __asm { fsub ds:dbl_7E2820 } /*0x507154*/
        __asm { fmul ds:dbl_7E2818 }
        v28 = Math::RoundToInt(a2); /*0x507163*/
        LOWORD(v27) = HIWORD(v28); /*0x507163*/
        LOWORD(v112) = v28; /*0x507168*/
        v29 = ((unsigned int)((LODWORD(v112) >> 13) + 1) >> 1) & 3; /*0x50717b*/
        v30 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v23 + 724))(v23, v27); /*0x507188*/
        v109 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v23 + 728))(v23)); /*0x507190*/
        *(float *)&v110 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v23 + 732))(v23)); /*0x5071a2*/
        if ( v30 + LODWORD(v109) + v110 > 0 ) /*0x5071ac*/
        {
          v31 = LODWORD(v109) + *((_DWORD *)&v119.ptr_0 + v29); /*0x5071bf*/
          v32 = (int)*(&Base + v29); /*0x5071c1*/
          *((_DWORD *)&v129 + v29) += v30; /*0x5071c5*/
          *((_DWORD *)&v119.ptr_0 + v29) = v31; /*0x5071cc*/
          v33 = Block; /*0x5071d8*/
          *(&Base + v29) = (void *)(v110 + v32); /*0x5071de*/
          MapClass::CalcVisibleCellRange(v23, v30, (int)v33, (int *)(_EBP + 22356)); /*0x5071ec*/
          MapClass::CalcVisibleCellRange(v23, SLODWORD(v109), (int)v123, (int *)(_EBP + 22356)); /*0x5071ff*/
          MapClass::CalcVisibleCellRange(v23, v110, (int)v118, (int *)(_EBP + 22356)); /*0x507212*/
        }
      }
      v22 = ++LODWORD(v107); /*0x507222*/
    }
    while ( SLODWORD(v107) < v136[0] ); /*0x507229*/
    v8 = a4; /*0x50722f*/
  }
  v34 = v124; /*0x507236*/
  v35 = 0; /*0x50723a*/
  p_DynamicVector_field_0x10 = &v153.DynamicVector_field_0x10; /*0x50723c*/
  do /*0x50727b*/
  {
    v37 = (char *)*(&Base + v35) + *((_DWORD *)&v119.ptr_0 + v35) + *((_DWORD *)&v129 + v35); /*0x507254*/
    v38 = (int)v37 < v106; /*0x50725a*/
    v152[v35] = v37; /*0x50725c*/
    if ( v38 && (!v8 || (int)*p_DynamicVector_field_0x10 > 0) ) /*0x50726c*/
    {
      v106 = (int)v37; /*0x50726e*/
      v34 = v35; /*0x507272*/
    }
    ++v35; /*0x507274*/
    p_DynamicVector_field_0x10 += 6; /*0x507275*/
  }
  while ( v35 < 4 ); /*0x50727b*/
  v39 = *((int *)&v119.ptr_0 + v34); /*0x50727d*/
  v40 = *((_DWORD *)&v129 + v34); /*0x507281*/
  v124 = v34; /*0x507288*/
  v41 = *((float *)&Base + v34); /*0x50728c*/
  v110 = v39; /*0x507290*/
  v136[0] = v40; /*0x507296*/
  v107 = v41; /*0x50729d*/
  HouseClass::ComputePowerDistribution((float *)_EBP); /*0x5072a1*/
  VectorClass::BuildingTypeConstructor(&v126, 0, 0); /*0x5072ae*/
  v42 = *(_DWORD *)(_EBP + 120); /*0x5072b3*/
  v43 = 0; /*0x5072b6*/
  v126.ptr_0 = &DynamicVectorClass<BuildingTypeClass const *>::`vftable'; /*0x5072ba*/
  v128 = 10; /*0x5072c2*/
  v127 = 0; /*0x5072cd*/
  if ( v42 > 0 ) /*0x5072d8*/
  {
    Capacity = v126.Capacity; /*0x5072de*/
    do /*0x5072e5*/
    {
      v45 = *(_DWORD *)(*(_DWORD *)(_EBP + 108) + 4 * v43); /*0x5072e5*/
      v46 = *(_DWORD *)(v45 + 1312); /*0x5072e8*/
      if ( !*(_BYTE *)(v46 + 5894) && v46 != *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2172) ) /*0x507304*/
      {
        if ( v127 < Capacity ) /*0x50730d*/
          goto LABEL_34; /*0x50730d*/
        if ( !v126.IsAllocated && Capacity || v128 <= 0 ) /*0x507324*/
          goto LABEL_36; /*0x507324*/
        if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v126.ptr_0 + 2))( /*0x507333*/
               &v126,
               v128 + Capacity,
               0) )
        {
LABEL_34:
          v47 = v127++; /*0x507345*/
          *((_DWORD *)v126.Items + v47) = *(_DWORD *)(v45 + 1312); /*0x507355*/
        }
        Capacity = v126.Capacity; /*0x507358*/
      }
LABEL_36:
      ++v43; /*0x50735c*/
    }
    while ( v43 < v42 ); /*0x5072e5*/
  }
  v48 = *(_DWORD *)(_EBP + 22280); /*0x507361*/
  v111 = 16 * a3; /*0x507371*/
  v112 = 0.0; /*0x507375*/
  v125[0] = *(_DWORD *)(v48 + 16 * a3); /*0x507386*/
  if ( v106 ) /*0x50738a*/
  {
    __asm /*0x50738c*/
    {
      fild [esp+164h+var_154]
      fstp [esp+164h+var_148]
      fild [esp+164h+var_C0]
      fdiv [esp+164h+var_148]
      fild [esp+164h+var_144]
      fdiv [esp+164h+var_148]
      fild [esp+164h+var_150]
      fdiv [esp+164h+var_148]
    }
  }
  else
  {
    __asm /*0x5073b1*/
    {
      fld ds:flt_7E1748
      fld ds:flt_7E1748
      fld ds:flt_7E1748
    }
  }
  __asm /*0x5073c3*/
  {
    fld dword ptr [ebp+160A0h]
    fsub st, st(3)
  }
  __asm
  {
    fstp [esp+16Ch+var_144]
    fld dword ptr [ebp+1609Ch]
    fsub st, st(2)
    fstp [esp+16Ch+var_148]
    fld dword ptr [ebp+160A4h]
    fsub st, st(1)
    fstp [esp+16Ch+var_150]
    fstp st
    fstp st
    fstp st
  }
  CollectSuperWeaponBuildingTypes((ObjectClass *)_EBP, (int)&v142, (int)&v126); /*0x5073fc*/
  HouseClass::CollectInfantryBuildCandidates((HouseClass *)_EBP, (int)&v147, (int)&v126); /*0x507410*/
  HouseClass::CollectAircraftBuildCandidates((HouseClass *)_EBP, (int)&v137, (int)&v126); /*0x507424*/
  __asm /*0x507429*/
  {
    fld [esp+164h+var_144]
    fcomp [esp+164h+var_148]
    fnstsw ax
  }
  if ( (_AX & 0x4100) != 0 ) /*0x507436*/
    goto LABEL_43; /*0x507436*/
  __asm /*0x507438*/
  {
    fld [esp+164h+var_144]
    fcomp [esp+164h+var_150]
    fnstsw ax
  }
  if ( (_AX & 0x4100) != 0 ) /*0x507445*/
  {
LABEL_43:
    __asm /*0x50745c*/
    {
      fld [esp+164h+var_148]
      fcomp [esp+164h+var_150]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x507469*/
    {
      v51 = &v137; /*0x507487*/
      *(_DWORD *)(_EBP + 90208) = v118; /*0x50748e*/
      v52 = 2; /*0x507494*/
    }
    else
    {
      v51 = &v147; /*0x50746f*/
      *(_DWORD *)(_EBP + 90208) = v123; /*0x507476*/
      v52 = 1; /*0x50747c*/
    }
  }
  else
  {
    v51 = &v142; /*0x50744b*/
    *(_DWORD *)(_EBP + 90208) = Block; /*0x507452*/
    v52 = 0; /*0x507458*/
  }
  v54 = v51[4]; /*0x507499*/
  HIBYTE(v108) = 1; /*0x5074a0*/
  if ( !v54 ) /*0x5074a5*/
  {
    if ( v151 <= 0 ) /*0x5074ae*/
    {
      if ( v141 <= 0 ) /*0x5074e1*/
      {
        if ( v146 <= 0 ) /*0x507502*/
        {
          HIBYTE(v108) = 0; /*0x507519*/
          goto LABEL_56; /*0x507519*/
        }
        v51 = &v142; /*0x507508*/
        v52 = 0; /*0x50750f*/
        *(_DWORD *)(_EBP + 90208) = Block; /*0x507511*/
      }
      else
      {
        v51 = &v137; /*0x5074e7*/
        v52 = 2; /*0x5074ee*/
        *(_DWORD *)(_EBP + 90208) = v118; /*0x5074f3*/
      }
    }
    else
    {
      v51 = &v147; /*0x5074b4*/
      v52 = 1; /*0x5074bb*/
      *(_DWORD *)(_EBP + 90208) = v123; /*0x5074c0*/
    }
  }
  if ( v51[4] == 1 ) /*0x5074ca*/
  {
    v55 = *(float *)v51[1]; /*0x5074d3*/
  }
  else
  {
    DistributionVector_BuildingType::Construct(&v129, 0, 0); /*0x507684*/
    v129 = (DistributionVector_BuildingType)&DynamicVectorClass<DiscreteDistributionClass<BuildingTypeClass>::DistributionObject<BuildingTypeClass *>>::`vftable'; /*0x507690*/
    v134 = 10; /*0x50769b*/
    v133 = 0; /*0x5076a6*/
    v135 = 0; /*0x5076ad*/
    VectorClass__N_18::Destroy((int)&v129); /*0x5076b4*/
    v62 = v51[4]; /*0x5076ba*/
    v107 = 0.0; /*0x5076bd*/
    if ( v62 > 0 ) /*0x5076c3*/
    {
      do /*0x50772f*/
      {
        v63 = v51[1]; /*0x5076c5*/
        v64 = *(_DWORD **)(v63 + 4 * LODWORD(v107)); /*0x5076cf*/
        if ( v52 == 2 ) /*0x5076d2*/
        {
          v65 = v64[1355]; /*0x5076d4*/
        }
        else if ( v52 == 1 ) /*0x5076df*/
        {
          v65 = v64[1354]; /*0x5076e1*/
        }
        else
        {
          v65 = v64[1353]; /*0x5076e9*/
        }
        v136[0] = *(_DWORD *)(v63 + 4 * LODWORD(v107)); /*0x5076ef*/
        v136[1] = v65; /*0x507705*/
        HouseClass::AddCoordTrackingEntry((HouseClass *)&v129, v136); /*0x50770c*/
        v66 = v51[4]; /*0x507718*/
        v135 += v65; /*0x50771d*/
        ++LODWORD(v107); /*0x50772b*/
      }
      while ( SLODWORD(v107) < v66 ); /*0x50772f*/
    }
    v67 = 0; /*0x507738*/
    if ( v135 && v133 ) /*0x507748*/
    {
      v68 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, v135); /*0x507759*/
      v69 = (char *)v130; /*0x507765*/
      v70 = 0; /*0x50776c*/
      if ( v133 <= 0 ) /*0x507770*/
      {
LABEL_87:
        v55 = 0.0; /*0x507783*/
      }
      else
      {
        v71 = (char *)v130 + 4; /*0x507772*/
        while ( 1 ) /*0x507775*/
        {
          v67 += *v71; /*0x507775*/
          if ( v67 >= v68 ) /*0x507779*/
            break; /*0x507779*/
          ++v70; /*0x50777b*/
          v71 += 2; /*0x50777c*/
          if ( v70 >= v133 ) /*0x507781*/
            goto LABEL_87; /*0x507781*/
        }
        v55 = *((float *)v130 + 2 * v70); /*0x507787*/
      }
    }
    else
    {
      v69 = (char *)v130; /*0x50778c*/
      v55 = 0.0; /*0x507793*/
    }
    v129 = (DistributionVector_BuildingType)&VectorClass<DiscreteDistributionClass<BuildingTypeClass>::DistributionObject<BuildingTypeClass *>>::`vftable'; /*0x507797*/
    if ( v69 && BYTE1(v132) ) /*0x5077ad*/
    {
      HouseClass::updatePowerState(v69, 3); /*0x5077b5*/
      v130 = 0; /*0x5077ba*/
    }
    BYTE1(v132) = 0; /*0x5077c5*/
    v131 = 0; /*0x5077cd*/
  }
  if ( (v125[0] & 0x80000000) != 0 ) /*0x5077e0*/
  {
    *(float *)&v72 = v55; /*0x5077f5*/
    v109 = v55; /*0x5077f7*/
  }
  else
  {
    v112 = v55; /*0x5077e8*/
    v72 = *((int *)dword_A83C6C + v125[0]); /*0x5077ec*/
    v109 = *(float *)&v72; /*0x5077ef*/
  }
  v106 = 0; /*0x507802*/
  if ( a4 ) /*0x50780e*/
  {
    Base = 0; /*0x50781a*/
    NumOfElements = 0; /*0x50781e*/
    v115 = 0; /*0x507822*/
    LOBYTE(v116) = 0; /*0x507826*/
    v117 = 0; /*0x50782b*/
    VectorClass::CellConstructor(&v119, 0, 0); /*0x50782f*/
    v119.ptr_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x507838*/
    v121 = 10; /*0x507842*/
    v120 = 0; /*0x50784a*/
    if ( v119.Items && v119.IsAllocated ) /*0x507856*/
    {
      __3_YAXPAX_Z(v119.Items); /*0x507859*/
      v119.Items = 0; /*0x507861*/
    }
    v73 = 0; /*0x507869*/
    v119.IsAllocated = 0; /*0x50786b*/
    v119.Capacity = 0; /*0x507870*/
    v74 = *(_DWORD *)&v153.__pad_C[24 * v124 + 4]; /*0x50787a*/
    v125[0] = (unsigned int)&v153.__pad_C[24 * v124 + 4]; /*0x50788a*/
    if ( v74 > 0 ) /*0x50788e*/
    {
      v75 = &v153.DynamicVector_field_0x1[24 * v124 + 3]; /*0x507890*/
      do /*0x507904*/
      {
        v110 = *(int *)(*(_DWORD *)v75 + 4 * v73); /*0x5078a3*/
        v76 = globalHelper_005FD0(_EBP, &v110, a2, v73, -1); /*0x5078b2*/
        v77 = v115; /*0x5078b4*/
        if ( (int)(NumOfElements + 1) <= v115 ) /*0x5078bb*/
          goto LABEL_107; /*0x5078bb*/
        if ( !v115 ) /*0x5078bf*/
          v77 = 10; /*0x5078c1*/
        if ( BuildLocationVector::Grow((int)&Base, v77) ) /*0x5078cb*/
        {
LABEL_107:
          *((_DWORD *)Base + 2 * NumOfElements) = v76; /*0x5078dc*/
          *((float *)Base + 2 * NumOfElements + 1) = *(float *)&v110; /*0x5078eb*/
          LOBYTE(v116) = 0; /*0x5078f4*/
          ++NumOfElements; /*0x5078f9*/
        }
        ++v73; /*0x507901*/
      }
      while ( v73 < *(_DWORD *)v125[0] ); /*0x507904*/
    }
    v78 = NumOfElements; /*0x507906*/
    for ( i = 0; i < (int)NumOfElements; ++i ) /*0x507910*/
    {
      if ( !(_BYTE)v116 ) /*0x507918*/
      {
        qsort(Base, v78, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)globalHelper_0108F0); /*0x507927*/
        v117 = 0; /*0x50792f*/
        LOBYTE(v116) = 1; /*0x507933*/
      }
      v80 = (char *)Base + 8 * i + 4; /*0x507940*/
      if ( v120 < v119.Capacity /*0x50796c*/
        || (v119.IsAllocated || !v119.Capacity)
        && v121 > 0
        && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v119.ptr_0 + 2))(
             &v119,
             v121 + v119.Capacity,
             0) )
      {
        v81 = v120++; /*0x50797b*/
        *((_DWORD *)v119.Items + v81) = *v80; /*0x507984*/
      }
      v78 = NumOfElements; /*0x507987*/
    }
    v82 = a4; /*0x507994*/
    v83 = *a4; /*0x50799d*/
    v106 = *(_DWORD *)v119.Items; /*0x5079a3*/
    v84 = (*(int (__thiscall **)(_DWORD *, int *))(v83 + 16))(a4, &v106); /*0x5079aa*/
    v85 = v82[4]; /*0x5079ad*/
    if ( v84 < v85 ) /*0x5079b2*/
    {
      v86 = v85 - 1; /*0x5079b4*/
      for ( v82[4] = v86; v84 < v82[4]; *(_DWORD *)(v82[1] + 4 * v84 - 4) = *(_DWORD *)(v82[1] + 4 * v84) ) /*0x5079ba*/
        ++v84; /*0x5079bf*/
    }
    v119.ptr_0 = &VectorClass<Cell>::`vftable'; /*0x5079d2*/
    if ( v119.Items && v119.IsAllocated ) /*0x5079e4*/
    {
      __3_YAXPAX_Z(v119.Items); /*0x5079e7*/
      v119.Items = 0; /*0x5079ef*/
    }
    v119.IsAllocated = 0; /*0x5079f7*/
    v119.Capacity = 0; /*0x5079fd*/
    __3_YAXPAX_Z(Base); /*0x507a01*/
  }
  else
  {
    v87 = HouseClass::ScanBuildLocation( /*0x507a20*/
            (HouseClass *)_EBP,
            v125,
            v72,
            (int (__fastcall *)(int, int *, int, int))globalHelper_005FD0,
            2 * v124);
    v82 = a4; /*0x507a27*/
    v106 = *v87; /*0x507a2e*/
  }
  if ( v106 ) /*0x507a39*/
  {
    v88 = v112; /*0x507a4c*/
    if ( v112 == 0.0 ) /*0x507a52*/
    {
      v101 = v111; /*0x507b60*/
      *(_DWORD *)(*(_DWORD *)(_EBP + 22280) + v111) = *(_DWORD *)(LODWORD(v109) + 3576); /*0x507b6a*/
      *(_DWORD *)(*(_DWORD *)(_EBP + 22280) + v101 + 4) = v106; /*0x507b77*/
    }
    else
    {
      v89 = v111; /*0x507a5e*/
      *(_DWORD *)(*(_DWORD *)(_EBP + 22280) + v111 + 4) = v106; /*0x507a66*/
      v90 = (_DWORD *)(*(_DWORD *)(_EBP + 22280) + 16 * (a3 + 1)); /*0x507a7b*/
      if ( *v90 == -1 ) /*0x507a80*/
      {
        *v90 = *(_DWORD *)(LODWORD(v88) + 3576); /*0x507a8e*/
        *(_DWORD *)(*(_DWORD *)(_EBP + 22280) + v89 + 20) = v106; /*0x507a9a*/
        if ( v82 ) /*0x507a9e*/
        {
          BuildableFromArray = HouseClass::FirstBuildableFromArray( /*0x507ab1*/
                                 (HouseClass *)_EBP,
                                 *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2640);
          v92 = *(_DWORD *)(_EBP + 22292) - 1; /*0x507abc*/
          if ( v92 >= 0 ) /*0x507abd*/
          {
            v93 = (_DWORD *)(*(_DWORD *)(_EBP + 22280) + 16 * v92); /*0x507ad3*/
            while ( v93[1] != v106 || *v93 != BuildableFromArray[894] ) /*0x507aee*/
            {
              --v92; /*0x507af2*/
              v93 -= 4; /*0x507af3*/
              if ( v92 < 0 ) /*0x507af8*/
                goto LABEL_56; /*0x507af8*/
            }
            v94 = *(_DWORD *)(_EBP + 22292); /*0x507aff*/
            if ( v92 < v94 ) /*0x507b07*/
            {
              v95 = v94 - 1; /*0x507b0d*/
              v96 = v92; /*0x507b0e*/
              *(_DWORD *)(_EBP + 22292) = v95; /*0x507b12*/
              if ( v92 < v95 ) /*0x507b18*/
              {
                v97 = 16 * v92; /*0x507b1e*/
                do /*0x507b4f*/
                {
                  v98 = *(_DWORD *)(_EBP + 22280); /*0x507b21*/
                  v99 = (_DWORD *)(v98 + v97 + 16); /*0x507b27*/
                  v100 = (_DWORD *)(v97 + v98); /*0x507b2b*/
                  ++v96; /*0x507b2d*/
                  v97 += 16; /*0x507b2e*/
                  *v100 = *v99; /*0x507b33*/
                  v100[1] = v99[1]; /*0x507b38*/
                  v100[2] = v99[2]; /*0x507b3e*/
                  v100[3] = v99[3]; /*0x507b44*/
                }
                while ( v96 < *(_DWORD *)(_EBP + 22292) ); /*0x507b4f*/
              }
            }
          }
        }
      }
    }
  }
  else
  {
    HIBYTE(v108) = 0; /*0x507a42*/
  }
LABEL_56:
  __3_YAXPAX_Z(Block); /*0x507520*/
  __3_YAXPAX_Z(v123); /*0x50752f*/
  __3_YAXPAX_Z(v118); /*0x507539*/
  v56 = v138; /*0x50753e*/
  v57 = v138 == 0; /*0x50754d*/
  *(_DWORD *)(_EBP + 90208) = 0; /*0x50754f*/
  v137 = (int)&VectorClass<BuildingTypeClass *>::`vftable'; /*0x507555*/
  if ( !v57 && BYTE1(v140) ) /*0x507567*/
  {
    __3_YAXPAX_Z(v56); /*0x50756a*/
    v138 = 0; /*0x507572*/
  }
  BYTE1(v140) = 0; /*0x507580*/
  v139 = 0; /*0x50758a*/
  v147 = (int)&VectorClass<BuildingTypeClass *>::`vftable'; /*0x507591*/
  if ( v148 && BYTE1(v150) ) /*0x5075a3*/
  {
    __3_YAXPAX_Z(v148); /*0x5075a6*/
    v148 = 0; /*0x5075ae*/
  }
  BYTE1(v150) = 0; /*0x5075bc*/
  v149 = 0; /*0x5075c6*/
  v142 = (int)&VectorClass<BuildingTypeClass *>::`vftable'; /*0x5075cd*/
  if ( v143 && BYTE1(v145) ) /*0x5075df*/
  {
    __3_YAXPAX_Z(v143); /*0x5075e2*/
    v143 = 0; /*0x5075ea*/
  }
  BYTE1(v145) = 0; /*0x5075f5*/
  v144 = 0; /*0x5075ff*/
  v126.ptr_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x507606*/
  if ( v126.Items && v126.IsAllocated ) /*0x507616*/
  {
    __3_YAXPAX_Z(v126.Items); /*0x507619*/
    v126.Items = 0; /*0x507621*/
  }
  v126.IsAllocated = 0; /*0x507627*/
  v126.Capacity = 0; /*0x50762c*/
  v58 = &a3; /*0x507630*/
  v59 = 4; /*0x507637*/
  do /*0x507668*/
  {
    v60 = (void *)*(v58 - 6); /*0x507641*/
    v58 -= 6; /*0x507644*/
    *(v58 - 1) = (int)&VectorClass<Cell>::`vftable'; /*0x507649*/
    if ( v60 && *((_BYTE *)v58 + 9) ) /*0x50764e*/
    {
      __3_YAXPAX_Z(v60); /*0x507656*/
      *v58 = 0; /*0x50765e*/
    }
    --v59; /*0x507660*/
    *((_BYTE *)v58 + 9) = 0; /*0x507661*/
    v58[1] = 0; /*0x507665*/
  }
  while ( v59 ); /*0x507668*/
  return HIBYTE(v108); /*0x50766e*/
}


// ==== 0x00507B80  ObjectClass::CollectSuperWeaponBuildingTypes  this=ObjectClass  sig=csp ====
int __thiscall CollectSuperWeaponBuildingTypes(ObjectClass *this, int a2, int a3)
{
  char v4; // cl
  TagClass *attachedTag; // eax
  int v6; // ebp
  int abstractFlags; // eax
  _DWORD *v8; // ebx
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  void *v19; // eax
  int v21; // [esp+10h] [ebp-1Ch]
  void **v22; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  int v24; // [esp+1Ch] [ebp-10h]
  int v25; // [esp+20h] [ebp-Ch]
  int v26; // [esp+24h] [ebp-8h]
  int v27; // [esp+28h] [ebp-4h]

  v4 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)&this->attachedTag[2].firstTrigger); /*0x507b9c*/
  attachedTag = this->attachedTag; /*0x507b9e*/
  LOWORD(v25) = 1; /*0x507ba1*/
  v6 = 1 << v4; /*0x507ba6*/
  v22 = &DynamicVectorClass<BuildingTypeClass *>::`vftable'; /*0x507baa*/
  Block = 0; /*0x507bb2*/
  v24 = 0; /*0x507bb6*/
  v27 = 10; /*0x507bbe*/
  v26 = 0; /*0x507bc6*/
  abstractFlags = attachedTag[3].?; /*0x507bca*/
  if ( abstractFlags ) /*0x507bd2*/
  {
    if ( abstractFlags == 1 ) /*0x507be5*/
      v8 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2416); /*0x507bed*/
    else
      v8 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2444); /*0x507bfa*/
  }
  else
  {
    v8 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2388); /*0x507bda*/
  }
  v9 = v8[4] - 1; /*0x507c03*/
  v21 = v9; /*0x507c04*/
  if ( v9 >= 0 ) /*0x507c08*/
  {
    while ( 1 ) /*0x507c19*/
    {
      v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*v8 + 24))(v8, v9); /*0x507c19*/
      v11 = v10; /*0x507c1c*/
      if ( (v6 & v10[435]) != 0 /*0x507c82*/
        && v10[397] <= this->alignmentPadding75
        && (int)v10[1353] > 0
        && (unsigned __int8)HouseClass::PrerequisitesForTechnoTypeAreListed((int)v10, a3, *(_DWORD *)(a3 + 16))
        && (v26 < v24
         || (BYTE1(v25) || !v24)
         && v27 > 0
         && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v22[2])(&v22, v24 + v27, 0)) )
      {
        v12 = v26++; /*0x507c8d*/
        *((_DWORD *)Block + v12) = v11; /*0x507c98*/
      }
      if ( --v21 < 0 ) /*0x507ca4*/
        break; /*0x507ca4*/
      v9 = v21; /*0x507c10*/
    }
  }
  *(_DWORD *)(a2 + 4) = 0; /*0x507cb6*/
  *(_DWORD *)(a2 + 8) = 0; /*0x507cb9*/
  *(_BYTE *)(a2 + 12) = 1; /*0x507cbc*/
  *(_BYTE *)(a2 + 13) = 0; /*0x507cc0*/
  *(_DWORD *)a2 = &VectorClass<BuildingTypeClass *>::`vftable'; /*0x507cc3*/
  if ( (void ***)a2 != &v22 ) /*0x507cc9*/
  {
    VectorClass::Cleanup4(a2); /*0x507ccd*/
    v13 = v24; /*0x507cd3*/
    v14 = v24 == 0; /*0x507cd7*/
    *(_DWORD *)(a2 + 8) = v24; /*0x507cd9*/
    if ( v14 ) /*0x507cdc*/
    {
      *(_DWORD *)(a2 + 4) = 0; /*0x507d15*/
      *(_BYTE *)(a2 + 13) = 0; /*0x507d1c*/
    }
    else
    {
      v15 = __2_YAPAXI_Z(4 * v13); /*0x507ce2*/
      *(_DWORD *)(a2 + 4) = v15; /*0x507cea*/
      if ( v15 ) /*0x507cef*/
      {
        v16 = *(_DWORD *)(a2 + 8); /*0x507cf1*/
        v17 = 0; /*0x507cf4*/
        *(_BYTE *)(a2 + 13) = 1; /*0x507cf8*/
        if ( v16 > 0 ) /*0x507cfc*/
        {
          do /*0x507d11*/
          {
            *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v17) = *((_DWORD *)Block + v17); /*0x507d08*/
            ++v17; /*0x507d0e*/
          }
          while ( v17 < *(_DWORD *)(a2 + 8) ); /*0x507d11*/
        }
      }
    }
  }
  v18 = v27; /*0x507d24*/
  *(_DWORD *)(a2 + 16) = v26; /*0x507d28*/
  v19 = Block; /*0x507d2b*/
  v14 = Block == 0; /*0x507d2f*/
  *(_DWORD *)(a2 + 20) = v18; /*0x507d31*/
  *(_DWORD *)a2 = &DynamicVectorClass<BuildingTypeClass *>::`vftable'; /*0x507d34*/
  v22 = &VectorClass<BuildingTypeClass *>::`vftable'; /*0x507d3a*/
  if ( !v14 && BYTE1(v25) ) /*0x507d4a*/
    __3_YAXPAX_Z(v19); /*0x507d4d*/
  return a2; /*0x507d57*/
}



// ==== 0x00507D70  HouseClass::CollectInfantryBuildCandidates  this=HouseClass  sig=csp ====
int __thiscall HouseClass::CollectInfantryBuildCandidates(HouseClass *this, int a2, int a3)
{
  char v4; // cl
  int relatedTagsCapacity; // eax
  int v6; // ebp
  int v7; // eax
  _DWORD *v8; // ebx
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  void *v19; // eax
  int v21; // [esp+10h] [ebp-1Ch]
  void **v22; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  int v24; // [esp+1Ch] [ebp-10h]
  int v25; // [esp+20h] [ebp-Ch]
  int v26; // [esp+24h] [ebp-8h]
  int v27; // [esp+28h] [ebp-4h]

  v4 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)(this->relatedTagsCapacity + 152)); /*0x507d8c*/
  relatedTagsCapacity = this->relatedTagsCapacity; /*0x507d8e*/
  LOWORD(v25) = 1; /*0x507d91*/
  v6 = 1 << v4; /*0x507d96*/
  v22 = &DynamicVectorClass<BuildingTypeClass *>::`vftable'; /*0x507d9a*/
  Block = 0; /*0x507da2*/
  v24 = 0; /*0x507da6*/
  v27 = 10; /*0x507dae*/
  v26 = 0; /*0x507db6*/
  v7 = *(_DWORD *)(relatedTagsCapacity + 188); /*0x507dba*/
  if ( v7 ) /*0x507dc2*/
  {
    if ( v7 == 1 ) /*0x507dd5*/
      v8 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2416); /*0x507ddd*/
    else
      v8 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2444); /*0x507dea*/
  }
  else
  {
    v8 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2388); /*0x507dca*/
  }
  v9 = v8[4] - 1; /*0x507df3*/
  v21 = v9; /*0x507df4*/
  if ( v9 >= 0 ) /*0x507df8*/
  {
    while ( 1 ) /*0x507e09*/
    {
      v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*v8 + 24))(v8, v9); /*0x507e09*/
      v11 = v10; /*0x507e0c*/
      if ( (v6 & v10[435]) != 0 /*0x507e72*/
        && v10[397] <= *(_DWORD *)&this->__pad_13C[152]
        && (int)v10[1354] > 0
        && (unsigned __int8)HouseClass::PrerequisitesForTechnoTypeAreListed((int)v10, a3, *(_DWORD *)(a3 + 16))
        && (v26 < v24
         || (BYTE1(v25) || !v24)
         && v27 > 0
         && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v22[2])(&v22, v24 + v27, 0)) )
      {
        v12 = v26++; /*0x507e7d*/
        *((_DWORD *)Block + v12) = v11; /*0x507e88*/
      }
      if ( --v21 < 0 ) /*0x507e94*/
        break; /*0x507e94*/
      v9 = v21; /*0x507e00*/
    }
  }
  *(_DWORD *)(a2 + 4) = 0; /*0x507ea6*/
  *(_DWORD *)(a2 + 8) = 0; /*0x507ea9*/
  *(_BYTE *)(a2 + 12) = 1; /*0x507eac*/
  *(_BYTE *)(a2 + 13) = 0; /*0x507eb0*/
  *(_DWORD *)a2 = &VectorClass<BuildingTypeClass *>::`vftable'; /*0x507eb3*/
  if ( (void ***)a2 != &v22 ) /*0x507eb9*/
  {
    VectorClass::Cleanup4(a2); /*0x507ebd*/
    v13 = v24; /*0x507ec3*/
    v14 = v24 == 0; /*0x507ec7*/
    *(_DWORD *)(a2 + 8) = v24; /*0x507ec9*/
    if ( v14 ) /*0x507ecc*/
    {
      *(_DWORD *)(a2 + 4) = 0; /*0x507f05*/
      *(_BYTE *)(a2 + 13) = 0; /*0x507f0c*/
    }
    else
    {
      v15 = __2_YAPAXI_Z(4 * v13); /*0x507ed2*/
      *(_DWORD *)(a2 + 4) = v15; /*0x507eda*/
      if ( v15 ) /*0x507edf*/
      {
        v16 = *(_DWORD *)(a2 + 8); /*0x507ee1*/
        v17 = 0; /*0x507ee4*/
        *(_BYTE *)(a2 + 13) = 1; /*0x507ee8*/
        if ( v16 > 0 ) /*0x507eec*/
        {
          do /*0x507f01*/
          {
            *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v17) = *((_DWORD *)Block + v17); /*0x507ef8*/
            ++v17; /*0x507efe*/
          }
          while ( v17 < *(_DWORD *)(a2 + 8) ); /*0x507f01*/
        }
      }
    }
  }
  v18 = v27; /*0x507f14*/
  *(_DWORD *)(a2 + 16) = v26; /*0x507f18*/
  v19 = Block; /*0x507f1b*/
  v14 = Block == 0; /*0x507f1f*/
  *(_DWORD *)(a2 + 20) = v18; /*0x507f21*/
  *(_DWORD *)a2 = &DynamicVectorClass<BuildingTypeClass *>::`vftable'; /*0x507f24*/
  v22 = &VectorClass<BuildingTypeClass *>::`vftable'; /*0x507f2a*/
  if ( !v14 && BYTE1(v25) ) /*0x507f3a*/
    __3_YAXPAX_Z(v19); /*0x507f3d*/
  return a2; /*0x507f47*/
}



// ==== 0x00507F60  HouseClass::CollectAircraftBuildCandidates  this=HouseClass  sig=csp ====
int __thiscall HouseClass::CollectAircraftBuildCandidates(HouseClass *this, int a2, int a3)
{
  char v4; // cl
  int relatedTagsCapacity; // eax
  int v6; // ebp
  int v7; // eax
  _DWORD *v8; // ebx
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  void *v19; // eax
  int v21; // [esp+10h] [ebp-1Ch]
  void **v22; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  int v24; // [esp+1Ch] [ebp-10h]
  int v25; // [esp+20h] [ebp-Ch]
  int v26; // [esp+24h] [ebp-8h]
  int v27; // [esp+28h] [ebp-4h]

  v4 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)(this->relatedTagsCapacity + 152)); /*0x507f7c*/
  relatedTagsCapacity = this->relatedTagsCapacity; /*0x507f7e*/
  LOWORD(v25) = 1; /*0x507f81*/
  v6 = 1 << v4; /*0x507f86*/
  v22 = &DynamicVectorClass<BuildingTypeClass *>::`vftable'; /*0x507f8a*/
  Block = 0; /*0x507f92*/
  v24 = 0; /*0x507f96*/
  v27 = 10; /*0x507f9e*/
  v26 = 0; /*0x507fa6*/
  v7 = *(_DWORD *)(relatedTagsCapacity + 188); /*0x507faa*/
  if ( v7 ) /*0x507fb2*/
  {
    if ( v7 == 1 ) /*0x507fc5*/
      v8 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2416); /*0x507fcd*/
    else
      v8 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2444); /*0x507fda*/
  }
  else
  {
    v8 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2388); /*0x507fba*/
  }
  v9 = v8[4] - 1; /*0x507fe3*/
  v21 = v9; /*0x507fe4*/
  if ( v9 >= 0 ) /*0x507fe8*/
  {
    while ( 1 ) /*0x507ff9*/
    {
      v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*v8 + 24))(v8, v9); /*0x507ff9*/
      v11 = v10; /*0x507ffc*/
      if ( (v6 & v10[435]) != 0 /*0x508062*/
        && v10[397] <= *(_DWORD *)&this->__pad_13C[152]
        && (int)v10[1355] > 0
        && (unsigned __int8)HouseClass::PrerequisitesForTechnoTypeAreListed((int)v10, a3, *(_DWORD *)(a3 + 16))
        && (v26 < v24
         || (BYTE1(v25) || !v24)
         && v27 > 0
         && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v22[2])(&v22, v24 + v27, 0)) )
      {
        v12 = v26++; /*0x50806d*/
        *((_DWORD *)Block + v12) = v11; /*0x508078*/
      }
      if ( --v21 < 0 ) /*0x508084*/
        break; /*0x508084*/
      v9 = v21; /*0x507ff0*/
    }
  }
  *(_DWORD *)(a2 + 4) = 0; /*0x508096*/
  *(_DWORD *)(a2 + 8) = 0; /*0x508099*/
  *(_BYTE *)(a2 + 12) = 1; /*0x50809c*/
  *(_BYTE *)(a2 + 13) = 0; /*0x5080a0*/
  *(_DWORD *)a2 = &VectorClass<BuildingTypeClass *>::`vftable'; /*0x5080a3*/
  if ( (void ***)a2 != &v22 ) /*0x5080a9*/
  {
    VectorClass::Cleanup4(a2); /*0x5080ad*/
    v13 = v24; /*0x5080b3*/
    v14 = v24 == 0; /*0x5080b7*/
    *(_DWORD *)(a2 + 8) = v24; /*0x5080b9*/
    if ( v14 ) /*0x5080bc*/
    {
      *(_DWORD *)(a2 + 4) = 0; /*0x5080f5*/
      *(_BYTE *)(a2 + 13) = 0; /*0x5080fc*/
    }
    else
    {
      v15 = __2_YAPAXI_Z(4 * v13); /*0x5080c2*/
      *(_DWORD *)(a2 + 4) = v15; /*0x5080ca*/
      if ( v15 ) /*0x5080cf*/
      {
        v16 = *(_DWORD *)(a2 + 8); /*0x5080d1*/
        v17 = 0; /*0x5080d4*/
        *(_BYTE *)(a2 + 13) = 1; /*0x5080d8*/
        if ( v16 > 0 ) /*0x5080dc*/
        {
          do /*0x5080f1*/
          {
            *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v17) = *((_DWORD *)Block + v17); /*0x5080e8*/
            ++v17; /*0x5080ee*/
          }
          while ( v17 < *(_DWORD *)(a2 + 8) ); /*0x5080f1*/
        }
      }
    }
  }
  v18 = v27; /*0x508104*/
  *(_DWORD *)(a2 + 16) = v26; /*0x508108*/
  v19 = Block; /*0x50810b*/
  v14 = Block == 0; /*0x50810f*/
  *(_DWORD *)(a2 + 20) = v18; /*0x508111*/
  *(_DWORD *)a2 = &DynamicVectorClass<BuildingTypeClass *>::`vftable'; /*0x508114*/
  v22 = &VectorClass<BuildingTypeClass *>::`vftable'; /*0x50811a*/
  if ( !v14 && BYTE1(v25) ) /*0x50812a*/
    __3_YAXPAX_Z(v19); /*0x50812d*/
  return a2; /*0x508137*/
}



// ==== 0x00508150  HouseClass::ComputePowerDistribution  this=AbstractClass  sig=csp ====
int __thiscall sub_508150(float *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  int result; // eax
  double v12; // st7
  int v13; // [esp+4h] [ebp-10h]
  int v14; // [esp+8h] [ebp-Ch]

  v2 = *((_DWORD *)this + 5504); /*0x508156*/
  if ( v2 == -1 ) /*0x50815f*/
    goto LABEL_3; /*0x50815f*/
  v3 = *(_DWORD **)&dword_A8022C->AbstractClass[4 * v2]; /*0x508173*/
  v4 = v3[22572] + 3000; /*0x50818e*/
  v5 = v3[22571] + 3000; /*0x508194*/
  v6 = v3[22570] + 3000; /*0x5081a4*/
  v7 = Math::RoundToInt((double)*(int *)(dword_8871E0->?[0] + 4 * *((_DWORD *)this + 97)) * 0.0099999998 * (double)v4); /*0x5081bf*/
  v14 = Random::Range((_DWORD *)dword_A8B230 + 134, -v7, v7) + v4; /*0x5081e7*/
  v8 = Math::RoundToInt((double)*(int *)(dword_8871E0->?[0] + 4 * *((_DWORD *)this + 97)) * 0.0099999998 * (double)v5); /*0x5081fe*/
  v13 = Random::Range((_DWORD *)dword_A8B230 + 134, -v8, v8) + v5; /*0x50822b*/
  v9 = Math::RoundToInt((double)*(int *)(dword_8871E0->?[0] + 4 * *((_DWORD *)this + 97)) * 0.0099999998 * (double)v6); /*0x50823c*/
  v10 = Random::Range((_DWORD *)dword_A8B230 + 134, -v9, v9) + v6; /*0x508256*/
  result = v10 + v14 + v13; /*0x50825b*/
  if ( result <= 0 ) /*0x50826a*/
  {
LABEL_3:
    *(this + 22569) = 0.33000001; /*0x508271*/
    *(this + 22568) = 0.33000001; /*0x508277*/
    *(this + 22567) = 0.33000001; /*0x50827d*/
    return 1051260355; /*0x50826c*/
  }
  else
  {
    v12 = (double)result; /*0x508288*/
    *(this + 22567) = (double)v13 / v12; /*0x508292*/
    *(this + 22568) = (double)v14 / v12; /*0x50829e*/
    *(this + 22569) = (double)v10 / v12; /*0x5082aa*/
  }
  return result; /*0x508283*/
}



// ==== 0x005082C0  HouseClass::FindAutoBuildLocation  this=HouseClass  sig=csp ====
void __thiscall HouseClass::FindAutoBuildLocation(HouseClass *this)
{
  int v1; // esi
  int v2; // edi
  int v3; // ebp
  int v4; // ebx
  int v5; // eax
  HouseClass *v6; // esi
  int v7; // ecx
  _DWORD *v8; // edi
  _DWORD *v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int16 v12; // dx
  Cell *v13; // eax
  int v14; // edx
  Cell *v15; // esi
  __int16 v16; // cx
  Cell *v17; // ebp
  int v18; // ecx
  __int64 v19; // rax
  int v20; // edi
  bool v21; // bl
  char IsWithinUsableArea; // al
  __int16 v23; // ax
  int v24; // esi
  int v25; // ebx
  int v26; // eax
  int v27; // edi
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // ecx
  int v31; // edx
  _WORD *v32; // eax
  __int16 v33; // cx
  __int16 v34; // cx
  int v35; // edi
  int v36; // eax
  _DWORD *v37; // eax
  int v38; // ecx
  int v39; // edx
  __int16 v40; // cx
  int v41; // ecx
  __int16 v42; // dx
  int v43; // ecx
  int v44; // ebx
  int v45; // edi
  int v46; // edx
  int v47; // esi
  int v48; // eax
  _DWORD *v49; // eax
  int v50; // ecx
  _WORD *v51; // esi
  int *v52; // eax
  int v53; // edi
  int v54; // esi
  int v55; // eax
  _DWORD *v56; // eax
  int v57; // ecx
  int v58; // ebp
  int v59; // ebx
  int *v60; // esi
  _DWORD *v61; // edi
  int v62; // eax
  int v63; // ecx
  int v64; // eax
  _DWORD *v65; // eax
  int v66; // ebp
  int v67; // ebx
  int *v68; // esi
  _DWORD *v69; // edi
  int v70; // eax
  int v71; // ecx
  int v72; // eax
  _DWORD *v73; // eax
  int *v74; // ecx
  int *v75; // eax
  int v76; // edx
  int v77; // edx
  int v78; // ecx
  char v79; // [esp+13h] [ebp-10Dh]
  char v80; // [esp+13h] [ebp-10Dh]
  int v81; // [esp+14h] [ebp-10Ch]
  int v82; // [esp+14h] [ebp-10Ch]
  char v83; // [esp+19h] [ebp-107h]
  char v84; // [esp+1Ah] [ebp-106h]
  char v85; // [esp+1Bh] [ebp-105h]
  __int16 v86[2]; // [esp+1Ch] [ebp-104h] BYREF
  int v87; // [esp+20h] [ebp-100h]
  int v88; // [esp+24h] [ebp-FCh] BYREF
  bool v89; // [esp+2Ah] [ebp-F6h]
  bool v90; // [esp+2Bh] [ebp-F5h]
  unsigned int i; // [esp+2Ch] [ebp-F4h]
  BaseNodeClass v92; // [esp+30h] [ebp-F0h] BYREF
  int v93; // [esp+40h] [ebp-E0h]
  int v94; // [esp+44h] [ebp-DCh]
  int v95; // [esp+48h] [ebp-D8h]
  BaseNodeClass v96; // [esp+4Ch] [ebp-D4h] BYREF
  int v97; // [esp+5Ch] [ebp-C4h]
  int v98; // [esp+60h] [ebp-C0h]
  int v99; // [esp+64h] [ebp-BCh]
  int v100; // [esp+68h] [ebp-B8h]
  HouseClass *v101; // [esp+6Ch] [ebp-B4h]
  _DWORD *BuildableFromArray; // [esp+70h] [ebp-B0h]
  int v103; // [esp+74h] [ebp-ACh]
  int v104; // [esp+78h] [ebp-A8h]
  int v105; // [esp+7Ch] [ebp-A4h]
  int v106; // [esp+80h] [ebp-A0h]
  __int16 v107; // [esp+84h] [ebp-9Ch]
  int *HouseClass_field_timer_A; // [esp+88h] [ebp-98h]
  int *v109; // [esp+8Ch] [ebp-94h]
  int v110; // [esp+90h] [ebp-90h] BYREF
  int v111; // [esp+94h] [ebp-8Ch] BYREF
  __int16 v112[2]; // [esp+98h] [ebp-88h] BYREF
  int v113; // [esp+9Ch] [ebp-84h]
  _DWORD v114[4]; // [esp+A0h] [ebp-80h]
  _DWORD v115[4]; // [esp+B0h] [ebp-70h]
  _DWORD v116[4]; // [esp+C0h] [ebp-60h]
  int v117; // [esp+D0h] [ebp-50h] BYREF
  int v118; // [esp+D4h] [ebp-4Ch] BYREF
  int v119; // [esp+D8h] [ebp-48h] BYREF
  _DWORD v120[3]; // [esp+DCh] [ebp-44h] BYREF
  int v121; // [esp+E8h] [ebp-38h]
  int v122; // [esp+F8h] [ebp-28h]
  int v123; // [esp+108h] [ebp-18h]
  int v124; // [esp+118h] [ebp-8h]

  v109 = &this->damageDelayTimer[2]; /*0x5082cf*/
  v1 = this->damageDelayTimer[2] - 1; /*0x5082d9*/
  v2 = this->teamDelayTimer[0]; /*0x5082da*/
  v101 = this; /*0x5082dd*/
  --v2; /*0x5082e1*/
  v3 = this->teamDelayTimer[1] + 2; /*0x5082e9*/
  v4 = this->teamDelayTimer[2]; /*0x5082ec*/
  HouseClass_field_timer_A = this->HouseClass_field_timer_A; /*0x5082f5*/
  v4 += 2; /*0x5082fc*/
  this->HouseClass_field_timer_A[0] = v1; /*0x5082ff*/
  this->HouseClass_field_timer_A[1] = v2; /*0x508305*/
  this->HouseClass_field_timer_A[2] = v3; /*0x508308*/
  this->HouseClass_field_timer_B[0] = v4; /*0x50830b*/
  BaseNodeClass::Vector_Constructor(&v96, 0, 0); /*0x50830e*/
  v96.buildingTypeIndex = (int)&DynamicVectorClass<BaseNodeClass>::`vftable'; /*0x50831b*/
  v98 = 10; /*0x508323*/
  v97 = 0; /*0x50832b*/
  BaseNodeClass::Vector_Constructor(&v92, 0, 0); /*0x508333*/
  LOWORD(v81) = v1; /*0x508338*/
  HIWORD(v81) = v2; /*0x50833d*/
  v5 = v81; /*0x508342*/
  LOWORD(v81) = v1; /*0x508346*/
  v116[0] = v5; /*0x50834b*/
  HIWORD(v81) = v4 + v2 - 1; /*0x508356*/
  v116[1] = v81; /*0x50835f*/
  LOWORD(v81) = v1; /*0x508369*/
  HIWORD(v81) = v2 + 1; /*0x50836e*/
  LOWORD(v3) = v1 + v3; /*0x508377*/
  v116[2] = v81; /*0x508379*/
  v92.buildingTypeIndex = (int)&DynamicVectorClass<BaseNodeClass>::`vftable'; /*0x508388*/
  LOWORD(v81) = v3 - 1; /*0x508390*/
  v116[3] = v81; /*0x508399*/
  LOWORD(v81) = v3; /*0x5083a0*/
  HIWORD(v81) = v2; /*0x5083a5*/
  v114[0] = v81; /*0x5083ae*/
  LOWORD(v81) = v3; /*0x5083b5*/
  HIWORD(v81) = v4 + v2 - 1; /*0x5083ba*/
  v114[1] = v81; /*0x5083c3*/
  LOWORD(v81) = v1; /*0x5083ca*/
  v6 = v101; /*0x5083cf*/
  v7 = v81; /*0x5083d8*/
  LOWORD(v81) = v3 - 1; /*0x5083e6*/
  v114[2] = v7; /*0x5083f4*/
  v94 = 10; /*0x5083fe*/
  v93 = 0; /*0x508406*/
  v114[3] = v81; /*0x50840e*/
  BuildableFromArray = HouseClass::FirstBuildableFromArray(v101, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2640); /*0x508420*/
  v8 = HouseClass::FirstBuildableFromArray(v6, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2696); /*0x508440*/
  v9 = HouseClass::FirstBuildableFromArray(v6, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2668); /*0x508443*/
  v115[0] = v8; /*0x508448*/
  v115[1] = v8; /*0x50844f*/
  v115[2] = v9; /*0x508464*/
  v115[3] = v9; /*0x50846b*/
  v82 = 0; /*0x508472*/
  v113 = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v6->damageDelayTimer[1]) /*0x508488*/
         + 283);
  for ( i = 0; (int)i < 16; i += 4 ) /*0x50848f*/
  {
    v10 = i; /*0x508493*/
    v11 = v116[i / 4]; /*0x50849d*/
    v12 = v114[i / 4]; /*0x5084a4*/
    v95 = dword_7EA790[i / 4]; /*0x5084ac*/
    *(_DWORD *)v86 = v11; /*0x5084b2*/
    v87 = 0; /*0x5084b6*/
    v83 = 0; /*0x5084ba*/
    v99 = 0; /*0x5084be*/
    v107 = v12; /*0x5084c2*/
    while ( (_WORD)v11 != v107 || v86[1] != *(_WORD *)((char *)v114 + v10 + 2) ) /*0x5084e1*/
    {
      v13 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v86); /*0x5084f1*/
      v14 = *(int *)((char *)&dword_7EA7A0 + v10) & 7; /*0x508501*/
      v15 = v13; /*0x508504*/
      v16 = LOWORD(g_DDrawSurfaceManager.scenario[v14 + 82]) + v86[0]; /*0x508506*/
      LOWORD(v14) = HIWORD(g_DDrawSurfaceManager.scenario[v14 + 82]); /*0x508515*/
      LOWORD(v106) = v16; /*0x50851d*/
      HIWORD(v106) = v86[1] + v14; /*0x508537*/
      *(_DWORD *)v112 = v106; /*0x508546*/
      v17 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v112); /*0x508559*/
      v18 = *(_DWORD *)&v15->__pad_E8[4]; /*0x508564*/
      v19 = v15->Cell_field_0x11B[0] - v113; /*0x50856a*/
      v20 = *(_DWORD *)&v17->__pad_E8[4]; /*0x50856b*/
      v90 = (int)((HIDWORD(v19) ^ v19) - HIDWORD(v19)) <= 2; /*0x508578*/
      if ( v18 == 3 || v18 == 2 || v18 == 8 || v20 == 3 || v20 == 2 || (v85 = 1, v20 == 8) ) /*0x50859e*/
        v85 = 0; /*0x5085a0*/
      v89 = *(_DWORD *)&v15->__pad_3C[8] == -1; /*0x5085ad*/
      if ( Cell::IsBridge(v15) || (v79 = 1, Cell::IsBridge(v17)) ) /*0x5085bd*/
        v79 = 0; /*0x5085cb*/
      if ( CellClass::FindInfantry((CellClass *)v15, 0) || (v84 = 1, CellClass::FindInfantry((CellClass *)v17, 0)) ) /*0x5085e0*/
        v84 = 0; /*0x5085ee*/
      v21 = v15->Cell_field_0x11B[1] == 0; /*0x508607*/
      IsWithinUsableArea = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v86, 1); /*0x50860a*/
      if ( !v90 || !v85 ) /*0x508621*/
        goto LABEL_36; /*0x508621*/
      if ( !v89 || !v79 || !v84 || !v21 || !IsWithinUsableArea ) /*0x508645*/
      {
        if ( v79 && v84 && IsWithinUsableArea ) /*0x508688*/
        {
          v80 = 0; /*0x50868e*/
          ++v99; /*0x508694*/
        }
        else
        {
LABEL_36:
          v80 = 1; /*0x5086cd*/
          if ( v99 > 0 ) /*0x5086d8*/
          {
            v80 = 0; /*0x5086da*/
            v99 = 0; /*0x5086df*/
          }
        }
        if ( v87 >= 5 || !v80 ) /*0x5086a7*/
        {
          v24 = v82; /*0x5086af*/
          v25 = 0; /*0x5086b6*/
          v26 = v87 / 2 - 1; /*0x5086ba*/
          v88 = v82; /*0x5086bb*/
          v100 = v26; /*0x5086c1*/
          if ( v87 > 0 ) /*0x5086c5*/
          {
            while ( 1 ) /*0x5086ef*/
            {
              if ( v25 == v26 && v80 ) /*0x5086fb*/
              {
                LOBYTE(v121) = 0; /*0x50870b*/
                v27 = *(_DWORD *)(v115[i / 4] + 3576); /*0x508720*/
                if ( v93 < *(int *)&v92.placed /*0x508755*/
                  || (BYTE1(v92.attempts) || !*(_DWORD *)&v92.placed)
                  && v94 > 0
                  && (*(unsigned __int8 (__thiscall **)(BaseNodeClass *, int, _DWORD))(v92.buildingTypeIndex + 8))(
                       &v92,
                       v94 + *(_DWORD *)&v92.placed,
                       0) )
                {
                  v28 = v93++; /*0x508760*/
                  v29 = (_DWORD *)(v92.mapCoords[0] + 16 * v28); /*0x50876e*/
                  v30 = v121; /*0x508770*/
                  *v29 = v27; /*0x508777*/
                  v29[1] = v24; /*0x508779*/
                  v29[2] = v30; /*0x50877c*/
                  v29[3] = 0; /*0x50877f*/
                }
                v25 += 3; /*0x508786*/
                v31 = v95 & 7; /*0x508789*/
                v32 = (_WORD *)(4 * v31 + 9041544); /*0x508794*/
                v33 = v24 + LOWORD(g_DDrawSurfaceManager.scenario[v31 + 82]); /*0x50879b*/
                LOWORD(v31) = HIWORD(v88) + HIWORD(g_DDrawSurfaceManager.scenario[v31 + 82]); /*0x5087a5*/
                v34 = *v32 + *v32 + v33; /*0x5087ae*/
                LOWORD(v32) = v32[1]; /*0x5087b1*/
                LOWORD(v105) = v34; /*0x5087bb*/
                HIWORD(v105) = v31 + (_WORD)v32 + (_WORD)v32; /*0x5087c0*/
                v24 = v105; /*0x5087c5*/
              }
              else
              {
                v35 = BuildableFromArray[894]; /*0x5087dc*/
                LOBYTE(v122) = 0; /*0x5087e4*/
                if ( v97 < *(int *)&v96.placed /*0x50881b*/
                  || (BYTE1(v96.attempts) || !*(_DWORD *)&v96.placed)
                  && v98 > 0
                  && (*(unsigned __int8 (__thiscall **)(BaseNodeClass *, int, _DWORD))(v96.buildingTypeIndex + 8))(
                       &v96,
                       v98 + *(_DWORD *)&v96.placed,
                       0) )
                {
                  v36 = v97++; /*0x508826*/
                  v37 = (_DWORD *)(v96.mapCoords[0] + 16 * v36); /*0x508834*/
                  v38 = v122; /*0x508836*/
                  *v37 = v35; /*0x50883d*/
                  v37[1] = v24; /*0x50883f*/
                  v37[2] = v38; /*0x508842*/
                  v37[3] = 0; /*0x508845*/
                }
                ++v25; /*0x50884c*/
                v39 = v95 & 7; /*0x50884d*/
                v40 = v24 + LOWORD(g_DDrawSurfaceManager.scenario[v39 + 82]); /*0x50885f*/
                LOWORD(v39) = HIWORD(g_DDrawSurfaceManager.scenario[v39 + 82]); /*0x508862*/
                LOWORD(v103) = v40; /*0x508866*/
                HIWORD(v103) = HIWORD(v88) + v39; /*0x508870*/
                v24 = v103; /*0x508875*/
              }
              v88 = v24; /*0x50887d*/
              if ( v25 >= v87 ) /*0x508883*/
                break; /*0x508883*/
              v26 = v100; /*0x5086e9*/
            }
          }
        }
        v87 = 0; /*0x508889*/
        v83 = 0; /*0x508891*/
        goto LABEL_57; /*0x508891*/
      }
      if ( !v83 ) /*0x50864d*/
      {
        v23 = v86[0]; /*0x50864f*/
        v83 = 1; /*0x508653*/
        v87 = 1; /*0x508658*/
        v82 = *(_DWORD *)v86; /*0x508660*/
        goto LABEL_58; /*0x508664*/
      }
      ++v87; /*0x508669*/
LABEL_57:
      v23 = v86[0]; /*0x508896*/
LABEL_58:
      v10 = i; /*0x50889a*/
      v41 = v95 & 7; /*0x5088a2*/
      v42 = HIWORD(g_DDrawSurfaceManager.scenario[v41 + 82]); /*0x5088a5*/
      LOWORD(v104) = LOWORD(g_DDrawSurfaceManager.scenario[v41 + 82]) + v23; /*0x5088c1*/
      HIWORD(v104) = v86[1] + v42; /*0x5088c6*/
      LOWORD(v11) = v104; /*0x5088cb*/
      *(_DWORD *)v86 = v104; /*0x5088cf*/
    }
    if ( v87 >= 5 ) /*0x5088df*/
    {
      v43 = v82; /*0x5088e5*/
      v44 = 0; /*0x5088ee*/
      v88 = v82; /*0x5088f3*/
      v100 = v87 / 2 - 1; /*0x5088f9*/
      do /*0x508a90*/
      {
        if ( v44 == v100 ) /*0x508907*/
        {
          v45 = v43; /*0x508911*/
          v46 = v115[i / 4]; /*0x508919*/
          LOBYTE(v124) = 0; /*0x508926*/
          v47 = *(_DWORD *)(v46 + 3576); /*0x50892e*/
          if ( v93 < *(int *)&v92.placed /*0x50895f*/
            || (BYTE1(v92.attempts) || !*(_DWORD *)&v92.placed)
            && v94 > 0
            && (*(unsigned __int8 (__thiscall **)(BaseNodeClass *, int, _DWORD))(v92.buildingTypeIndex + 8))(
                 &v92,
                 v94 + *(_DWORD *)&v92.placed,
                 0) )
          {
            v48 = v93++; /*0x50896a*/
            v49 = (_DWORD *)(v92.mapCoords[0] + 16 * v48); /*0x508978*/
            v50 = v124; /*0x50897a*/
            *v49 = v47; /*0x508981*/
            v49[1] = v45; /*0x508983*/
            v49[2] = v50; /*0x508986*/
            v49[3] = 0; /*0x508989*/
          }
          v44 += 3; /*0x50899e*/
          v51 = (_WORD *)(4 * (v95 & 7) + 9041544); /*0x5089a1*/
          v111 = *CellStruct::Add((CellStruct *)&v88, &v117, v51); /*0x5089b8*/
          v110 = *CellStruct::Add((CellStruct *)&v111, v120, v51); /*0x5089d8*/
          v52 = CellStruct::Add((CellStruct *)&v110, &v119, v51); /*0x5089e6*/
        }
        else
        {
          v53 = v43; /*0x5089f3*/
          v54 = BuildableFromArray[894]; /*0x5089f9*/
          LOBYTE(v123) = 0; /*0x508a03*/
          if ( v97 < *(int *)&v96.placed /*0x508a36*/
            || (BYTE1(v96.attempts) || !*(_DWORD *)&v96.placed)
            && v98 > 0
            && (*(unsigned __int8 (__thiscall **)(BaseNodeClass *, int, _DWORD))(v96.buildingTypeIndex + 8))(
                 &v96,
                 v98 + *(_DWORD *)&v96.placed,
                 0) )
          {
            v55 = v97++; /*0x508a41*/
            v56 = (_DWORD *)(v96.mapCoords[0] + 16 * v55); /*0x508a4f*/
            v57 = v123; /*0x508a51*/
            *v56 = v54; /*0x508a58*/
            v56[1] = v53; /*0x508a5a*/
            v56[2] = v57; /*0x508a5d*/
            v56[3] = 0; /*0x508a60*/
          }
          ++v44; /*0x508a67*/
          v52 = CellStruct::Add((CellStruct *)&v88, &v118, (_WORD *)(4 * (v95 & 7) + 9041544)); /*0x508a7f*/
        }
        v43 = *v52; /*0x508a84*/
        v88 = *v52; /*0x508a8c*/
      }
      while ( v44 < v87 ); /*0x508a90*/
    }
  }
  v58 = 0; /*0x508aae*/
  if ( v97 > 0 ) /*0x508ab2*/
  {
    v59 = 0; /*0x508ab8*/
    v60 = &v101->base[7]; /*0x508aba*/
    do /*0x508b24*/
    {
      v61 = (_DWORD *)(v59 + v96.mapCoords[0]); /*0x508ac7*/
      v62 = v60[2]; /*0x508aca*/
      if ( v60[4] < v62 /*0x508aec*/
        || (*((_BYTE *)v60 + 13) || !v62)
        && (v63 = v60[5], v63 > 0)
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v60 + 8))(v60, v63 + v62, 0) )
      {
        v64 = v60[4]; /*0x508af3*/
        v60[4] = v64 + 1; /*0x508af9*/
        v65 = (_DWORD *)(v60[1] + 16 * v64); /*0x508b04*/
        *v65 = *v61; /*0x508b06*/
        v65[1] = v61[1]; /*0x508b0b*/
        v65[2] = v61[2]; /*0x508b11*/
        v65[3] = v61[3]; /*0x508b17*/
      }
      ++v58; /*0x508b1e*/
      v59 += 16; /*0x508b1f*/
    }
    while ( v58 < v97 ); /*0x508b24*/
  }
  v66 = 0; /*0x508b2a*/
  if ( v93 > 0 ) /*0x508b2e*/
  {
    v67 = 0; /*0x508b34*/
    v68 = &v101->base[7]; /*0x508b36*/
    do /*0x508ba0*/
    {
      v69 = (_DWORD *)(v67 + v92.mapCoords[0]); /*0x508b43*/
      v70 = v68[2]; /*0x508b46*/
      if ( v68[4] < v70 /*0x508b68*/
        || (*((_BYTE *)v68 + 13) || !v70)
        && (v71 = v68[5], v71 > 0)
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v68 + 8))(v68, v71 + v70, 0) )
      {
        v72 = v68[4]; /*0x508b6f*/
        v68[4] = v72 + 1; /*0x508b75*/
        v73 = (_DWORD *)(v68[1] + 16 * v72); /*0x508b80*/
        *v73 = *v69; /*0x508b82*/
        v73[1] = v69[1]; /*0x508b87*/
        v73[2] = v69[2]; /*0x508b8d*/
        v73[3] = v69[3]; /*0x508b93*/
      }
      ++v66; /*0x508b9a*/
      v67 += 16; /*0x508b9b*/
    }
    while ( v66 < v93 ); /*0x508ba0*/
  }
  v74 = HouseClass_field_timer_A; /*0x508ba2*/
  v75 = v109; /*0x508ba9*/
  v76 = *HouseClass_field_timer_A; /*0x508bb5*/
  v92.buildingTypeIndex = (int)&VectorClass<BaseNodeClass>::`vftable'; /*0x508bb7*/
  *v109 = v76; /*0x508bbb*/
  v75[1] = v74[1]; /*0x508bc0*/
  v77 = v74[2]; /*0x508bc3*/
  v78 = v74[3]; /*0x508bc6*/
  v75[2] = v77; /*0x508bc9*/
  v75[3] = v78; /*0x508bcc*/
  if ( v92.mapCoords[0] && BYTE1(v92.attempts) ) /*0x508bdd*/
  {
    __3_YAXPAX_Z((void *)v92.mapCoords[0]); /*0x508be0*/
    v92.mapCoords[0] = 0; /*0x508be8*/
  }
  v96.buildingTypeIndex = (int)&VectorClass<BaseNodeClass>::`vftable'; /*0x508bf4*/
  BYTE1(v92.attempts) = 0; /*0x508bfb*/
  *(_DWORD *)&v92.placed = 0; /*0x508c02*/
  if ( v96.mapCoords[0] && BYTE1(v96.attempts) ) /*0x508c13*/
    __3_YAXPAX_Z((void *)v96.mapCoords[0]); /*0x508c16*/
}



// ==== 0x00508C30  HouseClass::UpdatePower  this=HouseClass  sig=csp ====
int __usercall HouseClass::UpdatePower@<eax>(HouseClass *this, double a2@<st0>)
{
  int v2; // ecx
  BuildingClass *v3; // edi
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v8; // ebp
  BuildingClass *v9; // edi
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int result; // eax
  BuildingClass *v16; // [esp-8h] [ebp-20h]
  ObjectClass *v17; // [esp+0h] [ebp-18h]
  char v18; // [esp+Bh] [ebp-Dh]
  int v19; // [esp+Ch] [ebp-Ch]
  int v20; // [esp+Ch] [ebp-Ch]
  int v21; // [esp+10h] [ebp-8h]
  int v22; // [esp+10h] [ebp-8h]
  int v23; // [esp+10h] [ebp-8h]
  unsigned __int8 v24; // [esp+14h] [ebp-4h]

  v4 = v2; /*0x508c35*/
  v5 = *(_DWORD *)(v2 + 21412); /*0x508c39*/
  v6 = *(_DWORD *)(v4 + 21416); /*0x508c3f*/
  v19 = v5; /*0x508c47*/
  v21 = v6; /*0x508c4b*/
  if ( v5 >= v6 ) /*0x508c4f*/
    goto LABEL_6; /*0x508c4f*/
  if ( !v6 ) /*0x508c53*/
    goto LABEL_6; /*0x508c53*/
  if ( !v5 ) /*0x508c57*/
    goto LABEL_5; /*0x508c57*/
  __asm /*0x508c59*/
  {
    fild [esp+18h+var_C]
    fidiv [esp+18h+var_8]
    fcomp ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x508c6c*/
LABEL_5:
    v24 = 1; /*0x508c6e*/
  else
LABEL_6:
    v24 = 0; /*0x508c75*/
  *(_BYTE *)(v4 + 22392) = 0; /*0x508c79*/
  *(_DWORD *)(v4 + 21412) = 0; /*0x508c7f*/
  *(_DWORD *)(v4 + 21416) = 0; /*0x508c85*/
  v8 = 0; /*0x508c8f*/
  v18 = 0; /*0x508c93*/
  v22 = *(_DWORD *)(v4 + 120); /*0x508c97*/
  if ( v22 > 0 ) /*0x508c9b*/
  {
    v16 = v3; /*0x508ca1*/
    do /*0x508ca5*/
    {
      v9 = *(BuildingClass **)(*(_DWORD *)(v4 + 108) + 4 * v8); /*0x508ca5*/
      if ( v9 && !v9->? && v9->? ) /*0x508cb8*/
      {
        if ( *(_DWORD *)&dword_A8B238 ) /*0x508cc5*/
        {
          if ( (Object *)v4 != dword_A83D4C ) /*0x508ce4*/
            goto LABEL_19; /*0x508ce4*/
        }
        else if ( !*(_BYTE *)(v4 + 492) && !*(_BYTE *)(v4 + 493) ) /*0x508cd5*/
        {
LABEL_19:
          *(_DWORD *)(v4 + 21412) += BuildingClass::GetPowerOutput(v16, a2); /*0x508cf2*/
          *(_DWORD *)(v4 + 21416) += BuildingClass::GetPowerDrain(v9); /*0x508d18*/
          if ( (unsigned __int8)ObjectClass::HasLocation((ObjectClass *)v9) /*0x508d30*/
            && BuildingClass::GetPowerOutput(v16, a2) > 0 )
          {
            v18 = 1; /*0x508d32*/
          }
          goto LABEL_22; /*0x508d32*/
        }
        if ( v9->? || *(_DWORD *)&dword_A8B238 ) /*0x508cf0*/
          goto LABEL_19; /*0x508cf0*/
      }
LABEL_22:
      ++v8; /*0x508d37*/
    }
    while ( v8 < v22 ); /*0x508ca5*/
  }
  *(_BYTE *)(v4 + 22395) = v18; /*0x508d45*/
  v10 = *(_DWORD *)(v4 + 676); /*0x508d50*/
  v11 = *(_DWORD *)(v4 + 684); /*0x508d56*/
  if ( v10 != -1 ) /*0x508d5f*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v10 >= v11 ) /*0x508d6b*/
      goto LABEL_27; /*0x508d6b*/
    v11 -= *(_DWORD *)&stru_A8EB00.?[416] - v10; /*0x508d6d*/
  }
  if ( v11 ) /*0x508d71*/
  {
LABEL_28:
    *(_DWORD *)(v4 + 21412) = 0; /*0x508d79*/
    goto LABEL_29; /*0x508d79*/
  }
LABEL_27:
  if ( v18 ) /*0x508d77*/
    goto LABEL_28; /*0x508d77*/
LABEL_29:
  nullsub_5(v17); /*0x508d7f*/
  HouseClass::UpdateTeamProductionSpeed((HouseClass *)v4); /*0x508d88*/
  v12 = *(_DWORD *)(v4 + 21412); /*0x508d8d*/
  v13 = *(_DWORD *)(v4 + 21416); /*0x508d93*/
  v20 = v12; /*0x508d9b*/
  v23 = v13; /*0x508d9f*/
  if ( v12 >= v13 ) /*0x508da3*/
    goto LABEL_34; /*0x508da3*/
  if ( !v13 ) /*0x508da7*/
    goto LABEL_34; /*0x508da7*/
  if ( !v12 ) /*0x508dab*/
    goto LABEL_33; /*0x508dab*/
  __asm /*0x508dad*/
  {
    fild [esp+18h+var_C]
    fidiv [esp+18h+var_8]
    fcomp ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x508dc0*/
LABEL_33:
    result = 1; /*0x508dc2*/
  else
LABEL_34:
    result = 0; /*0x508dc9*/
  if ( v24 != result ) /*0x508dd7*/
    result = SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((SuperWeapon *)v4); /*0x508ddb*/
  *(_BYTE *)(v4 + 22393) = 1; /*0x508de0*/
  return result; /*0x508de7*/
}



// ==== 0x00508DF0  HouseClass::CanTogglePower  this=HouseClass  sig=csp ====
void *__thiscall HouseClass::CanTogglePower(HouseClass *this)
{
  void *result; // eax
  int v2; // eax
  int v3; // esi
  int powerOutput; // edx
  int powerDrain; // eax
  int bunkersCount; // edi
  int v7; // edx
  _DWORD *absorbersCount; // esi
  int v9; // eax
  char v10; // [esp+0h] [ebp-Ch]

  BYTE1(this->HouseClass_field_timer_B[2]) = 0; /*0x508df0*/
  result = dword_A83D4C; /*0x508df7*/
  if ( this == (HouseClass *)dword_A83D4C ) /*0x508e01*/
  {
    v2 = this->radarBlackoutTimer[2]; /*0x508e07*/
    v3 = this->radarBlackoutTimer[0]; /*0x508e10*/
    v10 = 0; /*0x508e1a*/
    if ( v3 != -1 ) /*0x508e1f*/
    {
      if ( (int)dword_A8ED84 - v3 >= v2 ) /*0x508e2b*/
        goto LABEL_6; /*0x508e2b*/
      v2 -= (int)dword_A8ED84 - v3; /*0x508e2d*/
    }
    if ( v2 ) /*0x508e31*/
    {
LABEL_30:
      LOBYTE(result) = HouseClass::updateAlliedStatus((HouseClass *)&dword_87F7E8); /*0x508f2f*/
      if ( (_BYTE)result != v10 ) /*0x508f43*/
        HouseClass::SetRadarVisibility((int)&dword_87F7E8, v10); /*0x508f4f*/
      return result; /*0x508f4f*/
    }
LABEL_6:
    if ( LOBYTE(dword_A8B230[374].ptr_C) ) /*0x508e3c*/
      goto LABEL_29; /*0x508e3c*/
    powerOutput = this->powerOutput; /*0x508e4a*/
    powerDrain = this->powerDrain; /*0x508e50*/
    if ( powerOutput >= powerDrain /*0x508e81*/
      || !powerDrain
      || powerOutput && (double)this->powerOutput / (double)this->powerDrain >= 1.0 )
    {
      bunkersCount = this->bunkersCount; /*0x508e87*/
      v7 = 0; /*0x508e8a*/
      if ( bunkersCount > 0 ) /*0x508e8e*/
      {
        absorbersCount = (_DWORD *)this->absorbersCount; /*0x508e94*/
        while ( 1 ) /*0x508e9d*/
        {
          v9 = *absorbersCount; /*0x508e9d*/
          if ( *absorbersCount /*0x508f06*/
            && *(_BYTE *)(v9 + 1632)
            && *(_BYTE *)(*(_DWORD *)(v9 + 1312) + 5796)
            && !*(_BYTE *)(v9 + 129)
            && *(_BYTE *)(v9 + 116)
            && (!*(_DWORD *)&dword_A8B238 && !this->currentPlayer[0] && !this->playerControl[0]
             || *(_BYTE *)(v9 + 1051)
             || *(_DWORD *)&dword_A8B238)
            && *(_DWORD *)(v9 + 172) != 19
            && *(_DWORD *)(v9 + 180) != 19 )
          {
            break; /*0x508f06*/
          }
          ++v7; /*0x508f08*/
          ++absorbersCount; /*0x508f09*/
          if ( v7 >= bunkersCount ) /*0x508f0e*/
            goto LABEL_30; /*0x508f0e*/
        }
        if ( !*(_DWORD *)(v9 + 1284) /*0x508f20*/
          && !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v9 + 468))(*absorbersCount) )
        {
LABEL_29:
          v10 = 1; /*0x508f2a*/
        }
      }
    }
    goto LABEL_30; /*0x508f2a*/
  }
  return result; /*0x508f54*/
}



// ==== 0x00508F60  HouseClass::ToggleGapGeneratorReveal  this=HouseClass  sig=csp ====
char __thiscall HouseClass::ToggleGapGeneratorReveal(HouseClass *this)
{
  int v2; // edx
  int bunkersCount; // ebp
  int *absorbersCount; // edi
  int v5; // ecx
  char result; // al

  v2 = 0; /*0x508f64*/
  BYTE1(this->HouseClass_field_timer_B[2]) = 0; /*0x508f67*/
  bunkersCount = this->bunkersCount; /*0x508f6e*/
  if ( bunkersCount <= 0 ) /*0x508f73*/
  {
LABEL_17:
    result = BYTE2(this->HouseClass_field_timer_B[2]); /*0x509002*/
    if ( result ) /*0x50900a*/
    {
      ShroudClass::Reset((ShroudClass *)&dword_87F7E8, (int)this); /*0x509012*/
      BYTE2(this->HouseClass_field_timer_B[2]) = 0; /*0x509017*/
      result = (char)dword_A83D4C; /*0x50901e*/
      if ( this == (HouseClass *)dword_A83D4C ) /*0x509025*/
        return PlayVocClass(dword_8871E0->TiberiumExplosionDamage, 0x2000, 1.0, 0); /*0x50903f*/
    }
    return result; /*0x50903f*/
  }
  absorbersCount = (int *)this->absorbersCount; /*0x508f79*/
  while ( 1 ) /*0x508f7c*/
  {
    v5 = *absorbersCount; /*0x508f7c*/
    if ( !*absorbersCount || !*(_BYTE *)(*(_DWORD *)(v5 + 1312) + 5797) || *(_BYTE *)(v5 + 129) || !*(_BYTE *)(v5 + 116) ) /*0x508f9b*/
      goto LABEL_16; /*0x508fa0*/
    if ( *(_DWORD *)&dword_A8B238 ) /*0x508fa9*/
    {
      if ( this != (HouseClass *)dword_A83D4C ) /*0x508fcc*/
        goto LABEL_14; /*0x508fcc*/
    }
    else if ( !this->currentPlayer[0] && !this->playerControl[0] ) /*0x508fbd*/
    {
      goto LABEL_14; /*0x508fbd*/
    }
    if ( !*(_BYTE *)(v5 + 1051) && !*(_DWORD *)&dword_A8B238 ) /*0x508fdf*/
      goto LABEL_16; /*0x508fdf*/
LABEL_14:
    if ( *(_DWORD *)(v5 + 172) != 19 && *(_DWORD *)(v5 + 180) != 19 ) /*0x508ff4*/
      break; /*0x508ff4*/
LABEL_16:
    ++v2; /*0x508ff6*/
    ++absorbersCount; /*0x508ff7*/
    if ( v2 >= bunkersCount ) /*0x508ffc*/
      goto LABEL_17; /*0x508ffc*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 468))(v5) ) /*0x50904a*/
    goto LABEL_17; /*0x509052*/
  result = BYTE2(this->HouseClass_field_timer_B[2]); /*0x509054*/
  if ( !result ) /*0x50905c*/
  {
    LayerClass::Reveal((LayerClass *)&dword_87F7E8, (int)this); /*0x509064*/
    BYTE2(this->HouseClass_field_timer_B[2]) = 1; /*0x509069*/
    result = (char)dword_A83D4C; /*0x509070*/
    if ( this == (HouseClass *)dword_A83D4C ) /*0x509077*/
      return PlayVocClass(dword_8871E0->ConditionYellowSparkingProbability[1], 0x2000, 1.0, 0); /*0x509090*/
  }
  return result; /*0x509044*/
}



// ==== 0x005090A0  TacticalClass::updateVisibility  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::updateVisibility(TacticalClass *this)
{
  int v1; // esi
  int *i; // edi
  int v3; // eax
  WaypointPathClass *v4; // eax

  v1 = 0; /*0x5090a2*/
  for ( i = &this->visibleCells[75]; ; ++i ) /*0x5090a4*/
  {
    v3 = *i; /*0x5090aa*/
    if ( !*i ) /*0x5090aa*/
    {
      v4 = (WaypointPathClass *)__2_YAPAXI_Z(0x40u); /*0x5090b2*/
      if ( v4 ) /*0x5090bc*/
        v3 = WaypointPathClass::Init(v4); /*0x5090c0*/
      else
        v3 = 0; /*0x5090c7*/
    }
    if ( !*(_DWORD *)(v3 + 56) ) /*0x5090c9*/
      break; /*0x5090c9*/
    if ( ++v1 >= 12 ) /*0x5090d7*/
      return -1; /*0x5090de*/
  }
  return v1; /*0x5090d9*/
}



// ==== 0x005090F0  Radar::IsRadarTargetEligible  this=Radar  sig=csp ====
bool __thiscall Radar::IsRadarTargetEligible(Radar *this)
{
  void *Radar_field_0x20C; // eax
  int v2; // eax

  Radar_field_0x20C = this->Radar_field_0x20C; /*0x5090f0*/
  if ( (unsigned int)Radar_field_0x20C >= 0xC ) /*0x5090f8*/
    return 0; /*0x50912a*/
  v2 = *((_DWORD *)this + (_DWORD)Radar_field_0x20C + 132); /*0x5090ff*/
  return *(_DWORD *)(v2 + 56) < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 144) /*0x509126*/
      && *(_DWORD *)(v2 + 36) == -1;
}



// ==== 0x00509130  HouseClass::AcquiredThreatNode  this=HouseClass  sig=csp ====
void __thiscall HouseClass::AcquiredThreatNode(HouseClass *this)
{
  this->hasThreatNode = 1; /*0x509130*/
}



// ==== 0x00509140  HouseClass::UpdateProduction  this=AbstractClass  sig=csp ====
int __thiscall HouseClass_UpdateProduction(int this, int a2, int a3, int a4)
{
  int result; // eax
  int v6; // esi
  int i; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax

  result = a2 - 3; /*0x509145*/
  switch ( a2 ) /*0x509161*/
  {
    case 3: /*0x509161*/
      v6 = *(_DWORD *)(this + 21420); /*0x50919b*/
      goto LABEL_10; /*0x50919b*/
    case 7: /*0x509161*/
      if ( a4 == 5 ) /*0x50916d*/
        v6 = *(_DWORD *)(this + 21452); /*0x50916f*/
      else
        v6 = *(_DWORD *)(this + 21436); /*0x509177*/
      goto LABEL_10; /*0x509175*/
    case 16: /*0x509161*/
      v6 = *(_DWORD *)(this + 21424); /*0x509193*/
      goto LABEL_10; /*0x509199*/
    case 40: /*0x509161*/
      if ( (_BYTE)a3 ) /*0x509181*/
        v6 = *(_DWORD *)(this + 21432); /*0x509183*/
      else
        v6 = *(_DWORD *)(this + 21428); /*0x50918b*/
LABEL_10:
      if ( v6 ) /*0x5091a3*/
      {
        for ( i = *(_DWORD *)(v6 + 80) - 1; i >= 0; --i ) /*0x5091ae*/
        {
          v8 = *(_DWORD *)(*(_DWORD *)(v6 + 68) + 4 * i); /*0x5091b8*/
          if ( !(*(int (__thiscall **)(int, int, _DWORD, int, int))(*(_DWORD *)v8 + 148))(v8, 1, 0, 1, this) ) /*0x5091bf*/
          {
            v9 = *(_DWORD *)(v6 + 80); /*0x5091c9*/
            if ( i < v9 ) /*0x5091ce*/
            {
              v10 = v9 - 1; /*0x5091d0*/
              v11 = i; /*0x5091d3*/
              for ( *(_DWORD *)(v6 + 80) = v10; /*0x5091da*/
                    v11 < *(_DWORD *)(v6 + 80);
                    *(_DWORD *)(*(_DWORD *)(v6 + 68) + 4 * v11 - 4) = *(_DWORD *)(*(_DWORD *)(v6 + 68) + 4 * v11) )
              {
                ++v11; /*0x5091df*/
              }
            }
          }
        }
        v12 = *(_DWORD *)(v6 + 88); /*0x5091f1*/
        if ( v12 ) /*0x5091f7*/
        {
          v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 132))(v12); /*0x5091ff*/
          if ( (*(int (__thiscall **)(int, int, _DWORD, int, int))(*(_DWORD *)v13 + 148))(v13, 1, 0, 1, this) ) /*0x509210*/
          {
            v14 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v6 + 88) + 132))(*(_DWORD *)(v6 + 88)); /*0x50922f*/
            if ( (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v14 + 148))(v14, 1, 1, 1, this) ) /*0x509240*/
            {
              if ( *(_BYTE *)(v6 + 112) && !*(_BYTE *)(v6 + 113) ) /*0x50927c*/
                ProductionClass::StartTimer(0); /*0x509287*/
            }
            else
            {
              FactoryClass::StartProduction(0); /*0x50924d*/
              if ( dword_A83D4C == (#375 *)this ) /*0x509258*/
              {
                v15 = globalHelper_0ABCD0(a3); /*0x509263*/
                Sidebar::ActivateTab((int)&dword_87F7E8, v15); /*0x50926e*/
              }
            }
          }
          else
          {
            BuildingClass::AbandonProduction(v6); /*0x50921c*/
            FactoryClass::StartProduction_2(v6); /*0x509223*/
          }
        }
        result = *(_DWORD *)(v6 + 88); /*0x50928c*/
        if ( !result ) /*0x509291*/
        {
          result = *(_DWORD *)(v6 + 80); /*0x509293*/
          if ( !result ) /*0x509298*/
            result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 32))(v6, 1); /*0x5092a0*/
        }
      }
      break; /*0x5092a0*/
    default:
      return result;
  }
  return result; /*0x5092a3*/
}



// ==== 0x005092F0  ObjectClass::method_5092F0  this=ObjectClass  sig=csp ====
int __thiscall sub_5092F0(TechnoClass *this, int a2)
{
  int result; // eax
  int i; // edi
  int *v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8[3]; // [esp+8h] [ebp-Ch] BYREF

  result = a2; /*0x5092f0*/
  *((_DWORD *)this + 5433) |= 1 << *(_DWORD *)(*(_DWORD *)(a2 + 52) + 184); /*0x509313*/
  if ( (Object *)a2 == dword_A83D4C ) /*0x509321*/
  {
    for ( i = 0; i < dword_A8EC88; ++i ) /*0x509330*/
    {
      v5 = (int *)*((_DWORD *)dword_A8EC7C + i); /*0x509337*/
      if ( v5 && !*((_BYTE *)v5 + 129) && (TechnoClass *)v5[135] == this ) /*0x50934e*/
      {
        v8[0] = v5[39]; /*0x509360*/
        v8[1] = v5[40]; /*0x50936a*/
        v6 = *v5; /*0x50936e*/
        v8[2] = v5[41]; /*0x509373*/
        v7 = (*(int (__thiscall **)(int *))(v6 + 132))(v5); /*0x509377*/
        MapClass::RevealArea0((MapClass *)&dword_87F7E8, v8, *(_DWORD *)(v7 + 1512), this, 0, 0, 0, 1, 1); /*0x50938e*/
      }
    }
    return MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 2); /*0x5093a4*/
  }
  return result; /*0x5093a9*/
}



// ==== 0x005093C0  ObjectClass::method_5093C0  this=ObjectClass  sig=csp ====
int __thiscall sub_5093C0(ObjectClass *this, int a2)
{
  int v2; // esi
  int result; // eax
  _DWORD *i; // edx

  v2 = *((_DWORD *)this + 5509); /*0x5093c2*/
  result = 0; /*0x5093c8*/
  if ( v2 > 0 ) /*0x5093cd*/
  {
    for ( i = (_DWORD *)*((_DWORD *)this + 5506); *i != a2; i += 2 ) /*0x5093d9*/
    {
      if ( ++result >= v2 ) /*0x5093e5*/
        return result; /*0x5093e5*/
    }
    return UpdateHouseClassAnger( /*0x5093f5*/
             (unsigned int)this,
             (int)i,
             -*(_DWORD *)(*((_DWORD *)this + 5506) + 8 * result + 4),
             a2);
  }
  return result; /*0x5093e7*/
}



// ==== 0x00509400  HouseClass::UpdateFogVisibility  this=HouseClass  sig=csp ====
int __thiscall HouseClass::UpdateFogVisibility(HouseClass *this)
{
  int result; // eax
  __int16 *v3; // esi
  int v4; // ebp
  int v5; // eax
  HouseClass *v6; // esi
  char currentPlayer; // cl
  int relatedTagsCount; // ecx
  int v9; // esi
  int v10; // edi
  int v11; // edx
  int v12; // ecx
  bool v13; // sf
  int *v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // edi
  int v19; // edx
  int v20; // ecx
  int *v21; // ecx
  int i; // [esp+8h] [ebp-4h]

  memset(&this->threatPosed_estimates_padding[1], 0, 0x10810u); /*0x509412*/
  result = *(_DWORD *)&stru_A8EB00.?[164] - 1; /*0x509419*/
  for ( i = *(_DWORD *)&stru_A8EB00.?[164] - 1; i >= 0; --i ) /*0x509420*/
  {
    v3 = *(__int16 **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * result); /*0x50942e*/
    if ( !*((_BYTE *)v3 + 129) ) /*0x509431*/
    {
      if ( *((_BYTE *)v3 + 144) ) /*0x50943f*/
      {
        v4 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v3 + 704))(v3); /*0x509457*/
        if ( v4 > 0 ) /*0x50945b*/
        {
          if ( ((*(int (__thiscall **)(__int16 *))(*(_DWORD *)v3 + 44))(v3) == 15 /*0x50948b*/
             || (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v3 + 44))(v3) == 1
             || (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v3 + 44))(v3) == 2)
            && v3 )
          {
            if ( v3[686] != *(_WORD *)&stru_A8EB00.?[948] || v3[687] != *(_WORD *)&stru_A8EB00.?[950] ) /*0x5094b2*/
            {
              v5 = Cell::PosToLinearIndex(v3 + 686); /*0x5094be*/
              v6 = (HouseClass *)*((_DWORD *)v3 + 135); /*0x5094c3*/
              if ( v6 != this ) /*0x5094cb*/
              {
                currentPlayer = this->currentPlayer; /*0x5094d9*/
                if ( !*(_DWORD *)&dword_A8B238 ) /*0x5094df*/
                  currentPlayer = currentPlayer || this->playerControl; /*0x5094f3*/
                if ( !currentPlayer /*0x50952c*/
                  || !v6
                  || v6 != this
                  && (relatedTagsCount = v6->relatedTagsCount, relatedTagsCount != this->relatedTagsCount)
                  && (relatedTagsCount == -1 || (this->HouseClass_field_timer_D[0] & (1 << relatedTagsCount)) == 0) )
                {
                  v9 = 0; /*0x509532*/
                  v10 = 9; /*0x509534*/
                  do /*0x509565*/
                  {
                    v11 = v4 >> dword_8243EC[v9]; /*0x509541*/
                    v12 = v5 + dword_8243C8[v9]; /*0x509549*/
                    v13 = v11 + this->threatPosed_estimates_padding[v12 + 1] < 0; /*0x50954b*/
                    this->threatPosed_estimates_padding[v12 + 1] += v11; /*0x50954b*/
                    v14 = &this->threatPosed_estimates_padding[v12 + 1]; /*0x509552*/
                    if ( v13 ) /*0x509559*/
                      *v14 = 0; /*0x50955b*/
                    ++v9; /*0x509561*/
                    --v10; /*0x509564*/
                  }
                  while ( v10 ); /*0x509565*/
                }
              }
            }
          }
          else
          {
            v15 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v3 + 444))(v3); /*0x50956d*/
            v16 = Cell::PosToLinearIndex((__int16 *)(v15 + 36)); /*0x50957c*/
            v17 = 0; /*0x509581*/
            v18 = 9; /*0x509583*/
            do /*0x5095b4*/
            {
              v19 = v4 >> dword_8243EC[v17]; /*0x509590*/
              v20 = v16 + dword_8243C8[v17]; /*0x509598*/
              v13 = v19 + this->threatPosed_estimates_padding[v20 + 1] < 0; /*0x50959a*/
              this->threatPosed_estimates_padding[v20 + 1] += v19; /*0x50959a*/
              v21 = &this->threatPosed_estimates_padding[v20 + 1]; /*0x5095a1*/
              if ( v13 ) /*0x5095a8*/
                *v21 = 0; /*0x5095aa*/
              ++v17; /*0x5095b0*/
              --v18; /*0x5095b3*/
            }
            while ( v18 ); /*0x5095b4*/
          }
        }
      }
    }
    result = i - 1; /*0x5095ba*/
  }
  return result; /*0x5095c7*/
}



// ==== 0x005095D0  TeamClass::CountActiveTeamsForType  this=TeamClass  sig=csp ====
int __thiscall TeamClass::CountActiveTeamsForType(TeamClass *this, int a2)
{
  int result; // eax
  WaveClass *waveEffect; // edi
  void **v4; // esi
  TeamClass **v5; // edx

  result = 0; /*0x5095d6*/
  if ( (int)FootClass_Array.?[-1].Cells + 3 >= 0 ) /*0x5095db*/
  {
    waveEffect = FootClass_Array.?; /*0x5095ea*/
    v4 = &FootClass_Array.?->ObjectClass + (int)FootClass_Array.?[-1].Cells + 3; /*0x5095ed*/
    do /*0x509605*/
    {
      v5 = (TeamClass **)*v4; /*0x5095f0*/
      if ( *v4 && v5[11] == this && (TeamClass *)a2 == v5[9] ) /*0x5095fe*/
        ++result; /*0x509600*/
      --v4; /*0x509601*/
      waveEffect = (WaveClass *)((char *)waveEffect - 1); /*0x509604*/
    }
    while ( waveEffect ); /*0x509605*/
  }
  return result; /*0x50960a*/
}



// ==== 0x00509610  TriggerClass::ValidateTeamTriggerConditions  this=TriggerClass  sig=csp ====
char __thiscall TriggerClass::ValidateTeamTriggerConditions(TriggerClass *this, int a2)
{
  int v2; // esi
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  TriggerClass **v7; // esi
  bool v8; // cc
  int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h]

  v2 = a2; /*0x509616*/
  if ( !a2 ) /*0x50961f*/
    return 0; /*0x50961f*/
  v4 = *(_DWORD *)(a2 + 228); /*0x509625*/
  if ( !v4 ) /*0x50962d*/
    return 0; /*0x5096f1*/
  v11 = 0; /*0x509639*/
  if ( *(int *)(v4 + 156) > 0 ) /*0x509643*/
  {
    v10 = 168; /*0x509649*/
    do /*0x509655*/
    {
      v5 = *(_DWORD *)(v10 + v4); /*0x509655*/
      if ( !v5 /*0x509667*/
        || !(*(int (__thiscall **)(int, int, int, _DWORD, TriggerClass *))(*(_DWORD *)v5 + 148))(v5, 1, 1, 0, this) )
      {
        if ( *(_DWORD *)&dword_A8B238 ) /*0x509678*/
          return 0; /*0x509678*/
        v6 = FootClass_Array.? - 1; /*0x50967f*/
        if ( FootClass_Array.? - 1 < 0 ) /*0x509684*/
          return 0; /*0x509684*/
        while ( 1 ) /*0x50968c*/
        {
          v7 = (TriggerClass **)*((_DWORD *)FootClass_Array.? + v6); /*0x50968c*/
          if ( v7[135] == this /*0x5096ab*/
            && v5 == ((int (__thiscall *)(_DWORD))(*v7)[1].timer[2])(*((_DWORD *)FootClass_Array.? + v6))
            && TriggerClass::EvaluateObjectForTrigger(a2, (int)v7, (int)this) )
          {
            break; /*0x5096ab*/
          }
          if ( --v6 < 0 ) /*0x5096b5*/
            return 0; /*0x5096b5*/
        }
        v2 = a2; /*0x5096b9*/
      }
      v4 = *(_DWORD *)(v2 + 228); /*0x5096bd*/
      v8 = ++v11 < *(_DWORD *)(v4 + 156); /*0x5096d5*/
      v10 += 8; /*0x5096db*/
    }
    while ( v8 ); /*0x509655*/
  }
  return 1; /*0x5096e5*/
}



// ==== 0x00509700  HouseClass::UpdateBuildState  this=HouseClass  sig=csp ====
char __thiscall HouseClass_UpdateBuildState(int this, int a2)
{
  int v3; // eax
  _DWORD *v4; // ecx
  char v5; // bl
  int v6; // edi
  int v7; // edi

  LOBYTE(v3) = *(_BYTE *)(this + 492); /*0x50970b*/
  if ( !dword_A8B238[0] ) /*0x509713*/
    LOBYTE(v3) = (_BYTE)v3 || *(_BYTE *)(this + 493); /*0x509727*/
  if ( (_BYTE)v3 || !dword_A8B238[0] ) /*0x509733*/
    return v3; /*0x509733*/
  v3 = *(_DWORD *)(this + 484); /*0x509739*/
  switch ( v3 ) /*0x509748*/
  {
    case 0: /*0x509748*/
      v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(this + 36) + 24))(this + 36); /*0x5098b2*/
      if ( v3 < *((_DWORD *)dword_8871E0 + 1216) ) /*0x5098c1*/
      {
        v3 = (a2 == 6) + 1; /*0x5098cf*/
        *(_DWORD *)(this + 484) = v3; /*0x5098d0*/
      }
      return v3; /*0x5098d0*/
    case 1: /*0x509748*/
      v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(this + 36) + 24))(this + 36); /*0x509756*/
      if ( v3 >= *((_DWORD *)dword_8871E0 + 1216) ) /*0x509765*/
        goto LABEL_34; /*0x509765*/
      if ( a2 == 6 ) /*0x509770*/
        *(_DWORD *)(this + 484) = 2; /*0x509776*/
      return v3; /*0x509783*/
    case 2: /*0x509748*/
      v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(this + 36) + 24))(this + 36); /*0x50978d*/
      v4 = dword_8871E0; /*0x509790*/
      if ( v3 >= *((_DWORD *)dword_8871E0 + 1216) ) /*0x50979c*/
        goto LABEL_34; /*0x50979c*/
      v5 = 0; /*0x5097a8*/
      v6 = 0; /*0x5097aa*/
      if ( *((int *)dword_8871E0 + 580) <= 0 ) /*0x5097ae*/
        goto LABEL_20; /*0x5097ae*/
      break; /*0x5097ae*/
    case 3: /*0x509748*/
      v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(this + 36) + 24))(this + 36); /*0x50988a*/
      if ( v3 > *((_DWORD *)dword_8871E0 + 1216) ) /*0x509899*/
LABEL_34:
        *(_DWORD *)(this + 484) = 0; /*0x50989b*/
      return v3; /*0x5098a8*/
    default:
      return v3;
  }
  do /*0x5097ec*/
  {
    if ( !v5 ) /*0x5097b2*/
    {
      if ( DynamicVector::GetOrGrow((_DWORD *)(this + 21840), *(_DWORD *)(*(_DWORD *)(v4[577] + 4 * v6) + 3576)) <= 0 ) /*0x5097d1*/
      {
        v4 = dword_8871E0; /*0x5097d3*/
        goto LABEL_19; /*0x5097d9*/
      }
      v4 = dword_8871E0; /*0x5097db*/
    }
    v5 = 1; /*0x5097e1*/
LABEL_19:
    ++v6; /*0x5097e3*/
  }
  while ( v6 < v4[580] ); /*0x5097ec*/
LABEL_20:
  LOBYTE(v3) = 0; /*0x5097ee*/
  v7 = 0; /*0x5097f6*/
  if ( (int)v4[594] <= 0 ) /*0x5097fa*/
  {
LABEL_31:
    if ( a2 != 6 ) /*0x509871*/
      *(_DWORD *)(this + 484) = 1; /*0x509873*/
    return v3; /*0x509880*/
  }
  while ( 2 ) /*0x5097fe*/
  {
    if ( !(_BYTE)v3 ) /*0x5097fe*/
    {
      if ( DynamicVector::GetOrGrow((_DWORD *)(this + 21840), *(_DWORD *)(*(_DWORD *)(v4[591] + 4 * v7) + 3576)) <= 0 ) /*0x50981d*/
      {
        v4 = dword_8871E0; /*0x50981f*/
        LOBYTE(v3) = 0; /*0x509825*/
        goto LABEL_26; /*0x509827*/
      }
      v4 = dword_8871E0; /*0x509829*/
    }
    LOBYTE(v3) = 1; /*0x50982f*/
LABEL_26:
    if ( ++v7 < v4[594] ) /*0x50983a*/
      continue; /*0x50983a*/
    break;
  }
  if ( !(_BYTE)v3 ) /*0x50983e*/
    goto LABEL_31; /*0x50983e*/
  if ( !v5 ) /*0x509842*/
    goto LABEL_31; /*0x509842*/
  v3 = *(_DWORD *)(this + 21412); /*0x50984a*/
  if ( *(_DWORD *)(this + 21416) > v3 ) /*0x509852*/
    goto LABEL_31; /*0x509852*/
  v3 = Random::Range((_DWORD *)dword_A8B230 + 134, 0, 1); /*0x509863*/
  if ( !v3 ) /*0x50986a*/
    goto LABEL_31; /*0x50986a*/
  return v3; /*0x509780*/
}



// ==== 0x005098F0  HouseClass::UpdateAITryFireSW  this=HouseClass  sig=csp ====
char __thiscall HouseClass::UpdateAITryFireSW(HouseClass *this)
{
  int lastBuiltInfantryType; // eax
  int i; // edi
  int v4; // eax
  bool v5; // zf
  int v6; // eax
  int *v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp+8h] [ebp-10h] BYREF
  int v12; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h] BYREF

  LOBYTE(lastBuiltInfantryType) = this->currentPlayer; /*0x5098fe*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x509904*/
    LOBYTE(lastBuiltInfantryType) = (_BYTE)lastBuiltInfantryType || this->playerControl; /*0x509918*/
  if ( !(_BYTE)lastBuiltInfantryType )
  {
    lastBuiltInfantryType = this->lastBuiltInfantryType; /*0x509922*/
    for ( i = 0; i < lastBuiltInfantryType; ++i )
    {
      v4 = *(_DWORD *)(this->supersCount + 4 * i); /*0x509939*/
      if ( v4 && *(_BYTE *)(v4 + 111) )
      {
        switch ( *(_DWORD *)(*(_DWORD *)(v4 + 40) + 180) )
        {
          case 0:
            v12 = *(_DWORD *)(this->supersCount + 4 * i); /*0x509968*/
            if ( this->enemyHouseIndex != -1 )
            {
              v5 = LOWORD(this->preferredTargetCell[0]) == *(_WORD *)&stru_A8EB00.?[948]; /*0x509980*/
              v11 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x509987*/
              if ( v5 && HIWORD(this->preferredTargetCell[0]) == *(_WORD *)&stru_A8EB00.?[950] )
              {
                v7 = this->preferredTargetType == 1
                   ? HouseClass::FindSWBuilding(this, &v13)
                   : HouseClass::FindSWTarget(this, &v14, this->preferredTargetType);
                v6 = *v7; /*0x5099cb*/
              }
              else
              {
                v6 = this->preferredTargetCell[0]; /*0x50999d*/
              }
              v11 = v6; /*0x5099d4*/
              if ( v6 != *(_DWORD *)&stru_A8EB00.?[948] ) /*0x5099d8*/
                goto LABEL_33; /*0x5099d8*/
            }
            break; /*0x5099d8*/
          case 2:
            HouseClass::Fire_LightningStorm((int)this, *(_DWORD *)(this->supersCount + 4 * i)); /*0x509a0d*/
            break; /*0x509a12*/
          case 5:
          case 6:
          case 8:
          case 0xB:
            HouseClass::Fire_ParaDrop(this, *(_DWORD *)(this->supersCount + 4 * i)); /*0x509a34*/
            break; /*0x509a39*/
          case 7:
            HouseClass::Fire_PsyDom((int)this, *(_DWORD *)(this->supersCount + 4 * i)); /*0x509a1a*/
            break; /*0x509a1f*/
          case 9:
            HouseClass::Fire_GenMutator((int)this, *(_DWORD *)(this->supersCount + 4 * i)); /*0x509a27*/
            break; /*0x509a2c*/
          case 0xA:
            v5 = LOWORD(this->preferredDefensiveCell2[0]) == *(_WORD *)&stru_A8EB00.?[948]; /*0x509a4b*/
            v12 = *(_DWORD *)(this->supersCount + 4 * i); /*0x509a52*/
            v11 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x509a56*/
            if ( !v5 || HIWORD(this->preferredDefensiveCell2[0]) != *(_WORD *)&stru_A8EB00.?[950] ) /*0x509a63*/
            {
              v8 = this->preferredDefensiveCell2[0]; /*0x509a65*/
              goto LABEL_32; /*0x509a6b*/
            }
            if ( (LOWORD(this->preferredDefensiveCell[0]) != *(_WORD *)&stru_A8EB00.?[948] /*0x509a99*/
               || HIWORD(this->preferredDefensiveCell[0]) != *(_WORD *)&stru_A8EB00.?[950])
              && *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3808)
               + this->preferredDefensiveCellStartTime > *(int *)&stru_A8EB00.?[416] )
            {
              v8 = this->preferredDefensiveCell[0]; /*0x509a9b*/
LABEL_32:
              v11 = v8; /*0x509aa1*/
              if ( v8 != *(_DWORD *)&stru_A8EB00.?[948] ) /*0x509aa8*/
              {
LABEL_33:
                v9 = (*(int (__thiscall **)(int *, int *))(this->supers[0] + 16))(this->supers, &v12); /*0x509aca*/
                SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)this, v9, (int)&v11); /*0x509acd*/
              }
              break; /*0x509acd*/
            }
            break; /*0x509acd*/
          default:
            break;
        }
      }
      lastBuiltInfantryType = this->lastBuiltInfantryType; /*0x509ad2*/
    }
  }
  return lastBuiltInfantryType; /*0x509ae2*/
}



// ==== 0x00509B20  HouseClass::Find  this=HouseClass  sig=csp ====
void __thiscall HouseClass::Find(HouseClass *this, char a2)
{
  bool v3; // zf
  int v4; // eax
  int *SWBuilding; // eax
  int v6; // eax
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF

  if ( this->enemyHouseIndex != -1 ) /*0x509b2d*/
  {
    v3 = LOWORD(this->preferredTargetCell[0]) == *(_WORD *)&stru_A8EB00.?[948]; /*0x509b38*/
    v7 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x509b3f*/
    if ( v3 && HIWORD(this->preferredTargetCell[0]) == *(_WORD *)&stru_A8EB00.?[950] ) /*0x509b53*/
    {
      if ( this->preferredTargetType == 1 ) /*0x509b66*/
        SWBuilding = HouseClass::FindSWBuilding(this, &v8); /*0x509b6f*/
      else
        SWBuilding = HouseClass::FindSWTarget(this, &v8, this->preferredTargetType); /*0x509b7e*/
      v4 = *SWBuilding; /*0x509b83*/
    }
    else
    {
      v4 = this->preferredTargetCell[0]; /*0x509b55*/
    }
    v7 = v4; /*0x509b8c*/
    if ( v4 != *(_DWORD *)&stru_A8EB00.?[948] ) /*0x509b90*/
    {
      v6 = (*(int (__thiscall **)(int *, char *))(this->supers[0] + 16))(this->supers, &a2); /*0x509bb5*/
      SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)this, v6, (int)&v7); /*0x509bbb*/
    }
  }
}



// ==== 0x00509C10  HouseClass::FireStoredSW  this=HouseClass  sig=csp ====
void __thiscall HouseClass::FireStoredSW(HouseClass *this, char a2)
{
  bool v3; // zf
  int v4; // eax
  int *SWBuilding; // eax
  int v6; // eax
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF

  if ( this->enemyHouseIndex != -1 ) /*0x509c1d*/
  {
    v3 = LOWORD(this->preferredTargetCell[0]) == *(_WORD *)&stru_A8EB00.?[948]; /*0x509c28*/
    v7 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x509c2f*/
    if ( v3 && HIWORD(this->preferredTargetCell[0]) == *(_WORD *)&stru_A8EB00.?[950] ) /*0x509c43*/
    {
      if ( this->preferredTargetType == 1 ) /*0x509c56*/
        SWBuilding = HouseClass::FindSWBuilding(this, &v8); /*0x509c5f*/
      else
        SWBuilding = HouseClass::FindSWTarget(this, &v8, this->preferredTargetType); /*0x509c6e*/
      v4 = *SWBuilding; /*0x509c73*/
    }
    else
    {
      v4 = this->preferredTargetCell[0]; /*0x509c45*/
    }
    v7 = v4; /*0x509c7c*/
    if ( v4 != *(_DWORD *)&stru_A8EB00.?[948] ) /*0x509c80*/
    {
      v6 = (*(int (__thiscall **)(int *, char *))(this->supers[0] + 16))(this->supers, &a2); /*0x509ca5*/
      SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)this, v6, (int)&v7); /*0x509cab*/
    }
  }
}



// ==== 0x00509CC0  nullsub_144  this=-  sig=csp ====
void __stdcall nullsub_144(int a1)
{
  ; /*0x509cc0*/
}



// ==== 0x00509CD0  HouseClass::Fire_ParaDrop  this=HouseClass  sig=csp ====
char __thiscall HouseClass::Fire_ParaDrop(HouseClass *this, char a2)
{
  HouseClass *v2; // esi
  int enemyHouseIndex; // eax
  __int16 v4; // dx
  bool v5; // zf
  int v6; // eax
  int v7; // edx
  char result; // al
  int v9; // eax
  int v10; // [esp+4h] [ebp-Ch] BYREF
  int v11; // [esp+8h] [ebp-8h] BYREF
  int v12; // [esp+Ch] [ebp-4h] BYREF

  v2 = this; /*0x509cd4*/
  enemyHouseIndex = this->enemyHouseIndex; /*0x509cd6*/
  if ( enemyHouseIndex != -1 ) /*0x509cdf*/
    this = (HouseClass *)*((_DWORD *)stru_A80220.? + enemyHouseIndex); /*0x509ce7*/
  v4 = *(_WORD *)&stru_A8EB00.?[948]; /*0x509cee*/
  v5 = LOWORD(v2->preferredTargetCell[0]) == *(_WORD *)&stru_A8EB00.?[948]; /*0x509cf5*/
  v10 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x509d03*/
  if ( v5 && HIWORD(v2->preferredTargetCell[0]) == *(_WORD *)&stru_A8EB00.?[950] ) /*0x509d10*/
  {
    if ( v2->preferredTargetType == 1 ) /*0x509d2a*/
    {
      if ( LOWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[948] /*0x509d51*/
        && HIWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[950] )
      {
        v6 = this->baseSpawnCell[0]; /*0x509d53*/
      }
      else
      {
        v6 = this->baseCenter[0]; /*0x509d5b*/
      }
      v10 = v6; /*0x509d69*/
      v11 = 0; /*0x509d90*/
      v7 = *LayerClass::Pathfinding_Find( /*0x509d9f*/
              &stru_87F5F0.__pad_58[416],
              0,
              &v12,
              (__int16 *)&v10,
              0,
              -1,
              0,
              0,
              5,
              5,
              0,
              0,
              0,
              1,
              (__int16 *)&v11,
              0,
              0);
      LOWORD(v10) = v7 + 2; /*0x509daa*/
      HIWORD(v10) = HIWORD(v7) + 2; /*0x509daf*/
    }
    else
    {
      v10 = *HouseClass::FindSWTarget(v2, &v11, v2->preferredTargetType); /*0x509d3b*/
    }
    v4 = *(_WORD *)&stru_A8EB00.?[948]; /*0x509db4*/
  }
  else
  {
    v10 = v2->preferredTargetCell[0]; /*0x509d18*/
  }
  if ( (_WORD)v10 != v4 || (result = stru_A8EB00.?[950], HIWORD(v10) != *(_WORD *)&stru_A8EB00.?[950]) ) /*0x509dcd*/
  {
    v9 = (*(int (__thiscall **)(int *, char *))(v2->supers[0] + 16))(v2->supers, &a2); /*0x509de5*/
    return SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)v2, v9, (int)&v10); /*0x509deb*/
  }
  return result; /*0x509df0*/
}



// ==== 0x00509E00  HouseClass::Fire_LightningStorm  this=HouseClass  sig=csp ====
char __thiscall HouseClass::Fire_LightningStorm(int this, char a2)
{
  char result; // al
  bool v4; // zf
  int v5; // eax
  int *SWBuilding; // eax
  int v7; // eax
  int v8; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h] BYREF

  result = LightningStorm::IsActive(); /*0x509e06*/
  if ( !result && *(_DWORD *)(this + 22016) != -1 ) /*0x509e1a*/
  {
    v4 = *(_WORD *)(this + 21744) == *(_WORD *)&stru_A8EB00.?[948]; /*0x509e25*/
    v8 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x509e2c*/
    if ( v4 && *(_WORD *)(this + 21746) == *(_WORD *)&stru_A8EB00.?[950] ) /*0x509e40*/
    {
      if ( *(_DWORD *)(this + 21740) == 1 ) /*0x509e53*/
        SWBuilding = HouseClass::FindSWBuilding((HouseClass *)this, &v9); /*0x509e5c*/
      else
        SWBuilding = HouseClass::FindSWTarget((HouseClass *)this, &v9, *(_DWORD *)(this + 21740)); /*0x509e6b*/
      v5 = *SWBuilding; /*0x509e70*/
    }
    else
    {
      v5 = *(_DWORD *)(this + 21744); /*0x509e42*/
    }
    v8 = v5; /*0x509e79*/
    if ( (_WORD)v5 != *(_WORD *)&stru_A8EB00.?[948] /*0x509e8a*/
      || (result = stru_A8EB00.?[950], HIWORD(v8) != *(_WORD *)&stru_A8EB00.?[950]) )
    {
      v7 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)(this + 596) + 16))(this + 596, &a2); /*0x509ea2*/
      return SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)this, v7, (int)&v8); /*0x509ea8*/
    }
  }
  return result; /*0x509ead*/
}



// ==== 0x00509F60  HouseClass::Fire_GenMutator  this=HouseClass  sig=csp ====
char __thiscall HouseClass::Fire_GenMutator(int this, char a2)
{
  __int16 v2; // ax
  int v4; // edi
  _BYTE *v5; // ecx
  int v6; // ebp
  char *v7; // edi
  __int16 v8; // dx
  WTFMode *v9; // eax
  _DWORD *ObjectByType; // esi
  int v11; // eax
  int v12; // ecx
  bool v13; // al
  int v14; // eax
  int v15; // eax
  __int16 v17[2]; // [esp+8h] [ebp-20h] BYREF
  int v18; // [esp+Ch] [ebp-1Ch]
  int v19; // [esp+10h] [ebp-18h]
  int v20; // [esp+14h] [ebp-14h]
  char v21[4]; // [esp+18h] [ebp-10h]
  int v22; // [esp+1Ch] [ebp-Ch]
  int v23; // [esp+20h] [ebp-8h]
  __int16 v24[2]; // [esp+24h] [ebp-4h] BYREF

  LOBYTE(v2) = stru_A8EB00.?[948]; /*0x509f63*/
  *(_DWORD *)v17 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x509f6c*/
  v19 = 0; /*0x509f70*/
  if ( *(_WORD *)(this + 21744) == *(_WORD *)&stru_A8EB00.?[948] )
  {
    v2 = *(_WORD *)(this + 21746); /*0x509f85*/
    if ( v2 == *(_WORD *)&stru_A8EB00.?[950] )
    {
      v4 = *(_DWORD *)&stru_A83D50.__pad_80[40] - 1; /*0x509f9f*/
      v23 = *(_DWORD *)&stru_A83D50.__pad_80[40] - 1; /*0x509fa4*/
      if ( *(_DWORD *)&stru_A83D50.__pad_80[40] - 1 >= 0 )
      {
        do
        {
          v18 = 0; /*0x509fb8*/
          v5 = *(_BYTE **)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * v4); /*0x509fbc*/
          if ( !v5[129] )
          {
            v21[0] = v5[140] != 0; /*0x509fdc*/
            v6 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 444))(v5); /*0x509fe9*/
            v22 = 0; /*0x509ff2*/
            v7 = &g_MissionQueueFrame.waypoints[2150]; /*0x50a000*/
            do
            {
              v8 = *(_WORD *)(v6 + 38) + *((_WORD *)v7 + 1); /*0x50a010*/
              LOWORD(v20) = *(_WORD *)v7 + *(_WORD *)(v6 + 36); /*0x50a014*/
              HIWORD(v20) = v8; /*0x50a01d*/
              *(_DWORD *)v24 = v20; /*0x50a02c*/
              v9 = (WTFMode *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x50a030*/
              ObjectByType = WTFMode::FindObjectByType(v9, v21[0]); /*0x50a041*/
              if ( ObjectByType )
              {
                do
                {
                  v11 = (*(int (__thiscall **)(_DWORD *))(*ObjectByType + 60))(ObjectByType); /*0x50a04f*/
                  if ( !v11
                    || v11 != this
                    && ((v12 = *(_DWORD *)(v11 + 48), v12 != *(_DWORD *)(this + 48))
                      ? (v12 == -1
                       ? (v13 = 0)
                       : (v13 = (*(_DWORD *)(this + 22408) & (1 << v12)) != 0))
                      : (v13 = 1),
                        !v13) )
                  {
                    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*ObjectByType + 84))(ObjectByType) ) /*0x50a08b*/
                      ++v18; /*0x50a092*/
                  }
                  ObjectByType = (_DWORD *)ObjectByType[12]; /*0x50a096*/
                }
                while ( ObjectByType && (*(int (__thiscall **)(_DWORD *))(*ObjectByType + 44))(ObjectByType) == 15 );
              }
              v7 += 4; /*0x50a0b4*/
              ++v22; /*0x50a0b9*/
            }
            while ( v22 <= 9 );
            v4 = v23; /*0x50a0c7*/
            if ( v18 > v19 ) /*0x50a0cf*/
            {
              v14 = *(_DWORD *)(v6 + 36); /*0x50a0d1*/
              v19 = v18; /*0x50a0d4*/
              *(_DWORD *)v17 = v14; /*0x50a0d8*/
            }
          }
          v23 = --v4; /*0x50a0dd*/
        }
        while ( v4 >= 0 );
        LOBYTE(v2) = v19; /*0x50a0e7*/
        if ( v19 && (v17[0] != *(_WORD *)&stru_A8EB00.?[948] || v17[1] != *(_WORD *)&stru_A8EB00.?[950]) ) /*0x50a10b*/
        {
          LOBYTE(v2) = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v17, 1); /*0x50a119*/
          if ( (_BYTE)v2 ) /*0x50a120*/
          {
            v15 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)(this + 596) + 16))(this + 596, &a2); /*0x50a138*/
            LOBYTE(v2) = SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)this, v15, (int)v17); /*0x50a13e*/
          }
        }
      }
    }
  }
  return v2; /*0x50a143*/
}



// ==== 0x0050A150  HouseClass::Fire_PsyDom  this=HouseClass  sig=csp ====
char __thiscall HouseClass::Fire_PsyDom(int this, char a2)
{
  __int16 v3; // ax
  bool v4; // zf
  int v5; // ebp
  _BYTE *v6; // ecx
  int v7; // ebx
  char *v8; // ebp
  __int16 v9; // dx
  ObjectClass *i; // eax
  TechnoClass *v11; // esi
  int v12; // eax
  int v13; // ecx
  int v15; // eax
  int v16; // eax
  __int16 v18[2]; // [esp+8h] [ebp-1Ch] BYREF
  int v19; // [esp+Ch] [ebp-18h]
  int v20; // [esp+10h] [ebp-14h]
  int v21; // [esp+14h] [ebp-10h]
  int v22; // [esp+18h] [ebp-Ch]
  int v23; // [esp+1Ch] [ebp-8h]
  __int16 v24[2]; // [esp+20h] [ebp-4h] BYREF

  LOBYTE(v3) = PsyDom::IsActive(); /*0x50a157*/
  if ( !(_BYTE)v3 && *(_DWORD *)(this + 22016) != -1 ) /*0x50a16b*/
  {
    LOBYTE(v3) = stru_A8EB00.?[948]; /*0x50a171*/
    v20 = 0; /*0x50a176*/
    v4 = *(_WORD *)(this + 21744) == *(_WORD *)&stru_A8EB00.?[948]; /*0x50a17e*/
    *(_DWORD *)v18 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50a185*/
    if ( v4 ) /*0x50a189*/
    {
      v3 = *(_WORD *)(this + 21746); /*0x50a18f*/
      if ( v3 == *(_WORD *)&stru_A8EB00.?[950] ) /*0x50a19d*/
      {
        v5 = FootClass_Array.? - 1; /*0x50a1a9*/
        v23 = FootClass_Array.? - 1; /*0x50a1ae*/
        if ( FootClass_Array.? - 1 >= 0 ) /*0x50a1b2*/
        {
          do /*0x50a2d7*/
          {
            v19 = 0; /*0x50a1c2*/
            v6 = (_BYTE *)*((_DWORD *)FootClass_Array.? + v5); /*0x50a1c6*/
            if ( !v6[129] ) /*0x50a1c9*/
            {
              v7 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 444))(v6); /*0x50a1df*/
              v22 = 0; /*0x50a1e8*/
              v8 = &g_MissionQueueFrame.waypoints[2150]; /*0x50a1f2*/
              do /*0x50a2b3*/
              {
                v9 = *(_WORD *)(v7 + 38) + *((_WORD *)v8 + 1); /*0x50a203*/
                LOWORD(v21) = *(_WORD *)(v7 + 36) + *(_WORD *)v8; /*0x50a207*/
                HIWORD(v21) = v9; /*0x50a210*/
                *(_DWORD *)v24 = v21; /*0x50a21f*/
                for ( i = (ObjectClass *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24) /*0x50a236*/
                                         + 57); i && (i->? & 4) != 0; i = v11->? )
                {
                  v11 = (TechnoClass *)i; /*0x50a238*/
                  v12 = (*((int (__thiscall **)(ObjectClass *))i->AbstractClass + 15))(i); /*0x50a242*/
                  if ( v12 ) /*0x50a247*/
                  {
                    if ( v12 == this ) /*0x50a24b*/
                      continue; /*0x50a24b*/
                    v13 = *(_DWORD *)(v12 + 48); /*0x50a24d*/
                    if ( v13 == *(_DWORD *)(this + 48) || v13 != -1 && ((1 << v13) & *(_DWORD *)(this + 22408)) != 0 ) /*0x50a26d*/
                      continue; /*0x50a276*/
                  }
                  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *))v11->RadioClass + 21))(v11) /*0x50a285*/
                    && TechnoClass::CanBePermaMC(v11) )
                  {
                    ++v19; /*0x50a28e*/
                  }
                }
                v8 += 4; /*0x50a2aa*/
                ++v22; /*0x50a2af*/
              }
              while ( v22 <= 37 ); /*0x50a2b3*/
              v5 = v23; /*0x50a2bd*/
              if ( v19 > v20 ) /*0x50a2c5*/
              {
                v15 = *(_DWORD *)(v7 + 36); /*0x50a2c7*/
                v20 = v19; /*0x50a2ca*/
                *(_DWORD *)v18 = v15; /*0x50a2ce*/
              }
            }
            v23 = --v5; /*0x50a2d3*/
          }
          while ( v5 >= 0 ); /*0x50a2d7*/
          LOBYTE(v3) = v20; /*0x50a2dd*/
          if ( v20 && (v18[0] != *(_WORD *)&stru_A8EB00.?[948] || v18[1] != *(_WORD *)&stru_A8EB00.?[950]) ) /*0x50a301*/
          {
            LOBYTE(v3) = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v18, 1); /*0x50a30f*/
            if ( (_BYTE)v3 ) /*0x50a316*/
            {
              v16 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)(this + 596) + 16))(this + 596, &a2); /*0x50a32e*/
              LOBYTE(v3) = SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)this, v16, (int)v18); /*0x50a334*/
            }
          }
        }
      }
    }
  }
  return v3; /*0x50a339*/
}



// ==== 0x0050A350  HouseClass::FireSuperWeaponAtBestTarget  this=HouseClass  sig=csp ====
char __thiscall HouseClass::FireSuperWeaponAtBestTarget(HouseClass *this, int a2)
{
  int enemyHouseIndex; // eax
  int v4; // edi
  int v5; // edx
  int v6; // ebx
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // eax
  int v13; // [esp+Ch] [ebp-1Ch]
  int v14; // [esp+Ch] [ebp-1Ch]
  int v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+14h] [ebp-14h] BYREF
  int v17; // [esp+18h] [ebp-10h] BYREF
  int v18[3]; // [esp+1Ch] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+28h] [ebp+0h] BYREF

  enemyHouseIndex = this->enemyHouseIndex; /*0x50a358*/
  if ( enemyHouseIndex != -1 ) /*0x50a361*/
  {
    v4 = 0; /*0x50a36d*/
    v15 = -1; /*0x50a36f*/
    v5 = *((_DWORD *)stru_A80220.? + enemyHouseIndex); /*0x50a377*/
    LOBYTE(enemyHouseIndex) = stru_A8EB00.ObjectTypeClass[20]; /*0x50a37a*/
    v16 = v5; /*0x50a37f*/
    v6 = stru_A8EB00.ObjectTypeClass[20] - 1; /*0x50a383*/
    if ( stru_A8EB00.ObjectTypeClass[20] - 1 >= 0 ) /*0x50a388*/
    {
      do /*0x50a41c*/
      {
        v7 = *(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * v6); /*0x50a399*/
        if ( *(_DWORD *)(v7 + 540) == v16 ) /*0x50a3a2*/
        {
          v8 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v7 + 72))(v7, v18); /*0x50a3ad*/
          LOWORD(v13) = *v8 / 256; /*0x50a3c1*/
          HIWORD(v13) = v8[1] / 256; /*0x50a3da*/
          v17 = v13; /*0x50a3e7*/
          enemyHouseIndex = CellClass::GetTileData((__int16 *)&v17, (int)this); /*0x50a3ec*/
          if ( *(_BYTE *)(v7 + 1773) == 15 ) /*0x50a3f8*/
            enemyHouseIndex = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 100); /*0x50a40a*/
          if ( enemyHouseIndex > v15 ) /*0x50a413*/
          {
            v15 = enemyHouseIndex; /*0x50a415*/
            v4 = v7; /*0x50a419*/
          }
        }
        --v6; /*0x50a41b*/
      }
      while ( v6 >= 0 ); /*0x50a41c*/
      if ( v4 ) /*0x50a425*/
      {
        v9 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 72))(v4); /*0x50a430*/
        LOWORD(v14) = *v9 / 256; /*0x50a443*/
        HIWORD(v14) = v9[1] / 256; /*0x50a45b*/
        v10 = this->supers[0]; /*0x50a464*/
        v16 = v14; /*0x50a46a*/
        v11 = (*(int (__thiscall **)(int *, _UNKNOWN **, int *))(v10 + 16))(this->supers, &retaddr, &v16); /*0x50a47a*/
        LOBYTE(enemyHouseIndex) = SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)this, v11, (int)v18); /*0x50a480*/
      }
    }
  }
  return enemyHouseIndex; /*0x50a485*/
}



// ==== 0x0050A490  HouseClass::RecordCratePlacement  this=HouseClass  sig=csp ====
char __thiscall HouseClass::RecordCratePlacement(HouseClass *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // ebx
  int v4; // edx
  _QWORD *i; // esi
  int v6; // edi
  int v7; // esi
  int v8; // edx
  int v9; // eax
  bool v10; // zf
  int v11; // eax
  int v13; // [esp+10h] [ebp-10h]

  LOBYTE(v2) = stru_A8EB00.?[391]; /*0x50a490*/
  if ( !stru_A8EB00.?[391] ) /*0x50a49e*/
  {
    v3 = 0; /*0x50a4a8*/
    v4 = this->base[11]; /*0x50a4d4*/
    v2 = a2[40] / 256; /*0x50a4dd*/
    if ( v4 > 0 ) /*0x50a4e2*/
    {
      for ( i = (_QWORD *)this->base[8]; *i != __PAIR64__(__PAIR32__(v2, a2[39] / 256), *(_DWORD *)(a2[328] + 3576)); i += 2 ) /*0x50a4ee*/
      {
        if ( ++v3 >= v4 ) /*0x50a510*/
          return v2; /*0x50a510*/
      }
      v6 = 16 * v3; /*0x50a520*/
      v7 = 0; /*0x50a523*/
      v13 = *(_DWORD *)(this->base[8] + 16 * v3 + 4); /*0x50a52b*/
      v8 = 0; /*0x50a531*/
      do /*0x50a56c*/
      {
        if ( v3 != v7 ) /*0x50a535*/
        {
          v9 = this->base[8]; /*0x50a537*/
          v10 = *(_WORD *)(v8 + v9 + 4) == (unsigned __int16)v13; /*0x50a542*/
          v11 = v8 + v9 + 4; /*0x50a547*/
          if ( v10 && *(_WORD *)(v11 + 2) == HIWORD(v13) ) /*0x50a556*/
            *(_DWORD *)v11 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50a55e*/
        }
        ++v7; /*0x50a566*/
        v8 += 16; /*0x50a567*/
      }
      while ( v7 < this->base[11] ); /*0x50a56c*/
      v2 = a2[328]; /*0x50a572*/
      if ( *(_BYTE *)(v2 + 5894) ) /*0x50a578*/
      {
        LOBYTE(v2) = dword_A8B238; /*0x50a582*/
        if ( *(_DWORD *)&dword_A8B238 ) /*0x50a589*/
        {
          *(_DWORD *)(v6 + this->base[8]) = -1; /*0x50a591*/
          v2 = this->base[8]; /*0x50a598*/
          *(_DWORD *)(v6 + v2 + 4) = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50a5a4*/
        }
      }
    }
  }
  return v2; /*0x50a5a8*/
}



// ==== 0x0050A5C0  HouseClass::AIBuildBase  this=HouseClass  sig=csp ====
char __thiscall HouseClass::AIBuildBase(HouseClass *this)
{
  int v2; // eax
  wchar_t *StringCSF; // eax
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // esi
  int *i; // ebx
  int v10; // edx
  int v11; // eax
  _DWORD *v12; // ecx
  _DWORD *v13; // edx
  char currentPlayer; // al
  int v15; // edi
  int v16; // eax
  int v17; // ebx
  int v18; // ecx
  int v19; // esi
  int v20; // edi
  int j; // esi
  int v22; // eax
  int v23; // eax
  int k; // edi
  int v25; // ecx
  int v26; // ebx
  _BYTE *v27; // ecx
  int v28; // ecx
  int v29; // edx
  _DWORD *v30; // eax
  int v31; // eax
  _DWORD *v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // edx
  char v36; // al
  int v37; // edx
  _DWORD *v38; // edx
  int v39; // esi
  int v40; // ecx
  _DWORD *v41; // ebx
  int v42; // ebx
  int v43; // eax
  int *v44; // edi
  int v45; // edx
  int v46; // ecx
  int *v47; // esi
  int v48; // eax
  int v49; // ecx
  int v50; // edi
  int v51; // eax
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // edx
  _DWORD *v56; // edi
  int v57; // ecx
  int v58; // edx
  int v59; // esi
  int v60; // edi
  char v61; // al
  int *v62; // edi
  int v63; // eax
  bool v64; // zf
  HouseClass *v66; // [esp+1Ch] [ebp-58h]
  int v67; // [esp+2Ch] [ebp-48h]
  int v68; // [esp+2Ch] [ebp-48h]
  int v69; // [esp+2Ch] [ebp-48h]
  int v70; // [esp+30h] [ebp-44h]
  int v71; // [esp+30h] [ebp-44h]
  int v72; // [esp+30h] [ebp-44h]
  int v73; // [esp+34h] [ebp-40h]
  int v74; // [esp+34h] [ebp-40h]
  int v75; // [esp+34h] [ebp-40h]
  int v76; // [esp+38h] [ebp-3Ch]
  int v77; // [esp+38h] [ebp-3Ch]
  int v78; // [esp+3Ch] [ebp-38h]
  int v79; // [esp+3Ch] [ebp-38h]
  int bunkersCount; // [esp+3Ch] [ebp-38h]
  int v81; // [esp+3Ch] [ebp-38h]
  int v82; // [esp+3Ch] [ebp-38h]
  int v83; // [esp+40h] [ebp-34h]
  int *v84; // [esp+40h] [ebp-34h]
  int *v85; // [esp+40h] [ebp-34h]
  int v86; // [esp+40h] [ebp-34h]
  int v87; // [esp+44h] [ebp-30h]
  int v88; // [esp+44h] [ebp-30h]
  int v89; // [esp+4Ch] [ebp-28h]
  char Destination[20]; // [esp+5Ch] [ebp-18h] BYREF
  char v91; // [esp+70h] [ebp-4h]

  LOBYTE(v2) = this->currentPlayer; /*0x50a5d0*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x50a5d6*/
    LOBYTE(v2) = (_BYTE)v2 || this->playerControl; /*0x50a5ea*/
  if ( !(_BYTE)v2 ) /*0x50a5ee*/
    return v2; /*0x50a5ee*/
  this->currentPlayer = 0; /*0x50a5f4*/
  this->playerControl = 0; /*0x50a5fb*/
  this->iqLevel2 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5172); /*0x50a614*/
  if ( g_INI_Key_Computer ) /*0x50a61a*/
  {
    strncpy(Destination, g_INI_Key_Computer, 0x14u); /*0x50a62e*/
    v91 = 0; /*0x50a636*/
  }
  else
  {
    Destination[0] = (unsigned __int8)g_INI_Key_Computer; /*0x50a61c*/
  }
  if ( Destination != &this->plainName[4] ) /*0x50a647*/
  {
    qmemcpy(&this->plainName[4], Destination, 0x14u); /*0x50a652*/
    this->uiNameString[3] = v91; /*0x50a654*/
  }
  StringCSF = GetStringCSF(g_Str_TXT_COMPUTER, 0, g_Str_File_House_CPP, 13744); /*0x50a666*/
  wcscpy((wchar_t *)&this->uiName[4], StringCSF); /*0x50a673*/
  v4 = *(_DWORD *)&stru_A83D50.__pad_C8[40] - 1; /*0x50a680*/
  if ( *(_DWORD *)&stru_A83D50.__pad_C8[40] - 1 >= 0 ) /*0x50a685*/
  {
    v5 = *(_DWORD *)&stru_A83D50.__pad_C8[28]; /*0x50a687*/
    do /*0x50a6c2*/
    {
      v6 = *(_DWORD *)(v5 + 4 * v4); /*0x50a68c*/
      if ( *(HouseClass **)(v6 + 108) == this ) /*0x50a692*/
      {
        FactoryClass::StartProduction((int *)v6, 1); /*0x50a696*/
        BuildingClass::AbandonProduction(*(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * v4)); /*0x50a6a4*/
        v5 = *(_DWORD *)&stru_A83D50.__pad_C8[28]; /*0x50a6a9*/
        v7 = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * v4); /*0x50a6ae*/
        if ( v7 ) /*0x50a6b3*/
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 32))(v7, 1); /*0x50a6b9*/
          v5 = *(_DWORD *)&stru_A83D50.__pad_C8[28]; /*0x50a6bc*/
        }
      }
      --v4; /*0x50a6c1*/
    }
    while ( v4 >= 0 ); /*0x50a6c2*/
  }
  HouseClass::SetCombatPower((int *)this, 2 - *(_DWORD *)&this->__pad_13C[72]); /*0x50a6d4*/
  v2 = this->bunkersCount - 1; /*0x50a6dc*/
  v67 = v2; /*0x50a6dd*/
  if ( v2 < 0 ) /*0x50a6e1*/
    return v2; /*0x50a6e1*/
  v8 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2236); /*0x50a6f4*/
  for ( i = (int *)(this->absorbersCount + 4 * v2); ; --i ) /*0x50a6fa*/
  {
    v10 = *i; /*0x50a6fd*/
    v11 = 0; /*0x50a6ff*/
    if ( v8 > 0 ) /*0x50a703*/
    {
      v12 = *(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2224); /*0x50a711*/
      while ( *v12 != *(_DWORD *)(v10 + 1312) ) /*0x50a719*/
      {
        ++v11; /*0x50a71b*/
        ++v12; /*0x50a71c*/
        if ( v11 >= v8 ) /*0x50a721*/
          goto LABEL_26; /*0x50a721*/
      }
      LOBYTE(v2) = *(_BYTE *)(v10 + 129); /*0x50a725*/
      if ( !(_BYTE)v2 ) /*0x50a72d*/
        break; /*0x50a72d*/
    }
LABEL_26:
    LOBYTE(v2) = --v67; /*0x50a736*/
    if ( v67 < 0 ) /*0x50a73d*/
      return v2; /*0x50a73d*/
  }
  if ( !v10 ) /*0x50a749*/
    return v2; /*0x50a749*/
  v13 = (_DWORD *)(v10 + 156); /*0x50a74f*/
  LOWORD(v78) = *v13 / 256; /*0x50a76d*/
  HIWORD(v78) = v13[1] / 256; /*0x50a780*/
  this->baseSpawnCell[0] = v78; /*0x50a789*/
  if ( *(_DWORD *)&dword_A8B238 ) /*0x50a796*/
    currentPlayer = this->currentPlayer; /*0x50a7a1*/
  else
    currentPlayer = House::IsHumanPlayer((House *)this); /*0x50a79a*/
  if ( !currentPlayer && *(_DWORD *)&dword_A8B238 ) /*0x50a7b2*/
    HouseClass::CanDetect(v66); /*0x50a7b4*/
  if ( !this->base[11] ) /*0x50a7b9*/
  {
    v15 = dword_A8E7AC; /*0x50a7c3*/
    dword_A8E7AC = 0; /*0x50a7cb*/
    HouseClass::GenerateAIBuildListEnsureSanity(this); /*0x50a7d5*/
    dword_A8E7AC = v15; /*0x50a7da*/
  }
  *(_DWORD *)(this->base[8] + 4) = v78; /*0x50a7e6*/
  this->damageDelayTimer[1] = v78; /*0x50a7e9*/
  this->production = 1; /*0x50a7ef*/
  this->aiTriggersActive = 1; /*0x50a7f6*/
  this->autoBaseBuilding = 1; /*0x50a7fd*/
  v16 = this->base[11] - 1; /*0x50a80a*/
  if ( v16 >= 0 ) /*0x50a80b*/
  {
    v17 = 16 * v16; /*0x50a813*/
    v76 = this->base[11]; /*0x50a817*/
    do /*0x50a8d3*/
    {
      v18 = this->base[8]; /*0x50a81b*/
      v19 = *(_DWORD *)(v17 + v18); /*0x50a821*/
      if ( v19 >= 0 && DynamicVector::GetOrGrow((DynamicVector *)this->ownedInfantryTypes2, *(_DWORD *)(v17 + v18)) > 0 ) /*0x50a83a*/
      {
        v20 = this->bunkersCount - 1; /*0x50a849*/
        for ( j = *((_DWORD *)dword_A83C6C + v19); v20 >= 0; --v20 ) /*0x50a84d*/
        {
          v22 = *(_DWORD *)(this->absorbersCount + 4 * v20); /*0x50a852*/
          if ( !*(_BYTE *)(v22 + 129) /*0x50a87d*/
            && (*(_DWORD *)(v22 + 1312) == j
             || *(_DWORD *)(v22 + 1516) == j
             || *(_DWORD *)(v22 + 1520) == j
             || *(_DWORD *)(v22 + 1524) == j) )
          {
            LOWORD(v79) = *(_DWORD *)(v22 + 156) / 256; /*0x50a89e*/
            HIWORD(v79) = *(_DWORD *)(v22 + 160) / 256; /*0x50a8b1*/
            *(_DWORD *)(v17 + this->base[8] + 4) = v79; /*0x50a8c0*/
          }
        }
      }
      v17 -= 16; /*0x50a8cb*/
      --v76; /*0x50a8cf*/
    }
    while ( v76 ); /*0x50a8d3*/
  }
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x50a8de*/
  v23 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x50a8e8*/
  for ( k = 0; v23; v23 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) ) /*0x50a8f1*/
  {
    if ( *(_DWORD *)(v23 + 80) == this->relatedTagsCount ) /*0x50a8fb*/
    {
      v25 = *(_DWORD *)(v23 + 68); /*0x50a8fd*/
      if ( v25 != -1 ) /*0x50a903*/
      {
        if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v25) + 680) ) /*0x50a90e*/
          BuildingClass::Capture((BuildingClass *)this, (__int16 *)(v23 + 36), 1); /*0x50a920*/
      }
    }
  }
  v68 = 0; /*0x50a936*/
  bunkersCount = this->bunkersCount; /*0x50a93c*/
  if ( bunkersCount > 0 ) /*0x50a940*/
  {
    do /*0x50ab9f*/
    {
      v26 = *(_DWORD *)(this->absorbersCount + 4 * v68); /*0x50a94d*/
      if ( !*(_BYTE *)(v26 + 129) ) /*0x50a950*/
      {
        v27 = *(_BYTE **)(v26 + 1312); /*0x50a95e*/
        if ( v27[5894] /*0x50a988*/
          || v27 == *(_BYTE **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2172) && *(char *)(v26 + 1794) > 0 )
        {
          if ( (*(int (__thiscall **)(_BYTE *, int, _DWORD, int, HouseClass *))(*(_DWORD *)v27 + 148))( /*0x50a997*/
                 v27,
                 1,
                 0,
                 1,
                 this) )
          {
            v28 = this->base[11]; /*0x50a9a5*/
            if ( k < v28 ) /*0x50a9ad*/
            {
              v29 = this->base[8]; /*0x50a9b3*/
              v30 = (_DWORD *)(v29 + 16 * k); /*0x50a9be*/
              while ( *v30 != -1 ) /*0x50a9c3*/
              {
                ++k; /*0x50a9c5*/
                v30 += 4; /*0x50a9c6*/
                if ( k >= v28 ) /*0x50a9cb*/
                  goto LABEL_79; /*0x50a9cb*/
              }
              v31 = *(_DWORD *)(v26 + 1312); /*0x50a9d8*/
              if ( v31 == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2172) ) /*0x50a9e4*/
              {
                v32 = (_DWORD *)(v26 + 156); /*0x50a9ea*/
                Destination[8] = 0; /*0x50a9f0*/
                LOWORD(v73) = *(_DWORD *)(v26 + 156) / 256; /*0x50aa13*/
                HIWORD(v73) = *(_DWORD *)(v26 + 160) / 256; /*0x50aa2c*/
                v33 = this->base[11]; /*0x50aa45*/
                *(_DWORD *)Destination = *(_DWORD *)(*(_DWORD *)(v26 + 4 * *(char *)(v26 + 1794) + 1512) + 3576); /*0x50aa48*/
                v34 = this->base[9]; /*0x50aa4c*/
                if ( v33 < v34 /*0x50aa7d*/
                  || (BYTE1(this->base[10]) || !v34)
                  && (v35 = this->base[12], v35 > 0)
                  && (v36 = (*(int (__thiscall **)(int *, int, _DWORD))(this->base[7] + 8))(
                              &this->base[7],
                              v35 + v34,
                              0),
                      v32 = (_DWORD *)(v26 + 156),
                      v36) )
                {
                  v37 = this->base[11]; /*0x50aa7f*/
                  if ( k < v37 - 1 ) /*0x50aa87*/
                  {
                    memcpy( /*0x50aaab*/
                      (void *)(this->base[8] + 16 * (k + 2)),
                      (const void *)(this->base[8] + 16 * (k + 1)),
                      16 * (v37 + 0xFFFFFFF * (k + 1)));
                    v32 = (_DWORD *)(v26 + 156); /*0x50aab0*/
                  }
                  v38 = (_DWORD *)(16 * (k + 1) + this->base[8]); /*0x50aac0*/
                  *v38 = *(_DWORD *)Destination; /*0x50aac6*/
                  v38[1] = v73; /*0x50aacc*/
                  v38[2] = *(_DWORD *)&Destination[8]; /*0x50aad3*/
                  v38[3] = 0; /*0x50aad8*/
                  ++this->base[11]; /*0x50aadf*/
                }
                v39 = 16 * k; /*0x50aaf6*/
                *(_DWORD *)(v39 + this->base[8]) = *(_DWORD *)(*(_DWORD *)(v26 + 1312) + 3576); /*0x50aaf9*/
                LOWORD(v70) = *v32 / 256; /*0x50ab14*/
                HIWORD(v70) = v32[1] / 256; /*0x50ab2d*/
                *(_DWORD *)(v39 + this->base[8] + 4) = v70; /*0x50ab36*/
                ++k; /*0x50ab3a*/
              }
              else
              {
                v40 = 16 * k; /*0x50ab45*/
                v41 = (_DWORD *)(v26 + 156); /*0x50ab48*/
                *(_DWORD *)(v40 + v29) = *(_DWORD *)(v31 + 3576); /*0x50ab4e*/
                LOWORD(v83) = *v41 / 256; /*0x50ab69*/
                HIWORD(v83) = v41[1] / 256; /*0x50ab7c*/
                *(_DWORD *)(v40 + this->base[8] + 4) = v83; /*0x50ab8b*/
              }
              ++k; /*0x50ab8f*/
            }
          }
        }
      }
LABEL_79:
      ++v68; /*0x50ab90*/
    }
    while ( v68 < bunkersCount ); /*0x50ab9f*/
  }
  v42 = 0; /*0x50aba8*/
  v71 = 0; /*0x50abac*/
  v74 = 0; /*0x50abb0*/
  v81 = this->bunkersCount; /*0x50abb4*/
  v69 = 0; /*0x50abb8*/
  if ( v81 <= 0 ) /*0x50abbc*/
    goto LABEL_103; /*0x50abbc*/
  do /*0x50adfd*/
  {
    v43 = *(_DWORD *)(this->absorbersCount + 4 * v69); /*0x50abc9*/
    v77 = v43; /*0x50abcc*/
    if ( *(_BYTE *)(v43 + 129) ) /*0x50abd0*/
      goto LABEL_102; /*0x50abd0*/
    v84 = *(int **)(v43 + 1312); /*0x50abe6*/
    if ( v84[953] >= 0 ) /*0x50abf2*/
      goto LABEL_102; /*0x50abf2*/
    v44 = (int *)(v43 + 156); /*0x50abfa*/
    if ( __PAIR32__(*(_DWORD *)(v43 + 160) / 256, *(_DWORD *)(v43 + 156) / 256) == *(_DWORD *)(this->base[8] + 20) /*0x50ac69*/
      || !(*(int (__thiscall **)(int *, int, _DWORD, int, HouseClass *))(*v84 + 148))(v84, 1, 0, 1, this)
      || v42 >= this->base[11] )
    {
      goto LABEL_102; /*0x50ac69*/
    }
    v45 = v74; /*0x50ac75*/
    v46 = v71; /*0x50ac79*/
    v47 = (int *)(this->base[8] + 16 * v42); /*0x50ac82*/
    v85 = v47; /*0x50ac84*/
    while ( *v47 < 0 ) /*0x50ac8c*/
    {
LABEL_91:
      ++v42; /*0x50acbf*/
      v47 += 4; /*0x50acc4*/
      v85 = v47; /*0x50acc9*/
      if ( v42 >= this->base[11] ) /*0x50accd*/
      {
        v74 = v45; /*0x50accf*/
        v71 = v46; /*0x50acd3*/
        goto LABEL_102; /*0x50acd7*/
      }
    }
    v89 = *((_DWORD *)dword_A83C6C + *v47); /*0x50ac97*/
    v46 += *(_DWORD *)(v89 + 3808); /*0x50aca1*/
    v45 += *(_DWORD *)(v89 + 3812); /*0x50aca9*/
    if ( v42 <= 0 || v46 >= v45 + *((_DWORD *)this + 22573) ) /*0x50acb9*/
    {
      v47 = v85; /*0x50acbb*/
      goto LABEL_91; /*0x50acbb*/
    }
    v48 = *v44; /*0x50acdc*/
    v75 = v45; /*0x50acde*/
    v72 = v46; /*0x50ace5*/
    v49 = v44[1]; /*0x50aced*/
    Destination[8] = 0; /*0x50acff*/
    LOWORD(v87) = v48 / 256; /*0x50ad07*/
    v50 = v42 - 1; /*0x50ad15*/
    HIWORD(v87) = v49 / 256; /*0x50ad1d*/
    v51 = this->base[9]; /*0x50ad2c*/
    v52 = this->base[11]; /*0x50ad35*/
    *(_DWORD *)Destination = *(_DWORD *)(*(_DWORD *)(v77 + 1312) + 3576); /*0x50ad3a*/
    if ( v52 < v51 /*0x50ad5b*/
      || (BYTE1(this->base[10]) || !v51)
      && (v53 = this->base[12], v53 > 0)
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->base[7] + 8))(&this->base[7], v53 + v51, 0) )
    {
      v54 = this->base[11]; /*0x50ad62*/
      if ( v50 < v54 - 1 ) /*0x50ad6a*/
        memcpy( /*0x50ad8e*/
          (void *)(this->base[8] + 16 * (v50 + 2)),
          (const void *)(this->base[8] + 16 * v42),
          16 * (v54 + 0xFFFFFFF * v42));
      v55 = *(_DWORD *)&Destination[8]; /*0x50ad9e*/
      v56 = (_DWORD *)(this->base[8] + 16 * v42); /*0x50ada5*/
      *v56 = *(_DWORD *)Destination; /*0x50adab*/
      v56[1] = v87; /*0x50adad*/
      v56[2] = v55; /*0x50adb2*/
      v56[3] = 0; /*0x50adb5*/
      ++this->base[11]; /*0x50adbc*/
    }
    v71 = *(_DWORD *)(*(_DWORD *)(v77 + 1312) + 3808) + v72; /*0x50ade5*/
    v74 = v75 - *(_DWORD *)(v89 + 3812); /*0x50ade9*/
    ++v42; /*0x50aded*/
LABEL_102:
    ++v69; /*0x50adee*/
  }
  while ( v69 < v81 ); /*0x50adfd*/
LABEL_103:
  v2 = _strcmpi((char *)(this->relatedTagsCapacity + 36), (char *)&off_824FC4); /*0x50ae03*/
  if ( !v2 ) /*0x50ae19*/
  {
    LOBYTE(v2) = stru_A8EB00.ObjectTypeClass[20]; /*0x50ae1f*/
    v57 = 0; /*0x50ae24*/
    v58 = 0; /*0x50ae26*/
    v59 = 0; /*0x50ae28*/
    if ( stru_A8EB00.ObjectTypeClass[20] > 0 ) /*0x50ae2c*/
    {
      v86 = stru_A8EB00.ObjectTypeClass[20]; /*0x50ae38*/
      v82 = stru_A8EB00.ObjectTypeClass[17]; /*0x50ae3c*/
      do /*0x50aef9*/
      {
        v60 = *(_DWORD *)v82; /*0x50ae44*/
        if ( *(HouseClass **)(*(_DWORD *)v82 + 540) == this /*0x50ae72*/
          && !*(_BYTE *)(v60 + 129)
          && *(_DWORD *)(v60 + 1312) == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2204) )
        {
          v61 = *(_BYTE *)(v60 + 1794); /*0x50ae74*/
          if ( v61 > 0 ) /*0x50ae7c*/
          {
            v88 = v61; /*0x50ae8b*/
            do /*0x50aee3*/
            {
              if ( v57 < this->base[11] ) /*0x50ae95*/
              {
                v62 = (int *)(this->base[8] + 16 * v57); /*0x50aea2*/
                while ( 1 ) /*0x50aea4*/
                {
                  if ( *v62 >= 0 ) /*0x50aea8*/
                  {
                    v63 = *((_DWORD *)dword_A83C6C + *v62); /*0x50aeaa*/
                    v58 += *(_DWORD *)(v63 + 3808); /*0x50aead*/
                    v59 += *(_DWORD *)(v63 + 3812); /*0x50aeb3*/
                    if ( v57 > 0 && v58 < v59 + *((_DWORD *)this + 22573) ) /*0x50aec7*/
                      break; /*0x50aec7*/
                  }
                  ++v57; /*0x50aecf*/
                  v62 += 4; /*0x50aed0*/
                  if ( v57 >= this->base[11] ) /*0x50aed5*/
                    goto LABEL_119; /*0x50aed5*/
                }
                ++v57; /*0x50aed9*/
              }
LABEL_119:
              --v88; /*0x50aeda*/
            }
            while ( v88 ); /*0x50aee3*/
          }
        }
        LOBYTE(v2) = v86 - 1; /*0x50aef0*/
        v64 = v86 == 1; /*0x50aef0*/
        v82 += 4; /*0x50aef1*/
        --v86; /*0x50aef5*/
      }
      while ( !v64 ); /*0x50aef9*/
    }
  }
  return v2; /*0x50a73f*/
}



// ==== 0x0050AF10  SuperWeapon::UpdateSuperWeaponsOwnedHouseClass  this=SuperWeapon  sig=csp ====
int __thiscall SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(SuperWeapon *this)
{
  int result; // eax
  _BYTE *v3; // eax
  char HasPower; // bl
  int v5; // eax
  BuildingClass *v6; // edi
  int *Upgrades; // ecx
  int v8; // edx
  int v9; // eax
  _BYTE *v10; // ecx
  int v11; // edx
  int v12; // eax
  int Status; // esi
  int v14; // edi
  char v15; // [esp+8h] [ebp-Eh]
  bool v16; // [esp+9h] [ebp-Dh]
  int i; // [esp+Ah] [ebp-Ch]
  int j; // [esp+Eh] [ebp-8h]
  int v19; // [esp+12h] [ebp-4h]

  LOBYTE(result) = byte_A8E9A0; /*0x50af10*/
  if ( byte_A8E9A0 ) /*0x50af1d*/
  {
    v16 = dword_A83D4C == (Object *)this; /*0x50af31*/
    result = 0; /*0x50af36*/
    for ( i = 0; i < this->q264; ++i ) /*0x50af3a*/
    {
      v3 = *(_BYTE **)(this->q258 + 4 * result); /*0x50af4d*/
      if ( !v3[109] || (!v3[96] || v3[110] && v3[109]) && !this->u8_1F5 ) /*0x50af70*/
        goto LABEL_55; /*0x50af78*/
      HasPower = 0; /*0x50af84*/
      v15 = 0; /*0x50af88*/
      if ( !this->u8_1F5 ) /*0x50af7e*/
      {
        v5 = 0; /*0x50af99*/
        for ( j = 0; v5 < stru_A8EB00.ObjectTypeClass[20]; j = ++v5 ) /*0x50afa1*/
        {
          v6 = *(BuildingClass **)(stru_A8EB00.ObjectTypeClass[17] + 4 * v5); /*0x50afad*/
          if ( !v6->? && v6->? ) /*0x50afbe*/
          {
            v19 = (*((int (__stdcall **)(void **))v6->?->? + 4))(&v6->?->?); /*0x50afe3*/
            if ( v19 == (*(int (__stdcall **)(SuperWeapon *))(this->q004 + 16))(this + 4) ) /*0x50aff0*/
            {
              Upgrades = v6->Upgrades; /*0x50aff2*/
              v8 = 3; /*0x50aff8*/
              do /*0x50b02a*/
              {
                v9 = *Upgrades; /*0x50affd*/
                if ( *Upgrades && (*(_DWORD *)(v9 + 5872) == i || *(_DWORD *)(v9 + 5876) == i) ) /*0x50b015*/
                {
                  v15 = 1; /*0x50b019*/
                  if ( !HasPower ) /*0x50b01e*/
                    HasPower = v6->HasPower; /*0x50b020*/
                }
                ++Upgrades; /*0x50b026*/
                --v8; /*0x50b029*/
              }
              while ( v8 ); /*0x50b02a*/
              if ( BuildingClass::SWAvailable(v6) == i || BuildingClass::SW2Available(v6) == i ) /*0x50b044*/
              {
                v15 = 1; /*0x50b048*/
                if ( HasPower ) /*0x50b04d*/
                  break; /*0x50b04d*/
                HasPower = v6->HasPower; /*0x50b04f*/
              }
              if ( HasPower && v15 ) /*0x50b05f*/
                break; /*0x50b05f*/
            }
            v5 = j; /*0x50b061*/
          }
        }
      }
      v10 = *(_BYTE **)(*(_DWORD *)(this->q258 + 4 * i) + 40); /*0x50b078*/
      if ( v10[231] && !stru_A8B250.__pad_0[19] ) /*0x50b099*/
        v15 = 0; /*0x50b09b*/
      v11 = this->u32_53A4; /*0x50b0a0*/
      v12 = this->u32_53A8; /*0x50b0a6*/
      if ( v11 < v12 && v12 && (!v11 || (double)*((int *)this + 5353) / (double)*((int *)this + 5354) < 1.0) ) /*0x50b0d3*/
        HasPower = 0; /*0x50b0d5*/
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v10 + 64))(v10); /*0x50b0d9*/
      Status = HouseClass::GetStatus((HouseClass *)0x39, 0); /*0x50b0ea*/
      if ( !v15 || this->u8_1F5 ) /*0x50b0f4*/
      {
        if ( !SuperClass::Lose(*(SuperClass **)(this->q258 + 4 * i)) || !dword_A83D4C ) /*0x50b179*/
          goto LABEL_55; /*0x50b179*/
        if ( !v16 ) /*0x50b181*/
          goto LABEL_54; /*0x50b181*/
        if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1438] == i ) /*0x50b18e*/
LABEL_52:
          *(_DWORD *)&stru_87F5F0.__pad_E12[1438] = -1; /*0x50b190*/
LABEL_53:
        Sidebar::ActivateTab((int *)&stru_87F5F0.__pad_58[416], Status); /*0x50b19a*/
        goto LABEL_54; /*0x50b1a0*/
      }
      if ( HasPower ) /*0x50b100*/
      {
        v14 = i; /*0x50b12e*/
      }
      else
      {
        v14 = i; /*0x50b108*/
        if ( SuperWeapon::GetField10(*(SuperWeapon **)(this->q258 + 4 * i)) /*0x50b123*/
          && (unsigned __int8)SuperClass::SetOnHold(*(_DWORD *)(this->q258 + 4 * i), 1) )
        {
          goto LABEL_45; /*0x50b12a*/
        }
      }
      if ( !HasPower || !(unsigned __int8)SuperClass::SetOnHold(*(_DWORD *)(this->q258 + 4 * v14), 0) ) /*0x50b141*/
        goto LABEL_55; /*0x50b148*/
LABEL_45:
      if ( v16 ) /*0x50b150*/
      {
        if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1438] == v14 ) /*0x50b158*/
          goto LABEL_52; /*0x50b158*/
        goto LABEL_53; /*0x50b158*/
      }
LABEL_54:
      this->q1FC = 1; /*0x50b1a5*/
LABEL_55:
      result = i + 1; /*0x50b1ac*/
    }
  }
  return result; /*0x50b1c6*/
}



// ==== 0x0050B1D0  SuperWeapon::UpdateSuperWeaponsUnavailableHouseClass  this=SuperWeapon  sig=csp ====
char __thiscall SuperWeapon::UpdateSuperWeaponsUnavailableHouseClass(SuperWeapon *this)
{
  int v2; // eax
  int i; // edi
  int v4; // eax
  int j; // ebx
  BuildingClass *v6; // esi
  int v7; // edx
  int *Upgrades; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  char v13; // al
  int v14; // ecx
  int Status; // eax
  char v17; // [esp+Bh] [ebp-9h]

  LOBYTE(v2) = this->u8_1F5; /*0x50b1d7*/
  if ( !(_BYTE)v2 ) /*0x50b1df*/
  {
    v2 = this->q264; /*0x50b1e5*/
    for ( i = 0; i < v2; ++i ) /*0x50b1ef*/
    {
      v4 = *(_DWORD *)(this->q258 + 4 * i); /*0x50b1fd*/
      if ( !*(_BYTE *)(v4 + 109) || *(_BYTE *)(v4 + 110) && *(_BYTE *)(v4 + 109) ) /*0x50b212*/
      {
        v17 = 0; /*0x50b220*/
        for ( j = this->q078 - 1; j >= 0; --j ) /*0x50b225*/
        {
          v6 = *(BuildingClass **)(this->u32_6C + 4 * j); /*0x50b22b*/
          if ( v6->? && !v6->? ) /*0x50b238*/
          {
            v7 = 0; /*0x50b242*/
            Upgrades = v6->Upgrades; /*0x50b244*/
            while ( 1 ) /*0x50b24a*/
            {
              v9 = *Upgrades; /*0x50b24a*/
              if ( *Upgrades ) /*0x50b24a*/
              {
                if ( *(_DWORD *)(v9 + 5872) == i || *(_DWORD *)(v9 + 5876) == i ) /*0x50b25e*/
                  break; /*0x50b25e*/
              }
              ++v7; /*0x50b260*/
              ++Upgrades; /*0x50b261*/
              if ( v7 >= 3 ) /*0x50b267*/
                goto LABEL_16; /*0x50b267*/
            }
            v17 = 1; /*0x50b26b*/
LABEL_16:
            if ( BuildingClass::SWAvailable(v6) == i || BuildingClass::SW2Available(v6) == i ) /*0x50b284*/
            {
              v17 = 1; /*0x50b293*/
              break; /*0x50b293*/
            }
            if ( v17 ) /*0x50b28c*/
              break; /*0x50b28c*/
          }
        }
        v10 = *(_DWORD *)(this->q258 + 4 * i); /*0x50b298*/
        if ( (!*(_BYTE *)(*(_DWORD *)(v10 + 40) + 231) || stru_A8B250.__pad_0[19]) && v17 ) /*0x50b2c1*/
        {
          v11 = this->u32_53A4; /*0x50b2c7*/
          v12 = this->u32_53A8; /*0x50b2cd*/
          v13 = v11 < v12 && v12 && (!v11 || (double)*((int *)this + 5353) / (double)*((int *)this + 5354) < 1.0); /*0x50b303*/
          SuperClass::StartTimer(v10, 0, this == (SuperWeapon *)dword_A83D4C, v13); /*0x50b314*/
          if ( this == (SuperWeapon *)dword_A83D4C ) /*0x50b31f*/
          {
            SidebarClass::AddCameo((SidebarClass *)&stru_87F5F0.__pad_58[416], 31, i); /*0x50b329*/
            v14 = *(_DWORD *)(*(_DWORD *)(this->q258 + 4 * i) + 40); /*0x50b337*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 64))(v14); /*0x50b33c*/
            Status = HouseClass::GetStatus((HouseClass *)0x39, 0); /*0x50b348*/
            Sidebar::ActivateTab((int *)&stru_87F5F0.__pad_58[416], Status); /*0x50b353*/
          }
        }
      }
      v2 = this->q264; /*0x50b358*/
    }
  }
  return v2; /*0x50b369*/
}



// ==== 0x0050B370  HouseClass::ShouldDisableCameo  this=HouseClass  sig=csp ====
char __thiscall HouseClass::ShouldDisableCameo(HouseClass *this, int a2)
{
  HouseClass *v3; // ebp
  int v4; // edx
  int v5; // ebx
  FactoryClass *primaryForShips; // edi
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int i; // ebx
  int v14; // edi
  int v15; // esi
  bool v16; // cc
  int v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // esi
  int v21; // ebx
  DynamicVector *v22; // ebp
  int v23; // ecx
  int v24; // eax
  int v26; // edi
  int v27; // eax
  int v28; // [esp-4h] [ebp-1Ch]
  int v29; // [esp-4h] [ebp-1Ch]
  int v30; // [esp-4h] [ebp-1Ch]
  int v31; // [esp+10h] [ebp-8h]
  char v33; // [esp+1Ch] [ebp+4h]
  int v34; // [esp+1Ch] [ebp+4h]
  int v35; // [esp+1Ch] [ebp+4h]

  v3 = this; /*0x50b37a*/
  if ( a2 ) /*0x50b383*/
  {
    v4 = *(_DWORD *)a2; /*0x50b38f*/
    v5 = 0; /*0x50b391*/
    v31 = 0; /*0x50b395*/
    v33 = *(_BYTE *)(a2 + 3278); /*0x50b399*/
    switch ( (*(int (__thiscall **)(int))(v4 + 44))(a2) ) /*0x50b3b2*/
    {
      case 1: /*0x50b3b2*/
      case 40: /*0x50b3b2*/
        if ( v33 ) /*0x50b444*/
          primaryForShips = v3->primaryForShips; /*0x50b446*/
        else
          primaryForShips = v3->primaryForVehicles; /*0x50b451*/
        goto LABEL_4; /*0x50b44c*/
      case 2: /*0x50b3b2*/
      case 3: /*0x50b3b2*/
        primaryForShips = v3->primaryForAircraft; /*0x50b467*/
        goto LABEL_4; /*0x50b46d*/
      case 6: /*0x50b3b2*/
      case 7: /*0x50b3b2*/
        primaryForShips = v3->primaryForBuildings; /*0x50b45c*/
        goto LABEL_4; /*0x50b462*/
      case 15: /*0x50b3b2*/
      case 16: /*0x50b3b2*/
        primaryForShips = v3->primaryForInfantry; /*0x50b3b9*/
LABEL_4:
        if ( primaryForShips ) /*0x50b3c1*/
        {
          v31 = FactoryClass::CountType(primaryForShips, a2); /*0x50b3cb*/
          v5 = v31; /*0x50b3cf*/
        }
        break; /*0x50b3cf*/
      default:
        primaryForShips = 0; /*0x50b472*/
        break; /*0x50b474*/
    }
    switch ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) ) /*0x50b3ec*/
    {
      case 3: /*0x50b3ec*/
        if ( *(_BYTE *)(a2 + 3597) ) /*0x50b570*/
        {
          v19 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x50b57a*/
          v20 = 0; /*0x50b57f*/
          v21 = 0; /*0x50b581*/
          v35 = 0; /*0x50b583*/
          if ( *(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2920) > 0 ) /*0x50b58d*/
          {
            v22 = (DynamicVector *)&v3->__pad_5564[40]; /*0x50b58f*/
            do /*0x50b5d7*/
            {
              v23 = *(_DWORD *)(*(_DWORD *)(v19 + 2908) + 4 * v20); /*0x50b59b*/
              v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 64))(v23); /*0x50b5a0*/
              v21 += DynamicVector::GetOrGrow(v22, v24); /*0x50b5ab*/
              if ( primaryForShips ) /*0x50b5af*/
                v35 += FactoryClass::CountType( /*0x50b5c7*/
                         primaryForShips,
                         *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2908) + 4 * v20));
              v19 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x50b5cb*/
              ++v20; /*0x50b5d0*/
            }
            while ( v20 < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2920) ); /*0x50b5d7*/
            v3 = this; /*0x50b5d9*/
          }
          return v21 + v35 >= v3->airportDocks; /*0x50b5eb*/
        }
        else
        {
          v26 = *(_DWORD *)(a2 + 952); /*0x50b5f9*/
          if ( v26 > 0 ) /*0x50b601*/
          {
            v30 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b63c*/
            v10 = DynamicVector::GetOrGrow((DynamicVector *)&v3->ownedAircraftTypes1[1], v30); /*0x50b643*/
            goto LABEL_46; /*0x50b643*/
          }
          v27 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b607*/
          return v5 + DynamicVector::GetOrGrow((DynamicVector *)&v3->__pad_5564[120], v27) >= (int)abs32(v26); /*0x50b623*/
        }
      case 7: /*0x50b3ec*/
        v17 = *(_DWORD *)(a2 + 952); /*0x50b525*/
        if ( v17 > 0 ) /*0x50b52d*/
        {
          v29 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b564*/
          v10 = DynamicVector::GetOrGrow((DynamicVector *)v3->ownedBuildingTypes, v29); /*0x50b56b*/
          goto LABEL_46; /*0x50b56b*/
        }
        v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b533*/
        return v5 + DynamicVector::GetOrGrow((DynamicVector *)&v3->__pad_5564[60], v18) >= (int)abs32(v17); /*0x50b54f*/
      case 16: /*0x50b3ec*/
        if ( *(int *)(a2 + 952) <= 0 ) /*0x50b481*/
        {
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b487*/
          if ( v5 + DynamicVector::GetOrGrow((DynamicVector *)&v3->__pad_5564[100], v11) >= (int)abs32(*(_DWORD *)(a2 + 952)) ) /*0x50b4a7*/
            return 1; /*0x50b4a7*/
        }
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b4b1*/
        v34 = DynamicVector::GetOrGrow((DynamicVector *)v3->ownedUnitTypes1, v12); /*0x50b4c0*/
        if ( *(_BYTE *)(a2 + 3782) ) /*0x50b4c4*/
        {
          for ( i = 0; i < FootClass_Array.?[2]; ++i ) /*0x50b4d7*/
          {
            v14 = *(_DWORD *)(FootClass_Array.? + 4 * i); /*0x50b4de*/
            if ( *(HouseClass **)(v14 + 540) == v3 /*0x50b4f6*/
              && *(_DWORD *)(v14 + 824) == (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2) )
            {
              ++v34; /*0x50b4f8*/
            }
          }
          v5 = v31; /*0x50b506*/
        }
        v15 = *(_DWORD *)(a2 + 952); /*0x50b50a*/
        if ( v15 <= 0 ) /*0x50b512*/
          return 0; /*0x50b512*/
        v16 = v5 + v34 < v15; /*0x50b51e*/
        goto LABEL_47; /*0x50b520*/
      case 40: /*0x50b3ec*/
        v8 = *(_DWORD *)(a2 + 952); /*0x50b3f3*/
        if ( v8 <= 0 ) /*0x50b3fb*/
        {
          v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b401*/
          return v5 + DynamicVector::GetOrGrow((DynamicVector *)&v3->__pad_5564[80], v9) >= (int)abs32(v8); /*0x50b41d*/
        }
        v28 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b432*/
        v10 = DynamicVector::GetOrGrow((DynamicVector *)&v3->ownedInfantryTypes[1], v28); /*0x50b439*/
LABEL_46:
        v16 = v5 + v10 < *(_DWORD *)(a2 + 952); /*0x50b648*/
LABEL_47:
        if ( v16 ) /*0x50b652*/
          return 0; /*0x50b663*/
        break; /*0x50b663*/
      default:
        return 0;
    }
  }
  return 1; /*0x50b5ed*/
}



// ==== 0x0050B6F0  House::IsHumanPlayer  this=House  sig=csp ====
int __thiscall House::IsHumanPlayer(House *this)
{
  if ( *(_DWORD *)&dword_A8B238 ) /*0x50b6f7*/
    return this == (House *)dword_A83D4C; /*0x50b720*/
  return LOBYTE(this->House_field_0x1EC) || BYTE1(this->House_field_0x1EC); /*0x50b70f*/
}



// ==== 0x0050B730  House::IsCurrentPlayer  this=House  sig=csp ====
int __thiscall House::IsCurrentPlayer(House *this)
{
  int result; // eax

  result = *(_DWORD *)&dword_A8B238; /*0x50b730*/
  LOBYTE(result) = this->House_field_0x1EC; /*0x50b737*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x50b73d*/
    LOBYTE(result) = (_BYTE)result || BYTE1(this->House_field_0x1EC); /*0x50b750*/
  return result; /*0x50b74f*/
}



// ==== 0x0050B760  BuildingTypeClass::ProcessData  this=BuildingTypeClass  sig=csp ====
char __thiscall BuildingTypeClass::ProcessData(BuildingTypeClass *this, _DWORD *a2, __int16 *a3)
{
  int *v5; // ebx
  int v6; // ebx
  int v7; // ebp
  __int16 *v8; // ecx
  int v9; // edi
  int v10; // esi
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  if ( !*(_DWORD *)&dword_A8B238 ) /*0x50b770*/
    return 1; /*0x50b77b*/
  v5 = a2; /*0x50b783*/
  v11 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5216); /*0x50b78f*/
  v12 = 2 * v11 + BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)a2); /*0x50b7a3*/
  v6 = 2 * v11 + BuildingTypeClass::GetFoundationHeight(v5, 0); /*0x50b7b1*/
  v7 = 1 << this->?; /*0x50b7b8*/
  v8 = a3; /*0x50b7ba*/
  v9 = *a3 - v11 - 1; /*0x50b7cd*/
  if ( v9 < *a3 + v12 + 1 ) /*0x50b7d0*/
  {
    while ( 1 ) /*0x50b7e2*/
    {
      v10 = v8[1] - v11 - 1; /*0x50b7e2*/
      if ( v10 < v8[1] + v6 + 1 ) /*0x50b7e5*/
        break; /*0x50b7e5*/
LABEL_8:
      if ( ++v9 >= *v8 + v12 + 1 ) /*0x50b82d*/
        return 0; /*0x50b82d*/
    }
    while ( 1 ) /*0x50b7eb*/
    {
      LOWORD(a2) = v9; /*0x50b7eb*/
      HIWORD(a2) = v10; /*0x50b7f6*/
      if ( (v7 & *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 55)) != 0 ) /*0x50b806*/
        return 1; /*0x50b806*/
      if ( ++v10 >= a3[1] + v6 + 1 ) /*0x50b81b*/
      {
        v8 = a3; /*0x50b81d*/
        goto LABEL_8; /*0x50b81d*/
      }
    }
  }
  return 0; /*0x50b772*/
}



// ==== 0x0050B840  HouseClass::GetColor  this=AbstractClass  sig=csp ====
char __thiscall HouseClass_GetColor(char *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  unsigned __int16 v6; // ax
  char result; // al
  char *v8; // esi
  __int16 v9; // [esp+4h] [ebp-4h]

  if ( *((int *)this + 22549) < 0 ) /*0x50b84c*/
    *((_DWORD *)this + 22549) = 5; /*0x50b84e*/
  v2 = *((_DWORD *)dword_B054D4 + *((_DWORD *)this + 22549)); /*0x50b863*/
  if ( !v2 ) /*0x50b868*/
  {
    Debug::Log(); /*0x50b87e*/
    *((_DWORD *)this + 22549) = 5; /*0x50b883*/
    v2 = *((_DWORD *)dword_B054D4 + 5); /*0x50b895*/
  }
  v3 = *(_DWORD *)(v2 + 816); /*0x50b898*/
  v4 = *(_DWORD *)(v2 + 780); /*0x50b89e*/
  v5 = *(_DWORD *)(v4 + 372); /*0x50b8aa*/
  if ( *(_DWORD *)(v4 + 4) == 1 ) /*0x50b8b0*/
    v6 = *(unsigned __int8 *)(v5 + v3); /*0x50b8b4*/
  else
    v6 = *(_WORD *)(v5 + 2 * v3); /*0x50b8bb*/
  LOBYTE(v9) = (unsigned __int8)(v6 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x50b8da*/
  HIBYTE(v9) = (unsigned __int8)(v6 >> g_BitMask_Green) << g_BitMask_Blue; /*0x50b8fb*/
  result = (unsigned __int8)(v6 >> g_BitShift_Blue) << g_BitMask_Red; /*0x50b8ff*/
  v8 = this + 22265; /*0x50b906*/
  *(_WORD *)v8 = v9; /*0x50b90c*/
  v8[2] = result; /*0x50b90f*/
  return result; /*0x50b912*/
}



// ==== 0x0050B920  globalHelper_00B920  this=-  sig=csp ====
void __fastcall sub_50B920(int a1, int a2, int a3)
{
  double v5; // st7
  double v6; // st6
  double v7; // st6
  double v8; // st7

  v5 = Math::Sqrt(*(double *)a1 * *(double *)a1 + *(double *)a3 * *(double *)a3 + *(double *)a2 * *(double *)a2); /*0x50b94d*/
  if ( v5 == 0.0 ) /*0x50b960*/
  {
    *(_DWORD *)a3 = 0; /*0x50b967*/
    *(_DWORD *)(a3 + 4) = 1081073664; /*0x50b96d*/
    *(_DWORD *)a2 = 0; /*0x50b970*/
    *(_DWORD *)(a2 + 4) = 1081073664; /*0x50b976*/
    *(_DWORD *)a1 = 0; /*0x50b979*/
    *(_DWORD *)(a1 + 4) = 1081073664; /*0x50b97f*/
  }
  else
  {
    v6 = *(double *)a1 * 240.0 / v5; /*0x50b997*/
    *(double *)a1 = v6; /*0x50b999*/
    if ( v6 > 255.0 ) /*0x50b9a6*/
    {
      *(_DWORD *)a1 = 0; /*0x50b9a8*/
      *(_DWORD *)(a1 + 4) = 1081073664; /*0x50b9ae*/
    }
    v7 = *(double *)a2 * 240.0 / v5; /*0x50b9b9*/
    *(double *)a2 = v7; /*0x50b9bb*/
    if ( v7 > 255.0 ) /*0x50b9c8*/
    {
      *(_DWORD *)a2 = 0; /*0x50b9ca*/
      *(_DWORD *)(a2 + 4) = 1081073664; /*0x50b9d0*/
    }
    v8 = *(double *)a3 * 240.0 / v5; /*0x50b9db*/
    *(double *)a3 = v8; /*0x50b9dd*/
    if ( v8 > 255.0 ) /*0x50b9ea*/
    {
      *(_DWORD *)a3 = 0; /*0x50b9ec*/
      *(_DWORD *)(a3 + 4) = 1081073664; /*0x50b9f2*/
    }
  }
}



// ==== 0x0050BA00  ObjectClass::ComputeSessionColorVector  this=ObjectClass  sig=csp ====
__int64 __thiscall ComputeSessionColorVector(ObjectClass *this)
{
  double v1; // st7
  __int64 result; // rax
  int v15; // kr00_4
  double v16; // [esp+0h] [ebp-28h]
  double v17; // [esp+0h] [ebp-28h]
  int v18; // [esp+10h] [ebp-18h]
  int v19; // [esp+10h] [ebp-18h]
  int v20; // [esp+10h] [ebp-18h]
  double v24; // [esp+18h] [ebp-10h]
  double v25; // [esp+18h] [ebp-10h]
  double v27; // [esp+20h] [ebp-8h]
  double v28; // [esp+20h] [ebp-8h]

  v18 = *((unsigned __int8 *)this + 22265); /*0x50ba1c*/
  __asm { fild dword ptr [esp+20h+var_18] } /*0x50ba22*/
  v19 = *((unsigned __int8 *)this + 22266); /*0x50ba2c*/
  __asm /*0x50ba33*/
  {
    fst [esp+28h+var_10]
    fild dword ptr [esp+28h+var_18]
  }
  v20 = *((unsigned __int8 *)this + 22267); /*0x50ba3b*/
  __asm /*0x50ba3f*/
  {
    fst [esp+28h+var_8]
    fild dword ptr [esp+28h+var_18]
    fst [esp+28h+var_18]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fld st(3)
    fmul st, st(4)
    faddp st(1), st
    fstp [esp+28h+var_28]; double
    fstp st
    fstp st
    fstp st
  }
  Math::Sqrt(v16); /*0x50ba64*/
  __asm { fcom ds:dbl_7E2800 } /*0x50ba69*/
  __asm { fnstsw ax }
  if ( (_AX & 0x4000) != 0 ) /*0x50ba77*/
  {
    __asm /*0x50ba79*/
    {
      fstp st
      fld ds:dbl_7EAA50
    }
    v27 = 255.0; /*0x50ba81*/
    __asm { fst [esp+20h+var_18] } /*0x50ba91*/
    v24 = 255.0; /*0x50ba95*/
  }
  else
  {
    __asm /*0x50baaa*/
    {
      fld [esp+20h+var_10]
      fmul ds:dbl_7E5F78
      fdiv st, st(1)
      fst [esp+20h+var_10]
      fcomp ds:dbl_7EAA50
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x50bac5*/
      v24 = 255.0; /*0x50bac7*/
    __asm /*0x50bad7*/
    {
      fld [esp+20h+var_8]
      fmul ds:dbl_7E5F78
      fdiv st, st(1)
      fst [esp+20h+var_8]
      fcomp ds:dbl_7EAA50
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x50baf2*/
      v27 = 255.0; /*0x50baf4*/
    __asm /*0x50bb04*/
    {
      fld [esp+20h+var_18]
      fmul ds:dbl_7E5F78
      fdivrp st(1), st
      fcom ds:dbl_7EAA50
      fst [esp+20h+var_18]
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x50bb1f*/
    {
      __asm /*0x50bb21*/
      {
        fstp st
        fld ds:dbl_7EAA50
        fst [esp+20h+var_18]
      }
    }
    __asm /*0x50bb2d*/
    {
      fld [esp+20h+var_10]
      fcomp ds:dbl_7EAA48
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x50bb3c*/
      v24 = 0.0; /*0x50bb3e*/
    __asm /*0x50bb4e*/
    {
      fld [esp+20h+var_8]
      fcomp ds:dbl_7EAA48
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x50bb5d*/
      v27 = 0.0; /*0x50bb5f*/
    __asm /*0x50bb6f*/
    {
      fcom ds:dbl_7EAA48
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x50bb7a*/
    {
      __asm /*0x50bb7c*/
      {
        fstp st
        fld ds:dbl_7E2800
        fst [esp+20h+var_18]
      }
    }
  }
  __asm /*0x50bb88*/
  {
    fld st
    fmul st, st(1)
    fld [esp+20h+var_8]
    fmul [esp+20h+var_8]
  }
  __asm
  {
    faddp st(1), st
    fld [esp+28h+var_10]
    fmul [esp+28h+var_10]
    faddp st(1), st
    fstp [esp+28h+var_28]; double
    fstp st
  }
  Math::Sqrt(v17); /*0x50bba8*/
  __asm { fcom ds:dbl_7E2800 } /*0x50bbad*/
  __asm { fnstsw ax }
  if ( (_AX & 0x4000) != 0 ) /*0x50bbbb*/
  {
    __asm /*0x50bbbd*/
    {
      fstp st
      fld ds:dbl_7EAA50
    }
    v28 = 255.0; /*0x50bbc5*/
    v25 = 255.0; /*0x50bbd5*/
  }
  else
  {
    __asm /*0x50bbe7*/
    {
      fld [esp+20h+var_10]
      fmul ds:dbl_7E5F78
      fdiv st, st(1)
      fst [esp+20h+var_10]
      fcomp ds:dbl_7EAA50
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x50bc02*/
      v25 = 255.0; /*0x50bc04*/
    __asm /*0x50bc14*/
    {
      fld [esp+20h+var_8]
      fmul ds:dbl_7E5F78
      fdiv st, st(1)
      fst [esp+20h+var_8]
      fcomp ds:dbl_7EAA50
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x50bc2f*/
      v28 = 255.0; /*0x50bc31*/
    __asm /*0x50bc41*/
    {
      fld [esp+20h+var_18]
      fmul ds:dbl_7E5F78
      fdivrp st(1), st
      fcom ds:dbl_7EAA50
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x50bc58*/
    {
      __asm /*0x50bc5a*/
      {
        fstp st
        fld ds:dbl_7EAA50
      }
    }
  }
  __asm { fld [esp+20h+var_10] } /*0x50bc62*/
  __asm { fld [esp+20h+var_8] }
  *((_BYTE *)this + 22268) = Math::RoundToInt(v1); /*0x50bc6f*/
  *((_BYTE *)this + 22269) = Math::RoundToInt(v1); /*0x50bc7a*/
  v15 = Math::RoundToInt(v1); /*0x50bc80*/
  WORD2(result) = HIWORD(v15); /*0x50bc80*/
  LOWORD(result) = v15; /*0x50bc80*/
  *((_BYTE *)this + 22270) = v15; /*0x50bc85*/
  return result; /*0x50bc8b*/
}



// ==== 0x0050BC90  HouseClass::CreatePowerOutage  this=HouseClass  sig=csp ====
int __thiscall HouseClass::CreatePowerOutage(int this, int a2)
{
  wchar_t *v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  v2 = dword_A8ED84; /*0x50bc90*/
  *(_BYTE *)(this + 22392) = 1; /*0x50bc9c*/
  *(_DWORD *)(this + 676) = v2; /*0x50bcaa*/
  *(_DWORD *)(this + 680) = v4; /*0x50bcb4*/
  *(_DWORD *)(this + 684) = a2; /*0x50bcb7*/
  return v4; /*0x50bcba*/
}



// ==== 0x0050BCD0  HouseClass::CreateRadarOutage  this=HouseClass  sig=csp ====
int __thiscall HouseClass::CreateRadarOutage(int this, int a2)
{
  wchar_t *v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  v2 = dword_A8ED84; /*0x50bcd0*/
  *(_BYTE *)(this + 22393) = 1; /*0x50bcdc*/
  *(_DWORD *)(this + 688) = v2; /*0x50bcea*/
  *(_DWORD *)(this + 692) = v4; /*0x50bcf4*/
  *(_DWORD *)(this + 696) = a2; /*0x50bcf7*/
  return v4; /*0x50bcfa*/
}



// ==== 0x0050BD10  HouseClass::ReshroudMap  this=HouseClass  sig=csp ====
char __thiscall HouseClass::ReshroudMap(HouseClass *this)
{
  char result; // al

  result = BYTE2(this->HouseClass_field_timer_B[2]); /*0x50bd10*/
  if ( !result ) /*0x50bd18*/
    return ShroudClass::Reset((ShroudClass *)&stru_87F5F0.__pad_58[416], (int)this); /*0x50bd20*/
  return result; /*0x50bd25*/
}



// ==== 0x0050BD30  TechnoClass::GetDamageMultiplier  this=TOP  sig=csp ====
double __thiscall TechnoClass::GetDamageMultiplier(TechnoClass *this, _DWORD *a2)
{
  double result; // st7

  switch ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) ) /*0x50bd4f*/
  {
    case 3: /*0x50bd4f*/
      result = *(float *)&this->?[4].firstTrigger; /*0x50bd77*/
      break; /*0x50bd7d*/
    case 7: /*0x50bd4f*/
      if ( a2[898] == 5 ) /*0x50bd87*/
        result = *(float *)this->?[4].defaultCoords; /*0x50bd8e*/
      else
        result = *(float *)&this->?[4].instanceCount; /*0x50bd9c*/
      break; /*0x50bd94*/
    case 16: /*0x50bd4f*/
      result = *(float *)&this->?[4].?; /*0x50bd5b*/
      break; /*0x50bd61*/
    case 40: /*0x50bd4f*/
      result = *(float *)&this->?[4].buildingType; /*0x50bd69*/
      break; /*0x50bd6f*/
    default:
      result = 1.0; /*0x50bda5*/
      break; /*0x50bda5*/
  }
  return result; /*0x50bdab*/
}



// ==== 0x0050BDF0  TechnoTypeClass::Dispatch  this=TechnoTypeClass  sig=csp ====
double __thiscall TechnoTypeClass::Dispatch(TechnoTypeClass *this, _DWORD *a2)
{
  double result; // st7

  switch ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) ) /*0x50be0f*/
  {
    case 3: /*0x50be0f*/
      result = *(float *)(this->ObjectTypeClass[13] + 284); /*0x50be37*/
      break; /*0x50be3d*/
    case 7: /*0x50be0f*/
      if ( a2[898] == 5 ) /*0x50be47*/
        result = *(float *)(this->ObjectTypeClass[13] + 292); /*0x50be4e*/
      else
        result = *(float *)(this->ObjectTypeClass[13] + 288); /*0x50be5c*/
      break; /*0x50be54*/
    case 16: /*0x50be0f*/
      result = *(float *)(this->ObjectTypeClass[13] + 276); /*0x50be1b*/
      break; /*0x50be21*/
    case 40: /*0x50be0f*/
      result = *(float *)(this->ObjectTypeClass[13] + 280); /*0x50be29*/
      break; /*0x50be2f*/
    default:
      result = 1.0; /*0x50be65*/
      break; /*0x50be65*/
  }
  return result; /*0x50be6b*/
}



// ==== 0x0050BEB0  TechnoTypeClass::GetThreatMultiplier  this=TechnoTypeClass  sig=csp ====
double __thiscall sub_50BEB0(float *this, _DWORD *a2)
{
  double result; // st7

  switch ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) ) /*0x50becf*/
  {
    case 3: /*0x50becf*/
      result = *(this + 5350); /*0x50beec*/
      break; /*0x50bef4*/
    case 7: /*0x50becf*/
      if ( a2[898] == 5 ) /*0x50befe*/
        result = *(this + 5352); /*0x50bf00*/
      else
        result = *(this + 5351); /*0x50bf0b*/
      break; /*0x50bf08*/
    case 16: /*0x50becf*/
      result = *(this + 5348); /*0x50bed6*/
      break; /*0x50bede*/
    case 40: /*0x50becf*/
      result = *(this + 5349); /*0x50bee1*/
      break; /*0x50bee9*/
    default:
      result = 1.0; /*0x50bf16*/
      break; /*0x50bf16*/
  }
  return result; /*0x50bedc*/
}



// ==== 0x0050BF60  HouseClass::CalculateCostMultipliers  this=AbstractClass  sig=csp ====
int __thiscall HouseClass::CalculateCostMultipliers(float *this)
{
  int result; // eax

  *(this + 5348) = 1.0; /*0x50bf65*/
  *(this + 5349) = 1.0; /*0x50bf6b*/
  *(this + 5350) = 1.0; /*0x50bf71*/
  *(this + 5351) = 1.0; /*0x50bf77*/
  *(this + 5352) = 1.0; /*0x50bf7d*/
  for ( result = 0; /*0x50bf8d*/
        result < this->u8_15;
        *(this + 5352) = *(float *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 81) + 4 * result - 4) + 1312) + 5856)
                       * *(this + 5352) )
  {
    ++result; /*0x50bf99*/
    *(this + 5348) = *(float *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 81) + 4 * result - 4) + 1312) + 5840) /*0x50bfb0*/
                   * *(this + 5348);
    *(this + 5349) = *(float *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 81) + 4 * result - 4) + 1312) + 5844) /*0x50bfd2*/
                   * *(this + 5349);
    *(this + 5350) = *(float *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 81) + 4 * result - 4) + 1312) + 5848) /*0x50bff4*/
                   * *(this + 5350);
    *(this + 5351) = *(float *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 81) + 4 * result - 4) + 1312) + 5852) /*0x50c016*/
                   * *(this + 5351);
  }
  return result; /*0x50c04a*/
}



// ==== 0x0050C050  TechnoClass::GetTargetSpeedMultiplier  this=TechnoClass  sig=csp ====
double __thiscall TechnoClass::GetTargetSpeedMultiplier(TechnoClass *this, int a2)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2); /*0x50c059*/
  switch ( v3 ) /*0x50c05f*/
  {
    case 3: /*0x50c05f*/
      return *(float *)&this->?[5].?; /*0x50c093*/
    case 16: /*0x50c05f*/
      return *(float *)&this->?[5].?; /*0x50c086*/
    case 40: /*0x50c05f*/
      return *(float *)&this->?[5].?; /*0x50c079*/
  }
  return 1.0; /*0x50c071*/
}



// ==== 0x0050C0A0  HouseClass::GetBuildingDamageMultiplier  this=HouseClass  sig=csp ====
double __thiscall HouseClass::GetBuildingDamageMultiplier(HouseClass *this, _DWORD *a2)
{
  double result; // st7

  switch ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) ) /*0x50c0bf*/
  {
    case 3: /*0x50c0bf*/
      result = *(float *)(this->relatedTagsCapacity + 316); /*0x50c0e7*/
      break; /*0x50c0ed*/
    case 7: /*0x50c0bf*/
      if ( a2[898] == 5 ) /*0x50c0f7*/
        result = *(float *)(this->relatedTagsCapacity + 324); /*0x50c0fe*/
      else
        result = *(float *)(this->relatedTagsCapacity + 320); /*0x50c10c*/
      break; /*0x50c104*/
    case 16: /*0x50c0bf*/
      result = *(float *)(this->relatedTagsCapacity + 308); /*0x50c0cb*/
      break; /*0x50c0d1*/
    case 40: /*0x50c0bf*/
      result = *(float *)(this->relatedTagsCapacity + 312); /*0x50c0d9*/
      break; /*0x50c0df*/
    default:
      result = 1.0; /*0x50c115*/
      break; /*0x50c115*/
  }
  return result; /*0x50c11b*/
}



// ==== 0x0050C160  ObjectClass::method_50C160  this=ObjectClass  sig=csp ====
double __thiscall sub_50C160(ObjectClass *this)
{
  return *(float *)this->attachedTag[5].defaultCoords; /*0x50c169*/
}



// ==== 0x0050C170  HouseClass::FindByName  this=INIClass  sig=csp ====
int __thiscall HouseClass_FindByName(const char *this)
{
  int v1; // edx
  char *i; // ebp
  char v4[20]; // [esp+14h] [ebp-14h] BYREF

  v1 = 0; /*0x50c17a*/
  if ( dword_A80238 <= 0 ) /*0x50c184*/
    return -1; /*0x50c1f8*/
  for ( i = (char *)dword_A8022C; ; i += 4 ) /*0x50c186*/
  {
    strcpy(v4, (const char *)(*(_DWORD *)i + 90100)); /*0x50c1ad*/
    if ( !strcmp(v4, this) ) /*0x50c1c4*/
      break; /*0x50c1c4*/
    if ( ++v1 >= dword_A80238 ) /*0x50c1f6*/
      return -1; /*0x50c1f6*/
  }
  return v1; /*0x50c1f8*/
}



// ==== 0x0050C210  HouseClass::SetPrimaryTechBuilding  this=HouseClass  sig=csp ====
void __thiscall HouseClass::SetPrimaryTechBuilding(HouseClass *this)
{
  int v1; // ebp
  int v2; // esi
  int *i; // ebx
  int v4; // edx
  int v5; // eax
  _DWORD *v6; // ecx
  _DWORD *v7; // edx
  char currentPlayer; // al
  int v9; // esi
  HouseClass *v10; // [esp+0h] [ebp-24h]
  int v11; // [esp+10h] [ebp-14h]

  v1 = this->bunkersCount - 1; /*0x50c219*/
  if ( v1 >= 0 ) /*0x50c21f*/
  {
    v2 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2236); /*0x50c22d*/
    for ( i = (int *)(this->absorbersCount + 4 * v1); ; --i ) /*0x50c233*/
    {
      v4 = *i; /*0x50c236*/
      v5 = 0; /*0x50c238*/
      if ( v2 > 0 ) /*0x50c23c*/
      {
        v6 = *(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2224); /*0x50c24a*/
        while ( *v6 != *(_DWORD *)(v4 + 1312) ) /*0x50c252*/
        {
          ++v5; /*0x50c254*/
          ++v6; /*0x50c255*/
          if ( v5 >= v2 ) /*0x50c25a*/
            goto LABEL_9; /*0x50c25a*/
        }
        if ( !*(_BYTE *)(v4 + 129) ) /*0x50c25e*/
          break; /*0x50c25e*/
      }
LABEL_9:
      if ( --v1 < 0 ) /*0x50c26e*/
        return; /*0x50c26e*/
    }
    if ( v4 ) /*0x50c27a*/
    {
      v7 = (_DWORD *)(v4 + 156); /*0x50c280*/
      LOWORD(v11) = *v7 / 256; /*0x50c2a2*/
      HIWORD(v11) = v7[1] / 256; /*0x50c2b5*/
      currentPlayer = this->currentPlayer; /*0x50c2be*/
      this->baseSpawnCell[0] = v11; /*0x50c2c4*/
      if ( !*(_DWORD *)&dword_A8B238 ) /*0x50c2d2*/
        currentPlayer = currentPlayer || this->playerControl; /*0x50c2e6*/
      if ( !currentPlayer && *(_DWORD *)&dword_A8B238 ) /*0x50c2ee*/
        HouseClass::CanDetect(v10); /*0x50c2f0*/
      if ( !this->base[11] ) /*0x50c2f5*/
      {
        v9 = dword_A8E7AC; /*0x50c2ff*/
        dword_A8E7AC = 0; /*0x50c307*/
        HouseClass::GenerateAIBuildListEnsureSanity(this); /*0x50c311*/
        dword_A8E7AC = v9; /*0x50c316*/
      }
      *(_DWORD *)(this->base[8] + 4) = v11; /*0x50c322*/
      this->damageDelayTimer[1] = v11; /*0x50c325*/
    }
  }
}



// ==== 0x0050C340  HouseClass::FindBuildLocation  this=HouseClass  sig=csp ====
char __thiscall HouseClass_FindBuildLocation(int this, int a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // edi
  int v9; // esi
  int v10; // esi
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int FoundationWidth; // ebp
  int FoundationHeight; // eax
  int v16; // ebx
  int v17; // esi
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int *v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ebp
  int v26; // ecx
  int v27; // edx
  int *v28; // ecx
  int v29; // eax
  int v30; // ebx
  int v31; // esi
  int v32; // ecx
  int v33; // eax
  int v34; // ebp
  int v35; // ecx
  int v36; // edx
  int *v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // ecx
  int v41; // edx
  int *v42; // ecx
  int v43; // eax
  __int16 v44; // bp
  _WORD *v45; // eax
  int v46; // eax
  _WORD *v47; // eax
  int v48; // eax
  _WORD *v49; // eax
  int v50; // eax
  int v52; // [esp+20h] [ebp-50h]
  int v53; // [esp+24h] [ebp-4Ch]
  int v55; // [esp+2Ch] [ebp-44h]
  int v56; // [esp+30h] [ebp-40h]
  int v57; // [esp+30h] [ebp-40h]
  int v58; // [esp+34h] [ebp-3Ch] BYREF
  _DWORD v59[2]; // [esp+38h] [ebp-38h] BYREF
  int v60; // [esp+40h] [ebp-30h]
  int v61; // [esp+44h] [ebp-2Ch]
  _DWORD v62[4]; // [esp+48h] [ebp-28h] BYREF
  int v63; // [esp+58h] [ebp-18h]
  int v64; // [esp+68h] [ebp-8h]

  v3 = 0; /*0x50c34e*/
  v4 = *((_DWORD *)dword_8871E0 + 664); /*0x50c350*/
  v52 = -1; /*0x50c35d*/
  if ( v4 > 0 ) /*0x50c365*/
  {
    v5 = *((_DWORD *)dword_8871E0 + 661); /*0x50c376*/
    while ( 1 ) /*0x50c37a*/
    {
      v6 = *(_DWORD *)(*(_DWORD *)v5 + 1744); /*0x50c37a*/
      if ( v6 == *(_DWORD *)(*(_DWORD *)(this + 52) + 188) || v6 == -1 ) /*0x50c387*/
        break; /*0x50c387*/
      ++v3; /*0x50c389*/
      v5 += 4; /*0x50c38a*/
      if ( v3 >= v4 ) /*0x50c38f*/
        goto LABEL_8; /*0x50c38f*/
    }
    v52 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_8871E0 + 661) + 4 * v3) + 3576); /*0x50c39d*/
  }
LABEL_8:
  v7 = 0; /*0x50c3a1*/
  v8 = a2 - 1; /*0x50c3a7*/
  if ( a2 - 1 >= 0 ) /*0x50c3ac*/
  {
    v9 = 16 * a2; /*0x50c3b7*/
    do /*0x50c3eb*/
    {
      v7 = BridgeClass::GetCellData(v8); /*0x50c3bd*/
      if ( v7 && *(_BYTE *)(*(_DWORD *)(v7 + 1312) + 5989) && *(_DWORD *)(*(_DWORD *)(this + 22280) + v9) != v52 ) /*0x50c3e3*/
        break; /*0x50c3e3*/
      --v8; /*0x50c3e5*/
      v9 -= 16; /*0x50c3e6*/
    }
    while ( v8 >= 0 ); /*0x50c3eb*/
  }
  if ( v8 == -1 ) /*0x50c3f0*/
    return 0; /*0x50c3f0*/
  if ( !v7 ) /*0x50c3f8*/
    return 0; /*0x50c3f8*/
  v10 = *(_DWORD *)(v7 + 1312); /*0x50c3fe*/
  if ( !*(_BYTE *)(v10 + 5989) ) /*0x50c404*/
    return 0; /*0x50c8ae*/
  v11 = v7 + 156; /*0x50c417*/
  v12 = *(_DWORD *)(v7 + 156); /*0x50c419*/
  v13 = *(_DWORD *)(v11 + 4); /*0x50c41b*/
  v60 = *(_DWORD *)(v11 + 8); /*0x50c421*/
  LOWORD(v59[0]) = v12 / 256; /*0x50c431*/
  HIWORD(v59[0]) = v13 / 256; /*0x50c446*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth((_DWORD *)v10); /*0x50c450*/
  v53 = FoundationWidth; /*0x50c456*/
  FoundationHeight = BuildingTypeClass::GetFoundationHeight(v10, 0); /*0x50c45a*/
  LOWORD(a2) = LOWORD(v59[0]) - 1; /*0x50c469*/
  HIWORD(a2) = HIWORD(v59[0]) - 1; /*0x50c46e*/
  v16 = 1; /*0x50c477*/
  v55 = FoundationHeight; /*0x50c47e*/
  v62[0] = a2; /*0x50c482*/
  a2 = 1; /*0x50c486*/
  if ( FoundationWidth >= 1 ) /*0x50c48a*/
  {
    LOBYTE(v63) = 0; /*0x50c495*/
    HIWORD(v59[0]) = FoundationHeight + 1; /*0x50c49a*/
    LOBYTE(v64) = 0; /*0x50c49f*/
    v17 = this + 22276; /*0x50c4a4*/
    do /*0x50c604*/
    {
      HIWORD(v56) = HIWORD(v62[0]); /*0x50c4b3*/
      v18 = *(_DWORD *)(this + 22284); /*0x50c4bb*/
      LOWORD(v56) = v16 + LOWORD(v62[0]); /*0x50c4be*/
      if ( *(_DWORD *)(this + 22292) < v18 /*0x50c4e9*/
        || (*(_BYTE *)(this + 22289) || !v18)
        && (v19 = *(_DWORD *)(this + 22296), v19 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 8))(v17, v18 + v19, 0) )
      {
        v20 = *(_DWORD *)(this + 22292); /*0x50c4f0*/
        if ( v8 < v20 - 1 ) /*0x50c4f8*/
        {
          memcpy( /*0x50c51c*/
            (void *)(*(_DWORD *)(this + 22280) + 16 * (v8 + 2)),
            (const void *)(*(_DWORD *)(this + 22280) + 16 * (v8 + 1)),
            16 * (v20 + 0xFFFFFFF * (v8 + 1)));
          v16 = a2; /*0x50c521*/
        }
        v21 = (int *)(16 * (v8 + 1) + *(_DWORD *)(this + 22280)); /*0x50c535*/
        v22 = v63; /*0x50c537*/
        *v21 = v52; /*0x50c53b*/
        v21[1] = v56; /*0x50c53d*/
        v21[2] = v22; /*0x50c540*/
        v21[3] = 0; /*0x50c545*/
        ++*(_DWORD *)(this + 22292); /*0x50c54c*/
      }
      v23 = *(_DWORD *)(this + 22292); /*0x50c560*/
      HIWORD(v58) = HIWORD(v62[0]) + HIWORD(v59[0]); /*0x50c563*/
      v24 = *(_DWORD *)(this + 22284); /*0x50c568*/
      LOWORD(v58) = v16 + LOWORD(v62[0]); /*0x50c56b*/
      v25 = v58; /*0x50c570*/
      if ( v23 < v24 /*0x50c593*/
        || (*(_BYTE *)(this + 22289) || !v24)
        && (v26 = *(_DWORD *)(this + 22296), v26 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 8))(v17, v24 + v26, 0) )
      {
        v27 = *(_DWORD *)(this + 22292); /*0x50c59a*/
        if ( v8 < v27 - 1 ) /*0x50c5a2*/
        {
          memcpy( /*0x50c5c6*/
            (void *)(*(_DWORD *)(this + 22280) + 16 * (v8 + 2)),
            (const void *)(*(_DWORD *)(this + 22280) + 16 * (v8 + 1)),
            16 * (v27 + 0xFFFFFFF * (v8 + 1)));
          v16 = a2; /*0x50c5cb*/
        }
        v28 = (int *)(16 * (v8 + 1) + *(_DWORD *)(this + 22280)); /*0x50c5df*/
        v29 = v64; /*0x50c5e1*/
        *v28 = v52; /*0x50c5e5*/
        v28[1] = v25; /*0x50c5e7*/
        v28[2] = v29; /*0x50c5ea*/
        v28[3] = 0; /*0x50c5ef*/
        ++*(_DWORD *)(this + 22292); /*0x50c5f6*/
      }
      a2 = ++v16; /*0x50c600*/
    }
    while ( v16 <= v53 ); /*0x50c604*/
    LOWORD(FoundationWidth) = v53; /*0x50c60a*/
    FoundationHeight = v55; /*0x50c60c*/
  }
  v30 = 1; /*0x50c610*/
  a2 = 1; /*0x50c617*/
  if ( FoundationHeight >= 1 ) /*0x50c61b*/
  {
    LOBYTE(v64) = 0; /*0x50c626*/
    LOWORD(v59[0]) = FoundationWidth + 1; /*0x50c62b*/
    LOBYTE(v63) = 0; /*0x50c630*/
    v31 = this + 22276; /*0x50c635*/
    do /*0x50c793*/
    {
      v32 = *(_DWORD *)(this + 22292); /*0x50c644*/
      HIWORD(v58) = v30 + HIWORD(v62[0]); /*0x50c649*/
      v33 = *(_DWORD *)(this + 22284); /*0x50c64e*/
      LOWORD(v58) = v62[0]; /*0x50c651*/
      v34 = v58; /*0x50c656*/
      if ( v32 < v33 /*0x50c679*/
        || (*(_BYTE *)(this + 22289) || !v33)
        && (v35 = *(_DWORD *)(this + 22296), v35 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v31 + 8))(v31, v33 + v35, 0) )
      {
        v36 = *(_DWORD *)(this + 22292); /*0x50c680*/
        if ( v8 < v36 - 1 ) /*0x50c688*/
        {
          memcpy( /*0x50c6ac*/
            (void *)(*(_DWORD *)(this + 22280) + 16 * (v8 + 2)),
            (const void *)(*(_DWORD *)(this + 22280) + 16 * (v8 + 1)),
            16 * (v36 + 0xFFFFFFF * (v8 + 1)));
          v30 = a2; /*0x50c6b1*/
        }
        v37 = (int *)(16 * (v8 + 1) + *(_DWORD *)(this + 22280)); /*0x50c6c5*/
        v38 = v64; /*0x50c6c7*/
        *v37 = v52; /*0x50c6cb*/
        v37[1] = v34; /*0x50c6cd*/
        v37[2] = v38; /*0x50c6d0*/
        v37[3] = 0; /*0x50c6d5*/
        ++*(_DWORD *)(this + 22292); /*0x50c6dc*/
      }
      LOWORD(v57) = LOWORD(v62[0]) + LOWORD(v59[0]); /*0x50c6ef*/
      HIWORD(v57) = v30 + HIWORD(v62[0]); /*0x50c6f7*/
      v39 = *(_DWORD *)(this + 22284); /*0x50c6fc*/
      if ( *(_DWORD *)(this + 22292) < v39 /*0x50c722*/
        || (*(_BYTE *)(this + 22289) || !v39)
        && (v40 = *(_DWORD *)(this + 22296), v40 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v31 + 8))(v31, v39 + v40, 0) )
      {
        v41 = *(_DWORD *)(this + 22292); /*0x50c729*/
        if ( v8 < v41 - 1 ) /*0x50c731*/
        {
          memcpy( /*0x50c755*/
            (void *)(*(_DWORD *)(this + 22280) + 16 * (v8 + 2)),
            (const void *)(*(_DWORD *)(this + 22280) + 16 * (v8 + 1)),
            16 * (v41 + 0xFFFFFFF * (v8 + 1)));
          v30 = a2; /*0x50c75a*/
        }
        v42 = (int *)(16 * (v8 + 1) + *(_DWORD *)(this + 22280)); /*0x50c76e*/
        v43 = v63; /*0x50c770*/
        *v42 = v52; /*0x50c774*/
        v42[1] = v57; /*0x50c776*/
        v42[2] = v43; /*0x50c779*/
        v42[3] = 0; /*0x50c77e*/
        ++*(_DWORD *)(this + 22292); /*0x50c785*/
      }
      a2 = ++v30; /*0x50c78f*/
    }
    while ( v30 <= v55 ); /*0x50c793*/
    LOWORD(FoundationWidth) = v53; /*0x50c799*/
  }
  a2 = v62[0]; /*0x50c7ab*/
  v59[0] = v52; /*0x50c7cb*/
  v59[1] = v62[0]; /*0x50c7cf*/
  LOBYTE(v60) = 0; /*0x50c7d3*/
  v61 = 0; /*0x50c7d8*/
  VectorClass::InsertAt(v59, v8); /*0x50c7e0*/
  v44 = FoundationWidth + 1; /*0x50c7e5*/
  v45 = CellStruct::Set(v59, v44, 0); /*0x50c7ed*/
  a2 = *CellStruct::Add(v62, &v58, v45); /*0x50c808*/
  v46 = BuildLocation::InitCandidate(v52, &a2); /*0x50c812*/
  VectorClass::InsertAt(v46, v8); /*0x50c81a*/
  v47 = CellStruct::Set(v59, 0, v55 + 1); /*0x50c82d*/
  a2 = *CellStruct::Add(v62, &v58, v47); /*0x50c852*/
  v48 = BuildLocation::InitCandidate(v52, &a2); /*0x50c856*/
  VectorClass::InsertAt(v48, v8); /*0x50c85e*/
  v49 = CellStruct::Set(v59, v44, v55 + 1); /*0x50c869*/
  a2 = *CellStruct::Add(v62, &v58, v49); /*0x50c88e*/
  v50 = BuildLocation::InitCandidate(v52, &a2); /*0x50c892*/
  VectorClass::InsertAt(v50, v8); /*0x50c89a*/
  return 1; /*0x50c89f*/
}



// ==== 0x0050C8C0  HouseClass::NotifyImpactWater  this=HouseClass  sig=csp ====
int __thiscall HouseClass::NotifyImpactWater(HouseClass *this)
{
  int v1; // edi
  int i; // esi
  HouseClass **v4; // ecx

  v1 = *(_DWORD *)&stru_A8EB00.?[164]; /*0x50c8c3*/
  for ( i = 0; i < v1; ++i ) /*0x50c8cf*/
  {
    v4 = *(HouseClass ***)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i); /*0x50c8d6*/
    if ( v4 && v4[135] == this ) /*0x50c8e3*/
      ((void (__thiscall *)(HouseClass **, _DWORD))(*v4)->builtInfantryTypes[24])(v4, 0); /*0x50c8e9*/
  }
  return PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 456), 0x2000, 1.0, 0); /*0x50c910*/
}



// ==== 0x0050C920  TechnoClass::FindDeployDestination  this=TechnoClass  sig=csp ====
__int16 __thiscall TechnoClass::FindDeployDestination(TechnoClass *this)
{
  int v1; // ebx
  int v3; // eax
  int v4; // ebp
  int v5; // edx
  int v6; // eax
  int *v7; // esi
  int v8; // ebx
  void *v9; // eax
  __int16 v11[2]; // [esp+Ch] [ebp-10h] BYREF
  int v12; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+14h] [ebp-8h]
  int v14; // [esp+18h] [ebp-4h] BYREF

  v1 = *(_DWORD *)&stru_A8EB00.?[164]; /*0x50c924*/
  v13 = *(_DWORD *)&stru_A8EB00.?[164]; /*0x50c92e*/
  if ( *((_WORD *)this + 10826) == *(_WORD *)&stru_A8EB00.?[948] /*0x50c950*/
    && *((_WORD *)this + 10827) == *(_WORD *)&stru_A8EB00.?[950] )
  {
    v3 = *((_DWORD *)this + 5412); /*0x50c952*/
  }
  else
  {
    v3 = *((_DWORD *)this + 5413); /*0x50c95a*/
  }
  v4 = 0; /*0x50c960*/
  *(_DWORD *)v11 = v3; /*0x50c968*/
  v12 = 0; /*0x50c98f*/
  v5 = *LayerClass::Pathfinding_Find( /*0x50c99e*/
          &stru_87F5F0.__pad_58[416],
          (int)&v12,
          &v14,
          v11,
          0,
          -1,
          0,
          0,
          4,
          4,
          0,
          0,
          0,
          1,
          (__int16 *)&v12,
          0,
          0);
  LOWORD(v6) = v5; /*0x50c9a0*/
  *(_DWORD *)v11 = v5; /*0x50c9a3*/
  if ( (_WORD)v5 != *(_WORD *)&stru_A8EB00.?[948] || v11[1] != *(_WORD *)&stru_A8EB00.?[950] ) /*0x50c9bc*/
  {
    ++v11[0]; /*0x50c9c2*/
    ++v11[1]; /*0x50c9c7*/
    if ( v1 > 0 ) /*0x50c9ce*/
    {
      do /*0x50cab7*/
      {
        v7 = *(int **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v4); /*0x50c9db*/
        if ( v7 ) /*0x50c9e0*/
        {
          if ( (TechnoClass *)v7[135] == this ) /*0x50c9ec*/
          {
            v6 = (*(int (__thiscall **)(_DWORD))(*v7 + 44))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v4)); /*0x50c9f6*/
            if ( v6 != 6 ) /*0x50c9fc*/
            {
              v6 = (*(int (__thiscall **)(int *))(*v7 + 44))(v7); /*0x50ca06*/
              if ( v6 != 2 ) /*0x50ca0c*/
              {
                if ( !*(_DWORD *)((*(int (__thiscall **)(int *))(*v7 + 132))(v7) + 1028) /*0x50ca36*/
                  || (v6 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v7 + 132))(v7) + 1028), !*(_BYTE *)(v6 + 5817)) )
                {
                  if ( *((_WORD *)this + 10826) == *(_WORD *)&stru_A8EB00.?[948] /*0x50ca5d*/
                    && *((_WORD *)this + 10827) == *(_WORD *)&stru_A8EB00.?[950] )
                  {
                    v6 = *((_DWORD *)this + 5412); /*0x50ca5f*/
                  }
                  else
                  {
                    v6 = *((_DWORD *)this + 5413); /*0x50ca67*/
                  }
                  v12 = v6; /*0x50ca70*/
                  if ( v6 != *(_DWORD *)&stru_A8EB00.?[948] ) /*0x50ca74*/
                  {
                    v8 = *v7; /*0x50ca7d*/
                    v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v11); /*0x50ca8b*/
                    (*(void (__thiscall **)(int *, void *, int))(v8 + 1152))(v7, v9, 1); /*0x50ca93*/
                    TechnoClass::SetFocus((TechnoClass *)v7, 0); /*0x50ca9d*/
                    LOWORD(v6) = (*(int (__thiscall **)(int *, int, _DWORD))(*v7 + 488))(v7, 2, 0); /*0x50caaa*/
                    v1 = v13; /*0x50cab0*/
                  }
                }
              }
            }
          }
        }
        ++v4; /*0x50cab4*/
      }
      while ( v4 < v1 ); /*0x50cab7*/
    }
  }
  return v6; /*0x50cabe*/
}



// ==== 0x0050CAD0  TechnoClass::ProcessTarget  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::ProcessTarget(TechnoClass *this, int a2)
{
  int v3; // eax
  int v5; // esi
  unsigned int v6; // esi
  Cell *v7; // eax
  Cell *NeighbourContent; // eax
  _DWORD *v9; // eax

  v3 = *(_DWORD *)a2; /*0x50cad9*/
  if ( *(int *)a2 < 0 ) /*0x50cadd*/
    return 1; /*0x50cae4*/
  if ( v3 >= dword_A83C78 ) /*0x50caed*/
    return 0; /*0x50caf1*/
  v5 = *((_DWORD *)dword_A83C6C + v3); /*0x50cafd*/
  if ( *(_BYTE *)(v5 + 1517) && *(_BYTE *)(v5 + 1516) ) /*0x50cb0a*/
    return this->armorMultiplier[0] < *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4928) /*0x50cb32*/
                                                + 4 * this->targetingTimer[1]);
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x50cb40*/
    return 1; /*0x50cb44*/
  if ( !v5 ) /*0x50cb4c*/
    return 0; /*0x50cb50*/
  if ( *(_DWORD *)TechnoClass::GetAudioEntry((TechnoClass *)v5, 0) ) /*0x50cb5f*/
    return 1; /*0x50cb66*/
  if ( *(_BYTE *)(v5 + 5489) ) /*0x50cb6c*/
  {
    v6 = 0; /*0x50cb76*/
    while ( 1 ) /*0x50cb81*/
    {
      v7 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)(a2 + 4)); /*0x50cb81*/
      NeighbourContent = (Cell *)Cell::GetNeighbourContent(v7, v6); /*0x50cb89*/
      v9 = Cell::IsBridge(NeighbourContent); /*0x50cb90*/
      if ( v9 ) /*0x50cb97*/
      {
        if ( (TechnoClass *)v9[135] == this ) /*0x50cb9f*/
          break; /*0x50cb9f*/
      }
      if ( (int)++v6 >= 8 ) /*0x50cba9*/
        return 0; /*0x50cbb0*/
    }
    return 1; /*0x50cb9f*/
  }
  return *(int *)(v5 + 3808) > 0 /*0x50cadf*/
      || *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3568) + *((_DWORD *)this + 5430) <= *(_DWORD *)&stru_A8EB00.?[416];
}



// ==== 0x0050CBF0  HouseClass::FindSWBuilding  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::FindSWBuilding(HouseClass *this, _DWORD *a2)
{
  HouseClass *v2; // edi
  int v3; // eax
  int v4; // esi
  _BYTE *v5; // ebx
  int v6; // ebp
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // esi
  _DWORD *v15; // edx
  int v16; // ebp
  int v17; // eax
  int v18; // edx
  _DWORD *v19; // ecx
  _DWORD *v20; // eax
  int v21; // ebp
  int v22; // eax
  int v23; // eax
  int v24; // eax
  void *v25; // edx
  int v26; // ecx
  _DWORD *v27; // eax
  _DWORD *v28; // esi
  int v29; // eax
  char v31; // [esp+Bh] [ebp-3Dh]
  int v33; // [esp+10h] [ebp-38h]
  int v34; // [esp+14h] [ebp-34h]
  int v35; // [esp+18h] [ebp-30h]
  int v36; // [esp+18h] [ebp-30h]
  int v37; // [esp+1Ch] [ebp-2Ch]
  __int16 v38[2]; // [esp+20h] [ebp-28h] BYREF
  _DWORD v39[3]; // [esp+24h] [ebp-24h] BYREF
  void **v40; // [esp+30h] [ebp-18h] BYREF
  void *Block; // [esp+34h] [ebp-14h]
  int v42; // [esp+38h] [ebp-10h]
  int v43; // [esp+3Ch] [ebp-Ch]
  int v44; // [esp+40h] [ebp-8h]
  int v45; // [esp+44h] [ebp-4h]

  v2 = this; /*0x50cbf5*/
  v37 = *((_DWORD *)stru_A80220.? + this->enemyHouseIndex); /*0x50cc12*/
  AbstractClassVector::Construct((AbstractClassVector *)&v40, 0, 0); /*0x50cc16*/
  v3 = 0; /*0x50cc21*/
  v40 = &DynamicVectorClass<AbstractClass *>::`vftable'; /*0x50cc25*/
  v45 = 10; /*0x50cc2d*/
  v44 = 0; /*0x50cc35*/
  v33 = 0; /*0x50cc39*/
  v34 = 0; /*0x50cc3d*/
  if ( *(int *)&stru_A8EB00.?[164] > 0 ) /*0x50cc41*/
  {
    while ( 1 ) /*0x50cc56*/
    {
      v4 = 0; /*0x50cc56*/
      v5 = *(_BYTE **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v34); /*0x50cc58*/
      v31 = 0; /*0x50cc5b*/
      if ( *((_DWORD *)v5 + 135) == v37 ) /*0x50cc66*/
      {
        v4 = 1; /*0x50cc70*/
        if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 120))(v5) == 2 && v5[144] && !v5[129] ) /*0x50cc87*/
        {
          v31 = 1; /*0x50cc91*/
        }
        else if ( !*(_DWORD *)&v2->__pad_13C[72] ) /*0x50cc98*/
        {
          v6 = 0; /*0x50cca7*/
          if ( *(int *)&stru_A83D50.__pad_C8[40] > 0 ) /*0x50ccab*/
          {
            do /*0x50ccdc*/
            {
              v7 = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * v6); /*0x50ccb3*/
              if ( (_BYTE *)AbstractClass::GetType((AbstractClass *)v7) == v5 /*0x50ccc8*/
                && *(_DWORD *)(v7 + 56)
                && !*(_BYTE *)(v7 + 112) )
              {
                v31 = 1; /*0x50cccf*/
              }
              ++v6; /*0x50ccd9*/
            }
            while ( v6 < *(int *)&stru_A83D50.__pad_C8[40] ); /*0x50ccdc*/
            v2 = this; /*0x50ccde*/
          }
        }
        v8 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 44))(v5) - 1; /*0x50cce9*/
        if ( v8 ) /*0x50ccea*/
        {
          v9 = v8 - 5; /*0x50ccf0*/
          if ( v9 ) /*0x50ccf3*/
          {
            if ( v9 == 9 ) /*0x50ccf8*/
            {
              v10 = *((_DWORD *)v5 + 432); /*0x50ccfe*/
              if ( *(_BYTE *)(v10 + 3779) ) /*0x50cd04*/
              {
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4616) /*0x50cd20*/
                               + 4 * *(_DWORD *)&v2->__pad_13C[72]);
              }
              else if ( *(_BYTE *)(v10 + 3782) ) /*0x50cd28*/
              {
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4644) /*0x50cd44*/
                               + 4 * *(_DWORD *)&v2->__pad_13C[72]);
              }
              else
              {
                v4 = 2; /*0x50cd4c*/
              }
            }
            goto LABEL_55; /*0x50cd23*/
          }
          v11 = *((_DWORD *)v5 + 328); /*0x50cd56*/
          v12 = *(_DWORD *)(v11 + 3768); /*0x50cd5c*/
          if ( v12 == 7 ) /*0x50cd65*/
          {
            v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4504) /*0x50cd79*/
                           + 4 * *(_DWORD *)&v2->__pad_13C[72]);
          }
          else if ( v12 != 40 || *(_BYTE *)(v11 + 3278) ) /*0x50cd86*/
          {
            if ( *(_DWORD *)(v11 + 3808) <= *(_DWORD *)(v11 + 3812) ) /*0x50cdb8*/
            {
              if ( *(_BYTE *)(v11 + 5894) ) /*0x50cdd4*/
              {
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4756) /*0x50cdf0*/
                               + 4 * *(_DWORD *)&v2->__pad_13C[72]);
              }
              else if ( *(_BYTE *)(v11 + 5453) ) /*0x50cdf8*/
              {
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4784) /*0x50ce14*/
                               + 4 * *(_DWORD *)&v2->__pad_13C[72]);
              }
              else if ( *(_BYTE *)(v11 + 5452) ) /*0x50ce1c*/
              {
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4840) /*0x50ce38*/
                               + 4 * *(_DWORD *)&v2->__pad_13C[72]);
              }
              else
              {
                if ( !*(_BYTE *)(v11 + 5454) ) /*0x50ce48*/
                {
                  v13 = 0; /*0x50ce6a*/
                  v14 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2348); /*0x50ce6c*/
                  if ( v14 <= 0 ) /*0x50ce74*/
                  {
LABEL_42:
                    v4 = 4; /*0x50ce88*/
                  }
                  else
                  {
                    v15 = *(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2336); /*0x50ce76*/
                    while ( *v15 != v11 ) /*0x50ce7e*/
                    {
                      ++v13; /*0x50ce80*/
                      ++v15; /*0x50ce81*/
                      if ( v13 >= v14 ) /*0x50ce86*/
                        goto LABEL_42; /*0x50ce86*/
                    }
                    v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4588) /*0x50cea2*/
                                   + 4 * *(_DWORD *)&this->__pad_13C[72]);
                  }
LABEL_54:
                  v2 = this; /*0x50cf34*/
                  goto LABEL_55; /*0x50cf34*/
                }
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4812) /*0x50ce5c*/
                               + 4 * *(_DWORD *)&v2->__pad_13C[72]);
              }
            }
            else
            {
              v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4560) /*0x50cdcc*/
                             + 4 * *(_DWORD *)&v2->__pad_13C[72]);
            }
          }
          else
          {
            v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4532) /*0x50cda2*/
                           + 4 * *(_DWORD *)&v2->__pad_13C[72]);
          }
        }
        else
        {
          v16 = *((_DWORD *)v5 + 433); /*0x50ceaa*/
          if ( !*(_BYTE *)(v16 + 3598) ) /*0x50ceb8*/
          {
            v17 = 0; /*0x50ced7*/
            v18 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2236); /*0x50ced9*/
            if ( v18 <= 0 ) /*0x50cee1*/
            {
LABEL_50:
              if ( *(int *)(v16 + 1504) <= 0 ) /*0x50cf03*/
                v4 = 2; /*0x50cf2f*/
              else
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4728) /*0x50cf15*/
                               + 4 * *(_DWORD *)&this->__pad_13C[72]);
            }
            else
            {
              v19 = *(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2224); /*0x50cee9*/
              while ( *v19 != *(_DWORD *)(v16 + 1028) ) /*0x50cef1*/
              {
                ++v17; /*0x50cef3*/
                ++v19; /*0x50cef4*/
                if ( v17 >= v18 ) /*0x50cef9*/
                  goto LABEL_50; /*0x50cef9*/
              }
              v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4700) /*0x50cf2a*/
                             + 4 * *(_DWORD *)&this->__pad_13C[72]);
            }
            goto LABEL_54; /*0x50cf2d*/
          }
          v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4672) /*0x50cecc*/
                         + 4 * *(_DWORD *)&v2->__pad_13C[72]);
        }
      }
LABEL_55:
      v20 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v5 + 72))(v5, v39); /*0x50cf38*/
      LOWORD(v35) = *v20 / 256; /*0x50cf56*/
      HIWORD(v35) = v20[1] / 256; /*0x50cf6e*/
      *(_DWORD *)v38 = v35; /*0x50cf77*/
      if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v38, 1) ) /*0x50cf81*/
        v4 = 0; /*0x50cf8a*/
      if ( *((_DWORD *)v5 + 136) == 2 /*0x50cfa8*/
        || (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 44))(v5) == 6 && v5[1773] == 15 )
      {
        v21 = v33; /*0x50cfaa*/
        v4 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v33 + 10); /*0x50cfc5*/
      }
      else
      {
        v21 = v33; /*0x50cfc9*/
      }
      if ( v31 ) /*0x50cfd3*/
      {
        if ( v4 <= v21 ) /*0x50cfdb*/
        {
          if ( v4 == v21 /*0x50d071*/
            && (v44 < v42
             || (BYTE1(v43) || !v42)
             && v45 > 0
             && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v40[2])(&v40, v45 + v42, 0)) )
          {
            v23 = v44++; /*0x50d07c*/
            *((_DWORD *)Block + v23) = v5; /*0x50d087*/
          }
        }
        else
        {
          v44 = 0; /*0x50cfe5*/
          if ( Block && BYTE1(v43) ) /*0x50cff1*/
          {
            __3_YAXPAX_Z(Block); /*0x50cff4*/
            Block = 0; /*0x50cffc*/
          }
          BYTE1(v43) = 0; /*0x50d004*/
          v42 = 0; /*0x50d00b*/
          if ( v44 < 0 || v45 > 0 && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v40[2])(&v40, v45, 0) ) /*0x50d023*/
          {
            v22 = v44++; /*0x50d02e*/
            *((_DWORD *)Block + v22) = v5; /*0x50d039*/
          }
          v33 = v4; /*0x50d03c*/
        }
      }
      if ( ++v34 >= *(int *)&stru_A8EB00.?[164] ) /*0x50d09b*/
      {
        v3 = v44; /*0x50d0a1*/
        break; /*0x50d0a1*/
      }
    }
  }
  if ( v3 <= 0 ) /*0x50d0a9*/
  {
    v25 = Block; /*0x50d137*/
    goto LABEL_87; /*0x50d137*/
  }
  v24 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v3 - 1); /*0x50d0bf*/
  v25 = Block; /*0x50d0c4*/
  v26 = *((_DWORD *)Block + v24); /*0x50d0c8*/
  if ( !v26 ) /*0x50d0cd*/
  {
LABEL_87:
    v28 = a2; /*0x50d13b*/
    *a2 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50d147*/
    v40 = &VectorClass<AbstractClass *>::`vftable'; /*0x50d149*/
    if ( v25 && BYTE1(v43) ) /*0x50d159*/
      __3_YAXPAX_Z(v25); /*0x50d15c*/
    return v28; /*0x50d15c*/
  }
  v27 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v26 + 72))(v26, v39); /*0x50d0d6*/
  v28 = a2; /*0x50d0db*/
  LOWORD(v36) = *v27 / 256; /*0x50d0ed*/
  v29 = v27[1]; /*0x50d0f5*/
  v40 = &VectorClass<AbstractClass *>::`vftable'; /*0x50d0fc*/
  HIWORD(v36) = v29 / 256; /*0x50d109*/
  *a2 = v36; /*0x50d112*/
  if ( Block && BYTE1(v43) ) /*0x50d122*/
  {
    __3_YAXPAX_Z(Block); /*0x50d125*/
    return a2; /*0x50d134*/
  }
  return v28; /*0x50d12f*/
}



// ==== 0x0050D170  HouseClass::FindSWTarget  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::FindSWTarget(HouseClass *this, _DWORD *a2, int a3)
{
  int SuperWeaponTypeFlag; // ebx
  int v5; // eax
  ParticleSystemClass *auxParticles1; // edx
  HouseClass *ptr_0; // ecx
  _DWORD *BestBuildingToRepair; // esi
  int v9; // edi
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  _DWORD v14[3]; // [esp+10h] [ebp-Ch] BYREF
  ObjectClass *v15; // [esp+24h] [ebp+8h]

  SuperWeaponTypeFlag = GetSuperWeaponTypeFlag((ObjectClass *)a3); /*0x50d187*/
  v5 = 0; /*0x50d189*/
  if ( (int)FootClass_Array.? <= 0 ) /*0x50d18d*/
    goto LABEL_10; /*0x50d18d*/
  auxParticles1 = FootClass_Array.?; /*0x50d193*/
  do /*0x50d1a6*/
  {
    ptr_0 = (HouseClass *)auxParticles1->ObjectClass; /*0x50d199*/
    if ( *((HouseClass **)auxParticles1->ObjectClass + 11) == this ) /*0x50d19e*/
      break; /*0x50d19e*/
    ++v5; /*0x50d1a0*/
    auxParticles1 = (ParticleSystemClass *)((char *)auxParticles1 + 4); /*0x50d1a1*/
  }
  while ( v5 < (int)FootClass_Array.? ); /*0x50d1a6*/
  if ( ptr_0 && (HouseClass *)ptr_0->relatedTags[0] == this ) /*0x50d1b3*/
  {
    BestBuildingToRepair = HouseClass::FindBestBuildingToRepair(ptr_0); /*0x50d1be*/
    v9 = *BestBuildingToRepair; /*0x50d1c7*/
    v10 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*BestBuildingToRepair + 72))(BestBuildingToRepair, v14, 1); /*0x50d1cb*/
    v11 = (*(int (__thiscall **)(_DWORD *, int, int))(v9 + 964))(BestBuildingToRepair, SuperWeaponTypeFlag, v10); /*0x50d1d2*/
    if ( v11 ) /*0x50d1da*/
    {
      v12 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v11 + 72))(v11, v14); /*0x50d1e5*/
      LOWORD(v15) = *v12 / 256; /*0x50d1fb*/
      HIWORD(v15) = v12[1] / 256; /*0x50d20f*/
      *a2 = v15; /*0x50d21c*/
      return a2; /*0x50d214*/
    }
    else
    {
      *a2 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50d230*/
      return a2; /*0x50d224*/
    }
  }
  else
  {
LABEL_10:
    *a2 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50d245*/
    return a2; /*0x50d239*/
  }
}



// ==== 0x0050D250  CellClass::IterateOccupiers  this=CellClass  sig=csp ====
__int16 __thiscall CellClass::IterateOccupiers(CellClass *this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // esi

  v3 = *((_DWORD *)this + 5573) - 1; /*0x50d259*/
  if ( v3 >= 0 ) /*0x50d25a*/
  {
    v4 = *((_DWORD *)this + 5573); /*0x50d265*/
    v5 = 16 * v3; /*0x50d268*/
    do /*0x50d27d*/
    {
      LOWORD(v3) = CellClass::setTileIndex((CellClass *)(v5 + *((_DWORD *)this + 5570)), a2); /*0x50d274*/
      v5 -= 16; /*0x50d279*/
      --v4; /*0x50d27c*/
    }
    while ( v4 ); /*0x50d27d*/
  }
  return v3; /*0x50d282*/
}



// ==== 0x0050D290  TActionClass::executeAttackAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::executeAttackAction(TActionClass *this, int a2)
{
  int i; // edi
  _DWORD *v4; // esi
  int result; // eax

  for ( i = *(_DWORD *)(a2 + 120) - 1; i >= 0; v4[179] = this ) /*0x50d29d*/
  {
    v4 = *(_DWORD **)(*(_DWORD *)(a2 + 108) + 4 * i); /*0x50d2a6*/
    result = (*(int (__thiscall **)(_DWORD *, TActionClass *, _DWORD))(*v4 + 980))(v4, this, 0); /*0x50d2ad*/
    --i; /*0x50d2b3*/
    v4[184] = a2; /*0x50d2b4*/
  }
  return result; /*0x50d2c3*/
}



// ==== 0x0050D2D0  TActionClass::executeMoveAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::executeMoveAction(TActionClass *this, int a2)
{
  int i; // ebx
  int result; // eax
  _DWORD *v5; // esi

  for ( i = *(_DWORD *)&this->pad_6E[10] - 1; i >= 0; --i ) /*0x50d2d8*/
  {
    result = *(_DWORD *)&this->pad_55[23]; /*0x50d2e0*/
    v5 = *(_DWORD **)(result + 4 * i); /*0x50d2e3*/
    if ( v5[184] == a2 ) /*0x50d2ec*/
    {
      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v5 + 980))(v5, a2, 0); /*0x50d2f5*/
      result = 0; /*0x50d2fb*/
      v5[184] = 0; /*0x50d2fd*/
      v5[179] = 0; /*0x50d303*/
    }
  }
  return result; /*0x50d30e*/
}



// ==== 0x0050D320  HouseClass::RespawnStartingBuildings  this=HouseClass  sig=csp ====
int __usercall HouseClass::RespawnStartingBuildings@<eax>(
        HouseClass *this,
        _UNKNOWN **a2@<ebx>,
        _DWORD *a3@<edi>,
        int a4@<esi>)
{
  int v4; // ecx
  int v5; // ebp
  int result; // eax
  __int16 *v7; // edi
  int v8; // esi
  __int16 *v9; // ebx
  Cell *v10; // eax
  int *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edi
  int v15; // esi
  void *v16; // eax
  _DWORD *v17; // eax
  int i; // [esp+10h] [ebp-20h]
  int v22[3]; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v23[4]; // [esp+20h] [ebp-10h] BYREF
  _UNKNOWN *retaddr; // [esp+30h] [ebp+0h] BYREF

  v5 = v4; /*0x50d324*/
  result = *(_DWORD *)(v4 + 380) - 1; /*0x50d32c*/
  for ( i = result; i >= 0; --i )
  {
    v7 = *(__int16 **)(*(_DWORD *)(v5 + 368) + 4 * result); /*0x50d340*/
    v8 = *(_DWORD *)v7; /*0x50d343*/
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v7 + 44))(*(_DWORD *)v7) == 7 )
    {
      v9 = v7 + 2; /*0x50d355*/
      v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7 + 2); /*0x50d35e*/
      v11 = Cell::IsBridge(v10); /*0x50d365*/
      if ( v11 && (v12 = v11[328], v12 == v8) && v11[135] == v5 )
      {
        v13 = *v11; /*0x50d386*/
        v22[0] = -*(_DWORD *)(v12 + 160); /*0x50d38a*/
        (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v13 + 364))( /*0x50d3ac*/
          v11,
          v22,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          0,
          0,
          0);
      }
      else
      {
        v14 = (*(int (__thiscall **)(int, int, _DWORD *, int, _UNKNOWN **))(*(_DWORD *)v8 + 140))(v8, v5, a3, a4, a2); /*0x50d3bf*/
        if ( v14 )
          v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) == 6 ? v14 : 0;
        else
          v15 = 0; /*0x50d3c5*/
        v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9); /*0x50d3e3*/
        a2 = &retaddr; /*0x50d3ee*/
        v17 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)v16 + 72))(v16); /*0x50d3f1*/
        a4 = 0; /*0x50d3f6*/
        v23[0] = *v17; /*0x50d3f8*/
        v23[1] = v17[1]; /*0x50d3ff*/
        a3 = v23; /*0x50d40a*/
        v23[2] = v17[2]; /*0x50d40b*/
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 1168))(v15) ) /*0x50d413*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 248))(v15); /*0x50d421*/
      }
    }
    result = i - 1; /*0x50d42b*/
  }
  return result; /*0x50d439*/
}



// ==== 0x0050D440  HouseClass::RespawnStartingForces  this=HouseClass  sig=csp ====
int __usercall HouseClass::RespawnStartingForces@<eax>(
        HouseClass *this,
        _UNKNOWN **a2@<ebp>,
        _DWORD *a3@<edi>,
        int a4@<esi>)
{
  int v4; // ecx
  int v5; // ebx
  int result; // eax
  int v7; // edi
  __int16 *v8; // ebp
  int v9; // esi
  int v10; // eax
  void *v11; // eax
  _DWORD *v12; // eax
  int v16; // [esp+10h] [ebp-1Ch]
  _DWORD v17[4]; // [esp+1Ch] [ebp-10h] BYREF
  _UNKNOWN *retaddr; // [esp+2Ch] [ebp+0h] BYREF

  v5 = v4; /*0x50d444*/
  result = *(_DWORD *)(v4 + 380) - 1; /*0x50d44c*/
  v16 = result; /*0x50d44d*/
  if ( result >= 0 )
  {
    while ( 1 )
    {
      v7 = 0; /*0x50d466*/
      v8 = *(__int16 **)(*(_DWORD *)(v5 + 368) + 4 * result); /*0x50d468*/
      v9 = *(_DWORD *)v8; /*0x50d46b*/
      switch ( (*(int (__thiscall **)(_DWORD, _DWORD *, int, _UNKNOWN **))(**(_DWORD **)v8 + 44))(
                 *(_DWORD *)v8,
                 a3,
                 a4,
                 a2) )
      {
        case 3:
        case 7:
        case 40:
          v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 140))(v9, v5); /*0x50d491*/
          if ( v10 ) /*0x50d499*/
            goto LABEL_9; /*0x50d499*/
          v7 = 0; /*0x50d49b*/
          break; /*0x50d49d*/
        case 16:
          v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 140))(v9, v5); /*0x50d4a4*/
          if ( v10 )
LABEL_9:
            v7 = (*(_BYTE *)(v10 + 20) & 1) != 0 ? v10 : 0;
          else
            v7 = 0; /*0x50d4ae*/
          break; /*0x50d4b0*/
        default:
          break;
      }
      v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8 + 2); /*0x50d4c0*/
      a2 = &retaddr; /*0x50d4d4*/
      v12 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)v11 + 72))(v11); /*0x50d4d7*/
      a4 = 0; /*0x50d4dc*/
      v17[0] = *v12; /*0x50d4de*/
      v17[1] = v12[1]; /*0x50d4e5*/
      a3 = v17; /*0x50d4f0*/
      v17[2] = v12[2]; /*0x50d4f1*/
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 1168))(v7) ) /*0x50d4f9*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 248))(v7); /*0x50d507*/
      result = --v16; /*0x50d511*/
      if ( v16 < 0 ) /*0x50d516*/
        break; /*0x50d516*/
      result = v16; /*0x50d45c*/
    }
  }
  return result; /*0x50d51f*/
}



// ==== 0x0050D610  Scenario::ProcessSidebarUnits  this=Scenario  sig=csp ====
int __thiscall Scenario::ProcessSidebarUnits(Scenario *this)
{
  int result; // eax
  Scenario **v3; // esi
  int v4; // ebx
  int v5; // esi
  int *v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int i; // [esp+Ch] [ebp-8h]
  char v12[4]; // [esp+10h] [ebp-4h] BYREF

  result = *(_DWORD *)&stru_A8EB00.?[164] - 1; /*0x50d619*/
  for ( i = *(_DWORD *)&stru_A8EB00.?[164] - 1; i >= 0; --i ) /*0x50d622*/
  {
    v3 = *(Scenario ***)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * result); /*0x50d631*/
    if ( v3[135] == this ) /*0x50d63a*/
    {
      v4 = *(_DWORD *)(*(int (__thiscall **)(Scenario **, char *))&(*v3)->__pad_9C[284])(v3, v12); /*0x50d64d*/
      v5 = (*(int (__thiscall **)(Scenario **))(*v3)->__pad_84)(v3); /*0x50d659*/
      v6 = (int *)__2_YAPAXI_Z(8u); /*0x50d660*/
      *v6 = v5; /*0x50d665*/
      v6[1] = v4; /*0x50d66d*/
      v7 = *(_DWORD *)&this->__pad_9C[216]; /*0x50d670*/
      if ( *(_DWORD *)&this->__pad_9C[224] < v7 /*0x50d695*/
        || (this->__pad_9C[221] || !v7)
        && (v8 = *(_DWORD *)&this->__pad_9C[228], v8 > 0)
        && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&this->__pad_9C[208] + 8))(
             &this->__pad_9C[208],
             v7 + v8,
             0) )
      {
        v9 = *(_DWORD *)&this->__pad_9C[224]; /*0x50d69c*/
        v10 = *(_DWORD *)&this->__pad_9C[212]; /*0x50d69f*/
        *(_DWORD *)&this->__pad_9C[224] = v9 + 1; /*0x50d6a5*/
        *(_DWORD *)(v10 + 4 * v9) = v6; /*0x50d6a8*/
      }
    }
    result = i - 1; /*0x50d6af*/
  }
  return result; /*0x50d6bd*/
}



// ==== 0x0050D6D0  ObjectClass::SelectSimilarBuildingTypes  this=ObjectClass  sig=csp ====
__int16 __thiscall SelectSimilarBuildingTypes(ObjectClass *this, int a2)
{
  ObjectClass *v2; // ebp
  int i; // eax
  _DWORD *v4; // esi
  __int16 v5; // dx
  _WORD *v6; // edi
  int v7; // ebp
  void *v8; // eax
  __int16 v9; // dx
  int v10; // ebp
  void *v11; // eax
  void *v12; // eax
  int v13; // edi
  _DWORD *v14; // eax
  int v15; // ebp
  void *v16; // eax
  __int16 v17; // dx
  int v18; // ebp
  void *v19; // eax
  void *v20; // eax
  int v21; // edi
  ObjectPlacement *v22; // eax
  int *v23; // eax
  _DWORD *v25; // [esp+20h] [ebp-54h]
  int v26; // [esp+24h] [ebp-50h]
  int v27; // [esp+28h] [ebp-4Ch]
  int v28; // [esp+2Ch] [ebp-48h]
  __int16 v29[2]; // [esp+34h] [ebp-40h] BYREF
  int v30; // [esp+38h] [ebp-3Ch]
  int v31; // [esp+3Ch] [ebp-38h]
  __int16 v32[2]; // [esp+40h] [ebp-34h] BYREF
  int v33; // [esp+44h] [ebp-30h]
  int v34; // [esp+48h] [ebp-2Ch]
  ObjectClass *v35; // [esp+4Ch] [ebp-28h]
  _BYTE v36[12]; // [esp+50h] [ebp-24h] BYREF
  _BYTE v37[24]; // [esp+5Ch] [ebp-18h] BYREF
  _UNKNOWN *retaddr; // [esp+74h] [ebp+0h] BYREF

  v2 = this; /*0x50d6e0*/
  v35 = this; /*0x50d6e4*/
  if ( (_WORD)a2 == *(_WORD *)&stru_A8EB00.?[948] ) /*0x50d6e8*/
  {
    LOWORD(i) = HIWORD(a2); /*0x50d6ea*/
    if ( HIWORD(a2) == *(_WORD *)&stru_A8EB00.?[950] ) /*0x50d6f6*/
      return i; /*0x50d6f6*/
  }
  v30 = 0; /*0x50d702*/
  i = FootClass_Array.? - 1; /*0x50d70a*/
  v34 = FootClass_Array.? - 1; /*0x50d70f*/
  if ( FootClass_Array.? - 1 < 0 ) /*0x50d713*/
    return i; /*0x50d713*/
  while ( 1 ) /*0x50d725*/
  {
    v4 = (_DWORD *)*((_DWORD *)FootClass_Array.? + i); /*0x50d725*/
    v5 = HIWORD(a2) + *(_WORD *)&g_MissionQueueFrame.waypoints[4 * v30 + 2152]; /*0x50d73c*/
    v6 = (_WORD *)(4 * v30 + 11261072); /*0x50d741*/
    LOWORD(v31) = a2 + *(_WORD *)&g_MissionQueueFrame.waypoints[4 * v30 + 2150]; /*0x50d74b*/
    HIWORD(v31) = v5; /*0x50d750*/
    *(_DWORD *)v29 = v31; /*0x50d759*/
    if ( (ObjectClass *)v4[135] != v2 ) /*0x50d765*/
      goto LABEL_25; /*0x50d765*/
    if ( !v4 || (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 1 || v4[71] ) /*0x50d783*/
      break; /*0x50d783*/
    v7 = *v4; /*0x50d791*/
    v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x50d7a5*/
    for ( i = (*(int (__thiscall **)(_DWORD *, void *, int, int, _DWORD, int))(v7 + 428))(v4, v8, -1, -1, 0, 1); /*0x50d7b5*/
          i;
          i = (*(int (__thiscall **)(_DWORD *, void *, int, int, _DWORD, int))(v10 + 428))(v4, v11, -1, -1, 0, 1) )
    {
      v6 += 2; /*0x50d7bb*/
      ++v30; /*0x50d7c5*/
      if ( (int)v6 > (int)&g_MissionQueueFrame.uiNameLoaded[54] ) /*0x50d7c9*/
        return i; /*0x50d7c9*/
      v9 = HIWORD(a2) + v6[1]; /*0x50d7d6*/
      v32[0] = a2 + *v6; /*0x50d7e0*/
      v32[1] = v9; /*0x50d7e7*/
      *(_DWORD *)v29 = *(_DWORD *)v32; /*0x50d7f9*/
      v10 = *v4; /*0x50d7fd*/
      v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x50d804*/
    }
    v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x50d816*/
    v13 = *v4; /*0x50d827*/
    v14 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v12 + 72))(v12, v36); /*0x50d830*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(v13 + 1288))(v4, *v14, v14[1], v14[2]) ) /*0x50d84a*/
    {
      LOWORD(i) = ++v30; /*0x50d85c*/
      if ( v30 > 350 ) /*0x50d866*/
        return i; /*0x50d866*/
    }
LABEL_25:
    i = --v34; /*0x50d998*/
    if ( v34 < 0 ) /*0x50d9a1*/
      return i; /*0x50d9a1*/
    v2 = v35; /*0x50d71b*/
  }
  if ( (ObjectClass *)v4[135] != v2 || !v4 || (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 15 || v4[71] ) /*0x50d895*/
    goto LABEL_25; /*0x50d89d*/
  v15 = *v4; /*0x50d8a3*/
  v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x50d8b7*/
  i = (*(int (__thiscall **)(_DWORD *, void *, int, int, _DWORD, int))(v15 + 428))(v4, v16, -1, -1, 0, 1); /*0x50d8bf*/
  if ( !i ) /*0x50d8c7*/
  {
LABEL_23:
    v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x50d928*/
    v21 = *v4; /*0x50d939*/
    v25 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v20 + 72))( /*0x50d94b*/
                      v20,
                      v37,
                      0,
                      0,
                      0);
    v22 = (ObjectPlacement *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v32); /*0x50d95b*/
    v23 = ObjectPlacement::CalcPosition(v22, (int *)&retaddr, v25, v26, v27, v28); /*0x50d962*/
    v26 = *v23; /*0x50d96e*/
    v27 = v23[1]; /*0x50d976*/
    v28 = v23[2]; /*0x50d979*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(v21 + 1288))(v4) ) /*0x50d97e*/
    {
      LOWORD(i) = ++v30; /*0x50d98c*/
      if ( v30 > 350 ) /*0x50d996*/
        return i; /*0x50d996*/
    }
    goto LABEL_25; /*0x50d996*/
  }
  while ( 1 ) /*0x50d8cd*/
  {
    v6 += 2; /*0x50d8cd*/
    ++v30; /*0x50d8d7*/
    if ( (int)v6 > (int)&g_MissionQueueFrame.uiNameLoaded[54] ) /*0x50d8db*/
      return i; /*0x50d9a7*/
    v17 = HIWORD(a2) + v6[1]; /*0x50d8e8*/
    LOWORD(v33) = a2 + *v6; /*0x50d8f2*/
    HIWORD(v33) = v17; /*0x50d8f9*/
    *(_DWORD *)v29 = v33; /*0x50d90b*/
    v18 = *v4; /*0x50d90f*/
    v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x50d916*/
    i = (*(int (__thiscall **)(_DWORD *, void *, int, int, _DWORD, int))(v18 + 428))(v4, v19, -1, -1, 0, 1); /*0x50d91e*/
    if ( !i ) /*0x50d926*/
      goto LABEL_23; /*0x50d926*/
  }
}



// ==== 0x0050D9C0  TechnoClass::processExperienceGain  this=TechnoClass  sig=csp ====
BOOL __thiscall IsTechInfiltrated(TechnoClass *this)
{
  return this->firepowerMultiplier[1] > 0; /*0x50d9cd*/
}



// ==== 0x0050D9D0  TechnoClass::updateVeterancy  this=TechnoClass  sig=csp ====
BOOL __thiscall IsProductionInfiltrated(TechnoClass *this)
{
  return this->idleActionTimer[0] > 0; /*0x50d9dd*/
}



// ==== 0x0050D9E0  HouseClass::GetInfSelfHealStep  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GetInfSelfHealStep(HouseClass *this)
{
  return *(_DWORD *)&this->__pad_13C[40] * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 52); /*0x50d9ef*/
}



// ==== 0x0050D9F0  HouseClass::GetUnitSelfHealStep  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GetUnitSelfHealStep(HouseClass *this)
{
  return *(_DWORD *)&this->__pad_13C[44] * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 60); /*0x50d9ff*/
}



// ==== 0x0050DA00  TActionClass::executeGuardAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::executeGuardAction(TActionClass *this, int a2)
{
  *((_DWORD *)this + 5436) = a2; /*0x50da04*/
  return a2; /*0x50da0a*/
}



// ==== 0x0050DA10  ObjectClass::GlobalHelper_0E4440_Helper  this=ObjectClass  sig=csp ====
int __thiscall GlobalHelper_0E4440_Helper(ObjectClass *this)
{
  int result; // eax

  result = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50da10*/
  *((_DWORD *)this + 5436) = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50da15*/
  return result; /*0x50da1b*/
}



// ==== 0x0050DA20  TActionClass::executeHuntAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::executeHuntAction(TActionClass *this, int a2)
{
  *((_DWORD *)this + 5437) = a2; /*0x50da24*/
  *((_DWORD *)this + 5439) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x50da30*/
  return a2; /*0x50da36*/
}



// ==== 0x0050DA40  ObjectClass::method_50DA40  this=ObjectClass  sig=csp ====
int __thiscall sub_50DA40(ObjectClass *this, int a2)
{
  *((_DWORD *)this + 5438) = a2; /*0x50da44*/
  return a2; /*0x50da4a*/
}



// ==== 0x0050DA50  ObjectClass::GlobalHelper_0E44C0_Helper  this=ObjectClass  sig=csp ====
int __thiscall GlobalHelper_0E44C0_Helper(ObjectClass *this)
{
  int result; // eax

  result = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50da50*/
  *((_DWORD *)this + 5439) = -100; /*0x50da55*/
  *((_DWORD *)this + 5437) = result; /*0x50da5f*/
  *((_DWORD *)this + 5438) = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50da6b*/
  return result; /*0x50da71*/
}



// ==== 0x0050DA80  HouseClass::GetTransitionCount  this=TOP  sig=csp ====
int __thiscall HouseClass::GetTransitionCount(HouseClass *this)
{
  int result; // eax

  result = this->HouseClass_field_timer_C[0]; /*0x50da80*/
  if ( (unsigned int)result >= 4 ) /*0x50da88*/
    return 0; /*0x50da8f*/
  return result; /*0x50da91*/
}



// ==== 0x0050DAA0  FootClass::checkTurning  this=FootClass  sig=csp ====
unsigned int __thiscall FootClass::checkTurning(FootClass *this)
{
  unsigned int result; // eax

  result = this->?[0]; /*0x50daa0*/
  if ( result >= 4 ) /*0x50daa8*/
    return 0; /*0x50daaf*/
  return result; /*0x50dab1*/
}



// ==== 0x0050DAC0  TechnoClass::MapHouseRelationIndex  this=TOP  sig=csp ====
int __thiscall TechnoClass::MapHouseRelationIndex(TechnoClass *this)
{
  int result; // eax

  switch ( *((_DWORD *)this + 5599) ) /*0x50dacb*/
  {
    case 0: /*0x50dacb*/
      result = 2; /*0x50dad2*/
      break; /*0x50dad7*/
    case 1: /*0x50dacb*/
      result = 3; /*0x50dad8*/
      break; /*0x50dadd*/
    case 3: /*0x50dacb*/
      result = 1; /*0x50dade*/
      break; /*0x50dae3*/
    default:
      result = 0; /*0x50dae4*/
      break; /*0x50dae4*/
  }
  return result; /*0x50dad7*/
}



// ==== 0x0050DB00  House::ChooseHouseEnemy  this=House  sig=csp ====
int __thiscall House::ChooseHouseEnemy(House *this, int a2)
{
  double v2; // st7
  int v3; // edx
  int v4; // ebx
  House *v5; // esi
  int v6; // edi
  int v7; // ebp
  int *v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int *v12; // ecx
  int *v13; // eax
  int result; // eax
  CellClass *v15; // eax
  int smudgeTypeIndex_low; // esi
  int smudgeTypeIndex_high; // edi
  _DWORD *v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ebp
  _DWORD *v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ebx
  _DWORD *v26; // eax
  int v27; // ecx
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // ecx
  int v31; // eax
  double v32; // [esp+4h] [ebp-40h]
  double v33; // [esp+4h] [ebp-40h]
  double v34; // [esp+4h] [ebp-40h]
  double v35; // [esp+4h] [ebp-40h]
  int v37; // [esp+20h] [ebp-24h] BYREF
  int v38; // [esp+24h] [ebp-20h]
  _DWORD v39[3]; // [esp+2Ch] [ebp-18h] BYREF
  int v40; // [esp+38h] [ebp-Ch] BYREF
  int v41; // [esp+3Ch] [ebp-8h]
  int v42; // [esp+40h] [ebp-4h]
  int v43; // [esp+48h] [ebp+4h]
  int v44; // [esp+48h] [ebp+4h]

  v3 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x50db03*/
  v4 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x50db0a*/
  v5 = this; /*0x50db12*/
  v6 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x50db19*/
  v40 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x50db25*/
  v41 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x50db29*/
  v42 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x50db2d*/
  v7 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x50db31*/
  if ( a2 && *(_BYTE *)(a2 + 979) && *(_DWORD *)(*(_DWORD *)(a2 + 1312) + 3768) == 7 ) /*0x50db4c*/
  {
    v8 = (int *)(*(int (__stdcall **)(_DWORD *))(*(_DWORD *)a2 + 72))(v39); /*0x50db58*/
    v9 = *v8; /*0x50db5a*/
    v40 = *v8; /*0x50db5c*/
    v41 = v8[1]; /*0x50db63*/
    v42 = v8[2]; /*0x50db6a*/
    goto LABEL_20; /*0x50db6e*/
  }
  if ( !*(_DWORD *)&this->__pad_2B0[64] || (v10 = 0, v43 = 0, (int)this->House_field_0x78 <= 0) ) /*0x50db8c*/
  {
LABEL_23:
    v9 = v6; /*0x50dc5c*/
    v41 = v4; /*0x50dc5e*/
    v40 = v6; /*0x50dc62*/
    v42 = v7; /*0x50dc66*/
    goto LABEL_24; /*0x50dc66*/
  }
  while ( 1 ) /*0x50dba1*/
  {
    v11 = *(_DWORD *)(*(_DWORD *)&v5->__pad_2D[63] + 4 * v10); /*0x50dba1*/
    if ( !v11 || *(_BYTE *)(v11 + 129) ) /*0x50dba8*/
      goto LABEL_18; /*0x50dbb0*/
    if ( *(_BYTE *)(*(_DWORD *)(v11 + 1312) + 5817) ) /*0x50dbb8*/
      break; /*0x50dbb8*/
    if ( v6 == *(_DWORD *)&stru_A8EB00.?[1044] && v4 == *(_DWORD *)&stru_A8EB00.?[1048] && v7 == v3 ) /*0x50dc06*/
    {
      v13 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v11 + 72))(v11, &v37); /*0x50dc11*/
      v6 = *v13; /*0x50dc14*/
      v4 = v13[1]; /*0x50dc16*/
      v7 = v13[2]; /*0x50dc19*/
    }
LABEL_18:
    v10 = v43 + 1; /*0x50dc1c*/
    v43 = v10; /*0x50dc28*/
    if ( v10 >= (int)this->House_field_0x78 ) /*0x50dc2e*/
    {
      v9 = v40; /*0x50dc34*/
      v5 = this; /*0x50dc38*/
      goto LABEL_20; /*0x50dc38*/
    }
    v5 = this; /*0x50db94*/
    v3 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x50db98*/
  }
  v12 = (int *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v11 + 72))(v11, v39); /*0x50dbce*/
  v9 = *v12; /*0x50dbd0*/
  v40 = *v12; /*0x50dbd2*/
  v41 = v12[1]; /*0x50dbd9*/
  v42 = v12[2]; /*0x50dbe0*/
  if ( !*(_BYTE *)(v11 + 979) ) /*0x50dbe4*/
    goto LABEL_18; /*0x50dbec*/
  v5 = this; /*0x50dca9*/
LABEL_20:
  if ( v9 == *(_DWORD *)&stru_A8EB00.?[1044] ) /*0x50dc40*/
  {
    v3 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x50dc4e*/
    if ( v41 == *(_DWORD *)&stru_A8EB00.?[1048] && v42 == *(_DWORD *)&stru_A8EB00.?[1052] ) /*0x50dc5a*/
      goto LABEL_23; /*0x50dc5a*/
LABEL_24:
    if ( v9 == *(_DWORD *)&stru_A8EB00.?[1044] && v41 == *(_DWORD *)&stru_A8EB00.?[1048] && v42 == v3 ) /*0x50dc84*/
    {
      result = *(_DWORD *)&v5[17].__pad_C[12]; /*0x50dc86*/
      if ( result >= 0 ) /*0x50dc8e*/
      {
        if ( result > 3 ) /*0x50dc97*/
          return 0; /*0x50dca0*/
        return result; /*0x50dca6*/
      }
      return 0; /*0x50dede*/
    }
  }
  v15 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v40); /*0x50dcb9*/
  smudgeTypeIndex_low = SLOWORD(v15->smudgeTypeIndex); /*0x50dcbe*/
  smudgeTypeIndex_high = SHIWORD(v15->smudgeTypeIndex); /*0x50dcc2*/
  v37 = *(_DWORD *)&stru_87F5F0.__pad_58[676] / 2; /*0x50dcd9*/
  v38 = 1; /*0x50dce3*/
  v18 = HexCoord::Convert((HexCoord *)&stru_87F5F0.__pad_58[416], v39, &v37); /*0x50dceb*/
  v19 = v18[1]; /*0x50dcfd*/
  v37 = smudgeTypeIndex_low - *v18; /*0x50dd00*/
  v38 = smudgeTypeIndex_high - v19; /*0x50dd06*/
  __asm /*0x50dd0a*/
  {
    fild [esp+40h+var_20]
    fild [esp+40h+var_24]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+40h+var_44+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v32); /*0x50dd23*/
  LOWORD(v20) = Math::RoundToInt(v2); /*0x50dd2b*/
  v21 = v20; /*0x50dd3c*/
  v37 = *(_DWORD *)&stru_87F5F0.__pad_58[676]; /*0x50dd3e*/
  v38 = *(_DWORD *)&stru_87F5F0.__pad_58[680]; /*0x50dd51*/
  v22 = HexCoord::Convert((HexCoord *)&stru_87F5F0.__pad_58[416], v39, &v37); /*0x50dd55*/
  v23 = v22[1]; /*0x50dd61*/
  v37 = smudgeTypeIndex_low - *v22; /*0x50dd6c*/
  v38 = smudgeTypeIndex_high - v23; /*0x50dd70*/
  __asm /*0x50dd74*/
  {
    fild [esp+40h+var_20]
    fild [esp+40h+var_24]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+40h+var_44+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v33); /*0x50dd8d*/
  LOWORD(v24) = Math::RoundToInt(v2); /*0x50dd95*/
  v25 = v24; /*0x50dd9a*/
  v37 = *(_DWORD *)&stru_87F5F0.__pad_58[676] / 2; /*0x50dda6*/
  v38 = 2 * *(_DWORD *)&stru_87F5F0.__pad_58[680]; /*0x50ddc2*/
  v26 = HexCoord::Convert((HexCoord *)&stru_87F5F0.__pad_58[416], v39, &v37); /*0x50ddc6*/
  v27 = v26[1]; /*0x50ddd2*/
  v37 = smudgeTypeIndex_low - *v26; /*0x50dddd*/
  v38 = smudgeTypeIndex_high - v27; /*0x50dde1*/
  __asm /*0x50dde5*/
  {
    fild [esp+40h+var_20]
    fild [esp+40h+var_24]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+40h+var_44+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v34); /*0x50ddfe*/
  LOWORD(v28) = Math::RoundToInt(v2); /*0x50de06*/
  v44 = v28; /*0x50de11*/
  v38 = *(_DWORD *)&stru_87F5F0.__pad_58[680]; /*0x50de1d*/
  v37 = 0; /*0x50de28*/
  v29 = HexCoord::Convert((HexCoord *)&stru_87F5F0.__pad_58[416], v39, &v37); /*0x50de30*/
  v30 = v29[1]; /*0x50de3e*/
  v37 = smudgeTypeIndex_low - *v29; /*0x50de41*/
  v38 = smudgeTypeIndex_high - v30; /*0x50de47*/
  __asm /*0x50de4b*/
  {
    fild [esp+40h+var_20]
    fild [esp+40h+var_24]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+40h+var_44+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v35); /*0x50de64*/
  LOWORD(v31) = Math::RoundToInt(v2); /*0x50de6c*/
  if ( v21 > v25 || v21 > v44 || v21 > v31 ) /*0x50de7f*/
  {
    if ( v25 > v44 || v25 > v31 ) /*0x50de97*/
    {
      if ( v44 > v31 ) /*0x50deab*/
        *((_DWORD *)this + 5599) = 3; /*0x50dec1*/
      else
        *((_DWORD *)this + 5599) = 2; /*0x50deb1*/
    }
    else
    {
      *((_DWORD *)this + 5599) = 1; /*0x50de9d*/
    }
  }
  else
  {
    *((_DWORD *)this + 5599) = 0; /*0x50de85*/
  }
  result = *((_DWORD *)this + 5599); /*0x50decf*/
  if ( (unsigned int)result >= 4 ) /*0x50ded7*/
    return 0; /*0x50ded7*/
  return result; /*0x50dc9d*/
}



// ==== 0x0050DEF0  HouseClass::GetCurrentOption  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::GetCurrentOption(HouseClass *this, _DWORD *a2)
{
  if ( LOWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[948] /*0x50df0e*/
    && HIWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[950] )
  {
    *a2 = this->baseSpawnCell[0]; /*0x50df1a*/
    return a2; /*0x50df10*/
  }
  else
  {
    *a2 = this->baseCenter[0]; /*0x50df29*/
    return a2; /*0x50df1f*/
  }
}



// ==== 0x0050DF30  HouseClass::GetStartCoords  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::GetStartCoords(HouseClass *this, _DWORD *a2)
{
  int v2; // ecx
  void *v4; // eax
  _DWORD *v5; // edx
  __int16 v6[2]; // [esp+4h] [ebp-10h] BYREF
  _BYTE v7[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( LOWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[948] /*0x50df4f*/
    && HIWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[950] )
  {
    v2 = this->baseSpawnCell[0]; /*0x50df51*/
  }
  else
  {
    v2 = this->baseCenter[0]; /*0x50df59*/
  }
  *(_DWORD *)v6 = v2; /*0x50df66*/
  if ( v2 == *(_DWORD *)&stru_A8EB00.?[948] ) /*0x50df6a*/
  {
    *a2 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x50df7f*/
    a2[1] = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x50df87*/
    a2[2] = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x50df90*/
    return a2; /*0x50df73*/
  }
  else
  {
    v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v6); /*0x50dfa4*/
    v5 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v7); /*0x50dfb5*/
    *a2 = *v5; /*0x50dfbf*/
    a2[1] = v5[1]; /*0x50dfc4*/
    a2[2] = v5[2]; /*0x50dfcb*/
    return a2; /*0x50dfb7*/
  }
}



// ==== 0x0050DFE0  TActionClass::executeDeployAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::executeDeployAction(TActionClass *this, int a2)
{
  *((_DWORD *)this + 5413) = a2; /*0x50dfe4*/
  return a2; /*0x50dfea*/
}



// ==== 0x0050DFF0  ObjectClass::GlobalHelper_0E4540_Helper  this=ObjectClass  sig=csp ====
int __thiscall GlobalHelper_0E4540_Helper(ObjectClass *this)
{
  int result; // eax

  result = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50dff0*/
  *((_DWORD *)this + 5413) = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50dff5*/
  return result; /*0x50dffb*/
}



// ==== 0x0050E000  HouseClass::SetMapSeed  this=HouseClass  sig=csp ====
int __thiscall HouseClass::SetMapSeed(HouseClass *this, int a2)
{
  this->baseSpawnCell[0] = a2; /*0x50e004*/
  return a2; /*0x50e00a*/
}



// ==== 0x0050E010  TechnoClass::Find  this=TechnoClass  sig=csp ====
void __thiscall sub_50E010(int this, int a2)
{
  int v3; // eax
  char v4; // bl
  int v5; // ebp
  int v6; // esi

  v3 = *(_DWORD *)(this + 728) + 1; /*0x50e01c*/
  *(_DWORD *)(this + 728) = v3; /*0x50e01e*/
  if ( v3 == 1 ) /*0x50e027*/
  {
    if ( a2 ) /*0x50e033*/
    {
      v4 = 0; /*0x50e03e*/
      v5 = dword_A8EC88 - 1; /*0x50e040*/
      if ( dword_A8EC88 - 1 >= 0 ) /*0x50e045*/
      {
        do /*0x50e081*/
        {
          v6 = *((_DWORD *)dword_A8EC7C + v5); /*0x50e052*/
          if ( *(_DWORD *)(v6 + 540) == this /*0x50e06d*/
            && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 132))(*((_DWORD *)dword_A8EC7C + v5)) == a2
            && !*(_BYTE *)(v6 + 129) )
          {
            TechnoClass::Activate((_DWORD *)v6); /*0x50e079*/
            v4 = 1; /*0x50e07e*/
          }
          --v5; /*0x50e080*/
        }
        while ( v5 >= 0 ); /*0x50e081*/
        if ( v4 && byte_A8E9A0 ) /*0x50e08f*/
        {
          if ( dword_A8B238[0] ) /*0x50e098*/
          {
            if ( (#375 *)this != dword_A83D4C ) /*0x50e0bb*/
              return; /*0x50e0bb*/
            goto LABEL_16; /*0x50e0bb*/
          }
          if ( *(_BYTE *)(this + 492) || *(_BYTE *)(this + 493) ) /*0x50e0a4*/
          {
LABEL_16:
            if ( !dword_A8E7AC ) /*0x50e0c4*/
              VoxClass::FindAndPlay(stru_824FE4, -1); /*0x50e0d0*/
          }
        }
      }
    }
  }
}



// ==== 0x0050E0E0  HouseClass::LostPoweredCenter  this=HouseClass  sig=csp ====
void __thiscall HouseClass::LostPoweredCenter(int this, int a2)
{
  int v3; // eax
  char v4; // bl
  int v5; // edi
  int v6; // esi

  v3 = *(_DWORD *)(this + 728) - 1; /*0x50e0eb*/
  *(_DWORD *)(this + 728) = v3; /*0x50e0ec*/
  if ( !v3 ) /*0x50e0f2*/
  {
    if ( a2 ) /*0x50e0fe*/
    {
      v4 = 0; /*0x50e109*/
      v5 = dword_A8EC88 - 1; /*0x50e10b*/
      if ( dword_A8EC88 - 1 >= 0 ) /*0x50e110*/
      {
        do /*0x50e14c*/
        {
          v6 = *((_DWORD *)dword_A8EC7C + v5); /*0x50e11d*/
          if ( *(_DWORD *)(v6 + 540) == this /*0x50e138*/
            && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 132))(*((_DWORD *)dword_A8EC7C + v5)) == a2
            && !*(_BYTE *)(v6 + 129) )
          {
            TechnoClass::Deactivate((_DWORD *)v6); /*0x50e144*/
            v4 = 1; /*0x50e149*/
          }
          --v5; /*0x50e14b*/
        }
        while ( v5 >= 0 ); /*0x50e14c*/
        if ( v4 && byte_A8E9A0 ) /*0x50e15a*/
        {
          if ( dword_A8B238[0] ) /*0x50e163*/
          {
            if ( (#375 *)this != dword_A83D4C ) /*0x50e186*/
              return; /*0x50e186*/
            goto LABEL_16; /*0x50e186*/
          }
          if ( *(_BYTE *)(this + 492) || *(_BYTE *)(this + 493) ) /*0x50e16f*/
          {
LABEL_16:
            if ( !dword_A8E7AC ) /*0x50e18f*/
              VoxClass::FindAndPlay(g_Str_EVA_RobotTanksOffline, -1); /*0x50e19b*/
          }
        }
      }
    }
  }
}



// ==== 0x0050E1B0  HouseClass::GainedPoweredCenter  this=HouseClass  sig=csp ====
BOOL __thiscall HouseClass::GainedPoweredCenter(HouseClass *this, int a2)
{
  return this->poweredUnitCenters > 0; /*0x50e1bd*/
}



// ==== 0x0050E1C0  TechnoClass::Process  this=TechnoClass  sig=csp ====
void __thiscall TechnoClass::Process(TechnoClass *this, int a2)
{
  char v3; // bl
  int v4; // edi
  int v5; // esi

  if ( a2 ) /*0x50e1cb*/
  {
    v3 = 0; /*0x50e1d6*/
    v4 = *(_DWORD *)&stru_A8EB00.?[164] - 1; /*0x50e1d8*/
    if ( *(_DWORD *)&stru_A8EB00.?[164] - 1 >= 0 ) /*0x50e1dd*/
    {
      do /*0x50e219*/
      {
        v5 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v4); /*0x50e1ea*/
        if ( *(TechnoClass **)(v5 + 540) == this /*0x50e205*/
          && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 132))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v4)) == a2
          && !*(_BYTE *)(v5 + 129) )
        {
          TechnoClass::Deactivate((TechnoClass *)v5); /*0x50e211*/
          v3 = 1; /*0x50e216*/
        }
        --v4; /*0x50e218*/
      }
      while ( v4 >= 0 ); /*0x50e219*/
      if ( v3 && byte_A8E9A0 ) /*0x50e227*/
      {
        if ( *(_DWORD *)&dword_A8B238 ) /*0x50e230*/
        {
          if ( this != (TechnoClass *)dword_A83D4C ) /*0x50e253*/
            return; /*0x50e253*/
          goto LABEL_15; /*0x50e253*/
        }
        if ( LOBYTE(this->disguiseBlinkTimer[0]) || BYTE1(this->disguiseBlinkTimer[0]) ) /*0x50e23c*/
        {
LABEL_15:
          if ( !dword_A8E7AC ) /*0x50e25c*/
            VoxClass::FindAndPlay(&g_Str_EVA_RobotTanksOffline, -1); /*0x50e268*/
        }
      }
    }
  }
}



// ==== 0x0050E280  HouseClass::ReactivateTechnos  this=HouseClass  sig=csp ====
void __thiscall HouseClass::ReactivateTechnos(HouseClass *this, int a2)
{
  char v3; // bl
  int v4; // edi
  TechnoClass *v5; // esi

  if ( a2 ) /*0x50e28b*/
  {
    v3 = 0; /*0x50e296*/
    v4 = *(_DWORD *)&stru_A8EB00.?[164] - 1; /*0x50e298*/
    if ( *(_DWORD *)&stru_A8EB00.?[164] - 1 >= 0 ) /*0x50e29d*/
    {
      do /*0x50e2d9*/
      {
        v5 = *(TechnoClass **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v4); /*0x50e2aa*/
        if ( v5->owner == this /*0x50e2c5*/
          && (*((int (__thiscall **)(_DWORD))v5->RadioClass + 33))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v4)) == a2
          && !v5->? )
        {
          TechnoClass::Activate(v5); /*0x50e2d1*/
          v3 = 1; /*0x50e2d6*/
        }
        --v4; /*0x50e2d8*/
      }
      while ( v4 >= 0 ); /*0x50e2d9*/
      if ( v3 && byte_A8E9A0 ) /*0x50e2e7*/
      {
        if ( *(_DWORD *)&dword_A8B238 ) /*0x50e2f0*/
        {
          if ( this != (HouseClass *)dword_A83D4C ) /*0x50e313*/
            return; /*0x50e313*/
          goto LABEL_15; /*0x50e313*/
        }
        if ( this->currentPlayer || this->playerControl ) /*0x50e2fc*/
        {
LABEL_15:
          if ( !dword_A8E7AC ) /*0x50e31c*/
            VoxClass::FindAndPlay(&stru_824FE4, -1); /*0x50e328*/
        }
      }
    }
  }
}



// ==== 0x0050E340  HouseClass::COMStub_Ret1_1  this=HouseClass  sig=csp ====
int __stdcall HouseClass::COMStub_Ret1_1(HouseClass *this)
{
  return 1; /*0x50e345*/
}



// ==== 0x0050E350  HouseClass::COMStub_Ret1_2  this=HouseClass  sig=csp ====
int __stdcall HouseClass::COMStub_Ret1_2(HouseClass *this)
{
  return 1; /*0x50e355*/
}



// ==== 0x0050E360  AbstractClass::computeMovementCost  this=AbstractClass  sig=csp ====
int AbstractClass::computeMovementCost(AbstractClass *this)
{
  return 13; /*0x50e365*/
}



// ==== 0x0050E370  AbstractClass::checkPassability  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::checkPassability(AbstractClass *this)
{
  return this->ptr_10; /*0x50e373*/
}



// ==== 0x0050E380  AbstractClass::getMovementSpeed  this=AbstractClass  sig=csp ====
void *__thiscall AbstractClass::getMovementSpeed(AbstractClass *this, char a2)
{
  HouseClass::Destruct((int)this); /*0x50e383*/
  if ( (a2 & 1) != 0 ) /*0x50e38d*/
    __3_YAXPAX_Z(this); /*0x50e390*/
  return this; /*0x50e39a*/
}



// ==== 0x0050E3A0  sub_50E3A0  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_50E3A0(_DWORD *a1, int *a2, __int16 *a3, int a4)
{
  int v6; // ebx
  double v7; // st7
  double v8; // st7
  double v10; // [esp+10h] [ebp-18h]
  double v11; // [esp+18h] [ebp-10h]
  double v12; // [esp+20h] [ebp-8h]
  int v13; // [esp+2Ch] [ebp+4h]

  v6 = a2[2]; /*0x50e3c0*/
  v10 = (double)(*a3 - 0x3FFF) * -0.00009587672516830327; /*0x50e3c9*/
  v11 = (double)a4; /*0x50e3db*/
  v12 = (double)a2[1]; /*0x50e3e2*/
  v7 = Math::SinCos(v10); /*0x50e3e6*/
  v13 = Math::RoundToInt(v12 - v7 * v11); /*0x50e3f8*/
  v8 = Math::ArcTan2(v10); /*0x50e402*/
  *a1 = Math::RoundToInt(v8 * v11 + (double)*a2); /*0x50e41b*/
  a1[1] = v13; /*0x50e421*/
  a1[2] = v6; /*0x50e425*/
  return a1; /*0x50e41f*/
}



// ==== 0x0050E430  HouseClass::processRadar  this=HouseClass  sig=csp ====
char __thiscall HouseClass::processRadar(HouseClass *this, char a2, char a3, char a4)
{
  LOBYTE(this->AbstractClass) = a2; /*0x50e438*/
  BYTE1(this->AbstractClass) = a3; /*0x50e43e*/
  BYTE2(this->AbstractClass) = a4; /*0x50e441*/
  return a4; /*0x50e444*/
}



// ==== 0x0050E450  BuildLocation::InitCandidate  this=BuildLocation  sig=csp ====
_DWORD *__thiscall BuildLocation::InitCandidate(BuildLocation *this, int a2, _DWORD *a3)
{
  *this = (BuildLocation)a2; /*0x50e45a*/
  *(this + 1) = *(BuildLocation *)a3; /*0x50e45e*/
  *((_BYTE *)this + 8) = 0; /*0x50e463*/
  *((_DWORD *)this + 3) = 0; /*0x50e466*/
  return this; /*0x50e469*/
}



// ==== 0x0050E470  CellStruct::Equals  this=IUnknown  sig=csp ====
int __thiscall CellStruct::Equals(CellStruct *this, _WORD *a2)
{
  return LOWORD(this->field_0) == *a2 && HIWORD(this->field_0) == a2[1]; /*0x50e48b*/
}



// ==== 0x0050E4A0  _DynamicVectorClass_PBVBuildingTypeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_UScoutStruct___33::ddtor(_DynamicVectorClass_PBVBuildingTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x50e4a6*/
  this->m_10 = 0; /*0x50e4a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x50e4b0*/
  {
    __3_YAXPAX_Z(v2); /*0x50e4b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50e4be*/
  }
  BYTE1(this->m_C) = 0; /*0x50e4c1*/
  this->m_8 = 0; /*0x50e4c4*/
}



// ==== 0x0050E4D0  _DynamicVectorClass_PBVBuildingTypeClass::GetCapacity  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_UScoutStruct___33::GetCapacity(
        _DynamicVectorClass_PBVBuildingTypeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50e4d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x50e4e5*/
  else
    return 0; /*0x50e4d7*/
}



// ==== 0x0050E4F0  _VectorClass_PBVBuildingTypeClass::Count  this=VectorClass  sig=csp ====
int __thiscall VectorClass_BuildingType::Count(_VectorClass_PBVBuildingTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x50e4fa*/
}



// ==== 0x0050E500  _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_UAngerStruct::Destroy(_DynamicVectorClass_PAUStartingTechnoStruct_HouseClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x50e506*/
  this->m_10 = 0; /*0x50e509*/
  if ( v2 && BYTE1(this->m_C) ) /*0x50e510*/
  {
    __3_YAXPAX_Z(v2); /*0x50e516*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50e51e*/
  }
  BYTE1(this->m_C) = 0; /*0x50e521*/
  this->m_8 = 0; /*0x50e524*/
}



// ==== 0x0050E530  _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_UAngerStruct::GetItemIndex(
        _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50e530*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x50e545*/
  else
    return 0; /*0x50e537*/
}



// ==== 0x0050E550  _VectorClass_PAUStartingTechnoStruct_HouseClass::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UAngerStruct___16::Clear(_VectorClass_PAUStartingTechnoStruct_HouseClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x50e55a*/
}



// ==== 0x0050E560  _DynamicVectorClass_UAngerStruct::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_UAngerStruct::Destroy_0(_DynamicVectorClass_UAngerStruct *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x50e566*/
  this->m_10 = 0; /*0x50e569*/
  if ( v2 && BYTE1(this->m_C) ) /*0x50e570*/
  {
    __3_YAXPAX_Z(v2); /*0x50e576*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50e57e*/
  }
  BYTE1(this->m_C) = 0; /*0x50e581*/
  this->m_8 = 0; /*0x50e584*/
}



// ==== 0x0050E590  _DynamicVectorClass_UAngerStruct::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_UAngerStruct::GetItemIndex_0(_DynamicVectorClass_UAngerStruct *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50e590*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x50e5a5*/
  else
    return 0; /*0x50e597*/
}



// ==== 0x0050E5B0  _VectorClass_UAngerStruct::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UAngerStruct::Clear(_VectorClass_UAngerStruct *this, _DWORD *a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x50e5b0*/
  v4 = *(_DWORD *)(v3 + 8 * a3); /*0x50e5b7*/
  v5 = v3 + 8 * a3; /*0x50e5ba*/
  *a2 = v4; /*0x50e5c1*/
  a2[1] = *(_DWORD *)(v5 + 4); /*0x50e5c6*/
  return a2; /*0x50e5c9*/
}



// ==== 0x0050E5D0  ?$DynamicVectorClass@UScoutStruct@@::getTargetCoordinates  this=DynamicVector  sig=csp ====
void __thiscall AbstractClass::sub_50E5D0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x50e5d6*/
  *(_DWORD *)(this + 16) = 0; /*0x50e5d9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x50e5e0*/
  {
    __3_YAXPAX_Z(v2); /*0x50e5e6*/
    *(_DWORD *)(this + 4) = 0; /*0x50e5ee*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x50e5f1*/
  *(_DWORD *)(this + 8) = 0; /*0x50e5f4*/
}



// ==== 0x0050E600  ?$DynamicVectorClass@UScoutStruct@@::setTargetCoordinates  this=DynamicVector  sig=csp ====
unsigned int __thiscall AbstractClass::sub_50E600(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x50e600*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x50e615*/
  else
    return 0; /*0x50e607*/
}



// ==== 0x0050E620  _VectorClass_UScoutStruct::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UScoutStruct::Clear(_VectorClass_UScoutStruct *this, int a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x50e620*/
  v4 = *(_DWORD *)(v3 + 8 * a3); /*0x50e627*/
  v5 = v3 + 8 * a3; /*0x50e62a*/
  *(_DWORD *)a2 = v4; /*0x50e631*/
  *(_BYTE *)(a2 + 4) = *(_BYTE *)(v5 + 4); /*0x50e636*/
  return a2; /*0x50e639*/
}



// ==== 0x0050E640  VectorClass_ptr_BuildChoiceClass_int_ouseClass::Destroy_0  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
void __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::Destroy_0(
        VectorClass_ptr_BuildChoiceClass_int_ouseClass *this)
{
  void *Items; // eax

  Items = this->Items; /*0x50e646*/
  this->Count = 0; /*0x50e649*/
  if ( Items && this->IsAllocated ) /*0x50e650*/
  {
    __3_YAXPAX_Z(Items); /*0x50e656*/
    this->Items = 0; /*0x50e65e*/
  }
  this->IsAllocated = 0; /*0x50e661*/
  this->Capacity = 0; /*0x50e664*/
}



// ==== 0x0050E670  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex_1  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex_1(
        VectorClass_ptr_BuildChoiceClass_int_ouseClass *this,
        int a2)
{
  if ( this->IsInitialized ) /*0x50e670*/
    return (a2 - (unsigned int)this->Items) >> 2; /*0x50e685*/
  else
    return 0; /*0x50e677*/
}



// ==== 0x0050E690  _VectorClass_PAUBuildChoiceClass_HouseClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::Get(
        _VectorClass_PAUBuildChoiceClass_HouseClass *this,
        int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x50e69a*/
}



// ==== 0x0050E6A0  _DynamicVectorClass_PBVTeamTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_BuildingType::Destroy(_DynamicVectorClass_PBVTeamTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x50e6a6*/
  this->m_10 = 0; /*0x50e6a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x50e6b0*/
  {
    __3_YAXPAX_Z(v2); /*0x50e6b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50e6be*/
  }
  BYTE1(this->m_C) = 0; /*0x50e6c1*/
  this->m_8 = 0; /*0x50e6c4*/
}



// ==== 0x0050E6D0  _DynamicVectorClass_PBVTeamTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_BuildingType::GetItemIndex(_DynamicVectorClass_PBVTeamTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50e6d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x50e6e5*/
  else
    return 0; /*0x50e6d7*/
}



// ==== 0x0050E6F0  _VectorClass_PBVTeamTypeClass::GetElement  this=VectorClass  sig=csp ====
int __thiscall VectorClass_BuildingType::GetElement(_VectorClass_PBVTeamTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x50e6fa*/
}



// ==== 0x0050E700  _DynamicVectorClass__N::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass__N::Destroy(_DynamicVectorClass__N *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x50e706*/
  this->m_10 = 0; /*0x50e709*/
  if ( v2 && BYTE1(this->m_C) ) /*0x50e710*/
  {
    __3_YAXPAX_Z(v2); /*0x50e716*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50e71e*/
  }
  BYTE1(this->m_C) = 0; /*0x50e721*/
  this->m_8 = 0; /*0x50e724*/
}



// ==== 0x0050E730  _DynamicVectorClass__N::GetItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass__N::GetItemIndex(_DynamicVectorClass__N *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50e730*/
    return a2 - *(_DWORD *)&this->m_1[3]; /*0x50e743*/
  else
    return 0; /*0x50e737*/
}



// ==== 0x0050E750  _VectorClass__N::Clear  this=VectorClass  sig=csp ====
char __thiscall VectorClass__N::Clear(_VectorClass__N *this, int a2)
{
  return *(_BYTE *)(*(_DWORD *)&this->m_1[3] + a2); /*0x50e75a*/
}



// ==== 0x0050E760  _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass__N_18::Destroy(
        _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this)
{
  int v2; // eax

  v2 = *(_DWORD *)&this->m_1[3]; /*0x50e766*/
  this->m_10 = 0; /*0x50e769*/
  if ( v2 && BYTE1(this->m_C) ) /*0x50e770*/
  {
    __3_YAXPAX_Z((void *)(v2 - 4)); /*0x50e781*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50e789*/
  }
  BYTE1(this->m_C) = 0; /*0x50e78c*/
  this->m_8 = 0; /*0x50e78f*/
}



// ==== 0x0050E7A0  _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass__N_18::GetItemIndex(
        _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50e7a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x50e7b5*/
  else
    return 0; /*0x50e7a7*/
}



// ==== 0x0050E7C0  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass__N_18::Clear(
        _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        _DWORD *a2,
        int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x50e7c0*/
  v4 = *(_DWORD *)(v3 + 8 * a3); /*0x50e7c7*/
  v5 = v3 + 8 * a3; /*0x50e7ca*/
  *a2 = v4; /*0x50e7d1*/
  a2[1] = *(_DWORD *)(v5 + 4); /*0x50e7d6*/
  return a2; /*0x50e7d9*/
}



// ==== 0x0050E7E0  _TypeList_PBVTeamTypeClass::Constructor  this=TypeList  sig=csp ====
_DWORD *__thiscall VectorClass_BuildingType::Constructor(_TypeList_PBVTeamTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x50e7e3*/
  *(_DWORD *)this = &VectorClass<TeamTypeClass const *>::`vftable'; /*0x50e7e6*/
  if ( v3 && this->IsAllocated ) /*0x50e7f0*/
  {
    __3_YAXPAX_Z(v3); /*0x50e7f8*/
    this->Items = 0; /*0x50e800*/
  }
  this->IsAllocated = 0; /*0x50e80b*/
  this->Capacity = 0; /*0x50e811*/
  if ( (a2 & 1) != 0 ) /*0x50e818*/
    __3_YAXPAX_Z(this); /*0x50e81b*/
  return this; /*0x50e825*/
}



// ==== 0x0050E830  TeamTypeVector::CopyConstruct  this=VectorClass  sig=csp ====
_DWORD *__thiscall TeamTypeVector::CopyConstruct(TeamTypeVector *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x50e83d*/
  this->Capacity = 0; /*0x50e840*/
  this->IsInitialized = 1; /*0x50e843*/
  this->IsAllocated = 0; /*0x50e847*/
  *this = (TeamTypeVector)&VectorClass<TeamTypeClass const *>::`vftable'; /*0x50e84a*/
  if ( this != (TeamTypeVector *)a2 ) /*0x50e850*/
  {
    VectorClass::ClearAndFree3((int)this); /*0x50e852*/
    v3 = a2[2]; /*0x50e858*/
    this->Capacity = v3; /*0x50e85d*/
    if ( v3 ) /*0x50e860*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x50e866*/
      this->Items = v4; /*0x50e870*/
      if ( v4 ) /*0x50e873*/
      {
        v5 = this->Capacity; /*0x50e875*/
        v6 = 0; /*0x50e878*/
        this->IsAllocated = 1; /*0x50e87c*/
        if ( v5 > 0 ) /*0x50e880*/
        {
          do /*0x50e894*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x50e88b*/
            ++v6; /*0x50e891*/
          }
          while ( v6 < this->Capacity ); /*0x50e894*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x50e898*/
      this->IsAllocated = 0; /*0x50e89b*/
    }
  }
  this->Items = (TeamTypeVector)a2[4]; /*0x50e8a1*/
  *(this + 5) = (TeamTypeVector)a2[5]; /*0x50e8a7*/
  *this = (TeamTypeVector)&DynamicVectorClass<TeamTypeClass const *>::`vftable'; /*0x50e8aa*/
  return this; /*0x50e8b2*/
}



// ==== 0x0050E8C0  _DynamicVectorClass_PBVTeamTypeClass::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass__N_18::Constructor(_DynamicVectorClass_PBVTeamTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x50e8c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TeamTypeClass const *>::`vftable'; /*0x50e8c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x50e8d0*/
  {
    __3_YAXPAX_Z(v3); /*0x50e8d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50e8e0*/
  }
  BYTE1(this->m_C) = 0; /*0x50e8eb*/
  this->m_8 = 0; /*0x50e8f1*/
  if ( (a2 & 1) != 0 ) /*0x50e8f8*/
    __3_YAXPAX_Z(this); /*0x50e8fb*/
  return this->__pad_0; /*0x50e905*/
}



// ==== 0x0050E910  _VectorClass_PBVBuildingTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_BuildingType::AddRef(_VectorClass_PBVBuildingTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x50e912*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x50e91d*/
  {
    v3 = 0; /*0x50e91f*/
    if ( m_8 <= 0 ) /*0x50e923*/
      return 1; /*0x50e943*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x50e925*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x50e92b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x50e934*/
    {
      ++v3; /*0x50e936*/
      ++v4; /*0x50e937*/
      if ( v3 >= m_8 ) /*0x50e93c*/
        return 1; /*0x50e93c*/
    }
  }
  return 0; /*0x50e93e*/
}



// ==== 0x0050E950  _VectorClass_PBVBuildingTypeClass::Set  this=VectorClass  sig=csp ====
char __thiscall VectorClass_BuildingType::Set(_VectorClass_PBVBuildingTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x50e95c*/
  {
    LOBYTE(this->m_C) = 0; /*0x50e966*/
    if ( a3 ) /*0x50e96c*/
      v4 = a3; /*0x50e982*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x50e97e*/
    LOBYTE(this->m_C) = 1; /*0x50e986*/
    if ( v4 ) /*0x50e98a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x50e995*/
      {
        m_8 = this->m_8; /*0x50e99c*/
        if ( a2 < m_8 ) /*0x50e9a1*/
          m_8 = a2; /*0x50e9a3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x50e9a9*/
          ++i; /*0x50e9ae*/
        if ( BYTE1(this->m_C) ) /*0x50e9bb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50e9c6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x50e9ce*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x50e9d7*/
      this->m_8 = a2; /*0x50e9df*/
      BYTE1(this->m_C) = a3 == 0; /*0x50e9e2*/
      return 1; /*0x50e9e8*/
    }
    else
    {
      return 0; /*0x50e98f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVBuildingTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50e9f2*/
    return 1; /*0x50e9f8*/
  }
}



// ==== 0x0050EA00  _VectorClass_PBVBuildingTypeClass::Destroy  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass::Destroy(_VectorClass_PBVBuildingTypeClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->m_1[3]; /*0x50ea06*/
  if ( result && BYTE1(this->m_C) ) /*0x50ea0d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50ea13*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50ea1b*/
  }
  BYTE1(this->m_C) = 0; /*0x50ea1e*/
  this->m_8 = 0; /*0x50ea21*/
  return result; /*0x50ea24*/
}



// ==== 0x0050EA30  _VectorClass_PBVBuildingTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_BuildingType::GetSize(_VectorClass_PBVBuildingTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x50ea30*/
    return 0; /*0x50ea38*/
  m_8 = this->m_8; /*0x50ea3e*/
  result = 0; /*0x50ea41*/
  if ( m_8 <= 0 ) /*0x50ea45*/
    return -1; /*0x50ea5c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x50ea4b*/
  {
    if ( ++result >= m_8 ) /*0x50ea5a*/
      return -1; /*0x50ea5a*/
  }
  return result; /*0x50ea3a*/
}



// ==== 0x0050EA70  _VectorClass_PBVBuildingTypeClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_BuildingType::GetCapacity(_VectorClass_PBVBuildingTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50ea70*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x50ea85*/
  else
    return 0; /*0x50ea77*/
}



// ==== 0x0050EA90  _DynamicVectorClass_PBVBuildingTypeClass::Resize2  this=DynamicVector  sig=csp ====
char __thiscall GenericVector::Resize2(_DynamicVectorClass_PBVBuildingTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x50ea9c*/
  {
    LOBYTE(this->m_C) = 0; /*0x50eaa2*/
    if ( a3 ) /*0x50eaa8*/
      v4 = a3; /*0x50eabe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x50eaba*/
    LOBYTE(this->m_C) = 1; /*0x50eac2*/
    if ( !v4 ) /*0x50eac6*/
      return 0; /*0x50eb3a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x50eac8*/
    {
      m_8 = this->m_8; /*0x50eacf*/
      if ( a2 < m_8 ) /*0x50ead4*/
        m_8 = a2; /*0x50ead6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x50eadc*/
        ++i; /*0x50eae1*/
      if ( BYTE1(this->m_C) ) /*0x50eaee*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50eaf9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x50eb01*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x50eb0a*/
    this->m_8 = a2; /*0x50eb12*/
    BYTE1(this->m_C) = a3 == 0; /*0x50eb15*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVBuildingTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50eb1e*/
  }
  v7 = this->m_8; /*0x50eb21*/
  if ( v7 < this->m_10 ) /*0x50eb29*/
    this->m_10 = v7; /*0x50eb2b*/
  return 1; /*0x50eb2e*/
}



// ==== 0x0050EB40  _DynamicVectorClass_PBVBuildingTypeClass::GetSize  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_UScoutStruct___33::GetSize(_DynamicVectorClass_PBVBuildingTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x50eb40*/
  result = 0; /*0x50eb43*/
  if ( m_10 <= 0 ) /*0x50eb48*/
    return -1; /*0x50eb5f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x50eb4e*/
  {
    if ( ++result >= m_10 ) /*0x50eb5d*/
      return -1; /*0x50eb5d*/
  }
  return result; /*0x50eb62*/
}



// ==== 0x0050EB70  VectorClass::InsertAt  this=VectorClass  sig=csp ====
char __thiscall VectorClass::InsertAt(DynamicVectorClass *this, _DWORD *a2, int a3)
{
  int Capacity; // ecx
  int CapacityIncrement; // eax
  int Count; // edx
  _DWORD *v8; // edi

  Capacity = this->Capacity; /*0x50eb73*/
  if ( this->Count >= Capacity ) /*0x50eb7b*/
  {
    if ( !this->IsAllocated[0] && Capacity ) /*0x50eb86*/
      return 0; /*0x50eb86*/
    CapacityIncrement = this->CapacityIncrement; /*0x50eb88*/
    if ( CapacityIncrement <= 0 /*0x50eb98*/
      || !(*(unsigned __int8 (__thiscall **)(DynamicVectorClass *, int, _DWORD))(this->ptr_0 + 8))(
            this,
            Capacity + CapacityIncrement,
            0) )
    {
      return 0; /*0x50eb9f*/
    }
  }
  Count = this->Count; /*0x50eba5*/
  if ( a3 < Count - 1 ) /*0x50ebb2*/
    memcpy( /*0x50ebd7*/
      (void *)(this->Items + 16 * (a3 + 2)),
      (const void *)(this->Items + 16 * (a3 + 1)),
      16 * (Count + 0xFFFFFFF * (a3 + 1)));
  v8 = (_DWORD *)(this->Items + 16 * (a3 + 1)); /*0x50ebeb*/
  *v8 = *a2; /*0x50ebef*/
  v8[1] = a2[1]; /*0x50ebf4*/
  v8[2] = a2[2]; /*0x50ebfa*/
  v8[3] = a2[3]; /*0x50ec00*/
  ++this->Count; /*0x50ec08*/
  return 1; /*0x50eba1*/
}



// ==== 0x0050EC20  _VectorClass_PAUStartingTechnoStruct_HouseClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UAngerStruct___16::AddRef(_VectorClass_PAUStartingTechnoStruct_HouseClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x50ec22*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x50ec2d*/
  {
    v3 = 0; /*0x50ec2f*/
    if ( m_8 <= 0 ) /*0x50ec33*/
      return 1; /*0x50ec53*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x50ec35*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x50ec3b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x50ec44*/
    {
      ++v3; /*0x50ec46*/
      ++v4; /*0x50ec47*/
      if ( v3 >= m_8 ) /*0x50ec4c*/
        return 1; /*0x50ec4c*/
    }
  }
  return 0; /*0x50ec4e*/
}



// ==== 0x0050EC60  _VectorClass_PAUStartingTechnoStruct_HouseClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UAngerStruct___16::Release(
        _VectorClass_PAUStartingTechnoStruct_HouseClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x50ec6c*/
  {
    LOBYTE(this->m_C) = 0; /*0x50ec76*/
    if ( a3 ) /*0x50ec7c*/
      v4 = a3; /*0x50ec92*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x50ec8e*/
    LOBYTE(this->m_C) = 1; /*0x50ec96*/
    if ( v4 ) /*0x50ec9a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x50eca5*/
      {
        m_8 = this->m_8; /*0x50ecac*/
        if ( a2 < m_8 ) /*0x50ecb1*/
          m_8 = a2; /*0x50ecb3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x50ecb9*/
          ++i; /*0x50ecbe*/
        if ( BYTE1(this->m_C) ) /*0x50eccb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50ecd6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x50ecde*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x50ece7*/
      this->m_8 = a2; /*0x50ecef*/
      BYTE1(this->m_C) = a3 == 0; /*0x50ecf2*/
      return 1; /*0x50ecf8*/
    }
    else
    {
      return 0; /*0x50ec9f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUStartingTechnoStruct_HouseClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50ed02*/
    return 1; /*0x50ed08*/
  }
}



// ==== 0x0050ED10  _VectorClass_PAUStartingTechnoStruct_HouseClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UAngerStruct___16::ddtor(_VectorClass_PAUStartingTechnoStruct_HouseClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x50ed1d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50ed23*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50ed2b*/
  }
  BYTE1(this->m_C) = 0; /*0x50ed2e*/
  this->m_8 = 0; /*0x50ed31*/
}



// ==== 0x0050ED40  _VectorClass_PAUStartingTechnoStruct_HouseClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UAngerStruct___16::GetSize(
        _VectorClass_PAUStartingTechnoStruct_HouseClass *this,
        _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x50ed40*/
    return 0; /*0x50ed48*/
  m_8 = this->m_8; /*0x50ed4e*/
  result = 0; /*0x50ed51*/
  if ( m_8 <= 0 ) /*0x50ed55*/
    return -1; /*0x50ed6c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x50ed5b*/
  {
    if ( ++result >= m_8 ) /*0x50ed6a*/
      return -1; /*0x50ed6a*/
  }
  return result; /*0x50ed4a*/
}



// ==== 0x0050ED80  _VectorClass_PAUStartingTechnoStruct_HouseClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UAngerStruct___16::GetCapacity(
        _VectorClass_PAUStartingTechnoStruct_HouseClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50ed80*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x50ed95*/
  else
    return 0; /*0x50ed87*/
}



// ==== 0x0050EDA0  _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_UAngerStruct::SetCapacity(
        _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x50edac*/
  {
    LOBYTE(this->m_C) = 0; /*0x50edb2*/
    if ( a3 ) /*0x50edb8*/
      v4 = a3; /*0x50edce*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x50edca*/
    LOBYTE(this->m_C) = 1; /*0x50edd2*/
    if ( !v4 ) /*0x50edd6*/
      return 0; /*0x50ee4a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x50edd8*/
    {
      m_8 = this->m_8; /*0x50eddf*/
      if ( a2 < m_8 ) /*0x50ede4*/
        m_8 = a2; /*0x50ede6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x50edec*/
        ++i; /*0x50edf1*/
      if ( BYTE1(this->m_C) ) /*0x50edfe*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50ee09*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x50ee11*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x50ee1a*/
    this->m_8 = a2; /*0x50ee22*/
    BYTE1(this->m_C) = a3 == 0; /*0x50ee25*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUStartingTechnoStruct_HouseClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50ee2e*/
  }
  v7 = this->m_8; /*0x50ee31*/
  if ( v7 < this->m_10 ) /*0x50ee39*/
    this->m_10 = v7; /*0x50ee3b*/
  return 1; /*0x50ee3e*/
}



// ==== 0x0050EE50  _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_UAngerStruct::FindItemIndex(
        _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x50ee50*/
  result = 0; /*0x50ee53*/
  if ( m_10 <= 0 ) /*0x50ee58*/
    return -1; /*0x50ee6f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x50ee5e*/
  {
    if ( ++result >= m_10 ) /*0x50ee6d*/
      return -1; /*0x50ee6d*/
  }
  return result; /*0x50ee72*/
}



// ==== 0x0050EE80  _VectorClass_UAngerStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UAngerStruct::AddRef(_VectorClass_UAngerStruct *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x50ee8b*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x50ee90*/
  {
    v3 = 0; /*0x50ee92*/
    if ( m_8 <= 0 ) /*0x50ee96*/
      return 1; /*0x50eec6*/
    v4 = *(_DWORD *)(a2 + 4); /*0x50ee98*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x50ee9b*/
    v6 = (_DWORD *)(v4 + 4); /*0x50ee9e*/
    v7 = v4 - (_DWORD)v5; /*0x50eea1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x50eeb3*/
    {
      ++v3; /*0x50eeb5*/
      v6 += 2; /*0x50eeb6*/
      v5 += 2; /*0x50eeb9*/
      if ( v3 >= m_8 ) /*0x50eebe*/
        return 1; /*0x50eebe*/
    }
  }
  return 0; /*0x50eec0*/
}



// ==== 0x0050EEE0  _VectorClass_UAngerStruct::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UAngerStruct::Release(_VectorClass_UAngerStruct *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // esi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx

  v3 = a2; /*0x50eee2*/
  if ( a2 ) /*0x50eeee*/
  {
    v5 = a3; /*0x50eef4*/
    LOBYTE(this->m_C) = 0; /*0x50eef8*/
    if ( a3 ) /*0x50eefd*/
    {
      v9 = a3; /*0x50ef33*/
      if ( a2 - 1 >= 0 ) /*0x50ef37*/
      {
        v10 = a2; /*0x50ef39*/
        do /*0x50ef43*/
        {
          *v9 = 0; /*0x50ef3a*/
          v9[1] = 0; /*0x50ef3c*/
          v9 += 2; /*0x50ef3f*/
          --v10; /*0x50ef42*/
        }
        while ( v10 ); /*0x50ef43*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2); /*0x50ef07*/
      if ( v6 ) /*0x50ef11*/
      {
        v7 = (_DWORD *)v6; /*0x50ef16*/
        if ( a2 - 1 >= 0 ) /*0x50ef1a*/
        {
          v8 = a2; /*0x50ef1c*/
          do /*0x50ef26*/
          {
            *v7 = 0; /*0x50ef1d*/
            v7[1] = 0; /*0x50ef1f*/
            v7 += 2; /*0x50ef22*/
            --v8; /*0x50ef25*/
          }
          while ( v8 ); /*0x50ef26*/
        }
        v5 = (_DWORD *)v6; /*0x50ef28*/
      }
      else
      {
        v5 = 0; /*0x50ef2c*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x50ef47*/
    if ( v5 ) /*0x50ef4b*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x50ef56*/
      {
        m_8 = this->m_8; /*0x50ef5b*/
        if ( a2 < m_8 ) /*0x50ef60*/
          m_8 = a2; /*0x50ef62*/
        v13 = 0; /*0x50ef64*/
        if ( m_8 > 0 ) /*0x50ef68*/
        {
          do /*0x50ef87*/
          {
            v14 = 2 * v13; /*0x50ef6d*/
            v15 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * v13++); /*0x50ef76*/
            v5[v14] = *v15; /*0x50ef7d*/
            v5[v14 + 1] = v15[1]; /*0x50ef83*/
          }
          while ( v13 < m_8 ); /*0x50ef87*/
          v3 = a2; /*0x50ef89*/
        }
        if ( BYTE1(this->m_C) ) /*0x50ef8f*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50ef98*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x50efa0*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x50efab*/
      this->m_8 = v3; /*0x50efb1*/
      BYTE1(this->m_C) = a3 == 0; /*0x50efb4*/
      return 1; /*0x50efba*/
    }
    else
    {
      return 0; /*0x50ef50*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_UAngerStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50efc4*/
    return 1; /*0x50efca*/
  }
}



// ==== 0x0050EFD0  _VectorClass_UAngerStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UAngerStruct::ddtor(_VectorClass_UAngerStruct *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x50efdd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50efe3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50efeb*/
  }
  BYTE1(this->m_C) = 0; /*0x50efee*/
  this->m_8 = 0; /*0x50eff1*/
}



// ==== 0x0050F000  _VectorClass_UAngerStruct::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UAngerStruct::GetSize(_VectorClass_UAngerStruct *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x50f000*/
    return 0; /*0x50f00e*/
  m_8 = this->m_8; /*0x50f014*/
  result = 0; /*0x50f017*/
  if ( m_8 <= 0 ) /*0x50f01b*/
    return -1; /*0x50f03c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x50f021*/
  {
    if ( ++result >= m_8 ) /*0x50f03a*/
      return -1; /*0x50f03a*/
  }
  return result; /*0x50f00b*/
}



// ==== 0x0050F050  _VectorClass_UAngerStruct::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UAngerStruct::GetCapacity(_VectorClass_UAngerStruct *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50f050*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x50f065*/
  else
    return 0; /*0x50f057*/
}



// ==== 0x0050F070  _DynamicVectorClass_UAngerStruct::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_UAngerStruct::SetCapacity_0(_DynamicVectorClass_UAngerStruct *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x50f072*/
  if ( a2 ) /*0x50f07e*/
  {
    v5 = a3; /*0x50f084*/
    LOBYTE(this->m_C) = 0; /*0x50f088*/
    if ( a3 ) /*0x50f08d*/
    {
      v9 = a3; /*0x50f0c3*/
      if ( a2 - 1 >= 0 ) /*0x50f0c7*/
      {
        v10 = a2; /*0x50f0c9*/
        do /*0x50f0d3*/
        {
          *v9 = 0; /*0x50f0ca*/
          v9[1] = 0; /*0x50f0cc*/
          v9 += 2; /*0x50f0cf*/
          --v10; /*0x50f0d2*/
        }
        while ( v10 ); /*0x50f0d3*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2); /*0x50f097*/
      if ( v6 ) /*0x50f0a1*/
      {
        v7 = (_DWORD *)v6; /*0x50f0a6*/
        if ( a2 - 1 >= 0 ) /*0x50f0aa*/
        {
          v8 = a2; /*0x50f0ac*/
          do /*0x50f0b6*/
          {
            *v7 = 0; /*0x50f0ad*/
            v7[1] = 0; /*0x50f0af*/
            v7 += 2; /*0x50f0b2*/
            --v8; /*0x50f0b5*/
          }
          while ( v8 ); /*0x50f0b6*/
        }
        v5 = (_DWORD *)v6; /*0x50f0b8*/
      }
      else
      {
        v5 = 0; /*0x50f0bc*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x50f0d7*/
    if ( !v5 ) /*0x50f0db*/
      return 0; /*0x50f164*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x50f0e1*/
    {
      m_8 = this->m_8; /*0x50f0e6*/
      if ( a2 < m_8 ) /*0x50f0eb*/
        m_8 = a2; /*0x50f0ed*/
      v12 = 0; /*0x50f0ef*/
      if ( m_8 > 0 ) /*0x50f0f3*/
      {
        do /*0x50f112*/
        {
          v13 = 2 * v12; /*0x50f0f8*/
          v14 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * v12++); /*0x50f101*/
          v5[v13] = *v14; /*0x50f108*/
          v5[v13 + 1] = v14[1]; /*0x50f10e*/
        }
        while ( v12 < m_8 ); /*0x50f112*/
        v3 = a2; /*0x50f114*/
      }
      if ( BYTE1(this->m_C) ) /*0x50f11a*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50f123*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x50f12b*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x50f136*/
    this->m_8 = v3; /*0x50f13c*/
    BYTE1(this->m_C) = a3 == 0; /*0x50f13f*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_UAngerStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50f148*/
  }
  v15 = this->m_8; /*0x50f14b*/
  if ( v15 < this->m_10 ) /*0x50f153*/
    this->m_10 = v15; /*0x50f155*/
  return 1; /*0x50f158*/
}



// ==== 0x0050F170  _DynamicVectorClass_UAngerStruct::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_UAngerStruct::FindItemIndex_0(_DynamicVectorClass_UAngerStruct *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x50f170*/
  result = 0; /*0x50f175*/
  if ( m_10 <= 0 ) /*0x50f17b*/
    return -1; /*0x50f19c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x50f181*/
  {
    if ( ++result >= m_10 ) /*0x50f19a*/
      return -1; /*0x50f19a*/
  }
  return result; /*0x50f19f*/
}



// ==== 0x0050F1B0  _VectorClass_UScoutStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UScoutStruct::AddRef(_VectorClass_UScoutStruct *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  int v5; // eax
  _BYTE *v6; // ecx
  int v7; // ebp

  m_8 = this->m_8; /*0x50f1bb*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x50f1c0*/
  {
    v3 = 0; /*0x50f1c2*/
    if ( m_8 <= 0 ) /*0x50f1c6*/
      return 1; /*0x50f1f8*/
    v4 = *(_DWORD *)(a2 + 4); /*0x50f1c8*/
    v5 = *(_DWORD *)&this->m_1[3]; /*0x50f1cb*/
    v6 = (_BYTE *)(v4 + 4); /*0x50f1d0*/
    v7 = v4 - v5; /*0x50f1d3*/
    while ( *(_DWORD *)v5 == *(_DWORD *)(v5 + v7) && *(_BYTE *)(v5 + 4) == *v6 ) /*0x50f1e5*/
    {
      ++v3; /*0x50f1e7*/
      v6 += 8; /*0x50f1e8*/
      v5 += 8; /*0x50f1eb*/
      if ( v3 >= m_8 ) /*0x50f1f0*/
        return 1; /*0x50f1f0*/
    }
  }
  return 0; /*0x50f1f2*/
}



// ==== 0x0050F210  _VectorClass_UScoutStruct::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UScoutStruct::Release(_VectorClass_UScoutStruct *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx

  v3 = a2; /*0x50f212*/
  if ( a2 ) /*0x50f21e*/
  {
    v5 = a3; /*0x50f224*/
    LOBYTE(this->m_C) = 0; /*0x50f228*/
    if ( a3 ) /*0x50f22d*/
    {
      v9 = a3; /*0x50f263*/
      if ( a2 - 1 >= 0 ) /*0x50f267*/
      {
        v10 = a2; /*0x50f269*/
        do /*0x50f273*/
        {
          *(_DWORD *)v9 = 0; /*0x50f26a*/
          v9[4] = 0; /*0x50f26c*/
          v9 += 8; /*0x50f26f*/
          --v10; /*0x50f272*/
        }
        while ( v10 ); /*0x50f273*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2); /*0x50f237*/
      if ( v6 ) /*0x50f241*/
      {
        v7 = v6; /*0x50f246*/
        if ( a2 - 1 >= 0 ) /*0x50f24a*/
        {
          v8 = a2; /*0x50f24c*/
          do /*0x50f256*/
          {
            *(_DWORD *)v7 = 0; /*0x50f24d*/
            *(_BYTE *)(v7 + 4) = 0; /*0x50f24f*/
            v7 += 8; /*0x50f252*/
            --v8; /*0x50f255*/
          }
          while ( v8 ); /*0x50f256*/
        }
        v5 = (char *)v6; /*0x50f258*/
      }
      else
      {
        v5 = 0; /*0x50f25c*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x50f277*/
    if ( v5 ) /*0x50f27b*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x50f286*/
      {
        m_8 = this->m_8; /*0x50f28b*/
        if ( a2 < m_8 ) /*0x50f290*/
          m_8 = a2; /*0x50f292*/
        v13 = 0; /*0x50f294*/
        if ( m_8 > 0 ) /*0x50f298*/
        {
          do /*0x50f2b7*/
          {
            v14 = 8 * v13; /*0x50f29d*/
            v15 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * v13++); /*0x50f2a6*/
            *(_DWORD *)&v5[v14] = *v15; /*0x50f2ad*/
            *(_DWORD *)&v5[v14 + 4] = v15[1]; /*0x50f2b3*/
          }
          while ( v13 < m_8 ); /*0x50f2b7*/
          v3 = a2; /*0x50f2b9*/
        }
        if ( BYTE1(this->m_C) ) /*0x50f2bf*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50f2c8*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x50f2d0*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x50f2db*/
      this->m_8 = v3; /*0x50f2e1*/
      BYTE1(this->m_C) = a3 == 0; /*0x50f2e4*/
      return 1; /*0x50f2ea*/
    }
    else
    {
      return 0; /*0x50f280*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_UScoutStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50f2f4*/
    return 1; /*0x50f2fa*/
  }
}



// ==== 0x0050F300  _VectorClass_UScoutStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UScoutStruct::ddtor(_VectorClass_UScoutStruct *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x50f30d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50f313*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50f31b*/
  }
  BYTE1(this->m_C) = 0; /*0x50f31e*/
  this->m_8 = 0; /*0x50f321*/
}



// ==== 0x0050F330  _VectorClass_UScoutStruct::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UScoutStruct::GetSize(_VectorClass_UScoutStruct *this, int a2)
{
  int result; // eax
  int m_8; // esi
  int i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x50f330*/
    return 0; /*0x50f33e*/
  m_8 = this->m_8; /*0x50f344*/
  result = 0; /*0x50f347*/
  if ( m_8 <= 0 ) /*0x50f34b*/
    return -1; /*0x50f36c*/
  for ( i = *(_DWORD *)&this->m_1[3]; *(_DWORD *)i != *(_DWORD *)a2 || *(_BYTE *)(i + 4) != *(_BYTE *)(a2 + 4); i += 8 ) /*0x50f351*/
  {
    if ( ++result >= m_8 ) /*0x50f36a*/
      return -1; /*0x50f36a*/
  }
  return result; /*0x50f33b*/
}



// ==== 0x0050F380  _VectorClass_UScoutStruct::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UScoutStruct::GetCapacity(_VectorClass_UScoutStruct *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50f380*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x50f395*/
  else
    return 0; /*0x50f387*/
}



// ==== 0x0050F3A0  ?$DynamicVectorClass@UScoutStruct@@::evaluateTarget  this=DynamicVector  sig=csp ====
char __thiscall AbstractClass::sub_50F3A0(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  char *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x50f3a2*/
  if ( a2 ) /*0x50f3ae*/
  {
    v5 = a3; /*0x50f3b4*/
    this->IsInitialized = 0; /*0x50f3b8*/
    if ( a3 ) /*0x50f3bd*/
    {
      v9 = a3; /*0x50f3f3*/
      if ( a2 - 1 >= 0 ) /*0x50f3f7*/
      {
        v10 = a2; /*0x50f3f9*/
        do /*0x50f403*/
        {
          *(_DWORD *)v9 = 0; /*0x50f3fa*/
          v9[4] = 0; /*0x50f3fc*/
          v9 += 8; /*0x50f3ff*/
          --v10; /*0x50f402*/
        }
        while ( v10 ); /*0x50f403*/
      }
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(8 * a2); /*0x50f3c7*/
      if ( v6 ) /*0x50f3d1*/
      {
        v7 = v6; /*0x50f3d6*/
        if ( a2 - 1 >= 0 ) /*0x50f3da*/
        {
          v8 = a2; /*0x50f3dc*/
          do /*0x50f3e6*/
          {
            *(_DWORD *)v7 = 0; /*0x50f3dd*/
            v7[4] = 0; /*0x50f3df*/
            v7 += 8; /*0x50f3e2*/
            --v8; /*0x50f3e5*/
          }
          while ( v8 ); /*0x50f3e6*/
        }
        v5 = v6; /*0x50f3e8*/
      }
      else
      {
        v5 = 0; /*0x50f3ec*/
      }
    }
    this->IsInitialized = 1; /*0x50f407*/
    if ( !v5 ) /*0x50f40b*/
      return 0; /*0x50f494*/
    if ( this->Items ) /*0x50f411*/
    {
      v11 = this->q008; /*0x50f416*/
      if ( a2 < v11 ) /*0x50f41b*/
        v11 = a2; /*0x50f41d*/
      v12 = 0; /*0x50f41f*/
      if ( v11 > 0 ) /*0x50f423*/
      {
        do /*0x50f442*/
        {
          v13 = 8 * v12; /*0x50f428*/
          v14 = (_DWORD *)(this->Items + 8 * v12++); /*0x50f431*/
          *(_DWORD *)&v5[v13] = *v14; /*0x50f438*/
          *(_DWORD *)&v5[v13 + 4] = v14[1]; /*0x50f43e*/
        }
        while ( v12 < v11 ); /*0x50f442*/
        v3 = a2; /*0x50f444*/
      }
      if ( this->IsAllocated ) /*0x50f44a*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x50f453*/
        this->Items = 0; /*0x50f45b*/
      }
    }
    this->Items = v5; /*0x50f466*/
    this->q008 = v3; /*0x50f46c*/
    this->IsAllocated = a3 == 0; /*0x50f46f*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50f478*/
  }
  v15 = this->q008; /*0x50f47b*/
  if ( v15 < this->Items ) /*0x50f483*/
    this->Items = v15; /*0x50f485*/
  return 1; /*0x50f488*/
}



// ==== 0x0050F4A0  ?$DynamicVectorClass@UScoutStruct@@::selectBestTarget  this=DynamicVector  sig=csp ====
int __thiscall AbstractClass::sub_50F4A0(int *this, int a2)
{
  int v2; // esi
  int result; // eax
  int i; // ecx

  v2 = this->Items; /*0x50f4a3*/
  result = 0; /*0x50f4a6*/
  if ( v2 <= 0 ) /*0x50f4ab*/
    return -1; /*0x50f4cc*/
  for ( i = this->Items; *(_DWORD *)i != *(_DWORD *)a2 || *(_BYTE *)(i + 4) != *(_BYTE *)(a2 + 4); i += 8 ) /*0x50f4b1*/
  {
    if ( ++result >= v2 ) /*0x50f4ca*/
      return -1; /*0x50f4ca*/
  }
  return result; /*0x50f4cf*/
}



// ==== 0x0050F4E0  _VectorClass_PAUBuildChoiceClass_HouseClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::Add(
        _VectorClass_PAUBuildChoiceClass_HouseClass *this,
        int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x50f4e2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x50f4ed*/
  {
    v3 = 0; /*0x50f4ef*/
    if ( m_8 <= 0 ) /*0x50f4f3*/
      return 1; /*0x50f513*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x50f4f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x50f4fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x50f504*/
    {
      ++v3; /*0x50f506*/
      ++v4; /*0x50f507*/
      if ( v3 >= m_8 ) /*0x50f50c*/
        return 1; /*0x50f50c*/
    }
  }
  return 0; /*0x50f50e*/
}



// ==== 0x0050F520  _VectorClass_PAUBuildChoiceClass_HouseClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::Release(
        _VectorClass_PAUBuildChoiceClass_HouseClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x50f52c*/
  {
    LOBYTE(this->m_C) = 0; /*0x50f536*/
    if ( a3 ) /*0x50f53c*/
      v4 = a3; /*0x50f552*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x50f54e*/
    LOBYTE(this->m_C) = 1; /*0x50f556*/
    if ( v4 ) /*0x50f55a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x50f565*/
      {
        m_8 = this->m_8; /*0x50f56c*/
        if ( a2 < m_8 ) /*0x50f571*/
          m_8 = a2; /*0x50f573*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x50f579*/
          ++i; /*0x50f57e*/
        if ( BYTE1(this->m_C) ) /*0x50f58b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50f596*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x50f59e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x50f5a7*/
      this->m_8 = a2; /*0x50f5af*/
      BYTE1(this->m_C) = a3 == 0; /*0x50f5b2*/
      return 1; /*0x50f5b8*/
    }
    else
    {
      return 0; /*0x50f55f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUBuildChoiceClass_HouseClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50f5c2*/
    return 1; /*0x50f5c8*/
  }
}



// ==== 0x0050F5D0  _VectorClass_PAUBuildChoiceClass_HouseClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::Remove(
        _VectorClass_PAUBuildChoiceClass_HouseClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x50f5dd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50f5e3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50f5eb*/
  }
  BYTE1(this->m_C) = 0; /*0x50f5ee*/
  this->m_8 = 0; /*0x50f5f1*/
}



// ==== 0x0050F600  _VectorClass_PAUBuildChoiceClass_HouseClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetSize(
        _VectorClass_PAUBuildChoiceClass_HouseClass *this,
        _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x50f600*/
    return 0; /*0x50f608*/
  m_8 = this->m_8; /*0x50f60e*/
  result = 0; /*0x50f611*/
  if ( m_8 <= 0 ) /*0x50f615*/
    return -1; /*0x50f62c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x50f61b*/
  {
    if ( ++result >= m_8 ) /*0x50f62a*/
      return -1; /*0x50f62a*/
  }
  return result; /*0x50f60a*/
}



// ==== 0x0050F640  _VectorClass_PAUBuildChoiceClass_HouseClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetCapacity(
        _VectorClass_PAUBuildChoiceClass_HouseClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50f640*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x50f655*/
  else
    return 0; /*0x50f647*/
}



// ==== 0x0050F660  VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_6  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
char __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_6(
        VectorClass_ptr_BuildChoiceClass_int_ouseClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  void *Capacity; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x50f66c*/
  {
    this->IsInitialized = 0; /*0x50f672*/
    if ( a3 ) /*0x50f678*/
      v4 = a3; /*0x50f68e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x50f68a*/
    this->IsInitialized = 1; /*0x50f692*/
    if ( !v4 ) /*0x50f696*/
      return 0; /*0x50f70a*/
    if ( this->Items ) /*0x50f698*/
    {
      Capacity = this->Capacity; /*0x50f69f*/
      if ( a2 < (int)Capacity ) /*0x50f6a4*/
        Capacity = (void *)a2; /*0x50f6a6*/
      for ( i = 0; i < (int)Capacity; v4[i - 1] = *((_DWORD *)this->Items + i - 1) ) /*0x50f6ac*/
        ++i; /*0x50f6b1*/
      if ( this->IsAllocated ) /*0x50f6be*/
      {
        __3_YAXPAX_Z(this->Items); /*0x50f6c9*/
        this->Items = 0; /*0x50f6d1*/
      }
    }
    this->Items = v4; /*0x50f6da*/
    this->Capacity = (void *)a2; /*0x50f6e2*/
    this->IsAllocated = a3 == 0; /*0x50f6e5*/
  }
  else
  {
    (*(void (__thiscall **)(VectorClass_ptr_BuildChoiceClass_int_ouseClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50f6ee*/
  }
  v7 = this->Capacity; /*0x50f6f1*/
  if ( (int)v7 < (int)this->Count ) /*0x50f6f9*/
    this->Count = v7; /*0x50f6fb*/
  return 1; /*0x50f6fe*/
}



// ==== 0x0050F710  VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex_1  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex_1(
        VectorClass_ptr_BuildChoiceClass_int_ouseClass *this,
        _DWORD *a2)
{
  void *Count; // edx
  int result; // eax
  _DWORD *i; // ecx

  Count = this->Count; /*0x50f710*/
  result = 0; /*0x50f713*/
  if ( (int)Count <= 0 ) /*0x50f718*/
    return -1; /*0x50f72f*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x50f71e*/
  {
    if ( ++result >= (int)Count ) /*0x50f72d*/
      return -1; /*0x50f72d*/
  }
  return result; /*0x50f732*/
}



// ==== 0x0050F740  _VectorClass_PBVTeamTypeClass::CompareVectors  this=VectorClass  sig=csp ====
char __thiscall VectorClass_BuildingType::CompareVectors(_VectorClass_PBVTeamTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x50f742*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x50f74d*/
  {
    v3 = 0; /*0x50f74f*/
    if ( m_8 <= 0 ) /*0x50f753*/
      return 1; /*0x50f773*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x50f755*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x50f75b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x50f764*/
    {
      ++v3; /*0x50f766*/
      ++v4; /*0x50f767*/
      if ( v3 >= m_8 ) /*0x50f76c*/
        return 1; /*0x50f76c*/
    }
  }
  return 0; /*0x50f76e*/
}



// ==== 0x0050F780  _VectorClass_PBVTeamTypeClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall VectorClass_BuildingType::SetCapacity(_VectorClass_PBVTeamTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x50f78c*/
  {
    LOBYTE(this->m_C) = 0; /*0x50f796*/
    if ( a3 ) /*0x50f79c*/
      v4 = a3; /*0x50f7b2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x50f7ae*/
    LOBYTE(this->m_C) = 1; /*0x50f7b6*/
    if ( v4 ) /*0x50f7ba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x50f7c5*/
      {
        m_8 = this->m_8; /*0x50f7cc*/
        if ( a2 < m_8 ) /*0x50f7d1*/
          m_8 = a2; /*0x50f7d3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x50f7d9*/
          ++i; /*0x50f7de*/
        if ( BYTE1(this->m_C) ) /*0x50f7eb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50f7f6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x50f7fe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x50f807*/
      this->m_8 = a2; /*0x50f80f*/
      BYTE1(this->m_C) = a3 == 0; /*0x50f812*/
      return 1; /*0x50f818*/
    }
    else
    {
      return 0; /*0x50f7bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVTeamTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50f822*/
    return 1; /*0x50f828*/
  }
}



// ==== 0x0050F830  ?$VectorClass@PBVTeamTypeClass@@::ClearAndFree3  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ClearAndFree3(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x50f83d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x50f843*/
    *(_DWORD *)(this + 4) = 0; /*0x50f84b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x50f84e*/
  *(_DWORD *)(this + 8) = 0; /*0x50f851*/
}



// ==== 0x0050F860  _VectorClass_PBVTeamTypeClass::FindItemIndex  this=VectorClass  sig=csp ====
int __thiscall VectorClass_BuildingType::FindItemIndex(_VectorClass_PBVTeamTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x50f860*/
    return 0; /*0x50f868*/
  m_8 = this->m_8; /*0x50f86e*/
  result = 0; /*0x50f871*/
  if ( m_8 <= 0 ) /*0x50f875*/
    return -1; /*0x50f88c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x50f87b*/
  {
    if ( ++result >= m_8 ) /*0x50f88a*/
      return -1; /*0x50f88a*/
  }
  return result; /*0x50f86a*/
}



// ==== 0x0050F8A0  _VectorClass_PBVTeamTypeClass::GetItemIndex_0  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_BuildingType::GetItemIndex_0(_VectorClass_PBVTeamTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50f8a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x50f8b5*/
  else
    return 0; /*0x50f8a7*/
}



// ==== 0x0050F8C0  _DynamicVectorClass_PBVTeamTypeClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_BuildingType::SetCapacity_0(_DynamicVectorClass_PBVTeamTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x50f8cc*/
  {
    LOBYTE(this->m_C) = 0; /*0x50f8d2*/
    if ( a3 ) /*0x50f8d8*/
      v4 = a3; /*0x50f8ee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x50f8ea*/
    LOBYTE(this->m_C) = 1; /*0x50f8f2*/
    if ( !v4 ) /*0x50f8f6*/
      return 0; /*0x50f96a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x50f8f8*/
    {
      m_8 = this->m_8; /*0x50f8ff*/
      if ( a2 < m_8 ) /*0x50f904*/
        m_8 = a2; /*0x50f906*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x50f90c*/
        ++i; /*0x50f911*/
      if ( BYTE1(this->m_C) ) /*0x50f91e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50f929*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x50f931*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x50f93a*/
    this->m_8 = a2; /*0x50f942*/
    BYTE1(this->m_C) = a3 == 0; /*0x50f945*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVTeamTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50f94e*/
  }
  v7 = this->m_8; /*0x50f951*/
  if ( v7 < this->m_10 ) /*0x50f959*/
    this->m_10 = v7; /*0x50f95b*/
  return 1; /*0x50f95e*/
}



// ==== 0x0050F970  _DynamicVectorClass_PBVTeamTypeClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_BuildingType::FindItemIndex_0(_DynamicVectorClass_PBVTeamTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x50f970*/
  result = 0; /*0x50f973*/
  if ( m_10 <= 0 ) /*0x50f978*/
    return -1; /*0x50f98f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x50f97e*/
  {
    if ( ++result >= m_10 ) /*0x50f98d*/
      return -1; /*0x50f98d*/
  }
  return result; /*0x50f992*/
}



// ==== 0x0050F9A0  _VectorClass__N::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass__N::AddRef(_VectorClass__N *this, int a2)
{
  int m_8; // edi
  int v3; // eax

  m_8 = this->m_8; /*0x50f9a7*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x50f9af*/
  {
    v3 = 0; /*0x50f9b1*/
    if ( m_8 <= 0 ) /*0x50f9b5*/
      return 1; /*0x50f9d1*/
    while ( *(_BYTE *)(*(_DWORD *)&this->m_1[3] + v3) == *(_BYTE *)(*(_DWORD *)(a2 + 4) + v3) ) /*0x50f9c5*/
    {
      if ( ++v3 >= m_8 ) /*0x50f9ca*/
        return 1; /*0x50f9ca*/
    }
  }
  return 0; /*0x50f9cc*/
}



// ==== 0x0050F9E0  _VectorClass__N::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass__N::Remove(_VectorClass__N *this, signed int Size, char *a3)
{
  char *v4; // edi
  signed int m_8; // ecx
  signed int i; // eax

  if ( Size ) /*0x50f9ec*/
  {
    LOBYTE(this->m_C) = 0; /*0x50f9f6*/
    if ( a3 ) /*0x50f9fc*/
      v4 = a3; /*0x50fa0b*/
    else
      v4 = (char *)__2_YAPAXI_Z(Size); /*0x50fa07*/
    LOBYTE(this->m_C) = 1; /*0x50fa0f*/
    if ( v4 ) /*0x50fa13*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x50fa1e*/
      {
        m_8 = this->m_8; /*0x50fa25*/
        if ( Size < m_8 ) /*0x50fa2a*/
          m_8 = Size; /*0x50fa2c*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_BYTE *)(*(_DWORD *)&this->m_1[3] + i - 1) ) /*0x50fa32*/
          ++i; /*0x50fa37*/
        if ( BYTE1(this->m_C) ) /*0x50fa44*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50fa4f*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x50fa57*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x50fa60*/
      this->m_8 = Size; /*0x50fa68*/
      BYTE1(this->m_C) = a3 == 0; /*0x50fa6b*/
      return 1; /*0x50fa71*/
    }
    else
    {
      return 0; /*0x50fa18*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass__N *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50fa7b*/
    return 1; /*0x50fa81*/
  }
}



// ==== 0x0050FA90  _VectorClass__N::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass__N::ddtor(_VectorClass__N *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x50fa9d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50faa3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50faab*/
  }
  BYTE1(this->m_C) = 0; /*0x50faae*/
  this->m_8 = 0; /*0x50fab1*/
}



// ==== 0x0050FAC0  _VectorClass__N::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass__N::GetSize(_VectorClass__N *this, _BYTE *a2)
{
  int result; // eax
  int m_8; // esi
  int v4; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x50fac0*/
    return 0; /*0x50fac9*/
  m_8 = this->m_8; /*0x50face*/
  result = 0; /*0x50fad1*/
  if ( m_8 <= 0 ) /*0x50fad5*/
    return -1; /*0x50faea*/
  v4 = *(_DWORD *)&this->m_1[3]; /*0x50fadb*/
  while ( *(_BYTE *)(v4 + result) != *a2 ) /*0x50fae3*/
  {
    if ( ++result >= m_8 ) /*0x50fae8*/
      return -1; /*0x50fae8*/
  }
  return result; /*0x50fac8*/
}



// ==== 0x0050FB00  _VectorClass__N::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass__N::Get(_VectorClass__N *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50fb00*/
    return a2 - *(_DWORD *)&this->m_1[3]; /*0x50fb13*/
  else
    return 0; /*0x50fb07*/
}



// ==== 0x0050FB20  _DynamicVectorClass__N::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass__N::SetCapacity(_DynamicVectorClass__N *this, signed int Size, char *a3)
{
  char *v4; // edi
  signed int m_8; // ecx
  signed int i; // eax
  int v7; // eax

  if ( Size ) /*0x50fb2c*/
  {
    LOBYTE(this->m_C) = 0; /*0x50fb32*/
    if ( a3 ) /*0x50fb38*/
      v4 = a3; /*0x50fb47*/
    else
      v4 = (char *)__2_YAPAXI_Z(Size); /*0x50fb43*/
    LOBYTE(this->m_C) = 1; /*0x50fb4b*/
    if ( !v4 ) /*0x50fb4f*/
      return 0; /*0x50fbc3*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x50fb51*/
    {
      m_8 = this->m_8; /*0x50fb58*/
      if ( Size < m_8 ) /*0x50fb5d*/
        m_8 = Size; /*0x50fb5f*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_BYTE *)(*(_DWORD *)&this->m_1[3] + i - 1) ) /*0x50fb65*/
        ++i; /*0x50fb6a*/
      if ( BYTE1(this->m_C) ) /*0x50fb77*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50fb82*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x50fb8a*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x50fb93*/
    this->m_8 = Size; /*0x50fb9b*/
    BYTE1(this->m_C) = a3 == 0; /*0x50fb9e*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass__N *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50fba7*/
  }
  v7 = this->m_8; /*0x50fbaa*/
  if ( v7 < this->m_10 ) /*0x50fbb2*/
    this->m_10 = v7; /*0x50fbb4*/
  return 1; /*0x50fbb7*/
}



// ==== 0x0050FBD0  _DynamicVectorClass__N::Destroy_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass__N::Destroy_0(_DynamicVectorClass__N *this, _BYTE *a2)
{
  int m_10; // esi
  int result; // eax
  int v4; // ecx

  m_10 = this->m_10; /*0x50fbd1*/
  result = 0; /*0x50fbd4*/
  if ( m_10 <= 0 ) /*0x50fbd8*/
    return -1; /*0x50fbed*/
  v4 = *(_DWORD *)&this->m_1[3]; /*0x50fbde*/
  while ( *(_BYTE *)(v4 + result) != *a2 ) /*0x50fbe6*/
  {
    if ( ++result >= m_10 ) /*0x50fbeb*/
      return -1; /*0x50fbeb*/
  }
  return result; /*0x50fbf0*/
}



// ==== 0x0050FC00  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass__N_18::AddRef(
        _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x50fc0b*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x50fc10*/
  {
    v3 = 0; /*0x50fc12*/
    if ( m_8 <= 0 ) /*0x50fc16*/
      return 1; /*0x50fc46*/
    v4 = *(_DWORD *)(a2 + 4); /*0x50fc18*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x50fc1b*/
    v6 = (_DWORD *)(v4 + 4); /*0x50fc1e*/
    v7 = v4 - (_DWORD)v5; /*0x50fc21*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x50fc33*/
    {
      ++v3; /*0x50fc35*/
      v6 += 2; /*0x50fc36*/
      v5 += 2; /*0x50fc39*/
      if ( v3 >= m_8 ) /*0x50fc3e*/
        return 1; /*0x50fc3e*/
    }
  }
  return 0; /*0x50fc40*/
}



// ==== 0x0050FC60  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass__N_18::Remove(
        _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        int a2,
        int *a3)
{
  int *v4; // ebx
  int *v5; // eax
  int *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax

  if ( a2 ) /*0x50fc6c*/
  {
    v4 = a3; /*0x50fc72*/
    LOBYTE(this->m_C) = 0; /*0x50fc76*/
    if ( a3 ) /*0x50fc7c*/
    {
      *a3 = a2; /*0x50fcb7*/
      v6 = a3 + 1; /*0x50fcbb*/
      if ( a2 - 1 >= 0 ) /*0x50fcbe*/
      {
        v9 = a3 + 2; /*0x50fcc0*/
        v10 = a2; /*0x50fcc3*/
        do /*0x50fcce*/
        {
          *v9 = 0; /*0x50fcc4*/
          v9 += 2; /*0x50fcca*/
          --v10; /*0x50fccd*/
        }
        while ( v10 ); /*0x50fcce*/
      }
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x50fc86*/
      if ( v5 ) /*0x50fc90*/
      {
        *v5 = a2; /*0x50fc95*/
        v6 = v5 + 1; /*0x50fc99*/
        if ( a2 - 1 >= 0 ) /*0x50fc9c*/
        {
          v7 = v5 + 2; /*0x50fc9e*/
          v8 = a2; /*0x50fca1*/
          do /*0x50fcac*/
          {
            *v7 = 0; /*0x50fca2*/
            v7 += 2; /*0x50fca8*/
            --v8; /*0x50fcab*/
          }
          while ( v8 ); /*0x50fcac*/
        }
      }
      else
      {
        v6 = 0; /*0x50fcb0*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x50fcd2*/
    if ( v6 ) /*0x50fcd6*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x50fce1*/
      {
        m_8 = this->m_8; /*0x50fce8*/
        if ( a2 < m_8 ) /*0x50fced*/
          m_8 = a2; /*0x50fcef*/
        v13 = 0; /*0x50fcf1*/
        if ( m_8 > 0 ) /*0x50fcf5*/
        {
          do /*0x50fd0d*/
          {
            v14 = *(_DWORD *)&this->m_1[3]; /*0x50fcf7*/
            ++v13; /*0x50fcfa*/
            v6[2 * v13 - 2] = *(_DWORD *)(v14 + 8 * v13 - 8); /*0x50fd01*/
            v6[2 * v13 - 1] = *(_DWORD *)(v14 + 8 * v13 - 4); /*0x50fd09*/
          }
          while ( v13 < m_8 ); /*0x50fd0d*/
          v4 = a3; /*0x50fd0f*/
        }
        if ( BYTE1(this->m_C) ) /*0x50fd13*/
        {
          v15 = *(_DWORD *)&this->m_1[3]; /*0x50fd1a*/
          if ( v15 ) /*0x50fd1f*/
            __3_YAXPAX_Z((void *)(v15 - 4)); /*0x50fd29*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x50fd31*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v6; /*0x50fd3a*/
      this->m_8 = a2; /*0x50fd42*/
      BYTE1(this->m_C) = v4 == 0; /*0x50fd45*/
      return 1; /*0x50fd4b*/
    }
    else
    {
      return 0; /*0x50fcdb*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50fd55*/
    return 1; /*0x50fd5b*/
  }
}



// ==== 0x0050FD70  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass__N_18::ddtor(
        _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this)
{
  int v2; // eax

  v2 = *(_DWORD *)&this->m_1[3]; /*0x50fd76*/
  if ( v2 && BYTE1(this->m_C) ) /*0x50fd7d*/
  {
    __3_YAXPAX_Z((void *)(v2 - 4)); /*0x50fd8e*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50fd96*/
  }
  BYTE1(this->m_C) = 0; /*0x50fd99*/
  this->m_8 = 0; /*0x50fd9c*/
}



// ==== 0x0050FDB0  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass__N_18::GetSize(
        _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x50fdb0*/
    return 0; /*0x50fdbe*/
  m_8 = this->m_8; /*0x50fdc4*/
  result = 0; /*0x50fdc7*/
  if ( m_8 <= 0 ) /*0x50fdcb*/
    return -1; /*0x50fdec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x50fdd1*/
  {
    if ( ++result >= m_8 ) /*0x50fdea*/
      return -1; /*0x50fdea*/
  }
  return result; /*0x50fdbb*/
}



// ==== 0x0050FE00  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::Get  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass__N_18::Get(
        _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50fe00*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x50fe15*/
  else
    return 0; /*0x50fe07*/
}



// ==== 0x0050FE20  _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass__N_18::SetCapacity(
        _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        int a2,
        int *a3)
{
  int *v4; // ebp
  int *v5; // eax
  int *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  int v13; // edx
  int *v14; // eax
  int *v15; // ebp
  int v16; // eax

  if ( a2 ) /*0x50fe2c*/
  {
    v4 = a3; /*0x50fe32*/
    LOBYTE(this->m_C) = 0; /*0x50fe36*/
    if ( a3 ) /*0x50fe3c*/
    {
      *a3 = a2; /*0x50fe77*/
      v6 = a3 + 1; /*0x50fe7c*/
      if ( a2 - 1 >= 0 ) /*0x50fe7f*/
      {
        v9 = a3 + 2; /*0x50fe81*/
        v10 = a2; /*0x50fe84*/
        do /*0x50fe8f*/
        {
          *v9 = 0; /*0x50fe85*/
          v9 += 2; /*0x50fe8b*/
          --v10; /*0x50fe8e*/
        }
        while ( v10 ); /*0x50fe8f*/
      }
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x50fe46*/
      if ( v5 ) /*0x50fe50*/
      {
        *v5 = a2; /*0x50fe55*/
        v6 = v5 + 1; /*0x50fe59*/
        if ( a2 - 1 >= 0 ) /*0x50fe5c*/
        {
          v7 = v5 + 2; /*0x50fe5e*/
          v8 = a2; /*0x50fe61*/
          do /*0x50fe6c*/
          {
            *v7 = 0; /*0x50fe62*/
            v7 += 2; /*0x50fe68*/
            --v8; /*0x50fe6b*/
          }
          while ( v8 ); /*0x50fe6c*/
        }
      }
      else
      {
        v6 = 0; /*0x50fe70*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x50fe93*/
    if ( !v6 ) /*0x50fe97*/
      return 0; /*0x50ff37*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x50fe9d*/
    {
      m_8 = this->m_8; /*0x50fea4*/
      if ( a2 < m_8 ) /*0x50fea9*/
        m_8 = a2; /*0x50feab*/
      v12 = 0; /*0x50fead*/
      if ( m_8 > 0 ) /*0x50feb1*/
      {
        do /*0x50fec9*/
        {
          v13 = *(_DWORD *)&this->m_1[3]; /*0x50feb3*/
          ++v12; /*0x50feb6*/
          v6[2 * v12 - 2] = *(_DWORD *)(v13 + 8 * v12 - 8); /*0x50febd*/
          v6[2 * v12 - 1] = *(_DWORD *)(v13 + 8 * v12 - 4); /*0x50fec5*/
        }
        while ( v12 < m_8 ); /*0x50fec9*/
        v4 = a3; /*0x50fecb*/
      }
      if ( BYTE1(this->m_C) ) /*0x50fecf*/
      {
        v14 = *(int **)&this->m_1[3]; /*0x50fed6*/
        if ( v14 ) /*0x50fedb*/
        {
          v15 = v14 - 1; /*0x50fee0*/
          Array::ForEachReverse(v14, 8, *(v14 - 1), (int (__thiscall *)(int))nullsub_145); /*0x50feec*/
          __3_YAXPAX_Z(v15); /*0x50fef2*/
          v4 = a3; /*0x50fef7*/
        }
        *(_DWORD *)&this->m_1[3] = 0; /*0x50fefe*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x50ff07*/
    this->m_8 = a2; /*0x50ff0f*/
    BYTE1(this->m_C) = v4 == 0; /*0x50ff12*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50ff1b*/
  }
  v16 = this->m_8; /*0x50ff1e*/
  if ( v16 < this->m_10 ) /*0x50ff26*/
    this->m_10 = v16; /*0x50ff28*/
  return 1; /*0x50ff2b*/
}



// ==== 0x0050FF40  nullsub_145  this=-  sig=ida-proto ====
void __thiscall nullsub_145(void *this)
{
  ; /*0x50ff40*/
}



// ==== 0x0050FF50  HouseClass::AddCoordTrackingEntry  this=HouseClass  sig=csp ====
char __thiscall HouseClass::AddCoordTrackingEntry(HouseClass *this, _DWORD *a2)
{
  void *ptr_8; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax
  _DWORD *ptr_4; // edx

  ptr_8 = this->?; /*0x50ff53*/
  if ( this->? >= (int)ptr_8 ) /*0x50ff5b*/
  {
    if ( !BYTE1(this->?) && ptr_8 ) /*0x50ff66*/
      return 0; /*0x50ff66*/
    abstractFlags = this->?; /*0x50ff68*/
    if ( abstractFlags <= 0 /*0x50ff78*/
      || !(*((unsigned __int8 (__thiscall **)(HouseClass *, int, _DWORD))this->AbstractClass + 2))(
            this,
            (int)ptr_8 + abstractFlags,
            0) )
    {
      return 0; /*0x50ff7f*/
    }
  }
  uniqueId = this->?; /*0x50ff85*/
  ptr_4 = this->?; /*0x50ff88*/
  this->? = uniqueId + 1; /*0x50ff8e*/
  ptr_4[2 * uniqueId] = *a2; /*0x50ff97*/
  ptr_4[2 * uniqueId + 1] = a2[1]; /*0x50ff9e*/
  return 1; /*0x50ff81*/
}



// ==== 0x0050FFB0  _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass__N_18::FindItemIndex(
        _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x50ffb0*/
  result = 0; /*0x50ffb5*/
  if ( m_10 <= 0 ) /*0x50ffbb*/
    return -1; /*0x50ffdc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x50ffc1*/
  {
    if ( ++result >= m_10 ) /*0x50ffda*/
      return -1; /*0x50ffda*/
  }
  return result; /*0x50ffdf*/
}



// ==== 0x0050FFF0  _VectorClass_PBVBuildingTypeClass::Get  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_BuildingType::Get(_VectorClass_PBVBuildingTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x50fff3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x50fff6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x510000*/
  {
    __3_YAXPAX_Z(v3); /*0x510008*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x510010*/
  }
  BYTE1(this->m_C) = 0; /*0x51001b*/
  this->m_8 = 0; /*0x510021*/
  if ( (a2 & 1) != 0 ) /*0x510028*/
    __3_YAXPAX_Z(this); /*0x51002b*/
  return this->__pad_0; /*0x510035*/
}



// ==== 0x00500200  BuildingPlacement::FindPosition  this=BuildingPlacement  sig=csp ====
_DWORD *__thiscall BuildingPlacement::FindPosition(HouseClass *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int v5; // ebx
  int v6; // ebx
  int v7; // eax
  int *v8; // eax
  _DWORD *v9; // edx
  int v10; // eax
  int v11; // esi
  int TileIndex; // eax
  int v13; // ecx
  __int16 v15[2]; // [esp+Ch] [ebp-18h] BYREF
  int v16; // [esp+10h] [ebp-14h] BYREF
  _DWORD v17[4]; // [esp+14h] [ebp-10h] BYREF

  v3 = a3; /*0x500205*/
  v5 = (*(int (__thiscall **)(_DWORD *))(*a3 + 732))(a3); /*0x50021a*/
  v6 = (*(int (__thiscall **)(_DWORD *))(*v3 + 728))(v3) + v5; /*0x500222*/
  if ( (*(int (__thiscall **)(_DWORD *))(*v3 + 724))(v3) + v6 ) /*0x50022e*/
    v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 4); /*0x50024b*/
  else
    v7 = 0; /*0x500237*/
  v8 = HouseClass::GenerateAttackCoords(this, &a3, v7); /*0x500258*/
  v9 = v3 + 39; /*0x500265*/
  v16 = *v8; /*0x500267*/
  v10 = v3[39]; /*0x500271*/
  v15[0] = 0; /*0x500276*/
  v11 = v3[40]; /*0x50027b*/
  v15[1] = 0; /*0x50027e*/
  v17[3] = v9[2]; /*0x500286*/
  LOWORD(a3) = v10 / 256; /*0x500296*/
  HIWORD(a3) = v11 / 256; /*0x5002b2*/
  TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3, 0, 0); /*0x5002cf*/
  v13 = *LayerClass::Pathfinding_Find( /*0x5002ea*/
           &stru_87F5F0.__pad_58[416],
           (int)v17,
           v17,
           (__int16 *)&v16,
           1,
           TileIndex,
           0,
           0,
           1,
           1,
           0,
           0,
           0,
           1,
           v15,
           0,
           0);
  *a2 = v13; /*0x5002f2*/
  return a2; /*0x5002f0*/
}



// ==== 0x00500300  CellClass::ScanOccupiers  this=CellClass  sig=csp ====
_DWORD *__thiscall CellClass::ScanOccupiers(CellClass *this, _DWORD *a2)
{
  double v2; // st7
  CellClass *v4; // edi
  int v5; // ecx
  int v6; // edx
  char *v7; // ebp
  CellClass *v8; // eax
  _BYTE *Building; // eax
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // ecx
  bool v13; // al
  PathfindingClass *v14; // edi
  unsigned int *v15; // eax
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  _DWORD *result; // eax
  int v21; // [esp+20h] [ebp-3Ch]
  int v22; // [esp+24h] [ebp-38h]
  int v24; // [esp+2Ch] [ebp-30h]
  _DWORD *v25; // [esp+30h] [ebp-2Ch]
  __int16 v26[2]; // [esp+34h] [ebp-28h] BYREF
  int v27; // [esp+38h] [ebp-24h]
  int v28; // [esp+3Ch] [ebp-20h]
  int v29; // [esp+40h] [ebp-1Ch]
  char v30[12]; // [esp+44h] [ebp-18h] BYREF
  char v31[12]; // [esp+50h] [ebp-Ch] BYREF
  __int16 v32; // [esp+60h] [ebp+4h]
  __int16 v33; // [esp+62h] [ebp+6h]

  v4 = this; /*0x50030c*/
  v25 = 0; /*0x500329*/
  v5 = *a2 / 256; /*0x500334*/
  v6 = a2[1] / 256; /*0x500337*/
  v22 = 0; /*0x50033c*/
  v32 = v5; /*0x500340*/
  v33 = v6; /*0x500345*/
  v7 = &g_MissionQueueFrame.waypoints[2150]; /*0x500351*/
  v24 = 369; /*0x500356*/
  while ( 1 )
  {
    LOWORD(v21) = *(_WORD *)v7 + v5; /*0x500375*/
    HIWORD(v21) = v6 + *((_WORD *)v7 + 1); /*0x50037a*/
    *(_DWORD *)v26 = v21; /*0x500385*/
    v8 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26); /*0x50038f*/
    Building = CellClass::FindBuilding(v8, 1); /*0x500396*/
    v10 = Building; /*0x50039b*/
    if ( Building && !Building[129] )
    {
      v11 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)Building + 60))(Building); /*0x5003b7*/
      if ( !v11
        || (CellClass *)v11 != v4
        && ((v12 = *(_DWORD *)(v11 + 48), v12 != *(_DWORD *)&v4->__pad_28[8])
          ? (v12 == -1
           ? (v13 = 0)
           : (v13 = (v4[68].unknown68 & (1 << v12)) != 0))
          : (v13 = 1),
            !v13) )
      {
        v14 = (PathfindingClass *)v10[135]; /*0x5003f9*/
        v15 = (unsigned int *)(*(int (__thiscall **)(_DWORD *, char *))(*v10 + 72))(v10, v30); /*0x500406*/
        if ( PathfindingClass::FindPath(v14, v15) == -1 /*0x500434*/
          && (*(int (__thiscall **)(_DWORD *))(*v10 + 456))(v10) >= -20
          && v10[136] != 2 )
        {
          v16 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v10 + 72))(v10, v31); /*0x50043f*/
          v17 = a2[1]; /*0x500446*/
          v27 = *a2 - *v16; /*0x50044b*/
          v18 = a2[2]; /*0x500454*/
          v28 = v17 - v16[1]; /*0x500457*/
          v29 = v18 - v16[2]; /*0x500467*/
          Math::Sqrt((double)v27 * (double)v27 + (double)v29 * (double)v29 + (double)v28 * (double)v28); /*0x50048c*/
          LOWORD(v19) = Math::RoundToInt(v2); /*0x500494*/
          if ( !v22 || v19 < v22 ) /*0x5004a3*/
          {
            v22 = v19; /*0x5004a5*/
            v25 = v10; /*0x5004a9*/
          }
        }
        v4 = this; /*0x5004ad*/
      }
    }
    v7 += 4; /*0x5004b5*/
    if ( !--v24 ) /*0x5004bd*/
      break; /*0x5004bd*/
    LOWORD(v6) = v33; /*0x500361*/
    LOWORD(v5) = v32; /*0x500361*/
  }
  result = v25; /*0x5004c3*/
  if ( !v25 ) /*0x5004ca*/
    return 0; /*0x5004cc*/
  return result; /*0x5004ce*/
}



// ==== 0x005004E0  GetHouseTechLevel  this=AbstractClass  sig=ida-proto ====
int __fastcall House_GetTechLevel(int a1, int a2)
{
  int v4; // eax

  if ( a2 < 0 ) /*0x5004e5*/
    return 0; /*0x5004e7*/
  v4 = TechnoTypeClass::GetByTypeAndIndex(a1, a2); /*0x5004ed*/
  if ( a1 == 6 || a1 == 7 ) /*0x5004fa*/
    return *(_DWORD *)(v4 + 3592); /*0x500500*/
  else
    return 0; /*0x5004fc*/
}



// ==== 0x00500510  HouseClass::GetBuildLimit  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GetBuildLimit(HouseClass *this, int a2, char a3, int a4)
{
  int result; // eax

  switch ( a2 ) /*0x500522*/
  {
    case 1: /*0x500522*/
    case 40: /*0x500522*/
      if ( a3 ) /*0x500538*/
        result = (int)this->primaryForShips; /*0x50053a*/
      else
        result = (int)this->primaryForVehicles; /*0x500543*/
      break; /*0x500540*/
    case 2: /*0x500522*/
    case 3: /*0x500522*/
      result = (int)this->primaryForAircraft; /*0x500565*/
      break; /*0x50056b*/
    case 6: /*0x500522*/
    case 7: /*0x500522*/
      if ( a4 == 5 ) /*0x500551*/
        result = (int)this->primaryForDefenses; /*0x500553*/
      else
        result = (int)this->primaryForBuildings; /*0x50055c*/
      break; /*0x500559*/
    case 15: /*0x500522*/
    case 16: /*0x500522*/
      result = (int)this->primaryForInfantry; /*0x500529*/
      break; /*0x50052f*/
    default:
      result = 0; /*0x50056e*/
      break; /*0x50056e*/
  }
  return result; /*0x50052f*/
}



// ==== 0x005005B0  SidebarClass::MarkTabForRebuild  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::MarkTabForRebuild(SidebarClass *this, int a2, char a3, int a4)
{
  char result; // al

  result = a2 - 1; /*0x5005b5*/
  switch ( a2 ) /*0x5005c5*/
  {
    case 1: /*0x5005c5*/
    case 40: /*0x5005c5*/
      goto LABEL_3;
    case 2: /*0x5005c5*/
    case 3: /*0x5005c5*/
      *((_BYTE *)this + 21456) = 1; /*0x50060b*/
      break; /*0x50060b*/
    case 6: /*0x5005c5*/
    case 7: /*0x5005c5*/
      if ( a4 == 5 ) /*0x5005f3*/
        *((_BYTE *)this + 21464) = 1; /*0x5005f5*/
      else
        *((_BYTE *)this + 21460) = 1; /*0x500600*/
      break; /*0x5005fd*/
    case 15: /*0x5005c5*/
    case 16: /*0x5005c5*/
      *((_BYTE *)this + 21457) = 1; /*0x5005cc*/
LABEL_3:
      result = a3; /*0x5005d2*/
      if ( a3 ) /*0x5005d8*/
        *((_BYTE *)this + 21459) = 1; /*0x5005da*/
      else
        *((_BYTE *)this + 21458) = 1; /*0x5005e4*/
      break; /*0x5005e1*/
    default:
      return result;
  }
  return result; /*0x5005e0*/
}



// ==== 0x00500700  SidebarClass::getTypeProductionCount  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::getTypeProductionCount(SidebarClass *this, int a2, char a3, int a4)
{
  char result; // al

  switch ( a2 ) /*0x500712*/
  {
    case 1: /*0x500712*/
    case 40: /*0x500712*/
      if ( a3 ) /*0x500728*/
        result = *((_BYTE *)this + 21459); /*0x50072a*/
      else
        result = *((_BYTE *)this + 21458); /*0x500733*/
      break; /*0x500730*/
    case 2: /*0x500712*/
    case 3: /*0x500712*/
      result = *((_BYTE *)this + 21456); /*0x500755*/
      break; /*0x50075b*/
    case 6: /*0x500712*/
    case 7: /*0x500712*/
      if ( a4 == 5 ) /*0x500741*/
        result = *((_BYTE *)this + 21464); /*0x500743*/
      else
        result = *((_BYTE *)this + 21460); /*0x50074c*/
      break; /*0x500749*/
    case 15: /*0x500712*/
    case 16: /*0x500712*/
      result = *((_BYTE *)this + 21457); /*0x500719*/
      break; /*0x50071f*/
    default:
      result = 0; /*0x50075e*/
      break; /*0x50075e*/
  }
  return result; /*0x50071f*/
}



// ==== 0x005007A0  Sidebar::Dispatch  this=HouseClass  sig=csp ====
char __thiscall Sidebar::Dispatch(Sidebar *this, int a2, char a3, int a4, char a5)
{
  char result; // al

  result = a2 - 1; /*0x5007a5*/
  switch ( a2 ) /*0x5007b7*/
  {
    case 1: /*0x5007b7*/
    case 40: /*0x5007b7*/
      goto LABEL_3;
    case 2: /*0x5007b7*/
    case 3: /*0x5007b7*/
      this->HouseClass_field_53D0 = a5; /*0x500807*/
      break; /*0x500807*/
    case 6: /*0x5007b7*/
    case 7: /*0x5007b7*/
      if ( a4 == 5 ) /*0x5007e5*/
      {
        this->q53D8 = a5; /*0x5007ec*/
      }
      else
      {
        this->q53D4 = a5; /*0x5007fa*/
        result = a5; /*0x5007f5*/
      }
      break; /*0x5007f2*/
    case 15: /*0x5007b7*/
    case 16: /*0x5007b7*/
      this->q53D1 = a5; /*0x5007be*/
LABEL_3:
      result = a3; /*0x5007c4*/
      if ( a3 ) /*0x5007ca*/
        this->q53D3 = a5; /*0x5007cc*/
      else
        this->q53D2 = a5; /*0x5007d6*/
      break; /*0x5007d3*/
    default:
      return result;
  }
  return result; /*0x5007d2*/
}



// ==== 0x00500910  HouseClass::GetFactoryCount  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GetFactoryCount(HouseClass *this, int a2, char a3)
{
  int *p_numShipyards; // eax
  int result; // eax

  switch ( a2 ) /*0x500922*/
  {
    case 1: /*0x500922*/
    case 40: /*0x500922*/
      if ( a3 ) /*0x50092f*/
        p_numShipyards = &this->numShipyards; /*0x500931*/
      else
        p_numShipyards = &this->numWarFactories; /*0x500939*/
      goto LABEL_8; /*0x500937*/
    case 2: /*0x500922*/
    case 3: /*0x500922*/
      p_numShipyards = &this->numAirpads; /*0x500941*/
      goto LABEL_8; /*0x500947*/
    case 6: /*0x500922*/
    case 7: /*0x500922*/
      p_numShipyards = &this->numConYards; /*0x500951*/
      goto LABEL_8; /*0x500951*/
    case 15: /*0x500922*/
    case 16: /*0x500922*/
      p_numShipyards = &this->numBarracks; /*0x500949*/
LABEL_8:
      if ( !p_numShipyards ) /*0x500959*/
        goto LABEL_10; /*0x500959*/
      result = *p_numShipyards; /*0x50095b*/
      break; /*0x50095d*/
    default:
LABEL_10:
      result = 0; /*0x500960*/
      break; /*0x500960*/
  }
  return result; /*0x50095d*/
}



// ==== 0x005009B0  HouseClass::LoadTypeList  this=HouseClass  sig=csp ====
int __usercall HouseClass::LoadTypeList@<eax>(INIClass *this@<ecx>, double a2@<st0>)
{
  int v3; // ebx
  unsigned __int8 *StringByIndex; // eax
  int v5; // esi
  int *v6; // eax
  int v7; // esi
  int result; // eax
  int v9; // edi
  bool v10; // zf
  int v11; // esi
  int i; // esi
  int *v13; // eax
  int v14; // eax
  int KeyCount; // [esp+10h] [ebp-30h]
  char Source[20]; // [esp+14h] [ebp-2Ch] BYREF
  char Destination[20]; // [esp+28h] [ebp-18h] BYREF
  char v18; // [esp+3Ch] [ebp-4h]

  v3 = 0; /*0x5009c3*/
  KeyCount = INIClass::GetKeyCount(this->__pad_0, g_INI_Key_Houses); /*0x5009c7*/
  if ( KeyCount > 0 ) /*0x5009cb*/
  {
    do /*0x500a83*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this->__pad_0, g_INI_Key_Houses, v3); /*0x5009e5*/
      INIClass::GetString(this, g_INI_Key_Houses, StringByIndex, &g_INI_DefaultBuffer, Source, 20); /*0x5009f2*/
      v5 = SuperWeaponTypeClass::FindOrCreate( /*0x500a0a*/
             (SuperWeaponTypeClass *)this,
             (unsigned __int8 *)Source,
             (unsigned __int8 *)g_INI_Key_Country,
             -1);
      if ( v5 == -1 ) /*0x500a0f*/
        v5 = 0; /*0x500a11*/
      v6 = (int *)__2_YAPAXI_Z(0x160B8u); /*0x500a18*/
      if ( v6 ) /*0x500a22*/
        v7 = HouseClass::Construct(v6, *((_DWORD *)dword_A83C9C + v5)); /*0x500a35*/
      else
        v7 = 0; /*0x500a39*/
      if ( Source ) /*0x500a41*/
      {
        strncpy(Destination, Source, 0x14u); /*0x500a55*/
        v18 = 0; /*0x500a5d*/
      }
      else
      {
        Destination[0] = (unsigned __int8)Source; /*0x500a43*/
      }
      if ( Destination != (char *)(v7 + 90100) ) /*0x500a6e*/
      {
        qmemcpy((void *)(v7 + 90100), Destination, 0x14u); /*0x500a79*/
        *(_BYTE *)(v7 + 90120) = v18; /*0x500a7b*/
      }
      ++v3; /*0x500a80*/
    }
    while ( v3 < KeyCount ); /*0x500a83*/
  }
  result = stru_A80220.?; /*0x500a89*/
  v9 = 0; /*0x500a8e*/
  v10 = stru_A80220.? == 0; /*0x500a90*/
  if ( stru_A80220.? > 0 ) /*0x500a92*/
  {
    do /*0x500aeb*/
    {
      v11 = *((_DWORD *)stru_A80220.? + v9); /*0x500a9a*/
      HouseClass::ReadFromINI(v11, a2, (unsigned __int8 ***)this); /*0x500a9f*/
      if ( !*(_DWORD *)&dword_A8B238 ) /*0x500aab*/
      {
        if ( *(_BYTE *)(v11 + 492) || *(_BYTE *)(v11 + 493) ) /*0x500ab7*/
          HouseClass::SetCombatPower((int *)v11, (int)dword_A8B230[43].ptr_0); /*0x500ace*/
        else
          HouseClass::SetCombatPower((int *)v11, (int)dword_A8B230[43].ptr_4); /*0x500ade*/
      }
      result = stru_A80220.?; /*0x500ae3*/
      ++v9; /*0x500ae8*/
    }
    while ( v9 < stru_A80220.? ); /*0x500aeb*/
    v10 = stru_A80220.? == 0; /*0x500aed*/
  }
  if ( v10 ) /*0x500aef*/
  {
    result = dword_A83CA8; /*0x500af1*/
    for ( i = 0; i < dword_A83CA8; ++i ) /*0x500afa*/
    {
      v13 = (int *)__2_YAPAXI_Z(0x160B8u); /*0x500b01*/
      if ( v13 ) /*0x500b0b*/
        v14 = HouseClass::Construct(v13, *((_DWORD *)dword_A83C9C + i)); /*0x500b19*/
      else
        v14 = 0; /*0x500b20*/
      HouseClass::ReadFromINI(v14, a2, (unsigned __int8 ***)this); /*0x500b25*/
      result = dword_A83CA8; /*0x500b2a*/
    }
  }
  return result; /*0x500b34*/
}



// ==== 0x00500B40  HouseClass::ReadFromINI  this=IUnknown  sig=csp ====
int __userpurge HouseClass::ReadFromINI@<eax>(int this@<ecx>, double a2@<st0>, unsigned __int8 ***a3)
{
  bool *v4; // esi
  char Bool_Overwrite; // al
  int v6; // edx
  char *v7; // edi
  wchar_t *StringCSF; // eax
  int v9; // eax
  int Int_Overwrite; // eax
  int IntFromINI; // eax
  int AnimByName; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  unsigned __int16 v18; // di
  char v19; // al
  double v20; // st6
  int v21; // edx
  double v22; // st7
  unsigned __int8 v24; // c0
  unsigned __int8 v25; // c3
  char v26; // al
  int v27; // ecx
  int v28; // edi
  int v29; // eax
  int v30; // eax
  int result; // eax
  char v32; // [esp+0h] [ebp-D0h]
  int v33; // [esp+4h] [ebp-CCh]
  char v34; // [esp+4h] [ebp-CCh]
  double v35; // [esp+18h] [ebp-B8h] BYREF
  double v36; // [esp+20h] [ebp-B0h] BYREF
  double v37; // [esp+28h] [ebp-A8h] BYREF
  char v38[20]; // [esp+38h] [ebp-98h] BYREF
  char Destination[32]; // [esp+4Ch] [ebp-84h] BYREF
  char Source[100]; // [esp+6Ch] [ebp-64h] BYREF

  strcpy(v38, (const char *)(this + 90100)); /*0x500b6f*/
  v4 = (bool *)a3; /*0x500b78*/
  INIClass::ResetSection(a3); /*0x500b7d*/
  *(_DWORD *)(this + 468) = INIClass::ReadInt_Overwrite( /*0x500bae*/
                              (bool *)a3,
                              (unsigned __int8 *)v38,
                              (unsigned __int8 *)g_INI_Key_TechLevel,
                              *((_DWORD *)dword_A8B230 + 1173));
  *(_DWORD *)(this + 476) = 100 /*0x500bd0*/
                          * INIClass::ReadInt_Overwrite(
                              (bool *)a3,
                              (unsigned __int8 *)v38,
                              (unsigned __int8 *)g_INI_Key_Credits,
                              0);
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)a3, (unsigned __int8 *)v38, (unsigned __int8 *)aPlayercontrol, 0); /*0x500bd6*/
  *(_BYTE *)(this + 493) = Bool_Overwrite; /*0x500bdd*/
  if ( Bool_Overwrite && !dword_A8B238[0] ) /*0x500bec*/
  {
    if ( dword_A8EB64 ) /*0x500bf5*/
    {
      if ( dword_A8EB64 == 2 ) /*0x500c10*/
      {
        *(_DWORD *)(this + 780) = *(_DWORD *)(this + 476) + *(_DWORD *)&dword_8871E0->__pad_C3C[452]; /*0x500c25*/
LABEL_9:
        *(_DWORD *)(this + 780) &= (*(_DWORD *)(this + 780) <= 0) - 1; /*0x500c39*/
        goto LABEL_11; /*0x500c4f*/
      }
      v6 = *(_DWORD *)(this + 476); /*0x500c2d*/
    }
    else
    {
      v6 = *(_DWORD *)(this + 476) + *(_DWORD *)&dword_8871E0->__pad_C3C[448]; /*0x500c09*/
    }
    *(_DWORD *)(this + 780) = v6; /*0x500c33*/
    goto LABEL_9; /*0x500c33*/
  }
  *(_DWORD *)(this + 780) = *(_DWORD *)(this + 476); /*0x500c57*/
LABEL_11:
  v7 = (char *)(this + 90121); /*0x500c5d*/
  INIClass::GetString( /*0x500c77*/
    a3,
    (unsigned __int8 *)v38,
    (unsigned __int8 *)g_INI_Key_UIName,
    (char *)(this + 90121),
    Source,
    32);
  if ( Source ) /*0x500c82*/
  {
    strncpy(Destination, Source, 0x1Fu); /*0x500c96*/
    Destination[31] = 0; /*0x500c9e*/
  }
  else
  {
    Destination[0] = (unsigned __int8)Source; /*0x500c84*/
  }
  if ( Destination != v7 ) /*0x500ca9*/
  {
    qmemcpy(v7, Destination, 0x20u); /*0x500cb4*/
    v4 = (bool *)a3; /*0x500cb6*/
  }
  if ( *(_BYTE *)(this + 90121) ) /*0x500cb9*/
  {
    StringCSF = GetStringCSF((wchar_t *)(this + 90121), 0, g_Str_File_House_CPP, 8507); /*0x500cd7*/
    wcsncpy((wchar_t *)(this + 90154), StringCSF, 0x20u); /*0x500ce4*/
    *(_WORD *)(this + 90194) = 0; /*0x500cec*/
  }
  else
  {
    wcscpy((wchar_t *)(this + 90154), *(const wchar_t **)(*(_DWORD *)(this + 52) + 96)); /*0x500d05*/
  }
  *(_DWORD *)(this + 22108) = INIClass::ReadInt_Overwrite( /*0x500d25*/
                                v4,
                                (unsigned __int8 *)v38,
                                aRatioaitrigger,
                                *(_DWORD *)(this + 22108));
  *(_DWORD *)(this + 22112) = INIClass::ReadInt_Overwrite(v4, (unsigned __int8 *)v38, aRatioteamaircr, 75); /*0x500d4c*/
  *(_DWORD *)(this + 22116) = INIClass::ReadInt_Overwrite(v4, (unsigned __int8 *)v38, aRatioteaminfan, 75); /*0x500d65*/
  *(_DWORD *)(this + 22120) = INIClass::ReadInt_Overwrite(v4, (unsigned __int8 *)v38, aRatioteamunits, 75); /*0x500d70*/
  v9 = *(_DWORD *)(*(_DWORD *)(this + 52) + 188); /*0x500d79*/
  *(_DWORD *)(this + 488) = v9; /*0x500d82*/
  if ( v9 == -1 ) /*0x500d88*/
    *(_DWORD *)(this + 488) = 0; /*0x500d8a*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(v4, (unsigned __int8 *)v38, (unsigned __int8 *)g_INI_Key_IQ, 0); /*0x500da2*/
  if ( Int_Overwrite > *(_DWORD *)&dword_8871E0->__pad_C3C[2040] ) /*0x500db3*/
    Int_Overwrite = 1; /*0x500db5*/
  *(_DWORD *)(this + 464) = Int_Overwrite; /*0x500dba*/
  *(_DWORD *)(this + 588) = Int_Overwrite; /*0x500dc0*/
  IntFromINI = HouseClass::ReadIntFromINI((unsigned __int8 ***)v4, (unsigned __int8 *)v38, (unsigned __int8 *)aEdge, -1); /*0x500dd4*/
  v33 = *(_DWORD *)(this + 90196); /*0x500de3*/
  *(_DWORD *)(this + 480) = IntFromINI; /*0x500dec*/
  AnimByName = BuildingTypeClass::FindAnimByName( /*0x500df2*/
                 (unsigned __int8 ***)v4,
                 (unsigned __int8 *)v38,
                 (unsigned __int8 *)aColor,
                 v33);
  *(_DWORD *)(this + 90196) = AnimByName; /*0x500df9*/
  if ( AnimByName < 0 ) /*0x500e04*/
    *(_DWORD *)(this + 90196) = 5; /*0x500e06*/
  v13 = *((_DWORD *)dword_B054D4 + *(_DWORD *)(this + 90196)); /*0x500e17*/
  if ( !v13 ) /*0x500e1c*/
  {
    Debug::Log(); /*0x500e32*/
    *(_DWORD *)(this + 90196) = 5; /*0x500e37*/
    v13 = *((_DWORD *)dword_B054D4 + 5); /*0x500e46*/
  }
  v14 = *(_DWORD *)(v13 + 816); /*0x500e49*/
  v15 = *(_DWORD *)(v13 + 780); /*0x500e4f*/
  v16 = *(_DWORD *)(v15 + 4); /*0x500e55*/
  v17 = *(_DWORD *)(v15 + 372); /*0x500e58*/
  if ( v16 == 1 ) /*0x500e61*/
    v18 = *(unsigned __int8 *)(v17 + v14); /*0x500e68*/
  else
    v18 = *(_WORD *)(v17 + 2 * v14); /*0x500e6e*/
  LOBYTE(v35) = (unsigned __int8)(v18 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x500e9b*/
  BYTE1(v35) = (unsigned __int8)(v18 >> g_BitMask_Green) << g_BitMask_Blue; /*0x500ea8*/
  v19 = (unsigned __int8)(v18 >> g_BitShift_Blue) << g_BitMask_Red; /*0x500ebc*/
  *(_WORD *)(this + 22265) = LOWORD(v35); /*0x500ec6*/
  *(_BYTE *)(this + 22267) = v19; /*0x500ec9*/
  v20 = (double)*(unsigned __int8 *)(this + 22265); /*0x500edc*/
  LODWORD(v35) = *(unsigned __int8 *)(this + 22266); /*0x500ee0*/
  v21 = *(unsigned __int8 *)(this + 22267); /*0x500ee6*/
  v36 = v20; /*0x500eec*/
  v37 = (double)SLODWORD(v35); /*0x500ef8*/
  v35 = (double)v21; /*0x500f00*/
  Math::Sqrt(v35 * v35 + v37 * v37 + v20 * v20); /*0x500f1d*/
  if ( a2 == 0.0 ) /*0x500f30*/
  {
    v35 = 255.0; /*0x500f34*/
    v37 = 255.0; /*0x500f44*/
    v36 = 255.0; /*0x500f54*/
  }
  else
  {
    v36 = v36 * 240.0 / a2; /*0x500f75*/
    if ( v36 > 255.0 ) /*0x500f84*/
      v36 = 255.0; /*0x500f86*/
    v37 = v37 * 240.0 / a2; /*0x500fa2*/
    if ( v37 > 255.0 ) /*0x500fb1*/
      v37 = 255.0; /*0x500fb3*/
    v22 = v35 * 240.0 / a2; /*0x500fcd*/
    v35 = v22; /*0x500fd5*/
    if ( !(v24 | v25) ) /*0x500fdb*/
    {
      v22 = 255.0; /*0x500fe2*/
      v35 = 255.0; /*0x500fe8*/
    }
    if ( v36 < 96.0 ) /*0x500ffb*/
      v36 = 0.0; /*0x500ffd*/
    if ( v37 < 96.0 ) /*0x50101c*/
      v37 = 0.0; /*0x50101e*/
    if ( v22 < 96.0 ) /*0x501039*/
      v35 = 0.0; /*0x50103b*/
  }
  globalHelper_00B920((int)&v36, (int)&v37, (int)&v35); /*0x501058*/
  v34 = Math::RoundToInt(v35); /*0x50106a*/
  v32 = Math::RoundToInt(v37); /*0x501074*/
  v26 = Math::RoundToInt(v36); /*0x501075*/
  HouseClass::processRadar((_BYTE *)(this + 22268), v26, v32, v34); /*0x501081*/
  v27 = *(_DWORD *)(this + 48); /*0x501086*/
  v28 = 0; /*0x501089*/
  *(_DWORD *)(this + 22496) = 0; /*0x50108b*/
  HouseClass::HandleAlliance((int *)this, *((_DWORD *)&dword_A8022C->AbstractClass + v27), 0); /*0x50109e*/
  LODWORD(v35) = HouseClass::ReadHouseNamesToBitmask( /*0x5010b5*/
                   (unsigned __int8 ***)v4,
                   (unsigned __int8 *)v38,
                   (unsigned __int8 *)aAllies,
                   0);
  if ( dword_A80238 > 0 ) /*0x5010c0*/
  {
    do /*0x5010ef*/
    {
      v29 = *((_DWORD *)&dword_A8022C->AbstractClass + v28); /*0x5010c8*/
      if ( ((1 << *(_DWORD *)(v29 + 48)) & LODWORD(v35)) != 0 ) /*0x5010db*/
        HouseClass::HandleAlliance((int *)this, v29, 0); /*0x5010e2*/
      ++v28; /*0x5010ec*/
    }
    while ( v28 < dword_A80238 ); /*0x5010ef*/
  }
  v30 = 175 * *(_DWORD *)(this + 48) /*0x501117*/
      + *(_DWORD *)(*(_DWORD *)&dword_8871E0->__pad_C3C[1312] + 4 * *(_DWORD *)(this + 388));
  *(_DWORD *)(this + 22424) = dword_A8ED84; /*0x501125*/
  *(_DWORD *)(this + 22428) = HIDWORD(v37); /*0x50112f*/
  *(_DWORD *)(this + 22432) = v30; /*0x501138*/
  result = BuildingPrerequisiteClass::ReadNodeGraph( /*0x501141*/
             (int *)(this + 22272),
             (unsigned __int8 ***)v4,
             (unsigned __int8 *)v38);
  *(_DWORD *)(this + 22388) = this; /*0x501147*/
  return result; /*0x501146*/
}



// ==== 0x00501160  CCINIClass::WriteHouses  this=INIClass  sig=csp ====
int __thiscall sub_501160(char *this)
{
  int result; // eax
  int i; // ebx
  int v4; // esi
  char Source[32]; // [esp+Ch] [ebp-40h] BYREF
  char Buffer[32]; // [esp+2Ch] [ebp-20h] BYREF

  INIClass::ClearSection((int)this, (int)g_INI_Key_Houses, 0); /*0x50116f*/
  result = dword_A80238; /*0x501174*/
  for ( i = 0; i < dword_A80238; ++i ) /*0x50117d*/
  {
    strcpy(Source, (const char *)(*(_DWORD *)&dword_A8022C->AbstractClass[4 * i] + 90100)); /*0x5011ac*/
    sprintf(Buffer, g_Str_Trace, i); /*0x5011ba*/
    INIClass::SetString(this, (unsigned __int8 *)g_INI_Key_Houses, Buffer, Source); /*0x5011d3*/
    result = dword_A80238; /*0x5011d8*/
  }
  v4 = 0; /*0x5011e3*/
  if ( result > 0 ) /*0x5011e7*/
  {
    do /*0x501200*/
    {
      HouseClass::SaveToINI(*(_DWORD *)&dword_A8022C->AbstractClass[4 * v4], this); /*0x5011f3*/
      result = dword_A80238; /*0x5011f8*/
      ++v4; /*0x5011fd*/
    }
    while ( v4 < dword_A80238 ); /*0x501200*/
  }
  return result; /*0x501202*/
}



// ==== 0x00501210  HouseClass::SaveToINI  this=MapClass  sig=csp ====
int __thiscall HouseClass_SaveToINI(int this, char *a2)
{
  int v4; // ebp
  char *v5; // edx
  int v6; // ecx
  char Block[20]; // [esp+10h] [ebp-14h] BYREF
  int v9; // [esp+28h] [ebp+4h]

  strcpy(Block, (const char *)(this + 90100)); /*0x501239*/
  INIClass::ClearSection((int)a2, (int)Block, 0); /*0x50124d*/
  INIClass::SetString(a2, (unsigned __int8 *)Block, g_INI_Key_Country, (char *)(*(_DWORD *)(this + 52) + 36)); /*0x501265*/
  INIClass::SetInt(a2, (unsigned __int8 *)Block, g_INI_Key_TechLevel, *(_DWORD *)(this + 468), 0); /*0x50127f*/
  INIClass::SetInt(a2, (unsigned __int8 *)Block, g_INI_Key_Credits, *(_DWORD *)(this + 476) / 100, 0); /*0x5012aa*/
  INIClass::SetInt(a2, (unsigned __int8 *)Block, g_INI_Key_IQ, *(_DWORD *)(this + 464), 0); /*0x5012c4*/
  HouseClass::updateBuildingProduction(Block, aEdge, *(_DWORD *)(this + 480)); /*0x5012dc*/
  INIClass::SetBool(a2, (unsigned __int8 *)Block, aPlayercontrol, *(_BYTE *)(this + 493)); /*0x5012f4*/
  HouseClass::WriteBuildingTypeNameToINI(Block, aColor, *(_DWORD *)(this + 90196)); /*0x50130c*/
  v4 = 0; /*0x501316*/
  if ( dword_A80238 > 0 ) /*0x50131a*/
  {
    v5 = (char *)dword_A8022C; /*0x501322*/
    v9 = dword_A80238; /*0x501328*/
    do /*0x50134a*/
    {
      v6 = *(_DWORD *)(*(_DWORD *)v5 + 48); /*0x501333*/
      if ( (*(_DWORD *)(this + 472) & (1 << v6)) != 0 ) /*0x50133a*/
        v4 |= 1 << v6; /*0x50133c*/
      v5 += 4; /*0x501342*/
      --v9; /*0x501346*/
    }
    while ( v9 ); /*0x50134a*/
  }
  HouseClass::WriteHouseListToINI(Block, aAllies, v4); /*0x501359*/
  if ( *(_BYTE *)(this + 90121) ) /*0x50135e*/
    INIClass::SetString(a2, (unsigned __int8 *)Block, g_INI_Key_UIName, (char *)(this + 90121)); /*0x50137b*/
  return HouseClass::SaveTriggerNodeData((int)a2, Block); /*0x501391*/
}



// ==== 0x005013A0  HouseClass::ScalarDeletingDestructor  this=HouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::ScalarDeletingDestructor(HouseClass *this)
{
  int repairStationsCount; // ebx
  int i; // esi
  int v3; // ecx

  if ( this->aircraftAltOwner <= 0 ) /*0x5013ad*/
    return 1; /*0x5013ec*/
  repairStationsCount = this->repairStationsCount; /*0x5013b0*/
  for ( i = 0; i < repairStationsCount; ++i ) /*0x5013b8*/
  {
    v3 = *(_DWORD *)(this->buildingsCount + 4 * i); /*0x5013bd*/
    if ( v3 && !*(_BYTE *)(v3 + 129) && *(int *)(v3 + 108) > 0 ) /*0x5013d3*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 416))(v3, 1); /*0x5013d9*/
  }
  return 0; /*0x5013e8*/
}



// ==== 0x00501400  HouseClass::SetCapacity_5  this=HouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_5(HouseClass *this)
{
  int v1; // edi
  BuildingClass *v2; // esi
  int v3; // eax
  void *ptr_0; // edx
  int *v5; // ecx
  int v7; // [esp+8h] [ebp-4h] BYREF

  v1 = *(_DWORD *)&stru_A8EB00.?[164] - 1; /*0x501409*/
  if ( *(_DWORD *)&stru_A8EB00.?[164] - 1 < 0 ) /*0x50140e*/
  {
    BYTE1(this->planningPaths[5]) = 1; /*0x501532*/
    return 0; /*0x50152f*/
  }
  else
  {
    do /*0x50150f*/
    {
      v2 = *(BuildingClass **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v1); /*0x501423*/
      if ( (HouseClass *)((char *)this - 36) == v2->? && v2->? && !v2->? ) /*0x50143d*/
      {
        if ( v2->? /*0x50146d*/
          && *(_BYTE *)((*((int (__thiscall **)(_DWORD))v2->TechnoClass + 33))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152]
                                                                                         + 4 * v1))
                      + 562)
          && !this->__pad_13C[140] )
        {
          v3 = (*((int (__thiscall **)(BuildingClass *))v2->TechnoClass + 33))(v2); /*0x50147b*/
          ptr_0 = v2->TechnoClass; /*0x501487*/
          v7 = *(_DWORD *)(v3 + 160); /*0x501489*/
          (*((void (__thiscall **)(BuildingClass *, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))ptr_0 + 91))( /*0x5014aa*/
            v2,
            &v7,
            0,
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
            0,
            1,
            1,
            0);
        }
        else if ( v2 ) /*0x5014b4*/
        {
          if ( (v2->? & 4) != 0 ) /*0x5014c3*/
          {
            v5 = (int *)v2->DamageFireAnims[3]; /*0x5014c5*/
            if ( v5 ) /*0x5014cd*/
              TeamClass::LiberateMember_Start(v5, (int)v2, 0xFFFFFFFF, 0); /*0x5014d4*/
            (*((void (__thiscall **)(BuildingClass *, int, _DWORD))v2->TechnoClass + 122))(v2, 15, 0); /*0x5014e1*/
          }
          else if ( (*((int (__thiscall **)(BuildingClass *))v2->TechnoClass + 11))(v2) == 6 /*0x501501*/
                 && (*((int (__thiscall **)(BuildingClass *))v2->TechnoClass + 258))(v2) > 0 )
          {
            BuildingClass::UnloadUnits(v2, 1, 0); /*0x501509*/
          }
        }
      }
      --v1; /*0x50150e*/
    }
    while ( v1 >= 0 ); /*0x50150f*/
    BYTE1(this->planningPaths[5]) = 1; /*0x50151c*/
    return 0; /*0x501523*/
  }
}



// ==== 0x00501540  HouseClass::CanAlly  this=HouseClass  sig=csp ====
bool __thiscall HouseClass::CanAlly(int this, int a2)
{
  int v3; // ecx
  int v5; // edi
  int v6; // ebp
  HouseClass *v7; // edx
  int v8; // ebx
  int v9; // eax
  int v10; // eax

  if ( a2 ) /*0x50154a*/
  {
    if ( a2 == this ) /*0x50154e*/
      return 0; /*0x50154e*/
    v3 = *(_DWORD *)(a2 + 48); /*0x501550*/
    if ( v3 == *(_DWORD *)(this + 48) || v3 != -1 && (*(_DWORD *)(this + 22408) & (1 << v3)) != 0 ) /*0x501573*/
      return 0; /*0x501576*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(a2 + 52) + 188) == HouseTypeClass::Find(g_INI_Key_Civilian) && dword_A8B238[0] ) /*0x501598*/
    return 0; /*0x50159b*/
  if ( dword_A8E7AC ) /*0x5015a8*/
    return 1; /*0x5015ab*/
  if ( *(_BYTE *)(this + 501) ) /*0x5015b1*/
    return 0; /*0x5015bc*/
  v5 = 0; /*0x5015c8*/
  v6 = 0; /*0x5015ca*/
  if ( dword_A80238 > 0 ) /*0x5015ce*/
  {
    v7 = dword_A8022C; /*0x5015d0*/
    v8 = dword_A80238; /*0x5015d7*/
    do /*0x50162c*/
    {
      v9 = *(_DWORD *)v7->AbstractClass; /*0x5015d9*/
      if ( !*(_BYTE *)(*(_DWORD *)v7->AbstractClass + 501) && !*(_BYTE *)(*(_DWORD *)(v9 + 52) + 422) ) /*0x5015e8*/
      {
        ++v5; /*0x5015f1*/
        if ( v9 ) /*0x5015f4*/
        {
          if ( v9 == this /*0x501625*/
            || (v10 = *(_DWORD *)(v9 + 48), v10 == *(_DWORD *)(this + 48))
            || v10 != -1 && ((1 << v10) & *(_DWORD *)(this + 22408)) != 0 )
          {
            ++v6; /*0x501627*/
          }
        }
      }
      v7 = (HouseClass *)((char *)v7 + 4); /*0x501628*/
      --v8; /*0x50162b*/
    }
    while ( v8 ); /*0x50162c*/
  }
  return v5 != v6 + 1; /*0x501575*/
}



// ==== 0x00501640  HouseClass::CanDetect  this=HouseClass  sig=csp ====
int HouseClass::CanDetect(HouseClass *this)
{
  int result; // eax
  char v2; // bl
  int nextArrayIndex; // ecx
  int i; // ebp
  unsigned int v5; // esi
  int j; // edi
  char v7; // cl

  result = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x501640*/
  v2 = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5301); /*0x50164d*/
  if ( dword_A8B23C /*0x501662*/
    && (result = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C), (_BYTE)result)
    || v2 )
  {
    result = (int)dword_A8B230; /*0x501668*/
    if ( !LOBYTE(dword_A8B230[127].ptr_4) ) /*0x50166d*/
    {
      nextArrayIndex = stru_A80220.?; /*0x50167b*/
      for ( i = 0; i < nextArrayIndex; ++i ) /*0x501685*/
      {
        v5 = *((_DWORD *)stru_A80220.? + i); /*0x501695*/
        if ( v5 ) /*0x50169a*/
        {
          LOBYTE(result) = *(_BYTE *)(v5 + 501); /*0x5016a0*/
          if ( !(_BYTE)result ) /*0x5016a8*/
          {
            result = *(_DWORD *)&dword_A8B238; /*0x5016ae*/
            LOBYTE(result) = *(_BYTE *)(v5 + 492); /*0x5016b5*/
            if ( !*(_DWORD *)&dword_A8B238 ) /*0x5016bb*/
              LOBYTE(result) = (_BYTE)result || *(_BYTE *)(v5 + 493); /*0x5016cf*/
            if ( !(_BYTE)result ) /*0x5016d3*/
            {
              *(_BYTE *)(v5 + 586) = 1; /*0x5016d5*/
              nextArrayIndex = stru_A80220.?; /*0x5016db*/
              for ( j = 0; j < stru_A80220.?; ++j ) /*0x5016e5*/
              {
                result = *((_DWORD *)stru_A80220.? + j); /*0x5016ec*/
                if ( result && !*(_BYTE *)(result + 501) ) /*0x5016f3*/
                {
                  v7 = *(_BYTE *)(result + 492); /*0x501705*/
                  if ( !*(_DWORD *)&dword_A8B238 ) /*0x50170b*/
                    v7 = v7 || *(_BYTE *)(result + 493); /*0x50171f*/
                  if ( v7 ) /*0x501728*/
                    LOBYTE(result) = HouseClass::SetAlliance(v5, (HouseClass *)result, 0); /*0x50172a*/
                  else
                    result = HouseClass::HandleAlliance((int *)v5, result, 0); /*0x501731*/
                }
                nextArrayIndex = stru_A80220.?; /*0x501736*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x50174c*/
}



// ==== 0x00501750  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_501750(ObjectClass *this, int a2)
{
  char result; // al
  int v4; // eax
  char v5; // bl
  int v6; // [esp+5Ch] [ebp-28h] BYREF
  int v7; // [esp+60h] [ebp-24h] BYREF
  int v8; // [esp+64h] [ebp-20h] BYREF
  int v9; // [esp+68h] [ebp-1Ch] BYREF
  _DWORD v10[2]; // [esp+6Ch] [ebp-18h] BYREF
  _BYTE v11[16]; // [esp+74h] [ebp-10h] BYREF
  char v12; // [esp+88h] [ebp+4h]

  result = byte_A8E9A0; /*0x501750*/
  if ( byte_A8E9A0 ) /*0x50175f*/
  {
    v4 = *((_DWORD *)this + 5353); /*0x501765*/
    v5 = v4 < *((_DWORD *)this + 5354); /*0x501777*/
    *((_DWORD *)this + 5353) = a2 + v4; /*0x50177e*/
    House_Notify(); /*0x501784*/
    result = *((_DWORD *)this + 5353) < *((_DWORD *)this + 5354); /*0x50179d*/
    v12 = result; /*0x5017a2*/
    if ( !dword_A8E7AC && v5 != result ) /*0x5017ae*/
    {
      (*(void (__stdcall **)(ObjectClass *, void *, int *))this->AbstractClass)(this, &unk_7F7CD0, &v9); /*0x5017c1*/
      (*(void (__stdcall **)(int, int *))(*(_DWORD *)v9 + 12))(v9, &v8); /*0x5017cf*/
      if ( (*(int (__stdcall **)(int, int, int *, _DWORD))(*(_DWORD *)v8 + 12))(v8, 1, &v6, 0) >= 0 ) /*0x5017e7*/
      {
        while ( 1 ) /*0x5017f7*/
        {
          (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v6 + 12))(v6, v11); /*0x5017f9*/
          if ( !memcmp(v11, dword_7E9550, 0x10u) ) /*0x501810*/
            break; /*0x501810*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x501817*/
          if ( (*(int (__stdcall **)(int, int, int *, _DWORD))(*(_DWORD *)v8 + 12))(v8, 1, &v6, 0) < 0 ) /*0x50182f*/
            goto LABEL_14; /*0x50182f*/
        }
        (*(void (__stdcall **)(int, int *))(*(_DWORD *)v6 + 28))(v6, &v7); /*0x50183b*/
        while ( (*(int (__stdcall **)(int, int, _DWORD *, _DWORD))(*(_DWORD *)v7 + 12))(v7, 1, v10, 0) >= 0 ) /*0x501853*/
        {
          if ( v12 ) /*0x50185f*/
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v10[0] + 16))(v10[0]); /*0x501864*/
          else
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v10[0] + 12))(v10[0]); /*0x50186c*/
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v10[0] + 8))(v10[0]); /*0x501876*/
        }
        (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x501897*/
      }
LABEL_14:
      (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x50189a*/
      return (*(char (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x5018ab*/
    }
  }
  return result; /*0x5018ae*/
}



// ==== 0x005018C0  HouseClass::NotifyPowerStateChange  this=HouseClass  sig=csp ====
char __thiscall HouseClass::NotifyPowerStateChange(HouseClass *this, int a2)
{
  int powerDrain; // eax
  char v4; // bl
  char result; // al
  int v6; // esi
  int v7; // [esp+5Ch] [ebp-28h] BYREF
  int v8; // [esp+60h] [ebp-24h] BYREF
  int v9; // [esp+64h] [ebp-20h] BYREF
  int v10; // [esp+68h] [ebp-1Ch] BYREF
  _DWORD v11[2]; // [esp+6Ch] [ebp-18h] BYREF
  _BYTE v12[16]; // [esp+74h] [ebp-10h] BYREF
  char v13; // [esp+88h] [ebp+4h]

  powerDrain = this->powerDrain; /*0x5018cc*/
  v4 = this->powerOutput < powerDrain; /*0x5018da*/
  this->powerDrain = a2 + powerDrain; /*0x5018e1*/
  House_Notify(); /*0x5018e7*/
  result = this->powerOutput < this->powerDrain; /*0x501900*/
  v13 = result; /*0x501905*/
  if ( !dword_A8E7AC && v4 != result ) /*0x501911*/
  {
    (*(void (__stdcall **)(HouseClass *, void *, int *))this->AbstractClass)(this, &unk_7F7CD0, &v10); /*0x501924*/
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)v10 + 12))(v10, &v9); /*0x501932*/
    if ( (*(int (__stdcall **)(int, int, int *, _DWORD))(*(_DWORD *)v9 + 12))(v9, 1, &v7, 0) >= 0 ) /*0x50194a*/
    {
      while ( 1 ) /*0x50195a*/
      {
        (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v7 + 12))(v7, v12); /*0x50195c*/
        if ( !memcmp(v12, dword_7E9550, 0x10u) ) /*0x501973*/
          break; /*0x501973*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x50197a*/
        if ( (*(int (__stdcall **)(int, int, int *, _DWORD))(*(_DWORD *)v9 + 12))(v9, 1, &v7, 0) < 0 ) /*0x501992*/
          goto LABEL_13; /*0x501992*/
      }
      (*(void (__stdcall **)(int, int *))(*(_DWORD *)v7 + 28))(v7, &v8); /*0x50199e*/
      while ( (*(int (__stdcall **)(int, int, _DWORD *, _DWORD))(*(_DWORD *)v8 + 12))(v8, 1, v11, 0) >= 0 ) /*0x5019b6*/
      {
        v6 = v11[0]; /*0x5019bc*/
        if ( v13 ) /*0x5019c2*/
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v11[0] + 16))(v11[0]); /*0x5019c7*/
        else
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v11[0] + 12))(v11[0]); /*0x5019cf*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x5019d5*/
      }
      (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x5019f6*/
    }
LABEL_13:
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x5019f9*/
    return (*(char (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x501a0a*/
  }
  return result; /*0x501a0d*/
}



// ==== 0x00501A20  ObjectClass::House_Notify  this=AbstractClass  sig=csp ====
void sub_501A20()
{
  wchar_t *v0; // ebx
  int v1; // edi
  int v2; // esi

  v0 = dword_A8ECC8; /*0x501a21*/
  if ( dword_A8ECC8 ) /*0x501a2a*/
  {
    v1 = 0; /*0x501a2c*/
    if ( (int)dword_A8ECC8 > 0 ) /*0x501a30*/
    {
      do /*0x501a92*/
      {
        v2 = *((_DWORD *)dword_A8ECBC + v1); /*0x501a38*/
        if ( v2 /*0x501a81*/
          && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 44))(*((_DWORD *)dword_A8ECBC + v1)) == 6
          && !*(_BYTE *)(v2 + 1050)
          && *(int *)(*(_DWORD *)(v2 + 1312) + 3808) > 0
          && ((1 << *(_DWORD *)(*((_DWORD *)dword_A83D4C + 13) + 184)) & *(_DWORD *)(v2 + 528)) != 0 )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 292))(v2, 2); /*0x501a89*/
        }
        ++v1; /*0x501a8f*/
      }
      while ( v1 < (int)v0 ); /*0x501a92*/
    }
  }
}



// ==== 0x00501AA0  sub_501AA0  this=-  sig=csp ====
_DWORD *__stdcall sub_501AA0(_DWORD *a1, int a2, int a3)
{
  *a1 = 0; /*0x501ab5*/
  return a1; /*0x501ab8*/
}



// ==== 0x00501AC0  HouseClass::GenerateAttackCoords  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::GenerateAttackCoords(HouseClass *this, _DWORD *a2, int a3)
{
  double v3; // st7
  int unknown5498; // eax
  int v6; // esi
  int v7; // edx
  void *v8; // eax
  int *v9; // eax
  int *v10; // eax
  int v11; // eax
  int v12; // eax
  void *v13; // eax
  int *v14; // eax
  double v15; // rdi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  void *v20; // eax
  int *v21; // eax
  double v22; // rdi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  void *v27; // eax
  int *v28; // eax
  double v29; // rdi
  int v30; // eax
  int v31; // eax
  int v33; // eax
  int v34; // eax
  int v36; // [esp-8h] [ebp-A0h]
  int v37; // [esp-8h] [ebp-A0h]
  int v38; // [esp-8h] [ebp-A0h]
  int v39; // [esp-8h] [ebp-A0h]
  int v40; // [esp-4h] [ebp-9Ch]
  int v41; // [esp-4h] [ebp-9Ch]
  int v42; // [esp-4h] [ebp-9Ch]
  int v43; // [esp-4h] [ebp-9Ch]
  int v44; // [esp+Ch] [ebp-8Ch] BYREF
  double v45; // [esp+10h] [ebp-88h] BYREF
  _DWORD v46[4]; // [esp+1Ch] [ebp-7Ch] BYREF
  Coord3D v47; // [esp+2Ch] [ebp-6Ch] BYREF
  _DWORD v48[5]; // [esp+3Ch] [ebp-5Ch] BYREF
  Coord3D v49; // [esp+50h] [ebp-48h] BYREF
  int v50; // [esp+5Ch] [ebp-3Ch] BYREF
  int v51; // [esp+60h] [ebp-38h]
  int v52; // [esp+64h] [ebp-34h]
  int v53; // [esp+68h] [ebp-30h] BYREF
  int v54; // [esp+6Ch] [ebp-2Ch]
  int v55[3]; // [esp+74h] [ebp-24h] BYREF
  Coord3D v56; // [esp+80h] [ebp-18h] BYREF
  _DWORD v57[3]; // [esp+8Ch] [ebp-Ch] BYREF

  *(_DWORD *)v49.__pad_0 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x501ae0*/
  unknown5498 = this->unknown5498; /*0x501ae4*/
  v49.Coord3D_field_0x04 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x501af1*/
  v49.Coord3D_field_0x08 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x501af5*/
  if ( unknown5498 >= 2048 ) /*0x501af9*/
  {
    unknown5498 = 2048; /*0x501b10*/
  }
  else if ( unknown5498 < 768 ) /*0x501b00*/
  {
    unknown5498 = 768; /*0x501b02*/
  }
  switch ( a3 ) /*0x501b24*/
  {
    case 0: /*0x501b24*/
      v6 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, unknown5498); /*0x501b42*/
      LODWORD(v45) = *HouseClass::GetCurrentOption(this, &v47.Coord3D_field_0x04); /*0x501b57*/
      if ( (unsigned __int8)CellStruct::Equals((CellStruct *)&v45, &stru_A8EB00.?[948]) ) /*0x501b5b*/
      {
        v7 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x501b6f*/
        v50 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x501b75*/
        v51 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x501b79*/
      }
      else
      {
        v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v45); /*0x501b89*/
        v9 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v8 + 72))(v8, &v53); /*0x501b97*/
        v50 = *v9; /*0x501b9c*/
        v51 = v9[1]; /*0x501ba3*/
        v7 = v9[2]; /*0x501ba7*/
      }
      v52 = v7; /*0x501baa*/
      v10 = RandomCoordScatter(v55, &v50, v3, v6, 1); /*0x501bb9*/
      goto LABEL_23; /*0x501bbe*/
    case 1: /*0x501b24*/
      v46[1] = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, unknown5498, 2 * unknown5498); /*0x501bdc*/
      LOWORD(v45) = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x501beb*/
      v11 = LODWORD(v45); /*0x501bf0*/
      BYTE1(v11) = BYTE1(v45) & 0x3F; /*0x501bf4*/
      LODWORD(v45) = ((unsigned __int16)v11 ^ (unsigned __int16)((v11 & 0xE000) - 1)) & 0xE000 ^ v11; /*0x501c11*/
      v46[0] = *HouseClass::GetCurrentOption(this, &v47.Coord3D_field_0x04); /*0x501c25*/
      if ( (unsigned __int8)CellStruct::Equals((CellStruct *)v46, &stru_A8EB00.?[948]) ) /*0x501c29*/
      {
        v12 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x501c3e*/
        v53 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x501c43*/
        v54 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x501c47*/
      }
      else
      {
        v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v46); /*0x501c57*/
        v14 = (int *)(*(int (__thiscall **)(void *, Coord3D *))(*(_DWORD *)v13 + 72))(v13, &v56); /*0x501c68*/
        v53 = *v14; /*0x501c6d*/
        v54 = v14[1]; /*0x501c74*/
        v12 = v14[2]; /*0x501c78*/
      }
      v40 = v12; /*0x501c86*/
      LODWORD(v45) = SLOWORD(v45) - 0x3FFF; /*0x501c87*/
      __asm /*0x501c8b*/
      {
        fild dword ptr [esp+9Ch+var_8C+4]
        fmul ds:dbl_7E2810
        fstp qword ptr [esp+9Ch+var_5C+4]
        fild dword ptr [esp+9Ch+var_7C+4]
      }
      v15 = *(double *)&v48[1]; /*0x501ca1*/
      __asm /*0x501ca7*/
      {
        fstp qword ptr [esp+0A4h+var_7C+4]
        fild [esp+0A4h+var_2C]
        fstp qword ptr [esp+0A4h+var_8C+4]
      }
      Math::SinCos(*(double *)&v48[1]); /*0x501cb3*/
      __asm { fmul qword ptr [esp+0A4h+var_7C+4] } /*0x501cb8*/
      __asm { fsubr qword ptr [esp+9Ch+var_8C+4] }
      LOWORD(v16) = Math::RoundToInt(v3); /*0x501cc3*/
      v36 = v16; /*0x501cc8*/
      Math::ArcTan2(v15); /*0x501ccb*/
      __asm { fmul qword ptr [esp+0A8h+var_7C+4] } /*0x501cd0*/
      __asm { fiadd [esp+0A0h+var_30] }
      LOWORD(v17) = Math::RoundToInt(v3); /*0x501cdb*/
      v10 = Coord3D::Set((Coord3D *)&v48[1], v17, v36, v40); /*0x501ce5*/
      goto LABEL_23; /*0x501ce5*/
    case 2: /*0x501b24*/
      v47.Coord3D_field_0x04 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, unknown5498, 2 * unknown5498); /*0x501d03*/
      LOWORD(v45) = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x501d12*/
      v18 = LODWORD(v45); /*0x501d17*/
      BYTE1(v18) = BYTE1(v45) & 0x3F | 0x40; /*0x501d22*/
      LODWORD(v45) = ((unsigned __int16)v18 ^ (unsigned __int16)((v18 & 0xE000) - 1)) & 0xE000 ^ v18; /*0x501d3b*/
      v46[0] = *HouseClass::GetCurrentOption(this, &v48[1]); /*0x501d4f*/
      if ( (unsigned __int8)CellStruct::Equals((CellStruct *)v46, &stru_A8EB00.?[948]) ) /*0x501d53*/
      {
        v19 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x501d68*/
        v53 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x501d6d*/
        v54 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x501d71*/
      }
      else
      {
        v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v46); /*0x501d81*/
        v21 = (int *)(*(int (__thiscall **)(void *, Coord3D *))(*(_DWORD *)v20 + 72))(v20, &v56); /*0x501d92*/
        v53 = *v21; /*0x501d97*/
        v54 = v21[1]; /*0x501d9e*/
        v19 = v21[2]; /*0x501da2*/
      }
      v41 = v19; /*0x501db0*/
      v46[1] = SLOWORD(v45) - 0x3FFF; /*0x501db1*/
      __asm /*0x501db5*/
      {
        fild dword ptr [esp+9Ch+var_7C+4]
        fmul ds:dbl_7E2810
        fstp qword ptr [esp+9Ch+var_7C+4]
        fild [esp+9Ch+var_6C.Coord3D_field_0x04]
      }
      v22 = *(double *)&v46[1]; /*0x501dcb*/
      __asm /*0x501dd1*/
      {
        fstp qword ptr [esp+0A4h+var_6C.Coord3D_field_0x04]
        fild [esp+0A4h+var_2C]
        fstp qword ptr [esp+0A4h+var_8C+4]
      }
      Math::SinCos(*(double *)&v46[1]); /*0x501ddd*/
      __asm { fmul qword ptr [esp+0A4h+var_6C.Coord3D_field_0x04] } /*0x501de2*/
      __asm { fsubr qword ptr [esp+9Ch+var_8C+4] }
      LOWORD(v23) = Math::RoundToInt(v3); /*0x501ded*/
      v37 = v23; /*0x501df2*/
      Math::ArcTan2(v22); /*0x501df5*/
      __asm { fmul qword ptr [esp+0A8h+var_6C.Coord3D_field_0x04] } /*0x501dfa*/
      __asm { fiadd [esp+0A0h+var_30] }
      LOWORD(v24) = Math::RoundToInt(v3); /*0x501e05*/
      v10 = Coord3D::Set((Coord3D *)&v46[1], v24, v37, v41); /*0x501e0f*/
      goto LABEL_23; /*0x501e0f*/
    case 3: /*0x501b24*/
      v46[1] = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, unknown5498, 2 * unknown5498); /*0x501e2d*/
      LOWORD(v45) = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x501e3c*/
      v25 = LODWORD(v45); /*0x501e41*/
      BYTE1(v25) = BYTE1(v45) & 0x3F | 0x80; /*0x501e4c*/
      LODWORD(v45) = ((unsigned __int16)v25 ^ (unsigned __int16)((v25 & 0xE000) - 1)) & 0xE000 ^ v25; /*0x501e65*/
      v46[0] = *HouseClass::GetCurrentOption(this, &v48[1]); /*0x501e79*/
      if ( (unsigned __int8)CellStruct::Equals((CellStruct *)v46, &stru_A8EB00.?[948]) ) /*0x501e7d*/
      {
        v26 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x501e92*/
        v53 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x501e97*/
        v54 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x501e9b*/
      }
      else
      {
        v27 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v46); /*0x501eab*/
        v28 = (int *)(*(int (__thiscall **)(void *, Coord3D *))(*(_DWORD *)v27 + 72))(v27, &v56); /*0x501ebc*/
        v53 = *v28; /*0x501ec1*/
        v54 = v28[1]; /*0x501ec8*/
        v26 = v28[2]; /*0x501ecc*/
      }
      v42 = v26; /*0x501eda*/
      v47.Coord3D_field_0x04 = SLOWORD(v45) - 0x3FFF; /*0x501edb*/
      __asm /*0x501edf*/
      {
        fild [esp+9Ch+var_6C.Coord3D_field_0x04]
        fmul ds:dbl_7E2810
        fstp qword ptr [esp+9Ch+var_6C.Coord3D_field_0x04]
        fild dword ptr [esp+9Ch+var_7C+4]
      }
      v29 = *(double *)&v47.Coord3D_field_0x04; /*0x501ef5*/
      __asm /*0x501efb*/
      {
        fstp qword ptr [esp+0A4h+var_7C+4]
        fild [esp+0A4h+var_2C]
        fstp qword ptr [esp+0A4h+var_8C+4]
      }
      Math::SinCos(*(double *)&v47.Coord3D_field_0x04); /*0x501f07*/
      __asm { fmul qword ptr [esp+0A4h+var_7C+4] } /*0x501f0c*/
      __asm { fsubr qword ptr [esp+9Ch+var_8C+4] }
      LOWORD(v30) = Math::RoundToInt(v3); /*0x501f17*/
      v38 = v30; /*0x501f1c*/
      Math::ArcTan2(v29); /*0x501f1f*/
      __asm { fmul qword ptr [esp+0A8h+var_7C+4] } /*0x501f24*/
      __asm { fiadd [esp+0A0h+var_30] }
      LOWORD(v31) = Math::RoundToInt(v3); /*0x501f2f*/
      v10 = Coord3D::Set((Coord3D *)&v47.Coord3D_field_0x04, v31, v38, v42); /*0x501f39*/
LABEL_23:
      v49 = *(Coord3D *)v10; /*0x501f3e*/
      break; /*0x501f52*/
    case 4: /*0x501b24*/
      v46[1] = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, unknown5498, 2 * unknown5498); /*0x501f70*/
      LOWORD(v45) = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x501f7f*/
      LODWORD(v45) |= 0xC000u; /*0x501f98*/
      _EDI = HouseClass::GetStartCoords(this, v57); /*0x501fa7*/
      v43 = _EDI[2]; /*0x501fc2*/
      v47.Coord3D_field_0x04 = (LOWORD(v45) & 0x1FFF ^ (__int16)((LOWORD(v45) & 0xE000) - 1) & 0xFFFFE000) - 0x3FFF; /*0x501fc9*/
      __asm /*0x501fcd*/
      {
        fild [esp+9Ch+var_6C.Coord3D_field_0x04]
        fmul ds:dbl_7E2810
        fstp qword ptr [esp+9Ch+var_5C+4]
        fild dword ptr [esp+9Ch+var_7C+4]
      }
      __asm
      {
        fstp qword ptr [esp+0A4h+var_6C.Coord3D_field_0x04]
        fild dword ptr [edi+4]
        fstp qword ptr [esp+0A4h+var_7C+4]
      }
      Math::SinCos(*(double *)&v48[1]); /*0x501ff4*/
      __asm { fmul qword ptr [esp+0A4h+var_6C.Coord3D_field_0x04] } /*0x501ff9*/
      __asm { fsubr qword ptr [esp+9Ch+var_7C+4] }
      LOWORD(v33) = Math::RoundToInt(v3); /*0x502004*/
      v39 = v33; /*0x50200d*/
      Math::ArcTan2(*(double *)&v48[1]); /*0x502010*/
      __asm { fmul qword ptr [esp+0A8h+var_6C.Coord3D_field_0x04] } /*0x502015*/
      __asm { fiadd dword ptr [edi] }
      LOWORD(v34) = Math::RoundToInt(v3); /*0x50201e*/
      v49 = *(Coord3D *)Coord3D::Set(&v56, v34, v39, v43); /*0x502032*/
      break; /*0x502032*/
    default:
      break;
  }
  if ( (unsigned __int8)Coord3D::Equals(&v49, &stru_A8EB00.?[1044]) ) /*0x50204d*/
  {
    if ( a3 ) /*0x50205b*/
      v44 = *HouseClass::GenerateAttackCoords(this, &v48[1], 0); /*0x502081*/
    else
      v44 = *HouseClass::GetCurrentOption(this, &v48[1]); /*0x50206b*/
  }
  else
  {
    v44 = *Coord::ToCell((Coord *)&v49, &v48[1]); /*0x502097*/
  }
  if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&v44, 1) ) /*0x5020a7*/
    *a2 = v44; /*0x5020df*/
  else
    *a2 = *HouseClass::ClampToUsableCell((HouseClass *)&stru_87F5F0.__pad_58[416], &v48[1], (__int16 *)&v44); /*0x5020c9*/
  return a2; /*0x5020cd*/
}



// ==== 0x00502160  WaypointClass::FindOrAddPath  this=WaypointClass  sig=csp ====
char __thiscall WaypointClass::FindOrAddPath(WaypointClass *this, _DWORD *a2)
{
  int *v2; // ebp
  int v3; // ebx
  signed int v4; // esi
  int v5; // eax
  int v6; // eax
  Array *v7; // ecx
  int v8; // edi
  int *Element; // eax
  int v10; // kr08_4
  int v11; // eax
  char result; // al
  unsigned int v13; // esi
  int v14; // eax
  int v15; // eax
  signed int v16; // [esp+10h] [ebp-Ch]
  __int16 v18; // [esp+1Ah] [ebp-2h]

  v2 = &this->padding_18[114]; /*0x502171*/
  v3 = *a2 / 256; /*0x50218e*/
  v4 = 0; /*0x502194*/
  v18 = a2[1] / 256; /*0x502196*/
  v16 = 0; /*0x50219b*/
  while ( 1 ) /*0x50219f*/
  {
    if ( !*v2 ) /*0x50219f*/
    {
      v5 = __2_YAPAXI_Z(0x40u); /*0x5021a7*/
      if ( v5 ) /*0x5021b1*/
        v6 = WaypointPathClass::Construct(v5, v4); /*0x5021b6*/
      else
        v6 = 0; /*0x5021bd*/
      *v2 = v6; /*0x5021bf*/
    }
    v7 = (Array *)*v2; /*0x5021c2*/
    v8 = 0; /*0x5021c5*/
    if ( *(int *)(*v2 + 56) > 0 ) /*0x5021cc*/
      break; /*0x5021cc*/
LABEL_13:
    ++v4; /*0x50221e*/
    ++v2; /*0x50221f*/
    v16 = v4; /*0x502225*/
    if ( v4 >= 12 ) /*0x502229*/
    {
      v13 = this->padding_18[113]; /*0x502233*/
      if ( !this->padding_18[v13 + 114] ) /*0x502239*/
      {
        v14 = __2_YAPAXI_Z(0x40u); /*0x502246*/
        if ( v14 ) /*0x502250*/
          v15 = WaypointPathClass::Construct(v14, v13); /*0x502255*/
        else
          v15 = 0; /*0x50225c*/
        this->padding_18[v13 + 114] = v15; /*0x50225e*/
      }
      return WaypointClass_Find((ObjectClass *)this->padding_18[this->padding_18[113] + 114], a2); /*0x502277*/
    }
  }
  while ( 1 ) /*0x5021cf*/
  {
    Element = (int *)Array::GetElement(v7, v8); /*0x5021cf*/
    v10 = *Element; /*0x5021e1*/
    v11 = Element[1] / 256; /*0x5021f2*/
    if ( (unsigned __int16)(v10 / 256) == (_WORD)v3 && (_WORD)v11 == v18 ) /*0x5021ff*/
    {
      result = v16; /*0x502205*/
      if ( v16 != this->padding_18[113] ) /*0x50220f*/
        return result; /*0x50227c*/
    }
    v7 = (Array *)*v2; /*0x502211*/
    if ( ++v8 >= *(_DWORD *)(*v2 + 56) ) /*0x502218*/
    {
      v4 = v16; /*0x50221a*/
      goto LABEL_13; /*0x50221a*/
    }
  }
}



// ==== 0x005022F0  WaypointClass::IsCoordinateUsed  this=WaypointClass  sig=csp ====
char __thiscall WaypointClass::IsCoordinateUsed(WaypointClass *this, _WORD *a2)
{
  signed int v2; // esi
  int *i; // ebx
  int v4; // eax
  int v5; // eax
  Array *v6; // ecx
  int v7; // edi
  int *Element; // eax
  int v9; // kr04_4
  int v10; // eax
  signed int v12; // [esp+10h] [ebp-8h]

  v2 = 0; /*0x5022fa*/
  v12 = 0; /*0x502301*/
  for ( i = &this->padding_18[114]; ; ++i ) /*0x502305*/
  {
    if ( !*i ) /*0x50230b*/
    {
      v4 = __2_YAPAXI_Z(0x40u); /*0x502312*/
      if ( v4 ) /*0x50231c*/
        v5 = WaypointPathClass::Construct(v4, v2); /*0x502321*/
      else
        v5 = 0; /*0x502328*/
      *i = v5; /*0x50232a*/
    }
    v6 = (Array *)*i; /*0x50232c*/
    v7 = 0; /*0x50232e*/
    if ( *(int *)(*i + 56) > 0 ) /*0x502335*/
      break; /*0x502335*/
LABEL_13:
    v12 = ++v2; /*0x50238d*/
    if ( v2 >= 12 ) /*0x502391*/
      return 1; /*0x5023a0*/
  }
  while ( 1 ) /*0x502338*/
  {
    Element = (int *)Array::GetElement(v6, v7); /*0x502338*/
    v9 = *Element; /*0x50234a*/
    v10 = Element[1] / 256; /*0x50235b*/
    if ( (unsigned __int16)(v9 / 256) == *a2 && (_WORD)v10 == a2[1] && v12 != this->padding_18[113] ) /*0x502378*/
      return 0; /*0x502397*/
    v6 = (Array *)*i; /*0x50237a*/
    if ( ++v7 >= *(_DWORD *)(*i + 56) ) /*0x502380*/
    {
      v2 = v12; /*0x502382*/
      goto LABEL_13; /*0x502382*/
    }
  }
}



// ==== 0x005023B0  Waypoint::FindByCell  this=AbstractClass  sig=csp ====
_DWORD *__thiscall Waypoint_FindByCell(char *this, _WORD *a2)
{
  signed int v2; // esi
  char *i; // ebx
  void *v4; // eax
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // edi
  _DWORD *Element; // esi
  signed int v10; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x5023b8*/
  v10 = 0; /*0x5023bb*/
  for ( i = this + 528; ; i += 4 ) /*0x5023bf*/
  {
    if ( !*(_DWORD *)i ) /*0x5023c5*/
    {
      v4 = __2_YAPAXI_Z(0x40u); /*0x5023cc*/
      if ( v4 ) /*0x5023d6*/
        v5 = WaypointPathClass::Construct((int)v4, v2); /*0x5023db*/
      else
        v5 = 0; /*0x5023e2*/
      *(_DWORD *)i = v5; /*0x5023e4*/
    }
    v6 = *(_DWORD **)i; /*0x5023e6*/
    v7 = 0; /*0x5023e8*/
    if ( *(int *)(*(_DWORD *)i + 56) > 0 ) /*0x5023ef*/
      break; /*0x5023ef*/
LABEL_12:
    v10 = ++v2; /*0x502437*/
    if ( v2 >= 12 ) /*0x50243b*/
      return 0; /*0x50244c*/
  }
  while ( 1 ) /*0x5023f7*/
  {
    Element = (_DWORD *)Array::GetElement(v6, v7); /*0x5023f7*/
    if ( (unsigned __int16)(*Element / 256) == *a2 && (unsigned __int16)(Element[1] / 256) == a2[1] ) /*0x502422*/
      return Element; /*0x502441*/
    v6 = *(_DWORD **)i; /*0x502424*/
    if ( ++v7 >= *(_DWORD *)(*(_DWORD *)i + 56) ) /*0x50242a*/
    {
      v2 = v10; /*0x50242c*/
      goto LABEL_12; /*0x50242c*/
    }
  }
}



// ==== 0x00502460  WaypointClass::FindOrCreate  this=AbstractClass  sig=csp ====
int __thiscall WaypointClass::FindOrCreate(char *this, int a2, unsigned int *a3, _BYTE *a4)
{
  unsigned int v4; // edi
  char *i; // esi
  void *v6; // eax
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // ebx
  int result; // eax

  v4 = 0; /*0x502468*/
  for ( i = this + 528; ; i += 4 ) /*0x50246a*/
  {
    if ( !*(_DWORD *)i ) /*0x502470*/
    {
      v6 = __2_YAPAXI_Z(0x40u); /*0x502477*/
      if ( v6 ) /*0x502481*/
        v7 = WaypointPathClass::Construct((int)v6, v4); /*0x502486*/
      else
        v7 = 0; /*0x50248d*/
      *(_DWORD *)i = v7; /*0x50248f*/
    }
    v8 = *(_DWORD **)i; /*0x502491*/
    v9 = 0; /*0x502493*/
    if ( *(int *)(*(_DWORD *)i + 56) > 0 ) /*0x50249a*/
      break; /*0x50249a*/
LABEL_10:
    if ( (int)++v4 >= 12 ) /*0x5024b5*/
    {
      result = (int)a4; /*0x5024bb*/
      *a3 = -1; /*0x5024c1*/
      *a4 = 0; /*0x5024c7*/
      LOBYTE(result) = 0; /*0x5024cb*/
      return result; /*0x5024ce*/
    }
  }
  while ( Array::GetElement(v8, v9) != a2 ) /*0x5024a4*/
  {
    v8 = *(_DWORD **)i; /*0x5024a6*/
    if ( ++v9 >= *(_DWORD *)(*(_DWORD *)i + 56) ) /*0x5024ac*/
      goto LABEL_10; /*0x5024ac*/
  }
  result = (int)a3; /*0x5024d1*/
  *a3 = v4; /*0x5024d9*/
  *a4 = v9; /*0x5024dd*/
  LOBYTE(result) = 1; /*0x5024e0*/
  return result; /*0x5024bf*/
}



// ==== 0x005024F0  HouseClass::StubReturnNullPointer  this=HouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::StubReturnNullPointer(HouseClass *this, _DWORD *a2)
{
  VectorClass_ptr_BuildChoiceClass_int_ouseClass *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // esi

  if ( !a2 ) /*0x5024f8*/
    return -2147467261; /*0x5024fb*/
  v3 = (VectorClass_ptr_BuildChoiceClass_int_ouseClass *)__2_YAPAXI_Z(0x24u); /*0x502506*/
  if ( !v3 ) /*0x502510*/
    return -2147024882; /*0x502510*/
  v4 = VectorClass_ptr_BuildChoiceClass_int_ouseClass::Constructor(v3, &this->uiName[18]); /*0x50251f*/
  v5 = v4; /*0x502524*/
  if ( !v4 ) /*0x502528*/
    return -2147024882; /*0x50252b*/
  (*(void (__stdcall **)(_DWORD *))(*v4 + 4))(v4); /*0x502537*/
  *a2 = v5; /*0x50253a*/
  return 0; /*0x5024fa*/
}



// ==== 0x00502550  HouseClass::StubReturnNullPointer_0  this=HouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::StubReturnNullPointer_0(
        HouseClass *this,
        const void *a2,
        _DWORD *a3)
{
  int v4; // ebp
  int v5; // ebx
  _BYTE v6[16]; // [esp+10h] [ebp-10h] BYREF

  if ( !a3 ) /*0x50255d*/
    return -2147467261; /*0x502562*/
  *a3 = 0; /*0x50256e*/
  v4 = 0; /*0x502578*/
  if ( *(int *)&this->uiName[34] <= 0 ) /*0x502582*/
    return -2147220990; /*0x5025bc*/
  while ( 1 ) /*0x502593*/
  {
    v5 = *(_DWORD *)(*(_DWORD *)&this->uiName[22] + 4 * v4); /*0x502593*/
    (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v5 + 12))(v5, v6); /*0x502599*/
    if ( !memcmp(v6, a2, 0x10u) ) /*0x5025ab*/
      break; /*0x5025ab*/
    if ( ++v4 >= *(_DWORD *)&this->uiName[34] ) /*0x5025ba*/
      return -2147220990; /*0x5025ba*/
  }
  *a3 = v5; /*0x5025d0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 4))(v5); /*0x5025d4*/
  return 0; /*0x50255f*/
}



// ==== 0x005025F0  HouseClass::RegisterGain  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::RegisterGain(int this, int a2, char a3)
{
  int v5; // eax
  int v6; // ecx
  int v7; // ebx
  int v8; // ebp
  _DWORD *result; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edx
  float *v14; // ebx
  int i; // esi
  double v16; // st7
  double v17; // st7
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // [esp+Ch] [ebp-14h]
  _DWORD v30[4]; // [esp+10h] [ebp-10h] BYREF
  char v31; // [esp+24h] [ebp+4h]

  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 1516) ) /*0x502606*/
    --*(_DWORD *)(this + 344); /*0x502610*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 1517) ) /*0x502620*/
    --*(_DWORD *)(this + 348); /*0x50262a*/
  SidebarClass::UpdateCameoProductionState((int)&dword_87F7E8, (_DWORD *)a2); /*0x502636*/
  if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 1036) )
  {
    if ( a2 )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 )
      {
        if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 ? a2 + 0x662 : 1634) )
        {
          *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 ? a2 + 0x662 : 1634) = 0;
          v5 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 1036); /*0x5026b4*/
          v6 = *(_DWORD *)(this + 728) - 1; /*0x5026ba*/
          v29 = v5; /*0x5026bb*/
          *(_DWORD *)(this + 728) = v6; /*0x5026bf*/
          if ( !v6 ) /*0x5026c5*/
          {
            if ( v5 ) /*0x5026cd*/
            {
              v31 = 0; /*0x5026d9*/
              v7 = dword_A8EC88 - 1; /*0x5026de*/
              if ( dword_A8EC88 - 1 >= 0 ) /*0x5026e3*/
              {
                do /*0x502723*/
                {
                  v8 = *((_DWORD *)dword_A8EC7C + v7); /*0x5026f0*/
                  if ( *(_DWORD *)(v8 + 540) == this /*0x50270c*/
                    && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v8 + 132))(*((_DWORD *)dword_A8EC7C + v7)) == v29
                    && !*(_BYTE *)(v8 + 129) )
                  {
                    TechnoClass::Deactivate((_DWORD *)v8); /*0x502718*/
                    v31 = 1; /*0x50271d*/
                  }
                  --v7; /*0x502722*/
                }
                while ( v7 >= 0 ); /*0x502723*/
                if ( v31 && byte_A8E9A0 ) /*0x502735*/
                {
                  if ( dword_A8B238[0] ) /*0x50273e*/
                  {
                    if ( (#375 *)this != dword_A83D4C ) /*0x502761*/
                      goto LABEL_26; /*0x502761*/
                  }
                  else if ( !*(_BYTE *)(this + 492) && !*(_BYTE *)(this + 493) ) /*0x502752*/
                  {
                    goto LABEL_26; /*0x502752*/
                  }
                  if ( !dword_A8E7AC ) /*0x50276a*/
                    VoxClass::FindAndPlay(g_Str_EVA_RobotTanksOffline, -1); /*0x502776*/
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_26:
  result = (_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) - 1); /*0x502782*/
  switch ( (unsigned int)result ) /*0x502794*/
  {
    case 0u: /*0x502794*/
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 3478) /*0x5029d9*/
        || *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 3416) )
      {
        v26 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x502a04*/
        *(_DWORD *)(this + 90288) -= (*(int (__thiscall **)(int, int))(*(_DWORD *)v26 + 132))(v26, this); /*0x502a15*/
      }
      else
      {
        v25 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x5029e7*/
        *(_DWORD *)(this + 90284) -= (*(int (__thiscall **)(int, int))(*(_DWORD *)v25 + 132))(v25, this); /*0x5029f8*/
      }
      result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x502a1f*/
      if ( !*((_BYTE *)result + 3231) ) /*0x502a25*/
      {
        v27 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x502a33*/
        v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 64))(v27); /*0x502a3d*/
        result = (_DWORD *)CounterClass::Decrement((_DWORD *)(this + 21860), v28); /*0x502a47*/
      }
      break; /*0x502a47*/
    case 1u: /*0x502794*/
      v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x5028d4*/
      *(_DWORD *)(this + 90288) -= (*(int (__thiscall **)(int, int))(*(_DWORD *)v18 + 132))(v18, this); /*0x5028ef*/
      result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x5028f7*/
      if ( !*((_BYTE *)result + 3231) ) /*0x5028fd*/
      {
        v19 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x50290f*/
        v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 64))(v19); /*0x502919*/
        result = (_DWORD *)CounterClass::Decrement((_DWORD *)(this + 21900), v20); /*0x502923*/
      }
      break; /*0x50292e*/
    case 5u: /*0x502794*/
      result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x50279f*/
      if ( !*((_BYTE *)result + 3231) ) /*0x5027a5*/
      {
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x5027b3*/
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 64))(v10); /*0x5027bd*/
        result = (_DWORD *)CounterClass::Decrement((_DWORD *)(this + 21840), v11); /*0x5027c7*/
      }
      if ( a2 ) /*0x5027ce*/
      {
        v12 = *(_DWORD *)(a2 + 1312); /*0x5027d4*/
        if ( *(_BYTE *)(v12 + 5821) && !*(_BYTE *)(v12 + 3278) ) /*0x5027e4*/
          --*(_DWORD *)(this + 352); /*0x5027ee*/
        v13 = *(_DWORD *)(this + 784); /*0x5027f4*/
        *(_BYTE *)(this + 22392) = 1; /*0x5027fa*/
        *(_DWORD *)(this + 784) = v13 - *(_DWORD *)(*(_DWORD *)(a2 + 1312) + 2048); /*0x502815*/
        if ( a3 ) /*0x50281b*/
        {
          v14 = (float *)(a2 + 828); /*0x502821*/
          result = (_DWORD *)FirstFloatPositive((float *)(a2 + 828)); /*0x502829*/
          for ( i = (int)result; result != (_DWORD *)-1; i = (int)result ) /*0x502833*/
          {
            v16 = Float::SubtractClamped(v14, 2147483600.0, i); /*0x502841*/
            v17 = (double)(int)Math::RoundToInt(v16); /*0x50284f*/
            *(_DWORD *)(this + 21736) = Math::RoundToInt(v17); /*0x502866*/
            *(_DWORD *)(this + 780) = Math::RoundToInt(v17); /*0x502893*/
            result = (_DWORD *)FirstFloatPositive(v14); /*0x50289b*/
          }
        }
        else
        {
          result = HouseClass::ComputeResourceDelta((float *)(this + 764), v30, a2 + 828); /*0x5028c2*/
        }
      }
      break; /*0x5028a5*/
    case 0xEu: /*0x502794*/
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 3478) ) /*0x50293b*/
      {
        v21 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x502949*/
        *(_DWORD *)(this + 90288) -= (*(int (__thiscall **)(int, int))(*(_DWORD *)v21 + 132))(v21, this); /*0x50295a*/
      }
      else
      {
        v22 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x502966*/
        *(_DWORD *)(this + 90280) -= (*(int (__thiscall **)(int, int))(*(_DWORD *)v22 + 132))(v22, this); /*0x502977*/
      }
      result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x502981*/
      if ( !*((_BYTE *)result + 3231) ) /*0x502987*/
      {
        v23 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x502999*/
        v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 64))(v23); /*0x5029a3*/
        result = (_DWORD *)CounterClass::Decrement((_DWORD *)(this + 21880), v24); /*0x5029ad*/
      }
      break; /*0x5029b8*/
    default:
      return result;
  }
  return result; /*0x5028a7*/
}



// ==== 0x00502A80  HouseClass::RegisterGain_0  this=HouseClass  sig=csp ====
char __thiscall HouseClass::RegisterGain_0(int this, BuildingClass *a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  BuildingTypeClass *Type; // eax
  int PowerDrain; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  _DWORD v21[4]; // [esp+8h] [ebp-10h] BYREF

  if ( *(_BYTE *)((*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2) + 1516) ) /*0x502a95*/
    ++*(_DWORD *)(this + 344); /*0x502a9f*/
  if ( *(_BYTE *)((*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2) + 1517) ) /*0x502aaf*/
    ++*(_DWORD *)(this + 348); /*0x502ab9*/
  v4 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 11))(a2) - 1; /*0x502ac6*/
  switch ( v4 ) /*0x502ad8*/
  {
    case 0: /*0x502ad8*/
      if ( *(_BYTE *)((*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2) + 3478) /*0x502ca5*/
        || *(_DWORD *)((*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2) + 3416) )
      {
        v17 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502cd0*/
        *(_DWORD *)(this + 90288) += (*(int (__thiscall **)(int, int))(*(_DWORD *)v17 + 132))(v17, this); /*0x502ce1*/
      }
      else
      {
        v16 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502cb3*/
        *(_DWORD *)(this + 90284) += (*(int (__thiscall **)(int, int))(*(_DWORD *)v16 + 132))(v16, this); /*0x502cc4*/
      }
      v18 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502ceb*/
      v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 64))(v18); /*0x502cf5*/
      LOBYTE(v4) = RefCount::Increment((RefCount *)(this + 21860), v19); /*0x502cff*/
      break; /*0x502cff*/
    case 1: /*0x502ad8*/
      v9 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502b94*/
      *(_DWORD *)(this + 90288) += (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 132))(v9, this); /*0x502baf*/
      v4 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502bb7*/
      if ( !*(_BYTE *)(v4 + 3231) ) /*0x502bbd*/
      {
        v10 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502bcf*/
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 64))(v10); /*0x502bd9*/
        LOBYTE(v4) = RefCount::Increment((RefCount *)(this + 21900), v11); /*0x502be3*/
      }
      break; /*0x502bed*/
    case 5: /*0x502ad8*/
      v4 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502ae3*/
      if ( !*(_BYTE *)(v4 + 3231) ) /*0x502ae9*/
      {
        v5 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502af7*/
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 64))(v5); /*0x502b01*/
        LOBYTE(v4) = RefCount::Increment((RefCount *)(this + 21840), v6); /*0x502b0b*/
      }
      if ( a2 ) /*0x502b12*/
      {
        v4 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 11))(a2); /*0x502b1c*/
        if ( v4 == 6 ) /*0x502b22*/
        {
          Type = a2->Type; /*0x502b28*/
          if ( Type->WeaponsFactory && !Type->?[1] ) /*0x502b38*/
            ++*(_DWORD *)(this + 352); /*0x502b42*/
          PowerDrain = BuildingClass::GetPowerDrain(a2); /*0x502b4a*/
          HouseClass::NotifyPowerStateChange((HouseClass *)this, PowerDrain); /*0x502b52*/
          *(_DWORD *)(this + 784) += a2->Type->?; /*0x502b78*/
          LOBYTE(v4) = (unsigned __int8)HouseClass::AccumulateFloat4((float *)(this + 764), v21, (int)&a2->?); /*0x502b83*/
        }
      }
      break; /*0x502b8d*/
    case 14: /*0x502ad8*/
      if ( *(_BYTE *)((*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2) + 3478) ) /*0x502bfa*/
      {
        v12 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502c08*/
        *(_DWORD *)(this + 90288) += (*(int (__thiscall **)(int, int))(*(_DWORD *)v12 + 132))(v12, this); /*0x502c19*/
      }
      else
      {
        v13 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502c25*/
        *(_DWORD *)(this + 90280) += (*(int (__thiscall **)(int, int))(*(_DWORD *)v13 + 132))(v13, this); /*0x502c36*/
      }
      LOBYTE(v4) = a2->__pad_6B8[33]; /*0x502c3c*/
      if ( !(_BYTE)v4 ) /*0x502c44*/
      {
        v4 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502c4e*/
        if ( !*(_BYTE *)(v4 + 3231) ) /*0x502c54*/
        {
          v14 = (*((int (__thiscall **)(BuildingClass *))a2->TechnoClass + 33))(a2); /*0x502c66*/
          v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 64))(v14); /*0x502c70*/
          LOBYTE(v4) = RefCount::Increment((RefCount *)(this + 21880), v15); /*0x502c7a*/
        }
      }
      break; /*0x502c84*/
    default:
      return v4;
  }
  return v4; /*0x502b88*/
}



// ==== 0x00502D30  HouseClass::FindOwner  this=HouseClass  sig=csp ====
int __thiscall HouseClass::FindOwner(HouseClass *this)
{
  int v1; // edx
  char *i; // esi
  int result; // eax

  v1 = 0; /*0x502d39*/
  if ( stru_A80220.? <= 0 ) /*0x502d3d*/
    return 0; /*0x502d5a*/
  for ( i = (char *)stru_A80220.?; ; i += 4 ) /*0x502d3f*/
  {
    result = *(_DWORD *)i; /*0x502d45*/
    if ( *(HouseClass **)(*(_DWORD *)(*(_DWORD *)i + 52) + 184) == this ) /*0x502d50*/
      break; /*0x502d50*/
    if ( ++v1 >= stru_A80220.? ) /*0x502d58*/
      return 0; /*0x502d58*/
  }
  return result; /*0x502d5c*/
}



// ==== 0x00502D60  HouseClass::UpdatePowerTimers  this=HouseClass  sig=csp ====
int __thiscall HouseClass::UpdatePowerTimers(HouseClass *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x502d69*/
  Power::TimerProcess(*(_DWORD *)&this->__pad_13C[72]); /*0x502d77*/
  Power::TimerProcess(*(_DWORD *)(this->relatedTagsCapacity + 184)); /*0x502d88*/
  Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_13C[76], *(_DWORD *)&this->__pad_13C[80]); /*0x502d9d*/
  Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_13C[84], *(_DWORD *)&this->__pad_13C[88]); /*0x502db2*/
  Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_13C[92], *(_DWORD *)&this->__pad_13C[96]); /*0x502dc7*/
  Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_13C[100], *(_DWORD *)&this->__pad_13C[104]); /*0x502ddc*/
  Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_13C[108], *(_DWORD *)&this->__pad_13C[112]); /*0x502df1*/
  Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_13C[116], *(_DWORD *)&this->__pad_13C[120]); /*0x502e06*/
  Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_13C[124], *(_DWORD *)&this->__pad_13C[128]); /*0x502e1b*/
  Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_13C[132], *(_DWORD *)&this->__pad_13C[136]); /*0x502e30*/
  v3 = Checksummer::Add_double((Checksummer *)a2, *(_DWORD *)&this->__pad_13C[140], *(_DWORD *)&this->__pad_13C[144]); /*0x502e45*/
  LOBYTE(v3) = this->currentPlayer; /*0x502e4a*/
  Power::FlagProcess((Power *)a2, v3); /*0x502e53*/
  LOBYTE(v4) = this->production; /*0x502e58*/
  Power::FlagProcess((Power *)a2, v4); /*0x502e61*/
  LOBYTE(v5) = this->autocreateAllowed; /*0x502e66*/
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x502e6f*/
  LOBYTE(v6) = this->aiTriggersActive; /*0x502e74*/
  Power::FlagProcess((Power *)a2, v6); /*0x502e7d*/
  LOBYTE(v7) = this->defeated; /*0x502e82*/
  Power::FlagProcess((Power *)a2, v7); /*0x502e8b*/
  Power::TimerProcess(this->iqLevel2); /*0x502e99*/
  Power::TimerProcess(this->aiMode); /*0x502ea7*/
  Power::TimerProcess(this->repairTimer[2]); /*0x502eb5*/
  v8 = *(_DWORD *)this->__pad_280; /*0x502eba*/
  v9 = *(_DWORD *)&this->__pad_280[8]; /*0x502ec0*/
  if ( v8 != -1 ) /*0x502ec9*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v8 >= v9 ) /*0x502ed5*/
      v9 = 0; /*0x502edb*/
    else
      v9 -= *(_DWORD *)&stru_A8EB00.?[416] - v8; /*0x502ed7*/
  }
  Power::TimerProcess(v9); /*0x502ee0*/
  v10 = this->HouseClass_field_timer_28C[0]; /*0x502ee5*/
  v11 = this->HouseClass_field_timer_28C[2]; /*0x502eeb*/
  if ( v10 != -1 ) /*0x502ef4*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v10 >= v11 ) /*0x502f00*/
      v11 = 0; /*0x502f06*/
    else
      v11 -= *(_DWORD *)&stru_A8EB00.?[416] - v10; /*0x502f02*/
  }
  Power::TimerProcess(v11); /*0x502f0b*/
  v12 = this->savourTimer[0]; /*0x502f10*/
  v13 = this->savourTimer[2]; /*0x502f16*/
  if ( v12 != -1 ) /*0x502f1f*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v12 >= v13 ) /*0x502f2b*/
      v13 = 0; /*0x502f31*/
    else
      v13 -= *(_DWORD *)&stru_A8EB00.?[416] - v12; /*0x502f2d*/
  }
  Power::TimerProcess(v13); /*0x502f36*/
  Power::TimerProcess(this->ownedUnits); /*0x502f44*/
  Power::TimerProcess(this->ownedBuildings); /*0x502f52*/
  Power::TimerProcess(this->ownedInfantry); /*0x502f60*/
  Power::TimerProcess(this->ownedAircraft); /*0x502f6e*/
  Power::TimerProcess(this->balance); /*0x502f7c*/
  Power::TimerProcess(this->totalStorage); /*0x502f8a*/
  Power::TimerProcess(this->numAirpads); /*0x502f98*/
  Power::TimerProcess(this->numBarracks); /*0x502fa6*/
  Power::TimerProcess(this->numWarFactories); /*0x502fb4*/
  Power::TimerProcess(this->numShipyards); /*0x502fc2*/
  Power::TimerProcess(this->numConYards); /*0x502fd0*/
  Power::TimerProcess(this->numOrePurifiers); /*0x502fde*/
  Power::TimerProcess(this->powerOutput); /*0x502fec*/
  Power::TimerProcess(this->powerDrain); /*0x502ffa*/
  LOBYTE(v14) = this->mapIsClear; /*0x502fff*/
  Power::FlagProcess((Power *)a2, v14); /*0x503008*/
  Power::TimerProcess(this->HouseClass_field_548C); /*0x503016*/
  Power::TimerProcess(this->enemyHouseIndex); /*0x503024*/
  return (*(int (__thiscall **)(int *, int *))(this->base[6] + 8))(&this->base[6], a2); /*0x503039*/
}



// ==== 0x00503040  HouseClass::SaveLoad_Prefix  this=HouseClass  sig=csp ====
int __stdcall HouseClass::SaveLoad_Prefix(HouseClass *this, LPSTREAM pStm)
{
  HouseClass *v2; // esi
  int i; // edi
  int j; // edi
  int v5; // ecx
  int lastBuiltInfantryType; // eax
  int v7; // ecx
  int v8; // eax
  LPSTREAM v9; // edi
  int result; // eax
  int *planningPaths; // ebp
  int v12; // ebx
  HouseClass *v13; // ebp
  int v14; // ebx
  int v15; // ecx
  bool v16; // zf
  int v17; // edx
  int supersCapacity; // ecx
  int lastBuiltAircraftType; // eax
  int v20; // eax
  int supersCount; // edx
  int v22; // eax
  int v23; // eax
  int conYardsCapacity; // ecx
  int buildingsCapacity; // eax
  int buildingsCount; // eax
  int conYardsCount; // edx
  int v28; // eax
  int v29; // eax
  int angerNodesCapacity; // ecx
  int scoutNodesCapacity; // eax
  int scoutNodesCount; // eax
  int angerNodesCount; // edx
  int k; // ebp
  int v35; // edx
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // edx
  int v41; // eax
  int m; // ebp
  int ... [68169 chars total]



// ==== 0x00504740  HouseClass::EnsurePlanningPathExists  this=HouseClass  sig=csp ====
int __thiscall HouseClass::EnsurePlanningPathExists(HouseClass *this, unsigned int a2)
{
  int result; // eax
  int v4; // eax

  result = this->planningPaths[a2]; /*0x504748*/
  if ( !result ) /*0x504751*/
  {
    v4 = __2_YAPAXI_Z(0x40u); /*0x504755*/
    if ( v4 ) /*0x50475f*/
    {
      result = WaypointPathClass::Construct(v4, a2); /*0x504764*/
      this->planningPaths[a2] = result; /*0x504769*/
    }
    else
    {
      this->planningPaths[a2] = 0; /*0x504777*/
      return 0; /*0x504775*/
    }
  }
  return result; /*0x504770*/
}



// ==== 0x00504790  UpdateHouseClassAnger  this=HouseClass  sig=csp ====
int __fastcall UpdateHouseClassAnger(unsigned int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  __int64 v5; // rax
  int v6; // ecx
  int v7; // ebp
  int v8; // ecx
  _DWORD *v9; // edi
  int v10; // ecx
  int v12; // [esp+14h] [ebp+4h]
  int v13; // [esp+18h] [ebp+8h]

  v4 = 0; /*0x504793*/
  v5 = a1; /*0x50479c*/
  if ( *(int *)(a1 + 22036) > 0 ) /*0x5047a2*/
  {
    do /*0x5047c8*/
    {
      v6 = *(_DWORD *)(v5 + 22024); /*0x5047ac*/
      v7 = *(_DWORD *)(v6 + 8 * HIDWORD(v5)); /*0x5047b2*/
      v8 = v6 + 8 * HIDWORD(v5); /*0x5047b5*/
      if ( v7 == a4 ) /*0x5047ba*/
        *(_DWORD *)(v8 + 4) += a3; /*0x5047bc*/
      ++HIDWORD(v5); /*0x5047c5*/
    }
    while ( SHIDWORD(v5) < *(_DWORD *)(v5 + 22036) ); /*0x5047c8*/
  }
  v12 = 0; /*0x5047d0*/
  if ( *(int *)(v5 + 22036) <= 0 ) /*0x5047d6*/
    goto LABEL_18; /*0x5047d6*/
  v9 = *(_DWORD **)(v5 + 22024); /*0x5047d8*/
  v13 = *(_DWORD *)(v5 + 22036); /*0x5047de*/
  do /*0x504832*/
  {
    HIDWORD(v5) = *v9; /*0x5047e5*/
    if ( v9[1] > v4 && !*(_BYTE *)(HIDWORD(v5) + 501) ) /*0x5047eb*/
    {
      if ( !HIDWORD(v5) /*0x50481e*/
        || HIDWORD(v5) != (_DWORD)v5
        && (v10 = *(_DWORD *)(HIDWORD(v5) + 48), v10 != *(_DWORD *)(v5 + 48))
        && (v10 == -1 || ((1 << v10) & *(_DWORD *)(v5 + 22408)) == 0) )
      {
        v4 = v9[1]; /*0x504820*/
        v12 = *v9; /*0x504822*/
      }
    }
    v9 += 2; /*0x50482a*/
    --v13; /*0x50482e*/
  }
  while ( v13 ); /*0x504832*/
  if ( v12 ) /*0x50483a*/
    *(_DWORD *)(v5 + 22016) = *(_DWORD *)(v12 + 48); /*0x504842*/
  else
LABEL_18:
    *(_DWORD *)(v5 + 22016) = -1; /*0x50484f*/
  return v5; /*0x50483f*/
}



// ==== 0x00504860  ObjectClass::Team_Helper  this=ObjectClass  sig=csp ====
int __thiscall Team_Helper(ObjectClass *this, int a2)
{
  int result; // eax
  int i; // edx
  int v4; // eax
  int v5; // edi
  int v6; // eax

  result = *((_DWORD *)this + 5515); /*0x504860*/
  for ( i = 0; i < result; ++i ) /*0x50486a*/
  {
    v4 = *((_DWORD *)this + 5512); /*0x504872*/
    v5 = *(_DWORD *)(v4 + 8 * i); /*0x504878*/
    v6 = v4 + 8 * i; /*0x50487b*/
    if ( v5 == a2 ) /*0x504880*/
      *(_BYTE *)(v6 + 4) = 1; /*0x504882*/
    result = *((_DWORD *)this + 5515); /*0x504886*/
  }
  return result; /*0x504893*/
}



// ==== 0x00505180  TechnoClass::checkBuildLimit  this=TechnoClass  sig=csp ====
void __thiscall TechnoClass::checkBuildLimit(TechnoClass *this)
{
  char v2; // al
  int v3; // edi
  HouseClass *v4; // [esp+0h] [ebp-4h]

  v2 = this->disguiseBlinkTimer[0]; /*0x505189*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x505191*/
    v2 = v2 || BYTE1(this->disguiseBlinkTimer[0]); /*0x5051a5*/
  if ( !v2 && *(_DWORD *)&dword_A8B238 ) /*0x5051ad*/
    HouseClass::CanDetect(v4); /*0x5051af*/
  if ( !*((_DWORD *)this + 5573) ) /*0x5051b4*/
  {
    v3 = dword_A8E7AC; /*0x5051bf*/
    dword_A8E7AC = 0; /*0x5051c7*/
    HouseClass::GenerateAIBuildListEnsureSanity((HouseClass *)this); /*0x5051d1*/
    dword_A8E7AC = v3; /*0x5051d6*/
  }
}



// ==== 0x005051E0  HouseClass::FirstBuildableFromArray  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::FirstBuildableFromArray(HouseClass *this, int a2)
{
  char v3; // cl
  int v4; // esi
  int v5; // ebx
  _DWORD **v6; // eax
  _DWORD *result; // eax
  int v8; // edx
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  int v12; // ecx
  int v13; // esi
  _DWORD **v14; // edx
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]
  int i; // [esp+1Ch] [ebp+4h]

  v3 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)(this->relatedTagsCapacity + 152)); /*0x5051f7*/
  v16 = 0; /*0x505202*/
  v4 = *(_DWORD *)(a2 + 16); /*0x50520a*/
  v5 = 1 << v3; /*0x50520d*/
  v17 = v4; /*0x505211*/
  if ( v4 <= 0 ) /*0x505215*/
    return 0; /*0x5052f7*/
  v6 = *(_DWORD ***)(a2 + 4); /*0x50521b*/
  for ( i = (int)v6; ; i += 4 ) /*0x50521e*/
  {
    result = *v6; /*0x505222*/
    if ( (v5 & result[435]) != 0 ) /*0x50522a*/
    {
      v8 = result[872]; /*0x505230*/
      if ( v8 == -1 || ((1 << *(_DWORD *)(this->relatedTagsCapacity + 184)) & v8) != 0 ) /*0x50524d*/
      {
        v9 = result[873]; /*0x505253*/
        if ( v9 == -1 || ((1 << *(_DWORD *)(this->relatedTagsCapacity + 184)) & v9) == 0 ) /*0x505270*/
        {
          v10 = result[436]; /*0x505272*/
          if ( v10 == -1 || v10 == *(_DWORD *)(this->relatedTagsCapacity + 188) ) /*0x505286*/
            break; /*0x505286*/
        }
      }
    }
LABEL_18:
    v6 = (_DWORD **)(i + 4); /*0x5052db*/
    if ( ++v16 >= v4 ) /*0x5052e7*/
      return 0; /*0x5052f1*/
  }
  if ( stru_A8B250.__pad_0[19] ) /*0x505290*/
    return result; /*0x505290*/
  v11 = result[1468]; /*0x505292*/
  if ( v11 == -1 ) /*0x50529b*/
    return result; /*0x50529b*/
  v12 = 0; /*0x5052a3*/
  v13 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2348); /*0x5052a5*/
  if ( v13 <= 0 ) /*0x5052ad*/
  {
LABEL_16:
    if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this->supersCount + 4 * v11) + 40) + 231) ) /*0x5052d5*/
      return result; /*0x5052d5*/
    v4 = v17; /*0x5052d7*/
    goto LABEL_18; /*0x5052d7*/
  }
  v14 = *(_DWORD ***)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2336); /*0x5052af*/
  while ( *v14 != result ) /*0x5052b7*/
  {
    ++v12; /*0x5052b9*/
    ++v14; /*0x5052ba*/
    if ( v12 >= v13 ) /*0x5052bf*/
      goto LABEL_16; /*0x5052bf*/
  }
  return result; /*0x5052f9*/
}



// ==== 0x00505310  BuildingClass::FindBySWType  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::FindBySWType(BuildingClass *this, int a2)
{
  char v2; // cl
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  int i; // esi

  v2 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)&this->?[2].firstTrigger); /*0x50532a*/
  v3 = 0; /*0x50532c*/
  v4 = 1 << v2; /*0x50532e*/
  v5 = *(_DWORD *)(a2 + 16); /*0x505330*/
  if ( v5 <= 0 ) /*0x505335*/
    return 0; /*0x50534e*/
  for ( i = *(_DWORD *)(a2 + 4); (v4 & *(_DWORD *)(*(_DWORD *)i + 1740)) == 0; i += 4 ) /*0x50533a*/
  {
    if ( ++v3 >= v5 ) /*0x50534c*/
      return 0; /*0x50534c*/
  }
  return *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v3); /*0x50534e*/
}



// ==== 0x00505360  HouseClass::PrerequisitesForTechnoTypeAreListed  this=VectorClass  sig=csp ====
int __stdcall HouseClass::PrerequisitesForTechnoTypeAreListed(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // ecx
  int v5; // edx
  int *HarvesterUnit; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // edx
  int v11; // [esp+10h] [ebp-4h]

  result = a1; /*0x505361*/
  v11 = 0; /*0x505371*/
  if ( *(int *)(a1 + 1608) > 0 ) /*0x505379*/
  {
    do /*0x505395*/
    {
      result = *(_DWORD *)(*(_DWORD *)(a1 + 1596) + 4 * v11); /*0x505395*/
      if ( result < 0 ) /*0x50539a*/
      {
        HarvesterUnit = 0; /*0x5053cb*/
        switch ( result ) /*0x5053d2*/
        {
          case -6: /*0x5053d2*/
            HarvesterUnit = (int *)&dword_8871E0->? + 1; /*0x505423*/
            break; /*0x505423*/
          case -5: /*0x5053d2*/
            HarvesterUnit = &dword_8871E0->?[3]; /*0x505415*/
            break; /*0x50541b*/
          case -4: /*0x5053d2*/
            HarvesterUnit = &dword_8871E0->InfantryBaseMult[2]; /*0x505407*/
            break; /*0x50540d*/
          case -3: /*0x5053d2*/
            HarvesterUnit = dword_8871E0->?; /*0x5053fa*/
            break; /*0x505400*/
          case -2: /*0x5053d2*/
            HarvesterUnit = &dword_8871E0->?[2]; /*0x5053ec*/
            break; /*0x5053f2*/
          case -1: /*0x5053d2*/
            HarvesterUnit = (int *)&dword_8871E0->CHRONOSK_SHP; /*0x5053de*/
            break; /*0x5053e4*/
          default:
            break;
        }
        result = HarvesterUnit[4]; /*0x505429*/
        v7 = 0; /*0x50542c*/
        if ( result <= 0 ) /*0x505430*/
        {
LABEL_24:
          LOBYTE(result) = 0; /*0x505475*/
          return result; /*0x50547c*/
        }
        while ( 1 ) /*0x505437*/
        {
          v8 = (*(int (__thiscall **)(int *, int))(*HarvesterUnit + 24))(HarvesterUnit, v7); /*0x505437*/
          v9 = 0; /*0x50543a*/
          if ( a3 > 0 ) /*0x50543e*/
            break; /*0x50543e*/
LABEL_20:
          result = HarvesterUnit[4]; /*0x50544f*/
          if ( ++v7 >= result ) /*0x505455*/
            goto LABEL_24; /*0x505455*/
        }
        v10 = *(_DWORD **)(a2 + 4); /*0x505440*/
        while ( *v10 != v8 ) /*0x505445*/
        {
          ++v9; /*0x505447*/
          ++v10; /*0x505448*/
          if ( v9 >= a3 ) /*0x50544d*/
            goto LABEL_20; /*0x50544d*/
        }
      }
      else
      {
        v4 = 0; /*0x50539c*/
        if ( a3 <= 0 ) /*0x5053a0*/
          goto LABEL_24; /*0x5053a0*/
        v5 = *((_DWORD *)dword_A83C6C + result); /*0x5053ac*/
        result = *(_DWORD *)(a2 + 4); /*0x5053af*/
        while ( *(_DWORD *)result != v5 ) /*0x5053b4*/
        {
          ++v4; /*0x5053ba*/
          result += 4; /*0x5053bb*/
          if ( v4 >= a3 ) /*0x5053c0*/
            goto LABEL_24; /*0x5053c0*/
        }
      }
      result = v11 + 1; /*0x505461*/
      v11 = result; /*0x505468*/
    }
    while ( result < *(_DWORD *)(a1 + 1608) ); /*0x505395*/
  }
  LOBYTE(result) = 1; /*0x50547f*/
  return result; /*0x505475*/
}



// ==== 0x005054B0  HouseClass::GenerateAIBuildListEnsureSanity  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GenerateAIBuildListEnsureSanity(HouseClass *this)
{
  int relatedTagsCapacity; // eax
  int v3; // edx
  int v4; // ebp
  int v5; // esi
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // edx
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ebp
  _DWORD *BuildableFromArray; // esi
  int v18; // eax
  _DWORD *Items; // ecx
  int v20; // eax
  _DWORD *v21; // esi
  int v22; // eax
  _DWORD *v23; // eax
  int v24; // ecx
  _DWORD *v25; // esi
  int v26; // edx
  _DWORD *v27; // eax
  int v28; // ecx
  _DWORD *v29; // esi
  int v30; // edx
  int v31; // ebp
  char v32; // bl
  int v33; // esi
  int v34; // edi
  int v35; // eax
  _DWORD *v36; // esi
  int v37; // eax
  HouseClass *v38; // edi
  _DWORD *v39; // ebp
  int v40; // esi
  int v41; // edx
  int v42; // ecx
  int v43; // eax
  int v44; // esi
  int v45; // edi
  HouseClass *v46; // ebx
  int v47; // edx
  int v48; // edi
  _DWORD *v49; // ecx
  int v50; // ebx
  int v51; // esi
  int m_8; // eax
  _DWORD *v53; // esi
  int v54; // eax
  _DWORD *v55; // esi
  int v56; // eax
  _DWORD *v57; // esi
  int v58; // eax
  int j; // edi
  _DWORD *v60; // esi
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // edx
  int v65; // edi
  int v66; // esi
  int v67; // ecx
  unsigned int v68; // edi
  int *v69; // esi
  int v70; // eax
  int v71; // ecx
  int v72; // eax
  unsigned int v73; // edx
  unsigned int *v74; // eax
  unsigned int v75; // edi
  int v76; // ecx
  int *v77; // esi
  int v78; // eax
  int v79; // ecx
  int v80; // eax
  int result; // eax
  int i; // [esp+60h] [ebp-94h]
  int v83; // [esp+60h] [ebp-94h]
  int k; // [esp+60h] [ebp-94h]
  VectorClass v85; // [esp+64h] [ebp-90h] BYREF
  int v86; // [esp+74h] [ebp-80h]
  int v87; // [esp+78h] [ebp-7Ch]
  _DynamicVectorClass_PBVBuildingTypeClass v88; // [esp+7Ch] [ebp-78h] BYREF
  int v89; // [esp+90h] [ebp-64h]
  HouseClass *v90; // [esp+94h] [ebp-60h]
  int v91; // [esp+98h] [ebp-5Ch]
  int v92; // [esp+9Ch] [ebp-58h]
  VectorClass v93; // [esp+A0h] [ebp-54h] BYREF
  int v94; // [esp+B0h] [ebp-44h]
  int v95; // [esp+B4h] [ebp-40h]
  BoolVector v96; // [esp+B8h] [ebp-3Ch] BYREF
  void *v97; // [esp+BCh] [ebp-38h]
  int v98; // [esp+C0h] [ebp-34h]
  int v99; // [esp+C4h] [ebp-30h]
  int v100; // [esp+C8h] [ebp-2Ch]
  int v101; // [esp+CCh] [ebp-28h]
  int v102; // [esp+D0h] [ebp-24h]
  unsigned int v103; // [esp+DCh] [ebp-18h]
  unsigned int v104; // [esp+ECh] [ebp-8h]

  relatedTagsCapacity = this->relatedTagsCapacity; /*0x5054bb*/
  v3 = this->base[7]; /*0x5054be*/
  v90 = this; /*0x5054c5*/
  v102 = *(_DWORD *)(relatedTagsCapacity + 188); /*0x5054cf*/
  (*(void (__thiscall **)(int *))(v3 + 12))(&this->base[7]); /*0x5054dc*/
  v4 = 1 << SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)(this->relatedTagsCapacity + 152)); /*0x5054f6*/
  VectorClass::BuildingTypeConstructor(&v93, 0, 0); /*0x5054fe*/
  v93.ptr_0 = &DynamicVectorClass<BuildingTypeClass const *>::`vftable'; /*0x50550e*/
  v95 = 10; /*0x505516*/
  v94 = 0; /*0x50551a*/
  BoolVector::Construct(&v96, 0, 0); /*0x50551e*/
  v96 = (BoolVector)&DynamicVectorClass<bool>::`vftable'; /*0x505528*/
  v101 = 10; /*0x505532*/
  v100 = 0; /*0x505536*/
  for ( i = 0; i < dword_A83C78; ++i ) /*0x50553a*/
  {
    v5 = *((_DWORD *)dword_A83C6C + i); /*0x50554d*/
    if ( (v4 & *(_DWORD *)(v5 + 1740)) != 0 ) /*0x505556*/
    {
      v6 = this->relatedTagsCapacity; /*0x50555c*/
      v7 = *(_DWORD *)(v5 + 1744); /*0x50555f*/
      if ( v7 == *(_DWORD *)(v6 + 188) || v7 == -1 ) /*0x505570*/
      {
        if ( *(_BYTE *)(v5 + 5893) ) /*0x505576*/
        {
          if ( *(_DWORD *)(v5 + 1588) <= *(_DWORD *)&this->__pad_13C[152] ) /*0x505592*/
          {
            v8 = *(_DWORD *)(v5 + 3488); /*0x505598*/
            if ( v8 == -1 || ((1 << *(_DWORD *)(v6 + 184)) & v8) != 0 ) /*0x5055b2*/
            {
              v9 = *(_DWORD *)(v5 + 3492); /*0x5055b8*/
              if ( v9 == -1 || ((1 << *(_DWORD *)(v6 + 184)) & v9) == 0 ) /*0x5055d2*/
              {
                if ( stru_A8B250.__pad_0[19] ) /*0x5055df*/
                  goto LABEL_18; /*0x5055df*/
                v10 = *(_DWORD *)(v5 + 5872); /*0x5055e1*/
                if ( v10 == -1 ) /*0x5055ea*/
                  goto LABEL_18; /*0x5055ea*/
                v11 = 0; /*0x5055f2*/
                v12 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2348); /*0x5055f4*/
                if ( v12 > 0 ) /*0x5055fc*/
                {
                  v13 = *(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2336); /*0x5055fe*/
                  while ( *v13 != v5 ) /*0x505606*/
                  {
                    ++v11; /*0x505608*/
                    ++v13; /*0x505609*/
                    if ( v11 >= v12 ) /*0x50560e*/
                      goto LABEL_17; /*0x50560e*/
                  }
LABEL_18:
                  if ( v94 < v93.Capacity /*0x505661*/
                    || (v93.IsAllocated || !v93.Capacity)
                    && v95 > 0
                    && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v93.ptr_0 + 2))(
                         &v93,
                         v95 + v93.Capacity,
                         0) )
                  {
                    v14 = v94++; /*0x50566c*/
                    *((_DWORD *)v93.Items + v14) = v5; /*0x505677*/
                  }
                  if ( v100 < v98 /*0x5056a7*/
                    || (BYTE1(v99) || !v98)
                    && v101 > 0
                    && (*(unsigned __int8 (__thiscall **)(BoolVector *, int, _DWORD))(*(_DWORD *)&v96 + 8))(
                         &v96,
                         v101 + v98,
                         0) )
                  {
                    v15 = v100++; /*0x5056b2*/
                    *((_BYTE *)v97 + v15) = 0; /*0x5056bd*/
                  }
                  continue; /*0x5056bd*/
                }
LABEL_17:
                if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this->supersCount + 4 * v10) + 40) + 231) ) /*0x50561c*/
                  goto LABEL_18; /*0x505624*/
              }
            }
          }
        }
      }
    }
  }
  v16 = v94; /*0x5056d8*/
  v91 = v94; /*0x5056e4*/
  VectorClass::BuildingTypeConstructor(&v85, 0, 0); /*0x5056e8*/
  v85.ptr_0 = &DynamicVectorClass<BuildingTypeClass const *>::`vftable'; /*0x5056fb*/
  v87 = 10; /*0x505704*/
  v86 = 0; /*0x50570c*/
  BuildableFromArray = HouseClass::FirstBuildableFromArray(this, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2220); /*0x505719*/
  v18 = 0; /*0x50571b*/
  if ( v16 > 0 ) /*0x50571f*/
  {
    Items = v93.Items; /*0x505721*/
    while ( BuildableFromArray != (_DWORD *)*Items ) /*0x505727*/
    {
      ++v18; /*0x505729*/
      ++Items; /*0x50572a*/
      if ( v18 >= v16 ) /*0x50572f*/
        goto LABEL_42; /*0x50572f*/
    }
    *((_BYTE *)v97 + v18) = 1; /*0x505737*/
    if ( v86 < v85.Capacity /*0x505766*/
      || (v85.IsAllocated || !v85.Capacity)
      && v87 > 0
      && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v85.ptr_0 + 2))(&v85, v87 + v85.Capacity, 0) )
    {
      v20 = v86++; /*0x505771*/
      *((_DWORD *)v85.Items + v20) = BuildableFromArray; /*0x50577c*/
    }
  }
LABEL_42:
  v21 = HouseClass::FirstBuildableFromArray(this, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2248); /*0x50577f*/
  if ( v86 < v85.Capacity /*0x5057c2*/
    || (v85.IsAllocated || !v85.Capacity)
    && v87 > 0
    && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v85.ptr_0 + 2))(&v85, v87 + v85.Capacity, 0) )
  {
    v22 = v86++; /*0x5057cd*/
    *((_DWORD *)v85.Items + v22) = v21; /*0x5057d8*/
  }
  v23 = HouseClass::FirstBuildableFromArray(this, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2304); /*0x5057ea*/
  v24 = 0; /*0x5057f3*/
  if ( v94 > 0 ) /*0x5057f7*/
  {
    v25 = v93.Items; /*0x5057fd*/
    while ( (_DWORD *)*v25 != v23 ) /*0x505801*/
    {
      ++v24; /*0x505803*/
      ++v25; /*0x505804*/
      if ( v24 >= v94 ) /*0x505809*/
        goto LABEL_54; /*0x505809*/
    }
    v26 = *(_DWORD *)v93.Items; /*0x50580d*/
    *(_DWORD *)v93.Items = v23; /*0x50580f*/
    *((_BYTE *)v97 + v24) = *(_BYTE *)v97; /*0x505817*/
    *(_BYTE *)v97 = 0; /*0x50581e*/
    *((_DWORD *)v93.Items + v24) = v26; /*0x505825*/
  }
LABEL_54:
  v27 = HouseClass::FirstBuildableFromArray(this, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2360); /*0x505828*/
  v28 = 0; /*0x505840*/
  if ( v94 > 0 ) /*0x505844*/
  {
    v29 = v93.Items; /*0x50584a*/
    while ( (_DWORD *)*v29 != v27 ) /*0x50584e*/
    {
      ++v28; /*0x505850*/
      ++v29; /*0x505851*/
      if ( v28 >= v94 ) /*0x505856*/
        goto LABEL_60; /*0x505856*/
    }
    v30 = *((_DWORD *)v93.Items + 1); /*0x50585a*/
    *((_DWORD *)v93.Items + 1) = v27; /*0x50585d*/
    *((_BYTE *)v97 + v28) = *((_BYTE *)v97 + 1); /*0x505867*/
    *((_BYTE *)v97 + 1) = 0; /*0x50586e*/
    *((_DWORD *)v93.Items + v28) = v30; /*0x505876*/
  }
LABEL_60:
  v83 = v16 - 1; /*0x505879*/
  while ( v83 > 0 ) /*0x505882*/
  {
    v31 = -1; /*0x505890*/
    v32 = 0; /*0x505893*/
    v33 = 0; /*0x505895*/
    v92 = v86; /*0x505897*/
    if ( v91 <= 0 ) /*0x50589d*/
      break; /*0x50589d*/
    do /*0x505947*/
    {
      if ( !*((_BYTE *)v97 + v33) ) /*0x5058a7*/
      {
        v34 = *((_DWORD *)v93.Items + v33); /*0x5058ba*/
        if ( _strcmpi((char *)(v34 + 36), aGaplug) ) /*0x5058c1*/
        {
          if ( (unsigned __int8)HouseClass::PrerequisitesForTechnoTypeAreListed(v34, (int)&v85, v92) ) /*0x5058e0*/
          {
            *((_BYTE *)v97 + v33) = 1; /*0x5058ed*/
            if ( v86 < v85.Capacity /*0x50591c*/
              || (v85.IsAllocated || !v85.Capacity)
              && v87 > 0
              && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v85.ptr_0 + 2))(
                   &v85,
                   v87 + v85.Capacity,
                   0) )
            {
              v35 = v86++; /*0x505927*/
              *((_DWORD *)v85.Items + v35) = v34; /*0x505932*/
            }
            v32 = 1; /*0x505939*/
            --v83; /*0x50593c*/
          }
        }
        else
        {
          v31 = v33; /*0x5058cd*/
        }
      }
      ++v33; /*0x505944*/
    }
    while ( v33 < v91 ); /*0x505947*/
    if ( !v32 ) /*0x50594f*/
    {
      if ( v31 == -1 ) /*0x505954*/
        break; /*0x505954*/
      *((_BYTE *)v97 + v31) = 1; /*0x50595a*/
      v36 = (char *)v93.Items + 4 * v31; /*0x505966*/
      if ( v86 < v85.Capacity /*0x505992*/
        || (v85.IsAllocated || !v85.Capacity)
        && v87 > 0
        && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v85.ptr_0 + 2))(
             &v85,
             v87 + v85.Capacity,
             0) )
      {
        v37 = v86++; /*0x5059a1*/
        *((_DWORD *)v85.Items + v37) = *v36; /*0x5059aa*/
      }
      --v83; /*0x5059ad*/
    }
  }
  v38 = v90; /*0x5059bd*/
  v39 = HouseClass::FirstBuildableFromArray(v90, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2276); /*0x5059d9*/
  v40 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2876; /*0x5059db*/
  v41 = 1 << SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)(v38->relatedTagsCapacity + 152)); /*0x5059f6*/
  v42 = *(_DWORD *)(v40 + 16); /*0x5059f8*/
  v43 = 0; /*0x5059fb*/
  if ( v42 <= 0 ) /*0x5059ff*/
    goto LABEL_88; /*0x5059ff*/
  v44 = *(_DWORD *)(v40 + 4); /*0x505a01*/
  v45 = v44; /*0x505a04*/
  while ( (v41 & *(_DWORD *)(*(_DWORD *)v45 + 1740)) == 0 ) /*0x505a0e*/
  {
    ++v43; /*0x505a10*/
    v45 += 4; /*0x505a11*/
    if ( v43 >= v42 ) /*0x505a16*/
      goto LABEL_88; /*0x505a16*/
  }
  if ( *(_DWORD *)(v44 + 4 * v43) ) /*0x505a5a*/
  {
    v46 = v90; /*0x505a60*/
    v47 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4984) /*0x505a75*/
                    + 4 * *(_DWORD *)&v90->__pad_13C[72]);
  }
  else
  {
LABEL_88:
    v46 = v90; /*0x505a18*/
    v47 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4928) /*0x505a35*/
                    + 4 * *(_DWORD *)&v90->__pad_13C[72])
        - 1;
  }
  v48 = 0; /*0x505a3a*/
  if ( v86 - 1 > 0 ) /*0x505a3f*/
  {
    v49 = v85.Items; /*0x505a45*/
    while ( (_DWORD *)*v49 != v39 ) /*0x505a4b*/
    {
      ++v48; /*0x505a4d*/
      ++v49; /*0x505a4e*/
      if ( v48 >= v86 - 1 ) /*0x505a53*/
        goto LABEL_109; /*0x505a53*/
    }
    if ( v48 != -1 && v47 > 0 ) /*0x505a85*/
    {
      v50 = v47; /*0x505a8b*/
      do /*0x505b1f*/
      {
        v51 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, v48, v86 - 1); /*0x505aa9*/
        if ( v86 < v85.Capacity /*0x505ad4*/
          || (v85.IsAllocated || !v85.Capacity)
          && v87 > 0
          && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v85.ptr_0 + 2))(
               &v85,
               v87 + v85.Capacity,
               0) )
        {
          if ( v51 < v86 - 1 ) /*0x505ae2*/
            memcpy((char *)v85.Items + 4 * v51 + 8, (char *)v85.Items + 4 * v51 + 4, 4 * (v86 + 0x3FFFFFFF * (v51 + 1))); /*0x505b05*/
          *((_DWORD *)v85.Items + v51 + 1) = v39; /*0x505b11*/
          ++v86; /*0x505b1a*/
        }
        --v50; /*0x505b1e*/
      }
      while ( v50 ); /*0x505b1f*/
      v46 = v90; /*0x505b25*/
    }
  }
LABEL_109:
  VectorClass::BuildingTypeConstructor((VectorClass *)&v88, 0, 0); /*0x505b29*/
  m_8 = v88.m_8; /*0x505b36*/
  v53 = v85.Items; /*0x505b3a*/
  *(_DWORD *)v88.__pad_0 = &DynamicVectorClass<BuildingTypeClass const *>::`vftable'; /*0x505b40*/
  v89 = 10; /*0x505b48*/
  v88.m_10 = 0; /*0x505b50*/
  if ( v88.m_8 > 0 ) /*0x505b58*/
    goto LABEL_113; /*0x505b58*/
  if ( BYTE1(v88.m_C) || !v88.m_8 ) /*0x505b64*/
  {
    if ( !GenericVector::Resize2(&v88, v88.m_8 + 10, 0) ) /*0x505b78*/
    {
LABEL_114:
      m_8 = v88.m_8; /*0x505b8e*/
      goto LABEL_115; /*0x505b8e*/
    }
LABEL_113:
    v54 = v88.m_10++; /*0x505b7a*/
    *(_DWORD *)(*(_DWORD *)&v88.m_1[3] + 4 * v54) = *v53; /*0x505b8b*/
    goto LABEL_114; /*0x505b8b*/
  }
LABEL_115:
  v55 = (char *)v85.Items + 4; /*0x505b92*/
  if ( v88.m_10 < m_8 ) /*0x505b9f*/
    goto LABEL_120; /*0x505b9f*/
  if ( (BYTE1(v88.m_C) || !m_8) && v89 > 0 ) /*0x505bb3*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DynamicVectorClass_PBVBuildingTypeClass *, int, _DWORD))(*(_DWORD *)v88.__pad_0 + 8))( /*0x505bc7*/
            &v88,
            v89 + m_8,
            0) )
    {
LABEL_121:
      m_8 = v88.m_8; /*0x505bdd*/
      goto LABEL_122; /*0x505bdd*/
    }
LABEL_120:
    v56 = v88.m_10++; /*0x505bc9*/
    *(_DWORD *)(*(_DWORD *)&v88.m_1[3] + 4 * v56) = *v55; /*0x505bda*/
    goto LABEL_121; /*0x505bda*/
  }
LABEL_122:
  v57 = (char *)v85.Items + 8; /*0x505be1*/
  if ( v88.m_10 < m_8 ) /*0x505bee*/
    goto LABEL_127; /*0x505bee*/
  if ( (BYTE1(v88.m_C) || !m_8) && v89 > 0 ) /*0x505c02*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DynamicVectorClass_PBVBuildingTypeClass *, int, _DWORD))(*(_DWORD *)v88.__pad_0 + 8))( /*0x505c16*/
            &v88,
            v89 + m_8,
            0) )
    {
LABEL_128:
      m_8 = v88.m_8; /*0x505c2c*/
      goto LABEL_129; /*0x505c2c*/
    }
LABEL_127:
    v58 = v88.m_10++; /*0x505c18*/
    *(_DWORD *)(*(_DWORD *)&v88.m_1[3] + 4 * v58) = *v57; /*0x505c29*/
    goto LABEL_128; /*0x505c29*/
  }
LABEL_129:
  for ( j = 3; j < v86; ++j ) /*0x505c3b*/
  {
    v60 = (char *)v85.Items + 4 * j; /*0x505c41*/
    if ( v88.m_10 < m_8 ) /*0x505c4a*/
      goto LABEL_135; /*0x505c4a*/
    if ( !BYTE1(v88.m_C) && m_8 || v89 <= 0 ) /*0x505c5e*/
      continue; /*0x505c5e*/
    if ( (*(unsigned __int8 (__thiscall **)(_DynamicVectorClass_PBVBuildingTypeClass *, int, _DWORD))(*(_DWORD *)v88.__pad_0 + 8))( /*0x505c6d*/
           &v88,
           v89 + m_8,
           0) )
    {
LABEL_135:
      v61 = v88.m_10++; /*0x505c7c*/
      *(_DWORD *)(*(_DWORD *)&v88.m_1[3] + 4 * v61) = *v60; /*0x505c85*/
    }
    m_8 = v88.m_8; /*0x505c88*/
  }
  v62 = 0; /*0x505c95*/
  if ( v102 ) /*0x505ca0*/
  {
    if ( v102 == 1 ) /*0x505cb9*/
    {
      v63 = *(_DWORD *)&v46->__pad_13C[72]; /*0x505cc1*/
      v64 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3488); /*0x505cc7*/
    }
    else
    {
      if ( v102 != 2 ) /*0x505cd2*/
        goto LABEL_145; /*0x505cd2*/
      v63 = *(_DWORD *)&v46->__pad_13C[72]; /*0x505cda*/
      v64 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3516); /*0x505ce0*/
    }
  }
  else
  {
    v63 = *(_DWORD *)&v46->__pad_13C[72]; /*0x505ca8*/
    v64 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3460); /*0x505cae*/
  }
  v62 = *(_DWORD *)(v64 + 4 * v63); /*0x505ce6*/
LABEL_145:
  if ( v62 > 0 ) /*0x505ceb*/
  {
    v65 = v62; /*0x505cf1*/
    do /*0x505d87*/
    {
      v66 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 3, v88.m_10 - 1); /*0x505d13*/
      if ( v88.m_10 < v88.m_8 /*0x505d3e*/
        || (BYTE1(v88.m_C) || !v88.m_8)
        && v89 > 0
        && (*(unsigned __int8 (__thiscall **)(_DynamicVectorClass_PBVBuildingTypeClass *, int, _DWORD))(*(_DWORD *)v88.__pad_0 + 8))(
             &v88,
             v89 + v88.m_8,
             0) )
      {
        if ( v66 < v88.m_10 - 1 ) /*0x505d4e*/
          memcpy( /*0x505d6d*/
            (void *)(*(_DWORD *)&v88.m_1[3] + 4 * v66 + 8),
            (const void *)(*(_DWORD *)&v88.m_1[3] + 4 * (v66 + 1)),
            4 * (v88.m_10 + 0x3FFFFFFF * (v66 + 1)));
        *(_DWORD *)(*(_DWORD *)&v88.m_1[3] + 4 * v66 + 4) = -1; /*0x505d79*/
        ++v88.m_10; /*0x505d82*/
      }
      --v65; /*0x505d86*/
    }
    while ( v65 ); /*0x505d87*/
  }
  v67 = 0; /*0x505d91*/
  for ( k = 0; k < v88.m_10; v67 = ++k ) /*0x505d99*/
  {
    v68 = *(_DWORD *)(*(_DWORD *)&v88.m_1[3] + 4 * v67); /*0x505da5*/
    if ( v68 < 0xFFFFFFFC ) /*0x505daa*/
    {
      v92 = 0; /*0x505e33*/
      v75 = *(_DWORD *)(v68 + 3576); /*0x505e41*/
      v76 = v90->base[11]; /*0x505e4d*/
      v77 = &v90->base[7]; /*0x505e53*/
      LOBYTE(v104) = 0; /*0x505e59*/
      v78 = v90->base[9]; /*0x505e61*/
      if ( v76 >= v78 ) /*0x505e66*/
      {
        if ( !BYTE1(v90->base[10]) && v78 ) /*0x505e71*/
          continue; /*0x505e71*/
        v79 = v90->base[12]; /*0x505e73*/
        if ( v79 <= 0 /*0x505e83*/
          || !(*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v77 + 8))(&v90->base[7], v78 + v79, 0) )
        {
          continue; /*0x505e88*/
        }
      }
      v80 = v77[4]; /*0x505e8a*/
      v73 = v104; /*0x505e8d*/
      v77[4] = v80 + 1; /*0x505e97*/
      v74 = (unsigned int *)(v77[1] + 16 * v80); /*0x505ea0*/
      *v74 = v75; /*0x505ea2*/
      v74[1] = 0; /*0x505ea4*/
    }
    else
    {
      v91 = 0; /*0x505db5*/
      LOBYTE(v103) = 0; /*0x505dbf*/
      v69 = &v90->base[7]; /*0x505dd6*/
      v70 = v90->base[9]; /*0x505ddc*/
      if ( v90->base[11] >= v70 ) /*0x505de4*/
      {
        if ( !BYTE1(v90->base[10]) && v70 ) /*0x505def*/
          continue; /*0x505def*/
        v71 = v90->base[12]; /*0x505df5*/
        if ( v71 <= 0 /*0x505e09*/
          || !(*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v69 + 8))(&v90->base[7], v70 + v71, 0) )
        {
          continue; /*0x505e0e*/
        }
      }
      v72 = v69[4]; /*0x505e14*/
      v73 = v103; /*0x505e17*/
      v69[4] = v72 + 1; /*0x505e21*/
      v74 = (unsigned int *)(v69[1] + 16 * v72); /*0x505e2a*/
      *v74 = v68; /*0x505e2c*/
      v74[1] = 0; /*0x505e2e*/
    }
    v74[2] = v73; /*0x505ea7*/
    v74[3] = 0; /*0x505eaa*/
  }
  *(_DWORD *)v88.__pad_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x505ec2*/
  if ( *(_DWORD *)&v88.m_1[3] && BYTE1(v88.m_C) ) /*0x505edb*/
  {
    __3_YAXPAX_Z(*(void **)&v88.m_1[3]); /*0x505ede*/
    *(_DWORD *)&v88.m_1[3] = 0; /*0x505ee6*/
  }
  BYTE1(v88.m_C) = 0; /*0x505eee*/
  v88.m_8 = 0; /*0x505ef5*/
  v85.ptr_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x505ef9*/
  if ( v85.Items && v85.IsAllocated ) /*0x505f05*/
  {
    __3_YAXPAX_Z(v85.Items); /*0x505f08*/
    v85.Items = 0; /*0x505f10*/
  }
  v85.IsAllocated = 0; /*0x505f18*/
  v85.Capacity = 0; /*0x505f1f*/
  v96 = (BoolVector)&VectorClass<bool>::`vftable'; /*0x505f23*/
  if ( v97 && BYTE1(v99) ) /*0x505f33*/
  {
    __3_YAXPAX_Z(v97); /*0x505f36*/
    v97 = 0; /*0x505f3e*/
  }
  result = (int)v93.Items; /*0x505f42*/
  v98 = 0; /*0x505f46*/
  v93.ptr_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x505f4c*/
  BYTE1(v99) = 0; /*0x505f53*/
  if ( v93.Items ) /*0x505f59*/
  {
    if ( v93.IsAllocated ) /*0x505f61*/
      __3_YAXPAX_Z(v93.Items); /*0x505f64*/
  }
  return result; /*0x505f50*/
}



// ==== 0x00505F80  globalHelper_005F80  this=-  sig=ida-proto ====
int __fastcall globalHelper_005F80(int a1, int *a2, int a3, int a4)
{
  int v4; // esi
  __int64 v5; // rax
  signed int v6; // ecx
  signed int v7; // eax

  v4 = *(__int16 *)a2 - *(__int16 *)(a1 + 22352); /*0x505f92*/
  v5 = *((__int16 *)a2 + 1) - *(__int16 *)(a1 + 22354); /*0x505f9a*/
  v6 = (HIDWORD(v5) ^ v5) - HIDWORD(v5); /*0x505fa2*/
  v7 = abs32(v4); /*0x505fa7*/
  if ( v7 <= v6 ) /*0x505fab*/
    v7 = v6; /*0x505fad*/
  return a3 + 1000 * v7; /*0x505fa1*/
}



// ==== 0x00505FD0  globalHelper_005FD0  this=HouseClass  sig=csp ====
int __userpurge globalHelper_005FD0@<eax>(int a1@<ecx>, int *a2@<edx>, double a3@<st0>, int a4, int a5)
{
  int v5; // esi
  int v6; // edx
  int v8; // edi
  int v9; // eax
  __int64 v10; // rax
  double v12; // [esp+0h] [ebp-24h]
  double v13; // [esp+8h] [ebp-1Ch]
  int v14; // [esp+1Ch] [ebp-8h]
  unsigned int v15; // [esp+2Ch] [ebp+8h]

  v5 = *((__int16 *)a2 + 1); /*0x505fd5*/
  v6 = *(__int16 *)a2; /*0x505ff7*/
  v8 = *(_DWORD *)(*(_DWORD *)(a1 + 90208) /*0x506002*/
                 + 4 * (v6 + *(_DWORD *)(a1 + 22364) * (v5 - *(_DWORD *)(a1 + 22360)) - *(_DWORD *)(a1 + 22356)));
  v9 = 0; /*0x506005*/
  if ( a5 != -1 ) /*0x50600a*/
  {
    v14 = v6 - *(__int16 *)(a1 + 22352); /*0x50601e*/
    __asm { fild [esp+1Ch+var_8] } /*0x506025*/
    v15 = *(__int16 *)(a1 + 22354) - v5; /*0x50602b*/
    __asm /*0x50602f*/
    {
      fstp [esp+1Ch+var_1C]; double
      fild [esp+1Ch+arg_4]
    }
    __asm { fstp [esp+24h+var_24]; double }
    Math::CalcAngle(v12, v13); /*0x50603c*/
    __asm { fsub ds:dbl_7E2820 } /*0x506041*/
    __asm { fmul ds:dbl_7E2818 }
    LOWORD(v15) = Math::RoundToInt(a3); /*0x506055*/
    v10 = 32 * a5 - (unsigned __int8)(((v15 >> 7) + 1) >> 1); /*0x506071*/
    v9 = (HIDWORD(v10) ^ v10) - HIDWORD(v10); /*0x506074*/
    if ( v9 >= 128 ) /*0x50607b*/
      v9 = 255 - v9; /*0x506084*/
  }
  return a4 + 1000 * (v9 + (v8 << 7)); /*0x50608e*/
}



// ==== 0x005060B0  HouseClass::ScanBuildLocation  this=HouseClass  sig=csp ====
unsigned int *__thiscall HouseClass::ScanBuildLocation(
        HouseClass *this,
        unsigned int *a2,
        int a3,
        int (__fastcall *a4)(int, int *, int, int),
        int a5)
{
  double v5; // st7
  BuildingTypeClass *BuildableFromArray; // eax
  int v9; // esi
  int *v10; // eax
  int v11; // eax
  BuildingTypeClass *v12; // eax
  int v13; // ecx
  _DWORD *v14; // esi
  void *v15; // eax
  Vector3 *v16; // eax
  int *v17; // eax
  bool v18; // zf
  unsigned int v19; // ebx
  int v20; // edi
  int v21; // eax
  int v22; // eax
  char v23; // cl
  int v24; // esi
  int v25; // esi
  int v26; // edi
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  void *v30; // eax
  int *v31; // edx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  size_t v35; // eax
  signed int i; // ebx
  _DWORD *v37; // esi
  int v38; // eax
  int v39; // eax
  int v40; // ebx
  int v41; // edi
  int v42; // edx
  signed int v43; // esi
  int FoundationWidth; // ebx
  int FoundationHeight; // eax
  char v46; // cl
  bool v47; // cl
  int v48; // edi
  __int16 v49; // ax
  __int16 v50; // cx
  int v51; // edx
  __int16 v52; // ax
  __int16 v53; // cx
  int v54; // ebx
  int TargetSpecialThreatCoefficient; // edx
  char *v56; // eax
  __int64 v57; // rax
  unsigned int *v58; // esi
  double v59; // [esp+Ch] [ebp-100h]
  double v60; // [esp+14h] [ebp-F8h]
  double v61; // [esp+14h] [ebp-F8h]
  void *v62; // [esp+18h] [ebp-F4h]
  void *v63; // [esp+18h] [ebp-F4h]
  int v64; // [esp+2Ch] [ebp-E0h] BYREF
  __int16 v65[2]; // [esp+30h] [ebp-DCh] BYREF
  __int16 v66[2]; // [esp+34h] [ebp-D8h] BYREF
  BuildingTypeClass *v67; // [esp+38h] [ebp-D4h] BYREF
  int v68; // [esp+3Ch] [ebp-D0h]
  __int16 *v69; // [esp+40h] [ebp-CCh]
  void *Base; // [esp+44h] [ebp-C8h] BYREF
  size_t NumOfElements; // [esp+48h] [ebp-C4h]
  signed int v72; // [esp+4Ch] [ebp-C0h]
  int v73; // [esp+50h] [ebp-BCh]
  int v74; // [esp+54h] [ebp-B8h]
  _VectorClass_VCell v75; // [esp+58h] [ebp-B4h] BYREF
  int v76; // [esp+6Ch] [ebp-A0h]
  _DWORD v77[6]; // [esp+70h] [ebp-9Ch] BYREF
  int v78; // [esp+88h] [ebp-84h]
  int v79; // [esp+8Ch] [ebp-80h]
  int v80; // [esp+90h] [ebp-7Ch]
  int v81; // [esp+94h] [ebp-78h]
  int v82; // [esp+98h] [ebp-74h]
  int v83; // [esp+9Ch] [ebp-70h]
  int v84; // [esp+A0h] [ebp-6Ch]
  int v85; // [esp+A4h] [ebp-68h]
  int v86; // [esp+A8h] [ebp-64h]
  int v87; // [esp+ACh] [ebp-60h]
  int v88[4]; // [esp+B0h] [ebp-5Ch] BYREF
  int v89; // [esp+C0h] [ebp-4Ch] BYREF
  int v90; // [esp+C4h] [ebp-48h]
  int v91; // [esp+C8h] [ebp-44h]
  int v92; // [esp+CCh] [ebp-40h]
  int v93; // [esp+D0h] [ebp-3Ch]
  __int16 v94[2]; // [esp+D4h] [ebp-38h] BYREF
  _DWORD v95[3]; // [esp+D8h] [ebp-34h] BYREF
  int v96; // [esp+E4h] [ebp-28h]
  int v97; // [esp+E8h] [ebp-24h]
  int v98; // [esp+ECh] [ebp-20h]
  unsigned int v99; // [esp+F0h] [ebp-1Ch]
  int v100[4]; // [esp+F4h] [ebp-18h] BYREF
  int v101; // [esp+104h] [ebp-8h] BYREF
  int v102; // [esp+108h] [ebp-4h] BYREF

  v67 = (BuildingTypeClass *)this; /*0x5060c8*/
  if ( !a3 ) /*0x5060cc*/
  {
    *a2 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x5060d7*/
    return a2; /*0x5060df*/
  }
  if ( *(_BYTE *)(a3 + 3278) ) /*0x5060e2*/
  {
    v65[0] = 0; /*0x5060fe*/
    v65[1] = 0; /*0x506104*/
    BuildableFromArray = (BuildingTypeClass *)HouseClass::FirstBuildableFromArray( /*0x506109*/
                                                this,
                                                *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2176);
    v9 = BuildingTypeClass::GetFoundationWidth(BuildableFromArray) + 2; /*0x506125*/
    v10 = HouseClass::FirstBuildableFromArray(this, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2176); /*0x506128*/
    v11 = BuildingTypeClass::GetFoundationHeight(v10, 0) + 2; /*0x50613b*/
    if ( LOWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[948] /*0x506155*/
      && HIWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[950] )
    {
      v64 = this->baseSpawnCell[0]; /*0x50615d*/
    }
    else
    {
      v64 = this->baseCenter[0]; /*0x506169*/
    }
    v12 = (BuildingTypeClass *)*LayerClass::Pathfinding_Find( /*0x506198*/
                                  &stru_87F5F0.__pad_58[416],
                                  (int)&v64,
                                  v77,
                                  (__int16 *)&v64,
                                  5,
                                  -1,
                                  0,
                                  0,
                                  v9,
                                  v11,
                                  0,
                                  0,
                                  0,
                                  1,
                                  v65,
                                  0,
                                  0);
    v67 = v12; /*0x5061a1*/
    if ( v12 != *(BuildingTypeClass **)&stru_A8EB00.?[948] ) /*0x5061a5*/
    {
      v13 = *(_DWORD *)this->repairStationsCount; /*0x5061b8*/
      if ( v13 ) /*0x5061bc*/
      {
        v14 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v13 + 72))(v13, &v89); /*0x5061cf*/
        v15 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v67); /*0x5061d7*/
        v16 = (Vector3 *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v15 + 72))(v15, v95); /*0x5061e8*/
        v17 = Vector3::Subtract(v16, v88, v14); /*0x5061f6*/
        if ( (int)Coord::Length((Coord *)v17) > *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3596) << 8 ) /*0x506213*/
        {
          *a2 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50621e*/
          return a2; /*0x506226*/
        }
        v12 = v67; /*0x506229*/
      }
    }
    *a2 = (unsigned int)v12; /*0x506230*/
    return a2; /*0x506232*/
  }
  else
  {
    VectorClass::CellConstructor((VectorClass *)&v75, 0, 0); /*0x506243*/
    v18 = LOWORD(this->damageDelayTimer[1]) == 0; /*0x506248*/
    *(_DWORD *)v75.__pad_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x506255*/
    v76 = 10; /*0x50625d*/
    *(_DWORD *)v75.__tail_10 = 0; /*0x506265*/
    v69 = (__int16 *)&this->damageDelayTimer[1]; /*0x506269*/
    if ( !v18 || HIWORD(this->damageDelayTimer[1]) ) /*0x50626f*/
    {
      v20 = 0; /*0x5062c4*/
      Base = 0; /*0x5062ca*/
      NumOfElements = 0; /*0x5062ce*/
      v72 = 0; /*0x5062d2*/
      LOBYTE(v73) = 0; /*0x5062d6*/
      v74 = 0; /*0x5062db*/
      *(_DWORD *)v75.__tail_10 = 0; /*0x5062df*/
      Buffer::Cleanup(&v75); /*0x5062e3*/
      v21 = this->base[18]; /*0x5062e8*/
      v68 = 0; /*0x5062ee*/
      if ( v21 > 0 ) /*0x5062f4*/
      {
        do /*0x50646a*/
        {
          v22 = *(_DWORD *)(this->base[15] + 4 * v20); /*0x506303*/
          v23 = *(_BYTE *)(a3 + 5831); /*0x506306*/
          v64 = v22; /*0x50630e*/
          if ( v23 ) /*0x506312*/
          {
            v25 = ((__int16)v22 << 8) + 128; /*0x50633e*/
            v26 = (SHIWORD(v64) << 8) + 128; /*0x506344*/
            *(_DWORD *)v65 = *HouseClass::GetCurrentOption(this, v77); /*0x506358*/
            if ( v65[0] == *(_WORD *)&stru_A8EB00.?[948] && v65[1] == *(_WORD *)&stru_A8EB00.?[950] ) /*0x50636a*/
            {
              v27 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x50636c*/
              v28 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x506371*/
              v29 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x506377*/
            }
            else
            {
              v30 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v65); /*0x506389*/
              v31 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v30 + 72))(v30, v95); /*0x50639d*/
              v27 = *v31; /*0x50639f*/
              v28 = v31[1]; /*0x5063a1*/
              v29 = v31[2]; /*0x5063a4*/
            }
            v90 = v28 - v26; /*0x5063ab*/
            v91 = v29; /*0x5063b2*/
            __asm /*0x5063b9*/
            {
              fild [esp+0F0h+var_48]
              fild [esp+0F0h+var_44]
            }
            v89 = v27 - v25; /*0x5063c7*/
            __asm /*0x5063d1*/
            {
              fild [esp+0F8h+var_4C]
              fld st
              fmul st, st(1)
              fld st(2)
              fmul st, st(3)
              faddp st(1), st
              fld st(3)
              fmul st, st(4)
              faddp st(1), st
              fstp [esp+0F8h+var_FC+4]; double
              fstp st
              fstp st
              fstp st
            }
            Math::Sqrt(v60); /*0x5063f1*/
            LOWORD(v32) = Math::RoundToInt(v5); /*0x5063f9*/
            v20 = v68; /*0x506405*/
            v24 = v68 + 1000 * v32; /*0x50640d*/
          }
          else
          {
            v24 = a4((int)this, &v64, v20, a5); /*0x506322*/
          }
          v33 = v72; /*0x506414*/
          if ( (int)(NumOfElements + 1) <= v72 ) /*0x50641b*/
            goto LABEL_33; /*0x50641b*/
          if ( !v72 ) /*0x50641f*/
            v33 = 10; /*0x506421*/
          if ( BuildLocationVector::Grow((int)&Base, v33) ) /*0x50642b*/
          {
LABEL_33:
            *((_DWORD *)Base + 2 * NumOfElements) = v24; /*0x50643c*/
            *((_DWORD *)Base + 2 * NumOfElements + 1) = v64; /*0x50644b*/
            LOBYTE(v73) = 0; /*0x506454*/
            ++NumOfElements; /*0x506459*/
          }
          v34 = this->base[18]; /*0x50645d*/
          v68 = ++v20; /*0x506466*/
        }
        while ( v20 < v34 ); /*0x50646a*/
      }
      v35 = NumOfElements; /*0x506472*/
      for ( i = 0; i < (int)NumOfElements; ++i ) /*0x50647a*/
      {
        if ( !(_BYTE)v73 ) /*0x50648a*/
        {
          qsort(Base, v35, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)globalHelper_0108F0); /*0x506499*/
          v74 = 0; /*0x5064a1*/
          LOBYTE(v73) = 1; /*0x5064a5*/
        }
        v37 = (char *)Base + 8 * i + 4; /*0x5064b2*/
        if ( *(int *)v75.__tail_10 < v75.m_8 /*0x5064df*/
          || (BYTE1(v75.m_C) || !v75.m_8)
          && v76 > 0
          && (*(unsigned __int8 (__thiscall **)(_VectorClass_VCell *, int, _DWORD))(*(_DWORD *)v75.__pad_0 + 8))(
               &v75,
               v76 + v75.m_8,
               0) )
        {
          v38 = (*(_DWORD *)v75.__tail_10)++; /*0x5064ee*/
          *(_DWORD *)(*(_DWORD *)&v75.m_1[3] + 4 * v38) = *v37; /*0x5064f7*/
        }
        v35 = NumOfElements; /*0x5064fa*/
      }
      v98 = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v69) + 283); /*0x506521*/
      v39 = *(_DWORD *)v75.__tail_10; /*0x506528*/
      v40 = 1 << v67->?; /*0x506534*/
      v41 = 0; /*0x506536*/
      v69 = 0; /*0x506538*/
      v77[0] = v40; /*0x50653c*/
      while ( 1 ) /*0x506542*/
      {
        v68 = 0; /*0x506542*/
        if ( v39 > 0 ) /*0x506546*/
          break; /*0x506546*/
LABEL_88:
        v69 = (__int16 *)((char *)v69 + 1); /*0x506a9b*/
        if ( (int)v69 >= 2 ) /*0x506aa7*/
        {
          v58 = a2; /*0x506aad*/
          v69 = 0; /*0x506ab4*/
          v62 = Base; /*0x506ac2*/
          *a2 = 0; /*0x506ac3*/
          __3_YAXPAX_Z(v62); /*0x506ac5*/
          Base = 0; /*0x506ad3*/
          NumOfElements = 0; /*0x506ad7*/
          v72 = 0; /*0x506adb*/
          LOBYTE(v73) = 0; /*0x506adf*/
          v74 = 0; /*0x506ae4*/
          *(_DWORD *)v75.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x506ae8*/
          if ( *(_DWORD *)&v75.m_1[3] && BYTE1(v75.m_C) ) /*0x506af8*/
            __3_YAXPAX_Z(*(void **)&v75.m_1[3]); /*0x506afb*/
          return v58; /*0x506afb*/
        }
      }
      while ( 1 ) /*0x506558*/
      {
        v42 = *(_DWORD *)(*(_DWORD *)&v75.m_1[3] + 4 * v68); /*0x506558*/
        v64 = 0; /*0x50655b*/
        v95[0] = v42; /*0x506560*/
        do /*0x5065cc*/
        {
          *(_DWORD *)v94 = *CellStruct::Add((CellStruct *)v95, &v102, (_WORD *)(4 * (v41 & 7) + 9041544)); /*0x50659c*/
          if ( (v40 & *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v94) + 55)) != 0 ) /*0x5065ae*/
            v64 = *CellStruct::Add((CellStruct *)&v64, &v101, (_WORD *)(4 * (v41 & 7) + 9041544)); /*0x5065c4*/
          ++v41; /*0x5065c8*/
        }
        while ( v41 < 8 ); /*0x5065cc*/
        if ( v64 ) /*0x5065db*/
          break; /*0x5065db*/
LABEL_86:
        v39 = *(_DWORD *)v75.__tail_10; /*0x506a84*/
        if ( ++v68 >= *(int *)v75.__tail_10 ) /*0x506a93*/
        {
          v41 = 0; /*0x506a99*/
          goto LABEL_88; /*0x506a99*/
        }
        v41 = 0; /*0x50654e*/
      }
      v89 = -(__int16)v64; /*0x5065ee*/
      __asm { fild [esp+0F8h+var_4C] } /*0x5065f8*/
      __asm { fstp [esp+0F8h+var_FC+4]; double }
      *(_DWORD *)v65 = SHIWORD(v64); /*0x506606*/
      __asm /*0x50660d*/
      {
        fild dword ptr [esp+100h+var_DC]
        fstp [esp+100h+var_104+4]; double
      }
      Math::CalcAngle(v59, v61); /*0x506614*/
      __asm { fsub ds:dbl_7E2820 } /*0x506619*/
      __asm { fmul ds:dbl_7E2818 }
      LOWORD(v99) = Math::RoundToInt(v5); /*0x506630*/
      v43 = (((v99 >> 12) + 1) >> 1) & 7; /*0x506649*/
      v88[0] = 0; /*0x50664c*/
      FoundationWidth = BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)a3); /*0x506661*/
      v97 = FoundationWidth; /*0x506667*/
      FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)a3, 0); /*0x50666e*/
      v46 = *(_BYTE *)(a3 + 5989); /*0x506673*/
      v96 = FoundationHeight; /*0x506679*/
      v47 = v46 || *(_BYTE *)(a3 + 5496); /*0x506692*/
      v48 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5216); /*0x50669c*/
      if ( v47 ) /*0x5066a2*/
        ++v48; /*0x5066a4*/
      if ( v43 < 1 || v43 > 3 ) /*0x5066ad*/
      {
        if ( v43 >= 5 ) /*0x5066bc*/
          LOWORD(v88[0]) = 1 - FoundationWidth - v48; /*0x5066cc*/
      }
      else
      {
        LOWORD(v88[0]) = v48; /*0x5066af*/
      }
      if ( v43 < 3 || v43 > 5 ) /*0x5066dc*/
      {
        if ( v43 >= 7 || v43 <= 1 ) /*0x5066f3*/
          HIWORD(v88[0]) = 1 - FoundationHeight - v48; /*0x5066fe*/
      }
      else
      {
        HIWORD(v88[0]) = v48 + 1; /*0x5066e1*/
      }
      *(_DWORD *)v65 = 0; /*0x506706*/
LABEL_72:
      if ( (stru_A8EB00.?[1056] & 1) == 0 ) /*0x506715*/
      {
        stru_A8EB00.?[1056] |= 1u; /*0x506725*/
        v83 = 0xFFFF; /*0x50672b*/
        *(_DWORD *)&stru_A8EB00.?[916] = 0xFFFF; /*0x506742*/
        v77[2] = -1; /*0x506748*/
        *(_DWORD *)&stru_A8EB00.?[920] = -1; /*0x506756*/
        v86 = -65536; /*0x50675c*/
        *(_DWORD *)&stru_A8EB00.?[924] = -65536; /*0x506778*/
        v93 = -65535; /*0x50677e*/
        v92 = 1; /*0x506795*/
        *(_DWORD *)&stru_A8EB00.?[928] = -65535; /*0x50679d*/
        v82 = 65537; /*0x5067b2*/
        *(_DWORD *)&stru_A8EB00.?[932] = 1; /*0x5067b7*/
        v84 = 0x10000; /*0x5067c6*/
        *(_DWORD *)&stru_A8EB00.?[936] = 65537; /*0x5067ce*/
        v77[5] = 0x1FFFF; /*0x5067e3*/
        *(_DWORD *)&stru_A8EB00.?[940] = 0x10000; /*0x5067f6*/
        *(_DWORD *)&stru_A8EB00.?[944] = 0x1FFFF; /*0x5067fc*/
        atexit(nullsub_17); /*0x506802*/
      }
      if ( (stru_A8EB00.?[1056] & 2) == 0 ) /*0x506818*/
      {
        v85 = 1; /*0x506822*/
        v88[3] = 0x10000; /*0x506839*/
        *(_DWORD *)&stru_A8EB00.?[964] = 1; /*0x506841*/
        stru_A8EB00.?[1056] |= 2u; /*0x506858*/
        v79 = 65537; /*0x50685e*/
        *(_DWORD *)&stru_A8EB00.?[972] = 0x10000; /*0x50686c*/
        *(_DWORD *)&stru_A8EB00.?[968] = 65537; /*0x506874*/
        v81 = 0x1FFFF; /*0x50687a*/
        *(_DWORD *)&stru_A8EB00.?[976] = 0x1FFFF; /*0x506888*/
        v87 = 0xFFFF; /*0x50688e*/
        *(_DWORD *)&stru_A8EB00.?[980] = 0xFFFF; /*0x5068a5*/
        v77[1] = -1; /*0x5068ab*/
        *(_DWORD *)&stru_A8EB00.?[984] = -1; /*0x5068b9*/
        v77[3] = -65536; /*0x5068bf*/
        v77[4] = -65535; /*0x5068cd*/
        *(_DWORD *)&stru_A8EB00.?[988] = -65536; /*0x5068e0*/
        *(_DWORD *)&stru_A8EB00.?[992] = -65535; /*0x5068e6*/
        atexit(nullsub_16); /*0x5068ec*/
      }
      v49 = LOWORD(v95[0]) + LOWORD(v88[0]) + *(_WORD *)&stru_A8EB00.?[4 * v43 + 916]; /*0x50691c*/
      v50 = HIWORD(v88[0]) + HIWORD(v95[0]) + *(_WORD *)&stru_A8EB00.?[4 * v43 + 918]; /*0x506927*/
      LOWORD(v78) = v49; /*0x50692a*/
      HIWORD(v78) = v50; /*0x50692f*/
      *(_DWORD *)v66 = v78; /*0x506938*/
      if ( *(_DWORD *)v65 == 1 ) /*0x506942*/
      {
        v51 = ((_BYTE)v43 - 4) & 7; /*0x506947*/
        LOWORD(v80) = LOWORD(g_DDrawSurfaceManager.scenario[v51 + 82]) + v49; /*0x506959*/
        HIWORD(v80) = v50 + HIWORD(g_DDrawSurfaceManager.scenario[v51 + 82]); /*0x50696b*/
        *(_DWORD *)v66 = v80; /*0x506974*/
        v48 -= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5216); /*0x50697e*/
      }
      v52 = v66[0]; /*0x506980*/
      v53 = v66[1]; /*0x506985*/
      v54 = 0; /*0x50698a*/
      while ( 1 ) /*0x50699b*/
      {
        v100[0] = v52 - v48; /*0x50699b*/
        v100[2] = v97 + 2 * v48; /*0x5069a7*/
        v100[1] = v53 - v48; /*0x5069b5*/
        TargetSpecialThreatCoefficient = v67->?; /*0x5069c3*/
        v100[3] = v96 + 2 * v48; /*0x5069c6*/
        if ( (unsigned __int8)MapClass::IsAreaFree( /*0x5069db*/
                                (MapClass *)&stru_87F5F0.__pad_58[416],
                                v100,
                                TargetSpecialThreatCoefficient) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int, __int16 *, BuildingTypeClass *))(*(_DWORD *)a3 + 168))( /*0x5069f3*/
                 a3,
                 v66,
                 v67) )
          {
            v56 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v66); /*0x506a07*/
            v57 = v98 - v56[283]; /*0x506a1c*/
            if ( (int)((HIDWORD(v57) ^ v57) - HIDWORD(v57)) < 3 ) /*0x506a24*/
            {
              if ( BuildingTypeClass::ProcessData(v67, (_DWORD *)a3, v66) ) /*0x506a33*/
                break; /*0x506a33*/
            }
          }
        }
        v52 = *(_WORD *)&stru_A8EB00.?[4 * v43 + 964] + v66[0]; /*0x506a4a*/
        v53 = *(_WORD *)&stru_A8EB00.?[4 * v43 + 966] + v66[1]; /*0x506a52*/
        ++v54; /*0x506a5a*/
        v66[0] = v52; /*0x506a5e*/
        v66[1] = v53; /*0x506a63*/
        if ( v54 >= 3 ) /*0x506a68*/
        {
          ++*(_DWORD *)v65; /*0x506a76*/
          if ( *(int *)v65 < 2 ) /*0x506a7a*/
            goto LABEL_72; /*0x506a7a*/
          v40 = v77[0]; /*0x506a80*/
          goto LABEL_86; /*0x506a80*/
        }
      }
      v58 = a2; /*0x506b0e*/
      v63 = Base; /*0x506b19*/
      *a2 = *(_DWORD *)v66; /*0x506b1a*/
      __3_YAXPAX_Z(v63); /*0x506b1c*/
      Base = 0; /*0x506b2c*/
      NumOfElements = 0; /*0x506b30*/
      v72 = 0; /*0x506b34*/
      LOBYTE(v73) = 0; /*0x506b38*/
      v74 = 0; /*0x506b3c*/
      *(_DWORD *)v75.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x506b40*/
      if ( *(_DWORD *)&v75.m_1[3] && BYTE1(v75.m_C) ) /*0x506b50*/
      {
        __3_YAXPAX_Z(*(void **)&v75.m_1[3]); /*0x506b53*/
        return a2; /*0x506b5b*/
      }
      return v58; /*0x506b03*/
    }
    else
    {
      if ( LOWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[948] /*0x506293*/
        && HIWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[950] )
      {
        v19 = this->baseSpawnCell[0]; /*0x506295*/
      }
      else
      {
        v19 = this->baseCenter[0]; /*0x50629d*/
      }
      *(_DWORD *)v75.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x5062aa*/
      *a2 = v19; /*0x5062b2*/
      Buffer::Cleanup(&v75); /*0x5062b4*/
      return a2; /*0x5062b9*/
    }
  }
}



// ==== 0x00506B70  nullsub_16  this=-  sig=ida-proto ====
void __cdecl nullsub_16()
{
  ; /*0x506b70*/
}



// ==== 0x00506B80  nullsub_17  this=-  sig=ida-proto ====
void __cdecl nullsub_17()
{
  ; /*0x506b80*/
}



// ==== 0x00506B90  HouseClass::FindBestProductionBuilding  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::FindBestProductionBuilding(HouseClass *this, _DWORD *a2, int a3)
{
  int IndexByName; // eax
  int v5; // ebx
  int v6; // ebp
  int v7; // ecx
  int v8; // edi
  int v9; // esi
  char v10; // al
  _DWORD *v11; // ebp
  bool v12; // [esp+13h] [ebp-15h]
  int v13; // [esp+14h] [ebp-14h]
  int v15; // [esp+30h] [ebp+8h]

  IndexByName = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)(a3 + 3720)); /*0x506ba5*/
  if ( IndexByName == -1 ) /*0x506bad*/
  {
    *a2 = 0; /*0x506bc6*/
    return a2; /*0x506bcc*/
  }
  v5 = 0; /*0x506bd5*/
  v6 = 0; /*0x506bd7*/
  v7 = *((_DWORD *)dword_A83C6C + IndexByName); /*0x506bd9*/
  v13 = v7; /*0x506be7*/
  v8 = *(_DWORD *)(v7 + 5344) + 10; /*0x506bf1*/
  v12 = *(_DWORD *)(a3 + 5884) == -1; /*0x506bf7*/
  if ( stru_A8EB00.ObjectTypeClass[20] <= 0 ) /*0x506bfe*/
    goto LABEL_17; /*0x506bfe*/
  while ( 1 ) /*0x506c0f*/
  {
    v9 = *(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * v5); /*0x506c0f*/
    if ( *(HouseClass **)(v9 + 540) == this /*0x506c2e*/
      && *(_DWORD *)(v9 + 1312) == v7
      && (unsigned __int8)BuildingClass::CanAcceptType((bool *)v9, a3, (int)this) )
    {
      v10 = *(_BYTE *)(v9 + 1794); /*0x506c3d*/
      if ( !v12 ) /*0x506c43*/
      {
        if ( v10 ) /*0x506c50*/
          goto LABEL_14; /*0x506c50*/
LABEL_13:
        v8 = v10; /*0x506c52*/
        v6 = v9; /*0x506c55*/
        goto LABEL_14; /*0x506c55*/
      }
      if ( v8 > v10 ) /*0x506c4a*/
        goto LABEL_13; /*0x506c4a*/
    }
LABEL_14:
    if ( ++v5 >= stru_A8EB00.ObjectTypeClass[20] ) /*0x506c5f*/
      break; /*0x506c5f*/
    v7 = v13; /*0x506c06*/
  }
  if ( v6 ) /*0x506c65*/
  {
    v11 = (_DWORD *)(v6 + 156); /*0x506c67*/
    LOWORD(v15) = *v11 / 256; /*0x506c8a*/
    HIWORD(v15) = v11[1] / 256; /*0x506c9d*/
    *a2 = v15; /*0x506caa*/
    return a2; /*0x506caf*/
  }
LABEL_17:
  *a2 = 0; /*0x506cb2*/
  return a2; /*0x506bb1*/
}



// ==== 0x00506D50  MapClass::CalcVisibleCellRange  this=AbstractClass  sig=csp ====
int __stdcall sub_506D50(int a1, int a2, int a3, int *a4)
{
  int v4; // kr04_4
  int v5; // esi
  int v6; // ebx
  int v7; // esi
  int v8; // edx
  int v9; // eax
  int v10; // esi
  int result; // eax
  int v12; // esi
  double v13; // st7
  int *v14; // esi
  int v15; // [esp+14h] [ebp-2Ch]
  int v16; // [esp+18h] [ebp-28h]
  int i; // [esp+1Ch] [ebp-24h]
  int v18; // [esp+20h] [ebp-20h]
  double v19; // [esp+28h] [ebp-18h]
  int v20; // [esp+38h] [ebp-8h]
  int v21; // [esp+3Ch] [ebp-4h]

  if ( a2 <= 0 ) /*0x506d61*/
    a2 = 1; /*0x506d63*/
  v4 = *(_DWORD *)(a1 + 156); /*0x506d8c*/
  v5 = (__int16)(v4 / 256); /*0x506d94*/
  if ( v5 - 6 <= *a4 ) /*0x506dad*/
  {
    v16 = *a4; /*0x506db7*/
    v6 = *a4; /*0x506dbb*/
  }
  else
  {
    v6 = v5 - 6; /*0x506daf*/
    v16 = v5 - 6; /*0x506db1*/
  }
  v7 = v5 + 6; /*0x506dc0*/
  v15 = a4[2] + *a4; /*0x506dc7*/
  if ( v15 >= v7 ) /*0x506dcb*/
    v15 = v7; /*0x506dcd*/
  v8 = (__int16)(*(_DWORD *)(a1 + 160) / 256); /*0x506dd1*/
  v9 = a4[1]; /*0x506dd4*/
  v21 = v8; /*0x506dd7*/
  v10 = v8 - 6; /*0x506de0*/
  if ( v8 - 6 <= v9 ) /*0x506de2*/
    v10 = a4[1]; /*0x506de4*/
  v18 = a4[3] + v9; /*0x506df0*/
  if ( v18 >= v8 + 6 ) /*0x506df4*/
    v18 = v8 + 6; /*0x506df6*/
  result = v18; /*0x506dfa*/
  for ( i = v10; v10 < v18; i = v10 ) /*0x506e04*/
  {
    if ( v6 < v15 ) /*0x506e0e*/
    {
      v12 = (v10 - v8) * (v10 - v8); /*0x506e16*/
      v20 = v12; /*0x506e19*/
      do /*0x506eba*/
      {
        v19 = Math::Sqrt((double)(v12 + (v6 - (__int16)(v4 / 256)) * (v6 - (__int16)(v4 / 256)))); /*0x506e3f*/
        if ( v19 < 6.0 ) /*0x506e51*/
        {
          v13 = v19; /*0x506e53*/
          if ( v19 < 1.0 ) /*0x506e75*/
            v13 = 1.0; /*0x506e79*/
          v14 = (int *)(a3 + 4 * (v6 - *a4 + (i - a4[1]) * a4[2])); /*0x506ea1*/
          *v14 = Math::RoundToInt((double)a2 / ((v13 - 1.0) * 0.1 + 1.0) + (double)*v14); /*0x506ead*/
          v12 = v20; /*0x506eaf*/
        }
        ++v6; /*0x506eb7*/
      }
      while ( v6 < v15 ); /*0x506eba*/
      v10 = i; /*0x506ec0*/
      v8 = v21; /*0x506ec4*/
      v6 = v16; /*0x506ec8*/
    }
    result = v18; /*0x506ecc*/
    ++v10; /*0x506ed0*/
  }
  return result; /*0x506edd*/
}



// ==== 0x00506EF0  HouseClass::AutoBuildScanAndSort  this=AbstractClass  sig=csp ====
char __userpurge HouseClass::AutoBuildScanAndSort@<al>(int this@<ecx>, double a2@<st0>, int a3, _DWORD *a4)
{
  DynamicVector *v5; // edi
  int v6; // ebx
  size_t v7; // esi
  _DWORD *v8; // ebx
  int v9; // eax
  _WORD *v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  __int16 v13; // ax
  int v14; // edi
  _DWORD *v15; // edi
  int v16; // eax
  char *v17; // esi
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // esi
  _WORD *v24; // eax
  __int16 v25; // cx
  __int16 v26; // ax
  int v27; // edx
  int v28; // kr00_4
  unsigned int v29; // edi
  int v30; // ebx
  int v31; // eax
  int v32; // edx
  void *v33; // ecx
  int v34; // edx
  int v35; // eax
  void **p_DynamicVector_field_0x10; // esi
  char *v37; // ecx
  bool v38; // cc
  int v39; // ecx
  int v40; // eax
  float v41; // edx
  int v42; // edi
  int v43; // ebx
  int Capacity; // ecx
  int v45; // esi
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  int *v51; // esi
  int v52; // ebx
  int v54; // eax
  float v55; // esi
  void *v56; // eax
  bool v57; // zf
  int *v58; // esi
  int v59; // ebx
  void *v60; // eax
  int v62; // eax
  int v63; // ecx
  _DWORD *v64; // eax
  int v65; // edi
  int v66; // ecx
  unsigned int v67; // edi
  unsigned int v68; // eax
  char *v69; // ecx
  int v70; // edx
  _DWORD *v71; // ebx
  int v72; // eax
  int v73; // esi
  int v74; // edx
  char *v75; // edi
  int v76; // ebx
  int v77; // eax
  size_t v78; // eax
  signed int i; // edi
  _DWORD *v80; // esi
  int v81; // eax
  _DWORD *v82; // esi
  int v83; // edx
  int v84; // eax
  int v85; // ecx
  int v86; // ecx
  unsigned int *v87; // eax
  float v88; // edx
  int v89; // ecx
  _DWORD *v90; // eax
  _DWORD *BuildableFromArray; // eax
  int v92; // ecx
  _DWORD *v93; // edx
  int v94; // eax
  int v95; // eax
  int v96; // edx
  int v97; // ecx
  int v98; // eax
  _DWORD *v99; // esi
  _DWORD *v100; // eax
  int v101; // eax
  double v102; // [esp+Ch] [ebp-174h]
  double v103; // [esp+Ch] [ebp-174h]
  double v104; // [esp+14h] [ebp-16Ch]
  double v105; // [esp+14h] [ebp-16Ch]
  int v106; // [esp+2Ch] [ebp-154h] BYREF
  float v107; // [esp+30h] [ebp-150h]
  int v108; // [esp+34h] [ebp-14Ch]
  float v109; // [esp+38h] [ebp-148h]
  int v110; // [esp+3Ch] [ebp-144h] BYREF
  int v111; // [esp+40h] [ebp-140h]
  float v112; // [esp+44h] [ebp-13Ch]
  void *Base; // [esp+48h] [ebp-138h] BYREF
  size_t NumOfElements; // [esp+4Ch] [ebp-134h]
  signed int v115; // [esp+50h] [ebp-130h]
  int v116; // [esp+54h] [ebp-12Ch]
  int v117; // [esp+58h] [ebp-128h]
  void *v118; // [esp+5Ch] [ebp-124h]
  VectorClass v119; // [esp+60h] [ebp-120h] BYREF
  int v120; // [esp+70h] [ebp-110h]
  int v121; // [esp+74h] [ebp-10Ch]
  void *Block; // [esp+78h] [ebp-108h]
  void *v123; // [esp+7Ch] [ebp-104h]
  int v124; // [esp+80h] [ebp-100h]
  unsigned int v125[2]; // [esp+84h] [ebp-FCh] BYREF
  VectorClass v126; // [esp+8Ch] [ebp-F4h] BYREF
  int v127; // [esp+9Ch] [ebp-E4h]
  int v128; // [esp+A0h] [ebp-E0h]
  DistributionVector_BuildingType v129; // [esp+A4h] [ebp-DCh] BYREF
  void *v130; // [esp+A8h] [ebp-D8h]
  int v131; // [esp+ACh] [ebp-D4h]
  int v132; // [esp+B0h] [ebp-D0h]
  int v133; // [esp+B4h] [ebp-CCh]
  int v134; // [esp+B8h] [ebp-C8h]
  int v135; // [esp+BCh] [ebp-C4h]
  _DWORD v136[2]; // [esp+C0h] [ebp-C0h] BYREF
  int v137; // [esp+C8h] [ebp-B8h] BYREF
  void *v138; // [esp+CCh] [ebp-B4h]
  int v139; // [esp+D0h] [ebp-B0h]
  int v140; // [esp+D4h] [ebp-ACh]
  int v141; // [esp+D8h] [ebp-A8h]
  int v142; // [esp+E0h] [ebp-A0h] BYREF
  void *v143; // [esp+E4h] [ebp-9Ch]
  int v144; // [esp+E8h] [ebp-98h]
  int v145; // [esp+ECh] [ebp-94h]
  int v146; // [esp+F0h] [ebp-90h]
  int v147; // [esp+F8h] [ebp-88h] BYREF
  void *v148; // [esp+FCh] [ebp-84h]
  int v149; // [esp+100h] [ebp-80h]
  int v150; // [esp+104h] [ebp-7Ch]
  int v151; // [esp+108h] [ebp-78h]
  _DWORD v152[4]; // [esp+110h] [ebp-70h]
  DynamicVector v153; // [esp+120h] [ebp-60h] BYREF

  _EBP = this; /*0x506efc*/
  v124 = -1; /*0x506efe*/
  v106 = 999999; /*0x506f06*/
  v129 = 0; /*0x506f0e*/
  v130 = 0; /*0x506f15*/
  v131 = 0; /*0x506f1c*/
  v132 = 0; /*0x506f23*/
  memset(&v119, 0, sizeof(v119)); /*0x506f2a*/
  Base = 0; /*0x506f3a*/
  NumOfElements = 0; /*0x506f3e*/
  v115 = 0; /*0x506f42*/
  v116 = 0; /*0x506f46*/
  v5 = &v153; /*0x506f4a*/
  v6 = 4; /*0x506f51*/
  do /*0x506f63*/
  {
    DynamicVector::Constructor_Cell(v5, 0, 0); /*0x506f5a*/
    v5 = (DynamicVector *)((char *)v5 + 24); /*0x506f5f*/
    --v6; /*0x506f62*/
  }
  while ( v6 ); /*0x506f63*/
  v7 = 4 * *(_DWORD *)(_EBP + 22364) * *(_DWORD *)(_EBP + 22368); /*0x506f72*/
  Block = (void *)__2_YAPAXI_Z(v7); /*0x506f82*/
  v123 = (void *)__2_YAPAXI_Z(v7); /*0x506f8e*/
  v118 = (void *)__2_YAPAXI_Z(v7); /*0x506f99*/
  memset(Block, 0, v7); /*0x506fa4*/
  v8 = a4; /*0x506fb6*/
  memset(v123, 0, v7); /*0x506fc0*/
  memset(v118, 0, v7); /*0x506fd4*/
  if ( v8 ) /*0x506fdf*/
  {
    v9 = v8[4]; /*0x506fe5*/
    v107 = 0.0; /*0x506fe8*/
    if ( v9 > 0 ) /*0x506ff2*/
    {
      do /*0x5070cf*/
      {
        v10 = (_WORD *)(4 * LODWORD(v107) + v8[1]); /*0x50700c*/
        v11 = (__int16)(*v10 - *(_WORD *)(_EBP + 22352)); /*0x507023*/
        v12 = (__int16)(v10[1] - *(_WORD *)(_EBP + 22354)); /*0x507026*/
        v125[0] = v11; /*0x507029*/
        __asm { fild [esp+174h+var_FC] } /*0x50702d*/
        v111 = -v12; /*0x507033*/
        __asm /*0x507037*/
        {
          fstp [esp+174h+var_16C]; double
          fild [esp+174h+var_140]
          fstp [esp+174h+var_174]; double
        }
        Math::CalcAngle(v102, v104); /*0x507042*/
        __asm { fsub ds:dbl_7E2820 } /*0x507047*/
        __asm { fmul ds:dbl_7E2818 }
        v13 = Math::RoundToInt(a2); /*0x507056*/
        v14 = v8[1]; /*0x50705b*/
        LOWORD(v112) = v13; /*0x50705e*/
        v15 = (_DWORD *)(4 * LODWORD(v107) + v14); /*0x507067*/
        v16 = *(_DWORD *)&v153.__pad_5[24 * (((unsigned int)((LODWORD(v112) >> 13) + 1) >> 1) & 3) + 3]; /*0x507075*/
        v17 = &v153.__pad_0[24 * (((unsigned int)((LODWORD(v112) >> 13) + 1) >> 1) & 3)]; /*0x507083*/
        if ( *(_DWORD *)&v153.__pad_C[24 * (((unsigned int)((LODWORD(v112) >> 13) + 1) >> 1) & 3) + 4] < v16 /*0x5070a9*/
          || (v17[13] || !v16)
          && (v18 = *((_DWORD *)v17 + 5), v18 > 0)
          && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v17 + 8))(
               &v153.__pad_0[24 * (((unsigned int)((LODWORD(v112) >> 13) + 1) >> 1) & 3)],
               v16 + v18,
               0) )
        {
          v19 = *((_DWORD *)v17 + 4); /*0x5070b0*/
          v20 = *((_DWORD *)v17 + 1); /*0x5070b3*/
          *((_DWORD *)v17 + 4) = v19 + 1; /*0x5070b9*/
          *(_DWORD *)(v20 + 4 * v19) = *v15; /*0x5070be*/
        }
        v21 = v8[4]; /*0x5070c5*/
        ++LODWORD(v107); /*0x5070cb*/
      }
      while ( SLODWORD(v107) < v21 ); /*0x5070cf*/
    }
  }
  v22 = 0; /*0x5070d8*/
  v136[0] = *(_DWORD *)(_EBP + 120); /*0x5070dc*/
  v107 = 0.0; /*0x5070e3*/
  if ( v136[0] > 0 ) /*0x5070e7*/
  {
    do /*0x507229*/
    {
      v23 = *(_DWORD *)(*(_DWORD *)(_EBP + 108) + 4 * v22); /*0x5070f5*/
      v24 = (_WORD *)(*(int (__thiscall **)(int, unsigned int *))(*(_DWORD *)v23 + 440))(v23, v125); /*0x5070fc*/
      v25 = *v24 - *(_WORD *)(_EBP + 22352); /*0x507109*/
      v26 = v24[1] - *(_WORD *)(_EBP + 22354); /*0x507110*/
      if ( v25 || v26 ) /*0x50711f*/
      {
        v152[0] = v25; /*0x50712b*/
        __asm { fild [esp+16Ch+var_70] } /*0x507135*/
        v111 = -v26; /*0x50713e*/
        __asm /*0x507142*/
        {
          fstp [esp+16Ch+var_16C]; double
          fild [esp+16Ch+var_140]
        }
        __asm { fstp [esp+174h+var_174]; double }
        Math::CalcAngle(v103, v105); /*0x50714f*/
        __asm { fsub ds:dbl_7E2820 } /*0x507154*/
        __asm { fmul ds:dbl_7E2818 }
        v28 = Math::RoundToInt(a2); /*0x507163*/
        LOWORD(v27) = HIWORD(v28); /*0x507163*/
        LOWORD(v112) = v28; /*0x507168*/
        v29 = ((unsigned int)((LODWORD(v112) >> 13) + 1) >> 1) & 3; /*0x50717b*/
        v30 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v23 + 724))(v23, v27); /*0x507188*/
        v109 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v23 + 728))(v23)); /*0x507190*/
        *(float *)&v110 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v23 + 732))(v23)); /*0x5071a2*/
        if ( v30 + LODWORD(v109) + v110 > 0 ) /*0x5071ac*/
        {
          v31 = LODWORD(v109) + *((_DWORD *)&v119.ptr_0 + v29); /*0x5071bf*/
          v32 = (int)*(&Base + v29); /*0x5071c1*/
          *((_DWORD *)&v129 + v29) += v30; /*0x5071c5*/
          *((_DWORD *)&v119.ptr_0 + v29) = v31; /*0x5071cc*/
          v33 = Block; /*0x5071d8*/
          *(&Base + v29) = (void *)(v110 + v32); /*0x5071de*/
          MapClass::CalcVisibleCellRange(v23, v30, (int)v33, (int *)(_EBP + 22356)); /*0x5071ec*/
          MapClass::CalcVisibleCellRange(v23, SLODWORD(v109), (int)v123, (int *)(_EBP + 22356)); /*0x5071ff*/
          MapClass::CalcVisibleCellRange(v23, v110, (int)v118, (int *)(_EBP + 22356)); /*0x507212*/
        }
      }
      v22 = ++LODWORD(v107); /*0x507222*/
    }
    while ( SLODWORD(v107) < v136[0] ); /*0x507229*/
    v8 = a4; /*0x50722f*/
  }
  v34 = v124; /*0x507236*/
  v35 = 0; /*0x50723a*/
  p_DynamicVector_field_0x10 = &v153.DynamicVector_field_0x10; /*0x50723c*/
  do /*0x50727b*/
  {
    v37 = (char *)*(&Base + v35) + *((_DWORD *)&v119.ptr_0 + v35) + *((_DWORD *)&v129 + v35); /*0x507254*/
    v38 = (int)v37 < v106; /*0x50725a*/
    v152[v35] = v37; /*0x50725c*/
    if ( v38 && (!v8 || (int)*p_DynamicVector_field_0x10 > 0) ) /*0x50726c*/
    {
      v106 = (int)v37; /*0x50726e*/
      v34 = v35; /*0x507272*/
    }
    ++v35; /*0x507274*/
    p_DynamicVector_field_0x10 += 6; /*0x507275*/
  }
  while ( v35 < 4 ); /*0x50727b*/
  v39 = *((int *)&v119.ptr_0 + v34); /*0x50727d*/
  v40 = *((_DWORD *)&v129 + v34); /*0x507281*/
  v124 = v34; /*0x507288*/
  v41 = *((float *)&Base + v34); /*0x50728c*/
  v110 = v39; /*0x507290*/
  v136[0] = v40; /*0x507296*/
  v107 = v41; /*0x50729d*/
  HouseClass::ComputePowerDistribution((float *)_EBP); /*0x5072a1*/
  VectorClass::BuildingTypeConstructor(&v126, 0, 0); /*0x5072ae*/
  v42 = *(_DWORD *)(_EBP + 120); /*0x5072b3*/
  v43 = 0; /*0x5072b6*/
  v126.ptr_0 = &DynamicVectorClass<BuildingTypeClass const *>::`vftable'; /*0x5072ba*/
  v128 = 10; /*0x5072c2*/
  v127 = 0; /*0x5072cd*/
  if ( v42 > 0 ) /*0x5072d8*/
  {
    Capacity = v126.Capacity; /*0x5072de*/
    do /*0x5072e5*/
    {
      v45 = *(_DWORD *)(*(_DWORD *)(_EBP + 108) + 4 * v43); /*0x5072e5*/
      v46 = *(_DWORD *)(v45 + 1312); /*0x5072e8*/
      if ( !*(_BYTE *)(v46 + 5894) && v46 != *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2172) ) /*0x507304*/
      {
        if ( v127 < Capacity ) /*0x50730d*/
          goto LABEL_34; /*0x50730d*/
        if ( !v126.IsAllocated && Capacity || v128 <= 0 ) /*0x507324*/
          goto LABEL_36; /*0x507324*/
        if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v126.ptr_0 + 2))( /*0x507333*/
               &v126,
               v128 + Capacity,
               0) )
        {
LABEL_34:
          v47 = v127++; /*0x507345*/
          *((_DWORD *)v126.Items + v47) = *(_DWORD *)(v45 + 1312); /*0x507355*/
        }
        Capacity = v126.Capacity; /*0x507358*/
      }
LABEL_36:
      ++v43; /*0x50735c*/
    }
    while ( v43 < v42 ); /*0x5072e5*/
  }
  v48 = *(_DWORD *)(_EBP + 22280); /*0x507361*/
  v111 = 16 * a3; /*0x507371*/
  v112 = 0.0; /*0x507375*/
  v125[0] = *(_DWORD *)(v48 + 16 * a3); /*0x507386*/
  if ( v106 ) /*0x50738a*/
  {
    __asm /*0x50738c*/
    {
      fild [esp+164h+var_154]
      fstp [esp+164h+var_148]
      fild [esp+164h+var_C0]
      fdiv [esp+164h+var_148]
      fild [esp+164h+var_144]
      fdiv [esp+164h+var_148]
      fild [esp+164h+var_150]
      fdiv [esp+164h+var_148]
    }
  }
  else
  {
    __asm /*0x5073b1*/
    {
      fld ds:flt_7E1748
      fld ds:flt_7E1748
      fld ds:flt_7E1748
    }
  }
  __asm /*0x5073c3*/
  {
    fld dword ptr [ebp+160A0h]
    fsub st, st(3)
  }
  __asm
  {
    fstp [esp+16Ch+var_144]
    fld dword ptr [ebp+1609Ch]
    fsub st, st(2)
    fstp [esp+16Ch+var_148]
    fld dword ptr [ebp+160A4h]
    fsub st, st(1)
    fstp [esp+16Ch+var_150]
    fstp st
    fstp st
    fstp st
  }
  CollectSuperWeaponBuildingTypes((ObjectClass *)_EBP, (int)&v142, (int)&v126); /*0x5073fc*/
  HouseClass::CollectInfantryBuildCandidates((HouseClass *)_EBP, (int)&v147, (int)&v126); /*0x507410*/
  HouseClass::CollectAircraftBuildCandidates((HouseClass *)_EBP, (int)&v137, (int)&v126); /*0x507424*/
  __asm /*0x507429*/
  {
    fld [esp+164h+var_144]
    fcomp [esp+164h+var_148]
    fnstsw ax
  }
  if ( (_AX & 0x4100) != 0 ) /*0x507436*/
    goto LABEL_43; /*0x507436*/
  __asm /*0x507438*/
  {
    fld [esp+164h+var_144]
    fcomp [esp+164h+var_150]
    fnstsw ax
  }
  if ( (_AX & 0x4100) != 0 ) /*0x507445*/
  {
LABEL_43:
    __asm /*0x50745c*/
    {
      fld [esp+164h+var_148]
      fcomp [esp+164h+var_150]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x507469*/
    {
      v51 = &v137; /*0x507487*/
      *(_DWORD *)(_EBP + 90208) = v118; /*0x50748e*/
      v52 = 2; /*0x507494*/
    }
    else
    {
      v51 = &v147; /*0x50746f*/
      *(_DWORD *)(_EBP + 90208) = v123; /*0x507476*/
      v52 = 1; /*0x50747c*/
    }
  }
  else
  {
    v51 = &v142; /*0x50744b*/
    *(_DWORD *)(_EBP + 90208) = Block; /*0x507452*/
    v52 = 0; /*0x507458*/
  }
  v54 = v51[4]; /*0x507499*/
  HIBYTE(v108) = 1; /*0x5074a0*/
  if ( !v54 ) /*0x5074a5*/
  {
    if ( v151 <= 0 ) /*0x5074ae*/
    {
      if ( v141 <= 0 ) /*0x5074e1*/
      {
        if ( v146 <= 0 ) /*0x507502*/
        {
          HIBYTE(v108) = 0; /*0x507519*/
          goto LABEL_56; /*0x507519*/
        }
        v51 = &v142; /*0x507508*/
        v52 = 0; /*0x50750f*/
        *(_DWORD *)(_EBP + 90208) = Block; /*0x507511*/
      }
      else
      {
        v51 = &v137; /*0x5074e7*/
        v52 = 2; /*0x5074ee*/
        *(_DWORD *)(_EBP + 90208) = v118; /*0x5074f3*/
      }
    }
    else
    {
      v51 = &v147; /*0x5074b4*/
      v52 = 1; /*0x5074bb*/
      *(_DWORD *)(_EBP + 90208) = v123; /*0x5074c0*/
    }
  }
  if ( v51[4] == 1 ) /*0x5074ca*/
  {
    v55 = *(float *)v51[1]; /*0x5074d3*/
  }
  else
  {
    DistributionVector_BuildingType::Construct(&v129, 0, 0); /*0x507684*/
    v129 = (DistributionVector_BuildingType)&DynamicVectorClass<DiscreteDistributionClass<BuildingTypeClass>::DistributionObject<BuildingTypeClass *>>::`vftable'; /*0x507690*/
    v134 = 10; /*0x50769b*/
    v133 = 0; /*0x5076a6*/
    v135 = 0; /*0x5076ad*/
    VectorClass__N_18::Destroy((int)&v129); /*0x5076b4*/
    v62 = v51[4]; /*0x5076ba*/
    v107 = 0.0; /*0x5076bd*/
    if ( v62 > 0 ) /*0x5076c3*/
    {
      do /*0x50772f*/
      {
        v63 = v51[1]; /*0x5076c5*/
        v64 = *(_DWORD **)(v63 + 4 * LODWORD(v107)); /*0x5076cf*/
        if ( v52 == 2 ) /*0x5076d2*/
        {
          v65 = v64[1355]; /*0x5076d4*/
        }
        else if ( v52 == 1 ) /*0x5076df*/
        {
          v65 = v64[1354]; /*0x5076e1*/
        }
        else
        {
          v65 = v64[1353]; /*0x5076e9*/
        }
        v136[0] = *(_DWORD *)(v63 + 4 * LODWORD(v107)); /*0x5076ef*/
        v136[1] = v65; /*0x507705*/
        HouseClass::AddCoordTrackingEntry((HouseClass *)&v129, v136); /*0x50770c*/
        v66 = v51[4]; /*0x507718*/
        v135 += v65; /*0x50771d*/
        ++LODWORD(v107); /*0x50772b*/
      }
      while ( SLODWORD(v107) < v66 ); /*0x50772f*/
    }
    v67 = 0; /*0x507738*/
    if ( v135 && v133 ) /*0x507748*/
    {
      v68 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, v135); /*0x507759*/
      v69 = (char *)v130; /*0x507765*/
      v70 = 0; /*0x50776c*/
      if ( v133 <= 0 ) /*0x507770*/
      {
LABEL_87:
        v55 = 0.0; /*0x507783*/
      }
      else
      {
        v71 = (char *)v130 + 4; /*0x507772*/
        while ( 1 ) /*0x507775*/
        {
          v67 += *v71; /*0x507775*/
          if ( v67 >= v68 ) /*0x507779*/
            break; /*0x507779*/
          ++v70; /*0x50777b*/
          v71 += 2; /*0x50777c*/
          if ( v70 >= v133 ) /*0x507781*/
            goto LABEL_87; /*0x507781*/
        }
        v55 = *((float *)v130 + 2 * v70); /*0x507787*/
      }
    }
    else
    {
      v69 = (char *)v130; /*0x50778c*/
      v55 = 0.0; /*0x507793*/
    }
    v129 = (DistributionVector_BuildingType)&VectorClass<DiscreteDistributionClass<BuildingTypeClass>::DistributionObject<BuildingTypeClass *>>::`vftable'; /*0x507797*/
    if ( v69 && BYTE1(v132) ) /*0x5077ad*/
    {
      HouseClass::updatePowerState(v69, 3); /*0x5077b5*/
      v130 = 0; /*0x5077ba*/
    }
    BYTE1(v132) = 0; /*0x5077c5*/
    v131 = 0; /*0x5077cd*/
  }
  if ( (v125[0] & 0x80000000) != 0 ) /*0x5077e0*/
  {
    *(float *)&v72 = v55; /*0x5077f5*/
    v109 = v55; /*0x5077f7*/
  }
  else
  {
    v112 = v55; /*0x5077e8*/
    v72 = *((int *)dword_A83C6C + v125[0]); /*0x5077ec*/
    v109 = *(float *)&v72; /*0x5077ef*/
  }
  v106 = 0; /*0x507802*/
  if ( a4 ) /*0x50780e*/
  {
    Base = 0; /*0x50781a*/
    NumOfElements = 0; /*0x50781e*/
    v115 = 0; /*0x507822*/
    LOBYTE(v116) = 0; /*0x507826*/
    v117 = 0; /*0x50782b*/
    VectorClass::CellConstructor(&v119, 0, 0); /*0x50782f*/
    v119.ptr_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x507838*/
    v121 = 10; /*0x507842*/
    v120 = 0; /*0x50784a*/
    if ( v119.Items && v119.IsAllocated ) /*0x507856*/
    {
      __3_YAXPAX_Z(v119.Items); /*0x507859*/
      v119.Items = 0; /*0x507861*/
    }
    v73 = 0; /*0x507869*/
    v119.IsAllocated = 0; /*0x50786b*/
    v119.Capacity = 0; /*0x507870*/
    v74 = *(_DWORD *)&v153.__pad_C[24 * v124 + 4]; /*0x50787a*/
    v125[0] = (unsigned int)&v153.__pad_C[24 * v124 + 4]; /*0x50788a*/
    if ( v74 > 0 ) /*0x50788e*/
    {
      v75 = &v153.DynamicVector_field_0x1[24 * v124 + 3]; /*0x507890*/
      do /*0x507904*/
      {
        v110 = *(int *)(*(_DWORD *)v75 + 4 * v73); /*0x5078a3*/
        v76 = globalHelper_005FD0(_EBP, &v110, a2, v73, -1); /*0x5078b2*/
        v77 = v115; /*0x5078b4*/
        if ( (int)(NumOfElements + 1) <= v115 ) /*0x5078bb*/
          goto LABEL_107; /*0x5078bb*/
        if ( !v115 ) /*0x5078bf*/
          v77 = 10; /*0x5078c1*/
        if ( BuildLocationVector::Grow((int)&Base, v77) ) /*0x5078cb*/
        {
LABEL_107:
          *((_DWORD *)Base + 2 * NumOfElements) = v76; /*0x5078dc*/
          *((float *)Base + 2 * NumOfElements + 1) = *(float *)&v110; /*0x5078eb*/
          LOBYTE(v116) = 0; /*0x5078f4*/
          ++NumOfElements; /*0x5078f9*/
        }
        ++v73; /*0x507901*/
      }
      while ( v73 < *(_DWORD *)v125[0] ); /*0x507904*/
    }
    v78 = NumOfElements; /*0x507906*/
    for ( i = 0; i < (int)NumOfElements; ++i ) /*0x507910*/
    {
      if ( !(_BYTE)v116 ) /*0x507918*/
      {
        qsort(Base, v78, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)globalHelper_0108F0); /*0x507927*/
        v117 = 0; /*0x50792f*/
        LOBYTE(v116) = 1; /*0x507933*/
      }
      v80 = (char *)Base + 8 * i + 4; /*0x507940*/
      if ( v120 < v119.Capacity /*0x50796c*/
        || (v119.IsAllocated || !v119.Capacity)
        && v121 > 0
        && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v119.ptr_0 + 2))(
             &v119,
             v121 + v119.Capacity,
             0) )
      {
        v81 = v120++; /*0x50797b*/
        *((_DWORD *)v119.Items + v81) = *v80; /*0x507984*/
      }
      v78 = NumOfElements; /*0x507987*/
    }
    v82 = a4; /*0x507994*/
    v83 = *a4; /*0x50799d*/
    v106 = *(_DWORD *)v119.Items; /*0x5079a3*/
    v84 = (*(int (__thiscall **)(_DWORD *, int *))(v83 + 16))(a4, &v106); /*0x5079aa*/
    v85 = v82[4]; /*0x5079ad*/
    if ( v84 < v85 ) /*0x5079b2*/
    {
      v86 = v85 - 1; /*0x5079b4*/
      for ( v82[4] = v86; v84 < v82[4]; *(_DWORD *)(v82[1] + 4 * v84 - 4) = *(_DWORD *)(v82[1] + 4 * v84) ) /*0x5079ba*/
        ++v84; /*0x5079bf*/
    }
    v119.ptr_0 = &VectorClass<Cell>::`vftable'; /*0x5079d2*/
    if ( v119.Items && v119.IsAllocated ) /*0x5079e4*/
    {
      __3_YAXPAX_Z(v119.Items); /*0x5079e7*/
      v119.Items = 0; /*0x5079ef*/
    }
    v119.IsAllocated = 0; /*0x5079f7*/
    v119.Capacity = 0; /*0x5079fd*/
    __3_YAXPAX_Z(Base); /*0x507a01*/
  }
  else
  {
    v87 = HouseClass::ScanBuildLocation( /*0x507a20*/
            (HouseClass *)_EBP,
            v125,
            v72,
            (int (__fastcall *)(int, int *, int, int))globalHelper_005FD0,
            2 * v124);
    v82 = a4; /*0x507a27*/
    v106 = *v87; /*0x507a2e*/
  }
  if ( v106 ) /*0x507a39*/
  {
    v88 = v112; /*0x507a4c*/
    if ( v112 == 0.0 ) /*0x507a52*/
    {
      v101 = v111; /*0x507b60*/
      *(_DWORD *)(*(_DWORD *)(_EBP + 22280) + v111) = *(_DWORD *)(LODWORD(v109) + 3576); /*0x507b6a*/
      *(_DWORD *)(*(_DWORD *)(_EBP + 22280) + v101 + 4) = v106; /*0x507b77*/
    }
    else
    {
      v89 = v111; /*0x507a5e*/
      *(_DWORD *)(*(_DWORD *)(_EBP + 22280) + v111 + 4) = v106; /*0x507a66*/
      v90 = (_DWORD *)(*(_DWORD *)(_EBP + 22280) + 16 * (a3 + 1)); /*0x507a7b*/
      if ( *v90 == -1 ) /*0x507a80*/
      {
        *v90 = *(_DWORD *)(LODWORD(v88) + 3576); /*0x507a8e*/
        *(_DWORD *)(*(_DWORD *)(_EBP + 22280) + v89 + 20) = v106; /*0x507a9a*/
        if ( v82 ) /*0x507a9e*/
        {
          BuildableFromArray = HouseClass::FirstBuildableFromArray( /*0x507ab1*/
                                 (HouseClass *)_EBP,
                                 *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2640);
          v92 = *(_DWORD *)(_EBP + 22292) - 1; /*0x507abc*/
          if ( v92 >= 0 ) /*0x507abd*/
          {
            v93 = (_DWORD *)(*(_DWORD *)(_EBP + 22280) + 16 * v92); /*0x507ad3*/
            while ( v93[1] != v106 || *v93 != BuildableFromArray[894] ) /*0x507aee*/
            {
              --v92; /*0x507af2*/
              v93 -= 4; /*0x507af3*/
              if ( v92 < 0 ) /*0x507af8*/
                goto LABEL_56; /*0x507af8*/
            }
            v94 = *(_DWORD *)(_EBP + 22292); /*0x507aff*/
            if ( v92 < v94 ) /*0x507b07*/
            {
              v95 = v94 - 1; /*0x507b0d*/
              v96 = v92; /*0x507b0e*/
              *(_DWORD *)(_EBP + 22292) = v95; /*0x507b12*/
              if ( v92 < v95 ) /*0x507b18*/
              {
                v97 = 16 * v92; /*0x507b1e*/
                do /*0x507b4f*/
                {
                  v98 = *(_DWORD *)(_EBP + 22280); /*0x507b21*/
                  v99 = (_DWORD *)(v98 + v97 + 16); /*0x507b27*/
                  v100 = (_DWORD *)(v97 + v98); /*0x507b2b*/
                  ++v96; /*0x507b2d*/
                  v97 += 16; /*0x507b2e*/
                  *v100 = *v99; /*0x507b33*/
                  v100[1] = v99[1]; /*0x507b38*/
                  v100[2] = v99[2]; /*0x507b3e*/
                  v100[3] = v99[3]; /*0x507b44*/
                }
                while ( v96 < *(_DWORD *)(_EBP + 22292) ); /*0x507b4f*/
              }
            }
          }
        }
      }
    }
  }
  else
  {
    HIBYTE(v108) = 0; /*0x507a42*/
  }
LABEL_56:
  __3_YAXPAX_Z(Block); /*0x507520*/
  __3_YAXPAX_Z(v123); /*0x50752f*/
  __3_YAXPAX_Z(v118); /*0x507539*/
  v56 = v138; /*0x50753e*/
  v57 = v138 == 0; /*0x50754d*/
  *(_DWORD *)(_EBP + 90208) = 0; /*0x50754f*/
  v137 = (int)&VectorClass<BuildingTypeClass *>::`vftable'; /*0x507555*/
  if ( !v57 && BYTE1(v140) ) /*0x507567*/
  {
    __3_YAXPAX_Z(v56); /*0x50756a*/
    v138 = 0; /*0x507572*/
  }
  BYTE1(v140) = 0; /*0x507580*/
  v139 = 0; /*0x50758a*/
  v147 = (int)&VectorClass<BuildingTypeClass *>::`vftable'; /*0x507591*/
  if ( v148 && BYTE1(v150) ) /*0x5075a3*/
  {
    __3_YAXPAX_Z(v148); /*0x5075a6*/
    v148 = 0; /*0x5075ae*/
  }
  BYTE1(v150) = 0; /*0x5075bc*/
  v149 = 0; /*0x5075c6*/
  v142 = (int)&VectorClass<BuildingTypeClass *>::`vftable'; /*0x5075cd*/
  if ( v143 && BYTE1(v145) ) /*0x5075df*/
  {
    __3_YAXPAX_Z(v143); /*0x5075e2*/
    v143 = 0; /*0x5075ea*/
  }
  BYTE1(v145) = 0; /*0x5075f5*/
  v144 = 0; /*0x5075ff*/
  v126.ptr_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x507606*/
  if ( v126.Items && v126.IsAllocated ) /*0x507616*/
  {
    __3_YAXPAX_Z(v126.Items); /*0x507619*/
    v126.Items = 0; /*0x507621*/
  }
  v126.IsAllocated = 0; /*0x507627*/
  v126.Capacity = 0; /*0x50762c*/
  v58 = &a3; /*0x507630*/
  v59 = 4; /*0x507637*/
  do /*0x507668*/
  {
    v60 = (void *)*(v58 - 6); /*0x507641*/
    v58 -= 6; /*0x507644*/
    *(v58 - 1) = (int)&VectorClass<Cell>::`vftable'; /*0x507649*/
    if ( v60 && *((_BYTE *)v58 + 9) ) /*0x50764e*/
    {
      __3_YAXPAX_Z(v60); /*0x507656*/
      *v58 = 0; /*0x50765e*/
    }
    --v59; /*0x507660*/
    *((_BYTE *)v58 + 9) = 0; /*0x507661*/
    v58[1] = 0; /*0x507665*/
  }
  while ( v59 ); /*0x507668*/
  return HIBYTE(v108); /*0x50766e*/
}


// ==== 0x00507B80  ObjectClass::CollectSuperWeaponBuildingTypes  this=ObjectClass  sig=csp ====
int __thiscall CollectSuperWeaponBuildingTypes(ObjectClass *this, int a2, int a3)
{
  char v4; // cl
  TagClass *attachedTag; // eax
  int v6; // ebp
  int abstractFlags; // eax
  _DWORD *v8; // ebx
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  void *v19; // eax
  int v21; // [esp+10h] [ebp-1Ch]
  void **v22; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  int v24; // [esp+1Ch] [ebp-10h]
  int v25; // [esp+20h] [ebp-Ch]
  int v26; // [esp+24h] [ebp-8h]
  int v27; // [esp+28h] [ebp-4h]

  v4 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)&this->attachedTag[2].firstTrigger); /*0x507b9c*/
  attachedTag = this->attachedTag; /*0x507b9e*/
  LOWORD(v25) = 1; /*0x507ba1*/
  v6 = 1 << v4; /*0x507ba6*/
  v22 = &DynamicVectorClass<BuildingTypeClass *>::`vftable'; /*0x507baa*/
  Block = 0; /*0x507bb2*/
  v24 = 0; /*0x507bb6*/
  v27 = 10; /*0x507bbe*/
  v26 = 0; /*0x507bc6*/
  abstractFlags = attachedTag[3].?; /*0x507bca*/
  if ( abstractFlags ) /*0x507bd2*/
  {
    if ( abstractFlags == 1 ) /*0x507be5*/
      v8 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2416); /*0x507bed*/
    else
      v8 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2444); /*0x507bfa*/
  }
  else
  {
    v8 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2388); /*0x507bda*/
  }
  v9 = v8[4] - 1; /*0x507c03*/
  v21 = v9; /*0x507c04*/
  if ( v9 >= 0 ) /*0x507c08*/
  {
    while ( 1 ) /*0x507c19*/
    {
      v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*v8 + 24))(v8, v9); /*0x507c19*/
      v11 = v10; /*0x507c1c*/
      if ( (v6 & v10[435]) != 0 /*0x507c82*/
        && v10[397] <= this->alignmentPadding75
        && (int)v10[1353] > 0
        && (unsigned __int8)HouseClass::PrerequisitesForTechnoTypeAreListed((int)v10, a3, *(_DWORD *)(a3 + 16))
        && (v26 < v24
         || (BYTE1(v25) || !v24)
         && v27 > 0
         && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v22[2])(&v22, v24 + v27, 0)) )
      {
        v12 = v26++; /*0x507c8d*/
        *((_DWORD *)Block + v12) = v11; /*0x507c98*/
      }
      if ( --v21 < 0 ) /*0x507ca4*/
        break; /*0x507ca4*/
      v9 = v21; /*0x507c10*/
    }
  }
  *(_DWORD *)(a2 + 4) = 0; /*0x507cb6*/
  *(_DWORD *)(a2 + 8) = 0; /*0x507cb9*/
  *(_BYTE *)(a2 + 12) = 1; /*0x507cbc*/
  *(_BYTE *)(a2 + 13) = 0; /*0x507cc0*/
  *(_DWORD *)a2 = &VectorClass<BuildingTypeClass *>::`vftable'; /*0x507cc3*/
  if ( (void ***)a2 != &v22 ) /*0x507cc9*/
  {
    VectorClass::Cleanup4(a2); /*0x507ccd*/
    v13 = v24; /*0x507cd3*/
    v14 = v24 == 0; /*0x507cd7*/
    *(_DWORD *)(a2 + 8) = v24; /*0x507cd9*/
    if ( v14 ) /*0x507cdc*/
    {
      *(_DWORD *)(a2 + 4) = 0; /*0x507d15*/
      *(_BYTE *)(a2 + 13) = 0; /*0x507d1c*/
    }
    else
    {
      v15 = __2_YAPAXI_Z(4 * v13); /*0x507ce2*/
      *(_DWORD *)(a2 + 4) = v15; /*0x507cea*/
      if ( v15 ) /*0x507cef*/
      {
        v16 = *(_DWORD *)(a2 + 8); /*0x507cf1*/
        v17 = 0; /*0x507cf4*/
        *(_BYTE *)(a2 + 13) = 1; /*0x507cf8*/
        if ( v16 > 0 ) /*0x507cfc*/
        {
          do /*0x507d11*/
          {
            *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v17) = *((_DWORD *)Block + v17); /*0x507d08*/
            ++v17; /*0x507d0e*/
          }
          while ( v17 < *(_DWORD *)(a2 + 8) ); /*0x507d11*/
        }
      }
    }
  }
  v18 = v27; /*0x507d24*/
  *(_DWORD *)(a2 + 16) = v26; /*0x507d28*/
  v19 = Block; /*0x507d2b*/
  v14 = Block == 0; /*0x507d2f*/
  *(_DWORD *)(a2 + 20) = v18; /*0x507d31*/
  *(_DWORD *)a2 = &DynamicVectorClass<BuildingTypeClass *>::`vftable'; /*0x507d34*/
  v22 = &VectorClass<BuildingTypeClass *>::`vftable'; /*0x507d3a*/
  if ( !v14 && BYTE1(v25) ) /*0x507d4a*/
    __3_YAXPAX_Z(v19); /*0x507d4d*/
  return a2; /*0x507d57*/
}



// ==== 0x00507D70  HouseClass::CollectInfantryBuildCandidates  this=HouseClass  sig=csp ====
int __thiscall HouseClass::CollectInfantryBuildCandidates(HouseClass *this, int a2, int a3)
{
  char v4; // cl
  int relatedTagsCapacity; // eax
  int v6; // ebp
  int v7; // eax
  _DWORD *v8; // ebx
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  void *v19; // eax
  int v21; // [esp+10h] [ebp-1Ch]
  void **v22; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  int v24; // [esp+1Ch] [ebp-10h]
  int v25; // [esp+20h] [ebp-Ch]
  int v26; // [esp+24h] [ebp-8h]
  int v27; // [esp+28h] [ebp-4h]

  v4 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)(this->relatedTagsCapacity + 152)); /*0x507d8c*/
  relatedTagsCapacity = this->relatedTagsCapacity; /*0x507d8e*/
  LOWORD(v25) = 1; /*0x507d91*/
  v6 = 1 << v4; /*0x507d96*/
  v22 = &DynamicVectorClass<BuildingTypeClass *>::`vftable'; /*0x507d9a*/
  Block = 0; /*0x507da2*/
  v24 = 0; /*0x507da6*/
  v27 = 10; /*0x507dae*/
  v26 = 0; /*0x507db6*/
  v7 = *(_DWORD *)(relatedTagsCapacity + 188); /*0x507dba*/
  if ( v7 ) /*0x507dc2*/
  {
    if ( v7 == 1 ) /*0x507dd5*/
      v8 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2416); /*0x507ddd*/
    else
      v8 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2444); /*0x507dea*/
  }
  else
  {
    v8 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2388); /*0x507dca*/
  }
  v9 = v8[4] - 1; /*0x507df3*/
  v21 = v9; /*0x507df4*/
  if ( v9 >= 0 ) /*0x507df8*/
  {
    while ( 1 ) /*0x507e09*/
    {
      v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*v8 + 24))(v8, v9); /*0x507e09*/
      v11 = v10; /*0x507e0c*/
      if ( (v6 & v10[435]) != 0 /*0x507e72*/
        && v10[397] <= *(_DWORD *)&this->__pad_13C[152]
        && (int)v10[1354] > 0
        && (unsigned __int8)HouseClass::PrerequisitesForTechnoTypeAreListed((int)v10, a3, *(_DWORD *)(a3 + 16))
        && (v26 < v24
         || (BYTE1(v25) || !v24)
         && v27 > 0
         && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v22[2])(&v22, v24 + v27, 0)) )
      {
        v12 = v26++; /*0x507e7d*/
        *((_DWORD *)Block + v12) = v11; /*0x507e88*/
      }
      if ( --v21 < 0 ) /*0x507e94*/
        break; /*0x507e94*/
      v9 = v21; /*0x507e00*/
    }
  }
  *(_DWORD *)(a2 + 4) = 0; /*0x507ea6*/
  *(_DWORD *)(a2 + 8) = 0; /*0x507ea9*/
  *(_BYTE *)(a2 + 12) = 1; /*0x507eac*/
  *(_BYTE *)(a2 + 13) = 0; /*0x507eb0*/
  *(_DWORD *)a2 = &VectorClass<BuildingTypeClass *>::`vftable'; /*0x507eb3*/
  if ( (void ***)a2 != &v22 ) /*0x507eb9*/
  {
    VectorClass::Cleanup4(a2); /*0x507ebd*/
    v13 = v24; /*0x507ec3*/
    v14 = v24 == 0; /*0x507ec7*/
    *(_DWORD *)(a2 + 8) = v24; /*0x507ec9*/
    if ( v14 ) /*0x507ecc*/
    {
      *(_DWORD *)(a2 + 4) = 0; /*0x507f05*/
      *(_BYTE *)(a2 + 13) = 0; /*0x507f0c*/
    }
    else
    {
      v15 = __2_YAPAXI_Z(4 * v13); /*0x507ed2*/
      *(_DWORD *)(a2 + 4) = v15; /*0x507eda*/
      if ( v15 ) /*0x507edf*/
      {
        v16 = *(_DWORD *)(a2 + 8); /*0x507ee1*/
        v17 = 0; /*0x507ee4*/
        *(_BYTE *)(a2 + 13) = 1; /*0x507ee8*/
        if ( v16 > 0 ) /*0x507eec*/
        {
          do /*0x507f01*/
          {
            *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v17) = *((_DWORD *)Block + v17); /*0x507ef8*/
            ++v17; /*0x507efe*/
          }
          while ( v17 < *(_DWORD *)(a2 + 8) ); /*0x507f01*/
        }
      }
    }
  }
  v18 = v27; /*0x507f14*/
  *(_DWORD *)(a2 + 16) = v26; /*0x507f18*/
  v19 = Block; /*0x507f1b*/
  v14 = Block == 0; /*0x507f1f*/
  *(_DWORD *)(a2 + 20) = v18; /*0x507f21*/
  *(_DWORD *)a2 = &DynamicVectorClass<BuildingTypeClass *>::`vftable'; /*0x507f24*/
  v22 = &VectorClass<BuildingTypeClass *>::`vftable'; /*0x507f2a*/
  if ( !v14 && BYTE1(v25) ) /*0x507f3a*/
    __3_YAXPAX_Z(v19); /*0x507f3d*/
  return a2; /*0x507f47*/
}



// ==== 0x00507F60  HouseClass::CollectAircraftBuildCandidates  this=HouseClass  sig=csp ====
int __thiscall HouseClass::CollectAircraftBuildCandidates(HouseClass *this, int a2, int a3)
{
  char v4; // cl
  int relatedTagsCapacity; // eax
  int v6; // ebp
  int v7; // eax
  _DWORD *v8; // ebx
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  void *v19; // eax
  int v21; // [esp+10h] [ebp-1Ch]
  void **v22; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  int v24; // [esp+1Ch] [ebp-10h]
  int v25; // [esp+20h] [ebp-Ch]
  int v26; // [esp+24h] [ebp-8h]
  int v27; // [esp+28h] [ebp-4h]

  v4 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)(this->relatedTagsCapacity + 152)); /*0x507f7c*/
  relatedTagsCapacity = this->relatedTagsCapacity; /*0x507f7e*/
  LOWORD(v25) = 1; /*0x507f81*/
  v6 = 1 << v4; /*0x507f86*/
  v22 = &DynamicVectorClass<BuildingTypeClass *>::`vftable'; /*0x507f8a*/
  Block = 0; /*0x507f92*/
  v24 = 0; /*0x507f96*/
  v27 = 10; /*0x507f9e*/
  v26 = 0; /*0x507fa6*/
  v7 = *(_DWORD *)(relatedTagsCapacity + 188); /*0x507faa*/
  if ( v7 ) /*0x507fb2*/
  {
    if ( v7 == 1 ) /*0x507fc5*/
      v8 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2416); /*0x507fcd*/
    else
      v8 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2444); /*0x507fda*/
  }
  else
  {
    v8 = (_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2388); /*0x507fba*/
  }
  v9 = v8[4] - 1; /*0x507fe3*/
  v21 = v9; /*0x507fe4*/
  if ( v9 >= 0 ) /*0x507fe8*/
  {
    while ( 1 ) /*0x507ff9*/
    {
      v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*v8 + 24))(v8, v9); /*0x507ff9*/
      v11 = v10; /*0x507ffc*/
      if ( (v6 & v10[435]) != 0 /*0x508062*/
        && v10[397] <= *(_DWORD *)&this->__pad_13C[152]
        && (int)v10[1355] > 0
        && (unsigned __int8)HouseClass::PrerequisitesForTechnoTypeAreListed((int)v10, a3, *(_DWORD *)(a3 + 16))
        && (v26 < v24
         || (BYTE1(v25) || !v24)
         && v27 > 0
         && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v22[2])(&v22, v24 + v27, 0)) )
      {
        v12 = v26++; /*0x50806d*/
        *((_DWORD *)Block + v12) = v11; /*0x508078*/
      }
      if ( --v21 < 0 ) /*0x508084*/
        break; /*0x508084*/
      v9 = v21; /*0x507ff0*/
    }
  }
  *(_DWORD *)(a2 + 4) = 0; /*0x508096*/
  *(_DWORD *)(a2 + 8) = 0; /*0x508099*/
  *(_BYTE *)(a2 + 12) = 1; /*0x50809c*/
  *(_BYTE *)(a2 + 13) = 0; /*0x5080a0*/
  *(_DWORD *)a2 = &VectorClass<BuildingTypeClass *>::`vftable'; /*0x5080a3*/
  if ( (void ***)a2 != &v22 ) /*0x5080a9*/
  {
    VectorClass::Cleanup4(a2); /*0x5080ad*/
    v13 = v24; /*0x5080b3*/
    v14 = v24 == 0; /*0x5080b7*/
    *(_DWORD *)(a2 + 8) = v24; /*0x5080b9*/
    if ( v14 ) /*0x5080bc*/
    {
      *(_DWORD *)(a2 + 4) = 0; /*0x5080f5*/
      *(_BYTE *)(a2 + 13) = 0; /*0x5080fc*/
    }
    else
    {
      v15 = __2_YAPAXI_Z(4 * v13); /*0x5080c2*/
      *(_DWORD *)(a2 + 4) = v15; /*0x5080ca*/
      if ( v15 ) /*0x5080cf*/
      {
        v16 = *(_DWORD *)(a2 + 8); /*0x5080d1*/
        v17 = 0; /*0x5080d4*/
        *(_BYTE *)(a2 + 13) = 1; /*0x5080d8*/
        if ( v16 > 0 ) /*0x5080dc*/
        {
          do /*0x5080f1*/
          {
            *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v17) = *((_DWORD *)Block + v17); /*0x5080e8*/
            ++v17; /*0x5080ee*/
          }
          while ( v17 < *(_DWORD *)(a2 + 8) ); /*0x5080f1*/
        }
      }
    }
  }
  v18 = v27; /*0x508104*/
  *(_DWORD *)(a2 + 16) = v26; /*0x508108*/
  v19 = Block; /*0x50810b*/
  v14 = Block == 0; /*0x50810f*/
  *(_DWORD *)(a2 + 20) = v18; /*0x508111*/
  *(_DWORD *)a2 = &DynamicVectorClass<BuildingTypeClass *>::`vftable'; /*0x508114*/
  v22 = &VectorClass<BuildingTypeClass *>::`vftable'; /*0x50811a*/
  if ( !v14 && BYTE1(v25) ) /*0x50812a*/
    __3_YAXPAX_Z(v19); /*0x50812d*/
  return a2; /*0x508137*/
}



// ==== 0x00508150  HouseClass::ComputePowerDistribution  this=AbstractClass  sig=csp ====
int __thiscall sub_508150(float *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  int result; // eax
  double v12; // st7
  int v13; // [esp+4h] [ebp-10h]
  int v14; // [esp+8h] [ebp-Ch]

  v2 = *((_DWORD *)this + 5504); /*0x508156*/
  if ( v2 == -1 ) /*0x50815f*/
    goto LABEL_3; /*0x50815f*/
  v3 = *(_DWORD **)&dword_A8022C->AbstractClass[4 * v2]; /*0x508173*/
  v4 = v3[22572] + 3000; /*0x50818e*/
  v5 = v3[22571] + 3000; /*0x508194*/
  v6 = v3[22570] + 3000; /*0x5081a4*/
  v7 = Math::RoundToInt((double)*(int *)(dword_8871E0->?[0] + 4 * *((_DWORD *)this + 97)) * 0.0099999998 * (double)v4); /*0x5081bf*/
  v14 = Random::Range((_DWORD *)dword_A8B230 + 134, -v7, v7) + v4; /*0x5081e7*/
  v8 = Math::RoundToInt((double)*(int *)(dword_8871E0->?[0] + 4 * *((_DWORD *)this + 97)) * 0.0099999998 * (double)v5); /*0x5081fe*/
  v13 = Random::Range((_DWORD *)dword_A8B230 + 134, -v8, v8) + v5; /*0x50822b*/
  v9 = Math::RoundToInt((double)*(int *)(dword_8871E0->?[0] + 4 * *((_DWORD *)this + 97)) * 0.0099999998 * (double)v6); /*0x50823c*/
  v10 = Random::Range((_DWORD *)dword_A8B230 + 134, -v9, v9) + v6; /*0x508256*/
  result = v10 + v14 + v13; /*0x50825b*/
  if ( result <= 0 ) /*0x50826a*/
  {
LABEL_3:
    *(this + 22569) = 0.33000001; /*0x508271*/
    *(this + 22568) = 0.33000001; /*0x508277*/
    *(this + 22567) = 0.33000001; /*0x50827d*/
    return 1051260355; /*0x50826c*/
  }
  else
  {
    v12 = (double)result; /*0x508288*/
    *(this + 22567) = (double)v13 / v12; /*0x508292*/
    *(this + 22568) = (double)v14 / v12; /*0x50829e*/
    *(this + 22569) = (double)v10 / v12; /*0x5082aa*/
  }
  return result; /*0x508283*/
}



// ==== 0x005082C0  HouseClass::FindAutoBuildLocation  this=HouseClass  sig=csp ====
void __thiscall HouseClass::FindAutoBuildLocation(HouseClass *this)
{
  int v1; // esi
  int v2; // edi
  int v3; // ebp
  int v4; // ebx
  int v5; // eax
  HouseClass *v6; // esi
  int v7; // ecx
  _DWORD *v8; // edi
  _DWORD *v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int16 v12; // dx
  Cell *v13; // eax
  int v14; // edx
  Cell *v15; // esi
  __int16 v16; // cx
  Cell *v17; // ebp
  int v18; // ecx
  __int64 v19; // rax
  int v20; // edi
  bool v21; // bl
  char IsWithinUsableArea; // al
  __int16 v23; // ax
  int v24; // esi
  int v25; // ebx
  int v26; // eax
  int v27; // edi
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // ecx
  int v31; // edx
  _WORD *v32; // eax
  __int16 v33; // cx
  __int16 v34; // cx
  int v35; // edi
  int v36; // eax
  _DWORD *v37; // eax
  int v38; // ecx
  int v39; // edx
  __int16 v40; // cx
  int v41; // ecx
  __int16 v42; // dx
  int v43; // ecx
  int v44; // ebx
  int v45; // edi
  int v46; // edx
  int v47; // esi
  int v48; // eax
  _DWORD *v49; // eax
  int v50; // ecx
  _WORD *v51; // esi
  int *v52; // eax
  int v53; // edi
  int v54; // esi
  int v55; // eax
  _DWORD *v56; // eax
  int v57; // ecx
  int v58; // ebp
  int v59; // ebx
  int *v60; // esi
  _DWORD *v61; // edi
  int v62; // eax
  int v63; // ecx
  int v64; // eax
  _DWORD *v65; // eax
  int v66; // ebp
  int v67; // ebx
  int *v68; // esi
  _DWORD *v69; // edi
  int v70; // eax
  int v71; // ecx
  int v72; // eax
  _DWORD *v73; // eax
  int *v74; // ecx
  int *v75; // eax
  int v76; // edx
  int v77; // edx
  int v78; // ecx
  char v79; // [esp+13h] [ebp-10Dh]
  char v80; // [esp+13h] [ebp-10Dh]
  int v81; // [esp+14h] [ebp-10Ch]
  int v82; // [esp+14h] [ebp-10Ch]
  char v83; // [esp+19h] [ebp-107h]
  char v84; // [esp+1Ah] [ebp-106h]
  char v85; // [esp+1Bh] [ebp-105h]
  __int16 v86[2]; // [esp+1Ch] [ebp-104h] BYREF
  int v87; // [esp+20h] [ebp-100h]
  int v88; // [esp+24h] [ebp-FCh] BYREF
  bool v89; // [esp+2Ah] [ebp-F6h]
  bool v90; // [esp+2Bh] [ebp-F5h]
  unsigned int i; // [esp+2Ch] [ebp-F4h]
  BaseNodeClass v92; // [esp+30h] [ebp-F0h] BYREF
  int v93; // [esp+40h] [ebp-E0h]
  int v94; // [esp+44h] [ebp-DCh]
  int v95; // [esp+48h] [ebp-D8h]
  BaseNodeClass v96; // [esp+4Ch] [ebp-D4h] BYREF
  int v97; // [esp+5Ch] [ebp-C4h]
  int v98; // [esp+60h] [ebp-C0h]
  int v99; // [esp+64h] [ebp-BCh]
  int v100; // [esp+68h] [ebp-B8h]
  HouseClass *v101; // [esp+6Ch] [ebp-B4h]
  _DWORD *BuildableFromArray; // [esp+70h] [ebp-B0h]
  int v103; // [esp+74h] [ebp-ACh]
  int v104; // [esp+78h] [ebp-A8h]
  int v105; // [esp+7Ch] [ebp-A4h]
  int v106; // [esp+80h] [ebp-A0h]
  __int16 v107; // [esp+84h] [ebp-9Ch]
  int *HouseClass_field_timer_A; // [esp+88h] [ebp-98h]
  int *v109; // [esp+8Ch] [ebp-94h]
  int v110; // [esp+90h] [ebp-90h] BYREF
  int v111; // [esp+94h] [ebp-8Ch] BYREF
  __int16 v112[2]; // [esp+98h] [ebp-88h] BYREF
  int v113; // [esp+9Ch] [ebp-84h]
  _DWORD v114[4]; // [esp+A0h] [ebp-80h]
  _DWORD v115[4]; // [esp+B0h] [ebp-70h]
  _DWORD v116[4]; // [esp+C0h] [ebp-60h]
  int v117; // [esp+D0h] [ebp-50h] BYREF
  int v118; // [esp+D4h] [ebp-4Ch] BYREF
  int v119; // [esp+D8h] [ebp-48h] BYREF
  _DWORD v120[3]; // [esp+DCh] [ebp-44h] BYREF
  int v121; // [esp+E8h] [ebp-38h]
  int v122; // [esp+F8h] [ebp-28h]
  int v123; // [esp+108h] [ebp-18h]
  int v124; // [esp+118h] [ebp-8h]

  v109 = &this->damageDelayTimer[2]; /*0x5082cf*/
  v1 = this->damageDelayTimer[2] - 1; /*0x5082d9*/
  v2 = this->teamDelayTimer[0]; /*0x5082da*/
  v101 = this; /*0x5082dd*/
  --v2; /*0x5082e1*/
  v3 = this->teamDelayTimer[1] + 2; /*0x5082e9*/
  v4 = this->teamDelayTimer[2]; /*0x5082ec*/
  HouseClass_field_timer_A = this->HouseClass_field_timer_A; /*0x5082f5*/
  v4 += 2; /*0x5082fc*/
  this->HouseClass_field_timer_A[0] = v1; /*0x5082ff*/
  this->HouseClass_field_timer_A[1] = v2; /*0x508305*/
  this->HouseClass_field_timer_A[2] = v3; /*0x508308*/
  this->HouseClass_field_timer_B[0] = v4; /*0x50830b*/
  BaseNodeClass::Vector_Constructor(&v96, 0, 0); /*0x50830e*/
  v96.buildingTypeIndex = (int)&DynamicVectorClass<BaseNodeClass>::`vftable'; /*0x50831b*/
  v98 = 10; /*0x508323*/
  v97 = 0; /*0x50832b*/
  BaseNodeClass::Vector_Constructor(&v92, 0, 0); /*0x508333*/
  LOWORD(v81) = v1; /*0x508338*/
  HIWORD(v81) = v2; /*0x50833d*/
  v5 = v81; /*0x508342*/
  LOWORD(v81) = v1; /*0x508346*/
  v116[0] = v5; /*0x50834b*/
  HIWORD(v81) = v4 + v2 - 1; /*0x508356*/
  v116[1] = v81; /*0x50835f*/
  LOWORD(v81) = v1; /*0x508369*/
  HIWORD(v81) = v2 + 1; /*0x50836e*/
  LOWORD(v3) = v1 + v3; /*0x508377*/
  v116[2] = v81; /*0x508379*/
  v92.buildingTypeIndex = (int)&DynamicVectorClass<BaseNodeClass>::`vftable'; /*0x508388*/
  LOWORD(v81) = v3 - 1; /*0x508390*/
  v116[3] = v81; /*0x508399*/
  LOWORD(v81) = v3; /*0x5083a0*/
  HIWORD(v81) = v2; /*0x5083a5*/
  v114[0] = v81; /*0x5083ae*/
  LOWORD(v81) = v3; /*0x5083b5*/
  HIWORD(v81) = v4 + v2 - 1; /*0x5083ba*/
  v114[1] = v81; /*0x5083c3*/
  LOWORD(v81) = v1; /*0x5083ca*/
  v6 = v101; /*0x5083cf*/
  v7 = v81; /*0x5083d8*/
  LOWORD(v81) = v3 - 1; /*0x5083e6*/
  v114[2] = v7; /*0x5083f4*/
  v94 = 10; /*0x5083fe*/
  v93 = 0; /*0x508406*/
  v114[3] = v81; /*0x50840e*/
  BuildableFromArray = HouseClass::FirstBuildableFromArray(v101, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2640); /*0x508420*/
  v8 = HouseClass::FirstBuildableFromArray(v6, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2696); /*0x508440*/
  v9 = HouseClass::FirstBuildableFromArray(v6, *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2668); /*0x508443*/
  v115[0] = v8; /*0x508448*/
  v115[1] = v8; /*0x50844f*/
  v115[2] = v9; /*0x508464*/
  v115[3] = v9; /*0x50846b*/
  v82 = 0; /*0x508472*/
  v113 = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v6->damageDelayTimer[1]) /*0x508488*/
         + 283);
  for ( i = 0; (int)i < 16; i += 4 ) /*0x50848f*/
  {
    v10 = i; /*0x508493*/
    v11 = v116[i / 4]; /*0x50849d*/
    v12 = v114[i / 4]; /*0x5084a4*/
    v95 = dword_7EA790[i / 4]; /*0x5084ac*/
    *(_DWORD *)v86 = v11; /*0x5084b2*/
    v87 = 0; /*0x5084b6*/
    v83 = 0; /*0x5084ba*/
    v99 = 0; /*0x5084be*/
    v107 = v12; /*0x5084c2*/
    while ( (_WORD)v11 != v107 || v86[1] != *(_WORD *)((char *)v114 + v10 + 2) ) /*0x5084e1*/
    {
      v13 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v86); /*0x5084f1*/
      v14 = *(int *)((char *)&dword_7EA7A0 + v10) & 7; /*0x508501*/
      v15 = v13; /*0x508504*/
      v16 = LOWORD(g_DDrawSurfaceManager.scenario[v14 + 82]) + v86[0]; /*0x508506*/
      LOWORD(v14) = HIWORD(g_DDrawSurfaceManager.scenario[v14 + 82]); /*0x508515*/
      LOWORD(v106) = v16; /*0x50851d*/
      HIWORD(v106) = v86[1] + v14; /*0x508537*/
      *(_DWORD *)v112 = v106; /*0x508546*/
      v17 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v112); /*0x508559*/
      v18 = *(_DWORD *)&v15->__pad_E8[4]; /*0x508564*/
      v19 = v15->Cell_field_0x11B[0] - v113; /*0x50856a*/
      v20 = *(_DWORD *)&v17->__pad_E8[4]; /*0x50856b*/
      v90 = (int)((HIDWORD(v19) ^ v19) - HIDWORD(v19)) <= 2; /*0x508578*/
      if ( v18 == 3 || v18 == 2 || v18 == 8 || v20 == 3 || v20 == 2 || (v85 = 1, v20 == 8) ) /*0x50859e*/
        v85 = 0; /*0x5085a0*/
      v89 = *(_DWORD *)&v15->__pad_3C[8] == -1; /*0x5085ad*/
      if ( Cell::IsBridge(v15) || (v79 = 1, Cell::IsBridge(v17)) ) /*0x5085bd*/
        v79 = 0; /*0x5085cb*/
      if ( CellClass::FindInfantry((CellClass *)v15, 0) || (v84 = 1, CellClass::FindInfantry((CellClass *)v17, 0)) ) /*0x5085e0*/
        v84 = 0; /*0x5085ee*/
      v21 = v15->Cell_field_0x11B[1] == 0; /*0x508607*/
      IsWithinUsableArea = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v86, 1); /*0x50860a*/
      if ( !v90 || !v85 ) /*0x508621*/
        goto LABEL_36; /*0x508621*/
      if ( !v89 || !v79 || !v84 || !v21 || !IsWithinUsableArea ) /*0x508645*/
      {
        if ( v79 && v84 && IsWithinUsableArea ) /*0x508688*/
        {
          v80 = 0; /*0x50868e*/
          ++v99; /*0x508694*/
        }
        else
        {
LABEL_36:
          v80 = 1; /*0x5086cd*/
          if ( v99 > 0 ) /*0x5086d8*/
          {
            v80 = 0; /*0x5086da*/
            v99 = 0; /*0x5086df*/
          }
        }
        if ( v87 >= 5 || !v80 ) /*0x5086a7*/
        {
          v24 = v82; /*0x5086af*/
          v25 = 0; /*0x5086b6*/
          v26 = v87 / 2 - 1; /*0x5086ba*/
          v88 = v82; /*0x5086bb*/
          v100 = v26; /*0x5086c1*/
          if ( v87 > 0 ) /*0x5086c5*/
          {
            while ( 1 ) /*0x5086ef*/
            {
              if ( v25 == v26 && v80 ) /*0x5086fb*/
              {
                LOBYTE(v121) = 0; /*0x50870b*/
                v27 = *(_DWORD *)(v115[i / 4] + 3576); /*0x508720*/
                if ( v93 < *(int *)&v92.placed /*0x508755*/
                  || (BYTE1(v92.attempts) || !*(_DWORD *)&v92.placed)
                  && v94 > 0
                  && (*(unsigned __int8 (__thiscall **)(BaseNodeClass *, int, _DWORD))(v92.buildingTypeIndex + 8))(
                       &v92,
                       v94 + *(_DWORD *)&v92.placed,
                       0) )
                {
                  v28 = v93++; /*0x508760*/
                  v29 = (_DWORD *)(v92.mapCoords[0] + 16 * v28); /*0x50876e*/
                  v30 = v121; /*0x508770*/
                  *v29 = v27; /*0x508777*/
                  v29[1] = v24; /*0x508779*/
                  v29[2] = v30; /*0x50877c*/
                  v29[3] = 0; /*0x50877f*/
                }
                v25 += 3; /*0x508786*/
                v31 = v95 & 7; /*0x508789*/
                v32 = (_WORD *)(4 * v31 + 9041544); /*0x508794*/
                v33 = v24 + LOWORD(g_DDrawSurfaceManager.scenario[v31 + 82]); /*0x50879b*/
                LOWORD(v31) = HIWORD(v88) + HIWORD(g_DDrawSurfaceManager.scenario[v31 + 82]); /*0x5087a5*/
                v34 = *v32 + *v32 + v33; /*0x5087ae*/
                LOWORD(v32) = v32[1]; /*0x5087b1*/
                LOWORD(v105) = v34; /*0x5087bb*/
                HIWORD(v105) = v31 + (_WORD)v32 + (_WORD)v32; /*0x5087c0*/
                v24 = v105; /*0x5087c5*/
              }
              else
              {
                v35 = BuildableFromArray[894]; /*0x5087dc*/
                LOBYTE(v122) = 0; /*0x5087e4*/
                if ( v97 < *(int *)&v96.placed /*0x50881b*/
                  || (BYTE1(v96.attempts) || !*(_DWORD *)&v96.placed)
                  && v98 > 0
                  && (*(unsigned __int8 (__thiscall **)(BaseNodeClass *, int, _DWORD))(v96.buildingTypeIndex + 8))(
                       &v96,
                       v98 + *(_DWORD *)&v96.placed,
                       0) )
                {
                  v36 = v97++; /*0x508826*/
                  v37 = (_DWORD *)(v96.mapCoords[0] + 16 * v36); /*0x508834*/
                  v38 = v122; /*0x508836*/
                  *v37 = v35; /*0x50883d*/
                  v37[1] = v24; /*0x50883f*/
                  v37[2] = v38; /*0x508842*/
                  v37[3] = 0; /*0x508845*/
                }
                ++v25; /*0x50884c*/
                v39 = v95 & 7; /*0x50884d*/
                v40 = v24 + LOWORD(g_DDrawSurfaceManager.scenario[v39 + 82]); /*0x50885f*/
                LOWORD(v39) = HIWORD(g_DDrawSurfaceManager.scenario[v39 + 82]); /*0x508862*/
                LOWORD(v103) = v40; /*0x508866*/
                HIWORD(v103) = HIWORD(v88) + v39; /*0x508870*/
                v24 = v103; /*0x508875*/
              }
              v88 = v24; /*0x50887d*/
              if ( v25 >= v87 ) /*0x508883*/
                break; /*0x508883*/
              v26 = v100; /*0x5086e9*/
            }
          }
        }
        v87 = 0; /*0x508889*/
        v83 = 0; /*0x508891*/
        goto LABEL_57; /*0x508891*/
      }
      if ( !v83 ) /*0x50864d*/
      {
        v23 = v86[0]; /*0x50864f*/
        v83 = 1; /*0x508653*/
        v87 = 1; /*0x508658*/
        v82 = *(_DWORD *)v86; /*0x508660*/
        goto LABEL_58; /*0x508664*/
      }
      ++v87; /*0x508669*/
LABEL_57:
      v23 = v86[0]; /*0x508896*/
LABEL_58:
      v10 = i; /*0x50889a*/
      v41 = v95 & 7; /*0x5088a2*/
      v42 = HIWORD(g_DDrawSurfaceManager.scenario[v41 + 82]); /*0x5088a5*/
      LOWORD(v104) = LOWORD(g_DDrawSurfaceManager.scenario[v41 + 82]) + v23; /*0x5088c1*/
      HIWORD(v104) = v86[1] + v42; /*0x5088c6*/
      LOWORD(v11) = v104; /*0x5088cb*/
      *(_DWORD *)v86 = v104; /*0x5088cf*/
    }
    if ( v87 >= 5 ) /*0x5088df*/
    {
      v43 = v82; /*0x5088e5*/
      v44 = 0; /*0x5088ee*/
      v88 = v82; /*0x5088f3*/
      v100 = v87 / 2 - 1; /*0x5088f9*/
      do /*0x508a90*/
      {
        if ( v44 == v100 ) /*0x508907*/
        {
          v45 = v43; /*0x508911*/
          v46 = v115[i / 4]; /*0x508919*/
          LOBYTE(v124) = 0; /*0x508926*/
          v47 = *(_DWORD *)(v46 + 3576); /*0x50892e*/
          if ( v93 < *(int *)&v92.placed /*0x50895f*/
            || (BYTE1(v92.attempts) || !*(_DWORD *)&v92.placed)
            && v94 > 0
            && (*(unsigned __int8 (__thiscall **)(BaseNodeClass *, int, _DWORD))(v92.buildingTypeIndex + 8))(
                 &v92,
                 v94 + *(_DWORD *)&v92.placed,
                 0) )
          {
            v48 = v93++; /*0x50896a*/
            v49 = (_DWORD *)(v92.mapCoords[0] + 16 * v48); /*0x508978*/
            v50 = v124; /*0x50897a*/
            *v49 = v47; /*0x508981*/
            v49[1] = v45; /*0x508983*/
            v49[2] = v50; /*0x508986*/
            v49[3] = 0; /*0x508989*/
          }
          v44 += 3; /*0x50899e*/
          v51 = (_WORD *)(4 * (v95 & 7) + 9041544); /*0x5089a1*/
          v111 = *CellStruct::Add((CellStruct *)&v88, &v117, v51); /*0x5089b8*/
          v110 = *CellStruct::Add((CellStruct *)&v111, v120, v51); /*0x5089d8*/
          v52 = CellStruct::Add((CellStruct *)&v110, &v119, v51); /*0x5089e6*/
        }
        else
        {
          v53 = v43; /*0x5089f3*/
          v54 = BuildableFromArray[894]; /*0x5089f9*/
          LOBYTE(v123) = 0; /*0x508a03*/
          if ( v97 < *(int *)&v96.placed /*0x508a36*/
            || (BYTE1(v96.attempts) || !*(_DWORD *)&v96.placed)
            && v98 > 0
            && (*(unsigned __int8 (__thiscall **)(BaseNodeClass *, int, _DWORD))(v96.buildingTypeIndex + 8))(
                 &v96,
                 v98 + *(_DWORD *)&v96.placed,
                 0) )
          {
            v55 = v97++; /*0x508a41*/
            v56 = (_DWORD *)(v96.mapCoords[0] + 16 * v55); /*0x508a4f*/
            v57 = v123; /*0x508a51*/
            *v56 = v54; /*0x508a58*/
            v56[1] = v53; /*0x508a5a*/
            v56[2] = v57; /*0x508a5d*/
            v56[3] = 0; /*0x508a60*/
          }
          ++v44; /*0x508a67*/
          v52 = CellStruct::Add((CellStruct *)&v88, &v118, (_WORD *)(4 * (v95 & 7) + 9041544)); /*0x508a7f*/
        }
        v43 = *v52; /*0x508a84*/
        v88 = *v52; /*0x508a8c*/
      }
      while ( v44 < v87 ); /*0x508a90*/
    }
  }
  v58 = 0; /*0x508aae*/
  if ( v97 > 0 ) /*0x508ab2*/
  {
    v59 = 0; /*0x508ab8*/
    v60 = &v101->base[7]; /*0x508aba*/
    do /*0x508b24*/
    {
      v61 = (_DWORD *)(v59 + v96.mapCoords[0]); /*0x508ac7*/
      v62 = v60[2]; /*0x508aca*/
      if ( v60[4] < v62 /*0x508aec*/
        || (*((_BYTE *)v60 + 13) || !v62)
        && (v63 = v60[5], v63 > 0)
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v60 + 8))(v60, v63 + v62, 0) )
      {
        v64 = v60[4]; /*0x508af3*/
        v60[4] = v64 + 1; /*0x508af9*/
        v65 = (_DWORD *)(v60[1] + 16 * v64); /*0x508b04*/
        *v65 = *v61; /*0x508b06*/
        v65[1] = v61[1]; /*0x508b0b*/
        v65[2] = v61[2]; /*0x508b11*/
        v65[3] = v61[3]; /*0x508b17*/
      }
      ++v58; /*0x508b1e*/
      v59 += 16; /*0x508b1f*/
    }
    while ( v58 < v97 ); /*0x508b24*/
  }
  v66 = 0; /*0x508b2a*/
  if ( v93 > 0 ) /*0x508b2e*/
  {
    v67 = 0; /*0x508b34*/
    v68 = &v101->base[7]; /*0x508b36*/
    do /*0x508ba0*/
    {
      v69 = (_DWORD *)(v67 + v92.mapCoords[0]); /*0x508b43*/
      v70 = v68[2]; /*0x508b46*/
      if ( v68[4] < v70 /*0x508b68*/
        || (*((_BYTE *)v68 + 13) || !v70)
        && (v71 = v68[5], v71 > 0)
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v68 + 8))(v68, v71 + v70, 0) )
      {
        v72 = v68[4]; /*0x508b6f*/
        v68[4] = v72 + 1; /*0x508b75*/
        v73 = (_DWORD *)(v68[1] + 16 * v72); /*0x508b80*/
        *v73 = *v69; /*0x508b82*/
        v73[1] = v69[1]; /*0x508b87*/
        v73[2] = v69[2]; /*0x508b8d*/
        v73[3] = v69[3]; /*0x508b93*/
      }
      ++v66; /*0x508b9a*/
      v67 += 16; /*0x508b9b*/
    }
    while ( v66 < v93 ); /*0x508ba0*/
  }
  v74 = HouseClass_field_timer_A; /*0x508ba2*/
  v75 = v109; /*0x508ba9*/
  v76 = *HouseClass_field_timer_A; /*0x508bb5*/
  v92.buildingTypeIndex = (int)&VectorClass<BaseNodeClass>::`vftable'; /*0x508bb7*/
  *v109 = v76; /*0x508bbb*/
  v75[1] = v74[1]; /*0x508bc0*/
  v77 = v74[2]; /*0x508bc3*/
  v78 = v74[3]; /*0x508bc6*/
  v75[2] = v77; /*0x508bc9*/
  v75[3] = v78; /*0x508bcc*/
  if ( v92.mapCoords[0] && BYTE1(v92.attempts) ) /*0x508bdd*/
  {
    __3_YAXPAX_Z((void *)v92.mapCoords[0]); /*0x508be0*/
    v92.mapCoords[0] = 0; /*0x508be8*/
  }
  v96.buildingTypeIndex = (int)&VectorClass<BaseNodeClass>::`vftable'; /*0x508bf4*/
  BYTE1(v92.attempts) = 0; /*0x508bfb*/
  *(_DWORD *)&v92.placed = 0; /*0x508c02*/
  if ( v96.mapCoords[0] && BYTE1(v96.attempts) ) /*0x508c13*/
    __3_YAXPAX_Z((void *)v96.mapCoords[0]); /*0x508c16*/
}



// ==== 0x00508C30  HouseClass::UpdatePower  this=HouseClass  sig=csp ====
int __usercall HouseClass::UpdatePower@<eax>(HouseClass *this, double a2@<st0>)
{
  int v2; // ecx
  BuildingClass *v3; // edi
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v8; // ebp
  BuildingClass *v9; // edi
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int result; // eax
  BuildingClass *v16; // [esp-8h] [ebp-20h]
  ObjectClass *v17; // [esp+0h] [ebp-18h]
  char v18; // [esp+Bh] [ebp-Dh]
  int v19; // [esp+Ch] [ebp-Ch]
  int v20; // [esp+Ch] [ebp-Ch]
  int v21; // [esp+10h] [ebp-8h]
  int v22; // [esp+10h] [ebp-8h]
  int v23; // [esp+10h] [ebp-8h]
  unsigned __int8 v24; // [esp+14h] [ebp-4h]

  v4 = v2; /*0x508c35*/
  v5 = *(_DWORD *)(v2 + 21412); /*0x508c39*/
  v6 = *(_DWORD *)(v4 + 21416); /*0x508c3f*/
  v19 = v5; /*0x508c47*/
  v21 = v6; /*0x508c4b*/
  if ( v5 >= v6 ) /*0x508c4f*/
    goto LABEL_6; /*0x508c4f*/
  if ( !v6 ) /*0x508c53*/
    goto LABEL_6; /*0x508c53*/
  if ( !v5 ) /*0x508c57*/
    goto LABEL_5; /*0x508c57*/
  __asm /*0x508c59*/
  {
    fild [esp+18h+var_C]
    fidiv [esp+18h+var_8]
    fcomp ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x508c6c*/
LABEL_5:
    v24 = 1; /*0x508c6e*/
  else
LABEL_6:
    v24 = 0; /*0x508c75*/
  *(_BYTE *)(v4 + 22392) = 0; /*0x508c79*/
  *(_DWORD *)(v4 + 21412) = 0; /*0x508c7f*/
  *(_DWORD *)(v4 + 21416) = 0; /*0x508c85*/
  v8 = 0; /*0x508c8f*/
  v18 = 0; /*0x508c93*/
  v22 = *(_DWORD *)(v4 + 120); /*0x508c97*/
  if ( v22 > 0 ) /*0x508c9b*/
  {
    v16 = v3; /*0x508ca1*/
    do /*0x508ca5*/
    {
      v9 = *(BuildingClass **)(*(_DWORD *)(v4 + 108) + 4 * v8); /*0x508ca5*/
      if ( v9 && !v9->? && v9->? ) /*0x508cb8*/
      {
        if ( *(_DWORD *)&dword_A8B238 ) /*0x508cc5*/
        {
          if ( (Object *)v4 != dword_A83D4C ) /*0x508ce4*/
            goto LABEL_19; /*0x508ce4*/
        }
        else if ( !*(_BYTE *)(v4 + 492) && !*(_BYTE *)(v4 + 493) ) /*0x508cd5*/
        {
LABEL_19:
          *(_DWORD *)(v4 + 21412) += BuildingClass::GetPowerOutput(v16, a2); /*0x508cf2*/
          *(_DWORD *)(v4 + 21416) += BuildingClass::GetPowerDrain(v9); /*0x508d18*/
          if ( (unsigned __int8)ObjectClass::HasLocation((ObjectClass *)v9) /*0x508d30*/
            && BuildingClass::GetPowerOutput(v16, a2) > 0 )
          {
            v18 = 1; /*0x508d32*/
          }
          goto LABEL_22; /*0x508d32*/
        }
        if ( v9->? || *(_DWORD *)&dword_A8B238 ) /*0x508cf0*/
          goto LABEL_19; /*0x508cf0*/
      }
LABEL_22:
      ++v8; /*0x508d37*/
    }
    while ( v8 < v22 ); /*0x508ca5*/
  }
  *(_BYTE *)(v4 + 22395) = v18; /*0x508d45*/
  v10 = *(_DWORD *)(v4 + 676); /*0x508d50*/
  v11 = *(_DWORD *)(v4 + 684); /*0x508d56*/
  if ( v10 != -1 ) /*0x508d5f*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v10 >= v11 ) /*0x508d6b*/
      goto LABEL_27; /*0x508d6b*/
    v11 -= *(_DWORD *)&stru_A8EB00.?[416] - v10; /*0x508d6d*/
  }
  if ( v11 ) /*0x508d71*/
  {
LABEL_28:
    *(_DWORD *)(v4 + 21412) = 0; /*0x508d79*/
    goto LABEL_29; /*0x508d79*/
  }
LABEL_27:
  if ( v18 ) /*0x508d77*/
    goto LABEL_28; /*0x508d77*/
LABEL_29:
  nullsub_5(v17); /*0x508d7f*/
  HouseClass::UpdateTeamProductionSpeed((HouseClass *)v4); /*0x508d88*/
  v12 = *(_DWORD *)(v4 + 21412); /*0x508d8d*/
  v13 = *(_DWORD *)(v4 + 21416); /*0x508d93*/
  v20 = v12; /*0x508d9b*/
  v23 = v13; /*0x508d9f*/
  if ( v12 >= v13 ) /*0x508da3*/
    goto LABEL_34; /*0x508da3*/
  if ( !v13 ) /*0x508da7*/
    goto LABEL_34; /*0x508da7*/
  if ( !v12 ) /*0x508dab*/
    goto LABEL_33; /*0x508dab*/
  __asm /*0x508dad*/
  {
    fild [esp+18h+var_C]
    fidiv [esp+18h+var_8]
    fcomp ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x508dc0*/
LABEL_33:
    result = 1; /*0x508dc2*/
  else
LABEL_34:
    result = 0; /*0x508dc9*/
  if ( v24 != result ) /*0x508dd7*/
    result = SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((SuperWeapon *)v4); /*0x508ddb*/
  *(_BYTE *)(v4 + 22393) = 1; /*0x508de0*/
  return result; /*0x508de7*/
}



// ==== 0x00508DF0  HouseClass::CanTogglePower  this=HouseClass  sig=csp ====
void *__thiscall HouseClass::CanTogglePower(HouseClass *this)
{
  void *result; // eax
  int v2; // eax
  int v3; // esi
  int powerOutput; // edx
  int powerDrain; // eax
  int bunkersCount; // edi
  int v7; // edx
  _DWORD *absorbersCount; // esi
  int v9; // eax
  char v10; // [esp+0h] [ebp-Ch]

  BYTE1(this->HouseClass_field_timer_B[2]) = 0; /*0x508df0*/
  result = dword_A83D4C; /*0x508df7*/
  if ( this == (HouseClass *)dword_A83D4C ) /*0x508e01*/
  {
    v2 = this->radarBlackoutTimer[2]; /*0x508e07*/
    v3 = this->radarBlackoutTimer[0]; /*0x508e10*/
    v10 = 0; /*0x508e1a*/
    if ( v3 != -1 ) /*0x508e1f*/
    {
      if ( (int)dword_A8ED84 - v3 >= v2 ) /*0x508e2b*/
        goto LABEL_6; /*0x508e2b*/
      v2 -= (int)dword_A8ED84 - v3; /*0x508e2d*/
    }
    if ( v2 ) /*0x508e31*/
    {
LABEL_30:
      LOBYTE(result) = HouseClass::updateAlliedStatus((HouseClass *)&dword_87F7E8); /*0x508f2f*/
      if ( (_BYTE)result != v10 ) /*0x508f43*/
        HouseClass::SetRadarVisibility((int)&dword_87F7E8, v10); /*0x508f4f*/
      return result; /*0x508f4f*/
    }
LABEL_6:
    if ( LOBYTE(dword_A8B230[374].ptr_C) ) /*0x508e3c*/
      goto LABEL_29; /*0x508e3c*/
    powerOutput = this->powerOutput; /*0x508e4a*/
    powerDrain = this->powerDrain; /*0x508e50*/
    if ( powerOutput >= powerDrain /*0x508e81*/
      || !powerDrain
      || powerOutput && (double)this->powerOutput / (double)this->powerDrain >= 1.0 )
    {
      bunkersCount = this->bunkersCount; /*0x508e87*/
      v7 = 0; /*0x508e8a*/
      if ( bunkersCount > 0 ) /*0x508e8e*/
      {
        absorbersCount = (_DWORD *)this->absorbersCount; /*0x508e94*/
        while ( 1 ) /*0x508e9d*/
        {
          v9 = *absorbersCount; /*0x508e9d*/
          if ( *absorbersCount /*0x508f06*/
            && *(_BYTE *)(v9 + 1632)
            && *(_BYTE *)(*(_DWORD *)(v9 + 1312) + 5796)
            && !*(_BYTE *)(v9 + 129)
            && *(_BYTE *)(v9 + 116)
            && (!*(_DWORD *)&dword_A8B238 && !this->currentPlayer[0] && !this->playerControl[0]
             || *(_BYTE *)(v9 + 1051)
             || *(_DWORD *)&dword_A8B238)
            && *(_DWORD *)(v9 + 172) != 19
            && *(_DWORD *)(v9 + 180) != 19 )
          {
            break; /*0x508f06*/
          }
          ++v7; /*0x508f08*/
          ++absorbersCount; /*0x508f09*/
          if ( v7 >= bunkersCount ) /*0x508f0e*/
            goto LABEL_30; /*0x508f0e*/
        }
        if ( !*(_DWORD *)(v9 + 1284) /*0x508f20*/
          && !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v9 + 468))(*absorbersCount) )
        {
LABEL_29:
          v10 = 1; /*0x508f2a*/
        }
      }
    }
    goto LABEL_30; /*0x508f2a*/
  }
  return result; /*0x508f54*/
}



// ==== 0x00508F60  HouseClass::ToggleGapGeneratorReveal  this=HouseClass  sig=csp ====
char __thiscall HouseClass::ToggleGapGeneratorReveal(HouseClass *this)
{
  int v2; // edx
  int bunkersCount; // ebp
  int *absorbersCount; // edi
  int v5; // ecx
  char result; // al

  v2 = 0; /*0x508f64*/
  BYTE1(this->HouseClass_field_timer_B[2]) = 0; /*0x508f67*/
  bunkersCount = this->bunkersCount; /*0x508f6e*/
  if ( bunkersCount <= 0 ) /*0x508f73*/
  {
LABEL_17:
    result = BYTE2(this->HouseClass_field_timer_B[2]); /*0x509002*/
    if ( result ) /*0x50900a*/
    {
      ShroudClass::Reset((ShroudClass *)&dword_87F7E8, (int)this); /*0x509012*/
      BYTE2(this->HouseClass_field_timer_B[2]) = 0; /*0x509017*/
      result = (char)dword_A83D4C; /*0x50901e*/
      if ( this == (HouseClass *)dword_A83D4C ) /*0x509025*/
        return PlayVocClass(dword_8871E0->TiberiumExplosionDamage, 0x2000, 1.0, 0); /*0x50903f*/
    }
    return result; /*0x50903f*/
  }
  absorbersCount = (int *)this->absorbersCount; /*0x508f79*/
  while ( 1 ) /*0x508f7c*/
  {
    v5 = *absorbersCount; /*0x508f7c*/
    if ( !*absorbersCount || !*(_BYTE *)(*(_DWORD *)(v5 + 1312) + 5797) || *(_BYTE *)(v5 + 129) || !*(_BYTE *)(v5 + 116) ) /*0x508f9b*/
      goto LABEL_16; /*0x508fa0*/
    if ( *(_DWORD *)&dword_A8B238 ) /*0x508fa9*/
    {
      if ( this != (HouseClass *)dword_A83D4C ) /*0x508fcc*/
        goto LABEL_14; /*0x508fcc*/
    }
    else if ( !this->currentPlayer[0] && !this->playerControl[0] ) /*0x508fbd*/
    {
      goto LABEL_14; /*0x508fbd*/
    }
    if ( !*(_BYTE *)(v5 + 1051) && !*(_DWORD *)&dword_A8B238 ) /*0x508fdf*/
      goto LABEL_16; /*0x508fdf*/
LABEL_14:
    if ( *(_DWORD *)(v5 + 172) != 19 && *(_DWORD *)(v5 + 180) != 19 ) /*0x508ff4*/
      break; /*0x508ff4*/
LABEL_16:
    ++v2; /*0x508ff6*/
    ++absorbersCount; /*0x508ff7*/
    if ( v2 >= bunkersCount ) /*0x508ffc*/
      goto LABEL_17; /*0x508ffc*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 468))(v5) ) /*0x50904a*/
    goto LABEL_17; /*0x509052*/
  result = BYTE2(this->HouseClass_field_timer_B[2]); /*0x509054*/
  if ( !result ) /*0x50905c*/
  {
    LayerClass::Reveal((LayerClass *)&dword_87F7E8, (int)this); /*0x509064*/
    BYTE2(this->HouseClass_field_timer_B[2]) = 1; /*0x509069*/
    result = (char)dword_A83D4C; /*0x509070*/
    if ( this == (HouseClass *)dword_A83D4C ) /*0x509077*/
      return PlayVocClass(dword_8871E0->ConditionYellowSparkingProbability[1], 0x2000, 1.0, 0); /*0x509090*/
  }
  return result; /*0x509044*/
}



// ==== 0x005090A0  TacticalClass::updateVisibility  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::updateVisibility(TacticalClass *this)
{
  int v1; // esi
  int *i; // edi
  int v3; // eax
  WaypointPathClass *v4; // eax

  v1 = 0; /*0x5090a2*/
  for ( i = &this->visibleCells[75]; ; ++i ) /*0x5090a4*/
  {
    v3 = *i; /*0x5090aa*/
    if ( !*i ) /*0x5090aa*/
    {
      v4 = (WaypointPathClass *)__2_YAPAXI_Z(0x40u); /*0x5090b2*/
      if ( v4 ) /*0x5090bc*/
        v3 = WaypointPathClass::Init(v4); /*0x5090c0*/
      else
        v3 = 0; /*0x5090c7*/
    }
    if ( !*(_DWORD *)(v3 + 56) ) /*0x5090c9*/
      break; /*0x5090c9*/
    if ( ++v1 >= 12 ) /*0x5090d7*/
      return -1; /*0x5090de*/
  }
  return v1; /*0x5090d9*/
}



// ==== 0x005090F0  Radar::IsRadarTargetEligible  this=Radar  sig=csp ====
bool __thiscall Radar::IsRadarTargetEligible(Radar *this)
{
  void *Radar_field_0x20C; // eax
  int v2; // eax

  Radar_field_0x20C = this->Radar_field_0x20C; /*0x5090f0*/
  if ( (unsigned int)Radar_field_0x20C >= 0xC ) /*0x5090f8*/
    return 0; /*0x50912a*/
  v2 = *((_DWORD *)this + (_DWORD)Radar_field_0x20C + 132); /*0x5090ff*/
  return *(_DWORD *)(v2 + 56) < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 144) /*0x509126*/
      && *(_DWORD *)(v2 + 36) == -1;
}



// ==== 0x00509130  HouseClass::AcquiredThreatNode  this=HouseClass  sig=csp ====
void __thiscall HouseClass::AcquiredThreatNode(HouseClass *this)
{
  this->hasThreatNode = 1; /*0x509130*/
}



// ==== 0x00509140  HouseClass::UpdateProduction  this=AbstractClass  sig=csp ====
int __thiscall HouseClass_UpdateProduction(int this, int a2, int a3, int a4)
{
  int result; // eax
  int v6; // esi
  int i; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax

  result = a2 - 3; /*0x509145*/
  switch ( a2 ) /*0x509161*/
  {
    case 3: /*0x509161*/
      v6 = *(_DWORD *)(this + 21420); /*0x50919b*/
      goto LABEL_10; /*0x50919b*/
    case 7: /*0x509161*/
      if ( a4 == 5 ) /*0x50916d*/
        v6 = *(_DWORD *)(this + 21452); /*0x50916f*/
      else
        v6 = *(_DWORD *)(this + 21436); /*0x509177*/
      goto LABEL_10; /*0x509175*/
    case 16: /*0x509161*/
      v6 = *(_DWORD *)(this + 21424); /*0x509193*/
      goto LABEL_10; /*0x509199*/
    case 40: /*0x509161*/
      if ( (_BYTE)a3 ) /*0x509181*/
        v6 = *(_DWORD *)(this + 21432); /*0x509183*/
      else
        v6 = *(_DWORD *)(this + 21428); /*0x50918b*/
LABEL_10:
      if ( v6 ) /*0x5091a3*/
      {
        for ( i = *(_DWORD *)(v6 + 80) - 1; i >= 0; --i ) /*0x5091ae*/
        {
          v8 = *(_DWORD *)(*(_DWORD *)(v6 + 68) + 4 * i); /*0x5091b8*/
          if ( !(*(int (__thiscall **)(int, int, _DWORD, int, int))(*(_DWORD *)v8 + 148))(v8, 1, 0, 1, this) ) /*0x5091bf*/
          {
            v9 = *(_DWORD *)(v6 + 80); /*0x5091c9*/
            if ( i < v9 ) /*0x5091ce*/
            {
              v10 = v9 - 1; /*0x5091d0*/
              v11 = i; /*0x5091d3*/
              for ( *(_DWORD *)(v6 + 80) = v10; /*0x5091da*/
                    v11 < *(_DWORD *)(v6 + 80);
                    *(_DWORD *)(*(_DWORD *)(v6 + 68) + 4 * v11 - 4) = *(_DWORD *)(*(_DWORD *)(v6 + 68) + 4 * v11) )
              {
                ++v11; /*0x5091df*/
              }
            }
          }
        }
        v12 = *(_DWORD *)(v6 + 88); /*0x5091f1*/
        if ( v12 ) /*0x5091f7*/
        {
          v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 132))(v12); /*0x5091ff*/
          if ( (*(int (__thiscall **)(int, int, _DWORD, int, int))(*(_DWORD *)v13 + 148))(v13, 1, 0, 1, this) ) /*0x509210*/
          {
            v14 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v6 + 88) + 132))(*(_DWORD *)(v6 + 88)); /*0x50922f*/
            if ( (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v14 + 148))(v14, 1, 1, 1, this) ) /*0x509240*/
            {
              if ( *(_BYTE *)(v6 + 112) && !*(_BYTE *)(v6 + 113) ) /*0x50927c*/
                ProductionClass::StartTimer(0); /*0x509287*/
            }
            else
            {
              FactoryClass::StartProduction(0); /*0x50924d*/
              if ( dword_A83D4C == (#375 *)this ) /*0x509258*/
              {
                v15 = globalHelper_0ABCD0(a3); /*0x509263*/
                Sidebar::ActivateTab((int)&dword_87F7E8, v15); /*0x50926e*/
              }
            }
          }
          else
          {
            BuildingClass::AbandonProduction(v6); /*0x50921c*/
            FactoryClass::StartProduction_2(v6); /*0x509223*/
          }
        }
        result = *(_DWORD *)(v6 + 88); /*0x50928c*/
        if ( !result ) /*0x509291*/
        {
          result = *(_DWORD *)(v6 + 80); /*0x509293*/
          if ( !result ) /*0x509298*/
            result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 32))(v6, 1); /*0x5092a0*/
        }
      }
      break; /*0x5092a0*/
    default:
      return result;
  }
  return result; /*0x5092a3*/
}



// ==== 0x005092F0  ObjectClass::method_5092F0  this=ObjectClass  sig=csp ====
int __thiscall sub_5092F0(TechnoClass *this, int a2)
{
  int result; // eax
  int i; // edi
  int *v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8[3]; // [esp+8h] [ebp-Ch] BYREF

  result = a2; /*0x5092f0*/
  *((_DWORD *)this + 5433) |= 1 << *(_DWORD *)(*(_DWORD *)(a2 + 52) + 184); /*0x509313*/
  if ( (Object *)a2 == dword_A83D4C ) /*0x509321*/
  {
    for ( i = 0; i < dword_A8EC88; ++i ) /*0x509330*/
    {
      v5 = (int *)*((_DWORD *)dword_A8EC7C + i); /*0x509337*/
      if ( v5 && !*((_BYTE *)v5 + 129) && (TechnoClass *)v5[135] == this ) /*0x50934e*/
      {
        v8[0] = v5[39]; /*0x509360*/
        v8[1] = v5[40]; /*0x50936a*/
        v6 = *v5; /*0x50936e*/
        v8[2] = v5[41]; /*0x509373*/
        v7 = (*(int (__thiscall **)(int *))(v6 + 132))(v5); /*0x509377*/
        MapClass::RevealArea0((MapClass *)&dword_87F7E8, v8, *(_DWORD *)(v7 + 1512), this, 0, 0, 0, 1, 1); /*0x50938e*/
      }
    }
    return MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 2); /*0x5093a4*/
  }
  return result; /*0x5093a9*/
}



// ==== 0x005093C0  ObjectClass::method_5093C0  this=ObjectClass  sig=csp ====
int __thiscall sub_5093C0(ObjectClass *this, int a2)
{
  int v2; // esi
  int result; // eax
  _DWORD *i; // edx

  v2 = *((_DWORD *)this + 5509); /*0x5093c2*/
  result = 0; /*0x5093c8*/
  if ( v2 > 0 ) /*0x5093cd*/
  {
    for ( i = (_DWORD *)*((_DWORD *)this + 5506); *i != a2; i += 2 ) /*0x5093d9*/
    {
      if ( ++result >= v2 ) /*0x5093e5*/
        return result; /*0x5093e5*/
    }
    return UpdateHouseClassAnger( /*0x5093f5*/
             (unsigned int)this,
             (int)i,
             -*(_DWORD *)(*((_DWORD *)this + 5506) + 8 * result + 4),
             a2);
  }
  return result; /*0x5093e7*/
}



// ==== 0x00509400  HouseClass::UpdateFogVisibility  this=HouseClass  sig=csp ====
int __thiscall HouseClass::UpdateFogVisibility(HouseClass *this)
{
  int result; // eax
  __int16 *v3; // esi
  int v4; // ebp
  int v5; // eax
  HouseClass *v6; // esi
  char currentPlayer; // cl
  int relatedTagsCount; // ecx
  int v9; // esi
  int v10; // edi
  int v11; // edx
  int v12; // ecx
  bool v13; // sf
  int *v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // edi
  int v19; // edx
  int v20; // ecx
  int *v21; // ecx
  int i; // [esp+8h] [ebp-4h]

  memset(&this->threatPosed_estimates_padding[1], 0, 0x10810u); /*0x509412*/
  result = *(_DWORD *)&stru_A8EB00.?[164] - 1; /*0x509419*/
  for ( i = *(_DWORD *)&stru_A8EB00.?[164] - 1; i >= 0; --i ) /*0x509420*/
  {
    v3 = *(__int16 **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * result); /*0x50942e*/
    if ( !*((_BYTE *)v3 + 129) ) /*0x509431*/
    {
      if ( *((_BYTE *)v3 + 144) ) /*0x50943f*/
      {
        v4 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v3 + 704))(v3); /*0x509457*/
        if ( v4 > 0 ) /*0x50945b*/
        {
          if ( ((*(int (__thiscall **)(__int16 *))(*(_DWORD *)v3 + 44))(v3) == 15 /*0x50948b*/
             || (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v3 + 44))(v3) == 1
             || (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v3 + 44))(v3) == 2)
            && v3 )
          {
            if ( v3[686] != *(_WORD *)&stru_A8EB00.?[948] || v3[687] != *(_WORD *)&stru_A8EB00.?[950] ) /*0x5094b2*/
            {
              v5 = Cell::PosToLinearIndex(v3 + 686); /*0x5094be*/
              v6 = (HouseClass *)*((_DWORD *)v3 + 135); /*0x5094c3*/
              if ( v6 != this ) /*0x5094cb*/
              {
                currentPlayer = this->currentPlayer; /*0x5094d9*/
                if ( !*(_DWORD *)&dword_A8B238 ) /*0x5094df*/
                  currentPlayer = currentPlayer || this->playerControl; /*0x5094f3*/
                if ( !currentPlayer /*0x50952c*/
                  || !v6
                  || v6 != this
                  && (relatedTagsCount = v6->relatedTagsCount, relatedTagsCount != this->relatedTagsCount)
                  && (relatedTagsCount == -1 || (this->HouseClass_field_timer_D[0] & (1 << relatedTagsCount)) == 0) )
                {
                  v9 = 0; /*0x509532*/
                  v10 = 9; /*0x509534*/
                  do /*0x509565*/
                  {
                    v11 = v4 >> dword_8243EC[v9]; /*0x509541*/
                    v12 = v5 + dword_8243C8[v9]; /*0x509549*/
                    v13 = v11 + this->threatPosed_estimates_padding[v12 + 1] < 0; /*0x50954b*/
                    this->threatPosed_estimates_padding[v12 + 1] += v11; /*0x50954b*/
                    v14 = &this->threatPosed_estimates_padding[v12 + 1]; /*0x509552*/
                    if ( v13 ) /*0x509559*/
                      *v14 = 0; /*0x50955b*/
                    ++v9; /*0x509561*/
                    --v10; /*0x509564*/
                  }
                  while ( v10 ); /*0x509565*/
                }
              }
            }
          }
          else
          {
            v15 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v3 + 444))(v3); /*0x50956d*/
            v16 = Cell::PosToLinearIndex((__int16 *)(v15 + 36)); /*0x50957c*/
            v17 = 0; /*0x509581*/
            v18 = 9; /*0x509583*/
            do /*0x5095b4*/
            {
              v19 = v4 >> dword_8243EC[v17]; /*0x509590*/
              v20 = v16 + dword_8243C8[v17]; /*0x509598*/
              v13 = v19 + this->threatPosed_estimates_padding[v20 + 1] < 0; /*0x50959a*/
              this->threatPosed_estimates_padding[v20 + 1] += v19; /*0x50959a*/
              v21 = &this->threatPosed_estimates_padding[v20 + 1]; /*0x5095a1*/
              if ( v13 ) /*0x5095a8*/
                *v21 = 0; /*0x5095aa*/
              ++v17; /*0x5095b0*/
              --v18; /*0x5095b3*/
            }
            while ( v18 ); /*0x5095b4*/
          }
        }
      }
    }
    result = i - 1; /*0x5095ba*/
  }
  return result; /*0x5095c7*/
}



// ==== 0x005095D0  TeamClass::CountActiveTeamsForType  this=TeamClass  sig=csp ====
int __thiscall TeamClass::CountActiveTeamsForType(TeamClass *this, int a2)
{
  int result; // eax
  WaveClass *waveEffect; // edi
  void **v4; // esi
  TeamClass **v5; // edx

  result = 0; /*0x5095d6*/
  if ( (int)FootClass_Array.?[-1].Cells + 3 >= 0 ) /*0x5095db*/
  {
    waveEffect = FootClass_Array.?; /*0x5095ea*/
    v4 = &FootClass_Array.?->ObjectClass + (int)FootClass_Array.?[-1].Cells + 3; /*0x5095ed*/
    do /*0x509605*/
    {
      v5 = (TeamClass **)*v4; /*0x5095f0*/
      if ( *v4 && v5[11] == this && (TeamClass *)a2 == v5[9] ) /*0x5095fe*/
        ++result; /*0x509600*/
      --v4; /*0x509601*/
      waveEffect = (WaveClass *)((char *)waveEffect - 1); /*0x509604*/
    }
    while ( waveEffect ); /*0x509605*/
  }
  return result; /*0x50960a*/
}



// ==== 0x00509610  TriggerClass::ValidateTeamTriggerConditions  this=TriggerClass  sig=csp ====
char __thiscall TriggerClass::ValidateTeamTriggerConditions(TriggerClass *this, int a2)
{
  int v2; // esi
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  TriggerClass **v7; // esi
  bool v8; // cc
  int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h]

  v2 = a2; /*0x509616*/
  if ( !a2 ) /*0x50961f*/
    return 0; /*0x50961f*/
  v4 = *(_DWORD *)(a2 + 228); /*0x509625*/
  if ( !v4 ) /*0x50962d*/
    return 0; /*0x5096f1*/
  v11 = 0; /*0x509639*/
  if ( *(int *)(v4 + 156) > 0 ) /*0x509643*/
  {
    v10 = 168; /*0x509649*/
    do /*0x509655*/
    {
      v5 = *(_DWORD *)(v10 + v4); /*0x509655*/
      if ( !v5 /*0x509667*/
        || !(*(int (__thiscall **)(int, int, int, _DWORD, TriggerClass *))(*(_DWORD *)v5 + 148))(v5, 1, 1, 0, this) )
      {
        if ( *(_DWORD *)&dword_A8B238 ) /*0x509678*/
          return 0; /*0x509678*/
        v6 = FootClass_Array.? - 1; /*0x50967f*/
        if ( FootClass_Array.? - 1 < 0 ) /*0x509684*/
          return 0; /*0x509684*/
        while ( 1 ) /*0x50968c*/
        {
          v7 = (TriggerClass **)*((_DWORD *)FootClass_Array.? + v6); /*0x50968c*/
          if ( v7[135] == this /*0x5096ab*/
            && v5 == ((int (__thiscall *)(_DWORD))(*v7)[1].timer[2])(*((_DWORD *)FootClass_Array.? + v6))
            && TriggerClass::EvaluateObjectForTrigger(a2, (int)v7, (int)this) )
          {
            break; /*0x5096ab*/
          }
          if ( --v6 < 0 ) /*0x5096b5*/
            return 0; /*0x5096b5*/
        }
        v2 = a2; /*0x5096b9*/
      }
      v4 = *(_DWORD *)(v2 + 228); /*0x5096bd*/
      v8 = ++v11 < *(_DWORD *)(v4 + 156); /*0x5096d5*/
      v10 += 8; /*0x5096db*/
    }
    while ( v8 ); /*0x509655*/
  }
  return 1; /*0x5096e5*/
}



// ==== 0x00509700  HouseClass::UpdateBuildState  this=HouseClass  sig=csp ====
char __thiscall HouseClass_UpdateBuildState(int this, int a2)
{
  int v3; // eax
  _DWORD *v4; // ecx
  char v5; // bl
  int v6; // edi
  int v7; // edi

  LOBYTE(v3) = *(_BYTE *)(this + 492); /*0x50970b*/
  if ( !dword_A8B238[0] ) /*0x509713*/
    LOBYTE(v3) = (_BYTE)v3 || *(_BYTE *)(this + 493); /*0x509727*/
  if ( (_BYTE)v3 || !dword_A8B238[0] ) /*0x509733*/
    return v3; /*0x509733*/
  v3 = *(_DWORD *)(this + 484); /*0x509739*/
  switch ( v3 ) /*0x509748*/
  {
    case 0: /*0x509748*/
      v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(this + 36) + 24))(this + 36); /*0x5098b2*/
      if ( v3 < *((_DWORD *)dword_8871E0 + 1216) ) /*0x5098c1*/
      {
        v3 = (a2 == 6) + 1; /*0x5098cf*/
        *(_DWORD *)(this + 484) = v3; /*0x5098d0*/
      }
      return v3; /*0x5098d0*/
    case 1: /*0x509748*/
      v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(this + 36) + 24))(this + 36); /*0x509756*/
      if ( v3 >= *((_DWORD *)dword_8871E0 + 1216) ) /*0x509765*/
        goto LABEL_34; /*0x509765*/
      if ( a2 == 6 ) /*0x509770*/
        *(_DWORD *)(this + 484) = 2; /*0x509776*/
      return v3; /*0x509783*/
    case 2: /*0x509748*/
      v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(this + 36) + 24))(this + 36); /*0x50978d*/
      v4 = dword_8871E0; /*0x509790*/
      if ( v3 >= *((_DWORD *)dword_8871E0 + 1216) ) /*0x50979c*/
        goto LABEL_34; /*0x50979c*/
      v5 = 0; /*0x5097a8*/
      v6 = 0; /*0x5097aa*/
      if ( *((int *)dword_8871E0 + 580) <= 0 ) /*0x5097ae*/
        goto LABEL_20; /*0x5097ae*/
      break; /*0x5097ae*/
    case 3: /*0x509748*/
      v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(this + 36) + 24))(this + 36); /*0x50988a*/
      if ( v3 > *((_DWORD *)dword_8871E0 + 1216) ) /*0x509899*/
LABEL_34:
        *(_DWORD *)(this + 484) = 0; /*0x50989b*/
      return v3; /*0x5098a8*/
    default:
      return v3;
  }
  do /*0x5097ec*/
  {
    if ( !v5 ) /*0x5097b2*/
    {
      if ( DynamicVector::GetOrGrow((_DWORD *)(this + 21840), *(_DWORD *)(*(_DWORD *)(v4[577] + 4 * v6) + 3576)) <= 0 ) /*0x5097d1*/
      {
        v4 = dword_8871E0; /*0x5097d3*/
        goto LABEL_19; /*0x5097d9*/
      }
      v4 = dword_8871E0; /*0x5097db*/
    }
    v5 = 1; /*0x5097e1*/
LABEL_19:
    ++v6; /*0x5097e3*/
  }
  while ( v6 < v4[580] ); /*0x5097ec*/
LABEL_20:
  LOBYTE(v3) = 0; /*0x5097ee*/
  v7 = 0; /*0x5097f6*/
  if ( (int)v4[594] <= 0 ) /*0x5097fa*/
  {
LABEL_31:
    if ( a2 != 6 ) /*0x509871*/
      *(_DWORD *)(this + 484) = 1; /*0x509873*/
    return v3; /*0x509880*/
  }
  while ( 2 ) /*0x5097fe*/
  {
    if ( !(_BYTE)v3 ) /*0x5097fe*/
    {
      if ( DynamicVector::GetOrGrow((_DWORD *)(this + 21840), *(_DWORD *)(*(_DWORD *)(v4[591] + 4 * v7) + 3576)) <= 0 ) /*0x50981d*/
      {
        v4 = dword_8871E0; /*0x50981f*/
        LOBYTE(v3) = 0; /*0x509825*/
        goto LABEL_26; /*0x509827*/
      }
      v4 = dword_8871E0; /*0x509829*/
    }
    LOBYTE(v3) = 1; /*0x50982f*/
LABEL_26:
    if ( ++v7 < v4[594] ) /*0x50983a*/
      continue; /*0x50983a*/
    break;
  }
  if ( !(_BYTE)v3 ) /*0x50983e*/
    goto LABEL_31; /*0x50983e*/
  if ( !v5 ) /*0x509842*/
    goto LABEL_31; /*0x509842*/
  v3 = *(_DWORD *)(this + 21412); /*0x50984a*/
  if ( *(_DWORD *)(this + 21416) > v3 ) /*0x509852*/
    goto LABEL_31; /*0x509852*/
  v3 = Random::Range((_DWORD *)dword_A8B230 + 134, 0, 1); /*0x509863*/
  if ( !v3 ) /*0x50986a*/
    goto LABEL_31; /*0x50986a*/
  return v3; /*0x509780*/
}



// ==== 0x005098F0  HouseClass::UpdateAITryFireSW  this=HouseClass  sig=csp ====
char __thiscall HouseClass::UpdateAITryFireSW(HouseClass *this)
{
  int lastBuiltInfantryType; // eax
  int i; // edi
  int v4; // eax
  bool v5; // zf
  int v6; // eax
  int *v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp+8h] [ebp-10h] BYREF
  int v12; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h] BYREF

  LOBYTE(lastBuiltInfantryType) = this->currentPlayer; /*0x5098fe*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x509904*/
    LOBYTE(lastBuiltInfantryType) = (_BYTE)lastBuiltInfantryType || this->playerControl; /*0x509918*/
  if ( !(_BYTE)lastBuiltInfantryType )
  {
    lastBuiltInfantryType = this->lastBuiltInfantryType; /*0x509922*/
    for ( i = 0; i < lastBuiltInfantryType; ++i )
    {
      v4 = *(_DWORD *)(this->supersCount + 4 * i); /*0x509939*/
      if ( v4 && *(_BYTE *)(v4 + 111) )
      {
        switch ( *(_DWORD *)(*(_DWORD *)(v4 + 40) + 180) )
        {
          case 0:
            v12 = *(_DWORD *)(this->supersCount + 4 * i); /*0x509968*/
            if ( this->enemyHouseIndex != -1 )
            {
              v5 = LOWORD(this->preferredTargetCell[0]) == *(_WORD *)&stru_A8EB00.?[948]; /*0x509980*/
              v11 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x509987*/
              if ( v5 && HIWORD(this->preferredTargetCell[0]) == *(_WORD *)&stru_A8EB00.?[950] )
              {
                v7 = this->preferredTargetType == 1
                   ? HouseClass::FindSWBuilding(this, &v13)
                   : HouseClass::FindSWTarget(this, &v14, this->preferredTargetType);
                v6 = *v7; /*0x5099cb*/
              }
              else
              {
                v6 = this->preferredTargetCell[0]; /*0x50999d*/
              }
              v11 = v6; /*0x5099d4*/
              if ( v6 != *(_DWORD *)&stru_A8EB00.?[948] ) /*0x5099d8*/
                goto LABEL_33; /*0x5099d8*/
            }
            break; /*0x5099d8*/
          case 2:
            HouseClass::Fire_LightningStorm((int)this, *(_DWORD *)(this->supersCount + 4 * i)); /*0x509a0d*/
            break; /*0x509a12*/
          case 5:
          case 6:
          case 8:
          case 0xB:
            HouseClass::Fire_ParaDrop(this, *(_DWORD *)(this->supersCount + 4 * i)); /*0x509a34*/
            break; /*0x509a39*/
          case 7:
            HouseClass::Fire_PsyDom((int)this, *(_DWORD *)(this->supersCount + 4 * i)); /*0x509a1a*/
            break; /*0x509a1f*/
          case 9:
            HouseClass::Fire_GenMutator((int)this, *(_DWORD *)(this->supersCount + 4 * i)); /*0x509a27*/
            break; /*0x509a2c*/
          case 0xA:
            v5 = LOWORD(this->preferredDefensiveCell2[0]) == *(_WORD *)&stru_A8EB00.?[948]; /*0x509a4b*/
            v12 = *(_DWORD *)(this->supersCount + 4 * i); /*0x509a52*/
            v11 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x509a56*/
            if ( !v5 || HIWORD(this->preferredDefensiveCell2[0]) != *(_WORD *)&stru_A8EB00.?[950] ) /*0x509a63*/
            {
              v8 = this->preferredDefensiveCell2[0]; /*0x509a65*/
              goto LABEL_32; /*0x509a6b*/
            }
            if ( (LOWORD(this->preferredDefensiveCell[0]) != *(_WORD *)&stru_A8EB00.?[948] /*0x509a99*/
               || HIWORD(this->preferredDefensiveCell[0]) != *(_WORD *)&stru_A8EB00.?[950])
              && *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3808)
               + this->preferredDefensiveCellStartTime > *(int *)&stru_A8EB00.?[416] )
            {
              v8 = this->preferredDefensiveCell[0]; /*0x509a9b*/
LABEL_32:
              v11 = v8; /*0x509aa1*/
              if ( v8 != *(_DWORD *)&stru_A8EB00.?[948] ) /*0x509aa8*/
              {
LABEL_33:
                v9 = (*(int (__thiscall **)(int *, int *))(this->supers[0] + 16))(this->supers, &v12); /*0x509aca*/
                SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)this, v9, (int)&v11); /*0x509acd*/
              }
              break; /*0x509acd*/
            }
            break; /*0x509acd*/
          default:
            break;
        }
      }
      lastBuiltInfantryType = this->lastBuiltInfantryType; /*0x509ad2*/
    }
  }
  return lastBuiltInfantryType; /*0x509ae2*/
}



// ==== 0x00509B20  HouseClass::Find  this=HouseClass  sig=csp ====
void __thiscall HouseClass::Find(HouseClass *this, char a2)
{
  bool v3; // zf
  int v4; // eax
  int *SWBuilding; // eax
  int v6; // eax
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF

  if ( this->enemyHouseIndex != -1 ) /*0x509b2d*/
  {
    v3 = LOWORD(this->preferredTargetCell[0]) == *(_WORD *)&stru_A8EB00.?[948]; /*0x509b38*/
    v7 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x509b3f*/
    if ( v3 && HIWORD(this->preferredTargetCell[0]) == *(_WORD *)&stru_A8EB00.?[950] ) /*0x509b53*/
    {
      if ( this->preferredTargetType == 1 ) /*0x509b66*/
        SWBuilding = HouseClass::FindSWBuilding(this, &v8); /*0x509b6f*/
      else
        SWBuilding = HouseClass::FindSWTarget(this, &v8, this->preferredTargetType); /*0x509b7e*/
      v4 = *SWBuilding; /*0x509b83*/
    }
    else
    {
      v4 = this->preferredTargetCell[0]; /*0x509b55*/
    }
    v7 = v4; /*0x509b8c*/
    if ( v4 != *(_DWORD *)&stru_A8EB00.?[948] ) /*0x509b90*/
    {
      v6 = (*(int (__thiscall **)(int *, char *))(this->supers[0] + 16))(this->supers, &a2); /*0x509bb5*/
      SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)this, v6, (int)&v7); /*0x509bbb*/
    }
  }
}



// ==== 0x00509C10  HouseClass::FireStoredSW  this=HouseClass  sig=csp ====
void __thiscall HouseClass::FireStoredSW(HouseClass *this, char a2)
{
  bool v3; // zf
  int v4; // eax
  int *SWBuilding; // eax
  int v6; // eax
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF

  if ( this->enemyHouseIndex != -1 ) /*0x509c1d*/
  {
    v3 = LOWORD(this->preferredTargetCell[0]) == *(_WORD *)&stru_A8EB00.?[948]; /*0x509c28*/
    v7 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x509c2f*/
    if ( v3 && HIWORD(this->preferredTargetCell[0]) == *(_WORD *)&stru_A8EB00.?[950] ) /*0x509c43*/
    {
      if ( this->preferredTargetType == 1 ) /*0x509c56*/
        SWBuilding = HouseClass::FindSWBuilding(this, &v8); /*0x509c5f*/
      else
        SWBuilding = HouseClass::FindSWTarget(this, &v8, this->preferredTargetType); /*0x509c6e*/
      v4 = *SWBuilding; /*0x509c73*/
    }
    else
    {
      v4 = this->preferredTargetCell[0]; /*0x509c45*/
    }
    v7 = v4; /*0x509c7c*/
    if ( v4 != *(_DWORD *)&stru_A8EB00.?[948] ) /*0x509c80*/
    {
      v6 = (*(int (__thiscall **)(int *, char *))(this->supers[0] + 16))(this->supers, &a2); /*0x509ca5*/
      SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)this, v6, (int)&v7); /*0x509cab*/
    }
  }
}



// ==== 0x00509CC0  nullsub_144  this=-  sig=csp ====
void __stdcall nullsub_144(int a1)
{
  ; /*0x509cc0*/
}



// ==== 0x00509CD0  HouseClass::Fire_ParaDrop  this=HouseClass  sig=csp ====
char __thiscall HouseClass::Fire_ParaDrop(HouseClass *this, char a2)
{
  HouseClass *v2; // esi
  int enemyHouseIndex; // eax
  __int16 v4; // dx
  bool v5; // zf
  int v6; // eax
  int v7; // edx
  char result; // al
  int v9; // eax
  int v10; // [esp+4h] [ebp-Ch] BYREF
  int v11; // [esp+8h] [ebp-8h] BYREF
  int v12; // [esp+Ch] [ebp-4h] BYREF

  v2 = this; /*0x509cd4*/
  enemyHouseIndex = this->enemyHouseIndex; /*0x509cd6*/
  if ( enemyHouseIndex != -1 ) /*0x509cdf*/
    this = (HouseClass *)*((_DWORD *)stru_A80220.? + enemyHouseIndex); /*0x509ce7*/
  v4 = *(_WORD *)&stru_A8EB00.?[948]; /*0x509cee*/
  v5 = LOWORD(v2->preferredTargetCell[0]) == *(_WORD *)&stru_A8EB00.?[948]; /*0x509cf5*/
  v10 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x509d03*/
  if ( v5 && HIWORD(v2->preferredTargetCell[0]) == *(_WORD *)&stru_A8EB00.?[950] ) /*0x509d10*/
  {
    if ( v2->preferredTargetType == 1 ) /*0x509d2a*/
    {
      if ( LOWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[948] /*0x509d51*/
        && HIWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[950] )
      {
        v6 = this->baseSpawnCell[0]; /*0x509d53*/
      }
      else
      {
        v6 = this->baseCenter[0]; /*0x509d5b*/
      }
      v10 = v6; /*0x509d69*/
      v11 = 0; /*0x509d90*/
      v7 = *LayerClass::Pathfinding_Find( /*0x509d9f*/
              &stru_87F5F0.__pad_58[416],
              0,
              &v12,
              (__int16 *)&v10,
              0,
              -1,
              0,
              0,
              5,
              5,
              0,
              0,
              0,
              1,
              (__int16 *)&v11,
              0,
              0);
      LOWORD(v10) = v7 + 2; /*0x509daa*/
      HIWORD(v10) = HIWORD(v7) + 2; /*0x509daf*/
    }
    else
    {
      v10 = *HouseClass::FindSWTarget(v2, &v11, v2->preferredTargetType); /*0x509d3b*/
    }
    v4 = *(_WORD *)&stru_A8EB00.?[948]; /*0x509db4*/
  }
  else
  {
    v10 = v2->preferredTargetCell[0]; /*0x509d18*/
  }
  if ( (_WORD)v10 != v4 || (result = stru_A8EB00.?[950], HIWORD(v10) != *(_WORD *)&stru_A8EB00.?[950]) ) /*0x509dcd*/
  {
    v9 = (*(int (__thiscall **)(int *, char *))(v2->supers[0] + 16))(v2->supers, &a2); /*0x509de5*/
    return SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)v2, v9, (int)&v10); /*0x509deb*/
  }
  return result; /*0x509df0*/
}



// ==== 0x00509E00  HouseClass::Fire_LightningStorm  this=HouseClass  sig=csp ====
char __thiscall HouseClass::Fire_LightningStorm(int this, char a2)
{
  char result; // al
  bool v4; // zf
  int v5; // eax
  int *SWBuilding; // eax
  int v7; // eax
  int v8; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h] BYREF

  result = LightningStorm::IsActive(); /*0x509e06*/
  if ( !result && *(_DWORD *)(this + 22016) != -1 ) /*0x509e1a*/
  {
    v4 = *(_WORD *)(this + 21744) == *(_WORD *)&stru_A8EB00.?[948]; /*0x509e25*/
    v8 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x509e2c*/
    if ( v4 && *(_WORD *)(this + 21746) == *(_WORD *)&stru_A8EB00.?[950] ) /*0x509e40*/
    {
      if ( *(_DWORD *)(this + 21740) == 1 ) /*0x509e53*/
        SWBuilding = HouseClass::FindSWBuilding((HouseClass *)this, &v9); /*0x509e5c*/
      else
        SWBuilding = HouseClass::FindSWTarget((HouseClass *)this, &v9, *(_DWORD *)(this + 21740)); /*0x509e6b*/
      v5 = *SWBuilding; /*0x509e70*/
    }
    else
    {
      v5 = *(_DWORD *)(this + 21744); /*0x509e42*/
    }
    v8 = v5; /*0x509e79*/
    if ( (_WORD)v5 != *(_WORD *)&stru_A8EB00.?[948] /*0x509e8a*/
      || (result = stru_A8EB00.?[950], HIWORD(v8) != *(_WORD *)&stru_A8EB00.?[950]) )
    {
      v7 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)(this + 596) + 16))(this + 596, &a2); /*0x509ea2*/
      return SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)this, v7, (int)&v8); /*0x509ea8*/
    }
  }
  return result; /*0x509ead*/
}



// ==== 0x00509F60  HouseClass::Fire_GenMutator  this=HouseClass  sig=csp ====
char __thiscall HouseClass::Fire_GenMutator(int this, char a2)
{
  __int16 v2; // ax
  int v4; // edi
  _BYTE *v5; // ecx
  int v6; // ebp
  char *v7; // edi
  __int16 v8; // dx
  WTFMode *v9; // eax
  _DWORD *ObjectByType; // esi
  int v11; // eax
  int v12; // ecx
  bool v13; // al
  int v14; // eax
  int v15; // eax
  __int16 v17[2]; // [esp+8h] [ebp-20h] BYREF
  int v18; // [esp+Ch] [ebp-1Ch]
  int v19; // [esp+10h] [ebp-18h]
  int v20; // [esp+14h] [ebp-14h]
  char v21[4]; // [esp+18h] [ebp-10h]
  int v22; // [esp+1Ch] [ebp-Ch]
  int v23; // [esp+20h] [ebp-8h]
  __int16 v24[2]; // [esp+24h] [ebp-4h] BYREF

  LOBYTE(v2) = stru_A8EB00.?[948]; /*0x509f63*/
  *(_DWORD *)v17 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x509f6c*/
  v19 = 0; /*0x509f70*/
  if ( *(_WORD *)(this + 21744) == *(_WORD *)&stru_A8EB00.?[948] )
  {
    v2 = *(_WORD *)(this + 21746); /*0x509f85*/
    if ( v2 == *(_WORD *)&stru_A8EB00.?[950] )
    {
      v4 = *(_DWORD *)&stru_A83D50.__pad_80[40] - 1; /*0x509f9f*/
      v23 = *(_DWORD *)&stru_A83D50.__pad_80[40] - 1; /*0x509fa4*/
      if ( *(_DWORD *)&stru_A83D50.__pad_80[40] - 1 >= 0 )
      {
        do
        {
          v18 = 0; /*0x509fb8*/
          v5 = *(_BYTE **)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * v4); /*0x509fbc*/
          if ( !v5[129] )
          {
            v21[0] = v5[140] != 0; /*0x509fdc*/
            v6 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 444))(v5); /*0x509fe9*/
            v22 = 0; /*0x509ff2*/
            v7 = &g_MissionQueueFrame.waypoints[2150]; /*0x50a000*/
            do
            {
              v8 = *(_WORD *)(v6 + 38) + *((_WORD *)v7 + 1); /*0x50a010*/
              LOWORD(v20) = *(_WORD *)v7 + *(_WORD *)(v6 + 36); /*0x50a014*/
              HIWORD(v20) = v8; /*0x50a01d*/
              *(_DWORD *)v24 = v20; /*0x50a02c*/
              v9 = (WTFMode *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x50a030*/
              ObjectByType = WTFMode::FindObjectByType(v9, v21[0]); /*0x50a041*/
              if ( ObjectByType )
              {
                do
                {
                  v11 = (*(int (__thiscall **)(_DWORD *))(*ObjectByType + 60))(ObjectByType); /*0x50a04f*/
                  if ( !v11
                    || v11 != this
                    && ((v12 = *(_DWORD *)(v11 + 48), v12 != *(_DWORD *)(this + 48))
                      ? (v12 == -1
                       ? (v13 = 0)
                       : (v13 = (*(_DWORD *)(this + 22408) & (1 << v12)) != 0))
                      : (v13 = 1),
                        !v13) )
                  {
                    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*ObjectByType + 84))(ObjectByType) ) /*0x50a08b*/
                      ++v18; /*0x50a092*/
                  }
                  ObjectByType = (_DWORD *)ObjectByType[12]; /*0x50a096*/
                }
                while ( ObjectByType && (*(int (__thiscall **)(_DWORD *))(*ObjectByType + 44))(ObjectByType) == 15 );
              }
              v7 += 4; /*0x50a0b4*/
              ++v22; /*0x50a0b9*/
            }
            while ( v22 <= 9 );
            v4 = v23; /*0x50a0c7*/
            if ( v18 > v19 ) /*0x50a0cf*/
            {
              v14 = *(_DWORD *)(v6 + 36); /*0x50a0d1*/
              v19 = v18; /*0x50a0d4*/
              *(_DWORD *)v17 = v14; /*0x50a0d8*/
            }
          }
          v23 = --v4; /*0x50a0dd*/
        }
        while ( v4 >= 0 );
        LOBYTE(v2) = v19; /*0x50a0e7*/
        if ( v19 && (v17[0] != *(_WORD *)&stru_A8EB00.?[948] || v17[1] != *(_WORD *)&stru_A8EB00.?[950]) ) /*0x50a10b*/
        {
          LOBYTE(v2) = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v17, 1); /*0x50a119*/
          if ( (_BYTE)v2 ) /*0x50a120*/
          {
            v15 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)(this + 596) + 16))(this + 596, &a2); /*0x50a138*/
            LOBYTE(v2) = SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)this, v15, (int)v17); /*0x50a13e*/
          }
        }
      }
    }
  }
  return v2; /*0x50a143*/
}



// ==== 0x0050A150  HouseClass::Fire_PsyDom  this=HouseClass  sig=csp ====
char __thiscall HouseClass::Fire_PsyDom(int this, char a2)
{
  __int16 v3; // ax
  bool v4; // zf
  int v5; // ebp
  _BYTE *v6; // ecx
  int v7; // ebx
  char *v8; // ebp
  __int16 v9; // dx
  ObjectClass *i; // eax
  TechnoClass *v11; // esi
  int v12; // eax
  int v13; // ecx
  int v15; // eax
  int v16; // eax
  __int16 v18[2]; // [esp+8h] [ebp-1Ch] BYREF
  int v19; // [esp+Ch] [ebp-18h]
  int v20; // [esp+10h] [ebp-14h]
  int v21; // [esp+14h] [ebp-10h]
  int v22; // [esp+18h] [ebp-Ch]
  int v23; // [esp+1Ch] [ebp-8h]
  __int16 v24[2]; // [esp+20h] [ebp-4h] BYREF

  LOBYTE(v3) = PsyDom::IsActive(); /*0x50a157*/
  if ( !(_BYTE)v3 && *(_DWORD *)(this + 22016) != -1 ) /*0x50a16b*/
  {
    LOBYTE(v3) = stru_A8EB00.?[948]; /*0x50a171*/
    v20 = 0; /*0x50a176*/
    v4 = *(_WORD *)(this + 21744) == *(_WORD *)&stru_A8EB00.?[948]; /*0x50a17e*/
    *(_DWORD *)v18 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50a185*/
    if ( v4 ) /*0x50a189*/
    {
      v3 = *(_WORD *)(this + 21746); /*0x50a18f*/
      if ( v3 == *(_WORD *)&stru_A8EB00.?[950] ) /*0x50a19d*/
      {
        v5 = FootClass_Array.? - 1; /*0x50a1a9*/
        v23 = FootClass_Array.? - 1; /*0x50a1ae*/
        if ( FootClass_Array.? - 1 >= 0 ) /*0x50a1b2*/
        {
          do /*0x50a2d7*/
          {
            v19 = 0; /*0x50a1c2*/
            v6 = (_BYTE *)*((_DWORD *)FootClass_Array.? + v5); /*0x50a1c6*/
            if ( !v6[129] ) /*0x50a1c9*/
            {
              v7 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 444))(v6); /*0x50a1df*/
              v22 = 0; /*0x50a1e8*/
              v8 = &g_MissionQueueFrame.waypoints[2150]; /*0x50a1f2*/
              do /*0x50a2b3*/
              {
                v9 = *(_WORD *)(v7 + 38) + *((_WORD *)v8 + 1); /*0x50a203*/
                LOWORD(v21) = *(_WORD *)(v7 + 36) + *(_WORD *)v8; /*0x50a207*/
                HIWORD(v21) = v9; /*0x50a210*/
                *(_DWORD *)v24 = v21; /*0x50a21f*/
                for ( i = (ObjectClass *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24) /*0x50a236*/
                                         + 57); i && (i->? & 4) != 0; i = v11->? )
                {
                  v11 = (TechnoClass *)i; /*0x50a238*/
                  v12 = (*((int (__thiscall **)(ObjectClass *))i->AbstractClass + 15))(i); /*0x50a242*/
                  if ( v12 ) /*0x50a247*/
                  {
                    if ( v12 == this ) /*0x50a24b*/
                      continue; /*0x50a24b*/
                    v13 = *(_DWORD *)(v12 + 48); /*0x50a24d*/
                    if ( v13 == *(_DWORD *)(this + 48) || v13 != -1 && ((1 << v13) & *(_DWORD *)(this + 22408)) != 0 ) /*0x50a26d*/
                      continue; /*0x50a276*/
                  }
                  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *))v11->RadioClass + 21))(v11) /*0x50a285*/
                    && TechnoClass::CanBePermaMC(v11) )
                  {
                    ++v19; /*0x50a28e*/
                  }
                }
                v8 += 4; /*0x50a2aa*/
                ++v22; /*0x50a2af*/
              }
              while ( v22 <= 37 ); /*0x50a2b3*/
              v5 = v23; /*0x50a2bd*/
              if ( v19 > v20 ) /*0x50a2c5*/
              {
                v15 = *(_DWORD *)(v7 + 36); /*0x50a2c7*/
                v20 = v19; /*0x50a2ca*/
                *(_DWORD *)v18 = v15; /*0x50a2ce*/
              }
            }
            v23 = --v5; /*0x50a2d3*/
          }
          while ( v5 >= 0 ); /*0x50a2d7*/
          LOBYTE(v3) = v20; /*0x50a2dd*/
          if ( v20 && (v18[0] != *(_WORD *)&stru_A8EB00.?[948] || v18[1] != *(_WORD *)&stru_A8EB00.?[950]) ) /*0x50a301*/
          {
            LOBYTE(v3) = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v18, 1); /*0x50a30f*/
            if ( (_BYTE)v3 ) /*0x50a316*/
            {
              v16 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)(this + 596) + 16))(this + 596, &a2); /*0x50a32e*/
              LOBYTE(v3) = SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)this, v16, (int)v18); /*0x50a334*/
            }
          }
        }
      }
    }
  }
  return v3; /*0x50a339*/
}



// ==== 0x0050A350  HouseClass::FireSuperWeaponAtBestTarget  this=HouseClass  sig=csp ====
char __thiscall HouseClass::FireSuperWeaponAtBestTarget(HouseClass *this, int a2)
{
  int enemyHouseIndex; // eax
  int v4; // edi
  int v5; // edx
  int v6; // ebx
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // eax
  int v13; // [esp+Ch] [ebp-1Ch]
  int v14; // [esp+Ch] [ebp-1Ch]
  int v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+14h] [ebp-14h] BYREF
  int v17; // [esp+18h] [ebp-10h] BYREF
  int v18[3]; // [esp+1Ch] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+28h] [ebp+0h] BYREF

  enemyHouseIndex = this->enemyHouseIndex; /*0x50a358*/
  if ( enemyHouseIndex != -1 ) /*0x50a361*/
  {
    v4 = 0; /*0x50a36d*/
    v15 = -1; /*0x50a36f*/
    v5 = *((_DWORD *)stru_A80220.? + enemyHouseIndex); /*0x50a377*/
    LOBYTE(enemyHouseIndex) = stru_A8EB00.ObjectTypeClass[20]; /*0x50a37a*/
    v16 = v5; /*0x50a37f*/
    v6 = stru_A8EB00.ObjectTypeClass[20] - 1; /*0x50a383*/
    if ( stru_A8EB00.ObjectTypeClass[20] - 1 >= 0 ) /*0x50a388*/
    {
      do /*0x50a41c*/
      {
        v7 = *(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * v6); /*0x50a399*/
        if ( *(_DWORD *)(v7 + 540) == v16 ) /*0x50a3a2*/
        {
          v8 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v7 + 72))(v7, v18); /*0x50a3ad*/
          LOWORD(v13) = *v8 / 256; /*0x50a3c1*/
          HIWORD(v13) = v8[1] / 256; /*0x50a3da*/
          v17 = v13; /*0x50a3e7*/
          enemyHouseIndex = CellClass::GetTileData((__int16 *)&v17, (int)this); /*0x50a3ec*/
          if ( *(_BYTE *)(v7 + 1773) == 15 ) /*0x50a3f8*/
            enemyHouseIndex = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 100); /*0x50a40a*/
          if ( enemyHouseIndex > v15 ) /*0x50a413*/
          {
            v15 = enemyHouseIndex; /*0x50a415*/
            v4 = v7; /*0x50a419*/
          }
        }
        --v6; /*0x50a41b*/
      }
      while ( v6 >= 0 ); /*0x50a41c*/
      if ( v4 ) /*0x50a425*/
      {
        v9 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 72))(v4); /*0x50a430*/
        LOWORD(v14) = *v9 / 256; /*0x50a443*/
        HIWORD(v14) = v9[1] / 256; /*0x50a45b*/
        v10 = this->supers[0]; /*0x50a464*/
        v16 = v14; /*0x50a46a*/
        v11 = (*(int (__thiscall **)(int *, _UNKNOWN **, int *))(v10 + 16))(this->supers, &retaddr, &v16); /*0x50a47a*/
        LOBYTE(enemyHouseIndex) = SuperWeapon::FireSuperWeaponHouseClass((SuperWeapon *)this, v11, (int)v18); /*0x50a480*/
      }
    }
  }
  return enemyHouseIndex; /*0x50a485*/
}



// ==== 0x0050A490  HouseClass::RecordCratePlacement  this=HouseClass  sig=csp ====
char __thiscall HouseClass::RecordCratePlacement(HouseClass *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // ebx
  int v4; // edx
  _QWORD *i; // esi
  int v6; // edi
  int v7; // esi
  int v8; // edx
  int v9; // eax
  bool v10; // zf
  int v11; // eax
  int v13; // [esp+10h] [ebp-10h]

  LOBYTE(v2) = stru_A8EB00.?[391]; /*0x50a490*/
  if ( !stru_A8EB00.?[391] ) /*0x50a49e*/
  {
    v3 = 0; /*0x50a4a8*/
    v4 = this->base[11]; /*0x50a4d4*/
    v2 = a2[40] / 256; /*0x50a4dd*/
    if ( v4 > 0 ) /*0x50a4e2*/
    {
      for ( i = (_QWORD *)this->base[8]; *i != __PAIR64__(__PAIR32__(v2, a2[39] / 256), *(_DWORD *)(a2[328] + 3576)); i += 2 ) /*0x50a4ee*/
      {
        if ( ++v3 >= v4 ) /*0x50a510*/
          return v2; /*0x50a510*/
      }
      v6 = 16 * v3; /*0x50a520*/
      v7 = 0; /*0x50a523*/
      v13 = *(_DWORD *)(this->base[8] + 16 * v3 + 4); /*0x50a52b*/
      v8 = 0; /*0x50a531*/
      do /*0x50a56c*/
      {
        if ( v3 != v7 ) /*0x50a535*/
        {
          v9 = this->base[8]; /*0x50a537*/
          v10 = *(_WORD *)(v8 + v9 + 4) == (unsigned __int16)v13; /*0x50a542*/
          v11 = v8 + v9 + 4; /*0x50a547*/
          if ( v10 && *(_WORD *)(v11 + 2) == HIWORD(v13) ) /*0x50a556*/
            *(_DWORD *)v11 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50a55e*/
        }
        ++v7; /*0x50a566*/
        v8 += 16; /*0x50a567*/
      }
      while ( v7 < this->base[11] ); /*0x50a56c*/
      v2 = a2[328]; /*0x50a572*/
      if ( *(_BYTE *)(v2 + 5894) ) /*0x50a578*/
      {
        LOBYTE(v2) = dword_A8B238; /*0x50a582*/
        if ( *(_DWORD *)&dword_A8B238 ) /*0x50a589*/
        {
          *(_DWORD *)(v6 + this->base[8]) = -1; /*0x50a591*/
          v2 = this->base[8]; /*0x50a598*/
          *(_DWORD *)(v6 + v2 + 4) = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50a5a4*/
        }
      }
    }
  }
  return v2; /*0x50a5a8*/
}



// ==== 0x0050A5C0  HouseClass::AIBuildBase  this=HouseClass  sig=csp ====
char __thiscall HouseClass::AIBuildBase(HouseClass *this)
{
  int v2; // eax
  wchar_t *StringCSF; // eax
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // esi
  int *i; // ebx
  int v10; // edx
  int v11; // eax
  _DWORD *v12; // ecx
  _DWORD *v13; // edx
  char currentPlayer; // al
  int v15; // edi
  int v16; // eax
  int v17; // ebx
  int v18; // ecx
  int v19; // esi
  int v20; // edi
  int j; // esi
  int v22; // eax
  int v23; // eax
  int k; // edi
  int v25; // ecx
  int v26; // ebx
  _BYTE *v27; // ecx
  int v28; // ecx
  int v29; // edx
  _DWORD *v30; // eax
  int v31; // eax
  _DWORD *v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // edx
  char v36; // al
  int v37; // edx
  _DWORD *v38; // edx
  int v39; // esi
  int v40; // ecx
  _DWORD *v41; // ebx
  int v42; // ebx
  int v43; // eax
  int *v44; // edi
  int v45; // edx
  int v46; // ecx
  int *v47; // esi
  int v48; // eax
  int v49; // ecx
  int v50; // edi
  int v51; // eax
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // edx
  _DWORD *v56; // edi
  int v57; // ecx
  int v58; // edx
  int v59; // esi
  int v60; // edi
  char v61; // al
  int *v62; // edi
  int v63; // eax
  bool v64; // zf
  HouseClass *v66; // [esp+1Ch] [ebp-58h]
  int v67; // [esp+2Ch] [ebp-48h]
  int v68; // [esp+2Ch] [ebp-48h]
  int v69; // [esp+2Ch] [ebp-48h]
  int v70; // [esp+30h] [ebp-44h]
  int v71; // [esp+30h] [ebp-44h]
  int v72; // [esp+30h] [ebp-44h]
  int v73; // [esp+34h] [ebp-40h]
  int v74; // [esp+34h] [ebp-40h]
  int v75; // [esp+34h] [ebp-40h]
  int v76; // [esp+38h] [ebp-3Ch]
  int v77; // [esp+38h] [ebp-3Ch]
  int v78; // [esp+3Ch] [ebp-38h]
  int v79; // [esp+3Ch] [ebp-38h]
  int bunkersCount; // [esp+3Ch] [ebp-38h]
  int v81; // [esp+3Ch] [ebp-38h]
  int v82; // [esp+3Ch] [ebp-38h]
  int v83; // [esp+40h] [ebp-34h]
  int *v84; // [esp+40h] [ebp-34h]
  int *v85; // [esp+40h] [ebp-34h]
  int v86; // [esp+40h] [ebp-34h]
  int v87; // [esp+44h] [ebp-30h]
  int v88; // [esp+44h] [ebp-30h]
  int v89; // [esp+4Ch] [ebp-28h]
  char Destination[20]; // [esp+5Ch] [ebp-18h] BYREF
  char v91; // [esp+70h] [ebp-4h]

  LOBYTE(v2) = this->currentPlayer; /*0x50a5d0*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x50a5d6*/
    LOBYTE(v2) = (_BYTE)v2 || this->playerControl; /*0x50a5ea*/
  if ( !(_BYTE)v2 ) /*0x50a5ee*/
    return v2; /*0x50a5ee*/
  this->currentPlayer = 0; /*0x50a5f4*/
  this->playerControl = 0; /*0x50a5fb*/
  this->iqLevel2 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5172); /*0x50a614*/
  if ( g_INI_Key_Computer ) /*0x50a61a*/
  {
    strncpy(Destination, g_INI_Key_Computer, 0x14u); /*0x50a62e*/
    v91 = 0; /*0x50a636*/
  }
  else
  {
    Destination[0] = (unsigned __int8)g_INI_Key_Computer; /*0x50a61c*/
  }
  if ( Destination != &this->plainName[4] ) /*0x50a647*/
  {
    qmemcpy(&this->plainName[4], Destination, 0x14u); /*0x50a652*/
    this->uiNameString[3] = v91; /*0x50a654*/
  }
  StringCSF = GetStringCSF(g_Str_TXT_COMPUTER, 0, g_Str_File_House_CPP, 13744); /*0x50a666*/
  wcscpy((wchar_t *)&this->uiName[4], StringCSF); /*0x50a673*/
  v4 = *(_DWORD *)&stru_A83D50.__pad_C8[40] - 1; /*0x50a680*/
  if ( *(_DWORD *)&stru_A83D50.__pad_C8[40] - 1 >= 0 ) /*0x50a685*/
  {
    v5 = *(_DWORD *)&stru_A83D50.__pad_C8[28]; /*0x50a687*/
    do /*0x50a6c2*/
    {
      v6 = *(_DWORD *)(v5 + 4 * v4); /*0x50a68c*/
      if ( *(HouseClass **)(v6 + 108) == this ) /*0x50a692*/
      {
        FactoryClass::StartProduction((int *)v6, 1); /*0x50a696*/
        BuildingClass::AbandonProduction(*(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * v4)); /*0x50a6a4*/
        v5 = *(_DWORD *)&stru_A83D50.__pad_C8[28]; /*0x50a6a9*/
        v7 = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * v4); /*0x50a6ae*/
        if ( v7 ) /*0x50a6b3*/
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 32))(v7, 1); /*0x50a6b9*/
          v5 = *(_DWORD *)&stru_A83D50.__pad_C8[28]; /*0x50a6bc*/
        }
      }
      --v4; /*0x50a6c1*/
    }
    while ( v4 >= 0 ); /*0x50a6c2*/
  }
  HouseClass::SetCombatPower((int *)this, 2 - *(_DWORD *)&this->__pad_13C[72]); /*0x50a6d4*/
  v2 = this->bunkersCount - 1; /*0x50a6dc*/
  v67 = v2; /*0x50a6dd*/
  if ( v2 < 0 ) /*0x50a6e1*/
    return v2; /*0x50a6e1*/
  v8 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2236); /*0x50a6f4*/
  for ( i = (int *)(this->absorbersCount + 4 * v2); ; --i ) /*0x50a6fa*/
  {
    v10 = *i; /*0x50a6fd*/
    v11 = 0; /*0x50a6ff*/
    if ( v8 > 0 ) /*0x50a703*/
    {
      v12 = *(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2224); /*0x50a711*/
      while ( *v12 != *(_DWORD *)(v10 + 1312) ) /*0x50a719*/
      {
        ++v11; /*0x50a71b*/
        ++v12; /*0x50a71c*/
        if ( v11 >= v8 ) /*0x50a721*/
          goto LABEL_26; /*0x50a721*/
      }
      LOBYTE(v2) = *(_BYTE *)(v10 + 129); /*0x50a725*/
      if ( !(_BYTE)v2 ) /*0x50a72d*/
        break; /*0x50a72d*/
    }
LABEL_26:
    LOBYTE(v2) = --v67; /*0x50a736*/
    if ( v67 < 0 ) /*0x50a73d*/
      return v2; /*0x50a73d*/
  }
  if ( !v10 ) /*0x50a749*/
    return v2; /*0x50a749*/
  v13 = (_DWORD *)(v10 + 156); /*0x50a74f*/
  LOWORD(v78) = *v13 / 256; /*0x50a76d*/
  HIWORD(v78) = v13[1] / 256; /*0x50a780*/
  this->baseSpawnCell[0] = v78; /*0x50a789*/
  if ( *(_DWORD *)&dword_A8B238 ) /*0x50a796*/
    currentPlayer = this->currentPlayer; /*0x50a7a1*/
  else
    currentPlayer = House::IsHumanPlayer((House *)this); /*0x50a79a*/
  if ( !currentPlayer && *(_DWORD *)&dword_A8B238 ) /*0x50a7b2*/
    HouseClass::CanDetect(v66); /*0x50a7b4*/
  if ( !this->base[11] ) /*0x50a7b9*/
  {
    v15 = dword_A8E7AC; /*0x50a7c3*/
    dword_A8E7AC = 0; /*0x50a7cb*/
    HouseClass::GenerateAIBuildListEnsureSanity(this); /*0x50a7d5*/
    dword_A8E7AC = v15; /*0x50a7da*/
  }
  *(_DWORD *)(this->base[8] + 4) = v78; /*0x50a7e6*/
  this->damageDelayTimer[1] = v78; /*0x50a7e9*/
  this->production = 1; /*0x50a7ef*/
  this->aiTriggersActive = 1; /*0x50a7f6*/
  this->autoBaseBuilding = 1; /*0x50a7fd*/
  v16 = this->base[11] - 1; /*0x50a80a*/
  if ( v16 >= 0 ) /*0x50a80b*/
  {
    v17 = 16 * v16; /*0x50a813*/
    v76 = this->base[11]; /*0x50a817*/
    do /*0x50a8d3*/
    {
      v18 = this->base[8]; /*0x50a81b*/
      v19 = *(_DWORD *)(v17 + v18); /*0x50a821*/
      if ( v19 >= 0 && DynamicVector::GetOrGrow((DynamicVector *)this->ownedInfantryTypes2, *(_DWORD *)(v17 + v18)) > 0 ) /*0x50a83a*/
      {
        v20 = this->bunkersCount - 1; /*0x50a849*/
        for ( j = *((_DWORD *)dword_A83C6C + v19); v20 >= 0; --v20 ) /*0x50a84d*/
        {
          v22 = *(_DWORD *)(this->absorbersCount + 4 * v20); /*0x50a852*/
          if ( !*(_BYTE *)(v22 + 129) /*0x50a87d*/
            && (*(_DWORD *)(v22 + 1312) == j
             || *(_DWORD *)(v22 + 1516) == j
             || *(_DWORD *)(v22 + 1520) == j
             || *(_DWORD *)(v22 + 1524) == j) )
          {
            LOWORD(v79) = *(_DWORD *)(v22 + 156) / 256; /*0x50a89e*/
            HIWORD(v79) = *(_DWORD *)(v22 + 160) / 256; /*0x50a8b1*/
            *(_DWORD *)(v17 + this->base[8] + 4) = v79; /*0x50a8c0*/
          }
        }
      }
      v17 -= 16; /*0x50a8cb*/
      --v76; /*0x50a8cf*/
    }
    while ( v76 ); /*0x50a8d3*/
  }
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x50a8de*/
  v23 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x50a8e8*/
  for ( k = 0; v23; v23 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) ) /*0x50a8f1*/
  {
    if ( *(_DWORD *)(v23 + 80) == this->relatedTagsCount ) /*0x50a8fb*/
    {
      v25 = *(_DWORD *)(v23 + 68); /*0x50a8fd*/
      if ( v25 != -1 ) /*0x50a903*/
      {
        if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v25) + 680) ) /*0x50a90e*/
          BuildingClass::Capture((BuildingClass *)this, (__int16 *)(v23 + 36), 1); /*0x50a920*/
      }
    }
  }
  v68 = 0; /*0x50a936*/
  bunkersCount = this->bunkersCount; /*0x50a93c*/
  if ( bunkersCount > 0 ) /*0x50a940*/
  {
    do /*0x50ab9f*/
    {
      v26 = *(_DWORD *)(this->absorbersCount + 4 * v68); /*0x50a94d*/
      if ( !*(_BYTE *)(v26 + 129) ) /*0x50a950*/
      {
        v27 = *(_BYTE **)(v26 + 1312); /*0x50a95e*/
        if ( v27[5894] /*0x50a988*/
          || v27 == *(_BYTE **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2172) && *(char *)(v26 + 1794) > 0 )
        {
          if ( (*(int (__thiscall **)(_BYTE *, int, _DWORD, int, HouseClass *))(*(_DWORD *)v27 + 148))( /*0x50a997*/
                 v27,
                 1,
                 0,
                 1,
                 this) )
          {
            v28 = this->base[11]; /*0x50a9a5*/
            if ( k < v28 ) /*0x50a9ad*/
            {
              v29 = this->base[8]; /*0x50a9b3*/
              v30 = (_DWORD *)(v29 + 16 * k); /*0x50a9be*/
              while ( *v30 != -1 ) /*0x50a9c3*/
              {
                ++k; /*0x50a9c5*/
                v30 += 4; /*0x50a9c6*/
                if ( k >= v28 ) /*0x50a9cb*/
                  goto LABEL_79; /*0x50a9cb*/
              }
              v31 = *(_DWORD *)(v26 + 1312); /*0x50a9d8*/
              if ( v31 == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2172) ) /*0x50a9e4*/
              {
                v32 = (_DWORD *)(v26 + 156); /*0x50a9ea*/
                Destination[8] = 0; /*0x50a9f0*/
                LOWORD(v73) = *(_DWORD *)(v26 + 156) / 256; /*0x50aa13*/
                HIWORD(v73) = *(_DWORD *)(v26 + 160) / 256; /*0x50aa2c*/
                v33 = this->base[11]; /*0x50aa45*/
                *(_DWORD *)Destination = *(_DWORD *)(*(_DWORD *)(v26 + 4 * *(char *)(v26 + 1794) + 1512) + 3576); /*0x50aa48*/
                v34 = this->base[9]; /*0x50aa4c*/
                if ( v33 < v34 /*0x50aa7d*/
                  || (BYTE1(this->base[10]) || !v34)
                  && (v35 = this->base[12], v35 > 0)
                  && (v36 = (*(int (__thiscall **)(int *, int, _DWORD))(this->base[7] + 8))(
                              &this->base[7],
                              v35 + v34,
                              0),
                      v32 = (_DWORD *)(v26 + 156),
                      v36) )
                {
                  v37 = this->base[11]; /*0x50aa7f*/
                  if ( k < v37 - 1 ) /*0x50aa87*/
                  {
                    memcpy( /*0x50aaab*/
                      (void *)(this->base[8] + 16 * (k + 2)),
                      (const void *)(this->base[8] + 16 * (k + 1)),
                      16 * (v37 + 0xFFFFFFF * (k + 1)));
                    v32 = (_DWORD *)(v26 + 156); /*0x50aab0*/
                  }
                  v38 = (_DWORD *)(16 * (k + 1) + this->base[8]); /*0x50aac0*/
                  *v38 = *(_DWORD *)Destination; /*0x50aac6*/
                  v38[1] = v73; /*0x50aacc*/
                  v38[2] = *(_DWORD *)&Destination[8]; /*0x50aad3*/
                  v38[3] = 0; /*0x50aad8*/
                  ++this->base[11]; /*0x50aadf*/
                }
                v39 = 16 * k; /*0x50aaf6*/
                *(_DWORD *)(v39 + this->base[8]) = *(_DWORD *)(*(_DWORD *)(v26 + 1312) + 3576); /*0x50aaf9*/
                LOWORD(v70) = *v32 / 256; /*0x50ab14*/
                HIWORD(v70) = v32[1] / 256; /*0x50ab2d*/
                *(_DWORD *)(v39 + this->base[8] + 4) = v70; /*0x50ab36*/
                ++k; /*0x50ab3a*/
              }
              else
              {
                v40 = 16 * k; /*0x50ab45*/
                v41 = (_DWORD *)(v26 + 156); /*0x50ab48*/
                *(_DWORD *)(v40 + v29) = *(_DWORD *)(v31 + 3576); /*0x50ab4e*/
                LOWORD(v83) = *v41 / 256; /*0x50ab69*/
                HIWORD(v83) = v41[1] / 256; /*0x50ab7c*/
                *(_DWORD *)(v40 + this->base[8] + 4) = v83; /*0x50ab8b*/
              }
              ++k; /*0x50ab8f*/
            }
          }
        }
      }
LABEL_79:
      ++v68; /*0x50ab90*/
    }
    while ( v68 < bunkersCount ); /*0x50ab9f*/
  }
  v42 = 0; /*0x50aba8*/
  v71 = 0; /*0x50abac*/
  v74 = 0; /*0x50abb0*/
  v81 = this->bunkersCount; /*0x50abb4*/
  v69 = 0; /*0x50abb8*/
  if ( v81 <= 0 ) /*0x50abbc*/
    goto LABEL_103; /*0x50abbc*/
  do /*0x50adfd*/
  {
    v43 = *(_DWORD *)(this->absorbersCount + 4 * v69); /*0x50abc9*/
    v77 = v43; /*0x50abcc*/
    if ( *(_BYTE *)(v43 + 129) ) /*0x50abd0*/
      goto LABEL_102; /*0x50abd0*/
    v84 = *(int **)(v43 + 1312); /*0x50abe6*/
    if ( v84[953] >= 0 ) /*0x50abf2*/
      goto LABEL_102; /*0x50abf2*/
    v44 = (int *)(v43 + 156); /*0x50abfa*/
    if ( __PAIR32__(*(_DWORD *)(v43 + 160) / 256, *(_DWORD *)(v43 + 156) / 256) == *(_DWORD *)(this->base[8] + 20) /*0x50ac69*/
      || !(*(int (__thiscall **)(int *, int, _DWORD, int, HouseClass *))(*v84 + 148))(v84, 1, 0, 1, this)
      || v42 >= this->base[11] )
    {
      goto LABEL_102; /*0x50ac69*/
    }
    v45 = v74; /*0x50ac75*/
    v46 = v71; /*0x50ac79*/
    v47 = (int *)(this->base[8] + 16 * v42); /*0x50ac82*/
    v85 = v47; /*0x50ac84*/
    while ( *v47 < 0 ) /*0x50ac8c*/
    {
LABEL_91:
      ++v42; /*0x50acbf*/
      v47 += 4; /*0x50acc4*/
      v85 = v47; /*0x50acc9*/
      if ( v42 >= this->base[11] ) /*0x50accd*/
      {
        v74 = v45; /*0x50accf*/
        v71 = v46; /*0x50acd3*/
        goto LABEL_102; /*0x50acd7*/
      }
    }
    v89 = *((_DWORD *)dword_A83C6C + *v47); /*0x50ac97*/
    v46 += *(_DWORD *)(v89 + 3808); /*0x50aca1*/
    v45 += *(_DWORD *)(v89 + 3812); /*0x50aca9*/
    if ( v42 <= 0 || v46 >= v45 + *((_DWORD *)this + 22573) ) /*0x50acb9*/
    {
      v47 = v85; /*0x50acbb*/
      goto LABEL_91; /*0x50acbb*/
    }
    v48 = *v44; /*0x50acdc*/
    v75 = v45; /*0x50acde*/
    v72 = v46; /*0x50ace5*/
    v49 = v44[1]; /*0x50aced*/
    Destination[8] = 0; /*0x50acff*/
    LOWORD(v87) = v48 / 256; /*0x50ad07*/
    v50 = v42 - 1; /*0x50ad15*/
    HIWORD(v87) = v49 / 256; /*0x50ad1d*/
    v51 = this->base[9]; /*0x50ad2c*/
    v52 = this->base[11]; /*0x50ad35*/
    *(_DWORD *)Destination = *(_DWORD *)(*(_DWORD *)(v77 + 1312) + 3576); /*0x50ad3a*/
    if ( v52 < v51 /*0x50ad5b*/
      || (BYTE1(this->base[10]) || !v51)
      && (v53 = this->base[12], v53 > 0)
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->base[7] + 8))(&this->base[7], v53 + v51, 0) )
    {
      v54 = this->base[11]; /*0x50ad62*/
      if ( v50 < v54 - 1 ) /*0x50ad6a*/
        memcpy( /*0x50ad8e*/
          (void *)(this->base[8] + 16 * (v50 + 2)),
          (const void *)(this->base[8] + 16 * v42),
          16 * (v54 + 0xFFFFFFF * v42));
      v55 = *(_DWORD *)&Destination[8]; /*0x50ad9e*/
      v56 = (_DWORD *)(this->base[8] + 16 * v42); /*0x50ada5*/
      *v56 = *(_DWORD *)Destination; /*0x50adab*/
      v56[1] = v87; /*0x50adad*/
      v56[2] = v55; /*0x50adb2*/
      v56[3] = 0; /*0x50adb5*/
      ++this->base[11]; /*0x50adbc*/
    }
    v71 = *(_DWORD *)(*(_DWORD *)(v77 + 1312) + 3808) + v72; /*0x50ade5*/
    v74 = v75 - *(_DWORD *)(v89 + 3812); /*0x50ade9*/
    ++v42; /*0x50aded*/
LABEL_102:
    ++v69; /*0x50adee*/
  }
  while ( v69 < v81 ); /*0x50adfd*/
LABEL_103:
  v2 = _strcmpi((char *)(this->relatedTagsCapacity + 36), (char *)&off_824FC4); /*0x50ae03*/
  if ( !v2 ) /*0x50ae19*/
  {
    LOBYTE(v2) = stru_A8EB00.ObjectTypeClass[20]; /*0x50ae1f*/
    v57 = 0; /*0x50ae24*/
    v58 = 0; /*0x50ae26*/
    v59 = 0; /*0x50ae28*/
    if ( stru_A8EB00.ObjectTypeClass[20] > 0 ) /*0x50ae2c*/
    {
      v86 = stru_A8EB00.ObjectTypeClass[20]; /*0x50ae38*/
      v82 = stru_A8EB00.ObjectTypeClass[17]; /*0x50ae3c*/
      do /*0x50aef9*/
      {
        v60 = *(_DWORD *)v82; /*0x50ae44*/
        if ( *(HouseClass **)(*(_DWORD *)v82 + 540) == this /*0x50ae72*/
          && !*(_BYTE *)(v60 + 129)
          && *(_DWORD *)(v60 + 1312) == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2204) )
        {
          v61 = *(_BYTE *)(v60 + 1794); /*0x50ae74*/
          if ( v61 > 0 ) /*0x50ae7c*/
          {
            v88 = v61; /*0x50ae8b*/
            do /*0x50aee3*/
            {
              if ( v57 < this->base[11] ) /*0x50ae95*/
              {
                v62 = (int *)(this->base[8] + 16 * v57); /*0x50aea2*/
                while ( 1 ) /*0x50aea4*/
                {
                  if ( *v62 >= 0 ) /*0x50aea8*/
                  {
                    v63 = *((_DWORD *)dword_A83C6C + *v62); /*0x50aeaa*/
                    v58 += *(_DWORD *)(v63 + 3808); /*0x50aead*/
                    v59 += *(_DWORD *)(v63 + 3812); /*0x50aeb3*/
                    if ( v57 > 0 && v58 < v59 + *((_DWORD *)this + 22573) ) /*0x50aec7*/
                      break; /*0x50aec7*/
                  }
                  ++v57; /*0x50aecf*/
                  v62 += 4; /*0x50aed0*/
                  if ( v57 >= this->base[11] ) /*0x50aed5*/
                    goto LABEL_119; /*0x50aed5*/
                }
                ++v57; /*0x50aed9*/
              }
LABEL_119:
              --v88; /*0x50aeda*/
            }
            while ( v88 ); /*0x50aee3*/
          }
        }
        LOBYTE(v2) = v86 - 1; /*0x50aef0*/
        v64 = v86 == 1; /*0x50aef0*/
        v82 += 4; /*0x50aef1*/
        --v86; /*0x50aef5*/
      }
      while ( !v64 ); /*0x50aef9*/
    }
  }
  return v2; /*0x50a73f*/
}



// ==== 0x0050AF10  SuperWeapon::UpdateSuperWeaponsOwnedHouseClass  this=SuperWeapon  sig=csp ====
int __thiscall SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(SuperWeapon *this)
{
  int result; // eax
  _BYTE *v3; // eax
  char HasPower; // bl
  int v5; // eax
  BuildingClass *v6; // edi
  int *Upgrades; // ecx
  int v8; // edx
  int v9; // eax
  _BYTE *v10; // ecx
  int v11; // edx
  int v12; // eax
  int Status; // esi
  int v14; // edi
  char v15; // [esp+8h] [ebp-Eh]
  bool v16; // [esp+9h] [ebp-Dh]
  int i; // [esp+Ah] [ebp-Ch]
  int j; // [esp+Eh] [ebp-8h]
  int v19; // [esp+12h] [ebp-4h]

  LOBYTE(result) = byte_A8E9A0; /*0x50af10*/
  if ( byte_A8E9A0 ) /*0x50af1d*/
  {
    v16 = dword_A83D4C == (Object *)this; /*0x50af31*/
    result = 0; /*0x50af36*/
    for ( i = 0; i < this->q264; ++i ) /*0x50af3a*/
    {
      v3 = *(_BYTE **)(this->q258 + 4 * result); /*0x50af4d*/
      if ( !v3[109] || (!v3[96] || v3[110] && v3[109]) && !this->u8_1F5 ) /*0x50af70*/
        goto LABEL_55; /*0x50af78*/
      HasPower = 0; /*0x50af84*/
      v15 = 0; /*0x50af88*/
      if ( !this->u8_1F5 ) /*0x50af7e*/
      {
        v5 = 0; /*0x50af99*/
        for ( j = 0; v5 < stru_A8EB00.ObjectTypeClass[20]; j = ++v5 ) /*0x50afa1*/
        {
          v6 = *(BuildingClass **)(stru_A8EB00.ObjectTypeClass[17] + 4 * v5); /*0x50afad*/
          if ( !v6->? && v6->? ) /*0x50afbe*/
          {
            v19 = (*((int (__stdcall **)(void **))v6->?->? + 4))(&v6->?->?); /*0x50afe3*/
            if ( v19 == (*(int (__stdcall **)(SuperWeapon *))(this->q004 + 16))(this + 4) ) /*0x50aff0*/
            {
              Upgrades = v6->Upgrades; /*0x50aff2*/
              v8 = 3; /*0x50aff8*/
              do /*0x50b02a*/
              {
                v9 = *Upgrades; /*0x50affd*/
                if ( *Upgrades && (*(_DWORD *)(v9 + 5872) == i || *(_DWORD *)(v9 + 5876) == i) ) /*0x50b015*/
                {
                  v15 = 1; /*0x50b019*/
                  if ( !HasPower ) /*0x50b01e*/
                    HasPower = v6->HasPower; /*0x50b020*/
                }
                ++Upgrades; /*0x50b026*/
                --v8; /*0x50b029*/
              }
              while ( v8 ); /*0x50b02a*/
              if ( BuildingClass::SWAvailable(v6) == i || BuildingClass::SW2Available(v6) == i ) /*0x50b044*/
              {
                v15 = 1; /*0x50b048*/
                if ( HasPower ) /*0x50b04d*/
                  break; /*0x50b04d*/
                HasPower = v6->HasPower; /*0x50b04f*/
              }
              if ( HasPower && v15 ) /*0x50b05f*/
                break; /*0x50b05f*/
            }
            v5 = j; /*0x50b061*/
          }
        }
      }
      v10 = *(_BYTE **)(*(_DWORD *)(this->q258 + 4 * i) + 40); /*0x50b078*/
      if ( v10[231] && !stru_A8B250.__pad_0[19] ) /*0x50b099*/
        v15 = 0; /*0x50b09b*/
      v11 = this->u32_53A4; /*0x50b0a0*/
      v12 = this->u32_53A8; /*0x50b0a6*/
      if ( v11 < v12 && v12 && (!v11 || (double)*((int *)this + 5353) / (double)*((int *)this + 5354) < 1.0) ) /*0x50b0d3*/
        HasPower = 0; /*0x50b0d5*/
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v10 + 64))(v10); /*0x50b0d9*/
      Status = HouseClass::GetStatus((HouseClass *)0x39, 0); /*0x50b0ea*/
      if ( !v15 || this->u8_1F5 ) /*0x50b0f4*/
      {
        if ( !SuperClass::Lose(*(SuperClass **)(this->q258 + 4 * i)) || !dword_A83D4C ) /*0x50b179*/
          goto LABEL_55; /*0x50b179*/
        if ( !v16 ) /*0x50b181*/
          goto LABEL_54; /*0x50b181*/
        if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1438] == i ) /*0x50b18e*/
LABEL_52:
          *(_DWORD *)&stru_87F5F0.__pad_E12[1438] = -1; /*0x50b190*/
LABEL_53:
        Sidebar::ActivateTab((int *)&stru_87F5F0.__pad_58[416], Status); /*0x50b19a*/
        goto LABEL_54; /*0x50b1a0*/
      }
      if ( HasPower ) /*0x50b100*/
      {
        v14 = i; /*0x50b12e*/
      }
      else
      {
        v14 = i; /*0x50b108*/
        if ( SuperWeapon::GetField10(*(SuperWeapon **)(this->q258 + 4 * i)) /*0x50b123*/
          && (unsigned __int8)SuperClass::SetOnHold(*(_DWORD *)(this->q258 + 4 * i), 1) )
        {
          goto LABEL_45; /*0x50b12a*/
        }
      }
      if ( !HasPower || !(unsigned __int8)SuperClass::SetOnHold(*(_DWORD *)(this->q258 + 4 * v14), 0) ) /*0x50b141*/
        goto LABEL_55; /*0x50b148*/
LABEL_45:
      if ( v16 ) /*0x50b150*/
      {
        if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1438] == v14 ) /*0x50b158*/
          goto LABEL_52; /*0x50b158*/
        goto LABEL_53; /*0x50b158*/
      }
LABEL_54:
      this->q1FC = 1; /*0x50b1a5*/
LABEL_55:
      result = i + 1; /*0x50b1ac*/
    }
  }
  return result; /*0x50b1c6*/
}



// ==== 0x0050B1D0  SuperWeapon::UpdateSuperWeaponsUnavailableHouseClass  this=SuperWeapon  sig=csp ====
char __thiscall SuperWeapon::UpdateSuperWeaponsUnavailableHouseClass(SuperWeapon *this)
{
  int v2; // eax
  int i; // edi
  int v4; // eax
  int j; // ebx
  BuildingClass *v6; // esi
  int v7; // edx
  int *Upgrades; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  char v13; // al
  int v14; // ecx
  int Status; // eax
  char v17; // [esp+Bh] [ebp-9h]

  LOBYTE(v2) = this->u8_1F5; /*0x50b1d7*/
  if ( !(_BYTE)v2 ) /*0x50b1df*/
  {
    v2 = this->q264; /*0x50b1e5*/
    for ( i = 0; i < v2; ++i ) /*0x50b1ef*/
    {
      v4 = *(_DWORD *)(this->q258 + 4 * i); /*0x50b1fd*/
      if ( !*(_BYTE *)(v4 + 109) || *(_BYTE *)(v4 + 110) && *(_BYTE *)(v4 + 109) ) /*0x50b212*/
      {
        v17 = 0; /*0x50b220*/
        for ( j = this->q078 - 1; j >= 0; --j ) /*0x50b225*/
        {
          v6 = *(BuildingClass **)(this->u32_6C + 4 * j); /*0x50b22b*/
          if ( v6->? && !v6->? ) /*0x50b238*/
          {
            v7 = 0; /*0x50b242*/
            Upgrades = v6->Upgrades; /*0x50b244*/
            while ( 1 ) /*0x50b24a*/
            {
              v9 = *Upgrades; /*0x50b24a*/
              if ( *Upgrades ) /*0x50b24a*/
              {
                if ( *(_DWORD *)(v9 + 5872) == i || *(_DWORD *)(v9 + 5876) == i ) /*0x50b25e*/
                  break; /*0x50b25e*/
              }
              ++v7; /*0x50b260*/
              ++Upgrades; /*0x50b261*/
              if ( v7 >= 3 ) /*0x50b267*/
                goto LABEL_16; /*0x50b267*/
            }
            v17 = 1; /*0x50b26b*/
LABEL_16:
            if ( BuildingClass::SWAvailable(v6) == i || BuildingClass::SW2Available(v6) == i ) /*0x50b284*/
            {
              v17 = 1; /*0x50b293*/
              break; /*0x50b293*/
            }
            if ( v17 ) /*0x50b28c*/
              break; /*0x50b28c*/
          }
        }
        v10 = *(_DWORD *)(this->q258 + 4 * i); /*0x50b298*/
        if ( (!*(_BYTE *)(*(_DWORD *)(v10 + 40) + 231) || stru_A8B250.__pad_0[19]) && v17 ) /*0x50b2c1*/
        {
          v11 = this->u32_53A4; /*0x50b2c7*/
          v12 = this->u32_53A8; /*0x50b2cd*/
          v13 = v11 < v12 && v12 && (!v11 || (double)*((int *)this + 5353) / (double)*((int *)this + 5354) < 1.0); /*0x50b303*/
          SuperClass::StartTimer(v10, 0, this == (SuperWeapon *)dword_A83D4C, v13); /*0x50b314*/
          if ( this == (SuperWeapon *)dword_A83D4C ) /*0x50b31f*/
          {
            SidebarClass::AddCameo((SidebarClass *)&stru_87F5F0.__pad_58[416], 31, i); /*0x50b329*/
            v14 = *(_DWORD *)(*(_DWORD *)(this->q258 + 4 * i) + 40); /*0x50b337*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 64))(v14); /*0x50b33c*/
            Status = HouseClass::GetStatus((HouseClass *)0x39, 0); /*0x50b348*/
            Sidebar::ActivateTab((int *)&stru_87F5F0.__pad_58[416], Status); /*0x50b353*/
          }
        }
      }
      v2 = this->q264; /*0x50b358*/
    }
  }
  return v2; /*0x50b369*/
}



// ==== 0x0050B370  HouseClass::ShouldDisableCameo  this=HouseClass  sig=csp ====
char __thiscall HouseClass::ShouldDisableCameo(HouseClass *this, int a2)
{
  HouseClass *v3; // ebp
  int v4; // edx
  int v5; // ebx
  FactoryClass *primaryForShips; // edi
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int i; // ebx
  int v14; // edi
  int v15; // esi
  bool v16; // cc
  int v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // esi
  int v21; // ebx
  DynamicVector *v22; // ebp
  int v23; // ecx
  int v24; // eax
  int v26; // edi
  int v27; // eax
  int v28; // [esp-4h] [ebp-1Ch]
  int v29; // [esp-4h] [ebp-1Ch]
  int v30; // [esp-4h] [ebp-1Ch]
  int v31; // [esp+10h] [ebp-8h]
  char v33; // [esp+1Ch] [ebp+4h]
  int v34; // [esp+1Ch] [ebp+4h]
  int v35; // [esp+1Ch] [ebp+4h]

  v3 = this; /*0x50b37a*/
  if ( a2 ) /*0x50b383*/
  {
    v4 = *(_DWORD *)a2; /*0x50b38f*/
    v5 = 0; /*0x50b391*/
    v31 = 0; /*0x50b395*/
    v33 = *(_BYTE *)(a2 + 3278); /*0x50b399*/
    switch ( (*(int (__thiscall **)(int))(v4 + 44))(a2) ) /*0x50b3b2*/
    {
      case 1: /*0x50b3b2*/
      case 40: /*0x50b3b2*/
        if ( v33 ) /*0x50b444*/
          primaryForShips = v3->primaryForShips; /*0x50b446*/
        else
          primaryForShips = v3->primaryForVehicles; /*0x50b451*/
        goto LABEL_4; /*0x50b44c*/
      case 2: /*0x50b3b2*/
      case 3: /*0x50b3b2*/
        primaryForShips = v3->primaryForAircraft; /*0x50b467*/
        goto LABEL_4; /*0x50b46d*/
      case 6: /*0x50b3b2*/
      case 7: /*0x50b3b2*/
        primaryForShips = v3->primaryForBuildings; /*0x50b45c*/
        goto LABEL_4; /*0x50b462*/
      case 15: /*0x50b3b2*/
      case 16: /*0x50b3b2*/
        primaryForShips = v3->primaryForInfantry; /*0x50b3b9*/
LABEL_4:
        if ( primaryForShips ) /*0x50b3c1*/
        {
          v31 = FactoryClass::CountType(primaryForShips, a2); /*0x50b3cb*/
          v5 = v31; /*0x50b3cf*/
        }
        break; /*0x50b3cf*/
      default:
        primaryForShips = 0; /*0x50b472*/
        break; /*0x50b474*/
    }
    switch ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) ) /*0x50b3ec*/
    {
      case 3: /*0x50b3ec*/
        if ( *(_BYTE *)(a2 + 3597) ) /*0x50b570*/
        {
          v19 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x50b57a*/
          v20 = 0; /*0x50b57f*/
          v21 = 0; /*0x50b581*/
          v35 = 0; /*0x50b583*/
          if ( *(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2920) > 0 ) /*0x50b58d*/
          {
            v22 = (DynamicVector *)&v3->__pad_5564[40]; /*0x50b58f*/
            do /*0x50b5d7*/
            {
              v23 = *(_DWORD *)(*(_DWORD *)(v19 + 2908) + 4 * v20); /*0x50b59b*/
              v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 64))(v23); /*0x50b5a0*/
              v21 += DynamicVector::GetOrGrow(v22, v24); /*0x50b5ab*/
              if ( primaryForShips ) /*0x50b5af*/
                v35 += FactoryClass::CountType( /*0x50b5c7*/
                         primaryForShips,
                         *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2908) + 4 * v20));
              v19 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x50b5cb*/
              ++v20; /*0x50b5d0*/
            }
            while ( v20 < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2920) ); /*0x50b5d7*/
            v3 = this; /*0x50b5d9*/
          }
          return v21 + v35 >= v3->airportDocks; /*0x50b5eb*/
        }
        else
        {
          v26 = *(_DWORD *)(a2 + 952); /*0x50b5f9*/
          if ( v26 > 0 ) /*0x50b601*/
          {
            v30 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b63c*/
            v10 = DynamicVector::GetOrGrow((DynamicVector *)&v3->ownedAircraftTypes1[1], v30); /*0x50b643*/
            goto LABEL_46; /*0x50b643*/
          }
          v27 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b607*/
          return v5 + DynamicVector::GetOrGrow((DynamicVector *)&v3->__pad_5564[120], v27) >= (int)abs32(v26); /*0x50b623*/
        }
      case 7: /*0x50b3ec*/
        v17 = *(_DWORD *)(a2 + 952); /*0x50b525*/
        if ( v17 > 0 ) /*0x50b52d*/
        {
          v29 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b564*/
          v10 = DynamicVector::GetOrGrow((DynamicVector *)v3->ownedBuildingTypes, v29); /*0x50b56b*/
          goto LABEL_46; /*0x50b56b*/
        }
        v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b533*/
        return v5 + DynamicVector::GetOrGrow((DynamicVector *)&v3->__pad_5564[60], v18) >= (int)abs32(v17); /*0x50b54f*/
      case 16: /*0x50b3ec*/
        if ( *(int *)(a2 + 952) <= 0 ) /*0x50b481*/
        {
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b487*/
          if ( v5 + DynamicVector::GetOrGrow((DynamicVector *)&v3->__pad_5564[100], v11) >= (int)abs32(*(_DWORD *)(a2 + 952)) ) /*0x50b4a7*/
            return 1; /*0x50b4a7*/
        }
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b4b1*/
        v34 = DynamicVector::GetOrGrow((DynamicVector *)v3->ownedUnitTypes1, v12); /*0x50b4c0*/
        if ( *(_BYTE *)(a2 + 3782) ) /*0x50b4c4*/
        {
          for ( i = 0; i < FootClass_Array.?[2]; ++i ) /*0x50b4d7*/
          {
            v14 = *(_DWORD *)(FootClass_Array.? + 4 * i); /*0x50b4de*/
            if ( *(HouseClass **)(v14 + 540) == v3 /*0x50b4f6*/
              && *(_DWORD *)(v14 + 824) == (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2) )
            {
              ++v34; /*0x50b4f8*/
            }
          }
          v5 = v31; /*0x50b506*/
        }
        v15 = *(_DWORD *)(a2 + 952); /*0x50b50a*/
        if ( v15 <= 0 ) /*0x50b512*/
          return 0; /*0x50b512*/
        v16 = v5 + v34 < v15; /*0x50b51e*/
        goto LABEL_47; /*0x50b520*/
      case 40: /*0x50b3ec*/
        v8 = *(_DWORD *)(a2 + 952); /*0x50b3f3*/
        if ( v8 <= 0 ) /*0x50b3fb*/
        {
          v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b401*/
          return v5 + DynamicVector::GetOrGrow((DynamicVector *)&v3->__pad_5564[80], v9) >= (int)abs32(v8); /*0x50b41d*/
        }
        v28 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b432*/
        v10 = DynamicVector::GetOrGrow((DynamicVector *)&v3->ownedInfantryTypes[1], v28); /*0x50b439*/
LABEL_46:
        v16 = v5 + v10 < *(_DWORD *)(a2 + 952); /*0x50b648*/
LABEL_47:
        if ( v16 ) /*0x50b652*/
          return 0; /*0x50b663*/
        break; /*0x50b663*/
      default:
        return 0;
    }
  }
  return 1; /*0x50b5ed*/
}



// ==== 0x0050B6F0  House::IsHumanPlayer  this=House  sig=csp ====
int __thiscall House::IsHumanPlayer(House *this)
{
  if ( *(_DWORD *)&dword_A8B238 ) /*0x50b6f7*/
    return this == (House *)dword_A83D4C; /*0x50b720*/
  return LOBYTE(this->House_field_0x1EC) || BYTE1(this->House_field_0x1EC); /*0x50b70f*/
}



// ==== 0x0050B730  House::IsCurrentPlayer  this=House  sig=csp ====
int __thiscall House::IsCurrentPlayer(House *this)
{
  int result; // eax

  result = *(_DWORD *)&dword_A8B238; /*0x50b730*/
  LOBYTE(result) = this->House_field_0x1EC; /*0x50b737*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x50b73d*/
    LOBYTE(result) = (_BYTE)result || BYTE1(this->House_field_0x1EC); /*0x50b750*/
  return result; /*0x50b74f*/
}



// ==== 0x0050B760  BuildingTypeClass::ProcessData  this=BuildingTypeClass  sig=csp ====
char __thiscall BuildingTypeClass::ProcessData(BuildingTypeClass *this, _DWORD *a2, __int16 *a3)
{
  int *v5; // ebx
  int v6; // ebx
  int v7; // ebp
  __int16 *v8; // ecx
  int v9; // edi
  int v10; // esi
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  if ( !*(_DWORD *)&dword_A8B238 ) /*0x50b770*/
    return 1; /*0x50b77b*/
  v5 = a2; /*0x50b783*/
  v11 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5216); /*0x50b78f*/
  v12 = 2 * v11 + BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)a2); /*0x50b7a3*/
  v6 = 2 * v11 + BuildingTypeClass::GetFoundationHeight(v5, 0); /*0x50b7b1*/
  v7 = 1 << this->?; /*0x50b7b8*/
  v8 = a3; /*0x50b7ba*/
  v9 = *a3 - v11 - 1; /*0x50b7cd*/
  if ( v9 < *a3 + v12 + 1 ) /*0x50b7d0*/
  {
    while ( 1 ) /*0x50b7e2*/
    {
      v10 = v8[1] - v11 - 1; /*0x50b7e2*/
      if ( v10 < v8[1] + v6 + 1 ) /*0x50b7e5*/
        break; /*0x50b7e5*/
LABEL_8:
      if ( ++v9 >= *v8 + v12 + 1 ) /*0x50b82d*/
        return 0; /*0x50b82d*/
    }
    while ( 1 ) /*0x50b7eb*/
    {
      LOWORD(a2) = v9; /*0x50b7eb*/
      HIWORD(a2) = v10; /*0x50b7f6*/
      if ( (v7 & *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 55)) != 0 ) /*0x50b806*/
        return 1; /*0x50b806*/
      if ( ++v10 >= a3[1] + v6 + 1 ) /*0x50b81b*/
      {
        v8 = a3; /*0x50b81d*/
        goto LABEL_8; /*0x50b81d*/
      }
    }
  }
  return 0; /*0x50b772*/
}



// ==== 0x0050B840  HouseClass::GetColor  this=AbstractClass  sig=csp ====
char __thiscall HouseClass_GetColor(char *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  unsigned __int16 v6; // ax
  char result; // al
  char *v8; // esi
  __int16 v9; // [esp+4h] [ebp-4h]

  if ( *((int *)this + 22549) < 0 ) /*0x50b84c*/
    *((_DWORD *)this + 22549) = 5; /*0x50b84e*/
  v2 = *((_DWORD *)dword_B054D4 + *((_DWORD *)this + 22549)); /*0x50b863*/
  if ( !v2 ) /*0x50b868*/
  {
    Debug::Log(); /*0x50b87e*/
    *((_DWORD *)this + 22549) = 5; /*0x50b883*/
    v2 = *((_DWORD *)dword_B054D4 + 5); /*0x50b895*/
  }
  v3 = *(_DWORD *)(v2 + 816); /*0x50b898*/
  v4 = *(_DWORD *)(v2 + 780); /*0x50b89e*/
  v5 = *(_DWORD *)(v4 + 372); /*0x50b8aa*/
  if ( *(_DWORD *)(v4 + 4) == 1 ) /*0x50b8b0*/
    v6 = *(unsigned __int8 *)(v5 + v3); /*0x50b8b4*/
  else
    v6 = *(_WORD *)(v5 + 2 * v3); /*0x50b8bb*/
  LOBYTE(v9) = (unsigned __int8)(v6 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x50b8da*/
  HIBYTE(v9) = (unsigned __int8)(v6 >> g_BitMask_Green) << g_BitMask_Blue; /*0x50b8fb*/
  result = (unsigned __int8)(v6 >> g_BitShift_Blue) << g_BitMask_Red; /*0x50b8ff*/
  v8 = this + 22265; /*0x50b906*/
  *(_WORD *)v8 = v9; /*0x50b90c*/
  v8[2] = result; /*0x50b90f*/
  return result; /*0x50b912*/
}



// ==== 0x0050B920  globalHelper_00B920  this=-  sig=csp ====
void __fastcall sub_50B920(int a1, int a2, int a3)
{
  double v5; // st7
  double v6; // st6
  double v7; // st6
  double v8; // st7

  v5 = Math::Sqrt(*(double *)a1 * *(double *)a1 + *(double *)a3 * *(double *)a3 + *(double *)a2 * *(double *)a2); /*0x50b94d*/
  if ( v5 == 0.0 ) /*0x50b960*/
  {
    *(_DWORD *)a3 = 0; /*0x50b967*/
    *(_DWORD *)(a3 + 4) = 1081073664; /*0x50b96d*/
    *(_DWORD *)a2 = 0; /*0x50b970*/
    *(_DWORD *)(a2 + 4) = 1081073664; /*0x50b976*/
    *(_DWORD *)a1 = 0; /*0x50b979*/
    *(_DWORD *)(a1 + 4) = 1081073664; /*0x50b97f*/
  }
  else
  {
    v6 = *(double *)a1 * 240.0 / v5; /*0x50b997*/
    *(double *)a1 = v6; /*0x50b999*/
    if ( v6 > 255.0 ) /*0x50b9a6*/
    {
      *(_DWORD *)a1 = 0; /*0x50b9a8*/
      *(_DWORD *)(a1 + 4) = 1081073664; /*0x50b9ae*/
    }
    v7 = *(double *)a2 * 240.0 / v5; /*0x50b9b9*/
    *(double *)a2 = v7; /*0x50b9bb*/
    if ( v7 > 255.0 ) /*0x50b9c8*/
    {
      *(_DWORD *)a2 = 0; /*0x50b9ca*/
      *(_DWORD *)(a2 + 4) = 1081073664; /*0x50b9d0*/
    }
    v8 = *(double *)a3 * 240.0 / v5; /*0x50b9db*/
    *(double *)a3 = v8; /*0x50b9dd*/
    if ( v8 > 255.0 ) /*0x50b9ea*/
    {
      *(_DWORD *)a3 = 0; /*0x50b9ec*/
      *(_DWORD *)(a3 + 4) = 1081073664; /*0x50b9f2*/
    }
  }
}



// ==== 0x0050BA00  ObjectClass::ComputeSessionColorVector  this=ObjectClass  sig=csp ====
__int64 __thiscall ComputeSessionColorVector(ObjectClass *this)
{
  double v1; // st7
  __int64 result; // rax
  int v15; // kr00_4
  double v16; // [esp+0h] [ebp-28h]
  double v17; // [esp+0h] [ebp-28h]
  int v18; // [esp+10h] [ebp-18h]
  int v19; // [esp+10h] [ebp-18h]
  int v20; // [esp+10h] [ebp-18h]
  double v24; // [esp+18h] [ebp-10h]
  double v25; // [esp+18h] [ebp-10h]
  double v27; // [esp+20h] [ebp-8h]
  double v28; // [esp+20h] [ebp-8h]

  v18 = *((unsigned __int8 *)this + 22265); /*0x50ba1c*/
  __asm { fild dword ptr [esp+20h+var_18] } /*0x50ba22*/
  v19 = *((unsigned __int8 *)this + 22266); /*0x50ba2c*/
  __asm /*0x50ba33*/
  {
    fst [esp+28h+var_10]
    fild dword ptr [esp+28h+var_18]
  }
  v20 = *((unsigned __int8 *)this + 22267); /*0x50ba3b*/
  __asm /*0x50ba3f*/
  {
    fst [esp+28h+var_8]
    fild dword ptr [esp+28h+var_18]
    fst [esp+28h+var_18]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fld st(3)
    fmul st, st(4)
    faddp st(1), st
    fstp [esp+28h+var_28]; double
    fstp st
    fstp st
    fstp st
  }
  Math::Sqrt(v16); /*0x50ba64*/
  __asm { fcom ds:dbl_7E2800 } /*0x50ba69*/
  __asm { fnstsw ax }
  if ( (_AX & 0x4000) != 0 ) /*0x50ba77*/
  {
    __asm /*0x50ba79*/
    {
      fstp st
      fld ds:dbl_7EAA50
    }
    v27 = 255.0; /*0x50ba81*/
    __asm { fst [esp+20h+var_18] } /*0x50ba91*/
    v24 = 255.0; /*0x50ba95*/
  }
  else
  {
    __asm /*0x50baaa*/
    {
      fld [esp+20h+var_10]
      fmul ds:dbl_7E5F78
      fdiv st, st(1)
      fst [esp+20h+var_10]
      fcomp ds:dbl_7EAA50
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x50bac5*/
      v24 = 255.0; /*0x50bac7*/
    __asm /*0x50bad7*/
    {
      fld [esp+20h+var_8]
      fmul ds:dbl_7E5F78
      fdiv st, st(1)
      fst [esp+20h+var_8]
      fcomp ds:dbl_7EAA50
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x50baf2*/
      v27 = 255.0; /*0x50baf4*/
    __asm /*0x50bb04*/
    {
      fld [esp+20h+var_18]
      fmul ds:dbl_7E5F78
      fdivrp st(1), st
      fcom ds:dbl_7EAA50
      fst [esp+20h+var_18]
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x50bb1f*/
    {
      __asm /*0x50bb21*/
      {
        fstp st
        fld ds:dbl_7EAA50
        fst [esp+20h+var_18]
      }
    }
    __asm /*0x50bb2d*/
    {
      fld [esp+20h+var_10]
      fcomp ds:dbl_7EAA48
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x50bb3c*/
      v24 = 0.0; /*0x50bb3e*/
    __asm /*0x50bb4e*/
    {
      fld [esp+20h+var_8]
      fcomp ds:dbl_7EAA48
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x50bb5d*/
      v27 = 0.0; /*0x50bb5f*/
    __asm /*0x50bb6f*/
    {
      fcom ds:dbl_7EAA48
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x50bb7a*/
    {
      __asm /*0x50bb7c*/
      {
        fstp st
        fld ds:dbl_7E2800
        fst [esp+20h+var_18]
      }
    }
  }
  __asm /*0x50bb88*/
  {
    fld st
    fmul st, st(1)
    fld [esp+20h+var_8]
    fmul [esp+20h+var_8]
  }
  __asm
  {
    faddp st(1), st
    fld [esp+28h+var_10]
    fmul [esp+28h+var_10]
    faddp st(1), st
    fstp [esp+28h+var_28]; double
    fstp st
  }
  Math::Sqrt(v17); /*0x50bba8*/
  __asm { fcom ds:dbl_7E2800 } /*0x50bbad*/
  __asm { fnstsw ax }
  if ( (_AX & 0x4000) != 0 ) /*0x50bbbb*/
  {
    __asm /*0x50bbbd*/
    {
      fstp st
      fld ds:dbl_7EAA50
    }
    v28 = 255.0; /*0x50bbc5*/
    v25 = 255.0; /*0x50bbd5*/
  }
  else
  {
    __asm /*0x50bbe7*/
    {
      fld [esp+20h+var_10]
      fmul ds:dbl_7E5F78
      fdiv st, st(1)
      fst [esp+20h+var_10]
      fcomp ds:dbl_7EAA50
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x50bc02*/
      v25 = 255.0; /*0x50bc04*/
    __asm /*0x50bc14*/
    {
      fld [esp+20h+var_8]
      fmul ds:dbl_7E5F78
      fdiv st, st(1)
      fst [esp+20h+var_8]
      fcomp ds:dbl_7EAA50
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x50bc2f*/
      v28 = 255.0; /*0x50bc31*/
    __asm /*0x50bc41*/
    {
      fld [esp+20h+var_18]
      fmul ds:dbl_7E5F78
      fdivrp st(1), st
      fcom ds:dbl_7EAA50
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x50bc58*/
    {
      __asm /*0x50bc5a*/
      {
        fstp st
        fld ds:dbl_7EAA50
      }
    }
  }
  __asm { fld [esp+20h+var_10] } /*0x50bc62*/
  __asm { fld [esp+20h+var_8] }
  *((_BYTE *)this + 22268) = Math::RoundToInt(v1); /*0x50bc6f*/
  *((_BYTE *)this + 22269) = Math::RoundToInt(v1); /*0x50bc7a*/
  v15 = Math::RoundToInt(v1); /*0x50bc80*/
  WORD2(result) = HIWORD(v15); /*0x50bc80*/
  LOWORD(result) = v15; /*0x50bc80*/
  *((_BYTE *)this + 22270) = v15; /*0x50bc85*/
  return result; /*0x50bc8b*/
}



// ==== 0x0050BC90  HouseClass::CreatePowerOutage  this=HouseClass  sig=csp ====
int __thiscall HouseClass::CreatePowerOutage(int this, int a2)
{
  wchar_t *v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  v2 = dword_A8ED84; /*0x50bc90*/
  *(_BYTE *)(this + 22392) = 1; /*0x50bc9c*/
  *(_DWORD *)(this + 676) = v2; /*0x50bcaa*/
  *(_DWORD *)(this + 680) = v4; /*0x50bcb4*/
  *(_DWORD *)(this + 684) = a2; /*0x50bcb7*/
  return v4; /*0x50bcba*/
}



// ==== 0x0050BCD0  HouseClass::CreateRadarOutage  this=HouseClass  sig=csp ====
int __thiscall HouseClass::CreateRadarOutage(int this, int a2)
{
  wchar_t *v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  v2 = dword_A8ED84; /*0x50bcd0*/
  *(_BYTE *)(this + 22393) = 1; /*0x50bcdc*/
  *(_DWORD *)(this + 688) = v2; /*0x50bcea*/
  *(_DWORD *)(this + 692) = v4; /*0x50bcf4*/
  *(_DWORD *)(this + 696) = a2; /*0x50bcf7*/
  return v4; /*0x50bcfa*/
}



// ==== 0x0050BD10  HouseClass::ReshroudMap  this=HouseClass  sig=csp ====
char __thiscall HouseClass::ReshroudMap(HouseClass *this)
{
  char result; // al

  result = BYTE2(this->HouseClass_field_timer_B[2]); /*0x50bd10*/
  if ( !result ) /*0x50bd18*/
    return ShroudClass::Reset((ShroudClass *)&stru_87F5F0.__pad_58[416], (int)this); /*0x50bd20*/
  return result; /*0x50bd25*/
}



// ==== 0x0050BD30  TechnoClass::GetDamageMultiplier  this=TOP  sig=csp ====
double __thiscall TechnoClass::GetDamageMultiplier(TechnoClass *this, _DWORD *a2)
{
  double result; // st7

  switch ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) ) /*0x50bd4f*/
  {
    case 3: /*0x50bd4f*/
      result = *(float *)&this->?[4].firstTrigger; /*0x50bd77*/
      break; /*0x50bd7d*/
    case 7: /*0x50bd4f*/
      if ( a2[898] == 5 ) /*0x50bd87*/
        result = *(float *)this->?[4].defaultCoords; /*0x50bd8e*/
      else
        result = *(float *)&this->?[4].instanceCount; /*0x50bd9c*/
      break; /*0x50bd94*/
    case 16: /*0x50bd4f*/
      result = *(float *)&this->?[4].?; /*0x50bd5b*/
      break; /*0x50bd61*/
    case 40: /*0x50bd4f*/
      result = *(float *)&this->?[4].buildingType; /*0x50bd69*/
      break; /*0x50bd6f*/
    default:
      result = 1.0; /*0x50bda5*/
      break; /*0x50bda5*/
  }
  return result; /*0x50bdab*/
}



// ==== 0x0050BDF0  TechnoTypeClass::Dispatch  this=TechnoTypeClass  sig=csp ====
double __thiscall TechnoTypeClass::Dispatch(TechnoTypeClass *this, _DWORD *a2)
{
  double result; // st7

  switch ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) ) /*0x50be0f*/
  {
    case 3: /*0x50be0f*/
      result = *(float *)(this->ObjectTypeClass[13] + 284); /*0x50be37*/
      break; /*0x50be3d*/
    case 7: /*0x50be0f*/
      if ( a2[898] == 5 ) /*0x50be47*/
        result = *(float *)(this->ObjectTypeClass[13] + 292); /*0x50be4e*/
      else
        result = *(float *)(this->ObjectTypeClass[13] + 288); /*0x50be5c*/
      break; /*0x50be54*/
    case 16: /*0x50be0f*/
      result = *(float *)(this->ObjectTypeClass[13] + 276); /*0x50be1b*/
      break; /*0x50be21*/
    case 40: /*0x50be0f*/
      result = *(float *)(this->ObjectTypeClass[13] + 280); /*0x50be29*/
      break; /*0x50be2f*/
    default:
      result = 1.0; /*0x50be65*/
      break; /*0x50be65*/
  }
  return result; /*0x50be6b*/
}



// ==== 0x0050BEB0  TechnoTypeClass::GetThreatMultiplier  this=TechnoTypeClass  sig=csp ====
double __thiscall sub_50BEB0(float *this, _DWORD *a2)
{
  double result; // st7

  switch ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) ) /*0x50becf*/
  {
    case 3: /*0x50becf*/
      result = *(this + 5350); /*0x50beec*/
      break; /*0x50bef4*/
    case 7: /*0x50becf*/
      if ( a2[898] == 5 ) /*0x50befe*/
        result = *(this + 5352); /*0x50bf00*/
      else
        result = *(this + 5351); /*0x50bf0b*/
      break; /*0x50bf08*/
    case 16: /*0x50becf*/
      result = *(this + 5348); /*0x50bed6*/
      break; /*0x50bede*/
    case 40: /*0x50becf*/
      result = *(this + 5349); /*0x50bee1*/
      break; /*0x50bee9*/
    default:
      result = 1.0; /*0x50bf16*/
      break; /*0x50bf16*/
  }
  return result; /*0x50bedc*/
}



// ==== 0x0050BF60  HouseClass::CalculateCostMultipliers  this=AbstractClass  sig=csp ====
int __thiscall HouseClass::CalculateCostMultipliers(float *this)
{
  int result; // eax

  *(this + 5348) = 1.0; /*0x50bf65*/
  *(this + 5349) = 1.0; /*0x50bf6b*/
  *(this + 5350) = 1.0; /*0x50bf71*/
  *(this + 5351) = 1.0; /*0x50bf77*/
  *(this + 5352) = 1.0; /*0x50bf7d*/
  for ( result = 0; /*0x50bf8d*/
        result < this->u8_15;
        *(this + 5352) = *(float *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 81) + 4 * result - 4) + 1312) + 5856)
                       * *(this + 5352) )
  {
    ++result; /*0x50bf99*/
    *(this + 5348) = *(float *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 81) + 4 * result - 4) + 1312) + 5840) /*0x50bfb0*/
                   * *(this + 5348);
    *(this + 5349) = *(float *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 81) + 4 * result - 4) + 1312) + 5844) /*0x50bfd2*/
                   * *(this + 5349);
    *(this + 5350) = *(float *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 81) + 4 * result - 4) + 1312) + 5848) /*0x50bff4*/
                   * *(this + 5350);
    *(this + 5351) = *(float *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 81) + 4 * result - 4) + 1312) + 5852) /*0x50c016*/
                   * *(this + 5351);
  }
  return result; /*0x50c04a*/
}



// ==== 0x0050C050  TechnoClass::GetTargetSpeedMultiplier  this=TechnoClass  sig=csp ====
double __thiscall TechnoClass::GetTargetSpeedMultiplier(TechnoClass *this, int a2)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2); /*0x50c059*/
  switch ( v3 ) /*0x50c05f*/
  {
    case 3: /*0x50c05f*/
      return *(float *)&this->?[5].?; /*0x50c093*/
    case 16: /*0x50c05f*/
      return *(float *)&this->?[5].?; /*0x50c086*/
    case 40: /*0x50c05f*/
      return *(float *)&this->?[5].?; /*0x50c079*/
  }
  return 1.0; /*0x50c071*/
}



// ==== 0x0050C0A0  HouseClass::GetBuildingDamageMultiplier  this=HouseClass  sig=csp ====
double __thiscall HouseClass::GetBuildingDamageMultiplier(HouseClass *this, _DWORD *a2)
{
  double result; // st7

  switch ( (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) ) /*0x50c0bf*/
  {
    case 3: /*0x50c0bf*/
      result = *(float *)(this->relatedTagsCapacity + 316); /*0x50c0e7*/
      break; /*0x50c0ed*/
    case 7: /*0x50c0bf*/
      if ( a2[898] == 5 ) /*0x50c0f7*/
        result = *(float *)(this->relatedTagsCapacity + 324); /*0x50c0fe*/
      else
        result = *(float *)(this->relatedTagsCapacity + 320); /*0x50c10c*/
      break; /*0x50c104*/
    case 16: /*0x50c0bf*/
      result = *(float *)(this->relatedTagsCapacity + 308); /*0x50c0cb*/
      break; /*0x50c0d1*/
    case 40: /*0x50c0bf*/
      result = *(float *)(this->relatedTagsCapacity + 312); /*0x50c0d9*/
      break; /*0x50c0df*/
    default:
      result = 1.0; /*0x50c115*/
      break; /*0x50c115*/
  }
  return result; /*0x50c11b*/
}



// ==== 0x0050C160  ObjectClass::method_50C160  this=ObjectClass  sig=csp ====
double __thiscall sub_50C160(ObjectClass *this)
{
  return *(float *)this->attachedTag[5].defaultCoords; /*0x50c169*/
}



// ==== 0x0050C170  HouseClass::FindByName  this=INIClass  sig=csp ====
int __thiscall HouseClass_FindByName(const char *this)
{
  int v1; // edx
  char *i; // ebp
  char v4[20]; // [esp+14h] [ebp-14h] BYREF

  v1 = 0; /*0x50c17a*/
  if ( dword_A80238 <= 0 ) /*0x50c184*/
    return -1; /*0x50c1f8*/
  for ( i = (char *)dword_A8022C; ; i += 4 ) /*0x50c186*/
  {
    strcpy(v4, (const char *)(*(_DWORD *)i + 90100)); /*0x50c1ad*/
    if ( !strcmp(v4, this) ) /*0x50c1c4*/
      break; /*0x50c1c4*/
    if ( ++v1 >= dword_A80238 ) /*0x50c1f6*/
      return -1; /*0x50c1f6*/
  }
  return v1; /*0x50c1f8*/
}



// ==== 0x0050C210  HouseClass::SetPrimaryTechBuilding  this=HouseClass  sig=csp ====
void __thiscall HouseClass::SetPrimaryTechBuilding(HouseClass *this)
{
  int v1; // ebp
  int v2; // esi
  int *i; // ebx
  int v4; // edx
  int v5; // eax
  _DWORD *v6; // ecx
  _DWORD *v7; // edx
  char currentPlayer; // al
  int v9; // esi
  HouseClass *v10; // [esp+0h] [ebp-24h]
  int v11; // [esp+10h] [ebp-14h]

  v1 = this->bunkersCount - 1; /*0x50c219*/
  if ( v1 >= 0 ) /*0x50c21f*/
  {
    v2 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2236); /*0x50c22d*/
    for ( i = (int *)(this->absorbersCount + 4 * v1); ; --i ) /*0x50c233*/
    {
      v4 = *i; /*0x50c236*/
      v5 = 0; /*0x50c238*/
      if ( v2 > 0 ) /*0x50c23c*/
      {
        v6 = *(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2224); /*0x50c24a*/
        while ( *v6 != *(_DWORD *)(v4 + 1312) ) /*0x50c252*/
        {
          ++v5; /*0x50c254*/
          ++v6; /*0x50c255*/
          if ( v5 >= v2 ) /*0x50c25a*/
            goto LABEL_9; /*0x50c25a*/
        }
        if ( !*(_BYTE *)(v4 + 129) ) /*0x50c25e*/
          break; /*0x50c25e*/
      }
LABEL_9:
      if ( --v1 < 0 ) /*0x50c26e*/
        return; /*0x50c26e*/
    }
    if ( v4 ) /*0x50c27a*/
    {
      v7 = (_DWORD *)(v4 + 156); /*0x50c280*/
      LOWORD(v11) = *v7 / 256; /*0x50c2a2*/
      HIWORD(v11) = v7[1] / 256; /*0x50c2b5*/
      currentPlayer = this->currentPlayer; /*0x50c2be*/
      this->baseSpawnCell[0] = v11; /*0x50c2c4*/
      if ( !*(_DWORD *)&dword_A8B238 ) /*0x50c2d2*/
        currentPlayer = currentPlayer || this->playerControl; /*0x50c2e6*/
      if ( !currentPlayer && *(_DWORD *)&dword_A8B238 ) /*0x50c2ee*/
        HouseClass::CanDetect(v10); /*0x50c2f0*/
      if ( !this->base[11] ) /*0x50c2f5*/
      {
        v9 = dword_A8E7AC; /*0x50c2ff*/
        dword_A8E7AC = 0; /*0x50c307*/
        HouseClass::GenerateAIBuildListEnsureSanity(this); /*0x50c311*/
        dword_A8E7AC = v9; /*0x50c316*/
      }
      *(_DWORD *)(this->base[8] + 4) = v11; /*0x50c322*/
      this->damageDelayTimer[1] = v11; /*0x50c325*/
    }
  }
}



// ==== 0x0050C340  HouseClass::FindBuildLocation  this=HouseClass  sig=csp ====
char __thiscall HouseClass_FindBuildLocation(int this, int a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // edi
  int v9; // esi
  int v10; // esi
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int FoundationWidth; // ebp
  int FoundationHeight; // eax
  int v16; // ebx
  int v17; // esi
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int *v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ebp
  int v26; // ecx
  int v27; // edx
  int *v28; // ecx
  int v29; // eax
  int v30; // ebx
  int v31; // esi
  int v32; // ecx
  int v33; // eax
  int v34; // ebp
  int v35; // ecx
  int v36; // edx
  int *v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // ecx
  int v41; // edx
  int *v42; // ecx
  int v43; // eax
  __int16 v44; // bp
  _WORD *v45; // eax
  int v46; // eax
  _WORD *v47; // eax
  int v48; // eax
  _WORD *v49; // eax
  int v50; // eax
  int v52; // [esp+20h] [ebp-50h]
  int v53; // [esp+24h] [ebp-4Ch]
  int v55; // [esp+2Ch] [ebp-44h]
  int v56; // [esp+30h] [ebp-40h]
  int v57; // [esp+30h] [ebp-40h]
  int v58; // [esp+34h] [ebp-3Ch] BYREF
  _DWORD v59[2]; // [esp+38h] [ebp-38h] BYREF
  int v60; // [esp+40h] [ebp-30h]
  int v61; // [esp+44h] [ebp-2Ch]
  _DWORD v62[4]; // [esp+48h] [ebp-28h] BYREF
  int v63; // [esp+58h] [ebp-18h]
  int v64; // [esp+68h] [ebp-8h]

  v3 = 0; /*0x50c34e*/
  v4 = *((_DWORD *)dword_8871E0 + 664); /*0x50c350*/
  v52 = -1; /*0x50c35d*/
  if ( v4 > 0 ) /*0x50c365*/
  {
    v5 = *((_DWORD *)dword_8871E0 + 661); /*0x50c376*/
    while ( 1 ) /*0x50c37a*/
    {
      v6 = *(_DWORD *)(*(_DWORD *)v5 + 1744); /*0x50c37a*/
      if ( v6 == *(_DWORD *)(*(_DWORD *)(this + 52) + 188) || v6 == -1 ) /*0x50c387*/
        break; /*0x50c387*/
      ++v3; /*0x50c389*/
      v5 += 4; /*0x50c38a*/
      if ( v3 >= v4 ) /*0x50c38f*/
        goto LABEL_8; /*0x50c38f*/
    }
    v52 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_8871E0 + 661) + 4 * v3) + 3576); /*0x50c39d*/
  }
LABEL_8:
  v7 = 0; /*0x50c3a1*/
  v8 = a2 - 1; /*0x50c3a7*/
  if ( a2 - 1 >= 0 ) /*0x50c3ac*/
  {
    v9 = 16 * a2; /*0x50c3b7*/
    do /*0x50c3eb*/
    {
      v7 = BridgeClass::GetCellData(v8); /*0x50c3bd*/
      if ( v7 && *(_BYTE *)(*(_DWORD *)(v7 + 1312) + 5989) && *(_DWORD *)(*(_DWORD *)(this + 22280) + v9) != v52 ) /*0x50c3e3*/
        break; /*0x50c3e3*/
      --v8; /*0x50c3e5*/
      v9 -= 16; /*0x50c3e6*/
    }
    while ( v8 >= 0 ); /*0x50c3eb*/
  }
  if ( v8 == -1 ) /*0x50c3f0*/
    return 0; /*0x50c3f0*/
  if ( !v7 ) /*0x50c3f8*/
    return 0; /*0x50c3f8*/
  v10 = *(_DWORD *)(v7 + 1312); /*0x50c3fe*/
  if ( !*(_BYTE *)(v10 + 5989) ) /*0x50c404*/
    return 0; /*0x50c8ae*/
  v11 = v7 + 156; /*0x50c417*/
  v12 = *(_DWORD *)(v7 + 156); /*0x50c419*/
  v13 = *(_DWORD *)(v11 + 4); /*0x50c41b*/
  v60 = *(_DWORD *)(v11 + 8); /*0x50c421*/
  LOWORD(v59[0]) = v12 / 256; /*0x50c431*/
  HIWORD(v59[0]) = v13 / 256; /*0x50c446*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth((_DWORD *)v10); /*0x50c450*/
  v53 = FoundationWidth; /*0x50c456*/
  FoundationHeight = BuildingTypeClass::GetFoundationHeight(v10, 0); /*0x50c45a*/
  LOWORD(a2) = LOWORD(v59[0]) - 1; /*0x50c469*/
  HIWORD(a2) = HIWORD(v59[0]) - 1; /*0x50c46e*/
  v16 = 1; /*0x50c477*/
  v55 = FoundationHeight; /*0x50c47e*/
  v62[0] = a2; /*0x50c482*/
  a2 = 1; /*0x50c486*/
  if ( FoundationWidth >= 1 ) /*0x50c48a*/
  {
    LOBYTE(v63) = 0; /*0x50c495*/
    HIWORD(v59[0]) = FoundationHeight + 1; /*0x50c49a*/
    LOBYTE(v64) = 0; /*0x50c49f*/
    v17 = this + 22276; /*0x50c4a4*/
    do /*0x50c604*/
    {
      HIWORD(v56) = HIWORD(v62[0]); /*0x50c4b3*/
      v18 = *(_DWORD *)(this + 22284); /*0x50c4bb*/
      LOWORD(v56) = v16 + LOWORD(v62[0]); /*0x50c4be*/
      if ( *(_DWORD *)(this + 22292) < v18 /*0x50c4e9*/
        || (*(_BYTE *)(this + 22289) || !v18)
        && (v19 = *(_DWORD *)(this + 22296), v19 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 8))(v17, v18 + v19, 0) )
      {
        v20 = *(_DWORD *)(this + 22292); /*0x50c4f0*/
        if ( v8 < v20 - 1 ) /*0x50c4f8*/
        {
          memcpy( /*0x50c51c*/
            (void *)(*(_DWORD *)(this + 22280) + 16 * (v8 + 2)),
            (const void *)(*(_DWORD *)(this + 22280) + 16 * (v8 + 1)),
            16 * (v20 + 0xFFFFFFF * (v8 + 1)));
          v16 = a2; /*0x50c521*/
        }
        v21 = (int *)(16 * (v8 + 1) + *(_DWORD *)(this + 22280)); /*0x50c535*/
        v22 = v63; /*0x50c537*/
        *v21 = v52; /*0x50c53b*/
        v21[1] = v56; /*0x50c53d*/
        v21[2] = v22; /*0x50c540*/
        v21[3] = 0; /*0x50c545*/
        ++*(_DWORD *)(this + 22292); /*0x50c54c*/
      }
      v23 = *(_DWORD *)(this + 22292); /*0x50c560*/
      HIWORD(v58) = HIWORD(v62[0]) + HIWORD(v59[0]); /*0x50c563*/
      v24 = *(_DWORD *)(this + 22284); /*0x50c568*/
      LOWORD(v58) = v16 + LOWORD(v62[0]); /*0x50c56b*/
      v25 = v58; /*0x50c570*/
      if ( v23 < v24 /*0x50c593*/
        || (*(_BYTE *)(this + 22289) || !v24)
        && (v26 = *(_DWORD *)(this + 22296), v26 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 8))(v17, v24 + v26, 0) )
      {
        v27 = *(_DWORD *)(this + 22292); /*0x50c59a*/
        if ( v8 < v27 - 1 ) /*0x50c5a2*/
        {
          memcpy( /*0x50c5c6*/
            (void *)(*(_DWORD *)(this + 22280) + 16 * (v8 + 2)),
            (const void *)(*(_DWORD *)(this + 22280) + 16 * (v8 + 1)),
            16 * (v27 + 0xFFFFFFF * (v8 + 1)));
          v16 = a2; /*0x50c5cb*/
        }
        v28 = (int *)(16 * (v8 + 1) + *(_DWORD *)(this + 22280)); /*0x50c5df*/
        v29 = v64; /*0x50c5e1*/
        *v28 = v52; /*0x50c5e5*/
        v28[1] = v25; /*0x50c5e7*/
        v28[2] = v29; /*0x50c5ea*/
        v28[3] = 0; /*0x50c5ef*/
        ++*(_DWORD *)(this + 22292); /*0x50c5f6*/
      }
      a2 = ++v16; /*0x50c600*/
    }
    while ( v16 <= v53 ); /*0x50c604*/
    LOWORD(FoundationWidth) = v53; /*0x50c60a*/
    FoundationHeight = v55; /*0x50c60c*/
  }
  v30 = 1; /*0x50c610*/
  a2 = 1; /*0x50c617*/
  if ( FoundationHeight >= 1 ) /*0x50c61b*/
  {
    LOBYTE(v64) = 0; /*0x50c626*/
    LOWORD(v59[0]) = FoundationWidth + 1; /*0x50c62b*/
    LOBYTE(v63) = 0; /*0x50c630*/
    v31 = this + 22276; /*0x50c635*/
    do /*0x50c793*/
    {
      v32 = *(_DWORD *)(this + 22292); /*0x50c644*/
      HIWORD(v58) = v30 + HIWORD(v62[0]); /*0x50c649*/
      v33 = *(_DWORD *)(this + 22284); /*0x50c64e*/
      LOWORD(v58) = v62[0]; /*0x50c651*/
      v34 = v58; /*0x50c656*/
      if ( v32 < v33 /*0x50c679*/
        || (*(_BYTE *)(this + 22289) || !v33)
        && (v35 = *(_DWORD *)(this + 22296), v35 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v31 + 8))(v31, v33 + v35, 0) )
      {
        v36 = *(_DWORD *)(this + 22292); /*0x50c680*/
        if ( v8 < v36 - 1 ) /*0x50c688*/
        {
          memcpy( /*0x50c6ac*/
            (void *)(*(_DWORD *)(this + 22280) + 16 * (v8 + 2)),
            (const void *)(*(_DWORD *)(this + 22280) + 16 * (v8 + 1)),
            16 * (v36 + 0xFFFFFFF * (v8 + 1)));
          v30 = a2; /*0x50c6b1*/
        }
        v37 = (int *)(16 * (v8 + 1) + *(_DWORD *)(this + 22280)); /*0x50c6c5*/
        v38 = v64; /*0x50c6c7*/
        *v37 = v52; /*0x50c6cb*/
        v37[1] = v34; /*0x50c6cd*/
        v37[2] = v38; /*0x50c6d0*/
        v37[3] = 0; /*0x50c6d5*/
        ++*(_DWORD *)(this + 22292); /*0x50c6dc*/
      }
      LOWORD(v57) = LOWORD(v62[0]) + LOWORD(v59[0]); /*0x50c6ef*/
      HIWORD(v57) = v30 + HIWORD(v62[0]); /*0x50c6f7*/
      v39 = *(_DWORD *)(this + 22284); /*0x50c6fc*/
      if ( *(_DWORD *)(this + 22292) < v39 /*0x50c722*/
        || (*(_BYTE *)(this + 22289) || !v39)
        && (v40 = *(_DWORD *)(this + 22296), v40 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v31 + 8))(v31, v39 + v40, 0) )
      {
        v41 = *(_DWORD *)(this + 22292); /*0x50c729*/
        if ( v8 < v41 - 1 ) /*0x50c731*/
        {
          memcpy( /*0x50c755*/
            (void *)(*(_DWORD *)(this + 22280) + 16 * (v8 + 2)),
            (const void *)(*(_DWORD *)(this + 22280) + 16 * (v8 + 1)),
            16 * (v41 + 0xFFFFFFF * (v8 + 1)));
          v30 = a2; /*0x50c75a*/
        }
        v42 = (int *)(16 * (v8 + 1) + *(_DWORD *)(this + 22280)); /*0x50c76e*/
        v43 = v63; /*0x50c770*/
        *v42 = v52; /*0x50c774*/
        v42[1] = v57; /*0x50c776*/
        v42[2] = v43; /*0x50c779*/
        v42[3] = 0; /*0x50c77e*/
        ++*(_DWORD *)(this + 22292); /*0x50c785*/
      }
      a2 = ++v30; /*0x50c78f*/
    }
    while ( v30 <= v55 ); /*0x50c793*/
    LOWORD(FoundationWidth) = v53; /*0x50c799*/
  }
  a2 = v62[0]; /*0x50c7ab*/
  v59[0] = v52; /*0x50c7cb*/
  v59[1] = v62[0]; /*0x50c7cf*/
  LOBYTE(v60) = 0; /*0x50c7d3*/
  v61 = 0; /*0x50c7d8*/
  VectorClass::InsertAt(v59, v8); /*0x50c7e0*/
  v44 = FoundationWidth + 1; /*0x50c7e5*/
  v45 = CellStruct::Set(v59, v44, 0); /*0x50c7ed*/
  a2 = *CellStruct::Add(v62, &v58, v45); /*0x50c808*/
  v46 = BuildLocation::InitCandidate(v52, &a2); /*0x50c812*/
  VectorClass::InsertAt(v46, v8); /*0x50c81a*/
  v47 = CellStruct::Set(v59, 0, v55 + 1); /*0x50c82d*/
  a2 = *CellStruct::Add(v62, &v58, v47); /*0x50c852*/
  v48 = BuildLocation::InitCandidate(v52, &a2); /*0x50c856*/
  VectorClass::InsertAt(v48, v8); /*0x50c85e*/
  v49 = CellStruct::Set(v59, v44, v55 + 1); /*0x50c869*/
  a2 = *CellStruct::Add(v62, &v58, v49); /*0x50c88e*/
  v50 = BuildLocation::InitCandidate(v52, &a2); /*0x50c892*/
  VectorClass::InsertAt(v50, v8); /*0x50c89a*/
  return 1; /*0x50c89f*/
}



// ==== 0x0050C8C0  HouseClass::NotifyImpactWater  this=HouseClass  sig=csp ====
int __thiscall HouseClass::NotifyImpactWater(HouseClass *this)
{
  int v1; // edi
  int i; // esi
  HouseClass **v4; // ecx

  v1 = *(_DWORD *)&stru_A8EB00.?[164]; /*0x50c8c3*/
  for ( i = 0; i < v1; ++i ) /*0x50c8cf*/
  {
    v4 = *(HouseClass ***)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i); /*0x50c8d6*/
    if ( v4 && v4[135] == this ) /*0x50c8e3*/
      ((void (__thiscall *)(HouseClass **, _DWORD))(*v4)->builtInfantryTypes[24])(v4, 0); /*0x50c8e9*/
  }
  return PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 456), 0x2000, 1.0, 0); /*0x50c910*/
}



// ==== 0x0050C920  TechnoClass::FindDeployDestination  this=TechnoClass  sig=csp ====
__int16 __thiscall TechnoClass::FindDeployDestination(TechnoClass *this)
{
  int v1; // ebx
  int v3; // eax
  int v4; // ebp
  int v5; // edx
  int v6; // eax
  int *v7; // esi
  int v8; // ebx
  void *v9; // eax
  __int16 v11[2]; // [esp+Ch] [ebp-10h] BYREF
  int v12; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+14h] [ebp-8h]
  int v14; // [esp+18h] [ebp-4h] BYREF

  v1 = *(_DWORD *)&stru_A8EB00.?[164]; /*0x50c924*/
  v13 = *(_DWORD *)&stru_A8EB00.?[164]; /*0x50c92e*/
  if ( *((_WORD *)this + 10826) == *(_WORD *)&stru_A8EB00.?[948] /*0x50c950*/
    && *((_WORD *)this + 10827) == *(_WORD *)&stru_A8EB00.?[950] )
  {
    v3 = *((_DWORD *)this + 5412); /*0x50c952*/
  }
  else
  {
    v3 = *((_DWORD *)this + 5413); /*0x50c95a*/
  }
  v4 = 0; /*0x50c960*/
  *(_DWORD *)v11 = v3; /*0x50c968*/
  v12 = 0; /*0x50c98f*/
  v5 = *LayerClass::Pathfinding_Find( /*0x50c99e*/
          &stru_87F5F0.__pad_58[416],
          (int)&v12,
          &v14,
          v11,
          0,
          -1,
          0,
          0,
          4,
          4,
          0,
          0,
          0,
          1,
          (__int16 *)&v12,
          0,
          0);
  LOWORD(v6) = v5; /*0x50c9a0*/
  *(_DWORD *)v11 = v5; /*0x50c9a3*/
  if ( (_WORD)v5 != *(_WORD *)&stru_A8EB00.?[948] || v11[1] != *(_WORD *)&stru_A8EB00.?[950] ) /*0x50c9bc*/
  {
    ++v11[0]; /*0x50c9c2*/
    ++v11[1]; /*0x50c9c7*/
    if ( v1 > 0 ) /*0x50c9ce*/
    {
      do /*0x50cab7*/
      {
        v7 = *(int **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v4); /*0x50c9db*/
        if ( v7 ) /*0x50c9e0*/
        {
          if ( (TechnoClass *)v7[135] == this ) /*0x50c9ec*/
          {
            v6 = (*(int (__thiscall **)(_DWORD))(*v7 + 44))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v4)); /*0x50c9f6*/
            if ( v6 != 6 ) /*0x50c9fc*/
            {
              v6 = (*(int (__thiscall **)(int *))(*v7 + 44))(v7); /*0x50ca06*/
              if ( v6 != 2 ) /*0x50ca0c*/
              {
                if ( !*(_DWORD *)((*(int (__thiscall **)(int *))(*v7 + 132))(v7) + 1028) /*0x50ca36*/
                  || (v6 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v7 + 132))(v7) + 1028), !*(_BYTE *)(v6 + 5817)) )
                {
                  if ( *((_WORD *)this + 10826) == *(_WORD *)&stru_A8EB00.?[948] /*0x50ca5d*/
                    && *((_WORD *)this + 10827) == *(_WORD *)&stru_A8EB00.?[950] )
                  {
                    v6 = *((_DWORD *)this + 5412); /*0x50ca5f*/
                  }
                  else
                  {
                    v6 = *((_DWORD *)this + 5413); /*0x50ca67*/
                  }
                  v12 = v6; /*0x50ca70*/
                  if ( v6 != *(_DWORD *)&stru_A8EB00.?[948] ) /*0x50ca74*/
                  {
                    v8 = *v7; /*0x50ca7d*/
                    v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v11); /*0x50ca8b*/
                    (*(void (__thiscall **)(int *, void *, int))(v8 + 1152))(v7, v9, 1); /*0x50ca93*/
                    TechnoClass::SetFocus((TechnoClass *)v7, 0); /*0x50ca9d*/
                    LOWORD(v6) = (*(int (__thiscall **)(int *, int, _DWORD))(*v7 + 488))(v7, 2, 0); /*0x50caaa*/
                    v1 = v13; /*0x50cab0*/
                  }
                }
              }
            }
          }
        }
        ++v4; /*0x50cab4*/
      }
      while ( v4 < v1 ); /*0x50cab7*/
    }
  }
  return v6; /*0x50cabe*/
}



// ==== 0x0050CAD0  TechnoClass::ProcessTarget  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::ProcessTarget(TechnoClass *this, int a2)
{
  int v3; // eax
  int v5; // esi
  unsigned int v6; // esi
  Cell *v7; // eax
  Cell *NeighbourContent; // eax
  _DWORD *v9; // eax

  v3 = *(_DWORD *)a2; /*0x50cad9*/
  if ( *(int *)a2 < 0 ) /*0x50cadd*/
    return 1; /*0x50cae4*/
  if ( v3 >= dword_A83C78 ) /*0x50caed*/
    return 0; /*0x50caf1*/
  v5 = *((_DWORD *)dword_A83C6C + v3); /*0x50cafd*/
  if ( *(_BYTE *)(v5 + 1517) && *(_BYTE *)(v5 + 1516) ) /*0x50cb0a*/
    return this->armorMultiplier[0] < *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4928) /*0x50cb32*/
                                                + 4 * this->targetingTimer[1]);
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x50cb40*/
    return 1; /*0x50cb44*/
  if ( !v5 ) /*0x50cb4c*/
    return 0; /*0x50cb50*/
  if ( *(_DWORD *)TechnoClass::GetAudioEntry((TechnoClass *)v5, 0) ) /*0x50cb5f*/
    return 1; /*0x50cb66*/
  if ( *(_BYTE *)(v5 + 5489) ) /*0x50cb6c*/
  {
    v6 = 0; /*0x50cb76*/
    while ( 1 ) /*0x50cb81*/
    {
      v7 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)(a2 + 4)); /*0x50cb81*/
      NeighbourContent = (Cell *)Cell::GetNeighbourContent(v7, v6); /*0x50cb89*/
      v9 = Cell::IsBridge(NeighbourContent); /*0x50cb90*/
      if ( v9 ) /*0x50cb97*/
      {
        if ( (TechnoClass *)v9[135] == this ) /*0x50cb9f*/
          break; /*0x50cb9f*/
      }
      if ( (int)++v6 >= 8 ) /*0x50cba9*/
        return 0; /*0x50cbb0*/
    }
    return 1; /*0x50cb9f*/
  }
  return *(int *)(v5 + 3808) > 0 /*0x50cadf*/
      || *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3568) + *((_DWORD *)this + 5430) <= *(_DWORD *)&stru_A8EB00.?[416];
}



// ==== 0x0050CBF0  HouseClass::FindSWBuilding  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::FindSWBuilding(HouseClass *this, _DWORD *a2)
{
  HouseClass *v2; // edi
  int v3; // eax
  int v4; // esi
  _BYTE *v5; // ebx
  int v6; // ebp
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // esi
  _DWORD *v15; // edx
  int v16; // ebp
  int v17; // eax
  int v18; // edx
  _DWORD *v19; // ecx
  _DWORD *v20; // eax
  int v21; // ebp
  int v22; // eax
  int v23; // eax
  int v24; // eax
  void *v25; // edx
  int v26; // ecx
  _DWORD *v27; // eax
  _DWORD *v28; // esi
  int v29; // eax
  char v31; // [esp+Bh] [ebp-3Dh]
  int v33; // [esp+10h] [ebp-38h]
  int v34; // [esp+14h] [ebp-34h]
  int v35; // [esp+18h] [ebp-30h]
  int v36; // [esp+18h] [ebp-30h]
  int v37; // [esp+1Ch] [ebp-2Ch]
  __int16 v38[2]; // [esp+20h] [ebp-28h] BYREF
  _DWORD v39[3]; // [esp+24h] [ebp-24h] BYREF
  void **v40; // [esp+30h] [ebp-18h] BYREF
  void *Block; // [esp+34h] [ebp-14h]
  int v42; // [esp+38h] [ebp-10h]
  int v43; // [esp+3Ch] [ebp-Ch]
  int v44; // [esp+40h] [ebp-8h]
  int v45; // [esp+44h] [ebp-4h]

  v2 = this; /*0x50cbf5*/
  v37 = *((_DWORD *)stru_A80220.? + this->enemyHouseIndex); /*0x50cc12*/
  AbstractClassVector::Construct((AbstractClassVector *)&v40, 0, 0); /*0x50cc16*/
  v3 = 0; /*0x50cc21*/
  v40 = &DynamicVectorClass<AbstractClass *>::`vftable'; /*0x50cc25*/
  v45 = 10; /*0x50cc2d*/
  v44 = 0; /*0x50cc35*/
  v33 = 0; /*0x50cc39*/
  v34 = 0; /*0x50cc3d*/
  if ( *(int *)&stru_A8EB00.?[164] > 0 ) /*0x50cc41*/
  {
    while ( 1 ) /*0x50cc56*/
    {
      v4 = 0; /*0x50cc56*/
      v5 = *(_BYTE **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v34); /*0x50cc58*/
      v31 = 0; /*0x50cc5b*/
      if ( *((_DWORD *)v5 + 135) == v37 ) /*0x50cc66*/
      {
        v4 = 1; /*0x50cc70*/
        if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 120))(v5) == 2 && v5[144] && !v5[129] ) /*0x50cc87*/
        {
          v31 = 1; /*0x50cc91*/
        }
        else if ( !*(_DWORD *)&v2->__pad_13C[72] ) /*0x50cc98*/
        {
          v6 = 0; /*0x50cca7*/
          if ( *(int *)&stru_A83D50.__pad_C8[40] > 0 ) /*0x50ccab*/
          {
            do /*0x50ccdc*/
            {
              v7 = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * v6); /*0x50ccb3*/
              if ( (_BYTE *)AbstractClass::GetType((AbstractClass *)v7) == v5 /*0x50ccc8*/
                && *(_DWORD *)(v7 + 56)
                && !*(_BYTE *)(v7 + 112) )
              {
                v31 = 1; /*0x50cccf*/
              }
              ++v6; /*0x50ccd9*/
            }
            while ( v6 < *(int *)&stru_A83D50.__pad_C8[40] ); /*0x50ccdc*/
            v2 = this; /*0x50ccde*/
          }
        }
        v8 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 44))(v5) - 1; /*0x50cce9*/
        if ( v8 ) /*0x50ccea*/
        {
          v9 = v8 - 5; /*0x50ccf0*/
          if ( v9 ) /*0x50ccf3*/
          {
            if ( v9 == 9 ) /*0x50ccf8*/
            {
              v10 = *((_DWORD *)v5 + 432); /*0x50ccfe*/
              if ( *(_BYTE *)(v10 + 3779) ) /*0x50cd04*/
              {
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4616) /*0x50cd20*/
                               + 4 * *(_DWORD *)&v2->__pad_13C[72]);
              }
              else if ( *(_BYTE *)(v10 + 3782) ) /*0x50cd28*/
              {
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4644) /*0x50cd44*/
                               + 4 * *(_DWORD *)&v2->__pad_13C[72]);
              }
              else
              {
                v4 = 2; /*0x50cd4c*/
              }
            }
            goto LABEL_55; /*0x50cd23*/
          }
          v11 = *((_DWORD *)v5 + 328); /*0x50cd56*/
          v12 = *(_DWORD *)(v11 + 3768); /*0x50cd5c*/
          if ( v12 == 7 ) /*0x50cd65*/
          {
            v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4504) /*0x50cd79*/
                           + 4 * *(_DWORD *)&v2->__pad_13C[72]);
          }
          else if ( v12 != 40 || *(_BYTE *)(v11 + 3278) ) /*0x50cd86*/
          {
            if ( *(_DWORD *)(v11 + 3808) <= *(_DWORD *)(v11 + 3812) ) /*0x50cdb8*/
            {
              if ( *(_BYTE *)(v11 + 5894) ) /*0x50cdd4*/
              {
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4756) /*0x50cdf0*/
                               + 4 * *(_DWORD *)&v2->__pad_13C[72]);
              }
              else if ( *(_BYTE *)(v11 + 5453) ) /*0x50cdf8*/
              {
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4784) /*0x50ce14*/
                               + 4 * *(_DWORD *)&v2->__pad_13C[72]);
              }
              else if ( *(_BYTE *)(v11 + 5452) ) /*0x50ce1c*/
              {
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4840) /*0x50ce38*/
                               + 4 * *(_DWORD *)&v2->__pad_13C[72]);
              }
              else
              {
                if ( !*(_BYTE *)(v11 + 5454) ) /*0x50ce48*/
                {
                  v13 = 0; /*0x50ce6a*/
                  v14 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2348); /*0x50ce6c*/
                  if ( v14 <= 0 ) /*0x50ce74*/
                  {
LABEL_42:
                    v4 = 4; /*0x50ce88*/
                  }
                  else
                  {
                    v15 = *(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2336); /*0x50ce76*/
                    while ( *v15 != v11 ) /*0x50ce7e*/
                    {
                      ++v13; /*0x50ce80*/
                      ++v15; /*0x50ce81*/
                      if ( v13 >= v14 ) /*0x50ce86*/
                        goto LABEL_42; /*0x50ce86*/
                    }
                    v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4588) /*0x50cea2*/
                                   + 4 * *(_DWORD *)&this->__pad_13C[72]);
                  }
LABEL_54:
                  v2 = this; /*0x50cf34*/
                  goto LABEL_55; /*0x50cf34*/
                }
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4812) /*0x50ce5c*/
                               + 4 * *(_DWORD *)&v2->__pad_13C[72]);
              }
            }
            else
            {
              v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4560) /*0x50cdcc*/
                             + 4 * *(_DWORD *)&v2->__pad_13C[72]);
            }
          }
          else
          {
            v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4532) /*0x50cda2*/
                           + 4 * *(_DWORD *)&v2->__pad_13C[72]);
          }
        }
        else
        {
          v16 = *((_DWORD *)v5 + 433); /*0x50ceaa*/
          if ( !*(_BYTE *)(v16 + 3598) ) /*0x50ceb8*/
          {
            v17 = 0; /*0x50ced7*/
            v18 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2236); /*0x50ced9*/
            if ( v18 <= 0 ) /*0x50cee1*/
            {
LABEL_50:
              if ( *(int *)(v16 + 1504) <= 0 ) /*0x50cf03*/
                v4 = 2; /*0x50cf2f*/
              else
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4728) /*0x50cf15*/
                               + 4 * *(_DWORD *)&this->__pad_13C[72]);
            }
            else
            {
              v19 = *(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2224); /*0x50cee9*/
              while ( *v19 != *(_DWORD *)(v16 + 1028) ) /*0x50cef1*/
              {
                ++v17; /*0x50cef3*/
                ++v19; /*0x50cef4*/
                if ( v17 >= v18 ) /*0x50cef9*/
                  goto LABEL_50; /*0x50cef9*/
              }
              v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4700) /*0x50cf2a*/
                             + 4 * *(_DWORD *)&this->__pad_13C[72]);
            }
            goto LABEL_54; /*0x50cf2d*/
          }
          v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4672) /*0x50cecc*/
                         + 4 * *(_DWORD *)&v2->__pad_13C[72]);
        }
      }
LABEL_55:
      v20 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v5 + 72))(v5, v39); /*0x50cf38*/
      LOWORD(v35) = *v20 / 256; /*0x50cf56*/
      HIWORD(v35) = v20[1] / 256; /*0x50cf6e*/
      *(_DWORD *)v38 = v35; /*0x50cf77*/
      if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v38, 1) ) /*0x50cf81*/
        v4 = 0; /*0x50cf8a*/
      if ( *((_DWORD *)v5 + 136) == 2 /*0x50cfa8*/
        || (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 44))(v5) == 6 && v5[1773] == 15 )
      {
        v21 = v33; /*0x50cfaa*/
        v4 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v33 + 10); /*0x50cfc5*/
      }
      else
      {
        v21 = v33; /*0x50cfc9*/
      }
      if ( v31 ) /*0x50cfd3*/
      {
        if ( v4 <= v21 ) /*0x50cfdb*/
        {
          if ( v4 == v21 /*0x50d071*/
            && (v44 < v42
             || (BYTE1(v43) || !v42)
             && v45 > 0
             && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v40[2])(&v40, v45 + v42, 0)) )
          {
            v23 = v44++; /*0x50d07c*/
            *((_DWORD *)Block + v23) = v5; /*0x50d087*/
          }
        }
        else
        {
          v44 = 0; /*0x50cfe5*/
          if ( Block && BYTE1(v43) ) /*0x50cff1*/
          {
            __3_YAXPAX_Z(Block); /*0x50cff4*/
            Block = 0; /*0x50cffc*/
          }
          BYTE1(v43) = 0; /*0x50d004*/
          v42 = 0; /*0x50d00b*/
          if ( v44 < 0 || v45 > 0 && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v40[2])(&v40, v45, 0) ) /*0x50d023*/
          {
            v22 = v44++; /*0x50d02e*/
            *((_DWORD *)Block + v22) = v5; /*0x50d039*/
          }
          v33 = v4; /*0x50d03c*/
        }
      }
      if ( ++v34 >= *(int *)&stru_A8EB00.?[164] ) /*0x50d09b*/
      {
        v3 = v44; /*0x50d0a1*/
        break; /*0x50d0a1*/
      }
    }
  }
  if ( v3 <= 0 ) /*0x50d0a9*/
  {
    v25 = Block; /*0x50d137*/
    goto LABEL_87; /*0x50d137*/
  }
  v24 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v3 - 1); /*0x50d0bf*/
  v25 = Block; /*0x50d0c4*/
  v26 = *((_DWORD *)Block + v24); /*0x50d0c8*/
  if ( !v26 ) /*0x50d0cd*/
  {
LABEL_87:
    v28 = a2; /*0x50d13b*/
    *a2 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50d147*/
    v40 = &VectorClass<AbstractClass *>::`vftable'; /*0x50d149*/
    if ( v25 && BYTE1(v43) ) /*0x50d159*/
      __3_YAXPAX_Z(v25); /*0x50d15c*/
    return v28; /*0x50d15c*/
  }
  v27 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v26 + 72))(v26, v39); /*0x50d0d6*/
  v28 = a2; /*0x50d0db*/
  LOWORD(v36) = *v27 / 256; /*0x50d0ed*/
  v29 = v27[1]; /*0x50d0f5*/
  v40 = &VectorClass<AbstractClass *>::`vftable'; /*0x50d0fc*/
  HIWORD(v36) = v29 / 256; /*0x50d109*/
  *a2 = v36; /*0x50d112*/
  if ( Block && BYTE1(v43) ) /*0x50d122*/
  {
    __3_YAXPAX_Z(Block); /*0x50d125*/
    return a2; /*0x50d134*/
  }
  return v28; /*0x50d12f*/
}



// ==== 0x0050D170  HouseClass::FindSWTarget  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::FindSWTarget(HouseClass *this, _DWORD *a2, int a3)
{
  int SuperWeaponTypeFlag; // ebx
  int v5; // eax
  ParticleSystemClass *auxParticles1; // edx
  HouseClass *ptr_0; // ecx
  _DWORD *BestBuildingToRepair; // esi
  int v9; // edi
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  _DWORD v14[3]; // [esp+10h] [ebp-Ch] BYREF
  ObjectClass *v15; // [esp+24h] [ebp+8h]

  SuperWeaponTypeFlag = GetSuperWeaponTypeFlag((ObjectClass *)a3); /*0x50d187*/
  v5 = 0; /*0x50d189*/
  if ( (int)FootClass_Array.? <= 0 ) /*0x50d18d*/
    goto LABEL_10; /*0x50d18d*/
  auxParticles1 = FootClass_Array.?; /*0x50d193*/
  do /*0x50d1a6*/
  {
    ptr_0 = (HouseClass *)auxParticles1->ObjectClass; /*0x50d199*/
    if ( *((HouseClass **)auxParticles1->ObjectClass + 11) == this ) /*0x50d19e*/
      break; /*0x50d19e*/
    ++v5; /*0x50d1a0*/
    auxParticles1 = (ParticleSystemClass *)((char *)auxParticles1 + 4); /*0x50d1a1*/
  }
  while ( v5 < (int)FootClass_Array.? ); /*0x50d1a6*/
  if ( ptr_0 && (HouseClass *)ptr_0->relatedTags[0] == this ) /*0x50d1b3*/
  {
    BestBuildingToRepair = HouseClass::FindBestBuildingToRepair(ptr_0); /*0x50d1be*/
    v9 = *BestBuildingToRepair; /*0x50d1c7*/
    v10 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*BestBuildingToRepair + 72))(BestBuildingToRepair, v14, 1); /*0x50d1cb*/
    v11 = (*(int (__thiscall **)(_DWORD *, int, int))(v9 + 964))(BestBuildingToRepair, SuperWeaponTypeFlag, v10); /*0x50d1d2*/
    if ( v11 ) /*0x50d1da*/
    {
      v12 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v11 + 72))(v11, v14); /*0x50d1e5*/
      LOWORD(v15) = *v12 / 256; /*0x50d1fb*/
      HIWORD(v15) = v12[1] / 256; /*0x50d20f*/
      *a2 = v15; /*0x50d21c*/
      return a2; /*0x50d214*/
    }
    else
    {
      *a2 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50d230*/
      return a2; /*0x50d224*/
    }
  }
  else
  {
LABEL_10:
    *a2 = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50d245*/
    return a2; /*0x50d239*/
  }
}



// ==== 0x0050D250  CellClass::IterateOccupiers  this=CellClass  sig=csp ====
__int16 __thiscall CellClass::IterateOccupiers(CellClass *this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // esi

  v3 = *((_DWORD *)this + 5573) - 1; /*0x50d259*/
  if ( v3 >= 0 ) /*0x50d25a*/
  {
    v4 = *((_DWORD *)this + 5573); /*0x50d265*/
    v5 = 16 * v3; /*0x50d268*/
    do /*0x50d27d*/
    {
      LOWORD(v3) = CellClass::setTileIndex((CellClass *)(v5 + *((_DWORD *)this + 5570)), a2); /*0x50d274*/
      v5 -= 16; /*0x50d279*/
      --v4; /*0x50d27c*/
    }
    while ( v4 ); /*0x50d27d*/
  }
  return v3; /*0x50d282*/
}



// ==== 0x0050D290  TActionClass::executeAttackAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::executeAttackAction(TActionClass *this, int a2)
{
  int i; // edi
  _DWORD *v4; // esi
  int result; // eax

  for ( i = *(_DWORD *)(a2 + 120) - 1; i >= 0; v4[179] = this ) /*0x50d29d*/
  {
    v4 = *(_DWORD **)(*(_DWORD *)(a2 + 108) + 4 * i); /*0x50d2a6*/
    result = (*(int (__thiscall **)(_DWORD *, TActionClass *, _DWORD))(*v4 + 980))(v4, this, 0); /*0x50d2ad*/
    --i; /*0x50d2b3*/
    v4[184] = a2; /*0x50d2b4*/
  }
  return result; /*0x50d2c3*/
}



// ==== 0x0050D2D0  TActionClass::executeMoveAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::executeMoveAction(TActionClass *this, int a2)
{
  int i; // ebx
  int result; // eax
  _DWORD *v5; // esi

  for ( i = *(_DWORD *)&this->pad_6E[10] - 1; i >= 0; --i ) /*0x50d2d8*/
  {
    result = *(_DWORD *)&this->pad_55[23]; /*0x50d2e0*/
    v5 = *(_DWORD **)(result + 4 * i); /*0x50d2e3*/
    if ( v5[184] == a2 ) /*0x50d2ec*/
    {
      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v5 + 980))(v5, a2, 0); /*0x50d2f5*/
      result = 0; /*0x50d2fb*/
      v5[184] = 0; /*0x50d2fd*/
      v5[179] = 0; /*0x50d303*/
    }
  }
  return result; /*0x50d30e*/
}



// ==== 0x0050D320  HouseClass::RespawnStartingBuildings  this=HouseClass  sig=csp ====
int __usercall HouseClass::RespawnStartingBuildings@<eax>(
        HouseClass *this,
        _UNKNOWN **a2@<ebx>,
        _DWORD *a3@<edi>,
        int a4@<esi>)
{
  int v4; // ecx
  int v5; // ebp
  int result; // eax
  __int16 *v7; // edi
  int v8; // esi
  __int16 *v9; // ebx
  Cell *v10; // eax
  int *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edi
  int v15; // esi
  void *v16; // eax
  _DWORD *v17; // eax
  int i; // [esp+10h] [ebp-20h]
  int v22[3]; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v23[4]; // [esp+20h] [ebp-10h] BYREF
  _UNKNOWN *retaddr; // [esp+30h] [ebp+0h] BYREF

  v5 = v4; /*0x50d324*/
  result = *(_DWORD *)(v4 + 380) - 1; /*0x50d32c*/
  for ( i = result; i >= 0; --i )
  {
    v7 = *(__int16 **)(*(_DWORD *)(v5 + 368) + 4 * result); /*0x50d340*/
    v8 = *(_DWORD *)v7; /*0x50d343*/
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v7 + 44))(*(_DWORD *)v7) == 7 )
    {
      v9 = v7 + 2; /*0x50d355*/
      v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7 + 2); /*0x50d35e*/
      v11 = Cell::IsBridge(v10); /*0x50d365*/
      if ( v11 && (v12 = v11[328], v12 == v8) && v11[135] == v5 )
      {
        v13 = *v11; /*0x50d386*/
        v22[0] = -*(_DWORD *)(v12 + 160); /*0x50d38a*/
        (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v13 + 364))( /*0x50d3ac*/
          v11,
          v22,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          0,
          0,
          0);
      }
      else
      {
        v14 = (*(int (__thiscall **)(int, int, _DWORD *, int, _UNKNOWN **))(*(_DWORD *)v8 + 140))(v8, v5, a3, a4, a2); /*0x50d3bf*/
        if ( v14 )
          v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) == 6 ? v14 : 0;
        else
          v15 = 0; /*0x50d3c5*/
        v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9); /*0x50d3e3*/
        a2 = &retaddr; /*0x50d3ee*/
        v17 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)v16 + 72))(v16); /*0x50d3f1*/
        a4 = 0; /*0x50d3f6*/
        v23[0] = *v17; /*0x50d3f8*/
        v23[1] = v17[1]; /*0x50d3ff*/
        a3 = v23; /*0x50d40a*/
        v23[2] = v17[2]; /*0x50d40b*/
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 1168))(v15) ) /*0x50d413*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 248))(v15); /*0x50d421*/
      }
    }
    result = i - 1; /*0x50d42b*/
  }
  return result; /*0x50d439*/
}



// ==== 0x0050D440  HouseClass::RespawnStartingForces  this=HouseClass  sig=csp ====
int __usercall HouseClass::RespawnStartingForces@<eax>(
        HouseClass *this,
        _UNKNOWN **a2@<ebp>,
        _DWORD *a3@<edi>,
        int a4@<esi>)
{
  int v4; // ecx
  int v5; // ebx
  int result; // eax
  int v7; // edi
  __int16 *v8; // ebp
  int v9; // esi
  int v10; // eax
  void *v11; // eax
  _DWORD *v12; // eax
  int v16; // [esp+10h] [ebp-1Ch]
  _DWORD v17[4]; // [esp+1Ch] [ebp-10h] BYREF
  _UNKNOWN *retaddr; // [esp+2Ch] [ebp+0h] BYREF

  v5 = v4; /*0x50d444*/
  result = *(_DWORD *)(v4 + 380) - 1; /*0x50d44c*/
  v16 = result; /*0x50d44d*/
  if ( result >= 0 )
  {
    while ( 1 )
    {
      v7 = 0; /*0x50d466*/
      v8 = *(__int16 **)(*(_DWORD *)(v5 + 368) + 4 * result); /*0x50d468*/
      v9 = *(_DWORD *)v8; /*0x50d46b*/
      switch ( (*(int (__thiscall **)(_DWORD, _DWORD *, int, _UNKNOWN **))(**(_DWORD **)v8 + 44))(
                 *(_DWORD *)v8,
                 a3,
                 a4,
                 a2) )
      {
        case 3:
        case 7:
        case 40:
          v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 140))(v9, v5); /*0x50d491*/
          if ( v10 ) /*0x50d499*/
            goto LABEL_9; /*0x50d499*/
          v7 = 0; /*0x50d49b*/
          break; /*0x50d49d*/
        case 16:
          v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 140))(v9, v5); /*0x50d4a4*/
          if ( v10 )
LABEL_9:
            v7 = (*(_BYTE *)(v10 + 20) & 1) != 0 ? v10 : 0;
          else
            v7 = 0; /*0x50d4ae*/
          break; /*0x50d4b0*/
        default:
          break;
      }
      v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8 + 2); /*0x50d4c0*/
      a2 = &retaddr; /*0x50d4d4*/
      v12 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)v11 + 72))(v11); /*0x50d4d7*/
      a4 = 0; /*0x50d4dc*/
      v17[0] = *v12; /*0x50d4de*/
      v17[1] = v12[1]; /*0x50d4e5*/
      a3 = v17; /*0x50d4f0*/
      v17[2] = v12[2]; /*0x50d4f1*/
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 1168))(v7) ) /*0x50d4f9*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 248))(v7); /*0x50d507*/
      result = --v16; /*0x50d511*/
      if ( v16 < 0 ) /*0x50d516*/
        break; /*0x50d516*/
      result = v16; /*0x50d45c*/
    }
  }
  return result; /*0x50d51f*/
}



// ==== 0x0050D610  Scenario::ProcessSidebarUnits  this=Scenario  sig=csp ====
int __thiscall Scenario::ProcessSidebarUnits(Scenario *this)
{
  int result; // eax
  Scenario **v3; // esi
  int v4; // ebx
  int v5; // esi
  int *v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int i; // [esp+Ch] [ebp-8h]
  char v12[4]; // [esp+10h] [ebp-4h] BYREF

  result = *(_DWORD *)&stru_A8EB00.?[164] - 1; /*0x50d619*/
  for ( i = *(_DWORD *)&stru_A8EB00.?[164] - 1; i >= 0; --i ) /*0x50d622*/
  {
    v3 = *(Scenario ***)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * result); /*0x50d631*/
    if ( v3[135] == this ) /*0x50d63a*/
    {
      v4 = *(_DWORD *)(*(int (__thiscall **)(Scenario **, char *))&(*v3)->__pad_9C[284])(v3, v12); /*0x50d64d*/
      v5 = (*(int (__thiscall **)(Scenario **))(*v3)->__pad_84)(v3); /*0x50d659*/
      v6 = (int *)__2_YAPAXI_Z(8u); /*0x50d660*/
      *v6 = v5; /*0x50d665*/
      v6[1] = v4; /*0x50d66d*/
      v7 = *(_DWORD *)&this->__pad_9C[216]; /*0x50d670*/
      if ( *(_DWORD *)&this->__pad_9C[224] < v7 /*0x50d695*/
        || (this->__pad_9C[221] || !v7)
        && (v8 = *(_DWORD *)&this->__pad_9C[228], v8 > 0)
        && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&this->__pad_9C[208] + 8))(
             &this->__pad_9C[208],
             v7 + v8,
             0) )
      {
        v9 = *(_DWORD *)&this->__pad_9C[224]; /*0x50d69c*/
        v10 = *(_DWORD *)&this->__pad_9C[212]; /*0x50d69f*/
        *(_DWORD *)&this->__pad_9C[224] = v9 + 1; /*0x50d6a5*/
        *(_DWORD *)(v10 + 4 * v9) = v6; /*0x50d6a8*/
      }
    }
    result = i - 1; /*0x50d6af*/
  }
  return result; /*0x50d6bd*/
}



// ==== 0x0050D6D0  ObjectClass::SelectSimilarBuildingTypes  this=ObjectClass  sig=csp ====
__int16 __thiscall SelectSimilarBuildingTypes(ObjectClass *this, int a2)
{
  ObjectClass *v2; // ebp
  int i; // eax
  _DWORD *v4; // esi
  __int16 v5; // dx
  _WORD *v6; // edi
  int v7; // ebp
  void *v8; // eax
  __int16 v9; // dx
  int v10; // ebp
  void *v11; // eax
  void *v12; // eax
  int v13; // edi
  _DWORD *v14; // eax
  int v15; // ebp
  void *v16; // eax
  __int16 v17; // dx
  int v18; // ebp
  void *v19; // eax
  void *v20; // eax
  int v21; // edi
  ObjectPlacement *v22; // eax
  int *v23; // eax
  _DWORD *v25; // [esp+20h] [ebp-54h]
  int v26; // [esp+24h] [ebp-50h]
  int v27; // [esp+28h] [ebp-4Ch]
  int v28; // [esp+2Ch] [ebp-48h]
  __int16 v29[2]; // [esp+34h] [ebp-40h] BYREF
  int v30; // [esp+38h] [ebp-3Ch]
  int v31; // [esp+3Ch] [ebp-38h]
  __int16 v32[2]; // [esp+40h] [ebp-34h] BYREF
  int v33; // [esp+44h] [ebp-30h]
  int v34; // [esp+48h] [ebp-2Ch]
  ObjectClass *v35; // [esp+4Ch] [ebp-28h]
  _BYTE v36[12]; // [esp+50h] [ebp-24h] BYREF
  _BYTE v37[24]; // [esp+5Ch] [ebp-18h] BYREF
  _UNKNOWN *retaddr; // [esp+74h] [ebp+0h] BYREF

  v2 = this; /*0x50d6e0*/
  v35 = this; /*0x50d6e4*/
  if ( (_WORD)a2 == *(_WORD *)&stru_A8EB00.?[948] ) /*0x50d6e8*/
  {
    LOWORD(i) = HIWORD(a2); /*0x50d6ea*/
    if ( HIWORD(a2) == *(_WORD *)&stru_A8EB00.?[950] ) /*0x50d6f6*/
      return i; /*0x50d6f6*/
  }
  v30 = 0; /*0x50d702*/
  i = FootClass_Array.? - 1; /*0x50d70a*/
  v34 = FootClass_Array.? - 1; /*0x50d70f*/
  if ( FootClass_Array.? - 1 < 0 ) /*0x50d713*/
    return i; /*0x50d713*/
  while ( 1 ) /*0x50d725*/
  {
    v4 = (_DWORD *)*((_DWORD *)FootClass_Array.? + i); /*0x50d725*/
    v5 = HIWORD(a2) + *(_WORD *)&g_MissionQueueFrame.waypoints[4 * v30 + 2152]; /*0x50d73c*/
    v6 = (_WORD *)(4 * v30 + 11261072); /*0x50d741*/
    LOWORD(v31) = a2 + *(_WORD *)&g_MissionQueueFrame.waypoints[4 * v30 + 2150]; /*0x50d74b*/
    HIWORD(v31) = v5; /*0x50d750*/
    *(_DWORD *)v29 = v31; /*0x50d759*/
    if ( (ObjectClass *)v4[135] != v2 ) /*0x50d765*/
      goto LABEL_25; /*0x50d765*/
    if ( !v4 || (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 1 || v4[71] ) /*0x50d783*/
      break; /*0x50d783*/
    v7 = *v4; /*0x50d791*/
    v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x50d7a5*/
    for ( i = (*(int (__thiscall **)(_DWORD *, void *, int, int, _DWORD, int))(v7 + 428))(v4, v8, -1, -1, 0, 1); /*0x50d7b5*/
          i;
          i = (*(int (__thiscall **)(_DWORD *, void *, int, int, _DWORD, int))(v10 + 428))(v4, v11, -1, -1, 0, 1) )
    {
      v6 += 2; /*0x50d7bb*/
      ++v30; /*0x50d7c5*/
      if ( (int)v6 > (int)&g_MissionQueueFrame.uiNameLoaded[54] ) /*0x50d7c9*/
        return i; /*0x50d7c9*/
      v9 = HIWORD(a2) + v6[1]; /*0x50d7d6*/
      v32[0] = a2 + *v6; /*0x50d7e0*/
      v32[1] = v9; /*0x50d7e7*/
      *(_DWORD *)v29 = *(_DWORD *)v32; /*0x50d7f9*/
      v10 = *v4; /*0x50d7fd*/
      v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x50d804*/
    }
    v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x50d816*/
    v13 = *v4; /*0x50d827*/
    v14 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v12 + 72))(v12, v36); /*0x50d830*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(v13 + 1288))(v4, *v14, v14[1], v14[2]) ) /*0x50d84a*/
    {
      LOWORD(i) = ++v30; /*0x50d85c*/
      if ( v30 > 350 ) /*0x50d866*/
        return i; /*0x50d866*/
    }
LABEL_25:
    i = --v34; /*0x50d998*/
    if ( v34 < 0 ) /*0x50d9a1*/
      return i; /*0x50d9a1*/
    v2 = v35; /*0x50d71b*/
  }
  if ( (ObjectClass *)v4[135] != v2 || !v4 || (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 15 || v4[71] ) /*0x50d895*/
    goto LABEL_25; /*0x50d89d*/
  v15 = *v4; /*0x50d8a3*/
  v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x50d8b7*/
  i = (*(int (__thiscall **)(_DWORD *, void *, int, int, _DWORD, int))(v15 + 428))(v4, v16, -1, -1, 0, 1); /*0x50d8bf*/
  if ( !i ) /*0x50d8c7*/
  {
LABEL_23:
    v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x50d928*/
    v21 = *v4; /*0x50d939*/
    v25 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v20 + 72))( /*0x50d94b*/
                      v20,
                      v37,
                      0,
                      0,
                      0);
    v22 = (ObjectPlacement *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v32); /*0x50d95b*/
    v23 = ObjectPlacement::CalcPosition(v22, (int *)&retaddr, v25, v26, v27, v28); /*0x50d962*/
    v26 = *v23; /*0x50d96e*/
    v27 = v23[1]; /*0x50d976*/
    v28 = v23[2]; /*0x50d979*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(v21 + 1288))(v4) ) /*0x50d97e*/
    {
      LOWORD(i) = ++v30; /*0x50d98c*/
      if ( v30 > 350 ) /*0x50d996*/
        return i; /*0x50d996*/
    }
    goto LABEL_25; /*0x50d996*/
  }
  while ( 1 ) /*0x50d8cd*/
  {
    v6 += 2; /*0x50d8cd*/
    ++v30; /*0x50d8d7*/
    if ( (int)v6 > (int)&g_MissionQueueFrame.uiNameLoaded[54] ) /*0x50d8db*/
      return i; /*0x50d9a7*/
    v17 = HIWORD(a2) + v6[1]; /*0x50d8e8*/
    LOWORD(v33) = a2 + *v6; /*0x50d8f2*/
    HIWORD(v33) = v17; /*0x50d8f9*/
    *(_DWORD *)v29 = v33; /*0x50d90b*/
    v18 = *v4; /*0x50d90f*/
    v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x50d916*/
    i = (*(int (__thiscall **)(_DWORD *, void *, int, int, _DWORD, int))(v18 + 428))(v4, v19, -1, -1, 0, 1); /*0x50d91e*/
    if ( !i ) /*0x50d926*/
      goto LABEL_23; /*0x50d926*/
  }
}



// ==== 0x0050D9C0  TechnoClass::processExperienceGain  this=TechnoClass  sig=csp ====
BOOL __thiscall IsTechInfiltrated(TechnoClass *this)
{
  return this->firepowerMultiplier[1] > 0; /*0x50d9cd*/
}



// ==== 0x0050D9D0  TechnoClass::updateVeterancy  this=TechnoClass  sig=csp ====
BOOL __thiscall IsProductionInfiltrated(TechnoClass *this)
{
  return this->idleActionTimer[0] > 0; /*0x50d9dd*/
}



// ==== 0x0050D9E0  HouseClass::GetInfSelfHealStep  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GetInfSelfHealStep(HouseClass *this)
{
  return *(_DWORD *)&this->__pad_13C[40] * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 52); /*0x50d9ef*/
}



// ==== 0x0050D9F0  HouseClass::GetUnitSelfHealStep  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GetUnitSelfHealStep(HouseClass *this)
{
  return *(_DWORD *)&this->__pad_13C[44] * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 60); /*0x50d9ff*/
}



// ==== 0x0050DA00  TActionClass::executeGuardAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::executeGuardAction(TActionClass *this, int a2)
{
  *((_DWORD *)this + 5436) = a2; /*0x50da04*/
  return a2; /*0x50da0a*/
}



// ==== 0x0050DA10  ObjectClass::GlobalHelper_0E4440_Helper  this=ObjectClass  sig=csp ====
int __thiscall GlobalHelper_0E4440_Helper(ObjectClass *this)
{
  int result; // eax

  result = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50da10*/
  *((_DWORD *)this + 5436) = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50da15*/
  return result; /*0x50da1b*/
}



// ==== 0x0050DA20  TActionClass::executeHuntAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::executeHuntAction(TActionClass *this, int a2)
{
  *((_DWORD *)this + 5437) = a2; /*0x50da24*/
  *((_DWORD *)this + 5439) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x50da30*/
  return a2; /*0x50da36*/
}



// ==== 0x0050DA40  ObjectClass::method_50DA40  this=ObjectClass  sig=csp ====
int __thiscall sub_50DA40(ObjectClass *this, int a2)
{
  *((_DWORD *)this + 5438) = a2; /*0x50da44*/
  return a2; /*0x50da4a*/
}



// ==== 0x0050DA50  ObjectClass::GlobalHelper_0E44C0_Helper  this=ObjectClass  sig=csp ====
int __thiscall GlobalHelper_0E44C0_Helper(ObjectClass *this)
{
  int result; // eax

  result = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50da50*/
  *((_DWORD *)this + 5439) = -100; /*0x50da55*/
  *((_DWORD *)this + 5437) = result; /*0x50da5f*/
  *((_DWORD *)this + 5438) = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50da6b*/
  return result; /*0x50da71*/
}



// ==== 0x0050DA80  HouseClass::GetTransitionCount  this=TOP  sig=csp ====
int __thiscall HouseClass::GetTransitionCount(HouseClass *this)
{
  int result; // eax

  result = this->HouseClass_field_timer_C[0]; /*0x50da80*/
  if ( (unsigned int)result >= 4 ) /*0x50da88*/
    return 0; /*0x50da8f*/
  return result; /*0x50da91*/
}



// ==== 0x0050DAA0  FootClass::checkTurning  this=FootClass  sig=csp ====
unsigned int __thiscall FootClass::checkTurning(FootClass *this)
{
  unsigned int result; // eax

  result = this->?[0]; /*0x50daa0*/
  if ( result >= 4 ) /*0x50daa8*/
    return 0; /*0x50daaf*/
  return result; /*0x50dab1*/
}



// ==== 0x0050DAC0  TechnoClass::MapHouseRelationIndex  this=TOP  sig=csp ====
int __thiscall TechnoClass::MapHouseRelationIndex(TechnoClass *this)
{
  int result; // eax

  switch ( *((_DWORD *)this + 5599) ) /*0x50dacb*/
  {
    case 0: /*0x50dacb*/
      result = 2; /*0x50dad2*/
      break; /*0x50dad7*/
    case 1: /*0x50dacb*/
      result = 3; /*0x50dad8*/
      break; /*0x50dadd*/
    case 3: /*0x50dacb*/
      result = 1; /*0x50dade*/
      break; /*0x50dae3*/
    default:
      result = 0; /*0x50dae4*/
      break; /*0x50dae4*/
  }
  return result; /*0x50dad7*/
}



// ==== 0x0050DB00  House::ChooseHouseEnemy  this=House  sig=csp ====
int __thiscall House::ChooseHouseEnemy(House *this, int a2)
{
  double v2; // st7
  int v3; // edx
  int v4; // ebx
  House *v5; // esi
  int v6; // edi
  int v7; // ebp
  int *v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int *v12; // ecx
  int *v13; // eax
  int result; // eax
  CellClass *v15; // eax
  int smudgeTypeIndex_low; // esi
  int smudgeTypeIndex_high; // edi
  _DWORD *v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ebp
  _DWORD *v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ebx
  _DWORD *v26; // eax
  int v27; // ecx
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // ecx
  int v31; // eax
  double v32; // [esp+4h] [ebp-40h]
  double v33; // [esp+4h] [ebp-40h]
  double v34; // [esp+4h] [ebp-40h]
  double v35; // [esp+4h] [ebp-40h]
  int v37; // [esp+20h] [ebp-24h] BYREF
  int v38; // [esp+24h] [ebp-20h]
  _DWORD v39[3]; // [esp+2Ch] [ebp-18h] BYREF
  int v40; // [esp+38h] [ebp-Ch] BYREF
  int v41; // [esp+3Ch] [ebp-8h]
  int v42; // [esp+40h] [ebp-4h]
  int v43; // [esp+48h] [ebp+4h]
  int v44; // [esp+48h] [ebp+4h]

  v3 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x50db03*/
  v4 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x50db0a*/
  v5 = this; /*0x50db12*/
  v6 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x50db19*/
  v40 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x50db25*/
  v41 = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x50db29*/
  v42 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x50db2d*/
  v7 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x50db31*/
  if ( a2 && *(_BYTE *)(a2 + 979) && *(_DWORD *)(*(_DWORD *)(a2 + 1312) + 3768) == 7 ) /*0x50db4c*/
  {
    v8 = (int *)(*(int (__stdcall **)(_DWORD *))(*(_DWORD *)a2 + 72))(v39); /*0x50db58*/
    v9 = *v8; /*0x50db5a*/
    v40 = *v8; /*0x50db5c*/
    v41 = v8[1]; /*0x50db63*/
    v42 = v8[2]; /*0x50db6a*/
    goto LABEL_20; /*0x50db6e*/
  }
  if ( !*(_DWORD *)&this->__pad_2B0[64] || (v10 = 0, v43 = 0, (int)this->House_field_0x78 <= 0) ) /*0x50db8c*/
  {
LABEL_23:
    v9 = v6; /*0x50dc5c*/
    v41 = v4; /*0x50dc5e*/
    v40 = v6; /*0x50dc62*/
    v42 = v7; /*0x50dc66*/
    goto LABEL_24; /*0x50dc66*/
  }
  while ( 1 ) /*0x50dba1*/
  {
    v11 = *(_DWORD *)(*(_DWORD *)&v5->__pad_2D[63] + 4 * v10); /*0x50dba1*/
    if ( !v11 || *(_BYTE *)(v11 + 129) ) /*0x50dba8*/
      goto LABEL_18; /*0x50dbb0*/
    if ( *(_BYTE *)(*(_DWORD *)(v11 + 1312) + 5817) ) /*0x50dbb8*/
      break; /*0x50dbb8*/
    if ( v6 == *(_DWORD *)&stru_A8EB00.?[1044] && v4 == *(_DWORD *)&stru_A8EB00.?[1048] && v7 == v3 ) /*0x50dc06*/
    {
      v13 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v11 + 72))(v11, &v37); /*0x50dc11*/
      v6 = *v13; /*0x50dc14*/
      v4 = v13[1]; /*0x50dc16*/
      v7 = v13[2]; /*0x50dc19*/
    }
LABEL_18:
    v10 = v43 + 1; /*0x50dc1c*/
    v43 = v10; /*0x50dc28*/
    if ( v10 >= (int)this->House_field_0x78 ) /*0x50dc2e*/
    {
      v9 = v40; /*0x50dc34*/
      v5 = this; /*0x50dc38*/
      goto LABEL_20; /*0x50dc38*/
    }
    v5 = this; /*0x50db94*/
    v3 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x50db98*/
  }
  v12 = (int *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v11 + 72))(v11, v39); /*0x50dbce*/
  v9 = *v12; /*0x50dbd0*/
  v40 = *v12; /*0x50dbd2*/
  v41 = v12[1]; /*0x50dbd9*/
  v42 = v12[2]; /*0x50dbe0*/
  if ( !*(_BYTE *)(v11 + 979) ) /*0x50dbe4*/
    goto LABEL_18; /*0x50dbec*/
  v5 = this; /*0x50dca9*/
LABEL_20:
  if ( v9 == *(_DWORD *)&stru_A8EB00.?[1044] ) /*0x50dc40*/
  {
    v3 = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x50dc4e*/
    if ( v41 == *(_DWORD *)&stru_A8EB00.?[1048] && v42 == *(_DWORD *)&stru_A8EB00.?[1052] ) /*0x50dc5a*/
      goto LABEL_23; /*0x50dc5a*/
LABEL_24:
    if ( v9 == *(_DWORD *)&stru_A8EB00.?[1044] && v41 == *(_DWORD *)&stru_A8EB00.?[1048] && v42 == v3 ) /*0x50dc84*/
    {
      result = *(_DWORD *)&v5[17].__pad_C[12]; /*0x50dc86*/
      if ( result >= 0 ) /*0x50dc8e*/
      {
        if ( result > 3 ) /*0x50dc97*/
          return 0; /*0x50dca0*/
        return result; /*0x50dca6*/
      }
      return 0; /*0x50dede*/
    }
  }
  v15 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v40); /*0x50dcb9*/
  smudgeTypeIndex_low = SLOWORD(v15->smudgeTypeIndex); /*0x50dcbe*/
  smudgeTypeIndex_high = SHIWORD(v15->smudgeTypeIndex); /*0x50dcc2*/
  v37 = *(_DWORD *)&stru_87F5F0.__pad_58[676] / 2; /*0x50dcd9*/
  v38 = 1; /*0x50dce3*/
  v18 = HexCoord::Convert((HexCoord *)&stru_87F5F0.__pad_58[416], v39, &v37); /*0x50dceb*/
  v19 = v18[1]; /*0x50dcfd*/
  v37 = smudgeTypeIndex_low - *v18; /*0x50dd00*/
  v38 = smudgeTypeIndex_high - v19; /*0x50dd06*/
  __asm /*0x50dd0a*/
  {
    fild [esp+40h+var_20]
    fild [esp+40h+var_24]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+40h+var_44+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v32); /*0x50dd23*/
  LOWORD(v20) = Math::RoundToInt(v2); /*0x50dd2b*/
  v21 = v20; /*0x50dd3c*/
  v37 = *(_DWORD *)&stru_87F5F0.__pad_58[676]; /*0x50dd3e*/
  v38 = *(_DWORD *)&stru_87F5F0.__pad_58[680]; /*0x50dd51*/
  v22 = HexCoord::Convert((HexCoord *)&stru_87F5F0.__pad_58[416], v39, &v37); /*0x50dd55*/
  v23 = v22[1]; /*0x50dd61*/
  v37 = smudgeTypeIndex_low - *v22; /*0x50dd6c*/
  v38 = smudgeTypeIndex_high - v23; /*0x50dd70*/
  __asm /*0x50dd74*/
  {
    fild [esp+40h+var_20]
    fild [esp+40h+var_24]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+40h+var_44+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v33); /*0x50dd8d*/
  LOWORD(v24) = Math::RoundToInt(v2); /*0x50dd95*/
  v25 = v24; /*0x50dd9a*/
  v37 = *(_DWORD *)&stru_87F5F0.__pad_58[676] / 2; /*0x50dda6*/
  v38 = 2 * *(_DWORD *)&stru_87F5F0.__pad_58[680]; /*0x50ddc2*/
  v26 = HexCoord::Convert((HexCoord *)&stru_87F5F0.__pad_58[416], v39, &v37); /*0x50ddc6*/
  v27 = v26[1]; /*0x50ddd2*/
  v37 = smudgeTypeIndex_low - *v26; /*0x50dddd*/
  v38 = smudgeTypeIndex_high - v27; /*0x50dde1*/
  __asm /*0x50dde5*/
  {
    fild [esp+40h+var_20]
    fild [esp+40h+var_24]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+40h+var_44+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v34); /*0x50ddfe*/
  LOWORD(v28) = Math::RoundToInt(v2); /*0x50de06*/
  v44 = v28; /*0x50de11*/
  v38 = *(_DWORD *)&stru_87F5F0.__pad_58[680]; /*0x50de1d*/
  v37 = 0; /*0x50de28*/
  v29 = HexCoord::Convert((HexCoord *)&stru_87F5F0.__pad_58[416], v39, &v37); /*0x50de30*/
  v30 = v29[1]; /*0x50de3e*/
  v37 = smudgeTypeIndex_low - *v29; /*0x50de41*/
  v38 = smudgeTypeIndex_high - v30; /*0x50de47*/
  __asm /*0x50de4b*/
  {
    fild [esp+40h+var_20]
    fild [esp+40h+var_24]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+40h+var_44+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v35); /*0x50de64*/
  LOWORD(v31) = Math::RoundToInt(v2); /*0x50de6c*/
  if ( v21 > v25 || v21 > v44 || v21 > v31 ) /*0x50de7f*/
  {
    if ( v25 > v44 || v25 > v31 ) /*0x50de97*/
    {
      if ( v44 > v31 ) /*0x50deab*/
        *((_DWORD *)this + 5599) = 3; /*0x50dec1*/
      else
        *((_DWORD *)this + 5599) = 2; /*0x50deb1*/
    }
    else
    {
      *((_DWORD *)this + 5599) = 1; /*0x50de9d*/
    }
  }
  else
  {
    *((_DWORD *)this + 5599) = 0; /*0x50de85*/
  }
  result = *((_DWORD *)this + 5599); /*0x50decf*/
  if ( (unsigned int)result >= 4 ) /*0x50ded7*/
    return 0; /*0x50ded7*/
  return result; /*0x50dc9d*/
}



// ==== 0x0050DEF0  HouseClass::GetCurrentOption  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::GetCurrentOption(HouseClass *this, _DWORD *a2)
{
  if ( LOWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[948] /*0x50df0e*/
    && HIWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[950] )
  {
    *a2 = this->baseSpawnCell[0]; /*0x50df1a*/
    return a2; /*0x50df10*/
  }
  else
  {
    *a2 = this->baseCenter[0]; /*0x50df29*/
    return a2; /*0x50df1f*/
  }
}



// ==== 0x0050DF30  HouseClass::GetStartCoords  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::GetStartCoords(HouseClass *this, _DWORD *a2)
{
  int v2; // ecx
  void *v4; // eax
  _DWORD *v5; // edx
  __int16 v6[2]; // [esp+4h] [ebp-10h] BYREF
  _BYTE v7[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( LOWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[948] /*0x50df4f*/
    && HIWORD(this->baseCenter[0]) == *(_WORD *)&stru_A8EB00.?[950] )
  {
    v2 = this->baseSpawnCell[0]; /*0x50df51*/
  }
  else
  {
    v2 = this->baseCenter[0]; /*0x50df59*/
  }
  *(_DWORD *)v6 = v2; /*0x50df66*/
  if ( v2 == *(_DWORD *)&stru_A8EB00.?[948] ) /*0x50df6a*/
  {
    *a2 = *(_DWORD *)&stru_A8EB00.?[1044]; /*0x50df7f*/
    a2[1] = *(_DWORD *)&stru_A8EB00.?[1048]; /*0x50df87*/
    a2[2] = *(_DWORD *)&stru_A8EB00.?[1052]; /*0x50df90*/
    return a2; /*0x50df73*/
  }
  else
  {
    v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v6); /*0x50dfa4*/
    v5 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v7); /*0x50dfb5*/
    *a2 = *v5; /*0x50dfbf*/
    a2[1] = v5[1]; /*0x50dfc4*/
    a2[2] = v5[2]; /*0x50dfcb*/
    return a2; /*0x50dfb7*/
  }
}



// ==== 0x0050DFE0  TActionClass::executeDeployAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::executeDeployAction(TActionClass *this, int a2)
{
  *((_DWORD *)this + 5413) = a2; /*0x50dfe4*/
  return a2; /*0x50dfea*/
}



// ==== 0x0050DFF0  ObjectClass::GlobalHelper_0E4540_Helper  this=ObjectClass  sig=csp ====
int __thiscall GlobalHelper_0E4540_Helper(ObjectClass *this)
{
  int result; // eax

  result = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50dff0*/
  *((_DWORD *)this + 5413) = *(_DWORD *)&stru_A8EB00.?[948]; /*0x50dff5*/
  return result; /*0x50dffb*/
}



// ==== 0x0050E000  HouseClass::SetMapSeed  this=HouseClass  sig=csp ====
int __thiscall HouseClass::SetMapSeed(HouseClass *this, int a2)
{
  this->baseSpawnCell[0] = a2; /*0x50e004*/
  return a2; /*0x50e00a*/
}



// ==== 0x0050E010  TechnoClass::Find  this=TechnoClass  sig=csp ====
void __thiscall sub_50E010(int this, int a2)
{
  int v3; // eax
  char v4; // bl
  int v5; // ebp
  int v6; // esi

  v3 = *(_DWORD *)(this + 728) + 1; /*0x50e01c*/
  *(_DWORD *)(this + 728) = v3; /*0x50e01e*/
  if ( v3 == 1 ) /*0x50e027*/
  {
    if ( a2 ) /*0x50e033*/
    {
      v4 = 0; /*0x50e03e*/
      v5 = dword_A8EC88 - 1; /*0x50e040*/
      if ( dword_A8EC88 - 1 >= 0 ) /*0x50e045*/
      {
        do /*0x50e081*/
        {
          v6 = *((_DWORD *)dword_A8EC7C + v5); /*0x50e052*/
          if ( *(_DWORD *)(v6 + 540) == this /*0x50e06d*/
            && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 132))(*((_DWORD *)dword_A8EC7C + v5)) == a2
            && !*(_BYTE *)(v6 + 129) )
          {
            TechnoClass::Activate((_DWORD *)v6); /*0x50e079*/
            v4 = 1; /*0x50e07e*/
          }
          --v5; /*0x50e080*/
        }
        while ( v5 >= 0 ); /*0x50e081*/
        if ( v4 && byte_A8E9A0 ) /*0x50e08f*/
        {
          if ( dword_A8B238[0] ) /*0x50e098*/
          {
            if ( (#375 *)this != dword_A83D4C ) /*0x50e0bb*/
              return; /*0x50e0bb*/
            goto LABEL_16; /*0x50e0bb*/
          }
          if ( *(_BYTE *)(this + 492) || *(_BYTE *)(this + 493) ) /*0x50e0a4*/
          {
LABEL_16:
            if ( !dword_A8E7AC ) /*0x50e0c4*/
              VoxClass::FindAndPlay(stru_824FE4, -1); /*0x50e0d0*/
          }
        }
      }
    }
  }
}



// ==== 0x0050E0E0  HouseClass::LostPoweredCenter  this=HouseClass  sig=csp ====
void __thiscall HouseClass::LostPoweredCenter(int this, int a2)
{
  int v3; // eax
  char v4; // bl
  int v5; // edi
  int v6; // esi

  v3 = *(_DWORD *)(this + 728) - 1; /*0x50e0eb*/
  *(_DWORD *)(this + 728) = v3; /*0x50e0ec*/
  if ( !v3 ) /*0x50e0f2*/
  {
    if ( a2 ) /*0x50e0fe*/
    {
      v4 = 0; /*0x50e109*/
      v5 = dword_A8EC88 - 1; /*0x50e10b*/
      if ( dword_A8EC88 - 1 >= 0 ) /*0x50e110*/
      {
        do /*0x50e14c*/
        {
          v6 = *((_DWORD *)dword_A8EC7C + v5); /*0x50e11d*/
          if ( *(_DWORD *)(v6 + 540) == this /*0x50e138*/
            && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 132))(*((_DWORD *)dword_A8EC7C + v5)) == a2
            && !*(_BYTE *)(v6 + 129) )
          {
            TechnoClass::Deactivate((_DWORD *)v6); /*0x50e144*/
            v4 = 1; /*0x50e149*/
          }
          --v5; /*0x50e14b*/
        }
        while ( v5 >= 0 ); /*0x50e14c*/
        if ( v4 && byte_A8E9A0 ) /*0x50e15a*/
        {
          if ( dword_A8B238[0] ) /*0x50e163*/
          {
            if ( (#375 *)this != dword_A83D4C ) /*0x50e186*/
              return; /*0x50e186*/
            goto LABEL_16; /*0x50e186*/
          }
          if ( *(_BYTE *)(this + 492) || *(_BYTE *)(this + 493) ) /*0x50e16f*/
          {
LABEL_16:
            if ( !dword_A8E7AC ) /*0x50e18f*/
              VoxClass::FindAndPlay(g_Str_EVA_RobotTanksOffline, -1); /*0x50e19b*/
          }
        }
      }
    }
  }
}



// ==== 0x0050E1B0  HouseClass::GainedPoweredCenter  this=HouseClass  sig=csp ====
BOOL __thiscall HouseClass::GainedPoweredCenter(HouseClass *this, int a2)
{
  return this->poweredUnitCenters > 0; /*0x50e1bd*/
}



// ==== 0x0050E1C0  TechnoClass::Process  this=TechnoClass  sig=csp ====
void __thiscall TechnoClass::Process(TechnoClass *this, int a2)
{
  char v3; // bl
  int v4; // edi
  int v5; // esi

  if ( a2 ) /*0x50e1cb*/
  {
    v3 = 0; /*0x50e1d6*/
    v4 = *(_DWORD *)&stru_A8EB00.?[164] - 1; /*0x50e1d8*/
    if ( *(_DWORD *)&stru_A8EB00.?[164] - 1 >= 0 ) /*0x50e1dd*/
    {
      do /*0x50e219*/
      {
        v5 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v4); /*0x50e1ea*/
        if ( *(TechnoClass **)(v5 + 540) == this /*0x50e205*/
          && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 132))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v4)) == a2
          && !*(_BYTE *)(v5 + 129) )
        {
          TechnoClass::Deactivate((TechnoClass *)v5); /*0x50e211*/
          v3 = 1; /*0x50e216*/
        }
        --v4; /*0x50e218*/
      }
      while ( v4 >= 0 ); /*0x50e219*/
      if ( v3 && byte_A8E9A0 ) /*0x50e227*/
      {
        if ( *(_DWORD *)&dword_A8B238 ) /*0x50e230*/
        {
          if ( this != (TechnoClass *)dword_A83D4C ) /*0x50e253*/
            return; /*0x50e253*/
          goto LABEL_15; /*0x50e253*/
        }
        if ( LOBYTE(this->disguiseBlinkTimer[0]) || BYTE1(this->disguiseBlinkTimer[0]) ) /*0x50e23c*/
        {
LABEL_15:
          if ( !dword_A8E7AC ) /*0x50e25c*/
            VoxClass::FindAndPlay(&g_Str_EVA_RobotTanksOffline, -1); /*0x50e268*/
        }
      }
    }
  }
}



// ==== 0x0050E280  HouseClass::ReactivateTechnos  this=HouseClass  sig=csp ====
void __thiscall HouseClass::ReactivateTechnos(HouseClass *this, int a2)
{
  char v3; // bl
  int v4; // edi
  TechnoClass *v5; // esi

  if ( a2 ) /*0x50e28b*/
  {
    v3 = 0; /*0x50e296*/
    v4 = *(_DWORD *)&stru_A8EB00.?[164] - 1; /*0x50e298*/
    if ( *(_DWORD *)&stru_A8EB00.?[164] - 1 >= 0 ) /*0x50e29d*/
    {
      do /*0x50e2d9*/
      {
        v5 = *(TechnoClass **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v4); /*0x50e2aa*/
        if ( v5->owner == this /*0x50e2c5*/
          && (*((int (__thiscall **)(_DWORD))v5->RadioClass + 33))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v4)) == a2
          && !v5->? )
        {
          TechnoClass::Activate(v5); /*0x50e2d1*/
          v3 = 1; /*0x50e2d6*/
        }
        --v4; /*0x50e2d8*/
      }
      while ( v4 >= 0 ); /*0x50e2d9*/
      if ( v3 && byte_A8E9A0 ) /*0x50e2e7*/
      {
        if ( *(_DWORD *)&dword_A8B238 ) /*0x50e2f0*/
        {
          if ( this != (HouseClass *)dword_A83D4C ) /*0x50e313*/
            return; /*0x50e313*/
          goto LABEL_15; /*0x50e313*/
        }
        if ( this->currentPlayer || this->playerControl ) /*0x50e2fc*/
        {
LABEL_15:
          if ( !dword_A8E7AC ) /*0x50e31c*/
            VoxClass::FindAndPlay(&stru_824FE4, -1); /*0x50e328*/
        }
      }
    }
  }
}



// ==== 0x0050E340  HouseClass::COMStub_Ret1_1  this=HouseClass  sig=csp ====
int __stdcall HouseClass::COMStub_Ret1_1(HouseClass *this)
{
  return 1; /*0x50e345*/
}



// ==== 0x0050E350  HouseClass::COMStub_Ret1_2  this=HouseClass  sig=csp ====
int __stdcall HouseClass::COMStub_Ret1_2(HouseClass *this)
{
  return 1; /*0x50e355*/
}



// ==== 0x0050E360  AbstractClass::computeMovementCost  this=AbstractClass  sig=csp ====
int AbstractClass::computeMovementCost(AbstractClass *this)
{
  return 13; /*0x50e365*/
}



// ==== 0x0050E370  AbstractClass::checkPassability  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::checkPassability(AbstractClass *this)
{
  return this->ptr_10; /*0x50e373*/
}



// ==== 0x0050E380  AbstractClass::getMovementSpeed  this=AbstractClass  sig=csp ====
void *__thiscall AbstractClass::getMovementSpeed(AbstractClass *this, char a2)
{
  HouseClass::Destruct((int)this); /*0x50e383*/
  if ( (a2 & 1) != 0 ) /*0x50e38d*/
    __3_YAXPAX_Z(this); /*0x50e390*/
  return this; /*0x50e39a*/
}



// ==== 0x0050E3A0  sub_50E3A0  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_50E3A0(_DWORD *a1, int *a2, __int16 *a3, int a4)
{
  int v6; // ebx
  double v7; // st7
  double v8; // st7
  double v10; // [esp+10h] [ebp-18h]
  double v11; // [esp+18h] [ebp-10h]
  double v12; // [esp+20h] [ebp-8h]
  int v13; // [esp+2Ch] [ebp+4h]

  v6 = a2[2]; /*0x50e3c0*/
  v10 = (double)(*a3 - 0x3FFF) * -0.00009587672516830327; /*0x50e3c9*/
  v11 = (double)a4; /*0x50e3db*/
  v12 = (double)a2[1]; /*0x50e3e2*/
  v7 = Math::SinCos(v10); /*0x50e3e6*/
  v13 = Math::RoundToInt(v12 - v7 * v11); /*0x50e3f8*/
  v8 = Math::ArcTan2(v10); /*0x50e402*/
  *a1 = Math::RoundToInt(v8 * v11 + (double)*a2); /*0x50e41b*/
  a1[1] = v13; /*0x50e421*/
  a1[2] = v6; /*0x50e425*/
  return a1; /*0x50e41f*/
}



// ==== 0x0050E430  HouseClass::processRadar  this=HouseClass  sig=csp ====
char __thiscall HouseClass::processRadar(HouseClass *this, char a2, char a3, char a4)
{
  LOBYTE(this->AbstractClass) = a2; /*0x50e438*/
  BYTE1(this->AbstractClass) = a3; /*0x50e43e*/
  BYTE2(this->AbstractClass) = a4; /*0x50e441*/
  return a4; /*0x50e444*/
}



// ==== 0x0050E450  BuildLocation::InitCandidate  this=BuildLocation  sig=csp ====
_DWORD *__thiscall BuildLocation::InitCandidate(BuildLocation *this, int a2, _DWORD *a3)
{
  *this = (BuildLocation)a2; /*0x50e45a*/
  *(this + 1) = *(BuildLocation *)a3; /*0x50e45e*/
  *((_BYTE *)this + 8) = 0; /*0x50e463*/
  *((_DWORD *)this + 3) = 0; /*0x50e466*/
  return this; /*0x50e469*/
}



// ==== 0x0050E470  CellStruct::Equals  this=IUnknown  sig=csp ====
int __thiscall CellStruct::Equals(CellStruct *this, _WORD *a2)
{
  return LOWORD(this->field_0) == *a2 && HIWORD(this->field_0) == a2[1]; /*0x50e48b*/
}



// ==== 0x0050E4A0  _DynamicVectorClass_PBVBuildingTypeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_UScoutStruct___33::ddtor(_DynamicVectorClass_PBVBuildingTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x50e4a6*/
  this->m_10 = 0; /*0x50e4a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x50e4b0*/
  {
    __3_YAXPAX_Z(v2); /*0x50e4b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50e4be*/
  }
  BYTE1(this->m_C) = 0; /*0x50e4c1*/
  this->m_8 = 0; /*0x50e4c4*/
}



// ==== 0x0050E4D0  _DynamicVectorClass_PBVBuildingTypeClass::GetCapacity  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_UScoutStruct___33::GetCapacity(
        _DynamicVectorClass_PBVBuildingTypeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50e4d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x50e4e5*/
  else
    return 0; /*0x50e4d7*/
}



// ==== 0x0050E4F0  _VectorClass_PBVBuildingTypeClass::Count  this=VectorClass  sig=csp ====
int __thiscall VectorClass_BuildingType::Count(_VectorClass_PBVBuildingTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x50e4fa*/
}



// ==== 0x0050E500  _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_UAngerStruct::Destroy(_DynamicVectorClass_PAUStartingTechnoStruct_HouseClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x50e506*/
  this->m_10 = 0; /*0x50e509*/
  if ( v2 && BYTE1(this->m_C) ) /*0x50e510*/
  {
    __3_YAXPAX_Z(v2); /*0x50e516*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50e51e*/
  }
  BYTE1(this->m_C) = 0; /*0x50e521*/
  this->m_8 = 0; /*0x50e524*/
}



// ==== 0x0050E530  _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_UAngerStruct::GetItemIndex(
        _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50e530*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x50e545*/
  else
    return 0; /*0x50e537*/
}



// ==== 0x0050E550  _VectorClass_PAUStartingTechnoStruct_HouseClass::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UAngerStruct___16::Clear(_VectorClass_PAUStartingTechnoStruct_HouseClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x50e55a*/
}



// ==== 0x0050E560  _DynamicVectorClass_UAngerStruct::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_UAngerStruct::Destroy_0(_DynamicVectorClass_UAngerStruct *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x50e566*/
  this->m_10 = 0; /*0x50e569*/
  if ( v2 && BYTE1(this->m_C) ) /*0x50e570*/
  {
    __3_YAXPAX_Z(v2); /*0x50e576*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50e57e*/
  }
  BYTE1(this->m_C) = 0; /*0x50e581*/
  this->m_8 = 0; /*0x50e584*/
}



// ==== 0x0050E590  _DynamicVectorClass_UAngerStruct::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_UAngerStruct::GetItemIndex_0(_DynamicVectorClass_UAngerStruct *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50e590*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x50e5a5*/
  else
    return 0; /*0x50e597*/
}



// ==== 0x0050E5B0  _VectorClass_UAngerStruct::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UAngerStruct::Clear(_VectorClass_UAngerStruct *this, _DWORD *a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x50e5b0*/
  v4 = *(_DWORD *)(v3 + 8 * a3); /*0x50e5b7*/
  v5 = v3 + 8 * a3; /*0x50e5ba*/
  *a2 = v4; /*0x50e5c1*/
  a2[1] = *(_DWORD *)(v5 + 4); /*0x50e5c6*/
  return a2; /*0x50e5c9*/
}



// ==== 0x0050E5D0  ?$DynamicVectorClass@UScoutStruct@@::getTargetCoordinates  this=DynamicVector  sig=csp ====
void __thiscall AbstractClass::sub_50E5D0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x50e5d6*/
  *(_DWORD *)(this + 16) = 0; /*0x50e5d9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x50e5e0*/
  {
    __3_YAXPAX_Z(v2); /*0x50e5e6*/
    *(_DWORD *)(this + 4) = 0; /*0x50e5ee*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x50e5f1*/
  *(_DWORD *)(this + 8) = 0; /*0x50e5f4*/
}



// ==== 0x0050E600  ?$DynamicVectorClass@UScoutStruct@@::setTargetCoordinates  this=DynamicVector  sig=csp ====
unsigned int __thiscall AbstractClass::sub_50E600(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x50e600*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x50e615*/
  else
    return 0; /*0x50e607*/
}



// ==== 0x0050E620  _VectorClass_UScoutStruct::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UScoutStruct::Clear(_VectorClass_UScoutStruct *this, int a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x50e620*/
  v4 = *(_DWORD *)(v3 + 8 * a3); /*0x50e627*/
  v5 = v3 + 8 * a3; /*0x50e62a*/
  *(_DWORD *)a2 = v4; /*0x50e631*/
  *(_BYTE *)(a2 + 4) = *(_BYTE *)(v5 + 4); /*0x50e636*/
  return a2; /*0x50e639*/
}



// ==== 0x0050E640  VectorClass_ptr_BuildChoiceClass_int_ouseClass::Destroy_0  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
void __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::Destroy_0(
        VectorClass_ptr_BuildChoiceClass_int_ouseClass *this)
{
  void *Items; // eax

  Items = this->Items; /*0x50e646*/
  this->Count = 0; /*0x50e649*/
  if ( Items && this->IsAllocated ) /*0x50e650*/
  {
    __3_YAXPAX_Z(Items); /*0x50e656*/
    this->Items = 0; /*0x50e65e*/
  }
  this->IsAllocated = 0; /*0x50e661*/
  this->Capacity = 0; /*0x50e664*/
}



// ==== 0x0050E670  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex_1  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex_1(
        VectorClass_ptr_BuildChoiceClass_int_ouseClass *this,
        int a2)
{
  if ( this->IsInitialized ) /*0x50e670*/
    return (a2 - (unsigned int)this->Items) >> 2; /*0x50e685*/
  else
    return 0; /*0x50e677*/
}



// ==== 0x0050E690  _VectorClass_PAUBuildChoiceClass_HouseClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::Get(
        _VectorClass_PAUBuildChoiceClass_HouseClass *this,
        int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x50e69a*/
}



// ==== 0x0050E6A0  _DynamicVectorClass_PBVTeamTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_BuildingType::Destroy(_DynamicVectorClass_PBVTeamTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x50e6a6*/
  this->m_10 = 0; /*0x50e6a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x50e6b0*/
  {
    __3_YAXPAX_Z(v2); /*0x50e6b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50e6be*/
  }
  BYTE1(this->m_C) = 0; /*0x50e6c1*/
  this->m_8 = 0; /*0x50e6c4*/
}



// ==== 0x0050E6D0  _DynamicVectorClass_PBVTeamTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_BuildingType::GetItemIndex(_DynamicVectorClass_PBVTeamTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50e6d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x50e6e5*/
  else
    return 0; /*0x50e6d7*/
}



// ==== 0x0050E6F0  _VectorClass_PBVTeamTypeClass::GetElement  this=VectorClass  sig=csp ====
int __thiscall VectorClass_BuildingType::GetElement(_VectorClass_PBVTeamTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x50e6fa*/
}



// ==== 0x0050E700  _DynamicVectorClass__N::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass__N::Destroy(_DynamicVectorClass__N *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x50e706*/
  this->m_10 = 0; /*0x50e709*/
  if ( v2 && BYTE1(this->m_C) ) /*0x50e710*/
  {
    __3_YAXPAX_Z(v2); /*0x50e716*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50e71e*/
  }
  BYTE1(this->m_C) = 0; /*0x50e721*/
  this->m_8 = 0; /*0x50e724*/
}



// ==== 0x0050E730  _DynamicVectorClass__N::GetItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass__N::GetItemIndex(_DynamicVectorClass__N *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50e730*/
    return a2 - *(_DWORD *)&this->m_1[3]; /*0x50e743*/
  else
    return 0; /*0x50e737*/
}



// ==== 0x0050E750  _VectorClass__N::Clear  this=VectorClass  sig=csp ====
char __thiscall VectorClass__N::Clear(_VectorClass__N *this, int a2)
{
  return *(_BYTE *)(*(_DWORD *)&this->m_1[3] + a2); /*0x50e75a*/
}



// ==== 0x0050E760  _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass__N_18::Destroy(
        _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this)
{
  int v2; // eax

  v2 = *(_DWORD *)&this->m_1[3]; /*0x50e766*/
  this->m_10 = 0; /*0x50e769*/
  if ( v2 && BYTE1(this->m_C) ) /*0x50e770*/
  {
    __3_YAXPAX_Z((void *)(v2 - 4)); /*0x50e781*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50e789*/
  }
  BYTE1(this->m_C) = 0; /*0x50e78c*/
  this->m_8 = 0; /*0x50e78f*/
}



// ==== 0x0050E7A0  _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass__N_18::GetItemIndex(
        _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50e7a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x50e7b5*/
  else
    return 0; /*0x50e7a7*/
}



// ==== 0x0050E7C0  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass__N_18::Clear(
        _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        _DWORD *a2,
        int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x50e7c0*/
  v4 = *(_DWORD *)(v3 + 8 * a3); /*0x50e7c7*/
  v5 = v3 + 8 * a3; /*0x50e7ca*/
  *a2 = v4; /*0x50e7d1*/
  a2[1] = *(_DWORD *)(v5 + 4); /*0x50e7d6*/
  return a2; /*0x50e7d9*/
}



// ==== 0x0050E7E0  _TypeList_PBVTeamTypeClass::Constructor  this=TypeList  sig=csp ====
_DWORD *__thiscall VectorClass_BuildingType::Constructor(_TypeList_PBVTeamTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x50e7e3*/
  *(_DWORD *)this = &VectorClass<TeamTypeClass const *>::`vftable'; /*0x50e7e6*/
  if ( v3 && this->IsAllocated ) /*0x50e7f0*/
  {
    __3_YAXPAX_Z(v3); /*0x50e7f8*/
    this->Items = 0; /*0x50e800*/
  }
  this->IsAllocated = 0; /*0x50e80b*/
  this->Capacity = 0; /*0x50e811*/
  if ( (a2 & 1) != 0 ) /*0x50e818*/
    __3_YAXPAX_Z(this); /*0x50e81b*/
  return this; /*0x50e825*/
}



// ==== 0x0050E830  TeamTypeVector::CopyConstruct  this=VectorClass  sig=csp ====
_DWORD *__thiscall TeamTypeVector::CopyConstruct(TeamTypeVector *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x50e83d*/
  this->Capacity = 0; /*0x50e840*/
  this->IsInitialized = 1; /*0x50e843*/
  this->IsAllocated = 0; /*0x50e847*/
  *this = (TeamTypeVector)&VectorClass<TeamTypeClass const *>::`vftable'; /*0x50e84a*/
  if ( this != (TeamTypeVector *)a2 ) /*0x50e850*/
  {
    VectorClass::ClearAndFree3((int)this); /*0x50e852*/
    v3 = a2[2]; /*0x50e858*/
    this->Capacity = v3; /*0x50e85d*/
    if ( v3 ) /*0x50e860*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x50e866*/
      this->Items = v4; /*0x50e870*/
      if ( v4 ) /*0x50e873*/
      {
        v5 = this->Capacity; /*0x50e875*/
        v6 = 0; /*0x50e878*/
        this->IsAllocated = 1; /*0x50e87c*/
        if ( v5 > 0 ) /*0x50e880*/
        {
          do /*0x50e894*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x50e88b*/
            ++v6; /*0x50e891*/
          }
          while ( v6 < this->Capacity ); /*0x50e894*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x50e898*/
      this->IsAllocated = 0; /*0x50e89b*/
    }
  }
  this->Items = (TeamTypeVector)a2[4]; /*0x50e8a1*/
  *(this + 5) = (TeamTypeVector)a2[5]; /*0x50e8a7*/
  *this = (TeamTypeVector)&DynamicVectorClass<TeamTypeClass const *>::`vftable'; /*0x50e8aa*/
  return this; /*0x50e8b2*/
}



// ==== 0x0050E8C0  _DynamicVectorClass_PBVTeamTypeClass::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass__N_18::Constructor(_DynamicVectorClass_PBVTeamTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x50e8c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TeamTypeClass const *>::`vftable'; /*0x50e8c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x50e8d0*/
  {
    __3_YAXPAX_Z(v3); /*0x50e8d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50e8e0*/
  }
  BYTE1(this->m_C) = 0; /*0x50e8eb*/
  this->m_8 = 0; /*0x50e8f1*/
  if ( (a2 & 1) != 0 ) /*0x50e8f8*/
    __3_YAXPAX_Z(this); /*0x50e8fb*/
  return this->__pad_0; /*0x50e905*/
}



// ==== 0x0050E910  _VectorClass_PBVBuildingTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_BuildingType::AddRef(_VectorClass_PBVBuildingTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x50e912*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x50e91d*/
  {
    v3 = 0; /*0x50e91f*/
    if ( m_8 <= 0 ) /*0x50e923*/
      return 1; /*0x50e943*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x50e925*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x50e92b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x50e934*/
    {
      ++v3; /*0x50e936*/
      ++v4; /*0x50e937*/
      if ( v3 >= m_8 ) /*0x50e93c*/
        return 1; /*0x50e93c*/
    }
  }
  return 0; /*0x50e93e*/
}



// ==== 0x0050E950  _VectorClass_PBVBuildingTypeClass::Set  this=VectorClass  sig=csp ====
char __thiscall VectorClass_BuildingType::Set(_VectorClass_PBVBuildingTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x50e95c*/
  {
    LOBYTE(this->m_C) = 0; /*0x50e966*/
    if ( a3 ) /*0x50e96c*/
      v4 = a3; /*0x50e982*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x50e97e*/
    LOBYTE(this->m_C) = 1; /*0x50e986*/
    if ( v4 ) /*0x50e98a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x50e995*/
      {
        m_8 = this->m_8; /*0x50e99c*/
        if ( a2 < m_8 ) /*0x50e9a1*/
          m_8 = a2; /*0x50e9a3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x50e9a9*/
          ++i; /*0x50e9ae*/
        if ( BYTE1(this->m_C) ) /*0x50e9bb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50e9c6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x50e9ce*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x50e9d7*/
      this->m_8 = a2; /*0x50e9df*/
      BYTE1(this->m_C) = a3 == 0; /*0x50e9e2*/
      return 1; /*0x50e9e8*/
    }
    else
    {
      return 0; /*0x50e98f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVBuildingTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50e9f2*/
    return 1; /*0x50e9f8*/
  }
}



// ==== 0x0050EA00  _VectorClass_PBVBuildingTypeClass::Destroy  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass::Destroy(_VectorClass_PBVBuildingTypeClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->m_1[3]; /*0x50ea06*/
  if ( result && BYTE1(this->m_C) ) /*0x50ea0d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50ea13*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50ea1b*/
  }
  BYTE1(this->m_C) = 0; /*0x50ea1e*/
  this->m_8 = 0; /*0x50ea21*/
  return result; /*0x50ea24*/
}



// ==== 0x0050EA30  _VectorClass_PBVBuildingTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_BuildingType::GetSize(_VectorClass_PBVBuildingTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x50ea30*/
    return 0; /*0x50ea38*/
  m_8 = this->m_8; /*0x50ea3e*/
  result = 0; /*0x50ea41*/
  if ( m_8 <= 0 ) /*0x50ea45*/
    return -1; /*0x50ea5c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x50ea4b*/
  {
    if ( ++result >= m_8 ) /*0x50ea5a*/
      return -1; /*0x50ea5a*/
  }
  return result; /*0x50ea3a*/
}



// ==== 0x0050EA70  _VectorClass_PBVBuildingTypeClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_BuildingType::GetCapacity(_VectorClass_PBVBuildingTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50ea70*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x50ea85*/
  else
    return 0; /*0x50ea77*/
}



// ==== 0x0050EA90  _DynamicVectorClass_PBVBuildingTypeClass::Resize2  this=DynamicVector  sig=csp ====
char __thiscall GenericVector::Resize2(_DynamicVectorClass_PBVBuildingTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x50ea9c*/
  {
    LOBYTE(this->m_C) = 0; /*0x50eaa2*/
    if ( a3 ) /*0x50eaa8*/
      v4 = a3; /*0x50eabe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x50eaba*/
    LOBYTE(this->m_C) = 1; /*0x50eac2*/
    if ( !v4 ) /*0x50eac6*/
      return 0; /*0x50eb3a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x50eac8*/
    {
      m_8 = this->m_8; /*0x50eacf*/
      if ( a2 < m_8 ) /*0x50ead4*/
        m_8 = a2; /*0x50ead6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x50eadc*/
        ++i; /*0x50eae1*/
      if ( BYTE1(this->m_C) ) /*0x50eaee*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50eaf9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x50eb01*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x50eb0a*/
    this->m_8 = a2; /*0x50eb12*/
    BYTE1(this->m_C) = a3 == 0; /*0x50eb15*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVBuildingTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50eb1e*/
  }
  v7 = this->m_8; /*0x50eb21*/
  if ( v7 < this->m_10 ) /*0x50eb29*/
    this->m_10 = v7; /*0x50eb2b*/
  return 1; /*0x50eb2e*/
}



// ==== 0x0050EB40  _DynamicVectorClass_PBVBuildingTypeClass::GetSize  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_UScoutStruct___33::GetSize(_DynamicVectorClass_PBVBuildingTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x50eb40*/
  result = 0; /*0x50eb43*/
  if ( m_10 <= 0 ) /*0x50eb48*/
    return -1; /*0x50eb5f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x50eb4e*/
  {
    if ( ++result >= m_10 ) /*0x50eb5d*/
      return -1; /*0x50eb5d*/
  }
  return result; /*0x50eb62*/
}



// ==== 0x0050EB70  VectorClass::InsertAt  this=VectorClass  sig=csp ====
char __thiscall VectorClass::InsertAt(DynamicVectorClass *this, _DWORD *a2, int a3)
{
  int Capacity; // ecx
  int CapacityIncrement; // eax
  int Count; // edx
  _DWORD *v8; // edi

  Capacity = this->Capacity; /*0x50eb73*/
  if ( this->Count >= Capacity ) /*0x50eb7b*/
  {
    if ( !this->IsAllocated[0] && Capacity ) /*0x50eb86*/
      return 0; /*0x50eb86*/
    CapacityIncrement = this->CapacityIncrement; /*0x50eb88*/
    if ( CapacityIncrement <= 0 /*0x50eb98*/
      || !(*(unsigned __int8 (__thiscall **)(DynamicVectorClass *, int, _DWORD))(this->ptr_0 + 8))(
            this,
            Capacity + CapacityIncrement,
            0) )
    {
      return 0; /*0x50eb9f*/
    }
  }
  Count = this->Count; /*0x50eba5*/
  if ( a3 < Count - 1 ) /*0x50ebb2*/
    memcpy( /*0x50ebd7*/
      (void *)(this->Items + 16 * (a3 + 2)),
      (const void *)(this->Items + 16 * (a3 + 1)),
      16 * (Count + 0xFFFFFFF * (a3 + 1)));
  v8 = (_DWORD *)(this->Items + 16 * (a3 + 1)); /*0x50ebeb*/
  *v8 = *a2; /*0x50ebef*/
  v8[1] = a2[1]; /*0x50ebf4*/
  v8[2] = a2[2]; /*0x50ebfa*/
  v8[3] = a2[3]; /*0x50ec00*/
  ++this->Count; /*0x50ec08*/
  return 1; /*0x50eba1*/
}



// ==== 0x0050EC20  _VectorClass_PAUStartingTechnoStruct_HouseClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UAngerStruct___16::AddRef(_VectorClass_PAUStartingTechnoStruct_HouseClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x50ec22*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x50ec2d*/
  {
    v3 = 0; /*0x50ec2f*/
    if ( m_8 <= 0 ) /*0x50ec33*/
      return 1; /*0x50ec53*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x50ec35*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x50ec3b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x50ec44*/
    {
      ++v3; /*0x50ec46*/
      ++v4; /*0x50ec47*/
      if ( v3 >= m_8 ) /*0x50ec4c*/
        return 1; /*0x50ec4c*/
    }
  }
  return 0; /*0x50ec4e*/
}



// ==== 0x0050EC60  _VectorClass_PAUStartingTechnoStruct_HouseClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UAngerStruct___16::Release(
        _VectorClass_PAUStartingTechnoStruct_HouseClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x50ec6c*/
  {
    LOBYTE(this->m_C) = 0; /*0x50ec76*/
    if ( a3 ) /*0x50ec7c*/
      v4 = a3; /*0x50ec92*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x50ec8e*/
    LOBYTE(this->m_C) = 1; /*0x50ec96*/
    if ( v4 ) /*0x50ec9a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x50eca5*/
      {
        m_8 = this->m_8; /*0x50ecac*/
        if ( a2 < m_8 ) /*0x50ecb1*/
          m_8 = a2; /*0x50ecb3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x50ecb9*/
          ++i; /*0x50ecbe*/
        if ( BYTE1(this->m_C) ) /*0x50eccb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50ecd6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x50ecde*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x50ece7*/
      this->m_8 = a2; /*0x50ecef*/
      BYTE1(this->m_C) = a3 == 0; /*0x50ecf2*/
      return 1; /*0x50ecf8*/
    }
    else
    {
      return 0; /*0x50ec9f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUStartingTechnoStruct_HouseClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50ed02*/
    return 1; /*0x50ed08*/
  }
}



// ==== 0x0050ED10  _VectorClass_PAUStartingTechnoStruct_HouseClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UAngerStruct___16::ddtor(_VectorClass_PAUStartingTechnoStruct_HouseClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x50ed1d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50ed23*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50ed2b*/
  }
  BYTE1(this->m_C) = 0; /*0x50ed2e*/
  this->m_8 = 0; /*0x50ed31*/
}



// ==== 0x0050ED40  _VectorClass_PAUStartingTechnoStruct_HouseClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UAngerStruct___16::GetSize(
        _VectorClass_PAUStartingTechnoStruct_HouseClass *this,
        _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x50ed40*/
    return 0; /*0x50ed48*/
  m_8 = this->m_8; /*0x50ed4e*/
  result = 0; /*0x50ed51*/
  if ( m_8 <= 0 ) /*0x50ed55*/
    return -1; /*0x50ed6c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x50ed5b*/
  {
    if ( ++result >= m_8 ) /*0x50ed6a*/
      return -1; /*0x50ed6a*/
  }
  return result; /*0x50ed4a*/
}



// ==== 0x0050ED80  _VectorClass_PAUStartingTechnoStruct_HouseClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UAngerStruct___16::GetCapacity(
        _VectorClass_PAUStartingTechnoStruct_HouseClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50ed80*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x50ed95*/
  else
    return 0; /*0x50ed87*/
}



// ==== 0x0050EDA0  _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_UAngerStruct::SetCapacity(
        _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x50edac*/
  {
    LOBYTE(this->m_C) = 0; /*0x50edb2*/
    if ( a3 ) /*0x50edb8*/
      v4 = a3; /*0x50edce*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x50edca*/
    LOBYTE(this->m_C) = 1; /*0x50edd2*/
    if ( !v4 ) /*0x50edd6*/
      return 0; /*0x50ee4a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x50edd8*/
    {
      m_8 = this->m_8; /*0x50eddf*/
      if ( a2 < m_8 ) /*0x50ede4*/
        m_8 = a2; /*0x50ede6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x50edec*/
        ++i; /*0x50edf1*/
      if ( BYTE1(this->m_C) ) /*0x50edfe*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50ee09*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x50ee11*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x50ee1a*/
    this->m_8 = a2; /*0x50ee22*/
    BYTE1(this->m_C) = a3 == 0; /*0x50ee25*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUStartingTechnoStruct_HouseClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50ee2e*/
  }
  v7 = this->m_8; /*0x50ee31*/
  if ( v7 < this->m_10 ) /*0x50ee39*/
    this->m_10 = v7; /*0x50ee3b*/
  return 1; /*0x50ee3e*/
}



// ==== 0x0050EE50  _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_UAngerStruct::FindItemIndex(
        _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x50ee50*/
  result = 0; /*0x50ee53*/
  if ( m_10 <= 0 ) /*0x50ee58*/
    return -1; /*0x50ee6f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x50ee5e*/
  {
    if ( ++result >= m_10 ) /*0x50ee6d*/
      return -1; /*0x50ee6d*/
  }
  return result; /*0x50ee72*/
}



// ==== 0x0050EE80  _VectorClass_UAngerStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UAngerStruct::AddRef(_VectorClass_UAngerStruct *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x50ee8b*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x50ee90*/
  {
    v3 = 0; /*0x50ee92*/
    if ( m_8 <= 0 ) /*0x50ee96*/
      return 1; /*0x50eec6*/
    v4 = *(_DWORD *)(a2 + 4); /*0x50ee98*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x50ee9b*/
    v6 = (_DWORD *)(v4 + 4); /*0x50ee9e*/
    v7 = v4 - (_DWORD)v5; /*0x50eea1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x50eeb3*/
    {
      ++v3; /*0x50eeb5*/
      v6 += 2; /*0x50eeb6*/
      v5 += 2; /*0x50eeb9*/
      if ( v3 >= m_8 ) /*0x50eebe*/
        return 1; /*0x50eebe*/
    }
  }
  return 0; /*0x50eec0*/
}



// ==== 0x0050EEE0  _VectorClass_UAngerStruct::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UAngerStruct::Release(_VectorClass_UAngerStruct *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // esi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx

  v3 = a2; /*0x50eee2*/
  if ( a2 ) /*0x50eeee*/
  {
    v5 = a3; /*0x50eef4*/
    LOBYTE(this->m_C) = 0; /*0x50eef8*/
    if ( a3 ) /*0x50eefd*/
    {
      v9 = a3; /*0x50ef33*/
      if ( a2 - 1 >= 0 ) /*0x50ef37*/
      {
        v10 = a2; /*0x50ef39*/
        do /*0x50ef43*/
        {
          *v9 = 0; /*0x50ef3a*/
          v9[1] = 0; /*0x50ef3c*/
          v9 += 2; /*0x50ef3f*/
          --v10; /*0x50ef42*/
        }
        while ( v10 ); /*0x50ef43*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2); /*0x50ef07*/
      if ( v6 ) /*0x50ef11*/
      {
        v7 = (_DWORD *)v6; /*0x50ef16*/
        if ( a2 - 1 >= 0 ) /*0x50ef1a*/
        {
          v8 = a2; /*0x50ef1c*/
          do /*0x50ef26*/
          {
            *v7 = 0; /*0x50ef1d*/
            v7[1] = 0; /*0x50ef1f*/
            v7 += 2; /*0x50ef22*/
            --v8; /*0x50ef25*/
          }
          while ( v8 ); /*0x50ef26*/
        }
        v5 = (_DWORD *)v6; /*0x50ef28*/
      }
      else
      {
        v5 = 0; /*0x50ef2c*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x50ef47*/
    if ( v5 ) /*0x50ef4b*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x50ef56*/
      {
        m_8 = this->m_8; /*0x50ef5b*/
        if ( a2 < m_8 ) /*0x50ef60*/
          m_8 = a2; /*0x50ef62*/
        v13 = 0; /*0x50ef64*/
        if ( m_8 > 0 ) /*0x50ef68*/
        {
          do /*0x50ef87*/
          {
            v14 = 2 * v13; /*0x50ef6d*/
            v15 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * v13++); /*0x50ef76*/
            v5[v14] = *v15; /*0x50ef7d*/
            v5[v14 + 1] = v15[1]; /*0x50ef83*/
          }
          while ( v13 < m_8 ); /*0x50ef87*/
          v3 = a2; /*0x50ef89*/
        }
        if ( BYTE1(this->m_C) ) /*0x50ef8f*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50ef98*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x50efa0*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x50efab*/
      this->m_8 = v3; /*0x50efb1*/
      BYTE1(this->m_C) = a3 == 0; /*0x50efb4*/
      return 1; /*0x50efba*/
    }
    else
    {
      return 0; /*0x50ef50*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_UAngerStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50efc4*/
    return 1; /*0x50efca*/
  }
}



// ==== 0x0050EFD0  _VectorClass_UAngerStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UAngerStruct::ddtor(_VectorClass_UAngerStruct *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x50efdd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50efe3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50efeb*/
  }
  BYTE1(this->m_C) = 0; /*0x50efee*/
  this->m_8 = 0; /*0x50eff1*/
}



// ==== 0x0050F000  _VectorClass_UAngerStruct::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UAngerStruct::GetSize(_VectorClass_UAngerStruct *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x50f000*/
    return 0; /*0x50f00e*/
  m_8 = this->m_8; /*0x50f014*/
  result = 0; /*0x50f017*/
  if ( m_8 <= 0 ) /*0x50f01b*/
    return -1; /*0x50f03c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x50f021*/
  {
    if ( ++result >= m_8 ) /*0x50f03a*/
      return -1; /*0x50f03a*/
  }
  return result; /*0x50f00b*/
}



// ==== 0x0050F050  _VectorClass_UAngerStruct::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UAngerStruct::GetCapacity(_VectorClass_UAngerStruct *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50f050*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x50f065*/
  else
    return 0; /*0x50f057*/
}



// ==== 0x0050F070  _DynamicVectorClass_UAngerStruct::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_UAngerStruct::SetCapacity_0(_DynamicVectorClass_UAngerStruct *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x50f072*/
  if ( a2 ) /*0x50f07e*/
  {
    v5 = a3; /*0x50f084*/
    LOBYTE(this->m_C) = 0; /*0x50f088*/
    if ( a3 ) /*0x50f08d*/
    {
      v9 = a3; /*0x50f0c3*/
      if ( a2 - 1 >= 0 ) /*0x50f0c7*/
      {
        v10 = a2; /*0x50f0c9*/
        do /*0x50f0d3*/
        {
          *v9 = 0; /*0x50f0ca*/
          v9[1] = 0; /*0x50f0cc*/
          v9 += 2; /*0x50f0cf*/
          --v10; /*0x50f0d2*/
        }
        while ( v10 ); /*0x50f0d3*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2); /*0x50f097*/
      if ( v6 ) /*0x50f0a1*/
      {
        v7 = (_DWORD *)v6; /*0x50f0a6*/
        if ( a2 - 1 >= 0 ) /*0x50f0aa*/
        {
          v8 = a2; /*0x50f0ac*/
          do /*0x50f0b6*/
          {
            *v7 = 0; /*0x50f0ad*/
            v7[1] = 0; /*0x50f0af*/
            v7 += 2; /*0x50f0b2*/
            --v8; /*0x50f0b5*/
          }
          while ( v8 ); /*0x50f0b6*/
        }
        v5 = (_DWORD *)v6; /*0x50f0b8*/
      }
      else
      {
        v5 = 0; /*0x50f0bc*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x50f0d7*/
    if ( !v5 ) /*0x50f0db*/
      return 0; /*0x50f164*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x50f0e1*/
    {
      m_8 = this->m_8; /*0x50f0e6*/
      if ( a2 < m_8 ) /*0x50f0eb*/
        m_8 = a2; /*0x50f0ed*/
      v12 = 0; /*0x50f0ef*/
      if ( m_8 > 0 ) /*0x50f0f3*/
      {
        do /*0x50f112*/
        {
          v13 = 2 * v12; /*0x50f0f8*/
          v14 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * v12++); /*0x50f101*/
          v5[v13] = *v14; /*0x50f108*/
          v5[v13 + 1] = v14[1]; /*0x50f10e*/
        }
        while ( v12 < m_8 ); /*0x50f112*/
        v3 = a2; /*0x50f114*/
      }
      if ( BYTE1(this->m_C) ) /*0x50f11a*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50f123*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x50f12b*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x50f136*/
    this->m_8 = v3; /*0x50f13c*/
    BYTE1(this->m_C) = a3 == 0; /*0x50f13f*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_UAngerStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50f148*/
  }
  v15 = this->m_8; /*0x50f14b*/
  if ( v15 < this->m_10 ) /*0x50f153*/
    this->m_10 = v15; /*0x50f155*/
  return 1; /*0x50f158*/
}



// ==== 0x0050F170  _DynamicVectorClass_UAngerStruct::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_UAngerStruct::FindItemIndex_0(_DynamicVectorClass_UAngerStruct *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x50f170*/
  result = 0; /*0x50f175*/
  if ( m_10 <= 0 ) /*0x50f17b*/
    return -1; /*0x50f19c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x50f181*/
  {
    if ( ++result >= m_10 ) /*0x50f19a*/
      return -1; /*0x50f19a*/
  }
  return result; /*0x50f19f*/
}



// ==== 0x0050F1B0  _VectorClass_UScoutStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UScoutStruct::AddRef(_VectorClass_UScoutStruct *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  int v5; // eax
  _BYTE *v6; // ecx
  int v7; // ebp

  m_8 = this->m_8; /*0x50f1bb*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x50f1c0*/
  {
    v3 = 0; /*0x50f1c2*/
    if ( m_8 <= 0 ) /*0x50f1c6*/
      return 1; /*0x50f1f8*/
    v4 = *(_DWORD *)(a2 + 4); /*0x50f1c8*/
    v5 = *(_DWORD *)&this->m_1[3]; /*0x50f1cb*/
    v6 = (_BYTE *)(v4 + 4); /*0x50f1d0*/
    v7 = v4 - v5; /*0x50f1d3*/
    while ( *(_DWORD *)v5 == *(_DWORD *)(v5 + v7) && *(_BYTE *)(v5 + 4) == *v6 ) /*0x50f1e5*/
    {
      ++v3; /*0x50f1e7*/
      v6 += 8; /*0x50f1e8*/
      v5 += 8; /*0x50f1eb*/
      if ( v3 >= m_8 ) /*0x50f1f0*/
        return 1; /*0x50f1f0*/
    }
  }
  return 0; /*0x50f1f2*/
}



// ==== 0x0050F210  _VectorClass_UScoutStruct::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UScoutStruct::Release(_VectorClass_UScoutStruct *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // edx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx

  v3 = a2; /*0x50f212*/
  if ( a2 ) /*0x50f21e*/
  {
    v5 = a3; /*0x50f224*/
    LOBYTE(this->m_C) = 0; /*0x50f228*/
    if ( a3 ) /*0x50f22d*/
    {
      v9 = a3; /*0x50f263*/
      if ( a2 - 1 >= 0 ) /*0x50f267*/
      {
        v10 = a2; /*0x50f269*/
        do /*0x50f273*/
        {
          *(_DWORD *)v9 = 0; /*0x50f26a*/
          v9[4] = 0; /*0x50f26c*/
          v9 += 8; /*0x50f26f*/
          --v10; /*0x50f272*/
        }
        while ( v10 ); /*0x50f273*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2); /*0x50f237*/
      if ( v6 ) /*0x50f241*/
      {
        v7 = v6; /*0x50f246*/
        if ( a2 - 1 >= 0 ) /*0x50f24a*/
        {
          v8 = a2; /*0x50f24c*/
          do /*0x50f256*/
          {
            *(_DWORD *)v7 = 0; /*0x50f24d*/
            *(_BYTE *)(v7 + 4) = 0; /*0x50f24f*/
            v7 += 8; /*0x50f252*/
            --v8; /*0x50f255*/
          }
          while ( v8 ); /*0x50f256*/
        }
        v5 = (char *)v6; /*0x50f258*/
      }
      else
      {
        v5 = 0; /*0x50f25c*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x50f277*/
    if ( v5 ) /*0x50f27b*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x50f286*/
      {
        m_8 = this->m_8; /*0x50f28b*/
        if ( a2 < m_8 ) /*0x50f290*/
          m_8 = a2; /*0x50f292*/
        v13 = 0; /*0x50f294*/
        if ( m_8 > 0 ) /*0x50f298*/
        {
          do /*0x50f2b7*/
          {
            v14 = 8 * v13; /*0x50f29d*/
            v15 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * v13++); /*0x50f2a6*/
            *(_DWORD *)&v5[v14] = *v15; /*0x50f2ad*/
            *(_DWORD *)&v5[v14 + 4] = v15[1]; /*0x50f2b3*/
          }
          while ( v13 < m_8 ); /*0x50f2b7*/
          v3 = a2; /*0x50f2b9*/
        }
        if ( BYTE1(this->m_C) ) /*0x50f2bf*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50f2c8*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x50f2d0*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x50f2db*/
      this->m_8 = v3; /*0x50f2e1*/
      BYTE1(this->m_C) = a3 == 0; /*0x50f2e4*/
      return 1; /*0x50f2ea*/
    }
    else
    {
      return 0; /*0x50f280*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_UScoutStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50f2f4*/
    return 1; /*0x50f2fa*/
  }
}



// ==== 0x0050F300  _VectorClass_UScoutStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UScoutStruct::ddtor(_VectorClass_UScoutStruct *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x50f30d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50f313*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50f31b*/
  }
  BYTE1(this->m_C) = 0; /*0x50f31e*/
  this->m_8 = 0; /*0x50f321*/
}



// ==== 0x0050F330  _VectorClass_UScoutStruct::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UScoutStruct::GetSize(_VectorClass_UScoutStruct *this, int a2)
{
  int result; // eax
  int m_8; // esi
  int i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x50f330*/
    return 0; /*0x50f33e*/
  m_8 = this->m_8; /*0x50f344*/
  result = 0; /*0x50f347*/
  if ( m_8 <= 0 ) /*0x50f34b*/
    return -1; /*0x50f36c*/
  for ( i = *(_DWORD *)&this->m_1[3]; *(_DWORD *)i != *(_DWORD *)a2 || *(_BYTE *)(i + 4) != *(_BYTE *)(a2 + 4); i += 8 ) /*0x50f351*/
  {
    if ( ++result >= m_8 ) /*0x50f36a*/
      return -1; /*0x50f36a*/
  }
  return result; /*0x50f33b*/
}



// ==== 0x0050F380  _VectorClass_UScoutStruct::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UScoutStruct::GetCapacity(_VectorClass_UScoutStruct *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50f380*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x50f395*/
  else
    return 0; /*0x50f387*/
}



// ==== 0x0050F3A0  ?$DynamicVectorClass@UScoutStruct@@::evaluateTarget  this=DynamicVector  sig=csp ====
char __thiscall AbstractClass::sub_50F3A0(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  char *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x50f3a2*/
  if ( a2 ) /*0x50f3ae*/
  {
    v5 = a3; /*0x50f3b4*/
    this->IsInitialized = 0; /*0x50f3b8*/
    if ( a3 ) /*0x50f3bd*/
    {
      v9 = a3; /*0x50f3f3*/
      if ( a2 - 1 >= 0 ) /*0x50f3f7*/
      {
        v10 = a2; /*0x50f3f9*/
        do /*0x50f403*/
        {
          *(_DWORD *)v9 = 0; /*0x50f3fa*/
          v9[4] = 0; /*0x50f3fc*/
          v9 += 8; /*0x50f3ff*/
          --v10; /*0x50f402*/
        }
        while ( v10 ); /*0x50f403*/
      }
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(8 * a2); /*0x50f3c7*/
      if ( v6 ) /*0x50f3d1*/
      {
        v7 = v6; /*0x50f3d6*/
        if ( a2 - 1 >= 0 ) /*0x50f3da*/
        {
          v8 = a2; /*0x50f3dc*/
          do /*0x50f3e6*/
          {
            *(_DWORD *)v7 = 0; /*0x50f3dd*/
            v7[4] = 0; /*0x50f3df*/
            v7 += 8; /*0x50f3e2*/
            --v8; /*0x50f3e5*/
          }
          while ( v8 ); /*0x50f3e6*/
        }
        v5 = v6; /*0x50f3e8*/
      }
      else
      {
        v5 = 0; /*0x50f3ec*/
      }
    }
    this->IsInitialized = 1; /*0x50f407*/
    if ( !v5 ) /*0x50f40b*/
      return 0; /*0x50f494*/
    if ( this->Items ) /*0x50f411*/
    {
      v11 = this->q008; /*0x50f416*/
      if ( a2 < v11 ) /*0x50f41b*/
        v11 = a2; /*0x50f41d*/
      v12 = 0; /*0x50f41f*/
      if ( v11 > 0 ) /*0x50f423*/
      {
        do /*0x50f442*/
        {
          v13 = 8 * v12; /*0x50f428*/
          v14 = (_DWORD *)(this->Items + 8 * v12++); /*0x50f431*/
          *(_DWORD *)&v5[v13] = *v14; /*0x50f438*/
          *(_DWORD *)&v5[v13 + 4] = v14[1]; /*0x50f43e*/
        }
        while ( v12 < v11 ); /*0x50f442*/
        v3 = a2; /*0x50f444*/
      }
      if ( this->IsAllocated ) /*0x50f44a*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x50f453*/
        this->Items = 0; /*0x50f45b*/
      }
    }
    this->Items = v5; /*0x50f466*/
    this->q008 = v3; /*0x50f46c*/
    this->IsAllocated = a3 == 0; /*0x50f46f*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50f478*/
  }
  v15 = this->q008; /*0x50f47b*/
  if ( v15 < this->Items ) /*0x50f483*/
    this->Items = v15; /*0x50f485*/
  return 1; /*0x50f488*/
}



// ==== 0x0050F4A0  ?$DynamicVectorClass@UScoutStruct@@::selectBestTarget  this=DynamicVector  sig=csp ====
int __thiscall AbstractClass::sub_50F4A0(int *this, int a2)
{
  int v2; // esi
  int result; // eax
  int i; // ecx

  v2 = this->Items; /*0x50f4a3*/
  result = 0; /*0x50f4a6*/
  if ( v2 <= 0 ) /*0x50f4ab*/
    return -1; /*0x50f4cc*/
  for ( i = this->Items; *(_DWORD *)i != *(_DWORD *)a2 || *(_BYTE *)(i + 4) != *(_BYTE *)(a2 + 4); i += 8 ) /*0x50f4b1*/
  {
    if ( ++result >= v2 ) /*0x50f4ca*/
      return -1; /*0x50f4ca*/
  }
  return result; /*0x50f4cf*/
}



// ==== 0x0050F4E0  _VectorClass_PAUBuildChoiceClass_HouseClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::Add(
        _VectorClass_PAUBuildChoiceClass_HouseClass *this,
        int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x50f4e2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x50f4ed*/
  {
    v3 = 0; /*0x50f4ef*/
    if ( m_8 <= 0 ) /*0x50f4f3*/
      return 1; /*0x50f513*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x50f4f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x50f4fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x50f504*/
    {
      ++v3; /*0x50f506*/
      ++v4; /*0x50f507*/
      if ( v3 >= m_8 ) /*0x50f50c*/
        return 1; /*0x50f50c*/
    }
  }
  return 0; /*0x50f50e*/
}



// ==== 0x0050F520  _VectorClass_PAUBuildChoiceClass_HouseClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::Release(
        _VectorClass_PAUBuildChoiceClass_HouseClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x50f52c*/
  {
    LOBYTE(this->m_C) = 0; /*0x50f536*/
    if ( a3 ) /*0x50f53c*/
      v4 = a3; /*0x50f552*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x50f54e*/
    LOBYTE(this->m_C) = 1; /*0x50f556*/
    if ( v4 ) /*0x50f55a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x50f565*/
      {
        m_8 = this->m_8; /*0x50f56c*/
        if ( a2 < m_8 ) /*0x50f571*/
          m_8 = a2; /*0x50f573*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x50f579*/
          ++i; /*0x50f57e*/
        if ( BYTE1(this->m_C) ) /*0x50f58b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50f596*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x50f59e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x50f5a7*/
      this->m_8 = a2; /*0x50f5af*/
      BYTE1(this->m_C) = a3 == 0; /*0x50f5b2*/
      return 1; /*0x50f5b8*/
    }
    else
    {
      return 0; /*0x50f55f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUBuildChoiceClass_HouseClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50f5c2*/
    return 1; /*0x50f5c8*/
  }
}



// ==== 0x0050F5D0  _VectorClass_PAUBuildChoiceClass_HouseClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::Remove(
        _VectorClass_PAUBuildChoiceClass_HouseClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x50f5dd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50f5e3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50f5eb*/
  }
  BYTE1(this->m_C) = 0; /*0x50f5ee*/
  this->m_8 = 0; /*0x50f5f1*/
}



// ==== 0x0050F600  _VectorClass_PAUBuildChoiceClass_HouseClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetSize(
        _VectorClass_PAUBuildChoiceClass_HouseClass *this,
        _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x50f600*/
    return 0; /*0x50f608*/
  m_8 = this->m_8; /*0x50f60e*/
  result = 0; /*0x50f611*/
  if ( m_8 <= 0 ) /*0x50f615*/
    return -1; /*0x50f62c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x50f61b*/
  {
    if ( ++result >= m_8 ) /*0x50f62a*/
      return -1; /*0x50f62a*/
  }
  return result; /*0x50f60a*/
}



// ==== 0x0050F640  _VectorClass_PAUBuildChoiceClass_HouseClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetCapacity(
        _VectorClass_PAUBuildChoiceClass_HouseClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50f640*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x50f655*/
  else
    return 0; /*0x50f647*/
}



// ==== 0x0050F660  VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_6  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
char __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_6(
        VectorClass_ptr_BuildChoiceClass_int_ouseClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  void *Capacity; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x50f66c*/
  {
    this->IsInitialized = 0; /*0x50f672*/
    if ( a3 ) /*0x50f678*/
      v4 = a3; /*0x50f68e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x50f68a*/
    this->IsInitialized = 1; /*0x50f692*/
    if ( !v4 ) /*0x50f696*/
      return 0; /*0x50f70a*/
    if ( this->Items ) /*0x50f698*/
    {
      Capacity = this->Capacity; /*0x50f69f*/
      if ( a2 < (int)Capacity ) /*0x50f6a4*/
        Capacity = (void *)a2; /*0x50f6a6*/
      for ( i = 0; i < (int)Capacity; v4[i - 1] = *((_DWORD *)this->Items + i - 1) ) /*0x50f6ac*/
        ++i; /*0x50f6b1*/
      if ( this->IsAllocated ) /*0x50f6be*/
      {
        __3_YAXPAX_Z(this->Items); /*0x50f6c9*/
        this->Items = 0; /*0x50f6d1*/
      }
    }
    this->Items = v4; /*0x50f6da*/
    this->Capacity = (void *)a2; /*0x50f6e2*/
    this->IsAllocated = a3 == 0; /*0x50f6e5*/
  }
  else
  {
    (*(void (__thiscall **)(VectorClass_ptr_BuildChoiceClass_int_ouseClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50f6ee*/
  }
  v7 = this->Capacity; /*0x50f6f1*/
  if ( (int)v7 < (int)this->Count ) /*0x50f6f9*/
    this->Count = v7; /*0x50f6fb*/
  return 1; /*0x50f6fe*/
}



// ==== 0x0050F710  VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex_1  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex_1(
        VectorClass_ptr_BuildChoiceClass_int_ouseClass *this,
        _DWORD *a2)
{
  void *Count; // edx
  int result; // eax
  _DWORD *i; // ecx

  Count = this->Count; /*0x50f710*/
  result = 0; /*0x50f713*/
  if ( (int)Count <= 0 ) /*0x50f718*/
    return -1; /*0x50f72f*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x50f71e*/
  {
    if ( ++result >= (int)Count ) /*0x50f72d*/
      return -1; /*0x50f72d*/
  }
  return result; /*0x50f732*/
}



// ==== 0x0050F740  _VectorClass_PBVTeamTypeClass::CompareVectors  this=VectorClass  sig=csp ====
char __thiscall VectorClass_BuildingType::CompareVectors(_VectorClass_PBVTeamTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x50f742*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x50f74d*/
  {
    v3 = 0; /*0x50f74f*/
    if ( m_8 <= 0 ) /*0x50f753*/
      return 1; /*0x50f773*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x50f755*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x50f75b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x50f764*/
    {
      ++v3; /*0x50f766*/
      ++v4; /*0x50f767*/
      if ( v3 >= m_8 ) /*0x50f76c*/
        return 1; /*0x50f76c*/
    }
  }
  return 0; /*0x50f76e*/
}



// ==== 0x0050F780  _VectorClass_PBVTeamTypeClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall VectorClass_BuildingType::SetCapacity(_VectorClass_PBVTeamTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x50f78c*/
  {
    LOBYTE(this->m_C) = 0; /*0x50f796*/
    if ( a3 ) /*0x50f79c*/
      v4 = a3; /*0x50f7b2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x50f7ae*/
    LOBYTE(this->m_C) = 1; /*0x50f7b6*/
    if ( v4 ) /*0x50f7ba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x50f7c5*/
      {
        m_8 = this->m_8; /*0x50f7cc*/
        if ( a2 < m_8 ) /*0x50f7d1*/
          m_8 = a2; /*0x50f7d3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x50f7d9*/
          ++i; /*0x50f7de*/
        if ( BYTE1(this->m_C) ) /*0x50f7eb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50f7f6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x50f7fe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x50f807*/
      this->m_8 = a2; /*0x50f80f*/
      BYTE1(this->m_C) = a3 == 0; /*0x50f812*/
      return 1; /*0x50f818*/
    }
    else
    {
      return 0; /*0x50f7bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVTeamTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50f822*/
    return 1; /*0x50f828*/
  }
}



// ==== 0x0050F830  ?$VectorClass@PBVTeamTypeClass@@::ClearAndFree3  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ClearAndFree3(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x50f83d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x50f843*/
    *(_DWORD *)(this + 4) = 0; /*0x50f84b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x50f84e*/
  *(_DWORD *)(this + 8) = 0; /*0x50f851*/
}



// ==== 0x0050F860  _VectorClass_PBVTeamTypeClass::FindItemIndex  this=VectorClass  sig=csp ====
int __thiscall VectorClass_BuildingType::FindItemIndex(_VectorClass_PBVTeamTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x50f860*/
    return 0; /*0x50f868*/
  m_8 = this->m_8; /*0x50f86e*/
  result = 0; /*0x50f871*/
  if ( m_8 <= 0 ) /*0x50f875*/
    return -1; /*0x50f88c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x50f87b*/
  {
    if ( ++result >= m_8 ) /*0x50f88a*/
      return -1; /*0x50f88a*/
  }
  return result; /*0x50f86a*/
}



// ==== 0x0050F8A0  _VectorClass_PBVTeamTypeClass::GetItemIndex_0  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_BuildingType::GetItemIndex_0(_VectorClass_PBVTeamTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50f8a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x50f8b5*/
  else
    return 0; /*0x50f8a7*/
}



// ==== 0x0050F8C0  _DynamicVectorClass_PBVTeamTypeClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_BuildingType::SetCapacity_0(_DynamicVectorClass_PBVTeamTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x50f8cc*/
  {
    LOBYTE(this->m_C) = 0; /*0x50f8d2*/
    if ( a3 ) /*0x50f8d8*/
      v4 = a3; /*0x50f8ee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x50f8ea*/
    LOBYTE(this->m_C) = 1; /*0x50f8f2*/
    if ( !v4 ) /*0x50f8f6*/
      return 0; /*0x50f96a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x50f8f8*/
    {
      m_8 = this->m_8; /*0x50f8ff*/
      if ( a2 < m_8 ) /*0x50f904*/
        m_8 = a2; /*0x50f906*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x50f90c*/
        ++i; /*0x50f911*/
      if ( BYTE1(this->m_C) ) /*0x50f91e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50f929*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x50f931*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x50f93a*/
    this->m_8 = a2; /*0x50f942*/
    BYTE1(this->m_C) = a3 == 0; /*0x50f945*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVTeamTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50f94e*/
  }
  v7 = this->m_8; /*0x50f951*/
  if ( v7 < this->m_10 ) /*0x50f959*/
    this->m_10 = v7; /*0x50f95b*/
  return 1; /*0x50f95e*/
}



// ==== 0x0050F970  _DynamicVectorClass_PBVTeamTypeClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_BuildingType::FindItemIndex_0(_DynamicVectorClass_PBVTeamTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x50f970*/
  result = 0; /*0x50f973*/
  if ( m_10 <= 0 ) /*0x50f978*/
    return -1; /*0x50f98f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x50f97e*/
  {
    if ( ++result >= m_10 ) /*0x50f98d*/
      return -1; /*0x50f98d*/
  }
  return result; /*0x50f992*/
}



// ==== 0x0050F9A0  _VectorClass__N::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass__N::AddRef(_VectorClass__N *this, int a2)
{
  int m_8; // edi
  int v3; // eax

  m_8 = this->m_8; /*0x50f9a7*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x50f9af*/
  {
    v3 = 0; /*0x50f9b1*/
    if ( m_8 <= 0 ) /*0x50f9b5*/
      return 1; /*0x50f9d1*/
    while ( *(_BYTE *)(*(_DWORD *)&this->m_1[3] + v3) == *(_BYTE *)(*(_DWORD *)(a2 + 4) + v3) ) /*0x50f9c5*/
    {
      if ( ++v3 >= m_8 ) /*0x50f9ca*/
        return 1; /*0x50f9ca*/
    }
  }
  return 0; /*0x50f9cc*/
}



// ==== 0x0050F9E0  _VectorClass__N::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass__N::Remove(_VectorClass__N *this, signed int Size, char *a3)
{
  char *v4; // edi
  signed int m_8; // ecx
  signed int i; // eax

  if ( Size ) /*0x50f9ec*/
  {
    LOBYTE(this->m_C) = 0; /*0x50f9f6*/
    if ( a3 ) /*0x50f9fc*/
      v4 = a3; /*0x50fa0b*/
    else
      v4 = (char *)__2_YAPAXI_Z(Size); /*0x50fa07*/
    LOBYTE(this->m_C) = 1; /*0x50fa0f*/
    if ( v4 ) /*0x50fa13*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x50fa1e*/
      {
        m_8 = this->m_8; /*0x50fa25*/
        if ( Size < m_8 ) /*0x50fa2a*/
          m_8 = Size; /*0x50fa2c*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_BYTE *)(*(_DWORD *)&this->m_1[3] + i - 1) ) /*0x50fa32*/
          ++i; /*0x50fa37*/
        if ( BYTE1(this->m_C) ) /*0x50fa44*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50fa4f*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x50fa57*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x50fa60*/
      this->m_8 = Size; /*0x50fa68*/
      BYTE1(this->m_C) = a3 == 0; /*0x50fa6b*/
      return 1; /*0x50fa71*/
    }
    else
    {
      return 0; /*0x50fa18*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass__N *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50fa7b*/
    return 1; /*0x50fa81*/
  }
}



// ==== 0x0050FA90  _VectorClass__N::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass__N::ddtor(_VectorClass__N *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x50fa9d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50faa3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50faab*/
  }
  BYTE1(this->m_C) = 0; /*0x50faae*/
  this->m_8 = 0; /*0x50fab1*/
}



// ==== 0x0050FAC0  _VectorClass__N::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass__N::GetSize(_VectorClass__N *this, _BYTE *a2)
{
  int result; // eax
  int m_8; // esi
  int v4; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x50fac0*/
    return 0; /*0x50fac9*/
  m_8 = this->m_8; /*0x50face*/
  result = 0; /*0x50fad1*/
  if ( m_8 <= 0 ) /*0x50fad5*/
    return -1; /*0x50faea*/
  v4 = *(_DWORD *)&this->m_1[3]; /*0x50fadb*/
  while ( *(_BYTE *)(v4 + result) != *a2 ) /*0x50fae3*/
  {
    if ( ++result >= m_8 ) /*0x50fae8*/
      return -1; /*0x50fae8*/
  }
  return result; /*0x50fac8*/
}



// ==== 0x0050FB00  _VectorClass__N::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass__N::Get(_VectorClass__N *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50fb00*/
    return a2 - *(_DWORD *)&this->m_1[3]; /*0x50fb13*/
  else
    return 0; /*0x50fb07*/
}



// ==== 0x0050FB20  _DynamicVectorClass__N::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass__N::SetCapacity(_DynamicVectorClass__N *this, signed int Size, char *a3)
{
  char *v4; // edi
  signed int m_8; // ecx
  signed int i; // eax
  int v7; // eax

  if ( Size ) /*0x50fb2c*/
  {
    LOBYTE(this->m_C) = 0; /*0x50fb32*/
    if ( a3 ) /*0x50fb38*/
      v4 = a3; /*0x50fb47*/
    else
      v4 = (char *)__2_YAPAXI_Z(Size); /*0x50fb43*/
    LOBYTE(this->m_C) = 1; /*0x50fb4b*/
    if ( !v4 ) /*0x50fb4f*/
      return 0; /*0x50fbc3*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x50fb51*/
    {
      m_8 = this->m_8; /*0x50fb58*/
      if ( Size < m_8 ) /*0x50fb5d*/
        m_8 = Size; /*0x50fb5f*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_BYTE *)(*(_DWORD *)&this->m_1[3] + i - 1) ) /*0x50fb65*/
        ++i; /*0x50fb6a*/
      if ( BYTE1(this->m_C) ) /*0x50fb77*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x50fb82*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x50fb8a*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x50fb93*/
    this->m_8 = Size; /*0x50fb9b*/
    BYTE1(this->m_C) = a3 == 0; /*0x50fb9e*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass__N *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50fba7*/
  }
  v7 = this->m_8; /*0x50fbaa*/
  if ( v7 < this->m_10 ) /*0x50fbb2*/
    this->m_10 = v7; /*0x50fbb4*/
  return 1; /*0x50fbb7*/
}



// ==== 0x0050FBD0  _DynamicVectorClass__N::Destroy_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass__N::Destroy_0(_DynamicVectorClass__N *this, _BYTE *a2)
{
  int m_10; // esi
  int result; // eax
  int v4; // ecx

  m_10 = this->m_10; /*0x50fbd1*/
  result = 0; /*0x50fbd4*/
  if ( m_10 <= 0 ) /*0x50fbd8*/
    return -1; /*0x50fbed*/
  v4 = *(_DWORD *)&this->m_1[3]; /*0x50fbde*/
  while ( *(_BYTE *)(v4 + result) != *a2 ) /*0x50fbe6*/
  {
    if ( ++result >= m_10 ) /*0x50fbeb*/
      return -1; /*0x50fbeb*/
  }
  return result; /*0x50fbf0*/
}



// ==== 0x0050FC00  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass__N_18::AddRef(
        _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x50fc0b*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x50fc10*/
  {
    v3 = 0; /*0x50fc12*/
    if ( m_8 <= 0 ) /*0x50fc16*/
      return 1; /*0x50fc46*/
    v4 = *(_DWORD *)(a2 + 4); /*0x50fc18*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x50fc1b*/
    v6 = (_DWORD *)(v4 + 4); /*0x50fc1e*/
    v7 = v4 - (_DWORD)v5; /*0x50fc21*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x50fc33*/
    {
      ++v3; /*0x50fc35*/
      v6 += 2; /*0x50fc36*/
      v5 += 2; /*0x50fc39*/
      if ( v3 >= m_8 ) /*0x50fc3e*/
        return 1; /*0x50fc3e*/
    }
  }
  return 0; /*0x50fc40*/
}



// ==== 0x0050FC60  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass__N_18::Remove(
        _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        int a2,
        int *a3)
{
  int *v4; // ebx
  int *v5; // eax
  int *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax

  if ( a2 ) /*0x50fc6c*/
  {
    v4 = a3; /*0x50fc72*/
    LOBYTE(this->m_C) = 0; /*0x50fc76*/
    if ( a3 ) /*0x50fc7c*/
    {
      *a3 = a2; /*0x50fcb7*/
      v6 = a3 + 1; /*0x50fcbb*/
      if ( a2 - 1 >= 0 ) /*0x50fcbe*/
      {
        v9 = a3 + 2; /*0x50fcc0*/
        v10 = a2; /*0x50fcc3*/
        do /*0x50fcce*/
        {
          *v9 = 0; /*0x50fcc4*/
          v9 += 2; /*0x50fcca*/
          --v10; /*0x50fccd*/
        }
        while ( v10 ); /*0x50fcce*/
      }
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x50fc86*/
      if ( v5 ) /*0x50fc90*/
      {
        *v5 = a2; /*0x50fc95*/
        v6 = v5 + 1; /*0x50fc99*/
        if ( a2 - 1 >= 0 ) /*0x50fc9c*/
        {
          v7 = v5 + 2; /*0x50fc9e*/
          v8 = a2; /*0x50fca1*/
          do /*0x50fcac*/
          {
            *v7 = 0; /*0x50fca2*/
            v7 += 2; /*0x50fca8*/
            --v8; /*0x50fcab*/
          }
          while ( v8 ); /*0x50fcac*/
        }
      }
      else
      {
        v6 = 0; /*0x50fcb0*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x50fcd2*/
    if ( v6 ) /*0x50fcd6*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x50fce1*/
      {
        m_8 = this->m_8; /*0x50fce8*/
        if ( a2 < m_8 ) /*0x50fced*/
          m_8 = a2; /*0x50fcef*/
        v13 = 0; /*0x50fcf1*/
        if ( m_8 > 0 ) /*0x50fcf5*/
        {
          do /*0x50fd0d*/
          {
            v14 = *(_DWORD *)&this->m_1[3]; /*0x50fcf7*/
            ++v13; /*0x50fcfa*/
            v6[2 * v13 - 2] = *(_DWORD *)(v14 + 8 * v13 - 8); /*0x50fd01*/
            v6[2 * v13 - 1] = *(_DWORD *)(v14 + 8 * v13 - 4); /*0x50fd09*/
          }
          while ( v13 < m_8 ); /*0x50fd0d*/
          v4 = a3; /*0x50fd0f*/
        }
        if ( BYTE1(this->m_C) ) /*0x50fd13*/
        {
          v15 = *(_DWORD *)&this->m_1[3]; /*0x50fd1a*/
          if ( v15 ) /*0x50fd1f*/
            __3_YAXPAX_Z((void *)(v15 - 4)); /*0x50fd29*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x50fd31*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v6; /*0x50fd3a*/
      this->m_8 = a2; /*0x50fd42*/
      BYTE1(this->m_C) = v4 == 0; /*0x50fd45*/
      return 1; /*0x50fd4b*/
    }
    else
    {
      return 0; /*0x50fcdb*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50fd55*/
    return 1; /*0x50fd5b*/
  }
}



// ==== 0x0050FD70  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass__N_18::ddtor(
        _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this)
{
  int v2; // eax

  v2 = *(_DWORD *)&this->m_1[3]; /*0x50fd76*/
  if ( v2 && BYTE1(this->m_C) ) /*0x50fd7d*/
  {
    __3_YAXPAX_Z((void *)(v2 - 4)); /*0x50fd8e*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x50fd96*/
  }
  BYTE1(this->m_C) = 0; /*0x50fd99*/
  this->m_8 = 0; /*0x50fd9c*/
}



// ==== 0x0050FDB0  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass__N_18::GetSize(
        _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x50fdb0*/
    return 0; /*0x50fdbe*/
  m_8 = this->m_8; /*0x50fdc4*/
  result = 0; /*0x50fdc7*/
  if ( m_8 <= 0 ) /*0x50fdcb*/
    return -1; /*0x50fdec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x50fdd1*/
  {
    if ( ++result >= m_8 ) /*0x50fdea*/
      return -1; /*0x50fdea*/
  }
  return result; /*0x50fdbb*/
}



// ==== 0x0050FE00  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::Get  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass__N_18::Get(
        _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x50fe00*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x50fe15*/
  else
    return 0; /*0x50fe07*/
}



// ==== 0x0050FE20  _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass__N_18::SetCapacity(
        _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        int a2,
        int *a3)
{
  int *v4; // ebp
  int *v5; // eax
  int *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  int v13; // edx
  int *v14; // eax
  int *v15; // ebp
  int v16; // eax

  if ( a2 ) /*0x50fe2c*/
  {
    v4 = a3; /*0x50fe32*/
    LOBYTE(this->m_C) = 0; /*0x50fe36*/
    if ( a3 ) /*0x50fe3c*/
    {
      *a3 = a2; /*0x50fe77*/
      v6 = a3 + 1; /*0x50fe7c*/
      if ( a2 - 1 >= 0 ) /*0x50fe7f*/
      {
        v9 = a3 + 2; /*0x50fe81*/
        v10 = a2; /*0x50fe84*/
        do /*0x50fe8f*/
        {
          *v9 = 0; /*0x50fe85*/
          v9 += 2; /*0x50fe8b*/
          --v10; /*0x50fe8e*/
        }
        while ( v10 ); /*0x50fe8f*/
      }
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x50fe46*/
      if ( v5 ) /*0x50fe50*/
      {
        *v5 = a2; /*0x50fe55*/
        v6 = v5 + 1; /*0x50fe59*/
        if ( a2 - 1 >= 0 ) /*0x50fe5c*/
        {
          v7 = v5 + 2; /*0x50fe5e*/
          v8 = a2; /*0x50fe61*/
          do /*0x50fe6c*/
          {
            *v7 = 0; /*0x50fe62*/
            v7 += 2; /*0x50fe68*/
            --v8; /*0x50fe6b*/
          }
          while ( v8 ); /*0x50fe6c*/
        }
      }
      else
      {
        v6 = 0; /*0x50fe70*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x50fe93*/
    if ( !v6 ) /*0x50fe97*/
      return 0; /*0x50ff37*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x50fe9d*/
    {
      m_8 = this->m_8; /*0x50fea4*/
      if ( a2 < m_8 ) /*0x50fea9*/
        m_8 = a2; /*0x50feab*/
      v12 = 0; /*0x50fead*/
      if ( m_8 > 0 ) /*0x50feb1*/
      {
        do /*0x50fec9*/
        {
          v13 = *(_DWORD *)&this->m_1[3]; /*0x50feb3*/
          ++v12; /*0x50feb6*/
          v6[2 * v12 - 2] = *(_DWORD *)(v13 + 8 * v12 - 8); /*0x50febd*/
          v6[2 * v12 - 1] = *(_DWORD *)(v13 + 8 * v12 - 4); /*0x50fec5*/
        }
        while ( v12 < m_8 ); /*0x50fec9*/
        v4 = a3; /*0x50fecb*/
      }
      if ( BYTE1(this->m_C) ) /*0x50fecf*/
      {
        v14 = *(int **)&this->m_1[3]; /*0x50fed6*/
        if ( v14 ) /*0x50fedb*/
        {
          v15 = v14 - 1; /*0x50fee0*/
          Array::ForEachReverse(v14, 8, *(v14 - 1), (int (__thiscall *)(int))nullsub_145); /*0x50feec*/
          __3_YAXPAX_Z(v15); /*0x50fef2*/
          v4 = a3; /*0x50fef7*/
        }
        *(_DWORD *)&this->m_1[3] = 0; /*0x50fefe*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x50ff07*/
    this->m_8 = a2; /*0x50ff0f*/
    BYTE1(this->m_C) = v4 == 0; /*0x50ff12*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x50ff1b*/
  }
  v16 = this->m_8; /*0x50ff1e*/
  if ( v16 < this->m_10 ) /*0x50ff26*/
    this->m_10 = v16; /*0x50ff28*/
  return 1; /*0x50ff2b*/
}



// ==== 0x0050FF40  nullsub_145  this=-  sig=ida-proto ====
void __thiscall nullsub_145(void *this)
{
  ; /*0x50ff40*/
}



// ==== 0x0050FF50  HouseClass::AddCoordTrackingEntry  this=HouseClass  sig=csp ====
char __thiscall HouseClass::AddCoordTrackingEntry(HouseClass *this, _DWORD *a2)
{
  void *ptr_8; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax
  _DWORD *ptr_4; // edx

  ptr_8 = this->?; /*0x50ff53*/
  if ( this->? >= (int)ptr_8 ) /*0x50ff5b*/
  {
    if ( !BYTE1(this->?) && ptr_8 ) /*0x50ff66*/
      return 0; /*0x50ff66*/
    abstractFlags = this->?; /*0x50ff68*/
    if ( abstractFlags <= 0 /*0x50ff78*/
      || !(*((unsigned __int8 (__thiscall **)(HouseClass *, int, _DWORD))this->AbstractClass + 2))(
            this,
            (int)ptr_8 + abstractFlags,
            0) )
    {
      return 0; /*0x50ff7f*/
    }
  }
  uniqueId = this->?; /*0x50ff85*/
  ptr_4 = this->?; /*0x50ff88*/
  this->? = uniqueId + 1; /*0x50ff8e*/
  ptr_4[2 * uniqueId] = *a2; /*0x50ff97*/
  ptr_4[2 * uniqueId + 1] = a2[1]; /*0x50ff9e*/
  return 1; /*0x50ff81*/
}



// ==== 0x0050FFB0  _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass__N_18::FindItemIndex(
        _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x50ffb0*/
  result = 0; /*0x50ffb5*/
  if ( m_10 <= 0 ) /*0x50ffbb*/
    return -1; /*0x50ffdc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x50ffc1*/
  {
    if ( ++result >= m_10 ) /*0x50ffda*/
      return -1; /*0x50ffda*/
  }
  return result; /*0x50ffdf*/
}



// ==== 0x0050FFF0  _VectorClass_PBVBuildingTypeClass::Get  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_BuildingType::Get(_VectorClass_PBVBuildingTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x50fff3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x50fff6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x510000*/
  {
    __3_YAXPAX_Z(v3); /*0x510008*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x510010*/
  }
  BYTE1(this->m_C) = 0; /*0x51001b*/
  this->m_8 = 0; /*0x510021*/
  if ( (a2 & 1) != 0 ) /*0x510028*/
    __3_YAXPAX_Z(this); /*0x51002b*/
  return this->__pad_0; /*0x510035*/
}


