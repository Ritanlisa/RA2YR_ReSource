// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/WinModemClass_e4.hpp"

#include "e4/e4_globals.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Diplomacy_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/DiskLaserClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/E4Recv_5EE200_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/DialogControl_e4.hpp"
#include "e4/classes/TimerPool_e4.hpp"
#include "e4/classes/DialogClass_e4.hpp"
#include "e4/classes/VtableStub_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Options_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/ListBox_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/BinkMovie_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x49F740
namespace gamemd {
void Dialog::MapDialogResource()
{

  if ( *(unsigned int *)&this->__pad_0[4] == 48879 ) /*0x49f74a*/
  {
    ((gamemd::Debug *)this)->Log(); /*0x49f751*/
    g_DDrawSurfaceManager.description[6] = (int)MapViewOfFileEx((HANDLE)(this->Dialog_field_0xC), 0xF001Fu, 0, 0, 0, 0); /*0x49f772*/
    ((gamemd::Debug *)this)->Log(); /*0x49f77e*/
  }

}
}
// 0x5B5BC0
namespace gamemd {
int Dialog::InitializeGameSettings()
{

  HWND DlgItem; // eax
  HWND v3; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax

  ((gamemd::Debug *)this)->Log(); /*0x5b5bcb*/
  DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1641); /*0x5b5be1*/
  if ( DlgItem ) /*0x5b5bf0*/
    SendMessageA(DlgItem, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[32]); /*0x5b5c00*/
  v3 = GetDlgItem(*(HWND *)this->__pad_0, 1360); /*0x5b5c0a*/
  if ( v3 ) /*0x5b5c0e*/
    SendMessageA(v3, 0x405u, 1u, g_RulesInitConfig); /*0x5b5c1e*/
  v4 = GetDlgItem(*(HWND *)this->__pad_0, 1026); /*0x5b5c28*/
  if ( v4 ) /*0x5b5c2c*/
    SendMessageA(v4, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[12]); /*0x5b5c3c*/
  v5 = GetDlgItem(*(HWND *)this->__pad_0, 1362); /*0x5b5c46*/
  if ( v5 ) /*0x5b5c4a*/
    SendMessageA(v5, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[36]); /*0x5b5c5a*/
  v6 = GetDlgItem(*(HWND *)this->__pad_0, 1321); /*0x5b5c64*/
  if ( v6 ) /*0x5b5c68*/
    SendMessageA(v6, 0x405u, 1u, 6 - *(unsigned int *)&stru_A8B250.__pad_0[24]); /*0x5b5c7f*/
  v7 = GetDlgItem(*(HWND *)this->__pad_0, 1363); /*0x5b5c89*/
  if ( v7 ) /*0x5b5c8d*/
    SendMessageA(v7, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[40]); /*0x5b5c9d*/
  v8 = GetDlgItem(*(HWND *)this->__pad_0, 1643); /*0x5b5ca7*/
  if ( v8 ) /*0x5b5cab*/
    SendMessageA(v8, 0xF1u, dword_A8B320 == 1, 0); /*0x5b5cc3*/
  v9 = GetDlgItem(*(HWND *)this->__pad_0, 1642); /*0x5b5ccd*/
  if ( v9 ) /*0x5b5cd1*/
    SendMessageA(v9, 0xF1u, stru_A8B250.__pad_0[8] == 1, 0); /*0x5b5ce9*/
  v10 = GetDlgItem(*(HWND *)this->__pad_0, 1361); /*0x5b5cf3*/
  if ( v10 ) /*0x5b5cf7*/
    SendMessageA(v10, 0xF1u, stru_A8B250.__pad_0[28] == 1, 0); /*0x5b5d0f*/
  v11 = GetDlgItem(*(HWND *)this->__pad_0, 1358); /*0x5b5d19*/
  if ( v11 ) /*0x5b5d1d*/
    SendMessageA(v11, 0xF1u, stru_A8B250.__pad_0[18] == 1, 0); /*0x5b5d35*/
  v12 = GetDlgItem(*(HWND *)this->__pad_0, 1690); /*0x5b5d3f*/
  if ( v12 ) /*0x5b5d43*/
    SendMessageA(v12, 0xF1u, stru_A8B250.__pad_0[19] == 1, 0); /*0x5b5d5b*/
  v13 = GetDlgItem(*(HWND *)this->__pad_0, 1693); /*0x5b5d65*/
  if ( v13 ) /*0x5b5d69*/
    SendMessageA(v13, 0xF1u, stru_A8B250.__pad_0[20] == 1, 0); /*0x5b5d81*/
  v14 = GetDlgItem(*(HWND *)this->__pad_0, 1356); /*0x5b5d8b*/
  if ( v14 ) /*0x5b5d8f*/
    SendMessageA(v14, 0xF1u, stru_A8B250.__pad_0[17] == 1, 0); /*0x5b5da7*/
  v15 = GetDlgItem(*(HWND *)this->__pad_0, 1357); /*0x5b5db1*/
  if ( v15 ) /*0x5b5db5*/
    SendMessageA(v15, 0xF1u, byte_A8B31F == 1, 0); /*0x5b5dcd*/
  v16 = GetDlgItem(*(HWND *)this->__pad_0, 1572); /*0x5b5dd7*/
  if ( v16 ) /*0x5b5ddb*/
    SendMessageA(v16, 0xF1u, stru_A8B250.__pad_0[16] == 1, 0); /*0x5b5df3*/
  v17 = GetDlgItem(*(HWND *)this->__pad_0, 1430); /*0x5b5dfd*/
  if ( v17 ) /*0x5b5e01*/
    SendMessageA(v17, 0xF1u, byte_A8B31D == 1, 0); /*0x5b5e19*/
  v18 = GetDlgItem(*(HWND *)this->__pad_0, 1448); /*0x5b5e23*/
  if ( v18 ) /*0x5b5e27*/
    SendMessageA(v18, 0x4B2u, 0, (LPARAM)&MEMORY[0xA8B322]); /*0x5b5e36*/
  if ( !g_UIControlState || !*(unsigned int *)g_UIControlState ) /*0x5b5e41*/
    ((Session*)(HWND)(*(Session **)this->__pad_0))->PrepareGame(); /*0x5b5e48*/
  v19 = GetDlgItem(*(HWND *)this->__pad_0, 1); /*0x5b5e51*/
  if ( v19 ) /*0x5b5e55*/
    EnableWindow(v19, 1); /*0x5b5e59*/
  return PlayVocClass(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1716), 0x2000, 1.0, 0); /*0x5b5e7c*/

}
}
// 0x5D3490
namespace gamemd {
int Dialog::ShowMessageBox(unsigned short *a2, unsigned short *aP2, unsigned short *aP3, unsigned short *a5, int a6)
{

  int v6; // ebp
  int v7; // ebx
  int v8; // edi
  uint16_t v9; // cx
  HWND Dialog; // eax
  HWND v11; // esi
  HWND DlgItem; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  TechnoTypeClass *v16; // ecx
  int v18; // [esp+0h] [ebp-18h]
  char v19; // [esp+Ch] [ebp-Ch]
  char v20; // [esp+Dh] [ebp-Bh]
  char v21; // [esp+Eh] [ebp-Ah]
  char v22; // [esp+Fh] [ebp-9h]
  LONG dwNewLong; // [esp+10h] [ebp-8h] BYREF
  int v24; // [esp+14h] [ebp-4h]

  dwNewLong = -1; /*0x5d349a*/
  v7 = 0; /*0x5d34a6*/
  v8 = (*(int (**)(int))(*(unsigned int *)&((MouseClass *)dword_887640)->q_A0)(dword_887640); /*0x5d34ab*/
  v24 = v8; /*0x5d34b3*/
  if ( !a2 || (v21 = 1, !*(unsigned short *)a2) ) /*0x5d34b9*/
    v21 = 0; /*0x5d34c3*/
  if ( !a2 || (v22 = 1, !*a2) ) /*0x5d34d0*/
    v22 = 0; /*0x5d34db*/
  if ( !aP2 || (v19 = 1, !*aP2) ) /*0x5d34e8*/
    v19 = 0; /*0x5d34f3*/
  if ( !aP3 || (v20 = 1, !*aP3) ) /*0x5d3500*/
    v20 = 0; /*0x5d350b*/
  Screen::Capture(1, 0, 0, v6); /*0x5d3514*/
  v9 = 206; /*0x5d351d*/
  if ( v20 ) /*0x5d3524*/
  {
    v9 = 289; /*0x5d3526*/
  }
  else if ( v19 ) /*0x5d3533*/
  {
    v9 = 288; /*0x5d3535*/
  }
  Dialog = (HWND)CreateDialog(v9, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))sub_5D36A0, 0); /*0x5d3541*/
  v11 = Dialog; /*0x5d3546*/
  if ( Dialog ) /*0x5d354a*/
  {
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x5d3559*/
    if ( v21 ) /*0x5d3571*/
    {
      DlgItem = GetDlgItem(v11, 1456); /*0x5d3579*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)a2); /*0x5d3588*/
    }
    if ( v22 ) /*0x5d3590*/
    {
      v13 = GetDlgItem(v11, 1454); /*0x5d3598*/
      SendMessageA(v13, 0x4B2u, 0, (LPARAM)a2); /*0x5d35a7*/
      v7 = 1; /*0x5d35a9*/
    }
    if ( v19 ) /*0x5d35b4*/
    {
      v14 = GetDlgItem(v11, 2); /*0x5d35b9*/
      SendMessageA(v14, 0x4B2u, 0, (LPARAM)aP2); /*0x5d35c8*/
      v7 = 2; /*0x5d35ca*/
    }
    if ( v20 ) /*0x5d35d5*/
    {
      v15 = GetDlgItem(v11, 1455); /*0x5d35dd*/
      SendMessageA(v15, 0x4B2u, 0, (LPARAM)aP3); /*0x5d35ec*/
      v7 = 3; /*0x5d35ee*/
    }
    ((gamemd::Dialog *)(v11))->Show(); /*0x5d35f5*/
    if ( v7 <= 0 ) /*0x5d35fd*/
    {
      dwNewLong = 0; /*0x5d3653*/
    }
    else
    {
      while ( (*(int (**)(int))(*(unsigned int *)&((MouseClass *)dword_887640)->q_A0)(dword_887640) ) /*0x5d3607*/
        (*(void (**)(int))(*(unsigned int *)&((MouseClass *)dword_887640)->q_40)(dword_887640); /*0x5d3616*/
      while ( dwNewLong < 0 ) /*0x5d362e*/
      {
        if ( (uint8_t)Dialog::PumpMessages() ) /*0x5d3630*/
          break; /*0x5d3637*/
        if ( !byte_A8E9A0 ) /*0x5d3640*/
        {
          LOBYTE(v16) = (gamemd::Process)(0); /*0x5d3642*/
          Process(v16, v18); /*0x5d3644*/
        }
      }
    }
    Dialog::Destroy(v11); /*0x5d365d*/
    v8 = v24; /*0x5d3662*/
  }
  while ( v8 < (*(int (**)(int))(*(unsigned int *)&((MouseClass *)dword_887640)->q_A0)(dword_887640) ) /*0x5d3673*/
    (*(void (**)(int))(*(unsigned int *)&((MouseClass *)dword_887640)->q_30)(dword_887640); /*0x5d367d*/
  return dwNewLong; /*0x5d3693*/

}
}
// 0x5D5DC0
namespace gamemd {
int Dialog::GetModeNeg2()
{

  return this->u32_FC != 0 ? 0 : -2;

}
}
// 0x5D5DD0
namespace gamemd {
int Dialog::GetMode3()
{

  return this->q03C != 0 ? 3 : -2;

}
}
// 0x5EE350
namespace gamemd {
int Dialog::RefreshDialogsGame()
{

  ObjectClass *v1; // eax
  ObjectClass *v2; // eax
  int result; // eax

  if ( this ) /*0x5ee352*/
    UpdateObserveButtonWOL((ObjectClass *)this); /*0x5ee354*/
  v1 = (ObjectClass *)((Dialog*)((Dialog *)0x116))->FindByHandle(); /*0x5ee35e*/
  if ( v1 ) /*0x5ee365*/
    UpdateObserveButtonWOL(v1); /*0x5ee369*/
  v2 = (ObjectClass *)((Dialog*)((Dialog *)0x113))->FindByHandle(); /*0x5ee373*/
  if ( v2 ) /*0x5ee37a*/
    UpdateObserveButtonWOL(v2); /*0x5ee37e*/
  result = ((Dialog*)((Dialog *)0xBB))->FindByHandle(); /*0x5ee388*/
  if ( result ) /*0x5ee38f*/
    UpdateObserveButtonWOL((ObjectClass *)result); /*0x5ee393*/
  return result; /*0x5ee398*/

}
}
// 0x5F2950
namespace gamemd {
int Dialog::RunModemDialing(int a2, int a3, char a4)
{

  char v5; // bl
  int v6; // esi
  wchar_t *StringCSF; // eax
  LPARAM v8; // ebp
  wchar_t *v9; // eax
  void * MessageBox;
  int v11; // ebp
  TechnoTypeClass *v12; // ecx
  HWND v13; // ecx
  int v15; // [esp+1Ch] [ebp-108h]
  int16_t Buffer; // [esp+2Ch] [ebp-F8h] BYREF
  char v17; // [esp+2Eh] [ebp-F6h]
  void * hWnd;
  char Source[240]; // [esp+34h] [ebp-F0h] BYREF

  v5 = (char)((HWND)(1));
  v6 = (int)((HWND)(3));
  ((gamemd::Debug *)this)->Log(); /*0x5f2968*/
  if ( a4 == 1 ) /*0x5f2979*/
    StringCSF = GetStringCSF((wchar_t *)aTxtModemConner, 0,(const char *)(g_Str_File_NullMgr_CPP), 1409); /*0x5f298c*/
  else
    StringCSF = GetStringCSF((wchar_t *)(aTxtDialing), 0,(const char *)(g_Str_File_NullMgr_CPP), 1411); /*0x5f299f*/
  v8 = (LPARAM)StringCSF; /*0x5f29ba*/
  g_NetworkTestFlag = 0; /*0x5f29bc*/
  v9 = (wchar_t *)(GetStringCSF((wchar_t *)(g_Str_TXT_CANCEL), 0,(const char *)(g_Str_File_NullMgr_CPP), 1415)); /*0x5f29c3*/
  MessageBox = CreateMessageBox(v8, (LPARAM)v9, (LONG)&g_NetworkTestFlag); /*0x5f29cc*/
  hWnd = MessageBox; /*0x5f29d3*/
  if ( !MessageBox ) /*0x5f29d7*/
    return v6; /*0x5f29d7*/
  ((Dialog *)((Dialog *)MessageBox))->Show(); /*0x5f29df*/
  ((gamemd::Debug *)this)->Log(); /*0x5f29e9*/
  (*(void (**)(HWND, int))(*(unsigned int *)g_ClipboardBuffer + 8))(g_ClipboardBuffer, a3); /*0x5f2a01*/
  ((gamemd::Debug *)this)->Log(); /*0x5f2a09*/
  (*(void (**)(HWND, int, char *, int, int))(*(unsigned int *)g_ClipboardBuffer + 20))( /*0x5f2a24*/
    g_ClipboardBuffer,
    60,
    Source,
    81,
    -1);
  ((gamemd::Debug *)this)->Log(); /*0x5f2a2c*/
  (*(void (**)(HWND, int))(*(unsigned int *)g_ClipboardBuffer + 24))(g_ClipboardBuffer, a2); /*0x5f2a44*/
  (*(void (*  ((HWND)(*(void (**)(HWND, int (*)()))(*(unsigned int *)g_ClipboardBuffer + 36)))(g_ClipboardBuffer, PumpEventLoop); 
  g_NetworkTestFlag = 0; /*0x5f2a57*/
  v11 = *(unsigned int *)&this->__pad_10[20]; /*0x5f2a5e*/
  ((gamemd::Debug *)this)->Log(); /*0x5f2a66*/
  while ( 1 ) /*0x5f2a6e*/
  {
    if ( (uint8_t)Dialog::PumpMessages() == 1 || g_NetworkTestFlag ) /*0x5f2a82*/
    {
      v13 = (HWND)(g_ClipboardBuffer);
      v6 = 6; /*0x5f2c78*/
      if ( g_ClipboardBuffer ) /*0x5f2c7f*/
      {
LABEL_34:
        v17 = 0; /*0x5f2c81*/
        Buffer = word_8327A0; /*0x5f2c8d*/
        ((WinModemClass *)((int *)v13))->WriteSerial(&Buffer,(gamemd::WinModemClass *)(2u)); /*0x5f2c99*/
      }
LABEL_35:
      ((gamemd::Debug *)this)->Log(); /*0x5f2c9e*/
      goto LABEL_36; /*0x5f2ca3*/
    }
    LOBYTE(v12) = (gamemd::Process)(0); /*0x5f2a88*/
    Process(v12, v15); /*0x5f2a8a*/
    memset(Source, 0, sizeof(Source)); /*0x5f2a9c*/
    v11 = (*(int (**)(HWND, int, char *, int, int))(*(unsigned int *)g_ClipboardBuffer + 20))( /*0x5f2ab1*/
            g_ClipboardBuffer,
            v11,
            Source,
            81,
            15);
    if ( v11 == -1000 ) /*0x5f2ab9*/
    {
      v13 = (HWND)(g_ClipboardBuffer);
      v6 = 6; /*0x5f2bec*/
      if ( g_ClipboardBuffer ) /*0x5f2bf3*/
        goto LABEL_34; /*0x5f2bf3*/
      goto LABEL_35; /*0x5f2bf3*/
    }
    _strupr(Source); /*0x5f2ac4*/
    if ( strlen(Source) ) /*0x5f2acd*/
      ((gamemd::Debug *)this)->Log(); /*0x5f2ae6*/
    if ( strstr(Source, off_8327D8) ) /*0x5f2af8*/
    {
      memset((void *)(byte_AC1288), 0, 0x50u); /*0x5f2b12*/
      strncpy((char *)(byte_AC1288), Source, 0x4Fu); /*0x5f2b1e*/
      v6 = 0; /*0x5f2b27*/
      ((gamemd::Debug *)this)->Log(); /*0x5f2b2f*/
    }
    else
    {
      if ( !strncmp(Source, aBusy, 4u) ) /*0x5f2b48*/
      {
        v6 = 2; /*0x5f2b54*/
      }
      else if ( !strncmp(Source, aNoC, 4u) ) /*0x5f2b67*/
      {
        v6 = 1; /*0x5f2b77*/
      }
      else if ( !strncmp(Source, aNoD, 4u) ) /*0x5f2b8b*/
      {
        v6 = 4; /*0x5f2b9b*/
      }
      else
      {
        if ( strncmp(Source, aErro, 4u) ) /*0x5f2baf*/
          goto LABEL_23; /*0x5f2bb9*/
        v6 = 3; /*0x5f2bbb*/
      }
      ((gamemd::Debug *)this)->Log(); /*0x5f2bca*/
    }
    v5 = 0; /*0x5f2bd2*/
LABEL_23:
    if ( v11 <= 0 ) /*0x5f2bd6*/
      break; /*0x5f2bd6*/
    if ( v5 != 1 ) /*0x5f2bdb*/
      goto LABEL_36; /*0x5f2bdb*/
  }
  ((gamemd::Debug *)this)->Log(); /*0x5f2c1a*/
  if ( strlen(Source) ) /*0x5f2c2b*/
    ((gamemd::Debug *)this)->Log(); /*0x5f2c3c*/
  if ( g_ClipboardBuffer ) /*0x5f2c4c*/
  {
    Buffer = word_8327A0; /*0x5f2c5c*/
    v17 = 0; /*0x5f2c61*/
    ((WinModemClass *)((int *)g_ClipboardBuffer))->WriteSerial(&Buffer,(gamemd::WinModemClass *)(2u)); /*0x5f2c66*/
  }
  v6 = 5; /*0x5f2c6b*/
LABEL_36:
  (*(void (**)(HWND, unsigned int))(*(unsigned int *)g_ClipboardBuffer + 36))(g_ClipboardBuffer, 0); /*0x5f2cab*/
  g_NetworkTestFlag = 0; /*0x5f2cbc*/
  Dialog::Destroy((Dialog *)hWnd); /*0x5f2cc3*/
  return v6; /*0x5f2cca*/

}
}
// 0x606800
namespace gamemd {
AbstractClass * * Dialog::MapControlToAction(HWND hWnd, LPARAM, void * a2)
{

  HWND v2; // ebp
  int v3; // eax
  void *v4; // esi
  int DlgCtrlID; // edi
  bool v6; // bl
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  HWND Parent; // [esp+10h] [ebp-4h]

  v2 = hWnd; /*0x606803*/
  Parent = GetParent(hWnd); /*0x606810*/
  hWnd = Parent; /*0x606814*/
  if ( !dword_AC1B04 ) /*0x60681f*/
    goto LABEL_5; /*0x60681f*/
  v3 = *((unsigned int *)dword_AC1B00 + HashTable::ComputeHash((unsigned int *)((int)&dword_AC1B00), (int)&hWnd)); /*0x606836*/
  if ( !v3 ) /*0x60683b*/
    goto LABEL_5; /*0x60683b*/
  while ( *(HWND *)v3 != hWnd ) /*0x606843*/
  {
    v3 = *(unsigned int *)(v3 + 516); /*0x606849*/
    if ( !v3 ) /*0x606851*/
      goto LABEL_5; /*0x606851*/
  }
  v8 = v3 + 4; /*0x607089*/
  if ( v8 ) /*0x60708e*/
    v4 = *(void **)(v8 + 108); /*0x607094*/
  else
LABEL_5:
    v4 = 0; /*0x606853*/
  DlgCtrlID = GetDlgCtrlID(v2); /*0x60685c*/
  v6 = a2 != 0; /*0x606864*/
  if ( (v4 == (void *)268 /*0x60701e*/
     || v4 == (void *)148
     || v4 == (void *)163
     || v4 == (void *)115
     || v4 == (void *)216
     || v4 == (void *)3003
     || v4 == (void *)245
     || v4 == (void *)261
     || v4 == (void *)226
     || v4 == (void *)213
     || v4 == (void *)693
     || v4 == (void *)183
     || v4 == (void *)692
     || v4 == (void *)3015
     || v4 == (void *)257
     || v4 == (void *)297
     || v4 == (void *)3014
     || v4 == (void *)215
     || v4 == (void *)264
     || v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)187
     || v4 == (void *)181
     || v4 == (void *)3002
     || v4 == (void *)255
     || v4 == (void *)107
     || v4 == (void *)256
     || v4 == (void *)258
     || v4 == (void *)184
     || v4 == (void *)214
     || v4 == (void *)259
     || (uint8_t)Dialog::IsSpecialTemplate(v4))
    && DlgCtrlID == 1684
    || ((Event *)(v4))->IsValidActionType() && DlgCtrlID == 1685
    || (v4 == (void *)148
     || v4 == (void *)216
     || v4 == (void *)245
     || v4 == (void *)226
     || v4 == (void *)213
     || v4 == (void *)257
     || v4 == (void *)297
     || v4 == (void *)215
     || v4 == (void *)187
     || v4 == (void *)256
     || v4 == (void *)214
     || v4 == (void *)293
     || v4 == (void *)290
     || v4 == (void *)274
     || v4 == (void *)231
     || v4 == (void *)278
     || v4 == (void *)285
     || v4 == (void *)284
     || v4 == (void *)254
     || v4 == (void *)271
     || v4 == (void *)279
     || v4 == (void *)276
     || v4 == (void *)230
     || v4 == (void *)243
     || v4 == (void *)244
     || v4 == (void *)700
     || v4 == (void *)270
     || v4 == (void *)264
     || v4 == (void *)3014
     || v4 == (void *)3015)
    && DlgCtrlID == 1820
    || (v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014
     || v4 == (void *)261
     || v4 == (void *)107
     || v4 == (void *)275)
    && DlgCtrlID == 1128
    || (v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014)
    && (DlgCtrlID == 1772 || DlgCtrlID == 1448)
    || (v4 == (void *)259 || v4 == (void *)3015)
    && (DlgCtrlID == 1779
     || DlgCtrlID == 1780
     || DlgCtrlID == 1835
     || DlgCtrlID == 1775
     || DlgCtrlID == 1777
     || DlgCtrlID == 1776
     || DlgCtrlID == 1778
     || DlgCtrlID == 1695
     || DlgCtrlID == 1782
     || DlgCtrlID == 1843
     || DlgCtrlID == 1845
     || DlgCtrlID == 1842
     || DlgCtrlID == 1002
     || DlgCtrlID == 1846
     || DlgCtrlID == 1847
     || DlgCtrlID == 1852
     || DlgCtrlID == 1853
     || DlgCtrlID == 1854
     || DlgCtrlID == 1855
     || DlgCtrlID == 1856
     || DlgCtrlID == 1041
     || DlgCtrlID == 1042
     || DlgCtrlID == 1049
     || DlgCtrlID == 1050
     || DlgCtrlID == 1699
     || DlgCtrlID == 1700
     || DlgCtrlID == 1701
     || DlgCtrlID == 1703
     || DlgCtrlID == 1702
     || DlgCtrlID == 1704
     || DlgCtrlID == 1850
     || DlgCtrlID == 1849
     || DlgCtrlID == 1851
     || DlgCtrlID == 1848)
    || (v4 == (void *)264 || v4 == (void *)3014)
    && (DlgCtrlID == 1746
     || DlgCtrlID == 1002
     || DlgCtrlID == 1693
     || DlgCtrlID == 1695
     || DlgCtrlID == 1694
     || DlgCtrlID == 1696
     || DlgCtrlID == 1931
     || DlgCtrlID == 1480
     || DlgCtrlID == 1041
     || DlgCtrlID == 1042
     || DlgCtrlID == 1043
     || DlgCtrlID == 1044
     || DlgCtrlID == 1045
     || DlgCtrlID == 1046
     || DlgCtrlID == 1047
     || DlgCtrlID == 1048
     || DlgCtrlID == 1049
     || DlgCtrlID == 1050
     || DlgCtrlID == 1051
     || DlgCtrlID == 1052
     || DlgCtrlID == 1053
     || DlgCtrlID == 1054
     || DlgCtrlID == 1055
     || DlgCtrlID == 1056
     || DlgCtrlID == 1699
     || DlgCtrlID == 1700
     || DlgCtrlID == 1705
     || DlgCtrlID == 1708
     || DlgCtrlID == 1711
     || DlgCtrlID == 1714
     || DlgCtrlID == 1717
     || DlgCtrlID == 1720
     || DlgCtrlID == 1701
     || DlgCtrlID == 1703
     || DlgCtrlID == 1706
     || DlgCtrlID == 1709
     || DlgCtrlID == 1712
     || DlgCtrlID == 1715
     || DlgCtrlID == 1718
     || DlgCtrlID == 1721
     || DlgCtrlID == 1702
     || DlgCtrlID == 1704
     || DlgCtrlID == 1707
     || DlgCtrlID == 1710
     || DlgCtrlID == 1713
     || DlgCtrlID == 1716
     || DlgCtrlID == 1719
     || DlgCtrlID == 1722
     || DlgCtrlID == 1802
     || DlgCtrlID == 1803
     || DlgCtrlID == 1804
     || DlgCtrlID == 1805
     || DlgCtrlID == 1806
     || DlgCtrlID == 1807
     || DlgCtrlID == 1808
     || DlgCtrlID == 1809
     || DlgCtrlID == 1843
     || DlgCtrlID == 1842
     || DlgCtrlID == 1819
     || DlgCtrlID == 1845) )
  {
    goto LABEL_208; /*0x60701e*/
  }
  if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB ) /*0x607034*/
  {
    hWnd = v2; /*0x60703f*/
    if ( dword_AC1B04 ) /*0x607045*/
    {
      v7 = *((unsigned int *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x607066*/
      if ( v7 ) /*0x60706b*/
      {
        while ( *(HWND *)v7 != hWnd ) /*0x607073*/
        {
          v7 = *(unsigned int *)(v7 + 516); /*0x607075*/
          if ( !v7 ) /*0x60707d*/
            goto LABEL_199; /*0x60707d*/
        }
        v9 = v7 + 4; /*0x6070a0*/
        if ( v9 ) /*0x6070a5*/
        {
          if ( !*(unsigned int *)(v9 + 104) && IsDialogControlVisible((int)Parent, v2) ) /*0x6070b4*/
            goto LABEL_208; /*0x6070bb*/
        }
      }
    }
  }
LABEL_199:
  if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB ) /*0x6070cb*/
  {
    hWnd = v2; /*0x6070d6*/
    if ( dword_AC1B04 ) /*0x6070dc*/
    {
      v10 = *((unsigned int *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x607101*/
      if ( v10 ) /*0x607106*/
      {
        while ( *(HWND *)v10 != hWnd ) /*0x607112*/
        {
          v10 = *(unsigned int *)(v10 + 516); /*0x607114*/
          if ( !v10 ) /*0x60711c*/
            return (gamemd::AbstractClass **)(1); /*0x607128*/
        }
        v12 = v10 + 4; /*0x607133*/
        if ( v12 ) /*0x607138*/
        {
          if ( !*(unsigned int *)(v12 + 104) && GetDialogDefaultButton((int)Parent, v2) ) /*0x607147*/
          {
LABEL_208:
            hWnd = v2; /*0x607150*/
            if ( dword_AC1B04 ) /*0x60715b*/
            {
              v13 = *((unsigned int *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x60717c*/
              if ( v13 ) /*0x607181*/
              {
                while ( *(HWND *)v13 != hWnd ) /*0x607189*/
                {
                  v13 = *(unsigned int *)(v13 + 516); /*0x60718b*/
                  if ( !v13 ) /*0x607193*/
                    return (gamemd::AbstractClass **)(1); /*0x60719f*/
                }
                v14 = v13 + 4; /*0x6071a6*/
                if ( v14 ) /*0x6071ab*/
                  *(unsigned char *)(v14 + 188) = v6; /*0x6071ad*/
              }
            }
          }
        }
      }
    }
  }
  return (gamemd::AbstractClass **)(1); /*0x60711e*/

}
}
// 0x607FD0
namespace gamemd {
int Dialog::StopBink()
{

  int result; // eax
  int v3; // esi
  HWND DlgItem; // eax
  Dialog *v5; // [esp+8h] [ebp-4h] BYREF

  result = *(unsigned int *)&g_DialogPool.__pad_208[60]; /*0x607fd1*/
  v5 = this; /*0x607fdc*/
  if ( *(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x607fe0*/
  {
    result = *(unsigned int *)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x608005*/
                       + 4
                       * ((*(int (**)(Dialog **))&g_DialogPool.__pad_208[80])(&v5)
                        & ((1 << g_DialogPool.__pad_208[68]) - 1)));
    if ( result ) /*0x60800a*/
    {
      while ( *(Dialog **)result != v5 ) /*0x608012*/
      {
        result = *(unsigned int *)(result + 516); /*0x608014*/
        if ( !result ) /*0x60801c*/
          return result; /*0x60801c*/
      }
      v3 = result + 4; /*0x608026*/
      if ( result != -4 ) /*0x60802b*/
      {
        LOBYTE(result) = *(unsigned char *)(result + 194); /*0x60802d*/
        if ( (unsigned char)result ) /*0x608035*/
        {
          DlgItem = GetDlgItem((HWND)this, 1818); /*0x60803d*/
          if ( DlgItem ) /*0x608045*/
            SendMessageA(DlgItem, 0x4E2u, 0, 0); /*0x608051*/
          result = RenderGadgetClassAnimation((HWND)this, 0); /*0x60805b*/
          *(unsigned char *)(v3 + 190) = 0; /*0x608060*/
        }
      }
    }
  }
  return result; /*0x60801e*/

}
}
// 0x608070
namespace gamemd {
AbstractClass * * Dialog::IdleProcess(ObjectClass *a2)
{

  HWND v2; // ecx
  HWND v3; // ebp
  unsigned int *v4; // eax
  unsigned int *v6; // eax
  bool v7; // bl
  bool v8; // al
  int v9; // eax
  int v10; // edi
  BOOL v11; // esi
  ObjectClass *v12; // [esp-4h] [ebp-1Ch]
  HWND v13; // [esp+Ch] [ebp-Ch] BYREF
  DWORD TickCount; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  v3 = v2; /*0x608075*/
  if ( (uint8_t)((SessionClass *)((SessionClass *)&dword_A8B238))->GetGameSpeed() ) /*0x60807d*/
    return 0; /*0x60807d*/
  v13 = v3; /*0x60808b*/
  if ( !*(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x608091*/
    return 0; /*0x608091*/
  v4 = *(unsigned int **)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x6080b2*/
                  + 4
                  * ((*(int (**)(HWND *))&g_DialogPool.__pad_208[80])(&v13)
                   & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v4 ) /*0x6080b7*/
    return 0; /*0x6080b7*/
  while ( (HWND)*v4 != v13 ) /*0x6080bf*/
  {
    v4 = (unsigned int *)v4[129]; /*0x6080c1*/
    if ( !v4 ) /*0x6080c9*/
      return 0; /*0x6080c9*/
  }
  v6 = v4 + 1; /*0x6080d8*/
  if ( !v6 ) /*0x6080dd*/
    return 0; /*0x6080dd*/
  v7 = *((unsigned char *)v6 + 189) && v6[44] == 1; /*0x6080e7*/
  v8 = IsWindowVisible(v3); /*0x608101*/
  if ( !v7 ) /*0x608106*/
    return 0; /*0x608106*/
  if ( !v8 ) /*0x60810a*/
    return 0; /*0x60810a*/
  PlayVocClass(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 412), 0x2000, 1.0, 0); /*0x608124*/
  LOBYTE(v15) = IsWindowEnabled(v3); /*0x608138*/
  EnableWindow(v3, 0); /*0x60813c*/
  EnumChildWindows(v3, Dialog::MapControlToAction, 1); /*0x60814a*/
  v13 = v3; /*0x608157*/
  if ( !*(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x60815b*/
    return 0; /*0x60815b*/
  v9 = *(unsigned int *)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x608180*/
                 + 4
                 * ((*(int (**)(HWND *))&g_DialogPool.__pad_208[80])(&v13)
                  & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v9 ) /*0x608185*/
    return 0; /*0x608185*/
  while ( *(HWND *)v9 != v13 ) /*0x608191*/
  {
    v9 = *(unsigned int *)(v9 + 516); /*0x608193*/
    if ( !v9 ) /*0x60819b*/
      return 0; /*0x6081a5*/
  }
  v10 = v9 + 4; /*0x6081ae*/
  if ( v9 == -4 ) /*0x6081b3*/
    return 0; /*0x6080d3*/
  v12 = a2; /*0x6081b9*/
  *(unsigned char *)(v9 + 194) = 1; /*0x6081bf*/
  InvalidateRect(v3, 0, 0); /*0x6081c6*/
  TickCount = GetTickCount(); /*0x6081d4*/
  while ( 1 ) /*0x6081d8*/
  {
    MessageLoop(); /*0x6081d8*/
    if ( *(unsigned int *)&dword_A8B238 ) /*0x6081e4*/
    {
      if ( *(unsigned int *)&dword_A8B238 != 5 && !BYTE2(stru_A8D600.Network_field_0xC) && !dword_A8DAB4 ) /*0x6081fb*/
        break; /*0x6081fb*/
    }
    Event::Dispatch(); /*0x608211*/
LABEL_29:
    v11 = *(unsigned char *)(v10 + 190) == 0; /*0x608216*/
    if ( (int)(GetTickCount() - TickCount) > 5000 || v11 ) /*0x608234*/
      goto LABEL_31; /*0x608234*/
  }
  if ( VtableStub::sub_55CBF0() || !(uint8_t)GameFrameLoop(v12) ) /*0x608206*/
    goto LABEL_29; /*0x60820d*/
LABEL_31:
  EnumChildWindows(v3, Dialog::MapControlToAction, 0); /*0x608236*/
  EnableWindow(v3, (uint8_t)v15); /*0x608250*/
  return (gamemd::AbstractClass **)(1); /*0x6080cb*/

}
}
// 0x60A330
namespace gamemd {
int Dialog::HandleTabKey(HWND hWnd, LPARAM)
{

  HWND *v3; // eax
  HWND Parent; // ebp
  HWND *v5; // eax
  unsigned int *v6; // eax
  HWND *v8; // eax
  unsigned int *v9; // eax
  HWND v10; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h] BYREF
  HWND v12; // [esp+14h] [ebp-4h] BYREF
  HWND hWnda; // [esp+1Ch] [ebp+4h]

  v10 = hWnd; /*0x60a341*/
  hWnda = 0; /*0x60a345*/
  if ( dword_AC1B04 ) /*0x60a34d*/
  {
    v3 = (HWND *)*((unsigned int *)dword_AC1B00 + (dword_AC1B18(&v10) & ((1 << dword_AC1B0C) - 1))); /*0x60a36e*/
    if ( v3 ) /*0x60a373*/
    {
      while ( *v3 != v10 ) /*0x60a37b*/
      {
        v3 = (HWND *)v3[129]; /*0x60a37d*/
        if ( !v3 ) /*0x60a385*/
          goto LABEL_7; /*0x60a385*/
      }
      hWnda = (HWND)(v3 + 1); /*0x60a390*/
    }
  }
LABEL_7:
  if ( !hWnda ) /*0x60a39a*/
    return 1; /*0x60a39a*/
  Parent = GetParent(hWnd); /*0x60a3ac*/
  if ( !((SessionClass *)(dword_A8B238))->GetGameSpeed() ) /*0x60a3ae*/
  {
    if ( (GetWindowLongA(hWnd, -16) & 0xB) == 0xB ) /*0x60a3cb*/
    {
      v10 = hWnd; /*0x60a3d2*/
      if ( dword_AC1B04 ) /*0x60a3d8*/
      {
        v5 = (HWND *)*((unsigned int *)dword_AC1B00 + HashTable::ComputeHash((unsigned int *)((int)&dword_AC1B00), (int)&v10)); /*0x60a3ef*/
        if ( v5 ) /*0x60a3f4*/
        {
          while ( *v5 != v10 ) /*0x60a3fc*/
          {
            v5 = (HWND *)v5[129]; /*0x60a3fe*/
            if ( !v5 ) /*0x60a406*/
              goto LABEL_18; /*0x60a406*/
          }
          v6 = (unsigned int *)(v5 + 1); /*0x60a40e*/
          if ( v6 ) /*0x60a413*/
          {
            if ( !v6[26] && IsDialogControlVisible((int)Parent, hWnd) ) /*0x60a420*/
              goto LABEL_22; /*0x60a427*/
          }
        }
      }
    }
LABEL_18:
    if ( (GetWindowLongA(hWnd, -16) & 0xB) == 0xB ) /*0x60a433*/
    {
      v12 = hWnd; /*0x60a444*/
      v11 = 0; /*0x60a448*/
      HashTable::Get(&dword_AC1B00, &v12, &v11); /*0x60a450*/
      if ( v11 ) /*0x60a45b*/
      {
        if ( !*(unsigned int *)(v11 + 104) && GetDialogDefaultButton((int)Parent, hWnd) ) /*0x60a468*/
        {
LABEL_22:
          *((unsigned int *)hWnda + 44) = 1; /*0x60a471*/
          return 1; /*0x60a486*/
        }
      }
    }
  }
  if ( !((SessionClass *)(dword_A8B238))->GetGameSpeed() ) /*0x60a48e*/
    goto LABEL_33; /*0x60a48e*/
  if ( (GetWindowLongA(hWnd, -16) & 0xB) != 0xB /*0x60a4da*/
    || (v12 = hWnd, v11 = 0, HashTable::Get(&dword_AC1B00, &v12, &v11), !v11)
    || *(unsigned int *)(v11 + 104)
    || !IsDialogControlVisible((int)Parent, hWnd) )
  {
    if ( (GetWindowLongA(hWnd, -16) & 0xB) != 0xB ) /*0x60a4f1*/
      goto LABEL_33; /*0x60a4f1*/
    v10 = hWnd; /*0x60a4f8*/
    if ( !dword_AC1B04 ) /*0x60a4fe*/
      goto LABEL_33; /*0x60a4fe*/
    v8 = (HWND *)*((unsigned int *)dword_AC1B00 + HashTable::ComputeHash((unsigned int *)((int)&dword_AC1B00), (int)&v10)); /*0x60a515*/
    if ( !v8 ) /*0x60a51a*/
      goto LABEL_33; /*0x60a51a*/
    while ( *v8 != v10 ) /*0x60a522*/
    {
      v8 = (HWND *)v8[129]; /*0x60a524*/
      if ( !v8 ) /*0x60a52c*/
        goto LABEL_33; /*0x60a52c*/
    }
    v9 = (unsigned int *)(v8 + 1); /*0x60a55b*/
    if ( !v9 || v9[26] || !GetDialogDefaultButton((int)Parent, hWnd) ) /*0x60a56d*/
    {
LABEL_33:
      if ( (uint8_t)FilterDialogButtonAction(Parent, hWnd) ) /*0x60a532*/
        *((unsigned int *)hWnda + 44) = 3; /*0x60a53f*/
      return 1; /*0x60a554*/
    }
  }
  *((unsigned int *)hWnda + 44) = 2; /*0x60a581*/
  return 1; /*0x60a47a*/

}
}
// 0x60A5B0
namespace gamemd {
AbstractClass * * Dialog::DispatchEvent(HWND hWnd, LPARAM)
{

  HWND v2; // ebp
  HWND Parent; // edi
  unsigned int *v4; // esi
  unsigned int *v5; // eax
  int v6; // edi
  int v7; // eax
  int v9; // eax
  HWND *i; // eax
  HWND *j; // eax
  int v12; // edi
  int DlgCtrlID; // eax
  int v14; // edi
  signed int v15; // eax
  int v16; // eax
  char v17; // [esp+13h] [ebp-11h] BYREF
  HWND v18; // [esp+14h] [ebp-10h]
  HWND v19; // [esp+18h] [ebp-Ch] BYREF
  HWND v20; // [esp+1Ch] [ebp-8h] BYREF
  HWND v21; // [esp+20h] [ebp-4h] BYREF

  v2 = hWnd; /*0x60a5b5*/
  Parent = GetParent(hWnd); /*0x60a5c2*/
  v4 = 0; /*0x60a5c9*/
  v18 = Parent; /*0x60a5cb*/
  v19 = v2; /*0x60a5d1*/
  if ( dword_AC1B04 ) /*0x60a5d5*/
  {
    v5 = (unsigned int *)*((unsigned int *)dword_AC1B00 + HashTable::ComputeHash((unsigned int *)((int)&dword_AC1B00), (int)&v19)); /*0x60a5ec*/
    if ( v5 ) /*0x60a5f1*/
    {
      while ( (HWND)*v5 != v19 ) /*0x60a5f9*/
      {
        v5 = (unsigned int *)v5[129]; /*0x60a5fb*/
        if ( !v5 ) /*0x60a603*/
          goto LABEL_7; /*0x60a603*/
      }
      v4 = v5 + 1; /*0x60a60b*/
    }
  }
LABEL_7:
  if ( !v4 ) /*0x60a610*/
    return (gamemd::AbstractClass **)(1); /*0x60aa44*/
  if ( !(uint8_t)IsValidActionDialog(Parent, v2) ) /*0x60a621*/
  {
    LOBYTE(hWnd) = 0; /*0x60a6e7*/
    if ( (uint8_t)UI_Helper_602B90(Parent, v2) ) /*0x60a6ec*/
    {
      v9 = v4[5]; /*0x60a6f5*/
      v4[28] = 2; /*0x60a6f8*/
      if ( !v9 ) /*0x60a701*/
      {
        v20 = Parent; /*0x60a70c*/
        if ( dword_AC1B04 ) /*0x60a712*/
        {
          for ( i = (HWND *)*((unsigned int *)dword_AC1B00 + HashTable::ComputeHash((unsigned int *)((int)&dword_AC1B00), (int)&v20)); /*0x60a72e*/
                i;
                i = (HWND *)i[129] )
          {
            if ( *i == v20 ) /*0x60a736*/
              break; /*0x60a736*/
          }
        }
        GetDlgCtrlID(v2); /*0x60a743*/
        v4[5] = 0; /*0x60a749*/
      }
LABEL_77:
      v4[38] = 0; /*0x60a9c8*/
      v4[39] = GetTickCount(); /*0x60a9dc*/
      v4[40] = UI_Helper_603240(Parent, v2); /*0x60a9e7*/
      goto LABEL_78; /*0x60a9e7*/
    }
    v20 = Parent; /*0x60a75a*/
    if ( dword_AC1B04 ) /*0x60a760*/
    {
      for ( j = (HWND *)*((unsigned int *)dword_AC1B00 + (dword_AC1B18(&v20) & ((1 << dword_AC1B0C) - 1))); j; j = (HWND *)j[129] ) /*0x60a786*/
      {
        if ( *j == v20 ) /*0x60a78e*/
          break; /*0x60a78e*/
      }
    }
    GetDlgCtrlID(v2); /*0x60a7a1*/
    v21 = Parent; /*0x60a7ab*/
    v12 = 0; /*0x60a7af*/
    v20 = 0; /*0x60a7b8*/
    HashTable::Get(&dword_AC1B00, &v21, &v20); /*0x60a7bc*/
    if ( v20 ) /*0x60a7c7*/
      v12 = *((unsigned int *)v20 + 27); /*0x60a7c9*/
    DlgCtrlID = GetDlgCtrlID(v2); /*0x60a7cd*/
    if ( v12 != 148 /*0x60a8fc*/
      && v12 != 216
      && v12 != 245
      && v12 != 226
      && v12 != 213
      && v12 != 257
      && v12 != 297
      && v12 != 215
      && v12 != 187
      && v12 != 256
      && v12 != 214
      && v12 != 293
      && v12 != 290
      && v12 != 274
      && v12 != 231
      && v12 != 278
      && v12 != 285
      && v12 != 284
      && v12 != 254
      && v12 != 271
      && v12 != 279
      && v12 != 276
      && v12 != 230
      && v12 != 243
      && v12 != 244
      && v12 != 700
      && v12 != 270
      && v12 != 264
      && v12 != 3014
      && v12 != 3015
      || DlgCtrlID != 1820 )
    {
      switch ( v12 ) /*0x60a908*/
      {
        case 148: /*0x60a908*/
          if ( DlgCtrlID != 1770 && DlgCtrlID != 1772 ) /*0x60a916*/
          {
            if ( DlgCtrlID != 1771 ) /*0x60a91d*/
              goto LABEL_78; /*0x60a91d*/
            LOBYTE(hWnd) = 1; /*0x60a923*/
            v4[28] = 4; /*0x60a928*/
            goto LABEL_74; /*0x60a92f*/
          }
          break;
        case 259: /*0x60a908*/
          if ( DlgCtrlID != 1835 ) /*0x60a93e*/
            goto LABEL_78; /*0x60a93e*/
          LOBYTE(hWnd) = 1; /*0x60a944*/
          v4[28] = 4; /*0x60a949*/
          goto LABEL_74; /*0x60a950*/
        case 3015: /*0x60a908*/
          if ( DlgCtrlID != 1835 ) /*0x60a95f*/
            goto LABEL_78; /*0x60a95f*/
          LOBYTE(hWnd) = 1; /*0x60a965*/
          v4[28] = 4; /*0x60a96a*/
          goto LABEL_74; /*0x60a971*/
        default:
          if ( v12 != 196 || DlgCtrlID != 1961 ) /*0x60a980*/
          {
LABEL_78:
            v15 = v4[40]; /*0x60a9ed*/
            if ( v15 <= 0 ) /*0x60a9f5*/
            {
              if ( (unsigned char)hWnd ) /*0x60aa27*/
              {
                v16 = v4[30]; /*0x60aa29*/
                if ( v16 ) /*0x60aa2e*/
                {
                  v4[37] = *(int16_t *)(v16 + 6); /*0x60aa34*/
                  *((unsigned char *)v4 + 168) = 0; /*0x60aa3a*/
                }
              }
            }
            else
            {
              SetTimer(v2, 0, v15, 0); /*0x60a9fd*/
              if ( (unsigned char)hWnd ) /*0x60aa09*/
              {
                *((unsigned char *)v4 + 168) = 1; /*0x60aa0b*/
                return (gamemd::AbstractClass **)(1); /*0x60aa1e*/
              }
            }
            return (gamemd::AbstractClass **)(1); /*0x60aa09*/
          }
          break;
      }
    }
    LOBYTE(hWnd) = 1; /*0x60a982*/
    v4[28] = 4; /*0x60a987*/
LABEL_74:
    if ( !v4[30] ) /*0x60a98e*/
    {
      v17 = 0; /*0x60a99d*/
      v14 = DispatchDialogControlAction(v18, v2); /*0x60a9b0*/
      v4[30] = GetDialogControlSHP(v18, v2, &v17); /*0x60a9b7*/
      v4[29] = v14; /*0x60a9ba*/
      *((unsigned char *)v4 + 124) = v17; /*0x60a9c1*/
    }
    Parent = v18; /*0x60a9c4*/
    goto LABEL_77; /*0x60a9c4*/
  }
  v4[28] = 1; /*0x60a630*/
  *((unsigned char *)v4 + 168) = 0; /*0x60a633*/
  v4[32] = 1; /*0x60a63a*/
  v4[33] = ValidateDialogEvent(Parent, v2); /*0x60a649*/
  v4[34] = CtlDialogColorHandler(Parent, v2); /*0x60a658*/
  v4[35] = ValidateDialogControl(Parent, v2); /*0x60a663*/
  v20 = Parent; /*0x60a66d*/
  v6 = 0; /*0x60a675*/
  hWnd = 0; /*0x60a67e*/
  HashTable::Get(&dword_AC1B00, &v20, &hWnd); /*0x60a682*/
  if ( hWnd ) /*0x60a68d*/
    v6 = *((unsigned int *)hWnd + 27); /*0x60a68f*/
  v7 = GetDlgCtrlID(v2); /*0x60a693*/
  if ( (v6 == 259 || v6 == 3015) && v7 == 1780 ) /*0x60a6ae*/
  {
    v4[36] = *((unsigned int *)dword_8871E0 + 433); /*0x60a6bd*/
    return (gamemd::AbstractClass **)(1); /*0x60a6c4*/
  }
  else
  {
    v4[36] = -1; /*0x60a6d2*/
    return (gamemd::AbstractClass **)(1); /*0x60a6d9*/
  }

}
}
// 0x60F760
namespace gamemd {
AbstractClass * * Dialog::InitWindow(int a1, int a2)
{

  int v2; // ebp
  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  unsigned int *v7; // eax
  unsigned int *v8; // esi
  int v9; // edx
  int v10; // eax
  int v11; // eax
  void *i; // eax
  void *v13[128]; // [esp+10h] [ebp-200h] BYREF

  v2 = 0; /*0x60f76f*/
  if ( dword_AC1B04 && (v3 = *((unsigned int *)dword_AC1B00 + (dword_AC1B18(&a1) & ((1 << dword_AC1B0C) - 1)))) != 0 ) /*0x60f79c*/
  {
    while ( *(HWND *)v3 != a1 ) /*0x60f7a7*/
    {
      v3 = *(unsigned int *)(v3 + 516); /*0x60f7a9*/
      if ( !v3 ) /*0x60f7b1*/
        goto LABEL_5; /*0x60f7b1*/
    }
    *(unsigned int *)(v3 + 36) = a2; /*0x60f7fa*/
    return (gamemd::AbstractClass **)(1); /*0x60f7fd*/
  }
  else
  {
LABEL_5:
    memset(v13, 0, sizeof(v13)); /*0x60f7b3*/
    v13[26] = (void *)11; /*0x60f7c9*/
    v13[25] = (void *)g_FogOfWarState; /*0x60f7d4*/
    v4 = __2_YAPAXI_Z(4u); /*0x60f7d8*/
    if ( v4 ) /*0x60f7e3*/
      v5 = (void *)unknown_libname_74(v4); /*0x60f7e7*/
    else
      v5 = 0; /*0x60f80c*/
    v13[15] = v5; /*0x60f814*/
    v13[16] = 0; /*0x60f818*/
    v13[23] = 0; /*0x60f81c*/
    v13[36] = (void *)-1; /*0x60f820*/
    v7 = (unsigned int *)(__2_YAPAXI_Z(0x208u)); /*0x60f82b*/
    v8 = v7; /*0x60f830*/
    if ( v7 ) /*0x60f837*/
      DialogControl::Constructor(v7 + 1); /*0x60f83c*/
    else
      v8 = 0; /*0x60f843*/
    *v8 = a1; /*0x60f854*/
    DialogClass::CopyTemplateStruct(v13); /*0x60f856*/
    v8[129] = 0; /*0x60f862*/
    v9 = dword_AC1B18(&a1) & ((1 << dword_AC1B0C) - 1); /*0x60f882*/
    v10 = *((unsigned int *)dword_AC1B00 + v9); /*0x60f884*/
    *((unsigned int *)dword_AC1B00 + v9) = (unsigned int)(v8); /*0x60f887*/
    if ( v10 ) /*0x60f88c*/
      v8[129] = v10; /*0x60f88e*/
    if ( (double)(unsigned int)++dword_AC1B04 / (double)dword_AC1B08 >= dbl_AC1B28 ) /*0x60f8c9*/
      HashTable::Grow2(&dword_AC1B00); /*0x60f8d0*/
    if ( dword_AC1B04 ) /*0x60f8db*/
    {
      v11 = *((unsigned int *)dword_AC1B00 + (dword_AC1B18(&a1) & ((1 << dword_AC1B0C) - 1))); /*0x60f8ff*/
      if ( v11 ) /*0x60f904*/
      {
        while ( *(HWND *)v11 != a1 ) /*0x60f90f*/
        {
          v11 = *(unsigned int *)(v11 + 516); /*0x60f911*/
          if ( !v11 ) /*0x60f919*/
            goto LABEL_22; /*0x60f919*/
        }
        v2 = v11 + 4; /*0x60f921*/
      }
    }
LABEL_22:
    if ( v13[10] ) /*0x60f92a*/
    {
      __3_YAXPAX_Z(v13[10]); /*0x60f92d*/
      v13[10] = 0; /*0x60f935*/
    }
    for ( i = v13[13]; v13[13]; i = v13[13] ) /*0x60f93f*/
      LinkedList::Remove(i); /*0x60f946*/
    if ( v13[15] ) /*0x60f959*/
      DeleteAndZero::OrFree(v13[15], 1); /*0x60f95d*/
    *(unsigned int *)(v2 + 32) = a2; /*0x60f96e*/
    return (gamemd::AbstractClass **)(1); /*0x60f962*/
  }

}
}
// 0x60F9A0
namespace gamemd {
AbstractClass * * Dialog::InitializeControls(HWND hWnd, LPARAM)
{

  char v2; // al
  char v3; // al
  int (*v4)(int, int, int, int); // ebp
  const char **WindowLongA; // eax
  LONG v6; // edi
  int v7; // eax
  unsigned int *v8; // esi
  int v9; // edx
  int v10; // eax
  int v11; // eax
  unsigned int *v12; // esi
  int v13; // edx
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  void *v17; // eax
  void *v18; // eax
  unsigned int *v19; // eax
  unsigned int *v20; // esi
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  unsigned int *i; // eax
  LPARAM v25; // edx
  const char **v26; // eax
  bool v27; // zf
  LRESULT (*v28)(HWND, UINT, WPARAM, LPARAM); // esi
  wchar_t *String; // [esp-4h] [ebp-AC4h]
  int v31; // [esp+10h] [ebp-AB0h] BYREF
  int64_t v32; // [esp+14h] [ebp-AACh]
  const char **v33; // [esp+1Ch] [ebp-AA4h]
  CHAR ClassName[128]; // [esp+20h] [ebp-AA0h] BYREF
  struct tagRECT v35; // [esp+A0h] [ebp-A20h] BYREF
  struct tagRECT Rect; // [esp+B0h] [ebp-A10h] BYREF
  void *v37[128]; // [esp+C0h] [ebp-A00h] BYREF
  wchar_t lParam[1024]; // [esp+2C0h] [ebp-800h] BYREF

  GetClassNameA(hWnd, ClassName, 128); /*0x60f9bc*/
  LODWORD(v32) = GetWindowLongA(hWnd, -16); /*0x60f9e2*/
  ScreenDialogToClient(hWnd, &v35); /*0x60f9e6*/
  GetClientRect(hWnd, &Rect); /*0x60f9fb*/
  TimerPool::AllocSlot(hWnd); /*0x60fa08*/
  dword_AC1CB4 = 159; /*0x60fa14*/
  dword_AC1CA8 = 159; /*0x60fa19*/
  dword_AC1DF0 = 1; /*0x60fa2f*/
  dword_AC1890 = 127; /*0x60fa35*/
  dword_AC18A4 = 0xFFFF; /*0x60fa3f*/
  dword_AC1CB0 = 15658734; /*0x60fa49*/
  dword_AC4618 = 40863; /*0x60fa53*/
  dword_AC184C = 0xFFFFFF; /*0x60fa5d*/
  dword_AC4628 = (int)&off_808080; /*0x60fa67*/
  dword_AC4604 = 255; /*0x60fa71*/
  dword_AC4880 = (int)&loc_626261 + 1; /*0x60fa77*/
  dword_AC4624 = 255; /*0x60fa81*/
  dword_AC1DD8 = (int)&unk_929292; /*0x60fa87*/
  dword_AC1B98 = 12959399; /*0x60fa91*/
  dword_AC1B94 = (int)&unk_807A68; /*0x60fa9b*/
  dword_AC1AF8 = (int)&unk_8F8F8F; /*0x60faa5*/
  dword_AC4620 = (int)sub_646464; /*0x60faaf*/
  dword_AC4898 = 96; /*0x60fab9*/
  dword_AC4608 = 43690; /*0x60fac3*/
  dword_AC48B0 = 2235147; /*0x60facd*/
  dword_AC1B90 = (int)&loc_443714 + 2; /*0x60fad7*/
  if ( !dword_AC48D4 ) /*0x60fae1*/
  {
    LOWORD(g_ScreenSaverState) = 255; /*0x60fae3*/
    LOWORD(g_ScreenSaverState) = 0xFFu >> GetBitShift_Green(); /*0x60faf2*/
    v2 = GetBitShift_Red(); /*0x60faf9*/
    HIWORD(g_ScreenSaverState) = 255; /*0x60fb01*/
    LOWORD(g_ScreenSaverState) = (unsigned short)g_ScreenSaverState << v2; /*0x60fb08*/
    HIWORD(g_ScreenSaverState) = 0xFFu >> GetBitMask_Blue(); /*0x60fb17*/
    v3 = GetBitMask_Green(); /*0x60fb1e*/
    LOWORD(g_CreditsScreenState) = 255; /*0x60fb26*/
    HIWORD(g_ScreenSaverState) <<= v3; /*0x60fb2d*/
    LOWORD(g_CreditsScreenState) = 0xFFu >> GetBitMask_Red(); /*0x60fb3c*/
    LOWORD(g_CreditsScreenState) = (unsigned short)g_CreditsScreenState << GetBitShift_Blue(); /*0x60fb4b*/
    InitDialogCountryIcons(); /*0x60fb52*/
    dword_AC48D4 = 1; /*0x60fb57*/
  }
  v4 = 0; /*0x60fb67*/
  v31 = 11; /*0x60fb69*/
  WindowLongA = (const char **)GetWindowLongA(hWnd, -21); /*0x60fb71*/
  v33 = WindowLongA; /*0x60fb75*/
  if ( WindowLongA ) /*0x60fb79*/
    strcpy(ClassName, *WindowLongA); /*0x60fb95*/
  if ( !strcmp(ClassName, aScrollbar) ) /*0x60fbad*/
  {
    v4 = (int (*)(int, int, int, int))Scrollbar::DlgProc; /*0x60fbd4*/
    v31 = 8; /*0x60fbd9*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_ListBox) ) /*0x60fbf5*/
  {
    v4 = Options::DialogProc; /*0x60fc1c*/
    v31 = 4; /*0x60fc21*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x60fc3d*/
  {
    v4 = (int (*)(int, int, int, int))ComboBoxDropDown::WndProc; /*0x60fc64*/
    v31 = 3; /*0x60fc69*/
  }
  else if ( !strcmp(ClassName, aMsctlsTrackbar) ) /*0x60fc85*/
  {
    v4 = (int (*)(int, int, int, int))TabControl::DlgProc; /*0x60fcac*/
    v31 = 7; /*0x60fcb1*/
  }
  else if ( !strcmp(ClassName, aMsctlsProgress) ) /*0x60fccd*/
  {
    v4 = (int (*)(int, int, int, int))NetworkLobbyPaintProc; /*0x60fcf4*/
    v31 = 6; /*0x60fcf9*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_NewEdit) ) /*0x60fd15*/
  {
    v4 = (int (*)(int, int, int, int))EditControl::WndProc; /*0x60fd3c*/
    v31 = 1; /*0x60fd41*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_Edit) ) /*0x60fd5d*/
  {
    v4 = ListBox::EditSubclassProc; /*0x60fd84*/
    v31 = 1; /*0x60fd89*/
  }
  else if ( !strcmp(ClassName, aStatic) ) /*0x60fda5*/
  {
    v4 = (int (*)(int, int, int, int))BinkMovie::WndProc; /*0x60fdcc*/
    v31 = 2; /*0x60fdd1*/
  }
  else if ( !strcmp(ClassName, aSystabcontrol3) ) /*0x60fded*/
  {
    v4 = (int (*)(int, int, int, int))Dialog::TabControlPaint; /*0x60fe14*/
    v31 = 10; /*0x60fe19*/
  }
  else if ( !strcmp(ClassName, aButton) ) /*0x60fe35*/
  {
    if ( (v32 & 7) == 7 ) /*0x60fe68*/
    {
      v4 = (int (*)(int, int, int, int))GroupLabel::WndProc; /*0x60fe6a*/
      v31 = 0; /*0x60fe6f*/
    }
    else if ( (v32 & 0xB) == 0xB ) /*0x60fe80*/
    {
      v4 = (int (*)(int, int, int, int))TabControl::WndProc; /*0x60fe82*/
      v31 = 0; /*0x60fe87*/
    }
    else if ( (v32 & 3) == 3 ) /*0x60fe95*/
    {
      v4 = (int (*)(int, int, int, int))Checkbox::WndProc; /*0x60fe97*/
      v31 = 0; /*0x60fe9c*/
    }
    else
    {
      if ( (v32 & 9) == 9 ) /*0x60fea7*/
        v4 = (int (*)(int, int, int, int))ButtonOwnerDraw::DlgProc; /*0x60fea9*/
      v31 = 0; /*0x60feae*/
    }
  }
  else if ( !strcmp(ClassName, aMsctlsHotkey32) ) /*0x60fec3*/
  {
    v4 = (int (*)(int, int, int, int))RenderDialogSurface; /*0x60feea*/
    v31 = 9; /*0x60feef*/
  }
  else
  {
    v4 = (int (*)(int, int, int, int))sub_612A60; /*0x60fef9*/
  }
  v6 = SetWindowLongA(hWnd, -4, (LONG)ComboBoxOwnerDraw::DlgProc); /*0x60ff1a*/
  v7 = *((unsigned int *)g_DialogPool + (dword_AC18D8(&hWnd) & ((1 << dword_AC18CC) - 1))); /*0x60ff37*/
  if ( v7 ) /*0x60ff3c*/
  {
    while ( *(HWND *)v7 != hWnd ) /*0x60ff47*/
    {
      v7 = *(unsigned int *)(v7 + 8); /*0x60ff4d*/
      if ( !v7 ) /*0x60ff52*/
        goto LABEL_39; /*0x60ff52*/
    }
  }
  else
  {
LABEL_39:
    v8 = __2_YAPAXI_Z(0xCu); /*0x60ff54*/
    *v8 = hWnd; /*0x60ff67*/
    v8[1] = v4; /*0x60ff70*/
    v8[2] = 0; /*0x60ff73*/
    v9 = dword_AC18D8(&hWnd) & ((1 << dword_AC18CC) - 1); /*0x60ff90*/
    v10 = *((unsigned int *)g_DialogPool + v9); /*0x60ff92*/
    *((unsigned int *)g_DialogPool + v9) = v8; /*0x60ff95*/
    if ( v10 ) /*0x60ff9a*/
      v8[2] = v10; /*0x60ff9c*/
    v32 = (unsigned int)++unk_AC18C4; /*0x60ffaf*/
    LODWORD(v32) = dword_AC18C8; /*0x60ffbc*/
    if ( (double)(unsigned int)unk_AC18C4 / (double)dword_AC18C8 >= dbl_AC18E8 ) /*0x60ffd3*/
      Dialog::GrowBuffer(&g_DialogPool); /*0x60ffda*/
  }
  v11 = *((unsigned int *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1))); /*0x610001*/
  if ( v11 ) /*0x610006*/
  {
    while ( *(HWND *)v11 != hWnd ) /*0x610011*/
    {
      v11 = *(unsigned int *)(v11 + 8); /*0x610017*/
      if ( !v11 ) /*0x61001c*/
        goto LABEL_46; /*0x61001c*/
    }
  }
  else
  {
LABEL_46:
    v12 = __2_YAPAXI_Z(0xCu); /*0x61001e*/
    *v12 = hWnd; /*0x610031*/
    v12[1] = v6; /*0x61003a*/
    v12[2] = 0; /*0x61003d*/
    v13 = dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1); /*0x61005a*/
    v14 = *((unsigned int *)dword_AC1B48 + v13); /*0x61005c*/
    *((unsigned int *)dword_AC1B48 + v13) = v12; /*0x61005f*/
    if ( v14 ) /*0x610064*/
      v12[2] = v14; /*0x610066*/
    v32 = (unsigned int)++dword_AC1B4C; /*0x610079*/
    LODWORD(v32) = dword_AC1B50; /*0x610086*/
    if ( (double)(unsigned int)dword_AC1B4C / (double)dword_AC1B50 >= dbl_AC1B70 ) /*0x61009d*/
      Dialog::GrowBuffer(&dword_AC1B48); /*0x6100a4*/
  }
  v15 = 0; /*0x6100ae*/
  if ( dword_AC1B04 && (v16 = *((unsigned int *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1)))) != 0 ) /*0x6100db*/
  {
    while ( *(HWND *)v16 != hWnd ) /*0x6100e6*/
    {
      v16 = *(unsigned int *)(v16 + 516); /*0x6100e8*/
      if ( !v16 ) /*0x6100f0*/
        goto LABEL_54; /*0x6100f0*/
    }
    v15 = v16 + 4; /*0x610135*/
  }
  else
  {
LABEL_54:
    memset(v37, 0, sizeof(v37)); /*0x6100f2*/
    v37[26] = (void *)11; /*0x61010a*/
    v37[25] = (void *)g_FogOfWarState; /*0x610115*/
    v17 = __2_YAPAXI_Z(4u); /*0x61011c*/
    if ( v17 ) /*0x610126*/
      v18 = (void *)unknown_libname_74(v17); /*0x61012a*/
    else
      v18 = 0; /*0x61013d*/
    v37[15] = v18; /*0x610144*/
    v37[16] = 0; /*0x61014b*/
    v37[23] = 0; /*0x610152*/
    v37[36] = (void *)-1; /*0x610159*/
    v19 = __2_YAPAXI_Z(0x208u); /*0x610164*/
    v20 = v19; /*0x610169*/
    if ( v19 ) /*0x610170*/
      DialogControl::Constructor(v19 + 1); /*0x610175*/
    else
      v20 = 0; /*0x61017c*/
    *v20 = hWnd; /*0x610190*/
    DialogClass::CopyTemplateStruct(v37); /*0x610192*/
    v20[129] = 0; /*0x61019e*/
    v21 = HashTable::ComputeHash((int)&dword_AC1B00, (int)&hWnd); /*0x6101aa*/
    v22 = *((unsigned int *)dword_AC1B00 + v21); /*0x6101b5*/
    *((unsigned int *)dword_AC1B00 + v21) = v20; /*0x6101b8*/
    if ( v22 ) /*0x6101bd*/
      v20[129] = v22; /*0x6101bf*/
    v32 = (unsigned int)++dword_AC1B04; /*0x6101d5*/
    LODWORD(v32) = dword_AC1B08; /*0x6101e2*/
    if ( (double)(unsigned int)dword_AC1B04 / (double)dword_AC1B08 >= dbl_AC1B28 ) /*0x6101f9*/
      HashTable::Grow2(&dword_AC1B00); /*0x610200*/
    if ( dword_AC1B04 ) /*0x61020b*/
    {
      v23 = *((unsigned int *)dword_AC1B00 + HashTable::ComputeHash((int)&dword_AC1B00, (int)&hWnd)); /*0x610225*/
      if ( v23 ) /*0x61022a*/
      {
        while ( *(HWND *)v23 != hWnd ) /*0x610235*/
        {
          v23 = *(unsigned int *)(v23 + 516); /*0x610237*/
          if ( !v23 ) /*0x61023f*/
            goto LABEL_71; /*0x61023f*/
        }
        v15 = v23 + 4; /*0x610247*/
      }
    }
LABEL_71:
    GadgetClass::SetTooltip(v37, 0); /*0x61024a*/
    for ( i = v37[13]; v37[13]; i = v37[13] ) /*0x610260*/
      LinkedList::Remove(v37, i); /*0x61026a*/
    if ( v37[15] ) /*0x610283*/
      DeleteAndZero::OrFree((void **)v37[15], 1); /*0x610287*/
  }
  v25 = a2; /*0x610290*/
  *(unsigned int *)(v15 + 104) = v31; /*0x610297*/
  v26 = v33; /*0x61029a*/
  v27 = v33 == 0; /*0x61029e*/
  *(unsigned int *)v15 = v25; /*0x6102a0*/
  if ( !v27 ) /*0x6102a3*/
    *(unsigned int *)(v15 + 84) = v26[1]; /*0x6102a8*/
  v28 = 0; /*0x6102bd*/
  v31 = 0; /*0x6102bf*/
  if ( (uint8_t)Dialog::UpdateControlState(&hWnd, &v31) && v31 ) /*0x6102d2*/
    v28 = *(LRESULT (**)(HWND, UINT, WPARAM, LPARAM))v31; /*0x6102d4*/
  LOBYTE(lParam[0]) = 0; /*0x6102ee*/
  CallWindowProcA(v28, hWnd, 0xDu, 0x800u, (LPARAM)lParam); /*0x6102f5*/
  if ( LOBYTE(lParam[0]) ) /*0x610302*/
  {
    String = GetStringCSF(lParam, 0, g_Str_File_ownrdraw_cpp, 7392); /*0x61031c*/
    GadgetClass::SetTooltip((void **)v15, String); /*0x61031d*/
  }
  else
  {
    GadgetClass::SetTooltip((void **)v15, 0); /*0x610322*/
  }
  *(unsigned int *)(v15 + 44) = 0; /*0x610327*/
  SendMessageA(hWnd, 0x497u, 0, 0); /*0x610339*/
  return 1; /*0x61033f*/

}
}
// 0x610360
namespace gamemd {
AbstractClass * * Dialog::DestroyDialogSystem()
{

  unsigned int *v2; // eax
  unsigned int *v3; // eax
  unsigned int *i; // eax
  void *v5; // esi
  int v6; // esi
  HWND *v7; // ecx
  HWND v8; // edi
  double v9; // st7
  HWND *v10; // eax
  void *WindowLongA; // eax
  HWND hWnd; // [esp+Ch] [ebp-20Ch] BYREF
  int64_t v14; // [esp+10h] [ebp-208h] BYREF
  unsigned char v15[512]; // [esp+18h] [ebp-200h] BYREF

  EnumChildWindows((HWND)this, DestroyDialogChildWindow, 0); /*0x610374*/
  hWnd = (HWND)this; /*0x610389*/
  ((DynamicArray *)((DynamicArray *)&g_DialogPool.__pad_208[128]))->Resize((int *)&hWnd, &v14); /*0x61038d*/
  memset(v15, 0, sizeof(v15)); /*0x6103a3*/
  *(unsigned int *)&v15[104] = 11; /*0x6103a7*/
  *(unsigned int *)&v15[100] = g_FogOfWarState; /*0x6103b2*/
  v2 = (unsigned int *)__2_YAPAXI_Z(4u); /*0x6103b9*/
  if ( v2 ) /*0x6103c3*/
    v3 = unknown_libname_74(v2); /*0x6103c7*/
  else
    v3 = 0; /*0x6103ce*/
  *(unsigned int *)&v15[60] = v3; /*0x6103d0*/
  *(unsigned int *)&v15[64] = 0; /*0x6103e3*/
  *(unsigned int *)&v15[92] = 0; /*0x6103e7*/
  *(unsigned int *)&v15[144] = -1; /*0x6103eb*/
  ((Dialog *)((Dialog *)&g_DialogPool.__pad_208[56]))->BindGadgetData((int *)&hWnd, v15); /*0x6103f6*/
  if ( *(unsigned int *)&v15[40] ) /*0x610401*/
  {
    __3_YAXPAX_Z(*(void **)&v15[40]); /*0x610404*/
    *(unsigned int *)&v15[40] = 0; /*0x61040c*/
  }
  for ( i = *(unsigned int **)&v15[52]; *(unsigned int *)&v15[52]; i = *(unsigned int **)&v15[52] ) /*0x610416*/
    LinkedList::Remove((LinkedList *)v15, i); /*0x61041d*/
  v5 = *(void **)&v15[60]; /*0x61042a*/
  if ( *(unsigned int *)&v15[60] ) /*0x610430*/
  {
    ((DeleteAndZero*)(*(DeleteAndZero **)&v15[60]))->Alt(); /*0x610434*/
    __3_YAXPAX_Z(v5); /*0x61043a*/
  }
  if ( *(unsigned int *)&g_DialogPool.__pad_0[4] ) /*0x610449*/
  {
    v14 = (unsigned int)(*(unsigned int *)&g_DialogPool.__pad_0[4] - 1); /*0x610456*/
    *(float *)&v14 = (double)v14 / (double)g_DialogPool.Dialog_field_0x8[0]; /*0x610472*/
    v6 = (*(int (**)(HWND *))&g_DialogPool.__pad_10[8])(&hWnd) /*0x61048a*/
       & ((1 << SLOBYTE(g_DialogPool.Dialog_field_0xC)) - 1);
    v7 = *(HWND **)(*(unsigned int *)g_DialogPool.__pad_0 + 4 * v6); /*0x610491*/
    if ( v7 ) /*0x610496*/
    {
      if ( *v7 == hWnd ) /*0x6104a4*/
      {
        v8 = v7[2]; /*0x6104a6*/
        __3_YAXPAX_Z(*(void **)(*(unsigned int *)g_DialogPool.__pad_0 + 4 * v6)); /*0x6104aa*/
        v9 = *(float *)&v14; /*0x6104b8*/
        *(unsigned int *)(*(unsigned int *)g_DialogPool.__pad_0 + 4 * v6) = v8; /*0x6104bc*/
        --*(unsigned int *)&g_DialogPool.__pad_0[4]; /*0x6104cb*/
        if ( v9 > *(double *)&g_DialogPool.__pad_10[16] ) /*0x6104d5*/
          goto LABEL_22; /*0x6104d5*/
        goto LABEL_21; /*0x6104d5*/
      }
      v10 = (HWND *)v7[2]; /*0x6104d9*/
      if ( v10 ) /*0x6104de*/
      {
        while ( *v10 != hWnd ) /*0x6104e2*/
        {
          v7 = v10; /*0x6104e4*/
          v10 = (HWND *)v10[2]; /*0x6104e6*/
          if ( !v10 ) /*0x6104eb*/
            goto LABEL_20; /*0x6104eb*/
        }
        v7[2] = v10[2]; /*0x6104f3*/
        --*(unsigned int *)&g_DialogPool.__pad_0[4]; /*0x6104fd*/
        __3_YAXPAX_Z(v10); /*0x610503*/
      }
LABEL_20:
      if ( *(float *)&v14 <= *(double *)&g_DialogPool.__pad_10[16] ) /*0x61051a*/
LABEL_21:
        HashTable::Shrink2((HashTable *)&g_DialogPool); /*0x61051c*/
    }
  }
LABEL_22:
  WindowLongA = (void *)GetWindowLongA(hWnd, -21); /*0x610526*/
  if ( WindowLongA ) /*0x610535*/
    __3_YAXPAX_Z(WindowLongA); /*0x610538*/
  SetWindowLongA(hWnd, -21, 0); /*0x610548*/
  Object::RemoveObjectArray((Object *)hWnd); /*0x610552*/
  return 1; /*0x61055c*/

}
}
// 0x6137D0
namespace gamemd {
AbstractClass * * Dialog_TabControlPaint()
{
  LRESULT (__stdcall *v4)(HWND, UINT, WPARAM, LPARAM); // edi
  int v5; // eax
  HWND v6; // ecx
  int v7; // eax
  int v8; // eax
  LRESULT (__stdcall **v9)(HWND, UINT, WPARAM, LPARAM); // eax
  UINT v10; // esi
  int v12; // eax
  LPARAM v13; // eax
  LRESULT (__stdcall *v14)(HWND, UINT, WPARAM, LPARAM); // ebx
  int v15; // eax
  int v16; // eax
  int v18; // eax
  int v19; // eax
  int v21; // eax
  int v23; // edi
  int v24; // eax
  int v26; // edi
  int v27; // eax
  int v29; // edi
  int v30; // eax
  int v31; // esi
  int v32; // edi
  int v33; // eax
  int v34; // esi
  int v35; // edi
  int v36; // eax
  int v37; // esi
  int v38; // edi
  int v39; // eax
  LRESULT v40; // ebp
  WPARAM v41; // ebp
  LRESULT i; // eax
  char v44; // bl
  LONG v45; // eax
  LONG v46; // eax
  int v48; // edi
  int v49; // eax
  int v51; // eax
  int v52; // edx
  int v53; // ebx
  int v54; // eax
  int v55; // esi
  int v56; // edi
  int v57; // eax
  int v58; // eax
  int v60; // edi
  WPARAM v61; // edi
  LRESULT v62; // ebx
  int v63; // esi
  LONG v64; // [esp+50h] [ebp-104h] BYREF
  LONG v65; // [esp+54h] [ebp-100h]
  int v66; // [esp+58h] [ebp-FCh]
  int v67; // [esp+5Ch] [ebp-F8h]
  struct tagRECT Rect; // [esp+60h] [ebp-F4h] BYREF
  LONG left; // [esp+70h] [ebp-E4h] BYREF
  LONG top; // [esp+74h] [ebp-E0h]
  int v71; // [esp+78h] [ebp-DCh]
  int v72; // [esp+7Ch] [ebp-D8h]
  LONG v73; // [esp+80h] [ebp-D4h] BYREF
  LONG v74; // [esp+84h] [ebp-D0h]
  int v75; // [esp+88h] [ebp-CCh]
  int v76; // [esp+8Ch] [ebp-C8h]
  WPARAM v77; // [esp+90h] [ebp-C4h]
  int v78; // [esp+94h] [ebp-C0h]
  int v80; // [esp+9Ch] [ebp-B8h]
  int v81; // [esp+A0h] [ebp-B4h]
  RECT v83; // [esp+A8h] [ebp-ACh] BYREF
  int v84[4]; // [esp+B8h] [ebp-9Ch] BYREF
  struct tagRECT v85; // [esp+C8h] [ebp-8Ch] BYREF
  int v86[2]; // [esp+D8h] [ebp-7Ch] BYREF
  int v87; // [esp+E0h] [ebp-74h]
  LPARAM v89[7]; // [esp+E8h] [ebp-6Ch] BYREF
  char Buffer[80]; // [esp+104h] [ebp-50h] BYREF

  v4 = 0; /*0x6137e0*/
  v80 = 0; /*0x6137e4*/
  v78 = 0; /*0x6137e8*/
  if ( g_DialogHashMap_Count /*0x613815*/
    && (v5 = *((unsigned int *)g_DialogHashMap_Base + (g_DialogHashMap_Hasher(&hWnd) & ((1 << g_DialogHashMap_Buckets) - 1)))) != 0 )
  {
    v6 = hWnd; /*0x613817*/
    while ( *(HWND *)v5 != hWnd ) /*0x613820*/
    {
      v5 = *(unsigned int *)(v5 + 516); /*0x613822*/
      if ( !v5 ) /*0x61382a*/
        goto LABEL_9; /*0x61382a*/
    }
    v78 = v5 + 4; /*0x613835*/
  }
  else
  {
    v6 = hWnd; /*0x61383b*/
  }
  LABEL_9:
  if ( g_DialogHashMap_Grow ) /*0x613848*/
  {
    v7 = HashMap::ComputeIndex((int)&g_DialogHashMap_Entries, (int)&hWnd); /*0x613857*/
    v6 = hWnd; /*0x613862*/
    v8 = *((unsigned int *)g_DialogHashMap_Entries + v7); /*0x613869*/
    if ( v8 ) /*0x61386e*/
    {
      while ( *(HWND *)v8 != hWnd ) /*0x613872*/
      {
        v8 = *(unsigned int *)(v8 + 8); /*0x613874*/
        if ( !v8 ) /*0x613879*/
          goto LABEL_16; /*0x613879*/
      }
      v9 = (LRESULT (**)(HWND, UINT, WPARAM, LPARAM))(v8 + 4); /*0x613881*/
      if ( v9 ) /*0x613886*/
        v4 = *v9; /*0x613888*/
    }
  }
  LABEL_16:
  v10 = Msg; /*0x61388a*/
  switch ( Msg ) /*0x613894*/
  {
    case 0x14u: /*0x613894*/
      return 1; /*0x6138a4*/
    case 0x85u: /*0x613894*/
      return 0; /*0x6138ba*/
    case 0x497u: /*0x613894*/
      ScreenDialogToClient(v6, &v85); /*0x6138cc*/
      v12 = HashTable::Find(g_DialogHashTable, g_Str_File_tab_tlu_pcx, 0); /*0x6138dc*/
      v13 = (uint16_t)((*(int (**)(int))(*(unsigned int *)v12 + 128))(v12) - 1) << 16; /*0x6138f1*/
      IDA_LOBYTE(v13) = v13 | 0x59; /*0x6138f4*/
      SendMessageA(hWnd, 0x1329u, 0, v13); /*0x613905*/
      v6 = hWnd; /*0x61390b*/
  LABEL_22:
      if ( v4 ) /*0x613914*/
        return CallWindowProcA(v4, v6, v10, wParam, lParam); /*0x61392f*/
      return v80; /*0x613940*/
  }
  if ( Msg != 15 ) /*0x613946*/
    goto LABEL_22; /*0x613946*/
  ScreenDialogToClient(v6, &Rect); /*0x61394d*/
  v14 = SendMessageA; /*0x613959*/
  SendMessageA(hWnd, 0x1304u, 0, 0); /*0x613967*/
  SendMessageA(hWnd, 0x130Au, 0, (LPARAM)&v85); /*0x61397f*/
  SendMessageA(hWnd, 0x130Au, 0, (LPARAM)&v85); /*0x613997*/
  v15 = Rect.top + v85.bottom - v85.top + 3; /*0x6139b2*/
  left = Rect.left; /*0x6139ba*/
  v71 = Rect.right - Rect.left; /*0x6139c4*/
  v72 = Rect.bottom - v15; /*0x6139d1*/
  Rect.top = v15; /*0x6139d9*/
  top = v15; /*0x6139dd*/
  SetupDialogRenderBuffer(&left, hWnd, 0); /*0x6139e1*/
  ValidateRect(hWnd, 0); /*0x6139ef*/
  left = Rect.left; /*0x613a07*/
  top = Rect.top; /*0x613a11*/
  v71 = Rect.right - Rect.left; /*0x613a1c*/
  v72 = Rect.bottom - Rect.top; /*0x613a20*/
  v16 = HashTable::Find(g_DialogHashTable, aTabFmlPcx, 0); /*0x613a24*/
  v16 = v16; /*0x613a29*/
  if ( v16 ) /*0x613a2d*/
  {
    (*(void (**)(int))(*(unsigned int *)v16 + 128))(v16); /*0x613a33*/
    v18 = (*(int (**)(int))(*(unsigned int *)v16 + 124))(v16); /*0x613a3d*/
    v64 = Rect.left; /*0x613a48*/
    v66 = v18; /*0x613a50*/
    v65 = Rect.top; /*0x613a5a*/
    v67 = Rect.bottom - Rect.top; /*0x613a6d*/
    Surface::TileBlit(&v64, DSurface_Alternate, v16, 0, 0); /*0x613a71*/
  }
  v19 = HashTable::Find(g_DialogHashTable, aTabFmrPcx, 0); /*0x613a81*/
  v19 = v19; /*0x613a86*/
  if ( v19 ) /*0x613a8a*/
  {
    (*(void (**)(int))(*(unsigned int *)v19 + 128))(v19); /*0x613a90*/
    v66 = (*(int (**)(int))(*(unsigned int *)v19 + 124))(v19); /*0x613aa7*/
    v64 = Rect.right - v66; /*0x613ab0*/
    v65 = Rect.top; /*0x613ab9*/
    v67 = Rect.bottom - Rect.top; /*0x613acc*/
    Surface::TileBlit(&v64, DSurface_Alternate, v19, 0, 0); /*0x613ad0*/
  }
  v21 = HashTable::Find(g_DialogHashTable, aTabFtmPcx, 0); /*0x613ae0*/
  v21 = v21; /*0x613ae5*/
  if ( v21 ) /*0x613ae9*/
  {
    v23 = (*(int (**)(int))(*(unsigned int *)v21 + 128))(v21); /*0x613af5*/
    (*(void (**)(int))(*(unsigned int *)v21 + 124))(v21); /*0x613afb*/
    v64 = Rect.left; /*0x613b0a*/
    v65 = Rect.top; /*0x613b16*/
    v66 = Rect.right - Rect.left; /*0x613b27*/
    v67 = v23; /*0x613b2b*/
    Surface::TileBlit(&v64, DSurface_Alternate, v21, 0, 0); /*0x613b2f*/
  }
  v24 = HashTable::Find(g_DialogHashTable, aTabFbmPcx, 0); /*0x613b3f*/
  v24 = v24; /*0x613b44*/
  if ( v24 ) /*0x613b48*/
  {
    v26 = (*(int (**)(int))(*(unsigned int *)v24 + 128))(v24); /*0x613b54*/
    (*(void (**)(int))(*(unsigned int *)v24 + 124))(v24); /*0x613b5a*/
    v64 = Rect.left; /*0x613b6b*/
    v65 = Rect.bottom - v26; /*0x613b77*/
    v66 = Rect.right - Rect.left; /*0x613b88*/
    v67 = v26; /*0x613b8c*/
    Surface::TileBlit(&v64, DSurface_Alternate, v24, 0, 0); /*0x613b90*/
  }
  v27 = HashTable::Find(g_DialogHashTable, aTabFtlPcx, 0); /*0x613ba0*/
  v27 = v27; /*0x613ba5*/
  if ( v27 ) /*0x613ba9*/
  {
    v29 = (*(int (**)(int))(*(unsigned int *)v27 + 128))(v27); /*0x613bb5*/
    v30 = (*(int (**)(int))(*(unsigned int *)v27 + 124))(v27); /*0x613bbb*/
    v74 = Rect.top; /*0x613bc6*/
    v73 = Rect.left; /*0x613bca*/
    v64 = 0; /*0x613bdc*/
    v65 = 0; /*0x613be0*/
    v66 = v30; /*0x613be4*/
    v67 = v29; /*0x613be8*/
    v75 = v30; /*0x613bec*/
    v76 = v29; /*0x613bf0*/
    (*(void (**)(int, LONG *, int, LONG *, unsigned int, int))(*(unsigned int *)DSurface_Alternate + 8))( /*0x613bfc*/
      DSurface_Alternate,
      &v73,
      v27,
      &v64,
      0,
      1);
  }
  v31 = HashTable::Find(g_DialogHashTable, aTabFtrPcx, 0); /*0x613c0f*/
  if ( v31 ) /*0x613c13*/
  {
    v32 = (*(int (**)(int))(*(unsigned int *)v31 + 128))(v31); /*0x613c23*/
    v33 = (*(int (**)(int))(*(unsigned int *)v31 + 124))(v31); /*0x613c25*/
    v65 = Rect.top; /*0x613c32*/
    v64 = Rect.right - v33; /*0x613c36*/
    v73 = 0; /*0x613c48*/
    v74 = 0; /*0x613c4c*/
    v75 = v33; /*0x613c50*/
    v76 = v32; /*0x613c54*/
    v66 = v33; /*0x613c58*/
    v67 = v32; /*0x613c5c*/
    (*(void (**)(int, LONG *, int, LONG *, unsigned int, int))(*(unsigned int *)DSurface_Alternate + 8))( /*0x613c68*/
      DSurface_Alternate,
      &v64,
      v31,
      &v73,
      0,
      1);
  }
  v34 = HashTable::Find(g_DialogHashTable, aTabFblPcx, 0); /*0x613c7b*/
  if ( v34 ) /*0x613c7f*/
  {
    v35 = (*(int (**)(int))(*(unsigned int *)v34 + 128))(v34); /*0x613c8f*/
    v36 = (*(int (**)(int))(*(unsigned int *)v34 + 124))(v34); /*0x613c91*/
    v64 = Rect.left; /*0x613c9e*/
    v65 = Rect.bottom - v35; /*0x613ca8*/
    v73 = 0; /*0x613cb4*/
    v74 = 0; /*0x613cb8*/
    v75 = v36; /*0x613cbc*/
    v76 = v35; /*0x613cc0*/
    v66 = v36; /*0x613cc4*/
    v67 = v35; /*0x613cc8*/
    (*(void (**)(int, LONG *, int, LONG *, unsigned int, int))(*(unsigned int *)DSurface_Alternate + 8))( /*0x613cd4*/
      DSurface_Alternate,
      &v64,
      v34,
      &v73,
      0,
      1);
  }
  v37 = HashTable::Find(g_DialogHashTable, aTabFbrPcx, 0); /*0x613ce7*/
  if ( v37 ) /*0x613ceb*/
  {
    v38 = (*(int (**)(int))(*(unsigned int *)v37 + 128))(v37); /*0x613cfb*/
    v39 = (*(int (**)(int))(*(unsigned int *)v37 + 124))(v37); /*0x613cfd*/
    v65 = Rect.bottom - v38; /*0x613d0c*/
    v64 = Rect.right - v39; /*0x613d10*/
    v73 = 0; /*0x613d22*/
    v74 = 0; /*0x613d26*/
    v75 = v39; /*0x613d2a*/
    v76 = v38; /*0x613d2e*/
    v66 = v39; /*0x613d32*/
    v67 = v38; /*0x613d36*/
    (*(void (**)(int, LONG *, int, LONG *, unsigned int, int))(*(unsigned int *)DSurface_Alternate + 8))( /*0x613d42*/
      DSurface_Alternate,
      &v64,
      v37,
      &v73,
      0,
      1);
  }
  v40 = SendMessageA(hWnd, 0x130Bu, 0, 0); /*0x613d56*/
  v40 = v40; /*0x613d63*/
  ScreenDialogToClient(hWnd, &Rect); /*0x613d67*/
  v41 = v40 + 1; /*0x613d6c*/
  v77 = v41; /*0x613d6d*/
  LABEL_43:
  for ( i = v14(hWnd, 0x130Au, v41, (LPARAM)&v83); ; i = SendMessageA(hWnd, 0x130Au, v61 + 1, (LPARAM)&v83) ) /*0x613d84*/
  {
    if ( !i ) /*0x613d88*/
    {
      v77 = 0; /*0x614161*/
      v41 = 0; /*0x614169*/
      goto LABEL_43; /*0x61416d*/
    }
    hWnd = hWnd; /*0x613d9c*/
    memset(v89, 0, sizeof(v89)); /*0x613da3*/
    v89[3] = (LPARAM)word_AC1BA0; /*0x613db3*/
    v89[4] = 64; /*0x613dc7*/
    strcpy((char *)word_AC1BA0, aTitle); /*0x613dd5*/
    v89[0] = 1; /*0x613dd9*/
    v14(hWnd, 0x1305u, v41, (LPARAM)v89); /*0x613df8*/
    v44 = 100; /*0x613dfa*/
    if ( v41 == v40 ) /*0x613e00*/
      v44 = 117; /*0x613e02*/
    v45 = v83.left; /*0x613e0b*/
    if ( v83.left >= 6 ) /*0x613e0d*/
      v45 = 6; /*0x613e0f*/
    left = Rect.left + v83.left - v45; /*0x613e22*/
    top = v83.top + Rect.top; /*0x613e2f*/
    v46 = v83.left; /*0x613e33*/
    if ( v83.left >= 6 ) /*0x613e35*/
      v46 = 6; /*0x613e37*/
    v72 = v83.bottom - v83.top; /*0x613e4c*/
    v71 = v83.right + v46 - v83.left; /*0x613e5a*/
    v44 = v44; /*0x613e63*/
    v48 = HashTable::Find(g_DialogHashTable, g_Str_File_tab_tlu_pcx, 0); /*0x613e74*/
    sprintf(Buffer, "tab_tm%c.pcx", v44); /*0x613e76*/
    v49 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x613e8d*/
    v49 = v49; /*0x613e92*/
    if ( v49 ) /*0x613e96*/
    {
      v81 = (*(int (**)(int))(*(unsigned int *)v49 + 128))(v49); /*0x613ea2*/
      (*(void (**)(int))(*(unsigned int *)v49 + 124))(v49); /*0x613eaa*/
      v51 = (*(int (**)(int))(*(unsigned int *)v48 + 124))(v48); /*0x613eb1*/
      v52 = *(unsigned int *)v48; /*0x613eb8*/
      v53 = v71 - 2 * v51; /*0x613ebc*/
      top = top; /*0x613ec4*/
      v54 = (*(int (**)(int))(v52 + 124))(v48); /*0x613ec8*/
      v73 = left + v54; /*0x613edb*/
      v74 = top; /*0x613ee5*/
      v76 = v81; /*0x613ef0*/
      v75 = v53; /*0x613efb*/
      Surface::TileBlit(&v73, DSurface_Alternate, v49, 0, 0); /*0x613eff*/
    }
    sprintf(Buffer, "tab_tl%c.pcx", v44); /*0x613f12*/
    v55 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x613f2e*/
    if ( v55 ) /*0x613f32*/
    {
      v56 = (*(int (**)(int))(v55->q080)(v55); /*0x613f46*/
      v57 = (*(int (**)(int))(v55->u32_7C)(v55); /*0x613f48*/
      v64 = left; /*0x613f53*/
      v66 = v57; /*0x613f5d*/
      v65 = top; /*0x613f6e*/
      v67 = v56; /*0x613f74*/
      Surface::BlitTransparent( /*0x613fb5*/
        &v64,
        DSurface_Alternate,
        v55,
        (255 >> g_BitShift_Green_0 << g_BitShift_Red) | (0xFFu >> g_BitMask_Red << g_BitShift_Blue));
    }
    sprintf(Buffer, "tab_tr%c.pcx", v44); /*0x613fc8*/
    v58 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x613fdf*/
    v58 = v58; /*0x613fe4*/
    if ( v58 ) /*0x613fe8*/
    {
      v60 = (*(int (**)(int))(*(unsigned int *)v58 + 128))(v58); /*0x613ff8*/
      v87 = (*(int (**)(int))(*(unsigned int *)v58 + 124))(v58); /*0x61400b*/
      v86[0] = left + v71 - v87; /*0x614018*/
      v86[1] = top; /*0x61402a*/
      v60 = v60; /*0x61403b*/
      Surface::BlitTransparent( /*0x614082*/
        v86,
        DSurface_Alternate,
        v58,
        (255 >> g_BitShift_Green_0 << g_BitShift_Red) | (0xFFu >> g_BitMask_Red << g_BitShift_Blue));
    }
    if ( v89[3] ) /*0x614090*/
      strcpy((char *)word_AC1BA0, (const char *)v89[3]); /*0x6140a9*/
    v61 = v77; /*0x6140ba*/
    v62 = v40; /*0x6140be*/
    v63 = dword_AC4608; /*0x6140c2*/
    v84[0] = left; /*0x6140ca*/
    v84[2] = left + v71; /*0x6140d2*/
    v84[1] = top + 6; /*0x6140e4*/
    v84[3] = top + v72; /*0x6140e8*/
    if ( v77 == v40 ) /*0x6140ef*/
      v63 = yTop; /*0x6140f1*/
    swprintf(word_AC462C, (const size_t)g_Str_Trace__hs, word_AC1BA0); /*0x614106*/
    PrintFontLayout(DSurface_Alternate, word_AC462C, v84, *(unsigned int **)(v78 + 100), v63, 5, 12, 0, 0, 0); /*0x614131*/
    ValidateRect(hWnd, &v83); /*0x614149*/
    if ( v61 == v62 ) /*0x61414d*/
      break; /*0x61414d*/
    v14 = SendMessageA; /*0x61414f*/
    v77 = v61 + 1; /*0x614156*/
    v41 = v61 + 1; /*0x61415a*/
  }
  ValidateRect(hWnd, 0); /*0x61417c*/
  return v80; /*0x613896*/
}
}
// 0x6213A0
namespace gamemd {
AbstractClass * * Dialog::Resize()
{

  LONG result; // eax
  int SystemMetrics; // esi
  HWND v4; // esi
  HWND v5; // [esp+8h] [ebp-24h] BYREF
  struct tagRECT v6; // [esp+Ch] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+1Ch] [ebp-10h] BYREF

  result = g_DSurface_Primary; /*0x6213a0*/
  if ( g_DSurface_Primary ) /*0x6213ae*/
  {
    result = DSurface_Alternate; /*0x6213b4*/
    if ( DSurface_Alternate ) /*0x6213bb*/
    {
      ScreenDialogToClient(*((HWND *)this + 5), &v6); /*0x6213c8*/
      GetClientRect(*((HWND *)this + 5), &Rect); /*0x6213d6*/
      result = GetWindowLongA(*((HWND *)this + 5), -16); /*0x6213e2*/
      if ( ((unsigned int)0 & result) != 0 ) /*0x6213ed*/
      {
        SystemMetrics = GetSystemMetrics(5); /*0x6213fa*/
        result = GetSystemMetrics(6); /*0x6213fe*/
        v6.left += SystemMetrics; /*0x62140e*/
        v6.right -= SystemMetrics; /*0x62141c*/
        v6.top += result; /*0x621420*/
        v6.bottom -= result; /*0x621424*/
      }
      if ( *(unsigned int *)this == 4 ) /*0x62142c*/
      {
        result = dword_AC1B04; /*0x62142e*/
        v4 = (HWND)*((unsigned int *)this + 5); /*0x621433*/
        v5 = v4; /*0x621438*/
        if ( dword_AC1B04 ) /*0x62143c*/
        {
          result = *((unsigned int *)dword_AC1B00 + (dword_AC1B18(&v5) & ((1 << dword_AC1B0C) - 1))); /*0x62145d*/
          if ( result ) /*0x621462*/
          {
            while ( *(HWND *)result != v5 ) /*0x62146a*/
            {
              result = *(unsigned int *)(result + 516); /*0x62146c*/
              if ( !result ) /*0x621474*/
                return result; /*0x621474*/
            }
            result += 4; /*0x621480*/
            if ( result ) /*0x621485*/
            {
              *(unsigned int *)(result + 232) = *((unsigned int *)this + 4); /*0x621491*/
              InvalidateRect(v4, (const RECT *)((unsigned char *)this + 28), 0); /*0x621497*/
              return UpdateWindow(v4); /*0x62149e*/
            }
          }
        }
      }
    }
  }
  return result; /*0x621476*/

}
}
// 0x621E90
namespace gamemd {
AbstractClass * * Dialog::DrawBackground(HWND hWnd)
{

  int v1; // ebp
  unsigned int *v3; // ebx
  unsigned int *v4; // eax
  LONG right; // eax
  LONG bottom; // ecx
  int v7; // esi
  LONG v8; // eax
  LONG v9; // ecx
  int v10; // edx
  Dialog **v11; // eax
  unsigned int *v12; // eax
  Dialog **v13; // eax
  int v14; // edi
  Dialog **v15; // eax
  unsigned int *v16; // eax
  unsigned int *v17; // eax
  int v18; // eax
  unsigned int *v19; // eax
  unsigned int *v20; // eax
  int v21; // eax
  void *NeedsSaveOrLink; // eax
  int v23; // edi
  int v24; // eax
  int v25; // edi
  int v26; // ebp
  int v27; // ecx
  int v28; // [esp+10h] [ebp-58h] BYREF
  Dialog *v29; // [esp+14h] [ebp-54h] BYREF
  int v30; // [esp+18h] [ebp-50h] BYREF
  LONG v31; // [esp+1Ch] [ebp-4Ch]
  LONG v32; // [esp+20h] [ebp-48h]
  LONG v33; // [esp+24h] [ebp-44h]
  LONG left; // [esp+28h] [ebp-40h] BYREF
  LONG top; // [esp+2Ch] [ebp-3Ch]
  LONG v36; // [esp+30h] [ebp-38h]
  LONG v37; // [esp+34h] [ebp-34h]
  struct tagRECT v38; // [esp+38h] [ebp-30h] BYREF
  int v39; // [esp+48h] [ebp-20h] BYREF
  LONG v40; // [esp+4Ch] [ebp-1Ch]
  LONG v41; // [esp+50h] [ebp-18h]
  LONG v42; // [esp+54h] [ebp-14h]
  struct tagRECT Rect; // [esp+58h] [ebp-10h] BYREF

  v1 = 0; /*0x621e9c*/
  v3 = 0; /*0x621ea0*/
  v30 = (int)hWnd; /*0x621ea4*/
  v28 = (int)hWnd; /*0x621ea8*/
  if ( *(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x621eac*/
  {
    v4 = *(unsigned int **)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x621ec3*/
                    + 4 * HashTable::ComputeHash((int *)&g_DialogPool.__pad_208[56], (int)&v28));
    if ( v4 ) /*0x621ec8*/
    {
      while ( *v4 != v28 ) /*0x621ed0*/
      {
        v4 = (unsigned int *)v4[129]; /*0x621ed2*/
        if ( !v4 ) /*0x621eda*/
          goto LABEL_7; /*0x621eda*/
      }
      v3 = v4 + 1; /*0x621ee2*/
    }
  }
LABEL_7:
  if ( v3 ) /*0x621ee7*/
  {
    GetClientRect((HWND)hWnd, &Rect); /*0x621ef3*/
    ScreenDialogToClient((HWND)hWnd, &v38); /*0x621eff*/
    left = v38.left; /*0x621f10*/
    right = v38.right - v38.left; /*0x621f14*/
    top = v38.top; /*0x621f1a*/
    bottom = v38.bottom - v38.top; /*0x621f1e*/
    v36 = v38.right - v38.left; /*0x621f24*/
    v37 = v38.bottom - v38.top; /*0x621f2a*/
    if ( v38.right - v38.left <= Rect.right ) /*0x621f2e*/
    {
      right = Rect.right; /*0x621f30*/
      v36 = Rect.right; /*0x621f32*/
    }
    if ( bottom <= Rect.bottom ) /*0x621f3c*/
    {
      bottom = Rect.bottom; /*0x621f3e*/
      v37 = Rect.bottom; /*0x621f40*/
    }
    if ( !v3[8] ) /*0x621f44*/
    {
      v7 = v3[4]; /*0x621f4d*/
      if ( !v7 ) /*0x621f52*/
      {
        v7 = __2_YAPAXI_Z(0x20u); /*0x621f5b*/
        if ( v7 ) /*0x621f62*/
        {
          v8 = Rect.right; /*0x621f64*/
          v9 = Rect.bottom; /*0x621f68*/
          *(unsigned int *)(v7 + 4) = Rect.right; /*0x621f6c*/
          *(unsigned int *)(v7 + 8) = v9; /*0x621f74*/
          *(unsigned int *)(v7 + 12) = 0; /*0x621f7c*/
          *(unsigned int *)v7 = &XSurface_Vtable; /*0x621f7f*/
          *(unsigned int *)(v7 + 16) = 2; /*0x621f85*/
          ((Buffer*)((Buffer *)(v7 + 20)))->Init(0, 2 * v9 * v8); /*0x621f8c*/
          *(unsigned int *)v7 = &BSurface_Vtable; /*0x621f91*/
        }
        else
        {
          v7 = 0; /*0x621f99*/
        }
        v3[4] = v7; /*0x621f9b*/
        bottom = v37; /*0x621fa3*/
        ++g_GameScreenState; /*0x621fa8*/
        right = v36; /*0x621fad*/
      }
      v10 = v3[44]; /*0x621fb1*/
      if ( v10 == 1 ) /*0x621fba*/
      {
        if ( (uint8_t)((SessionClass *)((SessionClass *)&dword_A8B238))->GetGameSpeed() ) /*0x621fc5*/
        {
          RenderCreditsScreen(v7, &left, 0); /*0x621fd5*/
        }
        else if ( UI_Draw_72E260() ) /*0x621fdf*/
        {
          RenderScoreScreen((int *)v7, &left, *((unsigned char *)v3 + 212) == 0); /*0x621ffe*/
          v29 = hWnd; /*0x62200a*/
          if ( *(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x62200e*/
          {
            v11 = *(Dialog ***)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x62202f*/
                              + 4
                              * ((*(int (**)(Dialog **))&g_DialogPool.__pad_208[80])(&v29)
                               & ((1 << g_DialogPool.__pad_208[68]) - 1)));
            if ( v11 ) /*0x622034*/
            {
              while ( *v11 != v29 ) /*0x62203c*/
              {
                v11 = (Dialog **)v11[129]; /*0x62203e*/
                if ( !v11 ) /*0x622046*/
                  goto LABEL_29; /*0x622046*/
              }
              v12 = v11 + 1; /*0x62204e*/
              if ( v12 ) /*0x622053*/
                v1 = v12[29]; /*0x622055*/
            }
          }
LABEL_29:
          v29 = hWnd; /*0x622058*/
          if ( !*(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x622063*/
            goto LABEL_33; /*0x622063*/
          v13 = *(Dialog ***)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x622084*/
                            + 4
                            * ((*(int (**)(Dialog **))&g_DialogPool.__pad_208[80])(&v29)
                             & ((1 << g_DialogPool.__pad_208[68]) - 1)));
          if ( !v13 ) /*0x622089*/
            goto LABEL_33; /*0x622089*/
          while ( *v13 != v29 ) /*0x622091*/
          {
            v13 = (Dialog **)v13[129]; /*0x622093*/
            if ( !v13 ) /*0x62209b*/
              goto LABEL_33; /*0x62209b*/
          }
          v16 = v13 + 1; /*0x6220ee*/
          if ( v16 ) /*0x6220f3*/
            v14 = v16[56]; /*0x6220f5*/
          else
LABEL_33:
            v14 = 0; /*0x62209d*/
          v29 = (Dialog *)v30; /*0x6220aa*/
          if ( !*(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x6220ae*/
            goto LABEL_43; /*0x6220ae*/
          v15 = *(Dialog ***)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x6220cf*/
                            + 4
                            * ((*(int (**)(Dialog **))&g_DialogPool.__pad_208[80])(&v29)
                             & ((1 << g_DialogPool.__pad_208[68]) - 1)));
          if ( !v15 ) /*0x6220d4*/
            goto LABEL_43; /*0x6220d4*/
          while ( *v15 != v29 ) /*0x6220dc*/
          {
            v15 = (Dialog **)v15[129]; /*0x6220de*/
            if ( !v15 ) /*0x6220e6*/
              goto LABEL_43; /*0x6220e6*/
          }
          v17 = v15 + 1; /*0x622101*/
          if ( v17 ) /*0x622106*/
            v18 = v17[57]; /*0x622108*/
          else
LABEL_43:
            v18 = 0; /*0x622110*/
          UI_Draw_72E730(v7, &left, v1, v14, v18); /*0x62211b*/
          if ( *((unsigned char *)v3 + 213) ) /*0x622120*/
            UI_Draw_72E8C0(v7, &left); /*0x622130*/
          if ( *((unsigned char *)v3 + 214) ) /*0x622135*/
            UI_Draw_72E860(v7, &left); /*0x622145*/
          if ( *(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x622159*/
          {
            v19 = *(unsigned int **)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x62217e*/
                             + 4
                             * ((*(int (**)(int *))&g_DialogPool.__pad_208[80])(&v30)
                              & ((1 << g_DialogPool.__pad_208[68]) - 1)));
            if ( v19 ) /*0x622183*/
            {
              while ( *v19 != v30 ) /*0x62218f*/
              {
                v19 = (unsigned int *)v19[129]; /*0x622191*/
                if ( !v19 ) /*0x622199*/
                  goto LABEL_72; /*0x622199*/
              }
              v20 = v19 + 1; /*0x6221a8*/
              if ( v20 && *((unsigned char *)v20 + 215) ) /*0x6221b3*/
                UI_Draw_72E920(v7, &left); /*0x6221c7*/
            }
          }
        }
      }
      else if ( v10 == 2 ) /*0x6221d4*/
      {
        v42 = bottom; /*0x6221de*/
        v39 = left; /*0x6221e2*/
        v40 = top; /*0x6221f0*/
        v41 = right; /*0x622200*/
        v21 = *(unsigned int *)v7; /*0x622204*/
        v39 = 0; /*0x62220a*/
        v40 = 0; /*0x62220e*/
        (*(void (**)(int, int *, DSurface *, LONG *, unsigned int, int))(v21 + 8))( /*0x622212*/
          v7,
          &v39,
          DSurface_Alternate,
          &left,
          0,
          1);
        if ( (uint8_t)((SessionClass *)((SessionClass *)&dword_A8B238))->GetGameSpeed() ) /*0x62221a*/
        {
          NeedsSaveOrLink = dword_A8B230[374].NeedsSaveOrLink; /*0x622229*/
          if ( NeedsSaveOrLink ) /*0x622231*/
          {
            if ( NeedsSaveOrLink == (void *)1 ) /*0x622243*/
            {
              v23 = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1240]; /*0x622245*/
              v24 = UI_Draw_72AFF0(); /*0x62224b*/
            }
            else
            {
              v23 = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1244]; /*0x622252*/
              v24 = UI_Draw_72B010(); /*0x622258*/
            }
          }
          else
          {
            v23 = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1236]; /*0x622233*/
            v24 = UI_Draw_72AFF0(); /*0x622239*/
          }
        }
        else
        {
          v23 = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1232]; /*0x62225f*/
          v24 = UI_Draw_72B030(); /*0x622265*/
        }
        v30 = 0; /*0x62226c*/
        v31 = 0; /*0x622270*/
        if ( v24 && v23 ) /*0x62227c*/
          DrawToSurfaceSHP(v7, v24, v23, 0, &v30, &v39, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6222a8*/
      }
      else
      {
        v25 = HashTable::Find(&g_DialogHashTable, off_833654, 0); /*0x6222d3*/
        v42 = v37; /*0x6222d9*/
        v33 = v37; /*0x6222dd*/
        v30 = left; /*0x6222e9*/
        v31 = top; /*0x6222ed*/
        v41 = v36; /*0x6222f5*/
        v32 = v36; /*0x6222f9*/
        v39 = left - v38.left; /*0x6222fd*/
        v40 = top - v38.top; /*0x622301*/
        v26 = (*(int (**)(int))(*(unsigned int *)v25 + 124))(v25); /*0x62230c*/
        v27 = (*(int (**)(int))(*(unsigned int *)v25 + 128))(v25); /*0x622318*/
        if ( (int)g_DisplayWidth > v26 ) /*0x622321*/
          v30 += (int)&g_DisplayWidth->__pad_0[-v26] / -2; /*0x622332*/
        if ( (int)*(&g_DisplayWidth + 1) > v27 ) /*0x62233d*/
          v31 += (int)&(*(&g_DisplayWidth + 1))->__pad_0[-v27] / -2; /*0x62234e*/
        (*(void (**)(int, int *, int, int *, unsigned int, int))(*(unsigned int *)v7 + 8))(v7, &v39, v25, &v30, 0, 1); /*0x622365*/
      }
LABEL_72:
      if ( v7 ) /*0x62236a*/
      {
        v41 = v36; /*0x622380*/
        v42 = v37; /*0x62238a*/
        v40 = top - v38.top; /*0x622392*/
        v39 = left - v38.left; /*0x6223a7*/
        (*((void (**)(DSurface *, LONG *, int, int *, unsigned int, int))DSurface_Alternate->DSurface_field_0x0 + 2))( /*0x6223b3*/
          DSurface_Alternate,
          &left,
          v7,
          &v39,
          0,
          1);
      }
    }
  }

}
}
// 0x622720
namespace gamemd {
int Dialog::Destroy()
{

  int result; // eax
  Dialog **i; // ecx
  int v4; // eax
  int v5; // eax
  HWND v6; // ecx
  int v7; // eax
  Dialog *v8; // [esp+0h] [ebp-8h]

  ((Timer*)(*(Timer **)&stru_87F5F0.__pad_58[296]))->PumpMessages(); /*0x62272a*/
  Dialog::IdleProcess(v8, (ObjectClass *)this); /*0x622731*/
  DestroyWindow((HWND)this); /*0x622737*/
  result = 0; /*0x622745*/
  if ( g_DialogTrackingList > 0 ) /*0x622749*/
  {
    for ( i = (Dialog **)&stru_B72D28; *i != this; i += 2 ) /*0x62274f*/
    {
      if ( ++result >= g_DialogTrackingList ) /*0x62275e*/
        return result; /*0x62275e*/
    }
    memcpy( /*0x622783*/
      (void *)(8 * result + 12004648),
      (const void *)(8 * result + 12004656),
      8 * (g_DialogTrackingList + 0x1FFFFFFF * (result + 1)));
    v4 = g_DialogTrackingList; /*0x622788*/
    *(&g_ClipboardBuffer + 2 * g_DialogTrackingList) = 0; /*0x622790*/
    dword_B72D24[2 * v4] = 0; /*0x622797*/
    v5 = v4 - 1; /*0x62279e*/
    g_DialogTrackingList = v5; /*0x6227a1*/
    if ( v5 <= 0 ) /*0x6227a6*/
    {
      hWnd = 0; /*0x6227de*/
      dword_B72F48 = 0; /*0x6227e5*/
      SetForegroundWindow(g_hWnd); /*0x6227eb*/
      return (int)SetFocus(g_hWnd); /*0x6227f7*/
    }
    else
    {
      v6 = *(&g_ClipboardBuffer + 2 * v5); /*0x6227a8*/
      v7 = dword_B72D24[2 * v5]; /*0x6227af*/
      hWnd = v6; /*0x6227b7*/
      dword_B72F48 = v7; /*0x6227bd*/
      SetForegroundWindow(v6); /*0x6227c2*/
      return (int)SetFocus(hWnd); /*0x6227cf*/
    }
  }
  return result; /*0x622760*/

}
}
// 0x6233A0
namespace gamemd {
CampaignClass * * Dialog::CleanupTree()
{

  int i; // ecx
  int *v3; // eax
  int *v4; // edx
  DeleteAndZero *Dialog_field_0x3C; // esi

  if ( this->Dialog_field_0x28 ) /*0x6233a3*/
  {
    __3_YAXPAX_Z(this->Dialog_field_0x28); /*0x6233ab*/
    this->Dialog_field_0x28 = 0; /*0x6233b3*/
  }
  for ( i = this->Dialog_field_0x34; i; i = this->Dialog_field_0x34 ) /*0x6233bf*/
  {
    v3 = (int *)i; /*0x6233c1*/
    v4 = 0; /*0x6233c3*/
    while ( (int *)i != v3 ) /*0x6233cb*/
    {
      v4 = v3; /*0x6233cd*/
      v3 = (int *)*v3; /*0x6233cf*/
      if ( !v3 ) /*0x6233d3*/
        goto LABEL_12; /*0x6233d3*/
    }
    if ( v4 ) /*0x6233dd*/
      *v4 = *v3; /*0x6233e1*/
    else
      this->Dialog_field_0x34 = *v3; /*0x6233e7*/
    __3_YAXPAX_Z(v3); /*0x6233eb*/
LABEL_12:
    ; /*0x6233f3*/
  }
  Dialog_field_0x3C = (DeleteAndZero *)this->Dialog_field_0x3C; /*0x6233fa*/
  if ( Dialog_field_0x3C ) /*0x6233ff*/
  {
    ((DeleteAndZero*)Dialog_field_0x3C)->Alt(); /*0x623403*/
    __3_YAXPAX_Z(Dialog_field_0x3C); /*0x623409*/
  }

}
}
// 0x624930
namespace gamemd {
int Dialog::UpdateControlState(unsigned int * a2, unsigned int * a3)
{

  unsigned int *v4; // eax

  if ( !*(unsigned int *)&this->__pad_0[4] ) /*0x624934*/
    return 0; /*0x62493c*/
  v4 = *(unsigned int **)(*(unsigned int *)this->__pad_0 /*0x62495a*/
                  + 4
                  * ((*(int (**)(unsigned int *))&this->__pad_10[8])(a2) & ((1 << (int)this->Dialog_field_0xC) - 1)));
  if ( !v4 ) /*0x62495f*/
    return 0; /*0x624962*/
  while ( *v4 != *a2 ) /*0x62496c*/
  {
    v4 = (unsigned int *)v4[2]; /*0x62496e*/
    if ( !v4 ) /*0x624973*/
      return 0; /*0x624979*/
  }
  *a3 = v4 + 1; /*0x624990*/
  return 1; /*0x62493b*/

}
}
// 0x624BE0
namespace gamemd {
AbstractClass * * Dialog::GrowBuffer()
{

  int v2; // esi
  unsigned int *v3; // ebp
  AnimClass *v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  unsigned int *v13; // [esp+4h] [ebp-4h]

  if ( this->__pad_10[4] != 1 ) /*0x624be8*/
  {
    v2 = this->Dialog_field_0x8[0]; /*0x624bf0*/
    v3 = *(unsigned int **)this->__pad_0; /*0x624bf3*/
    v4 = (AnimClass *)((char *)&this->Dialog_field_0xC->AnimClass_field_0x0 + 1); /*0x624bfc*/
    this->Dialog_field_0x8[0] = 2 * v2; /*0x624bfd*/
    v13 = v3; /*0x624c00*/
    this->Dialog_field_0xC = v4; /*0x624c08*/
    v5 = (void *)__2_YAPAXI_Z(8 * v2); /*0x624c13*/
    v6 = 4 * this->Dialog_field_0x8[0]; /*0x624c18*/
    *(unsigned int *)this->__pad_0 = v5; /*0x624c1f*/
    memset(v5, 0, v6); /*0x624c24*/
    if ( v2 > 0 ) /*0x624c2f*/
    {
      v7 = v3; /*0x624c31*/
      v8 = v2; /*0x624c33*/
      do /*0x624c67*/
      {
        v9 = *v7; /*0x624c35*/
        if ( *v7 ) /*0x624c35*/
        {
          do /*0x624c61*/
          {
            v10 = (*(int (**)(int))&this->__pad_10[8])(v9) & ((1 << (int)this->Dialog_field_0xC) - 1); /*0x624c4b*/
            v11 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10); /*0x624c4f*/
            *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10) = v9; /*0x624c55*/
            v12 = *(unsigned int *)(v9 + 8); /*0x624c57*/
            *(unsigned int *)(v9 + 8) = v11; /*0x624c5a*/
            v9 = v12; /*0x624c5d*/
          }
          while ( v12 ); /*0x624c61*/
        }
        ++v7; /*0x624c63*/
        --v8; /*0x624c66*/
      }
      while ( v8 ); /*0x624c67*/
      v3 = v13; /*0x624c69*/
    }
    __3_YAXPAX_Z(v3); /*0x624c6e*/
  }

}
}
// 0x624CA0
namespace gamemd {
AbstractClass * * Dialog::BindGadgetData(int *a2, char *Block)
{

  int v4; // eax
  int v6; // edx
  int *v7; // ecx
  int v8; // eax
  int ***v10; // eax
  bool v11; // zf
  const wchar_t *v12; // esi
  int v13; // eax
  wchar_t *v14; // eax
  int v15; // edi
  int v16; // ebx
  unsigned int *i; // eax
  DeleteAndZero *v18; // esi
  bool v19; // c0
  bool v20; // c3
  unsigned int v21; // esi
  char *v22; // ebx
  AnimClass *v23; // ecx
  void *v24; // edi
  unsigned int v25; // edx
  char *v26; // edi
  unsigned int v27; // ebx
  int v28; // esi
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  int *v32; // esi
  char v33; // bl
  int v35; // edx
  int *v36; // [esp+10h] [ebp-14h]
  int v37; // [esp+10h] [ebp-14h]
  int v38; // [esp+14h] [ebp-10h]
  float v39; // [esp+18h] [ebp-Ch]
  int v40; // [esp+1Ch] [ebp-8h]
  int v41; // [esp+1Ch] [ebp-8h]
  int *v42; // [esp+28h] [ebp+4h]
  int *v43; // [esp+28h] [ebp+4h]
  char *Blocka; // [esp+2Ch] [ebp+8h]
  char *Blockb; // [esp+2Ch] [ebp+8h]
  char *Blockc; // [esp+2Ch] [ebp+8h]

  v4 = *(unsigned int *)&this->__pad_0[4]; /*0x624cab*/
  if ( !v4 ) /*0x624cb0*/
    return 0; /*0x624cb5*/
  v39 = (double)(unsigned int)(v4 - 1) / (double)this->Dialog_field_0x8[0]; /*0x624ce0*/
  v6 = (*(int (**)(int *))&this->__pad_10[8])(a2) & ((1 << (int)this->Dialog_field_0xC) - 1); /*0x624cf5*/
  v38 = v6; /*0x624cf7*/
  v7 = *(int **)(*(unsigned int *)this->__pad_0 + 4 * v6); /*0x624cfb*/
  v36 = v7; /*0x624d00*/
  if ( !v7 ) /*0x624d04*/
    return 0; /*0x624d09*/
  v8 = *a2; /*0x624d12*/
  if ( *v7 == *a2 ) /*0x624d18*/
  {
    v10 = (int ***)(v7 + 1); /*0x624d22*/
    v11 = Block == (char *)(v7 + 1); /*0x624d25*/
    v42 = v7 + 1; /*0x624d27*/
    v40 = *((unsigned int *)Block + 13); /*0x624d2e*/
    Blocka = (char *)*((unsigned int *)Block + 10); /*0x624d35*/
    v37 = *((unsigned int *)Block + 15); /*0x624d3c*/
    if ( !v11 ) /*0x624d40*/
    {
      qmemcpy(Block, v10, 0x200u); /*0x624d4f*/
      *((unsigned int *)Block + 15) = v37; /*0x624d55*/
      *((unsigned int *)Block + 10) = Blocka; /*0x624d5c*/
      *((unsigned int *)Block + 13) = v40; /*0x624d5f*/
      v12 = (const wchar_t *)v7[11]; /*0x624d62*/
      if ( Blocka ) /*0x624d67*/
      {
        __3_YAXPAX_Z(Blocka); /*0x624d6a*/
        v10 = (int ***)v42; /*0x624d6f*/
        *((unsigned int *)Block + 10) = 0; /*0x624d76*/
      }
      if ( v12 && *v12 ) /*0x624d81*/
      {
        v13 = wcslen(v12); /*0x624d88*/
        v14 = (wchar_t *)__2_YAPAXI_Z(2 * v13 + 2); /*0x624d92*/
        *((unsigned int *)Block + 10) = v14; /*0x624d99*/
        wcscpy(v14, v12); /*0x624d9c*/
        v10 = (int ***)v42; /*0x624da1*/
      }
      SymbolTable::Rebuild((SymbolTable *)Block, v10[13]); /*0x624dae*/
      v6 = v38; /*0x624db3*/
    }
    v15 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v6); /*0x624dba*/
    v16 = *(unsigned int *)(v15 + 516); /*0x624dbf*/
    if ( v15 ) /*0x624dc5*/
    {
      GadgetClass::SetTooltip((GadgetClass *)(v15 + 4), 0); /*0x624dce*/
      for ( i = *(unsigned int **)(v15 + 56); i; i = *(unsigned int **)(v15 + 56) ) /*0x624dd8*/
        LinkedList::Remove((LinkedList *)(v15 + 4), i); /*0x624ddd*/
      v18 = *(DeleteAndZero **)(v15 + 64); /*0x624de9*/
      if ( v18 ) /*0x624dee*/
        DeleteAndZero::OrFree(v18, 1); /*0x624df4*/
      __3_YAXPAX_Z((void *)v15); /*0x624dfa*/
      v6 = v38; /*0x624dff*/
    }
    *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v6) = v16; /*0x624e0d*/
    v19 = v39 < *(double *)&this->__pad_10[16]; /*0x624e13*/
    v20 = v39 == *(double *)&this->__pad_10[16]; /*0x624e13*/
    --*(unsigned int *)&this->__pad_0[4]; /*0x624e17*/
    if ( v19 || v20 ) /*0x624e1c*/
    {
      v21 = this->Dialog_field_0x8[0]; /*0x624e25*/
      if ( v21 > *(unsigned int *)&this->__pad_2C[4] && this->__pad_10[4] != 1 ) /*0x624e37*/
      {
        v22 = *(char **)this->__pad_0; /*0x624e40*/
        Blockb = *(char **)this->__pad_0; /*0x624e45*/
        v23 = (AnimClass *)((char *)this->Dialog_field_0xC - 1); /*0x624e4b*/
        this->Dialog_field_0x8[0] = v21 >> 1; /*0x624e4c*/
        this->Dialog_field_0xC = v23; /*0x624e56*/
        v24 = (void *)__2_YAPAXI_Z(4 * (v21 >> 1)); /*0x624e62*/
        v25 = 4 * this->Dialog_field_0x8[0]; /*0x624e67*/
        *(unsigned int *)this->__pad_0 = v24; /*0x624e6e*/
        memset(v24, 0, v25); /*0x624e74*/
        if ( (int)v21 > 0 ) /*0x624e7f*/
        {
          v26 = v22; /*0x624e81*/
          v27 = v21; /*0x624e83*/
          do /*0x624ebe*/
          {
            v28 = *(unsigned int *)v26; /*0x624e85*/
            if ( *(unsigned int *)v26 ) /*0x624e85*/
            {
              do /*0x624eb8*/
              {
                v29 = (*(int (**)(int))&this->__pad_10[8])(v28) & ((1 << (int)this->Dialog_field_0xC) - 1); /*0x624e9b*/
                v30 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v29); /*0x624ea0*/
                *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v29) = v28; /*0x624ea6*/
                v31 = *(unsigned int *)(v28 + 516); /*0x624ea8*/
                *(unsigned int *)(v28 + 516) = v30; /*0x624eae*/
                v28 = v31; /*0x624eb4*/
              }
              while ( v31 ); /*0x624eb8*/
            }
            v26 += 4; /*0x624eba*/
            --v27; /*0x624ebd*/
          }
          while ( v27 ); /*0x624ebe*/
          v22 = Blockb; /*0x624ec0*/
        }
        __3_YAXPAX_Z(v22); /*0x624ec5*/
      }
    }
    return 1; /*0x624ed0*/
  }
  else
  {
    v32 = (int *)v7[129]; /*0x624ed9*/
    v33 = 0; /*0x624edf*/
    v43 = v32; /*0x624ee3*/
    if ( v32 ) /*0x624ee7*/
    {
      while ( *v32 != v8 ) /*0x624ef9*/
      {
        v36 = v32; /*0x624efb*/
        v43 = (int *)v32[129]; /*0x624f07*/
        if ( !v43 ) /*0x624f0b*/
          goto LABEL_41; /*0x624f0b*/
        v7 = v32; /*0x624eef*/
        v32 = (int *)v32[129]; /*0x624ef3*/
      }
      v11 = Block == (char *)(v32 + 1); /*0x624f19*/
      v35 = *((unsigned int *)Block + 13); /*0x624f1e*/
      Blockc = (char *)*((unsigned int *)Block + 10); /*0x624f21*/
      v41 = *((unsigned int *)Block + 15); /*0x624f28*/
      if ( !v11 ) /*0x624f2c*/
      {
        qmemcpy(Block, v32 + 1, 0x200u); /*0x624f37*/
        *((unsigned int *)Block + 13) = v35; /*0x624f3d*/
        *((unsigned int *)Block + 10) = Blockc; /*0x624f40*/
        *((unsigned int *)Block + 15) = v41; /*0x624f47*/
        GadgetClass::SetTooltip((GadgetClass *)Block, (wchar_t *)v32[11]); /*0x624f50*/
        SymbolTable::Rebuild((SymbolTable *)Block, (int **)v43[14]); /*0x624f62*/
        v7 = v36; /*0x624f67*/
        v32 = v43; /*0x624f6b*/
      }
      v7[129] = v32[129]; /*0x624f75*/
      --*(unsigned int *)&this->__pad_0[4]; /*0x624f81*/
      if ( v32 ) /*0x624f84*/
      {
        Dialog::CleanupTree((Dialog *)(v32 + 1)); /*0x624f89*/
        __3_YAXPAX_Z(v32); /*0x624f8f*/
      }
      v33 = 1; /*0x624f97*/
    }
LABEL_41:
    if ( v39 <= *(double *)&this->__pad_10[16] ) /*0x624fa5*/
      HashTable::Rebuild2((HashTable *)this); /*0x624fa9*/
    return v33; /*0x624fb0*/
  }

}
}
// 0x671EA0
namespace gamemd {
INIClass * * Dialog::ReadMultiplayerDialogSettings()
{

  int result; // eax
  int Int_Overwrite; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  char v16; // dl
  char Bool_Overwrite; // al
  char v18; // cl
  char v19; // al
  char v20; // dl
  char v21; // al
  char v22; // cl
  char v23; // al
  char v24; // dl
  char v25; // al
  char v26; // cl
  char v27; // al
  char v28; // dl
  char v29; // al
  char v30; // cl
  char v31; // al
  char v32; // dl
  char v33; // al
  char v34; // cl
  char v35; // al
  char v36; // dl
  bool *v37; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v37, (uint8_t *)aMultiplayerdia); /*0x671eb0*/
  if ( result ) /*0x671ebc*/
  {
    *((unsigned int *)this + 1312) = INIClass::ReadInt_Overwrite( /*0x671edc*/
                                 v37,
                                 (uint8_t *)aMultiplayerdia,
                                 aMinmoney,
                                 *((unsigned int *)this + 1312));
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x671ef7*/
                      v37,
                      (uint8_t *)aMultiplayerdia,
                      aMoney,
                      *((unsigned int *)this + 1313));
    v4 = *((unsigned int *)this + 1314); /*0x671efc*/
    *((unsigned int *)this + 1313) = Int_Overwrite; /*0x671f02*/
    v5 = ((INIClass *)(v37))->ReadInt_Overwrite((uint8_t *)aMultiplayerdia, aMaxmoney, v4); /*0x671f16*/
    v6 = *((unsigned int *)this + 1315); /*0x671f1b*/
    *((unsigned int *)this + 1314) = v5; /*0x671f21*/
    *((unsigned int *)this + 1315) = ((INIClass *)(v37))->ReadInt_Overwrite((uint8_t *)aMultiplayerdia, aMoneyincrement, v6); /*0x671f3b*/
    v7 = ((INIClass *)(v37))->ReadInt_Overwrite((uint8_t *)aMultiplayerdia, aMinunitcount, *((unsigned int *)this + 1316)); /*0x671f56*/
    v8 = *((unsigned int *)this + 1317); /*0x671f5b*/
    *((unsigned int *)this + 1316) = v7; /*0x671f61*/
    v9 = INIClass::ReadInt_Overwrite( /*0x671f75*/
           v37,
           (uint8_t *)aMultiplayerdia,
           (uint8_t *)g_INI_Key_UnitCount,
           v8);
    v10 = *((unsigned int *)this + 1318); /*0x671f7a*/
    *((unsigned int *)this + 1317) = v9; /*0x671f80*/
    *((unsigned int *)this + 1318) = ((INIClass *)(v37))->ReadInt_Overwrite((uint8_t *)aMultiplayerdia, aMaxunitcount, v10); /*0x671f9a*/
    v11 = INIClass::ReadInt_Overwrite( /*0x671fb5*/
            v37,
            (uint8_t *)aMultiplayerdia,
            (uint8_t *)g_INI_Key_TechLevel,
            *((unsigned int *)this + 1319));
    v12 = *((unsigned int *)this + 1320); /*0x671fba*/
    *((unsigned int *)this + 1319) = v11; /*0x671fc0*/
    v13 = INIClass::ReadInt_Overwrite( /*0x671fd4*/
            v37,
            (uint8_t *)aMultiplayerdia,
            (uint8_t *)g_INI_Key_GameSpeed,
            v12);
    v14 = *((unsigned int *)this + 1321); /*0x671fd9*/
    *((unsigned int *)this + 1320) = v13; /*0x671fdf*/
    *((unsigned int *)this + 1321) = ((INIClass *)(v37))->ReadInt_Overwrite((uint8_t *)aMultiplayerdia, aAidifficulty, v14); /*0x671ff9*/
    v15 = ((INIClass *)(v37))->ReadInt_Overwrite((uint8_t *)aMultiplayerdia, aAiplayers, *((unsigned int *)this + 1322)); /*0x672014*/
    v16 = *((unsigned char *)this + 5292); /*0x672019*/
    *((unsigned int *)this + 1322) = v15; /*0x67201f*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)v37, (uint8_t *)aMultiplayerdia, aBridgedestruct, v16); /*0x672033*/
    v18 = *((unsigned char *)this + 5293); /*0x672038*/
    *((unsigned char *)this + 5292) = Bool_Overwrite; /*0x67203e*/
    *((unsigned char *)this + 5293) = INIClass::ReadBool_Overwrite( /*0x672058*/
                                (int *)v37,
                                (uint8_t *)aMultiplayerdia,
                                aShadowgrow,
                                v18);
    v19 = INIClass::ReadBool_Overwrite((int *)v37, (uint8_t *)aMultiplayerdia, aShroud, *((unsigned char *)this + 5294)); /*0x672073*/
    v20 = *((unsigned char *)this + 5295); /*0x672078*/
    *((unsigned char *)this + 5294) = v19; /*0x67207e*/
    v21 = INIClass::ReadBool_Overwrite((int *)v37, (uint8_t *)aMultiplayerdia, aBases, v20); /*0x672092*/
    v22 = *((unsigned char *)this + 5296); /*0x672097*/
    *((unsigned char *)this + 5295) = v21; /*0x67209d*/
    *((unsigned char *)this + 5296) = INIClass::ReadBool_Overwrite( /*0x6720b7*/
                                (int *)v37,
                                (uint8_t *)aMultiplayerdia,
                                (uint8_t *)g_INI_Key_TiberiumGrows,
                                v22);
    v23 = INIClass::ReadBool_Overwrite((int *)v37, (uint8_t *)aMultiplayerdia, aCrates, *((unsigned char *)this + 5297)); /*0x6720d2*/
    v24 = *((unsigned char *)this + 5298); /*0x6720d7*/
    *((unsigned char *)this + 5297) = v23; /*0x6720dd*/
    v25 = INIClass::ReadBool_Overwrite((int *)v37, (uint8_t *)aMultiplayerdia, aCapturetheflag, v24); /*0x6720f1*/
    v26 = *((unsigned char *)this + 5299); /*0x6720f6*/
    *((unsigned char *)this + 5298) = v25; /*0x6720fc*/
    *((unsigned char *)this + 5299) = INIClass::ReadBool_Overwrite( /*0x672116*/
                                (int *)v37,
                                (uint8_t *)aMultiplayerdia,
                                aHarvestertruce,
                                v26);
    v27 = INIClass::ReadBool_Overwrite( /*0x672131*/
            (int *)v37,
            (uint8_t *)aMultiplayerdia,
            aMultiengineer,
            *((unsigned char *)this + 5300));
    v28 = *((unsigned char *)this + 5301); /*0x672136*/
    *((unsigned char *)this + 5300) = v27; /*0x67213c*/
    v29 = INIClass::ReadBool_Overwrite((int *)v37, (uint8_t *)aMultiplayerdia, aAlliesallowed, v28); /*0x672150*/
    v30 = *((unsigned char *)this + 5307); /*0x672155*/
    *((unsigned char *)this + 5301) = v29; /*0x67215b*/
    *((unsigned char *)this + 5307) = INIClass::ReadBool_Overwrite( /*0x672175*/
                                (int *)v37,
                                (uint8_t *)aMultiplayerdia,
                                aAllychangeallo,
                                v30);
    v31 = INIClass::ReadBool_Overwrite( /*0x672190*/
            (int *)v37,
            (uint8_t *)aMultiplayerdia,
            (uint8_t *)g_INI_Key_ShortGame,
            *((unsigned char *)this + 5302));
    v32 = *((unsigned char *)this + 5305); /*0x672195*/
    *((unsigned char *)this + 5302) = v31; /*0x67219b*/
    v33 = INIClass::ReadBool_Overwrite( /*0x6721af*/
            (int *)v37,
            (uint8_t *)aMultiplayerdia,
            (uint8_t *)g_INI_Key_SuperWeaponsAllowed,
            v32);
    v34 = *((unsigned char *)this + 5306); /*0x6721b4*/
    *((unsigned char *)this + 5305) = v33; /*0x6721ba*/
    *((unsigned char *)this + 5306) = INIClass::ReadBool_Overwrite( /*0x6721d4*/
                                (int *)v37,
                                (uint8_t *)aMultiplayerdia,
                                (uint8_t *)g_INI_Key_BuildOffAlly,
                                v34);
    v35 = INIClass::ReadBool_Overwrite( /*0x6721ef*/
            (int *)v37,
            (uint8_t *)aMultiplayerdia,
            (uint8_t *)g_INI_Key_FogOfWar,
            *((unsigned char *)this + 5303));
    v36 = *((unsigned char *)this + 5304); /*0x6721f4*/
    *((unsigned char *)this + 5303) = v35; /*0x6721fa*/
    result = INIClass::ReadBool_Overwrite((int *)v37, (uint8_t *)aMultiplayerdia, aMcvredeploys, v36); /*0x67220e*/
    *((unsigned char *)this + 5304) = result; /*0x672213*/
    LOBYTE(result) = 1; /*0x67221a*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x672221*/
  }
  return result; /*0x672219*/

}
}
// 0x775940
namespace gamemd {
int Dialog::FindByHandle()
{

  int v1; // eax
  Dialog **i; // edx

  v1 = g_DialogTrackingList - 1; /*0x775945*/
  if ( g_DialogTrackingList - 1 < 0 ) /*0x775948*/
    return 0; /*0x77595d*/
  for ( i = (Dialog **)(8 * v1 + 12004652); this != *i; i -= 2 ) /*0x77594a*/
  {
    if ( --v1 < 0 ) /*0x77595b*/
      return 0; /*0x77595b*/
  }
  return *((unsigned int *)&stru_B72D28.AbstractClass + 2 * v1); /*0x77595f*/

}
}
// 0x775B10
namespace gamemd {
int Dialog::GetCurrent()
{

  return (int)hWnd; /*0x775b15*/

}
}
// 0x775B20
namespace gamemd {
int Dialog::GetCurrentType()
{

  return dword_B72F48; /*0x775b25*/

}
}
// 0x4E4EC0
namespace gamemd {
int Dialog::SideIDToIndex()
{

  int v2; // eax

  if ( this == (Dialog *)1699 ) /*0x4e4ec7*/
    return 0; /*0x4e4ec9*/
  if ( this == (Dialog *)1700 ) /*0x4e4ed1*/
    return 1; /*0x4e4ed3*/
  if ( this == (Dialog *)1701 ) /*0x4e4ede*/
    return 2; /*0x4e4ee0*/
  if ( this == (Dialog *)1702 ) /*0x4e4eeb*/
    return 3; /*0x4e4eed*/
  if ( this == (Dialog *)1703 ) /*0x4e4ef8*/
    return 4; /*0x4e4efa*/
  if ( this == (Dialog *)1704 ) /*0x4e4f05*/
    return 5; /*0x4e4f07*/
  if ( this == (Dialog *)1706 ) /*0x4e4f12*/
    return 6; /*0x4e4f14*/
  v2 = -(this != (Dialog *)1707); /*0x4e4f21*/
  LOBYTE(v2) = v2 & 0xF8; /*0x4e4f23*/
  return v2 + 7; /*0x4e4ecb*/

}
} // namespace gamemd

// 0x4E59A0
namespace gamemd {
int Dialog::OptionIDToIndex()
{

  int v2; // eax

  if ( this == (Dialog *)1901 ) /*0x4e59a7*/
    return 0; /*0x4e59a9*/
  if ( this == (Dialog *)1902 ) /*0x4e59b1*/
    return 1; /*0x4e59b3*/
  if ( this == (Dialog *)1903 ) /*0x4e59be*/
    return 2; /*0x4e59c0*/
  if ( this == (Dialog *)1904 ) /*0x4e59cb*/
    return 3; /*0x4e59cd*/
  if ( this == (Dialog *)1905 ) /*0x4e59d8*/
    return 4; /*0x4e59da*/
  if ( this == (Dialog *)1906 ) /*0x4e59e5*/
    return 5; /*0x4e59e7*/
  if ( this == (Dialog *)1907 ) /*0x4e59f2*/
    return 6; /*0x4e59f4*/
  v2 = -(this != (Dialog *)1908); /*0x4e5a01*/
  LOBYTE(v2) = v2 & 0xF8; /*0x4e5a03*/
  return v2 + 7; /*0x4e59ab*/

}
} // namespace gamemd

// 0x5E26C0
namespace gamemd {
int Dialog::FindGameUI()
{

  int result; // eax

  result = ((Dialog*)((void *)0xC2))->FindByHandle(); /*0x5e26c5*/
  if ( !result ) /*0x5e26cc*/
  {
    result = ((Dialog*)((void *)0xC9))->FindByHandle(); /*0x5e26d3*/
    if ( !result ) /*0x5e26da*/
    {
      result = ((Dialog*)((void *)0xBC))->FindByHandle(); /*0x5e26e1*/
      if ( !result ) /*0x5e26e8*/
        return Dialog::FindByHandle((void *)0xBD); /*0x5e26ef*/
    }
  }
  return result; /*0x5e26f4*/

}
} // namespace gamemd

// 0x5E2700
namespace gamemd {
HWND Dialog::ShowMessage(ObjectClass * aP0, CampaignScore * BufferCount, ObjectClass Format, ...)
{

  int result; // eax
  HWND Current; // esi
  HWND DlgItem; // eax
  va_list v5; // [esp+0h] [ebp-808h]
  wchar_t Buffer[1024]; // [esp+8h] [ebp-800h] BYREF
  va_list Format; // [esp+814h] [ebp+Ch] BYREF

  va_start(Format, BufferCount);
  memset(Buffer, 0, sizeof(Buffer)); /*0x5e2717*/
  vswprintf(Buffer, BufferCount, (const wchar_t *const)Format, v5); /*0x5e272a*/
  result = Dialog::GetCurrent(); /*0x5e2732*/
  if ( result ) /*0x5e2739*/
  {
    Current = (HWND)Dialog::GetCurrent(); /*0x5e2746*/
    DlgItem = GetDlgItem(Current, 1343); /*0x5e274e*/
    if ( DlgItem ) /*0x5e2752*/
    {
      return DrawDialogText(aP0, Buffer, DlgItem); /*0x5e276d*/
    }
    else
    {
      while ( 1 ) /*0x5e2756*/
      {
        result = Dialog::FindByPtr(Current); /*0x5e2756*/
        Current = (HWND)result; /*0x5e275b*/
        if ( !result ) /*0x5e275f*/
          break; /*0x5e275f*/
        DlgItem = GetDlgItem((HWND)result, 1343); /*0x5e2767*/
        if ( DlgItem ) /*0x5e276b*/
          return DrawDialogText(aP0, Buffer, DlgItem); /*0x5e276b*/
      }
    }
  }
  return result; /*0x5e277e*/

}
} // namespace gamemd

// 0x5E2790
namespace gamemd {
HWND Dialog::ShowStatusText(SessionClass * aP0, CampaignScore * aP1, CampaignScore * aP2)
{

  int result; // eax
  HWND Current; // esi
  HWND DlgItem; // eax
  va_list v5; // [esp+0h] [ebp-808h]
  wchar_t Buffer[1024]; // [esp+8h] [ebp-800h] BYREF
  va_list Format; // [esp+814h] [ebp+Ch] BYREF

  va_start(Format, aP1);
  memset(Buffer, 0, sizeof(Buffer)); /*0x5e27a7*/
  vswprintf(Buffer, aP1, (const wchar_t *const)Format, v5); /*0x5e27ba*/
  result = Dialog::GetCurrent(); /*0x5e27c2*/
  if ( result ) /*0x5e27c9*/
  {
    Current = (HWND)Dialog::GetCurrent(); /*0x5e27d6*/
    DlgItem = GetDlgItem(Current, 1461); /*0x5e27de*/
    if ( DlgItem ) /*0x5e27e2*/
    {
      return DrawDialogText(aP0, Buffer, DlgItem); /*0x5e27fd*/
    }
    else
    {
      while ( 1 ) /*0x5e27e6*/
      {
        result = Dialog::FindByPtr(Current); /*0x5e27e6*/
        Current = (HWND)result; /*0x5e27eb*/
        if ( !result ) /*0x5e27ef*/
          break; /*0x5e27ef*/
        DlgItem = GetDlgItem((HWND)result, 1461); /*0x5e27f7*/
        if ( DlgItem ) /*0x5e27fb*/
          return DrawDialogText(aP0, Buffer, DlgItem); /*0x5e27fb*/
      }
    }
  }
  return result; /*0x5e280e*/

}
} // namespace gamemd

// 0x5E2F60
namespace gamemd {
LRESULT Dialog::ShowPlayerName()
{

  HWND DlgItem; // eax

  DlgItem = GetDlgItem((HWND)this, 1448); /*0x5e2f66*/
  return SendMessageA(DlgItem, 0x4B2u, 0, 11055906); /*0x5e2f7f*/

}
} // namespace gamemd

// 0x5E9950
namespace gamemd {
int Dialog::MapPlayerIDToIndex()
{

  int v2; // eax

  if ( this == (Dialog *)1041 ) /*0x5e9957*/
    return 0; /*0x5e9959*/
  if ( this == (Dialog *)1042 ) /*0x5e9961*/
    return 1; /*0x5e9963*/
  if ( this == (Dialog *)1043 ) /*0x5e996e*/
    return 2; /*0x5e9970*/
  if ( this == (Dialog *)1044 ) /*0x5e997b*/
    return 3; /*0x5e997d*/
  if ( this == (Dialog *)1045 ) /*0x5e9988*/
    return 4; /*0x5e998a*/
  if ( this == (Dialog *)1046 ) /*0x5e9995*/
    return 5; /*0x5e9997*/
  if ( this == (Dialog *)1047 ) /*0x5e99a2*/
    return 6; /*0x5e99a4*/
  v2 = -(this != (Dialog *)1048); /*0x5e99b1*/
  LOBYTE(v2) = v2 & 0xF8; /*0x5e99b3*/
  return v2 + 7; /*0x5e995b*/

}
} // namespace gamemd

// 0x5F3450
namespace gamemd {
unsigned int Dialog::CheckButtonState()
{

  int v1; // esi
  unsigned char v3[84]; // [esp+4h] [ebp-54h] BYREF

  v1 = (*(int (**)(HWND))(*(unsigned int *)g_ClipboardBuffer + 12))(g_ClipboardBuffer); /*0x5f3467*/
  if ( (*(int (**)(HWND, char *, int, unsigned char *, int, int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f3483*/
         g_ClipboardBuffer,
         word_832678,
         13,
         v3,
         81,
         90,
         1,
         -1) == 2 )
    return v1 & 0xFFFFFF7F; /*0x5f3485*/
  return v1; /*0x5f348d*/

}
} // namespace gamemd

// 0x602AE0
namespace gamemd {
BOOL Dialog::IsSpecialTemplate()
{

  return this == (Dialog *)293 /*0x602b7a*/
      || this == (Dialog *)231
      || this == (Dialog *)278
      || this == (Dialog *)194
      || this == (Dialog *)201
      || this == (Dialog *)285
      || this == (Dialog *)284
      || this == (Dialog *)276
      || this == (Dialog *)700
      || this == (Dialog *)275
      || this == (Dialog *)265
      || this == (Dialog *)271
      || this == (Dialog *)279
      || this == (Dialog *)230
      || this == (Dialog *)243
      || this == (Dialog *)244
      || this == (Dialog *)270
      || this == (Dialog *)274;

}
} // namespace gamemd

// 0x60AAA0
namespace gamemd {
BOOL Dialog::EnumAndCleanup()
{

  return EnumChildWindows((HWND)this, sub_60AA60, 0); /*0x60aaae*/

}
} // namespace gamemd

// 0x60F320
namespace gamemd {
BOOL Dialog::SubclassEditControl(HWND hWnd, LPARAM)
{

  LONG WindowLongA; // ebx
  HWND Parent; // esi
  DWORD v4; // edx
  HWND Window; // esi
  unsigned int *v6; // ebx
  LONG v7; // eax
  LONG dwNewLong; // [esp+10h] [ebp-A4h]
  struct tagRECT Rect; // [esp+14h] [ebp-A0h] BYREF
  struct tagRECT v11; // [esp+24h] [ebp-90h] BYREF
  CHAR ClassName[128]; // [esp+34h] [ebp-80h] BYREF

  WindowLongA = GetWindowLongA(hWnd, -16); /*0x60f341*/
  SetWindowLongA(hWnd, -21, 0); /*0x60f343*/
  if ( (WindowLongA & 0x10000000) != 0 && (WindowLongA & 0x8000000) == 0 ) /*0x60f35b*/
  {
    GetClassNameA(hWnd, ClassName, 128); /*0x60f36c*/
    if ( !strcmp(ClassName, g_INI_Key_Edit) ) /*0x60f381*/
    {
      Parent = GetParent(hWnd); /*0x60f3b9*/
      ScreenDialogToClient(hWnd, &Rect); /*0x60f3bb*/
      ScreenDialogToClient(Parent, &v11); /*0x60f3c6*/
      v4 = 1073742096; /*0x60f3df*/
      if ( (WindowLongA & 0x10000) != 0 ) /*0x60f3ea*/
        v4 = 1073807632; /*0x60f3ec*/
      Window = CreateWindowExA( /*0x60f427*/
                 0,
                 g_INI_Key_ListBox,
                 0,
                 v4,
                 Rect.left - v11.left,
                 Rect.top - v11.top,
                 Rect.right - Rect.left,
                 Rect.bottom - Rect.top,
                 Parent,
                 0,
                 g_hInstance,
                 0);
      v6 = __2_YAPAXI_Z(8u); /*0x60f431*/
      *v6 = g_INI_Key_NewEdit; /*0x60f436*/
      v6[1] = GetWindowLongA(hWnd, -16); /*0x60f43f*/
      SetWindowLongA(Window, -21, (LONG)v6); /*0x60f44b*/
      EnableWindow(hWnd, 0); /*0x60f450*/
      ShowWindow(hWnd, 0); /*0x60f459*/
      EnableWindow(Window, 1); /*0x60f462*/
      ShowWindow(Window, 1); /*0x60f46b*/
      dwNewLong = GetWindowLongA(hWnd, -12); /*0x60f479*/
      v7 = GetWindowLongA(Window, -12); /*0x60f47d*/
      SetWindowLongA(hWnd, -12, v7); /*0x60f483*/
      SetWindowLongA(Window, -12, dwNewLong); /*0x60f48d*/
    }
  }
  return 1; /*0x60f48f*/

}
} // namespace gamemd

// 0x622800
namespace gamemd {
HWND Dialog::Show()
{

  ShowWindow((HWND)this, 1); /*0x622806*/
  SetForegroundWindow((HWND)this); /*0x62280d*/
  return Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x62281e*/

}
} // namespace gamemd

// 0x623120
namespace gamemd {
char Dialog::PumpMessages()
{

  int result; // eax

  MessageLoop(); /*0x623120*/
  if ( !dword_A8B238[0] || dword_A8B238[0] == 5 || byte_A8D60E || dword_A8DAB4 ) /*0x623143*/
  {
    result = Event::Dispatch(); /*0x62315a*/
  }
  else if ( !VtableStub::sub_55CBF0() ) /*0x623145*/
  {
    result = GameFrameLoop(); /*0x62314e*/
    if ( (unsigned char)result ) /*0x623155*/
    {
      LOBYTE(result) = 1; /*0x623157*/
      return result; /*0x623159*/
    }
  }
  LOBYTE(result) = 0; /*0x62315f*/
  return result; /*0x623159*/

}
} // namespace gamemd

// 0x7759B0
namespace gamemd {
int Dialog::FindByPtr()
{

  int v1; // eax
  Dialog **i; // edx

  v1 = g_DialogTrackingList - 1; /*0x7759b5*/
  if ( g_DialogTrackingList - 1 < 0 ) /*0x7759b8*/
    return 0; /*0x7759d1*/
  for ( i = (Dialog **)(8 * v1 + 12004648); this != *i || v1 <= 0; i -= 2 ) /*0x7759ba*/
  {
    if ( --v1 < 0 ) /*0x7759cf*/
      return 0; /*0x7759cf*/
  }
  return (int)*(&g_ClipboardBuffer + 2 * v1); /*0x7759d3*/

}
} // namespace gamemd

// 0x775BA0
namespace gamemd {
BOOL Dialog::GetField()
{

  EnumChildWindows((HWND)this, DialogClass::Reposition, 1); /*0x775bab*/
  return DialogClass::Reposition((HWND)this, 0); /*0x775bb9*/

}
} // namespace gamemd

// 0x777060
namespace gamemd {
HWND Dialog::RestoreParent()
{

  int result; // eax

  result = GetWindowLongA((HWND)this, -8); /*0x777066*/
  if ( result ) /*0x77706e*/
    return SetDialogParent((HWND)this, (HWND)result); /*0x777074*/
  return result; /*0x777079*/

}
} // namespace gamemd

// 0x77D820
namespace gamemd {
char Dialog::UpdateGameUI()
{

  HWND GameUI; // eax

  Dialog::PumpMessages(); /*0x77d820*/
  GameUI = (HWND)Dialog::FindGameUI(); /*0x77d825*/
  if ( GameUI ) /*0x77d82c*/
    InvalidateRect(GameUI, 0, 1); /*0x77d833*/
  return 0; /*0x77d83b*/

}
} // namespace gamemd

// 0x799D10
namespace gamemd {
HWND Dialog::CloseAll()
{

  HWND result; // eax

  for ( result = Dialog::GetCurrent(); result; result = Dialog::GetCurrent() ) /*0x799d17*/
    CloseDialog(result, 0); /*0x799d1d*/
  return result; /*0x799d2b*/

}
} // namespace gamemd
