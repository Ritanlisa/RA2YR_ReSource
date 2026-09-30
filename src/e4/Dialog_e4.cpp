// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

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

// 0x49F740
namespace gamemd {
void Dialog::MapDialogResource()
{

  if ( *((unsigned int *)this + 1) == 48879 ) /*0x49f74a*/
  {
    this->Debug::Log(); /*0x49f751*/
    g_abs_87F7E8[32733] = ((int (*)(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int))MapViewOfFileEx)( /*0x49f772*/
                                *((unsigned int *)this + 3),
                                983071,
                                0,
                                0,
                                0,
                                0);
    this->Debug::Log(); /*0x49f77e*/
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

  this->Debug::Log(); /*0x5b5bcb*/
  DlgItem = GetDlgItem(*this, 1641); /*0x5b5be1*/
  if ( DlgItem ) /*0x5b5bf0*/
    SendMessageA(DlgItem, 0x405u, 1u, g_abs_A8B270); /*0x5b5c00*/
  v3 = GetDlgItem(*this, 1360); /*0x5b5c0a*/
  if ( v3 ) /*0x5b5c0e*/
    SendMessageA(v3, 0x405u, 1u, g_RulesInitConfig); /*0x5b5c1e*/
  v4 = GetDlgItem(*this, 1026); /*0x5b5c28*/
  if ( v4 ) /*0x5b5c2c*/
    SendMessageA(v4, 0x405u, 1u, g_abs_A8B25C); /*0x5b5c3c*/
  v5 = GetDlgItem(*this, 1362); /*0x5b5c46*/
  if ( v5 ) /*0x5b5c4a*/
    SendMessageA(v5, 0x405u, 1u, g_abs_A8B274); /*0x5b5c5a*/
  v6 = GetDlgItem(*this, 1321); /*0x5b5c64*/
  if ( v6 ) /*0x5b5c68*/
    SendMessageA(v6, 0x405u, 1u, 6 - g_abs_A8B268); /*0x5b5c7f*/
  v7 = GetDlgItem(*this, 1363); /*0x5b5c89*/
  if ( v7 ) /*0x5b5c8d*/
    SendMessageA(v7, 0x405u, 1u, g_abs_A8B278); /*0x5b5c9d*/
  v8 = GetDlgItem(*this, 1643); /*0x5b5ca7*/
  if ( v8 ) /*0x5b5cab*/
    SendMessageA(v8, 0xF1u, (unsigned char)g_abs_A8B320 == 1, 0); /*0x5b5cc3*/
  v9 = GetDlgItem(*this, 1642); /*0x5b5ccd*/
  if ( v9 ) /*0x5b5cd1*/
    SendMessageA(v9, 0xF1u, g_abs_A8B258 == (unsigned char [1])((unsigned char [1]))((unsigned char [1]))(1), 0); /*0x5b5ce9*/
  v10 = GetDlgItem(*this, 1361); /*0x5b5cf3*/
  if ( v10 ) /*0x5b5cf7*/
    SendMessageA(v10, 0xF1u, g_abs_A8B26C == (unsigned char [1])((unsigned char [1]))((unsigned char [1]))(1), 0); /*0x5b5d0f*/
  v11 = GetDlgItem(*this, 1358); /*0x5b5d19*/
  if ( v11 ) /*0x5b5d1d*/
    SendMessageA(v11, 0xF1u, g_abs_A8B262 == (unsigned char [1])((unsigned char [1]))((unsigned char [1]))(1), 0); /*0x5b5d35*/
  v12 = GetDlgItem(*this, 1690); /*0x5b5d3f*/
  if ( v12 ) /*0x5b5d43*/
    SendMessageA(v12, 0xF1u, g_abs_A8B263 == (unsigned char [1])((unsigned char [1]))((unsigned char [1]))(1), 0); /*0x5b5d5b*/
  v13 = GetDlgItem(*this, 1693); /*0x5b5d65*/
  if ( v13 ) /*0x5b5d69*/
    SendMessageA(v13, 0xF1u, (unsigned char)g_abs_A8B264 == 1, 0); /*0x5b5d81*/
  v14 = GetDlgItem(*this, 1356); /*0x5b5d8b*/
  if ( v14 ) /*0x5b5d8f*/
    SendMessageA(v14, 0xF1u, g_abs_A8B261 == (unsigned char [1])((unsigned char [1]))((unsigned char [1]))(1), 0); /*0x5b5da7*/
  v15 = GetDlgItem(*this, 1357); /*0x5b5db1*/
  if ( v15 ) /*0x5b5db5*/
    SendMessageA(v15, 0xF1u, g_abs_A8B31F == (unsigned char [1])((unsigned char [1]))((unsigned char [1]))(1), 0); /*0x5b5dcd*/
  v16 = GetDlgItem(*this, 1572); /*0x5b5dd7*/
  if ( v16 ) /*0x5b5ddb*/
    SendMessageA(v16, 0xF1u, g_abs_A8B260 == (unsigned char [1])((unsigned char [1]))((unsigned char [1]))(1), 0); /*0x5b5df3*/
  v17 = GetDlgItem(*this, 1430); /*0x5b5dfd*/
  if ( v17 ) /*0x5b5e01*/
    SendMessageA(v17, 0xF1u, g_abs_A8B31D == (unsigned char [1])((unsigned char [1]))((unsigned char [1]))(1), 0); /*0x5b5e19*/
  v18 = GetDlgItem(*this, 1448); /*0x5b5e23*/
  if ( v18 ) /*0x5b5e27*/
    SendMessageA(v18, 0x4B2u, 0, (LPARAM)&g_abs_A8B320 + 2); /*0x5b5e36*/
  if ( !g_abs_AC1154 || !*(unsigned int *)g_abs_AC1154 ) /*0x5b5e41*/
    Session::PrepareGame(*this); /*0x5b5e48*/
  v19 = GetDlgItem(*this, 1); /*0x5b5e51*/
  if ( v19 ) /*0x5b5e55*/
    EnableWindow(v19, 1); /*0x5b5e59*/
  return PlayVocClass(IDA_HIDWORD(g_abs_8871E0->MovieOff, unsigned int a1), 0x2000, 1.0, 0); /*0x5b5e7c*/

}
}
// 0x5D3490
namespace gamemd {
int Dialog::ShowMessageBox(int lParam, unsigned short * a2, Movie * aP2, IUnknown * aP3, IUnknown * aP4, int a6, void * a1, void * a3, void * a4, void * a5)
{

  int v6; // ebx
  int v7; // edi
  int Dialog; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  char v16; // [esp+Ch] [ebp-Ch]
  char v17; // [esp+Dh] [ebp-Bh]
  char v18; // [esp+Eh] [ebp-Ah]
  char v19; // [esp+Fh] [ebp-9h]
  int dwNewLong; // [esp+10h] [ebp-8h] BYREF
  int v21; // [esp+14h] [ebp-4h]

  dwNewLong = -1; /*0x5d349a*/
  v6 = 0; /*0x5d34a6*/
  v7 = (*(int (**)(unsigned int))(*(unsigned int *)g_abs_87F7E8[8086] + 40))(g_abs_87F7E8[8086]); /*0x5d34ab*/
  v21 = v7; /*0x5d34b3*/
  if ( !a2 || (v18 = 1, !*a2) ) /*0x5d34b9*/
    v18 = 0; /*0x5d34c3*/
  if ( !aP2 || (v19 = 1, !*aP2) ) /*0x5d34d0*/
    v19 = 0; /*0x5d34db*/
  if ( !aP3 || (v16 = 1, !*aP3) ) /*0x5d34e8*/
    v16 = 0; /*0x5d34f3*/
  if ( !aP4 || (v17 = 1, !*aP4) ) /*0x5d3500*/
    v17 = 0; /*0x5d350b*/
  Screen::Capture(1, 0, 0, a1); /*0x5d3514*/
  Dialog = CreateDialog(0); /*0x5d3541*/
  v9 = Dialog; /*0x5d3546*/
  if ( Dialog ) /*0x5d354a*/
  {
    ((void (*)(int, int, int *))SetWindowLongA)(Dialog, 8, &dwNewLong); /*0x5d3559*/
    if ( v18 ) /*0x5d3571*/
    {
      v10 = ((int (*)(int, int))GetDlgItem)(v9, 1456); /*0x5d3579*/
      ((void (*)(int, int, unsigned int, unsigned short *))SendMessageA)(v10, 1202, 0, a2); /*0x5d3588*/
    }
    if ( v19 ) /*0x5d3590*/
    {
      v11 = ((int (*)(int, int))GetDlgItem)(v9, 1454); /*0x5d3598*/
      ((void (*)(int, int, unsigned int, unsigned short *))SendMessageA)(v11, 1202, 0, aP2); /*0x5d35a7*/
      v6 = 1; /*0x5d35a9*/
    }
    if ( v16 ) /*0x5d35b4*/
    {
      v12 = ((int (*)(int, int))GetDlgItem)(v9, 2); /*0x5d35b9*/
      ((void (*)(int, int, unsigned int, unsigned short *))SendMessageA)(v12, 1202, 0, aP3); /*0x5d35c8*/
      v6 = 2; /*0x5d35ca*/
    }
    if ( v17 ) /*0x5d35d5*/
    {
      v13 = ((int (*)(int, int))GetDlgItem)(v9, 1455); /*0x5d35dd*/
      ((void (*)(int, int, unsigned int, unsigned short *))SendMessageA)(v13, 1202, 0, aP4); /*0x5d35ec*/
      v6 = 3; /*0x5d35ee*/
    }
    Dialog::Show(v9); /*0x5d35f5*/
    if ( v6 <= 0 ) /*0x5d35fd*/
    {
      dwNewLong = 0; /*0x5d3653*/
    }
    else
    {
      while ( (*(int (**)(unsigned int))(*(unsigned int *)g_abs_87F7E8[8086] + 40))(g_abs_87F7E8[8086]) ) /*0x5d3607*/
        (*(void (**)(unsigned int))(*(unsigned int *)g_abs_87F7E8[8086] + 16))(g_abs_87F7E8[8086]); /*0x5d3616*/
      while ( dwNewLong < 0 ) /*0x5d362e*/
      {
        if ( this->Dialog::PumpMessages() ) /*0x5d3630*/
          break; /*0x5d3637*/
        if ( !IDA_LOBYTE(g_abs_87F7E8[539758]) ) /*0x5d3640*/
        {
          IDA_LOBYTE(v14) = 0; /*0x5d3642*/
          ScreenSaver::Process(v14); /*0x5d3644*/
        }
      }
    }
    Dialog::Destroy(v9); /*0x5d365d*/
    v7 = v21; /*0x5d3662*/
  }
  while ( v7 < (*(int (**)(unsigned int))(*(unsigned int *)g_abs_87F7E8[8086] + 40))(g_abs_87F7E8[8086]) ) /*0x5d3673*/
    (*(void (**)(unsigned int))(*(unsigned int *)g_abs_87F7E8[8086] + 12))(g_abs_87F7E8[8086]); /*0x5d367d*/
  return dwNewLong; /*0x5d3693*/

}
}
// 0x5D5DC0
namespace gamemd {
int Dialog::GetModeNeg2()
{

  return *((unsigned char *)this + 63) != 0 ? 0 : -2;

}
}
// 0x5D5DD0
namespace gamemd {
int Dialog::GetMode3()
{

  return *((unsigned char *)this + 60) != 0 ? 3 : -2;

}
}
// 0x5EE350
namespace gamemd {
void Dialog::RefreshDialogsGame()
{

  void *v1; // eax
  void *v2; // eax
  void *v3; // eax

  if ( this ) /*0x5ee352*/
    UpdateObserveButtonWOL(this); /*0x5ee354*/
  v1 = (void *)Dialog::FindByHandle((void *)0x116); /*0x5ee35e*/
  if ( v1 ) /*0x5ee365*/
    UpdateObserveButtonWOL(v1); /*0x5ee369*/
  v2 = (void *)Dialog::FindByHandle((void *)0x113); /*0x5ee373*/
  if ( v2 ) /*0x5ee37a*/
    UpdateObserveButtonWOL(v2); /*0x5ee37e*/
  v3 = (void *)Dialog::FindByHandle((void *)0xBB); /*0x5ee388*/
  if ( v3 ) /*0x5ee38f*/
    UpdateObserveButtonWOL(v3); /*0x5ee393*/

}
}
// 0x5F2950
namespace gamemd {
int Dialog::RunModemDialing(int a2, int a3, char a4)
{

  char v5; // bl
  int v6; // esi
  void *StringCSF; // eax
  void *v8; // ebp
  void *v9; // eax
  int MessageBox; // eax
  int v11; // ebp
  int v12; // ecx
  int16_t Buffer; // [esp+2Ch] [ebp-F8h] BYREF
  char v15; // [esp+2Eh] [ebp-F6h]
  int hWnd; // [esp+30h] [ebp-F4h]
  char Source[240]; // [esp+34h] [ebp-F0h] BYREF

  v5 = (int)(1);
  v6 = (int)(3);
  this->Debug::Log(); /*0x5f2968*/
  if ( a4 == 1 ) /*0x5f2979*/
    StringCSF = GetStringCSF((void *)aTxtModemConner, 0, g_Str_File_NullMgr_CPP, 1409); /*0x5f298c*/
  else
    StringCSF = GetStringCSF((void *)aTxtDialing, 0, g_Str_File_NullMgr_CPP, 1411); /*0x5f299f*/
  v8 = StringCSF; /*0x5f29ba*/
  IDA_LOBYTE(dword_A8ED54[51580]) = 0; /*0x5f29bc*/
  v9 = GetStringCSF((void *)g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1415); /*0x5f29c3*/
  MessageBox = CreateMessageBox(v8, v9, &((unsigned int *)(dword_A8ED54))[51580]); /*0x5f29cc*/
  hWnd = MessageBox; /*0x5f29d3*/
  if ( !MessageBox ) /*0x5f29d7*/
    return v6; /*0x5f29d7*/
  Dialog::Show(MessageBox); /*0x5f29df*/
  this->this->this->Debug::Log(); /*0x5f29e9*/
  (*(void (**)(int, int))(*(unsigned int *)dword_A8ED54[233459] + 8))(dword_A8ED54[233459], a3); /*0x5f2a01*/
  this->this->this->Debug::Log(); /*0x5f2a09*/
  (*(void (**)(int, int, char *, int, int))(*(unsigned int *)dword_A8ED54[233459] + 20))( /*0x5f2a24*/
    dword_A8ED54[233459],
    60,
    Source,
    81,
    -1);
  this->this->this->Debug::Log(); /*0x5f2a2c*/
  (*(void (**)(int, int))(*(unsigned int *)dword_A8ED54[233459] + 24))(dword_A8ED54[233459], a2); /*0x5f2a44*/
  (*(void (**)(int, int (*)()))(*(unsigned int *)dword_A8ED54[233459] + 36))(dword_A8ED54[233459], PumpEventLoop); /*0x5f2a54*/
  IDA_LOBYTE(dword_A8ED54[51580]) = 0; /*0x5f2a57*/
  v11 = *((char *)this + 9); /*0x5f2a5e*/
  this->Debug::Log(); /*0x5f2a66*/
  while ( 1 ) /*0x5f2a6e*/
  {
    if ( Dialog::PumpMessages() == 1 || IDA_LOBYTE(dword_A8ED54[51580]) ) /*0x5f2a82*/
    {
      v6 = 6; /*0x5f2c78*/
      if ( dword_A8ED54[233459] ) /*0x5f2c7f*/
      {
LABEL_34:
        v15 = 0; /*0x5f2c81*/
        Buffer = word_8327A0; /*0x5f2c8d*/
        WinModemClass::WriteSerial(&Buffer, 2); /*0x5f2c99*/
      }
LABEL_35:
      this->Debug::Log(); /*0x5f2c9e*/
      goto LABEL_36; /*0x5f2ca3*/
    }
    IDA_LOBYTE(v12) = 0; /*0x5f2a88*/
    ScreenSaver::Process(v12); /*0x5f2a8a*/
    memset(Source, 0, sizeof(Source)); /*0x5f2a9c*/
    v11 = (*(int (**)(int, int, char *, int, int))(*(unsigned int *)dword_A8ED54[233459] + 20))( /*0x5f2ab1*/
            dword_A8ED54[233459],
            v11,
            Source,
            81,
            15);
    if ( v11 == -1000 ) /*0x5f2ab9*/
    {
      v6 = 6; /*0x5f2bec*/
      if ( dword_A8ED54[233459] ) /*0x5f2bf3*/
        goto LABEL_34; /*0x5f2bf3*/
      goto LABEL_35; /*0x5f2bf3*/
    }
    _strupr(Source); /*0x5f2ac4*/
    if ( strlen(Source) ) /*0x5f2acd*/
      Debug::Log(); /*0x5f2ae6*/
    if ( strstr(Source, off_8327D8) ) /*0x5f2af8*/
    {
      memset(&dword_A8ED54[51533], 0, 0x50u); /*0x5f2b12*/
      strncpy((char *)&dword_A8ED54[51533], Source, 79); /*0x5f2b1e*/
      v6 = 0; /*0x5f2b27*/
      Debug::Log(); /*0x5f2b2f*/
    }
    else
    {
      if ( !strncmp(Source, aBusy, 4) ) /*0x5f2b48*/
      {
        v6 = 2; /*0x5f2b54*/
      }
      else if ( !strncmp(Source, aNoC, 4) ) /*0x5f2b67*/
      {
        v6 = 1; /*0x5f2b77*/
      }
      else if ( !strncmp(Source, aNoD, 4) ) /*0x5f2b8b*/
      {
        v6 = 4; /*0x5f2b9b*/
      }
      else
      {
        if ( strncmp(Source, aErro, 4) ) /*0x5f2baf*/
          goto LABEL_23; /*0x5f2bb9*/
        v6 = 3; /*0x5f2bbb*/
      }
      Debug::Log(); /*0x5f2bca*/
    }
    v5 = 0; /*0x5f2bd2*/
LABEL_23:
    if ( v11 <= 0 ) /*0x5f2bd6*/
      break; /*0x5f2bd6*/
    if ( v5 != 1 ) /*0x5f2bdb*/
      goto LABEL_36; /*0x5f2bdb*/
  }
  Debug::Log(); /*0x5f2c1a*/
  if ( strlen(Source) ) /*0x5f2c2b*/
    Debug::Log(); /*0x5f2c3c*/
  if ( dword_A8ED54[233459] ) /*0x5f2c4c*/
  {
    Buffer = word_8327A0; /*0x5f2c5c*/
    v15 = 0; /*0x5f2c61*/
    WinModemClass::WriteSerial(&Buffer, 2); /*0x5f2c66*/
  }
  v6 = 5; /*0x5f2c6b*/
LABEL_36:
  (*(void (**)(int, unsigned int))(*(unsigned int *)dword_A8ED54[233459] + 36))(dword_A8ED54[233459], 0); /*0x5f2cab*/
  IDA_LOBYTE(dword_A8ED54[51580]) = 0; /*0x5f2cbc*/
  Dialog::Destroy(hWnd); /*0x5f2cc3*/
  return v6; /*0x5f2cca*/

}
}
// 0x606800
namespace gamemd {
AbstractClass * * Dialog::MapControlToAction(HWND hWnd, LPARAM a2)
{

  int v2; // ebp
  unsigned int *v3; // eax
  void *v4; // esi
  int v5; // edi
  bool v6; // bl
  unsigned int *v7; // eax
  unsigned int *v8; // eax
  unsigned int *v9; // eax
  unsigned int *v10; // eax
  unsigned int *v12; // eax
  unsigned int *v13; // eax
  unsigned int *v14; // eax
  int v15; // [esp+10h] [ebp-4h]

  v2 = hWnd; /*0x606803*/
  v15 = ((int (*)(int))GetParent)(hWnd); /*0x606810*/
  hWnd = v15; /*0x606814*/
  if ( !dword_A8ED54[52076] ) /*0x60681f*/
    goto LABEL_5; /*0x60681f*/
  v3 = *(unsigned int **)(dword_A8ED54[52075] + 4 * HashTable::ComputeHash((int)&dword_A8ED54[52075], (int)&hWnd)); /*0x606836*/
  if ( !v3 ) /*0x60683b*/
    goto LABEL_5; /*0x60683b*/
  while ( *v3 != hWnd ) /*0x606843*/
  {
    v3 = (unsigned int *)v3[129]; /*0x606849*/
    if ( !v3 ) /*0x606851*/
      goto LABEL_5; /*0x606851*/
  }
  v8 = v3 + 1; /*0x607089*/
  if ( v8 ) /*0x60708e*/
    v4 = (void *)v8[27]; /*0x607094*/
  else
LABEL_5:
    v4 = 0; /*0x606853*/
  v5 = ((int (*)(int))GetDlgCtrlID)(v2); /*0x60685c*/
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
     || Dialog::IsSpecialTemplate(v4))
    && v5 == 1684
    || Event::IsValidActionType(v4) && v5 == 1685
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
    && v5 == 1820
    || (v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014
     || v4 == (void *)261
     || v4 == (void *)107
     || v4 == (void *)275)
    && v5 == 1128
    || (v4 == (void *)188
     || v4 == (void *)189
     || v4 == (void *)258
     || v4 == (void *)194
     || v4 == (void *)201
     || v4 == (void *)3014)
    && (v5 == 1772 || v5 == 1448)
    || (v4 == (void *)259 || v4 == (void *)3015)
    && (v5 == 1779
     || v5 == 1780
     || v5 == 1835
     || v5 == 1775
     || v5 == 1777
     || v5 == 1776
     || v5 == 1778
     || v5 == 1695
     || v5 == 1782
     || v5 == 1843
     || v5 == 1845
     || v5 == 1842
     || v5 == 1002
     || v5 == 1846
     || v5 == 1847
     || v5 == 1852
     || v5 == 1853
     || v5 == 1854
     || v5 == 1855
     || v5 == 1856
     || v5 == 1041
     || v5 == 1042
     || v5 == 1049
     || v5 == 1050
     || v5 == 1699
     || v5 == 1700
     || v5 == 1701
     || v5 == 1703
     || v5 == 1702
     || v5 == 1704
     || v5 == 1850
     || v5 == 1849
     || v5 == 1851
     || v5 == 1848)
    || (v4 == (void *)264 || v4 == (void *)3014)
    && (v5 == 1746
     || v5 == 1002
     || v5 == 1693
     || v5 == 1695
     || v5 == 1694
     || v5 == 1696
     || v5 == 1931
     || v5 == 1480
     || v5 == 1041
     || v5 == 1042
     || v5 == 1043
     || v5 == 1044
     || v5 == 1045
     || v5 == 1046
     || v5 == 1047
     || v5 == 1048
     || v5 == 1049
     || v5 == 1050
     || v5 == 1051
     || v5 == 1052
     || v5 == 1053
     || v5 == 1054
     || v5 == 1055
     || v5 == 1056
     || v5 == 1699
     || v5 == 1700
     || v5 == 1705
     || v5 == 1708
     || v5 == 1711
     || v5 == 1714
     || v5 == 1717
     || v5 == 1720
     || v5 == 1701
     || v5 == 1703
     || v5 == 1706
     || v5 == 1709
     || v5 == 1712
     || v5 == 1715
     || v5 == 1718
     || v5 == 1721
     || v5 == 1702
     || v5 == 1704
     || v5 == 1707
     || v5 == 1710
     || v5 == 1713
     || v5 == 1716
     || v5 == 1719
     || v5 == 1722
     || v5 == 1802
     || v5 == 1803
     || v5 == 1804
     || v5 == 1805
     || v5 == 1806
     || v5 == 1807
     || v5 == 1808
     || v5 == 1809
     || v5 == 1843
     || v5 == 1842
     || v5 == 1819
     || v5 == 1845) )
  {
    goto LABEL_208; /*0x60701e*/
  }
  if ( (((int (*)(int, int))GetWindowLongA)(v2, -16) & 0xB) == 0xB ) /*0x607034*/
  {
    hWnd = v2; /*0x60703f*/
    if ( dword_A8ED54[52076] ) /*0x607045*/
    {
      v7 = *(unsigned int **)(dword_A8ED54[52075] /*0x607066*/
                      + 4
                      * (((int (*)(int *))dword_A8ED54[52081])(&hWnd)
                       & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)));
      if ( v7 ) /*0x60706b*/
      {
        while ( *v7 != hWnd ) /*0x607073*/
        {
          v7 = (unsigned int *)v7[129]; /*0x607075*/
          if ( !v7 ) /*0x60707d*/
            goto LABEL_199; /*0x60707d*/
        }
        v9 = v7 + 1; /*0x6070a0*/
        if ( v9 ) /*0x6070a5*/
        {
          if ( !v9[26] && (uint8_t)IsDialogControlVisible(v15, v2) ) /*0x6070b4*/
            goto LABEL_208; /*0x6070bb*/
        }
      }
    }
  }
LABEL_199:
  if ( (((int (*)(int, int))GetWindowLongA)(v2, -16) & 0xB) == 0xB ) /*0x6070cb*/
  {
    hWnd = v2; /*0x6070d6*/
    if ( dword_A8ED54[52076] ) /*0x6070dc*/
    {
      v10 = *(unsigned int **)(dword_A8ED54[52075] /*0x607101*/
                       + 4
                       * (((int (*)(int *))dword_A8ED54[52081])(&hWnd)
                        & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)));
      if ( v10 ) /*0x607106*/
      {
        while ( *v10 != hWnd ) /*0x607112*/
        {
          v10 = (unsigned int *)v10[129]; /*0x607114*/
          if ( !v10 ) /*0x60711c*/
            return 1; /*0x607128*/
        }
        v12 = v10 + 1; /*0x607133*/
        if ( v12 ) /*0x607138*/
        {
          if ( !v12[26] && (uint8_t)GetDialogDefaultButton(v15, v2) ) /*0x607147*/
          {
LABEL_208:
            hWnd = v2; /*0x607150*/
            if ( dword_A8ED54[52076] ) /*0x60715b*/
            {
              v13 = *(unsigned int **)(dword_A8ED54[52075] /*0x60717c*/
                               + 4
                               * (((int (*)(int *))dword_A8ED54[52081])(&hWnd)
                                & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)));
              if ( v13 ) /*0x607181*/
              {
                while ( *v13 != hWnd ) /*0x607189*/
                {
                  v13 = (unsigned int *)v13[129]; /*0x60718b*/
                  if ( !v13 ) /*0x607193*/
                    return 1; /*0x60719f*/
                }
                v14 = v13 + 1; /*0x6071a6*/
                if ( v14 ) /*0x6071ab*/
                  *((unsigned char *)v14 + 188) = v6; /*0x6071ad*/
              }
            }
          }
        }
      }
    }
  }
  return 1; /*0x60711e*/

}
}
// 0x607FD0
namespace gamemd {
int Dialog::StopBink()
{

  int v1; // eax
  int v3; // esi
  int v4; // eax
  void *v6; // [esp+8h] [ebp-4h] BYREF

  IDA_LOBYTE(v1) = dword_A8ED54[52076]; /*0x607fd1*/
  v6 = this; /*0x607fdc*/
  if ( dword_A8ED54[52076] ) /*0x607fe0*/
  {
    v1 = *(unsigned int *)(dword_A8ED54[52075] /*0x608005*/
                   + 4
                   * (((int (*)(void **))dword_A8ED54[52081])(&v6) & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)));
    if ( v1 ) /*0x60800a*/
    {
      while ( *(void **)v1 != v6 ) /*0x608012*/
      {
        v1 = *(unsigned int *)(v1 + 516); /*0x608014*/
        if ( !v1 ) /*0x60801c*/
          return v1; /*0x60801c*/
      }
      v3 = v1 + 4; /*0x608026*/
      if ( v1 != -4 ) /*0x60802b*/
      {
        IDA_LOBYTE(v1) = *(unsigned char *)(v1 + 194); /*0x60802d*/
        if ( (unsigned char)v1 ) /*0x608035*/
        {
          v4 = ((int (*)(void *, int))GetDlgItem)(this, 1818); /*0x60803d*/
          if ( v4 ) /*0x608045*/
            ((void (*)(int, int, unsigned int, unsigned int))SendMessageA)(v4, 1250, 0, 0); /*0x608051*/
          IDA_LOBYTE(v1) = RenderGadgetClassAnimation((int)this, 0); /*0x60805b*/
          *(unsigned char *)(v3 + 190) = 0; /*0x608060*/
        }
      }
    }
  }
  return v1; /*0x60801e*/

}
}
// 0x608070
namespace gamemd {
AbstractClass * * Dialog::IdleProcess()
{

  unsigned int *v2; // eax
  unsigned int *v4; // eax
  bool v5; // bl
  bool v6; // al
  int v7; // eax
  int v8; // edi
  BOOL v9; // esi
  void *v10; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  if ( SessionClass::GetGameSpeed(&g_abs_87F7E8[536212]) ) /*0x60807d*/
    return 0; /*0x60807d*/
  v10 = this; /*0x60808b*/
  if ( !dword_A8ED54[52076] ) /*0x608091*/
    return 0; /*0x608091*/
  v2 = *(unsigned int **)(dword_A8ED54[52075] /*0x6080b2*/
                  + 4
                  * (((int (*)(void **))dword_A8ED54[52081])(&v10) & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)));
  if ( !v2 ) /*0x6080b7*/
    return 0; /*0x6080b7*/
  while ( (void *)*v2 != v10 ) /*0x6080bf*/
  {
    v2 = (unsigned int *)v2[129]; /*0x6080c1*/
    if ( !v2 ) /*0x6080c9*/
      return 0; /*0x6080c9*/
  }
  v4 = v2 + 1; /*0x6080d8*/
  if ( !v4 ) /*0x6080dd*/
    return 0; /*0x6080dd*/
  v5 = *((unsigned char *)v4 + 189) && v4[44] == 1; /*0x6080e7*/
  v6 = ((int (*)(void *))IsWindowVisible)(this) != 0; /*0x608101*/
  if ( !v5 ) /*0x608106*/
    return 0; /*0x608106*/
  if ( !v6 ) /*0x60810a*/
    return 0; /*0x60810a*/
  PlayVocClass(*(unsigned int *)(g_abs_87F7E8[7806] + 412), 0x2000, 1.0, 0); /*0x608124*/
  IDA_LOBYTE(v12) = ((int (*)(void *))IsWindowEnabled)(this) != 0; /*0x608138*/
  ((void (*)(void *, unsigned int))EnableWindow)(this, 0); /*0x60813c*/
  ((void (*)(void *, int (*)(int, int), int))EnumChildWindows)(this, Dialog::MapControlToAction, 1); /*0x60814a*/
  v10 = this; /*0x608157*/
  if ( !dword_A8ED54[52076] ) /*0x60815b*/
    return 0; /*0x60815b*/
  v7 = *(unsigned int *)(dword_A8ED54[52075] /*0x608180*/
                 + 4
                 * (((int (*)(void **))dword_A8ED54[52081])(&v10) & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)));
  if ( !v7 ) /*0x608185*/
    return 0; /*0x608185*/
  while ( *(void **)v7 != v10 ) /*0x608191*/
  {
    v7 = *(unsigned int *)(v7 + 516); /*0x608193*/
    if ( !v7 ) /*0x60819b*/
      return 0; /*0x6081a5*/
  }
  v8 = v7 + 4; /*0x6081ae*/
  if ( v7 == -4 ) /*0x6081b3*/
    return 0; /*0x6080d3*/
  *(unsigned char *)(v7 + 194) = 1; /*0x6081bf*/
  ((void (*)(void *, unsigned int, unsigned int))InvalidateRect)(this, 0, 0); /*0x6081c6*/
  v11 = ((int (*)(void))GetTickCount)(); /*0x6081d4*/
  while ( 1 ) /*0x6081d8*/
  {
    MessageLoop(); /*0x6081d8*/
    if ( g_abs_87F7E8[536212] ) /*0x6081e4*/
    {
      if ( g_abs_87F7E8[536212] != 5 && !IDA_BYTE2(g_abs_87F7E8[538505]) && !g_abs_87F7E8[538803] ) /*0x6081fb*/
        break; /*0x6081fb*/
    }
    Event::Dispatch(); /*0x608211*/
LABEL_29:
    v9 = *(unsigned char *)(v8 + 190) == 0; /*0x608216*/
    if ( ((int (*)(void))GetTickCount)() - v11 > 5000 || v9 ) /*0x608234*/
      goto LABEL_31; /*0x608234*/
  }
  if ( VtableStub::55CBF0() || !GameFrameLoop((int)this) ) /*0x608206*/
    goto LABEL_29; /*0x60820d*/
LABEL_31:
  ((void (*)(void *, int (*)(int, int), unsigned int))EnumChildWindows)( /*0x608236*/
    this,
    Dialog::MapControlToAction,
    0);
  ((void (*)(void *, unsigned int))EnableWindow)(this, (uint8_t)v12); /*0x608250*/
  return 1; /*0x6080cb*/

}
}
// 0x60A330
namespace gamemd {
int Dialog::HandleTabKey(HWND hWnd, LPARAM a2)
{

  unsigned int *v3; // eax
  int v4; // ebp
  unsigned int *v5; // eax
  unsigned int *v6; // eax
  unsigned int *v8; // eax
  unsigned int *v9; // eax
  int v10; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h] BYREF
  int v12; // [esp+14h] [ebp-4h] BYREF
  unsigned int *hWnda; // [esp+1Ch] [ebp+4h]

  v10 = hWnd; /*0x60a341*/
  hWnda = 0; /*0x60a345*/
  if ( dword_A8ED54[52076] ) /*0x60a34d*/
  {
    v3 = *(unsigned int **)(dword_A8ED54[52075] /*0x60a36e*/
                    + 4
                    * (((int (*)(int *))dword_A8ED54[52081])(&v10) & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)));
    if ( v3 ) /*0x60a373*/
    {
      while ( *v3 != v10 ) /*0x60a37b*/
      {
        v3 = (unsigned int *)v3[129]; /*0x60a37d*/
        if ( !v3 ) /*0x60a385*/
          goto LABEL_7; /*0x60a385*/
      }
      hWnda = v3 + 1; /*0x60a390*/
    }
  }
LABEL_7:
  if ( !hWnda ) /*0x60a39a*/
    return 1; /*0x60a39a*/
  v4 = ((int (*)(int))GetParent)(hWnd); /*0x60a3ac*/
  if ( !SessionClass::GetGameSpeed(&g_abs_87F7E8[536212]) ) /*0x60a3ae*/
  {
    if ( (((int (*)(int, int))GetWindowLongA)(hWnd, -16) & 0xB) == 0xB ) /*0x60a3cb*/
    {
      v10 = hWnd; /*0x60a3d2*/
      if ( dword_A8ED54[52076] ) /*0x60a3d8*/
      {
        v5 = *(unsigned int **)(dword_A8ED54[52075] + 4 * HashTable::ComputeHash((int)&dword_A8ED54[52075], (int)&v10)); /*0x60a3ef*/
        if ( v5 ) /*0x60a3f4*/
        {
          while ( *v5 != v10 ) /*0x60a3fc*/
          {
            v5 = (unsigned int *)v5[129]; /*0x60a3fe*/
            if ( !v5 ) /*0x60a406*/
              goto LABEL_18; /*0x60a406*/
          }
          v6 = v5 + 1; /*0x60a40e*/
          if ( v6 ) /*0x60a413*/
          {
            if ( !v6[26] && IsDialogControlVisible(v4, hWnd) ) /*0x60a420*/
              goto LABEL_22; /*0x60a427*/
          }
        }
      }
    }
LABEL_18:
    if ( (((int (*)(int, int))GetWindowLongA)(hWnd, -16) & 0xB) == 0xB ) /*0x60a433*/
    {
      v12 = hWnd; /*0x60a444*/
      v11 = 0; /*0x60a448*/
      HashTable::Get(&dword_A8ED54[52075], &v12, &v11); /*0x60a450*/
      if ( v11 ) /*0x60a45b*/
      {
        if ( !*(unsigned int *)(v11 + 104) && GetDialogDefaultButton(v4, hWnd) ) /*0x60a468*/
        {
LABEL_22:
          hWnda[44] = 1; /*0x60a471*/
          return 1; /*0x60a486*/
        }
      }
    }
  }
  if ( !SessionClass::GetGameSpeed(&g_abs_87F7E8[536212]) ) /*0x60a48e*/
    goto LABEL_33; /*0x60a48e*/
  if ( (((int (*)(int, int))GetWindowLongA)(hWnd, -16) & 0xB) != 0xB /*0x60a4da*/
    || (v12 = hWnd, v11 = 0, HashTable::Get(&dword_A8ED54[52075], &v12, &v11), !v11)
    || *(unsigned int *)(v11 + 104)
    || !IsDialogControlVisible(v4, hWnd) )
  {
    if ( (((int (*)(int, int))GetWindowLongA)(hWnd, -16) & 0xB) != 0xB ) /*0x60a4f1*/
      goto LABEL_33; /*0x60a4f1*/
    v10 = hWnd; /*0x60a4f8*/
    if ( !dword_A8ED54[52076] ) /*0x60a4fe*/
      goto LABEL_33; /*0x60a4fe*/
    v8 = *(unsigned int **)(dword_A8ED54[52075] + 4 * HashTable::ComputeHash((int)&dword_A8ED54[52075], (int)&v10)); /*0x60a515*/
    if ( !v8 ) /*0x60a51a*/
      goto LABEL_33; /*0x60a51a*/
    while ( *v8 != v10 ) /*0x60a522*/
    {
      v8 = (unsigned int *)v8[129]; /*0x60a524*/
      if ( !v8 ) /*0x60a52c*/
        goto LABEL_33; /*0x60a52c*/
    }
    v9 = v8 + 1; /*0x60a55b*/
    if ( !v9 || v9[26] || !GetDialogDefaultButton(v4, hWnd) ) /*0x60a56d*/
    {
LABEL_33:
      if ( FilterDialogButtonAction(v4, hWnd) ) /*0x60a532*/
        hWnda[44] = 3; /*0x60a53f*/
      return 1; /*0x60a554*/
    }
  }
  hWnda[44] = 2; /*0x60a581*/
  return 1; /*0x60a47a*/

}
}
// 0x60A5B0
namespace gamemd {
AbstractClass * * Dialog::DispatchEvent(HWND hWnd, LPARAM a2)
{

  int v2; // ebp
  int v3; // edi
  unsigned int *v4; // esi
  unsigned int *v5; // eax
  int v6; // edi
  int v7; // eax
  int v9; // eax
  unsigned int *i; // eax
  unsigned int *j; // eax
  int v12; // edi
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // eax
  bool v17; // [esp+13h] [ebp-11h] BYREF
  int v18; // [esp+14h] [ebp-10h]
  int v19; // [esp+18h] [ebp-Ch] BYREF
  int v20; // [esp+1Ch] [ebp-8h] BYREF
  int v21; // [esp+20h] [ebp-4h] BYREF

  v2 = hWnd; /*0x60a5b5*/
  v3 = ((int (*)(int))GetParent)(hWnd); /*0x60a5c2*/
  v4 = 0; /*0x60a5c9*/
  v18 = v3; /*0x60a5cb*/
  v19 = v2; /*0x60a5d1*/
  if ( dword_A8ED54[52076] ) /*0x60a5d5*/
  {
    v5 = *(unsigned int **)(dword_A8ED54[52075] + 4 * HashTable::ComputeHash((int)&dword_A8ED54[52075], (int)&v19)); /*0x60a5ec*/
    if ( v5 ) /*0x60a5f1*/
    {
      while ( *v5 != v19 ) /*0x60a5f9*/
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
    return 1; /*0x60aa44*/
  if ( !IsValidActionDialog(v3, v2) ) /*0x60a621*/
  {
    IDA_LOBYTE(hWnd) = 0; /*0x60a6e7*/
    if ( UI_Helper_602B90(v3, v2) ) /*0x60a6ec*/
    {
      v9 = v4[5]; /*0x60a6f5*/
      v4[28] = 2; /*0x60a6f8*/
      if ( !v9 ) /*0x60a701*/
      {
        v20 = v3; /*0x60a70c*/
        if ( dword_A8ED54[52076] ) /*0x60a712*/
        {
          for ( i = *(unsigned int **)(dword_A8ED54[52075] + 4 * HashTable::ComputeHash((int)&dword_A8ED54[52075], (int)&v20)); /*0x60a72e*/
                i;
                i = (unsigned int *)i[129] )
          {
            if ( *i == v20 ) /*0x60a736*/
              break; /*0x60a736*/
          }
        }
        ((void (*)(int))GetDlgCtrlID)(v2); /*0x60a743*/
        v4[5] = 0; /*0x60a749*/
      }
LABEL_77:
      v4[38] = 0; /*0x60a9c8*/
      v4[39] = ((int (*)(void))GetTickCount)(); /*0x60a9dc*/
      v4[40] = UI_Helper_603240(v3, v2); /*0x60a9e7*/
      goto LABEL_78; /*0x60a9e7*/
    }
    v20 = v3; /*0x60a75a*/
    if ( dword_A8ED54[52076] ) /*0x60a760*/
    {
      for ( j = *(unsigned int **)(dword_A8ED54[52075] /*0x60a786*/
                           + 4
                           * (((int (*)(int *))dword_A8ED54[52081])(&v20)
                            & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1))); j; j = (unsigned int *)j[129] )
      {
        if ( *j == v20 ) /*0x60a78e*/
          break; /*0x60a78e*/
      }
    }
    ((void (*)(int))GetDlgCtrlID)(v2); /*0x60a7a1*/
    v21 = v3; /*0x60a7ab*/
    v12 = 0; /*0x60a7af*/
    v20 = 0; /*0x60a7b8*/
    HashTable::Get(&dword_A8ED54[52075], &v21, &v20); /*0x60a7bc*/
    if ( v20 ) /*0x60a7c7*/
      v12 = *(unsigned int *)(v20 + 108); /*0x60a7c9*/
    v13 = ((int (*)(int))GetDlgCtrlID)(v2); /*0x60a7cd*/
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
      || v13 != 1820 )
    {
      switch ( v12 ) /*0x60a908*/
      {
        case 148: /*0x60a908*/
          if ( v13 != 1770 && v13 != 1772 ) /*0x60a916*/
          {
            if ( v13 != 1771 ) /*0x60a91d*/
              goto LABEL_78; /*0x60a91d*/
            IDA_LOBYTE(hWnd) = 1; /*0x60a923*/
            v4[28] = 4; /*0x60a928*/
            goto LABEL_74; /*0x60a92f*/
          }
          break;
        case 259: /*0x60a908*/
          if ( v13 != 1835 ) /*0x60a93e*/
            goto LABEL_78; /*0x60a93e*/
          IDA_LOBYTE(hWnd) = 1; /*0x60a944*/
          v4[28] = 4; /*0x60a949*/
          goto LABEL_74; /*0x60a950*/
        case 3015: /*0x60a908*/
          if ( v13 != 1835 ) /*0x60a95f*/
            goto LABEL_78; /*0x60a95f*/
          IDA_LOBYTE(hWnd) = 1; /*0x60a965*/
          v4[28] = 4; /*0x60a96a*/
          goto LABEL_74; /*0x60a971*/
        default:
          if ( v12 != 196 || v13 != 1961 ) /*0x60a980*/
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
              ((void (*)(int, unsigned int, int, unsigned int))SetTimer)(v2, 0, v15, 0); /*0x60a9fd*/
              if ( (unsigned char)hWnd ) /*0x60aa09*/
              {
                *((unsigned char *)v4 + 168) = 1; /*0x60aa0b*/
                return 1; /*0x60aa1e*/
              }
            }
            return 1; /*0x60aa09*/
          }
          break;
      }
    }
    IDA_LOBYTE(hWnd) = 1; /*0x60a982*/
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
    v3 = v18; /*0x60a9c4*/
    goto LABEL_77; /*0x60a9c4*/
  }
  v4[28] = 1; /*0x60a630*/
  *((unsigned char *)v4 + 168) = 0; /*0x60a633*/
  v4[32] = 1; /*0x60a63a*/
  v4[33] = ValidateDialogEvent(v3, v2); /*0x60a649*/
  v4[34] = CtlDialogColorHandler(v3, v2); /*0x60a658*/
  v4[35] = ValidateDialogControl(v3, v2); /*0x60a663*/
  v20 = v3; /*0x60a66d*/
  v6 = 0; /*0x60a675*/
  hWnd = 0; /*0x60a67e*/
  HashTable::Get(&dword_A8ED54[52075], &v20, &hWnd); /*0x60a682*/
  if ( hWnd ) /*0x60a68d*/
    v6 = *(unsigned int *)(hWnd + 108); /*0x60a68f*/
  v7 = ((int (*)(int))GetDlgCtrlID)(v2); /*0x60a693*/
  if ( (v6 == 259 || v6 == 3015) && v7 == 1780 ) /*0x60a6ae*/
  {
    v4[36] = *(unsigned int *)(g_abs_87F7E8[7806] + 1732); /*0x60a6bd*/
    return 1; /*0x60a6c4*/
  }
  else
  {
    v4[36] = -1; /*0x60a6d2*/
    return 1; /*0x60a6d9*/
  }

}
}
// 0x60F760
namespace gamemd {
AbstractClass * * Dialog::InitWindow(int a1, int a2)
{

  unsigned int *v2; // ebp
  unsigned int *v3; // eax
  unsigned int *v4; // eax
  unsigned int *v5; // eax
  unsigned int *v7; // eax
  unsigned int *v8; // esi
  int v9; // edx
  int v10; // eax
  unsigned int *v11; // eax
  unsigned int *i; // eax
  void *v13[128]; // [esp+10h] [ebp-200h] BYREF

  v2 = 0; /*0x60f76f*/
  if ( dword_A8ED54[52076] /*0x60f79c*/
    && (v3 = *(unsigned int **)(dword_A8ED54[52075]
                        + 4
                        * (((int (*)(int *))dword_A8ED54[52081])(&a1)
                         & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)))) != 0 )
  {
    while ( *v3 != a1 ) /*0x60f7a7*/
    {
      v3 = (unsigned int *)v3[129]; /*0x60f7a9*/
      if ( !v3 ) /*0x60f7b1*/
        goto LABEL_5; /*0x60f7b1*/
    }
    v3[9] = a2; /*0x60f7fa*/
    return 1; /*0x60f7fd*/
  }
  else
  {
LABEL_5:
    memset(v13, 0, sizeof(v13)); /*0x60f7b3*/
    v13[26] = (void *)11; /*0x60f7c9*/
    v13[25] = (void *)g_abs_87F7E8[29498]; /*0x60f7d4*/
    v4 = (unsigned int *)RA2_OPNEW(4); /*0x60f7d8*/
    if ( v4 ) /*0x60f7e3*/
      v5 = unknown_libname_74(v4); /*0x60f7e7*/
    else
      v5 = 0; /*0x60f80c*/
    v13[15] = v5; /*0x60f814*/
    v13[16] = 0; /*0x60f818*/
    v13[23] = 0; /*0x60f81c*/
    v13[36] = (void *)-1; /*0x60f820*/
    v7 = (unsigned int *)RA2_OPNEW(520); /*0x60f82b*/
    v8 = v7; /*0x60f830*/
    if ( v7 ) /*0x60f837*/
      DialogControl::Constructor(v7 + 1); /*0x60f83c*/
    else
      v8 = 0; /*0x60f843*/
    *v8 = a1; /*0x60f854*/
    DialogClass::CopyTemplateStruct(v8 + 1, v13); /*0x60f856*/
    v8[129] = 0; /*0x60f862*/
    v9 = ((int (*)(int *))dword_A8ED54[52081])(&a1) & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1); /*0x60f882*/
    v10 = *(unsigned int *)(dword_A8ED54[52075] + 4 * v9); /*0x60f884*/
    *(unsigned int *)(dword_A8ED54[52075] + 4 * v9) = v8; /*0x60f887*/
    if ( v10 ) /*0x60f88c*/
      v8[129] = v10; /*0x60f88e*/
    if ( (double)(unsigned int)++dword_A8ED54[52076] / (double)dword_A8ED54[52077] >= *(double *)&dword_A8ED54[52085] ) /*0x60f8c9*/
      HashTable::Grow2(&dword_A8ED54[52075]); /*0x60f8d0*/
    if ( dword_A8ED54[52076] ) /*0x60f8db*/
    {
      v11 = *(unsigned int **)(dword_A8ED54[52075] /*0x60f8ff*/
                       + 4
                       * (((int (*)(int *))dword_A8ED54[52081])(&a1)
                        & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)));
      if ( v11 ) /*0x60f904*/
      {
        while ( *v11 != a1 ) /*0x60f90f*/
        {
          v11 = (unsigned int *)v11[129]; /*0x60f911*/
          if ( !v11 ) /*0x60f919*/
            goto LABEL_22; /*0x60f919*/
        }
        v2 = v11 + 1; /*0x60f921*/
      }
    }
LABEL_22:
    if ( v13[10] ) /*0x60f92a*/
    {
      RA2_OPDEL(v13[10]); /*0x60f92d*/
      v13[10] = 0; /*0x60f935*/
    }
    for ( i = v13[13]; v13[13]; i = v13[13] ) /*0x60f93f*/
      LinkedList::Remove(v13, i); /*0x60f946*/
    if ( v13[15] ) /*0x60f959*/
      DeleteAndZero::OrFree((void **)v13[15], 1); /*0x60f95d*/
    v2[8] = a2; /*0x60f96e*/
    return 1; /*0x60f962*/
  }

}
}
// 0x60F9A0
namespace gamemd {
AbstractClass * * Dialog::InitializeControls(HWND hWnd, LPARAM a2)
{

  char BitShift_Red; // al
  char BitMask_Green; // al
  int v4; // ecx
  int v5; // edx
  int (*v6)(int, int, int, int); // ebp
  const char **v7; // eax
  int v8; // edi
  void **v9; // eax
  unsigned int *v10; // esi
  int v11; // edx
  int v12; // eax
  void **v13; // eax
  unsigned int *v14; // esi
  int v15; // edx
  int v16; // eax
  void **v17; // ebp
  void **v18; // eax
  unsigned int *v19; // eax
  unsigned int *v20; // eax
  unsigned int *v21; // eax
  unsigned int *v22; // esi
  int v23; // eax
  int v24; // ecx
  void **v25; // eax
  unsigned int *i; // eax
  void *v27; // edx
  const char **v28; // eax
  bool v29; // zf
  int v30; // esi
  void *StringCSF; // [esp-4h] [ebp-AC4h]
  int v33; // [esp+10h] [ebp-AB0h] BYREF
  int64_t v34; // [esp+14h] [ebp-AACh]
  const char **v35; // [esp+1Ch] [ebp-AA4h]
  char ClassName[128]; // [esp+20h] [ebp-AA0h] BYREF
  __int128 v37; // [esp+A0h] [ebp-A20h] BYREF
  __int128 Rect; // [esp+B0h] [ebp-A10h] BYREF
  void *v39[128]; // [esp+C0h] [ebp-A00h] BYREF
  unsigned char lParam[2048]; // [esp+2C0h] [ebp-800h] BYREF

  ((void (*)(void *, char *, int))GetClassNameA)(hWnd, ClassName, 128); /*0x60f9bc*/
  IDA_LODWORD(v34) = ((int (*)(void *, int))GetWindowLongA)(hWnd, -16); /*0x60f9e2*/
  ScreenDialogToClient(hWnd, &v37); /*0x60f9e6*/
  ((void (*)(void *, __int128 *))GetClientRect)(hWnd, &Rect); /*0x60f9fb*/
  TimerPool::AllocSlot(hWnd); /*0x60fa08*/
  dword_A8ED54[52184] = 159; /*0x60fa14*/
  dword_A8ED54[52181] = 159; /*0x60fa19*/
  dword_A8ED54[52263] = 1; /*0x60fa2f*/
  dword_A8ED54[51919] = 127; /*0x60fa35*/
  dword_A8ED54[51924] = 0xFFFF; /*0x60fa3f*/
  dword_A8ED54[52183] = 15658734; /*0x60fa49*/
  dword_A8ED54[54833] = 40863; /*0x60fa53*/
  dword_A8ED54[51902] = 0xFFFFFF; /*0x60fa5d*/
  dword_A8ED54[54837] = (int)&off_808080; /*0x60fa67*/
  dword_A8ED54[54828] = 255; /*0x60fa71*/
  dword_A8ED54[54987] = (int)&loc_626261 + 1; /*0x60fa77*/
  dword_A8ED54[54836] = 255; /*0x60fa81*/
  dword_A8ED54[52257] = (int)&g_abs_87F7E8[173738] + 2; /*0x60fa87*/
  dword_A8ED54[52113] = 12959399; /*0x60fa91*/
  dword_A8ED54[52112] = (int)&unk_807A68; /*0x60fa9b*/
  dword_A8ED54[52073] = (int)&g_abs_87F7E8[124393] + 3; /*0x60faa5*/
  dword_A8ED54[54835] = (int)sub_646464; /*0x60faaf*/
  dword_A8ED54[54993] = 96; /*0x60fab9*/
  dword_A8ED54[54829] = 43690; /*0x60fac3*/
  dword_A8ED54[54999] = 2235147; /*0x60facd*/
  dword_A8ED54[52111] = (int)&loc_443714 + 2; /*0x60fad7*/
  if ( !dword_A8ED54[55008] ) /*0x60fae1*/
  {
    IDA_LOWORD(dword_A8ED54[55001]) = 255; /*0x60fae3*/
    IDA_LOWORD(dword_A8ED54[55001]) = 0xFFu >> GetBitShift_Green(); /*0x60faf2*/
    BitShift_Red = GetBitShift_Red(); /*0x60faf9*/
    IDA_HIWORD(dword_A8ED54[55001]) = 255; /*0x60fb01*/
    IDA_LOWORD(dword_A8ED54[55001]) <<= BitShift_Red; /*0x60fb08*/
    IDA_HIWORD(dword_A8ED54[55001]) = 0xFFu >> GetBitMask_Blue(); /*0x60fb17*/
    BitMask_Green = GetBitMask_Green(); /*0x60fb1e*/
    IDA_LOWORD(dword_A8ED54[55002]) = 255; /*0x60fb26*/
    IDA_HIWORD(dword_A8ED54[55001]) <<= BitMask_Green; /*0x60fb2d*/
    IDA_LOWORD(dword_A8ED54[55002]) = 0xFFu >> GetBitMask_Red(); /*0x60fb3c*/
    IDA_LOWORD(v4) = GetBitShift_Blue(); /*0x60fb48*/
    IDA_LOWORD(dword_A8ED54[55002]) <<= v4; /*0x60fb4b*/
    InitDialogCountryIcons(v4, v5); /*0x60fb52*/
    dword_A8ED54[55008] = 1; /*0x60fb57*/
  }
  v6 = 0; /*0x60fb67*/
  v33 = 11; /*0x60fb69*/
  v7 = (const char **)((int (*)(void *, int))GetWindowLongA)(hWnd, -21); /*0x60fb71*/
  v35 = v7; /*0x60fb75*/
  if ( v7 ) /*0x60fb79*/
    strcpy(ClassName, *v7); /*0x60fb95*/
  if ( !strcmp(ClassName, aScrollbar) ) /*0x60fbad*/
  {
    v6 = Scrollbar::DlgProc; /*0x60fbd4*/
    v33 = 8; /*0x60fbd9*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_ListBox) ) /*0x60fbf5*/
  {
    v6 = (int (*)(int, int, int, int))Options::DialogProc; /*0x60fc1c*/
    v33 = 4; /*0x60fc21*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x60fc3d*/
  {
    v6 = (int (*)(int, int, int, int))&ComboBoxDropDown::WndProc; /*0x60fc64*/
    v33 = 3; /*0x60fc69*/
  }
  else if ( !strcmp(ClassName, aMsctlsTrackbar) ) /*0x60fc85*/
  {
    v6 = TabControl::DlgProc; /*0x60fcac*/
    v33 = 7; /*0x60fcb1*/
  }
  else if ( !strcmp(ClassName, aMsctlsProgress) ) /*0x60fccd*/
  {
    v6 = NetworkLobbyPaintProc; /*0x60fcf4*/
    v33 = 6; /*0x60fcf9*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_NewEdit) ) /*0x60fd15*/
  {
    v6 = EditControl::WndProc; /*0x60fd3c*/
    v33 = 1; /*0x60fd41*/
  }
  else if ( !strcmp(ClassName, g_INI_Key_Edit) ) /*0x60fd5d*/
  {
    v6 = ListBox::EditSubclassProc; /*0x60fd84*/
    v33 = 1; /*0x60fd89*/
  }
  else if ( !strcmp(ClassName, aStatic) ) /*0x60fda5*/
  {
    v6 = BinkMovie::WndProc; /*0x60fdcc*/
    v33 = 2; /*0x60fdd1*/
  }
  else if ( !strcmp(ClassName, aSystabcontrol3) ) /*0x60fded*/
  {
    v6 = Dialog::TabControlPaint; /*0x60fe14*/
    v33 = 10; /*0x60fe19*/
  }
  else if ( !strcmp(ClassName, aButton) ) /*0x60fe35*/
  {
    if ( (v34 & 7) == 7 ) /*0x60fe68*/
    {
      v6 = GroupLabel::WndProc; /*0x60fe6a*/
      v33 = 0; /*0x60fe6f*/
    }
    else if ( (v34 & 0xB) == 0xB ) /*0x60fe80*/
    {
      v6 = TabControl::WndProc; /*0x60fe82*/
      v33 = 0; /*0x60fe87*/
    }
    else if ( (v34 & 3) == 3 ) /*0x60fe95*/
    {
      v6 = Checkbox::WndProc; /*0x60fe97*/
      v33 = 0; /*0x60fe9c*/
    }
    else
    {
      if ( (v34 & 9) == 9 ) /*0x60fea7*/
        v6 = ButtonOwnerDraw::DlgProc; /*0x60fea9*/
      v33 = 0; /*0x60feae*/
    }
  }
  else if ( !strcmp(ClassName, aMsctlsHotkey32) ) /*0x60fec3*/
  {
    v6 = RenderDialogSurface; /*0x60feea*/
    v33 = 9; /*0x60feef*/
  }
  else
  {
    v6 = sub_612A60; /*0x60fef9*/
  }
  v8 = ((int (*)(void *, int, int (*)(int, int, int, int)))SetWindowLongA)( /*0x60ff1a*/
         hWnd,
         -4,
         ComboBoxOwnerDraw::DlgProc);
  v9 = *(void ***)(dword_A8ED54[51931] /*0x60ff37*/
                 + 4
                 * (((int (*)(void **))dword_A8ED54[51937])(&hWnd) & ((1 << SLOBYTE(dword_A8ED54[51934])) - 1)));
  if ( v9 ) /*0x60ff3c*/
  {
    while ( *v9 != hWnd ) /*0x60ff47*/
    {
      v9 = (void **)v9[2]; /*0x60ff4d*/
      if ( !v9 ) /*0x60ff52*/
        goto LABEL_39; /*0x60ff52*/
    }
  }
  else
  {
LABEL_39:
    v10 = (unsigned int *)RA2_OPNEW(12); /*0x60ff54*/
    *v10 = hWnd; /*0x60ff67*/
    v10[1] = v6; /*0x60ff70*/
    v10[2] = 0; /*0x60ff73*/
    v11 = ((int (*)(void **))dword_A8ED54[51937])(&hWnd) & ((1 << SLOBYTE(dword_A8ED54[51934])) - 1); /*0x60ff90*/
    v12 = *(unsigned int *)(dword_A8ED54[51931] + 4 * v11); /*0x60ff92*/
    *(unsigned int *)(dword_A8ED54[51931] + 4 * v11) = v10; /*0x60ff95*/
    if ( v12 ) /*0x60ff9a*/
      v10[2] = v12; /*0x60ff9c*/
    v34 = (unsigned int)++dword_A8ED54[51932]; /*0x60ffaf*/
    IDA_LODWORD(v34) = dword_A8ED54[51933]; /*0x60ffbc*/
    if ( (double)(unsigned int)dword_A8ED54[51932] / (double)dword_A8ED54[51933] >= *(double *)&dword_A8ED54[51941] ) /*0x60ffd3*/
      Dialog::GrowBuffer(&dword_A8ED54[51931]); /*0x60ffda*/
  }
  v13 = *(void ***)(dword_A8ED54[52093] /*0x610001*/
                  + 4
                  * (((int (*)(void **))dword_A8ED54[52099])(&hWnd)
                   & ((1 << SLOBYTE(dword_A8ED54[52096])) - 1)));
  if ( v13 ) /*0x610006*/
  {
    while ( *v13 != hWnd ) /*0x610011*/
    {
      v13 = (void **)v13[2]; /*0x610017*/
      if ( !v13 ) /*0x61001c*/
        goto LABEL_46; /*0x61001c*/
    }
  }
  else
  {
LABEL_46:
    v14 = (unsigned int *)RA2_OPNEW(12); /*0x61001e*/
    *v14 = hWnd; /*0x610031*/
    v14[1] = v8; /*0x61003a*/
    v14[2] = 0; /*0x61003d*/
    v15 = ((int (*)(void **))dword_A8ED54[52099])(&hWnd) & ((1 << SLOBYTE(dword_A8ED54[52096])) - 1); /*0x61005a*/
    v16 = *(unsigned int *)(dword_A8ED54[52093] + 4 * v15); /*0x61005c*/
    *(unsigned int *)(dword_A8ED54[52093] + 4 * v15) = v14; /*0x61005f*/
    if ( v16 ) /*0x610064*/
      v14[2] = v16; /*0x610066*/
    v34 = (unsigned int)++dword_A8ED54[52094]; /*0x610079*/
    IDA_LODWORD(v34) = dword_A8ED54[52095]; /*0x610086*/
    if ( (double)(unsigned int)dword_A8ED54[52094] / (double)dword_A8ED54[52095] >= *(double *)&dword_A8ED54[52103] ) /*0x61009d*/
      Dialog::GrowBuffer(&dword_A8ED54[52093]); /*0x6100a4*/
  }
  v17 = 0; /*0x6100ae*/
  if ( dword_A8ED54[52076] /*0x6100db*/
    && (v18 = *(void ***)(dword_A8ED54[52075]
                        + 4
                        * (((int (*)(void **))dword_A8ED54[52081])(&hWnd)
                         & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)))) != 0 )
  {
    while ( *v18 != hWnd ) /*0x6100e6*/
    {
      v18 = (void **)v18[129]; /*0x6100e8*/
      if ( !v18 ) /*0x6100f0*/
        goto LABEL_54; /*0x6100f0*/
    }
    v17 = v18 + 1; /*0x610135*/
  }
  else
  {
LABEL_54:
    memset(v39, 0, sizeof(v39)); /*0x6100f2*/
    v39[26] = (void *)11; /*0x61010a*/
    v39[25] = (void *)g_abs_87F7E8[29498]; /*0x610115*/
    v19 = (unsigned int *)RA2_OPNEW(4); /*0x61011c*/
    if ( v19 ) /*0x610126*/
      v20 = unknown_libname_74(v19); /*0x61012a*/
    else
      v20 = 0; /*0x61013d*/
    v39[15] = v20; /*0x610144*/
    v39[16] = 0; /*0x61014b*/
    v39[23] = 0; /*0x610152*/
    v39[36] = (void *)-1; /*0x610159*/
    v21 = (unsigned int *)RA2_OPNEW(520); /*0x610164*/
    v22 = v21; /*0x610169*/
    if ( v21 ) /*0x610170*/
      DialogControl::Constructor(v21 + 1); /*0x610175*/
    else
      v22 = 0; /*0x61017c*/
    *v22 = hWnd; /*0x610190*/
    DialogClass::CopyTemplateStruct(v22 + 1, v39); /*0x610192*/
    v22[129] = 0; /*0x61019e*/
    v23 = HashTable::ComputeHash((int)&dword_A8ED54[52075], (int)&hWnd); /*0x6101aa*/
    v24 = *(unsigned int *)(dword_A8ED54[52075] + 4 * v23); /*0x6101b5*/
    *(unsigned int *)(dword_A8ED54[52075] + 4 * v23) = v22; /*0x6101b8*/
    if ( v24 ) /*0x6101bd*/
      v22[129] = v24; /*0x6101bf*/
    v34 = (unsigned int)++dword_A8ED54[52076]; /*0x6101d5*/
    IDA_LODWORD(v34) = dword_A8ED54[52077]; /*0x6101e2*/
    if ( (double)(unsigned int)dword_A8ED54[52076] / (double)dword_A8ED54[52077] >= *(double *)&dword_A8ED54[52085] ) /*0x6101f9*/
      HashTable::Grow2(&dword_A8ED54[52075]); /*0x610200*/
    if ( dword_A8ED54[52076] ) /*0x61020b*/
    {
      v25 = *(void ***)(dword_A8ED54[52075] + 4 * HashTable::ComputeHash((int)&dword_A8ED54[52075], (int)&hWnd)); /*0x610225*/
      if ( v25 ) /*0x61022a*/
      {
        while ( *v25 != hWnd ) /*0x610235*/
        {
          v25 = (void **)v25[129]; /*0x610237*/
          if ( !v25 ) /*0x61023f*/
            goto LABEL_71; /*0x61023f*/
        }
        v17 = v25 + 1; /*0x610247*/
      }
    }
LABEL_71:
    GadgetClass::SetTooltip(v39, 0); /*0x61024a*/
    for ( i = v39[13]; v39[13]; i = v39[13] ) /*0x610260*/
      LinkedList::Remove(v39, i); /*0x61026a*/
    if ( v39[15] ) /*0x610283*/
      DeleteAndZero::OrFree((void **)v39[15], 1); /*0x610287*/
  }
  v27 = a2; /*0x610290*/
  v17[26] = (void *)v33; /*0x610297*/
  v28 = v35; /*0x61029a*/
  v29 = v35 == 0; /*0x61029e*/
  *v17 = v27; /*0x6102a0*/
  if ( !v29 ) /*0x6102a3*/
    v17[21] = (void *)v28[1]; /*0x6102a8*/
  v30 = 0; /*0x6102bd*/
  v33 = 0; /*0x6102bf*/
  if ( Dialog::UpdateControlState(&dword_A8ED54[52093], &hWnd, &v33) && v33 ) /*0x6102d2*/
    v30 = *(unsigned int *)v33; /*0x6102d4*/
  lParam[0] = 0; /*0x6102ee*/
  ((void (*)(int, void *, int, int, unsigned char *))CallWindowProcA)(v30, hWnd, 13, 2048, lParam); /*0x6102f5*/
  if ( lParam[0] ) /*0x610302*/
  {
    StringCSF = GetStringCSF((void *)lParam, 0, g_Str_File_ownrdraw_cpp, 7392); /*0x61031c*/
    GadgetClass::SetTooltip(v17, StringCSF); /*0x61031d*/
  }
  else
  {
    GadgetClass::SetTooltip(v17, 0); /*0x610322*/
  }
  v17[11] = 0; /*0x610327*/
  ((void (*)(void *, int, unsigned int, unsigned int))SendMessageA)(hWnd, 1175, 0, 0); /*0x610339*/
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
  void **v7; // ecx
  void *v8; // edi
  double v9; // st7
  void **v10; // eax
  void *v11; // eax
  void *hWnd; // [esp+Ch] [ebp-20Ch] BYREF
  int64_t v14; // [esp+10h] [ebp-208h] BYREF
  void *v15[128]; // [esp+18h] [ebp-200h] BYREF

  ((void (*)(void *, int (*)(int, int), unsigned int))EnumChildWindows)(this, DestroyDialogChildWindow, 0); /*0x610374*/
  hWnd = this; /*0x610389*/
  DynamicArray::Resize(&dword_A8ED54[52093], (int *)&hWnd, &v14); /*0x61038d*/
  memset(v15, 0, sizeof(v15)); /*0x6103a3*/
  v15[26] = (void *)11; /*0x6103a7*/
  v15[25] = (void *)g_abs_87F7E8[29498]; /*0x6103b2*/
  v2 = (unsigned int *)RA2_OPNEW(4); /*0x6103b9*/
  if ( v2 ) /*0x6103c3*/
    v3 = unknown_libname_74(v2); /*0x6103c7*/
  else
    v3 = 0; /*0x6103ce*/
  v15[15] = v3; /*0x6103d0*/
  v15[16] = 0; /*0x6103e3*/
  v15[23] = 0; /*0x6103e7*/
  v15[36] = (void *)-1; /*0x6103eb*/
  Dialog::BindGadgetData(&dword_A8ED54[52075], (int *)&hWnd, (char *)v15); /*0x6103f6*/
  if ( v15[10] ) /*0x610401*/
  {
    RA2_OPDEL(v15[10]); /*0x610404*/
    v15[10] = 0; /*0x61040c*/
  }
  for ( i = v15[13]; v15[13]; i = v15[13] ) /*0x610416*/
    LinkedList::Remove(v15, i); /*0x61041d*/
  v5 = v15[15]; /*0x61042a*/
  if ( v15[15] ) /*0x610430*/
  {
    DeleteAndZero::Alt((void **)v15[15]); /*0x610434*/
    RA2_OPDEL(v5); /*0x61043a*/
  }
  if ( dword_A8ED54[51932] ) /*0x610449*/
  {
    v14 = (unsigned int)(dword_A8ED54[51932] - 1); /*0x610456*/
    *(float *)&v14 = (double)v14 / (double)dword_A8ED54[51933]; /*0x610472*/
    v6 = ((int (*)(void **))dword_A8ED54[51937])(&hWnd) & ((1 << SLOBYTE(dword_A8ED54[51934])) - 1); /*0x61048a*/
    v7 = *(void ***)(dword_A8ED54[51931] + 4 * v6); /*0x610491*/
    if ( v7 ) /*0x610496*/
    {
      if ( *v7 == hWnd ) /*0x6104a4*/
      {
        v8 = v7[2]; /*0x6104a6*/
        RA2_OPDEL(*(void **)(dword_A8ED54[51931] + 4 * v6)); /*0x6104aa*/
        v9 = *(float *)&v14; /*0x6104b8*/
        *(unsigned int *)(dword_A8ED54[51931] + 4 * v6) = v8; /*0x6104bc*/
        --dword_A8ED54[51932]; /*0x6104cb*/
        if ( v9 > *(double *)&dword_A8ED54[51939] ) /*0x6104d5*/
          goto LABEL_22; /*0x6104d5*/
        goto LABEL_21; /*0x6104d5*/
      }
      v10 = (void **)v7[2]; /*0x6104d9*/
      if ( v10 ) /*0x6104de*/
      {
        while ( *v10 != hWnd ) /*0x6104e2*/
        {
          v7 = v10; /*0x6104e4*/
          v10 = (void **)v10[2]; /*0x6104e6*/
          if ( !v10 ) /*0x6104eb*/
            goto LABEL_20; /*0x6104eb*/
        }
        v7[2] = v10[2]; /*0x6104f3*/
        --dword_A8ED54[51932]; /*0x6104fd*/
        RA2_OPDEL(v10); /*0x610503*/
      }
LABEL_20:
      if ( *(float *)&v14 <= *(double *)&dword_A8ED54[51939] ) /*0x61051a*/
LABEL_21:
        HashTable::Shrink2(&dword_A8ED54[51931]); /*0x61051c*/
    }
  }
LABEL_22:
  v11 = (void *)((int (*)(void *, int))GetWindowLongA)(hWnd, -21); /*0x610526*/
  if ( v11 ) /*0x610535*/
    RA2_OPDEL(v11); /*0x610538*/
  ((void (*)(void *, int, unsigned int))SetWindowLongA)(hWnd, -21, 0); /*0x610548*/
  Object::RemoveObjectArray(hWnd); /*0x610552*/
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
      v9 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v8 + 4); /*0x613881*/
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

  int result; // eax
  int SystemMetrics; // esi
  int v4; // esi
  int v5; // [esp+8h] [ebp-24h] BYREF
  int v6; // [esp+Ch] [ebp-20h] BYREF
  int v7; // [esp+10h] [ebp-1Ch]
  int v8; // [esp+14h] [ebp-18h]
  int v9; // [esp+18h] [ebp-14h]
  __int128 Rect; // [esp+1Ch] [ebp-10h] BYREF

  result = g_abs_87F7E8[7880]; /*0x6213a0*/
  if ( g_abs_87F7E8[7880] ) /*0x6213ae*/
  {
    result = g_abs_87F7E8[7882]; /*0x6213b4*/
    if ( g_abs_87F7E8[7882] ) /*0x6213bb*/
    {
      ScreenDialogToClient(*((unsigned int *)this + 5), &v6); /*0x6213c8*/
      ((void (*)(unsigned int, __int128 *))GetClientRect)(*((unsigned int *)this + 5), &Rect); /*0x6213d6*/
      result = ((int (*)(unsigned int, int))GetWindowLongA)(*((unsigned int *)this + 5), -16); /*0x6213e2*/
      if ( ((unsigned int)&ToggleClass::`RTTI Class Hierarchy Descriptor' & result) != 0 ) /*0x6213ed*/
      {
        SystemMetrics = GetSystemMetrics(5); /*0x6213fa*/
        result = GetSystemMetrics(6); /*0x6213fe*/
        v6 += SystemMetrics; /*0x62140e*/
        v8 -= SystemMetrics; /*0x62141c*/
        v7 += result; /*0x621420*/
        v9 -= result; /*0x621424*/
      }
      if ( *this == 4 ) /*0x62142c*/
      {
        result = dword_A8ED54[52076]; /*0x62142e*/
        v4 = *((unsigned int *)this + 5); /*0x621433*/
        v5 = v4; /*0x621438*/
        if ( dword_A8ED54[52076] ) /*0x62143c*/
        {
          result = *(unsigned int *)(dword_A8ED54[52075] /*0x62145d*/
                             + 4
                             * (((int (*)(int *))dword_A8ED54[52081])(&v5)
                              & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)));
          if ( result ) /*0x621462*/
          {
            while ( *(unsigned int *)result != v5 ) /*0x62146a*/
            {
              result = *(unsigned int *)(result + 516); /*0x62146c*/
              if ( !result ) /*0x621474*/
                return result; /*0x621474*/
            }
            result += 4; /*0x621480*/
            if ( result ) /*0x621485*/
            {
              *(unsigned int *)(result + 232) = *((unsigned int *)this + 4); /*0x621491*/
              ((void (*)(int, unsigned int *, unsigned int))InvalidateRect)(v4, (unsigned int *)this + 7, 0); /*0x621497*/
              return ((int (*)(int))UpdateWindow)(v4); /*0x62149e*/
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
  HWND *v4; // eax
  LONG right; // eax
  LONG bottom; // ecx
  unsigned int *v7; // esi
  LONG v8; // eax
  LONG v9; // ecx
  int v10; // edx
  HWND *v11; // eax
  unsigned int *v12; // eax
  HWND *v13; // eax
  int v14; // edi
  HWND *v15; // eax
  unsigned int *v16; // eax
  unsigned int *v17; // eax
  int v18; // eax
  HWND *v19; // eax
  unsigned int *v20; // eax
  int v21; // eax
  int v22; // eax
  void *v23; // edi
  int v24; // eax
  int v25; // edi
  int v26; // ebp
  int v27; // ecx
  HWND v28; // [esp+10h] [ebp-58h] BYREF
  HWND v29; // [esp+14h] [ebp-54h] BYREF
  HWND v30; // [esp+18h] [ebp-50h] BYREF
  LONG v31; // [esp+1Ch] [ebp-4Ch]
  LONG v32; // [esp+20h] [ebp-48h]
  LONG v33; // [esp+24h] [ebp-44h]
  LONG left; // [esp+28h] [ebp-40h] BYREF
  LONG top; // [esp+2Ch] [ebp-3Ch]
  LONG v36; // [esp+30h] [ebp-38h]
  LONG v37; // [esp+34h] [ebp-34h]
  struct tagRECT v38; // [esp+38h] [ebp-30h] BYREF
  LONG v39; // [esp+48h] [ebp-20h] BYREF
  LONG v40; // [esp+4Ch] [ebp-1Ch]
  LONG v41; // [esp+50h] [ebp-18h]
  LONG v42; // [esp+54h] [ebp-14h]
  struct tagRECT Rect; // [esp+58h] [ebp-10h] BYREF

  v1 = 0; /*0x621e9c*/
  v3 = 0; /*0x621ea0*/
  v30 = hWnd; /*0x621ea4*/
  v28 = hWnd; /*0x621ea8*/
  if ( g_abs_AC1B04 ) /*0x621eac*/
  {
    v4 = (HWND *)*((unsigned int *)g_abs_AC1B00 + HashTable::ComputeHash((int)&g_abs_AC1B00, (int)&v28)); /*0x621ec3*/
    if ( v4 ) /*0x621ec8*/
    {
      while ( *v4 != v28 ) /*0x621ed0*/
      {
        v4 = (HWND *)v4[129]; /*0x621ed2*/
        if ( !v4 ) /*0x621eda*/
          goto LABEL_7; /*0x621eda*/
      }
      v3 = v4 + 1; /*0x621ee2*/
    }
  }
LABEL_7:
  if ( v3 ) /*0x621ee7*/
  {
    GetClientRect(hWnd, &Rect); /*0x621ef3*/
    ScreenDialogToClient(hWnd, &v38); /*0x621eff*/
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
      v7 = (unsigned int *)v3[4]; /*0x621f4d*/
      if ( !v7 ) /*0x621f52*/
      {
        v7 = RA2_OPNEW(0x20u); /*0x621f5b*/
        if ( v7 ) /*0x621f62*/
        {
          v8 = Rect.right; /*0x621f64*/
          v9 = Rect.bottom; /*0x621f68*/
          v7[1] = Rect.right; /*0x621f6c*/
          v7[2] = v9; /*0x621f74*/
          v7[3] = 0; /*0x621f7c*/
          *v7 = &XSurface_Vtable; /*0x621f7f*/
          v7[4] = 2; /*0x621f85*/
          Buffer::Init(v7 + 5, 0, 2 * v9 * v8); /*0x621f8c*/
          *v7 = &BSurface_Vtable; /*0x621f91*/
        }
        else
        {
          v7 = 0; /*0x621f99*/
        }
        v3[4] = v7; /*0x621f9b*/
        bottom = v37; /*0x621fa3*/
        ++g_abs_AC48B4; /*0x621fa8*/
        right = v36; /*0x621fad*/
      }
      v10 = v3[44]; /*0x621fb1*/
      if ( v10 == 1 ) /*0x621fba*/
      {
        if ( SessionClass::GetGameSpeed(g_abs_A8B238) ) /*0x621fc5*/
        {
          RenderCreditsScreen((int)v7, &left, 0); /*0x621fd5*/
        }
        else if ( UI_Draw_72E260() ) /*0x621fdf*/
        {
          RenderScoreScreen((int)v7, &left, *((unsigned char *)v3 + 212) == 0); /*0x621ffe*/
          v29 = hWnd; /*0x62200a*/
          if ( g_abs_AC1B04 ) /*0x62200e*/
          {
            v11 = (HWND *)*((unsigned int *)g_abs_AC1B00 + (g_abs_AC1B18(&v29) & ((1 << g_abs_AC1B0C) - 1))); /*0x62202f*/
            if ( v11 ) /*0x622034*/
            {
              while ( *v11 != v29 ) /*0x62203c*/
              {
                v11 = (HWND *)v11[129]; /*0x62203e*/
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
          if ( !g_abs_AC1B04 ) /*0x622063*/
            goto LABEL_33; /*0x622063*/
          v13 = (HWND *)*((unsigned int *)g_abs_AC1B00 + (g_abs_AC1B18(&v29) & ((1 << g_abs_AC1B0C) - 1))); /*0x622084*/
          if ( !v13 ) /*0x622089*/
            goto LABEL_33; /*0x622089*/
          while ( *v13 != v29 ) /*0x622091*/
          {
            v13 = (HWND *)v13[129]; /*0x622093*/
            if ( !v13 ) /*0x62209b*/
              goto LABEL_33; /*0x62209b*/
          }
          v16 = v13 + 1; /*0x6220ee*/
          if ( v16 ) /*0x6220f3*/
            v14 = v16[56]; /*0x6220f5*/
          else
LABEL_33:
            v14 = 0; /*0x62209d*/
          v29 = v30; /*0x6220aa*/
          if ( !g_abs_AC1B04 ) /*0x6220ae*/
            goto LABEL_43; /*0x6220ae*/
          v15 = (HWND *)*((unsigned int *)g_abs_AC1B00 + (g_abs_AC1B18(&v29) & ((1 << g_abs_AC1B0C) - 1))); /*0x6220cf*/
          if ( !v15 ) /*0x6220d4*/
            goto LABEL_43; /*0x6220d4*/
          while ( *v15 != v29 ) /*0x6220dc*/
          {
            v15 = (HWND *)v15[129]; /*0x6220de*/
            if ( !v15 ) /*0x6220e6*/
              goto LABEL_43; /*0x6220e6*/
          }
          v17 = v15 + 1; /*0x622101*/
          if ( v17 ) /*0x622106*/
            v18 = v17[57]; /*0x622108*/
          else
LABEL_43:
            v18 = 0; /*0x622110*/
          UI_Draw_72E730((int)v7, &left, v1, v14, v18); /*0x62211b*/
          if ( *((unsigned char *)v3 + 213) ) /*0x622120*/
            UI_Draw_72E8C0((int)v7, &left); /*0x622130*/
          if ( *((unsigned char *)v3 + 214) ) /*0x622135*/
            UI_Draw_72E860((int)v7, &left); /*0x622145*/
          if ( g_abs_AC1B04 ) /*0x622159*/
          {
            v19 = (HWND *)*((unsigned int *)g_abs_AC1B00 + (g_abs_AC1B18(&v30) & ((1 << g_abs_AC1B0C) - 1))); /*0x62217e*/
            if ( v19 ) /*0x622183*/
            {
              while ( *v19 != v30 ) /*0x62218f*/
              {
                v19 = (HWND *)v19[129]; /*0x622191*/
                if ( !v19 ) /*0x622199*/
                  goto LABEL_72; /*0x622199*/
              }
              v20 = v19 + 1; /*0x6221a8*/
              if ( v20 && *((unsigned char *)v20 + 215) ) /*0x6221b3*/
                UI_Draw_72E920((int)v7, &left); /*0x6221c7*/
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
        v21 = *v7; /*0x622204*/
        v39 = 0; /*0x62220a*/
        v40 = 0; /*0x62220e*/
        (*(void (**)(unsigned int *, LONG *, int, LONG *, unsigned int, int))(v21 + 8))( /*0x622212*/
          v7,
          &v39,
          g_abs_887310,
          &left,
          0,
          1);
        if ( SessionClass::GetGameSpeed(g_abs_A8B238) ) /*0x62221a*/
        {
          v22 = *((unsigned int *)g_abs_A8B230 + 3374); /*0x622229*/
          if ( v22 ) /*0x622231*/
          {
            if ( v22 == 1 ) /*0x622243*/
            {
              v23 = g_abs_B0FC88; /*0x622245*/
              v24 = UI_Draw_72AFF0(); /*0x62224b*/
            }
            else
            {
              v23 = g_abs_B0FC8C; /*0x622252*/
              v24 = UI_Draw_72B010(); /*0x622258*/
            }
          }
          else
          {
            v23 = g_abs_B0FC84; /*0x622233*/
            v24 = UI_Draw_72AFF0(); /*0x622239*/
          }
        }
        else
        {
          v23 = g_abs_B0FC80; /*0x62225f*/
          v24 = UI_Draw_72B030(); /*0x622265*/
        }
        v30 = 0; /*0x62226c*/
        v31 = 0; /*0x622270*/
        if ( v24 && v23 ) /*0x62227c*/
          DrawToSurfaceSHP((int)v7, v24, (int)v23, 0, (int *)&v30, &v39, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6222a8*/
      }
      else
      {
        v25 = HashTable::Find(g_abs_AC4848, g_abs_833654, 0); /*0x6222d3*/
        v42 = v37; /*0x6222d9*/
        v33 = v37; /*0x6222dd*/
        v30 = (HWND)left; /*0x6222e9*/
        v31 = top; /*0x6222ed*/
        v41 = v36; /*0x6222f5*/
        v32 = v36; /*0x6222f9*/
        v39 = left - v38.left; /*0x6222fd*/
        v40 = top - v38.top; /*0x622301*/
        v26 = (*(int (**)(int))(*(unsigned int *)v25 + 124))(v25); /*0x62230c*/
        v27 = (*(int (**)(int))(*(unsigned int *)v25 + 128))(v25); /*0x622318*/
        if ( g_abs_8A00A4 > v26 ) /*0x622321*/
          v30 = (HWND)((char *)v30 + (g_abs_8A00A4 - v26) / -2); /*0x622332*/
        if ( *(&g_abs_8A00A4 + 1) > v27 ) /*0x62233d*/
          v31 += (*(&g_abs_8A00A4 + 1) - v27) / -2; /*0x62234e*/
        (*(void (**)(unsigned int *, LONG *, int, HWND *, unsigned int, int))(*v7 + 8))(v7, &v39, v25, &v30, 0, 1); /*0x622365*/
      }
LABEL_72:
      if ( v7 ) /*0x62236a*/
      {
        v41 = v36; /*0x622380*/
        v42 = v37; /*0x62238a*/
        v40 = top - v38.top; /*0x622392*/
        v39 = left - v38.left; /*0x6223a7*/
        (*(void (**)(int, LONG *, unsigned int *, LONG *, unsigned int, int))(*(unsigned int *)g_abs_887310 + 8))( /*0x6223b3*/
          g_abs_887310,
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
  int *i; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax

  Timer::PumpMessages((int *)g_abs_87F6C0[44]); /*0x62272a*/
  Dialog::IdleProcess(this); /*0x622731*/
  ((void (*)(void *))DestroyWindow)(this); /*0x622737*/
  result = 0; /*0x622745*/
  if ( dword_A8ED54[233599] > 0 ) /*0x622749*/
  {
    for ( i = &dword_A8ED54[233461]; (void *)*i != this; i += 2 ) /*0x62274f*/
    {
      if ( ++result >= dword_A8ED54[233599] ) /*0x62275e*/
        return result; /*0x62275e*/
    }
    memcpy( /*0x622783*/
      (void *)(8 * result + 12004648),
      (const void *)(8 * result + 12004656),
      8 * (dword_A8ED54[233599] + 0x1FFFFFFF * (result + 1)));
    v4 = dword_A8ED54[233599]; /*0x622788*/
    dword_A8ED54[2 * dword_A8ED54[233599] + 233459] = 0; /*0x622790*/
    dword_A8ED54[2 * v4 + 233460] = 0; /*0x622797*/
    v5 = v4 - 1; /*0x62279e*/
    dword_A8ED54[233599] = v5; /*0x6227a1*/
    if ( v5 <= 0 ) /*0x6227a6*/
    {
      dword_A8ED54[233596] = 0; /*0x6227de*/
      dword_A8ED54[233597] = 0; /*0x6227e5*/
      ((void (*)(int))SetForegroundWindow)(dword_A8ED54[233983]); /*0x6227eb*/
      return ((int (*)(int))SetFocus)(dword_A8ED54[233983]); /*0x6227f7*/
    }
    else
    {
      v6 = dword_A8ED54[2 * v5 + 233459]; /*0x6227a8*/
      v7 = dword_A8ED54[2 * v5 + 233460]; /*0x6227af*/
      dword_A8ED54[233596] = v6; /*0x6227b7*/
      dword_A8ED54[233597] = v7; /*0x6227bd*/
      ((void (*)(int))SetForegroundWindow)(v6); /*0x6227c2*/
      return ((int (*)(int))SetFocus)(dword_A8ED54[233596]); /*0x6227cf*/
    }
  }
  return result; /*0x622760*/

}
}
// 0x6233A0
namespace gamemd {
CampaignClass * * Dialog::CleanupTree()
{

  unsigned int *i; // ecx
  unsigned int *v3; // eax
  unsigned int *v4; // edx
  void **v5; // esi

  if ( *((unsigned int *)this + 10) ) /*0x6233a3*/
  {
    RA2_OPDEL(*(void **)((char *)this + 40)); /*0x6233ab*/
    *((unsigned int *)this + 10) = 0; /*0x6233b3*/
  }
  for ( i = *(unsigned int **)((char *)this + 52); i; i = *(unsigned int **)((char *)this + 52) ) /*0x6233bf*/
  {
    v3 = i; /*0x6233c1*/
    v4 = 0; /*0x6233c3*/
    while ( i != v3 ) /*0x6233cb*/
    {
      v4 = v3; /*0x6233cd*/
      v3 = (unsigned int *)*v3; /*0x6233cf*/
      if ( !v3 ) /*0x6233d3*/
        goto LABEL_12; /*0x6233d3*/
    }
    if ( v4 ) /*0x6233dd*/
      *v4 = *v3; /*0x6233e1*/
    else
      *((unsigned int *)this + 13) = *v3; /*0x6233e7*/
    RA2_OPDEL(v3); /*0x6233eb*/
LABEL_12:
    ; /*0x6233f3*/
  }
  v5 = *(void ***)((char *)this + 60); /*0x6233fa*/
  if ( v5 ) /*0x6233ff*/
  {
    DeleteAndZero::Alt(v5); /*0x623403*/
    RA2_OPDEL(v5); /*0x623409*/
  }

}
}
// 0x624930
namespace gamemd {
int Dialog::UpdateControlState(unsigned int * a2, unsigned int * a3)
{

  unsigned int *v4; // eax

  if ( !*((unsigned int *)this + 1) ) /*0x624934*/
    return 0; /*0x62493c*/
  v4 = *(unsigned int **)(*(unsigned int *)this + 16 * (((int (*)(unsigned int *))*((unsigned int *)this + 6))(a2) & ((1 << *((unsigned int *)this + 3)) - 1))); /*0x62495a*/
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
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  unsigned int *v13; // [esp+4h] [ebp-4h]

  if ( *((unsigned char *)this + 20) != 1 ) /*0x624be8*/
  {
    v2 = *((unsigned int *)this + 2); /*0x624bf0*/
    v3 = (unsigned int *)*this; /*0x624bf3*/
    v4 = *((unsigned int *)this + 3) + 1; /*0x624bfc*/
    *((unsigned int *)this + 2) = 2 * v2; /*0x624bfd*/
    v13 = v3; /*0x624c00*/
    *((unsigned int *)this + 3) = v4; /*0x624c08*/
    v5 = RA2_OPNEW(8 * v2); /*0x624c13*/
    v6 = 4 * *((unsigned int *)this + 2); /*0x624c18*/
    *this = v5; /*0x624c1f*/
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
            v10 = ((int (*)(int))*((unsigned int *)this + 6))(v9) & ((1 << *((unsigned int *)this + 3)) - 1); /*0x624c4b*/
            v11 = *(unsigned int *)(*(unsigned int *)this + 16 * v10); /*0x624c4f*/
            *(unsigned int *)(*(unsigned int *)this + 16 * v10) = v9; /*0x624c55*/
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
    RA2_OPDEL(v3); /*0x624c6e*/
  }

}
}
// 0x624CA0
namespace gamemd {
AbstractClass * * Dialog::BindGadgetData(int * a2, char * Block)
{

  int v4; // eax
  int v6; // edx
  char *v7; // ecx
  int v8; // eax
  int ***v10; // eax
  bool v11; // zf
  const void *v12; // esi
  int v13; // eax
  void *v14; // eax
  int v15; // edi
  int v16; // ebx
  unsigned int *i; // eax
  void **v18; // esi
  bool v19; // c0
  bool v20; // c3
  unsigned int v21; // esi
  int *v22; // ebx
  int v23; // ecx
  void *v24; // edi
  unsigned int v25; // edx
  int *v26; // edi
  unsigned int v27; // ebx
  int v28; // esi
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  char *v32; // esi
  char v33; // bl
  int v35; // edx
  char *v36; // [esp+10h] [ebp-14h]
  int v37; // [esp+10h] [ebp-14h]
  int v38; // [esp+14h] [ebp-10h]
  float v39; // [esp+18h] [ebp-Ch]
  int v40; // [esp+1Ch] [ebp-8h]
  int v41; // [esp+1Ch] [ebp-8h]
  int v42; // [esp+28h] [ebp+4h]
  int v43; // [esp+28h] [ebp+4h]
  void *Blocka; // [esp+2Ch] [ebp+8h]
  int *Blockb; // [esp+2Ch] [ebp+8h]
  void *Blockc; // [esp+2Ch] [ebp+8h]

  v4 = *((unsigned int *)this + 1); /*0x624cab*/
  if ( !v4 ) /*0x624cb0*/
    return 0; /*0x624cb5*/
  v39 = (double)(unsigned int)(v4 - 1) / (double)*((int *)this + 2); /*0x624ce0*/
  v6 = (*((int (**)(int *))(unsigned int *)this + 6))(a2) & ((1 << *((unsigned int *)this + 3)) - 1); /*0x624cf5*/
  v38 = v6; /*0x624cf7*/
  v7 = *(char **)(*(unsigned int *)this + 4 * v6); /*0x624cfb*/
  v36 = v7; /*0x624d00*/
  if ( !v7 ) /*0x624d04*/
    return 0; /*0x624d09*/
  v8 = *a2; /*0x624d12*/
  if ( *(unsigned int *)v7 == *a2 ) /*0x624d18*/
  {
    v10 = (int ***)(v7 + 4); /*0x624d22*/
    v11 = Block == v7 + 4; /*0x624d25*/
    v42 = (int)(v7 + 4); /*0x624d27*/
    v40 = *((unsigned int *)Block + 13); /*0x624d2e*/
    Blocka = (void *)*((unsigned int *)Block + 10); /*0x624d35*/
    v37 = *((unsigned int *)Block + 15); /*0x624d3c*/
    if ( !v11 ) /*0x624d40*/
    {
      qmemcpy(Block, v10, 0x200u); /*0x624d4f*/
      *((unsigned int *)Block + 15) = v37; /*0x624d55*/
      *((unsigned int *)Block + 10) = Blocka; /*0x624d5c*/
      *((unsigned int *)Block + 13) = v40; /*0x624d5f*/
      v12 = (const void *)*((unsigned int *)v7 + 11); /*0x624d62*/
      if ( Blocka ) /*0x624d67*/
      {
        RA2_OPDEL(Blocka); /*0x624d6a*/
        v10 = (int ***)v42; /*0x624d6f*/
        *((unsigned int *)Block + 10) = 0; /*0x624d76*/
      }
      if ( v12 && *(unsigned short *)v12 ) /*0x624d81*/
      {
        v13 = wcslen(v12); /*0x624d88*/
        v14 = (void *)RA2_OPNEW(2 * v13 + 2); /*0x624d92*/
        *((unsigned int *)Block + 10) = v14; /*0x624d99*/
        wcscpy(v14, v12); /*0x624d9c*/
        v10 = (int ***)v42; /*0x624da1*/
      }
      SymbolTable::Rebuild(Block, v10[13]); /*0x624dae*/
      v6 = v38; /*0x624db3*/
    }
    v15 = *(unsigned int *)(*(unsigned int *)this + 4 * v6); /*0x624dba*/
    v16 = *(unsigned int *)(v15 + 516); /*0x624dbf*/
    if ( v15 ) /*0x624dc5*/
    {
      GadgetClass::SetTooltip((void **)(v15 + 4), 0); /*0x624dce*/
      for ( i = *(unsigned int **)(v15 + 56); i; i = *(unsigned int **)(v15 + 56) ) /*0x624dd8*/
        LinkedList::Remove((unsigned int *)(v15 + 4), i); /*0x624ddd*/
      v18 = *(void ***)(v15 + 64); /*0x624de9*/
      if ( v18 ) /*0x624dee*/
        DeleteAndZero::OrFree(v18, 1); /*0x624df4*/
      RA2_OPDEL((void *)v15); /*0x624dfa*/
      v6 = v38; /*0x624dff*/
    }
    *(unsigned int *)(*(unsigned int *)this + 4 * v6) = v16; /*0x624e0d*/
    v19 = v39 < *((unsigned int *)this + 4); /*0x624e13*/
    v20 = v39 == *((unsigned int *)this + 4); /*0x624e13*/
    --*((unsigned int *)this + 1); /*0x624e17*/
    if ( v19 || v20 ) /*0x624e1c*/
    {
      v21 = *((unsigned int *)this + 2); /*0x624e25*/
      if ( v21 > *((unsigned int *)this + 12) && *((unsigned char *)this + 20) != 1 ) /*0x624e37*/
      {
        v22 = *(int **)this; /*0x624e40*/
        Blockb = *(int **)this; /*0x624e45*/
        v23 = *((unsigned int *)this + 3) - 1; /*0x624e4b*/
        *((unsigned int *)this + 2) = v21 >> 1; /*0x624e4c*/
        *((unsigned int *)this + 3) = v23; /*0x624e56*/
        v24 = (void *)RA2_OPNEW(4 * (v21 >> 1)); /*0x624e62*/
        v25 = 4 * *((unsigned int *)this + 2); /*0x624e67*/
        *(unsigned int *)this = v24; /*0x624e6e*/
        memset(v24, 0, v25); /*0x624e74*/
        if ( (int)v21 > 0 ) /*0x624e7f*/
        {
          v26 = v22; /*0x624e81*/
          v27 = v21; /*0x624e83*/
          do /*0x624ebe*/
          {
            v28 = *v26; /*0x624e85*/
            if ( *v26 ) /*0x624e85*/
            {
              do /*0x624eb8*/
              {
                v29 = (*((int (**)(int))(unsigned int *)this + 6))(v28) & ((1 << *((unsigned int *)this + 3)) - 1); /*0x624e9b*/
                v30 = *(unsigned int *)(*(unsigned int *)this + 4 * v29); /*0x624ea0*/
                *(unsigned int *)(*(unsigned int *)this + 4 * v29) = v28; /*0x624ea6*/
                v31 = *(unsigned int *)(v28 + 516); /*0x624ea8*/
                *(unsigned int *)(v28 + 516) = v30; /*0x624eae*/
                v28 = v31; /*0x624eb4*/
              }
              while ( v31 ); /*0x624eb8*/
            }
            ++v26; /*0x624eba*/
            --v27; /*0x624ebd*/
          }
          while ( v27 ); /*0x624ebe*/
          v22 = Blockb; /*0x624ec0*/
        }
        RA2_OPDEL(v22); /*0x624ec5*/
      }
    }
    return 1; /*0x624ed0*/
  }
  else
  {
    v32 = (char *)*((unsigned int *)v7 + 129); /*0x624ed9*/
    v33 = 0; /*0x624edf*/
    v43 = (int)v32; /*0x624ee3*/
    if ( v32 ) /*0x624ee7*/
    {
      while ( *(unsigned int *)v32 != v8 ) /*0x624ef9*/
      {
        v36 = v32; /*0x624efb*/
        v43 = *((unsigned int *)v32 + 129); /*0x624f07*/
        if ( !v43 ) /*0x624f0b*/
          goto LABEL_41; /*0x624f0b*/
        v7 = v32; /*0x624eef*/
        v32 = (char *)*((unsigned int *)v32 + 129); /*0x624ef3*/
      }
      v11 = Block == v32 + 4; /*0x624f19*/
      v35 = *((unsigned int *)Block + 13); /*0x624f1e*/
      Blockc = (void *)*((unsigned int *)Block + 10); /*0x624f21*/
      v41 = *((unsigned int *)Block + 15); /*0x624f28*/
      if ( !v11 ) /*0x624f2c*/
      {
        qmemcpy(Block, v32 + 4, 0x200u); /*0x624f37*/
        *((unsigned int *)Block + 13) = v35; /*0x624f3d*/
        *((unsigned int *)Block + 10) = Blockc; /*0x624f40*/
        *((unsigned int *)Block + 15) = v41; /*0x624f47*/
        GadgetClass::SetTooltip((void **)Block, *((void **)v32 + 11)); /*0x624f50*/
        SymbolTable::Rebuild(Block, *(int ***)(v43 + 56)); /*0x624f62*/
        v7 = v36; /*0x624f67*/
        v32 = (char *)v43; /*0x624f6b*/
      }
      *((unsigned int *)v7 + 129) = *((unsigned int *)v32 + 129); /*0x624f75*/
      --*((unsigned int *)this + 1); /*0x624f81*/
      if ( v32 ) /*0x624f84*/
      {
        Dialog::CleanupTree((int)(v32 + 4)); /*0x624f89*/
        RA2_OPDEL(v32); /*0x624f8f*/
      }
      v33 = 1; /*0x624f97*/
    }
LABEL_41:
    if ( v39 <= *((unsigned int *)this + 4) ) /*0x624fa5*/
      HashTable::Rebuild2(this); /*0x624fa9*/
    return v33; /*0x624fb0*/
  }

}
}
// 0x671EA0
namespace gamemd {
INIClass * * Dialog::ReadMultiplayerDialogSettings()
{

  int result; // eax
  int IntOverwriteINIClass; // eax
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
  char BoolOverwriteINIClass; // al
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
  int v37; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection(v37, (uint8_t *)aMultiplayerdia); /*0x671eb0*/
  if ( result ) /*0x671ebc*/
  {
    *((unsigned int *)this + 1312) = INIClass::ReadInt_Overwrite(aMultiplayerdia, aMinmoney, *((unsigned int *)this + 1312)); /*0x671edc*/
    IntOverwriteINIClass = INIClass::ReadInt_Overwrite(aMultiplayerdia, aMoney, *((unsigned int *)this + 1313)); /*0x671ef7*/
    v4 = *((unsigned int *)this + 1314); /*0x671efc*/
    *((unsigned int *)this + 1313) = IntOverwriteINIClass; /*0x671f02*/
    v5 = INIClass::ReadInt_Overwrite(aMultiplayerdia, aMaxmoney, v4); /*0x671f16*/
    v6 = *((unsigned int *)this + 1315); /*0x671f1b*/
    *((unsigned int *)this + 1314) = v5; /*0x671f21*/
    *((unsigned int *)this + 1315) = INIClass::ReadInt_Overwrite(aMultiplayerdia, aMoneyincrement, v6); /*0x671f3b*/
    v7 = INIClass::ReadInt_Overwrite(aMultiplayerdia, aMinunitcount, *((unsigned int *)this + 1316)); /*0x671f56*/
    v8 = *((unsigned int *)this + 1317); /*0x671f5b*/
    *((unsigned int *)this + 1316) = v7; /*0x671f61*/
    v9 = INIClass::ReadInt_Overwrite(aMultiplayerdia, g_INI_Key_UnitCount, v8); /*0x671f75*/
    v10 = *((unsigned int *)this + 1318); /*0x671f7a*/
    *((unsigned int *)this + 1317) = v9; /*0x671f80*/
    *((unsigned int *)this + 1318) = INIClass::ReadInt_Overwrite(aMultiplayerdia, aMaxunitcount, v10); /*0x671f9a*/
    v11 = INIClass::ReadInt_Overwrite(aMultiplayerdia, g_INI_Key_TechLevel, *((unsigned int *)this + 1319)); /*0x671fb5*/
    v12 = *((unsigned int *)this + 1320); /*0x671fba*/
    *((unsigned int *)this + 1319) = v11; /*0x671fc0*/
    v13 = INIClass::ReadInt_Overwrite(aMultiplayerdia, g_INI_Key_GameSpeed, v12); /*0x671fd4*/
    v14 = *((unsigned int *)this + 1321); /*0x671fd9*/
    *((unsigned int *)this + 1320) = v13; /*0x671fdf*/
    *((unsigned int *)this + 1321) = INIClass::ReadInt_Overwrite(aMultiplayerdia, aAidifficulty, v14); /*0x671ff9*/
    v15 = INIClass::ReadInt_Overwrite(aMultiplayerdia, aAiplayers, *((unsigned int *)this + 1322)); /*0x672014*/
    v16 = *((unsigned char *)this + 5292); /*0x672019*/
    *((unsigned int *)this + 1322) = v15; /*0x67201f*/
    BoolOverwriteINIClass = INIClass::ReadBool_Overwrite(aMultiplayerdia, aBridgedestruct, v16); /*0x672033*/
    v18 = *((unsigned char *)this + 5293); /*0x672038*/
    *((unsigned char *)this + 5292) = BoolOverwriteINIClass; /*0x67203e*/
    *((unsigned char *)this + 5293) = INIClass::ReadBool_Overwrite(aMultiplayerdia, aShadowgrow, v18); /*0x672058*/
    v19 = INIClass::ReadBool_Overwrite(aMultiplayerdia, aShroud, *((unsigned char *)this + 5294)); /*0x672073*/
    v20 = *((unsigned char *)this + 5295); /*0x672078*/
    *((unsigned char *)this + 5294) = v19; /*0x67207e*/
    v21 = INIClass::ReadBool_Overwrite(aMultiplayerdia, aBases, v20); /*0x672092*/
    v22 = *((unsigned char *)this + 5296); /*0x672097*/
    *((unsigned char *)this + 5295) = v21; /*0x67209d*/
    *((unsigned char *)this + 5296) = INIClass::ReadBool_Overwrite(aMultiplayerdia, g_INI_Key_TiberiumGrows, v22); /*0x6720b7*/
    v23 = INIClass::ReadBool_Overwrite(aMultiplayerdia, aCrates, *((unsigned char *)this + 5297)); /*0x6720d2*/
    v24 = *((unsigned char *)this + 5298); /*0x6720d7*/
    *((unsigned char *)this + 5297) = v23; /*0x6720dd*/
    v25 = INIClass::ReadBool_Overwrite(aMultiplayerdia, aCapturetheflag, v24); /*0x6720f1*/
    v26 = *((unsigned char *)this + 5299); /*0x6720f6*/
    *((unsigned char *)this + 5298) = v25; /*0x6720fc*/
    *((unsigned char *)this + 5299) = INIClass::ReadBool_Overwrite(aMultiplayerdia, aHarvestertruce, v26); /*0x672116*/
    v27 = INIClass::ReadBool_Overwrite(aMultiplayerdia, aMultiengineer, *((unsigned char *)this + 5300)); /*0x672131*/
    v28 = *((unsigned char *)this + 5301); /*0x672136*/
    *((unsigned char *)this + 5300) = v27; /*0x67213c*/
    v29 = INIClass::ReadBool_Overwrite(aMultiplayerdia, aAlliesallowed, v28); /*0x672150*/
    v30 = *((unsigned char *)this + 5307); /*0x672155*/
    *((unsigned char *)this + 5301) = v29; /*0x67215b*/
    *((unsigned char *)this + 5307) = INIClass::ReadBool_Overwrite(aMultiplayerdia, aAllychangeallo, v30); /*0x672175*/
    v31 = INIClass::ReadBool_Overwrite(aMultiplayerdia, g_INI_Key_ShortGame, *((unsigned char *)this + 5302)); /*0x672190*/
    v32 = *((unsigned char *)this + 5305); /*0x672195*/
    *((unsigned char *)this + 5302) = v31; /*0x67219b*/
    v33 = INIClass::ReadBool_Overwrite(aMultiplayerdia, g_INI_Key_SuperWeaponsAllowed, v32); /*0x6721af*/
    v34 = *((unsigned char *)this + 5306); /*0x6721b4*/
    *((unsigned char *)this + 5305) = v33; /*0x6721ba*/
    *((unsigned char *)this + 5306) = INIClass::ReadBool_Overwrite(aMultiplayerdia, g_INI_Key_BuildOffAlly, v34); /*0x6721d4*/
    v35 = INIClass::ReadBool_Overwrite(aMultiplayerdia, g_INI_Key_FogOfWar, *((unsigned char *)this + 5303)); /*0x6721ef*/
    v36 = *((unsigned char *)this + 5304); /*0x6721f4*/
    *((unsigned char *)this + 5303) = v35; /*0x6721fa*/
    result = INIClass::ReadBool_Overwrite(aMultiplayerdia, aMcvredeploys, v36); /*0x67220e*/
    *((unsigned char *)this + 5304) = result; /*0x672213*/
    IDA_LOBYTE(result) = 1; /*0x67221a*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x672221*/
  }
  return result; /*0x672219*/

}
}
// 0x775940
namespace gamemd {
int Dialog::FindByHandle()
{

  int v1; // eax
  void **i; // edx

  v1 = g_abs_B72F50 - 1; /*0x775945*/
  if ( g_abs_B72F50 - 1 < 0 ) /*0x775948*/
    return 0; /*0x77595d*/
  for ( i = (void **)(8 * v1 + 12004652); this != *i; i -= 2 ) /*0x77594a*/
  {
    if ( --v1 < 0 ) /*0x77595b*/
      return 0; /*0x77595b*/
  }
  return g_abs_B72D28[2 * v1]; /*0x77595f*/

}
}
// 0x775B10
namespace gamemd {
int Dialog::GetCurrent()
{

  return dword_B72F44; /*0x775b15*/

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

  if ( this == (void *)1699 ) /*0x4e4ec7*/
    return 0; /*0x4e4ec9*/
  if ( this == (void *)1700 ) /*0x4e4ed1*/
    return 1; /*0x4e4ed3*/
  if ( this == (void *)1701 ) /*0x4e4ede*/
    return 2; /*0x4e4ee0*/
  if ( this == (void *)1702 ) /*0x4e4eeb*/
    return 3; /*0x4e4eed*/
  if ( this == (void *)1703 ) /*0x4e4ef8*/
    return 4; /*0x4e4efa*/
  if ( this == (void *)1704 ) /*0x4e4f05*/
    return 5; /*0x4e4f07*/
  if ( this == (void *)1706 ) /*0x4e4f12*/
    return 6; /*0x4e4f14*/
  v2 = -(this != (void *)1707); /*0x4e4f21*/
  IDA_LOBYTE(v2) = v2 & 0xF8; /*0x4e4f23*/
  return v2 + 7; /*0x4e4ecb*/

}
} // namespace gamemd

// 0x4E59A0
namespace gamemd {
int Dialog::OptionIDToIndex()
{

  int v2; // eax

  if ( this == (void *)1901 ) /*0x4e59a7*/
    return 0; /*0x4e59a9*/
  if ( this == (void *)1902 ) /*0x4e59b1*/
    return 1; /*0x4e59b3*/
  if ( this == (void *)1903 ) /*0x4e59be*/
    return 2; /*0x4e59c0*/
  if ( this == (void *)1904 ) /*0x4e59cb*/
    return 3; /*0x4e59cd*/
  if ( this == (void *)1905 ) /*0x4e59d8*/
    return 4; /*0x4e59da*/
  if ( this == (void *)1906 ) /*0x4e59e5*/
    return 5; /*0x4e59e7*/
  if ( this == (void *)1907 ) /*0x4e59f2*/
    return 6; /*0x4e59f4*/
  v2 = -(this != (void *)1908); /*0x4e5a01*/
  IDA_LOBYTE(v2) = v2 & 0xF8; /*0x4e5a03*/
  return v2 + 7; /*0x4e59ab*/

}
} // namespace gamemd

// 0x5E26C0
namespace gamemd {
int Dialog::FindGameUI()
{

  int result; // eax

  result = Dialog::FindByHandle((void *)0xC2); /*0x5e26c5*/
  if ( !result ) /*0x5e26cc*/
  {
    result = Dialog::FindByHandle((void *)0xC9); /*0x5e26d3*/
    if ( !result ) /*0x5e26da*/
    {
      result = Dialog::FindByHandle((void *)0xBC); /*0x5e26e1*/
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

  void *result; // eax
  void *Current; // esi
  int v4; // eax
  unsigned char Buffer[2048]; // [esp+8h] [ebp-800h] BYREF
  va_list Format; // [esp+814h] [ebp+Ch] BYREF

  va_start(Format, BufferCount);
  memset(Buffer, 0, sizeof(Buffer)); /*0x5e2717*/
  vswprintf((void *const)Buffer, BufferCount, (const void *const)Format); /*0x5e272a*/
  result = (void *)Dialog::GetCurrent(); /*0x5e2732*/
  if ( result ) /*0x5e2739*/
  {
    Current = (void *)Dialog::GetCurrent(); /*0x5e2746*/
    v4 = ((int (*)(void *, int))GetDlgItem)(Current, 1343); /*0x5e274e*/
    if ( v4 ) /*0x5e2752*/
    {
      return (void *)DrawDialogText(aP0, Buffer, v4); /*0x5e276d*/
    }
    else
    {
      while ( 1 ) /*0x5e2756*/
      {
        result = (void *)Dialog::FindByPtr(Current); /*0x5e2756*/
        Current = result; /*0x5e275b*/
        if ( !result ) /*0x5e275f*/
          break; /*0x5e275f*/
        v4 = ((int (*)(void *, int))GetDlgItem)(result, 1343); /*0x5e2767*/
        if ( v4 ) /*0x5e276b*/
          return (void *)DrawDialogText(aP0, Buffer, v4); /*0x5e276b*/
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
  void *Current; // esi
  int v4; // eax
  unsigned char Buffer[2048]; // [esp+8h] [ebp-800h] BYREF
  va_list Format; // [esp+814h] [ebp+Ch] BYREF

  va_start(Format, aP1);
  memset(Buffer, 0, sizeof(Buffer)); /*0x5e27a7*/
  vswprintf((void *const)Buffer, aP1, (const void *const)Format); /*0x5e27ba*/
  result = Dialog::GetCurrent(); /*0x5e27c2*/
  if ( result ) /*0x5e27c9*/
  {
    Current = (void *)Dialog::GetCurrent(); /*0x5e27d6*/
    v4 = ((int (*)(void *, int))GetDlgItem)(Current, 1461); /*0x5e27de*/
    if ( v4 ) /*0x5e27e2*/
    {
      return DrawDialogText(aP0, Buffer, v4); /*0x5e27fd*/
    }
    else
    {
      while ( 1 ) /*0x5e27e6*/
      {
        result = Dialog::FindByPtr(Current); /*0x5e27e6*/
        Current = (void *)result; /*0x5e27eb*/
        if ( !result ) /*0x5e27ef*/
          break; /*0x5e27ef*/
        v4 = ((int (*)(int, int))GetDlgItem)(result, 1461); /*0x5e27f7*/
        if ( v4 ) /*0x5e27fb*/
          return DrawDialogText(aP0, Buffer, v4); /*0x5e27fb*/
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

  int v1; // eax

  v1 = ((int (*)(void *, int))GetDlgItem)(this, 1448); /*0x5e2f66*/
  return ((int (*)(int, int, unsigned int, int))SendMessageA)(v1, 1202, 0, 11055906); /*0x5e2f7f*/

}
} // namespace gamemd

// 0x5E9950
namespace gamemd {
int Dialog::MapPlayerIDToIndex()
{

  int v2; // eax

  if ( this == (void *)1041 ) /*0x5e9957*/
    return 0; /*0x5e9959*/
  if ( this == (void *)1042 ) /*0x5e9961*/
    return 1; /*0x5e9963*/
  if ( this == (void *)1043 ) /*0x5e996e*/
    return 2; /*0x5e9970*/
  if ( this == (void *)1044 ) /*0x5e997b*/
    return 3; /*0x5e997d*/
  if ( this == (void *)1045 ) /*0x5e9988*/
    return 4; /*0x5e998a*/
  if ( this == (void *)1046 ) /*0x5e9995*/
    return 5; /*0x5e9997*/
  if ( this == (void *)1047 ) /*0x5e99a2*/
    return 6; /*0x5e99a4*/
  v2 = -(this != (void *)1048); /*0x5e99b1*/
  IDA_LOBYTE(v2) = v2 & 0xF8; /*0x5e99b3*/
  return v2 + 7; /*0x5e995b*/

}
} // namespace gamemd

// 0x5F3450
namespace gamemd {
unsigned int Dialog::CheckButtonState()
{

  int v0; // esi
  unsigned char v2[84]; // [esp+4h] [ebp-54h] BYREF

  v0 = (*(int (**)(HWND))(*(unsigned int *)g_ClipboardBuffer + 12))(g_ClipboardBuffer); /*0x5f3467*/
  if ( (*(int (**)(HWND, char *, int, unsigned char *, int, int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f3483*/
         g_ClipboardBuffer,
         g_abs_832678,
         13,
         v2,
         81,
         90,
         1,
         -1) == 2 )
    return v0 & 0xFFFFFF7F; /*0x5f3485*/
  return v0; /*0x5f348d*/

}
} // namespace gamemd

// 0x602AE0
namespace gamemd {
BOOL Dialog::IsSpecialTemplate()
{

  return this == (void *)293 /*0x602b7a*/
      || this == (void *)231
      || this == (void *)278
      || this == (void *)194
      || this == (void *)201
      || this == (void *)285
      || this == (void *)284
      || this == (void *)276
      || this == (void *)700
      || this == (void *)275
      || this == (void *)265
      || this == (void *)271
      || this == (void *)279
      || this == (void *)230
      || this == (void *)243
      || this == (void *)244
      || this == (void *)270
      || this == (void *)274;

}
} // namespace gamemd

// 0x60AAA0
namespace gamemd {
BOOL Dialog::EnumAndCleanup()
{

  return ((int (*)(void *, int (*)(int, int), unsigned int))EnumChildWindows)(this, sub_60AA60, 0); /*0x60aaae*/

}
} // namespace gamemd

// 0x60F320
namespace gamemd {
BOOL Dialog::SubclassEditControl(HWND hWnd, LPARAM a2)
{

  int v2; // ebx
  int v3; // esi
  int v4; // edx
  int v5; // esi
  unsigned int *v6; // ebx
  int v7; // eax
  int dwNewLong; // [esp+10h] [ebp-A4h]
  int Rect; // [esp+14h] [ebp-A0h] BYREF
  int Rect_4; // [esp+18h] [ebp-9Ch]
  int Rect_8; // [esp+1Ch] [ebp-98h]
  int Rect_12; // [esp+20h] [ebp-94h]
  unsigned int v14[4]; // [esp+24h] [ebp-90h] BYREF
  char ClassName[128]; // [esp+34h] [ebp-80h] BYREF

  v2 = ((int (*)(int, int))GetWindowLongA)(hWnd, -16); /*0x60f341*/
  ((void (*)(int, int, unsigned int))SetWindowLongA)(hWnd, -21, 0); /*0x60f343*/
  if ( (v2 & 0x10000000) != 0 && (v2 & 0x8000000) == 0 ) /*0x60f35b*/
  {
    ((void (*)(int, char *, int))GetClassNameA)(hWnd, ClassName, 128); /*0x60f36c*/
    if ( !strcmp(ClassName, g_INI_Key_Edit) ) /*0x60f381*/
    {
      v3 = ((int (*)(int))GetParent)(hWnd); /*0x60f3b9*/
      ScreenDialogToClient(hWnd, &Rect); /*0x60f3bb*/
      ScreenDialogToClient(v3, v14); /*0x60f3c6*/
      v4 = 1073742096; /*0x60f3df*/
      if ( (v2 & 0x10000) != 0 ) /*0x60f3ea*/
        v4 = 1073807632; /*0x60f3ec*/
      v5 = ((int (*)(unsigned int, char *, unsigned int, int, int, int, int, int, int, unsigned int, int, unsigned int))CreateWindowExA)( /*0x60f427*/
             0,
             g_INI_Key_ListBox,
             0,
             v4,
             Rect - v14[0],
             Rect_4 - v14[1],
             Rect_8 - Rect,
             Rect_12 - Rect_4,
             v3,
             0,
             dword_A8ED54[233831],
             0);
      v6 = (unsigned int *)RA2_OPNEW(8); /*0x60f431*/
      *v6 = g_INI_Key_NewEdit; /*0x60f436*/
      v6[1] = ((int (*)(int, int))GetWindowLongA)(hWnd, -16); /*0x60f43f*/
      ((void (*)(int, int, unsigned int *))SetWindowLongA)(v5, -21, v6); /*0x60f44b*/
      ((void (*)(int, unsigned int))EnableWindow)(hWnd, 0); /*0x60f450*/
      ((void (*)(int, unsigned int))ShowWindow)(hWnd, 0); /*0x60f459*/
      ((void (*)(int, int))EnableWindow)(v5, 1); /*0x60f462*/
      ((void (*)(int, int))ShowWindow)(v5, 1); /*0x60f46b*/
      dwNewLong = ((int (*)(int, int))GetWindowLongA)(hWnd, -12); /*0x60f479*/
      v7 = ((int (*)(int, int))GetWindowLongA)(v5, -12); /*0x60f47d*/
      ((void (*)(int, int, int))SetWindowLongA)(hWnd, -12, v7); /*0x60f483*/
      ((void (*)(int, int, int))SetWindowLongA)(v5, -12, dwNewLong); /*0x60f48d*/
    }
  }
  return 1; /*0x60f48f*/

}
} // namespace gamemd

// 0x622800
namespace gamemd {
HWND Dialog::Show()
{

  ((void (*)(void *, int))ShowWindow)(this, 1); /*0x622806*/
  ((void (*)(void *))SetForegroundWindow)(this); /*0x62280d*/
  return Timer::PumpMessages((int *)g_abs_87F6C0[44]); /*0x62281e*/

}
} // namespace gamemd

// 0x623120
namespace gamemd {
char Dialog::PumpMessages()
{

  MessageLoop(); /*0x623120*/
  if ( !g_abs_A8B238 || g_abs_A8B238 == 5 || g_abs_A8D60E || g_abs_A8DAB4 ) /*0x623143*/
  {
    Event::Dispatch(); /*0x62315a*/
  }
  else if ( !(uint8_t)VtableStub::55CBF0() && GameFrameLoop() ) /*0x62314e*/
  {
    return 1; /*0x623159*/
  }
  return 0; /*0x623159*/

}
} // namespace gamemd

// 0x7759B0
namespace gamemd {
int Dialog::FindByPtr()
{

  int v1; // eax
  void **i; // edx

  v1 = dword_A8ED54[233599] - 1; /*0x7759b5*/
  if ( dword_A8ED54[233599] - 1 < 0 ) /*0x7759b8*/
    return 0; /*0x7759d1*/
  for ( i = (void **)(8 * v1 + 12004648); this != *i || v1 <= 0; i -= 2 ) /*0x7759ba*/
  {
    if ( --v1 < 0 ) /*0x7759cf*/
      return 0; /*0x7759cf*/
  }
  return dword_A8ED54[2 * v1 + 233459]; /*0x7759d3*/

}
} // namespace gamemd

// 0x775BA0
namespace gamemd {
BOOL Dialog::GetField()
{

  EnumChildWindows(this, (WNDENUMPROC)DialogClass::Reposition, 1); /*0x775bab*/
  return DialogClass::Reposition((SkirmishDialog *)this, 0); /*0x775bb9*/

}
} // namespace gamemd

// 0x777060
namespace gamemd {
HWND Dialog::RestoreParent()
{

  int result; // eax

  result = ((int (*)(void *, int))GetWindowLongA)(this, -8); /*0x777066*/
  if ( result ) /*0x77706e*/
    return SetDialogParent(this); /*0x777074*/
  return result; /*0x777079*/

}
} // namespace gamemd

// 0x77D820
namespace gamemd {
char Dialog::UpdateGameUI()
{

  int GameUI; // eax

  Dialog::PumpMessages(); /*0x77d820*/
  GameUI = Dialog::FindGameUI(); /*0x77d825*/
  if ( GameUI ) /*0x77d82c*/
    ((void (*)(int, unsigned int, int))InvalidateRect)(GameUI, 0, 1); /*0x77d833*/
  return 0; /*0x77d83b*/

}
} // namespace gamemd

// 0x799D10
namespace gamemd {
HWND Dialog::CloseAll()
{

  void *result; // eax

  for ( result = (void *)Dialog::GetCurrent(); result; result = (void *)Dialog::GetCurrent() ) /*0x799d17*/
    CloseDialog(result, 0); /*0x799d1d*/
  return result; /*0x799d2b*/

}
} // namespace gamemd
