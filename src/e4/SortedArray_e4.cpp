// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SortedArray_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/SpawnManagerClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"

// 0x52B620
namespace gamemd {
int SortedArray::BinarySearch(CCINIClass * aP1)
{
  int result; // eax
  int v4; // edi
  int v5; // ebx
  int SortedArray_field_0x04; // ecx
  int v7; // esi

  result = this->SortedArray_field_0x04; /*0x52b623*/
  if ( result ) /*0x52b628*/
  {
    if ( !IDA_LOBYTE(this->SortedArray_field_0x0C) ) /*0x52b62e*/
    {
      qsort(*(void **)this->__pad_0, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc4Int); /*0x52b640*/
      this->SortedArray_field_0x10 = 0; /*0x52b648*/
      IDA_LOBYTE(this->SortedArray_field_0x0C) = 1; /*0x52b64f*/
    }
    v4 = (int)(*(unsigned int *)this->__pad_0);
    v5 = (int)(*aP1);
    SortedArray_field_0x04 = this->SortedArray_field_0x04; /*0x52b65d*/
    if ( SortedArray_field_0x04 <= 0 ) /*0x52b662*/
      return 0; /*0x52b68e*/
    while ( 1 ) /*0x52b66b*/
    {
      v7 = *(unsigned int *)(v4 + 8 * (SortedArray_field_0x04 / 2)); /*0x52b66b*/
      if ( v7 <= v5 ) /*0x52b673*/
      {
        if ( v7 == v5 ) /*0x52b679*/
          return v4 + 8 * (SortedArray_field_0x04 / 2); /*0x52b693*/
        v4 += 8 * (SortedArray_field_0x04 / 2) + 8; /*0x52b67b*/
        SortedArray_field_0x04 += -1 - SortedArray_field_0x04 / 2; /*0x52b683*/
      }
      else
      {
        SortedArray_field_0x04 /= 2; /*0x52b675*/
      }
      if ( SortedArray_field_0x04 <= 0 ) /*0x52b687*/
        return 0; /*0x52b687*/
    }
  }
  return result; /*0x52b62a*/
}
} // namespace gamemd
// 0x5387D0
namespace gamemd {
int SortedArray::Append(DynamicVector * aP1, unsigned int * a2)
{
  int v4; // eax
  int v5; // ebx
  char *v6; // edi
  int i; // ecx
  char * v8;
  unsigned int *v9; // edx
  char * v10;
  int v11; // eax

  v4 = (unsigned int)(this->u32_20);
  if ( this->q010 + 1 <= v4 ) /*0x5387e0*/
  {
  LABEL_9:
    *(unsigned int *)(*(unsigned int *)&this->u32_20 * this->q010) = *aP1; /*0x53885b*/
    *(unsigned int *)(*(unsigned int *)&this->u32_20 * this->q010 + 4) = *a2; /*0x538875*/
    v11 = this->q010 + 1; /*0x53887c*/
    *(unsigned char *)&this->q00C = 0; /*0x53887d*/
    this->q010 = v11; /*0x538881*/
    return 1; /*0x53888a*/
  }
  if ( v4 ) /*0x5387e4*/
  {
    v5 = this->u32_20; /*0x5387ed*/
    if ( v4 < 0 ) /*0x5387f1*/
      return 0; /*0x5387f1*/
  }
  else
  {
    v5 = 10; /*0x5387e6*/
  }
  v6 = (char *)operator new(8 * (v4 + v5)); /*0x538807*/
  if ( v6 ) /*0x53880e*/
  {
    for ( i = 0; i < this->q010; *(unsigned int *)&v6[v8 + 4] = v9[1] ) /*0x53881c*/
    {
      v8 = (char *)((int)((char *)(8 * i)));
      v9 = (unsigned int *)((char *)((unsigned int *)(*(unsigned int *)&this->u32_20 * i++)));
      *(unsigned int *)&v6[v8] = *v9; /*0x53882e*/
    }
    RA2_OPDEL(); /*0x538842*/
    v10 = this->u32_20; /*0x538847*/
    *(unsigned int *)this = v6; /*0x53884f*/
    this->u32_20 = v5 + v10; /*0x538851*/
    this->q040 = 0; /*0x538854*/
    goto LABEL_9; /*0x538854*/
  }
  return 0; /*0x538864*/
}
} // namespace gamemd
// 0x5388A0
namespace gamemd {
ObjectClass * * SortedArray::RemoveByKey(DynamicVector * aP1)
{
  size_t v3; // eax
  int v4; // edi
  unsigned int *v5; // ebp
  int v6; // edx
  char *v7; // ecx
  int v9; // ecx
  int i; // ecx
  int v11; // edi
  int v12; // eax
  unsigned int *v13; // edi
  int v14; // eax
  int v15; // [esp+10h] [ebp-8h]

  v3 = this->q004; /*0x5388a9*/
  if ( !v3 ) /*0x5388ae*/
    return 0; /*0x5388ae*/
  if ( !this->q00C ) /*0x5388b0*/
  {
    qsort(*(void **)this, v3, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFuncInt); /*0x5388c2*/
    this->q010 = 0; /*0x5388ca*/
    this->q00C = 1; /*0x5388d1*/
  }
  v4 = (unsigned int *)((int)(this->q004));
  v5 = (int)(*(unsigned int **)this);
  v15 = *aP1; /*0x5388e4*/
  if ( v4 <= 0 ) /*0x5388e8*/
    return 0; /*0x5388e8*/
  while ( 1 ) /*0x5388f1*/
  {
    v6 = v5[2 * (v4 / 2)]; /*0x5388f1*/
    v7 = (char *)&v5[2 * (v4 / 2)]; /*0x5388f5*/
    if ( v15 >= v6 ) /*0x5388fd*/
      break; /*0x5388fd*/
    v4 /= 2; /*0x5388ff*/
  LABEL_9:
    if ( v4 <= 0 ) /*0x538915*/
      return 0; /*0x538915*/
  }
  if ( v6 != v15 ) /*0x538907*/
  {
    v5 = (unsigned int *)(v7 + 8);
    v4 += -1 - v4 / 2; /*0x538911*/
    goto LABEL_9; /*0x538911*/
  }
  if ( !v7 ) /*0x538927*/
    return 0; /*0x538927*/
  v9 = (int)&v7[-*(unsigned int *)this] >> 3; /*0x53892b*/
  if ( v9 == -1 ) /*0x538931*/
    return 0; /*0x538920*/
  for ( i = v9 + 1; i < this->q004; *(unsigned int *)(v12 - 4) = *(unsigned int *)(v12 + 4) ) /*0x538939*/
  {
    v11 = *(unsigned int *)(((unsigned int)(this->u32_20)) * i); /*0x53893d*/
    v12 = ((unsigned int)(this->u32_20)) * i++; /*0x538940*/
    *(unsigned int *)(v12 - 8) = v11; /*0x538944*/
  }
  v13 = (int)((unsigned int *)((gamemd::ObjectClass **)(*(unsigned int **)this)));
  v14 = (gamemd::ObjectClass **)(this->q004 - 1);
  this->q004 = (gamemd::ObjectClass **)(v14);
  v13[2 * v14] = 0; /*0x53895f*/
  v13[2 * v14 + 1] = 0; /*0x538962*/
  this->q010 = 0; /*0x538966*/
  return 1; /*0x538917*/
}
} // namespace gamemd
// 0x538980
namespace gamemd {
int SortedArray::FindPair(int * a2)
{
  size_t v3; // ecx
  unsigned int *v4; // eax
  int v6; // ecx
  int v7; // ebp
  unsigned int *v8; // edi
  int v9; // esi
  char *v10; // edx

  v3 = this->q004; /*0x538985*/
  if ( !v3 ) /*0x53898b*/
    return 0; /*0x53898b*/
  v4 = *(unsigned int **)(&this->q0046); /*0x53898d*/
  if ( v4 && *v4 == *a2 ) /*0x53899e*/
    return 1; /*0x5389a6*/
  if ( !this->q00C ) /*0x5389a9*/
  {
    qsort(*(void **)this, v3, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFuncInt); /*0x5389bb*/
    this->q010 = 0; /*0x5389c3*/
    this->q00C = 1; /*0x5389ca*/
  }
  v6 = this->q004; /*0x5389ce*/
  v7 = *a2; /*0x5389d1*/
  v8 = *(unsigned int **)this; /*0x5389d3*/
  if ( v6 <= 0 ) /*0x5389d7*/
    return 0; /*0x5389d7*/
  while ( 1 ) /*0x5389e0*/
  {
    v9 = v8[2 * (v6 / 2)]; /*0x5389e0*/
    v10 = (char *)&v8[2 * (v6 / 2)]; /*0x5389e3*/
    if ( v9 <= v7 ) /*0x5389e8*/
      break; /*0x5389e8*/
    v6 /= 2; /*0x5389ea*/
  LABEL_12:
    if ( v6 <= 0 ) /*0x5389fc*/
      return 0; /*0x5389fc*/
  }
  if ( v9 != v7 ) /*0x5389ee*/
  {
    v8 = (unsigned int *)(v10 + 8);
    v6 += -1 - v6 / 2; /*0x5389f8*/
    goto LABEL_12; /*0x5389f8*/
  }
  if ( !v10 ) /*0x538a09*/
    return 0; /*0x538a04*/
  this->q010 = v10; /*0x538a0d*/
  return 1; /*0x5389a0*/
}
} // namespace gamemd