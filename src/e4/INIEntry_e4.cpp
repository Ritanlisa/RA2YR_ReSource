// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Factory_e4.hpp"

// 0x476EB0
namespace gamemd {
int INIEntry::GetTechnoType(CCINIClass * aP1, unsigned char * a2)
{
{
    int ExitCellByName;
    int Index;
    int v6;
    int IndexByName;
    INIClass Destination[2];
    INIClass::GetString(this, (INIClass *)aP1, a2, (INIClass *)&DataGlobal_817460.sectionHead[1], Destination, 128);
    ExitCellByName = Factory::FindExitCellByName(Destination);
    if ( ExitCellByName != -1 )
    return *(int *)(*(int *)&g_NetworkPlayerBuffer[3344] + 4 * ExitCellByName);
    Index = BuildingTypeClass::FindIndex(Destination);
    if ( Index != -1 )
    return *(int *)&g_UnitTypeCount2->__pad_0[4 * Index];
    v6 = TypeClass::FindByName(Destination);
    if ( v6 != -1 )
    return *(int *)&g_AircraftTypeCount->__pad_0[4 * v6];
    IndexByName = BuildingTypeClass::FindIndexByName(Destination);
    if ( IndexByName == -1 )
    return 0;
    else
    return *((int *)(g_TriggerTypeCount) + IndexByName);
}
}
} // namespace gamemd
