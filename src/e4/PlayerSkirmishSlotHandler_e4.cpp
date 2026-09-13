// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5DAF30
namespace gamemd {
void sub_5DAF30()
{
{
    int v0;
    int i;
    int v2[113];
    short v3;
    char v4;
    memset(v2, 0, sizeof(v2));
    v3 = 0;
    v4 = 0;
    v2[0] = 22;
    strcpy((char *)&v2[1], g_GameSetupBuffer);
    Player::BuildListString((wchar_t *)((char *)&v2[11] + 3));
    v0 = Game_PlayerCount;
    for ( i = 1; i < v0; ++i )
  {
    Network::SendMessage((int)g_NetworkManager, (int)v2, 455, 1, *(int *)(Game_PlayerInfoArray + 4 * i) + 40, 0, 0);
    Event::Dispatch();
  }
}
}
} // namespace gamemd
