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
#include "e4/classes/AITriggerTypeClass_e4.hpp"
#include "e4/classes/AbstractClassVector_e4.hpp"

// 0x5D7030
namespace gamemd {  // G42.18 ns repair
char AI_CreateMCV(MultiplayerGameMode *self)
{

  if ( !Bases ) /*0x5d703c*/
    return 1; /*0x5d7045*/
  HouseClass *v3; // edi
  v3 = (HouseClass *)this; /*0x5d704d*/
  int v4; // esi
  v4 = BuildingClass::FindBySWType((BuildingClass *)this, *(unsigned int *)&g_RulesClass_Instance + 2848); /*0x5d705e*/
  if ( v4 ) /*0x5d7062*/
  {
  int *v5; // eax
    v5 = (int *)operator new(0x8E8u); /*0x5d7069*/
    if ( v5 ) /*0x5d7073*/
    {
  int *v6; // eax
      v6 = (int *)(v5)->Construct(v4, v3); /*0x5d7079*/
  int *v7; // esi
      v7 = v6; /*0x5d707e*/
      if ( v6 ) /*0x5d7082*/
      {
  int v8; // ebx
        v8 = *v6; /*0x5d7085*/
  unsigned int *StartCoords; // eax
  unsigned int v11[3]; // [esp+8h] [ebp-Ch] BYREF
        StartCoords = HouseClass::GetStartCoords(v3, v11); /*0x5d7090*/
        if ( (*(uint8_t (**)(int *, unsigned int *, unsigned int))(v8 + 216))(v7, StartCoords, 0) ) /*0x5d7098*/
          return 1; /*0x5d70aa*/
  int16_t *CurrentOption; // eax
        CurrentOption = (int16_t *)HouseClass::GetCurrentOption(v3, &this); /*0x5d70b6*/
        if ( FindInfantryDeployPosition(v7,(gamemd::RadarClass *)(CurrentOption), 1) ) /*0x5d70bf*/
          return 1; /*0x5d70cf*/
        v7->Seek_0(1); /*0x5d70d8*/
      }
    }
  }
  return 0; /*0x5d703e*/
}
}  // G42.18 ns repair