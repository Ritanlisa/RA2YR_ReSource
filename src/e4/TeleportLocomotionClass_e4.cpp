// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/TeleportLocomotionClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"

// 0x718000
TeleportLocomotionClass::TeleportLocomotionClass()
{

  LocomotionClass::Init(); /*0x718003*/
  this->MovingDestination = dword_B0EBF8; /*0x718011*/
  this->q020 = dword_B0EBFC; /*0x71801a*/
  this->u32_24 = dword_B0EC00; /*0x718026*/
  this->LastCoords = dword_B0EBF8; /*0x71802e*/
  this->u32_2C = dword_B0EBFC; /*0x718036*/
  this->ptr_30 = dword_B0EC00; /*0x71803e*/
  this->Moving = 0; /*0x718043*/
  this->TeleportLocomotionClass_field_bool_35 = 0; /*0x718046*/
  this->TeleportLocomotionClass_field_bool_36 = 0; /*0x718049*/
  this->State = 0; /*0x71804c*/
  g_CurrentFrame = g_CurrentFrame; /*0x71804f*/
  this->q044 = 0; /*0x718055*/
  this->Timer = g_CurrentFrame; /*0x718058*/
  this->Piggybackee = 0; /*0x71805b*/
  return this; /*0x718074*/
}