// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SelectTeamCommand_e4.hpp"
#include "e4/classes/Selection_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x535FC0
namespace gamemd {  // G42.18 ns repair
unsigned int * SelectTeamCommand::Construct(int a2, void *a2_2, void *a3, void *a4, void *a5, void *a6)
{

  a2_2->SelectTeamCommand_field_00 = a2_2; /*0x535fc6*/
  *(unsigned int *)a2_2->CommandClass = &vt_SelectTeamCommandClass; /*0x535fc9*/
  return a2_2->CommandClass; /*0x535fcf*/

}
} // namespace gamemd
// 0x535FE0
namespace gamemd {
char * SelectTeamCommand::AddRef()
{
  sprintf(&((unsigned int *)&stru_A8EB00)[2512], "TeamSelect_%d", *&this->SelectTeamCommand_field_00); /*0x535fee*/
  return (char *)(&((unsigned int *)&stru_A8EB00)[2512]); /*0x535ffb*/
}
} // namespace gamemd
// 0x536000
namespace gamemd {
wchar_t * SelectTeamCommand::Release(void *a1)
{

  const wchar_t *v3; // [esp-4h] [ebp-4h]
  v3 = *(const wchar_t **)&this-((unsigned int *)(>m_1))[3]; /*0x536005*/
  wchar_t *StringCSF; // eax
  StringCSF = GetStringCSF((wchar_t *)(aTxtSelectTeam), 0, g_Str_File_Init_CPP, 6292); /*0x536015*/
  swprintf((wchar_t *const)&((unsigned int *)&stru_A8EB00)[2672], (const size_t)StringCSF, v3); /*0x536020*/
  return (wchar_t *)&((unsigned int *)&stru_A8EB00)[2672]; /*0x53602d*/
}
} // namespace gamemd
// 0x536030
namespace gamemd {
wchar_t * SelectTeamCommand::ddtor(void *a1)
{
  return GetStringCSF((wchar_t *)(g_Str_TXT_TEAM), 0, g_Str_File_Init_CPP, 6294); /*0x536046*/
}
} // namespace gamemd