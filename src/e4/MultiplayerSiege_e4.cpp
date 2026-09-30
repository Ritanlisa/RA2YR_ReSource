// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/MultiplayerSiege_e4.hpp"
#include "e4/classes/PlayerClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Multiplayer_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/NetworkAddress_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/House_e4.hpp"

// 0x5CA680
namespace gamemd {
void MultiplayerSiege::Read()
{

  char result; // al
  int v1; // ecx

  result = this->PlayerClass::AssignPlayerIndex(); /*0x5ca680*/
  if ( result ) /*0x5ca687*/
  {
    result = 1; /*0x5ca690*/
    if ( g_abs_A8DA84 > (unsigned char [1])((unsigned char [1]))((unsigned char [1]))(0) ) /*0x5ca697*/
    {
      v1 = 1; /*0x5ca6a1*/
      for ( *(unsigned int *)(*(unsigned int *)g_abs_A8DA78 + 107) = 1; /*0x5ca6ae*/
            v1 < (int)((int))((int))(g_abs_A8DA84);
            *(unsigned int *)(*(unsigned int *)(g_abs_A8DA78 + 4) + 107) = 2 )
      {
        ++v1; /*0x5ca6bc*/
      }
    }
  }
  return result; /*0x5ca689*/

}
} // namespace gamemd
// 0x5CA6D0
namespace gamemd {
int MultiplayerSiege::Write(void ** a1)
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
        v6 = *(unsigned int *)(*(unsigned int *)v5 + 107); /*0x5ca701*/
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
} // namespace gamemd
// 0x5CA800
namespace gamemd {
AbstractClass * * MultiplayerSiege::ProcessTurn(char a2)
{

  int v3; // eax
  int v4; // edx
  void *v5; // eax
  int v6; // eax
  unsigned int *v7; // ebx
  int v8; // eax
  int i; // esi
  unsigned int *v10; // edi
  int *v11; // eax
  unsigned int v13[4]; // [esp+10h] [ebp-28h] BYREF
  void **v14; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  char v16; // [esp+2Dh] [ebp-Bh]

  ((Multiplayer *)(&v14))->FindStartPositions(); /*0x5ca811*/
  v3 = 0; /*0x5ca81c*/
  memset(v13, 0, sizeof(v13)); /*0x5ca824*/
  if ( MEMORY[0xA8DA84] > 0 ) /*0x5ca836*/
  {
    v4 = MEMORY[0xA8DA78]; /*0x5ca838*/
    do /*0x5ca848*/
    {
      if ( *(unsigned int *)(*(unsigned int *)v4 + 107) == 1 ) /*0x5ca840*/
        break; /*0x5ca840*/
      ++v3; /*0x5ca842*/
      v4 += 4; /*0x5ca843*/
    }
    while ( v3 < MEMORY[0xA8DA84] ); /*0x5ca848*/
  }
  if ( v3 >= MEMORY[0xA8DA84] ) /*0x5ca84c*/
  {
    v5 = (void **)(Block);
    v14 = (void **)(&vt_VectorClass_Cell);
    if ( !Block || !v16 ) /*0x5ca868*/
      return 0; /*0x5ca868*/
    goto LABEL_26; /*0x5ca868*/
  }
  v6 = *(unsigned int *)(*(unsigned int *)(MEMORY[0xA8DA78] + 4 * v3) + 111); /*0x5ca876*/
  if ( v6 < 0 || v6 >= HouseClass_Count ) /*0x5ca887*/
  {
    v5 = (void **)(Block);
    v14 = (void **)(&vt_VectorClass_Cell);
    if ( !Block || !v16 ) /*0x5ca996*/
      return 0; /*0x5ca996*/
LABEL_26:
    __3_YAXPAX_Z(v5); /*0x5ca998*/
    return 0; /*0x5ca9a4*/
  }
  v7 = *(unsigned int **)&HouseClass_Array->__pad_0[4 * v6]; /*0x5ca893*/
  if ( *(unsigned char *)(v7[13] + 422) ) /*0x5ca899*/
  {
    v5 = (void **)(Block);
    v14 = (void **)(&vt_VectorClass_Cell);
    if ( !Block || !v16 ) /*0x5ca8bd*/
      return 0; /*0x5ca8bd*/
    goto LABEL_26; /*0x5ca8bd*/
  }
  this->Debug::Log(); /*0x5ca8d2*/
  v8 = *(unsigned int *)Block; /*0x5ca8e0*/
  LOBYTE(v13[0]) = 1; /*0x5ca8e2*/
  HouseClass::SetMapSeed(v7, v8); /*0x5ca8e8*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x5ca8f6*/
  {
    v10 = *(unsigned int **)&HouseClass_Array->__pad_0[4 * i]; /*0x5ca8fe*/
    if ( !*(unsigned char *)(v10[13] + 422) && v10 != v7 ) /*0x5ca910*/
    {
      this->Debug::Log(); /*0x5ca91c*/
      v11 = (int *)(*(int (**)(void *, char *, int, void ***, unsigned int *))(*(unsigned int *)this + 196))( /*0x5ca939*/
                     this,
                     &a2,
                     i,
                     &v14,
                     v13);
      HouseClass::SetMapSeed(v10, *v11); /*0x5ca944*/
    }
  }
  v14 = (void **)((gamemd::AbstractClass **)(&vt_VectorClass_Cell));
  if ( Block && v16 ) /*0x5ca969*/
    __3_YAXPAX_Z(Block); /*0x5ca96c*/
  return 1; /*0x5ca974*/

}
} // namespace gamemd
// 0x5CA7E0
namespace gamemd {
char MultiplayerSiege::StubReturnFalse()
{

  return 0; /*0x5ca7e2*/

}
} // namespace gamemd
// 0x5CA9B0
namespace gamemd {
char MultiplayerSiege::CheckStatus(int a1)
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

  v1 = (wchar_t **)RA2_OPNEW(0xCu); /*0x5ca9b4*/
  if ( v1 ) /*0x5ca9be*/
    v2 = MPCombatTeam::Constructor(v1); /*0x5ca9c7*/
  else
    v2 = 0; /*0x5ca9cb*/
  v3 = *(unsigned int *)(a1 + 8); /*0x5ca9d1*/
  if ( *(unsigned int *)(a1 + 16) < v3 /*0x5ca9f6*/
    || (*(unsigned char *)(a1 + 13) || !v3)
    && (v4 = *(unsigned int *)(a1 + 20), v4 > 0)
    && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)a1 + 8))(a1, v3 + v4, 0) )
  {
    v5 = *(unsigned int *)(a1 + 16); /*0x5ca9fd*/
    v6 = *(unsigned int *)(a1 + 4); /*0x5caa00*/
    *(unsigned int *)(a1 + 16) = v5 + 1; /*0x5caa06*/
    *(unsigned int *)(v6 + 4 * v5) = v2; /*0x5caa09*/
  }
  v7 = (wchar_t **)RA2_OPNEW(0xCu); /*0x5caa0e*/
  if ( v7 ) /*0x5caa18*/
    v8 = MPCombatTeam::MPTeam(v7); /*0x5caa21*/
  else
    v8 = 0; /*0x5caa25*/
  v9 = *(unsigned int *)(a1 + 8); /*0x5caa27*/
  if ( *(unsigned int *)(a1 + 16) < v9 /*0x5caa4c*/
    || (*(unsigned char *)(a1 + 13) || !v9)
    && (v10 = *(unsigned int *)(a1 + 20), v10 > 0)
    && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)a1 + 8))(a1, v9 + v10, 0) )
  {
    v11 = *(unsigned int *)(a1 + 16); /*0x5caa53*/
    v12 = *(unsigned int *)(a1 + 4); /*0x5caa56*/
    *(unsigned int *)(a1 + 16) = v11 + 1; /*0x5caa5c*/
    *(unsigned int *)(v12 + 4 * v11) = v8; /*0x5caa5f*/
  }
  v13 = (wchar_t **)RA2_OPNEW(0xCu); /*0x5caa64*/
  if ( v13 ) /*0x5caa6e*/
    v14 = MPCombatTeam::Constructor2(v13); /*0x5caa77*/
  else
    v14 = 0; /*0x5caa7b*/
  v15 = *(unsigned int *)(a1 + 8); /*0x5caa7d*/
  if ( *(unsigned int *)(a1 + 16) < v15 /*0x5caaa7*/
    || ((IDA_LOBYTE(v16) = *(unsigned char *)(a1 + 13), (unsigned char)v16) || !v15)
    && (v16 = *(unsigned int *)(a1 + 20), v16 > 0)
    && (IDA_LOBYTE(v16) = (*(int (**)(int, int, unsigned int))(*(unsigned int *)a1 + 8))(a1, v15 + v16, 0), (unsigned char)v16) )
  {
    v16 = *(unsigned int *)(a1 + 16); /*0x5caaa9*/
    v17 = *(unsigned int *)(a1 + 4); /*0x5caaac*/
    *(unsigned int *)(a1 + 16) = v16 + 1; /*0x5caab2*/
    *(unsigned int *)(v17 + 4 * v16) = v14; /*0x5caab5*/
  }
  return v16; /*0x5caab8*/

}
} // namespace gamemd
// 0x5CAAC0
namespace gamemd {
char MultiplayerSiege::GetResult(unsigned int * ppv, int a2)
{

  int v2; // eax
  int v3; // esi
  unsigned int *BuildableFromArray; // esi
  void *v6; // eax
  int *v7; // eax
  int *v8; // esi
  int v9; // ebx
  unsigned int *StartCoords; // eax
  int16_t *CurrentOption; // eax
  unsigned int v12[3]; // [esp+14h] [ebp-Ch] BYREF

  v2 = 0; /*0x5caad2*/
  if ( MEMORY[0xA8DA84] > 0 ) /*0x5caadf*/
  {
    v3 = MEMORY[0xA8DA78]; /*0x5caae4*/
    do /*0x5caaf3*/
    {
      if ( *(unsigned int *)(*(unsigned int *)v3 + 111) == ppv[12] ) /*0x5caaeb*/
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
  if ( *(unsigned int *)(*(unsigned int *)(MEMORY[0xA8DA78] + 4 * v2) + 107) != 1 ) /*0x5cab1c*/
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
  if ( (*(uint8_t (**)(int *, unsigned int *, unsigned int))(v9 + 216))(v8, StartCoords, 0) ) /*0x5cab7e*/
    return 1; /*0x5cab7e*/
  CurrentOption = (int16_t *)HouseClass::GetCurrentOption(ppv, &a2); /*0x5cab91*/
  if ( FindInfantryDeployPosition(v8, CurrentOption, 1) ) /*0x5cab9a*/
    return 1; /*0x5cabbb*/
  (*(void (**)(int *, int))(*v8 + 32))(v8, 1); /*0x5caba9*/
  return 0; /*0x5cab08*/

}
} // namespace gamemd
// 0x5CABD0
namespace gamemd {
MultiplayerSiege * MultiplayerSiege::QueryInterface(unsigned int * Block, char a2)
{
*Block = (unsigned int)(&vt_MultiplayerSiege);
  MultiplayerGameMode::Dtor(Block); /*0x5cabd9*/
  if ( (a2 & 1) != 0 ) /*0x5cabe3*/
    __3_YAXPAX_Z(Block); /*0x5cabe6*/
  return (MultiplayerSiege *)Block; /*0x5cabf0*/

}
} // namespace gamemd