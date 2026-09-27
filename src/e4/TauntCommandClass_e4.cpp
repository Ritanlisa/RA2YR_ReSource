// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/TauntCommandClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/TaskForceClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"

// 0x536290
namespace gamemd {
unsigned int * TauntCommandClass::Construct(int a2)
{
  this->TauntCommandClass_field_00 = a2; /*0x536296*/
  return this; /*0x53629f*/
}
} // namespace gamemd
// 0x5362B0
namespace gamemd {
void * TauntCommandClass::AddRef()
{
  sprintf(byte_A8F5B4, "Taunt_%d", this->TauntCommandClass_field_00); /*0x5362be*/
  return byte_A8F5B4; /*0x5362cb*/
}
} // namespace gamemd
// 0x5362D0
namespace gamemd {
void * TauntCommandClass::Release()
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = this->TauntCommandClass_field_00; /*0x5362d5*/
  StringCSF = GetStringCSF(aTxtTauntNumber, 0, g_Str_File_Init_CPP, 6400); /*0x5362e5*/
  swprintf(&g_TeamCommandBuffer, (const size_t)StringCSF, v3); /*0x5362f0*/
  return &g_TeamCommandBuffer; /*0x5362fd*/
}
} // namespace gamemd
// 0x536300
namespace gamemd {
wchar_t * TauntCommandClass::ddtor()
{
  return GetStringCSF(aTxtTaunt, 0, g_Str_File_Init_CPP, 6405); /*0x536316*/
}
} // namespace gamemd