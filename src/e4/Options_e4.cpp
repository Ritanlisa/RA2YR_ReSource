// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x4F11B0
namespace gamemd {
int Options::DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND a4)
{
{
  int result; // eax
  wchar_t *v6; // edi
  HWND DlgItem; // eax
  HWND v8; // esi
  wchar_t *StringCSF; // eax
  _DWORD *WindowLongA; // ebp
  void (__stdcall *v12)(HWND, int); // edi
  const char **Options; // eax
  HWND eax48; // eax
  IUnknown *v19; // edi
  HWND eax53; // eax
  AnimClass *v22; // esi
  CampaignScore *v25; // [esp+0h] [ebp-624h]
  DWORD v26[3]; // [esp+14h] [ebp-610h] BYREF
  DWORD v27[3]; // [esp+20h] [ebp-604h] BYREF
  CampaignScore Buffer[28]; // [esp+224h] [ebp-400h] BYREF

  result = BaseDialogProc((SkirmishDialog *)hDlg, a2, a3, (unsigned int)a4); /*0x4f11dc*/
  if ( !result ) /*0x4f11e3*/
  {
    if ( a2 != 273 ) /*0x4f11ef*/
    {
      if ( a2 != 276 ) /*0x4f11f8*/
      {
        if ( a2 == 1175 ) /*0x4f1200*/
        {
          Options::InitDialogControls(hDlg); /*0x4f1208*/
          return 0; /*0x4f1219*/
        }
        return 0; /*0x4f1200*/
      }
      if ( (_WORD)a3 == 5 ) /*0x4f1220*/
      {
        unsigned int v5 = HIWORD(a3); /*0x4f1232*/
        if ( a4 == GetDlgItem(hDlg, 1321) ) /*0x4f1239*/
        {
          v6 = *(wchar_t **)&g_INI_Key_Grey[0][4 * v5 + 8]; /*0x4f123b*/
          DlgItem = GetDlgItem(hDlg, 1649); /*0x4f1247*/
          goto LABEL_11; /*0x4f1247*/
        }
        if ( a4 == GetDlgItem(hDlg, 1007) ) /*0x4f1253*/
        {
          v6 = (wchar_t *)off_823FD4[v5]; /*0x4f1259*/
          DlgItem = GetDlgItem(hDlg, 1650); /*0x4f1266*/
LABEL_11:
          v8 = DlgItem; /*0x4f1268*/
          if ( DlgItem ) /*0x4f126c*/
          {
            StringCSF = GetStringCSF(v6, 0, g_Str_File_GOptions_CPP, 196); /*0x4f1280*/
            SendMessageA(v8, 0x4B2u, 0, (LPARAM)StringCSF); /*0x4f128e*/
            return 0; /*0x4f12a0*/
          }
          return 0; /*0x4f126c*/
        }
      }
      return 0; /*0x4f1253*/
    }
    unsigned int v10 = HIWORD(a3); /*0x4f12a8*/
    WindowLongA = (_DWORD *)GetWindowLongA(hDlg, 8); /*0x4f12b1*/
    if ( (HouseClass_Player[45228] & 1) == 0 ) /*0x4f12be*/
    {
      HouseClass_Player[45228] |= 1u; /*0x4f12ca*/
      *(_DWORD *)&HouseClass_Player[45284] = Timer::GetTicks(); /*0x4f12da*/
      *(_DWORD *)&HouseClass_Player[45292] = 0; /*0x4f12df*/
      atexit(nullsub_14); /*0x4f12e9*/
    }
    if ( (HouseClass_Player[45228] & 2) == 0 ) /*0x4f12f8*/
    {
      HouseClass_Player[45228] |= 2u; /*0x4f1303*/
      Timer::Init((DWORD *)&HouseClass_Player[45300], 0); /*0x4f1308*/
      atexit(nullsub_13); /*0x4f1312*/
    }
    if ( (unsigned __int16)a3 <= 0x521u ) /*0x4f1326*/
    {
  _DWORD *v17; // ecx
      if ( (unsigned __int16)a3 == 1313 ) /*0x4f132c*/
      {
        if ( !v10 ) /*0x4f14dc*/
        {
          *(_DWORD *)&HouseClass_Player[45140] = 5; /*0x4f14e2*/
          *WindowLongA = 1; /*0x4f14ed*/
          return 0; /*0x4f14ff*/
        }
        return 0; /*0x4f14dc*/
      }
      if ( (unsigned __int16)a3 > 0x51Fu ) /*0x4f1338*/
      {
        if ( v10 ) /*0x4f1489*/
          return 0; /*0x4f1489*/
        v12 = (void (__stdcall *)(HWND, int))ShowWindow; /*0x4f148f*/
        ShowWindow(hDlg, 0); /*0x4f1497*/
  _DWORD v30[14]; // [esp+9Ch] [ebp-588h] BYREF
        Options = (const char **)LoadOptions::LoadOptions(v30); /*0x4f14a0*/
        Options::PrepareSaveLoadDlg(Options); /*0x4f14a7*/
        v17 = v30; /*0x4f14ac*/
      }
      else
      {
        if ( (unsigned __int16)a3 != 1311 ) /*0x4f133e*/
        {
          if ( (unsigned __int16)a3 == 1004 ) /*0x4f1346*/
          {
            if ( !v10 ) /*0x4f13a1*/
            {
              *WindowLongA = 1004; /*0x4f13a8*/
              return 0; /*0x4f13ba*/
            }
            return 0; /*0x4f13a1*/
          }
          if ( (unsigned __int16)a3 != 1310 || v10 ) /*0x4f1356*/
            return 0; /*0x4f1356*/
          v12 = (void (__stdcall *)(HWND, int))ShowWindow; /*0x4f135c*/
          ShowWindow(hDlg, 0); /*0x4f1364*/
  _DWORD v29[14]; // [esp+64h] [ebp-5C0h] BYREF
          _DWORD * v13 = LoadOptions::LoadOptions(v29); /*0x4f136a*/
          int v14 = (unsigned __int8)LoadOptions::Run(v13); /*0x4f137a*/
          LoadOptions::Cleanup(v29); /*0x4f137c*/
          if ( (_BYTE)v14 ) /*0x4f1383*/
          {
            *WindowLongA = 1310; /*0x4f138a*/
            return 0; /*0x4f139c*/
          }
LABEL_39:
          v12(hDlg, 5); /*0x4f14bf*/
          UpdateWindow(hDlg); /*0x4f14c5*/
          return 0; /*0x4f14d7*/
        }
        if ( v10 ) /*0x4f13bf*/
          return 0; /*0x4f13bf*/
        if ( *(_DWORD *)&HouseClass_Player[29932] && *(_DWORD *)&HouseClass_Player[29932] != 5 ) /*0x4f13d1*/
        {
  char v31[112]; // [esp+D4h] [ebp-550h] BYREF
          char * v15 = EventClass::AddEvent(v31, *(_DWORD *)(HouseClass_Player.field_0 + 48), 0x1Du); /*0x4f13e5*/
          OptionQueue::PushEntry(&Networking_LastEventIndex, (IUnknown *)v15); /*0x4f13f0*/
          *WindowLongA = 1311; /*0x4f13f6*/
          return 0; /*0x4f1408*/
        }
        v12 = (void (__stdcall *)(HWND, int))ShowWindow; /*0x4f140b*/
        ShowWindow(hDlg, 0); /*0x4f1414*/
        if ( *(_DWORD *)&HouseClass_Player[29932] ) /*0x4f141d*/
          swprintf( /*0x4f1455*/
            (wchar_t *const)Buffer,
            (const size_t)&off_8240B4,
            (const wchar_t *const)(*(_DWORD *)&HouseClass_Player[29924] + 4960),
            v25);
        else
          swprintf( /*0x4f1439*/
            (wchar_t *const)Buffer,
            (const size_t)&off_8240B4,
            (const wchar_t *const)(*(_DWORD *)&HouseClass_Player[29924] + 5082),
            v25);
  _DWORD v28[14]; // [esp+2Ch] [ebp-5F8h] BYREF
        _DWORD * v16 = LoadOptions::LoadOptions(v28); /*0x4f1469*/
        ShowSaveLoadDialog((int)v16, Buffer); /*0x4f1470*/
        v17 = v28; /*0x4f1475*/
      }
      LoadOptions::Cleanup(v17); /*0x4f14b3*/
      Options::InitDialogControls(hDlg); /*0x4f14ba*/
      goto LABEL_39; /*0x4f14ba*/
    }
    if ( (unsigned __int16)a3 == 1314 ) /*0x4f1508*/
    {
      if ( !v10 ) /*0x4f16c2*/
      {
        if ( *(_DWORD *)&HouseClass_Player[29932] != 4 /*0x4f16de*/
          || (*(_DWORD *)&HouseClass_Player[45140] = 2, !dword_B779C4) )
        {
          *(_DWORD *)&HouseClass_Player[45140] = 3; /*0x4f16e0*/
        }
        *WindowLongA = 2; /*0x4f16ea*/
      }
      return 0; /*0x4f16ea*/
    }
    if ( (unsigned __int16)a3 != 1653 && (unsigned __int16)a3 != 1670 || v10 ) /*0x4f1521*/
      return 0; /*0x4f16f1*/
    if ( *(_DWORD *)&HouseClass_Player[29932] == 4 && !*(_DWORD *)&HouseClass_Player[30700] ) /*0x4f153b*/
    {
      eax48 = GetDlgItem(hDlg, 1007); /*0x4f154d*/
      if ( eax48 ) /*0x4f1557*/
      {
        v19 = (IUnknown *)(3 - SendMessageA(eax48, 0x400u, 0, 0)); /*0x4f156e*/
        if ( v19 != *(IUnknown **)&HouseClass_Player[40528] ) /*0x4f1577*/
        {
          if ( Timer::GetRemainingMs((signed int *)&HouseClass_Player[45300]) ) /*0x4f157e*/
          {
            Debug::Log(); /*0x4f15eb*/
          }
          else
          {
            Timer::Init(v26, 0x384u); /*0x4f1590*/
            *(_DWORD *)&HouseClass_Player[45300] = v26[0]; /*0x4f15a4*/
            *(_DWORD *)&HouseClass_Player[45304] = v26[1]; /*0x4f15b0*/
            *(_DWORD *)&HouseClass_Player[45308] = v26[2]; /*0x4f15b6*/
  char v33[112]; // [esp+1B4h] [ebp-470h] BYREF
            char * v21 = EventClass::Add2(v33, *(AnimClass **)(HouseClass_Player.field_0 + 48), 0x24u, v19); /*0x4f15c6*/
            OptionQueue::PushEntry(&Networking_LastEventIndex, (IUnknown *)v21); /*0x4f15d1*/
            Debug::Log(); /*0x4f15dc*/
          }
        }
      }
      eax53 = GetDlgItem(hDlg, 1321); /*0x4f15f9*/
      if ( eax53 ) /*0x4f15fd*/
      {
        v22 = (AnimClass *)(6 - SendMessageA(eax53, 0x400u, 0, 0)); /*0x4f1614*/
        if ( *(AnimClass **)&HouseClass_Player[44564] != v22 ) /*0x4f161d*/
        {
          if ( !Timer::GetRemainingMs((signed int *)&HouseClass_Player[45284]) ) /*0x4f1628*/
          {
            Timer::Init(v27, 0x384u); /*0x4f163a*/
            *(_DWORD *)&HouseClass_Player[45284] = v27[0]; /*0x4f164e*/
            *(_DWORD *)&HouseClass_Player[45288] = v27[1]; /*0x4f1658*/
            *(_DWORD *)&HouseClass_Player[45292] = v27[2]; /*0x4f165e*/
  char v32[112]; // [esp+144h] [ebp-4E0h] BYREF
            char * v24 = EventClass::Add2(v32, *(AnimClass **)(HouseClass_Player.field_0 + 48), 0xDu, (IUnknown *)v22); /*0x4f166f*/
            OptionQueue::PushEntry(&Networking_LastEventIndex, (IUnknown *)v24); /*0x4f167a*/
            *WindowLongA = 1; /*0x4f1687*/
            return 0; /*0x4f1696*/
          }
          Debug::Log(); /*0x4f169e*/
        }
      }
    }
    *WindowLongA = 1; /*0x4f16ab*/
    return 0; /*0x4f16b4*/
  }
  return result; /*0x4f120d*/
}
} // namespace gamemd
}

// 0x558840
namespace gamemd {
int Options::PrepareSaveLoadDlg()
{
{
  this->q004 = (const char *)3; /*0x558840*/
  this->q00C = 0; /*0x558847*/
  return SaveLoadDialog::DlgProc(this);
}
} // namespace gamemd
}

// 0x55FAA0
namespace gamemd {
AbstractClass * * Options::Screen_Save()
{
{
  HWND DlgItem; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v11; // eax
  HWND v12; // eax
  DlgItem = GetDlgItem(this, 1323); /*0x55fab2*/
  if ( DlgItem )
  {
    int v3 = SendMessageA(DlgItem, 0x400u, 0, 0) != 0 ? 2 : 0;
    if ( g_lParam != v3 ) /*0x55fad9*/
    {
      g_lParam = v3; /*0x55fae0*/
      TacticalClass::Initialize(&DataGlobal_87F7E8); /*0x55fae5*/
    }
  }
  v4 = GetDlgItem(this, 1295); /*0x55faf0*/
  if ( v4 ) /*0x55faf4*/
    DataGlobal_A8EB64 = SendMessageA(v4, 0x400u, 0, 0); /*0x55fb02*/
  v5 = GetDlgItem(this, 1537); /*0x55fb0d*/
  if ( v5 ) /*0x55fb11*/
  {
    DataGlobal_A8EB7E = SendMessageA(v5, 0xF0u, 0, 0) == 1; /*0x55fb25*/
    SetGlobalFlag(DataGlobal_A8EB7E); /*0x55fb2b*/
  }
  v6 = GetDlgItem(this, 1540); /*0x55fb36*/
  if ( v6 ) /*0x55fb3a*/
    MCV_DeployModeEnabled = SendMessageA(v6, 0xF0u, 0, 0) == 1; /*0x55fb4e*/
  v7 = GetDlgItem(this, 1538); /*0x55fb59*/
  if ( v7 ) /*0x55fb5d*/
    DataGlobal_A8EB80 = SendMessageA(v7, 0xF0u, 0, 0) == 1; /*0x55fb71*/
  v8 = GetDlgItem(this, 1322); /*0x55fb7d*/
  if ( v8 ) /*0x55fb81*/
    DataGlobal_A8EB70 = 6 - SendMessageA(v8, 0x400u, 0, 0); /*0x55fb96*/
  v9 = GetDlgItem(this, 1327); /*0x55fba2*/
  if ( v9 ) /*0x55fba6*/
  {
    float v13 = (double)SendMessageA(v9, 0x400u, 0, 0) * 0.1; /*0x55fbca*/
    Options::SetScoreVolume((float *)g_GameModeOptions, v13, 0); /*0x55fbcd*/
    if ( DataGlobal_A8EBA0 == 0.0 ) /*0x55fbe3*/
    {
      AbstractClass *v10 = dword_A83D14; /*0x55fbe5*/
      if ( dword_A83D14 == -1 ) /*0x55fbed*/
        v10 = dword_A83D18; /*0x55fbef*/
      Theme::QueueSong((int)&g_BuildingTypeClass_Count, v10); /*0x55fbfa*/
      Theme::Stop(&g_BuildingTypeClass_Count, 0); /*0x55fc06*/
    }
  }
  v11 = GetDlgItem(this, 1330); /*0x55fc11*/
  if ( v11 ) /*0x55fc15*/
  {
    float v14 = (double)SendMessageA(v11, 0x400u, 0, 0) * 0.1; /*0x55fc39*/
    Options::SetSoundVolume((float *)g_GameModeOptions, v14, 0); /*0x55fc3c*/
  }
  v12 = GetDlgItem(this, 1334); /*0x55fc47*/
  if ( v12 ) /*0x55fc4b*/
  {
    float v15 = (double)SendMessageA(v12, 0x400u, 0, 0) * 0.1; /*0x55fc6f*/
    Options::SetVoiceVolume((float *)g_GameModeOptions, v15, 0); /*0x55fc72*/
  }
}
} // namespace gamemd
}

// 0x55FC80
namespace gamemd {
char Options::Screen_Dialog()
{
{
  HWND v0; // eax
  IUnknown *v1; // esi
  HWND v3; // eax
  IUnknown *v4; // esi
  LONG dwNewLong; // [esp+14h] [ebp-8h] BYREF
  LONG v9; // [esp+18h] [ebp-4h] BYREF
  char v7 = g_WTFMode; /*0x55fc92*/
  g_WTFMode = 0; /*0x55fc96*/
  while ( 1 ) /*0x55fd14*/
  {
    while ( 1 ) /*0x55fcca*/
    {
      do /*0x55fcca*/
      {
        qmemcpy(&dword_ABCE70, g_GameModeOptions, 0xB8u); /*0x55fcb1*/
        dwNewLong = -1; /*0x55fcbd*/
        v0 = (HWND)CreateDialog(0); /*0x55fcc1*/
        v1 = v0; /*0x55fcc6*/
      }
      while ( !v0 ); /*0x55fcca*/
      SetWindowLongA(v0, 8, (LONG)&dwNewLong); /*0x55fcd4*/
      Dialog::Show(v1); /*0x55fcd8*/
      while ( dwNewLong < 0 ) /*0x55fce3*/
      {
        if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x55fcec*/
          break; /*0x55fcec*/
  int v2; // ecx
        LOBYTE(v2) = 0; /*0x55fcee*/
        ScreenSaver::Process(v2); /*0x55fcf0*/
      }
      Options::Screen_Save(v1); /*0x55fcff*/
      Dialog::Destroy(v1); /*0x55fd06*/
      if ( dwNewLong != 1485 ) /*0x55fd14*/
        break; /*0x55fd14*/
      v9 = -1; /*0x55fd2d*/
      ScenarioClass::LoadNetworkConfig(&g_GameMode_Current); /*0x55fd31*/
      v3 = (HWND)CreateDialog(0); /*0x55fd42*/
      v4 = v3; /*0x55fd47*/
      if ( v3 ) /*0x55fd4b*/
      {
        SetWindowLongA(v3, 8, (LONG)&v9); /*0x55fd59*/
        Dialog::Show(v4); /*0x55fd5d*/
        while ( v9 < 0 ) /*0x55fd68*/
        {
          if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x55fd71*/
            break; /*0x55fd71*/
  int v5; // ecx
          LOBYTE(v5) = 0; /*0x55fd73*/
          ScreenSaver::Process(v5); /*0x55fd75*/
        }
        Dialog::Destroy(v4); /*0x55fd84*/
      }
    }
    if ( dwNewLong != 1486 ) /*0x55fd1c*/
      break; /*0x55fd1c*/
    ShowHotkeyOptionsDialog(g_GameModeOptions); /*0x55fd1e*/
  }
  ScenarioClass::SaveGameOptions(g_GameModeOptions); /*0x55fd8e*/
  g_WTFMode = v7; /*0x55fd9a*/
  return v7; /*0x55fd97*/
}
} // namespace gamemd
}

// 0x6244E0
namespace gamemd {
int Options::DeleteAndZero()
{
{
  int result; // eax

  int v2 = 0; /*0x6244e4*/
  if ( *this <= 0 ) /*0x6244e9*/
  {
    *this = 0; /*0x62451b*/
  }
  else
  {
    int v3 = 0; /*0x6244ed*/
    do /*0x62450e*/
    {
      int v4 = this->q008 + v3; /*0x6244f4*/
      DeleteAndZero::Alt((void **)(v4 + 8)); /*0x6244f9*/
      DeleteAndZero::Alt((void **)(v4 + 4)); /*0x624501*/
      result = *this; /*0x624506*/
      ++v2; /*0x624508*/
      v3 += 24; /*0x624509*/
    }
    while ( v2 < *this ); /*0x62450e*/
    *this = 0; /*0x624511*/
  }
  return result; /*0x624518*/
}
} // namespace gamemd
}

// 0x6248A0
namespace gamemd {
int Options::EnsureCapacity()
{
{

  int v2 = *this; /*0x6248a5*/
  int v3 = this->q004; /*0x6248a8*/
  if ( 3 * v2 > v3 ) /*0x6248b0*/
    return 0; /*0x6248b3*/
  int v5 = v3 / 2; /*0x6248bf*/
  if ( v3 / 2 < 10 ) /*0x6248c4*/
    v5 = 10; /*0x6248c6*/
  if ( v5 >= v3 ) /*0x6248cd*/
    return 0; /*0x6248d0*/
  void * v6 = __2_YAPAXI_Z(24 * v5); /*0x6248dd*/
  const void * v7 = (const void *)this->q008; /*0x6248e2*/
  int v8 = (int)v6; /*0x6248ea*/
  if ( v7 ) /*0x6248ee*/
    qmemcpy(v6, v7, 24 * *this); /*0x624901*/
  __3_YAXPAX_Z((void *)this->q008); /*0x62490f*/
  this->q008 = v8; /*0x62491b*/
  this->q004 = v5; /*0x62491e*/
  return 1; /*0x6248b2*/
}
} // namespace gamemd
}

// 0x6253B0
namespace gamemd {
int Options::GrowBuffer()
{
{

  int v2 = *this; /*0x6253b4*/
  if ( *this < this->q004 ) /*0x6253bb*/
    return 0; /*0x6253bd*/
  int v4 = 2 * v2; /*0x6253c4*/
  int v6 = 2 * v2; /*0x6253cb*/
  if ( 2 * v2 < 10 ) /*0x6253cf*/
  {
    v6 = 10; /*0x6253d1*/
    v4 = 10; /*0x6253d9*/
  }
  void * v5 = __2_YAPAXI_Z(4 * v4); /*0x6253ec*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x6253fa*/
  if ( this->q008 ) /*0x625403*/
  {
    qmemcpy(v5, (const void *)this->q008, 4 * *this); /*0x625418*/
    v4 = v6; /*0x625421*/
  }
  __3_YAXPAX_Z((void *)this->q008); /*0x625429*/
  this->q004 = v4; /*0x625431*/
  this->q008 = (int)v5; /*0x625434*/
  return 1; /*0x6253bf*/
}
} // namespace gamemd
}

// 0x6254D0
namespace gamemd {
int Options::ReadOptionValue()
{
{

  int v2 = *this; /*0x6254d5*/
  int v3 = this->q004; /*0x6254d8*/
  if ( 3 * v2 > v3 ) /*0x6254e0*/
    return 0; /*0x6254e3*/
  int v5 = v3 / 2; /*0x6254ef*/
  if ( v3 / 2 < 10 ) /*0x6254f4*/
    v5 = 10; /*0x6254f6*/
  if ( v5 >= v3 ) /*0x6254fd*/
    return 0; /*0x625500*/
  void * v6 = __2_YAPAXI_Z(20 * v5); /*0x62550d*/
  const void * v7 = (const void *)this->q008; /*0x625512*/
  int v8 = (int)v6; /*0x62551a*/
  if ( v7 ) /*0x62551e*/
    qmemcpy(v6, v7, 20 * *this); /*0x625531*/
  __3_YAXPAX_Z((void *)this->q008); /*0x62553f*/
  this->q008 = v8; /*0x62554b*/
  this->q004 = v5; /*0x62554e*/
  return 1; /*0x6254e2*/
}
} // namespace gamemd
}

// 0x625560
namespace gamemd {
AbstractClass * * Options::DestroyComposite(char a2)
{
{
  _DWORD *i; // ecx

  if ( this->u32_2C ) /*0x625563*/
  {
    __3_YAXPAX_Z(*((void **)&this->u32_41)); /*0x62556b*/
    this->u32_2C = 0; /*0x625573*/
  }
  for ( i = (_DWORD *)this->ptr_38; i; i = (_DWORD *)this->ptr_38 ) /*0x62557f*/
  {
    AbstractClass *v4 = i; /*0x625581*/
    AbstractClass *v5 = 0; /*0x625583*/
    while ( i != v4 ) /*0x62558b*/
    {
      v5 = v4; /*0x62558d*/
      v4 = (_DWORD *)*v4; /*0x62558f*/
      if ( !v4 ) /*0x625593*/
        goto LABEL_12; /*0x625593*/
    }
    if ( v5 ) /*0x62559d*/
      *v5 = *v4; /*0x6255a1*/
    else
      this->ptr_38 = *v4; /*0x6255a7*/
    __3_YAXPAX_Z(v4); /*0x6255ab*/
LABEL_12:
    ; /*0x6255b3*/
  }
  AbstractClass *v6 = (void *)this->q010; /*0x6255bb*/
  if ( v6 ) /*0x6255c0*/
  {
    DeleteAndZero::Alt(this->q010); /*0x6255c4*/
    __3_YAXPAX_Z(v6); /*0x6255ca*/
  }
  if ( (a2 & 1) != 0 ) /*0x6255d9*/
    __3_YAXPAX_Z(this); /*0x6255dc*/
  return this; /*0x6255e6*/
}
} // namespace gamemd
}

// 0x6255F0
namespace gamemd {
void * Options::RebuildDropdownList(ObjectClass * aP1)
{
{
  ObjectClass *v2; // ebp
  SessionClass *v3; // edi
  ReferenceCounted *v5; // esi
  ReferenceCounted v6; // eax
  ReferenceCounted v13; // edi
  wchar_t **v14; // ecx
  CampaignScore *v19; // [esp+1Ch] [ebp-14h] BYREF
  v2 = aP1; /*0x6255f5*/
  v3 = (SessionClass *)this; /*0x6255fb*/
  int v4 = 0; /*0x625600*/
  *this = *(_DWORD *)aP1->__pad_0; /*0x625602*/
  v5 = (ReferenceCounted *)(this + 2); /*0x625607*/
  this->q004 = *(_DWORD *)&aP1->__pad_0[4]; /*0x62560a*/
  this->q008 = 0; /*0x625615*/
  this->q00C = 0; /*0x625617*/
  this->q004 = 0; /*0x62561a*/
  unknown_libname_74(&v19); /*0x62561d*/
  void *v20; // [esp+20h] [ebp-10h] BYREF
  unknown_libname_74(&v20); /*0x625626*/
  int v18 = 0; /*0x62562e*/
  int v21 = -1; /*0x625632*/
  int v23 = -1; /*0x625636*/
  v6 = *v5; /*0x62563a*/
  int v22 = 0; /*0x62563c*/
  if ( *(int *)&v6 > 0 ) /*0x625642*/
  {
    int v7 = 0; /*0x625644*/
    do /*0x625665*/
    {
      int v8 = *(_DWORD *)&v5[2] + v7; /*0x62564b*/
      DeleteAndZero::Alt((void **)(v8 + 8)); /*0x625650*/
      DeleteAndZero::Alt((void **)(v8 + 4)); /*0x625658*/
      ++v4; /*0x62565f*/
      v7 += 24; /*0x625660*/
    }
    while ( v4 < *(_DWORD *)v5 ); /*0x625665*/
    v2 = aP1; /*0x625667*/
    v3 = (SessionClass *)this; /*0x62566b*/
  }
  *v5 = 0; /*0x62566f*/
  int v9 = *(_DWORD *)&v2->__pad_0[8]; /*0x625675*/
  int v10 = 0; /*0x625678*/
  if ( v9 > 0 ) /*0x62567c*/
  {
    int v11 = 0; /*0x625682*/
    int v16 = 0; /*0x625684*/
    while ( 1 ) /*0x62568e*/
    {
      if ( v11 >= 0 && v10 < v9 ) /*0x625694*/
      {
        int v12 = v11 + v2->uniqueId; /*0x625699*/
        v18 = *(_DWORD *)v12; /*0x6256a5*/
        WideString::Reassign_Alt((void **)&v19, (const wchar_t **)(v12 + 4)); /*0x6256a9*/
        WideString::Reassign_Alt(&v20, (const wchar_t **)(v12 + 8)); /*0x6256b6*/
        v21 = *(_DWORD *)(v12 + 12); /*0x6256be*/
        v22 = *(_DWORD *)(v12 + 16); /*0x6256c5*/
        v23 = *(_DWORD *)(v12 + 20); /*0x6256cc*/
      }
      v13 = *v5; /*0x6256d0*/
      if ( *(_DWORD *)v5 >= *(_DWORD *)&v5[1] ) /*0x6256d7*/
        DynamicVector::GrowCapacity((int *)v5); /*0x6256db*/
      if ( *(_DWORD *)v5 >= *(_DWORD *)&v5[1] ) /*0x6256e7*/
        DynamicVector::GrowCapacity((int *)v5); /*0x6256eb*/
      if ( *(_DWORD *)&v13 < *(_DWORD *)v5 ) /*0x6256f4*/
        memcpy( /*0x625713*/
          (void *)(*(_DWORD *)&v5[2] + 8 * (3 * *(_DWORD *)&v13 + 3)),
          (const void *)(*(_DWORD *)&v5[2] + 24 * *(_DWORD *)&v13),
          24 * *(_DWORD *)v5 - 24 * *(_DWORD *)&v13);
      v14 = (wchar_t **)(*(_DWORD *)&v5[2] + 24 * *(_DWORD *)&v13); /*0x625721*/
      if ( v14 ) /*0x625726*/
        Struct::WideStringCopy(v14, (ObjectClass *)&v18); /*0x62572d*/
      ++v10; /*0x625739*/
      ++*(_DWORD *)v5; /*0x62573a*/
      v11 = v16 + 24; /*0x625740*/
      v9 = *(_DWORD *)&aP1->__pad_0[8]; /*0x625743*/
      v16 += 24; /*0x625746*/
      if ( v10 >= v9 ) /*0x62574c*/
        break; /*0x62574c*/
      v2 = aP1; /*0x62568a*/
    }
    v3 = (SessionClass *)this; /*0x625752*/
  }
  DeleteAndZero::Alt(&v20); /*0x62575a*/
  DeleteAndZero::Alt((void **)&v19); /*0x625763*/
  return v3->GameMode; /*0x62576a*/
}
} // namespace gamemd
}

// 0x625A20
namespace gamemd {
int Options::SaveOptionValue()
{
{

  int v2 = *this; /*0x625a24*/
  if ( *this < this->q004 ) /*0x625a2b*/
    return 0; /*0x625a2d*/
  int v4 = 2 * v2; /*0x625a33*/
  if ( 2 * v2 < 10 ) /*0x625a3b*/
    v4 = 10; /*0x625a3d*/
  void * v5 = __2_YAPAXI_Z(20 * v4); /*0x625a4f*/
  memset(v5, 0, 4 * ((unsigned int)(20 * v4) >> 2)); /*0x625a5a*/
  int v7 = (int)v5; /*0x625a64*/
  const void * v6 = (const void *)this->q008; /*0x625a6a*/
  if ( v6 ) /*0x625a6f*/
    qmemcpy(v5, v6, 20 * *this); /*0x625a80*/
  __3_YAXPAX_Z((void *)this->q008); /*0x625a8d*/
  this->q004 = v4; /*0x625a99*/
  this->q008 = v7; /*0x625a9c*/
  return 1; /*0x625a2f*/
}
} // namespace gamemd
}

// 0x4F1720
namespace gamemd {
HWND Options::InitDialogControls()
{
{
    HWND result;
    HWND v3;
    IUnknown *v4;
    LPARAM v5;
    IUnknown *v6;
    const char **Options;
    HWND DlgItem;
    unsigned char v9;
    int v10[14];
    result = (HWND)g_GameMode_Current[0];
    if ( !g_GameMode_Current[0] || g_GameMode_Current[0] == 5 )
  {
    Options = (const char **)LoadOptions::LoadOptions(v10);
    v9 = LoadOptions::Check(Options);
    LoadOptions::Cleanup(v10);
    DlgItem = GetDlgItem(this, 1310);
    if ( DlgItem )
    EnableWindow(DlgItem, v9);
    result = GetDlgItem(this, 1312);
    if ( result )
    return (HWND)EnableWindow(result, v9);
  }
    else if ( g_GameMode_Current[0] == 4 )
  {
    result = (HWND)MuteSWLaunches;
    if ( !MuteSWLaunches )
    {
    v3 = GetDlgItem(this, 1007);
    v4 = (IUnknown *)v3;
    if ( v3 )
      {
    v5 = 3 - (int)g_NetworkHostState;
    SendMessageA(v3, 0x406u, 1u, 196608);
    SendMessageA((HWND)v4, 0x405u, 1u, v5);
      }
    result = GetDlgItem(this, 1321);
    v6 = (IUnknown *)result;
    if ( result )
      {
    SendMessageA(result, 0x406u, 1u, 393216);
    return (HWND)SendMessageA((HWND)v6, 0x405u, 1u, 6 - *(int *)g_GameModeOptions);
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x5FA4A0
namespace gamemd {
void Options::SetScoreVolume(float volume, int pad)
{
{
    double v4;
    int v5;
    int v6;
    if ( volume >= 1.0 )
    v4 = 1.0;
    else
    v4 = volume;
    *(float *)&this->__pad_34[12] = v4;
    v5 = Math::RoundToInt(v4 * 16384.0);
    EndBufferMixer(*(int **)&DataGlobal_87C374[9168], v5);
    v6 = Math::RoundToInt(*(float *)&this->__pad_34[12] * 255.0);
    GameSettings::SetScoreVolume(&g_BuildingTypeClass_Count, v6);
    Debug::Log();
}
}
} // namespace gamemd

// 0x5FA510
namespace gamemd {
void Options::SetSoundVolume(float volume, int pad)
{
{
    double v3;
    int v4;
    if ( volume >= 1.0 )
    v3 = 1.0;
    else
    v3 = volume;
    *(float *)&this->__pad_34[4] = v3;
    v4 = Math::RoundToInt(v3 * 16384.0);
    EndBufferMixer(*(int **)&DataGlobal_87C374[9172], v4);
    if ( (char)pad )
    PlayVocClass(*(int *)(*(int *)&DataGlobal_87C374[44652] + 1808), 0x2000, 1.0, 0);
    Debug::Log();
}
}
} // namespace gamemd

// 0x5FA590
namespace gamemd {
void Options::SetVoiceVolume(float volume, int pad)
{
{
    double v4;
    int v5;
    int v6;
    if ( volume >= 1.0 )
    v4 = 1.0;
    else
    v4 = volume;
    *(float *)&this->__pad_34[8] = v4;
    v5 = Math::RoundToInt(v4 * 255.0);
    ThemeClass::GetField(v5);
    v6 = Math::RoundToInt(*(float *)&this->__pad_34[8] * 16384.0);
    EndBufferMixer(*(int **)&DataGlobal_87C374[9164], v6);
    if ( (char)pad )
    PlayVocClass(*(int *)(*(int *)&DataGlobal_87C374[44652] + 1808), 0x2000, *(float *)&this->__pad_34[8], 0);
    Debug::Log();
}
}
} // namespace gamemd

// 0x618D40
namespace gamemd {
int Options::DialogProc(CCINIClass hWnd)
{
{
    int *v4;
    int v5;
    int *v6;
    int *v7;
    int *v8;
    int v9;
    unsigned int v10;
    int v11;
    int v12;
    float v13;
    unsigned int v14;
    int v15;
    int v16;
    LONG (__stdcall *v17)(HWND, int);
    int *v18;
    int *v19;
    int v20;
    int v21;
    int v22;
    unsigned int v23;
    int *v24;
    int *v25;
    void (__thiscall ***v26)(int, int);
    int v27;
    int result;
    int v29;
    int v30;
    int v31;
    int v32;
    int v33;
    int v34;
    int *v35;
    int *v36;
    int v37;
    int *v38;
    int *v39;
    int v40;
    int v41;
    int v42;
    int v43;
    int v44;
    int v45;
    int v46;
    int v47;
}
} // namespace gamemd
}

// 0x624460
namespace gamemd {
void Options::ClearComboBoxes()
{
{
    this->DeleteAndZero_2.Alt();
    this->DeleteAndZero_1.Alt();
}
}
} // namespace gamemd
