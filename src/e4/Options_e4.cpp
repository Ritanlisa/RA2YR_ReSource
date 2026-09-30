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
#include "e4/classes/LoadOptions_e4.hpp"
#include "e4/classes/OverlayTypeClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/PageUserCommandClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x4F11B0
namespace gamemd {
int Options::DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND a4)
{

  CampaignScore ** result;
  unsigned int v5; // edi
  wchar_t *v6; // edi
  HWND DlgItem; // eax
  HWND v8; // esi
  wchar_t *StringCSF; // eax
  unsigned int v10; // ebx
  unsigned int *WindowLongA; // ebp
  void (*v12)(HWND, int); // edi
  unsigned int *v13; // eax
  int v14; // ebx
  char *v15; // eax
  unsigned int *v16; // eax
  unsigned int *v17; // ecx
  const char **Options; // eax
  HWND eax48; // eax
  IUnknown *v19; // edi
  char *v21; // eax
  HWND eax53; // eax
  AnimClass *v22; // esi
  char *v24; // eax
  CampaignScore *v25; // [esp+0h] [ebp-624h]
  DWORD v26[3]; // [esp+14h] [ebp-610h] BYREF
  DWORD v27[3]; // [esp+20h] [ebp-604h] BYREF
  unsigned int v28[14]; // [esp+2Ch] [ebp-5F8h] BYREF
  unsigned int v29[14]; // [esp+64h] [ebp-5C0h] BYREF
  unsigned int v30[14]; // [esp+9Ch] [ebp-588h] BYREF
  char v31[112]; // [esp+D4h] [ebp-550h] BYREF
  char v32[112]; // [esp+144h] [ebp-4E0h] BYREF
  char v33[112]; // [esp+1B4h] [ebp-470h] BYREF
  CampaignScore Buffer[28]; // [esp+224h] [ebp-400h] BYREF

  result = (gamemd::CampaignScore **)((int)(BaseDialogProc((SkirmishDialog *)hDlg, a2, a3, (unsigned int)a4)));
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
      if ( (unsigned short)a3 == 5 ) /*0x4f1220*/
      {
        v5 = IDA_HIWORD(a3); /*0x4f1232*/
        if ( a4 == GetDlgItem(hDlg, 1321) ) /*0x4f1239*/
        {
          v6 = *(wchar_t **)&g_INI_Key_Grey.__pad_0[4 * v5 + 8]; /*0x4f123b*/
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
            StringCSF = (wchar_t *)(GetStringCSF(v6, 0, g_Str_File_GOptions_CPP, 196));
            SendMessageA(v8, 0x4B2u, 0, (LPARAM)StringCSF); /*0x4f128e*/
            return 0; /*0x4f12a0*/
          }
          return 0; /*0x4f126c*/
        }
      }
      return 0; /*0x4f1253*/
    }
    v10 = IDA_HIWORD(a3); /*0x4f12a8*/
    WindowLongA = (unsigned int *)GetWindowLongA(hDlg, 8); /*0x4f12b1*/
    if ( (HouseClass_Player.__pad_5568[23364] & 1) == 0 ) /*0x4f12be*/
    {
      HouseClass_Player.__pad_5568[23364] |= 1u; /*0x4f12ca*/
      *(unsigned int *)&HouseClass_Player.__pad_5568[23420] = this->Timer::GetTicks(); /*0x4f12da*/
      *(unsigned int *)&HouseClass_Player.__pad_5568[23428] = 0; /*0x4f12df*/
      atexit(nullsub_14); /*0x4f12e9*/
    }
    if ( (HouseClass_Player.__pad_5568[23364] & 2) == 0 ) /*0x4f12f8*/
    {
      HouseClass_Player.__pad_5568[23364] |= 2u; /*0x4f1303*/
      Timer::Init((DWORD *)&HouseClass_Player.__pad_5568[23436], 0); /*0x4f1308*/
      atexit(nullsub_13); /*0x4f1312*/
    }
    if ( (uint16_t)a3 <= 0x521u ) /*0x4f1326*/
    {
      if ( (uint16_t)a3 == 1313 ) /*0x4f132c*/
      {
        if ( !v10 ) /*0x4f14dc*/
        {
          *(unsigned int *)&HouseClass_Player.__pad_5568[23276] = 5; /*0x4f14e2*/
          *WindowLongA = 1; /*0x4f14ed*/
          return 0; /*0x4f14ff*/
        }
        return 0; /*0x4f14dc*/
      }
      if ( (uint16_t)a3 > 0x51Fu ) /*0x4f1338*/
      {
        if ( v10 ) /*0x4f1489*/
          return 0; /*0x4f1489*/
        v12 = (void (*)(HWND, int))ShowWindow; /*0x4f148f*/
        ShowWindow(hDlg, 0); /*0x4f1497*/
        Options = (const char **)LoadOptions::LoadOptions(v30); /*0x4f14a0*/
        Options::PrepareSaveLoadDlg(Options); /*0x4f14a7*/
        v17 = v30; /*0x4f14ac*/
      }
      else
      {
        if ( (uint16_t)a3 != 1311 ) /*0x4f133e*/
        {
          if ( (uint16_t)a3 == 1004 ) /*0x4f1346*/
          {
            if ( !v10 ) /*0x4f13a1*/
            {
              *WindowLongA = 1004; /*0x4f13a8*/
              return 0; /*0x4f13ba*/
            }
            return 0; /*0x4f13a1*/
          }
          if ( (uint16_t)a3 != 1310 || v10 ) /*0x4f1356*/
            return 0; /*0x4f1356*/
          v12 = (void (*)(HWND, int))ShowWindow; /*0x4f135c*/
          ShowWindow(hDlg, 0); /*0x4f1364*/
          v13 = LoadOptions::LoadOptions(v29); /*0x4f136a*/
          v14 = (uint8_t)LoadOptions::Run(v13); /*0x4f137a*/
          ((LoadOptions *)(v29))->Cleanup(); /*0x4f137c*/
          if ( (unsigned char)v14 ) /*0x4f1383*/
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
        if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8068] && *(unsigned int *)&HouseClass_Player.__pad_5568[8068] != 5 ) /*0x4f13d1*/
        {
          v15 = EventClass::AddEvent(v31, *(unsigned int *)(HouseClass_Player.field_0 + 48), 0x1Du); /*0x4f13e5*/
          OptionQueue::PushEntry(&Networking_LastEventIndex, (IUnknown *)v15); /*0x4f13f0*/
          *WindowLongA = 1311; /*0x4f13f6*/
          return 0; /*0x4f1408*/
        }
        v12 = (void (*)(HWND, int))ShowWindow; /*0x4f140b*/
        ShowWindow(hDlg, 0); /*0x4f1414*/
        if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8068] ) /*0x4f141d*/
          swprintf( /*0x4f1455*/
            (wchar_t *const)Buffer,
            (const size_t)&off_8240B4,
            (const wchar_t *const)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 4960),
            v25);
        else
          swprintf( /*0x4f1439*/
            (wchar_t *const)Buffer,
            (const size_t)&off_8240B4,
            (const wchar_t *const)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 5082),
            v25);
        v16 = (unsigned int *)(LoadOptions::LoadOptions(v28));
        ShowSaveLoadDialog((int)v16, Buffer); /*0x4f1470*/
        v17 = v28; /*0x4f1475*/
      }
      ((LoadOptions *)(v17))->Cleanup(); /*0x4f14b3*/
      Options::InitDialogControls(hDlg); /*0x4f14ba*/
      goto LABEL_39; /*0x4f14ba*/
    }
    if ( (uint16_t)a3 == 1314 ) /*0x4f1508*/
    {
      if ( !v10 ) /*0x4f16c2*/
      {
        if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8068] != 4 /*0x4f16de*/
          || (*(unsigned int *)&HouseClass_Player.__pad_5568[23276] = 2, !dword_B779C4) )
        {
          *(unsigned int *)&HouseClass_Player.__pad_5568[23276] = 3; /*0x4f16e0*/
        }
        *WindowLongA = 2; /*0x4f16ea*/
      }
      return 0; /*0x4f16ea*/
    }
    if ( (uint16_t)a3 != 1653 && (uint16_t)a3 != 1670 || v10 ) /*0x4f1521*/
      return 0; /*0x4f16f1*/
    if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8068] == 4 && !*(unsigned int *)&HouseClass_Player.__pad_5568[8836] ) /*0x4f153b*/
    {
      eax48 = GetDlgItem(hDlg, 1007); /*0x4f154d*/
      if ( eax48 ) /*0x4f1557*/
      {
        v19 = (IUnknown *)(3 - SendMessageA(eax48, 0x400u, 0, 0)); /*0x4f156e*/
        if ( v19 != *(IUnknown **)&HouseClass_Player.__pad_5568[18664] ) /*0x4f1577*/
        {
          if ( Timer::GetRemainingMs((signed int *)&HouseClass_Player.__pad_5568[23436]) ) /*0x4f157e*/
          {
            this->Debug::Log(); /*0x4f15eb*/
          }
          else
          {
            Timer::Init(v26, 0x384u); /*0x4f1590*/
            *(unsigned int *)&HouseClass_Player.__pad_5568[23436] = v26[0]; /*0x4f15a4*/
            *(unsigned int *)&HouseClass_Player.__pad_5568[23440] = v26[1]; /*0x4f15b0*/
            *(unsigned int *)&HouseClass_Player.__pad_5568[23444] = v26[2]; /*0x4f15b6*/
            v21 = ((EventClass *)(v33))->Add2(*(AnimClass **)(HouseClass_Player.field_0 + 48), 0x24u, v19); /*0x4f15c6*/
            OptionQueue::PushEntry(&Networking_LastEventIndex, (IUnknown *)v21); /*0x4f15d1*/
            this->Debug::Log(); /*0x4f15dc*/
          }
        }
      }
      eax53 = GetDlgItem(hDlg, 1321); /*0x4f15f9*/
      if ( eax53 ) /*0x4f15fd*/
      {
        v22 = (AnimClass *)(6 - SendMessageA(eax53, 0x400u, 0, 0)); /*0x4f1614*/
        if ( *(AnimClass **)&HouseClass_Player.__pad_5568[22700] != v22 ) /*0x4f161d*/
        {
          if ( !Timer::GetRemainingMs((signed int *)&HouseClass_Player.__pad_5568[23420]) ) /*0x4f1628*/
          {
            Timer::Init(v27, 0x384u); /*0x4f163a*/
            *(unsigned int *)&HouseClass_Player.__pad_5568[23420] = v27[0]; /*0x4f164e*/
            *(unsigned int *)&HouseClass_Player.__pad_5568[23424] = v27[1]; /*0x4f1658*/
            *(unsigned int *)&HouseClass_Player.__pad_5568[23428] = v27[2]; /*0x4f165e*/
            v24 = ((EventClass *)(v32))->Add2(*(AnimClass **)(HouseClass_Player.field_0 + 48), 0xDu, (IUnknown *)v22); /*0x4f166f*/
            OptionQueue::PushEntry(&Networking_LastEventIndex, (IUnknown *)v24); /*0x4f167a*/
            *WindowLongA = 1; /*0x4f1687*/
            return 0; /*0x4f1696*/
          }
          this->Debug::Log(); /*0x4f169e*/
        }
      }
    }
    *WindowLongA = 1; /*0x4f16ab*/
    return 0; /*0x4f16b4*/
  }
  return (int)(result);

}
}
// 0x558840
namespace gamemd {
void Options::PrepareSaveLoadDlg(const char ** dwNewLong)
{

  *(dwNewLong + 1) = (const char *)3; /*0x558840*/
  *(dwNewLong + 3) = 0; /*0x558847*/
  return SaveLoadDialog::DlgProc(dwNewLong);

}
}
// 0x55FAA0
namespace gamemd {
AbstractClass * * Options::Screen_Save()
{

  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  float v13; // [esp+0h] [ebp-18h]
  float v14; // [esp+0h] [ebp-18h]
  float v15; // [esp+0h] [ebp-18h]

  v2 = ((int (*)(void *, int))GetDlgItem)(this, 1323); /*0x55fab2*/
  if ( v2 )
  {
    v3 = ((int (*)(int, int, unsigned int, unsigned int))SendMessageA)(v2, 1024, 0, 0) != 0 ? 2 : 0;
    if ( g_abs_87F7E8[539876] != v3 ) /*0x55fad9*/
    {
      g_abs_87F7E8[539876] = v3; /*0x55fae0*/
      TacticalClass::Initialize(g_abs_87F7E8); /*0x55fae5*/
    }
  }
  v4 = ((int (*)(void *, int))GetDlgItem)(this, 1295); /*0x55faf0*/
  if ( v4 ) /*0x55faf4*/
    g_abs_87F7E8[539871] = ((int (*)(int, int, unsigned int, unsigned int))SendMessageA)(v4, 1024, 0, 0); /*0x55fb02*/
  v5 = ((int (*)(void *, int))GetDlgItem)(this, 1537); /*0x55fb0d*/
  if ( v5 ) /*0x55fb11*/
  {
    IDA_BYTE2(g_abs_87F7E8[539877]) = ((int (*)(int, int, unsigned int, unsigned int))SendMessageA)(v5, 240, 0, 0) == 1; /*0x55fb25*/
    SetGlobalFlag(SBYTE2(g_abs_87F7E8[539877])); /*0x55fb2b*/
  }
  v6 = ((int (*)(void *, int))GetDlgItem)(this, 1540); /*0x55fb36*/
  if ( v6 ) /*0x55fb3a*/
    IDA_HIBYTE(g_abs_87F7E8[539877]) = ((int (*)(int, int, unsigned int, unsigned int))SendMessageA)(v6, 240, 0, 0) == 1; /*0x55fb4e*/
  v7 = ((int (*)(void *, int))GetDlgItem)(this, 1538); /*0x55fb59*/
  if ( v7 ) /*0x55fb5d*/
    IDA_LOBYTE(g_abs_87F7E8[539878]) = ((int (*)(int, int, unsigned int, unsigned int))SendMessageA)(v7, 240, 0, 0) == 1; /*0x55fb71*/
  v8 = ((int (*)(void *, int))GetDlgItem)(this, 1322); /*0x55fb7d*/
  if ( v8 ) /*0x55fb81*/
    g_abs_87F7E8[539874] = 6 - ((int (*)(int, int, unsigned int, unsigned int))SendMessageA)(v8, 1024, 0, 0); /*0x55fb96*/
  v9 = ((int (*)(void *, int))GetDlgItem)(this, 1327); /*0x55fba2*/
  if ( v9 ) /*0x55fba6*/
  {
    v13 = (double)((int (*)(int, int, unsigned int, unsigned int))SendMessageA)(v9, 1024, 0, 0) * 0.1; /*0x55fbca*/
    Audio::SetScoreVolume((float *)&g_abs_87F7E8[539870], v13, 0); /*0x55fbcd*/
    if ( *(float *)&g_abs_87F7E8[539886] == 0.0 ) /*0x55fbe3*/
    {
      v10 = g_abs_87F7E8[528715]; /*0x55fbe5*/
      if ( g_abs_87F7E8[528715] == -1 ) /*0x55fbed*/
        v10 = g_abs_87F7E8[528716]; /*0x55fbef*/
      Theme::QueueSong((int)&g_abs_87F7E8[528714], v10); /*0x55fbfa*/
      Theme::Stop(&g_abs_87F7E8[528714], 0); /*0x55fc06*/
    }
  }
  v11 = ((int (*)(void *, int))GetDlgItem)(this, 1330); /*0x55fc11*/
  if ( v11 ) /*0x55fc15*/
  {
    v14 = (double)((int (*)(int, int, unsigned int, unsigned int))SendMessageA)(v11, 1024, 0, 0) * 0.1; /*0x55fc39*/
    Audio::SetSoundVolume((float *)&g_abs_87F7E8[539870], v14, 0); /*0x55fc3c*/
  }
  v12 = ((int (*)(void *, int))GetDlgItem)(this, 1334); /*0x55fc47*/
  if ( v12 ) /*0x55fc4b*/
  {
    v15 = (double)((int (*)(int, int, unsigned int, unsigned int))SendMessageA)(v12, 1024, 0, 0) * 0.1; /*0x55fc6f*/
    Audio::SetVoiceVolume((float *)&g_abs_87F7E8[539870], v15, 0); /*0x55fc72*/
  }

}
}
// 0x55FC80
namespace gamemd {
char Options::Screen_Dialog()
{

  void *Dialog; // eax
  void *v1; // esi
  int v2; // ecx
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  char v7; // [esp+13h] [ebp-9h]
  int dwNewLong; // [esp+14h] [ebp-8h] BYREF
  int v9; // [esp+18h] [ebp-4h] BYREF

  v7 = g_abs_87F7E8[539758]; /*0x55fc92*/
  IDA_LOBYTE(g_abs_87F7E8[539758]) = 0; /*0x55fc96*/
  while ( 1 ) /*0x55fd14*/
  {
    while ( 1 ) /*0x55fcca*/
    {
      do /*0x55fcca*/
      {
        qmemcpy(&((unsigned int *)(dword_A8ED54))[47175], &g_abs_87F7E8[539870], 0xB8u); /*0x55fcb1*/
        dwNewLong = -1; /*0x55fcbd*/
        Dialog = (void *)CreateDialog(0); /*0x55fcc1*/
        v1 = Dialog; /*0x55fcc6*/
      }
      while ( !Dialog ); /*0x55fcca*/
      ((void (*)(void *, int, int *))SetWindowLongA)(Dialog, 8, &dwNewLong); /*0x55fcd4*/
      Dialog::Show(v1); /*0x55fcd8*/
      while ( dwNewLong < 0 ) /*0x55fce3*/
      {
        if ( this->Dialog::PumpMessages() == 1 ) /*0x55fcec*/
          break; /*0x55fcec*/
        IDA_LOBYTE(v2) = 0; /*0x55fcee*/
        ScreenSaver::Process(v2); /*0x55fcf0*/
      }
      Options::Screen_Save(v1); /*0x55fcff*/
      Dialog::Destroy(v1); /*0x55fd06*/
      if ( dwNewLong != 1485 ) /*0x55fd14*/
        break; /*0x55fd14*/
      v9 = -1; /*0x55fd2d*/
      ScenarioClass::LoadNetworkConfig((int)&g_abs_87F7E8[536212]); /*0x55fd31*/
      v3 = CreateDialog(0); /*0x55fd42*/
      v4 = v3; /*0x55fd47*/
      if ( v3 ) /*0x55fd4b*/
      {
        ((void (*)(int, int, int *))SetWindowLongA)(v3, 8, &v9); /*0x55fd59*/
        Dialog::Show(v4); /*0x55fd5d*/
        while ( v9 < 0 ) /*0x55fd68*/
        {
          if ( this->Dialog::PumpMessages() == 1 ) /*0x55fd71*/
            break; /*0x55fd71*/
          IDA_LOBYTE(v5) = 0; /*0x55fd73*/
          ScreenSaver::Process(v5); /*0x55fd75*/
        }
        Dialog::Destroy(v4); /*0x55fd84*/
      }
    }
    if ( dwNewLong != 1486 ) /*0x55fd1c*/
      break; /*0x55fd1c*/
    ShowHotkeyOptionsDialog(); /*0x55fd1e*/
  }
  ScenarioClass::SaveGameOptions((int)&g_abs_87F7E8[539870]); /*0x55fd8e*/
  IDA_LOBYTE(g_abs_87F7E8[539758]) = v7; /*0x55fd9a*/
  return v7; /*0x55fd97*/

}
}
// 0x6244E0
namespace gamemd {
int Options::DeleteAndZero()
{

  int v2; // ebx
  int v3; // ebp
  int v4; // esi
  int result; // eax

  v2 = 0; /*0x6244e4*/
  if ( *this <= 0 ) /*0x6244e9*/
  {
    *(unsigned int *)this = 0; /*0x62451b*/
  }
  else
  {
    v3 = 0; /*0x6244ed*/
    do /*0x62450e*/
    {
      v4 = (int)(*((char *)this + 2) + v3);
      DeleteAndZero::Alt((void **)(v4 + 8)); /*0x6244f9*/
      DeleteAndZero::Alt((void **)(v4 + 4)); /*0x624501*/
      result = *this; /*0x624506*/
      ++v2; /*0x624508*/
      v3 += 24; /*0x624509*/
    }
    while ( v2 < *this ); /*0x62450e*/
    *(unsigned int *)this = 0; /*0x624511*/
  }
  return result; /*0x624518*/

}
}
// 0x6248A0
namespace gamemd {
void Options::EnsureCapacity()
{

  int v2; // eax
  int v3; // ecx
  int v5; // ebx
  void *v6; // eax
  const void *v7; // esi
  int v8; // [esp+8h] [ebp-4h]

  v2 = (int)(*this);
  v3 = *((char *)this + 1); /*0x6248a8*/
  if ( 3 * v2 > v3 ) /*0x6248b0*/
    return 0; /*0x6248b3*/
  v5 = v3 / 2; /*0x6248bf*/
  if ( v3 / 2 < 10 ) /*0x6248c4*/
    v5 = 10; /*0x6248c6*/
  if ( v5 >= v3 ) /*0x6248cd*/
    return 0; /*0x6248d0*/
  v6 = RA2_OPNEW(24 * v5); /*0x6248dd*/
  v7 = (const void *)*((char *)this + 2); /*0x6248e2*/
  v8 = (int)v6; /*0x6248ea*/
  if ( v7 ) /*0x6248ee*/
    qmemcpy(v6, v7, 24 * *this); /*0x624901*/
  RA2_OPDEL((void *)*((char *)this + 2)); /*0x62490f*/
  *((char *)this + 2) = v8; /*0x62491b*/
  *((char *)this + 1) = v5; /*0x62491e*/
  return 1; /*0x6248b2*/

}
}
// 0x6253B0
namespace gamemd {
int Options::GrowBuffer()
{

  int v2; // eax
  int v4; // esi
  void *v5; // ebp
  int v6; // [esp+4h] [ebp-4h]

  v2 = (int)(*this);
  if ( *this < *((char *)this + 1) ) /*0x6253bb*/
    return 0; /*0x6253bd*/
  v4 = 2 * v2; /*0x6253c4*/
  v6 = 2 * v2; /*0x6253cb*/
  if ( 2 * v2 < 10 ) /*0x6253cf*/
  {
    v6 = 10; /*0x6253d1*/
    v4 = 10; /*0x6253d9*/
  }
  v5 = RA2_OPNEW(4 * v4); /*0x6253ec*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x6253fa*/
  if ( *((char *)this + 2) ) /*0x625403*/
  {
    qmemcpy(v5, (const void *)*((char *)this + 2), 4 * *this); /*0x625418*/
    v4 = v6; /*0x625421*/
  }
  RA2_OPDEL((void *)*((char *)this + 2)); /*0x625429*/
  *((char *)this + 1) = v4; /*0x625431*/
  *((char *)this + 2) = (int)v5; /*0x625434*/
  return 1; /*0x6253bf*/

}
}
// 0x6254D0
namespace gamemd {
int Options::ReadOptionValue()
{

  int v2; // eax
  int v3; // ecx
  int v5; // ebx
  void *v6; // eax
  const void *v7; // esi
  int v8; // [esp+8h] [ebp-4h]

  v2 = (int)(*this);
  v3 = *((char *)this + 1); /*0x6254d8*/
  if ( 3 * v2 > v3 ) /*0x6254e0*/
    return 0; /*0x6254e3*/
  v5 = v3 / 2; /*0x6254ef*/
  if ( v3 / 2 < 10 ) /*0x6254f4*/
    v5 = 10; /*0x6254f6*/
  if ( v5 >= v3 ) /*0x6254fd*/
    return 0; /*0x625500*/
  v6 = RA2_OPNEW(20 * v5); /*0x62550d*/
  v7 = (const void *)*((char *)this + 2); /*0x625512*/
  v8 = (int)v6; /*0x62551a*/
  if ( v7 ) /*0x62551e*/
    qmemcpy(v6, v7, 20 * *this); /*0x625531*/
  RA2_OPDEL((void *)*((char *)this + 2)); /*0x62553f*/
  *((char *)this + 2) = v8; /*0x62554b*/
  *((char *)this + 1) = v5; /*0x62554e*/
  return 1; /*0x6254e2*/

}
}
// 0x625560
namespace gamemd {
AbstractClass * * Options::DestroyComposite(void * Block, char a2)
{

  unsigned int *i; // ecx
  unsigned int *v4; // eax
  unsigned int *v5; // edx
  void *v6; // esi

  if ( *((unsigned int *)Block + 11) ) /*0x625563*/
  {
    RA2_OPDEL(*((void **)Block + 11)); /*0x62556b*/
    *((unsigned int *)Block + 11) = 0; /*0x625573*/
  }
  for ( i = (unsigned int *)*((unsigned int *)Block + 14); i; i = (unsigned int *)*((unsigned int *)Block + 14) ) /*0x62557f*/
  {
    v4 = i; /*0x625581*/
    v5 = 0; /*0x625583*/
    while ( i != v4 ) /*0x62558b*/
    {
      v5 = v4; /*0x62558d*/
      v4 = (unsigned int *)*v4; /*0x62558f*/
      if ( !v4 ) /*0x625593*/
        goto LABEL_12; /*0x625593*/
    }
    if ( v5 ) /*0x62559d*/
      *v5 = *v4; /*0x6255a1*/
    else
      *((unsigned int *)Block + 14) = *v4; /*0x6255a7*/
    RA2_OPDEL(v4); /*0x6255ab*/
LABEL_12:
    ; /*0x6255b3*/
  }
  v6 = (void *)*((unsigned int *)Block + 16); /*0x6255bb*/
  if ( v6 ) /*0x6255c0*/
  {
    DeleteAndZero::Alt(*((void ***)Block + 16)); /*0x6255c4*/
    RA2_OPDEL(v6); /*0x6255ca*/
  }
  if ( (Block & 1) != 0 ) /*0x6255d9*/
    RA2_OPDEL(Block); /*0x6255dc*/
  return Block; /*0x6255e6*/

}
}
// 0x6255F0
namespace gamemd {
void * Options::RebuildDropdownList(ObjectClass * aP1)
{

  ObjectClass *v2; // ebp
  SessionClass *v3; // edi
  int v4; // ebx
  ReferenceCounted *v5; // esi
  ReferenceCounted v6; // eax
  int v7; // ebp
  int v8; // edi
  int v9; // eax
  int v10; // ebx
  int v11; // ecx
  int v12; // edi
  ReferenceCounted v13; // edi
  wchar_t **v14; // ecx
  int v16; // [esp+10h] [ebp-20h]
  int v18; // [esp+18h] [ebp-18h] BYREF
  CampaignScore *v19; // [esp+1Ch] [ebp-14h] BYREF
  void *v20; // [esp+20h] [ebp-10h] BYREF
  int v21; // [esp+24h] [ebp-Ch]
  int v22; // [esp+28h] [ebp-8h]
  int v23; // [esp+2Ch] [ebp-4h]

  v2 = aP1; /*0x6255f5*/
  v3 = (SessionClass *)this; /*0x6255fb*/
  v4 = 0; /*0x625600*/
  *this = *(unsigned int *)aP1->__pad_0; /*0x625602*/
  v5 = (ReferenceCounted *)((char *)this + 2); /*0x625607*/
  *((char *)this + 1) = *(unsigned int *)&aP1->__pad_0[4]; /*0x62560a*/
  *((char *)this + 2) = 0; /*0x625615*/
  *((char *)this + 3) = 0; /*0x625617*/
  *((char *)this + 4) = 0; /*0x62561a*/
  unknown_libname_74(&v19); /*0x62561d*/
  unknown_libname_74(&v20); /*0x625626*/
  v18 = 0; /*0x62562e*/
  v21 = -1; /*0x625632*/
  v23 = -1; /*0x625636*/
  v6 = *v5; /*0x62563a*/
  v22 = 0; /*0x62563c*/
  if ( *(int *)&v6 > 0 ) /*0x625642*/
  {
    v7 = 0; /*0x625644*/
    do /*0x625665*/
    {
      v8 = *(unsigned int *)&v5[2] + v7; /*0x62564b*/
      DeleteAndZero::Alt((void **)(v8 + 8)); /*0x625650*/
      DeleteAndZero::Alt((void **)(v8 + 4)); /*0x625658*/
      ++v4; /*0x62565f*/
      v7 += 24; /*0x625660*/
    }
    while ( v4 < *(unsigned int *)v5 ); /*0x625665*/
    v2 = aP1; /*0x625667*/
    v3 = (SessionClass *)this; /*0x62566b*/
  }
  *v5 = 0; /*0x62566f*/
  v9 = *(unsigned int *)&v2->__pad_0[8]; /*0x625675*/
  v10 = 0; /*0x625678*/
  if ( v9 > 0 ) /*0x62567c*/
  {
    v11 = 0; /*0x625682*/
    v16 = 0; /*0x625684*/
    while ( 1 ) /*0x62568e*/
    {
      if ( v11 >= 0 && v10 < v9 ) /*0x625694*/
      {
        v12 = v11 + v2->uniqueId; /*0x625699*/
        v18 = *(unsigned int *)v12; /*0x6256a5*/
        WideString::Reassign_Alt((void **)&v19, (const wchar_t **)(v12 + 4)); /*0x6256a9*/
        WideString::Reassign_Alt(&v20, (const wchar_t **)(v12 + 8)); /*0x6256b6*/
        v21 = *(unsigned int *)(v12 + 12); /*0x6256be*/
        v22 = *(unsigned int *)(v12 + 16); /*0x6256c5*/
        v23 = *(unsigned int *)(v12 + 20); /*0x6256cc*/
      }
      v13 = *v5; /*0x6256d0*/
      if ( *(unsigned int *)v5 >= *(unsigned int *)&v5[1] ) /*0x6256d7*/
        DynamicVector::GrowCapacity((int *)v5); /*0x6256db*/
      if ( *(unsigned int *)v5 >= *(unsigned int *)&v5[1] ) /*0x6256e7*/
        DynamicVector::GrowCapacity((int *)v5); /*0x6256eb*/
      if ( *(unsigned int *)&v13 < *(unsigned int *)v5 ) /*0x6256f4*/
        memcpy( /*0x625713*/
          (void *)(*(unsigned int *)&v5[2] + 8 * (3 * *(unsigned int *)&v13 + 3)),
          (const void *)(*(unsigned int *)&v5[2] + 24 * *(unsigned int *)&v13),
          24 * *(unsigned int *)v5 - 24 * *(unsigned int *)&v13);
      v14 = (wchar_t **)(*(unsigned int *)&v5[2] + 24 * *(unsigned int *)&v13); /*0x625721*/
      if ( v14 ) /*0x625726*/
        Struct::WideStringCopy(v14, (ObjectClass *)&v18); /*0x62572d*/
      ++v10; /*0x625739*/
      ++*(unsigned int *)v5; /*0x62573a*/
      v11 = v16 + 24; /*0x625740*/
      v9 = *(unsigned int *)&aP1->__pad_0[8]; /*0x625743*/
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
}
// 0x625A20
namespace gamemd {
int Options::SaveOptionValue()
{

  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  const void *v6; // esi
  int v7; // [esp+4h] [ebp-4h]

  v2 = *this; /*0x625a24*/
  if ( *this < *((char *)this + 1) ) /*0x625a2b*/
    return 0; /*0x625a2d*/
  v4 = 2 * v2; /*0x625a33*/
  if ( 2 * v2 < 10 ) /*0x625a3b*/
    v4 = 10; /*0x625a3d*/
  v5 = RA2_OPNEW(20 * v4); /*0x625a4f*/
  memset(v5, 0, 4 * ((unsigned int)(20 * v4) >> 2)); /*0x625a5a*/
  v7 = (int)v5; /*0x625a64*/
  v6 = (const void *)*((char *)this + 2); /*0x625a6a*/
  if ( v6 ) /*0x625a6f*/
    qmemcpy(v5, v6, 20 * *this); /*0x625a80*/
  RA2_OPDEL((void *)*((char *)this + 2)); /*0x625a8d*/
  *((char *)this + 1) = v4; /*0x625a99*/
  *((char *)this + 2) = v7; /*0x625a9c*/
  return 1; /*0x625a2f*/

}
}
// 0x4F1720
namespace gamemd {
HWND Options::InitDialogControls(HWND hDlg)
{

  HWND result; // eax
  HWND v3; // eax
  IUnknown *v4; // esi
  LPARAM v5; // edi
  IUnknown *v6; // esi
  const char **Options; // eax
  HWND DlgItem; // eax
  uint8_t v9; // [esp+10h] [ebp-3Ch]
  unsigned int v10[14]; // [esp+14h] [ebp-38h] BYREF

  result = (HWND)g_abs_A8B238[0]; /*0x4f1720*/
  if ( !g_abs_A8B238[0] || g_abs_A8B238[0] == 5 ) /*0x4f1739*/
  {
    Options = (const char **)LoadOptions::LoadOptions(v10); /*0x4f17dd*/
    v9 = LoadOptions::Check(Options); /*0x4f17ed*/
    LoadOptions::Cleanup(v10); /*0x4f17f1*/
    DlgItem = GetDlgItem(hDlg, 1310); /*0x4f1802*/
    if ( DlgItem ) /*0x4f1810*/
      EnableWindow(DlgItem, v9); /*0x4f181c*/
    result = GetDlgItem(hDlg, 1312); /*0x4f1824*/
    if ( result ) /*0x4f1828*/
      return (HWND)EnableWindow(result, v9); /*0x4f1832*/
  }
  else if ( g_abs_A8B238[0] == 4 ) /*0x4f1742*/
  {
    result = (HWND)g_abs_A8B538; /*0x4f1748*/
    if ( !g_abs_A8B538 ) /*0x4f174f*/
    {
      v3 = GetDlgItem(hDlg, 1007); /*0x4f175b*/
      v4 = (IUnknown *)v3; /*0x4f1767*/
      if ( v3 ) /*0x4f176b*/
      {
        v5 = 3 - (unsigned int)g_abs_A8DB9C; /*0x4f1785*/
        SendMessageA(v3, 0x406u, 1u, 196608); /*0x4f1787*/
        SendMessageA((HWND)v4, 0x405u, 1u, v5); /*0x4f1792*/
      }
      result = GetDlgItem(hDlg, 1321); /*0x4f179a*/
      v6 = (IUnknown *)result; /*0x4f17a0*/
      if ( result ) /*0x4f17a4*/
      {
        SendMessageA(result, 0x406u, 1u, 393216); /*0x4f17b7*/
        return (HWND)SendMessageA((HWND)v6, 0x405u, 1u, 6 - *(unsigned int *)g_abs_A8EB60); /*0x4f17cf*/
      }
    }
  }
  return result; /*0x4f17d1*/

}
} // namespace gamemd

// 0x5FA4A0
namespace gamemd {
void Options::SetScoreVolume(float volume, int pad)
{

  double v4; // st7
  int v5; // eax
  int v6; // eax

  if ( volume >= 1.0 ) /*0x5fa4b2*/
    v4 = 1.0; /*0x5fa4ba*/
  else
    v4 = volume; /*0x5fa4b4*/
  *(float *)&this->__pad_34[12] = v4; /*0x5fa4c0*/
  v5 = Math::RoundToInt(v4 * 16384.0); /*0x5fa4c9*/
  EndBufferMixer(*(int **)&stru_87C374.__pad_14B0[3872], v5); /*0x5fa4d6*/
  v6 = Math::RoundToInt(*(float *)&this->__pad_34[12] * 255.0); /*0x5fa4e4*/
  GameSettings::SetScoreVolume(&g_BuildingTypeClass_Count, v6); /*0x5fa4ef*/
  Debug::Log(); /*0x5fa502*/

}
} // namespace gamemd

// 0x5FA510
namespace gamemd {
void Options::SetSoundVolume(float volume, int pad)
{

  double v3; // st7
  int v4; // eax

  if ( volume >= 1.0 ) /*0x5fa522*/
    v3 = 1.0; /*0x5fa52a*/
  else
    v3 = volume; /*0x5fa524*/
  *(float *)&this->__pad_34[4] = v3; /*0x5fa530*/
  v4 = Math::RoundToInt(v3 * 16384.0); /*0x5fa539*/
  EndBufferMixer(*(int **)&stru_87C374.__pad_14B0[3876], v4); /*0x5fa546*/
  if ( (unsigned char)pad ) /*0x5fa551*/
    PlayVocClass(*(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 1808), 0x2000, 1.0, 0); /*0x5fa56a*/
  Debug::Log(); /*0x5fa57d*/

}
} // namespace gamemd

// 0x5FA590
namespace gamemd {
void Options::SetVoiceVolume(float volume, int pad)
{

  double v4; // st7
  int v5; // eax
  int v6; // eax

  if ( volume >= 1.0 ) /*0x5fa5a2*/
    v4 = 1.0; /*0x5fa5aa*/
  else
    v4 = volume; /*0x5fa5a4*/
  *(float *)&this->__pad_34[8] = v4; /*0x5fa5b0*/
  v5 = Math::RoundToInt(v4 * 255.0); /*0x5fa5b9*/
  ThemeClass::GetField(v5); /*0x5fa5c0*/
  v6 = Math::RoundToInt(*(float *)&this->__pad_34[8] * 16384.0); /*0x5fa5ce*/
  EndBufferMixer(*(int **)&stru_87C374.__pad_14B0[3868], v6); /*0x5fa5db*/
  if ( (unsigned char)pad ) /*0x5fa5e6*/
    PlayVocClass(*(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 1808), 0x2000, *(float *)&this->__pad_34[8], 0); /*0x5fa5ff*/
  Debug::Log(); /*0x5fa612*/

}
} // namespace gamemd

// 0x618D40
namespace gamemd {
int Options::DialogProc(CCINIClass hWnd)
{

  unsigned int *v1; // eax
  HWND v2; // ecx
  WNDPROC *v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // edi
  unsigned int v7; // ebx
  LRESULT v8; // esi
  LRESULT v9; // ecx
  LONG v10; // esi
  HWND v11; // eax
  LONG v12; // ecx
  int v13; // edx
  LONG (*v14)(HWND, int); // ebp
  unsigned int *v15; // ecx
  unsigned int *v16; // eax
  HWND v17; // eax
  int v18; // esi
  int v19; // eax
  ObjectClass *v23; // ebx
  int v21; // eax
  int v22; // esi
  void (***ecx51)(unsigned int, int); // ecx
  HDC DC; // esi
  int result; // eax
  int v26; // edx
  LRESULT v27; // eax
  int v28; // ebp
  HWND v29; // ecx
  LRESULT (*v30)(HWND, UINT, WPARAM, LPARAM); // esi
  int v31; // eax
  int v32; // eax
  LRESULT (**v33)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v34; // eax
  int *v35; // edi
  unsigned int *v36; // ebx
  int v37; // eax
  int v38; // ecx
  WPARAM v39; // ebp
  CCINIClass *v43; // ecx
  CCINIClass *v44; // ecx
  int v42; // esi
  int eax93; // eax
  int edi93; // edi
  int v45; // eax
  int v46; // edx
  int v47; // esi
  int v48; // esi
  int v49; // edx
  int v50; // edx
  CampaignScore *v54; // eax
  HWND v52; // ecx
  LRESULT (*v53)(HWND, UINT, WPARAM, LPARAM); // esi
  int eax108a; // eax
  int v55; // eax
  LRESULT (**v56)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v57; // eax
  LONG right; // eax
  CCINIClass *v62; // ebx
  int v60; // ebp
  size_t v61; // esi
  wchar_t *edi131; // edi
  size_t v63; // eax
  CCINIClass *v67; // eax
  int v65; // esi
  size_t v66; // eax
  CCINIClass *v70; // eax
  HWND v68; // eax
  LRESULT v69; // esi
  int unknown38; // ebp
  CCINIClass *v74; // esi
  int v72; // ecx
  int v73; // eax
  int ecx161; // ecx
  int v75; // ebx
  HWND v76; // eax
  CCINIClass *v80; // esi
  int v78; // ebp
  CCINIClass *v82; // esi
  int ecx169; // ecx
  int v81; // eax
  int ecx175; // ecx
  int v83; // ebx
  AbstractClass *v84; // eax
  CCINIClass *v88; // esi
  CCINIClass *v89; // eax
  CCINIClass **v87; // ebp
  CCINIClass *v91; // eax
  int esi188; // esi
  int v90; // ebx
  int esi193; // esi
  CCINIClass *v95; // ecx
  int v93; // ebx
  HWND v94; // eax
  CCINIClass *v98; // esi
  CCINIClass *v99; // esi
  CCINIClass *v100; // esi
  AbstractClass *v101; // ecx
  AbstractClass *edx206; // edx
  HWND ebx206; // ebx
  CCINIClass *v104; // eax
  int v102; // edi
  int v103; // ecx
  int ebp212; // ebp
  int v105; // ebx
  int v106; // esi
  CCINIClass *v110; // eax
  int v108; // edi
  char *v109; // esi
  int ebp223; // ebp
  HWND v111; // esi
  uint16_t v112; // ax
  ObjectClass *v116; // esi
  int v114; // ebp
  unsigned int *v115; // eax
  void (*edi236)(HWND, UINT, WPARAM, LPARAM); // edi
  ObjectClass *v117; // eax
  CCINIClass *v121; // edx
  HWND v119; // ecx
  int v120; // eax
  CCINIClass *v124; // edx
  CCINIClass *v122; // ebx
  CCINIClass *v126; // esi
  AbstractClass *v127; // edx
  CCINIClass *k; // ecx
  unsigned int *eax253; // eax
  CCINIClass *v130; // eax
  int v128; // edx
  int v129; // esi
  int ecx261; // ecx
  int *v131; // ecx
  CCINIClass *v135; // ecx
  ObjectClass *v133; // eax
  unsigned int *v134; // eax
  HWND esi277; // esi
  uint16_t v136; // ax
  LRESULT v137; // eax
  int v138; // esi
  LRESULT v139; // ebx
  LRESULT v140; // eax
  int v141; // eax
  int v142; // edi
  CCINIClass *v146; // edx
  int v144; // esi
  int i; // ecx
  int ebx306; // ebx
  CCINIClass *v150; // esi
  CCINIClass *v151; // edx
  int v149; // ecx
  ObjectClass *v153; // edi
  int ebp308; // ebp
  unsigned int *INIClass_field_3C; // ecx
  LRESULT esi322; // esi
  void (*v154)(HWND, UINT, WPARAM, LPARAM); // edi
  HWND v155; // esi
  uint16_t WindowLongA; // ax
  LRESULT v157; // ebx
  LRESULT v158; // esi
  int v159; // ecx
  int uniqueId; // edx
  int v161; // eax
  AbstractClass **v162; // ecx
  int v163; // esi
  AbstractClass *left; // eax
  int v165; // ebx
  CCINIClass *v166; // esi
  LRESULT v167; // eax
  int v168; // ebp
  unsigned int *v169; // eax
  int v170; // ecx
  CCINIClass *v174; // edx
  int v172; // eax
  CCINIClass *v176; // ecx
  CCINIClass *ebx353; // ebx
  CCINIClass *v178; // esi
  AbstractClass *v179; // edx
  CCINIClass *m; // ecx
  unsigned int *eax359; // eax
  CCINIClass *v182; // edx
  int v180; // esi
  CCINIClass *v184; // ecx
  CCINIClass *v185; // eax
  int *v183; // eax
  HWND esi374; // esi
  uint16_t ax374; // ax
  uint16_t v186; // ax
  LRESULT (*v187)(HWND, UINT, WPARAM, LPARAM); // edi
  LRESULT v188; // ebx
  LRESULT v189; // eax
  LRESULT v190; // esi
  int16_t v191; // bx
  WPARAM v192; // edi
  HWND v193; // esi
  uint16_t v194; // ax
  int v195; // ebp
  unsigned int *v196; // eax
  int v197; // ecx
  CCINIClass *v201; // esi
  int v199; // eax
  CCINIClass *v203; // ecx
  CCINIClass *ebx409; // ebx
  CCINIClass *v205; // esi
  AbstractClass *v206; // edx
  AbstractClass *jj; // ecx
  unsigned int *eax415; // eax
  CCINIClass *v209; // ecx
  int v207; // eax
  unsigned int *v208; // eax
  unsigned int *esi429; // esi
  unsigned int *v210; // eax
  CCINIClass *v214; // edi
  int v212; // ebp
  unsigned int *v213; // eax
  int ecx434; // ecx
  int v215; // edx
  CCINIClass *v219; // edi
  int *v217; // ecx
  LONG v218; // esi
  int edi450; // edi
  LRESULT v220; // ecx
  char *v221; // esi
  LPARAM v222; // ebp
  int v223; // eax
  int v224; // ebx
  LPARAM v225; // ecx
  int v226; // eax
  CCINIClass *v229; // ebx
  int v228; // eax
  ObjectClass *v231; // edi
  CCINIClass *v232; // esi
  CampaignScore *v233; // eax
  CampaignScore *v234; // eax
  int esi478; // esi
  CCINIClass *v236; // eax
  unsigned int *v235; // ecx
  int edi480; // edi
  int ii; // edx
  int v238; // ebp
  int v239; // edx
  int v240; // edx
  int v241; // ebp
  int v242; // esi
  CCINIClass *v243; // ebx
  CCINIClass *v246; // eax
  unsigned int *v245; // edi
  int ecx499; // ecx
  CCINIClass *v249; // eax
  int v248; // ebp
  char *ecx512; // ecx
  CCINIClass *v252; // esi
  int v251; // eax
  CCINIClass *v254; // ecx
  int v253; // ebx
  CCINIClass *v256; // esi
  CCINIClass *v257; // edi
  int esi522; // esi
  wchar_t **ecx523; // ecx
  CCINIClass *v259; // ecx
  CCINIClass *v260; // eax
  int esi532; // esi
  int v261; // edi
  wchar_t **v262; // ebp
  ObjectClass *v263; // edi
  LRESULT v264; // eax
  LRESULT v265; // ebx
  BOOL v266; // esi
  AbstractClass *v267; // ebp
  size_t v268; // eax
  int v269; // eax
  AbstractClass *v270; // eax
  ObjectClass *v271; // ebx
  CCINIClass *v272; // edi
  size_t v273; // eax
  AbstractClass *v274; // esi
  CCINIClass *v275; // eax
  AbstractClass *v276; // eax
  int v277; // ebp
  CCINIClass *v278; // eax
  bool v279; // cc
  CCINIClass *v280; // esi
  int v281; // ecx
  CCINIClass *v282; // ebx
  CCINIClass *v283; // esi
  AbstractClass *v284; // edx
  unsigned int *v285; // esi
  int v286; // ebp
  CCINIClass *v287; // eax
  bool v288; // cc
  int v289; // esi
  int v290; // ecx
  CCINIClass *v291; // ebx
  CCINIClass *v292; // esi
  AbstractClass *v293; // edx
  unsigned int *v294; // esi
  CCINIClass **v295; // esi
  CCINIClass *v296; // eax
  int v297; // ecx
  AbstractClass *v298; // ecx
  AbstractClass *v299; // eax
  CCINIClass *v300; // ebx
  int *v301; // ebp
  int v302; // eax
  CCINIClass *v303; // eax
  int v304; // ecx
  CCINIClass *v305; // esi
  AbstractClass *v306; // eax
  wchar_t **v307; // ecx
  CCINIClass **v308; // eax
  unsigned int *ecx638; // ecx
  ObjectClass *v309; // ebx
  LRESULT v311; // eax
  AbstractClass *edi651; // edi
  CCINIClass *v312; // esi
  signed int v314; // ebx
  LRESULT v315; // esi
  LRESULT v316; // ecx
  HWND *v317; // esi
  HWND v318; // ebx
  LONG v319; // edi
  LONG v320; // ebp
  HWND *v321; // eax
  int eax676; // eax
  CCINIClass *v322; // edx
  LONG ecx676; // ecx
  CCINIClass *v324; // eax
  int esi681; // esi
  CCINIClass *v326; // ecx
  CCINIClass *v327; // edi
  double v329; // st7
  CCINIClass *v330; // ebp
  int esi686; // esi
  unsigned int v332; // eax
  CCINIClass *v331; // edi
  int v334; // ebx
  CCINIClass *v333; // esi
  int eax689; // eax
  int edx689; // edx
  CCINIClass *v336; // eax
  CCINIClass *v337; // eax
  unsigned int *v340; // eax
  unsigned int *v341; // eax
  int esi703; // esi
  char *v343; // edi
  CCINIClass *v342; // edi
  int CCINIClass_field_4C; // ebp
  double v346; // st7
  char *esi709; // esi
  unsigned int *n; // eax
  CCINIClass *v347; // esi
  int esi721; // esi
  CCINIClass *v349; // ecx
  CCINIClass *v350; // edi
  double v353; // st7
  CCINIClass *ebp726; // ebp
  int v355; // esi
  unsigned int eax726; // eax
  CCINIClass *v354; // edi
  int v358; // ebp
  CCINIClass *v356; // esi
  int eax729; // eax
  int v361; // edx
  CCINIClass *v359; // eax
  CCINIClass *v360; // eax
  void *v364; // eax
  int edi742; // edi
  HWND esi742; // esi
  AbstractClass *v367; // ebx
  CCINIClass *v365; // esi
  CCINIClass *v366; // esi
  LPARAM v370; // [esp-4h] [ebp-2D40h]
  LPARAM v371; // [esp-4h] [ebp-2D40h]
  LPARAM v372; // [esp-4h] [ebp-2D40h]
  LPARAM v373; // [esp-4h] [ebp-2D40h]
  LPARAM v374; // [esp-4h] [ebp-2D40h]
  LPARAM _FFFFFFFCe; // [esp-4h] [ebp-2D40h]
  char *v376; // [esp-4h] [ebp-2D40h]
  char *_FFFFFFFCg; // [esp-4h] [ebp-2D40h]
  CCINIClass *v375; // [esp+10h] [ebp-2D2Ch]
  AbstractClass *var2D28; // [esp+14h] [ebp-2D28h] BYREF
  AbstractClass *v377; // [esp+18h] [ebp-2D24h]
  char v381; // [esp+1Fh] [ebp-2D1Dh]
  AbstractClass *v379; // [esp+20h] [ebp-2D1Ch]
  WPARAM wParam; // [esp+24h] [ebp-2D18h] BYREF
  HWND Parent; // [esp+28h] [ebp-2D14h]
  float v385; // [esp+2Ch] [ebp-2D10h]
  HWND v386; // [esp+30h] [ebp-2D0Ch] BYREF
  unsigned int *v387; // [esp+34h] [ebp-2D08h]
  int j; // [esp+38h] [ebp-2D04h]
  LPARAM v389; // [esp+3Ch] [ebp-2D00h]
  WNDPROC lpPrevWndFunc; // [esp+40h] [ebp-2CFCh]
  AbstractClass aP2; // [esp+44h] [ebp-2CF8h] BYREF
  int v392; // [esp+68h] [ebp-2CD4h]
  int v393; // [esp+6Ch] [ebp-2CD0h]
  LPARAM v394; // [esp+70h] [ebp-2CCCh] BYREF
  int v395; // [esp+74h] [ebp-2CC8h]
  int v396; // [esp+78h] [ebp-2CC4h]
  int v397; // [esp+7Ch] [ebp-2CC0h]
  int *v398; // [esp+80h] [ebp-2CBCh]
  int nWidth; // [esp+84h] [ebp-2CB8h]
  RECT v400; // [esp+88h] [ebp-2CB4h] BYREF
  struct tagRECT v401; // [esp+98h] [ebp-2CA4h] BYREF
  unsigned int *v402; // [esp+A8h] [ebp-2C94h]
  int v403; // [esp+ACh] [ebp-2C90h]
  struct tagRECT v404; // [esp+B0h] [ebp-2C8Ch] BYREF
  struct tagTEXTMETRICA lParam; // [esp+C0h] [ebp-2C7Ch] BYREF
  int v406; // [esp+F8h] [ebp-2C44h] BYREF
  int v407[4]; // [esp+FCh] [ebp-2C40h] BYREF
  unsigned int v408[4]; // [esp+10Ch] [ebp-2C30h] BYREF
  unsigned int v409[4]; // [esp+11Ch] [ebp-2C20h] BYREF
  int v410[4]; // [esp+12Ch] [ebp-2C10h] BYREF
  wchar_t Destination[511]; // [esp+13Ch] [ebp-2C00h] BYREF
  int16_t v412; // [esp+53Ah] [ebp-2802h]
  unsigned short v413[5120]; // [esp+53Ch] [ebp-2800h] BYREF

  wParam = 1;
  lpPrevWndFunc = 0;
  if ( *(&g_MatrixTransformState + 2895)
    && (v1 = (unsigned int *)*(&(*(&g_MatrixTransformState + 2894))->X
                       + HashMap::ComputeIndex((int)(&(&g_MatrixTransformState)[241] + 2), &hWnd))) != 0 )
  {
    v2 = *(HWND *)hWnd.__pad_0;
    while ( *v1 != *(unsigned int *)hWnd.__pad_0 )
    {
      v1 = (unsigned int *)v1[2];
      if ( !v1 )
        goto LABEL_10;
    }
    v3 = (WNDPROC *)(v1 + 1);
    if ( v3 )
      lpPrevWndFunc = *v3;
  }
  else
  {
    v2 = *(HWND *)hWnd.__pad_0;
  }
LABEL_10:
  v4 = 0;
  Parent = GetParent(v2);
  v406 = *(unsigned int *)hWnd.__pad_0;
  v393 = -1;
  v385 = 0.0;
  v381 = 1;
  v379 = 0;
  v375 = 0;
  if ( *(&g_MatrixTransformState + 2877) )
  {
    v5 = *(&(*(&g_MatrixTransformState + 2876))->X
         + HashTable::ComputeHash((int)(&g_MatrixTransformState + 2876), (int)&v406));
    if ( v5 )
    {
      while ( *(unsigned int *)v5 != v406 )
      {
        v5 = *(unsigned int *)(v5 + 516);
        if ( !v5 )
          goto LABEL_16;
      }
      v4 = v5 + 4;
      v375 = (CCINIClass *)(v5 + 4);
    }
  }
LABEL_16:
  if ( !v4 )
    return 0;
  v6 = 2 * (unsigned int)*(&g_MatrixTransformState + 3064) + 18;
  nWidth = v6;
  GetClientRect(*(HWND *)hWnd.__pad_0, (LPRECT)&aP2.__pad_0[8]);
  ScreenDialogToClient(*(HWND *)hWnd.__pad_0, (LPRECT)&aP2.nextArrayIndex);
  aP2.NeedsSaveOrLink = (char *)aP2.NeedsSaveOrLink - (unsigned int)*(&g_MatrixTransformState + 3064);
  aP2.referenceCount += (int)*(&g_MatrixTransformState + 3064);
  v407[1] = aP2.referenceCount;
  aP2.uniqueId -= 2 * (unsigned int)*(&g_MatrixTransformState + 3064);
  aP2.nextArrayIndex += (int)*(&g_MatrixTransformState + 3064);
  v407[0] = aP2.nextArrayIndex;
  v407[2] = aP2.uniqueId - *(unsigned int *)&aP2.__pad_0[8];
  v7 = hWnd.headNode[0];
  aP2.abstractFlags -= 2 * (unsigned int)*(&g_MatrixTransformState + 3064);
  v392 -= (int)*(&g_MatrixTransformState + 3064);
  v407[3] = aP2.abstractFlags - *(unsigned int *)&aP2.__pad_0[12];
  if ( hWnd.headNode[0] != 395 && hWnd.headNode[0] != 417 && hWnd.headNode[0] != 277 )
  {
    v8 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0);
    v9 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x1A1u, 0, 0);
    if ( v9 <= 1 )
      v9 = 1;
    v393 = v8 * v9 > aP2.abstractFlags - *(unsigned int *)&aP2.__pad_0[12];
    v10 = v8 - (aP2.abstractFlags - *(unsigned int *)&aP2.__pad_0[12]) / v9;
    v11 = (HWND)v375->headNode[2];
    v385 = *(float *)&v10;
    if ( (unsigned int)v11 > 1 )
    {
      v12 = *(unsigned int *)&v375[2].ownsFile;
      lParam.tmAscent = 5;
      lParam.tmDescent = 0;
      lParam.tmInternalLeading = v10;
      lParam.tmAveCharWidth = v12;
      lParam.tmHeight = 28;
      SendMessageA(v11, 0xE9u, 0, (LPARAM)&lParam);
    }
  }
  v13 = hWnd.headNode[1];
  v14 = GetWindowLongA;
  if ( v7 <= 0x19B )
  {
    if ( v7 != 411 )
    {
      if ( v7 > 0x185 )
      {
        switch ( v7 )
        {
          case 0x186u:
            esi322 = hWnd.headNode[1];
            if ( hWnd.headNode[1] < -1 )
            {
              v154 = (void (*)(HWND, UINT, WPARAM, LPARAM))SendMessageA;
            }
            else
            {
              v154 = (void (*)(HWND, UINT, WPARAM, LPARAM))SendMessageA;
              if ( esi322 < SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0) )
              {
                if ( *(unsigned int *)&v375[2].__pad_41[3] != -1 )
                  SendMessageA(*(HWND *)hWnd.__pad_0, 0x185u, 0, *(unsigned int *)&v375[2].__pad_41[3]);
                *(unsigned int *)&v375[2].__pad_41[3] = esi322;
                if ( esi322 != -1 )
                  SendMessageA(*(HWND *)hWnd.__pad_0, 0x185u, 1u, esi322);
              }
            }
            v155 = GetParent(*(HWND *)hWnd.__pad_0);
            v372 = *(unsigned int *)hWnd.__pad_0;
            WindowLongA = GetWindowLongA(*(HWND *)hWnd.__pad_0, -12);
            v154(v155, 0x111u, WindowLongA | 0x10000, v372);
            InvalidateRect(*(HWND *)hWnd.__pad_0, 0, 0);
            return 0;
          case 0x187u:
            result = 0;
            INIClass_field_3C = (unsigned int *)v375[2].INIClass_field_3C;
            if ( INIClass_field_3C )
            {
              if ( hWnd.headNode[1] < *INIClass_field_3C )
              {
                if ( hWnd.headNode[1] >= 0 )
                  return *(unsigned int *)(INIClass_field_3C[2] + 4 * hWnd.headNode[1]);
              }
              else
              {
                return 0;
              }
            }
            return result;
          case 0x188u:
            return *(unsigned int *)&v375[2].__pad_41[3];
          case 0x18Au:
            goto LABEL_645;
          case 0x18Eu:
            return *(unsigned int *)&v375[2].ownsFile;
          case 0x190u:
            v142 = v375[2].INIClass_field_3C;
            if ( !v142 )
              return 0;
            v146 = *(CCINIClass **)v142;
            v144 = 0;
            result = 0;
            for ( i = 0; i < (int)v146; ++i )
            {
              if ( i >= 0 && i < (int)v146 )
                v144 = *(unsigned int *)(*(unsigned int *)(v142 + 8) + 4 * i);
              if ( v144 )
                ++result;
            }
            return result;
          case 0x191u:
            ebx306 = 0;
            result = 0;
            v150 = (CCINIClass *)v375[2].INIClass_field_3C;
            if ( v150 )
            {
              v151 = *(CCINIClass **)v150->__pad_0;
              v149 = 0;
              if ( *(int *)v150->__pad_0 > 0 )
              {
                v153 = (ObjectClass *)hWnd.headNode[2];
                ebp308 = hWnd.headNode[1];
                do
                {
                  if ( v149 >= 0 && v149 < (int)v151 )
                    ebx306 = *(unsigned int *)(v150->headNode[1] + 4 * v149);
                  if ( ebx306 )
                  {
                    *(unsigned int *)v153->__pad_0 = v149;
                    ++result;
                    v153 = (ObjectClass *)((char *)v153 + 4);
                  }
                  if ( result >= ebp308 )
                    break;
                  v151 = *(CCINIClass **)v150->__pad_0;
                  ++v149;
                }
                while ( v149 < *(unsigned int *)v150->__pad_0 );
              }
            }
            return result;
          case 0x197u:
            v138 = hWnd.headNode[1];
            v139 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0);
            v140 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x1A1u, 0, 0);
            if ( !v139 || !v140 )
              goto LABEL_668;
            v141 = (aP2.abstractFlags - *(unsigned int *)&aP2.__pad_0[12]) / v140;
            if ( v138 < 0 )
              v138 = 0;
            if ( v139 - v141 <= 0 )
            {
              v138 = 0;
            }
            else if ( v138 > v139 - v141 )
            {
              v138 = v139 - v141;
            }
            if ( v138 == *(unsigned int *)&v375[2].ownsFile )
              return 0;
            *(unsigned int *)&v375[2].ownsFile = v138;
            InvalidateRect(*(HWND *)hWnd.__pad_0, 0, 0);
            return 0;
          case 0x198u:
            v157 = hWnd.headNode[1];
            if ( hWnd.headNode[1] < *(unsigned int *)&v375[2].ownsFile )
              return -1;
            if ( v157 >= SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0) )
              return -1;
            v158 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x1A1u, 0, 0);
            v159 = v157 - *(unsigned int *)&v375[2].ownsFile;
            if ( v159 > (aP2.abstractFlags - *(unsigned int *)&aP2.__pad_0[12]) / v158 )
              return -1;
            uniqueId = aP2.uniqueId;
            v161 = v159 * v158;
            v162 = (AbstractClass **)hWnd.headNode[2];
            v163 = v161 + v158;
            *(unsigned int *)(hWnd.headNode[2] + 4) = v161;
            left = *(AbstractClass **)&aP2.__pad_0[8];
            v162[3] = (AbstractClass *)v163;
            *v162 = left;
            v162[2] = (AbstractClass *)(uniqueId - (unsigned int)left);
            return 0;
          case 0x199u:
          case 0x19Au:
LABEL_279:
            v381 = 0;
            v137 = CallWindowProcA(lpPrevWndFunc, *(HWND *)hWnd.__pad_0, 0x199u, hWnd.headNode[1], 0);
            v379 = (AbstractClass *)v137;
            if ( v137 == -1 )
              goto LABEL_668;
            if ( !v137 )
              goto LABEL_667;
            if ( v7 == 409 || v7 == 336 )
              v379 = *(AbstractClass **)(v137 + 4);
            else
              *(unsigned int *)(v137 + 4) = hWnd.headNode[2];
            goto LABEL_668;
          default:
            goto LABEL_668;
        }
      }
      if ( v7 != 389 )
      {
        if ( v7 > 0x82 )
        {
          switch ( v7 )
          {
            case 0x115u:
              v68 = (HWND)v375->headNode[2];
              v381 = 0;
              v69 = SendMessageA(v68, 0xE1u, 0, 0);
              if ( v69 != SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Eu, 0, 0) )
                SendMessageA(*(HWND *)hWnd.__pad_0, 0x197u, v69, 0);
              break;
            case 0x150u:
            case 0x151u:
              goto LABEL_279;
            case 0x182u:
              unknown38 = v375[2].unknown38;
              if ( unknown38 )
              {
                v74 = *(CCINIClass **)unknown38;
                if ( *(unsigned int *)unknown38 > hWnd.headNode[1] )
                {
                  v72 = hWnd.headNode[1];
                  if ( v74 )
                  {
                    if ( hWnd.headNode[1] < 0 )
                      v72 = 0;
                    if ( v72 >= (int)v74 )
                      v72 = (int)&v74[-1].unknown54 + 3;
                    memcpy(
                      (void *)(*(unsigned int *)(unknown38 + 8) + 4 * v72),
                      (const void *)(*(unsigned int *)(unknown38 + 8) + 4 * (v72 + 1)),
                      4 * ((unsigned int)v74 + 0x3FFFFFFF * v72 + 0x3FFFFFFF));
                    v73 = *(unsigned int *)unknown38 - 1;
                    *(unsigned int *)unknown38 = v73;
                    ecx161 = *(unsigned int *)(unknown38 + 4);
                    if ( 3 * v73 <= ecx161 )
                    {
                      v75 = ecx161 / 2;
                      if ( ecx161 / 2 < 10 )
                        v75 = 10;
                      if ( v75 < ecx161 )
                      {
                        v76 = (HWND)RA2_OPNEW(4 * v75);
                        v80 = *(CCINIClass **)(unknown38 + 8);
                        Parent = v76;
                        if ( v80 )
                          qmemcpy(v76, v80, 4 * *(unsigned int *)unknown38);
                        RA2_OPDEL(*(void **)(unknown38 + 8));
                        *(unsigned int *)(unknown38 + 8) = Parent;
                        *(unsigned int *)(unknown38 + 4) = v75;
                      }
                    }
                  }
                }
              }
              v78 = v375[2].INIClass_field_3C;
              if ( v78 )
              {
                v82 = *(CCINIClass **)v78;
                ecx169 = hWnd.headNode[1];
                if ( *(unsigned int *)v78 > hWnd.headNode[1] )
                {
                  if ( v82 )
                  {
                    if ( hWnd.headNode[1] < 0 )
                      ecx169 = 0;
                    if ( ecx169 >= (int)v82 )
                      ecx169 = (int)&v82[-1].unknown54 + 3;
                    memcpy(
                      (void *)(*(unsigned int *)(v78 + 8) + 4 * ecx169),
                      (const void *)(*(unsigned int *)(v78 + 8) + 4 * (ecx169 + 1)),
                      4 * ((unsigned int)v82 + 0x3FFFFFFF * ecx169 + 0x3FFFFFFF));
                    v81 = *(unsigned int *)v78 - 1;
                    *(unsigned int *)v78 = v81;
                    ecx175 = *(unsigned int *)(v78 + 4);
                    if ( 3 * v81 <= ecx175 )
                    {
                      v83 = ecx175 / 2;
                      if ( ecx175 / 2 < 10 )
                        v83 = 10;
                      if ( v83 < ecx175 )
                      {
                        v84 = (AbstractClass *)RA2_OPNEW(4 * v83);
                        v88 = *(CCINIClass **)(v78 + 8);
                        v377 = v84;
                        if ( v88 )
                          qmemcpy(v84, v88, 4 * *(unsigned int *)v78);
                        RA2_OPDEL(*(void **)(v78 + 8));
                        *(unsigned int *)(v78 + 8) = v377;
                        *(unsigned int *)(v78 + 4) = v83;
                      }
                    }
                  }
                }
              }
              v377 = *(AbstractClass **)v375[2].__pad_48;
              if ( v377 )
              {
                v89 = *(CCINIClass **)v377->__pad_0;
                v87 = 0;
                var2D28 = 0;
                if ( (int)v89 > 0 )
                {
                  j = 0;
                  do
                  {
                    if ( j >= 0 && (int)var2D28 < (int)v89 )
                      v87 = (CCINIClass **)(j + *(unsigned int *)&v377->__pad_0[8]);
                    v91 = v87[2];
                    esi188 = hWnd.headNode[1];
                    if ( v91 )
                    {
                      if ( hWnd.headNode[1] < 0 )
                        esi188 = 0;
                      if ( esi188 >= (int)v91 )
                        esi188 = (int)&v91[-1].unknown54 + 3;
                      v90 = (int)&v87[4]->__pad_0[24 * esi188];
                      DeleteAndZero::Alt((void **)(v90 + 8));
                      DeleteAndZero::Alt((void **)(v90 + 4));
                      memcpy(
                        (char *)v87[4] + 24 * esi188,
                        &v87[4]->sectionHead[6 * esi188 + 2],
                        24 * (unsigned int)v87[2] - 8 * (3 * esi188 + 3));
                      esi193 = (int)&v87[2][-1].unknown54 + 3;
                      v87[2] = (CCINIClass *)esi193;
                      v95 = v87[3];
                      if ( 3 * esi193 <= (int)v95 )
                      {
                        v93 = (int)v95 / 2;
                        if ( (int)v95 / 2 < 10 )
                          v93 = 10;
                        if ( v93 < (int)v95 )
                        {
                          v94 = (HWND)RA2_OPNEW(24 * v93);
                          v98 = v87[4];
                          Parent = v94;
                          if ( v98 )
                            qmemcpy(v94, v98, 24 * (unsigned int)v87[2]);
                          RA2_OPDEL(v87[4]);
                          v87[4] = (CCINIClass *)Parent;
                          v87[3] = (CCINIClass *)v93;
                        }
                      }
                    }
                    v89 = *(CCINIClass **)v377->__pad_0;
                    v279 = (int)&var2D28->__pad_0[1] < *(unsigned int *)v377->__pad_0;
                    var2D28 = (AbstractClass *)((char *)var2D28 + 1);
                    j += 20;
                  }
                  while ( v279 );
                }
              }
              break;
            case 0x184u:
              goto LABEL_202;
            default:
              goto LABEL_668;
          }
        }
        else if ( v7 == 130 )
        {
LABEL_202:
          v99 = (CCINIClass *)v375[2].unknown38;
          if ( v99 )
          {
            *(unsigned int *)v99->__pad_0 = 0;
            RA2_OPDEL((void *)v99->headNode[1]);
            RA2_OPDEL(v99);
          }
          v100 = (CCINIClass *)v375[2].INIClass_field_3C;
          if ( v100 )
          {
            *(unsigned int *)v100->__pad_0 = 0;
            RA2_OPDEL((void *)v100->headNode[1]);
            RA2_OPDEL(v100);
          }
          v101 = (AbstractClass *)v375;
          edx206 = 0;
          v375[2].unknown38 = 0;
          v375[2].INIClass_field_3C = 0;
          *(unsigned int *)&v375[2].ownsFile = 0;
          *(unsigned int *)&v375[2].__pad_41[3] = -1;
          ebx206 = *(HWND *)v375[2].__pad_48;
          Parent = ebx206;
          if ( ebx206 )
          {
            v104 = *(CCINIClass **)ebx206;
            v102 = 0;
            v279 = *(unsigned int *)ebx206 <= 0;
            v377 = 0;
            if ( !v279 )
            {
              v103 = 0;
              v389 = 0;
              do
              {
                if ( v103 >= 0 && (int)edx206 < (int)v104 )
                  v102 = v103 + *((unsigned int *)ebx206 + 2);
                ebp212 = 0;
                if ( *(int *)(v102 + 8) > 0 )
                {
                  v105 = 0;
                  do
                  {
                    v106 = *(unsigned int *)(v102 + 16) + v105;
                    DeleteAndZero::Alt((void **)(v106 + 8));
                    DeleteAndZero::Alt((void **)(v106 + 4));
                    ++ebp212;
                    v105 += 24;
                  }
                  while ( ebp212 < *(unsigned int *)(v102 + 8) );
                  v103 = v389;
                  edx206 = v377;
                  ebx206 = Parent;
                }
                *(unsigned int *)(v102 + 8) = 0;
                v104 = *(CCINIClass **)ebx206;
                edx206 = (AbstractClass *)((char *)edx206 + 1);
                v103 += 20;
                v279 = (int)edx206 < *(unsigned int *)ebx206;
                v377 = edx206;
                v389 = v103;
              }
              while ( v279 );
              v101 = (AbstractClass *)v375;
            }
          }
          if ( hWnd.headNode[0] == 130 )
          {
            if ( ebx206 )
            {
              v110 = *(CCINIClass **)ebx206;
              v377 = 0;
              if ( (int)v110 > 0 )
              {
                var2D28 = 0;
                do
                {
                  v108 = 0;
                  v109 = &var2D28->__pad_0[*((unsigned int *)ebx206 + 2) + 8];
                  if ( *(int *)v109 > 0 )
                  {
                    ebp223 = 0;
                    do
                    {
                      Options::ClearComboBoxes((void **)(*((unsigned int *)v109 + 2) + ebp223));
                      ++v108;
                      ebp223 += 24;
                    }
                    while ( v108 < *(unsigned int *)v109 );
                  }
                  *(unsigned int *)v109 = 0;
                  RA2_OPDEL(*((void **)v109 + 2));
                  v279 = (int)&v377->__pad_0[1] < *(unsigned int *)ebx206;
                  v377 = (AbstractClass *)((char *)v377 + 1);
                  var2D28 = (AbstractClass *)((char *)var2D28 + 20);
                }
                while ( v279 );
              }
              *(unsigned int *)ebx206 = 0;
              RA2_OPDEL(*((void **)ebx206 + 2));
              RA2_OPDEL(ebx206);
              v101 = (AbstractClass *)v375;
            }
            v101[6].NeedsSaveOrLink = 0;
          }
          else
          {
            v111 = GetParent(*(HWND *)hWnd.__pad_0);
            v370 = *(unsigned int *)hWnd.__pad_0;
            v112 = GetWindowLongA(*(HWND *)hWnd.__pad_0, -12);
            SendMessageA(v111, 0x111u, v112 | 0x10000, v370);
          }
        }
        else
        {
          switch ( v7 )
          {
            case 5u:
              if ( v375->headNode[2] > 1 )
              {
                v17 = GetParent(*(HWND *)hWnd.__pad_0);
                ScreenDialogToClient(v17, &v404);
                ScreenDialogToClient(*(HWND *)hWnd.__pad_0, &v400);
                MoveWindow(
                  (HWND)v375->headNode[2],
                  v400.right - v404.left,
                  v400.top - v404.top,
                  v6,
                  v400.bottom - v400.top,
                  1);
              }
              v18 = v375->sectionHead[0];
              if ( !v18 )
                goto LABEL_668;
              v19 = (*(int (**)(int))(*(unsigned int *)v18 + 124))(v375->sectionHead[0]);
              v23 = (ObjectClass *)hWnd.headNode[2];
              if ( IDA_LOWORD(hWnd.headNode[2]) == v19
                && (unsigned int)v23 >> 16 == (*(int (**)(int))(*(unsigned int *)v18 + 128))(v18) )
              {
                goto LABEL_668;
              }
              var2D28 = *(AbstractClass **)hWnd.__pad_0;
              if ( !*(&g_MatrixTransformState + 2877) )
                goto LABEL_668;
              v21 = *(&(*(&g_MatrixTransformState + 2876))->X
                    + (((int (*)(AbstractClass **))*(&g_MatrixTransformState + 2882))(&var2D28)
                     & ((1 << *((char *)&g_MatrixTransformState + 11516)) - 1)));
              if ( !v21 )
                goto LABEL_668;
              while ( *(AbstractClass **)v21 != var2D28 )
              {
                v21 = *(unsigned int *)(v21 + 516);
                if ( !v21 )
                  goto LABEL_668;
              }
              v22 = v21 + 4;
              if ( v21 != -4 )
              {
                ecx51 = *(void (****)(unsigned int, int))(v21 + 20);
                if ( ecx51 )
                {
                  (**ecx51)(ecx51, 1);
                  *(unsigned int *)(v22 + 16) = 0;
                  *(&g_MatrixTransformState + 5801) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 5801) - 1);
                }
              }
              goto LABEL_668;
            case 0xFu:
              v381 = 0;
              v26 = v375[2].sectionHead[2];
              v387 = (unsigned int *)v375[1].headNode[2];
              SetupDialogRenderBuffer(v407, *(HWND *)hWnd.__pad_0, v26);
              DrawDialogGradient(*(int **)&g_abs_87F8E4, v407, 2, -1);
              if ( *(&g_MatrixTransformState + 5629) == (CoordStruct *)-1 )
              {
                var2D28 = (AbstractClass *)-1;
              }
              else
              {
                v14 = GetWindowLongA;
                var2D28 = (AbstractClass *)(((int)*((uint8_t *)&(&g_MatrixTransformState)[469] + 4) >> g_abs_89F690 << g_abs_89F690)
                                          | (*((uint8_t *)&(&g_MatrixTransformState)[469] + 5) >> g_abs_89F690 << g_abs_89F690)
                                          | (*((uint8_t *)&(&g_MatrixTransformState)[469] + 6) >> g_abs_89F690 << g_abs_89F690));
              }
              if ( !GetUpdateRect(*(HWND *)hWnd.__pad_0, (LPRECT)&lParam, 0) )
                goto LABEL_668;
              Parent = (HWND)SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0);
              v377 = (AbstractClass *)v14(*(HWND *)hWnd.__pad_0, -16);
              v27 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Eu, 0, 0);
              wParam = v27;
              if ( v27 >= (int)Parent )
                goto LABEL_149;
              v28 = v27;
              break;
            case 0x14u:
              return 0;
            case 0x2Du:
              v15 = 0;
              v16 = *(unsigned int **)&v375->needsSave_flag;
              if ( !v16 )
                goto LABEL_39;
              while ( *(unsigned int **)(hWnd.headNode[2] + 16) != v16 )
              {
                v15 = v16;
                v16 = (unsigned int *)*v16;
                if ( !v16 )
                {
                  v379 = (AbstractClass *)1;
                  goto LABEL_668;
                }
              }
              if ( v15 )
                *v15 = *v16;
              else
                *(unsigned int *)&v375->needsSave_flag = *v16;
              RA2_OPDEL(v16);
LABEL_39:
              v379 = (AbstractClass *)1;
              goto LABEL_668;
            case 0x30u:
              DC = GetDC(*(HWND *)hWnd.__pad_0);
              GetTextMetricsA(DC, &lParam);
              ReleaseDC(*(HWND *)hWnd.__pad_0, DC);
              SendMessageA(*(HWND *)hWnd.__pad_0, 0x1A0u, 0xFFFFFFFF, (uint16_t)(IDA_LOWORD(lParam.tmHeight) + 2));
              v375[5].unknown30 = hWnd.headNode[1];
              return 0;
            default:
              goto LABEL_668;
          }
          do
          {
            if ( SendMessageA(*(HWND *)hWnd.__pad_0, 0x198u, v28, (LPARAM)&v394) != -1 )
            {
              if ( *(unsigned int *)&aP2.__pad_0[12] + v397 > aP2.abstractFlags )
                break;
              v29 = *(HWND *)hWnd.__pad_0;
              v30 = 0;
              v386 = *(HWND *)hWnd.__pad_0;
              if ( *(&g_MatrixTransformState + 2895) )
              {
                v31 = ((int (*)(HWND *))*(&g_MatrixTransformState + 2900))(&v386);
                v29 = v386;
                v32 = *(&(*(&g_MatrixTransformState + 2894))->X
                      + (v31 & ((1 << *((char *)&g_MatrixTransformState + 11588)) - 1)));
                if ( v32 )
                {
                  while ( *(HWND *)v32 != v386 )
                  {
                    v32 = *(unsigned int *)(v32 + 8);
                    if ( !v32 )
                      goto LABEL_70;
                  }
                  v33 = (LRESULT (**)(HWND, UINT, WPARAM, LPARAM))(v32 + 4);
                  if ( v33 )
                    v30 = *v33;
                }
              }
LABEL_70:
              Destination[0] = 0;
              v34 = CallWindowProcA(v30, v29, 0x199u, v28, 0);
              if ( v34 == -1 || !v34 )
                v34 = CallWindowProcA(v30, v386, 0x150u, v28, 0);
              if ( v34 != -1 && v34 )
              {
                wcsncpy(Destination, *(const wchar_t **)(v34 + 8), 0x200u);
                v412 = 0;
                wcslen(Destination);
              }
              v398 = *(int **)v375[2].__pad_48;
              v35 = v398;
              if ( v398 )
              {
                if ( SendMessageA(*(HWND *)hWnd.__pad_0, 0x187u, v28, 0) > 0 )
                {
                  v409[0] = v394 + aP2.nextArrayIndex;
                  v409[1] = v395 + aP2.referenceCount;
                  v409[3] = v397 - v395;
                  v409[2] = v396 - v394;
                  (*(void (**)(unsigned int, unsigned int *, AbstractClass *))(**(unsigned int **)&g_abs_87F8E4
                                                                            + 20))(
                    *(unsigned int *)&g_abs_87F8E4,
                    v409,
                    var2D28);
                }
                v36 = 0;
                v402 = 0;
                v389 = (LPARAM)GetDC(*(HWND *)hWnd.__pad_0);
                v37 = *v35;
                v279 = *v35 <= 0;
                v403 = 0;
                if ( !v279 )
                {
                  v38 = 0;
                  for ( j = 0; ; v38 = j )
                  {
                    if ( v38 >= 0 && v403 < v37 )
                    {
                      v36 = (unsigned int *)(v38 + v35[2]);
                      v402 = v36;
                    }
                    if ( v28 >= 0 && (signed int)wParam < v36[2] )
                    {
                      v39 = v36[4] + 24 * wParam;
                      if ( v39 )
                      {
                        v43 = *(CCINIClass **)v39;
                        if ( *(unsigned int *)v39 )
                        {
                          if ( v43 == (CCINIClass *)1 || v43 == (CCINIClass *)4 )
                          {
                            v401.left = *v36 + v394 + aP2.nextArrayIndex;
                            v401.top = v395 + aP2.referenceCount;
                            v401.right = v396 - v394;
                            v401.bottom = v397 - v395;
                            if ( v43 == (CCINIClass *)1 )
                            {
                              v54 = WideString::GetOrEmpty((wchar_t **)(v39 + 4));
                              wcscpy(Destination, (const wchar_t *)v54);
                            }
                            else
                            {
                              v52 = *(HWND *)hWnd.__pad_0;
                              v53 = 0;
                              v386 = *(HWND *)hWnd.__pad_0;
                              if ( *(&g_MatrixTransformState + 2895) )
                              {
                                eax108a = ((int (*)(HWND *))*(&g_MatrixTransformState + 2900))(&v386);
                                v52 = v386;
                                v55 = *(&(*(&g_MatrixTransformState + 2894))->X
                                      + (eax108a & ((1 << *((char *)&g_MatrixTransformState + 11588)) - 1)));
                                if ( v55 )
                                {
                                  while ( *(HWND *)v55 != v386 )
                                  {
                                    v55 = *(unsigned int *)(v55 + 8);
                                    if ( !v55 )
                                      goto LABEL_114;
                                  }
                                  v56 = (LRESULT (**)(HWND, UINT, WPARAM, LPARAM))(v55 + 4);
                                  if ( v56 )
                                    v53 = *v56;
                                }
                              }
LABEL_114:
                              Destination[0] = 0;
                              v57 = CallWindowProcA(v53, v52, 0x199u, wParam, 0);
                              if ( v57 == -1 || !v57 )
                                v57 = CallWindowProcA(v53, v386, 0x150u, wParam, 0);
                              if ( v57 != -1 && v57 )
                              {
                                wcsncpy(Destination, *(const wchar_t **)(v57 + 8), 0x200u);
                                v412 = 0;
                                wcslen(Destination);
                              }
                            }
                            right = v401.right;
                            v62 = *(CCINIClass **)(v39 + 12);
                            if ( v62 == (CCINIClass *)-1 )
                              v62 = (CCINIClass *)*(&g_MatrixTransformState + 2725);
                            if ( ((unsigned int)v377 & 0x8000000) != 0 )
                              v62 = (CCINIClass *)*(&g_MatrixTransformState + 2985);
                            if ( v402[1] )
                            {
                              right = v402[1];
                              v401.right = right;
                            }
                            v60 = right;
                            if ( !right )
                              v60 = 0xFFFF;
                            if ( (int)aP2.NeedsSaveOrLink + -v394 - v60 - aP2.nextArrayIndex - *v402 < 0 )
                              v60 = (int)aP2.NeedsSaveOrLink + -aP2.nextArrayIndex - v394 - *v402;
                            SendMessageA(*(HWND *)hWnd.__pad_0, 0x49Eu, 0, v389);
                            v61 = wcslen(Destination);
                            Text::Layout(v387, Destination, &aP2, (AbstractClass *)&aP2.__pad_0[4], 0);
                            if ( v61 )
                            {
                              edi131 = &Destination[v61];
                              do
                              {
                                if ( *(int *)aP2.__pad_0 <= v60 )
                                  break;
                                --edi131;
                                --v61;
                                *edi131 = 0;
                                wcscat(Destination, (const wchar_t *)&stru_830620.__pad_14B0[15624]);
                                Text::Layout(v387, Destination, &aP2, (AbstractClass *)&aP2.__pad_0[4], 0);
                              }
                              while ( v61 );
                            }
                            v63 = wcslen(Destination);
                            DrawTextRendererTextAligned((int)v62, v387, &v401.left, Destination, v63, 0, 0, 0, 0);
                            v36 = v402;
LABEL_135:
                            v35 = v398;
                            goto LABEL_136;
                          }
                          if ( v43 == (CCINIClass *)2 )
                          {
                            v44 = *(CCINIClass **)(v39 + 16);
                            if ( !v44 )
                              goto LABEL_136;
                            v42 = (*(int (**)(CCINIClass *))(*(unsigned int *)v44->__pad_0 + 128))(v44);
                            eax93 = (*(int (**)(unsigned int))(**(unsigned int **)(v39 + 16) + 124))(*(unsigned int *)(v39 + 16));
                            edi93 = *v36;
                            v410[2] = eax93;
                            v410[0] = edi93 + aP2.nextArrayIndex + v394;
                            v410[3] = v42;
                            v410[1] = aP2.referenceCount + v395 + (v397 - v395 - v42) / 2;
                            Surface::BlitTransparent(
                              v410,
                              *(int *)&g_abs_87F8E4,
                              *(unsigned int *)(v39 + 16),
                              (255 >> g_abs_89F690 << g_abs_89F690)
                            | (255 >> g_abs_89F690 << g_abs_89F690));
                            goto LABEL_135;
                          }
                          if ( v43 == (CCINIClass *)3 )
                          {
                            v45 = *(unsigned int *)(v39 + 20);
                            v46 = *v36 + aP2.nextArrayIndex + v394;
                            v408[1] = aP2.referenceCount + v395;
                            v408[0] = v46;
                            v408[2] = 32;
                            v408[3] = 12;
                            if ( v45 >= 0 )
                            {
                              if ( v45 >= 300 )
                              {
                                if ( v45 >= 500 )
                                  v50 = 0;
                                else
                                  v50 = 192;
                                v48 = v50 >> g_abs_89F690 << g_abs_89F690;
                                v49 = 192;
                              }
                              else
                              {
                                v48 = 192 >> g_abs_89F690 << g_abs_89F690;
                                v49 = 0;
                              }
                              v47 = (v49 >> g_abs_89F690 << g_abs_89F690) | v48;
                            }
                            else
                            {
                              v47 = 192 >> g_abs_89F690 << g_abs_89F690;
                              v45 = 1000;
                            }
                            UI_Helper_6217E0(v408, *(int *)&g_abs_87F8E4, v47, (v45 << 16) / 1000);
                          }
                        }
                      }
                    }
LABEL_136:
                    v37 = *v35;
                    v28 = wParam;
                    v279 = ++v403 < *v35;
                    j += 20;
                    if ( !v279 )
                      break;
                  }
                }
                ReleaseDC(*(HWND *)hWnd.__pad_0, (HDC)v389);
              }
              else
              {
                v67 = (CCINIClass *)v375[2].unknown38;
                if ( !v67
                  || v28 < 0
                  || v28 >= *(unsigned int *)v67->__pad_0
                  || (v65 = *(unsigned int *)(v67->headNode[1] + 4 * v28), v65 == -1) )
                {
                  v65 = (int)*(&g_MatrixTransformState + 2725);
                }
                if ( ((unsigned int)v377 & 0x8000000) != 0 )
                  v65 = (int)*(&g_MatrixTransformState + 2985);
                if ( SendMessageA(*(HWND *)hWnd.__pad_0, 0x187u, v28, 0) > 0 )
                {
                  v404.left = v394 + aP2.nextArrayIndex;
                  v404.top = v395 + aP2.referenceCount;
                  v404.bottom = v397 - v395;
                  v404.right = v396 - v394;
                  (*(void (**)(unsigned int, struct tagRECT *, AbstractClass *))(**(unsigned int **)&g_abs_87F8E4
                                                                                    + 20))(
                    *(unsigned int *)&g_abs_87F8E4,
                    &v404,
                    var2D28);
                }
                v400.left = v394 + aP2.nextArrayIndex + 2;
                v400.top = v395 + aP2.referenceCount;
                v400.right = v396 - v394;
                v400.bottom = v397 - v395;
                v66 = wcslen(Destination);
                DrawTextRendererTextAligned(v65, v387, &v400.left, Destination, v66, 0, 0, 0, 0);
              }
            }
            wParam = ++v28;
          }
          while ( v28 < (int)Parent );
LABEL_149:
          ValidateRect(*(HWND *)hWnd.__pad_0, (const RECT *)&lParam);
          v70 = (CCINIClass *)v375->headNode[2];
          if ( v70 )
            InvalidateRect((HWND)v70, 0, 0);
        }
        goto LABEL_668;
      }
      v116 = (ObjectClass *)hWnd.headNode[2];
      v377 = (AbstractClass *)hWnd.headNode[2];
      if ( hWnd.headNode[2] < -1 )
        return -1;
      v114 = v375[2].INIClass_field_3C;
      if ( !v114 )
      {
        v115 = (unsigned int *)RA2_OPNEW(0xCu);
        if ( v115 )
        {
          *v115 = 0;
          v115[1] = 0;
          v115[2] = 0;
          v114 = (int)v115;
        }
        else
        {
          v114 = 0;
        }
        v375[2].INIClass_field_3C = v114;
      }
      edi236 = (void (*)(HWND, UINT, WPARAM, LPARAM))SendMessageA;
      if ( (int)v116 >= SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0) - 1 )
      {
        v116 = (ObjectClass *)(SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0) - 1);
        v377 = (AbstractClass *)v116;
      }
      if ( (int)v116 <= SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0) - 1 )
        v117 = (ObjectClass *)(SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0) - 1);
      else
        v117 = v116;
      v121 = *(CCINIClass **)v114;
      if ( (int)v117 >= *(unsigned int *)v114 )
      {
        v119 = (HWND)&v117->__pad_0[1];
        v385 = *(float *)v114;
        Parent = (HWND)&v117->__pad_0[1];
        if ( (int)&v117->__pad_0[1] >= 0 )
        {
          *(unsigned int *)v114 = v119;
          v120 = *(unsigned int *)(v114 + 4);
          if ( (int)v119 > v120 )
          {
            do
            {
              v124 = *(CCINIClass **)v114;
              if ( *(unsigned int *)v114 >= v120 )
              {
                var2D28 = (AbstractClass *)(2 * (unsigned int)v124);
                if ( 2 * (int)v124 < 10 )
                  var2D28 = (AbstractClass *)10;
                v122 = (CCINIClass *)RA2_OPNEW(4 * (unsigned int)var2D28);
                memset(v122, 0, 4 * ((unsigned int)(4 * (unsigned int)var2D28) >> 2));
                v126 = *(CCINIClass **)(v114 + 8);
                if ( v126 )
                  qmemcpy(v122, v126, 4 * *(unsigned int *)v114);
                RA2_OPDEL(*(void **)(v114 + 8));
                v127 = var2D28;
                v119 = Parent;
                v116 = (ObjectClass *)v377;
                edi236 = (void (*)(HWND, UINT, WPARAM, LPARAM))SendMessageA;
                *(unsigned int *)(v114 + 8) = v122;
                *(unsigned int *)(v114 + 4) = v127;
              }
              v120 = *(unsigned int *)(v114 + 4);
            }
            while ( (int)v119 > v120 );
            v121 = (CCINIClass *)IDA_LODWORD(v385);
          }
          for ( k = v121; (int)k < *(unsigned int *)v114; k = (CCINIClass *)((char *)k + 1) )
          {
            eax253 = (unsigned int *)(*(unsigned int *)(v114 + 8) + 4 * (unsigned int)k);
            if ( eax253 )
              *eax253 = 0;
          }
          if ( 3 * *(unsigned int *)v114 <= *(unsigned int *)(v114 + 4) )
            DynamicArray::ShrinkCapacity((int *)v114);
        }
      }
      if ( v116 == (ObjectClass *)-1 )
      {
        v130 = *(CCINIClass **)v114;
        v128 = 0;
        if ( *(int *)v114 > 0 )
        {
          v129 = hWnd.headNode[1];
          do
          {
            ecx261 = v128;
            if ( v130 )
            {
              if ( v128 < 0 )
                ecx261 = 0;
              if ( ecx261 >= (int)v130 )
                ecx261 = (int)&v130[-1].unknown54 + 3;
              v131 = (int *)(*(unsigned int *)(v114 + 8) + 4 * ecx261);
              if ( v131 )
                *v131 = v129;
            }
            v130 = *(CCINIClass **)v114;
            ++v128;
          }
          while ( v128 < *(unsigned int *)v114 );
        }
      }
      else
      {
        v135 = *(CCINIClass **)v114;
        v133 = v116;
        if ( *(unsigned int *)v114 )
        {
          if ( (int)v116 < 0 )
            v133 = 0;
          if ( (int)v133 >= (int)v135 )
            v133 = (ObjectClass *)((char *)&v135[-1].unknown54 + 3);
          v134 = (unsigned int *)(*(unsigned int *)(v114 + 8) + 4 * (unsigned int)v133);
          if ( v134 )
            *v134 = hWnd.headNode[1];
        }
      }
      esi277 = GetParent(*(HWND *)hWnd.__pad_0);
      v371 = *(unsigned int *)hWnd.__pad_0;
      v136 = GetWindowLongA(*(HWND *)hWnd.__pad_0, -12);
      goto LABEL_394;
    }
    v165 = IDA_HIWORD(hWnd.headNode[2]);
    v166 = (CCINIClass *)IDA_LOWORD(hWnd.headNode[2]);
    Parent = (HWND)IDA_LOWORD(hWnd.headNode[2]);
    v377 = (AbstractClass *)IDA_HIWORD(hWnd.headNode[2]);
    v167 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0);
    if ( v165 >= 0 && v165 >= (int)v166 )
    {
      if ( v165 >= v167 )
      {
        v165 = v167 - 1;
        v377 = (AbstractClass *)(v167 - 1);
      }
      v168 = v375[2].INIClass_field_3C;
      if ( !v168 )
      {
        v169 = (unsigned int *)RA2_OPNEW(0xCu);
        if ( v169 )
        {
          v168 = (int)v169;
          *v169 = 0;
          v169[1] = 0;
          v169[2] = 0;
        }
        else
        {
          v168 = 0;
        }
        v375[2].INIClass_field_3C = v168;
      }
      if ( v165 >= *(unsigned int *)v168 )
      {
        v170 = v165 + 1;
        v174 = *(CCINIClass **)v168;
        v385 = *(float *)v168;
        if ( v165 + 1 >= 0 )
        {
          *(unsigned int *)v168 = v170;
          v172 = *(unsigned int *)(v168 + 4);
          if ( v170 > v172 )
          {
            do
            {
              v176 = *(CCINIClass **)v168;
              if ( *(unsigned int *)v168 >= v172 )
              {
                var2D28 = (AbstractClass *)(2 * (unsigned int)v176);
                if ( 2 * (int)v176 < 10 )
                  var2D28 = (AbstractClass *)10;
                ebx353 = (CCINIClass *)RA2_OPNEW(4 * (unsigned int)var2D28);
                memset(ebx353, 0, 4 * ((unsigned int)(4 * (unsigned int)var2D28) >> 2));
                v178 = *(CCINIClass **)(v168 + 8);
                if ( v178 )
                  qmemcpy(ebx353, v178, 4 * *(unsigned int *)v168);
                RA2_OPDEL(*(void **)(v168 + 8));
                v179 = var2D28;
                v166 = (CCINIClass *)Parent;
                *(unsigned int *)(v168 + 8) = ebx353;
                v165 = (int)v377;
                *(unsigned int *)(v168 + 4) = v179;
              }
              v172 = *(unsigned int *)(v168 + 4);
            }
            while ( v165 + 1 > v172 );
            v174 = (CCINIClass *)IDA_LODWORD(v385);
          }
          for ( m = v174; (int)m < *(unsigned int *)v168; m = (CCINIClass *)((char *)m + 1) )
          {
            eax359 = (unsigned int *)(*(unsigned int *)(v168 + 8) + 4 * (unsigned int)m);
            if ( eax359 )
              *eax359 = 0;
          }
          if ( 3 * *(unsigned int *)v168 <= *(unsigned int *)(v168 + 4) )
            DynamicArray::ShrinkCapacity((int *)v168);
        }
      }
      v182 = v166;
      if ( (int)v166 <= v165 )
      {
        v180 = hWnd.headNode[1];
        do
        {
          v184 = *(CCINIClass **)v168;
          v185 = v182;
          if ( *(unsigned int *)v168 )
          {
            if ( (int)v182 < 0 )
              v185 = 0;
            if ( (int)v185 >= (int)v184 )
              v185 = (CCINIClass *)((char *)v184 - 1);
            v183 = (int *)(*(unsigned int *)(v168 + 8) + 4 * (unsigned int)v185);
            if ( v183 )
              *v183 = v180;
          }
          v182 = (CCINIClass *)((char *)v182 + 1);
        }
        while ( (int)v182 <= v165 );
      }
      esi374 = GetParent(*(HWND *)hWnd.__pad_0);
      v373 = *(unsigned int *)hWnd.__pad_0;
      ax374 = GetWindowLongA(*(HWND *)hWnd.__pad_0, -12);
      SendMessageA(esi374, 0x111u, ax374 | 0x10000, v373);
      return 0;
    }
    return -1;
  }
  if ( v7 > 0x4B5 )
  {
    switch ( v7 )
    {
      case 0x4B6u:
      case 0x4CFu:
        goto LABEL_645;
      case 0x4B7u:
        goto LABEL_644;
      case 0x4C4u:
      case 0x4C5u:
      case 0x4C6u:
        BulkCharToWide(v413, (uint8_t *)hWnd.headNode[2], 5120);
        hWnd.headNode[2] = (int)v413;
        goto LABEL_538;
      case 0x4C7u:
      case 0x4C8u:
        wParam = 0;
        goto LABEL_552;
      case 0x4C9u:
      case 0x4CAu:
      case 0x4CBu:
LABEL_538:
        v263 = (ObjectClass *)hWnd.headNode[2];
        v381 = 0;
        v264 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0);
        v265 = v264;
        v266 = 0;
        if ( v264 == -1 )
          goto LABEL_668;
        v267 = (AbstractClass *)hWnd.headNode[1];
        if ( hWnd.headNode[1] >= v264 )
          goto LABEL_667;
        break;
      case 0x4CCu:
      case 0x4CDu:
LABEL_552:
        v381 = 0;
        if ( v7 == 1224 || v7 == 1229 )
        {
          if ( wParam )
          {
            _FFFFFFFCg = ToWideStringChar((char *)hWnd.headNode[2]);
            v270 = (AbstractClass *)CallWindowProcA(lpPrevWndFunc, *(HWND *)hWnd.__pad_0, 0x180u, 0, (LPARAM)_FFFFFFFCg);
          }
          else
          {
            v270 = (AbstractClass *)CallWindowProcA(lpPrevWndFunc, *(HWND *)hWnd.__pad_0, 0x180u, 0, hWnd.headNode[2]);
          }
        }
        else if ( wParam )
        {
          v376 = ToWideStringChar((char *)hWnd.headNode[2]);
          v270 = (AbstractClass *)CallWindowProcA(
                                    lpPrevWndFunc,
                                    *(HWND *)hWnd.__pad_0,
                                    0x181u,
                                    hWnd.headNode[1],
                                    (LPARAM)v376);
        }
        else
        {
          v270 = (AbstractClass *)CallWindowProcA(
                                    lpPrevWndFunc,
                                    *(HWND *)hWnd.__pad_0,
                                    0x181u,
                                    hWnd.headNode[1],
                                    hWnd.headNode[2]);
        }
        v379 = v270;
        if ( v270 == (AbstractClass *)-1 || v270 == (AbstractClass *)-2 )
          goto LABEL_668;
        v271 = (ObjectClass *)hWnd.headNode[2];
        v272 = (CCINIClass *)v270;
        v386 = (HWND)v270;
        if ( wParam )
        {
          v273 = wcslen((const wchar_t *)hWnd.headNode[2]);
        }
        else
        {
          v272 = (CCINIClass *)v386;
          v273 = strlen((const char *)hWnd.headNode[2]);
        }
        v274 = (AbstractClass *)RA2_OPNEW(2 * v273 + 18);
        if ( v274 )
        {
          *(unsigned int *)&v274->__pad_0[8] = &v274->uniqueId;
          *(unsigned int *)v274->__pad_0 = *(unsigned int *)&v375->needsSave_flag;
          *(unsigned int *)&v375->needsSave_flag = v274;
          v275 = (CCINIClass *)wParam;
          *(unsigned int *)&v274->__pad_0[4] = 0;
          *(unsigned int *)&v274->__pad_0[12] = v275;
          if ( v275 )
            wcscpy(*(wchar_t **)&v274->__pad_0[8], (const wchar_t *)v271);
          else
            BulkCharToWide(*(unsigned short **)&v274->__pad_0[8], (uint8_t *)v271, -1);
          v276 = (AbstractClass *)CallWindowProcA(
                                    lpPrevWndFunc,
                                    *(HWND *)hWnd.__pad_0,
                                    0x19Au,
                                    (WPARAM)v379,
                                    (LPARAM)v274);
          v379 = v276;
          if ( v276 != (AbstractClass *)-1 && v276 != (AbstractClass *)-2 )
          {
            v379 = (AbstractClass *)v272;
            if ( hWnd.headNode[0] == 1224 )
              goto LABEL_609;
            v277 = v375[2].unknown38;
            if ( v277 )
            {
              v278 = *(CCINIClass **)v277;
              v279 = (int)v272 <= *(unsigned int *)v277;
              if ( (int)v272 < *(unsigned int *)v277 )
              {
                v280 = v272;
                v377 = (AbstractClass *)v272;
                if ( !v279 )
                {
                  v280 = v278;
                  v377 = (AbstractClass *)v278;
                }
                v281 = *(unsigned int *)(v277 + 4);
                if ( (int)v280 >= v281 && (int)v278 >= v281 )
                {
                  var2D28 = (AbstractClass *)(2 * (unsigned int)v278);
                  if ( 2 * (int)v278 < 10 )
                    var2D28 = (AbstractClass *)10;
                  v282 = (CCINIClass *)RA2_OPNEW(4 * (unsigned int)var2D28);
                  memset(v282, 0, 4 * ((unsigned int)(4 * (unsigned int)var2D28) >> 2));
                  v283 = *(CCINIClass **)(v277 + 8);
                  if ( v283 )
                    qmemcpy(v282, v283, 4 * *(unsigned int *)v277);
                  RA2_OPDEL(*(void **)(v277 + 8));
                  v284 = var2D28;
                  v272 = (CCINIClass *)v386;
                  v280 = (CCINIClass *)v377;
                  *(unsigned int *)(v277 + 8) = v282;
                  *(unsigned int *)(v277 + 4) = v284;
                }
                if ( *(unsigned int *)v277 >= *(unsigned int *)(v277 + 4) )
                  Options::GrowBuffer((int *)v277);
                if ( (int)v280 < *(unsigned int *)v277 )
                  memcpy(
                    (void *)(*(unsigned int *)(v277 + 8) + 4 * (unsigned int)v280 + 4),
                    (const void *)(*(unsigned int *)(v277 + 8) + 4 * (unsigned int)v280),
                    4 * (*(unsigned int *)v277 + 0x3FFFFFFF * (unsigned int)v280));
                v285 = (unsigned int *)(*(unsigned int *)(v277 + 8) + 4 * (unsigned int)v280);
                if ( v285 )
                  *v285 = -1;
                ++*(unsigned int *)v277;
              }
            }
            v286 = v375[2].INIClass_field_3C;
            if ( v286 )
            {
              v287 = *(CCINIClass **)v286;
              v288 = (int)v272 <= *(unsigned int *)v286;
              if ( (int)v272 < *(unsigned int *)v286 )
              {
                v289 = (int)v272;
                v377 = (AbstractClass *)v272;
                if ( !v288 )
                {
                  v289 = (int)v287;
                  v377 = (AbstractClass *)v287;
                }
                v290 = *(unsigned int *)(v286 + 4);
                if ( v289 >= v290 && (int)v287 >= v290 )
                {
                  var2D28 = (AbstractClass *)(2 * (unsigned int)v287);
                  if ( 2 * (int)v287 < 10 )
                    var2D28 = (AbstractClass *)10;
                  v291 = (CCINIClass *)RA2_OPNEW(4 * (unsigned int)var2D28);
                  memset(v291, 0, 4 * ((unsigned int)(4 * (unsigned int)var2D28) >> 2));
                  v292 = *(CCINIClass **)(v286 + 8);
                  if ( v292 )
                    qmemcpy(v291, v292, 4 * *(unsigned int *)v286);
                  RA2_OPDEL(*(void **)(v286 + 8));
                  v293 = var2D28;
                  v289 = (int)v377;
                  v272 = (CCINIClass *)v386;
                  *(unsigned int *)(v286 + 8) = v291;
                  *(unsigned int *)(v286 + 4) = v293;
                }
                if ( *(unsigned int *)v286 >= *(unsigned int *)(v286 + 4) )
                  Options::GrowBuffer((int *)v286);
                if ( v289 < *(unsigned int *)v286 )
                  memcpy(
                    (void *)(*(unsigned int *)(v286 + 8) + 4 * v289 + 4),
                    (const void *)(*(unsigned int *)(v286 + 8) + 4 * v289),
                    4 * (*(unsigned int *)v286 + 0x3FFFFFFF * v289));
                v294 = (unsigned int *)(*(unsigned int *)(v286 + 8) + 4 * v289);
                if ( v294 )
                  *v294 = 0;
                ++*(unsigned int *)v286;
              }
            }
            if ( (int)v272 < 0 )
LABEL_609:
              v386 = (HWND)SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0);
            v398 = *(int **)v375[2].__pad_48;
            v295 = (CCINIClass **)v398;
            unknown_libname_74(&lParam.tmAscent);
            unknown_libname_74(&lParam.tmDescent);
            lParam.tmHeight = 0;
            lParam.tmInternalLeading = -1;
            lParam.tmExternalLeading = 0;
            lParam.tmAveCharWidth = -1;
            if ( v295 )
            {
              v296 = *v295;
              v297 = 0;
              v279 = (int)*v295 <= 0;
              v377 = 0;
              v387 = 0;
              if ( !v279 )
              {
                while ( 1 )
                {
                  if ( v297 >= 0 && v297 < (int)v296 )
                    v377 = (AbstractClass *)((char *)v295[2] + 20 * v297);
                  v300 = (CCINIClass *)v386;
                  v301 = (int *)&v377->__pad_0[8];
                  v302 = -(v387 != 0);
                  IDA_LOBYTE(v302) = v302 & 0xFC;
                  lParam.tmHeight = v302 + 4;
                  v303 = *(CCINIClass **)&v377->__pad_0[8];
                  if ( (int)v386 > (int)v303 )
                    v300 = *(CCINIClass **)&v377->__pad_0[8];
                  v304 = *(unsigned int *)&v377->__pad_0[12];
                  if ( (int)v300 >= v304 && (int)v303 >= v304 )
                  {
                    var2D28 = (AbstractClass *)(2 * (unsigned int)v303);
                    if ( 2 * (int)v303 < 10 )
                      var2D28 = (AbstractClass *)10;
                    v389 = RA2_OPNEW(24 * (unsigned int)var2D28);
                    memset((void *)v389, 0, 4 * ((unsigned int)(24 * (unsigned int)var2D28) >> 2));
                    v305 = (CCINIClass *)v377->uniqueId;
                    if ( v305 )
                      qmemcpy((void *)v389, v305, 24 * *v301);
                    RA2_OPDEL((void *)v377->uniqueId);
                    v306 = var2D28;
                    v377->uniqueId = v389;
                    v301[1] = (int)v306;
                  }
                  if ( *v301 >= v301[1] )
                    DynamicVector::GrowCapacity(v301);
                  if ( (int)v300 < *v301 )
                    memcpy(
                      (void *)(v301[2] + 8 * (3 * (unsigned int)v300 + 3)),
                      (const void *)(v301[2] + 24 * (unsigned int)v300),
                      24 * *v301 - 24 * (unsigned int)v300);
                  v307 = (wchar_t **)(v301[2] + 24 * (unsigned int)v300);
                  if ( v307 )
                    Struct::WideStringCopy(v307, (ObjectClass *)&lParam);
                  v308 = (CCINIClass **)v398;
                  ecx638 = v387;
                  ++*v301;
                  v296 = *v308;
                  v387 = (unsigned int *)((char *)ecx638 + 1);
                  if ( (int)((char *)ecx638 + 1) >= (int)v296 )
                    break;
                  v297 = (int)v387;
                  v295 = (CCINIClass **)v398;
                }
              }
            }
            DeleteAndZero::Alt((void **)&lParam.tmDescent);
            DeleteAndZero::Alt((void **)&lParam.tmAscent);
            goto LABEL_668;
          }
        }
        else
        {
          v379 = (AbstractClass *)-2;
        }
        CallWindowProcA(lpPrevWndFunc, *(HWND *)hWnd.__pad_0, 0x182u, (WPARAM)v272, 0);
        if ( v274 )
        {
          v298 = 0;
          v299 = *(AbstractClass **)&v375->needsSave_flag;
          if ( v299 )
          {
            while ( v274 != v299 )
            {
              v298 = v299;
              v299 = *(AbstractClass **)v299->__pad_0;
              if ( !v299 )
                goto LABEL_668;
            }
            if ( v298 )
              *(unsigned int *)v298->__pad_0 = *(unsigned int *)v299->__pad_0;
            else
              *(unsigned int *)&v375->needsSave_flag = *(unsigned int *)v299->__pad_0;
            RA2_OPDEL(v299);
          }
        }
        goto LABEL_668;
      case 0x4E8u:
        v314 = IDA_HIWORD(hWnd.headNode[2]);
        result = -1;
        if ( IDA_LOWORD(hWnd.headNode[2]) < aP2.uniqueId && v314 < aP2.abstractFlags )
        {
          v315 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x1A1u, 0, 0);
          v316 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0);
          result = *(unsigned int *)&v375[2].ownsFile + v314 / v315;
          if ( result < 0 || result > v316 - 1 )
            return -1;
        }
        return result;
      case 0x4EFu:
        return v375->headNode[2];
      default:
        goto LABEL_668;
    }
    while ( !v266 )
    {
      v379 = (AbstractClass *)CallWindowProcA(lpPrevWndFunc, *(HWND *)hWnd.__pad_0, 0x199u, (WPARAM)v267, 0);
      if ( v379 != (AbstractClass *)-1 )
      {
        if ( hWnd.headNode[0] == 1221 || hWnd.headNode[0] == 1226 )
        {
          v269 = _wcsicmp((const wchar_t *)v263, *(const wchar_t **)&v379->__pad_0[8]);
        }
        else
        {
          v268 = wcslen((const wchar_t *)v263);
          v269 = _wcsnicmp((const wchar_t *)v263, *(const wchar_t **)&v379->__pad_0[8], v268);
        }
        v379 = v267;
        v266 = v269 == 0;
      }
      v267 = (AbstractClass *)((char *)v267 + 1);
      if ( (int)v267 >= v265 )
      {
        if ( !v266 )
        {
LABEL_667:
          v379 = (AbstractClass *)-1;
          goto LABEL_668;
        }
        break;
      }
    }
    if ( hWnd.headNode[0] == 1222 )
      v379 = (AbstractClass *)SendMessageA(*(HWND *)hWnd.__pad_0, 0x186u, (WPARAM)v379, 0);
    goto LABEL_668;
  }
  if ( v7 == 1205 )
  {
LABEL_644:
    wParam = 0;
LABEL_645:
    v309 = (ObjectClass *)hWnd.headNode[2];
    v381 = 0;
    if ( hWnd.headNode[2] && hWnd.headNode[0] != 394 && hWnd.headNode[0] != 1231 )
    {
      if ( wParam )
        *(unsigned short *)hWnd.headNode[2] = 0;
      else
        *(unsigned char *)hWnd.headNode[2] = 0;
    }
    v311 = CallWindowProcA(lpPrevWndFunc, *(HWND *)hWnd.__pad_0, 0x199u, hWnd.headNode[1], 0);
    edi651 = (AbstractClass *)v311;
    v379 = (AbstractClass *)v311;
    if ( v311 != -1 )
    {
      if ( !v311 )
        goto LABEL_668;
      if ( hWnd.headNode[0] == 1231 )
      {
        edi651 = *(AbstractClass **)(v311 + 12);
        v379 = edi651;
      }
      else
      {
        v312 = (CCINIClass *)(v311 + 8);
        edi651 = (AbstractClass *)wcslen(*(const wchar_t **)(v311 + 8));
        v379 = edi651;
        if ( hWnd.headNode[0] != 394 )
        {
          if ( wParam )
            wcscpy((wchar_t *)v309, *(const wchar_t **)v312->__pad_0);
          else
            CopyWideToChar(v309, *(char **)v312->__pad_0, -1);
        }
      }
    }
    if ( (int)edi651 < 0 )
      v379 = 0;
LABEL_668:
    if ( v393 == 1 )
    {
      v317 = (HWND *)&v375->headNode[2];
      if ( !v375->headNode[2] )
      {
        *v317 = (HWND)1;
        GetWindowLongA(*(HWND *)hWnd.__pad_0, -12);
        v318 = GetParent(*(HWND *)hWnd.__pad_0);
        ScreenDialogToClient(v318, &v404);
        ScreenDialogToClient(*(HWND *)hWnd.__pad_0, &v401);
        v319 = v401.left - v404.left;
        v320 = v401.top - v404.top;
        *v317 = CreateWindowExA(
                  0,
                  &stru_830620.__pad_14B0[15584],
                  0,
                  0x50010001u,
                  v401.left - v404.left - nWidth + aP2.uniqueId + 1,
                  *(unsigned int *)&aP2.__pad_0[12] + v401.top - v404.top,
                  nWidth,
                  v401.bottom - v401.top,
                  v318,
                  0,
                  (HINSTANCE)g_hInstance,
                  0);
        v375->headNode[0] = nWidth;
        Dialog::InitializeControls(*v317, 0);
        v393 = 0;
        if ( *(&g_MatrixTransformState + 2877) )
        {
          v321 = (HWND *)*(&(*(&g_MatrixTransformState + 2876))->X
                         + (((int (*)(HWND *))*(&g_MatrixTransformState + 2882))(v317)
                          & ((1 << *((char *)&g_MatrixTransformState + 11516)) - 1)));
          if ( v321 )
          {
            while ( *v321 != *v317 )
            {
              v321 = (HWND *)v321[129];
              if ( !v321 )
                goto LABEL_676;
            }
            v393 = (int)(v321 + 1);
          }
        }
LABEL_676:
        eax676 = v393;
        v322 = (CCINIClass *)IDA_LODWORD(v385);
        *(unsigned int *)(v393 + 8) = *(unsigned int *)hWnd.__pad_0;
        *(unsigned char *)(eax676 + 205) = 0;
        lParam.tmInternalLeading = (LONG)v322;
        lParam.tmAscent = 5;
        ecx676 = *(unsigned int *)&v375[2].ownsFile;
        v324 = (CCINIClass *)*v317;
        lParam.tmDescent = 0;
        lParam.tmAveCharWidth = ecx676;
        lParam.tmHeight = 28;
        SendMessageA((HWND)v324, 0xE9u, 0, (LPARAM)&lParam);
        SetWindowPos(*(HWND *)hWnd.__pad_0, 0, 0, 0, v401.right - v401.left - nWidth, v401.bottom - v401.top, 2u);
        ShowWindow(*v317, 5);
        BringWindowToTop(*v317);
        InvalidateRect(*v317, 0, 0);
        UpdateWindow(*v317);
        v400.left = v319;
        v400.top = v320;
        v400.right = v319 + aP2.uniqueId + 1;
        v400.bottom = aP2.abstractFlags + v320 + 1;
        ValidateRect(v318, &v400);
      }
      goto LABEL_743;
    }
    if ( v393 || !v375->headNode[2] || *(unsigned int *)v375->__pad_20 )
    {
LABEL_743:
      if ( v381 )
        v367 = (AbstractClass *)CallWindowProcA(
                                  lpPrevWndFunc,
                                  *(HWND *)hWnd.__pad_0,
                                  hWnd.headNode[0],
                                  hWnd.headNode[1],
                                  hWnd.headNode[2]);
      else
        v367 = v379;
      if ( hWnd.headNode[0] == 130 )
      {
        v365 = (CCINIClass *)v375[2].unknown38;
        if ( v365 )
        {
          *(unsigned int *)v365->__pad_0 = 0;
          RA2_OPDEL((void *)v365->headNode[1]);
          RA2_OPDEL(v365);
        }
        v366 = (CCINIClass *)v375[2].INIClass_field_3C;
        if ( v366 )
        {
          *(unsigned int *)v366->__pad_0 = 0;
          RA2_OPDEL((void *)v366->headNode[1]);
          RA2_OPDEL(v366);
        }
      }
      return (int)v367;
    }
    DestroyWindow((HWND)v375->headNode[2]);
    wParam = v375->headNode[2];
    if ( *(&g_MatrixTransformState + 2895) )
    {
      *(unsigned long long *)aP2.__pad_0 = (unsigned int)&(*(&g_MatrixTransformState + 2895))[-1].Z + 3;
      *(unsigned int *)aP2.__pad_0 = *(&g_MatrixTransformState + 2896);
      v385 = (double)((unsigned int)&(*(&g_MatrixTransformState + 2895))[-1].Z + 3)
           / (double)(int)*(&g_MatrixTransformState + 2896);
      esi681 = ((int (*)(WPARAM *))*(&g_MatrixTransformState + 2900))(&wParam)
             & ((1 << *((char *)&g_MatrixTransformState + 11588)) - 1);
      v326 = (CCINIClass *)*(&(*(&g_MatrixTransformState + 2894))->X + esi681);
      if ( v326 )
      {
        if ( *(unsigned int *)v326->__pad_0 == wParam )
        {
          v327 = (CCINIClass *)v326->headNode[1];
          RA2_OPDEL(*((void **)&(*(&g_MatrixTransformState + 2894))->X + esi681));
          v329 = v385;
          *(&(*(&g_MatrixTransformState + 2894))->X + esi681) = (int)v327;
          *(&g_MatrixTransformState + 2895) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 2895) - 1);
          if ( v329 <= *((double *)&g_MatrixTransformState + 1451)
            && *(&g_MatrixTransformState + 2896) > *(&g_MatrixTransformState + 2906)
            && *((unsigned char *)&g_MatrixTransformState + 11596) != 1 )
          {
            v330 = (CCINIClass *)*(&g_MatrixTransformState + 2894);
            esi686 = (int)*(&g_MatrixTransformState + 2896);
            v332 = (unsigned int)*(&g_MatrixTransformState + 2896) >> 1;
            *((unsigned long long *)&g_MatrixTransformState + 1448) = __PAIR64__(
                                                            *(&g_MatrixTransformState + 2897),
                                                            (unsigned int)*(&g_MatrixTransformState + 2896) >> 1)
                                                        - 0x100000000LL;
            *(&g_MatrixTransformState + 2894) = (CoordStruct *)RA2_OPNEW(4 * v332);
            memset(*(&g_MatrixTransformState + 2894), 0, 4 * (unsigned int)*(&g_MatrixTransformState + 2896));
            if ( esi686 > 0 )
            {
              v331 = v330;
              v334 = esi686;
              do
              {
                v333 = *(CCINIClass **)v331->__pad_0;
                if ( *(unsigned int *)v331->__pad_0 )
                {
                  do
                  {
                    eax689 = HashMap::ComputeIndex((int)(&(&g_MatrixTransformState)[241] + 2), v333);
                    edx689 = *(&(*(&g_MatrixTransformState + 2894))->X + eax689);
                    *(&(*(&g_MatrixTransformState + 2894))->X + eax689) = (int)v333;
                    v336 = (CCINIClass *)v333->headNode[1];
                    v333->headNode[1] = edx689;
                    v333 = v336;
                  }
                  while ( v336 );
                }
                v331 = (CCINIClass *)((char *)v331 + 4);
                --v334;
              }
              while ( v334 );
            }
            RA2_OPDEL(v330);
          }
        }
        else
        {
          v337 = (CCINIClass *)v326->headNode[1];
          if ( v337 )
          {
            while ( *(unsigned int *)v337->__pad_0 != wParam )
            {
              v326 = v337;
              v337 = (CCINIClass *)v337->headNode[1];
              if ( !v337 )
                goto LABEL_697;
            }
            v326->headNode[1] = v337->headNode[1];
            *(&g_MatrixTransformState + 2895) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 2895) - 1);
            RA2_OPDEL(v337);
          }
LABEL_697:
          if ( v385 <= *((double *)&g_MatrixTransformState + 1451) )
            HashTable::Shrink2(&g_MatrixTransformState + 2894);
        }
      }
    }
    memset(Destination, 0, 0x200u);
    wcscpy(&Destination[52], L"\v");
    *(unsigned int *)&Destination[50] = aP0;
    v340 = (unsigned int *)RA2_OPNEW(4u);
    if ( v340 )
      v341 = unknown_libname_74(v340);
    else
      v341 = 0;
    *(unsigned int *)&Destination[30] = v341;
    *(unsigned int *)&Destination[32] = 0;
    *(unsigned int *)&Destination[46] = 0;
    *(unsigned int *)&Destination[72] = -1;
    if ( *(&g_MatrixTransformState + 2877) )
    {
      *(unsigned long long *)aP2.__pad_0 = (unsigned int)&(*(&g_MatrixTransformState + 2877))[-1].Z + 3;
      *(unsigned int *)aP2.__pad_0 = *(&g_MatrixTransformState + 2878);
      v385 = (double)((unsigned int)&(*(&g_MatrixTransformState + 2877))[-1].Z + 3)
           / (double)(int)*(&g_MatrixTransformState + 2878);
      esi703 = ((int (*)(WPARAM *))*(&g_MatrixTransformState + 2882))(&wParam)
             & ((1 << *((char *)&g_MatrixTransformState + 11516)) - 1);
      v343 = (char *)*(&(*(&g_MatrixTransformState + 2876))->X + esi703);
      if ( v343 )
      {
        if ( *(unsigned int *)v343 == wParam )
        {
          DialogClass::CopyTemplateStruct(Destination, (AbstractClass *)(v343 + 4));
          v342 = (CCINIClass *)*(&(*(&g_MatrixTransformState + 2876))->X + esi703);
          CCINIClass_field_4C = v342[5].CCINIClass_field_4C;
          if ( v342 )
          {
            Dialog::CleanupTree((int)v342->headNode);
            RA2_OPDEL(v342);
          }
          v346 = v385;
          *(&(*(&g_MatrixTransformState + 2876))->X + esi703) = CCINIClass_field_4C;
          *(&g_MatrixTransformState + 2877) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 2877) - 1);
          if ( v346 > *((double *)&g_MatrixTransformState + 1442) )
            goto LABEL_716;
        }
        else
        {
          esi709 = (char *)*((unsigned int *)v343 + 129);
          if ( esi709 )
          {
            while ( *(unsigned int *)esi709 != wParam )
            {
              v343 = esi709;
              esi709 = (char *)*((unsigned int *)esi709 + 129);
              if ( !esi709 )
                goto LABEL_714;
            }
            DialogClass::CopyTemplateStruct(Destination, (AbstractClass *)(esi709 + 4));
            *((unsigned int *)v343 + 129) = *((unsigned int *)esi709 + 129);
            *(&g_MatrixTransformState + 2877) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 2877) - 1);
            Options::DestroyComposite(esi709, 1);
          }
LABEL_714:
          if ( v385 > *((double *)&g_MatrixTransformState + 1442) )
            goto LABEL_716;
        }
        HashTable::Rebuild2(&g_MatrixTransformState + 2876);
      }
    }
LABEL_716:
    GadgetClass::SetTooltip((void **)Destination, 0);
    for ( n = *(unsigned int **)&Destination[26]; *(unsigned int *)&Destination[26]; n = *(unsigned int **)&Destination[26] )
      LinkedList::Remove(Destination, n);
    v347 = *(CCINIClass **)&Destination[30];
    if ( *(unsigned int *)&Destination[30] )
    {
      DeleteAndZero::Alt(*(void ***)&Destination[30]);
      RA2_OPDEL(v347);
    }
    if ( *(&g_MatrixTransformState + 2733) )
    {
      *(unsigned long long *)aP2.__pad_0 = (unsigned int)&(*(&g_MatrixTransformState + 2733))[-1].Z + 3;
      *(unsigned int *)aP2.__pad_0 = *(&g_MatrixTransformState + 2734);
      v385 = (double)((unsigned int)&(*(&g_MatrixTransformState + 2733))[-1].Z + 3)
           / (double)(int)*(&g_MatrixTransformState + 2734);
      esi721 = ((int (*)(WPARAM *))*(&g_MatrixTransformState + 2738))(&wParam)
             & ((1 << *((char *)&g_MatrixTransformState + 10940)) - 1);
      v349 = (CCINIClass *)*(&(*(&g_MatrixTransformState + 2732))->X + esi721);
      if ( v349 )
      {
        if ( *(unsigned int *)v349->__pad_0 == wParam )
        {
          v350 = (CCINIClass *)v349->headNode[1];
          RA2_OPDEL(*((void **)&(*(&g_MatrixTransformState + 2732))->X + esi721));
          v353 = v385;
          *(&(*(&g_MatrixTransformState + 2732))->X + esi721) = (int)v350;
          *(&g_MatrixTransformState + 2733) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 2733) - 1);
          if ( v353 <= *((double *)&g_MatrixTransformState + 1370)
            && *(&g_MatrixTransformState + 2734) > *(&g_MatrixTransformState + 2744)
            && *((unsigned char *)&(&g_MatrixTransformState)[228] + 4) != 1 )
          {
            ebp726 = (CCINIClass *)*(&g_MatrixTransformState + 2732);
            v355 = (int)*(&g_MatrixTransformState + 2734);
            Parent = (HWND)*(&g_MatrixTransformState + 2732);
            eax726 = (unsigned int)*(&g_MatrixTransformState + 2734) >> 1;
            *((unsigned long long *)&g_MatrixTransformState + 1367) = __PAIR64__(
                                                            *(&g_MatrixTransformState + 2735),
                                                            (unsigned int)*(&g_MatrixTransformState + 2734) >> 1)
                                                        - 0x100000000LL;
            *(&g_MatrixTransformState + 2732) = (CoordStruct *)RA2_OPNEW(4 * eax726);
            memset(*(&g_MatrixTransformState + 2732), 0, 4 * (unsigned int)*(&g_MatrixTransformState + 2734));
            if ( v355 > 0 )
            {
              v354 = ebp726;
              v358 = v355;
              do
              {
                v356 = *(CCINIClass **)v354->__pad_0;
                if ( *(unsigned int *)v354->__pad_0 )
                {
                  do
                  {
                    eax729 = HashMap::ComputeIndex((int)(&g_MatrixTransformState + 2732), v356);
                    v361 = *(&(*(&g_MatrixTransformState + 2732))->X + eax729);
                    *(&(*(&g_MatrixTransformState + 2732))->X + eax729) = (int)v356;
                    v359 = (CCINIClass *)v356->headNode[1];
                    v356->headNode[1] = v361;
                    v356 = v359;
                  }
                  while ( v359 );
                }
                v354 = (CCINIClass *)((char *)v354 + 4);
                --v358;
              }
              while ( v358 );
              ebp726 = (CCINIClass *)Parent;
            }
            RA2_OPDEL(ebp726);
          }
        }
        else
        {
          v360 = (CCINIClass *)v349->headNode[1];
          if ( v360 )
          {
            while ( *(unsigned int *)v360->__pad_0 != wParam )
            {
              v349 = v360;
              v360 = (CCINIClass *)v360->headNode[1];
              if ( !v360 )
                goto LABEL_738;
            }
            v349->headNode[1] = v360->headNode[1];
            *(&g_MatrixTransformState + 2733) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 2733) - 1);
            RA2_OPDEL(v360);
          }
LABEL_738:
          if ( v385 <= *((double *)&g_MatrixTransformState + 1370) )
            HashTable::Shrink2(&g_MatrixTransformState + 2732);
        }
      }
    }
    v364 = (void *)GetWindowLongA((HWND)wParam, -21);
    if ( v364 )
      RA2_OPDEL(v364);
    SetWindowLongA((HWND)wParam, -21, 0);
    Object::RemoveObjectArray((void *)wParam);
    edi742 = nWidth;
    v375->headNode[2] = 0;
    v375->headNode[0] = 0;
    SetWindowPos(
      *(HWND *)hWnd.__pad_0,
      0,
      0,
      0,
      (int)&(*(&g_MatrixTransformState + 3064))->X + aP2.uniqueId - *(unsigned int *)&aP2.__pad_0[8] + edi742 + 1,
      aP2.abstractFlags + 2 * (unsigned int)*(&g_MatrixTransformState + 3064) - *(unsigned int *)&aP2.__pad_0[12],
      2u);
    esi742 = GetParent(*(HWND *)hWnd.__pad_0);
    ScreenDialogToClient(esi742, &v404);
    v400.left = aP2.nextArrayIndex - v404.left - 1;
    v400.top = aP2.referenceCount - v404.top - 1;
    v400.right = edi742 + aP2.uniqueId + aP2.nextArrayIndex - v404.left;
    v400.bottom = aP2.referenceCount - v404.top + aP2.abstractFlags + 1;
    ValidateRect(esi742, &v400);
    goto LABEL_743;
  }
  if ( v7 > 0x4A6 )
  {
    switch ( v7 )
    {
      case 0x4A7u:
        esi478 = *(unsigned int *)v375[2].__pad_48;
        if ( !esi478 )
          return -1;
        v236 = *(CCINIClass **)esi478;
        v235 = 0;
        edi480 = 0;
        if ( *(int *)esi478 <= 0 )
          return -1;
        for ( ii = 0; ; ii += 20 )
        {
          if ( ii >= 0 && edi480 < (int)v236 )
            v235 = (unsigned int *)(ii + *(unsigned int *)(esi478 + 8));
          if ( *v235 == hWnd.headNode[2] )
            break;
          if ( ++edi480 >= (int)v236 )
            return -1;
        }
        if ( v236 )
        {
          if ( edi480 < 0 )
            edi480 = 0;
          if ( edi480 >= (int)v236 )
            edi480 = (int)&v236[-1].unknown54 + 3;
          v238 = 20 * edi480 + *(unsigned int *)(esi478 + 8) + 8;
          Options::DeleteAndZero((int *)v238);
          RA2_OPDEL(*(void **)(v238 + 8));
          memcpy(
            (void *)(*(unsigned int *)(esi478 + 8) + 20 * edi480),
            (const void *)(*(unsigned int *)(esi478 + 8) + 4 * (5 * edi480 + 5)),
            20 * *(unsigned int *)esi478 - 4 * (5 * edi480 + 5));
          v239 = *(unsigned int *)esi478 - 1;
          *(unsigned int *)esi478 = v239;
          if ( 3 * v239 <= *(unsigned int *)(esi478 + 4) )
            Options::ReadOptionValue((int *)esi478);
        }
        return hWnd.headNode[2];
      case 0x4A8u:
        v240 = *(unsigned int *)v375[2].__pad_48;
        if ( !v240 )
          return -1;
        v241 = 0;
        v242 = 0;
        v243 = (CCINIClass *)IDA_HIWORD(hWnd.headNode[1]);
        v246 = *(CCINIClass **)v240;
        v245 = (unsigned int *)IDA_LOWORD(hWnd.headNode[1]);
        IDA_LODWORD(v385) = IDA_HIWORD(hWnd.headNode[1]);
        v387 = (unsigned int *)IDA_LOWORD(hWnd.headNode[1]);
        if ( (int)v246 <= 0 )
          return -1;
        ecx499 = 0;
        break;
      case 0x4ADu:
        Parent = (HWND)SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0);
        v220 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x1A1u, 0, 0);
        j = *(unsigned int *)v375[2].__pad_48;
        if ( !j )
          return 0;
        v221 = 0;
        v222 = -1;
        v223 = (signed int)IDA_HIWORD(hWnd.headNode[1]) / v220;
        v377 = 0;
        v224 = *(unsigned int *)&v375[2].ownsFile;
        v225 = 0;
        v389 = -1;
        v226 = v224 + v223;
        v229 = *(CCINIClass **)j;
        if ( *(int *)j <= 0 )
          return 0;
        var2D28 = 0;
        do
        {
          if ( (int)var2D28 >= 0 && v225 < (int)v229 )
            v221 = &var2D28->__pad_0[*(unsigned int *)(j + 8)];
          if ( *(unsigned int *)v221 <= (int)IDA_LOWORD(hWnd.headNode[1]) )
          {
            if ( *(unsigned int *)v221 <= (int)v377 )
            {
              v222 = v389;
            }
            else
            {
              v222 = v225;
              v377 = *(AbstractClass **)v221;
              v389 = v225;
            }
          }
          ++v225;
          var2D28 = (AbstractClass *)((char *)var2D28 + 20);
        }
        while ( v225 < (int)v229 );
        if ( v222 == -1 )
          return 0;
        if ( v226 < 0 || v226 >= (int)Parent )
          return 0;
        if ( v222 >= 0 && v222 < (int)v229 )
          v221 = (char *)(*(unsigned int *)(j + 8) + 20 * v222);
        if ( !v221 )
          return 0;
        if ( v226 < *((unsigned int *)v221 + 2)
          && (v228 = *((unsigned int *)v221 + 4) + 24 * v226) != 0
          && (v231 = (ObjectClass *)hWnd.headNode[2]) != 0
          && (v232 = (CCINIClass *)(v228 + 8),
              v233 = WideString::GetOrEmpty((wchar_t **)(v228 + 8)),
              wcscpy((wchar_t *)v231, (const wchar_t *)v233),
              v234 = WideString::GetOrEmpty((wchar_t **)v232),
              !wcslen((const wchar_t *)v234)) )
        {
          return 1;
        }
        else
        {
          return 0;
        }
      case 0x4B3u:
        goto LABEL_645;
      default:
        goto LABEL_668;
    }
    while ( 1 )
    {
      if ( ecx499 >= 0 && v242 < (int)v246 )
        v241 = ecx499 + *(unsigned int *)(v240 + 8);
      if ( *(unsigned int *)v241 == IDA_LOWORD(hWnd.headNode[1]) )
        break;
      ++v242;
      ecx499 += 20;
      if ( v242 >= (int)v246 )
        return -1;
    }
    if ( v242 == -1 )
      return -1;
    if ( (int)v243 >= SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0) )
      return -1;
    unknown_libname_74(&lParam.tmAscent);
    unknown_libname_74(&lParam.tmDescent);
    lParam.tmHeight = 0;
    lParam.tmInternalLeading = -1;
    lParam.tmExternalLeading = 0;
    lParam.tmAveCharWidth = -1;
    if ( !v242 )
      lParam.tmHeight = 4;
    v249 = *(CCINIClass **)(v241 + 8);
    v248 = v241 + 8;
    if ( (int)v243 >= (int)v249 )
    {
      ecx512 = &v243->__pad_0[1];
      v252 = v249;
      Parent = (HWND)v249;
      if ( (int)&v243->__pad_0[1] >= 0 )
      {
        *(unsigned int *)v248 = ecx512;
        v251 = *(unsigned int *)(v248 + 4);
        if ( (int)ecx512 > v251 )
        {
          do
          {
            v254 = *(CCINIClass **)v248;
            if ( *(unsigned int *)v248 >= v251 )
            {
              v253 = 2 * (unsigned int)v254;
              if ( 2 * (int)v254 < 10 )
                v253 = 10;
              v377 = (AbstractClass *)RA2_OPNEW(24 * v253);
              memset(v377, 0, 4 * ((unsigned int)(24 * v253) >> 2));
              v256 = *(CCINIClass **)(v248 + 8);
              if ( v256 )
                qmemcpy(v377, v256, 24 * *(unsigned int *)v248);
              RA2_OPDEL(*(void **)(v248 + 8));
              v252 = (CCINIClass *)Parent;
              *(unsigned int *)(v248 + 8) = v377;
              *(unsigned int *)(v248 + 4) = v253;
              v243 = (CCINIClass *)IDA_LODWORD(v385);
            }
            v251 = *(unsigned int *)(v248 + 4);
          }
          while ( (int)&v243->__pad_0[1] > v251 );
        }
        v257 = v252;
        if ( (int)v252 < *(unsigned int *)v248 )
        {
          esi522 = 24 * (unsigned int)v252;
          do
          {
            ecx523 = (wchar_t **)(*(unsigned int *)(v248 + 8) + esi522);
            if ( ecx523 )
              Struct::WideStringCopy(ecx523, (ObjectClass *)&lParam);
            v257 = (CCINIClass *)((char *)v257 + 1);
            esi522 += 24;
          }
          while ( (int)v257 < *(unsigned int *)v248 );
        }
        if ( 3 * *(unsigned int *)v248 <= *(unsigned int *)(v248 + 4) )
          Options::EnsureCapacity((int *)v248);
        v245 = v387;
      }
    }
    v259 = *(CCINIClass **)v248;
    v260 = v243;
    if ( *(unsigned int *)v248 )
    {
      if ( (int)v243 >= (int)v259 )
        v260 = (CCINIClass *)((char *)v259 - 1);
      esi532 = 24 * (unsigned int)v260;
      v261 = 24 * (unsigned int)v260 + *(unsigned int *)(v248 + 8);
      DeleteAndZero::Alt((void **)(v261 + 8));
      DeleteAndZero::Alt((void **)(v261 + 4));
      v262 = (wchar_t **)(esi532 + *(unsigned int *)(v248 + 8));
      if ( v262 )
        Struct::WideStringCopy(v262, (ObjectClass *)hWnd.headNode[2]);
      v245 = v387;
    }
    DeleteAndZero::Alt((void **)&lParam.tmDescent);
    DeleteAndZero::Alt((void **)&lParam.tmAscent);
    return (int)v245;
  }
  else if ( v7 == 1190 )
  {
    esi429 = *(unsigned int **)v375[2].__pad_48;
    if ( !esi429 )
    {
      v210 = (unsigned int *)RA2_OPNEW(0xCu);
      if ( v210 )
      {
        *v210 = 0;
        v210[1] = 0;
        v210[2] = 0;
        esi429 = v210;
      }
      else
      {
        esi429 = 0;
      }
      *(unsigned int *)v375[2].__pad_48 = esi429;
    }
    v214 = (CCINIClass *)*esi429;
    v212 = hWnd.headNode[2];
    v213 = 0;
    ecx434 = 0;
    if ( (int)*esi429 <= 0 )
    {
LABEL_441:
      memset(&lParam.tmDescent, 0, 12);
      lParam.tmHeight = hWnd.headNode[2];
      lParam.tmAscent = hWnd.headNode[1];
      v219 = (CCINIClass *)*esi429;
      if ( *esi429 >= esi429[1] )
        Options::SaveOptionValue(esi429);
      if ( *esi429 >= esi429[1] )
        Options::SaveOptionValue(esi429);
      if ( (int)v219 < *esi429 )
        memcpy(
          (void *)(esi429[2] + 4 * (5 * (unsigned int)v219 + 5)),
          (const void *)(esi429[2] + 20 * (unsigned int)v219),
          20 * *esi429 - 20 * (unsigned int)v219);
      v217 = (int *)(esi429[2] + 20 * (unsigned int)v219);
      if ( v217 )
        Options::RebuildDropdownList(v217, (ObjectClass *)&lParam);
      ++*esi429;
      v218 = 0;
      if ( lParam.tmDescent > 0 )
      {
        edi450 = 0;
        do
        {
          Options::ClearComboBoxes((void **)(lParam.tmExternalLeading + edi450));
          ++v218;
          edi450 += 24;
        }
        while ( v218 < lParam.tmDescent );
      }
      lParam.tmDescent = 0;
      RA2_OPDEL((void *)lParam.tmExternalLeading);
    }
    else
    {
      v215 = 0;
      while ( 1 )
      {
        if ( v215 >= 0 && ecx434 < (int)v214 )
          v213 = (unsigned int *)(v215 + esi429[2]);
        if ( *v213 == hWnd.headNode[2] )
          break;
        ++ecx434;
        v215 += 20;
        if ( ecx434 >= (int)v214 )
          goto LABEL_441;
      }
    }
    return v212;
  }
  else
  {
    if ( v7 > 0x204 )
    {
      if ( v7 == 1175 )
      {
        *(unsigned int *)&v375[2].__pad_41[3] = -1;
        SendMessageA(
          *(HWND *)hWnd.__pad_0,
          0x1A0u,
          0xFFFFFFFF,
          (uint16_t)(*(unsigned int *)(v375[1].headNode[2] + 28) + 2));
      }
      else if ( v7 == 1176 )
      {
        v195 = v375[2].unknown38;
        if ( !v195 )
        {
          v196 = (unsigned int *)RA2_OPNEW(0xCu);
          if ( v196 )
          {
            *v196 = 0;
            v196[1] = 0;
            v196[2] = 0;
            v195 = (int)v196;
          }
          else
          {
            v195 = 0;
          }
          v13 = hWnd.headNode[1];
          v375[2].unknown38 = v195;
        }
        if ( v13 >= *(unsigned int *)v195 )
        {
          v197 = v13 + 1;
          v201 = *(CCINIClass **)v195;
          Parent = *(HWND *)v195;
          if ( v13 + 1 >= 0 )
          {
            *(unsigned int *)v195 = v197;
            v199 = *(unsigned int *)(v195 + 4);
            if ( v197 > v199 )
            {
              do
              {
                v203 = *(CCINIClass **)v195;
                if ( *(unsigned int *)v195 >= v199 )
                {
                  var2D28 = (AbstractClass *)(2 * (unsigned int)v203);
                  if ( 2 * (int)v203 < 10 )
                    var2D28 = (AbstractClass *)10;
                  ebx409 = (CCINIClass *)RA2_OPNEW(4 * (unsigned int)var2D28);
                  memset(ebx409, 0, 4 * ((unsigned int)(4 * (unsigned int)var2D28) >> 2));
                  v205 = *(CCINIClass **)(v195 + 8);
                  if ( v205 )
                    qmemcpy(ebx409, v205, 4 * *(unsigned int *)v195);
                  RA2_OPDEL(*(void **)(v195 + 8));
                  v206 = var2D28;
                  *(unsigned int *)(v195 + 8) = ebx409;
                  *(unsigned int *)(v195 + 4) = v206;
                  v13 = hWnd.headNode[1];
                }
                v199 = *(unsigned int *)(v195 + 4);
              }
              while ( v13 + 1 > v199 );
              v201 = (CCINIClass *)Parent;
            }
            jj = (AbstractClass *)v201;
            if ( (int)v201 < *(unsigned int *)v195 )
            {
              do
              {
                eax415 = (unsigned int *)(*(unsigned int *)(v195 + 8) + 4 * (unsigned int)jj);
                if ( eax415 )
                  *eax415 = -1;
                jj = (AbstractClass *)((char *)jj + 1);
              }
              while ( (int)jj < *(unsigned int *)v195 );
            }
            if ( 3 * *(unsigned int *)v195 <= *(unsigned int *)(v195 + 4) )
            {
              DynamicArray::ShrinkCapacity((int *)v195);
              v13 = hWnd.headNode[1];
            }
          }
        }
        v209 = *(CCINIClass **)v195;
        v207 = v13;
        if ( *(unsigned int *)v195 )
        {
          if ( v13 < 0 )
            v207 = 0;
          if ( v207 >= (int)v209 )
            v207 = (int)&v209[-1].unknown54 + 3;
          v208 = (unsigned int *)(*(unsigned int *)(v195 + 8) + 4 * v207);
          if ( v208 )
            *v208 = hWnd.headNode[2];
        }
        InvalidateRect(*(HWND *)hWnd.__pad_0, 0, 0);
      }
      goto LABEL_668;
    }
    if ( v7 == 516 )
    {
      if ( (GetWindowLongA(*(HWND *)hWnd.__pad_0, -16) & 8) == 0 )
        goto LABEL_668;
      edi236 = (void (*)(HWND, UINT, WPARAM, LPARAM))SendMessageA;
      SendMessageA(*(HWND *)hWnd.__pad_0, 0x185u, 0, -1);
      SendMessageA(*(HWND *)hWnd.__pad_0, 0x186u, 0xFFFFFFFF, 0);
      esi277 = GetParent(*(HWND *)hWnd.__pad_0);
      v371 = *(unsigned int *)hWnd.__pad_0;
      v136 = GetWindowLongA(*(HWND *)hWnd.__pad_0, -12);
LABEL_394:
      edi236(esi277, 0x111u, v136 | 0x10000, v371);
      InvalidateRect(*(HWND *)hWnd.__pad_0, 0, 0);
      return 0;
    }
    if ( v7 != 513 )
    {
      if ( v7 == 515 )
      {
        v374 = *(unsigned int *)hWnd.__pad_0;
        v186 = GetWindowLongA(*(HWND *)hWnd.__pad_0, -12);
        PostMessageA(Parent, 0x111u, v186 | 0x20000, v374);
        return 0;
      }
      goto LABEL_668;
    }
    v187 = SendMessageA;
    v188 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Eu, 0, 0);
    v189 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x1A1u, 0, 0);
    v190 = v188 + (signed int)IDA_HIWORD(hWnd.headNode[2]) / v189;
    if ( v190 < SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0) )
    {
      v191 = GetWindowLongA(*(HWND *)hWnd.__pad_0, -16);
      SetFocus(*(HWND *)hWnd.__pad_0);
      Parent = (HWND)SendMessageA(*(HWND *)hWnd.__pad_0, 0x49Du, 0, 1);
      if ( (v191 & 8) != 0 )
      {
        v192 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x187u, v190, 0) == 0;
        PlayVocClass(*(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 1804), 0x2000, 1.0, 0);
        SendMessageA(*(HWND *)hWnd.__pad_0, 0x185u, v192, v190);
        v187 = SendMessageA;
        SendMessageA(*(HWND *)hWnd.__pad_0, 1181, 0, (LPARAM)Parent);
      }
      else
      {
        if ( (v191 & 0x4000) == 0 )
        {
          PlayVocClass(*(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 1804), 0x2000, 1.0, 0);
          SendMessageA(*(HWND *)hWnd.__pad_0, 0x186u, v190, 0);
        }
        SendMessageA(*(HWND *)hWnd.__pad_0, 1181, 0, (LPARAM)Parent);
      }
      InvalidateRect(*(HWND *)hWnd.__pad_0, 0, 0);
      v193 = GetParent(*(HWND *)hWnd.__pad_0);
      _FFFFFFFCe = *(unsigned int *)hWnd.__pad_0;
      v194 = GetWindowLongA(*(HWND *)hWnd.__pad_0, -12);
      v187(v193, 273, v194 | 0x10000, _FFFFFFFCe);
      return 0;
    }
    else
    {
      return 0;
    }
  }

}
} // namespace gamemd

// 0x624460
namespace gamemd {
void Options::ClearComboBoxes()
{

  DeleteAndZero::Alt((unsigned int *)this + 2); /*0x624466*/
  DeleteAndZero::Alt((unsigned int *)this + 1); /*0x62446e*/

}
} // namespace gamemd
