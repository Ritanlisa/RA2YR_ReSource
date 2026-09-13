// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5361A0
unsigned int * CenterTeamCommand::Construct(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CenterTeamCommand_Constructor(_DWORD *this, int a2)
{
  *(this + 1) = a2; /*0x5361a6*/
  *this = &vt_CenterTeamCommandClass; /*0x5361a9*/
  return this; /*0x5361af*/
}
}

// 0x5361C0
ObjectClass * CenterTeamCommand::AddRef()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall CenterTeamCommand::AddRef(_DWORD *this)
{
  sprintf(&HouseClass_Player.__pad_5568[25344], &stru_8271A0, (INIClass *)*(this + 1)); /*0x5361ce*/
  return (ObjectClass *)&HouseClass_Player.__pad_5568[25344]; /*0x5361db*/
}
}

// 0x5361E0
wchar_t * CenterTeamCommand::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall CenterTeamCommand::_vt02(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(this + 1); /*0x5361e5*/
  StringCSF = GetStringCSF(MEMORY[0x8271B0], 0, g_Str_File_Init_CPP, 6361); /*0x5361f5*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x536200*/
  return &MEMORY[0xA8F654]; /*0x53620d*/
}
}
