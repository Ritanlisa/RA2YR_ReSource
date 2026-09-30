// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DialogQueue_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DialogControl_e4.hpp"

// 0x5D4E70
namespace gamemd {
int DialogQueue::PushEntry()
{

  int result; // eax

  result = g_abs_ABFC98; /*0x5d4e70*/
  if ( g_abs_ABFCA0 < g_abs_ABFC98 /*0x5d4eac*/
    || (g_abs_ABFC9D || !g_abs_ABFC98)
    && g_abs_ABFCA4 > 0
    && (result = (*(int (**)(int *, int, unsigned int))(g_abs_ABFC90 + 8))(
                   &g_abs_ABFC90,
                   g_abs_ABFC98 + g_abs_ABFCA4,
                   0),
        (unsigned char)result) )
  {
    result = g_abs_ABFCA0++; /*0x5d4eb4*/
    *((unsigned int *)g_abs_ABFC94 + result) = this; /*0x5d4ec3*/
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
  result = (*(int (**)(int *, void **))(g_abs_ABFC90 + 16))(&g_abs_ABFC90, &v2); /*0x5d4ee5*/
  if ( result != -1 && result < g_abs_ABFCA0 && result < --g_abs_ABFCA0 ) /*0x5d4f00*/
  {
    do /*0x5d4f18*/
    {
      ++result; /*0x5d4f08*/
      *((unsigned int *)g_abs_ABFC94 + result - 1) = *((unsigned int *)g_abs_ABFC94 + result); /*0x5d4f0c*/
    }
    while ( result < g_abs_ABFCA0 ); /*0x5d4f18*/
  }
  return result; /*0x5d4f1b*/

}
} // namespace gamemd