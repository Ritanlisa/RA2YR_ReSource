// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x535FC0
unsigned int * SelectTeamCommand::Construct(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall SelectTeamCommand_Constructor(_DWORD *this, int a2)
{
  this->SelectTeamCommand_field_00 = a2; /*0x535fc6*/
  *this = &vt_SelectTeamCommandClass; /*0x535fc9*/
  return this; /*0x535fcf*/
}
}

// 0x535FE0
ObjectClass * SelectTeamCommand::AddRef()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall SelectTeamCommand::AddRef(_DWORD *this)
{
  sprintf(&HouseClass_Player.__pad_5568[25344], &stru_8270D8, (INIClass *)this->SelectTeamCommand_field_00); /*0x535fee*/
  return (ObjectClass *)&HouseClass_Player.__pad_5568[25344]; /*0x535ffb*/
}
}

// 0x536000
wchar_t * SelectTeamCommand::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall SelectTeamCommand::_vt02(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = this->SelectTeamCommand_field_00; /*0x536005*/
  StringCSF = GetStringCSF(MEMORY[0x8270E8], 0, g_Str_File_Init_CPP, 6292); /*0x536015*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x536020*/
  return &MEMORY[0xA8F654]; /*0x53602d*/
}
}

// 0x536030
wchar_t * SelectTeamCommand::ddtor()
{
{
    return GetStringCSF(g_Str_TXT_TEAM, 0, g_Str_File_Init_CPP, 6294);
}
}
