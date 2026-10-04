// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00671EA0  Dialog::ReadMultiplayerDialogSettings  this=Dialog  sig=csp ====
int __thiscall Dialog::ReadMultiplayerDialogSettings(Dialog *this)
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
  int v15; // eax
  char v16; // dl
  char Bool_Overwrite; // al
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
  bool *v37; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v37, (unsigned __int8 *)aMultiplayerdia); /*0x671eb0*/
  if ( result ) /*0x671ebc*/
  {
    this->q520 = INIClass::ReadInt_Overwrite( /*0x671edc*/
                                 v37,
                                 (unsigned __int8 *)aMultiplayerdia,
                                 aMinmoney,
                                 this->q520);
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x671ef7*/
                      v37,
                      (unsigned __int8 *)aMultiplayerdia,
                      aMoney,
                      *((_DWORD *)this + 1313));
    v4 = *((_DWORD *)this + 1314); /*0x671efc*/
    *((_DWORD *)this + 1313) = Int_Overwrite; /*0x671f02*/
    v5 = INIClass::ReadInt_Overwrite(v37, (unsigned __int8 *)aMultiplayerdia, aMaxmoney, v4); /*0x671f16*/
    v6 = *((_DWORD *)this + 1315); /*0x671f1b*/
    *((_DWORD *)this + 1314) = v5; /*0x671f21*/
    *((_DWORD *)this + 1315) = INIClass::ReadInt_Overwrite(v37, (unsigned __int8 *)aMultiplayerdia, aMoneyincrement, v6); /*0x671f3b*/
    v7 = INIClass::ReadInt_Overwrite(v37, (unsigned __int8 *)aMultiplayerdia, aMinunitcount, this->q524); /*0x671f56*/
    v8 = *((_DWORD *)this + 1317); /*0x671f5b*/
    this->q524 = v7; /*0x671f61*/
    v9 = INIClass::ReadInt_Overwrite( /*0x671f75*/
           v37,
           (unsigned __int8 *)aMultiplayerdia,
           (unsigned __int8 *)g_INI_Key_UnitCount,
           v8);
    v10 = *((_DWORD *)this + 1318); /*0x671f7a*/
    *((_DWORD *)this + 1317) = v9; /*0x671f80*/
    *((_DWORD *)this + 1318) = INIClass::ReadInt_Overwrite(v37, (unsigned __int8 *)aMultiplayerdia, aMaxunitcount, v10); /*0x671f9a*/
    v11 = INIClass::ReadInt_Overwrite( /*0x671fb5*/
            v37,
            (unsigned __int8 *)aMultiplayerdia,
            (unsigned __int8 *)g_INI_Key_TechLevel,
            *((_DWORD *)this + 1319));
    v12 = this->q528; /*0x671fba*/
    *((_DWORD *)this + 1319) = v11; /*0x671fc0*/
    v13 = INIClass::ReadInt_Overwrite( /*0x671fd4*/
            v37,
            (unsigned __int8 *)aMultiplayerdia,
            (unsigned __int8 *)g_INI_Key_GameSpeed,
            v12);
    v14 = *((_DWORD *)this + 1321); /*0x671fd9*/
    this->q528 = v13; /*0x671fdf*/
    *((_DWORD *)this + 1321) = INIClass::ReadInt_Overwrite(v37, (unsigned __int8 *)aMultiplayerdia, aAidifficulty, v14); /*0x671ff9*/
    v15 = INIClass::ReadInt_Overwrite(v37, (unsigned __int8 *)aMultiplayerdia, aAiplayers, *((_DWORD *)this + 1322)); /*0x672014*/
    v16 = *((_BYTE *)this + 5292); /*0x672019*/
    *((_DWORD *)this + 1322) = v15; /*0x67201f*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)v37, (unsigned __int8 *)aMultiplayerdia, aBridgedestruct, v16); /*0x672033*/
    v18 = *((_BYTE *)this + 5293); /*0x672038*/
    *((_BYTE *)this + 5292) = Bool_Overwrite; /*0x67203e*/
    *((_BYTE *)this + 5293) = INIClass::ReadBool_Overwrite( /*0x672058*/
                                (int *)v37,
                                (unsigned __int8 *)aMultiplayerdia,
                                aShadowgrow,
                                v18);
    v19 = INIClass::ReadBool_Overwrite((int *)v37, (unsigned __int8 *)aMultiplayerdia, aShroud, *((_BYTE *)this + 5294)); /*0x672073*/
    v20 = *((_BYTE *)this + 5295); /*0x672078*/
    *((_BYTE *)this + 5294) = v19; /*0x67207e*/
    v21 = INIClass::ReadBool_Overwrite((int *)v37, (unsigned __int8 *)aMultiplayerdia, aBases, v20); /*0x672092*/
    v22 = this->q52C; /*0x672097*/
    *((_BYTE *)this + 5295) = v21; /*0x67209d*/
    this->q52C = INIClass::ReadBool_Overwrite( /*0x6720b7*/
                                (int *)v37,
                                (unsigned __int8 *)aMultiplayerdia,
                                (unsigned __int8 *)g_INI_Key_TiberiumGrows,
                                v22);
    v23 = INIClass::ReadBool_Overwrite((int *)v37, (unsigned __int8 *)aMultiplayerdia, aCrates, *((_BYTE *)this + 5297)); /*0x6720d2*/
    v24 = *((_BYTE *)this + 5298); /*0x6720d7*/
    *((_BYTE *)this + 5297) = v23; /*0x6720dd*/
    v25 = INIClass::ReadBool_Overwrite((int *)v37, (unsigned __int8 *)aMultiplayerdia, aCapturetheflag, v24); /*0x6720f1*/
    v26 = *((_BYTE *)this + 5299); /*0x6720f6*/
    *((_BYTE *)this + 5298) = v25; /*0x6720fc*/
    *((_BYTE *)this + 5299) = INIClass::ReadBool_Overwrite( /*0x672116*/
                                (int *)v37,
                                (unsigned __int8 *)aMultiplayerdia,
                                aHarvestertruce,
                                v26);
    v27 = INIClass::ReadBool_Overwrite( /*0x672131*/
            (int *)v37,
            (unsigned __int8 *)aMultiplayerdia,
            aMultiengineer,
            *((_BYTE *)this + 5300));
    v28 = *((_BYTE *)this + 5301); /*0x672136*/
    *((_BYTE *)this + 5300) = v27; /*0x67213c*/
    v29 = INIClass::ReadBool_Overwrite((int *)v37, (unsigned __int8 *)aMultiplayerdia, aAlliesallowed, v28); /*0x672150*/
    v30 = *((_BYTE *)this + 5307); /*0x672155*/
    *((_BYTE *)this + 5301) = v29; /*0x67215b*/
    *((_BYTE *)this + 5307) = INIClass::ReadBool_Overwrite( /*0x672175*/
                                (int *)v37,
                                (unsigned __int8 *)aMultiplayerdia,
                                aAllychangeallo,
                                v30);
    v31 = INIClass::ReadBool_Overwrite( /*0x672190*/
            (int *)v37,
            (unsigned __int8 *)aMultiplayerdia,
            (unsigned __int8 *)g_INI_Key_ShortGame,
            *((_BYTE *)this + 5302));
    v32 = *((_BYTE *)this + 5305); /*0x672195*/
    *((_BYTE *)this + 5302) = v31; /*0x67219b*/
    v33 = INIClass::ReadBool_Overwrite( /*0x6721af*/
            (int *)v37,
            (unsigned __int8 *)aMultiplayerdia,
            (unsigned __int8 *)g_INI_Key_SuperWeaponsAllowed,
            v32);
    v34 = *((_BYTE *)this + 5306); /*0x6721b4*/
    *((_BYTE *)this + 5305) = v33; /*0x6721ba*/
    *((_BYTE *)this + 5306) = INIClass::ReadBool_Overwrite( /*0x6721d4*/
                                (int *)v37,
                                (unsigned __int8 *)aMultiplayerdia,
                                (unsigned __int8 *)g_INI_Key_BuildOffAlly,
                                v34);
    v35 = INIClass::ReadBool_Overwrite( /*0x6721ef*/
            (int *)v37,
            (unsigned __int8 *)aMultiplayerdia,
            (unsigned __int8 *)g_INI_Key_FogOfWar,
            *((_BYTE *)this + 5303));
    v36 = *((_BYTE *)this + 5304); /*0x6721f4*/
    *((_BYTE *)this + 5303) = v35; /*0x6721fa*/
    result = INIClass::ReadBool_Overwrite((int *)v37, (unsigned __int8 *)aMultiplayerdia, aMcvredeploys, v36); /*0x67220e*/
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
int __thiscall ReadMaximumPlayersINI(ObjectClass *this)
{
  int result; // eax
  bool *v3; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v3, (unsigned __int8 *)aMaximums); /*0x672240*/
  if ( result ) /*0x67224c*/
  {
    result = INIClass::ReadInt_Overwrite(v3, (unsigned __int8 *)aMaximums, aPlayers, *((_DWORD *)this + 1332)); /*0x672263*/
    *((_DWORD *)this + 1332) = result; /*0x672268*/
  }
  LOBYTE(result) = 1; /*0x67226f*/
  return result; /*0x67226e*/
}



// ==== 0x00672280  RulesClass::readCrateRules  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readCrateRules(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (unsigned __int8 *)aInfantrytypes); /*0x672297*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67229d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, (unsigned __int8 *)aInfantrytypes, i); /*0x6722b5*/
    if ( INIClass::GetString( /*0x6722c3*/
           v6,
           (unsigned __int8 *)aInfantrytypes,
           StringByIndex,
           &g_INI_DefaultBuffer,
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
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (unsigned __int8 *)aCountries); /*0x672307*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67230d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, (unsigned __int8 *)aCountries, i); /*0x672325*/
    if ( INIClass::GetString(v6, (unsigned __int8 *)aCountries, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x672333*/
      WeaponTypeClass::Create(Destination); /*0x672340*/
  }
  return KeyCount > 0; /*0x67234c*/
}



// ==== 0x00672360  CCINIClass::LoadBuildingTypes  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::LoadBuildingTypes(CCINIClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (unsigned __int8 *)aVehicletypes); /*0x672377*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67237d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, (unsigned __int8 *)aVehicletypes, i); /*0x672395*/
    if ( INIClass::GetString(v6, (unsigned __int8 *)aVehicletypes, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x6723a3*/
      BuildingTypeClass::FindOrCreateAlt(Destination); /*0x6723b0*/
  }
  return KeyCount > 0; /*0x6723bc*/
}



// ==== 0x006723D0  RulesClass::readRadiation  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readRadiation(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (unsigned __int8 *)aAircrafttypes); /*0x6723e7*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6723ed*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, (unsigned __int8 *)aAircrafttypes, i); /*0x672405*/
    if ( INIClass::GetString( /*0x672413*/
           v6,
           (unsigned __int8 *)aAircrafttypes,
           StringByIndex,
           &g_INI_DefaultBuffer,
           Destination,
           32) )
    {
      KeywordClass::FindOrCreate(Destination); /*0x672420*/
    }
  }
  return KeyCount > 0; /*0x67242c*/
}



// ==== 0x00672440  RulesClass::ReadDataList  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadDataList(RulesClass *this)
{
  int KeyCount; // edi
  int v2; // esi
  HouseTypeClass *StringByIndex; // ebx
  int v4; // eax
  SideClass *v5; // eax
  _DWORD *v6; // ebp
  _DWORD *v7; // edi
  void *v8; // eax
  bool v9; // zf
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // edi
  _DWORD *v14; // edx
  IntVector v16; // [esp-1Ch] [ebp-50h] BYREF
  int v17; // [esp-14h] [ebp-48h]
  __int16 v18; // [esp-10h] [ebp-44h]
  char *v19; // [esp-Ch] [ebp-40h]
  char *v20; // [esp-8h] [ebp-3Ch]
  char *v21; // [esp-4h] [ebp-38h]
  int v22; // [esp+10h] [ebp-24h]
  int v23; // [esp+14h] [ebp-20h]
  void **v24; // [esp+18h] [ebp-1Ch] BYREF
  void *Block; // [esp+1Ch] [ebp-18h]
  int v26; // [esp+20h] [ebp-14h]
  char v27; // [esp+25h] [ebp-Fh]
  INIClass *v28; // [esp+38h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v28->__pad_0, (unsigned __int8 *)aSides); /*0x672456*/
  v21 = aProcessingSide; /*0x672458*/
  v23 = KeyCount; /*0x67245d*/
  Debug::Log(); /*0x672461*/
  v2 = 0; /*0x672469*/
  v22 = 0; /*0x67246d*/
  if ( KeyCount > 0 ) /*0x672471*/
  {
    while ( 1 ) /*0x67248e*/
    {
      StringByIndex = (HouseTypeClass *)INIClass::GetStringByIndex(v28->__pad_0, (unsigned __int8 *)aSides, v2); /*0x67248e*/
      v4 = HouseTypeClass::Find(StringByIndex); /*0x672492*/
      if ( v4 == -1 ) /*0x67249a*/
      {
        v5 = (SideClass *)__2_YAPAXI_Z(0xB4u); /*0x6724a1*/
        if ( v5 ) /*0x6724ab*/
          v6 = SideClass::Construct(v5, (char *)StringByIndex); /*0x6724b5*/
        else
          v6 = 0; /*0x6724b9*/
      }
      else
      {
        v6 = *(_DWORD **)(FootClass_Array.?[0] + 4 * v4); /*0x6724c3*/
      }
      v21 = (char *)(v6 + 9); /*0x6724c9*/
      v20 = (char *)v2; /*0x6724ca*/
      v19 = aSideDS; /*0x6724cb*/
      Debug::Log(); /*0x6724d0*/
      IntVector::Copy(&v16, v6 + 38); /*0x6724e3*/
      v7 = INIClass::ReadSuperWeaponTypeList( /*0x67250f*/
             v28,
             &v24,
             (unsigned __int8 *)aSides,
             (unsigned __int8 *)StringByIndex,
             &TypeList<int>::`vftable',
             (void *)v16.IntVector_field_0x04,
             v17,
             v18,
             v6[42],
             v6[43],
             (int)v21);
      TypeList::Copy((TypeList *)(v6 + 38), v7); /*0x672514*/
      v6[42] = v7[4]; /*0x67251e*/
      v6[43] = v7[5]; /*0x672524*/
      v8 = Block; /*0x672527*/
      v9 = Block == 0; /*0x67252e*/
      v6[44] = v7[6]; /*0x672530*/
      v24 = &VectorClass<int>::`vftable'; /*0x672533*/
      if ( !v9 && v27 ) /*0x672543*/
      {
        __3_YAXPAX_Z(v8); /*0x672546*/
        Block = 0; /*0x67254e*/
      }
      v10 = v6[42]; /*0x672552*/
      v11 = 0; /*0x672558*/
      v27 = 0; /*0x67255c*/
      v26 = 0; /*0x672561*/
      if ( v10 > 0 ) /*0x672565*/
      {
        do /*0x6725c2*/
        {
          v12 = 0; /*0x672573*/
          v13 = *(_DWORD *)(v6[39] + 4 * v11); /*0x672577*/
          if ( FootClass_Array.?[0] <= 0 ) /*0x67257a*/
          {
LABEL_17:
            v12 = -1; /*0x67258e*/
          }
          else
          {
            v14 = (_DWORD *)FootClass_Array.?[0]; /*0x67257c*/
            while ( (_DWORD *)*v14 != v6 ) /*0x672584*/
            {
              ++v12; /*0x672586*/
              ++v14; /*0x672587*/
              if ( v12 >= FootClass_Array.?[0] ) /*0x67258c*/
                goto LABEL_17; /*0x67258c*/
            }
          }
          *(_DWORD *)(*((_DWORD *)dword_A83C9C + v13) + 188) = v12; /*0x67259a*/
          v21 = (char *)(*((_DWORD *)dword_A83C9C + v13) + 36); /*0x6725ab*/
          v20 = aS_0; /*0x6725ac*/
          Debug::Log(); /*0x6725b1*/
          ++v11; /*0x6725bf*/
        }
        while ( v11 < v6[42] ); /*0x6725c2*/
      }
      if ( ++v22 >= v23 ) /*0x6725d3*/
        break; /*0x6725d3*/
      v2 = v22; /*0x672479*/
    }
    KeyCount = v23; /*0x6725d9*/
  }
  return KeyCount > 0; /*0x6725df*/
}



// ==== 0x006725F0  RulesClass::ReadSidesList  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadSidesList(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (unsigned __int8 *)aSuperweapontyp); /*0x672607*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67260d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, (unsigned __int8 *)aSuperweapontyp, i); /*0x672625*/
    if ( INIClass::GetString( /*0x672633*/
           v6,
           (unsigned __int8 *)aSuperweapontyp,
           StringByIndex,
           &g_INI_DefaultBuffer,
           Destination,
           32) )
    {
      WeaponTypeClass::Process(Destination); /*0x672640*/
    }
  }
  return KeyCount > 0; /*0x67264c*/
}



// ==== 0x00672660  RulesClass::LoadBuildingTypes  this=RulesClass  sig=csp ====
int __thiscall RulesClass::LoadBuildingTypes(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (unsigned __int8 *)aBuildingtypes); /*0x672677*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67267d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, (unsigned __int8 *)aBuildingtypes, i); /*0x672695*/
    if ( INIClass::GetString( /*0x6726a3*/
           v6,
           (unsigned __int8 *)aBuildingtypes,
           StringByIndex,
           &g_INI_DefaultBuffer,
           Destination,
           32) )
    {
      BuildingTypeClass::FindOrCreate(Destination); /*0x6726b0*/
    }
  }
  return KeyCount > 0; /*0x6726bc*/
}



// ==== 0x006726D0  CCINIClass::LoadTypeList  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::LoadTypeList(CCINIClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (unsigned __int8 *)aTerraintypes); /*0x6726e7*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6726ed*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, (unsigned __int8 *)aTerraintypes, i); /*0x672705*/
    if ( INIClass::GetString(v6, (unsigned __int8 *)aTerraintypes, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x672713*/
      TerrainTypeClass::FindOrCreate(Destination); /*0x672720*/
  }
  return KeyCount > 0; /*0x67272c*/
}



// ==== 0x00672740  RulesClass::ReadSideData  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadSideData(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // edi
  unsigned __int8 *StringByIndex; // eax
  _DWORD *v4; // eax
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF
  INIClass *v7; // [esp+90h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v7->__pad_0, (unsigned __int8 *)aTeams); /*0x67275d*/
  for ( i = 0; i < KeyCount; ++i ) /*0x672763*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v7->__pad_0, (unsigned __int8 *)aTeams, i); /*0x67276f*/
    if ( INIClass::GetString(v7, (unsigned __int8 *)aTeams, StringByIndex, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67278c*/
      v4 = TechnoClass::Create(Destination); /*0x672799*/
    else
      v4 = 0; /*0x6727a0*/
    (*(void (__thiscall **)(_DWORD *, INIClass *))(*v4 + 100))(v4, v7); /*0x6727a7*/
  }
  return KeyCount > 0; /*0x6727b1*/
}



// ==== 0x006727D0  FactoryClass::LoadType  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::LoadType(FactoryClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (unsigned __int8 *)aSmudgetypes); /*0x6727e7*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6727ed*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, (unsigned __int8 *)aSmudgetypes, i); /*0x672805*/
    if ( INIClass::GetString(v6, (unsigned __int8 *)aSmudgetypes, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x672813*/
      FactoryClass::FindOrCreate(Destination); /*0x672820*/
  }
  return KeyCount > 0; /*0x67282c*/
}



// ==== 0x00672840  ObjectClass::ReadBuildingTypesBuildingTypeClass  this=ObjectClass  sig=csp ====
int __thiscall ReadBuildingTypesBuildingTypeClass(ObjectClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (unsigned __int8 *)aOverlaytypes); /*0x672857*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67285d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, (unsigned __int8 *)aOverlaytypes, i); /*0x672875*/
    if ( INIClass::GetString(v6, (unsigned __int8 *)aOverlaytypes, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x672883*/
      BuildingTypeClass::FindOrCreate2(Destination); /*0x672890*/
  }
  return KeyCount > 0; /*0x67289c*/
}



// ==== 0x006728B0  RulesClass::LoadAnimTypes  this=RulesClass  sig=csp ====
int __thiscall RulesClass::LoadAnimTypes(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, g_INI_Key_Animations); /*0x6728c6*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6728cc*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, g_INI_Key_Animations, i); /*0x6728e2*/
    if ( INIClass::GetString(v6, g_INI_Key_Animations, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x6728ef*/
      AnimTypeClass::FindOrCreate(Destination); /*0x6728fc*/
  }
  return KeyCount > 0; /*0x672908*/
}



// ==== 0x00672920  CCINIClass::LoadUnitTypes  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::LoadUnitTypes(CCINIClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, g_INI_Key_VoxelAnims); /*0x672936*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67293c*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, g_INI_Key_VoxelAnims, i); /*0x672952*/
    if ( INIClass::GetString(v6, g_INI_Key_VoxelAnims, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x67295f*/
      UnitTypeClass::FindOrCreate(Destination); /*0x67296c*/
  }
  return KeyCount > 0; /*0x672978*/
}



// ==== 0x00672990  WarheadTypeClass::LoadType  this=WarheadTypeClass  sig=csp ====
int __thiscall WarheadTypeClass::LoadType(WarheadTypeClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, g_INI_Key_Warheads); /*0x6729a6*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6729ac*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, g_INI_Key_Warheads, i); /*0x6729c2*/
    if ( INIClass::GetString(v6, g_INI_Key_Warheads, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x6729cf*/
      WarheadTypeClass::FindOrCreate(Destination); /*0x6729dc*/
  }
  return KeyCount > 0; /*0x6729e8*/
}



// ==== 0x00672A00  RulesClass::readColors  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readColors(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, g_INI_Key_Particles); /*0x672a16*/
  for ( i = 0; i < KeyCount; ++i ) /*0x672a1c*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, g_INI_Key_Particles, i); /*0x672a32*/
    if ( INIClass::GetString(v6, g_INI_Key_Particles, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x672a3f*/
      NetworkEventClass::Process(Destination); /*0x672a4c*/
  }
  return KeyCount > 0; /*0x672a58*/
}



// ==== 0x00672A70  CCINIClass::ReadBuildingSettings  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::ReadBuildingSettings(CCINIClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, g_INI_Key_ParticleSystems); /*0x672a86*/
  for ( i = 0; i < KeyCount; ++i ) /*0x672a8c*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, g_INI_Key_ParticleSystems, i); /*0x672aa2*/
    if ( INIClass::GetString(v6, g_INI_Key_ParticleSystems, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x672aaf*/
      BuildingTypeClass::LoadOrGet(Destination); /*0x672abc*/
  }
  return KeyCount > 0; /*0x672ac8*/
}



// ==== 0x00672AE0  RulesClass::ReadMultiplayerDefaults  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadMultiplayerDefaults(RulesClass *this)
{
  int result; // eax
  char *i; // eax
  int v4; // edx
  WeaponTypeClass *v5; // eax
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
  unsigned int v31; // ecx
  unsigned int v32; // edx
  int v33; // ecx
  int v35; // eax
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v43; // eax
  double v44; // rax
  int v45; // edx
  int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // edx
  int v50; // ecx
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v56; // eax
  d... [39345 chars total]



// ==== 0x00673E80  RulesClass::ReadPowerupsSection  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadPowerupsSection(RulesClass *this)
{
  int result; // eax
  int v2; // edi
  double *v3; // ebp
  char *v4; // eax
  const char *v5; // esi
  char *v6; // eax
  GlobalArray *v7; // esi
  char *v8; // eax
  char *v9; // esi
  char *v10; // esi
  char String[128]; // [esp+0h] [ebp-80h] BYREF
  unsigned __int8 ***v13; // [esp+84h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v13, (unsigned __int8 *)aPowerups); /*0x673e90*/
  if ( result ) /*0x673e9c*/
  {
    v2 = 0; /*0x673ea5*/
    v3 = dbl_89EC28; /*0x673ea7*/
    do /*0x673fd7*/
    {
      result = INIClass::GetString( /*0x673ed0*/
                 (INIClass *)v13,
                 (unsigned __int8 *)aPowerups,
                 (&off_7E523C)[v2],
                 a0None,
                 String,
                 128);
      if ( result ) /*0x673ed7*/
      {
        v4 = strtok(String, Str); /*0x673ee7*/
        v5 = v4; /*0x673eec*/
        if ( v4 ) /*0x673ef3*/
        {
          String::Trim(v4); /*0x673ef7*/
          dword_81DA8C[v2] = atoi(v5); /*0x673f05*/
        }
        v6 = strtok(0, Str); /*0x673f13*/
        v7 = (GlobalArray *)v6; /*0x673f18*/
        if ( v6 ) /*0x673f1f*/
        {
          String::Trim(v6); /*0x673f23*/
          dword_81DAD8[v2] = GlobalArray::FindString(v7); /*0x673f2f*/
        }
        v8 = strtok(0, Str); /*0x673f3d*/
        v9 = v8; /*0x673f42*/
        if ( v8 ) /*0x673f49*/
        {
          String::Trim(v8); /*0x673f4d*/
          if ( _strcmpi(v9, off_825BF8) ) /*0x673f58*/
          {
            if ( !_strcmpi(v9, g_Str_no) ) /*0x673f73*/
              byte_89ECC0[v2] = 0; /*0x673f7f*/
          }
          else
          {
            byte_89ECC0[v2] = 1; /*0x673f64*/
          }
        }
        result = (int)strtok(0, Str); /*0x673f8c*/
        v10 = (char *)result; /*0x673f91*/
        if ( result ) /*0x673f98*/
        {
          if ( strchr((const char *)result, 37) ) /*0x673f9d*/
          {
            result = atof(v10); /*0x673faa*/
            __asm { fmul ds:dbl_7E3808 } /*0x673faf*/
          }
          else
          {
            String::Trim(v10); /*0x673fbc*/
            result = atof(v10); /*0x673fc2*/
          }
          __asm { fstp qword ptr [ebp+0] } /*0x673fca*/
          *v3 = _RT1; /*0x673fca*/
        }
      }
      ++v3; /*0x673fcd*/
      ++v2; /*0x673fd0*/
    }
    while ( (int)v3 < (int)byte_89ECC0 ); /*0x673fd7*/
    LOBYTE(result) = 1; /*0x673fdf*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x673feb*/
  }
  return result; /*0x673fe2*/
}



// ==== 0x00674000  RulesClass::LoadSpeedTypes  this=RulesClass  sig=csp ====
int __thiscall RulesClass::LoadSpeedTypes(RulesClass *this)
{
  unsigned __int8 **v1; // esi
  float *v2; // ebx
  int result; // eax
  unsigned __int8 *v5; // edx
  unsigned __int8 *v8; // ecx
  unsigned __int8 *v11; // eax
  unsigned __int8 *v14; // edx
  unsigned __int8 *v17; // ecx
  unsigned __int8 *v20; // eax
  unsigned __int8 *v23; // edx
  double *v25; // [esp+10h] [ebp+4h]

  v1 = (unsigned __int8 **)off_839D68; /*0x674007*/
  v2 = (float *)&unk_89EA44; /*0x67400c*/
  do /*0x67422a*/
  {
    result = INIClass::BinarySearchSection((int)v25, *v1); /*0x674016*/
    if ( result ) /*0x674022*/
    {
      INIClass::ReadDouble_Overwrite(v25, *v1, g_INI_Key_Hover, 1.0); /*0x674039*/
      __asm /*0x67403e*/
      {
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x674049*/
        INIClass::ReadDouble_Overwrite(v25, *v1, g_INI_Key_Hover, 1.0); /*0x67405c*/
      else
        __asm { fld ds:dbl_7E1718 } /*0x674063*/
      v5 = *v1; /*0x674069*/
      __asm { fstp dword ptr [ebx+8] } /*0x674070*/
      v2[2] = _ET1; /*0x674070*/
      INIClass::ReadDouble_Overwrite(v25, v5, g_INI_Key_Foot, 1.0); /*0x67407d*/
      __asm /*0x674082*/
      {
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x67408d*/
        INIClass::ReadDouble_Overwrite(v25, *v1, g_INI_Key_Foot, 1.0); /*0x6740a0*/
      else
        __asm { fld ds:dbl_7E1718 } /*0x6740a7*/
      v8 = *v1; /*0x6740ad*/
      __asm { fstp dword ptr [ebx-4] } /*0x6740b4*/
      *(v2 - 1) = _ET1; /*0x6740b4*/
      INIClass::ReadDouble_Overwrite(v25, v8, g_INI_Key_Track, 1.0); /*0x6740c1*/
      __asm /*0x6740c6*/
      {
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x6740d1*/
        INIClass::ReadDouble_Overwrite(v25, *v1, g_INI_Key_Track, 1.0); /*0x6740e4*/
      else
        __asm { fld ds:dbl_7E1718 } /*0x6740eb*/
      v11 = *v1; /*0x6740f1*/
      __asm { fstp dword ptr [ebx] } /*0x6740f8*/
      *v2 = _ET1; /*0x6740f8*/
      INIClass::ReadDouble_Overwrite(v25, v11, g_INI_Key_Wheel, 1.0); /*0x674104*/
      __asm /*0x674109*/
      {
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x674114*/
        INIClass::ReadDouble_Overwrite(v25, *v1, g_INI_Key_Wheel, 1.0); /*0x674127*/
      else
        __asm { fld ds:dbl_7E1718 } /*0x67412e*/
      v14 = *v1; /*0x674134*/
      __asm { fstp dword ptr [ebx+4] } /*0x67413b*/
      v2[1] = _ET1; /*0x67413b*/
      v2[3] = 1.0; /*0x674148*/
      INIClass::ReadDouble_Overwrite(v25, v14, g_INI_Key_Float, 1.0); /*0x67414f*/
      __asm /*0x674154*/
      {
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x67415f*/
        INIClass::ReadDouble_Overwrite(v25, *v1, g_INI_Key_Float, 1.0); /*0x674172*/
      else
        __asm { fld ds:dbl_7E1718 } /*0x674179*/
      v17 = *v1; /*0x67417f*/
      __asm { fstp dword ptr [ebx+10h] } /*0x674186*/
      v2[4] = _ET1; /*0x674186*/
      INIClass::ReadDouble_Overwrite(v25, v17, g_INI_Key_Amphibious, 1.0); /*0x674193*/
      __asm /*0x674198*/
      {
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x6741a3*/
        INIClass::ReadDouble_Overwrite(v25, *v1, g_INI_Key_Amphibious, 1.0); /*0x6741b6*/
      else
        __asm { fld ds:dbl_7E1718 } /*0x6741bd*/
      v20 = *v1; /*0x6741c3*/
      __asm { fstp dword ptr [ebx+14h] } /*0x6741ca*/
      v2[5] = _ET1; /*0x6741ca*/
      INIClass::ReadDouble_Overwrite(v25, v20, g_INI_Key_FloatBeach, 1.0); /*0x6741d7*/
      __asm /*0x6741dc*/
      {
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x6741e7*/
        INIClass::ReadDouble_Overwrite(v25, *v1, g_INI_Key_FloatBeach, 1.0); /*0x6741fa*/
      else
        __asm { fld ds:dbl_7E1718 } /*0x674201*/
      v23 = *v1; /*0x674207*/
      __asm { fstp dword ptr [ebx+18h] } /*0x67420b*/
      v2[6] = _ET1; /*0x67420b*/
      result = INIClass::ReadBool_Overwrite((int *)v25, v23, aBuildable, 0); /*0x674216*/
      *((_BYTE *)v2 + 28) = result; /*0x67421b*/
    }
    v2 += 9; /*0x67421e*/
    ++v1; /*0x674221*/
  }
  while ( (int)v2 < (int)((float *)&dbl_89EBF0 + 1) ); /*0x67422a*/
  LOBYTE(result) = 1; /*0x674232*/
  return result; /*0x674230*/
}



// ==== 0x00674240  RulesClass::ReadIQSection  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadIQSection(RulesClass *this)
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
  bool *v15; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v15, (unsigned __int8 *)g_INI_Key_IQ); /*0x674250*/
  if ( result ) /*0x67425c*/
  {
    *(_DWORD *)&this->__pad_C3C[2040] = INIClass::ReadInt_Overwrite( /*0x67427c*/
                                          v15,
                                          (unsigned __int8 *)g_INI_Key_IQ,
                                          aMaxiqlevels,
                                          *(_DWORD *)&this->__pad_C3C[2040]);
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x674297*/
                      v15,
                      (unsigned __int8 *)g_INI_Key_IQ,
                      aSuperweapons,
                      *(_DWORD *)&this->__pad_C3C[2044]);
    v4 = *(_DWORD *)&this->__pad_C3C[2048]; /*0x67429c*/
    *(_DWORD *)&this->__pad_C3C[2044] = Int_Overwrite; /*0x6742a2*/
    v5 = INIClass::ReadInt_Overwrite(v15, (unsigned __int8 *)g_INI_Key_IQ, aProduction, v4); /*0x6742b6*/
    v6 = *(_DWORD *)&this->__pad_C3C[2052]; /*0x6742bb*/
    *(_DWORD *)&this->__pad_C3C[2048] = v5; /*0x6742c1*/
    *(_DWORD *)&this->__pad_C3C[2052] = INIClass::ReadInt_Overwrite( /*0x6742db*/
                                          v15,
                                          (unsigned __int8 *)g_INI_Key_IQ,
                                          aGuardarea,
                                          v6);
    v7 = INIClass::ReadInt_Overwrite( /*0x6742f6*/
           v15,
           (unsigned __int8 *)g_INI_Key_IQ,
           aRepairsell,
           *(_DWORD *)&this->__pad_C3C[2056]);
    v8 = *(_DWORD *)&this->__pad_C3C[2060]; /*0x6742fb*/
    *(_DWORD *)&this->__pad_C3C[2056] = v7; /*0x674301*/
    v9 = INIClass::ReadInt_Overwrite(v15, (unsigned __int8 *)g_INI_Key_IQ, aAutocrush, v8); /*0x674315*/
    v10 = *(_DWORD *)&this->__pad_C3C[2064]; /*0x67431a*/
    *(_DWORD *)&this->__pad_C3C[2060] = v9; /*0x674320*/
    *(_DWORD *)&this->__pad_C3C[2064] = INIClass::ReadInt_Overwrite( /*0x67433a*/
                                          v15,
                                          (unsigned __int8 *)g_INI_Key_IQ,
                                          (unsigned __int8 *)&stru_82BA00.?[28],
                                          v10);
    v11 = INIClass::ReadInt_Overwrite( /*0x674355*/
            v15,
            (unsigned __int8 *)g_INI_Key_IQ,
            aContentscan,
            *(_DWORD *)&this->__pad_C3C[2068]);
    v12 = *(_DWORD *)&this->__pad_C3C[2072]; /*0x67435a*/
    *(_DWORD *)&this->__pad_C3C[2068] = v11; /*0x674360*/
    v13 = INIClass::ReadInt_Overwrite(v15, (unsigned __int8 *)g_INI_Key_IQ, aAircraft, v12); /*0x674374*/
    v14 = *(_DWORD *)&this->__pad_C3C[2076]; /*0x674379*/
    *(_DWORD *)&this->__pad_C3C[2072] = v13; /*0x67437f*/
    *(_DWORD *)&this->__pad_C3C[2076] = INIClass::ReadInt_Overwrite( /*0x674399*/
                                          v15,
                                          (unsigned __int8 *)g_INI_Key_IQ,
                                          aHarvester,
                                          v14);
    result = INIClass::ReadInt_Overwrite( /*0x6743b4*/
               v15,
               (unsigned __int8 *)g_INI_Key_IQ,
               aSellback,
               *(_DWORD *)&this->__pad_C3C[2080]);
    *(_DWORD *)&this->__pad_C3C[2080] = result; /*0x6743b9*/
    LOBYTE(result) = 1; /*0x6743c0*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6743c7*/
  }
  return result; /*0x6743bf*/
}



// ==== 0x006743D0  RulesClass::readDifficulty  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readDifficulty(RulesClass *this)
{
  int result; // eax
  int Int_Overwrite; // eax
  int v4; // edx
  int v5; // edx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  int v13; // ecx
  double v15; // [esp-8h] [ebp-10h]
  bool *v16; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v16, (unsigned __int8 *)aJumpjetcontrol); /*0x6743e0*/
  if ( result ) /*0x6743ec*/
  {
    *(_DWORD *)&this->__pad_240[460] = INIClass::ReadInt_Overwrite( /*0x67440c*/
                                         v16,
                                         (unsigned __int8 *)aJumpjetcontrol,
                                         aTurnrate,
                                         *(_DWORD *)&this->__pad_240[460]);
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x674427*/
                      v16,
                      (unsigned __int8 *)aJumpjetcontrol,
                      g_INI_Key_Speed,
                      *(_DWORD *)&this->__pad_240[464]);
    v4 = *(_DWORD *)&this->__pad_240[476]; /*0x67442c*/
    *(_DWORD *)&this->__pad_240[464] = Int_Overwrite; /*0x674432*/
    HIDWORD(v15) = v4; /*0x674444*/
    LODWORD(v15) = *(_DWORD *)&this->__pad_240[472]; /*0x674445*/
    INIClass::ReadDouble_Overwrite((double *)v16, (unsigned __int8 *)aJumpjetcontrol, aClimb, v15); /*0x67444e*/
    v5 = *(_DWORD *)&this->__pad_240[480]; /*0x674453*/
    __asm { fstp qword ptr [esi+418h] } /*0x67445b*/
    *(double *)&this->__pad_240[472] = _RT1; /*0x67445b*/
    v7 = INIClass::ReadInt_Overwrite(v16, (unsigned __int8 *)aJumpjetcontrol, aCruiseheight, v5); /*0x67446d*/
    v8 = *(_DWORD *)&this->__pad_240[492]; /*0x674472*/
    v9 = *(_DWORD *)&this->__pad_240[488]; /*0x674478*/
    *(_DWORD *)&this->__pad_240[480] = v7; /*0x67447e*/
    INIClass::ReadDouble_Overwrite( /*0x674493*/
      (double *)v16,
      (unsigned __int8 *)aJumpjetcontrol,
      (unsigned __int8 *)&stru_81AF8C.?[103],
      COERCE_DOUBLE(__PAIR64__(v8, v9)));
    v10 = *(_DWORD *)&this->__pad_240[500]; /*0x674498*/
    v11 = *(_DWORD *)&this->__pad_240[496]; /*0x67449e*/
    __asm { fstp qword ptr [esi+428h] } /*0x6744a4*/
    *(double *)&this->__pad_240[488] = _RT1; /*0x6744a4*/
    INIClass::ReadDouble_Overwrite( /*0x6744b9*/
      (double *)v16,
      (unsigned __int8 *)aJumpjetcontrol,
      aWobblesperseco,
      COERCE_DOUBLE(__PAIR64__(v10, v11)));
    v13 = *(_DWORD *)&this->__pad_240[504]; /*0x6744be*/
    __asm { fstp qword ptr [esi+430h] } /*0x6744c4*/
    *(double *)&this->__pad_240[496] = _RT1; /*0x6744c4*/
    result = INIClass::ReadInt_Overwrite(v16, (unsigned __int8 *)aJumpjetcontrol, aWobbledeviatio, v13); /*0x6744d9*/
    *(_DWORD *)&this->__pad_240[504] = result; /*0x6744de*/
    LOBYTE(result) = 1; /*0x6744e5*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6744ec*/
  }
  return result; /*0x6744e4*/
}



// ==== 0x00674500  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_674500(ObjectClass *this)
{
  int result; // eax
  RulesClass *v2; // [esp+Ch] [ebp+4h]

  INIClass::ReadDifficultyModifiers((INIClass *)v2); /*0x674515*/
  INIClass::ReadDifficultyModifiers((INIClass *)v2); /*0x674527*/
  result = INIClass::ReadDifficultyModifiers((INIClass *)v2); /*0x674539*/
  LOBYTE(result) = 1; /*0x67453f*/
  return result; /*0x67453e*/
}



// ==== 0x00674550  RulesClass::ReadMovies  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadMovies(RulesClass *this)
{
  int result; // eax
  int v2; // ebp
  int i; // ebx
  unsigned __int8 *StringByIndex; // eax
  char *v5; // esi
  char Source[32]; // [esp+4h] [ebp-20h] BYREF
  INIClass *v7; // [esp+28h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v7, (unsigned __int8 *)aMovies); /*0x674560*/
  if ( result ) /*0x67456c*/
  {
    result = INIClass::GetKeyCount(v7->__pad_0, (unsigned __int8 *)aMovies); /*0x67457d*/
    v2 = result; /*0x674582*/
    for ( i = 0; i < v2; ++i ) /*0x674588*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v7->__pad_0, (unsigned __int8 *)aMovies, i); /*0x6745a4*/
      result = INIClass::GetString(v7, (unsigned __int8 *)aMovies, StringByIndex, g_Str__none_, Source, 32); /*0x6745b3*/
      if ( result ) /*0x6745ba*/
      {
        result = LookupNameIndex((ObjectClass *)Source); /*0x6745c0*/
        if ( result == -1 ) /*0x6745c8*/
        {
          v5 = _strdup(Source); /*0x6745da*/
          result = g_MissionQueueFrame.localVariables[581]; /*0x6745dc*/
          if ( g_MissionQueueFrame.localVariables[583] < g_MissionQueueFrame.localVariables[581] /*0x674614*/
            || (BYTE1(g_MissionQueueFrame.localVariables[582]) || !g_MissionQueueFrame.localVariables[581])
            && g_MissionQueueFrame.localVariables[584] > 0
            && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_MissionQueueFrame.localVariables[579] + 8))(
                           &g_MissionQueueFrame.localVariables[579],
                           g_MissionQueueFrame.localVariables[581] + g_MissionQueueFrame.localVariables[584],
                           0),
                (_BYTE)result) )
          {
            result = g_MissionQueueFrame.localVariables[583]++; /*0x67461c*/
            *(_DWORD *)(g_MissionQueueFrame.localVariables[580] + 4 * result) = v5; /*0x67462b*/
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



// ==== 0x00674650  SidebarClass::ReadButtonList  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::ReadButtonList(SidebarClass *this)
{
  char *v1; // edi
  int result; // eax
  int i; // esi
  int v4; // edi
  int v5; // esi
  char *j; // eax
  int EntryIndexByName; // eax
  char String[512]; // [esp+8h] [ebp-200h] BYREF
  unsigned __int8 ***v9; // [esp+20Ch] [ebp+4h]
  char v10; // [esp+210h] [ebp+8h]

  v1 = aMultiplayeradv; /*0x67465e*/
  if ( !v10 ) /*0x674664*/
    v1 = aAdvancedcomman; /*0x674666*/
  result = INIClass::BinarySearchSection((int)v9, (unsigned __int8 *)v1); /*0x674676*/
  if ( result ) /*0x674682*/
  {
    for ( i = 0; i < 25; ++i ) /*0x674689*/
      globalHelper_0CFD20(i, dword_8427CC); /*0x674693*/
    result = INIClass::GetString( /*0x6746b9*/
               (INIClass *)v9,
               (unsigned __int8 *)v1,
               (unsigned __int8 *)aButtonlist,
               &g_INI_DefaultBuffer,
               String,
               512);
    if ( result ) /*0x6746c0*/
    {
      v4 = 0; /*0x6746cc*/
      v5 = 0; /*0x6746ce*/
      for ( j = strtok(String, Str); j; j = strtok(0, Str) ) /*0x6746da*/
      {
        EntryIndexByName = SidebarClass::findEntryIndexByName(j); /*0x6746de*/
        if ( EntryIndexByName != dword_8427CC ) /*0x6746e9*/
          globalHelper_0CFD20(EntryIndexByName, v5); /*0x6746ef*/
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
int __thiscall RulesClass::SaveLoad_Prefix(RulesClass *this, int *a2)
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
  RulesClass *v60; // edi
  int v61; // ebx
  int result; // eax

  v2 = a2; /*0x674732*/
  (*(void (__stdcall **)(int *, RulesClass *, int, _DWORD))(*a2 + 16))(a2, this, 6336, 0); /*0x674744*/
  v4 = *v2; /*0x67474d*/
  a2 = *(int **)&this->__pad_C3C[1384]; /*0x674759*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v4 + 16))(v2, &a2, 4, 0); /*0x67475d*/
  for ( i = 0; i < (int)a2; ++i ) /*0x674768*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1372] + 4 * i, 4, 0); /*0x67477b*/
  v6 = *v2; /*0x67478d*/
  a2 = *(int **)&this->__pad_C3C[1412]; /*0x674799*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v6 + 16))(v2, &a2, 4, 0); /*0x67479d*/
  for ( j = 0; j < (int)a2; ++j ) /*0x6747a8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1400] + 4 * j, 4, 0); /*0x6747bb*/
  v8 = *v2; /*0x6747cd*/
  a2 = *(int **)&this->__pad_C3C[1440]; /*0x6747d9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v8 + 16))(v2, &a2, 4, 0); /*0x6747dd*/
  for ( k = 0; k < (int)a2; ++k ) /*0x6747e8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1428] + 4 * k, 4, 0); /*0x6747fb*/
  v10 = *v2; /*0x67480d*/
  a2 = *(int **)&this->__pad_C3C[1468]; /*0x674819*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v10 + 16))(v2, &a2, 4, 0); /*0x67481d*/
  for ( m = 0; m < (int)a2; ++m ) /*0x674828*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1456] + 4 * m, 4, 0); /*0x67483b*/
  v12 = *v2; /*0x67484d*/
  a2 = *(int **)&this->__pad_C3C[1496]; /*0x674859*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v12 + 16))(v2, &a2, 4, 0); /*0x67485d*/
  for ( n = 0; n < (int)a2; ++n ) /*0x674868*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1484] + 4 * n, 4, 0); /*0x67487b*/
  v14 = *v2; /*0x67488d*/
  a2 = *(int **)&this->__pad_C3C[1524]; /*0x674899*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v14 + 16))(v2, &a2, 4, 0); /*0x67489d*/
  for ( ii = 0; ii < (int)a2; ++ii ) /*0x6748a8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1512] + 4 * ii, 4, 0); /*0x6748bb*/
  v16 = *v2; /*0x6748cd*/
  a2 = *(int **)&this->__pad_C3C[1552]; /*0x6748d9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v16 + 16))(v2, &a2, 4, 0); /*0x6748dd*/
  for ( jj = 0; jj < (int)a2; ++jj ) /*0x6748e8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1540] + 4 * jj, 4, 0); /*0x6748fb*/
  v18 = *v2; /*0x67490d*/
  a2 = *(int **)&this->__pad_C3C[1580]; /*0x674919*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v18 + 16))(v2, &a2, 4, 0); /*0x67491d*/
  for ( kk = 0; kk < (int)a2; ++kk ) /*0x674928*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1568] + 4 * kk, 4, 0); /*0x67493b*/
  v20 = *v2; /*0x67494d*/
  a2 = *(int **)&this->__pad_C3C[1608]; /*0x674959*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v20 + 16))(v2, &a2, 4, 0); /*0x67495d*/
  for ( mm = 0; mm < (int)a2; ++mm ) /*0x674968*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1596] + 4 * mm, 4, 0); /*0x67497b*/
  v22 = *v2; /*0x67498d*/
  a2 = *(int **)&this->__pad_C3C[1636]; /*0x674999*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v22 + 16))(v2, &a2, 4, 0); /*0x67499d*/
  for ( nn = 0; nn < (int)a2; ++nn ) /*0x6749a8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1624] + 4 * nn, 4, 0); /*0x6749bb*/
  v24 = *v2; /*0x6749cd*/
  a2 = *(int **)&this->__pad_C3C[1664]; /*0x6749d9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v24 + 16))(v2, &a2, 4, 0); /*0x6749dd*/
  for ( i1 = 0; i1 < (int)a2; ++i1 ) /*0x6749e8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1652] + 4 * i1, 4, 0); /*0x6749fb*/
  v26 = *v2; /*0x674a0d*/
  a2 = *(int **)&this->__pad_C3C[1692]; /*0x674a19*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v26 + 16))(v2, &a2, 4, 0); /*0x674a1d*/
  for ( i2 = 0; i2 < (int)a2; ++i2 ) /*0x674a28*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1680] + 4 * i2, 4, 0); /*0x674a3b*/
  v28 = *v2; /*0x674a4d*/
  a2 = *(int **)&this->__pad_C3C[1720]; /*0x674a59*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v28 + 16))(v2, &a2, 4, 0); /*0x674a5d*/
  for ( i3 = 0; i3 < (int)a2; ++i3 ) /*0x674a68*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1708] + 4 * i3, 4, 0); /*0x674a7b*/
  v30 = *v2; /*0x674a8d*/
  a2 = *(int **)&this->__pad_C3C[1988]; /*0x674a99*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v30 + 16))(v2, &a2, 4, 0); /*0x674a9d*/
  for ( i4 = 0; i4 < (int)a2; ++i4 ) /*0x674aa8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1976] + 4 * i4, 4, 0); /*0x674abb*/
  v32 = *v2; /*0x674acd*/
  a2 = *(int **)&this->__pad_C3C[1324]; /*0x674ad9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v32 + 16))(v2, &a2, 4, 0); /*0x674add*/
  for ( i5 = 0; i5 < (int)a2; ++i5 ) /*0x674ae8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1312] + 4 * i5, 4, 0); /*0x674afb*/
  v34 = *v2; /*0x674b0d*/
  a2 = (int *)this->PowerEmergency[0]; /*0x674b19*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v34 + 16))(v2, &a2, 4, 0); /*0x674b1d*/
  for ( i6 = 0; i6 < (int)a2; ++i6 ) /*0x674b28*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->AttackInterval[1] + 4 * i6, 4, 0); /*0x674b3b*/
  v36 = *v2; /*0x674b4d*/
  a2 = *(int **)&this->__pad_C3C[340]; /*0x674b59*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v36 + 16))(v2, &a2, 4, 0); /*0x674b5d*/
  for ( i7 = 0; i7 < (int)a2; ++i7 ) /*0x674b68*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[328] + 4 * i7, 4, 0); /*0x674b7b*/
  v38 = *v2; /*0x674b8d*/
  a2 = *(int **)&this->__pad_C3C[368]; /*0x674b99*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v38 + 16))(v2, &a2, 4, 0); /*0x674b9d*/
  for ( i8 = 0; i8 < (int)a2; ++i8 ) /*0x674ba8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[356] + 4 * i8, 4, 0); /*0x674bbb*/
  v40 = *v2; /*0x674bcd*/
  a2 = *(int **)&this->__pad_C3C[396]; /*0x674bd9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v40 + 16))(v2, &a2, 4, 0); /*0x674bdd*/
  for ( i9 = 0; i9 < (int)a2; ++i9 ) /*0x674be8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[384] + 4 * i9, 4, 0); /*0x674bfb*/
  v42 = *v2; /*0x674c0d*/
  a2 = *(int **)&this->__pad_C3C[700]; /*0x674c19*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v42 + 16))(v2, &a2, 4, 0); /*0x674c1d*/
  for ( i10 = 0; i10 < (int)a2; ++i10 ) /*0x674c28*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[688] + 4 * i10, 4, 0); /*0x674c3b*/
  v44 = *v2; /*0x674c4d*/
  a2 = *(int **)&this->__pad_C3C[728]; /*0x674c59*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v44 + 16))(v2, &a2, 4, 0); /*0x674c5d*/
  for ( i11 = 0; i11 < (int)a2; ++i11 ) /*0x674c68*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[716] + 4 * i11, 4, 0); /*0x674c7b*/
  v46 = *v2; /*0x674c8d*/
  a2 = *(int **)&this->__pad_C3C[756]; /*0x674c99*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v46 + 16))(v2, &a2, 4, 0); /*0x674c9d*/
  for ( i12 = 0; i12 < (int)a2; ++i12 ) /*0x674ca8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[744] + 4 * i12, 4, 0); /*0x674cbb*/
  v48 = *v2; /*0x674ccd*/
  a2 = *(int **)&this->__pad_C3C[484]; /*0x674cd9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v48 + 16))(v2, &a2, 4, 0); /*0x674cdd*/
  for ( i13 = 0; i13 < (int)a2; ++i13 ) /*0x674ce8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[472] + 4 * i13, 4, 0); /*0x674cfb*/
  v50 = *v2; /*0x674d0d*/
  a2 = *(int **)&this->__pad_C3C[664]; /*0x674d19*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v50 + 16))(v2, &a2, 4, 0); /*0x674d1d*/
  for ( i14 = 0; i14 < (int)a2; ++i14 ) /*0x674d28*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[652] + 4 * i14, 4, 0); /*0x674d3b*/
  v52 = *v2; /*0x674d4d*/
  a2 = *(int **)&this->__pad_C3C[512]; /*0x674d59*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v52 + 16))(v2, &a2, 4, 0); /*0x674d5d*/
  for ( i15 = 0; i15 < (int)a2; ++i15 ) /*0x674d68*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[500] + 4 * i15, 4, 0); /*0x674d7b*/
  v54 = *v2; /*0x674d8d*/
  a2 = *(int **)&this->__pad_C3C[424]; /*0x674d99*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v54 + 16))(v2, &a2, 4, 0); /*0x674d9d*/
  for ( i16 = 0; i16 < (int)a2; ++i16 ) /*0x674da8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[412] + 4 * i16, 4, 0); /*0x674dbb*/
  v56 = *v2; /*0x674dcd*/
  a2 = *(int **)&this->__pad_C3C[1892]; /*0x674dd9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v56 + 16))(v2, &a2, 4, 0); /*0x674ddd*/
  for ( i17 = 0; i17 < (int)a2; ++i17 ) /*0x674de8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1880] + 4 * i17, 4, 0); /*0x674dfb*/
  v58 = *v2; /*0x674e0d*/
  a2 = *(int **)&this->__pad_C3C[1920]; /*0x674e19*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v58 + 16))(v2, &a2, 4, 0); /*0x674e1d*/
  for ( i18 = 0; i18 < (int)a2; ++i18 ) /*0x674e28*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1908] + 4 * i18, 4, 0); /*0x674e3b*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[528], v2); /*0x674e4e*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[556], v2); /*0x674e5a*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[584], v2); /*0x674e66*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[612], v2); /*0x674e72*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[1736], v2); /*0x674e7e*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[1764], v2); /*0x674e8a*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[1792], v2); /*0x674e96*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[1820], v2); /*0x674ea2*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[1848], v2); /*0x674eae*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[1932], v2); /*0x674eba*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[1336], v2); /*0x674ec6*/
  DynamicVector::Read((DynamicVector *)&this->__pad_240[508], v2); /*0x674ed2*/
  DynamicVector::Read((DynamicVector *)&this->__pad_240[536], v2); /*0x674ede*/
  DynamicVector::Read((DynamicVector *)&this->__pad_240[564], v2); /*0x674eea*/
  RulesClass::readTerrainTypes((RulesClass *)&this->RadarEventColorSpeed, v2); /*0x674ef3*/
  RulesClass::readTerrainTypes((RulesClass *)&this->CloakingStages, v2); /*0x674eff*/
  DynamicVector::Read((DynamicVector *)&this->__pad_240[280], v2); /*0x674f0b*/
  DynamicVector::Read((DynamicVector *)&this->__pad_240[308], v2); /*0x674f17*/
  DynamicVector::Read((DynamicVector *)&this->__pad_240[336], v2); /*0x674f23*/
  DynamicVector::Read((DynamicVector *)&this->__pad_240[364], v2); /*0x674f2f*/
  DynamicVector::Read((DynamicVector *)&this->__pad_240[392], v2); /*0x674f3b*/
  DynamicVector::Read((DynamicVector *)&this->__pad_240[420], v2); /*0x674f47*/
  DynamicVector::Read((DynamicVector *)&this->HealCrateSound, v2); /*0x674f53*/
  DynamicVector::Read((DynamicVector *)&this->__pad_704[48], v2); /*0x674f5f*/
  VectorClass::LoadStream((VectorClass *)&this->NodBaseDefenseCoefficient[1], v2); /*0x674f6b*/
  VectorClass::LoadStream((VectorClass *)this->PadAircraft, v2); /*0x674f77*/
  VectorClass::LoadStream((VectorClass *)&this->Parachute, v2); /*0x674f83*/
  VectorClass::LoadStream((VectorClass *)&this->ChronoReinfDelay, v2); /*0x674f8f*/
  VectorClass::LoadStream((VectorClass *)&this->ThirdDisguise, v2); /*0x674f9b*/
  DynamicVector::Read_Alt((DynamicVector *)&this->ChronoHarvTooFarDistance, v2); /*0x674fa7*/
  DynamicVector::Read_Alt((DynamicVector *)&this->MutateWarhead, v2); /*0x674fb3*/
  DynamicVector::Read_Alt((DynamicVector *)&this->IonCannonWarhead, v2); /*0x674fbf*/
  DynamicVector::Read_Alt((DynamicVector *)&this->CHRONOSK_SHP, v2); /*0x674fcb*/
  DynamicVector::Read_Alt((DynamicVector *)&this->V3Rocket[4], v2); /*0x674fd7*/
  DynamicVector::Read_Alt((DynamicVector *)&this->V3Rocket[11], v2); /*0x674fe3*/
  DynamicVector::Read_Alt((DynamicVector *)&this->DMisl[5], v2); /*0x674fef*/
  DynamicVector::Read_Alt((DynamicVector *)&this->DMisl[12], v2); /*0x674ffb*/
  DynamicVector::Read_Alt((DynamicVector *)&this->CMisl[6], v2); /*0x675007*/
  DynamicVector::Read_Alt((DynamicVector *)this->MyEffectivenessCoefficientDefault, v2); /*0x675013*/
  DynamicVector::Read_Alt((DynamicVector *)&this->TargetStrengthCoefficientDefault[1], v2); /*0x67501f*/
  DynamicVector::Read_Alt((DynamicVector *)&this->AirstripRatio[1], v2); /*0x67502b*/
  DynamicVector::Read_Alt((DynamicVector *)&this->TeslaLimit, v2); /*0x675037*/
  DynamicVector::Read_Alt((DynamicVector *)this->WarRatio, v2); /*0x675043*/
  DynamicVector::Read_Alt((DynamicVector *)this->RefineryRatio, v2); /*0x67504f*/
  DynamicVector::Read_Alt((DynamicVector *)&this->TreeStrength, v2); /*0x67505b*/
  DynamicVector::Read_Alt((DynamicVector *)&this->GameSpeedBias[1], v2); /*0x675067*/
  DynamicVector::Read_Alt((DynamicVector *)&this->SuperWeapons, v2); /*0x675073*/
  DynamicVector::Read_Alt((DynamicVector *)&this->Aircraft, v2); /*0x67507f*/
  DynamicVector::Read_Alt((DynamicVector *)&this->CrateMinimum, v2); /*0x67508b*/
  DynamicVector::Read_Alt((DynamicVector *)&this->MinUnitCount, v2); /*0x675097*/
  DynamicVector::Read_Alt((DynamicVector *)&this->TiberiumGrows, v2); /*0x6750a3*/
  RulesClass::readAnimations((RulesClass *)&this->Easy[3], v2); /*0x6750af*/
  Stream::WriteIntArray((Stream *)&this->Easy[10], v2); /*0x6750bb*/
  Stream::WriteIntArray((Stream *)&this->Easy[17], v2); /*0x6750c7*/
  Stream::WriteIntArray((Stream *)&this->Normal[9], v2); /*0x6750d3*/
  SaveLoad::StreamVector((SaveLoad *)&this->ThirdSurvivorDivisor, v2); /*0x6750df*/
  RulesClass::readParticleSystems((RulesClass *)&this->__pad_C3C[956], v2); /*0x6750eb*/
  SaveLoad::StreamVector((SaveLoad *)&this->HarvesterLoadRate, v2); /*0x6750f7*/
  VectorClass::SaveLoad((VectorClass *)&this->__pad_C3C[196], v2); /*0x675103*/
  SaveLoad::StreamVector((SaveLoad *)&this->__pad_C3C[224], v2); /*0x67510f*/
  DynamicVector::Read_Alt((DynamicVector *)&this->__pad_C3C[252], v2); /*0x67511b*/
  Stream::WriteIntArray((Stream *)&this->ScoreAnimSound, v2); /*0x675127*/
  Stream::WriteIntArray((Stream *)&this->GUICloseSound, v2); /*0x675133*/
  Stream::WriteIntArray((Stream *)&this->PlaceBeaconSound, v2); /*0x67513f*/
  Stream::WriteIntArray((Stream *)&this->CrateRevealSound, v2); /*0x67514b*/
  DynamicVector::Read((DynamicVector *)this->VeteranROF, v2); /*0x675157*/
  VectorClass::SaveLoad((VectorClass *)&this->Difficult[6], v2); /*0x675163*/
  DynamicVector::Read((DynamicVector *)&this->Difficult[13], v2); /*0x67516f*/
  VectorClass::SaveLoad((VectorClass *)this->__pad_C3C, v2); /*0x67517b*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[28], v2); /*0x675187*/
  VectorClass::SaveLoad((VectorClass *)&this->__pad_C3C[56], v2); /*0x675193*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[84], v2); /*0x67519f*/
  VectorClass::SaveLoad((VectorClass *)&this->__pad_C3C[112], v2); /*0x6751ab*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[140], v2); /*0x6751b7*/
  VectorClass::SaveLoad((VectorClass *)&this->__pad_C3C[168], v2); /*0x6751c3*/
  Stream::WriteIntArray((Stream *)&this->__pad_240[96], v2); /*0x6751cf*/
  Stream::WriteIntArray((Stream *)&this->__pad_240[124], v2); /*0x6751db*/
  Stream::WriteIntArray((Stream *)&this->__pad_240[152], v2); /*0x6751e7*/
  v60 = (RulesClass *)((char *)this + 6260); /*0x6751ec*/
  v61 = 16; /*0x6751f2*/
  do /*0x675203*/
  {
    result = RulesClass::readGeneralSection(v60, (int)v2); /*0x6751fa*/
    v60 = (RulesClass *)((char *)v60 + 3); /*0x6751ff*/
    --v61; /*0x675202*/
  }
  while ( v61 ); /*0x675203*/
  return result; /*0x675205*/
}



// ==== 0x00675210  RulesClass::SaveLoad_Prefix_0  this=RulesClass  sig=csp ====
int __thiscall RulesClass::SaveLoad_Prefix_0(RulesClass *this, int i)
{
  TypeList *v3; // ebx
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
  int i42;... [88139 chars total]



// ==== 0x00678850  ObjectClass::InitInterfaceStubsCOM  this=ObjectClass  sig=csp ====
int __thiscall InitInterfaceStubsCOM(TechnoClass *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
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
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // ecx
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  int v50; // ecx
  int v51; // eax
  int v52; // eax
  int v53; // ecx
  int v54; // ... [42787 chars total]



// ==== 0x00679A10  SideClass::LoadAllFromINI  this=AbstractClass  sig=csp ====
char __stdcall SideClass::LoadAllFromINI(_DWORD *a1)
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
  char *v19; // ebx
  MissionClass *v20; // edi
  ObjectClass *v22; // [esp+0h] [ebp-Ch]

  for ( i = 0; i < dword_A83CA8; ++i ) /*0x679a20*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A83C9C + i) + 100))( /*0x679a2d*/
      *((_DWORD *)dword_A83C9C + i),
      a1);
  for ( j = 0; j < dword_A8E340; ++j ) /*0x679a43*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A8E334 + j) + 100))( /*0x679a50*/
      *((_DWORD *)dword_A8E334 + j),
      a1);
  for ( k = 0; k < FootClass_Array.?[0]; ++k ) /*0x679a66*/
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(FootClass_Array.?[3] + 4 * k) + 100))( /*0x679a77*/
      *(_DWORD *)(FootClass_Array.?[3] + 4 * k),
      &DSurface_ViewBounds.__pad_FC[228]);
  for ( m = 0; m < dword_A83C78; ++m ) /*0x679a8d*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A83C6C + m) + 100))( /*0x679a9a*/
      *((_DWORD *)dword_A83C6C + m),
      a1);
  for ( n = 0; n < dword_A8B228; ++n ) /*0x679ab0*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A8B21C + n) + 100))( /*0x679abd*/
      *((_DWORD *)dword_A8B21C + n),
      a1);
  for ( ii = 0; ii < dword_A83CF0; ++ii ) /*0x679ad3*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A83CE4 + ii) + 100))( /*0x679ae0*/
      *((_DWORD *)dword_A83CE4 + ii),
      a1);
  for ( jj = 0; jj < dword_A8E358; ++jj ) /*0x679af6*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A8E34C + jj) + 100))( /*0x679b03*/
      *((_DWORD *)dword_A8E34C + jj),
      a1);
  for ( kk = 0; kk < g_WeaponTypePool; ++kk ) /*0x679b19*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)g_WeaponTypeConfig + kk) + 100))( /*0x679b26*/
      *((_DWORD *)g_WeaponTypeConfig + kk),
      a1);
  for ( mm = 0; mm < dword_A83C90; ++mm ) /*0x679b3c*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A83C84 + mm) + 100))( /*0x679b49*/
      *((_DWORD *)dword_A83C84 + mm),
      a1);
  for ( nn = 0; nn < g_WarheadTypePool; ++nn ) /*0x679b5f*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_8874C4 + nn) + 100))( /*0x679b6c*/
      *((_DWORD *)dword_8874C4 + nn),
      a1);
  for ( i1 = 0; i1 < g_WeaponTypePool; ++i1 ) /*0x679b82*/
    WeaponTypeClass::CalculateSpeed(*((WeaponTypeClass **)g_WeaponTypeConfig + i1)); /*0x679b8c*/
  for ( i2 = 0; i2 < dword_A83C78; ++i2 ) /*0x679ba4*/
    nullsub_7(v22); /*0x679baf*/
  for ( i3 = 0; i3 < dword_A8E328; ++i3 ) /*0x679bc7*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A8E31C + i3) + 100))( /*0x679bd5*/
      *((_DWORD *)dword_A8E31C + i3),
      a1);
  for ( i4 = 0; i4 < *(int *)&stru_A8EB00.?[68]; ++i4 ) /*0x679beb*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * i4) + 100))( /*0x679bf9*/
      *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * i4),
      a1);
  for ( i5 = 0; i5 < *(int *)&stru_A83D50.__pad_3C[4]; ++i5 ) /*0x679c0f*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * i5) + 100))( /*0x679c1c*/
      *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * i5),
      a1);
  for ( i6 = 0; i6 < *(int *)&stru_A83D50.__pad_3C[28]; ++i6 ) /*0x679c32*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * i6) + 100))( /*0x679c3f*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * i6),
      a1);
  for ( i7 = 0; i7 < (int)stru_A83D50.SuperClass_field_0x28; ++i7 ) /*0x679c55*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * i7) + 100))( /*0x679c62*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * i7),
      a1);
  for ( i8 = 0; i8 < stru_A8EB00.ObjectTypeClass[14]; ++i8 ) /*0x679c78*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(stru_A8EB00.ObjectTypeClass[11] + 4 * i8) + 100))( /*0x679c85*/
      *(_DWORD *)(stru_A8EB00.ObjectTypeClass[11] + 4 * i8),
      a1);
  v19 = 0; /*0x679c92*/
  v20 = &stru_A8E3A8; /*0x679c94*/
  do /*0x679cad*/
  {
    v20->ObjectClass = v19; /*0x679c9c*/
    MissionClass::LoadFromINI(v20, a1); /*0x679c9e*/
    v20 = (MissionClass *)((char *)v20 + 32); /*0x679ca3*/
    ++v19; /*0x679ca6*/
  }
  while ( (int)v20 < (int)&dword_A8E7A8 ); /*0x679cad*/
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
    v2[0] = &List<INIClass::INISection *>::`vftable'; /*0x679ceb*/
    memset(&v2[7], 0, 12); /*0x679cf8*/
    v3 = 0; /*0x679d04*/
    v4 = 0; /*0x679d08*/
    v5 = 0; /*0x679d0c*/
    v6 = 0; /*0x679d10*/
    v1[0] = &CCINIClass_Vtable; /*0x679d14*/
    CCFileClass::Construct(v7, g_Str_File_CoopCampMD_ini); /*0x679d1c*/
    if ( CCINIClass::Load(v1, (int)v7, 0, 0) ) /*0x679d2c*/
      dword_B053B4 = Hash::ComputeHashSHA1((int)v1); /*0x679d3e*/
    byte_B053B8 = 1; /*0x679d4a*/
    v7[0] = &CCFileClass::`vftable'; /*0x679d51*/
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

  v0 = Hash::ComputeHashSHA1(dword_887048); /*0x679da5*/
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
  v7[0] = &List<INIClass::INISection *>::`vftable'; /*0x679dfa*/
  memset(&v7[7], 0, 12); /*0x679e07*/
  v8 = 0; /*0x679e13*/
  v9 = 0; /*0x679e17*/
  v10 = 0; /*0x679e1b*/
  v11 = 0; /*0x679e1f*/
  v6[0] = &CCINIClass_Vtable; /*0x679e23*/
  CCFileClass::Construct(v12, g_Str_File_CoopCampMD_ini); /*0x679e2b*/
  if ( CCINIClass::Load(v6, (int)v12, 0, 0) ) /*0x679e3b*/
    dword_B053B4 = Hash::ComputeHashSHA1((int)v6); /*0x679e4d*/
  byte_B053B8 = 1; /*0x679e59*/
  v12[0] = &CCFileClass::`vftable'; /*0x679e60*/
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
  return Hash::ComputeHashSHA1((int)&dword_887180);
}



// ==== 0x00679ED0  unknown_libname_30  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
int unknown_libname_30()
{
  return Hash::ComputeHashSHA1((int)&dword_887128);
}



// ==== 0x00679EE0  LoadArtINI  this=-  sig=ida-proto ====
int ArtINI_Load()
{
  _DWORD v1[22]; // [esp+0h] [ebp-6Ch] BYREF
  _BYTE v2[12]; // [esp+58h] [ebp-14h] BYREF
  int v3; // [esp+64h] [ebp-8h]

  INIClass::ClearSection((int)&dword_887180, 0, 0); /*0x679eec*/
  CCFileClass::Construct(v1, aArtmdIni); /*0x679efa*/
  CCINIClass::Load(&dword_887180, (int)v1, 0, 0); /*0x679f0d*/
  v1[0] = &CCFileClass::`vftable'; /*0x679f16*/
  v3 = 0; /*0x679f1e*/
  Vector::Clear((int)v2); /*0x679f26*/
  v1[0] = &off_7E1668; /*0x679f2f*/
  return BufferIOFileClass::Dtor(v1); /*0x679f3c*/
}



// ==== 0x00679F40  INIEntry::Exists  this=INIEntry  sig=csp ====
BOOL __thiscall INIEntry::Exists(INIEntry *this, unsigned __int8 *a2, unsigned __int8 *a3)
{
  if ( a3 ) /*0x679f46*/
    return HashTableSection::FindSection((int *)this, a2, a3) != 0; /*0x679f6a*/
  else
    return INIClass::BinarySearchSection((int)this, a2) != 0; /*0x679f56*/
}



// ==== 0x00679F70  VectorClass::Dtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass::Dtor(VectorClass *this)
{
  void *Items; // eax

  Items = this->Items; /*0x679f76*/
  this->vtable0 = &VectorClass<int>::`vftable'; /*0x679f79*/
  if ( Items && this->IsAllocated ) /*0x679f83*/
  {
    __3_YAXPAX_Z(Items); /*0x679f89*/
    this->Items = 0; /*0x679f91*/
  }
  this->IsAllocated = 0; /*0x679f94*/
  this->Capacity = 0; /*0x679f97*/
}



// ==== 0x00679FA0  RulesClass::readMaximums  this=VectorClass  sig=csp ====
void __thiscall RulesClass::readMaximums(RulesClass *this)
{
  void *DetailMinFrameRateMovie; // eax

  DetailMinFrameRateMovie = (void *)this->DetailMinFrameRateMovie; /*0x679fa6*/
  this->DetailMinFrameRateNormal = (int)&VectorClass<BuildingTypeClass const *>::`vftable'; /*0x679fa9*/
  if ( DetailMinFrameRateMovie && BYTE1(this->AmmoCrateDamage) ) /*0x679fb3*/
  {
    __3_YAXPAX_Z(DetailMinFrameRateMovie); /*0x679fb9*/
    this->DetailMinFrameRateMovie = 0; /*0x679fc1*/
  }
  BYTE1(this->AmmoCrateDamage) = 0; /*0x679fc4*/
  this->DetailBufferZoneWidth = 0; /*0x679fc7*/
}



// ==== 0x00679FD0  RulesClass::readInfantryTypes  this=VectorClass  sig=csp ====
void __thiscall RulesClass::readInfantryTypes(RulesClass *this)
{
  void *DetailMinFrameRateMovie; // eax

  DetailMinFrameRateMovie = (void *)this->DetailMinFrameRateMovie; /*0x679fd6*/
  this->DetailMinFrameRateNormal = (int)&VectorClass<UnitTypeClass const *>::`vftable'; /*0x679fd9*/
  if ( DetailMinFrameRateMovie && BYTE1(this->AmmoCrateDamage) ) /*0x679fe3*/
  {
    __3_YAXPAX_Z(DetailMinFrameRateMovie); /*0x679fe9*/
    this->DetailMinFrameRateMovie = 0; /*0x679ff1*/
  }
  BYTE1(this->AmmoCrateDamage) = 0; /*0x679ff4*/
  this->DetailBufferZoneWidth = 0; /*0x679ff7*/
}



// ==== 0x0067A000  RulesClass::readCountries  this=VectorClass  sig=csp ====
void __thiscall RulesClass::readCountries(RulesClass *this)
{
  void *DetailMinFrameRateMovie; // eax

  DetailMinFrameRateMovie = (void *)this->DetailMinFrameRateMovie; /*0x67a006*/
  this->DetailMinFrameRateNormal = (int)&VectorClass<AircraftTypeClass const *>::`vftable'; /*0x67a009*/
  if ( DetailMinFrameRateMovie && BYTE1(this->AmmoCrateDamage) ) /*0x67a013*/
  {
    __3_YAXPAX_Z(DetailMinFrameRateMovie); /*0x67a019*/
    this->DetailMinFrameRateMovie = 0; /*0x67a021*/
  }
  BYTE1(this->AmmoCrateDamage) = 0; /*0x67a024*/
  this->DetailBufferZoneWidth = 0; /*0x67a027*/
}



// ==== 0x0067A030  TypeList::InfantryCleanup  this=VectorClass  sig=csp ====
void __thiscall TypeList::InfantryCleanup(TypeList *this)
{
  void *Items; // eax

  Items = this->?; /*0x67a036*/
  this->DynamicVectorClass = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x67a039*/
  if ( Items && this->? ) /*0x67a043*/
  {
    __3_YAXPAX_Z(Items); /*0x67a049*/
    this->? = 0; /*0x67a051*/
  }
  this->? = 0; /*0x67a054*/
  this->? = 0; /*0x67a057*/
}



// ==== 0x0067A060  RulesClass::readVehicleTypes  this=VectorClass  sig=csp ====
void __thiscall RulesClass::readVehicleTypes(RulesClass *this)
{
  void *DetailMinFrameRateMovie; // eax

  DetailMinFrameRateMovie = (void *)this->DetailMinFrameRateMovie; /*0x67a066*/
  this->DetailMinFrameRateNormal = (int)&VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67a069*/
  if ( DetailMinFrameRateMovie && BYTE1(this->AmmoCrateDamage) ) /*0x67a073*/
  {
    __3_YAXPAX_Z(DetailMinFrameRateMovie); /*0x67a079*/
    this->DetailMinFrameRateMovie = 0; /*0x67a081*/
  }
  BYTE1(this->AmmoCrateDamage) = 0; /*0x67a084*/
  this->DetailBufferZoneWidth = 0; /*0x67a087*/
}



// ==== 0x0067A090  TypeList::CopyFull  this=TypeList  sig=csp ====
int *__thiscall TypeList::CopyFull(TypeList *this, int *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this != (TypeList *)a2 ) /*0x67a09a*/
  {
    (*((void (__thiscall **)(TypeList *))this->DynamicVectorClass + 3))(this); /*0x67a09e*/
    v3 = a2[2]; /*0x67a0a1*/
    this->? = v3; /*0x67a0a6*/
    if ( v3 ) /*0x67a0a9*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67a0b3*/
      this->? = v4; /*0x67a0bb*/
      if ( v4 ) /*0x67a0c0*/
      {
        Capacity = this->?; /*0x67a0c2*/
        v6 = 0; /*0x67a0c5*/
        this->? = 1; /*0x67a0c9*/
        if ( Capacity > 0 ) /*0x67a0cd*/
        {
          do /*0x67a0e1*/
          {
            *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a0d8*/
            ++v6; /*0x67a0de*/
          }
          while ( v6 < this->? ); /*0x67a0e1*/
        }
      }
    }
    else
    {
      this->? = 0; /*0x67a0e5*/
      this->? = 0; /*0x67a0ec*/
    }
  }
  this->? = a2[4]; /*0x67a0f3*/
  this->? = a2[5]; /*0x67a0f9*/
  this->unknown_18 = a2[6]; /*0x67a0ff*/
  return (int *)this; /*0x67a104*/
}



// ==== 0x0067A110  TypeList::CopyAircraft  this=TypeList  sig=csp ====
int *__thiscall TypeList::CopyAircraft(TypeList *this, int *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this != (TypeList *)a2 ) /*0x67a11a*/
  {
    (*((void (__thiscall **)(TypeList *))this->DynamicVectorClass + 3))(this); /*0x67a11e*/
    v3 = a2[2]; /*0x67a121*/
    this->? = v3; /*0x67a126*/
    if ( v3 ) /*0x67a129*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67a133*/
      this->? = v4; /*0x67a13b*/
      if ( v4 ) /*0x67a140*/
      {
        Capacity = this->?; /*0x67a142*/
        v6 = 0; /*0x67a145*/
        this->? = 1; /*0x67a149*/
        if ( Capacity > 0 ) /*0x67a14d*/
        {
          do /*0x67a161*/
          {
            *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a158*/
            ++v6; /*0x67a15e*/
          }
          while ( v6 < this->? ); /*0x67a161*/
        }
      }
    }
    else
    {
      this->? = 0; /*0x67a165*/
      this->? = 0; /*0x67a16c*/
    }
  }
  this->? = a2[4]; /*0x67a173*/
  this->? = a2[5]; /*0x67a179*/
  this->unknown_18 = a2[6]; /*0x67a17f*/
  return (int *)this; /*0x67a184*/
}



// ==== 0x0067A190  RulesClass::readAircraftTypes  this=RulesClass  sig=csp ====
int *__thiscall RulesClass::readAircraftTypes(RulesClass *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int DetailBufferZoneWidth; // ecx
  int v6; // eax

  if ( this != (RulesClass *)a2 ) /*0x67a19a*/
  {
    (*(void (__thiscall **)(RulesClass *))(this->DetailMinFrameRateNormal + 12))(this); /*0x67a19e*/
    v3 = a2[2]; /*0x67a1a1*/
    this->DetailBufferZoneWidth = v3; /*0x67a1a6*/
    if ( v3 ) /*0x67a1a9*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a1b3*/
      this->DetailMinFrameRateMovie = v4; /*0x67a1bb*/
      if ( v4 ) /*0x67a1c0*/
      {
        DetailBufferZoneWidth = this->DetailBufferZoneWidth; /*0x67a1c2*/
        v6 = 0; /*0x67a1c5*/
        BYTE1(this->AmmoCrateDamage) = 1; /*0x67a1c9*/
        if ( DetailBufferZoneWidth > 0 ) /*0x67a1cd*/
        {
          do /*0x67a1e1*/
          {
            *(_DWORD *)(this->DetailMinFrameRateMovie + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a1d8*/
            ++v6; /*0x67a1de*/
          }
          while ( v6 < this->DetailBufferZoneWidth ); /*0x67a1e1*/
        }
      }
    }
    else
    {
      this->DetailMinFrameRateMovie = 0; /*0x67a1e5*/
      BYTE1(this->AmmoCrateDamage) = 0; /*0x67a1ec*/
    }
  }
  this->LargeVisceroid = (UnitTypeClass *)a2[4]; /*0x67a1f3*/
  this->SmallVisceroid = (UnitTypeClass *)a2[5]; /*0x67a1f9*/
  this->AttackingAircraftSightRange = a2[6]; /*0x67a1ff*/
  return &this->DetailMinFrameRateNormal; /*0x67a204*/
}



// ==== 0x0067A210  RulesClass::readSuperWeaponTypes  this=RulesClass  sig=csp ====
int *__thiscall RulesClass::readSuperWeaponTypes(RulesClass *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int DetailBufferZoneWidth; // ecx
  int v6; // eax

  if ( this != (RulesClass *)a2 ) /*0x67a21a*/
  {
    (*(void (__thiscall **)(RulesClass *))(this->DetailMinFrameRateNormal + 12))(this); /*0x67a21e*/
    v3 = a2[2]; /*0x67a221*/
    this->DetailBufferZoneWidth = v3; /*0x67a226*/
    if ( v3 ) /*0x67a229*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a233*/
      this->DetailMinFrameRateMovie = v4; /*0x67a23b*/
      if ( v4 ) /*0x67a240*/
      {
        DetailBufferZoneWidth = this->DetailBufferZoneWidth; /*0x67a242*/
        v6 = 0; /*0x67a245*/
        BYTE1(this->AmmoCrateDamage) = 1; /*0x67a249*/
        if ( DetailBufferZoneWidth > 0 ) /*0x67a24d*/
        {
          do /*0x67a261*/
          {
            *(_DWORD *)(this->DetailMinFrameRateMovie + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a258*/
            ++v6; /*0x67a25e*/
          }
          while ( v6 < this->DetailBufferZoneWidth ); /*0x67a261*/
        }
      }
    }
    else
    {
      this->DetailMinFrameRateMovie = 0; /*0x67a265*/
      BYTE1(this->AmmoCrateDamage) = 0; /*0x67a26c*/
    }
  }
  this->LargeVisceroid = (UnitTypeClass *)a2[4]; /*0x67a273*/
  this->SmallVisceroid = (UnitTypeClass *)a2[5]; /*0x67a279*/
  this->AttackingAircraftSightRange = a2[6]; /*0x67a27f*/
  return &this->DetailMinFrameRateNormal; /*0x67a284*/
}



// ==== 0x0067A290  TypeList::CopyInfantry  this=TypeList  sig=csp ====
int *__thiscall TypeList::CopyInfantry(TypeList *this, int *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this != (TypeList *)a2 ) /*0x67a29a*/
  {
    (*((void (__thiscall **)(TypeList *))this->DynamicVectorClass + 3))(this); /*0x67a29e*/
    v3 = a2[2]; /*0x67a2a1*/
    this->? = v3; /*0x67a2a6*/
    if ( v3 ) /*0x67a2a9*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67a2b3*/
      this->? = v4; /*0x67a2bb*/
      if ( v4 ) /*0x67a2c0*/
      {
        Capacity = this->?; /*0x67a2c2*/
        v6 = 0; /*0x67a2c5*/
        this->? = 1; /*0x67a2c9*/
        if ( Capacity > 0 ) /*0x67a2cd*/
        {
          do /*0x67a2e1*/
          {
            *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a2d8*/
            ++v6; /*0x67a2de*/
          }
          while ( v6 < this->? ); /*0x67a2e1*/
        }
      }
    }
    else
    {
      this->? = 0; /*0x67a2e5*/
      this->? = 0; /*0x67a2ec*/
    }
  }
  this->? = a2[4]; /*0x67a2f3*/
  this->? = a2[5]; /*0x67a2f9*/
  this->unknown_18 = a2[6]; /*0x67a2ff*/
  return (int *)this; /*0x67a304*/
}



// ==== 0x0067A310  RulesClass::readBuildingTypes  this=RulesClass  sig=csp ====
int *__thiscall RulesClass::readBuildingTypes(RulesClass *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int DetailBufferZoneWidth; // ecx
  int v6; // eax

  if ( this != (RulesClass *)a2 ) /*0x67a31a*/
  {
    (*(void (__thiscall **)(RulesClass *))(this->DetailMinFrameRateNormal + 12))(this); /*0x67a31e*/
    v3 = a2[2]; /*0x67a321*/
    this->DetailBufferZoneWidth = v3; /*0x67a326*/
    if ( v3 ) /*0x67a329*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a333*/
      this->DetailMinFrameRateMovie = v4; /*0x67a33b*/
      if ( v4 ) /*0x67a340*/
      {
        DetailBufferZoneWidth = this->DetailBufferZoneWidth; /*0x67a342*/
        v6 = 0; /*0x67a345*/
        BYTE1(this->AmmoCrateDamage) = 1; /*0x67a349*/
        if ( DetailBufferZoneWidth > 0 ) /*0x67a34d*/
        {
          do /*0x67a361*/
          {
            *(_DWORD *)(this->DetailMinFrameRateMovie + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a358*/
            ++v6; /*0x67a35e*/
          }
          while ( v6 < this->DetailBufferZoneWidth ); /*0x67a361*/
        }
      }
    }
    else
    {
      this->DetailMinFrameRateMovie = 0; /*0x67a365*/
      BYTE1(this->AmmoCrateDamage) = 0; /*0x67a36c*/
    }
  }
  this->LargeVisceroid = (UnitTypeClass *)a2[4]; /*0x67a373*/
  this->SmallVisceroid = (UnitTypeClass *)a2[5]; /*0x67a379*/
  this->AttackingAircraftSightRange = a2[6]; /*0x67a37f*/
  return &this->DetailMinFrameRateNormal; /*0x67a384*/
}



// ==== 0x0067A390  TypeList::VoxelAnimConstructor  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList::VoxelAnimConstructor(TypeList *this)
{
  this->? = 0; /*0x67a394*/
  this->? = 0; /*0x67a397*/
  this->? = 1; /*0x67a39a*/
  this->? = 0; /*0x67a39e*/
  this->? = 10; /*0x67a3a1*/
  this->? = 0; /*0x67a3a8*/
  this->DynamicVectorClass = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x67a3ab*/
  return &this->DynamicVectorClass; /*0x67a3b1*/
}



// ==== 0x0067A3C0  RulesClass::readTerrainTypes  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readTerrainTypes(RulesClass *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  UnitTypeClass *LargeVisceroid; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a3cc*/
  LargeVisceroid = this->LargeVisceroid; /*0x67a3d9*/
  (*(void (__stdcall **)(int *, UnitTypeClass **, int, _DWORD))(v3 + 16))(a2, &LargeVisceroid, 4, 0); /*0x67a3dd*/
  result = (int)LargeVisceroid; /*0x67a3e0*/
  for ( i = 0; i < (int)LargeVisceroid; ++i ) /*0x67a3e8*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->DetailMinFrameRateMovie + 4 * i, 4, 0); /*0x67a3f8*/
    result = (int)LargeVisceroid; /*0x67a3fb*/
  }
  return result; /*0x67a404*/
}



// ==== 0x0067A410  _DynamicVectorClass_PBVVoxelAnimTypeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall TypeList_VoxelAnim::ddtor(_DynamicVectorClass_PBVVoxelAnimTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x67a416*/
  this->m_10 = 0; /*0x67a419*/
  if ( v2 && BYTE1(this->m_C) ) /*0x67a420*/
  {
    __3_YAXPAX_Z(v2); /*0x67a426*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67a42e*/
  }
  BYTE1(this->m_C) = 0; /*0x67a431*/
  this->m_8 = 0; /*0x67a434*/
}



// ==== 0x0067A440  _DynamicVectorClass_PBVVoxelAnimTypeClass::GetIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall TypeList_VoxelAnim::GetIndex(_DynamicVectorClass_PBVVoxelAnimTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x67a440*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x67a455*/
  else
    return 0; /*0x67a447*/
}



// ==== 0x0067A460  _VectorClass_PBVVoxelAnimTypeClass::Clear  this=VectorClass  sig=csp ====
int __thiscall TypeList_VoxelAnim::Clear(_VectorClass_PBVVoxelAnimTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x67a46a*/
}



// ==== 0x0067A470  AnimTypeList::Constructor  this=TypeList  sig=csp ====
_DWORD *__thiscall AnimTypeList::Constructor(AnimTypeList *this)
{
  this->Items = 0; /*0x67a474*/
  this->Capacity = 0; /*0x67a477*/
  this->IsInitialized = 1; /*0x67a47a*/
  this->IsAllocated = 0; /*0x67a47e*/
  this->CapacityIncrement = 10; /*0x67a481*/
  this->Items = 0; /*0x67a488*/
  *this = (AnimTypeList)&TypeList<AnimTypeClass const *>::`vftable'; /*0x67a48b*/
  return this; /*0x67a491*/
}



// ==== 0x0067A4A0  Stream::WriteIntArray  this=Stream  sig=csp ====
int __thiscall Stream::WriteIntArray(Stream *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int Stream_field_10; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a4ac*/
  Stream_field_10 = this->Stream_field_10; /*0x67a4b9*/
  (*(void (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &Stream_field_10, 4, 0); /*0x67a4bd*/
  result = Stream_field_10; /*0x67a4c0*/
  for ( i = 0; i < Stream_field_10; ++i ) /*0x67a4c8*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->Stream_field_04 + 4 * i, 4, 0); /*0x67a4d8*/
    result = Stream_field_10; /*0x67a4db*/
  }
  return result; /*0x67a4e4*/
}



// ==== 0x0067A4F0  TypeList::Construct  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList::Construct(TypeList *this)
{
  this->? = 0; /*0x67a4f4*/
  this->? = 0; /*0x67a4f7*/
  this->? = 1; /*0x67a4fa*/
  this->? = 0; /*0x67a4fe*/
  this->? = 10; /*0x67a501*/
  this->? = 0; /*0x67a508*/
  this->DynamicVectorClass = &TypeList<int>::`vftable'; /*0x67a50b*/
  return &this->DynamicVectorClass; /*0x67a511*/
}



// ==== 0x0067A520  DynamicVector::Read  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::Read(DynamicVector *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  void *DynamicVector_field_0x10; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a52c*/
  DynamicVector_field_0x10 = this->DynamicVector_field_0x10; /*0x67a539*/
  (*(void (__stdcall **)(int *, void **, int, _DWORD))(v3 + 16))(a2, &DynamicVector_field_0x10, 4, 0); /*0x67a53d*/
  result = (int)DynamicVector_field_0x10; /*0x67a540*/
  for ( i = 0; i < (int)DynamicVector_field_0x10; ++i ) /*0x67a548*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))( /*0x67a558*/
      a2,
      *(_DWORD *)&this->DynamicVector_field_0x1[3] + 4 * i,
      4,
      0);
    result = (int)DynamicVector_field_0x10; /*0x67a55b*/
  }
  return result; /*0x67a564*/
}



// ==== 0x0067A570  Rules::CopyDataArray  this=Rules  sig=csp ====
_DWORD *__thiscall Rules::CopyDataArray(Rules *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (Rules *)a2 ) /*0x67a57a*/
    goto LABEL_8; /*0x67a57a*/
  (*(void (__thiscall **)(Rules *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x67a57e*/
  v3 = a2[2]; /*0x67a581*/
  *(_DWORD *)&this->m_5[3] = v3; /*0x67a586*/
  if ( !v3 ) /*0x67a589*/
  {
    *(_DWORD *)&this->m_1[3] = 0; /*0x67a5d6*/
    BYTE1(this->m_C) = 0; /*0x67a5dd*/
LABEL_8:
    *(_DWORD *)this->__tail_10 = a2[4]; /*0x67a5e1*/
    this->u32_14 = a2[5]; /*0x67a5ea*/
    return this->__pad_0; /*0x67a5ed*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x67a593*/
  *(_DWORD *)&this->m_1[3] = v4; /*0x67a59b*/
  if ( !v4 ) /*0x67a5a0*/
    goto LABEL_8; /*0x67a5a0*/
  v5 = *(_DWORD *)&this->m_5[3]; /*0x67a5a2*/
  v6 = 0; /*0x67a5a5*/
  BYTE1(this->m_C) = 1; /*0x67a5a9*/
  if ( v5 <= 0 ) /*0x67a5ad*/
    goto LABEL_8; /*0x67a5ad*/
  do /*0x67a5c1*/
  {
    *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a5b8*/
    ++v6; /*0x67a5be*/
  }
  while ( v6 < *(_DWORD *)&this->m_5[3] ); /*0x67a5c1*/
  *(_DWORD *)this->__tail_10 = a2[4]; /*0x67a5c6*/
  this->u32_14 = a2[5]; /*0x67a5cc*/
  return this->__pad_0; /*0x67a5d1*/
}



// ==== 0x0067A600  TypeList::ConstructSmudge  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList::ConstructSmudge(TypeList *this)
{
  this->? = 0; /*0x67a604*/
  this->? = 0; /*0x67a607*/
  this->? = 1; /*0x67a60a*/
  this->? = 0; /*0x67a60e*/
  this->? = 10; /*0x67a611*/
  this->? = 0; /*0x67a618*/
  this->DynamicVectorClass = &TypeList<SmudgeTypeClass const *>::`vftable'; /*0x67a61b*/
  return &this->DynamicVectorClass; /*0x67a621*/
}



// ==== 0x0067A630  VectorClass::LoadStream  this=VectorClass  sig=csp ====
int __thiscall VectorClass::LoadStream(DynamicVectorClass *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int Count; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a63c*/
  Count = this->Count; /*0x67a649*/
  (*(void (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &Count, 4, 0); /*0x67a64d*/
  result = Count; /*0x67a650*/
  for ( i = 0; i < Count; ++i ) /*0x67a658*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->Items + 4 * i, 4, 0); /*0x67a668*/
    result = Count; /*0x67a66b*/
  }
  return result; /*0x67a674*/
}



// ==== 0x0067A680  _DynamicVectorClass_PBVSmudgeTypeClass::TypeList_vt03  this=DynamicVector  sig=csp ====
void __thiscall TypeList_VoxelAnim::TypeList_vt03(_DynamicVectorClass_PBVSmudgeTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x67a686*/
  this->m_10 = 0; /*0x67a689*/
  if ( v2 && BYTE1(this->m_C) ) /*0x67a690*/
  {
    __3_YAXPAX_Z(v2); /*0x67a696*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67a69e*/
  }
  BYTE1(this->m_C) = 0; /*0x67a6a1*/
  this->m_8 = 0; /*0x67a6a4*/
}



// ==== 0x0067A6B0  _DynamicVectorClass_PBVSmudgeTypeClass::TypeList_vt05  this=DynamicVector  sig=csp ====
unsigned int __thiscall TypeList_VoxelAnim::TypeList_vt05(_DynamicVectorClass_PBVSmudgeTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x67a6b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x67a6c5*/
  else
    return 0; /*0x67a6b7*/
}



// ==== 0x0067A6D0  _VectorClass_PBVSmudgeTypeClass::Clear  this=VectorClass  sig=csp ====
int __thiscall TypeList::Clear(_VectorClass_PBVSmudgeTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x67a6da*/
}



// ==== 0x0067A6E0  DynamicVector::Read_Alt  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::Read_Alt(DynamicVector *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  void *DynamicVector_field_0x10; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a6ec*/
  DynamicVector_field_0x10 = this->DynamicVector_field_0x10; /*0x67a6f9*/
  (*(void (__stdcall **)(int *, void **, int, _DWORD))(v3 + 16))(a2, &DynamicVector_field_0x10, 4, 0); /*0x67a6fd*/
  result = (int)DynamicVector_field_0x10; /*0x67a700*/
  for ( i = 0; i < (int)DynamicVector_field_0x10; ++i ) /*0x67a708*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))( /*0x67a718*/
      a2,
      *(_DWORD *)&this->DynamicVector_field_0x1[3] + 4 * i,
      4,
      0);
    result = (int)DynamicVector_field_0x10; /*0x67a71b*/
  }
  return result; /*0x67a724*/
}



// ==== 0x0067A730  RulesClass::readSmudgeTypes  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readSmudgeTypes(RulesClass *this)
{
  return (int)this->LargeVisceroid; /*0x67a733*/
}



// ==== 0x0067A740  UnitTypeList::Constructor  this=TypeList  sig=csp ====
_DWORD *__thiscall UnitTypeList::Constructor(UnitTypeList *this)
{
  this->Items = 0; /*0x67a744*/
  this->Capacity = 0; /*0x67a747*/
  this->IsInitialized = 1; /*0x67a74a*/
  this->IsAllocated = 0; /*0x67a74e*/
  this->CapacityIncrement = 10; /*0x67a751*/
  this->Items = 0; /*0x67a758*/
  *this = (UnitTypeList)&TypeList<UnitTypeClass const *>::`vftable'; /*0x67a75b*/
  return this; /*0x67a761*/
}



// ==== 0x0067A770  SaveLoad::StreamVector  this=SaveLoad  sig=csp ====
int __thiscall SaveLoad::StreamVector(SaveLoad *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a77c*/
  v6 = *((_DWORD *)this + 4); /*0x67a789*/
  (*(void (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &v6, 4, 0); /*0x67a78d*/
  result = v6; /*0x67a790*/
  for ( i = 0; i < v6; ++i ) /*0x67a798*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, *((_DWORD *)this + 1) + 4 * i, 4, 0); /*0x67a7a8*/
    result = v6; /*0x67a7ab*/
  }
  return result; /*0x67a7b4*/
}



// ==== 0x0067A7C0  RulesClass::readOverlayTypes  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readOverlayTypes(RulesClass *this)
{
  return (int)this->LargeVisceroid; /*0x67a7c3*/
}



// ==== 0x0067A7D0  RulesClass::readAnimations  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readAnimations(RulesClass *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  UnitTypeClass *LargeVisceroid; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a7dc*/
  LargeVisceroid = this->LargeVisceroid; /*0x67a7e9*/
  (*(void (__stdcall **)(int *, UnitTypeClass **, int, _DWORD))(v3 + 16))(a2, &LargeVisceroid, 4, 0); /*0x67a7ed*/
  result = (int)LargeVisceroid; /*0x67a7f0*/
  for ( i = 0; i < (int)LargeVisceroid; ++i ) /*0x67a7f8*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->DetailMinFrameRateMovie + 4 * i, 4, 0); /*0x67a808*/
    result = (int)LargeVisceroid; /*0x67a80b*/
  }
  return result; /*0x67a814*/
}



// ==== 0x0067A820  TypeList::InfantryConstructor  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList::InfantryConstructor(TypeList *this)
{
  this->? = 0; /*0x67a824*/
  this->? = 0; /*0x67a827*/
  this->? = 1; /*0x67a82a*/
  this->? = 0; /*0x67a82e*/
  this->? = 10; /*0x67a831*/
  this->? = 0; /*0x67a838*/
  this->DynamicVectorClass = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x67a83b*/
  return &this->DynamicVectorClass; /*0x67a841*/
}



// ==== 0x0067A850  VectorClass::SaveLoad  this=VectorClass  sig=csp ====
int __thiscall VectorClass::SaveLoad(DynamicVectorClass *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int Count; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a85c*/
  Count = this->Count; /*0x67a869*/
  (*(void (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &Count, 4, 0); /*0x67a86d*/
  result = Count; /*0x67a870*/
  for ( i = 0; i < Count; ++i ) /*0x67a878*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->Items + 4 * i, 4, 0); /*0x67a888*/
    result = Count; /*0x67a88b*/
  }
  return result; /*0x67a894*/
}



// ==== 0x0067A8A0  RulesClass::readWarheads  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readWarheads(RulesClass *this)
{
  return (int)this->LargeVisceroid; /*0x67a8a3*/
}



// ==== 0x0067A8B0  RulesClass::readParticles  this=TypeList  sig=csp ====
_DWORD *__thiscall RulesClass::readParticles(RulesClass *this)
{
  this->DetailMinFrameRateMovie = 0; /*0x67a8b4*/
  this->DetailBufferZoneWidth = 0; /*0x67a8b7*/
  LOBYTE(this->AmmoCrateDamage) = 1; /*0x67a8ba*/
  BYTE1(this->AmmoCrateDamage) = 0; /*0x67a8be*/
  this->SmallVisceroid = (UnitTypeClass *)10; /*0x67a8c1*/
  this->LargeVisceroid = 0; /*0x67a8c8*/
  this->DetailMinFrameRateNormal = (int)&TypeList<TerrainTypeClass const *>::`vftable'; /*0x67a8cb*/
  return &this->DetailMinFrameRateNormal; /*0x67a8d1*/
}



// ==== 0x0067A8E0  RulesClass::readParticleSystems  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readParticleSystems(RulesClass *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  UnitTypeClass *LargeVisceroid; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a8ec*/
  LargeVisceroid = this->LargeVisceroid; /*0x67a8f9*/
  (*(void (__stdcall **)(int *, UnitTypeClass **, int, _DWORD))(v3 + 16))(a2, &LargeVisceroid, 4, 0); /*0x67a8fd*/
  result = (int)LargeVisceroid; /*0x67a900*/
  for ( i = 0; i < (int)LargeVisceroid; ++i ) /*0x67a908*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->DetailMinFrameRateMovie + 4 * i, 4, 0); /*0x67a918*/
    result = (int)LargeVisceroid; /*0x67a91b*/
  }
  return result; /*0x67a924*/
}



// ==== 0x0067A930  _DynamicVectorClass_PBVTerrainTypeClass::GetClassIdentifier  this=DynamicVector  sig=csp ====
void __thiscall TypeList_cptr_TerrainTypeClass::GetClassIdentifier(_DynamicVectorClass_PBVTerrainTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x67a936*/
  this->m_10 = 0; /*0x67a939*/
  if ( v2 && BYTE1(this->m_C) ) /*0x67a940*/
  {
    __3_YAXPAX_Z(v2); /*0x67a946*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67a94e*/
  }
  BYTE1(this->m_C) = 0; /*0x67a951*/
  this->m_8 = 0; /*0x67a954*/
}



// ==== 0x0067A960  _DynamicVectorClass_PBVTerrainTypeClass::GetIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall TypeList_cptr_TerrainTypeClass::GetIndex(_DynamicVectorClass_PBVTerrainTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x67a960*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x67a975*/
  else
    return 0; /*0x67a967*/
}



// ==== 0x0067A980  _VectorClass_PBVTerrainTypeClass::SaveToINI  this=VectorClass  sig=csp ====
int __thiscall TypeList_cptr_TerrainTypeClass::SaveToINI(_VectorClass_PBVTerrainTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x67a98a*/
}



// ==== 0x0067A990  _TypeList_PBVVoxelAnimTypeClass::Add  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList_VoxelAnim::Add(_TypeList_PBVVoxelAnimTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x67a993*/
  *(_DWORD *)this = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67a996*/
  if ( v3 && this->IsAllocated ) /*0x67a9a0*/
  {
    __3_YAXPAX_Z(v3); /*0x67a9a8*/
    this->Items = 0; /*0x67a9b0*/
  }
  this->IsAllocated = 0; /*0x67a9bb*/
  this->Capacity = 0; /*0x67a9c1*/
  if ( (a2 & 1) != 0 ) /*0x67a9c8*/
    __3_YAXPAX_Z(this); /*0x67a9cb*/
  return this; /*0x67a9d5*/
}



// ==== 0x0067A9E0  _TypeList_PBVSmudgeTypeClass::TypeList_vt00  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList_VoxelAnim::TypeList_vt00(_TypeList_PBVSmudgeTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x67a9e3*/
  *(_DWORD *)this = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67a9e6*/
  if ( v3 && this->IsAllocated ) /*0x67a9f0*/
  {
    __3_YAXPAX_Z(v3); /*0x67a9f8*/
    this->Items = 0; /*0x67aa00*/
  }
  this->IsAllocated = 0; /*0x67aa0b*/
  this->Capacity = 0; /*0x67aa11*/
  if ( (a2 & 1) != 0 ) /*0x67aa18*/
    __3_YAXPAX_Z(this); /*0x67aa1b*/
  return this; /*0x67aa25*/
}



// ==== 0x0067AA30  _TypeList_PBVTerrainTypeClass::Add  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList_cptr_TerrainTypeClass::Add(_TypeList_PBVTerrainTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x67aa33*/
  *(_DWORD *)this = &VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67aa36*/
  if ( v3 && this->IsAllocated ) /*0x67aa40*/
  {
    __3_YAXPAX_Z(v3); /*0x67aa48*/
    this->Items = 0; /*0x67aa50*/
  }
  this->IsAllocated = 0; /*0x67aa5b*/
  this->Capacity = 0; /*0x67aa61*/
  if ( (a2 & 1) != 0 ) /*0x67aa68*/
    __3_YAXPAX_Z(this); /*0x67aa6b*/
  return this; /*0x67aa75*/
}



// ==== 0x0067AA80  VectorClass::CopyAssign  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CopyAssign(VectorClass *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)a2 ) /*0x67aa8a*/
    return &this->vtable0; /*0x67aa8a*/
  (*((void (__thiscall **)(VectorClass *))this->vtable0 + 3))(this); /*0x67aa8e*/
  v3 = a2[2]; /*0x67aa91*/
  this->Capacity = v3; /*0x67aa96*/
  if ( !v3 ) /*0x67aa99*/
  {
    this->Items = 0; /*0x67aada*/
    this->IsAllocated = 0; /*0x67aae1*/
    return &this->vtable0; /*0x67aae5*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67aaa3*/
  this->Items = v4; /*0x67aaab*/
  if ( !v4 ) /*0x67aab0*/
    return &this->vtable0; /*0x67aab0*/
  Capacity = this->Capacity; /*0x67aab2*/
  v6 = 0; /*0x67aab5*/
  this->IsAllocated = 1; /*0x67aab9*/
  if ( Capacity <= 0 ) /*0x67aabd*/
    return &this->vtable0; /*0x67aabd*/
  do /*0x67aad1*/
  {
    *((_DWORD *)this->Items + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67aac8*/
    ++v6; /*0x67aace*/
  }
  while ( v6 < this->Capacity ); /*0x67aad1*/
  return &this->vtable0; /*0x67aad5*/
}



// ==== 0x0067AAF0  _VectorClass_PBVVoxelAnimTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TypeList_VoxelAnim::AddRef(_VectorClass_PBVVoxelAnimTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x67aaf2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x67aafd*/
  {
    v3 = 0; /*0x67aaff*/
    if ( m_8 <= 0 ) /*0x67ab03*/
      return 1; /*0x67ab23*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x67ab05*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x67ab0b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x67ab14*/
    {
      ++v3; /*0x67ab16*/
      ++v4; /*0x67ab17*/
      if ( v3 >= m_8 ) /*0x67ab1c*/
        return 1; /*0x67ab1c*/
    }
  }
  return 0; /*0x67ab1e*/
}



// ==== 0x0067AB30  _VectorClass_PBVVoxelAnimTypeClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall TypeList_VoxelAnim::SetCapacity(_VectorClass_PBVVoxelAnimTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x67ab3c*/
  {
    LOBYTE(this->m_C) = 0; /*0x67ab46*/
    if ( a3 ) /*0x67ab4c*/
      v4 = a3; /*0x67ab62*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x67ab5e*/
    LOBYTE(this->m_C) = 1; /*0x67ab66*/
    if ( v4 ) /*0x67ab6a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x67ab75*/
      {
        m_8 = this->m_8; /*0x67ab7c*/
        if ( a2 < m_8 ) /*0x67ab81*/
          m_8 = a2; /*0x67ab83*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x67ab89*/
          ++i; /*0x67ab8e*/
        if ( BYTE1(this->m_C) ) /*0x67ab9b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x67aba6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x67abae*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x67abb7*/
      this->m_8 = a2; /*0x67abbf*/
      BYTE1(this->m_C) = a3 == 0; /*0x67abc2*/
      return 1; /*0x67abc8*/
    }
    else
    {
      return 0; /*0x67ab6f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVVoxelAnimTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x67abd2*/
    return 1; /*0x67abd8*/
  }
}



// ==== 0x0067ABE0  _VectorClass_PBVVoxelAnimTypeClass::Cleanup2  this=VectorClass  sig=csp ====
int __thiscall Vector::Cleanup2(_VectorClass_PBVVoxelAnimTypeClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->m_1[3]; /*0x67abe6*/
  if ( result && BYTE1(this->m_C) ) /*0x67abed*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x67abf3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67abfb*/
  }
  BYTE1(this->m_C) = 0; /*0x67abfe*/
  this->m_8 = 0; /*0x67ac01*/
  return result; /*0x67ac04*/
}



// ==== 0x0067AC10  _VectorClass_PBVVoxelAnimTypeClass::IndexOf  this=VectorClass  sig=csp ====
int __thiscall TypeList_VoxelAnim::IndexOf(_VectorClass_PBVVoxelAnimTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x67ac10*/
    return 0; /*0x67ac18*/
  m_8 = this->m_8; /*0x67ac1e*/
  result = 0; /*0x67ac21*/
  if ( m_8 <= 0 ) /*0x67ac25*/
    return -1; /*0x67ac3c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x67ac2b*/
  {
    if ( ++result >= m_8 ) /*0x67ac3a*/
      return -1; /*0x67ac3a*/
  }
  return result; /*0x67ac1a*/
}



// ==== 0x0067AC50  _VectorClass_PBVVoxelAnimTypeClass::PointerToIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall TypeList_VoxelAnim::PointerToIndex(_VectorClass_PBVVoxelAnimTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x67ac50*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x67ac65*/
  else
    return 0; /*0x67ac57*/
}



// ==== 0x0067AC70  DynamicVector::Constructor_VoxelAnim  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVector::Constructor_VoxelAnim(DynamicVector *this, int a2, int a3)
{
  *(_DWORD *)&this->DynamicVector_field_0x1[3] = 0; /*0x67ac79*/
  this->DynamicVector_field_0x8 = a2; /*0x67ac80*/
  this->__pad_C[0] = 1; /*0x67ac83*/
  this->__pad_C[1] = 0; /*0x67ac87*/
  *(_DWORD *)this->__pad_0 = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67ac8b*/
  if ( a2 ) /*0x67ac91*/
  {
    if ( a3 ) /*0x67ac99*/
    {
      *(_DWORD *)&this->DynamicVector_field_0x1[3] = a3; /*0x67ac9b*/
    }
    else
    {
      *(_DWORD *)&this->DynamicVector_field_0x1[3] = __2_YAPAXI_Z(4 * a2); /*0x67acac*/
      this->__pad_C[1] = 1; /*0x67acaf*/
    }
  }
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67acb3*/
  *(_DWORD *)this->__pad_14 = 10; /*0x67acb9*/
  this->DynamicVector_field_0x10 = 0; /*0x67acc0*/
  return this->__pad_0; /*0x67acc9*/
}



// ==== 0x0067ACD0  _DynamicVectorClass_PBVVoxelAnimTypeClass::Remove  this=DynamicVector  sig=csp ====
char __thiscall TypeList_VoxelAnim::Remove(_DynamicVectorClass_PBVVoxelAnimTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67acdc*/
  {
    LOBYTE(this->m_C) = 0; /*0x67ace2*/
    if ( a3 ) /*0x67ace8*/
      v4 = a3; /*0x67acfe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x67acfa*/
    LOBYTE(this->m_C) = 1; /*0x67ad02*/
    if ( !v4 ) /*0x67ad06*/
      return 0; /*0x67ad7a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x67ad08*/
    {
      m_8 = this->m_8; /*0x67ad0f*/
      if ( a2 < m_8 ) /*0x67ad14*/
        m_8 = a2; /*0x67ad16*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x67ad1c*/
        ++i; /*0x67ad21*/
      if ( BYTE1(this->m_C) ) /*0x67ad2e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x67ad39*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x67ad41*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x67ad4a*/
    this->m_8 = a2; /*0x67ad52*/
    BYTE1(this->m_C) = a3 == 0; /*0x67ad55*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVVoxelAnimTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x67ad5e*/
  }
  v7 = this->m_8; /*0x67ad61*/
  if ( v7 < this->m_10 ) /*0x67ad69*/
    this->m_10 = v7; /*0x67ad6b*/
  return 1; /*0x67ad6e*/
}



// ==== 0x0067AD80  DynamicVector::Add2  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::Add2(DynamicVector *this, _DWORD *a2)
{
  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x67ad83*/
  result = (int)this->DynamicVector_field_0x10; /*0x67ad86*/
  if ( result < DynamicVector_field_0x8 /*0x67adad*/
    || (this->__pad_C[1] || !DynamicVector_field_0x8)
    && (result = *(_DWORD *)this->__pad_14, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (_BYTE)result) )
  {
    result = (int)this->DynamicVector_field_0x10; /*0x67adb5*/
    v5 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x67adb8*/
    this->DynamicVector_field_0x10 = (void *)(result + 1); /*0x67adbe*/
    *(_DWORD *)(v5 + 4 * result) = *a2; /*0x67adc8*/
    LOBYTE(result) = 1; /*0x67adcb*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x67adaf*/
  }
  return result; /*0x67adb1*/
}



// ==== 0x0067ADD0  _DynamicVectorClass_PBVVoxelAnimTypeClass::GetSize  this=DynamicVector  sig=csp ====
int __thiscall TypeList_VoxelAnim::GetSize(_DynamicVectorClass_PBVVoxelAnimTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x67add0*/
  result = 0; /*0x67add3*/
  if ( m_10 <= 0 ) /*0x67add8*/
    return -1; /*0x67adef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x67adde*/
  {
    if ( ++result >= m_10 ) /*0x67aded*/
      return -1; /*0x67aded*/
  }
  return result; /*0x67adf2*/
}



// ==== 0x0067AE00  VectorClass::CopySmudge  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CopySmudge(VectorClass *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)a2 ) /*0x67ae0a*/
    return &this->vtable0; /*0x67ae0a*/
  (*((void (__thiscall **)(VectorClass *))this->vtable0 + 3))(this); /*0x67ae0e*/
  v3 = a2[2]; /*0x67ae11*/
  this->Capacity = v3; /*0x67ae16*/
  if ( !v3 ) /*0x67ae19*/
  {
    this->Items = 0; /*0x67ae5a*/
    this->IsAllocated = 0; /*0x67ae61*/
    return &this->vtable0; /*0x67ae65*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67ae23*/
  this->Items = v4; /*0x67ae2b*/
  if ( !v4 ) /*0x67ae30*/
    return &this->vtable0; /*0x67ae30*/
  Capacity = this->Capacity; /*0x67ae32*/
  v6 = 0; /*0x67ae35*/
  this->IsAllocated = 1; /*0x67ae39*/
  if ( Capacity <= 0 ) /*0x67ae3d*/
    return &this->vtable0; /*0x67ae3d*/
  do /*0x67ae51*/
  {
    *((_DWORD *)this->Items + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67ae48*/
    ++v6; /*0x67ae4e*/
  }
  while ( v6 < this->Capacity ); /*0x67ae51*/
  return &this->vtable0; /*0x67ae55*/
}



// ==== 0x0067AE70  _VectorClass_PBVSmudgeTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TypeList::AddRef(_VectorClass_PBVSmudgeTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x67ae72*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x67ae7d*/
  {
    v3 = 0; /*0x67ae7f*/
    if ( m_8 <= 0 ) /*0x67ae83*/
      return 1; /*0x67aea3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x67ae85*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x67ae8b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x67ae94*/
    {
      ++v3; /*0x67ae96*/
      ++v4; /*0x67ae97*/
      if ( v3 >= m_8 ) /*0x67ae9c*/
        return 1; /*0x67ae9c*/
    }
  }
  return 0; /*0x67ae9e*/
}



// ==== 0x0067AEB0  _VectorClass_PBVSmudgeTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall SmudgeTypeVector::Release(_VectorClass_PBVSmudgeTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x67aebc*/
  {
    LOBYTE(this->m_C) = 0; /*0x67aec6*/
    if ( a3 ) /*0x67aecc*/
      v4 = a3; /*0x67aee2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x67aede*/
    LOBYTE(this->m_C) = 1; /*0x67aee6*/
    if ( v4 ) /*0x67aeea*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x67aef5*/
      {
        m_8 = this->m_8; /*0x67aefc*/
        if ( a2 < m_8 ) /*0x67af01*/
          m_8 = a2; /*0x67af03*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x67af09*/
          ++i; /*0x67af0e*/
        if ( BYTE1(this->m_C) ) /*0x67af1b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x67af26*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x67af2e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x67af37*/
      this->m_8 = a2; /*0x67af3f*/
      BYTE1(this->m_C) = a3 == 0; /*0x67af42*/
      return 1; /*0x67af48*/
    }
    else
    {
      return 0; /*0x67aeef*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVSmudgeTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x67af52*/
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
int __thiscall SmudgeTypeVector::AddSmudge(_VectorClass_PBVSmudgeTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x67af90*/
    return 0; /*0x67af98*/
  m_8 = this->m_8; /*0x67af9e*/
  result = 0; /*0x67afa1*/
  if ( m_8 <= 0 ) /*0x67afa5*/
    return -1; /*0x67afbc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x67afab*/
  {
    if ( ++result >= m_8 ) /*0x67afba*/
      return -1; /*0x67afba*/
  }
  return result; /*0x67af9a*/
}



// ==== 0x0067AFD0  _VectorClass_PBVSmudgeTypeClass::Remove  this=VectorClass  sig=csp ====
unsigned int __thiscall SmudgeTypeVector::Remove(_VectorClass_PBVSmudgeTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x67afd0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x67afe5*/
  else
    return 0; /*0x67afd7*/
}



// ==== 0x0067AFF0  SmudgeTypeVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall SmudgeTypeVector::Construct(SmudgeTypeVector *this, int a2, int a3)
{
  this->SmudgeTypeVector_field_0x04 = 0; /*0x67aff9*/
  this->SmudgeTypeVector_field_0x08 = a2; /*0x67b000*/
  LOBYTE(this->SmudgeTypeVector_field_0x0C) = 1; /*0x67b003*/
  BYTE1(this->SmudgeTypeVector_field_0x0C) = 0; /*0x67b007*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67b00b*/
  if ( a2 ) /*0x67b011*/
  {
    if ( a3 ) /*0x67b019*/
    {
      this->SmudgeTypeVector_field_0x04 = a3; /*0x67b01b*/
    }
    else
    {
      this->SmudgeTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x67b02c*/
      BYTE1(this->SmudgeTypeVector_field_0x0C) = 1; /*0x67b02f*/
    }
  }
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67b033*/
  this->SmudgeTypeVector_field_0x14 = 10; /*0x67b039*/
  this->SmudgeTypeVector_field_0x10 = 0; /*0x67b040*/
  return this->__pad_0; /*0x67b049*/
}



// ==== 0x0067B050  _DynamicVectorClass_PBVSmudgeTypeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall TypeList::Release(_DynamicVectorClass_PBVSmudgeTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67b05c*/
  {
    LOBYTE(this->m_C) = 0; /*0x67b062*/
    if ( a3 ) /*0x67b068*/
      v4 = a3; /*0x67b07e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x67b07a*/
    LOBYTE(this->m_C) = 1; /*0x67b082*/
    if ( !v4 ) /*0x67b086*/
      return 0; /*0x67b0fa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x67b088*/
    {
      m_8 = this->m_8; /*0x67b08f*/
      if ( a2 < m_8 ) /*0x67b094*/
        m_8 = a2; /*0x67b096*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x67b09c*/
        ++i; /*0x67b0a1*/
      if ( BYTE1(this->m_C) ) /*0x67b0ae*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x67b0b9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x67b0c1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x67b0ca*/
    this->m_8 = a2; /*0x67b0d2*/
    BYTE1(this->m_C) = a3 == 0; /*0x67b0d5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVSmudgeTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x67b0de*/
  }
  v7 = this->m_8; /*0x67b0e1*/
  if ( v7 < this->m_10 ) /*0x67b0e9*/
    this->m_10 = v7; /*0x67b0eb*/
  return 1; /*0x67b0ee*/
}



// ==== 0x0067B100  SmudgeTypeVector::Add  this=SmudgeTypeVector  sig=csp ====
char __thiscall SmudgeTypeVector::Add(SmudgeTypeVector *this, _DWORD *a2)
{
  int SmudgeTypeVector_field_0x08; // ecx
  int SmudgeTypeVector_field_0x14; // eax
  int SmudgeTypeVector_field_0x10; // eax
  int SmudgeTypeVector_field_0x04; // edx

  SmudgeTypeVector_field_0x08 = this->SmudgeTypeVector_field_0x08; /*0x67b103*/
  if ( this->SmudgeTypeVector_field_0x10 >= SmudgeTypeVector_field_0x08 ) /*0x67b10b*/
  {
    if ( !BYTE1(this->SmudgeTypeVector_field_0x0C) && SmudgeTypeVector_field_0x08 ) /*0x67b116*/
      return 0; /*0x67b116*/
    SmudgeTypeVector_field_0x14 = this->SmudgeTypeVector_field_0x14; /*0x67b118*/
    if ( SmudgeTypeVector_field_0x14 <= 0 /*0x67b128*/
      || !(*(unsigned __int8 (__thiscall **)(SmudgeTypeVector *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
            this,
            SmudgeTypeVector_field_0x08 + SmudgeTypeVector_field_0x14,
            0) )
    {
      return 0; /*0x67b12f*/
    }
  }
  SmudgeTypeVector_field_0x10 = this->SmudgeTypeVector_field_0x10; /*0x67b135*/
  SmudgeTypeVector_field_0x04 = this->SmudgeTypeVector_field_0x04; /*0x67b138*/
  this->SmudgeTypeVector_field_0x10 = SmudgeTypeVector_field_0x10 + 1; /*0x67b13e*/
  *(_DWORD *)(SmudgeTypeVector_field_0x04 + 4 * SmudgeTypeVector_field_0x10) = *a2; /*0x67b148*/
  return 1; /*0x67b131*/
}



// ==== 0x0067B150  _DynamicVectorClass_PBVSmudgeTypeClass::TypeList_vt04  this=DynamicVector  sig=csp ====
int __thiscall TypeList_VoxelAnim::TypeList_vt04(_DynamicVectorClass_PBVSmudgeTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x67b150*/
  result = 0; /*0x67b153*/
  if ( m_10 <= 0 ) /*0x67b158*/
    return -1; /*0x67b16f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x67b15e*/
  {
    if ( ++result >= m_10 ) /*0x67b16d*/
      return -1; /*0x67b16d*/
  }
  return result; /*0x67b172*/
}



// ==== 0x0067B180  VectorClass::CopyBuilding  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CopyBuilding(VectorClass *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)a2 ) /*0x67b18a*/
    return &this->vtable0; /*0x67b18a*/
  (*((void (__thiscall **)(VectorClass *))this->vtable0 + 3))(this); /*0x67b18e*/
  v3 = a2[2]; /*0x67b191*/
  this->Capacity = v3; /*0x67b196*/
  if ( !v3 ) /*0x67b199*/
  {
    this->Items = 0; /*0x67b1da*/
    this->IsAllocated = 0; /*0x67b1e1*/
    return &this->vtable0; /*0x67b1e5*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67b1a3*/
  this->Items = v4; /*0x67b1ab*/
  if ( !v4 ) /*0x67b1b0*/
    return &this->vtable0; /*0x67b1b0*/
  Capacity = this->Capacity; /*0x67b1b2*/
  v6 = 0; /*0x67b1b5*/
  this->IsAllocated = 1; /*0x67b1b9*/
  if ( Capacity <= 0 ) /*0x67b1bd*/
    return &this->vtable0; /*0x67b1bd*/
  do /*0x67b1d1*/
  {
    *((_DWORD *)this->Items + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67b1c8*/
    ++v6; /*0x67b1ce*/
  }
  while ( v6 < this->Capacity ); /*0x67b1d1*/
  return &this->vtable0; /*0x67b1d5*/
}



// ==== 0x0067B1F0  _VectorClass_PBVTerrainTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TypeList_cptr_TerrainTypeClass::AddRef(_VectorClass_PBVTerrainTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x67b1f2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x67b1fd*/
  {
    v3 = 0; /*0x67b1ff*/
    if ( m_8 <= 0 ) /*0x67b203*/
      return 1; /*0x67b223*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x67b205*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x67b20b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x67b214*/
    {
      ++v3; /*0x67b216*/
      ++v4; /*0x67b217*/
      if ( v3 >= m_8 ) /*0x67b21c*/
        return 1; /*0x67b21c*/
    }
  }
  return 0; /*0x67b21e*/
}



// ==== 0x0067B230  _VectorClass_PBVTerrainTypeClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall TypeList_cptr_TerrainTypeClass::SetCapacity(_VectorClass_PBVTerrainTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x67b23c*/
  {
    LOBYTE(this->m_C) = 0; /*0x67b246*/
    if ( a3 ) /*0x67b24c*/
      v4 = a3; /*0x67b262*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x67b25e*/
    LOBYTE(this->m_C) = 1; /*0x67b266*/
    if ( v4 ) /*0x67b26a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x67b275*/
      {
        m_8 = this->m_8; /*0x67b27c*/
        if ( a2 < m_8 ) /*0x67b281*/
          m_8 = a2; /*0x67b283*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x67b289*/
          ++i; /*0x67b28e*/
        if ( BYTE1(this->m_C) ) /*0x67b29b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x67b2a6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x67b2ae*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x67b2b7*/
      this->m_8 = a2; /*0x67b2bf*/
      BYTE1(this->m_C) = a3 == 0; /*0x67b2c2*/
      return 1; /*0x67b2c8*/
    }
    else
    {
      return 0; /*0x67b26f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVTerrainTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x67b2d2*/
    return 1; /*0x67b2d8*/
  }
}



// ==== 0x0067B2E0  _VectorClass_PBVTerrainTypeClass::TryFreeAndClear  this=VectorClass  sig=csp ====
void __thiscall TypeList_cptr_TerrainTypeClass::TryFreeAndClear(_VectorClass_PBVTerrainTypeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x67b2ed*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x67b2f3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67b2fb*/
  }
  BYTE1(this->m_C) = 0; /*0x67b2fe*/
  this->m_8 = 0; /*0x67b301*/
}



// ==== 0x0067B310  _VectorClass_PBVTerrainTypeClass::IndexOf  this=VectorClass  sig=csp ====
int __thiscall TypeList_cptr_TerrainTypeClass::IndexOf(_VectorClass_PBVTerrainTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x67b310*/
    return 0; /*0x67b318*/
  m_8 = this->m_8; /*0x67b31e*/
  result = 0; /*0x67b321*/
  if ( m_8 <= 0 ) /*0x67b325*/
    return -1; /*0x67b33c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x67b32b*/
  {
    if ( ++result >= m_8 ) /*0x67b33a*/
      return -1; /*0x67b33a*/
  }
  return result; /*0x67b31a*/
}



// ==== 0x0067B350  _VectorClass_PBVTerrainTypeClass::PointerToIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall TypeList_cptr_TerrainTypeClass::PointerToIndex(_VectorClass_PBVTerrainTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x67b350*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x67b365*/
  else
    return 0; /*0x67b357*/
}



// ==== 0x0067B370  TerrainTypeVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall TerrainTypeVector::Construct(TerrainTypeVector *this, int a2, int a3)
{
  this->Items = 0; /*0x67b379*/
  this->Capacity = a2; /*0x67b380*/
  this->IsInitialized = 1; /*0x67b383*/
  this->IsAllocated = 0; /*0x67b387*/
  *this = (TerrainTypeVector)&VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67b38b*/
  if ( a2 ) /*0x67b391*/
  {
    if ( a3 ) /*0x67b399*/
    {
      this->Items = a3; /*0x67b39b*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x67b3ac*/
      this->IsAllocated = 1; /*0x67b3af*/
    }
  }
  *this = (TerrainTypeVector)&DynamicVectorClass<TerrainTypeClass const *>::`vftable'; /*0x67b3b3*/
  *((_DWORD *)this + 5) = 10; /*0x67b3b9*/
  this->Items = 0; /*0x67b3c0*/
  return this; /*0x67b3c9*/
}



// ==== 0x0067B3D0  _DynamicVectorClass_PBVTerrainTypeClass::Remove  this=DynamicVector  sig=csp ====
char __thiscall TypeList_cptr_TerrainTypeClass::Remove(
        _DynamicVectorClass_PBVTerrainTypeClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67b3dc*/
  {
    LOBYTE(this->m_C) = 0; /*0x67b3e2*/
    if ( a3 ) /*0x67b3e8*/
      v4 = a3; /*0x67b3fe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x67b3fa*/
    LOBYTE(this->m_C) = 1; /*0x67b402*/
    if ( !v4 ) /*0x67b406*/
      return 0; /*0x67b47a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x67b408*/
    {
      m_8 = this->m_8; /*0x67b40f*/
      if ( a2 < m_8 ) /*0x67b414*/
        m_8 = a2; /*0x67b416*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x67b41c*/
        ++i; /*0x67b421*/
      if ( BYTE1(this->m_C) ) /*0x67b42e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x67b439*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x67b441*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x67b44a*/
    this->m_8 = a2; /*0x67b452*/
    BYTE1(this->m_C) = a3 == 0; /*0x67b455*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVTerrainTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x67b45e*/
  }
  v7 = this->m_8; /*0x67b461*/
  if ( v7 < this->m_10 ) /*0x67b469*/
    this->m_10 = v7; /*0x67b46b*/
  return 1; /*0x67b46e*/
}



// ==== 0x0067B480  RulesClass::readAI  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readAI(RulesClass *this, _DWORD *a2)
{
  int DetailBufferZoneWidth; // ecx
  int result; // eax
  int DetailMinFrameRateMovie; // edx

  DetailBufferZoneWidth = this->DetailBufferZoneWidth; /*0x67b483*/
  result = (int)this->LargeVisceroid; /*0x67b486*/
  if ( result < DetailBufferZoneWidth /*0x67b4ad*/
    || (BYTE1(this->AmmoCrateDamage) || !DetailBufferZoneWidth)
    && (result = (int)this->SmallVisceroid, result > 0)
    && (result = (*(int (__thiscall **)(RulesClass *, int, _DWORD))(this->DetailMinFrameRateNormal + 8))(
                   this,
                   DetailBufferZoneWidth + result,
                   0),
        (_BYTE)result) )
  {
    result = (int)this->LargeVisceroid; /*0x67b4b5*/
    DetailMinFrameRateMovie = this->DetailMinFrameRateMovie; /*0x67b4b8*/
    this->LargeVisceroid = (UnitTypeClass *)(result + 1); /*0x67b4be*/
    *(_DWORD *)(DetailMinFrameRateMovie + 4 * result) = *a2; /*0x67b4c8*/
    LOBYTE(result) = 1; /*0x67b4cb*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x67b4af*/
  }
  return result; /*0x67b4b1*/
}



// ==== 0x0067B4D0  _DynamicVectorClass_PBVTerrainTypeClass::GetSize  this=DynamicVector  sig=csp ====
int __thiscall TypeList_cptr_TerrainTypeClass::GetSize(_DynamicVectorClass_PBVTerrainTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x67b4d0*/
  result = 0; /*0x67b4d3*/
  if ( m_10 <= 0 ) /*0x67b4d8*/
    return -1; /*0x67b4ef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x67b4de*/
  {
    if ( ++result >= m_10 ) /*0x67b4ed*/
      return -1; /*0x67b4ed*/
  }
  return result; /*0x67b4f2*/
}



// ==== 0x0067B500  SmallFunc_67B500  this=-  sig=csp ====
int __fastcall SmallFunc_67B500(unsigned __int8 ***a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a1, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67b51e*/
    return WarheadTypeClass::FindOrCreate(Destination); /*0x67b52b*/
  else
    return a4; /*0x67b539*/
}



// ==== 0x0067B550  ReadINIClassBuildingTypeList  this=VectorClass  sig=csp ====
VectorClass *__fastcall ReadINIClassBuildingTypeList(
        VectorClass *a1,
        unsigned __int8 ***a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        VectorClass *a5)
{
  char *i; // eax
  int v7; // edi
  int v8; // eax
  void *v9; // ecx
  void *Items; // eax
  bool v11; // zf
  int Capacity; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  VectorClass v17; // [esp+Ch] [ebp-9Ch] BYREF
  int v18; // [esp+1Ch] [ebp-8Ch]
  int v19; // [esp+20h] [ebp-88h]
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a2, a3, a4, &g_INI_DefaultBuffer, String, 128) ) /*0x67b57c*/
  {
    VectorClass::BuildingTypeConstructor(&v17, 0, 0); /*0x67b591*/
    v19 = 10; /*0x67b59a*/
    v18 = 0; /*0x67b5a8*/
    v17.vtable0 = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x67b5ac*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x67b5be*/
    {
      if ( !*i ) /*0x67b5c0*/
        break; /*0x67b5c2*/
      v7 = BuildingTypeClass::FindOrCreate(i); /*0x67b5cb*/
      if ( v7 /*0x67b5fb*/
        && (v18 < v17.Capacity
         || (v17.IsAllocated || !v17.Capacity)
         && v19 > 0
         && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v17.vtable0 + 2))(
              &v17,
              v19 + v17.Capacity,
              0)) )
      {
        v8 = v18++; /*0x67b606*/
        *((_DWORD *)v17.Items + v8) = v7; /*0x67b611*/
      }
    }
    a1->Items = 0; /*0x67b62d*/
    a1->Capacity = 0; /*0x67b630*/
    a1->IsInitialized = 1; /*0x67b633*/
    a1->IsAllocated = 0; /*0x67b637*/
    a1->vtable0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x67b63a*/
    VectorClass::CopyBuilding(a1, &v17); /*0x67b640*/
    a1->vtable0 = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x67b645*/
    v17.vtable0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x67b64b*/
    v9 = (void *)v19; /*0x67b657*/
    a1[1].vtable0 = (void *)v18; /*0x67b65b*/
    Items = v17.Items; /*0x67b65e*/
    v11 = v17.Items == 0; /*0x67b662*/
    a1[1].Items = v9; /*0x67b664*/
    if ( !v11 && v17.IsAllocated ) /*0x67b671*/
    {
      __3_YAXPAX_Z(Items); /*0x67b678*/
      return a1; /*0x67b68b*/
    }
  }
  else
  {
    a1->Items = 0; /*0x67b699*/
    a1->Capacity = 0; /*0x67b69c*/
    a1->IsInitialized = 1; /*0x67b69f*/
    a1->IsAllocated = 0; /*0x67b6a3*/
    a1->vtable0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x67b6a6*/
    if ( a1 != a5 ) /*0x67b6ac*/
    {
      DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)a1); /*0x67b6b0*/
      Capacity = a5->Capacity; /*0x67b6b6*/
      a1->Capacity = Capacity; /*0x67b6bb*/
      if ( Capacity ) /*0x67b6be*/
      {
        v14 = __2_YAPAXI_Z(4 * Capacity); /*0x67b6c8*/
        a1->Items = (void *)v14; /*0x67b6d2*/
        if ( v14 ) /*0x67b6d5*/
        {
          v15 = a1->Capacity; /*0x67b6d7*/
          v16 = 0; /*0x67b6da*/
          a1->IsAllocated = 1; /*0x67b6de*/
          if ( v15 > 0 ) /*0x67b6e2*/
          {
            do /*0x67b6f6*/
            {
              *((_DWORD *)a1->Items + v16) = *((_DWORD *)a5->Items + v16); /*0x67b6ed*/
              ++v16; /*0x67b6f3*/
            }
            while ( v16 < a1->Capacity ); /*0x67b6f6*/
          }
        }
      }
      else
      {
        a1->Items = 0; /*0x67b6fa*/
        a1->IsAllocated = 0; /*0x67b6fd*/
      }
    }
    a1[1].vtable0 = a5[1].vtable0; /*0x67b703*/
    a1[1].Items = a5[1].Items; /*0x67b709*/
    a1->vtable0 = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x67b70c*/
  }
  return a1; /*0x67b682*/
}



// ==== 0x0067B720  BuildingClass::LoadBuildingTypes  this=VectorClass  sig=csp ====
VectorClass *__fastcall BuildingClass::LoadBuildingTypes(
        VectorClass *a1,
        unsigned __int8 ***a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        VectorClass *a5)
{
  char *i; // eax
  int Alt; // edi
  int v8; // eax
  int UnitTypeVector_field_0x14; // ecx
  void *UnitTypeVector_field_0x04; // eax
  bool v11; // zf
  int Capacity; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  UnitTypeVector v17; // [esp+Ch] [ebp-9Ch] BYREF
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a2, a3, a4, &g_INI_DefaultBuffer, String, 128) ) /*0x67b74c*/
  {
    UnitTypeVector::ConstructUnitTypeVectorClass(&v17, 0, 0); /*0x67b761*/
    v17.UnitTypeVector_field_0x14 = 10; /*0x67b76a*/
    v17.UnitTypeVector_field_0x10 = 0; /*0x67b778*/
    *(_DWORD *)v17.__pad_0 = &TypeList<UnitTypeClass const *>::`vftable'; /*0x67b77c*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x67b78e*/
    {
      if ( !*i ) /*0x67b790*/
        break; /*0x67b792*/
      Alt = BuildingTypeClass::FindOrCreateAlt(i); /*0x67b79b*/
      if ( Alt /*0x67b7cb*/
        && (v17.UnitTypeVector_field_0x10 < v17.UnitTypeVector_field_0x08
         || (BYTE1(v17.UnitTypeVector_field_0x0C) || !v17.UnitTypeVector_field_0x08)
         && v17.UnitTypeVector_field_0x14 > 0
         && (*(unsigned __int8 (__thiscall **)(UnitTypeVector *, int, _DWORD))(*(_DWORD *)v17.__pad_0 + 8))(
              &v17,
              v17.UnitTypeVector_field_0x14 + v17.UnitTypeVector_field_0x08,
              0)) )
      {
        v8 = v17.UnitTypeVector_field_0x10++; /*0x67b7d6*/
        *(_DWORD *)(v17.UnitTypeVector_field_0x04 + 4 * v8) = Alt; /*0x67b7e1*/
      }
    }
    a1->Items = 0; /*0x67b7fd*/
    a1->Capacity = 0; /*0x67b800*/
    a1->IsInitialized = 1; /*0x67b803*/
    a1->IsAllocated = 0; /*0x67b807*/
    a1->vtable0 = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x67b80a*/
    VectorClass::CopyConstructor(a1, &v17); /*0x67b810*/
    a1->vtable0 = &TypeList<UnitTypeClass const *>::`vftable'; /*0x67b815*/
    *(_DWORD *)v17.__pad_0 = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x67b81b*/
    UnitTypeVector_field_0x14 = v17.UnitTypeVector_field_0x14; /*0x67b827*/
    a1[1].vtable0 = (void *)v17.UnitTypeVector_field_0x10; /*0x67b82b*/
    UnitTypeVector_field_0x04 = (void *)v17.UnitTypeVector_field_0x04; /*0x67b82e*/
    v11 = v17.UnitTypeVector_field_0x04 == 0; /*0x67b832*/
    a1[1].Items = (void *)UnitTypeVector_field_0x14; /*0x67b834*/
    if ( !v11 && BYTE1(v17.UnitTypeVector_field_0x0C) ) /*0x67b841*/
    {
      __3_YAXPAX_Z(UnitTypeVector_field_0x04); /*0x67b848*/
      return a1; /*0x67b85b*/
    }
  }
  else
  {
    a1->Items = 0; /*0x67b869*/
    a1->Capacity = 0; /*0x67b86c*/
    a1->IsInitialized = 1; /*0x67b86f*/
    a1->IsAllocated = 0; /*0x67b873*/
    a1->vtable0 = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x67b876*/
    if ( a1 != a5 ) /*0x67b87c*/
    {
      Vector::Destructor((_VectorClass_PBVUnitTypeClass *)a1); /*0x67b880*/
      Capacity = a5->Capacity; /*0x67b886*/
      a1->Capacity = Capacity; /*0x67b88b*/
      if ( Capacity ) /*0x67b88e*/
      {
        v14 = __2_YAPAXI_Z(4 * Capacity); /*0x67b898*/
        a1->Items = (void *)v14; /*0x67b8a2*/
        if ( v14 ) /*0x67b8a5*/
        {
          v15 = a1->Capacity; /*0x67b8a7*/
          v16 = 0; /*0x67b8aa*/
          a1->IsAllocated = 1; /*0x67b8ae*/
          if ( v15 > 0 ) /*0x67b8b2*/
          {
            do /*0x67b8c6*/
            {
              *((_DWORD *)a1->Items + v16) = *((_DWORD *)a5->Items + v16); /*0x67b8bd*/
              ++v16; /*0x67b8c3*/
            }
            while ( v16 < a1->Capacity ); /*0x67b8c6*/
          }
        }
      }
      else
      {
        a1->Items = 0; /*0x67b8ca*/
        a1->IsAllocated = 0; /*0x67b8cd*/
      }
    }
    a1[1].vtable0 = a5[1].vtable0; /*0x67b8d3*/
    a1[1].Items = a5[1].Items; /*0x67b8d9*/
    a1->vtable0 = &TypeList<UnitTypeClass const *>::`vftable'; /*0x67b8dc*/
  }
  return a1; /*0x67b852*/
}



// ==== 0x0067B8F0  HouseTypeClass::ReadCountryName  this=VectorClass  sig=csp ====
int __fastcall HouseTypeClass::ReadCountryName(
        int a1,
        unsigned __int8 ***a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        _DWORD *a5)
{
  char *i; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  AircraftTypeVector v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a2, a3, a4, &g_INI_DefaultBuffer, String, 128) ) /*0x67b91c*/
  {
    AircraftTypeVector::Constructor(&v17, 0, 0); /*0x67b931*/
    v22 = 10; /*0x67b93a*/
    v21 = 0; /*0x67b948*/
    v17 = (AircraftTypeVector)&TypeList<AircraftTypeClass const *>::`vftable'; /*0x67b94c*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x67b95e*/
    {
      if ( !*i ) /*0x67b960*/
        break; /*0x67b962*/
      v7 = KeywordClass::FindOrCreate(i); /*0x67b96b*/
      if ( v7 /*0x67b99b*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && (*(unsigned __int8 (__thiscall **)(AircraftTypeVector *, int, _DWORD))(*(_DWORD *)&v17 + 8))(
              &v17,
              v22 + v19,
              0)) )
      {
        v8 = v21++; /*0x67b9a6*/
        *((_DWORD *)Block + v8) = v7; /*0x67b9b1*/
      }
    }
    *(_DWORD *)(a1 + 4) = 0; /*0x67b9cd*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67b9d0*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67b9d3*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67b9d7*/
    *(_DWORD *)a1 = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x67b9da*/
    HouseTypeClass::readBaseDefense((HouseTypeClass *)a1, &v17); /*0x67b9e0*/
    *(_DWORD *)a1 = &TypeList<AircraftTypeClass const *>::`vftable'; /*0x67b9e5*/
    v17 = (AircraftTypeVector)&VectorClass<AircraftTypeClass const *>::`vftable'; /*0x67b9eb*/
    v9 = v22; /*0x67b9f7*/
    *(_DWORD *)(a1 + 16) = v21; /*0x67b9fb*/
    v10 = Block; /*0x67b9fe*/
    v11 = Block == 0; /*0x67ba02*/
    *(_DWORD *)(a1 + 20) = v9; /*0x67ba04*/
    if ( !v11 && v20 ) /*0x67ba11*/
    {
      __3_YAXPAX_Z(v10); /*0x67ba18*/
      return a1; /*0x67ba2b*/
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0; /*0x67ba39*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67ba3c*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67ba3f*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67ba43*/
    *(_DWORD *)a1 = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x67ba46*/
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
          v15 = *(_DWORD *)(a1 + 8); /*0x67ba77*/
          v16 = 0; /*0x67ba7a*/
          *(_BYTE *)(a1 + 13) = 1; /*0x67ba7e*/
          if ( v15 > 0 ) /*0x67ba82*/
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
    *(_DWORD *)a1 = &TypeList<AircraftTypeClass const *>::`vftable'; /*0x67baac*/
  }
  return a1; /*0x67ba22*/
}



// ==== 0x0067BAC0  GetINIClassInt  this=-  sig=csp ====
int __fastcall GetINIClassInt(unsigned __int8 ***a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a1, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67bade*/
    return KeywordType::FindOrCreate2(Destination); /*0x67baeb*/
  else
    return a4; /*0x67baf9*/
}



// ==== 0x0067BB10  ReadINIClassInfantryTypeList  this=VectorClass  sig=csp ====
int __fastcall ReadINIClassInfantryTypeList(
        int a1,
        unsigned __int8 ***a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        _DWORD *a5)
{
  char *i; // eax
  int v7; // edi
  int v8; // eax
  int InfantryTypeVector_field_0x14; // ecx
  void *InfantryTypeVector_field_0x04; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  InfantryTypeVector v17; // [esp+Ch] [ebp-9Ch] BYREF

  if ( INIClass::GetString( /*0x67bb3c*/
         (INIClass *)a2,
         a3,
         a4,
         &g_INI_DefaultBuffer,
         (char *)&v17.InfantryTypeVector_field_0x1C,
         128) )
  {
    InfantryTypeVector::Construct2(&v17, 0, 0); /*0x67bb51*/
    v17.InfantryTypeVector_field_0x14 = 10; /*0x67bb5a*/
    v17.InfantryTypeVector_field_0x10 = 0; /*0x67bb68*/
    *(_DWORD *)v17.__pad_0 = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x67bb6c*/
    for ( i = strtok((char *)&v17.InfantryTypeVector_field_0x1C, Str); i; i = strtok(0, Str) ) /*0x67bb7e*/
    {
      if ( !*i ) /*0x67bb80*/
        break; /*0x67bb82*/
      v7 = KeywordType::FindOrCreate2(i); /*0x67bb8b*/
      if ( v7 /*0x67bbbb*/
        && (v17.InfantryTypeVector_field_0x10 < v17.InfantryTypeVector_field_0x08
         || (BYTE1(v17.InfantryTypeVector_field_0x0C) || !v17.InfantryTypeVector_field_0x08)
         && v17.InfantryTypeVector_field_0x14 > 0
         && (*(unsigned __int8 (__thiscall **)(InfantryTypeVector *, int, _DWORD))(*(_DWORD *)v17.__pad_0 + 8))(
              &v17,
              v17.InfantryTypeVector_field_0x14 + v17.InfantryTypeVector_field_0x08,
              0)) )
      {
        v8 = v17.InfantryTypeVector_field_0x10++; /*0x67bbc6*/
        *(_DWORD *)(v17.InfantryTypeVector_field_0x04 + 4 * v8) = v7; /*0x67bbd1*/
      }
    }
    *(_DWORD *)(a1 + 4) = 0; /*0x67bbed*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67bbf0*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67bbf3*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67bbf7*/
    *(_DWORD *)a1 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x67bbfa*/
    HouseTypeClass::readStartInfantry((HouseTypeClass *)a1, &v17); /*0x67bc00*/
    *(_DWORD *)a1 = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x67bc05*/
    *(_DWORD *)v17.__pad_0 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x67bc0b*/
    InfantryTypeVector_field_0x14 = v17.InfantryTypeVector_field_0x14; /*0x67bc17*/
    *(_DWORD *)(a1 + 16) = v17.InfantryTypeVector_field_0x10; /*0x67bc1b*/
    InfantryTypeVector_field_0x04 = (void *)v17.InfantryTypeVector_field_0x04; /*0x67bc1e*/
    v11 = v17.InfantryTypeVector_field_0x04 == 0; /*0x67bc22*/
    *(_DWORD *)(a1 + 20) = InfantryTypeVector_field_0x14; /*0x67bc24*/
    if ( !v11 && BYTE1(v17.InfantryTypeVector_field_0x0C) ) /*0x67bc31*/
    {
      __3_YAXPAX_Z(InfantryTypeVector_field_0x04); /*0x67bc38*/
      return a1; /*0x67bc4b*/
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0; /*0x67bc59*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67bc5c*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67bc5f*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67bc63*/
    *(_DWORD *)a1 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x67bc66*/
    if ( (_DWORD *)a1 != a5 ) /*0x67bc6c*/
    {
      Vector::Cleanup((_VectorClass_PBVInfantryTypeClass *)a1); /*0x67bc70*/
      v13 = a5[2]; /*0x67bc76*/
      *(_DWORD *)(a1 + 8) = v13; /*0x67bc7b*/
      if ( v13 ) /*0x67bc7e*/
      {
        v14 = __2_YAPAXI_Z(4 * v13); /*0x67bc88*/
        *(_DWORD *)(a1 + 4) = v14; /*0x67bc92*/
        if ( v14 ) /*0x67bc95*/
        {
          v15 = *(_DWORD *)(a1 + 8); /*0x67bc97*/
          v16 = 0; /*0x67bc9a*/
          *(_BYTE *)(a1 + 13) = 1; /*0x67bc9e*/
          if ( v15 > 0 ) /*0x67bca2*/
          {
            do /*0x67bcb6*/
            {
              *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v16) = *(_DWORD *)(a5[1] + 4 * v16); /*0x67bcad*/
              ++v16; /*0x67bcb3*/
            }
            while ( v16 < *(_DWORD *)(a1 + 8) ); /*0x67bcb6*/
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 4) = 0; /*0x67bcba*/
        *(_BYTE *)(a1 + 13) = 0; /*0x67bcbd*/
      }
    }
    *(_DWORD *)(a1 + 16) = a5[4]; /*0x67bcc3*/
    *(_DWORD *)(a1 + 20) = a5[5]; /*0x67bcc9*/
    *(_DWORD *)a1 = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x67bccc*/
  }
  return a1; /*0x67bc42*/
}



// ==== 0x0067BCE0  SmallFunc_67BCE0  this=-  sig=csp ====
int __fastcall SmallFunc_67BCE0(unsigned __int8 ***a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a1, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67bcfe*/
    return BuildingTypeClass::FindOrCreate(Destination); /*0x67bd0b*/
  else
    return a4; /*0x67bd19*/
}



// ==== 0x0067BD30  GetINIClassKeyword  this=-  sig=csp ====
int __fastcall GetINIClassKeyword(unsigned __int8 ***a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a1, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67bd4e*/
    return KeywordClass::FindOrCreate(Destination); /*0x67bd5b*/
  else
    return a4; /*0x67bd69*/
}



// ==== 0x0067BD80  SmallFunc_67BD80  this=-  sig=csp ====
int __fastcall SmallFunc_67BD80(unsigned __int8 ***a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a1, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67bd9e*/
    return TerrainTypeClass::FindOrCreate(Destination); /*0x67bdab*/
  else
    return a4; /*0x67bdb9*/
}



// ==== 0x0067BDD0  RulesClass::LoadTypeList  this=VectorClass  sig=csp ====
void *__fastcall RulesClass::LoadTypeList(
        int a1,
        unsigned __int8 ***a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        _DWORD *a5)
{
  char *i; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  void **v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a2, a3, a4, &g_INI_DefaultBuffer, String, 128) ) /*0x67bdfc*/
  {
    RulesClass::readIQ((RulesClass *)&v17, 0, 0); /*0x67be11*/
    v22 = 10; /*0x67be1a*/
    v21 = 0; /*0x67be28*/
    v17 = &TypeList<TerrainTypeClass const *>::`vftable'; /*0x67be2c*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x67be3e*/
    {
      if ( !*i ) /*0x67be40*/
        break; /*0x67be42*/
      v7 = TerrainTypeClass::FindOrCreate(i); /*0x67be4b*/
      if ( v7 /*0x67be7b*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v17[2])(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67be86*/
        *((_DWORD *)Block + v8) = v7; /*0x67be91*/
      }
    }
    *(_DWORD *)(a1 + 4) = 0; /*0x67bead*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67beb0*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67beb3*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67beb7*/
    *(_DWORD *)a1 = &VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67beba*/
    System_Load_67BFA0((ObjectClass *)a1, &v17); /*0x67bec0*/
    *(_DWORD *)a1 = &TypeList<TerrainTypeClass const *>::`vftable'; /*0x67bec5*/
    v17 = &VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67becb*/
    v9 = v22; /*0x67bed7*/
    *(_DWORD *)(a1 + 16) = v21; /*0x67bedb*/
    v10 = Block; /*0x67bede*/
    v11 = Block == 0; /*0x67bee2*/
    *(_DWORD *)(a1 + 20) = v9; /*0x67bee4*/
    if ( !v11 && v20 ) /*0x67bef1*/
    {
      __3_YAXPAX_Z(v10); /*0x67bef8*/
      return (void *)a1; /*0x67bf0b*/
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0; /*0x67bf19*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67bf1c*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67bf1f*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67bf23*/
    *(_DWORD *)a1 = &VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67bf26*/
    if ( (_DWORD *)a1 != a5 ) /*0x67bf2c*/
    {
      TypeList_cptr_TerrainTypeClass::TryFreeAndClear((_VectorClass_PBVTerrainTypeClass *)a1); /*0x67bf30*/
      v13 = a5[2]; /*0x67bf36*/
      *(_DWORD *)(a1 + 8) = v13; /*0x67bf3b*/
      if ( v13 ) /*0x67bf3e*/
      {
        v14 = __2_YAPAXI_Z(4 * v13); /*0x67bf48*/
        *(_DWORD *)(a1 + 4) = v14; /*0x67bf52*/
        if ( v14 ) /*0x67bf55*/
        {
          v15 = *(_DWORD *)(a1 + 8); /*0x67bf57*/
          v16 = 0; /*0x67bf5a*/
          *(_BYTE *)(a1 + 13) = 1; /*0x67bf5e*/
          if ( v15 > 0 ) /*0x67bf62*/
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
    *(_DWORD *)a1 = &TypeList<TerrainTypeClass const *>::`vftable'; /*0x67bf8c*/
  }
  return (void *)a1; /*0x67bf02*/
}



// ==== 0x0067BFA0  ObjectClass::System_Load_67BFA0  this=TOP  sig=csp ====
_DWORD *__thiscall System_Load_67BFA0(ObjectClass *this, _DWORD *a2)
{
  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  if ( this == (ObjectClass *)a2 ) /*0x67bfaa*/
    return &this->AbstractClass; /*0x67bfaa*/
  (*((void (__thiscall **)(ObjectClass *))this->AbstractClass + 3))(this); /*0x67bfae*/
  v3 = (void *)a2[2]; /*0x67bfb1*/
  this->? = v3; /*0x67bfb6*/
  if ( !v3 ) /*0x67bfb9*/
  {
    this->? = 0; /*0x67bffa*/
    BYTE1(this->?) = 0; /*0x67c001*/
    return &this->AbstractClass; /*0x67c005*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (_DWORD)v3); /*0x67bfc3*/
  this->? = v4; /*0x67bfcb*/
  if ( !v4 ) /*0x67bfd0*/
    return &this->AbstractClass; /*0x67bfd0*/
  vtable2 = this->?; /*0x67bfd2*/
  v6 = 0; /*0x67bfd5*/
  BYTE1(this->?) = 1; /*0x67bfd9*/
  if ( (int)vtable2 <= 0 ) /*0x67bfdd*/
    return &this->AbstractClass; /*0x67bfdd*/
  do /*0x67bff1*/
  {
    *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67bfe8*/
    ++v6; /*0x67bfee*/
  }
  while ( v6 < (int)this->? ); /*0x67bff1*/
  return &this->AbstractClass; /*0x67bff5*/
}



// ==== 0x0067C010  _VectorClass_PBVVoxelAnimTypeClass::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList_VoxelAnim::Constructor(_VectorClass_PBVVoxelAnimTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x67c013*/
  *(_DWORD *)this->__pad_0 = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67c016*/
  if ( v3 && BYTE1(this->m_C) ) /*0x67c020*/
  {
    __3_YAXPAX_Z(v3); /*0x67c028*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67c030*/
  }
  BYTE1(this->m_C) = 0; /*0x67c03b*/
  this->m_8 = 0; /*0x67c041*/
  if ( (a2 & 1) != 0 ) /*0x67c048*/
    __3_YAXPAX_Z(this); /*0x67c04b*/
  return this->__pad_0; /*0x67c055*/
}



// ==== 0x0067C060  _DynamicVectorClass_PBVVoxelAnimTypeClass::Add  this=DynamicVector  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_cptr_VoxelAnimTypeClass::Add(
        _DynamicVectorClass_PBVVoxelAnimTypeClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x67c063*/
  *(_DWORD *)this->__pad_0 = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67c066*/
  if ( v3 && BYTE1(this->m_C) ) /*0x67c070*/
  {
    __3_YAXPAX_Z(v3); /*0x67c078*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67c080*/
  }
  BYTE1(this->m_C) = 0; /*0x67c08b*/
  this->m_8 = 0; /*0x67c091*/
  if ( (a2 & 1) != 0 ) /*0x67c098*/
    __3_YAXPAX_Z(this); /*0x67c09b*/
  return this->__pad_0; /*0x67c0a5*/
}



// ==== 0x0067C0B0  _VectorClass_PBVSmudgeTypeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall SmudgeTypeVector::QueryInterface(_VectorClass_PBVSmudgeTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x67c0b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67c0b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x67c0c0*/
  {
    __3_YAXPAX_Z(v3); /*0x67c0c8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67c0d0*/
  }
  BYTE1(this->m_C) = 0; /*0x67c0db*/
  this->m_8 = 0; /*0x67c0e1*/
  if ( (a2 & 1) != 0 ) /*0x67c0e8*/
    __3_YAXPAX_Z(this); /*0x67c0eb*/
  return this->__pad_0; /*0x67c0f5*/
}



// ==== 0x0067C100  _DynamicVectorClass_PBVSmudgeTypeClass::Constructor_0  this=DynamicVector  sig=csp ====
_DWORD *__thiscall TypeList_VoxelAnim::Constructor_0(_DynamicVectorClass_PBVSmudgeTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x67c103*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67c106*/
  if ( v3 && BYTE1(this->m_C) ) /*0x67c110*/
  {
    __3_YAXPAX_Z(v3); /*0x67c118*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67c120*/
  }
  BYTE1(this->m_C) = 0; /*0x67c12b*/
  this->m_8 = 0; /*0x67c131*/
  if ( (a2 & 1) != 0 ) /*0x67c138*/
    __3_YAXPAX_Z(this); /*0x67c13b*/
  return this->__pad_0; /*0x67c145*/
}



// ==== 0x0067C150  _VectorClass_PBVTerrainTypeClass::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList_cptr_TerrainTypeClass::Constructor(_VectorClass_PBVTerrainTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x67c153*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67c156*/
  if ( v3 && BYTE1(this->m_C) ) /*0x67c160*/
  {
    __3_YAXPAX_Z(v3); /*0x67c168*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67c170*/
  }
  BYTE1(this->m_C) = 0; /*0x67c17b*/
  this->m_8 = 0; /*0x67c181*/
  if ( (a2 & 1) != 0 ) /*0x67c188*/
    __3_YAXPAX_Z(this); /*0x67c18b*/
  return this->__pad_0; /*0x67c195*/
}



// ==== 0x0067C1A0  _DynamicVectorClass_PBVTerrainTypeClass::Constructor_1  this=DynamicVector  sig=csp ====
_DWORD *__thiscall TypeList_VoxelAnim::Constructor_1(_DynamicVectorClass_PBVTerrainTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x67c1a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67c1a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x67c1b0*/
  {
    __3_YAXPAX_Z(v3); /*0x67c1b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67c1c0*/
  }
  BYTE1(this->m_C) = 0; /*0x67c1cb*/
  this->m_8 = 0; /*0x67c1d1*/
  if ( (a2 & 1) != 0 ) /*0x67c1d8*/
    __3_YAXPAX_Z(this); /*0x67c1db*/
  return this->__pad_0; /*0x67c1e5*/
}



// ==== 0x0067C1F0  TypeList::CopyVoxelAnim  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList::CopyVoxelAnim(TypeList *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  this->? = 0; /*0x67c1fd*/
  this->? = 0; /*0x67c200*/
  this->? = 1; /*0x67c203*/
  this->? = 0; /*0x67c207*/
  this->DynamicVectorClass = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67c20a*/
  if ( this != (TypeList *)a2 ) /*0x67c210*/
  {
    Vector::Cleanup2((_VectorClass_PBVVoxelAnimTypeClass *)this); /*0x67c212*/
    v3 = a2[2]; /*0x67c218*/
    this->? = v3; /*0x67c21d*/
    if ( v3 ) /*0x67c220*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67c226*/
      this->? = v4; /*0x67c230*/
      if ( v4 ) /*0x67c233*/
      {
        Capacity = this->?; /*0x67c235*/
        v6 = 0; /*0x67c238*/
        this->? = 1; /*0x67c23c*/
        if ( Capacity > 0 ) /*0x67c240*/
        {
          do /*0x67c254*/
          {
            *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67c24b*/
            ++v6; /*0x67c251*/
          }
          while ( v6 < this->? ); /*0x67c254*/
        }
      }
    }
    else
    {
      this->? = 0; /*0x67c258*/
      this->? = 0; /*0x67c25b*/
    }
  }
  this->? = a2[4]; /*0x67c261*/
  this->? = a2[5]; /*0x67c267*/
  this->DynamicVectorClass = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x67c26a*/
  return &this->DynamicVectorClass; /*0x67c272*/
}



// ==== 0x0067C280  SmudgeTypeList::Copy  this=VectorClass  sig=csp ====
_DWORD *__thiscall SmudgeTypeList::Copy(SmudgeTypeList *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x67c28d*/
  this->Capacity = 0; /*0x67c290*/
  this->IsInitialized = 1; /*0x67c293*/
  this->IsAllocated = 0; /*0x67c297*/
  *this = (SmudgeTypeList)&VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67c29a*/
  if ( this != (SmudgeTypeList *)a2 ) /*0x67c2a0*/
  {
    VectorClass::ClearAndFree((int)this); /*0x67c2a2*/
    v3 = a2[2]; /*0x67c2a8*/
    this->Capacity = v3; /*0x67c2ad*/
    if ( v3 ) /*0x67c2b0*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67c2b6*/
      this->Items = v4; /*0x67c2c0*/
      if ( v4 ) /*0x67c2c3*/
      {
        v5 = this->Capacity; /*0x67c2c5*/
        v6 = 0; /*0x67c2c8*/
        this->IsAllocated = 1; /*0x67c2cc*/
        if ( v5 > 0 ) /*0x67c2d0*/
        {
          do /*0x67c2e4*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67c2db*/
            ++v6; /*0x67c2e1*/
          }
          while ( v6 < this->Capacity ); /*0x67c2e4*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x67c2e8*/
      this->IsAllocated = 0; /*0x67c2eb*/
    }
  }
  this->Items = (SmudgeTypeList)a2[4]; /*0x67c2f1*/
  *(this + 5) = (SmudgeTypeList)a2[5]; /*0x67c2f7*/
  *this = (SmudgeTypeList)&TypeList<SmudgeTypeClass const *>::`vftable'; /*0x67c2fa*/
  return this; /*0x67c302*/
}



// ==== 0x0067C310  VoxelAnimTypeVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VoxelAnimTypeVector::Constructor(VoxelAnimTypeVector *this, int a2, int a3)
{
  this->Items = 0; /*0x67c31b*/
  this->Capacity = a2; /*0x67c31e*/
  this->IsInitialized = 1; /*0x67c321*/
  this->IsAllocated = 0; /*0x67c325*/
  *this = (VoxelAnimTypeVector)&VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67c328*/
  if ( a2 ) /*0x67c32e*/
  {
    if ( a3 ) /*0x67c336*/
    {
      this->Items = a3; /*0x67c338*/
      return this; /*0x67c33e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x67c34d*/
    this->IsAllocated = 1; /*0x67c350*/
  }
  return this; /*0x67c33d*/
}



// ==== 0x0067C360  DynamicVector::RemoveAt  this=DynamicVector  sig=csp ====
char __thiscall DynamicVector::RemoveAt(DynamicVector *this, int a2)
{
  char *DynamicVector_field_0x10; // edx
  int v3; // eax
  char *v4; // edx

  DynamicVector_field_0x10 = (char *)this->DynamicVector_field_0x10; /*0x67c360*/
  v3 = a2; /*0x67c363*/
  if ( a2 >= (int)DynamicVector_field_0x10 ) /*0x67c369*/
    return 0; /*0x67c38c*/
  v4 = DynamicVector_field_0x10 - 1; /*0x67c36b*/
  this->DynamicVector_field_0x10 = v4; /*0x67c36e*/
  if ( a2 < (int)v4 ) /*0x67c371*/
  {
    do /*0x67c384*/
    {
      ++v3; /*0x67c377*/
      *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] /*0x67c37b*/
                                                                                         + 4 * v3);
    }
    while ( v3 < (int)this->DynamicVector_field_0x10 ); /*0x67c384*/
  }
  return 1; /*0x67c389*/
}



// ==== 0x0067C3A0  Game::LockMutex  this=VectorClass  sig=csp ====
_DWORD *__thiscall Game::LockMutex(Game *this, int a2, int a3)
{
  this->Game_field_0x4 = 0; /*0x67c3ab*/
  *(_DWORD *)this->__pad_8 = a2; /*0x67c3ae*/
  this->__pad_8[4] = 1; /*0x67c3b1*/
  this->__pad_8[5] = 0; /*0x67c3b5*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67c3b8*/
  if ( a2 ) /*0x67c3be*/
  {
    if ( a3 ) /*0x67c3c6*/
    {
      this->Game_field_0x4 = (AbstractClass *)a3; /*0x67c3c8*/
      return this->__pad_0; /*0x67c3ce*/
    }
    this->Game_field_0x4 = (AbstractClass *)__2_YAPAXI_Z(4 * a2); /*0x67c3dd*/
    this->__pad_8[5] = 1; /*0x67c3e0*/
  }
  return this->__pad_0; /*0x67c3cd*/
}



// ==== 0x0067C3F0  DynamicVector::RemoveAt2  this=DynamicVector  sig=csp ====
char __thiscall DynamicVector::RemoveAt2(DynamicVector *this, int a2)
{
  char *DynamicVector_field_0x10; // edx
  int v3; // eax
  char *v4; // edx

  DynamicVector_field_0x10 = (char *)this->DynamicVector_field_0x10; /*0x67c3f0*/
  v3 = a2; /*0x67c3f3*/
  if ( a2 >= (int)DynamicVector_field_0x10 ) /*0x67c3f9*/
    return 0; /*0x67c41c*/
  v4 = DynamicVector_field_0x10 - 1; /*0x67c3fb*/
  this->DynamicVector_field_0x10 = v4; /*0x67c3fe*/
  if ( a2 < (int)v4 ) /*0x67c401*/
  {
    do /*0x67c414*/
    {
      ++v3; /*0x67c407*/
      *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] /*0x67c40b*/
                                                                                         + 4 * v3);
    }
    while ( v3 < (int)this->DynamicVector_field_0x10 ); /*0x67c414*/
  }
  return 1; /*0x67c419*/
}



// ==== 0x0067C430  RulesClass::readIQ  this=VectorClass  sig=csp ====
_DWORD *__thiscall RulesClass::readIQ(RulesClass *this, int a2, int a3)
{
  this->DetailMinFrameRateMovie = 0; /*0x67c43b*/
  this->DetailBufferZoneWidth = a2; /*0x67c43e*/
  LOBYTE(this->AmmoCrateDamage) = 1; /*0x67c441*/
  BYTE1(this->AmmoCrateDamage) = 0; /*0x67c445*/
  this->DetailMinFrameRateNormal = (int)&VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67c448*/
  if ( a2 ) /*0x67c44e*/
  {
    if ( a3 ) /*0x67c456*/
    {
      this->DetailMinFrameRateMovie = a3; /*0x67c458*/
      return &this->DetailMinFrameRateNormal; /*0x67c45e*/
    }
    this->DetailMinFrameRateMovie = __2_YAPAXI_Z(4 * a2); /*0x67c46d*/
    BYTE1(this->AmmoCrateDamage) = 1; /*0x67c470*/
  }
  return &this->DetailMinFrameRateNormal; /*0x67c45d*/
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
int __thiscall Stream::ReadOLEObjects(Stream *this)
{
  int result; // eax
  int v3; // ebx
  int v4; // [esp+10h] [ebp-8h] BYREF
  LPVOID ppvObj; // [esp+14h] [ebp-4h] BYREF

  result = ((int (__stdcall *)(Stream *, int *, int, _DWORD))this->m_Stream->m_Size)(this, &v4, 4, 0); /*0x67c6a4*/
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
        result = OleLoadFromStream((LPSTREAM)this, &IID_IUnknown, &ppvObj); /*0x67c6c6*/
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
_DWORD *__thiscall Power::UpdateAll(Power *this)
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
  void *v50; // eax
  void *v51; // edx
  int v53; // [esp+C0h] [ebp-Ch] BYREF
  void *v54; // [esp+C4h] [ebp-8h]
  void *v55; // [esp+C8h] [ebp-4h]

  v53 = 0; /*0x67c6f2*/
  v54 = 0; /*0x67c6fa*/
  v55 = 0; /*0x67c702*/
  Power::ComputeHousePowerChecksum((int)dword_A8B230, (unsigned int *)&v53); /*0x67c70a*/
  for ( i = 0; i < dword_A83CA8; ++i ) /*0x67c718*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A83C9C + i) + 52))(*((_DWORD *)dword_A83C9C + i), &v53); /*0x67c72a*/
  for ( j = 0; j < stru_A80220.?; ++j ) /*0x67c740*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)stru_A80220.? + j) + 52))( /*0x67c752*/
      *((_DWORD *)stru_A80220.? + j),
      &v53);
  for ( k = 0; k < dword_A83CF0; ++k ) /*0x67c768*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A83CE4 + k) + 52))(*((_DWORD *)dword_A83CE4 + k), &v53); /*0x67c77a*/
  for ( m = 0; m < FootClass_Array.?[2]; ++m ) /*0x67c790*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(FootClass_Array.? + 4 * m) + 52))( /*0x67c7a2*/
      *(_DWORD *)(FootClass_Array.? + 4 * m),
      &v53);
  for ( n = 0; n < dword_A8E358; ++n ) /*0x67c7b8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E34C + n) + 52))(*((_DWORD *)dword_A8E34C + n), &v53); /*0x67c7ca*/
  for ( ii = 0; ii < *(int *)&stru_A83D50.__pad_80[40]; ++ii ) /*0x67c7e0*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * ii) + 52))( /*0x67c7f2*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * ii),
      &v53);
  for ( jj = 0; jj < dword_A83C78; ++jj ) /*0x67c808*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A83C6C + jj) + 52))( /*0x67c81a*/
      *((_DWORD *)dword_A83C6C + jj),
      &v53);
  for ( kk = 0; kk < stru_A8EB00.ObjectTypeClass[20]; ++kk ) /*0x67c830*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(stru_A8EB00.ObjectTypeClass[17] + 4 * kk) + 52))( /*0x67c842*/
      *(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * kk),
      &v53);
  for ( mm = 0; mm < dword_A8B228; ++mm ) /*0x67c858*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8B21C + mm) + 52))( /*0x67c86a*/
      *((_DWORD *)dword_A8B21C + mm),
      &v53);
  for ( nn = 0; nn < dword_A8E3A0; ++nn ) /*0x67c880*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E394 + nn) + 52))( /*0x67c892*/
      *((_DWORD *)dword_A8E394 + nn),
      &v53);
  for ( i1 = 0; i1 < dword_A8B210; ++i1 ) /*0x67c8a8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8B204 + i1) + 52))( /*0x67c8ba*/
      *((_DWORD *)dword_A8B204 + i1),
      &v53);
  for ( i2 = 0; i2 < dword_A8E9B8; ++i2 ) /*0x67c8d0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E9AC + i2) + 52))( /*0x67c8e2*/
      *((_DWORD *)dword_A8E9AC + i2),
      &v53);
  for ( i3 = 0; i3 < FootClass_Array.?[0]; ++i3 ) /*0x67c8f8*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(FootClass_Array.?[3] + 4 * i3) + 52))( /*0x67c90a*/
      *(_DWORD *)(FootClass_Array.?[3] + 4 * i3),
      &v53);
  for ( i4 = 0; i4 < dword_A8E8E0; ++i4 ) /*0x67c920*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E8D4 + i4) + 52))( /*0x67c932*/
      *((_DWORD *)dword_A8E8D4 + i4),
      &v53);
  for ( i5 = 0; i5 < *(int *)&stru_A8EB00.?[204]; ++i5 ) /*0x67c948*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * i5) + 52))( /*0x67c95a*/
      *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * i5),
      &v53);
  for ( i6 = 0; i6 < (int)FootClass_Array.?; ++i6 ) /*0x67c970*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)&FootClass_Array.?->ObjectClass + i6) + 52))( /*0x67c982*/
      *((_DWORD *)&FootClass_Array.?->ObjectClass + i6),
      &v53);
  for ( i7 = 0; i7 < *(int *)&FootClass_Array.?; ++i7 ) /*0x67c998*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(FootClass_Array.?[5] + 4 * i7) + 52))( /*0x67c9aa*/
      *(_DWORD *)(FootClass_Array.?[5] + 4 * i7),
      &v53);
  for ( i8 = 0; i8 < dword_8872C0; ++i8 ) /*0x67c9c0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_8872B4 + i8) + 52))( /*0x67c9d2*/
      *((_DWORD *)dword_8872B4 + i8),
      &v53);
  for ( i9 = 0; i9 < g_MultiplayerCleanup; ++i9 ) /*0x67c9e8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_B0E784 + i9) + 52))( /*0x67c9fa*/
      *((_DWORD *)dword_B0E784 + i9),
      &v53);
  for ( i10 = 0; i10 < g_GameObjectCleanup; ++i10 ) /*0x67ca10*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)g_TagClassCount + i10) + 52))( /*0x67ca22*/
      *((_DWORD *)g_TagClassCount + i10),
      &v53);
  for ( i11 = 0; i11 < *(int *)FootClass_Array.?; ++i11 ) /*0x67ca38*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(FootClass_Array.?[0] + 4 * i11) + 52))( /*0x67ca4a*/
      *(_DWORD *)(FootClass_Array.?[0] + 4 * i11),
      &v53);
  for ( i12 = 0; i12 < dword_A8EAF8; ++i12 ) /*0x67ca60*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8EAEC + i12) + 52))( /*0x67ca72*/
      *((_DWORD *)dword_A8EAEC + i12),
      &v53);
  for ( i13 = 0; i13 < dword_B0E668; ++i13 ) /*0x67ca88*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_B0E65C + i13) + 52))( /*0x67ca9a*/
      *((_DWORD *)dword_B0E65C + i13),
      &v53);
  for ( i14 = 0; i14 < g_BuildingLoadQueue_Array.?[54]; ++i14 ) /*0x67cab0*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(g_BuildingLoadQueue_Array.?[51] + 4 * i14) + 52))( /*0x67cac2*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[51] + 4 * i14),
      &v53);
  for ( i15 = 0; i15 < *(int *)&stru_A83D50.__pad_C8[40]; ++i15 ) /*0x67cad8*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * i15) + 52))( /*0x67caea*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * i15),
      &v53);
  for ( i16 = 0; i16 < stru_A8EB00.ObjectTypeClass[14]; ++i16 ) /*0x67cb00*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(stru_A8EB00.ObjectTypeClass[11] + 4 * i16) + 52))( /*0x67cb12*/
      *(_DWORD *)(stru_A8EB00.ObjectTypeClass[11] + 4 * i16),
      &v53);
  for ( i17 = 0; i17 < *(int *)&stru_88732C.__pad_1C[80]; ++i17 ) /*0x67cb28*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_88732C.__pad_1C[68] + 4 * i17) + 52))( /*0x67cb3a*/
      *(_DWORD *)(*(_DWORD *)&stru_88732C.__pad_1C[68] + 4 * i17),
      &v53);
  for ( i18 = 0; i18 < g_WarheadTypePool; ++i18 ) /*0x67cb50*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_8874C4 + i18) + 52))( /*0x67cb62*/
      *((_DWORD *)dword_8874C4 + i18),
      &v53);
  for ( i19 = 0; i19 < g_WeaponTypePool; ++i19 ) /*0x67cb78*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)g_WeaponTypeConfig + i19) + 52))( /*0x67cb8a*/
      *((_DWORD *)g_WeaponTypeConfig + i19),
      &v53);
  for ( i20 = 0; i20 < *(int *)&stru_A83D50.__pad_3C[28]; ++i20 ) /*0x67cba0*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * i20) + 52))( /*0x67cbb2*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * i20),
      &v53);
  for ( i21 = 0; i21 < *(int *)&stru_A83D50.__pad_80[8]; ++i21 ) /*0x67cbc8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)stru_A83D50.SuperClass_field_0x7C + i21) + 52))( /*0x67cbda*/
      *((_DWORD *)stru_A83D50.SuperClass_field_0x7C + i21),
      &v53);
  for ( i22 = 0; i22 < g_GameCleanupState; ++i22 ) /*0x67cbf0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8020C + i22) + 52))( /*0x67cc02*/
      *((_DWORD *)dword_A8020C + i22),
      &v53);
  for ( i23 = 0; i23 < (int)stru_A83D50.SuperClass_field_0x28; ++i23 ) /*0x67cc18*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * i23) + 52))( /*0x67cc2a*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * i23),
      &v53);
  for ( i24 = 0; i24 < dword_A83C90; ++i24 ) /*0x67cc40*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A83C84 + i24) + 52))( /*0x67cc52*/
      *((_DWORD *)dword_A83C84 + i24),
      &v53);
  for ( i25 = 0; i25 < *(int *)&stru_A8EB00.?[364]; ++i25 ) /*0x67cc68*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[352] + 4 * i25) + 52))( /*0x67cc7a*/
      *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[352] + 4 * i25),
      &v53);
  for ( i26 = 0; i26 < dword_B72618; ++i26 ) /*0x67cc90*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_B7260C + i26) + 52))( /*0x67cca2*/
      *((_DWORD *)dword_B7260C + i26),
      &v53);
  for ( i27 = 0; i27 < *(int *)&stru_A8EB00.?[68]; ++i27 ) /*0x67ccb8*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * i27) + 52))( /*0x67ccca*/
      *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * i27),
      &v53);
  for ( i28 = 0; i28 < *(int *)&stru_A83D50.__pad_3C[4]; ++i28 ) /*0x67cce0*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * i28) + 52))( /*0x67ccf2*/
      *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * i28),
      &v53);
  for ( i29 = 0; i29 < g_MissionQueueFrame.random[133]; ++i29 ) /*0x67cd08*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(g_MissionQueueFrame.random[130] + 4 * i29) + 52))( /*0x67cd1a*/
      *(_DWORD *)(g_MissionQueueFrame.random[130] + 4 * i29),
      &v53);
  for ( i30 = 0; i30 < FootClass_Array.?[2]; ++i30 ) /*0x67cd30*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&FootClass_Array.? + 4 * i30) + 52))( /*0x67cd42*/
      *(_DWORD *)(*(_DWORD *)&FootClass_Array.? + 4 * i30),
      &v53);
  for ( i31 = 0; i31 < FootClass_Array.?[0]; ++i31 ) /*0x67cd58*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(FootClass_Array.?[3] + 4 * i31) + 52))( /*0x67cd6a*/
      *(_DWORD *)(FootClass_Array.?[3] + 4 * i31),
      &v53);
  for ( i32 = 0; i32 < FootClass_Array.?[0]; ++i32 ) /*0x67cd80*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(FootClass_Array.?[0] + 4 * i32) + 52))( /*0x67cd92*/
      *(_DWORD *)(FootClass_Array.?[0] + 4 * i32),
      &v53);
  for ( i33 = 0; i33 < g_BuildingLoadQueue_Array.?[0]; ++i33 ) /*0x67cda8*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(g_BuildingLoadQueue_Array.?[2] + 4 * i33) + 52))( /*0x67cdba*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * i33),
      &v53);
  for ( i34 = 0; i34 < dword_8A3880; ++i34 ) /*0x67cdd0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_8A3874 + i34) + 52))( /*0x67cde2*/
      *((_DWORD *)dword_8A3874 + i34),
      &v53);
  for ( i35 = 0; i35 < dword_A8E340; ++i35 ) /*0x67cdf8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E334 + i35) + 52))( /*0x67ce0a*/
      *((_DWORD *)dword_A8E334 + i35),
      &v53);
  for ( i36 = 0; i36 < dword_A83CC8; ++i36 ) /*0x67ce20*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A83CBC + i36) + 52))( /*0x67ce32*/
      *((_DWORD *)dword_A83CBC + i36),
      &v53);
  for ( i37 = 0; i37 < dword_A8E328; ++i37 ) /*0x67ce48*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E31C + i37) + 52))( /*0x67ce5a*/
      *((_DWORD *)dword_A8E31C + i37),
      &v53);
  for ( i38 = 0; i38 < dword_A8E998; ++i38 ) /*0x67ce70*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E98C + i38) + 52))( /*0x67ce82*/
      *((_DWORD *)dword_A8E98C + i38),
      &v53);
  if ( dword_A83D4C ) /*0x67ce96*/
    Power::TimerProcess((int)dword_A83D4C->Object_field_0x30); /*0x67cea0*/
  Power::TimerProcess(*(int *)&stru_A8EB00.?[416]); /*0x67ceb0*/
  Power::TimerProcess(*(int *)&stru_A8EB00.?[228]); /*0x67cebf*/
  v50 = v54; /*0x67ceca*/
  this->Power_field_0x0 = v53; /*0x67cece*/
  v51 = v55; /*0x67ced0*/
  this->Power_field_0x4 = v50; /*0x67ced5*/
  this->Power_field_0x8 = v51; /*0x67cedb*/
  return &this->Power_field_0x0; /*0x67ced4*/
}



// ==== 0x0067CEF0  SaveScenarioClassGame_AdjustMPSaveFileName  this=char*  sig=csp ====
char __fastcall SaveScenarioClassGame_AdjustMPSaveFileName(LPCCH lpMultiByteStr, wchar_t *Source, int a3)
{
  int v6; // eax
  char v7; // bl
  ComPtr ppstgOpen[4]; // [esp+50h] [ebp-490h] BYREF
  wchar_t v9[506]; // [esp+ECh] [ebp-3F4h] BYREF

  Debug::Log(); /*0x67cf05*/
  *(_DWORD *)ppstgOpen[0].__pad_0 = 0; /*0x67cf1b*/
  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, (LPWSTR)&ppstgOpen[0].ComPtr_field_0x1C, 64); /*0x67cf1f*/
  ComPtr::ReleaseSimple(ppstgOpen); /*0x67cf29*/
  *(_DWORD *)ppstgOpen[0].__pad_0 = 0; /*0x67cf3e*/
  if ( StgCreateDocfile((const WCHAR *)&ppstgOpen[0].ComPtr_field_0x1C, 0x1012u, 0, (IStorage **)ppstgOpen) < 0 ) /*0x67cf4a*/
  {
    ComPtr::ReleaseSimple(ppstgOpen); /*0x67cf50*/
    return 0; /*0x67cf61*/
  }
  GameState::Reset((GameState *)v9); /*0x67cf6b*/
  Map_Save_681080((ObjectClass *)v9, dword_83D560); /*0x67cf7d*/
  Map_Save_6810A0((ObjectClass *)v9, Source); /*0x67cf8a*/
  Map_Save((ObjectClass *)v9, 1); /*0x67cf98*/
  Map_Save_6810D0((ObjectClass *)v9, *((wchar_t **)dword_A83D4C->Object_field_0x34 + 24)); /*0x67cfb1*/
  Map_Save_681110((ObjectClass *)v9, dword_A8B230[375].uniqueId); /*0x67cfca*/
  Map_Save_681130((ObjectClass *)v9, (int)dword_A8B230[130].vtable3); /*0x67cfe2*/
  Map_Save_6811C0((char *)v9, aSunExe); /*0x67cff3*/
  Map_Save_6812C0((ObjectClass *)v9, *(int *)&dword_A8B238); /*0x67d006*/
  CoFileTimeNow((FILETIME *)&ppstgOpen[0].ComPtr_field_0x14); /*0x67d010*/
  Map_Save_681280((ObjectClass *)v9, &ppstgOpen[0].ComPtr_field_0x14); /*0x67d022*/
  Map_Save_681200((ObjectClass *)v9, &ppstgOpen[0].ComPtr_field_0x14); /*0x67d033*/
  Map_Save_681240((ObjectClass *)v9, &ppstgOpen[0].ComPtr_field_0x14); /*0x67d044*/
  GameOptions::SaveLoad((int)v9, *(int **)ppstgOpen[0].__pad_0); /*0x67d055*/
  ppstgOpen[0].ComPtr_field_0x08 = 0; /*0x67d05a*/
  if ( !*(_DWORD *)ppstgOpen[0].__pad_0 ) /*0x67d064*/
    WinAPI::Wrapper(-2147467261); /*0x67d06b*/
  if ( (*(int (__stdcall **)(_DWORD, _UNKNOWN **, int, _DWORD, _DWORD, int *))(**(_DWORD **)ppstgOpen[0].__pad_0 + 12))( /*0x67d08d*/
         *(_DWORD *)ppstgOpen[0].__pad_0,
         &off_83D5A8,
         4114,
         0,
         0,
         &ppstgOpen[0].ComPtr_field_0x08) < 0 )
  {
    if ( ppstgOpen[0].ComPtr_field_0x08 ) /*0x67d095*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x08 + 8))(ppstgOpen[0].ComPtr_field_0x08); /*0x67d09a*/
    if ( *(_DWORD *)ppstgOpen[0].__pad_0 ) /*0x67d0a3*/
    {
LABEL_9:
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)ppstgOpen[0].__pad_0 + 8))(*(_DWORD *)ppstgOpen[0].__pad_0); /*0x67d0a9*/
      return 0; /*0x67d0bb*/
    }
    return 0; /*0x67d0a3*/
  }
  ppstgOpen[0].ComPtr_field_0x04 = 0; /*0x67d0c2*/
  Game::readIniSettings((Game *)&ppstgOpen[0].ComPtr_field_0x04); /*0x67d0c6*/
  if ( CoCreateInstance(&stru_7E9540, 0, 7u, &riid, (LPVOID *)&ppstgOpen[0].ComPtr_field_0x10) >= 0 ) /*0x67d0e5*/
  {
    if ( OleRun((LPUNKNOWN)ppstgOpen[0].ComPtr_field_0x10) >= 0 ) /*0x67d0f4*/
      (**(void (__stdcall ***)(int, IID *, int *))ppstgOpen[0].ComPtr_field_0x10)( /*0x67d107*/
        ppstgOpen[0].ComPtr_field_0x10,
        &stru_83D598,
        &ppstgOpen[0].ComPtr_field_0x04);
    (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x10 + 8))(ppstgOpen[0].ComPtr_field_0x10); /*0x67d110*/
  }
  if ( !ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d119*/
    WinAPI::Wrapper(-2147467261); /*0x67d120*/
  if ( (*(int (__stdcall **)(int, int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x04 + 12))( /*0x67d136*/
         ppstgOpen[0].ComPtr_field_0x04,
         ppstgOpen[0].ComPtr_field_0x08) < 0 )
  {
    Debug::Log(); /*0x67d13d*/
    if ( ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d14b*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x04 + 8))(ppstgOpen[0].ComPtr_field_0x04); /*0x67d150*/
    if ( ppstgOpen[0].ComPtr_field_0x08 ) /*0x67d159*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x08 + 8))(ppstgOpen[0].ComPtr_field_0x08); /*0x67d15e*/
    if ( *(_DWORD *)ppstgOpen[0].__pad_0 ) /*0x67d167*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)ppstgOpen[0].__pad_0 + 8))(*(_DWORD *)ppstgOpen[0].__pad_0); /*0x67d16c*/
    return 0; /*0x67d17b*/
  }
  ppstgOpen[0].ComPtr_field_0x0C = 0; /*0x67d182*/
  if ( ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d188*/
  {
    v6 = Game::validateScenario((Game *)&ppstgOpen[0].ComPtr_field_0x0C, &ppstgOpen[0].ComPtr_field_0x04); /*0x67d193*/
    if ( v6 < 0 && v6 != -2147467262 ) /*0x67d1a1*/
      WinAPI::Wrapper(v6); /*0x67d1a4*/
  }
  v7 = SaveGame::Start((SaveGame *)ppstgOpen[0].ComPtr_field_0x0C); /*0x67d1b4*/
  if ( !ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d1bc*/
    WinAPI::Wrapper(-2147467261); /*0x67d1c3*/
  if ( (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x04 + 16))( /*0x67d1d5*/
         ppstgOpen[0].ComPtr_field_0x04,
         0) < 0 )
  {
    if ( ppstgOpen[0].ComPtr_field_0x0C ) /*0x67d1dd*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x0C + 8))(ppstgOpen[0].ComPtr_field_0x0C); /*0x67d1e2*/
    if ( ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d1eb*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x04 + 8))(ppstgOpen[0].ComPtr_field_0x04); /*0x67d1f0*/
    if ( ppstgOpen[0].ComPtr_field_0x08 ) /*0x67d1f9*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x08 + 8))(ppstgOpen[0].ComPtr_field_0x08); /*0x67d1fe*/
    if ( *(_DWORD *)ppstgOpen[0].__pad_0 ) /*0x67d207*/
      goto LABEL_9; /*0x67d207*/
    return 0; /*0x67d207*/
  }
  if ( !ppstgOpen[0].ComPtr_field_0x08 ) /*0x67d228*/
    WinAPI::Wrapper(-2147467261); /*0x67d22f*/
  (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x08 + 8))(ppstgOpen[0].ComPtr_field_0x08); /*0x67d23b*/
  ppstgOpen[0].ComPtr_field_0x08 = 0; /*0x67d23e*/
  if ( !*(_DWORD *)ppstgOpen[0].__pad_0 ) /*0x67d248*/
    WinAPI::Wrapper(-2147467261); /*0x67d24f*/
  if ( (*(int (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)ppstgOpen[0].__pad_0 + 36))( /*0x67d261*/
         *(_DWORD *)ppstgOpen[0].__pad_0,
         0) < 0 )
  {
    if ( ppstgOpen[0].ComPtr_field_0x0C ) /*0x67d269*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x0C + 8))(ppstgOpen[0].ComPtr_field_0x0C); /*0x67d26e*/
    if ( ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d277*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x04 + 8))(ppstgOpen[0].ComPtr_field_0x04); /*0x67d27c*/
    if ( ppstgOpen[0].ComPtr_field_0x08 ) /*0x67d285*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x08 + 8))(ppstgOpen[0].ComPtr_field_0x08); /*0x67d28a*/
    if ( *(_DWORD *)ppstgOpen[0].__pad_0 ) /*0x67d293*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)ppstgOpen[0].__pad_0 + 8))(*(_DWORD *)ppstgOpen[0].__pad_0); /*0x67d298*/
    return 0; /*0x67d2a7*/
  }
  Debug::Log(); /*0x67d2b1*/
  if ( ppstgOpen[0].ComPtr_field_0x0C ) /*0x67d2bf*/
    (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x0C + 8))(ppstgOpen[0].ComPtr_field_0x0C); /*0x67d2c4*/
  if ( ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d2cd*/
    (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x04 + 8))(ppstgOpen[0].ComPtr_field_0x04); /*0x67d2d2*/
  if ( ppstgOpen[0].ComPtr_field_0x08 ) /*0x67d2db*/
    (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x08 + 8))(ppstgOpen[0].ComPtr_field_0x08); /*0x67d2e0*/
  if ( *(_DWORD *)ppstgOpen[0].__pad_0 ) /*0x67d2e9*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)ppstgOpen[0].__pad_0 + 8))(*(_DWORD *)ppstgOpen[0].__pad_0); /*0x67d2ee*/
  return v7; /*0x67cf57*/
}



// ==== 0x0067D300  SaveGame::Start  this=SaveGame  sig=csp ====
char __thiscall SaveGame::Start(SaveGame *this)
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
  in... [33906 chars total]



// ==== 0x0067E440  Game::LoadSaved  this=char*  sig=csp ====
char __thiscall LoadSavedGame(LPCCH lpMultiByteStr)
{
  int COM; // eax
  int *p_ppstgOpen; // ecx
  int v5; // eax
  IStorage *ppstgOpen; // [esp+3Ch] [ebp-508h] BYREF
  int v7; // [esp+40h] [ebp-504h] BYREF
  IStorage *v8; // [esp+44h] [ebp-500h] BYREF
  int v9; // [esp+48h] [ebp-4FCh] BYREF
  LPSTREAM pStm; // [esp+4Ch] [ebp-4F8h]
  WCHAR WideCharStr[64]; // [esp+50h] [ebp-4F4h] BYREF
  WCHAR pwcsName[64]; // [esp+D0h] [ebp-474h] BYREF
  _BYTE v13[1012]; // [esp+150h] [ebp-3F4h] BYREF

  Debug::Log(); /*0x67e452*/
  GameState::Reset(v13); /*0x67e461*/
  ppstgOpen = 0; /*0x67e47a*/
  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 64); /*0x67e47e*/
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
  dword_A8B238[0] = LoadOptions::GetFlag252(v13); /*0x67e4e8*/
  SwizzleManager::ConvertWrapper((int)&SwizzleManagerClass_Instance); /*0x67e4f2*/
  v8 = 0; /*0x67e4fe*/
  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, pwcsName, 64); /*0x67e50a*/
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
  if ( v8->lpVtbl->OpenStream(v8, (const OLECHAR *)&off_83D5A8, 0, 16, 0, (IStream **)&v9) >= 0 ) /*0x67e577*/
  {
    v7 = 0; /*0x67e5a6*/
    Game::readIniSettings(&v7); /*0x67e5aa*/
    if ( CoCreateInstance(&stru_7E9540, 0, 7u, &riid, (LPVOID *)&ppstgOpen) >= 0 ) /*0x67e5c9*/
    {
      if ( OleRun((LPUNKNOWN)ppstgOpen) >= 0 ) /*0x67e5d8*/
        ppstgOpen->lpVtbl->QueryInterface(ppstgOpen, &stru_83D598, (void **)&v7); /*0x67e5eb*/
      ppstgOpen->lpVtbl->Release(ppstgOpen); /*0x67e5f4*/
    }
    if ( !v7 ) /*0x67e5fd*/
      WinAPI::Wrapper(-2147467261); /*0x67e604*/
    (*(void (__stdcall **)(int, int))(*(_DWORD *)v7 + 12))(v7, v9); /*0x67e615*/
    pStm = 0; /*0x67e618*/
    if ( v7 ) /*0x67e620*/
    {
      v5 = Game::validateScenario(&v7); /*0x67e62b*/
      if ( v5 < 0 && v5 != -2147467262 ) /*0x67e639*/
        WinAPI::Wrapper(v5); /*0x67e63c*/
    }
    ProgressAnim::Init((int)dword_AC4F58, 0, 1079574528, 0, 0); /*0x67e64e*/
    LoadGame::Start(pStm); /*0x67e659*/
    if ( !v7 ) /*0x67e664*/
      WinAPI::Wrapper(-2147467261); /*0x67e66b*/
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v7 + 16))(v7, 0); /*0x67e678*/
    SwizzleManager::ConvertWrapper((int)&SwizzleManagerClass_Instance); /*0x67e680*/
    Game_Load(); /*0x67e685*/
    SidebarClass::InitButtons(&dword_87F7E8); /*0x67e68f*/
    TacticalClass::BuildCommandBar(&dword_87F7E8, (int)MultiByteToWideChar, 1); /*0x67e69f*/
    SidebarClass::LoadResources(); /*0x67e6a9*/
    BuildingClass::ClearOccupancyData(); /*0x67e6ae*/
    BuildingClass::ClearFactoryData(); /*0x67e6b3*/
    FogOfWar::Render((int **)&dword_87F7E8); /*0x67e6bd*/
    byte_A8ED5C = 1; /*0x67e6c4*/
    byte_A8E378 = 1; /*0x67e6ca*/
    ToggleDisplayMode(1); /*0x67e6d0*/
    LoadingScreen::FreeResources3(); /*0x67e6d5*/
    Debug::Log(); /*0x67e6e0*/
    if ( pStm ) /*0x67e6ee*/
      pStm->__pad_0->Release(pStm); /*0x67e6f3*/
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
char __thiscall LoadGame::Start(LoadGame *this)
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
  int v54; ... [31771 chars total]



// ==== 0x0067F7E0  SaveGame::LoadMainGameState  this=SaveGame  sig=csp ====
int __thiscall SaveGame::LoadMainGameState(SaveGame *this)
{
  int result; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // edx
  int v6; // edi
  int v7; // edx
  int v8; // edi
  int v9; // eax
  ParticleSystemClass *unk1Particles; // [esp+A0h] [ebp-4h] BYREF

  result = (*(int (__stdcall **)(SaveGame *, _BYTE *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f7f1*/
             this,
             &stru_A8EB00.?[404],
             4,
             0);
  if ( result >= 0 )
  {
    result = (*(int (__stdcall **)(SaveGame *, Object **, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f808*/
               this,
               &dword_A83D4C,
               4,
               0);
    if ( result >= 0 )
    {
      result = (*(int (__stdcall **)(SaveGame *, _BYTE *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f81f*/
                 this,
                 &stru_A8EB00.?[416],
                 4,
                 0);
      if ( result >= 0 )
      {
        v3 = *(_DWORD *)this->__pad_0; /*0x67f82f*/
        unk1Particles = *(ParticleSystemClass **)&stru_A8EB00.?[228]; /*0x67f83b*/
        result = (*(int (__stdcall **)(SaveGame *, ParticleSystemClass **, int, _DWORD))(v3 + 16))( /*0x67f83f*/
                   this,
                   &unk1Particles,
                   4,
                   0);
        if ( result >= 0 )
        {
          v4 = 0; /*0x67f84e*/
          if ( (int)unk1Particles <= 0 )
          {
LABEL_8:
            result = (*(int (__stdcall **)(SaveGame *, float *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f879*/
                       this,
                       flt_89EA40,
                       432,
                       0);
            if ( result >= 0 )
            {
              SuperWeaponClass::LoadFromSaveStream((SuperWeaponClass *)this); /*0x67f895*/
              v5 = *(_DWORD *)this->__pad_0; /*0x67f8a0*/
              unk1Particles = FootClass_Array.?; /*0x67f8ac*/
              result = (*(int (__stdcall **)(SaveGame *, ParticleSystemClass **, int, _DWORD))(v5 + 16))( /*0x67f8b0*/
                         this,
                         &unk1Particles,
                         4,
                         0);
              if ( result >= 0 )
              {
                v6 = 0; /*0x67f8bf*/
                if ( (int)unk1Particles <= 0 )
                {
LABEL_13:
                  v7 = *(_DWORD *)this->__pad_0; /*0x67f8ea*/
                  unk1Particles = (ParticleSystemClass *)FootClass_Array.?[0]; /*0x67f8fc*/
                  result = (*(int (__stdcall **)(SaveGame *, ParticleSystemClass **, int, _DWORD))(v7 + 16))( /*0x67f900*/
                             this,
                             &unk1Particles,
                             4,
                             0);
                  if ( result >= 0 )
                  {
                    v8 = 0; /*0x67f90f*/
                    if ( (int)unk1Particles <= 0 )
                    {
LABEL_17:
                      result = (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f93a*/
                                 this,
                                 dword_81DA8C,
                                 76,
                                 0);
                      if ( result >= 0 )
                      {
                        result = (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f959*/
                                   this,
                                   dword_81DAD8,
                                   76,
                                   0);
                        if ( result >= 0 )
                        {
                          result = (*(int (__stdcall **)(SaveGame *, double *, int, _DWORD))(*(_DWORD *)this->__pad_0 /*0x67f96f*/
                                                                                           + 16))(
                                     this,
                                     dbl_89EC28,
                                     152,
                                     0);
                          if ( result >= 0 )
                          {
                            result = (*(int (__stdcall **)(SaveGame *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 /*0x67f982*/
                                                                                           + 16))(
                                       this,
                                       byte_89ECC0,
                                       19,
                                       0);
                            if ( result >= 0 )
                            {
                              result = (*(int (__stdcall **)(SaveGame *, MissionClass *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f998*/
                                         this,
                                         &stru_A8E3A8,
                                         1024,
                                         0);
                              if ( result >= 0 )
                              {
                                v9 = (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f9ab*/
                                       this,
                                       &dword_B07784,
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
                        result = (*(int (__stdcall **)(SaveGame *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f926*/
                                   this,
                                   FootClass_Array.?[5] + 4 * v8,
                                   4,
                                   0);
                        if ( result < 0 ) /*0x67f92b*/
                          break; /*0x67f92b*/
                        if ( ++v8 >= (int)unk1Particles ) /*0x67f938*/
                          goto LABEL_17; /*0x67f938*/
                      }
                    }
                  }
                }
                else
                {
                  while ( 1 ) /*0x67f8d6*/
                  {
                    result = (*(int (__stdcall **)(SaveGame *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f8d6*/
                               this,
                               (char *)&FootClass_Array.?->ObjectClass + 4 * v6,
                               4,
                               0);
                    if ( result < 0 ) /*0x67f8db*/
                      break; /*0x67f8db*/
                    if ( ++v6 >= (int)unk1Particles ) /*0x67f8e8*/
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
              result = (*(int (__stdcall **)(SaveGame *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f865*/
                         this,
                         *(_DWORD *)&stru_A8EB00.?[216] + 4 * v4,
                         4,
                         0);
              if ( result < 0 ) /*0x67f86a*/
                break; /*0x67f86a*/
              if ( ++v4 >= (int)unk1Particles ) /*0x67f877*/
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
int __thiscall Game::SerializeGameSaveState(Game *this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  int i; // edi
  int v6; // edi
  ParticleSystemClass *v7; // eax
  int j; // edi
  int v9; // edi
  int v10; // eax
  int k; // edi
  int v12; // eax
  int v13; // [esp+B8h] [ebp-8h] BYREF
  int v14; // [esp+BCh] [ebp-4h] BYREF

  result = (*(int (__stdcall **)(Game *, _BYTE *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67f9d3*/
             this,
             &stru_A8EB00.?[404],
             4,
             0);
  if ( result >= 0 )
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&stru_A8EB00.?[404]); /*0x67f9e8*/
    result = (*(int (__stdcall **)(Game *, Object **, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67f9f9*/
               this,
               &dword_A83D4C,
               4,
               0);
    if ( result >= 0 )
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&dword_A83D4C); /*0x67fa0e*/
      result = (*(int (__stdcall **)(Game *, _BYTE *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fa1f*/
                 this,
                 &stru_A8EB00.?[416],
                 4,
                 0);
      if ( result >= 0 )
      {
        result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v13, 4, 0); /*0x67fa36*/
        if ( result >= 0 )
        {
          v3 = 0; /*0x67fa45*/
          if ( v13 <= 0 )
          {
LABEL_14:
            for ( i = 0; i < *(int *)&stru_A8EB00.?[228]; ++i ) /*0x67face*/
              ObjectPtr::RegisterForTracking( /*0x67fade*/
                (int)&SwizzleManagerClass_Instance,
                (int *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * i));
            result = (*(int (__stdcall **)(Game *, float *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fafc*/
                       this,
                       flt_89EA40,
                       432,
                       0);
            if ( result >= 0 )
            {
              SuperWeapon::SerializeSuperWeaponState((SuperWeapon *)this); /*0x67fb09*/
              result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fb1a*/
                         this,
                         &v13,
                         4,
                         0);
              if ( result >= 0 )
              {
                v6 = 0; /*0x67fb29*/
                if ( v13 <= 0 )
                {
LABEL_27:
                  for ( j = 0; j < (int)FootClass_Array.?; ++j ) /*0x67fbb2*/
                    ObjectPtr::RegisterForTracking( /*0x67fbc2*/
                      (int)&SwizzleManagerClass_Instance,
                      (int *)&FootClass_Array.?->ObjectClass + j);
                  result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fbdd*/
                             this,
                             &v13,
                             4,
                             0);
                  if ( result >= 0 )
                  {
                    v9 = 0; /*0x67fbec*/
                    if ( v13 <= 0 )
                    {
LABEL_39:
                      for ( k = 0; k < FootClass_Array.?[0]; ++k ) /*0x67fc74*/
                        ObjectPtr::RegisterForTracking( /*0x67fc84*/
                          (int)&SwizzleManagerClass_Instance,
                          (int *)(FootClass_Array.?[5] + 4 * k));
                      result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fc9f*/
                                 this,
                                 dword_81DA8C,
                                 76,
                                 0);
                      if ( result >= 0 )
                      {
                        result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fcb2*/
                                   this,
                                   dword_81DAD8,
                                   76,
                                   0);
                        if ( result >= 0 )
                        {
                          result = (*(int (__stdcall **)(Game *, double *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fcc8*/
                                     this,
                                     dbl_89EC28,
                                     152,
                                     0);
                          if ( result >= 0 )
                          {
                            result = (*(int (__stdcall **)(Game *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fcdb*/
                                       this,
                                       byte_89ECC0,
                                       19,
                                       0);
                            if ( result >= 0 )
                            {
                              result = (*(int (__stdcall **)(Game *, MissionClass *, int, _DWORD))(*(_DWORD *)this->__pad_0 /*0x67fcf1*/
                                                                                                 + 12))(
                                         this,
                                         &stru_A8E3A8,
                                         1024,
                                         0);
                              if ( result >= 0 )
                              {
                                v12 = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fd04*/
                                        this,
                                        &dword_B07784,
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
                        result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fbfe*/
                                   this,
                                   &v14,
                                   4,
                                   0);
                        if ( result < 0 ) /*0x67fc03*/
                          break; /*0x67fc03*/
                        if ( FootClass_Array.?[0] < FootClass_Array.?[6] /*0x67fc3f*/
                          || (BYTE1(FootClass_Array.?[7]) || !FootClass_Array.?[6])
                          && FootClass_Array.?[1] > 0
                          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(FootClass_Array.?[4] + 8))(
                               &FootClass_Array.?[4],
                               FootClass_Array.?[6] + FootClass_Array.?[1],
                               0) )
                        {
                          v10 = FootClass_Array.?[0]++; /*0x67fc52*/
                          *(_DWORD *)(FootClass_Array.?[5] + 4 * v10) = v14; /*0x67fc5f*/
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
                    result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fb3b*/
                               this,
                               &v14,
                               4,
                               0);
                    if ( result < 0 ) /*0x67fb40*/
                      break; /*0x67fb40*/
                    if ( (int)FootClass_Array.? < (int)FootClass_Array.? /*0x67fb7d*/
                      || (BYTE1(FootClass_Array.?) || !FootClass_Array.?)
                      && FootClass_Array.?[0] > 0
                      && ((unsigned __int8 (__thiscall *)(ParticleSystemClass **, char *, _DWORD))FootClass_Array.?->?)(
                           &FootClass_Array.?,
                           (char *)FootClass_Array.? + FootClass_Array.?[0],
                           0) )
                    {
                      v7 = FootClass_Array.?++; /*0x67fb90*/
                      *((_DWORD *)&FootClass_Array.?->ObjectClass + (_DWORD)v7) = v14; /*0x67fb9d*/
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
              result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fa57*/
                         this,
                         &v14,
                         4,
                         0);
              if ( result < 0 ) /*0x67fa5c*/
                break; /*0x67fa5c*/
              if ( *(int *)&stru_A8EB00.?[228] < *(int *)&stru_A8EB00.?[220] /*0x67fa99*/
                || (stru_A8EB00.?[225] || !*(_DWORD *)&stru_A8EB00.?[220])
                && *(int *)&stru_A8EB00.?[232] > 0
                && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[212] + 8))(
                     &stru_A8EB00.?[212],
                     *(_DWORD *)&stru_A8EB00.?[220] + *(_DWORD *)&stru_A8EB00.?[232],
                     0) )
              {
                v4 = (*(_DWORD *)&stru_A8EB00.?[228])++; /*0x67faac*/
                *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v4) = v14; /*0x67fab9*/
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
char __fastcall sub_67FD20(LPCCH lpMultiByteStr, int a2)
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
int __thiscall ComPtr::ReleaseSimple(ComPtr *this)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x67fdd0*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x67fdd0*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x67fdd9*/
  return result; /*0x67fddc*/
}



// ==== 0x0067FDE0  Game::readIniSettings  this=Game  sig=csp ====
int __thiscall Game::readIniSettings(Game *this)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x67fde0*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x67fde0*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x67fde9*/
  return result; /*0x67fdec*/
}



// ==== 0x0067FDF0  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall sub_67FDF0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x67fe03*/
  v9 = *(_DWORD *)(a2 + 16); /*0x67fe09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x67fe0d*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x67fe56*/
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
HRESULT __fastcall sub_67FE70(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x67fe83*/
  v9 = *(_DWORD *)(a2 + 16); /*0x67fe89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x67fe8d*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x67fed6*/
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
HRESULT __fastcall sub_67FEF0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x67ff03*/
  v9 = *(_DWORD *)(a2 + 16); /*0x67ff09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x67ff0d*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x67ff56*/
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
HRESULT __fastcall sub_67FF70(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x67ff83*/
  v9 = *(_DWORD *)(a2 + 16); /*0x67ff89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x67ff8d*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x67ffd6*/
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
HRESULT __fastcall sub_67FFF0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680003*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680009*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68000d*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680056*/
        if ( result < 0 ) /*0x68005b*/
          break; /*0x68005b*/
        if ( ++v6 >= v9 ) /*0x680064*/
          return 0; /*0x680064*/
      }
    }
  }
  return result; /*0x680068*/
}



// ==== 0x00671EA0  Dialog::ReadMultiplayerDialogSettings  this=Dialog  sig=csp ====
int __thiscall Dialog::ReadMultiplayerDialogSettings(Dialog *this)
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
  int v15; // eax
  char v16; // dl
  char Bool_Overwrite; // al
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
  bool *v37; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v37, (unsigned __int8 *)aMultiplayerdia); /*0x671eb0*/
  if ( result ) /*0x671ebc*/
  {
    this->q520 = INIClass::ReadInt_Overwrite( /*0x671edc*/
                                 v37,
                                 (unsigned __int8 *)aMultiplayerdia,
                                 aMinmoney,
                                 this->q520);
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x671ef7*/
                      v37,
                      (unsigned __int8 *)aMultiplayerdia,
                      aMoney,
                      *((_DWORD *)this + 1313));
    v4 = *((_DWORD *)this + 1314); /*0x671efc*/
    *((_DWORD *)this + 1313) = Int_Overwrite; /*0x671f02*/
    v5 = INIClass::ReadInt_Overwrite(v37, (unsigned __int8 *)aMultiplayerdia, aMaxmoney, v4); /*0x671f16*/
    v6 = *((_DWORD *)this + 1315); /*0x671f1b*/
    *((_DWORD *)this + 1314) = v5; /*0x671f21*/
    *((_DWORD *)this + 1315) = INIClass::ReadInt_Overwrite(v37, (unsigned __int8 *)aMultiplayerdia, aMoneyincrement, v6); /*0x671f3b*/
    v7 = INIClass::ReadInt_Overwrite(v37, (unsigned __int8 *)aMultiplayerdia, aMinunitcount, this->q524); /*0x671f56*/
    v8 = *((_DWORD *)this + 1317); /*0x671f5b*/
    this->q524 = v7; /*0x671f61*/
    v9 = INIClass::ReadInt_Overwrite( /*0x671f75*/
           v37,
           (unsigned __int8 *)aMultiplayerdia,
           (unsigned __int8 *)g_INI_Key_UnitCount,
           v8);
    v10 = *((_DWORD *)this + 1318); /*0x671f7a*/
    *((_DWORD *)this + 1317) = v9; /*0x671f80*/
    *((_DWORD *)this + 1318) = INIClass::ReadInt_Overwrite(v37, (unsigned __int8 *)aMultiplayerdia, aMaxunitcount, v10); /*0x671f9a*/
    v11 = INIClass::ReadInt_Overwrite( /*0x671fb5*/
            v37,
            (unsigned __int8 *)aMultiplayerdia,
            (unsigned __int8 *)g_INI_Key_TechLevel,
            *((_DWORD *)this + 1319));
    v12 = this->q528; /*0x671fba*/
    *((_DWORD *)this + 1319) = v11; /*0x671fc0*/
    v13 = INIClass::ReadInt_Overwrite( /*0x671fd4*/
            v37,
            (unsigned __int8 *)aMultiplayerdia,
            (unsigned __int8 *)g_INI_Key_GameSpeed,
            v12);
    v14 = *((_DWORD *)this + 1321); /*0x671fd9*/
    this->q528 = v13; /*0x671fdf*/
    *((_DWORD *)this + 1321) = INIClass::ReadInt_Overwrite(v37, (unsigned __int8 *)aMultiplayerdia, aAidifficulty, v14); /*0x671ff9*/
    v15 = INIClass::ReadInt_Overwrite(v37, (unsigned __int8 *)aMultiplayerdia, aAiplayers, *((_DWORD *)this + 1322)); /*0x672014*/
    v16 = *((_BYTE *)this + 5292); /*0x672019*/
    *((_DWORD *)this + 1322) = v15; /*0x67201f*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)v37, (unsigned __int8 *)aMultiplayerdia, aBridgedestruct, v16); /*0x672033*/
    v18 = *((_BYTE *)this + 5293); /*0x672038*/
    *((_BYTE *)this + 5292) = Bool_Overwrite; /*0x67203e*/
    *((_BYTE *)this + 5293) = INIClass::ReadBool_Overwrite( /*0x672058*/
                                (int *)v37,
                                (unsigned __int8 *)aMultiplayerdia,
                                aShadowgrow,
                                v18);
    v19 = INIClass::ReadBool_Overwrite((int *)v37, (unsigned __int8 *)aMultiplayerdia, aShroud, *((_BYTE *)this + 5294)); /*0x672073*/
    v20 = *((_BYTE *)this + 5295); /*0x672078*/
    *((_BYTE *)this + 5294) = v19; /*0x67207e*/
    v21 = INIClass::ReadBool_Overwrite((int *)v37, (unsigned __int8 *)aMultiplayerdia, aBases, v20); /*0x672092*/
    v22 = this->q52C; /*0x672097*/
    *((_BYTE *)this + 5295) = v21; /*0x67209d*/
    this->q52C = INIClass::ReadBool_Overwrite( /*0x6720b7*/
                                (int *)v37,
                                (unsigned __int8 *)aMultiplayerdia,
                                (unsigned __int8 *)g_INI_Key_TiberiumGrows,
                                v22);
    v23 = INIClass::ReadBool_Overwrite((int *)v37, (unsigned __int8 *)aMultiplayerdia, aCrates, *((_BYTE *)this + 5297)); /*0x6720d2*/
    v24 = *((_BYTE *)this + 5298); /*0x6720d7*/
    *((_BYTE *)this + 5297) = v23; /*0x6720dd*/
    v25 = INIClass::ReadBool_Overwrite((int *)v37, (unsigned __int8 *)aMultiplayerdia, aCapturetheflag, v24); /*0x6720f1*/
    v26 = *((_BYTE *)this + 5299); /*0x6720f6*/
    *((_BYTE *)this + 5298) = v25; /*0x6720fc*/
    *((_BYTE *)this + 5299) = INIClass::ReadBool_Overwrite( /*0x672116*/
                                (int *)v37,
                                (unsigned __int8 *)aMultiplayerdia,
                                aHarvestertruce,
                                v26);
    v27 = INIClass::ReadBool_Overwrite( /*0x672131*/
            (int *)v37,
            (unsigned __int8 *)aMultiplayerdia,
            aMultiengineer,
            *((_BYTE *)this + 5300));
    v28 = *((_BYTE *)this + 5301); /*0x672136*/
    *((_BYTE *)this + 5300) = v27; /*0x67213c*/
    v29 = INIClass::ReadBool_Overwrite((int *)v37, (unsigned __int8 *)aMultiplayerdia, aAlliesallowed, v28); /*0x672150*/
    v30 = *((_BYTE *)this + 5307); /*0x672155*/
    *((_BYTE *)this + 5301) = v29; /*0x67215b*/
    *((_BYTE *)this + 5307) = INIClass::ReadBool_Overwrite( /*0x672175*/
                                (int *)v37,
                                (unsigned __int8 *)aMultiplayerdia,
                                aAllychangeallo,
                                v30);
    v31 = INIClass::ReadBool_Overwrite( /*0x672190*/
            (int *)v37,
            (unsigned __int8 *)aMultiplayerdia,
            (unsigned __int8 *)g_INI_Key_ShortGame,
            *((_BYTE *)this + 5302));
    v32 = *((_BYTE *)this + 5305); /*0x672195*/
    *((_BYTE *)this + 5302) = v31; /*0x67219b*/
    v33 = INIClass::ReadBool_Overwrite( /*0x6721af*/
            (int *)v37,
            (unsigned __int8 *)aMultiplayerdia,
            (unsigned __int8 *)g_INI_Key_SuperWeaponsAllowed,
            v32);
    v34 = *((_BYTE *)this + 5306); /*0x6721b4*/
    *((_BYTE *)this + 5305) = v33; /*0x6721ba*/
    *((_BYTE *)this + 5306) = INIClass::ReadBool_Overwrite( /*0x6721d4*/
                                (int *)v37,
                                (unsigned __int8 *)aMultiplayerdia,
                                (unsigned __int8 *)g_INI_Key_BuildOffAlly,
                                v34);
    v35 = INIClass::ReadBool_Overwrite( /*0x6721ef*/
            (int *)v37,
            (unsigned __int8 *)aMultiplayerdia,
            (unsigned __int8 *)g_INI_Key_FogOfWar,
            *((_BYTE *)this + 5303));
    v36 = *((_BYTE *)this + 5304); /*0x6721f4*/
    *((_BYTE *)this + 5303) = v35; /*0x6721fa*/
    result = INIClass::ReadBool_Overwrite((int *)v37, (unsigned __int8 *)aMultiplayerdia, aMcvredeploys, v36); /*0x67220e*/
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
int __thiscall ReadMaximumPlayersINI(ObjectClass *this)
{
  int result; // eax
  bool *v3; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v3, (unsigned __int8 *)aMaximums); /*0x672240*/
  if ( result ) /*0x67224c*/
  {
    result = INIClass::ReadInt_Overwrite(v3, (unsigned __int8 *)aMaximums, aPlayers, *((_DWORD *)this + 1332)); /*0x672263*/
    *((_DWORD *)this + 1332) = result; /*0x672268*/
  }
  LOBYTE(result) = 1; /*0x67226f*/
  return result; /*0x67226e*/
}



// ==== 0x00672280  RulesClass::readCrateRules  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readCrateRules(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (unsigned __int8 *)aInfantrytypes); /*0x672297*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67229d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, (unsigned __int8 *)aInfantrytypes, i); /*0x6722b5*/
    if ( INIClass::GetString( /*0x6722c3*/
           v6,
           (unsigned __int8 *)aInfantrytypes,
           StringByIndex,
           &g_INI_DefaultBuffer,
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
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (unsigned __int8 *)aCountries); /*0x672307*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67230d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, (unsigned __int8 *)aCountries, i); /*0x672325*/
    if ( INIClass::GetString(v6, (unsigned __int8 *)aCountries, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x672333*/
      WeaponTypeClass::Create(Destination); /*0x672340*/
  }
  return KeyCount > 0; /*0x67234c*/
}



// ==== 0x00672360  CCINIClass::LoadBuildingTypes  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::LoadBuildingTypes(CCINIClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (unsigned __int8 *)aVehicletypes); /*0x672377*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67237d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, (unsigned __int8 *)aVehicletypes, i); /*0x672395*/
    if ( INIClass::GetString(v6, (unsigned __int8 *)aVehicletypes, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x6723a3*/
      BuildingTypeClass::FindOrCreateAlt(Destination); /*0x6723b0*/
  }
  return KeyCount > 0; /*0x6723bc*/
}



// ==== 0x006723D0  RulesClass::readRadiation  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readRadiation(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (unsigned __int8 *)aAircrafttypes); /*0x6723e7*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6723ed*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, (unsigned __int8 *)aAircrafttypes, i); /*0x672405*/
    if ( INIClass::GetString( /*0x672413*/
           v6,
           (unsigned __int8 *)aAircrafttypes,
           StringByIndex,
           &g_INI_DefaultBuffer,
           Destination,
           32) )
    {
      KeywordClass::FindOrCreate(Destination); /*0x672420*/
    }
  }
  return KeyCount > 0; /*0x67242c*/
}



// ==== 0x00672440  RulesClass::ReadDataList  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadDataList(RulesClass *this)
{
  int KeyCount; // edi
  int v2; // esi
  HouseTypeClass *StringByIndex; // ebx
  int v4; // eax
  SideClass *v5; // eax
  _DWORD *v6; // ebp
  _DWORD *v7; // edi
  void *v8; // eax
  bool v9; // zf
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // edi
  _DWORD *v14; // edx
  IntVector v16; // [esp-1Ch] [ebp-50h] BYREF
  int v17; // [esp-14h] [ebp-48h]
  __int16 v18; // [esp-10h] [ebp-44h]
  char *v19; // [esp-Ch] [ebp-40h]
  char *v20; // [esp-8h] [ebp-3Ch]
  char *v21; // [esp-4h] [ebp-38h]
  int v22; // [esp+10h] [ebp-24h]
  int v23; // [esp+14h] [ebp-20h]
  void **v24; // [esp+18h] [ebp-1Ch] BYREF
  void *Block; // [esp+1Ch] [ebp-18h]
  int v26; // [esp+20h] [ebp-14h]
  char v27; // [esp+25h] [ebp-Fh]
  INIClass *v28; // [esp+38h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v28->__pad_0, (unsigned __int8 *)aSides); /*0x672456*/
  v21 = aProcessingSide; /*0x672458*/
  v23 = KeyCount; /*0x67245d*/
  Debug::Log(); /*0x672461*/
  v2 = 0; /*0x672469*/
  v22 = 0; /*0x67246d*/
  if ( KeyCount > 0 ) /*0x672471*/
  {
    while ( 1 ) /*0x67248e*/
    {
      StringByIndex = (HouseTypeClass *)INIClass::GetStringByIndex(v28->__pad_0, (unsigned __int8 *)aSides, v2); /*0x67248e*/
      v4 = HouseTypeClass::Find(StringByIndex); /*0x672492*/
      if ( v4 == -1 ) /*0x67249a*/
      {
        v5 = (SideClass *)__2_YAPAXI_Z(0xB4u); /*0x6724a1*/
        if ( v5 ) /*0x6724ab*/
          v6 = SideClass::Construct(v5, (char *)StringByIndex); /*0x6724b5*/
        else
          v6 = 0; /*0x6724b9*/
      }
      else
      {
        v6 = *(_DWORD **)(FootClass_Array.?[0] + 4 * v4); /*0x6724c3*/
      }
      v21 = (char *)(v6 + 9); /*0x6724c9*/
      v20 = (char *)v2; /*0x6724ca*/
      v19 = aSideDS; /*0x6724cb*/
      Debug::Log(); /*0x6724d0*/
      IntVector::Copy(&v16, v6 + 38); /*0x6724e3*/
      v7 = INIClass::ReadSuperWeaponTypeList( /*0x67250f*/
             v28,
             &v24,
             (unsigned __int8 *)aSides,
             (unsigned __int8 *)StringByIndex,
             &TypeList<int>::`vftable',
             (void *)v16.IntVector_field_0x04,
             v17,
             v18,
             v6[42],
             v6[43],
             (int)v21);
      TypeList::Copy((TypeList *)(v6 + 38), v7); /*0x672514*/
      v6[42] = v7[4]; /*0x67251e*/
      v6[43] = v7[5]; /*0x672524*/
      v8 = Block; /*0x672527*/
      v9 = Block == 0; /*0x67252e*/
      v6[44] = v7[6]; /*0x672530*/
      v24 = &VectorClass<int>::`vftable'; /*0x672533*/
      if ( !v9 && v27 ) /*0x672543*/
      {
        __3_YAXPAX_Z(v8); /*0x672546*/
        Block = 0; /*0x67254e*/
      }
      v10 = v6[42]; /*0x672552*/
      v11 = 0; /*0x672558*/
      v27 = 0; /*0x67255c*/
      v26 = 0; /*0x672561*/
      if ( v10 > 0 ) /*0x672565*/
      {
        do /*0x6725c2*/
        {
          v12 = 0; /*0x672573*/
          v13 = *(_DWORD *)(v6[39] + 4 * v11); /*0x672577*/
          if ( FootClass_Array.?[0] <= 0 ) /*0x67257a*/
          {
LABEL_17:
            v12 = -1; /*0x67258e*/
          }
          else
          {
            v14 = (_DWORD *)FootClass_Array.?[0]; /*0x67257c*/
            while ( (_DWORD *)*v14 != v6 ) /*0x672584*/
            {
              ++v12; /*0x672586*/
              ++v14; /*0x672587*/
              if ( v12 >= FootClass_Array.?[0] ) /*0x67258c*/
                goto LABEL_17; /*0x67258c*/
            }
          }
          *(_DWORD *)(*((_DWORD *)dword_A83C9C + v13) + 188) = v12; /*0x67259a*/
          v21 = (char *)(*((_DWORD *)dword_A83C9C + v13) + 36); /*0x6725ab*/
          v20 = aS_0; /*0x6725ac*/
          Debug::Log(); /*0x6725b1*/
          ++v11; /*0x6725bf*/
        }
        while ( v11 < v6[42] ); /*0x6725c2*/
      }
      if ( ++v22 >= v23 ) /*0x6725d3*/
        break; /*0x6725d3*/
      v2 = v22; /*0x672479*/
    }
    KeyCount = v23; /*0x6725d9*/
  }
  return KeyCount > 0; /*0x6725df*/
}



// ==== 0x006725F0  RulesClass::ReadSidesList  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadSidesList(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (unsigned __int8 *)aSuperweapontyp); /*0x672607*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67260d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, (unsigned __int8 *)aSuperweapontyp, i); /*0x672625*/
    if ( INIClass::GetString( /*0x672633*/
           v6,
           (unsigned __int8 *)aSuperweapontyp,
           StringByIndex,
           &g_INI_DefaultBuffer,
           Destination,
           32) )
    {
      WeaponTypeClass::Process(Destination); /*0x672640*/
    }
  }
  return KeyCount > 0; /*0x67264c*/
}



// ==== 0x00672660  RulesClass::LoadBuildingTypes  this=RulesClass  sig=csp ====
int __thiscall RulesClass::LoadBuildingTypes(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (unsigned __int8 *)aBuildingtypes); /*0x672677*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67267d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, (unsigned __int8 *)aBuildingtypes, i); /*0x672695*/
    if ( INIClass::GetString( /*0x6726a3*/
           v6,
           (unsigned __int8 *)aBuildingtypes,
           StringByIndex,
           &g_INI_DefaultBuffer,
           Destination,
           32) )
    {
      BuildingTypeClass::FindOrCreate(Destination); /*0x6726b0*/
    }
  }
  return KeyCount > 0; /*0x6726bc*/
}



// ==== 0x006726D0  CCINIClass::LoadTypeList  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::LoadTypeList(CCINIClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (unsigned __int8 *)aTerraintypes); /*0x6726e7*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6726ed*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, (unsigned __int8 *)aTerraintypes, i); /*0x672705*/
    if ( INIClass::GetString(v6, (unsigned __int8 *)aTerraintypes, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x672713*/
      TerrainTypeClass::FindOrCreate(Destination); /*0x672720*/
  }
  return KeyCount > 0; /*0x67272c*/
}



// ==== 0x00672740  RulesClass::ReadSideData  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadSideData(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // edi
  unsigned __int8 *StringByIndex; // eax
  _DWORD *v4; // eax
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF
  INIClass *v7; // [esp+90h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v7->__pad_0, (unsigned __int8 *)aTeams); /*0x67275d*/
  for ( i = 0; i < KeyCount; ++i ) /*0x672763*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v7->__pad_0, (unsigned __int8 *)aTeams, i); /*0x67276f*/
    if ( INIClass::GetString(v7, (unsigned __int8 *)aTeams, StringByIndex, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67278c*/
      v4 = TechnoClass::Create(Destination); /*0x672799*/
    else
      v4 = 0; /*0x6727a0*/
    (*(void (__thiscall **)(_DWORD *, INIClass *))(*v4 + 100))(v4, v7); /*0x6727a7*/
  }
  return KeyCount > 0; /*0x6727b1*/
}



// ==== 0x006727D0  FactoryClass::LoadType  this=FactoryClass  sig=csp ====
int __thiscall FactoryClass::LoadType(FactoryClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (unsigned __int8 *)aSmudgetypes); /*0x6727e7*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6727ed*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, (unsigned __int8 *)aSmudgetypes, i); /*0x672805*/
    if ( INIClass::GetString(v6, (unsigned __int8 *)aSmudgetypes, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x672813*/
      FactoryClass::FindOrCreate(Destination); /*0x672820*/
  }
  return KeyCount > 0; /*0x67282c*/
}



// ==== 0x00672840  ObjectClass::ReadBuildingTypesBuildingTypeClass  this=ObjectClass  sig=csp ====
int __thiscall ReadBuildingTypesBuildingTypeClass(ObjectClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (unsigned __int8 *)aOverlaytypes); /*0x672857*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67285d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, (unsigned __int8 *)aOverlaytypes, i); /*0x672875*/
    if ( INIClass::GetString(v6, (unsigned __int8 *)aOverlaytypes, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x672883*/
      BuildingTypeClass::FindOrCreate2(Destination); /*0x672890*/
  }
  return KeyCount > 0; /*0x67289c*/
}



// ==== 0x006728B0  RulesClass::LoadAnimTypes  this=RulesClass  sig=csp ====
int __thiscall RulesClass::LoadAnimTypes(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, g_INI_Key_Animations); /*0x6728c6*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6728cc*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, g_INI_Key_Animations, i); /*0x6728e2*/
    if ( INIClass::GetString(v6, g_INI_Key_Animations, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x6728ef*/
      AnimTypeClass::FindOrCreate(Destination); /*0x6728fc*/
  }
  return KeyCount > 0; /*0x672908*/
}



// ==== 0x00672920  CCINIClass::LoadUnitTypes  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::LoadUnitTypes(CCINIClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, g_INI_Key_VoxelAnims); /*0x672936*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67293c*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, g_INI_Key_VoxelAnims, i); /*0x672952*/
    if ( INIClass::GetString(v6, g_INI_Key_VoxelAnims, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x67295f*/
      UnitTypeClass::FindOrCreate(Destination); /*0x67296c*/
  }
  return KeyCount > 0; /*0x672978*/
}



// ==== 0x00672990  WarheadTypeClass::LoadType  this=WarheadTypeClass  sig=csp ====
int __thiscall WarheadTypeClass::LoadType(WarheadTypeClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, g_INI_Key_Warheads); /*0x6729a6*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6729ac*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, g_INI_Key_Warheads, i); /*0x6729c2*/
    if ( INIClass::GetString(v6, g_INI_Key_Warheads, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x6729cf*/
      WarheadTypeClass::FindOrCreate(Destination); /*0x6729dc*/
  }
  return KeyCount > 0; /*0x6729e8*/
}



// ==== 0x00672A00  RulesClass::readColors  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readColors(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, g_INI_Key_Particles); /*0x672a16*/
  for ( i = 0; i < KeyCount; ++i ) /*0x672a1c*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, g_INI_Key_Particles, i); /*0x672a32*/
    if ( INIClass::GetString(v6, g_INI_Key_Particles, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x672a3f*/
      NetworkEventClass::Process(Destination); /*0x672a4c*/
  }
  return KeyCount > 0; /*0x672a58*/
}



// ==== 0x00672A70  CCINIClass::ReadBuildingSettings  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::ReadBuildingSettings(CCINIClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, g_INI_Key_ParticleSystems); /*0x672a86*/
  for ( i = 0; i < KeyCount; ++i ) /*0x672a8c*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6->__pad_0, g_INI_Key_ParticleSystems, i); /*0x672aa2*/
    if ( INIClass::GetString(v6, g_INI_Key_ParticleSystems, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x672aaf*/
      BuildingTypeClass::LoadOrGet(Destination); /*0x672abc*/
  }
  return KeyCount > 0; /*0x672ac8*/
}



// ==== 0x00672AE0  RulesClass::ReadMultiplayerDefaults  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadMultiplayerDefaults(RulesClass *this)
{
  int result; // eax
  char *i; // eax
  int v4; // edx
  WeaponTypeClass *v5; // eax
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
  unsigned int v31; // ecx
  unsigned int v32; // edx
  int v33; // ecx
  int v35; // eax
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v43; // eax
  double v44; // rax
  int v45; // edx
  int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // edx
  int v50; // ecx
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v56; // eax
  d... [39345 chars total]



// ==== 0x00673E80  RulesClass::ReadPowerupsSection  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadPowerupsSection(RulesClass *this)
{
  int result; // eax
  int v2; // edi
  double *v3; // ebp
  char *v4; // eax
  const char *v5; // esi
  char *v6; // eax
  GlobalArray *v7; // esi
  char *v8; // eax
  char *v9; // esi
  char *v10; // esi
  char String[128]; // [esp+0h] [ebp-80h] BYREF
  unsigned __int8 ***v13; // [esp+84h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v13, (unsigned __int8 *)aPowerups); /*0x673e90*/
  if ( result ) /*0x673e9c*/
  {
    v2 = 0; /*0x673ea5*/
    v3 = dbl_89EC28; /*0x673ea7*/
    do /*0x673fd7*/
    {
      result = INIClass::GetString( /*0x673ed0*/
                 (INIClass *)v13,
                 (unsigned __int8 *)aPowerups,
                 (&off_7E523C)[v2],
                 a0None,
                 String,
                 128);
      if ( result ) /*0x673ed7*/
      {
        v4 = strtok(String, Str); /*0x673ee7*/
        v5 = v4; /*0x673eec*/
        if ( v4 ) /*0x673ef3*/
        {
          String::Trim(v4); /*0x673ef7*/
          dword_81DA8C[v2] = atoi(v5); /*0x673f05*/
        }
        v6 = strtok(0, Str); /*0x673f13*/
        v7 = (GlobalArray *)v6; /*0x673f18*/
        if ( v6 ) /*0x673f1f*/
        {
          String::Trim(v6); /*0x673f23*/
          dword_81DAD8[v2] = GlobalArray::FindString(v7); /*0x673f2f*/
        }
        v8 = strtok(0, Str); /*0x673f3d*/
        v9 = v8; /*0x673f42*/
        if ( v8 ) /*0x673f49*/
        {
          String::Trim(v8); /*0x673f4d*/
          if ( _strcmpi(v9, off_825BF8) ) /*0x673f58*/
          {
            if ( !_strcmpi(v9, g_Str_no) ) /*0x673f73*/
              byte_89ECC0[v2] = 0; /*0x673f7f*/
          }
          else
          {
            byte_89ECC0[v2] = 1; /*0x673f64*/
          }
        }
        result = (int)strtok(0, Str); /*0x673f8c*/
        v10 = (char *)result; /*0x673f91*/
        if ( result ) /*0x673f98*/
        {
          if ( strchr((const char *)result, 37) ) /*0x673f9d*/
          {
            result = atof(v10); /*0x673faa*/
            __asm { fmul ds:dbl_7E3808 } /*0x673faf*/
          }
          else
          {
            String::Trim(v10); /*0x673fbc*/
            result = atof(v10); /*0x673fc2*/
          }
          __asm { fstp qword ptr [ebp+0] } /*0x673fca*/
          *v3 = _RT1; /*0x673fca*/
        }
      }
      ++v3; /*0x673fcd*/
      ++v2; /*0x673fd0*/
    }
    while ( (int)v3 < (int)byte_89ECC0 ); /*0x673fd7*/
    LOBYTE(result) = 1; /*0x673fdf*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x673feb*/
  }
  return result; /*0x673fe2*/
}



// ==== 0x00674000  RulesClass::LoadSpeedTypes  this=RulesClass  sig=csp ====
int __thiscall RulesClass::LoadSpeedTypes(RulesClass *this)
{
  unsigned __int8 **v1; // esi
  float *v2; // ebx
  int result; // eax
  unsigned __int8 *v5; // edx
  unsigned __int8 *v8; // ecx
  unsigned __int8 *v11; // eax
  unsigned __int8 *v14; // edx
  unsigned __int8 *v17; // ecx
  unsigned __int8 *v20; // eax
  unsigned __int8 *v23; // edx
  double *v25; // [esp+10h] [ebp+4h]

  v1 = (unsigned __int8 **)off_839D68; /*0x674007*/
  v2 = (float *)&unk_89EA44; /*0x67400c*/
  do /*0x67422a*/
  {
    result = INIClass::BinarySearchSection((int)v25, *v1); /*0x674016*/
    if ( result ) /*0x674022*/
    {
      INIClass::ReadDouble_Overwrite(v25, *v1, g_INI_Key_Hover, 1.0); /*0x674039*/
      __asm /*0x67403e*/
      {
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x674049*/
        INIClass::ReadDouble_Overwrite(v25, *v1, g_INI_Key_Hover, 1.0); /*0x67405c*/
      else
        __asm { fld ds:dbl_7E1718 } /*0x674063*/
      v5 = *v1; /*0x674069*/
      __asm { fstp dword ptr [ebx+8] } /*0x674070*/
      v2[2] = _ET1; /*0x674070*/
      INIClass::ReadDouble_Overwrite(v25, v5, g_INI_Key_Foot, 1.0); /*0x67407d*/
      __asm /*0x674082*/
      {
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x67408d*/
        INIClass::ReadDouble_Overwrite(v25, *v1, g_INI_Key_Foot, 1.0); /*0x6740a0*/
      else
        __asm { fld ds:dbl_7E1718 } /*0x6740a7*/
      v8 = *v1; /*0x6740ad*/
      __asm { fstp dword ptr [ebx-4] } /*0x6740b4*/
      *(v2 - 1) = _ET1; /*0x6740b4*/
      INIClass::ReadDouble_Overwrite(v25, v8, g_INI_Key_Track, 1.0); /*0x6740c1*/
      __asm /*0x6740c6*/
      {
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x6740d1*/
        INIClass::ReadDouble_Overwrite(v25, *v1, g_INI_Key_Track, 1.0); /*0x6740e4*/
      else
        __asm { fld ds:dbl_7E1718 } /*0x6740eb*/
      v11 = *v1; /*0x6740f1*/
      __asm { fstp dword ptr [ebx] } /*0x6740f8*/
      *v2 = _ET1; /*0x6740f8*/
      INIClass::ReadDouble_Overwrite(v25, v11, g_INI_Key_Wheel, 1.0); /*0x674104*/
      __asm /*0x674109*/
      {
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x674114*/
        INIClass::ReadDouble_Overwrite(v25, *v1, g_INI_Key_Wheel, 1.0); /*0x674127*/
      else
        __asm { fld ds:dbl_7E1718 } /*0x67412e*/
      v14 = *v1; /*0x674134*/
      __asm { fstp dword ptr [ebx+4] } /*0x67413b*/
      v2[1] = _ET1; /*0x67413b*/
      v2[3] = 1.0; /*0x674148*/
      INIClass::ReadDouble_Overwrite(v25, v14, g_INI_Key_Float, 1.0); /*0x67414f*/
      __asm /*0x674154*/
      {
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x67415f*/
        INIClass::ReadDouble_Overwrite(v25, *v1, g_INI_Key_Float, 1.0); /*0x674172*/
      else
        __asm { fld ds:dbl_7E1718 } /*0x674179*/
      v17 = *v1; /*0x67417f*/
      __asm { fstp dword ptr [ebx+10h] } /*0x674186*/
      v2[4] = _ET1; /*0x674186*/
      INIClass::ReadDouble_Overwrite(v25, v17, g_INI_Key_Amphibious, 1.0); /*0x674193*/
      __asm /*0x674198*/
      {
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x6741a3*/
        INIClass::ReadDouble_Overwrite(v25, *v1, g_INI_Key_Amphibious, 1.0); /*0x6741b6*/
      else
        __asm { fld ds:dbl_7E1718 } /*0x6741bd*/
      v20 = *v1; /*0x6741c3*/
      __asm { fstp dword ptr [ebx+14h] } /*0x6741ca*/
      v2[5] = _ET1; /*0x6741ca*/
      INIClass::ReadDouble_Overwrite(v25, v20, g_INI_Key_FloatBeach, 1.0); /*0x6741d7*/
      __asm /*0x6741dc*/
      {
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x6741e7*/
        INIClass::ReadDouble_Overwrite(v25, *v1, g_INI_Key_FloatBeach, 1.0); /*0x6741fa*/
      else
        __asm { fld ds:dbl_7E1718 } /*0x674201*/
      v23 = *v1; /*0x674207*/
      __asm { fstp dword ptr [ebx+18h] } /*0x67420b*/
      v2[6] = _ET1; /*0x67420b*/
      result = INIClass::ReadBool_Overwrite((int *)v25, v23, aBuildable, 0); /*0x674216*/
      *((_BYTE *)v2 + 28) = result; /*0x67421b*/
    }
    v2 += 9; /*0x67421e*/
    ++v1; /*0x674221*/
  }
  while ( (int)v2 < (int)((float *)&dbl_89EBF0 + 1) ); /*0x67422a*/
  LOBYTE(result) = 1; /*0x674232*/
  return result; /*0x674230*/
}



// ==== 0x00674240  RulesClass::ReadIQSection  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadIQSection(RulesClass *this)
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
  bool *v15; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v15, (unsigned __int8 *)g_INI_Key_IQ); /*0x674250*/
  if ( result ) /*0x67425c*/
  {
    *(_DWORD *)&this->__pad_C3C[2040] = INIClass::ReadInt_Overwrite( /*0x67427c*/
                                          v15,
                                          (unsigned __int8 *)g_INI_Key_IQ,
                                          aMaxiqlevels,
                                          *(_DWORD *)&this->__pad_C3C[2040]);
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x674297*/
                      v15,
                      (unsigned __int8 *)g_INI_Key_IQ,
                      aSuperweapons,
                      *(_DWORD *)&this->__pad_C3C[2044]);
    v4 = *(_DWORD *)&this->__pad_C3C[2048]; /*0x67429c*/
    *(_DWORD *)&this->__pad_C3C[2044] = Int_Overwrite; /*0x6742a2*/
    v5 = INIClass::ReadInt_Overwrite(v15, (unsigned __int8 *)g_INI_Key_IQ, aProduction, v4); /*0x6742b6*/
    v6 = *(_DWORD *)&this->__pad_C3C[2052]; /*0x6742bb*/
    *(_DWORD *)&this->__pad_C3C[2048] = v5; /*0x6742c1*/
    *(_DWORD *)&this->__pad_C3C[2052] = INIClass::ReadInt_Overwrite( /*0x6742db*/
                                          v15,
                                          (unsigned __int8 *)g_INI_Key_IQ,
                                          aGuardarea,
                                          v6);
    v7 = INIClass::ReadInt_Overwrite( /*0x6742f6*/
           v15,
           (unsigned __int8 *)g_INI_Key_IQ,
           aRepairsell,
           *(_DWORD *)&this->__pad_C3C[2056]);
    v8 = *(_DWORD *)&this->__pad_C3C[2060]; /*0x6742fb*/
    *(_DWORD *)&this->__pad_C3C[2056] = v7; /*0x674301*/
    v9 = INIClass::ReadInt_Overwrite(v15, (unsigned __int8 *)g_INI_Key_IQ, aAutocrush, v8); /*0x674315*/
    v10 = *(_DWORD *)&this->__pad_C3C[2064]; /*0x67431a*/
    *(_DWORD *)&this->__pad_C3C[2060] = v9; /*0x674320*/
    *(_DWORD *)&this->__pad_C3C[2064] = INIClass::ReadInt_Overwrite( /*0x67433a*/
                                          v15,
                                          (unsigned __int8 *)g_INI_Key_IQ,
                                          (unsigned __int8 *)&stru_82BA00.?[28],
                                          v10);
    v11 = INIClass::ReadInt_Overwrite( /*0x674355*/
            v15,
            (unsigned __int8 *)g_INI_Key_IQ,
            aContentscan,
            *(_DWORD *)&this->__pad_C3C[2068]);
    v12 = *(_DWORD *)&this->__pad_C3C[2072]; /*0x67435a*/
    *(_DWORD *)&this->__pad_C3C[2068] = v11; /*0x674360*/
    v13 = INIClass::ReadInt_Overwrite(v15, (unsigned __int8 *)g_INI_Key_IQ, aAircraft, v12); /*0x674374*/
    v14 = *(_DWORD *)&this->__pad_C3C[2076]; /*0x674379*/
    *(_DWORD *)&this->__pad_C3C[2072] = v13; /*0x67437f*/
    *(_DWORD *)&this->__pad_C3C[2076] = INIClass::ReadInt_Overwrite( /*0x674399*/
                                          v15,
                                          (unsigned __int8 *)g_INI_Key_IQ,
                                          aHarvester,
                                          v14);
    result = INIClass::ReadInt_Overwrite( /*0x6743b4*/
               v15,
               (unsigned __int8 *)g_INI_Key_IQ,
               aSellback,
               *(_DWORD *)&this->__pad_C3C[2080]);
    *(_DWORD *)&this->__pad_C3C[2080] = result; /*0x6743b9*/
    LOBYTE(result) = 1; /*0x6743c0*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6743c7*/
  }
  return result; /*0x6743bf*/
}



// ==== 0x006743D0  RulesClass::readDifficulty  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readDifficulty(RulesClass *this)
{
  int result; // eax
  int Int_Overwrite; // eax
  int v4; // edx
  int v5; // edx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  int v13; // ecx
  double v15; // [esp-8h] [ebp-10h]
  bool *v16; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v16, (unsigned __int8 *)aJumpjetcontrol); /*0x6743e0*/
  if ( result ) /*0x6743ec*/
  {
    *(_DWORD *)&this->__pad_240[460] = INIClass::ReadInt_Overwrite( /*0x67440c*/
                                         v16,
                                         (unsigned __int8 *)aJumpjetcontrol,
                                         aTurnrate,
                                         *(_DWORD *)&this->__pad_240[460]);
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x674427*/
                      v16,
                      (unsigned __int8 *)aJumpjetcontrol,
                      g_INI_Key_Speed,
                      *(_DWORD *)&this->__pad_240[464]);
    v4 = *(_DWORD *)&this->__pad_240[476]; /*0x67442c*/
    *(_DWORD *)&this->__pad_240[464] = Int_Overwrite; /*0x674432*/
    HIDWORD(v15) = v4; /*0x674444*/
    LODWORD(v15) = *(_DWORD *)&this->__pad_240[472]; /*0x674445*/
    INIClass::ReadDouble_Overwrite((double *)v16, (unsigned __int8 *)aJumpjetcontrol, aClimb, v15); /*0x67444e*/
    v5 = *(_DWORD *)&this->__pad_240[480]; /*0x674453*/
    __asm { fstp qword ptr [esi+418h] } /*0x67445b*/
    *(double *)&this->__pad_240[472] = _RT1; /*0x67445b*/
    v7 = INIClass::ReadInt_Overwrite(v16, (unsigned __int8 *)aJumpjetcontrol, aCruiseheight, v5); /*0x67446d*/
    v8 = *(_DWORD *)&this->__pad_240[492]; /*0x674472*/
    v9 = *(_DWORD *)&this->__pad_240[488]; /*0x674478*/
    *(_DWORD *)&this->__pad_240[480] = v7; /*0x67447e*/
    INIClass::ReadDouble_Overwrite( /*0x674493*/
      (double *)v16,
      (unsigned __int8 *)aJumpjetcontrol,
      (unsigned __int8 *)&stru_81AF8C.?[103],
      COERCE_DOUBLE(__PAIR64__(v8, v9)));
    v10 = *(_DWORD *)&this->__pad_240[500]; /*0x674498*/
    v11 = *(_DWORD *)&this->__pad_240[496]; /*0x67449e*/
    __asm { fstp qword ptr [esi+428h] } /*0x6744a4*/
    *(double *)&this->__pad_240[488] = _RT1; /*0x6744a4*/
    INIClass::ReadDouble_Overwrite( /*0x6744b9*/
      (double *)v16,
      (unsigned __int8 *)aJumpjetcontrol,
      aWobblesperseco,
      COERCE_DOUBLE(__PAIR64__(v10, v11)));
    v13 = *(_DWORD *)&this->__pad_240[504]; /*0x6744be*/
    __asm { fstp qword ptr [esi+430h] } /*0x6744c4*/
    *(double *)&this->__pad_240[496] = _RT1; /*0x6744c4*/
    result = INIClass::ReadInt_Overwrite(v16, (unsigned __int8 *)aJumpjetcontrol, aWobbledeviatio, v13); /*0x6744d9*/
    *(_DWORD *)&this->__pad_240[504] = result; /*0x6744de*/
    LOBYTE(result) = 1; /*0x6744e5*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6744ec*/
  }
  return result; /*0x6744e4*/
}



// ==== 0x00674500  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_674500(ObjectClass *this)
{
  int result; // eax
  RulesClass *v2; // [esp+Ch] [ebp+4h]

  INIClass::ReadDifficultyModifiers((INIClass *)v2); /*0x674515*/
  INIClass::ReadDifficultyModifiers((INIClass *)v2); /*0x674527*/
  result = INIClass::ReadDifficultyModifiers((INIClass *)v2); /*0x674539*/
  LOBYTE(result) = 1; /*0x67453f*/
  return result; /*0x67453e*/
}



// ==== 0x00674550  RulesClass::ReadMovies  this=RulesClass  sig=csp ====
int __thiscall RulesClass::ReadMovies(RulesClass *this)
{
  int result; // eax
  int v2; // ebp
  int i; // ebx
  unsigned __int8 *StringByIndex; // eax
  char *v5; // esi
  char Source[32]; // [esp+4h] [ebp-20h] BYREF
  INIClass *v7; // [esp+28h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v7, (unsigned __int8 *)aMovies); /*0x674560*/
  if ( result ) /*0x67456c*/
  {
    result = INIClass::GetKeyCount(v7->__pad_0, (unsigned __int8 *)aMovies); /*0x67457d*/
    v2 = result; /*0x674582*/
    for ( i = 0; i < v2; ++i ) /*0x674588*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v7->__pad_0, (unsigned __int8 *)aMovies, i); /*0x6745a4*/
      result = INIClass::GetString(v7, (unsigned __int8 *)aMovies, StringByIndex, g_Str__none_, Source, 32); /*0x6745b3*/
      if ( result ) /*0x6745ba*/
      {
        result = LookupNameIndex((ObjectClass *)Source); /*0x6745c0*/
        if ( result == -1 ) /*0x6745c8*/
        {
          v5 = _strdup(Source); /*0x6745da*/
          result = g_MissionQueueFrame.localVariables[581]; /*0x6745dc*/
          if ( g_MissionQueueFrame.localVariables[583] < g_MissionQueueFrame.localVariables[581] /*0x674614*/
            || (BYTE1(g_MissionQueueFrame.localVariables[582]) || !g_MissionQueueFrame.localVariables[581])
            && g_MissionQueueFrame.localVariables[584] > 0
            && (result = (*(int (__thiscall **)(int *, int, _DWORD))(g_MissionQueueFrame.localVariables[579] + 8))(
                           &g_MissionQueueFrame.localVariables[579],
                           g_MissionQueueFrame.localVariables[581] + g_MissionQueueFrame.localVariables[584],
                           0),
                (_BYTE)result) )
          {
            result = g_MissionQueueFrame.localVariables[583]++; /*0x67461c*/
            *(_DWORD *)(g_MissionQueueFrame.localVariables[580] + 4 * result) = v5; /*0x67462b*/
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



// ==== 0x00674650  SidebarClass::ReadButtonList  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::ReadButtonList(SidebarClass *this)
{
  char *v1; // edi
  int result; // eax
  int i; // esi
  int v4; // edi
  int v5; // esi
  char *j; // eax
  int EntryIndexByName; // eax
  char String[512]; // [esp+8h] [ebp-200h] BYREF
  unsigned __int8 ***v9; // [esp+20Ch] [ebp+4h]
  char v10; // [esp+210h] [ebp+8h]

  v1 = aMultiplayeradv; /*0x67465e*/
  if ( !v10 ) /*0x674664*/
    v1 = aAdvancedcomman; /*0x674666*/
  result = INIClass::BinarySearchSection((int)v9, (unsigned __int8 *)v1); /*0x674676*/
  if ( result ) /*0x674682*/
  {
    for ( i = 0; i < 25; ++i ) /*0x674689*/
      globalHelper_0CFD20(i, dword_8427CC); /*0x674693*/
    result = INIClass::GetString( /*0x6746b9*/
               (INIClass *)v9,
               (unsigned __int8 *)v1,
               (unsigned __int8 *)aButtonlist,
               &g_INI_DefaultBuffer,
               String,
               512);
    if ( result ) /*0x6746c0*/
    {
      v4 = 0; /*0x6746cc*/
      v5 = 0; /*0x6746ce*/
      for ( j = strtok(String, Str); j; j = strtok(0, Str) ) /*0x6746da*/
      {
        EntryIndexByName = SidebarClass::findEntryIndexByName(j); /*0x6746de*/
        if ( EntryIndexByName != dword_8427CC ) /*0x6746e9*/
          globalHelper_0CFD20(EntryIndexByName, v5); /*0x6746ef*/
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
int __thiscall RulesClass::SaveLoad_Prefix(RulesClass *this, int *a2)
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
  RulesClass *v60; // edi
  int v61; // ebx
  int result; // eax

  v2 = a2; /*0x674732*/
  (*(void (__stdcall **)(int *, RulesClass *, int, _DWORD))(*a2 + 16))(a2, this, 6336, 0); /*0x674744*/
  v4 = *v2; /*0x67474d*/
  a2 = *(int **)&this->__pad_C3C[1384]; /*0x674759*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v4 + 16))(v2, &a2, 4, 0); /*0x67475d*/
  for ( i = 0; i < (int)a2; ++i ) /*0x674768*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1372] + 4 * i, 4, 0); /*0x67477b*/
  v6 = *v2; /*0x67478d*/
  a2 = *(int **)&this->__pad_C3C[1412]; /*0x674799*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v6 + 16))(v2, &a2, 4, 0); /*0x67479d*/
  for ( j = 0; j < (int)a2; ++j ) /*0x6747a8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1400] + 4 * j, 4, 0); /*0x6747bb*/
  v8 = *v2; /*0x6747cd*/
  a2 = *(int **)&this->__pad_C3C[1440]; /*0x6747d9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v8 + 16))(v2, &a2, 4, 0); /*0x6747dd*/
  for ( k = 0; k < (int)a2; ++k ) /*0x6747e8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1428] + 4 * k, 4, 0); /*0x6747fb*/
  v10 = *v2; /*0x67480d*/
  a2 = *(int **)&this->__pad_C3C[1468]; /*0x674819*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v10 + 16))(v2, &a2, 4, 0); /*0x67481d*/
  for ( m = 0; m < (int)a2; ++m ) /*0x674828*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1456] + 4 * m, 4, 0); /*0x67483b*/
  v12 = *v2; /*0x67484d*/
  a2 = *(int **)&this->__pad_C3C[1496]; /*0x674859*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v12 + 16))(v2, &a2, 4, 0); /*0x67485d*/
  for ( n = 0; n < (int)a2; ++n ) /*0x674868*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1484] + 4 * n, 4, 0); /*0x67487b*/
  v14 = *v2; /*0x67488d*/
  a2 = *(int **)&this->__pad_C3C[1524]; /*0x674899*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v14 + 16))(v2, &a2, 4, 0); /*0x67489d*/
  for ( ii = 0; ii < (int)a2; ++ii ) /*0x6748a8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1512] + 4 * ii, 4, 0); /*0x6748bb*/
  v16 = *v2; /*0x6748cd*/
  a2 = *(int **)&this->__pad_C3C[1552]; /*0x6748d9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v16 + 16))(v2, &a2, 4, 0); /*0x6748dd*/
  for ( jj = 0; jj < (int)a2; ++jj ) /*0x6748e8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1540] + 4 * jj, 4, 0); /*0x6748fb*/
  v18 = *v2; /*0x67490d*/
  a2 = *(int **)&this->__pad_C3C[1580]; /*0x674919*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v18 + 16))(v2, &a2, 4, 0); /*0x67491d*/
  for ( kk = 0; kk < (int)a2; ++kk ) /*0x674928*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1568] + 4 * kk, 4, 0); /*0x67493b*/
  v20 = *v2; /*0x67494d*/
  a2 = *(int **)&this->__pad_C3C[1608]; /*0x674959*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v20 + 16))(v2, &a2, 4, 0); /*0x67495d*/
  for ( mm = 0; mm < (int)a2; ++mm ) /*0x674968*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1596] + 4 * mm, 4, 0); /*0x67497b*/
  v22 = *v2; /*0x67498d*/
  a2 = *(int **)&this->__pad_C3C[1636]; /*0x674999*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v22 + 16))(v2, &a2, 4, 0); /*0x67499d*/
  for ( nn = 0; nn < (int)a2; ++nn ) /*0x6749a8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1624] + 4 * nn, 4, 0); /*0x6749bb*/
  v24 = *v2; /*0x6749cd*/
  a2 = *(int **)&this->__pad_C3C[1664]; /*0x6749d9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v24 + 16))(v2, &a2, 4, 0); /*0x6749dd*/
  for ( i1 = 0; i1 < (int)a2; ++i1 ) /*0x6749e8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1652] + 4 * i1, 4, 0); /*0x6749fb*/
  v26 = *v2; /*0x674a0d*/
  a2 = *(int **)&this->__pad_C3C[1692]; /*0x674a19*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v26 + 16))(v2, &a2, 4, 0); /*0x674a1d*/
  for ( i2 = 0; i2 < (int)a2; ++i2 ) /*0x674a28*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1680] + 4 * i2, 4, 0); /*0x674a3b*/
  v28 = *v2; /*0x674a4d*/
  a2 = *(int **)&this->__pad_C3C[1720]; /*0x674a59*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v28 + 16))(v2, &a2, 4, 0); /*0x674a5d*/
  for ( i3 = 0; i3 < (int)a2; ++i3 ) /*0x674a68*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1708] + 4 * i3, 4, 0); /*0x674a7b*/
  v30 = *v2; /*0x674a8d*/
  a2 = *(int **)&this->__pad_C3C[1988]; /*0x674a99*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v30 + 16))(v2, &a2, 4, 0); /*0x674a9d*/
  for ( i4 = 0; i4 < (int)a2; ++i4 ) /*0x674aa8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1976] + 4 * i4, 4, 0); /*0x674abb*/
  v32 = *v2; /*0x674acd*/
  a2 = *(int **)&this->__pad_C3C[1324]; /*0x674ad9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v32 + 16))(v2, &a2, 4, 0); /*0x674add*/
  for ( i5 = 0; i5 < (int)a2; ++i5 ) /*0x674ae8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1312] + 4 * i5, 4, 0); /*0x674afb*/
  v34 = *v2; /*0x674b0d*/
  a2 = (int *)this->PowerEmergency[0]; /*0x674b19*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v34 + 16))(v2, &a2, 4, 0); /*0x674b1d*/
  for ( i6 = 0; i6 < (int)a2; ++i6 ) /*0x674b28*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, this->AttackInterval[1] + 4 * i6, 4, 0); /*0x674b3b*/
  v36 = *v2; /*0x674b4d*/
  a2 = *(int **)&this->__pad_C3C[340]; /*0x674b59*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v36 + 16))(v2, &a2, 4, 0); /*0x674b5d*/
  for ( i7 = 0; i7 < (int)a2; ++i7 ) /*0x674b68*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[328] + 4 * i7, 4, 0); /*0x674b7b*/
  v38 = *v2; /*0x674b8d*/
  a2 = *(int **)&this->__pad_C3C[368]; /*0x674b99*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v38 + 16))(v2, &a2, 4, 0); /*0x674b9d*/
  for ( i8 = 0; i8 < (int)a2; ++i8 ) /*0x674ba8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[356] + 4 * i8, 4, 0); /*0x674bbb*/
  v40 = *v2; /*0x674bcd*/
  a2 = *(int **)&this->__pad_C3C[396]; /*0x674bd9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v40 + 16))(v2, &a2, 4, 0); /*0x674bdd*/
  for ( i9 = 0; i9 < (int)a2; ++i9 ) /*0x674be8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[384] + 4 * i9, 4, 0); /*0x674bfb*/
  v42 = *v2; /*0x674c0d*/
  a2 = *(int **)&this->__pad_C3C[700]; /*0x674c19*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v42 + 16))(v2, &a2, 4, 0); /*0x674c1d*/
  for ( i10 = 0; i10 < (int)a2; ++i10 ) /*0x674c28*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[688] + 4 * i10, 4, 0); /*0x674c3b*/
  v44 = *v2; /*0x674c4d*/
  a2 = *(int **)&this->__pad_C3C[728]; /*0x674c59*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v44 + 16))(v2, &a2, 4, 0); /*0x674c5d*/
  for ( i11 = 0; i11 < (int)a2; ++i11 ) /*0x674c68*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[716] + 4 * i11, 4, 0); /*0x674c7b*/
  v46 = *v2; /*0x674c8d*/
  a2 = *(int **)&this->__pad_C3C[756]; /*0x674c99*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v46 + 16))(v2, &a2, 4, 0); /*0x674c9d*/
  for ( i12 = 0; i12 < (int)a2; ++i12 ) /*0x674ca8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[744] + 4 * i12, 4, 0); /*0x674cbb*/
  v48 = *v2; /*0x674ccd*/
  a2 = *(int **)&this->__pad_C3C[484]; /*0x674cd9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v48 + 16))(v2, &a2, 4, 0); /*0x674cdd*/
  for ( i13 = 0; i13 < (int)a2; ++i13 ) /*0x674ce8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[472] + 4 * i13, 4, 0); /*0x674cfb*/
  v50 = *v2; /*0x674d0d*/
  a2 = *(int **)&this->__pad_C3C[664]; /*0x674d19*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v50 + 16))(v2, &a2, 4, 0); /*0x674d1d*/
  for ( i14 = 0; i14 < (int)a2; ++i14 ) /*0x674d28*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[652] + 4 * i14, 4, 0); /*0x674d3b*/
  v52 = *v2; /*0x674d4d*/
  a2 = *(int **)&this->__pad_C3C[512]; /*0x674d59*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v52 + 16))(v2, &a2, 4, 0); /*0x674d5d*/
  for ( i15 = 0; i15 < (int)a2; ++i15 ) /*0x674d68*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[500] + 4 * i15, 4, 0); /*0x674d7b*/
  v54 = *v2; /*0x674d8d*/
  a2 = *(int **)&this->__pad_C3C[424]; /*0x674d99*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v54 + 16))(v2, &a2, 4, 0); /*0x674d9d*/
  for ( i16 = 0; i16 < (int)a2; ++i16 ) /*0x674da8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[412] + 4 * i16, 4, 0); /*0x674dbb*/
  v56 = *v2; /*0x674dcd*/
  a2 = *(int **)&this->__pad_C3C[1892]; /*0x674dd9*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v56 + 16))(v2, &a2, 4, 0); /*0x674ddd*/
  for ( i17 = 0; i17 < (int)a2; ++i17 ) /*0x674de8*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1880] + 4 * i17, 4, 0); /*0x674dfb*/
  v58 = *v2; /*0x674e0d*/
  a2 = *(int **)&this->__pad_C3C[1920]; /*0x674e19*/
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(v58 + 16))(v2, &a2, 4, 0); /*0x674e1d*/
  for ( i18 = 0; i18 < (int)a2; ++i18 ) /*0x674e28*/
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*v2 + 16))(v2, *(_DWORD *)&this->__pad_C3C[1908] + 4 * i18, 4, 0); /*0x674e3b*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[528], v2); /*0x674e4e*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[556], v2); /*0x674e5a*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[584], v2); /*0x674e66*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[612], v2); /*0x674e72*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[1736], v2); /*0x674e7e*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[1764], v2); /*0x674e8a*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[1792], v2); /*0x674e96*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[1820], v2); /*0x674ea2*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[1848], v2); /*0x674eae*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[1932], v2); /*0x674eba*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[1336], v2); /*0x674ec6*/
  DynamicVector::Read((DynamicVector *)&this->__pad_240[508], v2); /*0x674ed2*/
  DynamicVector::Read((DynamicVector *)&this->__pad_240[536], v2); /*0x674ede*/
  DynamicVector::Read((DynamicVector *)&this->__pad_240[564], v2); /*0x674eea*/
  RulesClass::readTerrainTypes((RulesClass *)&this->RadarEventColorSpeed, v2); /*0x674ef3*/
  RulesClass::readTerrainTypes((RulesClass *)&this->CloakingStages, v2); /*0x674eff*/
  DynamicVector::Read((DynamicVector *)&this->__pad_240[280], v2); /*0x674f0b*/
  DynamicVector::Read((DynamicVector *)&this->__pad_240[308], v2); /*0x674f17*/
  DynamicVector::Read((DynamicVector *)&this->__pad_240[336], v2); /*0x674f23*/
  DynamicVector::Read((DynamicVector *)&this->__pad_240[364], v2); /*0x674f2f*/
  DynamicVector::Read((DynamicVector *)&this->__pad_240[392], v2); /*0x674f3b*/
  DynamicVector::Read((DynamicVector *)&this->__pad_240[420], v2); /*0x674f47*/
  DynamicVector::Read((DynamicVector *)&this->HealCrateSound, v2); /*0x674f53*/
  DynamicVector::Read((DynamicVector *)&this->__pad_704[48], v2); /*0x674f5f*/
  VectorClass::LoadStream((VectorClass *)&this->NodBaseDefenseCoefficient[1], v2); /*0x674f6b*/
  VectorClass::LoadStream((VectorClass *)this->PadAircraft, v2); /*0x674f77*/
  VectorClass::LoadStream((VectorClass *)&this->Parachute, v2); /*0x674f83*/
  VectorClass::LoadStream((VectorClass *)&this->ChronoReinfDelay, v2); /*0x674f8f*/
  VectorClass::LoadStream((VectorClass *)&this->ThirdDisguise, v2); /*0x674f9b*/
  DynamicVector::Read_Alt((DynamicVector *)&this->ChronoHarvTooFarDistance, v2); /*0x674fa7*/
  DynamicVector::Read_Alt((DynamicVector *)&this->MutateWarhead, v2); /*0x674fb3*/
  DynamicVector::Read_Alt((DynamicVector *)&this->IonCannonWarhead, v2); /*0x674fbf*/
  DynamicVector::Read_Alt((DynamicVector *)&this->CHRONOSK_SHP, v2); /*0x674fcb*/
  DynamicVector::Read_Alt((DynamicVector *)&this->V3Rocket[4], v2); /*0x674fd7*/
  DynamicVector::Read_Alt((DynamicVector *)&this->V3Rocket[11], v2); /*0x674fe3*/
  DynamicVector::Read_Alt((DynamicVector *)&this->DMisl[5], v2); /*0x674fef*/
  DynamicVector::Read_Alt((DynamicVector *)&this->DMisl[12], v2); /*0x674ffb*/
  DynamicVector::Read_Alt((DynamicVector *)&this->CMisl[6], v2); /*0x675007*/
  DynamicVector::Read_Alt((DynamicVector *)this->MyEffectivenessCoefficientDefault, v2); /*0x675013*/
  DynamicVector::Read_Alt((DynamicVector *)&this->TargetStrengthCoefficientDefault[1], v2); /*0x67501f*/
  DynamicVector::Read_Alt((DynamicVector *)&this->AirstripRatio[1], v2); /*0x67502b*/
  DynamicVector::Read_Alt((DynamicVector *)&this->TeslaLimit, v2); /*0x675037*/
  DynamicVector::Read_Alt((DynamicVector *)this->WarRatio, v2); /*0x675043*/
  DynamicVector::Read_Alt((DynamicVector *)this->RefineryRatio, v2); /*0x67504f*/
  DynamicVector::Read_Alt((DynamicVector *)&this->TreeStrength, v2); /*0x67505b*/
  DynamicVector::Read_Alt((DynamicVector *)&this->GameSpeedBias[1], v2); /*0x675067*/
  DynamicVector::Read_Alt((DynamicVector *)&this->SuperWeapons, v2); /*0x675073*/
  DynamicVector::Read_Alt((DynamicVector *)&this->Aircraft, v2); /*0x67507f*/
  DynamicVector::Read_Alt((DynamicVector *)&this->CrateMinimum, v2); /*0x67508b*/
  DynamicVector::Read_Alt((DynamicVector *)&this->MinUnitCount, v2); /*0x675097*/
  DynamicVector::Read_Alt((DynamicVector *)&this->TiberiumGrows, v2); /*0x6750a3*/
  RulesClass::readAnimations((RulesClass *)&this->Easy[3], v2); /*0x6750af*/
  Stream::WriteIntArray((Stream *)&this->Easy[10], v2); /*0x6750bb*/
  Stream::WriteIntArray((Stream *)&this->Easy[17], v2); /*0x6750c7*/
  Stream::WriteIntArray((Stream *)&this->Normal[9], v2); /*0x6750d3*/
  SaveLoad::StreamVector((SaveLoad *)&this->ThirdSurvivorDivisor, v2); /*0x6750df*/
  RulesClass::readParticleSystems((RulesClass *)&this->__pad_C3C[956], v2); /*0x6750eb*/
  SaveLoad::StreamVector((SaveLoad *)&this->HarvesterLoadRate, v2); /*0x6750f7*/
  VectorClass::SaveLoad((VectorClass *)&this->__pad_C3C[196], v2); /*0x675103*/
  SaveLoad::StreamVector((SaveLoad *)&this->__pad_C3C[224], v2); /*0x67510f*/
  DynamicVector::Read_Alt((DynamicVector *)&this->__pad_C3C[252], v2); /*0x67511b*/
  Stream::WriteIntArray((Stream *)&this->ScoreAnimSound, v2); /*0x675127*/
  Stream::WriteIntArray((Stream *)&this->GUICloseSound, v2); /*0x675133*/
  Stream::WriteIntArray((Stream *)&this->PlaceBeaconSound, v2); /*0x67513f*/
  Stream::WriteIntArray((Stream *)&this->CrateRevealSound, v2); /*0x67514b*/
  DynamicVector::Read((DynamicVector *)this->VeteranROF, v2); /*0x675157*/
  VectorClass::SaveLoad((VectorClass *)&this->Difficult[6], v2); /*0x675163*/
  DynamicVector::Read((DynamicVector *)&this->Difficult[13], v2); /*0x67516f*/
  VectorClass::SaveLoad((VectorClass *)this->__pad_C3C, v2); /*0x67517b*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[28], v2); /*0x675187*/
  VectorClass::SaveLoad((VectorClass *)&this->__pad_C3C[56], v2); /*0x675193*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[84], v2); /*0x67519f*/
  VectorClass::SaveLoad((VectorClass *)&this->__pad_C3C[112], v2); /*0x6751ab*/
  DynamicVector::Read((DynamicVector *)&this->__pad_C3C[140], v2); /*0x6751b7*/
  VectorClass::SaveLoad((VectorClass *)&this->__pad_C3C[168], v2); /*0x6751c3*/
  Stream::WriteIntArray((Stream *)&this->__pad_240[96], v2); /*0x6751cf*/
  Stream::WriteIntArray((Stream *)&this->__pad_240[124], v2); /*0x6751db*/
  Stream::WriteIntArray((Stream *)&this->__pad_240[152], v2); /*0x6751e7*/
  v60 = (RulesClass *)((char *)this + 6260); /*0x6751ec*/
  v61 = 16; /*0x6751f2*/
  do /*0x675203*/
  {
    result = RulesClass::readGeneralSection(v60, (int)v2); /*0x6751fa*/
    v60 = (RulesClass *)((char *)v60 + 3); /*0x6751ff*/
    --v61; /*0x675202*/
  }
  while ( v61 ); /*0x675203*/
  return result; /*0x675205*/
}



// ==== 0x00675210  RulesClass::SaveLoad_Prefix_0  this=RulesClass  sig=csp ====
int __thiscall RulesClass::SaveLoad_Prefix_0(RulesClass *this, int i)
{
  TypeList *v3; // ebx
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
  int i42;... [88139 chars total]



// ==== 0x00678850  ObjectClass::InitInterfaceStubsCOM  this=ObjectClass  sig=csp ====
int __thiscall InitInterfaceStubsCOM(TechnoClass *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
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
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // ecx
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  int v50; // ecx
  int v51; // eax
  int v52; // eax
  int v53; // ecx
  int v54; // ... [42787 chars total]



// ==== 0x00679A10  SideClass::LoadAllFromINI  this=AbstractClass  sig=csp ====
char __stdcall SideClass::LoadAllFromINI(_DWORD *a1)
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
  char *v19; // ebx
  MissionClass *v20; // edi
  ObjectClass *v22; // [esp+0h] [ebp-Ch]

  for ( i = 0; i < dword_A83CA8; ++i ) /*0x679a20*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A83C9C + i) + 100))( /*0x679a2d*/
      *((_DWORD *)dword_A83C9C + i),
      a1);
  for ( j = 0; j < dword_A8E340; ++j ) /*0x679a43*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A8E334 + j) + 100))( /*0x679a50*/
      *((_DWORD *)dword_A8E334 + j),
      a1);
  for ( k = 0; k < FootClass_Array.?[0]; ++k ) /*0x679a66*/
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(FootClass_Array.?[3] + 4 * k) + 100))( /*0x679a77*/
      *(_DWORD *)(FootClass_Array.?[3] + 4 * k),
      &DSurface_ViewBounds.__pad_FC[228]);
  for ( m = 0; m < dword_A83C78; ++m ) /*0x679a8d*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A83C6C + m) + 100))( /*0x679a9a*/
      *((_DWORD *)dword_A83C6C + m),
      a1);
  for ( n = 0; n < dword_A8B228; ++n ) /*0x679ab0*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A8B21C + n) + 100))( /*0x679abd*/
      *((_DWORD *)dword_A8B21C + n),
      a1);
  for ( ii = 0; ii < dword_A83CF0; ++ii ) /*0x679ad3*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A83CE4 + ii) + 100))( /*0x679ae0*/
      *((_DWORD *)dword_A83CE4 + ii),
      a1);
  for ( jj = 0; jj < dword_A8E358; ++jj ) /*0x679af6*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A8E34C + jj) + 100))( /*0x679b03*/
      *((_DWORD *)dword_A8E34C + jj),
      a1);
  for ( kk = 0; kk < g_WeaponTypePool; ++kk ) /*0x679b19*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)g_WeaponTypeConfig + kk) + 100))( /*0x679b26*/
      *((_DWORD *)g_WeaponTypeConfig + kk),
      a1);
  for ( mm = 0; mm < dword_A83C90; ++mm ) /*0x679b3c*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A83C84 + mm) + 100))( /*0x679b49*/
      *((_DWORD *)dword_A83C84 + mm),
      a1);
  for ( nn = 0; nn < g_WarheadTypePool; ++nn ) /*0x679b5f*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_8874C4 + nn) + 100))( /*0x679b6c*/
      *((_DWORD *)dword_8874C4 + nn),
      a1);
  for ( i1 = 0; i1 < g_WeaponTypePool; ++i1 ) /*0x679b82*/
    WeaponTypeClass::CalculateSpeed(*((WeaponTypeClass **)g_WeaponTypeConfig + i1)); /*0x679b8c*/
  for ( i2 = 0; i2 < dword_A83C78; ++i2 ) /*0x679ba4*/
    nullsub_7(v22); /*0x679baf*/
  for ( i3 = 0; i3 < dword_A8E328; ++i3 ) /*0x679bc7*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A8E31C + i3) + 100))( /*0x679bd5*/
      *((_DWORD *)dword_A8E31C + i3),
      a1);
  for ( i4 = 0; i4 < *(int *)&stru_A8EB00.?[68]; ++i4 ) /*0x679beb*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * i4) + 100))( /*0x679bf9*/
      *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * i4),
      a1);
  for ( i5 = 0; i5 < *(int *)&stru_A83D50.__pad_3C[4]; ++i5 ) /*0x679c0f*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * i5) + 100))( /*0x679c1c*/
      *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * i5),
      a1);
  for ( i6 = 0; i6 < *(int *)&stru_A83D50.__pad_3C[28]; ++i6 ) /*0x679c32*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * i6) + 100))( /*0x679c3f*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * i6),
      a1);
  for ( i7 = 0; i7 < (int)stru_A83D50.SuperClass_field_0x28; ++i7 ) /*0x679c55*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * i7) + 100))( /*0x679c62*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * i7),
      a1);
  for ( i8 = 0; i8 < stru_A8EB00.ObjectTypeClass[14]; ++i8 ) /*0x679c78*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(stru_A8EB00.ObjectTypeClass[11] + 4 * i8) + 100))( /*0x679c85*/
      *(_DWORD *)(stru_A8EB00.ObjectTypeClass[11] + 4 * i8),
      a1);
  v19 = 0; /*0x679c92*/
  v20 = &stru_A8E3A8; /*0x679c94*/
  do /*0x679cad*/
  {
    v20->ObjectClass = v19; /*0x679c9c*/
    MissionClass::LoadFromINI(v20, a1); /*0x679c9e*/
    v20 = (MissionClass *)((char *)v20 + 32); /*0x679ca3*/
    ++v19; /*0x679ca6*/
  }
  while ( (int)v20 < (int)&dword_A8E7A8 ); /*0x679cad*/
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
    v2[0] = &List<INIClass::INISection *>::`vftable'; /*0x679ceb*/
    memset(&v2[7], 0, 12); /*0x679cf8*/
    v3 = 0; /*0x679d04*/
    v4 = 0; /*0x679d08*/
    v5 = 0; /*0x679d0c*/
    v6 = 0; /*0x679d10*/
    v1[0] = &CCINIClass_Vtable; /*0x679d14*/
    CCFileClass::Construct(v7, g_Str_File_CoopCampMD_ini); /*0x679d1c*/
    if ( CCINIClass::Load(v1, (int)v7, 0, 0) ) /*0x679d2c*/
      dword_B053B4 = Hash::ComputeHashSHA1((int)v1); /*0x679d3e*/
    byte_B053B8 = 1; /*0x679d4a*/
    v7[0] = &CCFileClass::`vftable'; /*0x679d51*/
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

  v0 = Hash::ComputeHashSHA1(dword_887048); /*0x679da5*/
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
  v7[0] = &List<INIClass::INISection *>::`vftable'; /*0x679dfa*/
  memset(&v7[7], 0, 12); /*0x679e07*/
  v8 = 0; /*0x679e13*/
  v9 = 0; /*0x679e17*/
  v10 = 0; /*0x679e1b*/
  v11 = 0; /*0x679e1f*/
  v6[0] = &CCINIClass_Vtable; /*0x679e23*/
  CCFileClass::Construct(v12, g_Str_File_CoopCampMD_ini); /*0x679e2b*/
  if ( CCINIClass::Load(v6, (int)v12, 0, 0) ) /*0x679e3b*/
    dword_B053B4 = Hash::ComputeHashSHA1((int)v6); /*0x679e4d*/
  byte_B053B8 = 1; /*0x679e59*/
  v12[0] = &CCFileClass::`vftable'; /*0x679e60*/
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
  return Hash::ComputeHashSHA1((int)&dword_887180);
}



// ==== 0x00679ED0  unknown_libname_30  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
int unknown_libname_30()
{
  return Hash::ComputeHashSHA1((int)&dword_887128);
}



// ==== 0x00679EE0  LoadArtINI  this=-  sig=ida-proto ====
int ArtINI_Load()
{
  _DWORD v1[22]; // [esp+0h] [ebp-6Ch] BYREF
  _BYTE v2[12]; // [esp+58h] [ebp-14h] BYREF
  int v3; // [esp+64h] [ebp-8h]

  INIClass::ClearSection((int)&dword_887180, 0, 0); /*0x679eec*/
  CCFileClass::Construct(v1, aArtmdIni); /*0x679efa*/
  CCINIClass::Load(&dword_887180, (int)v1, 0, 0); /*0x679f0d*/
  v1[0] = &CCFileClass::`vftable'; /*0x679f16*/
  v3 = 0; /*0x679f1e*/
  Vector::Clear((int)v2); /*0x679f26*/
  v1[0] = &off_7E1668; /*0x679f2f*/
  return BufferIOFileClass::Dtor(v1); /*0x679f3c*/
}



// ==== 0x00679F40  INIEntry::Exists  this=INIEntry  sig=csp ====
BOOL __thiscall INIEntry::Exists(INIEntry *this, unsigned __int8 *a2, unsigned __int8 *a3)
{
  if ( a3 ) /*0x679f46*/
    return HashTableSection::FindSection((int *)this, a2, a3) != 0; /*0x679f6a*/
  else
    return INIClass::BinarySearchSection((int)this, a2) != 0; /*0x679f56*/
}



// ==== 0x00679F70  VectorClass::Dtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass::Dtor(VectorClass *this)
{
  void *Items; // eax

  Items = this->Items; /*0x679f76*/
  this->vtable0 = &VectorClass<int>::`vftable'; /*0x679f79*/
  if ( Items && this->IsAllocated ) /*0x679f83*/
  {
    __3_YAXPAX_Z(Items); /*0x679f89*/
    this->Items = 0; /*0x679f91*/
  }
  this->IsAllocated = 0; /*0x679f94*/
  this->Capacity = 0; /*0x679f97*/
}



// ==== 0x00679FA0  RulesClass::readMaximums  this=VectorClass  sig=csp ====
void __thiscall RulesClass::readMaximums(RulesClass *this)
{
  void *DetailMinFrameRateMovie; // eax

  DetailMinFrameRateMovie = (void *)this->DetailMinFrameRateMovie; /*0x679fa6*/
  this->DetailMinFrameRateNormal = (int)&VectorClass<BuildingTypeClass const *>::`vftable'; /*0x679fa9*/
  if ( DetailMinFrameRateMovie && BYTE1(this->AmmoCrateDamage) ) /*0x679fb3*/
  {
    __3_YAXPAX_Z(DetailMinFrameRateMovie); /*0x679fb9*/
    this->DetailMinFrameRateMovie = 0; /*0x679fc1*/
  }
  BYTE1(this->AmmoCrateDamage) = 0; /*0x679fc4*/
  this->DetailBufferZoneWidth = 0; /*0x679fc7*/
}



// ==== 0x00679FD0  RulesClass::readInfantryTypes  this=VectorClass  sig=csp ====
void __thiscall RulesClass::readInfantryTypes(RulesClass *this)
{
  void *DetailMinFrameRateMovie; // eax

  DetailMinFrameRateMovie = (void *)this->DetailMinFrameRateMovie; /*0x679fd6*/
  this->DetailMinFrameRateNormal = (int)&VectorClass<UnitTypeClass const *>::`vftable'; /*0x679fd9*/
  if ( DetailMinFrameRateMovie && BYTE1(this->AmmoCrateDamage) ) /*0x679fe3*/
  {
    __3_YAXPAX_Z(DetailMinFrameRateMovie); /*0x679fe9*/
    this->DetailMinFrameRateMovie = 0; /*0x679ff1*/
  }
  BYTE1(this->AmmoCrateDamage) = 0; /*0x679ff4*/
  this->DetailBufferZoneWidth = 0; /*0x679ff7*/
}



// ==== 0x0067A000  RulesClass::readCountries  this=VectorClass  sig=csp ====
void __thiscall RulesClass::readCountries(RulesClass *this)
{
  void *DetailMinFrameRateMovie; // eax

  DetailMinFrameRateMovie = (void *)this->DetailMinFrameRateMovie; /*0x67a006*/
  this->DetailMinFrameRateNormal = (int)&VectorClass<AircraftTypeClass const *>::`vftable'; /*0x67a009*/
  if ( DetailMinFrameRateMovie && BYTE1(this->AmmoCrateDamage) ) /*0x67a013*/
  {
    __3_YAXPAX_Z(DetailMinFrameRateMovie); /*0x67a019*/
    this->DetailMinFrameRateMovie = 0; /*0x67a021*/
  }
  BYTE1(this->AmmoCrateDamage) = 0; /*0x67a024*/
  this->DetailBufferZoneWidth = 0; /*0x67a027*/
}



// ==== 0x0067A030  TypeList::InfantryCleanup  this=VectorClass  sig=csp ====
void __thiscall TypeList::InfantryCleanup(TypeList *this)
{
  void *Items; // eax

  Items = this->?; /*0x67a036*/
  this->DynamicVectorClass = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x67a039*/
  if ( Items && this->? ) /*0x67a043*/
  {
    __3_YAXPAX_Z(Items); /*0x67a049*/
    this->? = 0; /*0x67a051*/
  }
  this->? = 0; /*0x67a054*/
  this->? = 0; /*0x67a057*/
}



// ==== 0x0067A060  RulesClass::readVehicleTypes  this=VectorClass  sig=csp ====
void __thiscall RulesClass::readVehicleTypes(RulesClass *this)
{
  void *DetailMinFrameRateMovie; // eax

  DetailMinFrameRateMovie = (void *)this->DetailMinFrameRateMovie; /*0x67a066*/
  this->DetailMinFrameRateNormal = (int)&VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67a069*/
  if ( DetailMinFrameRateMovie && BYTE1(this->AmmoCrateDamage) ) /*0x67a073*/
  {
    __3_YAXPAX_Z(DetailMinFrameRateMovie); /*0x67a079*/
    this->DetailMinFrameRateMovie = 0; /*0x67a081*/
  }
  BYTE1(this->AmmoCrateDamage) = 0; /*0x67a084*/
  this->DetailBufferZoneWidth = 0; /*0x67a087*/
}



// ==== 0x0067A090  TypeList::CopyFull  this=TypeList  sig=csp ====
int *__thiscall TypeList::CopyFull(TypeList *this, int *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this != (TypeList *)a2 ) /*0x67a09a*/
  {
    (*((void (__thiscall **)(TypeList *))this->DynamicVectorClass + 3))(this); /*0x67a09e*/
    v3 = a2[2]; /*0x67a0a1*/
    this->? = v3; /*0x67a0a6*/
    if ( v3 ) /*0x67a0a9*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67a0b3*/
      this->? = v4; /*0x67a0bb*/
      if ( v4 ) /*0x67a0c0*/
      {
        Capacity = this->?; /*0x67a0c2*/
        v6 = 0; /*0x67a0c5*/
        this->? = 1; /*0x67a0c9*/
        if ( Capacity > 0 ) /*0x67a0cd*/
        {
          do /*0x67a0e1*/
          {
            *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a0d8*/
            ++v6; /*0x67a0de*/
          }
          while ( v6 < this->? ); /*0x67a0e1*/
        }
      }
    }
    else
    {
      this->? = 0; /*0x67a0e5*/
      this->? = 0; /*0x67a0ec*/
    }
  }
  this->? = a2[4]; /*0x67a0f3*/
  this->? = a2[5]; /*0x67a0f9*/
  this->unknown_18 = a2[6]; /*0x67a0ff*/
  return (int *)this; /*0x67a104*/
}



// ==== 0x0067A110  TypeList::CopyAircraft  this=TypeList  sig=csp ====
int *__thiscall TypeList::CopyAircraft(TypeList *this, int *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this != (TypeList *)a2 ) /*0x67a11a*/
  {
    (*((void (__thiscall **)(TypeList *))this->DynamicVectorClass + 3))(this); /*0x67a11e*/
    v3 = a2[2]; /*0x67a121*/
    this->? = v3; /*0x67a126*/
    if ( v3 ) /*0x67a129*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67a133*/
      this->? = v4; /*0x67a13b*/
      if ( v4 ) /*0x67a140*/
      {
        Capacity = this->?; /*0x67a142*/
        v6 = 0; /*0x67a145*/
        this->? = 1; /*0x67a149*/
        if ( Capacity > 0 ) /*0x67a14d*/
        {
          do /*0x67a161*/
          {
            *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a158*/
            ++v6; /*0x67a15e*/
          }
          while ( v6 < this->? ); /*0x67a161*/
        }
      }
    }
    else
    {
      this->? = 0; /*0x67a165*/
      this->? = 0; /*0x67a16c*/
    }
  }
  this->? = a2[4]; /*0x67a173*/
  this->? = a2[5]; /*0x67a179*/
  this->unknown_18 = a2[6]; /*0x67a17f*/
  return (int *)this; /*0x67a184*/
}



// ==== 0x0067A190  RulesClass::readAircraftTypes  this=RulesClass  sig=csp ====
int *__thiscall RulesClass::readAircraftTypes(RulesClass *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int DetailBufferZoneWidth; // ecx
  int v6; // eax

  if ( this != (RulesClass *)a2 ) /*0x67a19a*/
  {
    (*(void (__thiscall **)(RulesClass *))(this->DetailMinFrameRateNormal + 12))(this); /*0x67a19e*/
    v3 = a2[2]; /*0x67a1a1*/
    this->DetailBufferZoneWidth = v3; /*0x67a1a6*/
    if ( v3 ) /*0x67a1a9*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a1b3*/
      this->DetailMinFrameRateMovie = v4; /*0x67a1bb*/
      if ( v4 ) /*0x67a1c0*/
      {
        DetailBufferZoneWidth = this->DetailBufferZoneWidth; /*0x67a1c2*/
        v6 = 0; /*0x67a1c5*/
        BYTE1(this->AmmoCrateDamage) = 1; /*0x67a1c9*/
        if ( DetailBufferZoneWidth > 0 ) /*0x67a1cd*/
        {
          do /*0x67a1e1*/
          {
            *(_DWORD *)(this->DetailMinFrameRateMovie + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a1d8*/
            ++v6; /*0x67a1de*/
          }
          while ( v6 < this->DetailBufferZoneWidth ); /*0x67a1e1*/
        }
      }
    }
    else
    {
      this->DetailMinFrameRateMovie = 0; /*0x67a1e5*/
      BYTE1(this->AmmoCrateDamage) = 0; /*0x67a1ec*/
    }
  }
  this->LargeVisceroid = (UnitTypeClass *)a2[4]; /*0x67a1f3*/
  this->SmallVisceroid = (UnitTypeClass *)a2[5]; /*0x67a1f9*/
  this->AttackingAircraftSightRange = a2[6]; /*0x67a1ff*/
  return &this->DetailMinFrameRateNormal; /*0x67a204*/
}



// ==== 0x0067A210  RulesClass::readSuperWeaponTypes  this=RulesClass  sig=csp ====
int *__thiscall RulesClass::readSuperWeaponTypes(RulesClass *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int DetailBufferZoneWidth; // ecx
  int v6; // eax

  if ( this != (RulesClass *)a2 ) /*0x67a21a*/
  {
    (*(void (__thiscall **)(RulesClass *))(this->DetailMinFrameRateNormal + 12))(this); /*0x67a21e*/
    v3 = a2[2]; /*0x67a221*/
    this->DetailBufferZoneWidth = v3; /*0x67a226*/
    if ( v3 ) /*0x67a229*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a233*/
      this->DetailMinFrameRateMovie = v4; /*0x67a23b*/
      if ( v4 ) /*0x67a240*/
      {
        DetailBufferZoneWidth = this->DetailBufferZoneWidth; /*0x67a242*/
        v6 = 0; /*0x67a245*/
        BYTE1(this->AmmoCrateDamage) = 1; /*0x67a249*/
        if ( DetailBufferZoneWidth > 0 ) /*0x67a24d*/
        {
          do /*0x67a261*/
          {
            *(_DWORD *)(this->DetailMinFrameRateMovie + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a258*/
            ++v6; /*0x67a25e*/
          }
          while ( v6 < this->DetailBufferZoneWidth ); /*0x67a261*/
        }
      }
    }
    else
    {
      this->DetailMinFrameRateMovie = 0; /*0x67a265*/
      BYTE1(this->AmmoCrateDamage) = 0; /*0x67a26c*/
    }
  }
  this->LargeVisceroid = (UnitTypeClass *)a2[4]; /*0x67a273*/
  this->SmallVisceroid = (UnitTypeClass *)a2[5]; /*0x67a279*/
  this->AttackingAircraftSightRange = a2[6]; /*0x67a27f*/
  return &this->DetailMinFrameRateNormal; /*0x67a284*/
}



// ==== 0x0067A290  TypeList::CopyInfantry  this=TypeList  sig=csp ====
int *__thiscall TypeList::CopyInfantry(TypeList *this, int *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this != (TypeList *)a2 ) /*0x67a29a*/
  {
    (*((void (__thiscall **)(TypeList *))this->DynamicVectorClass + 3))(this); /*0x67a29e*/
    v3 = a2[2]; /*0x67a2a1*/
    this->? = v3; /*0x67a2a6*/
    if ( v3 ) /*0x67a2a9*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67a2b3*/
      this->? = v4; /*0x67a2bb*/
      if ( v4 ) /*0x67a2c0*/
      {
        Capacity = this->?; /*0x67a2c2*/
        v6 = 0; /*0x67a2c5*/
        this->? = 1; /*0x67a2c9*/
        if ( Capacity > 0 ) /*0x67a2cd*/
        {
          do /*0x67a2e1*/
          {
            *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a2d8*/
            ++v6; /*0x67a2de*/
          }
          while ( v6 < this->? ); /*0x67a2e1*/
        }
      }
    }
    else
    {
      this->? = 0; /*0x67a2e5*/
      this->? = 0; /*0x67a2ec*/
    }
  }
  this->? = a2[4]; /*0x67a2f3*/
  this->? = a2[5]; /*0x67a2f9*/
  this->unknown_18 = a2[6]; /*0x67a2ff*/
  return (int *)this; /*0x67a304*/
}



// ==== 0x0067A310  RulesClass::readBuildingTypes  this=RulesClass  sig=csp ====
int *__thiscall RulesClass::readBuildingTypes(RulesClass *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int DetailBufferZoneWidth; // ecx
  int v6; // eax

  if ( this != (RulesClass *)a2 ) /*0x67a31a*/
  {
    (*(void (__thiscall **)(RulesClass *))(this->DetailMinFrameRateNormal + 12))(this); /*0x67a31e*/
    v3 = a2[2]; /*0x67a321*/
    this->DetailBufferZoneWidth = v3; /*0x67a326*/
    if ( v3 ) /*0x67a329*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a333*/
      this->DetailMinFrameRateMovie = v4; /*0x67a33b*/
      if ( v4 ) /*0x67a340*/
      {
        DetailBufferZoneWidth = this->DetailBufferZoneWidth; /*0x67a342*/
        v6 = 0; /*0x67a345*/
        BYTE1(this->AmmoCrateDamage) = 1; /*0x67a349*/
        if ( DetailBufferZoneWidth > 0 ) /*0x67a34d*/
        {
          do /*0x67a361*/
          {
            *(_DWORD *)(this->DetailMinFrameRateMovie + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a358*/
            ++v6; /*0x67a35e*/
          }
          while ( v6 < this->DetailBufferZoneWidth ); /*0x67a361*/
        }
      }
    }
    else
    {
      this->DetailMinFrameRateMovie = 0; /*0x67a365*/
      BYTE1(this->AmmoCrateDamage) = 0; /*0x67a36c*/
    }
  }
  this->LargeVisceroid = (UnitTypeClass *)a2[4]; /*0x67a373*/
  this->SmallVisceroid = (UnitTypeClass *)a2[5]; /*0x67a379*/
  this->AttackingAircraftSightRange = a2[6]; /*0x67a37f*/
  return &this->DetailMinFrameRateNormal; /*0x67a384*/
}



// ==== 0x0067A390  TypeList::VoxelAnimConstructor  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList::VoxelAnimConstructor(TypeList *this)
{
  this->? = 0; /*0x67a394*/
  this->? = 0; /*0x67a397*/
  this->? = 1; /*0x67a39a*/
  this->? = 0; /*0x67a39e*/
  this->? = 10; /*0x67a3a1*/
  this->? = 0; /*0x67a3a8*/
  this->DynamicVectorClass = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x67a3ab*/
  return &this->DynamicVectorClass; /*0x67a3b1*/
}



// ==== 0x0067A3C0  RulesClass::readTerrainTypes  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readTerrainTypes(RulesClass *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  UnitTypeClass *LargeVisceroid; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a3cc*/
  LargeVisceroid = this->LargeVisceroid; /*0x67a3d9*/
  (*(void (__stdcall **)(int *, UnitTypeClass **, int, _DWORD))(v3 + 16))(a2, &LargeVisceroid, 4, 0); /*0x67a3dd*/
  result = (int)LargeVisceroid; /*0x67a3e0*/
  for ( i = 0; i < (int)LargeVisceroid; ++i ) /*0x67a3e8*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->DetailMinFrameRateMovie + 4 * i, 4, 0); /*0x67a3f8*/
    result = (int)LargeVisceroid; /*0x67a3fb*/
  }
  return result; /*0x67a404*/
}



// ==== 0x0067A410  _DynamicVectorClass_PBVVoxelAnimTypeClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall TypeList_VoxelAnim::ddtor(_DynamicVectorClass_PBVVoxelAnimTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x67a416*/
  this->m_10 = 0; /*0x67a419*/
  if ( v2 && BYTE1(this->m_C) ) /*0x67a420*/
  {
    __3_YAXPAX_Z(v2); /*0x67a426*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67a42e*/
  }
  BYTE1(this->m_C) = 0; /*0x67a431*/
  this->m_8 = 0; /*0x67a434*/
}



// ==== 0x0067A440  _DynamicVectorClass_PBVVoxelAnimTypeClass::GetIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall TypeList_VoxelAnim::GetIndex(_DynamicVectorClass_PBVVoxelAnimTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x67a440*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x67a455*/
  else
    return 0; /*0x67a447*/
}



// ==== 0x0067A460  _VectorClass_PBVVoxelAnimTypeClass::Clear  this=VectorClass  sig=csp ====
int __thiscall TypeList_VoxelAnim::Clear(_VectorClass_PBVVoxelAnimTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x67a46a*/
}



// ==== 0x0067A470  AnimTypeList::Constructor  this=TypeList  sig=csp ====
_DWORD *__thiscall AnimTypeList::Constructor(AnimTypeList *this)
{
  this->Items = 0; /*0x67a474*/
  this->Capacity = 0; /*0x67a477*/
  this->IsInitialized = 1; /*0x67a47a*/
  this->IsAllocated = 0; /*0x67a47e*/
  this->CapacityIncrement = 10; /*0x67a481*/
  this->Items = 0; /*0x67a488*/
  *this = (AnimTypeList)&TypeList<AnimTypeClass const *>::`vftable'; /*0x67a48b*/
  return this; /*0x67a491*/
}



// ==== 0x0067A4A0  Stream::WriteIntArray  this=Stream  sig=csp ====
int __thiscall Stream::WriteIntArray(Stream *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int Stream_field_10; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a4ac*/
  Stream_field_10 = this->Stream_field_10; /*0x67a4b9*/
  (*(void (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &Stream_field_10, 4, 0); /*0x67a4bd*/
  result = Stream_field_10; /*0x67a4c0*/
  for ( i = 0; i < Stream_field_10; ++i ) /*0x67a4c8*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->Stream_field_04 + 4 * i, 4, 0); /*0x67a4d8*/
    result = Stream_field_10; /*0x67a4db*/
  }
  return result; /*0x67a4e4*/
}



// ==== 0x0067A4F0  TypeList::Construct  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList::Construct(TypeList *this)
{
  this->? = 0; /*0x67a4f4*/
  this->? = 0; /*0x67a4f7*/
  this->? = 1; /*0x67a4fa*/
  this->? = 0; /*0x67a4fe*/
  this->? = 10; /*0x67a501*/
  this->? = 0; /*0x67a508*/
  this->DynamicVectorClass = &TypeList<int>::`vftable'; /*0x67a50b*/
  return &this->DynamicVectorClass; /*0x67a511*/
}



// ==== 0x0067A520  DynamicVector::Read  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::Read(DynamicVector *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  void *DynamicVector_field_0x10; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a52c*/
  DynamicVector_field_0x10 = this->DynamicVector_field_0x10; /*0x67a539*/
  (*(void (__stdcall **)(int *, void **, int, _DWORD))(v3 + 16))(a2, &DynamicVector_field_0x10, 4, 0); /*0x67a53d*/
  result = (int)DynamicVector_field_0x10; /*0x67a540*/
  for ( i = 0; i < (int)DynamicVector_field_0x10; ++i ) /*0x67a548*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))( /*0x67a558*/
      a2,
      *(_DWORD *)&this->DynamicVector_field_0x1[3] + 4 * i,
      4,
      0);
    result = (int)DynamicVector_field_0x10; /*0x67a55b*/
  }
  return result; /*0x67a564*/
}



// ==== 0x0067A570  Rules::CopyDataArray  this=Rules  sig=csp ====
_DWORD *__thiscall Rules::CopyDataArray(Rules *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (Rules *)a2 ) /*0x67a57a*/
    goto LABEL_8; /*0x67a57a*/
  (*(void (__thiscall **)(Rules *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x67a57e*/
  v3 = a2[2]; /*0x67a581*/
  *(_DWORD *)&this->m_5[3] = v3; /*0x67a586*/
  if ( !v3 ) /*0x67a589*/
  {
    *(_DWORD *)&this->m_1[3] = 0; /*0x67a5d6*/
    BYTE1(this->m_C) = 0; /*0x67a5dd*/
LABEL_8:
    *(_DWORD *)this->__tail_10 = a2[4]; /*0x67a5e1*/
    this->u32_14 = a2[5]; /*0x67a5ea*/
    return this->__pad_0; /*0x67a5ed*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x67a593*/
  *(_DWORD *)&this->m_1[3] = v4; /*0x67a59b*/
  if ( !v4 ) /*0x67a5a0*/
    goto LABEL_8; /*0x67a5a0*/
  v5 = *(_DWORD *)&this->m_5[3]; /*0x67a5a2*/
  v6 = 0; /*0x67a5a5*/
  BYTE1(this->m_C) = 1; /*0x67a5a9*/
  if ( v5 <= 0 ) /*0x67a5ad*/
    goto LABEL_8; /*0x67a5ad*/
  do /*0x67a5c1*/
  {
    *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a5b8*/
    ++v6; /*0x67a5be*/
  }
  while ( v6 < *(_DWORD *)&this->m_5[3] ); /*0x67a5c1*/
  *(_DWORD *)this->__tail_10 = a2[4]; /*0x67a5c6*/
  this->u32_14 = a2[5]; /*0x67a5cc*/
  return this->__pad_0; /*0x67a5d1*/
}



// ==== 0x0067A600  TypeList::ConstructSmudge  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList::ConstructSmudge(TypeList *this)
{
  this->? = 0; /*0x67a604*/
  this->? = 0; /*0x67a607*/
  this->? = 1; /*0x67a60a*/
  this->? = 0; /*0x67a60e*/
  this->? = 10; /*0x67a611*/
  this->? = 0; /*0x67a618*/
  this->DynamicVectorClass = &TypeList<SmudgeTypeClass const *>::`vftable'; /*0x67a61b*/
  return &this->DynamicVectorClass; /*0x67a621*/
}



// ==== 0x0067A630  VectorClass::LoadStream  this=VectorClass  sig=csp ====
int __thiscall VectorClass::LoadStream(DynamicVectorClass *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int Count; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a63c*/
  Count = this->Count; /*0x67a649*/
  (*(void (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &Count, 4, 0); /*0x67a64d*/
  result = Count; /*0x67a650*/
  for ( i = 0; i < Count; ++i ) /*0x67a658*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->Items + 4 * i, 4, 0); /*0x67a668*/
    result = Count; /*0x67a66b*/
  }
  return result; /*0x67a674*/
}



// ==== 0x0067A680  _DynamicVectorClass_PBVSmudgeTypeClass::TypeList_vt03  this=DynamicVector  sig=csp ====
void __thiscall TypeList_VoxelAnim::TypeList_vt03(_DynamicVectorClass_PBVSmudgeTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x67a686*/
  this->m_10 = 0; /*0x67a689*/
  if ( v2 && BYTE1(this->m_C) ) /*0x67a690*/
  {
    __3_YAXPAX_Z(v2); /*0x67a696*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67a69e*/
  }
  BYTE1(this->m_C) = 0; /*0x67a6a1*/
  this->m_8 = 0; /*0x67a6a4*/
}



// ==== 0x0067A6B0  _DynamicVectorClass_PBVSmudgeTypeClass::TypeList_vt05  this=DynamicVector  sig=csp ====
unsigned int __thiscall TypeList_VoxelAnim::TypeList_vt05(_DynamicVectorClass_PBVSmudgeTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x67a6b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x67a6c5*/
  else
    return 0; /*0x67a6b7*/
}



// ==== 0x0067A6D0  _VectorClass_PBVSmudgeTypeClass::Clear  this=VectorClass  sig=csp ====
int __thiscall TypeList::Clear(_VectorClass_PBVSmudgeTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x67a6da*/
}



// ==== 0x0067A6E0  DynamicVector::Read_Alt  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::Read_Alt(DynamicVector *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  void *DynamicVector_field_0x10; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a6ec*/
  DynamicVector_field_0x10 = this->DynamicVector_field_0x10; /*0x67a6f9*/
  (*(void (__stdcall **)(int *, void **, int, _DWORD))(v3 + 16))(a2, &DynamicVector_field_0x10, 4, 0); /*0x67a6fd*/
  result = (int)DynamicVector_field_0x10; /*0x67a700*/
  for ( i = 0; i < (int)DynamicVector_field_0x10; ++i ) /*0x67a708*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))( /*0x67a718*/
      a2,
      *(_DWORD *)&this->DynamicVector_field_0x1[3] + 4 * i,
      4,
      0);
    result = (int)DynamicVector_field_0x10; /*0x67a71b*/
  }
  return result; /*0x67a724*/
}



// ==== 0x0067A730  RulesClass::readSmudgeTypes  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readSmudgeTypes(RulesClass *this)
{
  return (int)this->LargeVisceroid; /*0x67a733*/
}



// ==== 0x0067A740  UnitTypeList::Constructor  this=TypeList  sig=csp ====
_DWORD *__thiscall UnitTypeList::Constructor(UnitTypeList *this)
{
  this->Items = 0; /*0x67a744*/
  this->Capacity = 0; /*0x67a747*/
  this->IsInitialized = 1; /*0x67a74a*/
  this->IsAllocated = 0; /*0x67a74e*/
  this->CapacityIncrement = 10; /*0x67a751*/
  this->Items = 0; /*0x67a758*/
  *this = (UnitTypeList)&TypeList<UnitTypeClass const *>::`vftable'; /*0x67a75b*/
  return this; /*0x67a761*/
}



// ==== 0x0067A770  SaveLoad::StreamVector  this=SaveLoad  sig=csp ====
int __thiscall SaveLoad::StreamVector(SaveLoad *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a77c*/
  v6 = *((_DWORD *)this + 4); /*0x67a789*/
  (*(void (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &v6, 4, 0); /*0x67a78d*/
  result = v6; /*0x67a790*/
  for ( i = 0; i < v6; ++i ) /*0x67a798*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, *((_DWORD *)this + 1) + 4 * i, 4, 0); /*0x67a7a8*/
    result = v6; /*0x67a7ab*/
  }
  return result; /*0x67a7b4*/
}



// ==== 0x0067A7C0  RulesClass::readOverlayTypes  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readOverlayTypes(RulesClass *this)
{
  return (int)this->LargeVisceroid; /*0x67a7c3*/
}



// ==== 0x0067A7D0  RulesClass::readAnimations  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readAnimations(RulesClass *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  UnitTypeClass *LargeVisceroid; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a7dc*/
  LargeVisceroid = this->LargeVisceroid; /*0x67a7e9*/
  (*(void (__stdcall **)(int *, UnitTypeClass **, int, _DWORD))(v3 + 16))(a2, &LargeVisceroid, 4, 0); /*0x67a7ed*/
  result = (int)LargeVisceroid; /*0x67a7f0*/
  for ( i = 0; i < (int)LargeVisceroid; ++i ) /*0x67a7f8*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->DetailMinFrameRateMovie + 4 * i, 4, 0); /*0x67a808*/
    result = (int)LargeVisceroid; /*0x67a80b*/
  }
  return result; /*0x67a814*/
}



// ==== 0x0067A820  TypeList::InfantryConstructor  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList::InfantryConstructor(TypeList *this)
{
  this->? = 0; /*0x67a824*/
  this->? = 0; /*0x67a827*/
  this->? = 1; /*0x67a82a*/
  this->? = 0; /*0x67a82e*/
  this->? = 10; /*0x67a831*/
  this->? = 0; /*0x67a838*/
  this->DynamicVectorClass = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x67a83b*/
  return &this->DynamicVectorClass; /*0x67a841*/
}



// ==== 0x0067A850  VectorClass::SaveLoad  this=VectorClass  sig=csp ====
int __thiscall VectorClass::SaveLoad(DynamicVectorClass *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int Count; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a85c*/
  Count = this->Count; /*0x67a869*/
  (*(void (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &Count, 4, 0); /*0x67a86d*/
  result = Count; /*0x67a870*/
  for ( i = 0; i < Count; ++i ) /*0x67a878*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->Items + 4 * i, 4, 0); /*0x67a888*/
    result = Count; /*0x67a88b*/
  }
  return result; /*0x67a894*/
}



// ==== 0x0067A8A0  RulesClass::readWarheads  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readWarheads(RulesClass *this)
{
  return (int)this->LargeVisceroid; /*0x67a8a3*/
}



// ==== 0x0067A8B0  RulesClass::readParticles  this=TypeList  sig=csp ====
_DWORD *__thiscall RulesClass::readParticles(RulesClass *this)
{
  this->DetailMinFrameRateMovie = 0; /*0x67a8b4*/
  this->DetailBufferZoneWidth = 0; /*0x67a8b7*/
  LOBYTE(this->AmmoCrateDamage) = 1; /*0x67a8ba*/
  BYTE1(this->AmmoCrateDamage) = 0; /*0x67a8be*/
  this->SmallVisceroid = (UnitTypeClass *)10; /*0x67a8c1*/
  this->LargeVisceroid = 0; /*0x67a8c8*/
  this->DetailMinFrameRateNormal = (int)&TypeList<TerrainTypeClass const *>::`vftable'; /*0x67a8cb*/
  return &this->DetailMinFrameRateNormal; /*0x67a8d1*/
}



// ==== 0x0067A8E0  RulesClass::readParticleSystems  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readParticleSystems(RulesClass *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  UnitTypeClass *LargeVisceroid; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x67a8ec*/
  LargeVisceroid = this->LargeVisceroid; /*0x67a8f9*/
  (*(void (__stdcall **)(int *, UnitTypeClass **, int, _DWORD))(v3 + 16))(a2, &LargeVisceroid, 4, 0); /*0x67a8fd*/
  result = (int)LargeVisceroid; /*0x67a900*/
  for ( i = 0; i < (int)LargeVisceroid; ++i ) /*0x67a908*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->DetailMinFrameRateMovie + 4 * i, 4, 0); /*0x67a918*/
    result = (int)LargeVisceroid; /*0x67a91b*/
  }
  return result; /*0x67a924*/
}



// ==== 0x0067A930  _DynamicVectorClass_PBVTerrainTypeClass::GetClassIdentifier  this=DynamicVector  sig=csp ====
void __thiscall TypeList_cptr_TerrainTypeClass::GetClassIdentifier(_DynamicVectorClass_PBVTerrainTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x67a936*/
  this->m_10 = 0; /*0x67a939*/
  if ( v2 && BYTE1(this->m_C) ) /*0x67a940*/
  {
    __3_YAXPAX_Z(v2); /*0x67a946*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67a94e*/
  }
  BYTE1(this->m_C) = 0; /*0x67a951*/
  this->m_8 = 0; /*0x67a954*/
}



// ==== 0x0067A960  _DynamicVectorClass_PBVTerrainTypeClass::GetIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall TypeList_cptr_TerrainTypeClass::GetIndex(_DynamicVectorClass_PBVTerrainTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x67a960*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x67a975*/
  else
    return 0; /*0x67a967*/
}



// ==== 0x0067A980  _VectorClass_PBVTerrainTypeClass::SaveToINI  this=VectorClass  sig=csp ====
int __thiscall TypeList_cptr_TerrainTypeClass::SaveToINI(_VectorClass_PBVTerrainTypeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x67a98a*/
}



// ==== 0x0067A990  _TypeList_PBVVoxelAnimTypeClass::Add  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList_VoxelAnim::Add(_TypeList_PBVVoxelAnimTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x67a993*/
  *(_DWORD *)this = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67a996*/
  if ( v3 && this->IsAllocated ) /*0x67a9a0*/
  {
    __3_YAXPAX_Z(v3); /*0x67a9a8*/
    this->Items = 0; /*0x67a9b0*/
  }
  this->IsAllocated = 0; /*0x67a9bb*/
  this->Capacity = 0; /*0x67a9c1*/
  if ( (a2 & 1) != 0 ) /*0x67a9c8*/
    __3_YAXPAX_Z(this); /*0x67a9cb*/
  return this; /*0x67a9d5*/
}



// ==== 0x0067A9E0  _TypeList_PBVSmudgeTypeClass::TypeList_vt00  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList_VoxelAnim::TypeList_vt00(_TypeList_PBVSmudgeTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x67a9e3*/
  *(_DWORD *)this = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67a9e6*/
  if ( v3 && this->IsAllocated ) /*0x67a9f0*/
  {
    __3_YAXPAX_Z(v3); /*0x67a9f8*/
    this->Items = 0; /*0x67aa00*/
  }
  this->IsAllocated = 0; /*0x67aa0b*/
  this->Capacity = 0; /*0x67aa11*/
  if ( (a2 & 1) != 0 ) /*0x67aa18*/
    __3_YAXPAX_Z(this); /*0x67aa1b*/
  return this; /*0x67aa25*/
}



// ==== 0x0067AA30  _TypeList_PBVTerrainTypeClass::Add  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList_cptr_TerrainTypeClass::Add(_TypeList_PBVTerrainTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x67aa33*/
  *(_DWORD *)this = &VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67aa36*/
  if ( v3 && this->IsAllocated ) /*0x67aa40*/
  {
    __3_YAXPAX_Z(v3); /*0x67aa48*/
    this->Items = 0; /*0x67aa50*/
  }
  this->IsAllocated = 0; /*0x67aa5b*/
  this->Capacity = 0; /*0x67aa61*/
  if ( (a2 & 1) != 0 ) /*0x67aa68*/
    __3_YAXPAX_Z(this); /*0x67aa6b*/
  return this; /*0x67aa75*/
}



// ==== 0x0067AA80  VectorClass::CopyAssign  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CopyAssign(VectorClass *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)a2 ) /*0x67aa8a*/
    return &this->vtable0; /*0x67aa8a*/
  (*((void (__thiscall **)(VectorClass *))this->vtable0 + 3))(this); /*0x67aa8e*/
  v3 = a2[2]; /*0x67aa91*/
  this->Capacity = v3; /*0x67aa96*/
  if ( !v3 ) /*0x67aa99*/
  {
    this->Items = 0; /*0x67aada*/
    this->IsAllocated = 0; /*0x67aae1*/
    return &this->vtable0; /*0x67aae5*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67aaa3*/
  this->Items = v4; /*0x67aaab*/
  if ( !v4 ) /*0x67aab0*/
    return &this->vtable0; /*0x67aab0*/
  Capacity = this->Capacity; /*0x67aab2*/
  v6 = 0; /*0x67aab5*/
  this->IsAllocated = 1; /*0x67aab9*/
  if ( Capacity <= 0 ) /*0x67aabd*/
    return &this->vtable0; /*0x67aabd*/
  do /*0x67aad1*/
  {
    *((_DWORD *)this->Items + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67aac8*/
    ++v6; /*0x67aace*/
  }
  while ( v6 < this->Capacity ); /*0x67aad1*/
  return &this->vtable0; /*0x67aad5*/
}



// ==== 0x0067AAF0  _VectorClass_PBVVoxelAnimTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TypeList_VoxelAnim::AddRef(_VectorClass_PBVVoxelAnimTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x67aaf2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x67aafd*/
  {
    v3 = 0; /*0x67aaff*/
    if ( m_8 <= 0 ) /*0x67ab03*/
      return 1; /*0x67ab23*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x67ab05*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x67ab0b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x67ab14*/
    {
      ++v3; /*0x67ab16*/
      ++v4; /*0x67ab17*/
      if ( v3 >= m_8 ) /*0x67ab1c*/
        return 1; /*0x67ab1c*/
    }
  }
  return 0; /*0x67ab1e*/
}



// ==== 0x0067AB30  _VectorClass_PBVVoxelAnimTypeClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall TypeList_VoxelAnim::SetCapacity(_VectorClass_PBVVoxelAnimTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x67ab3c*/
  {
    LOBYTE(this->m_C) = 0; /*0x67ab46*/
    if ( a3 ) /*0x67ab4c*/
      v4 = a3; /*0x67ab62*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x67ab5e*/
    LOBYTE(this->m_C) = 1; /*0x67ab66*/
    if ( v4 ) /*0x67ab6a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x67ab75*/
      {
        m_8 = this->m_8; /*0x67ab7c*/
        if ( a2 < m_8 ) /*0x67ab81*/
          m_8 = a2; /*0x67ab83*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x67ab89*/
          ++i; /*0x67ab8e*/
        if ( BYTE1(this->m_C) ) /*0x67ab9b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x67aba6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x67abae*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x67abb7*/
      this->m_8 = a2; /*0x67abbf*/
      BYTE1(this->m_C) = a3 == 0; /*0x67abc2*/
      return 1; /*0x67abc8*/
    }
    else
    {
      return 0; /*0x67ab6f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVVoxelAnimTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x67abd2*/
    return 1; /*0x67abd8*/
  }
}



// ==== 0x0067ABE0  _VectorClass_PBVVoxelAnimTypeClass::Cleanup2  this=VectorClass  sig=csp ====
int __thiscall Vector::Cleanup2(_VectorClass_PBVVoxelAnimTypeClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->m_1[3]; /*0x67abe6*/
  if ( result && BYTE1(this->m_C) ) /*0x67abed*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x67abf3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67abfb*/
  }
  BYTE1(this->m_C) = 0; /*0x67abfe*/
  this->m_8 = 0; /*0x67ac01*/
  return result; /*0x67ac04*/
}



// ==== 0x0067AC10  _VectorClass_PBVVoxelAnimTypeClass::IndexOf  this=VectorClass  sig=csp ====
int __thiscall TypeList_VoxelAnim::IndexOf(_VectorClass_PBVVoxelAnimTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x67ac10*/
    return 0; /*0x67ac18*/
  m_8 = this->m_8; /*0x67ac1e*/
  result = 0; /*0x67ac21*/
  if ( m_8 <= 0 ) /*0x67ac25*/
    return -1; /*0x67ac3c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x67ac2b*/
  {
    if ( ++result >= m_8 ) /*0x67ac3a*/
      return -1; /*0x67ac3a*/
  }
  return result; /*0x67ac1a*/
}



// ==== 0x0067AC50  _VectorClass_PBVVoxelAnimTypeClass::PointerToIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall TypeList_VoxelAnim::PointerToIndex(_VectorClass_PBVVoxelAnimTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x67ac50*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x67ac65*/
  else
    return 0; /*0x67ac57*/
}



// ==== 0x0067AC70  DynamicVector::Constructor_VoxelAnim  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVector::Constructor_VoxelAnim(DynamicVector *this, int a2, int a3)
{
  *(_DWORD *)&this->DynamicVector_field_0x1[3] = 0; /*0x67ac79*/
  this->DynamicVector_field_0x8 = a2; /*0x67ac80*/
  this->__pad_C[0] = 1; /*0x67ac83*/
  this->__pad_C[1] = 0; /*0x67ac87*/
  *(_DWORD *)this->__pad_0 = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67ac8b*/
  if ( a2 ) /*0x67ac91*/
  {
    if ( a3 ) /*0x67ac99*/
    {
      *(_DWORD *)&this->DynamicVector_field_0x1[3] = a3; /*0x67ac9b*/
    }
    else
    {
      *(_DWORD *)&this->DynamicVector_field_0x1[3] = __2_YAPAXI_Z(4 * a2); /*0x67acac*/
      this->__pad_C[1] = 1; /*0x67acaf*/
    }
  }
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67acb3*/
  *(_DWORD *)this->__pad_14 = 10; /*0x67acb9*/
  this->DynamicVector_field_0x10 = 0; /*0x67acc0*/
  return this->__pad_0; /*0x67acc9*/
}



// ==== 0x0067ACD0  _DynamicVectorClass_PBVVoxelAnimTypeClass::Remove  this=DynamicVector  sig=csp ====
char __thiscall TypeList_VoxelAnim::Remove(_DynamicVectorClass_PBVVoxelAnimTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67acdc*/
  {
    LOBYTE(this->m_C) = 0; /*0x67ace2*/
    if ( a3 ) /*0x67ace8*/
      v4 = a3; /*0x67acfe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x67acfa*/
    LOBYTE(this->m_C) = 1; /*0x67ad02*/
    if ( !v4 ) /*0x67ad06*/
      return 0; /*0x67ad7a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x67ad08*/
    {
      m_8 = this->m_8; /*0x67ad0f*/
      if ( a2 < m_8 ) /*0x67ad14*/
        m_8 = a2; /*0x67ad16*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x67ad1c*/
        ++i; /*0x67ad21*/
      if ( BYTE1(this->m_C) ) /*0x67ad2e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x67ad39*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x67ad41*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x67ad4a*/
    this->m_8 = a2; /*0x67ad52*/
    BYTE1(this->m_C) = a3 == 0; /*0x67ad55*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVVoxelAnimTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x67ad5e*/
  }
  v7 = this->m_8; /*0x67ad61*/
  if ( v7 < this->m_10 ) /*0x67ad69*/
    this->m_10 = v7; /*0x67ad6b*/
  return 1; /*0x67ad6e*/
}



// ==== 0x0067AD80  DynamicVector::Add2  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::Add2(DynamicVector *this, _DWORD *a2)
{
  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x67ad83*/
  result = (int)this->DynamicVector_field_0x10; /*0x67ad86*/
  if ( result < DynamicVector_field_0x8 /*0x67adad*/
    || (this->__pad_C[1] || !DynamicVector_field_0x8)
    && (result = *(_DWORD *)this->__pad_14, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (_BYTE)result) )
  {
    result = (int)this->DynamicVector_field_0x10; /*0x67adb5*/
    v5 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x67adb8*/
    this->DynamicVector_field_0x10 = (void *)(result + 1); /*0x67adbe*/
    *(_DWORD *)(v5 + 4 * result) = *a2; /*0x67adc8*/
    LOBYTE(result) = 1; /*0x67adcb*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x67adaf*/
  }
  return result; /*0x67adb1*/
}



// ==== 0x0067ADD0  _DynamicVectorClass_PBVVoxelAnimTypeClass::GetSize  this=DynamicVector  sig=csp ====
int __thiscall TypeList_VoxelAnim::GetSize(_DynamicVectorClass_PBVVoxelAnimTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x67add0*/
  result = 0; /*0x67add3*/
  if ( m_10 <= 0 ) /*0x67add8*/
    return -1; /*0x67adef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x67adde*/
  {
    if ( ++result >= m_10 ) /*0x67aded*/
      return -1; /*0x67aded*/
  }
  return result; /*0x67adf2*/
}



// ==== 0x0067AE00  VectorClass::CopySmudge  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CopySmudge(VectorClass *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)a2 ) /*0x67ae0a*/
    return &this->vtable0; /*0x67ae0a*/
  (*((void (__thiscall **)(VectorClass *))this->vtable0 + 3))(this); /*0x67ae0e*/
  v3 = a2[2]; /*0x67ae11*/
  this->Capacity = v3; /*0x67ae16*/
  if ( !v3 ) /*0x67ae19*/
  {
    this->Items = 0; /*0x67ae5a*/
    this->IsAllocated = 0; /*0x67ae61*/
    return &this->vtable0; /*0x67ae65*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67ae23*/
  this->Items = v4; /*0x67ae2b*/
  if ( !v4 ) /*0x67ae30*/
    return &this->vtable0; /*0x67ae30*/
  Capacity = this->Capacity; /*0x67ae32*/
  v6 = 0; /*0x67ae35*/
  this->IsAllocated = 1; /*0x67ae39*/
  if ( Capacity <= 0 ) /*0x67ae3d*/
    return &this->vtable0; /*0x67ae3d*/
  do /*0x67ae51*/
  {
    *((_DWORD *)this->Items + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67ae48*/
    ++v6; /*0x67ae4e*/
  }
  while ( v6 < this->Capacity ); /*0x67ae51*/
  return &this->vtable0; /*0x67ae55*/
}



// ==== 0x0067AE70  _VectorClass_PBVSmudgeTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TypeList::AddRef(_VectorClass_PBVSmudgeTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x67ae72*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x67ae7d*/
  {
    v3 = 0; /*0x67ae7f*/
    if ( m_8 <= 0 ) /*0x67ae83*/
      return 1; /*0x67aea3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x67ae85*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x67ae8b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x67ae94*/
    {
      ++v3; /*0x67ae96*/
      ++v4; /*0x67ae97*/
      if ( v3 >= m_8 ) /*0x67ae9c*/
        return 1; /*0x67ae9c*/
    }
  }
  return 0; /*0x67ae9e*/
}



// ==== 0x0067AEB0  _VectorClass_PBVSmudgeTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall SmudgeTypeVector::Release(_VectorClass_PBVSmudgeTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x67aebc*/
  {
    LOBYTE(this->m_C) = 0; /*0x67aec6*/
    if ( a3 ) /*0x67aecc*/
      v4 = a3; /*0x67aee2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x67aede*/
    LOBYTE(this->m_C) = 1; /*0x67aee6*/
    if ( v4 ) /*0x67aeea*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x67aef5*/
      {
        m_8 = this->m_8; /*0x67aefc*/
        if ( a2 < m_8 ) /*0x67af01*/
          m_8 = a2; /*0x67af03*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x67af09*/
          ++i; /*0x67af0e*/
        if ( BYTE1(this->m_C) ) /*0x67af1b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x67af26*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x67af2e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x67af37*/
      this->m_8 = a2; /*0x67af3f*/
      BYTE1(this->m_C) = a3 == 0; /*0x67af42*/
      return 1; /*0x67af48*/
    }
    else
    {
      return 0; /*0x67aeef*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVSmudgeTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x67af52*/
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
int __thiscall SmudgeTypeVector::AddSmudge(_VectorClass_PBVSmudgeTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x67af90*/
    return 0; /*0x67af98*/
  m_8 = this->m_8; /*0x67af9e*/
  result = 0; /*0x67afa1*/
  if ( m_8 <= 0 ) /*0x67afa5*/
    return -1; /*0x67afbc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x67afab*/
  {
    if ( ++result >= m_8 ) /*0x67afba*/
      return -1; /*0x67afba*/
  }
  return result; /*0x67af9a*/
}



// ==== 0x0067AFD0  _VectorClass_PBVSmudgeTypeClass::Remove  this=VectorClass  sig=csp ====
unsigned int __thiscall SmudgeTypeVector::Remove(_VectorClass_PBVSmudgeTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x67afd0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x67afe5*/
  else
    return 0; /*0x67afd7*/
}



// ==== 0x0067AFF0  SmudgeTypeVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall SmudgeTypeVector::Construct(SmudgeTypeVector *this, int a2, int a3)
{
  this->SmudgeTypeVector_field_0x04 = 0; /*0x67aff9*/
  this->SmudgeTypeVector_field_0x08 = a2; /*0x67b000*/
  LOBYTE(this->SmudgeTypeVector_field_0x0C) = 1; /*0x67b003*/
  BYTE1(this->SmudgeTypeVector_field_0x0C) = 0; /*0x67b007*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67b00b*/
  if ( a2 ) /*0x67b011*/
  {
    if ( a3 ) /*0x67b019*/
    {
      this->SmudgeTypeVector_field_0x04 = a3; /*0x67b01b*/
    }
    else
    {
      this->SmudgeTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x67b02c*/
      BYTE1(this->SmudgeTypeVector_field_0x0C) = 1; /*0x67b02f*/
    }
  }
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67b033*/
  this->SmudgeTypeVector_field_0x14 = 10; /*0x67b039*/
  this->SmudgeTypeVector_field_0x10 = 0; /*0x67b040*/
  return this->__pad_0; /*0x67b049*/
}



// ==== 0x0067B050  _DynamicVectorClass_PBVSmudgeTypeClass::Release  this=DynamicVector  sig=csp ====
char __thiscall TypeList::Release(_DynamicVectorClass_PBVSmudgeTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67b05c*/
  {
    LOBYTE(this->m_C) = 0; /*0x67b062*/
    if ( a3 ) /*0x67b068*/
      v4 = a3; /*0x67b07e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x67b07a*/
    LOBYTE(this->m_C) = 1; /*0x67b082*/
    if ( !v4 ) /*0x67b086*/
      return 0; /*0x67b0fa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x67b088*/
    {
      m_8 = this->m_8; /*0x67b08f*/
      if ( a2 < m_8 ) /*0x67b094*/
        m_8 = a2; /*0x67b096*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x67b09c*/
        ++i; /*0x67b0a1*/
      if ( BYTE1(this->m_C) ) /*0x67b0ae*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x67b0b9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x67b0c1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x67b0ca*/
    this->m_8 = a2; /*0x67b0d2*/
    BYTE1(this->m_C) = a3 == 0; /*0x67b0d5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVSmudgeTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x67b0de*/
  }
  v7 = this->m_8; /*0x67b0e1*/
  if ( v7 < this->m_10 ) /*0x67b0e9*/
    this->m_10 = v7; /*0x67b0eb*/
  return 1; /*0x67b0ee*/
}



// ==== 0x0067B100  SmudgeTypeVector::Add  this=SmudgeTypeVector  sig=csp ====
char __thiscall SmudgeTypeVector::Add(SmudgeTypeVector *this, _DWORD *a2)
{
  int SmudgeTypeVector_field_0x08; // ecx
  int SmudgeTypeVector_field_0x14; // eax
  int SmudgeTypeVector_field_0x10; // eax
  int SmudgeTypeVector_field_0x04; // edx

  SmudgeTypeVector_field_0x08 = this->SmudgeTypeVector_field_0x08; /*0x67b103*/
  if ( this->SmudgeTypeVector_field_0x10 >= SmudgeTypeVector_field_0x08 ) /*0x67b10b*/
  {
    if ( !BYTE1(this->SmudgeTypeVector_field_0x0C) && SmudgeTypeVector_field_0x08 ) /*0x67b116*/
      return 0; /*0x67b116*/
    SmudgeTypeVector_field_0x14 = this->SmudgeTypeVector_field_0x14; /*0x67b118*/
    if ( SmudgeTypeVector_field_0x14 <= 0 /*0x67b128*/
      || !(*(unsigned __int8 (__thiscall **)(SmudgeTypeVector *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
            this,
            SmudgeTypeVector_field_0x08 + SmudgeTypeVector_field_0x14,
            0) )
    {
      return 0; /*0x67b12f*/
    }
  }
  SmudgeTypeVector_field_0x10 = this->SmudgeTypeVector_field_0x10; /*0x67b135*/
  SmudgeTypeVector_field_0x04 = this->SmudgeTypeVector_field_0x04; /*0x67b138*/
  this->SmudgeTypeVector_field_0x10 = SmudgeTypeVector_field_0x10 + 1; /*0x67b13e*/
  *(_DWORD *)(SmudgeTypeVector_field_0x04 + 4 * SmudgeTypeVector_field_0x10) = *a2; /*0x67b148*/
  return 1; /*0x67b131*/
}



// ==== 0x0067B150  _DynamicVectorClass_PBVSmudgeTypeClass::TypeList_vt04  this=DynamicVector  sig=csp ====
int __thiscall TypeList_VoxelAnim::TypeList_vt04(_DynamicVectorClass_PBVSmudgeTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x67b150*/
  result = 0; /*0x67b153*/
  if ( m_10 <= 0 ) /*0x67b158*/
    return -1; /*0x67b16f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x67b15e*/
  {
    if ( ++result >= m_10 ) /*0x67b16d*/
      return -1; /*0x67b16d*/
  }
  return result; /*0x67b172*/
}



// ==== 0x0067B180  VectorClass::CopyBuilding  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CopyBuilding(VectorClass *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (VectorClass *)a2 ) /*0x67b18a*/
    return &this->vtable0; /*0x67b18a*/
  (*((void (__thiscall **)(VectorClass *))this->vtable0 + 3))(this); /*0x67b18e*/
  v3 = a2[2]; /*0x67b191*/
  this->Capacity = v3; /*0x67b196*/
  if ( !v3 ) /*0x67b199*/
  {
    this->Items = 0; /*0x67b1da*/
    this->IsAllocated = 0; /*0x67b1e1*/
    return &this->vtable0; /*0x67b1e5*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67b1a3*/
  this->Items = v4; /*0x67b1ab*/
  if ( !v4 ) /*0x67b1b0*/
    return &this->vtable0; /*0x67b1b0*/
  Capacity = this->Capacity; /*0x67b1b2*/
  v6 = 0; /*0x67b1b5*/
  this->IsAllocated = 1; /*0x67b1b9*/
  if ( Capacity <= 0 ) /*0x67b1bd*/
    return &this->vtable0; /*0x67b1bd*/
  do /*0x67b1d1*/
  {
    *((_DWORD *)this->Items + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67b1c8*/
    ++v6; /*0x67b1ce*/
  }
  while ( v6 < this->Capacity ); /*0x67b1d1*/
  return &this->vtable0; /*0x67b1d5*/
}



// ==== 0x0067B1F0  _VectorClass_PBVTerrainTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TypeList_cptr_TerrainTypeClass::AddRef(_VectorClass_PBVTerrainTypeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x67b1f2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x67b1fd*/
  {
    v3 = 0; /*0x67b1ff*/
    if ( m_8 <= 0 ) /*0x67b203*/
      return 1; /*0x67b223*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x67b205*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x67b20b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x67b214*/
    {
      ++v3; /*0x67b216*/
      ++v4; /*0x67b217*/
      if ( v3 >= m_8 ) /*0x67b21c*/
        return 1; /*0x67b21c*/
    }
  }
  return 0; /*0x67b21e*/
}



// ==== 0x0067B230  _VectorClass_PBVTerrainTypeClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall TypeList_cptr_TerrainTypeClass::SetCapacity(_VectorClass_PBVTerrainTypeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x67b23c*/
  {
    LOBYTE(this->m_C) = 0; /*0x67b246*/
    if ( a3 ) /*0x67b24c*/
      v4 = a3; /*0x67b262*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x67b25e*/
    LOBYTE(this->m_C) = 1; /*0x67b266*/
    if ( v4 ) /*0x67b26a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x67b275*/
      {
        m_8 = this->m_8; /*0x67b27c*/
        if ( a2 < m_8 ) /*0x67b281*/
          m_8 = a2; /*0x67b283*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x67b289*/
          ++i; /*0x67b28e*/
        if ( BYTE1(this->m_C) ) /*0x67b29b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x67b2a6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x67b2ae*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x67b2b7*/
      this->m_8 = a2; /*0x67b2bf*/
      BYTE1(this->m_C) = a3 == 0; /*0x67b2c2*/
      return 1; /*0x67b2c8*/
    }
    else
    {
      return 0; /*0x67b26f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVTerrainTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x67b2d2*/
    return 1; /*0x67b2d8*/
  }
}



// ==== 0x0067B2E0  _VectorClass_PBVTerrainTypeClass::TryFreeAndClear  this=VectorClass  sig=csp ====
void __thiscall TypeList_cptr_TerrainTypeClass::TryFreeAndClear(_VectorClass_PBVTerrainTypeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x67b2ed*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x67b2f3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67b2fb*/
  }
  BYTE1(this->m_C) = 0; /*0x67b2fe*/
  this->m_8 = 0; /*0x67b301*/
}



// ==== 0x0067B310  _VectorClass_PBVTerrainTypeClass::IndexOf  this=VectorClass  sig=csp ====
int __thiscall TypeList_cptr_TerrainTypeClass::IndexOf(_VectorClass_PBVTerrainTypeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x67b310*/
    return 0; /*0x67b318*/
  m_8 = this->m_8; /*0x67b31e*/
  result = 0; /*0x67b321*/
  if ( m_8 <= 0 ) /*0x67b325*/
    return -1; /*0x67b33c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x67b32b*/
  {
    if ( ++result >= m_8 ) /*0x67b33a*/
      return -1; /*0x67b33a*/
  }
  return result; /*0x67b31a*/
}



// ==== 0x0067B350  _VectorClass_PBVTerrainTypeClass::PointerToIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall TypeList_cptr_TerrainTypeClass::PointerToIndex(_VectorClass_PBVTerrainTypeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x67b350*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x67b365*/
  else
    return 0; /*0x67b357*/
}



// ==== 0x0067B370  TerrainTypeVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall TerrainTypeVector::Construct(TerrainTypeVector *this, int a2, int a3)
{
  this->Items = 0; /*0x67b379*/
  this->Capacity = a2; /*0x67b380*/
  this->IsInitialized = 1; /*0x67b383*/
  this->IsAllocated = 0; /*0x67b387*/
  *this = (TerrainTypeVector)&VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67b38b*/
  if ( a2 ) /*0x67b391*/
  {
    if ( a3 ) /*0x67b399*/
    {
      this->Items = a3; /*0x67b39b*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x67b3ac*/
      this->IsAllocated = 1; /*0x67b3af*/
    }
  }
  *this = (TerrainTypeVector)&DynamicVectorClass<TerrainTypeClass const *>::`vftable'; /*0x67b3b3*/
  *((_DWORD *)this + 5) = 10; /*0x67b3b9*/
  this->Items = 0; /*0x67b3c0*/
  return this; /*0x67b3c9*/
}



// ==== 0x0067B3D0  _DynamicVectorClass_PBVTerrainTypeClass::Remove  this=DynamicVector  sig=csp ====
char __thiscall TypeList_cptr_TerrainTypeClass::Remove(
        _DynamicVectorClass_PBVTerrainTypeClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67b3dc*/
  {
    LOBYTE(this->m_C) = 0; /*0x67b3e2*/
    if ( a3 ) /*0x67b3e8*/
      v4 = a3; /*0x67b3fe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x67b3fa*/
    LOBYTE(this->m_C) = 1; /*0x67b402*/
    if ( !v4 ) /*0x67b406*/
      return 0; /*0x67b47a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x67b408*/
    {
      m_8 = this->m_8; /*0x67b40f*/
      if ( a2 < m_8 ) /*0x67b414*/
        m_8 = a2; /*0x67b416*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x67b41c*/
        ++i; /*0x67b421*/
      if ( BYTE1(this->m_C) ) /*0x67b42e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x67b439*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x67b441*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x67b44a*/
    this->m_8 = a2; /*0x67b452*/
    BYTE1(this->m_C) = a3 == 0; /*0x67b455*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVTerrainTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x67b45e*/
  }
  v7 = this->m_8; /*0x67b461*/
  if ( v7 < this->m_10 ) /*0x67b469*/
    this->m_10 = v7; /*0x67b46b*/
  return 1; /*0x67b46e*/
}



// ==== 0x0067B480  RulesClass::readAI  this=RulesClass  sig=csp ====
int __thiscall RulesClass::readAI(RulesClass *this, _DWORD *a2)
{
  int DetailBufferZoneWidth; // ecx
  int result; // eax
  int DetailMinFrameRateMovie; // edx

  DetailBufferZoneWidth = this->DetailBufferZoneWidth; /*0x67b483*/
  result = (int)this->LargeVisceroid; /*0x67b486*/
  if ( result < DetailBufferZoneWidth /*0x67b4ad*/
    || (BYTE1(this->AmmoCrateDamage) || !DetailBufferZoneWidth)
    && (result = (int)this->SmallVisceroid, result > 0)
    && (result = (*(int (__thiscall **)(RulesClass *, int, _DWORD))(this->DetailMinFrameRateNormal + 8))(
                   this,
                   DetailBufferZoneWidth + result,
                   0),
        (_BYTE)result) )
  {
    result = (int)this->LargeVisceroid; /*0x67b4b5*/
    DetailMinFrameRateMovie = this->DetailMinFrameRateMovie; /*0x67b4b8*/
    this->LargeVisceroid = (UnitTypeClass *)(result + 1); /*0x67b4be*/
    *(_DWORD *)(DetailMinFrameRateMovie + 4 * result) = *a2; /*0x67b4c8*/
    LOBYTE(result) = 1; /*0x67b4cb*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x67b4af*/
  }
  return result; /*0x67b4b1*/
}



// ==== 0x0067B4D0  _DynamicVectorClass_PBVTerrainTypeClass::GetSize  this=DynamicVector  sig=csp ====
int __thiscall TypeList_cptr_TerrainTypeClass::GetSize(_DynamicVectorClass_PBVTerrainTypeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x67b4d0*/
  result = 0; /*0x67b4d3*/
  if ( m_10 <= 0 ) /*0x67b4d8*/
    return -1; /*0x67b4ef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x67b4de*/
  {
    if ( ++result >= m_10 ) /*0x67b4ed*/
      return -1; /*0x67b4ed*/
  }
  return result; /*0x67b4f2*/
}



// ==== 0x0067B500  SmallFunc_67B500  this=-  sig=csp ====
int __fastcall SmallFunc_67B500(unsigned __int8 ***a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a1, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67b51e*/
    return WarheadTypeClass::FindOrCreate(Destination); /*0x67b52b*/
  else
    return a4; /*0x67b539*/
}



// ==== 0x0067B550  ReadINIClassBuildingTypeList  this=VectorClass  sig=csp ====
VectorClass *__fastcall ReadINIClassBuildingTypeList(
        VectorClass *a1,
        unsigned __int8 ***a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        VectorClass *a5)
{
  char *i; // eax
  int v7; // edi
  int v8; // eax
  void *v9; // ecx
  void *Items; // eax
  bool v11; // zf
  int Capacity; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  VectorClass v17; // [esp+Ch] [ebp-9Ch] BYREF
  int v18; // [esp+1Ch] [ebp-8Ch]
  int v19; // [esp+20h] [ebp-88h]
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a2, a3, a4, &g_INI_DefaultBuffer, String, 128) ) /*0x67b57c*/
  {
    VectorClass::BuildingTypeConstructor(&v17, 0, 0); /*0x67b591*/
    v19 = 10; /*0x67b59a*/
    v18 = 0; /*0x67b5a8*/
    v17.vtable0 = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x67b5ac*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x67b5be*/
    {
      if ( !*i ) /*0x67b5c0*/
        break; /*0x67b5c2*/
      v7 = BuildingTypeClass::FindOrCreate(i); /*0x67b5cb*/
      if ( v7 /*0x67b5fb*/
        && (v18 < v17.Capacity
         || (v17.IsAllocated || !v17.Capacity)
         && v19 > 0
         && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v17.vtable0 + 2))(
              &v17,
              v19 + v17.Capacity,
              0)) )
      {
        v8 = v18++; /*0x67b606*/
        *((_DWORD *)v17.Items + v8) = v7; /*0x67b611*/
      }
    }
    a1->Items = 0; /*0x67b62d*/
    a1->Capacity = 0; /*0x67b630*/
    a1->IsInitialized = 1; /*0x67b633*/
    a1->IsAllocated = 0; /*0x67b637*/
    a1->vtable0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x67b63a*/
    VectorClass::CopyBuilding(a1, &v17); /*0x67b640*/
    a1->vtable0 = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x67b645*/
    v17.vtable0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x67b64b*/
    v9 = (void *)v19; /*0x67b657*/
    a1[1].vtable0 = (void *)v18; /*0x67b65b*/
    Items = v17.Items; /*0x67b65e*/
    v11 = v17.Items == 0; /*0x67b662*/
    a1[1].Items = v9; /*0x67b664*/
    if ( !v11 && v17.IsAllocated ) /*0x67b671*/
    {
      __3_YAXPAX_Z(Items); /*0x67b678*/
      return a1; /*0x67b68b*/
    }
  }
  else
  {
    a1->Items = 0; /*0x67b699*/
    a1->Capacity = 0; /*0x67b69c*/
    a1->IsInitialized = 1; /*0x67b69f*/
    a1->IsAllocated = 0; /*0x67b6a3*/
    a1->vtable0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x67b6a6*/
    if ( a1 != a5 ) /*0x67b6ac*/
    {
      DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)a1); /*0x67b6b0*/
      Capacity = a5->Capacity; /*0x67b6b6*/
      a1->Capacity = Capacity; /*0x67b6bb*/
      if ( Capacity ) /*0x67b6be*/
      {
        v14 = __2_YAPAXI_Z(4 * Capacity); /*0x67b6c8*/
        a1->Items = (void *)v14; /*0x67b6d2*/
        if ( v14 ) /*0x67b6d5*/
        {
          v15 = a1->Capacity; /*0x67b6d7*/
          v16 = 0; /*0x67b6da*/
          a1->IsAllocated = 1; /*0x67b6de*/
          if ( v15 > 0 ) /*0x67b6e2*/
          {
            do /*0x67b6f6*/
            {
              *((_DWORD *)a1->Items + v16) = *((_DWORD *)a5->Items + v16); /*0x67b6ed*/
              ++v16; /*0x67b6f3*/
            }
            while ( v16 < a1->Capacity ); /*0x67b6f6*/
          }
        }
      }
      else
      {
        a1->Items = 0; /*0x67b6fa*/
        a1->IsAllocated = 0; /*0x67b6fd*/
      }
    }
    a1[1].vtable0 = a5[1].vtable0; /*0x67b703*/
    a1[1].Items = a5[1].Items; /*0x67b709*/
    a1->vtable0 = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x67b70c*/
  }
  return a1; /*0x67b682*/
}



// ==== 0x0067B720  BuildingClass::LoadBuildingTypes  this=VectorClass  sig=csp ====
VectorClass *__fastcall BuildingClass::LoadBuildingTypes(
        VectorClass *a1,
        unsigned __int8 ***a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        VectorClass *a5)
{
  char *i; // eax
  int Alt; // edi
  int v8; // eax
  int UnitTypeVector_field_0x14; // ecx
  void *UnitTypeVector_field_0x04; // eax
  bool v11; // zf
  int Capacity; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  UnitTypeVector v17; // [esp+Ch] [ebp-9Ch] BYREF
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a2, a3, a4, &g_INI_DefaultBuffer, String, 128) ) /*0x67b74c*/
  {
    UnitTypeVector::ConstructUnitTypeVectorClass(&v17, 0, 0); /*0x67b761*/
    v17.UnitTypeVector_field_0x14 = 10; /*0x67b76a*/
    v17.UnitTypeVector_field_0x10 = 0; /*0x67b778*/
    *(_DWORD *)v17.__pad_0 = &TypeList<UnitTypeClass const *>::`vftable'; /*0x67b77c*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x67b78e*/
    {
      if ( !*i ) /*0x67b790*/
        break; /*0x67b792*/
      Alt = BuildingTypeClass::FindOrCreateAlt(i); /*0x67b79b*/
      if ( Alt /*0x67b7cb*/
        && (v17.UnitTypeVector_field_0x10 < v17.UnitTypeVector_field_0x08
         || (BYTE1(v17.UnitTypeVector_field_0x0C) || !v17.UnitTypeVector_field_0x08)
         && v17.UnitTypeVector_field_0x14 > 0
         && (*(unsigned __int8 (__thiscall **)(UnitTypeVector *, int, _DWORD))(*(_DWORD *)v17.__pad_0 + 8))(
              &v17,
              v17.UnitTypeVector_field_0x14 + v17.UnitTypeVector_field_0x08,
              0)) )
      {
        v8 = v17.UnitTypeVector_field_0x10++; /*0x67b7d6*/
        *(_DWORD *)(v17.UnitTypeVector_field_0x04 + 4 * v8) = Alt; /*0x67b7e1*/
      }
    }
    a1->Items = 0; /*0x67b7fd*/
    a1->Capacity = 0; /*0x67b800*/
    a1->IsInitialized = 1; /*0x67b803*/
    a1->IsAllocated = 0; /*0x67b807*/
    a1->vtable0 = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x67b80a*/
    VectorClass::CopyConstructor(a1, &v17); /*0x67b810*/
    a1->vtable0 = &TypeList<UnitTypeClass const *>::`vftable'; /*0x67b815*/
    *(_DWORD *)v17.__pad_0 = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x67b81b*/
    UnitTypeVector_field_0x14 = v17.UnitTypeVector_field_0x14; /*0x67b827*/
    a1[1].vtable0 = (void *)v17.UnitTypeVector_field_0x10; /*0x67b82b*/
    UnitTypeVector_field_0x04 = (void *)v17.UnitTypeVector_field_0x04; /*0x67b82e*/
    v11 = v17.UnitTypeVector_field_0x04 == 0; /*0x67b832*/
    a1[1].Items = (void *)UnitTypeVector_field_0x14; /*0x67b834*/
    if ( !v11 && BYTE1(v17.UnitTypeVector_field_0x0C) ) /*0x67b841*/
    {
      __3_YAXPAX_Z(UnitTypeVector_field_0x04); /*0x67b848*/
      return a1; /*0x67b85b*/
    }
  }
  else
  {
    a1->Items = 0; /*0x67b869*/
    a1->Capacity = 0; /*0x67b86c*/
    a1->IsInitialized = 1; /*0x67b86f*/
    a1->IsAllocated = 0; /*0x67b873*/
    a1->vtable0 = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x67b876*/
    if ( a1 != a5 ) /*0x67b87c*/
    {
      Vector::Destructor((_VectorClass_PBVUnitTypeClass *)a1); /*0x67b880*/
      Capacity = a5->Capacity; /*0x67b886*/
      a1->Capacity = Capacity; /*0x67b88b*/
      if ( Capacity ) /*0x67b88e*/
      {
        v14 = __2_YAPAXI_Z(4 * Capacity); /*0x67b898*/
        a1->Items = (void *)v14; /*0x67b8a2*/
        if ( v14 ) /*0x67b8a5*/
        {
          v15 = a1->Capacity; /*0x67b8a7*/
          v16 = 0; /*0x67b8aa*/
          a1->IsAllocated = 1; /*0x67b8ae*/
          if ( v15 > 0 ) /*0x67b8b2*/
          {
            do /*0x67b8c6*/
            {
              *((_DWORD *)a1->Items + v16) = *((_DWORD *)a5->Items + v16); /*0x67b8bd*/
              ++v16; /*0x67b8c3*/
            }
            while ( v16 < a1->Capacity ); /*0x67b8c6*/
          }
        }
      }
      else
      {
        a1->Items = 0; /*0x67b8ca*/
        a1->IsAllocated = 0; /*0x67b8cd*/
      }
    }
    a1[1].vtable0 = a5[1].vtable0; /*0x67b8d3*/
    a1[1].Items = a5[1].Items; /*0x67b8d9*/
    a1->vtable0 = &TypeList<UnitTypeClass const *>::`vftable'; /*0x67b8dc*/
  }
  return a1; /*0x67b852*/
}



// ==== 0x0067B8F0  HouseTypeClass::ReadCountryName  this=VectorClass  sig=csp ====
int __fastcall HouseTypeClass::ReadCountryName(
        int a1,
        unsigned __int8 ***a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        _DWORD *a5)
{
  char *i; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  AircraftTypeVector v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a2, a3, a4, &g_INI_DefaultBuffer, String, 128) ) /*0x67b91c*/
  {
    AircraftTypeVector::Constructor(&v17, 0, 0); /*0x67b931*/
    v22 = 10; /*0x67b93a*/
    v21 = 0; /*0x67b948*/
    v17 = (AircraftTypeVector)&TypeList<AircraftTypeClass const *>::`vftable'; /*0x67b94c*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x67b95e*/
    {
      if ( !*i ) /*0x67b960*/
        break; /*0x67b962*/
      v7 = KeywordClass::FindOrCreate(i); /*0x67b96b*/
      if ( v7 /*0x67b99b*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && (*(unsigned __int8 (__thiscall **)(AircraftTypeVector *, int, _DWORD))(*(_DWORD *)&v17 + 8))(
              &v17,
              v22 + v19,
              0)) )
      {
        v8 = v21++; /*0x67b9a6*/
        *((_DWORD *)Block + v8) = v7; /*0x67b9b1*/
      }
    }
    *(_DWORD *)(a1 + 4) = 0; /*0x67b9cd*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67b9d0*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67b9d3*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67b9d7*/
    *(_DWORD *)a1 = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x67b9da*/
    HouseTypeClass::readBaseDefense((HouseTypeClass *)a1, &v17); /*0x67b9e0*/
    *(_DWORD *)a1 = &TypeList<AircraftTypeClass const *>::`vftable'; /*0x67b9e5*/
    v17 = (AircraftTypeVector)&VectorClass<AircraftTypeClass const *>::`vftable'; /*0x67b9eb*/
    v9 = v22; /*0x67b9f7*/
    *(_DWORD *)(a1 + 16) = v21; /*0x67b9fb*/
    v10 = Block; /*0x67b9fe*/
    v11 = Block == 0; /*0x67ba02*/
    *(_DWORD *)(a1 + 20) = v9; /*0x67ba04*/
    if ( !v11 && v20 ) /*0x67ba11*/
    {
      __3_YAXPAX_Z(v10); /*0x67ba18*/
      return a1; /*0x67ba2b*/
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0; /*0x67ba39*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67ba3c*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67ba3f*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67ba43*/
    *(_DWORD *)a1 = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x67ba46*/
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
          v15 = *(_DWORD *)(a1 + 8); /*0x67ba77*/
          v16 = 0; /*0x67ba7a*/
          *(_BYTE *)(a1 + 13) = 1; /*0x67ba7e*/
          if ( v15 > 0 ) /*0x67ba82*/
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
    *(_DWORD *)a1 = &TypeList<AircraftTypeClass const *>::`vftable'; /*0x67baac*/
  }
  return a1; /*0x67ba22*/
}



// ==== 0x0067BAC0  GetINIClassInt  this=-  sig=csp ====
int __fastcall GetINIClassInt(unsigned __int8 ***a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a1, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67bade*/
    return KeywordType::FindOrCreate2(Destination); /*0x67baeb*/
  else
    return a4; /*0x67baf9*/
}



// ==== 0x0067BB10  ReadINIClassInfantryTypeList  this=VectorClass  sig=csp ====
int __fastcall ReadINIClassInfantryTypeList(
        int a1,
        unsigned __int8 ***a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        _DWORD *a5)
{
  char *i; // eax
  int v7; // edi
  int v8; // eax
  int InfantryTypeVector_field_0x14; // ecx
  void *InfantryTypeVector_field_0x04; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  InfantryTypeVector v17; // [esp+Ch] [ebp-9Ch] BYREF

  if ( INIClass::GetString( /*0x67bb3c*/
         (INIClass *)a2,
         a3,
         a4,
         &g_INI_DefaultBuffer,
         (char *)&v17.InfantryTypeVector_field_0x1C,
         128) )
  {
    InfantryTypeVector::Construct2(&v17, 0, 0); /*0x67bb51*/
    v17.InfantryTypeVector_field_0x14 = 10; /*0x67bb5a*/
    v17.InfantryTypeVector_field_0x10 = 0; /*0x67bb68*/
    *(_DWORD *)v17.__pad_0 = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x67bb6c*/
    for ( i = strtok((char *)&v17.InfantryTypeVector_field_0x1C, Str); i; i = strtok(0, Str) ) /*0x67bb7e*/
    {
      if ( !*i ) /*0x67bb80*/
        break; /*0x67bb82*/
      v7 = KeywordType::FindOrCreate2(i); /*0x67bb8b*/
      if ( v7 /*0x67bbbb*/
        && (v17.InfantryTypeVector_field_0x10 < v17.InfantryTypeVector_field_0x08
         || (BYTE1(v17.InfantryTypeVector_field_0x0C) || !v17.InfantryTypeVector_field_0x08)
         && v17.InfantryTypeVector_field_0x14 > 0
         && (*(unsigned __int8 (__thiscall **)(InfantryTypeVector *, int, _DWORD))(*(_DWORD *)v17.__pad_0 + 8))(
              &v17,
              v17.InfantryTypeVector_field_0x14 + v17.InfantryTypeVector_field_0x08,
              0)) )
      {
        v8 = v17.InfantryTypeVector_field_0x10++; /*0x67bbc6*/
        *(_DWORD *)(v17.InfantryTypeVector_field_0x04 + 4 * v8) = v7; /*0x67bbd1*/
      }
    }
    *(_DWORD *)(a1 + 4) = 0; /*0x67bbed*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67bbf0*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67bbf3*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67bbf7*/
    *(_DWORD *)a1 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x67bbfa*/
    HouseTypeClass::readStartInfantry((HouseTypeClass *)a1, &v17); /*0x67bc00*/
    *(_DWORD *)a1 = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x67bc05*/
    *(_DWORD *)v17.__pad_0 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x67bc0b*/
    InfantryTypeVector_field_0x14 = v17.InfantryTypeVector_field_0x14; /*0x67bc17*/
    *(_DWORD *)(a1 + 16) = v17.InfantryTypeVector_field_0x10; /*0x67bc1b*/
    InfantryTypeVector_field_0x04 = (void *)v17.InfantryTypeVector_field_0x04; /*0x67bc1e*/
    v11 = v17.InfantryTypeVector_field_0x04 == 0; /*0x67bc22*/
    *(_DWORD *)(a1 + 20) = InfantryTypeVector_field_0x14; /*0x67bc24*/
    if ( !v11 && BYTE1(v17.InfantryTypeVector_field_0x0C) ) /*0x67bc31*/
    {
      __3_YAXPAX_Z(InfantryTypeVector_field_0x04); /*0x67bc38*/
      return a1; /*0x67bc4b*/
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0; /*0x67bc59*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67bc5c*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67bc5f*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67bc63*/
    *(_DWORD *)a1 = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x67bc66*/
    if ( (_DWORD *)a1 != a5 ) /*0x67bc6c*/
    {
      Vector::Cleanup((_VectorClass_PBVInfantryTypeClass *)a1); /*0x67bc70*/
      v13 = a5[2]; /*0x67bc76*/
      *(_DWORD *)(a1 + 8) = v13; /*0x67bc7b*/
      if ( v13 ) /*0x67bc7e*/
      {
        v14 = __2_YAPAXI_Z(4 * v13); /*0x67bc88*/
        *(_DWORD *)(a1 + 4) = v14; /*0x67bc92*/
        if ( v14 ) /*0x67bc95*/
        {
          v15 = *(_DWORD *)(a1 + 8); /*0x67bc97*/
          v16 = 0; /*0x67bc9a*/
          *(_BYTE *)(a1 + 13) = 1; /*0x67bc9e*/
          if ( v15 > 0 ) /*0x67bca2*/
          {
            do /*0x67bcb6*/
            {
              *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v16) = *(_DWORD *)(a5[1] + 4 * v16); /*0x67bcad*/
              ++v16; /*0x67bcb3*/
            }
            while ( v16 < *(_DWORD *)(a1 + 8) ); /*0x67bcb6*/
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 4) = 0; /*0x67bcba*/
        *(_BYTE *)(a1 + 13) = 0; /*0x67bcbd*/
      }
    }
    *(_DWORD *)(a1 + 16) = a5[4]; /*0x67bcc3*/
    *(_DWORD *)(a1 + 20) = a5[5]; /*0x67bcc9*/
    *(_DWORD *)a1 = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x67bccc*/
  }
  return a1; /*0x67bc42*/
}



// ==== 0x0067BCE0  SmallFunc_67BCE0  this=-  sig=csp ====
int __fastcall SmallFunc_67BCE0(unsigned __int8 ***a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a1, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67bcfe*/
    return BuildingTypeClass::FindOrCreate(Destination); /*0x67bd0b*/
  else
    return a4; /*0x67bd19*/
}



// ==== 0x0067BD30  GetINIClassKeyword  this=-  sig=csp ====
int __fastcall GetINIClassKeyword(unsigned __int8 ***a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a1, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67bd4e*/
    return KeywordClass::FindOrCreate(Destination); /*0x67bd5b*/
  else
    return a4; /*0x67bd69*/
}



// ==== 0x0067BD80  SmallFunc_67BD80  this=-  sig=csp ====
int __fastcall SmallFunc_67BD80(unsigned __int8 ***a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a1, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x67bd9e*/
    return TerrainTypeClass::FindOrCreate(Destination); /*0x67bdab*/
  else
    return a4; /*0x67bdb9*/
}



// ==== 0x0067BDD0  RulesClass::LoadTypeList  this=VectorClass  sig=csp ====
void *__fastcall RulesClass::LoadTypeList(
        int a1,
        unsigned __int8 ***a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        _DWORD *a5)
{
  char *i; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  void **v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)a2, a3, a4, &g_INI_DefaultBuffer, String, 128) ) /*0x67bdfc*/
  {
    RulesClass::readIQ((RulesClass *)&v17, 0, 0); /*0x67be11*/
    v22 = 10; /*0x67be1a*/
    v21 = 0; /*0x67be28*/
    v17 = &TypeList<TerrainTypeClass const *>::`vftable'; /*0x67be2c*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x67be3e*/
    {
      if ( !*i ) /*0x67be40*/
        break; /*0x67be42*/
      v7 = TerrainTypeClass::FindOrCreate(i); /*0x67be4b*/
      if ( v7 /*0x67be7b*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v17[2])(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67be86*/
        *((_DWORD *)Block + v8) = v7; /*0x67be91*/
      }
    }
    *(_DWORD *)(a1 + 4) = 0; /*0x67bead*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67beb0*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67beb3*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67beb7*/
    *(_DWORD *)a1 = &VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67beba*/
    System_Load_67BFA0((ObjectClass *)a1, &v17); /*0x67bec0*/
    *(_DWORD *)a1 = &TypeList<TerrainTypeClass const *>::`vftable'; /*0x67bec5*/
    v17 = &VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67becb*/
    v9 = v22; /*0x67bed7*/
    *(_DWORD *)(a1 + 16) = v21; /*0x67bedb*/
    v10 = Block; /*0x67bede*/
    v11 = Block == 0; /*0x67bee2*/
    *(_DWORD *)(a1 + 20) = v9; /*0x67bee4*/
    if ( !v11 && v20 ) /*0x67bef1*/
    {
      __3_YAXPAX_Z(v10); /*0x67bef8*/
      return (void *)a1; /*0x67bf0b*/
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0; /*0x67bf19*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67bf1c*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67bf1f*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67bf23*/
    *(_DWORD *)a1 = &VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67bf26*/
    if ( (_DWORD *)a1 != a5 ) /*0x67bf2c*/
    {
      TypeList_cptr_TerrainTypeClass::TryFreeAndClear((_VectorClass_PBVTerrainTypeClass *)a1); /*0x67bf30*/
      v13 = a5[2]; /*0x67bf36*/
      *(_DWORD *)(a1 + 8) = v13; /*0x67bf3b*/
      if ( v13 ) /*0x67bf3e*/
      {
        v14 = __2_YAPAXI_Z(4 * v13); /*0x67bf48*/
        *(_DWORD *)(a1 + 4) = v14; /*0x67bf52*/
        if ( v14 ) /*0x67bf55*/
        {
          v15 = *(_DWORD *)(a1 + 8); /*0x67bf57*/
          v16 = 0; /*0x67bf5a*/
          *(_BYTE *)(a1 + 13) = 1; /*0x67bf5e*/
          if ( v15 > 0 ) /*0x67bf62*/
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
    *(_DWORD *)a1 = &TypeList<TerrainTypeClass const *>::`vftable'; /*0x67bf8c*/
  }
  return (void *)a1; /*0x67bf02*/
}



// ==== 0x0067BFA0  ObjectClass::System_Load_67BFA0  this=TOP  sig=csp ====
_DWORD *__thiscall System_Load_67BFA0(ObjectClass *this, _DWORD *a2)
{
  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  if ( this == (ObjectClass *)a2 ) /*0x67bfaa*/
    return &this->AbstractClass; /*0x67bfaa*/
  (*((void (__thiscall **)(ObjectClass *))this->AbstractClass + 3))(this); /*0x67bfae*/
  v3 = (void *)a2[2]; /*0x67bfb1*/
  this->? = v3; /*0x67bfb6*/
  if ( !v3 ) /*0x67bfb9*/
  {
    this->? = 0; /*0x67bffa*/
    BYTE1(this->?) = 0; /*0x67c001*/
    return &this->AbstractClass; /*0x67c005*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (_DWORD)v3); /*0x67bfc3*/
  this->? = v4; /*0x67bfcb*/
  if ( !v4 ) /*0x67bfd0*/
    return &this->AbstractClass; /*0x67bfd0*/
  vtable2 = this->?; /*0x67bfd2*/
  v6 = 0; /*0x67bfd5*/
  BYTE1(this->?) = 1; /*0x67bfd9*/
  if ( (int)vtable2 <= 0 ) /*0x67bfdd*/
    return &this->AbstractClass; /*0x67bfdd*/
  do /*0x67bff1*/
  {
    *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67bfe8*/
    ++v6; /*0x67bfee*/
  }
  while ( v6 < (int)this->? ); /*0x67bff1*/
  return &this->AbstractClass; /*0x67bff5*/
}



// ==== 0x0067C010  _VectorClass_PBVVoxelAnimTypeClass::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList_VoxelAnim::Constructor(_VectorClass_PBVVoxelAnimTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x67c013*/
  *(_DWORD *)this->__pad_0 = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67c016*/
  if ( v3 && BYTE1(this->m_C) ) /*0x67c020*/
  {
    __3_YAXPAX_Z(v3); /*0x67c028*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67c030*/
  }
  BYTE1(this->m_C) = 0; /*0x67c03b*/
  this->m_8 = 0; /*0x67c041*/
  if ( (a2 & 1) != 0 ) /*0x67c048*/
    __3_YAXPAX_Z(this); /*0x67c04b*/
  return this->__pad_0; /*0x67c055*/
}



// ==== 0x0067C060  _DynamicVectorClass_PBVVoxelAnimTypeClass::Add  this=DynamicVector  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_cptr_VoxelAnimTypeClass::Add(
        _DynamicVectorClass_PBVVoxelAnimTypeClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x67c063*/
  *(_DWORD *)this->__pad_0 = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67c066*/
  if ( v3 && BYTE1(this->m_C) ) /*0x67c070*/
  {
    __3_YAXPAX_Z(v3); /*0x67c078*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67c080*/
  }
  BYTE1(this->m_C) = 0; /*0x67c08b*/
  this->m_8 = 0; /*0x67c091*/
  if ( (a2 & 1) != 0 ) /*0x67c098*/
    __3_YAXPAX_Z(this); /*0x67c09b*/
  return this->__pad_0; /*0x67c0a5*/
}



// ==== 0x0067C0B0  _VectorClass_PBVSmudgeTypeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall SmudgeTypeVector::QueryInterface(_VectorClass_PBVSmudgeTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x67c0b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67c0b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x67c0c0*/
  {
    __3_YAXPAX_Z(v3); /*0x67c0c8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67c0d0*/
  }
  BYTE1(this->m_C) = 0; /*0x67c0db*/
  this->m_8 = 0; /*0x67c0e1*/
  if ( (a2 & 1) != 0 ) /*0x67c0e8*/
    __3_YAXPAX_Z(this); /*0x67c0eb*/
  return this->__pad_0; /*0x67c0f5*/
}



// ==== 0x0067C100  _DynamicVectorClass_PBVSmudgeTypeClass::Constructor_0  this=DynamicVector  sig=csp ====
_DWORD *__thiscall TypeList_VoxelAnim::Constructor_0(_DynamicVectorClass_PBVSmudgeTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x67c103*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67c106*/
  if ( v3 && BYTE1(this->m_C) ) /*0x67c110*/
  {
    __3_YAXPAX_Z(v3); /*0x67c118*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67c120*/
  }
  BYTE1(this->m_C) = 0; /*0x67c12b*/
  this->m_8 = 0; /*0x67c131*/
  if ( (a2 & 1) != 0 ) /*0x67c138*/
    __3_YAXPAX_Z(this); /*0x67c13b*/
  return this->__pad_0; /*0x67c145*/
}



// ==== 0x0067C150  _VectorClass_PBVTerrainTypeClass::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList_cptr_TerrainTypeClass::Constructor(_VectorClass_PBVTerrainTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x67c153*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67c156*/
  if ( v3 && BYTE1(this->m_C) ) /*0x67c160*/
  {
    __3_YAXPAX_Z(v3); /*0x67c168*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67c170*/
  }
  BYTE1(this->m_C) = 0; /*0x67c17b*/
  this->m_8 = 0; /*0x67c181*/
  if ( (a2 & 1) != 0 ) /*0x67c188*/
    __3_YAXPAX_Z(this); /*0x67c18b*/
  return this->__pad_0; /*0x67c195*/
}



// ==== 0x0067C1A0  _DynamicVectorClass_PBVTerrainTypeClass::Constructor_1  this=DynamicVector  sig=csp ====
_DWORD *__thiscall TypeList_VoxelAnim::Constructor_1(_DynamicVectorClass_PBVTerrainTypeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x67c1a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67c1a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x67c1b0*/
  {
    __3_YAXPAX_Z(v3); /*0x67c1b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x67c1c0*/
  }
  BYTE1(this->m_C) = 0; /*0x67c1cb*/
  this->m_8 = 0; /*0x67c1d1*/
  if ( (a2 & 1) != 0 ) /*0x67c1d8*/
    __3_YAXPAX_Z(this); /*0x67c1db*/
  return this->__pad_0; /*0x67c1e5*/
}



// ==== 0x0067C1F0  TypeList::CopyVoxelAnim  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList::CopyVoxelAnim(TypeList *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  this->? = 0; /*0x67c1fd*/
  this->? = 0; /*0x67c200*/
  this->? = 1; /*0x67c203*/
  this->? = 0; /*0x67c207*/
  this->DynamicVectorClass = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67c20a*/
  if ( this != (TypeList *)a2 ) /*0x67c210*/
  {
    Vector::Cleanup2((_VectorClass_PBVVoxelAnimTypeClass *)this); /*0x67c212*/
    v3 = a2[2]; /*0x67c218*/
    this->? = v3; /*0x67c21d*/
    if ( v3 ) /*0x67c220*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67c226*/
      this->? = v4; /*0x67c230*/
      if ( v4 ) /*0x67c233*/
      {
        Capacity = this->?; /*0x67c235*/
        v6 = 0; /*0x67c238*/
        this->? = 1; /*0x67c23c*/
        if ( Capacity > 0 ) /*0x67c240*/
        {
          do /*0x67c254*/
          {
            *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67c24b*/
            ++v6; /*0x67c251*/
          }
          while ( v6 < this->? ); /*0x67c254*/
        }
      }
    }
    else
    {
      this->? = 0; /*0x67c258*/
      this->? = 0; /*0x67c25b*/
    }
  }
  this->? = a2[4]; /*0x67c261*/
  this->? = a2[5]; /*0x67c267*/
  this->DynamicVectorClass = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x67c26a*/
  return &this->DynamicVectorClass; /*0x67c272*/
}



// ==== 0x0067C280  SmudgeTypeList::Copy  this=VectorClass  sig=csp ====
_DWORD *__thiscall SmudgeTypeList::Copy(SmudgeTypeList *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x67c28d*/
  this->Capacity = 0; /*0x67c290*/
  this->IsInitialized = 1; /*0x67c293*/
  this->IsAllocated = 0; /*0x67c297*/
  *this = (SmudgeTypeList)&VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67c29a*/
  if ( this != (SmudgeTypeList *)a2 ) /*0x67c2a0*/
  {
    VectorClass::ClearAndFree((int)this); /*0x67c2a2*/
    v3 = a2[2]; /*0x67c2a8*/
    this->Capacity = v3; /*0x67c2ad*/
    if ( v3 ) /*0x67c2b0*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67c2b6*/
      this->Items = v4; /*0x67c2c0*/
      if ( v4 ) /*0x67c2c3*/
      {
        v5 = this->Capacity; /*0x67c2c5*/
        v6 = 0; /*0x67c2c8*/
        this->IsAllocated = 1; /*0x67c2cc*/
        if ( v5 > 0 ) /*0x67c2d0*/
        {
          do /*0x67c2e4*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67c2db*/
            ++v6; /*0x67c2e1*/
          }
          while ( v6 < this->Capacity ); /*0x67c2e4*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x67c2e8*/
      this->IsAllocated = 0; /*0x67c2eb*/
    }
  }
  this->Items = (SmudgeTypeList)a2[4]; /*0x67c2f1*/
  *(this + 5) = (SmudgeTypeList)a2[5]; /*0x67c2f7*/
  *this = (SmudgeTypeList)&TypeList<SmudgeTypeClass const *>::`vftable'; /*0x67c2fa*/
  return this; /*0x67c302*/
}



// ==== 0x0067C310  VoxelAnimTypeVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VoxelAnimTypeVector::Constructor(VoxelAnimTypeVector *this, int a2, int a3)
{
  this->Items = 0; /*0x67c31b*/
  this->Capacity = a2; /*0x67c31e*/
  this->IsInitialized = 1; /*0x67c321*/
  this->IsAllocated = 0; /*0x67c325*/
  *this = (VoxelAnimTypeVector)&VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67c328*/
  if ( a2 ) /*0x67c32e*/
  {
    if ( a3 ) /*0x67c336*/
    {
      this->Items = a3; /*0x67c338*/
      return this; /*0x67c33e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x67c34d*/
    this->IsAllocated = 1; /*0x67c350*/
  }
  return this; /*0x67c33d*/
}



// ==== 0x0067C360  DynamicVector::RemoveAt  this=DynamicVector  sig=csp ====
char __thiscall DynamicVector::RemoveAt(DynamicVector *this, int a2)
{
  char *DynamicVector_field_0x10; // edx
  int v3; // eax
  char *v4; // edx

  DynamicVector_field_0x10 = (char *)this->DynamicVector_field_0x10; /*0x67c360*/
  v3 = a2; /*0x67c363*/
  if ( a2 >= (int)DynamicVector_field_0x10 ) /*0x67c369*/
    return 0; /*0x67c38c*/
  v4 = DynamicVector_field_0x10 - 1; /*0x67c36b*/
  this->DynamicVector_field_0x10 = v4; /*0x67c36e*/
  if ( a2 < (int)v4 ) /*0x67c371*/
  {
    do /*0x67c384*/
    {
      ++v3; /*0x67c377*/
      *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] /*0x67c37b*/
                                                                                         + 4 * v3);
    }
    while ( v3 < (int)this->DynamicVector_field_0x10 ); /*0x67c384*/
  }
  return 1; /*0x67c389*/
}



// ==== 0x0067C3A0  Game::LockMutex  this=VectorClass  sig=csp ====
_DWORD *__thiscall Game::LockMutex(Game *this, int a2, int a3)
{
  this->Game_field_0x4 = 0; /*0x67c3ab*/
  *(_DWORD *)this->__pad_8 = a2; /*0x67c3ae*/
  this->__pad_8[4] = 1; /*0x67c3b1*/
  this->__pad_8[5] = 0; /*0x67c3b5*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67c3b8*/
  if ( a2 ) /*0x67c3be*/
  {
    if ( a3 ) /*0x67c3c6*/
    {
      this->Game_field_0x4 = (AbstractClass *)a3; /*0x67c3c8*/
      return this->__pad_0; /*0x67c3ce*/
    }
    this->Game_field_0x4 = (AbstractClass *)__2_YAPAXI_Z(4 * a2); /*0x67c3dd*/
    this->__pad_8[5] = 1; /*0x67c3e0*/
  }
  return this->__pad_0; /*0x67c3cd*/
}



// ==== 0x0067C3F0  DynamicVector::RemoveAt2  this=DynamicVector  sig=csp ====
char __thiscall DynamicVector::RemoveAt2(DynamicVector *this, int a2)
{
  char *DynamicVector_field_0x10; // edx
  int v3; // eax
  char *v4; // edx

  DynamicVector_field_0x10 = (char *)this->DynamicVector_field_0x10; /*0x67c3f0*/
  v3 = a2; /*0x67c3f3*/
  if ( a2 >= (int)DynamicVector_field_0x10 ) /*0x67c3f9*/
    return 0; /*0x67c41c*/
  v4 = DynamicVector_field_0x10 - 1; /*0x67c3fb*/
  this->DynamicVector_field_0x10 = v4; /*0x67c3fe*/
  if ( a2 < (int)v4 ) /*0x67c401*/
  {
    do /*0x67c414*/
    {
      ++v3; /*0x67c407*/
      *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&this->DynamicVector_field_0x1[3] /*0x67c40b*/
                                                                                         + 4 * v3);
    }
    while ( v3 < (int)this->DynamicVector_field_0x10 ); /*0x67c414*/
  }
  return 1; /*0x67c419*/
}



// ==== 0x0067C430  RulesClass::readIQ  this=VectorClass  sig=csp ====
_DWORD *__thiscall RulesClass::readIQ(RulesClass *this, int a2, int a3)
{
  this->DetailMinFrameRateMovie = 0; /*0x67c43b*/
  this->DetailBufferZoneWidth = a2; /*0x67c43e*/
  LOBYTE(this->AmmoCrateDamage) = 1; /*0x67c441*/
  BYTE1(this->AmmoCrateDamage) = 0; /*0x67c445*/
  this->DetailMinFrameRateNormal = (int)&VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67c448*/
  if ( a2 ) /*0x67c44e*/
  {
    if ( a3 ) /*0x67c456*/
    {
      this->DetailMinFrameRateMovie = a3; /*0x67c458*/
      return &this->DetailMinFrameRateNormal; /*0x67c45e*/
    }
    this->DetailMinFrameRateMovie = __2_YAPAXI_Z(4 * a2); /*0x67c46d*/
    BYTE1(this->AmmoCrateDamage) = 1; /*0x67c470*/
  }
  return &this->DetailMinFrameRateNormal; /*0x67c45d*/
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
int __thiscall Stream::ReadOLEObjects(Stream *this)
{
  int result; // eax
  int v3; // ebx
  int v4; // [esp+10h] [ebp-8h] BYREF
  LPVOID ppvObj; // [esp+14h] [ebp-4h] BYREF

  result = ((int (__stdcall *)(Stream *, int *, int, _DWORD))this->m_Stream->m_Size)(this, &v4, 4, 0); /*0x67c6a4*/
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
        result = OleLoadFromStream((LPSTREAM)this, &IID_IUnknown, &ppvObj); /*0x67c6c6*/
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
_DWORD *__thiscall Power::UpdateAll(Power *this)
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
  void *v50; // eax
  void *v51; // edx
  int v53; // [esp+C0h] [ebp-Ch] BYREF
  void *v54; // [esp+C4h] [ebp-8h]
  void *v55; // [esp+C8h] [ebp-4h]

  v53 = 0; /*0x67c6f2*/
  v54 = 0; /*0x67c6fa*/
  v55 = 0; /*0x67c702*/
  Power::ComputeHousePowerChecksum((int)dword_A8B230, (unsigned int *)&v53); /*0x67c70a*/
  for ( i = 0; i < dword_A83CA8; ++i ) /*0x67c718*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A83C9C + i) + 52))(*((_DWORD *)dword_A83C9C + i), &v53); /*0x67c72a*/
  for ( j = 0; j < stru_A80220.?; ++j ) /*0x67c740*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)stru_A80220.? + j) + 52))( /*0x67c752*/
      *((_DWORD *)stru_A80220.? + j),
      &v53);
  for ( k = 0; k < dword_A83CF0; ++k ) /*0x67c768*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A83CE4 + k) + 52))(*((_DWORD *)dword_A83CE4 + k), &v53); /*0x67c77a*/
  for ( m = 0; m < FootClass_Array.?[2]; ++m ) /*0x67c790*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(FootClass_Array.? + 4 * m) + 52))( /*0x67c7a2*/
      *(_DWORD *)(FootClass_Array.? + 4 * m),
      &v53);
  for ( n = 0; n < dword_A8E358; ++n ) /*0x67c7b8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E34C + n) + 52))(*((_DWORD *)dword_A8E34C + n), &v53); /*0x67c7ca*/
  for ( ii = 0; ii < *(int *)&stru_A83D50.__pad_80[40]; ++ii ) /*0x67c7e0*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * ii) + 52))( /*0x67c7f2*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_80[28] + 4 * ii),
      &v53);
  for ( jj = 0; jj < dword_A83C78; ++jj ) /*0x67c808*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A83C6C + jj) + 52))( /*0x67c81a*/
      *((_DWORD *)dword_A83C6C + jj),
      &v53);
  for ( kk = 0; kk < stru_A8EB00.ObjectTypeClass[20]; ++kk ) /*0x67c830*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(stru_A8EB00.ObjectTypeClass[17] + 4 * kk) + 52))( /*0x67c842*/
      *(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * kk),
      &v53);
  for ( mm = 0; mm < dword_A8B228; ++mm ) /*0x67c858*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8B21C + mm) + 52))( /*0x67c86a*/
      *((_DWORD *)dword_A8B21C + mm),
      &v53);
  for ( nn = 0; nn < dword_A8E3A0; ++nn ) /*0x67c880*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E394 + nn) + 52))( /*0x67c892*/
      *((_DWORD *)dword_A8E394 + nn),
      &v53);
  for ( i1 = 0; i1 < dword_A8B210; ++i1 ) /*0x67c8a8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8B204 + i1) + 52))( /*0x67c8ba*/
      *((_DWORD *)dword_A8B204 + i1),
      &v53);
  for ( i2 = 0; i2 < dword_A8E9B8; ++i2 ) /*0x67c8d0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E9AC + i2) + 52))( /*0x67c8e2*/
      *((_DWORD *)dword_A8E9AC + i2),
      &v53);
  for ( i3 = 0; i3 < FootClass_Array.?[0]; ++i3 ) /*0x67c8f8*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(FootClass_Array.?[3] + 4 * i3) + 52))( /*0x67c90a*/
      *(_DWORD *)(FootClass_Array.?[3] + 4 * i3),
      &v53);
  for ( i4 = 0; i4 < dword_A8E8E0; ++i4 ) /*0x67c920*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E8D4 + i4) + 52))( /*0x67c932*/
      *((_DWORD *)dword_A8E8D4 + i4),
      &v53);
  for ( i5 = 0; i5 < *(int *)&stru_A8EB00.?[204]; ++i5 ) /*0x67c948*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * i5) + 52))( /*0x67c95a*/
      *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * i5),
      &v53);
  for ( i6 = 0; i6 < (int)FootClass_Array.?; ++i6 ) /*0x67c970*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)&FootClass_Array.?->ObjectClass + i6) + 52))( /*0x67c982*/
      *((_DWORD *)&FootClass_Array.?->ObjectClass + i6),
      &v53);
  for ( i7 = 0; i7 < *(int *)&FootClass_Array.?; ++i7 ) /*0x67c998*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(FootClass_Array.?[5] + 4 * i7) + 52))( /*0x67c9aa*/
      *(_DWORD *)(FootClass_Array.?[5] + 4 * i7),
      &v53);
  for ( i8 = 0; i8 < dword_8872C0; ++i8 ) /*0x67c9c0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_8872B4 + i8) + 52))( /*0x67c9d2*/
      *((_DWORD *)dword_8872B4 + i8),
      &v53);
  for ( i9 = 0; i9 < g_MultiplayerCleanup; ++i9 ) /*0x67c9e8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_B0E784 + i9) + 52))( /*0x67c9fa*/
      *((_DWORD *)dword_B0E784 + i9),
      &v53);
  for ( i10 = 0; i10 < g_GameObjectCleanup; ++i10 ) /*0x67ca10*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)g_TagClassCount + i10) + 52))( /*0x67ca22*/
      *((_DWORD *)g_TagClassCount + i10),
      &v53);
  for ( i11 = 0; i11 < *(int *)FootClass_Array.?; ++i11 ) /*0x67ca38*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(FootClass_Array.?[0] + 4 * i11) + 52))( /*0x67ca4a*/
      *(_DWORD *)(FootClass_Array.?[0] + 4 * i11),
      &v53);
  for ( i12 = 0; i12 < dword_A8EAF8; ++i12 ) /*0x67ca60*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8EAEC + i12) + 52))( /*0x67ca72*/
      *((_DWORD *)dword_A8EAEC + i12),
      &v53);
  for ( i13 = 0; i13 < dword_B0E668; ++i13 ) /*0x67ca88*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_B0E65C + i13) + 52))( /*0x67ca9a*/
      *((_DWORD *)dword_B0E65C + i13),
      &v53);
  for ( i14 = 0; i14 < g_BuildingLoadQueue_Array.?[54]; ++i14 ) /*0x67cab0*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(g_BuildingLoadQueue_Array.?[51] + 4 * i14) + 52))( /*0x67cac2*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[51] + 4 * i14),
      &v53);
  for ( i15 = 0; i15 < *(int *)&stru_A83D50.__pad_C8[40]; ++i15 ) /*0x67cad8*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * i15) + 52))( /*0x67caea*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * i15),
      &v53);
  for ( i16 = 0; i16 < stru_A8EB00.ObjectTypeClass[14]; ++i16 ) /*0x67cb00*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(stru_A8EB00.ObjectTypeClass[11] + 4 * i16) + 52))( /*0x67cb12*/
      *(_DWORD *)(stru_A8EB00.ObjectTypeClass[11] + 4 * i16),
      &v53);
  for ( i17 = 0; i17 < *(int *)&stru_88732C.__pad_1C[80]; ++i17 ) /*0x67cb28*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_88732C.__pad_1C[68] + 4 * i17) + 52))( /*0x67cb3a*/
      *(_DWORD *)(*(_DWORD *)&stru_88732C.__pad_1C[68] + 4 * i17),
      &v53);
  for ( i18 = 0; i18 < g_WarheadTypePool; ++i18 ) /*0x67cb50*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_8874C4 + i18) + 52))( /*0x67cb62*/
      *((_DWORD *)dword_8874C4 + i18),
      &v53);
  for ( i19 = 0; i19 < g_WeaponTypePool; ++i19 ) /*0x67cb78*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)g_WeaponTypeConfig + i19) + 52))( /*0x67cb8a*/
      *((_DWORD *)g_WeaponTypeConfig + i19),
      &v53);
  for ( i20 = 0; i20 < *(int *)&stru_A83D50.__pad_3C[28]; ++i20 ) /*0x67cba0*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * i20) + 52))( /*0x67cbb2*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * i20),
      &v53);
  for ( i21 = 0; i21 < *(int *)&stru_A83D50.__pad_80[8]; ++i21 ) /*0x67cbc8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)stru_A83D50.SuperClass_field_0x7C + i21) + 52))( /*0x67cbda*/
      *((_DWORD *)stru_A83D50.SuperClass_field_0x7C + i21),
      &v53);
  for ( i22 = 0; i22 < g_GameCleanupState; ++i22 ) /*0x67cbf0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8020C + i22) + 52))( /*0x67cc02*/
      *((_DWORD *)dword_A8020C + i22),
      &v53);
  for ( i23 = 0; i23 < (int)stru_A83D50.SuperClass_field_0x28; ++i23 ) /*0x67cc18*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * i23) + 52))( /*0x67cc2a*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * i23),
      &v53);
  for ( i24 = 0; i24 < dword_A83C90; ++i24 ) /*0x67cc40*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A83C84 + i24) + 52))( /*0x67cc52*/
      *((_DWORD *)dword_A83C84 + i24),
      &v53);
  for ( i25 = 0; i25 < *(int *)&stru_A8EB00.?[364]; ++i25 ) /*0x67cc68*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[352] + 4 * i25) + 52))( /*0x67cc7a*/
      *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[352] + 4 * i25),
      &v53);
  for ( i26 = 0; i26 < dword_B72618; ++i26 ) /*0x67cc90*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_B7260C + i26) + 52))( /*0x67cca2*/
      *((_DWORD *)dword_B7260C + i26),
      &v53);
  for ( i27 = 0; i27 < *(int *)&stru_A8EB00.?[68]; ++i27 ) /*0x67ccb8*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * i27) + 52))( /*0x67ccca*/
      *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * i27),
      &v53);
  for ( i28 = 0; i28 < *(int *)&stru_A83D50.__pad_3C[4]; ++i28 ) /*0x67cce0*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * i28) + 52))( /*0x67ccf2*/
      *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * i28),
      &v53);
  for ( i29 = 0; i29 < g_MissionQueueFrame.random[133]; ++i29 ) /*0x67cd08*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(g_MissionQueueFrame.random[130] + 4 * i29) + 52))( /*0x67cd1a*/
      *(_DWORD *)(g_MissionQueueFrame.random[130] + 4 * i29),
      &v53);
  for ( i30 = 0; i30 < FootClass_Array.?[2]; ++i30 ) /*0x67cd30*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(*(_DWORD *)&FootClass_Array.? + 4 * i30) + 52))( /*0x67cd42*/
      *(_DWORD *)(*(_DWORD *)&FootClass_Array.? + 4 * i30),
      &v53);
  for ( i31 = 0; i31 < FootClass_Array.?[0]; ++i31 ) /*0x67cd58*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(FootClass_Array.?[3] + 4 * i31) + 52))( /*0x67cd6a*/
      *(_DWORD *)(FootClass_Array.?[3] + 4 * i31),
      &v53);
  for ( i32 = 0; i32 < FootClass_Array.?[0]; ++i32 ) /*0x67cd80*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(FootClass_Array.?[0] + 4 * i32) + 52))( /*0x67cd92*/
      *(_DWORD *)(FootClass_Array.?[0] + 4 * i32),
      &v53);
  for ( i33 = 0; i33 < g_BuildingLoadQueue_Array.?[0]; ++i33 ) /*0x67cda8*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(g_BuildingLoadQueue_Array.?[2] + 4 * i33) + 52))( /*0x67cdba*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * i33),
      &v53);
  for ( i34 = 0; i34 < dword_8A3880; ++i34 ) /*0x67cdd0*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_8A3874 + i34) + 52))( /*0x67cde2*/
      *((_DWORD *)dword_8A3874 + i34),
      &v53);
  for ( i35 = 0; i35 < dword_A8E340; ++i35 ) /*0x67cdf8*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E334 + i35) + 52))( /*0x67ce0a*/
      *((_DWORD *)dword_A8E334 + i35),
      &v53);
  for ( i36 = 0; i36 < dword_A83CC8; ++i36 ) /*0x67ce20*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A83CBC + i36) + 52))( /*0x67ce32*/
      *((_DWORD *)dword_A83CBC + i36),
      &v53);
  for ( i37 = 0; i37 < dword_A8E328; ++i37 ) /*0x67ce48*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E31C + i37) + 52))( /*0x67ce5a*/
      *((_DWORD *)dword_A8E31C + i37),
      &v53);
  for ( i38 = 0; i38 < dword_A8E998; ++i38 ) /*0x67ce70*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)dword_A8E98C + i38) + 52))( /*0x67ce82*/
      *((_DWORD *)dword_A8E98C + i38),
      &v53);
  if ( dword_A83D4C ) /*0x67ce96*/
    Power::TimerProcess((int)dword_A83D4C->Object_field_0x30); /*0x67cea0*/
  Power::TimerProcess(*(int *)&stru_A8EB00.?[416]); /*0x67ceb0*/
  Power::TimerProcess(*(int *)&stru_A8EB00.?[228]); /*0x67cebf*/
  v50 = v54; /*0x67ceca*/
  this->Power_field_0x0 = v53; /*0x67cece*/
  v51 = v55; /*0x67ced0*/
  this->Power_field_0x4 = v50; /*0x67ced5*/
  this->Power_field_0x8 = v51; /*0x67cedb*/
  return &this->Power_field_0x0; /*0x67ced4*/
}



// ==== 0x0067CEF0  SaveScenarioClassGame_AdjustMPSaveFileName  this=char*  sig=csp ====
char __fastcall SaveScenarioClassGame_AdjustMPSaveFileName(LPCCH lpMultiByteStr, wchar_t *Source, int a3)
{
  int v6; // eax
  char v7; // bl
  ComPtr ppstgOpen[4]; // [esp+50h] [ebp-490h] BYREF
  wchar_t v9[506]; // [esp+ECh] [ebp-3F4h] BYREF

  Debug::Log(); /*0x67cf05*/
  *(_DWORD *)ppstgOpen[0].__pad_0 = 0; /*0x67cf1b*/
  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, (LPWSTR)&ppstgOpen[0].ComPtr_field_0x1C, 64); /*0x67cf1f*/
  ComPtr::ReleaseSimple(ppstgOpen); /*0x67cf29*/
  *(_DWORD *)ppstgOpen[0].__pad_0 = 0; /*0x67cf3e*/
  if ( StgCreateDocfile((const WCHAR *)&ppstgOpen[0].ComPtr_field_0x1C, 0x1012u, 0, (IStorage **)ppstgOpen) < 0 ) /*0x67cf4a*/
  {
    ComPtr::ReleaseSimple(ppstgOpen); /*0x67cf50*/
    return 0; /*0x67cf61*/
  }
  GameState::Reset((GameState *)v9); /*0x67cf6b*/
  Map_Save_681080((ObjectClass *)v9, dword_83D560); /*0x67cf7d*/
  Map_Save_6810A0((ObjectClass *)v9, Source); /*0x67cf8a*/
  Map_Save((ObjectClass *)v9, 1); /*0x67cf98*/
  Map_Save_6810D0((ObjectClass *)v9, *((wchar_t **)dword_A83D4C->Object_field_0x34 + 24)); /*0x67cfb1*/
  Map_Save_681110((ObjectClass *)v9, dword_A8B230[375].uniqueId); /*0x67cfca*/
  Map_Save_681130((ObjectClass *)v9, (int)dword_A8B230[130].vtable3); /*0x67cfe2*/
  Map_Save_6811C0((char *)v9, aSunExe); /*0x67cff3*/
  Map_Save_6812C0((ObjectClass *)v9, *(int *)&dword_A8B238); /*0x67d006*/
  CoFileTimeNow((FILETIME *)&ppstgOpen[0].ComPtr_field_0x14); /*0x67d010*/
  Map_Save_681280((ObjectClass *)v9, &ppstgOpen[0].ComPtr_field_0x14); /*0x67d022*/
  Map_Save_681200((ObjectClass *)v9, &ppstgOpen[0].ComPtr_field_0x14); /*0x67d033*/
  Map_Save_681240((ObjectClass *)v9, &ppstgOpen[0].ComPtr_field_0x14); /*0x67d044*/
  GameOptions::SaveLoad((int)v9, *(int **)ppstgOpen[0].__pad_0); /*0x67d055*/
  ppstgOpen[0].ComPtr_field_0x08 = 0; /*0x67d05a*/
  if ( !*(_DWORD *)ppstgOpen[0].__pad_0 ) /*0x67d064*/
    WinAPI::Wrapper(-2147467261); /*0x67d06b*/
  if ( (*(int (__stdcall **)(_DWORD, _UNKNOWN **, int, _DWORD, _DWORD, int *))(**(_DWORD **)ppstgOpen[0].__pad_0 + 12))( /*0x67d08d*/
         *(_DWORD *)ppstgOpen[0].__pad_0,
         &off_83D5A8,
         4114,
         0,
         0,
         &ppstgOpen[0].ComPtr_field_0x08) < 0 )
  {
    if ( ppstgOpen[0].ComPtr_field_0x08 ) /*0x67d095*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x08 + 8))(ppstgOpen[0].ComPtr_field_0x08); /*0x67d09a*/
    if ( *(_DWORD *)ppstgOpen[0].__pad_0 ) /*0x67d0a3*/
    {
LABEL_9:
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)ppstgOpen[0].__pad_0 + 8))(*(_DWORD *)ppstgOpen[0].__pad_0); /*0x67d0a9*/
      return 0; /*0x67d0bb*/
    }
    return 0; /*0x67d0a3*/
  }
  ppstgOpen[0].ComPtr_field_0x04 = 0; /*0x67d0c2*/
  Game::readIniSettings((Game *)&ppstgOpen[0].ComPtr_field_0x04); /*0x67d0c6*/
  if ( CoCreateInstance(&stru_7E9540, 0, 7u, &riid, (LPVOID *)&ppstgOpen[0].ComPtr_field_0x10) >= 0 ) /*0x67d0e5*/
  {
    if ( OleRun((LPUNKNOWN)ppstgOpen[0].ComPtr_field_0x10) >= 0 ) /*0x67d0f4*/
      (**(void (__stdcall ***)(int, IID *, int *))ppstgOpen[0].ComPtr_field_0x10)( /*0x67d107*/
        ppstgOpen[0].ComPtr_field_0x10,
        &stru_83D598,
        &ppstgOpen[0].ComPtr_field_0x04);
    (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x10 + 8))(ppstgOpen[0].ComPtr_field_0x10); /*0x67d110*/
  }
  if ( !ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d119*/
    WinAPI::Wrapper(-2147467261); /*0x67d120*/
  if ( (*(int (__stdcall **)(int, int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x04 + 12))( /*0x67d136*/
         ppstgOpen[0].ComPtr_field_0x04,
         ppstgOpen[0].ComPtr_field_0x08) < 0 )
  {
    Debug::Log(); /*0x67d13d*/
    if ( ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d14b*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x04 + 8))(ppstgOpen[0].ComPtr_field_0x04); /*0x67d150*/
    if ( ppstgOpen[0].ComPtr_field_0x08 ) /*0x67d159*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x08 + 8))(ppstgOpen[0].ComPtr_field_0x08); /*0x67d15e*/
    if ( *(_DWORD *)ppstgOpen[0].__pad_0 ) /*0x67d167*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)ppstgOpen[0].__pad_0 + 8))(*(_DWORD *)ppstgOpen[0].__pad_0); /*0x67d16c*/
    return 0; /*0x67d17b*/
  }
  ppstgOpen[0].ComPtr_field_0x0C = 0; /*0x67d182*/
  if ( ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d188*/
  {
    v6 = Game::validateScenario((Game *)&ppstgOpen[0].ComPtr_field_0x0C, &ppstgOpen[0].ComPtr_field_0x04); /*0x67d193*/
    if ( v6 < 0 && v6 != -2147467262 ) /*0x67d1a1*/
      WinAPI::Wrapper(v6); /*0x67d1a4*/
  }
  v7 = SaveGame::Start((SaveGame *)ppstgOpen[0].ComPtr_field_0x0C); /*0x67d1b4*/
  if ( !ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d1bc*/
    WinAPI::Wrapper(-2147467261); /*0x67d1c3*/
  if ( (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x04 + 16))( /*0x67d1d5*/
         ppstgOpen[0].ComPtr_field_0x04,
         0) < 0 )
  {
    if ( ppstgOpen[0].ComPtr_field_0x0C ) /*0x67d1dd*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x0C + 8))(ppstgOpen[0].ComPtr_field_0x0C); /*0x67d1e2*/
    if ( ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d1eb*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x04 + 8))(ppstgOpen[0].ComPtr_field_0x04); /*0x67d1f0*/
    if ( ppstgOpen[0].ComPtr_field_0x08 ) /*0x67d1f9*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x08 + 8))(ppstgOpen[0].ComPtr_field_0x08); /*0x67d1fe*/
    if ( *(_DWORD *)ppstgOpen[0].__pad_0 ) /*0x67d207*/
      goto LABEL_9; /*0x67d207*/
    return 0; /*0x67d207*/
  }
  if ( !ppstgOpen[0].ComPtr_field_0x08 ) /*0x67d228*/
    WinAPI::Wrapper(-2147467261); /*0x67d22f*/
  (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x08 + 8))(ppstgOpen[0].ComPtr_field_0x08); /*0x67d23b*/
  ppstgOpen[0].ComPtr_field_0x08 = 0; /*0x67d23e*/
  if ( !*(_DWORD *)ppstgOpen[0].__pad_0 ) /*0x67d248*/
    WinAPI::Wrapper(-2147467261); /*0x67d24f*/
  if ( (*(int (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)ppstgOpen[0].__pad_0 + 36))( /*0x67d261*/
         *(_DWORD *)ppstgOpen[0].__pad_0,
         0) < 0 )
  {
    if ( ppstgOpen[0].ComPtr_field_0x0C ) /*0x67d269*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x0C + 8))(ppstgOpen[0].ComPtr_field_0x0C); /*0x67d26e*/
    if ( ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d277*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x04 + 8))(ppstgOpen[0].ComPtr_field_0x04); /*0x67d27c*/
    if ( ppstgOpen[0].ComPtr_field_0x08 ) /*0x67d285*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x08 + 8))(ppstgOpen[0].ComPtr_field_0x08); /*0x67d28a*/
    if ( *(_DWORD *)ppstgOpen[0].__pad_0 ) /*0x67d293*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)ppstgOpen[0].__pad_0 + 8))(*(_DWORD *)ppstgOpen[0].__pad_0); /*0x67d298*/
    return 0; /*0x67d2a7*/
  }
  Debug::Log(); /*0x67d2b1*/
  if ( ppstgOpen[0].ComPtr_field_0x0C ) /*0x67d2bf*/
    (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x0C + 8))(ppstgOpen[0].ComPtr_field_0x0C); /*0x67d2c4*/
  if ( ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d2cd*/
    (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x04 + 8))(ppstgOpen[0].ComPtr_field_0x04); /*0x67d2d2*/
  if ( ppstgOpen[0].ComPtr_field_0x08 ) /*0x67d2db*/
    (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].ComPtr_field_0x08 + 8))(ppstgOpen[0].ComPtr_field_0x08); /*0x67d2e0*/
  if ( *(_DWORD *)ppstgOpen[0].__pad_0 ) /*0x67d2e9*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)ppstgOpen[0].__pad_0 + 8))(*(_DWORD *)ppstgOpen[0].__pad_0); /*0x67d2ee*/
  return v7; /*0x67cf57*/
}



// ==== 0x0067D300  SaveGame::Start  this=SaveGame  sig=csp ====
char __thiscall SaveGame::Start(SaveGame *this)
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
  in... [33906 chars total]



// ==== 0x0067E440  Game::LoadSaved  this=char*  sig=csp ====
char __thiscall LoadSavedGame(LPCCH lpMultiByteStr)
{
  int COM; // eax
  int *p_ppstgOpen; // ecx
  int v5; // eax
  IStorage *ppstgOpen; // [esp+3Ch] [ebp-508h] BYREF
  int v7; // [esp+40h] [ebp-504h] BYREF
  IStorage *v8; // [esp+44h] [ebp-500h] BYREF
  int v9; // [esp+48h] [ebp-4FCh] BYREF
  LPSTREAM pStm; // [esp+4Ch] [ebp-4F8h]
  WCHAR WideCharStr[64]; // [esp+50h] [ebp-4F4h] BYREF
  WCHAR pwcsName[64]; // [esp+D0h] [ebp-474h] BYREF
  _BYTE v13[1012]; // [esp+150h] [ebp-3F4h] BYREF

  Debug::Log(); /*0x67e452*/
  GameState::Reset(v13); /*0x67e461*/
  ppstgOpen = 0; /*0x67e47a*/
  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 64); /*0x67e47e*/
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
  dword_A8B238[0] = LoadOptions::GetFlag252(v13); /*0x67e4e8*/
  SwizzleManager::ConvertWrapper((int)&SwizzleManagerClass_Instance); /*0x67e4f2*/
  v8 = 0; /*0x67e4fe*/
  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, pwcsName, 64); /*0x67e50a*/
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
  if ( v8->lpVtbl->OpenStream(v8, (const OLECHAR *)&off_83D5A8, 0, 16, 0, (IStream **)&v9) >= 0 ) /*0x67e577*/
  {
    v7 = 0; /*0x67e5a6*/
    Game::readIniSettings(&v7); /*0x67e5aa*/
    if ( CoCreateInstance(&stru_7E9540, 0, 7u, &riid, (LPVOID *)&ppstgOpen) >= 0 ) /*0x67e5c9*/
    {
      if ( OleRun((LPUNKNOWN)ppstgOpen) >= 0 ) /*0x67e5d8*/
        ppstgOpen->lpVtbl->QueryInterface(ppstgOpen, &stru_83D598, (void **)&v7); /*0x67e5eb*/
      ppstgOpen->lpVtbl->Release(ppstgOpen); /*0x67e5f4*/
    }
    if ( !v7 ) /*0x67e5fd*/
      WinAPI::Wrapper(-2147467261); /*0x67e604*/
    (*(void (__stdcall **)(int, int))(*(_DWORD *)v7 + 12))(v7, v9); /*0x67e615*/
    pStm = 0; /*0x67e618*/
    if ( v7 ) /*0x67e620*/
    {
      v5 = Game::validateScenario(&v7); /*0x67e62b*/
      if ( v5 < 0 && v5 != -2147467262 ) /*0x67e639*/
        WinAPI::Wrapper(v5); /*0x67e63c*/
    }
    ProgressAnim::Init((int)dword_AC4F58, 0, 1079574528, 0, 0); /*0x67e64e*/
    LoadGame::Start(pStm); /*0x67e659*/
    if ( !v7 ) /*0x67e664*/
      WinAPI::Wrapper(-2147467261); /*0x67e66b*/
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v7 + 16))(v7, 0); /*0x67e678*/
    SwizzleManager::ConvertWrapper((int)&SwizzleManagerClass_Instance); /*0x67e680*/
    Game_Load(); /*0x67e685*/
    SidebarClass::InitButtons(&dword_87F7E8); /*0x67e68f*/
    TacticalClass::BuildCommandBar(&dword_87F7E8, (int)MultiByteToWideChar, 1); /*0x67e69f*/
    SidebarClass::LoadResources(); /*0x67e6a9*/
    BuildingClass::ClearOccupancyData(); /*0x67e6ae*/
    BuildingClass::ClearFactoryData(); /*0x67e6b3*/
    FogOfWar::Render((int **)&dword_87F7E8); /*0x67e6bd*/
    byte_A8ED5C = 1; /*0x67e6c4*/
    byte_A8E378 = 1; /*0x67e6ca*/
    ToggleDisplayMode(1); /*0x67e6d0*/
    LoadingScreen::FreeResources3(); /*0x67e6d5*/
    Debug::Log(); /*0x67e6e0*/
    if ( pStm ) /*0x67e6ee*/
      pStm->__pad_0->Release(pStm); /*0x67e6f3*/
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
char __thiscall LoadGame::Start(LoadGame *this)
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
  int v54; ... [31771 chars total]



// ==== 0x0067F7E0  SaveGame::LoadMainGameState  this=SaveGame  sig=csp ====
int __thiscall SaveGame::LoadMainGameState(SaveGame *this)
{
  int result; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // edx
  int v6; // edi
  int v7; // edx
  int v8; // edi
  int v9; // eax
  ParticleSystemClass *unk1Particles; // [esp+A0h] [ebp-4h] BYREF

  result = (*(int (__stdcall **)(SaveGame *, _BYTE *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f7f1*/
             this,
             &stru_A8EB00.?[404],
             4,
             0);
  if ( result >= 0 )
  {
    result = (*(int (__stdcall **)(SaveGame *, Object **, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f808*/
               this,
               &dword_A83D4C,
               4,
               0);
    if ( result >= 0 )
    {
      result = (*(int (__stdcall **)(SaveGame *, _BYTE *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f81f*/
                 this,
                 &stru_A8EB00.?[416],
                 4,
                 0);
      if ( result >= 0 )
      {
        v3 = *(_DWORD *)this->__pad_0; /*0x67f82f*/
        unk1Particles = *(ParticleSystemClass **)&stru_A8EB00.?[228]; /*0x67f83b*/
        result = (*(int (__stdcall **)(SaveGame *, ParticleSystemClass **, int, _DWORD))(v3 + 16))( /*0x67f83f*/
                   this,
                   &unk1Particles,
                   4,
                   0);
        if ( result >= 0 )
        {
          v4 = 0; /*0x67f84e*/
          if ( (int)unk1Particles <= 0 )
          {
LABEL_8:
            result = (*(int (__stdcall **)(SaveGame *, float *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f879*/
                       this,
                       flt_89EA40,
                       432,
                       0);
            if ( result >= 0 )
            {
              SuperWeaponClass::LoadFromSaveStream((SuperWeaponClass *)this); /*0x67f895*/
              v5 = *(_DWORD *)this->__pad_0; /*0x67f8a0*/
              unk1Particles = FootClass_Array.?; /*0x67f8ac*/
              result = (*(int (__stdcall **)(SaveGame *, ParticleSystemClass **, int, _DWORD))(v5 + 16))( /*0x67f8b0*/
                         this,
                         &unk1Particles,
                         4,
                         0);
              if ( result >= 0 )
              {
                v6 = 0; /*0x67f8bf*/
                if ( (int)unk1Particles <= 0 )
                {
LABEL_13:
                  v7 = *(_DWORD *)this->__pad_0; /*0x67f8ea*/
                  unk1Particles = (ParticleSystemClass *)FootClass_Array.?[0]; /*0x67f8fc*/
                  result = (*(int (__stdcall **)(SaveGame *, ParticleSystemClass **, int, _DWORD))(v7 + 16))( /*0x67f900*/
                             this,
                             &unk1Particles,
                             4,
                             0);
                  if ( result >= 0 )
                  {
                    v8 = 0; /*0x67f90f*/
                    if ( (int)unk1Particles <= 0 )
                    {
LABEL_17:
                      result = (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f93a*/
                                 this,
                                 dword_81DA8C,
                                 76,
                                 0);
                      if ( result >= 0 )
                      {
                        result = (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f959*/
                                   this,
                                   dword_81DAD8,
                                   76,
                                   0);
                        if ( result >= 0 )
                        {
                          result = (*(int (__stdcall **)(SaveGame *, double *, int, _DWORD))(*(_DWORD *)this->__pad_0 /*0x67f96f*/
                                                                                           + 16))(
                                     this,
                                     dbl_89EC28,
                                     152,
                                     0);
                          if ( result >= 0 )
                          {
                            result = (*(int (__stdcall **)(SaveGame *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 /*0x67f982*/
                                                                                           + 16))(
                                       this,
                                       byte_89ECC0,
                                       19,
                                       0);
                            if ( result >= 0 )
                            {
                              result = (*(int (__stdcall **)(SaveGame *, MissionClass *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f998*/
                                         this,
                                         &stru_A8E3A8,
                                         1024,
                                         0);
                              if ( result >= 0 )
                              {
                                v9 = (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f9ab*/
                                       this,
                                       &dword_B07784,
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
                        result = (*(int (__stdcall **)(SaveGame *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f926*/
                                   this,
                                   FootClass_Array.?[5] + 4 * v8,
                                   4,
                                   0);
                        if ( result < 0 ) /*0x67f92b*/
                          break; /*0x67f92b*/
                        if ( ++v8 >= (int)unk1Particles ) /*0x67f938*/
                          goto LABEL_17; /*0x67f938*/
                      }
                    }
                  }
                }
                else
                {
                  while ( 1 ) /*0x67f8d6*/
                  {
                    result = (*(int (__stdcall **)(SaveGame *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f8d6*/
                               this,
                               (char *)&FootClass_Array.?->ObjectClass + 4 * v6,
                               4,
                               0);
                    if ( result < 0 ) /*0x67f8db*/
                      break; /*0x67f8db*/
                    if ( ++v6 >= (int)unk1Particles ) /*0x67f8e8*/
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
              result = (*(int (__stdcall **)(SaveGame *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))( /*0x67f865*/
                         this,
                         *(_DWORD *)&stru_A8EB00.?[216] + 4 * v4,
                         4,
                         0);
              if ( result < 0 ) /*0x67f86a*/
                break; /*0x67f86a*/
              if ( ++v4 >= (int)unk1Particles ) /*0x67f877*/
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
int __thiscall Game::SerializeGameSaveState(Game *this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  int i; // edi
  int v6; // edi
  ParticleSystemClass *v7; // eax
  int j; // edi
  int v9; // edi
  int v10; // eax
  int k; // edi
  int v12; // eax
  int v13; // [esp+B8h] [ebp-8h] BYREF
  int v14; // [esp+BCh] [ebp-4h] BYREF

  result = (*(int (__stdcall **)(Game *, _BYTE *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67f9d3*/
             this,
             &stru_A8EB00.?[404],
             4,
             0);
  if ( result >= 0 )
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&stru_A8EB00.?[404]); /*0x67f9e8*/
    result = (*(int (__stdcall **)(Game *, Object **, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67f9f9*/
               this,
               &dword_A83D4C,
               4,
               0);
    if ( result >= 0 )
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&dword_A83D4C); /*0x67fa0e*/
      result = (*(int (__stdcall **)(Game *, _BYTE *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fa1f*/
                 this,
                 &stru_A8EB00.?[416],
                 4,
                 0);
      if ( result >= 0 )
      {
        result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v13, 4, 0); /*0x67fa36*/
        if ( result >= 0 )
        {
          v3 = 0; /*0x67fa45*/
          if ( v13 <= 0 )
          {
LABEL_14:
            for ( i = 0; i < *(int *)&stru_A8EB00.?[228]; ++i ) /*0x67face*/
              ObjectPtr::RegisterForTracking( /*0x67fade*/
                (int)&SwizzleManagerClass_Instance,
                (int *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * i));
            result = (*(int (__stdcall **)(Game *, float *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fafc*/
                       this,
                       flt_89EA40,
                       432,
                       0);
            if ( result >= 0 )
            {
              SuperWeapon::SerializeSuperWeaponState((SuperWeapon *)this); /*0x67fb09*/
              result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fb1a*/
                         this,
                         &v13,
                         4,
                         0);
              if ( result >= 0 )
              {
                v6 = 0; /*0x67fb29*/
                if ( v13 <= 0 )
                {
LABEL_27:
                  for ( j = 0; j < (int)FootClass_Array.?; ++j ) /*0x67fbb2*/
                    ObjectPtr::RegisterForTracking( /*0x67fbc2*/
                      (int)&SwizzleManagerClass_Instance,
                      (int *)&FootClass_Array.?->ObjectClass + j);
                  result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fbdd*/
                             this,
                             &v13,
                             4,
                             0);
                  if ( result >= 0 )
                  {
                    v9 = 0; /*0x67fbec*/
                    if ( v13 <= 0 )
                    {
LABEL_39:
                      for ( k = 0; k < FootClass_Array.?[0]; ++k ) /*0x67fc74*/
                        ObjectPtr::RegisterForTracking( /*0x67fc84*/
                          (int)&SwizzleManagerClass_Instance,
                          (int *)(FootClass_Array.?[5] + 4 * k));
                      result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fc9f*/
                                 this,
                                 dword_81DA8C,
                                 76,
                                 0);
                      if ( result >= 0 )
                      {
                        result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fcb2*/
                                   this,
                                   dword_81DAD8,
                                   76,
                                   0);
                        if ( result >= 0 )
                        {
                          result = (*(int (__stdcall **)(Game *, double *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fcc8*/
                                     this,
                                     dbl_89EC28,
                                     152,
                                     0);
                          if ( result >= 0 )
                          {
                            result = (*(int (__stdcall **)(Game *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fcdb*/
                                       this,
                                       byte_89ECC0,
                                       19,
                                       0);
                            if ( result >= 0 )
                            {
                              result = (*(int (__stdcall **)(Game *, MissionClass *, int, _DWORD))(*(_DWORD *)this->__pad_0 /*0x67fcf1*/
                                                                                                 + 12))(
                                         this,
                                         &stru_A8E3A8,
                                         1024,
                                         0);
                              if ( result >= 0 )
                              {
                                v12 = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fd04*/
                                        this,
                                        &dword_B07784,
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
                        result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fbfe*/
                                   this,
                                   &v14,
                                   4,
                                   0);
                        if ( result < 0 ) /*0x67fc03*/
                          break; /*0x67fc03*/
                        if ( FootClass_Array.?[0] < FootClass_Array.?[6] /*0x67fc3f*/
                          || (BYTE1(FootClass_Array.?[7]) || !FootClass_Array.?[6])
                          && FootClass_Array.?[1] > 0
                          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(FootClass_Array.?[4] + 8))(
                               &FootClass_Array.?[4],
                               FootClass_Array.?[6] + FootClass_Array.?[1],
                               0) )
                        {
                          v10 = FootClass_Array.?[0]++; /*0x67fc52*/
                          *(_DWORD *)(FootClass_Array.?[5] + 4 * v10) = v14; /*0x67fc5f*/
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
                    result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fb3b*/
                               this,
                               &v14,
                               4,
                               0);
                    if ( result < 0 ) /*0x67fb40*/
                      break; /*0x67fb40*/
                    if ( (int)FootClass_Array.? < (int)FootClass_Array.? /*0x67fb7d*/
                      || (BYTE1(FootClass_Array.?) || !FootClass_Array.?)
                      && FootClass_Array.?[0] > 0
                      && ((unsigned __int8 (__thiscall *)(ParticleSystemClass **, char *, _DWORD))FootClass_Array.?->?)(
                           &FootClass_Array.?,
                           (char *)FootClass_Array.? + FootClass_Array.?[0],
                           0) )
                    {
                      v7 = FootClass_Array.?++; /*0x67fb90*/
                      *((_DWORD *)&FootClass_Array.?->ObjectClass + (_DWORD)v7) = v14; /*0x67fb9d*/
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
              result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))( /*0x67fa57*/
                         this,
                         &v14,
                         4,
                         0);
              if ( result < 0 ) /*0x67fa5c*/
                break; /*0x67fa5c*/
              if ( *(int *)&stru_A8EB00.?[228] < *(int *)&stru_A8EB00.?[220] /*0x67fa99*/
                || (stru_A8EB00.?[225] || !*(_DWORD *)&stru_A8EB00.?[220])
                && *(int *)&stru_A8EB00.?[232] > 0
                && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[212] + 8))(
                     &stru_A8EB00.?[212],
                     *(_DWORD *)&stru_A8EB00.?[220] + *(_DWORD *)&stru_A8EB00.?[232],
                     0) )
              {
                v4 = (*(_DWORD *)&stru_A8EB00.?[228])++; /*0x67faac*/
                *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[216] + 4 * v4) = v14; /*0x67fab9*/
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
char __fastcall sub_67FD20(LPCCH lpMultiByteStr, int a2)
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
int __thiscall ComPtr::ReleaseSimple(ComPtr *this)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x67fdd0*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x67fdd0*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x67fdd9*/
  return result; /*0x67fddc*/
}



// ==== 0x0067FDE0  Game::readIniSettings  this=Game  sig=csp ====
int __thiscall Game::readIniSettings(Game *this)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x67fde0*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x67fde0*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x67fde9*/
  return result; /*0x67fdec*/
}



// ==== 0x0067FDF0  SaveGame_Start  this=-  sig=csp ====
HRESULT __fastcall sub_67FDF0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x67fe03*/
  v9 = *(_DWORD *)(a2 + 16); /*0x67fe09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x67fe0d*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x67fe56*/
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
HRESULT __fastcall sub_67FE70(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x67fe83*/
  v9 = *(_DWORD *)(a2 + 16); /*0x67fe89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x67fe8d*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x67fed6*/
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
HRESULT __fastcall sub_67FEF0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x67ff03*/
  v9 = *(_DWORD *)(a2 + 16); /*0x67ff09*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x67ff0d*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x67ff56*/
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
HRESULT __fastcall sub_67FF70(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x67ff83*/
  v9 = *(_DWORD *)(a2 + 16); /*0x67ff89*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x67ff8d*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x67ffd6*/
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
HRESULT __fastcall sub_67FFF0(LPSTREAM pStm, int a2)
{
  struct IStreamVtbl *lpVtbl; // ecx
  HRESULT result; // eax
  int v6; // esi
  int v7; // eax
  LPPERSISTSTREAM pPStm; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  lpVtbl = pStm->__pad_0; /*0x680003*/
  v9 = *(_DWORD *)(a2 + 16); /*0x680009*/
  result = lpVtbl->Write(pStm, &v9, 4, 0); /*0x68000d*/
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
        result = pPStm->__tail_0->Release(pPStm); /*0x680056*/
        if ( result < 0 ) /*0x68005b*/
          break; /*0x68005b*/
        if ( ++v6 >= v9 ) /*0x680064*/
          return 0; /*0x680064*/
      }
    }
  }
  return result; /*0x680068*/
}


