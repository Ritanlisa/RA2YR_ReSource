// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4C93D0
namespace gamemd {
unsigned int * ProgressTimer::GetValue(IUnknown * aP1)
{
  int16_t v2; // bx
  void * v3;
  void * v4;
  int v5; // esi
  int64_t v6; // rax
  int v7; // eax
  void * v8;
  void * v9;
  void * v10;
  int v12; // [esp+Ch] [ebp-4h]

  v2 = *(&this->u32_40); /*0x4c93d2*/
  if ( v2 <= 0 ) /*0x4c93db*/
    goto LABEL_14; /*0x4c93db*/
  v3 = this->q008; /*0x4c93dd*/
  v4 = this->q010; /*0x4c93e0*/
  if ( v3 != -1 ) /*0x4c93ec*/
  {
    if ( (int)g_CurrentFrame - v3 >= v4 ) /*0x4c93f4*/
      goto LABEL_14; /*0x4c93f4*/
    v4 -= (int)g_CurrentFrame - v3; /*0x4c93f6*/
  }
  if ( v4 ) /*0x4c93fa*/
  {
    v5 = (int16_t)(*this - this->q008); /*0x4c9406*/
    v6 = (int16_t)(*this - this->q008); /*0x4c940b*/
    v7 = (int)((IDA_HIDWORD(v6) ^ v6) - IDA_HIDWORD(v6)) / v2; /*0x4c9411*/
    v12 = *(unsigned int *)this; /*0x4c9415*/
    if ( (int16_t)v7 <= 0 ) /*0x4c941c*/
    {
  LABEL_12:
      *(unsigned int *)aP1 = v12; /*0x4c9445*/
      return aP1; /*0x4c9453*/
    }
    v8 = this->q010; /*0x4c941e*/
    v9 = this->q008; /*0x4c9421*/
    if ( v9 != -1 ) /*0x4c9427*/
    {
      if ( (int)g_CurrentFrame - v9 >= v8 ) /*0x4c942f*/
      {
        v10 = 0; /*0x4c9456*/
        goto LABEL_11; /*0x4c9458*/
      }
      IDA_LOWORD(v8) = v8 - ((unsigned short)g_CurrentFrame - v9); /*0x4c9431*/
    }
    v10 = v8; /*0x4c9433*/
  LABEL_11:
    IDA_LOWORD(v12) = v12 - v10 * (v5 / (int16_t)v7); /*0x4c9435*/
    goto LABEL_12; /*0x4c9440*/
  }
  LABEL_14:
  *(unsigned int *)aP1 = *(unsigned int *)this; /*0x4c945a*/
  return aP1; /*0x4c944d*/
}
} // namespace gamemd