// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x535FC0
unsigned int * SelectTeamCommand::Construct(int a2)
{
  *(this + 1) = a2; /*0x535fc6*/
  *this = &SelectTeamCommandClass::`vftable'; /*0x535fc9*/
  return this; /*0x535fcf*/
}
// 0x535FE0
void * SelectTeamCommand::AddRef()
{
  sprintf(byte_A8F5B4, "TeamSelect_%d", *(this + 1)); /*0x535fee*/
  return byte_A8F5B4; /*0x535ffb*/
}
// 0x536000
void * SelectTeamCommand::Release()
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(this + 1); /*0x536005*/
  StringCSF = GetStringCSF(aTxtSelectTeam, 0, g_Str_File_Init_CPP, 6292); /*0x536015*/
  swprintf(&g_TeamCommandBuffer, (const size_t)StringCSF, v3); /*0x536020*/
  return &g_TeamCommandBuffer; /*0x53602d*/
}
// 0x536030
wchar_t * SelectTeamCommand::ddtor()
{
  return GetStringCSF(g_Str_TXT_TEAM, 0, g_Str_File_Init_CPP, 6294); /*0x536046*/
}