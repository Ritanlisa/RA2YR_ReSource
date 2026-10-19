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
#include "e4/classes/Conflict_e4.hpp"

// 0x765380
namespace gamemd {  // G42.18 ns repair
unsigned int * E4Recv_765380::sub_765380(unsigned int * a2, int a3)
{

  int v4; // edx
  void **v5; // [esp+4h] [ebp-Ch] BYREF
  char *v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  v6 = &this->u8_18; /*0x765387*/
  v7 = 0; /*0x76538f*/
  v5 = &g_ptr_7F6F9C; /*0x765397*/
  if ( Campaign_WorldDominationTour_24::AddRef(&v5) ) /*0x76539f*/
  {
    do /*0x7653db*/
    {
      if ( FindWDTTerritoryClass_Find_Find(*(unsigned int **)(*((unsigned int *)v6 + 1) + 8 * v7 + 4)) == a3 ) /*0x7653c6*/
        break; /*0x7653c6*/
      ((void (*)(void ***))v5[2])(&v5); /*0x7653d0*/
    }
    while ( ((unsigned __int8 (*)(void ***))v5[1])(&v5) ); /*0x7653db*/
  }
  v4 = v7; /*0x7653ea*/
  a2[1] = v6; /*0x7653ef*/
  a2[2] = v4; /*0x7653f2*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7F6F9C) */  /*0x7653f5*/
  return a2; /*0x7653ee*/

}
} // namespace gamemd

// 0x766060
namespace gamemd {
int E4Recv_766060::sub_766060()
{


  unsigned int *ptr_8; // eax
  ptr_8 = (unsigned int *)(this->M12); /*0x766060*/
  if ( ptr_8 ) /*0x766065*/
    return ptr_8->ptr_8; /*0x766067*/
  else
    return 0; /*0x76606b*/

}
} // namespace gamemd
