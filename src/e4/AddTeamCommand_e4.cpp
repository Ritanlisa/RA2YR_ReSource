// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AddTeamCommand_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x5360B0
namespace gamemd {
void AddTeamCommand::Construct( int a2)
{

  *(this + 1) = a2; /*0x5360b6*/
  *this = &vt_AddTeamCommandClass; /*0x5360b9*/
  return this; /*0x5360bf*/

}
} // namespace gamemd
// 0x5360D0
namespace gamemd {
void AddTeamCommand::AddRef()
{

  sprintf( /*0x5360de*/
    &HouseClass_Player.__pad_5568[25344],
    (ObjectClass *)&stru_8270D8.customSound_controller[3],
    (INIClass *)*((unsigned int *)this + 1));
  return (ObjectClass *)&HouseClass_Player.__pad_5568[25344]; /*0x5360eb*/

}
} // namespace gamemd
// 0x5360F0
namespace gamemd {
void AddTeamCommand::Release()
{

  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = (wchar_t *)(*((unsigned int *)this + 1));
  StringCSF = (wchar_t *)(GetStringCSF(MEMORY[0x827148], 0, g_Str_File_Init_CPP, 6326));
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x536110*/
  return &MEMORY[0xA8F654]; /*0x53611d*/

}
} // namespace gamemd
// 0x536120
namespace gamemd {
void AddTeamCommand::ddtor()
{

  return GetStringCSF(g_abs_826FA4, 0, g_Str_File_Init_CPP, 6328); /*0x536136*/

}
} // namespace gamemd