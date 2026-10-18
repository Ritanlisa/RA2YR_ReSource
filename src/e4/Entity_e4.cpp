// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/VQAClass_e4.hpp"

// 0x53AB70
namespace gamemd {  // G42.18 ns repair
int sub_53AB70()
{

  char *v0 = &dword_A8B230->ambientTimer; // edx /*0x53ab7b*/
  NukeFlash_Status = 1; /*0x53ab81*/
  NukeFlash_Duration = 30; /*0x53ab8b*/
  NukeFlash_StartTime = (int)dword_A8ED84; /*0x53ab95*/
  dword_A8B230->ambientTimer = dword_A8ED84; /*0x53ab9a*/
  int v2; // [esp+Ch] [ebp-8h]
  v0->__pad_004 = v2; /*0x53aba8*/
  v0->u32_8 = 1; /*0x53abad*/
  dword_A8B230[378].ptr_8 = dword_A8B230[379].abstractFlags; /*0x53abbd*/
  UpdateSurfaceAnimations( /*0x53ac39*/
    1000 * dword_A8B230->stage / 100,
    1000 * dword_A8B230[379].referenceCount / 100,
    1000 * dword_A8B230[379].NeedsSaveOrLink / 100,
    1);
  return MapClass::MarkForRedraw(&dword_87F7E8, 1); /*0x53ac4a*/
}
}  // G42.18 ns repair
// 0x5C0080
namespace gamemd {
char sub_5C0080(char ** a1, unsigned char * a2)
{

  if ( dword_ABF3F4 ) /*0x5c0087*/
    return 0; /*0x5c0089*/
  dword_ABF3F4 = (int)a1; /*0x5c008c*/
  char result; // al
  result = (*a1)->AdvanceFrame(a2); /*0x5c0095*/
  dword_ABF3F4 = 0; /*0x5c009a*/
  return result; /*0x5c008b*/
}
} // namespace gamemd
