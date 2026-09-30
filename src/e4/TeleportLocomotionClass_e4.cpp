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
  int v2; // ecx

  LocomotionClass::Init(); /*0x718003*/
    *((unsigned int *)this + 112) = MEMORY[0xB0EBF8];
    *((unsigned int *)this + 128) = MEMORY[0xB0EBFC];
    *((unsigned int *)this + 144) = MEMORY[0xB0EC00];
    *((unsigned int *)this + 160) = MEMORY[0xB0EBF8];
    *((unsigned int *)this + 176) = MEMORY[0xB0EBFC];
    *((unsigned int *)this + 192) = MEMORY[0xB0EC00];
    *((unsigned char *)this + 208) = 0;
    *((unsigned char *)this + 212) = 0;
    *((unsigned char *)this + 216) = 0;
    *((unsigned int *)this + 224) = 0;
  v2 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x71804f*/
    *((unsigned int *)this + 272) = 0;
    *((unsigned int *)this + 240) = v2;
    *((unsigned int *)this + 288) = 0;
    *(unsigned int *)this = &TeleportLocomotionClass::`vftable';
    *((unsigned int *)this + 16) = &TeleportLocomotionClass::`vftable';
    *((unsigned int *)this + 96) = &vt_TeleportLocomotionClass;
    return this;
}