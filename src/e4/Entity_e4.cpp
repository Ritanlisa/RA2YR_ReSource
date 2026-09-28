// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"

// 0x53AB70
namespace gamemd {
int sub_53AB70()
{
  char *v0; // edx
  int v2; // [esp+Ch] [ebp-8h]

  v0 = (char *)g_ScenarioClass_Instance + 4680; /*0x53ab7b*/
  NukeFlash_Status = 1; /*0x53ab81*/
  NukeFlash_Duration = 30; /*0x53ab8b*/
  NukeFlash_StartTime = (int)g_CurrentFrame; /*0x53ab95*/
  *((unsigned int *)g_ScenarioClass_Instance + 1170) = g_CurrentFrame; /*0x53ab9a*/
  *((unsigned int *)v0 + 1) = v2; /*0x53aba8*/
  *((unsigned int *)v0 + 2) = 1; /*0x53abad*/
  *((unsigned int *)g_ScenarioClass_Instance + 3404) = *((unsigned int *)g_ScenarioClass_Instance + 3416); /*0x53abbd*/
  UpdateSurfaceAnimations( /*0x53ac39*/
    1000 * *((unsigned int *)g_ScenarioClass_Instance + 3417) / 100,
    1000 * *((unsigned int *)g_ScenarioClass_Instance + 3418) / 100,
    1000 * *((unsigned int *)g_ScenarioClass_Instance + 3419) / 100,
    1);
  return MapClass::MarkForRedraw(&MapClass_Instance, 1); /*0x53ac4a*/
}
}
// 0x5C0080
namespace gamemd {
char sub_5C0080(char ** a1, unsigned char * a2)
{
  char result; // al

  if ( g_BigIntPool ) /*0x5c0087*/
    return 0; /*0x5c0089*/
  g_BigIntPool = (int)a1; /*0x5c008c*/
  result = VQAClass::AdvanceFrame(*a1, a2); /*0x5c0095*/
  g_BigIntPool = 0; /*0x5c009a*/
  return result; /*0x5c008b*/
}
} // namespace gamemd
