// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4C93D0
unsigned int * ProgressTimer::GetValue(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall ProgressTimer::GetValue(_WORD *this, IUnknown *aP1)
{
  __int16 v2; // bx
  int v3; // esi
  int v4; // eax
  ObjectClass *v5; // esi
  __int64 v6; // rax
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  __int16 v10; // cx
  ObjectClass *v12; // [esp+Ch] [ebp-4h]

  v2 = *(this + 10); /*0x4c93d2*/
  if ( v2 <= 0 ) /*0x4c93db*/
    goto LABEL_14; /*0x4c93db*/
  v3 = *((_DWORD *)this + 2); /*0x4c93dd*/
  v4 = *((_DWORD *)this + 4); /*0x4c93e0*/
  if ( v3 != -1 ) /*0x4c93ec*/
  {
    if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v3 >= v4 ) /*0x4c93f4*/
      goto LABEL_14; /*0x4c93f4*/
    v4 -= *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v3; /*0x4c93f6*/
  }
  if ( v4 ) /*0x4c93fa*/
  {
    v5 = (ObjectClass *)(__int16)(*this - *(this + 2)); /*0x4c9406*/
    v6 = (__int16)(*this - *(this + 2)); /*0x4c940b*/
    v7 = (int)((HIDWORD(v6) ^ v6) - HIDWORD(v6)) / v2; /*0x4c9411*/
    v12 = *(ObjectClass **)this; /*0x4c9415*/
    if ( (__int16)v7 <= 0 ) /*0x4c941c*/
    {
LABEL_12:
      aP1->field_0 = (int)v12; /*0x4c9445*/
      return &aP1->field_0; /*0x4c9453*/
    }
    v8 = *((_DWORD *)this + 4); /*0x4c941e*/
    v9 = *((_DWORD *)this + 2); /*0x4c9421*/
    if ( v9 != -1 ) /*0x4c9427*/
    {
      if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v9 >= v8 ) /*0x4c942f*/
      {
        v10 = 0; /*0x4c9456*/
        goto LABEL_11; /*0x4c9458*/
      }
      LOWORD(v8) = v8 - (*(_WORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v9); /*0x4c9431*/
    }
    v10 = v8; /*0x4c9433*/
LABEL_11:
    LOWORD(v12) = (_WORD)v12 - v10 * ((int)v5 / (__int16)v7); /*0x4c9435*/
    goto LABEL_12; /*0x4c9440*/
  }
LABEL_14:
  aP1->field_0 = *(_DWORD *)this; /*0x4c945a*/
  return &aP1->field_0; /*0x4c944d*/
}
}
