// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5E8D40
namespace gamemd {
int sub_5E8D40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_5E8D40()
{
  const wchar_t *v1; // ebx
  int v2; // edi
  const wchar_t **v3; // esi

  if ( !MEMORY[0xA8DA84] ) /*0x5e8d47*/
    return -1; /*0x5e8d49*/
  v1 = *(const wchar_t **)MEMORY[0xA8DA78]; /*0x5e8d55*/
  v2 = 0; /*0x5e8d57*/
  v3 = (const wchar_t **)&MEMORY[0xA8DA90]; /*0x5e8d59*/
  while ( !*v3 || _wcsicmp(v1, *v3) ) /*0x5e8d70*/
  {
    ++v3; /*0x5e8d72*/
    ++v2; /*0x5e8d75*/
    if ( (int)v3 >= (int)&MEMORY[0xA8DAB0] ) /*0x5e8d7c*/
      return -1; /*0x5e8d84*/
  }
  return v2; /*0x5e8d4c*/
}
}
} // namespace gamemd

// 0x5EA9B0
namespace gamemd {
int sub_5EA9B0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_5EA9B0(int a1)
{
  wchar_t *v1; // eax

  v1 = (wchar_t *)*(&MEMORY[0xA8DA90] + a1); /*0x5ea9b0*/
  if ( v1 /*0x5ea9d1*/
    && (v1 == (wchar_t *)MEMORY[0xAC11A4] || v1 == (wchar_t *)MEMORY[0xAC11A8] || v1 == (wchar_t *)MEMORY[0xAC11AC]) )
  {
    return MEMORY[0xA8B2BC][a1]; /*0x5ea9d3*/
  }
  if ( v1 == (wchar_t *)MEMORY[0xAC119C] /*0x5ea9f9*/
    || v1 == (wchar_t *)MEMORY[0xAC11A0]
    || v1 == MEMORY[0xAC11B0]
    || v1 == (wchar_t *)MEMORY[0xAC11B4] )
  {
    return -2; /*0x5eaa02*/
  }
  return SessionClass::GetPlayerColor(*(&MEMORY[0xA8DA90] + a1)); /*0x5ea9da*/
}
}
} // namespace gamemd

// 0x5EAA10
namespace gamemd {
int sub_5EAA10(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_5EAA10(int a1)
{
  wchar_t *v1; // eax

  v1 = (wchar_t *)*(&MEMORY[0xA8DA90] + a1); /*0x5eaa10*/
  if ( v1 /*0x5eaa31*/
    && (v1 == (wchar_t *)MEMORY[0xAC11A4] || v1 == (wchar_t *)MEMORY[0xAC11A8] || v1 == (wchar_t *)MEMORY[0xAC11AC]) )
  {
    return MEMORY[0xA8B2DC][a1]; /*0x5eaa33*/
  }
  if ( v1 == (wchar_t *)MEMORY[0xAC119C] /*0x5eaa59*/
    || v1 == (wchar_t *)MEMORY[0xAC11A0]
    || v1 == MEMORY[0xAC11B0]
    || v1 == (wchar_t *)MEMORY[0xAC11B4] )
  {
    return -2; /*0x5eaa62*/
  }
  return SessionClass::GetOption(*(&MEMORY[0xA8DA90] + a1)); /*0x5eaa3a*/
}
}
} // namespace gamemd

// 0x7A0E50
namespace gamemd {
void sub_7A0E50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7A0E50()
{
  int i; // esi
  wchar_t *v1; // ecx
  char *v2; // eax

  for ( i = 0; i < 8; ++i ) /*0x7a0e51*/
  {
    v1 = *(wchar_t **)((char *)&MEMORY[0xA8DA90] + i * 4); /*0x7a0e53*/
    if ( !v1 || !IsKnownPointer(v1) ) /*0x7a0e5d*/
      dword_B76440[i] = -1; /*0x7a0e66*/
    v2 = ToWideStringChar(*(char **)((char *)&MEMORY[0xA8DA90] + i * 4)); /*0x7a0e76*/
    SetGameOptionsPing(v2, dword_B76440[i]); /*0x7a0e83*/
  }
}
}
} // namespace gamemd

// 0x5EAA70
namespace gamemd {
int sub_5EAA70(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_5EAA70(int a1)
{
  wchar_t *v1; // eax

  v1 = (wchar_t *)*(&MEMORY[0xA8DA90] + a1); /*0x5eaa70*/
  if ( v1 /*0x5eaa91*/
    && (v1 == (wchar_t *)MEMORY[0xAC11A4] || v1 == (wchar_t *)MEMORY[0xAC11A8] || v1 == (wchar_t *)MEMORY[0xAC11AC]) )
  {
    return MEMORY[0xA8B2FC][a1]; /*0x5eaa93*/
  }
  if ( v1 == (wchar_t *)MEMORY[0xAC119C] /*0x5eaab9*/
    || v1 == (wchar_t *)MEMORY[0xAC11A0]
    || v1 == MEMORY[0xAC11B0]
    || v1 == (wchar_t *)MEMORY[0xAC11B4] )
  {
    return -2; /*0x5eaac2*/
  }
  return SessionClass::GetOption2(*(&MEMORY[0xA8DA90] + a1)); /*0x5eaa9a*/
}
}
} // namespace gamemd

// 0x5EA8E0
namespace gamemd {
int sub_5EA8E0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_5EA8E0(int a1)
{
  int v1; // ecx
  int result; // eax

  v1 = *(&MEMORY[0xA8DA90] + a1); /*0x5ea8e0*/
  result = 0; /*0x5ea8e7*/
  if ( v1 && (v1 == MEMORY[0xAC11A4] || v1 == MEMORY[0xAC11A8] || v1 == MEMORY[0xAC11AC]) || *(_DWORD *)(v1 + 119) == 1 ) /*0x5ea909*/
    return 1; /*0x5ea90b*/
  return result; /*0x5ea910*/
}
}
} // namespace gamemd
