// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/TeleportLocomotionClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/TemporalClass_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
namespace gamemd {  // g57w12-r nsfix (orphan re-wrap)

// 0x718000
TeleportLocomotionClass::TeleportLocomotionClass()
{


  LocomotionClass::Init((LocomotionClass *)this); /*0x718003*/
  this->MovingDestination[0] = g_BuildingLoadQueue_Array.?; /*0x718011*/
  this->MovingDestination[1] = g_BuildingLoadQueue_Array.?[0]; /*0x71801a*/
  this->MovingDestination[2] = g_BuildingLoadQueue_Array.?[0]; /*0x718026*/
  this->LastCoords[0] = g_BuildingLoadQueue_Array.?; /*0x71802e*/
  this->LastCoords[1] = g_BuildingLoadQueue_Array.?[0]; /*0x718036*/
  this->LastCoords[2] = g_BuildingLoadQueue_Array.?[0]; /*0x71803e*/
  this->Moving = 0; /*0x718043*/
  this->TeleportLocomotionClass_field_bool_35 = 0; /*0x718046*/
  this->TeleportLocomotionClass_field_bool_36 = 0; /*0x718049*/
  this->State = 0; /*0x71804c*/
  int v2; // ecx
  v2 = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x71804f*/
  this->Timer[2] = 0; /*0x718055*/
  this->Timer[0] = v2; /*0x718058*/
  this->Piggybackee = 0; /*0x71805b*/
  *(unsigned int *)this->LocomotionClass = (unsigned int)(&vt_TeleportLocomotionClass); /*0x71805e*/
  /* X11: vtable install elided (implicit via TeleportLocomotionClass virtuals 0x718064) */
  /* X11: vtable install elided (implicit via TeleportLocomotionClass virtuals 0x71806b) */
  return (int)this->LocomotionClass; /*0x718074*/

}