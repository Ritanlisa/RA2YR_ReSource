// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6C61C0_e4.hpp"
#include "e4/classes/COM_e4.hpp"
#include "e4/classes/CSF_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x43A500
namespace gamemd {  // G42.18 ns repair
int COM::GetClassID(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x43a506*/
    return -2147467261; /*0x43a508*/
  *a2 = 605729558; /*0x43a516*/
  a2[1] = 298994933; /*0x43a51e*/
  a2[2] = 268445372; /*0x43a527*/
  a2[3] = unk_7E998C; /*0x43a530*/
  return 0; /*0x43a50d*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x55A950
namespace gamemd {
LONG COM::AddRef(int a1)
{
  ++*(unsigned int *)&g_MissionQueueFrame.waypoints[274]; /*0x55a95f*/
  return InterlockedIncrement(&a1->RefCount); /*0x55a96b*/
}
} // namespace gamemd
// 0x55A970
namespace gamemd {
LONG COM::ReleaseRef(volatile LONG * a1)
{
  LONG v1; // esi

  --*(unsigned int *)&g_MissionQueueFrame.waypoints[274]; /*0x55a980*/
  v1 = InterlockedDecrement(&a1->RefCount); /*0x55a98d*/
  if ( !v1 && a1 ) /*0x55a995*/
    (*(void (**)(LocomotionClass *, int))(*(unsigned int *)a1->ILocomotion + 32))(a1, 1); /*0x55a99d*/
  return v1; /*0x55a9a2*/
}
} // namespace gamemd