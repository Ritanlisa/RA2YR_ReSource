// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/INIEntry_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/TypeClass_e4.hpp"

// 0x476EB0
namespace gamemd {  // G42.18 ns repair
int INIEntry::GetTechnoType(uint8_t *aP1, uint8_t *a2)
{
  TypeClass Destination[32]; // [esp+4h] [ebp-80h] BYREF

  INIClass::GetString(aP1, a2, g_Str__none_, (char *)Destination, 128); /*0x476ed5*/
  int ExitCellByName; // eax
  ExitCellByName = ((Factory *)Destination)->FindExitCellByName(); /*0x476ede*/
  if ( ExitCellByName != -1 ) /*0x476ee6*/
    return *((unsigned int *)dword_A8E34C + ExitCellByName); /*0x476eef*/
  int Index; // eax
  Index = ((BuildingTypeClass *)Destination)->FindIndex(); /*0x476eff*/
  if ( Index != -1 ) /*0x476f07*/
    return *((unsigned int *)dword_A83CE4 + Index); /*0x476f10*/
  int v6; // eax
  v6 = (int)((Destination)->FindByName()); /*0x476f20*/
  if ( v6 != -1 ) /*0x476f28*/
    return *((unsigned int *)dword_A8B21C + v6); /*0x476f31*/
  int IndexByName; // eax
  IndexByName = ((BuildingTypeClass *)Destination)->FindIndexByName(); /*0x476f41*/
  if ( IndexByName == -1 ) /*0x476f49*/
    return 0; /*0x476f5e*/
  else
    return *((unsigned int *)dword_A83C6C + IndexByName); /*0x476f52*/
}  // G42.18 ns repair
} // namespace gamemd
