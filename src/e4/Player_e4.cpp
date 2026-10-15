// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_Player 1  // G57b: e4 flat-carrier opt-in (suppress core/aux twin)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Player_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"

// 0x5E8DC0
namespace gamemd {  // G42.18 ns repair
void Player::BuildListString(wchar_t * Destination)
{

  wchar_t **v2; // edi
  wchar_t *v3; // esi
  wchar_t **v4; // eax
  wchar_t *v5; // eax
  DeleteAndZero v6; // [esp+Ch] [ebp-Ch] BYREF

  *(unsigned short *)Destination = 0; /*0x5e8dc8*/
  v2 = (wchar_t **)dword_A8DA90; /*0x5e8dcd*/
  do /*0x5e8e89*/
  {
    v3 = *v2; /*0x5e8dd2*/
    unknown_libname_74(&v6); /*0x5e8dd8*/
    if ( !v3 /*0x5e8e17*/
      || v3 == (wchar_t *)g_HouseClass_ObserverFlags
      || v3 == (wchar_t *)g_Lobby_PlayerCount
      || v3 == g_Lobby_PlayerReady
      || v3 == (wchar_t *)g_Lobby_MaxPlayers
      || v3 == (wchar_t *)g_Lobby_PlayerTeam
      || v3 == (wchar_t *)g_Lobby_PlayerSide
      || v3 == (wchar_t *)g_Lobby_PlayerColor )
    {
      GetPlayerTypeString((char **)&v6.q004, v3); /*0x5e8e2b*/
      v4 = CharStringToWide((wchar_t **)&v6.u32_8, (const char **)&v6.q004); /*0x5e8e38*/
      WideString::Reassign_Alt((void **)&v6, (const wchar_t **)v4); /*0x5e8e42*/
      DeleteAndZero::Alt((DeleteAndZero *)&v6.u32_8); /*0x5e8e4b*/
      DeleteAndZero((ObjectClass *)&v6.q004); /*0x5e8e54*/
    }
    else
    {
      WideString::Assign_Alt((void **)&v6, v3); /*0x5e8e1e*/
    }
    v5 = (wchar_t *)(WideString::GetOrEmpty((wchar_t **)&v6)); /*0x5e8e5d*/
    wcscat((wchar_t *)Destination, v5); /*0x5e8e64*/
    wcscat((wchar_t *)Destination, asc_8304FC); /*0x5e8e6f*/
    DeleteAndZero::Alt(&v6); /*0x5e8e7b*/
    ++v2; /*0x5e8e80*/
  }
  while ( (int)v2 < (int)&dword_A8DAB0 ); /*0x5e8e89*/

}
} // namespace gamemd
// 0x5E8BF0
namespace gamemd {
wchar_t * Player::FindByName(wchar_t * String2)
{
  int v3; // ebp
  int v4; // esi
  const wchar_t *v5; // edi

  if ( !wcscmp((const wchar_t *)g_HouseClass_ObserverFlags, (const wchar_t *)String2) ) /*0x5e8bfd*/
    return (wchar_t *)g_HouseClass_ObserverFlags; /*0x5e8c09*/
  if ( !wcscmp((const wchar_t *)g_Lobby_PlayerCount, (const wchar_t *)String2) ) /*0x5e8c1b*/
    return (wchar_t *)g_Lobby_PlayerCount; /*0x5e8c27*/
  if ( !wcscmp((const wchar_t *)g_Lobby_PlayerTeam, (const wchar_t *)String2) ) /*0x5e8c39*/
    return (wchar_t *)g_Lobby_PlayerTeam; /*0x5e8c45*/
  if ( !wcscmp((const wchar_t *)g_Lobby_PlayerSide, (const wchar_t *)String2) ) /*0x5e8c56*/
    return (wchar_t *)g_Lobby_PlayerSide; /*0x5e8c62*/
  if ( !wcscmp((const wchar_t *)g_Lobby_PlayerColor, (const wchar_t *)String2) ) /*0x5e8c74*/
    return (wchar_t *)g_Lobby_PlayerColor; /*0x5e8c80*/
  if ( !wcscmp(g_Lobby_PlayerReady, (const wchar_t *)String2) ) /*0x5e8c92*/
    return (wchar_t *)(g_Lobby_PlayerReady); /*0x5e8c9e*/
  if ( !wcscmp((const wchar_t *)g_Lobby_MaxPlayers, (const wchar_t *)String2) ) /*0x5e8caf*/
    return (wchar_t *)g_Lobby_MaxPlayers; /*0x5e8cbb*/
  v3 = dword_A8DA84; /*0x5e8cc5*/
  v4 = 0; /*0x5e8ccb*/
  if ( dword_A8DA84 <= 0 ) /*0x5e8ccf*/
    return 0; /*0x5e8ced*/
  while ( 1 ) /*0x5e8cd8*/
  {
    v5 = (const wchar_t *)dword_A8DA78[v4]; /*0x5e8cd8*/
    if ( !wcscmp(v5, (const wchar_t *)String2) ) /*0x5e8cdc*/
      break; /*0x5e8cdc*/
    if ( ++v4 >= v3 ) /*0x5e8ceb*/
      return 0; /*0x5e8ceb*/
  }
  return (wchar_t *)v5; /*0x5e8c0e*/
}
} // namespace gamemd
// 0x5E9440
namespace gamemd {
int Player::IsObserver(void *a1)
{
  return this /*0x5e9461*/
      && (this == (Player *)g_Lobby_PlayerTeam
       || this == (Player *)g_Lobby_PlayerSide
       || this == (Player *)g_Lobby_PlayerColor);
}
} // namespace gamemd
