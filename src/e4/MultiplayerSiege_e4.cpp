// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
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
#include "e4/classes/MPCombatTeam_e4.hpp"

// 0x5CA680
namespace gamemd {
short MultiplayerSiege::Read(void *a1, void *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CA680)
}
} // namespace gamemd
// 0x5CA6D0
namespace gamemd {
int MultiplayerSiege::Write(void ** a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CA6D0)
}
} // namespace gamemd
// 0x5CA800
namespace gamemd {
AbstractClass * * MultiplayerSiege::ProcessTurn(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CA800)
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
    v2 = 0; /*0x5ca9cb*/
  MultiplayerSiege_field_08 = a1->MultiplayerSiege_field_08; /*0x5ca9d1*/
  if ( a1->MultiplayerSiege_field_10 < MultiplayerSiege_field_08 /*0x5ca9f6*/
    || (BYTE1(a1->MultiplayerSiege_field_0C) || !MultiplayerSiege_field_08)
    && (v4 = *((unsigned int *)a1 + 5), v4 > 0)
    && (*(uint8_t (**)(MultiplayerSiege *, int, unsigned int))(a1->MultiplayerSiege_field_00 + 8))(
         a1,
         MultiplayerSiege_field_08 + v4,
         0) )
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
    v8 = 0; /*0x5caa25*/
  v9 = a1->MultiplayerSiege_field_08; /*0x5caa27*/
  if ( a1->MultiplayerSiege_field_10 < v9 /*0x5caa4c*/
    || (BYTE1(a1->MultiplayerSiege_field_0C) || !v9)
    && (v10 = *((unsigned int *)a1 + 5), v10 > 0)
    && (*(uint8_t (**)(MultiplayerSiege *, int, unsigned int))(a1->MultiplayerSiege_field_00 + 8))(
         a1,
         v9 + v10,
         0) )
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
    v14 = 0; /*0x5caa7b*/
  v15 = a1->MultiplayerSiege_field_08; /*0x5caa7d*/
  if ( a1->MultiplayerSiege_field_10 < v15 /*0x5caaa7*/
    || ((LOBYTE(v16) = BYTE1(a1->MultiplayerSiege_field_0C), (unsigned char)v16) || !v15)
    && (v16 = *((unsigned int *)a1 + 5), v16 > 0)
    && (LOBYTE(v16) = (*(int (**)(MultiplayerSiege *, int, unsigned int))(a1->MultiplayerSiege_field_00 + 8))(
                        a1,
                        v15 + v16,
                        0),
        (unsigned char)v16) )
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CAAC0)
}
} // namespace gamemd
// 0x5CABD0
namespace gamemd {
MultiplayerSiege * MultiplayerSiege::QueryInterface(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CABD0)
}
} // namespace gamemd