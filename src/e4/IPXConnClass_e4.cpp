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
void * IPXConnClass::constructor(int aP1, SessionClass * aP2, IPXConnClass * aP3, IPXConnClass * aP4, unsigned int * a5, int a7, wchar_t * Source, int aP8)
{
  int v13; // [esp+8h] [ebp-8h] BYREF
  int16_t v14; // [esp+Ch] [ebp-4h]

  IPXConnClass::initConnection(aP1, aP2, aP3, aP4, 2, -1, 60, aP8); /*0x53f458*/
    Waypoint::InitInvalid((unsigned char *)this + 76);
  *(unsigned int *)this->__pad_0 = (void*)&IPXConnClass_vftable; /*0x53f46b*/
  if ( a5 ) /*0x53f473*/
  {
        *((unsigned int *)this + 19) = *a5;
        *((unsigned int *)this + 20) = a5[1];
        *((unsigned int *)this + 21) = a5[2];
  }
    *((unsigned int *)this + 25) = a7;
  wcscpy((wchar_t *)this + 52, Source); /*0x53f497*/
    Network::CopyAddress((unsigned int *)this + 19, &aP8, (int)&v13);
  v13 = v13; /*0x53f4b0*/
  v14 = v14; /*0x53f4b4*/
    *((unsigned int *)this + 24) = 0;
    *((unsigned int *)this + 22) = v10;
    *((unsigned short *)this + 46) = v11;
  return this; /*0x53f4c3*/
}
} // namespace gamemd