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
namespace gamemd {
char AI_CreateMCV(MultiplayerGameMode *self)
{
  HouseClass *v3; // edi
  int v4; // esi
  int *v5; // eax
  int *v6; // eax
  int *v7; // esi
  unsigned int * v8;
  unsigned int *StartCoords; // eax
  int16_t *CurrentOption; // eax
  unsigned int v11[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !((unsigned char *)&stru_A8B250)[8] ) /*0x5d703c*/
    return 1; /*0x5d7045*/
  v3 = (HouseClass *)self; /*0x5d704d*/
  v4 = BuildingClass::FindBySWType(((BuildingClass *)self), *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2848); /*0x5d705e*/
  if ( v4 ) /*0x5d7062*/
  {
    v5 = (int *)RA2_OPNEW(0x8E8u); /*0x5d7069*/
    if ( v5 ) /*0x5d7073*/
    {
      v6 = (int *)((unsigned int *)((int *)((UnitClass *)(v5))->Construct(v4, v3)));
      v7 = v6; /*0x5d707e*/
      if ( v6 ) /*0x5d7082*/
      {
        v8 = (unsigned int *)((int)((*v6)));
        StartCoords = (unsigned int *)(HouseClass::GetStartCoords(((HouseClass *)v3), v11));
        if ( (*(uint8_t (**)(int *, unsigned int *, unsigned int))(v8 + 216))( (int *)(v7), (unsigned int *)(StartCoords), 0) ) /*0x5d7098*/
          return 1; /*0x5d70aa*/
        CurrentOption = (int16_t *)HouseClass::GetCurrentOption(((HouseClass *)v3), &self); /*0x5d70b6*/
        if ( FindInfantryDeployPosition( (int *)(v7), (gamemd::RadarClass *)(CurrentOption), 1) ) /*0x5d70bf*/
          return 1; /*0x5d70cf*/
        (*(void (**)(int *, int))(*v7 + 32))( (int *)(v7), 1); /*0x5d70d8*/
      }
    }
  }
  return 0; /*0x5d703e*/
}
}