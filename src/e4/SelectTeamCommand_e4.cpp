// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SelectTeamCommand_e4.hpp"
#include "e4/classes/Selection_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x535FC0
namespace gamemd {
void SelectTeamCommand::Construct( int a2)
{

  *(this + 1) = a2; /*0x535fc6*/
  *this = &vt_SelectTeamCommandClass; /*0x535fc9*/
  return this; /*0x535fcf*/

}
} // namespace gamemd
// 0x535FE0
namespace gamemd {
void SelectTeamCommand::AddRef()
{

  sprintf(&HouseClass_Player.__pad_5568[25344], &stru_8270D8, (INIClass *)*((unsigned int *)this + 1)); /*0x535fee*/
  return (ObjectClass *)&HouseClass_Player.__pad_5568[25344]; /*0x535ffb*/

}
} // namespace gamemd
// 0x536000
namespace gamemd {
void SelectTeamCommand::Release()
{

  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = (wchar_t *)(*((unsigned int *)this + 1));
  StringCSF = (wchar_t *)(GetStringCSF(MEMORY[0x8270E8], 0, g_Str_File_Init_CPP, 6292));
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x536020*/
  return &MEMORY[0xA8F654]; /*0x53602d*/

}
} // namespace gamemd
// 0x536030
namespace gamemd {
void SelectTeamCommand::ddtor()
{

  return GetStringCSF(g_abs_826FA4, 0, g_Str_File_Init_CPP, 6294); /*0x536046*/

}
} // namespace gamemd