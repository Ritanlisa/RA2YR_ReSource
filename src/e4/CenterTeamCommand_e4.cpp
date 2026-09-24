// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5361A0
unsigned int * CenterTeamCommand::Construct(int a2)
{
  *(this + 1) = a2; /*0x5361a6*/
  *this = &CenterTeamCommandClass::`vftable'; /*0x5361a9*/
  return this; /*0x5361af*/
}
// 0x5361C0
void * CenterTeamCommand::AddRef()
{
  sprintf(byte_A8F5B4, "TeamCenter_%d", *(this + 1)); /*0x5361ce*/
  return byte_A8F5B4; /*0x5361db*/
}
// 0x5361E0
void * CenterTeamCommand::Release()
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(this + 1); /*0x5361e5*/
  StringCSF = GetStringCSF(aTxtCenterTeam, 0, g_Str_File_Init_CPP, 6361); /*0x5361f5*/
  swprintf(&g_TeamCommandBuffer, (const size_t)StringCSF, v3); /*0x536200*/
  return &g_TeamCommandBuffer; /*0x53620d*/
}