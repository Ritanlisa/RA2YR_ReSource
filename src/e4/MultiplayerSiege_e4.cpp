// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x5CA680
int MultiplayerSiege::Read()
{
{
  char result; // al

  result = PlayerClass::AssignPlayerIndex(); /*0x5ca680*/
  if ( result ) /*0x5ca687*/
  {
    result = 1; /*0x5ca690*/
    if ( Game_PlayerCount > 0 ) /*0x5ca697*/
    {
      int v1 = 1; /*0x5ca6a1*/
      for ( *(_DWORD *)(*(_DWORD *)Game_PlayerInfoArray + 107) = 1; /*0x5ca6ae*/
            v1 < Game_PlayerCount;
            *(_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4) + 107) = 2 )
      {
        ++v1; /*0x5ca6bc*/
      }
    }
  }
  return result; /*0x5ca689*/
}

// 0x5CA6D0
int MultiplayerSiege::Write(void ** a1)
{
{
  char result; // al
  wchar_t *StringCSF; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  result = ScenarioClass::MissionStubReturnZero2((int)a1); /*0x5ca6d9*/
  if ( result ) /*0x5ca6e0*/
  {
    char v2 = 0; /*0x5ca6ef*/
    int v3 = 0; /*0x5ca6f1*/
    int v4 = 0; /*0x5ca6f3*/
    if ( Game_PlayerCount <= 0 ) /*0x5ca6f7*/
    {
LABEL_12:
      StringCSF = GetStringCSF(aMpNodefender, 0, g_Str_File_MPSiege_cpp, 65); /*0x5ca724*/
      WideString::Assign_Alt(a1, StringCSF); /*0x5ca73a*/
      return 0; /*0x5ca742*/
    }
    else
    {
      int v5 = Game_PlayerInfoArray; /*0x5ca6f9*/
      do /*0x5ca71e*/
      {
        int v6 = *(_DWORD *)(*(_DWORD *)v5 + 107); /*0x5ca701*/
        if ( v6 ) /*0x5ca707*/
        {
          int v7 = v6 - 1; /*0x5ca709*/
          if ( v7 ) /*0x5ca70a*/
          {
            if ( v7 != 1 ) /*0x5ca70d*/
            {
              v9 = GetStringCSF(aMpIllegalteam, 0, g_Str_File_MPSiege_cpp, 60); /*0x5ca756*/
              WideString::Assign_Alt(a1, v9); /*0x5ca75e*/
              return 0; /*0x5ca769*/
            }
            ++v3; /*0x5ca70f*/
          }
          else
          {
            if ( v2 ) /*0x5ca714*/
            {
              v10 = GetStringCSF(aMpOnlyonebesei, 0, g_Str_File_MPSiege_cpp, 51); /*0x5ca77a*/
              WideString::Assign_Alt(a1, v10); /*0x5ca782*/
              return 0; /*0x5ca78d*/
            }
            v2 = 1; /*0x5ca716*/
          }
        }
        ++v4; /*0x5ca718*/
        v5 += 4; /*0x5ca719*/
      }
      while ( v4 < Game_PlayerCount ); /*0x5ca71e*/
      if ( !v2 ) /*0x5ca722*/
        goto LABEL_12; /*0x5ca722*/
      if ( v3 >= 1 ) /*0x5ca793*/
      {
        return 1; /*0x5ca7bc*/
      }
      else
      {
        v11 = GetStringCSF(aMpNoattackers, 0, g_Str_File_MPSiege_cpp, 70); /*0x5ca7a3*/
        WideString::Assign_Alt(a1, v11); /*0x5ca7ab*/
        return 0; /*0x5ca7b3*/
      }
    }
  }
  return result; /*0x5ca6e3*/
}

// 0x5CA800
AbstractClass * * MultiplayerSiege::ProcessTurn(char a2)
{
{
  AbstractClass *v5; // eax
  int v6; // eax
  ObjectClass *v7; // ebx
  AbstractClass *v8; // eax
  int i; // esi
  _DWORD v13[4]; // [esp+10h] [ebp-28h] BYREF
  void **v14; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  char v16; // [esp+2Dh] [ebp-Bh]
  Multiplayer::FindStartPositions(&v14); /*0x5ca811*/
  int v3 = 0; /*0x5ca81c*/
  memset(v13, 0, sizeof(v13)); /*0x5ca824*/
  if ( Game_PlayerCount > 0 ) /*0x5ca836*/
  {
    int v4 = Game_PlayerInfoArray; /*0x5ca838*/
    do /*0x5ca848*/
    {
      if ( *(_DWORD *)(*(_DWORD *)v4 + 107) == 1 ) /*0x5ca840*/
        break; /*0x5ca840*/
      ++v3; /*0x5ca842*/
      v4 += 4; /*0x5ca843*/
    }
    while ( v3 < Game_PlayerCount ); /*0x5ca848*/
  }
  if ( v3 >= Game_PlayerCount ) /*0x5ca84c*/
  {
    v5 = Block; /*0x5ca84e*/
    v14 = &vt_VectorClass_Cell; /*0x5ca852*/
    if ( !Block || !v16 ) /*0x5ca868*/
      return 0; /*0x5ca868*/
    goto LABEL_26; /*0x5ca868*/
  }
  v6 = *(_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * v3) + 111); /*0x5ca876*/
  if ( v6 < 0 || v6 >= HouseClass_Count ) /*0x5ca887*/
  {
    v5 = Block; /*0x5ca980*/
    v14 = &vt_VectorClass_Cell; /*0x5ca984*/
    if ( !Block || !v16 ) /*0x5ca996*/
      return 0; /*0x5ca996*/
LABEL_26:
    __3_YAXPAX_Z(v5); /*0x5ca998*/
    return 0; /*0x5ca9a4*/
  }
  v7 = *(_DWORD **)&HouseClass_Array->__pad_0[4 * v6]; /*0x5ca893*/
  if ( *(_BYTE *)(v7[13] + 422) ) /*0x5ca899*/
  {
    v5 = Block; /*0x5ca8a3*/
    v14 = &vt_VectorClass_Cell; /*0x5ca8a7*/
    if ( !Block || !v16 ) /*0x5ca8bd*/
      return 0; /*0x5ca8bd*/
    goto LABEL_26; /*0x5ca8bd*/
  }
  Debug::Log(); /*0x5ca8d2*/
  v8 = *(_DWORD *)Block; /*0x5ca8e0*/
  LOBYTE(v13[0]) = 1; /*0x5ca8e2*/
  HouseClass::SetMapSeed(v7, v8); /*0x5ca8e8*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x5ca8f6*/
  {
    ObjectClass *v10 = *(_DWORD **)&HouseClass_Array->__pad_0[4 * i]; /*0x5ca8fe*/
    if ( !*(_BYTE *)(v10[13] + 422) && v10 != v7 ) /*0x5ca910*/
    {
      Debug::Log(); /*0x5ca91c*/
  int *v11; // eax
      v11 = (int *)this->FindStartingCell(/*0x5ca939*/
                     this, &a2, i, &v14, v13);
      HouseClass::SetMapSeed(v10, *v11); /*0x5ca944*/
    }
  }
  v14 = &vt_VectorClass_Cell; /*0x5ca957*/
  if ( Block && v16 ) /*0x5ca969*/
    __3_YAXPAX_Z(Block); /*0x5ca96c*/
  return 1; /*0x5ca974*/
}

// 0x5CA7E0
char MultiplayerSiege::StubReturnFalse()
{
return 0;
}

// 0x5CA9B0
char MultiplayerSiege::CheckStatus(int a1)
{
{
    wchar_t **v1;
    wchar_t **v2;
    int v3;
    int v4;
    int v5;
    int v6;
    wchar_t **v7;
    wchar_t **v8;
    int v9;
    int v10;
    int v11;
    int v12;
    wchar_t **v13;
    wchar_t **v14;
    int v15;
    int v16;
    int v17;
    v1 = (wchar_t **)__2_YAPAXI_Z(0xCu);
    if ( v1 )
    v2 = MPCombatTeam::Constructor(v1);
    else
    v2 = 0;
    v3 = *(int *)(a1 + 8);
    if ( *(int *)(a1 + 16) < v3 || (*(char *)(a1 + 13) || !v3) && (v4 = *(int *)(a1 + 20), v4 > 0) && (*(unsigned char (__thiscall **)(int, int, int))(*(int *)(a1) + 8))(a1, v3 + v4, 0) )
  {
    v5 = *(int *)(a1 + 16);
    v6 = *(int *)(a1 + 4);
    *(int *)(a1 + 16) = v5 + 1;
    *(int *)(v6 + 4 * v5) = v2;
  }
    v7 = (wchar_t **)__2_YAPAXI_Z(0xCu);
    if ( v7 )
    v8 = MPCombatTeam::MPTeam(v7);
    else
    v8 = 0;
    v9 = *(int *)(a1 + 8);
    if ( *(int *)(a1 + 16) < v9 || (*(char *)(a1 + 13) || !v9) && (v10 = *(int *)(a1 + 20), v10 > 0) && (*(unsigned char (__thiscall **)(int, int, int))(*(int *)(a1) + 8))(a1, v9 + v10, 0) )
  {
    v11 = *(int *)(a1 + 16);
    v12 = *(int *)(a1 + 4);
    *(int *)(a1 + 16) = v11 + 1;
    *(int *)(v12 + 4 * v11) = v8;
  }
    v13 = (wchar_t **)__2_YAPAXI_Z(0xCu);
    if ( v13 )
    v14 = MPCombatTeam::Constructor2(v13);
    else
    v14 = 0;
    v15 = *(int *)(a1 + 8);
    if ( *(int *)(a1 + 16) < v15 || ((LOBYTE(v16) = *(char *)(a1 + 13), (char)v16) || !v15) && (v16 = *(int *)(a1 + 20), v16 > 0) && (LOBYTE(v16) = (*(int (__thiscall **)(int, int, int))(*(int *)(a1) + 8))(a1, v15 + v16, 0), (char)v16) )
  {
    v16 = *(int *)(a1 + 16);
    v17 = *(int *)(a1 + 4);
    *(int *)(a1 + 16) = v16 + 1;
    *(int *)(v17 + 4 * v16) = v14;
  }
    return v16;
}
}

// 0x5CAAC0
char MultiplayerSiege::GetResult(unsigned int * ppv, int a2)
{
{
    int v2;
    int v3;
    int *BuildableFromArray;
    void *v6;
    int *v7;
    int *v8;
    int v9;
    int *StartCoords;
    short *CurrentOption;
    int v12[3];
    v2 = 0;
    if ( Game_PlayerCount > 0 )
  {
    v3 = Game_PlayerInfoArray;
    do
    {
    if ( *(int *)(*(int *)(v3) + 111) == ppv[12] )
    break;
    ++v2;
    v3 += 4;
    }
    while ( v2 < Game_PlayerCount );
  }
    if ( v2 >= Game_PlayerCount )
  {
    AI::CreateMCV(ppv, a2);
    return 0;
  }
    if ( *(int *)(*(int *)(Game_PlayerInfoArray + 4 * v2) + 107) != 1 )
    return AI::CreateMCV(ppv, a2);
    BuildableFromArray = HouseClass::FirstBuildableFromArray(ppv, (int)&g_RulesClass_Instance->IvanWarhead[1]);
    if ( !BuildableFromArray )
    return 0;
    v6 = __2_YAPAXI_Z(0x720u);
    if ( !v6 )
    return 0;
    v7 = (int *)BuildingClass::Construct((int)v6, (int)BuildableFromArray, (int)ppv);
    v8 = v7;
    if ( !v7 )
    return 0;
    v9 = *v7;
    StartCoords = HouseClass::GetStartCoords(ppv, v12);
    if ( (*(unsigned char (__thiscall **)(int *, int *, int))(v9 + 216))(v8, StartCoords, 0) )
    return 1;
    CurrentOption = (short *)HouseClass::GetCurrentOption(ppv, &a2);
    if ( FindInfantryDeployPosition(v8, CurrentOption, 1) )
    return 1;
    (*(void (__thiscall **)(int *, int))(*v8 + 32))(v8, 1);
    return 0;
}
}

// 0x5CABD0
MultiplayerSiege * MultiplayerSiege::QueryInterface(char a2)
{
{
    *(void**)this = &vt_MultiplayerSiege;
    MultiplayerGameMode::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MultiplayerSiege *)this;
}
}
