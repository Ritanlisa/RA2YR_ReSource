// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00500200  BuildingPlacement::FindPosition  this=BuildingPlacement  sig=csp ====
_DWORD *BuildingPlacement::FindPosition(int *a0, IUnknown *aP1, IUnknown a3)
{
  int *v3; // ecx
  IUnknown *v4; // esi
  int *v5; // edi
  int v6; // ebx
  int v7; // ebx
  int v8; // eax
  int *AttackCoords; // eax
  int *v10; // edx
  int v11; // eax
  int v12; // esi
  IUnknown *TileIndex; // eax
  int v14; // ecx
  _WORD v16[2]; // [esp+Ch] [ebp-18h] BYREF
  int v17; // [esp+10h] [ebp-14h] BYREF
  _BYTE v18[12]; // [esp+14h] [ebp-10h] BYREF
  int v19; // [esp+20h] [ebp-4h]

  v4 = aP1; /*0x500205*/
  v5 = v3; /*0x50020a*/
  v6 = (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 732))(aP1); /*0x50021a*/
  v7 = (*(int (__thiscall **)(IUnknown *))(v4->field_0 + 728))(v4) + v6; /*0x500222*/
  if ( (*(int (__thiscall **)(IUnknown *))(v4->field_0 + 724))(v4) + v7 ) /*0x50022e*/
    v8 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), (IUnknown *)1, (IUnknown *)4); /*0x50024b*/
  else
    v8 = 0; /*0x500237*/
  AttackCoords = HouseClass::GenerateAttackCoords(v5, (MouseClass *)&aP1, v8); /*0x500258*/
  v10 = &v4->field_9C; /*0x500265*/
  v17 = *AttackCoords; /*0x500267*/
  v11 = v4->field_9C; /*0x500271*/
  v16[0] = 0; /*0x500276*/
  v12 = *(_DWORD *)v4->__pad_A0; /*0x50027b*/
  v16[1] = 0; /*0x50027e*/
  v19 = v10[2]; /*0x500286*/
  LOWORD(aP1) = v11 / 256; /*0x500296*/
  HIWORD(aP1) = v12 / 256; /*0x5002b2*/
  TileIndex = (IUnknown *)MapClass::GetTileIndex(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP1, 0, 0); /*0x5002cf*/
  v14 = *LayerClass::Pathfinding_Find( /*0x5002ea*/
           (IUnknown *)&stru_87C374.__pad_14B0[8132],
           (IUnknown *)v18,
           (IUnknown *)v18,
           (IUnknown *)&v17,
           (IUnknown *)1,
           TileIndex,
           0,
           0,
           (IUnknown *)1,
           (IUnknown *)1,
           0,
           0,
           0,
           (IUnknown *)1,
           (IUnknown *)v16,
           0,
           0);
  *a0 = v14; /*0x5002f2*/
  return a0; /*0x5002f0*/
}


// ==== 0x00500300  CellClass::ScanOccupiers  this=CellClass  sig=csp ====
_DWORD *__thiscall CellClass::ScanOccupiers(_DWORD *this, HouseClass *aP1)
{
  _DWORD *v3; // edi
  int v4; // ecx
  int v5; // edx
  int *v6; // ebp
  _DWORD *v7; // eax
  InfantryTypeClass *Building; // eax
  InfantryTypeClass *v9; // esi
  int v10; // eax
  int v11; // ecx
  bool v12; // al
  AbstractClass *v13; // edi
  ObjectClass *v14; // eax
  _DWORD *v15; // eax
  int v16; // ecx
  int v17; // edx
  double v18; // st7
  int v19; // eax
  _DWORD *result; // eax
  int v21; // [esp+20h] [ebp-3Ch]
  int v22; // [esp+24h] [ebp-38h]
  int v24; // [esp+2Ch] [ebp-30h]
  InfantryTypeClass *v25; // [esp+30h] [ebp-2Ch]
  int v26; // [esp+34h] [ebp-28h] BYREF
  int v27; // [esp+38h] [ebp-24h]
  int v28; // [esp+3Ch] [ebp-20h]
  int v29; // [esp+40h] [ebp-1Ch]
  char v30[12]; // [esp+44h] [ebp-18h] BYREF
  char v31[12]; // [esp+50h] [ebp-Ch] BYREF
  __int16 aP1a; // [esp+60h] [ebp+4h]
  __int16 aP1_2; // [esp+62h] [ebp+6h]

  v3 = this; /*0x50030c*/
  v25 = 0; /*0x500329*/
  v4 = *(_DWORD *)aP1->__pad_0 / 256; /*0x500334*/
  v5 = *(_DWORD *)&aP1->__pad_0[4] / 256; /*0x500337*/
  v22 = 0; /*0x50033c*/
  aP1a = v4; /*0x500340*/
  aP1_2 = v5; /*0x500345*/
  v6 = dword_ABD490; /*0x500351*/
  v24 = 369; /*0x500356*/
  while ( 1 )
  {
    LOWORD(v21) = *(_WORD *)v6 + v4; /*0x500375*/
    HIWORD(v21) = v5 + *((_WORD *)v6 + 1); /*0x50037a*/
    v26 = v21; /*0x500385*/
    v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v26); /*0x50038f*/
    Building = (InfantryTypeClass *)CellClass::FindBuilding(v7, 1); /*0x500396*/
    v9 = Building; /*0x50039b*/
    if ( Building && !Building->Name[29] )
    {
      v10 = (*(int (__thiscall **)(InfantryTypeClass *))(*(_DWORD *)Building->vtable0 + 60))(Building); /*0x5003b7*/
      if ( !v10
        || (_DWORD *)v10 != v3
        && ((v11 = *(_DWORD *)(v10 + 48), v11 != v3[12])
          ? (v11 == -1
           ? (v12 = 0)
           : (v12 = (v3[5602] & (1 << v11)) != 0))
          : (v12 = 1),
            !v12) )
      {
        v13 = *(AbstractClass **)&v9->AlphaImageFile[9]; /*0x5003f9*/
        v14 = (ObjectClass *)(*(int (__thiscall **)(InfantryTypeClass *, char *))(*(_DWORD *)v9->vtable0 + 72))(v9, v30); /*0x500406*/
        if ( PathfindingClass::FindPath(v13, v14) == -1 /*0x500434*/
          && (*(int (__thiscall **)(InfantryTypeClass *))(*(_DWORD *)v9->vtable0 + 456))(v9) >= -20
          && *(_DWORD *)&v9->AlphaImageFile[13] != 2 )
        {
          v15 = (_DWORD *)(*(int (__thiscall **)(InfantryTypeClass *, char *))(*(_DWORD *)v9->vtable0 + 72))(v9, v31); /*0x50043f*/
          v16 = *(_DWORD *)&aP1->__pad_0[4]; /*0x500446*/
          v27 = *(_DWORD *)aP1->__pad_0 - *v15; /*0x50044b*/
          v17 = *(_DWORD *)&aP1->__pad_0[8]; /*0x500454*/
          v28 = v16 - v15[1]; /*0x500457*/
          v29 = v17 - v15[2]; /*0x500467*/
          v18 = Math::Sqrt((double)v27 * (double)v27 + (double)v29 * (double)v29 + (double)v28 * (double)v28); /*0x50048c*/
          v19 = Math::RoundToInt(v18); /*0x500494*/
          if ( !v22 || v19 < v22 ) /*0x5004a3*/
          {
            v22 = v19; /*0x5004a5*/
            v25 = v9; /*0x5004a9*/
          }
        }
        v3 = this; /*0x5004ad*/
      }
    }
    ++v6; /*0x5004b5*/
    if ( !--v24 ) /*0x5004bd*/
      break; /*0x5004bd*/
    LOWORD(v5) = aP1_2; /*0x500361*/
    LOWORD(v4) = aP1a; /*0x500361*/
  }
  result = v25->vtable0; /*0x5004c3*/
  if ( !v25 ) /*0x5004ca*/
    return 0; /*0x5004cc*/
  return result; /*0x5004ce*/
}


// ==== 0x005004E0  GetHouseTechLevel  this=-  sig=ida-proto ====
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
int __thiscall HouseClass::GetBuildLimit(_DWORD *this, int a2, IUnknown *aP2, ControlClass *aP3)
{
  int result; // eax

  switch ( a2 ) /*0x500522*/
  {
    case 1: /*0x500522*/
    case 40: /*0x500522*/
      if ( (_BYTE)aP2 ) /*0x500538*/
        result = this->primaryForShips; /*0x50053a*/
      else
        result = this->primaryForVehicles; /*0x500543*/
      break; /*0x500540*/
    case 2: /*0x500522*/
    case 3: /*0x500522*/
      result = this->primaryForAircraft; /*0x500565*/
      break; /*0x50056b*/
    case 6: /*0x500522*/
    case 7: /*0x500522*/
      if ( aP3 == (ControlClass *)5 ) /*0x500551*/
        result = this->primaryForDefenses; /*0x500553*/
      else
        result = this->primaryForBuildings; /*0x50055c*/
      break; /*0x500559*/
    case 15: /*0x500522*/
    case 16: /*0x500522*/
      result = this->primaryForInfantry; /*0x500529*/
      break; /*0x50052f*/
    default:
      result = 0; /*0x50056e*/
      break; /*0x50056e*/
  }
  return result; /*0x50052f*/
}


// ==== 0x005005B0  SidebarClass::MarkTabForRebuild  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::MarkTabForRebuild(_BYTE *this, int a2, IUnknown *aP2, ControlClass *aP3)
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
      this->q53D0 = 1; /*0x50060b*/
      break; /*0x50060b*/
    case 6: /*0x5005c5*/
    case 7: /*0x5005c5*/
      if ( aP3 == (ControlClass *)5 ) /*0x5005f3*/
        this->q53D8 = 1; /*0x5005f5*/
      else
        this->q53D4 = 1; /*0x500600*/
      break; /*0x5005fd*/
    case 15: /*0x5005c5*/
    case 16: /*0x5005c5*/
      *(this + 21457) = 1; /*0x5005cc*/
LABEL_3:
      result = (char)aP2; /*0x5005d2*/
      if ( (_BYTE)aP2 ) /*0x5005d8*/
        *(this + 21459) = 1; /*0x5005da*/
      else
        *(this + 21458) = 1; /*0x5005e4*/
      break; /*0x5005e1*/
    default:
      return result;
  }
  return result; /*0x5005e0*/
}


// ==== 0x00500700  SidebarClass::getTypeProductionCount  this=SidebarClass  sig=csp ====
char __thiscall sub_500700(_BYTE *this, int a2, char a3, int a4)
{
  char result; // al

  switch ( a2 ) /*0x500712*/
  {
    case 1: /*0x500712*/
    case 40: /*0x500712*/
      if ( a3 ) /*0x500728*/
        result = *(this + 21459); /*0x50072a*/
      else
        result = *(this + 21458); /*0x500733*/
      break; /*0x500730*/
    case 2: /*0x500712*/
    case 3: /*0x500712*/
      result = this->q53D0; /*0x500755*/
      break; /*0x50075b*/
    case 6: /*0x500712*/
    case 7: /*0x500712*/
      if ( a4 == 5 ) /*0x500741*/
        result = this->q53D8; /*0x500743*/
      else
        result = this->q53D4; /*0x50074c*/
      break; /*0x500749*/
    case 15: /*0x500712*/
    case 16: /*0x500712*/
      result = *(this + 21457); /*0x500719*/
      break; /*0x50071f*/
    default:
      result = 0; /*0x50075e*/
      break; /*0x50075e*/
  }
  return result; /*0x50071f*/
}


// ==== 0x005007A0  Sidebar::Dispatch  this=HouseClass  sig=csp ====
char __thiscall Sidebar::Dispatch(_BYTE *this, IUnknown *aP1, char a3, int a4, char a5)
{
  char result; // al

  result = (_BYTE)aP1 - 1; /*0x5007a5*/
  switch ( (unsigned int)aP1 ) /*0x5007b7*/
  {
    case 1u: /*0x5007b7*/
    case 0x28u: /*0x5007b7*/
      goto LABEL_3;
    case 2u: /*0x5007b7*/
    case 3u: /*0x5007b7*/
      this->HouseClass_field_53D0 = a5; /*0x500807*/
      break; /*0x500807*/
    case 6u: /*0x5007b7*/
    case 7u: /*0x5007b7*/
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
    case 0xFu: /*0x5007b7*/
    case 0x10u: /*0x5007b7*/
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
int __thiscall HouseClass::GetFactoryCount(int *this, int a2, char a3)
{
  int *v3; // eax
  int result; // eax

  switch ( a2 ) /*0x500922*/
  {
    case 1: /*0x500922*/
    case 40: /*0x500922*/
      if ( a3 ) /*0x50092f*/
        v3 = this + 5346; /*0x500931*/
      else
        v3 = this + 5344; /*0x500939*/
      goto LABEL_8; /*0x500937*/
    case 2: /*0x500922*/
    case 3: /*0x500922*/
      v3 = this + 5342; /*0x500941*/
      goto LABEL_8; /*0x500947*/
    case 6: /*0x500922*/
    case 7: /*0x500922*/
      v3 = this + 5345; /*0x500951*/
      goto LABEL_8; /*0x500951*/
    case 15: /*0x500922*/
    case 16: /*0x500922*/
      v3 = this + 5343; /*0x500949*/
LABEL_8:
      if ( !v3 ) /*0x500959*/
        goto LABEL_10; /*0x500959*/
      result = *v3; /*0x50095b*/
      break; /*0x50095d*/
    default:
LABEL_10:
      result = 0; /*0x500960*/
      break; /*0x500960*/
  }
  return result; /*0x50095d*/
}


// ==== 0x005009B0  HouseClass::LoadTypeList  this=IUnknown  sig=csp ====
IUnknown *__thiscall HouseClass::LoadTypeList(char *this)
{
  CCINIClass *v2; // ebx
  unsigned __int8 *StringByIndex; // eax
  CCINIClass *v4; // esi
  int v5; // eax
  CCINIClass *v6; // esi
  IUnknown *result; // eax
  int v8; // edi
  bool v9; // zf
  int v10; // esi
  int i; // esi
  int v12; // eax
  int v13; // eax
  int KeyCount; // [esp+10h] [ebp-30h]
  char Source[20]; // [esp+14h] [ebp-2Ch] BYREF
  char Destination[20]; // [esp+28h] [ebp-18h] BYREF
  char v17; // [esp+3Ch] [ebp-4h]

  v2 = 0; /*0x5009c3*/
  KeyCount = INIClass::GetKeyCount(this, (INIClass *)&g_INI_Key_Country.headNode[1]); /*0x5009c7*/
  if ( KeyCount > 0 ) /*0x5009cb*/
  {
    do /*0x500a83*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x5009e5*/
                                           this,
                                           (CCINIClass *)&g_INI_Key_Country.headNode[1],
                                           v2);
      INIClass::GetString( /*0x5009f2*/
        (unsigned __int8 ***)this,
        (INIClass *)&g_INI_Key_Country.headNode[1],
        StringByIndex,
        (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
        (INIClass *)Source,
        20);
      v4 = (CCINIClass *)SuperWeaponTypeClass::FindOrCreate( /*0x500a0a*/
                           (unsigned __int8 ***)this,
                           (INIClass *)Source,
                           (unsigned __int8 *)&g_INI_Key_Country,
                           (CCINIClass *)0xFFFFFFFF);
      if ( v4 == (CCINIClass *)-1 ) /*0x500a0f*/
        v4 = 0; /*0x500a11*/
      v5 = __2_YAPAXI_Z(0x160B8u); /*0x500a18*/
      if ( v5 ) /*0x500a22*/
        v6 = (CCINIClass *)HouseClass::Construct(v5, *((CCINIClass **)g_SuperWeaponTypeCount + (_DWORD)v4)); /*0x500a35*/
      else
        v6 = 0; /*0x500a39*/
      if ( Source ) /*0x500a41*/
      {
        strncpy(Destination, Source, 0x14u); /*0x500a55*/
        v17 = 0; /*0x500a5d*/
      }
      else
      {
        Destination[0] = (unsigned __int8)Source; /*0x500a43*/
      }
      if ( Destination != (char *)&v6[1023].CCINIClass_field_4C ) /*0x500a6e*/
      {
        qmemcpy(&v6[1023].CCINIClass_field_4C, Destination, 0x14u); /*0x500a79*/
        LOBYTE(v6[1024].headNode[1]) = v17; /*0x500a7b*/
      }
      v2 = (CCINIClass *)((char *)v2 + 1); /*0x500a80*/
    }
    while ( (int)v2 < KeyCount ); /*0x500a83*/
  }
  result = HouseClass_Count; /*0x500a89*/
  v8 = 0; /*0x500a8e*/
  v9 = HouseClass_Count == 0; /*0x500a90*/
  if ( (int)HouseClass_Count > 0 ) /*0x500a92*/
  {
    do /*0x500aeb*/
    {
      v10 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v8]; /*0x500a9a*/
      HouseClass::ReadFromINI(v10, (unsigned __int8 ***)this); /*0x500a9f*/
      if ( !MEMORY[0xA8B238] ) /*0x500aab*/
      {
        if ( *(_BYTE *)(v10 + 492) || *(_BYTE *)(v10 + 493) ) /*0x500ab7*/
          HouseClass::SetCombatPower(v10, (IUnknown *)MEMORY[0xA8B230]->difficulty2); /*0x500ace*/
        else
          HouseClass::SetCombatPower(v10, (IUnknown *)MEMORY[0xA8B230]->elapsedTimer[0]); /*0x500ade*/
      }
      result = HouseClass_Count; /*0x500ae3*/
      ++v8; /*0x500ae8*/
    }
    while ( v8 < (int)HouseClass_Count ); /*0x500aeb*/
    v9 = HouseClass_Count == 0; /*0x500aed*/
  }
  if ( v9 ) /*0x500aef*/
  {
    result = (IUnknown *)g_SuperWeaponTypeArray; /*0x500af1*/
    for ( i = 0; i < g_SuperWeaponTypeArray; ++i ) /*0x500afa*/
    {
      v12 = __2_YAPAXI_Z(0x160B8u); /*0x500b01*/
      if ( v12 ) /*0x500b0b*/
        v13 = HouseClass::Construct(v12, *((CCINIClass **)g_SuperWeaponTypeCount + i)); /*0x500b19*/
      else
        v13 = 0; /*0x500b20*/
      HouseClass::ReadFromINI(v13, (unsigned __int8 ***)this); /*0x500b25*/
      result = (IUnknown *)g_SuperWeaponTypeArray; /*0x500b2a*/
    }
  }
  return result; /*0x500b34*/
}


// ==== 0x00500B40  HouseClass::ReadFromINI  this=IUnknown  sig=csp ====
int __thiscall HouseClass_ReadFromINI(int this, unsigned __int8 ***a2)
{
  unsigned __int8 ***v3; // esi
  char Bool_Overwrite; // al
  int v5; // edx
  char *v6; // edi
  wchar_t *String; // eax
  int v8; // eax
  int Int_Overwrite; // eax
  int v10; // eax
  int AnimByName; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // eax
  unsigned __int16 v17; // di
  char v18; // al
  double v19; // st7
  int v20; // edx
  double v21; // st7
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
  double v36; // [esp+20h] [ebp-B0h]
  double v37; // [esp+28h] [ebp-A8h]
  char v38[20]; // [esp+38h] [ebp-98h] BYREF
  char Destination[32]; // [esp+4Ch] [ebp-84h] BYREF
  char Source[100]; // [esp+6Ch] [ebp-64h] BYREF

  strcpy(v38, (const char *)(this + 90100)); /*0x500b6f*/
  v3 = a2; /*0x500b78*/
  INIClass::ResetSection(a2); /*0x500b7d*/
  *(_DWORD *)(this + 468) = INIClass::ReadInt_Overwrite(v38, aTechlevel, *((_DWORD *)MEMORY[0xA8B230] + 1173)); /*0x500bae*/
  *(_DWORD *)(this + 476) = 100 * INIClass::ReadInt_Overwrite(v38, aCredits, 0); /*0x500bd0*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(v38, MEMORY[0x824E28], 0); /*0x500bd6*/
  *(_BYTE *)(this + 493) = Bool_Overwrite; /*0x500bdd*/
  if ( Bool_Overwrite && !MEMORY[0xA8B238][0] ) /*0x500bec*/
  {
    if ( MEMORY[0xA8EB64] ) /*0x500bf5*/
    {
      if ( MEMORY[0xA8EB64] == 2 ) /*0x500c10*/
      {
        *(_DWORD *)(this + 780) = *(_DWORD *)(this + 476) + *((_DWORD *)MEMORY[0x8871E0] + 896); /*0x500c25*/
LABEL_9:
        *(_DWORD *)(this + 780) &= (*(_DWORD *)(this + 780) <= 0) - 1; /*0x500c39*/
        goto LABEL_11; /*0x500c4f*/
      }
      v5 = *(_DWORD *)(this + 476); /*0x500c2d*/
    }
    else
    {
      v5 = *(_DWORD *)(this + 476) + *((_DWORD *)MEMORY[0x8871E0] + 895); /*0x500c09*/
    }
    *(_DWORD *)(this + 780) = v5; /*0x500c33*/
    goto LABEL_9; /*0x500c33*/
  }
  *(_DWORD *)(this + 780) = *(_DWORD *)(this + 476); /*0x500c57*/
LABEL_11:
  v6 = (char *)(this + 90121); /*0x500c5d*/
  INIClass::GetString( /*0x500c77*/
    a2,
    (unsigned __int8 *)v38,
    (unsigned __int8 *)MEMORY[0x81784C],
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
  if ( Destination != v6 ) /*0x500ca9*/
  {
    qmemcpy(v6, Destination, 0x20u); /*0x500cb4*/
    v3 = a2; /*0x500cb6*/
  }
  if ( *(_BYTE *)(this + 90121) ) /*0x500cb9*/
  {
    String = GetStringCSF((wchar_t *)(this + 90121), 0, g_Str_File_House_CPP, 8507); /*0x500cd7*/
    wcsncpy((wchar_t *)(this + 90154), String, 0x20u); /*0x500ce4*/
    *(_WORD *)(this + 90194) = 0; /*0x500cec*/
  }
  else
  {
    wcscpy((wchar_t *)(this + 90154), *(const wchar_t **)(*(_DWORD *)(this + 52) + 96)); /*0x500d05*/
  }
  *(_DWORD *)(this + 22108) = INIClass::ReadInt_Overwrite(v38, MEMORY[0x824E14], *(_DWORD *)(this + 22108)); /*0x500d25*/
  *(_DWORD *)(this + 22112) = INIClass::ReadInt_Overwrite(v38, MEMORY[0x824E00], 75); /*0x500d4c*/
  *(_DWORD *)(this + 22116) = INIClass::ReadInt_Overwrite(v38, MEMORY[0x824DEC], 75); /*0x500d65*/
  *(_DWORD *)(this + 22120) = INIClass::ReadInt_Overwrite(v38, MEMORY[0x824DDC], 75); /*0x500d70*/
  v8 = *(_DWORD *)(*(_DWORD *)(this + 52) + 188); /*0x500d79*/
  *(_DWORD *)(this + 488) = v8; /*0x500d82*/
  if ( v8 == -1 ) /*0x500d88*/
    *(_DWORD *)(this + 488) = 0; /*0x500d8a*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(v38, g_INI_Key_IQ, 0); /*0x500da2*/
  if ( Int_Overwrite > *((_DWORD *)MEMORY[0x8871E0] + 1293) ) /*0x500db3*/
    Int_Overwrite = 1; /*0x500db5*/
  *(_DWORD *)(this + 464) = Int_Overwrite; /*0x500dba*/
  *(_DWORD *)(this + 588) = Int_Overwrite; /*0x500dc0*/
  v10 = HouseClass::ReadIntFromINI(v38, aEdge, -1); /*0x500dd4*/
  v33 = *(_DWORD *)(this + 90196); /*0x500de3*/
  *(_DWORD *)(this + 480) = v10; /*0x500dec*/
  AnimByName = BuildingTypeClass::FindAnimByName(v3, (unsigned __int8 *)v38, (unsigned __int8 *)stru_81B138, v33); /*0x500df2*/
  *(_DWORD *)(this + 90196) = AnimByName; /*0x500df9*/
  if ( AnimByName < 0 ) /*0x500e04*/
    *(_DWORD *)(this + 90196) = 5; /*0x500e06*/
  v12 = *((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(this + 90196)); /*0x500e17*/
  if ( !v12 ) /*0x500e1c*/
  {
    Debug::Log(); /*0x500e32*/
    *(_DWORD *)(this + 90196) = 5; /*0x500e37*/
    v12 = *((_DWORD *)MEMORY[0xB054D4] + 5); /*0x500e46*/
  }
  v13 = *(_DWORD *)(v12 + 816); /*0x500e49*/
  v14 = *(_DWORD *)(v12 + 780); /*0x500e4f*/
  v15 = *(_DWORD *)(v14 + 4); /*0x500e55*/
  v16 = *(_DWORD *)(v14 + 372); /*0x500e58*/
  if ( v15 == 1 ) /*0x500e61*/
    v17 = *(unsigned __int8 *)(v16 + v13); /*0x500e68*/
  else
    v17 = *(_WORD *)(v16 + 2 * v13); /*0x500e6e*/
  LOBYTE(v35) = (unsigned __int8)(v17 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x500e9b*/
  BYTE1(v35) = (unsigned __int8)(v17 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x500ea8*/
  v18 = (unsigned __int8)(v17 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x500ebc*/
  *(_WORD *)(this + 22265) = LOWORD(v35); /*0x500ec6*/
  *(_BYTE *)(this + 22267) = v18; /*0x500ec9*/
  v19 = (double)*(unsigned __int8 *)(this + 22265); /*0x500edc*/
  LODWORD(v35) = *(unsigned __int8 *)(this + 22266); /*0x500ee0*/
  v20 = *(unsigned __int8 *)(this + 22267); /*0x500ee6*/
  v36 = v19; /*0x500eec*/
  v37 = (double)SLODWORD(v35); /*0x500ef8*/
  v35 = (double)v20; /*0x500f00*/
  v21 = Math::Sqrt(v35 * v35 + v37 * v37 + v19 * v19); /*0x500f1d*/
  if ( v21 == 0.0 ) /*0x500f30*/
  {
    v35 = 255.0; /*0x500f34*/
    v37 = 255.0; /*0x500f44*/
    v36 = 255.0; /*0x500f54*/
  }
  else
  {
    v36 = v36 * 240.0 / v21; /*0x500f75*/
    if ( v36 > 255.0 ) /*0x500f84*/
      v36 = 255.0; /*0x500f86*/
    v37 = v37 * 240.0 / v21; /*0x500fa2*/
    if ( v37 > 255.0 ) /*0x500fb1*/
      v37 = 255.0; /*0x500fb3*/
    v22 = v35 * 240.0 / v21; /*0x500fcd*/
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
  globalHelper_00B920(&v35); /*0x501058*/
  v34 = Math::RoundToInt(v35); /*0x50106a*/
  v32 = Math::RoundToInt(v37); /*0x501074*/
  v26 = Math::RoundToInt(v36); /*0x501075*/
  HouseClass::processRadar(v26, v32, v34); /*0x501081*/
  v27 = *(_DWORD *)(this + 48); /*0x501086*/
  v28 = 0; /*0x501089*/
  *(_DWORD *)(this + 22496) = 0; /*0x50108b*/
  HouseClass::HandleAlliance(this, *((_DWORD *)HouseClass_Array + v27), 0); /*0x50109e*/
  LODWORD(v35) = HouseClass::ReadHouseNamesToBitmask(v38, MEMORY[0x824D5C], 0); /*0x5010b5*/
  if ( HouseClass_Count > 0 ) /*0x5010c0*/
  {
    do /*0x5010ef*/
    {
      v29 = *((_DWORD *)HouseClass_Array + v28); /*0x5010c8*/
      if ( ((1 << *(_DWORD *)(v29 + 48)) & LODWORD(v35)) != 0 ) /*0x5010db*/
        HouseClass::HandleAlliance(this, v29, 0); /*0x5010e2*/
      ++v28; /*0x5010ec*/
    }
    while ( v28 < HouseClass_Count ); /*0x5010ef*/
  }
  v30 = 175 * *(_DWORD *)(this + 48) + *(_DWORD *)(*((_DWORD *)MEMORY[0x8871E0] + 1111) + 4 * *(_DWORD *)(this + 388)); /*0x501117*/
  *(_DWORD *)(this + 22424) = MEMORY[0xA8ED84]; /*0x501125*/
  *(_DWORD *)(this + 22428) = HIDWORD(v37); /*0x50112f*/
  *(_DWORD *)(this + 22432) = v30; /*0x501138*/
  result = BuildingPrerequisiteClass::ReadNodeGraph(v3, v38); /*0x501141*/
  *(_DWORD *)(this + 22388) = this; /*0x501147*/
  return result; /*0x501146*/
}


// ==== 0x00501160  CCINIClass::WriteHouses  this=AbstractTypeClass  sig=csp ====
IUnknown *__thiscall CCINIClass::WriteHouses(INIClass *this)
{
  IUnknown *result; // eax
  INIClass *i; // ebx
  int v4; // esi
  INIClass Source; // [esp+Ch] [ebp-40h] BYREF

  INIClass::ClearSection((int)this, (INIClass *)&g_INI_Key_Country.headNode[1], 0); /*0x50116f*/
  result = HouseClass_Count; /*0x501174*/
  for ( i = 0; (int)i < (int)HouseClass_Count; i = (INIClass *)((char *)i + 1) ) /*0x50117d*/
  {
    strcpy(Source.__pad_0, (const char *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * (_DWORD)i] + 90100)); /*0x5011ac*/
    sprintf(Source.__pad_20, MEMORY[0x817F6C], i); /*0x5011ba*/
    INIClass::SetString(this->__pad_0, (INIClass *)&g_INI_Key_Country.headNode[1], (INIClass *)Source.__pad_20, &Source); /*0x5011d3*/
    result = HouseClass_Count; /*0x5011d8*/
  }
  v4 = 0; /*0x5011e3*/
  if ( (int)result > 0 ) /*0x5011e7*/
  {
    do /*0x501200*/
    {
      HouseClass::SaveToINI(*(_DWORD *)&HouseClass_Array->__pad_0[4 * v4], this); /*0x5011f3*/
      result = HouseClass_Count; /*0x5011f8*/
      ++v4; /*0x5011fd*/
    }
    while ( v4 < (int)HouseClass_Count ); /*0x501200*/
  }
  return result; /*0x501202*/
}


// ==== 0x00501210  HouseClass::SaveToINI  this=HouseClass  sig=csp ====
int __thiscall HouseClass::SaveToINI(int this, INIClass *aP1)
{
  INIClass *v4; // eax
  int v5; // ebp
  HouseClass *v6; // edx
  int v7; // ecx
  char Block[20]; // [esp+10h] [ebp-14h] BYREF
  INIClass *aP1a; // [esp+28h] [ebp+4h]

  strcpy(Block, (const char *)(this + 90100)); /*0x501239*/
  INIClass::ClearSection((int)aP1, (INIClass *)Block, 0); /*0x50124d*/
  INIClass::SetString(aP1->__pad_0, (INIClass *)Block, &g_INI_Key_Country, (INIClass *)(*(_DWORD *)(this + 52) + 36)); /*0x501265*/
  INIClass::SetInt(aP1->__pad_0, (unsigned __int8 *)Block, aTechlevel[0].__pad_0, *(_DWORD *)(this + 468), 0); /*0x50127f*/
  INIClass::SetInt(aP1->__pad_0, (unsigned __int8 *)Block, aCredits[0].__pad_0, *(_DWORD *)(this + 476) / 100, 0); /*0x5012aa*/
  INIClass::SetInt(aP1->__pad_0, (unsigned __int8 *)Block, g_INI_Key_IQ.__pad_0, *(_DWORD *)(this + 464), 0); /*0x5012c4*/
  HouseClass::updateBuildingProduction(aP1->__pad_0, (INIClass *)Block, aEdge, *(CCINIClass **)(this + 480)); /*0x5012dc*/
  LOBYTE(v4) = *(_BYTE *)(this + 493); /*0x5012e1*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, (char *)&g_INI_Key_IQ.unknown50, v4); /*0x5012f4*/
  HouseClass::WriteBuildingTypeNameToINI( /*0x50130c*/
    aP1->__pad_0,
    (INIClass *)Block,
    stru_81B138.__pad_0,
    *(_DWORD *)(this + 90196));
  v5 = 0; /*0x501316*/
  if ( (int)HouseClass_Count > 0 ) /*0x50131a*/
  {
    v6 = HouseClass_Array; /*0x501322*/
    aP1a = (INIClass *)HouseClass_Count; /*0x501328*/
    do /*0x50134a*/
    {
      v7 = *(_DWORD *)(*(_DWORD *)v6->__pad_0 + 48); /*0x501333*/
      if ( (*(_DWORD *)(this + 472) & (1 << v7)) != 0 ) /*0x50133a*/
        v5 |= 1 << v7; /*0x50133c*/
      v6 = (HouseClass *)((char *)v6 + 4); /*0x501342*/
      aP1a = (INIClass *)((char *)aP1a - 1); /*0x501346*/
    }
    while ( aP1a ); /*0x50134a*/
  }
  HouseClass::WriteHouseListToINI(aP1->__pad_0, (CCINIClass *)Block, (char *)g_INI_Key_Country.sectionHead, v5); /*0x501359*/
  if ( *(_BYTE *)(this + 90121) ) /*0x50135e*/
    INIClass::SetString(aP1->__pad_0, (INIClass *)Block, &MEMORY[0x81784C], (INIClass *)(this + 90121)); /*0x50137b*/
  return HouseClass::SaveTriggerNodeData((int *)(this + 22272), (CCINIClass *)aP1, (unsigned __int8 *)Block); /*0x501391*/
}


// ==== 0x005013A0  HouseClass::ScalarDeletingDestructor  this=HouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_5013A0(_DWORD *a1)
{
  int v1; // ebx
  int i; // esi
  int v3; // ecx

  if ( (int)a1[179] <= 0 ) /*0x5013ad*/
    return 1; /*0x5013ec*/
  v1 = a1[21]; /*0x5013b0*/
  for ( i = 0; i < v1; ++i ) /*0x5013b8*/
  {
    v3 = *(_DWORD *)(a1[18] + 4 * i); /*0x5013bd*/
    if ( v3 && !*(_BYTE *)(v3 + 129) && *(int *)(v3 + 108) > 0 ) /*0x5013d3*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 416))(v3, 1); /*0x5013d9*/
  }
  return 0; /*0x5013e8*/
}


// ==== 0x00501400  HouseClass::SetCapacity_5  this=HouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_501400(int a1)
{
  int v1; // edi
  int *v2; // esi
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  int v7; // [esp+8h] [ebp-4h] BYREF

  v1 = MEMORY[0xA8EC88] - 1; /*0x501409*/
  if ( MEMORY[0xA8EC88] - 1 < 0 ) /*0x50140e*/
  {
    *(_BYTE *)(a1 + 549) = 1; /*0x501532*/
    return 0; /*0x50152f*/
  }
  else
  {
    do /*0x50150f*/
    {
      v2 = (int *)*((_DWORD *)MEMORY[0xA8EC7C] + v1); /*0x501423*/
      if ( a1 - 36 == v2[135] && *((_BYTE *)v2 + 116) && !*((_BYTE *)v2 + 129) ) /*0x50143d*/
      {
        if ( *((_BYTE *)v2 + 708) /*0x50146d*/
          && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(*v2 + 132))(*((_DWORD *)MEMORY[0xA8EC7C] + v1)) + 562)
          && !*(_BYTE *)(a1 + 456) )
        {
          v3 = (*(int (__thiscall **)(int *))(*v2 + 132))(v2); /*0x50147b*/
          v4 = *v2; /*0x501487*/
          v7 = *(_DWORD *)(v3 + 160); /*0x501489*/
          (*(void (__thiscall **)(int *, int *, _DWORD, int, _DWORD, int, int, _DWORD))(v4 + 364))( /*0x5014aa*/
            v2,
            &v7,
            0,
            MEMORY[0x8871E0]->?[5],
            0,
            1,
            1,
            0);
        }
        else if ( v2 ) /*0x5014b4*/
        {
          if ( (v2[5] & 4) != 0 ) /*0x5014c3*/
          {
            v5 = v2[373]; /*0x5014c5*/
            if ( v5 ) /*0x5014cd*/
              TeamClass::LiberateMember_Start(v5, (int)v2, 0xFFFFFFFF, 0); /*0x5014d4*/
            (*(void (__thiscall **)(int *, int, _DWORD))(*v2 + 488))(v2, 15, 0); /*0x5014e1*/
          }
          else if ( (*(int (__thiscall **)(int *))(*v2 + 44))(v2) == 6 /*0x501501*/
                 && (*(int (__thiscall **)(int *))(*v2 + 1032))(v2) > 0 )
          {
            BuildingClass::UnloadUnits(v2, 1, 0); /*0x501509*/
          }
        }
      }
      --v1; /*0x50150e*/
    }
    while ( v1 >= 0 ); /*0x50150f*/
    *(_BYTE *)(a1 + 549) = 1; /*0x50151c*/
    return 0; /*0x501523*/
  }
}


// ==== 0x00501540  HouseClass::CanAlly  this=HouseClass  sig=csp ====
bool __thiscall HouseClass::CanAlly(int this, HouseClass *aP1)
{
  int relatedTagsCount; // ecx
  int v5; // edi
  int v6; // ebp
  HouseClass *v7; // edx
  IUnknown *v8; // ebx
  int v9; // eax
  int v10; // eax

  if ( aP1 ) /*0x50154a*/
  {
    if ( aP1 == (HouseClass *)this ) /*0x50154e*/
      return 0; /*0x50154e*/
    relatedTagsCount = aP1->relatedTagsCount; /*0x501550*/
    if ( relatedTagsCount == *(_DWORD *)(this + 48) /*0x501573*/
      || relatedTagsCount != -1 && (*(_DWORD *)(this + 22408) & (1 << relatedTagsCount)) != 0 )
    {
      return 0; /*0x501576*/
    }
  }
  if ( *(_DWORD *)(aP1->relatedTagsCapacity + 188) == HouseTypeClass::Find(&g_INI_Key_Easy.unknown30) /*0x501598*/
    && MEMORY[0xA8B238] )
  {
    return 0; /*0x50159b*/
  }
  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] ) /*0x5015a8*/
    return 1; /*0x5015ab*/
  if ( *(_BYTE *)(this + 501) ) /*0x5015b1*/
    return 0; /*0x5015bc*/
  v5 = 0; /*0x5015c8*/
  v6 = 0; /*0x5015ca*/
  if ( (int)HouseClass_Count > 0 ) /*0x5015ce*/
  {
    v7 = HouseClass_Array; /*0x5015d0*/
    v8 = HouseClass_Count; /*0x5015d7*/
    do /*0x50162c*/
    {
      v9 = *(_DWORD *)v7->__pad_0; /*0x5015d9*/
      if ( !*(_BYTE *)(*(_DWORD *)v7->__pad_0 + 501) && !*(_BYTE *)(*(_DWORD *)(v9 + 52) + 422) ) /*0x5015e8*/
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
      v8 = (IUnknown *)((char *)v8 - 1); /*0x50162b*/
    }
    while ( v8 ); /*0x50162c*/
  }
  return v5 != v6 + 1; /*0x501575*/
}


// ==== 0x00501640  HouseClass::CanDetect  this=HouseClass  sig=csp ====
char HouseClass_CanDetect()
{
  _BYTE *v0; // eax
  char v1; // bl
  int v2; // ecx
  int i; // ebp
  _BYTE *v4; // esi
  int j; // edi
  char v6; // cl

  LOBYTE(v0) = (_BYTE)MEMORY[0x8871E0]; /*0x501640*/
  v1 = *((_BYTE *)MEMORY[0x8871E0] + 5301); /*0x50164d*/
  if ( MEMORY[0xA8B23C] /*0x501662*/
    && (LOBYTE(v0) = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 4))(MEMORY[0xA8B23C]), (_BYTE)v0)
    || v1 )
  {
    LOBYTE(v0) = (_BYTE)MEMORY[0xA8B230]; /*0x501668*/
    if ( !*((_BYTE *)MEMORY[0xA8B230] + 4576) ) /*0x50166d*/
    {
      v2 = HouseClass_Count; /*0x50167b*/
      for ( i = 0; i < v2; ++i ) /*0x501685*/
      {
        v4 = (_BYTE *)*((_DWORD *)HouseClass_Array + i); /*0x501695*/
        if ( v4 ) /*0x50169a*/
        {
          LOBYTE(v0) = v4[501]; /*0x5016a0*/
          if ( !(_BYTE)v0 ) /*0x5016a8*/
          {
            LOBYTE(v0) = v4[492]; /*0x5016b5*/
            if ( !MEMORY[0xA8B238] ) /*0x5016bb*/
              LOBYTE(v0) = (_BYTE)v0 || v4[493]; /*0x5016cf*/
            if ( !(_BYTE)v0 ) /*0x5016d3*/
            {
              v4[586] = 1; /*0x5016d5*/
              v2 = HouseClass_Count; /*0x5016db*/
              for ( j = 0; j < HouseClass_Count; ++j ) /*0x5016e5*/
              {
                v0 = (_BYTE *)*((_DWORD *)HouseClass_Array + j); /*0x5016ec*/
                if ( v0 && !v0[501] ) /*0x5016f3*/
                {
                  v6 = v0[492]; /*0x501705*/
                  if ( !MEMORY[0xA8B238] ) /*0x50170b*/
                    v6 = v6 || v0[493]; /*0x50171f*/
                  if ( v6 ) /*0x501728*/
                    LOBYTE(v0) = HouseClass::SetAlliance((int)v4, (int)v0, 0); /*0x50172a*/
                  else
                    LOBYTE(v0) = HouseClass::HandleAlliance((int)v4, (int)v0, 0); /*0x501731*/
                }
                v2 = HouseClass_Count; /*0x501736*/
              }
            }
          }
        }
      }
    }
  }
  return (char)v0; /*0x50174c*/
}


// ==== 0x00501750  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_501750(_DWORD *this, int a2)
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

  result = MEMORY[0xA8E9A0]; /*0x501750*/
  if ( MEMORY[0xA8E9A0] ) /*0x50175f*/
  {
    v4 = this->q14E9; /*0x501765*/
    v5 = v4 < this->q14EA; /*0x501777*/
    this->q14E9 = a2 + v4; /*0x50177e*/
    House_Notify(); /*0x501784*/
    result = this->q14E9 < this->q14EA; /*0x50179d*/
    v12 = result; /*0x5017a2*/
    if ( !MEMORY[0xA8E7AC] && v5 != result ) /*0x5017ae*/
    {
      (*(void (__stdcall **)(_DWORD *, void *, int *))*this)(this, &unk_7F7CD0, &v9); /*0x5017c1*/
      (*(void (__stdcall **)(int, int *))(*(_DWORD *)v9 + 12))(v9, &v8); /*0x5017cf*/
      if ( (*(int (__stdcall **)(int, int, int *, _DWORD))(*(_DWORD *)v8 + 12))(v8, 1, &v6, 0) >= 0 ) /*0x5017e7*/
      {
        while ( 1 ) /*0x5017f7*/
        {
          (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v6 + 12))(v6, v11); /*0x5017f9*/
          if ( !memcmp(v11, &dword_7E9550, 0x10u) ) /*0x501810*/
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
      return (*(int (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x5018ab*/
    }
  }
  return result; /*0x5018ae*/
}


// ==== 0x005018C0  HouseClass::NotifyPowerStateChange  this=HouseClass  sig=csp ====
char __thiscall sub_5018C0(_DWORD *this, int a2)
{
  int v3; // eax
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

  v3 = this->powerDrain; /*0x5018cc*/
  v4 = this->powerOutput < v3; /*0x5018da*/
  this->powerDrain = a2 + v3; /*0x5018e1*/
  House_Notify(); /*0x5018e7*/
  result = this->powerOutput < this->powerDrain; /*0x501900*/
  v13 = result; /*0x501905*/
  if ( !MEMORY[0xA8E7AC] && v4 != result ) /*0x501911*/
  {
    (*(void (__stdcall **)(_DWORD *, void *, int *))*this)(this, &unk_7F7CD0, &v10); /*0x501924*/
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)v10 + 12))(v10, &v9); /*0x501932*/
    if ( (*(int (__stdcall **)(int, int, int *, _DWORD))(*(_DWORD *)v9 + 12))(v9, 1, &v7, 0) >= 0 ) /*0x50194a*/
    {
      while ( 1 ) /*0x50195a*/
      {
        (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v7 + 12))(v7, v12); /*0x50195c*/
        if ( !memcmp(v12, &dword_7E9550, 0x10u) ) /*0x501973*/
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
    return (*(int (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x501a0a*/
  }
  return result; /*0x501a0d*/
}


// ==== 0x00501A20  ObjectClass::House_Notify  this=AbstractClass  sig=csp ====
void sub_501A20()
{
  wchar_t *v0; // ebx
  int v1; // edi
  int v2; // esi

  v0 = MEMORY[0xA8ECC8]; /*0x501a21*/
  if ( MEMORY[0xA8ECC8] ) /*0x501a2a*/
  {
    v1 = 0; /*0x501a2c*/
    if ( (int)MEMORY[0xA8ECC8] > 0 ) /*0x501a30*/
    {
      do /*0x501a92*/
      {
        v2 = *((_DWORD *)MEMORY[0xA8ECBC] + v1); /*0x501a38*/
        if ( v2 /*0x501a81*/
          && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 44))(*((_DWORD *)MEMORY[0xA8ECBC] + v1)) == 6
          && !*(_BYTE *)(v2 + 1050)
          && *(int *)(*(_DWORD *)(v2 + 1312) + 3808) > 0
          && ((1 << *(_DWORD *)(*((_DWORD *)HouseClass_Player + 13) + 184)) & *(_DWORD *)(v2 + 528)) != 0 )
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


// ==== 0x00501AC0  HouseClass::GenerateAttackCoords  this=AbstractClass  sig=csp ====
_DWORD *__thiscall HouseClass::GenerateAttackCoords(int *this, MouseClass *aP1, int a3)
{
  int v4; // eax
  ScenarioClass *v5; // esi
  int v6; // edx
  void *v7; // eax
  int *v8; // eax
  int *v9; // eax
  int v10; // eax
  int v11; // eax
  void *v12; // eax
  int *v13; // eax
  double v14; // rdi
  double v15; // st7
  double v16; // st7
  int v17; // eax
  int v18; // eax
  void *v19; // eax
  int *v20; // eax
  double v21; // rdi
  double v22; // st7
  double v23; // st7
  int v24; // eax
  int v25; // eax
  void *v26; // eax
  int *v27; // eax
  double v28; // rdi
  double v29; // st7
  double v30; // st7
  AbstractClass *StartCoords; // edi
  double v32; // st7
  double v33; // st7
  IUnknown *v34; // eax
  int *v35; // eax
  IUnknown *v37; // [esp-Ch] [ebp-A4h]
  IUnknown *v38; // [esp-Ch] [ebp-A4h]
  IUnknown *v39; // [esp-Ch] [ebp-A4h]
  MouseClass *v40; // [esp-8h] [ebp-A0h]
  MouseClass *v41; // [esp-8h] [ebp-A0h]
  MouseClass *v42; // [esp-8h] [ebp-A0h]
  MouseClass *v43; // [esp-8h] [ebp-A0h]
  int v44; // [esp-4h] [ebp-9Ch]
  int v45; // [esp-4h] [ebp-9Ch]
  int v46; // [esp-4h] [ebp-9Ch]
  int v47; // [esp-4h] [ebp-9Ch]
  int v48; // [esp+Ch] [ebp-8Ch] BYREF
  double v49; // [esp+10h] [ebp-88h] BYREF
  _DWORD v50[4]; // [esp+1Ch] [ebp-7Ch] BYREF
  _DWORD v51[4]; // [esp+2Ch] [ebp-6Ch] BYREF
  _DWORD v52[5]; // [esp+3Ch] [ebp-5Ch] BYREF
  int v53; // [esp+50h] [ebp-48h] BYREF
  int v54; // [esp+54h] [ebp-44h]
  int v55; // [esp+58h] [ebp-40h]
  int v56; // [esp+5Ch] [ebp-3Ch] BYREF
  int v57; // [esp+60h] [ebp-38h]
  int v58; // [esp+64h] [ebp-34h]
  int v59; // [esp+68h] [ebp-30h] BYREF
  int v60; // [esp+6Ch] [ebp-2Ch]
  int v61[3]; // [esp+74h] [ebp-24h] BYREF
  _DWORD v62[3]; // [esp+80h] [ebp-18h] BYREF
  _DWORD v63[3]; // [esp+8Ch] [ebp-Ch] BYREF

  v53 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1292]; /*0x501ae0*/
  v4 = this->q1526; /*0x501ae4*/
  v54 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1296]; /*0x501af1*/
  v55 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1300]; /*0x501af5*/
  if ( v4 >= 2048 ) /*0x501af9*/
  {
    v4 = 2048; /*0x501b10*/
  }
  else if ( v4 < 768 ) /*0x501b00*/
  {
    v4 = 768; /*0x501b02*/
  }
  switch ( a3 ) /*0x501b24*/
  {
    case 0: /*0x501b24*/
      v5 = (ScenarioClass *)Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)v4); /*0x501b42*/
      LODWORD(v49) = *(_DWORD *)HouseClass::GetCurrentOption(this, (IUnknown *)&v51[1])->__pad_0; /*0x501b57*/
      if ( CellStruct::Equals(&v49, &MEMORY[0xA8D63C].__pad_14B0[1196]) ) /*0x501b5b*/
      {
        v6 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1300]; /*0x501b6f*/
        v56 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1292]; /*0x501b75*/
        v57 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1296]; /*0x501b79*/
      }
      else
      {
        v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v49); /*0x501b89*/
        v8 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v7 + 72))(v7, &v59); /*0x501b97*/
        v56 = *v8; /*0x501b9c*/
        v57 = v8[1]; /*0x501ba3*/
        v6 = v8[2]; /*0x501ba7*/
      }
      v58 = v6; /*0x501baa*/
      v9 = RandomCoordScatter(v61, &v56, (int)v5, 1); /*0x501bb9*/
      goto LABEL_23; /*0x501bbe*/
    case 1: /*0x501b24*/
      v50[1] = Random::Range(&MEMORY[0xA8B230]->random[1], (IUnknown *)v4, (IUnknown *)(2 * v4)); /*0x501bdc*/
      LOWORD(v49) = Random::State(&MEMORY[0xA8B230]->random[1]); /*0x501beb*/
      v10 = LODWORD(v49); /*0x501bf0*/
      BYTE1(v10) = BYTE1(v49) & 0x3F; /*0x501bf4*/
      LODWORD(v49) = ((unsigned __int16)v10 ^ (unsigned __int16)((v10 & 0xE000) - 1)) & 0xE000 ^ v10; /*0x501c11*/
      v50[0] = *(_DWORD *)HouseClass::GetCurrentOption(this, (IUnknown *)&v51[1])->__pad_0; /*0x501c25*/
      if ( CellStruct::Equals(v50, &MEMORY[0xA8D63C].__pad_14B0[1196]) ) /*0x501c29*/
      {
        v11 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1300]; /*0x501c3e*/
        v59 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1292]; /*0x501c43*/
        v60 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1296]; /*0x501c47*/
      }
      else
      {
        v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v50); /*0x501c57*/
        v13 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v12 + 72))(v12, v62); /*0x501c68*/
        v59 = *v13; /*0x501c6d*/
        v60 = v13[1]; /*0x501c74*/
        v11 = v13[2]; /*0x501c78*/
      }
      v44 = v11; /*0x501c86*/
      *(double *)&v52[1] = (double)(SLOWORD(v49) - 0x3FFF) * -0.00009587672516830327; /*0x501c95*/
      v14 = *(double *)&v52[1]; /*0x501ca1*/
      *(double *)&v50[1] = (double)v50[1]; /*0x501ca7*/
      v49 = (double)v60; /*0x501caf*/
      v15 = Math::SinCos(*(double *)&v52[1]); /*0x501cb3*/
      v40 = (MouseClass *)Math::RoundToInt(v49 - v15 * *(double *)&v50[1]); /*0x501cc8*/
      v16 = Math::ArcTan2(v14); /*0x501ccb*/
      v37 = (IUnknown *)Math::RoundToInt(v16 * *(double *)&v50[1] + (double)v59); /*0x501ce0*/
      v9 = Coord3D::Set(&v52[1], v37, v40, v44); /*0x501ce5*/
      goto LABEL_23; /*0x501ce5*/
    case 2: /*0x501b24*/
      v51[1] = Random::Range(&MEMORY[0xA8B230]->random[1], (IUnknown *)v4, (IUnknown *)(2 * v4)); /*0x501d03*/
      LOWORD(v49) = Random::State(&MEMORY[0xA8B230]->random[1]); /*0x501d12*/
      v17 = LODWORD(v49); /*0x501d17*/
      BYTE1(v17) = BYTE1(v49) & 0x3F | 0x40; /*0x501d22*/
      LODWORD(v49) = ((unsigned __int16)v17 ^ (unsigned __int16)((v17 & 0xE000) - 1)) & 0xE000 ^ v17; /*0x501d3b*/
      v50[0] = *(_DWORD *)HouseClass::GetCurrentOption(this, (IUnknown *)&v52[1])->__pad_0; /*0x501d4f*/
      if ( CellStruct::Equals(v50, &MEMORY[0xA8D63C].__pad_14B0[1196]) ) /*0x501d53*/
      {
        v18 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1300]; /*0x501d68*/
        v59 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1292]; /*0x501d6d*/
        v60 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1296]; /*0x501d71*/
      }
      else
      {
        v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v50); /*0x501d81*/
        v20 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v19 + 72))(v19, v62); /*0x501d92*/
        v59 = *v20; /*0x501d97*/
        v60 = v20[1]; /*0x501d9e*/
        v18 = v20[2]; /*0x501da2*/
      }
      v45 = v18; /*0x501db0*/
      v50[1] = SLOWORD(v49) - 0x3FFF; /*0x501db1*/
      *(double *)&v50[1] = (double)v50[1] * -0.00009587672516830327; /*0x501dbf*/
      v21 = *(double *)&v50[1]; /*0x501dcb*/
      *(double *)&v51[1] = (double)v51[1]; /*0x501dd1*/
      v49 = (double)v60; /*0x501dd9*/
      v22 = Math::SinCos(*(double *)&v50[1]); /*0x501ddd*/
      v41 = (MouseClass *)Math::RoundToInt(v49 - v22 * *(double *)&v51[1]); /*0x501df2*/
      v23 = Math::ArcTan2(v21); /*0x501df5*/
      v38 = (IUnknown *)Math::RoundToInt(v23 * *(double *)&v51[1] + (double)v59); /*0x501e0a*/
      v9 = Coord3D::Set(&v50[1], v38, v41, v45); /*0x501e0f*/
      goto LABEL_23; /*0x501e0f*/
    case 3: /*0x501b24*/
      v50[1] = Random::Range(&MEMORY[0xA8B230]->random[1], (IUnknown *)v4, (IUnknown *)(2 * v4)); /*0x501e2d*/
      LOWORD(v49) = Random::State(&MEMORY[0xA8B230]->random[1]); /*0x501e3c*/
      v24 = LODWORD(v49); /*0x501e41*/
      BYTE1(v24) = BYTE1(v49) & 0x3F | 0x80; /*0x501e4c*/
      LODWORD(v49) = ((unsigned __int16)v24 ^ (unsigned __int16)((v24 & 0xE000) - 1)) & 0xE000 ^ v24; /*0x501e65*/
      v50[0] = *(_DWORD *)HouseClass::GetCurrentOption(this, (IUnknown *)&v52[1])->__pad_0; /*0x501e79*/
      if ( CellStruct::Equals(v50, &MEMORY[0xA8D63C].__pad_14B0[1196]) ) /*0x501e7d*/
      {
        v25 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1300]; /*0x501e92*/
        v59 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1292]; /*0x501e97*/
        v60 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1296]; /*0x501e9b*/
      }
      else
      {
        v26 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v50); /*0x501eab*/
        v27 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v26 + 72))(v26, v62); /*0x501ebc*/
        v59 = *v27; /*0x501ec1*/
        v60 = v27[1]; /*0x501ec8*/
        v25 = v27[2]; /*0x501ecc*/
      }
      v46 = v25; /*0x501eda*/
      v51[1] = SLOWORD(v49) - 0x3FFF; /*0x501edb*/
      *(double *)&v51[1] = (double)v51[1] * -0.00009587672516830327; /*0x501ee9*/
      v28 = *(double *)&v51[1]; /*0x501ef5*/
      *(double *)&v50[1] = (double)v50[1]; /*0x501efb*/
      v49 = (double)v60; /*0x501f03*/
      v29 = Math::SinCos(*(double *)&v51[1]); /*0x501f07*/
      v42 = (MouseClass *)Math::RoundToInt(v49 - v29 * *(double *)&v50[1]); /*0x501f1c*/
      v30 = Math::ArcTan2(v28); /*0x501f1f*/
      v39 = (IUnknown *)Math::RoundToInt(v30 * *(double *)&v50[1] + (double)v59); /*0x501f34*/
      v9 = Coord3D::Set(&v51[1], v39, v42, v46); /*0x501f39*/
LABEL_23:
      v53 = *v9; /*0x501f3e*/
      v54 = v9[1]; /*0x501f47*/
      v55 = v9[2]; /*0x501f4e*/
      break; /*0x501f52*/
    case 4: /*0x501b24*/
      v50[1] = Random::Range(&MEMORY[0xA8B230]->random[1], (IUnknown *)v4, (IUnknown *)(2 * v4)); /*0x501f70*/
      LOWORD(v49) = Random::State(&MEMORY[0xA8B230]->random[1]); /*0x501f7f*/
      LODWORD(v49) |= 0xC000u; /*0x501f98*/
      StartCoords = (AbstractClass *)HouseClass::GetStartCoords(this, (AbstractClass *)v63); /*0x501fa7*/
      v47 = *(_DWORD *)&StartCoords->__pad_0[8]; /*0x501fc2*/
      *(double *)&v52[1] = (double)(int)((LOWORD(v49) & 0x1FFF ^ (__int16)((LOWORD(v49) & 0xE000) - 1) & 0xFFFFE000) /*0x501fd7*/
                                       - 0x3FFF)
                         * -0.00009587672516830327;
      *(double *)&v51[1] = (double)v50[1]; /*0x501fe9*/
      *(double *)&v50[1] = (double)*(int *)&StartCoords->__pad_0[4]; /*0x501ff0*/
      v32 = Math::SinCos(*(double *)&v52[1]); /*0x501ff4*/
      v43 = (MouseClass *)Math::RoundToInt(*(double *)&v50[1] - v32 * *(double *)&v51[1]); /*0x50200d*/
      v33 = Math::ArcTan2(*(double *)&v52[1]); /*0x502010*/
      v34 = (IUnknown *)Math::RoundToInt(v33 * *(double *)&v51[1] + (double)*(int *)StartCoords->__pad_0); /*0x50201e*/
      v35 = Coord3D::Set(v62, v34, v43, v47); /*0x50202b*/
      v53 = *v35; /*0x502032*/
      v54 = v35[1]; /*0x502039*/
      v55 = v35[2]; /*0x502040*/
      break; /*0x502040*/
    default:
      break;
  }
  if ( Coord3D::Equals(&v53, (BuildingClass *)&MEMORY[0xA8D63C].__pad_14B0[1292]) ) /*0x50204d*/
  {
    if ( a3 ) /*0x50205b*/
      v48 = *HouseClass::GenerateAttackCoords(this, (MouseClass *)&v52[1], 0); /*0x502081*/
    else
      v48 = *(_DWORD *)HouseClass::GetCurrentOption(this, (IUnknown *)&v52[1])->__pad_0; /*0x50206b*/
  }
  else
  {
    v48 = *Coord::ToCell(&v53, (IUnknown *)&v52[1]); /*0x502097*/
  }
  if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)&v48, (TechnoClass *)1) ) /*0x5020a7*/
    aP1->field_0 = v48; /*0x5020df*/
  else
    aP1->field_0 = *HouseClass::ClampToUsableCell(&MEMORY[0x87F7E8], (MouseClass *)&v52[1], (MouseClass *)&v48); /*0x5020c9*/
  return &aP1->field_0; /*0x5020cd*/
}


// ==== 0x00502160  WaypointClass::FindOrAddPath  this=WaypointClass  sig=csp ====
char __thiscall sub_502160(unsigned int *this, _DWORD *a2)
{
  int *v2; // ebp
  int v3; // ebx
  signed int v4; // esi
  void *v5; // eax
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // edi
  int *Element; // eax
  int v10; // kr08_4
  int v11; // eax
  char result; // al
  unsigned int v13; // esi
  void *v14; // eax
  int v15; // eax
  signed int v16; // [esp+10h] [ebp-Ch]
  __int16 v18; // [esp+1Ah] [ebp-2h]

  v2 = (int *)(this + 132); /*0x502171*/
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
        v6 = WaypointPathClass::Construct((int)v5, v4); /*0x5021b6*/
      else
        v6 = 0; /*0x5021bd*/
      *v2 = v6; /*0x5021bf*/
    }
    v7 = (_DWORD *)*v2; /*0x5021c2*/
    v8 = 0; /*0x5021c5*/
    if ( *(int *)(*v2 + 56) > 0 ) /*0x5021cc*/
      break; /*0x5021cc*/
LABEL_13:
    ++v4; /*0x50221e*/
    ++v2; /*0x50221f*/
    v16 = v4; /*0x502225*/
    if ( v4 >= 12 ) /*0x502229*/
    {
      v13 = this->q083; /*0x502233*/
      if ( !*(this + v13 + 132) ) /*0x502239*/
      {
        v14 = __2_YAPAXI_Z(0x40u); /*0x502246*/
        if ( v14 ) /*0x502250*/
          v15 = WaypointPathClass::Construct((int)v14, v13); /*0x502255*/
        else
          v15 = 0; /*0x50225c*/
        *(this + v13 + 132) = v15; /*0x50225e*/
      }
      return WaypointClass_Find((_DWORD *)*(this + this->q083 + 132), a2); /*0x502277*/
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
      if ( v16 != this->q083 ) /*0x50220f*/
        return result; /*0x50227c*/
    }
    v7 = (_DWORD *)*v2; /*0x502211*/
    if ( ++v8 >= *(_DWORD *)(*v2 + 56) ) /*0x502218*/
    {
      v4 = v16; /*0x50221a*/
      goto LABEL_13; /*0x50221a*/
    }
  }
}


// ==== 0x005022F0  WaypointClass::IsCoordinateUsed  this=WaypointClass  sig=csp ====
char __thiscall sub_5022F0(int *this, _WORD *a2)
{
  signed int v2; // esi
  int *i; // ebx
  void *v4; // eax
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // edi
  int *Element; // eax
  int v9; // kr04_4
  int v10; // eax
  signed int v12; // [esp+10h] [ebp-8h]

  v2 = 0; /*0x5022fa*/
  v12 = 0; /*0x502301*/
  for ( i = this + 132; ; ++i ) /*0x502305*/
  {
    if ( !*i ) /*0x50230b*/
    {
      v4 = __2_YAPAXI_Z(0x40u); /*0x502312*/
      if ( v4 ) /*0x50231c*/
        v5 = WaypointPathClass::Construct((int)v4, v2); /*0x502321*/
      else
        v5 = 0; /*0x502328*/
      *i = v5; /*0x50232a*/
    }
    v6 = (_DWORD *)*i; /*0x50232c*/
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
    if ( (unsigned __int16)(v9 / 256) == *a2 && (_WORD)v10 == a2[1] && v12 != this->q083 ) /*0x502378*/
      return 0; /*0x502397*/
    v6 = (_DWORD *)*i; /*0x50237a*/
    if ( ++v7 >= *(_DWORD *)(*i + 56) ) /*0x502380*/
    {
      v2 = v12; /*0x502382*/
      goto LABEL_13; /*0x502382*/
    }
  }
}


// ==== 0x005023B0  Waypoint::FindByCell  this=Waypoint  sig=csp ====
_DWORD *__thiscall Waypoint::FindByCell(char *this, IUnknown *aP1)
{
  signed int v2; // esi
  char *i; // ebx
  int v4; // eax
  WaypointPathClass *v5; // eax
  _DWORD *v6; // ecx
  CampaignScore *v7; // edi
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
        v5 = (WaypointPathClass *)WaypointPathClass::Construct(v4, v2); /*0x5023db*/
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
    if ( (unsigned __int16)(*Element / 256) == LOWORD(aP1->field_0) /*0x502422*/
      && (unsigned __int16)(Element[1] / 256) == HIWORD(aP1->field_0) )
    {
      return Element; /*0x502441*/
    }
    v6 = *(_DWORD **)i; /*0x502424*/
    v7 = (CampaignScore *)((char *)v7 + 1); /*0x502426*/
    if ( (int)v7 >= *(_DWORD *)(*(_DWORD *)i + 56) ) /*0x50242a*/
    {
      v2 = v10; /*0x50242c*/
      goto LABEL_12; /*0x50242c*/
    }
  }
}


// ==== 0x00502460  WaypointClass::FindOrCreate  this=WaypointClass  sig=csp ====
char __thiscall WaypointClass::FindOrCreate(char *this, MouseClass *aP1, IUnknown *aP2, IUnknown *aP3)
{
  unsigned int v4; // edi
  char *i; // esi
  int v6; // eax
  WaypointPathClass *v7; // eax
  _DWORD *v8; // ecx
  CampaignScore *v9; // ebx

  v4 = 0; /*0x502468*/
  for ( i = this + 528; ; i += 4 ) /*0x50246a*/
  {
    if ( !*(_DWORD *)i ) /*0x502470*/
    {
      v6 = __2_YAPAXI_Z(0x40u); /*0x502477*/
      if ( v6 ) /*0x502481*/
        v7 = (WaypointPathClass *)WaypointPathClass::Construct(v6, v4); /*0x502486*/
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
      aP2->field_0 = -1; /*0x5024c1*/
      LOBYTE(aP3->field_0) = 0; /*0x5024c7*/
      return 0; /*0x5024ce*/
    }
  }
  while ( (MouseClass *)Array::GetElement(v8, v9) != aP1 ) /*0x5024a4*/
  {
    v8 = *(_DWORD **)i; /*0x5024a6*/
    v9 = (CampaignScore *)((char *)v9 + 1); /*0x5024a8*/
    if ( (int)v9 >= *(_DWORD *)(*(_DWORD *)i + 56) ) /*0x5024ac*/
      goto LABEL_10; /*0x5024ac*/
  }
  aP2->field_0 = v4; /*0x5024d9*/
  LOBYTE(aP3->field_0) = (_BYTE)v9; /*0x5024dd*/
  return 1; /*0x5024bf*/
}


// ==== 0x005024F0  HouseClass::StubReturnNullPointer  this=HouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_5024F0(int a1, _DWORD *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // esi

  if ( !a2 ) /*0x5024f8*/
    return -2147467261; /*0x5024fb*/
  v3 = __2_YAPAXI_Z(0x24u); /*0x502506*/
  if ( !v3 ) /*0x502510*/
    return -2147024882; /*0x502510*/
  v4 = VectorClass_ptr_BuildChoiceClass_int_ouseClass::Constructor(v3, (_DWORD *)(a1 + 90168)); /*0x50251f*/
  v5 = v4; /*0x502524*/
  if ( !v4 ) /*0x502528*/
    return -2147024882; /*0x50252b*/
  (*(void (__stdcall **)(_DWORD *))(*v4 + 4))(v4); /*0x502537*/
  *a2 = v5; /*0x50253a*/
  return 0; /*0x5024fa*/
}


// ==== 0x00502550  HouseClass::StubReturnNullPointer_0  this=HouseClass  sig=csp ====
int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_502550(int a1, const void *a2, _DWORD *a3)
{
  int v4; // ebp
  int v5; // ebx
  _BYTE v6[16]; // [esp+10h] [ebp-10h] BYREF

  if ( !a3 ) /*0x50255d*/
    return -2147467261; /*0x502562*/
  *a3 = 0; /*0x50256e*/
  v4 = 0; /*0x502578*/
  if ( *(int *)(a1 + 90184) <= 0 ) /*0x502582*/
    return -2147220990; /*0x5025bc*/
  while ( 1 ) /*0x502593*/
  {
    v5 = *(_DWORD *)(*(_DWORD *)(a1 + 90172) + 4 * v4); /*0x502593*/
    (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v5 + 12))(v5, v6); /*0x502599*/
    if ( !memcmp(v6, a2, 0x10u) ) /*0x5025ab*/
      break; /*0x5025ab*/
    if ( ++v4 >= *(_DWORD *)(a1 + 90184) ) /*0x5025ba*/
      return -2147220990; /*0x5025ba*/
  }
  *a3 = v5; /*0x5025d0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 4))(v5); /*0x5025d4*/
  return 0; /*0x50255f*/
}


// ==== 0x005025F0  HouseClass::RegisterGain  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::RegisterGain(int this, TechnoClass *aP1, char a3)
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
  BuildingTypeClass *v14; // ebx
  _DWORD *i; // esi
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
  char aP1a; // [esp+24h] [ebp+4h]

  if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 1516) ) /*0x502606*/
    --*(_DWORD *)(this + 344); /*0x502610*/
  if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 1517) ) /*0x502620*/
    --*(_DWORD *)(this + 348); /*0x50262a*/
  SidebarClass::UpdateCameoProductionState((int)&MEMORY[0x87F7E8], aP1); /*0x502636*/
  if ( *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 1036) )
  {
    if ( aP1 )
    {
      if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) == 6 )
      {
        if ( *((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) == 6
             ? (char *)&aP1[1].currentRank + 2
             : (_BYTE *)1634) )
        {
          *((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) == 6
          ? (char *)&aP1[1].currentRank + 2
          : (_BYTE *)1634) = 0;
          v5 = *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 1036); /*0x5026b4*/
          v6 = *(_DWORD *)(this + 728) - 1; /*0x5026ba*/
          v29 = v5; /*0x5026bb*/
          *(_DWORD *)(this + 728) = v6; /*0x5026bf*/
          if ( !v6 ) /*0x5026c5*/
          {
            if ( v5 ) /*0x5026cd*/
            {
              aP1a = 0; /*0x5026d9*/
              v7 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[412] - 1; /*0x5026de*/
              if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[412] - 1 >= 0 ) /*0x5026e3*/
              {
                do /*0x502723*/
                {
                  v8 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[400] + 4 * v7); /*0x5026f0*/
                  if ( *(_DWORD *)(v8 + 540) == this /*0x50270c*/
                    && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v8 + 132))(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[400]
                                                                                       + 4 * v7)) == v29
                    && !*(_BYTE *)(v8 + 129) )
                  {
                    TechnoClass::Deactivate((_DWORD *)v8); /*0x502718*/
                    aP1a = 1; /*0x50271d*/
                  }
                  --v7; /*0x502722*/
                }
                while ( v7 >= 0 ); /*0x502723*/
                if ( aP1a && MEMORY[0xA8D63C].__pad_1258[268] ) /*0x502735*/
                {
                  if ( MEMORY[0xA8B238] ) /*0x50273e*/
                  {
                    if ( (IUnknown *)this != HouseClass_Player ) /*0x502761*/
                      goto LABEL_26; /*0x502761*/
                  }
                  else if ( !*(_BYTE *)(this + 492) && !*(_BYTE *)(this + 493) ) /*0x502752*/
                  {
                    goto LABEL_26; /*0x502752*/
                  }
                  if ( !*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] ) /*0x50276a*/
                    VoxClass::FindAndPlay(&unk_824E4C, -1, -1); /*0x502776*/
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_26:
  result = (_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) - 1); /*0x502782*/
  switch ( (unsigned int)result ) /*0x502794*/
  {
    case 0u: /*0x502794*/
      if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 3478) /*0x5029d9*/
        || *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 3416) )
      {
        v26 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502a04*/
        *(_DWORD *)(this + 90288) -= (*(int (__thiscall **)(int, int))(*(_DWORD *)v26 + 132))(v26, this); /*0x502a15*/
      }
      else
      {
        v25 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x5029e7*/
        *(_DWORD *)(this + 90284) -= (*(int (__thiscall **)(int, int))(*(_DWORD *)v25 + 132))(v25, this); /*0x5029f8*/
      }
      result = (_DWORD *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502a1f*/
      if ( !*((_BYTE *)result + 3231) ) /*0x502a25*/
      {
        v27 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502a33*/
        v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 64))(v27); /*0x502a3d*/
        result = (_DWORD *)CounterClass::Decrement((_DWORD *)(this + 21860), v28); /*0x502a47*/
      }
      break; /*0x502a47*/
    case 1u: /*0x502794*/
      v18 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x5028d4*/
      *(_DWORD *)(this + 90288) -= (*(int (__thiscall **)(int, int))(*(_DWORD *)v18 + 132))(v18, this); /*0x5028ef*/
      result = (_DWORD *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x5028f7*/
      if ( !*((_BYTE *)result + 3231) ) /*0x5028fd*/
      {
        v19 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x50290f*/
        v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 64))(v19); /*0x502919*/
        result = (_DWORD *)CounterClass::Decrement((_DWORD *)(this + 21900), v20); /*0x502923*/
      }
      break; /*0x50292e*/
    case 5u: /*0x502794*/
      result = (_DWORD *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x50279f*/
      if ( !*((_BYTE *)result + 3231) ) /*0x5027a5*/
      {
        v10 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x5027b3*/
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 64))(v10); /*0x5027bd*/
        result = (_DWORD *)CounterClass::Decrement((_DWORD *)(this + 21840), v11); /*0x5027c7*/
      }
      if ( aP1 ) /*0x5027ce*/
      {
        v12 = *(_DWORD *)aP1[1].__pad_0; /*0x5027d4*/
        if ( *(_BYTE *)(v12 + 5821) && !*(_BYTE *)(v12 + 3278) ) /*0x5027e4*/
          --*(_DWORD *)(this + 352); /*0x5027ee*/
        v13 = *(_DWORD *)(this + 784); /*0x5027f4*/
        *(_BYTE *)(this + 22392) = 1; /*0x5027fa*/
        *(_DWORD *)(this + 784) = v13 - *(_DWORD *)(*(_DWORD *)aP1[1].__pad_0 + 2048); /*0x502815*/
        if ( a3 ) /*0x50281b*/
        {
          v14 = (BuildingTypeClass *)&aP1->tiltSidewaysAngle; /*0x502821*/
          result = (_DWORD *)FirstFloatPositive(&aP1->tiltSidewaysAngle); /*0x502829*/
          for ( i = result; result != (_DWORD *)-1; i = result ) /*0x502833*/
          {
            v16 = Float::SubtractClamped((float *)v14->vtable0, 2147483600.0, (int)i); /*0x502841*/
            v17 = (double)(int)Math::RoundToInt(v16); /*0x50284f*/
            *(_DWORD *)(this + 21736) = Math::RoundToInt(v17); /*0x502866*/
            *(_DWORD *)(this + 780) = Math::RoundToInt(v17); /*0x502893*/
            result = (_DWORD *)FirstFloatPositive((float *)v14->vtable0); /*0x50289b*/
          }
        }
        else
        {
          result = HouseClass::ComputeResourceDelta((float *)(this + 764), v30, (int)&aP1->tiltSidewaysAngle); /*0x5028c2*/
        }
      }
      break; /*0x5028a5*/
    case 0xEu: /*0x502794*/
      if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 3478) ) /*0x50293b*/
      {
        v21 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502949*/
        *(_DWORD *)(this + 90288) -= (*(int (__thiscall **)(int, int))(*(_DWORD *)v21 + 132))(v21, this); /*0x50295a*/
      }
      else
      {
        v22 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502966*/
        *(_DWORD *)(this + 90280) -= (*(int (__thiscall **)(int, int))(*(_DWORD *)v22 + 132))(v22, this); /*0x502977*/
      }
      result = (_DWORD *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502981*/
      if ( !*((_BYTE *)result + 3231) ) /*0x502987*/
      {
        v23 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502999*/
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
char __thiscall HouseClass::RegisterGain_0(int this, TechnoClass *aP1, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
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

  if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 1516) ) /*0x502a95*/
    ++*(_DWORD *)(this + 344); /*0x502a9f*/
  if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 1517) ) /*0x502aaf*/
    ++*(_DWORD *)(this + 348); /*0x502ab9*/
  v4 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) - 1; /*0x502ac6*/
  switch ( v4 ) /*0x502ad8*/
  {
    case 0: /*0x502ad8*/
      if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 3478) /*0x502ca5*/
        || *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 3416) )
      {
        v17 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502cd0*/
        *(_DWORD *)(this + 90288) += (*(int (__thiscall **)(int, int))(*(_DWORD *)v17 + 132))(v17, this); /*0x502ce1*/
      }
      else
      {
        v16 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502cb3*/
        *(_DWORD *)(this + 90284) += (*(int (__thiscall **)(int, int))(*(_DWORD *)v16 + 132))(v16, this); /*0x502cc4*/
      }
      v18 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502ceb*/
      v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 64))(v18); /*0x502cf5*/
      LOBYTE(v4) = RefCount::Increment((_DWORD *)(this + 21860), v19); /*0x502cff*/
      break; /*0x502cff*/
    case 1: /*0x502ad8*/
      v9 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502b94*/
      *(_DWORD *)(this + 90288) += (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 132))(v9, this); /*0x502baf*/
      v4 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502bb7*/
      if ( !*(_BYTE *)(v4 + 3231) ) /*0x502bbd*/
      {
        v10 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502bcf*/
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 64))(v10); /*0x502bd9*/
        LOBYTE(v4) = RefCount::Increment((_DWORD *)(this + 21900), v11); /*0x502be3*/
      }
      break; /*0x502bed*/
    case 5: /*0x502ad8*/
      v4 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502ae3*/
      if ( !*(_BYTE *)(v4 + 3231) ) /*0x502ae9*/
      {
        v5 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502af7*/
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 64))(v5); /*0x502b01*/
        LOBYTE(v4) = RefCount::Increment((_DWORD *)(this + 21840), v6); /*0x502b0b*/
      }
      if ( aP1 ) /*0x502b12*/
      {
        v4 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1); /*0x502b1c*/
        if ( v4 == 6 ) /*0x502b22*/
        {
          v7 = *(_DWORD *)aP1[1].__pad_0; /*0x502b28*/
          if ( *(_BYTE *)(v7 + 5821) && !*(_BYTE *)(v7 + 3278) ) /*0x502b38*/
            ++*(_DWORD *)(this + 352); /*0x502b42*/
          PowerDrain = BuildingClass::GetPowerDrain(aP1); /*0x502b4a*/
          HouseClass::NotifyPowerStateChange((_DWORD *)this, PowerDrain); /*0x502b52*/
          *(_DWORD *)(this + 784) += *(_DWORD *)(*(_DWORD *)aP1[1].__pad_0 + 2048); /*0x502b78*/
          LOBYTE(v4) = (unsigned __int8)HouseClass::AccumulateFloat4( /*0x502b83*/
                                          (float *)(this + 764),
                                          v21,
                                          (int)&aP1->tiltSidewaysAngle);
        }
      }
      break; /*0x502b8d*/
    case 14: /*0x502ad8*/
      if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 3478) ) /*0x502bfa*/
      {
        v12 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502c08*/
        *(_DWORD *)(this + 90288) += (*(int (__thiscall **)(int, int))(*(_DWORD *)v12 + 132))(v12, this); /*0x502c19*/
      }
      else
      {
        v13 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502c25*/
        *(_DWORD *)(this + 90280) += (*(int (__thiscall **)(int, int))(*(_DWORD *)v13 + 132))(v13, this); /*0x502c36*/
      }
      LOBYTE(v4) = BYTE1(aP1[1].airstrikeTintTimer[0]); /*0x502c3c*/
      if ( !(_BYTE)v4 ) /*0x502c44*/
      {
        v4 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502c4e*/
        if ( !*(_BYTE *)(v4 + 3231) ) /*0x502c54*/
        {
          v14 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1); /*0x502c66*/
          v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 64))(v14); /*0x502c70*/
          LOBYTE(v4) = RefCount::Increment((_DWORD *)(this + 21880), v15); /*0x502c7a*/
        }
      }
      break; /*0x502c84*/
    default:
      return v4;
  }
  return v4; /*0x502b88*/
}


// ==== 0x00502D30  HouseClass::FindOwner  this=HouseClass  sig=csp ====
int __thiscall HouseClass_FindOwner(void *this)
{
  int v1; // edx
  char *i; // esi
  int result; // eax

  v1 = 0; /*0x502d39*/
  if ( HouseClass_Count <= 0 ) /*0x502d3d*/
    return 0; /*0x502d5a*/
  for ( i = (char *)HouseClass_Array; ; i += 4 ) /*0x502d3f*/
  {
    result = *(_DWORD *)i; /*0x502d45*/
    if ( *(void **)(*(_DWORD *)(*(_DWORD *)i + 52) + 184) == this ) /*0x502d50*/
      break; /*0x502d50*/
    if ( ++v1 >= HouseClass_Count ) /*0x502d58*/
      return 0; /*0x502d58*/
  }
  return result; /*0x502d5c*/
}


// ==== 0x00502D60  HouseClass::UpdatePowerTimers  this=HouseClass  sig=csp ====
int __thiscall HouseClass::UpdatePowerTimers(int this, int *a2)
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

  AbstractClass::ProcessPower((#378 *)this); /*0x502d69*/
  Power::TimerProcess(*(_DWORD *)(this + 388)); /*0x502d77*/
  Power::TimerProcess(*(_DWORD *)(*(_DWORD *)(this + 52) + 184)); /*0x502d88*/
  Checksummer::Add_double(*(_DWORD *)(this + 392), *(_DWORD *)(this + 396)); /*0x502d9d*/
  Checksummer::Add_double(*(_DWORD *)(this + 400), *(_DWORD *)(this + 404)); /*0x502db2*/
  Checksummer::Add_double(*(_DWORD *)(this + 408), *(_DWORD *)(this + 412)); /*0x502dc7*/
  Checksummer::Add_double(*(_DWORD *)(this + 416), *(_DWORD *)(this + 420)); /*0x502ddc*/
  Checksummer::Add_double(*(_DWORD *)(this + 424), *(_DWORD *)(this + 428)); /*0x502df1*/
  Checksummer::Add_double(*(_DWORD *)(this + 432), *(_DWORD *)(this + 436)); /*0x502e06*/
  Checksummer::Add_double(*(_DWORD *)(this + 440), *(_DWORD *)(this + 444)); /*0x502e1b*/
  Checksummer::Add_double(*(_DWORD *)(this + 448), *(_DWORD *)(this + 452)); /*0x502e30*/
  v3 = Checksummer::Add_double(*(_DWORD *)(this + 456), *(_DWORD *)(this + 460)); /*0x502e45*/
  LOBYTE(v3) = *(_BYTE *)(this + 492); /*0x502e4a*/
  Power::FlagProcess(a2, v3); /*0x502e53*/
  LOBYTE(v4) = *(_BYTE *)(this + 494); /*0x502e58*/
  Power::FlagProcess(a2, v4); /*0x502e61*/
  LOBYTE(v5) = *(_BYTE *)(this + 495); /*0x502e66*/
  v6 = Power::FlagProcess(a2, v5); /*0x502e6f*/
  LOBYTE(v6) = *(_BYTE *)(this + 498); /*0x502e74*/
  Power::FlagProcess(a2, v6); /*0x502e7d*/
  LOBYTE(v7) = *(_BYTE *)(this + 501); /*0x502e82*/
  Power::FlagProcess(a2, v7); /*0x502e8b*/
  Power::TimerProcess(*(_DWORD *)(this + 588)); /*0x502e99*/
  Power::TimerProcess(*(_DWORD *)(this + 592)); /*0x502ea7*/
  Power::TimerProcess(*(_DWORD *)(this + 636)); /*0x502eb5*/
  v8 = *(_DWORD *)(this + 640); /*0x502eba*/
  v9 = *(_DWORD *)(this + 648); /*0x502ec0*/
  if ( v8 != -1 ) /*0x502ec9*/
  {
    if ( (int)MEMORY[0xA8ED84] - v8 >= v9 ) /*0x502ed5*/
      v9 = 0; /*0x502edb*/
    else
      v9 -= (int)MEMORY[0xA8ED84] - v8; /*0x502ed7*/
  }
  Power::TimerProcess(v9); /*0x502ee0*/
  v10 = *(_DWORD *)(this + 652); /*0x502ee5*/
  v11 = *(_DWORD *)(this + 660); /*0x502eeb*/
  if ( v10 != -1 ) /*0x502ef4*/
  {
    if ( (int)MEMORY[0xA8ED84] - v10 >= v11 ) /*0x502f00*/
      v11 = 0; /*0x502f06*/
    else
      v11 -= (int)MEMORY[0xA8ED84] - v10; /*0x502f02*/
  }
  Power::TimerProcess(v11); /*0x502f0b*/
  v12 = *(_DWORD *)(this + 664); /*0x502f10*/
  v13 = *(_DWORD *)(this + 672); /*0x502f16*/
  if ( v12 != -1 ) /*0x502f1f*/
  {
    if ( (int)MEMORY[0xA8ED84] - v12 >= v13 ) /*0x502f2b*/
      v13 = 0; /*0x502f31*/
    else
      v13 -= (int)MEMORY[0xA8ED84] - v12; /*0x502f2d*/
  }
  Power::TimerProcess(v13); /*0x502f36*/
  Power::TimerProcess(*(_DWORD *)(this + 744)); /*0x502f44*/
  Power::TimerProcess(*(_DWORD *)(this + 752)); /*0x502f52*/
  Power::TimerProcess(*(_DWORD *)(this + 756)); /*0x502f60*/
  Power::TimerProcess(*(_DWORD *)(this + 760)); /*0x502f6e*/
  Power::TimerProcess(*(_DWORD *)(this + 780)); /*0x502f7c*/
  Power::TimerProcess(*(_DWORD *)(this + 784)); /*0x502f8a*/
  Power::TimerProcess(*(_DWORD *)(this + 21368)); /*0x502f98*/
  Power::TimerProcess(*(_DWORD *)(this + 21372)); /*0x502fa6*/
  Power::TimerProcess(*(_DWORD *)(this + 21376)); /*0x502fb4*/
  Power::TimerProcess(*(_DWORD *)(this + 21384)); /*0x502fc2*/
  Power::TimerProcess(*(_DWORD *)(this + 21380)); /*0x502fd0*/
  Power::TimerProcess(*(_DWORD *)(this + 21388)); /*0x502fde*/
  Power::TimerProcess(*(_DWORD *)(this + 21412)); /*0x502fec*/
  Power::TimerProcess(*(_DWORD *)(this + 21416)); /*0x502ffa*/
  LOBYTE(v14) = *(_BYTE *)(this + 577); /*0x502fff*/
  Power::FlagProcess(a2, v14); /*0x503008*/
  Power::TimerProcess(*(_DWORD *)(this + 21644)); /*0x503016*/
  Power::TimerProcess(*(_DWORD *)(this + 22016)); /*0x503024*/
  return (*(int (__thiscall **)(int, int *))(*(_DWORD *)(this + 22272) + 8))(this + 22272, a2); /*0x503039*/
}


// ==== 0x00503040  HouseClass::SaveLoad_Prefix  this=HouseClass  sig=csp ====
HRESULT __stdcall HouseClass::SaveLoad_Prefix(int a1, LPSTREAM pStm)
{
  int v2; // esi
  int i; // edi
  int j; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  LPSTREAM v9; // edi
  HRESULT result; // eax
  int *v11; // ebp
  int v12; // ebx
  int *v13; // ebp
  int v14; // ebx
  int v15; // ecx
  bool v16; // zf
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // edx
  int k; // ebp
  int v35; // edx
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // edx
  int v41; // eax
  int m; // ebp
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // eax
  int v48; // edx
  int v49; // eax
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // eax
  int v54; // edx
  int v55; // eax
  int v56; // eax
  int v57; // ecx
  int v58; // eax
  int v59; // eax
  int v60; // edx
  int v61; // eax
  int v62; // eax
  int v63; // ecx
  int v64; // eax
  int v65; // eax
  int v66; // edx
  int v67; // eax
  int v68; // eax
  int v69; // ecx
  int v70; // eax
  int v71; // eax
  int v72; // edx
  int v73; // eax
  int v74; // eax
  int v75; // ecx
  int v76; // eax
  int v77; // eax
  int v78; // edx
  int v79; // eax
  int v80; // eax
  int v81; // ecx
  int v82; // eax
  int v83; // eax
  int v84; // edx
  int v85; // eax
  int v86; // eax
  int v87; // ecx
  int v88; // eax
  int v89; // eax
  int v90; // edx
  int v91; // eax
  int v92; // eax
  int v93; // ecx
  int v94; // eax
  int v95; // eax
  int v96; // edx
  int v97; // eax
  int v98; // eax
  int v99; // ecx
  int v100; // eax
  int v101; // eax
  int v102; // edx
  int v103; // eax
  int v104; // eax
  int v105; // ecx
  int v106; // eax
  int v107; // eax
  int v108; // edx
  int v109; // eax
  _WORD *v110; // ebp
  int v111; // eax
  int v112; // ecx
  int v113; // eax
  int v114; // eax
  int v115; // edx
  int n; // ebp
  int ii; // ebp
  int jj; // ebp
  int kk; // ebp
  int mm; // ebp
  int nn; // ebp
  int i1; // ebp
  int i2; // ebp
  int i3; // ebp
  int i4; // ebp
  int i5; // ebp
  int i6; // ebp
  int i7; // ebp
  int i8; // ebp
  int v130; // eax
  int v131; // [esp+2A4h] [ebp-24h]
  int v132; // [esp+2A4h] [ebp-24h]
  int v133; // [esp+2B8h] [ebp-10h] BYREF
  int v134; // [esp+2BCh] [ebp-Ch] BYREF
  int v135; // [esp+2C0h] [ebp-8h]
  int v136; // [esp+2C4h] [ebp-4h] BYREF

  v2 = a1;
  (*(void (__thiscall **)(int))(*(_DWORD *)(a1 + 80) + 12))(a1 + 80);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 104) + 12))(v2 + 104);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 128) + 12))(v2 + 128);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 152) + 12))(v2 + 152);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 176) + 12))(v2 + 176);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 200) + 12))(v2 + 200);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 224) + 12))(v2 + 224);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 248) + 12))(v2 + 248);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 272) + 12))(v2 + 272);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 296) + 12))(v2 + 296);
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 320) + 12))(v2 + 320);
  for ( i = *(_DWORD *)(v2 + 380) - 1; i >= 0; --i )
    __3_YAXPAX_Z(*(void **)(*(_DWORD *)(v2 + 368) + 4 * i));
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 364) + 12))(v2 + 364);
  for ( j = 0; j < *(_DWORD *)(v2 + 90228); *(_DWORD *)(*(_DWORD *)(v2 + 90216) + 4 * j - 4) = 0 )
  {
    v131 = *(_DWORD *)(*(_DWORD *)(v2 + 90216) + 4 * j);
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)v131 + 8))(v131) )
    {
      do
        v132 = *(_DWORD *)(*(_DWORD *)(v2 + 90216) + 4 * j);
      while ( (*(int (__stdcall **)(int))(*(_DWORD *)v132 + 8))(v132) );
    }
    ++j;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)(v2 + 90212) + 12))(v2 + 90212);
  while ( *(_DWORD *)(v2 + 612) )
  {
    v5 = **(_DWORD **)(v2 + 600);
    if ( v5 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1);
    v6 = *(_DWORD *)(v2 + 612);
    if ( v6 > 0 )
    {
      v7 = v6 - 1;
      v8 = 0;
      for ( *(_DWORD *)(v2 + 612) = v7;
            v8 < *(_DWORD *)(v2 + 612);
            *(_DWORD *)(*(_DWORD *)(v2 + 600) + 4 * v8 - 4) = *(_DWORD *)(*(_DWORD *)(v2 + 600) + 4 * v8) )
      {
        ++v8;
      }
    }
  }
  v9 = pStm;
  result = AbstractClass::SaveLoad_Prefix_0((_DWORD *)v2, (int)pStm);
  if ( result >= 0 )
  {
    if ( v2 )
      HouseClass::Constructor(v2, (int)&a1);
    (**(void (__stdcall ***)(int, LPSTREAM))(v2 + 22272))(v2 + 22272, v9);
    CounterClass::Load((_DWORD *)(v2 + 21760), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21780), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21800), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21820), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21840), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21860), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21880), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21900), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21920), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21940), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21960), (int)v9);
    CounterClass::Load((_DWORD *)(v2 + 21980), (int)v9);
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 52));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21424));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21428));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21420));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21432));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21436));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21440));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21444));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21448));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21452));
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v2 + 21728));
    v11 = (int *)(v2 + 528);
    v12 = 12;
    do
    {
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v11++);
      --v12;
    }
    while ( v12 );
    v13 = (int *)(v2 + 22128);
    v14 = 3;
    do
    {
      HouseClass::RegisterForSwizzleTracking(v13);
      v13 += 11;
      --v14;
    }
    while ( v14 );
    v15 = *(_DWORD *)v9->__pad_0;
    v133 = 0;
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v15 + 12))(v9, &v133, 4, 0);
    if ( result >= 0 )
    {
      v16 = v133-- == 0;
      if ( v16 )
      {
LABEL_31:
        v22 = *(_DWORD *)v9->__pad_0;
        v133 = 0;
        result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v22 + 12))(v9, &v133, 4, 0);
        if ( result >= 0 )
        {
          v16 = v133-- == 0;
          if ( v16 )
          {
LABEL_41:
            v28 = *(_DWORD *)v9->__pad_0;
            v133 = 0;
            result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v28 + 12))(v9, &v133, 4, 0);
            if ( result >= 0 )
            {
              v16 = v133-- == 0;
              if ( v16 )
              {
LABEL_51:
                for ( k = 0; k < *(_DWORD *)(v2 + 22036); ++k )
                  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(*(_DWORD *)(v2 + 22024) + 8 * k));
                v35 = *(_DWORD *)v9->__pad_0;
                v133 = 0;
                result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v35 + 12))(v9, &v133, 4, 0);
                if ( result >= 0 )
                {
                  v16 = v133-- == 0;
                  if ( v16 )
                  {
LABEL_63:
                    v41 = *(_DWORD *)(v2 + 22060);
                    for ( m = 0; m < v41; ++m )
                    {
                      ObjectPtr::RegisterForTracking(
                        (int)&MEMORY[0xB0C110],
                        (int *)(*(_DWORD *)(v2 + 22048) + 8 * v41 - 8));
                      v41 = *(_DWORD *)(v2 + 22060);
                    }
                    v43 = *(_DWORD *)v9->__pad_0;
                    v133 = 0;
                    result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v43 + 12))(v9, &v133, 4, 0);
                    if ( result >= 0 )
                    {
                      v16 = v133-- == 0;
                      if ( v16 )
                      {
LABEL_75:
                        v49 = *(_DWORD *)v9->__pad_0;
                        v133 = 0;
                        result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v49 + 12))(v9, &v133, 4, 0);
                        if ( result >= 0 )
                        {
                          v16 = v133-- == 0;
                          if ( v16 )
                          {
LABEL_85:
                            v55 = *(_DWORD *)v9->__pad_0;
                            v133 = 0;
                            result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v55 + 12))(v9, &v133, 4, 0);
                            if ( result >= 0 )
                            {
                              v16 = v133-- == 0;
                              if ( v16 )
                              {
LABEL_95:
                                v61 = *(_DWORD *)v9->__pad_0;
                                v133 = 0;
                                result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v61 + 12))(
                                           v9,
                                           &v133,
                                           4,
                                           0);
                                if ( result >= 0 )
                                {
                                  v16 = v133-- == 0;
                                  if ( v16 )
                                  {
LABEL_105:
                                    v67 = *(_DWORD *)v9->__pad_0;
                                    v133 = 0;
                                    result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v67 + 12))(
                                               v9,
                                               &v133,
                                               4,
                                               0);
                                    if ( result >= 0 )
                                    {
                                      v16 = v133-- == 0;
                                      if ( v16 )
                                      {
LABEL_115:
                                        v73 = *(_DWORD *)v9->__pad_0;
                                        v133 = 0;
                                        result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v73 + 12))(
                                                   v9,
                                                   &v133,
                                                   4,
                                                   0);
                                        if ( result >= 0 )
                                        {
                                          v16 = v133-- == 0;
                                          if ( v16 )
                                          {
LABEL_125:
                                            v79 = *(_DWORD *)v9->__pad_0;
                                            v133 = 0;
                                            result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v79 + 12))(
                                                       v9,
                                                       &v133,
                                                       4,
                                                       0);
                                            if ( result >= 0 )
                                            {
                                              v16 = v133-- == 0;
                                              if ( v16 )
                                              {
LABEL_135:
                                                v85 = *(_DWORD *)v9->__pad_0;
                                                v133 = 0;
                                                result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v85 + 12))(
                                                           v9,
                                                           &v133,
                                                           4,
                                                           0);
                                                if ( result >= 0 )
                                                {
                                                  v16 = v133-- == 0;
                                                  if ( v16 )
                                                  {
LABEL_145:
                                                    v91 = *(_DWORD *)v9->__pad_0;
                                                    v133 = 0;
                                                    result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v91 + 12))(
                                                               v9,
                                                               &v133,
                                                               4,
                                                               0);
                                                    if ( result >= 0 )
                                                    {
                                                      v16 = v133-- == 0;
                                                      if ( v16 )
                                                      {
LABEL_155:
                                                        v97 = *(_DWORD *)v9->__pad_0;
                                                        v133 = 0;
                                                        result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v97 + 12))(
                                                                   v9,
                                                                   &v133,
                                                                   4,
                                                                   0);
                                                        if ( result >= 0 )
                                                        {
                                                          v16 = v133-- == 0;
                                                          if ( v16 )
                                                          {
LABEL_165:
                                                            v103 = *(_DWORD *)v9->__pad_0;
                                                            v133 = 0;
                                                            result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v103 + 12))(
                                                                       v9,
                                                                       &v133,
                                                                       4,
                                                                       0);
                                                            if ( result >= 0 )
                                                            {
                                                              v16 = v133-- == 0;
                                                              if ( v16 )
                                                              {
LABEL_175:
                                                                v109 = *(_DWORD *)v9->__pad_0;
                                                                v133 = 0;
                                                                result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v109 + 12))(
                                                                           v9,
                                                                           &v133,
                                                                           4,
                                                                           0);
                                                                if ( result >= 0 )
                                                                {
                                                                  v16 = v133-- == 0;
                                                                  if ( v16 )
                                                                  {
LABEL_187:
                                                                    for ( n = 0; n < *(_DWORD *)(v2 + 612); ++n )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(_DWORD *)(v2 + 600) + 4 * n));
                                                                    for ( ii = 0; ii < *(_DWORD *)(v2 + 72); ++ii )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(_DWORD *)(v2 + 60) + 4 * ii));
                                                                    for ( jj = 0; jj < *(_DWORD *)(v2 + 96); ++jj )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(_DWORD *)(v2 + 84) + 4 * jj));
                                                                    for ( kk = 0; kk < *(_DWORD *)(v2 + 120); ++kk )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(_DWORD *)(v2 + 108) + 4 * kk));
                                                                    for ( mm = 0; mm < *(_DWORD *)(v2 + 144); ++mm )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(_DWORD *)(v2 + 132) + 4 * mm));
                                                                    for ( nn = 0; nn < *(_DWORD *)(v2 + 168); ++nn )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(_DWORD *)(v2 + 156) + 4 * nn));
                                                                    for ( i1 = 0; i1 < *(_DWORD *)(v2 + 192); ++i1 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(_DWORD *)(v2 + 180) + 4 * i1));
                                                                    for ( i2 = 0; i2 < *(_DWORD *)(v2 + 216); ++i2 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(_DWORD *)(v2 + 204) + 4 * i2));
                                                                    for ( i3 = 0; i3 < *(_DWORD *)(v2 + 240); ++i3 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(_DWORD *)(v2 + 228) + 4 * i3));
                                                                    for ( i4 = 0; i4 < *(_DWORD *)(v2 + 264); ++i4 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(_DWORD *)(v2 + 252) + 4 * i4));
                                                                    for ( i5 = 0; i5 < *(_DWORD *)(v2 + 288); ++i5 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(_DWORD *)(v2 + 276) + 4 * i5));
                                                                    for ( i6 = 0; i6 < *(_DWORD *)(v2 + 312); ++i6 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(_DWORD *)(v2 + 300) + 4 * i6));
                                                                    for ( i7 = 0; i7 < *(_DWORD *)(v2 + 336); ++i7 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        (int *)(*(_DWORD *)(v2 + 324) + 4 * i7));
                                                                    for ( i8 = 0; i8 < *(_DWORD *)(v2 + 380); ++i8 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&MEMORY[0xB0C110],
                                                                        *(int **)(*(_DWORD *)(v2 + 368) + 4 * i8));
                                                                    v130 = *(_DWORD *)v9->__pad_0;
                                                                    v136 = 0;
                                                                    result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v130 + 12))(
                                                                               v9,
                                                                               &v136,
                                                                               4,
                                                                               0);
                                                                    if ( result >= 0 )
                                                                    {
                                                                      if ( v136 )
                                                                        return OleLoadFromStream(
                                                                                 v9,
                                                                                 &iidInterface,
                                                                                 (LPVOID *)(v2 + 22496));
                                                                    }
                                                                  }
                                                                  else
                                                                  {
                                                                    while ( 1 )
                                                                    {
                                                                      v110 = __2_YAPAXI_Z(8u);
                                                                      v111 = *(_DWORD *)v9->__pad_0;
                                                                      v134 = 0;
                                                                      result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v111 + 12))(
                                                                                 v9,
                                                                                 &v134,
                                                                                 4,
                                                                                 0);
                                                                      if ( result < 0 )
                                                                        break;
                                                                      result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)v9->__pad_0 + 12))(
                                                                                 v9,
                                                                                 &a1,
                                                                                 2,
                                                                                 0);
                                                                      if ( result < 0 )
                                                                        break;
                                                                      result = (*(int (__stdcall **)(LPSTREAM, LPSTREAM *, int, _DWORD))(*(_DWORD *)v9->__pad_0 + 12))(
                                                                                 v9,
                                                                                 &pStm,
                                                                                 2,
                                                                                 0);
                                                                      if ( result < 0 )
                                                                        break;
                                                                      *(_DWORD *)v110 = v134;
                                                                      v110[2] = a1;
                                                                      v110[3] = (_WORD)pStm;
                                                                      v112 = *(_DWORD *)(v2 + 372);
                                                                      if ( *(_DWORD *)(v2 + 380) < v112
                                                                        || (*(_BYTE *)(v2 + 377) || !v112)
                                                                        && (v113 = *(_DWORD *)(v2 + 384), v113 > 0)
                                                                        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 364) + 8))(
                                                                             v2 + 364,
                                                                             v113 + v112,
                                                                             0) )
                                                                      {
                                                                        v114 = *(_DWORD *)(v2 + 380);
                                                                        v115 = *(_DWORD *)(v2 + 368);
                                                                        *(_DWORD *)(v2 + 380) = v114 + 1;
                                                                        *(_DWORD *)(v115 + 4 * v114) = v110;
                                                                      }
                                                                      v16 = v133-- == 0;
                                                                      if ( v16 )
                                                                        goto LABEL_187;
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                              else
                                                              {
                                                                while ( 1 )
                                                                {
                                                                  v104 = *(_DWORD *)v9->__pad_0;
                                                                  a1 = 0;
                                                                  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v104 + 12))(
                                                                             v9,
                                                                             &a1,
                                                                             4,
                                                                             0);
                                                                  if ( result < 0 )
                                                                    break;
                                                                  v105 = *(_DWORD *)(v2 + 328);
                                                                  if ( *(_DWORD *)(v2 + 336) < v105
                                                                    || (*(_BYTE *)(v2 + 333) || !v105)
                                                                    && (v106 = *(_DWORD *)(v2 + 340), v106 > 0)
                                                                    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 320) + 8))(
                                                                         v2 + 320,
                                                                         v106 + v105,
                                                                         0) )
                                                                  {
                                                                    v107 = *(_DWORD *)(v2 + 336);
                                                                    v108 = *(_DWORD *)(v2 + 324);
                                                                    *(_DWORD *)(v2 + 336) = v107 + 1;
                                                                    *(_DWORD *)(v108 + 4 * v107) = a1;
                                                                  }
                                                                  v16 = v133-- == 0;
                                                                  if ( v16 )
                                                                    goto LABEL_175;
                                                                }
                                                              }
                                                            }
                                                          }
                                                          else
                                                          {
                                                            while ( 1 )
                                                            {
                                                              v98 = *(_DWORD *)v9->__pad_0;
                                                              a1 = 0;
                                                              result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v98 + 12))(
                                                                         v9,
                                                                         &a1,
                                                                         4,
                                                                         0);
                                                              if ( result < 0 )
                                                                break;
                                                              v99 = *(_DWORD *)(v2 + 304);
                                                              if ( *(_DWORD *)(v2 + 312) < v99
                                                                || (*(_BYTE *)(v2 + 309) || !v99)
                                                                && (v100 = *(_DWORD *)(v2 + 316), v100 > 0)
                                                                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 296) + 8))(
                                                                     v2 + 296,
                                                                     v100 + v99,
                                                                     0) )
                                                              {
                                                                v101 = *(_DWORD *)(v2 + 312);
                                                                v102 = *(_DWORD *)(v2 + 300);
                                                                *(_DWORD *)(v2 + 312) = v101 + 1;
                                                                *(_DWORD *)(v102 + 4 * v101) = a1;
                                                              }
                                                              v16 = v133-- == 0;
                                                              if ( v16 )
                                                                goto LABEL_165;
                                                            }
                                                          }
                                                        }
                                                      }
                                                      else
                                                      {
                                                        while ( 1 )
                                                        {
                                                          v92 = *(_DWORD *)v9->__pad_0;
                                                          a1 = 0;
                                                          result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v92 + 12))(
                                                                     v9,
                                                                     &a1,
                                                                     4,
                                                                     0);
                                                          if ( result < 0 )
                                                            break;
                                                          v93 = *(_DWORD *)(v2 + 280);
                                                          if ( *(_DWORD *)(v2 + 288) < v93
                                                            || (*(_BYTE *)(v2 + 285) || !v93)
                                                            && (v94 = *(_DWORD *)(v2 + 292), v94 > 0)
                                                            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 272) + 8))(
                                                                 v2 + 272,
                                                                 v94 + v93,
                                                                 0) )
                                                          {
                                                            v95 = *(_DWORD *)(v2 + 288);
                                                            v96 = *(_DWORD *)(v2 + 276);
                                                            *(_DWORD *)(v2 + 288) = v95 + 1;
                                                            *(_DWORD *)(v96 + 4 * v95) = a1;
                                                          }
                                                          v16 = v133-- == 0;
                                                          if ( v16 )
                                                            goto LABEL_155;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  else
                                                  {
                                                    while ( 1 )
                                                    {
                                                      v86 = *(_DWORD *)v9->__pad_0;
                                                      a1 = 0;
                                                      result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v86 + 12))(
                                                                 v9,
                                                                 &a1,
                                                                 4,
                                                                 0);
                                                      if ( result < 0 )
                                                        break;
                                                      v87 = *(_DWORD *)(v2 + 256);
                                                      if ( *(_DWORD *)(v2 + 264) < v87
                                                        || (*(_BYTE *)(v2 + 261) || !v87)
                                                        && (v88 = *(_DWORD *)(v2 + 268), v88 > 0)
                                                        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 248) + 8))(
                                                             v2 + 248,
                                                             v88 + v87,
                                                             0) )
                                                      {
                                                        v89 = *(_DWORD *)(v2 + 264);
                                                        v90 = *(_DWORD *)(v2 + 252);
                                                        *(_DWORD *)(v2 + 264) = v89 + 1;
                                                        *(_DWORD *)(v90 + 4 * v89) = a1;
                                                      }
                                                      v16 = v133-- == 0;
                                                      if ( v16 )
                                                        goto LABEL_145;
                                                    }
                                                  }
                                                }
                                              }
                                              else
                                              {
                                                while ( 1 )
                                                {
                                                  v80 = *(_DWORD *)v9->__pad_0;
                                                  a1 = 0;
                                                  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v80 + 12))(
                                                             v9,
                                                             &a1,
                                                             4,
                                                             0);
                                                  if ( result < 0 )
                                                    break;
                                                  v81 = *(_DWORD *)(v2 + 232);
                                                  if ( *(_DWORD *)(v2 + 240) < v81
                                                    || (*(_BYTE *)(v2 + 237) || !v81)
                                                    && (v82 = *(_DWORD *)(v2 + 244), v82 > 0)
                                                    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 224) + 8))(
                                                         v2 + 224,
                                                         v82 + v81,
                                                         0) )
                                                  {
                                                    v83 = *(_DWORD *)(v2 + 240);
                                                    v84 = *(_DWORD *)(v2 + 228);
                                                    *(_DWORD *)(v2 + 240) = v83 + 1;
                                                    *(_DWORD *)(v84 + 4 * v83) = a1;
                                                  }
                                                  v16 = v133-- == 0;
                                                  if ( v16 )
                                                    goto LABEL_135;
                                                }
                                              }
                                            }
                                          }
                                          else
                                          {
                                            while ( 1 )
                                            {
                                              v74 = *(_DWORD *)v9->__pad_0;
                                              a1 = 0;
                                              result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v74 + 12))(
                                                         v9,
                                                         &a1,
                                                         4,
                                                         0);
                                              if ( result < 0 )
                                                break;
                                              v75 = *(_DWORD *)(v2 + 208);
                                              if ( *(_DWORD *)(v2 + 216) < v75
                                                || (*(_BYTE *)(v2 + 213) || !v75)
                                                && (v76 = *(_DWORD *)(v2 + 220), v76 > 0)
                                                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 200) + 8))(
                                                     v2 + 200,
                                                     v76 + v75,
                                                     0) )
                                              {
                                                v77 = *(_DWORD *)(v2 + 216);
                                                v78 = *(_DWORD *)(v2 + 204);
                                                *(_DWORD *)(v2 + 216) = v77 + 1;
                                                *(_DWORD *)(v78 + 4 * v77) = a1;
                                              }
                                              v16 = v133-- == 0;
                                              if ( v16 )
                                                goto LABEL_125;
                                            }
                                          }
                                        }
                                      }
                                      else
                                      {
                                        while ( 1 )
                                        {
                                          v68 = *(_DWORD *)v9->__pad_0;
                                          a1 = 0;
                                          result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v68 + 12))(
                                                     v9,
                                                     &a1,
                                                     4,
                                                     0);
                                          if ( result < 0 )
                                            break;
                                          v69 = *(_DWORD *)(v2 + 184);
                                          if ( *(_DWORD *)(v2 + 192) < v69
                                            || (*(_BYTE *)(v2 + 189) || !v69)
                                            && (v70 = *(_DWORD *)(v2 + 196), v70 > 0)
                                            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 176) + 8))(
                                                 v2 + 176,
                                                 v70 + v69,
                                                 0) )
                                          {
                                            v71 = *(_DWORD *)(v2 + 192);
                                            v72 = *(_DWORD *)(v2 + 180);
                                            *(_DWORD *)(v2 + 192) = v71 + 1;
                                            *(_DWORD *)(v72 + 4 * v71) = a1;
                                          }
                                          v16 = v133-- == 0;
                                          if ( v16 )
                                            goto LABEL_115;
                                        }
                                      }
                                    }
                                  }
                                  else
                                  {
                                    while ( 1 )
                                    {
                                      v62 = *(_DWORD *)v9->__pad_0;
                                      a1 = 0;
                                      result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v62 + 12))(
                                                 v9,
                                                 &a1,
                                                 4,
                                                 0);
                                      if ( result < 0 )
                                        break;
                                      v63 = *(_DWORD *)(v2 + 160);
                                      if ( *(_DWORD *)(v2 + 168) < v63
                                        || (*(_BYTE *)(v2 + 165) || !v63)
                                        && (v64 = *(_DWORD *)(v2 + 172), v64 > 0)
                                        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 152)
                                                                                               + 8))(
                                             v2 + 152,
                                             v64 + v63,
                                             0) )
                                      {
                                        v65 = *(_DWORD *)(v2 + 168);
                                        v66 = *(_DWORD *)(v2 + 156);
                                        *(_DWORD *)(v2 + 168) = v65 + 1;
                                        *(_DWORD *)(v66 + 4 * v65) = a1;
                                      }
                                      v16 = v133-- == 0;
                                      if ( v16 )
                                        goto LABEL_105;
                                    }
                                  }
                                }
                              }
                              else
                              {
                                while ( 1 )
                                {
                                  v56 = *(_DWORD *)v9->__pad_0;
                                  a1 = 0;
                                  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v56 + 12))(
                                             v9,
                                             &a1,
                                             4,
                                             0);
                                  if ( result < 0 )
                                    break;
                                  v57 = *(_DWORD *)(v2 + 136);
                                  if ( *(_DWORD *)(v2 + 144) < v57
                                    || (*(_BYTE *)(v2 + 141) || !v57)
                                    && (v58 = *(_DWORD *)(v2 + 148), v58 > 0)
                                    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 128) + 8))(
                                         v2 + 128,
                                         v58 + v57,
                                         0) )
                                  {
                                    v59 = *(_DWORD *)(v2 + 144);
                                    v60 = *(_DWORD *)(v2 + 132);
                                    *(_DWORD *)(v2 + 144) = v59 + 1;
                                    *(_DWORD *)(v60 + 4 * v59) = a1;
                                  }
                                  v16 = v133-- == 0;
                                  if ( v16 )
                                    goto LABEL_95;
                                }
                              }
                            }
                          }
                          else
                          {
                            while ( 1 )
                            {
                              v50 = *(_DWORD *)v9->__pad_0;
                              a1 = 0;
                              result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v50 + 12))(v9, &a1, 4, 0);
                              if ( result < 0 )
                                break;
                              v51 = *(_DWORD *)(v2 + 112);
                              if ( *(_DWORD *)(v2 + 120) < v51
                                || (*(_BYTE *)(v2 + 117) || !v51)
                                && (v52 = *(_DWORD *)(v2 + 124), v52 > 0)
                                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 104) + 8))(
                                     v2 + 104,
                                     v52 + v51,
                                     0) )
                              {
                                v53 = *(_DWORD *)(v2 + 120);
                                v54 = *(_DWORD *)(v2 + 108);
                                *(_DWORD *)(v2 + 120) = v53 + 1;
                                *(_DWORD *)(v54 + 4 * v53) = a1;
                              }
                              v16 = v133-- == 0;
                              if ( v16 )
                                goto LABEL_85;
                            }
                          }
                        }
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v44 = *(_DWORD *)v9->__pad_0;
                          a1 = 0;
                          result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v44 + 12))(v9, &a1, 4, 0);
                          if ( result < 0 )
                            break;
                          v45 = *(_DWORD *)(v2 + 88);
                          if ( *(_DWORD *)(v2 + 96) < v45
                            || (*(_BYTE *)(v2 + 93) || !v45)
                            && (v46 = *(_DWORD *)(v2 + 100), v46 > 0)
                            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 80) + 8))(
                                 v2 + 80,
                                 v46 + v45,
                                 0) )
                          {
                            v47 = *(_DWORD *)(v2 + 96);
                            v48 = *(_DWORD *)(v2 + 84);
                            *(_DWORD *)(v2 + 96) = v47 + 1;
                            *(_DWORD *)(v48 + 4 * v47) = a1;
                          }
                          v16 = v133-- == 0;
                          if ( v16 )
                            goto LABEL_75;
                        }
                      }
                    }
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v36 = *(_DWORD *)v9->__pad_0;
                      v134 = 0;
                      LOBYTE(v135) = 0;
                      result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v36 + 12))(v9, &v134, 8, 0);
                      if ( result < 0 )
                        break;
                      v37 = *(_DWORD *)(v2 + 22052);
                      if ( *(_DWORD *)(v2 + 22060) < v37
                        || (*(_BYTE *)(v2 + 22057) || !v37)
                        && (v38 = *(_DWORD *)(v2 + 22064), v38 > 0)
                        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 22044) + 8))(
                             v2 + 22044,
                             v37 + v38,
                             0) )
                      {
                        v39 = *(_DWORD *)(v2 + 22060);
                        v40 = *(_DWORD *)(v2 + 22048);
                        *(_DWORD *)(v2 + 22060) = v39 + 1;
                        *(_DWORD *)(v40 + 8 * v39) = v134;
                        *(_DWORD *)(v40 + 8 * v39 + 4) = v135;
                      }
                      v16 = v133-- == 0;
                      if ( v16 )
                        goto LABEL_63;
                    }
                  }
                }
              }
              else
              {
                while ( 1 )
                {
                  v29 = *(_DWORD *)v9->__pad_0;
                  v134 = 0;
                  v135 = 0;
                  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v29 + 12))(v9, &v134, 8, 0);
                  if ( result < 0 )
                    break;
                  v30 = *(_DWORD *)(v2 + 22028);
                  if ( *(_DWORD *)(v2 + 22036) < v30
                    || (*(_BYTE *)(v2 + 22033) || !v30)
                    && (v31 = *(_DWORD *)(v2 + 22040), v31 > 0)
                    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 22020) + 8))(
                         v2 + 22020,
                         v30 + v31,
                         0) )
                  {
                    v32 = *(_DWORD *)(v2 + 22036);
                    v33 = *(_DWORD *)(v2 + 22024);
                    *(_DWORD *)(v2 + 22036) = v32 + 1;
                    *(_DWORD *)(v33 + 8 * v32) = v134;
                    *(_DWORD *)(v33 + 8 * v32 + 4) = v135;
                  }
                  v16 = v133-- == 0;
                  if ( v16 )
                    goto LABEL_51;
                }
              }
            }
          }
          else
          {
            while ( 1 )
            {
              v23 = *(_DWORD *)v9->__pad_0;
              a1 = 0;
              result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v23 + 12))(v9, &a1, 4, 0);
              if ( result < 0 )
                break;
              v24 = *(_DWORD *)(v2 + 64);
              if ( *(_DWORD *)(v2 + 72) < v24
                || (*(_BYTE *)(v2 + 69) || !v24)
                && (v25 = *(_DWORD *)(v2 + 76), v25 > 0)
                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 56) + 8))(
                     v2 + 56,
                     v24 + v25,
                     0) )
              {
                v26 = *(_DWORD *)(v2 + 72);
                v27 = *(_DWORD *)(v2 + 60);
                *(_DWORD *)(v2 + 72) = v26 + 1;
                *(_DWORD *)(v27 + 4 * v26) = a1;
              }
              v16 = v133-- == 0;
              if ( v16 )
                goto LABEL_41;
            }
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v17 = *(_DWORD *)v9->__pad_0;
          a1 = 0;
          result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v17 + 12))(v9, &a1, 4, 0);
          if ( result < 0 )
            break;
          v18 = *(_DWORD *)(v2 + 604);
          if ( *(_DWORD *)(v2 + 612) < v18
            || (*(_BYTE *)(v2 + 609) || !v18)
            && (v19 = *(_DWORD *)(v2 + 616), v19 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v2 + 596) + 8))(v2 + 596, v18 + v19, 0) )
          {
            v20 = *(_DWORD *)(v2 + 612);
            v21 = *(_DWORD *)(v2 + 600);
            *(_DWORD *)(v2 + 612) = v20 + 1;
            *(_DWORD *)(v21 + 4 * v20) = a1;
          }
          v16 = v133-- == 0;
          if ( v16 )
            goto LABEL_31;
        }
      }
    }
  }
  return result;
}



// ==== 0x00504740  HouseClass::EnsurePlanningPathExists  this=HouseClass  sig=csp ====
int __thiscall HouseClass::EnsurePlanningPathExists(_DWORD *this, unsigned int a2)
{
  int result; // eax
  void *v4; // eax

  result = *(this + a2 + 132); /*0x504748*/
  if ( !result ) /*0x504751*/
  {
    v4 = __2_YAPAXI_Z(0x40u); /*0x504755*/
    if ( v4 ) /*0x50475f*/
    {
      result = WaypointPathClass::Construct((int)v4, a2); /*0x504764*/
      *(this + a2 + 132) = result; /*0x504769*/
    }
    else
    {
      *(this + a2 + 132) = 0; /*0x504777*/
      return 0; /*0x504775*/
    }
  }
  return result; /*0x504770*/
}


// ==== 0x00504790  UpdateHouseClassAnger  this=HouseClass  sig=csp ====
int __fastcall UpdateHouseClassAnger(IUnknown *aP0, HouseClass *aP1, int a3, int a4)
{
  int result; // eax
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // ebp
  int v9; // ecx
  int *v10; // edi
  int v11; // edx
  int v12; // ecx
  int v13; // [esp+14h] [ebp+4h]
  int v14; // [esp+18h] [ebp+8h]

  result = (int)aP0; /*0x504790*/
  v5 = 0; /*0x504793*/
  v6 = 0; /*0x50479c*/
  if ( *(int *)&aP0->__pad_5554[192] > 0 ) /*0x5047a2*/
  {
    do /*0x5047c8*/
    {
      v7 = *(_DWORD *)(result + 22024); /*0x5047ac*/
      v8 = *(_DWORD *)(v7 + 8 * v6); /*0x5047b2*/
      v9 = v7 + 8 * v6; /*0x5047b5*/
      if ( v8 == a4 ) /*0x5047ba*/
        *(_DWORD *)(v9 + 4) += a3; /*0x5047bc*/
      ++v6; /*0x5047c5*/
    }
    while ( v6 < *(_DWORD *)(result + 22036) ); /*0x5047c8*/
  }
  v13 = 0; /*0x5047d0*/
  if ( *(int *)(result + 22036) <= 0 ) /*0x5047d6*/
    goto LABEL_18; /*0x5047d6*/
  v10 = *(int **)(result + 22024); /*0x5047d8*/
  v14 = *(_DWORD *)(result + 22036); /*0x5047de*/
  do /*0x504832*/
  {
    v11 = *v10; /*0x5047e5*/
    if ( v10[1] > v5 && !*(_BYTE *)(v11 + 501) ) /*0x5047eb*/
    {
      if ( !v11 /*0x50481e*/
        || v11 != result
        && (v12 = *(_DWORD *)(v11 + 48), v12 != *(_DWORD *)(result + 48))
        && (v12 == -1 || ((1 << v12) & *(_DWORD *)(result + 22408)) == 0) )
      {
        v5 = v10[1]; /*0x504820*/
        v13 = *v10; /*0x504822*/
      }
    }
    v10 += 2; /*0x50482a*/
    --v14; /*0x50482e*/
  }
  while ( v14 ); /*0x504832*/
  if ( v13 ) /*0x50483a*/
    *(_DWORD *)(result + 22016) = *(_DWORD *)(v13 + 48); /*0x504842*/
  else
LABEL_18:
    *(_DWORD *)(result + 22016) = -1; /*0x50484f*/
  return result; /*0x50483f*/
}


// ==== 0x00504860  ObjectClass::Team_Helper  this=ObjectClass  sig=csp ====
int __thiscall sub_504860(_DWORD *this, int a2)
{
  __int64 v2; // rax
  int v3; // edi

  v2 = (unsigned int)this->q158B; /*0x504866*/
  if ( (int)v2 > 0 ) /*0x50486a*/
  {
    do /*0x50488f*/
    {
      LODWORD(v2) = this->q1588; /*0x504872*/
      v3 = *(_DWORD *)(v2 + 8 * HIDWORD(v2)); /*0x504878*/
      LODWORD(v2) = v2 + 8 * HIDWORD(v2); /*0x50487b*/
      if ( v3 == a2 ) /*0x504880*/
        *(_BYTE *)(v2 + 4) = 1; /*0x504882*/
      LODWORD(v2) = this->q158B; /*0x504886*/
      ++HIDWORD(v2); /*0x50488c*/
    }
    while ( SHIDWORD(v2) < (int)v2 ); /*0x50488f*/
  }
  return v2; /*0x504893*/
}


// ==== 0x00505180  TechnoClass::checkBuildLimit  this=TechnoClass  sig=csp ====
void __thiscall sub_505180(int this)
{
  char v2; // al
  int v3; // edi

  v2 = *(_BYTE *)(this + 492); /*0x505189*/
  if ( !MEMORY[0xA8B238][0] ) /*0x505191*/
    v2 = v2 || *(_BYTE *)(this + 493); /*0x5051a5*/
  if ( !v2 && MEMORY[0xA8B238][0] ) /*0x5051ad*/
    HouseClass::CanDetect(); /*0x5051af*/
  if ( !*(_DWORD *)(this + 22292) ) /*0x5051b4*/
  {
    v3 = MEMORY[0xA8E7AC]; /*0x5051bf*/
    MEMORY[0xA8E7AC] = 0; /*0x5051c7*/
    HouseClass::GenerateAIBuildListEnsureSanity((_DWORD *)this); /*0x5051d1*/
    MEMORY[0xA8E7AC] = v3; /*0x5051d6*/
  }
}


// ==== 0x005051E0  HouseClass::FirstBuildableFromArray  this=VectorClass  sig=csp ====
_DWORD *__thiscall HouseClass::FirstBuildableFromArray(_DWORD *this, AbstractClass *aP1)
{
  char v3; // cl
  int uniqueId; // esi
  int v5; // ebx
  AbstractClass *v6; // eax
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
  AbstractClass *aP1a; // [esp+1Ch] [ebp+4h]

  v3 = SuperWeaponTypeClass::FindByName((void *)(this->q034 + 152)); /*0x5051f7*/
  v16 = 0; /*0x505202*/
  uniqueId = aP1->uniqueId; /*0x50520a*/
  v5 = 1 << v3; /*0x50520d*/
  v17 = uniqueId; /*0x505211*/
  if ( uniqueId <= 0 ) /*0x505215*/
    return 0; /*0x5052f7*/
  v6 = *(AbstractClass **)&aP1->__pad_0[4]; /*0x50521b*/
  for ( aP1a = v6; ; aP1a = (AbstractClass *)((char *)aP1a + 4) ) /*0x50521e*/
  {
    result = *(_DWORD **)v6->__pad_0; /*0x505222*/
    if ( (v5 & result[435]) != 0 ) /*0x50522a*/
    {
      v8 = result[872]; /*0x505230*/
      if ( v8 == -1 || ((1 << *(_DWORD *)(this->q034 + 184)) & v8) != 0 ) /*0x50524d*/
      {
        v9 = result[873]; /*0x505253*/
        if ( v9 == -1 || ((1 << *(_DWORD *)(this->q034 + 184)) & v9) == 0 ) /*0x505270*/
        {
          v10 = result[436]; /*0x505272*/
          if ( v10 == -1 || v10 == *(_DWORD *)(this->q034 + 188) ) /*0x505286*/
            break; /*0x505286*/
        }
      }
    }
LABEL_18:
    v6 = (AbstractClass *)&aP1a->__pad_0[4]; /*0x5052db*/
    if ( ++v16 >= uniqueId ) /*0x5052e7*/
      return 0; /*0x5052f1*/
  }
  if ( (_BYTE)MEMORY[0xA8B263] ) /*0x505290*/
    return result; /*0x505290*/
  v11 = result[1468]; /*0x505292*/
  if ( v11 == -1 ) /*0x50529b*/
    return result; /*0x50529b*/
  v12 = 0; /*0x5052a3*/
  v13 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2348); /*0x5052a5*/
  if ( v13 <= 0 ) /*0x5052ad*/
  {
LABEL_16:
    if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this->q960 + 4 * v11) + 40) + 231) ) /*0x5052d5*/
      return result; /*0x5052d5*/
    uniqueId = v17; /*0x5052d7*/
    goto LABEL_18; /*0x5052d7*/
  }
  v14 = *(_DWORD ***)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2336); /*0x5052af*/
  while ( *v14 != result ) /*0x5052b7*/
  {
    ++v12; /*0x5052b9*/
    ++v14; /*0x5052ba*/
    if ( v12 >= v13 ) /*0x5052bf*/
      goto LABEL_16; /*0x5052bf*/
  }
  return result; /*0x5052f9*/
}


// ==== 0x00505310  BuildingClass::FindBySWType  this=AbstractClass  sig=csp ====
int __thiscall BuildingClass_FindBySWType(_DWORD *this, int a2)
{
  char v2; // cl
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  int i; // esi

  v2 = SuperWeaponTypeClass::FindByName((void *)(this->q034 + 152)); /*0x50532a*/
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
char __stdcall HouseClass::PrerequisitesForTechnoTypeAreListed(int a1, VectorClass *aP1, TechnoTypeClass *aP2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  _DWORD *j; // eax
  int *v7; // esi
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // edx
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < *(_DWORD *)(a1 + 1608); ++i ) /*0x505379*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 1596) + 4 * i); /*0x505395*/
    if ( v3 < 0 ) /*0x50539a*/
    {
      v7 = 0; /*0x5053cb*/
      switch ( v3 ) /*0x5053d2*/
      {
        case -6: /*0x5053d2*/
          v7 = (int *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2276); /*0x505423*/
          break; /*0x505423*/
        case -5: /*0x5053d2*/
          v7 = (int *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2332); /*0x505415*/
          break; /*0x50541b*/
        case -4: /*0x5053d2*/
          v7 = (int *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2612); /*0x505407*/
          break; /*0x50540d*/
        case -3: /*0x5053d2*/
          v7 = (int *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2304); /*0x5053fa*/
          break; /*0x505400*/
        case -2: /*0x5053d2*/
          v7 = (int *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2360); /*0x5053ec*/
          break; /*0x5053f2*/
        case -1: /*0x5053d2*/
          v7 = (int *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2248); /*0x5053de*/
          break; /*0x5053e4*/
        default:
          break;
      }
      v8 = 0; /*0x505429*/
      if ( v7[4] <= 0 ) /*0x505430*/
        return 0; /*0x50547c*/
      while ( 1 ) /*0x505437*/
      {
        v9 = (*(int (__thiscall **)(int *, int))(*v7 + 24))(v7, v8); /*0x505437*/
        v10 = 0; /*0x50543a*/
        if ( (int)aP2 > 0 ) /*0x50543e*/
          break; /*0x50543e*/
LABEL_20:
        if ( ++v8 >= v7[4] ) /*0x505455*/
          return 0; /*0x505455*/
      }
      v11 = *(_DWORD **)&aP1->?[3]; /*0x505440*/
      while ( *v11 != v9 ) /*0x505445*/
      {
        ++v10; /*0x505447*/
        ++v11; /*0x505448*/
        if ( v10 >= (int)aP2 ) /*0x50544d*/
          goto LABEL_20; /*0x50544d*/
      }
    }
    else
    {
      v4 = 0; /*0x50539c*/
      if ( (int)aP2 <= 0 ) /*0x5053a0*/
        return 0; /*0x5053a0*/
      v5 = *((_DWORD *)g_TriggerTypeCount + v3); /*0x5053ac*/
      for ( j = *(_DWORD **)&aP1->?[3]; *j != v5; ++j ) /*0x5053af*/
      {
        if ( ++v4 >= (int)aP2 ) /*0x5053c0*/
          return 0; /*0x5053c0*/
      }
    }
  }
  return 1; /*0x505475*/
}


// ==== 0x005054B0  HouseClass::GenerateAIBuildListEnsureSanity  this=TechnoClass  sig=csp ====
void __thiscall HouseClass::GenerateAIBuildListEnsureSanity(_DWORD *this)
{
  VectorClass *v2; // eax
  int v3; // edx
  int v4; // ebp
  int v5; // esi
  VectorClass *v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // edx
  _DWORD *v13; // ecx
  VectorClass *v14; // eax
  int v15; // eax
  int v16; // ebp
  _DWORD *BuildableFromArray; // esi
  int v18; // eax
  CCINIClass *v19; // ecx
  TechnoTypeClass *v20; // eax
  TechnoTypeClass *v21; // esi
  TechnoTypeClass *v22; // eax
  _DWORD *v23; // eax
  int v24; // ecx
  CCINIClass *v25; // esi
  int v26; // edx
  _DWORD *v27; // eax
  int v28; // ecx
  CCINIClass *v29; // esi
  int v30; // edx
  int v31; // ebp
  char v32; // bl
  int v33; // esi
  int v34; // edi
  TechnoTypeClass *v35; // eax
  _DWORD *v36; // esi
  TechnoTypeClass *v37; // eax
  AbstractClass *v38; // edi
  _DWORD *v39; // ebp
  int v40; // esi
  int v41; // edx
  int v42; // ecx
  int v43; // eax
  TechnoTypeClass *v44; // esi
  TechnoTypeClass *v45; // edi
  AbstractClass *v46; // ebx
  int v47; // edx
  IUnknown *v48; // edi
  BlowStraw *v49; // ecx
  int v50; // ebx
  AbstractClass *v51; // esi
  int v52; // eax
  BlowStraw *v53; // esi
  int v54; // eax
  _DWORD *v55; // esi
  int v56; // eax
  _DWORD *v57; // esi
  int v58; // eax
  int j; // edi
  _DWORD *v60; // esi
  int v61; // eax
  int v62; // eax
  TimerStruct *v63; // eax
  int v64; // edx
  int v65; // edi
  TechnoTypeClass *v66; // esi
  char *v67; // ecx
  unsigned int v68; // edi
  _DWORD *v69; // esi
  int v70; // eax
  int v71; // ecx
  int v72; // eax
  unsigned int v73; // edx
  unsigned int *v74; // eax
  unsigned int v75; // edi
  int v76; // ecx
  _DWORD *v77; // esi
  int v78; // eax
  int v79; // ecx
  int v80; // eax
  VectorClass *i; // [esp+60h] [ebp-94h]
  VectorClass *v82; // [esp+60h] [ebp-94h]
  VectorClass *k; // [esp+60h] [ebp-94h]
  void **v84; // [esp+64h] [ebp-90h] BYREF
  void *v85; // [esp+68h] [ebp-8Ch]
  CCINIClass *v86; // [esp+6Ch] [ebp-88h]
  int v87; // [esp+70h] [ebp-84h]
  TechnoTypeClass *v88; // [esp+74h] [ebp-80h]
  int v89; // [esp+78h] [ebp-7Ch]
  void **v90; // [esp+7Ch] [ebp-78h] BYREF
  void *Block; // [esp+80h] [ebp-74h]
  int v92; // [esp+84h] [ebp-70h]
  int v93; // [esp+88h] [ebp-6Ch]
  int v94; // [esp+8Ch] [ebp-68h]
  int v95; // [esp+90h] [ebp-64h]
  _DWORD *v96; // [esp+94h] [ebp-60h]
  int v97; // [esp+98h] [ebp-5Ch]
  TechnoTypeClass *v98; // [esp+9Ch] [ebp-58h]
  void **v99; // [esp+A0h] [ebp-54h] BYREF
  void *v100; // [esp+A4h] [ebp-50h]
  int v101; // [esp+A8h] [ebp-4Ch]
  char v102; // [esp+ADh] [ebp-47h]
  VectorClass *v103; // [esp+B0h] [ebp-44h]
  int v104; // [esp+B4h] [ebp-40h]
  void **v105; // [esp+B8h] [ebp-3Ch] BYREF
  void *v106; // [esp+BCh] [ebp-38h]
  int v107; // [esp+C0h] [ebp-34h]
  int v108; // [esp+C4h] [ebp-30h]
  int v109; // [esp+C8h] [ebp-2Ch]
  int v110; // [esp+CCh] [ebp-28h]
  int v111; // [esp+D0h] [ebp-24h]
  unsigned int v112; // [esp+DCh] [ebp-18h]
  unsigned int v113; // [esp+ECh] [ebp-8h]

  v2 = (VectorClass *)this->attachedTag; /*0x5054bb*/
  v3 = this->q15C1; /*0x5054be*/
  v96 = this; /*0x5054c5*/
  v111 = *(_DWORD *)&v2[11].IsInitialized; /*0x5054cf*/
  (*(void (__thiscall **)(_DWORD *))(v3 + 12))(this + 5569); /*0x5054dc*/
  v4 = 1 << SuperWeaponTypeClass::FindByName((void *)(this->attachedTag + 152)); /*0x5054f6*/
  VectorClass::BuildingTypeConstructor(&v99, 0, 0); /*0x5054fe*/
  v99 = (void **)&vt_DynamicVectorClass_BuildingTypeClass_const; /*0x50550e*/
  v104 = 10; /*0x505516*/
  v103 = 0; /*0x50551a*/
  BoolVector::Construct(&v105, 0, 0); /*0x50551e*/
  v105 = (void **)&vt_DynamicVectorClass_bool; /*0x505528*/
  v110 = 10; /*0x505532*/
  v109 = 0; /*0x505536*/
  for ( i = 0; (int)i < (int)g_TriggerClassCount; i = (VectorClass *)((char *)i + 1) ) /*0x50553a*/
  {
    v5 = *((_DWORD *)g_TriggerTypeCount + (_DWORD)i); /*0x50554d*/
    if ( (v4 & *(_DWORD *)(v5 + 1740)) != 0 ) /*0x505556*/
    {
      v6 = (VectorClass *)this->attachedTag; /*0x50555c*/
      v7 = *(_DWORD *)(v5 + 1744); /*0x50555f*/
      if ( v7 == *(_DWORD *)&v6[11].IsInitialized || v7 == -1 ) /*0x505570*/
      {
        if ( *(_BYTE *)(v5 + 5893) ) /*0x505576*/
        {
          if ( *(_DWORD *)(v5 + 1588) <= this->drainAnim ) /*0x505592*/
          {
            v8 = *(_DWORD *)(v5 + 3488); /*0x505598*/
            if ( v8 == -1 || ((1 << v6[11].Capacity) & v8) != 0 ) /*0x5055b2*/
            {
              v9 = *(_DWORD *)(v5 + 3492); /*0x5055b8*/
              if ( v9 == -1 || ((1 << v6[11].Capacity) & v9) == 0 ) /*0x5055d2*/
              {
                if ( HouseClass_Player.__pad_5568[8111] ) /*0x5055df*/
                  goto LABEL_18; /*0x5055df*/
                v10 = *(_DWORD *)(v5 + 5872); /*0x5055e1*/
                if ( v10 == -1 ) /*0x5055ea*/
                  goto LABEL_18; /*0x5055ea*/
                v11 = 0; /*0x5055f2*/
                v12 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2348); /*0x5055f4*/
                if ( v12 > 0 ) /*0x5055fc*/
                {
                  v13 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2336); /*0x5055fe*/
                  while ( *v13 != v5 ) /*0x505606*/
                  {
                    ++v11; /*0x505608*/
                    ++v13; /*0x505609*/
                    if ( v11 >= v12 ) /*0x50560e*/
                      goto LABEL_17; /*0x50560e*/
                  }
LABEL_18:
                  if ( (int)v103 < v101 /*0x505661*/
                    || (v102 || !v101)
                    && v104 > 0
                    && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v99[2])(&v99, v104 + v101, 0) )
                  {
                    v14 = v103; /*0x50566c*/
                    v103 = (VectorClass *)((char *)v103 + 1); /*0x50566f*/
                    *((_DWORD *)v100 + (_DWORD)v14) = v5; /*0x505677*/
                  }
                  if ( v109 < v107 /*0x5056a7*/
                    || (BYTE1(v108) || !v107)
                    && v110 > 0
                    && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v105[2])(&v105, v110 + v107, 0) )
                  {
                    v15 = v109++; /*0x5056b2*/
                    *((_BYTE *)v106 + v15) = 0; /*0x5056bd*/
                  }
                  continue; /*0x5056bd*/
                }
LABEL_17:
                if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this->q096 + 4 * v10) + 40) + 231) ) /*0x50561c*/
                  goto LABEL_18; /*0x505624*/
              }
            }
          }
        }
      }
    }
  }
  v16 = (int)v103; /*0x5056d8*/
  v97 = (int)v103; /*0x5056e4*/
  VectorClass::BuildingTypeConstructor(&v84, 0, 0); /*0x5056e8*/
  v84 = (void **)&vt_DynamicVectorClass_BuildingTypeClass_const; /*0x5056fb*/
  v89 = 10; /*0x505704*/
  v88 = 0; /*0x50570c*/
  BuildableFromArray = HouseClass::FirstBuildableFromArray( /*0x505719*/
                         this,
                         (AbstractClass *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2220));
  v18 = 0; /*0x50571b*/
  if ( v16 > 0 ) /*0x50571f*/
  {
    v19 = (CCINIClass *)v100; /*0x505721*/
    while ( BuildableFromArray != *(_DWORD **)v19->__pad_0 ) /*0x505727*/
    {
      ++v18; /*0x505729*/
      v19 = (CCINIClass *)((char *)v19 + 4); /*0x50572a*/
      if ( v18 >= v16 ) /*0x50572f*/
        goto LABEL_42; /*0x50572f*/
    }
    *((_BYTE *)v106 + v18) = 1; /*0x505737*/
    if ( (int)v88 < (int)v86 /*0x505766*/
      || (BYTE1(v87) || !v86)
      && v89 > 0
      && ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v84[2])(&v84, &v86->__pad_0[v89], 0) )
    {
      v20 = v88; /*0x505771*/
      v88 = (TechnoTypeClass *)((char *)v88 + 1); /*0x505774*/
      *((_DWORD *)v85 + (_DWORD)v20) = BuildableFromArray; /*0x50577c*/
    }
  }
LABEL_42:
  v21 = (TechnoTypeClass *)HouseClass::FirstBuildableFromArray( /*0x50577f*/
                             this,
                             (AbstractClass *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2248));
  if ( (int)v88 < (int)v86 /*0x5057c2*/
    || (BYTE1(v87) || !v86)
    && v89 > 0
    && ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v84[2])(&v84, &v86->__pad_0[v89], 0) )
  {
    v22 = v88; /*0x5057cd*/
    v88 = (TechnoTypeClass *)((char *)v88 + 1); /*0x5057d0*/
    *((_DWORD *)v85 + (_DWORD)v22) = v21; /*0x5057d8*/
  }
  v23 = HouseClass::FirstBuildableFromArray(this, (AbstractClass *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2304)); /*0x5057ea*/
  v24 = 0; /*0x5057f3*/
  if ( (int)v103 > 0 ) /*0x5057f7*/
  {
    v25 = (CCINIClass *)v100; /*0x5057fd*/
    while ( *(_DWORD **)v25->__pad_0 != v23 ) /*0x505801*/
    {
      ++v24; /*0x505803*/
      v25 = (CCINIClass *)((char *)v25 + 4); /*0x505804*/
      if ( v24 >= (int)v103 ) /*0x505809*/
        goto LABEL_54; /*0x505809*/
    }
    v26 = *(_DWORD *)v100; /*0x50580d*/
    *(_DWORD *)v100 = v23; /*0x50580f*/
    *((_BYTE *)v106 + v24) = *(_BYTE *)v106; /*0x505817*/
    *(_BYTE *)v106 = 0; /*0x50581e*/
    *((_DWORD *)v100 + v24) = v26; /*0x505825*/
  }
LABEL_54:
  v27 = HouseClass::FirstBuildableFromArray(this, (AbstractClass *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2360)); /*0x505828*/
  v28 = 0; /*0x505840*/
  if ( (int)v103 > 0 ) /*0x505844*/
  {
    v29 = (CCINIClass *)v100; /*0x50584a*/
    while ( *(_DWORD **)v29->__pad_0 != v27 ) /*0x50584e*/
    {
      ++v28; /*0x505850*/
      v29 = (CCINIClass *)((char *)v29 + 4); /*0x505851*/
      if ( v28 >= (int)v103 ) /*0x505856*/
        goto LABEL_60; /*0x505856*/
    }
    v30 = *((_DWORD *)v100 + 1); /*0x50585a*/
    *((_DWORD *)v100 + 1) = v27; /*0x50585d*/
    *((_BYTE *)v106 + v28) = *((_BYTE *)v106 + 1); /*0x505867*/
    *((_BYTE *)v106 + 1) = 0; /*0x50586e*/
    *((_DWORD *)v100 + v28) = v30; /*0x505876*/
  }
LABEL_60:
  v82 = (VectorClass *)(v16 - 1); /*0x505879*/
  while ( (int)v82 > 0 ) /*0x505882*/
  {
    v31 = -1; /*0x505890*/
    v32 = 0; /*0x505893*/
    v33 = 0; /*0x505895*/
    v98 = v88; /*0x505897*/
    if ( v97 <= 0 ) /*0x50589d*/
      break; /*0x50589d*/
    do /*0x505947*/
    {
      if ( !*((_BYTE *)v106 + v33) ) /*0x5058a7*/
      {
        v34 = *((_DWORD *)v100 + v33); /*0x5058ba*/
        if ( _strcmpi((char *)(v34 + 36), aGaplug) ) /*0x5058c1*/
        {
          if ( HouseClass::PrerequisitesForTechnoTypeAreListed(v34, (VectorClass *)&v84, v98) ) /*0x5058e0*/
          {
            *((_BYTE *)v106 + v33) = 1; /*0x5058ed*/
            if ( (int)v88 < (int)v86 /*0x50591c*/
              || (BYTE1(v87) || !v86)
              && v89 > 0
              && ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v84[2])(&v84, &v86->__pad_0[v89], 0) )
            {
              v35 = v88; /*0x505927*/
              v88 = (TechnoTypeClass *)((char *)v88 + 1); /*0x50592a*/
              *((_DWORD *)v85 + (_DWORD)v35) = v34; /*0x505932*/
            }
            v32 = 1; /*0x505939*/
            v82 = (VectorClass *)((char *)v82 - 1); /*0x50593c*/
          }
        }
        else
        {
          v31 = v33; /*0x5058cd*/
        }
      }
      ++v33; /*0x505944*/
    }
    while ( v33 < v97 ); /*0x505947*/
    if ( !v32 ) /*0x50594f*/
    {
      if ( v31 == -1 ) /*0x505954*/
        break; /*0x505954*/
      *((_BYTE *)v106 + v31) = 1; /*0x50595a*/
      v36 = (char *)v100 + 4 * v31; /*0x505966*/
      if ( (int)v88 < (int)v86 /*0x505992*/
        || (BYTE1(v87) || !v86)
        && v89 > 0
        && ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v84[2])(&v84, &v86->__pad_0[v89], 0) )
      {
        v37 = v88; /*0x5059a1*/
        v88 = (TechnoTypeClass *)((char *)v88 + 1); /*0x5059a4*/
        *((_DWORD *)v85 + (_DWORD)v37) = *v36; /*0x5059aa*/
      }
      v82 = (VectorClass *)((char *)v82 - 1); /*0x5059ad*/
    }
  }
  v38 = (AbstractClass *)v96; /*0x5059bd*/
  v39 = HouseClass::FirstBuildableFromArray(v96, (AbstractClass *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2276)); /*0x5059d9*/
  v40 = *(_DWORD *)&stru_87C374.__pad_579C[22224] + 2876; /*0x5059db*/
  v41 = 1 << SuperWeaponTypeClass::FindByName((void *)(v38[1].uniqueId + 152)); /*0x5059f6*/
  v42 = *(_DWORD *)(v40 + 16); /*0x5059f8*/
  v43 = 0; /*0x5059fb*/
  if ( v42 <= 0 ) /*0x5059ff*/
    goto LABEL_88; /*0x5059ff*/
  v44 = *(TechnoTypeClass **)(v40 + 4); /*0x505a01*/
  v45 = v44; /*0x505a04*/
  while ( (v41 & *(_DWORD *)(v45->vtable0 + 1740)) == 0 ) /*0x505a0e*/
  {
    ++v43; /*0x505a10*/
    v45 = (TechnoTypeClass *)((char *)v45 + 4); /*0x505a11*/
    if ( v43 >= v42 ) /*0x505a16*/
      goto LABEL_88; /*0x505a16*/
  }
  if ( *(&v44->vtable0 + v43) ) /*0x505a5a*/
  {
    v46 = (AbstractClass *)v96; /*0x505a60*/
    v47 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4984) + 4 * v96[97]); /*0x505a75*/
  }
  else
  {
LABEL_88:
    v46 = (AbstractClass *)v96; /*0x505a18*/
    v47 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4928) + 4 * v96[97]) - 1; /*0x505a35*/
  }
  v48 = 0; /*0x505a3a*/
  if ( (int)v88[-1].align_DF4 + 3 > 0 ) /*0x505a3f*/
  {
    v49 = (BlowStraw *)v85; /*0x505a45*/
    while ( *(_DWORD **)v49->__pad_0 != v39 ) /*0x505a4b*/
    {
      v48 = (IUnknown *)((char *)v48 + 1); /*0x505a4d*/
      v49 = (BlowStraw *)((char *)v49 + 4); /*0x505a4e*/
      if ( (int)v48 >= (int)((char *)v88[-1].align_DF4 + 3) ) /*0x505a53*/
        goto LABEL_109; /*0x505a53*/
    }
    if ( v48 != (IUnknown *)-1 && v47 > 0 ) /*0x505a85*/
    {
      v50 = v47; /*0x505a8b*/
      do /*0x505b1f*/
      {
        v51 = (AbstractClass *)Random::Range( /*0x505aa9*/
                                 (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                                 v48,
                                 (IUnknown *)((char *)v88[-1].align_DF4 + 3));
        if ( (int)v88 < (int)v86 /*0x505ad4*/
          || (BYTE1(v87) || !v86)
          && v89 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v84[2])(&v84, &v86->__pad_0[v89], 0) )
        {
          if ( (int)v51 < (int)((char *)v88[-1].align_DF4 + 3) ) /*0x505ae2*/
            memcpy( /*0x505b05*/
              (char *)v85 + 4 * (_DWORD)v51 + 8,
              (AbstractClass *)((char *)v85 + 4 * (_DWORD)&v51->__pad_0[1]),
              4 * ((_DWORD)v88 + 0x3FFFFFFF * (_DWORD)&v51->__pad_0[1]));
          *((_DWORD *)v85 + (_DWORD)v51 + 1) = v39; /*0x505b11*/
          v88 = (TechnoTypeClass *)((char *)v88 + 1); /*0x505b1a*/
        }
        --v50; /*0x505b1e*/
      }
      while ( v50 ); /*0x505b1f*/
      v46 = (AbstractClass *)v96; /*0x505b25*/
    }
  }
LABEL_109:
  VectorClass::BuildingTypeConstructor(&v90, 0, 0); /*0x505b29*/
  v52 = v92; /*0x505b36*/
  v53 = (BlowStraw *)v85; /*0x505b3a*/
  v90 = (void **)&vt_DynamicVectorClass_BuildingTypeClass_const; /*0x505b40*/
  v95 = 10; /*0x505b48*/
  v94 = 0; /*0x505b50*/
  if ( v92 > 0 ) /*0x505b58*/
    goto LABEL_113; /*0x505b58*/
  if ( BYTE1(v93) || !v92 ) /*0x505b64*/
  {
    if ( !GenericVector::Resize2(&v90, v92 + 10, 0) ) /*0x505b78*/
    {
LABEL_114:
      v52 = v92; /*0x505b8e*/
      goto LABEL_115; /*0x505b8e*/
    }
LABEL_113:
    v54 = v94++; /*0x505b7a*/
    *((_DWORD *)Block + v54) = *(_DWORD *)v53->__pad_0; /*0x505b8b*/
    goto LABEL_114; /*0x505b8b*/
  }
LABEL_115:
  v55 = (char *)v85 + 4; /*0x505b92*/
  if ( v94 < v52 ) /*0x505b9f*/
    goto LABEL_120; /*0x505b9f*/
  if ( (BYTE1(v93) || !v52) && v95 > 0 ) /*0x505bb3*/
  {
    if ( !((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v90[2])(&v90, v95 + v52, 0) ) /*0x505bc7*/
    {
LABEL_121:
      v52 = v92; /*0x505bdd*/
      goto LABEL_122; /*0x505bdd*/
    }
LABEL_120:
    v56 = v94++; /*0x505bc9*/
    *((_DWORD *)Block + v56) = *v55; /*0x505bda*/
    goto LABEL_121; /*0x505bda*/
  }
LABEL_122:
  v57 = (char *)v85 + 8; /*0x505be1*/
  if ( v94 < v52 ) /*0x505bee*/
    goto LABEL_127; /*0x505bee*/
  if ( (BYTE1(v93) || !v52) && v95 > 0 ) /*0x505c02*/
  {
    if ( !((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v90[2])(&v90, v95 + v52, 0) ) /*0x505c16*/
    {
LABEL_128:
      v52 = v92; /*0x505c2c*/
      goto LABEL_129; /*0x505c2c*/
    }
LABEL_127:
    v58 = v94++; /*0x505c18*/
    *((_DWORD *)Block + v58) = *v57; /*0x505c29*/
    goto LABEL_128; /*0x505c29*/
  }
LABEL_129:
  for ( j = 3; j < (int)v88; ++j ) /*0x505c3b*/
  {
    v60 = (char *)v85 + 4 * j; /*0x505c41*/
    if ( v94 < v52 ) /*0x505c4a*/
      goto LABEL_135; /*0x505c4a*/
    if ( !BYTE1(v93) && v52 || v95 <= 0 ) /*0x505c5e*/
      continue; /*0x505c5e*/
    if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v90[2])(&v90, v95 + v52, 0) ) /*0x505c6d*/
    {
LABEL_135:
      v61 = v94++; /*0x505c7c*/
      *((_DWORD *)Block + v61) = *v60; /*0x505c85*/
    }
    v52 = v92; /*0x505c88*/
  }
  v62 = 0; /*0x505c95*/
  if ( v111 ) /*0x505ca0*/
  {
    if ( v111 == 1 ) /*0x505cb9*/
    {
      v63 = (TimerStruct *)v46[10].referenceCount; /*0x505cc1*/
      v64 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3488); /*0x505cc7*/
    }
    else
    {
      if ( v111 != 2 ) /*0x505cd2*/
        goto LABEL_145; /*0x505cd2*/
      v63 = (TimerStruct *)v46[10].referenceCount; /*0x505cda*/
      v64 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3516); /*0x505ce0*/
    }
  }
  else
  {
    v63 = (TimerStruct *)v46[10].referenceCount; /*0x505ca8*/
    v64 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3460); /*0x505cae*/
  }
  v62 = *(_DWORD *)(v64 + 4 * (_DWORD)v63); /*0x505ce6*/
LABEL_145:
  if ( v62 > 0 ) /*0x505ceb*/
  {
    v65 = v62; /*0x505cf1*/
    do /*0x505d87*/
    {
      v66 = (TechnoTypeClass *)Random::Range( /*0x505d13*/
                                 (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                                 (IUnknown *)3,
                                 (IUnknown *)(v94 - 1));
      if ( v94 < v92 /*0x505d3e*/
        || (BYTE1(v93) || !v92)
        && v95 > 0
        && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v90[2])(&v90, v95 + v92, 0) )
      {
        if ( (int)v66 < v94 - 1 ) /*0x505d4e*/
          memcpy( /*0x505d6d*/
            (char *)Block + 4 * (_DWORD)v66 + 8,
            (AbstractClass *)((char *)Block + 4 * ((_DWORD)&v66->vtable0 + 1)),
            4 * (v94 + 0x3FFFFFFF * ((_DWORD)&v66->vtable0 + 1)));
        *((_DWORD *)Block + (_DWORD)v66 + 1) = -1; /*0x505d79*/
        ++v94; /*0x505d82*/
      }
      --v65; /*0x505d86*/
    }
    while ( v65 ); /*0x505d87*/
  }
  v67 = 0; /*0x505d91*/
  for ( k = 0; (int)k < v94; k = (VectorClass *)((char *)k + 1) ) /*0x505d99*/
  {
    v68 = *((_DWORD *)Block + (_DWORD)v67); /*0x505da5*/
    if ( v68 < 0xFFFFFFFC ) /*0x505daa*/
    {
      v98 = 0; /*0x505e33*/
      v75 = *(_DWORD *)(v68 + 3576); /*0x505e41*/
      v76 = v96[5573]; /*0x505e4d*/
      v77 = v96 + 5569; /*0x505e53*/
      LOBYTE(v113) = 0; /*0x505e59*/
      v78 = v96[5571]; /*0x505e61*/
      if ( v76 >= v78 ) /*0x505e66*/
      {
        if ( !*((_BYTE *)v96 + 22289) && v78 ) /*0x505e71*/
          goto LABEL_171; /*0x505e71*/
        v79 = v96[5574]; /*0x505e73*/
        if ( v79 <= 0 /*0x505e83*/
          || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v77 + 8))(v96 + 5569, v78 + v79, 0) )
        {
          goto LABEL_171; /*0x505e88*/
        }
      }
      v80 = v77[4]; /*0x505e8a*/
      v73 = v113; /*0x505e8d*/
      v77[4] = v80 + 1; /*0x505e97*/
      v74 = (unsigned int *)(v77[1] + 16 * v80); /*0x505ea0*/
      *v74 = v75; /*0x505ea2*/
      v74[1] = 0; /*0x505ea4*/
    }
    else
    {
      v97 = 0; /*0x505db5*/
      LOBYTE(v112) = 0; /*0x505dbf*/
      v69 = v96 + 5569; /*0x505dd6*/
      v70 = v96[5571]; /*0x505ddc*/
      if ( v96[5573] >= v70 ) /*0x505de4*/
      {
        if ( !*((_BYTE *)v96 + 22289) && v70 ) /*0x505def*/
          goto LABEL_171; /*0x505def*/
        v71 = v96[5574]; /*0x505df5*/
        if ( v71 <= 0 /*0x505e09*/
          || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v69 + 8))(v96 + 5569, v70 + v71, 0) )
        {
          goto LABEL_171; /*0x505e0e*/
        }
      }
      v72 = v69[4]; /*0x505e14*/
      v73 = v112; /*0x505e17*/
      v69[4] = v72 + 1; /*0x505e21*/
      v74 = (unsigned int *)(v69[1] + 16 * v72); /*0x505e2a*/
      *v74 = v68; /*0x505e2c*/
      v74[1] = 0; /*0x505e2e*/
    }
    v74[2] = v73; /*0x505ea7*/
    v74[3] = 0; /*0x505eaa*/
LABEL_171:
    v67 = (char *)&k->vtable0 + 1; /*0x505ead*/
  }
  v90 = (void **)&vt_VectorClass_BuildingTypeClass_const; /*0x505ec2*/
  if ( Block && BYTE1(v93) ) /*0x505edb*/
  {
    __3_YAXPAX_Z(Block); /*0x505ede*/
    Block = 0; /*0x505ee6*/
  }
  BYTE1(v93) = 0; /*0x505eee*/
  v92 = 0; /*0x505ef5*/
  v84 = (void **)&vt_VectorClass_BuildingTypeClass_const; /*0x505ef9*/
  if ( v85 && BYTE1(v87) ) /*0x505f05*/
  {
    __3_YAXPAX_Z(v85); /*0x505f08*/
    v85 = 0; /*0x505f10*/
  }
  BYTE1(v87) = 0; /*0x505f18*/
  v86 = 0; /*0x505f1f*/
  v105 = (void **)&vt_VectorClass_bool; /*0x505f23*/
  if ( v106 && BYTE1(v108) ) /*0x505f33*/
  {
    __3_YAXPAX_Z(v106); /*0x505f36*/
    v106 = 0; /*0x505f3e*/
  }
  v107 = 0; /*0x505f46*/
  v99 = (void **)&vt_VectorClass_BuildingTypeClass_const; /*0x505f4c*/
  BYTE1(v108) = 0; /*0x505f53*/
  if ( v100 ) /*0x505f59*/
  {
    if ( v102 ) /*0x505f61*/
      __3_YAXPAX_Z(v100); /*0x505f64*/
  }
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


// ==== 0x00505FD0  globalHelper_005FD0  this=VectorClass  sig=csp ====
int __fastcall globalHelper_005FD0(int a1, int *a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edx
  int v7; // edi
  int v8; // eax
  double v9; // st7
  __int64 v10; // rax
  int v12; // [esp+2Ch] [ebp+8h]

  v4 = *((__int16 *)a2 + 1); /*0x505fd5*/
  v5 = *(__int16 *)a2; /*0x505ff7*/
  v7 = *(_DWORD *)(*(_DWORD *)(a1 + 90208) /*0x506002*/
                 + 4 * (v5 + *(_DWORD *)(a1 + 22364) * (v4 - *(_DWORD *)(a1 + 22360)) - *(_DWORD *)(a1 + 22356)));
  v8 = 0; /*0x506005*/
  if ( a4 != -1 ) /*0x50600a*/
  {
    v12 = *(__int16 *)(a1 + 22354) - v4; /*0x50602b*/
    v9 = Math::CalcAngle((double)v12, (double)(v5 - *(__int16 *)(a1 + 22352))); /*0x50603c*/
    LOWORD(v12) = Math::RoundToInt((v9 - 1.570796326794897) * -10430.06004058427); /*0x506055*/
    v10 = 32 * a4 - (unsigned __int8)((((unsigned int)v12 >> 7) + 1) >> 1); /*0x506071*/
    v8 = (HIDWORD(v10) ^ v10) - HIDWORD(v10); /*0x506074*/
    if ( v8 >= 128 ) /*0x50607b*/
      v8 = 255 - v8; /*0x506084*/
  }
  return a3 + 1000 * (v8 + (v7 << 7)); /*0x50608e*/
}


// ==== 0x005060B0  HouseClass::ScanBuildLocation  this=VectorClass  sig=csp ====
unsigned int *__thiscall HouseClass::ScanBuildLocation(
        int this,
        VectorClass *aP1,
        VectorClass *aP2,
        int (__fastcall *a4)(int, int *, int, int),
        int a5)
{
  HouseClass *BuildableFromArray; // eax
  MouseClass *v8; // esi
  HouseClass *v9; // eax
  IUnknown *v10; // eax
  AbstractClass *v11; // eax
  int v12; // ecx
  IUnknown *v13; // esi
  void *v14; // eax
  _DWORD *v15; // eax
  int *v16; // eax
  int v17; // eax
  bool v18; // zf
  void *v19; // ebx
  int v20; // edi
  int v21; // eax
  int v22; // eax
  char Items_high; // cl
  AbstractClass *v23; // esi
  int v25; // esi
  int v26; // edi
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  void *eax26; // eax
  AbstractClass *v30; // edx
  double v32; // st7
  int v33; // eax
  int v34; // eax
  int eax33; // eax
  ObjectClass *v35; // eax
  signed int i; // ebx
  _DWORD *esi37; // esi
  MapClass *v38; // eax
  MapClass *v39; // eax
  int v41; // ebx
  int v42; // edi
  int v43; // edx
  double v44; // st7
  signed int v45; // esi
  int FoundationWidth; // ebx
  int FoundationHeight; // eax
  char v48; // cl
  bool v49; // cl
  int v50; // edi
  __int16 v51; // ax
  __int16 v52; // cx
  int v53; // edx
  unsigned int v54; // kr00_4
  int v55; // ebx
  int v56; // edx
  char *v57; // eax
  __int64 v58; // rax
  unsigned __int16 v59; // ax
  unsigned __int16 cx82; // cx
  VectorClass *v60; // esi
  __int128 var104_4; // [esp+Ch] [ebp-100h]
  void *v63; // [esp+18h] [ebp-F4h]
  void *_18a; // [esp+18h] [ebp-F4h]
  int v65; // [esp+2Ch] [ebp-E0h] BYREF
  MapClass *v64; // [esp+30h] [ebp-DCh] BYREF
  unsigned int v67; // [esp+34h] [ebp-D8h] BYREF
  AbstractClass *v68; // [esp+38h] [ebp-D4h] BYREF
  int v69; // [esp+3Ch] [ebp-D0h]
  __int16 *v70; // [esp+40h] [ebp-CCh]
  void *Base; // [esp+44h] [ebp-C8h] BYREF
  size_t NumOfElements; // [esp+48h] [ebp-C4h]
  signed int v73; // [esp+4Ch] [ebp-C0h]
  int v74; // [esp+50h] [ebp-BCh]
  int v75; // [esp+54h] [ebp-B8h]
  void **v76; // [esp+58h] [ebp-B4h] BYREF
  void *Block; // [esp+5Ch] [ebp-B0h]
  int v78; // [esp+60h] [ebp-ACh]
  int v79; // [esp+64h] [ebp-A8h]
  MapClass *v80; // [esp+68h] [ebp-A4h]
  int v81; // [esp+6Ch] [ebp-A0h]
  _DWORD v82[6]; // [esp+70h] [ebp-9Ch] BYREF
  unsigned int v83; // [esp+88h] [ebp-84h]
  int v84; // [esp+8Ch] [ebp-80h]
  unsigned int v85; // [esp+90h] [ebp-7Ch]
  int v86; // [esp+94h] [ebp-78h]
  int var74; // [esp+98h] [ebp-74h]
  int var70; // [esp+9Ch] [ebp-70h]
  AbstractClass *v87; // [esp+A0h] [ebp-6Ch]
  IUnknown *v88; // [esp+A4h] [ebp-68h]
  int v91; // [esp+A8h] [ebp-64h]
  int v92; // [esp+ACh] [ebp-60h]
  _DWORD v93[4]; // [esp+B0h] [ebp-5Ch] BYREF
  _DWORD v94[5]; // [esp+C0h] [ebp-4Ch] BYREF
  int v95; // [esp+D4h] [ebp-38h] BYREF
  _DWORD v96[3]; // [esp+D8h] [ebp-34h] BYREF
  int v97; // [esp+E4h] [ebp-28h]
  int v98; // [esp+E8h] [ebp-24h]
  int v99; // [esp+ECh] [ebp-20h]
  unsigned int v100; // [esp+F0h] [ebp-1Ch]
  int v101[4]; // [esp+F4h] [ebp-18h] BYREF
  int v102; // [esp+104h] [ebp-8h] BYREF
  int v103; // [esp+108h] [ebp-4h] BYREF

  v68 = (AbstractClass *)this; /*0x5060c8*/
  if ( !aP2 ) /*0x5060cc*/
  {
    aP1->vtable0 = *(void **)&HouseClass_Player.__pad_5568[23780]; /*0x5060d7*/
    return (unsigned int *)aP1; /*0x5060df*/
  }
  if ( aP2[204].__tail_E[0] ) /*0x5060e2*/
  {
    v64 = 0; /*0x5060fe*/
    BuildableFromArray = (HouseClass *)HouseClass::FirstBuildableFromArray( /*0x506109*/
                                         (_DWORD *)this,
                                         (AbstractClass *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2176));
    v8 = (MouseClass *)(BuildingTypeClass::GetFoundationWidth(BuildableFromArray) + 2); /*0x506125*/
    v9 = (HouseClass *)HouseClass::FirstBuildableFromArray( /*0x506128*/
                         (_DWORD *)this,
                         (AbstractClass *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2176));
    v10 = (IUnknown *)(BuildingTypeClass::GetFoundationHeight((int)v9, 0) + 2); /*0x50613b*/
    if ( *(_WORD *)(this + 21652) == *(_WORD *)&HouseClass_Player.__pad_5568[23780] /*0x506155*/
      && *(_WORD *)(this + 21654) == *(_WORD *)&HouseClass_Player.__pad_5568[23782] )
    {
      v65 = *(_DWORD *)(this + 21648); /*0x50615d*/
    }
    else
    {
      v65 = *(_DWORD *)(this + 21652); /*0x506169*/
    }
    v11 = (AbstractClass *)*LayerClass::Pathfinding_Find( /*0x506198*/
                              (IUnknown *)&stru_87C374.__pad_14B0[8132],
                              (IUnknown *)&v65,
                              (IUnknown *)v82,
                              (IUnknown *)&v65,
                              (IUnknown *)5,
                              (IUnknown *)0xFFFFFFFF,
                              0,
                              0,
                              (IUnknown *)v8,
                              v10,
                              0,
                              0,
                              0,
                              (IUnknown *)1,
                              (IUnknown *)&v64,
                              0,
                              0);
    v68 = v11; /*0x5061a1*/
    if ( v11 != *(AbstractClass **)&HouseClass_Player.__pad_5568[23780] ) /*0x5061a5*/
    {
      v12 = **(_DWORD **)(this + 84); /*0x5061b8*/
      if ( v12 ) /*0x5061bc*/
      {
        v13 = (IUnknown *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v12 + 72))(v12, v94); /*0x5061cf*/
        v14 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v68); /*0x5061d7*/
        v15 = (_DWORD *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v14 + 72))(v14, v96); /*0x5061e8*/
        v16 = Vector3::Subtract(v15, (IUnknown *)v93, v13); /*0x5061f6*/
        Coord::Length(v16); /*0x5061fd*/
        if ( v17 > *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3596) << 8 ) /*0x506213*/
        {
          aP1->vtable0 = *(void **)&HouseClass_Player.__pad_5568[23780]; /*0x50621e*/
          return (unsigned int *)aP1; /*0x506226*/
        }
        v11 = v68; /*0x506229*/
      }
    }
    aP1->vtable0 = v11; /*0x506230*/
    return (unsigned int *)aP1; /*0x506232*/
  }
  else
  {
    VectorClass::CellConstructor(&v76, 0, 0); /*0x506243*/
    v18 = *(_WORD *)(this + 22352) == 0; /*0x506248*/
    v76 = (void **)&vt_DynamicVectorClass_Cell; /*0x506255*/
    v81 = 10; /*0x50625d*/
    v80 = 0; /*0x506265*/
    v70 = (__int16 *)(this + 22352); /*0x506269*/
    if ( !v18 || *(_WORD *)(this + 22354) ) /*0x50626f*/
    {
      v20 = 0; /*0x5062c4*/
      Base = 0; /*0x5062ca*/
      NumOfElements = 0; /*0x5062ce*/
      v73 = 0; /*0x5062d2*/
      LOBYTE(v74) = 0; /*0x5062d6*/
      v75 = 0; /*0x5062db*/
      v80 = 0; /*0x5062df*/
      Buffer::Cleanup((int)&v76); /*0x5062e3*/
      v21 = *(_DWORD *)(this + 22320); /*0x5062e8*/
      v69 = 0; /*0x5062ee*/
      if ( v21 > 0 ) /*0x5062f4*/
      {
        do /*0x50646a*/
        {
          v22 = *(_DWORD *)(*(_DWORD *)(this + 22308) + 4 * v20); /*0x506303*/
          Items_high = HIBYTE(aP2[364].Items); /*0x506306*/
          v65 = v22; /*0x50630e*/
          if ( Items_high ) /*0x506312*/
          {
            v25 = ((__int16)v22 << 8) + 128; /*0x50633e*/
            v26 = (SHIWORD(v65) << 8) + 128; /*0x506344*/
            v64 = *(MapClass **)HouseClass::GetCurrentOption((_DWORD *)this, (IUnknown *)v82)->__pad_0; /*0x506358*/
            if ( v64 == *(MapClass **)&HouseClass_Player.__pad_5568[23780] ) /*0x50635c*/
            {
              v27 = *(_DWORD *)&HouseClass_Player.__pad_5568[23876]; /*0x50636c*/
              v28 = *(_DWORD *)&HouseClass_Player.__pad_5568[23880]; /*0x506371*/
              v29 = *(_DWORD *)&HouseClass_Player.__pad_5568[23884]; /*0x506377*/
            }
            else
            {
              eax26 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v64); /*0x506389*/
              v30 = (AbstractClass *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)eax26 + 72))(eax26, v96); /*0x50639d*/
              v27 = *(_DWORD *)v30->__pad_0; /*0x50639f*/
              v28 = *(_DWORD *)&v30->__pad_0[4]; /*0x5063a1*/
              v29 = *(_DWORD *)&v30->__pad_0[8]; /*0x5063a4*/
            }
            v94[1] = v28 - v26; /*0x5063ab*/
            v94[2] = v29; /*0x5063b2*/
            v94[0] = v27 - v25; /*0x5063c7*/
            v32 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x5063f1*/
                                                (double)(v27 - v25) * (double)(v27 - v25)
                                              + (double)v29 * (double)v29
                                              + (double)(v28 - v26) * (double)(v28 - v26)));
            v33 = Math::RoundToInt(v32); /*0x5063f9*/
            v20 = v69; /*0x506405*/
            v23 = (AbstractClass *)(v69 + 1000 * v33); /*0x50640d*/
          }
          else
          {
            v23 = (AbstractClass *)a4(this, &v65, v20, a5); /*0x506322*/
          }
          v34 = v73; /*0x506414*/
          if ( (int)(NumOfElements + 1) <= v73 ) /*0x50641b*/
            goto LABEL_32; /*0x50641b*/
          if ( !v73 ) /*0x50641f*/
            v34 = 10; /*0x506421*/
          if ( BuildLocationVector::Grow((int)&Base, v34) ) /*0x50642b*/
          {
LABEL_32:
            *((_DWORD *)Base + 2 * NumOfElements) = v23; /*0x50643c*/
            *((_DWORD *)Base + 2 * NumOfElements + 1) = v65; /*0x50644b*/
            LOBYTE(v74) = 0; /*0x506454*/
            ++NumOfElements; /*0x506459*/
          }
          eax33 = *(_DWORD *)(this + 22320); /*0x50645d*/
          v69 = ++v20; /*0x506466*/
        }
        while ( v20 < eax33 ); /*0x50646a*/
      }
      v35 = (ObjectClass *)NumOfElements; /*0x506472*/
      for ( i = 0; i < (int)NumOfElements; ++i ) /*0x50647a*/
      {
        if ( !(_BYTE)v74 ) /*0x50648a*/
        {
          qsort( /*0x506499*/
            (AbstractClass *)Base,
            (IUnknown *)v35,
            8u,
            (_CoreCrtNonSecureSearchSortCompareFunction)globalHelper_0108F0);
          v75 = 0; /*0x5064a1*/
          LOBYTE(v74) = 1; /*0x5064a5*/
        }
        esi37 = (char *)Base + 8 * i + 4; /*0x5064b2*/
        if ( (int)v80 < v78 /*0x5064df*/
          || (BYTE1(v79) || !v78)
          && v81 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v76[2])(&v76, v81 + v78, 0) )
        {
          v38 = v80; /*0x5064ee*/
          v80 = (MapClass *)((char *)v80 + 1); /*0x5064f1*/
          *((_DWORD *)Block + (_DWORD)v38) = *esi37; /*0x5064f7*/
        }
        v35 = (ObjectClass *)NumOfElements; /*0x5064fa*/
      }
      v99 = *((char *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v70) + 283); /*0x506521*/
      v39 = v80; /*0x506528*/
      v41 = 1 << *(_DWORD *)&v68[1].__pad_0[12]; /*0x506534*/
      v42 = 0; /*0x506536*/
      v70 = 0; /*0x506538*/
      v82[0] = v41; /*0x50653c*/
      while ( 1 ) /*0x506542*/
      {
        v69 = 0; /*0x506542*/
        if ( (int)v39 > 0 ) /*0x506546*/
          break; /*0x506546*/
LABEL_87:
        v70 = (__int16 *)((char *)v70 + 1); /*0x506a9b*/
        if ( (int)v70 >= 2 ) /*0x506aa7*/
        {
          v60 = aP1; /*0x506aad*/
          v70 = 0; /*0x506ab4*/
          v63 = Base; /*0x506ac2*/
          aP1->vtable0 = 0; /*0x506ac3*/
          __3_YAXPAX_Z(v63); /*0x506ac5*/
          Base = 0; /*0x506ad3*/
          NumOfElements = 0; /*0x506ad7*/
          v73 = 0; /*0x506adb*/
          LOBYTE(v74) = 0; /*0x506adf*/
          v75 = 0; /*0x506ae4*/
          v76 = (void **)&vt_VectorClass_Cell; /*0x506ae8*/
          if ( Block && BYTE1(v79) ) /*0x506af8*/
            __3_YAXPAX_Z(Block); /*0x506afb*/
          return (unsigned int *)v60; /*0x506afb*/
        }
      }
      while ( 1 ) /*0x506558*/
      {
        v43 = *((_DWORD *)Block + v69); /*0x506558*/
        v65 = 0; /*0x50655b*/
        v96[0] = v43; /*0x506560*/
        do /*0x5065cc*/
        {
          v95 = CellStruct::Add(v96, (IUnknown *)&v103, (IUnknown *)(4 * (v42 & 7) + 9041544))->field_0; /*0x50659c*/
          if ( (v41 & *((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v95) + 55)) != 0 ) /*0x5065ae*/
            v65 = CellStruct::Add(&v65, (IUnknown *)&v102, (IUnknown *)(4 * (v42 & 7) + 9041544))->field_0; /*0x5065c4*/
          ++v42; /*0x5065c8*/
        }
        while ( v42 < 8 ); /*0x5065cc*/
        if ( v65 ) /*0x5065db*/
          break; /*0x5065db*/
LABEL_85:
        v39 = v80; /*0x506a84*/
        if ( ++v69 >= (int)v80 ) /*0x506a93*/
        {
          v42 = 0; /*0x506a99*/
          goto LABEL_87; /*0x506a99*/
        }
        v42 = 0; /*0x50654e*/
      }
      v94[0] = -(__int16)v65; /*0x5065ee*/
      *((double *)&var104_4 + 1) = (double)v94[0]; /*0x506603*/
      v64 = (MapClass *)SHIWORD(v65); /*0x506606*/
      *(double *)&var104_4 = (double)SHIWORD(v65); /*0x506611*/
      v44 = Math::CalcAngle((AbstractClass *)var104_4, *(double *)((char *)&var104_4 + 4)); /*0x506614*/
      LOWORD(v100) = Math::RoundToInt((v44 - 1.570796326794897) * -10430.06004058427); /*0x506630*/
      v45 = (((v100 >> 12) + 1) >> 1) & 7; /*0x506649*/
      v93[0] = 0; /*0x50664c*/
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(aP2); /*0x506661*/
      v98 = FoundationWidth; /*0x506667*/
      FoundationHeight = BuildingTypeClass::GetFoundationHeight((int)aP2, 0); /*0x50666e*/
      v48 = BYTE1(aP2[374].Items); /*0x506673*/
      v97 = FoundationHeight; /*0x506679*/
      v49 = v48 || LOBYTE(aP2[343].Capacity); /*0x506692*/
      v50 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5216); /*0x50669c*/
      if ( v49 ) /*0x5066a2*/
        ++v50; /*0x5066a4*/
      if ( v45 < 1 || v45 > 3 ) /*0x5066ad*/
      {
        if ( v45 >= 5 ) /*0x5066bc*/
          LOWORD(v93[0]) = 1 - FoundationWidth - v50; /*0x5066cc*/
      }
      else
      {
        LOWORD(v93[0]) = v50; /*0x5066af*/
      }
      if ( v45 < 3 || v45 > 5 ) /*0x5066dc*/
      {
        if ( v45 >= 7 || v45 <= 1 ) /*0x5066f3*/
          HIWORD(v93[0]) = 1 - FoundationHeight - v50; /*0x5066fe*/
      }
      else
      {
        HIWORD(v93[0]) = v50 + 1; /*0x5066e1*/
      }
      v64 = 0; /*0x506706*/
LABEL_71:
      if ( (HouseClass_Player.__pad_5568[23888] & 1) == 0 ) /*0x506715*/
      {
        HouseClass_Player.__pad_5568[23888] |= 1u; /*0x506725*/
        var70 = 0xFFFF; /*0x50672b*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[23748] = 0xFFFF; /*0x506742*/
        v82[2] = -1; /*0x506748*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[23752] = -1; /*0x506756*/
        v91 = -65536; /*0x50675c*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[23756] = -65536; /*0x506778*/
        v94[4] = -65535; /*0x50677e*/
        v94[3] = 1; /*0x506795*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[23760] = -65535; /*0x50679d*/
        var74 = 65537; /*0x5067b2*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[23764] = 1; /*0x5067b7*/
        v87 = (AbstractClass *)0x10000; /*0x5067c6*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[23768] = 65537; /*0x5067ce*/
        v82[5] = 0x1FFFF; /*0x5067e3*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[23772] = 0x10000; /*0x5067f6*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[23776] = 0x1FFFF; /*0x5067fc*/
        atexit(nullsub_17); /*0x506802*/
      }
      if ( (HouseClass_Player.__pad_5568[23888] & 2) == 0 ) /*0x506818*/
      {
        v88 = (IUnknown *)1; /*0x506822*/
        v93[3] = 0x10000; /*0x506839*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[23796] = 1; /*0x506841*/
        HouseClass_Player.__pad_5568[23888] |= 2u; /*0x506858*/
        v84 = 65537; /*0x50685e*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[23804] = 0x10000; /*0x50686c*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[23800] = 65537; /*0x506874*/
        v86 = 0x1FFFF; /*0x50687a*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[23808] = 0x1FFFF; /*0x506888*/
        v92 = 0xFFFF; /*0x50688e*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[23812] = 0xFFFF; /*0x5068a5*/
        v82[1] = -1; /*0x5068ab*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[23816] = -1; /*0x5068b9*/
        v82[3] = -65536; /*0x5068bf*/
        v82[4] = -65535; /*0x5068cd*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[23820] = -65536; /*0x5068e0*/
        *(_DWORD *)&HouseClass_Player.__pad_5568[23824] = -65535; /*0x5068e6*/
        atexit(nullsub_16); /*0x5068ec*/
      }
      v51 = LOWORD(v96[0]) + LOWORD(v93[0]) + *(_WORD *)&HouseClass_Player.__pad_5568[4 * v45 + 23748]; /*0x50691c*/
      v52 = HIWORD(v93[0]) + HIWORD(v96[0]) + *(_WORD *)&HouseClass_Player.__pad_5568[4 * v45 + 23750]; /*0x506927*/
      LOWORD(v83) = v51; /*0x50692a*/
      HIWORD(v83) = v52; /*0x50692f*/
      v67 = v83; /*0x506938*/
      if ( v64 == (MapClass *)1 ) /*0x506942*/
      {
        v53 = ((_BYTE)v45 - 4) & 7; /*0x506947*/
        LOWORD(v85) = *(_WORD *)&stru_89E138.__pad_14B0[4 * v53 + 160] + v51; /*0x506959*/
        HIWORD(v85) = v52 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v53 + 162]; /*0x50696b*/
        v67 = v85; /*0x506974*/
        v50 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5216); /*0x50697e*/
      }
      v54 = v67; /*0x506985*/
      v55 = 0; /*0x50698a*/
      while ( 1 ) /*0x50699b*/
      {
        v101[0] = (__int16)v54 - v50; /*0x50699b*/
        v101[2] = v98 + 2 * v50; /*0x5069a7*/
        v101[1] = SHIWORD(v54) - v50; /*0x5069b5*/
        v56 = *(_DWORD *)&v68[1].__pad_0[12]; /*0x5069c3*/
        v101[3] = v97 + 2 * v50; /*0x5069c6*/
        if ( MapClass::IsAreaFree(&stru_87C374.__pad_14B0[8132], v101, v56) ) /*0x5069db*/
        {
          if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, unsigned int *, AbstractClass *))aP2->vtable0 + 42))( /*0x5069f3*/
                 aP2,
                 &v67,
                 v68) )
          {
            v57 = (char *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v67); /*0x506a07*/
            v58 = v99 - v57[283]; /*0x506a1c*/
            if ( (int)((HIDWORD(v58) ^ v58) - HIDWORD(v58)) < 3 ) /*0x506a24*/
            {
              if ( BuildingTypeClass::ProcessData(v68, aP2, (__int16 *)&v67) ) /*0x506a33*/
                break; /*0x506a33*/
            }
          }
        }
        v59 = *(_WORD *)&HouseClass_Player.__pad_5568[4 * v45 + 23796] + v67; /*0x506a4a*/
        cx82 = *(_WORD *)&HouseClass_Player.__pad_5568[4 * v45 + 23798] + HIWORD(v67); /*0x506a52*/
        ++v55; /*0x506a5a*/
        LOWORD(v67) = v59; /*0x506a5e*/
        HIWORD(v67) = cx82; /*0x506a63*/
        v54 = __PAIR32__(cx82, v59); /*0x506a68*/
        if ( v55 >= 3 ) /*0x506a68*/
        {
          v64 = (MapClass *)((char *)v64 + 1); /*0x506a76*/
          if ( (int)v64 < 2 ) /*0x506a7a*/
            goto LABEL_71; /*0x506a7a*/
          v41 = v82[0]; /*0x506a80*/
          goto LABEL_85; /*0x506a80*/
        }
      }
      v60 = aP1; /*0x506b0e*/
      _18a = Base; /*0x506b19*/
      aP1->vtable0 = (void *)v67; /*0x506b1a*/
      __3_YAXPAX_Z(_18a); /*0x506b1c*/
      Base = 0; /*0x506b2c*/
      NumOfElements = 0; /*0x506b30*/
      v73 = 0; /*0x506b34*/
      LOBYTE(v74) = 0; /*0x506b38*/
      v75 = 0; /*0x506b3c*/
      v76 = (void **)&vt_VectorClass_Cell; /*0x506b40*/
      if ( Block && BYTE1(v79) ) /*0x506b50*/
      {
        __3_YAXPAX_Z(Block); /*0x506b53*/
        return (unsigned int *)aP1; /*0x506b5b*/
      }
      return (unsigned int *)v60; /*0x506b03*/
    }
    else
    {
      if ( *(_WORD *)(this + 21652) == *(_WORD *)&HouseClass_Player.__pad_5568[23780] /*0x506293*/
        && *(_WORD *)(this + 21654) == *(_WORD *)&HouseClass_Player.__pad_5568[23782] )
      {
        v19 = *(void **)(this + 21648); /*0x506295*/
      }
      else
      {
        v19 = *(void **)(this + 21652); /*0x50629d*/
      }
      v76 = (void **)&vt_VectorClass_Cell; /*0x5062aa*/
      aP1->vtable0 = v19; /*0x5062b2*/
      Buffer::Cleanup((int)&v76); /*0x5062b4*/
      return (unsigned int *)aP1; /*0x5062b9*/
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
_DWORD *__thiscall sub_506B90(void *this, _DWORD *a2, int a3)
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

  IndexByName = BuildingTypeClass::FindIndexByName((void *)(a3 + 3720)); /*0x506ba5*/
  if ( IndexByName == -1 ) /*0x506bad*/
  {
    *a2 = 0; /*0x506bc6*/
    return a2; /*0x506bcc*/
  }
  v5 = 0; /*0x506bd5*/
  v6 = 0; /*0x506bd7*/
  v7 = *((_DWORD *)g_TriggerTypeCount + IndexByName); /*0x506bd9*/
  v13 = v7; /*0x506be7*/
  v8 = *(_DWORD *)(v7 + 5344) + 10; /*0x506bf1*/
  v12 = *(_DWORD *)(a3 + 5884) == -1; /*0x506bf7*/
  if ( MEMORY[0xA8EB50] <= 0 ) /*0x506bfe*/
    goto LABEL_17; /*0x506bfe*/
  while ( 1 ) /*0x506c0f*/
  {
    v9 = *((_DWORD *)MEMORY[0xA8EB44] + v5); /*0x506c0f*/
    if ( *(void **)(v9 + 540) == this && *(_DWORD *)(v9 + 1312) == v7 && BuildingClass::CanAcceptType(v9, a3, (int)this) ) /*0x506c2e*/
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
    if ( ++v5 >= MEMORY[0xA8EB50] ) /*0x506c5f*/
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


// ==== 0x00506D50  MapClass::CalcVisibleCellRange  this=MapClass  sig=csp ====
int __stdcall MapClass::CalcVisibleCellRange(int a1, int a2, VectorClass *aP2, int *a3)
{
  int v4; // kr04_4
  int v5; // esi
  int v6; // ebx
  VectorClass *v7; // esi
  int v8; // edx
  int v9; // eax
  int v10; // esi
  int result; // eax
  int v12; // esi
  double v13; // st7
  int *v14; // esi
  VectorClass *v15; // [esp+14h] [ebp-2Ch]
  int v16; // [esp+18h] [ebp-28h]
  int i; // [esp+1Ch] [ebp-24h]
  BuildingTypeClass *v18; // [esp+20h] [ebp-20h]
  double v19; // [esp+28h] [ebp-18h]
  int v20; // [esp+38h] [ebp-8h]
  int v21; // [esp+3Ch] [ebp-4h]

  if ( a2 <= 0 ) /*0x506d61*/
    a2 = 1; /*0x506d63*/
  v4 = *(_DWORD *)(a1 + 156); /*0x506d8c*/
  v5 = (__int16)(v4 / 256); /*0x506d94*/
  if ( v5 - 6 <= *a3 ) /*0x506dad*/
  {
    v16 = *a3; /*0x506db7*/
    v6 = *a3; /*0x506dbb*/
  }
  else
  {
    v6 = v5 - 6; /*0x506daf*/
    v16 = v5 - 6; /*0x506db1*/
  }
  v7 = (VectorClass *)(v5 + 6); /*0x506dc0*/
  v15 = (VectorClass *)(a3[2] + *a3); /*0x506dc7*/
  if ( (int)v15 >= (int)v7 ) /*0x506dcb*/
    v15 = v7; /*0x506dcd*/
  v8 = (__int16)(*(_DWORD *)(a1 + 160) / 256); /*0x506dd1*/
  v9 = a3[1]; /*0x506dd4*/
  v21 = v8; /*0x506dd7*/
  v10 = v8 - 6; /*0x506de0*/
  if ( v8 - 6 <= v9 ) /*0x506de2*/
    v10 = a3[1]; /*0x506de4*/
  v18 = (BuildingTypeClass *)(a3[3] + v9); /*0x506df0*/
  if ( (int)v18 >= v8 + 6 ) /*0x506df4*/
    v18 = (BuildingTypeClass *)(v8 + 6); /*0x506df6*/
  result = (int)v18; /*0x506dfa*/
  for ( i = v10; v10 < (int)v18; i = v10 ) /*0x506e04*/
  {
    if ( v6 < (int)v15 ) /*0x506e0e*/
    {
      v12 = (v10 - v8) * (v10 - v8); /*0x506e16*/
      v20 = v12; /*0x506e19*/
      do /*0x506eba*/
      {
        v19 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(v12 /*0x506e3f*/
                                                                       + (v6 - (__int16)(v4 / 256))
                                                                       * (v6 - (__int16)(v4 / 256)))));
        if ( v19 < 6.0 ) /*0x506e51*/
        {
          v13 = v19; /*0x506e53*/
          if ( v19 < 1.0 ) /*0x506e75*/
            v13 = 1.0; /*0x506e79*/
          v14 = (int *)&aP2->vtable0[4 * (v6 - *a3) + 4 * (i - a3[1]) * a3[2]]; /*0x506ea1*/
          *v14 = Math::RoundToInt((double)a2 / ((v13 - 1.0) * 0.1 + 1.0) + (double)*v14); /*0x506ead*/
          v12 = v20; /*0x506eaf*/
        }
        ++v6; /*0x506eb7*/
      }
      while ( v6 < (int)v15 ); /*0x506eba*/
      v10 = i; /*0x506ec0*/
      v8 = v21; /*0x506ec4*/
      v6 = v16; /*0x506ec8*/
    }
    result = (int)v18; /*0x506ecc*/
    ++v10; /*0x506ed0*/
  }
  return result; /*0x506edd*/
}


// ==== 0x00507B80  ObjectClass::CollectSuperWeaponBuildingTypes  this=ObjectClass  sig=csp ====
int __thiscall CollectSuperWeaponBuildingTypes(_DWORD *this, int a2, VectorClass *aP2)
{
  char v4; // cl
  int v5; // eax
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
  CCINIClass *v19; // eax
  int v21; // [esp+10h] [ebp-1Ch]
  void **v22; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  int v24; // [esp+1Ch] [ebp-10h]
  int v25; // [esp+20h] [ebp-Ch]
  int v26; // [esp+24h] [ebp-8h]
  int v27; // [esp+28h] [ebp-4h]

  v4 = SuperWeaponTypeClass::FindByName((void *)(this->attachedTag + 152)); /*0x507b9c*/
  v5 = this->attachedTag; /*0x507b9e*/
  LOWORD(v25) = 1; /*0x507ba1*/
  v6 = 1 << v4; /*0x507ba6*/
  v22 = (void **)&vt_DynamicVectorClass_BuildingTypeClass; /*0x507baa*/
  Block = 0; /*0x507bb2*/
  v24 = 0; /*0x507bb6*/
  v27 = 10; /*0x507bbe*/
  v26 = 0; /*0x507bc6*/
  v7 = *(_DWORD *)(v5 + 188); /*0x507bca*/
  if ( v7 ) /*0x507bd2*/
  {
    if ( v7 == 1 ) /*0x507be5*/
      v8 = (_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2416); /*0x507bed*/
    else
      v8 = (_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2444); /*0x507bfa*/
  }
  else
  {
    v8 = (_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2388); /*0x507bda*/
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
        && v10[397] <= this->q1D4
        && (int)v10[1353] > 0
        && HouseClass::PrerequisitesForTechnoTypeAreListed((int)v10, aP2, (TechnoTypeClass *)aP2[1].vtable0)
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
  *(_DWORD *)a2 = &vt_VectorClass_BuildingTypeClass; /*0x507cc3*/
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
  v19 = (CCINIClass *)Block; /*0x507d2b*/
  v14 = Block == 0; /*0x507d2f*/
  *(_DWORD *)(a2 + 20) = v18; /*0x507d31*/
  *(_DWORD *)a2 = &vt_DynamicVectorClass_BuildingTypeClass; /*0x507d34*/
  v22 = (void **)&vt_VectorClass_BuildingTypeClass; /*0x507d3a*/
  if ( !v14 && BYTE1(v25) ) /*0x507d4a*/
    __3_YAXPAX_Z(v19); /*0x507d4d*/
  return a2; /*0x507d57*/
}


// ==== 0x00507D70  HouseClass::CollectInfantryBuildCandidates  this=HouseClass  sig=csp ====
int __thiscall sub_507D70(_DWORD *this, int a2, int a3)
{
  char v4; // cl
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int *p_EliteFlashTimer; // ebx
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  void *v15; // eax
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

  v4 = SuperWeaponTypeClass::FindByName((void *)(this->relatedTagsCapacity + 152)); /*0x507d8c*/
  v5 = this->relatedTagsCapacity; /*0x507d8e*/
  LOWORD(v25) = 1; /*0x507d91*/
  v6 = 1 << v4; /*0x507d96*/
  v22 = &vt_DynamicVectorClass_BuildingTypeClass; /*0x507d9a*/
  Block = 0; /*0x507da2*/
  v24 = 0; /*0x507da6*/
  v27 = 10; /*0x507dae*/
  v26 = 0; /*0x507db6*/
  v7 = *(_DWORD *)(v5 + 188); /*0x507dba*/
  if ( v7 ) /*0x507dc2*/
  {
    if ( v7 == 1 ) /*0x507dd5*/
      p_EliteFlashTimer = &MEMORY[0x8871E0]->MyEffectivenessCoefficientDefault; /*0x507ddd*/
    else
      p_EliteFlashTimer = MEMORY[0x8871E0]->?; /*0x507dea*/
  }
  else
  {
    p_EliteFlashTimer = MEMORY[0x8871E0]->?; /*0x507dca*/
  }
  v9 = p_EliteFlashTimer[4] - 1; /*0x507df3*/
  v21 = v9; /*0x507df4*/
  if ( v9 >= 0 ) /*0x507df8*/
  {
    while ( 1 ) /*0x507e09*/
    {
      v10 = (_DWORD *)(*(int (__thiscall **)(int *, int))(*p_EliteFlashTimer + 24))(p_EliteFlashTimer, v9); /*0x507e09*/
      v11 = v10; /*0x507e0c*/
      if ( (v6 & v10[435]) != 0 /*0x507e72*/
        && v10[397] <= this->q1D4
        && (int)v10[1354] > 0
        && HouseClass::PrerequisitesForTechnoTypeAreListed((int)v10, a3, *(_DWORD *)(a3 + 16))
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
  *(_DWORD *)a2 = &vt_VectorClass_BuildingTypeClass; /*0x507eb3*/
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
  *(_DWORD *)a2 = &vt_DynamicVectorClass_BuildingTypeClass; /*0x507f24*/
  v22 = &vt_VectorClass_BuildingTypeClass; /*0x507f2a*/
  if ( !v14 && BYTE1(v25) ) /*0x507f3a*/
    __3_YAXPAX_Z(v19); /*0x507f3d*/
  return a2; /*0x507f47*/
}


// ==== 0x00507F60  HouseClass::CollectAircraftBuildCandidates  this=HouseClass  sig=csp ====
int __thiscall sub_507F60(_DWORD *this, int a2, int a3)
{
  char v4; // cl
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int *p_EliteFlashTimer; // ebx
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  void *v15; // eax
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

  v4 = SuperWeaponTypeClass::FindByName((void *)(this->relatedTagsCapacity + 152)); /*0x507f7c*/
  v5 = this->relatedTagsCapacity; /*0x507f7e*/
  LOWORD(v25) = 1; /*0x507f81*/
  v6 = 1 << v4; /*0x507f86*/
  v22 = &vt_DynamicVectorClass_BuildingTypeClass; /*0x507f8a*/
  Block = 0; /*0x507f92*/
  v24 = 0; /*0x507f96*/
  v27 = 10; /*0x507f9e*/
  v26 = 0; /*0x507fa6*/
  v7 = *(_DWORD *)(v5 + 188); /*0x507faa*/
  if ( v7 ) /*0x507fb2*/
  {
    if ( v7 == 1 ) /*0x507fc5*/
      p_EliteFlashTimer = &MEMORY[0x8871E0]->MyEffectivenessCoefficientDefault; /*0x507fcd*/
    else
      p_EliteFlashTimer = MEMORY[0x8871E0]->?; /*0x507fda*/
  }
  else
  {
    p_EliteFlashTimer = MEMORY[0x8871E0]->?; /*0x507fba*/
  }
  v9 = p_EliteFlashTimer[4] - 1; /*0x507fe3*/
  v21 = v9; /*0x507fe4*/
  if ( v9 >= 0 ) /*0x507fe8*/
  {
    while ( 1 ) /*0x507ff9*/
    {
      v10 = (_DWORD *)(*(int (__thiscall **)(int *, int))(*p_EliteFlashTimer + 24))(p_EliteFlashTimer, v9); /*0x507ff9*/
      v11 = v10; /*0x507ffc*/
      if ( (v6 & v10[435]) != 0 /*0x508062*/
        && v10[397] <= this->q1D4
        && (int)v10[1355] > 0
        && HouseClass::PrerequisitesForTechnoTypeAreListed((int)v10, a3, *(_DWORD *)(a3 + 16))
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
  *(_DWORD *)a2 = &vt_VectorClass_BuildingTypeClass; /*0x5080a3*/
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
  *(_DWORD *)a2 = &vt_DynamicVectorClass_BuildingTypeClass; /*0x508114*/
  v22 = &vt_VectorClass_BuildingTypeClass; /*0x50811a*/
  if ( !v14 && BYTE1(v25) ) /*0x50812a*/
    __3_YAXPAX_Z(v19); /*0x50812d*/
  return a2; /*0x508137*/
}


// ==== 0x00508150  HouseClass::ComputePowerDistribution  this=HouseClass  sig=csp ====
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

  v2 = this->enemyHouseIndex; /*0x508156*/
  if ( v2 == -1 ) /*0x50815f*/
    goto LABEL_3; /*0x50815f*/
  v3 = *(_DWORD **)&HouseClass_Array->__pad_0[4 * v2]; /*0x508173*/
  v4 = v3[22572] + 3000; /*0x50818e*/
  v5 = v3[22571] + 3000; /*0x508194*/
  v6 = v3[22570] + 3000; /*0x5081a4*/
  v7 = Math::RoundToInt((double)*(int *)(MEMORY[0x8871E0]->?[0] + 4 * this->q184) * 0.0099999998 * (double)v4); /*0x5081bf*/
  v14 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -v7, v7) + v4; /*0x5081e7*/
  v8 = Math::RoundToInt((double)*(int *)(MEMORY[0x8871E0]->?[0] + 4 * this->q184) * 0.0099999998 * (double)v5); /*0x5081fe*/
  v13 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -v8, v8) + v5; /*0x50822b*/
  v9 = Math::RoundToInt((double)*(int *)(MEMORY[0x8871E0]->?[0] + 4 * this->q184) * 0.0099999998 * (double)v6); /*0x50823c*/
  v10 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -v9, v9) + v6; /*0x508256*/
  result = v10 + v14 + v13; /*0x50825b*/
  if ( result <= 0 ) /*0x50826a*/
  {
LABEL_3:
    this->HouseClass_field_160B4 = 0.33000001; /*0x508271*/
    this->totalOwnedAircraftCost = 0.33000001; /*0x508277*/
    this->totalOwnedVehicleCost = 0.33000001; /*0x50827d*/
    return 1051260355; /*0x50826c*/
  }
  else
  {
    v12 = (double)result; /*0x508288*/
    this->totalOwnedVehicleCost = (double)v13 / v12; /*0x508292*/
    this->totalOwnedAircraftCost = (double)v14 / v12; /*0x50829e*/
    this->HouseClass_field_160B4 = (double)v10 / v12; /*0x5082aa*/
  }
  return result; /*0x508283*/
}


// ==== 0x005082C0  HouseClass::FindAutoBuildLocation  this=HouseClass  sig=csp ====
void __thiscall HouseClass_FindAutoBuildLocation(_DWORD *this)
{
  int v1; // esi
  int v2; // edi
  int v3; // ebp
  int v4; // ebx
  int v5; // eax
  __int16 *v6; // esi
  int v7; // ecx
  int v8; // edi
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int16 v12; // dx
  _DWORD *v13; // eax
  int v14; // edx
  _DWORD *v15; // esi
  __int16 v16; // cx
  _DWORD *v17; // ebp
  int v18; // ecx
  __int64 v19; // rax
  int v20; // edi
  bool v21; // bl
  bool IsCellVisible; // al
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
  _DWORD *v60; // esi
  _DWORD *v61; // edi
  int v62; // eax
  int v63; // ecx
  int v64; // eax
  _DWORD *v65; // eax
  int v66; // ebp
  int v67; // ebx
  _DWORD *v68; // esi
  _DWORD *v69; // edi
  int v70; // eax
  int v71; // ecx
  int v72; // eax
  _DWORD *v73; // eax
  _DWORD *v74; // ecx
  _DWORD *v75; // eax
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
  int v86; // [esp+1Ch] [ebp-104h] BYREF
  int v87; // [esp+20h] [ebp-100h]
  int v88; // [esp+24h] [ebp-FCh] BYREF
  bool v89; // [esp+2Ah] [ebp-F6h]
  bool v90; // [esp+2Bh] [ebp-F5h]
  unsigned int i; // [esp+2Ch] [ebp-F4h]
  void **v92; // [esp+30h] [ebp-F0h] BYREF
  void *Block; // [esp+34h] [ebp-ECh]
  int v94; // [esp+38h] [ebp-E8h]
  char v95; // [esp+3Dh] [ebp-E3h]
  int v96; // [esp+40h] [ebp-E0h]
  int v97; // [esp+44h] [ebp-DCh]
  int v98; // [esp+48h] [ebp-D8h]
  void **v99; // [esp+4Ch] [ebp-D4h] BYREF
  void *v100; // [esp+50h] [ebp-D0h]
  int v101; // [esp+54h] [ebp-CCh]
  char v102; // [esp+59h] [ebp-C7h]
  int v103; // [esp+5Ch] [ebp-C4h]
  int v104; // [esp+60h] [ebp-C0h]
  int v105; // [esp+64h] [ebp-BCh]
  int v106; // [esp+68h] [ebp-B8h]
  _DWORD *v107; // [esp+6Ch] [ebp-B4h]
  int BuildableFromArray; // [esp+70h] [ebp-B0h]
  int v109; // [esp+74h] [ebp-ACh]
  int v110; // [esp+78h] [ebp-A8h]
  int v111; // [esp+7Ch] [ebp-A4h]
  int v112; // [esp+80h] [ebp-A0h]
  __int16 v113; // [esp+84h] [ebp-9Ch]
  _DWORD *v114; // [esp+88h] [ebp-98h]
  _DWORD *v115; // [esp+8Ch] [ebp-94h]
  int v116; // [esp+90h] [ebp-90h] BYREF
  int v117; // [esp+94h] [ebp-8Ch] BYREF
  int v118; // [esp+98h] [ebp-88h] BYREF
  int v119; // [esp+9Ch] [ebp-84h]
  _DWORD v120[4]; // [esp+A0h] [ebp-80h]
  _DWORD v121[4]; // [esp+B0h] [ebp-70h]
  _DWORD v122[4]; // [esp+C0h] [ebp-60h]
  int v123; // [esp+D0h] [ebp-50h] BYREF
  int v124; // [esp+D4h] [ebp-4Ch] BYREF
  int v125; // [esp+D8h] [ebp-48h] BYREF
  int v126[3]; // [esp+DCh] [ebp-44h] BYREF
  int v127; // [esp+E8h] [ebp-38h]
  int v128; // [esp+F8h] [ebp-28h]
  int v129; // [esp+108h] [ebp-18h]
  int v130; // [esp+118h] [ebp-8h]

  v115 = this + 5589; /*0x5082cf*/
  v1 = this->q15D5 - 1; /*0x5082d9*/
  v2 = this->teamDelayTimer; /*0x5082da*/
  v107 = this; /*0x5082dd*/
  --v2; /*0x5082e1*/
  v3 = this->q15D7 + 2; /*0x5082e9*/
  v4 = this->q15D8; /*0x5082ec*/
  v114 = this + 5593; /*0x5082f5*/
  v4 += 2; /*0x5082fc*/
  this->HouseClass_field_timer_A = v1; /*0x5082ff*/
  this->q15DA = v2; /*0x508305*/
  this->q15DB = v3; /*0x508308*/
  this->HouseClass_field_timer_B = v4; /*0x50830b*/
  BaseNodeClass::Vector_Constructor(&v99, 0, 0); /*0x50830e*/
  v99 = &vt_DynamicVectorClass_BaseNodeClass; /*0x50831b*/
  v104 = 10; /*0x508323*/
  v103 = 0; /*0x50832b*/
  BaseNodeClass::Vector_Constructor(&v92, 0, 0); /*0x508333*/
  LOWORD(v81) = v1; /*0x508338*/
  HIWORD(v81) = v2; /*0x50833d*/
  v5 = v81; /*0x508342*/
  LOWORD(v81) = v1; /*0x508346*/
  v122[0] = v5; /*0x50834b*/
  HIWORD(v81) = v4 + v2 - 1; /*0x508356*/
  v122[1] = v81; /*0x50835f*/
  LOWORD(v81) = v1; /*0x508369*/
  HIWORD(v81) = v2 + 1; /*0x50836e*/
  LOWORD(v3) = v1 + v3; /*0x508377*/
  v122[2] = v81; /*0x508379*/
  v92 = &vt_DynamicVectorClass_BaseNodeClass; /*0x508388*/
  LOWORD(v81) = v3 - 1; /*0x508390*/
  v122[3] = v81; /*0x508399*/
  LOWORD(v81) = v3; /*0x5083a0*/
  HIWORD(v81) = v2; /*0x5083a5*/
  v120[0] = v81; /*0x5083ae*/
  LOWORD(v81) = v3; /*0x5083b5*/
  HIWORD(v81) = v4 + v2 - 1; /*0x5083ba*/
  v120[1] = v81; /*0x5083c3*/
  LOWORD(v81) = v1; /*0x5083ca*/
  v6 = (__int16 *)v107; /*0x5083cf*/
  v7 = v81; /*0x5083d8*/
  LOWORD(v81) = v3 - 1; /*0x5083e6*/
  v120[2] = v7; /*0x5083f4*/
  v97 = 10; /*0x5083fe*/
  v96 = 0; /*0x508406*/
  v120[3] = v81; /*0x50840e*/
  BuildableFromArray = HouseClass::FirstBuildableFromArray((char *)MEMORY[0x8871E0] + 2640); /*0x508420*/
  v8 = HouseClass::FirstBuildableFromArray((char *)MEMORY[0x8871E0] + 2696); /*0x508440*/
  v9 = HouseClass::FirstBuildableFromArray((char *)MEMORY[0x8871E0] + 2668); /*0x508443*/
  v121[0] = v8; /*0x508448*/
  v121[1] = v8; /*0x50844f*/
  v121[2] = v9; /*0x508464*/
  v121[3] = v9; /*0x50846b*/
  v82 = 0; /*0x508472*/
  v119 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v6 + 11176) + 283); /*0x508488*/
  for ( i = 0; (int)i < 16; i += 4 ) /*0x50848f*/
  {
    v10 = i; /*0x508493*/
    v11 = v122[i / 4]; /*0x50849d*/
    v12 = v120[i / 4]; /*0x5084a4*/
    v98 = dword_7EA790[i / 4]; /*0x5084ac*/
    v86 = v11; /*0x5084b2*/
    v87 = 0; /*0x5084b6*/
    v83 = 0; /*0x5084ba*/
    v105 = 0; /*0x5084be*/
    v113 = v12; /*0x5084c2*/
    while ( (_WORD)v11 != v113 || HIWORD(v86) != *(_WORD *)((char *)v120 + v10 + 2) ) /*0x5084e1*/
    {
      v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v86); /*0x5084f1*/
      v14 = *(int *)((char *)&dword_7EA7A0 + v10) & 7; /*0x508501*/
      v15 = v13; /*0x508504*/
      v16 = LOWORD(MEMORY[0x89F688][v14]) + v86; /*0x508506*/
      LOWORD(v14) = HIWORD(MEMORY[0x89F688][v14]); /*0x508515*/
      LOWORD(v112) = v16; /*0x50851d*/
      HIWORD(v112) = HIWORD(v86) + v14; /*0x508537*/
      v118 = v112; /*0x508546*/
      v17 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v118); /*0x508559*/
      v18 = v15[59]; /*0x508564*/
      v19 = *((char *)v15 + 283) - v119; /*0x50856a*/
      v20 = v17[59]; /*0x50856b*/
      v90 = (int)((HIDWORD(v19) ^ v19) - HIDWORD(v19)) <= 2; /*0x508578*/
      if ( v18 == 3 || v18 == 2 || v18 == 8 || v20 == 3 || v20 == 2 || (v85 = 1, v20 == 8) ) /*0x50859e*/
        v85 = 0; /*0x5085a0*/
      v89 = v15[17] == -1; /*0x5085ad*/
      if ( Cell::IsBridge(v15) || (v79 = 1, Cell::IsBridge(v17)) ) /*0x5085bd*/
        v79 = 0; /*0x5085cb*/
      if ( CellClass::FindInfantry(v15, 0) || (v84 = 1, CellClass::FindInfantry(v17, 0)) ) /*0x5085e0*/
        v84 = 0; /*0x5085ee*/
      v21 = *((_BYTE *)v15 + 284) == 0; /*0x508607*/
      IsCellVisible = LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v86, 1); /*0x50860a*/
      if ( !v90 || !v85 ) /*0x508621*/
        goto LABEL_36; /*0x508621*/
      if ( !v89 || !v79 || !v84 || !v21 || !IsCellVisible ) /*0x508645*/
      {
        if ( v79 && v84 && IsCellVisible ) /*0x508688*/
        {
          v80 = 0; /*0x50868e*/
          ++v105; /*0x508694*/
        }
        else
        {
LABEL_36:
          v80 = 1; /*0x5086cd*/
          if ( v105 > 0 ) /*0x5086d8*/
          {
            v80 = 0; /*0x5086da*/
            v105 = 0; /*0x5086df*/
          }
        }
        if ( v87 >= 5 || !v80 ) /*0x5086a7*/
        {
          v24 = v82; /*0x5086af*/
          v25 = 0; /*0x5086b6*/
          v26 = v87 / 2 - 1; /*0x5086ba*/
          v88 = v82; /*0x5086bb*/
          v106 = v26; /*0x5086c1*/
          if ( v87 > 0 ) /*0x5086c5*/
          {
            while ( 1 ) /*0x5086ef*/
            {
              if ( v25 == v26 && v80 ) /*0x5086fb*/
              {
                LOBYTE(v127) = 0; /*0x50870b*/
                v27 = *(_DWORD *)(v121[i / 4] + 3576); /*0x508720*/
                if ( v96 < v94 /*0x508755*/
                  || (v95 || !v94)
                  && v97 > 0
                  && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v92[2])(&v92, v97 + v94, 0) )
                {
                  v28 = v96++; /*0x508760*/
                  v29 = (char *)Block + 16 * v28; /*0x50876e*/
                  v30 = v127; /*0x508770*/
                  *v29 = v27; /*0x508777*/
                  v29[1] = v24; /*0x508779*/
                  v29[2] = v30; /*0x50877c*/
                  v29[3] = 0; /*0x50877f*/
                }
                v25 += 3; /*0x508786*/
                v31 = v98 & 7; /*0x508789*/
                v32 = (_WORD *)(4 * v31 + 9041544); /*0x508794*/
                v33 = v24 + LOWORD(MEMORY[0x89F688][v31]); /*0x50879b*/
                LOWORD(v31) = HIWORD(v88) + HIWORD(MEMORY[0x89F688][v31]); /*0x5087a5*/
                v34 = *v32 + *v32 + v33; /*0x5087ae*/
                LOWORD(v32) = v32[1]; /*0x5087b1*/
                LOWORD(v111) = v34; /*0x5087bb*/
                HIWORD(v111) = v31 + (_WORD)v32 + (_WORD)v32; /*0x5087c0*/
                v24 = v111; /*0x5087c5*/
              }
              else
              {
                v35 = *(_DWORD *)(BuildableFromArray + 3576); /*0x5087dc*/
                LOBYTE(v128) = 0; /*0x5087e4*/
                if ( v103 < v101 /*0x50881b*/
                  || (v102 || !v101)
                  && v104 > 0
                  && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v99[2])(&v99, v104 + v101, 0) )
                {
                  v36 = v103++; /*0x508826*/
                  v37 = (char *)v100 + 16 * v36; /*0x508834*/
                  v38 = v128; /*0x508836*/
                  *v37 = v35; /*0x50883d*/
                  v37[1] = v24; /*0x50883f*/
                  v37[2] = v38; /*0x508842*/
                  v37[3] = 0; /*0x508845*/
                }
                ++v25; /*0x50884c*/
                v39 = v98 & 7; /*0x50884d*/
                v40 = v24 + LOWORD(MEMORY[0x89F688][v39]); /*0x50885f*/
                LOWORD(v39) = HIWORD(MEMORY[0x89F688][v39]); /*0x508862*/
                LOWORD(v109) = v40; /*0x508866*/
                HIWORD(v109) = HIWORD(v88) + v39; /*0x508870*/
                v24 = v109; /*0x508875*/
              }
              v88 = v24; /*0x50887d*/
              if ( v25 >= v87 ) /*0x508883*/
                break; /*0x508883*/
              v26 = v106; /*0x5086e9*/
            }
          }
        }
        v87 = 0; /*0x508889*/
        v83 = 0; /*0x508891*/
        goto LABEL_57; /*0x508891*/
      }
      if ( !v83 ) /*0x50864d*/
      {
        v23 = v86; /*0x50864f*/
        v83 = 1; /*0x508653*/
        v87 = 1; /*0x508658*/
        v82 = v86; /*0x508660*/
        goto LABEL_58; /*0x508664*/
      }
      ++v87; /*0x508669*/
LABEL_57:
      v23 = v86; /*0x508896*/
LABEL_58:
      v10 = i; /*0x50889a*/
      v41 = v98 & 7; /*0x5088a2*/
      v42 = HIWORD(MEMORY[0x89F688][v41]); /*0x5088a5*/
      LOWORD(v110) = LOWORD(MEMORY[0x89F688][v41]) + v23; /*0x5088c1*/
      HIWORD(v110) = HIWORD(v86) + v42; /*0x5088c6*/
      LOWORD(v11) = v110; /*0x5088cb*/
      v86 = v110; /*0x5088cf*/
    }
    if ( v87 >= 5 ) /*0x5088df*/
    {
      v43 = v82; /*0x5088e5*/
      v44 = 0; /*0x5088ee*/
      v88 = v82; /*0x5088f3*/
      v106 = v87 / 2 - 1; /*0x5088f9*/
      do /*0x508a90*/
      {
        if ( v44 == v106 ) /*0x508907*/
        {
          v45 = v43; /*0x508911*/
          v46 = v121[i / 4]; /*0x508919*/
          LOBYTE(v130) = 0; /*0x508926*/
          v47 = *(_DWORD *)(v46 + 3576); /*0x50892e*/
          if ( v96 < v94 /*0x50895f*/
            || (v95 || !v94)
            && v97 > 0
            && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v92[2])(&v92, v97 + v94, 0) )
          {
            v48 = v96++; /*0x50896a*/
            v49 = (char *)Block + 16 * v48; /*0x508978*/
            v50 = v130; /*0x50897a*/
            *v49 = v47; /*0x508981*/
            v49[1] = v45; /*0x508983*/
            v49[2] = v50; /*0x508986*/
            v49[3] = 0; /*0x508989*/
          }
          v44 += 3; /*0x50899e*/
          v51 = (_WORD *)(4 * (v98 & 7) + 9041544); /*0x5089a1*/
          v117 = *CellStruct::Add(&v88, &v123, v51); /*0x5089b8*/
          v116 = *CellStruct::Add(&v117, v126, v51); /*0x5089d8*/
          v52 = CellStruct::Add(&v116, &v125, v51); /*0x5089e6*/
        }
        else
        {
          v53 = v43; /*0x5089f3*/
          v54 = *(_DWORD *)(BuildableFromArray + 3576); /*0x5089f9*/
          LOBYTE(v129) = 0; /*0x508a03*/
          if ( v103 < v101 /*0x508a36*/
            || (v102 || !v101)
            && v104 > 0
            && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v99[2])(&v99, v104 + v101, 0) )
          {
            v55 = v103++; /*0x508a41*/
            v56 = (char *)v100 + 16 * v55; /*0x508a4f*/
            v57 = v129; /*0x508a51*/
            *v56 = v54; /*0x508a58*/
            v56[1] = v53; /*0x508a5a*/
            v56[2] = v57; /*0x508a5d*/
            v56[3] = 0; /*0x508a60*/
          }
          ++v44; /*0x508a67*/
          v52 = CellStruct::Add(&v88, &v124, (_WORD *)(4 * (v98 & 7) + 9041544)); /*0x508a7f*/
        }
        v43 = *v52; /*0x508a84*/
        v88 = *v52; /*0x508a8c*/
      }
      while ( v44 < v87 ); /*0x508a90*/
    }
  }
  v58 = 0; /*0x508aae*/
  if ( v103 > 0 ) /*0x508ab2*/
  {
    v59 = 0; /*0x508ab8*/
    v60 = v107 + 5569; /*0x508aba*/
    do /*0x508b24*/
    {
      v61 = (char *)v100 + v59; /*0x508ac7*/
      v62 = v60[2]; /*0x508aca*/
      if ( v60[4] < v62 /*0x508aec*/
        || (*((_BYTE *)v60 + 13) || !v62)
        && (v63 = v60[5], v63 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v60 + 8))(v60, v63 + v62, 0) )
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
    while ( v58 < v103 ); /*0x508b24*/
  }
  v66 = 0; /*0x508b2a*/
  if ( v96 > 0 ) /*0x508b2e*/
  {
    v67 = 0; /*0x508b34*/
    v68 = v107 + 5569; /*0x508b36*/
    do /*0x508ba0*/
    {
      v69 = (char *)Block + v67; /*0x508b43*/
      v70 = v68[2]; /*0x508b46*/
      if ( v68[4] < v70 /*0x508b68*/
        || (*((_BYTE *)v68 + 13) || !v70)
        && (v71 = v68[5], v71 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v68 + 8))(v68, v71 + v70, 0) )
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
    while ( v66 < v96 ); /*0x508ba0*/
  }
  v74 = v114; /*0x508ba2*/
  v75 = v115; /*0x508ba9*/
  v76 = *v114; /*0x508bb5*/
  v92 = &VectorClass<BaseNodeClass>::`vftable'; /*0x508bb7*/
  *v115 = v76; /*0x508bbb*/
  v75[1] = v74[1]; /*0x508bc0*/
  v77 = v74[2]; /*0x508bc3*/
  v78 = v74[3]; /*0x508bc6*/
  v75[2] = v77; /*0x508bc9*/
  v75[3] = v78; /*0x508bcc*/
  if ( Block && v95 ) /*0x508bdd*/
  {
    __3_YAXPAX_Z(Block); /*0x508be0*/
    Block = 0; /*0x508be8*/
  }
  v99 = &VectorClass<BaseNodeClass>::`vftable'; /*0x508bf4*/
  v95 = 0; /*0x508bfb*/
  v94 = 0; /*0x508c02*/
  if ( v100 && v102 ) /*0x508c13*/
    __3_YAXPAX_Z(v100); /*0x508c16*/
}


// ==== 0x00508C30  HouseClass::UpdatePower  this=HouseClass  sig=csp ====
char __thiscall HouseClass::UpdatePower(int this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ebp
  int v5; // edi
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  char v12; // [esp+Bh] [ebp-Dh]
  int v13; // [esp+10h] [ebp-8h]
  bool v14; // [esp+14h] [ebp-4h]

  v2 = *(_DWORD *)(this + 21412); /*0x508c39*/
  v3 = *(_DWORD *)(this + 21416); /*0x508c3f*/
  v14 = v2 < v3 && v3 && (!v2 || (double)v2 / (double)*(int *)(this + 21416) < 1.0); /*0x508c75*/
  *(_BYTE *)(this + 22392) = 0; /*0x508c79*/
  *(_DWORD *)(this + 21412) = 0; /*0x508c7f*/
  *(_DWORD *)(this + 21416) = 0; /*0x508c85*/
  v4 = 0; /*0x508c8f*/
  v12 = 0; /*0x508c93*/
  v13 = *(_DWORD *)(this + 120); /*0x508c97*/
  if ( v13 > 0 ) /*0x508c9b*/
  {
    do /*0x508ca5*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)(this + 108) + 4 * v4); /*0x508ca5*/
      if ( v5 && !*(_BYTE *)(v5 + 129) && *(_BYTE *)(v5 + 116) ) /*0x508cb8*/
      {
        if ( MEMORY[0xA8B238][0] ) /*0x508cc5*/
        {
          if ( (#375 *)this != HouseClass_Player ) /*0x508ce4*/
            goto LABEL_18; /*0x508ce4*/
        }
        else if ( !*(_BYTE *)(this + 492) && !*(_BYTE *)(this + 493) ) /*0x508cd5*/
        {
LABEL_18:
          *(_DWORD *)(this + 21412) += BuildingClass::GetPowerOutput((int *)v5); /*0x508cf2*/
          *(_DWORD *)(this + 21416) += BuildingClass::GetPowerDrain((_BYTE *)v5); /*0x508d18*/
          if ( ObjectClass::HasLocation((_DWORD *)v5) && BuildingClass::GetPowerOutput((int *)v5) > 0 ) /*0x508d30*/
            v12 = 1; /*0x508d32*/
          goto LABEL_21; /*0x508d32*/
        }
        if ( *(_BYTE *)(v5 + 1051) || MEMORY[0xA8B238][0] ) /*0x508cf0*/
          goto LABEL_18; /*0x508cf0*/
      }
LABEL_21:
      ++v4; /*0x508d37*/
    }
    while ( v4 < v13 ); /*0x508ca5*/
  }
  *(_BYTE *)(this + 22395) = v12; /*0x508d45*/
  v6 = *(_DWORD *)(this + 676); /*0x508d50*/
  v7 = *(_DWORD *)(this + 684); /*0x508d56*/
  if ( v6 != -1 ) /*0x508d5f*/
  {
    if ( (int)MEMORY[0xA8ED84] - v6 >= v7 ) /*0x508d6b*/
      goto LABEL_26; /*0x508d6b*/
    v7 -= (int)MEMORY[0xA8ED84] - v6; /*0x508d6d*/
  }
  if ( v7 ) /*0x508d71*/
  {
LABEL_27:
    *(_DWORD *)(this + 21412) = 0; /*0x508d79*/
    goto LABEL_28; /*0x508d79*/
  }
LABEL_26:
  if ( v12 ) /*0x508d77*/
    goto LABEL_27; /*0x508d77*/
LABEL_28:
  nullsub_5(this); /*0x508d7f*/
  HouseClass::UpdateTeamProductionSpeed((void *)this); /*0x508d88*/
  v8 = *(_DWORD *)(this + 21412); /*0x508d8d*/
  v9 = *(_DWORD *)(this + 21416); /*0x508d93*/
  v10 = v8 < v9 && v9 && (!v8 || (double)*(int *)(this + 21412) / (double)*(int *)(this + 21416) < 1.0); /*0x508dc9*/
  if ( v14 != v10 ) /*0x508dd7*/
    LOBYTE(v10) = SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(this); /*0x508ddb*/
  *(_BYTE *)(this + 22393) = 1; /*0x508de0*/
  return v10; /*0x508de7*/
}


// ==== 0x00508DF0  HouseClass::CanTogglePower  this=HouseClass  sig=csp ====
#375 *__thiscall sub_508DF0(int this)
{
  #375 *result; // eax
  int v2; // eax
  int v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // edi
  int v7; // edx
  _DWORD *v8; // esi
  int v9; // eax
  int v10; // [esp+0h] [ebp-Ch]

  *(_BYTE *)(this + 22393) = 0; /*0x508df0*/
  result = HouseClass_Player; /*0x508df7*/
  if ( (#375 *)this == HouseClass_Player ) /*0x508e01*/
  {
    v2 = *(_DWORD *)(this + 696); /*0x508e07*/
    v3 = *(_DWORD *)(this + 688); /*0x508e10*/
    LOBYTE(v10) = 0; /*0x508e1a*/
    if ( v3 != -1 ) /*0x508e1f*/
    {
      if ( (int)MEMORY[0xA8ED84] - v3 >= v2 ) /*0x508e2b*/
        goto LABEL_6; /*0x508e2b*/
      v2 -= (int)MEMORY[0xA8ED84] - v3; /*0x508e2d*/
    }
    if ( v2 ) /*0x508e31*/
    {
LABEL_30:
      result = (#375 *)HouseClass::updateAlliedStatus(&MEMORY[0x87F7E8]); /*0x508f2f*/
      if ( (_BYTE)result != (_BYTE)v10 ) /*0x508f43*/
        return (#375 *)HouseClass::SetRadarVisibility(v10); /*0x508f4f*/
      return result; /*0x508f4f*/
    }
LABEL_6:
    if ( *((_BYTE *)MEMORY[0xA8B230] + 13476) ) /*0x508e3c*/
      goto LABEL_29; /*0x508e3c*/
    v4 = *(_DWORD *)(this + 21412); /*0x508e4a*/
    v5 = *(_DWORD *)(this + 21416); /*0x508e50*/
    if ( v4 >= v5 || !v5 || v4 && (double)*(int *)(this + 21412) / (double)*(int *)(this + 21416) >= 1.0 ) /*0x508e81*/
    {
      v6 = *(_DWORD *)(this + 120); /*0x508e87*/
      v7 = 0; /*0x508e8a*/
      if ( v6 > 0 ) /*0x508e8e*/
      {
        v8 = *(_DWORD **)(this + 108); /*0x508e94*/
        while ( 1 ) /*0x508e9d*/
        {
          v9 = *v8; /*0x508e9d*/
          if ( *v8 /*0x508f06*/
            && *(_BYTE *)(v9 + 1632)
            && *(_BYTE *)(*(_DWORD *)(v9 + 1312) + 5796)
            && !*(_BYTE *)(v9 + 129)
            && *(_BYTE *)(v9 + 116)
            && (!MEMORY[0xA8B238][0] && !*(_BYTE *)(this + 492) && !*(_BYTE *)(this + 493)
             || *(_BYTE *)(v9 + 1051)
             || MEMORY[0xA8B238][0])
            && *(_DWORD *)(v9 + 172) != 19
            && *(_DWORD *)(v9 + 180) != 19 )
          {
            break; /*0x508f06*/
          }
          ++v7; /*0x508f08*/
          ++v8; /*0x508f09*/
          if ( v7 >= v6 ) /*0x508f0e*/
            goto LABEL_30; /*0x508f0e*/
        }
        if ( !*(_DWORD *)(v9 + 1284) && !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v9 + 468))(*v8) ) /*0x508f20*/
LABEL_29:
          LOBYTE(v10) = 1; /*0x508f2a*/
      }
    }
    goto LABEL_30; /*0x508f2a*/
  }
  return result; /*0x508f54*/
}


// ==== 0x00508F60  HouseClass::ToggleGapGeneratorReveal  this=HouseClass  sig=csp ====
char __thiscall HouseClass::ToggleGapGeneratorReveal(int this)
{
  int v2; // edx
  int v3; // ebp
  int *v4; // edi
  int v5; // ecx
  char result; // al

  v2 = 0; /*0x508f64*/
  *(_BYTE *)(this + 22393) = 0; /*0x508f67*/
  v3 = *(_DWORD *)(this + 120); /*0x508f6e*/
  if ( v3 <= 0 ) /*0x508f73*/
  {
LABEL_17:
    result = *(_BYTE *)(this + 22394); /*0x509002*/
    if ( result ) /*0x50900a*/
    {
      ShroudClass::Reset(&MEMORY[0x87F7E8], (IUnknown *)this); /*0x509012*/
      *(_BYTE *)(this + 22394) = 0; /*0x509017*/
      result = (char)HouseClass_Player; /*0x50901e*/
      if ( (IUnknown *)this == HouseClass_Player ) /*0x509025*/
        return PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 548), 0x2000, 1.0, 0); /*0x50903f*/
    }
    return result; /*0x50903f*/
  }
  v4 = *(int **)(this + 108); /*0x508f79*/
  while ( 1 ) /*0x508f7c*/
  {
    v5 = *v4; /*0x508f7c*/
    if ( !*v4 || !*(_BYTE *)(*(_DWORD *)(v5 + 1312) + 5797) || *(_BYTE *)(v5 + 129) || !*(_BYTE *)(v5 + 116) ) /*0x508f9b*/
      goto LABEL_16; /*0x508fa0*/
    if ( MEMORY[0xA8B238] ) /*0x508fa9*/
    {
      if ( (IUnknown *)this != HouseClass_Player ) /*0x508fcc*/
        goto LABEL_14; /*0x508fcc*/
    }
    else if ( !*(_BYTE *)(this + 492) && !*(_BYTE *)(this + 493) ) /*0x508fbd*/
    {
      goto LABEL_14; /*0x508fbd*/
    }
    if ( !*(_BYTE *)(v5 + 1051) && !MEMORY[0xA8B238] ) /*0x508fdf*/
      goto LABEL_16; /*0x508fdf*/
LABEL_14:
    if ( *(_DWORD *)(v5 + 172) != 19 && *(_DWORD *)(v5 + 180) != 19 ) /*0x508ff4*/
      break; /*0x508ff4*/
LABEL_16:
    ++v2; /*0x508ff6*/
    ++v4; /*0x508ff7*/
    if ( v2 >= v3 ) /*0x508ffc*/
      goto LABEL_17; /*0x508ffc*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 468))(v5) ) /*0x50904a*/
    goto LABEL_17; /*0x509052*/
  result = *(_BYTE *)(this + 22394); /*0x509054*/
  if ( !result ) /*0x50905c*/
  {
    LayerClass::Reveal(&MEMORY[0x87F7E8], this); /*0x509064*/
    *(_BYTE *)(this + 22394) = 1; /*0x509069*/
    result = (char)HouseClass_Player; /*0x509070*/
    if ( (IUnknown *)this == HouseClass_Player ) /*0x509077*/
      return PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 544), 0x2000, 1.0, 0); /*0x509090*/
  }
  return result; /*0x509044*/
}


// ==== 0x005090A0  TacticalClass::updateVisibility  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::updateVisibility(int *this)
{
  int v1; // esi
  int *i; // edi
  int v3; // eax
  int v4; // eax

  v1 = 0; /*0x5090a2*/
  for ( i = this + 132; ; ++i ) /*0x5090a4*/
  {
    v3 = *i; /*0x5090aa*/
    if ( !*i ) /*0x5090aa*/
    {
      v4 = __2_YAPAXI_Z(64); /*0x5090b2*/
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
bool __thiscall sub_5090F0(unsigned int *this)
{
  unsigned int v1; // eax
  int v2; // eax

  v1 = this->q20C; /*0x5090f0*/
  if ( v1 >= 0xC ) /*0x5090f8*/
    return 0; /*0x50912a*/
  v2 = *(this + v1 + 132); /*0x5090ff*/
  return *(_DWORD *)(v2 + 56) < MEMORY[0x8871E0]->InfantryVirus && *(_DWORD *)(v2 + 36) == -1; /*0x509126*/
}


// ==== 0x00509130  HouseClass::AcquiredThreatNode  this=HouseClass  sig=csp ====
void __thiscall HouseClass::AcquiredThreatNode(_BYTE *this)
{
  this->hasThreatNode = 1; /*0x509130*/
}


// ==== 0x00509140  HouseClass::UpdateProduction  this=AbstractClass  sig=csp ====
int __thiscall HouseClass::UpdateProduction(int this, IUnknown *aP1, AbstractClass *aP2, int a4)
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
  IUnknown *v15; // eax

  result = (int)&aP1[-1].field_1602A[3]; /*0x509145*/
  switch ( (unsigned int)aP1 ) /*0x509161*/
  {
    case 3u: /*0x509161*/
      v6 = *(_DWORD *)(this + 21420); /*0x50919b*/
      goto LABEL_10; /*0x50919b*/
    case 7u: /*0x509161*/
      if ( a4 == 5 ) /*0x50916d*/
        v6 = *(_DWORD *)(this + 21452); /*0x50916f*/
      else
        v6 = *(_DWORD *)(this + 21436); /*0x509177*/
      goto LABEL_10; /*0x509175*/
    case 0x10u: /*0x509161*/
      v6 = *(_DWORD *)(this + 21424); /*0x509193*/
      goto LABEL_10; /*0x509199*/
    case 0x28u: /*0x509161*/
      if ( (_BYTE)aP2 ) /*0x509181*/
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
                ProductionClass::StartTimer(v6, 0); /*0x509287*/
            }
            else
            {
              FactoryClass::StartProduction(v6, 0); /*0x50924d*/
              if ( HouseClass_Player == (IUnknown *)this ) /*0x509258*/
              {
                v15 = (IUnknown *)globalHelper_0ABCD0((int)aP1, a4, (int)aP2); /*0x509263*/
                Sidebar::ActivateTab((int)&MEMORY[0x87F7E8], v15); /*0x50926e*/
              }
            }
          }
          else
          {
            FactoryClass::AbandonProduction(v6); /*0x50921c*/
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
int __thiscall sub_5092F0(HouseClass *this, int a2)
{
  int result; // eax
  int i; // edi
  int v5; // ecx
  ObjectClass *v6; // eax
  int v7; // eax
  _DWORD v8[3]; // [esp+8h] [ebp-Ch] BYREF

  result = a2; /*0x5092f0*/
  this->radarVisibleTo[0] |= 1 << *(_DWORD *)(*(_DWORD *)(a2 + 52) + 184); /*0x509313*/
  if ( a2 == HouseClass_Player.field_0 ) /*0x509321*/
  {
    for ( i = 0; i < *(int *)&HouseClass_Player.__pad_5568[22996]; ++i ) /*0x509330*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22984] + 4 * i); /*0x509337*/
      if ( v5 && !*(_BYTE *)(v5 + 129) && *(HouseClass **)(v5 + 540) == this ) /*0x50934e*/
      {
        v8[0] = *(_DWORD *)(v5 + 156); /*0x509360*/
        v8[1] = *(_DWORD *)(v5 + 160); /*0x50936a*/
        v6 = *(ObjectClass **)v5; /*0x50936e*/
        v8[2] = *(_DWORD *)(v5 + 164); /*0x509373*/
        v7 = (*(int (__thiscall **)(int))&v6->hasParachute)(v5); /*0x509377*/
        MapClass::RevealArea0( /*0x50938e*/
          (int *)&stru_87C374.__pad_14B0[8132],
          (IUnknown *)v8,
          *(MouseClass **)(v7 + 1512),
          this,
          0,
          0,
          0,
          1,
          1);
      }
    }
    return MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2); /*0x5093a4*/
  }
  return result; /*0x5093a9*/
}


// ==== 0x005093C0  ObjectClass::method_5093C0  this=ObjectClass  sig=csp ====
int __thiscall sub_5093C0(int *this, int a2)
{
  int v2; // esi
  int result; // eax
  _DWORD *i; // edx

  v2 = this->q1585; /*0x5093c2*/
  result = 0; /*0x5093c8*/
  if ( v2 > 0 ) /*0x5093cd*/
  {
    for ( i = (_DWORD *)this->q1582; *i != a2; i += 2 ) /*0x5093d9*/
    {
      if ( ++result >= v2 ) /*0x5093e5*/
        return result; /*0x5093e5*/
    }
    return UpdateHouseClassAnger((unsigned int)this, (int)i, -*(_DWORD *)(this->q1582 + 8 * result + 4), a2); /*0x5093f5*/
  }
  return result; /*0x5093e7*/
}


// ==== 0x00509400  HouseClass::UpdateFogVisibility  this=HouseClass  sig=csp ====
int __thiscall HouseClass_UpdateFogVisibility(int this)
{
  int result; // eax
  __int16 *v3; // esi
  int v4; // ebp
  int v5; // eax
  int v6; // esi
  char v7; // cl
  int v8; // ecx
  int v9; // esi
  int v10; // edi
  int v11; // edx
  int v12; // ecx
  bool v13; // sf
  _DWORD *v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // edi
  int v19; // edx
  int v20; // ecx
  _DWORD *v21; // ecx
  int i; // [esp+8h] [ebp-4h]

  memset((void *)(this + 22500), 0, 0x10810u); /*0x509412*/
  result = MEMORY[0xA8EC88] - 1; /*0x509419*/
  for ( i = MEMORY[0xA8EC88] - 1; i >= 0; --i ) /*0x509420*/
  {
    v3 = (__int16 *)*((_DWORD *)MEMORY[0xA8EC7C] + result); /*0x50942e*/
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
            if ( *((_DWORD *)v3 + 343) != MEMORY[0xA8EF98] ) /*0x5094a5*/
            {
              v5 = Cell::PosToLinearIndex(v3 + 686); /*0x5094be*/
              v6 = *((_DWORD *)v3 + 135); /*0x5094c3*/
              if ( v6 != this ) /*0x5094cb*/
              {
                v7 = *(_BYTE *)(this + 492); /*0x5094d9*/
                if ( !MEMORY[0xA8B238][0] ) /*0x5094df*/
                  v7 = v7 || *(_BYTE *)(this + 493); /*0x5094f3*/
                if ( !v7 /*0x50952c*/
                  || !v6
                  || v6 != this
                  && (v8 = *(_DWORD *)(v6 + 48), v8 != *(_DWORD *)(this + 48))
                  && (v8 == -1 || (*(_DWORD *)(this + 22408) & (1 << v8)) == 0) )
                {
                  v9 = 0; /*0x509532*/
                  v10 = 9; /*0x509534*/
                  do /*0x509565*/
                  {
                    v11 = v4 >> MEMORY[0x8243EC][v9]; /*0x509541*/
                    v12 = v5 + MEMORY[0x8243C8][v9]; /*0x509549*/
                    v13 = v11 + *(_DWORD *)(this + 4 * v12 + 22500) < 0; /*0x50954b*/
                    *(_DWORD *)(this + 4 * v12 + 22500) += v11; /*0x50954b*/
                    v14 = (_DWORD *)(this + 4 * v12 + 22500); /*0x509552*/
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
              v19 = v4 >> MEMORY[0x8243EC][v17]; /*0x509590*/
              v20 = v16 + MEMORY[0x8243C8][v17]; /*0x509598*/
              v13 = v19 + *(_DWORD *)(this + 4 * v20 + 22500) < 0; /*0x50959a*/
              *(_DWORD *)(this + 4 * v20 + 22500) += v19; /*0x50959a*/
              v21 = (_DWORD *)(this + 4 * v20 + 22500); /*0x5095a1*/
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


// ==== 0x005095D0  TeamClass::CountActiveTeamsForType  this=AbstractClass  sig=csp ====
int __thiscall TeamClass::CountActiveTeamsForType(void *this, ObjectClass *aP1)
{
  int result; // eax
  int v3; // edi
  int *v4; // esi
  int v5; // edx

  result = 0; /*0x5095d6*/
  if ( *(_DWORD *)&MEMORY[0x89F690].__pad_579C[62156] - 1 >= 0 ) /*0x5095db*/
  {
    v3 = *(_DWORD *)&MEMORY[0x89F690].__pad_579C[62156]; /*0x5095ea*/
    v4 = (int *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62144] /*0x5095ed*/
               + 4 * (*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62156] - 1));
    do /*0x509605*/
    {
      v5 = *v4; /*0x5095f0*/
      if ( *v4 && *(void **)(v5 + 44) == this && aP1 == *(ObjectClass **)(v5 + 36) ) /*0x5095fe*/
        ++result; /*0x509600*/
      --v4; /*0x509601*/
      --v3; /*0x509604*/
    }
    while ( v3 ); /*0x509605*/
  }
  return result; /*0x50960a*/
}


// ==== 0x00509610  TriggerClass::ValidateTeamTriggerConditions  this=TriggerClass  sig=csp ====
char __thiscall TriggerClass::ValidateTeamTriggerConditions(void *this, ObjectClass *aP1)
{
  ObjectClass *v2; // esi
  _DWORD *attachedBomb; // eax
  int v5; // ebx
  int v6; // edi
  TechnoClass *v7; // esi
  bool v8; // cc
  int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h]

  v2 = aP1; /*0x509616*/
  if ( !aP1 ) /*0x50961f*/
    return 0; /*0x50961f*/
  attachedBomb = aP1[1].attachedBomb; /*0x509625*/
  if ( !attachedBomb ) /*0x50962d*/
    return 0; /*0x5096f1*/
  v11 = 0; /*0x509639*/
  if ( (int)attachedBomb[39] > 0 ) /*0x509643*/
  {
    v10 = 42; /*0x509649*/
    do /*0x509655*/
    {
      v5 = attachedBomb[v10]; /*0x509655*/
      if ( !v5 || !(*(int (__thiscall **)(int, int, int, _DWORD, void *))(*(_DWORD *)v5 + 148))(v5, 1, 1, 0, this) ) /*0x509667*/
      {
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] ) /*0x509678*/
          return 0; /*0x509678*/
        v6 = *(_DWORD *)&stru_89E138.__pad_579C[66812] - 1; /*0x50967f*/
        if ( *(_DWORD *)&stru_89E138.__pad_579C[66812] - 1 < 0 ) /*0x509684*/
          return 0; /*0x509684*/
        while ( 1 ) /*0x50968c*/
        {
          v7 = *(TechnoClass **)(*(_DWORD *)&stru_89E138.__pad_579C[66800] + 4 * v6); /*0x50968c*/
          if ( v7->focus == this /*0x5096ab*/
            && v5 == (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v7->__pad_0 + 132))(*(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66800]
                                                                                              + 4 * v6))
            && TriggerClass::EvaluateObjectForTrigger((int)aP1, v7, (int)this) )
          {
            break; /*0x5096ab*/
          }
          if ( --v6 < 0 ) /*0x5096b5*/
            return 0; /*0x5096b5*/
        }
        v2 = aP1; /*0x5096b9*/
      }
      attachedBomb = v2[1].attachedBomb; /*0x5096bd*/
      v8 = ++v11 < attachedBomb[39]; /*0x5096d5*/
      v10 += 2; /*0x5096db*/
    }
    while ( v8 ); /*0x509655*/
  }
  return 1; /*0x5096e5*/
}


// ==== 0x00509700  HouseClass::UpdateBuildState  this=HouseClass  sig=csp ====
char __thiscall HouseClass::UpdateBuildState(int this, BuildingTypeClass *aP1)
{
  int v3; // eax
  AbstractClass *v4; // ecx
  char v5; // bl
  int v6; // edi
  int v7; // edi

  LOBYTE(v3) = *(_BYTE *)(this + 492); /*0x50970b*/
  if ( !MEMORY[0xA8B238] ) /*0x509713*/
    LOBYTE(v3) = (_BYTE)v3 || *(_BYTE *)(this + 493); /*0x509727*/
  if ( (_BYTE)v3 || !MEMORY[0xA8B238] ) /*0x509733*/
    return v3; /*0x509733*/
  v3 = *(_DWORD *)(this + 484); /*0x509739*/
  switch ( v3 ) /*0x509748*/
  {
    case 0: /*0x509748*/
      v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(this + 36) + 24))(this + 36); /*0x5098b2*/
      if ( v3 < *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4864) ) /*0x5098c1*/
      {
        v3 = (aP1 == (BuildingTypeClass *)6) + 1; /*0x5098cf*/
        *(_DWORD *)(this + 484) = v3; /*0x5098d0*/
      }
      return v3; /*0x5098d0*/
    case 1: /*0x509748*/
      v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(this + 36) + 24))(this + 36); /*0x509756*/
      if ( v3 >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4864) ) /*0x509765*/
        goto LABEL_34; /*0x509765*/
      if ( aP1 == (BuildingTypeClass *)6 ) /*0x509770*/
        *(_DWORD *)(this + 484) = 2; /*0x509776*/
      return v3; /*0x509783*/
    case 2: /*0x509748*/
      v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(this + 36) + 24))(this + 36); /*0x50978d*/
      v4 = *(AbstractClass **)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x509790*/
      if ( v3 >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4864) ) /*0x50979c*/
        goto LABEL_34; /*0x50979c*/
      v5 = 0; /*0x5097a8*/
      v6 = 0; /*0x5097aa*/
      if ( *(int *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2320) <= 0 ) /*0x5097ae*/
        goto LABEL_20; /*0x5097ae*/
      break; /*0x5097ae*/
    case 3: /*0x509748*/
      v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(this + 36) + 24))(this + 36); /*0x50988a*/
      if ( v3 > *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4864) ) /*0x509899*/
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
      if ( DynamicVector::GetOrGrow( /*0x5097d1*/
             (_DWORD *)(this + 21840),
             *(DynamicVector **)(*(_DWORD *)(*(_DWORD *)&v4[64].__pad_0[4] + 4 * v6) + 3576)) <= 0 )
      {
        v4 = *(AbstractClass **)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x5097d3*/
        goto LABEL_19; /*0x5097d9*/
      }
      v4 = *(AbstractClass **)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x5097db*/
    }
    v5 = 1; /*0x5097e1*/
LABEL_19:
    ++v6; /*0x5097e3*/
  }
  while ( v6 < v4[64].uniqueId ); /*0x5097ec*/
LABEL_20:
  LOBYTE(v3) = 0; /*0x5097ee*/
  v7 = 0; /*0x5097f6*/
  if ( *(int *)v4[66].__pad_0 <= 0 ) /*0x5097fa*/
  {
LABEL_31:
    if ( aP1 != (BuildingTypeClass *)6 ) /*0x509871*/
      *(_DWORD *)(this + 484) = 1; /*0x509873*/
    return v3; /*0x509880*/
  }
  while ( 2 ) /*0x5097fe*/
  {
    if ( !(_BYTE)v3 ) /*0x5097fe*/
    {
      if ( DynamicVector::GetOrGrow( /*0x50981d*/
             (_DWORD *)(this + 21840),
             *(DynamicVector **)(*(_DWORD *)(v4[65].nextArrayIndex + 4 * v7) + 3576)) <= 0 )
      {
        v4 = *(AbstractClass **)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x50981f*/
        LOBYTE(v3) = 0; /*0x509825*/
        goto LABEL_26; /*0x509827*/
      }
      v4 = *(AbstractClass **)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x509829*/
    }
    LOBYTE(v3) = 1; /*0x50982f*/
LABEL_26:
    if ( ++v7 < *(_DWORD *)v4[66].__pad_0 ) /*0x50983a*/
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
  v3 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)1); /*0x509863*/
  if ( !v3 ) /*0x50986a*/
    goto LABEL_31; /*0x50986a*/
  return v3; /*0x509780*/
}


// ==== 0x005098F0  HouseClass::UpdateAITryFireSW  this=HouseClass  sig=csp ====
char __thiscall HouseClass::UpdateAITryFireSW(int this)
{
  int v2; // eax
  int i; // edi
  int v4; // eax
  bool v5; // zf
  CellStruct *v6; // eax
  CellStruct **v7; // eax
  CellStruct *v8; // eax
  AbstractClass *v9; // eax
  CellStruct *v11; // [esp+8h] [ebp-10h] BYREF
  int v12; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h] BYREF

  LOBYTE(v2) = *(_BYTE *)(this + 492); /*0x5098fe*/
  if ( !MEMORY[0xA8B238] ) /*0x509904*/
    LOBYTE(v2) = (_BYTE)v2 || *(_BYTE *)(this + 493); /*0x509918*/
  if ( !(_BYTE)v2 )
  {
    v2 = *(_DWORD *)(this + 612); /*0x509922*/
    for ( i = 0; i < v2; ++i )
    {
      v4 = *(_DWORD *)(*(_DWORD *)(this + 600) + 4 * i); /*0x509939*/
      if ( v4 && *(_BYTE *)(v4 + 111) )
      {
        switch ( *(_DWORD *)(*(_DWORD *)(v4 + 40) + 180) )
        {
          case 0:
            v12 = *(_DWORD *)(*(_DWORD *)(this + 600) + 4 * i); /*0x509968*/
            if ( *(_DWORD *)(this + 22016) != -1 )
            {
              v5 = *(_WORD *)(this + 21744) == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509980*/
              v11 = *(CellStruct **)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509987*/
              if ( v5 && *(_WORD *)(this + 21746) == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1198] )
              {
                v7 = (CellStruct **)(*(_DWORD *)(this + 21740) == 1
                                   ? HouseClass::FindSWBuilding((_DWORD *)this, (HouseClass *)&v13)
                                   : HouseClass::FindSWTarget(
                                       (void *)this,
                                       (HouseClass *)&v14,
                                       *(HouseClass **)(this + 21740)));
                v6 = *v7; /*0x5099cb*/
              }
              else
              {
                v6 = *(CellStruct **)(this + 21744); /*0x50999d*/
              }
              v11 = v6; /*0x5099d4*/
              if ( v6 != *(CellStruct **)&MEMORY[0xA8D63C].__pad_14B0[1196] ) /*0x5099d8*/
                goto LABEL_33; /*0x5099d8*/
            }
            break; /*0x5099d8*/
          case 2:
            HouseClass::Fire_LightningStorm(this, *(_DWORD *)(*(_DWORD *)(this + 600) + 4 * i)); /*0x509a0d*/
            break; /*0x509a12*/
          case 5:
          case 6:
          case 8:
          case 0xB:
            HouseClass::Fire_ParaDrop((_DWORD *)this, *(_DWORD *)(*(_DWORD *)(this + 600) + 4 * i)); /*0x509a34*/
            break; /*0x509a39*/
          case 7:
            HouseClass::Fire_PsyDom(this, *(_DWORD *)(*(_DWORD *)(this + 600) + 4 * i)); /*0x509a1a*/
            break; /*0x509a1f*/
          case 9:
            HouseClass::Fire_GenMutator(this, *(_DWORD *)(*(_DWORD *)(this + 600) + 4 * i)); /*0x509a27*/
            break; /*0x509a2c*/
          case 0xA:
            v5 = *(_WORD *)(this + 21752) == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509a4b*/
            v12 = *(_DWORD *)(*(_DWORD *)(this + 600) + 4 * i); /*0x509a52*/
            v11 = *(CellStruct **)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509a56*/
            if ( !v5 || *(_WORD *)(this + 21754) != *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1198] ) /*0x509a63*/
            {
              v8 = *(CellStruct **)(this + 21752); /*0x509a65*/
              goto LABEL_32; /*0x509a6b*/
            }
            if ( (*(_WORD *)(this + 21748) != *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1196] /*0x509a99*/
               || *(_WORD *)(this + 21750) != *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1198])
              && *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3808) + *(_DWORD *)(this + 21756) > *(int *)&MEMORY[0xA8D63C].__pad_14B0[664] )
            {
              v8 = *(CellStruct **)(this + 21748); /*0x509a9b*/
LABEL_32:
              v11 = v8; /*0x509aa1*/
              if ( v8 != *(CellStruct **)&MEMORY[0xA8D63C].__pad_14B0[1196] ) /*0x509aa8*/
              {
LABEL_33:
                v9 = (AbstractClass *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)(this + 596) + 16))( /*0x509aca*/
                                        this + 596,
                                        &v12);
                SuperWeapon::FireSuperWeaponHouseClass((void *)this, v9, (AbstractClass *)&v11); /*0x509acd*/
              }
              break; /*0x509acd*/
            }
            break; /*0x509acd*/
          default:
            break;
        }
      }
      v2 = *(_DWORD *)(this + 612); /*0x509ad2*/
    }
  }
  return v2; /*0x509ae2*/
}


// ==== 0x00509B20  HouseClass::Find  this=HouseClass  sig=csp ====
void __thiscall HouseClass::Find(int this, char a2)
{
  bool v3; // zf
  CellStruct *v4; // eax
  CellStruct **SWBuilding; // eax
  AbstractClass *v6; // eax
  CellStruct *v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF

  if ( *(_DWORD *)(this + 22016) != -1 ) /*0x509b2d*/
  {
    v3 = *(_WORD *)(this + 21744) == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509b38*/
    v7 = *(CellStruct **)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509b3f*/
    if ( v3 && *(_WORD *)(this + 21746) == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1198] ) /*0x509b53*/
    {
      if ( *(_DWORD *)(this + 21740) == 1 ) /*0x509b66*/
        SWBuilding = (CellStruct **)HouseClass::FindSWBuilding((_DWORD *)this, (HouseClass *)&v8); /*0x509b6f*/
      else
        SWBuilding = (CellStruct **)HouseClass::FindSWTarget( /*0x509b7e*/
                                      (void *)this,
                                      (HouseClass *)&v8,
                                      *(HouseClass **)(this + 21740));
      v4 = *SWBuilding; /*0x509b83*/
    }
    else
    {
      v4 = *(CellStruct **)(this + 21744); /*0x509b55*/
    }
    v7 = v4; /*0x509b8c*/
    if ( v4 != *(CellStruct **)&MEMORY[0xA8D63C].__pad_14B0[1196] ) /*0x509b90*/
    {
      v6 = (AbstractClass *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)(this + 596) + 16))(this + 596, &a2); /*0x509bb5*/
      SuperWeapon::FireSuperWeaponHouseClass((void *)this, v6, (AbstractClass *)&v7); /*0x509bbb*/
    }
  }
}


// ==== 0x00509C10  HouseClass::FireStoredSW  this=HouseClass  sig=csp ====
void __thiscall HouseClass::FireStoredSW(int this, char a2)
{
  bool v3; // zf
  CellStruct *v4; // eax
  CellStruct **SWBuilding; // eax
  AbstractClass *v6; // eax
  CellStruct *v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF

  if ( *(_DWORD *)(this + 22016) != -1 ) /*0x509c1d*/
  {
    v3 = *(_WORD *)(this + 21744) == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509c28*/
    v7 = *(CellStruct **)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509c2f*/
    if ( v3 && *(_WORD *)(this + 21746) == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1198] ) /*0x509c43*/
    {
      if ( *(_DWORD *)(this + 21740) == 1 ) /*0x509c56*/
        SWBuilding = (CellStruct **)HouseClass::FindSWBuilding((_DWORD *)this, (HouseClass *)&v8); /*0x509c5f*/
      else
        SWBuilding = (CellStruct **)HouseClass::FindSWTarget( /*0x509c6e*/
                                      (void *)this,
                                      (HouseClass *)&v8,
                                      *(HouseClass **)(this + 21740));
      v4 = *SWBuilding; /*0x509c73*/
    }
    else
    {
      v4 = *(CellStruct **)(this + 21744); /*0x509c45*/
    }
    v7 = v4; /*0x509c7c*/
    if ( v4 != *(CellStruct **)&MEMORY[0xA8D63C].__pad_14B0[1196] ) /*0x509c80*/
    {
      v6 = (AbstractClass *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)(this + 596) + 16))(this + 596, &a2); /*0x509ca5*/
      SuperWeapon::FireSuperWeaponHouseClass((void *)this, v6, (AbstractClass *)&v7); /*0x509cab*/
    }
  }
}


// ==== 0x00509CC0  nullsub_144  this=-  sig=csp ====
void __stdcall nullsub_144(int a1)
{
  ; /*0x509cc0*/
}


// ==== 0x00509CD0  HouseClass::Fire_ParaDrop  this=HouseClass  sig=csp ====
char __thiscall HouseClass::Fire_ParaDrop(_DWORD *this, char a2)
{
  HouseClass *v2; // esi
  int v3; // eax
  __int16 v4; // dx
  bool v5; // zf
  CellStruct *v6; // eax
  CellStruct *v7; // edx
  char result; // al
  AbstractClass *v9; // eax
  CellStruct *v10; // [esp+4h] [ebp-Ch] BYREF
  CellStruct *v11; // [esp+8h] [ebp-8h] BYREF
  int v12; // [esp+Ch] [ebp-4h] BYREF

  v2 = (HouseClass *)this; /*0x509cd4*/
  v3 = this->enemyHouseIndex; /*0x509cd6*/
  if ( v3 != -1 ) /*0x509cdf*/
    this = *(_DWORD **)&HouseClass_Array->__pad_0[4 * v3]; /*0x509ce7*/
  v4 = *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509cee*/
  v5 = LOWORD(v2->preferredTargetCell[0]) == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509cf5*/
  v10 = *(CellStruct **)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509d03*/
  if ( v5 && HIWORD(v2->preferredTargetCell[0]) == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1198] ) /*0x509d10*/
  {
    if ( v2->preferredTargetType == 1 ) /*0x509d2a*/
    {
      if ( *((_WORD *)this + 10826) == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1196] /*0x509d51*/
        && *((_WORD *)this + 10827) == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1198] )
      {
        v6 = (CellStruct *)this->baseSpawnCell; /*0x509d53*/
      }
      else
      {
        v6 = (CellStruct *)this->baseCenter; /*0x509d5b*/
      }
      v10 = v6; /*0x509d69*/
      v11 = 0; /*0x509d90*/
      v7 = (CellStruct *)*LayerClass::Pathfinding_Find( /*0x509d9f*/
                            &MEMORY[0x87F7E8],
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
      LOWORD(v10) = (_WORD)v7 + 2; /*0x509daa*/
      HIWORD(v10) = HIWORD(v7) + 2; /*0x509daf*/
    }
    else
    {
      v10 = (CellStruct *)*HouseClass::FindSWTarget(v2, (HouseClass *)&v11, (HouseClass *)v2->preferredTargetType); /*0x509d3b*/
    }
    v4 = *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509db4*/
  }
  else
  {
    v10 = (CellStruct *)v2->preferredTargetCell[0]; /*0x509d18*/
  }
  if ( (_WORD)v10 != v4 /*0x509dcd*/
    || (result = MEMORY[0xA8D63C].__pad_14B0[1198], HIWORD(v10) != *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1198]) )
  {
    v9 = (AbstractClass *)(*(int (__thiscall **)(int *, char *))(v2->supers[0] + 16))(v2->supers, &a2); /*0x509de5*/
    return SuperWeapon::FireSuperWeaponHouseClass(v2, v9, (AbstractClass *)&v10); /*0x509deb*/
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
  AbstractClass *v7; // eax
  int v8; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h] BYREF

  result = LightningStorm::IsActive(); /*0x509e06*/
  if ( !result && *(_DWORD *)(this + 22016) != -1 ) /*0x509e1a*/
  {
    v4 = *(_WORD *)(this + 21744) == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509e25*/
    v8 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509e2c*/
    if ( v4 && *(_WORD *)(this + 21746) == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1198] ) /*0x509e40*/
    {
      if ( *(_DWORD *)(this + 21740) == 1 ) /*0x509e53*/
        SWBuilding = HouseClass::FindSWBuilding((_DWORD *)this, (HouseClass *)&v9); /*0x509e5c*/
      else
        SWBuilding = HouseClass::FindSWTarget((void *)this, (HouseClass *)&v9, *(HouseClass **)(this + 21740)); /*0x509e6b*/
      v5 = *SWBuilding; /*0x509e70*/
    }
    else
    {
      v5 = *(_DWORD *)(this + 21744); /*0x509e42*/
    }
    v8 = v5; /*0x509e79*/
    if ( (_WORD)v5 != *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1196] /*0x509e8a*/
      || (result = MEMORY[0xA8D63C].__pad_14B0[1198], HIWORD(v8) != *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1198]) )
    {
      v7 = (AbstractClass *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)(this + 596) + 16))(this + 596, &a2); /*0x509ea2*/
      return SuperWeapon::FireSuperWeaponHouseClass((void *)this, v7, (AbstractClass *)&v8); /*0x509ea8*/
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
  MouseClass *v7; // edi
  __int16 v8; // dx
  _DWORD *v9; // eax
  _DWORD *ObjectByType; // esi
  int v11; // eax
  int v12; // ecx
  bool v13; // al
  int v14; // eax
  AbstractClass *v15; // eax
  _BYTE v17[32]; // [esp+8h] [ebp-20h] BYREF

  LOBYTE(v2) = MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509f63*/
  *(_DWORD *)v17 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x509f6c*/
  *(_DWORD *)&v17[8] = 0; /*0x509f70*/
  if ( *(_WORD *)(this + 21744) == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1196] )
  {
    v2 = *(_WORD *)(this + 21746); /*0x509f85*/
    if ( v2 == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1198] )
    {
      v4 = (int)&MEMORY[0xA83DF8][-1].lineTrailer + 3; /*0x509f9f*/
      *(_DWORD *)&v17[24] = (char *)MEMORY[0xA83DF8] - 1; /*0x509fa4*/
      if ( (int)&MEMORY[0xA83DF8][-1].lineTrailer + 3 >= 0 )
      {
        do
        {
          *(_DWORD *)&v17[4] = 0; /*0x509fb8*/
          v5 = *(_BYTE **)&MEMORY[0xA83DEC]->__pad_0[4 * v4]; /*0x509fbc*/
          if ( !v5[129] )
          {
            v17[16] = v5[140] != 0; /*0x509fdc*/
            v6 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 444))(v5); /*0x509fe9*/
            *(_DWORD *)&v17[20] = 0; /*0x509ff2*/
            v7 = (MouseClass *)dword_ABD490; /*0x50a000*/
            do
            {
              v8 = *(_WORD *)(v6 + 38) + HIWORD(v7->field_0); /*0x50a010*/
              *(_WORD *)&v17[12] = LOWORD(v7->field_0) + *(_WORD *)(v6 + 36); /*0x50a014*/
              *(_WORD *)&v17[14] = v8; /*0x50a01d*/
              *(_DWORD *)&v17[28] = *(_DWORD *)&v17[12]; /*0x50a02c*/
              v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v17[28]); /*0x50a030*/
              ObjectByType = WTFMode::FindObjectByType(v9, v17[16]); /*0x50a041*/
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
                      ++*(_DWORD *)&v17[4]; /*0x50a092*/
                  }
                  ObjectByType = (_DWORD *)ObjectByType[12]; /*0x50a096*/
                }
                while ( ObjectByType && (*(int (__thiscall **)(_DWORD *))(*ObjectByType + 44))(ObjectByType) == 15 );
              }
              v7 = (MouseClass *)((char *)v7 + 4); /*0x50a0b4*/
              ++*(_DWORD *)&v17[20]; /*0x50a0b9*/
            }
            while ( *(int *)&v17[20] <= 9 );
            v4 = *(_DWORD *)&v17[24]; /*0x50a0c7*/
            if ( *(int *)&v17[4] > *(int *)&v17[8] ) /*0x50a0cf*/
            {
              v14 = *(_DWORD *)(v6 + 36); /*0x50a0d1*/
              *(_DWORD *)&v17[8] = *(_DWORD *)&v17[4]; /*0x50a0d4*/
              *(_DWORD *)v17 = v14; /*0x50a0d8*/
            }
          }
          *(_DWORD *)&v17[24] = --v4; /*0x50a0dd*/
        }
        while ( v4 >= 0 );
        LOBYTE(v2) = v17[8]; /*0x50a0e7*/
        if ( *(_DWORD *)&v17[8] ) /*0x50a0ef*/
        {
          if ( *(_DWORD *)v17 != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1196] ) /*0x50a0fd*/
          {
            LOBYTE(v2) = LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)v17, (TechnoClass *)1); /*0x50a119*/
            if ( (_BYTE)v2 ) /*0x50a120*/
            {
              v15 = (AbstractClass *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)(this + 596) + 16))( /*0x50a138*/
                                       this + 596,
                                       &a2);
              LOBYTE(v2) = SuperWeapon::FireSuperWeaponHouseClass((void *)this, v15, (AbstractClass *)v17); /*0x50a13e*/
            }
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
  int *v8; // ebp
  __int16 v9; // dx
  _BYTE *i; // eax
  _DWORD *v11; // esi
  int v12; // eax
  int v13; // ecx
  int v15; // eax
  AbstractClass *v16; // eax
  int v18; // [esp+8h] [ebp-1Ch] BYREF
  int v19; // [esp+Ch] [ebp-18h]
  int v20; // [esp+10h] [ebp-14h]
  int v21; // [esp+14h] [ebp-10h]
  int v22; // [esp+18h] [ebp-Ch]
  int v23; // [esp+1Ch] [ebp-8h]
  int v24; // [esp+20h] [ebp-4h] BYREF

  LOBYTE(v3) = PsyDom::IsActive(); /*0x50a157*/
  if ( !(_BYTE)v3 && *(_DWORD *)(this + 22016) != -1 ) /*0x50a16b*/
  {
    LOBYTE(v3) = MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x50a171*/
    v20 = 0; /*0x50a176*/
    v4 = *(_WORD *)(this + 21744) == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x50a17e*/
    v18 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x50a185*/
    if ( v4 ) /*0x50a189*/
    {
      v3 = *(_WORD *)(this + 21746); /*0x50a18f*/
      if ( v3 == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1198] ) /*0x50a19d*/
      {
        v5 = *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61348] - 1; /*0x50a1a9*/
        v23 = *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61348] - 1; /*0x50a1ae*/
        if ( *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61348] - 1 >= 0 ) /*0x50a1b2*/
        {
          do /*0x50a2d7*/
          {
            v19 = 0; /*0x50a1c2*/
            v6 = *(_BYTE **)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61336] + 4 * v5); /*0x50a1c6*/
            if ( !v6[129] ) /*0x50a1c9*/
            {
              v7 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 444))(v6); /*0x50a1df*/
              v22 = 0; /*0x50a1e8*/
              v8 = dword_ABD490; /*0x50a1f2*/
              do /*0x50a2b3*/
              {
                v9 = *(_WORD *)(v7 + 38) + *((_WORD *)v8 + 1); /*0x50a203*/
                LOWORD(v21) = *(_WORD *)(v7 + 36) + *(_WORD *)v8; /*0x50a207*/
                HIWORD(v21) = v9; /*0x50a210*/
                v24 = v21; /*0x50a21f*/
                for ( i = (_BYTE *)*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v24) + 57); /*0x50a236*/
                      i && (i[20] & 4) != 0;
                      i = (_BYTE *)v11[12] )
                {
                  v11 = i; /*0x50a238*/
                  v12 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)i + 60))(i); /*0x50a242*/
                  if ( v12 ) /*0x50a247*/
                  {
                    if ( v12 == this ) /*0x50a24b*/
                      continue; /*0x50a24b*/
                    v13 = *(_DWORD *)(v12 + 48); /*0x50a24d*/
                    if ( v13 == *(_DWORD *)(this + 48) || v13 != -1 && ((1 << v13) & *(_DWORD *)(this + 22408)) != 0 ) /*0x50a26d*/
                      continue; /*0x50a276*/
                  }
                  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 84))(v11) && TechnoClass::CanBePermaMC(v11) ) /*0x50a285*/
                    ++v19; /*0x50a28e*/
                }
                ++v8; /*0x50a2aa*/
                ++v22; /*0x50a2af*/
              }
              while ( v22 <= 37 ); /*0x50a2b3*/
              v5 = v23; /*0x50a2bd*/
              if ( v19 > v20 ) /*0x50a2c5*/
              {
                v15 = *(_DWORD *)(v7 + 36); /*0x50a2c7*/
                v20 = v19; /*0x50a2ca*/
                v18 = v15; /*0x50a2ce*/
              }
            }
            v23 = --v5; /*0x50a2d3*/
          }
          while ( v5 >= 0 ); /*0x50a2d7*/
          LOBYTE(v3) = v20; /*0x50a2dd*/
          if ( v20 ) /*0x50a2e5*/
          {
            if ( v18 != *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1196] ) /*0x50a2f3*/
            {
              LOBYTE(v3) = LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)&v18, (TechnoClass *)1); /*0x50a30f*/
              if ( (_BYTE)v3 ) /*0x50a316*/
              {
                v16 = (AbstractClass *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)(this + 596) + 16))( /*0x50a32e*/
                                         this + 596,
                                         &a2);
                LOBYTE(v3) = SuperWeapon::FireSuperWeaponHouseClass((void *)this, v16, (AbstractClass *)&v18); /*0x50a334*/
              }
            }
          }
        }
      }
    }
  }
  return v3; /*0x50a339*/
}


// ==== 0x0050A350  HouseClass::FireSuperWeaponAtBestTarget  this=HouseClass  sig=csp ====
char __thiscall HouseClass::FireSuperWeaponAtBestTarget(int this, int a2)
{
  int TileData; // eax
  int v4; // edi
  MouseClass *v5; // edx
  int v6; // ebx
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  SuperClass *v10; // eax
  AbstractClass *v11; // eax
  int v13; // [esp+Ch] [ebp-1Ch]
  MouseClass *v14; // [esp+Ch] [ebp-1Ch]
  int v15; // [esp+10h] [ebp-18h]
  MouseClass *v16; // [esp+14h] [ebp-14h] BYREF
  int v17; // [esp+18h] [ebp-10h] BYREF
  _BYTE v18[12]; // [esp+1Ch] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+28h] [ebp+0h] BYREF

  TileData = *(_DWORD *)(this + 22016); /*0x50a358*/
  if ( TileData != -1 ) /*0x50a361*/
  {
    v4 = 0; /*0x50a36d*/
    v15 = -1; /*0x50a36f*/
    v5 = *(MouseClass **)&HouseClass_Array->__pad_0[4 * TileData]; /*0x50a377*/
    LOBYTE(TileData) = HouseClass_Player.__pad_5568[22684]; /*0x50a37a*/
    v16 = v5; /*0x50a37f*/
    v6 = *(_DWORD *)&HouseClass_Player.__pad_5568[22684] - 1; /*0x50a383*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[22684] - 1 >= 0 ) /*0x50a388*/
    {
      do /*0x50a41c*/
      {
        v7 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22672] + 4 * v6); /*0x50a399*/
        if ( *(MouseClass **)(v7 + 540) == v16 ) /*0x50a3a2*/
        {
          v8 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v7 + 72))(v7, v18); /*0x50a3ad*/
          LOWORD(v13) = *v8 / 256; /*0x50a3c1*/
          HIWORD(v13) = v8[1] / 256; /*0x50a3da*/
          v17 = v13; /*0x50a3e7*/
          TileData = CellClass::GetTileData((IUnknown *)&v17, (IUnknown *)this); /*0x50a3ec*/
          if ( *(_BYTE *)(v7 + 1773) == 15 ) /*0x50a3f8*/
            TileData = Random::Range( /*0x50a40a*/
                         (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                         0,
                         (IUnknown *)0x64);
          if ( TileData > v15 ) /*0x50a413*/
          {
            v15 = TileData; /*0x50a415*/
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
        v10 = *(SuperClass **)(this + 596); /*0x50a464*/
        v16 = v14; /*0x50a46a*/
        v11 = (AbstractClass *)((int (__thiscall *)(int, _UNKNOWN **, MouseClass **))v10->field_10)( /*0x50a47a*/
                                 this + 596,
                                 &retaddr,
                                 &v16);
        LOBYTE(TileData) = SuperWeapon::FireSuperWeaponHouseClass((void *)this, v11, (AbstractClass *)v18); /*0x50a480*/
      }
    }
  }
  return TileData; /*0x50a485*/
}


// ==== 0x0050A490  HouseClass::RecordCratePlacement  this=HouseClass  sig=csp ====
char __thiscall HouseClass::RecordCratePlacement(int *this, BuildingClass *aP1)
{
  int Type; // eax
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

  LOBYTE(Type) = MEMORY[0xA8D63C].__pad_14B0[639]; /*0x50a490*/
  if ( !MEMORY[0xA8D63C].__pad_14B0[639] ) /*0x50a49e*/
  {
    v3 = 0; /*0x50a4a8*/
    v4 = this->q5714; /*0x50a4d4*/
    Type = aP1->location[1] / 256; /*0x50a4dd*/
    if ( v4 > 0 ) /*0x50a4e2*/
    {
      for ( i = (_QWORD *)this->q5708; /*0x50a4ee*/
            *i != __PAIR64__(__PAIR32__(Type, aP1->location[0] / 256), *((_DWORD *)aP1->Type + 894));
            i += 2 )
      {
        if ( ++v3 >= v4 ) /*0x50a510*/
          return Type; /*0x50a510*/
      }
      v6 = 16 * v3; /*0x50a520*/
      v7 = 0; /*0x50a523*/
      v13 = *(_DWORD *)(this->q5708 + 16 * v3 + 4); /*0x50a52b*/
      v8 = 0; /*0x50a531*/
      do /*0x50a56c*/
      {
        if ( v3 != v7 ) /*0x50a535*/
        {
          v9 = this->q5708; /*0x50a537*/
          v10 = *(_WORD *)(v8 + v9 + 4) == (unsigned __int16)v13; /*0x50a542*/
          v11 = v8 + v9 + 4; /*0x50a547*/
          if ( v10 && *(_WORD *)(v11 + 2) == HIWORD(v13) ) /*0x50a556*/
            *(_DWORD *)v11 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x50a55e*/
        }
        ++v7; /*0x50a566*/
        v8 += 16; /*0x50a567*/
      }
      while ( v7 < this->q5714 ); /*0x50a56c*/
      Type = (int)aP1->Type; /*0x50a572*/
      if ( *(_BYTE *)(Type + 5894) ) /*0x50a578*/
      {
        LOBYTE(Type) = (_BYTE)MEMORY[0xA8B238]; /*0x50a582*/
        if ( MEMORY[0xA8B238] ) /*0x50a589*/
        {
          *(_DWORD *)(v6 + this->q5708) = -1; /*0x50a591*/
          Type = this->q5708; /*0x50a598*/
          *(_DWORD *)(v6 + Type + 4) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x50a5a4*/
        }
      }
    }
  }
  return Type; /*0x50a5a8*/
}


// ==== 0x0050A5C0  HouseClass::AIBuildBase  this=HouseClass  sig=csp ====
char __thiscall HouseClass::AIBuildBase(#375 *this)
{
  int v2; // eax
  wchar_t *StringCSF; // eax
  int v4; // esi
  CCINIClass *v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // esi
  int *i; // ebx
  int v10; // edx
  int v11; // eax
  _DWORD *v12; // ecx
  _DWORD *v13; // edx
  char IsHumanPlayer; // al
  int v15; // edi
  int v16; // eax
  int v17; // ebx
  int v18; // ecx
  DynamicVector *v19; // esi
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
  int v66; // [esp+2Ch] [ebp-48h]
  int v67; // [esp+2Ch] [ebp-48h]
  int v68; // [esp+2Ch] [ebp-48h]
  int v69; // [esp+30h] [ebp-44h]
  int v70; // [esp+30h] [ebp-44h]
  int v71; // [esp+30h] [ebp-44h]
  int v72; // [esp+34h] [ebp-40h]
  int v73; // [esp+34h] [ebp-40h]
  int v74; // [esp+34h] [ebp-40h]
  int v75; // [esp+38h] [ebp-3Ch]
  int v76; // [esp+38h] [ebp-3Ch]
  int v77; // [esp+3Ch] [ebp-38h]
  int v78; // [esp+3Ch] [ebp-38h]
  int v79; // [esp+3Ch] [ebp-38h]
  int v80; // [esp+3Ch] [ebp-38h]
  int *v81; // [esp+3Ch] [ebp-38h]
  int v82; // [esp+40h] [ebp-34h]
  int *v83; // [esp+40h] [ebp-34h]
  int *v84; // [esp+40h] [ebp-34h]
  int v85; // [esp+40h] [ebp-34h]
  int v86; // [esp+44h] [ebp-30h]
  int v87; // [esp+44h] [ebp-30h]
  int v88; // [esp+4Ch] [ebp-28h]
  char Destination[20]; // [esp+5Ch] [ebp-18h] BYREF
  char v90; // [esp+70h] [ebp-4h]

  LOBYTE(v2) = this->currentPlayer; /*0x50a5d0*/
  if ( !MEMORY[0xA8B238] ) /*0x50a5d6*/
    LOBYTE(v2) = (_BYTE)v2 || this->playerControl; /*0x50a5ea*/
  if ( !(_BYTE)v2 ) /*0x50a5ee*/
    return v2; /*0x50a5ee*/
  this->currentPlayer = 0; /*0x50a5f4*/
  this->playerControl = 0; /*0x50a5fb*/
  this->iqLevel2 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5172); /*0x50a614*/
  if ( g_INI_Key_Computer ) /*0x50a61a*/
  {
    strncpy(Destination, g_INI_Key_Computer, 0x14u); /*0x50a62e*/
    v90 = 0; /*0x50a636*/
  }
  else
  {
    Destination[0] = (unsigned __int8)g_INI_Key_Computer; /*0x50a61c*/
  }
  if ( Destination != (char *)this + 90100 ) /*0x50a647*/
  {
    qmemcpy((char *)this + 90100, Destination, 0x14u); /*0x50a652*/
    *((_BYTE *)this + 90120) = v90; /*0x50a654*/
  }
  StringCSF = GetStringCSF(g_Str_TXT_COMPUTER, 0, g_Str_File_House_CPP, 13744); /*0x50a666*/
  wcscpy((wchar_t *)this + 45077, StringCSF); /*0x50a673*/
  v4 = MEMORY[0xA83E40] - 1; /*0x50a680*/
  if ( MEMORY[0xA83E40] - 1 >= 0 ) /*0x50a685*/
  {
    v5 = MEMORY[0xA83E34]; /*0x50a687*/
    do /*0x50a6c2*/
    {
      v6 = *(_DWORD *)&v5->__pad_0[4 * v4]; /*0x50a68c*/
      if ( *(#375 **)(v6 + 108) == this ) /*0x50a692*/
      {
        FactoryClass::StartProduction(v6, 1); /*0x50a696*/
        FactoryClass::AbandonProduction(*(_DWORD *)&MEMORY[0xA83E34]->__pad_0[4 * v4]); /*0x50a6a4*/
        v5 = MEMORY[0xA83E34]; /*0x50a6a9*/
        v7 = *(_DWORD *)&MEMORY[0xA83E34]->__pad_0[4 * v4]; /*0x50a6ae*/
        if ( v7 ) /*0x50a6b3*/
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 32))(v7, 1); /*0x50a6b9*/
          v5 = MEMORY[0xA83E34]; /*0x50a6bc*/
        }
      }
      --v4; /*0x50a6c1*/
    }
    while ( v4 >= 0 ); /*0x50a6c2*/
  }
  HouseClass::SetCombatPower((int)this, (IUnknown *)(2 - this->q184)); /*0x50a6d4*/
  v2 = this->bunkersCount - 1; /*0x50a6dc*/
  v66 = v2; /*0x50a6dd*/
  if ( v2 < 0 ) /*0x50a6e1*/
    return v2; /*0x50a6e1*/
  v8 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2236); /*0x50a6f4*/
  for ( i = (int *)(this->absorbersCount + 4 * v2); ; --i ) /*0x50a6fa*/
  {
    v10 = *i; /*0x50a6fd*/
    v11 = 0; /*0x50a6ff*/
    if ( v8 > 0 ) /*0x50a703*/
    {
      v12 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2224); /*0x50a711*/
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
    LOBYTE(v2) = --v66; /*0x50a736*/
    if ( v66 < 0 ) /*0x50a73d*/
      return v2; /*0x50a73d*/
  }
  if ( !v10 ) /*0x50a749*/
    return v2; /*0x50a749*/
  v13 = (_DWORD *)(v10 + 156); /*0x50a74f*/
  LOWORD(v77) = *v13 / 256; /*0x50a76d*/
  HIWORD(v77) = v13[1] / 256; /*0x50a780*/
  this->q1524 = v77; /*0x50a789*/
  if ( MEMORY[0xA8B238] ) /*0x50a796*/
    IsHumanPlayer = this->currentPlayer; /*0x50a7a1*/
  else
    IsHumanPlayer = House::IsHumanPlayer(this); /*0x50a79a*/
  if ( !IsHumanPlayer && MEMORY[0xA8B238] ) /*0x50a7b2*/
    HouseClass::CanDetect(); /*0x50a7b4*/
  if ( !this->q5714 ) /*0x50a7b9*/
  {
    v15 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48]; /*0x50a7c3*/
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] = 0; /*0x50a7cb*/
    HouseClass::GenerateAIBuildListEnsureSanity(this); /*0x50a7d5*/
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] = v15; /*0x50a7da*/
  }
  *(_DWORD *)(this->q5708 + 4) = v77; /*0x50a7e6*/
  *((_DWORD *)this + 5588) = v77; /*0x50a7e9*/
  this->production = 1; /*0x50a7ef*/
  this->aiTriggersActive = 1; /*0x50a7f6*/
  this->autoBaseBuilding = 1; /*0x50a7fd*/
  v16 = this->q5714 - 1; /*0x50a80a*/
  if ( v16 >= 0 ) /*0x50a80b*/
  {
    v17 = 16 * v16; /*0x50a813*/
    v75 = this->q5714; /*0x50a817*/
    do /*0x50a8d3*/
    {
      v18 = this->q5708; /*0x50a81b*/
      v19 = *(DynamicVector **)(v17 + v18); /*0x50a821*/
      if ( (int)v19 >= 0 && DynamicVector::GetOrGrow((_DWORD *)this + 5460, *(DynamicVector **)(v17 + v18)) > 0 ) /*0x50a83a*/
      {
        v20 = this->bunkersCount - 1; /*0x50a849*/
        for ( j = *((_DWORD *)g_TriggerTypeCount + (_DWORD)v19); v20 >= 0; --v20 ) /*0x50a84d*/
        {
          v22 = *(_DWORD *)(this->absorbersCount + 4 * v20); /*0x50a852*/
          if ( !*(_BYTE *)(v22 + 129) /*0x50a87d*/
            && (*(_DWORD *)(v22 + 1312) == j
             || *(_DWORD *)(v22 + 1516) == j
             || *(_DWORD *)(v22 + 1520) == j
             || *(_DWORD *)(v22 + 1524) == j) )
          {
            LOWORD(v78) = *(_DWORD *)(v22 + 156) / 256; /*0x50a89e*/
            HIWORD(v78) = *(_DWORD *)(v22 + 160) / 256; /*0x50a8b1*/
            *(_DWORD *)(v17 + this->q5708 + 4) = v78; /*0x50a8c0*/
          }
        }
      }
      v17 -= 16; /*0x50a8cb*/
      --v75; /*0x50a8cf*/
    }
    while ( v75 ); /*0x50a8d3*/
  }
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x50a8de*/
  v23 = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x50a8e8*/
  for ( k = 0; v23; v23 = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x50a8f1*/
  {
    if ( *(_DWORD *)(v23 + 80) == this->vtable4 ) /*0x50a8fb*/
    {
      v25 = *(_DWORD *)(v23 + 68); /*0x50a8fd*/
      if ( v25 != -1 ) /*0x50a903*/
      {
        if ( *(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * v25] + 680) ) /*0x50a90e*/
          BuildingClass::Capture(this, (HouseClass *)(v23 + 36), 1); /*0x50a920*/
      }
    }
  }
  v67 = 0; /*0x50a936*/
  v79 = this->bunkersCount; /*0x50a93c*/
  if ( v79 > 0 ) /*0x50a940*/
  {
    do /*0x50ab9f*/
    {
      v26 = *(_DWORD *)(this->absorbersCount + 4 * v67); /*0x50a94d*/
      if ( !*(_BYTE *)(v26 + 129) ) /*0x50a950*/
      {
        v27 = *(_BYTE **)(v26 + 1312); /*0x50a95e*/
        if ( v27[5894] /*0x50a988*/
          || v27 == *(_BYTE **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2172) && *(char *)(v26 + 1794) > 0 )
        {
          if ( (*(int (__thiscall **)(_BYTE *, int, _DWORD, int, #375 *))(*(_DWORD *)v27 + 148))(v27, 1, 0, 1, this) ) /*0x50a997*/
          {
            v28 = this->q5714; /*0x50a9a5*/
            if ( k < v28 ) /*0x50a9ad*/
            {
              v29 = this->q5708; /*0x50a9b3*/
              v30 = (_DWORD *)(v29 + 16 * k); /*0x50a9be*/
              while ( *v30 != -1 ) /*0x50a9c3*/
              {
                ++k; /*0x50a9c5*/
                v30 += 4; /*0x50a9c6*/
                if ( k >= v28 ) /*0x50a9cb*/
                  goto LABEL_79; /*0x50a9cb*/
              }
              v31 = *(_DWORD *)(v26 + 1312); /*0x50a9d8*/
              if ( v31 == *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2172) ) /*0x50a9e4*/
              {
                v32 = (_DWORD *)(v26 + 156); /*0x50a9ea*/
                Destination[8] = 0; /*0x50a9f0*/
                LOWORD(v72) = *(_DWORD *)(v26 + 156) / 256; /*0x50aa13*/
                HIWORD(v72) = *(_DWORD *)(v26 + 160) / 256; /*0x50aa2c*/
                v33 = this->q5714; /*0x50aa45*/
                *(_DWORD *)Destination = *(_DWORD *)(*(_DWORD *)(v26 + 4 * *(char *)(v26 + 1794) + 1512) + 3576); /*0x50aa48*/
                v34 = this->q570C; /*0x50aa4c*/
                if ( v33 < v34 /*0x50aa7d*/
                  || (this->q5711 || !v34)
                  && (v35 = *((_DWORD *)this + 5574), v35 > 0)
                  && (v36 = (*(int (__thiscall **)(char *, int, _DWORD))(this->q5704 + 8))(
                              (char *)this + 22276,
                              v35 + v34,
                              0),
                      v32 = (_DWORD *)(v26 + 156),
                      v36) )
                {
                  v37 = this->q5714; /*0x50aa7f*/
                  if ( k < v37 - 1 ) /*0x50aa87*/
                  {
                    memcpy( /*0x50aaab*/
                      (void *)(this->q5708 + 16 * (k + 2)),
                      (const void *)(this->q5708 + 16 * (k + 1)),
                      16 * (v37 + 0xFFFFFFF * (k + 1)));
                    v32 = (_DWORD *)(v26 + 156); /*0x50aab0*/
                  }
                  v38 = (_DWORD *)(16 * (k + 1) + this->q5708); /*0x50aac0*/
                  *v38 = *(_DWORD *)Destination; /*0x50aac6*/
                  v38[1] = v72; /*0x50aacc*/
                  v38[2] = *(_DWORD *)&Destination[8]; /*0x50aad3*/
                  v38[3] = 0; /*0x50aad8*/
                  ++this->q5714; /*0x50aadf*/
                }
                v39 = 16 * k; /*0x50aaf6*/
                *(_DWORD *)(v39 + this->q5708) = *(_DWORD *)(*(_DWORD *)(v26 + 1312) + 3576); /*0x50aaf9*/
                LOWORD(v69) = *v32 / 256; /*0x50ab14*/
                HIWORD(v69) = v32[1] / 256; /*0x50ab2d*/
                *(_DWORD *)(v39 + this->q5708 + 4) = v69; /*0x50ab36*/
                ++k; /*0x50ab3a*/
              }
              else
              {
                v40 = 16 * k; /*0x50ab45*/
                v41 = (_DWORD *)(v26 + 156); /*0x50ab48*/
                *(_DWORD *)(v40 + v29) = *(_DWORD *)(v31 + 3576); /*0x50ab4e*/
                LOWORD(v82) = *v41 / 256; /*0x50ab69*/
                HIWORD(v82) = v41[1] / 256; /*0x50ab7c*/
                *(_DWORD *)(v40 + this->q5708 + 4) = v82; /*0x50ab8b*/
              }
              ++k; /*0x50ab8f*/
            }
          }
        }
      }
LABEL_79:
      ++v67; /*0x50ab90*/
    }
    while ( v67 < v79 ); /*0x50ab9f*/
  }
  v42 = 0; /*0x50aba8*/
  v70 = 0; /*0x50abac*/
  v73 = 0; /*0x50abb0*/
  v80 = this->bunkersCount; /*0x50abb4*/
  v68 = 0; /*0x50abb8*/
  if ( v80 <= 0 ) /*0x50abbc*/
    goto LABEL_103; /*0x50abbc*/
  do /*0x50adfd*/
  {
    v43 = *(_DWORD *)(this->absorbersCount + 4 * v68); /*0x50abc9*/
    v76 = v43; /*0x50abcc*/
    if ( *(_BYTE *)(v43 + 129) ) /*0x50abd0*/
      goto LABEL_102; /*0x50abd0*/
    v83 = *(int **)(v43 + 1312); /*0x50abe6*/
    if ( v83[953] >= 0 ) /*0x50abf2*/
      goto LABEL_102; /*0x50abf2*/
    v44 = (int *)(v43 + 156); /*0x50abfa*/
    if ( __PAIR32__(*(_DWORD *)(v43 + 160) / 256, *(_DWORD *)(v43 + 156) / 256) == *(_DWORD *)(this->q5708 /*0x50ac69*/
                                                                                             + 20)
      || !(*(int (__thiscall **)(int *, int, _DWORD, int, #375 *))(*v83 + 148))(v83, 1, 0, 1, this)
      || v42 >= this->q5714 )
    {
      goto LABEL_102; /*0x50ac69*/
    }
    v45 = v73; /*0x50ac75*/
    v46 = v70; /*0x50ac79*/
    v47 = (int *)(this->q5708 + 16 * v42); /*0x50ac82*/
    v84 = v47; /*0x50ac84*/
    while ( *v47 < 0 ) /*0x50ac8c*/
    {
LABEL_91:
      ++v42; /*0x50acbf*/
      v47 += 4; /*0x50acc4*/
      v84 = v47; /*0x50acc9*/
      if ( v42 >= this->q5714 ) /*0x50accd*/
      {
        v73 = v45; /*0x50accf*/
        v70 = v46; /*0x50acd3*/
        goto LABEL_102; /*0x50acd7*/
      }
    }
    v88 = *((_DWORD *)g_TriggerTypeCount + *v47); /*0x50ac97*/
    v46 += *(_DWORD *)(v88 + 3808); /*0x50aca1*/
    v45 += *(_DWORD *)(v88 + 3812); /*0x50aca9*/
    if ( v42 <= 0 || v46 >= v45 + *((_DWORD *)this + 22573) ) /*0x50acb9*/
    {
      v47 = v84; /*0x50acbb*/
      goto LABEL_91; /*0x50acbb*/
    }
    v48 = *v44; /*0x50acdc*/
    v74 = v45; /*0x50acde*/
    v71 = v46; /*0x50ace5*/
    v49 = v44[1]; /*0x50aced*/
    Destination[8] = 0; /*0x50acff*/
    LOWORD(v86) = v48 / 256; /*0x50ad07*/
    v50 = v42 - 1; /*0x50ad15*/
    HIWORD(v86) = v49 / 256; /*0x50ad1d*/
    v51 = this->q570C; /*0x50ad2c*/
    v52 = this->q5714; /*0x50ad35*/
    *(_DWORD *)Destination = *(_DWORD *)(*(_DWORD *)(v76 + 1312) + 3576); /*0x50ad3a*/
    if ( v52 < v51 /*0x50ad5b*/
      || (this->q5711 || !v51)
      && (v53 = *((_DWORD *)this + 5574), v53 > 0)
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(this->q5704 + 8))(
           (char *)this + 22276,
           v53 + v51,
           0) )
    {
      v54 = this->q5714; /*0x50ad62*/
      if ( v50 < v54 - 1 ) /*0x50ad6a*/
        memcpy( /*0x50ad8e*/
          (void *)(this->q5708 + 16 * (v50 + 2)),
          (const void *)(this->q5708 + 16 * v42),
          16 * (v54 + 0xFFFFFFF * v42));
      v55 = *(_DWORD *)&Destination[8]; /*0x50ad9e*/
      v56 = (_DWORD *)(this->q5708 + 16 * v42); /*0x50ada5*/
      *v56 = *(_DWORD *)Destination; /*0x50adab*/
      v56[1] = v86; /*0x50adad*/
      v56[2] = v55; /*0x50adb2*/
      v56[3] = 0; /*0x50adb5*/
      ++this->q5714; /*0x50adbc*/
    }
    v70 = *(_DWORD *)(*(_DWORD *)(v76 + 1312) + 3808) + v71; /*0x50ade5*/
    v73 = v74 - *(_DWORD *)(v88 + 3812); /*0x50ade9*/
    ++v42; /*0x50aded*/
LABEL_102:
    ++v68; /*0x50adee*/
  }
  while ( v68 < v80 ); /*0x50adfd*/
LABEL_103:
  v2 = _strcmpi((char *)(this->relatedTagsCapacity + 36), (char *)&off_824FC4); /*0x50ae03*/
  if ( !v2 ) /*0x50ae19*/
  {
    LOBYTE(v2) = MEMORY[0xA8D63C].__pad_14B0[100]; /*0x50ae1f*/
    v57 = 0; /*0x50ae24*/
    v58 = 0; /*0x50ae26*/
    v59 = 0; /*0x50ae28*/
    if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[100] > 0 ) /*0x50ae2c*/
    {
      v85 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[100]; /*0x50ae38*/
      v81 = *(int **)&MEMORY[0xA8D63C].__pad_14B0[88]; /*0x50ae3c*/
      do /*0x50aef9*/
      {
        v60 = *v81; /*0x50ae44*/
        if ( *(#375 **)(*v81 + 540) == this /*0x50ae72*/
          && !*(_BYTE *)(v60 + 129)
          && *(_DWORD *)(v60 + 1312) == *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2204) )
        {
          v61 = *(_BYTE *)(v60 + 1794); /*0x50ae74*/
          if ( v61 > 0 ) /*0x50ae7c*/
          {
            v87 = v61; /*0x50ae8b*/
            do /*0x50aee3*/
            {
              if ( v57 < this->q5714 ) /*0x50ae95*/
              {
                v62 = (int *)(this->q5708 + 16 * v57); /*0x50aea2*/
                while ( 1 ) /*0x50aea4*/
                {
                  if ( *v62 >= 0 ) /*0x50aea8*/
                  {
                    v63 = *((_DWORD *)g_TriggerTypeCount + *v62); /*0x50aeaa*/
                    v58 += *(_DWORD *)(v63 + 3808); /*0x50aead*/
                    v59 += *(_DWORD *)(v63 + 3812); /*0x50aeb3*/
                    if ( v57 > 0 && v58 < v59 + *((_DWORD *)this + 22573) ) /*0x50aec7*/
                      break; /*0x50aec7*/
                  }
                  ++v57; /*0x50aecf*/
                  v62 += 4; /*0x50aed0*/
                  if ( v57 >= this->q5714 ) /*0x50aed5*/
                    goto LABEL_119; /*0x50aed5*/
                }
                ++v57; /*0x50aed9*/
              }
LABEL_119:
              --v87; /*0x50aeda*/
            }
            while ( v87 ); /*0x50aee3*/
          }
        }
        LOBYTE(v2) = v85 - 1; /*0x50aef0*/
        v64 = v85 == 1; /*0x50aef0*/
        ++v81; /*0x50aef1*/
        --v85; /*0x50aef5*/
      }
      while ( !v64 ); /*0x50aef9*/
    }
  }
  return v2; /*0x50a73f*/
}


// ==== 0x0050AF10  SuperWeapon::UpdateSuperWeaponsOwnedHouseClass  this=SuperWeapon  sig=csp ====
char __thiscall HouseClass_UpdateSuperWeaponsOwned(int this)
{
  int v1; // eax
  _BYTE *v3; // eax
  char v4; // bl
  int v5; // eax
  int v6; // edi
  int *v7; // ecx
  int v8; // edx
  int v9; // eax
  _BYTE *v10; // ecx
  int v11; // edx
  int v12; // eax
  int Status; // esi
  int v14; // edi
  char v16; // [esp+8h] [ebp-Eh]
  bool v17; // [esp+9h] [ebp-Dh]
  int i; // [esp+Ah] [ebp-Ch]
  int j; // [esp+Eh] [ebp-8h]
  int v20; // [esp+12h] [ebp-4h]

  LOBYTE(v1) = MEMORY[0xA8E9A0]; /*0x50af10*/
  if ( MEMORY[0xA8E9A0] ) /*0x50af1d*/
  {
    v17 = HouseClass_Player == (#375 *)this; /*0x50af31*/
    v1 = 0; /*0x50af36*/
    for ( i = 0; i < *(_DWORD *)(this + 612); ++i ) /*0x50af3a*/
    {
      v3 = *(_BYTE **)(*(_DWORD *)(this + 600) + 4 * v1); /*0x50af4d*/
      if ( !v3[109] || (!v3[96] || v3[110] && v3[109]) && !*(_BYTE *)(this + 501) ) /*0x50af70*/
        goto LABEL_55; /*0x50af78*/
      v4 = 0; /*0x50af84*/
      v16 = 0; /*0x50af88*/
      if ( !*(_BYTE *)(this + 501) ) /*0x50af7e*/
      {
        v5 = 0; /*0x50af99*/
        for ( j = 0; v5 < MEMORY[0xA8EB50]; j = ++v5 ) /*0x50afa1*/
        {
          v6 = *((_DWORD *)MEMORY[0xA8EB44] + v5); /*0x50afad*/
          if ( !*(_BYTE *)(v6 + 129) && *(_BYTE *)(v6 + 144) ) /*0x50afbe*/
          {
            v20 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(v6 + 540) + 4) + 16))(*(_DWORD *)(v6 + 540) + 4); /*0x50afe3*/
            if ( v20 == (*(int (__stdcall **)(int))(*(_DWORD *)(this + 4) + 16))(this + 4) ) /*0x50aff0*/
            {
              v7 = (int *)(v6 + 1516); /*0x50aff2*/
              v8 = 3; /*0x50aff8*/
              do /*0x50b02a*/
              {
                v9 = *v7; /*0x50affd*/
                if ( *v7 && (*(_DWORD *)(v9 + 5872) == i || *(_DWORD *)(v9 + 5876) == i) ) /*0x50b015*/
                {
                  v16 = 1; /*0x50b019*/
                  if ( !v4 ) /*0x50b01e*/
                    v4 = *(_BYTE *)(v6 + 1632); /*0x50b020*/
                }
                ++v7; /*0x50b026*/
                --v8; /*0x50b029*/
              }
              while ( v8 ); /*0x50b02a*/
              if ( BuildingClass::SWAvailable(v6) == i || BuildingClass::SW2Available(v6) == i ) /*0x50b044*/
              {
                v16 = 1; /*0x50b048*/
                if ( v4 ) /*0x50b04d*/
                  break; /*0x50b04d*/
                v4 = *(_BYTE *)(v6 + 1632); /*0x50b04f*/
              }
              if ( v4 && v16 ) /*0x50b05f*/
                break; /*0x50b05f*/
            }
            v5 = j; /*0x50b061*/
          }
        }
      }
      v10 = *(_BYTE **)(*(_DWORD *)(*(_DWORD *)(this + 600) + 4 * i) + 40); /*0x50b078*/
      if ( v10[231] && !MEMORY[0xA8B263] ) /*0x50b099*/
        v16 = 0; /*0x50b09b*/
      v11 = *(_DWORD *)(this + 21412); /*0x50b0a0*/
      v12 = *(_DWORD *)(this + 21416); /*0x50b0a6*/
      if ( v11 < v12 && v12 && (!v11 || (double)*(int *)(this + 21412) / (double)*(int *)(this + 21416) < 1.0) ) /*0x50b0d3*/
        v4 = 0; /*0x50b0d5*/
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v10 + 64))(v10); /*0x50b0d9*/
      Status = HouseClass::GetStatus((void *)0x39, 0); /*0x50b0ea*/
      if ( !v16 || *(_BYTE *)(this + 501) ) /*0x50b0f4*/
      {
        if ( !(unsigned __int8)SuperClass::Lose(*(_DWORD *)(*(_DWORD *)(this + 600) + 4 * i)) || !HouseClass_Player ) /*0x50b179*/
          goto LABEL_55; /*0x50b179*/
        if ( !v17 ) /*0x50b181*/
          goto LABEL_54; /*0x50b181*/
        if ( MEMORY[0x8809A0] == i ) /*0x50b18e*/
LABEL_52:
          MEMORY[0x8809A0] = -1; /*0x50b190*/
LABEL_53:
        Sidebar::ActivateTab((int)&MEMORY[0x87F7E8], Status); /*0x50b19a*/
        goto LABEL_54; /*0x50b1a0*/
      }
      if ( v4 ) /*0x50b100*/
      {
        v14 = i; /*0x50b12e*/
      }
      else
      {
        v14 = i; /*0x50b108*/
        if ( (unsigned __int8)SuperWeapon::GetField10(*(_DWORD *)(*(_DWORD *)(this + 600) + 4 * i)) /*0x50b123*/
          && (unsigned __int8)SuperClass::SetOnHold(1) )
        {
          goto LABEL_45; /*0x50b12a*/
        }
      }
      if ( !v4 || !(unsigned __int8)SuperClass::SetOnHold(0) ) /*0x50b141*/
        goto LABEL_55; /*0x50b148*/
LABEL_45:
      if ( v17 ) /*0x50b150*/
      {
        if ( MEMORY[0x8809A0] == v14 ) /*0x50b158*/
          goto LABEL_52; /*0x50b158*/
        goto LABEL_53; /*0x50b158*/
      }
LABEL_54:
      *(_BYTE *)(this + 508) = 1; /*0x50b1a5*/
LABEL_55:
      v1 = i + 1; /*0x50b1ac*/
    }
  }
  return v1; /*0x50b1c6*/
}


// ==== 0x0050B1D0  SuperWeapon::UpdateSuperWeaponsUnavailableHouseClass  this=HouseClass  sig=csp ====
char __thiscall SuperWeapon::UpdateSuperWeaponsUnavailableHouseClass(#375 *this)
{
  int v2; // eax
  int i; // edi
  int v4; // eax
  int j; // ebx
  int v6; // esi
  int v7; // edx
  int *v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  char v13; // al
  int v14; // ecx
  int Status; // eax
  char v17; // [esp+Bh] [ebp-9h]

  LOBYTE(v2) = this->defeated; /*0x50b1d7*/
  if ( !(_BYTE)v2 ) /*0x50b1df*/
  {
    v2 = this->lastBuiltInfantryType; /*0x50b1e5*/
    for ( i = 0; i < v2; ++i ) /*0x50b1ef*/
    {
      v4 = *(_DWORD *)(this->supersCount + 4 * i); /*0x50b1fd*/
      if ( !*(_BYTE *)(v4 + 109) || *(_BYTE *)(v4 + 110) && *(_BYTE *)(v4 + 109) ) /*0x50b212*/
      {
        v17 = 0; /*0x50b220*/
        for ( j = this->bunkersCount - 1; j >= 0; --j ) /*0x50b225*/
        {
          v6 = *(_DWORD *)(this->absorbersCount + 4 * j); /*0x50b22b*/
          if ( *(_BYTE *)(v6 + 144) && !*(_BYTE *)(v6 + 129) ) /*0x50b238*/
          {
            v7 = 0; /*0x50b242*/
            v8 = (int *)(v6 + 1516); /*0x50b244*/
            while ( 1 ) /*0x50b24a*/
            {
              v9 = *v8; /*0x50b24a*/
              if ( *v8 ) /*0x50b24a*/
              {
                if ( *(_DWORD *)(v9 + 5872) == i || *(_DWORD *)(v9 + 5876) == i ) /*0x50b25e*/
                  break; /*0x50b25e*/
              }
              ++v7; /*0x50b260*/
              ++v8; /*0x50b261*/
              if ( v7 >= 3 ) /*0x50b267*/
                goto LABEL_16; /*0x50b267*/
            }
            v17 = 1; /*0x50b26b*/
LABEL_16:
            if ( BuildingClass::SWAvailable((_DWORD *)v6) == i || BuildingClass::SW2Available((_DWORD *)v6) == i ) /*0x50b284*/
            {
              v17 = 1; /*0x50b293*/
              break; /*0x50b293*/
            }
            if ( v17 ) /*0x50b28c*/
              break; /*0x50b28c*/
          }
        }
        v10 = *(_DWORD *)(this->supersCount + 4 * i); /*0x50b298*/
        if ( (!*(_BYTE *)(*(_DWORD *)(v10 + 40) + 231) || MEMORY[0xA8B263]) && v17 ) /*0x50b2c1*/
        {
          v11 = this->q14E9; /*0x50b2c7*/
          v12 = this->q14EA; /*0x50b2cd*/
          v13 = v11 < v12 && v12 && (!v11 || (double)*((int *)this + 5353) / (double)*((int *)this + 5354) < 1.0); /*0x50b303*/
          SuperClass::StartTimer(v10, 0, this == HouseClass_Player, v13); /*0x50b314*/
          if ( this == HouseClass_Player ) /*0x50b31f*/
          {
            SidebarClass::AddCameo((int *)&MEMORY[0x87F7E8], 31, i); /*0x50b329*/
            v14 = *(_DWORD *)(*(_DWORD *)(this->supersCount + 4 * i) + 40); /*0x50b337*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 64))(v14); /*0x50b33c*/
            Status = HouseClass::GetStatus((void *)0x39, 0); /*0x50b348*/
            Sidebar::ActivateTab((int)&MEMORY[0x87F7E8], Status); /*0x50b353*/
          }
        }
      }
      v2 = this->lastBuiltInfantryType; /*0x50b358*/
    }
  }
  return v2; /*0x50b369*/
}


// ==== 0x0050B370  HouseClass::ShouldDisableCameo  this=HouseClass  sig=csp ====
char __thiscall HouseClass::ShouldDisableCameo(_DWORD *this, int a2)
{
  _DWORD *v3; // ebp
  int v4; // edx
  int v5; // ebx
  int *v7; // edi
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
  RulesClass *v19; // eax
  int v20; // esi
  int v21; // ebx
  _DWORD *v22; // ebp
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
          v7 = (int *)v3[5358]; /*0x50b446*/
        else
          v7 = (int *)v3[5357]; /*0x50b451*/
        goto LABEL_4; /*0x50b44c*/
      case 2: /*0x50b3b2*/
      case 3: /*0x50b3b2*/
        v7 = (int *)v3[5355]; /*0x50b467*/
        goto LABEL_4; /*0x50b46d*/
      case 6: /*0x50b3b2*/
      case 7: /*0x50b3b2*/
        v7 = (int *)v3[5359]; /*0x50b45c*/
        goto LABEL_4; /*0x50b462*/
      case 15: /*0x50b3b2*/
      case 16: /*0x50b3b2*/
        v7 = (int *)v3[5356]; /*0x50b3b9*/
LABEL_4:
        if ( v7 ) /*0x50b3c1*/
        {
          v31 = FactoryClass::CountType(v7, a2); /*0x50b3cb*/
          v5 = v31; /*0x50b3cf*/
        }
        break; /*0x50b3cf*/
      default:
        v7 = 0; /*0x50b472*/
        break; /*0x50b474*/
    }
    switch ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) ) /*0x50b3ec*/
    {
      case 3: /*0x50b3ec*/
        if ( *(_BYTE *)(a2 + 3597) ) /*0x50b570*/
        {
          v19 = MEMORY[0x8871E0]; /*0x50b57a*/
          v20 = 0; /*0x50b57f*/
          v21 = 0; /*0x50b581*/
          v35 = 0; /*0x50b583*/
          if ( MEMORY[0x8871E0]->?[3] > 0 ) /*0x50b58d*/
          {
            v22 = v3 + 5475; /*0x50b58f*/
            do /*0x50b5d7*/
            {
              v23 = *(_DWORD *)(v19->?[0] + 4 * v20); /*0x50b59b*/
              v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 64))(v23); /*0x50b5a0*/
              v21 += DynamicVector::GetOrGrow(v22, v24); /*0x50b5ab*/
              if ( v7 ) /*0x50b5af*/
                v35 += FactoryClass::CountType(v7, *(_DWORD *)(MEMORY[0x8871E0]->?[0] + 4 * v20)); /*0x50b5c7*/
              v19 = MEMORY[0x8871E0]; /*0x50b5cb*/
              ++v20; /*0x50b5d0*/
            }
            while ( v20 < MEMORY[0x8871E0]->?[3] ); /*0x50b5d7*/
            v3 = this; /*0x50b5d9*/
          }
          return v21 + v35 >= v3[181]; /*0x50b5eb*/
        }
        else
        {
          v26 = *(_DWORD *)(a2 + 952); /*0x50b5f9*/
          if ( v26 > 0 ) /*0x50b601*/
          {
            v30 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b63c*/
            v10 = DynamicVector::GetOrGrow(v3 + 5455, v30); /*0x50b643*/
            goto LABEL_46; /*0x50b643*/
          }
          v27 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b607*/
          return v5 + DynamicVector::GetOrGrow(v3 + 5495, v27) >= (int)abs32(v26); /*0x50b623*/
        }
      case 7: /*0x50b3ec*/
        v17 = *(_DWORD *)(a2 + 952); /*0x50b525*/
        if ( v17 > 0 ) /*0x50b52d*/
        {
          v29 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b564*/
          v10 = DynamicVector::GetOrGrow(v3 + 5440, v29); /*0x50b56b*/
          goto LABEL_46; /*0x50b56b*/
        }
        v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b533*/
        return v5 + DynamicVector::GetOrGrow(v3 + 5480, v18) >= (int)abs32(v17); /*0x50b54f*/
      case 16: /*0x50b3ec*/
        if ( *(int *)(a2 + 952) <= 0 ) /*0x50b481*/
        {
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b487*/
          if ( v5 + DynamicVector::GetOrGrow(v3 + 5490, v11) >= (int)abs32(*(_DWORD *)(a2 + 952)) ) /*0x50b4a7*/
            return 1; /*0x50b4a7*/
        }
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b4b1*/
        v34 = DynamicVector::GetOrGrow(v3 + 5450, v12); /*0x50b4c0*/
        if ( *(_BYTE *)(a2 + 3782) ) /*0x50b4c4*/
        {
          for ( i = 0; i < MEMORY[0x8B4118]; ++i ) /*0x50b4d7*/
          {
            v14 = *((_DWORD *)MEMORY[0x8B410C] + i); /*0x50b4de*/
            if ( *(_DWORD **)(v14 + 540) == v3 /*0x50b4f6*/
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
          return v5 + DynamicVector::GetOrGrow(v3 + 5485, v9) >= (int)abs32(v8); /*0x50b41d*/
        }
        v28 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 64))(a2); /*0x50b432*/
        v10 = DynamicVector::GetOrGrow(v3 + 5445, v28); /*0x50b439*/
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


// ==== 0x0050B6F0  House::IsHumanPlayer  this=IUnknown  sig=csp ====
int __thiscall House::IsHumanPlayer(#375 *this)
{
  if ( MEMORY[0xA8B238][0] ) /*0x50b6f7*/
    return this == HouseClass_Player; /*0x50b720*/
  return *((_BYTE *)this + 492) || *((_BYTE *)this + 493); /*0x50b70f*/
}


// ==== 0x0050B730  House::IsCurrentPlayer  this=AbstractClass  sig=csp ====
int __thiscall House::IsCurrentPlayer(#375 *this)
{
  int result; // eax

  result = MEMORY[0xA8B238][0]; /*0x50b730*/
  LOBYTE(result) = this->q1EC; /*0x50b737*/
  if ( !MEMORY[0xA8B238][0] ) /*0x50b73d*/
    LOBYTE(result) = (_BYTE)result || this->q7B4; /*0x50b750*/
  return result; /*0x50b74f*/
}


// ==== 0x0050B760  BuildingTypeClass::ProcessData  this=BuildingTypeClass  sig=csp ====
char __thiscall sub_50B760(_DWORD *this, _DWORD *a2, __int16 *a3)
{
  int v5; // ebx
  int v6; // ebx
  int v7; // ebp
  __int16 *v8; // ecx
  int v9; // edi
  int v10; // esi
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  if ( !MEMORY[0xA8B238][0] ) /*0x50b770*/
    return 1; /*0x50b77b*/
  v5 = (int)a2; /*0x50b783*/
  v11 = *(_DWORD *)&MEMORY[0x8871E0][1].FreeMCV; /*0x50b78f*/
  v12 = 2 * v11 + BuildingTypeClass::GetFoundationWidth(a2); /*0x50b7a3*/
  v6 = 2 * v11 + BuildingTypeClass::GetFoundationHeight(v5, 0); /*0x50b7b1*/
  v7 = 1 << this->TargetSpecialThreatCoefficient; /*0x50b7b8*/
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
      if ( (v7 & *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2) + 55)) != 0 ) /*0x50b806*/
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


// ==== 0x0050B840  HouseClass::GetColor  this=HouseClass  sig=csp ====
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
    this->startingCell = 5; /*0x50b84e*/
  v2 = *((_DWORD *)MEMORY[0xB054D4] + this->startingCell); /*0x50b863*/
  if ( !v2 ) /*0x50b868*/
  {
    Debug::Log(); /*0x50b87e*/
    this->startingCell = 5; /*0x50b883*/
    v2 = *((_DWORD *)MEMORY[0xB054D4] + 5); /*0x50b895*/
  }
  v3 = *(_DWORD *)(v2 + 816); /*0x50b898*/
  v4 = *(_DWORD *)(v2 + 780); /*0x50b89e*/
  v5 = *(_DWORD *)(v4 + 372); /*0x50b8aa*/
  if ( *(_DWORD *)(v4 + 4) == 1 ) /*0x50b8b0*/
    v6 = *(unsigned __int8 *)(v5 + v3); /*0x50b8b4*/
  else
    v6 = *(_WORD *)(v5 + 2 * v3); /*0x50b8bb*/
  LOBYTE(v9) = (unsigned __int8)(v6 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x50b8da*/
  HIBYTE(v9) = (unsigned __int8)(v6 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x50b8fb*/
  result = (unsigned __int8)(v6 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x50b8ff*/
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
__int64 __thiscall ComputeSessionColorVector(unsigned __int8 *this)
{
  double v2; // st7
  double v3; // st7
  unsigned __int8 v5; // c0
  unsigned __int8 v6; // c3
  double v7; // st7
  double v8; // st7
  __int64 result; // rax
  double v10; // [esp+10h] [ebp-18h]
  double v11; // [esp+10h] [ebp-18h]
  double v12; // [esp+18h] [ebp-10h]
  double v13; // [esp+18h] [ebp-10h]
  double v14; // [esp+20h] [ebp-8h]
  double v15; // [esp+20h] [ebp-8h]

  v12 = (double)this->q56F9; /*0x50ba33*/
  v14 = (double)this->q56FA; /*0x50ba3f*/
  v10 = (double)this->q56FB; /*0x50ba47*/
  v2 = Math::Sqrt(v10 * v10 + v14 * v14 + v12 * v12); /*0x50ba64*/
  if ( v2 == 0.0 ) /*0x50ba77*/
  {
    v3 = 255.0; /*0x50ba7b*/
    v15 = 255.0; /*0x50ba81*/
    v11 = 255.0; /*0x50ba91*/
    v13 = 255.0; /*0x50ba95*/
  }
  else
  {
    v13 = v12 * 240.0 / v2; /*0x50bab6*/
    if ( v13 > 255.0 ) /*0x50bac5*/
      v13 = 255.0; /*0x50bac7*/
    v15 = v14 * 240.0 / v2; /*0x50bae3*/
    if ( v15 > 255.0 ) /*0x50baf2*/
      v15 = 255.0; /*0x50baf4*/
    v3 = v10 * 240.0 / v2; /*0x50bb0e*/
    v11 = v3; /*0x50bb16*/
    if ( !(v5 | v6) ) /*0x50bb1c*/
    {
      v3 = 255.0; /*0x50bb23*/
      v11 = 255.0; /*0x50bb29*/
    }
    if ( v13 < 96.0 ) /*0x50bb3c*/
      v13 = 0.0; /*0x50bb3e*/
    if ( v15 < 96.0 ) /*0x50bb5d*/
      v15 = 0.0; /*0x50bb5f*/
    if ( v3 < 96.0 ) /*0x50bb7a*/
    {
      v3 = 0.0; /*0x50bb7e*/
      v11 = 0.0; /*0x50bb84*/
    }
  }
  v7 = Math::Sqrt(v3 * v3 + v15 * v15 + v13 * v13); /*0x50bba8*/
  if ( v7 == 0.0 ) /*0x50bbbb*/
  {
    v8 = 255.0; /*0x50bbbf*/
  }
  else
  {
    v8 = v11 * 240.0 / v7; /*0x50bc4b*/
    if ( v8 > 255.0 ) /*0x50bc58*/
      v8 = 255.0; /*0x50bc5c*/
  }
  this->q56FC = Math::RoundToInt(v8); /*0x50bc6f*/
  this->q56FD = Math::RoundToInt(v8); /*0x50bc7a*/
  result = Math::RoundToInt(v8); /*0x50bc80*/
  this->q56FE = result; /*0x50bc85*/
  return result; /*0x50bc8b*/
}


// ==== 0x0050BC90  HouseClass::CreatePowerOutage  this=HouseClass  sig=csp ====
int __thiscall HouseClass::CreatePowerOutage(int this, int a2)
{
  wchar_t *v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  v2 = MEMORY[0xA8ED84]; /*0x50bc90*/
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

  v2 = MEMORY[0xA8ED84]; /*0x50bcd0*/
  *(_BYTE *)(this + 22393) = 1; /*0x50bcdc*/
  *(_DWORD *)(this + 688) = v2; /*0x50bcea*/
  *(_DWORD *)(this + 692) = v4; /*0x50bcf4*/
  *(_DWORD *)(this + 696) = a2; /*0x50bcf7*/
  return v4; /*0x50bcfa*/
}


// ==== 0x0050BD10  HouseClass::ReshroudMap  this=HouseClass  sig=csp ====
char __thiscall HouseClass::ReshroudMap(IUnknown *this)
{
  char result; // al

  result = this->__pad_5778[2]; /*0x50bd10*/
  if ( !result ) /*0x50bd18*/
    return ShroudClass::Reset(&MEMORY[0x87F7E8], this); /*0x50bd20*/
  return result; /*0x50bd25*/
}


// ==== 0x0050BD30  TechnoClass::GetDamageMultiplier  this=HouseClass  sig=csp ====
double __thiscall TechnoClass::GetDamageMultiplier(_DWORD *this, AbstractClass *aP1)
{
  double result; // st7

  switch ( (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) ) /*0x50bd4f*/
  {
    case 3: /*0x50bd4f*/
      result = *(float *)(this->relatedTagsCapacity + 264); /*0x50bd77*/
      break; /*0x50bd7d*/
    case 7: /*0x50bd4f*/
      if ( aP1[99].referenceCount == 5 ) /*0x50bd87*/
        result = *(float *)(this->relatedTagsCapacity + 272); /*0x50bd8e*/
      else
        result = *(float *)(this->relatedTagsCapacity + 268); /*0x50bd9c*/
      break; /*0x50bd94*/
    case 16: /*0x50bd4f*/
      result = *(float *)(this->relatedTagsCapacity + 256); /*0x50bd5b*/
      break; /*0x50bd61*/
    case 40: /*0x50bd4f*/
      result = *(float *)(this->relatedTagsCapacity + 260); /*0x50bd69*/
      break; /*0x50bd6f*/
    default:
      result = 1.0; /*0x50bda5*/
      break; /*0x50bda5*/
  }
  return result; /*0x50bdab*/
}


// ==== 0x0050BDF0  TechnoTypeClass::Dispatch  this=TechnoTypeClass  sig=csp ====
double __thiscall TechnoTypeClass::Dispatch(_DWORD *this, TechnoTypeClass *aP1)
{
  double result; // st7

  switch ( (*(int (__thiscall **)(TechnoTypeClass *))(*(_DWORD *)aP1->vtable0 + 44))(aP1) ) /*0x50be0f*/
  {
    case 3: /*0x50be0f*/
      result = *(float *)(this->q034 + 284); /*0x50be37*/
      break; /*0x50be3d*/
    case 7: /*0x50be0f*/
      if ( aP1[4].VoxelCaches[5] == 5 ) /*0x50be47*/
        result = *(float *)(this->q034 + 292); /*0x50be4e*/
      else
        result = *(float *)(this->q034 + 288); /*0x50be5c*/
      break; /*0x50be54*/
    case 16: /*0x50be0f*/
      result = *(float *)(this->q034 + 276); /*0x50be1b*/
      break; /*0x50be21*/
    case 40: /*0x50be0f*/
      result = *(float *)(this->q034 + 280); /*0x50be29*/
      break; /*0x50be2f*/
    default:
      result = 1.0; /*0x50be65*/
      break; /*0x50be65*/
  }
  return result; /*0x50be6b*/
}


// ==== 0x0050BEB0  TechnoTypeClass::GetThreatMultiplier  this=TechnoTypeClass  sig=csp ====
double __thiscall TechnoTypeClass::GetThreatMultiplier(float *this, TechnoTypeClass *aP1)
{
  double result; // st7

  switch ( (*(int (__thiscall **)(TechnoTypeClass *))(*(_DWORD *)aP1->vtable0 + 44))(aP1) ) /*0x50becf*/
  {
    case 3: /*0x50becf*/
      result = this->q14E6; /*0x50beec*/
      break; /*0x50bef4*/
    case 7: /*0x50becf*/
      if ( aP1[4].VoxelCaches[5] == 5 ) /*0x50befe*/
        result = this->q14E8; /*0x50bf00*/
      else
        result = this->q14E7; /*0x50bf0b*/
      break; /*0x50bf08*/
    case 16: /*0x50becf*/
      result = this->q14E4; /*0x50bed6*/
      break; /*0x50bede*/
    case 40: /*0x50becf*/
      result = this->q14E5; /*0x50bee1*/
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

  this->q14E4 = 1.0; /*0x50bf65*/
  this->q14E5 = 1.0; /*0x50bf6b*/
  this->q14E6 = 1.0; /*0x50bf71*/
  this->q14E7 = 1.0; /*0x50bf77*/
  this->q14E8 = 1.0; /*0x50bf7d*/
  for ( result = 0; /*0x50bf8d*/
        result < this->q054;
        this->q14E8 = *(float *)(*(_DWORD *)(*(_DWORD *)(this->q144 + 4 * result - 4) + 1312) + 5856)
                       * this->q14E8 )
  {
    ++result; /*0x50bf99*/
    this->q14E4 = *(float *)(*(_DWORD *)(*(_DWORD *)(this->q144 + 4 * result - 4) + 1312) + 5840) /*0x50bfb0*/
                   * this->q14E4;
    this->q14E5 = *(float *)(*(_DWORD *)(*(_DWORD *)(this->q144 + 4 * result - 4) + 1312) + 5844) /*0x50bfd2*/
                   * this->q14E5;
    this->q14E6 = *(float *)(*(_DWORD *)(*(_DWORD *)(this->q144 + 4 * result - 4) + 1312) + 5848) /*0x50bff4*/
                   * this->q14E6;
    this->q14E7 = *(float *)(*(_DWORD *)(*(_DWORD *)(this->q144 + 4 * result - 4) + 1312) + 5852) /*0x50c016*/
                   * this->q14E7;
  }
  return result; /*0x50c04a*/
}


// ==== 0x0050C050  TechnoClass::GetTargetSpeedMultiplier  this=TechnoClass  sig=csp ====
double __thiscall sub_50C050(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2); /*0x50c059*/
  switch ( v3 ) /*0x50c05f*/
  {
    case 3: /*0x50c05f*/
      return *(float *)(this->attachedTag + 304); /*0x50c093*/
    case 16: /*0x50c05f*/
      return *(float *)(this->attachedTag + 296); /*0x50c086*/
    case 40: /*0x50c05f*/
      return *(float *)(this->attachedTag + 300); /*0x50c079*/
  }
  return 1.0; /*0x50c071*/
}


// ==== 0x0050C0A0  HouseClass::GetBuildingDamageMultiplier  this=HouseClass  sig=csp ====
double __thiscall sub_50C0A0(_DWORD *this, _DWORD *a2)
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
double __thiscall sub_50C160(_DWORD *this)
{
  return *(float *)(this->attachedTag + 328); /*0x50c169*/
}


// ==== 0x0050C170  HouseClass::FindByName  this=HouseClass  sig=csp ====
int __thiscall HouseClass_FindByName(const char *this)
{
  int v1; // edx
  char *i; // ebp
  char v4[20]; // [esp+14h] [ebp-14h] BYREF

  v1 = 0; /*0x50c17a*/
  if ( HouseClass_Count <= 0 ) /*0x50c184*/
    return -1; /*0x50c1f8*/
  for ( i = (char *)HouseClass_Array; ; i += 4 ) /*0x50c186*/
  {
    strcpy(v4, (const char *)(*(_DWORD *)i + 90100)); /*0x50c1ad*/
    if ( !strcmp(v4, this) ) /*0x50c1c4*/
      break; /*0x50c1c4*/
    if ( ++v1 >= HouseClass_Count ) /*0x50c1f6*/
      return -1; /*0x50c1f6*/
  }
  return v1; /*0x50c1f8*/
}


// ==== 0x0050C210  HouseClass::SetPrimaryTechBuilding  this=HouseClass  sig=csp ====
void __thiscall sub_50C210(int this)
{
  int v1; // ebp
  int v2; // esi
  int *i; // ebx
  int v4; // edx
  int v5; // eax
  _DWORD *v6; // ecx
  _DWORD *v7; // edx
  char v8; // al
  int v9; // esi
  int v10; // [esp+10h] [ebp-14h]

  v1 = *(_DWORD *)(this + 120) - 1; /*0x50c219*/
  if ( v1 >= 0 ) /*0x50c21f*/
  {
    v2 = MEMORY[0x8871E0]->CanDetonateTimeBomb[1]; /*0x50c22d*/
    for ( i = (int *)(*(_DWORD *)(this + 108) + 4 * v1); ; --i ) /*0x50c233*/
    {
      v4 = *i; /*0x50c236*/
      v5 = 0; /*0x50c238*/
      if ( v2 > 0 ) /*0x50c23c*/
      {
        v6 = (_DWORD *)MEMORY[0x8871E0]->IvanWarhead[2]; /*0x50c24a*/
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
      LOWORD(v10) = *v7 / 256; /*0x50c2a2*/
      HIWORD(v10) = v7[1] / 256; /*0x50c2b5*/
      v8 = *(_BYTE *)(this + 492); /*0x50c2be*/
      *(_DWORD *)(this + 21648) = v10; /*0x50c2c4*/
      if ( !MEMORY[0xA8B238][0] ) /*0x50c2d2*/
        v8 = v8 || *(_BYTE *)(this + 493); /*0x50c2e6*/
      if ( !v8 && MEMORY[0xA8B238][0] ) /*0x50c2ee*/
        HouseClass::CanDetect(); /*0x50c2f0*/
      if ( !*(_DWORD *)(this + 22292) ) /*0x50c2f5*/
      {
        v9 = MEMORY[0xA8E7AC]; /*0x50c2ff*/
        MEMORY[0xA8E7AC] = 0; /*0x50c307*/
        HouseClass::GenerateAIBuildListEnsureSanity((_DWORD *)this); /*0x50c311*/
        MEMORY[0xA8E7AC] = v9; /*0x50c316*/
      }
      *(_DWORD *)(*(_DWORD *)(this + 22280) + 4) = v10; /*0x50c322*/
      *(_DWORD *)(this + 22352) = v10; /*0x50c325*/
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
  v4 = *((_DWORD *)MEMORY[0x8871E0] + 664); /*0x50c350*/
  v52 = -1; /*0x50c35d*/
  if ( v4 > 0 ) /*0x50c365*/
  {
    v5 = *((_DWORD *)MEMORY[0x8871E0] + 661); /*0x50c376*/
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
    v52 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)MEMORY[0x8871E0] + 661) + 4 * v3) + 3576); /*0x50c39d*/
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


// ==== 0x0050C8C0  HouseClass::NotifyImpactWater  this=AbstractClass  sig=csp ====
int __thiscall HouseClass::NotifyImpactWater(AnimClass *this)
{
  int v1; // edi
  int i; // esi
  AnimClass **v4; // ecx

  v1 = *(_DWORD *)&MEMORY[0xA8EA70].__pad_1B8[96]; /*0x50c8c3*/
  for ( i = 0; i < v1; ++i ) /*0x50c8cf*/
  {
    v4 = *(AnimClass ***)(*(_DWORD *)&MEMORY[0xA8EA70].__pad_1B8[84] + 4 * i); /*0x50c8d6*/
    if ( v4 && v4[135] == this ) /*0x50c8e3*/
      (*(void (__thiscall **)(AnimClass **, _DWORD))&(*v4)->__pad_361[39])(v4, 0); /*0x50c8e9*/
  }
  return PlayVocClass(MEMORY[0x8871E0]->MasterMindOverloadDeathSound, 0x2000, 1.0, 0); /*0x50c910*/
}


// ==== 0x0050C920  TechnoClass::FindDeployDestination  this=TechnoClass  sig=csp ====
__int16 __thiscall sub_50C920(int *this)
{
  int v1; // ebx
  int v3; // eax
  int v4; // ebp
  int v5; // edx
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // ebx
  void *v9; // eax
  int v11; // [esp+Ch] [ebp-10h] BYREF
  int v12; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+14h] [ebp-8h]
  int v14; // [esp+18h] [ebp-4h] BYREF

  v1 = MEMORY[0xA8EC88]; /*0x50c924*/
  v13 = MEMORY[0xA8EC88]; /*0x50c92e*/
  if ( this->q1525 == MEMORY[0xA8EF98] ) /*0x50c940*/
    v3 = this->q1524; /*0x50c952*/
  else
    v3 = this->q1525; /*0x50c95a*/
  v4 = 0; /*0x50c960*/
  v11 = v3; /*0x50c968*/
  v12 = 0; /*0x50c98f*/
  v5 = *LayerClass::Pathfinding_Find( /*0x50c99e*/
          &MEMORY[0x87F7E8],
          (int)&v12,
          &v14,
          (__int16 *)&v11,
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
  v11 = v5; /*0x50c9a3*/
  if ( v5 != MEMORY[0xA8EF98] ) /*0x50c9ae*/
  {
    LOWORD(v11) = v11 + 1; /*0x50c9c2*/
    ++HIWORD(v11); /*0x50c9c7*/
    if ( v1 > 0 ) /*0x50c9ce*/
    {
      do /*0x50cab7*/
      {
        v7 = (_DWORD *)*((_DWORD *)MEMORY[0xA8EC7C] + v4); /*0x50c9db*/
        if ( v7 ) /*0x50c9e0*/
        {
          if ( (int *)v7[135] == this ) /*0x50c9ec*/
          {
            v6 = (*(int (__thiscall **)(_DWORD))(*v7 + 44))(*((_DWORD *)MEMORY[0xA8EC7C] + v4)); /*0x50c9f6*/
            if ( v6 != 6 ) /*0x50c9fc*/
            {
              v6 = (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7); /*0x50ca06*/
              if ( v6 != 2 ) /*0x50ca0c*/
              {
                if ( !*(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v7 + 132))(v7) + 1028) /*0x50ca36*/
                  || (v6 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v7 + 132))(v7) + 1028), !*(_BYTE *)(v6 + 5817)) )
                {
                  if ( this->q1525 == MEMORY[0xA8EF98] ) /*0x50ca54*/
                    v6 = this->q1524; /*0x50ca5f*/
                  else
                    v6 = this->q1525; /*0x50ca67*/
                  v12 = v6; /*0x50ca70*/
                  if ( v6 != MEMORY[0xA8EF98] ) /*0x50ca74*/
                  {
                    v8 = *v7; /*0x50ca7d*/
                    v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v11); /*0x50ca8b*/
                    (*(void (__thiscall **)(_DWORD *, void *, int))(v8 + 1152))(v7, v9, 1); /*0x50ca93*/
                    TechnoClass::SetFocus(v7, 0); /*0x50ca9d*/
                    LOWORD(v6) = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v7 + 488))(v7, 2, 0); /*0x50caaa*/
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
bool __thiscall sub_50CAD0(_DWORD *this, int a2)
{
  int v3; // eax
  int v5; // esi
  unsigned int v6; // esi
  _DWORD *v7; // eax
  _DWORD *NeighbourContent; // eax
  _DWORD *v9; // eax

  v3 = *(_DWORD *)a2; /*0x50cad9*/
  if ( *(int *)a2 < 0 ) /*0x50cadd*/
    return 1; /*0x50cae4*/
  if ( v3 >= g_TriggerClassCount ) /*0x50caed*/
    return 0; /*0x50caf1*/
  v5 = *((_DWORD *)g_TriggerTypeCount + v3); /*0x50cafd*/
  if ( *(_BYTE *)(v5 + 1517) && *(_BYTE *)(v5 + 1516) ) /*0x50cb0a*/
    return this->alignmentPadding154 < *(_DWORD *)(LODWORD(MEMORY[0x8871E0]->?) + 4 * this->q184); /*0x50cb32*/
  if ( !MEMORY[0xA8B238][0] ) /*0x50cb40*/
    return 1; /*0x50cb44*/
  if ( !v5 ) /*0x50cb4c*/
    return 0; /*0x50cb50*/
  if ( *(_DWORD *)TechnoClass::GetWeaponSlot((void *)v5, 0) ) /*0x50cb5f*/
    return 1; /*0x50cb66*/
  if ( *(_BYTE *)(v5 + 5489) ) /*0x50cb6c*/
  {
    v6 = 0; /*0x50cb76*/
    while ( 1 ) /*0x50cb81*/
    {
      v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)(a2 + 4)); /*0x50cb81*/
      NeighbourContent = Cell::GetNeighbourContent(v7, v6); /*0x50cb89*/
      v9 = Cell::IsBridge(NeighbourContent); /*0x50cb90*/
      if ( v9 ) /*0x50cb97*/
      {
        if ( (_DWORD *)v9[135] == this ) /*0x50cb9f*/
          break; /*0x50cb9f*/
      }
      if ( (int)++v6 >= 8 ) /*0x50cba9*/
        return 0; /*0x50cbb0*/
    }
    return 1; /*0x50cb9f*/
  }
  return *(int *)(v5 + 3808) > 0 || MEMORY[0x8871E0]->?[3] + this->q1536 <= (int)MEMORY[0xA8ED84]; /*0x50cadf*/
}


// ==== 0x0050CBF0  HouseClass::FindSWBuilding  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::FindSWBuilding(_DWORD *this, HouseClass *aP1)
{
  HouseClass *v2; // edi
  int v3; // eax
  int v4; // esi
  _BYTE *v5; // ebx
  int v6; // ebp
  FactoryClass *v7; // edi
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
  CCINIClass *v25; // edx
  int v26; // ecx
  _DWORD *v27; // eax
  HouseClass *v28; // esi
  int v29; // eax
  char v31; // [esp+Bh] [ebp-3Dh]
  int v33; // [esp+10h] [ebp-38h]
  int v34; // [esp+14h] [ebp-34h]
  DynamicVector *v35; // [esp+18h] [ebp-30h]
  int v36; // [esp+18h] [ebp-30h]
  IUnknown *v37; // [esp+1Ch] [ebp-2Ch]
  DynamicVector *v38; // [esp+20h] [ebp-28h] BYREF
  _DWORD v39[3]; // [esp+24h] [ebp-24h] BYREF
  void **v40; // [esp+30h] [ebp-18h] BYREF
  void *Block; // [esp+34h] [ebp-14h]
  int v42; // [esp+38h] [ebp-10h]
  int v43; // [esp+3Ch] [ebp-Ch]
  int v44; // [esp+40h] [ebp-8h]
  int v45; // [esp+44h] [ebp-4h]

  v2 = (HouseClass *)this; /*0x50cbf5*/
  v37 = *(IUnknown **)&HouseClass_Array->__pad_0[4 * this->enemyHouseIndex]; /*0x50cc12*/
  AbstractClassVector::Construct(&v40, 0, 0); /*0x50cc16*/
  v3 = 0; /*0x50cc21*/
  v40 = &vt_DynamicVectorClass_AbstractClass; /*0x50cc25*/
  v45 = 10; /*0x50cc2d*/
  v44 = 0; /*0x50cc35*/
  v33 = 0; /*0x50cc39*/
  v34 = 0; /*0x50cc3d*/
  if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[412] > 0 ) /*0x50cc41*/
  {
    while ( 1 ) /*0x50cc56*/
    {
      v4 = 0; /*0x50cc56*/
      v5 = *(_BYTE **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[400] + 4 * v34); /*0x50cc58*/
      v31 = 0; /*0x50cc5b*/
      if ( *((IUnknown **)v5 + 135) == v37 ) /*0x50cc66*/
      {
        v4 = 1; /*0x50cc70*/
        if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 120))(v5) == 2 && v5[144] && !v5[129] ) /*0x50cc87*/
        {
          v31 = 1; /*0x50cc91*/
        }
        else if ( !*(_DWORD *)&v2->__pad_13C[72] ) /*0x50cc98*/
        {
          v6 = 0; /*0x50cca7*/
          if ( MEMORY[0xA83E40] > 0 ) /*0x50ccab*/
          {
            do /*0x50ccdc*/
            {
              v7 = *(FactoryClass **)&MEMORY[0xA83E34]->__pad_0[4 * v6]; /*0x50ccb3*/
              if ( (_BYTE *)AbstractClass::GetType(v7) == v5 && v7->queuedCapacity && !v7->isSuspended ) /*0x50ccc8*/
                v31 = 1; /*0x50cccf*/
              ++v6; /*0x50ccd9*/
            }
            while ( v6 < MEMORY[0xA83E40] ); /*0x50ccdc*/
            v2 = (HouseClass *)this; /*0x50ccde*/
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
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4616) /*0x50cd20*/
                               + 4 * *(_DWORD *)&v2->__pad_13C[72]);
              }
              else if ( *(_BYTE *)(v10 + 3782) ) /*0x50cd28*/
              {
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4644) /*0x50cd44*/
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
            v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4504) /*0x50cd79*/
                           + 4 * *(_DWORD *)&v2->__pad_13C[72]);
          }
          else if ( v12 != 40 || *(_BYTE *)(v11 + 3278) ) /*0x50cd86*/
          {
            if ( *(_DWORD *)(v11 + 3808) <= *(_DWORD *)(v11 + 3812) ) /*0x50cdb8*/
            {
              if ( *(_BYTE *)(v11 + 5894) ) /*0x50cdd4*/
              {
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4756) /*0x50cdf0*/
                               + 4 * *(_DWORD *)&v2->__pad_13C[72]);
              }
              else if ( *(_BYTE *)(v11 + 5453) ) /*0x50cdf8*/
              {
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4784) /*0x50ce14*/
                               + 4 * *(_DWORD *)&v2->__pad_13C[72]);
              }
              else if ( *(_BYTE *)(v11 + 5452) ) /*0x50ce1c*/
              {
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4840) /*0x50ce38*/
                               + 4 * *(_DWORD *)&v2->__pad_13C[72]);
              }
              else
              {
                if ( !*(_BYTE *)(v11 + 5454) ) /*0x50ce48*/
                {
                  v13 = 0; /*0x50ce6a*/
                  v14 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2348); /*0x50ce6c*/
                  if ( v14 <= 0 ) /*0x50ce74*/
                  {
LABEL_42:
                    v4 = 4; /*0x50ce88*/
                  }
                  else
                  {
                    v15 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2336); /*0x50ce76*/
                    while ( *v15 != v11 ) /*0x50ce7e*/
                    {
                      ++v13; /*0x50ce80*/
                      ++v15; /*0x50ce81*/
                      if ( v13 >= v14 ) /*0x50ce86*/
                        goto LABEL_42; /*0x50ce86*/
                    }
                    v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4588) + 4 * this->q184); /*0x50cea2*/
                  }
LABEL_54:
                  v2 = (HouseClass *)this; /*0x50cf34*/
                  goto LABEL_55; /*0x50cf34*/
                }
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4812) /*0x50ce5c*/
                               + 4 * *(_DWORD *)&v2->__pad_13C[72]);
              }
            }
            else
            {
              v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4560) /*0x50cdcc*/
                             + 4 * *(_DWORD *)&v2->__pad_13C[72]);
            }
          }
          else
          {
            v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4532) /*0x50cda2*/
                           + 4 * *(_DWORD *)&v2->__pad_13C[72]);
          }
        }
        else
        {
          v16 = *((_DWORD *)v5 + 433); /*0x50ceaa*/
          if ( !*(_BYTE *)(v16 + 3598) ) /*0x50ceb8*/
          {
            v17 = 0; /*0x50ced7*/
            v18 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2236); /*0x50ced9*/
            if ( v18 <= 0 ) /*0x50cee1*/
            {
LABEL_50:
              if ( *(int *)(v16 + 1504) <= 0 ) /*0x50cf03*/
                v4 = 2; /*0x50cf2f*/
              else
                v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4728) + 4 * this->q184); /*0x50cf15*/
            }
            else
            {
              v19 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2224); /*0x50cee9*/
              while ( *v19 != *(_DWORD *)(v16 + 1028) ) /*0x50cef1*/
              {
                ++v17; /*0x50cef3*/
                ++v19; /*0x50cef4*/
                if ( v17 >= v18 ) /*0x50cef9*/
                  goto LABEL_50; /*0x50cef9*/
              }
              v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4700) + 4 * this->q184); /*0x50cf2a*/
            }
            goto LABEL_54; /*0x50cf2d*/
          }
          v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4672) /*0x50cecc*/
                         + 4 * *(_DWORD *)&v2->__pad_13C[72]);
        }
      }
LABEL_55:
      v20 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v5 + 72))(v5, v39); /*0x50cf38*/
      LOWORD(v35) = *v20 / 256; /*0x50cf56*/
      HIWORD(v35) = v20[1] / 256; /*0x50cf6e*/
      v38 = v35; /*0x50cf77*/
      if ( !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)&v38, (TechnoClass *)1) ) /*0x50cf81*/
        v4 = 0; /*0x50cf8a*/
      if ( *((_DWORD *)v5 + 136) == 2 /*0x50cfa8*/
        || (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 44))(v5) == 6 && v5[1773] == 15 )
      {
        v21 = v33; /*0x50cfaa*/
        v4 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)(v33 + 10)); /*0x50cfc5*/
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
      if ( ++v34 >= *(int *)&MEMORY[0xA8D63C].__pad_14B0[412] ) /*0x50d09b*/
      {
        v3 = v44; /*0x50d0a1*/
        break; /*0x50d0a1*/
      }
    }
  }
  if ( v3 <= 0 ) /*0x50d0a9*/
  {
    v25 = (CCINIClass *)Block; /*0x50d137*/
    goto LABEL_87; /*0x50d137*/
  }
  v24 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)(v3 - 1)); /*0x50d0bf*/
  v25 = (CCINIClass *)Block; /*0x50d0c4*/
  v26 = *((_DWORD *)Block + v24); /*0x50d0c8*/
  if ( !v26 ) /*0x50d0cd*/
  {
LABEL_87:
    v28 = aP1; /*0x50d13b*/
    *(_DWORD *)aP1->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x50d147*/
    v40 = &vt_VectorClass_AbstractClass; /*0x50d149*/
    if ( v25 && BYTE1(v43) ) /*0x50d159*/
      __3_YAXPAX_Z(v25); /*0x50d15c*/
    return v28->__pad_0; /*0x50d15c*/
  }
  v27 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v26 + 72))(v26, v39); /*0x50d0d6*/
  v28 = aP1; /*0x50d0db*/
  LOWORD(v36) = *v27 / 256; /*0x50d0ed*/
  v29 = v27[1]; /*0x50d0f5*/
  v40 = &vt_VectorClass_AbstractClass; /*0x50d0fc*/
  HIWORD(v36) = v29 / 256; /*0x50d109*/
  *(_DWORD *)aP1->__pad_0 = v36; /*0x50d112*/
  if ( Block && BYTE1(v43) ) /*0x50d122*/
  {
    __3_YAXPAX_Z(Block); /*0x50d125*/
    return aP1->__pad_0; /*0x50d134*/
  }
  return v28->__pad_0; /*0x50d12f*/
}


// ==== 0x0050D170  HouseClass::FindSWTarget  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::FindSWTarget(void *this, HouseClass *aP1, HouseClass *aP2)
{
  int SuperWeaponTypeFlag; // ebx
  int v5; // eax
  CCINIClass *v6; // edx
  int v7; // ecx
  _DWORD *BestBuildingToRepair; // esi
  int v9; // edi
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  _DWORD v14[3]; // [esp+10h] [ebp-Ch] BYREF
  HouseClass *aP2a; // [esp+24h] [ebp+8h]

  SuperWeaponTypeFlag = GetSuperWeaponTypeFlag(aP2); /*0x50d187*/
  v5 = 0; /*0x50d189*/
  if ( *(int *)&MEMORY[0x89F690].__pad_579C[62156] <= 0 ) /*0x50d18d*/
    goto LABEL_10; /*0x50d18d*/
  v6 = *(CCINIClass **)&MEMORY[0x89F690].__pad_579C[62144]; /*0x50d193*/
  do /*0x50d1a6*/
  {
    v7 = *(_DWORD *)v6->__pad_0; /*0x50d199*/
    if ( *(void **)(*(_DWORD *)v6->__pad_0 + 44) == this ) /*0x50d19e*/
      break; /*0x50d19e*/
    ++v5; /*0x50d1a0*/
    v6 = (CCINIClass *)((char *)v6 + 4); /*0x50d1a1*/
  }
  while ( v5 < *(int *)&MEMORY[0x89F690].__pad_579C[62156] ); /*0x50d1a6*/
  if ( v7 && *(void **)(v7 + 44) == this ) /*0x50d1b3*/
  {
    BestBuildingToRepair = HouseClass::FindBestBuildingToRepair((_DWORD *)v7); /*0x50d1be*/
    v9 = *BestBuildingToRepair; /*0x50d1c7*/
    v10 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*BestBuildingToRepair + 72))(BestBuildingToRepair, v14, 1); /*0x50d1cb*/
    v11 = (*(int (__thiscall **)(_DWORD *, int, int))(v9 + 964))(BestBuildingToRepair, SuperWeaponTypeFlag, v10); /*0x50d1d2*/
    if ( v11 ) /*0x50d1da*/
    {
      v12 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v11 + 72))(v11, v14); /*0x50d1e5*/
      LOWORD(aP2a) = *v12 / 256; /*0x50d1fb*/
      HIWORD(aP2a) = v12[1] / 256; /*0x50d20f*/
      *(_DWORD *)aP1->__pad_0 = aP2a; /*0x50d21c*/
      return aP1->__pad_0; /*0x50d214*/
    }
    else
    {
      *(_DWORD *)aP1->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x50d230*/
      return aP1->__pad_0; /*0x50d224*/
    }
  }
  else
  {
LABEL_10:
    *(_DWORD *)aP1->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1196]; /*0x50d245*/
    return aP1->__pad_0; /*0x50d239*/
  }
}


// ==== 0x0050D250  CellClass::IterateOccupiers  this=CellClass  sig=csp ====
__int16 __thiscall sub_50D250(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // esi

  v3 = this->q5714 - 1; /*0x50d259*/
  if ( v3 >= 0 ) /*0x50d25a*/
  {
    v4 = this->q5714; /*0x50d265*/
    v5 = 16 * v3; /*0x50d268*/
    do /*0x50d27d*/
    {
      LOWORD(v3) = CellClass::setTileIndex((_WORD *)(v5 + this->q5708), a2); /*0x50d274*/
      v5 -= 16; /*0x50d279*/
      --v4; /*0x50d27c*/
    }
    while ( v4 ); /*0x50d27d*/
  }
  return v3; /*0x50d282*/
}


// ==== 0x0050D290  TActionClass::executeAttackAction  this=TActionClass  sig=csp ====
int __thiscall sub_50D290(void *this, int a2)
{
  int i; // edi
  _DWORD *v4; // esi
  int result; // eax

  for ( i = *(_DWORD *)(a2 + 120) - 1; i >= 0; v4[179] = this ) /*0x50d29d*/
  {
    v4 = *(_DWORD **)(*(_DWORD *)(a2 + 108) + 4 * i); /*0x50d2a6*/
    result = (*(int (__thiscall **)(_DWORD *, void *, _DWORD))(*v4 + 980))(v4, this, 0); /*0x50d2ad*/
    --i; /*0x50d2b3*/
    v4[184] = a2; /*0x50d2b4*/
  }
  return result; /*0x50d2c3*/
}


// ==== 0x0050D2D0  TActionClass::executeMoveAction  this=TActionClass  sig=csp ====
int __thiscall sub_50D2D0(_DWORD *this, int a2)
{
  int i; // ebx
  int result; // eax
  _DWORD *v5; // esi

  for ( i = this->q01E - 1; i >= 0; --i ) /*0x50d2d8*/
  {
    result = this->q1B0; /*0x50d2e0*/
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
        int a1@<ecx>,
        _UNKNOWN **a2@<ebx>,
        _DWORD *a3@<edi>,
        int a4@<esi>)
{
  int result; // eax
  __int16 *v6; // edi
  int v7; // esi
  __int16 *v8; // ebx
  _DWORD *v9; // eax
  int *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // edi
  int v14; // esi
  void *v15; // eax
  _DWORD *v16; // eax
  int i; // [esp+10h] [ebp-20h]
  int v21[3]; // [esp+14h] [ebp-1Ch] BYREF
  _DWORD v22[4]; // [esp+20h] [ebp-10h] BYREF
  _UNKNOWN *retaddr; // [esp+30h] [ebp+0h] BYREF

  result = *(_DWORD *)(a1 + 380) - 1; /*0x50d32c*/
  for ( i = result; i >= 0; --i )
  {
    v6 = *(__int16 **)(*(_DWORD *)(a1 + 368) + 4 * result); /*0x50d340*/
    v7 = *(_DWORD *)v6; /*0x50d343*/
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v6 + 44))(*(_DWORD *)v6) == 7 )
    {
      v8 = v6 + 2; /*0x50d355*/
      v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v6 + 2); /*0x50d35e*/
      v10 = Cell::IsBridge(v9); /*0x50d365*/
      if ( v10 && (v11 = v10[328], v11 == v7) && v10[135] == a1 )
      {
        v12 = *v10; /*0x50d386*/
        v21[0] = -*(_DWORD *)(v11 + 160); /*0x50d38a*/
        (*(void (__thiscall **)(int *, int *, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(v12 + 364))( /*0x50d3ac*/
          v10,
          v21,
          0,
          MEMORY[0x8871E0]->?[5],
          0,
          0,
          0,
          0);
      }
      else
      {
        v13 = (*(int (__thiscall **)(int, int, _DWORD *, int, _UNKNOWN **))(*(_DWORD *)v7 + 140))(v7, a1, a3, a4, a2); /*0x50d3bf*/
        if ( v13 )
          v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13) == 6 ? v13 : 0;
        else
          v14 = 0; /*0x50d3c5*/
        v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v8); /*0x50d3e3*/
        a2 = &retaddr; /*0x50d3ee*/
        v16 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)v15 + 72))(v15); /*0x50d3f1*/
        a4 = 0; /*0x50d3f6*/
        v22[0] = *v16; /*0x50d3f8*/
        v22[1] = v16[1]; /*0x50d3ff*/
        a3 = v22; /*0x50d40a*/
        v22[2] = v16[2]; /*0x50d40b*/
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 1168))(v14) ) /*0x50d413*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 248))(v14); /*0x50d421*/
      }
    }
    result = i - 1; /*0x50d42b*/
  }
  return result; /*0x50d439*/
}


// ==== 0x0050D440  HouseClass::RespawnStartingForces  this=HouseClass  sig=csp ====
int HouseClass::RespawnStartingForces(TechnoClass *aP0, _UNKNOWN **a1, _DWORD *a2, int a4)
{
  int v4; // ecx
  _UNKNOWN **v5; // ebp
  _DWORD *v6; // edi
  int v7; // esi
  HouseClass *v8; // ebx
  int result; // eax
  int v10; // edi
  __int16 *v11; // ebp
  int v12; // esi
  int v13; // eax
  void *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // [esp+0h] [ebp-2Ch]
  int v17; // [esp+4h] [ebp-28h]
  _UNKNOWN **v18; // [esp+8h] [ebp-24h]
  int v19; // [esp+10h] [ebp-1Ch]
  _DWORD v20[4]; // [esp+1Ch] [ebp-10h] BYREF
  _UNKNOWN *retaddr; // [esp+2Ch] [ebp+0h] BYREF

  v8 = (HouseClass *)v4; /*0x50d444*/
  result = *(_DWORD *)(v4 + 380) - 1; /*0x50d44c*/
  v19 = result; /*0x50d44d*/
  if ( result >= 0 )
  {
    v18 = v5; /*0x50d457*/
    v17 = v7; /*0x50d458*/
    v16 = v6; /*0x50d459*/
    while ( 1 )
    {
      v10 = 0; /*0x50d466*/
      v11 = *(__int16 **)(*(_DWORD *)&v8->__pad_13C[52] + 4 * result); /*0x50d468*/
      v12 = *(_DWORD *)v11; /*0x50d46b*/
      switch ( (*(int (__thiscall **)(_DWORD, _DWORD *, int, _UNKNOWN **))(**(_DWORD **)v11 + 44))(
                 *(_DWORD *)v11,
                 v16,
                 v17,
                 v18) )
      {
        case 3:
        case 7:
        case 40:
          v13 = (*(int (__thiscall **)(int, HouseClass *))(*(_DWORD *)v12 + 140))(v12, v8); /*0x50d491*/
          if ( v13 ) /*0x50d499*/
            goto LABEL_9; /*0x50d499*/
          v10 = 0; /*0x50d49b*/
          break; /*0x50d49d*/
        case 16:
          v13 = (*(int (__thiscall **)(int, HouseClass *))(*(_DWORD *)v12 + 140))(v12, v8); /*0x50d4a4*/
          if ( v13 )
LABEL_9:
            v10 = (*(_BYTE *)(v13 + 20) & 1) != 0 ? v13 : 0;
          else
            v10 = 0; /*0x50d4ae*/
          break; /*0x50d4b0*/
        default:
          break;
      }
      v14 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v11 + 2); /*0x50d4c0*/
      v18 = &retaddr; /*0x50d4d4*/
      v15 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)v14 + 72))(v14); /*0x50d4d7*/
      v17 = 0; /*0x50d4dc*/
      v20[0] = *v15; /*0x50d4de*/
      v20[1] = v15[1]; /*0x50d4e5*/
      v16 = v20; /*0x50d4f0*/
      v20[2] = v15[2]; /*0x50d4f1*/
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 1168))(v10) ) /*0x50d4f9*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 248))(v10); /*0x50d507*/
      result = --v19; /*0x50d511*/
      if ( v19 < 0 ) /*0x50d516*/
        break; /*0x50d516*/
      result = v19; /*0x50d45c*/
    }
  }
  return result; /*0x50d51f*/
}


// ==== 0x0050D610  Scenario::ProcessSidebarUnits  this=Scenario  sig=csp ====
int __thiscall sub_50D610(int this)
{
  int result; // eax
  _DWORD *v3; // esi
  int v4; // ebx
  int v5; // esi
  int *v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int i; // [esp+Ch] [ebp-8h]
  char v12[4]; // [esp+10h] [ebp-4h] BYREF

  result = MEMORY[0xA8EC88] - 1; /*0x50d619*/
  for ( i = MEMORY[0xA8EC88] - 1; i >= 0; --i ) /*0x50d622*/
  {
    v3 = (_DWORD *)*((_DWORD *)MEMORY[0xA8EC7C] + result); /*0x50d631*/
    if ( v3[135] == this ) /*0x50d63a*/
    {
      v4 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v3 + 440))(v3, v12); /*0x50d64d*/
      v5 = (*(int (__thiscall **)(_DWORD *))(*v3 + 132))(v3); /*0x50d659*/
      v6 = (int *)__2_YAPAXI_Z(8u); /*0x50d660*/
      *v6 = v5; /*0x50d665*/
      v6[1] = v4; /*0x50d66d*/
      v7 = *(_DWORD *)(this + 372); /*0x50d670*/
      if ( *(_DWORD *)(this + 380) < v7 /*0x50d695*/
        || (*(_BYTE *)(this + 377) || !v7)
        && (v8 = *(_DWORD *)(this + 384), v8 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 364) + 8))(this + 364, v7 + v8, 0) )
      {
        v9 = *(_DWORD *)(this + 380); /*0x50d69c*/
        v10 = *(_DWORD *)(this + 368); /*0x50d69f*/
        *(_DWORD *)(this + 380) = v9 + 1; /*0x50d6a5*/
        *(_DWORD *)(v10 + 4 * v9) = v6; /*0x50d6a8*/
      }
    }
    result = i - 1; /*0x50d6af*/
  }
  return result; /*0x50d6bd*/
}


// ==== 0x0050D6D0  ObjectClass::SelectSimilarBuildingTypes  this=ObjectClass  sig=csp ====
__int16 __thiscall SelectSimilarBuildingTypes(void *this, int a2)
{
  void *v2; // ebp
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
  _DWORD *v22; // eax
  int *v23; // eax
  _DWORD *v25; // [esp+20h] [ebp-54h]
  int v26; // [esp+24h] [ebp-50h]
  int v27; // [esp+28h] [ebp-4Ch]
  int v28; // [esp+2Ch] [ebp-48h]
  int v29; // [esp+34h] [ebp-40h] BYREF
  int v30; // [esp+38h] [ebp-3Ch]
  int v31; // [esp+3Ch] [ebp-38h]
  int v32; // [esp+40h] [ebp-34h] BYREF
  int v33; // [esp+44h] [ebp-30h]
  int v34; // [esp+48h] [ebp-2Ch]
  void *v35; // [esp+4Ch] [ebp-28h]
  _BYTE v36[12]; // [esp+50h] [ebp-24h] BYREF
  _BYTE v37[24]; // [esp+5Ch] [ebp-18h] BYREF
  _UNKNOWN *retaddr; // [esp+74h] [ebp+0h] BYREF

  v2 = this; /*0x50d6e0*/
  v35 = this; /*0x50d6e4*/
  if ( (_WORD)a2 == (_WORD)MEMORY[0xA8EF98] ) /*0x50d6e8*/
  {
    LOWORD(i) = HIWORD(a2); /*0x50d6ea*/
    if ( HIWORD(a2) == HIWORD(MEMORY[0xA8EF98]) ) /*0x50d6f6*/
      return i; /*0x50d6f6*/
  }
  v30 = 0; /*0x50d702*/
  i = MEMORY[0x8B3DD0] - 1; /*0x50d70a*/
  v34 = MEMORY[0x8B3DD0] - 1; /*0x50d70f*/
  if ( MEMORY[0x8B3DD0] - 1 < 0 ) /*0x50d713*/
    return i; /*0x50d713*/
  while ( 1 ) /*0x50d725*/
  {
    v4 = (_DWORD *)*((_DWORD *)MEMORY[0x8B3DC4] + i); /*0x50d725*/
    v5 = HIWORD(a2) + HIWORD(dword_ABD490[v30]); /*0x50d73c*/
    v6 = (_WORD *)(4 * v30 + 11261072); /*0x50d741*/
    LOWORD(v31) = a2 + LOWORD(dword_ABD490[v30]); /*0x50d74b*/
    HIWORD(v31) = v5; /*0x50d750*/
    v29 = v31; /*0x50d759*/
    if ( (void *)v4[135] != v2 ) /*0x50d765*/
      goto LABEL_25; /*0x50d765*/
    if ( !v4 || (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 1 || v4[71] ) /*0x50d783*/
      break; /*0x50d783*/
    v7 = *v4; /*0x50d791*/
    v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v29); /*0x50d7a5*/
    for ( i = (*(int (__thiscall **)(_DWORD *, void *, int, int, _DWORD, int))(v7 + 428))(v4, v8, -1, -1, 0, 1); /*0x50d7b5*/
          i;
          i = (*(int (__thiscall **)(_DWORD *, void *, int, int, _DWORD, int))(v10 + 428))(v4, v11, -1, -1, 0, 1) )
    {
      v6 += 2; /*0x50d7bb*/
      ++v30; /*0x50d7c5*/
      if ( (int)v6 > (int)&dword_ABDA08 ) /*0x50d7c9*/
        return i; /*0x50d7c9*/
      v9 = HIWORD(a2) + v6[1]; /*0x50d7d6*/
      LOWORD(v32) = a2 + *v6; /*0x50d7e0*/
      HIWORD(v32) = v9; /*0x50d7e7*/
      v29 = v32; /*0x50d7f9*/
      v10 = *v4; /*0x50d7fd*/
      v11 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v29); /*0x50d804*/
    }
    v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v29); /*0x50d816*/
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
  if ( (void *)v4[135] != v2 || !v4 || (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 15 || v4[71] ) /*0x50d895*/
    goto LABEL_25; /*0x50d89d*/
  v15 = *v4; /*0x50d8a3*/
  v16 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v29); /*0x50d8b7*/
  i = (*(int (__thiscall **)(_DWORD *, void *, int, int, _DWORD, int))(v15 + 428))(v4, v16, -1, -1, 0, 1); /*0x50d8bf*/
  if ( !i ) /*0x50d8c7*/
  {
LABEL_23:
    v20 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v29); /*0x50d928*/
    v21 = *v4; /*0x50d939*/
    v25 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v20 + 72))( /*0x50d94b*/
                      v20,
                      v37,
                      0,
                      0,
                      0);
    v22 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v32); /*0x50d95b*/
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
    if ( (int)v6 > (int)&dword_ABDA08 ) /*0x50d8db*/
      return i; /*0x50d9a7*/
    v17 = HIWORD(a2) + v6[1]; /*0x50d8e8*/
    LOWORD(v33) = a2 + *v6; /*0x50d8f2*/
    HIWORD(v33) = v17; /*0x50d8f9*/
    v29 = v33; /*0x50d90b*/
    v18 = *v4; /*0x50d90f*/
    v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v29); /*0x50d916*/
    i = (*(int (__thiscall **)(_DWORD *, void *, int, int, _DWORD, int))(v18 + 428))(v4, v19, -1, -1, 0, 1); /*0x50d91e*/
    if ( !i ) /*0x50d926*/
      goto LABEL_23; /*0x50d926*/
  }
}


// ==== 0x0050D9C0  TechnoClass::processExperienceGain  this=TechnoClass  sig=csp ====
BOOL __thiscall sub_50D9C0(_DWORD *this)
{
  return this->firepowerMultiplier > 0; /*0x50d9cd*/
}


// ==== 0x0050D9D0  TechnoClass::updateVeterancy  this=TechnoClass  sig=csp ====
BOOL __thiscall sub_50D9D0(_DWORD *this)
{
  return this->q168 > 0; /*0x50d9dd*/
}


// ==== 0x0050D9E0  HouseClass::GetInfSelfHealStep  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GetInfSelfHealStep(_DWORD *this)
{
  return this->techInfiltrationFlags * MEMORY[0x8871E0]->SelfHealInfantryAmount; /*0x50d9ef*/
}


// ==== 0x0050D9F0  HouseClass::GetUnitSelfHealStep  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GetUnitSelfHealStep(_DWORD *this)
{
  return this->productionInfiltrationFlags * MEMORY[0x8871E0]->SelfHealUnitAmount; /*0x50d9ff*/
}


// ==== 0x0050DA00  TActionClass::executeGuardAction  this=TActionClass  sig=csp ====
int __thiscall sub_50DA00(_DWORD *this, int a2)
{
  this->q54F0 = a2; /*0x50da04*/
  return a2; /*0x50da0a*/
}


// ==== 0x0050DA10  ObjectClass::GlobalHelper_0E4440_Helper  this=ObjectClass  sig=csp ====
int __thiscall sub_50DA10(_DWORD *this)
{
  int result; // eax

  result = MEMORY[0xA8EF98]; /*0x50da10*/
  this->q153C = MEMORY[0xA8EF98]; /*0x50da15*/
  return result; /*0x50da1b*/
}


// ==== 0x0050DA20  TActionClass::executeHuntAction  this=TActionClass  sig=csp ====
int __thiscall sub_50DA20(_DWORD *this, int a2)
{
  this->q54F4 = a2; /*0x50da24*/
  this->q54FC = MEMORY[0xA8ED84]; /*0x50da30*/
  return a2; /*0x50da36*/
}


// ==== 0x0050DA40  ObjectClass::method_50DA40  this=ObjectClass  sig=csp ====
int __thiscall sub_50DA40(_DWORD *this, int a2)
{
  this->q153E = a2; /*0x50da44*/
  return a2; /*0x50da4a*/
}


// ==== 0x0050DA50  ObjectClass::GlobalHelper_0E44C0_Helper  this=ObjectClass  sig=csp ====
int __thiscall sub_50DA50(_DWORD *this)
{
  int result; // eax

  result = MEMORY[0xA8EF98]; /*0x50da50*/
  this->q153F = -100; /*0x50da55*/
  this->q153D = result; /*0x50da5f*/
  this->q153E = MEMORY[0xA8EF98]; /*0x50da6b*/
  return result; /*0x50da71*/
}


// ==== 0x0050DA80  HouseClass::GetTransitionCount  this=TechnoClass  sig=csp ====
unsigned int __thiscall HouseClass_GetTransitionCount(unsigned int *this)
{
  unsigned int result; // eax

  result = this->q577C; /*0x50da80*/
  if ( result >= 4 ) /*0x50da88*/
    return 0; /*0x50da8f*/
  return result; /*0x50da91*/
}


// ==== 0x0050DAA0  FootClass::checkTurning  this=FootClass  sig=csp ====
unsigned int __thiscall sub_50DAA0(unsigned int *this)
{
  unsigned int result; // eax

  result = this->spawnStatus; /*0x50daa0*/
  if ( result >= 4 ) /*0x50daa8*/
    return 0; /*0x50daaf*/
  return result; /*0x50dab1*/
}


// ==== 0x0050DAC0  TechnoClass::MapHouseRelationIndex  this=HouseClass  sig=csp ====
int __thiscall sub_50DAC0(_DWORD *this)
{
  int result; // eax

  switch ( this->HouseClass_field_timer_C ) /*0x50dacb*/
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
int __thiscall House::ChooseHouseEnemy(int *this, BuildingClass *aP1)
{
  void *v2; // edx
  void *v3; // ebx
  int *v4; // esi
  int v5; // edi
  void *v6; // ebp
  MouseClass *v7; // ecx
  int v8; // eax
  int v9; // eax
  _BYTE *v10; // esi
  MouseClass *v11; // ecx
  int *v12; // eax
  int result; // eax
  __int16 *v14; // eax
  int v15; // esi
  int v16; // edi
  _DWORD *v17; // eax
  int v18; // ecx
  double v19; // st7
  int v20; // ebp
  _DWORD *v21; // eax
  int v22; // ecx
  double v23; // st7
  int v24; // ebx
  _DWORD *v25; // eax
  int v26; // ecx
  double v27; // st7
  _DWORD *v28; // eax
  int v29; // ecx
  double v30; // st7
  int v31; // eax
  MouseClass *v33; // [esp+20h] [ebp-24h] BYREF
  int v34; // [esp+24h] [ebp-20h]
  _DWORD v35[3]; // [esp+2Ch] [ebp-18h] BYREF
  int v36; // [esp+38h] [ebp-Ch] BYREF
  void *v37; // [esp+3Ch] [ebp-8h]
  void *v38; // [esp+40h] [ebp-4h]
  BuildingClass *aP1a; // [esp+48h] [ebp+4h]
  BuildingClass *aP1b; // [esp+48h] [ebp+4h]

  v2 = *(void **)&MEMORY[0xA8D63C].__pad_14B0[1300]; /*0x50db03*/
  v3 = *(void **)&MEMORY[0xA8D63C].__pad_14B0[1296]; /*0x50db0a*/
  v4 = this; /*0x50db12*/
  v5 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1292]; /*0x50db19*/
  v36 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1292]; /*0x50db25*/
  v37 = *(void **)&MEMORY[0xA8D63C].__pad_14B0[1296]; /*0x50db29*/
  v38 = *(void **)&MEMORY[0xA8D63C].__pad_14B0[1300]; /*0x50db2d*/
  v6 = *(void **)&MEMORY[0xA8D63C].__pad_14B0[1300]; /*0x50db31*/
  if ( aP1 && HIBYTE(aP1->barrelRecoil[5]) && *((_DWORD *)aP1->Type + 942) == 7 ) /*0x50db4c*/
  {
    v7 = (MouseClass *)(*(int (__stdcall **)(_DWORD *))(*(_DWORD *)aP1->__pad_0 + 72))(v35); /*0x50db58*/
    v8 = v7->field_0; /*0x50db5a*/
    v36 = v7->field_0; /*0x50db5c*/
    v37 = v7->field_4; /*0x50db63*/
    v38 = v7->field_8; /*0x50db6a*/
    goto LABEL_20; /*0x50db6e*/
  }
  if ( !this->q0BC || (v9 = 0, aP1a = 0, this->q078 <= 0) ) /*0x50db8c*/
  {
LABEL_23:
    v8 = v5; /*0x50dc5c*/
    v37 = v3; /*0x50dc5e*/
    v36 = v5; /*0x50dc62*/
    v38 = v6; /*0x50dc66*/
    goto LABEL_24; /*0x50dc66*/
  }
  while ( 1 ) /*0x50dba1*/
  {
    v10 = *(_BYTE **)(v4[27] + 4 * v9); /*0x50dba1*/
    if ( !v10 || v10[129] ) /*0x50dba8*/
      goto LABEL_18; /*0x50dbb0*/
    if ( *(_BYTE *)(*((_DWORD *)v10 + 328) + 5817) ) /*0x50dbb8*/
      break; /*0x50dbb8*/
    if ( v5 == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1292] /*0x50dc06*/
      && v3 == *(void **)&MEMORY[0xA8D63C].__pad_14B0[1296]
      && v6 == v2 )
    {
      v12 = (int *)(*(int (__thiscall **)(_BYTE *, MouseClass **))(*(_DWORD *)v10 + 72))(v10, &v33); /*0x50dc11*/
      v5 = *v12; /*0x50dc14*/
      v3 = (void *)v12[1]; /*0x50dc16*/
      v6 = (void *)v12[2]; /*0x50dc19*/
    }
LABEL_18:
    v9 = (int)&aP1a->__pad_0[1]; /*0x50dc1c*/
    aP1a = (BuildingClass *)v9; /*0x50dc28*/
    if ( v9 >= this->q078 ) /*0x50dc2e*/
    {
      v8 = v36; /*0x50dc34*/
      v4 = this; /*0x50dc38*/
      goto LABEL_20; /*0x50dc38*/
    }
    v4 = this; /*0x50db94*/
    v2 = *(void **)&MEMORY[0xA8D63C].__pad_14B0[1300]; /*0x50db98*/
  }
  v11 = (MouseClass *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v10 + 72))(v10, v35); /*0x50dbce*/
  v8 = v11->field_0; /*0x50dbd0*/
  v36 = v11->field_0; /*0x50dbd2*/
  v37 = v11->field_4; /*0x50dbd9*/
  v38 = v11->field_8; /*0x50dbe0*/
  if ( !v10[979] ) /*0x50dbe4*/
    goto LABEL_18; /*0x50dbec*/
  v4 = this; /*0x50dca9*/
LABEL_20:
  if ( v8 == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1292] ) /*0x50dc40*/
  {
    v2 = *(void **)&MEMORY[0xA8D63C].__pad_14B0[1300]; /*0x50dc4e*/
    if ( v37 == *(void **)&MEMORY[0xA8D63C].__pad_14B0[1296] && v38 == *(void **)&MEMORY[0xA8D63C].__pad_14B0[1300] ) /*0x50dc5a*/
      goto LABEL_23; /*0x50dc5a*/
LABEL_24:
    if ( v8 == *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1292] /*0x50dc84*/
      && v37 == *(void **)&MEMORY[0xA8D63C].__pad_14B0[1296]
      && v38 == v2 )
    {
      result = v4[5599]; /*0x50dc86*/
      if ( result >= 0 ) /*0x50dc8e*/
      {
        if ( result > 3 ) /*0x50dc97*/
          return 0; /*0x50dca0*/
        return result; /*0x50dca6*/
      }
      return 0; /*0x50dede*/
    }
  }
  v14 = (__int16 *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v36); /*0x50dcb9*/
  v15 = v14[18]; /*0x50dcbe*/
  v16 = v14[19]; /*0x50dcc2*/
  v33 = (MouseClass *)((int)MEMORY[0x87F8E4].field_8 / 2); /*0x50dcd9*/
  v34 = 1; /*0x50dce3*/
  v17 = HexCoord::Convert(&MEMORY[0x87F7E8], (IUnknown *)v35, (IUnknown *)&v33); /*0x50dceb*/
  v18 = v17[1]; /*0x50dcfd*/
  v33 = (MouseClass *)(v15 - *v17); /*0x50dd00*/
  v34 = v16 - v18; /*0x50dd06*/
  v19 = Math::Sqrt((double)(int)v33 * (double)(int)v33 + (double)(v16 - v18) * (double)(v16 - v18)); /*0x50dd23*/
  v20 = Math::RoundToInt(v19); /*0x50dd3c*/
  v33 = (MouseClass *)MEMORY[0x87F8E4].field_8; /*0x50dd3e*/
  v34 = (int)MEMORY[0x87F8E4].field_C; /*0x50dd51*/
  v21 = HexCoord::Convert(&MEMORY[0x87F7E8], (IUnknown *)v35, (IUnknown *)&v33); /*0x50dd55*/
  v22 = v21[1]; /*0x50dd61*/
  v33 = (MouseClass *)(v15 - *v21); /*0x50dd6c*/
  v34 = v16 - v22; /*0x50dd70*/
  v23 = Math::Sqrt((double)(int)v33 * (double)(int)v33 + (double)(v16 - v22) * (double)(v16 - v22)); /*0x50dd8d*/
  v24 = Math::RoundToInt(v23); /*0x50dd9a*/
  v33 = (MouseClass *)((int)MEMORY[0x87F8E4].field_8 / 2); /*0x50dda6*/
  v34 = 2 * (int)MEMORY[0x87F8E4].field_C; /*0x50ddc2*/
  v25 = HexCoord::Convert(&MEMORY[0x87F7E8], (IUnknown *)v35, (IUnknown *)&v33); /*0x50ddc6*/
  v26 = v25[1]; /*0x50ddd2*/
  v33 = (MouseClass *)(v15 - *v25); /*0x50dddd*/
  v34 = v16 - v26; /*0x50dde1*/
  v27 = Math::Sqrt((double)(int)v33 * (double)(int)v33 + (double)(v16 - v26) * (double)(v16 - v26)); /*0x50ddfe*/
  aP1b = (BuildingClass *)Math::RoundToInt(v27); /*0x50de11*/
  v34 = (int)MEMORY[0x87F8E4].field_C; /*0x50de1d*/
  v33 = 0; /*0x50de28*/
  v28 = HexCoord::Convert(&MEMORY[0x87F7E8], (IUnknown *)v35, (IUnknown *)&v33); /*0x50de30*/
  v29 = v28[1]; /*0x50de3e*/
  v33 = (MouseClass *)(v15 - *v28); /*0x50de41*/
  v34 = v16 - v29; /*0x50de47*/
  v30 = Math::Sqrt((double)(int)v33 * (double)(int)v33 + (double)(v16 - v29) * (double)(v16 - v29)); /*0x50de64*/
  v31 = Math::RoundToInt(v30); /*0x50de6c*/
  if ( v20 > v24 || v20 > (int)aP1b || v20 > v31 ) /*0x50de7f*/
  {
    if ( v24 > (int)aP1b || v24 > v31 ) /*0x50de97*/
    {
      if ( (int)aP1b > v31 ) /*0x50deab*/
        this->q577C = 3; /*0x50dec1*/
      else
        this->q577C = 2; /*0x50deb1*/
    }
    else
    {
      this->q577C = 1; /*0x50de9d*/
    }
  }
  else
  {
    this->q577C = 0; /*0x50de85*/
  }
  result = this->q577C; /*0x50decf*/
  if ( (unsigned int)result >= 4 ) /*0x50ded7*/
    return 0; /*0x50ded7*/
  return result; /*0x50dc9d*/
}


// ==== 0x0050DEF0  HouseClass::GetCurrentOption  this=AbstractClass  sig=csp ====
ObjectClass *__thiscall HouseClass::GetCurrentOption(_DWORD *this, IUnknown *aP1)
{
  if ( *((_WORD *)this + 10826) == *(_WORD *)&HouseClass_Player.__pad_5568[23780] /*0x50df0e*/
    && *((_WORD *)this + 10827) == *(_WORD *)&HouseClass_Player.__pad_5568[23782] )
  {
    aP1->field_0 = this->q5490; /*0x50df1a*/
    return (ObjectClass *)aP1; /*0x50df10*/
  }
  else
  {
    aP1->field_0 = this->q5494; /*0x50df29*/
    return (ObjectClass *)aP1; /*0x50df1f*/
  }
}


// ==== 0x0050DF30  HouseClass::GetStartCoords  this=AbstractClass  sig=csp ====
_DWORD *__thiscall HouseClass::GetStartCoords(_DWORD *this, AbstractClass *aP1)
{
  ObjectClass *v2; // ecx
  void *v4; // eax
  _DWORD *v5; // edx
  ObjectClass *v6; // [esp+4h] [ebp-10h] BYREF
  _BYTE v7[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( *((_WORD *)this + 10826) == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1196] /*0x50df4f*/
    && *((_WORD *)this + 10827) == *(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[1198] )
  {
    v2 = (ObjectClass *)this->q5490; /*0x50df51*/
  }
  else
  {
    v2 = (ObjectClass *)this->q5494; /*0x50df59*/
  }
  v6 = v2; /*0x50df66*/
  if ( v2 == *(ObjectClass **)&MEMORY[0xA8D63C].__pad_14B0[1196] ) /*0x50df6a*/
  {
    *(_DWORD *)aP1->__pad_0 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1292]; /*0x50df7f*/
    *(_DWORD *)&aP1->__pad_0[4] = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1296]; /*0x50df87*/
    *(_DWORD *)&aP1->__pad_0[8] = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[1300]; /*0x50df90*/
    return aP1->__pad_0; /*0x50df73*/
  }
  else
  {
    v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v6); /*0x50dfa4*/
    v5 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v7); /*0x50dfb5*/
    *(_DWORD *)aP1->__pad_0 = *v5; /*0x50dfbf*/
    *(_DWORD *)&aP1->__pad_0[4] = v5[1]; /*0x50dfc4*/
    *(_DWORD *)&aP1->__pad_0[8] = v5[2]; /*0x50dfcb*/
    return aP1->__pad_0; /*0x50dfb7*/
  }
}


// ==== 0x0050DFE0  TActionClass::executeDeployAction  this=TActionClass  sig=csp ====
int __thiscall sub_50DFE0(_DWORD *this, int a2)
{
  this->q5494 = a2; /*0x50dfe4*/
  return a2; /*0x50dfea*/
}


// ==== 0x0050DFF0  ObjectClass::GlobalHelper_0E4540_Helper  this=ObjectClass  sig=csp ====
int __thiscall sub_50DFF0(_DWORD *this)
{
  int result; // eax

  result = MEMORY[0xA8EF98]; /*0x50dff0*/
  this->q1525 = MEMORY[0xA8EF98]; /*0x50dff5*/
  return result; /*0x50dffb*/
}


// ==== 0x0050E000  HouseClass::SetMapSeed  this=AbstractClass  sig=csp ====
int __thiscall HouseClass::SetMapSeed(_DWORD *this, IUnknown *aP1)
{
  this->q5490 = aP1; /*0x50e004*/
  return (int)aP1; /*0x50e00a*/
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
      v5 = MEMORY[0xA8EC88] - 1; /*0x50e040*/
      if ( MEMORY[0xA8EC88] - 1 >= 0 ) /*0x50e045*/
      {
        do /*0x50e081*/
        {
          v6 = *((_DWORD *)MEMORY[0xA8EC7C] + v5); /*0x50e052*/
          if ( *(_DWORD *)(v6 + 540) == this /*0x50e06d*/
            && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 132))(*((_DWORD *)MEMORY[0xA8EC7C] + v5)) == a2
            && !*(_BYTE *)(v6 + 129) )
          {
            TechnoClass::Activate((_DWORD *)v6); /*0x50e079*/
            v4 = 1; /*0x50e07e*/
          }
          --v5; /*0x50e080*/
        }
        while ( v5 >= 0 ); /*0x50e081*/
        if ( v4 && MEMORY[0xA8E9A0] ) /*0x50e08f*/
        {
          if ( MEMORY[0xA8B238][0] ) /*0x50e098*/
          {
            if ( (#375 *)this != HouseClass_Player ) /*0x50e0bb*/
              return; /*0x50e0bb*/
            goto LABEL_16; /*0x50e0bb*/
          }
          if ( *(_BYTE *)(this + 492) || *(_BYTE *)(this + 493) ) /*0x50e0a4*/
          {
LABEL_16:
            if ( !MEMORY[0xA8E7AC] ) /*0x50e0c4*/
              VoxClass::FindAndPlay(aEvaRobottanksb, -1); /*0x50e0d0*/
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
      v5 = MEMORY[0xA8EC88] - 1; /*0x50e10b*/
      if ( MEMORY[0xA8EC88] - 1 >= 0 ) /*0x50e110*/
      {
        do /*0x50e14c*/
        {
          v6 = *((_DWORD *)MEMORY[0xA8EC7C] + v5); /*0x50e11d*/
          if ( *(_DWORD *)(v6 + 540) == this /*0x50e138*/
            && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 132))(*((_DWORD *)MEMORY[0xA8EC7C] + v5)) == a2
            && !*(_BYTE *)(v6 + 129) )
          {
            TechnoClass::Deactivate((_DWORD *)v6); /*0x50e144*/
            v4 = 1; /*0x50e149*/
          }
          --v5; /*0x50e14b*/
        }
        while ( v5 >= 0 ); /*0x50e14c*/
        if ( v4 && MEMORY[0xA8E9A0] ) /*0x50e15a*/
        {
          if ( MEMORY[0xA8B238][0] ) /*0x50e163*/
          {
            if ( (#375 *)this != HouseClass_Player ) /*0x50e186*/
              return; /*0x50e186*/
            goto LABEL_16; /*0x50e186*/
          }
          if ( *(_BYTE *)(this + 492) || *(_BYTE *)(this + 493) ) /*0x50e16f*/
          {
LABEL_16:
            if ( !MEMORY[0xA8E7AC] ) /*0x50e18f*/
              VoxClass::FindAndPlay(unk_824E4C, -1); /*0x50e19b*/
          }
        }
      }
    }
  }
}


// ==== 0x0050E1B0  HouseClass::GainedPoweredCenter  this=HouseClass  sig=csp ====
BOOL __thiscall HouseClass::GainedPoweredCenter(_DWORD *this, int a2)
{
  return this->poweredUnitCenters > 0; /*0x50e1bd*/
}


// ==== 0x0050E1C0  TechnoClass::Process  this=TechnoClass  sig=csp ====
void __thiscall sub_50E1C0(int this, int a2)
{
  char v3; // bl
  int v4; // edi
  int v5; // esi

  if ( a2 ) /*0x50e1cb*/
  {
    v3 = 0; /*0x50e1d6*/
    v4 = MEMORY[0xA8EC88] - 1; /*0x50e1d8*/
    if ( MEMORY[0xA8EC88] - 1 >= 0 ) /*0x50e1dd*/
    {
      do /*0x50e219*/
      {
        v5 = *((_DWORD *)MEMORY[0xA8EC7C] + v4); /*0x50e1ea*/
        if ( *(_DWORD *)(v5 + 540) == this /*0x50e205*/
          && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 132))(*((_DWORD *)MEMORY[0xA8EC7C] + v4)) == a2
          && !*(_BYTE *)(v5 + 129) )
        {
          TechnoClass::Deactivate((_DWORD *)v5); /*0x50e211*/
          v3 = 1; /*0x50e216*/
        }
        --v4; /*0x50e218*/
      }
      while ( v4 >= 0 ); /*0x50e219*/
      if ( v3 && MEMORY[0xA8E9A0] ) /*0x50e227*/
      {
        if ( MEMORY[0xA8B238][0] ) /*0x50e230*/
        {
          if ( (#375 *)this != HouseClass_Player ) /*0x50e253*/
            return; /*0x50e253*/
          goto LABEL_15; /*0x50e253*/
        }
        if ( *(_BYTE *)(this + 492) || *(_BYTE *)(this + 493) ) /*0x50e23c*/
        {
LABEL_15:
          if ( !MEMORY[0xA8E7AC] ) /*0x50e25c*/
            VoxClass::FindAndPlay(unk_824E4C, -1); /*0x50e268*/
        }
      }
    }
  }
}


// ==== 0x0050E280  HouseClass::ReactivateTechnos  this=HouseClass  sig=csp ====
void __thiscall sub_50E280(int this, int a2)
{
  char v3; // bl
  int v4; // edi
  int v5; // esi

  if ( a2 ) /*0x50e28b*/
  {
    v3 = 0; /*0x50e296*/
    v4 = MEMORY[0xA8EC88] - 1; /*0x50e298*/
    if ( MEMORY[0xA8EC88] - 1 >= 0 ) /*0x50e29d*/
    {
      do /*0x50e2d9*/
      {
        v5 = *((_DWORD *)MEMORY[0xA8EC7C] + v4); /*0x50e2aa*/
        if ( *(_DWORD *)(v5 + 540) == this /*0x50e2c5*/
          && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 132))(*((_DWORD *)MEMORY[0xA8EC7C] + v4)) == a2
          && !*(_BYTE *)(v5 + 129) )
        {
          TechnoClass::Activate((_DWORD *)v5); /*0x50e2d1*/
          v3 = 1; /*0x50e2d6*/
        }
        --v4; /*0x50e2d8*/
      }
      while ( v4 >= 0 ); /*0x50e2d9*/
      if ( v3 && MEMORY[0xA8E9A0] ) /*0x50e2e7*/
      {
        if ( MEMORY[0xA8B238][0] ) /*0x50e2f0*/
        {
          if ( (#375 *)this != HouseClass_Player ) /*0x50e313*/
            return; /*0x50e313*/
          goto LABEL_15; /*0x50e313*/
        }
        if ( *(_BYTE *)(this + 492) || *(_BYTE *)(this + 493) ) /*0x50e2fc*/
        {
LABEL_15:
          if ( !MEMORY[0xA8E7AC] ) /*0x50e31c*/
            VoxClass::FindAndPlay(aEvaRobottanksb, -1); /*0x50e328*/
        }
      }
    }
  }
}


// ==== 0x0050E340  HouseClass::COMStub_Ret1_1  this=HouseClass  sig=csp ====
int __stdcall VtableStub_RetOne(int a1)
{
  return 1; /*0x50e345*/
}


// ==== 0x0050E350  HouseClass::COMStub_Ret1_2  this=HouseClass  sig=csp ====
int __stdcall VtableStub_RetOne_2(int a1)
{
  return 1; /*0x50e355*/
}


// ==== 0x0050E360  AbstractClass::computeMovementCost  this=AbstractClass  sig=csp ====
int AbstractClass::sub_50E360()
{
  return 13; /*0x50e365*/
}


// ==== 0x0050E370  AbstractClass::checkPassability  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::sub_50E370(_DWORD *this)
{
  return this->q030; /*0x50e373*/
}


// ==== 0x0050E380  AbstractClass::getMovementSpeed  this=AbstractClass  sig=csp ====
AbstractClass *__thiscall AbstractClass::getMovementSpeed(void *Block, char a2)
{
  HouseClass::Destruct((int)Block); /*0x50e383*/
  if ( (a2 & 1) != 0 ) /*0x50e38d*/
    __3_YAXPAX_Z(Block); /*0x50e390*/
  return (AbstractClass *)Block; /*0x50e39a*/
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
char __thiscall sub_50E430(_BYTE *this, char a2, char a3, char a4)
{
  *this = a2; /*0x50e438*/
  this->vtable2 = a3; /*0x50e43e*/
  this->vtable3 = a4; /*0x50e441*/
  return a4; /*0x50e444*/
}


// ==== 0x0050E450  BuildLocation::InitCandidate  this=AbstractClass  sig=csp ====
_DWORD *__thiscall BuildLocation::InitCandidate(_DWORD *this, int a2, IUnknown *aP2)
{
  *this = a2; /*0x50e45a*/
  this->vtable2 = aP2->field_0; /*0x50e45e*/
  this->needsSave = 0; /*0x50e463*/
  this->vtable4 = 0; /*0x50e466*/
  return this; /*0x50e469*/
}


// ==== 0x0050E470  CellStruct::Equals  this=IUnknown  sig=csp ====
BOOL __thiscall CellStruct_Equals(_WORD *this, _WORD *a2)
{
  return *this == *a2 && this->q004 == a2[1]; /*0x50e48b*/
}


// ==== 0x0050E4A0  _DynamicVectorClass_PBVBuildingTypeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_UScoutStruct___33_::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x50e4a6*/
  *(_DWORD *)(this + 16) = 0; /*0x50e4a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x50e4b0*/
  {
    __3_YAXPAX_Z(v2); /*0x50e4b6*/
    *(_DWORD *)(this + 4) = 0; /*0x50e4be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x50e4c1*/
  *(_DWORD *)(this + 8) = 0; /*0x50e4c4*/
}


// ==== 0x0050E4D0  _DynamicVectorClass_PBVBuildingTypeClass::GetCapacity  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_UScoutStruct___33_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x50e4d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x50e4e5*/
  else
    return 0; /*0x50e4d7*/
}


// ==== 0x0050E4F0  _VectorClass_PBVBuildingTypeClass::Count  this=VectorClass  sig=csp ====
int __thiscall VectorClass_BuildingType::Count(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x50e4fa*/
}


// ==== 0x0050E500  _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_UAngerStruct::sub_50E500(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x50e506*/
  *(_DWORD *)(this + 16) = 0; /*0x50e509*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x50e510*/
  {
    __3_YAXPAX_Z(v2); /*0x50e516*/
    *(_DWORD *)(this + 4) = 0; /*0x50e51e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x50e521*/
  *(_DWORD *)(this + 8) = 0; /*0x50e524*/
}


// ==== 0x0050E530  _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_UAngerStruct::sub_50E530(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x50e530*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x50e545*/
  else
    return 0; /*0x50e537*/
}


// ==== 0x0050E550  _VectorClass_PAUStartingTechnoStruct_HouseClass::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UAngerStruct___16_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x50e55a*/
}


// ==== 0x0050E560  _DynamicVectorClass_UAngerStruct::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_UAngerStruct::sub_50E560(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x50e566*/
  *(_DWORD *)(this + 16) = 0; /*0x50e569*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x50e570*/
  {
    __3_YAXPAX_Z(v2); /*0x50e576*/
    *(_DWORD *)(this + 4) = 0; /*0x50e57e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x50e581*/
  *(_DWORD *)(this + 8) = 0; /*0x50e584*/
}


// ==== 0x0050E590  _DynamicVectorClass_UAngerStruct::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_UAngerStruct::sub_50E590(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x50e590*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x50e5a5*/
  else
    return 0; /*0x50e597*/
}


// ==== 0x0050E5B0  _VectorClass_UAngerStruct::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UAngerStruct::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = this->Items; /*0x50e5b0*/
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
int __thiscall VectorClass_UScoutStruct::_vt06(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = this->Items; /*0x50e620*/
  v4 = *(_DWORD *)(v3 + 8 * a3); /*0x50e627*/
  v5 = v3 + 8 * a3; /*0x50e62a*/
  *(_DWORD *)a2 = v4; /*0x50e631*/
  *(_BYTE *)(a2 + 4) = *(_BYTE *)(v5 + 4); /*0x50e636*/
  return a2; /*0x50e639*/
}


// ==== 0x0050E640  VectorClass_ptr_BuildChoiceClass_int_ouseClass::Destroy_0  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
void __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_50E640(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x50e646*/
  *(_DWORD *)(this + 16) = 0; /*0x50e649*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x50e650*/
  {
    __3_YAXPAX_Z(v2); /*0x50e656*/
    *(_DWORD *)(this + 4) = 0; /*0x50e65e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x50e661*/
  *(_DWORD *)(this + 8) = 0; /*0x50e664*/
}


// ==== 0x0050E670  VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItemIndex_1  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_50E670(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x50e670*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x50e685*/
  else
    return 0; /*0x50e677*/
}


// ==== 0x0050E690  _VectorClass_PAUBuildChoiceClass_HouseClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x50e69a*/
}


// ==== 0x0050E6A0  _DynamicVectorClass_PBVTeamTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_BuildingType::sub_50E6A0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x50e6a6*/
  *(_DWORD *)(this + 16) = 0; /*0x50e6a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x50e6b0*/
  {
    __3_YAXPAX_Z(v2); /*0x50e6b6*/
    *(_DWORD *)(this + 4) = 0; /*0x50e6be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x50e6c1*/
  *(_DWORD *)(this + 8) = 0; /*0x50e6c4*/
}


// ==== 0x0050E6D0  _DynamicVectorClass_PBVTeamTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_BuildingType::sub_50E6D0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x50e6d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x50e6e5*/
  else
    return 0; /*0x50e6d7*/
}


// ==== 0x0050E6F0  _VectorClass_PBVTeamTypeClass::GetElement  this=VectorClass  sig=csp ====
int __thiscall VectorClass_BuildingType::sub_50E6F0(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x50e6fa*/
}


// ==== 0x0050E700  _DynamicVectorClass__N::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass__N::sub_50E700(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x50e706*/
  *(_DWORD *)(this + 16) = 0; /*0x50e709*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x50e710*/
  {
    __3_YAXPAX_Z(v2); /*0x50e716*/
    *(_DWORD *)(this + 4) = 0; /*0x50e71e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x50e721*/
  *(_DWORD *)(this + 8) = 0; /*0x50e724*/
}


// ==== 0x0050E730  _DynamicVectorClass__N::GetItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass__N::sub_50E730(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x50e730*/
    return a2 - *(_DWORD *)(this + 4); /*0x50e743*/
  else
    return 0; /*0x50e737*/
}


// ==== 0x0050E750  _VectorClass__N::Clear  this=VectorClass  sig=csp ====
char __thiscall VectorClass__N::_vt06(_DWORD *this, int a2)
{
  return *(_BYTE *)(this->Items + a2); /*0x50e75a*/
}


// ==== 0x0050E760  _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass__N_18_::sub_50E760(int this)
{
  int v2; // eax

  v2 = *(_DWORD *)(this + 4); /*0x50e766*/
  *(_DWORD *)(this + 16) = 0; /*0x50e769*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x50e770*/
  {
    __3_YAXPAX_Z((void *)(v2 - 4)); /*0x50e781*/
    *(_DWORD *)(this + 4) = 0; /*0x50e789*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x50e78c*/
  *(_DWORD *)(this + 8) = 0; /*0x50e78f*/
}


// ==== 0x0050E7A0  _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass__N_18_::sub_50E7A0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x50e7a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x50e7b5*/
  else
    return 0; /*0x50e7a7*/
}


// ==== 0x0050E7C0  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass__N_18_::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = this->Items; /*0x50e7c0*/
  v4 = *(_DWORD *)(v3 + 8 * a3); /*0x50e7c7*/
  v5 = v3 + 8 * a3; /*0x50e7ca*/
  *a2 = v4; /*0x50e7d1*/
  a2[1] = *(_DWORD *)(v5 + 4); /*0x50e7d6*/
  return a2; /*0x50e7d9*/
}


// ==== 0x0050E7E0  _TypeList_PBVTeamTypeClass::Constructor  this=TypeList  sig=csp ====
TypeList *__thiscall VectorClass_BuildingType::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x50e7e3*/
  *Block = &vt_VectorClass_TeamTypeClass_const; /*0x50e7e6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x50e7f0*/
  {
    __3_YAXPAX_Z(v3); /*0x50e7f8*/
    *(Block + 1) = 0; /*0x50e800*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x50e80b*/
  *(Block + 2) = 0; /*0x50e811*/
  if ( (a2 & 1) != 0 ) /*0x50e818*/
    __3_YAXPAX_Z(Block); /*0x50e81b*/
  return (TypeList *)Block; /*0x50e825*/
}


// ==== 0x0050E830  TeamTypeVector::CopyConstruct  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_50E830(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x50e83d*/
  this->Capacity = 0; /*0x50e840*/
  this->q030 = 1; /*0x50e843*/
  this->q034 = 0; /*0x50e847*/
  *this = &vt_VectorClass_TeamTypeClass_const; /*0x50e84a*/
  if ( this != a2 ) /*0x50e850*/
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
        this->q034 = 1; /*0x50e87c*/
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
      this->q034 = 0; /*0x50e89b*/
    }
  }
  this->q010 = a2[4]; /*0x50e8a1*/
  this->q005 = a2[5]; /*0x50e8a7*/
  *this = &DynamicVectorClass<TeamTypeClass const *>::`vftable'; /*0x50e8aa*/
  return this; /*0x50e8b2*/
}


// ==== 0x0050E8C0  _DynamicVectorClass_PBVTeamTypeClass::Constructor  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass__N_18_::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x50e8c3*/
  *Block = &vt_VectorClass_TeamTypeClass_const; /*0x50e8c6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x50e8d0*/
  {
    __3_YAXPAX_Z(v3); /*0x50e8d8*/
    *(Block + 1) = 0; /*0x50e8e0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x50e8eb*/
  *(Block + 2) = 0; /*0x50e8f1*/
  if ( (a2 & 1) != 0 ) /*0x50e8f8*/
    __3_YAXPAX_Z(Block); /*0x50e8fb*/
  return (DynamicVector *)Block; /*0x50e905*/
}


// ==== 0x0050E910  _VectorClass_PBVBuildingTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_BuildingType::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x50e912*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x50e91d*/
  {
    v3 = 0; /*0x50e91f*/
    if ( v2 <= 0 ) /*0x50e923*/
      return 1; /*0x50e943*/
    v4 = (_DWORD *)this->Items; /*0x50e925*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x50e92b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x50e934*/
    {
      ++v3; /*0x50e936*/
      ++v4; /*0x50e937*/
      if ( v3 >= v2 ) /*0x50e93c*/
        return 1; /*0x50e93c*/
    }
  }
  return 0; /*0x50e93e*/
}


// ==== 0x0050E950  _VectorClass_PBVBuildingTypeClass::Set  this=VectorClass  sig=csp ====
char __thiscall VectorClass_BuildingType::Set(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x50e95c*/
  {
    this->IsInitialized = 0; /*0x50e966*/
    if ( a3 ) /*0x50e96c*/
      v4 = a3; /*0x50e982*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x50e97e*/
    this->IsInitialized = 1; /*0x50e986*/
    if ( v4 ) /*0x50e98a*/
    {
      if ( this->Items ) /*0x50e995*/
      {
        v6 = this->Capacity; /*0x50e99c*/
        if ( a2 < v6 ) /*0x50e9a1*/
          v6 = a2; /*0x50e9a3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x50e9a9*/
          ++i; /*0x50e9ae*/
        if ( this->IsAllocated ) /*0x50e9bb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x50e9c6*/
          this->Items = 0; /*0x50e9ce*/
        }
      }
      this->Items = v4; /*0x50e9d7*/
      this->Capacity = a2; /*0x50e9df*/
      this->IsAllocated = a3 == 0; /*0x50e9e2*/
      return 1; /*0x50e9e8*/
    }
    else
    {
      return 0; /*0x50e98f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50e9f2*/
    return 1; /*0x50e9f8*/
  }
}


// ==== 0x0050EA00  _VectorClass_PBVBuildingTypeClass::Destroy  this=VectorClass  sig=csp ====
void __thiscall DynamicVectorClass_Destroy(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x50ea0d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x50ea13*/
    *(_DWORD *)(this + 4) = 0; /*0x50ea1b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x50ea1e*/
  *(_DWORD *)(this + 8) = 0; /*0x50ea21*/
}


// ==== 0x0050EA30  _VectorClass_PBVBuildingTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_BuildingType::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x50ea30*/
    return 0; /*0x50ea38*/
  v3 = *(_DWORD *)(this + 8); /*0x50ea3e*/
  result = 0; /*0x50ea41*/
  if ( v3 <= 0 ) /*0x50ea45*/
    return -1; /*0x50ea5c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x50ea4b*/
  {
    if ( ++result >= v3 ) /*0x50ea5a*/
      return -1; /*0x50ea5a*/
  }
  return result; /*0x50ea3a*/
}


// ==== 0x0050EA70  _VectorClass_PBVBuildingTypeClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_BuildingType::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x50ea70*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x50ea85*/
  else
    return 0; /*0x50ea77*/
}


// ==== 0x0050EA90  _DynamicVectorClass_PBVBuildingTypeClass::Resize2  this=DynamicVector  sig=csp ====
char __thiscall GenericVector_Resize2(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x50ea9c*/
  {
    this->IsInitialized = 0; /*0x50eaa2*/
    if ( a3 ) /*0x50eaa8*/
      v4 = a3; /*0x50eabe*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x50eaba*/
    this->IsInitialized = 1; /*0x50eac2*/
    if ( !v4 ) /*0x50eac6*/
      return 0; /*0x50eb3a*/
    if ( this->Items ) /*0x50eac8*/
    {
      v5 = this->q008; /*0x50eacf*/
      if ( a2 < v5 ) /*0x50ead4*/
        v5 = a2; /*0x50ead6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x50eadc*/
        ++i; /*0x50eae1*/
      if ( this->IsAllocated ) /*0x50eaee*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x50eaf9*/
        this->Items = 0; /*0x50eb01*/
      }
    }
    this->Items = v4; /*0x50eb0a*/
    this->q008 = a2; /*0x50eb12*/
    this->IsAllocated = a3 == 0; /*0x50eb15*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50eb1e*/
  }
  v7 = this->q008; /*0x50eb21*/
  if ( v7 < this->Items ) /*0x50eb29*/
    this->Items = v7; /*0x50eb2b*/
  return 1; /*0x50eb2e*/
}


// ==== 0x0050EB40  _DynamicVectorClass_PBVBuildingTypeClass::GetSize  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_UScoutStruct___33_::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x50eb40*/
  result = 0; /*0x50eb43*/
  if ( v2 <= 0 ) /*0x50eb48*/
    return -1; /*0x50eb5f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x50eb4e*/
  {
    if ( ++result >= v2 ) /*0x50eb5d*/
      return -1; /*0x50eb5d*/
  }
  return result; /*0x50eb62*/
}


// ==== 0x0050EB70  VectorClass::InsertAt  this=VectorClass  sig=csp ====
char __thiscall VectorClass::InsertAt(_DWORD *this, IUnknown *aP1, int a3)
{
  int v4; // ecx
  int v5; // eax
  int v7; // edx
  int *v8; // edi

  v4 = this->Capacity; /*0x50eb73*/
  if ( this->q010 >= v4 ) /*0x50eb7b*/
  {
    if ( !this->q034 && v4 ) /*0x50eb86*/
      return 0; /*0x50eb86*/
    v5 = this->q005; /*0x50eb88*/
    if ( v5 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v4 + v5, 0) ) /*0x50eb98*/
      return 0; /*0x50eb9f*/
  }
  v7 = this->q010; /*0x50eba5*/
  if ( a3 < v7 - 1 ) /*0x50ebb2*/
    memcpy( /*0x50ebd7*/
      (void *)(this->Items + 16 * (a3 + 2)),
      (const void *)(this->Items + 16 * (a3 + 1)),
      16 * (v7 + 0xFFFFFFF * (a3 + 1)));
  v8 = (int *)(this->Items + 16 * (a3 + 1)); /*0x50ebeb*/
  *v8 = aP1->field_0; /*0x50ebef*/
  v8[1] = aP1->field_4; /*0x50ebf4*/
  v8[2] = aP1->field_8; /*0x50ebfa*/
  v8[3] = aP1->field_C; /*0x50ec00*/
  ++this->q010; /*0x50ec08*/
  return 1; /*0x50eba1*/
}


// ==== 0x0050EC20  _VectorClass_PAUStartingTechnoStruct_HouseClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UAngerStruct___16_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x50ec22*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x50ec2d*/
  {
    v3 = 0; /*0x50ec2f*/
    if ( v2 <= 0 ) /*0x50ec33*/
      return 1; /*0x50ec53*/
    v4 = (_DWORD *)this->Items; /*0x50ec35*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x50ec3b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x50ec44*/
    {
      ++v3; /*0x50ec46*/
      ++v4; /*0x50ec47*/
      if ( v3 >= v2 ) /*0x50ec4c*/
        return 1; /*0x50ec4c*/
    }
  }
  return 0; /*0x50ec4e*/
}


// ==== 0x0050EC60  _VectorClass_PAUStartingTechnoStruct_HouseClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UAngerStruct___16_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x50ec6c*/
  {
    this->IsInitialized = 0; /*0x50ec76*/
    if ( a3 ) /*0x50ec7c*/
      v4 = a3; /*0x50ec92*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x50ec8e*/
    this->IsInitialized = 1; /*0x50ec96*/
    if ( v4 ) /*0x50ec9a*/
    {
      if ( this->Items ) /*0x50eca5*/
      {
        v6 = this->Capacity; /*0x50ecac*/
        if ( a2 < v6 ) /*0x50ecb1*/
          v6 = a2; /*0x50ecb3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x50ecb9*/
          ++i; /*0x50ecbe*/
        if ( this->IsAllocated ) /*0x50eccb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x50ecd6*/
          this->Items = 0; /*0x50ecde*/
        }
      }
      this->Items = v4; /*0x50ece7*/
      this->Capacity = a2; /*0x50ecef*/
      this->IsAllocated = a3 == 0; /*0x50ecf2*/
      return 1; /*0x50ecf8*/
    }
    else
    {
      return 0; /*0x50ec9f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50ed02*/
    return 1; /*0x50ed08*/
  }
}


// ==== 0x0050ED10  _VectorClass_PAUStartingTechnoStruct_HouseClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UAngerStruct___16_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x50ed1d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x50ed23*/
    *(_DWORD *)(this + 4) = 0; /*0x50ed2b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x50ed2e*/
  *(_DWORD *)(this + 8) = 0; /*0x50ed31*/
}


// ==== 0x0050ED40  _VectorClass_PAUStartingTechnoStruct_HouseClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UAngerStruct___16_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x50ed40*/
    return 0; /*0x50ed48*/
  v3 = *(_DWORD *)(this + 8); /*0x50ed4e*/
  result = 0; /*0x50ed51*/
  if ( v3 <= 0 ) /*0x50ed55*/
    return -1; /*0x50ed6c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x50ed5b*/
  {
    if ( ++result >= v3 ) /*0x50ed6a*/
      return -1; /*0x50ed6a*/
  }
  return result; /*0x50ed4a*/
}


// ==== 0x0050ED80  _VectorClass_PAUStartingTechnoStruct_HouseClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UAngerStruct___16_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x50ed80*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x50ed95*/
  else
    return 0; /*0x50ed87*/
}


// ==== 0x0050EDA0  _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_UAngerStruct::sub_50EDA0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x50edac*/
  {
    this->IsInitialized = 0; /*0x50edb2*/
    if ( a3 ) /*0x50edb8*/
      v4 = a3; /*0x50edce*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x50edca*/
    this->IsInitialized = 1; /*0x50edd2*/
    if ( !v4 ) /*0x50edd6*/
      return 0; /*0x50ee4a*/
    if ( this->Items ) /*0x50edd8*/
    {
      v5 = this->q008; /*0x50eddf*/
      if ( a2 < v5 ) /*0x50ede4*/
        v5 = a2; /*0x50ede6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x50edec*/
        ++i; /*0x50edf1*/
      if ( this->IsAllocated ) /*0x50edfe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x50ee09*/
        this->Items = 0; /*0x50ee11*/
      }
    }
    this->Items = v4; /*0x50ee1a*/
    this->q008 = a2; /*0x50ee22*/
    this->IsAllocated = a3 == 0; /*0x50ee25*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50ee2e*/
  }
  v7 = this->q008; /*0x50ee31*/
  if ( v7 < this->Items ) /*0x50ee39*/
    this->Items = v7; /*0x50ee3b*/
  return 1; /*0x50ee3e*/
}


// ==== 0x0050EE50  _DynamicVectorClass_PAUStartingTechnoStruct_HouseClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_UAngerStruct::sub_50EE50(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x50ee50*/
  result = 0; /*0x50ee53*/
  if ( v2 <= 0 ) /*0x50ee58*/
    return -1; /*0x50ee6f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x50ee5e*/
  {
    if ( ++result >= v2 ) /*0x50ee6d*/
      return -1; /*0x50ee6d*/
  }
  return result; /*0x50ee72*/
}


// ==== 0x0050EE80  _VectorClass_UAngerStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UAngerStruct::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  v2 = this->Capacity; /*0x50ee8b*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x50ee90*/
  {
    v3 = 0; /*0x50ee92*/
    if ( v2 <= 0 ) /*0x50ee96*/
      return 1; /*0x50eec6*/
    v4 = *(_DWORD *)(a2 + 4); /*0x50ee98*/
    v5 = (_DWORD *)this->Items; /*0x50ee9b*/
    v6 = (_DWORD *)(v4 + 4); /*0x50ee9e*/
    v7 = v4 - (_DWORD)v5; /*0x50eea1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x50eeb3*/
    {
      ++v3; /*0x50eeb5*/
      v6 += 2; /*0x50eeb6*/
      v5 += 2; /*0x50eeb9*/
      if ( v3 >= v2 ) /*0x50eebe*/
        return 1; /*0x50eebe*/
    }
  }
  return 0; /*0x50eec0*/
}


// ==== 0x0050EEE0  _VectorClass_UAngerStruct::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UAngerStruct::_vt02(void *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx

  v3 = a2; /*0x50eee2*/
  if ( a2 ) /*0x50eeee*/
  {
    v5 = a3; /*0x50eef4*/
    this->IsInitialized = 0; /*0x50eef8*/
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
        v7 = v6; /*0x50ef16*/
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
        v5 = v6; /*0x50ef28*/
      }
      else
      {
        v5 = 0; /*0x50ef2c*/
      }
    }
    this->IsInitialized = 1; /*0x50ef47*/
    if ( v5 ) /*0x50ef4b*/
    {
      if ( this->Items ) /*0x50ef56*/
      {
        v12 = this->Capacity; /*0x50ef5b*/
        if ( a2 < v12 ) /*0x50ef60*/
          v12 = a2; /*0x50ef62*/
        v13 = 0; /*0x50ef64*/
        if ( v12 > 0 ) /*0x50ef68*/
        {
          do /*0x50ef87*/
          {
            v14 = 2 * v13; /*0x50ef6d*/
            v15 = (_DWORD *)(this->Items + 8 * v13++); /*0x50ef76*/
            v5[v14] = *v15; /*0x50ef7d*/
            v5[v14 + 1] = v15[1]; /*0x50ef83*/
          }
          while ( v13 < v12 ); /*0x50ef87*/
          v3 = a2; /*0x50ef89*/
        }
        if ( this->IsAllocated ) /*0x50ef8f*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x50ef98*/
          this->Items = 0; /*0x50efa0*/
        }
      }
      this->Items = v5; /*0x50efab*/
      this->Capacity = v3; /*0x50efb1*/
      this->IsAllocated = a3 == 0; /*0x50efb4*/
      return 1; /*0x50efba*/
    }
    else
    {
      return 0; /*0x50ef50*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50efc4*/
    return 1; /*0x50efca*/
  }
}


// ==== 0x0050EFD0  _VectorClass_UAngerStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UAngerStruct::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x50efdd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x50efe3*/
    *(_DWORD *)(this + 4) = 0; /*0x50efeb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x50efee*/
  *(_DWORD *)(this + 8) = 0; /*0x50eff1*/
}


// ==== 0x0050F000  _VectorClass_UAngerStruct::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UAngerStruct::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x50f000*/
    return 0; /*0x50f00e*/
  v3 = *(_DWORD *)(this + 8); /*0x50f014*/
  result = 0; /*0x50f017*/
  if ( v3 <= 0 ) /*0x50f01b*/
    return -1; /*0x50f03c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x50f021*/
  {
    if ( ++result >= v3 ) /*0x50f03a*/
      return -1; /*0x50f03a*/
  }
  return result; /*0x50f00b*/
}


// ==== 0x0050F050  _VectorClass_UAngerStruct::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UAngerStruct::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x50f050*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x50f065*/
  else
    return 0; /*0x50f057*/
}


// ==== 0x0050F070  _DynamicVectorClass_UAngerStruct::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_UAngerStruct::sub_50F070(void *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x50f072*/
  if ( a2 ) /*0x50f07e*/
  {
    v5 = a3; /*0x50f084*/
    this->IsInitialized = 0; /*0x50f088*/
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
        v7 = v6; /*0x50f0a6*/
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
        v5 = v6; /*0x50f0b8*/
      }
      else
      {
        v5 = 0; /*0x50f0bc*/
      }
    }
    this->IsInitialized = 1; /*0x50f0d7*/
    if ( !v5 ) /*0x50f0db*/
      return 0; /*0x50f164*/
    if ( this->Items ) /*0x50f0e1*/
    {
      v11 = this->q008; /*0x50f0e6*/
      if ( a2 < v11 ) /*0x50f0eb*/
        v11 = a2; /*0x50f0ed*/
      v12 = 0; /*0x50f0ef*/
      if ( v11 > 0 ) /*0x50f0f3*/
      {
        do /*0x50f112*/
        {
          v13 = 2 * v12; /*0x50f0f8*/
          v14 = (_DWORD *)(this->Items + 8 * v12++); /*0x50f101*/
          v5[v13] = *v14; /*0x50f108*/
          v5[v13 + 1] = v14[1]; /*0x50f10e*/
        }
        while ( v12 < v11 ); /*0x50f112*/
        v3 = a2; /*0x50f114*/
      }
      if ( this->IsAllocated ) /*0x50f11a*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x50f123*/
        this->Items = 0; /*0x50f12b*/
      }
    }
    this->Items = v5; /*0x50f136*/
    this->q008 = v3; /*0x50f13c*/
    this->IsAllocated = a3 == 0; /*0x50f13f*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50f148*/
  }
  v15 = this->q008; /*0x50f14b*/
  if ( v15 < this->Items ) /*0x50f153*/
    this->Items = v15; /*0x50f155*/
  return 1; /*0x50f158*/
}


// ==== 0x0050F170  _DynamicVectorClass_UAngerStruct::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_UAngerStruct::sub_50F170(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x50f170*/
  result = 0; /*0x50f175*/
  if ( v2 <= 0 ) /*0x50f17b*/
    return -1; /*0x50f19c*/
  for ( i = (_DWORD *)this->Items; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x50f181*/
  {
    if ( ++result >= v2 ) /*0x50f19a*/
      return -1; /*0x50f19a*/
  }
  return result; /*0x50f19f*/
}


// ==== 0x0050F1B0  _VectorClass_UScoutStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UScoutStruct::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  int v5; // eax
  _BYTE *v6; // ecx
  int v7; // ebp

  v2 = this->Capacity; /*0x50f1bb*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x50f1c0*/
  {
    v3 = 0; /*0x50f1c2*/
    if ( v2 <= 0 ) /*0x50f1c6*/
      return 1; /*0x50f1f8*/
    v4 = *(_DWORD *)(a2 + 4); /*0x50f1c8*/
    v5 = this->Items; /*0x50f1cb*/
    v6 = (_BYTE *)(v4 + 4); /*0x50f1d0*/
    v7 = v4 - v5; /*0x50f1d3*/
    while ( *(_DWORD *)v5 == *(_DWORD *)(v5 + v7) && *(_BYTE *)(v5 + 4) == *v6 ) /*0x50f1e5*/
    {
      ++v3; /*0x50f1e7*/
      v6 += 8; /*0x50f1e8*/
      v5 += 8; /*0x50f1eb*/
      if ( v3 >= v2 ) /*0x50f1f0*/
        return 1; /*0x50f1f0*/
    }
  }
  return 0; /*0x50f1f2*/
}


// ==== 0x0050F210  _VectorClass_UScoutStruct::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UScoutStruct::_vt02(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // esi
  char *v6; // eax
  char *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx

  v3 = a2; /*0x50f212*/
  if ( a2 ) /*0x50f21e*/
  {
    v5 = a3; /*0x50f224*/
    this->IsInitialized = 0; /*0x50f228*/
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
      v6 = (char *)__2_YAPAXI_Z(8 * a2); /*0x50f237*/
      if ( v6 ) /*0x50f241*/
      {
        v7 = v6; /*0x50f246*/
        if ( a2 - 1 >= 0 ) /*0x50f24a*/
        {
          v8 = a2; /*0x50f24c*/
          do /*0x50f256*/
          {
            *(_DWORD *)v7 = 0; /*0x50f24d*/
            v7[4] = 0; /*0x50f24f*/
            v7 += 8; /*0x50f252*/
            --v8; /*0x50f255*/
          }
          while ( v8 ); /*0x50f256*/
        }
        v5 = v6; /*0x50f258*/
      }
      else
      {
        v5 = 0; /*0x50f25c*/
      }
    }
    this->IsInitialized = 1; /*0x50f277*/
    if ( v5 ) /*0x50f27b*/
    {
      if ( this->Items ) /*0x50f286*/
      {
        v12 = this->Capacity; /*0x50f28b*/
        if ( a2 < v12 ) /*0x50f290*/
          v12 = a2; /*0x50f292*/
        v13 = 0; /*0x50f294*/
        if ( v12 > 0 ) /*0x50f298*/
        {
          do /*0x50f2b7*/
          {
            v14 = 8 * v13; /*0x50f29d*/
            v15 = (_DWORD *)(this->Items + 8 * v13++); /*0x50f2a6*/
            *(_DWORD *)&v5[v14] = *v15; /*0x50f2ad*/
            *(_DWORD *)&v5[v14 + 4] = v15[1]; /*0x50f2b3*/
          }
          while ( v13 < v12 ); /*0x50f2b7*/
          v3 = a2; /*0x50f2b9*/
        }
        if ( this->IsAllocated ) /*0x50f2bf*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x50f2c8*/
          this->Items = 0; /*0x50f2d0*/
        }
      }
      this->Items = v5; /*0x50f2db*/
      this->Capacity = v3; /*0x50f2e1*/
      this->IsAllocated = a3 == 0; /*0x50f2e4*/
      return 1; /*0x50f2ea*/
    }
    else
    {
      return 0; /*0x50f280*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50f2f4*/
    return 1; /*0x50f2fa*/
  }
}


// ==== 0x0050F300  _VectorClass_UScoutStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UScoutStruct::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x50f30d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x50f313*/
    *(_DWORD *)(this + 4) = 0; /*0x50f31b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x50f31e*/
  *(_DWORD *)(this + 8) = 0; /*0x50f321*/
}


// ==== 0x0050F330  _VectorClass_UScoutStruct::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UScoutStruct::_vt04(int this, int a2)
{
  int result; // eax
  int v3; // esi
  int i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x50f330*/
    return 0; /*0x50f33e*/
  v3 = *(_DWORD *)(this + 8); /*0x50f344*/
  result = 0; /*0x50f347*/
  if ( v3 <= 0 ) /*0x50f34b*/
    return -1; /*0x50f36c*/
  for ( i = *(_DWORD *)(this + 4); *(_DWORD *)i != *(_DWORD *)a2 || *(_BYTE *)(i + 4) != *(_BYTE *)(a2 + 4); i += 8 ) /*0x50f351*/
  {
    if ( ++result >= v3 ) /*0x50f36a*/
      return -1; /*0x50f36a*/
  }
  return result; /*0x50f33b*/
}


// ==== 0x0050F380  _VectorClass_UScoutStruct::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UScoutStruct::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x50f380*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x50f395*/
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
char __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x50f4e2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x50f4ed*/
  {
    v3 = 0; /*0x50f4ef*/
    if ( v2 <= 0 ) /*0x50f4f3*/
      return 1; /*0x50f513*/
    v4 = (_DWORD *)this->Items; /*0x50f4f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x50f4fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x50f504*/
    {
      ++v3; /*0x50f506*/
      ++v4; /*0x50f507*/
      if ( v3 >= v2 ) /*0x50f50c*/
        return 1; /*0x50f50c*/
    }
  }
  return 0; /*0x50f50e*/
}


// ==== 0x0050F520  _VectorClass_PAUBuildChoiceClass_HouseClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x50f52c*/
  {
    this->IsInitialized = 0; /*0x50f536*/
    if ( a3 ) /*0x50f53c*/
      v4 = a3; /*0x50f552*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x50f54e*/
    this->IsInitialized = 1; /*0x50f556*/
    if ( v4 ) /*0x50f55a*/
    {
      if ( this->Items ) /*0x50f565*/
      {
        v6 = this->Capacity; /*0x50f56c*/
        if ( a2 < v6 ) /*0x50f571*/
          v6 = a2; /*0x50f573*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x50f579*/
          ++i; /*0x50f57e*/
        if ( this->IsAllocated ) /*0x50f58b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x50f596*/
          this->Items = 0; /*0x50f59e*/
        }
      }
      this->Items = v4; /*0x50f5a7*/
      this->Capacity = a2; /*0x50f5af*/
      this->IsAllocated = a3 == 0; /*0x50f5b2*/
      return 1; /*0x50f5b8*/
    }
    else
    {
      return 0; /*0x50f55f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50f5c2*/
    return 1; /*0x50f5c8*/
  }
}


// ==== 0x0050F5D0  _VectorClass_PAUBuildChoiceClass_HouseClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x50f5dd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x50f5e3*/
    *(_DWORD *)(this + 4) = 0; /*0x50f5eb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x50f5ee*/
  *(_DWORD *)(this + 8) = 0; /*0x50f5f1*/
}


// ==== 0x0050F600  _VectorClass_PAUBuildChoiceClass_HouseClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x50f600*/
    return 0; /*0x50f608*/
  v3 = *(_DWORD *)(this + 8); /*0x50f60e*/
  result = 0; /*0x50f611*/
  if ( v3 <= 0 ) /*0x50f615*/
    return -1; /*0x50f62c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x50f61b*/
  {
    if ( ++result >= v3 ) /*0x50f62a*/
      return -1; /*0x50f62a*/
  }
  return result; /*0x50f60a*/
}


// ==== 0x0050F640  _VectorClass_PAUBuildChoiceClass_HouseClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x50f640*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x50f655*/
  else
    return 0; /*0x50f647*/
}


// ==== 0x0050F660  VectorClass_ptr_BuildChoiceClass_int_ouseClass::SetCapacity_6  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
char __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_50F660(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x50f66c*/
  {
    this->IsInitialized = 0; /*0x50f672*/
    if ( a3 ) /*0x50f678*/
      v4 = a3; /*0x50f68e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x50f68a*/
    this->IsInitialized = 1; /*0x50f692*/
    if ( !v4 ) /*0x50f696*/
      return 0; /*0x50f70a*/
    if ( this->Items ) /*0x50f698*/
    {
      v5 = this->Capacity; /*0x50f69f*/
      if ( a2 < v5 ) /*0x50f6a4*/
        v5 = a2; /*0x50f6a6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x50f6ac*/
        ++i; /*0x50f6b1*/
      if ( this->IsAllocated ) /*0x50f6be*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x50f6c9*/
        this->Items = 0; /*0x50f6d1*/
      }
    }
    this->Items = v4; /*0x50f6da*/
    this->Capacity = a2; /*0x50f6e2*/
    this->IsAllocated = a3 == 0; /*0x50f6e5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50f6ee*/
  }
  v7 = this->Capacity; /*0x50f6f1*/
  if ( v7 < this->Items ) /*0x50f6f9*/
    this->Items = v7; /*0x50f6fb*/
  return 1; /*0x50f6fe*/
}


// ==== 0x0050F710  VectorClass_ptr_BuildChoiceClass_int_ouseClass::FindItemIndex_1  this=VectorClass_ptr_BuildChoiceClass_int_ouseClass  sig=csp ====
int __thiscall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_50F710(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x50f710*/
  result = 0; /*0x50f713*/
  if ( v2 <= 0 ) /*0x50f718*/
    return -1; /*0x50f72f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x50f71e*/
  {
    if ( ++result >= v2 ) /*0x50f72d*/
      return -1; /*0x50f72d*/
  }
  return result; /*0x50f732*/
}


// ==== 0x0050F740  _VectorClass_PBVTeamTypeClass::CompareVectors  this=VectorClass  sig=csp ====
char __thiscall VectorClass_BuildingType::sub_50F740(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x50f742*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x50f74d*/
  {
    v3 = 0; /*0x50f74f*/
    if ( v2 <= 0 ) /*0x50f753*/
      return 1; /*0x50f773*/
    v4 = (_DWORD *)this->Items; /*0x50f755*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x50f75b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x50f764*/
    {
      ++v3; /*0x50f766*/
      ++v4; /*0x50f767*/
      if ( v3 >= v2 ) /*0x50f76c*/
        return 1; /*0x50f76c*/
    }
  }
  return 0; /*0x50f76e*/
}


// ==== 0x0050F780  _VectorClass_PBVTeamTypeClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall VectorClass_BuildingType::sub_50F780(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x50f78c*/
  {
    this->IsInitialized = 0; /*0x50f796*/
    if ( a3 ) /*0x50f79c*/
      v4 = a3; /*0x50f7b2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x50f7ae*/
    this->IsInitialized = 1; /*0x50f7b6*/
    if ( v4 ) /*0x50f7ba*/
    {
      if ( this->Items ) /*0x50f7c5*/
      {
        v6 = this->Capacity; /*0x50f7cc*/
        if ( a2 < v6 ) /*0x50f7d1*/
          v6 = a2; /*0x50f7d3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x50f7d9*/
          ++i; /*0x50f7de*/
        if ( this->IsAllocated ) /*0x50f7eb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x50f7f6*/
          this->Items = 0; /*0x50f7fe*/
        }
      }
      this->Items = v4; /*0x50f807*/
      this->Capacity = a2; /*0x50f80f*/
      this->IsAllocated = a3 == 0; /*0x50f812*/
      return 1; /*0x50f818*/
    }
    else
    {
      return 0; /*0x50f7bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50f822*/
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
int __thiscall VectorClass_BuildingType::sub_50F860(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x50f860*/
    return 0; /*0x50f868*/
  v3 = *(_DWORD *)(this + 8); /*0x50f86e*/
  result = 0; /*0x50f871*/
  if ( v3 <= 0 ) /*0x50f875*/
    return -1; /*0x50f88c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x50f87b*/
  {
    if ( ++result >= v3 ) /*0x50f88a*/
      return -1; /*0x50f88a*/
  }
  return result; /*0x50f86a*/
}


// ==== 0x0050F8A0  _VectorClass_PBVTeamTypeClass::GetItemIndex_0  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_BuildingType::sub_50F8A0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x50f8a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x50f8b5*/
  else
    return 0; /*0x50f8a7*/
}


// ==== 0x0050F8C0  _DynamicVectorClass_PBVTeamTypeClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_BuildingType::sub_50F8C0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x50f8cc*/
  {
    this->IsInitialized = 0; /*0x50f8d2*/
    if ( a3 ) /*0x50f8d8*/
      v4 = a3; /*0x50f8ee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x50f8ea*/
    this->IsInitialized = 1; /*0x50f8f2*/
    if ( !v4 ) /*0x50f8f6*/
      return 0; /*0x50f96a*/
    if ( this->Items ) /*0x50f8f8*/
    {
      v5 = this->q008; /*0x50f8ff*/
      if ( a2 < v5 ) /*0x50f904*/
        v5 = a2; /*0x50f906*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x50f90c*/
        ++i; /*0x50f911*/
      if ( this->IsAllocated ) /*0x50f91e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x50f929*/
        this->Items = 0; /*0x50f931*/
      }
    }
    this->Items = v4; /*0x50f93a*/
    this->q008 = a2; /*0x50f942*/
    this->IsAllocated = a3 == 0; /*0x50f945*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50f94e*/
  }
  v7 = this->q008; /*0x50f951*/
  if ( v7 < this->Items ) /*0x50f959*/
    this->Items = v7; /*0x50f95b*/
  return 1; /*0x50f95e*/
}


// ==== 0x0050F970  _DynamicVectorClass_PBVTeamTypeClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_BuildingType::sub_50F970(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x50f970*/
  result = 0; /*0x50f973*/
  if ( v2 <= 0 ) /*0x50f978*/
    return -1; /*0x50f98f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x50f97e*/
  {
    if ( ++result >= v2 ) /*0x50f98d*/
      return -1; /*0x50f98d*/
  }
  return result; /*0x50f992*/
}


// ==== 0x0050F9A0  _VectorClass__N::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass__N::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // eax

  v2 = this->Capacity; /*0x50f9a7*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x50f9af*/
  {
    v3 = 0; /*0x50f9b1*/
    if ( v2 <= 0 ) /*0x50f9b5*/
      return 1; /*0x50f9d1*/
    while ( *(_BYTE *)(this->Items + v3) == *(_BYTE *)(*(_DWORD *)(a2 + 4) + v3) ) /*0x50f9c5*/
    {
      if ( ++v3 >= v2 ) /*0x50f9ca*/
        return 1; /*0x50f9ca*/
    }
  }
  return 0; /*0x50f9cc*/
}


// ==== 0x0050F9E0  _VectorClass__N::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass__N::Remove(void *this, signed int Size, char *a3)
{
  char *v4; // edi
  signed int v6; // ecx
  signed int i; // eax

  if ( Size ) /*0x50f9ec*/
  {
    this->IsInitialized = 0; /*0x50f9f6*/
    if ( a3 ) /*0x50f9fc*/
      v4 = a3; /*0x50fa0b*/
    else
      v4 = (char *)__2_YAPAXI_Z(Size); /*0x50fa07*/
    this->IsInitialized = 1; /*0x50fa0f*/
    if ( v4 ) /*0x50fa13*/
    {
      if ( this->Items ) /*0x50fa1e*/
      {
        v6 = this->Capacity; /*0x50fa25*/
        if ( Size < v6 ) /*0x50fa2a*/
          v6 = Size; /*0x50fa2c*/
        for ( i = 0; i < v6; v4[i - 1] = *(_BYTE *)(this->Items + i - 1) ) /*0x50fa32*/
          ++i; /*0x50fa37*/
        if ( this->IsAllocated ) /*0x50fa44*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x50fa4f*/
          this->Items = 0; /*0x50fa57*/
        }
      }
      this->Items = v4; /*0x50fa60*/
      this->Capacity = Size; /*0x50fa68*/
      this->IsAllocated = a3 == 0; /*0x50fa6b*/
      return 1; /*0x50fa71*/
    }
    else
    {
      return 0; /*0x50fa18*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50fa7b*/
    return 1; /*0x50fa81*/
  }
}


// ==== 0x0050FA90  _VectorClass__N::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass__N::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x50fa9d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x50faa3*/
    *(_DWORD *)(this + 4) = 0; /*0x50faab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x50faae*/
  *(_DWORD *)(this + 8) = 0; /*0x50fab1*/
}


// ==== 0x0050FAC0  _VectorClass__N::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass__N::_vt04(int this, _BYTE *a2)
{
  int result; // eax
  int v3; // esi
  int v4; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x50fac0*/
    return 0; /*0x50fac9*/
  v3 = *(_DWORD *)(this + 8); /*0x50face*/
  result = 0; /*0x50fad1*/
  if ( v3 <= 0 ) /*0x50fad5*/
    return -1; /*0x50faea*/
  v4 = *(_DWORD *)(this + 4); /*0x50fadb*/
  while ( *(_BYTE *)(v4 + result) != *a2 ) /*0x50fae3*/
  {
    if ( ++result >= v3 ) /*0x50fae8*/
      return -1; /*0x50fae8*/
  }
  return result; /*0x50fac8*/
}


// ==== 0x0050FB00  _VectorClass__N::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass__N::Get(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x50fb00*/
    return a2 - *(_DWORD *)(this + 4); /*0x50fb13*/
  else
    return 0; /*0x50fb07*/
}


// ==== 0x0050FB20  _DynamicVectorClass__N::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass__N::sub_50FB20(void *this, signed int Size, char *a3)
{
  char *v4; // edi
  signed int v5; // ecx
  signed int i; // eax
  int v7; // eax

  if ( Size ) /*0x50fb2c*/
  {
    this->IsInitialized = 0; /*0x50fb32*/
    if ( a3 ) /*0x50fb38*/
      v4 = a3; /*0x50fb47*/
    else
      v4 = (char *)__2_YAPAXI_Z(Size); /*0x50fb43*/
    this->IsInitialized = 1; /*0x50fb4b*/
    if ( !v4 ) /*0x50fb4f*/
      return 0; /*0x50fbc3*/
    if ( this->Items ) /*0x50fb51*/
    {
      v5 = this->q008; /*0x50fb58*/
      if ( Size < v5 ) /*0x50fb5d*/
        v5 = Size; /*0x50fb5f*/
      for ( i = 0; i < v5; v4[i - 1] = *(_BYTE *)(this->Items + i - 1) ) /*0x50fb65*/
        ++i; /*0x50fb6a*/
      if ( this->IsAllocated ) /*0x50fb77*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x50fb82*/
        this->Items = 0; /*0x50fb8a*/
      }
    }
    this->Items = v4; /*0x50fb93*/
    this->q008 = Size; /*0x50fb9b*/
    this->IsAllocated = a3 == 0; /*0x50fb9e*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50fba7*/
  }
  v7 = this->q008; /*0x50fbaa*/
  if ( v7 < this->Items ) /*0x50fbb2*/
    this->Items = v7; /*0x50fbb4*/
  return 1; /*0x50fbb7*/
}


// ==== 0x0050FBD0  _DynamicVectorClass__N::Destroy_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass__N::sub_50FBD0(int *this, _BYTE *a2)
{
  int v2; // esi
  int result; // eax
  int v4; // ecx

  v2 = this->Items; /*0x50fbd1*/
  result = 0; /*0x50fbd4*/
  if ( v2 <= 0 ) /*0x50fbd8*/
    return -1; /*0x50fbed*/
  v4 = this->Items; /*0x50fbde*/
  while ( *(_BYTE *)(v4 + result) != *a2 ) /*0x50fbe6*/
  {
    if ( ++result >= v2 ) /*0x50fbeb*/
      return -1; /*0x50fbeb*/
  }
  return result; /*0x50fbf0*/
}


// ==== 0x0050FC00  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass__N_18_::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  v2 = this->Capacity; /*0x50fc0b*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x50fc10*/
  {
    v3 = 0; /*0x50fc12*/
    if ( v2 <= 0 ) /*0x50fc16*/
      return 1; /*0x50fc46*/
    v4 = *(_DWORD *)(a2 + 4); /*0x50fc18*/
    v5 = (_DWORD *)this->Items; /*0x50fc1b*/
    v6 = (_DWORD *)(v4 + 4); /*0x50fc1e*/
    v7 = v4 - (_DWORD)v5; /*0x50fc21*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x50fc33*/
    {
      ++v3; /*0x50fc35*/
      v6 += 2; /*0x50fc36*/
      v5 += 2; /*0x50fc39*/
      if ( v3 >= v2 ) /*0x50fc3e*/
        return 1; /*0x50fc3e*/
    }
  }
  return 0; /*0x50fc40*/
}


// ==== 0x0050FC60  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass__N_18_::Remove(void *this, int a2, int *a3)
{
  int *v4; // ebx
  int *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax

  if ( a2 ) /*0x50fc6c*/
  {
    v4 = a3; /*0x50fc72*/
    this->IsInitialized = 0; /*0x50fc76*/
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
    this->IsInitialized = 1; /*0x50fcd2*/
    if ( v6 ) /*0x50fcd6*/
    {
      if ( this->Items ) /*0x50fce1*/
      {
        v12 = this->Capacity; /*0x50fce8*/
        if ( a2 < v12 ) /*0x50fced*/
          v12 = a2; /*0x50fcef*/
        v13 = 0; /*0x50fcf1*/
        if ( v12 > 0 ) /*0x50fcf5*/
        {
          do /*0x50fd0d*/
          {
            v14 = this->Items; /*0x50fcf7*/
            ++v13; /*0x50fcfa*/
            v6[2 * v13 - 2] = *(_DWORD *)(v14 + 8 * v13 - 8); /*0x50fd01*/
            v6[2 * v13 - 1] = *(_DWORD *)(v14 + 8 * v13 - 4); /*0x50fd09*/
          }
          while ( v13 < v12 ); /*0x50fd0d*/
          v4 = a3; /*0x50fd0f*/
        }
        if ( this->IsAllocated ) /*0x50fd13*/
        {
          v15 = this->Items; /*0x50fd1a*/
          if ( v15 ) /*0x50fd1f*/
            __3_YAXPAX_Z((void *)(v15 - 4)); /*0x50fd29*/
          this->Items = 0; /*0x50fd31*/
        }
      }
      this->Items = v6; /*0x50fd3a*/
      this->Capacity = a2; /*0x50fd42*/
      this->IsAllocated = v4 == 0; /*0x50fd45*/
      return 1; /*0x50fd4b*/
    }
    else
    {
      return 0; /*0x50fcdb*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50fd55*/
    return 1; /*0x50fd5b*/
  }
}


// ==== 0x0050FD70  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass__N_18_::_vt03(int this)
{
  int v2; // eax

  v2 = *(_DWORD *)(this + 4); /*0x50fd76*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x50fd7d*/
  {
    __3_YAXPAX_Z((void *)(v2 - 4)); /*0x50fd8e*/
    *(_DWORD *)(this + 4) = 0; /*0x50fd96*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x50fd99*/
  *(_DWORD *)(this + 8) = 0; /*0x50fd9c*/
}


// ==== 0x0050FDB0  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass__N_18_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x50fdb0*/
    return 0; /*0x50fdbe*/
  v3 = *(_DWORD *)(this + 8); /*0x50fdc4*/
  result = 0; /*0x50fdc7*/
  if ( v3 <= 0 ) /*0x50fdcb*/
    return -1; /*0x50fdec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x50fdd1*/
  {
    if ( ++result >= v3 ) /*0x50fdea*/
      return -1; /*0x50fdea*/
  }
  return result; /*0x50fdbb*/
}


// ==== 0x0050FE00  _VectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::Get  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass__N_18_::Get(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x50fe00*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x50fe15*/
  else
    return 0; /*0x50fe07*/
}


// ==== 0x0050FE20  _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass__N_18_::sub_50FE20(void *this, int a2, int *a3)
{
  int *v4; // ebp
  int *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  void *v15; // ebp
  int v16; // eax

  if ( a2 ) /*0x50fe2c*/
  {
    v4 = a3; /*0x50fe32*/
    this->IsInitialized = 0; /*0x50fe36*/
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
    this->IsInitialized = 1; /*0x50fe93*/
    if ( !v6 ) /*0x50fe97*/
      return 0; /*0x50ff37*/
    if ( this->Items ) /*0x50fe9d*/
    {
      v11 = this->q008; /*0x50fea4*/
      if ( a2 < v11 ) /*0x50fea9*/
        v11 = a2; /*0x50feab*/
      v12 = 0; /*0x50fead*/
      if ( v11 > 0 ) /*0x50feb1*/
      {
        do /*0x50fec9*/
        {
          v13 = this->Items; /*0x50feb3*/
          ++v12; /*0x50feb6*/
          v6[2 * v12 - 2] = *(_DWORD *)(v13 + 8 * v12 - 8); /*0x50febd*/
          v6[2 * v12 - 1] = *(_DWORD *)(v13 + 8 * v12 - 4); /*0x50fec5*/
        }
        while ( v12 < v11 ); /*0x50fec9*/
        v4 = a3; /*0x50fecb*/
      }
      if ( this->IsAllocated ) /*0x50fecf*/
      {
        v14 = this->Items; /*0x50fed6*/
        if ( v14 ) /*0x50fedb*/
        {
          v15 = (void *)(v14 - 4); /*0x50fee0*/
          Array::ForEachReverse(v14, 8, *(_DWORD *)(v14 - 4), (int (__thiscall *)(int))nullsub_145); /*0x50feec*/
          __3_YAXPAX_Z(v15); /*0x50fef2*/
          v4 = a3; /*0x50fef7*/
        }
        this->Items = 0; /*0x50fefe*/
      }
    }
    this->Items = v6; /*0x50ff07*/
    this->q008 = a2; /*0x50ff0f*/
    this->IsAllocated = v4 == 0; /*0x50ff12*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x50ff1b*/
  }
  v16 = this->q008; /*0x50ff1e*/
  if ( v16 < this->Items ) /*0x50ff26*/
    this->Items = v16; /*0x50ff28*/
  return 1; /*0x50ff2b*/
}


// ==== 0x0050FF40  nullsub_145  this=-  sig=ida-proto ====
void __thiscall nullsub_145(void *this)
{
  ; /*0x50ff40*/
}


// ==== 0x0050FF50  HouseClass::AddCoordTrackingEntry  this=HouseClass  sig=csp ====
char __thiscall sub_50FF50(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->vtable3; /*0x50ff53*/
  if ( this->uniqueId >= v3 ) /*0x50ff5b*/
  {
    if ( !this->relatedTagsCapacity && v3 ) /*0x50ff66*/
      return 0; /*0x50ff66*/
    v4 = this->abstractFlags; /*0x50ff68*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x50ff78*/
      return 0; /*0x50ff7f*/
  }
  v6 = this->uniqueId; /*0x50ff85*/
  v7 = this->vtable2; /*0x50ff88*/
  this->uniqueId = v6 + 1; /*0x50ff8e*/
  *(_DWORD *)(v7 + 8 * v6) = *a2; /*0x50ff97*/
  *(_DWORD *)(v7 + 8 * v6 + 4) = a2[1]; /*0x50ff9e*/
  return 1; /*0x50ff81*/
}


// ==== 0x0050FFB0  _DynamicVectorClass_V_DistributionObject_PAVBuildingTypeClass_DiscreteDistributionClass_VBuildingTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass__N_18_::sub_50FFB0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x50ffb0*/
  result = 0; /*0x50ffb5*/
  if ( v2 <= 0 ) /*0x50ffbb*/
    return -1; /*0x50ffdc*/
  for ( i = (_DWORD *)this->Items; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x50ffc1*/
  {
    if ( ++result >= v2 ) /*0x50ffda*/
      return -1; /*0x50ffda*/
  }
  return result; /*0x50ffdf*/
}


// ==== 0x0050FFF0  _VectorClass_PBVBuildingTypeClass::Get  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_BuildingType::Get(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x50fff3*/
  *Block = &vt_VectorClass_BuildingTypeClass_const; /*0x50fff6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x510000*/
  {
    __3_YAXPAX_Z(v3); /*0x510008*/
    *(Block + 1) = 0; /*0x510010*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x51001b*/
  *(Block + 2) = 0; /*0x510021*/
  if ( (a2 & 1) != 0 ) /*0x510028*/
    __3_YAXPAX_Z(Block); /*0x51002b*/
  return (VectorClass *)Block; /*0x510035*/
}

