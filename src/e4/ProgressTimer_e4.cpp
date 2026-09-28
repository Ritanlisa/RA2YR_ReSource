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
  int16_t ProgressTimer_field_0x14; // bx
  void *ProgressTimer_field_0x8; // esi
  char *ProgressTimer_field_0x10; // eax
  int v5; // esi
  int64_t v6; // rax
  int v7; // eax
  void *v8; // edx
  void *v9; // ecx
  int16_t v10; // cx
  int v12; // [esp+Ch] [ebp-4h]

  ProgressTimer_field_0x14 = (int16_t)this->ProgressTimer_field_0x14; /*0x4c93d2*/
  if ( ProgressTimer_field_0x14 <= 0 ) /*0x4c93db*/
    goto LABEL_14; /*0x4c93db*/
  ProgressTimer_field_0x8 = this->ProgressTimer_field_0x8; /*0x4c93dd*/
  ProgressTimer_field_0x10 = (char *)this->ProgressTimer_field_0x10; /*0x4c93e0*/
  if ( ProgressTimer_field_0x8 != (void *)-1 ) /*0x4c93ec*/
  {
    if ( *(unsigned int *)&stru_A8EB00.gapE4[416] - (int)ProgressTimer_field_0x8 >= (int)ProgressTimer_field_0x10 ) /*0x4c93f4*/
      goto LABEL_14; /*0x4c93f4*/
    ProgressTimer_field_0x10 -= *(unsigned int *)&stru_A8EB00.gapE4[416] - (unsigned int)ProgressTimer_field_0x8; /*0x4c93f6*/
  }
  if ( ProgressTimer_field_0x10 ) /*0x4c93fa*/
  {
    v5 = (int16_t)(*(unsigned short *)this->__pad_0 - *(unsigned short *)&this->__pad_0[4]); /*0x4c9406*/
    v6 = (int16_t)(*(unsigned short *)this->__pad_0 - *(unsigned short *)&this->__pad_0[4]); /*0x4c940b*/
    v7 = (int)((IDA_HIDWORD(v6) ^ v6) - IDA_HIDWORD(v6)) / ProgressTimer_field_0x14; /*0x4c9411*/
    v12 = *(unsigned int *)this->__pad_0; /*0x4c9415*/
    if ( (int16_t)v7 <= 0 ) /*0x4c941c*/
    {
  LABEL_12:
      *(unsigned int *)aP1 = v12; /*0x4c9445*/
      return aP1; /*0x4c9453*/
    }
    v8 = this->ProgressTimer_field_0x10; /*0x4c941e*/
    v9 = this->ProgressTimer_field_0x8; /*0x4c9421*/
    if ( v9 != (void *)-1 ) /*0x4c9427*/
    {
      if ( *(unsigned int *)&stru_A8EB00.gapE4[416] - (int)v9 >= (int)v8 ) /*0x4c942f*/
      {
        v10 = 0; /*0x4c9456*/
        goto LABEL_11; /*0x4c9458*/
      }
      IDA_LOWORD(v8) = (unsigned short)v8 - (*(unsigned short *)&stru_A8EB00.gapE4[416] - (unsigned short)v9); /*0x4c9431*/
    }
    v10 = (int16_t)v8; /*0x4c9433*/
  LABEL_11:
    IDA_LOWORD(v12) = v12 - v10 * (v5 / (int16_t)v7); /*0x4c9435*/
    goto LABEL_12; /*0x4c9440*/
  }
  LABEL_14:
  *aP1 = *(unsigned int *)this->__pad_0; /*0x4c945a*/
  return aP1; /*0x4c944d*/
}
} // namespace gamemd