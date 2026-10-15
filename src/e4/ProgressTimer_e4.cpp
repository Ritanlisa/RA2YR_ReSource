// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x4C93D0
namespace gamemd {  // G42.18 ns repair
void* ProgressTimer::GetValue(void *aP1, void *a2)
{

  __int16 ProgressTimer_field_0x14; // bx
  void *ProgressTimer_field_0x8; // esi
  char *ProgressTimer_field_0x10; // eax
  int v5; // esi
  __int64 v6; // rax
  int v7; // eax
  void *v8; // edx
  void *v9; // ecx
  __int16 v10; // cx
  int v12; // [esp+Ch] [ebp-4h]

  ProgressTimer_field_0x14 = (__int16)this->q014; /*0x4c93d2*/
  if ( ProgressTimer_field_0x14 <= 0 ) /*0x4c93db*/
    goto LABEL_14; /*0x4c93db*/
  ProgressTimer_field_0x8 = (void *)(this->q008); /*0x4c93dd*/
  ProgressTimer_field_0x10 = (char *)this->q010; /*0x4c93e0*/
  if ( ProgressTimer_field_0x8 != (void *)-1 ) /*0x4c93ec*/
  {
    if ( *(unsigned int *)&DataGlobal_A8EB00[644] - (int)ProgressTimer_field_0x8 >= (int)ProgressTimer_field_0x10 ) /*0x4c93f4*/
      goto LABEL_14; /*0x4c93f4*/
    ProgressTimer_field_0x10 -= *(unsigned int *)&DataGlobal_A8EB00[644] - (unsigned int)ProgressTimer_field_0x8; /*0x4c93f6*/
  }
  if ( ProgressTimer_field_0x10 ) /*0x4c93fa*/
  {
    v5 = (__int16)(*(unsigned short *)this->__pad_000 - *&this->u32_4); /*0x4c9406*/
    v6 = (__int16)(*(unsigned short *)this->__pad_000 - *&this->u32_4); /*0x4c940b*/
    v7 = (int)((HIDWORD(v6) ^ v6) - HIDWORD(v6)) / ProgressTimer_field_0x14; /*0x4c9411*/
    v12 = *(unsigned int *)this->__pad_000; /*0x4c9415*/
    if ( (__int16)v7 <= 0 ) /*0x4c941c*/
    {
LABEL_12:
      *aP1 = (void *)(v12); /*0x4c9445*/
      return aP1; /*0x4c9453*/
    }
    v8 = (void *)(this->q010); /*0x4c941e*/
    v9 = (void *)(this->q008); /*0x4c9421*/
    if ( v9 != (void *)-1 ) /*0x4c9427*/
    {
      if ( *(unsigned int *)&DataGlobal_A8EB00[644] - (int)v9 >= (int)v8 ) /*0x4c942f*/
      {
        v10 = 0; /*0x4c9456*/
        goto LABEL_11; /*0x4c9458*/
      }
      LOWORD(v8) = (unsigned short)v8 - (*(unsigned short *)&DataGlobal_A8EB00[644] - (unsigned short)v9); /*0x4c9431*/
    }
    v10 = (__int16)v8; /*0x4c9433*/
LABEL_11:
    LOWORD(v12) = v12 - v10 * (v5 / (__int16)v7); /*0x4c9435*/
    goto LABEL_12; /*0x4c9440*/
  }
LABEL_14:
  *aP1 = (void *)(*(unsigned int *)this->__pad_000); /*0x4c945a*/
  return aP1; /*0x4c944d*/

}
} // namespace gamemd