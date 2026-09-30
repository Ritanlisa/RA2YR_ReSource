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

  *((unsigned int *)this + 1) = 0; /*0x779695*/
  *((unsigned char *)this + 8) = 0; /*0x779698*/
  *(unsigned int *)this = (ReferenceCounted)&ReferenceCounted::`vftable'; /*0x7796a3*/
  String::AssignFromPtr((String *)((unsigned int *)this + 3), aP1); /*0x7796a9*/
  *((unsigned int *)this + 4) = aP2; /*0x7796ba*/
  *((unsigned int *)this + 6) = aP4; /*0x7796c1*/
  *((unsigned char *)this + 20) = aP3; /*0x7796c8*/
  *((unsigned int *)this + 7) = a6; /*0x7796cf*/
  *((unsigned int *)this + 9) = aP7; /*0x7796d6*/
  *((unsigned int *)this + 8) = aP6; /*0x7796dd*/
  *((unsigned int *)this + 10) = aP8; /*0x7796e4*/
  *((unsigned int *)this + 12) = aP10; /*0x7796eb*/
  *((unsigned int *)this + 11) = aP9; /*0x7796f2*/
  *((unsigned int *)this + 13) = aP11; /*0x7796f9*/
  *((unsigned char *)this + 56) = aP12; /*0x779700*/
  WideString::AssignFromPtr((wchar_t **)this + 15, aP14); /*0x779703*/
  WideString::AssignFromPtr((wchar_t **)this + 16, aP13); /*0x779710*/
  *(unsigned int *)this = (ReferenceCounted)&PlayerProfile::`vftable'; /*0x779715*/
  return this; /*0x77971d*/

}
} // namespace gamemd
