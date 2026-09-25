// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_765380_e4.hpp"
#include "e4/classes/E4Recv_766060_e4.hpp"
#include "e4/classes/Campaign_WorldDominationTour_24_e4.hpp"
#include "e4/classes/Campaign_WorldDominationTour_24__e4.hpp"
#include "e4/e4_protos.h"

// 0x765380
namespace gamemd {
unsigned int * E4Recv_765380::sub_765380(unsigned int * a2, int a3)
{
  void **v5; // [esp+4h] [ebp-Ch] BYREF
  char *v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  v6 = &this->u32_60; /*0x765387*/
  v7 = 0; /*0x76538f*/
  v5 = &(void*)(void*)&VectorCursor_rc_ptr_WorldDominationTour_Conflict_DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict_vftable; /*0x765397*/
  if ( Campaign_WorldDominationTour_24_::AddRef(&v5) ) /*0x76539f*/
  {
    do /*0x7653db*/
    {
      if ( FindWDTTerritoryClass_Find_Find(*(_DWORD **)(*((_DWORD *)v6 + 1) + 8 * v7 + 4)) == a3 ) /*0x7653c6*/
        break; /*0x7653c6*/
      ((void (__thiscall *)(void ***))v5[2])(&v5); /*0x7653d0*/
    }
    while ( ((unsigned __int8 (__thiscall *)(void ***))v5[1])(&v5) ); /*0x7653db*/
  }
  v7 = v7; /*0x7653ea*/
  a2[1] = v6; /*0x7653ef*/
  a2[2] = v7; /*0x7653f2*/
  *a2 = &(void*)(void*)&VectorCursor_rc_ptr_WorldDominationTour_Conflict_DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict_vftable; /*0x7653f5*/
  return a2; /*0x7653ee*/
}
} // namespace gamemd

// 0x766060
namespace gamemd {
int E4Recv_766060::sub_766060()
{
  int v1; // eax

  v1 = *(this + 3); /*0x766060*/
  if ( v1 ) /*0x766065*/
    return *(_DWORD *)(v1 + 8); /*0x766067*/
  else
    return 0; /*0x76606b*/
}
} // namespace gamemd
