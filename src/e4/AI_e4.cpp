// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/RadarClass_e4.hpp"

// 0x5D7030
namespace gamemd {
void AI_CreateMCV()
{
  _DWORD *v3; // edi
  int v4; // esi
  void *v5; // eax
  int *v6; // eax
  int *v7; // esi
  int v8; // ebx
  _DWORD *StartCoords; // eax
  __int16 *CurrentOption; // eax
  _DWORD v11[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !Bases ) /*0x5d703c*/
    return 1; /*0x5d7045*/
  v3 = ppv; /*0x5d704d*/
  v4 = BuildingClass::FindBySWType(ppv, (int)g_RulesClass_Instance + 2848); /*0x5d705e*/
  if ( v4 ) /*0x5d7062*/
  {
    v5 = RA2_OPNEW(0x8E8u); /*0x5d7069*/
    if ( v5 ) /*0x5d7073*/
    {
      v6 = (int *)UnitClass::Construct((int)v5, v4, v3); /*0x5d7079*/
      v7 = v6; /*0x5d707e*/
      if ( v6 ) /*0x5d7082*/
      {
        v8 = *v6; /*0x5d7085*/
        StartCoords = HouseClass::GetStartCoords(v3, v11); /*0x5d7090*/
        if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(v8 + 216))(v7, StartCoords, 0) ) /*0x5d7098*/
          return 1; /*0x5d70aa*/
        CurrentOption = (__int16 *)HouseClass::GetCurrentOption(v3, &ppv); /*0x5d70b6*/
        if ( FindInfantryDeployPosition(v7, CurrentOption, 1) ) /*0x5d70bf*/
          return 1; /*0x5d70cf*/
        (*(void (__thiscall **)(int *, int))(*v7 + 32))(v7, 1); /*0x5d70d8*/
      }
    }
  }
  return 0; /*0x5d703e*/
}
}