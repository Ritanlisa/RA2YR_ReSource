// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5D8CB0
int PlayerClass::SetHouse(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al

  result = this->vt_slot_4(a2); /*0x5d8cbb*/
  if ( result ) /*0x5d8cc0*/
  {
    *(_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * a2) + 107) = this->q008; /*0x5d8cd5*/
    return 1; /*0x5d8cd8*/
  }
  return result; /*0x5d8cc2*/
}
}

// 0x5D62C0
char PlayerClass::AssignPlayerIndex()
{
{
    int i;
    for ( i = 0; i < Game_PlayerCount; ++i )
  {
    if ( SessionClass::GetPlayerSide(*(int *)(Game_PlayerInfoArray + 4 * i)) == -3 )
    *(int *)(*(int *)(Game_PlayerInfoArray + 4 * i) + 107) = -1;
    else
    *(int *)(*(int *)(Game_PlayerInfoArray + 4 * i) + 107) = i;
  }
    return 1;
}
}

// 0x5D8C90
bool PlayerClass::IsValidIndex(int a1)
{
{
    return a1 >= 0 && a1 < Game_PlayerCount;
}
}
