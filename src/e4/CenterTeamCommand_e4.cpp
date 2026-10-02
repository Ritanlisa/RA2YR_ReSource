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
namespace gamemd {  // G42.18 ns repair
_DWORD * CenterTeamCommand::Construct(int a2, void *a2_2, void *a3, void *a4, void *a5, void *a6)
{

  this->CenterTeamCommand_field_00 = a2; /*0x5361a6*/
  *(unsigned int *)this->CommandClass = (unsigned int)(&vt_CenterTeamCommandClass); /*0x5361a9*/
  return this->CommandClass; /*0x5361af*/

}
}  // G42.18 ns repair
} // namespace gamemd
// 0x5361C0
namespace gamemd {
char * CenterTeamCommand::AddRef(void *a1)
{

  sprintf((char *const )(&(unsigned int *)((char *)&stru_A8EB00 + 2512)), "TeamCenter_%d", *(unsigned int *)&this->m_1[3]); /*0x5361ce*/
  return &(unsigned int *)((char *)&stru_A8EB00 + 2512); /*0x5361db*/

}
} // namespace gamemd
// 0x5361E0
namespace gamemd {
wchar_t * CenterTeamCommand::Release(void *a1)
{

  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x5361e5*/
  StringCSF = GetStringCSF((wchar_t *)(aTxtCenterTeam), 0,(const char *)(g_Str_File_Init_CPP), 6361); /*0x5361f5*/
  swprintf((wchar_t *const)&(unsigned int *)((char *)&stru_A8EB00 + 2672), (const size_t)StringCSF, v3); /*0x536200*/
  return (wchar_t *)&(unsigned int *)((char *)&stru_A8EB00 + 2672); /*0x53620d*/

}
} // namespace gamemd