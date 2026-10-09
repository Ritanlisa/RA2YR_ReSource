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
_DWORD * CenterTeamCommand::Construct(int a2, void *a2_2, void *a3, void *a4, void *a5, void *a6)
{
  this->CenterTeamCommand_field_00 = a2; /*0x5361a6*/
  *(_DWORD *)this->CommandClass = &(void*)(void*)&CenterTeamCommandClass_vftable; /*0x5361a9*/
  return this->CommandClass; /*0x5361af*/
}
} // namespace gamemd
// 0x5361C0
namespace gamemd {
char * CenterTeamCommand::AddRef()
{
  sprintf(&stru_A8EB00.?[2512], "TeamCenter_%d", *(_DWORD *)&this->m_1[3]); /*0x5361ce*/
  return &stru_A8EB00.?[2512]; /*0x5361db*/
}
} // namespace gamemd
// 0x5361E0
namespace gamemd {
wchar_t * CenterTeamCommand::Release()
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x5361e5*/
  StringCSF = GetStringCSF(aTxtCenterTeam, 0, g_Str_File_Init_CPP, 6361); /*0x5361f5*/
  swprintf((wchar_t *const)&stru_A8EB00.?[2672], (const size_t)StringCSF, v3); /*0x536200*/
  return (wchar_t *)&stru_A8EB00.?[2672]; /*0x53620d*/
}
} // namespace gamemd