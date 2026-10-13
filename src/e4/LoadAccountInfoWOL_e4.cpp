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
namespace gamemd {  // G42.18 ns repair
void * E4Recv_779690::LoadAccountInfoWOL_Load(void* aP1, ObjectClass * aP2, void* aP3, void* aP4, int a6, ObjectClass * aP6, void* aP7, void* aP8, void* aP9, void* aP10, void* aP11, void* aP12, void* aP13, void* aP14)
{
  this->M4 = 0; /*0x779695*/
  this->M8 = 0; /*0x779698*/
  *this = (gamemd::ReferenceCounted)((ReferenceCounted)&vt_ReferenceCounted); /*0x7796a3*/
  String::AssignFromPtr(&this->u32_C, aP1); /*0x7796a9*/
  this->M16 = aP2; /*0x7796ba*/
  this->u32_18 = aP4; /*0x7796c1*/
  this->M20 = aP3; /*0x7796c8*/
  this->M28 = a6; /*0x7796cf*/
  this->M24 = aP7; /*0x7796d6*/
  this->M8 = aP6; /*0x7796dd*/
  this->u32_28 = aP8; /*0x7796e4*/
  this->M48 = aP10; /*0x7796eb*/
  this->M44 = aP9; /*0x7796f2*/
  this->u32_34 = aP11; /*0x7796f9*/
  this->M56 = aP12; /*0x779700*/
  WideString::AssignFromPtr(&this->u32_3C, aP14); /*0x779703*/
  WideString::AssignFromPtrthis->M40, aP13); /*0x779710*/
  *this = (gamemd::ReferenceCounted)((ReferenceCounted)&vt_PlayerProfile); /*0x779715*/
  return this; /*0x77971d*/
}  // G42.18 ns repair
} // namespace gamemd
