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
  int v2; // eax
  unsigned int v3;
  unsigned int v4;
  int v5; // eax
  int v6; // eax
  char v7; // al
  bool v8; // zf
  const char *v9; // eax
  unsigned int v10;
  char v11; // al
  const char *v12; // eax
  char v13; // al
  const char *v14; // eax
  char v15; // al
  const char *v16; // eax
  char v17; // al
  const char *v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  char v22; // al
  bool v23; // al
  const char *v24; // eax
  char v25; // al
  const char *v26; // eax
  char v27; // al
  double v28; // st7
  int v29; // eax
  double v30; // st7
  int64_t v31; // rax
  int v32; // eax
  Game * v33;
  int v34; // eax
  int v35; // eax
  char v36; // al
  const char *v37; // eax
  char v38; // al
  const char *v39; // eax
  wchar_t *v40; // eax
  wchar_t *v41; // eax
  wchar_t *v42; // eax
  int v43; // eax
  int v44; // eax
  uint16_t v45; // ax
  uint16_t v46; // ax
  int v47; // ecx
  int v48; // ecx
  wchar_t **v50; // [esp-4h] [ebp-1ACh]
  int v51; // [esp+0h] [ebp-1A8h]
  int v52; // [esp+4h] [ebp-1A4h]
  int v53; // [esp+4h] [ebp-1A4h]
  int v54; // [esp+4h] [ebp-1A4h]
  int v55; // [esp+4h] [ebp-1A4h]
  wchar_t **v56; // [esp+8h] [ebp-1A0h]
  wchar_t String[200]; // [esp+18h] [ebp-190h] BYREF

  Debug::Log(aLoadingSunIniS); /*0x5fa636*/
  v2 = INIClass::ReadInt_Overwrite(g_INI_Key_Options, g_INI_Key_GameSpeed, *(unsigned int *)this); /*0x5fa650*/
  *(unsigned int *)this = v2; /*0x5fa65b*/
  Debug::Log("GameSpeed = %d\n", v2); /*0x5fa65d*/
    Int_Overwrite = INIClass::ReadInt_Overwrite(
    *((unsigned int *)this + 1) = Int_Overwrite;
  if ( v3 >= 4 ) /*0x5fa683*/
    v3 = 4; /*0x5fa685*/
    *((unsigned int *)this + 1) = Int_Overwrite;
  v52 = v3 <= 0 ? 0 : v3;
  this->ptr_4 = (gamemd::AbstractClass *)((void *)(v52));
  Debug::Log("Difficulty = %d\n", v52); /*0x5fa6a0*/
    v3 = INIClass::ReadInt_Overwrite(
    *((unsigned int *)this + 2) = v3;
  if ( v4 >= 2 ) /*0x5fa6c6*/
    v4 = 2; /*0x5fa6c8*/
    *((unsigned int *)this + 2) = v3;
  v53 = v4 <= 0 ? 0 : v4;
  this->ptr_8 = (gamemd::AbstractClass *)((void *)(v53));
  Debug::Log("CampDifficulty = %d\n", v53); /*0x5fa6e3*/
  v5 = INIClass::ReadInt_Overwrite(g_INI_Key_Options, aScrollmethod, this->u32_C); /*0x5fa6fe*/
    *((unsigned int *)this + 3) = INIClass::ReadInt_Overwrite(
  Debug::Log("ScrollMethod = %d\n", v5); /*0x5fa70c*/
  v6 = INIClass::ReadInt_Overwrite(g_INI_Key_Options, aScrollrate, this->ptr_10); /*0x5fa727*/
    *((unsigned int *)this + 4) = INIClass::ReadInt_Overwrite(
  Debug::Log("ScrollRate = %d\n", v6); /*0x5fa735*/
  v7 = INIClass::ReadBool_Overwrite(g_INI_Key_Options, aAutoscroll, *(unsigned char *)&this->u8_14); /*0x5fa750*/
    *((unsigned char *)this + 20) = INIClass::ReadBool_Overwrite(
  v8 = v7 == 1; /*0x5fa75d*/
  v9 = (const char *)&unk_82C460; /*0x5fa75f*/
  if ( !v8 ) /*0x5fa764*/
    v9 = (const char *)&off_82C45C; /*0x5fa766*/
  Debug::Log("AutoScroll is %s\n", v9); /*0x5fa771*/
    v4 = INIClass::ReadInt_Overwrite(
    *((unsigned int *)this + 6) = v4;
  if ( v10 >= 2 ) /*0x5fa797*/
    v10 = 2; /*0x5fa799*/
    *((unsigned int *)this + 6) = v4;
  v54 = v10 <= 0 ? 0 : v10;
  this->ptr_18 = (gamemd::AbstractClass *)((void *)(v54));
  Debug::Log("DetailLevel = %d\n", v54); /*0x5fa7b4*/
    *((unsigned char *)this + 28) = 1;
  Debug::Log("SideBar on %s\n", aRight); /*0x5fa7c6*/
  v11 = INIClass::ReadBool_Overwrite(g_INI_Key_Options, aSidebarcameote, this->u8_1D); /*0x5fa7e1*/
    *((unsigned char *)this + 29) = INIClass::ReadBool_Overwrite(
  v8 = v11 == 1; /*0x5fa7e9*/
  v12 = (const char *)&unk_82C460; /*0x5fa7eb*/
  if ( !v8 ) /*0x5fa7f0*/
    v12 = (const char *)&off_82C45C; /*0x5fa7f2*/
  Debug::Log("Sidebar Text is %s\n", v12); /*0x5fa7fd*/
  v13 = INIClass::ReadBool_Overwrite(g_INI_Key_Options, aUnitactionline, this->u8_1E); /*0x5fa818*/
    *((unsigned char *)this + 30) = INIClass::ReadBool_Overwrite(
  v8 = v13 == 1; /*0x5fa820*/
  v14 = (const char *)&unk_82C460; /*0x5fa822*/
  if ( !v8 ) /*0x5fa827*/
    v14 = (const char *)&off_82C45C; /*0x5fa829*/
  Debug::Log("ActionLines are %s\n", v14); /*0x5fa834*/
  v15 = INIClass::ReadBool_Overwrite(g_INI_Key_Options, aShowhidden, this->u8_1F); /*0x5fa84f*/
    *((unsigned char *)this + 31) = INIClass::ReadBool_Overwrite(
  v8 = v15 == 1; /*0x5fa857*/
  v16 = (const char *)&unk_82C460; /*0x5fa859*/
  if ( !v8 ) /*0x5fa85e*/
    v16 = (const char *)&off_82C45C; /*0x5fa860*/
  Debug::Log("ShowHidden is %s\n", v16); /*0x5fa86b*/
  v17 = INIClass::ReadBool_Overwrite(g_INI_Key_Options, aTooltips, *(unsigned char *)&this->q020); /*0x5fa886*/
    *((unsigned char *)this + 32) = INIClass::ReadBool_Overwrite(
  v8 = v17 == 1; /*0x5fa88e*/
  v18 = (const char *)&unk_82C460; /*0x5fa890*/
  if ( !v8 ) /*0x5fa895*/
    v18 = (const char *)&off_82C45C; /*0x5fa897*/
  Debug::Log("ToolTips are %s\n", v18); /*0x5fa8a2*/
    v5 = INIClass::ReadInt_Overwrite(
    v6 = *((unsigned int *)this + 10);
    *((unsigned int *)this + 9) = v5;
  v21 = INIClass::ReadInt_Overwrite(g_INI_Key_Video, g_INI_Key_ScreenHeight, v20); /*0x5fa8d8*/
  v51 = *(unsigned int *)&this->ptr_24; /*0x5fa8e1*/
    *((unsigned int *)this + 10) = INIClass::ReadInt_Overwrite(
  Debug::Log("Resolution = %d X %d\n", v51, v21); /*0x5fa8ea*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite(
    *((unsigned char *)this + 52) = Bool_Overwrite;
  v23 = v22 == 1 && g_DDraw_AllowStretchBlits == 1; /*0x5fa919*/
    *((unsigned char *)this + 52) = v8;
  v8 = v23; /*0x5fa922*/
  v24 = (const char *)&unk_82C460; /*0x5fa924*/
  if ( !v8 ) /*0x5fa929*/
    v24 = (const char *)&off_82C45C; /*0x5fa92b*/
  Debug::Log("StretchMovies is %s\n", v24); /*0x5fa936*/
  v25 = INIClass::ReadBool_Overwrite(g_INI_Key_Video, aAllowhiresmode, *(unsigned char *)&this->u8_35); /*0x5fa951*/
    *((unsigned char *)this + 53) = INIClass::ReadBool_Overwrite(
  v8 = v25 == 1; /*0x5fa959*/
  v26 = (const char *)&unk_82C460; /*0x5fa95b*/
  if ( !v8 ) /*0x5fa960*/
    v26 = (const char *)&off_82C45C; /*0x5fa962*/
  Debug::Log("AllowHiRes is %s\n", v26); /*0x5fa96d*/
  byte_A8ED63 = INIClass::ReadBool_Overwrite(g_INI_Key_Video, aAllowmodetoggl, byte_A8ED63); /*0x5fa990*/
  v27 = (gamemd::Game *)(INIClass::ReadBool_Overwrite(g_INI_Key_Video, aAllowvramsideb, *(unsigned char *)&this->q036));
  v28 = (gamemd::Game *)(this->u32_38);
    *((unsigned char *)this + 54) = v9;
  INIClass::ReadDouble_Overwrite((int)g_INI_Key_Audio, (int)aSoundvolume, v28); /*0x5fa9c8*/
  if ( v28 >= 1.0 ) /*0x5fa9d8*/
    v28 = 1.0; /*0x5fa9dc*/
    *((float *)this + 14) = Double_Overwrite;
  v29 = Math::RoundToInt(v28 * 16384.0); /*0x5fa9eb*/
  EndBufferMixer(g_MixerChannel_Score, v29); /*0x5fa9f8*/
    Debug::Log();
  v30 = this->u32_3C; /*0x5faa10*/
  INIClass::ReadDouble_Overwrite((int)g_INI_Key_Audio, (int)aVoicevolume, v30); /*0x5faa28*/
  if ( v30 >= 1.0 ) /*0x5faa38*/
    v30 = 1.0; /*0x5faa3c*/
    *((float *)this + 15) = v13;
  v31 = Math::RoundToInt(v30 * 255.0); /*0x5faa4b*/
  ThemeClass::GetField(v31, IDA_HIDWORD(v31)); /*0x5faa52*/
    v15 = Math::RoundToInt(*((float *)this + 15) * 16384.0);
  EndBufferMixer(g_MixerChannel_Voice, v32); /*0x5faa6d*/
    Debug::Log();
  v33 = *(unsigned int *)&this->q040; /*0x5faa85*/
  INIClass::ReadDouble_Overwrite((int)g_INI_Key_Audio, (int)aScorevolume, v33); /*0x5faa9d*/
  if ( v33 >= (gamemd::Game *)(1.0) ) /*0x5faaad*/
    v33 = 1.0; /*0x5faab1*/
    *((float *)this + 16) = v16;
  v34 = Math::RoundToInt((unsigned int)(v33)* 16384.0); /*0x5faac0*/
  EndBufferMixer(g_MixerChannel_Theme, v34); /*0x5faacd*/
    v18 = Math::RoundToInt(*((float *)this + 16) * 255.0);
  TechnoTypeClass::CheckFlag(v35); /*0x5faae6*/
    Debug::Log();
    v19 = INIClass::ReadBool_Overwrite(
    *((unsigned char *)this + 68) = v19;
  byte_A83D20 = v36; /*0x5fab1c*/
  v37 = (const char *)&unk_82C460; /*0x5fab26*/
  if ( this->u8_44 != 1 ) /*0x5fab2b*/
    v37 = (const char *)&off_82C45C; /*0x5fab2d*/
  Debug::Log("ScoreRepeat is %s\n", v37); /*0x5fab38*/
    v20 = INIClass::ReadBool_Overwrite(
    *((unsigned char *)this + 70) = v20;
  byte_A83D22 = v38; /*0x5fab5b*/
  v39 = (const char *)&unk_82C460; /*0x5fab65*/
  if ( *(unsigned char *)&this->u8_46 != 1 ) /*0x5fab6a*/
    v39 = (const char *)&off_82C45C; /*0x5fab6c*/
  Debug::Log("ScoreShuffle is %s\n", v39); /*0x5fab77*/
    *((unsigned char *)this + 69) = INIClass::ReadBool_Overwrite(
    *((unsigned int *)this + 19) = -1;
    *((unsigned int *)this + 20) = -1;
  INIClass::ParseValue_Wide((int)g_INI_Key_Network, (int)aNetid, &g_TypeClass_DefaultString, String, 0xC8u); /*0x5fabc1*/
  if ( String[0] ) /*0x5fabcc*/
  {
    v40 = String; /*0x5fabce*/
    do /*0x5fabe8*/
    {
      v8 = *v40 == 0xFFFFu; /*0x5fabd8*/
      *v40 = ~*v40; /*0x5fabdb*/
      if ( v8 ) /*0x5fabde*/
        *v40 = -1; /*0x5fabe0*/
      ++v40; /*0x5fabe5*/
    }
    while ( *v40 ); /*0x5fabe8*/
    v41 = wcstok(String, asc_82083C, v56); /*0x5fabf8*/
    if ( v41 ) /*0x5fac02*/
    {
            *((unsigned int *)this + 19) = wcstol(v23, 0, 10) - 1;
      v42 = wcstok(0, asc_82083C, v50); /*0x5fac19*/
      if ( v42 ) /*0x5fac23*/
                *((unsigned int *)this + 20) = wcstol(v24, 0, 10) - 1;
    }
  }
    v25 = *((unsigned int *)this + 19);
  if ( v43 < -1 || v43 >= 8 ) /*0x5fac40*/
        *((unsigned int *)this + 19) = -1;
    v26 = *((unsigned int *)this + 20);
  if ( v44 < -1 || v44 >= 8 ) /*0x5fac4f*/
        *((unsigned int *)this + 20) = -1;
  v45 = INIClass::ReadInt_Overwrite(g_INI_Key_Audio, aSoundlatency, this->u32_90); /*0x5fac6a*/
    *((unsigned int *)this + 144) = INIClass::ReadInt_Overwrite(
  Debug::Log("Emulated sound card latency default = %d\n", v45); /*0x5fac7e*/
    v27 = INIClass::ReadInt_Overwrite(
    v31 = *((unsigned int *)this + 21);
    *((unsigned int *)this + 148) = v27;
    *((unsigned int *)this + 21) = INIClass::ReadInt_Overwrite(
    INIClass::GetString(
  Debug::Log(aComplete); /*0x5face4*/
    LOBYTE(v28) = *((unsigned char *)this + 29);
  nullsub_36(v47); /*0x5facf5*/
  IDA_LOBYTE(v48) = this->u8_1E; /*0x5facfa*/
  SetGlobalFlag(v48); /*0x5facfd*/
// 0x5fb050
  return GameSettings::ParseNetworkAddress(); /*0x5fad09*/
}
} // namespace gamemd
// 0x5FB050
namespace gamemd {
void * GameSettings::ParseNetworkAddress()
{
  uint16_t v2; // ax
  const char *v3; // esi
  char *result; // eax
  size_t v5; // kr04_4
  char *v6; // edx
  int v7; // esi
  int *v8; // eax
  char v9; // [esp+8h] [ebp-1Ch] BYREF
  int v10; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+10h] [ebp-14h] BYREF
  int16_t v12; // [esp+14h] [ebp-10h]
  unsigned int v13[3]; // [esp+18h] [ebp-Ch] BYREF

    v2 = *((unsigned short *)this + 37);
  if ( v2 == 0xFFFF ) /*0x5fb05f*/
  {
    Network::GetField(unk_A8E9C0, 34835); /*0x5fb066*/
  }
  else if ( v2 < 0x4000u ) /*0x5fb06c*/
  {
    Network::GetField(unk_A8E9C0, v2 + 0x4000); /*0x5fb079*/
  }
    v3 = (char *)this + 352;
  result = 0; /*0x5fb086*/
  v5 = strlen(v3) + 1; /*0x5fb088*/
  if ( v5 != 1 ) /*0x5fb08d*/
  {
    v6 = (char *)RA2_OPNEW(v5); /*0x5fb09a*/
    strcpy(v6, v3); /*0x5fb0b8*/
    v7 = 0; /*0x5fb0c1*/
    result = strtok(v6, asc_826598); /*0x5fb0c3*/
    if ( result ) /*0x5fb0cd*/
    {
      do /*0x5fb10f*/
      {
        sscanf(result, "%x", &v9); /*0x5fb0de*/
        *((unsigned char *)&v10 + v7++) = v9; /*0x5fb0ef*/
        result = strtok(0, asc_826598); /*0x5fb105*/
      }
      while ( result ); /*0x5fb10f*/
      if ( v7 >= 4 ) /*0x5fb114*/
      {
        v11 = -1; /*0x5fb11a*/
        v12 = -1; /*0x5fb126*/
        dword_A8D5FC = 1; /*0x5fb131*/
        v8 = NetworkAddress::Assign(v13, &v10, (int)&v11, 0); /*0x5fb13b*/
        stru_A8D600 = *v8; /*0x5fb142*/
        dword_A8D604 = v8[1]; /*0x5fb14b*/
        result = (char *)v8[2]; /*0x5fb151*/
        dword_A8D608 = (int)result; /*0x5fb154*/
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
  int result; // eax

  result = volume; /*0x721290*/
  if ( volume >= 255 ) /*0x721299*/
    result = 255; /*0x72129b*/
    *((unsigned int *)this + 3) = result;
  return result; /*0x7212a3*/
}
} // namespace gamemd
// 0x7931A0
namespace gamemd {
char * GameSettings::FindFlagged()
{
  int v0; // eax
  char *i; // edx

  v0 = 0; /*0x7931a7*/
  if ( (int)dword_B77900 <= 0 ) /*0x7931ad*/
    return 0; /*0x7931dc*/
  for ( i = (char *)dword_B77908; ; i += 108 ) /*0x7931af*/
  {
    if ( v0 >= 0 && v0 < (int)dword_B77900 ) /*0x7931bb*/
      qmemcpy(&byte_B777B0, i, 0x6Cu); /*0x7931c9*/
    if ( (byte_B777B0 & 1) != 0 ) /*0x7931d2*/
      break; /*0x7931d2*/
    if ( ++v0 >= (int)dword_B77900 ) /*0x7931da*/
      return 0; /*0x7931da*/
  }
  return &byte_B777B0; /*0x7931dc*/
}
} // namespace gamemd