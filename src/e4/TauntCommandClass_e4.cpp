// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x536290
unsigned int * TauntCommandClass::Construct(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall TauntCommandClass_Constructor(_DWORD *this, int a2)
{
  *(this + 1) = a2; /*0x536296*/
  *this = &TauntCommandClass::`vftable'; /*0x536299*/
  return this; /*0x53629f*/
}
}

// 0x5362B0
ObjectClass * TauntCommandClass::AddRef()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall TauntCommandClass::AddRef(_DWORD *this)
{
  sprintf( /*0x5362be*/
    &HouseClass_Player.__pad_5568[25344],
    (ObjectClass *)&stru_8271A0.customSound_controller[2],
    (INIClass *)*(this + 1));
  return (ObjectClass *)&HouseClass_Player.__pad_5568[25344]; /*0x5362cb*/
}
}

// 0x5362D0
wchar_t * TauntCommandClass::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall TauntCommandClass::_vt02(const wchar_t **this)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(this + 1); /*0x5362d5*/
  StringCSF = GetStringCSF(MEMORY[0x827204], 0, g_Str_File_Init_CPP, 6400); /*0x5362e5*/
  swprintf(&MEMORY[0xA8F654], (const size_t)StringCSF, v3); /*0x5362f0*/
  return &MEMORY[0xA8F654]; /*0x5362fd*/
}
}

// 0x536300
wchar_t * TauntCommandClass::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *TauntCommandClass::_vt03()
{
  return GetStringCSF(MEMORY[0x827218], 0, g_Str_File_Init_CPP, 6405); /*0x536316*/
}
}
