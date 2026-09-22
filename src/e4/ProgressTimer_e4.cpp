// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4C93D0
unsigned int * ProgressTimer::GetValue(IUnknown * aP1)
{
{
  __int16 v2; // bx
  ObjectClass *v5; // esi
  __int16 v10; // cx
  ObjectClass *v12; // [esp+Ch] [ebp-4h]
  v2 = *(this + 10); /*0x4c93d2*/
  if ( v2 <= 0 ) /*0x4c93db*/
    goto LABEL_14; /*0x4c93db*/
  int v3 = this->ProgressTimer_field_0x8; /*0x4c93dd*/
  int v4 = this->ProgressTimer_field_0x10; /*0x4c93e0*/
  if ( v3 != -1 ) /*0x4c93ec*/
  {
    if ( *(_DWORD *)&g_NetworkPlayerBuffer[5960] - v3 >= v4 ) /*0x4c93f4*/
      goto LABEL_14; /*0x4c93f4*/
    v4 -= *(_DWORD *)&g_NetworkPlayerBuffer[5960] - v3; /*0x4c93f6*/
  }
  if ( v4 ) /*0x4c93fa*/
  {
    v5 = (ObjectClass *)(__int16)(*this - this->q008); /*0x4c9406*/
    __int64 v6 = (__int16)(*this - this->q008); /*0x4c940b*/
    int v7 = (int)((HIDWORD(v6) ^ v6) - HIDWORD(v6)) / v2; /*0x4c9411*/
    v12 = *(ObjectClass **)this; /*0x4c9415*/
    if ( (__int16)v7 <= 0 ) /*0x4c941c*/
    {
LABEL_12:
      aP1->field_0 = (int)v12; /*0x4c9445*/
      return &aP1->field_0; /*0x4c9453*/
    }
    int v8 = this->ProgressTimer_field_0x10; /*0x4c941e*/
    int v9 = this->ProgressTimer_field_0x8; /*0x4c9421*/
    if ( v9 != -1 ) /*0x4c9427*/
    {
      if ( *(_DWORD *)&g_NetworkPlayerBuffer[5960] - v9 >= v8 ) /*0x4c942f*/
      {
        v10 = 0; /*0x4c9456*/
        goto LABEL_11; /*0x4c9458*/
      }
      LOWORD(v8) = v8 - (*(_WORD *)&g_NetworkPlayerBuffer[5960] - v9); /*0x4c9431*/
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
