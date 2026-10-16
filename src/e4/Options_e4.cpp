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
#include "e4/classes/DialogQueue_e4.hpp"
#include "e4/classes/E4Recv_6810C0_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/ParasiteClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/OptionQueue_e4.hpp"
#include "e4/classes/SaveLoadDialog_e4.hpp"
#include "e4/classes/Struct_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int CreateDialog(unsigned __int16 a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM), LPARAM a3); }  // x4:ida@0x622650

// 0x4F11B0
namespace gamemd {  // G42.18 ns repair
int Options::DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND a4)
{

  int result; // eax
  unsigned int v5; // edi
  wchar_t *v6; // edi
  HWND DlgItem; // eax
  HWND v8; // esi
  wchar_t *String; // eax
  unsigned int v10; // ebx
  unsigned int *WindowLongA; // ebp
  void (*v12)(HWND, int); // edi
  unsigned int *v13; // eax
  int Options_Run; // ebx
  char *v15; // eax
  unsigned int *v16; // ecx
  const char **Options_Constructor; // eax
  HWND v18; // eax
  wchar_t *v19; // edi
  char *v20; // eax
  HWND v21; // eax
  int v22; // esi
  char *v23; // eax
  DWORD v24[3]; // [esp+14h] [ebp-610h] BYREF
  DWORD v25[3]; // [esp+20h] [ebp-604h] BYREF
  unsigned int v26[14]; // [esp+2Ch] [ebp-5F8h] BYREF
  unsigned int v27[14]; // [esp+64h] [ebp-5C0h] BYREF
  unsigned int v28[14]; // [esp+9Ch] [ebp-588h] BYREF
  char v29[112]; // [esp+D4h] [ebp-550h] BYREF
  char v30[112]; // [esp+144h] [ebp-4E0h] BYREF
  char v31[112]; // [esp+1B4h] [ebp-470h] BYREF
  wchar_t Buffer[512]; // [esp+224h] [ebp-400h] BYREF

  result = (int)(BaseDialogProc(hDlg, a2, a3, (unsigned int)a4)); /*0x4f11dc*/
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
        v5 = HIWORD(a3); /*0x4f1232*/
        if ( a4 == GetDlgItem(hDlg, 1321) ) /*0x4f1239*/
        {
          v6 = (wchar_t *)((&off_822730)[v5]); /*0x4f123b*/
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
            String = GetStringCSF(v6, 0, g_Str_File_GOptions_CPP, 196); /*0x4f1280*/
            SendMessageA(v8, 0x4B2u, 0, (LPARAM)String); /*0x4f128e*/
            return 0; /*0x4f12a0*/
          }
          return 0; /*0x4f126c*/
        }
      }
      return 0; /*0x4f1253*/
    }
    v10 = HIWORD(a3); /*0x4f12a8*/
    WindowLongA = (unsigned int *)GetWindowLongA(hDlg, 8); /*0x4f12b1*/
    if ( (byte_A8EDF8 & 1) == 0 ) /*0x4f12be*/
    {
      byte_A8EDF8 |= 1u; /*0x4f12ca*/
      dword_A8EE30 = Timer::GetTicks(); /*0x4f12da*/
      dword_A8EE38 = 0; /*0x4f12df*/
      atexit(nullsub_14); /*0x4f12e9*/
    }
    if ( (byte_A8EDF8 & 2) == 0 ) /*0x4f12f8*/
    {
      byte_A8EDF8 |= 2u; /*0x4f1303*/
      Timer::Init((DWORD *)&dword_A8EE40, 0); /*0x4f1308*/
      atexit(nullsub_13); /*0x4f1312*/
    }
    if ( (unsigned __int16)a3 <= 0x521u ) /*0x4f1326*/
    {
      if ( (unsigned __int16)a3 == 1313 ) /*0x4f132c*/
      {
        if ( !v10 ) /*0x4f14dc*/
        {
          dword_A8EDA0 = 5; /*0x4f14e2*/
          *WindowLongA = 1; /*0x4f14ed*/
          return 0; /*0x4f14ff*/
        }
        return 0; /*0x4f14dc*/
      }
      if ( (unsigned __int16)a3 > 0x51Fu ) /*0x4f1338*/
      {
        if ( v10 ) /*0x4f1489*/
          return 0; /*0x4f1489*/
        v12 = (void (*)(HWND, int))ShowWindow; /*0x4f148f*/
        ShowWindow(hDlg, 0); /*0x4f1497*/
        Options_Constructor = (const char **)LoadOptions::LoadOptions(v28); /*0x4f14a0*/
        Options::PrepareSaveLoadDlg(Options_Constructor); /*0x4f14a7*/
        v16 = v28; /*0x4f14ac*/
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
          v12 = (void (*)(HWND, int))ShowWindow; /*0x4f135c*/
          ShowWindow(hDlg, 0); /*0x4f1364*/
          v13 = LoadOptions::LoadOptions(v27); /*0x4f136a*/
          Options_Run = (unsigned __int8)LoadOptions::Run(v13); /*0x4f137a*/
          (v27)->Cleanup(); /*0x4f137c*/
          if ( (unsigned char)Options_Run ) /*0x4f1383*/
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
        if ( dword_A8B238[0] && dword_A8B238[0] != 5 ) /*0x4f13d1*/
        {
          v15 = (char *)(EventClass::AddEvent(v29, dword_A83D4C->relatedTagsCount, 0x1Du)); /*0x4f13e5*/
          ((void (*)(char *))OptionQueue::PushEntry)(v15); /*0x4f13f0*/
          *WindowLongA = 1311; /*0x4f13f6*/
          return 0; /*0x4f1408*/
        }
        v12 = (void (*)(HWND, int))ShowWindow; /*0x4f140b*/
        ShowWindow(hDlg, 0); /*0x4f1414*/
        if ( dword_A8B238[0] ) /*0x4f141d*/
          swprintf(Buffer, (const size_t)&off_8240B4, (const wchar_t *const)dword_A8B230 + 2480); /*0x4f1455*/
        else
          swprintf(Buffer, (const size_t)&off_8240B4, (const wchar_t *const)dword_A8B230 + 2541); /*0x4f1439*/
        LoadOptions::LoadOptions(v26); /*0x4f1469*/
        ((void (*)(wchar_t *))ShowSaveLoadDialog)(Buffer); /*0x4f1470*/
        v16 = v26; /*0x4f1475*/
      }
      (v16)->Cleanup(); /*0x4f14b3*/
      Options::InitDialogControls(hDlg); /*0x4f14ba*/
      goto LABEL_39; /*0x4f14ba*/
    }
    if ( (unsigned __int16)a3 == 1314 ) /*0x4f1508*/
    {
      if ( !v10 ) /*0x4f16c2*/
      {
        if ( dword_A8B238[0] != 4 || (dword_A8EDA0 = 2, !*(unsigned int *)dword_B779C4) ) /*0x4f16de*/
          dword_A8EDA0 = 3; /*0x4f16e0*/
        *WindowLongA = 2; /*0x4f16ea*/
      }
      return 0; /*0x4f16ea*/
    }
    if ( (unsigned __int16)a3 != 1653 && (unsigned __int16)a3 != 1670 || v10 ) /*0x4f1521*/
      return 0; /*0x4f16f1*/
    if ( dword_A8B238[0] == 4 && !dword_A8B538 ) /*0x4f153b*/
    {
      v18 = GetDlgItem(hDlg, 1007); /*0x4f154d*/
      if ( v18 ) /*0x4f1557*/
      {
        v19 = (wchar_t *)(3 - SendMessageA(v18, 0x400u, 0, 0)); /*0x4f156e*/
        if ( v19 != dword_A8DB9C ) /*0x4f1577*/
        {
          if ( (&dword_A8EE40)->GetRemainingMs() ) /*0x4f157e*/
          {
            Debug::Log(); /*0x4f15eb*/
          }
          else
          {
            Timer::Init(v24, 0x384u); /*0x4f1590*/
            dword_A8EE40 = v24[0]; /*0x4f15a4*/
            dword_A8EE44 = v24[1]; /*0x4f15b0*/
            dword_A8EE48 = v24[2]; /*0x4f15b6*/
            v20 = (char *)(EventClass::Add2(v31, dword_A83D4C->relatedTagsCount, 0x24u, (int)v19)); /*0x4f15c6*/
            ((void (*)(char *))OptionQueue::PushEntry)(v20); /*0x4f15d1*/
            Debug::Log(); /*0x4f15dc*/
          }
        }
      }
      v21 = GetDlgItem(hDlg, 1321); /*0x4f15f9*/
      if ( v21 ) /*0x4f15fd*/
      {
        v22 = 6 - SendMessageA(v21, 0x400u, 0, 0); /*0x4f1614*/
        if ( *(unsigned int *)dword_A8EB60 != v22 ) /*0x4f161d*/
        {
          if ( !(&dword_A8EE30)->GetRemainingMs() ) /*0x4f1628*/
          {
            Timer::Init(v25, 0x384u); /*0x4f163a*/
            dword_A8EE30 = v25[0]; /*0x4f164e*/
            dword_A8EE34 = v25[1]; /*0x4f1658*/
            dword_A8EE38 = v25[2]; /*0x4f165e*/
            v23 = (char *)(EventClass::Add2(v30, dword_A83D4C->relatedTagsCount, 0xDu, v22)); /*0x4f166f*/
            ((void (*)(char *))OptionQueue::PushEntry)(v23); /*0x4f167a*/
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
}  // G42.18 ns repair
// 0x558840
namespace gamemd {
bool Options::Options::PrepareSaveLoadDlg(const char ** dwNewLong)
{
  dwNewLong->field_4 = (void *)3; /*0x558840*/
  dwNewLong->field_C = 0; /*0x558847*/
  return ((SaveLoadDialog*)(SaveLoadDialog *)dwNewLong)->DlgProc();
}
}
// 0x55FAA0
namespace gamemd {
AbstractClass * * Options::Screen_Save(void *a1)
{


  HWND DlgItem; // eax
  DlgItem = GetDlgItem((HWND)this, 1323); /*0x55fab2*/
  if ( DlgItem )
  {
    int v3; // eax
    v3 = SendMessageA(DlgItem, 0x400u, 0, 0) != 0 ? 2 : 0;
    if ( stru_A8EB00.ObjectTypeClass[30] != v3 ) /*0x55fad9*/
    {
      stru_A8EB00.ObjectTypeClass[30] = v3; /*0x55fae0*/
      ((TacticalClass *)&DataGlobal_87F7E8)->Initialize(); /*0x55fae5*/
    }
  }
  HWND v4; // eax
  v4 = GetDlgItem((HWND)this, 1295); /*0x55faf0*/
  if ( v4 ) /*0x55faf4*/
    stru_A8EB00.ObjectTypeClass[25] = SendMessageA(v4, 0x400u, 0, 0); /*0x55fb02*/
  HWND v5; // eax
  v5 = GetDlgItem((HWND)this, 1537); /*0x55fb0d*/
  if ( v5 ) /*0x55fb11*/
  {
    BYTE2(stru_A8EB00.ObjectTypeClass[31]) = SendMessageA(v5, 0xF0u, 0, 0) == 1; /*0x55fb25*/
    SetGlobalFlag(SBYTE2(stru_A8EB00.ObjectTypeClass[31])); /*0x55fb2b*/
  }
  HWND v6; // eax
  v6 = GetDlgItem((HWND)this, 1540); /*0x55fb36*/
  if ( v6 ) /*0x55fb3a*/
    HIBYTE(stru_A8EB00.ObjectTypeClass[31]) = SendMessageA(v6, 0xF0u, 0, 0) == 1; /*0x55fb4e*/
  HWND v7; // eax
  v7 = GetDlgItem((HWND)this, 1538); /*0x55fb59*/
  if ( v7 ) /*0x55fb5d*/
    LOBYTE(stru_A8EB00.ObjectTypeClass[32]) = SendMessageA(v7, 0xF0u, 0, 0) == 1; /*0x55fb71*/
  HWND v8; // eax
  v8 = GetDlgItem((HWND)this, 1322); /*0x55fb7d*/
  if ( v8 ) /*0x55fb81*/
    stru_A8EB00.ObjectTypeClass[28] = 6 - SendMessageA(v8, 0x400u, 0, 0); /*0x55fb96*/
  HWND v9; // eax
  v9 = GetDlgItem((HWND)this, 1327); /*0x55fba2*/
  if ( v9 ) /*0x55fba6*/
  {
    float v13; // [esp+0h] [ebp-18h]
    v13 = (double)SendMessageA(v9, 0x400u, 0, 0) * 0.1; /*0x55fbca*/
    Audio::SetScoreVolume(&stru_A8EB00.ObjectTypeClass[24], v13, 0); /*0x55fbcd*/
    if ( *(float *)&stru_A8EB00.ObjectTypeClass[40] == 0.0 ) /*0x55fbe3*/
    {
      int v10 = dword_A83D14; // eax /*0x55fbe5*/
      if ( dword_A83D14 == -1 ) /*0x55fbed*/
        v10 = dword_A83D18; /*0x55fbef*/
      Theme::QueueSong((int)&unk_A83D10, v10); /*0x55fbfa*/
      ((Theme *)&unk_A83D10)->Stop(0); /*0x55fc06*/
    }
  }
  HWND v11; // eax
  v11 = GetDlgItem((HWND)this, 1330); /*0x55fc11*/
  if ( v11 ) /*0x55fc15*/
  {
    float v14; // [esp+0h] [ebp-18h]
    v14 = (double)SendMessageA(v11, 0x400u, 0, 0) * 0.1; /*0x55fc39*/
    Audio::SetSoundVolume(&stru_A8EB00.ObjectTypeClass[24], v14, 0); /*0x55fc3c*/
  }
  int result; // eax
  result = (int)GetDlgItem((HWND)this, 1334); /*0x55fc47*/
  if ( result ) /*0x55fc4b*/
  {
    float v15; // [esp+0h] [ebp-18h]
    v15 = (double)SendMessageA((HWND)result, 0x400u, 0, 0) * 0.1; /*0x55fc6f*/
    return Audio::SetVoiceVolume(&stru_A8EB00.ObjectTypeClass[24], v15, 0); /*0x55fc72*/
  }
  return result; /*0x55fc77*/

}
}
// 0x55FC80
namespace gamemd {
char Options::Screen_Dialog()
{
  HWND v0; // eax
  HWND v1; // esi
  LONG dwNewLong; // [esp+14h] [ebp-8h] BYREF

  char v7; // [esp+13h] [ebp-9h]
  v7 = byte_A8E9A0; /*0x55fc92*/
  byte_A8E9A0 = 0; /*0x55fc96*/
  while ( 1 ) /*0x55fd14*/
  {
    while ( 1 ) /*0x55fcca*/
    {
      do /*0x55fcca*/
      {
        memcpy(&unk_ABCE70,(const void *)(dword_A8EB60), 0xB8u); /*0x55fcb1*/
        dwNewLong = -1; /*0x55fcbd*/
        v0 = (HWND)CreateDialog(0); /*0x55fcc1*/
        v1 = v0; /*0x55fcc6*/
      }
      while ( !v0 ); /*0x55fcca*/
      SetWindowLongA(v0, 8, (LONG)&dwNewLong); /*0x55fcd4*/
      ((Dialog *)(v1))->Show(); /*0x55fcd8*/
      while ( dwNewLong < 0 ) /*0x55fce3*/
      {
        if ( (uint8_t)Dialog::PumpMessages() == 1 ) /*0x55fcec*/
          break; /*0x55fcec*/
        int v2; // ecx
        (*((unsigned char *)&(v2))) = 0; /*0x55fcee*/
        ScreenSaver::Process(v2); /*0x55fcf0*/
      }
      Options::Screen_Save(v1); /*0x55fcff*/
      ((Dialog *)(v1))->Destroy(); /*0x55fd06*/
      if ( dwNewLong != 1485 ) /*0x55fd14*/
        break; /*0x55fd14*/
      LONG v9; // [esp+18h] [ebp-4h] BYREF
      v9 = -1; /*0x55fd2d*/
      (&dword_A8B238)->LoadNetworkConfig(); /*0x55fd31*/
      HWND v3; // eax
      v3 = (HWND)CreateDialog(0); /*0x55fd42*/
      HWND v4 = v3; // esi /*0x55fd47*/
      if ( v3 ) /*0x55fd4b*/
      {
        SetWindowLongA(v3, 8, (LONG)&v9); /*0x55fd59*/
        ((Dialog *)(v4))->Show(); /*0x55fd5d*/
        while ( v9 < 0 ) /*0x55fd68*/
        {
          if ( (uint8_t)Dialog::PumpMessages() == 1 ) /*0x55fd71*/
            break; /*0x55fd71*/
          int v5; // ecx
          (*((unsigned char *)&(v5))) = 0; /*0x55fd73*/
          ScreenSaver::Process(v5); /*0x55fd75*/
        }
        ((Dialog *)(v4))->Destroy(); /*0x55fd84*/
      }
    }
    if ( dwNewLong != 1486 ) /*0x55fd1c*/
      break; /*0x55fd1c*/
    ShowHotkeyOptionsDialog((void *)(dword_A8EB60)); /*0x55fd1e*/
  }
  ScenarioClass::SaveGameOptions(dword_A8EB60); /*0x55fd8e*/
  byte_A8E9A0 = v7; /*0x55fd9a*/
  return v7; /*0x55fd97*/
}
}
// 0x6244E0
namespace gamemd {
int Options::DeleteAndZero(void *a1, void *a2)
{

  int result; // eax

  int v2 = 0; // ebx /*0x6244e4*/
  if ( *(int *)this->q000 <= 0 ) /*0x6244e9*/
  {
    *(unsigned int *)this->q000 = 0; /*0x62451b*/
  }
  else
  {
    int v3 = 0; // ebp /*0x6244ed*/
    do /*0x62450e*/
    {
      char *v4; // esi
      v4 = (char *)this->field_8 + v3; /*0x6244f4*/
      DeleteAndZero::Alt(&v4->u32_8); /*0x6244f9*/
      DeleteAndZero::Alt(&v4->__pad_004); /*0x624501*/
      result = *(unsigned int *)this->q000; /*0x624506*/
      ++v2; /*0x624508*/
      v3 += 24; /*0x624509*/
    }
    while ( v2 < *(unsigned int *)this->q000 ); /*0x62450e*/
    *(unsigned int *)this->q000 = 0; /*0x624511*/
  }
  return result; /*0x624518*/

}
}
// 0x6248A0
namespace gamemd {
char Options::EnsureCapacity(void *a1)
{


  int v2; // eax
  v2 = *(unsigned int *)this->q000; /*0x6248a5*/
  int v3; // ecx
  v3 = (int)this->field_4; /*0x6248a8*/
  if ( 3 * v2 > v3 ) /*0x6248b0*/
    return 0; /*0x6248b3*/
  int v5 = v3 / 2; // ebx /*0x6248bf*/
  if ( v3 / 2 < 10 ) /*0x6248c4*/
    v5 = 10; /*0x6248c6*/
  if ( v5 >= v3 ) /*0x6248cd*/
    return 0; /*0x6248d0*/
  void *v6; // eax
  v6 = __2_YAPAXI_Z(24 * v5); /*0x6248dd*/
  void *v7 = this->field_8; // esi /*0x6248e2*/
  void *v8; // [esp+8h] [ebp-4h]
  v8 = v6; /*0x6248ea*/
  if ( v7 ) /*0x6248ee*/
    memcpy(v6, v7, 24 * *(unsigned int *)this->q000); /*0x624901*/
  __3_YAXPAX_Z(this->field_8); /*0x62490f*/
  this->field_8 = v8; /*0x62491b*/
  this->field_4 = (void *)v5; /*0x62491e*/
  return 1; /*0x6248b2*/

}
}
// 0x6253B0
namespace gamemd {
int Options::GrowBuffer()
{


  int v2; // eax
  v2 = *(unsigned int *)this->q000; /*0x6253b4*/
  if ( *(unsigned int *)this->q000 < (int)this->field_4 ) /*0x6253bb*/
    return 0; /*0x6253bd*/
  int v4 = 2 * v2; // esi /*0x6253c4*/
  int v6; // [esp+4h] [ebp-4h]
  v6 = 2 * v2; /*0x6253cb*/
  if ( 2 * v2 < 10 ) /*0x6253cf*/
  {
    v6 = 10; /*0x6253d1*/
    v4 = 10; /*0x6253d9*/
  }
  void *v5; // ebp
  v5 = __2_YAPAXI_Z(4 * v4); /*0x6253ec*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x6253fa*/
  if ( this->field_8 ) /*0x625403*/
  {
    memcpy(v5, this->field_8, 4 * *(unsigned int *)this->q000); /*0x625418*/
    v4 = v6; /*0x625421*/
  }
  __3_YAXPAX_Z(this->field_8); /*0x625429*/
  this->field_4 = (void *)v4; /*0x625431*/
  this->field_8 = v5; /*0x625434*/
  return 1; /*0x6253bf*/

}
}
// 0x6254D0
namespace gamemd {
int Options::ReadOptionValue()
{


  int v2; // eax
  v2 = *(unsigned int *)this->q000; /*0x6254d5*/
  int v3; // ecx
  v3 = (int)this->field_4; /*0x6254d8*/
  if ( 3 * v2 > v3 ) /*0x6254e0*/
    return 0; /*0x6254e3*/
  int v5 = v3 / 2; // ebx /*0x6254ef*/
  if ( v3 / 2 < 10 ) /*0x6254f4*/
    v5 = 10; /*0x6254f6*/
  if ( v5 >= v3 ) /*0x6254fd*/
    return 0; /*0x625500*/
  void *v6; // eax
  v6 = __2_YAPAXI_Z(20 * v5); /*0x62550d*/
  void *v7 = this->field_8; // esi /*0x625512*/
  void *v8; // [esp+8h] [ebp-4h]
  v8 = v6; /*0x62551a*/
  if ( v7 ) /*0x62551e*/
    memcpy(v6, v7, 20 * *(unsigned int *)this->q000); /*0x625531*/
  __3_YAXPAX_Z(this->field_8); /*0x62553f*/
  this->field_8 = v8; /*0x62554b*/
  this->field_4 = (void *)v5; /*0x62554e*/
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

  if ( *&Block->u32_2C ) /*0x625563*/
  {
    operator delete((void *)(*&Block->u32_2C)); /*0x62556b*/
    *&Block->u32_2C = 0; /*0x625573*/
  }
  for ( i = *&Block->u32_38; i; i = *&Block->u32_38 ) /*0x62557f*/
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
      *&Block->u32_38 = *v4; /*0x6255a7*/
    operator delete((v4)); /*0x6255ab*/
    LABEL_12:
    ; /*0x6255b3*/
  }
  v6 = *&Block->u32_40; /*0x6255bb*/
  if ( v6 ) /*0x6255c0*/
  {
    DeleteAndZero::Alt(*&Block->u32_40); /*0x6255c4*/
    operator delete((v6)); /*0x6255ca*/
  }
  if ( (a2 & 1) != 0 ) /*0x6255d9*/
    operator delete((Block)); /*0x6255dc*/
  return Block; /*0x6255e6*/
}
}
// 0x6255F0
namespace gamemd {
void * Options::RebuildDropdownList(ObjectClass * aP1)
{

  DeleteAndZero v19; // [esp+1Ch] [ebp-14h] BYREF

  unsigned int *v2; // ebp
  v2 = (unsigned int *)(aP1); /*0x6255f5*/
  int *v3; // edi
  v3 = (int *)this; /*0x6255fb*/
  int v4 = 0; // ebx /*0x625600*/
  *(unsigned int *)this->q000 = (unsigned int)(*aP1); /*0x625602*/
  void **v5 = &this->field_8; // esi /*0x625607*/
  this->field_4 = aP1->q004; /*0x62560a*/
  this->field_8 = 0; /*0x625615*/
  this->field_C = 0; /*0x625617*/
  this->field_10 = 0; /*0x62561a*/
  unknown_libname_74(&v19); /*0x62561d*/
  unknown_libname_74(&v19.q004); /*0x625626*/
  int v18; // [esp+18h] [ebp-18h] BYREF
  v18 = 0; /*0x62562e*/
  v19.u32_8 = -1; /*0x625632*/
  int v21; // [esp+2Ch] [ebp-4h]
  v21 = -1; /*0x625636*/
  int v6; // eax
  v6 = (int)*v5; /*0x62563a*/
  int v20; // [esp+28h] [ebp-8h]
  v20 = 0; /*0x62563c*/
  if ( v6 > 0 ) /*0x625642*/
  {
    int v7 = 0; // ebp /*0x625644*/
    do /*0x625665*/
    {
      char *v8 = v5->u32_2 + v7; // edi /*0x62564b*/
      DeleteAndZero::Alt(&v8->u32_8); /*0x625650*/
      DeleteAndZero::Alt(&v8->__pad_004); /*0x625658*/
      ++v4; /*0x62565f*/
      v7 += 24; /*0x625660*/
    }
    while ( v4 < (int)*v5 ); /*0x625665*/
    v2 = (unsigned int *)(aP1); /*0x625667*/
    v3 = (int *)this; /*0x62566b*/
  }
  *v5 = 0; /*0x62566f*/
  int v9 = v2->vtable3; // eax /*0x625675*/
  int v10 = 0; // ebx /*0x625678*/
  if ( v9 > 0 ) /*0x62567c*/
  {
    int v11 = 0; // ecx /*0x625682*/
    int v16; // [esp+10h] [ebp-20h]
    v16 = 0; /*0x625684*/
    while ( 1 ) /*0x62568e*/
    {
      if ( v11 >= 0 && v10 < v9 ) /*0x625694*/
      {
        int v12; // edi
        v12 = v11 + v2[4]; /*0x625699*/
        v18 = *(unsigned int *)v12; /*0x6256a5*/
        WideString::Reassign_Alt((void **)&v19, (const wchar_t **)(v12 + 4)); /*0x6256a9*/
        WideString::Reassign_Alt((void **)&v19.q004, (const wchar_t **)(v12 + 8)); /*0x6256b6*/
        v19.u32_8 = *(unsigned int *)(v12 + 12); /*0x6256be*/
        v20 = *(unsigned int *)(v12 + 16); /*0x6256c5*/
        v21 = *(unsigned int *)(v12 + 20); /*0x6256cc*/
      }
      int v13; // edi
      v13 = (int)*v5; /*0x6256d0*/
      if ( (int)*v5 >= (int)v5[1] ) /*0x6256d7*/
        ((DynamicVector *)v5)->GrowCapacity(); /*0x6256db*/
      if ( (int)*v5 >= (int)v5[1] ) /*0x6256e7*/
        ((DynamicVector *)v5)->GrowCapacity(); /*0x6256eb*/
      if ( v13 < (int)*v5 ) /*0x6256f4*/
        memcpy(v5->u32_2 + 24 * v13 + 24, v5->u32_2 + 24 * v13, 24 * (unsigned int)*v5 - 24 * v13); /*0x625713*/
      Struct *v14; // ecx
      v14 = (Struct *)(v5->u32_2 + 24 * v13); /*0x625721*/
      if ( v14 ) /*0x625726*/
        (v14)->WideStringCopy((int)&v18); /*0x62572d*/
      ++v10; /*0x625739*/
      *v5 = (char *)*v5 + 1; /*0x62573a*/
      v11 = v16 + 24; /*0x625740*/
      v9 = aP1[2]; /*0x625743*/
      v16 += 24; /*0x625746*/
      if ( v10 >= v9 ) /*0x62574c*/
        break; /*0x62574c*/
      v2 = aP1; /*0x62568a*/
    }
    v3 = (int *)this; /*0x625752*/
  }
  DeleteAndZero::Alt((DeleteAndZero *)&v19.q004); /*0x62575a*/
  DeleteAndZero::Alt(&v19); /*0x625763*/
  return v3; /*0x62576a*/

}
}
// 0x625A20
namespace gamemd {
int Options::SaveOptionValue()
{


  int v2; // eax
  v2 = *(unsigned int *)this->q000; /*0x625a24*/
  if ( *(unsigned int *)this->q000 < (int)this->field_4 ) /*0x625a2b*/
    return 0; /*0x625a2d*/
  int v4 = 2 * v2; // ebp /*0x625a33*/
  if ( 2 * v2 < 10 ) /*0x625a3b*/
    v4 = 10; /*0x625a3d*/
  void *v5; // edx
  v5 = __2_YAPAXI_Z(20 * v4); /*0x625a4f*/
  memset(v5, 0, 4 * ((unsigned int)(20 * v4) >> 2)); /*0x625a5a*/
  void *v7; // [esp+4h] [ebp-4h]
  v7 = v5; /*0x625a64*/
  void *v6 = this->field_8; // esi /*0x625a6a*/
  if ( v6 ) /*0x625a6f*/
    memcpy(v5, v6, 20 * *(unsigned int *)this->q000); /*0x625a80*/
  __3_YAXPAX_Z(this->field_8); /*0x625a8d*/
  this->field_4 = (void *)v4; /*0x625a99*/
  this->field_8 = v7; /*0x625a9c*/
  return 1; /*0x625a2f*/

}
}
// 0x4F1720
namespace gamemd {
HWND Options::InitDialogControls(HWND hDlg)
{
  LoadOptions v10; // [esp+14h] [ebp-38h] BYREF

  int result; // eax
  result = *(unsigned int *)&dword_A8B238; /*0x4f1720*/
  if ( !*(unsigned int *)&dword_A8B238 || *(unsigned int *)&dword_A8B238 == 5 ) /*0x4f1739*/
  {
    LoadOptions *v7; // eax
    v7 = (LoadOptions *)LoadOptions::LoadOptions(&v10); /*0x4f17dd*/
    uint8_t v9; // [esp+10h] [ebp-3Ch]
    v9 = (v7)->Check(); /*0x4f17ed*/
    (&v10)->Cleanup(); /*0x4f17f1*/
    HWND DlgItem; // eax
    DlgItem = GetDlgItem((HWND)hDlg, 1310); /*0x4f1802*/
    if ( DlgItem ) /*0x4f1810*/
      EnableWindow(DlgItem, v9); /*0x4f181c*/
    result = (int)GetDlgItem((HWND)hDlg, 1312); /*0x4f1824*/
    if ( result ) /*0x4f1828*/
      return EnableWindow((HWND)result, v9); /*0x4f1832*/
  }
  else if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x4f1742*/
  {
    result = dword_A8B538; /*0x4f1748*/
    if ( !dword_A8B538 ) /*0x4f174f*/
    {
      HWND v3; // eax
      v3 = GetDlgItem((HWND)hDlg, 1007); /*0x4f175b*/
      HWND v4 = v3; // esi /*0x4f1767*/
      if ( v3 ) /*0x4f176b*/
      {
        LPARAM v5; // edi
        v5 = 3 - (unsigned int)dword_A8DB9C; /*0x4f1785*/
        SendMessageA(v3, 0x406u, 1u, 196608); /*0x4f1787*/
        SendMessageA(v4, 0x405u, 1u, v5); /*0x4f1792*/
      }
      result = (int)GetDlgItem((HWND)hDlg, 1321); /*0x4f179a*/
      HWND v6; // esi
      v6 = (HWND)result; /*0x4f17a0*/
      if ( result ) /*0x4f17a4*/
      {
        SendMessageA((HWND)result, 0x406u, 1u, 393216); /*0x4f17b7*/
        return SendMessageA(v6, 0x405u, 1u, 6 - stru_A8EB00.vfptr[24]); /*0x4f17cf*/
      }
    }
  }
  return result; /*0x4f17d1*/
}
} // namespace gamemd

// 0x5FA4A0
namespace gamemd {
int Options::(float volume, int pad, void *a3_1)
{

  double v4; // st7
  if ( pad >= 1.0 ) /*0x5fa4b2*/
    v4 = 1.0; /*0x5fa4ba*/
  else
    v4 = pad; /*0x5fa4b4*/
  *((float *)volume + 16) = v4; /*0x5fa4c0*/
  int v5; // eax
  (*((unsigned short *)&(v5))) = Math::RoundToInt(v4 * 16384.0); /*0x5fa4c9*/
  EndBufferMixer((int *)g_MixerChannel_Theme, v5); /*0x5fa4d6*/
  int v6; // eax
  (*((unsigned short *)&(v6))) = Math::RoundToInt(*((float *)volume + 16) * 255.0); /*0x5fa4e4*/
  TechnoTypeClass::CheckFlag(&unk_A83D10, v6); /*0x5fa4ef*/
  return Debug::Log(); /*0x5fa50b*/
}
} // namespace gamemd

// 0x5FA510
namespace gamemd {
int Options::(float volume, int pad, void *a3_1)
{

  double v3; // st7
  if ( pad >= 1.0 ) /*0x5fa522*/
    v3 = 1.0; /*0x5fa52a*/
  else
    v3 = pad; /*0x5fa524*/
  *((float *)volume + 14) = v3; /*0x5fa530*/
  int v4; // eax
  (*((unsigned short *)&(v4))) = Math::RoundToInt(v3 * 16384.0); /*0x5fa539*/
  EndBufferMixer((int *)g_MixerChannel_Score, v4); /*0x5fa546*/
  if ( a3_1 ) /*0x5fa551*/
    PlayVocClass(*&dword_8871E0->q710, 0x2000, 1.0, 0); /*0x5fa56a*/
  return Debug::Log(); /*0x5fa586*/
}
} // namespace gamemd

// 0x5FA590
namespace gamemd {
int Options::(float volume, int pad, void *a3_1)
{

  double v4; // st7
  if ( pad >= 1.0 ) /*0x5fa5a2*/
    v4 = 1.0; /*0x5fa5aa*/
  else
    v4 = pad; /*0x5fa5a4*/
  *((float *)volume + 15) = v4; /*0x5fa5b0*/
  int v5; // eax
  (*((unsigned short *)&(v5))) = Math::RoundToInt(v4 * 255.0); /*0x5fa5b9*/
  ThemeClass::GetField(v5); /*0x5fa5c0*/
  int v6; // eax
  (*((unsigned short *)&(v6))) = Math::RoundToInt(*((float *)volume + 15) * 16384.0); /*0x5fa5ce*/
  EndBufferMixer((int *)g_MixerChannel_Voice, v6); /*0x5fa5db*/
  if ( a3_1 ) /*0x5fa5e6*/
    PlayVocClass(*&dword_8871E0->q710, 0x2000, *((float *)this + 15), 0);
  return Debug::Log(); /*0x5fa61b*/
}
} // namespace gamemd

// 0x618D40
namespace gamemd {
int Options::DialogProc(CCINIClass hWnd, void *a2, void *a3, void *a4)
{

  int v4; // eax
  HWND v5; // ecx
  WNDPROC *v6; // eax
  unsigned int *v7; // esi
  HWND *v8; // eax
  int v9; // edi
  UINT v10; // ebx
  LRESULT v11; // esi
  LRESULT v12; // ecx
  LONG v13; // esi
  HWND v14; // eax
  LONG v15; // ecx
  int v16; // edx
  LONG (*v17)(HWND, int); // ebp
  unsigned int *v18; // ecx
  unsigned int *v19; // eax
  HWND v20; // eax
  int v21; // esi
  int v22; // eax
  unsigned int v23; // ebx
  unsigned int *v24; // eax
  unsigned int *v25; // esi
  void (***v26)(unsigned int, int); // ecx
  HDC DC; // esi
  int result; // eax
  int v29; // edx
  LRESULT v30; // eax
  int v31; // ebp
  HWND v32; // ecx
  LRESULT (*v33)(HWND, UINT, WPARAM, LPARAM); // esi
  int v34; // eax
  int v35; // eax
  LRESULT (**v36)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v37; // eax
  int *v38; // edi
  unsigned int *v39; // ebx
  int v40; // eax
  int v41; // ecx
  WPARAM v42; // ebp
  int v43; // ecx
  // w15f4: v3-export truncated tail (RHS lost): ... ...
  // live body via get_context/0x618D40 — w15f4 regrafted decls only
  int v44; // ecx
  int v45; // esi
  int v46; // eax
  int v47; // edi
  int v48; // eax
  int v49; // edx
  int v50; // esi
  int v51; // esi
  int v52; // edx
  int v53; // edx
  wchar_t *v54; // eax
  HWND v55; // ecx
  LRESULT (__stdcall *v56)(HWND, UINT, WPARAM, LPARAM); // esi
  int v57; // eax
  int v58; // eax
  LRESULT (__stdcall **v59)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v60; // eax
  LONG v61; // eax
  int v62; // ebx
  int v63; // ebp
  size_t v64; // esi
  wchar_t *v65; // edi
  size_t v66; // eax
  int *v67; // eax
  int v68; // esi
  size_t v69; // eax
  HWND v70; // eax
  HWND v71; // eax
  LRESULT v72; // esi
  int v73; // ebp
  int v74; // esi
  int v75; // ecx
  int v76; // eax
  int v77; // ecx
  int v78; // ebx
  HWND v79; // eax
  const void *v80; // esi
  int v81; // ebp
  int v82; // esi
  int v83; // ecx
  int v84; // eax
  int v85; // ecx
  int v86; // ebx
  void *v87; // eax
  const void *v88; // esi
  int v89; // eax
  char *v90; // ebp
  int v91; // eax
  int v92; // esi
  int v93; // ebx
  int v94; // esi
  int v95; // ecx
  int v96; // ebx
  HWND v97; // eax
  const void *v98; // esi
  void **v99; // esi
  void **v100; // esi
  unsigned int *v101; // ecx
  char *v102; // edx
  HWND v103; // ebx
  int v104; // eax
  int v105; // edi
  int v106; // ecx
  int v107; // ebp
  int v108; // ebx
  int v109; // esi
  int v110; // eax
  int v111; // edi
  int v112; // esi
  int v113; // ebp
  HWND v114; // esi
  unsigned short v115; // ax
  void *v116; // esi
  int *v117; // ebp
  int *v118; // eax
  void (__stdcall *v119)(HWND, UINT, WPARAM, LPARAM); // edi
  int v120; // eax
  int v121; // edx
  HWND v122; // ecx
  int v123; // eax
  int v124; // edx
  void *v125; // ebx
  const void *v126; // esi
  int v127; // edx
  int k; // ecx
  unsigned int *v129; // eax
  int v130; // eax
  int v131; // edx
  int v132; // esi
  int v133; // ecx
  int *v134; // ecx
  int v135; // ecx
  int v136; // eax
  int *v137; // eax
  HWND v138; // esi
  unsigned short v139; // ax
  LRESULT v140; // eax
  int v141; // esi
  LRESULT v142; // ebx
  LRESULT v143; // eax
  int v144; // eax
  int *v145; // edi
  int v146; // edx
  int v147; // esi
  int v149; // ebx
  int *v150; // esi
  int v151; // edx
  int v152; // ecx
  int *v153; // edi
  int v154; // ebp
  int *v155; // ecx
  LRESULT v156; // esi
  void (__stdcall *v157)(HWND, UINT, WPARAM, LPARAM); // edi
  HWND v158; // esi
  unsigned short WindowLongA; // ax
  LRESULT v160; // ebx
  LRESULT v161; // esi
  int v162; // ecx
  LONG right; // edx
  int v164; // eax
  LONG *v165; // ecx
  int v166; // esi
  LONG left; // eax
  signed int v168; // ebx
  int v169; // esi
  LRESULT v170; // eax
  int *v171; // ebp
  int *v172; // eax
  int v173; // ecx
  float v174; // edx
  int v175; // eax
  float v176; // ecx
  void *v177; // ebx
  const void *v178; // esi
  int v179; // edx
  float m; // ecx
  unsigned int *v181; // eax
  int v182; // edx
  int v183; // esi
  float v184; // ecx
  int v185; // eax
  int *v186; // eax
  HWND v187; // esi
  unsigned short v188; // ax
  unsigned short v189; // ax
  LRESULT (__stdcall *v190)(HWND, UINT, WPARAM, LPARAM); // edi
  LRESULT v191; // ebx
  LRESULT v192; // eax
  LRESULT v193; // esi
  int16_t v194; // bx
  WPARAM v195; // edi
  HWND v196; // esi
  unsigned short v197; // ax
  int *v198; // ebp
  int *v199; // eax
  int v200; // ecx
  HWND v201; // esi
  int v202; // eax
  int v203; // ecx
  void *v204; // ebx
  const void *v205; // esi
  int v206; // edx
  HWND jj; // ecx
  unsigned int *v208; // eax
  HWND v209; // ecx
  int v210; // eax
  LONG *v211; // eax
  int *v212; // esi
  int *v213; // eax
  int v214; // edi
  LONG v215; // ebp
  wchar_t **v216; // eax
  int v217; // ecx
  int v218; // edx
  int v219; // edi
  LONG v220; // esi
  int v221; // edi
  LRESULT v222; // ecx
  int v223; // esi
  LPARAM v224; // ebp
  int v225; // eax
  int v226; // ebx
  LPARAM v227; // ecx
  int v228; // eax
  int v229; // ebx
  int v230; // eax
  wchar_t *v231; // edi
  wchar_t **v232; // esi
  wchar_t *v233; // eax
  wchar_t *v234; // eax
  int *v235; // esi
  int v236; // eax
  wchar_t **v237; // ecx
  int v238; // edi
  int ii; // edx
  int v240; // ebp
  int v241; // edx
  int *v242; // edx
  unsigned int *v243; // ebp
  int v244; // esi
  LRESULT v245; // ebx
  int v246; // eax
  int v247; // edi
  int v248; // ecx
  HWND v249; // eax
  int *v250; // ebp
  int v251; // ecx
  HWND v252; // esi
  int v253; // eax
  LRESULT v254; // ecx
  int v255; // ebx
  const void *v256; // esi
  HWND v257; // edi
  int v258; // esi
  LRESULT v259; // ecx
  LRESULT v260; // eax
  int v261; // esi
  int v262; // edi
  const wchar_t *v263; // edi
  LRESULT v264; // eax
  LRESULT v265; // ebx
  BOOL v266; // esi
  WPARAM v267; // ebp
  size_t v268; // eax
  int v269; // eax
  LRESULT v270; // eax
  wchar_t *v271; // ebx
  HWND v272; // edi
  size_t v273; // eax
  char *v274; // esi
  WPARAM v275; // eax
  LRESULT v276; // eax
  int v277; // ebp
  signed int v278; // eax
  bool v279; // cc
  signed int v280; // esi
  signed int v281; // ecx
  void *v282; // ebx
  const void *v283; // esi
  int v284; // edx
  unsigned int *v285; // esi
  int v286; // ebp
  signed int v287; // eax
  bool v288; // cc
  signed int v289; // esi
  signed int v290; // ecx
  void *v291; // ebx
  const void *v292; // esi
  int v293; // edx
  unsigned int *v294; // esi
  int *v295; // esi
  int v296; // eax
  int v297; // ecx
  char *v298; // ecx
  char *v299; // eax
  HWND v300; // ebx
  unsigned int *v301; // ebp
  int v302; // eax
  int v303; // eax
  int v304; // ecx
  const void *v305; // esi
  int v306; // eax
  int *v307; // eax
  unsigned int *v308; // ecx
  wchar_t *v309; // ebx
  LRESULT v310; // eax
  signed int v311; // edi
  const wchar_t **v312; // esi
  LONG v313; // ebx
  LRESULT v314; // esi
  LRESULT v315; // ecx
  HWND *v316; // esi
  HWND v317; // ebx
  LONG v318; // edi
  LONG v319; // ebp
  HWND *v320; // eax
  int v321; // eax
  LONG v322; // edx
  LONG v323; // ecx
  HWND v324; // eax
  int v325; // esi
  unsigned int *v326; // ecx
  int v327; // edi
  double v328; // st7
  int *v329; // ebp
  int v330; // esi
  int *v331; // edi
  int v332; // ebx
  int v333; // esi
  int v334; // eax
  int v335; // edx
  int v336; // eax
  unsigned int *v337; // eax
  void *v338; // eax
  int v339; // eax
  int v340; // esi
  unsigned int *v341; // edi
  unsigned int *v342; // edi
  int v343; // ebp
  double v344; // st7
  unsigned int *v345; // esi
  unsigned int *n; // eax
  void *v347; // esi
  int v348; // esi
  unsigned int *v349; // ecx
  int v350; // edi
  double v351; // st7
  HWND v352; // ebp
  int v353; // esi
  int *v354; // edi
  int v355; // ebp
  int v356; // esi
  int v357; // eax
  int v358; // edx
  int v359; // eax
  unsigned int *v360; // eax
  void *v361; // eax
  int v362; // edi
  HWND v363; // esi
  WPARAM v364; // ebx
  void **v365; // esi
  void **v366; // esi
  HWND v367; // [esp-4h] [ebp-2D40h]
  HWND v368; // [esp-4h] [ebp-2D40h]
  HWND v369; // [esp-4h] [ebp-2D40h]
  HWND v370; // [esp-4h] [ebp-2D40h]
  HWND v371; // [esp-4h] [ebp-2D40h]
  HWND v372; // [esp-4h] [ebp-2D40h]
  char *v373; // [esp-4h] [ebp-2D40h]
  char *v374; // [esp-4h] [ebp-2D40h]
  unsigned int *v375; // [esp+10h] [ebp-2D2Ch]
  int v376; // [esp+14h] [ebp-2D28h] BYREF
  signed int v377; // [esp+18h] [ebp-2D24h]
  char v378; // [esp+1Fh] [ebp-2D1Dh]
  WPARAM v379; // [esp+20h] [ebp-2D1Ch]
  WPARAM wParam; // [esp+24h] [ebp-2D18h] BYREF
  HWND Parent; // [esp+28h] [ebp-2D14h]
  float v382; // [esp+2Ch] [ebp-2D10h]
  HWND v383; // [esp+30h] [ebp-2D0Ch] BYREF
  int v384; // [esp+34h] [ebp-2D08h]
  int *j; // [esp+38h] [ebp-2D04h]
  LPARAM v386; // [esp+3Ch] [ebp-2D00h]
  WNDPROC lpPrevWndFunc; // [esp+40h] [ebp-2CFCh]
  int64_t v388; // [esp+44h] [ebp-2CF8h] BYREF
  struct tagRECT Rect; // [esp+4Ch] [ebp-2CF0h] BYREF
  struct tagRECT v390; // [esp+5Ch] [ebp-2CE0h] BYREF
  int v391; // [esp+6Ch] [ebp-2CD0h]
  LPARAM v392; // [esp+70h] [ebp-2CCCh] BYREF
  int v393; // [esp+74h] [ebp-2CC8h]
  int v394; // [esp+78h] [ebp-2CC4h]
  int v395; // [esp+7Ch] [ebp-2CC0h]
  int *v396; // [esp+80h] [ebp-2CBCh]
  int nWidth; // [esp+84h] [ebp-2CB8h]
  RECT v398; // [esp+88h] [ebp-2CB4h] BYREF
  struct tagRECT v399; // [esp+98h] [ebp-2CA4h] BYREF
  unsigned int *v400; // [esp+A8h] [ebp-2C94h]
  int v401; // [esp+ACh] [ebp-2C90h]
  struct tagRECT v402; // [esp+B0h] [ebp-2C8Ch] BYREF
  struct tagTEXTMETRICA lParam; // [esp+C0h] [ebp-2C7Ch] BYREF
  HWND v404; // [esp+F8h] [ebp-2C44h] BYREF
  int v405[8]; // [esp+FCh] [ebp-2C40h] BYREF
  unsigned int v406[4]; // [esp+11Ch] [ebp-2C20h] BYREF
  int v407[4]; // [esp+12Ch] [ebp-2C10h] BYREF
  wchar_t Destination[511]; // [esp+13Ch] [ebp-2C00h] BYREF
  int16_t v409; // [esp+53Ah] [ebp-2802h]
  unsigned short v410[5120]; // [esp+53Ch] [ebp-2800h] BYREF
}
} // namespace gamemd

// 0x624460
namespace gamemd {
void Options::ClearComboBoxes()
{

  (&this->q008)->Alt(); /*0x624466*/
  (&this->q004)->Alt(); /*0x62446e*/

}
} // namespace gamemd
