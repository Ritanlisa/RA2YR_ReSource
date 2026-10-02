// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x7228B0
namespace gamemd {
BuildingTypeClass * * AudioClass::ProcessEvent()
{

  int v2; // ecx
  int *v3; // eax
  int i; // eax
  int result; // eax
  BuildingClass *j; // edi
  Cell *p_occupant; // ecx
  int v8; // eax
  unsigned int *v9; // ebp
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // edi
  int v13; // ecx
  int v14; // ebx
  unsigned int v15; // eax
  float v16; // [esp+8h] [ebp-Ch]
  Cell *v17; // [esp+Ch] [ebp-8h]
  unsigned int v18; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x7228b6*/
  v3 = (int *)*((unsigned int *)this + 61); /*0x7228b9*/
  *((unsigned int *)this + 60) = 0; /*0x7228bf*/
  if ( *v3 >= 0 ) /*0x7228cc*/
  {
    do /*0x7228de*/
    {
      ++v2; /*0x7228d1*/
      *(unsigned int *)(v3[2] + 4 * v2 - 4) = 0; /*0x7228d2*/
    }
    while ( v2 <= *v3 ); /*0x7228de*/
  }
  *v3 = 0; /*0x7228e0*/
  for ( i = ((gamemd::Object *)this)->ComputeAllocationSize() - 1; i >= 0; *(unsigned char *)(*((unsigned int *)this + 62) + i + 1) = 0 ) /*0x7228ec*/
    --i; /*0x7228f4*/
  ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CellIteratorReset(); /*0x722901*/
  result = ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CellIteratorNext(); /*0x72290b*/
  for ( j = (BuildingClass *)result; result; j = (BuildingClass *)result ) /*0x722914*/
  {
    if ( BuildingClass::FindByCellHash(j) == *((unsigned int *)this + 38) && BuildingClass::IsTiberiumSiloEligible(j) ) /*0x722931*/
    {
      p_occupant = (Cell *)&((unsigned int *)j)[0]; /*0x72294a*/
      v17 = (Cell *)&((unsigned int *)j)[0]; /*0x72294d*/
      *(unsigned int *)(*((unsigned int *)this + 63) + 8 * *((unsigned int *)this + 60)) = ((unsigned int *)j)[0]; /*0x722953*/
      *(unsigned int *)(*((unsigned int *)this + 63) + 8 * *((unsigned int *)this + 60) + 4) = 0; /*0x722962*/
      v8 = *((unsigned int *)this + 60); /*0x72296a*/
      v9 = (unsigned int *)*((unsigned int *)this + 61); /*0x722976*/
      v10 = *((unsigned int *)this + 63) + 8 * v8; /*0x72297c*/
      *((unsigned int *)this + 60) = v8 + 1; /*0x722980*/
      v11 = *v9 + 1; /*0x72298c*/
      v16 = *(float *)(v10 + 4); /*0x72298f*/
      v18 = v10; /*0x722996*/
      v12 = v11 >> 1; /*0x72299a*/
      if ( v11 < v9[1] ) /*0x72299e*/
      {
        if ( v11 > 1 ) /*0x7229a3*/
        {
          do /*0x7229c3*/
          {
            v13 = v9[2]; /*0x7229a5*/
            v14 = *(unsigned int *)(v13 + 4 * v12); /*0x7229a8*/
            if ( *(float *)(v14 + 4) <= (double)v16 ) /*0x7229b7*/
              break; /*0x7229b7*/
            *(unsigned int *)(v13 + 4 * v11) = v14; /*0x7229b9*/
            v11 = v12; /*0x7229bc*/
            v12 >>= 1; /*0x7229be*/
          }
          while ( v11 > 1 ); /*0x7229c3*/
          p_occupant = v17; /*0x7229c5*/
          v10 = v18; /*0x7229c9*/
        }
        *(unsigned int *)(v9[2] + 4 * v11) = v10; /*0x7229d0*/
        v15 = v9[3]; /*0x7229d6*/
        ++*v9; /*0x7229dc*/
        if ( v10 > v15 ) /*0x7229df*/
          v9[3] = v10; /*0x7229e1*/
        if ( v10 < v9[4] ) /*0x7229e7*/
          v9[4] = v10; /*0x7229e9*/
      }
      *(unsigned char *)(((Cell*)p_occupant)->PosToIndex() + *((unsigned int *)this + 62)) = 1; /*0x7229f7*/
    }
    result = ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CellIteratorNext(); /*0x722a00*/
  }
  return (gamemd::BuildingTypeClass **)(result); /*0x722a11*/

}
}