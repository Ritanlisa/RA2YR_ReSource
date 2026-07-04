#include "inientry.hpp"

char  INIEntry::Write3Bytes(char *this, unsigned __int8 *Block, char *a3, unsigned __int8 *a4)
{
    char Buffer[64]; // [esp+4h] [ebp-40h] BYREF
    sprintf(Buffer, "%d,%d,%d", *a4, a4[1], a4[2]);
    return INIClass::SetString(this, Block, a3, Buffer);
}

int  INIEntry::GetTechnoType(unsigned __int8 ***this, unsigned __int8 *a2, unsigned __int8 *a3)
{
    int ExitCellByName; // eax
    int Index; // eax
    int v6; // eax
    int IndexByName; // eax
    char Destination[128]; // [esp+4h] [ebp-80h] BYREF
    INIClass::GetString(this, a2, a3, g_Str__none_, Destination, 128);
    ExitCellByName = Factory::FindExitCellByName(Destination);
    if ( ExitCellByName != -1 )
    return *((uint32_t *)Factory_ExitCellTable + ExitCellByName);
    Index = BuildingTypeClass::FindIndex(Destination);
    if ( Index != -1 )
    return *((uint32_t *)g_UnitTypeCount2 + Index);
    v6 = TypeClass::FindByName(Destination);
    if ( v6 != -1 )
    return *((uint32_t *)g_AircraftTypeCount + v6);
    IndexByName = BuildingTypeClass::FindIndexByName(Destination);
    if ( IndexByName == -1 )
    return 0;
    else
    return *((uint32_t *)g_TriggerTypeCount + IndexByName);
}

char  INIEntry::Write2Integers(char *this, unsigned __int8 *Block, char *a3, uint32_t *a4)
{
    char Buffer[56]; // [esp+4h] [ebp-38h] BYREF
    sprintf(Buffer, "%d,%d", *a4, a4[1]);
    return INIClass::SetString(this, Block, a3, Buffer);
}

