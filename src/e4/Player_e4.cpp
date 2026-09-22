// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x5E8DC0
void Player::BuildListString()
{
{
  SessionClass *v2; // edi
  ReferenceCounted *v3; // esi
  wchar_t **v4; // eax
  CampaignScore *v5; // eax
  wchar_t *v6; // [esp+Ch] [ebp-Ch] BYREF
  *this = 0; /*0x5e8dc8*/
  v2 = (SessionClass *)&HouseClass_Player[40260]; /*0x5e8dcd*/
  do /*0x5e8e89*/
  {
    v3 = (ReferenceCounted *)v2->GameMode[0]; /*0x5e8dd2*/
    unknown_libname_74(&v6); /*0x5e8dd8*/
    if ( !v3 /*0x5e8e17*/
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2275)
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2276)
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2280)
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2281)
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2277)
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2278)
      || v3 == (ReferenceCounted *)*(&g_MatrixTransformState + 2279) )
    {
  char *a1; // [esp+10h] [ebp-8h] BYREF
      GetPlayerTypeString(&a1, (wchar_t *)v3); /*0x5e8e2b*/
      void * v8 = CharStringToWide((ObjectClass *)&v8, (const char **)&a1); /*0x5e8e38*/
      WideString::Reassign_Alt((void **)&v6, (const wchar_t **)v4); /*0x5e8e42*/
      DeleteAndZero::Alt(&v8); /*0x5e8e4b*/
      DeleteAndZero((int)&a1); /*0x5e8e54*/
    }
    else
    {
      WideString::Assign_Alt((void **)&v6, (wchar_t *)v3); /*0x5e8e1e*/
    }
    v5 = WideString::GetOrEmpty(&v6); /*0x5e8e5d*/
    wcscat(this, v5); /*0x5e8e64*/
    wcscat(this, (CampaignScore *)&stru_8304AC.unknown50); /*0x5e8e6f*/
    DeleteAndZero::Alt((void **)&v6); /*0x5e8e7b*/
    v2 = (SessionClass *)((char *)v2 + 4); /*0x5e8e80*/
  }
  while ( (int)v2 < (int)&HouseClass_Player[40292] ); /*0x5e8e89*/
}

// 0x5E8BF0
wchar_t * Player::FindByName()
{
{
    int v3;
    int v4;
    const wchar_t *v5;
    if ( !wcscmp((const wchar_t *)g_HouseClass_ObserverFlags, this) )
    return (wchar_t *)g_HouseClass_ObserverFlags;
    if ( !wcscmp((const wchar_t *)g_Lobby_PlayerCount, this) )
    return (wchar_t *)g_Lobby_PlayerCount;
    if ( !wcscmp((const wchar_t *)g_Lobby_PlayerTeam, this) )
    return (wchar_t *)g_Lobby_PlayerTeam;
    if ( !wcscmp((const wchar_t *)g_Lobby_PlayerSide, this) )
    return (wchar_t *)g_Lobby_PlayerSide;
    if ( !wcscmp((const wchar_t *)g_Lobby_PlayerColor, this) )
    return (wchar_t *)g_Lobby_PlayerColor;
    if ( !wcscmp(g_Lobby_PlayerReady, this) )
    return g_Lobby_PlayerReady;
    if ( !wcscmp((const wchar_t *)g_Lobby_MaxPlayers, this) )
    return (wchar_t *)g_Lobby_MaxPlayers;
    v3 = Game_PlayerCount;
    v4 = 0;
    if ( Game_PlayerCount <= 0 )
    return 0;
    while ( 1 )
  {
    v5 = *(const wchar_t **)(Game_PlayerInfoArray + 4 * v4);
    if ( !wcscmp(v5, this) )
    break;
    if ( ++v4 >= v3 )
    return 0;
  }
    return (wchar_t *)v5;
}
}

// 0x5E9440
BOOL Player::IsObserver()
{
{
    return this && (this == (void *)g_Lobby_PlayerTeam || this == (void *)g_Lobby_PlayerSide || this == (void *)g_Lobby_PlayerColor);
}
}
