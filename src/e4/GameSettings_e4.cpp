// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"

// 0x5FA620
char * GameSettings::Read()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall GameSettings::Read(unsigned __int16 *this)
{
  int Int_Overwrite; // eax
  CCINIClass *v6; // ecx
  char Bool_Overwrite; // al
  double Double_Overwrite; // st7
  IUnknown *v18; // eax
  CCINIClass *v21; // eax
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  unsigned __int16 v27; // ax
  IUnknown *v28; // ecx
  wchar_t **v30; // [esp-4h] [ebp-1ACh]
  INIClass *aP3_4; // [esp+4h] [ebp-1A4h]
  wchar_t **v32; // [esp+8h] [ebp-1A0h]
  CCINIClass String[4]; // [esp+18h] [ebp-190h] BYREF

  Debug::Log(); /*0x5fa636*/
  *(_DWORD *)this = INIClass::ReadInt_Overwrite( /*0x5fa65b*/
                      (int)&stru_87C374[44364],
                      (unsigned __int8 *)&g_INI_Key_Options,
                      (CCINIClass *)&stru_830620[11464],
                      *(INIClass **)this);
  Debug::Log(); /*0x5fa65d*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5fa678*/
                    (int)&stru_87C374[44364],
                    (unsigned __int8 *)&g_INI_Key_Options,
                    (CCINIClass *)&stru_830620[11436],
                    *((INIClass **)this + 1));
  *((_DWORD *)this + 1) = Int_Overwrite; /*0x5fa680*/
  if ( Int_Overwrite >= 4 ) /*0x5fa683*/
    Int_Overwrite = 4; /*0x5fa685*/
  *((_DWORD *)this + 1) = Int_Overwrite; /*0x5fa68c*/
  *((_DWORD *)this + 1) = Int_Overwrite <= 0 ? 0 : Int_Overwrite;
  Debug::Log(); /*0x5fa6a0*/
  int v3; // eax
  v3 = INIClass::ReadInt_Overwrite( /*0x5fa6bb*/
         (int)&stru_87C374[44364],
         (unsigned __int8 *)&g_INI_Key_Options,
         (CCINIClass *)&stru_830620[11400],
         *((INIClass **)this + 2));
  *((_DWORD *)this + 2) = v3; /*0x5fa6c3*/
  if ( v3 >= 2 ) /*0x5fa6c6*/
    v3 = 2; /*0x5fa6c8*/
  *((_DWORD *)this + 2) = v3; /*0x5fa6cf*/
  *((_DWORD *)this + 2) = v3 <= 0 ? 0 : v3;
  Debug::Log(); /*0x5fa6e3*/
  *((_DWORD *)this + 3) = INIClass::ReadInt_Overwrite( /*0x5fa709*/
                            (int)&stru_87C374[44364],
                            (unsigned __int8 *)&g_INI_Key_Options,
                            (CCINIClass *)&stru_830620[11360],
                            *((INIClass **)this + 3));
  Debug::Log(); /*0x5fa70c*/
  *((_DWORD *)this + 4) = INIClass::ReadInt_Overwrite( /*0x5fa732*/
                            (int)&stru_87C374[44364],
                            (unsigned __int8 *)&g_INI_Key_Options,
                            (CCINIClass *)&stru_830620[11328],
                            *((INIClass **)this + 4));
  Debug::Log(); /*0x5fa735*/
  *((_BYTE *)this + 20) = INIClass::ReadBool_Overwrite( /*0x5fa75a*/
                            (int)&stru_87C374[44364],
                            (unsigned __int8 *)&g_INI_Key_Options,
                            (CCINIClass *)&stru_830620[11296],
                            *((_BYTE *)this + 20));
  Debug::Log(); /*0x5fa771*/
  int v4; // eax
  v4 = INIClass::ReadInt_Overwrite( /*0x5fa78c*/
         (int)&stru_87C374[44364],
         (unsigned __int8 *)&g_INI_Key_Options,
         &unk_81855C,
         *((INIClass **)this + 6));
  *((_DWORD *)this + 6) = v4; /*0x5fa794*/
  if ( v4 >= 2 ) /*0x5fa797*/
    v4 = 2; /*0x5fa799*/
  *((_DWORD *)this + 6) = v4; /*0x5fa7a0*/
  *((_DWORD *)this + 6) = v4 <= 0 ? 0 : v4;
  Debug::Log(); /*0x5fa7b4*/
  *((_BYTE *)this + 28) = 1; /*0x5fa7c3*/
  Debug::Log(); /*0x5fa7c6*/
  *((_BYTE *)this + 29) = INIClass::ReadBool_Overwrite( /*0x5fa7e6*/
                            (int)&stru_87C374[44364],
                            (unsigned __int8 *)&g_INI_Key_Options,
                            (CCINIClass *)&stru_830620[11212],
                            *((_BYTE *)this + 29));
  Debug::Log(); /*0x5fa7fd*/
  *((_BYTE *)this + 30) = INIClass::ReadBool_Overwrite( /*0x5fa81d*/
                            (int)&stru_87C374[44364],
                            (unsigned __int8 *)&g_INI_Key_Options,
                            (CCINIClass *)&stru_830620[11176],
                            *((_BYTE *)this + 30));
  Debug::Log(); /*0x5fa834*/
  *((_BYTE *)this + 31) = INIClass::ReadBool_Overwrite( /*0x5fa854*/
                            (int)&stru_87C374[44364],
                            (unsigned __int8 *)&g_INI_Key_Options,
                            (CCINIClass *)&stru_830620[11144],
                            *((_BYTE *)this + 31));
  Debug::Log(); /*0x5fa86b*/
  *((_BYTE *)this + 32) = INIClass::ReadBool_Overwrite( /*0x5fa88b*/
                            (int)&stru_87C374[44364],
                            (unsigned __int8 *)&g_INI_Key_Options,
                            (CCINIClass *)&stru_830620[11112],
                            *((_BYTE *)this + 32));
  Debug::Log(); /*0x5fa8a2*/
  int v5; // eax
  v5 = INIClass::ReadInt_Overwrite( /*0x5fa8bd*/
         (int)&stru_87C374[44364],
         (unsigned __int8 *)&stru_830620[11072],
         (CCINIClass *)&stru_830620[11080],
         this->q024);
  v6 = (CCINIClass *)*((_DWORD *)this + 10); /*0x5fa8c2*/
  this->q024 = v5; /*0x5fa8c5*/
  *((_DWORD *)this + 10) = INIClass::ReadInt_Overwrite( /*0x5fa8e7*/
                             (int)&stru_87C374[44364],
                             (unsigned __int8 *)&stru_830620[11072],
                             (CCINIClass *)&stru_830620[11056],
                             (INIClass *)v6);
  Debug::Log(); /*0x5fa8ea*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5fa905*/
                     (int)&stru_87C374[44364],
                     (unsigned __int8 *)&stru_830620[11072],
                     (CCINIClass *)&stru_830620[11016],
                     *((_BYTE *)this + 52));
  *((_BYTE *)this + 52) = Bool_Overwrite; /*0x5fa90c*/
  bool v8 = Bool_Overwrite == 1 && stru_89E138[11446] == 1; /*0x5fa919*/
  *((_BYTE *)this + 52) = v8; /*0x5fa91f*/
  Debug::Log(); /*0x5fa936*/
  *((_BYTE *)this + 53) = INIClass::ReadBool_Overwrite( /*0x5fa956*/
                            (int)&stru_87C374[44364],
                            (unsigned __int8 *)&stru_830620[11072],
                            (CCINIClass *)&stru_830620[10976],
                            *((_BYTE *)this + 53));
  Debug::Log(); /*0x5fa96d*/
  HouseClass_Player[45079] = INIClass::ReadBool_Overwrite( /*0x5fa990*/
                                          (int)&stru_87C374[44364],
                                          (unsigned __int8 *)&stru_830620[11072],
                                          (CCINIClass *)&stru_830620[10940],
                                          HouseClass_Player[45079]);
  char v9; // al
  v9 = INIClass::ReadBool_Overwrite( /*0x5fa9a8*/
         (int)&stru_87C374[44364],
         (unsigned __int8 *)&stru_830620[11072],
         (CCINIClass *)&stru_830620[10920],
         *((_BYTE *)this + 54));
  double v10 = *((float *)this + 14); /*0x5fa9ad*/
  *((_BYTE *)this + 54) = v9; /*0x5fa9b8*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x5fa9c8*/
                       (int)&stru_87C374[44364],
                       (INIClass *)&stru_830620[10900],
                       (unsigned __int8 *)&stru_830620[10908],
                       (INIClass *)LODWORD(v10));
  if ( Double_Overwrite >= 1.0 ) /*0x5fa9d8*/
    Double_Overwrite = 1.0; /*0x5fa9dc*/
  *((float *)this + 14) = Double_Overwrite; /*0x5fa9e2*/
  int v12 = Math::RoundToInt(Double_Overwrite * 16384.0); /*0x5fa9eb*/
  EndBufferMixer(*(int **)&stru_87C374[9172], v12); /*0x5fa9f8*/
  Debug::Log(); /*0x5faa0b*/
  double v13; // st7
  v13 = INIClass::ReadDouble_Overwrite( /*0x5faa28*/
          (int)&stru_87C374[44364],
          (INIClass *)&stru_830620[10900],
          (unsigned __int8 *)&stru_830620[10888],
          (INIClass *)COERCE_UNSIGNED_INT64(*((float *)this + 15)));
  if ( v13 >= 1.0 ) /*0x5faa38*/
    v13 = 1.0; /*0x5faa3c*/
  *((float *)this + 15) = v13; /*0x5faa42*/
  int v14 = Math::RoundToInt(v13 * 255.0); /*0x5faa4b*/
  ThemeClass::GetField(v14); /*0x5faa52*/
  int v15 = Math::RoundToInt(*((float *)this + 15) * 16384.0); /*0x5faa60*/
  EndBufferMixer(*(int **)&stru_87C374[9164], v15); /*0x5faa6d*/
  Debug::Log(); /*0x5faa80*/
  double v16; // st7
  v16 = INIClass::ReadDouble_Overwrite( /*0x5faa9d*/
          (int)&stru_87C374[44364],
          (INIClass *)&stru_830620[10900],
          (unsigned __int8 *)&stru_830620[10876],
          (INIClass *)COERCE_UNSIGNED_INT64(*((float *)this + 16)));
  if ( v16 >= 1.0 ) /*0x5faaad*/
    v16 = 1.0; /*0x5faab1*/
  *((float *)this + 16) = v16; /*0x5faab7*/
  int v17 = Math::RoundToInt(v16 * 16384.0); /*0x5faac0*/
  EndBufferMixer(*(int **)&stru_87C374[9168], v17); /*0x5faacd*/
  v18 = (IUnknown *)Math::RoundToInt(*((float *)this + 16) * 255.0); /*0x5faadb*/
  GameSettings::SetScoreVolume(&g_BuildingTypeClass_Count, v18); /*0x5faae6*/
  Debug::Log(); /*0x5faaf9*/
  char v19; // al
  v19 = INIClass::ReadBool_Overwrite( /*0x5fab14*/
          (int)&stru_87C374[44364],
          (unsigned __int8 *)&stru_830620[10900],
          (CCINIClass *)&stru_830620[10860],
          *((_BYTE *)this + 68));
  *((_BYTE *)this + 68) = v19; /*0x5fab19*/
  byte_A83D20 = v19; /*0x5fab1c*/
  Debug::Log(); /*0x5fab38*/
  char v20; // al
  v20 = INIClass::ReadBool_Overwrite( /*0x5fab53*/
          (int)&stru_87C374[44364],
          (unsigned __int8 *)&stru_830620[10900],
          (CCINIClass *)&stru_830620[10844],
          *((_BYTE *)this + 70));
  *((_BYTE *)this + 70) = v20; /*0x5fab58*/
  byte_A83D22 = v20; /*0x5fab5b*/
  Debug::Log(); /*0x5fab77*/
  *((_BYTE *)this + 69) = INIClass::ReadBool_Overwrite( /*0x5fabb8*/
                            (int)&stru_87C374[44364],
                            (unsigned __int8 *)&stru_830620[10900],
                            (CCINIClass *)&stru_830620[10832],
                            *((_BYTE *)this + 69));
  *((_DWORD *)this + 19) = -1; /*0x5fabbb*/
  *((_DWORD *)this + 20) = -1; /*0x5fabbe*/
  INIClass::ParseValue_Wide( /*0x5fabc1*/
    (char **)&stru_87C374[44364],
    (unsigned __int8 *)&stru_830620[10816],
    (CCINIClass *)&stru_830620[10824],
    (wchar_t *)&stru_87C374[46016],
    String,
    0xC8u);
  if ( *(_WORD *)String[0].__pad_0 ) /*0x5fabcc*/
  {
    v21 = String; /*0x5fabce*/
    do /*0x5fabe8*/
    {
      bool v22 = *(_WORD *)v21->__pad_0 == 0xFFFF; /*0x5fabd8*/
      *(_WORD *)v21->__pad_0 = ~*(_WORD *)v21->__pad_0; /*0x5fabdb*/
      if ( v22 ) /*0x5fabde*/
        *(_WORD *)v21->__pad_0 = -1; /*0x5fabe0*/
      v21 = (CCINIClass *)((char *)v21 + 2); /*0x5fabe5*/
    }
    while ( *(_WORD *)v21->__pad_0 ); /*0x5fabe8*/
    v23 = wcstok((wchar_t *)String, &stru_82083C, v32); /*0x5fabf8*/
    if ( v23 ) /*0x5fac02*/
    {
      *((_DWORD *)this + 19) = wcstol((BlowStraw *)v23, 0, 10) - 1; /*0x5fac16*/
      v24 = wcstok(0, &stru_82083C, v30); /*0x5fac19*/
      if ( v24 ) /*0x5fac23*/
        *((_DWORD *)this + 20) = wcstol((BlowStraw *)v24, 0, 10) - 1; /*0x5fac33*/
    }
  }
  int v25 = *((_DWORD *)this + 19); /*0x5fac36*/
  if ( v25 < -1 || v25 >= 8 ) /*0x5fac40*/
    *((_DWORD *)this + 19) = -1; /*0x5fac42*/
  int v26 = *((_DWORD *)this + 20); /*0x5fac45*/
  if ( v26 < -1 || v26 >= 8 ) /*0x5fac4f*/
    *((_DWORD *)this + 20) = -1; /*0x5fac51*/
  this->q024 = INIClass::ReadInt_Overwrite( /*0x5fac6f*/
                   (int)&stru_87C374[44364],
                   (unsigned __int8 *)&stru_830620[10900],
                   (CCINIClass *)&stru_830620[10800],
                   (INIClass *)this->q024);
  Debug::Log(); /*0x5fac7e*/
  v27 = INIClass::ReadInt_Overwrite( /*0x5fac9c*/
          (int)&stru_87C374[44364],
          (unsigned __int8 *)&stru_830620[10816],
          (CCINIClass *)&stru_830620[10748],
          (INIClass *)this->q025);
  aP3_4 = (INIClass *)*((_DWORD *)this + 21); /*0x5faca9*/
  this->q025 = v27; /*0x5facb4*/
  *((_DWORD *)this + 21) = INIClass::ReadInt_Overwrite( /*0x5facbd*/
                             (int)&stru_87C374[44364],
                             (unsigned __int8 *)&stru_830620[10816],
                             (CCINIClass *)&stru_830620[10740],
                             aP3_4);
  INIClass::GetString( /*0x5facda*/
    (unsigned __int8 ***)&stru_87C374[44364],
    (INIClass *)&stru_830620[10816],
    (unsigned __int8 *)&stru_830620[10732],
    (INIClass *)&stru_87C374[56304],
    (INIClass *)(this + 44),
    64);
  Debug::Log(); /*0x5face4*/
  LOBYTE(v28) = *((_BYTE *)this + 29); /*0x5face9*/
  nullsub_36(v28); /*0x5facf5*/
  SetGlobalFlag(*((_BYTE *)this + 30)); /*0x5facfd*/
  return GameSettings::ParseNetworkAddress((const char *)this); /*0x5fad09*/
}
}

// 0x5FB050
char * GameSettings::ParseNetworkAddress()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_5FB050(const char *this)
{
  unsigned __int16 v2; // ax
  char *result; // eax
  size_t v5; // kr04_4
  __int16 v12; // [esp+14h] [ebp-10h]

  v2 = this->q025; /*0x5fb057*/
  if ( v2 == 0xFFFF ) /*0x5fb05f*/
  {
    Network::GetField(g_NetworkManager, 34835); /*0x5fb066*/
  }
  else if ( v2 < 0x4000u ) /*0x5fb06c*/
  {
    Network::GetField(g_NetworkManager, v2 + 0x4000); /*0x5fb079*/
  }
  const char * v3 = this + 88; /*0x5fb07e*/
  result = 0; /*0x5fb086*/
  v5 = strlen(v3) + 1; /*0x5fb088*/
  if ( v5 != 1 ) /*0x5fb08d*/
  {
    char * v6 = (char *)__2_YAPAXI_Z(v5); /*0x5fb09a*/
    strcpy(v6, v3); /*0x5fb0b8*/
    int v7 = 0; /*0x5fb0c1*/
    result = strtok(v6, stru_826598); /*0x5fb0c3*/
    if ( result ) /*0x5fb0cd*/
    {
  int v10; // [esp+Ch] [ebp-18h] BYREF
      do /*0x5fb10f*/
      {
  char v9; // [esp+8h] [ebp-1Ch] BYREF
        sscanf(result, DataGlobal_825BD4, &v9); /*0x5fb0de*/
        *((_BYTE *)&v10 + v7++) = v9; /*0x5fb0ef*/
        result = strtok(0, stru_826598); /*0x5fb105*/
      }
      while ( result ); /*0x5fb10f*/
      if ( v7 >= 4 ) /*0x5fb114*/
      {
        int v11 = -1; /*0x5fb11a*/
        v12 = -1; /*0x5fb126*/
        DataGlobal_A8D5FC = 1; /*0x5fb131*/
  _DWORD v13[3]; // [esp+18h] [ebp-Ch] BYREF
        int * v8 = NetworkAddress::Assign(v13, &v10, (int)&v11, 0); /*0x5fb13b*/
        DataGlobal_A8D600 = *v8; /*0x5fb142*/
        DataGlobal_A8D604 = v8[1]; /*0x5fb14b*/
        result = (char *)v8[2]; /*0x5fb151*/
        DataGlobal_A8D608 = (int)result; /*0x5fb154*/
      }
    }
  }
  return result; /*0x5fb159*/
}
}

// 0x721290
void GameSettings::SetScoreVolume(int volume)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void GameSettings::SetScoreVolume(int volume)
{
  MouseClass *result; // eax

  result = (MouseClass *)volume; /*0x721290*/
  if ( volume >= 255 ) /*0x721299*/
    result = (MouseClass *)255; /*0x72129b*/
  *((_DWORD *)this + 3) = result; /*0x7212a0*/
}
}

// 0x7931A0
char * GameSettings::FindFlagged()
{
{
    int v0;
    char *i;
    v0 = 0;
    if ( (int)g_WOL_State <= 0 )
    return 0;
    for ( i = (char *)g_WOL_ConnectionFlags; ; i += 108 )
  {
    if ( v0 >= 0 && v0 < (int)g_WOL_State )
    qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu);
    if ( (g_IsMultiplayerSession & 1) != 0 )
    break;
    if ( ++v0 >= (int)g_WOL_State )
    return 0;
  }
    return &g_IsMultiplayerSession;
}
}
