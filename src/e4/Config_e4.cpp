// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5EE1B0
void Config::SaveObserverMode()
{
  int v0[9]; // [esp+0h] [ebp-24h] BYREF

  RawFileClass::Construct(v0, (int)g_Str_File_RA2MD_INI); /*0x5ee1bc*/
  INIClass::SetInt( /*0x5ee1d8*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_MultiPlayer,
    aObservermode,
    g_MenuStateFlags,
    0);
  INIClass::WriteDigest(&CCINIClass_INI_RA2MD, (int)v0, 0); /*0x5ee1e9*/
  RawFileClass::Dtor(v0); /*0x5ee1f2*/
}