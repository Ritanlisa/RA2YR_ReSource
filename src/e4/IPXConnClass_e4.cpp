// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/IPXConnClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x53F430
namespace gamemd {  // G42.18 ns repair
void * IPXConnClass::constructor(int aP1, SessionClass * aP2, IPXConnClass * aP3, IPXConnClass * aP4, unsigned int * a5, int a7, wchar_t * Source, int aP8, void *a9)
{

  IPXConnClass::initConnection((int)((ModemConnectionClass *)aP1), aP2, aP3, aP4, a5, 2, -1, 60, a9); /*0x53f458*/
  Waypoint::InitInvalid(&aP1->u32_4C); /*0x53f462*/
  /* X11: vtable install elided (implicit via IPXConnClass virtuals 0x53f46b) */
  if ( aP8 ) /*0x53f473*/
  {
    aP1->u32_4C = *(unsigned int *)(aP8); /*0x53f479*/
    *((unsigned int *)aP1 + 20) = ((unsigned int *)(aP8))[1]; /*0x53f47e*/
    *((unsigned int *)aP1 + 21) = ((unsigned int *)(aP8))[2]; /*0x53f484*/
  }
  aP1->q064 = aP8; /*0x53f494*/
  wcscpy(&aP1->u32_D0,(const wchar_t *)(aP8)); /*0x53f497*/
  int v13; // [esp+8h] [ebp-8h] BYREF
  (&aP1->u32_4C)->CopyAddress((unsigned int *)(&a9), (int)&v13); /*0x53f4ab*/
  int v10; // ecx
  v10 = v13; /*0x53f4b0*/
  int16_t v11; // dx
  int16_t v14; // [esp+Ch] [ebp-4h]
  v11 = v14; /*0x53f4b4*/
  aP1->q060 = 0; /*0x53f4bc*/
  *((unsigned int *)aP1 + 22) = v10; /*0x53f4c4*/
  *((unsigned short *)aP1 + 46) = v11; /*0x53f4c6*/
  return (void *)(aP1); /*0x53f4c3*/
}  // G42.18 ns repair
} // namespace gamemd