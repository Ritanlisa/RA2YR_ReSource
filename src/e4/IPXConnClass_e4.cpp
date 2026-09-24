// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"

// 0x53F430
void * IPXConnClass::constructor(int aP1, SessionClass * aP2, IPXConnClass * aP3, IPXConnClass * aP4, unsigned int * a5, int a7, wchar_t * Source, int aP8)
{
  int v10; // ecx
  __int16 v11; // dx
  int v13; // [esp+8h] [ebp-8h] BYREF
  __int16 v14; // [esp+Ch] [ebp-4h]

  IPXConnClass::initConnection(aP1, aP2, aP3, aP4, 2, -1, 60, aP8); /*0x53f458*/
  Waypoint::InitInvalid((_BYTE *)this + 76); /*0x53f462*/
  *(_DWORD *)this = &IPXConnClass::`vftable'; /*0x53f46b*/
  if ( a5 ) /*0x53f473*/
  {
    *((_DWORD *)this + 19) = *a5; /*0x53f479*/
    *((_DWORD *)this + 20) = a5[1]; /*0x53f47e*/
    *((_DWORD *)this + 21) = a5[2]; /*0x53f484*/
  }
  *((_DWORD *)this + 25) = a7; /*0x53f494*/
  wcscpy((wchar_t *)this + 52, Source); /*0x53f497*/
  Network::CopyAddress((_DWORD *)this + 19, &aP8, (int)&v13); /*0x53f4ab*/
  v10 = v13; /*0x53f4b0*/
  v11 = v14; /*0x53f4b4*/
  *((_DWORD *)this + 24) = 0; /*0x53f4bc*/
  *((_DWORD *)this + 22) = v10; /*0x53f4c4*/
  *((_WORD *)this + 46) = v11; /*0x53f4c6*/
  return this; /*0x53f4c3*/
}