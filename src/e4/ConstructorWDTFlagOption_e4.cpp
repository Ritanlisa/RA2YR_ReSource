// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/GameOption_WorldDominationTour_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x767820
namespace gamemd {
void * GameOption_WorldDominationTour::ConstructorWDTFlagOption_Create(int arg0, void * a2, int arg8, void * a4, ObjectClass * aP5)
{

  aP5 = aP5; /*0x767824*/
  arg8 = arg8; /*0x76782b*/
  this->q008 = arg0; /*0x76782f*/
  this->u32_C = arg8; /*0x767836*/
  this->q004 = 0; /*0x76783d*/
  *(void **)this = (void*)&WorldDominationTour_GameOption_vftable; /*0x767844*/
  this->q010 = aP5; /*0x76784a*/
  String::AssignFromPtr((char **)&this->u32_14, (const char **)&a4); /*0x76784d*/
  String::AssignFromPtr((char **)&this->q018, (const char **)&a2); /*0x76785a*/
  *(void **)this = (void*)&WorldDominationTour_FlagGameOption_vftable; /*0x767863*/
  DeleteAndZero(&a2); /*0x767869*/
  DeleteAndZero(&a4); /*0x767872*/
  return this; /*0x767879*/
}
} // namespace gamemd