#include "armortype.hpp"

int  ArmorType::FindIndex(unsigned __int8 ***this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
    char Destination[128]; // [esp+0h] [ebp-80h] BYREF
    INIClass::GetString(this, a2, a3, (char *)(&off_7E5210)[a4], Destination, 128);
    return ArmorType::LookupByName(Destination);
}

