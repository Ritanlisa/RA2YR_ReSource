// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/IPXConnClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/e4_protos.h"

// 0x53F430
namespace gamemd {
void * IPXConnClass::constructor(int aP1, SessionClass * aP2, IPXConnClass * aP3, IPXConnClass * aP4, unsigned int * a5, int a7, wchar_t * Source, int aP8)
{
  int v13; // [esp+8h] [ebp-8h] BYREF
  __int16 v14; // [esp+Ch] [ebp-4h]

  IPXConnClass::initConnection(aP1, aP2, aP3, aP4, 2, -1, 60, aP8); /*0x53f458*/
  Waypoint::InitInvalid((_BYTE *)&this->RemoteAddress6); /*0x53f462*/
  *(_DWORD *)this = &(void*)(void*)&IPXConnClass_vftable; /*0x53f46b*/
  if ( a5 ) /*0x53f473*/
  {
    this->u32_4C = *a5; /*0x53f479*/
    this->q050 = a5[1]; /*0x53f47e*/
    this->q054 = a5[2]; /*0x53f484*/
  }
  this->q064 = a7; /*0x53f494*/
  wcscpy((wchar_t *)&this->u32_D0, Source); /*0x53f497*/
  Network::CopyAddress((_DWORD *)&this->u32_4C, &aP8, (int)&v13); /*0x53f4ab*/
  v13 = v13; /*0x53f4b0*/
  v14 = v14; /*0x53f4b4*/
  this->q060 = 0; /*0x53f4bc*/
  this->u32_58 = v13; /*0x53f4c4*/
  this->u16_5C = v14; /*0x53f4c6*/
  return this; /*0x53f4c3*/
}
} // namespace gamemd