// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_PlayerClass 1  // G57b: e4 flat-carrier opt-in (suppress core/aux twin)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/PlayerClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5D8CB0
namespace gamemd {  // G42.18 ns repair
int PlayerClass::SetHouse(int a2)
{

  char result; // al

  result = (*(int (**)(MultiplayerTeam *, int))(*(unsigned int *)this->__pad_000 + 4))(this, a2); /*0x5d8cbb*/
  if ( result ) /*0x5d8cc0*/
  {
    *(unsigned int *)(dword_A8DA78[a2] + 107) = this->u32_8; /*0x5d8cd5*/
    return 1; /*0x5d8cd8*/
  }
  return result; /*0x5d8cc2*/

}
} // namespace gamemd
// 0x5D62C0
namespace gamemd {
char PlayerClass::AssignPlayerIndex()
{
  int i; // esi

  for ( i = 0; i < dword_A8DA84; ++i ) /*0x5d62ca*/
  {
    if ( SessionClass::GetPlayerSide((int *)dword_A8DA78[i]) == -3 ) /*0x5d62dc*/
      *(unsigned int *)(dword_A8DA78[i] + 107) = -1; /*0x5d62e7*/
    else
      *(unsigned int *)(dword_A8DA78[i] + 107) = i; /*0x5d62f8*/
  }
  return 1; /*0x5d6307*/
}
} // namespace gamemd
// 0x5D8C90
namespace gamemd {
bool PlayerClass::IsValidIndex(int a1)
{
  return (int)a1 >= 0 && (int)a1 < dword_A8DA84; /*0x5d8ca2*/
}
} // namespace gamemd