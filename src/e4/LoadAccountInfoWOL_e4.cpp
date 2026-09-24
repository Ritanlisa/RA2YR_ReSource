// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_779690_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x779690
namespace gamemd {
void * E4Recv_779690::LoadAccountInfoWOL_Load(ReferenceCounted * aP1, ObjectClass * aP2, ReferenceCounted * aP3, ReferenceCounted * aP4, int a6, ObjectClass * aP6, ReferenceCounted * aP7, ReferenceCounted * aP8, ReferenceCounted * aP9, ReferenceCounted * aP10, ReferenceCounted * aP11, ReferenceCounted * aP12, ReferenceCounted * aP13, ReferenceCounted * aP14)
{
  *((_DWORD *)this + 1) = 0; /*0x779695*/
  *((_BYTE *)this + 8) = 0; /*0x779698*/
  *(_DWORD *)this = &ReferenceCounted::`vftable'; /*0x7796a3*/
  String::AssignFromPtr((char **)this + 3, aP1); /*0x7796a9*/
  *((_DWORD *)this + 4) = aP2; /*0x7796ba*/
  *((_DWORD *)this + 6) = aP4; /*0x7796c1*/
  *((_BYTE *)this + 20) = aP3; /*0x7796c8*/
  *((_DWORD *)this + 7) = a6; /*0x7796cf*/
  *((_DWORD *)this + 9) = aP7; /*0x7796d6*/
  *((_DWORD *)this + 8) = aP6; /*0x7796dd*/
  *((_DWORD *)this + 10) = aP8; /*0x7796e4*/
  *((_DWORD *)this + 12) = aP10; /*0x7796eb*/
  *((_DWORD *)this + 11) = aP9; /*0x7796f2*/
  *((_DWORD *)this + 13) = aP11; /*0x7796f9*/
  *((_BYTE *)this + 56) = aP12; /*0x779700*/
  WideString::AssignFromPtr((wchar_t **)this + 15, aP14); /*0x779703*/
  WideString::AssignFromPtr((wchar_t **)this + 16, aP13); /*0x779710*/
  *(_DWORD *)this = &PlayerProfile::`vftable'; /*0x779715*/
  return this; /*0x77971d*/
}
} // namespace gamemd
