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
  __int16 v14; // [esp+Ch] [ebp-4h]

  IPXConnClass::initConnection(aP1, aP2, aP3, aP4, 2, -1, 60, aP8); /*0x53f458*/
  Waypoint::InitInvalid((Waypoint *)((char *)&this->RemoteAddress6)); /*0x53f462*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&IPXConnClass_vftable; /*0x53f46b*/
  if ( a5 ) /*0x53f473*/
  {
    this->u32_4C = *a5; /*0x53f479*/
    this->PacketsReceived = a5[1]; /*0x53f47e*/
    this->u32_54 = a5[2]; /*0x53f484*/
  }
  this->u32_64 = a7; /*0x53f494*/
  wcscpy((wchar_t *)this + 52, Source); /*0x53f497*/
  Network::CopyAddress((Network *)((char *)&this->RemoteAddress6), &aP8, (int)&v13); /*0x53f4ab*/
  v13 = v13; /*0x53f4b0*/
  v14 = v14; /*0x53f4b4*/
  this->Socket = 0; /*0x53f4bc*/
  this->u32_58 = v13; /*0x53f4c4*/
  this->u32_5C = v14; /*0x53f4c6*/
  return this; /*0x53f4c3*/
}
} // namespace gamemd