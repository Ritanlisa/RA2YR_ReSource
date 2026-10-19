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
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/TagTypeClass_e4.hpp"
#include "e4/classes/TemporalClass_e4.hpp"
#include "e4/classes/UnitTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x536290
namespace gamemd {  // G42.18 ns repair
unsigned int * TauntCommandClass::Construct(int a2, void *a2_2, void *a3, void *a4, void *a5, void *a6)
{

  a2_2->TauntCommandClass_field_00 = a2_2; /*0x536296*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EBEDC) */  /*0x536299*/
  return a2_2->CommandClass; /*0x53629f*/

}
} // namespace gamemd
// 0x5362B0
namespace gamemd {
char * TauntCommandClass::AddRef()
{
  sprintf(&((unsigned int *)&stru_A8EB00)[2512], "Taunt_%d", this->TauntCommandClass_field_00); /*0x5362be*/
  return (char *)(&((unsigned int *)&stru_A8EB00)[2512]); /*0x5362cb*/
}
} // namespace gamemd
// 0x5362D0
namespace gamemd {
wchar_t * TauntCommandClass::Release(void *a1)
{

  const wchar_t *TauntCommandClass_field_00; // [esp-4h] [ebp-4h]
  TauntCommandClass_field_00 = (const wchar_t *)this->TauntCommandClass_field_00; /*0x5362d5*/
  wchar_t *StringCSF; // eax
  StringCSF = GetStringCSF((char *)(aTxtTauntNumber), 0, g_Str_File_Init_CPP, 6400); /*0x5362e5*/
  swprintf((wchar_t *const)&((unsigned int *)&stru_A8EB00)[2672], (const size_t)StringCSF, TauntCommandClass_field_00); /*0x5362f0*/
  return (wchar_t *)&((unsigned int *)&stru_A8EB00)[2672]; /*0x5362fd*/
}
} // namespace gamemd
// 0x536300
namespace gamemd {
wchar_t TauntCommandClass::ddtor(void *a1)
{
  return GetStringCSF((char *)(aTxtTaunt), 0, g_Str_File_Init_CPP, 6405); /*0x536316*/
}
} // namespace gamemd