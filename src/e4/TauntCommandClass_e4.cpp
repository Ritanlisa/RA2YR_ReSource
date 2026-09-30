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
void TauntCommandClass::Construct( int a2)
{

  *(this + 1) = a2; /*0x536296*/
  *this = &vt_TauntCommandClass; /*0x536299*/
  return this; /*0x53629f*/

}
} // namespace gamemd
// 0x5362B0
namespace gamemd {
void TauntCommandClass::AddRef()
{

  sprintf( /*0x5362be*/
    &HouseClass_Player.__pad_5568[25344],
    (ObjectClass *)&stru_8271A0.customSound_controller[2],
    (INIClass *)*((unsigned int *)this + 1));
  return (ObjectClass *)&HouseClass_Player.__pad_5568[25344]; /*0x5362cb*/

}
} // namespace gamemd
// 0x5362D0
namespace gamemd {
void TauntCommandClass::Release()
{

  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = (wchar_t *)(*((unsigned int *)this + 1));
  StringCSF = (wchar_t *)(GetStringCSF(MEMORY[0x827204], 0, g_Str_File_Init_CPP, 6400));
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x5362f0*/
  return &MEMORY[0xA8F654]; /*0x5362fd*/

}
} // namespace gamemd
// 0x536300
namespace gamemd {
void TauntCommandClass::ddtor()
{

  return GetStringCSF(g_abs_827218, 0, g_Str_File_Init_CPP, 6405); /*0x536316*/

}
} // namespace gamemd