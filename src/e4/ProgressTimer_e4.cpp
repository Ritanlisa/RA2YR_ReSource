// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"

// 0x4C93D0
namespace gamemd {  // G42.18 ns repair
void* ProgressTimer::GetValue(void *aP1, void *a2)
{

  __int16 ProgressTimer_field_0x14; // bx
  int ProgressTimer_field_0x8; // esi
  int ProgressTimer_field_0x10; // eax
  int v5; // esi
  __int64 v6; // rax
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  __int16 v10; // cx
  void *v12; // [esp+Ch] [ebp-4h]

  ProgressTimer_field_0x14 = this->q014; /*0x4c93d2*/
  if ( ProgressTimer_field_0x14 <= 0 ) /*0x4c93db*/
    goto LABEL_14; /*0x4c93db*/
  ProgressTimer_field_0x8 = this->q008; /*0x4c93dd*/
  ProgressTimer_field_0x10 = this->q010; /*0x4c93e0*/
  if ( ProgressTimer_field_0x8 != -1 ) /*0x4c93ec*/
  {
    if ( *(unsigned int *)&stru_A8E960.random[528] - ProgressTimer_field_0x8 >= ProgressTimer_field_0x10 ) /*0x4c93f4*/
      goto LABEL_14; /*0x4c93f4*/
    ProgressTimer_field_0x10 -= *(unsigned int *)&stru_A8E960.random[528] - ProgressTimer_field_0x8; /*0x4c93f6*/
  }
  if ( ProgressTimer_field_0x10 ) /*0x4c93fa*/
  {
    v5 = (__int16)(*(unsigned short *)this->__pad_0 - *&this->u32_4); /*0x4c9406*/
    v6 = (__int16)(*(unsigned short *)this->__pad_0 - *&this->u32_4); /*0x4c940b*/
    v7 = (int)(((((v6) >> 32) & 0xFFFFFFFFu) ^ v6) - (((v6) >> 32) & 0xFFFFFFFFu)) / ProgressTimer_field_0x14; /*0x4c9411*/
    v12 = *(void **)this->__pad_0; /*0x4c9415*/
    if ( (__int16)v7 <= 0 ) /*0x4c941c*/
    {
LABEL_12:
      *a2 = v12; /*0x4c9445*/
      return a2; /*0x4c9453*/
    }
    v8 = this->q010; /*0x4c941e*/
    v9 = this->q008; /*0x4c9421*/
    if ( v9 != -1 ) /*0x4c9427*/
    {
      if ( *(unsigned int *)&stru_A8E960.random[528] - v9 >= v8 ) /*0x4c942f*/
      {
        v10 = 0; /*0x4c9456*/
        goto LABEL_11; /*0x4c9458*/
      }
      LOWORD(v8) = v8 - (*(unsigned short *)&stru_A8E960.random[528] - v9); /*0x4c9431*/
    }
    v10 = v8; /*0x4c9433*/
LABEL_11:
    LOWORD(v12) = (unsigned short)v12 - v10 * (v5 / (__int16)v7); /*0x4c9435*/
    goto LABEL_12; /*0x4c9440*/
  }
LABEL_14:
  *a2 = *(unsigned int *)this->__pad_0; /*0x4c945a*/
  return a2; /*0x4c944d*/

}
} // namespace gamemd