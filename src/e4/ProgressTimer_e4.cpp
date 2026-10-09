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
void* ProgressTimer::GetValue(void *aP1)
{
  __int16 q014; // bx
  void *q008; // esi
  char *q010; // eax
  int v5; // esi
  __int64 v6; // rax
  int v7; // eax
  void *v8; // edx
  void *v9; // ecx
  __int16 v10; // cx
  int v12; // [esp+Ch] [ebp-4h]

  q014 = (__int16)this->q014; /*0x4c93d2*/
  if ( q014 <= 0 ) /*0x4c93db*/
    goto LABEL_14; /*0x4c93db*/
  q008 = this->q008; /*0x4c93dd*/
  q010 = (char *)this->q010; /*0x4c93e0*/
  if ( q008 != (void *)-1 ) /*0x4c93ec*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)q008 >= (int)q010 ) /*0x4c93f4*/
      goto LABEL_14; /*0x4c93f4*/
    q010 -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)q008; /*0x4c93f6*/
  }
  if ( q010 ) /*0x4c93fa*/
  {
    v5 = (__int16)(*(_WORD *)this->q000 - *(_WORD *)&this->q000[4]); /*0x4c9406*/
    v6 = (__int16)(*(_WORD *)this->q000 - *(_WORD *)&this->q000[4]); /*0x4c940b*/
    v7 = (int)((IDA_HIDWORD(v6) ^ v6) - IDA_HIDWORD(v6)) / q014; /*0x4c9411*/
    v12 = *(_DWORD *)this->q000; /*0x4c9415*/
    if ( (__int16)v7 <= 0 ) /*0x4c941c*/
    {
  LABEL_12:
      *aP1 = v12; /*0x4c9445*/
      return aP1; /*0x4c9453*/
    }
    v8 = this->q010; /*0x4c941e*/
    v9 = this->q008; /*0x4c9421*/
    if ( v9 != (void *)-1 ) /*0x4c9427*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)v9 >= (int)v8 ) /*0x4c942f*/
      {
        v10 = 0; /*0x4c9456*/
        goto LABEL_11; /*0x4c9458*/
      }
      IDA_LOWORD(v8) = (_WORD)v8 - (*(_WORD *)&stru_A8EB00.?[416] - (_WORD)v9); /*0x4c9431*/
    }
    v10 = (__int16)v8; /*0x4c9433*/
  LABEL_11:
    IDA_LOWORD(v12) = v12 - v10 * (v5 / (__int16)v7); /*0x4c9435*/
    goto LABEL_12; /*0x4c9440*/
  }
  LABEL_14:
  *aP1 = *(_DWORD *)this->q000; /*0x4c945a*/
  return aP1; /*0x4c944d*/
}
} // namespace gamemd