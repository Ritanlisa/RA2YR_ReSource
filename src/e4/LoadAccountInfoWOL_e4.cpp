// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_779690_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x779690
namespace gamemd {
void * E4Recv_779690::LoadAccountInfoWOL_Load(void* aP1,  ObjectClass * aP2,  void* aP3,  void* aP4,  int a6,  ObjectClass * aP6,  void* aP7,  void* aP8,  void* aP9,  void* aP10,  void* aP11,  void* aP12,  void* aP13,  void* aP14)
{
  this->M4 = 0; /*0x779695*/
  this->M8 = 0; /*0x779698*/
  String::AssignFromPtr((char *)((char *)&this->vfptr + 3), aP1); /*0x7796a9*/
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
  WideString::AssignFromPtr((wchar_t *)&this->u32_3C, aP14); /*0x779703*/
  WideString::AssignFromPtr((wchar_t **)&this->M40, aP13); /*0x779710*/
  return this; /*0x77971d*/
}
} // namespace gamemd
