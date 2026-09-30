// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/GameSettings_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/NetworkAddress_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/Settings_e4.hpp"
#include "core/ddraw_init.hpp"
#include "e4/classes/GameSetup_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"

// 0x5FA620
namespace gamemd {
void GameSettings::Read()
{

  int Int_Overwrite; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  char Bool_Overwrite; // al
  bool v8; // al
  char v9; // al
  double v10; // st7
  double Double_Overwrite; // st7
  int v12; // eax
  double v13; // st7
  int v14; // eax
  int v15; // eax
  double v16; // st7
  int v17; // eax
  int v18; // eax
  char v19; // al
  char v20; // al
  unsigned short *v21; // eax
  bool v22; // zf
  #72 *v23; // eax
  #72 *v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned __int16 v27; // ax
  int v28; // ecx
  #72 **v30; // [esp-4h] [ebp-1ACh]
  int v31; // [esp+4h] [ebp-1A4h]
  #72 **v32; // [esp+8h] [ebp-1A0h]
  unsigned short String[200]; // [esp+18h] [ebp-190h] BYREF

  Debug::Log(); /*0x5fa636*/
  *(unsigned int *)this = INIClass::ReadInt_Overwrite( /*0x5fa65b*/
                      (int)&MEMORY[0x87F7E8][7734],
                      (unsigned __int8 *)g_INI_Key_Options,
                      (unsigned __int8 *)g_INI_Key_GameSpeed,
                      *(unsigned int *)this);
  Debug::Log(); /*0x5fa65d*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5fa678*/
                    (int)&MEMORY[0x87F7E8][7734],
                    (unsigned __int8 *)g_INI_Key_Options,
                    (unsigned __int8 *)aDifficulty,
                    *((unsigned int *)this + 1));
  *((unsigned int *)this + 1) = Int_Overwrite; /*0x5fa680*/
  if ( Int_Overwrite >= 4 ) /*0x5fa683*/
    Int_Overwrite = 4; /*0x5fa685*/
  *((unsigned int *)this + 1) = Int_Overwrite; /*0x5fa68c*/
  *((unsigned int *)this + 1) = Int_Overwrite <= 0 ? 0 : Int_Overwrite;
  Debug::Log(); /*0x5fa6a0*/
  v3 = INIClass::ReadInt_Overwrite( /*0x5fa6bb*/
         (int)&MEMORY[0x87F7E8][7734],
         (unsigned __int8 *)g_INI_Key_Options,
         (unsigned __int8 *)aCampdifficulty,
         *((unsigned int *)this + 2));
  *((unsigned int *)this + 2) = v3; /*0x5fa6c3*/
  if ( v3 >= 2 ) /*0x5fa6c6*/
    v3 = 2; /*0x5fa6c8*/
  *((unsigned int *)this + 2) = v3; /*0x5fa6cf*/
  *((unsigned int *)this + 2) = v3 <= 0 ? 0 : v3;
  Debug::Log(); /*0x5fa6e3*/
  *((unsigned int *)this + 3) = INIClass::ReadInt_Overwrite( /*0x5fa709*/
                            (int)&MEMORY[0x87F7E8][7734],
                            (unsigned __int8 *)g_INI_Key_Options,
                            (unsigned __int8 *)aScrollmethod,
                            *((unsigned int *)this + 3));
  Debug::Log(); /*0x5fa70c*/
  *((unsigned int *)this + 4) = INIClass::ReadInt_Overwrite( /*0x5fa732*/
                            (int)&MEMORY[0x87F7E8][7734],
                            (unsigned __int8 *)g_INI_Key_Options,
                            (unsigned __int8 *)aScrollrate,
                            *((unsigned int *)this + 4));
  Debug::Log(); /*0x5fa735*/
  *((unsigned char *)this + 20) = INIClass::ReadBool_Overwrite( /*0x5fa75a*/
                            &MEMORY[0x87F7E8][7734],
                            (unsigned __int8 *)g_INI_Key_Options,
                            (unsigned __int8 *)aAutoscroll,
                            *((unsigned char *)this + 20));
  Debug::Log(); /*0x5fa771*/
  v4 = INIClass::ReadInt_Overwrite( /*0x5fa78c*/
         (int)&MEMORY[0x87F7E8][7734],
         (unsigned __int8 *)g_INI_Key_Options,
         (unsigned __int8 *)g_INI_Key_DetailLevel,
         *((unsigned int *)this + 6));
  *((unsigned int *)this + 6) = v4; /*0x5fa794*/
  if ( v4 >= 2 ) /*0x5fa797*/
    v4 = 2; /*0x5fa799*/
  *((unsigned int *)this + 6) = v4; /*0x5fa7a0*/
  *((unsigned int *)this + 6) = v4 <= 0 ? 0 : v4;
  Debug::Log(); /*0x5fa7b4*/
  *((unsigned char *)this + 28) = 1; /*0x5fa7c3*/
  Debug::Log(); /*0x5fa7c6*/
  *((unsigned char *)this + 29) = INIClass::ReadBool_Overwrite( /*0x5fa7e6*/
                            &MEMORY[0x87F7E8][7734],
                            (unsigned __int8 *)g_INI_Key_Options,
                            (unsigned __int8 *)aSidebarcameote,
                            *((unsigned char *)this + 29));
  Debug::Log(); /*0x5fa7fd*/
  *((unsigned char *)this + 30) = INIClass::ReadBool_Overwrite( /*0x5fa81d*/
                            &MEMORY[0x87F7E8][7734],
                            (unsigned __int8 *)g_INI_Key_Options,
                            (unsigned __int8 *)aUnitactionline,
                            *((unsigned char *)this + 30));
  Debug::Log(); /*0x5fa834*/
  *((unsigned char *)this + 31) = INIClass::ReadBool_Overwrite( /*0x5fa854*/
                            &MEMORY[0x87F7E8][7734],
                            (unsigned __int8 *)g_INI_Key_Options,
                            (unsigned __int8 *)aShowhidden,
                            *((unsigned char *)this + 31));
  Debug::Log(); /*0x5fa86b*/
  *((unsigned char *)this + 32) = INIClass::ReadBool_Overwrite( /*0x5fa88b*/
                            &MEMORY[0x87F7E8][7734],
                            (unsigned __int8 *)g_INI_Key_Options,
                            (unsigned __int8 *)aTooltips,
                            *((unsigned char *)this + 32));
  Debug::Log(); /*0x5fa8a2*/
  v5 = INIClass::ReadInt_Overwrite( /*0x5fa8bd*/
         (int)&MEMORY[0x87F7E8][7734],
         (unsigned __int8 *)g_INI_Key_Video,
         (unsigned __int8 *)g_INI_Key_ScreenWidth,
         *((unsigned int *)this + 9));
  v6 = *((unsigned int *)this + 10); /*0x5fa8c2*/
  *((unsigned int *)this + 9) = v5; /*0x5fa8c5*/
  *((unsigned int *)this + 10) = INIClass::ReadInt_Overwrite( /*0x5fa8e7*/
                             (int)&MEMORY[0x87F7E8][7734],
                             (unsigned __int8 *)g_INI_Key_Video,
                             (unsigned __int8 *)g_INI_Key_ScreenHeight,
                             v6);
  Debug::Log(); /*0x5fa8ea*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5fa905*/
                     &MEMORY[0x87F7E8][7734],
                     (unsigned __int8 *)g_INI_Key_Video,
                     (unsigned __int8 *)aStretchmovies,
                     *((unsigned char *)this + 52));
  *((unsigned char *)this + 52) = Bool_Overwrite; /*0x5fa90c*/
  v8 = Bool_Overwrite == 1 && BYTE2(MEMORY[0x87F7E8][34177]) == 1; /*0x5fa919*/
  *((unsigned char *)this + 52) = v8; /*0x5fa91f*/
  Debug::Log(); /*0x5fa936*/
  *((unsigned char *)this + 53) = INIClass::ReadBool_Overwrite( /*0x5fa956*/
                            &MEMORY[0x87F7E8][7734],
                            (unsigned __int8 *)g_INI_Key_Video,
                            (unsigned __int8 *)aAllowhiresmode,
                            *((unsigned char *)this + 53));
  Debug::Log(); /*0x5fa96d*/
  HIBYTE(dword_A8ED54[3]) = INIClass::ReadBool_Overwrite( /*0x5fa990*/
                              &MEMORY[0x87F7E8][7734],
                              (unsigned __int8 *)g_INI_Key_Video,
                              (unsigned __int8 *)aAllowmodetoggl,
                              SHIBYTE(dword_A8ED54[3]));
  v9 = INIClass::ReadBool_Overwrite( /*0x5fa9a8*/
         &MEMORY[0x87F7E8][7734],
         (unsigned __int8 *)g_INI_Key_Video,
         (unsigned __int8 *)aAllowvramsideb,
         *((unsigned char *)this + 54));
  v10 = *((float *)this + 14); /*0x5fa9ad*/
  *((unsigned char *)this + 54) = v9; /*0x5fa9b8*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x5fa9c8*/
                       (int)&MEMORY[0x87F7E8][7734],
                       (unsigned __int8 *)g_INI_Key_Audio,
                       (unsigned __int8 *)aSoundvolume,
                       v10);
  if ( Double_Overwrite >= 1.0 ) /*0x5fa9d8*/
    Double_Overwrite = 1.0; /*0x5fa9dc*/
  *((float *)this + 14) = Double_Overwrite; /*0x5fa9e2*/
  v12 = Math::RoundToInt(Double_Overwrite * 16384.0); /*0x5fa9eb*/
  EndBufferMixer(MEMORY[0x87E748], v12); /*0x5fa9f8*/
  Debug::Log(); /*0x5faa0b*/
  v13 = INIClass::ReadDouble_Overwrite( /*0x5faa28*/
          (int)&MEMORY[0x87F7E8][7734],
          (unsigned __int8 *)g_INI_Key_Audio,
          (unsigned __int8 *)aVoicevolume,
          *((float *)this + 15));
  if ( v13 >= 1.0 ) /*0x5faa38*/
    v13 = 1.0; /*0x5faa3c*/
  *((float *)this + 15) = v13; /*0x5faa42*/
  v14 = Math::RoundToInt(v13 * 255.0); /*0x5faa4b*/
  ThemeClass::GetField(v14); /*0x5faa52*/
  v15 = Math::RoundToInt(*((float *)this + 15) * 16384.0); /*0x5faa60*/
  EndBufferMixer(MEMORY[0x87E740], v15); /*0x5faa6d*/
  Debug::Log(); /*0x5faa80*/
  v16 = INIClass::ReadDouble_Overwrite( /*0x5faa9d*/
          (int)&MEMORY[0x87F7E8][7734],
          (unsigned __int8 *)g_INI_Key_Audio,
          (unsigned __int8 *)aScorevolume,
          *((float *)this + 16));
  if ( v16 >= 1.0 ) /*0x5faaad*/
    v16 = 1.0; /*0x5faab1*/
  *((float *)this + 16) = v16; /*0x5faab7*/
  v17 = Math::RoundToInt(v16 * 16384.0); /*0x5faac0*/
  EndBufferMixer(MEMORY[0x87E744], v17); /*0x5faacd*/
  v18 = Math::RoundToInt(*((float *)this + 16) * 255.0); /*0x5faadb*/
  TechnoTypeClass::CheckFlag(&MEMORY[0x87F7E8][528714], v18); /*0x5faae6*/
  Debug::Log(); /*0x5faaf9*/
  v19 = INIClass::ReadBool_Overwrite( /*0x5fab14*/
          &MEMORY[0x87F7E8][7734],
          (unsigned __int8 *)g_INI_Key_Audio,
          (unsigned __int8 *)aIsscorerepeat,
          *((unsigned char *)this + 68));
  *((unsigned char *)this + 68) = v19; /*0x5fab19*/
  LOBYTE(MEMORY[0x87F7E8][528718]) = v19; /*0x5fab1c*/
  Debug::Log(); /*0x5fab38*/
  v20 = INIClass::ReadBool_Overwrite( /*0x5fab53*/
          &MEMORY[0x87F7E8][7734],
          (unsigned __int8 *)g_INI_Key_Audio,
          (unsigned __int8 *)aIsscoreshuffle,
          *((unsigned char *)this + 70));
  *((unsigned char *)this + 70) = v20; /*0x5fab58*/
  BYTE2(MEMORY[0x87F7E8][528718]) = v20; /*0x5fab5b*/
  Debug::Log(); /*0x5fab77*/
  *((unsigned char *)this + 69) = INIClass::ReadBool_Overwrite( /*0x5fabb8*/
                            &MEMORY[0x87F7E8][7734],
                            (unsigned __int8 *)g_INI_Key_Audio,
                            (unsigned __int8 *)aIngamemusic,
                            *((unsigned char *)this + 69));
  *((unsigned int *)this + 19) = -1; /*0x5fabbb*/
  *((unsigned int *)this + 20) = -1; /*0x5fabbe*/
  INIClass::ParseValue_Wide( /*0x5fabc1*/
    &MEMORY[0x87F7E8][7734],
    (unsigned __int8 *)g_INI_Key_Network,
    (int)aNetid,
    (#72 *)&MEMORY[0x87F7E8][8147],
    (#72 *)String,
    200);
  if ( String[0] ) /*0x5fabcc*/
  {
    v21 = String; /*0x5fabce*/
    do /*0x5fabe8*/
    {
      v22 = *v21 == 0xFFFF; /*0x5fabd8*/
      *v21 = ~*v21; /*0x5fabdb*/
      if ( v22 ) /*0x5fabde*/
        *v21 = -1; /*0x5fabe0*/
      ++v21; /*0x5fabe5*/
    }
    while ( *v21 ); /*0x5fabe8*/
    v23 = wcstok((#72 *)String, (const #72 *)asc_82083C, v32); /*0x5fabf8*/
    if ( v23 ) /*0x5fac02*/
    {
      *((unsigned int *)this + 19) = wcstol(v23, 0, 10) - 1; /*0x5fac16*/
      v24 = wcstok(0, (const #72 *)asc_82083C, v30); /*0x5fac19*/
      if ( v24 ) /*0x5fac23*/
        *((unsigned int *)this + 20) = wcstol(v24, 0, 10) - 1; /*0x5fac33*/
    }
  }
  v25 = *((unsigned int *)this + 19); /*0x5fac36*/
  if ( v25 < -1 || v25 >= 8 ) /*0x5fac40*/
    *((unsigned int *)this + 19) = -1; /*0x5fac42*/
  v26 = *((unsigned int *)this + 20); /*0x5fac45*/
  if ( v26 < -1 || v26 >= 8 ) /*0x5fac4f*/
    *((unsigned int *)this + 20) = -1; /*0x5fac51*/
  *((unsigned short *)this + 36) = INIClass::ReadInt_Overwrite( /*0x5fac6f*/
                   (int)&MEMORY[0x87F7E8][7734],
                   (unsigned __int8 *)g_INI_Key_Audio,
                   (unsigned __int8 *)aSoundlatency,
                   *((unsigned short *)this + 36));
  Debug::Log(); /*0x5fac7e*/
  v27 = INIClass::ReadInt_Overwrite( /*0x5fac9c*/
          (int)&MEMORY[0x87F7E8][7734],
          (unsigned __int8 *)g_INI_Key_Network,
          (unsigned __int8 *)g_INI_Key_Socket,
          *((unsigned short *)this + 37));
  v31 = *((unsigned int *)this + 21); /*0x5faca9*/
  *((unsigned short *)this + 37) = v27; /*0x5facb4*/
  *((unsigned int *)this + 21) = INIClass::ReadInt_Overwrite( /*0x5facbd*/
                             (int)&MEMORY[0x87F7E8][7734],
                             (unsigned __int8 *)g_INI_Key_Network,
                             (unsigned __int8 *)aNetcard,
                             v31);
  INIClass::GetString( /*0x5facda*/
    (unsigned __int8 ***)&MEMORY[0x87F7E8][7734],
    (unsigned __int8 **)g_INI_Key_Network,
    (unsigned __int8 *)g_INI_Key_DestNet,
    (char *)&MEMORY[0x87F7E8][10719],
    (char *)this + 88,
    64);
  Debug::Log(); /*0x5face4*/
  LOBYTE(v28) = *((unsigned char *)this + 29); /*0x5face9*/
  nullsub_36(v28); /*0x5facf5*/
  SetGlobalFlag(*((unsigned char *)this + 30)); /*0x5facfd*/
  return GameSettings::ParseNetworkAddress((const char *)this); /*0x5fad09*/

}
} // namespace gamemd
// 0x5FB050
namespace gamemd {
void * GameSettings::ParseNetworkAddress()
{

  unsigned __int16 v2; // ax
  const char *v3; // esi
  char *result; // eax
  size_t v5; // kr04_4
  char *v6; // edx
  int v7; // esi
  int *v8; // eax
  char v9; // [esp+8h] [ebp-1Ch] BYREF
  int v10; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+10h] [ebp-14h] BYREF
  __int16 v12; // [esp+14h] [ebp-10h]
  unsigned int v13[3]; // [esp+18h] [ebp-Ch] BYREF

  v2 = *((unsigned short *)this + 37); /*0x5fb057*/
  if ( v2 == 0xFFFF ) /*0x5fb05f*/
  {
    Network::GetField(MEMORY[0xA8E9C0], 34835); /*0x5fb066*/
  }
  else if ( v2 < 0x4000u ) /*0x5fb06c*/
  {
    Network::GetField(MEMORY[0xA8E9C0], v2 + 0x4000); /*0x5fb079*/
  }
  v3 = (unsigned char *)this + 88; /*0x5fb07e*/
  result = 0; /*0x5fb086*/
  v5 = strlen(v3) + 1; /*0x5fb088*/
  if ( v5 != 1 ) /*0x5fb08d*/
  {
    v6 = (char *)__2_YAPAXI_Z(v5); /*0x5fb09a*/
    strcpy(v6, v3); /*0x5fb0b8*/
    v7 = 0; /*0x5fb0c1*/
    result = strtok(v6, stru_826598); /*0x5fb0c3*/
    if ( result ) /*0x5fb0cd*/
    {
      do /*0x5fb10f*/
      {
        sscanf(result, MEMORY[0x825BD4], &v9); /*0x5fb0de*/
        *((unsigned char *)&v10 + v7++) = v9; /*0x5fb0ef*/
        result = strtok(0, stru_826598); /*0x5fb105*/
      }
      while ( result ); /*0x5fb10f*/
      if ( v7 >= 4 ) /*0x5fb114*/
      {
        v11 = -1; /*0x5fb11a*/
        v12 = -1; /*0x5fb126*/
        MEMORY[0xA8D5FC] = 1; /*0x5fb131*/
        v8 = NetworkAddress::Assign(v13, &v10, (int)&v11, 0); /*0x5fb13b*/
        MEMORY[0xA8D600] = *v8; /*0x5fb142*/
        MEMORY[0xA8D604] = v8[1]; /*0x5fb14b*/
        result = (char *)v8[2]; /*0x5fb151*/
        MEMORY[0xA8D608] = (int)result; /*0x5fb154*/
      }
    }
  }
  return result; /*0x5fb159*/

}
} // namespace gamemd
// 0x721290
namespace gamemd {
void GameSettings::SetScoreVolume(int volume)
{

  MouseClass *result; // eax

  result = (MouseClass *)volume; /*0x721290*/
  if ( volume >= 255 ) /*0x721299*/
    result = (MouseClass *)255; /*0x72129b*/
  *((unsigned int *)this + 3) = result; /*0x7212a0*/

}
} // namespace gamemd
// 0x7931A0
namespace gamemd {
char * GameSettings::FindFlagged()
{

  int v0; // eax
  char *i; // edx

  v0 = 0; /*0x7931a7*/
  if ( (int)g_WOL_State <= 0 ) /*0x7931ad*/
    return 0; /*0x7931dc*/
  for ( i = (char *)g_WOL_ConnectionFlags; ; i += 108 ) /*0x7931af*/
  {
    if ( v0 >= 0 && v0 < (int)g_WOL_State ) /*0x7931bb*/
      qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu); /*0x7931c9*/
    if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7931d2*/
      break; /*0x7931d2*/
    if ( ++v0 >= (int)g_WOL_State ) /*0x7931da*/
      return 0; /*0x7931da*/
  }
  return &g_IsMultiplayerSession; /*0x7931dc*/

}
} // namespace gamemd