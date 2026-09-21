// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00671EA0  Dialog::ReadMultiplayerDialogSettings  this=AbstractClass  sig=csp ====
int __thiscall ReadMultiplayerDialogSettings(#381 *this)
{
  int result; // eax
  int IntOverwriteINIClass; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  char v16; // dl
  char BoolOverwriteINIClass; // al
  char v18; // cl
  char v19; // al
  char v20; // dl
  char v21; // al
  char v22; // cl
  char v23; // al
  char v24; // dl
  char v25; // al
  char v26; // cl
  char v27; // al
  char v28; // dl
  char v29; // al
  char v30; // cl
  char v31; // al
  char v32; // dl
  char v33; // al
  char v34; // cl
  char v35; // al
  char v36; // dl
  int v37; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection(v37, (unsigned __int8 *)aMultiplayerdia); /*0x671eb0*/
  if ( result ) /*0x671ebc*/
  {
    this->q520 = INIClass::ReadInt_Overwrite(aMultiplayerdia, aMinmoney, this->q520); /*0x671edc*/
    IntOverwriteINIClass = INIClass::ReadInt_Overwrite(aMultiplayerdia, aMoney, *((_DWORD *)this + 1313)); /*0x671ef7*/
    v4 = *((_DWORD *)this + 1314); /*0x671efc*/
    *((_DWORD *)this + 1313) = IntOverwriteINIClass; /*0x671f02*/
    v5 = INIClass::ReadInt_Overwrite(aMultiplayerdia, aMaxmoney, v4); /*0x671f16*/
    v6 = *((_DWORD *)this + 1315); /*0x671f1b*/
    *((_DWORD *)this + 1314) = v5; /*0x671f21*/
    *((_DWORD *)this + 1315) = INIClass::ReadInt_Overwrite(aMultiplayerdia, aMoneyincrement, v6); /*0x671f3b*/
    v7 = INIClass::ReadInt_Overwrite(aMultiplayerdia, aMinunitcount, this->q524); /*0x671f56*/
    v8 = *((_DWORD *)this + 1317); /*0x671f5b*/
    this->q524 = v7; /*0x671f61*/
    v9 = INIClass::ReadInt_Overwrite(aMultiplayerdia, g_INI_Key_UnitCount, v8); /*0x671f75*/
    v10 = *((_DWORD *)this + 1318); /*0x671f7a*/
    *((_DWORD *)this + 1317) = v9; /*0x671f80*/
    *((_DWORD *)this + 1318) = INIClass::ReadInt_Overwrite(aMultiplayerdia, aMaxunitcount, v10); /*0x671f9a*/
    v11 = INIClass::ReadInt_Overwrite(aMultiplayerdia, g_INI_Key_TechLevel, *((_DWORD *)this + 1319)); /*0x671fb5*/
    v12 = this->q528; /*0x671fba*/
    *((_DWORD *)this + 1319) = v11; /*0x671fc0*/
    v13 = INIClass::ReadInt_Overwrite(aMultiplayerdia, g_INI_Key_GameSpeed, v12); /*0x671fd4*/
    v14 = *((_DWORD *)this + 1321); /*0x671fd9*/
    this->q528 = v13; /*0x671fdf*/
    *((_DWORD *)this + 1321) = INIClass::ReadInt_Overwrite(aMultiplayerdia, aAidifficulty, v14); /*0x671ff9*/
    v15 = INIClass::ReadInt_Overwrite(aMultiplayerdia, aAiplayers, *((_DWORD *)this + 1322)); /*0x672014*/
    v16 = this->q52B; /*0x672019*/
    *((_DWORD *)this + 1322) = v15; /*0x67201f*/
    BoolOverwriteINIClass = INIClass::ReadBool_Overwrite(aMultiplayerdia, aBridgedestruct, v16); /*0x672033*/
    v18 = *((_BYTE *)this + 5293); /*0x672038*/
    this->q52B = BoolOverwriteINIClass; /*0x67203e*/
    *((_BYTE *)this + 5293) = INIClass::ReadBool_Overwrite(aMultiplayerdia, aShadowgrow, v18); /*0x672058*/
    v19 = INIClass::ReadBool_Overwrite(aMultiplayerdia, aShroud, *((_BYTE *)this + 5294)); /*0x672073*/
    v20 = *((_BYTE *)this + 5295); /*0x672078*/
    *((_BYTE *)this + 5294) = v19; /*0x67207e*/
    v21 = INIClass::ReadBool_Overwrite(aMultiplayerdia, aBases, v20); /*0x672092*/
    v22 = this->q52C; /*0x672097*/
    *((_BYTE *)this + 5295) = v21; /*0x67209d*/
    this->q52C = INIClass::ReadBool_Overwrite(aMultiplayerdia, g_INI_Key_TiberiumGrows, v22); /*0x6720b7*/
    v23 = INIClass::ReadBool_Overwrite(aMultiplayerdia, aCrates, *((_BYTE *)this + 5297)); /*0x6720d2*/
    v24 = *((_BYTE *)this + 5298); /*0x6720d7*/
    *((_BYTE *)this + 5297) = v23; /*0x6720dd*/
    v25 = INIClass::ReadBool_Overwrite(aMultiplayerdia, aCapturetheflag, v24); /*0x6720f1*/
    v26 = *((_BYTE *)this + 5299); /*0x6720f6*/
    *((_BYTE *)this + 5298) = v25; /*0x6720fc*/
    *((_BYTE *)this + 5299) = INIClass::ReadBool_Overwrite(aMultiplayerdia, aHarvestertruce, v26); /*0x672116*/
    v27 = INIClass::ReadBool_Overwrite(aMultiplayerdia, aMultiengineer, this->q52D); /*0x672131*/
    v28 = *((_BYTE *)this + 5301); /*0x672136*/
    this->q52D = v27; /*0x67213c*/
    v29 = INIClass::ReadBool_Overwrite(aMultiplayerdia, aAlliesallowed, v28); /*0x672150*/
    v30 = *((_BYTE *)this + 5307); /*0x672155*/
    *((_BYTE *)this + 5301) = v29; /*0x67215b*/
    *((_BYTE *)this + 5307) = INIClass::ReadBool_Overwrite(aMultiplayerdia, aAllychangeallo, v30); /*0x672175*/
    v31 = INIClass::ReadBool_Overwrite(aMultiplayerdia, g_INI_Key_ShortGame, *((_BYTE *)this + 5302)); /*0x672190*/
    v32 = *((_BYTE *)this + 5305); /*0x672195*/
    *((_BYTE *)this + 5302) = v31; /*0x67219b*/
    v33 = INIClass::ReadBool_Overwrite(aMultiplayerdia, g_INI_Key_SuperWeaponsAllowed, v32); /*0x6721af*/
    v34 = *((_BYTE *)this + 5306); /*0x6721b4*/
    *((_BYTE *)this + 5305) = v33; /*0x6721ba*/
    *((_BYTE *)this + 5306) = INIClass::ReadBool_Overwrite(aMultiplayerdia, g_INI_Key_BuildOffAlly, v34); /*0x6721d4*/
    v35 = INIClass::ReadBool_Overwrite(aMultiplayerdia, g_INI_Key_FogOfWar, *((_BYTE *)this + 5303)); /*0x6721ef*/
    v36 = *((_BYTE *)this + 5304); /*0x6721f4*/
    *((_BYTE *)this + 5303) = v35; /*0x6721fa*/
    result = INIClass::ReadBool_Overwrite(aMultiplayerdia, aMcvredeploys, v36); /*0x67220e*/
    *((_BYTE *)this + 5304) = result; /*0x672213*/
    LOBYTE(result) = 1; /*0x67221a*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x672221*/
  }
  return result; /*0x672219*/
}


// ==== 0x00672230  ObjectClass::ReadMaximumPlayersINI  this=ObjectClass  sig=csp ====
int __thiscall ReadMaximumPlayersINI(RulesClass *this)
{
  int result; // eax
  int v3; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection(v3, (unsigned __int8 *)MEMORY[0x839E44]); /*0x672240*/
  if ( result ) /*0x67224c*/
  {
    result = INIClass::ReadInt_Overwrite(MEMORY[0x839E44], MEMORY[0x83A0BC], *((_DWORD *)this + 1332)); /*0x672263*/
    *((_DWORD *)this + 1332) = result; /*0x672268*/
  }
  LOBYTE(result) = 1; /*0x67226f*/
  return result; /*0x67226e*/
}


// ==== 0x00672280  RulesClass::readCrateRules  this=AbstractClass  sig=csp ====
int __thiscall sub_672280(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)MEMORY[0x839E34]); /*0x672297*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67229d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)MEMORY[0x839E34], i); /*0x6722b5*/
    if ( INIClass::GetString( /*0x6722c3*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)MEMORY[0x839E34],
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      KeywordType::FindOrCreate2(Destination); /*0x6722d0*/
    }
  }
  return KeyCount > 0; /*0x6722dc*/
}


// ==== 0x006722F0  RulesClass::LoadCountries  this=RulesClass  sig=csp ====
int __thiscall RulesClass::LoadCountries(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)MEMORY[0x839E28]); /*0x672307*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67230d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)MEMORY[0x839E28], i); /*0x672325*/
    if ( INIClass::GetString( /*0x672333*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)MEMORY[0x839E28],
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      WeaponTypeClass::Create(Destination); /*0x672340*/
    }
  }
  return KeyCount > 0; /*0x67234c*/
}


// ==== 0x00672360  CCINIClass::LoadBuildingTypes  this=AbstractClass  sig=csp ====
int __thiscall sub_672360(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)MEMORY[0x839E18]); /*0x672377*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67237d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)MEMORY[0x839E18], i); /*0x672395*/
    if ( INIClass::GetString( /*0x6723a3*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)MEMORY[0x839E18],
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      BuildingTypeClass::FindOrCreateAlt(Destination); /*0x6723b0*/
    }
  }
  return KeyCount > 0; /*0x6723bc*/
}


// ==== 0x006723D0  RulesClass::readRadiation  this=AbstractClass  sig=csp ====
int __thiscall sub_6723D0(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)MEMORY[0x839E08]); /*0x6723e7*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6723ed*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)MEMORY[0x839E08], i); /*0x672405*/
    if ( INIClass::GetString( /*0x672413*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)MEMORY[0x839E08],
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      KeywordClass::FindOrCreate(Destination); /*0x672420*/
    }
  }
  return KeyCount > 0; /*0x67242c*/
}


// ==== 0x00672440  RulesClass::ReadDataList  this=AbstractClass  sig=csp ====
int __thiscall sub_672440(RulesClass *this)
{
  int KeyCount; // edi
  int v2; // esi
  void *StringByIndex; // ebx
  int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ebp
  _DWORD *v7; // edi
  void *v8; // eax
  bool v9; // zf
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // edi
  _DWORD *v14; // edx
  _DWORD v16[3]; // [esp-1Ch] [ebp-50h] BYREF
  __int16 v17; // [esp-10h] [ebp-44h]
  char *v18; // [esp-Ch] [ebp-40h]
  char *v19; // [esp-8h] [ebp-3Ch]
  char *v20; // [esp-4h] [ebp-38h]
  int v21; // [esp+10h] [ebp-24h]
  int v22; // [esp+14h] [ebp-20h]
  int v23; // [esp+18h] [ebp-1Ch] BYREF
  void *Block; // [esp+1Ch] [ebp-18h]
  int v25; // [esp+20h] [ebp-14h]
  char v26; // [esp+25h] [ebp-Fh]
  char *v27; // [esp+38h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v27, (unsigned __int8 *)MEMORY[0x839E00]); /*0x672456*/
  v20 = MEMORY[0x83D0C8]; /*0x672458*/
  v22 = KeyCount; /*0x67245d*/
  Debug::Log(); /*0x672461*/
  v2 = 0; /*0x672469*/
  v21 = 0; /*0x67246d*/
  if ( KeyCount > 0 ) /*0x672471*/
  {
    while ( 1 ) /*0x67248e*/
    {
      StringByIndex = (void *)INIClass::GetStringByIndex(v27, (unsigned __int8 *)MEMORY[0x839E00], v2); /*0x67248e*/
      v4 = HouseTypeClass::Find(StringByIndex); /*0x672492*/
      if ( v4 == -1 ) /*0x67249a*/
      {
        v5 = __2_YAPAXI_Z(0xB4u); /*0x6724a1*/
        if ( v5 ) /*0x6724ab*/
          v6 = SideClass::Construct(v5, (char *)StringByIndex); /*0x6724b5*/
        else
          v6 = 0; /*0x6724b9*/
      }
      else
      {
        v6 = (_DWORD *)*((_DWORD *)MEMORY[0x8B4124] + v4); /*0x6724c3*/
      }
      v20 = (char *)(v6 + 9); /*0x6724c9*/
      v19 = (char *)v2; /*0x6724ca*/
      v18 = MEMORY[0x83D0B8]; /*0x6724cb*/
      Debug::Log(); /*0x6724d0*/
      IntVector::Copy(v16, v6 + 38); /*0x6724e3*/
      v7 = INIClass::ReadSuperWeaponTypeList( /*0x67250f*/
             (unsigned __int8 ***)v27,
             &v23,
             (unsigned __int8 *)MEMORY[0x839E00],
             (unsigned __int8 *)StringByIndex,
             &vt_TypeList_int,
             (void *)v16[1],
             v16[2],
             v17,
             v6[42],
             v6[43],
             (int)v20);
      TypeList::Copy(v6 + 38, v7); /*0x672514*/
      v6[42] = v7[4]; /*0x67251e*/
      v6[43] = v7[5]; /*0x672524*/
      v8 = Block; /*0x672527*/
      v9 = Block == 0; /*0x67252e*/
      v6[44] = v7[6]; /*0x672530*/
      v23 = (int)&vt_VectorClass_int; /*0x672533*/
      if ( !v9 && v26 ) /*0x672543*/
      {
        __3_YAXPAX_Z(v8); /*0x672546*/
        Block = 0; /*0x67254e*/
      }
      v10 = v6[42]; /*0x672552*/
      v11 = 0; /*0x672558*/
      v26 = 0; /*0x67255c*/
      v25 = 0; /*0x672561*/
      if ( v10 > 0 ) /*0x672565*/
      {
        do /*0x6725c2*/
        {
          v12 = 0; /*0x672573*/
          v13 = *(_DWORD *)(v6[39] + 4 * v11); /*0x672577*/
          if ( MEMORY[0x8B4130] <= 0 ) /*0x67257a*/
          {
LABEL_17:
            v12 = -1; /*0x67258e*/
          }
          else
          {
            v14 = MEMORY[0x8B4124]; /*0x67257c*/
            while ( (_DWORD *)*v14 != v6 ) /*0x672584*/
            {
              ++v12; /*0x672586*/
              ++v14; /*0x672587*/
              if ( v12 >= MEMORY[0x8B4130] ) /*0x67258c*/
                goto LABEL_17; /*0x67258c*/
            }
          }
          *(_DWORD *)(*((_DWORD *)g_SuperWeaponTypeCount + v13) + 188) = v12; /*0x67259a*/
          v20 = (char *)(*((_DWORD *)g_SuperWeaponTypeCount + v13) + 36); /*0x6725ab*/
          v19 = MEMORY[0x83D0B0]; /*0x6725ac*/
          Debug::Log(); /*0x6725b1*/
          ++v11; /*0x6725bf*/
        }
        while ( v11 < v6[42] ); /*0x6725c2*/
      }
      if ( ++v21 >= v22 ) /*0x6725d3*/
        break; /*0x6725d3*/
      v2 = v21; /*0x672479*/
    }
    KeyCount = v22; /*0x6725d9*/
  }
  return KeyCount > 0; /*0x6725df*/
}


// ==== 0x006725F0  RulesClass::ReadSidesList  this=RulesClass  sig=csp ====
int __thiscall sub_6725F0(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)MEMORY[0x839DEC]); /*0x672607*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67260d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)MEMORY[0x839DEC], i); /*0x672625*/
    if ( INIClass::GetString( /*0x672633*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)MEMORY[0x839DEC],
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      WeaponTypeClass::Process(Destination); /*0x672640*/
    }
  }
  return KeyCount > 0; /*0x67264c*/
}


// ==== 0x00672660  RulesClass::LoadBuildingTypes  this=AbstractClass  sig=csp ====
int __thiscall sub_672660(#381 *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)aBuildingtypes); /*0x672677*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67267d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)aBuildingtypes, i); /*0x672695*/
    if ( INIClass::GetString( /*0x6726a3*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)aBuildingtypes,
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      BuildingTypeClass::FindOrCreate(Destination); /*0x6726b0*/
    }
  }
  return KeyCount > 0; /*0x6726bc*/
}


// ==== 0x006726D0  CCINIClass::LoadTypeList  this=CCINIClass  sig=csp ====
int __thiscall sub_6726D0(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)MEMORY[0x839DCC]); /*0x6726e7*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6726ed*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)MEMORY[0x839DCC], i); /*0x672705*/
    if ( INIClass::GetString( /*0x672713*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)MEMORY[0x839DCC],
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      TerrainTypeClass::FindOrCreate(Destination); /*0x672720*/
    }
  }
  return KeyCount > 0; /*0x67272c*/
}


// ==== 0x00672740  RulesClass::ReadSideData  this=RulesClass  sig=csp ====
int __thiscall sub_672740(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // edi
  unsigned __int8 *StringByIndex; // eax
  _DWORD *v4; // eax
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF
  char *v7; // [esp+90h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v7, (unsigned __int8 *)MEMORY[0x839DC4]); /*0x67275d*/
  for ( i = 0; i < KeyCount; ++i ) /*0x672763*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v7, (unsigned __int8 *)MEMORY[0x839DC4], i); /*0x67276f*/
    if ( INIClass::GetString( /*0x67278c*/
           (unsigned __int8 ***)v7,
           (unsigned __int8 *)MEMORY[0x839DC4],
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           128) )
    {
      v4 = TechnoClass::Create(Destination); /*0x672799*/
    }
    else
    {
      v4 = 0; /*0x6727a0*/
    }
    (*(void (__thiscall **)(_DWORD *, char *))(*v4 + 100))(v4, v7); /*0x6727a7*/
  }
  return KeyCount > 0; /*0x6727b1*/
}


// ==== 0x006727D0  FactoryClass::LoadType  this=FactoryClass  sig=csp ====
int __thiscall sub_6727D0(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)MEMORY[0x839DB8]); /*0x6727e7*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6727ed*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)MEMORY[0x839DB8], i); /*0x672805*/
    if ( INIClass::GetString( /*0x672813*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)MEMORY[0x839DB8],
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      FactoryClass::FindOrCreate(Destination); /*0x672820*/
    }
  }
  return KeyCount > 0; /*0x67282c*/
}


// ==== 0x00672840  ObjectClass::ReadBuildingTypesBuildingTypeClass  this=ObjectClass  sig=csp ====
int __thiscall sub_672840(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)MEMORY[0x839DA8]); /*0x672857*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67285d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)MEMORY[0x839DA8], i); /*0x672875*/
    if ( INIClass::GetString( /*0x672883*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)MEMORY[0x839DA8],
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      BuildingTypeClass::FindOrCreate2(Destination); /*0x672890*/
    }
  }
  return KeyCount > 0; /*0x67289c*/
}


// ==== 0x006728B0  RulesClass::LoadAnimTypes  this=AbstractClass  sig=csp ====
int __thiscall sub_6728B0(#381 *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)g_INI_Key_Animations); /*0x6728c6*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6728cc*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)g_INI_Key_Animations, i); /*0x6728e2*/
    if ( INIClass::GetString( /*0x6728ef*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)g_INI_Key_Animations,
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      AnimTypeClass::FindOrCreate(Destination); /*0x6728fc*/
    }
  }
  return KeyCount > 0; /*0x672908*/
}


// ==== 0x00672920  CCINIClass::LoadUnitTypes  this=AbstractClass  sig=csp ====
int __thiscall sub_672920(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)MEMORY[0x83D0E8]); /*0x672936*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67293c*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)MEMORY[0x83D0E8], i); /*0x672952*/
    if ( INIClass::GetString( /*0x67295f*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)MEMORY[0x83D0E8],
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      UnitTypeClass::FindOrCreate(Destination); /*0x67296c*/
    }
  }
  return KeyCount > 0; /*0x672978*/
}


// ==== 0x00672990  WarheadTypeClass::LoadType  this=WarheadTypeClass  sig=csp ====
int __thiscall sub_672990(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)MEMORY[0x83A0D0]); /*0x6729a6*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6729ac*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)MEMORY[0x83A0D0], i); /*0x6729c2*/
    if ( INIClass::GetString( /*0x6729cf*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)MEMORY[0x83A0D0],
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      WarheadTypeClass::FindOrCreate(Destination); /*0x6729dc*/
    }
  }
  return KeyCount > 0; /*0x6729e8*/
}


// ==== 0x00672A00  RulesClass::readColors  this=AbstractClass  sig=csp ====
int __thiscall sub_672A00(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)MEMORY[0x83D0F4]); /*0x672a16*/
  for ( i = 0; i < KeyCount; ++i ) /*0x672a1c*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)MEMORY[0x83D0F4], i); /*0x672a32*/
    if ( INIClass::GetString( /*0x672a3f*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)MEMORY[0x83D0F4],
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      NetworkEventClass::Process(Destination); /*0x672a4c*/
    }
  }
  return KeyCount > 0; /*0x672a58*/
}


// ==== 0x00672A70  CCINIClass::ReadBuildingSettings  this=AbstractClass  sig=csp ====
int __thiscall sub_672A70(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)MEMORY[0x83D100]); /*0x672a86*/
  for ( i = 0; i < KeyCount; ++i ) /*0x672a8c*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)MEMORY[0x83D100], i); /*0x672aa2*/
    if ( INIClass::GetString( /*0x672aaf*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)MEMORY[0x83D100],
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      BuildingTypeClass::LoadOrGet(Destination); /*0x672abc*/
    }
  }
  return KeyCount > 0; /*0x672ac8*/
}


// ==== 0x00672AE0  RulesClass::ReadMultiplayerDefaults  this=AbstractClass  sig=csp ====
int __thiscall Rules::ReadBuildingsINI(RulesClass *this)
{
  int result; // eax
  char *i; // eax
  int v4; // edx
  int v5; // eax
  char *j; // eax
  char *k; // eax
  char *m; // eax
  char *n; // eax
  char *ii; // eax
  char *jj; // eax
  char *kk; // eax
  char *mm; // eax
  int v14; // ecx
  char *nn; // eax
  char *i1; // eax
  char *i2; // eax
  char *i3; // eax
  char *i4; // eax
  char *i5; // eax
  int v21; // ecx
  int *INIClassBuildingTypeList; // eax
  int *v23; // eax
  int *v24; // eax
  int *v25; // eax
  int Int_Overwrite; // eax
  unsigned int v27; // ecx
  unsigned int v28; // edx
  double Double_Overwrite; // st7
  int v30; // ecx
  int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  double v37; // st7
  int v38; // eax
  int v39; // eax
  double v40; // rax
  double v41; // st7
  int v42; // edx
  int v43; // eax
  int v44; // ecx
  int v45; // edx
  double v46; // st7
  int v47; // ecx
  int v48; // eax
  int v49; // ecx
  double v50; // st7
  int v51; // eax
  int v52; // eax
  double v53; // rax
  double v54; // st7
  int v55; // edx
  int v56; // eax
  int v57; // ecx
  int v58; // edx
  double v59; // st7
  int v60; // ecx
  int v61; // eax
  int v62; // ecx
  double v63; // st7
  int v64; // eax
  int v65; // eax
  double v66; // rax
  double v67; // st7
  int v68; // edx
  int v69; // eax
  char v70; // cl
  char Bool_Overwrite; // al
  double v72; // rax
  double v73; // st7
  int v74; // edx
  int v75; // eax
  int v76; // ecx
  int MaximumBuildingPlacementFailures; // edx
  double v78; // st7
  int v79; // ecx
  int v80; // edx
  double v81; // st7
  int v82; // ecx
  int v83; // edx
  double v84; // st7
  int v85; // ecx
  int v86; // edx
  double v87; // st7
  int v88; // ecx
  void **v89[3]; // [esp-1Ch] [ebp-E4h] BYREF
  __int16 v90; // [esp-10h] [ebp-D8h]
  int v91; // [esp-Ch] [ebp-D4h]
  double v92; // [esp-8h] [ebp-D0h]
  void ***IntList; // [esp+Ch] [ebp-BCh] BYREF
  int v94[6]; // [esp+10h] [ebp-B8h] BYREF
  int v95; // [esp+28h] [ebp-A0h]
  _DWORD v96[6]; // [esp+2Ch] [ebp-9Ch] BYREF
  int v97; // [esp+44h] [ebp-84h]
  char String[128]; // [esp+48h] [ebp-80h] BYREF
  unsigned __int8 ***v99; // [esp+D0h] [ebp+8h]

  result = INIClass::BinarySearchSection((int)v99, (unsigned __int8 *)MEMORY[0x839DA4]);
  if ( result )
  {
    if ( INIClass::GetString(
           v99,
           (unsigned __int8 *)MEMORY[0x839DA4],
           (unsigned __int8 *)MEMORY[0x83D4A0],
           &MEMORY[0x889F64],
           String,
           128) )
    {
      DynamicVectorClass::BuildingTypeConstructor(v94, 0, 0);
      v94[0] = (int)&vt_TypeList_BuildingTypeClass_const;
      for ( i = strtok(String, MEMORY[0x817F70]); i; i = strtok(0, MEMORY[0x817F70]) )
      {
        if ( !*i )
          break;
        IntList = (void ***)BuildingTypeClass::FindOrCreate(i);
        if ( IntList )
          DynamicVector::Add_Alt3(v94, &IntList);
      }
      TypeList::BuildingTypeCopy(v96, v94);
      v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
      DynamicVectorClass::Destroy((int)v94);
    }
    else
    {
      TypeList::BuildingTypeCopy(v96, &this->IvanWarhead[1]);
    }
    VectorClass::CopyBuilding(&this->IvanWarhead[1], v96);
    v4 = v96[4];
    v5 = v96[5];
    this->CanDetonateTimeBomb[3] = v97;
    this->CanDetonateTimeBomb[1] = v4;
    this->CanDetonateTimeBomb[2] = v5;
    v96[0] = &vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy((int)v96);
    if ( INIClass::GetString(
           v99,
           (unsigned __int8 *)MEMORY[0x839DA4],
           (unsigned __int8 *)MEMORY[0x83D494],
           &MEMORY[0x889F64],
           String,
           128) )
    {
      DynamicVectorClass::BuildingTypeConstructor(v94, 0, 0);
      v94[0] = (int)&vt_TypeList_BuildingTypeClass_const;
      for ( j = strtok(String, MEMORY[0x817F70]); j; j = strtok(0, MEMORY[0x817F70]) )
      {
        if ( !*j )
          break;
        IntList = (void ***)BuildingTypeClass::FindOrCreate(j);
        if ( IntList )
          DynamicVector::Add_Alt3(v94, &IntList);
      }
      TypeList::BuildingTypeCopy(v96, v94);
      v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
      DynamicVectorClass::Destroy((int)v94);
    }
    else
    {
      TypeList::BuildingTypeCopy(v96, &this->CHRONOSK_SHP);
    }
    DynamicVector::Copy(&this->CHRONOSK_SHP, v96);
    LODWORD(this->?) = v97;
    v96[0] = &vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy((int)v96);
    if ( INIClass::GetString(
           v99,
           (unsigned __int8 *)MEMORY[0x839DA4],
           (unsigned __int8 *)MEMORY[0x83D484],
           &MEMORY[0x889F64],
           String,
           128) )
    {
      DynamicVectorClass::BuildingTypeConstructor(v94, 0, 0);
      v94[0] = (int)&vt_TypeList_BuildingTypeClass_const;
      for ( k = strtok(String, MEMORY[0x817F70]); k; k = strtok(0, MEMORY[0x817F70]) )
      {
        if ( !*k )
          break;
        IntList = (void ***)BuildingTypeClass::FindOrCreate(k);
        if ( IntList )
          DynamicVector::Add_Alt3(v94, &IntList);
      }
      TypeList::BuildingTypeCopy(v96, v94);
      v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
      DynamicVectorClass::Destroy((int)v94);
    }
    else
    {
      TypeList::BuildingTypeCopy(v96, (_DWORD *)&this->? + 1);
    }
    DynamicVector::Copy((_DWORD *)&this->? + 1, v96);
    this->?[3] = v97;
    v96[0] = &vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy((int)v96);
    if ( INIClass::GetString(
           v99,
           (unsigned __int8 *)MEMORY[0x839DA4],
           (unsigned __int8 *)MEMORY[0x83D474],
           &MEMORY[0x889F64],
           String,
           128) )
    {
      DynamicVectorClass::BuildingTypeConstructor(v94, 0, 0);
      v94[0] = (int)&vt_TypeList_BuildingTypeClass_const;
      for ( m = strtok(String, MEMORY[0x817F70]); m; m = strtok(0, MEMORY[0x817F70]) )
      {
        if ( !*m )
          break;
        IntList = (void ***)BuildingTypeClass::FindOrCreate(m);
        if ( IntList )
          DynamicVector::Add_Alt3(v94, &IntList);
      }
      TypeList::BuildingTypeCopy(v96, v94);
      v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
      DynamicVectorClass::Destroy((int)v94);
    }
    else
    {
      TypeList::BuildingTypeCopy(v96, this->?);
    }
    DynamicVector::Copy(this->?, v96);
    v96[0] = &vt_VectorClass_BuildingTypeClass_const;
    this->?[2] = v97;
    DynamicVectorClass::Destroy((int)v96);
    if ( INIClass::GetString(
           v99,
           (unsigned __int8 *)MEMORY[0x839DA4],
           (unsigned __int8 *)MEMORY[0x83D468],
           &MEMORY[0x889F64],
           String,
           128) )
    {
      TypeList::BuildingTypeConstructor(v96);
      for ( n = strtok(String, MEMORY[0x817F70]); n; n = strtok(0, MEMORY[0x817F70]) )
      {
        if ( !*n )
          break;
        IntList = (void ***)BuildingTypeClass::FindOrCreate(n);
        if ( IntList )
          DynamicVector::Add_Alt3(v96, &IntList);
      }
      TypeList::BuildingTypeCopy(v94, v96);
      v96[0] = &vt_VectorClass_BuildingTypeClass_const;
      DynamicVectorClass::Destroy((int)v96);
    }
    else
    {
      TypeList::BuildingTypeCopy(v94, &this->?[3]);
    }
    DynamicVector::Copy(&this->?[3], v94);
    this->?[1] = v95;
    v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
           v99,
           (unsigned __int8 *)MEMORY[0x839DA4],
           (unsigned __int8 *)MEMORY[0x83D458],
           &MEMORY[0x889F64],
           String,
           128) )
    {
      TypeList::BuildingTypeConstructor(v96);
      for ( ii = strtok(String, MEMORY[0x817F70]); ii; ii = strtok(0, MEMORY[0x817F70]) )
      {
        if ( !*ii )
          break;
        IntList = (void ***)BuildingTypeClass::FindOrCreate(ii);
        if ( IntList )
          DynamicVector::Add_Alt3(v96, &IntList);
      }
      TypeList::BuildingTypeCopy(v94, v96);
      v96[0] = &vt_VectorClass_BuildingTypeClass_const;
      DynamicVectorClass::Destroy((int)v96);
    }
    else
    {
      TypeList::BuildingTypeCopy(v94, &this->?[2]);
    }
    DynamicVector::Copy(&this->?[2], v94);
    this->? = v95;
    v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
           v99,
           (unsigned __int8 *)MEMORY[0x839DA4],
           (unsigned __int8 *)MEMORY[0x83D444],
           &MEMORY[0x889F64],
           String,
           128) )
    {
      TypeList::BuildingTypeConstructor(v96);
      for ( jj = strtok(String, MEMORY[0x817F70]); jj; jj = strtok(0, MEMORY[0x817F70]) )
      {
        if ( !*jj )
          break;
        IntList = (void ***)BuildingTypeClass::FindOrCreate(jj);
        if ( IntList )
          DynamicVector::Add_Alt3(v96, &IntList);
      }
      TypeList::BuildingTypeCopy(v94, v96);
      v96[0] = &vt_VectorClass_BuildingTypeClass_const;
      DynamicVectorClass::Destroy((int)v96);
    }
    else
    {
      TypeList::BuildingTypeCopy(v94, this->?);
    }
    DynamicVector::Copy(this->?, v94);
    v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
    this->? = v95;
    DynamicVectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
           v99,
           (unsigned __int8 *)MEMORY[0x839DA4],
           (unsigned __int8 *)MEMORY[0x83D430],
           &MEMORY[0x889F64],
           String,
           128) )
    {
      TypeList::BuildingTypeConstructor(v96);
      for ( kk = strtok(String, MEMORY[0x817F70]); kk; kk = strtok(0, MEMORY[0x817F70]) )
      {
        if ( !*kk )
          break;
        IntList = (void ***)BuildingTypeClass::FindOrCreate(kk);
        if ( IntList )
          DynamicVector::Add_Alt3(v96, &IntList);
      }
      TypeList::BuildingTypeCopy(v94, v96);
      v96[0] = &vt_VectorClass_BuildingTypeClass_const;
      DynamicVectorClass::Destroy((int)v96);
    }
    else
    {
      TypeList::BuildingTypeCopy(v94, &this->MyEffectivenessCoefficientDefault);
    }
    DynamicVector::Copy(&this->MyEffectivenessCoefficientDefault, v94);
    this->TargetStrengthCoefficientDefault = v95;
    v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
           v99,
           (unsigned __int8 *)MEMORY[0x839DA4],
           (unsigned __int8 *)MEMORY[0x83D41C],
           &MEMORY[0x889F64],
           String,
           128) )
    {
      TypeList::BuildingTypeConstructor(v96);
      for ( mm = strtok(String, MEMORY[0x817F70]); mm; mm = strtok(0, MEMORY[0x817F70]) )
      {
        if ( !*mm )
          break;
        IntList = (void ***)BuildingTypeClass::FindOrCreate(mm);
        if ( IntList )
          DynamicVector::Add_Alt3(v96, &IntList);
      }
      TypeList::BuildingTypeCopy(v94, v96);
      v96[0] = &vt_VectorClass_BuildingTypeClass_const;
      DynamicVectorClass::Destroy((int)v96);
    }
    else
    {
      TypeList::BuildingTypeCopy(v94, this->?);
    }
    DynamicVector::Copy(this->?, v94);
    this->?[2] = v95;
    v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy((int)v94);
    IntList = v89;
    DynamicVectorClass::Copy(v89, &this->?[3]);
    *IntList = &vt_TypeList_int;
    IntList = (void ***)INIClass::ReadIntList(
                          v99,
                          (int)v94,
                          (unsigned __int8 *)MEMORY[0x839DA4],
                          (unsigned __int8 *)MEMORY[0x83D404],
                          v89[0],
                          v89[1],
                          (int)v89[2],
                          v90,
                          v91,
                          SLODWORD(v92),
                          SHIDWORD(v92));
    Rules::CopyDataArray(&this->?[3], IntList);
    v14 = (int)IntList[6];
    v94[0] = (int)&vt_VectorClass_int;
    this->?[1] = v14;
    VectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
           v99,
           (unsigned __int8 *)MEMORY[0x839DA4],
           (unsigned __int8 *)MEMORY[0x83D3F4],
           &MEMORY[0x889F64],
           String,
           128) )
    {
      TypeList::BuildingTypeConstructor(v96);
      for ( nn = strtok(String, MEMORY[0x817F70]); nn; nn = strtok(0, MEMORY[0x817F70]) )
      {
        if ( !*nn )
          break;
        IntList = (void ***)BuildingTypeClass::FindOrCreate(nn);
        if ( IntList )
          DynamicVector::Add_Alt3(v96, &IntList);
      }
      TypeList::BuildingTypeCopy(v94, v96);
      v96[0] = &vt_VectorClass_BuildingTypeClass_const;
      DynamicVectorClass::Destroy((int)v96);
    }
    else
    {
      TypeList::BuildingTypeCopy(v94, &this->?[2]);
    }
    DynamicVector::Copy(&this->?[2], v94);
    this->?[0] = v95;
    v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
           v99,
           (unsigned __int8 *)MEMORY[0x839DA4],
           (unsigned __int8 *)MEMORY[0x83D3E4],
           &MEMORY[0x889F64],
           String,
           128) )
    {
      TypeList::BuildingTypeConstructor(v96);
      for ( i1 = strtok(String, MEMORY[0x817F70]); i1; i1 = strtok(0, MEMORY[0x817F70]) )
      {
        if ( !*i1 )
          break;
        IntList = (void ***)BuildingTypeClass::FindOrCreate(i1);
        if ( IntList )
          DynamicVector::Add_Alt3(v96, &IntList);
      }
      TypeList::BuildingTypeCopy(v94, v96);
      v96[0] = &vt_VectorClass_BuildingTypeClass_const;
      DynamicVectorClass::Destroy((int)v96);
    }
    else
    {
      TypeList::BuildingTypeCopy(v94, &this->?[1]);
    }
    DynamicVector::Copy(&this->?[1], v94);
    this->AALimit[3] = v95;
    v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
           v99,
           (unsigned __int8 *)MEMORY[0x839DA4],
           (unsigned __int8 *)MEMORY[0x83D3DC],
           &MEMORY[0x889F64],
           String,
           128) )
    {
      TypeList::BuildingTypeConstructor(v96);
      for ( i2 = strtok(String, MEMORY[0x817F70]); i2; i2 = strtok(0, MEMORY[0x817F70]) )
      {
        if ( !*i2 )
          break;
        IntList = (void ***)BuildingTypeClass::FindOrCreate(i2);
        if ( IntList )
          DynamicVector::Add_Alt3(v96, &IntList);
      }
      TypeList::BuildingTypeCopy(v94, v96);
      v96[0] = &vt_VectorClass_BuildingTypeClass_const;
      DynamicVectorClass::Destroy((int)v96);
    }
    else
    {
      TypeList::BuildingTypeCopy(v94, this->WarRatio);
    }
    DynamicVector::Copy(this->WarRatio, v94);
    v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
    this->?[2] = v95;
    DynamicVectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
           v99,
           (unsigned __int8 *)MEMORY[0x839DA4],
           (unsigned __int8 *)MEMORY[0x83D3CC],
           &MEMORY[0x889F64],
           String,
           128) )
    {
      TypeList::BuildingTypeConstructor(v96);
      for ( i3 = strtok(String, MEMORY[0x817F70]); i3; i3 = strtok(0, MEMORY[0x817F70]) )
      {
        if ( !*i3 )
          break;
        IntList = (void ***)BuildingTypeClass::FindOrCreate(i3);
        if ( IntList )
          DynamicVector::Add_Alt3(v96, &IntList);
      }
      TypeList::BuildingTypeCopy(v94, v96);
      v96[0] = &vt_VectorClass_BuildingTypeClass_const;
      DynamicVectorClass::Destroy((int)v96);
    }
    else
    {
      TypeList::BuildingTypeCopy(v94, &this->?[3]);
    }
    DynamicVector::Copy(&this->?[3], v94);
    this->InfantryBaseMult[1] = v95;
    v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
           v99,
           (unsigned __int8 *)MEMORY[0x839DA4],
           (unsigned __int8 *)MEMORY[0x83D3C0],
           &MEMORY[0x889F64],
           String,
           128) )
    {
      TypeList::BuildingTypeConstructor(v96);
      for ( i4 = strtok(String, MEMORY[0x817F70]); i4; i4 = strtok(0, MEMORY[0x817F70]) )
      {
        if ( !*i4 )
          break;
        IntList = (void ***)BuildingTypeClass::FindOrCreate(i4);
        if ( IntList )
          DynamicVector::Add_Alt3(v96, &IntList);
      }
      TypeList::BuildingTypeCopy(v94, v96);
      v96[0] = &vt_VectorClass_BuildingTypeClass_const;
      DynamicVectorClass::Destroy((int)v96);
    }
    else
    {
      TypeList::BuildingTypeCopy(v94, &this->InfantryBaseMult[2]);
    }
    DynamicVector::Copy(&this->InfantryBaseMult[2], v94);
    this->GameSpeedBias = v95;
    v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
           v99,
           (unsigned __int8 *)MEMORY[0x839DA4],
           (unsigned __int8 *)MEMORY[0x83D3B0],
           &MEMORY[0x889F64],
           String,
           128) )
    {
      TypeList::BuildingTypeConstructor(v96);
      for ( i5 = strtok(String, MEMORY[0x817F70]); i5; i5 = strtok(0, MEMORY[0x817F70]) )
      {
        if ( !*i5 )
          break;
        IntList = (void ***)BuildingTypeClass::FindOrCreate(i5);
        if ( IntList )
          DynamicVector::Add_Alt3(v96, &IntList);
      }
      TypeList::BuildingTypeCopy(v94, v96);
      v96[0] = &vt_VectorClass_BuildingTypeClass_const;
      DynamicVectorClass::Destroy((int)v96);
    }
    else
    {
      TypeList::BuildingTypeCopy(v94, &this->?);
    }
    DynamicVector::Copy(&this->?, v94);
    v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
    LODWORD(this->MaxIQLevels) = v95;
    DynamicVectorClass::Destroy((int)v94);
    IntList = (void ***)ReadINIClassBuildingTypeList(
                          (int)v94,
                          v99,
                          (unsigned __int8 *)MEMORY[0x839DA4],
                          (unsigned __int8 *)MEMORY[0x83D3A8],
                          &this->SuperWeapons);
    DynamicVector::Copy(&this->SuperWeapons, IntList);
    v21 = (int)IntList[6];
    v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
    this->RepairSell[3] = v21;
    DynamicVectorClass::Destroy((int)v94);
    INIClassBuildingTypeList = (int *)ReadINIClassBuildingTypeList(
                                        (int)v94,
                                        v99,
                                        (unsigned __int8 *)MEMORY[0x839DA4],
                                        (unsigned __int8 *)MEMORY[0x83D3A0],
                                        this->Aircraft);
    TypeList::CopyAircraft(this->Aircraft, INIClassBuildingTypeList);
    v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy((int)v94);
    v23 = (int *)ReadINIClassBuildingTypeList(
                   (int)v94,
                   v99,
                   (unsigned __int8 *)MEMORY[0x839DA4],
                   (unsigned __int8 *)MEMORY[0x83D390],
                   &this->SilverCrate[3]);
    TypeList::CopyAircraft(&this->SilverCrate[3], v23);
    v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy((int)v94);
    v24 = (int *)ReadINIClassBuildingTypeList(
                   (int)v94,
                   v99,
                   (unsigned __int8 *)MEMORY[0x839DA4],
                   (unsigned __int8 *)MEMORY[0x83D384],
                   &this->MinUnitCount);
    TypeList::CopyAircraft(&this->MinUnitCount, v24);
    v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy((int)v94);
    v25 = (int *)ReadINIClassBuildingTypeList(
                   (int)v94,
                   v99,
                   (unsigned __int8 *)MEMORY[0x839DA4],
                   (unsigned __int8 *)MEMORY[0x83D36C],
                   &this->BridgeDestruction[1]);
    TypeList::CopyAircraft(&this->BridgeDestruction[1], v25);
    v94[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy((int)v94);
    *(double *)&this->? = INIClass::ReadDouble_Overwrite(
                            (int)v99,
                            (unsigned __int8 *)MEMORY[0x839DA4],
                            (unsigned __int8 *)MEMORY[0x83D35C],
                            *(double *)&this->?);
    *(double *)&this->? = INIClass::ReadDouble_Overwrite(
                            (int)v99,
                            (unsigned __int8 *)MEMORY[0x839DA4],
                            (unsigned __int8 *)MEMORY[0x83D350],
                            *(double *)&this->?);
    *(double *)this->? = INIClass::ReadDouble_Overwrite(
                           (int)v99,
                           (unsigned __int8 *)MEMORY[0x839DA4],
                           (unsigned __int8 *)MEMORY[0x83D344],
                           *(double *)this->?);
    this->__pad_1758 = INIClass::ReadInt_Overwrite(
                                 (int)v99,
                                 (unsigned __int8 *)MEMORY[0x839DA4],
                                 (unsigned __int8 *)MEMORY[0x83D334],
                                 this->__pad_1758);
    *((double *)this + 748) = INIClass::ReadDouble_Overwrite(
                                (int)v99,
                                (unsigned __int8 *)MEMORY[0x839DA4],
                                (unsigned __int8 *)MEMORY[0x83D328],
                                *((double *)this + 748));
    Int_Overwrite = INIClass::ReadInt_Overwrite(
                      (int)v99,
                      (unsigned __int8 *)MEMORY[0x839DA4],
                      (unsigned __int8 *)MEMORY[0x83D314],
                      this->q1768);
    v27 = *((_DWORD *)this + 1349);
    v28 = this->q544;
    this->q1768 = Int_Overwrite;
    Double_Overwrite = INIClass::ReadDouble_Overwrite(
                         (int)v99,
                         (unsigned __int8 *)MEMORY[0x839DA4],
                         (unsigned __int8 *)MEMORY[0x83D304],
                         COERCE_DOUBLE(__PAIR64__(v27, v28)));
    v30 = this->?[14];
    *((double *)this + 674) = Double_Overwrite;
    this->?[14] = INIClass::ReadInt_Overwrite(
                    (int)v99,
                    (unsigned __int8 *)MEMORY[0x839DA4],
                    (unsigned __int8 *)MEMORY[0x83D2F4],
                    v30);
    v31 = INIClass::ReadInt_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D2E0],
            this->?[15]);
    v32 = this->?[13];
    this->?[15] = v31;
    v33 = INIClass::ReadInt_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D2D0],
            v32);
    v34 = this->?[12];
    this->?[13] = v33;
    v35 = INIClass::ReadInt_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D2C4],
            v34);
    v36 = this->?[10];
    this->?[12] = v35;
    HIDWORD(v92) = this->?[11];
    LODWORD(v92) = v36;
    v37 = INIClass::ReadDouble_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D2B4],
            v92);
    v38 = this->?[9];
    *(double *)&this->?[10] = v37;
    v39 = INIClass::ReadInt_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D2A4],
            v38);
    HIDWORD(v40) = this->?[7];
    this->?[9] = v39;
    LODWORD(v40) = this->?[6];
    v41 = INIClass::ReadDouble_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D294],
            v40);
    v42 = this->?[8];
    *(double *)&this->?[6] = v41;
    v43 = INIClass::ReadInt_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D284],
            v42);
    v44 = this->?[3];
    v45 = this->?[2];
    this->?[8] = v43;
    v46 = INIClass::ReadDouble_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D278],
            COERCE_DOUBLE(__PAIR64__(v44, v45)));
    v47 = this->?[4];
    *(double *)&this->?[2] = v46;
    v48 = INIClass::ReadInt_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D26C],
            v47);
    v49 = this->?[18];
    this->?[4] = v48;
    HIDWORD(v92) = this->?[19];
    LODWORD(v92) = v49;
    v50 = INIClass::ReadDouble_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D25C],
            v92);
    v51 = this->?[0];
    *(double *)&this->?[18] = v50;
    v52 = INIClass::ReadInt_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D24C],
            v51);
    HIDWORD(v53) = this->?[15];
    this->?[0] = v52;
    LODWORD(v53) = this->?[14];
    v54 = INIClass::ReadDouble_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D244],
            v53);
    v55 = this->?[16];
    *(double *)&this->?[14] = v54;
    v56 = INIClass::ReadInt_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D23C],
            v55);
    v57 = this->?[11];
    v58 = this->?[10];
    this->?[16] = v56;
    v59 = INIClass::ReadDouble_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D230],
            COERCE_DOUBLE(__PAIR64__(v57, v58)));
    v60 = this->?[12];
    *(double *)&this->?[10] = v59;
    v61 = INIClass::ReadInt_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D224],
            v60);
    v62 = this->?[6];
    this->?[12] = v61;
    HIDWORD(v92) = this->?[7];
    LODWORD(v92) = v62;
    v63 = INIClass::ReadDouble_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D214],
            v92);
    v64 = this->?[8];
    *(double *)&this->?[6] = v63;
    v65 = INIClass::ReadInt_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D204],
            v64);
    HIDWORD(v66) = this->?[3];
    this->?[8] = v65;
    LODWORD(v66) = this->?[2];
    v67 = INIClass::ReadDouble_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D1F4],
            v66);
    v68 = this->?[4];
    *(double *)&this->?[2] = v67;
    v69 = INIClass::ReadInt_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D1E4],
            v68);
    v70 = *((_BYTE *)this + 6115);
    this->?[4] = v69;
    *((_BYTE *)this + 6115) = INIClass::ReadBool_Overwrite(
                                (int)v99,
                                (unsigned __int8 *)MEMORY[0x839DA4],
                                (unsigned __int8 *)MEMORY[0x83D1D4],
                                v70);
    Bool_Overwrite = INIClass::ReadBool_Overwrite(
                       (int)v99,
                       (unsigned __int8 *)MEMORY[0x839DA4],
                       (unsigned __int8 *)MEMORY[0x83D1C8],
                       this->__pad_5F8);
    HIDWORD(v72) = this->?[1];
    this->__pad_5F8 = Bool_Overwrite;
    LODWORD(v72) = this->?[0];
    v73 = INIClass::ReadDouble_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D1B8],
            v72);
    v74 = this->__pad_518;
    *(double *)this->? = v73;
    v75 = INIClass::ReadInt_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D1A8],
            v74);
    v76 = this->BaseDefenseDelay[0];
    MaximumBuildingPlacementFailures = this->?;
    this->__pad_518 = v75;
    v78 = INIClass::ReadDouble_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D198],
            COERCE_DOUBLE(__PAIR64__(v76, MaximumBuildingPlacementFailures)));
    v79 = this->BaseDefenseDelay[2];
    v80 = this->BaseDefenseDelay[1];
    *(double *)&this->? = v78;
    v81 = INIClass::ReadDouble_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D17C],
            COERCE_DOUBLE(__PAIR64__(v79, v80)));
    v82 = this->?[0];
    v83 = this->BaseDefenseDelay[3];
    *(double *)&this->BaseDefenseDelay[1] = v81;
    v84 = INIClass::ReadDouble_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D160],
            COERCE_DOUBLE(__PAIR64__(v82, v83)));
    v85 = this->?[2];
    v86 = this->?[1];
    *(double *)&this->BaseDefenseDelay[3] = v84;
    v87 = INIClass::ReadDouble_Overwrite(
            (int)v99,
            (unsigned __int8 *)MEMORY[0x839DA4],
            (unsigned __int8 *)MEMORY[0x83D144],
            COERCE_DOUBLE(__PAIR64__(v85, v86)));
    v88 = this->SovietSurvivorDivisor[0];
    *(double *)&this->?[1] = v87;
    this->SovietSurvivorDivisor[0] = INIClass::ReadInt_Overwrite(
                                       (int)v99,
                                       (unsigned __int8 *)MEMORY[0x839DA4],
                                       (unsigned __int8 *)MEMORY[0x83D12C],
                                       v88);
    result = INIClass::ReadInt_Overwrite(
               (int)v99,
               (unsigned __int8 *)MEMORY[0x839DA4],
               (unsigned __int8 *)MEMORY[0x83D110],
               this->?[3]);
    this->?[3] = result;
    LOBYTE(result) = 1;
  }
  else
  {
    LOBYTE(result) = 0;
  }
  return result;
}


// ==== 0x00673E80  RulesClass::ReadPowerupsSection  this=AbstractClass  sig=csp ====
int __thiscall sub_673E80(RulesClass *this)
{
  int result; // eax
  int v2; // edi
  double *v3; // ebp
  char *v4; // eax
  const char *v5; // esi
  char *v6; // eax
  char *v7; // esi
  char *v8; // eax
  char *v9; // esi
  char *v10; // esi
  double v11; // st7
  char String[128]; // [esp+0h] [ebp-80h] BYREF
  unsigned __int8 ***v13; // [esp+84h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v13, (unsigned __int8 *)MEMORY[0x839D98]); /*0x673e90*/
  if ( result ) /*0x673e9c*/
  {
    v2 = 0; /*0x673ea5*/
    v3 = MEMORY[0x89EC28]; /*0x673ea7*/
    do /*0x673fd7*/
    {
      result = INIClass::GetString( /*0x673ed0*/
                 v13,
                 (unsigned __int8 *)MEMORY[0x839D98],
                 *((unsigned __int8 **)&off_7E523C + v2),
                 MEMORY[0x83D4AC],
                 String,
                 128);
      if ( result ) /*0x673ed7*/
      {
        v4 = strtok(String, MEMORY[0x817F70]); /*0x673ee7*/
        v5 = v4; /*0x673eec*/
        if ( v4 ) /*0x673ef3*/
        {
          String::Trim(v4); /*0x673ef7*/
          dword_81DA8C[v2] = atoi(v5); /*0x673f05*/
        }
        v6 = strtok(0, MEMORY[0x817F70]); /*0x673f13*/
        v7 = v6; /*0x673f18*/
        if ( v6 ) /*0x673f1f*/
        {
          String::Trim(v6); /*0x673f23*/
          dword_81DAD8[v2] = GlobalArray::FindString(v7); /*0x673f2f*/
        }
        v8 = strtok(0, MEMORY[0x817F70]); /*0x673f3d*/
        v9 = v8; /*0x673f42*/
        if ( v8 ) /*0x673f49*/
        {
          String::Trim(v8); /*0x673f4d*/
          if ( _strcmpi(v9, MEMORY[0x825BF8]) ) /*0x673f58*/
          {
            if ( !_strcmpi(v9, MEMORY[0x825BF4]) ) /*0x673f73*/
              MEMORY[0x89ECC0][v2] = 0; /*0x673f7f*/
          }
          else
          {
            MEMORY[0x89ECC0][v2] = 1; /*0x673f64*/
          }
        }
        result = (int)strtok(0, MEMORY[0x817F70]); /*0x673f8c*/
        v10 = (char *)result; /*0x673f91*/
        if ( result ) /*0x673f98*/
        {
          if ( strchr((const char *)result, 37) ) /*0x673f9d*/
          {
            v11 = atof(v10) * 0.01; /*0x673faf*/
          }
          else
          {
            String::Trim(v10); /*0x673fbc*/
            v11 = atof(v10); /*0x673fc2*/
          }
          *v3 = v11; /*0x673fca*/
        }
      }
      ++v3; /*0x673fcd*/
      ++v2; /*0x673fd0*/
    }
    while ( (int)v3 < (int)MEMORY[0x89ECC0] ); /*0x673fd7*/
    LOBYTE(result) = 1; /*0x673fdf*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x673feb*/
  }
  return result; /*0x673fe2*/
}


// ==== 0x00674000  RulesClass::LoadSpeedTypes  this=AbstractClass  sig=csp ====
int __thiscall RulesClass::LoadSpeedTypes(RulesClass *this)
{
  double v1; // st7
  unsigned __int8 **v2; // esi
  float *v3; // ebx
  int result; // eax
  unsigned __int8 *v5; // edx
  unsigned __int8 *v6; // ecx
  unsigned __int8 *v7; // eax
  unsigned __int8 *v8; // edx
  unsigned __int8 *v9; // ecx
  unsigned __int8 *v10; // eax
  unsigned __int8 *v11; // edx
  int v12; // [esp+10h] [ebp+4h]

  v2 = (unsigned __int8 **)MEMORY[0x839D68]; /*0x674007*/
  v3 = (float *)&MEMORY[0x89EA44]; /*0x67400c*/
  do /*0x67422a*/
  {
    result = INIClass::BinarySearchSection(v12, *v2); /*0x674016*/
    if ( result ) /*0x674022*/
    {
      INIClass::ReadDouble_Overwrite((int)*v2, (int)g_INI_Key_Hover, 1.0); /*0x674039*/
      if ( v1 >= 1.0 ) /*0x674049*/
        v1 = 1.0; /*0x674063*/
      else
        INIClass::ReadDouble_Overwrite((int)*v2, (int)g_INI_Key_Hover, 1.0); /*0x67405c*/
      v5 = *v2; /*0x674069*/
      v3[2] = v1; /*0x674070*/
      INIClass::ReadDouble_Overwrite((int)v5, (int)g_INI_Key_Foot, 1.0); /*0x67407d*/
      if ( v1 >= 1.0 ) /*0x67408d*/
        v1 = 1.0; /*0x6740a7*/
      else
        INIClass::ReadDouble_Overwrite((int)*v2, (int)g_INI_Key_Foot, 1.0); /*0x6740a0*/
      v6 = *v2; /*0x6740ad*/
      *(v3 - 1) = v1; /*0x6740b4*/
      INIClass::ReadDouble_Overwrite((int)v6, (int)g_INI_Key_Track, 1.0); /*0x6740c1*/
      if ( v1 >= 1.0 ) /*0x6740d1*/
        v1 = 1.0; /*0x6740eb*/
      else
        INIClass::ReadDouble_Overwrite((int)*v2, (int)g_INI_Key_Track, 1.0); /*0x6740e4*/
      v7 = *v2; /*0x6740f1*/
      *v3 = v1; /*0x6740f8*/
      INIClass::ReadDouble_Overwrite((int)v7, (int)g_INI_Key_Wheel, 1.0); /*0x674104*/
      if ( v1 >= 1.0 ) /*0x674114*/
        v1 = 1.0; /*0x67412e*/
      else
        INIClass::ReadDouble_Overwrite((int)*v2, (int)g_INI_Key_Wheel, 1.0); /*0x674127*/
      v8 = *v2; /*0x674134*/
      v3[1] = v1; /*0x67413b*/
      v3[3] = 1.0; /*0x674148*/
      INIClass::ReadDouble_Overwrite((int)v8, (int)g_INI_Key_Float, 1.0); /*0x67414f*/
      if ( v1 >= 1.0 ) /*0x67415f*/
        v1 = 1.0; /*0x674179*/
      else
        INIClass::ReadDouble_Overwrite((int)*v2, (int)g_INI_Key_Float, 1.0); /*0x674172*/
      v9 = *v2; /*0x67417f*/
      v3[4] = v1; /*0x674186*/
      INIClass::ReadDouble_Overwrite((int)v9, (int)g_INI_Key_Amphibious, 1.0); /*0x674193*/
      if ( v1 >= 1.0 ) /*0x6741a3*/
        v1 = 1.0; /*0x6741bd*/
      else
        INIClass::ReadDouble_Overwrite((int)*v2, (int)g_INI_Key_Amphibious, 1.0); /*0x6741b6*/
      v10 = *v2; /*0x6741c3*/
      v3[5] = v1; /*0x6741ca*/
      INIClass::ReadDouble_Overwrite((int)v10, (int)g_INI_Key_FloatBeach, 1.0); /*0x6741d7*/
      if ( v1 >= 1.0 ) /*0x6741e7*/
        v1 = 1.0; /*0x674201*/
      else
        INIClass::ReadDouble_Overwrite((int)*v2, (int)g_INI_Key_FloatBeach, 1.0); /*0x6741fa*/
      v11 = *v2; /*0x674207*/
      v3[6] = v1; /*0x67420b*/
      result = INIClass::ReadBool_Overwrite(v11, MEMORY[0x83D4B4], 0); /*0x674216*/
      *((_BYTE *)v3 + 28) = result; /*0x67421b*/
    }
    v3 += 9; /*0x67421e*/
    ++v2; /*0x674221*/
  }
  while ( (int)v3 < (int)((float *)&MEMORY[0x89EBF0] + 1) ); /*0x67422a*/
  LOBYTE(result) = 1; /*0x674232*/
  return result; /*0x674230*/
}


// ==== 0x00674240  RulesClass::ReadIQSection  this=AbstractClass  sig=csp ====
int __thiscall sub_674240(RulesClass *this)
{
  int result; // eax
  int Int_Overwrite; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection(v15, (unsigned __int8 *)g_INI_Key_IQ); /*0x674250*/
  if ( result ) /*0x67425c*/
  {
    *((_DWORD *)this + 1293) = INIClass::ReadInt_Overwrite( /*0x67427c*/
                                 v15,
                                 (unsigned __int8 *)g_INI_Key_IQ,
                                 (unsigned __int8 *)MEMORY[0x83D50C],
                                 *((_DWORD *)this + 1293));
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x674297*/
                      v15,
                      (unsigned __int8 *)g_INI_Key_IQ,
                      (unsigned __int8 *)MEMORY[0x83D4FC],
                      *((_DWORD *)this + 1294));
    v4 = *((_DWORD *)this + 1295); /*0x67429c*/
    *((_DWORD *)this + 1294) = Int_Overwrite; /*0x6742a2*/
    v5 = INIClass::ReadInt_Overwrite(v15, (unsigned __int8 *)g_INI_Key_IQ, (unsigned __int8 *)MEMORY[0x83D4F0], v4); /*0x6742b6*/
    v6 = this->__pad_510; /*0x6742bb*/
    *((_DWORD *)this + 1295) = v5; /*0x6742c1*/
    this->__pad_510 = INIClass::ReadInt_Overwrite( /*0x6742db*/
                                 v15,
                                 (unsigned __int8 *)g_INI_Key_IQ,
                                 (unsigned __int8 *)stru_81BEBC,
                                 v6);
    v7 = INIClass::ReadInt_Overwrite( /*0x6742f6*/
           v15,
           (unsigned __int8 *)g_INI_Key_IQ,
           (unsigned __int8 *)MEMORY[0x83D4E4],
           *((_DWORD *)this + 1297));
    v8 = *((_DWORD *)this + 1298); /*0x6742fb*/
    *((_DWORD *)this + 1297) = v7; /*0x674301*/
    v9 = INIClass::ReadInt_Overwrite(v15, (unsigned __int8 *)g_INI_Key_IQ, (unsigned __int8 *)MEMORY[0x83D4D8], v8); /*0x674315*/
    v10 = *((_DWORD *)this + 1299); /*0x67431a*/
    *((_DWORD *)this + 1298) = v9; /*0x674320*/
    *((_DWORD *)this + 1299) = INIClass::ReadInt_Overwrite( /*0x67433a*/
                                 v15,
                                 (unsigned __int8 *)g_INI_Key_IQ,
                                 (unsigned __int8 *)stru_82C284,
                                 v10);
    v11 = INIClass::ReadInt_Overwrite( /*0x674355*/
            v15,
            (unsigned __int8 *)g_INI_Key_IQ,
            (unsigned __int8 *)MEMORY[0x83B3B4],
            this->q514);
    v12 = *((_DWORD *)this + 1301); /*0x67435a*/
    this->q514 = v11; /*0x674360*/
    v13 = INIClass::ReadInt_Overwrite(v15, (unsigned __int8 *)g_INI_Key_IQ, (unsigned __int8 *)stru_817460, v12); /*0x674374*/
    v14 = *((_DWORD *)this + 1302); /*0x674379*/
    *((_DWORD *)this + 1301) = v13; /*0x67437f*/
    *((_DWORD *)this + 1302) = INIClass::ReadInt_Overwrite( /*0x674399*/
                                 v15,
                                 (unsigned __int8 *)g_INI_Key_IQ,
                                 (unsigned __int8 *)MEMORY[0x83D4CC],
                                 v14);
    result = INIClass::ReadInt_Overwrite( /*0x6743b4*/
               v15,
               (unsigned __int8 *)g_INI_Key_IQ,
               (unsigned __int8 *)MEMORY[0x83D4C0],
               *((_DWORD *)this + 1303));
    *((_DWORD *)this + 1303) = result; /*0x6743b9*/
    LOBYTE(result) = 1; /*0x6743c0*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6743c7*/
  }
  return result; /*0x6743bf*/
}


// ==== 0x006743D0  RulesClass::readDifficulty  this=AbstractClass  sig=csp ====
int __thiscall sub_6743D0(RulesClass *this)
{
  int result; // eax
  int Int_Overwrite; // eax
  int v4; // edx
  double Double_Overwrite; // st7
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  double v10; // st7
  int v11; // ecx
  int v12; // edx
  double v13; // st7
  int v14; // ecx
  double v15; // [esp-8h] [ebp-10h]
  int v16; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection(v16, (unsigned __int8 *)MEMORY[0x839D58]); /*0x6743e0*/
  if ( result ) /*0x6743ec*/
  {
    this->?[8] = INIClass::ReadInt_Overwrite( /*0x67440c*/
                   v16,
                   (unsigned __int8 *)MEMORY[0x839D58],
                   (unsigned __int8 *)MEMORY[0x83D554],
                   this->?[8]);
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x674427*/
                      v16,
                      (unsigned __int8 *)MEMORY[0x839D58],
                      (unsigned __int8 *)g_INI_Key_Speed,
                      this->?[9]);
    v4 = this->?[12]; /*0x67442c*/
    this->?[9] = Int_Overwrite; /*0x674432*/
    HIDWORD(v15) = v4; /*0x674444*/
    LODWORD(v15) = this->?[11]; /*0x674445*/
    Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x67444e*/
                         v16,
                         (unsigned __int8 *)MEMORY[0x839D58],
                         (unsigned __int8 *)MEMORY[0x83D54C],
                         v15);
    v6 = this->?[13]; /*0x674453*/
    *(double *)&this->?[11] = Double_Overwrite; /*0x67445b*/
    v7 = INIClass::ReadInt_Overwrite(v16, (unsigned __int8 *)MEMORY[0x839D58], (unsigned __int8 *)MEMORY[0x83D53C], v6); /*0x67446d*/
    v8 = this->?[2]; /*0x674472*/
    v9 = this->?[1]; /*0x674478*/
    this->?[13] = v7; /*0x67447e*/
    v10 = INIClass::ReadDouble_Overwrite( /*0x674493*/
            v16,
            (unsigned __int8 *)MEMORY[0x839D58],
            (unsigned __int8 *)MEMORY[0x81B140],
            COERCE_DOUBLE(__PAIR64__(v8, v9)));
    v11 = this->?[4]; /*0x674498*/
    v12 = this->?[3]; /*0x67449e*/
    *(double *)&this->?[1] = v10; /*0x6744a4*/
    v13 = INIClass::ReadDouble_Overwrite( /*0x6744b9*/
            v16,
            (unsigned __int8 *)MEMORY[0x839D58],
            (unsigned __int8 *)MEMORY[0x83D528],
            COERCE_DOUBLE(__PAIR64__(v11, v12)));
    v14 = this->?[5]; /*0x6744be*/
    *(double *)&this->?[3] = v13; /*0x6744c4*/
    result = INIClass::ReadInt_Overwrite( /*0x6744d9*/
               v16,
               (unsigned __int8 *)MEMORY[0x839D58],
               (unsigned __int8 *)MEMORY[0x83D518],
               v14);
    this->?[5] = result; /*0x6744de*/
    LOBYTE(result) = 1; /*0x6744e5*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6744ec*/
  }
  return result; /*0x6744e4*/
}


// ==== 0x00674500  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_674500(RulesClass *this)
{
  int result; // eax
  RulesClass *v2; // [esp+Ch] [ebp+4h]

  INIClass::ReadDifficultyModifiers(v2); /*0x674515*/
  INIClass::ReadDifficultyModifiers(v2); /*0x674527*/
  result = INIClass::ReadDifficultyModifiers(v2); /*0x674539*/
  LOBYTE(result) = 1; /*0x67453f*/
  return result; /*0x67453e*/
}


// ==== 0x00674550  RulesClass::ReadMovies  this=RulesClass  sig=csp ====
int __thiscall sub_674550(#381 *this)
{
  int result; // eax
  int v2; // ebp
  int i; // ebx
  unsigned __int8 *StringByIndex; // eax
  char *v5; // esi
  char Source[32]; // [esp+4h] [ebp-20h] BYREF
  char *v7; // [esp+28h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v7, (unsigned __int8 *)aMovies); /*0x674560*/
  if ( result ) /*0x67456c*/
  {
    result = INIClass::GetKeyCount(v7, (unsigned __int8 *)aMovies); /*0x67457d*/
    v2 = result; /*0x674582*/
    for ( i = 0; i < v2; ++i ) /*0x674588*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v7, (unsigned __int8 *)aMovies, i); /*0x6745a4*/
      result = INIClass::GetString( /*0x6745b3*/
                 (unsigned __int8 ***)v7,
                 (unsigned __int8 *)aMovies,
                 StringByIndex,
                 g_Str__none_,
                 Source,
                 32);
      if ( result ) /*0x6745ba*/
      {
        result = LookupNameIndex(Source); /*0x6745c0*/
        if ( result == -1 ) /*0x6745c8*/
        {
          v5 = _strdup(Source); /*0x6745da*/
          result = MEMORY[0xABF398]; /*0x6745dc*/
          if ( MEMORY[0xABF3A0] < MEMORY[0xABF398] /*0x674614*/
            || (MEMORY[0xABF39D] || !MEMORY[0xABF398])
            && MEMORY[0xABF3A4] > 0
            && (result = (*(int (__thiscall **)(int *, int, _DWORD))(MEMORY[0xABF390] + 8))(
                           &MEMORY[0xABF390],
                           MEMORY[0xABF398] + MEMORY[0xABF3A4],
                           0),
                (_BYTE)result) )
          {
            result = MEMORY[0xABF3A0]++; /*0x67461c*/
            *((_DWORD *)MEMORY[0xABF394] + result) = v5; /*0x67462b*/
          }
        }
      }
    }
    LOBYTE(result) = 1; /*0x67463a*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x674643*/
  }
  return result; /*0x67463c*/
}


// ==== 0x00674650  SidebarClass::ReadButtonList  this=AbstractClass  sig=csp ====
int __thiscall SidebarClass::ReadButtonList(RulesClass *this)
{
  char *v1; // edi
  int result; // eax
  int i; // esi
  int v4; // edi
  int v5; // esi
  char *j; // eax
  int v7; // eax
  char String[512]; // [esp+8h] [ebp-200h] BYREF
  unsigned __int8 ***v9; // [esp+20Ch] [ebp+4h]
  char v10; // [esp+210h] [ebp+8h]

  v1 = MEMORY[0x839D1C]; /*0x67465e*/
  if ( !v10 ) /*0x674664*/
    v1 = MEMORY[0x839D3C]; /*0x674666*/
  result = INIClass::BinarySearchSection((int)v9, (unsigned __int8 *)v1); /*0x674676*/
  if ( result ) /*0x674682*/
  {
    for ( i = 0; i < 25; ++i ) /*0x674689*/
      globalHelper_0CFD20(i, MEMORY[0x8427CC]); /*0x674693*/
    result = INIClass::GetString( /*0x6746b9*/
               v9,
               (unsigned __int8 *)v1,
               (unsigned __int8 *)MEMORY[0x839D10],
               &MEMORY[0x889F64],
               String,
               512);
    if ( result ) /*0x6746c0*/
    {
      v4 = 0; /*0x6746cc*/
      v5 = 0; /*0x6746ce*/
      for ( j = strtok(String, MEMORY[0x817F70]); j; j = strtok(0, MEMORY[0x817F70]) ) /*0x6746da*/
      {
        v7 = SidebarClass::findEntryIndexByName(j); /*0x6746de*/
        if ( v7 != MEMORY[0x8427CC] ) /*0x6746e9*/
          globalHelper_0CFD20(v7, v5); /*0x6746ef*/
        ++v4; /*0x6746f9*/
        ++v5; /*0x6746fc*/
      }
      result = globalHelper_0CFDB0(v4); /*0x67470b*/
    }
    LOBYTE(result) = 1; /*0x674712*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x67471f*/
  }
  return result; /*0x674711*/
}


// ==== 0x00674730  RulesClass::SaveLoad_Prefix  this=RulesClass  sig=csp ====
int __thiscall RulesClass::SaveLoad_Prefix(_DWORD *this, int *a2)
{
  int *v2; // esi
  int v4; // edx
  int i; // ebx
  int v6; // edx
  int j; // ebx
  int v8; // edx
  int k; // ebx
  int v10; // edx
  int m; // ebx
  int v12; // edx
  int n; // ebx
  int v14; // edx
  int ii; // ebx
  int v16; // edx
  int jj; // ebx
  int v18; // edx
  int kk; // ebx
  int v20; // edx
  int mm; // ebx
  int v22; // edx
  int nn; // ebx
  int v24; // edx
  int i1; // ebx
  int v26; // edx
  int i2; // ebx
  int v28; // edx
  int i3; // ebx
  int v30; // edx
  int i4; // ebx
  int v32; // edx
  int i5; // ebx
  int v34; // edx
  int i6; // ebx
  int v36; // edx
  int i7; // ebx
  int v38; // edx
  int i8; // ebx
  int v40; // edx
  int i9; // ebx
  int v42; // edx
  int i10; // ebx
  int v44; // edx
  int i11; // ebx
  int v46; // edx
  int i12; // ebx
  int v48; // edx
  int i13; // ebx
  int v50; // edx
  int i14; // ebx
  int v52; // edx
  int i15; // ebx
  int v54; // edx
  int i16; // ebx
  int v56; // edx
  int i17; // ebx
  int v58; // edx
  int i18; // ebx
  char *v60; // edi
  int v61; // ebx
  int result; // eax

  v2 = a2; /*0x674732*/
  (*(void (__stdcall **)(int *, _DWORD *, int, _DWORD))(*a2 + 16))(a2, this, 6336, 0); /*0x674744*/
  v4 = *v2; /*0x67474d*/
  a2 = (int *)this->q11A4; /*0x674759*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v4 + 16))(v2, &a2, 4, 0); /*0x67475d*/
  for ( i = 0; i < (int)a2; ++i ) /*0x674768*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q1198 + 4 * i, 4, 0); /*0x67477b*/
  v6 = *v2; /*0x67478d*/
  a2 = (int *)this->q11C0; /*0x674799*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v6 + 16))(v2, &a2, 4, 0); /*0x67479d*/
  for ( j = 0; j < (int)a2; ++j ) /*0x6747a8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q11B4 + 4 * j, 4, 0); /*0x6747bb*/
  v8 = *v2; /*0x6747cd*/
  a2 = (int *)this->q11DC; /*0x6747d9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v8 + 16))(v2, &a2, 4, 0); /*0x6747dd*/
  for ( k = 0; k < (int)a2; ++k ) /*0x6747e8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q11D0 + 4 * k, 4, 0); /*0x6747fb*/
  v10 = *v2; /*0x67480d*/
  a2 = (int *)this->q11F8; /*0x674819*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v10 + 16))(v2, &a2, 4, 0); /*0x67481d*/
  for ( m = 0; m < (int)a2; ++m ) /*0x674828*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q11EC + 4 * m, 4, 0); /*0x67483b*/
  v12 = *v2; /*0x67484d*/
  a2 = (int *)this->q1214; /*0x674859*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v12 + 16))(v2, &a2, 4, 0); /*0x67485d*/
  for ( n = 0; n < (int)a2; ++n ) /*0x674868*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q1208 + 4 * n, 4, 0); /*0x67487b*/
  v14 = *v2; /*0x67488d*/
  a2 = (int *)this->q1230; /*0x674899*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v14 + 16))(v2, &a2, 4, 0); /*0x67489d*/
  for ( ii = 0; ii < (int)a2; ++ii ) /*0x6748a8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q1224 + 4 * ii, 4, 0); /*0x6748bb*/
  v16 = *v2; /*0x6748cd*/
  a2 = (int *)this->q124C; /*0x6748d9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v16 + 16))(v2, &a2, 4, 0); /*0x6748dd*/
  for ( jj = 0; jj < (int)a2; ++jj ) /*0x6748e8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q1240 + 4 * jj, 4, 0); /*0x6748fb*/
  v18 = *v2; /*0x67490d*/
  a2 = (int *)this->q1268; /*0x674919*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v18 + 16))(v2, &a2, 4, 0); /*0x67491d*/
  for ( kk = 0; kk < (int)a2; ++kk ) /*0x674928*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q125C + 4 * kk, 4, 0); /*0x67493b*/
  v20 = *v2; /*0x67494d*/
  a2 = (int *)this->q1284; /*0x674959*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v20 + 16))(v2, &a2, 4, 0); /*0x67495d*/
  for ( mm = 0; mm < (int)a2; ++mm ) /*0x674968*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q1278 + 4 * mm, 4, 0); /*0x67497b*/
  v22 = *v2; /*0x67498d*/
  a2 = (int *)this->q12A0; /*0x674999*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v22 + 16))(v2, &a2, 4, 0); /*0x67499d*/
  for ( nn = 0; nn < (int)a2; ++nn ) /*0x6749a8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q1294 + 4 * nn, 4, 0); /*0x6749bb*/
  v24 = *v2; /*0x6749cd*/
  a2 = (int *)this->q12BC; /*0x6749d9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v24 + 16))(v2, &a2, 4, 0); /*0x6749dd*/
  for ( i1 = 0; i1 < (int)a2; ++i1 ) /*0x6749e8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q12B0 + 4 * i1, 4, 0); /*0x6749fb*/
  v26 = *v2; /*0x674a0d*/
  a2 = (int *)this->q12D8; /*0x674a19*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v26 + 16))(v2, &a2, 4, 0); /*0x674a1d*/
  for ( i2 = 0; i2 < (int)a2; ++i2 ) /*0x674a28*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q12CC + 4 * i2, 4, 0); /*0x674a3b*/
  v28 = *v2; /*0x674a4d*/
  a2 = (int *)this->q12F4; /*0x674a59*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v28 + 16))(v2, &a2, 4, 0); /*0x674a5d*/
  for ( i3 = 0; i3 < (int)a2; ++i3 ) /*0x674a68*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q12E8 + 4 * i3, 4, 0); /*0x674a7b*/
  v30 = *v2; /*0x674a8d*/
  a2 = (int *)this->q1400; /*0x674a99*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v30 + 16))(v2, &a2, 4, 0); /*0x674a9d*/
  for ( i4 = 0; i4 < (int)a2; ++i4 ) /*0x674aa8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q13F4 + 4 * i4, 4, 0); /*0x674abb*/
  v32 = *v2; /*0x674acd*/
  a2 = (int *)this->q1168; /*0x674ad9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v32 + 16))(v2, &a2, 4, 0); /*0x674add*/
  for ( i5 = 0; i5 < (int)a2; ++i5 ) /*0x674ae8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q115C + 4 * i5, 4, 0); /*0x674afb*/
  v34 = *v2; /*0x674b0d*/
  a2 = (int *)this->PowerEmergency; /*0x674b19*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v34 + 16))(v2, &a2, 4, 0); /*0x674b1d*/
  for ( i6 = 0; i6 < (int)a2; ++i6 ) /*0x674b28*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q9AC + 4 * i6, 4, 0); /*0x674b3b*/
  v36 = *v2; /*0x674b4d*/
  a2 = (int *)this->qD90; /*0x674b59*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v36 + 16))(v2, &a2, 4, 0); /*0x674b5d*/
  for ( i7 = 0; i7 < (int)a2; ++i7 ) /*0x674b68*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qD84 + 4 * i7, 4, 0); /*0x674b7b*/
  v38 = *v2; /*0x674b8d*/
  a2 = (int *)this->qDAC; /*0x674b99*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v38 + 16))(v2, &a2, 4, 0); /*0x674b9d*/
  for ( i8 = 0; i8 < (int)a2; ++i8 ) /*0x674ba8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qDA0 + 4 * i8, 4, 0); /*0x674bbb*/
  v40 = *v2; /*0x674bcd*/
  a2 = (int *)this->qDC8; /*0x674bd9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v40 + 16))(v2, &a2, 4, 0); /*0x674bdd*/
  for ( i9 = 0; i9 < (int)a2; ++i9 ) /*0x674be8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qDBC + 4 * i9, 4, 0); /*0x674bfb*/
  v42 = *v2; /*0x674c0d*/
  a2 = (int *)this->qEF8; /*0x674c19*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v42 + 16))(v2, &a2, 4, 0); /*0x674c1d*/
  for ( i10 = 0; i10 < (int)a2; ++i10 ) /*0x674c28*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qEEC + 4 * i10, 4, 0); /*0x674c3b*/
  v44 = *v2; /*0x674c4d*/
  a2 = (int *)this->qF14; /*0x674c59*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v44 + 16))(v2, &a2, 4, 0); /*0x674c5d*/
  for ( i11 = 0; i11 < (int)a2; ++i11 ) /*0x674c68*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qF08 + 4 * i11, 4, 0); /*0x674c7b*/
  v46 = *v2; /*0x674c8d*/
  a2 = (int *)this->qF30; /*0x674c99*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v46 + 16))(v2, &a2, 4, 0); /*0x674c9d*/
  for ( i12 = 0; i12 < (int)a2; ++i12 ) /*0x674ca8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qF24 + 4 * i12, 4, 0); /*0x674cbb*/
  v48 = *v2; /*0x674ccd*/
  a2 = (int *)this->qE20; /*0x674cd9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v48 + 16))(v2, &a2, 4, 0); /*0x674cdd*/
  for ( i13 = 0; i13 < (int)a2; ++i13 ) /*0x674ce8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qE14 + 4 * i13, 4, 0); /*0x674cfb*/
  v50 = *v2; /*0x674d0d*/
  a2 = (int *)this->qED4; /*0x674d19*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v50 + 16))(v2, &a2, 4, 0); /*0x674d1d*/
  for ( i14 = 0; i14 < (int)a2; ++i14 ) /*0x674d28*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qEC8 + 4 * i14, 4, 0); /*0x674d3b*/
  v52 = *v2; /*0x674d4d*/
  a2 = (int *)this->qE3C; /*0x674d59*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v52 + 16))(v2, &a2, 4, 0); /*0x674d5d*/
  for ( i15 = 0; i15 < (int)a2; ++i15 ) /*0x674d68*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qE30 + 4 * i15, 4, 0); /*0x674d7b*/
  v54 = *v2; /*0x674d8d*/
  a2 = (int *)this->qDE4; /*0x674d99*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v54 + 16))(v2, &a2, 4, 0); /*0x674d9d*/
  for ( i16 = 0; i16 < (int)a2; ++i16 ) /*0x674da8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->qDD8 + 4 * i16, 4, 0); /*0x674dbb*/
  v56 = *v2; /*0x674dcd*/
  a2 = (int *)this->q13A0; /*0x674dd9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v56 + 16))(v2, &a2, 4, 0); /*0x674ddd*/
  for ( i17 = 0; i17 < (int)a2; ++i17 ) /*0x674de8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q1394 + 4 * i17, 4, 0); /*0x674dfb*/
  v58 = *v2; /*0x674e0d*/
  a2 = (int *)this->q13BC; /*0x674e19*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v58 + 16))(v2, &a2, 4, 0); /*0x674e1d*/
  for ( i18 = 0; i18 < (int)a2; ++i18 ) /*0x674e28*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->q13B0 + 4 * i18, 4, 0); /*0x674e3b*/
  DynamicVector::Read(this + 915, v2); /*0x674e4e*/
  DynamicVector::Read(this + 922, v2); /*0x674e5a*/
  DynamicVector::Read(this + 929, v2); /*0x674e66*/
  DynamicVector::Read(this + 936, v2); /*0x674e72*/
  DynamicVector::Read(this + 1217, v2); /*0x674e7e*/
  DynamicVector::Read(this + 1224, v2); /*0x674e8a*/
  DynamicVector::Read(this + 1231, v2); /*0x674e96*/
  DynamicVector::Read(this + 1238, v2); /*0x674ea2*/
  DynamicVector::Read(this + 1245, v2); /*0x674eae*/
  DynamicVector::Read(this + 1266, v2); /*0x674eba*/
  DynamicVector::Read(this + 1117, v2); /*0x674ec6*/
  DynamicVector::Read(this + 271, v2); /*0x674ed2*/
  DynamicVector::Read(this + 278, v2); /*0x674ede*/
  DynamicVector::Read(this + 285, v2); /*0x674eea*/
  RulesClass::readTerrainTypes(this + 22, v2); /*0x674ef3*/
  RulesClass::readTerrainTypes(this + 384, v2); /*0x674eff*/
  DynamicVector::Read(this + 214, v2); /*0x674f0b*/
  DynamicVector::Read(this + 221, v2); /*0x674f17*/
  DynamicVector::Read(this + 228, v2); /*0x674f23*/
  DynamicVector::Read(this + 235, v2); /*0x674f2f*/
  DynamicVector::Read(this + 242, v2); /*0x674f3b*/
  DynamicVector::Read(this + 249, v2); /*0x674f47*/
  DynamicVector::Read(this + 435, v2); /*0x674f53*/
  DynamicVector::Read(this + 461, v2); /*0x674f5f*/
  VectorClass::LoadStream(this + 497, v2); /*0x674f6b*/
  VectorClass::LoadStream(this + 504, v2); /*0x674f77*/
  VectorClass::LoadStream(this + 511, v2); /*0x674f83*/
  VectorClass::LoadStream(this + 518, v2); /*0x674f8f*/
  VectorClass::LoadStream(this + 525, v2); /*0x674f9b*/
  DynamicVector::Read_Alt(this + 532, v2); /*0x674fa7*/
  DynamicVector::Read_Alt(this + 544, v2); /*0x674fb3*/
  DynamicVector::Read_Alt(this + 555, v2); /*0x674fbf*/
  DynamicVector::Read_Alt(this + 562, v2); /*0x674fcb*/
  DynamicVector::Read_Alt(this + 569, v2); /*0x674fd7*/
  DynamicVector::Read_Alt(this + 576, v2); /*0x674fe3*/
  DynamicVector::Read_Alt(this + 583, v2); /*0x674fef*/
  DynamicVector::Read_Alt(this + 590, v2); /*0x674ffb*/
  DynamicVector::Read_Alt(this + 597, v2); /*0x675007*/
  DynamicVector::Read_Alt(this + 604, v2); /*0x675013*/
  DynamicVector::Read_Alt(this + 611, v2); /*0x67501f*/
  DynamicVector::Read_Alt(this + 625, v2); /*0x67502b*/
  DynamicVector::Read_Alt(this + 632, v2); /*0x675037*/
  DynamicVector::Read_Alt(this + 639, v2); /*0x675043*/
  DynamicVector::Read_Alt(this + 646, v2); /*0x67504f*/
  DynamicVector::Read_Alt(this + 653, v2); /*0x67505b*/
  DynamicVector::Read_Alt(this + 660, v2); /*0x675067*/
  DynamicVector::Read_Alt(this + 667, v2); /*0x675073*/
  DynamicVector::Read_Alt(this + 674, v2); /*0x67507f*/
  DynamicVector::Read_Alt(this + 681, v2); /*0x67508b*/
  DynamicVector::Read_Alt(this + 688, v2); /*0x675097*/
  DynamicVector::Read_Alt(this + 695, v2); /*0x6750a3*/
  RulesClass::readAnimations(this + 726, v2); /*0x6750af*/
  Stream::WriteIntArray(this + 733, v2); /*0x6750bb*/
  Stream::WriteIntArray(this + 740, v2); /*0x6750c7*/
  Stream::WriteIntArray(this + 752, v2); /*0x6750d3*/
  SaveLoad::StreamVector(this + 712, v2); /*0x6750df*/
  RulesClass::readParticleSystems(this + 1022, v2); /*0x6750eb*/
  SaveLoad::StreamVector(this + 719, v2); /*0x6750f7*/
  VectorClass::SaveLoad(this + 832, v2); /*0x675103*/
  SaveLoad::StreamVector(this + 839, v2); /*0x67510f*/
  DynamicVector::Read_Alt(this + 846, v2); /*0x67511b*/
  Stream::WriteIntArray(this + 72, v2); /*0x675127*/
  Stream::WriteIntArray(this + 65, v2); /*0x675133*/
  Stream::WriteIntArray(this + 79, v2); /*0x67513f*/
  Stream::WriteIntArray(this + 86, v2); /*0x67514b*/
  DynamicVector::Read(this + 402, v2); /*0x675157*/
  VectorClass::SaveLoad(this + 769, v2); /*0x675163*/
  DynamicVector::Read(this + 776, v2); /*0x67516f*/
  VectorClass::SaveLoad(this + 783, v2); /*0x67517b*/
  DynamicVector::Read(this + 790, v2); /*0x675187*/
  VectorClass::SaveLoad(this + 797, v2); /*0x675193*/
  DynamicVector::Read(this + 804, v2); /*0x67519f*/
  VectorClass::SaveLoad(this + 811, v2); /*0x6751ab*/
  DynamicVector::Read(this + 818, v2); /*0x6751b7*/
  VectorClass::SaveLoad(this + 825, v2); /*0x6751c3*/
  Stream::WriteIntArray(this + 168, v2); /*0x6751cf*/
  Stream::WriteIntArray(this + 175, v2); /*0x6751db*/
  Stream::WriteIntArray(this + 182, v2); /*0x6751e7*/
  v60 = (char *)(this + 1565); /*0x6751ec*/
  v61 = 16; /*0x6751f2*/
  do /*0x675203*/
  {
    result = RulesClass::readGeneralSection(v60, (int)v2); /*0x6751fa*/
    v60 += 3; /*0x6751ff*/
    --v61; /*0x675202*/
  }
  while ( v61 ); /*0x675203*/
  return result; /*0x675205*/
}


// ==== 0x00675210  RulesClass::SaveLoad_Prefix_0  this=RulesClass  sig=csp ====
int __thiscall RulesClass::SaveLoad_Prefix_0(int *this, int i)
{
  _DWORD *v3; // ebx
  int v4; // edi
  int j; // ebx
  int k; // ebx
  int m; // ebx
  int n; // ebx
  int ii; // ebx
  int jj; // ebx
  int kk; // ebx
  int mm; // ebx
  int nn; // ebx
  int i1; // ebx
  int i2; // ebx
  int i3; // ebx
  int i4; // ebx
  int i5; // ebx
  int i6; // ebx
  int i7; // ebx
  int i8; // ebx
  int i9; // ebx
  int i10; // ebx
  int i11; // ebx
  int i12; // ebx
  int i13; // ebx
  int i14; // ebx
  int i15; // ebx
  int i16; // ebx
  int i17; // ebx
  int i18; // ebx
  int i19; // ebx
  int i20; // ebx
  int i21; // ebx
  int i22; // ebx
  int i23; // ebx
  int i24; // ebx
  int i25; // ebx
  int i26; // ebx
  int i27; // ebx
  int i28; // ebx
  int i29; // ebx
  int i30; // ebx
  int i31; // ebx
  int i32; // ebx
  int i33; // ebx
  int i34; // ebx
  int i35; // ebx
  int i36; // ebx
  int i37; // ebx
  int i38; // ebx
  int i39; // ebx
  int i40; // ebx
  int i41; // ebx
  int i42; // ebx
  int i43; // ebx
  int i44; // ebx
  int i45; // ebx
  int i46; // ebx
  int i47; // ebx
  int i48; // ebx
  int i49; // ebx
  int i50; // ebx
  int i51; // ebx
  int i52; // ebx
  int i53; // ebx
  int i54; // ebx
  int i55; // ebx
  int i56; // ebx
  int i57; // ebx
  int i58; // ebx
  int i59; // ebx
  int i60; // ebx
  int i61; // ebx
  int i62; // ebx
  int i63; // ebx
  int i64; // ebx
  int i65; // ebx
  int i66; // ebx
  int i67; // ebx
  int i68; // ebx
  int i69; // ebx
  int i70; // ebx
  int i71; // ebx
  int i72; // ebx
  int i73; // ebx
  int i74; // ebx
  int i75; // ebx
  int i76; // ebx
  int i77; // ebx
  int i78; // ebx
  int i79; // ebx
  int i80; // ebx
  int i81; // ebx
  int i82; // ebx
  int i83; // ebx
  int i84; // ebx
  int i85; // ebx
  int i86; // ebx
  int i87; // ebx
  int i88; // ebx
  int i89; // ebx
  int i90; // ebx
  int i91; // ebx
  int i92; // ebx
  int i93; // ebx
  int i94; // ebx
  int i95; // ebx
  int i96; // ebx
  char *v110; // ebx
  int v111; // ebp
  int i97; // edi
  int i98; // edi
  int i99; // edi
  int i100; // edi
  int i101; // edi
  int i102; // edi
  int i103; // edi
  int i104; // edi
  int i105; // edi
  int i106; // edi
  int i107; // edi
  int i108; // edi
  int i109; // edi
  int i110; // edi
  int i111; // edi
  int i112; // edi
  int i113; // edi
  int i114; // edi
  int i115; // edi
  int i116; // edi
  int i117; // edi
  int i118; // edi
  int i119; // edi
  int i120; // edi
  int i121; // edi
  int i122; // edi
  int i123; // edi
  int i124; // edi
  int i125; // edi
  int i126; // edi
  int i127; // edi
  int i128; // edi
  int i129; // edi
  int i130; // edi
  int i131; // edi
  int i132; // edi
  int i133; // edi
  int i134; // edi
  int i135; // edi
  int i136; // edi
  int i137; // edi
  int i138; // edi
  int i139; // edi
  int v155; // ebx
  int i140; // edi
  int v157; // ebx
  int i141; // edi
  int i142; // edi
  int i143; // edi
  int i144; // edi
  int i145; // edi
  int result; // eax
  int i146; // edi
  int v165; // ebx
  int v166; // edi
  _DWORD *v167; // esi
  int v168; // [esp+D4Ch] [ebp-8h] BYREF
  int v169; // [esp+D50h] [ebp-4h] BYREF

  v3 = this + 1125;
  (*(void (__thiscall **)(int *))(this->q465 + 12))(this + 1125);
  (*(void (__thiscall **)(int *))(this->q11B0 + 12))(this + 1132);
  (*(void (__thiscall **)(int *))(this->q11CC + 12))(this + 1139);
  (*(void (__thiscall **)(int *))(this->q11E8 + 12))(this + 1146);
  (*(void (__thiscall **)(int *))(this->q481 + 12))(this + 1153);
  (*(void (__thiscall **)(int *))(this->q1220 + 12))(this + 1160);
  (*(void (__thiscall **)(int *))(this->q123C + 12))(this + 1167);
  (*(void (__thiscall **)(int *))(this->q1258 + 12))(this + 1174);
  (*(void (__thiscall **)(int *))(this->q1274 + 12))(this + 1181);
  (*(void (__thiscall **)(int *))(this->q1290 + 12))(this + 1188);
  (*(void (__thiscall **)(int *))(this->q12AC + 12))(this + 1195);
  (*(void (__thiscall **)(int *))(this->q12C8 + 12))(this + 1202);
  (*(void (__thiscall **)(int *))(this->q12E4 + 12))(this + 1209);
  (*(void (__thiscall **)(int *))(this->q13F0 + 12))(this + 1276);
  (*(void (__thiscall **)(int *))(this->q1158 + 12))(this + 1110);
  (*(void (__thiscall **)(int *))(this->AttackInterval + 12))(this + 618);
  (*(void (__thiscall **)(int *))(this->q360 + 12))(this + 864);
  (*(void (__thiscall **)(int *))(this->qD9C + 12))(this + 871);
  (*(void (__thiscall **)(int *))(this->qDB8 + 12))(this + 878);
  (*(void (__thiscall **)(int *))(this->qEE8 + 12))(this + 954);
  (*(void (__thiscall **)(int *))(this->qF04 + 12))(this + 961);
  (*(void (__thiscall **)(int *))(this->q3C8 + 12))(this + 968);
  (*(void (__thiscall **)(int *))(this->qE10 + 12))(this + 900);
  (*(void (__thiscall **)(int *))(this->qEC4 + 12))(this + 945);
  (*(void (__thiscall **)(int *))(this->qE2C + 12))(this + 907);
  (*(void (__thiscall **)(int *))(this->qDD4 + 12))(this + 885);
  (*(void (__thiscall **)(int *))(this->q1390 + 12))(this + 1252);
  (*(void (__thiscall **)(int *))(this->q13AC + 12))(this + 1259);
  (*(void (__thiscall **)(int *))(this->qE4C + 12))(this + 915);
  (*(void (__thiscall **)(int *))(this->qE68 + 12))(this + 922);
  (*(void (__thiscall **)(int *))(this->__pad_3A1 + 12))(this + 929);
  (*(void (__thiscall **)(int *))(this->qEA0 + 12))(this + 936);
  (*(void (__thiscall **)(int *))(this->q1304 + 12))(this + 1217);
  (*(void (__thiscall **)(int *))(this->q1320 + 12))(this + 1224);
  (*(void (__thiscall **)(int *))(this->q133C + 12))(this + 1231);
  (*(void (__thiscall **)(int *))(this->q1358 + 12))(this + 1238);
  (*(void (__thiscall **)(int *))(this->q1374 + 12))(this + 1245);
  (*(void (__thiscall **)(int *))(this->q13C8 + 12))(this + 1266);
  (*(void (__thiscall **)(int *))(this->q1174 + 12))(this + 1117);
  (*(void (__thiscall **)(int *))(this->q43C + 12))(this + 271);
  (*(void (__thiscall **)(int *))(this->q458 + 12))(this + 278);
  (*(void (__thiscall **)(int *))(this->q474 + 12))(this + 285);
  (*(void (__thiscall **)(int *))(this->BombAttachSound + 12))(this + 384);
  (*(void (__thiscall **)(int *))(this->q358 + 12))(this + 214);
  (*(void (__thiscall **)(int *))(this->q374 + 12))(this + 221);
  (*(void (__thiscall **)(int *))(this->CreateUnitSound + 12))(this + 228);
  (*(void (__thiscall **)(int *))(this->q3AC + 12))(this + 235);
  (*(void (__thiscall **)(int *))(this->q3C8 + 12))(this + 242);
  (*(void (__thiscall **)(int *))(this->q3E4 + 12))(this + 249);
  (*(void (__thiscall **)(int *))(this->HealCrateSound + 12))(this + 435);
  (*(void (__thiscall **)(int *))(this->q734 + 12))(this + 461);
  (*(void (__thiscall **)(int *))(this->q1F1 + 12))(this + 497);
  (*(void (__thiscall **)(int *))(this->Dig + 12))(this + 504);
  (*(void (__thiscall **)(int *))(this->Parachute + 12))(this + 511);
  (*(void (__thiscall **)(int *))(this->ChronoReinfDelay + 12))(this + 518);
  (*(void (__thiscall **)(int *))(this->ThirdDisguise + 12))(this + 525);
  (*(void (__thiscall **)(int *))(this->ConditionRedSparkingProbability + 12))(this + 532);
  (*(void (__thiscall **)(int *))(this->MutateWarhead + 12))(this + 544);
  (*(void (__thiscall **)(int *))(this->IonCannonWarhead + 12))(this + 555);
  (*(void (__thiscall **)(int *))(this->CHRONOSK_SHP + 12))(this + 562);
  (*(void (__thiscall **)(int *))(this->q8E4 + 12))(this + 569);
  (*(void (__thiscall **)(int *))(this->q900 + 12))(this + 576);
  (*(void (__thiscall **)(int *))(this->q91C + 12))(this + 583);
  (*(void (__thiscall **)(int *))(this->q938 + 12))(this + 590);
  (*(void (__thiscall **)(int *))(this->q954 + 12))(this + 597);
  (*(void (__thiscall **)(int *))(this->MyEffectivenessCoefficientDefault + 12))(this + 604);
  (*(void (__thiscall **)(int *))(this->q98C + 12))(this + 611);
  (*(void (__thiscall **)(int *))(this->q9C4 + 12))(this + 625);
  (*(void (__thiscall **)(int *))(this->TeslaLimit + 12))(this + 632);
  (*(void (__thiscall **)(int *))(this->WarRatio + 12))(this + 639);
  (*(void (__thiscall **)(int *))(this->RefineryRatio + 12))(this + 646);
  (*(void (__thiscall **)(int *))(this->TreeStrength + 12))(this + 653);
  (*(void (__thiscall **)(int *))(this->qA50 + 12))(this + 660);
  (*(void (__thiscall **)(int *))(this->SuperWeapons + 12))(this + 667);
  (*(void (__thiscall **)(int *))(this->Aircraft + 12))(this + 674);
  (*(void (__thiscall **)(int *))(this->CrateMinimum + 12))(this + 681);
  (*(void (__thiscall **)(int *))(this->MinUnitCount + 12))(this + 688);
  (*(void (__thiscall **)(int *))(this->TiberiumGrows + 12))(this + 695);
  (*(void (__thiscall **)(int *))(this->qB58 + 12))(this + 726);
  (*(void (__thiscall **)(int *))(this->qB74 + 12))(this + 733);
  (*(void (__thiscall **)(int *))(this->qB90 + 12))(this + 740);
  (*(void (__thiscall **)(int *))(this->qBC0 + 12))(this + 752);
  (*(void (__thiscall **)(int *))(this->__pad_2C8 + 12))(this + 712);
  (*(void (__thiscall **)(int *))(this->qFF8 + 12))(this + 1022);
  (*(void (__thiscall **)(int *))(this->HarvesterLoadRate + 12))(this + 719);
  (*(void (__thiscall **)(int *))(this->qD00 + 12))(this + 832);
  (*(void (__thiscall **)(int *))(this->qD1C + 12))(this + 839);
  (*(void (__thiscall **)(int *))(this->qD38 + 12))(this + 846);
  (*(void (__thiscall **)(int *))(this->VeteranROF + 12))(this + 402);
  (*(void (__thiscall **)(int *))(this->qC04 + 12))(this + 769);
  (*(void (__thiscall **)(int *))(this->qC20 + 12))(this + 776);
  (*(void (__thiscall **)(int *))(this->__pad_C3C + 12))(this + 783);
  (*(void (__thiscall **)(int *))(this->qC58 + 12))(this + 790);
  (*(void (__thiscall **)(int *))(this->qC74 + 12))(this + 797);
  (*(void (__thiscall **)(int *))(this->qC90 + 12))(this + 804);
  (*(void (__thiscall **)(int *))(this->qCAC + 12))(this + 811);
  (*(void (__thiscall **)(int *))(this->qCC8 + 12))(this + 818);
  (*(void (__thiscall **)(int *))(this->qCE4 + 12))(this + 825);
  v4 = i;
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)i + 12))(i, this, 6336, 0);
  if ( this )
    HouseClass::InitTypeVectors(this, (int)&i);
  if ( v3 )
    TypeList::Construct(v3);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v168, 4, 0);
  for ( i = 0; i < v168; ++i )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(v3, &v169);
  }
  if ( this != (int *)-4528 )
    TypeList::Construct(this + 1132);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( j = 0; j < i; ++j )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1132, &v169);
  }
  if ( this != (int *)-4556 )
    TypeList::Construct(this + 1139);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( k = 0; k < i; ++k )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1139, &v169);
  }
  if ( this != (int *)-4584 )
    TypeList::Construct(this + 1146);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( m = 0; m < i; ++m )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1146, &v169);
  }
  if ( this != (int *)-4612 )
    TypeList::Construct(this + 1153);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( n = 0; n < i; ++n )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1153, &v169);
  }
  if ( this != (int *)-4640 )
    TypeList::Construct(this + 1160);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( ii = 0; ii < i; ++ii )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1160, &v169);
  }
  if ( this != (int *)-4668 )
    TypeList::Construct(this + 1167);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( jj = 0; jj < i; ++jj )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1167, &v169);
  }
  if ( this != (int *)-4696 )
    TypeList::Construct(this + 1174);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( kk = 0; kk < i; ++kk )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1174, &v169);
  }
  if ( this != (int *)-4724 )
    TypeList::Construct(this + 1181);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( mm = 0; mm < i; ++mm )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1181, &v169);
  }
  if ( this != (int *)-4752 )
    TypeList::Construct(this + 1188);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( nn = 0; nn < i; ++nn )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1188, &v169);
  }
  if ( this != (int *)-4780 )
    TypeList::Construct(this + 1195);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i1 = 0; i1 < i; ++i1 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1195, &v169);
  }
  if ( this != (int *)-4808 )
    TypeList::Construct(this + 1202);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i2 = 0; i2 < i; ++i2 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1202, &v169);
  }
  if ( this != (int *)-4836 )
    TypeList::Construct(this + 1209);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i3 = 0; i3 < i; ++i3 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1209, &v169);
  }
  if ( this != (int *)-5104 )
    TypeList::Construct(this + 1276);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i4 = 0; i4 < i; ++i4 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1276, &v169);
  }
  if ( this != (int *)-4440 )
    TypeList::Construct(this + 1110);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i5 = 0; i5 < i; ++i5 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1110, &v169);
  }
  if ( this != (int *)-2472 )
    TypeList::Construct(this + 618);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i6 = 0; i6 < i; ++i6 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 618, &v169);
  }
  if ( this != (int *)-3456 )
    TypeList::Construct(this + 864);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i7 = 0; i7 < i; ++i7 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 864, &v169);
  }
  if ( this != (int *)-3484 )
    TypeList::Construct(this + 871);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i8 = 0; i8 < i; ++i8 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 871, &v169);
  }
  if ( this != (int *)-3512 )
    TypeList::Construct(this + 878);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i9 = 0; i9 < i; ++i9 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 878, &v169);
  }
  if ( this != (int *)-3816 )
    TypeList::Construct(this + 954);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i10 = 0; i10 < i; ++i10 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 954, &v169);
  }
  if ( this != (int *)-3844 )
    TypeList::Construct(this + 961);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i11 = 0; i11 < i; ++i11 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 961, &v169);
  }
  if ( this != (int *)-3872 )
    TypeList::Construct(this + 968);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i12 = 0; i12 < i; ++i12 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 968, &v169);
  }
  if ( this != (int *)-3600 )
    TypeList::Construct(this + 900);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i13 = 0; i13 < i; ++i13 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 900, &v169);
  }
  if ( this != (int *)-3780 )
    TypeList::Construct(this + 945);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i14 = 0; i14 < i; ++i14 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 945, &v169);
  }
  if ( this != (int *)-3628 )
    TypeList::Construct(this + 907);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i15 = 0; i15 < i; ++i15 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 907, &v169);
  }
  if ( this != (int *)-3540 )
    TypeList::Construct(this + 885);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i16 = 0; i16 < i; ++i16 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 885, &v169);
  }
  if ( this != (int *)-5008 )
    TypeList::Construct(this + 1252);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i17 = 0; i17 < i; ++i17 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1252, &v169);
  }
  if ( this != (int *)-5036 )
    TypeList::Construct(this + 1259);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i18 = 0; i18 < i; ++i18 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1259, &v169);
  }
  if ( this != (int *)-3660 )
    TypeList::Construct(this + 915);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i19 = 0; i19 < i; ++i19 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 915, &v169);
  }
  if ( this != (int *)-3688 )
    TypeList::Construct(this + 922);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i20 = 0; i20 < i; ++i20 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 922, &v169);
  }
  if ( this != (int *)-3716 )
    TypeList::Construct(this + 929);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i21 = 0; i21 < i; ++i21 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 929, &v169);
  }
  if ( this != (int *)-3744 )
    TypeList::Construct(this + 936);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i22 = 0; i22 < i; ++i22 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 936, &v169);
  }
  if ( this != (int *)-4868 )
    TypeList::Construct(this + 1217);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i23 = 0; i23 < i; ++i23 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1217, &v169);
  }
  if ( this != (int *)-4896 )
    TypeList::Construct(this + 1224);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i24 = 0; i24 < i; ++i24 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1224, &v169);
  }
  if ( this != (int *)-4924 )
    TypeList::Construct(this + 1231);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i25 = 0; i25 < i; ++i25 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1231, &v169);
  }
  if ( this != (int *)-4952 )
    TypeList::Construct(this + 1238);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i26 = 0; i26 < i; ++i26 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1238, &v169);
  }
  if ( this != (int *)-4980 )
    TypeList::Construct(this + 1245);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i27 = 0; i27 < i; ++i27 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1245, &v169);
  }
  if ( this != (int *)-5064 )
    TypeList::Construct(this + 1266);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i28 = 0; i28 < i; ++i28 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1266, &v169);
  }
  if ( this != (int *)-4468 )
    TypeList::Construct(this + 1117);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i29 = 0; i29 < i; ++i29 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 1117, &v169);
  }
  if ( this != (int *)-1084 )
    TypeList::Construct(this + 271);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i30 = 0; i30 < i; ++i30 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 271, &v169);
  }
  if ( this != (int *)-1112 )
    TypeList::Construct(this + 278);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i31 = 0; i31 < i; ++i31 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 278, &v169);
  }
  if ( this != (int *)-1140 )
    TypeList::Construct(this + 285);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i32 = 0; i32 < i; ++i32 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 285, &v169);
  }
  if ( this != (int *)-88 )
    TypeList::VoxelAnimConstructor(this + 22);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i33 = 0; i33 < i; ++i33 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add2(this + 22, &v169);
  }
  if ( this != (int *)-1536 )
    TypeList::VoxelAnimConstructor(this + 384);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i34 = 0; i34 < i; ++i34 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add2(this + 384, &v169);
  }
  if ( this != (int *)-856 )
    TypeList::Construct(this + 214);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i35 = 0; i35 < i; ++i35 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 214, &v169);
  }
  if ( this != (int *)-884 )
    TypeList::Construct(this + 221);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i36 = 0; i36 < i; ++i36 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 221, &v169);
  }
  if ( this != (int *)-912 )
    TypeList::Construct(this + 228);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i37 = 0; i37 < i; ++i37 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 228, &v169);
  }
  if ( this != (int *)-940 )
    TypeList::Construct(this + 235);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i38 = 0; i38 < i; ++i38 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 235, &v169);
  }
  if ( this != (int *)-968 )
    TypeList::Construct(this + 242);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i39 = 0; i39 < i; ++i39 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 242, &v169);
  }
  if ( this != (int *)-996 )
    TypeList::Construct(this + 249);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i40 = 0; i40 < i; ++i40 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 249, &v169);
  }
  if ( this != (int *)-1740 )
    TypeList::Construct(this + 435);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i41 = 0; i41 < i; ++i41 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 435, &v169);
  }
  if ( this != (int *)-1844 )
    TypeList::Construct(this + 461);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i42 = 0; i42 < i; ++i42 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 461, &v169);
  }
  if ( this != (int *)-1988 )
    TypeList::ConstructSmudge(this + 497);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i43 = 0; i43 < i; ++i43 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    SmudgeTypeVector::Add(this + 497, &v169);
  }
  if ( this != (int *)-2016 )
    TypeList::ConstructSmudge(this + 504);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i44 = 0; i44 < i; ++i44 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    SmudgeTypeVector::Add(this + 504, &v169);
  }
  if ( this != (int *)-2044 )
    TypeList::ConstructSmudge(this + 511);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i45 = 0; i45 < i; ++i45 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    SmudgeTypeVector::Add(this + 511, &v169);
  }
  if ( this != (int *)-2072 )
    TypeList::ConstructSmudge(this + 518);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i46 = 0; i46 < i; ++i46 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    SmudgeTypeVector::Add(this + 518, &v169);
  }
  if ( this != (int *)-2100 )
    TypeList::ConstructSmudge(this + 525);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i47 = 0; i47 < i; ++i47 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    SmudgeTypeVector::Add(this + 525, &v169);
  }
  if ( this != (int *)-2128 )
    TypeList::BuildingTypeConstructor(this + 532);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i48 = 0; i48 < i; ++i48 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 532, &v169);
  }
  if ( this != (int *)-2176 )
    TypeList::BuildingTypeConstructor(this + 544);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i49 = 0; i49 < i; ++i49 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 544, &v169);
  }
  if ( this != (int *)-2220 )
    TypeList::BuildingTypeConstructor(this + 555);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i50 = 0; i50 < i; ++i50 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 555, &v169);
  }
  if ( this != (int *)-2248 )
    TypeList::BuildingTypeConstructor(this + 562);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i51 = 0; i51 < i; ++i51 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 562, &v169);
  }
  if ( this != (int *)-2276 )
    TypeList::BuildingTypeConstructor(this + 569);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i52 = 0; i52 < i; ++i52 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 569, &v169);
  }
  if ( this != (int *)-2304 )
    TypeList::BuildingTypeConstructor(this + 576);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i53 = 0; i53 < i; ++i53 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 576, &v169);
  }
  if ( this != (int *)-2332 )
    TypeList::BuildingTypeConstructor(this + 583);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i54 = 0; i54 < i; ++i54 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 583, &v169);
  }
  if ( this != (int *)-2360 )
    TypeList::BuildingTypeConstructor(this + 590);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i55 = 0; i55 < i; ++i55 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 590, &v169);
  }
  if ( this != (int *)-2388 )
    TypeList::BuildingTypeConstructor(this + 597);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i56 = 0; i56 < i; ++i56 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 597, &v169);
  }
  if ( this != (int *)-2416 )
    TypeList::BuildingTypeConstructor(this + 604);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i57 = 0; i57 < i; ++i57 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 604, &v169);
  }
  if ( this != (int *)-2444 )
    TypeList::BuildingTypeConstructor(this + 611);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i58 = 0; i58 < i; ++i58 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 611, &v169);
  }
  if ( this != (int *)-2500 )
    TypeList::BuildingTypeConstructor(this + 625);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i59 = 0; i59 < i; ++i59 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 625, &v169);
  }
  if ( this != (int *)-2528 )
    TypeList::BuildingTypeConstructor(this + 632);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i60 = 0; i60 < i; ++i60 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 632, &v169);
  }
  if ( this != (int *)-2556 )
    TypeList::BuildingTypeConstructor(this + 639);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i61 = 0; i61 < i; ++i61 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 639, &v169);
  }
  if ( this != (int *)-2584 )
    TypeList::BuildingTypeConstructor(this + 646);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i62 = 0; i62 < i; ++i62 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 646, &v169);
  }
  if ( this != (int *)-2612 )
    TypeList::BuildingTypeConstructor(this + 653);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i63 = 0; i63 < i; ++i63 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 653, &v169);
  }
  if ( this != (int *)-2640 )
    TypeList::BuildingTypeConstructor(this + 660);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i64 = 0; i64 < i; ++i64 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 660, &v169);
  }
  if ( this != (int *)-2668 )
    TypeList::BuildingTypeConstructor(this + 667);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i65 = 0; i65 < i; ++i65 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 667, &v169);
  }
  if ( this != (int *)-2696 )
    TypeList::BuildingTypeConstructor(this + 674);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i66 = 0; i66 < i; ++i66 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 674, &v169);
  }
  if ( this != (int *)-2724 )
    TypeList::BuildingTypeConstructor(this + 681);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i67 = 0; i67 < i; ++i67 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 681, &v169);
  }
  if ( this != (int *)-2752 )
    TypeList::BuildingTypeConstructor(this + 688);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i68 = 0; i68 < i; ++i68 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 688, &v169);
  }
  if ( this != (int *)-2780 )
    TypeList::BuildingTypeConstructor(this + 695);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i69 = 0; i69 < i; ++i69 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 695, &v169);
  }
  if ( this != (int *)-2904 )
    HouseTypeClass::readStartUnit(this + 726);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i70 = 0; i70 < i; ++i70 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    HouseTypeClass::readPowerPlants(this + 726, &v169);
  }
  if ( this != (int *)-2932 )
    AnimTypeList::Constructor(this + 733);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i71 = 0; i71 < i; ++i71 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 733, &v169);
  }
  if ( this != (int *)-2960 )
    AnimTypeList::Constructor(this + 740);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i72 = 0; i72 < i; ++i72 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 740, &v169);
  }
  if ( this != (int *)-3008 )
    AnimTypeList::Constructor(this + 752);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i73 = 0; i73 < i; ++i73 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 752, &v169);
  }
  if ( this != (int *)-2848 )
    UnitTypeList::Constructor(this + 712);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i74 = 0; i74 < i; ++i74 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    VectorClass::PushBack(this + 712, &v169);
  }
  if ( this != (int *)-4088 )
    RulesClass::readParticles(this + 1022);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i75 = 0; i75 < i; ++i75 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    RulesClass::readAI(this + 1022, &v169);
  }
  if ( this != (int *)-2876 )
    UnitTypeList::Constructor(this + 719);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i76 = 0; i76 < i; ++i76 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    VectorClass::PushBack(this + 719, &v169);
  }
  if ( this != (int *)-3328 )
    TypeList::InfantryConstructor(this + 832);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i77 = 0; i77 < i; ++i77 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    InfantryTypeVector::Add(this + 832, &v169);
  }
  if ( this != (int *)-3356 )
    UnitTypeList::Constructor(this + 839);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i78 = 0; i78 < i; ++i78 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    VectorClass::PushBack(this + 839, &v169);
  }
  if ( this != (int *)-3384 )
    TypeList::BuildingTypeConstructor(this + 846);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i79 = 0; i79 < i; ++i79 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt3(this + 846, &v169);
  }
  if ( this != (int *)-288 )
    AnimTypeList::Constructor(this + 72);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i80 = 0; i80 < i; ++i80 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 72, &v169);
  }
  if ( this != (int *)-260 )
    AnimTypeList::Constructor(this + 65);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i81 = 0; i81 < i; ++i81 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 65, &v169);
  }
  if ( this != (int *)-316 )
    AnimTypeList::Constructor(this + 79);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i82 = 0; i82 < i; ++i82 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 79, &v169);
  }
  if ( this != (int *)-344 )
    AnimTypeList::Constructor(this + 86);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i83 = 0; i83 < i; ++i83 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 86, &v169);
  }
  if ( this != (int *)-1608 )
    TypeList::Construct(this + 402);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i84 = 0; i84 < i; ++i84 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 402, &v169);
  }
  if ( this != (int *)-3076 )
    TypeList::InfantryConstructor(this + 769);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i85 = 0; i85 < i; ++i85 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    InfantryTypeVector::Add(this + 769, &v169);
  }
  if ( this != (int *)-3104 )
    TypeList::Construct(this + 776);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i86 = 0; i86 < i; ++i86 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 776, &v169);
  }
  if ( this != (int *)-3132 )
    TypeList::InfantryConstructor(this + 783);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i87 = 0; i87 < i; ++i87 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    InfantryTypeVector::Add(this + 783, &v169);
  }
  if ( this != (int *)-3160 )
    TypeList::Construct(this + 790);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i88 = 0; i88 < i; ++i88 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 790, &v169);
  }
  if ( this != (int *)-3188 )
    TypeList::InfantryConstructor(this + 797);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i89 = 0; i89 < i; ++i89 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    InfantryTypeVector::Add(this + 797, &v169);
  }
  if ( this != (int *)-3216 )
    TypeList::Construct(this + 804);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i90 = 0; i90 < i; ++i90 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 804, &v169);
  }
  if ( this != (int *)-3244 )
    TypeList::InfantryConstructor(this + 811);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i91 = 0; i91 < i; ++i91 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    InfantryTypeVector::Add(this + 811, &v169);
  }
  if ( this != (int *)-3272 )
    TypeList::Construct(this + 818);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i92 = 0; i92 < i; ++i92 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt(this + 818, &v169);
  }
  if ( this != (int *)-3300 )
    TypeList::InfantryConstructor(this + 825);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i93 = 0; i93 < i; ++i93 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    InfantryTypeVector::Add(this + 825, &v169);
  }
  if ( this != (int *)-672 )
    AnimTypeList::Constructor(this + 168);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i94 = 0; i94 < i; ++i94 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 168, &v169);
  }
  if ( this != (int *)-700 )
    AnimTypeList::Constructor(this + 175);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i95 = 0; i95 < i; ++i95 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 175, &v169);
  }
  if ( this != (int *)-728 )
    AnimTypeList::Constructor(this + 182);
  (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0);
  for ( i96 = 0; i96 < i; ++i96 )
  {
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v169, 4, 0);
    DynamicVector::Add_Alt4(this + 182, &v169);
  }
  v110 = (char *)(this + 1565);
  v111 = 16;
  do
  {
    RulesClass::readCombatDamage(v110, v4);
    v110 += 3;
    --v111;
  }
  while ( v111 );
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 995);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 998);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 999);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 993);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 994);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 4);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 5);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 361);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1000);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1002);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1003);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1004);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1005);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1006);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1007);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1008);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1009);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 312);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 325);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 338);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 294);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1010);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1015);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1020);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1030);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1031);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1032);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1033);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1034);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1035);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1036);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1037);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1038);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1021);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 189);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 191);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 192);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 199);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 200);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 201);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 747);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 748);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 749);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 750);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 751);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 759);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 760);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1311);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1106);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 761);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 854);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 855);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 856);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 987);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 988);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 989);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 990);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 991);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 992);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 539);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 540);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 541);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 542);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 543);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 551);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 552);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 553);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 554);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 256);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 996);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 997);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1001);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 391);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 392);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 213);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 39);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 166);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 205);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 202);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 203);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 204);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 167);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 206);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 207);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 208);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 209);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 210);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 211);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 212);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 165);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1533);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 37);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1564);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 40);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 38);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 41);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 42);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 43);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 44);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 45);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 46);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 58);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 21);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 29);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 19);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1517);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 190);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 1549);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 62);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 63);
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], this + 64);
  this->q3F8 = SearchMIXFile(MEMORY[0x83B0F0], 0);
  this->q3F9 = SearchMIXFile(MEMORY[0x83B0E0], 0);
  for ( i97 = 0; i97 < this->DropPodPuff; ++i97 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->RadarEventMinRadius + 4 * i97));
  for ( i98 = 0; i98 < this->q2E1; ++i98 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->q2DE + 4 * i98));
  for ( i99 = 0; i99 < this->q2E8; ++i99 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->q2E5 + 4 * i99));
  for ( i100 = 0; i100 < this->q2F4; ++i100 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->q2F1 + 4 * i100));
  for ( i101 = 0; i101 < this->MaximumBaseDefenseValue; ++i101 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->GDIBaseDefenseCoefficient + 4 * i101));
  for ( i102 = 0; i102 < this->IonBlast; ++i102 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->OnFire + 4 * i102));
  for ( i103 = 0; i103 < this->Paratrooper; ++i103 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->IonBeam + 4 * i103));
  for ( i104 = 0; i104 < this->ChronoRangeMinimum; ++i104 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->ChronoDistanceFactor + 4 * i104));
  for ( i105 = 0; i105 < this->AIMinorSuperReadyPercent; ++i105 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->SpyPowerBlackout + 4 * i105));
  for ( i106 = 0; i106 < this->q2CC; ++i106 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->q2C9 + 4 * i106));
  for ( i107 = 0; i107 < this->q402; ++i107 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_FFC + 4 * i107));
  for ( i108 = 0; i108 < this->Easy; ++i108 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_2D0 + 4 * i108));
  for ( i109 = 0; i109 < this->q344; ++i109 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_341 + 4 * i109));
  for ( i110 = 0; i110 < this->q34B; ++i110 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_348 + 4 * i110));
  for ( i111 = 0; i111 < this->q352; ++i111 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_34F + 4 * i111));
  for ( i112 = 0; i112 < this->AlliedCrew; ++i112 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->Technician + 4 * i112));
  for ( i113 = 0; i113 < this->TiberiumExplosionDamage; ++i113 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->MutateExplosionWarhead + 4 * i113));
  for ( i114 = 0; i114 < this->IvanIconFlickerRate; ++i114 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->MinLowPowerProductionSpeed + 4 * i114));
  for ( i115 = 0; i115 < this->q236; ++i115 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->IronCurtainDuration + 4 * i115));
  for ( i116 = 0; i116 < this->q23D; ++i116 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->q8E8 + 4 * i116));
  for ( i117 = 0; i117 < this->q244; ++i117 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_241 + 4 * i117));
  for ( i118 = 0; i118 < this->q24B; ++i118 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_248 + 4 * i118));
  for ( i119 = 0; i119 < this->q252; ++i119 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_24F + 4 * i119));
  for ( i120 = 0; i120 < this->q259; ++i120 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_256 + 4 * i120));
  for ( i121 = 0; i121 < this->TargetSpecialThreatCoefficientDefault; ++i121 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_25D + 4 * i121));
  for ( i122 = 0; i122 < this->q267; ++i122 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->TargetDistanceCoefficientDefault + 4 * i122));
  for ( i123 = 0; i123 < this->HelipadLimit; ++i123 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->AirstripLimit + 4 * i123));
  for ( i124 = 0; i124 < this->DefenseRatio; ++i124 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->AARatio + 4 * i124));
  for ( i125 = 0; i125 < this->q283; ++i125 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_0A0 + 4 * i125));
  for ( i126 = 0; i126 < this->InfantryReserve; ++i126 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_287 + 4 * i126));
  for ( i127 = 0; i127 < this->CloakDelay; ++i127 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->UnitCrateType + 4 * i127));
  for ( i128 = 0; i128 < this->q298; ++i128 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->BaseBias + 4 * i128));
  for ( i129 = 0; i129 < this->AutoCrush; ++i129 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_29C + 4 * i129));
  for ( i130 = 0; i130 < this->SilverCrate; ++i130 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->Harvester + 4 * i130));
  for ( i131 = 0; i131 < this->q2AD; ++i131 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->CrateMaximum + 4 * i131));
  for ( i132 = 0; i132 < this->AIPlayers; ++i132 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_2B1 + 4 * i132));
  for ( i133 = 0; i133 < this->MessageDelay; ++i133 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->MultiEngineer + 4 * i133));
  for ( i134 = 0; i134 < this->q2DA; ++i134 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->q2D7 + 4 * i134));
  for ( i135 = 0; i135 < this->YuriMindControlSound; ++i135 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->RevealTriggerRadius + 4 * i135));
  for ( i136 = 0; i136 < this->FlashFrameTime; ++i136 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->IFVTransformSound + 4 * i136));
  for ( i137 = 0; i137 < this->GUIComboOpenSound; ++i137 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_042 + 4 * i137));
  for ( i138 = 0; i138 < this->ExecutePlanSound; ++i138 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->RadarCombatFlashTime + 4 * i138));
  for ( i139 = 0; i139 < this->CrateUnitSound; ++i139 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->CrateFireSound + 4 * i139));
  v155 = this->q0B3;
  for ( i140 = 0; i140 < v155; ++i140 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_0B0 + 4 * i140));
  v157 = this->q0BA;
  for ( i141 = 0; i141 < v157; ++i141 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->q2DC + 4 * i141));
  for ( i142 = 0; i142 < this->q305; ++i142 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->q302 + 4 * i142));
  for ( i143 = 0; i143 < this->q313; ++i143 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->q0C4 + 4 * i143));
  for ( i144 = 0; i144 < this->q321; ++i144 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_C78 + 4 * i144));
  for ( i145 = 0; i145 < this->q32F; ++i145 )
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_CB0 + 4 * i145));
  result = this->q33D;
  for ( i146 = 0; i146 < result; ++i146 )
  {
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->__pad_CE8 + 4 * i146));
    result = this->q33D;
  }
  v165 = this->q0AC;
  v166 = 0;
  if ( v165 > 0 )
  {
    v167 = this + 169;
    do
      result = ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(*v167 + 4 * v166++));
    while ( v166 < v165 );
  }
  return result;
}


// ==== 0x00678850  ObjectClass::InitInterfaceStubsCOM  this=ObjectClass  sig=csp ====
int __thiscall InitInterfaceStubsCOM(RulesClass *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int BarrelParticle; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  float OccupyDamageMultiplier; // eax
  int v12; // eax
  float BunkerROFMultiplier; // ecx
  float v14; // ecx
  int Engineer; // eax
  int v16; // eax
  int ThirdCrew; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // ecx
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // ecx
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  int v41; // ecx
  int v42; // ecx
  int MinMoney; // eax
  int v44; // eax
  int MinUnitCount; // ecx
  int v46; // ecx
  int AICaptureLowMoneyMark; // eax
  int v48; // eax
  int v49; // ecx
  int v50; // ecx
  int AirstripRatio; // eax
  int v52; // eax
  int HelipadRatio; // ecx
  int v54; // ecx
  int v55; // eax
  int v56; // eax
  int v57; // ecx
  int v58; // ecx
  int AALimit; // eax
  int v60; // eax
  int DefenseLimit; // ecx
  int v62; // ecx
  int v63; // eax
  int v64; // eax
  int v65; // ecx
  int v66; // ecx
  int v67; // eax
  int v68; // eax
  int v69; // ecx
  int v70; // ecx
  int v71; // eax
  int v72; // eax
  int v73; // ecx
  int v74; // ecx
  int GDIWallDefense; // eax
  int v76; // eax
  int NodBaseDefenseCoefficient; // ecx
  int v78; // ecx
  int GDIBaseDefenseCoefficient_high; // eax
  int v80; // eax
  int v81; // ecx
  int v82; // ecx
  int v83; // eax
  int v84; // eax
  int v85; // ecx
  int v86; // ecx
  int v87; // eax
  int v88; // eax
  int v89; // ecx
  int v90; // ecx
  int v91; // eax
  int v92; // eax
  int MoveFlash; // ecx
  int v94; // ecx
  int v95; // eax
  int v96; // eax
  int SmallFire; // ecx
  int v98; // ecx
  int EliteFlashTimer; // eax
  int v100; // eax
  int v101; // ecx
  int v102; // ecx
  int v103; // eax
  int v104; // eax
  int v105; // ecx
  int v106; // ecx
  int v107; // eax
  int v108; // eax
  int v109; // ecx
  int v110; // ecx
  int v111; // eax
  int v112; // eax
  int v113; // ecx
  int v114; // ecx
  int v115; // eax
  int v116; // eax
  int v117; // ecx
  int v118; // ecx
  int v119; // eax
  int v120; // eax
  int v121; // ecx
  int v122; // ecx
  int v123; // eax
  int v124; // eax
  int v125; // ecx
  int v126; // ecx
  int AlliedDisguise; // eax
  int v128; // eax
  float SpyMoneyStealPercent; // ecx
  float v130; // ecx
  int AISafeDistance; // eax
  int v132; // eax
  int v133; // ecx
  int v134; // ecx
  int v135; // eax
  int v136; // eax
  int v137; // ecx
  int v138; // ecx
  int v139; // eax
  int v140; // eax
  int v141; // ecx
  int v142; // ecx
  int ApproachTargetResetMultiplier; // eax
  int v144; // eax
  int NormalTargetingDelay; // ecx
  int v146; // ecx
  int v147; // eax
  int v148; // eax
  int v149; // ecx
  int v150; // ecx
  float AISuperDefenseDistance; // eax
  int v152; // eax
  int v153; // ecx
  int v154; // ecx
  int v155; // eax
  int v156; // eax
  int v157; // ecx
  int v158; // ecx
  int v159; // eax
  int v160; // eax
  int v161; // ecx
  int v162; // ecx
  int DigSound; // eax
  int v164; // eax
  int GUITabSound; // edx
  int v166; // eax
  int GUIMoveInSound; // ecx
  int v168; // ecx
  int DrainMoneyAmount; // eax
  int v170; // eax
  int ChronoBeam; // edx
  int v172; // eax
  int ChronoSparkle1; // ecx
  int v174; // ecx
  int DMislWarhead; // eax
  int v176; // eax
  int PsychicRevealRadius; // edx
  int v178; // eax
  int v179; // ecx
  int v180; // ecx
  int DefaultFireStreamSystem; // eax
  int v182; // eax
  int TargetDistanceCoefficientDefault_high; // edx
  int v184; // eax
  int TurboBoost_high; // edx
  int v186; // eax
  int AttackDelay_high; // ecx
  int v188; // ecx
  int DominatorFirstAnim; // eax
  int *p_DominatorFirstAnim; // esi
  int result; // eax
  int v192; // [esp+C4h] [ebp+4h] BYREF
  int v193; // [esp+C8h] [ebp+8h] BYREF

  v2 = v192;
  if ( v192 == this->LargeVisceroid )
    this->LargeVisceroid = 0;
  if ( v2 == this->SmallVisceroid )
    this->SmallVisceroid = 0;
  if ( v2 == this->CreateInfantrySound )
    this->CreateInfantrySound = 0;
  if ( v2 == this->InfantryBrute )
    this->InfantryBrute = 0;
  if ( v2 == *((_DWORD *)this + 1564) )
    *((_DWORD *)this + 1564) = 0;
  if ( v2 == this->__pad_A0 )
    this->__pad_A0 = 0;
  if ( v2 == this->InfantryMutate )
    this->InfantryMutate = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == *(_DWORD *)this->? )
    *(_DWORD *)this->? = 0;
  if ( v2 == *(_DWORD *)&this->?[4] )
    *(_DWORD *)&this->?[4] = 0;
  if ( v2 == LODWORD(this->?) )
    LODWORD(this->?) = 0;
  if ( v2 == HIDWORD(this->MissileSafetyAltitude) )
    HIDWORD(this->MissileSafetyAltitude) = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->?[1] )
    this->?[1] = 0;
  if ( v2 == this->?[2] )
    this->?[2] = 0;
  if ( v2 == this->?[3] )
    this->?[3] = 0;
  if ( v2 == this->?[5] )
    this->?[5] = 0;
  if ( v2 == this->?[6] )
    this->?[5] = 0;
  if ( v2 == this->?[0] )
    this->?[0] = 0;
  if ( v2 == this->?[1] )
    this->?[1] = 0;
  if ( v2 == this->?[2] )
    this->?[2] = 0;
  if ( v2 == this->?[3] )
    this->?[3] = 0;
  if ( v2 == this->?[4] )
    this->?[4] = 0;
  if ( v2 == this->?[5] )
    this->?[5] = 0;
  if ( v2 == LODWORD(this->?) )
    LODWORD(this->?) = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->?[0] )
    this->?[0] = 0;
  if ( v2 == this->?[6] )
    this->?[6] = 0;
  if ( v2 == this->?[4] )
    this->?[4] = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->q17F4 )
    this->q17F4 = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == *(_DWORD *)&this->? )
    *(_DWORD *)&this->? = 0;
  if ( v2 == *(_DWORD *)&this->? )
    *(_DWORD *)&this->? = 0;
  if ( v2 == *(_DWORD *)&this->? )
    *(_DWORD *)&this->? = 0;
  if ( v2 == *(_DWORD *)&this->? )
    *(_DWORD *)&this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == LODWORD(this->?) )
    LODWORD(this->?) = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->?[0] )
    this->?[0] = 0;
  if ( v2 == this->?[1] )
    this->?[1] = 0;
  if ( v2 == this->?[0] )
    this->?[0] = 0;
  if ( v2 == this->?[1] )
    this->?[1] = 0;
  if ( v2 == this->?[2] )
    this->?[2] = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == LODWORD(this->?) )
    this->? = 0.0;
  if ( v2 == *(_DWORD *)&this->? )
    *(_DWORD *)&this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == *((_DWORD *)this + 1311) )
    *((_DWORD *)this + 1311) = 0;
  if ( v2 == this->?[18] )
    this->?[18] = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == *(_DWORD *)this->? )
    *(_DWORD *)this->? = 0;
  if ( v2 == LODWORD(this->?) )
    LODWORD(this->?) = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->ThirdCrew[1] )
    this->ThirdCrew[1] = 0;
  if ( v2 == this->ThirdCrew[2] )
    this->ThirdCrew[2] = 0;
  if ( v2 == this->ThirdCrew[3] )
    this->ThirdCrew[3] = 0;
  if ( v2 == this->NukeProjectile[0] )
    this->NukeProjectile[0] = 0;
  if ( v2 == this->NukeProjectile[1] )
    this->NukeProjectile[1] = 0;
  if ( v2 == this->CMislWarhead[1] )
    this->CMislWarhead[1] = 0;
  if ( v2 == this->CMislWarhead[2] )
    this->CMislWarhead[2] = 0;
  if ( v2 == this->CMislWarhead[3] )
    this->CMislWarhead[3] = 0;
  if ( v2 == this->IvanWarhead[0] )
    this->IvanWarhead[0] = 0;
  if ( v2 == this->?[5] )
    this->IvanWarhead[0] = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->?[0] )
    this->?[0] = 0;
  if ( v2 == this->?[4] )
    this->?[4] = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->VeteranRatio )
    this->VeteranRatio = 0;
  if ( v2 == this->?[2] )
    this->?[2] = 0;
  if ( v2 == this->Behind )
    this->Behind = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == this->?[3] )
    this->?[3] = 0;
  if ( v2 == this->?[0] )
    this->?[0] = 0;
  if ( v2 == this->?[1] )
    this->?[1] = 0;
  if ( v2 == this->?[2] )
    this->?[2] = 0;
  if ( v2 == this->?[3] )
    this->?[3] = 0;
  if ( v2 == this->?[0] )
    this->?[0] = 0;
  if ( v2 == this->?[1] )
    this->?[1] = 0;
  if ( v2 == this->?[2] )
    this->?[2] = 0;
  if ( v2 == this->?[3] )
    this->?[3] = 0;
  if ( v2 == this->?[0] )
    this->?[0] = 0;
  if ( v2 == this->?[1] )
    this->?[1] = 0;
  if ( v2 == this->?[3] )
    this->?[3] = 0;
  if ( v2 == this->MaxWaypointPathLength )
    this->MaxWaypointPathLength = 0;
  if ( v2 == LODWORD(this->BarrelParticle) )
    this->BarrelParticle = 0.0;
  if ( v2 == this->FlashFrameTime )
    this->FlashFrameTime = 0;
  if ( v2 == *((_DWORD *)this + 1517) )
    *((_DWORD *)this + 1517) = 0;
  if ( v2 == this->? )
    this->? = 0;
  if ( v2 == *((_DWORD *)this + 1549) )
    *((_DWORD *)this + 1549) = 0;
  v3 = this->RadarEventColorSpeed[0];
  v192 = v2;
  v4 = (*(int (__thiscall **)(int *, int *))(v3 + 16))(this->RadarEventColorSpeed, &v192);
  if ( v4 != -1 )
  {
    BarrelParticle = this->DropPodPuff;
    if ( v4 < BarrelParticle )
    {
      v6 = BarrelParticle - 1;
      for ( this->DropPodPuff = v6;
            v4 < this->DropPodPuff;
            *(_DWORD *)(this->RadarEventColorSpeed[1] + 4 * v4 - 4) = *(_DWORD *)(this->RadarEventColorSpeed[1] + 4 * v4) )
      {
        ++v4;
      }
    }
  }
  v7 = this->?[2];
  v193 = v2;
  v8 = (*(int (__thiscall **)(int *, int *))(v7 + 16))(&this->?[2], &v193);
  if ( v8 != -1 )
  {
    v9 = this->?[2];
    if ( v8 < v9 )
    {
      v10 = v9 - 1;
      for ( this->?[2] = v10; v8 < this->?[2]; *(_DWORD *)(this->?[3] + 4 * v8 - 4) = *(_DWORD *)(this->?[3] + 4 * v8) )
        ++v8;
    }
  }
  OccupyDamageMultiplier = this->?;
  v193 = v2;
  v12 = (*(int (__thiscall **)(float *, int *))(LODWORD(OccupyDamageMultiplier) + 16))(&this->?, &v193);
  if ( v12 != -1 )
  {
    BunkerROFMultiplier = this->?;
    if ( v12 < SLODWORD(BunkerROFMultiplier) )
    {
      LODWORD(v14) = LODWORD(BunkerROFMultiplier) - 1;
      for ( this->? = v14;
            v12 < SLODWORD(this->?);
            *(_DWORD *)(LODWORD(this->?) + 4 * v12 - 4) = *(_DWORD *)(LODWORD(this->?) + 4 * v12) )
      {
        ++v12;
      }
    }
  }
  Engineer = this->?;
  v193 = v2;
  v16 = (*(int (__thiscall **)(int *, int *))(Engineer + 16))(&this->?, &v193);
  if ( v16 != -1 )
  {
    ThirdCrew = this->?;
    if ( v16 < ThirdCrew )
    {
      v18 = ThirdCrew - 1;
      for ( this->? = v18; v16 < this->?; *(_DWORD *)(this->? + 4 * v16 - 4) = *(_DWORD *)(this->? + 4 * v16) )
        ++v16;
    }
  }
  v19 = this->GDIWallDefenseCoefficient[3];
  v193 = v2;
  v20 = (*(int (__thiscall **)(int *, int *))(v19 + 16))(&this->GDIWallDefenseCoefficient[3], &v193);
  if ( v20 != -1 )
  {
    v21 = this->GDIBaseDefenseCoefficient[3];
    if ( v20 < v21 )
    {
      v22 = v21 - 1;
      for ( this->GDIBaseDefenseCoefficient[3] = v22;
            v20 < this->GDIBaseDefenseCoefficient[3];
            *(_DWORD *)(this->GDIBaseDefenseCoefficient[0] + 4 * v20 - 4) = *(_DWORD *)(this->GDIBaseDefenseCoefficient[0]
                                                                                      + 4 * v20) )
      {
        ++v20;
      }
    }
  }
  v23 = this->BaseUnit[2];
  v193 = v2;
  v24 = (*(int (__thiscall **)(int *, int *))(v23 + 16))(&this->BaseUnit[2], &v193);
  if ( v24 != -1 )
  {
    v25 = this->TreeFire[2];
    if ( v24 < v25 )
    {
      v26 = v25 - 1;
      for ( this->TreeFire[2] = v26;
            v24 < this->TreeFire[2];
            *(_DWORD *)(this->BaseUnit[3] + 4 * v24 - 4) = *(_DWORD *)(this->BaseUnit[3] + 4 * v24) )
      {
        ++v24;
      }
    }
  }
  v27 = this->BombParachute[1];
  v193 = v2;
  v28 = (*(int (__thiscall **)(int *, int *))(v27 + 16))(&this->BombParachute[1], &v193);
  if ( v28 != -1 )
  {
    v29 = this->LargeFire[1];
    if ( v28 < v29 )
    {
      v30 = v29 - 1;
      for ( this->LargeFire[1] = v30;
            v28 < this->LargeFire[1];
            *(_DWORD *)(this->BombParachute[2] + 4 * v28 - 4) = *(_DWORD *)(this->BombParachute[2] + 4 * v28) )
      {
        ++v28;
      }
    }
  }
  v31 = this->ChronoReinfDelay[0];
  v193 = v2;
  v32 = (*(int (__thiscall **)(int *, int *))(v31 + 16))(this->ChronoReinfDelay, &v193);
  if ( v32 != -1 )
  {
    v33 = this->ChronoRangeMinimum[0];
    if ( v32 < v33 )
    {
      v34 = v33 - 1;
      for ( this->ChronoRangeMinimum[0] = v34;
            v32 < this->ChronoRangeMinimum[0];
            *(_DWORD *)(this->ChronoReinfDelay[1] + 4 * v32 - 4) = *(_DWORD *)(this->ChronoReinfDelay[1] + 4 * v32) )
      {
        ++v32;
      }
    }
  }
  v35 = this->ChronoRangeMinimum[3];
  v193 = v2;
  v36 = (*(int (__thiscall **)(int *, int *))(v35 + 16))(&this->ChronoRangeMinimum[3], &v193);
  if ( v36 != -1 )
  {
    v37 = this->SpyPowerBlackout[3];
    if ( v36 < v37 )
    {
      v38 = v37 - 1;
      for ( this->SpyPowerBlackout[3] = v38;
            v36 < this->SpyPowerBlackout[3];
            *(_DWORD *)(this->SpyPowerBlackout[0] + 4 * v36 - 4) = *(_DWORD *)(this->SpyPowerBlackout[0] + 4 * v36) )
      {
        ++v36;
      }
    }
  }
  v39 = this->SovietSurvivorDivisor[1];
  v193 = v2;
  v40 = (*(int (__thiscall **)(int *, int *))(v39 + 16))(&this->SovietSurvivorDivisor[1], &v193);
  if ( v40 != -1 )
  {
    v41 = this->AutocreateTime[1];
    if ( v40 < v41 )
    {
      v42 = v41 - 1;
      for ( this->AutocreateTime[1] = v42;
            v40 < this->AutocreateTime[1];
            *(_DWORD *)(this->SovietSurvivorDivisor[2] + 4 * v40 - 4) = *(_DWORD *)(this->SovietSurvivorDivisor[2]
                                                                                  + 4 * v40) )
      {
        ++v40;
      }
    }
  }
  MinMoney = this->?;
  v193 = v2;
  v44 = (*(int (__thiscall **)(int *, int *))(MinMoney + 16))(&this->?, &v193);
  if ( v44 != -1 )
  {
    MinUnitCount = this->?;
    if ( v44 < MinUnitCount )
    {
      v46 = MinUnitCount - 1;
      for ( this->? = v46; v44 < this->?; *(_DWORD *)(this->? + 4 * v44 - 4) = *(_DWORD *)(this->? + 4 * v44) )
        ++v44;
    }
  }
  AICaptureLowMoneyMark = this->HarvesterLoadRate;
  v193 = v2;
  v48 = (*(int (__thiscall **)(int *, int *))(AICaptureLowMoneyMark + 16))(&this->HarvesterLoadRate, &v193);
  if ( v48 != -1 )
  {
    v49 = this->?[2];
    if ( v48 < v49 )
    {
      v50 = v49 - 1;
      for ( this->?[2] = v50;
            v48 < this->?[2];
            *(_DWORD *)(this->HarvesterDumpRate + 4 * v48 - 4) = *(_DWORD *)(this->HarvesterDumpRate + 4 * v48) )
      {
        ++v48;
      }
    }
  }
  AirstripRatio = this->?;
  v193 = v2;
  v52 = (*(int (__thiscall **)(__int64 *, int *))(AirstripRatio + 16))(&this->?, &v193);
  if ( v52 != -1 )
  {
    HelipadRatio = this->?;
    if ( v52 < HelipadRatio )
    {
      v54 = HelipadRatio - 1;
      for ( LODWORD(this->?) = v54;
            v52 < SLODWORD(this->?);
            *(_DWORD *)(HIDWORD(this->?) + 4 * v52 - 4) = *(_DWORD *)(HIDWORD(this->?) + 4 * v52) )
      {
        ++v52;
      }
    }
  }
  v55 = *(_DWORD *)this->?;
  v193 = v2;
  v56 = (*(int (__thiscall **)(_BYTE *, int *))(v55 + 16))(this->?, &v193);
  if ( v56 != -1 )
  {
    v57 = *(_DWORD *)this->?;
    if ( v56 < v57 )
    {
      v58 = v57 - 1;
      for ( *(_DWORD *)this->? = v58;
            v56 < *(_DWORD *)this->?;
            *(_DWORD *)(LODWORD(this->?) + 4 * v56 - 4) = *(_DWORD *)(LODWORD(this->?) + 4 * v56) )
      {
        ++v56;
      }
    }
  }
  AALimit = this->?;
  v193 = v2;
  v60 = (*(int (__thiscall **)(int *, int *))(AALimit + 16))(&this->?, &v193);
  if ( v60 != -1 )
  {
    DefenseLimit = this->?;
    if ( v60 < DefenseLimit )
    {
      v62 = DefenseLimit - 1;
      for ( this->? = v62;
            v60 < this->?;
            *(_DWORD *)(*(_DWORD *)this->? + 4 * v60 - 4) = *(_DWORD *)(*(_DWORD *)this->? + 4 * v60) )
      {
        ++v60;
      }
    }
  }
  v63 = this->AISafeDistance[2];
  v193 = v2;
  v64 = (*(int (__thiscall **)(int *, int *))(v63 + 16))(&this->AISafeDistance[2], &v193);
  if ( v64 != -1 )
  {
    v65 = this->Engineer[2];
    if ( v64 < v65 )
    {
      v66 = v65 - 1;
      for ( this->Engineer[2] = v66;
            v64 < this->Engineer[2];
            *(_DWORD *)(this->AISafeDistance[3] + 4 * v64 - 4) = *(_DWORD *)(this->AISafeDistance[3] + 4 * v64) )
      {
        ++v64;
      }
    }
  }
  v67 = this->NukeProjectile[2];
  v193 = v2;
  v68 = (*(int (__thiscall **)(int *, int *))(v67 + 16))(&this->NukeProjectile[2], &v193);
  if ( v68 != -1 )
  {
    v69 = this->C4Warhead[2];
    if ( v68 < v69 )
    {
      v70 = v69 - 1;
      for ( this->C4Warhead[2] = v70;
            v68 < this->C4Warhead[2];
            *(_DWORD *)(this->NukeProjectile[3] + 4 * v68 - 4) = *(_DWORD *)(this->NukeProjectile[3] + 4 * v68) )
      {
        ++v68;
      }
    }
  }
  v71 = this->IvanWarhead[1];
  v193 = v2;
  v72 = (*(int (__thiscall **)(int *, int *))(v71 + 16))(&this->IvanWarhead[1], &v193);
  if ( v72 != -1 )
  {
    v73 = this->CanDetonateTimeBomb[1];
    if ( v72 < v73 )
    {
      v74 = v73 - 1;
      for ( this->CanDetonateTimeBomb[1] = v74;
            v72 < this->CanDetonateTimeBomb[1];
            *(_DWORD *)(this->IvanWarhead[2] + 4 * v72 - 4) = *(_DWORD *)(this->IvanWarhead[2] + 4 * v72) )
      {
        ++v72;
      }
    }
  }
  GDIWallDefense = this->CHRONOSK_SHP;
  v193 = v2;
  v76 = (*(int (__thiscall **)(__int64 *, int *))(GDIWallDefense + 16))(&this->CHRONOSK_SHP, &v193);
  if ( v76 != -1 )
  {
    NodBaseDefenseCoefficient = this->?;
    if ( v76 < NodBaseDefenseCoefficient )
    {
      v78 = NodBaseDefenseCoefficient - 1;
      for ( LODWORD(this->?) = v78;
            v76 < SLODWORD(this->?);
            *(_DWORD *)(HIDWORD(this->CHRONOSK_SHP) + 4 * v76 - 4) = *(_DWORD *)(HIDWORD(this->CHRONOSK_SHP) + 4 * v76) )
      {
        ++v76;
      }
    }
  }
  GDIBaseDefenseCoefficient_high = HIDWORD(this->?);
  v193 = v2;
  v80 = (*(int (__thiscall **)(char *, int *))(GDIBaseDefenseCoefficient_high + 16))((char *)&this->? + 4, &v193);
  if ( v80 != -1 )
  {
    v81 = this->?[1];
    if ( v80 < v81 )
    {
      v82 = v81 - 1;
      for ( this->?[1] = v82; v80 < this->?[1]; *(_DWORD *)(this->? + 4 * v80 - 4) = *(_DWORD *)(this->? + 4 * v80) )
        ++v80;
    }
  }
  v83 = this->?[0];
  v193 = v2;
  v84 = (*(int (__thiscall **)(int *, int *))(v83 + 16))(this->?, &v193);
  if ( v84 != -1 )
  {
    v85 = this->?[0];
    if ( v84 < v85 )
    {
      v86 = v85 - 1;
      for ( this->?[0] = v86; v84 < this->?[0]; *(_DWORD *)(this->?[1] + 4 * v84 - 4) = *(_DWORD *)(this->?[1] + 4 * v84) )
        ++v84;
    }
  }
  v87 = this->?[3];
  v193 = v2;
  v88 = (*(int (__thiscall **)(int *, int *))(v87 + 16))(&this->?[3], &v193);
  if ( v88 != -1 )
  {
    v89 = this->?[3];
    if ( v88 < v89 )
    {
      v90 = v89 - 1;
      for ( this->?[3] = v90; v88 < this->?[3]; *(_DWORD *)(this->?[0] + 4 * v88 - 4) = *(_DWORD *)(this->?[0] + 4 * v88) )
        ++v88;
    }
  }
  v91 = this->?[2];
  v193 = v2;
  v92 = (*(int (__thiscall **)(int *, int *))(v91 + 16))(&this->?[2], &v193);
  if ( v92 != -1 )
  {
    MoveFlash = this->?;
    if ( v92 < MoveFlash )
    {
      v94 = MoveFlash - 1;
      for ( this->? = v94; v92 < this->?; *(_DWORD *)(this->?[3] + 4 * v92 - 4) = *(_DWORD *)(this->?[3] + 4 * v92) )
        ++v92;
    }
  }
  v95 = this->?[0];
  v193 = v2;
  v96 = (*(int (__thiscall **)(int *, int *))(v95 + 16))(this->?, &v193);
  if ( v96 != -1 )
  {
    SmallFire = this->?;
    if ( v96 < SmallFire )
    {
      v98 = SmallFire - 1;
      for ( this->? = v98; v96 < this->?; *(_DWORD *)(this->?[1] + 4 * v96 - 4) = *(_DWORD *)(this->?[1] + 4 * v96) )
        ++v96;
    }
  }
  EliteFlashTimer = this->MyEffectivenessCoefficientDefault;
  v193 = v2;
  v100 = (*(int (__thiscall **)(int *, int *))(EliteFlashTimer + 16))(&this->MyEffectivenessCoefficientDefault, &v193);
  if ( v100 != -1 )
  {
    v101 = *(_DWORD *)&this->TargetSpecialThreatCoefficientDefault;
    if ( v100 < v101 )
    {
      v102 = v101 - 1;
      for ( *(_DWORD *)&this->TargetSpecialThreatCoefficientDefault = v102;
            v100 < *(_DWORD *)&this->TargetSpecialThreatCoefficientDefault;
            *(_DWORD *)(this->? + 4 * v100 - 4) = *(_DWORD *)(this->? + 4 * v100) )
      {
        ++v100;
      }
    }
  }
  v103 = this->?[0];
  v193 = v2;
  v104 = (*(int (__thiscall **)(int *, int *))(v103 + 16))(this->?, &v193);
  if ( v104 != -1 )
  {
    v105 = this->?[0];
    if ( v104 < v105 )
    {
      v106 = v105 - 1;
      for ( this->?[0] = v106;
            v104 < this->?[0];
            *(_DWORD *)(this->?[1] + 4 * v104 - 4) = *(_DWORD *)(this->?[1] + 4 * v104) )
      {
        ++v104;
      }
    }
  }
  v107 = this->?[2];
  v193 = v2;
  v108 = (*(int (__thiscall **)(int *, int *))(v107 + 16))(&this->?[2], &v193);
  if ( v108 != -1 )
  {
    v109 = this->HelipadRatio[2];
    if ( v108 < v109 )
    {
      v110 = v109 - 1;
      for ( this->HelipadRatio[2] = v110;
            v108 < this->HelipadRatio[2];
            *(_DWORD *)(this->?[3] + 4 * v108 - 4) = *(_DWORD *)(this->?[3] + 4 * v108) )
      {
        ++v108;
      }
    }
  }
  v111 = this->?[1];
  v193 = v2;
  v112 = (*(int (__thiscall **)(int *, int *))(v111 + 16))(&this->?[1], &v193);
  if ( v112 != -1 )
  {
    v113 = this->AALimit[1];
    if ( v112 < v113 )
    {
      v114 = v113 - 1;
      for ( this->AALimit[1] = v114;
            v112 < this->AALimit[1];
            *(_DWORD *)(this->?[2] + 4 * v112 - 4) = *(_DWORD *)(this->?[2] + 4 * v112) )
      {
        ++v112;
      }
    }
  }
  v115 = this->WarRatio[0];
  v193 = v2;
  v116 = (*(int (__thiscall **)(int *, int *))(v115 + 16))(this->WarRatio, &v193);
  if ( v116 != -1 )
  {
    v117 = this->?[0];
    if ( v116 < v117 )
    {
      v118 = v117 - 1;
      for ( this->?[0] = v118;
            v116 < this->?[0];
            *(_DWORD *)(this->WarRatio[1] + 4 * v116 - 4) = *(_DWORD *)(this->WarRatio[1] + 4 * v116) )
      {
        ++v116;
      }
    }
  }
  v119 = this->?[3];
  v193 = v2;
  v120 = (*(int (__thiscall **)(int *, int *))(v119 + 16))(&this->?[3], &v193);
  if ( v120 != -1 )
  {
    v121 = this->?[3];
    if ( v120 < v121 )
    {
      v122 = v121 - 1;
      for ( this->?[3] = v122;
            v120 < this->?[3];
            *(_DWORD *)(this->?[0] + 4 * v120 - 4) = *(_DWORD *)(this->?[0] + 4 * v120) )
      {
        ++v120;
      }
    }
  }
  v123 = this->InfantryBaseMult[2];
  v193 = v2;
  v124 = (*(int (__thiscall **)(int *, int *))(v123 + 16))(&this->InfantryBaseMult[2], &v193);
  if ( v124 != -1 )
  {
    v125 = this->PatrolScan[2];
    if ( v124 < v125 )
    {
      v126 = v125 - 1;
      for ( this->PatrolScan[2] = v126;
            v124 < this->PatrolScan[2];
            *(_DWORD *)(this->InfantryBaseMult[3] + 4 * v124 - 4) = *(_DWORD *)(this->InfantryBaseMult[3] + 4 * v124) )
      {
        ++v124;
      }
    }
  }
  AlliedDisguise = this->?;
  v193 = v2;
  v128 = (*(int (__thiscall **)(int *, int *))(AlliedDisguise + 16))(&this->?, &v193);
  if ( v128 != -1 )
  {
    SpyMoneyStealPercent = this->?;
    if ( v128 < SLODWORD(SpyMoneyStealPercent) )
    {
      LODWORD(v130) = LODWORD(SpyMoneyStealPercent) - 1;
      for ( this->? = v130;
            v128 < SLODWORD(this->?);
            *(_DWORD *)(this->BaseBias + 4 * v128 - 4) = *(_DWORD *)(this->BaseBias + 4 * v128) )
      {
        ++v128;
      }
    }
  }
  AISafeDistance = this->SuperWeapons;
  v193 = v2;
  v132 = (*(int (__thiscall **)(int *, int *))(AISafeDistance + 16))(&this->SuperWeapons, &v193);
  if ( v132 != -1 )
  {
    v133 = this->RepairSell[1];
    if ( v132 < v133 )
    {
      v134 = v133 - 1;
      for ( this->RepairSell[1] = v134;
            v132 < this->RepairSell[1];
            *(_DWORD *)(this->Production + 4 * v132 - 4) = *(_DWORD *)(this->Production + 4 * v132) )
      {
        ++v132;
      }
    }
  }
  v135 = this->Aircraft[0];
  v193 = v2;
  v136 = (*(int (__thiscall **)(int *, int *))(v135 + 16))(this->Aircraft, &v193);
  if ( v136 != -1 )
  {
    v137 = this->SilverCrate[0];
    if ( v136 < v137 )
    {
      v138 = v137 - 1;
      for ( this->SilverCrate[0] = v138;
            v136 < this->SilverCrate[0];
            *(_DWORD *)(this->Aircraft[1] + 4 * v136 - 4) = *(_DWORD *)(this->Aircraft[1] + 4 * v136) )
      {
        ++v136;
      }
    }
  }
  v139 = this->SilverCrate[3];
  v193 = v2;
  v140 = (*(int (__thiscall **)(int *, int *))(v139 + 16))(&this->SilverCrate[3], &v193);
  if ( v140 != -1 )
  {
    v141 = this->CrateMaximum[3];
    if ( v140 < v141 )
    {
      v142 = v141 - 1;
      for ( this->CrateMaximum[3] = v142;
            v140 < this->CrateMaximum[3];
            *(_DWORD *)(this->CrateMaximum[0] + 4 * v140 - 4) = *(_DWORD *)(this->CrateMaximum[0] + 4 * v140) )
      {
        ++v140;
      }
    }
  }
  ApproachTargetResetMultiplier = this->MinUnitCount;
  v193 = v2;
  v144 = (*(int (__thiscall **)(int *, int *))(ApproachTargetResetMultiplier + 16))(&this->MinUnitCount, &v193);
  if ( v144 != -1 )
  {
    NormalTargetingDelay = this->AIPlayers;
    if ( v144 < NormalTargetingDelay )
    {
      v146 = NormalTargetingDelay - 1;
      for ( this->AIPlayers = v146;
            v144 < this->AIPlayers;
            *(_DWORD *)(this->MaxUnitCount + 4 * v144 - 4) = *(_DWORD *)(this->MaxUnitCount + 4 * v144) )
      {
        ++v144;
      }
    }
  }
  v147 = this->BridgeDestruction[1];
  v193 = v2;
  v148 = (*(int (__thiscall **)(int *, int *))(v147 + 16))(&this->BridgeDestruction[1], &v193);
  if ( v148 != -1 )
  {
    v149 = this->DropZoneRadius[1];
    if ( v148 < v149 )
    {
      v150 = v149 - 1;
      for ( this->DropZoneRadius[1] = v150;
            v148 < this->DropZoneRadius[1];
            *(_DWORD *)(this->BridgeDestruction[2] + 4 * v148 - 4) = *(_DWORD *)(this->BridgeDestruction[2] + 4 * v148) )
      {
        ++v148;
      }
    }
  }
  AISuperDefenseDistance = this->?;
  v193 = v2;
  v152 = (*(int (__thiscall **)(float *, int *))(LODWORD(AISuperDefenseDistance) + 16))(&this->?, &v193);
  if ( v152 != -1 )
  {
    v153 = this->?[3];
    if ( v152 < v153 )
    {
      v154 = v153 - 1;
      for ( this->?[3] = v154;
            v152 < this->?[3];
            *(_DWORD *)(this->?[0] + 4 * v152 - 4) = *(_DWORD *)(this->?[0] + 4 * v152) )
      {
        ++v152;
      }
    }
  }
  v155 = this->GUICheckboxSound[1];
  v193 = v2;
  v156 = (*(int (__thiscall **)(int *, int *))(v155 + 16))(&this->GUICheckboxSound[1], &v193);
  if ( v156 != -1 )
  {
    v157 = this->BuildingGarrisonedSound[1];
    if ( v156 < v157 )
    {
      v158 = v157 - 1;
      for ( this->BuildingGarrisonedSound[1] = v158;
            v156 < this->BuildingGarrisonedSound[1];
            *(_DWORD *)(this->GUICheckboxSound[2] + 4 * v156 - 4) = *(_DWORD *)(this->GUICheckboxSound[2] + 4 * v156) )
      {
        ++v156;
      }
    }
  }
  v159 = this->GUITabSound[2];
  v193 = v2;
  v160 = (*(int (__thiscall **)(int *, int *))(v159 + 16))(&this->GUITabSound[2], &v193);
  if ( v160 != -1 )
  {
    v161 = this->GUIMoveInSound[2];
    if ( v160 < v161 )
    {
      v162 = v161 - 1;
      for ( this->GUIMoveInSound[2] = v162;
            v160 < this->GUIMoveInSound[2];
            *(_DWORD *)(this->GUITabSound[3] + 4 * v160 - 4) = *(_DWORD *)(this->GUITabSound[3] + 4 * v160) )
      {
        ++v160;
      }
    }
  }
  DigSound = this->PlaceBeaconSound;
  v193 = v2;
  v164 = (*(int (__thiscall **)(int *, int *))(DigSound + 16))(&this->PlaceBeaconSound, &v193);
  if ( v164 != -1 )
    DynamicVector::RemoveAt(&this->PlaceBeaconSound, v164);
  GUITabSound = this->CrateRevealSound;
  v193 = v2;
  v166 = (*(int (__thiscall **)(int *, int *))(GUITabSound + 16))(&this->CrateRevealSound, &v193);
  if ( v166 != -1 )
  {
    GUIMoveInSound = this->CrateUnitSound;
    if ( v166 < GUIMoveInSound )
    {
      v168 = GUIMoveInSound - 1;
      for ( this->CrateUnitSound = v168;
            v166 < this->CrateUnitSound;
            *(_DWORD *)(this->CrateFireSound + 4 * v166 - 4) = *(_DWORD *)(this->CrateFireSound + 4 * v166) )
      {
        ++v166;
      }
    }
  }
  DrainMoneyAmount = this->?;
  v193 = v2;
  v170 = (*(int (__thiscall **)(int *, int *))(DrainMoneyAmount + 16))(&this->?, &v193);
  if ( v170 != -1 )
    DynamicVector::RemoveAt(&this->?, v170);
  ChronoBeam = this->?;
  v193 = v2;
  v172 = (*(int (__thiscall **)(int *, int *))(ChronoBeam + 16))(&this->?, &v193);
  if ( v172 != -1 )
  {
    ChronoSparkle1 = this->?;
    if ( v172 < ChronoSparkle1 )
    {
      v174 = ChronoSparkle1 - 1;
      for ( this->? = v174; v172 < this->?; *(_DWORD *)(this->? + 4 * v172 - 4) = *(_DWORD *)(this->? + 4 * v172) )
        ++v172;
    }
  }
  DMislWarhead = this->?;
  v193 = v2;
  v176 = (*(int (__thiscall **)(int *, int *))(DMislWarhead + 16))(&this->?, &v193);
  if ( v176 != -1 )
    DynamicVector::RemoveAt2(&this->?, v176);
  PsychicRevealRadius = this->__pad_C3C;
  v193 = v2;
  v178 = (*(int (__thiscall **)(int *, int *))(PsychicRevealRadius + 16))(&this->__pad_C3C, &v193);
  if ( v178 != -1 )
  {
    v179 = this->?[1];
    if ( v178 < v179 )
    {
      v180 = v179 - 1;
      for ( this->?[1] = v180; v178 < this->?[1]; *(_DWORD *)(this->? + 4 * v178 - 4) = *(_DWORD *)(this->? + 4 * v178) )
        ++v178;
    }
  }
  DefaultFireStreamSystem = this->?;
  v193 = v2;
  v182 = (*(int (__thiscall **)(int *, int *))(DefaultFireStreamSystem + 16))(&this->?, &v193);
  if ( v182 != -1 )
    DynamicVector::RemoveAt2(&this->?, v182);
  TargetDistanceCoefficientDefault_high = HIDWORD(this->?);
  v193 = v2;
  v184 = (*(int (__thiscall **)(char *, int *))(TargetDistanceCoefficientDefault_high + 16))(
           (char *)&this->? + 4,
           &v193);
  if ( v184 != -1 )
    DynamicVector::RemoveAt2((_DWORD *)&this->? + 1, v184);
  TurboBoost_high = HIDWORD(this->?);
  v193 = v2;
  v186 = (*(int (__thiscall **)(char *, int *))(TurboBoost_high + 16))((char *)&this->? + 4, &v193);
  if ( v186 != -1 )
  {
    AttackDelay_high = HIDWORD(this->?);
    if ( v186 < AttackDelay_high )
    {
      v188 = AttackDelay_high - 1;
      for ( HIDWORD(this->?) = v188;
            v186 < SHIDWORD(this->?);
            *(_DWORD *)(LODWORD(this->?) + 4 * v186 - 4) = *(_DWORD *)(LODWORD(this->?) + 4 * v186) )
      {
        ++v186;
      }
    }
  }
  DominatorFirstAnim = this->?;
  p_DominatorFirstAnim = &this->?;
  v193 = v2;
  result = (*(int (__thiscall **)(int *, int *))(DominatorFirstAnim + 16))(p_DominatorFirstAnim, &v193);
  if ( result != -1 )
    LOBYTE(result) = DynamicVector::RemoveAt(p_DominatorFirstAnim, result);
  return result;
}


// ==== 0x00679A10  SideClass::LoadAllFromINI  this=AbstractClass  sig=csp ====
char __stdcall SideClass::LoadAllFromINI(CCINIClass *aP0)
{
  int i; // edi
  int j; // edi
  int k; // edi
  int m; // edi
  int n; // edi
  int ii; // edi
  int jj; // edi
  int kk; // edi
  int mm; // edi
  int nn; // edi
  int i1; // edi
  int i2; // edi
  int i3; // edi
  int i4; // edi
  int i5; // edi
  int i6; // edi
  int i7; // edi
  int i8; // edi
  int v19; // ebx
  int *v20; // edi

  for ( i = 0; i < g_SuperWeaponTypeArray; ++i ) /*0x679a20*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**((_DWORD **)g_SuperWeaponTypeCount + i) + 100))( /*0x679a2d*/
      *((_DWORD *)g_SuperWeaponTypeCount + i),
      aP0);
  for ( j = 0; j < *(int *)&HouseClass_Player.__pad_5568[20620]; ++j ) /*0x679a43*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[20608] + 4 * j) /*0x679a50*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20608] + 4 * j),
      aP0);
  for ( k = 0; k < *(int *)&stru_89E138.__pad_1600D[27]; ++k ) /*0x679a66*/
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * k) + 100))( /*0x679a77*/
      *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * k),
      &stru_87C374.__pad_579C[22128]);
  for ( m = 0; m < (int)g_TriggerClassCount; ++m ) /*0x679a8d*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**((_DWORD **)g_TriggerTypeCount + m) + 100))( /*0x679a9a*/
      *((_DWORD *)g_TriggerTypeCount + m),
      aP0);
  for ( n = 0; n < *(int *)&HouseClass_Player.__pad_5568[8052]; ++n ) /*0x679ab0*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[8040] + 4 * n) /*0x679abd*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8040] + 4 * n),
      aP0);
  for ( ii = 0; ii < (int)g_CrateCount; ++ii ) /*0x679ad3*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)&g_UnitTypeCount2->__pad_0[4 * ii] + 100))( /*0x679ae0*/
      *(_DWORD *)&g_UnitTypeCount2->__pad_0[4 * ii],
      aP0);
  for ( jj = 0; jj < *(int *)&HouseClass_Player.__pad_5568[20644]; ++jj ) /*0x679af6*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[20632] + 4 * jj) /*0x679b03*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20632] + 4 * jj),
      aP0);
  for ( kk = 0; kk < *(int *)&stru_87C374.__pad_579C[23144]; ++kk ) /*0x679b19*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[23132] + 4 * kk) /*0x679b26*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23132] + 4 * kk),
      aP0);
  for ( mm = 0; mm < (int)g_BulletTypeInitState; ++mm ) /*0x679b3c*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)&dword_A83C84->__pad_0[4 * mm] + 100))( /*0x679b49*/
      *(_DWORD *)&dword_A83C84->__pad_0[4 * mm],
      aP0);
  for ( nn = 0; nn < *(int *)&stru_87C374.__pad_579C[22976]; ++nn ) /*0x679b5f*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[22964] + 4 * nn) /*0x679b6c*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22964] + 4 * nn),
      aP0);
  for ( i1 = 0; i1 < *(int *)&stru_87C374.__pad_579C[23144]; ++i1 ) /*0x679b82*/
    WeaponTypeClass::CalculateSpeed(*(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[23132] + 4 * i1)); /*0x679b8c*/
  for ( i2 = 0; i2 < (int)g_TriggerClassCount; ++i2 ) /*0x679ba4*/
    nullsub_7(); /*0x679baf*/
  for ( i3 = 0; i3 < *(int *)&HouseClass_Player.__pad_5568[20596]; ++i3 ) /*0x679bc7*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[20584] + 4 * i3) /*0x679bd5*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20584] + 4 * i3),
      aP0);
  for ( i4 = 0; i4 < *(int *)&HouseClass_Player.__pad_5568[22900]; ++i4 ) /*0x679beb*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22888] + 4 * i4) /*0x679bf9*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22888] + 4 * i4),
      aP0);
  for ( i5 = 0; i5 < *(int *)&HouseClass_Player.__pad_3C[8]; ++i5 ) /*0x679c0f*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(HouseClass_Player.field_38 + 4 * i5) + 100))( /*0x679c1c*/
      *(_DWORD *)(HouseClass_Player.field_38 + 4 * i5),
      aP0);
  for ( i6 = 0; i6 < *(int *)&HouseClass_Player.__pad_3C[32]; ++i6 ) /*0x679c32*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_3C[20] + 4 * i6) /*0x679c3f*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_3C[20] + 4 * i6),
      aP0);
  for ( i7 = 0; i7 < *(int *)HouseClass_Player.__pad_2C; ++i7 ) /*0x679c55*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_18[8] + 4 * i7) /*0x679c62*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_18[8] + 4 * i7),
      aP0);
  for ( i8 = 0; i8 < *(int *)&HouseClass_Player.__pad_5568[22660]; ++i8 ) /*0x679c78*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22648] + 4 * i8) /*0x679c85*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22648] + 4 * i8),
      aP0);
  v19 = 0; /*0x679c92*/
  v20 = (int *)&HouseClass_Player.__pad_5568[20724]; /*0x679c94*/
  do /*0x679cad*/
  {
    *v20 = v19; /*0x679c9c*/
    MissionClass::LoadFromINI(v20, aP0); /*0x679c9e*/
    v20 += 8; /*0x679ca3*/
    ++v19; /*0x679ca6*/
  }
  while ( (int)v20 < (int)&HouseClass_Player.__pad_5568[21748] ); /*0x679cad*/
  return 1; /*0x679caf*/
}


// ==== 0x00679CC0  sub_679CC0  this=-  sig=ida-proto ====
int sub_679CC0()
{
  void *v1[3]; // [esp+4h] [ebp-C4h] BYREF
  _DWORD v2[10]; // [esp+10h] [ebp-B8h] BYREF
  char v3; // [esp+38h] [ebp-90h]
  int v4; // [esp+3Ch] [ebp-8Ch]
  int v5; // [esp+40h] [ebp-88h]
  char v6; // [esp+44h] [ebp-84h]
  _DWORD v7[22]; // [esp+5Ch] [ebp-6Ch] BYREF
  _BYTE v8[12]; // [esp+B4h] [ebp-14h] BYREF
  int v9; // [esp+C0h] [ebp-8h]

  if ( !byte_B053B8 ) /*0x679cd0*/
  {
    v1[1] = 0; /*0x679cda*/
    v1[2] = 0; /*0x679cde*/
    GenericList::Constructor(v2); /*0x679ce2*/
    v2[0] = &vt_List_INIClass_INISection; /*0x679ceb*/
    memset(&v2[7], 0, 12); /*0x679cf8*/
    v3 = 0; /*0x679d04*/
    v4 = 0; /*0x679d08*/
    v5 = 0; /*0x679d0c*/
    v6 = 0; /*0x679d10*/
    v1[0] = &CCINIClass_Vtable; /*0x679d14*/
    CCFileClass::Construct(v7, aCoopcampmdIni); /*0x679d1c*/
    if ( CCINIClass::Load(v1, (int)v7, 0, 0) ) /*0x679d2c*/
      dword_B053B4 = Hash::ComputeHashSHA1((int)v1); /*0x679d3e*/
    byte_B053B8 = 1; /*0x679d4a*/
    v7[0] = &vt_CCFileClass; /*0x679d51*/
    v9 = 0; /*0x679d59*/
    Vector::Clear((int)v8); /*0x679d60*/
    v7[0] = &off_7E1668; /*0x679d69*/
    BufferIOFileClass::Dtor(v7); /*0x679d71*/
    HashTable::DestroyHashTableINIClass(v1); /*0x679d7a*/
  }
  return dword_B053B4; /*0x679d84*/
}


// ==== 0x00679D90  GameConfig::ComputeHash  this=GameConfig  sig=csp ====
int GameConfig_ComputeHash()
{
  int v0; // edi
  int v1; // ebp
  int i; // esi
  int v3; // eax
  int v4; // eax
  void *v6[3]; // [esp+10h] [ebp-C4h] BYREF
  _DWORD v7[10]; // [esp+1Ch] [ebp-B8h] BYREF
  char v8; // [esp+44h] [ebp-90h]
  int v9; // [esp+48h] [ebp-8Ch]
  int v10; // [esp+4Ch] [ebp-88h]
  char v11; // [esp+50h] [ebp-84h]
  _DWORD v12[22]; // [esp+68h] [ebp-6Ch] BYREF
  _BYTE v13[12]; // [esp+C0h] [ebp-14h] BYREF
  int v14; // [esp+CCh] [ebp-8h]

  v0 = Hash::ComputeHashSHA1(MEMORY[0x887048]); /*0x679da5*/
  v1 = MultiplayerGameMode::ListGet(); /*0x679dac*/
  for ( i = 1; i <= v1; ++i ) /*0x679db7*/
  {
    v3 = MultiplayerGameMode::Find((void *)i); /*0x679dbb*/
    if ( v3 ) /*0x679dc2*/
    {
      v4 = GameConfig::Constructor(v3); /*0x679dc6*/
      v0 += Hash::ComputeHashSHA1(v4); /*0x679dd2*/
    }
  }
  if ( byte_B053B8 ) /*0x679ddf*/
    return dword_B053B4 + v0; /*0x679ea8*/
  v6[1] = 0; /*0x679de9*/
  v6[2] = 0; /*0x679ded*/
  GenericList::Constructor(v7); /*0x679df1*/
  v7[0] = &vt_List_INIClass_INISection; /*0x679dfa*/
  memset(&v7[7], 0, 12); /*0x679e07*/
  v8 = 0; /*0x679e13*/
  v9 = 0; /*0x679e17*/
  v10 = 0; /*0x679e1b*/
  v11 = 0; /*0x679e1f*/
  v6[0] = &CCINIClass_Vtable; /*0x679e23*/
  CCFileClass::Construct(v12, aCoopcampmdIni); /*0x679e2b*/
  if ( CCINIClass::Load(v6, (int)v12, 0, 0) ) /*0x679e3b*/
    dword_B053B4 = Hash::ComputeHashSHA1((int)v6); /*0x679e4d*/
  byte_B053B8 = 1; /*0x679e59*/
  v12[0] = &vt_CCFileClass; /*0x679e60*/
  v14 = 0; /*0x679e68*/
  Vector::Clear((int)v13); /*0x679e6f*/
  v12[0] = &off_7E1668; /*0x679e78*/
  BufferIOFileClass::Dtor(v12); /*0x679e80*/
  HashTable::DestroyHashTableINIClass(v6); /*0x679e89*/
  return dword_B053B4 + v0; /*0x679e97*/
}


// ==== 0x00679EC0  unknown_libname_29  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
int unknown_libname_29()
{
  return Hash::ComputeHashSHA1((int)&MEMORY[0x887180]);
}


// ==== 0x00679ED0  unknown_libname_30  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
int unknown_libname_30()
{
  return Hash::ComputeHashSHA1((int)&MEMORY[0x887128]);
}


// ==== 0x00679EE0  LoadArtINI  this=-  sig=ida-proto ====
int ArtINI_Load()
{
  _DWORD v1[22]; // [esp+0h] [ebp-6Ch] BYREF
  _BYTE v2[12]; // [esp+58h] [ebp-14h] BYREF
  int v3; // [esp+64h] [ebp-8h]

  INIClass::ClearSection((int)&MEMORY[0x887180], 0, 0); /*0x679eec*/
  CCFileClass::Construct(v1, aArtmdIni); /*0x679efa*/
  CCINIClass::Load(&MEMORY[0x887180], (int)v1, 0, 0); /*0x679f0d*/
  v1[0] = &vt_CCFileClass; /*0x679f16*/
  v3 = 0; /*0x679f1e*/
  Vector::Clear((int)v2); /*0x679f26*/
  v1[0] = &off_7E1668; /*0x679f2f*/
  return BufferIOFileClass::Dtor(v1); /*0x679f3c*/
}


// ==== 0x00679F40  INIEntry::Exists  this=ObjectTypeClass  sig=csp ====
BOOL __thiscall INIEntry::Exists(void *this, unsigned __int8 *a2, unsigned __int8 *a3)
{
  if ( a3 ) /*0x679f46*/
    return HashTableSection::FindSection((int)this, a2, a3) != 0; /*0x679f6a*/
  else
    return INIClass::BinarySearchSection((int)this, a2) != 0; /*0x679f56*/
}


// ==== 0x00679F70  VectorClass::Dtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Dtor(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)this->Items; /*0x679f76*/
  *this = &VectorClass<int>::`vftable'; /*0x679f79*/
  if ( v2 && this->__pad_034 ) /*0x679f83*/
  {
    __3_YAXPAX_Z(v2); /*0x679f89*/
    this->Items = 0; /*0x679f91*/
  }
  this->__pad_034 = 0; /*0x679f94*/
  this->Capacity = 0; /*0x679f97*/
}


// ==== 0x00679FA0  RulesClass::readMaximums  this=VectorClass  sig=csp ====
void __thiscall sub_679FA0(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)this->Items; /*0x679fa6*/
  *this = &vt_VectorClass_BuildingTypeClass_const; /*0x679fa9*/
  if ( v2 && this->__pad_034 ) /*0x679fb3*/
  {
    __3_YAXPAX_Z(v2); /*0x679fb9*/
    this->Items = 0; /*0x679fc1*/
  }
  this->__pad_034 = 0; /*0x679fc4*/
  this->Capacity = 0; /*0x679fc7*/
}


// ==== 0x00679FD0  RulesClass::readInfantryTypes  this=VectorClass  sig=csp ====
void __thiscall sub_679FD0(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)this->Items; /*0x679fd6*/
  *this = &vt_VectorClass_UnitTypeClass_const; /*0x679fd9*/
  if ( v2 && this->__pad_034 ) /*0x679fe3*/
  {
    __3_YAXPAX_Z(v2); /*0x679fe9*/
    this->Items = 0; /*0x679ff1*/
  }
  this->__pad_034 = 0; /*0x679ff4*/
  this->Capacity = 0; /*0x679ff7*/
}


// ==== 0x0067A000  RulesClass::readCountries  this=VectorClass  sig=csp ====
void __thiscall sub_67A000(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)this->Items; /*0x67a006*/
  *this = &vt_VectorClass_AircraftTypeClass_const; /*0x67a009*/
  if ( v2 && this->__pad_034 ) /*0x67a013*/
  {
    __3_YAXPAX_Z(v2); /*0x67a019*/
    this->Items = 0; /*0x67a021*/
  }
  this->__pad_034 = 0; /*0x67a024*/
  this->Capacity = 0; /*0x67a027*/
}


// ==== 0x0067A030  TypeList::InfantryCleanup  this=VectorClass  sig=csp ====
void __thiscall sub_67A030(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)this->Items; /*0x67a036*/
  *this = &vt_VectorClass_InfantryTypeClass_const; /*0x67a039*/
  if ( v2 && this->__pad_034 ) /*0x67a043*/
  {
    __3_YAXPAX_Z(v2); /*0x67a049*/
    this->Items = 0; /*0x67a051*/
  }
  this->__pad_034 = 0; /*0x67a054*/
  this->Capacity = 0; /*0x67a057*/
}


// ==== 0x0067A060  RulesClass::readVehicleTypes  this=VectorClass  sig=csp ====
void __thiscall sub_67A060(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)this->Items; /*0x67a066*/
  *this = &vt_VectorClass_TerrainTypeClass_const; /*0x67a069*/
  if ( v2 && this->__pad_034 ) /*0x67a073*/
  {
    __3_YAXPAX_Z(v2); /*0x67a079*/
    this->Items = 0; /*0x67a081*/
  }
  this->__pad_034 = 0; /*0x67a084*/
  this->Capacity = 0; /*0x67a087*/
}


// ==== 0x0067A090  TypeList::CopyFull  this=VectorClass  sig=csp ====
int *__thiscall TypeList::CopyFull(int *this, VectorClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != (int *)aP1 ) /*0x67a09a*/
  {
    (*(void (__thiscall **)(int *))(*this + 12))(this); /*0x67a09e*/
    v3 = aP1->Capacity; /*0x67a0a1*/
    this->Capacity = v3; /*0x67a0a6*/
    if ( v3 ) /*0x67a0a9*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a0b3*/
      this->Items = v4; /*0x67a0bb*/
      if ( v4 ) /*0x67a0c0*/
      {
        v5 = this->Capacity; /*0x67a0c2*/
        v6 = 0; /*0x67a0c5*/
        this->IsAllocated = 1; /*0x67a0c9*/
        if ( v5 > 0 ) /*0x67a0cd*/
        {
          do /*0x67a0e1*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *((_DWORD *)aP1->Items + v6); /*0x67a0d8*/
            ++v6; /*0x67a0de*/
          }
          while ( v6 < this->Capacity ); /*0x67a0e1*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x67a0e5*/
      this->IsAllocated = 0; /*0x67a0ec*/
    }
  }
  this->Items = (int)aP1[1].vtable0; /*0x67a0f3*/
  this->q005 = (int)aP1[1].Items; /*0x67a0f9*/
  this->q006 = aP1[1].Capacity; /*0x67a0ff*/
  return this; /*0x67a104*/
}


// ==== 0x0067A110  TypeList::CopyAircraft  this=VectorClass  sig=csp ====
int *__thiscall TypeList::CopyAircraft(int *this, VectorClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != (int *)aP1 ) /*0x67a11a*/
  {
    (*(void (__thiscall **)(int *))(*this + 12))(this); /*0x67a11e*/
    v3 = aP1->Capacity; /*0x67a121*/
    this->Capacity = v3; /*0x67a126*/
    if ( v3 ) /*0x67a129*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a133*/
      this->Items = v4; /*0x67a13b*/
      if ( v4 ) /*0x67a140*/
      {
        v5 = this->Capacity; /*0x67a142*/
        v6 = 0; /*0x67a145*/
        this->IsAllocated = 1; /*0x67a149*/
        if ( v5 > 0 ) /*0x67a14d*/
        {
          do /*0x67a161*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *((_DWORD *)aP1->Items + v6); /*0x67a158*/
            ++v6; /*0x67a15e*/
          }
          while ( v6 < this->Capacity ); /*0x67a161*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x67a165*/
      this->IsAllocated = 0; /*0x67a16c*/
    }
  }
  this->Items = (int)aP1[1].vtable0; /*0x67a173*/
  this->q005 = (int)aP1[1].Items; /*0x67a179*/
  this->q006 = aP1[1].Capacity; /*0x67a17f*/
  return this; /*0x67a184*/
}


// ==== 0x0067A190  RulesClass::readAircraftTypes  this=RulesClass  sig=csp ====
int *__thiscall sub_67A190(int *this, int *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != a2 ) /*0x67a19a*/
  {
    (*(void (__thiscall **)(int *))(*this + 12))(this); /*0x67a19e*/
    v3 = a2[2]; /*0x67a1a1*/
    this->q002 = v3; /*0x67a1a6*/
    if ( v3 ) /*0x67a1a9*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a1b3*/
      this->DetailMinFrameRateMovie = (int)v4; /*0x67a1bb*/
      if ( v4 ) /*0x67a1c0*/
      {
        v5 = this->q002; /*0x67a1c2*/
        v6 = 0; /*0x67a1c5*/
        this->SelfHealInfantryAmount = 1; /*0x67a1c9*/
        if ( v5 > 0 ) /*0x67a1cd*/
        {
          do /*0x67a1e1*/
          {
            *(_DWORD *)(this->DetailMinFrameRateMovie + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a1d8*/
            ++v6; /*0x67a1de*/
          }
          while ( v6 < this->q002 ); /*0x67a1e1*/
        }
      }
    }
    else
    {
      this->DetailMinFrameRateMovie = 0; /*0x67a1e5*/
      this->SelfHealInfantryAmount = 0; /*0x67a1ec*/
    }
  }
  this->DetailMinFrameRateMovie = a2[4]; /*0x67a1f3*/
  this->SmallVisceroid = a2[5]; /*0x67a1f9*/
  this->AttackingAircraftSightRange = a2[6]; /*0x67a1ff*/
  return this; /*0x67a204*/
}


// ==== 0x0067A210  RulesClass::readSuperWeaponTypes  this=RulesClass  sig=csp ====
int *__thiscall sub_67A210(int *this, int *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != a2 ) /*0x67a21a*/
  {
    (*(void (__thiscall **)(int *))(*this + 12))(this); /*0x67a21e*/
    v3 = a2[2]; /*0x67a221*/
    this->q002 = v3; /*0x67a226*/
    if ( v3 ) /*0x67a229*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a233*/
      this->DetailMinFrameRateMovie = (int)v4; /*0x67a23b*/
      if ( v4 ) /*0x67a240*/
      {
        v5 = this->q002; /*0x67a242*/
        v6 = 0; /*0x67a245*/
        this->SelfHealInfantryAmount = 1; /*0x67a249*/
        if ( v5 > 0 ) /*0x67a24d*/
        {
          do /*0x67a261*/
          {
            *(_DWORD *)(this->DetailMinFrameRateMovie + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a258*/
            ++v6; /*0x67a25e*/
          }
          while ( v6 < this->q002 ); /*0x67a261*/
        }
      }
    }
    else
    {
      this->DetailMinFrameRateMovie = 0; /*0x67a265*/
      this->SelfHealInfantryAmount = 0; /*0x67a26c*/
    }
  }
  this->DetailMinFrameRateMovie = a2[4]; /*0x67a273*/
  this->SmallVisceroid = a2[5]; /*0x67a279*/
  this->AttackingAircraftSightRange = a2[6]; /*0x67a27f*/
  return this; /*0x67a284*/
}


// ==== 0x0067A290  TypeList::CopyInfantry  this=TypeList  sig=csp ====
int *__thiscall TypeList::CopyInfantry(int *this, CCINIClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != (int *)aP1 ) /*0x67a29a*/
  {
    (*(void (__thiscall **)(int *))(*this + 12))(this); /*0x67a29e*/
    v3 = aP1->headNode[1]; /*0x67a2a1*/
    this->Capacity = v3; /*0x67a2a6*/
    if ( v3 ) /*0x67a2a9*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a2b3*/
      this->Items = v4; /*0x67a2bb*/
      if ( v4 ) /*0x67a2c0*/
      {
        v5 = this->Capacity; /*0x67a2c2*/
        v6 = 0; /*0x67a2c5*/
        this->IsAllocated = 1; /*0x67a2c9*/
        if ( v5 > 0 ) /*0x67a2cd*/
        {
          do /*0x67a2e1*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(aP1->headNode[0] + 4 * v6); /*0x67a2d8*/
            ++v6; /*0x67a2de*/
          }
          while ( v6 < this->Capacity ); /*0x67a2e1*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x67a2e5*/
      this->IsAllocated = 0; /*0x67a2ec*/
    }
  }
  this->Items = aP1->sectionHead[0]; /*0x67a2f3*/
  this->q005 = aP1->sectionHead[1]; /*0x67a2f9*/
  this->q006 = aP1->sectionHead[2]; /*0x67a2ff*/
  return this; /*0x67a304*/
}


// ==== 0x0067A310  RulesClass::readBuildingTypes  this=RulesClass  sig=csp ====
int *__thiscall sub_67A310(int *this, int *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != a2 ) /*0x67a31a*/
  {
    (*(void (__thiscall **)(int *))(*this + 12))(this); /*0x67a31e*/
    v3 = a2[2]; /*0x67a321*/
    this->q002 = v3; /*0x67a326*/
    if ( v3 ) /*0x67a329*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a333*/
      this->DetailMinFrameRateMovie = (int)v4; /*0x67a33b*/
      if ( v4 ) /*0x67a340*/
      {
        v5 = this->q002; /*0x67a342*/
        v6 = 0; /*0x67a345*/
        this->SelfHealInfantryAmount = 1; /*0x67a349*/
        if ( v5 > 0 ) /*0x67a34d*/
        {
          do /*0x67a361*/
          {
            *(_DWORD *)(this->DetailMinFrameRateMovie + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a358*/
            ++v6; /*0x67a35e*/
          }
          while ( v6 < this->q002 ); /*0x67a361*/
        }
      }
    }
    else
    {
      this->DetailMinFrameRateMovie = 0; /*0x67a365*/
      this->SelfHealInfantryAmount = 0; /*0x67a36c*/
    }
  }
  this->DetailMinFrameRateMovie = a2[4]; /*0x67a373*/
  this->SmallVisceroid = a2[5]; /*0x67a379*/
  this->AttackingAircraftSightRange = a2[6]; /*0x67a37f*/
  return this; /*0x67a384*/
}


// ==== 0x0067A390  TypeList::VoxelAnimConstructor  this=TypeList  sig=csp ====
CCINIClass *__thiscall TypeList::VoxelAnimConstructor(_DWORD *this)
{
  this->Items = 0; /*0x67a394*/
  this->Capacity = 0; /*0x67a397*/
  this->IsInitialized = 1; /*0x67a39a*/
  this->IsAllocated = 0; /*0x67a39e*/
  this->CapacityIncrement = 10; /*0x67a3a1*/
  this->Count = 0; /*0x67a3a8*/
  *this = &vt_TypeList_VoxelAnimTypeClass_const; /*0x67a3ab*/
  return (CCINIClass *)this; /*0x67a3b1*/
}


// ==== 0x0067A3C0  RulesClass::readTerrainTypes  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readTerrainTypes(_DWORD *this, TechnoTypeClass *aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(_DWORD *)aP1->vtable0; /*0x67a3cc*/
  v6 = this->LargeVisceroid; /*0x67a3d9*/
  (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a3dd*/
  result = v6; /*0x67a3e0*/
  for ( i = 0; i < v6; ++i ) /*0x67a3e8*/
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP1->vtable0 + 16))( /*0x67a3f8*/
      aP1,
      this->DetailMinFrameRateMovie + 4 * i,
      4,
      0);
    result = v6; /*0x67a3fb*/
  }
  return result; /*0x67a404*/
}


// ==== 0x0067A410  _DynamicVectorClass_PBVVoxelAnimTypeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall TypeList_VoxelAnim::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x67a416*/
  *(_DWORD *)(this + 16) = 0; /*0x67a419*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x67a420*/
  {
    __3_YAXPAX_Z(v2); /*0x67a426*/
    *(_DWORD *)(this + 4) = 0; /*0x67a42e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x67a431*/
  *(_DWORD *)(this + 8) = 0; /*0x67a434*/
}


// ==== 0x0067A440  _DynamicVectorClass_PBVVoxelAnimTypeClass::GetIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall TypeList_VoxelAnim::GetIndex(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x67a440*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x67a455*/
  else
    return 0; /*0x67a447*/
}


// ==== 0x0067A460  _VectorClass_PBVVoxelAnimTypeClass::Clear  this=VectorClass  sig=csp ====
int __thiscall TypeList_VoxelAnim::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x67a46a*/
}


// ==== 0x0067A470  AnimTypeList::Constructor  this=TypeList  sig=csp ====
CCINIClass *__thiscall AnimTypeList::Constructor(_DWORD *this)
{
  this->Items = 0; /*0x67a474*/
  this->Capacity = 0; /*0x67a477*/
  this->IsInitialized = 1; /*0x67a47a*/
  this->IsAllocated = 0; /*0x67a47e*/
  this->CapacityIncrement = 10; /*0x67a481*/
  this->Count = 0; /*0x67a488*/
  *this = &vt_TypeList_AnimTypeClass_const; /*0x67a48b*/
  return (CCINIClass *)this; /*0x67a491*/
}


// ==== 0x0067A4A0  Stream::WriteIntArray  this=Stream  sig=csp ====
int __thiscall Stream::WriteIntArray(_DWORD *this, TechnoTypeClass *aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(_DWORD *)aP1->vtable0; /*0x67a4ac*/
  v6 = this->Stream_field_10; /*0x67a4b9*/
  (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a4bd*/
  result = v6; /*0x67a4c0*/
  for ( i = 0; i < v6; ++i ) /*0x67a4c8*/
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP1->vtable0 + 16))( /*0x67a4d8*/
      aP1,
      this->Stream_field_04 + 4 * i,
      4,
      0);
    result = v6; /*0x67a4db*/
  }
  return result; /*0x67a4e4*/
}


// ==== 0x0067A4F0  TypeList::Construct  this=TypeList  sig=csp ====
DynamicVector *__thiscall TypeList::Construct(_DWORD *this)
{
  this->Items = 0; /*0x67a4f4*/
  this->Capacity = 0; /*0x67a4f7*/
  this->IsInitialized = 1; /*0x67a4fa*/
  this->IsAllocated = 0; /*0x67a4fe*/
  this->CapacityIncrement = 10; /*0x67a501*/
  this->Count = 0; /*0x67a508*/
  *this = &vt_TypeList_int; /*0x67a50b*/
  return (DynamicVector *)this; /*0x67a511*/
}


// ==== 0x0067A520  DynamicVector::Read  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::Read(_DWORD *this, TechnoTypeClass *aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(_DWORD *)aP1->vtable0; /*0x67a52c*/
  v6 = this->DynamicVector_field_0x10; /*0x67a539*/
  (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a53d*/
  result = v6; /*0x67a540*/
  for ( i = 0; i < v6; ++i ) /*0x67a548*/
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP1->vtable0 + 16))( /*0x67a558*/
      aP1,
      this->Items + 4 * i,
      4,
      0);
    result = v6; /*0x67a55b*/
  }
  return result; /*0x67a564*/
}


// ==== 0x0067A570  Rules::CopyDataArray  this=DynamicVectorClass  sig=csp ====
_DWORD *__thiscall Rules::CopyDataArray(_DWORD *this, VectorClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (_DWORD *)aP1 ) /*0x67a57a*/
    goto LABEL_8; /*0x67a57a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x67a57e*/
  v3 = aP1->Capacity; /*0x67a581*/
  this->Capacity = v3; /*0x67a586*/
  if ( !v3 ) /*0x67a589*/
  {
    this->Items = 0; /*0x67a5d6*/
    this->IsAllocated = 0; /*0x67a5dd*/
LABEL_8:
    this->Count = aP1[1].vtable0; /*0x67a5e1*/
    this->CapacityIncrement = aP1[1].Items; /*0x67a5ea*/
    return this; /*0x67a5ed*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x67a593*/
  this->Items = v4; /*0x67a59b*/
  if ( !v4 ) /*0x67a5a0*/
    goto LABEL_8; /*0x67a5a0*/
  v5 = this->Capacity; /*0x67a5a2*/
  v6 = 0; /*0x67a5a5*/
  this->IsAllocated = 1; /*0x67a5a9*/
  if ( v5 <= 0 ) /*0x67a5ad*/
    goto LABEL_8; /*0x67a5ad*/
  do /*0x67a5c1*/
  {
    *(_DWORD *)(this->Items + 4 * v6) = *((_DWORD *)aP1->Items + v6); /*0x67a5b8*/
    ++v6; /*0x67a5be*/
  }
  while ( v6 < this->Capacity ); /*0x67a5c1*/
  this->Count = aP1[1].vtable0; /*0x67a5c6*/
  this->CapacityIncrement = aP1[1].Items; /*0x67a5cc*/
  return this; /*0x67a5d1*/
}


// ==== 0x0067A600  TypeList::ConstructSmudge  this=TypeList  sig=csp ====
CCINIClass *__thiscall TypeList::ConstructSmudge(_DWORD *this)
{
  this->Items = 0; /*0x67a604*/
  this->Capacity = 0; /*0x67a607*/
  this->IsInitialized = 1; /*0x67a60a*/
  this->IsAllocated = 0; /*0x67a60e*/
  this->CapacityIncrement = 10; /*0x67a611*/
  this->Count = 0; /*0x67a618*/
  *this = &vt_TypeList_SmudgeTypeClass_const; /*0x67a61b*/
  return (CCINIClass *)this; /*0x67a621*/
}


// ==== 0x0067A630  VectorClass::LoadStream  this=VectorClass  sig=csp ====
int __thiscall VectorClass::LoadStream(_DWORD *this, TechnoTypeClass *aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(_DWORD *)aP1->vtable0; /*0x67a63c*/
  v6 = this->q010; /*0x67a649*/
  (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a64d*/
  result = v6; /*0x67a650*/
  for ( i = 0; i < v6; ++i ) /*0x67a658*/
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP1->vtable0 + 16))( /*0x67a668*/
      aP1,
      this->Items + 4 * i,
      4,
      0);
    result = v6; /*0x67a66b*/
  }
  return result; /*0x67a674*/
}


// ==== 0x0067A680  _DynamicVectorClass_PBVSmudgeTypeClass::TypeList_vt03  this=DynamicVector  sig=csp ====
void __thiscall TypeList_VoxelAnim::TypeList_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x67a686*/
  *(_DWORD *)(this + 16) = 0; /*0x67a689*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x67a690*/
  {
    __3_YAXPAX_Z(v2); /*0x67a696*/
    *(_DWORD *)(this + 4) = 0; /*0x67a69e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x67a6a1*/
  *(_DWORD *)(this + 8) = 0; /*0x67a6a4*/
}


// ==== 0x0067A6B0  _DynamicVectorClass_PBVSmudgeTypeClass::TypeList_vt05  this=DynamicVector  sig=csp ====
unsigned int __thiscall TypeList_VoxelAnim::TypeList_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x67a6b0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x67a6c5*/
  else
    return 0; /*0x67a6b7*/
}


// ==== 0x0067A6D0  _VectorClass_PBVSmudgeTypeClass::Clear  this=VectorClass  sig=csp ====
int __thiscall TypeList::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x67a6da*/
}


// ==== 0x0067A6E0  DynamicVector::Read_Alt  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::Read_Alt(_DWORD *this, TechnoTypeClass *aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(_DWORD *)aP1->vtable0; /*0x67a6ec*/
  v6 = this->DynamicVector_field_0x10; /*0x67a6f9*/
  (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a6fd*/
  result = v6; /*0x67a700*/
  for ( i = 0; i < v6; ++i ) /*0x67a708*/
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP1->vtable0 + 16))( /*0x67a718*/
      aP1,
      this->Items + 4 * i,
      4,
      0);
    result = v6; /*0x67a71b*/
  }
  return result; /*0x67a724*/
}


// ==== 0x0067A730  RulesClass::readSmudgeTypes  this=RulesClass  sig=csp ====
int __thiscall sub_67A730(_DWORD *this)
{
  return this->LargeVisceroid; /*0x67a733*/
}


// ==== 0x0067A740  UnitTypeList::Constructor  this=TypeList  sig=csp ====
CCINIClass *__thiscall UnitTypeList::Constructor(_DWORD *this)
{
  this->Items = 0; /*0x67a744*/
  this->Capacity = 0; /*0x67a747*/
  this->IsInitialized = 1; /*0x67a74a*/
  this->IsAllocated = 0; /*0x67a74e*/
  this->CapacityIncrement = 10; /*0x67a751*/
  this->Count = 0; /*0x67a758*/
  *this = &vt_TypeList_UnitTypeClass_const; /*0x67a75b*/
  return (CCINIClass *)this; /*0x67a761*/
}


// ==== 0x0067A770  SaveLoad::StreamVector  this=SaveLoad  sig=csp ====
int __thiscall SaveLoad::StreamVector(_DWORD *this, TechnoTypeClass *aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(_DWORD *)aP1->vtable0; /*0x67a77c*/
  v6 = this->q004; /*0x67a789*/
  (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a78d*/
  result = v6; /*0x67a790*/
  for ( i = 0; i < v6; ++i ) /*0x67a798*/
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP1->vtable0 + 16))( /*0x67a7a8*/
      aP1,
      this->q004 + 4 * i,
      4,
      0);
    result = v6; /*0x67a7ab*/
  }
  return result; /*0x67a7b4*/
}


// ==== 0x0067A7C0  RulesClass::readOverlayTypes  this=RulesClass  sig=csp ====
int __thiscall sub_67A7C0(_DWORD *this)
{
  return this->LargeVisceroid; /*0x67a7c3*/
}


// ==== 0x0067A7D0  RulesClass::readAnimations  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readAnimations(_DWORD *this, TechnoTypeClass *aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(_DWORD *)aP1->vtable0; /*0x67a7dc*/
  v6 = this->LargeVisceroid; /*0x67a7e9*/
  (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a7ed*/
  result = v6; /*0x67a7f0*/
  for ( i = 0; i < v6; ++i ) /*0x67a7f8*/
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP1->vtable0 + 16))( /*0x67a808*/
      aP1,
      this->DetailMinFrameRateMovie + 4 * i,
      4,
      0);
    result = v6; /*0x67a80b*/
  }
  return result; /*0x67a814*/
}


// ==== 0x0067A820  TypeList::InfantryConstructor  this=TypeList  sig=csp ====
_DWORD *__thiscall sub_67A820(_DWORD *this)
{
  this->Items = 0; /*0x67a824*/
  this->Capacity = 0; /*0x67a827*/
  this->IsInitialized = 1; /*0x67a82a*/
  this->IsAllocated = 0; /*0x67a82e*/
  this->CapacityIncrement = 10; /*0x67a831*/
  this->Count = 0; /*0x67a838*/
  *this = &vt_TypeList_InfantryTypeClass_const; /*0x67a83b*/
  return this; /*0x67a841*/
}


// ==== 0x0067A850  VectorClass::SaveLoad  this=VectorClass  sig=csp ====
int __thiscall VectorClass::SaveLoad(_DWORD *this, TechnoTypeClass *aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(_DWORD *)aP1->vtable0; /*0x67a85c*/
  v6 = this->q010; /*0x67a869*/
  (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a86d*/
  result = v6; /*0x67a870*/
  for ( i = 0; i < v6; ++i ) /*0x67a878*/
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP1->vtable0 + 16))( /*0x67a888*/
      aP1,
      this->Items + 4 * i,
      4,
      0);
    result = v6; /*0x67a88b*/
  }
  return result; /*0x67a894*/
}


// ==== 0x0067A8A0  RulesClass::readWarheads  this=RulesClass  sig=csp ====
int __thiscall sub_67A8A0(_DWORD *this)
{
  return this->LargeVisceroid; /*0x67a8a3*/
}


// ==== 0x0067A8B0  RulesClass::readParticles  this=TypeList  sig=csp ====
_DWORD *__thiscall sub_67A8B0(_DWORD *this)
{
  this->Items = 0; /*0x67a8b4*/
  this->Capacity = 0; /*0x67a8b7*/
  this->IsInitialized = 1; /*0x67a8ba*/
  this->IsAllocated = 0; /*0x67a8be*/
  this->CapacityIncrement = 10; /*0x67a8c1*/
  this->Count = 0; /*0x67a8c8*/
  *this = &vt_TypeList_TerrainTypeClass_const; /*0x67a8cb*/
  return this; /*0x67a8d1*/
}


// ==== 0x0067A8E0  RulesClass::readParticleSystems  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readParticleSystems(_DWORD *this, TechnoTypeClass *aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(_DWORD *)aP1->vtable0; /*0x67a8ec*/
  v6 = this->LargeVisceroid; /*0x67a8f9*/
  (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a8fd*/
  result = v6; /*0x67a900*/
  for ( i = 0; i < v6; ++i ) /*0x67a908*/
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP1->vtable0 + 16))( /*0x67a918*/
      aP1,
      this->DetailMinFrameRateMovie + 4 * i,
      4,
      0);
    result = v6; /*0x67a91b*/
  }
  return result; /*0x67a924*/
}


// ==== 0x0067A930  _DynamicVectorClass_PBVTerrainTypeClass::GetClassIdentifier  this=DynamicVector  sig=csp ====
void __thiscall TypeList_cptr_TerrainTypeClass::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x67a936*/
  *(_DWORD *)(this + 16) = 0; /*0x67a939*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x67a940*/
  {
    __3_YAXPAX_Z(v2); /*0x67a946*/
    *(_DWORD *)(this + 4) = 0; /*0x67a94e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x67a951*/
  *(_DWORD *)(this + 8) = 0; /*0x67a954*/
}


// ==== 0x0067A960  _DynamicVectorClass_PBVTerrainTypeClass::GetIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall TypeList_cptr_TerrainTypeClass::GetIndex(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x67a960*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x67a975*/
  else
    return 0; /*0x67a967*/
}


// ==== 0x0067A980  _VectorClass_PBVTerrainTypeClass::SaveToINI  this=VectorClass  sig=csp ====
int __thiscall TypeList_cptr_TerrainTypeClass::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x67a98a*/
}


// ==== 0x0067A990  _TypeList_PBVVoxelAnimTypeClass::Add  this=TypeList  sig=csp ====
TypeList *__thiscall TypeList_VoxelAnim::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67a993*/
  *Block = &vt_VectorClass_VoxelAnimTypeClass_const; /*0x67a996*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x67a9a0*/
  {
    __3_YAXPAX_Z(v3); /*0x67a9a8*/
    *(Block + 1) = 0; /*0x67a9b0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x67a9bb*/
  *(Block + 2) = 0; /*0x67a9c1*/
  if ( (a2 & 1) != 0 ) /*0x67a9c8*/
    __3_YAXPAX_Z(Block); /*0x67a9cb*/
  return (TypeList *)Block; /*0x67a9d5*/
}


// ==== 0x0067A9E0  _TypeList_PBVSmudgeTypeClass::TypeList_vt00  this=TypeList  sig=csp ====
TypeList *__thiscall TypeList_VoxelAnim::TypeList_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67a9e3*/
  *Block = &vt_VectorClass_SmudgeTypeClass_const; /*0x67a9e6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x67a9f0*/
  {
    __3_YAXPAX_Z(v3); /*0x67a9f8*/
    *(Block + 1) = 0; /*0x67aa00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x67aa0b*/
  *(Block + 2) = 0; /*0x67aa11*/
  if ( (a2 & 1) != 0 ) /*0x67aa18*/
    __3_YAXPAX_Z(Block); /*0x67aa1b*/
  return (TypeList *)Block; /*0x67aa25*/
}


// ==== 0x0067AA30  _TypeList_PBVTerrainTypeClass::Add  this=TypeList  sig=csp ====
TypeList *__thiscall TypeList_cptr_TerrainTypeClass::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67aa33*/
  *Block = &vt_VectorClass_TerrainTypeClass_const; /*0x67aa36*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x67aa40*/
  {
    __3_YAXPAX_Z(v3); /*0x67aa48*/
    *(Block + 1) = 0; /*0x67aa50*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x67aa5b*/
  *(Block + 2) = 0; /*0x67aa61*/
  if ( (a2 & 1) != 0 ) /*0x67aa68*/
    __3_YAXPAX_Z(Block); /*0x67aa6b*/
  return (TypeList *)Block; /*0x67aa75*/
}


// ==== 0x0067AA80  VectorClass::CopyAssign  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CopyAssign(_DWORD *this, VectorClass *aP1)
{
  void *v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (_DWORD *)aP1 ) /*0x67aa8a*/
    return this; /*0x67aa8a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x67aa8e*/
  v3 = aP1->field_8; /*0x67aa91*/
  this->Capacity = v3; /*0x67aa96*/
  if ( !v3 ) /*0x67aa99*/
  {
    this->Items = 0; /*0x67aada*/
    this->__pad_034 = 0; /*0x67aae1*/
    return this; /*0x67aae5*/
  }
  v4 = __2_YAPAXI_Z(4 * (_DWORD)v3); /*0x67aaa3*/
  this->Items = v4; /*0x67aaab*/
  if ( !v4 ) /*0x67aab0*/
    return this; /*0x67aab0*/
  v5 = this->Capacity; /*0x67aab2*/
  v6 = 0; /*0x67aab5*/
  this->__pad_034 = 1; /*0x67aab9*/
  if ( v5 <= 0 ) /*0x67aabd*/
    return this; /*0x67aabd*/
  do /*0x67aad1*/
  {
    *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->field_1[3] + 4 * v6); /*0x67aac8*/
    ++v6; /*0x67aace*/
  }
  while ( v6 < this->Capacity ); /*0x67aad1*/
  return this; /*0x67aad5*/
}


// ==== 0x0067AAF0  _VectorClass_PBVVoxelAnimTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TypeList_VoxelAnim::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x67aaf2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x67aafd*/
  {
    v3 = 0; /*0x67aaff*/
    if ( v2 <= 0 ) /*0x67ab03*/
      return 1; /*0x67ab23*/
    v4 = (_DWORD *)this->Items; /*0x67ab05*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x67ab0b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x67ab14*/
    {
      ++v3; /*0x67ab16*/
      ++v4; /*0x67ab17*/
      if ( v3 >= v2 ) /*0x67ab1c*/
        return 1; /*0x67ab1c*/
    }
  }
  return 0; /*0x67ab1e*/
}


// ==== 0x0067AB30  _VectorClass_PBVVoxelAnimTypeClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall TypeList_VoxelAnim::sub_67AB30(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x67ab3c*/
  {
    this->IsInitialized = 0; /*0x67ab46*/
    if ( a3 ) /*0x67ab4c*/
      v4 = a3; /*0x67ab62*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x67ab5e*/
    this->IsInitialized = 1; /*0x67ab66*/
    if ( v4 ) /*0x67ab6a*/
    {
      if ( this->Items ) /*0x67ab75*/
      {
        v6 = this->Capacity; /*0x67ab7c*/
        if ( a2 < v6 ) /*0x67ab81*/
          v6 = a2; /*0x67ab83*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x67ab89*/
          ++i; /*0x67ab8e*/
        if ( this->IsAllocated ) /*0x67ab9b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x67aba6*/
          this->Items = 0; /*0x67abae*/
        }
      }
      this->Items = v4; /*0x67abb7*/
      this->Capacity = a2; /*0x67abbf*/
      this->IsAllocated = a3 == 0; /*0x67abc2*/
      return 1; /*0x67abc8*/
    }
    else
    {
      return 0; /*0x67ab6f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x67abd2*/
    return 1; /*0x67abd8*/
  }
}


// ==== 0x0067ABE0  _VectorClass_PBVVoxelAnimTypeClass::Cleanup2  this=VectorClass  sig=csp ====
void __thiscall Vector_Cleanup2(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x67abed*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x67abf3*/
    *(_DWORD *)(this + 4) = 0; /*0x67abfb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x67abfe*/
  *(_DWORD *)(this + 8) = 0; /*0x67ac01*/
}


// ==== 0x0067AC10  _VectorClass_PBVVoxelAnimTypeClass::IndexOf  this=VectorClass  sig=csp ====
int __thiscall TypeList_VoxelAnim::sub_67AC10(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x67ac10*/
    return 0; /*0x67ac18*/
  v3 = *(_DWORD *)(this + 8); /*0x67ac1e*/
  result = 0; /*0x67ac21*/
  if ( v3 <= 0 ) /*0x67ac25*/
    return -1; /*0x67ac3c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x67ac2b*/
  {
    if ( ++result >= v3 ) /*0x67ac3a*/
      return -1; /*0x67ac3a*/
  }
  return result; /*0x67ac1a*/
}


// ==== 0x0067AC50  _VectorClass_PBVVoxelAnimTypeClass::PointerToIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall TypeList_VoxelAnim::sub_67AC50(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x67ac50*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x67ac65*/
  else
    return 0; /*0x67ac57*/
}


// ==== 0x0067AC70  DynamicVector::Constructor_VoxelAnim  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_67AC70(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x67ac79*/
  this->Capacity = a2; /*0x67ac80*/
  this->q030 = 1; /*0x67ac83*/
  this->__pad_034 = 0; /*0x67ac87*/
  *this = &vt_VectorClass_VoxelAnimTypeClass_const; /*0x67ac8b*/
  if ( a2 ) /*0x67ac91*/
  {
    if ( a3 ) /*0x67ac99*/
    {
      this->Items = a3; /*0x67ac9b*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x67acac*/
      this->__pad_034 = 1; /*0x67acaf*/
    }
  }
  *this = &vt_DynamicVectorClass_VoxelAnimTypeClass_const; /*0x67acb3*/
  this->q005 = 10; /*0x67acb9*/
  this->q010 = 0; /*0x67acc0*/
  return this; /*0x67acc9*/
}


// ==== 0x0067ACD0  _DynamicVectorClass_PBVVoxelAnimTypeClass::Remove  this=DynamicVector  sig=csp ====
char __thiscall TypeList_VoxelAnim::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67acdc*/
  {
    this->IsInitialized = 0; /*0x67ace2*/
    if ( a3 ) /*0x67ace8*/
      v4 = a3; /*0x67acfe*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x67acfa*/
    this->IsInitialized = 1; /*0x67ad02*/
    if ( !v4 ) /*0x67ad06*/
      return 0; /*0x67ad7a*/
    if ( this->Items ) /*0x67ad08*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x67ad0f*/
      if ( a2 < v5 ) /*0x67ad14*/
        v5 = a2; /*0x67ad16*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x67ad1c*/
        ++i; /*0x67ad21*/
      if ( this->IsAllocated ) /*0x67ad2e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x67ad39*/
        this->Items = 0; /*0x67ad41*/
      }
    }
    this->Items = v4; /*0x67ad4a*/
    this->DynamicVector_field_0x8 = a2; /*0x67ad52*/
    this->IsAllocated = a3 == 0; /*0x67ad55*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x67ad5e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x67ad61*/
  if ( v7 < this->Items ) /*0x67ad69*/
    this->Items = v7; /*0x67ad6b*/
  return 1; /*0x67ad6e*/
}


// ==== 0x0067AD80  DynamicVector::Add2  this=TypeList  sig=csp ====
char __thiscall DynamicVector::Add2(_DWORD *this, VectorClass *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->Capacity; /*0x67ad83*/
  if ( this->Count >= v3 ) /*0x67ad8b*/
  {
    if ( !this->IsAllocated && v3 ) /*0x67ad96*/
      return 0; /*0x67ad96*/
    v4 = this->CapacityIncrement; /*0x67ad98*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x67ada8*/
      return 0; /*0x67adaf*/
  }
  v6 = this->Count; /*0x67adb5*/
  v7 = this->Items; /*0x67adb8*/
  this->Count = v6 + 1; /*0x67adbe*/
  *(_DWORD *)(v7 + 4 * v6) = *(_DWORD *)aP1->vtable0; /*0x67adc8*/
  return 1; /*0x67adb1*/
}


// ==== 0x0067ADD0  _DynamicVectorClass_PBVVoxelAnimTypeClass::GetSize  this=DynamicVector  sig=csp ====
int __thiscall TypeList_VoxelAnim::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x67add0*/
  result = 0; /*0x67add3*/
  if ( v2 <= 0 ) /*0x67add8*/
    return -1; /*0x67adef*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x67adde*/
  {
    if ( ++result >= v2 ) /*0x67aded*/
      return -1; /*0x67aded*/
  }
  return result; /*0x67adf2*/
}


// ==== 0x0067AE00  VectorClass::CopySmudge  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CopySmudge(_DWORD *this, CCINIClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (_DWORD *)aP1 ) /*0x67ae0a*/
    return this; /*0x67ae0a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x67ae0e*/
  v3 = aP1->headNode[1]; /*0x67ae11*/
  this->Capacity = v3; /*0x67ae16*/
  if ( !v3 ) /*0x67ae19*/
  {
    this->Items = 0; /*0x67ae5a*/
    this->__pad_034 = 0; /*0x67ae61*/
    return this; /*0x67ae65*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x67ae23*/
  this->Items = v4; /*0x67ae2b*/
  if ( !v4 ) /*0x67ae30*/
    return this; /*0x67ae30*/
  v5 = this->Capacity; /*0x67ae32*/
  v6 = 0; /*0x67ae35*/
  this->__pad_034 = 1; /*0x67ae39*/
  if ( v5 <= 0 ) /*0x67ae3d*/
    return this; /*0x67ae3d*/
  do /*0x67ae51*/
  {
    *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(aP1->headNode[0] + 4 * v6); /*0x67ae48*/
    ++v6; /*0x67ae4e*/
  }
  while ( v6 < this->Capacity ); /*0x67ae51*/
  return this; /*0x67ae55*/
}


// ==== 0x0067AE70  _VectorClass_PBVSmudgeTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TypeList::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x67ae72*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x67ae7d*/
  {
    v3 = 0; /*0x67ae7f*/
    if ( v2 <= 0 ) /*0x67ae83*/
      return 1; /*0x67aea3*/
    v4 = (_DWORD *)this->Items; /*0x67ae85*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x67ae8b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x67ae94*/
    {
      ++v3; /*0x67ae96*/
      ++v4; /*0x67ae97*/
      if ( v3 >= v2 ) /*0x67ae9c*/
        return 1; /*0x67ae9c*/
    }
  }
  return 0; /*0x67ae9e*/
}


// ==== 0x0067AEB0  _VectorClass_PBVSmudgeTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall SmudgeTypeVector::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x67aebc*/
  {
    this->IsInitialized = 0; /*0x67aec6*/
    if ( a3 ) /*0x67aecc*/
      v4 = a3; /*0x67aee2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x67aede*/
    this->IsInitialized = 1; /*0x67aee6*/
    if ( v4 ) /*0x67aeea*/
    {
      if ( this->Items ) /*0x67aef5*/
      {
        v6 = this->Capacity; /*0x67aefc*/
        if ( a2 < v6 ) /*0x67af01*/
          v6 = a2; /*0x67af03*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x67af09*/
          ++i; /*0x67af0e*/
        if ( this->IsAllocated ) /*0x67af1b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x67af26*/
          this->Items = 0; /*0x67af2e*/
        }
      }
      this->Items = v4; /*0x67af37*/
      this->Capacity = a2; /*0x67af3f*/
      this->IsAllocated = a3 == 0; /*0x67af42*/
      return 1; /*0x67af48*/
    }
    else
    {
      return 0; /*0x67aeef*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x67af52*/
    return 1; /*0x67af58*/
  }
}


// ==== 0x0067AF60  ?$VectorClass@PBVSmudgeTypeClass@@::ClearAndFree  this=VectorClass  sig=csp ====
void __thiscall sub_67AF60(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x67af6d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x67af73*/
    *(_DWORD *)(this + 4) = 0; /*0x67af7b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x67af7e*/
  *(_DWORD *)(this + 8) = 0; /*0x67af81*/
}


// ==== 0x0067AF90  _VectorClass_PBVSmudgeTypeClass::AddSmudge  this=VectorClass  sig=csp ====
int __thiscall SmudgeTypeVector::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x67af90*/
    return 0; /*0x67af98*/
  v3 = *(_DWORD *)(this + 8); /*0x67af9e*/
  result = 0; /*0x67afa1*/
  if ( v3 <= 0 ) /*0x67afa5*/
    return -1; /*0x67afbc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x67afab*/
  {
    if ( ++result >= v3 ) /*0x67afba*/
      return -1; /*0x67afba*/
  }
  return result; /*0x67af9a*/
}


// ==== 0x0067AFD0  _VectorClass_PBVSmudgeTypeClass::Remove  this=VectorClass  sig=csp ====
unsigned int __thiscall SmudgeTypeVector::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x67afd0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x67afe5*/
  else
    return 0; /*0x67afd7*/
}


// ==== 0x0067AFF0  SmudgeTypeVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall SmudgeTypeVector_Constructor(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x67aff9*/
  this->Capacity = a2; /*0x67b000*/
  this->q030 = 1; /*0x67b003*/
  this->__pad_034 = 0; /*0x67b007*/
  *this = &vt_VectorClass_SmudgeTypeClass_const; /*0x67b00b*/
  if ( a2 ) /*0x67b011*/
  {
    if ( a3 ) /*0x67b019*/
    {
      this->Items = a3; /*0x67b01b*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x67b02c*/
      this->__pad_034 = 1; /*0x67b02f*/
    }
  }
  *this = &vt_DynamicVectorClass_SmudgeTypeClass_const; /*0x67b033*/
  this->q005 = 10; /*0x67b039*/
  this->q010 = 0; /*0x67b040*/
  return this; /*0x67b049*/
}


// ==== 0x0067B050  _DynamicVectorClass_PBVSmudgeTypeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall TypeList::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67b05c*/
  {
    this->IsInitialized = 0; /*0x67b062*/
    if ( a3 ) /*0x67b068*/
      v4 = a3; /*0x67b07e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x67b07a*/
    this->IsInitialized = 1; /*0x67b082*/
    if ( !v4 ) /*0x67b086*/
      return 0; /*0x67b0fa*/
    if ( this->Items ) /*0x67b088*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x67b08f*/
      if ( a2 < v5 ) /*0x67b094*/
        v5 = a2; /*0x67b096*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x67b09c*/
        ++i; /*0x67b0a1*/
      if ( this->IsAllocated ) /*0x67b0ae*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x67b0b9*/
        this->Items = 0; /*0x67b0c1*/
      }
    }
    this->Items = v4; /*0x67b0ca*/
    this->DynamicVector_field_0x8 = a2; /*0x67b0d2*/
    this->IsAllocated = a3 == 0; /*0x67b0d5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x67b0de*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x67b0e1*/
  if ( v7 < this->Items ) /*0x67b0e9*/
    this->Items = v7; /*0x67b0eb*/
  return 1; /*0x67b0ee*/
}


// ==== 0x0067B100  SmudgeTypeVector::Add  this=TypeList  sig=csp ====
char __thiscall SmudgeTypeVector::Add(_DWORD *this, CCINIClass *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->Capacity; /*0x67b103*/
  if ( this->Count >= v3 ) /*0x67b10b*/
  {
    if ( !this->IsAllocated && v3 ) /*0x67b116*/
      return 0; /*0x67b116*/
    v4 = this->CapacityIncrement; /*0x67b118*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x67b128*/
      return 0; /*0x67b12f*/
  }
  v6 = this->Count; /*0x67b135*/
  v7 = this->Items; /*0x67b138*/
  this->Count = v6 + 1; /*0x67b13e*/
  *(_DWORD *)(v7 + 4 * v6) = *(_DWORD *)aP1->__pad_0; /*0x67b148*/
  return 1; /*0x67b131*/
}


// ==== 0x0067B150  _DynamicVectorClass_PBVSmudgeTypeClass::TypeList_vt04  this=DynamicVector  sig=csp ====
int __thiscall TypeList_VoxelAnim::TypeList_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x67b150*/
  result = 0; /*0x67b153*/
  if ( v2 <= 0 ) /*0x67b158*/
    return -1; /*0x67b16f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x67b15e*/
  {
    if ( ++result >= v2 ) /*0x67b16d*/
      return -1; /*0x67b16d*/
  }
  return result; /*0x67b172*/
}


// ==== 0x0067B180  VectorClass::CopyBuilding  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CopyBuilding(_DWORD *this, VectorClass *aP1)
{
  void *v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (_DWORD *)aP1 ) /*0x67b18a*/
    return this; /*0x67b18a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x67b18e*/
  v3 = aP1->field_8; /*0x67b191*/
  this->Capacity = v3; /*0x67b196*/
  if ( !v3 ) /*0x67b199*/
  {
    this->Items = 0; /*0x67b1da*/
    this->__pad_034 = 0; /*0x67b1e1*/
    return this; /*0x67b1e5*/
  }
  v4 = __2_YAPAXI_Z(4 * (_DWORD)v3); /*0x67b1a3*/
  this->Items = v4; /*0x67b1ab*/
  if ( !v4 ) /*0x67b1b0*/
    return this; /*0x67b1b0*/
  v5 = this->Capacity; /*0x67b1b2*/
  v6 = 0; /*0x67b1b5*/
  this->__pad_034 = 1; /*0x67b1b9*/
  if ( v5 <= 0 ) /*0x67b1bd*/
    return this; /*0x67b1bd*/
  do /*0x67b1d1*/
  {
    *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->field_1[3] + 4 * v6); /*0x67b1c8*/
    ++v6; /*0x67b1ce*/
  }
  while ( v6 < this->Capacity ); /*0x67b1d1*/
  return this; /*0x67b1d5*/
}


// ==== 0x0067B1F0  _VectorClass_PBVTerrainTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TypeList_cptr_TerrainTypeClass::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x67b1f2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x67b1fd*/
  {
    v3 = 0; /*0x67b1ff*/
    if ( v2 <= 0 ) /*0x67b203*/
      return 1; /*0x67b223*/
    v4 = (_DWORD *)this->Items; /*0x67b205*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x67b20b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x67b214*/
    {
      ++v3; /*0x67b216*/
      ++v4; /*0x67b217*/
      if ( v3 >= v2 ) /*0x67b21c*/
        return 1; /*0x67b21c*/
    }
  }
  return 0; /*0x67b21e*/
}


// ==== 0x0067B230  _VectorClass_PBVTerrainTypeClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall TypeList_cptr_TerrainTypeClass::sub_67B230(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x67b23c*/
  {
    this->IsInitialized = 0; /*0x67b246*/
    if ( a3 ) /*0x67b24c*/
      v4 = a3; /*0x67b262*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x67b25e*/
    this->IsInitialized = 1; /*0x67b266*/
    if ( v4 ) /*0x67b26a*/
    {
      if ( this->Items ) /*0x67b275*/
      {
        v6 = this->Capacity; /*0x67b27c*/
        if ( a2 < v6 ) /*0x67b281*/
          v6 = a2; /*0x67b283*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x67b289*/
          ++i; /*0x67b28e*/
        if ( this->IsAllocated ) /*0x67b29b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x67b2a6*/
          this->Items = 0; /*0x67b2ae*/
        }
      }
      this->Items = v4; /*0x67b2b7*/
      this->Capacity = a2; /*0x67b2bf*/
      this->IsAllocated = a3 == 0; /*0x67b2c2*/
      return 1; /*0x67b2c8*/
    }
    else
    {
      return 0; /*0x67b26f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x67b2d2*/
    return 1; /*0x67b2d8*/
  }
}


// ==== 0x0067B2E0  _VectorClass_PBVTerrainTypeClass::TryFreeAndClear  this=VectorClass  sig=csp ====
void __thiscall TypeList_cptr_TerrainTypeClass::sub_67B2E0(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x67b2ed*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x67b2f3*/
    *(_DWORD *)(this + 4) = 0; /*0x67b2fb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x67b2fe*/
  *(_DWORD *)(this + 8) = 0; /*0x67b301*/
}


// ==== 0x0067B310  _VectorClass_PBVTerrainTypeClass::IndexOf  this=VectorClass  sig=csp ====
int __thiscall TypeList_cptr_TerrainTypeClass::sub_67B310(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x67b310*/
    return 0; /*0x67b318*/
  v3 = *(_DWORD *)(this + 8); /*0x67b31e*/
  result = 0; /*0x67b321*/
  if ( v3 <= 0 ) /*0x67b325*/
    return -1; /*0x67b33c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x67b32b*/
  {
    if ( ++result >= v3 ) /*0x67b33a*/
      return -1; /*0x67b33a*/
  }
  return result; /*0x67b31a*/
}


// ==== 0x0067B350  _VectorClass_PBVTerrainTypeClass::PointerToIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall TypeList_cptr_TerrainTypeClass::sub_67B350(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x67b350*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x67b365*/
  else
    return 0; /*0x67b357*/
}


// ==== 0x0067B370  TerrainTypeVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_67B370(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x67b379*/
  this->Capacity = a2; /*0x67b380*/
  this->q030 = 1; /*0x67b383*/
  this->__pad_034 = 0; /*0x67b387*/
  *this = &vt_VectorClass_TerrainTypeClass_const; /*0x67b38b*/
  if ( a2 ) /*0x67b391*/
  {
    if ( a3 ) /*0x67b399*/
    {
      this->Items = a3; /*0x67b39b*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x67b3ac*/
      this->__pad_034 = 1; /*0x67b3af*/
    }
  }
  *this = &DynamicVectorClass<TerrainTypeClass const *>::`vftable'; /*0x67b3b3*/
  this->q005 = 10; /*0x67b3b9*/
  this->q010 = 0; /*0x67b3c0*/
  return this; /*0x67b3c9*/
}


// ==== 0x0067B3D0  _DynamicVectorClass_PBVTerrainTypeClass::Remove  this=DynamicVector  sig=csp ====
char __thiscall TypeList_cptr_TerrainTypeClass::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67b3dc*/
  {
    this->IsInitialized = 0; /*0x67b3e2*/
    if ( a3 ) /*0x67b3e8*/
      v4 = a3; /*0x67b3fe*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x67b3fa*/
    this->IsInitialized = 1; /*0x67b402*/
    if ( !v4 ) /*0x67b406*/
      return 0; /*0x67b47a*/
    if ( this->Items ) /*0x67b408*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x67b40f*/
      if ( a2 < v5 ) /*0x67b414*/
        v5 = a2; /*0x67b416*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x67b41c*/
        ++i; /*0x67b421*/
      if ( this->IsAllocated ) /*0x67b42e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x67b439*/
        this->Items = 0; /*0x67b441*/
      }
    }
    this->Items = v4; /*0x67b44a*/
    this->DynamicVector_field_0x8 = a2; /*0x67b452*/
    this->IsAllocated = a3 == 0; /*0x67b455*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x67b45e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x67b461*/
  if ( v7 < this->Items ) /*0x67b469*/
    this->Items = v7; /*0x67b46b*/
  return 1; /*0x67b46e*/
}


// ==== 0x0067B480  RulesClass::readAI  this=TypeList  sig=csp ====
char __thiscall sub_67B480(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->Capacity; /*0x67b483*/
  if ( this->Count >= v3 ) /*0x67b48b*/
  {
    if ( !this->IsAllocated && v3 ) /*0x67b496*/
      return 0; /*0x67b496*/
    v4 = this->CapacityIncrement; /*0x67b498*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x67b4a8*/
      return 0; /*0x67b4af*/
  }
  v6 = this->Count; /*0x67b4b5*/
  v7 = this->Items; /*0x67b4b8*/
  this->Count = v6 + 1; /*0x67b4be*/
  *(_DWORD *)(v7 + 4 * v6) = *a2; /*0x67b4c8*/
  return 1; /*0x67b4b1*/
}


// ==== 0x0067B4D0  _DynamicVectorClass_PBVTerrainTypeClass::GetSize  this=DynamicVector  sig=csp ====
int __thiscall TypeList_cptr_TerrainTypeClass::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x67b4d0*/
  result = 0; /*0x67b4d3*/
  if ( v2 <= 0 ) /*0x67b4d8*/
    return -1; /*0x67b4ef*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x67b4de*/
  {
    if ( ++result >= v2 ) /*0x67b4ed*/
      return -1; /*0x67b4ed*/
  }
  return result; /*0x67b4f2*/
}


// ==== 0x0067B500  SmallFunc_67B500  this=IUnknown  sig=csp ====
int __fastcall SmallFunc_67B500(unsigned __int8 ***a1, INIClass *edx0, unsigned __int8 *a2, int a4)
{
  INIClass Destination[2]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(a1, edx0, a2, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], Destination, 128) ) /*0x67b51e*/
    return WarheadTypeClass::FindOrCreate(Destination[0].__pad_0); /*0x67b52b*/
  else
    return a4; /*0x67b539*/
}


// ==== 0x0067B550  ReadINIClassBuildingTypeList  this=VectorClass  sig=csp ====
int __fastcall ReadINIClassBuildingTypeList(
        INIClass *aP0,
        unsigned __int8 ***edx0,
        VectorClass *aP2,
        unsigned __int8 *a3,
        _DWORD *a4)
{
  char *i; // eax
  INIClass *v7; // edi
  int v8; // eax
  VectorClass *v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  VectorClass *v15; // ecx
  int v16; // eax
  VectorClass *v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  INIClass String[2]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString(edx0, (INIClass *)aP2, a3, (INIClass *)&stru_87C374.__pad_579C[33876], String, 128) ) /*0x67b57c*/
  {
    VectorClass::BuildingTypeConstructor(&v17, 0, 0); /*0x67b591*/
    v22 = 10; /*0x67b59a*/
    v21 = 0; /*0x67b5a8*/
    v17 = (VectorClass *)&vt_TypeList_BuildingTypeClass_const; /*0x67b5ac*/
    for ( i = strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject); /*0x67b5be*/
          i;
          i = strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !*i ) /*0x67b5c0*/
        break; /*0x67b5c2*/
      v7 = (INIClass *)BuildingTypeClass::FindOrCreate(i); /*0x67b5cb*/
      if ( v7 /*0x67b5fb*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))v17->Capacity)(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67b606*/
        *((_DWORD *)Block + v8) = v7; /*0x67b611*/
      }
    }
    aP0->headNode[0] = 0; /*0x67b62d*/
    aP0->headNode[1] = 0; /*0x67b630*/
    LOBYTE(aP0->headNode[2]) = 1; /*0x67b633*/
    BYTE1(aP0->headNode[2]) = 0; /*0x67b637*/
    *(_DWORD *)aP0->__pad_0 = &vt_VectorClass_BuildingTypeClass_const; /*0x67b63a*/
    VectorClass::CopyBuilding(aP0, (VectorClass *)&v17); /*0x67b640*/
    *(_DWORD *)aP0->__pad_0 = &vt_TypeList_BuildingTypeClass_const; /*0x67b645*/
    v17 = (VectorClass *)&vt_VectorClass_BuildingTypeClass_const; /*0x67b64b*/
    v9 = (VectorClass *)v22; /*0x67b657*/
    aP0->sectionHead[0] = v21; /*0x67b65b*/
    v10 = Block; /*0x67b65e*/
    v11 = Block == 0; /*0x67b662*/
    aP0->sectionHead[1] = (int)v9; /*0x67b664*/
    if ( !v11 && v20 ) /*0x67b671*/
    {
      __3_YAXPAX_Z(v10); /*0x67b678*/
      return (int)aP0->__pad_0; /*0x67b68b*/
    }
  }
  else
  {
    aP0->headNode[0] = 0; /*0x67b699*/
    aP0->headNode[1] = 0; /*0x67b69c*/
    LOBYTE(aP0->headNode[2]) = 1; /*0x67b69f*/
    BYTE1(aP0->headNode[2]) = 0; /*0x67b6a3*/
    *(_DWORD *)aP0->__pad_0 = &vt_VectorClass_BuildingTypeClass_const; /*0x67b6a6*/
    if ( aP0 != (INIClass *)a4 ) /*0x67b6ac*/
    {
      DynamicVectorClass::Destroy((int)aP0); /*0x67b6b0*/
      v13 = a4[2]; /*0x67b6b6*/
      aP0->headNode[1] = v13; /*0x67b6bb*/
      if ( v13 ) /*0x67b6be*/
      {
        v14 = __2_YAPAXI_Z(4 * v13); /*0x67b6c8*/
        aP0->headNode[0] = v14; /*0x67b6d2*/
        if ( v14 ) /*0x67b6d5*/
        {
          v15 = (VectorClass *)aP0->headNode[1]; /*0x67b6d7*/
          v16 = 0; /*0x67b6da*/
          BYTE1(aP0->headNode[2]) = 1; /*0x67b6de*/
          if ( (int)v15 > 0 ) /*0x67b6e2*/
          {
            do /*0x67b6f6*/
            {
              *(_DWORD *)(aP0->headNode[0] + 4 * v16) = *(_DWORD *)(a4[1] + 4 * v16); /*0x67b6ed*/
              ++v16; /*0x67b6f3*/
            }
            while ( v16 < aP0->headNode[1] ); /*0x67b6f6*/
          }
        }
      }
      else
      {
        aP0->headNode[0] = 0; /*0x67b6fa*/
        BYTE1(aP0->headNode[2]) = 0; /*0x67b6fd*/
      }
    }
    aP0->sectionHead[0] = a4[4]; /*0x67b703*/
    aP0->sectionHead[1] = a4[5]; /*0x67b709*/
    *(_DWORD *)aP0->__pad_0 = &vt_TypeList_BuildingTypeClass_const; /*0x67b70c*/
  }
  return (int)aP0->__pad_0; /*0x67b682*/
}


// ==== 0x0067B720  BuildingClass::LoadBuildingTypes  this=VectorClass  sig=csp ====
VectorClass *__fastcall BuildingClass::LoadBuildingTypes(
        int a1,
        unsigned __int8 ***edx0,
        INIClass *aP1,
        unsigned __int8 *a2,
        _DWORD *a5)
{
  char *i; // eax
  INIClass *Alt; // edi
  int v8; // eax
  VectorClass *v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  VectorClass *v15; // ecx
  int v16; // eax
  VectorClass *v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  INIClass String[2]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString(edx0, aP1, a2, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], String, 128) ) /*0x67b74c*/
  {
    UnitTypeVector::ConstructUnitTypeVectorClass(&v17, 0, 0); /*0x67b761*/
    v22 = 10; /*0x67b76a*/
    v21 = 0; /*0x67b778*/
    v17 = (VectorClass *)&vt_TypeList_UnitTypeClass_const; /*0x67b77c*/
    for ( i = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); i; i = strtok(0, MEMORY[0x817F70].__pad_0) ) /*0x67b78e*/
    {
      if ( !*i ) /*0x67b790*/
        break; /*0x67b792*/
      Alt = (INIClass *)BuildingTypeClass::FindOrCreateAlt(i); /*0x67b79b*/
      if ( Alt /*0x67b7cb*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))v17->Capacity)(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67b7d6*/
        *((_DWORD *)Block + v8) = Alt; /*0x67b7e1*/
      }
    }
    *(_DWORD *)(a1 + 4) = 0; /*0x67b7fd*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67b800*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67b803*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67b807*/
    *(_DWORD *)a1 = &vt_VectorClass_UnitTypeClass_const; /*0x67b80a*/
    VectorClass::CopyConstructor((_DWORD *)a1, (InfantryTypeClass *)&v17); /*0x67b810*/
    *(_DWORD *)a1 = &vt_TypeList_UnitTypeClass_const; /*0x67b815*/
    v17 = (VectorClass *)&vt_VectorClass_UnitTypeClass_const; /*0x67b81b*/
    v9 = (VectorClass *)v22; /*0x67b827*/
    *(_DWORD *)(a1 + 16) = v21; /*0x67b82b*/
    v10 = Block; /*0x67b82e*/
    v11 = Block == 0; /*0x67b832*/
    *(_DWORD *)(a1 + 20) = v9; /*0x67b834*/
    if ( !v11 && v20 ) /*0x67b841*/
    {
      __3_YAXPAX_Z(v10); /*0x67b848*/
      return (VectorClass *)a1; /*0x67b85b*/
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0; /*0x67b869*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67b86c*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67b86f*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67b873*/
    *(_DWORD *)a1 = &vt_VectorClass_UnitTypeClass_const; /*0x67b876*/
    if ( (_DWORD *)a1 != a5 ) /*0x67b87c*/
    {
      Vector::Destructor(a1); /*0x67b880*/
      v13 = a5[2]; /*0x67b886*/
      *(_DWORD *)(a1 + 8) = v13; /*0x67b88b*/
      if ( v13 ) /*0x67b88e*/
      {
        v14 = __2_YAPAXI_Z(4 * v13); /*0x67b898*/
        *(_DWORD *)(a1 + 4) = v14; /*0x67b8a2*/
        if ( v14 ) /*0x67b8a5*/
        {
          v15 = *(VectorClass **)(a1 + 8); /*0x67b8a7*/
          v16 = 0; /*0x67b8aa*/
          *(_BYTE *)(a1 + 13) = 1; /*0x67b8ae*/
          if ( (int)v15 > 0 ) /*0x67b8b2*/
          {
            do /*0x67b8c6*/
            {
              *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v16) = *(_DWORD *)(a5[1] + 4 * v16); /*0x67b8bd*/
              ++v16; /*0x67b8c3*/
            }
            while ( v16 < *(_DWORD *)(a1 + 8) ); /*0x67b8c6*/
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 4) = 0; /*0x67b8ca*/
        *(_BYTE *)(a1 + 13) = 0; /*0x67b8cd*/
      }
    }
    *(_DWORD *)(a1 + 16) = a5[4]; /*0x67b8d3*/
    *(_DWORD *)(a1 + 20) = a5[5]; /*0x67b8d9*/
    *(_DWORD *)a1 = &vt_TypeList_UnitTypeClass_const; /*0x67b8dc*/
  }
  return (VectorClass *)a1; /*0x67b852*/
}


// ==== 0x0067B8F0  HouseTypeClass::ReadCountryName  this=VectorClass  sig=csp ====
VectorClass *__fastcall HouseTypeClass::ReadCountryName(
        int a1,
        unsigned __int8 ***edx0,
        INIClass *aP1,
        unsigned __int8 *a2,
        _DWORD *a5)
{
  ObjectClass *i; // eax
  INIClass *v7; // edi
  int v8; // eax
  VectorClass *v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  VectorClass *v15; // ecx
  int v16; // eax
  VectorClass *v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  INIClass String[2]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString(edx0, aP1, a2, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], String, 128) ) /*0x67b91c*/
  {
    AircraftTypeVector::Constructor(&v17, 0, 0); /*0x67b931*/
    v22 = 10; /*0x67b93a*/
    v21 = 0; /*0x67b948*/
    v17 = (VectorClass *)&vt_TypeList_AircraftTypeClass_const; /*0x67b94c*/
    for ( i = (ObjectClass *)strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x67b95e*/
          i;
          i = (ObjectClass *)strtok(0, MEMORY[0x817F70].__pad_0) )
    {
      if ( !i->__pad_0[0] ) /*0x67b960*/
        break; /*0x67b962*/
      v7 = (INIClass *)KeywordClass::FindOrCreate(i); /*0x67b96b*/
      if ( v7 /*0x67b99b*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))v17->Capacity)(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67b9a6*/
        *((_DWORD *)Block + v8) = v7; /*0x67b9b1*/
      }
    }
    *(_DWORD *)(a1 + 4) = 0; /*0x67b9cd*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67b9d0*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67b9d3*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67b9d7*/
    *(_DWORD *)a1 = &vt_VectorClass_AircraftTypeClass_const; /*0x67b9da*/
    HouseTypeClass::readBaseDefense((_DWORD *)a1, (VectorClass *)&v17); /*0x67b9e0*/
    *(_DWORD *)a1 = &vt_TypeList_AircraftTypeClass_const; /*0x67b9e5*/
    v17 = (VectorClass *)&vt_VectorClass_AircraftTypeClass_const; /*0x67b9eb*/
    v9 = (VectorClass *)v22; /*0x67b9f7*/
    *(_DWORD *)(a1 + 16) = v21; /*0x67b9fb*/
    v10 = Block; /*0x67b9fe*/
    v11 = Block == 0; /*0x67ba02*/
    *(_DWORD *)(a1 + 20) = v9; /*0x67ba04*/
    if ( !v11 && v20 ) /*0x67ba11*/
    {
      __3_YAXPAX_Z(v10); /*0x67ba18*/
      return (VectorClass *)a1; /*0x67ba2b*/
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0; /*0x67ba39*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67ba3c*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67ba3f*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67ba43*/
    *(_DWORD *)a1 = &vt_VectorClass_AircraftTypeClass_const; /*0x67ba46*/
    if ( (_DWORD *)a1 != a5 ) /*0x67ba4c*/
    {
      VectorClass::ClearAndFree4(a1); /*0x67ba50*/
      v13 = a5[2]; /*0x67ba56*/
      *(_DWORD *)(a1 + 8) = v13; /*0x67ba5b*/
      if ( v13 ) /*0x67ba5e*/
      {
        v14 = __2_YAPAXI_Z(4 * v13); /*0x67ba68*/
        *(_DWORD *)(a1 + 4) = v14; /*0x67ba72*/
        if ( v14 ) /*0x67ba75*/
        {
          v15 = *(VectorClass **)(a1 + 8); /*0x67ba77*/
          v16 = 0; /*0x67ba7a*/
          *(_BYTE *)(a1 + 13) = 1; /*0x67ba7e*/
          if ( (int)v15 > 0 ) /*0x67ba82*/
          {
            do /*0x67ba96*/
            {
              *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v16) = *(_DWORD *)(a5[1] + 4 * v16); /*0x67ba8d*/
              ++v16; /*0x67ba93*/
            }
            while ( v16 < *(_DWORD *)(a1 + 8) ); /*0x67ba96*/
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 4) = 0; /*0x67ba9a*/
        *(_BYTE *)(a1 + 13) = 0; /*0x67ba9d*/
      }
    }
    *(_DWORD *)(a1 + 16) = a5[4]; /*0x67baa3*/
    *(_DWORD *)(a1 + 20) = a5[5]; /*0x67baa9*/
    *(_DWORD *)a1 = &vt_TypeList_AircraftTypeClass_const; /*0x67baac*/
  }
  return (VectorClass *)a1; /*0x67ba22*/
}


// ==== 0x0067BAC0  GetINIClassInt  this=IUnknown  sig=csp ====
InfantryTypeClass *__fastcall GetINIClassInt(unsigned __int8 ***a0, INIClass *aP1, unsigned __int8 *a2, int a4)
{
  INIClass Destination[2]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(a0, aP1, a2, (INIClass *)&stru_87C374.__pad_579C[33876], Destination, 128) ) /*0x67bade*/
    return KeywordType::FindOrCreate2((ObjectClass *)Destination); /*0x67baeb*/
  else
    return (InfantryTypeClass *)a4; /*0x67baf9*/
}


// ==== 0x0067BB10  ReadINIClassInfantryTypeList  this=VectorClass  sig=csp ====
InfantryTypeClass *__fastcall ReadINIClassInfantryTypeList(
        INIClass *aP0,
        unsigned __int8 ***edx0,
        INIClass *aP1,
        unsigned __int8 *a3,
        _DWORD *a4)
{
  ObjectClass *i; // eax
  INIClass *v7; // edi
  int v8; // eax
  VectorClass *v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  VectorClass *v15; // ecx
  int v16; // eax
  VectorClass *v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  INIClass String[2]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString(edx0, aP1, a3, (INIClass *)&stru_87C374.__pad_579C[33876], String, 128) ) /*0x67bb3c*/
  {
    InfantryTypeVector::Construct2(&v17, 0, 0); /*0x67bb51*/
    v22 = 10; /*0x67bb5a*/
    v21 = 0; /*0x67bb68*/
    v17 = (VectorClass *)&vt_TypeList_InfantryTypeClass_const; /*0x67bb6c*/
    for ( i = (ObjectClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject); /*0x67bb7e*/
          i;
          i = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !i->__pad_0[0] ) /*0x67bb80*/
        break; /*0x67bb82*/
      v7 = (INIClass *)KeywordType::FindOrCreate2(i); /*0x67bb8b*/
      if ( v7 /*0x67bbbb*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))v17->Capacity)(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67bbc6*/
        *((_DWORD *)Block + v8) = v7; /*0x67bbd1*/
      }
    }
    aP0->headNode[0] = 0; /*0x67bbed*/
    aP0->headNode[1] = 0; /*0x67bbf0*/
    LOBYTE(aP0->headNode[2]) = 1; /*0x67bbf3*/
    BYTE1(aP0->headNode[2]) = 0; /*0x67bbf7*/
    *(_DWORD *)aP0->__pad_0 = &vt_VectorClass_InfantryTypeClass_const; /*0x67bbfa*/
    HouseTypeClass::readStartInfantry(aP0, (InfantryTypeClass *)&v17); /*0x67bc00*/
    *(_DWORD *)aP0->__pad_0 = &vt_TypeList_InfantryTypeClass_const; /*0x67bc05*/
    v17 = (VectorClass *)&vt_VectorClass_InfantryTypeClass_const; /*0x67bc0b*/
    v9 = (VectorClass *)v22; /*0x67bc17*/
    aP0->sectionHead[0] = v21; /*0x67bc1b*/
    v10 = Block; /*0x67bc1e*/
    v11 = Block == 0; /*0x67bc22*/
    aP0->sectionHead[1] = (int)v9; /*0x67bc24*/
    if ( !v11 && v20 ) /*0x67bc31*/
    {
      __3_YAXPAX_Z(v10); /*0x67bc38*/
      return (InfantryTypeClass *)aP0; /*0x67bc4b*/
    }
  }
  else
  {
    aP0->headNode[0] = 0; /*0x67bc59*/
    aP0->headNode[1] = 0; /*0x67bc5c*/
    LOBYTE(aP0->headNode[2]) = 1; /*0x67bc5f*/
    BYTE1(aP0->headNode[2]) = 0; /*0x67bc63*/
    *(_DWORD *)aP0->__pad_0 = &vt_VectorClass_InfantryTypeClass_const; /*0x67bc66*/
    if ( aP0 != (INIClass *)a4 ) /*0x67bc6c*/
    {
      Vector::Cleanup((int)aP0); /*0x67bc70*/
      v13 = a4[2]; /*0x67bc76*/
      aP0->headNode[1] = v13; /*0x67bc7b*/
      if ( v13 ) /*0x67bc7e*/
      {
        v14 = __2_YAPAXI_Z(4 * v13); /*0x67bc88*/
        aP0->headNode[0] = v14; /*0x67bc92*/
        if ( v14 ) /*0x67bc95*/
        {
          v15 = (VectorClass *)aP0->headNode[1]; /*0x67bc97*/
          v16 = 0; /*0x67bc9a*/
          BYTE1(aP0->headNode[2]) = 1; /*0x67bc9e*/
          if ( (int)v15 > 0 ) /*0x67bca2*/
          {
            do /*0x67bcb6*/
            {
              *(_DWORD *)(aP0->headNode[0] + 4 * v16) = *(_DWORD *)(a4[1] + 4 * v16); /*0x67bcad*/
              ++v16; /*0x67bcb3*/
            }
            while ( v16 < aP0->headNode[1] ); /*0x67bcb6*/
          }
        }
      }
      else
      {
        aP0->headNode[0] = 0; /*0x67bcba*/
        BYTE1(aP0->headNode[2]) = 0; /*0x67bcbd*/
      }
    }
    aP0->sectionHead[0] = a4[4]; /*0x67bcc3*/
    aP0->sectionHead[1] = a4[5]; /*0x67bcc9*/
    *(_DWORD *)aP0->__pad_0 = &vt_TypeList_InfantryTypeClass_const; /*0x67bccc*/
  }
  return (InfantryTypeClass *)aP0; /*0x67bc42*/
}


// ==== 0x0067BCE0  SmallFunc_67BCE0  this=IUnknown  sig=csp ====
BuildingTypeClass *__fastcall SmallFunc_67BCE0(unsigned __int8 ***a0, INIClass *aP1, unsigned __int8 *a2, int a4)
{
  INIClass Destination[2]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(a0, aP1, a2, (INIClass *)&stru_87C374.__pad_579C[33876], Destination, 128) ) /*0x67bcfe*/
    return BuildingTypeClass::FindOrCreate(Destination[0].__pad_0); /*0x67bd0b*/
  else
    return (BuildingTypeClass *)a4; /*0x67bd19*/
}


// ==== 0x0067BD30  GetINIClassKeyword  this=IUnknown  sig=csp ====
AircraftTypeClass *__fastcall GetINIClassKeyword(unsigned __int8 ***a0, INIClass *aP1, unsigned __int8 *a2, int a4)
{
  INIClass Destination[2]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(a0, aP1, a2, (INIClass *)&stru_87C374.__pad_579C[33876], Destination, 128) ) /*0x67bd4e*/
    return KeywordClass::FindOrCreate((ObjectClass *)Destination); /*0x67bd5b*/
  else
    return (AircraftTypeClass *)a4; /*0x67bd69*/
}


// ==== 0x0067BD80  SmallFunc_67BD80  this=IUnknown  sig=csp ====
TerrainTypeClass *__fastcall SmallFunc_67BD80(unsigned __int8 ***a1, INIClass *edx0, unsigned __int8 *a2, int a4)
{
  INIClass Destination[2]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString(a1, edx0, a2, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], Destination, 128) ) /*0x67bd9e*/
    return TerrainTypeClass::FindOrCreate(Destination[0].__pad_0); /*0x67bdab*/
  else
    return (TerrainTypeClass *)a4; /*0x67bdb9*/
}


// ==== 0x0067BDD0  RulesClass::LoadTypeList  this=VectorClass  sig=csp ====
VectorClass *__fastcall RulesClass::LoadTypeList(
        int a1,
        unsigned __int8 ***edx0,
        INIClass *aP1,
        unsigned __int8 *a2,
        _DWORD *a5)
{
  char *i; // eax
  INIClass *v7; // edi
  int v8; // eax
  VectorClass *v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  VectorClass *v15; // ecx
  int v16; // eax
  VectorClass *v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  INIClass String[2]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString(edx0, aP1, a2, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], String, 128) ) /*0x67bdfc*/
  {
    RulesClass::readIQ(&v17, 0, 0); /*0x67be11*/
    v22 = 10; /*0x67be1a*/
    v21 = 0; /*0x67be28*/
    v17 = (VectorClass *)&vt_TypeList_TerrainTypeClass_const; /*0x67be2c*/
    for ( i = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); i; i = strtok(0, MEMORY[0x817F70].__pad_0) ) /*0x67be3e*/
    {
      if ( !*i ) /*0x67be40*/
        break; /*0x67be42*/
      v7 = (INIClass *)TerrainTypeClass::FindOrCreate(i); /*0x67be4b*/
      if ( v7 /*0x67be7b*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))v17->Capacity)(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67be86*/
        *((_DWORD *)Block + v8) = v7; /*0x67be91*/
      }
    }
    *(_DWORD *)(a1 + 4) = 0; /*0x67bead*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67beb0*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67beb3*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67beb7*/
    *(_DWORD *)a1 = &vt_VectorClass_TerrainTypeClass_const; /*0x67beba*/
    System_Load_67BFA0((_DWORD *)a1, &v17); /*0x67bec0*/
    *(_DWORD *)a1 = &vt_TypeList_TerrainTypeClass_const; /*0x67bec5*/
    v17 = (VectorClass *)&vt_VectorClass_TerrainTypeClass_const; /*0x67becb*/
    v9 = (VectorClass *)v22; /*0x67bed7*/
    *(_DWORD *)(a1 + 16) = v21; /*0x67bedb*/
    v10 = Block; /*0x67bede*/
    v11 = Block == 0; /*0x67bee2*/
    *(_DWORD *)(a1 + 20) = v9; /*0x67bee4*/
    if ( !v11 && v20 ) /*0x67bef1*/
    {
      __3_YAXPAX_Z(v10); /*0x67bef8*/
      return (VectorClass *)a1; /*0x67bf0b*/
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0; /*0x67bf19*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67bf1c*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67bf1f*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67bf23*/
    *(_DWORD *)a1 = &vt_VectorClass_TerrainTypeClass_const; /*0x67bf26*/
    if ( (_DWORD *)a1 != a5 ) /*0x67bf2c*/
    {
      TypeList_cptr_TerrainTypeClass::TryFreeAndClear(a1); /*0x67bf30*/
      v13 = a5[2]; /*0x67bf36*/
      *(_DWORD *)(a1 + 8) = v13; /*0x67bf3b*/
      if ( v13 ) /*0x67bf3e*/
      {
        v14 = __2_YAPAXI_Z(4 * v13); /*0x67bf48*/
        *(_DWORD *)(a1 + 4) = v14; /*0x67bf52*/
        if ( v14 ) /*0x67bf55*/
        {
          v15 = *(VectorClass **)(a1 + 8); /*0x67bf57*/
          v16 = 0; /*0x67bf5a*/
          *(_BYTE *)(a1 + 13) = 1; /*0x67bf5e*/
          if ( (int)v15 > 0 ) /*0x67bf62*/
          {
            do /*0x67bf76*/
            {
              *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v16) = *(_DWORD *)(a5[1] + 4 * v16); /*0x67bf6d*/
              ++v16; /*0x67bf73*/
            }
            while ( v16 < *(_DWORD *)(a1 + 8) ); /*0x67bf76*/
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 4) = 0; /*0x67bf7a*/
        *(_BYTE *)(a1 + 13) = 0; /*0x67bf7d*/
      }
    }
    *(_DWORD *)(a1 + 16) = a5[4]; /*0x67bf83*/
    *(_DWORD *)(a1 + 20) = a5[5]; /*0x67bf89*/
    *(_DWORD *)a1 = &vt_TypeList_TerrainTypeClass_const; /*0x67bf8c*/
  }
  return (VectorClass *)a1; /*0x67bf02*/
}


// ==== 0x0067BFA0  ObjectClass::System_Load_67BFA0  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_67BFA0(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == a2 ) /*0x67bfaa*/
    return this; /*0x67bfaa*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x67bfae*/
  v3 = a2[2]; /*0x67bfb1*/
  this->Capacity = v3; /*0x67bfb6*/
  if ( !v3 ) /*0x67bfb9*/
  {
    this->Items = 0; /*0x67bffa*/
    this->__pad_034 = 0; /*0x67c001*/
    return this; /*0x67c005*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x67bfc3*/
  this->Items = v4; /*0x67bfcb*/
  if ( !v4 ) /*0x67bfd0*/
    return this; /*0x67bfd0*/
  v5 = this->Capacity; /*0x67bfd2*/
  v6 = 0; /*0x67bfd5*/
  this->__pad_034 = 1; /*0x67bfd9*/
  if ( v5 <= 0 ) /*0x67bfdd*/
    return this; /*0x67bfdd*/
  do /*0x67bff1*/
  {
    *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67bfe8*/
    ++v6; /*0x67bfee*/
  }
  while ( v6 < this->Capacity ); /*0x67bff1*/
  return this; /*0x67bff5*/
}


// ==== 0x0067C010  _VectorClass_PBVVoxelAnimTypeClass::Constructor  this=VectorClass  sig=csp ====
VectorClass *__thiscall TypeList_VoxelAnim::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67c013*/
  *Block = &vt_VectorClass_VoxelAnimTypeClass_const; /*0x67c016*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x67c020*/
  {
    __3_YAXPAX_Z(v3); /*0x67c028*/
    *(Block + 1) = 0; /*0x67c030*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x67c03b*/
  *(Block + 2) = 0; /*0x67c041*/
  if ( (a2 & 1) != 0 ) /*0x67c048*/
    __3_YAXPAX_Z(Block); /*0x67c04b*/
  return (VectorClass *)Block; /*0x67c055*/
}


// ==== 0x0067C060  _DynamicVectorClass_PBVVoxelAnimTypeClass::Add  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall DynamicVectorClass_cptr_VoxelAnimTypeClass::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67c063*/
  *Block = &vt_VectorClass_VoxelAnimTypeClass_const; /*0x67c066*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x67c070*/
  {
    __3_YAXPAX_Z(v3); /*0x67c078*/
    *(Block + 1) = 0; /*0x67c080*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x67c08b*/
  *(Block + 2) = 0; /*0x67c091*/
  if ( (a2 & 1) != 0 ) /*0x67c098*/
    __3_YAXPAX_Z(Block); /*0x67c09b*/
  return (DynamicVector *)Block; /*0x67c0a5*/
}


// ==== 0x0067C0B0  _VectorClass_PBVSmudgeTypeClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall SmudgeTypeVector::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67c0b3*/
  *Block = &vt_VectorClass_SmudgeTypeClass_const; /*0x67c0b6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x67c0c0*/
  {
    __3_YAXPAX_Z(v3); /*0x67c0c8*/
    *(Block + 1) = 0; /*0x67c0d0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x67c0db*/
  *(Block + 2) = 0; /*0x67c0e1*/
  if ( (a2 & 1) != 0 ) /*0x67c0e8*/
    __3_YAXPAX_Z(Block); /*0x67c0eb*/
  return (VectorClass *)Block; /*0x67c0f5*/
}


// ==== 0x0067C100  _DynamicVectorClass_PBVSmudgeTypeClass::Constructor_0  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall TypeList_VoxelAnim::Constructor_0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67c103*/
  *Block = &vt_VectorClass_SmudgeTypeClass_const; /*0x67c106*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x67c110*/
  {
    __3_YAXPAX_Z(v3); /*0x67c118*/
    *(Block + 1) = 0; /*0x67c120*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x67c12b*/
  *(Block + 2) = 0; /*0x67c131*/
  if ( (a2 & 1) != 0 ) /*0x67c138*/
    __3_YAXPAX_Z(Block); /*0x67c13b*/
  return (DynamicVector *)Block; /*0x67c145*/
}


// ==== 0x0067C150  _VectorClass_PBVTerrainTypeClass::Constructor  this=VectorClass  sig=csp ====
VectorClass *__thiscall TypeList_cptr_TerrainTypeClass::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67c153*/
  *Block = &vt_VectorClass_TerrainTypeClass_const; /*0x67c156*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x67c160*/
  {
    __3_YAXPAX_Z(v3); /*0x67c168*/
    *(Block + 1) = 0; /*0x67c170*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x67c17b*/
  *(Block + 2) = 0; /*0x67c181*/
  if ( (a2 & 1) != 0 ) /*0x67c188*/
    __3_YAXPAX_Z(Block); /*0x67c18b*/
  return (VectorClass *)Block; /*0x67c195*/
}


// ==== 0x0067C1A0  _DynamicVectorClass_PBVTerrainTypeClass::Constructor_1  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall TypeList_VoxelAnim::Constructor_1(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67c1a3*/
  *Block = &vt_VectorClass_TerrainTypeClass_const; /*0x67c1a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x67c1b0*/
  {
    __3_YAXPAX_Z(v3); /*0x67c1b8*/
    *(Block + 1) = 0; /*0x67c1c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x67c1cb*/
  *(Block + 2) = 0; /*0x67c1d1*/
  if ( (a2 & 1) != 0 ) /*0x67c1d8*/
    __3_YAXPAX_Z(Block); /*0x67c1db*/
  return (DynamicVector *)Block; /*0x67c1e5*/
}


// ==== 0x0067C1F0  TypeList::CopyVoxelAnim  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList::CopyVoxelAnim(_DWORD *this, VectorClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x67c1fd*/
  this->Capacity = 0; /*0x67c200*/
  this->q030 = 1; /*0x67c203*/
  this->__pad_034 = 0; /*0x67c207*/
  *this = &vt_VectorClass_VoxelAnimTypeClass_const; /*0x67c20a*/
  if ( this != (_DWORD *)aP1 ) /*0x67c210*/
  {
    Vector::Cleanup2((int)this); /*0x67c212*/
    v3 = aP1->Capacity; /*0x67c218*/
    this->Capacity = v3; /*0x67c21d*/
    if ( v3 ) /*0x67c220*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67c226*/
      this->Items = v4; /*0x67c230*/
      if ( v4 ) /*0x67c233*/
      {
        v5 = this->Capacity; /*0x67c235*/
        v6 = 0; /*0x67c238*/
        this->__pad_034 = 1; /*0x67c23c*/
        if ( v5 > 0 ) /*0x67c240*/
        {
          do /*0x67c254*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *((_DWORD *)aP1->Items + v6); /*0x67c24b*/
            ++v6; /*0x67c251*/
          }
          while ( v6 < this->Capacity ); /*0x67c254*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x67c258*/
      this->__pad_034 = 0; /*0x67c25b*/
    }
  }
  this->q010 = aP1[1].vtable0; /*0x67c261*/
  this->q005 = aP1[1].Items; /*0x67c267*/
  *this = &vt_TypeList_VoxelAnimTypeClass_const; /*0x67c26a*/
  return this; /*0x67c272*/
}


// ==== 0x0067C280  SmudgeTypeList::Copy  this=VectorClass  sig=csp ====
_DWORD *__thiscall SmudgeTypeList::Copy(_DWORD *this, CCINIClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x67c28d*/
  this->Capacity = 0; /*0x67c290*/
  this->q030 = 1; /*0x67c293*/
  this->__pad_034 = 0; /*0x67c297*/
  *this = &vt_VectorClass_SmudgeTypeClass_const; /*0x67c29a*/
  if ( this != (_DWORD *)aP1 ) /*0x67c2a0*/
  {
    VectorClass::ClearAndFree((int)this); /*0x67c2a2*/
    v3 = aP1->headNode[1]; /*0x67c2a8*/
    this->Capacity = v3; /*0x67c2ad*/
    if ( v3 ) /*0x67c2b0*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67c2b6*/
      this->Items = v4; /*0x67c2c0*/
      if ( v4 ) /*0x67c2c3*/
      {
        v5 = this->Capacity; /*0x67c2c5*/
        v6 = 0; /*0x67c2c8*/
        this->__pad_034 = 1; /*0x67c2cc*/
        if ( v5 > 0 ) /*0x67c2d0*/
        {
          do /*0x67c2e4*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(aP1->headNode[0] + 4 * v6); /*0x67c2db*/
            ++v6; /*0x67c2e1*/
          }
          while ( v6 < this->Capacity ); /*0x67c2e4*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x67c2e8*/
      this->__pad_034 = 0; /*0x67c2eb*/
    }
  }
  this->q010 = aP1->sectionHead[0]; /*0x67c2f1*/
  this->q005 = aP1->sectionHead[1]; /*0x67c2f7*/
  *this = &vt_TypeList_SmudgeTypeClass_const; /*0x67c2fa*/
  return this; /*0x67c302*/
}


// ==== 0x0067C310  VoxelAnimTypeVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VoxelAnimTypeVector::Constructor(_DWORD *this, TechnoTypeClass *aP1, TechnoTypeClass *aP2)
{
  this->Items = 0; /*0x67c31b*/
  this->Capacity = aP1; /*0x67c31e*/
  this->q030 = 1; /*0x67c321*/
  this->__pad_034 = 0; /*0x67c325*/
  *this = &vt_VectorClass_VoxelAnimTypeClass_const; /*0x67c328*/
  if ( aP1 ) /*0x67c32e*/
  {
    if ( aP2 ) /*0x67c336*/
    {
      this->Items = aP2; /*0x67c338*/
      return this; /*0x67c33e*/
    }
    this->Items = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x67c34d*/
    this->__pad_034 = 1; /*0x67c350*/
  }
  return this; /*0x67c33d*/
}


// ==== 0x0067C360  DynamicVector::RemoveAt  this=DynamicVector  sig=csp ====
char __thiscall DynamicVector::RemoveAt(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = this->DynamicVector_field_0x10; /*0x67c360*/
  v3 = a2; /*0x67c363*/
  if ( a2 >= v2 ) /*0x67c369*/
    return 0; /*0x67c38c*/
  v4 = v2 - 1; /*0x67c36b*/
  this->DynamicVector_field_0x10 = v4; /*0x67c36e*/
  if ( a2 < v4 ) /*0x67c371*/
  {
    do /*0x67c384*/
    {
      ++v3; /*0x67c377*/
      *(_DWORD *)(this->Items + 4 * v3 - 4) = *(_DWORD *)(this->Items + 4 * v3); /*0x67c37b*/
    }
    while ( v3 < this->DynamicVector_field_0x10 ); /*0x67c384*/
  }
  return 1; /*0x67c389*/
}


// ==== 0x0067C3A0  Game::LockMutex  this=VectorClass  sig=csp ====
_DWORD *__thiscall Game::LockMutex(_DWORD *this, IUnknown *aP1, IUnknown *aP2)
{
  this->Items = 0; /*0x67c3ab*/
  this->Capacity = aP1; /*0x67c3ae*/
  this->q030 = 1; /*0x67c3b1*/
  this->__pad_034 = 0; /*0x67c3b5*/
  *this = &vt_VectorClass_SmudgeTypeClass_const; /*0x67c3b8*/
  if ( aP1 ) /*0x67c3be*/
  {
    if ( aP2 ) /*0x67c3c6*/
    {
      this->Items = aP2; /*0x67c3c8*/
      return this; /*0x67c3ce*/
    }
    this->Items = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x67c3dd*/
    this->__pad_034 = 1; /*0x67c3e0*/
  }
  return this; /*0x67c3cd*/
}


// ==== 0x0067C3F0  DynamicVector::RemoveAt2  this=DynamicVector  sig=csp ====
char __thiscall DynamicVector::RemoveAt2(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = this->DynamicVector_field_0x10; /*0x67c3f0*/
  v3 = a2; /*0x67c3f3*/
  if ( a2 >= v2 ) /*0x67c3f9*/
    return 0; /*0x67c41c*/
  v4 = v2 - 1; /*0x67c3fb*/
  this->DynamicVector_field_0x10 = v4; /*0x67c3fe*/
  if ( a2 < v4 ) /*0x67c401*/
  {
    do /*0x67c414*/
    {
      ++v3; /*0x67c407*/
      *(_DWORD *)(this->Items + 4 * v3 - 4) = *(_DWORD *)(this->Items + 4 * v3); /*0x67c40b*/
    }
    while ( v3 < this->DynamicVector_field_0x10 ); /*0x67c414*/
  }
  return 1; /*0x67c419*/
}


// ==== 0x0067C430  RulesClass::readIQ  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_67C430(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x67c43b*/
  this->Capacity = a2; /*0x67c43e*/
  this->q030 = 1; /*0x67c441*/
  this->__pad_034 = 0; /*0x67c445*/
  *this = &vt_VectorClass_TerrainTypeClass_const; /*0x67c448*/
  if ( a2 ) /*0x67c44e*/
  {
    if ( a3 ) /*0x67c456*/
    {
      this->Items = a3; /*0x67c458*/
      return this; /*0x67c45e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x67c46d*/
    this->__pad_034 = 1; /*0x67c470*/
  }
  return this; /*0x67c45d*/
}


// ==== 0x0067C480  sub_67C480  this=-  sig=ida-proto ====
int sub_67C480()
{
  dword_B053C8 = 0; /*0x67c482*/
  dword_B053CC = 0; /*0x67c487*/
  dword_B053D0 = 0; /*0x67c48c*/
  dword_B053D4 = 0; /*0x67c491*/
  return 0; /*0x67c496*/
}


// ==== 0x0067C4A0  sub_67C4A0  this=-  sig=ida-proto ====
void sub_67C4A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x67c4ac*/
  dbl_B053E0 = Math::Sqrt(v0 + v0); /*0x67c4be*/
}


// ==== 0x0067C4D0  sub_67C4D0  this=-  sig=ida-proto ====
void sub_67C4D0()
{
  dbl_B05430 = dbl_B053E0 / 60.0; /*0x67c4dc*/
}


// ==== 0x0067C4F0  sub_67C4F0  this=-  sig=ida-proto ====
void sub_67C4F0()
{
  dbl_B05418 = 1.0 / dbl_B05430; /*0x67c4fc*/
}


// ==== 0x0067C510  sub_67C510  this=-  sig=ida-proto ====
void sub_67C510()
{
  dbl_B05410 = 0.0174532925199433 * 45.0; /*0x67c51c*/
}


// ==== 0x0067C530  sub_67C530  this=-  sig=ida-proto ====
void sub_67C530()
{
  dbl_B053E8 = 0.0174532925199433 * 60.0; /*0x67c53c*/
}


// ==== 0x0067C550  sub_67C550  this=-  sig=ida-proto ====
void sub_67C550()
{
  dbl_B053C0 = 0.0174532925199433 * 90.0; /*0x67c55c*/
}


// ==== 0x0067C570  sub_67C570  this=-  sig=ida-proto ====
__int64 sub_67C570()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B053C0 - dbl_B053E8); /*0x67c582*/
  result = Math::RoundToInt(v0 * dbl_B053E0 * 0.5); /*0x67c596*/
  dword_B05438 = result; /*0x67c59b*/
  return result; /*0x67c5a0*/
}


// ==== 0x0067C5B0  sub_67C5B0  this=-  sig=ida-proto ====
void sub_67C5B0()
{
  dbl_B053F0 = Math::ArcTan((double)dword_B05438 * 0.00390625); /*0x67c5c7*/
}


// ==== 0x0067C5E0  sub_67C5E0  this=-  sig=ida-proto ====
void sub_67C5E0()
{
  dbl_B05408 = Math::ArcTan((double)(2 * dword_B05438) / dbl_B053E0); /*0x67c602*/
}


// ==== 0x0067C610  sub_67C610  this=-  sig=ida-proto ====
__int64 sub_67C610()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B05438) + 0.5); /*0x67c62b*/
  dword_B0542C = result; /*0x67c630*/
  return result; /*0x67c636*/
}


// ==== 0x0067C640  sub_67C640  this=-  sig=ida-proto ====
int sub_67C640()
{
  word_B053D8 = 0; /*0x67c642*/
  word_B053DA = 0; /*0x67c648*/
  return 0; /*0x67c64e*/
}


// ==== 0x0067C650  sub_67C650  this=-  sig=ida-proto ====
int sub_67C650()
{
  dword_B053F8 = 0; /*0x67c652*/
  dword_B053FC = 0; /*0x67c657*/
  dword_B05400 = 0; /*0x67c65c*/
  return 0; /*0x67c661*/
}


// ==== 0x0067C670  sub_67C670  this=-  sig=ida-proto ====
int sub_67C670()
{
  dword_B05428 = 0; /*0x67c675*/
  dword_B05420 = 128; /*0x67c67f*/
  dword_B05424 = 128; /*0x67c684*/
  return 128; /*0x67c689*/
}


// ==== 0x0067C690  Stream::ReadOLEObjects  this=Stream  sig=csp ====
HRESULT __thiscall Stream::ReadOLEObjects(LPSTREAM pStm)
{
  HRESULT result; // eax
  int v3; // ebx
  int v4; // [esp+10h] [ebp-8h] BYREF
  LPVOID ppvObj; // [esp+14h] [ebp-4h] BYREF

  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v4, 4, 0); /*0x67c6a4*/
  if ( result >= 0 ) /*0x67c6a9*/
  {
    v3 = 0; /*0x67c6af*/
    if ( v4 <= 0 ) /*0x67c6b3*/
    {
      return 0; /*0x67c6d5*/
    }
    else
    {
      while ( 1 ) /*0x67c6c6*/
      {
        result = OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj); /*0x67c6c6*/
        if ( result < 0 ) /*0x67c6ca*/
          break; /*0x67c6ca*/
        if ( ++v3 >= v4 ) /*0x67c6d3*/
          return 0; /*0x67c6d3*/
      }
    }
  }
  return result; /*0x67c6d7*/
}


// ==== 0x0067C6E0  Power::UpdateAll  this=Power  sig=csp ====
_DWORD *__thiscall Power_UpdateAll(_DWORD *this)
{
  int i; // esi
  int j; // esi
  int k; // esi
  int m; // esi
  int n; // esi
  int ii; // esi
  int jj; // esi
  int kk; // esi
  int mm; // esi
  int nn; // esi
  int i1; // esi
  int i2; // esi
  int i3; // esi
  int i4; // esi
  int i5; // esi
  int i6; // esi
  int i7; // esi
  int i8; // esi
  int i9; // esi
  int i10; // esi
  int i11; // esi
  int i12; // esi
  int i13; // esi
  int i14; // esi
  int i15; // esi
  int i16; // esi
  int i17; // esi
  int i18; // esi
  int i19; // esi
  int i20; // esi
  int i21; // esi
  int i22; // esi
  int i23; // esi
  int i24; // esi
  int i25; // esi
  int i26; // esi
  int i27; // esi
  int i28; // esi
  int i29; // esi
  int i30; // esi
  int i31; // esi
  int i32; // esi
  int i33; // esi
  int i34; // esi
  int i35; // esi
  int i36; // esi
  int i37; // esi
  int i38; // esi
  int v50; // eax
  int v51; // edx
  int v53; // [esp+C0h] [ebp-Ch] BYREF
  int v54; // [esp+C4h] [ebp-8h]
  int v55; // [esp+C8h] [ebp-4h]

  v53 = 0; /*0x67c6f2*/
  v54 = 0; /*0x67c6fa*/
  v55 = 0; /*0x67c702*/
  Power::ComputeHousePowerChecksum(&v53); /*0x67c70a*/
  for ( i = 0; i < g_SuperWeaponTypeArray; ++i ) /*0x67c718*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)g_SuperWeaponTypeCount + i) + 52))( /*0x67c72a*/
      *((_DWORD *)g_SuperWeaponTypeCount + i),
      &v53);
  for ( j = 0; j < HouseClass_Count; ++j ) /*0x67c740*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)&HouseClass_Array->__pad_0[4 * j] + 52))( /*0x67c752*/
      *(_DWORD *)&HouseClass_Array->__pad_0[4 * j],
      &v53);
  for ( k = 0; k < g_CrateCount; ++k ) /*0x67c768*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)g_UnitTypeCount2 + k) + 52))( /*0x67c77a*/
      *((_DWORD *)g_UnitTypeCount2 + k),
      &v53);
  for ( m = 0; m < MEMORY[0x8B4118]; ++m ) /*0x67c790*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0x8B410C] + m) + 52))( /*0x67c7a2*/
      *((_DWORD *)MEMORY[0x8B410C] + m),
      &v53);
  for ( n = 0; n < MEMORY[0xA8E358]; ++n ) /*0x67c7b8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA8E34C] + n) + 52))( /*0x67c7ca*/
      *((_DWORD *)MEMORY[0xA8E34C] + n),
      &v53);
  for ( ii = 0; ii < MEMORY[0xA83DF8]; ++ii ) /*0x67c7e0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA83DEC] + ii) + 52))( /*0x67c7f2*/
      *((_DWORD *)MEMORY[0xA83DEC] + ii),
      &v53);
  for ( jj = 0; jj < g_TriggerClassCount; ++jj ) /*0x67c808*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)g_TriggerTypeCount + jj) + 52))( /*0x67c81a*/
      *((_DWORD *)g_TriggerTypeCount + jj),
      &v53);
  for ( kk = 0; kk < MEMORY[0xA8EB50]; ++kk ) /*0x67c830*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA8EB44] + kk) + 52))( /*0x67c842*/
      *((_DWORD *)MEMORY[0xA8EB44] + kk),
      &v53);
  for ( mm = 0; mm < MEMORY[0xA8B228]; ++mm ) /*0x67c858*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA8B21C] + mm) + 52))( /*0x67c86a*/
      *((_DWORD *)MEMORY[0xA8B21C] + mm),
      &v53);
  for ( nn = 0; nn < MEMORY[0xA8E3A0]; ++nn ) /*0x67c880*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA8E394] + nn) + 52))( /*0x67c892*/
      *((_DWORD *)MEMORY[0xA8E394] + nn),
      &v53);
  for ( i1 = 0; i1 < MEMORY[0xA8B210]; ++i1 ) /*0x67c8a8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA8B204] + i1) + 52))( /*0x67c8ba*/
      *((_DWORD *)MEMORY[0xA8B204] + i1),
      &v53);
  for ( i2 = 0; i2 < MEMORY[0xA8E9B8]; ++i2 ) /*0x67c8d0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA8E9AC] + i2) + 52))( /*0x67c8e2*/
      *((_DWORD *)MEMORY[0xA8E9AC] + i2),
      &v53);
  for ( i3 = 0; i3 < MEMORY[0x8B4160]; ++i3 ) /*0x67c8f8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0x8B4154] + i3) + 52))( /*0x67c90a*/
      *((_DWORD *)MEMORY[0x8B4154] + i3),
      &v53);
  for ( i4 = 0; i4 < MEMORY[0xA8E8E0]; ++i4 ) /*0x67c920*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA8E8D4] + i4) + 52))( /*0x67c932*/
      *((_DWORD *)MEMORY[0xA8E8D4] + i4),
      &v53);
  for ( i5 = 0; i5 < MEMORY[0xA8ECB0]; ++i5 ) /*0x67c948*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA8ECA4] + i5) + 52))( /*0x67c95a*/
      *((_DWORD *)MEMORY[0xA8ECA4] + i5),
      &v53);
  for ( i6 = 0; i6 < MEMORY[0x8B40F8]; ++i6 ) /*0x67c970*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0x8B40EC] + i6) + 52))( /*0x67c982*/
      *((_DWORD *)MEMORY[0x8B40EC] + i6),
      &v53);
  for ( i7 = 0; i7 < dword_8B41D8; ++i7 ) /*0x67c998*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)unk_8B41CC + i7) + 52))(*((_DWORD *)unk_8B41CC + i7), &v53); /*0x67c9aa*/
  for ( i8 = 0; i8 < MEMORY[0x8872C0]; ++i8 ) /*0x67c9c0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0x8872B4] + i8) + 52))( /*0x67c9d2*/
      *((_DWORD *)MEMORY[0x8872B4] + i8),
      &v53);
  for ( i9 = 0; i9 < MEMORY[0xB0E790]; ++i9 ) /*0x67c9e8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xB0E784] + i9) + 52))( /*0x67c9fa*/
      *((_DWORD *)MEMORY[0xB0E784] + i9),
      &v53);
  for ( i10 = 0; i10 < MEMORY[0xB0E730]; ++i10 ) /*0x67ca10*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xB0E724] + i10) + 52))( /*0x67ca22*/
      *((_DWORD *)MEMORY[0xB0E724] + i10),
      &v53);
  for ( i11 = 0; i11 < dword_8B4188; ++i11 ) /*0x67ca38*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)unk_8B417C + i11) + 52))(*((_DWORD *)unk_8B417C + i11), &v53); /*0x67ca4a*/
  for ( i12 = 0; i12 < MEMORY[0xA8EAF8]; ++i12 ) /*0x67ca60*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA8EAEC] + i12) + 52))( /*0x67ca72*/
      *((_DWORD *)MEMORY[0xA8EAEC] + i12),
      &v53);
  for ( i13 = 0; i13 < MEMORY[0xB0E668]; ++i13 ) /*0x67ca88*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xB0E65C] + i13) + 52))( /*0x67ca9a*/
      *((_DWORD *)MEMORY[0xB0E65C] + i13),
      &v53);
  for ( i14 = 0; i14 < MEMORY[0xB0F1B0]; ++i14 ) /*0x67cab0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xB0F1A4] + i14) + 52))( /*0x67cac2*/
      *((_DWORD *)MEMORY[0xB0F1A4] + i14),
      &v53);
  for ( i15 = 0; i15 < MEMORY[0xA83E40]; ++i15 ) /*0x67cad8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA83E34] + i15) + 52))( /*0x67caea*/
      *((_DWORD *)MEMORY[0xA83E34] + i15),
      &v53);
  for ( i16 = 0; i16 < MEMORY[0xA8EB38]; ++i16 ) /*0x67cb00*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA8EB2C] + i16) + 52))( /*0x67cb12*/
      *((_DWORD *)MEMORY[0xA8EB2C] + i16),
      &v53);
  for ( i17 = 0; i17 < MEMORY[0x887398]; ++i17 ) /*0x67cb28*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0x88738C] + i17) + 52))( /*0x67cb3a*/
      *((_DWORD *)MEMORY[0x88738C] + i17),
      &v53);
  for ( i18 = 0; i18 < MEMORY[0x8874D0]; ++i18 ) /*0x67cb50*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0x8874C4] + i18) + 52))( /*0x67cb62*/
      *((_DWORD *)MEMORY[0x8874C4] + i18),
      &v53);
  for ( i19 = 0; i19 < MEMORY[0x887578]; ++i19 ) /*0x67cb78*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0x88756C] + i19) + 52))( /*0x67cb8a*/
      *((_DWORD *)MEMORY[0x88756C] + i19),
      &v53);
  for ( i20 = 0; i20 < MEMORY[0xA83DA8]; ++i20 ) /*0x67cba0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA83D9C] + i20) + 52))( /*0x67cbb2*/
      *((_DWORD *)MEMORY[0xA83D9C] + i20),
      &v53);
  for ( i21 = 0; i21 < MEMORY[0xA83DD8]; ++i21 ) /*0x67cbc8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA83DCC] + i21) + 52))( /*0x67cbda*/
      *((_DWORD *)MEMORY[0xA83DCC] + i21),
      &v53);
  for ( i22 = 0; i22 < g_GameCleanupState; ++i22 ) /*0x67cbf0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8020C + i22) + 52))( /*0x67cc02*/
      *((_DWORD *)dword_A8020C + i22),
      &v53);
  for ( i23 = 0; i23 < MEMORY[0xA83D78]; ++i23 ) /*0x67cc18*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA83D6C] + i23) + 52))( /*0x67cc2a*/
      *((_DWORD *)MEMORY[0xA83D6C] + i23),
      &v53);
  for ( i24 = 0; i24 < g_BulletTypeInitState; ++i24 ) /*0x67cc40*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A83C84 + i24) + 52))( /*0x67cc52*/
      *((_DWORD *)dword_A83C84 + i24),
      &v53);
  for ( i25 = 0; i25 < MEMORY[0xA8ED50]; ++i25 ) /*0x67cc68*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA8ED44] + i25) + 52))( /*0x67cc7a*/
      *((_DWORD *)MEMORY[0xA8ED44] + i25),
      &v53);
  for ( i26 = 0; i26 < dword_B72618; ++i26 ) /*0x67cc90*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_B7260C + i26) + 52))( /*0x67cca2*/
      *((_DWORD *)dword_B7260C + i26),
      &v53);
  for ( i27 = 0; i27 < MEMORY[0xA8EC28]; ++i27 ) /*0x67ccb8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA8EC1C] + i27) + 52))( /*0x67ccca*/
      *((_DWORD *)MEMORY[0xA8EC1C] + i27),
      &v53);
  for ( i28 = 0; i28 < MEMORY[0xA83D90]; ++i28 ) /*0x67cce0*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)&MEMORY[0xA83D84]->vtable0[4 * i28] + 52))( /*0x67ccf2*/
      *(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * i28],
      &v53);
  for ( i29 = 0; i29 < g_BridgeCellPool; ++i29 ) /*0x67cd08*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_ABCA14 + i29) + 52))( /*0x67cd1a*/
      *((_DWORD *)dword_ABCA14 + i29),
      &v53);
  for ( i30 = 0; i30 < dword_8B41A0; ++i30 ) /*0x67cd30*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)unk_8B4194 + i30) + 52))(*((_DWORD *)unk_8B4194 + i30), &v53); /*0x67cd42*/
  for ( i31 = 0; i31 < MEMORY[0x8B4148]; ++i31 ) /*0x67cd58*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0x8B413C] + i31) + 52))( /*0x67cd6a*/
      *((_DWORD *)MEMORY[0x8B413C] + i31),
      &v53);
  for ( i32 = 0; i32 < MEMORY[0x8B4130]; ++i32 ) /*0x67cd80*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0x8B4124] + i32) + 52))( /*0x67cd92*/
      *((_DWORD *)MEMORY[0x8B4124] + i32),
      &v53);
  for ( i33 = 0; i33 < MEMORY[0xB0F4F8]; ++i33 ) /*0x67cda8*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)&MEMORY[0xB0F4EC]->__pad_0[4 * i33] + 52))( /*0x67cdba*/
      *(_DWORD *)&MEMORY[0xB0F4EC]->__pad_0[4 * i33],
      &v53);
  for ( i34 = 0; i34 < MEMORY[0x8A3880]; ++i34 ) /*0x67cdd0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0x8A3874] + i34) + 52))( /*0x67cde2*/
      *((_DWORD *)MEMORY[0x8A3874] + i34),
      &v53);
  for ( i35 = 0; i35 < MEMORY[0xA8E340]; ++i35 ) /*0x67cdf8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA8E334] + i35) + 52))( /*0x67ce0a*/
      *((_DWORD *)MEMORY[0xA8E334] + i35),
      &v53);
  for ( i36 = 0; i36 < dword_A83CC8; ++i36 ) /*0x67ce20*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A83CBC + i36) + 52))( /*0x67ce32*/
      *((_DWORD *)dword_A83CBC + i36),
      &v53);
  for ( i37 = 0; i37 < MEMORY[0xA8E328]; ++i37 ) /*0x67ce48*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA8E31C] + i37) + 52))( /*0x67ce5a*/
      *((_DWORD *)MEMORY[0xA8E31C] + i37),
      &v53);
  for ( i38 = 0; i38 < MEMORY[0xA8E998]; ++i38 ) /*0x67ce70*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)MEMORY[0xA8E98C] + i38) + 52))( /*0x67ce82*/
      *((_DWORD *)MEMORY[0xA8E98C] + i38),
      &v53);
  if ( HouseClass_Player ) /*0x67ce96*/
    Power::TimerProcess(*((_DWORD *)HouseClass_Player + 12)); /*0x67cea0*/
  Power::TimerProcess((int)MEMORY[0xA8ED84]); /*0x67ceb0*/
  Power::TimerProcess((int)MEMORY[0xA8ECC8]); /*0x67cebf*/
  v50 = v54; /*0x67ceca*/
  *this = v53; /*0x67cece*/
  v51 = v55; /*0x67ced0*/
  this->Power_field_0x4 = v50; /*0x67ced5*/
  this->Power_field_0x8 = v51; /*0x67cedb*/
  return this; /*0x67ced4*/
}


// ==== 0x0067CEF0  SaveScenarioClassGame_AdjustMPSaveFileName  this=char*  sig=csp ====
char __fastcall SaveScenarioClassGame_AdjustMPSaveFileName(LPCCH lpMultiByteStr, wchar_t *Source, int a3)
{
  int v6; // eax
  char v7; // bl
  IStorage *ppstgOpen; // [esp+50h] [ebp-490h] BYREF
  int v9; // [esp+54h] [ebp-48Ch] BYREF
  int v10; // [esp+58h] [ebp-488h] BYREF
  LPSTREAM pStm; // [esp+5Ch] [ebp-484h] BYREF
  LPVOID ppv; // [esp+60h] [ebp-480h] BYREF
  FILETIME FileTime; // [esp+64h] [ebp-47Ch] BYREF
  WCHAR WideCharStr[64]; // [esp+6Ch] [ebp-474h] BYREF
  wchar_t v15[506]; // [esp+ECh] [ebp-3F4h] BYREF

  Debug::Log(); /*0x67cf05*/
  ppstgOpen = 0; /*0x67cf1b*/
  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 64); /*0x67cf1f*/
  ComPtr::ReleaseSimple((int *)&ppstgOpen); /*0x67cf29*/
  ppstgOpen = 0; /*0x67cf3e*/
  if ( StgCreateDocfile(WideCharStr, 0x1012u, 0, &ppstgOpen) < 0 ) /*0x67cf4a*/
  {
    ComPtr::ReleaseSimple((int *)&ppstgOpen); /*0x67cf50*/
    return 0; /*0x67cf61*/
  }
  GameState::Reset(v15); /*0x67cf6b*/
  Map_Save_681080(v15, MEMORY[0x83D560]); /*0x67cf7d*/
  Map_Save_6810A0(v15, Source); /*0x67cf8a*/
  Map_Save(v15, 1); /*0x67cf98*/
  Map_Save_6810D0(v15, *(wchar_t **)(*((_DWORD *)HouseClass_Player + 13) + 96)); /*0x67cfb1*/
  Map_Save_681110(v15, *((_DWORD *)MEMORY[0xA8B230] + 3379)); /*0x67cfca*/
  Map_Save_681130(v15, *((_DWORD *)MEMORY[0xA8B230] + 1173)); /*0x67cfe2*/
  Map_Save_6811C0((char *)v15, MEMORY[0x83D5BC]); /*0x67cff3*/
  Map_Save_6812C0(v15, MEMORY[0xA8B238][0]); /*0x67d006*/
  CoFileTimeNow(&FileTime); /*0x67d010*/
  Map_Save_681280(v15, &FileTime); /*0x67d022*/
  Map_Save_681200(v15, &FileTime); /*0x67d033*/
  Map_Save_681240(v15, &FileTime); /*0x67d044*/
  GameOptions::SaveLoad((int)v15, (int *)ppstgOpen); /*0x67d055*/
  v10 = 0; /*0x67d05a*/
  if ( !ppstgOpen ) /*0x67d064*/
    WinAPI::Wrapper(-2147467261); /*0x67d06b*/
  if ( ppstgOpen->lpVtbl->CreateStream(ppstgOpen, (const OLECHAR *)&MEMORY[0x83D5A8], 4114, 0, 0, (IStream **)&v10) < 0 ) /*0x67d08d*/
  {
    if ( v10 ) /*0x67d095*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x67d09a*/
    if ( ppstgOpen ) /*0x67d0a3*/
    {
LABEL_9:
      ppstgOpen->lpVtbl->Release(ppstgOpen); /*0x67d0a9*/
      return 0; /*0x67d0bb*/
    }
    return 0; /*0x67d0a3*/
  }
  v9 = 0; /*0x67d0c2*/
  Game::readIniSettings(&v9); /*0x67d0c6*/
  if ( CoCreateInstance(&stru_7E9540, 0, 7u, &riid, &ppv) >= 0 ) /*0x67d0e5*/
  {
    if ( OleRun((LPUNKNOWN)ppv) >= 0 ) /*0x67d0f4*/
      (**(void (__stdcall ***)(LPVOID, IID *, int *))ppv)(ppv, &MEMORY[0x83D598], &v9); /*0x67d107*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x67d110*/
  }
  if ( !v9 ) /*0x67d119*/
    WinAPI::Wrapper(-2147467261); /*0x67d120*/
  if ( (*(int (__stdcall **)(int, int))(*(_DWORD *)v9 + 12))(v9, v10) < 0 ) /*0x67d136*/
  {
    Debug::Log(); /*0x67d13d*/
    if ( v9 ) /*0x67d14b*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x67d150*/
    if ( v10 ) /*0x67d159*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x67d15e*/
    if ( ppstgOpen ) /*0x67d167*/
      ppstgOpen->lpVtbl->Release(ppstgOpen); /*0x67d16c*/
    return 0; /*0x67d17b*/
  }
  pStm = 0; /*0x67d182*/
  if ( v9 ) /*0x67d188*/
  {
    v6 = Game::validateScenario(&pStm, &v9); /*0x67d193*/
    if ( v6 < 0 && v6 != -2147467262 ) /*0x67d1a1*/
      WinAPI::Wrapper(v6); /*0x67d1a4*/
  }
  v7 = SaveGame::Start(pStm); /*0x67d1b4*/
  if ( !v9 ) /*0x67d1bc*/
    WinAPI::Wrapper(-2147467261); /*0x67d1c3*/
  if ( (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v9 + 16))(v9, 0) < 0 ) /*0x67d1d5*/
  {
    if ( pStm ) /*0x67d1dd*/
      (*(void (__stdcall **)(LPSTREAM))(*(_DWORD *)pStm->__pad_0 + 8))(pStm); /*0x67d1e2*/
    if ( v9 ) /*0x67d1eb*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x67d1f0*/
    if ( v10 ) /*0x67d1f9*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x67d1fe*/
    if ( ppstgOpen ) /*0x67d207*/
      goto LABEL_9; /*0x67d207*/
    return 0; /*0x67d207*/
  }
  if ( !v10 ) /*0x67d228*/
    WinAPI::Wrapper(-2147467261); /*0x67d22f*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x67d23b*/
  v10 = 0; /*0x67d23e*/
  if ( !ppstgOpen ) /*0x67d248*/
    WinAPI::Wrapper(-2147467261); /*0x67d24f*/
  if ( ppstgOpen->lpVtbl->Commit(ppstgOpen, 0) < 0 ) /*0x67d261*/
  {
    if ( pStm ) /*0x67d269*/
      (*(void (__stdcall **)(LPSTREAM))(*(_DWORD *)pStm->__pad_0 + 8))(pStm); /*0x67d26e*/
    if ( v9 ) /*0x67d277*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x67d27c*/
    if ( v10 ) /*0x67d285*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x67d28a*/
    if ( ppstgOpen ) /*0x67d293*/
      ppstgOpen->lpVtbl->Release(ppstgOpen); /*0x67d298*/
    return 0; /*0x67d2a7*/
  }
  Debug::Log(); /*0x67d2b1*/
  if ( pStm ) /*0x67d2bf*/
    (*(void (__stdcall **)(LPSTREAM))(*(_DWORD *)pStm->__pad_0 + 8))(pStm); /*0x67d2c4*/
  if ( v9 ) /*0x67d2cd*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x67d2d2*/
  if ( v10 ) /*0x67d2db*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x67d2e0*/
  if ( ppstgOpen ) /*0x67d2e9*/
    ppstgOpen->lpVtbl->Release(ppstgOpen); /*0x67d2ee*/
  return v7; /*0x67cf57*/
}


// ==== 0x0067D300  SaveGame::Start  this=SaveGame  sig=csp ====
char __thiscall SaveGame::Start(LPSTREAM pStm)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // eax
  int v5; // ebx
  char result; // al
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  int v26; // ebx
  int v27; // eax
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  int v32; // ebx
  int v33; // eax
  int v34; // ebx
  int v35; // eax
  int v36; // ebx
  int v37; // eax
  int v38; // ebx
  int v39; // eax
  int v40; // ebx
  int v41; // eax
  int v42; // ebx
  int v43; // eax
  int v44; // ebx
  int v45; // eax
  int v46; // ebx
  int v47; // eax
  int i; // ebx
  int v49; // eax
  int j; // ebx
  int v51; // eax
  int v52; // ebx
  int v53; // eax
  int v54; // ebx
  int v55; // ecx
  int v56; // ecx
  int v57; // ebx
  int v58; // edx
  LPPERSISTSTREAM pPStm; // [esp+35Ch] [ebp-8h] BYREF
  LPPERSISTSTREAM v60; // [esp+360h] [ebp-4h] BYREF

  ScenarioClass::SaveLoad_Prefix((DWORD *)MEMORY[0xA8B230], (int *)pStm->__pad_0);
  SaveGame::SaveBlock68(&MEMORY[0x89F690].__pad_14B0[11680], (int)pStm);
  RulesClass::SaveLoad_Prefix(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9108], (int *)pStm->__pad_0);
  v2 = *(_DWORD *)pStm->__pad_0;
  v60 = *(LPPERSISTSTREAM *)&MEMORY[0x89F690].__pad_579C[62260];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v2 + 16))(pStm, &v60, 4, 0) < 0 )
    return 0;
  v3 = 0;
  if ( (int)v60 > 0 )
  {
    do
    {
      pPStm = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62248]
                                                                       + 4 * v3))(
             *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62248] + 4 * v3),
             &IID_IPersistStream,
             &pPStm) < 0
        || OleSaveToStream(pPStm, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm) < 0 )
      {
        return 0;
      }
    }
    while ( ++v3 < (int)v60 );
  }
  MouseClass::DrawCursor((int *)&MEMORY[0x87F7E8], pStm);
  v4 = *(_DWORD *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&MEMORY[0x89F690].__pad_579C[62236];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v4 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v5 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62224]
                                                                       + 4 * v5))(
             *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62224] + 4 * v5),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v5 < (int)pPStm );
  }
  if ( SaveGame::LoadMainGameState((int *)pStm->__pad_0) < 0 )
    return 0;
  LayerClass::Save(&MEMORY[0x87F778], (RadarClass *)pStm);
  if ( OleSaveToStream(*(LPPERSISTSTREAM *)&MEMORY[0x87F8E4].__pad_5568[9432], pStm) < 0 )
    return 0;
  v7 = *(_DWORD *)pStm->__pad_0;
  pPStm = (LPPERSISTSTREAM)g_SuperWeaponTypeArray;
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v7 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v8 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***((int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))g_SuperWeaponTypeCount + v8))(
             *((_DWORD *)g_SuperWeaponTypeCount + v8),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v8 < (int)pPStm );
  }
  v9 = *(_DWORD *)pStm->__pad_0;
  pPStm = (LPPERSISTSTREAM)HouseClass_Count;
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v9 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v10 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))&HouseClass_Array->__pad_0[4 * v10])(
             *(_DWORD *)&HouseClass_Array->__pad_0[4 * v10],
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v10 < (int)pPStm );
  }
  v11 = *(_DWORD *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&MEMORY[0x89F690].__pad_579C[62188];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v11 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v12 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62176]
                                                                       + 4 * v12))(
             *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62176] + 4 * v12),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v12 < (int)pPStm );
  }
  v13 = *(_DWORD *)pStm->__pad_0;
  pPStm = (LPPERSISTSTREAM)g_CrateCount;
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v13 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v14 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))&g_UnitTypeCount2->__pad_0[4 * v14])(
             *(_DWORD *)&g_UnitTypeCount2->__pad_0[4 * v14],
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v14 < (int)pPStm );
  }
  v15 = *(_DWORD *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&MEMORY[0xA8D63C].__pad_BC0[348];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v15 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v16 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[336]
                                                                       + 4 * v16))(
             *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[336] + 4 * v16),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v16 < (int)pPStm );
  }
  v17 = *(_DWORD *)pStm->__pad_0;
  pPStm = (LPPERSISTSTREAM)MEMORY[0xA83DF8];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v17 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v18 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))&MEMORY[0xA83DEC]->__pad_0[4 * v18])(
             *(_DWORD *)&MEMORY[0xA83DEC]->__pad_0[4 * v18],
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v18 < (int)pPStm );
  }
  v19 = *(_DWORD *)pStm->__pad_0;
  pPStm = (LPPERSISTSTREAM)g_TriggerClassCount;
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v19 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v20 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***((int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))g_TriggerTypeCount + v20))(
             *((_DWORD *)g_TriggerTypeCount + v20),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v20 < (int)pPStm );
  }
  v21 = *(_DWORD *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&MEMORY[0xA8D63C].__pad_14B0[100];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v21 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v22 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[88]
                                                                       + 4 * v22))(
             *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[88] + 4 * v22),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v22 < (int)pPStm );
  }
  v23 = *(_DWORD *)pStm->__pad_0;
  pPStm = (LPPERSISTSTREAM)MEMORY[0xA8B228];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v23 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v24 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))&MEMORY[0xA8B21C]->__pad_0[4 * v24])(
             *(_DWORD *)&MEMORY[0xA8B21C]->__pad_0[4 * v24],
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v24 < (int)pPStm );
  }
  v25 = *(_DWORD *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&MEMORY[0xA8D63C].__pad_BC0[420];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v25 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v26 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[408]
                                                                       + 4 * v26))(
             *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[408] + 4 * v26),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v26 < (int)pPStm );
  }
  v27 = *(_DWORD *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&MEMORY[0xA8D63C].__pad_1258[292];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v27 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v28 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[280]
                                                                       + 4 * v28))(
             *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[280] + 4 * v28),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v28 < (int)pPStm );
  }
  v29 = *(_DWORD *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&MEMORY[0xA8D63C].__pad_1258[76];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v29 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v30 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[64]
                                                                       + 4 * v30))(
             *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[64] + 4 * v30),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v30 < (int)pPStm );
  }
  v31 = *(_DWORD *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&MEMORY[0xA8D63C].__pad_14B0[452];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v31 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v32 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[440]
                                                                       + 4 * v32))(
             *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[440] + 4 * v32),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v32 < (int)pPStm );
  }
  v33 = *(_DWORD *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&MEMORY[0x89F690].__pad_579C[62156];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v33 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v34 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62144]
                                                                       + 4 * v34))(
             *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62144] + 4 * v34),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v34 < (int)pPStm );
  }
  v35 = *(_DWORD *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&MEMORY[0x89F690].__pad_579C[62380];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v35 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v36 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62368]
                                                                       + 4 * v36))(
             *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62368] + 4 * v36),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v36 < (int)pPStm );
  }
  v37 = *(_DWORD *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&MEMORY[0x87F8E4].__pad_5568[9332];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v37 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v38 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9320]
                                                                       + 4 * v38))(
             *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9320] + 4 * v38),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v38 < (int)pPStm );
  }
  v39 = *(_DWORD *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&MEMORY[0xB077F8].__pad_579C[6140];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v39 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v40 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6128]
                                                                       + 4 * v40))(
             *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6128] + 4 * v40),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v40 < (int)pPStm );
  }
  v41 = *(_DWORD *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&MEMORY[0xB077F8].__pad_579C[6044];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v41 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v42 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6032]
                                                                       + 4 * v42))(
             *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6032] + 4 * v42),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v42 < (int)pPStm );
  }
  v43 = *(_DWORD *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&MEMORY[0x89F690].__pad_579C[62300];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v43 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v44 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62288]
                                                                       + 4 * v44))(
             *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62288] + 4 * v44),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v44 < (int)pPStm );
  }
  v45 = *(_DWORD *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&MEMORY[0xA8D63C].__pad_14B0[12];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v45 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v46 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)MEMORY[0xA8D63C].__pad_14B0 + 4 * v46))(
             *(_DWORD *)(*(_DWORD *)MEMORY[0xA8D63C].__pad_14B0 + 4 * v46),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v46 < (int)pPStm );
  }
  v47 = *(_DWORD *)pStm->__pad_0;
  pPStm = (LPPERSISTSTREAM)MEMORY[0xA8B210];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v47 + 16))(pStm, &pPStm, 4, 0) >= 0 )
  {
    for ( i = 0; i < (int)pPStm; ++i )
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))&MEMORY[0xA8B204]->__pad_0[4 * i])(
             *(_DWORD *)&MEMORY[0xA8B204]->__pad_0[4 * i],
             &IID_IPersistStream,
             &v60) < 0 )
        break;
      if ( OleSaveToStream(v60, pStm) < 0 )
        break;
      if ( (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
        break;
    }
  }
  v49 = *(_DWORD *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&MEMORY[0xB077F8].__pad_579C[5844];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v49 + 16))(pStm, &pPStm, 4, 0) >= 0 )
  {
    for ( j = 0; j < (int)pPStm; ++j )
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[5832]
                                                                       + 4 * j))(
             *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[5832] + 4 * j),
             &IID_IPersistStream,
             &v60) < 0 )
        break;
      if ( OleSaveToStream(v60, pStm) < 0 )
        break;
      if ( (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
        break;
    }
  }
  v51 = *(_DWORD *)pStm->__pad_0;
  pPStm = *(LPPERSISTSTREAM *)&MEMORY[0xB077F8].__pad_579C[8732];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v51 + 16))(pStm, &pPStm, 4, 0) < 0 )
    return 0;
  v52 = 0;
  if ( (int)pPStm > 0 )
  {
    do
    {
      v60 = 0;
      if ( (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[8720]
                                                                       + 4 * v52))(
             *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[8720] + 4 * v52),
             &IID_IPersistStream,
             &v60) < 0
        || OleSaveToStream(v60, pStm) < 0
        || (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)v60 + 8))(v60) < 0 )
      {
        return 0;
      }
    }
    while ( ++v52 < (int)pPStm );
  }
  if ( SaveGame_Start(pStm, (int)&MEMORY[0xA83E30]) < 0 )
    return 0;
  if ( SaveGame_Start_67FE70(pStm, (int)&MEMORY[0xA8D63C].__pad_14B0[60]) < 0 )
    return 0;
  if ( SaveGame_Start_67FEF0(pStm, (int)&MEMORY[0x87F8E4].__pad_5568[9532]) < 0 )
    return 0;
  if ( SaveGame_Start_67FF70(pStm, (int)&MEMORY[0x87F8E4].__pad_5568[9844]) < 0 )
    return 0;
  if ( SaveGame_Start_67FFF0(pStm, (int)&MEMORY[0x87F8E4].__pad_5568[10012]) < 0 )
    return 0;
  if ( SaveGame_Start_680070(pStm, (int)&MEMORY[0xA83D98]) < 0 )
    return 0;
  if ( SaveGame_Start_6800F0(pStm, (int)&MEMORY[0xA83DC8]) < 0 )
    return 0;
  if ( SaveGame_Start_680170(pStm, (int)&MEMORY[0xA83D68]) < 0 )
    return 0;
  if ( SaveGame_Start_6801F0(pStm, (int)&dword_A80208) < 0 )
    return 0;
  if ( SaveGame_Start_680270(pStm, (int)&BulletTypeClass_Array) < 0 )
    return 0;
  if ( SaveGame_Start_6802F0(pStm, (int)&MEMORY[0xA8D63C].__pad_14B0[596]) < 0 )
    return 0;
  if ( SaveGame_Start_680370(pStm, (int)&dword_B72608) < 0 )
    return 0;
  if ( SaveGame_Start_6803F0(pStm, (int)&MEMORY[0xA8D63C].__pad_14B0[300]) < 0 )
    return 0;
  if ( SaveGame_Start_680470(pStm, (int)&MEMORY[0xA83D80]) < 0 )
    return 0;
  if ( SaveGame_Start_6804F0(pStm, (int)&dword_ABCA10) < 0 )
    return 0;
  if ( SaveGame_Start_680570(pStm, (int)&MEMORY[0x89F690].__pad_579C[62308]) < 0 )
    return 0;
  if ( SaveGame_Start_6805F0(pStm, (int)&MEMORY[0x89F690].__pad_579C[62196]) < 0 )
    return 0;
  if ( SaveGame_Start_680670(pStm, (int)&MEMORY[0xB077F8].__pad_579C[9556]) < 0 )
    return 0;
  if ( SaveGame_Start_6806F0(pStm, (int)&MEMORY[0x89F690].__pad_14B0[11568]) < 0 )
    return 0;
  if ( SaveGame_Start_680770(pStm, (int)&MEMORY[0xA8D63C].__pad_BC0[308]) < 0 )
    return 0;
  if ( SaveGame_Start_6807F0(pStm, (int)&dword_A83CB8) < 0 )
    return 0;
  v53 = *(_DWORD *)pStm->__pad_0;
  v60 = (LPPERSISTSTREAM)MEMORY[0xA83D60];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v53 + 16))(pStm, &v60, 4, 0) < 0 )
    return 0;
  v54 = 0;
  if ( (int)v60 > 0 )
  {
    do
    {
      v55 = *(_DWORD *)pStm->__pad_0;
      pPStm = *(LPPERSISTSTREAM *)&MEMORY[0xA83D54]->__pad_0[4 * v54];
      if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v55 + 16))(pStm, &pPStm, 4, 0) < 0 )
        return 0;
    }
    while ( ++v54 < (int)v60 );
  }
  v56 = *(_DWORD *)pStm->__pad_0;
  v60 = *(LPPERSISTSTREAM *)&MEMORY[0x89F690].__pad_579C[62404];
  if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v56 + 16))(pStm, &v60, 4, 0) < 0 )
    return 0;
  v57 = 0;
  if ( (int)v60 > 0 )
  {
    do
    {
      v58 = *(_DWORD *)pStm->__pad_0;
      pPStm = *(LPPERSISTSTREAM *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62392] + 4 * v57);
      if ( (*(int (__stdcall **)(LPSTREAM, LPPERSISTSTREAM *, int, _DWORD))(v58 + 16))(pStm, &pPStm, 4, 0) < 0 )
        return 0;
    }
    while ( ++v57 < (int)v60 );
  }
  if ( SaveGame_Start_680870(pStm, (int)&MEMORY[0xA8D63C].__pad_BC0[284]) < 0 )
    return 0;
  if ( SaveGame_Start_6808F0(pStm, (int)&MEMORY[0xA8D63C].__pad_1258[244]) < 0 )
    return 0;
  if ( SaveGame_Start_680970(pStm, (int)&MEMORY[0x89F690].__pad_579C[61156]) < 0 )
    return 0;
  if ( SaveGame_Start_6809F0(pStm, (int)&MEMORY[0x87F8E4].__pad_5568[21156]) < 0 )
    return 0;
  if ( SaveGame_Start_680A70(pStm, (int)&MEMORY[0xA8D63C].__pad_14B0[332]) < 0 )
    return 0;
  result = SaveGame::LoadVeinholeData((int *)pStm->__pad_0);
  if ( result )
  {
    result = SaveGame::SaveTriggerEvents((int *)pStm->__pad_0);
    if ( result )
    {
      if ( SaveGame_Start_680AF0(pStm, (int)&dword_89E0F0) >= 0 )
      {
        if ( SaveGame_Start_680B70(pStm, (int)&MEMORY[0x89F690].__pad_71C[1116]) >= 0 )
        {
          if ( SaveGame_Start_680BF0(pStm, (int)(&g_MatrixTransformState + 5824)) >= 0 )
          {
            if ( SaveGame_Start_680C70(pStm, (int)&MEMORY[0xB077F8].__pad_579C[7372]) >= 0 )
            {
              if ( SaveGame_Start_680CF0(pStm, (int)&MEMORY[0x87F8E4].__pad_5568[20844]) >= 0 )
              {
                if ( SaveGame_Start_680D70(pStm, (int)&MEMORY[0xB077F8].__pad_14B0[11224]) >= 0 )
                {
                  if ( SaveGame_Start_680DF0(pStm, (int)&MEMORY[0xB077F8].__pad_14B0[10568]) >= 0 )
                  {
                    if ( SaveGame::SaveIteratedData(&MEMORY[0x87F8E4].__pad_5568[10812], (int)pStm) >= 0 )
                    {
                      if ( SaveGame::WriteDataArray(&g_MissionQueueFrame, (int *)pStm->__pad_0) >= 0 )
                      {
                        if ( SaveGame::LoadArrayData(&MEMORY[0x87F5D8], (int *)pStm->__pad_0) >= 0 )
                        {
                          if ( SaveGame_Start_680E70(pStm, (int)&dword_89C668) >= 0 )
                          {
                            if ( SaveGame_Start_680EF0(pStm, (int)&RadSiteClass_Array) >= 0 )
                            {
                              if ( MEMORY[0xA8B238] != (CellStruct *)5 )
                                return SaveGame::SaveAudioQueueItems((int *)pStm->__pad_0) >= 0
                                    && SaveGame::WriteMagicHeader((int *)pStm->__pad_0) >= 0
                                    && SaveGame::VtableDispatch(&g_BuildingTypeClass_Count, (int)pStm) >= 0;
                              Debug::Log();
                              if ( SaveGame::SaveAudioData(&MEMORY[0xA8B250], (int)pStm) )
                              {
                                return SaveGame::SaveAudioQueueItems((int *)pStm->__pad_0) >= 0
                                    && SaveGame::WriteMagicHeader((int *)pStm->__pad_0) >= 0
                                    && SaveGame::VtableDispatch(&g_BuildingTypeClass_Count, (int)pStm) >= 0;
                              }
                              else
                              {
                                Debug::Log();
                                return 0;
                              }
                            }
                            else
                            {
                              return 0;
                            }
                          }
                          else
                          {
                            return 0;
                          }
                        }
                        else
                        {
                          return 0;
                        }
                      }
                      else
                      {
                        return 0;
                      }
                    }
                    else
                    {
                      return 0;
                    }
                  }
                  else
                  {
                    return 0;
                  }
                }
                else
                {
                  return 0;
                }
              }
              else
              {
                return 0;
              }
            }
            else
            {
              return 0;
            }
          }
          else
          {
            return 0;
          }
        }
        else
        {
          return 0;
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


// ==== 0x0067E440  Game::LoadSaved  this=AnimClass  sig=csp ====
char __thiscall Game::LoadSaved(AnimClass *this)
{
  int COM; // eax
  int *p_ppstgOpen; // ecx
  int v5; // eax
  IStorage *ppstgOpen; // [esp+3Ch] [ebp-508h] BYREF
  int v7; // [esp+40h] [ebp-504h] BYREF
  IStorage *v8; // [esp+44h] [ebp-500h] BYREF
  int v9; // [esp+48h] [ebp-4FCh] BYREF
  LPSTREAM pStm; // [esp+4Ch] [ebp-4F8h] BYREF
  WCHAR WideCharStr[64]; // [esp+50h] [ebp-4F4h] BYREF
  WCHAR pwcsName[64]; // [esp+D0h] [ebp-474h] BYREF
  _DWORD v13[253]; // [esp+150h] [ebp-3F4h] BYREF

  Debug::Log(); /*0x67e452*/
  GameState::Reset(v13); /*0x67e461*/
  ppstgOpen = 0; /*0x67e47a*/
  MultiByteToWideChar(0, 0, this->field_0, -1, WideCharStr, 64); /*0x67e47e*/
  ComPtr::ReleaseSimple((int *)&ppstgOpen); /*0x67e484*/
  ppstgOpen = 0; /*0x67e49e*/
  if ( StgOpenStorage(WideCharStr, 0, 0x12u, 0, 0, &ppstgOpen) < 0 ) /*0x67e4a6*/
  {
    ComPtr::ReleaseSimple((int *)&ppstgOpen); /*0x67e4ac*/
    return 0; /*0x67e4bd*/
  }
  COM = ScenarioPropertyReadCOM((int)v13, (int)ppstgOpen); /*0x67e4ca*/
  p_ppstgOpen = (int *)&ppstgOpen; /*0x67e4d1*/
  if ( COM < 0 ) /*0x67e4d5*/
    goto LABEL_6; /*0x67e4d5*/
  ComPtr::ReleaseSimple((int *)&ppstgOpen); /*0x67e4d7*/
  MEMORY[0xA8B238][0] = LoadOptions::GetFlag252(v13); /*0x67e4e8*/
  SwizzleManager::ConvertWrapper((int)&MEMORY[0xB0C110]); /*0x67e4f2*/
  v8 = 0; /*0x67e4fe*/
  MultiByteToWideChar(0, 0, this->field_0, -1, pwcsName, 64); /*0x67e50a*/
  ComPtr::ReleaseSimple((int *)&v8); /*0x67e510*/
  v8 = 0; /*0x67e527*/
  if ( StgOpenStorage(pwcsName, 0, 0x20u, 0, 0, &v8) < 0 ) /*0x67e52f*/
  {
    p_ppstgOpen = (int *)&v8; /*0x67e531*/
LABEL_6:
    ComPtr::ReleaseSimple(p_ppstgOpen); /*0x67e535*/
    return 0; /*0x67e546*/
  }
  v9 = 0; /*0x67e54b*/
  if ( !v8 ) /*0x67e551*/
    WinAPI::Wrapper(-2147467261); /*0x67e558*/
  if ( v8->lpVtbl->OpenStream(v8, (const OLECHAR *)&MEMORY[0x83D5A8], 0, 16, 0, (IStream **)&v9) >= 0 ) /*0x67e577*/
  {
    v7 = 0; /*0x67e5a6*/
    Game::readIniSettings(&v7); /*0x67e5aa*/
    if ( CoCreateInstance(&stru_7E9540, 0, 7u, &riid, (LPVOID *)&ppstgOpen) >= 0 ) /*0x67e5c9*/
    {
      if ( OleRun((LPUNKNOWN)ppstgOpen) >= 0 ) /*0x67e5d8*/
        ppstgOpen->lpVtbl->QueryInterface(ppstgOpen, &MEMORY[0x83D598], (void **)&v7); /*0x67e5eb*/
      ppstgOpen->lpVtbl->Release(ppstgOpen); /*0x67e5f4*/
    }
    if ( !v7 ) /*0x67e5fd*/
      WinAPI::Wrapper(-2147467261); /*0x67e604*/
    (*(void (__stdcall **)(int, int))(*(_DWORD *)v7 + 12))(v7, v9); /*0x67e615*/
    pStm = 0; /*0x67e618*/
    if ( v7 ) /*0x67e620*/
    {
      v5 = Game::validateScenario(&pStm, &v7); /*0x67e62b*/
      if ( v5 < 0 && v5 != -2147467262 ) /*0x67e639*/
        WinAPI::Wrapper(v5); /*0x67e63c*/
    }
    ProgressAnim::Init((int)MEMORY[0xAC4F58], 0, 1079574528, 0, 0); /*0x67e64e*/
    LoadGame::Start(pStm); /*0x67e659*/
    if ( !v7 ) /*0x67e664*/
      WinAPI::Wrapper(-2147467261); /*0x67e66b*/
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v7 + 16))(v7, 0); /*0x67e678*/
    SwizzleManager::ConvertWrapper((int)&MEMORY[0xB0C110]); /*0x67e680*/
    Game_Load(); /*0x67e685*/
    SidebarClass::InitButtons(&MEMORY[0x87F7E8]); /*0x67e68f*/
    TacticalClass::BuildCommandBar(&MEMORY[0x87F7E8], (int)MultiByteToWideChar, 1); /*0x67e69f*/
    SidebarClass::LoadResources(); /*0x67e6a9*/
    BuildingClass::ClearOccupancyData(); /*0x67e6ae*/
    BuildingClass::ClearFactoryData(); /*0x67e6b3*/
    FogOfWar::Render((int **)&MEMORY[0x87F7E8]); /*0x67e6bd*/
    MEMORY[0xA8EA70].__pad_2EC[0] = 1; /*0x67e6c4*/
    MEMORY[0xA8E378] = 1; /*0x67e6ca*/
    ToggleDisplayMode(1); /*0x67e6d0*/
    LoadingScreen::FreeResources3(); /*0x67e6d5*/
    Debug::Log(); /*0x67e6e0*/
    if ( pStm ) /*0x67e6ee*/
      (*(void (__stdcall **)(LPSTREAM))(*(_DWORD *)pStm->__pad_0 + 8))(pStm); /*0x67e6f3*/
    if ( v7 ) /*0x67e6fc*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x67e701*/
    if ( v9 ) /*0x67e70a*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x67e70f*/
    if ( v8 ) /*0x67e718*/
      v8->lpVtbl->Release(v8); /*0x67e71d*/
    return 1; /*0x67e722*/
  }
  else
  {
    if ( v9 ) /*0x67e57f*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x67e584*/
    if ( v8 ) /*0x67e58d*/
      v8->lpVtbl->Release(v8); /*0x67e592*/
    return 0; /*0x67e598*/
  }
}


// ==== 0x0067E730  LoadGame::Start  this=LoadGame  sig=csp ====
char __thiscall LoadGame::Start(LPSTREAM pStm)
{
  char result; // al
  int *Viewport; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // ebp
  int v9; // ebp
  int v10; // ebp
  int v11; // ebp
  int v12; // ebp
  int v13; // ebp
  int v14; // ebp
  int v15; // ebp
  int v16; // ebp
  int v17; // ebp
  int v18; // ebp
  int v19; // ebp
  int v20; // ebp
  int v21; // ebp
  int v22; // ebp
  int v23; // ebp
  int v24; // ebp
  int v25; // ebp
  int v26; // ebp
  int v27; // ebp
  int v28; // ebp
  int v29; // ebp
  int v30; // ebp
  int v31; // ebp
  int v32; // ebp
  int v33; // ebp
  int v34; // ebp
  int v35; // ebp
  int v36; // ebp
  int v37; // ebp
  int v38; // ebp
  int v39; // ebp
  int v40; // ebp
  int v41; // ebp
  int v42; // ebp
  int v43; // ebp
  int v44; // ebp
  int v45; // ebp
  int v46; // ebp
  int v47; // ebp
  int v48; // ebp
  int v49; // ebp
  int v50; // ebp
  int v51; // ebp
  int v52; // ebp
  int v53; // ebp
  int v54; // ebp
  int v55; // edi
  int v56; // eax
  int v57; // eax
  int v58; // edi
  int v59; // ebp
  int v60; // edi
  int v61; // eax
  int v62; // eax
  int v63; // edi
  int v64; // [esp+330h] [ebp-4Ch] BYREF
  LPVOID ppvObj; // [esp+334h] [ebp-48h] BYREF
  LPVOID v66; // [esp+338h] [ebp-44h] BYREF
  _DWORD v67[4]; // [esp+33Ch] [ebp-40h] BYREF
  _DWORD v68[4]; // [esp+34Ch] [ebp-30h] BYREF
  int v69[4]; // [esp+35Ch] [ebp-20h] BYREF
  int v70[4]; // [esp+36Ch] [ebp-10h] BYREF

  ResetScenario();
  ScenarioClass::SaveLoad_Prefix_0((int)MEMORY[0xA8B230], (int)pStm);
  MEMORY[0xA8ED9C] = *((_BYTE *)MEMORY[0xA8B230] + 13730);
  result = MixFile::LoadSide(*((_DWORD *)MEMORY[0xA8B230] + 3374));
  if ( result )
  {
    Viewport = Display::GetViewport(v69);
    v67[0] = 0;
    v4 = *Viewport;
    v67[1] = 0;
    v70[0] = v4;
    v68[0] = 0;
    v5 = Viewport[1];
    v68[1] = 0;
    v70[1] = v5;
    v6 = Viewport[2];
    v67[2] = 168;
    v70[2] = v6;
    v7 = Viewport[3];
    v68[2] = v6;
    v70[3] = v7;
    v69[2] = v6;
    v67[3] = MEMORY[0x886FBC];
    v68[3] = MEMORY[0x886FBC];
    v69[3] = MEMORY[0x886FBC];
    v69[0] = 0;
    v69[1] = 0;
    AllocateSurfaceScreenSurfaces((int)&MEMORY[0x886FB0], (int)v69, (int)v68, (int)v67, 0);
    TacticalClass::SetViewDimensions(v70);
    LoadGame::LoadBlock68(&MEMORY[0x8A38E0], (int)pStm);
    LoadTheaterClassMIX(*((_DWORD *)MEMORY[0xA8B230] + 1174));
    RulesClass::SaveLoad_Prefix_0(&MEMORY[0x8871E0]->DetailMinFrameRateNormal, (int)pStm);
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v8 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v8 >= v64 )
          goto LABEL_6;
      }
      return 0;
    }
LABEL_6:
    MouseClass::LoadGameAssets(&MEMORY[0x87F7E8].field_0, pStm);
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v9 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v9 >= v64 )
          goto LABEL_10;
      }
      return 0;
    }
LABEL_10:
    if ( Game::SerializeGameSaveState(pStm) < 0 )
      return 0;
    MapClass::BuildSubzones(&MEMORY[0x87F7E8]);
    LayerClass::Load(&MEMORY[0x87F778], pStm);
    if ( MEMORY[0x887324] )
    {
      (*(void (__thiscall **)(LPPERSISTSTREAM, int))(*(_DWORD *)MEMORY[0x887324] + 32))(MEMORY[0x887324], 1);
      MEMORY[0x887324] = 0;
    }
    if ( OleLoadFromStream(pStm, &IID_IUnknown, &v66) < 0 )
      return 0;
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v10 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v10 >= v64 )
          goto LABEL_20;
      }
      return 0;
    }
LABEL_20:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v11 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v11 >= v64 )
          goto LABEL_24;
      }
      return 0;
    }
LABEL_24:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v12 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v12 >= v64 )
          goto LABEL_28;
      }
      return 0;
    }
LABEL_28:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v13 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v13 >= v64 )
          goto LABEL_32;
      }
      return 0;
    }
LABEL_32:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v14 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v14 >= v64 )
          goto LABEL_36;
      }
      return 0;
    }
LABEL_36:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v15 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v15 >= v64 )
          goto LABEL_40;
      }
      return 0;
    }
LABEL_40:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v16 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v16 >= v64 )
          goto LABEL_44;
      }
      return 0;
    }
LABEL_44:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v17 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v17 >= v64 )
          goto LABEL_48;
      }
      return 0;
    }
LABEL_48:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v18 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v18 >= v64 )
          goto LABEL_52;
      }
      return 0;
    }
LABEL_52:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v19 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v19 >= v64 )
          goto LABEL_56;
      }
      return 0;
    }
LABEL_56:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v20 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v20 >= v64 )
          goto LABEL_60;
      }
      return 0;
    }
LABEL_60:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v21 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v21 >= v64 )
          goto LABEL_64;
      }
      return 0;
    }
LABEL_64:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v22 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v22 >= v64 )
          goto LABEL_68;
      }
      return 0;
    }
LABEL_68:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v23 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v23 >= v64 )
          goto LABEL_72;
      }
      return 0;
    }
LABEL_72:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v24 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v24 >= v64 )
          goto LABEL_76;
      }
      return 0;
    }
LABEL_76:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v25 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v25 >= v64 )
          goto LABEL_80;
      }
      return 0;
    }
LABEL_80:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v26 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v26 >= v64 )
          goto LABEL_84;
      }
      return 0;
    }
LABEL_84:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v27 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v27 >= v64 )
          goto LABEL_88;
      }
      return 0;
    }
LABEL_88:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v28 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v28 >= v64 )
          goto LABEL_92;
      }
      return 0;
    }
LABEL_92:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v29 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v29 >= v64 )
          goto LABEL_96;
      }
      return 0;
    }
LABEL_96:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v30 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v30 >= v64 )
          goto LABEL_100;
      }
      return 0;
    }
LABEL_100:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v31 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v31 >= v64 )
          goto LABEL_104;
      }
      return 0;
    }
LABEL_104:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v32 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v32 >= v64 )
          goto LABEL_108;
      }
      return 0;
    }
LABEL_108:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v33 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v33 >= v64 )
          goto LABEL_112;
      }
      return 0;
    }
LABEL_112:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v34 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v34 >= v64 )
          goto LABEL_116;
      }
      return 0;
    }
LABEL_116:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v35 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v35 >= v64 )
          goto LABEL_120;
      }
      return 0;
    }
LABEL_120:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v36 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v36 >= v64 )
          goto LABEL_124;
      }
      return 0;
    }
LABEL_124:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v37 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v37 >= v64 )
          goto LABEL_128;
      }
      return 0;
    }
LABEL_128:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v38 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v38 >= v64 )
          goto LABEL_132;
      }
      return 0;
    }
LABEL_132:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v39 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v39 >= v64 )
          goto LABEL_136;
      }
      return 0;
    }
LABEL_136:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v40 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v40 >= v64 )
          goto LABEL_140;
      }
      return 0;
    }
LABEL_140:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v41 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v41 >= v64 )
          goto LABEL_144;
      }
      return 0;
    }
LABEL_144:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v42 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v42 >= v64 )
          goto LABEL_148;
      }
      return 0;
    }
LABEL_148:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v43 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v43 >= v64 )
          goto LABEL_152;
      }
      return 0;
    }
LABEL_152:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v44 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v44 >= v64 )
          goto LABEL_156;
      }
      return 0;
    }
LABEL_156:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v45 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v45 >= v64 )
          goto LABEL_160;
      }
      return 0;
    }
LABEL_160:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v46 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v46 >= v64 )
          goto LABEL_164;
      }
      return 0;
    }
LABEL_164:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v47 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v47 >= v64 )
          goto LABEL_168;
      }
      return 0;
    }
LABEL_168:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v48 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v48 >= v64 )
          goto LABEL_172;
      }
      return 0;
    }
LABEL_172:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v49 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v49 >= v64 )
          goto LABEL_176;
      }
      return 0;
    }
LABEL_176:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v50 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v50 >= v64 )
          goto LABEL_180;
      }
      return 0;
    }
LABEL_180:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v51 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v51 >= v64 )
          goto LABEL_184;
      }
      return 0;
    }
LABEL_184:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v52 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v52 >= v64 )
          goto LABEL_188;
      }
      return 0;
    }
LABEL_188:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v53 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v53 >= v64 )
          goto LABEL_192;
      }
      return 0;
    }
LABEL_192:
    MEMORY[0xA83D60] = 0;
    VectorClass_ptr_SuperClass::Remove((int)&MEMORY[0xA83D50]);
    v54 = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0);
    if ( v54 < 0 )
      return 0;
    if ( v64 > 0 )
    {
      v55 = 0;
      while ( 1 )
      {
        v54 = (*(int (__stdcall **)(LPSTREAM, LPVOID *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(
                pStm,
                &ppvObj,
                4,
                0);
        if ( v54 < 0 )
          break;
        if ( MEMORY[0xA83D60] < MEMORY[0xA83D58]
          || (MEMORY[0xA83D5D] || !MEMORY[0xA83D58])
          && MEMORY[0xA83D64] > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA83D50] + 8))(
               &MEMORY[0xA83D50],
               MEMORY[0xA83D64] + MEMORY[0xA83D58],
               0) )
        {
          v56 = MEMORY[0xA83D60]++;
          *((_DWORD *)MEMORY[0xA83D54] + v56) = ppvObj;
        }
        v57 = v64;
        if ( ++v55 >= v64 )
          goto LABEL_205;
      }
      v57 = v64;
LABEL_205:
      v58 = 0;
      if ( v57 > 0 )
      {
        do
          ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)MEMORY[0xA83D54] + v58++);
        while ( v58 < v64 );
      }
    }
    if ( v54 < 0 )
      return 0;
    unk_8B41F0 = 0;
    VectorClass_Building::Set((int)&dword_8B41E0);
    v59 = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0);
    if ( v59 < 0 )
      return 0;
    if ( v64 > 0 )
    {
      v60 = 0;
      while ( 1 )
      {
        v59 = (*(int (__stdcall **)(LPSTREAM, LPVOID *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))(
                pStm,
                &ppvObj,
                4,
                0);
        if ( v59 < 0 )
          break;
        if ( unk_8B41F0 < unk_8B41E8
          || (unk_8B41ED || !unk_8B41E8)
          && unk_8B41F4 > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B41E0 + 8))(
               &dword_8B41E0,
               unk_8B41F4 + unk_8B41E8,
               0) )
        {
          v61 = unk_8B41F0++;
          *((_DWORD *)unk_8B41E4 + v61) = ppvObj;
        }
        v62 = v64;
        if ( ++v60 >= v64 )
          goto LABEL_222;
      }
      v62 = v64;
LABEL_222:
      v63 = 0;
      if ( v62 > 0 )
      {
        do
          ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)unk_8B41E4 + v63++);
        while ( v63 < v64 );
      }
    }
    if ( v59 < 0 )
      return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
      return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
      return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
      return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
      return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
      return 0;
    result = LoadVeinholeMonsters((int *)pStm->__pad_0);
    if ( result )
    {
      result = LoadGame::LoadTriggerEvents(pStm);
      if ( result )
      {
        if ( Stream::ReadOLEObjects(pStm) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(pStm) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(pStm) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(pStm) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(pStm) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(pStm) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(pStm) < 0 )
          return 0;
        LoadGame::ClearAllSlots(MEMORY[0x887888]);
        if ( LoadGame::LoadIteratedData((char *)MEMORY[0x887888], (int)pStm) < 0 )
          return 0;
        LoadGame::CleanupArray(&g_MissionQueueFrame);
        if ( LoadGame::LoadPointArray(&g_MissionQueueFrame, (int)pStm) < 0 )
          return 0;
        Stream::FlushAndReset(&MEMORY[0x87F5D8]);
        if ( LoadGame::DeserializePointerArrays(&MEMORY[0x87F5D8], (int)pStm) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(pStm) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(pStm) < 0 )
          return 0;
        if ( MEMORY[0xA8B238][0] == 5 )
        {
          Debug::Log();
          if ( !LoadGame::LoadBlock300(MEMORY[0xA8B250], (int)pStm) )
          {
            Debug::Log();
            return 0;
          }
        }
        if ( LoadGame::RestoreAudioState(pStm) < 0 )
          return 0;
        if ( LoadGame::LoadMagicAndAudio(pStm) < 0 )
          return 0;
        if ( LoadGame_Start((int)pStm) < 0 )
          return 0;
        MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2);
        if ( !MEMORY[0xA8B238][0] )
          MEMORY[0xABCE08] = 1;
        return 1;
      }
    }
  }
  return result;
}


// ==== 0x0067F7E0  SaveGame::LoadMainGameState  this=SaveGame  sig=csp ====
int __thiscall sub_67F7E0(int *this)
{
  int result; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // edx
  int v6; // edi
  int v7; // edx
  int v8; // edi
  int v9; // eax
  wchar_t *v10; // [esp+A0h] [ebp-4h] BYREF

  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))(this, &MEMORY[0xA8ED78], 4, 0); /*0x67f7f1*/
  if ( result >= 0 )
  {
    result = (*(int (__stdcall **)(int *, #375 **, int, _DWORD))(*this + 16))(this, &HouseClass_Player, 4, 0); /*0x67f808*/
    if ( result >= 0 )
    {
      result = (*(int (__stdcall **)(int *, wchar_t **, int, _DWORD))(*this + 16))(this, &MEMORY[0xA8ED84], 4, 0); /*0x67f81f*/
      if ( result >= 0 )
      {
        v3 = *this; /*0x67f82f*/
        v10 = MEMORY[0xA8ECC8]; /*0x67f83b*/
        result = (*(int (__stdcall **)(int *, wchar_t **, int, _DWORD))(v3 + 16))(this, &v10, 4, 0); /*0x67f83f*/
        if ( result >= 0 )
        {
          v4 = 0; /*0x67f84e*/
          if ( (int)v10 <= 0 )
          {
LABEL_8:
            result = (*(int (__stdcall **)(int *, float *, int, _DWORD))(*this + 16))(this, MEMORY[0x89EA40], 432, 0); /*0x67f879*/
            if ( result >= 0 )
            {
              SuperWeaponClass::LoadFromSaveStream(this); /*0x67f895*/
              v5 = *this; /*0x67f8a0*/
              v10 = (wchar_t *)MEMORY[0x8B40D8]; /*0x67f8ac*/
              result = (*(int (__stdcall **)(int *, wchar_t **, int, _DWORD))(v5 + 16))(this, &v10, 4, 0); /*0x67f8b0*/
              if ( result >= 0 )
              {
                v6 = 0; /*0x67f8bf*/
                if ( (int)v10 <= 0 )
                {
LABEL_13:
                  v7 = *this; /*0x67f8ea*/
                  v10 = (wchar_t *)dword_8B41B8; /*0x67f8fc*/
                  result = (*(int (__stdcall **)(int *, wchar_t **, int, _DWORD))(v7 + 16))(this, &v10, 4, 0); /*0x67f900*/
                  if ( result >= 0 )
                  {
                    v8 = 0; /*0x67f90f*/
                    if ( (int)v10 <= 0 )
                    {
LABEL_17:
                      result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))( /*0x67f93a*/
                                 this,
                                 &dword_81DA8C,
                                 76,
                                 0);
                      if ( result >= 0 )
                      {
                        result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))( /*0x67f959*/
                                   this,
                                   dword_81DAD8,
                                   76,
                                   0);
                        if ( result >= 0 )
                        {
                          result = (*(int (__stdcall **)(int *, double *, int, _DWORD))(*this + 16))( /*0x67f96f*/
                                     this,
                                     MEMORY[0x89EC28],
                                     152,
                                     0);
                          if ( result >= 0 )
                          {
                            result = (*(int (__stdcall **)(int *, char *, int, _DWORD))(*this + 16))( /*0x67f982*/
                                       this,
                                       MEMORY[0x89ECC0],
                                       19,
                                       0);
                            if ( result >= 0 )
                            {
                              result = (*(int (__stdcall **)(int *, void *, int, _DWORD))(*this + 16))( /*0x67f998*/
                                         this,
                                         &MEMORY[0xA8E3A8],
                                         1024,
                                         0);
                              if ( result >= 0 )
                              {
                                v9 = (*(int (__stdcall **)(int *, int *, int, _DWORD))(*this + 16))( /*0x67f9ab*/
                                       this,
                                       &MEMORY[0xB07784],
                                       4,
                                       0);
                                return v9 >= 0 ? 0 : v9;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      while ( 1 ) /*0x67f926*/
                      {
                        result = (*(int (__stdcall **)(int *, char *, int, _DWORD))(*this + 16))( /*0x67f926*/
                                   this,
                                   (char *)unk_8B41AC + 4 * v8,
                                   4,
                                   0);
                        if ( result < 0 ) /*0x67f92b*/
                          break; /*0x67f92b*/
                        if ( ++v8 >= (int)v10 ) /*0x67f938*/
                          goto LABEL_17; /*0x67f938*/
                      }
                    }
                  }
                }
                else
                {
                  while ( 1 ) /*0x67f8d6*/
                  {
                    result = (*(int (__stdcall **)(int *, char *, int, _DWORD))(*this + 16))( /*0x67f8d6*/
                               this,
                               (char *)MEMORY[0x8B40CC] + 4 * v6,
                               4,
                               0);
                    if ( result < 0 ) /*0x67f8db*/
                      break; /*0x67f8db*/
                    if ( ++v6 >= (int)v10 ) /*0x67f8e8*/
                      goto LABEL_13; /*0x67f8e8*/
                  }
                }
              }
            }
          }
          else
          {
            while ( 1 ) /*0x67f865*/
            {
              result = (*(int (__stdcall **)(int *, char *, int, _DWORD))(*this + 16))( /*0x67f865*/
                         this,
                         (char *)MEMORY[0xA8ECBC] + 4 * v4,
                         4,
                         0);
              if ( result < 0 ) /*0x67f86a*/
                break; /*0x67f86a*/
              if ( ++v4 >= (int)v10 ) /*0x67f877*/
                goto LABEL_8; /*0x67f877*/
            }
          }
        }
      }
    }
  }
  return result; /*0x67f9b8*/
}


// ==== 0x0067F9C0  Game::SerializeGameSaveState  this=Game  sig=csp ====
int __thiscall SerializeGameSaveState(void *this)
{
  int result; // eax
  int v3; // edi
  wchar_t *v4; // eax
  int i; // edi
  int v6; // edi
  int v7; // eax
  int j; // edi
  int v9; // edi
  int v10; // eax
  int k; // edi
  int v12; // eax
  int v13; // [esp+B8h] [ebp-8h] BYREF
  int v14; // [esp+BCh] [ebp-4h] BYREF

  result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q003)(this, &MEMORY[0xA8ED78], 4, 0); /*0x67f9d3*/
  if ( result >= 0 )
  {
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], &MEMORY[0xA8ED78]); /*0x67f9e8*/
    result = (*(int (__stdcall **)(void *, #375 **, int, _DWORD))(this->q003)(this, &HouseClass_Player, 4, 0); /*0x67f9f9*/
    if ( result >= 0 )
    {
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)&HouseClass_Player); /*0x67fa0e*/
      result = (*(int (__stdcall **)(void *, wchar_t **, int, _DWORD))(this->q003)( /*0x67fa1f*/
                 this,
                 &MEMORY[0xA8ED84],
                 4,
                 0);
      if ( result >= 0 )
      {
        result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q003)(this, &v13, 4, 0); /*0x67fa36*/
        if ( result >= 0 )
        {
          v3 = 0; /*0x67fa45*/
          if ( v13 <= 0 )
          {
LABEL_14:
            for ( i = 0; i < (int)MEMORY[0xA8ECC8]; ++i ) /*0x67face*/
              ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)MEMORY[0xA8ECBC] + i); /*0x67fade*/
            result = (*(int (__stdcall **)(void *, float *, int, _DWORD))(this->q003)( /*0x67fafc*/
                       this,
                       MEMORY[0x89EA40],
                       432,
                       0);
            if ( result >= 0 )
            {
              SuperWeapon::SerializeSuperWeaponState(this); /*0x67fb09*/
              result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q003)(this, &v13, 4, 0); /*0x67fb1a*/
              if ( result >= 0 )
              {
                v6 = 0; /*0x67fb29*/
                if ( v13 <= 0 )
                {
LABEL_27:
                  for ( j = 0; j < MEMORY[0x8B40D8]; ++j ) /*0x67fbb2*/
                    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)MEMORY[0x8B40CC] + j); /*0x67fbc2*/
                  result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q003)(this, &v13, 4, 0); /*0x67fbdd*/
                  if ( result >= 0 )
                  {
                    v9 = 0; /*0x67fbec*/
                    if ( v13 <= 0 )
                    {
LABEL_39:
                      for ( k = 0; k < dword_8B41B8; ++k ) /*0x67fc74*/
                        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)unk_8B41AC + k); /*0x67fc84*/
                      result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q003)( /*0x67fc9f*/
                                 this,
                                 &dword_81DA8C,
                                 76,
                                 0);
                      if ( result >= 0 )
                      {
                        result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q003)( /*0x67fcb2*/
                                   this,
                                   dword_81DAD8,
                                   76,
                                   0);
                        if ( result >= 0 )
                        {
                          result = (*(int (__stdcall **)(void *, double *, int, _DWORD))(this->q003)( /*0x67fcc8*/
                                     this,
                                     MEMORY[0x89EC28],
                                     152,
                                     0);
                          if ( result >= 0 )
                          {
                            result = (*(int (__stdcall **)(void *, char *, int, _DWORD))(this->q003)( /*0x67fcdb*/
                                       this,
                                       MEMORY[0x89ECC0],
                                       19,
                                       0);
                            if ( result >= 0 )
                            {
                              result = (*(int (__stdcall **)(void *, void *, int, _DWORD))(this->q003)( /*0x67fcf1*/
                                         this,
                                         &MEMORY[0xA8E3A8],
                                         1024,
                                         0);
                              if ( result >= 0 )
                              {
                                v12 = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q003)( /*0x67fd04*/
                                        this,
                                        &MEMORY[0xB07784],
                                        4,
                                        0);
                                return v12 >= 0 ? 0 : v12;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      while ( 1 ) /*0x67fbfe*/
                      {
                        result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q003)( /*0x67fbfe*/
                                   this,
                                   &v14,
                                   4,
                                   0);
                        if ( result < 0 ) /*0x67fc03*/
                          break; /*0x67fc03*/
                        if ( dword_8B41B8 < unk_8B41B0 /*0x67fc3f*/
                          || (unk_8B41B5 || !unk_8B41B0)
                          && unk_8B41BC > 0
                          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(unk_8B41A8 + 8))(
                               &unk_8B41A8,
                               unk_8B41B0 + unk_8B41BC,
                               0) )
                        {
                          v10 = dword_8B41B8++; /*0x67fc52*/
                          *((_DWORD *)unk_8B41AC + v10) = v14; /*0x67fc5f*/
                        }
                        if ( ++v9 >= v13 ) /*0x67fc69*/
                          goto LABEL_39; /*0x67fc69*/
                      }
                    }
                  }
                }
                else
                {
                  while ( 1 ) /*0x67fb3b*/
                  {
                    result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q003)(this, &v14, 4, 0); /*0x67fb3b*/
                    if ( result < 0 ) /*0x67fb40*/
                      break; /*0x67fb40*/
                    if ( MEMORY[0x8B40D8] < MEMORY[0x8B40D0] /*0x67fb7d*/
                      || (MEMORY[0x8B40D5] || !MEMORY[0x8B40D0])
                      && MEMORY[0x8B40DC] > 0
                      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x8B40C8] + 8))(
                           &MEMORY[0x8B40C8],
                           MEMORY[0x8B40D0] + MEMORY[0x8B40DC],
                           0) )
                    {
                      v7 = MEMORY[0x8B40D8]++; /*0x67fb90*/
                      *((_DWORD *)MEMORY[0x8B40CC] + v7) = v14; /*0x67fb9d*/
                    }
                    if ( ++v6 >= v13 ) /*0x67fba7*/
                      goto LABEL_27; /*0x67fba7*/
                  }
                }
              }
            }
          }
          else
          {
            while ( 1 ) /*0x67fa57*/
            {
              result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q003)(this, &v14, 4, 0); /*0x67fa57*/
              if ( result < 0 ) /*0x67fa5c*/
                break; /*0x67fa5c*/
              if ( (int)MEMORY[0xA8ECC8] < MEMORY[0xA8ECC0] /*0x67fa99*/
                || (MEMORY[0xA8ECC5] || !MEMORY[0xA8ECC0])
                && MEMORY[0xA8ECCC] > 0
                && (*(unsigned __int8 (__thiscall **)(ObjectClass **, int, _DWORD))&MEMORY[0xA8ECB8]->__pad_0[8])(
                     &MEMORY[0xA8ECB8],
                     MEMORY[0xA8ECC0] + MEMORY[0xA8ECCC],
                     0) )
              {
                v4 = MEMORY[0xA8ECC8]; /*0x67faac*/
                MEMORY[0xA8ECC8] = (wchar_t *)((char *)MEMORY[0xA8ECC8] + 1); /*0x67faaf*/
                *((_DWORD *)MEMORY[0xA8ECBC] + (_DWORD)v4) = v14; /*0x67fab9*/
              }
              if ( ++v3 >= v13 ) /*0x67fac3*/
                goto LABEL_14; /*0x67fac3*/
            }
          }
        }
      }
    }
  }
  return result; /*0x67fd11*/
}


// ==== 0x0067FD20  LoadOptions_Load  this=-  sig=csp ====
char __fastcall LoadOptions_Load(LPCCH lpMultiByteStr, int a2)
{
  IStorage *v3; // eax
  bool v4; // sf
  IStorage *ppstgOpen; // [esp+4h] [ebp-84h] BYREF
  WCHAR WideCharStr[64]; // [esp+8h] [ebp-80h] BYREF

  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 64); /*0x67fd3f*/
  ppstgOpen = 0; /*0x67fd65*/
  if ( StgOpenStorage(WideCharStr, 0, 0x12u, 0, 0, &ppstgOpen) < 0 ) /*0x67fd75*/
  {
    v3 = ppstgOpen; /*0x67fd77*/
LABEL_4:
    if ( v3 ) /*0x67fd93*/
      v3->lpVtbl->Release(v3); /*0x67fd98*/
    return 0; /*0x67fda4*/
  }
  v4 = ScenarioPropertyReadCOM(a2, (int)ppstgOpen) < 0; /*0x67fd89*/
  v3 = ppstgOpen; /*0x67fd8b*/
  if ( v4 ) /*0x67fd8f*/
    goto LABEL_4; /*0x67fd8f*/
  if ( ppstgOpen ) /*0x67fda7*/
    ppstgOpen->lpVtbl->Release(ppstgOpen); /*0x67fdac*/
  return 1; /*0x67fd9d*/
}


// ==== 0x0067FDC0  nullsub_225  this=-  sig=ida-proto ====
void nullsub_225()
{
  ; /*0x67fdc0*/
}


// ==== 0x0067FDD0  ComPtr::ReleaseSimple  this=ComPtr  sig=csp ====
int __thiscall ComPtr_ReleaseSimple(int *this)
{
  int result; // eax

  result = *this; /*0x67fdd0*/
  if ( *this ) /*0x67fdd0*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x67fdd9*/
  return result; /*0x67fddc*/
}


// ==== 0x0067FDE0  Game::readIniSettings  this=Game  sig=csp ====
int __thiscall sub_67FDE0(int *this)
{
  int result; // eax

  result = *this; /*0x67fde0*/
  if ( *this ) /*0x67fde0*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x67fde9*/
  return result; /*0x67fdec*/
}


// ==== 0x0067FDF0  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x67fe03*/
  v9 = *(_DWORD *)(a2 + 16); /*0x67fe09*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x67fe0d*/
  if ( result >= 0 ) /*0x67fe12*/
  {
    v6 = 0; /*0x67fe18*/
    if ( v9 <= 0 ) /*0x67fe1c*/
    {
      return 0; /*0x67fe66*/
    }
    else
    {
      while ( 1 ) /*0x67fe1e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x67fe1e*/
        pPStm = 0; /*0x67fe21*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x67fe39*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x67fe3d*/
          break; /*0x67fe3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x67fe45*/
        if ( result < 0 ) /*0x67fe4d*/
          break; /*0x67fe4d*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x67fe56*/
        if ( result < 0 ) /*0x67fe5b*/
          break; /*0x67fe5b*/
        if ( ++v6 >= v9 ) /*0x67fe64*/
          return 0; /*0x67fe64*/
      }
    }
  }
  return result; /*0x67fe68*/
}


// ==== 0x0067FE70  SaveGame_Start_67FE70  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_67FE70(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x67fe83*/
  v9 = *(_DWORD *)(a2 + 16); /*0x67fe89*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x67fe8d*/
  if ( result >= 0 ) /*0x67fe92*/
  {
    v6 = 0; /*0x67fe98*/
    if ( v9 <= 0 ) /*0x67fe9c*/
    {
      return 0; /*0x67fee6*/
    }
    else
    {
      while ( 1 ) /*0x67fe9e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x67fe9e*/
        pPStm = 0; /*0x67fea1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x67feb9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x67febd*/
          break; /*0x67febd*/
        result = OleSaveToStream(pPStm, pStm); /*0x67fec5*/
        if ( result < 0 ) /*0x67fecd*/
          break; /*0x67fecd*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x67fed6*/
        if ( result < 0 ) /*0x67fedb*/
          break; /*0x67fedb*/
        if ( ++v6 >= v9 ) /*0x67fee4*/
          return 0; /*0x67fee4*/
      }
    }
  }
  return result; /*0x67fee8*/
}


// ==== 0x0067FEF0  SaveGame_Start_67FEF0  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_67FEF0(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x67ff03*/
  v9 = *(_DWORD *)(a2 + 16); /*0x67ff09*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x67ff0d*/
  if ( result >= 0 ) /*0x67ff12*/
  {
    v6 = 0; /*0x67ff18*/
    if ( v9 <= 0 ) /*0x67ff1c*/
    {
      return 0; /*0x67ff66*/
    }
    else
    {
      while ( 1 ) /*0x67ff1e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x67ff1e*/
        pPStm = 0; /*0x67ff21*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x67ff39*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x67ff3d*/
          break; /*0x67ff3d*/
        result = OleSaveToStream(pPStm, pStm); /*0x67ff45*/
        if ( result < 0 ) /*0x67ff4d*/
          break; /*0x67ff4d*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x67ff56*/
        if ( result < 0 ) /*0x67ff5b*/
          break; /*0x67ff5b*/
        if ( ++v6 >= v9 ) /*0x67ff64*/
          return 0; /*0x67ff64*/
      }
    }
  }
  return result; /*0x67ff68*/
}


// ==== 0x0067FF70  SaveGame_Start_67FF70  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_67FF70(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x67ff83*/
  v9 = *(_DWORD *)(a2 + 16); /*0x67ff89*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x67ff8d*/
  if ( result >= 0 ) /*0x67ff92*/
  {
    v6 = 0; /*0x67ff98*/
    if ( v9 <= 0 ) /*0x67ff9c*/
    {
      return 0; /*0x67ffe6*/
    }
    else
    {
      while ( 1 ) /*0x67ff9e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x67ff9e*/
        pPStm = 0; /*0x67ffa1*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x67ffb9*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x67ffbd*/
          break; /*0x67ffbd*/
        result = OleSaveToStream(pPStm, pStm); /*0x67ffc5*/
        if ( result < 0 ) /*0x67ffcd*/
          break; /*0x67ffcd*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x67ffd6*/
        if ( result < 0 ) /*0x67ffdb*/
          break; /*0x67ffdb*/
        if ( ++v6 >= v9 ) /*0x67ffe4*/
          return 0; /*0x67ffe4*/
      }
    }
  }
  return result; /*0x67ffe8*/
}


// ==== 0x0067FFF0  SaveGame_Start_67FFF0  this=-  sig=csp ====
HRESULT __fastcall SaveGame_Start_67FFF0(LPSTREAM pStm, int a2)
{
  int v4; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v4 = *(_DWORD *)pStm->__pad_0; /*0x680003*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680009*/
  result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(v4 + 16))(pStm, &v9, 4, 0); /*0x68000d*/
  if ( result >= 0 ) /*0x680012*/
  {
    v6 = 0; /*0x680018*/
    if ( v9 <= 0 ) /*0x68001c*/
    {
      return 0; /*0x680066*/
    }
    else
    {
      while ( 1 ) /*0x68001e*/
      {
        v7 = *(_DWORD *)(a2 + 4); /*0x68001e*/
        pPStm = 0; /*0x680021*/
        result = (***(int (__stdcall ****)(_DWORD, void *, LPPERSISTSTREAM *))(v7 + 4 * v6))( /*0x680039*/
                   *(_DWORD *)(v7 + 4 * v6),
                   &IID_IPersistStream,
                   &pPStm);
        if ( result < 0 ) /*0x68003d*/
          break; /*0x68003d*/
        result = OleSaveToStream(pPStm, pStm); /*0x680045*/
        if ( result < 0 ) /*0x68004d*/
          break; /*0x68004d*/
        result = (*(int (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x680056*/
        if ( result < 0 ) /*0x68005b*/
          break; /*0x68005b*/
        if ( ++v6 >= v9 ) /*0x680064*/
          return 0; /*0x680064*/
      }
    }
  }
  return result; /*0x680068*/
}

