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
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"

// 0x5FA620
namespace gamemd {
void GameSettings::Read(void *a1, void *a2)
{

  double v1; // st7
  int Int_Overwrite; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  GameSettings Bool_Overwrite; // al
  bool v9; // al
  GameSettings v10; // al
  int v13; // eax
  int v16; // eax
  int v17; // eax
  int v20; // eax
  int v21; // eax
  GameSettings v22; // al
  GameSettings v23; // al
  wchar_t *v24; // eax
  bool v25; // zf
  wchar_t *v26; // eax
  wchar_t *v27; // eax
  int v28; // eax
  int v29; // eax
  int16_t v30; // ax
  int v31; // ecx
  wchar_t **v33; // [esp-4h] [ebp-1ACh]
  double v34; // [esp+0h] [ebp-1A8h]
  double v36; // [esp+0h] [ebp-1A8h]
  double v38; // [esp+0h] [ebp-1A8h]
  int v40; // [esp+4h] [ebp-1A4h]
  wchar_t **v41; // [esp+8h] [ebp-1A0h]
  wchar_t String[200]; // [esp+18h] [ebp-190h] BYREF

  _ESI = this; /*0x5fa62f*/
  ((Debug *)this)->Log(); /*0x5fa636*/
  *(unsigned int *)_ESI = INIClass::ReadInt_Overwrite( /*0x5fa65b*/
                      (bool *)&DSurface_ViewBounds.__pad_FC[36],
                      (uint8_t *)g_INI_Key_Options,
                      (uint8_t *)g_INI_Key_GameSpeed,
                      *(unsigned int *)_ESI);
  ((Debug *)this)->Log(); /*0x5fa65d*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5fa678*/
                    (bool *)&DSurface_ViewBounds.__pad_FC[36],
                    (uint8_t *)g_INI_Key_Options,
                    (uint8_t *)aDifficulty,
                    *(unsigned int *)&_ESI[4]);
  *(unsigned int *)&_ESI[4] = Int_Overwrite; /*0x5fa680*/
  if ( Int_Overwrite >= 4 ) /*0x5fa683*/
    Int_Overwrite = 4; /*0x5fa685*/
  *(unsigned int *)&_ESI[4] = Int_Overwrite; /*0x5fa68c*/
  *(unsigned int *)&_ESI[4] = Int_Overwrite <= 0 ? 0 : Int_Overwrite;
  ((Debug *)this)->Log(); /*0x5fa6a0*/
  v4 = INIClass::ReadInt_Overwrite( /*0x5fa6bb*/
         (bool *)&DSurface_ViewBounds.__pad_FC[36],
         (uint8_t *)g_INI_Key_Options,
         (uint8_t *)aCampdifficulty,
         *(unsigned int *)&_ESI[8]);
  *(unsigned int *)&_ESI[8] = v4; /*0x5fa6c3*/
  if ( v4 >= 2 ) /*0x5fa6c6*/
    v4 = 2; /*0x5fa6c8*/
  *(unsigned int *)&_ESI[8] = v4; /*0x5fa6cf*/
  *(unsigned int *)&_ESI[8] = v4 <= 0 ? 0 : v4;
  ((Debug *)this)->Log(); /*0x5fa6e3*/
  *(unsigned int *)&_ESI[12] = INIClass::ReadInt_Overwrite( /*0x5fa709*/
                           (bool *)&DSurface_ViewBounds.__pad_FC[36],
                           (uint8_t *)g_INI_Key_Options,
                           (uint8_t *)aScrollmethod,
                           *(unsigned int *)&_ESI[12]);
  ((Debug *)this)->Log(); /*0x5fa70c*/
  *(unsigned int *)&_ESI[16] = INIClass::ReadInt_Overwrite( /*0x5fa732*/
                           (bool *)&DSurface_ViewBounds.__pad_FC[36],
                           (uint8_t *)g_INI_Key_Options,
                           (uint8_t *)aScrollrate,
                           *(unsigned int *)&_ESI[16]);
  ((Debug *)this)->Log(); /*0x5fa735*/
  _ESI[20] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa75a*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             (uint8_t *)g_INI_Key_Options,
                             (uint8_t *)aAutoscroll,
                             *(unsigned char *)&_ESI[20]);
  ((Debug *)this)->Log(); /*0x5fa771*/
  v5 = INIClass::ReadInt_Overwrite( /*0x5fa78c*/
         (bool *)&DSurface_ViewBounds.__pad_FC[36],
         (uint8_t *)g_INI_Key_Options,
         (uint8_t *)g_INI_Key_DetailLevel,
         *(unsigned int *)&_ESI[24]);
  *(unsigned int *)&_ESI[24] = v5; /*0x5fa794*/
  if ( v5 >= 2 ) /*0x5fa797*/
    v5 = 2; /*0x5fa799*/
  *(unsigned int *)&_ESI[24] = v5; /*0x5fa7a0*/
  *(unsigned int *)&_ESI[24] = v5 <= 0 ? 0 : v5;
  ((Debug *)this)->Log(); /*0x5fa7b4*/
  _ESI[28] = (GameSettings)1; /*0x5fa7c3*/
  ((Debug *)this)->Log(); /*0x5fa7c6*/
  _ESI[29] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa7e6*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             (uint8_t *)g_INI_Key_Options,
                             (uint8_t *)aSidebarcameote,
                             *(unsigned char *)&_ESI[29]);
  ((Debug *)this)->Log(); /*0x5fa7fd*/
  _ESI[30] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa81d*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             (uint8_t *)g_INI_Key_Options,
                             (uint8_t *)aUnitactionline,
                             *(unsigned char *)&_ESI[30]);
  ((Debug *)this)->Log(); /*0x5fa834*/
  _ESI[31] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa854*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             (uint8_t *)g_INI_Key_Options,
                             (uint8_t *)aShowhidden,
                             *(unsigned char *)&_ESI[31]);
  ((Debug *)this)->Log(); /*0x5fa86b*/
  _ESI[32] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa88b*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             (uint8_t *)g_INI_Key_Options,
                             (uint8_t *)aTooltips,
                             *(unsigned char *)&_ESI[32]);
  ((Debug *)this)->Log(); /*0x5fa8a2*/
  v6 = INIClass::ReadInt_Overwrite( /*0x5fa8bd*/
         (bool *)&DSurface_ViewBounds.__pad_FC[36],
         g_INI_Key_Video,
         (uint8_t *)g_INI_Key_ScreenWidth,
         *(unsigned int *)&_ESI[36]);
  v7 = *(unsigned int *)&_ESI[40]; /*0x5fa8c2*/
  *(unsigned int *)&_ESI[36] = v6; /*0x5fa8c5*/
  *(unsigned int *)&_ESI[40] = INIClass::ReadInt_Overwrite( /*0x5fa8e7*/
                           (bool *)&DSurface_ViewBounds.__pad_FC[36],
                           g_INI_Key_Video,
                           (uint8_t *)g_INI_Key_ScreenHeight,
                           v7);
  ((Debug *)this)->Log(); /*0x5fa8ea*/
  Bool_Overwrite = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa905*/
                                   (int *)&DSurface_ViewBounds.__pad_FC[36],
                                   g_INI_Key_Video,
                                   (uint8_t *)aStretchmovies,
                                   *(unsigned char *)&_ESI[52]);
  _ESI[52] = Bool_Overwrite; /*0x5fa90c*/
  v9 = Bool_Overwrite == 1 && g_DDraw_AllowStretchBlits == 1; /*0x5fa919*/
  _ESI[52] = (GameSettings)v9; /*0x5fa91f*/
  ((Debug *)this)->Log(); /*0x5fa936*/
  _ESI[53] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa956*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             g_INI_Key_Video,
                             aAllowhiresmode,
                             *(unsigned char *)&_ESI[53]);
  ((Debug *)this)->Log(); /*0x5fa96d*/
  *((unsigned int *)((char *)&stru_A8EB00 + 383)) = INIClass::ReadBool_Overwrite( /*0x5fa990*/
                         (int *)&DSurface_ViewBounds.__pad_FC[36],
                         g_INI_Key_Video,
                         aAllowmodetoggl,
                         *((unsigned int *)((char *)&stru_A8EB00 + 383)));
  v10 = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fa9a8*/
                        (int *)&DSurface_ViewBounds.__pad_FC[36],
                        g_INI_Key_Video,
                        aAllowvramsideb,
                        *(unsigned char *)&_ESI[54]);
  /* asm-debt:__asm { fld dword ptr [esi+38h] } */
  _ESI[54] = v10; /*0x5fa9b8*/
  /* asm-debt:__asm { fstp [esp+1A8h+var_1A8]; double } */
  INIClass::ReadDouble_Overwrite( /*0x5fa9c8*/
    (double *)&DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Audio,
    (uint8_t *)aSoundvolume,
    v34);
  /* asm-debt:__asm */
  {
    fcom ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x100) == 0 ) /*0x5fa9d8*/
  {
    /* asm-debt:__asm */
    {
      fstp st
      fld ds:dbl_7E1718
    }
  }
  /* asm-debt:__asm { fst dword ptr [esi+38h] } */
  *(float *)&_ESI[56] = _ET1; /*0x5fa9e2*/
  /* asm-debt:__asm { fmul ds:flt_7EF38C } */
  LOWORD(v13) = Math::RoundToInt(v1); /*0x5fa9eb*/
  EndBufferMixer((int *)g_MixerChannel_Score, v13); /*0x5fa9f8*/
  /* asm-debt:__asm { fld dword ptr [esi+38h] } */
  /* asm-debt:__asm { fstp [esp+1A8h+var_1A8] } */
  Debug::Log(); /*0x5faa0b*/
  /* asm-debt:__asm { fld dword ptr [esi+3Ch] } */
  /* asm-debt:__asm { fstp [esp+1A8h+var_1A8]; double } */
  INIClass::ReadDouble_Overwrite( /*0x5faa28*/
    (double *)&DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Audio,
    (uint8_t *)aVoicevolume,
    v36);
  /* asm-debt:__asm */
  {
    fcom ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x100) == 0 ) /*0x5faa38*/
  {
    /* asm-debt:__asm */
    {
      fstp st
      fld ds:dbl_7E1718
    }
  }
  /* asm-debt:__asm { fst dword ptr [esi+3Ch] } */
  *(float *)&_ESI[60] = _ET1; /*0x5faa42*/
  /* asm-debt:__asm { fmul ds:dbl_7EAA50 } */
  LOWORD(v16) = Math::RoundToInt(v1); /*0x5faa4b*/
  ThemeClass::GetField(v16); /*0x5faa52*/
  /* asm-debt:__asm */
  {
    fld dword ptr [esi+3Ch]
    fmul ds:flt_7EF38C
  }
  LOWORD(v17) = Math::RoundToInt(v1); /*0x5faa60*/
  EndBufferMixer((int *)g_MixerChannel_Voice, v17); /*0x5faa6d*/
  /* asm-debt:__asm { fld dword ptr [esi+3Ch] } */
  /* asm-debt:__asm { fstp [esp+1A8h+var_1A8] } */
  Debug::Log(); /*0x5faa80*/
  /* asm-debt:__asm { fld dword ptr [esi+40h] } */
  /* asm-debt:__asm { fstp [esp+1A8h+var_1A8]; double } */
  INIClass::ReadDouble_Overwrite( /*0x5faa9d*/
    (double *)&DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Audio,
    (uint8_t *)aScorevolume,
    v38);
  /* asm-debt:__asm */
  {
    fcom ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x100) == 0 ) /*0x5faaad*/
  {
    /* asm-debt:__asm */
    {
      fstp st
      fld ds:dbl_7E1718
    }
  }
  /* asm-debt:__asm { fst dword ptr [esi+40h] } */
  *(float *)&_ESI[64] = _ET1; /*0x5faab7*/
  /* asm-debt:__asm { fmul ds:flt_7EF38C } */
  LOWORD(v20) = Math::RoundToInt(v1); /*0x5faac0*/
  EndBufferMixer((int *)g_MixerChannel_Theme, v20); /*0x5faacd*/
  /* asm-debt:__asm */
  {
    fld dword ptr [esi+40h]
    fmul ds:dbl_7EAA50
  }
  LOWORD(v21) = Math::RoundToInt(v1); /*0x5faadb*/
  TechnoTypeClass::CheckFlag((TechnoTypeClass *)&unk_A83D10, v21); /*0x5faae6*/
  /* asm-debt:__asm { fld dword ptr [esi+40h] } */
  /* asm-debt:__asm { fstp [esp+1A8h+var_1A8] } */
  Debug::Log(); /*0x5faaf9*/
  v22 = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fab14*/
                        (int *)&DSurface_ViewBounds.__pad_FC[36],
                        g_INI_Key_Audio,
                        (uint8_t *)aIsscorerepeat,
                        *(unsigned char *)&_ESI[68]);
  _ESI[68] = v22; /*0x5fab19*/
  byte_A83D20 = v22; /*0x5fab1c*/
  Debug::Log(); /*0x5fab38*/
  v23 = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fab53*/
                        (int *)&DSurface_ViewBounds.__pad_FC[36],
                        g_INI_Key_Audio,
                        (uint8_t *)aIsscoreshuffle,
                        *(unsigned char *)&_ESI[70]);
  _ESI[70] = v23; /*0x5fab58*/
  byte_A83D22 = v23; /*0x5fab5b*/
  Debug::Log(); /*0x5fab77*/
  _ESI[69] = (GameSettings)INIClass::ReadBool_Overwrite( /*0x5fabb8*/
                             (int *)&DSurface_ViewBounds.__pad_FC[36],
                             g_INI_Key_Audio,
                             (uint8_t *)aIngamemusic,
                             *(unsigned char *)&_ESI[69]);
  *(unsigned int *)&_ESI[76] = -1; /*0x5fabbb*/
  *(unsigned int *)&_ESI[80] = -1; /*0x5fabbe*/
  INIClass::ParseValue_Wide( /*0x5fabc1*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Network,
    (uint8_t *)aNetid,
    &g_TypeClass_DefaultString,
    String,
    0xC8u);
  if ( String[0] ) /*0x5fabcc*/
  {
    v24 = String; /*0x5fabce*/
    do /*0x5fabe8*/
    {
      v25 = *v24 == 0xFFFFu; /*0x5fabd8*/
      *v24 = ~*v24; /*0x5fabdb*/
      if ( v25 ) /*0x5fabde*/
        *v24 = -1; /*0x5fabe0*/
      ++v24; /*0x5fabe5*/
    }
    while ( *v24 ); /*0x5fabe8*/
    v26 = wcstok(String, asc_82083C, v41); /*0x5fabf8*/
    if ( v26 ) /*0x5fac02*/
    {
      *(unsigned int *)&_ESI[76] = wcstol(v26, 0, 10) - 1; /*0x5fac16*/
      v27 = wcstok(0, asc_82083C, v33); /*0x5fac19*/
      if ( v27 ) /*0x5fac23*/
        *(unsigned int *)&_ESI[80] = wcstol(v27, 0, 10) - 1; /*0x5fac33*/
    }
  }
  v28 = *(unsigned int *)&_ESI[76]; /*0x5fac36*/
  if ( v28 < -1 || v28 >= 8 ) /*0x5fac40*/
    *(unsigned int *)&_ESI[76] = -1; /*0x5fac42*/
  v29 = *(unsigned int *)&_ESI[80]; /*0x5fac45*/
  if ( v29 < -1 || v29 >= 8 ) /*0x5fac4f*/
    *(unsigned int *)&_ESI[80] = -1; /*0x5fac51*/
  *(unsigned short *)&_ESI[72] = INIClass::ReadInt_Overwrite( /*0x5fac6f*/
                          (bool *)&DSurface_ViewBounds.__pad_FC[36],
                          g_INI_Key_Audio,
                          (uint8_t *)aSoundlatency,
                          *(uint16_t *)&_ESI[72]);
  Debug::Log(); /*0x5fac7e*/
  v30 = INIClass::ReadInt_Overwrite( /*0x5fac9c*/
          (bool *)&DSurface_ViewBounds.__pad_FC[36],
          g_INI_Key_Network,
          (uint8_t *)g_INI_Key_Socket,
          *(uint16_t *)&_ESI[74]);
  v40 = *(unsigned int *)&_ESI[84]; /*0x5faca9*/
  *(unsigned short *)&_ESI[74] = v30; /*0x5facb4*/
  *(unsigned int *)&_ESI[84] = INIClass::ReadInt_Overwrite( /*0x5facbd*/
                           (bool *)&DSurface_ViewBounds.__pad_FC[36],
                           g_INI_Key_Network,
                           (uint8_t *)aNetcard,
                           v40);
  INIClass::GetString( /*0x5facda*/
    (INIClass *)&DSurface_ViewBounds.__pad_FC[36],
    g_INI_Key_Network,
    (uint8_t *)g_INI_Key_DestNet,
    &g_INI_DefaultBuffer,
    (char *)&_ESI[88],
    64);
  Debug::Log(); /*0x5face4*/
  LOBYTE(v31) = _ESI[29]; /*0x5face9*/
  nullsub_36(v31); /*0x5facf5*/
  SetGlobalFlag(*(unsigned char *)&_ESI[30]); /*0x5facfd*/
  return (int)GameSettings::ParseNetworkAddress((const char *)_ESI); /*0x5fad09*/

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

  v2 = *((unsigned short *)this + 37); /*0x5fb057*/
  if ( v2 == 0xFFFF ) /*0x5fb05f*/
  {
    Network::GetField(unk_A8E9C0, 34835); /*0x5fb066*/
  }
  else if ( v2 < 0x4000u ) /*0x5fb06c*/
  {
    Network::GetField(unk_A8E9C0, v2 + 0x4000); /*0x5fb079*/
  }
  v3 = (unsigned char *)this + 88; /*0x5fb07e*/
  result = 0; /*0x5fb086*/
  v5 = strlen(v3) + 1; /*0x5fb088*/
  if ( v5 != 1 ) /*0x5fb08d*/
  {
    v6 = (char *)__2_YAPAXI_Z(v5); /*0x5fb09a*/
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
void GameSettings::SetScoreVolume(int volume, void *a2, void *a3)
{

  int result; // eax

  result = volume; /*0x721290*/
  if ( volume >= 255 ) /*0x721299*/
    result = 255; /*0x72129b*/
  this->ObjectTypeClass[3] = result; /*0x7212a0*/
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