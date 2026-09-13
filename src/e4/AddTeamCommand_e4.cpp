// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5360B0
unsigned int * AddTeamCommand::Construct(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall AddTeamCommand_Constructor(_DWORD *this, int a2)
{
  *(this + 1) = a2; /*0x5360b6*/
  *this = &vt_AddTeamCommandClass; /*0x5360b9*/
  return this; /*0x5360bf*/
}
}

// 0x5360D0
ObjectClass * AddTeamCommand::AddRef()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall AddTeamCommand::AddRef(_DWORD *this)
{
  sprintf( /*0x5360de*/
    &HouseClass_Player.__pad_5568[25344],
    (ObjectClass *)&stru_8270D8.customSound_controller[3],
    (INIClass *)*(this + 1));
  return (ObjectClass *)&HouseClass_Player.__pad_5568[25344]; /*0x5360eb*/
}
}

// 0x5360F0
wchar_t * AddTeamCommand::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall AddTeamCommand::_vt02(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(this + 1); /*0x5360f5*/
  StringCSF = GetStringCSF(MEMORY[0x827148], 0, g_Str_File_Init_CPP, 6326); /*0x536105*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x536110*/
  return &MEMORY[0xA8F654]; /*0x53611d*/
}
}

// 0x536120
wchar_t * AddTeamCommand::ddtor()
{
{
    return GetStringCSF(g_Str_TXT_TEAM, 0, g_Str_File_Init_CPP, 6328);
}
}
