// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x4C93D0
namespace gamemd {
void* ProgressTimer::GetValue(IUnknown * aP1)
{

  int16_t v2; // bx
  int v3; // esi
  int v4; // eax
  ObjectClass *v5; // esi
  int64_t v6; // rax
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int16_t v10; // cx
  ObjectClass *v12; // [esp+Ch] [ebp-4h]

  v2 = *((unsigned short *)this + 10); /*0x4c93d2*/
  if ( v2 <= 0 ) /*0x4c93db*/
    goto LABEL_14; /*0x4c93db*/
  v3 = *((unsigned int *)this + 2); /*0x4c93dd*/
  v4 = *((unsigned int *)this + 4); /*0x4c93e0*/
  if ( v3 != -1 ) /*0x4c93ec*/
  {
    if ( *(unsigned int *)&g_abs_A8D63C - v3 >= v4 ) /*0x4c93f4*/
      goto LABEL_14; /*0x4c93f4*/
    v4 -= *(unsigned int *)&g_abs_A8D63C - v3; /*0x4c93f6*/
  }
  if ( v4 ) /*0x4c93fa*/
  {
    v5 = (ObjectClass *)(int16_t)(*this - *((unsigned short *)this + 2)); /*0x4c9406*/
    v6 = (int16_t)(*this - *((unsigned short *)this + 2)); /*0x4c940b*/
    v7 = (int)((IDA_HIDWORD(v6) ^ v6) - IDA_HIDWORD(v6)) / v2; /*0x4c9411*/
    v12 = *(ObjectClass **)this; /*0x4c9415*/
    if ( (int16_t)v7 <= 0 ) /*0x4c941c*/
    {
LABEL_12:
      aP1->field_0 = (int)v12; /*0x4c9445*/
      return &aP1->field_0; /*0x4c9453*/
    }
    v8 = *((unsigned int *)this + 4); /*0x4c941e*/
    v9 = *((unsigned int *)this + 2); /*0x4c9421*/
    if ( v9 != -1 ) /*0x4c9427*/
    {
      if ( *(unsigned int *)&g_abs_A8D63C - v9 >= v8 ) /*0x4c942f*/
      {
        v10 = 0; /*0x4c9456*/
        goto LABEL_11; /*0x4c9458*/
      }
      IDA_LOWORD(v8) = v8 - (*(unsigned short *)&g_abs_A8D63C - v9); /*0x4c9431*/
    }
    v10 = v8; /*0x4c9433*/
LABEL_11:
    IDA_LOWORD(v12) = (unsigned short)v12 - v10 * ((int)v5 / (int16_t)v7); /*0x4c9435*/
    goto LABEL_12; /*0x4c9440*/
  }
LABEL_14:
  aP1->field_0 = *(unsigned int *)this; /*0x4c945a*/
  return &aP1->field_0; /*0x4c944d*/

}
} // namespace gamemd