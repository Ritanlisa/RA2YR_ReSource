// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
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
#include "e4/classes/MPCombatTeam_e4.hpp"

// 0x5CA680
namespace gamemd {
char MultiplayerSiege::Read(void *a1, void *a2)
{

  char result; // al
  int v1; // ecx

  result = ((gamemd::PlayerClass *)this)->AssignPlayerIndex(); /*0x5ca680*/
  if ( result ) /*0x5ca687*/
  {
    result = 1; /*0x5ca690*/
    if ( Game_PlayerCount > 0 ) /*0x5ca697*/
    {
      v1 = 1; /*0x5ca6a1*/
      for ( *(unsigned int *)(*(unsigned int *)Game_PlayerInfoArray + 107) = 1; /*0x5ca6ae*/
            v1 < Game_PlayerCount;
            *(unsigned int *)(*(unsigned int *)(Game_PlayerInfoArray + 4) + 107) = 2 )
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
  unsigned int *v5; // edx
  int v6; // eax
  int v7; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax

  result = ((ScenarioClass *)(&a1->MultiplayerSiege_field_00))->MissionStubReturnZero2(); /*0x5ca6d9*/
  if ( result ) /*0x5ca6e0*/
  {
    v2 = 0; /*0x5ca6ef*/
    v3 = 0; /*0x5ca6f1*/
    v4 = 0; /*0x5ca6f3*/
    if ( dword_A8DA84 <= 0 ) /*0x5ca6f7*/
    {
LABEL_12: StringCSF = (wchar_t *)(GetStringCSF((wchar_t *)(aMpNodefender), 0,(const char *)(g_Str_File_MPSiege_cpp), 65));
      ((WideString *)((void **)a1))->Assign_Alt( (wchar_t *)(StringCSF)); /*0x5ca73a*/
      return 0; /*0x5ca742*/
    }
    else
    {
      v5 = (unsigned int *)(dword_A8DA78);
      do /*0x5ca71e*/
      {
        v6 = *(unsigned int *)(*v5 + 107); /*0x5ca701*/
        if ( v6 ) /*0x5ca707*/
        {
          v7 = v6 - 1; /*0x5ca709*/
          if ( v7 ) /*0x5ca70a*/
          {
            if ( v7 != 1 ) /*0x5ca70d*/
            {
              v9 = (wchar_t *)(GetStringCSF((wchar_t *)(aMpIllegalteam), 0,(const char *)(g_Str_File_MPSiege_cpp), 60));
              ((WideString *)((void **)a1))->Assign_Alt( (wchar_t *)(v9)); /*0x5ca75e*/
              return 0; /*0x5ca769*/
            }
            ++v3; /*0x5ca70f*/
          }
          else
          {
            if ( v2 ) /*0x5ca714*/
            {
              v10 = (wchar_t *)(GetStringCSF((wchar_t *)(aMpOnlyonebesei), 0,(const char *)(g_Str_File_MPSiege_cpp), 51));
              ((WideString *)((void **)a1))->Assign_Alt( (wchar_t *)(v10)); /*0x5ca782*/
              return 0; /*0x5ca78d*/
            }
            v2 = 1; /*0x5ca716*/
          }
        }
        ++v4; /*0x5ca718*/
        ++v5; /*0x5ca719*/
      }
      while ( v4 < dword_A8DA84 ); /*0x5ca71e*/
      if ( !v2 ) /*0x5ca722*/
        goto LABEL_12; /*0x5ca722*/
      if ( v3 >= 1 ) /*0x5ca793*/
      {
        return 1; /*0x5ca7bc*/
      }
      else
      {
        v11 = (wchar_t *)(GetStringCSF((wchar_t *)(aMpNoattackers), 0,(const char *)(g_Str_File_MPSiege_cpp), 70));
        ((WideString *)((void **)a1))->Assign_Alt( (wchar_t *)(v11)); /*0x5ca7ab*/
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
  unsigned int *v4; // edx
  void *v5; // eax
  int v6; // eax
  HouseClass *v7; // ebx
  int v8; // eax
  int i; // esi
  HouseClass *v10; // edi
  int *v11; // eax
  unsigned int v13[4]; // [esp+10h] [ebp-28h] BYREF
  Multiplayer v14[4]; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  char v16; // [esp+2Dh] [ebp-Bh]

  ((Multiplayer *)(v14))->FindStartPositions(); /*0x5ca811*/
  v3 = 0; /*0x5ca81c*/
  memset( (void *)(v13), 0, sizeof(v13)); /*0x5ca824*/
  if ( dword_A8DA84 > 0 ) /*0x5ca836*/
  {
    v4 = (unsigned int *)(dword_A8DA78);
    do /*0x5ca848*/
    {
      if ( *(unsigned int *)(*v4 + 107) == 1 ) /*0x5ca840*/
        break; /*0x5ca840*/
      ++v3; /*0x5ca842*/
      ++v4; /*0x5ca843*/
    }
    while ( v3 < dword_A8DA84 ); /*0x5ca848*/
  }
  if ( v3 >= dword_A8DA84 ) /*0x5ca84c*/
  {
    v5 = Block; /*0x5ca84e*/
    *(unsigned int *)v14 = (unsigned int)(&vt_VectorClass); /*0x5ca852*/
    if ( !Block || !v16 ) /*0x5ca868*/
      return 0; /*0x5ca868*/
    goto LABEL_26; /*0x5ca868*/
  }
  v6 = *(unsigned int *)(((unsigned int *)(dword_A8DA78))[v3] + 111); /*0x5ca876*/
  if ( v6 < 0 || v6 >= ((char *)&stru_A80220) ) /*0x5ca887*/
  {
    v5 = Block; /*0x5ca980*/
    *(unsigned int *)v14 = (unsigned int)(&vt_VectorClass); /*0x5ca984*/
    if ( !Block || !v16 ) /*0x5ca996*/
      return 0; /*0x5ca996*/
LABEL_26:
    __3_YAXPAX_Z(v5); /*0x5ca998*/
    return 0; /*0x5ca9a4*/
  }
  v7 = (HouseClass *)*((unsigned int *)((char *)&stru_A80220) + v6); /*0x5ca893*/
  if ( *(unsigned char *)(v7->relatedTagsCapacity + 422) ) /*0x5ca899*/
  {
    v5 = Block; /*0x5ca8a3*/
    *(unsigned int *)v14 = (unsigned int)(&vt_VectorClass); /*0x5ca8a7*/
    if ( !Block || !v16 ) /*0x5ca8bd*/
      return 0; /*0x5ca8bd*/
    goto LABEL_26; /*0x5ca8bd*/
  }
  Debug::Log("Assigning Starting Points for Defending house %d (%s)\n"); /*0x5ca8d2 G57c1: IDA 0x5ca8d2 push offset aAssigningStart_0*/
  v8 = *(unsigned int *)Block; /*0x5ca8e0*/
  LOBYTE(v13[0]) = 1; /*0x5ca8e2*/
  ((HouseClass *)(v7))->SetMapSeed(v8); /*0x5ca8e8*/
  for ( i = 0; i < ((char *)&stru_A80220); ++i ) /*0x5ca8f6*/
  {
    v10 = (HouseClass *)*((unsigned int *)((char *)&stru_A80220) + i); /*0x5ca8fe*/
    if ( !*(unsigned char *)(v10->relatedTagsCapacity + 422) && v10 != v7 ) /*0x5ca910*/
    {
      Debug::Log("Assigning Starting Points for Attacking house %d (%s)\n"); /*0x5ca91c G57c1: IDA 0x5ca91c push offset aAssigningStart_1*/
v11 = (int *)(*(int (**)(MultiplayerSiege *, char *, int, Multiplayer *, unsigned int *))(this->MultiplayerSiege_field_00 + 196))( /*0x5ca939*/ this, (char *)(&a2), i, (Multiplayer *)(v14), (unsigned int *)(v13));





      ((HouseClass *)(v10))->SetMapSeed(*v11); /*0x5ca944*/
    }
  }
  *(unsigned int *)v14 = (unsigned int)(&vt_VectorClass); /*0x5ca957*/
  if ( Block && v16 ) /*0x5ca969*/
    __3_YAXPAX_Z(Block); /*0x5ca96c*/
  return (gamemd::AbstractClass **)(1); /*0x5ca974*/

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

  MPCombatTeam *v1; // eax
  wchar_t **v2; // edi
  int MultiplayerSiege_field_08; // ecx
  int v4; // eax
  int MultiplayerSiege_field_10; // eax
  int MultiplayerSiege_field_04; // edx
  MPCombatTeam *v7; // eax
  wchar_t **v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  MPCombatTeam *v13; // eax
  wchar_t **v14; // edi
  int v15; // ecx
  int v16; // eax
  int v17; // edx

  v1 = (MPCombatTeam *)__2_YAPAXI_Z(0xCu); /*0x5ca9b4*/
  if ( v1 ) /*0x5ca9be*/
    v2 = ((MPCombatTeam*)v1)->Constructor(); /*0x5ca9c7*/
  else
    v2 = (wchar_t **)(0); /*0x5ca9cb*/
  MultiplayerSiege_field_08 = a1->MultiplayerSiege_field_08; /*0x5ca9d1*/
  if ( a1->MultiplayerSiege_field_10 < MultiplayerSiege_field_08 /*0x5ca9f6*/
    || (BYTE1(a1->MultiplayerSiege_field_0C) || !MultiplayerSiege_field_08)
    && (v4 = *((unsigned int *)a1 + 5), v4 > 0)
&& (*(uint8_t (**)(MultiplayerSiege *, int, unsigned int))(a1->MultiplayerSiege_field_00 + 8))( (MultiplayerSiege *)(a1), MultiplayerSiege_field_08 + v4, 0) )



  {
    MultiplayerSiege_field_10 = (unsigned int)(a1->MultiplayerSiege_field_10);
    MultiplayerSiege_field_04 = (unsigned int)(a1->MultiplayerSiege_field_04);
    a1->MultiplayerSiege_field_10 = (unsigned int)(MultiplayerSiege_field_10 + 1);
    *(unsigned int *)(MultiplayerSiege_field_04 + 4 * MultiplayerSiege_field_10) = (unsigned int)(v2); /*0x5caa09*/
  }
  v7 = (MPCombatTeam *)__2_YAPAXI_Z(0xCu); /*0x5caa0e*/
  if ( v7 ) /*0x5caa18*/
    v8 = ((MPCombatTeam *)(v7))->MPTeam(); /*0x5caa21*/
  else
    v8 = (wchar_t **)(0); /*0x5caa25*/
  v9 = a1->MultiplayerSiege_field_08; /*0x5caa27*/
  if ( a1->MultiplayerSiege_field_10 < v9 /*0x5caa4c*/
    || (BYTE1(a1->MultiplayerSiege_field_0C) || !v9)
    && (v10 = *((unsigned int *)a1 + 5), v10 > 0)
&& (*(uint8_t (**)(MultiplayerSiege *, int, unsigned int))(a1->MultiplayerSiege_field_00 + 8))( (MultiplayerSiege *)(a1), v9 + v10, 0) )



  {
    v11 = (unsigned int)(a1->MultiplayerSiege_field_10);
    v12 = (unsigned int)(a1->MultiplayerSiege_field_04);
    a1->MultiplayerSiege_field_10 = (unsigned int)(v11 + 1);
    *(unsigned int *)(v12 + 4 * v11) = (unsigned int)(v8); /*0x5caa5f*/
  }
  v13 = (MPCombatTeam *)__2_YAPAXI_Z(0xCu); /*0x5caa64*/
  if ( v13 ) /*0x5caa6e*/
    v14 = ((MPCombatTeam *)(v13))->Constructor2(); /*0x5caa77*/
  else
    v14 = (wchar_t **)(0); /*0x5caa7b*/
  v15 = a1->MultiplayerSiege_field_08; /*0x5caa7d*/
  if ( a1->MultiplayerSiege_field_10 < v15 /*0x5caaa7*/
    || ((LOBYTE(v16) = BYTE1(a1->MultiplayerSiege_field_0C), (unsigned char)v16) || !v15)
    && (v16 = *((unsigned int *)a1 + 5), v16 > 0)
&& (LOBYTE(v16) = (*(int (**)(MultiplayerSiege *, int, unsigned int))(a1->MultiplayerSiege_field_00 + 8))( (MultiplayerSiege *)(a1), v15 + v16, 0), (unsigned char)v16) )




  {
    v16 = (unsigned int)(a1->MultiplayerSiege_field_10);
    v17 = (unsigned int)(a1->MultiplayerSiege_field_04);
    a1->MultiplayerSiege_field_10 = (unsigned int)(v16 + 1);
    *(unsigned int *)(v17 + 4 * v16) = (unsigned int)(v14); /*0x5caab5*/
  }
  return v16; /*0x5caab8*/

}
} // namespace gamemd
// 0x5CAAC0
namespace gamemd {
char MultiplayerSiege::GetResult(unsigned int * ppv, int a2)
{

  int v2; // eax
  unsigned int *v3; // esi
  unsigned int *BuildableFromArray; // esi
  int v6; // eax
  int *v7; // eax
  int *v8; // esi
  int v9; // ebx
  unsigned int *StartCoords; // eax
  int16_t *CurrentOption; // eax
  unsigned int v12[3]; // [esp+14h] [ebp-Ch] BYREF

  v2 = 0; /*0x5caad2*/
  if ( dword_A8DA84 > 0 ) /*0x5caadf*/
  {
    v3 = (unsigned int *)(dword_A8DA78);
    do /*0x5caaf3*/
    {
      if ( *(unsigned int *)(*v3 + 111) == *((unsigned int *)ppv + 12) ) /*0x5caaeb*/
        break; /*0x5caaeb*/
      ++v2; /*0x5caaed*/
      ++v3; /*0x5caaee*/
    }
    while ( v2 < dword_A8DA84 ); /*0x5caaf3*/
  }
  if ( v2 >= dword_A8DA84 ) /*0x5caafb*/
  {
    AI::CreateMCV((MultiplayerGameMode *)ppv, a2); /*0x5cab03*/
    return 0; /*0x5cab11*/
  }
  if ( *(unsigned int *)(((unsigned int *)(dword_A8DA78))[v2] + 107) != 1 ) /*0x5cab1c*/
    return AI::CreateMCV((MultiplayerGameMode *)ppv, a2); /*0x5cab24*/
  BuildableFromArray = HouseClass::FirstBuildableFromArray( /*0x5cab45*/
                         (HouseClass *)ppv,
                         *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2220);
  if ( !BuildableFromArray ) /*0x5cab49*/
    return 0; /*0x5cab49*/
  v6 = (int)(__2_YAPAXI_Z(0x720u)); /*0x5cab50*/
  if ( !v6 ) /*0x5cab5a*/
    return 0; /*0x5cab5a*/
  v7 = (int *)((BuildingClass *)(v6))->Construct((int)BuildableFromArray, (int)ppv); /*0x5cab60*/
  v8 = v7; /*0x5cab65*/
  if ( !v7 ) /*0x5cab69*/
    return 0; /*0x5cab69*/
  v9 = *v7; /*0x5cab6b*/
  StartCoords = ((HouseClass *)ppv)->GetStartCoords( v12); /*0x5cab76*/
  if ( (*(uint8_t (**)(int *, unsigned int *, unsigned int))(v9 + 216))( (int *)(v8), (unsigned int *)(StartCoords), 0) ) /*0x5cab7e*/
    return 1; /*0x5cab7e*/
  CurrentOption = (int16_t *)((HouseClass *)ppv)->GetCurrentOption( &a2); /*0x5cab91*/
  if ( FindInfantryDeployPosition( (int *)(v8), (gamemd::RadarClass *)(CurrentOption), 1) ) /*0x5cab9a*/
    return 1; /*0x5cabbb*/
  (*(void (**)(int *, int))(*v8 + 32))( (int *)(v8), 1); /*0x5caba9*/
  return 0; /*0x5cab08*/

}
} // namespace gamemd
// 0x5CABD0
namespace gamemd {
MultiplayerSiege * MultiplayerSiege::QueryInterface(char a2)
{

  this->MultiplayerSiege_field_00 = (int)&vt_MultiplayerSiege; /*0x5cabd3*/
  ((MultiplayerGameMode *)this)->Dtor(); /*0x5cabd9*/
  if ( (a2 & 1) != 0 ) /*0x5cabe3*/
    __3_YAXPAX_Z(this); /*0x5cabe6*/
return (gamemd::MultiplayerSiege *)&this->MultiplayerSiege_field_00; /*0x5cabf0*/

}
} // namespace gamemd