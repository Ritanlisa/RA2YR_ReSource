// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_765380_e4.hpp"
#include "e4/classes/E4Recv_766060_e4.hpp"
#include "e4/classes/Campaign_WorldDominationTour_24_e4.hpp"
#include "e4/classes/Campaign_WorldDominationTour_24__e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x765380
namespace gamemd {
unsigned int * E4Recv_765380::sub_765380(unsigned int * a2, int a3)
{
  void* v5;
  char *v6; // [esp+8h] [ebp-8h]
  char * v7;

  v6 = &this->u32_60; /*0x765387*/
  v7 = 0; /*0x76538f*/
  if ( Campaign_WorldDominationTour_24_::AddRef(&v5) ) /*0x76539f*/
  {
    do /*0x7653db*/
    {
      if ( FindWDTTerritoryClass_Find_Find(*(unsigned int **)(*((unsigned int *)v6 + 1) + 8 * v7 + 4)) == a3 ) /*0x7653c6*/
        break; /*0x7653c6*/
      ((void (__thiscall *)(void ***))v5[2])(&v5); /*0x7653d0*/
    }
    while ( ((uint8_t (__thiscall *)(void ***))v5[1])(&v5) ); /*0x7653db*/
  }
  v7 = v7; /*0x7653ea*/
  a2[1] = v6; /*0x7653ef*/
  a2[2] = v7; /*0x7653f2*/
  return a2; /*0x7653ee*/
}
} // namespace gamemd

// 0x766060
namespace gamemd {
int E4Recv_766060::sub_766060()
{
  int v1; // eax

  v1 = *(unsigned int *)&this->M12; /*0x766060*/
  if ( v1 ) /*0x766065*/
    return *(unsigned int *)(v1 + 8); /*0x766067*/
  else
    return 0; /*0x76606b*/
}
} // namespace gamemd
