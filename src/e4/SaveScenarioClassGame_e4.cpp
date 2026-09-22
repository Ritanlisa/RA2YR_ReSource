// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/SaveGame_e4.hpp"

// 0x67CEF0
namespace gamemd {
void SaveScenarioClassGame_AdjustMPSaveFileName(LPCCH lpMultiByteStr, wchar_t * Source, int a3)
{
{
  IStorage *ppstgOpen; // [esp+50h] [ebp-490h] BYREF
  LPSTREAM pStm; // [esp+5Ch] [ebp-484h] BYREF
  LPVOID ppv; // [esp+60h] [ebp-480h] BYREF
  FILETIME FileTime; // [esp+64h] [ebp-47Ch] BYREF
  WCHAR WideCharStr[64]; // [esp+6Ch] [ebp-474h] BYREF
  wchar_t v15[506]; // [esp+ECh] [ebp-3F4h] BYREF

  Debug::Log(); /*0x67cf05*/
  ppstgOpen = 0; /*0x67cf1b*/
  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, WideCharStr, 64); /*0x67cf1f*/
  ComPtr::ReleaseSimple((int *)&ppstgOpen); /*0x67cf29*/
  ppstgOpen = 0; /*0x67cf3e*/
  if ( StgCreateDocfile(WideCharStr, 0x1012u, 0, &ppstgOpen) < 0 ) /*0x67cf4a*/
  {
    ComPtr::ReleaseSimple((int *)&ppstgOpen); /*0x67cf50*/
    return 0; /*0x67cf61*/
  }
  GameState::Reset(v15); /*0x67cf6b*/
  Map_Save_681080(v15, DataGlobal_83D560); /*0x67cf7d*/
  Map_Save_6810A0(v15, Source); /*0x67cf8a*/
  Map_Save(v15, 1); /*0x67cf98*/
  Map_Save_6810D0(v15, *(wchar_t **)(*((_DWORD *)HouseClass_Player + 13) + 96)); /*0x67cfb1*/
  Map_Save_681110(v15, *((_DWORD *)g_ScenarioClass_Instance + 3379)); /*0x67cfca*/
  Map_Save_681130(v15, *((_DWORD *)g_ScenarioClass_Instance + 1173)); /*0x67cfe2*/
  Map_Save_6811C0((char *)v15, DataGlobal_83D5BC); /*0x67cff3*/
  Map_Save_6812C0(v15, g_GameMode_Current[0]); /*0x67d006*/
  CoFileTimeNow(&FileTime); /*0x67d010*/
  Map_Save_681280(v15, &FileTime); /*0x67d022*/
  Map_Save_681200(v15, &FileTime); /*0x67d033*/
  Map_Save_681240(v15, &FileTime); /*0x67d044*/
  GameOptions::SaveLoad((int)v15, (int *)ppstgOpen); /*0x67d055*/
  int v10 = 0; /*0x67d05a*/
  if ( !ppstgOpen ) /*0x67d064*/
    WinAPI::Wrapper(-2147467261); /*0x67d06b*/
  if ( ppstgOpen->lpVtbl->CreateStream(ppstgOpen, (const OLECHAR *)&DataGlobal_83D5A8, 4114, 0, 0, (IStream **)&v10) < 0 ) /*0x67d08d*/
  {
    if ( v10 ) /*0x67d095*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x67d09a*/
    if ( ppstgOpen ) /*0x67d0a3*/
    {
LABEL_9:
      ppstgOpen->lpVtbl->Release(ppstgOpen); /*0x67d0a9*/
      return 0; /*0x67d0bb*/
    }
    return 0; /*0x67d0a3*/
  }
  int v9 = 0; /*0x67d0c2*/
  Game::readIniSettings(&v9); /*0x67d0c6*/
  if ( CoCreateInstance(&stru_7E9540, 0, 7u, &riid, &ppv) >= 0 ) /*0x67d0e5*/
  {
    if ( OleRun((LPUNKNOWN)ppv) >= 0 ) /*0x67d0f4*/
      (**(void (__stdcall ***)(LPVOID, IID *, int *))ppv)(ppv, &DataGlobal_83D598, &v9); /*0x67d107*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x67d110*/
  }
  if ( !v9 ) /*0x67d119*/
    WinAPI::Wrapper(-2147467261); /*0x67d120*/
  if ( (*(int (__stdcall **)(int, int))(*(_DWORD *)v9 + 12))(v9, v10) < 0 ) /*0x67d136*/
  {
    Debug::Log(); /*0x67d13d*/
    if ( v9 ) /*0x67d14b*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x67d150*/
    if ( v10 ) /*0x67d159*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x67d15e*/
    if ( ppstgOpen ) /*0x67d167*/
      ppstgOpen->lpVtbl->Release(ppstgOpen); /*0x67d16c*/
    return 0; /*0x67d17b*/
  }
  pStm = 0; /*0x67d182*/
  if ( v9 ) /*0x67d188*/
  {
    int v6 = Game::validateScenario(&pStm, &v9); /*0x67d193*/
    if ( v6 < 0 && v6 != -2147467262 ) /*0x67d1a1*/
      WinAPI::Wrapper(v6); /*0x67d1a4*/
  }
  char v7 = SaveGame::Start(pStm); /*0x67d1b4*/
  if ( !v9 ) /*0x67d1bc*/
    WinAPI::Wrapper(-2147467261); /*0x67d1c3*/
  if ( (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v9 + 16))(v9, 0) < 0 ) /*0x67d1d5*/
  {
    if ( pStm ) /*0x67d1dd*/
      (*(void (__stdcall **)(LPSTREAM))(*(_DWORD *)pStm->__pad_0 + 8))(pStm); /*0x67d1e2*/
    if ( v9 ) /*0x67d1eb*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x67d1f0*/
    if ( v10 ) /*0x67d1f9*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x67d1fe*/
    if ( ppstgOpen ) /*0x67d207*/
      goto LABEL_9; /*0x67d207*/
    return 0; /*0x67d207*/
  }
  if ( !v10 ) /*0x67d228*/
    WinAPI::Wrapper(-2147467261); /*0x67d22f*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x67d23b*/
  v10 = 0; /*0x67d23e*/
  if ( !ppstgOpen ) /*0x67d248*/
    WinAPI::Wrapper(-2147467261); /*0x67d24f*/
  if ( ppstgOpen->lpVtbl->Commit(ppstgOpen, 0) < 0 ) /*0x67d261*/
  {
    if ( pStm ) /*0x67d269*/
      (*(void (__stdcall **)(LPSTREAM))(*(_DWORD *)pStm->__pad_0 + 8))(pStm); /*0x67d26e*/
    if ( v9 ) /*0x67d277*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x67d27c*/
    if ( v10 ) /*0x67d285*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x67d28a*/
    if ( ppstgOpen ) /*0x67d293*/
      ppstgOpen->lpVtbl->Release(ppstgOpen); /*0x67d298*/
    return 0; /*0x67d2a7*/
  }
  Debug::Log(); /*0x67d2b1*/
  if ( pStm ) /*0x67d2bf*/
    (*(void (__stdcall **)(LPSTREAM))(*(_DWORD *)pStm->__pad_0 + 8))(pStm); /*0x67d2c4*/
  if ( v9 ) /*0x67d2cd*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x67d2d2*/
  if ( v10 ) /*0x67d2db*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x67d2e0*/
  if ( ppstgOpen ) /*0x67d2e9*/
    ppstgOpen->lpVtbl->Release(ppstgOpen); /*0x67d2ee*/
  return v7; /*0x67cf57*/
}
} // namespace gamemd
