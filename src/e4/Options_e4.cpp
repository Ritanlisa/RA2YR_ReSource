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

// 0x4F11B0
namespace gamemd {
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

  result = (int)(BaseDialogProc((gamemd::SkirmishDialog *)(hDlg), a2, a3, (unsigned int)a4));
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
          v6 = (wchar_t *)((&off_822730)[v5]);
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
            String = (wchar_t *)(GetStringCSF(v6, 0,(const char *)(g_Str_File_GOptions_CPP), 196));
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
      dword_A8EE30 = ((gamemd::Timer *)this)->GetTicks(); /*0x4f12da*/
      dword_A8EE38 = 0; /*0x4f12df*/
      atexit(nullsub_14); /*0x4f12e9*/
    }
    if ( (byte_A8EDF8 & 2) == 0 ) /*0x4f12f8*/
    {
      byte_A8EDF8 |= 2u; /*0x4f1303*/
      ((gamemd::Timer *)((DWORD *)&dword_A8EE40))->Init(0); /*0x4f1308*/
      atexit(nullsub_13); /*0x4f1312*/
    }
    if ( (uint16_t)a3 <= 0x521u ) /*0x4f1326*/
    {
      if ( (uint16_t)a3 == 1313 ) /*0x4f132c*/
      {
        if ( !v10 ) /*0x4f14dc*/
        {
          dword_A8EDA0 = 5; /*0x4f14e2*/
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
        Options_Constructor = (const char **)LoadOptions::LoadOptions(v28); /*0x4f14a0*/
        Options::PrepareSaveLoadDlg(Options_Constructor); /*0x4f14a7*/
        v16 = v28; /*0x4f14ac*/
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
          v13 = LoadOptions::LoadOptions(v27); /*0x4f136a*/
          Options_Run = (uint8_t)LoadOptions::Run(v13); /*0x4f137a*/
          ((LoadOptions *)(v27))->Cleanup(); /*0x4f137c*/
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
        if ( ((unsigned int *)(dword_A8B238))[0] && ((unsigned int *)(dword_A8B238))[0] != 5 ) /*0x4f13d1*/
        {
          v15 = (char *)(((EventClass*)(int)(v29))->AddEvent(*((unsigned int *)dword_A83D4C + 12), (void *)(0x1Du))); /*0x4f13e5*/
          ((void (*)(char *))OptionQueue::PushEntry)(v15); /*0x4f13f0*/
          *WindowLongA = 1311; /*0x4f13f6*/
          return 0; /*0x4f1408*/
        }
        v12 = (void (*)(HWND, int))ShowWindow; /*0x4f140b*/
        ShowWindow(hDlg, 0); /*0x4f1414*/
        if ( ((unsigned int *)(dword_A8B238))[0] ) /*0x4f141d*/
          swprintf(Buffer, (const size_t)&off_8240B4, (const wchar_t *const)dword_A8B230 + 2480); /*0x4f1455*/
        else
          swprintf(Buffer, (const size_t)&off_8240B4, (const wchar_t *const)dword_A8B230 + 2541); /*0x4f1439*/
        LoadOptions::LoadOptions(v26); /*0x4f1469*/
        ((void (*)(wchar_t *))ShowSaveLoadDialog)(Buffer); /*0x4f1470*/
        v16 = v26; /*0x4f1475*/
      }
      ((LoadOptions *)(v16))->Cleanup(); /*0x4f14b3*/
      Options::InitDialogControls(hDlg); /*0x4f14ba*/
      goto LABEL_39; /*0x4f14ba*/
    }
    if ( (uint16_t)a3 == 1314 ) /*0x4f1508*/
    {
      if ( !v10 ) /*0x4f16c2*/
      {
        if ( ((unsigned int *)(dword_A8B238))[0] != 4 || (dword_A8EDA0 = 2, !*(unsigned int *)dword_B779C4) ) /*0x4f16de*/
          dword_A8EDA0 = 3; /*0x4f16e0*/
        *WindowLongA = 2; /*0x4f16ea*/
      }
      return 0; /*0x4f16ea*/
    }
    if ( (uint16_t)a3 != 1653 && (uint16_t)a3 != 1670 || v10 ) /*0x4f1521*/
      return 0; /*0x4f16f1*/
    if ( ((unsigned int *)(dword_A8B238))[0] == 4 && !dword_A8B538 ) /*0x4f153b*/
    {
      v18 = GetDlgItem(hDlg, 1007); /*0x4f154d*/
      if ( v18 ) /*0x4f1557*/
      {
        v19 = (wchar_t *)(3 - SendMessageA(v18, 0x400u, 0, 0)); /*0x4f156e*/
        if ( v19 != (wchar_t *)(dword_A8DB9C) ) /*0x4f1577*/
        {
          if ( ((Timer*)&dword_A8EE40)->GetRemainingMs() ) /*0x4f157e*/
          {
            ((gamemd::Debug *)this)->Log(); /*0x4f15eb*/
          }
          else
          {
            ((gamemd::Timer *)(v24))->Init(0x384u); /*0x4f1590*/
            dword_A8EE40 = v24[0]; /*0x4f15a4*/
            dword_A8EE44 = v24[1]; /*0x4f15b0*/
            dword_A8EE48 = v24[2]; /*0x4f15b6*/
            v20 = (char *)(((EventClass*)(gamemd::AnimClass *)(v31))->Add2(*((unsigned int *)dword_A83D4C + 12), (IUnknown *)(0x24u), (void *)((int)v19))); /*0x4f15c6*/
            ((void (*)(char *))OptionQueue::PushEntry)(v20); /*0x4f15d1*/
            ((gamemd::Debug *)this)->Log(); /*0x4f15dc*/
          }
        }
      }
      v21 = GetDlgItem(hDlg, 1321); /*0x4f15f9*/
      if ( v21 ) /*0x4f15fd*/
      {
        v22 = 6 - SendMessageA(v21, 0x400u, 0, 0); /*0x4f1614*/
        if ( *(unsigned int *)dword_A8EB60 != v22 ) /*0x4f161d*/
        {
          if ( !((Timer*)&dword_A8EE30)->GetRemainingMs() ) /*0x4f1628*/
          {
            ((gamemd::Timer *)(v25))->Init(0x384u); /*0x4f163a*/
            dword_A8EE30 = v25[0]; /*0x4f164e*/
            dword_A8EE34 = v25[1]; /*0x4f1658*/
            dword_A8EE38 = v25[2]; /*0x4f165e*/
            v23 = (char *)(EventClass::Add2((gamemd::AnimClass *)(v30), *((unsigned int *)dword_A83D4C + 12),(IUnknown *)(0xDu),(void *)(v22))); /*0x4f166f*/
            ((void (*)(char *))OptionQueue::PushEntry)(v23); /*0x4f167a*/
            *WindowLongA = 1; /*0x4f1687*/
            return 0; /*0x4f1696*/
          }
          ((gamemd::Debug *)this)->Log(); /*0x4f169e*/
        }
      }
    }
    *WindowLongA = 1; /*0x4f16ab*/
    return 0; /*0x4f16b4*/
  }
  return result; /*0x4f120d*/

}
}
// 0x558840
namespace gamemd {
void Options::PrepareSaveLoadDlg(const char ** dwNewLong)
{

  dwNewLong->field_4 = (void *)3; /*0x558840*/
  dwNewLong->field_C = 0; /*0x558847*/
  return ((SaveLoadDialog*)(SaveLoadDialog *)dwNewLong)->DlgProc();

}
}
// 0x55FAA0
namespace gamemd {
AbstractClass * * Options::Screen_Save()
{

  HWND DlgItem; // eax
  int v3; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  int v10; // eax
  HWND v11; // eax
  int result; // eax
  float v13; // [esp+0h] [ebp-18h]
  float v14; // [esp+0h] [ebp-18h]
  float v15; // [esp+0h] [ebp-18h]

  DlgItem = GetDlgItem((HWND)this, 1323); /*0x55fab2*/
  if ( DlgItem )
  {
    v3 = SendMessageA(DlgItem, 0x400u, 0, 0) != 0 ? 2 : 0;
    if ( stru_A8EB00.ObjectTypeClass[30] != v3 ) /*0x55fad9*/
    {
      stru_A8EB00.ObjectTypeClass[30] = v3; /*0x55fae0*/
      ((TacticalClass *)((TacticalClass *)&stru_87F5F0.__pad_58[416]))->Initialize(); /*0x55fae5*/
    }
  }
  v4 = GetDlgItem((HWND)this, 1295); /*0x55faf0*/
  if ( v4 ) /*0x55faf4*/
    stru_A8EB00.ObjectTypeClass[25] = SendMessageA(v4, 0x400u, 0, 0); /*0x55fb02*/
  v5 = GetDlgItem((HWND)this, 1537); /*0x55fb0d*/
  if ( v5 ) /*0x55fb11*/
  {
    BYTE2(stru_A8EB00.ObjectTypeClass[31]) = SendMessageA(v5, 0xF0u, 0, 0) == 1; /*0x55fb25*/
    SetGlobalFlag(SBYTE2(stru_A8EB00.ObjectTypeClass[31])); /*0x55fb2b*/
  }
  v6 = GetDlgItem((HWND)this, 1540); /*0x55fb36*/
  if ( v6 ) /*0x55fb3a*/
    HIBYTE(stru_A8EB00.ObjectTypeClass[31]) = SendMessageA(v6, 0xF0u, 0, 0) == 1; /*0x55fb4e*/
  v7 = GetDlgItem((HWND)this, 1538); /*0x55fb59*/
  if ( v7 ) /*0x55fb5d*/
    LOBYTE(stru_A8EB00.ObjectTypeClass[32]) = SendMessageA(v7, 0xF0u, 0, 0) == 1; /*0x55fb71*/
  v8 = GetDlgItem((HWND)this, 1322); /*0x55fb7d*/
  if ( v8 ) /*0x55fb81*/
    stru_A8EB00.ObjectTypeClass[28] = 6 - SendMessageA(v8, 0x400u, 0, 0); /*0x55fb96*/
  v9 = GetDlgItem((HWND)this, 1327); /*0x55fba2*/
  if ( v9 ) /*0x55fba6*/
  {
    v13 = (double)SendMessageA(v9, 0x400u, 0, 0) * 0.1; /*0x55fbca*/
    Audio::SetScoreVolume(&stru_A8EB00.ObjectTypeClass[24], v13, 0); /*0x55fbcd*/
    if ( *(float *)&stru_A8EB00.ObjectTypeClass[40] == 0.0 ) /*0x55fbe3*/
    {
      v10 = dword_A83D14; /*0x55fbe5*/
      if ( dword_A83D14 == -1 ) /*0x55fbed*/
        v10 = dword_A83D18; /*0x55fbef*/
      Theme::QueueSong((gamemd::IUnknown *)((int)&unk_A83D10),(void *)(v10)); /*0x55fbfa*/
      ((Theme *)((Theme *)&unk_A83D10))->Stop(0); /*0x55fc06*/
    }
  }
  v11 = GetDlgItem((HWND)this, 1330); /*0x55fc11*/
  if ( v11 ) /*0x55fc15*/
  {
    v14 = (double)SendMessageA(v11, 0x400u, 0, 0) * 0.1; /*0x55fc39*/
    Audio::SetSoundVolume(&stru_A8EB00.ObjectTypeClass[24], v14, 0); /*0x55fc3c*/
  }
  result = (int)GetDlgItem((HWND)this, 1334); /*0x55fc47*/
  if ( result ) /*0x55fc4b*/
  {
    v15 = (gamemd::AbstractClass **)((double)SendMessageA((HWND)result, 0x400u, 0, 0) * 0.1); /*0x55fc6f*/
    return Audio::SetVoiceVolume(&stru_A8EB00.ObjectTypeClass[24], v15, 0); /*0x55fc72*/
  }
  return (gamemd::AbstractClass **)(result); /*0x55fc77*/

}
}
// 0x55FC80
namespace gamemd {
char Options::Screen_Dialog()
{

  HWND v0; // eax
  HWND v1; // esi
  int v2; // ecx
  HWND v3; // eax
  HWND v4; // esi
  int v5; // ecx
  char v7; // [esp+13h] [ebp-9h]
  LONG dwNewLong; // [esp+14h] [ebp-8h] BYREF
  LONG v9; // [esp+18h] [ebp-4h] BYREF

  v7 = byte_A8E9A0; /*0x55fc92*/
  byte_A8E9A0 = 0; /*0x55fc96*/
  while ( 1 ) /*0x55fd14*/
  {
    while ( 1 ) /*0x55fcca*/
    {
      do /*0x55fcca*/
      {
        qmemcpy(&unk_ABCE70, (const void *)dword_A8EB60, 0xB8u); /*0x55fcb1*/
        dwNewLong = -1; /*0x55fcbd*/
        v0 = (HWND)CreateDialog(0); /*0x55fcc1*/
        v1 = v0; /*0x55fcc6*/
      }
      while ( !v0 ); /*0x55fcca*/
      SetWindowLongA(v0, 8, (LONG)&dwNewLong); /*0x55fcd4*/
      ((gamemd::Dialog *)(v1))->Show(); /*0x55fcd8*/
      while ( dwNewLong < 0 ) /*0x55fce3*/
      {
        if ( (uint8_t)((gamemd::Dialog *)this)->PumpMessages() == 1 ) /*0x55fcec*/
          break; /*0x55fcec*/
        LOBYTE(v2) = 0; /*0x55fcee*/
        Process(v2); /*0x55fcf0*/
      }
      ((Options *)(v1))->Screen_Save(); /*0x55fcff*/
      ((Dialog*)v1)->Destroy(); /*0x55fd06*/
      if ( dwNewLong != 1485 ) /*0x55fd14*/
        break; /*0x55fd14*/
      v9 = -1; /*0x55fd2d*/
      ((ScenarioClass *)(&dword_A8B238))->LoadNetworkConfig(); /*0x55fd31*/
      v3 = (HWND)CreateDialog(0); /*0x55fd42*/
      v4 = v3; /*0x55fd47*/
      if ( v3 ) /*0x55fd4b*/
      {
        SetWindowLongA(v3, 8, (LONG)&v9); /*0x55fd59*/
        ((gamemd::Dialog *)(v4))->Show(); /*0x55fd5d*/
        while ( v9 < 0 ) /*0x55fd68*/
        {
          if ( (uint8_t)((gamemd::Dialog *)this)->PumpMessages() == 1 ) /*0x55fd71*/
            break; /*0x55fd71*/
          LOBYTE(v5) = 0; /*0x55fd73*/
          Process(v5); /*0x55fd75*/
        }
        ((Dialog*)v4)->Destroy(); /*0x55fd84*/
      }
    }
    if ( dwNewLong != 1486 ) /*0x55fd1c*/
      break; /*0x55fd1c*/
    ShowHotkeyOptionsDialog((void *)(dword_A8EB60)); /*0x55fd1e*/
  }
  ((ScenarioClass *)(dword_A8EB60))->SaveGameOptions(); /*0x55fd8e*/
  byte_A8E9A0 = v7; /*0x55fd9a*/
  return v7; /*0x55fd97*/

}
}
// 0x6244E0
namespace gamemd {
int Options::DeleteAndZero()
{

  int v2; // ebx
  int v3; // ebp
  char *v4; // esi
  int result; // eax

  v2 = 0; /*0x6244e4*/
  if ( *(int *)this->__pad_0 <= 0 ) /*0x6244e9*/
  {
    *(unsigned int *)this->__pad_0 = 0; /*0x62451b*/
  }
  else
  {
    v3 = 0; /*0x6244ed*/
    do /*0x62450e*/
    {
      v4 = (char *)this->field_8 + v3; /*0x6244f4*/
      DeleteAndZero::Alt((DeleteAndZero *)(v4 + 8)); /*0x6244f9*/
      DeleteAndZero::Alt((DeleteAndZero *)(v4 + 4)); /*0x624501*/
      result = *(unsigned int *)this->__pad_0; /*0x624506*/
      ++v2; /*0x624508*/
      v3 += 24; /*0x624509*/
    }
    while ( v2 < *(unsigned int *)this->__pad_0 ); /*0x62450e*/
    *(unsigned int *)this->__pad_0 = 0; /*0x624511*/
  }
  return result; /*0x624518*/

}
}
// 0x6248A0
namespace gamemd {
char Options::EnsureCapacity(void *a1_1, void *a2_1)
{

  void * v2;
  int v3; // ecx
  int v5; // ebx
  void *v6; // eax
  void *v7; // esi
  void *v8; // [esp+8h] [ebp-4h]

  v2 = (void *)((int)((void *)(*(unsigned int *)this->__pad_0)));
  v3 = (unsigned int)((int)this->field_4);
  if ( 3 * v2 > v3 ) /*0x6248b0*/
    return 0; /*0x6248b3*/
  v5 = v3 / 2; /*0x6248bf*/
  if ( v3 / 2 < 10 ) /*0x6248c4*/
    v5 = 10; /*0x6248c6*/
  if ( v5 >= v3 ) /*0x6248cd*/
    return 0; /*0x6248d0*/
  v6 = (void *)__2_YAPAXI_Z(24 * v5); /*0x6248dd*/
  v7 = (void *)(this->field_8); /*0x6248e2*/
  v8 = v6; /*0x6248ea*/
  if ( v7 ) /*0x6248ee*/
    qmemcpy(v6, v7, 24 * *(unsigned int *)this->__pad_0); /*0x624901*/
  __3_YAXPAX_Z((void *)(this->field_8)); /*0x62490f*/
  this->field_8 = (unsigned int)(v8); /*0x62491b*/
  this->field_4 = (unsigned int)((void *)v5); /*0x62491e*/
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

  v2 = *(unsigned int *)this->__pad_0; /*0x6253b4*/
  if ( *(unsigned int *)this->__pad_0 < (int)this->field_4 ) /*0x6253bb*/
    return 0; /*0x6253bd*/
  v4 = 2 * v2; /*0x6253c4*/
  v6 = 2 * v2; /*0x6253cb*/
  if ( 2 * v2 < 10 ) /*0x6253cf*/
  {
    v6 = 10; /*0x6253d1*/
    v4 = 10; /*0x6253d9*/
  }
  v5 = (void *)__2_YAPAXI_Z(4 * v4); /*0x6253ec*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x6253fa*/
  if ( this->field_8 ) /*0x625403*/
  {
    qmemcpy(v5, this->field_8, 4 * *(unsigned int *)this->__pad_0); /*0x625418*/
    v4 = v6; /*0x625421*/
  }
  __3_YAXPAX_Z((void *)(this->field_8)); /*0x625429*/
  this->field_4 = (unsigned int)((void *)v4); /*0x625431*/
  this->field_8 = (unsigned int)(v5); /*0x625434*/
  return 1; /*0x6253bf*/

}
}
// 0x6254D0
namespace gamemd {
int Options::ReadOptionValue()
{

  void * v2;
  int v3; // ecx
  int v5; // ebx
  void *v6; // eax
  void *v7; // esi
  void *v8; // [esp+8h] [ebp-4h]

  v2 = (void *)((int)((void *)(*(unsigned int *)this->__pad_0)));
  v3 = (int)((void *)((int)this->field_4));
  if ( 3 * v2 > v3 ) /*0x6254e0*/
    return 0; /*0x6254e3*/
  v5 = v3 / 2; /*0x6254ef*/
  if ( v3 / 2 < 10 ) /*0x6254f4*/
    v5 = 10; /*0x6254f6*/
  if ( v5 >= v3 ) /*0x6254fd*/
    return 0; /*0x625500*/
  v6 = (void *)__2_YAPAXI_Z(20 * v5); /*0x62550d*/
  v7 = (void *)(this->field_8); /*0x625512*/
  v8 = v6; /*0x62551a*/
  if ( v7 ) /*0x62551e*/
    qmemcpy(v6, v7, 20 * *(unsigned int *)this->__pad_0); /*0x625531*/
  __3_YAXPAX_Z((void *)(this->field_8)); /*0x62553f*/
  this->field_8 = (unsigned int)(v8); /*0x62554b*/
  this->field_4 = (unsigned int)((void *)v5); /*0x62554e*/
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

  if ( *(unsigned int *)&Block->__pad_14[24] ) /*0x625563*/
  {
    __3_YAXPAX_Z(*(void **)&Block->__pad_14[24]); /*0x62556b*/
    *(unsigned int *)&Block->__pad_14[24] = 0; /*0x625573*/
  }
  for ( i = *(unsigned int **)&Block->__pad_34[4]; i; i = *(unsigned int **)&Block->__pad_34[4] ) /*0x62557f*/
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
      *(unsigned int *)&Block->__pad_34[4] = *v4; /*0x6255a7*/
    __3_YAXPAX_Z(v4); /*0x6255ab*/
LABEL_12:
    ; /*0x6255b3*/
  }
  v6 = *(void **)&Block->__pad_34[12]; /*0x6255bb*/
  if ( v6 ) /*0x6255c0*/
  {
    DeleteAndZero::Alt(*(DeleteAndZero **)&Block->__pad_34[12]); /*0x6255c4*/
    __3_YAXPAX_Z(v6); /*0x6255ca*/
  }
  if ( (a2 & 1) != 0 ) /*0x6255d9*/
    __3_YAXPAX_Z(Block); /*0x6255dc*/
  return (gamemd::AbstractClass **)(Block); /*0x6255e6*/

}
}
// 0x6255F0
namespace gamemd {
void * Options::RebuildDropdownList(ObjectClass * aP1)
{

  unsigned int *v2; // ebp
  int *v3; // edi
  int v4; // ebx
  void **v5; // esi
  int v6; // eax
  int v7; // ebp
  char *v8; // edi
  int v9; // eax
  int v10; // ebx
  int v11; // ecx
  int v12; // edi
  int v13; // edi
  Struct *v14; // ecx
  int v16; // [esp+10h] [ebp-20h]
  int v18; // [esp+18h] [ebp-18h] BYREF
  DeleteAndZero v19; // [esp+1Ch] [ebp-14h] BYREF
  int v20; // [esp+28h] [ebp-8h]
  int v21; // [esp+2Ch] [ebp-4h]

  v2 = (unsigned int *)((unsigned int)((unsigned int *)((unsigned int)(aP1)))); /*0x6255f5*/
  v3 = (int *)((void **)((int *)this)); /*0x6255fb*/
  v4 = (int)((void *)((int)((void *)(0)))); /*0x625600*/
  *(unsigned int *)this->__pad_0 = *(unsigned int *)aP1; /*0x625602*/
  v5 = (void **)(&this->field_8); /*0x625607*/
  this->field_4 = (void *)aP1[1]; /*0x62560a*/
  this->field_8 = 0; /*0x625615*/
  this->field_C = 0; /*0x625617*/
  this->field_10 = 0; /*0x62561a*/
  unknown_libname_74(&v19); /*0x62561d*/
  unknown_libname_74(&v19.DeleteAndZero_field_0x04); /*0x625626*/
  v18 = 0; /*0x62562e*/
  v19.DeleteAndZero_field_0x08 = -1; /*0x625632*/
  v21 = -1; /*0x625636*/
  v6 = (int)*v5; /*0x62563a*/
  v20 = 0; /*0x62563c*/
  if ( v6 > 0 ) /*0x625642*/
  {
    v7 = 0; /*0x625644*/
    do /*0x625665*/
    {
      v8 = (char *)v5[2] + v7; /*0x62564b*/
      DeleteAndZero::Alt((DeleteAndZero *)(v8 + 8)); /*0x625650*/
      DeleteAndZero::Alt((DeleteAndZero *)(v8 + 4)); /*0x625658*/
      ++v4; /*0x62565f*/
      v7 += 24; /*0x625660*/
    }
    while ( v4 < (int)*v5 ); /*0x625665*/
    v2 = (unsigned int *)(aP1); /*0x625667*/
    v3 = (int *)this; /*0x62566b*/
  }
  *v5 = 0; /*0x62566f*/
  v9 = v2[2]; /*0x625675*/
  v10 = 0; /*0x625678*/
  if ( v9 > 0 ) /*0x62567c*/
  {
    v11 = 0; /*0x625682*/
    v16 = 0; /*0x625684*/
    while ( 1 ) /*0x62568e*/
    {
      if ( v11 >= 0 && v10 < v9 ) /*0x625694*/
      {
        v12 = v11 + v2[4]; /*0x625699*/
        v18 = *(unsigned int *)v12; /*0x6256a5*/
        ((WideString *)((void **)&v19))->Reassign_Alt((const wchar_t **)(v12 + 4)); /*0x6256a9*/
        ((WideString *)((void **)&v19.DeleteAndZero_field_0x04))->Reassign_Alt((const wchar_t **)(v12 + 8)); /*0x6256b6*/
        v19.DeleteAndZero_field_0x08 = *(unsigned int *)(v12 + 12); /*0x6256be*/
        v20 = *(unsigned int *)(v12 + 16); /*0x6256c5*/
        v21 = *(unsigned int *)(v12 + 20); /*0x6256cc*/
      }
      v13 = (int)*v5; /*0x6256d0*/
      if ( (int)*v5 >= (int)v5[1] ) /*0x6256d7*/
        ((DynamicVector *)((DynamicVector *)v5))->GrowCapacity(); /*0x6256db*/
      if ( (int)*v5 >= (int)v5[1] ) /*0x6256e7*/
        ((DynamicVector *)((DynamicVector *)v5))->GrowCapacity(); /*0x6256eb*/
      if ( v13 < (int)*v5 ) /*0x6256f4*/
        memcpy((char *)v5[2] + 24 * v13 + 24, (char *)v5[2] + 24 * v13, 24 * (unsigned int)*v5 - 24 * v13); /*0x625713*/
      v14 = (Struct *)((char *)v5[2] + 24 * v13); /*0x625721*/
      if ( v14 ) /*0x625726*/
        ((Struct *)(v14))->WideStringCopy((int)&v18); /*0x62572d*/
      ++v10; /*0x625739*/
      *v5 = (char *)*v5 + 1; /*0x62573a*/
      v11 = v16 + 24; /*0x625740*/
      v9 = ((int *)aP1)[2]; /*0x625743*/
      v16 += 24; /*0x625746*/
      if ( v10 >= v9 ) /*0x62574c*/
        break; /*0x62574c*/
      v2 = (unsigned int *)(aP1); /*0x62568a*/
    }
    v3 = (int *)this; /*0x625752*/
  }
  DeleteAndZero::Alt((DeleteAndZero *)&v19.DeleteAndZero_field_0x04); /*0x62575a*/
  DeleteAndZero::Alt(&v19); /*0x625763*/
  return v3; /*0x62576a*/

}
}
// 0x625A20
namespace gamemd {
int Options::SaveOptionValue()
{

  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  void *v6; // esi
  void *v7; // [esp+4h] [ebp-4h]

  v2 = *(unsigned int *)this->__pad_0; /*0x625a24*/
  if ( *(unsigned int *)this->__pad_0 < (int)this->field_4 ) /*0x625a2b*/
    return 0; /*0x625a2d*/
  v4 = 2 * v2; /*0x625a33*/
  if ( 2 * v2 < 10 ) /*0x625a3b*/
    v4 = 10; /*0x625a3d*/
  v5 = (void *)__2_YAPAXI_Z(20 * v4); /*0x625a4f*/
  memset(v5, 0, 4 * ((unsigned int)(20 * v4) >> 2)); /*0x625a5a*/
  v7 = v5; /*0x625a64*/
  v6 = (void *)(this->field_8); /*0x625a6a*/
  if ( v6 ) /*0x625a6f*/
    qmemcpy(v5, v6, 20 * *(unsigned int *)this->__pad_0); /*0x625a80*/
  __3_YAXPAX_Z((void *)(this->field_8)); /*0x625a8d*/
  this->field_4 = (unsigned int)((void *)v4); /*0x625a99*/
  this->field_8 = (unsigned int)(v7); /*0x625a9c*/
  return 1; /*0x625a2f*/

}
}
// 0x4F1720
namespace gamemd {
HWND Options::InitDialogControls(HWND hDlg)
{

  int result; // eax
  HWND v3; // eax
  HWND v4; // esi
  LPARAM v5; // edi
  HWND v6; // esi
  LoadOptions *v7; // eax
  HWND DlgItem; // eax
  uint8_t v9; // [esp+10h] [ebp-3Ch]
  LoadOptions v10; // [esp+14h] [ebp-38h] BYREF

  result = *(unsigned int *)&dword_A8B238; /*0x4f1720*/
  if ( !*(unsigned int *)&dword_A8B238 || *(unsigned int *)&dword_A8B238 == 5 ) /*0x4f1739*/
  {
    v7 = (LoadOptions *)LoadOptions::LoadOptions(&v10); /*0x4f17dd*/
    v9 = ((LoadOptions *)(v7))->Check(); /*0x4f17ed*/
    ((LoadOptions*)&v10)->Cleanup(); /*0x4f17f1*/
    DlgItem = GetDlgItem((HWND)hDlg, 1310); /*0x4f1802*/
    if ( DlgItem ) /*0x4f1810*/
      EnableWindow(DlgItem, v9); /*0x4f181c*/
    result = (int)GetDlgItem((HWND)hDlg, 1312); /*0x4f1824*/
    if ( result ) /*0x4f1828*/
      return (HWND)(EnableWindow((HWND)result, v9)); /*0x4f1832*/
  }
  else if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x4f1742*/
  {
    result = dword_A8B538; /*0x4f1748*/
    if ( !dword_A8B538 ) /*0x4f174f*/
    {
      v3 = GetDlgItem((HWND)hDlg, 1007); /*0x4f175b*/
      v4 = v3; /*0x4f1767*/
      if ( v3 ) /*0x4f176b*/
      {
        v5 = 3 - (unsigned int)dword_A8DB9C; /*0x4f1785*/
        SendMessageA(v3, 0x406u, 1u, 196608); /*0x4f1787*/
        SendMessageA(v4, 0x405u, 1u, v5); /*0x4f1792*/
      }
      result = (int)GetDlgItem((HWND)hDlg, 1321); /*0x4f179a*/
      v6 = (HWND)result; /*0x4f17a0*/
      if ( result ) /*0x4f17a4*/
      {
        SendMessageA((HWND)result, 0x406u, 1u, 393216); /*0x4f17b7*/
        return SendMessageA(v6, 0x405u, 1u, 6 - stru_A8EB00.ObjectTypeClass[24]); /*0x4f17cf*/
      }
    }
  }
  return (HWND)(result); /*0x4f17d1*/

}
} // namespace gamemd

// 0x5FA4A0
namespace gamemd {
void Options::SetScoreVolume(float volume, int pad, void *a3_1)
{

  double v4; // st7
  int v5; // eax
  int v6; // eax

  if ( volume >= 1.0 ) /*0x5fa4b2*/
    v4 = 1.0; /*0x5fa4ba*/
  else
    v4 = volume; /*0x5fa4b4*/
  *((float *)this + 16) = v4; /*0x5fa4c0*/
  LOWORD(v5) = Math::RoundToInt(v4 * 16384.0); /*0x5fa4c9*/
  EndBufferMixer((gamemd::VolumeStruct *)((int *)g_MixerChannel_Theme), v5); /*0x5fa4d6*/
  LOWORD(v6) = Math::RoundToInt(*((float *)this + 16) * 255.0); /*0x5fa4e4*/
  TechnoTypeClass::CheckFlag(&unk_A83D10, v6); /*0x5fa4ef*/
  return Debug::Log(); /*0x5fa50b*/

}
} // namespace gamemd

// 0x5FA510
namespace gamemd {
void Options::SetSoundVolume(float volume, int pad, void *a3_1)
{

  double v3; // st7
  int v4; // eax

  if ( volume >= 1.0 ) /*0x5fa522*/
    v3 = 1.0; /*0x5fa52a*/
  else
    v3 = volume; /*0x5fa524*/
  *((float *)this + 14) = v3; /*0x5fa530*/
  LOWORD(v4) = Math::RoundToInt(v3 * 16384.0); /*0x5fa539*/
  EndBufferMixer((gamemd::VolumeStruct *)((int *)g_MixerChannel_Score), v4); /*0x5fa546*/
  if ( pad ) /*0x5fa551*/
    PlayVocClass(*(unsigned int *)&dword_8871E0->__pad_704[12], 0x2000, 1.0, 0); /*0x5fa56a*/
  return Debug::Log(); /*0x5fa586*/

}
} // namespace gamemd

// 0x5FA590
namespace gamemd {
void Options::SetVoiceVolume(float volume, int pad, void *a3_1)
{

  double v4; // st7
  int v5; // eax
  int v6; // eax

  if ( volume >= 1.0 ) /*0x5fa5a2*/
    v4 = 1.0; /*0x5fa5aa*/
  else
    v4 = volume; /*0x5fa5a4*/
  *((float *)this + 15) = v4; /*0x5fa5b0*/
  LOWORD(v5) = Math::RoundToInt(v4 * 255.0); /*0x5fa5b9*/
  ThemeClass::GetField(v5); /*0x5fa5c0*/
  LOWORD(v6) = Math::RoundToInt(*((float *)this + 15) * 16384.0); /*0x5fa5ce*/
  EndBufferMixer((gamemd::VolumeStruct *)((int *)g_MixerChannel_Voice), v6); /*0x5fa5db*/
  if ( pad ) /*0x5fa5e6*/
    PlayVocClass(*(unsigned int *)&dword_8871E0->__pad_704[12], 0x2000, *((float *)this + 15), 0); /*0x5fa5ff*/
  return Debug::Log(); /*0x5fa61b*/

}
} // namespace gamemd

// 0x618D40
namespace gamemd {
int Options::DialogProc(CCINIClass hWnd)
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
  ... [101654 chars total]
}
} // namespace gamemd

// 0x624460
namespace gamemd {
void Options::ClearComboBoxes()
{

  DeleteAndZero::Alt((DeleteAndZero *)&this->field_8); /*0x624466*/
  DeleteAndZero::Alt((DeleteAndZero *)&this->field_4); /*0x62446e*/

}
} // namespace gamemd
