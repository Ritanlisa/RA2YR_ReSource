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
unsigned int * CenterTeamCommand::Construct(int a2)
{
  this->CenterTeamCommand_field_00 = a2; /*0x5361a6*/
  *(void **)this = (void*)&CenterTeamCommandClass_vftable; /*0x5361a9*/
  return this; /*0x5361af*/
}
} // namespace gamemd
// 0x5361C0
namespace gamemd {
void * CenterTeamCommand::AddRef()
{
  sprintf(byte_A8F5B4, "TeamCenter_%d", this->CenterTeamCommand_field_00); /*0x5361ce*/
  return byte_A8F5B4; /*0x5361db*/
}
} // namespace gamemd
// 0x5361E0
namespace gamemd {
void * CenterTeamCommand::Release()
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = this->CenterTeamCommand_field_00; /*0x5361e5*/
  StringCSF = GetStringCSF(aTxtCenterTeam, 0, g_Str_File_Init_CPP, 6361); /*0x5361f5*/
  swprintf(&g_TeamCommandBuffer, (const size_t)StringCSF, v3); /*0x536200*/
  return &g_TeamCommandBuffer; /*0x53620d*/
}
} // namespace gamemd