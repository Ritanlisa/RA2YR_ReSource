// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Object_e4.hpp"

// 0x7228B0
namespace gamemd {
BuildingTypeClass * * AudioClass::ProcessEvent()
{
{
  int i; // eax
  int result; // eax
  _DWORD *j; // edi
  __int16 *v7; // ecx
  __int16 *v17; // [esp+Ch] [ebp-8h]
  int v2 = 0; /*0x7228b6*/
  CampaignClass *v3 = *(this + 61); /*0x7228b9*/
  *(this + 60) = 0; /*0x7228bf*/
  if ( *v3 >= 0 ) /*0x7228cc*/
  {
    do /*0x7228de*/
    {
      ++v2; /*0x7228d1*/
      *(_DWORD *)(v3[2] + 4 * v2 - 4) = 0; /*0x7228d2*/
    }
    while ( v2 <= *v3 ); /*0x7228de*/
  }
  *v3 = 0; /*0x7228e0*/
  for ( i = Object::ComputeAllocationSize() - 1; i >= 0; *((_BYTE *)*(this + 62) + i + 1) = 0 ) /*0x7228ec*/
    --i; /*0x7228f4*/
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x722901*/
  result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x72290b*/
  for ( j = (_DWORD *)result; result; j = (_DWORD *)result ) /*0x722914*/
  {
    if ( (int *)BuildingClass::FindByCellHash(j) == *(this + 38) /*0x722931*/
      && (unsigned __int8)BuildingClass::IsTiberiumSiloEligible(j) )
    {
      v7 = (__int16 *)(j + 9); /*0x72294a*/
      v17 = (__int16 *)(j + 9); /*0x72294d*/
      (*(this + 63))[2 * (_DWORD)*(this + 60)] = j[9]; /*0x722953*/
      (*(this + 63))[2 * (_DWORD)*(this + 60) + 1] = 0; /*0x722962*/
      int v8 = (int)*(this + 60); /*0x72296a*/
      _DWORD * v9 = *(this + 61); /*0x722976*/
      unsigned int v10 = (unsigned int)&(*(this + 63))[2 * v8]; /*0x72297c*/
      *(this + 60) = (int *)(v8 + 1); /*0x722980*/
      unsigned int v11 = *v9 + 1; /*0x72298c*/
      float v16 = *(float *)(v10 + 4); /*0x72298f*/
      unsigned int v18 = v10; /*0x722996*/
      unsigned int v12 = v11 >> 1; /*0x72299a*/
      if ( v11 < v9[1] ) /*0x72299e*/
      {
        if ( v11 > 1 ) /*0x7229a3*/
        {
          do /*0x7229c3*/
          {
            int v13 = v9[2]; /*0x7229a5*/
            int v14 = *(_DWORD *)(v13 + 4 * v12); /*0x7229a8*/
            if ( *(float *)(v14 + 4) <= (double)v16 ) /*0x7229b7*/
              break; /*0x7229b7*/
            *(_DWORD *)(v13 + 4 * v11) = v14; /*0x7229b9*/
            v11 = v12; /*0x7229bc*/
            v12 >>= 1; /*0x7229be*/
          }
          while ( v11 > 1 ); /*0x7229c3*/
          v7 = v17; /*0x7229c5*/
          v10 = v18; /*0x7229c9*/
        }
        *(_DWORD *)(v9[2] + 4 * v11) = v10; /*0x7229d0*/
        unsigned int v15 = v9[3]; /*0x7229d6*/
        ++*v9; /*0x7229dc*/
        if ( v10 > v15 ) /*0x7229df*/
          v9[3] = v10; /*0x7229e1*/
        if ( v10 < v9[4] ) /*0x7229e7*/
          v9[4] = v10; /*0x7229e9*/
      }
      *((_BYTE *)*(this + 62) + Cell::PosToIndex(v7)) = 1; /*0x7229f7*/
    }
    result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x722a00*/
  }
  return result; /*0x722a11*/
}
} // namespace gamemd
