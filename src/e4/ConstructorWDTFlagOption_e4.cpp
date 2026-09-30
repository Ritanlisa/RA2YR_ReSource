// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/GameOption_WorldDominationTour_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/GameOption_e4.hpp"

// 0x767820
namespace gamemd {
void * GameOption_WorldDominationTour::ConstructorWDTFlagOption_Create(int arg0, void * a2, int arg8, void * a4, ObjectClass * aP5)
{

  ObjectClass *v6; // edx
  ObjectClass *v8; // ecx

  v6 = (gamemd::ObjectClass *)((unsigned int)(aP5));
  v8 = (unsigned int)((ObjectClass *)arg8);
  *((unsigned int *)this + 2) = arg0; /*0x76782f*/
  *((unsigned int *)this + 3) = v8; /*0x767836*/
  this->GameOption_WorldDominationTour_field_0x04 = 0; /*0x76783d*/
  *(unsigned int *)this->__pad_0 = &WorldDominationTour::vt_GameOption; /*0x767844*/
  *((unsigned int *)this + 4) = v6; /*0x76784a*/
  String::AssignFromPtr((char **)this + 5, (const char **)&a4); /*0x76784d*/
  String::AssignFromPtr((char **)this + 6, (const char **)&a2); /*0x76785a*/
  *(unsigned int *)this->__pad_0 = &WorldDominationTour::vt_FlagGameOption; /*0x767863*/
  DeleteAndZero(&a2); /*0x767869*/
  DeleteAndZero(&a4); /*0x767872*/
  return this; /*0x767879*/

}
} // namespace gamemd