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
  unsigned int result;

  result = dword_ABFC98; /*0x5d4e70*/
  if ( dword_ABFCA0 < dword_ABFC98 /*0x5d4eac*/
    || (byte_ABFC9D || !dword_ABFC98)
    && dword_ABFCA4 > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(dword_ABFC90 + 8))(
                   &dword_ABFC90,
                   dword_ABFC98 + dword_ABFCA4,
                   0),
        (_BYTE)result) )
  {
    result = dword_ABFCA0++; /*0x5d4eb4*/
    *((_DWORD *)dword_ABFC94 + result) = this; /*0x5d4ec3*/
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
  result = (*(int (__thiscall **)(int *, void **))(dword_ABFC90 + 16))(&dword_ABFC90, &v2); /*0x5d4ee5*/
  if ( result != -1 && result < dword_ABFCA0 && result < --dword_ABFCA0 ) /*0x5d4f00*/
  {
    do /*0x5d4f18*/
    {
      ++result; /*0x5d4f08*/
      *((_DWORD *)dword_ABFC94 + result - 1) = *((_DWORD *)dword_ABFC94 + result); /*0x5d4f0c*/
    }
    while ( result < dword_ABFCA0 ); /*0x5d4f18*/
  }
  return result; /*0x5d4f1b*/
}
} // namespace gamemd