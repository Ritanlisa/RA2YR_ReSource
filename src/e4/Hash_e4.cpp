// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5C61D0
namespace gamemd {
void * sub_5C61D0()
{
{
    return &DataGlobal_82E174;
}
}
} // namespace gamemd

// 0x5C61E0
namespace gamemd {
int sub_5C61E0()
{
return 3511;
}
} // namespace gamemd

// 0x5E94D0
namespace gamemd {
int sub_5E94D0()
{
{
    int result;
    LPARAM *v1;
    LPARAM v2;
    result = 0;
    v1 = &g_NetworkPlayerName;
    do
  {
    v2 = *v1;
    if ( *v1 && (v2 == g_Lobby_PlayerTeam || v2 == g_Lobby_PlayerSide || v2 == g_Lobby_PlayerColor) )
    ++result;
    ++v1;
  }
    while ( (int)v1 < (int)&g_PlayerNameListEnd );
    return result;
}
}
} // namespace gamemd

// 0x5E9580
namespace gamemd {
char sub_5E9580()
{
{
    int v0;
    LPARAM *v1;
    LPARAM v2;
    v0 = 0;
    v1 = &g_NetworkPlayerName;
    while ( 1 )
  {
    v2 = *v1;
    if ( *v1 )
    {
    if ( v2 != g_HouseClass_ObserverFlags && v2 != g_Lobby_PlayerCount && v2 != g_Lobby_MaxPlayers && (wchar_t *)v2 != g_Lobby_PlayerReady && v0 == g_MPCooperativeState && *(int *)(v2 + 107) == -1 )
      {
    break;
      }
    }
    ++v1;
    ++v0;
    if ( (int)v1 >= (int)&g_PlayerNameListEnd )
    return 0;
  }
    return 1;
}
}
} // namespace gamemd
