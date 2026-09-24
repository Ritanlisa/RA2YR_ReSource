// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5DB600_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Network_e4.hpp"

// 0x5DAF30
namespace gamemd {
void sub_5DAF30()
{
  int v0; // edi
  int i; // esi
  _DWORD v2[113]; // [esp+8h] [ebp-1C8h] BYREF
  __int16 v3; // [esp+1CCh] [ebp-4h]
  char v4; // [esp+1CEh] [ebp-2h]

  memset(v2, 0, sizeof(v2)); /*0x5daf47*/
  v3 = 0; /*0x5daf49*/
  v4 = 0; /*0x5daf4b*/
  v2[0] = 22; /*0x5daf56*/
  strcpy((char *)&v2[1], g_GameSetupBuffer); /*0x5daf6d*/
  Player::BuildListString((wchar_t *)((char *)&v2[11] + 3)); /*0x5daf7a*/
  v0 = Game_PlayerCount; /*0x5daf7f*/
  for ( i = 1; i < v0; ++i ) /*0x5daf8c*/
  {
    Network::SendMessage((int)g_NetworkManager, (int)v2, 455, 1, *(_DWORD *)(Game_PlayerInfoArray + 4 * i) + 40, 0, 0); /*0x5dafb0*/
    Event::Dispatch(); /*0x5dafb5*/
  }
}
} // namespace gamemd
