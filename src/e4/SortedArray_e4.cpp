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
#include "e4/classes/E4Recv_728A00_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x52B620
namespace gamemd {
int SortedArray::BinarySearch(CCINIClass * aP1)
{

  size_t result; // eax
  ObjectClass *v4; // edi
  ObjectClass *v5; // ebx
  int v6; // ecx
  ObjectClass *v7; // esi

  result = (size_t)*((unsigned int *)this + 1); /*0x52b623*/
  if ( result ) /*0x52b628*/
  {
    if ( !*((unsigned char *)this + 12) ) /*0x52b62e*/
    {
      qsort(*this, result, 8u, CompareFunc4Int); /*0x52b640*/
      *((unsigned int *)this + 4) = 0; /*0x52b648*/
      *((unsigned char *)this + 12) = 1; /*0x52b64f*/
    }
    v4 = (ObjectClass *)*this; /*0x52b659*/
    v5 = *(ObjectClass **)aP1->__pad_0; /*0x52b65b*/
    v6 = (int)*((unsigned int *)this + 1); /*0x52b65d*/
    if ( v6 <= 0 ) /*0x52b662*/
      return 0; /*0x52b68e*/
    while ( 1 ) /*0x52b66b*/
    {
      v7 = *(ObjectClass **)&v4->__pad_0[8 * (v6 / 2)]; /*0x52b66b*/
      if ( (int)v7 <= (int)v5 ) /*0x52b673*/
      {
        if ( v7 == v5 ) /*0x52b679*/
          return (size_t)v4 + 8 * (v6 / 2); /*0x52b693*/
        v4 = (ObjectClass *)((char *)v4 + 8 * (v6 / 2) + 8); /*0x52b67b*/
        v6 += -1 - v6 / 2; /*0x52b683*/
      }
      else
      {
        v6 /= 2; /*0x52b675*/
      }
      if ( v6 <= 0 ) /*0x52b687*/
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
  void * v6;
  int i; // ecx
  int v8; // eax
  unsigned int *v9; // edx
  int v10; // eax
  int v11; // eax

  v4 = *((unsigned int *)this + 2); /*0x5387da*/
  if ( *((unsigned int *)this + 1) + 1 <= v4 ) /*0x5387e0*/
  {
LABEL_9:
    *(unsigned int *)(*(unsigned int *)this + 8 * *((unsigned int *)this + 1)) = *(unsigned int *)aP1->__pad_0; /*0x53885b*/
    *(unsigned int *)(*(unsigned int *)this + 8 * *((unsigned int *)this + 1) + 4) = *a2; /*0x538875*/
    v11 = *((unsigned int *)this + 1) + 1; /*0x53887c*/
    *((unsigned char *)this + 12) = 0; /*0x53887d*/
    *((unsigned int *)this + 1) = v11; /*0x538881*/
    return 1; /*0x53888a*/
  }
  if ( v4 ) /*0x5387e4*/
  {
    v5 = *((unsigned int *)this + 2); /*0x5387ed*/
    if ( v4 < 0 ) /*0x5387f1*/
      return 0; /*0x5387f1*/
  }
  else
  {
    v5 = (int)(10);
  }
  v6 = (void *)((int)(RA2_OPNEW(8 * (v4 + v5))));
  if ( v6 ) /*0x53880e*/
  {
    for ( i = 0; i < *((unsigned int *)this + 1); *(unsigned int *)((unsigned int)(v8)+ (unsigned int)(v6)+ 4) = v9[1] ) /*0x53881c*/
    {
      v8 = 8 * i; /*0x538820*/
      v9 = (unsigned int *)(*(unsigned int *)this + 8 * i++); /*0x538829*/
      *(unsigned int *)((unsigned int)(v8)+ v6) = *v9; /*0x53882e*/
    }
    RA2_OPDEL(*(void **)this); /*0x538842*/
    v10 = *((unsigned int *)this + 2); /*0x538847*/
    *(unsigned int *)this = v6; /*0x53884f*/
    *((unsigned int *)this + 2) = v5 + v10; /*0x538851*/
    *((unsigned int *)this + 4) = 0; /*0x538854*/
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
  ObjectClass *v13; // edi
  ObjectClass ** v14;
  int v15; // [esp+10h] [ebp-8h]

  v3 = *((unsigned int *)this + 1); /*0x5388a9*/
  if ( !v3 ) /*0x5388ae*/
    return 0; /*0x5388ae*/
  if ( !*((unsigned char *)this + 12) ) /*0x5388b0*/
  {
    qsort(*(void **)this, v3, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFuncInt); /*0x5388c2*/
    *((unsigned int *)this + 4) = 0; /*0x5388ca*/
    *((unsigned char *)this + 12) = 1; /*0x5388d1*/
  }
  v4 = *((unsigned int *)this + 1); /*0x5388d9*/
  v5 = *(unsigned int **)this; /*0x5388e0*/
  v15 = *(unsigned int *)aP1->__pad_0; /*0x5388e4*/
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
  for ( i = v9 + 1; i < *((unsigned int *)this + 1); *(unsigned int *)(v12 - 4) = *(unsigned int *)(v12 + 4) ) /*0x538939*/
  {
    v11 = *(unsigned int *)(*(unsigned int *)this + 8 * i); /*0x53893d*/
    v12 = *(unsigned int *)this + 8 * i++; /*0x538940*/
    *(unsigned int *)(v12 - 8) = v11; /*0x538944*/
  }
  v13 = (gamemd::ObjectClass **)(*(ObjectClass **)this);
  v14 = (int)((gamemd::ObjectClass **)(*((unsigned int *)this + 1) - 1));
  *((unsigned int *)this + 1) = v14; /*0x53895c*/
  *(unsigned int *)&v13->__pad_0[8 * v14] = 0; /*0x53895f*/
  *(unsigned int *)&v13->__pad_0[8 * v14 + 4] = 0; /*0x538962*/
  *((unsigned int *)this + 4) = 0; /*0x538966*/
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

  v3 = *((unsigned int *)this + 1); /*0x538985*/
  if ( !v3 ) /*0x53898b*/
    return 0; /*0x53898b*/
  v4 = *(unsigned int **)((char *)this + 16); /*0x53898d*/
  if ( v4 && *v4 == *a2 ) /*0x53899e*/
    return 1; /*0x5389a6*/
  if ( !*((unsigned char *)this + 12) ) /*0x5389a9*/
  {
    qsort(*(void **)this, v3, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFuncInt); /*0x5389bb*/
    *((unsigned int *)this + 4) = 0; /*0x5389c3*/
    *((unsigned char *)this + 12) = 1; /*0x5389ca*/
  }
  v6 = *((unsigned int *)this + 1); /*0x5389ce*/
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
  *((unsigned int *)this + 4) = v10; /*0x538a0d*/
  return 1; /*0x5389a0*/

}
} // namespace gamemd