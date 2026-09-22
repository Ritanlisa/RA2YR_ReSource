// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5D4E70
int DialogQueue::PushEntry()
{
{
  int result; // eax

  result = DataGlobal_ABFC98; /*0x5d4e70*/
  if ( DataGlobal_ABFCA0 < DataGlobal_ABFC98 /*0x5d4eac*/
    || (DataGlobal_ABFC9D || !DataGlobal_ABFC98)
    && DataGlobal_ABFCA4 > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(DataGlobal_ABFC90 + 8))(
                   &DataGlobal_ABFC90,
                   DataGlobal_ABFC98 + DataGlobal_ABFCA4,
                   0),
        (_BYTE)result) )
  {
    result = DataGlobal_ABFCA0++; /*0x5d4eb4*/
    *((_DWORD *)DataGlobal_ABFC94 + result) = this; /*0x5d4ec3*/
  }
  return result; /*0x5d4ec6*/
}
}

// 0x5D4ED0
int DialogQueue::RemoveEntry()
{
{
  int result; // eax

  DialogQueue *v2 = this; /*0x5d4ed7*/
  result = (*(int (__thiscall **)(int *, void **))(DataGlobal_ABFC90 + 16))(&DataGlobal_ABFC90, &v2); /*0x5d4ee5*/
  if ( result != -1 && result < DataGlobal_ABFCA0 && result < --DataGlobal_ABFCA0 ) /*0x5d4f00*/
  {
    do /*0x5d4f18*/
    {
      ++result; /*0x5d4f08*/
      *((_DWORD *)DataGlobal_ABFC94 + result - 1) = *((_DWORD *)DataGlobal_ABFC94 + result); /*0x5d4f0c*/
    }
    while ( result < DataGlobal_ABFCA0 ); /*0x5d4f18*/
  }
  return result; /*0x5d4f1b*/
}
}
