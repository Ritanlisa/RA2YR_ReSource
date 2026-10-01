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
namespace gamemd {
void * IPXConnClass::constructor(int aP1, SessionClass * aP2, IPXConnClass * aP3, IPXConnClass * aP4, unsigned int * a5, int a7, wchar_t * Source, int aP8, void *a9)
{

  int v10; // ecx
  int16_t v11; // dx
  int v13; // [esp+8h] [ebp-8h] BYREF
  int16_t v14; // [esp+Ch] [ebp-4h]

  IPXConnClass::initConnection((ModemConnectionClass *)this, aP1, aP2, aP3, aP4, 2, -1, 60, aP8); /*0x53f458*/
  Waypoint::InitInvalid((Waypoint *)((char *)this + 76)); /*0x53f462*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_IPXConnClass); /*0x53f46b*/
  if ( a5 ) /*0x53f473*/
  {
    *((unsigned int *)this + 19) = *a5; /*0x53f479*/
    *((unsigned int *)this + 20) = a5[1]; /*0x53f47e*/
    *((unsigned int *)this + 21) = a5[2]; /*0x53f484*/
  }
  *((unsigned int *)this + 25) = a7; /*0x53f494*/
  wcscpy((wchar_t *)this + 52, Source); /*0x53f497*/
  Network::CopyAddress((Network *)((char *)this + 76), &aP8, (int)&v13); /*0x53f4ab*/
  v10 = v13; /*0x53f4b0*/
  v11 = v14; /*0x53f4b4*/
  *((unsigned int *)this + 24) = 0; /*0x53f4bc*/
  *((unsigned int *)this + 22) = v10; /*0x53f4c4*/
  *((unsigned short *)this + 46) = v11; /*0x53f4c6*/
  return this; /*0x53f4c3*/

}
} // namespace gamemd