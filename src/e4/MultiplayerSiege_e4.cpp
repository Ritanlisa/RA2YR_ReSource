// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5CA680
char MultiplayerSiege::Read()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char MultiplayerSiege::_vt04()
{
  char result; // al
  int v1; // ecx

  result = PlayerClass::AssignPlayerIndex(); /*0x5ca680*/
  if ( result ) /*0x5ca687*/
  {
    result = 1; /*0x5ca690*/
    if ( MEMORY[0xA8DA84] > 0 ) /*0x5ca697*/
    {
      v1 = 1; /*0x5ca6a1*/
      for ( *(_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 107) = 1; /*0x5ca6ae*/
            v1 < MEMORY[0xA8DA84];
            *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4) + 107) = 2 )
      {
        ++v1; /*0x5ca6bc*/
      }
    }
  }
  return result; /*0x5ca689*/
}
}

// 0x5CA6D0
char MultiplayerSiege::Write(void ** a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall MultiplayerSiege::_vt05(void **a1)
{
  char result; // al
  char v2; // bl
  int v3; // edi
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax

  result = ScenarioClass::MissionStubReturnZero2((int)a1); /*0x5ca6d9*/
  if ( result ) /*0x5ca6e0*/
  {
    v2 = 0; /*0x5ca6ef*/
    v3 = 0; /*0x5ca6f1*/
    v4 = 0; /*0x5ca6f3*/
    if ( MEMORY[0xA8DA84] <= 0 ) /*0x5ca6f7*/
    {
LABEL_12:
      StringCSF = GetStringCSF(aMpNodefender, 0, g_Str_File_MPSiege_cpp, 65); /*0x5ca724*/
      WideString::Assign_Alt(a1, StringCSF); /*0x5ca73a*/
      return 0; /*0x5ca742*/
    }
    else
    {
      v5 = MEMORY[0xA8DA78]; /*0x5ca6f9*/
      do /*0x5ca71e*/
      {
        v6 = *(_DWORD *)(*(_DWORD *)v5 + 107); /*0x5ca701*/
        if ( v6 ) /*0x5ca707*/
        {
          v7 = v6 - 1; /*0x5ca709*/
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
      while ( v4 < MEMORY[0xA8DA84] ); /*0x5ca71e*/
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
}

// 0x5CA800
char MultiplayerSiege::ProcessTurn(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MultiplayerSiege::_vt33(void *this, char a2)
{
  int v3; // eax
  int v4; // edx
  void *v5; // eax
  int v6; // eax
  _DWORD *v7; // ebx
  int v8; // eax
  int i; // esi
  _DWORD *v10; // edi
  int *v11; // eax
  _DWORD v13[4]; // [esp+10h] [ebp-28h] BYREF
  void **v14; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  char v16; // [esp+2Dh] [ebp-Bh]

  Multiplayer::FindStartPositions(&v14); /*0x5ca811*/
  v3 = 0; /*0x5ca81c*/
  memset(v13, 0, sizeof(v13)); /*0x5ca824*/
  if ( MEMORY[0xA8DA84] > 0 ) /*0x5ca836*/
  {
    v4 = MEMORY[0xA8DA78]; /*0x5ca838*/
    do /*0x5ca848*/
    {
      if ( *(_DWORD *)(*(_DWORD *)v4 + 107) == 1 ) /*0x5ca840*/
        break; /*0x5ca840*/
      ++v3; /*0x5ca842*/
      v4 += 4; /*0x5ca843*/
    }
    while ( v3 < MEMORY[0xA8DA84] ); /*0x5ca848*/
  }
  if ( v3 >= MEMORY[0xA8DA84] ) /*0x5ca84c*/
  {
    v5 = Block; /*0x5ca84e*/
    v14 = &VectorClass<Cell>::`vftable'; /*0x5ca852*/
    if ( !Block || !v16 ) /*0x5ca868*/
      return 0; /*0x5ca868*/
    goto LABEL_26; /*0x5ca868*/
  }
  v6 = *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v3) + 111); /*0x5ca876*/
  if ( v6 < 0 || v6 >= HouseClass_Count ) /*0x5ca887*/
  {
    v5 = Block; /*0x5ca980*/
    v14 = &VectorClass<Cell>::`vftable'; /*0x5ca984*/
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
    v14 = &VectorClass<Cell>::`vftable'; /*0x5ca8a7*/
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
    v10 = *(_DWORD **)&HouseClass_Array->__pad_0[4 * i]; /*0x5ca8fe*/
    if ( !*(_BYTE *)(v10[13] + 422) && v10 != v7 ) /*0x5ca910*/
    {
      Debug::Log(); /*0x5ca91c*/
      v11 = (int *)(*(int (__thiscall **)(void *, char *, int, void ***, _DWORD *))(*(_DWORD *)this + 196))( /*0x5ca939*/
                     this,
                     &a2,
                     i,
                     &v14,
                     v13);
      HouseClass::SetMapSeed(v10, *v11); /*0x5ca944*/
    }
  }
  v14 = &VectorClass<Cell>::`vftable'; /*0x5ca957*/
  if ( Block && v16 ) /*0x5ca969*/
    __3_YAXPAX_Z(Block); /*0x5ca96c*/
  return 1; /*0x5ca974*/
}
}

// 0x5CA9B0
char MultiplayerSiege::CheckStatus(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall MultiplayerSiege::_vt48(int a1)
{
  wchar_t **v1; // eax
  wchar_t **v2; // edi
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // edx
  wchar_t **v7; // eax
  wchar_t **v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  wchar_t **v13; // eax
  wchar_t **v14; // edi
  int v15; // ecx
  int v16; // eax
  int v17; // edx

  v1 = (wchar_t **)__2_YAPAXI_Z(0xCu); /*0x5ca9b4*/
  if ( v1 ) /*0x5ca9be*/
    v2 = MPCombatTeam::Constructor(v1); /*0x5ca9c7*/
  else
    v2 = 0; /*0x5ca9cb*/
  v3 = *(_DWORD *)(a1 + 8); /*0x5ca9d1*/
  if ( *(_DWORD *)(a1 + 16) < v3 /*0x5ca9f6*/
    || (*(_BYTE *)(a1 + 13) || !v3)
    && (v4 = *(_DWORD *)(a1 + 20), v4 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, v3 + v4, 0) )
  {
    v5 = *(_DWORD *)(a1 + 16); /*0x5ca9fd*/
    v6 = *(_DWORD *)(a1 + 4); /*0x5caa00*/
    *(_DWORD *)(a1 + 16) = v5 + 1; /*0x5caa06*/
    *(_DWORD *)(v6 + 4 * v5) = v2; /*0x5caa09*/
  }
  v7 = (wchar_t **)__2_YAPAXI_Z(0xCu); /*0x5caa0e*/
  if ( v7 ) /*0x5caa18*/
    v8 = MPCombatTeam::MPTeam(v7); /*0x5caa21*/
  else
    v8 = 0; /*0x5caa25*/
  v9 = *(_DWORD *)(a1 + 8); /*0x5caa27*/
  if ( *(_DWORD *)(a1 + 16) < v9 /*0x5caa4c*/
    || (*(_BYTE *)(a1 + 13) || !v9)
    && (v10 = *(_DWORD *)(a1 + 20), v10 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, v9 + v10, 0) )
  {
    v11 = *(_DWORD *)(a1 + 16); /*0x5caa53*/
    v12 = *(_DWORD *)(a1 + 4); /*0x5caa56*/
    *(_DWORD *)(a1 + 16) = v11 + 1; /*0x5caa5c*/
    *(_DWORD *)(v12 + 4 * v11) = v8; /*0x5caa5f*/
  }
  v13 = (wchar_t **)__2_YAPAXI_Z(0xCu); /*0x5caa64*/
  if ( v13 ) /*0x5caa6e*/
    v14 = MPCombatTeam::Constructor2(v13); /*0x5caa77*/
  else
    v14 = 0; /*0x5caa7b*/
  v15 = *(_DWORD *)(a1 + 8); /*0x5caa7d*/
  if ( *(_DWORD *)(a1 + 16) < v15 /*0x5caaa7*/
    || ((LOBYTE(v16) = *(_BYTE *)(a1 + 13), (_BYTE)v16) || !v15)
    && (v16 = *(_DWORD *)(a1 + 20), v16 > 0)
    && (LOBYTE(v16) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, v15 + v16, 0), (_BYTE)v16) )
  {
    v16 = *(_DWORD *)(a1 + 16); /*0x5caaa9*/
    v17 = *(_DWORD *)(a1 + 4); /*0x5caaac*/
    *(_DWORD *)(a1 + 16) = v16 + 1; /*0x5caab2*/
    *(_DWORD *)(v17 + 4 * v16) = v14; /*0x5caab5*/
  }
  return v16; /*0x5caab8*/
}
}

// 0x5CAAC0
char MultiplayerSiege::GetResult(unsigned int * ppv, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall MultiplayerSiege::_vt50(_DWORD *ppv, int a2)
{
  int v2; // eax
  int v3; // esi
  _DWORD *BuildableFromArray; // esi
  void *v6; // eax
  int *v7; // eax
  int *v8; // esi
  int v9; // ebx
  _DWORD *StartCoords; // eax
  __int16 *CurrentOption; // eax
  _DWORD v12[3]; // [esp+14h] [ebp-Ch] BYREF

  v2 = 0; /*0x5caad2*/
  if ( MEMORY[0xA8DA84] > 0 ) /*0x5caadf*/
  {
    v3 = MEMORY[0xA8DA78]; /*0x5caae4*/
    do /*0x5caaf3*/
    {
      if ( *(_DWORD *)(*(_DWORD *)v3 + 111) == ppv[12] ) /*0x5caaeb*/
        break; /*0x5caaeb*/
      ++v2; /*0x5caaed*/
      v3 += 4; /*0x5caaee*/
    }
    while ( v2 < MEMORY[0xA8DA84] ); /*0x5caaf3*/
  }
  if ( v2 >= MEMORY[0xA8DA84] ) /*0x5caafb*/
  {
    AI::CreateMCV(ppv, a2); /*0x5cab03*/
    return 0; /*0x5cab11*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v2) + 107) != 1 ) /*0x5cab1c*/
    return AI::CreateMCV(ppv, a2); /*0x5cab24*/
  BuildableFromArray = HouseClass::FirstBuildableFromArray(ppv, (int)&MEMORY[0x8871E0]->IvanWarhead[1]); /*0x5cab45*/
  if ( !BuildableFromArray ) /*0x5cab49*/
    return 0; /*0x5cab49*/
  v6 = __2_YAPAXI_Z(0x720u); /*0x5cab50*/
  if ( !v6 ) /*0x5cab5a*/
    return 0; /*0x5cab5a*/
  v7 = (int *)BuildingClass::Construct((int)v6, (int)BuildableFromArray, (int)ppv); /*0x5cab60*/
  v8 = v7; /*0x5cab65*/
  if ( !v7 ) /*0x5cab69*/
    return 0; /*0x5cab69*/
  v9 = *v7; /*0x5cab6b*/
  StartCoords = HouseClass::GetStartCoords(ppv, v12); /*0x5cab76*/
  if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(v9 + 216))(v8, StartCoords, 0) ) /*0x5cab7e*/
    return 1; /*0x5cab7e*/
  CurrentOption = (__int16 *)HouseClass::GetCurrentOption(ppv, &a2); /*0x5cab91*/
  if ( FindInfantryDeployPosition(v8, CurrentOption, 1) ) /*0x5cab9a*/
    return 1; /*0x5cabbb*/
  (*(void (__thiscall **)(int *, int))(*v8 + 32))(v8, 1); /*0x5caba9*/
  return 0; /*0x5cab08*/
}
}

// 0x5CABD0
MultiplayerSiege * MultiplayerSiege::QueryInterface(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
MultiplayerSiege *__thiscall MultiplayerSiege::QueryInterface(_DWORD *this, char a2)
{
  *this = &MultiplayerSiege::`vftable'; /*0x5cabd3*/
  MultiplayerGameMode::Dtor(this); /*0x5cabd9*/
  if ( (a2 & 1) != 0 ) /*0x5cabe3*/
    __3_YAXPAX_Z(this); /*0x5cabe6*/
  return (MultiplayerSiege *)this; /*0x5cabf0*/
}
}

// 0x5CA7E0
char MultiplayerSiege::StubReturnFalse()
{
return 0;
}
