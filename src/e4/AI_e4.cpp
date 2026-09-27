// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"

// 0x5D7030
namespace gamemd {
void AI_CreateMCV()
{
  unsigned int v3;
  int v4; // esi
  void *v5; // eax
  int *v6; // eax
  int *v7; // esi
  unsigned int * v8;
  unsigned int *StartCoords; // eax
  int16_t *CurrentOption; // eax
  unsigned int v11[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !Bases ) /*0x5d703c*/
    return 1; /*0x5d7045*/
  v3 = ppv; /*0x5d704d*/
  v4 = BuildingClass::FindBySWType(ppv, (int)g_RulesClass_Instance + 2848); /*0x5d705e*/
  if ( v4 ) /*0x5d7062*/
  {
    v5 = operator new(0x8E8u); /*0x5d7069*/
    if ( v5 ) /*0x5d7073*/
    {
      v6 = (int *)UnitClass::Construct((int)v5, v4, v3); /*0x5d7079*/
      v7 = v6; /*0x5d707e*/
      if ( v6 ) /*0x5d7082*/
      {
        v8 = (int)((unsigned int *)(*v6));
        StartCoords = (unsigned int *)(HouseClass::GetStartCoords(v3, v11));
        if ( (*(uint8_t (__thiscall **)(int *, unsigned int *, unsigned int))(v8 + 216))(v7, StartCoords, 0) ) /*0x5d7098*/
          return 1; /*0x5d70aa*/
        CurrentOption = (int16_t *)HouseClass::GetCurrentOption(v3, &ppv); /*0x5d70b6*/
        if ( FindInfantryDeployPosition(v7, CurrentOption, 1) ) /*0x5d70bf*/
          return 1; /*0x5d70cf*/
        (*(void (__thiscall **)(int *, int))(*v7 + 32))(v7, 1); /*0x5d70d8*/
      }
    }
  }
  return 0; /*0x5d703e*/
}
}