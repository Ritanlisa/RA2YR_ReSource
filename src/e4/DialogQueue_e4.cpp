// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5D4E70
int DialogQueue::PushEntry()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5D4E70(void *this)
{
  int result; // eax

  result = MEMORY[0xABFC98]; /*0x5d4e70*/
  if ( MEMORY[0xABFCA0] < MEMORY[0xABFC98] /*0x5d4eac*/
    || (MEMORY[0xABFC9D] || !MEMORY[0xABFC98])
    && MEMORY[0xABFCA4] > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(MEMORY[0xABFC90] + 8))(
                   &MEMORY[0xABFC90],
                   MEMORY[0xABFC98] + MEMORY[0xABFCA4],
                   0),
        (_BYTE)result) )
  {
    result = MEMORY[0xABFCA0]++; /*0x5d4eb4*/
    *((_DWORD *)MEMORY[0xABFC94] + result) = this; /*0x5d4ec3*/
  }
  return result; /*0x5d4ec6*/
}
}

// 0x5D4ED0
int DialogQueue::RemoveEntry()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DialogQueue::RemoveEntry(void *this)
{
  int result; // eax
  void *v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this; /*0x5d4ed7*/
  result = (*(int (__thiscall **)(int *, void **))(MEMORY[0xABFC90] + 16))(&MEMORY[0xABFC90], &v2); /*0x5d4ee5*/
  if ( result != -1 && result < MEMORY[0xABFCA0] && result < --MEMORY[0xABFCA0] ) /*0x5d4f00*/
  {
    do /*0x5d4f18*/
    {
      ++result; /*0x5d4f08*/
      *((_DWORD *)MEMORY[0xABFC94] + result - 1) = *((_DWORD *)MEMORY[0xABFC94] + result); /*0x5d4f0c*/
    }
    while ( result < MEMORY[0xABFCA0] ); /*0x5d4f18*/
  }
  return result; /*0x5d4f1b*/
}
}
