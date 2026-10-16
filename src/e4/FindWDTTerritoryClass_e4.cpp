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


  char *v6; // [esp+8h] [ebp-8h]
  v6 = &this->u8_18; /*0x765387*/
  int v7; // [esp+Ch] [ebp-4h]
  v7 = 0; /*0x76538f*/
  void **v5; // [esp+4h] [ebp-Ch] BYREF
  v5 = (void **)(&vt_VectorCursorrc_ptrDynamicVectorClassrc_ptr); /*0x765397*/
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
  int v4 = v7; // edx /*0x7653ea*/
  a2[1] = (unsigned int)(v6); /*0x7653ef*/
  a2[2] = v4; /*0x7653f2*/
  *a2 = (unsigned int)(&vt_VectorCursorrc_ptrDynamicVectorClassrc_ptr); /*0x7653f5*/
  return a2; /*0x7653ee*/

}
} // namespace gamemd

// 0x766060
namespace gamemd {
int E4Recv_766060::sub_766060()
{


  unsigned int *vtable3; // eax
  vtable3 = (unsigned int *)(this->M12); /*0x766060*/
  if ( vtable3 ) /*0x766065*/
    return vtable3->vtable3; /*0x766067*/
  else
    return 0; /*0x76606b*/

}
} // namespace gamemd
