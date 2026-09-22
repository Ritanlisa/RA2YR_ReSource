// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x536290
unsigned int * TauntCommandClass::Construct(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->TauntCommandClass_field_00 = a2; /*0x536296*/
  *this = &vt_TauntCommandClass; /*0x536299*/
  return this; /*0x53629f*/
}
}

// 0x5362B0
void * TauntCommandClass::AddRef()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  sprintf( /*0x5362be*/
    &HouseClass_Player[47208],
    (ObjectClass *)&stru_8271A0.customSound_controller[2],
    (INIClass *)this->TauntCommandClass_field_00);
  return (ObjectClass *)&HouseClass_Player[47208]; /*0x5362cb*/
}
}

// 0x5362D0
void * TauntCommandClass::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = this->TauntCommandClass_field_00; /*0x5362d5*/
  StringCSF = GetStringCSF(DataGlobal_827204, 0, g_Str_File_Init_CPP, 6400); /*0x5362e5*/
  swprintf(&g_TeamCommandBuffer, (const size_t)StringCSF, v3); /*0x5362f0*/
  return &g_TeamCommandBuffer; /*0x5362fd*/
}
}

// 0x536300
wchar_t * TauntCommandClass::ddtor()
{
{
    return GetStringCSF(DataGlobal_827218, 0, g_Str_File_Init_CPP, 6405);
}
}
