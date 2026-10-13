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
namespace gamemd {  // G42.18 ns repair
void * GameOption_WorldDominationTour::ConstructorWDTFlagOption_Create(int arg0, void * a2, int arg8, void * a4, ObjectClass * aP5)
{

  aP5 = aP5; /*0x767824*/
  arg8 = arg8; /*0x76782b*/
  this->u32_8 = arg0; /*0x76782f*/
  this->u32_C = arg8; /*0x767836*/
  this->u32_4 = 0; /*0x76783d*/
  *(unsigned int *)this = &vt_WorldDominationTourGameOption; /*0x767844*/
  this->u32_10 = aP5; /*0x76784a*/
  String::AssignFromPtr((char *)this->u32_4 + 1), (const char **)&a4); /*0x76784d*/
  String::AssignFromPtr((char *)this->u32_4 + 2), (const char **)&a2); /*0x76785a*/
  *(unsigned int *)this = &vt_WorldDominationTourFlagGameOption; /*0x767863*/
  DeleteAndZero(&a2); /*0x767869*/
  DeleteAndZero(&a4); /*0x767872*/
  return this; /*0x767879*/
}  // G42.18 ns repair
} // namespace gamemd