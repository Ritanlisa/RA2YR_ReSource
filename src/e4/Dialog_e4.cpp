// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Dialog_e4.hpp"

// 0x49F740
namespace gamemd {
void Dialog::MapDialogResource()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_49F740(int this)
{
  if ( *(_DWORD *)(this + 4) == 48879 ) /*0x49f74a*/
  {
    Debug::Log(); /*0x49f751*/
    MEMORY[0x89F75C] = MapViewOfFileEx(*(HANDLE *)(this + 12), 0xF001Fu, 0, 0, 0, 0); /*0x49f772*/
    Debug::Log(); /*0x49f77e*/
  }
}
}
} // namespace gamemd

// 0x5B5BC0
namespace gamemd {
int Dialog::InitializeGameSettings()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall InitializeGameSettingsDialog(HWND *this)
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

  Debug::Log(); /*0x5b5bcb*/
  DlgItem = GetDlgItem(*this, 1641); /*0x5b5be1*/
  if ( DlgItem ) /*0x5b5bf0*/
    SendMessageA(DlgItem, 0x405u, 1u, MEMORY[0xA8B270]); /*0x5b5c00*/
  v3 = GetDlgItem(*this, 1360); /*0x5b5c0a*/
  if ( v3 ) /*0x5b5c0e*/
    SendMessageA(v3, 0x405u, 1u, g_RulesInitConfig); /*0x5b5c1e*/
  v4 = GetDlgItem(*this, 1026); /*0x5b5c28*/
  if ( v4 ) /*0x5b5c2c*/
    SendMessageA(v4, 0x405u, 1u, MEMORY[0xA8B25C]); /*0x5b5c3c*/
  v5 = GetDlgItem(*this, 1362); /*0x5b5c46*/
  if ( v5 ) /*0x5b5c4a*/
    SendMessageA(v5, 0x405u, 1u, MEMORY[0xA8B274]); /*0x5b5c5a*/
  v6 = GetDlgItem(*this, 1321); /*0x5b5c64*/
  if ( v6 ) /*0x5b5c68*/
    SendMessageA(v6, 0x405u, 1u, 6 - MEMORY[0xA8B268]); /*0x5b5c7f*/
  v7 = GetDlgItem(*this, 1363); /*0x5b5c89*/
  if ( v7 ) /*0x5b5c8d*/
    SendMessageA(v7, 0x405u, 1u, MEMORY[0xA8B278]); /*0x5b5c9d*/
  v8 = GetDlgItem(*this, 1643); /*0x5b5ca7*/
  if ( v8 ) /*0x5b5cab*/
    SendMessageA(v8, 0xF1u, (_BYTE)MEMORY[0xA8B320] == 1, 0); /*0x5b5cc3*/
  v9 = GetDlgItem(*this, 1642); /*0x5b5ccd*/
  if ( v9 ) /*0x5b5cd1*/
    SendMessageA(v9, 0xF1u, MEMORY[0xA8B258] == 1, 0); /*0x5b5ce9*/
  v10 = GetDlgItem(*this, 1361); /*0x5b5cf3*/
  if ( v10 ) /*0x5b5cf7*/
    SendMessageA(v10, 0xF1u, MEMORY[0xA8B26C] == 1, 0); /*0x5b5d0f*/
  v11 = GetDlgItem(*this, 1358); /*0x5b5d19*/
  if ( v11 ) /*0x5b5d1d*/
    SendMessageA(v11, 0xF1u, MEMORY[0xA8B262] == 1, 0); /*0x5b5d35*/
  v12 = GetDlgItem(*this, 1690); /*0x5b5d3f*/
  if ( v12 ) /*0x5b5d43*/
    SendMessageA(v12, 0xF1u, MEMORY[0xA8B263] == 1, 0); /*0x5b5d5b*/
  v13 = GetDlgItem(*this, 1693); /*0x5b5d65*/
  if ( v13 ) /*0x5b5d69*/
    SendMessageA(v13, 0xF1u, (_BYTE)MEMORY[0xA8B264] == 1, 0); /*0x5b5d81*/
  v14 = GetDlgItem(*this, 1356); /*0x5b5d8b*/
  if ( v14 ) /*0x5b5d8f*/
    SendMessageA(v14, 0xF1u, MEMORY[0xA8B261] == 1, 0); /*0x5b5da7*/
  v15 = GetDlgItem(*this, 1357); /*0x5b5db1*/
  if ( v15 ) /*0x5b5db5*/
    SendMessageA(v15, 0xF1u, MEMORY[0xA8B31F] == 1, 0); /*0x5b5dcd*/
  v16 = GetDlgItem(*this, 1572); /*0x5b5dd7*/
  if ( v16 ) /*0x5b5ddb*/
    SendMessageA(v16, 0xF1u, MEMORY[0xA8B260] == 1, 0); /*0x5b5df3*/
  v17 = GetDlgItem(*this, 1430); /*0x5b5dfd*/
  if ( v17 ) /*0x5b5e01*/
    SendMessageA(v17, 0xF1u, MEMORY[0xA8B31D] == 1, 0); /*0x5b5e19*/
  v18 = GetDlgItem(*this, 1448); /*0x5b5e23*/
  if ( v18 ) /*0x5b5e27*/
    SendMessageA(v18, 0x4B2u, 0, (LPARAM)&MEMORY[0xA8B320] + 2); /*0x5b5e36*/
  if ( !MEMORY[0xAC1154] || !*(_DWORD *)MEMORY[0xAC1154] ) /*0x5b5e41*/
    Session::PrepareGame(*this); /*0x5b5e48*/
  v19 = GetDlgItem(*this, 1); /*0x5b5e51*/
  if ( v19 ) /*0x5b5e55*/
    EnableWindow(v19, 1); /*0x5b5e59*/
  return PlayVocClass(HIDWORD(MEMORY[0x8871E0]->MovieOff), 0x2000, 1.0, 0); /*0x5b5e7c*/
}
}
} // namespace gamemd

// 0x5D3490
namespace gamemd {
LONG Dialog::ShowMessageBox(int lParam, unsigned short * a2, Movie * aP2, IUnknown * aP3, IUnknown * aP4, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG Dialog::ShowMessageBox(int lParam, _WORD *a2, Movie *aP2, IUnknown *aP3, IUnknown *aP4, int a6)
{
  int v6; // ebp
  int v7; // ebx
  int v8; // edi
  unsigned __int16 v9; // cx
  ObjectClass *Dialog; // eax
  ObjectClass *v10; // esi
  HWND DlgItem; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  char v17; // [esp+Ch] [ebp-Ch]
  char v18; // [esp+Dh] [ebp-Bh]
  char v19; // [esp+Eh] [ebp-Ah]
  char v20; // [esp+Fh] [ebp-9h]
  LONG dwNewLong; // [esp+10h] [ebp-8h] BYREF
  int v22; // [esp+14h] [ebp-4h]

  dwNewLong = -1; /*0x5d349a*/
  v7 = 0; /*0x5d34a6*/
  v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 40))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x5d34ab*/
  v22 = v8; /*0x5d34b3*/
  if ( !lParam || (v19 = 1, !*(_WORD *)lParam) ) /*0x5d34b9*/
    v19 = 0; /*0x5d34c3*/
  if ( !a2 || (v20 = 1, !*a2) ) /*0x5d34d0*/
    v20 = 0; /*0x5d34db*/
  if ( !aP2 || (v17 = 1, !LOWORD(aP2->field_0)) ) /*0x5d34e8*/
    v17 = 0; /*0x5d34f3*/
  if ( !aP3 || (v18 = 1, !LOWORD(aP3->field_0)) ) /*0x5d3500*/
    v18 = 0; /*0x5d350b*/
  Screen::Capture(1, 0, 0, v6); /*0x5d3514*/
  v9 = 206; /*0x5d351d*/
  if ( v18 ) /*0x5d3524*/
  {
    v9 = 289; /*0x5d3526*/
  }
  else if ( v17 ) /*0x5d3533*/
  {
    v9 = 288; /*0x5d3535*/
  }
  Dialog = (ObjectClass *)CreateDialog(v9, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_5D36A0, 0); /*0x5d3541*/
  v10 = Dialog; /*0x5d3546*/
  if ( Dialog ) /*0x5d354a*/
  {
    SetWindowLongA((HWND)Dialog, 8, (LONG)&dwNewLong); /*0x5d3559*/
    if ( v19 ) /*0x5d3571*/
    {
      DlgItem = GetDlgItem((HWND)v10, 1456); /*0x5d3579*/
      SendMessageA(DlgItem, 0x4B2u, 0, lParam); /*0x5d3588*/
    }
    if ( v20 ) /*0x5d3590*/
    {
      v13 = GetDlgItem((HWND)v10, 1454); /*0x5d3598*/
      SendMessageA(v13, 0x4B2u, 0, (LPARAM)a2); /*0x5d35a7*/
      v7 = 1; /*0x5d35a9*/
    }
    if ( v17 ) /*0x5d35b4*/
    {
      v14 = GetDlgItem((HWND)v10, 2); /*0x5d35b9*/
      SendMessageA(v14, 0x4B2u, 0, (LPARAM)aP2); /*0x5d35c8*/
      v7 = 2; /*0x5d35ca*/
    }
    if ( v18 ) /*0x5d35d5*/
    {
      v15 = GetDlgItem((HWND)v10, 1455); /*0x5d35dd*/
      SendMessageA(v15, 0x4B2u, 0, (LPARAM)aP3); /*0x5d35ec*/
      v7 = 3; /*0x5d35ee*/
    }
    Dialog::Show((HWND)v10); /*0x5d35f5*/
    if ( v7 <= 0 ) /*0x5d35fd*/
    {
      dwNewLong = 0; /*0x5d3653*/
    }
    else
    {
      while ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 40))(*(_DWORD *)&stru_87C374.__pad_579C[23344]) ) /*0x5d3607*/
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x5d3616*/
      while ( dwNewLong < 0 ) /*0x5d362e*/
      {
        if ( Dialog::PumpMessages() ) /*0x5d3630*/
          break; /*0x5d3637*/
        if ( !HouseClass_Player.__pad_5568[22252] ) /*0x5d3640*/
          ScreenSaver::Process(0, v7, v6); /*0x5d3644*/
      }
    }
    Dialog::Destroy((SkirmishDialog *)v10); /*0x5d365d*/
    v8 = v22; /*0x5d3662*/
  }
  while ( v8 < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 40))(*(_DWORD *)&stru_87C374.__pad_579C[23344]) ) /*0x5d3673*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x5d367d*/
  return dwNewLong; /*0x5d3693*/
}
}
} // namespace gamemd

// 0x5D5DC0
namespace gamemd {
int Dialog::GetModeNeg2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Dialog_GetModeNeg2(_BYTE *this)
{
  return *(this + 63) != 0 ? 0 : -2;
}
}
} // namespace gamemd

// 0x5D5DD0
namespace gamemd {
int Dialog::GetMode3()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Dialog_GetMode3(_BYTE *this)
{
  return *(this + 60) != 0 ? 3 : -2;
}
}
} // namespace gamemd

// 0x5EE350
namespace gamemd {
HWND Dialog::RefreshDialogsGame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __thiscall Game_RefreshDialogs(HWND this)
{
  HWND v1; // eax
  HWND v2; // eax
  HWND result; // eax

  if ( this ) /*0x5ee352*/
    UpdateObserveButtonWOL(this); /*0x5ee354*/
  v1 = (HWND)Dialog::FindByHandle((void *)0x116); /*0x5ee35e*/
  if ( v1 ) /*0x5ee365*/
    UpdateObserveButtonWOL(v1); /*0x5ee369*/
  v2 = (HWND)Dialog::FindByHandle((void *)0x113); /*0x5ee373*/
  if ( v2 ) /*0x5ee37a*/
    UpdateObserveButtonWOL(v2); /*0x5ee37e*/
  result = (HWND)Dialog::FindByHandle((void *)0xBB); /*0x5ee388*/
  if ( result ) /*0x5ee38f*/
    return (HWND)UpdateObserveButtonWOL(result); /*0x5ee393*/
  return result; /*0x5ee398*/
}
}
} // namespace gamemd

// 0x5F2950
namespace gamemd {
int Dialog::RunModemDialing(ObjectClass * aP1, int a3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Dialog::RunModemDialing(int *this, ObjectClass *aP1, int a3, char a4)
{
  char v5; // bl
  int v6; // esi
  wchar_t *StringCSF; // eax
  LPARAM v8; // ebp
  wchar_t *v9; // eax
  HWND MessageBox; // eax
  int v11; // ebp
  WinModemClass *v13; // ecx
  __int16 Buffer; // [esp+2Ch] [ebp-F8h] BYREF
  char v15; // [esp+2Eh] [ebp-F6h]
  HWND hWnd; // [esp+30h] [ebp-F4h]
  char Source[240]; // [esp+34h] [ebp-F0h] BYREF

  v5 = 1; /*0x5f2961*/
  v6 = 3; /*0x5f2963*/
  Debug::Log(); /*0x5f2968*/
  if ( a4 == 1 ) /*0x5f2979*/
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[3476], 0, &stru_830620.__pad_14B0[3168], 1409); /*0x5f298c*/
  else
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[3464], 0, &stru_830620.__pad_14B0[3168], 1411); /*0x5f299f*/
  v8 = (LPARAM)StringCSF; /*0x5f29ba*/
  *((_BYTE *)&g_MatrixTransformState + 9524) = 0; /*0x5f29bc*/
  v9 = GetStringCSF(g_Str_TXT_CANCEL, 0, &stru_830620.__pad_14B0[3168], 1415); /*0x5f29c3*/
  MessageBox = CreateMessageBox(v8, (LPARAM)v9, (LONG)(&g_MatrixTransformState + 2381)); /*0x5f29cc*/
  hWnd = MessageBox; /*0x5f29d3*/
  if ( !MessageBox ) /*0x5f29d7*/
    return v6; /*0x5f29d7*/
  Dialog::Show(MessageBox); /*0x5f29df*/
  Debug::Log(); /*0x5f29e9*/
  (*(void (__thiscall **)(WinModemClass *, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 + 8))(g_ClipboardBuffer, a3); /*0x5f2a01*/
  Debug::Log(); /*0x5f2a09*/
  (*(void (__thiscall **)(WinModemClass *, int, char *, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 + 20))( /*0x5f2a24*/
    g_ClipboardBuffer,
    60,
    Source,
    81,
    -1);
  Debug::Log(); /*0x5f2a2c*/
  (*(void (__thiscall **)(WinModemClass *, ObjectClass *))(*(_DWORD *)g_ClipboardBuffer->__pad_0 + 24))( /*0x5f2a44*/
    g_ClipboardBuffer,
    aP1);
  (*(void (__thiscall **)(WinModemClass *, int (*)()))(*(_DWORD *)g_ClipboardBuffer->__pad_0 + 36))( /*0x5f2a54*/
    g_ClipboardBuffer,
    PumpEventLoop);
  *((_BYTE *)&g_MatrixTransformState + 9524) = 0; /*0x5f2a57*/
  v11 = *(this + 9); /*0x5f2a5e*/
  Debug::Log(); /*0x5f2a66*/
  while ( 1 ) /*0x5f2a6e*/
  {
    if ( Dialog::PumpMessages() == 1 || *((_BYTE *)&g_MatrixTransformState + 9524) ) /*0x5f2a82*/
    {
      v13 = g_ClipboardBuffer; /*0x5f2c72*/
      v6 = 6; /*0x5f2c78*/
      if ( g_ClipboardBuffer ) /*0x5f2c7f*/
      {
LABEL_34:
        v15 = 0; /*0x5f2c81*/
        Buffer = *(_WORD *)&stru_830620.__pad_14B0[3280]; /*0x5f2c8d*/
        WinModemClass::WriteSerial((int)v13, &Buffer, (WinModemClass *)2); /*0x5f2c99*/
      }
LABEL_35:
      Debug::Log(); /*0x5f2c9e*/
      goto LABEL_36; /*0x5f2ca3*/
    }
    ScreenSaver::Process(0, v5, v11); /*0x5f2a8a*/
    memset(Source, 0, sizeof(Source)); /*0x5f2a9c*/
    v11 = (*(int (__thiscall **)(WinModemClass *, int, char *, int, int))(*(_DWORD *)g_ClipboardBuffer->__pad_0 + 20))( /*0x5f2ab1*/
            g_ClipboardBuffer,
            v11,
            Source,
            81,
            15);
    if ( v11 == -1000 ) /*0x5f2ab9*/
    {
      v13 = g_ClipboardBuffer; /*0x5f2be6*/
      v6 = 6; /*0x5f2bec*/
      if ( g_ClipboardBuffer ) /*0x5f2bf3*/
        goto LABEL_34; /*0x5f2bf3*/
      goto LABEL_35; /*0x5f2bf3*/
    }
    _strupr(Source); /*0x5f2ac4*/
    if ( strlen(Source) ) /*0x5f2acd*/
      Debug::Log(); /*0x5f2ae6*/
    if ( strstr(Source, &stru_830620.__pad_14B0[3336]) ) /*0x5f2af8*/
    {
      memset(&g_MatrixTransformState + 2334, 0, 0x50u); /*0x5f2b12*/
      strncpy((char *)&g_MatrixTransformState + 9336, Source, 0x4Fu); /*0x5f2b1e*/
      v6 = 0; /*0x5f2b27*/
      Debug::Log(); /*0x5f2b2f*/
    }
    else
    {
      if ( !strncmp(Source, &stru_830620.__pad_14B0[3308], 4u) ) /*0x5f2b48*/
      {
        v6 = 2; /*0x5f2b54*/
      }
      else if ( !strncmp(Source, &stru_830620.__pad_14B0[3300], 4u) ) /*0x5f2b67*/
      {
        v6 = 1; /*0x5f2b77*/
      }
      else if ( !strncmp(Source, &stru_830620.__pad_14B0[3292], 4u) ) /*0x5f2b8b*/
      {
        v6 = 4; /*0x5f2b9b*/
      }
      else
      {
        if ( strncmp(Source, &stru_830620.__pad_14B0[3284], 4u) ) /*0x5f2baf*/
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
  if ( g_ClipboardBuffer ) /*0x5f2c4c*/
  {
    Buffer = *(_WORD *)&stru_830620.__pad_14B0[3280]; /*0x5f2c5c*/
    v15 = 0; /*0x5f2c61*/
    WinModemClass::WriteSerial((int)g_ClipboardBuffer, &Buffer, (WinModemClass *)2); /*0x5f2c66*/
  }
  v6 = 5; /*0x5f2c6b*/
LABEL_36:
  (*(void (__thiscall **)(WinModemClass *, _DWORD))(*(_DWORD *)g_ClipboardBuffer->__pad_0 + 36))(g_ClipboardBuffer, 0); /*0x5f2cab*/
  *((_BYTE *)&g_MatrixTransformState + 9524) = 0; /*0x5f2cbc*/
  Dialog::Destroy((SkirmishDialog *)hWnd); /*0x5f2cc3*/
  return v6; /*0x5f2cca*/
}
}
} // namespace gamemd

// 0x606800
namespace gamemd {
BOOL Dialog::MapControlToAction(HWND hWnd, LPARAM a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall Dialog_MapControlToAction(HWND hWnd, LPARAM a2)
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
  if ( !MEMORY[0xAC1B04] ) /*0x60681f*/
    goto LABEL_5; /*0x60681f*/
  v3 = *((_DWORD *)MEMORY[0xAC1B00] + HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&hWnd)); /*0x606836*/
  if ( !v3 ) /*0x60683b*/
    goto LABEL_5; /*0x60683b*/
  while ( *(HWND *)v3 != hWnd ) /*0x606843*/
  {
    v3 = *(_DWORD *)(v3 + 516); /*0x606849*/
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
     || (unsigned __int8)Dialog::IsSpecialTemplate(v4))
    && DlgCtrlID == 1684
    || Event::IsValidActionType(v4) && DlgCtrlID == 1685
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
    if ( MEMORY[0xAC1B04] ) /*0x607045*/
    {
      v7 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x607066*/
      if ( v7 ) /*0x60706b*/
      {
        while ( *(HWND *)v7 != hWnd ) /*0x607073*/
        {
          v7 = *(_DWORD *)(v7 + 516); /*0x607075*/
          if ( !v7 ) /*0x60707d*/
            goto LABEL_199; /*0x60707d*/
        }
        v9 = v7 + 4; /*0x6070a0*/
        if ( v9 ) /*0x6070a5*/
        {
          if ( !*(_DWORD *)(v9 + 104) && IsDialogControlVisible((int)Parent, v2) ) /*0x6070b4*/
            goto LABEL_208; /*0x6070bb*/
        }
      }
    }
  }
LABEL_199:
  if ( (GetWindowLongA(v2, -16) & 0xB) == 0xB ) /*0x6070cb*/
  {
    hWnd = v2; /*0x6070d6*/
    if ( MEMORY[0xAC1B04] ) /*0x6070dc*/
    {
      v10 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x607101*/
      if ( v10 ) /*0x607106*/
      {
        while ( *(HWND *)v10 != hWnd ) /*0x607112*/
        {
          v10 = *(_DWORD *)(v10 + 516); /*0x607114*/
          if ( !v10 ) /*0x60711c*/
            return 1; /*0x607128*/
        }
        v12 = v10 + 4; /*0x607133*/
        if ( v12 ) /*0x607138*/
        {
          if ( !*(_DWORD *)(v12 + 104) && GetDialogDefaultButton((int)Parent, v2) ) /*0x607147*/
          {
LABEL_208:
            hWnd = v2; /*0x607150*/
            if ( MEMORY[0xAC1B04] ) /*0x60715b*/
            {
              v13 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60717c*/
              if ( v13 ) /*0x607181*/
              {
                while ( *(HWND *)v13 != hWnd ) /*0x607189*/
                {
                  v13 = *(_DWORD *)(v13 + 516); /*0x60718b*/
                  if ( !v13 ) /*0x607193*/
                    return 1; /*0x60719f*/
                }
                v14 = v13 + 4; /*0x6071a6*/
                if ( v14 ) /*0x6071ab*/
                  *(_BYTE *)(v14 + 188) = v6; /*0x6071ad*/
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
} // namespace gamemd

// 0x607FD0
namespace gamemd {
char Dialog::StopBink()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Dialog::StopBink(HWND this)
{
  int v1; // eax
  int v3; // esi
  HWND DlgItem; // eax
  HWND v6; // [esp+8h] [ebp-4h] BYREF

  LOBYTE(v1) = MEMORY[0xAC1B04]; /*0x607fd1*/
  v6 = this; /*0x607fdc*/
  if ( MEMORY[0xAC1B04] ) /*0x607fe0*/
  {
    v1 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v6) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x608005*/
    if ( v1 ) /*0x60800a*/
    {
      while ( *(HWND *)v1 != v6 ) /*0x608012*/
      {
        v1 = *(_DWORD *)(v1 + 516); /*0x608014*/
        if ( !v1 ) /*0x60801c*/
          return v1; /*0x60801c*/
      }
      v3 = v1 + 4; /*0x608026*/
      if ( v1 != -4 ) /*0x60802b*/
      {
        LOBYTE(v1) = *(_BYTE *)(v1 + 194); /*0x60802d*/
        if ( (_BYTE)v1 ) /*0x608035*/
        {
          DlgItem = GetDlgItem(this, 1818); /*0x60803d*/
          if ( DlgItem ) /*0x608045*/
            SendMessageA(DlgItem, 0x4E2u, 0, 0); /*0x608051*/
          LOBYTE(v1) = RenderGadgetClassAnimation(this, 0); /*0x60805b*/
          *(_BYTE *)(v3 + 190) = 0; /*0x608060*/
        }
      }
    }
  }
  return v1; /*0x60801e*/
}
}
} // namespace gamemd

// 0x608070
namespace gamemd {
char Dialog::IdleProcess()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Dialog::IdleProcess(SkirmishDialog *this)
{
  SkirmishDialog **v2; // eax
  _DWORD *v4; // eax
  bool v5; // bl
  bool v6; // al
  int v7; // eax
  int v8; // edi
  BOOL v9; // esi
  SkirmishDialog *v10; // [esp+Ch] [ebp-Ch] BYREF
  DWORD TickCount; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  if ( SessionClass::GetGameSpeed(MEMORY[0xA8B238]) ) /*0x60807d*/
    return 0; /*0x60807d*/
  v10 = this; /*0x60808b*/
  if ( !MEMORY[0xAC1B04] ) /*0x608091*/
    return 0; /*0x608091*/
  v2 = (SkirmishDialog **)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v10) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x6080b2*/
  if ( !v2 ) /*0x6080b7*/
    return 0; /*0x6080b7*/
  while ( *v2 != v10 ) /*0x6080bf*/
  {
    v2 = (SkirmishDialog **)v2[129]; /*0x6080c1*/
    if ( !v2 ) /*0x6080c9*/
      return 0; /*0x6080c9*/
  }
  v4 = v2 + 1; /*0x6080d8*/
  if ( !v4 ) /*0x6080dd*/
    return 0; /*0x6080dd*/
  v5 = *((_BYTE *)v4 + 189) && v4[44] == 1; /*0x6080e7*/
  v6 = IsWindowVisible((HWND)this); /*0x608101*/
  if ( !v5 ) /*0x608106*/
    return 0; /*0x608106*/
  if ( !v6 ) /*0x60810a*/
    return 0; /*0x60810a*/
  PlayVocClass(MEMORY[0x8871E0]->UpgradeEliteSound, 0x2000, 1.0, 0); /*0x608124*/
  LOBYTE(v12) = IsWindowEnabled((HWND)this); /*0x608138*/
  EnableWindow((HWND)this, 0); /*0x60813c*/
  EnumChildWindows((HWND)this, Dialog::MapControlToAction, 1); /*0x60814a*/
  v10 = this; /*0x608157*/
  if ( !MEMORY[0xAC1B04] ) /*0x60815b*/
    return 0; /*0x60815b*/
  v7 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v10) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x608180*/
  if ( !v7 ) /*0x608185*/
    return 0; /*0x608185*/
  while ( *(SkirmishDialog **)v7 != v10 ) /*0x608191*/
  {
    v7 = *(_DWORD *)(v7 + 516); /*0x608193*/
    if ( !v7 ) /*0x60819b*/
      return 0; /*0x6081a5*/
  }
  v8 = v7 + 4; /*0x6081ae*/
  if ( v7 == -4 ) /*0x6081b3*/
    return 0; /*0x6080d3*/
  *(_BYTE *)(v7 + 194) = 1; /*0x6081bf*/
  InvalidateRect((HWND)this, 0, 0); /*0x6081c6*/
  TickCount = GetTickCount(); /*0x6081d4*/
  while ( 1 ) /*0x6081d8*/
  {
    MessageLoop(); /*0x6081d8*/
    if ( MEMORY[0xA8B238][0] ) /*0x6081e4*/
    {
      if ( MEMORY[0xA8B238][0] != 5 && !MEMORY[0xA8D60E] && !MEMORY[0xA8DAB4] ) /*0x6081fb*/
        break; /*0x6081fb*/
    }
    Event::Dispatch(); /*0x608211*/
LABEL_29:
    v9 = *(_BYTE *)(v8 + 190) == 0; /*0x608216*/
    if ( (int)(GetTickCount() - TickCount) > 5000 || v9 ) /*0x608234*/
      goto LABEL_31; /*0x608234*/
  }
  if ( VtableStub::Method_55CBF0() || !GameFrameLoop() ) /*0x608206*/
    goto LABEL_29; /*0x60820d*/
LABEL_31:
  EnumChildWindows((HWND)this, Dialog::MapControlToAction, 0); /*0x608236*/
  EnableWindow((HWND)this, (unsigned __int8)v12); /*0x608250*/
  return 1; /*0x6080cb*/
}
}
} // namespace gamemd

// 0x60A330
namespace gamemd {
BOOL Dialog::HandleTabKey(HWND hWnd, LPARAM a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall Dialog_HandleTabKey(HWND hWnd, LPARAM a2)
{
  HWND *v3; // eax
  HWND Parent; // ebp
  HWND *v5; // eax
  _DWORD *v6; // eax
  HWND *v8; // eax
  _DWORD *v9; // eax
  HWND v10; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h] BYREF
  HWND v12; // [esp+14h] [ebp-4h] BYREF
  HWND hWnda; // [esp+1Ch] [ebp+4h]

  v10 = hWnd; /*0x60a341*/
  hWnda = 0; /*0x60a345*/
  if ( MEMORY[0xAC1B04] ) /*0x60a34d*/
  {
    v3 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v10) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60a36e*/
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
  if ( !SessionClass::GetGameSpeed(MEMORY[0xA8B238]) ) /*0x60a3ae*/
  {
    if ( (GetWindowLongA(hWnd, -16) & 0xB) == 0xB ) /*0x60a3cb*/
    {
      v10 = hWnd; /*0x60a3d2*/
      if ( MEMORY[0xAC1B04] ) /*0x60a3d8*/
      {
        v5 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&v10)); /*0x60a3ef*/
        if ( v5 ) /*0x60a3f4*/
        {
          while ( *v5 != v10 ) /*0x60a3fc*/
          {
            v5 = (HWND *)v5[129]; /*0x60a3fe*/
            if ( !v5 ) /*0x60a406*/
              goto LABEL_18; /*0x60a406*/
          }
          v6 = v5 + 1; /*0x60a40e*/
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
      HashTable::Get(&MEMORY[0xAC1B00], &v12, &v11); /*0x60a450*/
      if ( v11 ) /*0x60a45b*/
      {
        if ( !*(_DWORD *)(v11 + 104) && GetDialogDefaultButton((int)Parent, hWnd) ) /*0x60a468*/
        {
LABEL_22:
          *((_DWORD *)hWnda + 44) = 1; /*0x60a471*/
          return 1; /*0x60a486*/
        }
      }
    }
  }
  if ( !SessionClass::GetGameSpeed(MEMORY[0xA8B238]) ) /*0x60a48e*/
    goto LABEL_33; /*0x60a48e*/
  if ( (GetWindowLongA(hWnd, -16) & 0xB) != 0xB /*0x60a4da*/
    || (v12 = hWnd, v11 = 0, HashTable::Get(&MEMORY[0xAC1B00], &v12, &v11), !v11)
    || *(_DWORD *)(v11 + 104)
    || !IsDialogControlVisible((int)Parent, hWnd) )
  {
    if ( (GetWindowLongA(hWnd, -16) & 0xB) != 0xB ) /*0x60a4f1*/
      goto LABEL_33; /*0x60a4f1*/
    v10 = hWnd; /*0x60a4f8*/
    if ( !MEMORY[0xAC1B04] ) /*0x60a4fe*/
      goto LABEL_33; /*0x60a4fe*/
    v8 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&v10)); /*0x60a515*/
    if ( !v8 ) /*0x60a51a*/
      goto LABEL_33; /*0x60a51a*/
    while ( *v8 != v10 ) /*0x60a522*/
    {
      v8 = (HWND *)v8[129]; /*0x60a524*/
      if ( !v8 ) /*0x60a52c*/
        goto LABEL_33; /*0x60a52c*/
    }
    v9 = v8 + 1; /*0x60a55b*/
    if ( !v9 || v9[26] || !GetDialogDefaultButton((int)Parent, hWnd) ) /*0x60a56d*/
    {
LABEL_33:
      if ( (unsigned __int8)FilterDialogButtonAction(Parent, hWnd) ) /*0x60a532*/
        *((_DWORD *)hWnda + 44) = 3; /*0x60a53f*/
      return 1; /*0x60a554*/
    }
  }
  *((_DWORD *)hWnda + 44) = 2; /*0x60a581*/
  return 1; /*0x60a47a*/
}
}
} // namespace gamemd

// 0x60A5B0
namespace gamemd {
BOOL Dialog::DispatchEvent(HWND hWnd, LPARAM a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall Dialog_DispatchEvent(HWND hWnd, LPARAM a2)
{
  HWND v2; // ebp
  HWND Parent; // edi
  _DWORD *v4; // esi
  _DWORD *v5; // eax
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
  if ( MEMORY[0xAC1B04] ) /*0x60a5d5*/
  {
    v5 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&v19)); /*0x60a5ec*/
    if ( v5 ) /*0x60a5f1*/
    {
      while ( (HWND)*v5 != v19 ) /*0x60a5f9*/
      {
        v5 = (_DWORD *)v5[129]; /*0x60a5fb*/
        if ( !v5 ) /*0x60a603*/
          goto LABEL_7; /*0x60a603*/
      }
      v4 = v5 + 1; /*0x60a60b*/
    }
  }
LABEL_7:
  if ( !v4 ) /*0x60a610*/
    return 1; /*0x60aa44*/
  if ( !(unsigned __int8)IsValidActionDialog(Parent, v2) ) /*0x60a621*/
  {
    LOBYTE(hWnd) = 0; /*0x60a6e7*/
    if ( (unsigned __int8)UI_Helper_602B90(Parent, v2) ) /*0x60a6ec*/
    {
      v9 = v4[5]; /*0x60a6f5*/
      v4[28] = 2; /*0x60a6f8*/
      if ( !v9 ) /*0x60a701*/
      {
        v20 = Parent; /*0x60a70c*/
        if ( MEMORY[0xAC1B04] ) /*0x60a712*/
        {
          for ( i = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&v20)); /*0x60a72e*/
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
    if ( MEMORY[0xAC1B04] ) /*0x60a760*/
    {
      for ( j = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v20) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60a786*/
            j;
            j = (HWND *)j[129] )
      {
        if ( *j == v20 ) /*0x60a78e*/
          break; /*0x60a78e*/
      }
    }
    GetDlgCtrlID(v2); /*0x60a7a1*/
    v21 = Parent; /*0x60a7ab*/
    v12 = 0; /*0x60a7af*/
    v20 = 0; /*0x60a7b8*/
    HashTable::Get(&MEMORY[0xAC1B00], &v21, &v20); /*0x60a7bc*/
    if ( v20 ) /*0x60a7c7*/
      v12 = *((_DWORD *)v20 + 27); /*0x60a7c9*/
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
              if ( (_BYTE)hWnd ) /*0x60aa27*/
              {
                v16 = v4[30]; /*0x60aa29*/
                if ( v16 ) /*0x60aa2e*/
                {
                  v4[37] = *(__int16 *)(v16 + 6); /*0x60aa34*/
                  *((_BYTE *)v4 + 168) = 0; /*0x60aa3a*/
                }
              }
            }
            else
            {
              SetTimer(v2, 0, v15, 0); /*0x60a9fd*/
              if ( (_BYTE)hWnd ) /*0x60aa09*/
              {
                *((_BYTE *)v4 + 168) = 1; /*0x60aa0b*/
                return 1; /*0x60aa1e*/
              }
            }
            return 1; /*0x60aa09*/
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
      *((_BYTE *)v4 + 124) = v17; /*0x60a9c1*/
    }
    Parent = v18; /*0x60a9c4*/
    goto LABEL_77; /*0x60a9c4*/
  }
  v4[28] = 1; /*0x60a630*/
  *((_BYTE *)v4 + 168) = 0; /*0x60a633*/
  v4[32] = 1; /*0x60a63a*/
  v4[33] = ValidateDialogEvent(Parent, v2); /*0x60a649*/
  v4[34] = CtlDialogColorHandler(Parent, v2); /*0x60a658*/
  v4[35] = ValidateDialogControl(Parent, v2); /*0x60a663*/
  v20 = Parent; /*0x60a66d*/
  v6 = 0; /*0x60a675*/
  hWnd = 0; /*0x60a67e*/
  HashTable::Get(&MEMORY[0xAC1B00], &v20, &hWnd); /*0x60a682*/
  if ( hWnd ) /*0x60a68d*/
    v6 = *((_DWORD *)hWnd + 27); /*0x60a68f*/
  v7 = GetDlgCtrlID(v2); /*0x60a693*/
  if ( (v6 == 259 || v6 == 3015) && v7 == 1780 ) /*0x60a6ae*/
  {
    v4[36] = *((_DWORD *)MEMORY[0x8871E0] + 433); /*0x60a6bd*/
    return 1; /*0x60a6c4*/
  }
  else
  {
    v4[36] = -1; /*0x60a6d2*/
    return 1; /*0x60a6d9*/
  }
}
}
} // namespace gamemd

// 0x60F760
namespace gamemd {
BOOL Dialog::InitWindow(SkirmishDialog * aP0, LPARAM a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall Dialog::InitWindow(SkirmishDialog *aP0, LPARAM a2)
{
  int v2; // ebp
  int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v7; // eax
  SkirmishDialog **v8; // esi
  int v9; // edx
  SkirmishDialog *v10; // eax
  int v11; // eax
  _DWORD *i; // eax
  _BYTE aP1[512]; // [esp+10h] [ebp-200h] BYREF

  v2 = 0; /*0x60f76f*/
  if ( *(&g_MatrixTransformState + 2877) /*0x60f79c*/
    && (v3 = *(&(*(&g_MatrixTransformState + 2876))->X
             + (((int (__thiscall *)(SkirmishDialog **))*(&g_MatrixTransformState + 2882))(&aP0)
              & ((1 << *((char *)&g_MatrixTransformState + 11516)) - 1)))) != 0 )
  {
    while ( *(SkirmishDialog **)v3 != aP0 ) /*0x60f7a7*/
    {
      v3 = *(_DWORD *)(v3 + 516); /*0x60f7a9*/
      if ( !v3 ) /*0x60f7b1*/
        goto LABEL_5; /*0x60f7b1*/
    }
    *(_DWORD *)(v3 + 36) = a2; /*0x60f7fa*/
    return 1; /*0x60f7fd*/
  }
  else
  {
LABEL_5:
    memset(aP1, 0, sizeof(aP1)); /*0x60f7b3*/
    *(_DWORD *)&aP1[104] = 11; /*0x60f7c9*/
    *(_DWORD *)&aP1[100] = ::aP0; /*0x60f7d4*/
    v4 = (_DWORD *)__2_YAPAXI_Z(4u); /*0x60f7d8*/
    if ( v4 ) /*0x60f7e3*/
      v5 = unknown_libname_74(v4); /*0x60f7e7*/
    else
      v5 = 0; /*0x60f80c*/
    *(_DWORD *)&aP1[60] = v5; /*0x60f814*/
    *(_DWORD *)&aP1[64] = 0; /*0x60f818*/
    *(_DWORD *)&aP1[92] = 0; /*0x60f81c*/
    *(_DWORD *)&aP1[144] = -1; /*0x60f820*/
    v7 = __2_YAPAXI_Z(0x208u); /*0x60f82b*/
    v8 = (SkirmishDialog **)v7; /*0x60f830*/
    if ( v7 ) /*0x60f837*/
      DialogControl::Constructor((_DWORD *)(v7 + 4)); /*0x60f83c*/
    else
      v8 = 0; /*0x60f843*/
    *v8 = aP0; /*0x60f854*/
    DialogClass::CopyTemplateStruct(v8 + 1, (AbstractClass *)aP1); /*0x60f856*/
    v8[129] = 0; /*0x60f862*/
    v9 = ((int (__thiscall *)(SkirmishDialog **))*(&g_MatrixTransformState + 2882))(&aP0) /*0x60f882*/
       & ((1 << *((char *)&g_MatrixTransformState + 11516)) - 1);
    v10 = (SkirmishDialog *)*(&(*(&g_MatrixTransformState + 2876))->X + v9); /*0x60f884*/
    *(&(*(&g_MatrixTransformState + 2876))->X + v9) = (int)v8; /*0x60f887*/
    if ( v10 ) /*0x60f88c*/
      v8[129] = v10; /*0x60f88e*/
    *(&g_MatrixTransformState + 2877) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 2877) + 1); /*0x60f8a8*/
    if ( (double)(unsigned int)*(&g_MatrixTransformState + 2877) / (double)(int)*(&g_MatrixTransformState + 2878) >= *((double *)&g_MatrixTransformState + 1443) ) /*0x60f8c9*/
      HashTable::Grow2(&g_MatrixTransformState + 2876); /*0x60f8d0*/
    if ( *(&g_MatrixTransformState + 2877) ) /*0x60f8db*/
    {
      v11 = *(&(*(&g_MatrixTransformState + 2876))->X /*0x60f8ff*/
            + (((int (__thiscall *)(SkirmishDialog **))*(&g_MatrixTransformState + 2882))(&aP0)
             & ((1 << *((char *)&g_MatrixTransformState + 11516)) - 1)));
      if ( v11 ) /*0x60f904*/
      {
        while ( *(SkirmishDialog **)v11 != aP0 ) /*0x60f90f*/
        {
          v11 = *(_DWORD *)(v11 + 516); /*0x60f911*/
          if ( !v11 ) /*0x60f919*/
            goto LABEL_22; /*0x60f919*/
        }
        v2 = v11 + 4; /*0x60f921*/
      }
    }
LABEL_22:
    if ( *(_DWORD *)&aP1[40] ) /*0x60f92a*/
    {
      __3_YAXPAX_Z(*(void **)&aP1[40]); /*0x60f92d*/
      *(_DWORD *)&aP1[40] = 0; /*0x60f935*/
    }
    for ( i = *(_DWORD **)&aP1[52]; *(_DWORD *)&aP1[52]; i = *(_DWORD **)&aP1[52] ) /*0x60f93f*/
      LinkedList::Remove(aP1, i); /*0x60f946*/
    if ( *(_DWORD *)&aP1[60] ) /*0x60f959*/
      DeleteAndZero::OrFree(*(void ***)&aP1[60], 1); /*0x60f95d*/
    *(_DWORD *)(v2 + 32) = a2; /*0x60f96e*/
    return 1; /*0x60f962*/
  }
}
}
} // namespace gamemd

// 0x60F9A0
namespace gamemd {
BOOL Dialog::InitializeControls(HWND hWnd, LPARAM a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall Dialog_InitializeControls(HWND hWnd, LPARAM a2)
{
  char v2; // al
  char v3; // al
  int (__stdcall *v4)(int, int, int, int); // ebp
  const char **WindowLongA; // eax
  LONG v6; // edi
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // edx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // esi
  int v13; // edx
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  void *v17; // eax
  void *v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // esi
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  _DWORD *i; // eax
  LPARAM v25; // edx
  const char **v26; // eax
  bool v27; // zf
  LRESULT (__stdcall *v28)(HWND, UINT, WPARAM, LPARAM); // esi
  wchar_t *String; // [esp-4h] [ebp-AC4h]
  int v31; // [esp+10h] [ebp-AB0h] BYREF
  __int64 v32; // [esp+14h] [ebp-AACh]
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
  MEMORY[0xAC1CB4] = 159; /*0x60fa14*/
  MEMORY[0xAC1CA8] = 159; /*0x60fa19*/
  MEMORY[0xAC1DF0] = 1; /*0x60fa2f*/
  MEMORY[0xAC1890] = 127; /*0x60fa35*/
  MEMORY[0xAC18A4] = 0xFFFF; /*0x60fa3f*/
  MEMORY[0xAC1CB0] = 15658734; /*0x60fa49*/
  MEMORY[0xAC4618] = 40863; /*0x60fa53*/
  MEMORY[0xAC184C] = 0xFFFFFF; /*0x60fa5d*/
  MEMORY[0xAC4628] = (int)&unk_808080; /*0x60fa67*/
  MEMORY[0xAC4604] = 255; /*0x60fa71*/
  MEMORY[0xAC4880] = (int)&loc_626261 + 1; /*0x60fa77*/
  MEMORY[0xAC4624] = 255; /*0x60fa81*/
  MEMORY[0xAC1DD8] = (int)&unk_929292; /*0x60fa87*/
  MEMORY[0xAC1B98] = 12959399; /*0x60fa91*/
  MEMORY[0xAC1B94] = (int)&unk_807A68; /*0x60fa9b*/
  MEMORY[0xAC1AF8] = (int)&unk_8F8F8F; /*0x60faa5*/
  MEMORY[0xAC4620] = (int)sub_646464; /*0x60faaf*/
  MEMORY[0xAC4898] = 96; /*0x60fab9*/
  MEMORY[0xAC4608] = 43690; /*0x60fac3*/
  MEMORY[0xAC48B0] = 2235147; /*0x60facd*/
  MEMORY[0xAC1B90] = (int)&loc_443714 + 2; /*0x60fad7*/
  if ( !MEMORY[0xAC48D4] ) /*0x60fae1*/
  {
    LOWORD(MEMORY[0xAC48B8]) = 255; /*0x60fae3*/
    LOWORD(MEMORY[0xAC48B8]) = 0xFFu >> GetBitShift_Green(); /*0x60faf2*/
    v2 = GetBitShift_Red(); /*0x60faf9*/
    HIWORD(MEMORY[0xAC48B8]) = 255; /*0x60fb01*/
    LOWORD(MEMORY[0xAC48B8]) = (_WORD)MEMORY[0xAC48B8] << v2; /*0x60fb08*/
    HIWORD(MEMORY[0xAC48B8]) = 0xFFu >> GetBitMask_Blue(); /*0x60fb17*/
    v3 = GetBitMask_Green(); /*0x60fb1e*/
    LOWORD(MEMORY[0xAC48BC]) = 255; /*0x60fb26*/
    HIWORD(MEMORY[0xAC48B8]) <<= v3; /*0x60fb2d*/
    LOWORD(MEMORY[0xAC48BC]) = 0xFFu >> GetBitMask_Red(); /*0x60fb3c*/
    LOWORD(MEMORY[0xAC48BC]) = (_WORD)MEMORY[0xAC48BC] << GetBitShift_Blue(); /*0x60fb4b*/
    InitDialogCountryIcons(); /*0x60fb52*/
    MEMORY[0xAC48D4] = 1; /*0x60fb57*/
  }
  v4 = 0; /*0x60fb67*/
  v31 = 11; /*0x60fb69*/
  WindowLongA = (const char **)GetWindowLongA(hWnd, -21); /*0x60fb71*/
  v33 = WindowLongA; /*0x60fb75*/
  if ( WindowLongA ) /*0x60fb79*/
    strcpy(ClassName, *WindowLongA); /*0x60fb95*/
  if ( !strcmp(ClassName, MEMORY[0x83585C]) ) /*0x60fbad*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))Scrollbar::DlgProc; /*0x60fbd4*/
    v31 = 8; /*0x60fbd9*/
  }
  else if ( !strcmp(ClassName, MEMORY[0x833718]) ) /*0x60fbf5*/
  {
    v4 = Options::DialogProc; /*0x60fc1c*/
    v31 = 4; /*0x60fc21*/
  }
  else if ( !strcmp(ClassName, MEMORY[0x83370C]) ) /*0x60fc3d*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))ComboBoxDropDown::WndProc; /*0x60fc64*/
    v31 = 3; /*0x60fc69*/
  }
  else if ( !strcmp(ClassName, MEMORY[0x835848]) ) /*0x60fc85*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))TabControl::DlgProc; /*0x60fcac*/
    v31 = 7; /*0x60fcb1*/
  }
  else if ( !strcmp(ClassName, MEMORY[0x835834]) ) /*0x60fccd*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))NetworkLobbyPaintProc; /*0x60fcf4*/
    v31 = 6; /*0x60fcf9*/
  }
  else if ( !strcmp(ClassName, MEMORY[0x833720]) ) /*0x60fd15*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))EditControl::WndProc; /*0x60fd3c*/
    v31 = 1; /*0x60fd41*/
  }
  else if ( !strcmp(ClassName, MEMORY[0x833728]) ) /*0x60fd5d*/
  {
    v4 = ListBox::EditSubclassProc; /*0x60fd84*/
    v31 = 1; /*0x60fd89*/
  }
  else if ( !strcmp(ClassName, MEMORY[0x83582C]) ) /*0x60fda5*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))BinkMovie::WndProc; /*0x60fdcc*/
    v31 = 2; /*0x60fdd1*/
  }
  else if ( !strcmp(ClassName, MEMORY[0x83581C]) ) /*0x60fded*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))Dialog::TabControlPaint; /*0x60fe14*/
    v31 = 10; /*0x60fe19*/
  }
  else if ( !strcmp(ClassName, MEMORY[0x835814]) ) /*0x60fe35*/
  {
    if ( (v32 & 7) == 7 ) /*0x60fe68*/
    {
      v4 = (int (__stdcall *)(int, int, int, int))GroupLabel::WndProc; /*0x60fe6a*/
      v31 = 0; /*0x60fe6f*/
    }
    else if ( (v32 & 0xB) == 0xB ) /*0x60fe80*/
    {
      v4 = (int (__stdcall *)(int, int, int, int))TabControl::WndProc; /*0x60fe82*/
      v31 = 0; /*0x60fe87*/
    }
    else if ( (v32 & 3) == 3 ) /*0x60fe95*/
    {
      v4 = (int (__stdcall *)(int, int, int, int))Checkbox::WndProc; /*0x60fe97*/
      v31 = 0; /*0x60fe9c*/
    }
    else
    {
      if ( (v32 & 9) == 9 ) /*0x60fea7*/
        v4 = (int (__stdcall *)(int, int, int, int))ButtonOwnerDraw::DlgProc; /*0x60fea9*/
      v31 = 0; /*0x60feae*/
    }
  }
  else if ( !strcmp(ClassName, MEMORY[0x835804]) ) /*0x60fec3*/
  {
    v4 = (int (__stdcall *)(int, int, int, int))RenderDialogSurface; /*0x60feea*/
    v31 = 9; /*0x60feef*/
  }
  else
  {
    v4 = (int (__stdcall *)(int, int, int, int))sub_612A60; /*0x60fef9*/
  }
  v6 = SetWindowLongA(hWnd, -4, (LONG)ComboBoxOwnerDraw::DlgProc); /*0x60ff1a*/
  v7 = *((_DWORD *)MEMORY[0xAC18C0] + (MEMORY[0xAC18D8](&hWnd) & ((1 << MEMORY[0xAC18CC]) - 1))); /*0x60ff37*/
  if ( v7 ) /*0x60ff3c*/
  {
    while ( *(HWND *)v7 != hWnd ) /*0x60ff47*/
    {
      v7 = *(_DWORD *)(v7 + 8); /*0x60ff4d*/
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
    v9 = MEMORY[0xAC18D8](&hWnd) & ((1 << MEMORY[0xAC18CC]) - 1); /*0x60ff90*/
    v10 = *((_DWORD *)MEMORY[0xAC18C0] + v9); /*0x60ff92*/
    *((_DWORD *)MEMORY[0xAC18C0] + v9) = v8; /*0x60ff95*/
    if ( v10 ) /*0x60ff9a*/
      v8[2] = v10; /*0x60ff9c*/
    v32 = (unsigned int)++MEMORY[0xAC18C4]; /*0x60ffaf*/
    LODWORD(v32) = MEMORY[0xAC18C8]; /*0x60ffbc*/
    if ( (double)(unsigned int)MEMORY[0xAC18C4] / (double)MEMORY[0xAC18C8] >= MEMORY[0xAC18E8] ) /*0x60ffd3*/
      Dialog::GrowBuffer(&MEMORY[0xAC18C0]); /*0x60ffda*/
  }
  v11 = *((_DWORD *)MEMORY[0xAC1B48] + (MEMORY[0xAC1B60](&hWnd) & ((1 << MEMORY[0xAC1B54]) - 1))); /*0x610001*/
  if ( v11 ) /*0x610006*/
  {
    while ( *(HWND *)v11 != hWnd ) /*0x610011*/
    {
      v11 = *(_DWORD *)(v11 + 8); /*0x610017*/
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
    v13 = MEMORY[0xAC1B60](&hWnd) & ((1 << MEMORY[0xAC1B54]) - 1); /*0x61005a*/
    v14 = *((_DWORD *)MEMORY[0xAC1B48] + v13); /*0x61005c*/
    *((_DWORD *)MEMORY[0xAC1B48] + v13) = v12; /*0x61005f*/
    if ( v14 ) /*0x610064*/
      v12[2] = v14; /*0x610066*/
    v32 = (unsigned int)++MEMORY[0xAC1B4C]; /*0x610079*/
    LODWORD(v32) = MEMORY[0xAC1B50]; /*0x610086*/
    if ( (double)(unsigned int)MEMORY[0xAC1B4C] / (double)MEMORY[0xAC1B50] >= MEMORY[0xAC1B70] ) /*0x61009d*/
      Dialog::GrowBuffer(&MEMORY[0xAC1B48]); /*0x6100a4*/
  }
  v15 = 0; /*0x6100ae*/
  if ( MEMORY[0xAC1B04] /*0x6100db*/
    && (v16 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1)))) != 0 )
  {
    while ( *(HWND *)v16 != hWnd ) /*0x6100e6*/
    {
      v16 = *(_DWORD *)(v16 + 516); /*0x6100e8*/
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
    v37[25] = (void *)aP0; /*0x610115*/
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
    v21 = HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&hWnd); /*0x6101aa*/
    v22 = *((_DWORD *)MEMORY[0xAC1B00] + v21); /*0x6101b5*/
    *((_DWORD *)MEMORY[0xAC1B00] + v21) = v20; /*0x6101b8*/
    if ( v22 ) /*0x6101bd*/
      v20[129] = v22; /*0x6101bf*/
    v32 = (unsigned int)++MEMORY[0xAC1B04]; /*0x6101d5*/
    LODWORD(v32) = MEMORY[0xAC1B08]; /*0x6101e2*/
    if ( (double)(unsigned int)MEMORY[0xAC1B04] / (double)MEMORY[0xAC1B08] >= MEMORY[0xAC1B28] ) /*0x6101f9*/
      HashTable::Grow2(&MEMORY[0xAC1B00]); /*0x610200*/
    if ( MEMORY[0xAC1B04] ) /*0x61020b*/
    {
      v23 = *((_DWORD *)MEMORY[0xAC1B00] + HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&hWnd)); /*0x610225*/
      if ( v23 ) /*0x61022a*/
      {
        while ( *(HWND *)v23 != hWnd ) /*0x610235*/
        {
          v23 = *(_DWORD *)(v23 + 516); /*0x610237*/
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
  *(_DWORD *)(v15 + 104) = v31; /*0x610297*/
  v26 = v33; /*0x61029a*/
  v27 = v33 == 0; /*0x61029e*/
  *(_DWORD *)v15 = v25; /*0x6102a0*/
  if ( !v27 ) /*0x6102a3*/
    *(_DWORD *)(v15 + 84) = v26[1]; /*0x6102a8*/
  v28 = 0; /*0x6102bd*/
  v31 = 0; /*0x6102bf*/
  if ( (unsigned __int8)Dialog::UpdateControlState(&hWnd, &v31) && v31 ) /*0x6102d2*/
    v28 = *(LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))v31; /*0x6102d4*/
  LOBYTE(lParam[0]) = 0; /*0x6102ee*/
  CallWindowProcA(v28, hWnd, 0xDu, 0x800u, (LPARAM)lParam); /*0x6102f5*/
  if ( LOBYTE(lParam[0]) ) /*0x610302*/
  {
    String = GetStringCSF(lParam, 0, MEMORY[0x833730], 7392); /*0x61031c*/
    GadgetClass::SetTooltip((void **)v15, String); /*0x61031d*/
  }
  else
  {
    GadgetClass::SetTooltip((void **)v15, 0); /*0x610322*/
  }
  *(_DWORD *)(v15 + 44) = 0; /*0x610327*/
  SendMessageA(hWnd, 0x497u, 0, 0); /*0x610339*/
  return 1; /*0x61033f*/
}
}
} // namespace gamemd

// 0x610360
namespace gamemd {
int Dialog::DestroyDialogSystem()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Dialog::DestroyDialogSystem(HWND this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *i; // eax
  void *v5; // esi
  int v6; // esi
  HWND *v7; // ecx
  HWND v8; // edi
  double v9; // st7
  HWND *v10; // eax
  void *WindowLongA; // eax
  HWND hWnd; // [esp+Ch] [ebp-20Ch] BYREF
  __int64 v14; // [esp+10h] [ebp-208h] BYREF
  void *v15[128]; // [esp+18h] [ebp-200h] BYREF

  EnumChildWindows(this, DestroyDialogChildWindow, 0); /*0x610374*/
  hWnd = this; /*0x610389*/
  DynamicArray::Resize(&MEMORY[0xAC1B48], (int *)&hWnd, &v14); /*0x61038d*/
  memset(v15, 0, sizeof(v15)); /*0x6103a3*/
  v15[26] = (void *)11; /*0x6103a7*/
  v15[25] = (void *)aP0; /*0x6103b2*/
  v2 = __2_YAPAXI_Z(4u); /*0x6103b9*/
  if ( v2 ) /*0x6103c3*/
    v3 = unknown_libname_74(v2); /*0x6103c7*/
  else
    v3 = 0; /*0x6103ce*/
  v15[15] = v3; /*0x6103d0*/
  v15[16] = 0; /*0x6103e3*/
  v15[23] = 0; /*0x6103e7*/
  v15[36] = (void *)-1; /*0x6103eb*/
  Dialog::BindGadgetData(&MEMORY[0xAC1B00], (int *)&hWnd, (char *)v15); /*0x6103f6*/
  if ( v15[10] ) /*0x610401*/
  {
    __3_YAXPAX_Z(v15[10]); /*0x610404*/
    v15[10] = 0; /*0x61040c*/
  }
  for ( i = v15[13]; v15[13]; i = v15[13] ) /*0x610416*/
    LinkedList::Remove(v15, i); /*0x61041d*/
  v5 = v15[15]; /*0x61042a*/
  if ( v15[15] ) /*0x610430*/
  {
    DeleteAndZero::Alt((void **)v15[15]); /*0x610434*/
    __3_YAXPAX_Z(v5); /*0x61043a*/
  }
  if ( MEMORY[0xAC18C4] ) /*0x610449*/
  {
    v14 = (unsigned int)(MEMORY[0xAC18C4] - 1); /*0x610456*/
    *(float *)&v14 = (double)v14 / (double)MEMORY[0xAC18C8]; /*0x610472*/
    v6 = MEMORY[0xAC18D8](&hWnd) & ((1 << MEMORY[0xAC18CC]) - 1); /*0x61048a*/
    v7 = (HWND *)*((_DWORD *)MEMORY[0xAC18C0] + v6); /*0x610491*/
    if ( v7 ) /*0x610496*/
    {
      if ( *v7 == hWnd ) /*0x6104a4*/
      {
        v8 = v7[2]; /*0x6104a6*/
        __3_YAXPAX_Z(*((void **)MEMORY[0xAC18C0] + v6)); /*0x6104aa*/
        v9 = *(float *)&v14; /*0x6104b8*/
        *((_DWORD *)MEMORY[0xAC18C0] + v6) = v8; /*0x6104bc*/
        --MEMORY[0xAC18C4]; /*0x6104cb*/
        if ( v9 > MEMORY[0xAC18E0] ) /*0x6104d5*/
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
        --MEMORY[0xAC18C4]; /*0x6104fd*/
        __3_YAXPAX_Z(v10); /*0x610503*/
      }
LABEL_20:
      if ( *(float *)&v14 <= MEMORY[0xAC18E0] ) /*0x61051a*/
LABEL_21:
        HashTable::Shrink2(&MEMORY[0xAC18C0]); /*0x61051c*/
    }
  }
LABEL_22:
  WindowLongA = (void *)GetWindowLongA(hWnd, -21); /*0x610526*/
  if ( WindowLongA ) /*0x610535*/
    __3_YAXPAX_Z(WindowLongA); /*0x610538*/
  SetWindowLongA(hWnd, -21, 0); /*0x610548*/
  Object::RemoveObjectArray(hWnd); /*0x610552*/
  return 1; /*0x61055c*/
}
}
} // namespace gamemd

// 0x6137D0
namespace gamemd {
int Dialog_TabControlPaint()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LRESULT __userpurge Dialog::TabControlPaint@<eax>(int a1@<ebx>, CCINIClass hWnd)
{
  LRESULT (__stdcall *v2)(HWND, UINT, WPARAM, LPARAM); // edi
  _DWORD *v3; // eax
  HWND v4; // ecx
  int v5; // eax
  _DWORD *v6; // eax
  LRESULT (__stdcall **v7)(HWND, UINT, WPARAM, LPARAM); // eax
  UINT v8; // esi
  int v10; // eax
  LPARAM v11; // eax
  LRESULT (__stdcall *v12)(HWND, UINT, WPARAM, LPARAM); // ebx
  int v13; // eax
  int v14; // eax
  int v15; // esi
  int v16; // eax
  ObjectClass *v17; // eax
  ObjectClass *v20; // esi
  ObjectClass *v19; // eax
  ObjectClass *v22; // esi
  ObjectClass *v23; // edi
  ObjectClass *eax32; // eax
  ObjectClass *v25; // esi
  ObjectClass *v26; // edi
  ObjectClass *eax34; // eax
  ObjectClass *v28; // esi
  ObjectClass *v29; // edi
  int eax35; // eax
  int esi36; // esi
  int v30; // edi
  int v31; // eax
  int v32; // esi
  int v33; // edi
  int v34; // eax
  int v35; // esi
  int v36; // edi
  int v37; // eax
  LRESULT v38; // ebp
  WPARAM v39; // ebp
  LRESULT i; // eax
  HWND v41; // edx
  char v42; // bl
  LONG left; // eax
  LONG v44; // eax
  INIClass *v45; // ebp
  int v46; // edi
  int v47; // eax
  int v48; // esi
  int v49; // eax
  int v50; // edx
  int v51; // ebx
  int v52; // eax
  int v53; // esi
  int v54; // edi
  int v55; // eax
  int v56; // eax
  int v57; // esi
  int v58; // edi
  ObjectClass *v59; // edi
  ObjectClass *v62; // ebx
  unsigned int v61; // esi
  AbstractClass _28; // [esp+28h] [ebp-12Ch] BYREF
  INIClass aP0; // [esp+50h] [ebp-104h] BYREF
  ObjectClass *v64; // [esp+90h] [ebp-C4h]
  _DWORD *v65; // [esp+94h] [ebp-C0h]
  ObjectClass *v66; // [esp+98h] [ebp-BCh]
  int v67; // [esp+9Ch] [ebp-B8h]
  int v68; // [esp+A0h] [ebp-B4h]
  int v69; // [esp+A4h] [ebp-B0h]
  RECT v70; // [esp+A8h] [ebp-ACh] BYREF
  AbstractClass v71; // [esp+B8h] [ebp-9Ch] BYREF
  int v72; // [esp+DCh] [ebp-78h]
  int v73; // [esp+E0h] [ebp-74h]
  int v74; // [esp+E4h] [ebp-70h]
  LPARAM v75[7]; // [esp+E8h] [ebp-6Ch] BYREF
  char Buffer[80]; // [esp+104h] [ebp-50h] BYREF

  v2 = 0; /*0x6137e0*/
  v67 = 0; /*0x6137e4*/
  v65 = 0; /*0x6137e8*/
  if ( *(&g_MatrixTransformState + 2877) /*0x613815*/
    && (v3 = (_DWORD *)*(&(*(&g_MatrixTransformState + 2876))->X
                       + (((int (__thiscall *)(CCINIClass *))*(&g_MatrixTransformState + 2882))(&hWnd)
                        & ((1 << *((char *)&g_MatrixTransformState + 11516)) - 1)))) != 0 )
  {
    v4 = *(HWND *)hWnd.__pad_0; /*0x613817*/
    while ( *v3 != *(_DWORD *)hWnd.__pad_0 ) /*0x613820*/
    {
      v3 = (_DWORD *)v3[129]; /*0x613822*/
      if ( !v3 ) /*0x61382a*/
        goto LABEL_9; /*0x61382a*/
    }
    v65 = v3 + 1; /*0x613835*/
  }
  else
  {
    v4 = *(HWND *)hWnd.__pad_0; /*0x61383b*/
  }
LABEL_9:
  if ( *(&g_MatrixTransformState + 2895) ) /*0x613848*/
  {
    v5 = HashMap::ComputeIndex((int)(&(&g_MatrixTransformState)[241] + 2), &hWnd); /*0x613857*/
    v4 = *(HWND *)hWnd.__pad_0; /*0x613862*/
    v6 = (_DWORD *)*(&(*(&g_MatrixTransformState + 2894))->X + v5); /*0x613869*/
    if ( v6 ) /*0x61386e*/
    {
      while ( *v6 != *(_DWORD *)hWnd.__pad_0 ) /*0x613872*/
      {
        v6 = (_DWORD *)v6[2]; /*0x613874*/
        if ( !v6 ) /*0x613879*/
          goto LABEL_16; /*0x613879*/
      }
      v7 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v6 + 1); /*0x613881*/
      if ( v7 ) /*0x613886*/
        v2 = *v7; /*0x613888*/
    }
  }
LABEL_16:
  v8 = hWnd.headNode[0]; /*0x61388a*/
  switch ( hWnd.headNode[0] ) /*0x613894*/
  {
    case 0x14: /*0x613894*/
      return 1; /*0x6138a4*/
    case 0x85: /*0x613894*/
      return 0; /*0x6138ba*/
    case 0x497: /*0x613894*/
      ScreenDialogToClient(v4, (LPRECT)&v71.uniqueId); /*0x6138cc*/
      v10 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_14B0[15988], 0); /*0x6138dc*/
      v11 = (unsigned __int16)((*(int (__thiscall **)(int))(*(_DWORD *)v10 + 128))(v10) - 1) << 16; /*0x6138f1*/
      LOBYTE(v11) = v11 | 0x59; /*0x6138f4*/
      SendMessageA(*(HWND *)hWnd.__pad_0, 0x1329u, 0, v11); /*0x613905*/
      v4 = *(HWND *)hWnd.__pad_0; /*0x61390b*/
LABEL_22:
      if ( v2 ) /*0x613914*/
        return CallWindowProcA(v2, v4, v8, hWnd.headNode[1], hWnd.headNode[2]); /*0x61392f*/
      return v67; /*0x613940*/
  }
  if ( hWnd.headNode[0] != 15 ) /*0x613946*/
    goto LABEL_22; /*0x613946*/
  _28.nextArrayIndex = a1; /*0x613948*/
  ScreenDialogToClient(v4, (LPRECT)aP0.sectionHead); /*0x61394d*/
  v12 = SendMessageA; /*0x613959*/
  SendMessageA(*(HWND *)hWnd.__pad_0, 0x1304u, 0, 0); /*0x613967*/
  SendMessageA(*(HWND *)hWnd.__pad_0, 0x130Au, 0, (LPARAM)&v71.uniqueId); /*0x61397f*/
  SendMessageA(*(HWND *)hWnd.__pad_0, 0x130Au, 0, (LPARAM)&v71.uniqueId); /*0x613997*/
  v13 = aP0.sectionHead[1] + v71.referenceCount - v71.abstractFlags + 3; /*0x6139b2*/
  *(_DWORD *)aP0.__pad_20 = aP0.sectionHead[0]; /*0x6139ba*/
  *(_DWORD *)&aP0.__pad_20[8] = aP0.sectionHead[2] - aP0.sectionHead[0]; /*0x6139c4*/
  aP0.INIClass_field_2C = aP0.sectionCount - v13; /*0x6139d1*/
  aP0.sectionHead[1] = v13; /*0x6139d9*/
  *(_DWORD *)&aP0.__pad_20[4] = v13; /*0x6139dd*/
  SetupDialogRenderBuffer((int *)aP0.__pad_20, *(HWND *)hWnd.__pad_0, 0); /*0x6139e1*/
  ValidateRect(*(HWND *)hWnd.__pad_0, 0); /*0x6139ef*/
  *(_DWORD *)aP0.__pad_20 = aP0.sectionHead[0]; /*0x613a07*/
  *(_DWORD *)&aP0.__pad_20[4] = aP0.sectionHead[1]; /*0x613a11*/
  *(_DWORD *)&aP0.__pad_20[8] = aP0.sectionHead[2] - aP0.sectionHead[0]; /*0x613a1c*/
  aP0.INIClass_field_2C = aP0.sectionCount - aP0.sectionHead[1]; /*0x613a20*/
  v14 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_14B0[15976], 0); /*0x613a24*/
  v15 = v14; /*0x613a29*/
  if ( v14 ) /*0x613a2d*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 128))(v14, _28.nextArrayIndex); /*0x613a33*/
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 124))(v15); /*0x613a3d*/
    *(_DWORD *)aP0.__pad_0 = aP0.sectionHead[0]; /*0x613a48*/
    aP0.headNode[1] = v16; /*0x613a50*/
    aP0.headNode[0] = aP0.sectionHead[1]; /*0x613a5a*/
    aP0.headNode[2] = aP0.sectionCount - aP0.sectionHead[1]; /*0x613a6d*/
    Surface::TileBlit(&aP0, *(ObjectClass **)&stru_87C374.__pad_579C[22528], v15, 0, 0); /*0x613a71*/
  }
  v17 = (ObjectClass *)HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_14B0[15964], 0); /*0x613a81*/
  v20 = v17; /*0x613a86*/
  if ( v17 ) /*0x613a8a*/
  {
    (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)v17->__pad_0 + 128))(v17); /*0x613a90*/
    aP0.headNode[1] = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v20->__pad_0 + 124))(v20); /*0x613aa7*/
    *(_DWORD *)aP0.__pad_0 = aP0.sectionHead[2] - aP0.headNode[1]; /*0x613ab0*/
    aP0.headNode[0] = aP0.sectionHead[1]; /*0x613ab9*/
    aP0.headNode[2] = aP0.sectionCount - aP0.sectionHead[1]; /*0x613acc*/
    Surface::TileBlit(&aP0, *(ObjectClass **)&stru_87C374.__pad_579C[22528], (int)v20, 0, 0); /*0x613ad0*/
  }
  v19 = (ObjectClass *)HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_14B0[15952], 0); /*0x613ae0*/
  v22 = v19; /*0x613ae5*/
  if ( v19 ) /*0x613ae9*/
  {
    v23 = (ObjectClass *)(*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v19->__pad_0 + 128))(v19); /*0x613af5*/
    (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)v22->__pad_0 + 124))(v22); /*0x613afb*/
    *(_DWORD *)aP0.__pad_0 = aP0.sectionHead[0]; /*0x613b0a*/
    aP0.headNode[0] = aP0.sectionHead[1]; /*0x613b16*/
    aP0.headNode[1] = aP0.sectionHead[2] - aP0.sectionHead[0]; /*0x613b27*/
    aP0.headNode[2] = (int)v23; /*0x613b2b*/
    Surface::TileBlit(&aP0, *(ObjectClass **)&stru_87C374.__pad_579C[22528], (int)v22, 0, 0); /*0x613b2f*/
  }
  eax32 = (ObjectClass *)HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_14B0[15940], 0); /*0x613b3f*/
  v25 = eax32; /*0x613b44*/
  if ( eax32 ) /*0x613b48*/
  {
    v26 = (ObjectClass *)(*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)eax32->__pad_0 + 128))(eax32); /*0x613b54*/
    (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)v25->__pad_0 + 124))(v25); /*0x613b5a*/
    *(_DWORD *)aP0.__pad_0 = aP0.sectionHead[0]; /*0x613b6b*/
    aP0.headNode[0] = aP0.sectionCount - (_DWORD)v26; /*0x613b77*/
    aP0.headNode[1] = aP0.sectionHead[2] - aP0.sectionHead[0]; /*0x613b88*/
    aP0.headNode[2] = (int)v26; /*0x613b8c*/
    Surface::TileBlit(&aP0, *(ObjectClass **)&stru_87C374.__pad_579C[22528], (int)v25, 0, 0); /*0x613b90*/
  }
  eax34 = (ObjectClass *)HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_14B0[15928], 0); /*0x613ba0*/
  v28 = eax34; /*0x613ba5*/
  if ( eax34 ) /*0x613ba9*/
  {
    v29 = (ObjectClass *)(*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)eax34->__pad_0 + 128))(eax34); /*0x613bb5*/
    eax35 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v28->__pad_0 + 124))(v28); /*0x613bbb*/
    *(_DWORD *)&aP0.needsSave_flag = aP0.sectionHead[1]; /*0x613bc6*/
    aP0.unknown30 = aP0.sectionHead[0]; /*0x613bca*/
    *(_DWORD *)aP0.__pad_0 = 0; /*0x613bdc*/
    aP0.headNode[0] = 0; /*0x613be0*/
    aP0.headNode[1] = eax35; /*0x613be4*/
    aP0.headNode[2] = (int)v29; /*0x613be8*/
    aP0.unknown38 = eax35; /*0x613bec*/
    aP0.INIClass_field_3C = (int)v29; /*0x613bf0*/
    (*(void (__thiscall **)(_DWORD, int *, ObjectClass *, INIClass *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22528] /*0x613bfc*/
                                                                                  + 8))(
      *(_DWORD *)&stru_87C374.__pad_579C[22528],
      &aP0.unknown30,
      v28,
      &aP0,
      0,
      1);
  }
  esi36 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_14B0[15916], 0); /*0x613c0f*/
  if ( esi36 ) /*0x613c13*/
  {
    v30 = (*(int (__thiscall **)(int))(*(_DWORD *)esi36 + 128))(esi36); /*0x613c23*/
    v31 = (*(int (__thiscall **)(int))(*(_DWORD *)esi36 + 124))(esi36); /*0x613c25*/
    aP0.headNode[0] = aP0.sectionHead[1]; /*0x613c32*/
    *(_DWORD *)aP0.__pad_0 = aP0.sectionHead[2] - v31; /*0x613c36*/
    aP0.unknown30 = 0; /*0x613c48*/
    *(_DWORD *)&aP0.needsSave_flag = 0; /*0x613c4c*/
    aP0.unknown38 = v31; /*0x613c50*/
    aP0.INIClass_field_3C = v30; /*0x613c54*/
    aP0.headNode[1] = v31; /*0x613c58*/
    aP0.headNode[2] = v30; /*0x613c5c*/
    (*(void (__thiscall **)(_DWORD, INIClass *, int, int *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22528] + 8))( /*0x613c68*/
      *(_DWORD *)&stru_87C374.__pad_579C[22528],
      &aP0,
      esi36,
      &aP0.unknown30,
      0,
      1);
  }
  v32 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_14B0[15904], 0); /*0x613c7b*/
  if ( v32 ) /*0x613c7f*/
  {
    v33 = (*(int (__thiscall **)(int))(*(_DWORD *)v32 + 128))(v32); /*0x613c8f*/
    v34 = (*(int (__thiscall **)(int))(*(_DWORD *)v32 + 124))(v32); /*0x613c91*/
    *(_DWORD *)aP0.__pad_0 = aP0.sectionHead[0]; /*0x613c9e*/
    aP0.headNode[0] = aP0.sectionCount - v33; /*0x613ca8*/
    aP0.unknown30 = 0; /*0x613cb4*/
    *(_DWORD *)&aP0.needsSave_flag = 0; /*0x613cb8*/
    aP0.unknown38 = v34; /*0x613cbc*/
    aP0.INIClass_field_3C = v33; /*0x613cc0*/
    aP0.headNode[1] = v34; /*0x613cc4*/
    aP0.headNode[2] = v33; /*0x613cc8*/
    (*(void (__thiscall **)(_DWORD, INIClass *, int, int *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22528] + 8))( /*0x613cd4*/
      *(_DWORD *)&stru_87C374.__pad_579C[22528],
      &aP0,
      v32,
      &aP0.unknown30,
      0,
      1);
  }
  v35 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_14B0[15892], 0); /*0x613ce7*/
  if ( v35 ) /*0x613ceb*/
  {
    v36 = (*(int (__thiscall **)(int))(*(_DWORD *)v35 + 128))(v35); /*0x613cfb*/
    v37 = (*(int (__thiscall **)(int))(*(_DWORD *)v35 + 124))(v35); /*0x613cfd*/
    aP0.headNode[0] = aP0.sectionCount - v36; /*0x613d0c*/
    *(_DWORD *)aP0.__pad_0 = aP0.sectionHead[2] - v37; /*0x613d10*/
    aP0.unknown30 = 0; /*0x613d22*/
    *(_DWORD *)&aP0.needsSave_flag = 0; /*0x613d26*/
    aP0.unknown38 = v37; /*0x613d2a*/
    aP0.INIClass_field_3C = v36; /*0x613d2e*/
    aP0.headNode[1] = v37; /*0x613d32*/
    aP0.headNode[2] = v36; /*0x613d36*/
    (*(void (__thiscall **)(_DWORD, INIClass *, int, int *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22528] + 8))( /*0x613d42*/
      *(_DWORD *)&stru_87C374.__pad_579C[22528],
      &aP0,
      v35,
      &aP0.unknown30,
      0,
      1);
  }
  v38 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x130Bu, 0, 0); /*0x613d56*/
  v66 = (ObjectClass *)v38; /*0x613d63*/
  ScreenDialogToClient(*(HWND *)hWnd.__pad_0, (LPRECT)aP0.sectionHead); /*0x613d67*/
  v39 = v38 + 1; /*0x613d6c*/
  v64 = (ObjectClass *)v39; /*0x613d6d*/
LABEL_43:
  for ( i = v12(*(HWND *)hWnd.__pad_0, 0x130Au, v39, (LPARAM)&v70); /*0x613d84*/
        ;
        i = SendMessageA(*(HWND *)hWnd.__pad_0, 0x130Au, (WPARAM)&v59->__pad_0[1], (LPARAM)&v70) )
  {
    if ( !i ) /*0x613d88*/
    {
      v64 = 0; /*0x614161*/
      v39 = 0; /*0x614169*/
      goto LABEL_43; /*0x61416d*/
    }
    v41 = *(HWND *)hWnd.__pad_0; /*0x613d9c*/
    memset(v75, 0, sizeof(v75)); /*0x613da3*/
    v75[3] = (LPARAM)&(&g_MatrixTransformState)[243]; /*0x613db3*/
    v75[4] = 64; /*0x613dc7*/
    strcpy((char *)&(&g_MatrixTransformState)[243], &stru_830620.__pad_14B0[15884]); /*0x613dd5*/
    v75[0] = 1; /*0x613dd9*/
    v12(v41, 0x1305u, v39, (LPARAM)v75); /*0x613df8*/
    v42 = 100; /*0x613dfa*/
    if ( (ObjectClass *)v39 == v66 ) /*0x613e00*/
      v42 = 117; /*0x613e02*/
    left = v70.left; /*0x613e0b*/
    if ( v70.left >= 6 ) /*0x613e0d*/
      left = 6; /*0x613e0f*/
    *(_DWORD *)aP0.__pad_20 = aP0.sectionHead[0] + v70.left - left; /*0x613e22*/
    *(_DWORD *)&aP0.__pad_20[4] = v70.top + aP0.sectionHead[1]; /*0x613e2f*/
    v44 = v70.left; /*0x613e33*/
    if ( v70.left >= 6 ) /*0x613e35*/
      v44 = 6; /*0x613e37*/
    aP0.INIClass_field_2C = v70.bottom - v70.top; /*0x613e4c*/
    *(_DWORD *)&aP0.__pad_20[8] = v70.right + v44 - v70.left; /*0x613e5a*/
    v45 = (INIClass *)v42; /*0x613e63*/
    v46 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_14B0[15988], 0); /*0x613e74*/
    sprintf(Buffer, (ObjectClass *)&stru_830620.__pad_14B0[15868], (INIClass *)v42); /*0x613e76*/
    v47 = HashTable::Find(&g_MatrixTransformState + 5774, Buffer, 0); /*0x613e8d*/
    v48 = v47; /*0x613e92*/
    if ( v47 ) /*0x613e96*/
    {
      v68 = (*(int (__thiscall **)(int))(*(_DWORD *)v47 + 128))(v47); /*0x613ea2*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v48 + 124))(v48); /*0x613eaa*/
      v49 = (*(int (__thiscall **)(int))(*(_DWORD *)v46 + 124))(v46); /*0x613eb1*/
      v50 = *(_DWORD *)v46; /*0x613eb8*/
      v51 = *(_DWORD *)&aP0.__pad_20[8] - 2 * v49; /*0x613ebc*/
      v69 = *(_DWORD *)&aP0.__pad_20[4]; /*0x613ec4*/
      v52 = (*(int (__thiscall **)(int))(v50 + 124))(v46); /*0x613ec8*/
      aP0.unknown30 = *(_DWORD *)aP0.__pad_20 + v52; /*0x613edb*/
      *(_DWORD *)&aP0.needsSave_flag = v69; /*0x613ee5*/
      aP0.INIClass_field_3C = v68; /*0x613ef0*/
      aP0.unknown38 = v51; /*0x613efb*/
      Surface::TileBlit((INIClass *)&aP0.unknown30, *(ObjectClass **)&stru_87C374.__pad_579C[22528], v48, 0, 0); /*0x613eff*/
    }
    sprintf(Buffer, (ObjectClass *)&stru_830620.__pad_14B0[15852], v45); /*0x613f12*/
    v53 = HashTable::Find(&g_MatrixTransformState + 5774, Buffer, 0); /*0x613f2e*/
    if ( v53 ) /*0x613f32*/
    {
      v54 = (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 128))(v53); /*0x613f46*/
      v55 = (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 124))(v53); /*0x613f48*/
      *(_DWORD *)aP0.__pad_0 = *(_DWORD *)aP0.__pad_20; /*0x613f53*/
      aP0.headNode[1] = v55; /*0x613f5d*/
      aP0.headNode[0] = *(_DWORD *)&aP0.__pad_20[4]; /*0x613f6e*/
      aP0.headNode[2] = v54; /*0x613f74*/
      Surface::BlitTransparent( /*0x613fb5*/
        (int *)aP0.__pad_0,
        *(ObjectClass **)&stru_87C374.__pad_579C[22528],
        v53,
        (ObjectClass *)((255 >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120])
                      | (0xFFu >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128])));
    }
    sprintf(Buffer, (ObjectClass *)&stru_830620.__pad_14B0[15836], v45); /*0x613fc8*/
    v56 = HashTable::Find(&g_MatrixTransformState + 5774, Buffer, 0); /*0x613fdf*/
    v57 = v56; /*0x613fe4*/
    if ( v56 ) /*0x613fe8*/
    {
      v58 = (*(int (__thiscall **)(int))(*(_DWORD *)v56 + 128))(v56); /*0x613ff8*/
      v73 = (*(int (__thiscall **)(int))(*(_DWORD *)v57 + 124))(v57); /*0x61400b*/
      v71.NeedsSaveOrLink = (void *)(*(_DWORD *)aP0.__pad_20 + *(_DWORD *)&aP0.__pad_20[8] - v73); /*0x614018*/
      v72 = *(_DWORD *)&aP0.__pad_20[4]; /*0x61402a*/
      v74 = v58; /*0x61403b*/
      Surface::BlitTransparent( /*0x614082*/
        (int *)&v71.NeedsSaveOrLink,
        *(ObjectClass **)&stru_87C374.__pad_579C[22528],
        v57,
        (ObjectClass *)((255 >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120])
                      | (0xFFu >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128])));
    }
    if ( v75[3] ) /*0x614090*/
      strcpy((char *)&(&g_MatrixTransformState)[243], (const char *)v75[3]); /*0x6140a9*/
    v59 = v64; /*0x6140ba*/
    v62 = v66; /*0x6140be*/
    v61 = (unsigned int)*(&g_MatrixTransformState + 5630); /*0x6140c2*/
    *(_DWORD *)v71.__pad_0 = *(_DWORD *)aP0.__pad_20; /*0x6140ca*/
    *(_DWORD *)&v71.__pad_0[8] = *(_DWORD *)aP0.__pad_20 + *(_DWORD *)&aP0.__pad_20[8]; /*0x6140d2*/
    *(_DWORD *)&v71.__pad_0[4] = *(_DWORD *)&aP0.__pad_20[4] + 6; /*0x6140e4*/
    *(_DWORD *)&v71.__pad_0[12] = *(_DWORD *)&aP0.__pad_20[4] + aP0.INIClass_field_2C; /*0x6140e8*/
    if ( v64 == v66 ) /*0x6140ef*/
      v61 = (unsigned int)*(&g_MatrixTransformState + 2725); /*0x6140f1*/
    swprintf( /*0x614106*/
      (wchar_t *const)&g_MatrixTransformState + 11278,
      (const size_t)&stru_830620.__pad_14B0[15780],
      (const wchar_t *const)&(&g_MatrixTransformState)[243],
      (CampaignScore *)_28.nextArrayIndex);
    memset(&_28.__pad_0[12], 0, 12); /*0x61411d*/
    *(_DWORD *)&_28.__pad_0[8] = 12; /*0x61411f*/
    *(_QWORD *)_28.__pad_0 = v61 | 0x500000000LL; /*0x614123*/
    PrintFontLayout(&v71, (AbstractClass *)v65[25], _28); /*0x614131*/
    ValidateRect(*(HWND *)hWnd.__pad_0, &v70); /*0x614149*/
    if ( v59 == v62 ) /*0x61414d*/
      break; /*0x61414d*/
    v12 = SendMessageA; /*0x61414f*/
    v64 = (ObjectClass *)&v59->__pad_0[1]; /*0x614156*/
    v39 = (WPARAM)&v59->__pad_0[1]; /*0x61415a*/
  }
  ValidateRect(*(HWND *)hWnd.__pad_0, 0); /*0x61417c*/
  return v67; /*0x613896*/
}
}
} // namespace gamemd

// 0x6213A0
namespace gamemd {
LONG Dialog::Resize()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __thiscall Dialog_Resize(char *this)
{
  LONG result; // eax
  int SystemMetrics; // esi
  HWND v4; // esi
  HWND v5; // [esp+8h] [ebp-24h] BYREF
  struct tagRECT v6; // [esp+Ch] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+1Ch] [ebp-10h] BYREF

  result = MEMORY[0x887308]; /*0x6213a0*/
  if ( MEMORY[0x887308] ) /*0x6213ae*/
  {
    result = MEMORY[0x887310]; /*0x6213b4*/
    if ( MEMORY[0x887310] ) /*0x6213bb*/
    {
      ScreenDialogToClient(*((HWND *)this + 5), &v6); /*0x6213c8*/
      GetClientRect(*((HWND *)this + 5), &Rect); /*0x6213d6*/
      result = GetWindowLongA(*((HWND *)this + 5), -16); /*0x6213e2*/
      if ( ((unsigned int)&unk_800000 & result) != 0 ) /*0x6213ed*/
      {
        SystemMetrics = GetSystemMetrics(5); /*0x6213fa*/
        result = GetSystemMetrics(6); /*0x6213fe*/
        v6.left += SystemMetrics; /*0x62140e*/
        v6.right -= SystemMetrics; /*0x62141c*/
        v6.top += result; /*0x621420*/
        v6.bottom -= result; /*0x621424*/
      }
      if ( *(_DWORD *)this == 4 ) /*0x62142c*/
      {
        result = MEMORY[0xAC1B04]; /*0x62142e*/
        v4 = (HWND)*((_DWORD *)this + 5); /*0x621433*/
        v5 = v4; /*0x621438*/
        if ( MEMORY[0xAC1B04] ) /*0x62143c*/
        {
          result = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v5) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x62145d*/
          if ( result ) /*0x621462*/
          {
            while ( *(HWND *)result != v5 ) /*0x62146a*/
            {
              result = *(_DWORD *)(result + 516); /*0x62146c*/
              if ( !result ) /*0x621474*/
                return result; /*0x621474*/
            }
            result += 4; /*0x621480*/
            if ( result ) /*0x621485*/
            {
              *(_DWORD *)(result + 232) = *((_DWORD *)this + 4); /*0x621491*/
              InvalidateRect(v4, (const RECT *)(this + 28), 0); /*0x621497*/
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
} // namespace gamemd

// 0x621E90
namespace gamemd {
void Dialog::DrawBackground()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Dialog::DrawBackground(HWND this)
{
  int v1; // ebp
  _DWORD *v3; // ebx
  HWND *v4; // eax
  LONG right; // eax
  LONG bottom; // ecx
  _DWORD *v7; // esi
  LONG v8; // eax
  LONG v9; // ecx
  int v10; // edx
  HWND *v11; // eax
  _DWORD *v12; // eax
  HWND *v13; // eax
  int v14; // edi
  HWND *v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  HWND *v19; // eax
  _DWORD *v20; // eax
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
  v30 = this; /*0x621ea4*/
  v28 = this; /*0x621ea8*/
  if ( MEMORY[0xAC1B04] ) /*0x621eac*/
  {
    v4 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&v28)); /*0x621ec3*/
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
    GetClientRect(this, &Rect); /*0x621ef3*/
    ScreenDialogToClient(this, &v38); /*0x621eff*/
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
      v7 = (_DWORD *)v3[4]; /*0x621f4d*/
      if ( !v7 ) /*0x621f52*/
      {
        v7 = __2_YAPAXI_Z(0x20u); /*0x621f5b*/
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
        ++MEMORY[0xAC48B4]; /*0x621fa8*/
        right = v36; /*0x621fad*/
      }
      v10 = v3[44]; /*0x621fb1*/
      if ( v10 == 1 ) /*0x621fba*/
      {
        if ( SessionClass::GetGameSpeed(MEMORY[0xA8B238]) ) /*0x621fc5*/
        {
          RenderCreditsScreen((int)v7, &left, 0); /*0x621fd5*/
        }
        else if ( UI_Draw_72E260() ) /*0x621fdf*/
        {
          RenderScoreScreen((int)v7, &left, *((_BYTE *)v3 + 212) == 0); /*0x621ffe*/
          v29 = this; /*0x62200a*/
          if ( MEMORY[0xAC1B04] ) /*0x62200e*/
          {
            v11 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v29) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x62202f*/
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
          v29 = this; /*0x622058*/
          if ( !MEMORY[0xAC1B04] ) /*0x622063*/
            goto LABEL_33; /*0x622063*/
          v13 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v29) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x622084*/
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
          if ( !MEMORY[0xAC1B04] ) /*0x6220ae*/
            goto LABEL_43; /*0x6220ae*/
          v15 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v29) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x6220cf*/
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
          if ( *((_BYTE *)v3 + 213) ) /*0x622120*/
            UI_Draw_72E8C0((int)v7, &left); /*0x622130*/
          if ( *((_BYTE *)v3 + 214) ) /*0x622135*/
            UI_Draw_72E860((int)v7, &left); /*0x622145*/
          if ( MEMORY[0xAC1B04] ) /*0x622159*/
          {
            v19 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v30) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x62217e*/
            if ( v19 ) /*0x622183*/
            {
              while ( *v19 != v30 ) /*0x62218f*/
              {
                v19 = (HWND *)v19[129]; /*0x622191*/
                if ( !v19 ) /*0x622199*/
                  goto LABEL_72; /*0x622199*/
              }
              v20 = v19 + 1; /*0x6221a8*/
              if ( v20 && *((_BYTE *)v20 + 215) ) /*0x6221b3*/
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
        (*(void (__thiscall **)(_DWORD *, LONG *, int, LONG *, _DWORD, int))(v21 + 8))( /*0x622212*/
          v7,
          &v39,
          MEMORY[0x887310],
          &left,
          0,
          1);
        if ( SessionClass::GetGameSpeed(MEMORY[0xA8B238]) ) /*0x62221a*/
        {
          v22 = *((_DWORD *)MEMORY[0xA8B230] + 3374); /*0x622229*/
          if ( v22 ) /*0x622231*/
          {
            if ( v22 == 1 ) /*0x622243*/
            {
              v23 = MEMORY[0xB0FC88]; /*0x622245*/
              v24 = UI_Draw_72AFF0(); /*0x62224b*/
            }
            else
            {
              v23 = MEMORY[0xB0FC8C]; /*0x622252*/
              v24 = UI_Draw_72B010(); /*0x622258*/
            }
          }
          else
          {
            v23 = MEMORY[0xB0FC84]; /*0x622233*/
            v24 = UI_Draw_72AFF0(); /*0x622239*/
          }
        }
        else
        {
          v23 = MEMORY[0xB0FC80]; /*0x62225f*/
          v24 = UI_Draw_72B030(); /*0x622265*/
        }
        v30 = 0; /*0x62226c*/
        v31 = 0; /*0x622270*/
        if ( v24 && v23 ) /*0x62227c*/
          DrawToSurfaceSHP((int)v7, v24, (int)v23, 0, (int *)&v30, &v39, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6222a8*/
      }
      else
      {
        v25 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x833654], 0); /*0x6222d3*/
        v42 = v37; /*0x6222d9*/
        v33 = v37; /*0x6222dd*/
        v30 = (HWND)left; /*0x6222e9*/
        v31 = top; /*0x6222ed*/
        v41 = v36; /*0x6222f5*/
        v32 = v36; /*0x6222f9*/
        v39 = left - v38.left; /*0x6222fd*/
        v40 = top - v38.top; /*0x622301*/
        v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 124))(v25); /*0x62230c*/
        v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 128))(v25); /*0x622318*/
        if ( MEMORY[0x8A00A4] > v26 ) /*0x622321*/
          v30 = (HWND)((char *)v30 + (MEMORY[0x8A00A4] - v26) / -2); /*0x622332*/
        if ( *(&MEMORY[0x8A00A4] + 1) > v27 ) /*0x62233d*/
          v31 += (*(&MEMORY[0x8A00A4] + 1) - v27) / -2; /*0x62234e*/
        (*(void (__thiscall **)(_DWORD *, LONG *, int, HWND *, _DWORD, int))(*v7 + 8))(v7, &v39, v25, &v30, 0, 1); /*0x622365*/
      }
LABEL_72:
      if ( v7 ) /*0x62236a*/
      {
        v41 = v36; /*0x622380*/
        v42 = v37; /*0x62238a*/
        v40 = top - v38.top; /*0x622392*/
        v39 = left - v38.left; /*0x6223a7*/
        (*(void (__thiscall **)(int, LONG *, _DWORD *, LONG *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))( /*0x6223b3*/
          MEMORY[0x887310],
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
} // namespace gamemd

// 0x622720
namespace gamemd {
HWND Dialog::Destroy()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __thiscall Dialog::Destroy(SkirmishDialog *this)
{
  HWND result; // eax
  HWND *i; // ecx
  int v4; // eax
  int v5; // eax
  HWND v6; // ecx
  int v7; // eax

  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x62272a*/
  Dialog::IdleProcess(this); /*0x622731*/
  DestroyWindow((HWND)this); /*0x622737*/
  result = 0; /*0x622745*/
  if ( g_DialogTrackingList > 0 ) /*0x622749*/
  {
    for ( i = (HWND *)a0; *i != (HWND)this; i += 2 ) /*0x62274f*/
    {
      result = (HWND)((char *)result + 1); /*0x622758*/
      if ( (int)result >= g_DialogTrackingList ) /*0x62275e*/
        return result; /*0x62275e*/
    }
    memcpy( /*0x622783*/
      (void *)(8 * (_DWORD)result + 12004648),
      (const void *)(8 * (_DWORD)result + 12004656),
      8 * (g_DialogTrackingList + 0x1FFFFFFF * ((_DWORD)result + 1)));
    v4 = g_DialogTrackingList; /*0x622788*/
    *(&g_ClipboardBuffer + 2 * g_DialogTrackingList) = 0; /*0x622790*/
    dword_B72D24[2 * v4] = 0; /*0x622797*/
    v5 = v4 - 1; /*0x62279e*/
    g_DialogTrackingList = v5; /*0x6227a1*/
    if ( v5 <= 0 ) /*0x6227a6*/
    {
      dword_B72F44 = 0; /*0x6227de*/
      dword_B72F48 = 0; /*0x6227e5*/
      SetForegroundWindow(g_hWnd); /*0x6227eb*/
      return SetFocus(g_hWnd); /*0x6227f7*/
    }
    else
    {
      v6 = *(&g_ClipboardBuffer + 2 * v5); /*0x6227a8*/
      v7 = dword_B72D24[2 * v5]; /*0x6227af*/
      dword_B72F44 = v6; /*0x6227b7*/
      dword_B72F48 = v7; /*0x6227bd*/
      SetForegroundWindow(v6); /*0x6227c2*/
      return SetFocus(dword_B72F44); /*0x6227cf*/
    }
  }
  return result; /*0x622760*/
}
}
} // namespace gamemd

// 0x6233A0
namespace gamemd {
void Dialog::CleanupTree()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Dialog_CleanupTree(int this)
{
  _DWORD *i; // ecx
  _DWORD *v3; // eax
  _DWORD *v4; // edx
  void **v5; // esi

  if ( this->Dialog_field_0x28 ) /*0x6233a3*/
  {
    __3_YAXPAX_Z(*(void **)(this + 40)); /*0x6233ab*/
    this->Dialog_field_0x28 = 0; /*0x6233b3*/
  }
  for ( i = *(_DWORD **)(this + 52); i; i = *(_DWORD **)(this + 52) ) /*0x6233bf*/
  {
    v3 = i; /*0x6233c1*/
    v4 = 0; /*0x6233c3*/
    while ( i != v3 ) /*0x6233cb*/
    {
      v4 = v3; /*0x6233cd*/
      v3 = (_DWORD *)*v3; /*0x6233cf*/
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
  v5 = *(void ***)(this + 60); /*0x6233fa*/
  if ( v5 ) /*0x6233ff*/
  {
    DeleteAndZero::Alt(v5); /*0x623403*/
    __3_YAXPAX_Z(v5); /*0x623409*/
  }
}
}
} // namespace gamemd

// 0x624930
namespace gamemd {
char Dialog::UpdateControlState(unsigned int * a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_624930(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // eax

  if ( !*(this + 1) ) /*0x624934*/
    return 0; /*0x62493c*/
  v4 = *(_DWORD **)(*this + 4 * (((int (__thiscall *)(_DWORD *))*(this + 6))(a2) & ((1 << *(this + 3)) - 1))); /*0x62495a*/
  if ( !v4 ) /*0x62495f*/
    return 0; /*0x624962*/
  while ( *v4 != *a2 ) /*0x62496c*/
  {
    v4 = (_DWORD *)v4[2]; /*0x62496e*/
    if ( !v4 ) /*0x624973*/
      return 0; /*0x624979*/
  }
  *a3 = v4 + 1; /*0x624990*/
  return 1; /*0x62493b*/
}
}
} // namespace gamemd

// 0x624BE0
namespace gamemd {
void Dialog::GrowBuffer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_624BE0(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // [esp+4h] [ebp-4h]

  if ( *((_BYTE *)this + 20) != 1 ) /*0x624be8*/
  {
    v2 = *(this + 2); /*0x624bf0*/
    v3 = (_DWORD *)*this; /*0x624bf3*/
    v4 = *(this + 3) + 1; /*0x624bfc*/
    *(this + 2) = 2 * v2; /*0x624bfd*/
    v13 = v3; /*0x624c00*/
    *(this + 3) = v4; /*0x624c08*/
    v5 = __2_YAPAXI_Z(8 * v2); /*0x624c13*/
    v6 = 4 * *(this + 2); /*0x624c18*/
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
            v10 = ((int (__thiscall *)(int))*(this + 6))(v9) & ((1 << *(this + 3)) - 1); /*0x624c4b*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x624c4f*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x624c55*/
            v12 = *(_DWORD *)(v9 + 8); /*0x624c57*/
            *(_DWORD *)(v9 + 8) = v11; /*0x624c5a*/
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
} // namespace gamemd

// 0x624CA0
namespace gamemd {
char Dialog::BindGadgetData(IUnknown * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Dialog::BindGadgetData(_DWORD *this, IUnknown *aP1, IUnknown *aP2)
{
  IUnknown *v4; // eax
  int v6; // edx
  IUnknown *v7; // ecx
  int v8; // eax
  int ***v10; // eax
  bool v11; // zf
  CCINIClass *v12; // esi
  size_t v13; // eax
  wchar_t *v14; // eax
  CCINIClass *v15; // edi
  int CCINIClass_field_4C; // ebx
  _DWORD *i; // eax
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
  IUnknown *v32; // esi
  char v33; // bl
  int v35; // edx
  IUnknown *v36; // [esp+10h] [ebp-14h]
  int v37; // [esp+10h] [ebp-14h]
  int v38; // [esp+14h] [ebp-10h]
  CCINIClass *v39; // [esp+18h] [ebp-Ch]
  CCINIClass *v40; // [esp+1Ch] [ebp-8h]
  CCINIClass *v41; // [esp+1Ch] [ebp-8h]
  IUnknown *aP1a; // [esp+28h] [ebp+4h]
  IUnknown *aP1b; // [esp+28h] [ebp+4h]
  void *Block; // [esp+2Ch] [ebp+8h]
  int *Blocka; // [esp+2Ch] [ebp+8h]
  void *Blockb; // [esp+2Ch] [ebp+8h]

  v4 = (IUnknown *)*(this + 1); /*0x624cab*/
  if ( !v4 ) /*0x624cb0*/
    return 0; /*0x624cb5*/
  *(float *)&v39 = (double)(unsigned int)&v4[-1].__tail_1602E[1] / (double)(int)*(this + 2); /*0x624ce0*/
  v6 = ((int (__thiscall *)(IUnknown *))*(this + 6))(aP1) & ((1 << *(this + 3)) - 1); /*0x624cf5*/
  v38 = v6; /*0x624cf7*/
  v7 = *(IUnknown **)(*this + 4 * v6); /*0x624cfb*/
  v36 = v7; /*0x624d00*/
  if ( !v7 ) /*0x624d04*/
    return 0; /*0x624d09*/
  v8 = aP1->field_0; /*0x624d12*/
  if ( v7->field_0 == aP1->field_0 ) /*0x624d18*/
  {
    v10 = (int ***)&v7->field_4; /*0x624d22*/
    v11 = aP2 == (IUnknown *)&v7->field_4; /*0x624d25*/
    aP1a = (IUnknown *)&v7->field_4; /*0x624d27*/
    v40 = (CCINIClass *)aP2->field_34; /*0x624d2e*/
    Block = *(void **)aP2->__pad_28; /*0x624d35*/
    v37 = *(_DWORD *)aP2->__pad_3C; /*0x624d3c*/
    if ( !v11 ) /*0x624d40*/
    {
      qmemcpy(aP2, v10, 0x200u); /*0x624d4f*/
      *(_DWORD *)aP2->__pad_3C = v37; /*0x624d55*/
      *(_DWORD *)aP2->__pad_28 = Block; /*0x624d5c*/
      aP2->field_34 = (int)v40; /*0x624d5f*/
      v12 = *(CCINIClass **)&v7->__pad_28[4]; /*0x624d62*/
      if ( Block ) /*0x624d67*/
      {
        __3_YAXPAX_Z(Block); /*0x624d6a*/
        v10 = (int ***)aP1a; /*0x624d6f*/
        *(_DWORD *)aP2->__pad_28 = 0; /*0x624d76*/
      }
      if ( v12 && *(_WORD *)v12->__pad_0 ) /*0x624d81*/
      {
        v13 = wcslen((const wchar_t *)v12); /*0x624d88*/
        v14 = (wchar_t *)__2_YAPAXI_Z(2 * v13 + 2); /*0x624d92*/
        *(_DWORD *)aP2->__pad_28 = v14; /*0x624d99*/
        wcscpy(v14, (const wchar_t *)v12); /*0x624d9c*/
        v10 = (int ***)aP1a; /*0x624da1*/
      }
      SymbolTable::Rebuild(aP2, v10[13]); /*0x624dae*/
      v6 = v38; /*0x624db3*/
    }
    v15 = *(CCINIClass **)(*this + 4 * v6); /*0x624dba*/
    CCINIClass_field_4C = v15[5].CCINIClass_field_4C; /*0x624dbf*/
    if ( v15 ) /*0x624dc5*/
    {
      GadgetClass::SetTooltip((void **)v15->headNode, 0); /*0x624dce*/
      for ( i = (_DWORD *)v15->unknown38; i; i = (_DWORD *)v15->unknown38 ) /*0x624dd8*/
        LinkedList::Remove(v15->headNode, i); /*0x624ddd*/
      v18 = *(void ***)&v15->ownsFile; /*0x624de9*/
      if ( v18 ) /*0x624dee*/
        DeleteAndZero::OrFree(v18, 1); /*0x624df4*/
      __3_YAXPAX_Z(v15); /*0x624dfa*/
      v6 = v38; /*0x624dff*/
    }
    *(_DWORD *)(*this + 4 * v6) = CCINIClass_field_4C; /*0x624e0d*/
    v19 = *(float *)&v39 < *((double *)this + 4); /*0x624e13*/
    v20 = *(float *)&v39 == *((double *)this + 4); /*0x624e13*/
    --*(this + 1); /*0x624e17*/
    if ( v19 || v20 ) /*0x624e1c*/
    {
      v21 = *(this + 2); /*0x624e25*/
      if ( v21 > *(this + 12) && *((_BYTE *)this + 20) != 1 ) /*0x624e37*/
      {
        v22 = (int *)*this; /*0x624e40*/
        Blocka = (int *)*this; /*0x624e45*/
        v23 = *(this + 3) - 1; /*0x624e4b*/
        *(this + 2) = v21 >> 1; /*0x624e4c*/
        *(this + 3) = v23; /*0x624e56*/
        v24 = (void *)__2_YAPAXI_Z(4 * (v21 >> 1)); /*0x624e62*/
        v25 = 4 * *(this + 2); /*0x624e67*/
        *this = v24; /*0x624e6e*/
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
                v29 = ((int (__thiscall *)(int))*(this + 6))(v28) & ((1 << *(this + 3)) - 1); /*0x624e9b*/
                v30 = *(_DWORD *)(*this + 4 * v29); /*0x624ea0*/
                *(_DWORD *)(*this + 4 * v29) = v28; /*0x624ea6*/
                v31 = *(_DWORD *)(v28 + 516); /*0x624ea8*/
                *(_DWORD *)(v28 + 516) = v30; /*0x624eae*/
                v28 = v31; /*0x624eb4*/
              }
              while ( v31 ); /*0x624eb8*/
            }
            ++v26; /*0x624eba*/
            --v27; /*0x624ebd*/
          }
          while ( v27 ); /*0x624ebe*/
          v22 = Blocka; /*0x624ec0*/
        }
        __3_YAXPAX_Z(v22); /*0x624ec5*/
      }
    }
    return 1; /*0x624ed0*/
  }
  else
  {
    v32 = *(IUnknown **)&v7->__pad_1D8[44]; /*0x624ed9*/
    v33 = 0; /*0x624edf*/
    aP1b = v32; /*0x624ee3*/
    if ( v32 ) /*0x624ee7*/
    {
      while ( v32->field_0 != v8 ) /*0x624ef9*/
      {
        v36 = v32; /*0x624efb*/
        aP1b = *(IUnknown **)&v32->__pad_1D8[44]; /*0x624f07*/
        if ( !aP1b ) /*0x624f0b*/
          goto LABEL_41; /*0x624f0b*/
        v7 = v32; /*0x624eef*/
        v32 = *(IUnknown **)&v32->__pad_1D8[44]; /*0x624ef3*/
      }
      v11 = aP2 == (IUnknown *)&v32->field_4; /*0x624f19*/
      v35 = aP2->field_34; /*0x624f1e*/
      Blockb = *(void **)aP2->__pad_28; /*0x624f21*/
      v41 = *(CCINIClass **)aP2->__pad_3C; /*0x624f28*/
      if ( !v11 ) /*0x624f2c*/
      {
        qmemcpy(aP2, &v32->field_4, 0x200u); /*0x624f37*/
        aP2->field_34 = v35; /*0x624f3d*/
        *(_DWORD *)aP2->__pad_28 = Blockb; /*0x624f40*/
        *(_DWORD *)aP2->__pad_3C = v41; /*0x624f47*/
        GadgetClass::SetTooltip((void **)aP2, *(CCINIClass **)&v32->__pad_28[4]); /*0x624f50*/
        SymbolTable::Rebuild(aP2, (int **)aP1b->field_38); /*0x624f62*/
        v7 = v36; /*0x624f67*/
        v32 = aP1b; /*0x624f6b*/
      }
      *(_DWORD *)&v7->__pad_1D8[44] = *(_DWORD *)&v32->__pad_1D8[44]; /*0x624f75*/
      --*(this + 1); /*0x624f81*/
      if ( v32 ) /*0x624f84*/
      {
        Dialog::CleanupTree((int)&v32->field_4); /*0x624f89*/
        __3_YAXPAX_Z(v32); /*0x624f8f*/
      }
      v33 = 1; /*0x624f97*/
    }
LABEL_41:
    if ( *(float *)&v39 <= *((double *)this + 4) ) /*0x624fa5*/
      HashTable::Rebuild2(this); /*0x624fa9*/
    return v33; /*0x624fb0*/
  }
}
}
} // namespace gamemd

// 0x671EA0
namespace gamemd {
int Dialog::ReadMultiplayerDialogSettings()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ReadMultiplayerDialogSettings(RulesClass *this)
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

  result = INIClass::BinarySearchSection(v37, (unsigned __int8 *)MEMORY[0x83079C]); /*0x671eb0*/
  if ( result ) /*0x671ebc*/
  {
    *((_DWORD *)this + 1312) = INIClass::ReadInt_Overwrite(MEMORY[0x83079C], MEMORY[0x83D0A4], *((_DWORD *)this + 1312)); /*0x671edc*/
    IntOverwriteINIClass = INIClass::ReadInt_Overwrite(MEMORY[0x83079C], MEMORY[0x81DA20], *((_DWORD *)this + 1313)); /*0x671ef7*/
    v4 = *((_DWORD *)this + 1314); /*0x671efc*/
    *((_DWORD *)this + 1313) = IntOverwriteINIClass; /*0x671f02*/
    v5 = INIClass::ReadInt_Overwrite(MEMORY[0x83079C], MEMORY[0x83D098], v4); /*0x671f16*/
    v6 = *((_DWORD *)this + 1315); /*0x671f1b*/
    *((_DWORD *)this + 1314) = v5; /*0x671f21*/
    *((_DWORD *)this + 1315) = INIClass::ReadInt_Overwrite(MEMORY[0x83079C], MEMORY[0x83D088], v6); /*0x671f3b*/
    v7 = INIClass::ReadInt_Overwrite(MEMORY[0x83079C], MEMORY[0x83D078], *((_DWORD *)this + 1316)); /*0x671f56*/
    v8 = *((_DWORD *)this + 1317); /*0x671f5b*/
    *((_DWORD *)this + 1316) = v7; /*0x671f61*/
    v9 = INIClass::ReadInt_Overwrite(MEMORY[0x83079C], MEMORY[0x83D06C], v8); /*0x671f75*/
    v10 = *((_DWORD *)this + 1318); /*0x671f7a*/
    *((_DWORD *)this + 1317) = v9; /*0x671f80*/
    *((_DWORD *)this + 1318) = INIClass::ReadInt_Overwrite(MEMORY[0x83079C], MEMORY[0x83D05C], v10); /*0x671f9a*/
    v11 = INIClass::ReadInt_Overwrite(MEMORY[0x83079C], aTechlevel, *((_DWORD *)this + 1319)); /*0x671fb5*/
    v12 = *((_DWORD *)this + 1320); /*0x671fba*/
    *((_DWORD *)this + 1319) = v11; /*0x671fc0*/
    v13 = INIClass::ReadInt_Overwrite(MEMORY[0x83079C], MEMORY[0x8332E8], v12); /*0x671fd4*/
    v14 = *((_DWORD *)this + 1321); /*0x671fd9*/
    *((_DWORD *)this + 1320) = v13; /*0x671fdf*/
    *((_DWORD *)this + 1321) = INIClass::ReadInt_Overwrite(MEMORY[0x83079C], MEMORY[0x83D04C], v14); /*0x671ff9*/
    v15 = INIClass::ReadInt_Overwrite(MEMORY[0x83079C], MEMORY[0x83D040], *((_DWORD *)this + 1322)); /*0x672014*/
    v16 = *((_BYTE *)this + 5292); /*0x672019*/
    *((_DWORD *)this + 1322) = v15; /*0x67201f*/
    BoolOverwriteINIClass = INIClass::ReadBool_Overwrite(MEMORY[0x83079C], MEMORY[0x83D02C], v16); /*0x672033*/
    v18 = *((_BYTE *)this + 5293); /*0x672038*/
    *((_BYTE *)this + 5292) = BoolOverwriteINIClass; /*0x67203e*/
    *((_BYTE *)this + 5293) = INIClass::ReadBool_Overwrite(MEMORY[0x83079C], MEMORY[0x83D020], v18); /*0x672058*/
    v19 = INIClass::ReadBool_Overwrite(MEMORY[0x83079C], MEMORY[0x83D018], *((_BYTE *)this + 5294)); /*0x672073*/
    v20 = *((_BYTE *)this + 5295); /*0x672078*/
    *((_BYTE *)this + 5294) = v19; /*0x67207e*/
    v21 = INIClass::ReadBool_Overwrite(MEMORY[0x83079C], MEMORY[0x83D010], v20); /*0x672092*/
    v22 = *((_BYTE *)this + 5296); /*0x672097*/
    *((_BYTE *)this + 5295) = v21; /*0x67209d*/
    *((_BYTE *)this + 5296) = INIClass::ReadBool_Overwrite(MEMORY[0x83079C], MEMORY[0x83D000], v22); /*0x6720b7*/
    v23 = INIClass::ReadBool_Overwrite(MEMORY[0x83079C], MEMORY[0x83CFF8], *((_BYTE *)this + 5297)); /*0x6720d2*/
    v24 = *((_BYTE *)this + 5298); /*0x6720d7*/
    *((_BYTE *)this + 5297) = v23; /*0x6720dd*/
    v25 = INIClass::ReadBool_Overwrite(MEMORY[0x83079C], MEMORY[0x83CFE8], v24); /*0x6720f1*/
    v26 = *((_BYTE *)this + 5299); /*0x6720f6*/
    *((_BYTE *)this + 5298) = v25; /*0x6720fc*/
    *((_BYTE *)this + 5299) = INIClass::ReadBool_Overwrite(MEMORY[0x83079C], MEMORY[0x83CFD8], v26); /*0x672116*/
    v27 = INIClass::ReadBool_Overwrite(MEMORY[0x83079C], MEMORY[0x83CFC8], *((_BYTE *)this + 5300)); /*0x672131*/
    v28 = *((_BYTE *)this + 5301); /*0x672136*/
    *((_BYTE *)this + 5300) = v27; /*0x67213c*/
    v29 = INIClass::ReadBool_Overwrite(MEMORY[0x83079C], MEMORY[0x8308AC], v28); /*0x672150*/
    v30 = *((_BYTE *)this + 5307); /*0x672155*/
    *((_BYTE *)this + 5301) = v29; /*0x67215b*/
    *((_BYTE *)this + 5307) = INIClass::ReadBool_Overwrite(MEMORY[0x83079C], MEMORY[0x83CFB4], v30); /*0x672175*/
    v31 = INIClass::ReadBool_Overwrite(MEMORY[0x83079C], MEMORY[0x83CFA8], *((_BYTE *)this + 5302)); /*0x672190*/
    v32 = *((_BYTE *)this + 5305); /*0x672195*/
    *((_BYTE *)this + 5302) = v31; /*0x67219b*/
    v33 = INIClass::ReadBool_Overwrite(MEMORY[0x83079C], MEMORY[0x83CF94], v32); /*0x6721af*/
    v34 = *((_BYTE *)this + 5306); /*0x6721b4*/
    *((_BYTE *)this + 5305) = v33; /*0x6721ba*/
    *((_BYTE *)this + 5306) = INIClass::ReadBool_Overwrite(MEMORY[0x83079C], MEMORY[0x83CF84], v34); /*0x6721d4*/
    v35 = INIClass::ReadBool_Overwrite(MEMORY[0x83079C], MEMORY[0x83CF78], *((_BYTE *)this + 5303)); /*0x6721ef*/
    v36 = *((_BYTE *)this + 5304); /*0x6721f4*/
    *((_BYTE *)this + 5303) = v35; /*0x6721fa*/
    result = INIClass::ReadBool_Overwrite(MEMORY[0x83079C], MEMORY[0x83CF68], v36); /*0x67220e*/
    *((_BYTE *)this + 5304) = result; /*0x672213*/
    LOBYTE(result) = 1; /*0x67221a*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x672221*/
  }
  return result; /*0x672219*/
}
}
} // namespace gamemd

// 0x775940
namespace gamemd {
int Dialog::FindByHandle()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Dialog_FindByHandle(void *this)
{
  int v1; // eax
  void **i; // edx

  v1 = g_DialogTrackingList - 1; /*0x775945*/
  if ( g_DialogTrackingList - 1 < 0 ) /*0x775948*/
    return 0; /*0x77595d*/
  for ( i = (void **)(8 * v1 + 12004652); this != *i; i -= 2 ) /*0x77594a*/
  {
    if ( --v1 < 0 ) /*0x77595b*/
      return 0; /*0x77595b*/
  }
  return a0[2 * v1]; /*0x77595f*/
}
}
} // namespace gamemd

// 0x775B10
namespace gamemd {
HWND Dialog::GetCurrent()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND Dialog_GetCurrent()
{
  return dword_B72F44; /*0x775b15*/
}
}
} // namespace gamemd

// 0x775B20
namespace gamemd {
int Dialog::GetCurrentType()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int Dialog_GetCurrentType()
{
  return dword_B72F48; /*0x775b25*/
}
}
} // namespace gamemd

// 0x775BA0
namespace gamemd {
BOOL Dialog::GetField()
{
{
    EnumChildWindows(this, (WNDENUMPROC)DialogClass::Reposition, 1);
    return DialogClass::Reposition((SkirmishDialog *)this, 0);
}
}
} // namespace gamemd

// 0x4E4EC0
namespace gamemd {
int Dialog::SideIDToIndex()
{
{
    int v2;
    if ( this == (void *)1699 )
    return 0;
    if ( this == (void *)1700 )
    return 1;
    if ( this == (void *)1701 )
    return 2;
    if ( this == (void *)1702 )
    return 3;
    if ( this == (void *)1703 )
    return 4;
    if ( this == (void *)1704 )
    return 5;
    if ( this == (void *)1706 )
    return 6;
    v2 = -(this != (void *)1707);
    LOBYTE(v2) = v2 & 0xF8;
    return v2 + 7;
}
}
} // namespace gamemd

// 0x4E59A0
namespace gamemd {
int Dialog::OptionIDToIndex()
{
{
    int v2;
    if ( this == (void *)1901 )
    return 0;
    if ( this == (void *)1902 )
    return 1;
    if ( this == (void *)1903 )
    return 2;
    if ( this == (void *)1904 )
    return 3;
    if ( this == (void *)1905 )
    return 4;
    if ( this == (void *)1906 )
    return 5;
    if ( this == (void *)1907 )
    return 6;
    v2 = -(this != (void *)1908);
    LOBYTE(v2) = v2 & 0xF8;
    return v2 + 7;
}
}
} // namespace gamemd

// 0x5E26C0
namespace gamemd {
int Dialog::FindGameUI()
{
{
    int result;
    result = Dialog::FindByHandle((void *)0xC2);
    if ( !result )
  {
    result = Dialog::FindByHandle((void *)0xC9);
    if ( !result )
    {
    result = Dialog::FindByHandle((void *)0xBC);
    if ( !result )
    return Dialog::FindByHandle((void *)0xBD);
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x5E2700
namespace gamemd {
HWND Dialog::ShowMessage(ObjectClass * aP0, CampaignScore * BufferCount, ObjectClass Format, ... a4)
{
{
    HWND result;
    ObjectClass *Current;
    HWND DlgItem;
    ObjectClass *v5;
    wchar_t Buffer[1024];
    va_list va;
    va_start(va, Format);
    memset(Buffer, 0, sizeof(Buffer));
    vswprintf(Buffer, BufferCount, &Format, (SessionClass *)v5);
    result = Dialog::GetCurrent();
    if ( result )
  {
    Current = (ObjectClass *)Dialog::GetCurrent();
    DlgItem = GetDlgItem((HWND)Current, 1343);
    if ( DlgItem )
    {
    return (HWND)DrawDialogText(aP0, Buffer, DlgItem);
    }
    else
    {
    while ( 1 )
      {
    result = (HWND)Dialog::FindByPtr(Current);
    Current = (ObjectClass *)result;
    if ( !result )
    break;
    DlgItem = GetDlgItem(result, 1343);
    if ( DlgItem )
    return (HWND)DrawDialogText(aP0, Buffer, DlgItem);
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x5E2790
namespace gamemd {
HWND Dialog::ShowStatusText(SessionClass * aP0, CampaignScore * aP1, CampaignScore * aP2)
{
{
    HWND result;
    ObjectClass *Current;
    HWND DlgItem;
    CampaignScore *v5;
    wchar_t Buffer[1024];
    memset(Buffer, 0, sizeof(Buffer));
    vswprintf(Buffer, aP1, (ObjectClass *)&aP2, (SessionClass *)v5);
    result = Dialog::GetCurrent();
    if ( result )
  {
    Current = (ObjectClass *)Dialog::GetCurrent();
    DlgItem = GetDlgItem((HWND)Current, 1461);
    if ( DlgItem )
    {
    return (HWND)DrawDialogText((ObjectClass *)aP0, Buffer, DlgItem);
    }
    else
    {
    while ( 1 )
      {
    result = (HWND)Dialog::FindByPtr(Current);
    Current = (ObjectClass *)result;
    if ( !result )
    break;
    DlgItem = GetDlgItem(result, 1461);
    if ( DlgItem )
    return (HWND)DrawDialogText((ObjectClass *)aP0, Buffer, DlgItem);
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x5E2F60
namespace gamemd {
LRESULT Dialog::ShowPlayerName()
{
{
    HWND DlgItem;
    DlgItem = GetDlgItem(this, 1448);
    return SendMessageA(DlgItem, 0x4B2u, 0, 11055906);
}
}
} // namespace gamemd

// 0x5E9950
namespace gamemd {
int Dialog::MapPlayerIDToIndex()
{
{
    int v2;
    if ( this == (void *)1041 )
    return 0;
    if ( this == (void *)1042 )
    return 1;
    if ( this == (void *)1043 )
    return 2;
    if ( this == (void *)1044 )
    return 3;
    if ( this == (void *)1045 )
    return 4;
    if ( this == (void *)1046 )
    return 5;
    if ( this == (void *)1047 )
    return 6;
    v2 = -(this != (void *)1048);
    LOBYTE(v2) = v2 & 0xF8;
    return v2 + 7;
}
}
} // namespace gamemd

// 0x5F3450
namespace gamemd {
unsigned int Dialog::CheckButtonState()
{
{
    int v0;
    char v2[84];
    v0 = (*(int (__thiscall **)(HWND))(*(int *)(g_ClipboardBuffer) + 12))(g_ClipboardBuffer);
    if ( (*(int (__thiscall **)(HWND, char *, int, char *, int, int, int, int))(*(int *)(g_ClipboardBuffer) + 28))( g_ClipboardBuffer, DataGlobal_832678, 13, v2, 81, 90, 1, -1) == 2 )
    return v0 & 0xFFFFFF7F;
    return v0;
}
}
} // namespace gamemd

// 0x602AE0
namespace gamemd {
BOOL Dialog::IsSpecialTemplate()
{
{
    return this == (void *)293 || this == (void *)231 || this == (void *)278 || this == (void *)194 || this == (void *)201 || this == (void *)285 || this == (void *)284 || this == (void *)276 || this == (void *)700 || this == (void *)275 || this == (void *)265 || this == (void *)271 || this == (void *)279 || this == (void *)230 || this == (void *)243 || this == (void *)244 || this == (void *)270 || this == (void *)274;
}
}
} // namespace gamemd

// 0x60AAA0
namespace gamemd {
BOOL Dialog::EnumAndCleanup()
{
{
    return EnumChildWindows(this, sub_60AA60, 0);
}
}
} // namespace gamemd

// 0x60F320
namespace gamemd {
BOOL Dialog::SubclassEditControl(HWND hWnd, LPARAM a2)
{
{
    LONG WindowLongA;
    HWND Parent;
    DWORD v4;
    HWND Window;
    int *v6;
    LONG v7;
    LONG dwNewLong;
    struct tagRECT Rect;
    struct tagRECT v11;
    CHAR ClassName[128];
    WindowLongA = GetWindowLongA(hWnd, -16);
    SetWindowLongA(hWnd, -21, 0);
    if ( (WindowLongA & 0x10000000) != 0 && (WindowLongA & 0x8000000) == 0 )
  {
    GetClassNameA(hWnd, ClassName, 128);
    if ( !strcmp(ClassName, g_INI_Key_Edit) )
    {
    Parent = GetParent(hWnd);
    ScreenDialogToClient(hWnd, &Rect);
    ScreenDialogToClient(Parent, &v11);
    v4 = 1073742096;
    if ( (WindowLongA & 0x10000) != 0 )
    v4 = 1073807632;
    Window = CreateWindowExA( 0, g_INI_Key_ListBox, 0, v4, Rect.left - v11.left, Rect.top - v11.top, Rect.right - Rect.left, Rect.bottom - Rect.top, Parent, 0, g_hInstance, 0);
    v6 = __2_YAPAXI_Z(8u);
    *v6 = g_INI_Key_NewEdit;
    v6[1] = GetWindowLongA(hWnd, -16);
    SetWindowLongA(Window, -21, (LONG)v6);
    EnableWindow(hWnd, 0);
    ShowWindow(hWnd, 0);
    EnableWindow(Window, 1);
    ShowWindow(Window, 1);
    dwNewLong = GetWindowLongA(hWnd, -12);
    v7 = GetWindowLongA(Window, -12);
    SetWindowLongA(hWnd, -12, v7);
    SetWindowLongA(Window, -12, dwNewLong);
    }
  }
    return 1;
}
}
} // namespace gamemd

// 0x622800
namespace gamemd {
HWND Dialog::Show()
{
{
    ShowWindow(this, 1);
    SetForegroundWindow(this);
    return Timer::PumpMessages((HWND *)g_BinkMoviePlayer);
}
}
} // namespace gamemd

// 0x623120
namespace gamemd {
char Dialog::PumpMessages()
{
{
    MessageLoop();
    if ( !g_GameMode_Current || g_GameMode_Current == 5 || g_NetworkQuitFlag || g_GameFlags_Campaign )
  {
    Event::Dispatch();
  }
    else if ( !(unsigned char)VtableStub::Method_55CBF0() && GameFrameLoop() )
  {
    return 1;
  }
    return 0;
}
}
} // namespace gamemd

// 0x7759B0
namespace gamemd {
int Dialog::FindByPtr()
{
{
    int v1;
    void **i;
    v1 = g_DialogTrackingList - 1;
    if ( g_DialogTrackingList - 1 < 0 )
    return 0;
    for ( i = (void **)(8 * v1 + 12004648); this != *i || v1 <= 0; i -= 2 )
  {
    if ( --v1 < 0 )
    return 0;
  }
    return (int)*(&g_ClipboardBuffer + 2 * v1);
}
}
} // namespace gamemd

// 0x777060
namespace gamemd {
HWND Dialog::RestoreParent()
{
{
    HWND result;
    result = (HWND)GetWindowLongA(this, -8);
    if ( result )
    return (HWND)SetDialogParent(this, result);
    return result;
}
}
} // namespace gamemd

// 0x77D820
namespace gamemd {
char Dialog::UpdateGameUI()
{
{
    HWND GameUI;
    Dialog::PumpMessages();
    GameUI = (HWND)Dialog::FindGameUI();
    if ( GameUI )
    InvalidateRect(GameUI, 0, 1);
    return 0;
}
}
} // namespace gamemd

// 0x799D10
namespace gamemd {
HWND Dialog::CloseAll()
{
{
    HWND result;
    for ( result = Dialog::GetCurrent(); result; result = Dialog::GetCurrent() )
    CloseDialog(result, 0);
    return result;
}
}
} // namespace gamemd
