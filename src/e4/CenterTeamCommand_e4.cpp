// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CenterTeamCommand_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"

// 0x5361A0
namespace gamemd {
void CenterTeamCommand::Construct( int a2)
{

  *(this + 1) = a2; /*0x5361a6*/
  *this = &vt_CenterTeamCommandClass; /*0x5361a9*/
  return this; /*0x5361af*/

}
} // namespace gamemd
// 0x5361C0
namespace gamemd {
void CenterTeamCommand::AddRef()
{

  sprintf(&HouseClass_Player.__pad_5568[25344], &stru_8271A0, (INIClass *)*((unsigned int *)this + 1)); /*0x5361ce*/
  return (ObjectClass *)&HouseClass_Player.__pad_5568[25344]; /*0x5361db*/

}
} // namespace gamemd
// 0x5361E0
namespace gamemd {
void CenterTeamCommand::Release()
{

  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = (wchar_t *)(*((unsigned int *)this + 1));
  StringCSF = GetStringCSF(MEMORY[0x8271B0], 0, g_Str_File_Init_CPP, 6361); /*0x5361f5*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x536200*/
  return &MEMORY[0xA8F654]; /*0x53620d*/

}
} // namespace gamemd