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

// 0x718000
TeleportLocomotionClass::TeleportLocomotionClass()
{

  int v2; // ecx

  LocomotionClass::Init((LocomotionClass *)this); /*0x718003*/
  this->MovingDestination[0] = g_BuildingLoadQueue_Array.?; /*0x718011*/
  this->MovingDestination[1] = *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)); /*0x71801a*/
  this->MovingDestination[2] = *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)); /*0x718026*/
  this->LastCoords[0] = g_BuildingLoadQueue_Array.?; /*0x71802e*/
  this->LastCoords[1] = *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)); /*0x718036*/
  this->LastCoords[2] = *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)); /*0x71803e*/
  this->Moving = 0; /*0x718043*/
  this->TeleportLocomotionClass_field_bool_35 = 0; /*0x718046*/
  this->TeleportLocomotionClass_field_bool_36 = 0; /*0x718049*/
  this->State = 0; /*0x71804c*/
  v2 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x71804f*/
  this->Timer[2] = 0; /*0x718055*/
  this->Timer[0] = v2; /*0x718058*/
  this->Piggybackee = 0; /*0x71805b*/
  *(unsigned int *)this->LocomotionClass = &vt_TeleportLocomotionClass; /*0x71805e*/
  *(unsigned int *)&this->LocomotionClass[4] = &vt_TeleportLocomotionClass; /*0x718064*/
  *(unsigned int *)this->__pad_18 = &vt_TeleportLocomotionClass; /*0x71806b*/
  return (int)this->LocomotionClass; /*0x718074*/

}