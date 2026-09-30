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

// 0x718000
TeleportLocomotionClass::TeleportLocomotionClass()
{

  wchar_t *v2; // ecx

  LocomotionClass::Init((unsigned int *)this); /*0x718003*/
  *((unsigned int *)this + 7) = g_abs_B0EBF8; /*0x718011*/
  *((unsigned int *)this + 8) = g_abs_B0EBFC; /*0x71801a*/
  *((unsigned int *)this + 9) = g_abs_B0EC00; /*0x718026*/
  *((unsigned int *)this + 10) = g_abs_B0EBF8; /*0x71802e*/
  *((unsigned int *)this + 11) = g_abs_B0EBFC; /*0x718036*/
  *((unsigned int *)this + 12) = g_abs_B0EC00; /*0x71803e*/
  *((unsigned char *)this + 52) = 0; /*0x718043*/
  *((unsigned char *)this + 53) = 0; /*0x718046*/
  *((unsigned char *)this + 54) = 0; /*0x718049*/
  *((unsigned int *)this + 14) = 0; /*0x71804c*/
  v2 = g_abs_A8ED84; /*0x71804f*/
  *((unsigned int *)this + 17) = 0; /*0x718055*/
  *((unsigned int *)this + 15) = v2; /*0x718058*/
  *((unsigned int *)this + 18) = 0; /*0x71805b*/
  *(unsigned int *)this = &vt_TeleportLocomotionClass; /*0x71805e*/
  *((unsigned int *)this + 1) = &vt_TeleportLocomotionClass; /*0x718064*/
  *((unsigned int *)this + 6) = &vt_TeleportLocomotionClass; /*0x71806b*/
  return this; /*0x718074*/

}