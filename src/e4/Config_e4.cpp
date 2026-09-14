// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5EE1B0
void Config::SaveObserverMode()
{
{
    int v0[9];
    RawFileClass::Construct(v0, (int)g_Str_File_RA2MD_INI);
    INIClass::SetInt( (char *)&CCINIClass_INI_RA2MD, (unsigned char *)g_INI_Key_MultiPlayer, DataGlobal_831DA4, g_MenuStateFlags, 0);
    INIClass::WriteDigest(&CCINIClass_INI_RA2MD, (int)v0, 0);
    RawFileClass::Dtor(v0);
}
}
