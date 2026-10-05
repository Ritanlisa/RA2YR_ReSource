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
namespace gamemd {
_DWORD * TauntCommandClass::Construct(int a2, void *a2_2, void *a3, void *a4, void *a5, void *a6)
{

  this->TauntCommandClass_field_00 = a2; /*0x536296*/
  *(unsigned int *)this->CommandClass = (unsigned int)(&vt_TauntCommandClass); /*0x536299*/
  return (_DWORD *)(this->CommandClass); /*0x53629f*/

}
} // namespace gamemd
// 0x5362B0
namespace gamemd {
char * TauntCommandClass::AddRef()
{

  sprintf((char *const )((unsigned int *)((char *)&stru_A8EB00 + 2512)), "Taunt_%d", this->TauntCommandClass_field_00); /*0x5362be*/
return (char *)(unsigned int *)((char *)&stru_A8EB00 + 2512); /*0x5362cb*/

}
} // namespace gamemd
// 0x5362D0
namespace gamemd {
wchar_t * TauntCommandClass::Release()
{

  wchar_t *StringCSF; // eax
  const wchar_t *TauntCommandClass_field_00; // [esp-4h] [ebp-4h]

  TauntCommandClass_field_00 = (const wchar_t *)this->TauntCommandClass_field_00; /*0x5362d5*/
  StringCSF = GetStringCSF((wchar_t *)(aTxtTauntNumber), 0,(const char *)(g_Str_File_Init_CPP), 6400); /*0x5362e5*/
  swprintf((wchar_t *const)(unsigned int *)((char *)&stru_A8EB00 + 2672), (const size_t)StringCSF, TauntCommandClass_field_00); /*0x5362f0*/
  return (wchar_t *)(unsigned int *)((char *)&stru_A8EB00 + 2672); /*0x5362fd*/

}
} // namespace gamemd
// 0x536300
namespace gamemd {
wchar_t TauntCommandClass::ddtor()
{

  return GetStringCSF((wchar_t *)(aTxtTaunt), 0,(const char *)(g_Str_File_Init_CPP), 6405); /*0x536316*/

}
} // namespace gamemd