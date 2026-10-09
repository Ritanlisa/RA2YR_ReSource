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
  __int16 v11; // dx
  int v13; // [esp+8h] [ebp-8h] BYREF
  __int16 v14; // [esp+Ch] [ebp-4h]

  IPXConnClass::initConnection((ModemConnectionClass *)aP1, aP2, aP3, aP4, a5, 2, -1, 60, a9); /*0x53f458*/
  Waypoint::InitInvalid((Waypoint *)((char *)aP1 + 76)); /*0x53f462*/
  *(_DWORD *)aP1->__pad_0 = &(void*)(void*)&IPXConnClass_vftable; /*0x53f46b*/
  if ( aP8 ) /*0x53f473*/
  {
    *((_DWORD *)aP1 + 19) = *aP8; /*0x53f479*/
    *((_DWORD *)aP1 + 20) = aP8[1]; /*0x53f47e*/
    *((_DWORD *)aP1 + 21) = aP8[2]; /*0x53f484*/
  }
  *((_DWORD *)aP1 + 25) = aP8; /*0x53f494*/
  wcscpy((wchar_t *)aP1 + 52, aP8); /*0x53f497*/
  Network::CopyAddress((Network *)((char *)aP1 + 76), &a9, (int)&v13); /*0x53f4ab*/
  v10 = v13; /*0x53f4b0*/
  v11 = v14; /*0x53f4b4*/
  *((_DWORD *)aP1 + 24) = 0; /*0x53f4bc*/
  *((_DWORD *)aP1 + 22) = v10; /*0x53f4c4*/
  *((_WORD *)aP1 + 46) = v11; /*0x53f4c6*/
  return aP1; /*0x53f4c3*/
}
} // namespace gamemd