// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x476EB0
namespace gamemd {
int INIEntry::GetTechnoType(CCINIClass * aP1, unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall INIEntry::GetTechnoType(unsigned __int8 ***this, CCINIClass *aP1, unsigned __int8 *a2)
{
  int ExitCellByName; // eax
  int Index; // eax
  int v6; // eax
  int IndexByName; // eax
  INIClass Destination[2]; // [esp+4h] [ebp-80h] BYREF

  INIClass::GetString(this, (INIClass *)aP1, a2, (INIClass *)&stru_817460.sectionHead[1], Destination, 128); /*0x476ed5*/
  ExitCellByName = Factory::FindExitCellByName(Destination); /*0x476ede*/
  if ( ExitCellByName != -1 ) /*0x476ee6*/
    return *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[336] + 4 * ExitCellByName); /*0x476eef*/
  Index = BuildingTypeClass::FindIndex(Destination); /*0x476eff*/
  if ( Index != -1 ) /*0x476f07*/
    return *(_DWORD *)&g_UnitTypeCount2->__pad_0[4 * Index]; /*0x476f10*/
  v6 = TypeClass::FindByName(Destination); /*0x476f20*/
  if ( v6 != -1 ) /*0x476f28*/
    return *(_DWORD *)&MEMORY[0xA8B21C]->__pad_0[4 * v6]; /*0x476f31*/
  IndexByName = BuildingTypeClass::FindIndexByName(Destination); /*0x476f41*/
  if ( IndexByName == -1 ) /*0x476f49*/
    return 0; /*0x476f5e*/
  else
    return *((_DWORD *)g_TriggerTypeCount + IndexByName); /*0x476f52*/
}
}
} // namespace gamemd
