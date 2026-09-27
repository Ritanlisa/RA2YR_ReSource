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

  aP5 = (gamemd::ObjectClass *)((unsigned char)(aP5));
  arg8 = (unsigned char)(arg8);
  this->q008 = (unsigned char)(arg0);
  this->u32_C = (unsigned char)(arg8);
  this->q004 = (unsigned char)(0);
  this->q010 = (unsigned char)(aP5);
  String::AssignFromPtr((char **)&this->u32_14, (const char **)&a4); /*0x76784d*/
  String::AssignFromPtr((char **)&this->q018, (const char **)&a2); /*0x76785a*/
  DeleteAndZero(&a2); /*0x767869*/
  DeleteAndZero(&a4); /*0x767872*/
  return this; /*0x767879*/
}
} // namespace gamemd