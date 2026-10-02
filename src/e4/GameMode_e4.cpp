// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GameMode_e4.hpp"
#include "e4/classes/GameOption_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/AsyncIO_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/VoxClass_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"

// 0x5D5DE0
namespace gamemd {  // G42.18 ns repair
int GameMode::IsValid(unsigned int a2)
{

  return (!*((unsigned char *)this + 63) || a2 != -2) && a2 < 4; /*0x5d5df2*/

}
}  // G42.18 ns repair
}
// 0x6B8CA0
namespace gamemd {
unsigned int GameMode::ReadFlagsFromINI(CCINIClass * aP1)
{

  char Bool_Overwrite; // al
  int v4; // edx
  int v5; // eax
  char v6; // al
  int v7; // ecx
  int v8; // eax
  char v9; // al
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int result; // eax
  unsigned int v15; // eax
  char v16; // al
  int v17; // ecx
  int v18; // eax
  char v19; // al
  int v20; // ecx
  int v21; // eax
  char v22; // al
  int v23; // ecx
  int v24; // eax
  char v25; // al
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // eax
  char v29; // al
  int v30; // ecx

  INIClass::ResetSection((INIClass *)aP1); /*0x6b8caa*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6b8cc5*/
                     aP1,
                     off_8401CC,
                     (uint8_t *)g_INI_Key_TiberiumExplosive,
                     (*(unsigned int *)this & 0x4000) != 0);
  v4 = *(unsigned int *)this; /*0x6b8cca*/
  BYTE1(v4) = BYTE1(*(unsigned int *)this) & 0xBF; /*0x6b8cd2*/
  v5 = v4 | ((Bool_Overwrite & 1) << 14); /*0x6b8cd7*/
  *(unsigned int *)this = v5; /*0x6b8cd9*/
  v6 = INIClass::ReadBool_Overwrite(aP1, off_8401CC, (uint8_t *)aMcvdeploy, BYTE1(v5) & 1); /*0x6b8cec*/
  v7 = *(unsigned int *)this; /*0x6b8cf1*/
  BYTE1(v7) = BYTE1(*(unsigned int *)this) & 0xFE; /*0x6b8cf9*/
  v8 = v7 | ((v6 & 1) << 8); /*0x6b8cfc*/
  *(unsigned int *)this = v8; /*0x6b8d00*/
  v9 = INIClass::ReadBool_Overwrite(aP1, off_8401CC, (uint8_t *)aInitialveteran, (v8 & 0x200) != 0); /*0x6b8d14*/
  v10 = *(unsigned int *)this; /*0x6b8d19*/
  BYTE1(v10) = BYTE1(*(unsigned int *)this) & 0xFD; /*0x6b8d21*/
  v11 = v10 | ((v9 & 1) << 9); /*0x6b8d24*/
  *(unsigned int *)this = v11; /*0x6b8d28*/
  v12 = *(unsigned int *)this & 0xFFFDFFFF /*0x6b8d4f*/
      | ((INIClass::ReadBool_Overwrite(aP1, off_8401CC, (uint8_t *)aIonstorms, (v11 & 0x20000) != 0) & 1) << 17);
  *(unsigned int *)this = v12; /*0x6b8d53*/
  v13 = *(unsigned int *)this & 0xFFFEFFFF /*0x6b8d7a*/
      | ((INIClass::ReadBool_Overwrite(aP1, off_8401CC, (uint8_t *)aMeteorites, BYTE2(v12) & 1) & 1) << 16);
  *(unsigned int *)this = v13; /*0x6b8d7c*/
  result = *(unsigned int *)this & 0xFFFBFFFF /*0x6b8da5*/
         | ((INIClass::ReadBool_Overwrite(aP1, off_8401CC, (uint8_t *)aVisceroids, (v13 & 0x40000) != 0) & 1) << 18);
  *(unsigned int *)this = result; /*0x6b8da7*/
  if ( !*(unsigned int *)&dword_A8B238 || *((unsigned int *)((char *)&stru_A8EB00 + 391)) ) /*0x6b8dbb*/
  {
    v15 = *(unsigned int *)this & 0xFFFFFFBF /*0x6b8de5*/
        | ((INIClass::ReadBool_Overwrite(
              aP1,
              off_8401CC,
              (uint8_t *)g_INI_Key_TiberiumGrows,
              (result & 0x40) != 0)
          & 1) << 6);
    *(unsigned int *)this = v15; /*0x6b8de9*/
    v16 = INIClass::ReadBool_Overwrite(aP1, off_8401CC, (uint8_t *)aTiberiumspread, (v15 & 0x80) != 0); /*0x6b8dfd*/
    v17 = *(unsigned int *)this; /*0x6b8e02*/
    LOBYTE(v17) = *(unsigned int *)this & 0x7F; /*0x6b8e0a*/
    v18 = v17 | ((v16 & 1) << 7); /*0x6b8e0d*/
    *(unsigned int *)this = v18; /*0x6b8e11*/
    v19 = INIClass::ReadBool_Overwrite(aP1, off_8401CC, (uint8_t *)aDestroyablebri, (v18 & 0x8000) != 0); /*0x6b8e25*/
    v20 = *(unsigned int *)this; /*0x6b8e2a*/
    BYTE1(v20) = BYTE1(*(unsigned int *)this) & 0x7F; /*0x6b8e32*/
    v21 = v20 | ((v19 & 1) << 15); /*0x6b8e35*/
    *(unsigned int *)this = v21; /*0x6b8e39*/
    v22 = INIClass::ReadBool_Overwrite(aP1, off_8401CC, (uint8_t *)aFixedalliance, (v21 & 0x400) != 0); /*0x6b8e4d*/
    v23 = *(unsigned int *)this; /*0x6b8e52*/
    BYTE1(v23) = BYTE1(*(unsigned int *)this) & 0xFB; /*0x6b8e5a*/
    v24 = v23 | ((v22 & 1) << 10); /*0x6b8e5d*/
    *(unsigned int *)this = v24; /*0x6b8e61*/
    v25 = INIClass::ReadBool_Overwrite(aP1, off_8401CC, (uint8_t *)g_INI_Key_FogOfWar, (v24 & 0x1000) != 0); /*0x6b8e75*/
    v26 = *(unsigned int *)this; /*0x6b8e7a*/
    BYTE1(v26) = BYTE1(*(unsigned int *)this) & 0xEF; /*0x6b8e82*/
    v27 = v26 | ((v25 & 1) << 12); /*0x6b8e85*/
    *(unsigned int *)this = v27; /*0x6b8e89*/
    v28 = *(unsigned int *)this & 0xFFFFFFDF /*0x6b8ead*/
        | (32 * (INIClass::ReadBool_Overwrite(aP1, off_8401CC, (uint8_t *)aInert, (v27 & 0x20) != 0) & 1));
    *(unsigned int *)this = v28; /*0x6b8eb1*/
    v29 = INIClass::ReadBool_Overwrite(aP1, off_8401CC, (uint8_t *)aHarvesterimmun, (v28 & 0x800) != 0); /*0x6b8ec5*/
    v30 = *(unsigned int *)this; /*0x6b8eca*/
    BYTE1(v30) = BYTE1(*(unsigned int *)this) & 0xF7; /*0x6b8ed2*/
    result = v30 | ((v29 & 1) << 11); /*0x6b8ed5*/
    *(unsigned int *)this = result; /*0x6b8ed7*/
  }
  return result; /*0x6b8ed9*/

}
}