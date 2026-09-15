// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5EAAD0_e4.hpp"
#include "e4/classes/E4Recv_5EAB30_e4.hpp"
#include "e4/classes/E4Recv_5EAC00_e4.hpp"
#include "e4/classes/E4Recv_5EACD0_e4.hpp"
#include "e4/classes/E4Recv_5EAEE0_e4.hpp"

// 0x5E8D40
namespace gamemd {
int sub_5E8D40()
{
{
    const wchar_t *v1;
    int v2;
    const wchar_t **v3;
    if ( !Game_PlayerCount )
    return -1;
    v1 = *(const wchar_t **)Game_PlayerInfoArray;
    v2 = 0;
    v3 = (const wchar_t **)&g_NetworkPlayerName;
    while ( !*v3 || _wcsicmp(v1, *v3) )
  {
    ++v3;
    ++v2;
    if ( (int)v3 >= (int)&g_PlayerNameListEnd )
    return -1;
  }
    return v2;
}
}
} // namespace gamemd

// 0x5EA8E0
namespace gamemd {
int sub_5EA8E0(int a1)
{
{
    int v1;
    int result;
    v1 = *(&g_NetworkPlayerName + a1);
    result = 0;
    if ( v1 && (v1 == g_Lobby_PlayerTeam || v1 == g_Lobby_PlayerSide || v1 == g_Lobby_PlayerColor) || *(int *)(v1 + 119) == 1 )
    return 1;
    return result;
}
}
} // namespace gamemd

// 0x5EA9B0
namespace gamemd {
int sub_5EA9B0(int a1)
{
{
    wchar_t *v1;
    v1 = (wchar_t *)*(&g_NetworkPlayerName + a1);
    if ( v1 && (v1 == (wchar_t *)g_Lobby_PlayerTeam || v1 == (wchar_t *)g_Lobby_PlayerSide || v1 == (wchar_t *)g_Lobby_PlayerColor) )
  {
    return g_CampaignConfig[a1];
  }
    if ( v1 == (wchar_t *)g_HouseClass_ObserverFlags || v1 == (wchar_t *)g_Lobby_PlayerCount || v1 == g_Lobby_PlayerReady || v1 == (wchar_t *)g_Lobby_MaxPlayers )
  {
    return -2;
  }
    return SessionClass::GetPlayerColor(*(&g_NetworkPlayerName + a1));
}
}
} // namespace gamemd

// 0x5EAA10
namespace gamemd {
int sub_5EAA10(int a1)
{
{
    wchar_t *v1;
    v1 = (wchar_t *)*(&g_NetworkPlayerName + a1);
    if ( v1 && (v1 == (wchar_t *)g_Lobby_PlayerTeam || v1 == (wchar_t *)g_Lobby_PlayerSide || v1 == (wchar_t *)g_Lobby_PlayerColor) )
  {
    return g_CampaignSideIndex[a1];
  }
    if ( v1 == (wchar_t *)g_HouseClass_ObserverFlags || v1 == (wchar_t *)g_Lobby_PlayerCount || v1 == g_Lobby_PlayerReady || v1 == (wchar_t *)g_Lobby_MaxPlayers )
  {
    return -2;
  }
    return SessionClass::GetOption(*(&g_NetworkPlayerName + a1));
}
}
} // namespace gamemd

// 0x5EAA70
namespace gamemd {
int sub_5EAA70(int a1)
{
{
    wchar_t *v1;
    v1 = (wchar_t *)*(&g_NetworkPlayerName + a1);
    if ( v1 && (v1 == (wchar_t *)g_Lobby_PlayerTeam || v1 == (wchar_t *)g_Lobby_PlayerSide || v1 == (wchar_t *)g_Lobby_PlayerColor) )
  {
    return g_CampaignFactionSlot[a1];
  }
    if ( v1 == (wchar_t *)g_HouseClass_ObserverFlags || v1 == (wchar_t *)g_Lobby_PlayerCount || v1 == g_Lobby_PlayerReady || v1 == (wchar_t *)g_Lobby_MaxPlayers )
  {
    return -2;
  }
    return SessionClass::GetOption2(*(&g_NetworkPlayerName + a1));
}
}
} // namespace gamemd

// 0x7A0E50
namespace gamemd {
void sub_7A0E50()
{
{
    int i;
    wchar_t *v1;
    char *v2;
    for ( i = 0; i < 8; ++i )
  {
    v1 = *(wchar_t **)((char *)&g_NetworkPlayerName + i * 4);
    if ( !v1 || !IsKnownPointer(v1) )
    DataGlobal_B76440[i] = -1;
    v2 = ToWideStringChar(*(char **)((char *)&g_NetworkPlayerName + i * 4));
    SetGameOptionsPing(v2, DataGlobal_B76440[i]);
  }
}
}
} // namespace gamemd
