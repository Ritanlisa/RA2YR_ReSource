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
namespace gamemd {  // G42.18 ns repair
_DWORD * AddTeamCommand::Construct(int a2, void *a2_2, void *a3, void *a4, void *a5, void *a6)
{

  this->AddTeamCommand_field_00 = a2; /*0x5360b6*/
  *(unsigned int *)this->CommandClass = (unsigned int)(&vt_AddTeamCommandClass); /*0x5360b9*/
  return this->CommandClass; /*0x5360bf*/

}
}  // G42.18 ns repair
} // namespace gamemd
// 0x5360D0
namespace gamemd {
char * AddTeamCommand::AddRef(void *a1)
{

  sprintf(&(  sprintf((char *const )(&(unsigned int *)((char *)&stru_A8EB00 + 2512)), "TeamAddSelect_%d", *(unsigned int *)&this->m_1[3]); 
  return &(unsigned int *)((char *)&stru_A8EB00 + 2512); /*0x5360eb*/

}
} // namespace gamemd
// 0x5360F0
namespace gamemd {
wchar_t * AddTeamCommand::Release(void *a1)
{

  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(const wchar_t **)&this->m_1[3]; /*0x5360f5*/
  StringCSF = GetStringCSF((wchar_t *)(aTxtAddSelectTe), 0,(const char *)(g_Str_File_Init_CPP), 6326); /*0x536105*/
  swprintf((wchar_t *const)&(unsigned int *)((char *)&stru_A8EB00 + 2672), (const size_t)StringCSF, v3); /*0x536110*/
  return (wchar_t *)&(unsigned int *)((char *)&stru_A8EB00 + 2672); /*0x53611d*/

}
} // namespace gamemd
// 0x536120
namespace gamemd {
void AddTeamCommand::ddtor()
{

  return Get  return GetStringCSF((wchar_t *)((const wchar_t *)(g_Str_TXT_TEAM)), 0,(const char *)(g_Str_File_Init_CPP), 6328); 

}
} // namespace gamemd