// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AddTeamCommand_e4.hpp"
#include "e4/e4_protos.h"

// 0x5360B0
namespace gamemd {
unsigned int * AddTeamCommand::Construct(int a2)
{
  this->AddTeamCommand_field_00 = a2; /*0x5360b6*/
  *this = &(void*)(void*)&AddTeamCommandClass_vftable; /*0x5360b9*/
  return this; /*0x5360bf*/
}
} // namespace gamemd
// 0x5360D0
namespace gamemd {
void * AddTeamCommand::AddRef()
{
  sprintf(byte_A8F5B4, "TeamAddSelect_%d", this->AddTeamCommand_field_00); /*0x5360de*/
  return byte_A8F5B4; /*0x5360eb*/
}
} // namespace gamemd
// 0x5360F0
namespace gamemd {
void * AddTeamCommand::Release()
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = this->AddTeamCommand_field_00; /*0x5360f5*/
  StringCSF = GetStringCSF(aTxtAddSelectTe, 0, g_Str_File_Init_CPP, 6326); /*0x536105*/
  swprintf(&g_TeamCommandBuffer, (const size_t)StringCSF, v3); /*0x536110*/
  return &g_TeamCommandBuffer; /*0x53611d*/
}
} // namespace gamemd
// 0x536120
namespace gamemd {
wchar_t * AddTeamCommand::ddtor()
{
  return GetStringCSF(g_Str_TXT_TEAM, 0, g_Str_File_Init_CPP, 6328); /*0x536136*/
}
} // namespace gamemd