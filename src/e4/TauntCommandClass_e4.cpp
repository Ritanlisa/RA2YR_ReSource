// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x536290
unsigned int * TauntCommandClass::Construct(int a2)
{
  *(this + 1) = a2; /*0x536296*/
  *this = &TauntCommandClass::`vftable'; /*0x536299*/
  return this; /*0x53629f*/
}
// 0x5362B0
void * TauntCommandClass::AddRef()
{
  sprintf(byte_A8F5B4, "Taunt_%d", *(this + 1)); /*0x5362be*/
  return byte_A8F5B4; /*0x5362cb*/
}
// 0x5362D0
void * TauntCommandClass::Release()
{
  wchar_t *StringCSF; // eax
  const wchar_t *v3; // [esp-4h] [ebp-4h]

  v3 = *(this + 1); /*0x5362d5*/
  StringCSF = GetStringCSF(aTxtTauntNumber, 0, g_Str_File_Init_CPP, 6400); /*0x5362e5*/
  swprintf(&g_TeamCommandBuffer, (const size_t)StringCSF, v3); /*0x5362f0*/
  return &g_TeamCommandBuffer; /*0x5362fd*/
}
// 0x536300
wchar_t * TauntCommandClass::ddtor()
{
  return GetStringCSF(aTxtTaunt, 0, g_Str_File_Init_CPP, 6405); /*0x536316*/
}