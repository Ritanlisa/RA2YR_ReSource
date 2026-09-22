// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x53AB70
namespace gamemd {
int sub_53AB70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  char * v0 = (char *)g_ScenarioClass_Instance + 4680; /*0x53ab7b*/
  unk_A9FABC = 1; /*0x53ab81*/
  unk_827FCC = 30; /*0x53ab8b*/
  unk_827FC8 = (int)g_CurrentFrame; /*0x53ab95*/
  *((_DWORD *)g_ScenarioClass_Instance + 1170) = g_CurrentFrame; /*0x53ab9a*/
  int v2; // [esp+Ch] [ebp-8h]
  *((_DWORD *)v0 + 1) = v2; /*0x53aba8*/
  *((_DWORD *)v0 + 2) = 1; /*0x53abad*/
  *((_DWORD *)g_ScenarioClass_Instance + 3404) = *((_DWORD *)g_ScenarioClass_Instance + 3416); /*0x53abbd*/
  UpdateSurfaceAnimations( /*0x53ac39*/
    1000 * *((_DWORD *)g_ScenarioClass_Instance + 3417) / 100,
    1000 * *((_DWORD *)g_ScenarioClass_Instance + 3418) / 100,
    1000 * *((_DWORD *)g_ScenarioClass_Instance + 3419) / 100,
    1);
  return MapClass::MarkForRedraw(&DataGlobal_87F7E8, 1); /*0x53ac4a*/
}
}
} // namespace gamemd

// 0x5C0080
namespace gamemd {
char sub_5C0080(char ** a1, unsigned char * a2)
{
{
    char result;
    if ( g_BigIntPool )
    return 0;
    g_BigIntPool = (int)a1;
    result = VQAClass::AdvanceFrame(*a1, a2);
    g_BigIntPool = 0;
    return result;
}
}
} // namespace gamemd
