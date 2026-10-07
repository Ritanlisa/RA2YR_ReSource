// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DialogQueue_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DialogControl_e4.hpp"
#include "e4/classes/Movie_e4.hpp"

// 0x5D4E70
namespace gamemd {
int DialogQueue::PushEntry(void *a1)
{

  int result; // eax

  result = (unsigned int)(&dword_ABFC98); /*0x5d4e70*/
  if ( &dword_ABFCA0 < &dword_ABFC98 /*0x5d4eac*/
    || (BYTE1(&byte_ABFC9C) || !&dword_ABFC98)
    && &dword_ABFCA4 > 0
&& (result = (*(int (**)(int *, int, unsigned int))(&dword_ABFC90 + 8))( (int *)(&g_MissionQueueFrame.ls640BkgdName[7]), &dword_ABFC98 + &dword_ABFCA4, 0), (unsigned char)result) )




  {
    result = (unsigned int)(&dword_ABFCA0++); /*0x5d4eb4*/
    *(unsigned int *)(&dword_ABFC94 + 4 * result) = (unsigned int)this;
  }
  return result; /*0x5d4ec6*/

}
} // namespace gamemd
// 0x5D4ED0
namespace gamemd {
int DialogQueue::RemoveEntry()
{

  int result; // eax
  DialogQueue *v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this; /*0x5d4ed7*/
result = (*(int (**)(int *, DialogQueue **))(&dword_ABFC90 + 16))( /*0x5d4ee5*/ &g_MissionQueueFrame.ls640BkgdName[7], (DialogQueue **)(&v2));


  if ( result != -1 && result < dword_ABFCA0 ) /*0x5d4ef5*/
  {
    --&dword_ABFCA0; /*0x5d4efa*/
    for ( ; /*0x5d4f00*/
          result < *(unsigned int *)&dword_ABFCA0;
          *(unsigned int *)(&dword_ABFC94 + 4 * result - 4) = *(unsigned int *)(&dword_ABFC94
                                                                                         + 4 * result) )
    {
      ++result; /*0x5d4f08*/
    }
  }
  return result; /*0x5d4f1b*/

}
} // namespace gamemd
