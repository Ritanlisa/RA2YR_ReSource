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
#include "e4/classes/BuildingTypeClass_e4.hpp"  // G42.36 C2027 supply

// 0x7228B0
namespace gamemd {  // G42.18 ns repair
BuildingTypeClass * * AudioClass::ProcessEvent()
{


  int v2 = 0; // ecx /*0x7228b6*/
  int *v3; // eax
  v3 = (int *)this->u32_F4; /*0x7228b9*/
  this->u32_F0 = 0; /*0x7228bf*/
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
  int i; // eax
  for ( i = Object::ComputeAllocationSize() - 1; i >= 0; *(unsigned char *)(this->u32_F8 + i + 1) = 0 ) /*0x7228ec*/
    --i; /*0x7228f4*/
  ((LayerClass *)&DataGlobal_87F7E8)->CellIteratorReset(); /*0x722901*/
  int result; // eax
  result = ((LayerClass *)&DataGlobal_87F7E8)->CellIteratorNext(); /*0x72290b*/
  BuildingClass *j; // edi
  for ( j = (BuildingClass *)result; result; j = (BuildingClass *)result ) /*0x722914*/
  {
    if ( BuildingClass::FindByCellHash(j) == this->u32_98 && BuildingClass::IsTiberiumSiloEligible(j) ) /*0x722931*/
    {
      Cell *p_occupant; // ecx
      p_occupant = &j->objectTypeFlags; /*0x72294a*/
      Cell *v17; // [esp+Ch] [ebp-8h]
      v17 = &j->objectTypeFlags; /*0x72294d*/
      *(unsigned int *)(this->u32_FC + 8 * this->u32_F0) = (unsigned int)(j->objectTypeFlags); /*0x722953*/
      *(unsigned int *)(this->u32_FC + 8 * this->u32_F0 + 4) = 0; /*0x722962*/
      int v8 = this->u32_F0; // eax /*0x72296a*/
      unsigned int *v9; // ebp
      v9 = (unsigned int *)this->u32_F4; /*0x722976*/
      unsigned int v10 = this->u32_FC + 8 * v8; // ebx /*0x72297c*/
      this->u32_F0 = v8 + 1; /*0x722980*/
      unsigned int v11 = *v9 + 1; // edx /*0x72298c*/
      float v16; // [esp+8h] [ebp-Ch]
      v16 = *(float *)(v10 + 4); /*0x72298f*/
      unsigned int v18; // [esp+10h] [ebp-4h]
      v18 = v10; /*0x722996*/
      unsigned int v12 = v11 >> 1; // edi /*0x72299a*/
      if ( v11 < v9[1] ) /*0x72299e*/
      {
        if ( v11 > 1 ) /*0x7229a3*/
        {
          do /*0x7229c3*/
          {
            int v13; // ecx
            v13 = v9[2]; /*0x7229a5*/
            int v14; // ebx
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
        unsigned int v15; // eax
        v15 = v9[3]; /*0x7229d6*/
        ++*v9; /*0x7229dc*/
        if ( v10 > v15 ) /*0x7229df*/
          v9[3] = v10; /*0x7229e1*/
        if ( v10 < v9[4] ) /*0x7229e7*/
          v9[4] = v10; /*0x7229e9*/
      }
      *(unsigned char *)((p_occupant)->PosToIndex() + this->u32_F8) = 1; /*0x7229f7*/
    }
    result = ((LayerClass *)&DataGlobal_87F7E8)->CellIteratorNext(); /*0x722a00*/
  }
  return (gamemd::BuildingTypeClass **)(result); /*0x722a11*/

}
}  // G42.18 ns repair