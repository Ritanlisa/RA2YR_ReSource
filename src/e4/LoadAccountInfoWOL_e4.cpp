// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_779690_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/e4_protos.h"

// 0x779690
namespace gamemd {
void * E4Recv_779690::LoadAccountInfoWOL_Load(ReferenceCounted * aP1, ObjectClass * aP2, ReferenceCounted * aP3, ReferenceCounted * aP4, int a6, ObjectClass * aP6, ReferenceCounted * aP7, ReferenceCounted * aP8, ReferenceCounted * aP9, ReferenceCounted * aP10, ReferenceCounted * aP11, ReferenceCounted * aP12, ReferenceCounted * aP13, ReferenceCounted * aP14)
{
  this->M4 = 0; /*0x779695*/
  this->M8 = 0; /*0x779698*/
  *(_DWORD *)this = &(void*)(void*)&ReferenceCounted_vftable; /*0x7796a3*/
  String::AssignFromPtr((char **)this + 3, aP1); /*0x7796a9*/
  this->M16 = aP2; /*0x7796ba*/
  this->q018 = aP4; /*0x7796c1*/
  this->M20 = aP3; /*0x7796c8*/
  this->M28 = a6; /*0x7796cf*/
  this->M24 = aP7; /*0x7796d6*/
  this->q020 = aP6; /*0x7796dd*/
  this->q028 = aP8; /*0x7796e4*/
  this->M48 = aP10; /*0x7796eb*/
  this->M44 = aP9; /*0x7796f2*/
  this->q034 = aP11; /*0x7796f9*/
  this->M56 = aP12; /*0x779700*/
  WideString::AssignFromPtr((wchar_t **)this + 15, aP14); /*0x779703*/
  WideString::AssignFromPtr((wchar_t **)&this->M40, aP13); /*0x779710*/
  *(_DWORD *)this = &(void*)(void*)&PlayerProfile_vftable; /*0x779715*/
  return this; /*0x77971d*/
}
} // namespace gamemd
