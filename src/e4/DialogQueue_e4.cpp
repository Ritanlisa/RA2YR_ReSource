// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DialogQueue_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5D4E70
namespace gamemd {
int DialogQueue::PushEntry()
{

  int result; // eax

  result = MEMORY[0xABFC98]; /*0x5d4e70*/
  if ( MEMORY[0xABFCA0] < MEMORY[0xABFC98] /*0x5d4eac*/
    || (MEMORY[0xABFC9D] || !MEMORY[0xABFC98])
    && MEMORY[0xABFCA4] > 0
    && (result = (*(int (**)(int *, int, unsigned int))(MEMORY[0xABFC90] + 8))(
                   &MEMORY[0xABFC90],
                   MEMORY[0xABFC98] + MEMORY[0xABFCA4],
                   0),
        (unsigned char)result) )
  {
    result = MEMORY[0xABFCA0]++; /*0x5d4eb4*/
    *((unsigned int *)MEMORY[0xABFC94] + result) = this; /*0x5d4ec3*/
  }
  return result; /*0x5d4ec6*/

}
} // namespace gamemd
// 0x5D4ED0
namespace gamemd {
int DialogQueue::RemoveEntry()
{

  int result; // eax
  void *v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this; /*0x5d4ed7*/
  result = (*(int (**)(int *, void **))(MEMORY[0xABFC90] + 16))(&MEMORY[0xABFC90], &v2); /*0x5d4ee5*/
  if ( result != -1 && result < MEMORY[0xABFCA0] && result < --MEMORY[0xABFCA0] ) /*0x5d4f00*/
  {
    do /*0x5d4f18*/
    {
      ++result; /*0x5d4f08*/
      *((unsigned int *)MEMORY[0xABFC94] + result - 1) = *((unsigned int *)MEMORY[0xABFC94] + result); /*0x5d4f0c*/
    }
    while ( result < MEMORY[0xABFCA0] ); /*0x5d4f18*/
  }
  return result; /*0x5d4f1b*/

}
} // namespace gamemd