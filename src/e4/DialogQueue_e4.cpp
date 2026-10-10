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
namespace gamemd {  // G42.18 ns repair
int DialogQueue::PushEntry(void *a1)
{
  int result; // eax

  result = g_MissionQueueFrame.ls640BkgdName[9]; /*0x5d4e70*/
  if ( g_MissionQueueFrame.ls640BkgdName[11] < g_MissionQueueFrame.ls640BkgdName[9] /*0x5d4eac*/
    || ((((unsigned char *)&(g_MissionQueueFrame.ls640BkgdName[10]))[1]) || !g_MissionQueueFrame.ls640BkgdName[9])
    && g_MissionQueueFrame.ls640BkgdName[12] > 0
    && (result = (*(int (**)(int *, int, unsigned int))(g_MissionQueueFrame.ls640BkgdName[7] + 8))(
                   &g_MissionQueueFrame.ls640BkgdName[7],
                   g_MissionQueueFrame.ls640BkgdName[9] + g_MissionQueueFrame.ls640BkgdName[12],
                   0),
        (unsigned char)result) )
  {
    result = g_MissionQueueFrame.ls640BkgdName[11]++; /*0x5d4eb4*/
    *(unsigned int *)(g_MissionQueueFrame.ls640BkgdName[8] + 4 * result) = a1; /*0x5d4ec3*/
  }
  return result; /*0x5d4ec6*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x5D4ED0
namespace gamemd {
int DialogQueue::RemoveEntry()
{
  int result; // eax
  DialogQueue *v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this; /*0x5d4ed7*/
  result = (*(int (**)(int *, DialogQueue **))(g_MissionQueueFrame.ls640BkgdName[7] + 16))( /*0x5d4ee5*/
             &g_MissionQueueFrame.ls640BkgdName[7],
             &v2);
  if ( result != -1 && result < g_MissionQueueFrame.ls640BkgdName[11] ) /*0x5d4ef5*/
  {
    --g_MissionQueueFrame.ls640BkgdName[11]; /*0x5d4efa*/
    for ( ; /*0x5d4f00*/
          result < g_MissionQueueFrame.ls640BkgdName[11];
          *(unsigned int *)(g_MissionQueueFrame.ls640BkgdName[8] + 4 * result - 4) = *(unsigned int *)(g_MissionQueueFrame.ls640BkgdName[8]
                                                                                         + 4 * result) )
    {
      ++result; /*0x5d4f08*/
    }
  }
  return result; /*0x5d4f1b*/
}
} // namespace gamemd
