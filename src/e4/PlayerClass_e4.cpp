// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5D62C0
char PlayerClass::AssignPlayerIndex()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char PlayerClass_AssignPlayerIndex()
{
  int i; // esi

  for ( i = 0; i < MEMORY[0xA8DA84]; ++i ) /*0x5d62ca*/
  {
    if ( SessionClass::GetPlayerSide(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * i)) == -3 ) /*0x5d62dc*/
      *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * i) + 107) = -1; /*0x5d62e7*/
    else
      *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * i) + 107) = i; /*0x5d62f8*/
  }
  return 1; /*0x5d6307*/
}
}

// 0x5D8CB0
char PlayerClass::SetHouse(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall PlayerClass_SetHouse(_DWORD *this, int a2)
{
  char result; // al

  result = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2); /*0x5d8cbb*/
  if ( result ) /*0x5d8cc0*/
  {
    *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * a2) + 107) = *(this + 2); /*0x5d8cd5*/
    return 1; /*0x5d8cd8*/
  }
  return result; /*0x5d8cc2*/
}
}

// 0x5D8C90
bool PlayerClass::IsValidIndex(int a1)
{
{
    return a1 >= 0 && a1 < Game_PlayerCount;
}
}
