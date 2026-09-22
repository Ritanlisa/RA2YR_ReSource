// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x531CC0
namespace gamemd {
int MainMenu_Screen()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __usercall MainMenu_Screen@<eax>(int a1@<ebx>, int a2@<ebp>)
{
  HWND v2; // esi
  HWND DlgItem; // esi
  int v4; // ecx
  int v5; // eax
  unsigned __int16 v6; // ax
  int v7; // esi
  int v8; // esi
  const char **v9; // edi
  _BYTE v11[2]; // [esp+6h] [ebp-1Eh] BYREF
  LONG dwNewLong; // [esp+8h] [ebp-1Ch] BYREF
  HWND hWnd; // [esp+Ch] [ebp-18h]
  struct _SYSTEMTIME SystemTime; // [esp+10h] [ebp-14h] BYREF

  dwNewLong = 18; /*0x531cc7*/
  SetSoundWarning(-1); /*0x531ccf*/
  v2 = (HWND)CreateDialog(0xE2u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))MainMenu::DlgProc, 0); /*0x531ce5*/
  hWnd = v2; /*0x531ce9*/
  if ( v2 ) /*0x531ced*/
  {
    SetWindowLongA(v2, 8, (LONG)&dwNewLong); /*0x531cfe*/
    SetDialogParent(v2, g_hWnd); /*0x531d0c*/
    Dialog::Show(v2); /*0x531d13*/
    SetFocus(g_hWnd); /*0x531d1f*/
    DlgItem = GetDlgItem(v2, 1818); /*0x531d31*/
    if ( DlgItem ) /*0x531d35*/
    {
      if ( MEMORY[0x8A00A4] > 800 ) /*0x531d41*/
        v4 = (MEMORY[0x8A00A4] - 800) / 2; /*0x531d51*/
      else
        v4 = 0; /*0x531d43*/
      if ( MEMORY[0x8A00A8] > 600 ) /*0x531d5d*/
        v5 = (MEMORY[0x8A00A8] - 600) / 2; /*0x531d6b*/
      else
        v5 = 0; /*0x531d5f*/
      SetWindowPos(DlgItem, 0, v4, v5, -1, -1, 0xDu); /*0x531d78*/
      SendMessageA(DlgItem, 0x4E3u, 1u, 0); /*0x531d8e*/
      if ( MEMORY[0x8A00A4] == 640 ) /*0x531d9a*/
        SendMessageA(DlgItem, 0x4E4u, 0, (LPARAM)aRa2tsS); /*0x531da1*/
      else
        SendMessageA(DlgItem, 0x4E4u, 0, (LPARAM)aRa2tsL); /*0x531db0*/
    }
    do /*0x531f04*/
    {
      if ( (unsigned __int8)Dialog::PumpMessages() ) /*0x531db2*/
        dwNewLong = 7; /*0x531dbb*/
      if ( g_LoadScreenFlag ) /*0x531dca*/
      {
        g_LoadScreenFlag = 0; /*0x531dd0*/
        Screen::Capture(1, 0, a1, a2); /*0x531dd7*/
        Frame::Present(0); /*0x531de6*/
      }
      if ( (unsigned __int16)EventQueue::Process(g_BinkMoviePlayer) ) /*0x531df1*/
      {
        v6 = EventQueue::Read(g_BinkMoviePlayer); /*0x531e05*/
        a1 = v6; /*0x531e0d*/
        if ( (v6 & 0x800) == 0 ) /*0x531e16*/
        {
          a2 = (char)v6; /*0x531e1c*/
          if ( !isalnum((char)v6) || (_BYTE)a1 == 126 ) /*0x531e33*/
          {
            memset(MEMORY[0xA8F7B8], 0, sizeof(MEMORY[0xA8F7B8])); /*0x531f3e*/
          }
          else
          {
            v11[0] = a1; /*0x531e3d*/
            v11[1] = 0; /*0x531e42*/
            Debug::Log_0(v11); /*0x531e47*/
            v7 = strlen(MEMORY[0xA8F7B8]); /*0x531e5e*/
            if ( v7 >= 31 ) /*0x531e63*/
            {
              v7 = 0; /*0x531e65*/
              MEMORY[0xA8F7B8][0] = 0; /*0x531e67*/
            }
            MEMORY[0xA8F7B8][v7] = toupper((char)a1); /*0x531e77*/
            v8 = 0; /*0x531e7d*/
            v9 = (const char **)MEMORY[0x825C2C]; /*0x531e7f*/
            while ( !strstr(MEMORY[0xA8F7B8], *v9) ) /*0x531e96*/
            {
              v9 += 4; /*0x531e98*/
              ++v8; /*0x531e9b*/
              if ( (int)v9 >= (int)off_825C6C ) /*0x531ea2*/
                goto LABEL_27; /*0x531ea2*/
            }
            *(_BYTE *)*(&MEMORY[0x825C28] + 4 * v8) = *(_BYTE *)*(&MEMORY[0x825C28] + 4 * v8) == 0; /*0x531ebf*/
            memset(MEMORY[0xA8F7B8], 0, sizeof(MEMORY[0xA8F7B8])); /*0x531ec8*/
            PlayVocClass(1.0, 0); /*0x531edb*/
            g_LoadScreenFlag = 0; /*0x531ee4*/
            Screen::Capture(1, 0, a1, a2); /*0x531eeb*/
            Frame::Present(0); /*0x531efa*/
          }
        }
      }
LABEL_27:
      ; /*0x531eff*/
    }
    while ( dwNewLong == 18 ); /*0x531f04*/
    Dialog::Destroy(hWnd); /*0x531f0e*/
    GetSystemTime(&SystemTime); /*0x531f18*/
    Random::AdvanceRandomBytes(SystemTime.wMilliseconds); /*0x531f28*/
  }
  else
  {
    dwNewLong = 7; /*0x531f42*/
  }
  SetFocus(g_hWnd); /*0x531f50*/
  return dwNewLong; /*0x531f5a*/
}
}
} // namespace gamemd

// 0x531F60
int MainMenu::DlgProc(HWND hWnd, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall MainMenu_DlgProc(HWND hWnd, int a2, int a3, int a4)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  HWND v6; // esi
  int v7; // eax
  const wchar_t *v8; // eax
  HWND DlgItem; // eax
  int v10; // [esp-4h] [ebp-110h]
  wchar_t lParam[128]; // [esp+Ch] [ebp-100h] BYREF

  result = BaseDialogProc(hWnd, a3, a4); /*0x531f88*/
  if ( !result ) /*0x531f8f*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x531f98*/
    switch ( a2 ) /*0x531fa1*/
    {
      case 15: /*0x531fa1*/
        DlgItem = GetDlgItem(hWnd, 1818); /*0x5320db*/
        SendMessageA(DlgItem, 0x4F0u, 0, 0); /*0x5320eb*/
        break;
      case 273: /*0x531fa1*/
        if ( (unsigned __int16)a3 > 0x683u ) /*0x532033*/
        {
          if ( (unsigned __int16)a3 == 1668 ) /*0x5320a6*/
          {
            *WindowLongA = 2; /*0x5320c2*/
            return 0; /*0x5320d2*/
          }
          if ( (unsigned __int16)a3 == 1670 ) /*0x5320ab*/
          {
            *WindowLongA = 4; /*0x5320ae*/
            return 0; /*0x5320be*/
          }
        }
        else
        {
          switch ( (unsigned __int16)a3 ) /*0x532035*/
          {
            case 0x683u: /*0x532035*/
              *WindowLongA = 1; /*0x53208d*/
              return 0; /*0x53209d*/
            case 0x3EEu: /*0x532035*/
              *WindowLongA = 6; /*0x532079*/
              return 0; /*0x532089*/
            case 0x55Cu: /*0x532035*/
              *WindowLongA = 5; /*0x532065*/
              return 0; /*0x532075*/
            case 0x578u: /*0x532035*/
              *WindowLongA = 3; /*0x532051*/
              return 0; /*0x532061*/
          }
        }
        break;
      case 1175: /*0x531fa1*/
        v6 = GetDlgItem(hWnd, 1821); /*0x531fcc*/
        v7 = GetModuleInternalVersion(&MEMORY[0xA8ECE0]); /*0x531fce*/
        v10 = CharToWideString(v7); /*0x531fda*/
        v8 = (const wchar_t *)GetStringCSF(MEMORY[0x82696C], (int)g_Str_File_Init_CPP, 5975); /*0x531fec*/
        swprintf(lParam, (const size_t)&MEMORY[0x826960], v8, v10); /*0x531ffc*/
        SendMessageA(v6, 0x4B2u, 0, (LPARAM)lParam); /*0x532011*/
        return 0; /*0x532022*/
    }
    return 0; /*0x5320f1*/
  }
  return result; /*0x532017*/
}
}
