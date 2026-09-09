// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x44F6E0
namespace gamemd {
unsigned int * sub_44F6E0(unsigned int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_44F6E0(void *this, _DWORD *a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // ecx
  _BYTE v9[12]; // [esp+14h] [ebp-Ch] BYREF
  int v10; // [esp+28h] [ebp+8h]

  v3 = 6; /*0x44f6ed*/
  v4 = 5; /*0x44f6f2*/
  v5 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 72))(this, v9); /*0x44f6f7*/
  v6 = *v5 / 256; /*0x44f71b*/
  v7 = v5[1] / 256; /*0x44f71e*/
  if ( a3 ) /*0x44f72e*/
  {
    if ( a3 == 2 ) /*0x44f733*/
      v4 = 0; /*0x44f735*/
  }
  else
  {
    v3 = 0; /*0x44f739*/
  }
  if ( (__int16)v6 - MEMORY[0x87F90C] > MEMORY[0x87F914] / 2 ) /*0x44f751*/
    v3 = -v3; /*0x44f753*/
  if ( (__int16)v7 - MEMORY[0x87F910] > MEMORY[0x87F918] / 2 ) /*0x44f76b*/
    v4 = -v4; /*0x44f76d*/
  LOWORD(v10) = v6 + v3; /*0x44f77f*/
  HIWORD(v10) = v7 + v4; /*0x44f784*/
  *a2 = v10; /*0x44f78f*/
  return a2; /*0x44f78d*/
}
}
} // namespace gamemd

// 0x44FE60
namespace gamemd {
int sub_44FE60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_44FE60(INIClass *this)
{
  int result; // eax
  int i; // esi
  int v4; // ecx

  INIClass::ClearSection((int)this, (INIClass *)aStructures, 0); /*0x44fe6c*/
  result = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[100]; /*0x44fe71*/
  for ( i = 0; i < *(int *)&MEMORY[0xA8D63C].__pad_14B0[100]; ++i ) /*0x44fe7a*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[88] + 4 * i); /*0x44fe82*/
    if ( !*(_BYTE *)(v4 + 129) && !*(_BYTE *)(*(_DWORD *)(v4 + 1312) + 5823) ) /*0x44fe95*/
      BuildingClass::ReadConstructionData(v4, this); /*0x44fea0*/
    result = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[100]; /*0x44fea5*/
  }
  return result; /*0x44feaf*/
}
}
} // namespace gamemd
