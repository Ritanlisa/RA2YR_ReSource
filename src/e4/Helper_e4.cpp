// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4371D0
char Helper::ProcessData(void ** a1, int a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_4371D0(void **a1, int a2, int *a3)
{
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  void *v9; // eax
  void *v10[4]; // [esp+8h] [ebp-30h] BYREF
  int (__thiscall **v11)(void *, char); // [esp+18h] [ebp-20h] BYREF
  int v12; // [esp+1Ch] [ebp-1Ch]
  int v13; // [esp+20h] [ebp-18h]
  int v14; // [esp+24h] [ebp-14h]
  int v15; // [esp+28h] [ebp-10h]
  _DWORD v16[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( *(int *)(a2 + 8) <= 0 || *(int *)(a2 + 12) <= 0 ) /*0x4371e5*/
    return 0; /*0x4371e8*/
  v6 = *a3; /*0x4371fa*/
  v7 = (*((int (__thiscall **)(void **))*a1 + 28))(a1); /*0x4371fc*/
  v8 = *(_DWORD *)(a2 + 12); /*0x437202*/
  v12 = *(_DWORD *)(a2 + 8); /*0x437205*/
  v13 = v8; /*0x437215*/
  v14 = 0; /*0x437219*/
  v11 = &XSurface_Vtable; /*0x437221*/
  v15 = v7; /*0x437229*/
  Buffer::Init(v16, v6, v7 * v8 * v12); /*0x43722d*/
  v9 = *(void **)(a2 + 8); /*0x437235*/
  v10[3] = *(void **)(a2 + 12); /*0x437241*/
  v11 = &BSurface_Vtable; /*0x43724b*/
  v10[0] = 0; /*0x437253*/
  v10[1] = 0; /*0x43725b*/
  v10[2] = v9; /*0x437263*/
  LOBYTE(v6) = XSurface::BlitPart((int *)&v11, v10, a1, (void **)a2, 0, 1); /*0x437270*/
  Vector::Clear((int)v16); /*0x437272*/
  return v6; /*0x4371e7*/
}
}

// 0x550240
namespace gamemd {
char sub_550240()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_550240()
{
  char result; // al
  int i; // esi

  result = g_TimerPool; /*0x550240*/
  for ( i = g_TimerPool - 1; i >= 0; --i ) /*0x55024b*/
    result = TacticalClass::RenderCells(*((_DWORD *)dword_ABC87C + i)); /*0x550256*/
  return result; /*0x55025e*/
}
}
} // namespace gamemd

// 0x5D81B0
namespace gamemd {
unsigned int * sub_5D81B0(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall sub_5D81B0(const wchar_t **a1, const wchar_t **a2, const char **a3, const char **a4, char a5, int a6)
{
  _DWORD *v6; // eax

  v6 = __2_YAPAXI_Z(0x40u); /*0x5d81b2*/
  if ( v6 ) /*0x5d81bc*/
    return MPBattleClass::MPManBattleClass(v6, a1, a2, a3, a4, a5, a6); /*0x5d81de*/
  else
    return 0; /*0x5d81e6*/
}
}
} // namespace gamemd

// 0x6F2040
namespace gamemd {
int sub_6F2040()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6F2040()
{
  int result; // eax
  int i; // esi

  result = MEMORY[0xA8ECB0]; /*0x6f2040*/
  for ( i = 0; i < MEMORY[0xA8ECB0]; ++i ) /*0x6f204a*/
  {
    TeamTypeClass::ProcessTaskForce(*((_DWORD *)MEMORY[0xA8ECA4] + i)); /*0x6f2054*/
    result = MEMORY[0xA8ECB0]; /*0x6f2059*/
  }
  return result; /*0x6f2063*/
}
}
} // namespace gamemd
