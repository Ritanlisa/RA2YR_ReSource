// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/Text_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/Delegate_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DamageArea_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"

// 0x5BD0D0
namespace gamemd {
char Debug::ScrollText(const char * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5BD0D0)
}
}
// 0x6E61F0
namespace gamemd {
int Debug::AccumFlags()
{

  TriggerTypeClass *Debug_field_0xA0; // esi
  int i; // edi
  int Flags; // eax

  Debug_field_0xA0 = (TriggerTypeClass *)this->Debug_field_0xA0; /*0x6e61f1*/
  for ( i = 0; Debug_field_0xA0; i |= Flags ) /*0x6e61fc*/
  {
    Flags = TriggerTypeClass::GetFlags(Debug_field_0xA0); /*0x6e6200*/
    Debug_field_0xA0 = Debug_field_0xA0->NextTrigger; /*0x6e6205*/
  }
  return i; /*0x6e6213*/

}
}
// 0x4068E0
namespace gamemd {
int Debug::Log()
{

  int result; // eax

  return result; /*0x4068e0*/

}
} // namespace gamemd

// 0x4A4AC0
namespace gamemd {
void Debug::Log_0(void *a1_1, void *a2_1)
{

  ; /*0x4a4ac0*/

}
} // namespace gamemd

// 0x5BD1F0
namespace gamemd {
char Debug::Printf()
{

  char result; // al
  char Buffer[256]; // [esp+0h] [ebp-100h] BYREF
  va_list va; // [esp+10Ch] [ebp+Ch] BYREF

  va_start(va, Format);
  result = byte_ABF23A; /*0x5bd1f0*/
  if ( byte_ABF23A ) /*0x5bd1fd*/
  {
    vsprintf(Buffer,(const char *const )(Format), va); /*0x5bd214*/
    Buffer[255] = 0; /*0x5bd227*/
    return Debug::ScrollText((const char *)(int)(Buffer)); /*0x5bd230*/
  }
  return result; /*0x5bd235*/

}
} // namespace gamemd

// 0x5BD360
namespace gamemd {
char Debug_Helper(ObjectClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5BD360)
}
} // namespace gamemd
