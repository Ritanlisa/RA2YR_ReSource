// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/SaveGame_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/IStream_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/MSOverlayAnim_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/GameOptions_e4.hpp"
#include "e4/classes/GameState_e4.hpp"
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int Map_Save_681080(...); }  // w16g4 raw call-form
namespace gamemd { int Map_Save_681110(...); }  // w16g4 raw call-form
namespace gamemd { int Map_Save_681130(...); }  // w16g4 raw call-form
namespace gamemd { int Map_Save_681280(...); }  // w16g4 raw call-form
namespace gamemd { int Map_Save_681200(...); }  // w16g4 raw call-form
namespace gamemd { int Map_Save_681240(...); }  // w16g4 raw call-form
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int Map_Save_6812C0(...);  // raw 006812C0: int __thiscall Map_Save_6812C0(TechnoClass *this, int a2)
} // namespace gamemd

// 0x67CEF0
namespace gamemd {
char SaveScenarioClassGame_AdjustMPSaveFileName(LPCCH lpMultiByteStr, wchar_t * Source, int a3)
{
  int v6; // eax
  char v7; // bl
  ComPtr ppstgOpen[4]; // [esp+50h] [ebp-490h] BYREF
  wchar_t v9[506]; // [esp+ECh] [ebp-3F4h] BYREF

  Debug::Log(); /*0x67cf05*/
  *(_DWORD *)ppstgOpen[0].q000 = 0; /*0x67cf1b*/
  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, (LPWSTR)&ppstgOpen[0].q01C, 64); /*0x67cf1f*/
  ComPtr::ReleaseSimple(ppstgOpen); /*0x67cf29*/
  *(_DWORD *)ppstgOpen[0].q000 = 0; /*0x67cf3e*/
  if ( StgCreateDocfile((const WCHAR *)&ppstgOpen[0].q01C, 0x1012u, 0, (IStorage **)ppstgOpen) < 0 ) /*0x67cf4a*/
  {
    ComPtr::ReleaseSimple(ppstgOpen); /*0x67cf50*/
    return 0; /*0x67cf61*/
  }
  GameState::Reset((GameState *)v9); /*0x67cf6b*/
  Map_Save_681080((ObjectClass *)v9, dword_83D560); /*0x67cf7d*/
  Map_Save_6810A0((ObjectClass *)v9, Source); /*0x67cf8a*/
  Map_Save((ObjectClass *)v9, 1); /*0x67cf98*/
  Map_Save_6810D0((ObjectClass *)v9, *((wchar_t **)dword_A83D4C->q034 + 24)); /*0x67cfb1*/
  Map_Save_681110((ObjectClass *)v9, dword_A8B230[375].uniqueId); /*0x67cfca*/
  Map_Save_681130((ObjectClass *)v9, (int)dword_A8B230[130].vfptr3); /*0x67cfe2*/
  Map_Save_6811C0((char *)v9, aSunExe); /*0x67cff3*/
  Map_Save_6812C0((ObjectClass *)v9, *(int *)&dword_A8B238); /*0x67d006*/
  CoFileTimeNow((FILETIME *)&ppstgOpen[0].q014); /*0x67d010*/
  Map_Save_681280((ObjectClass *)v9, &ppstgOpen[0].q014); /*0x67d022*/
  Map_Save_681200((ObjectClass *)v9, &ppstgOpen[0].q014); /*0x67d033*/
  Map_Save_681240((ObjectClass *)v9, &ppstgOpen[0].q014); /*0x67d044*/
  GameOptions::SaveLoad((int)v9, *(int **)ppstgOpen[0].q000); /*0x67d055*/
  ppstgOpen[0].q008 = 0; /*0x67d05a*/
  if ( !*(_DWORD *)ppstgOpen[0].q000 ) /*0x67d064*/
    sub_7DC720(-2147467261); /*0x67d06b*/
  if ( (*(int (__stdcall **)(_DWORD, _UNKNOWN **, int, _DWORD, _DWORD, int *))(**(_DWORD **)ppstgOpen[0].q000 + 12))( /*0x67d08d*/
         *(_DWORD *)ppstgOpen[0].q000,
         &off_83D5A8,
         4114,
         0,
         0,
         &ppstgOpen[0].q008) < 0 )
  {
    if ( ppstgOpen[0].q008 ) /*0x67d095*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].q008 + 8))(ppstgOpen[0].q008); /*0x67d09a*/
    if ( *(_DWORD *)ppstgOpen[0].q000 ) /*0x67d0a3*/
    {
  LABEL_9:
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)ppstgOpen[0].q000 + 8))(*(_DWORD *)ppstgOpen[0].q000); /*0x67d0a9*/
      return 0; /*0x67d0bb*/
    }
    return 0; /*0x67d0a3*/
  }
  ppstgOpen[0].q004 = 0; /*0x67d0c2*/
  Game::readIniSettings((Game *)&ppstgOpen[0].q004); /*0x67d0c6*/
  if ( CoCreateInstance(&stru_7E9540, 0, 7u, &riid, (LPVOID *)&ppstgOpen[0].q010) >= 0 ) /*0x67d0e5*/
  {
    if ( OleRun((LPUNKNOWN)ppstgOpen[0].q010) >= 0 ) /*0x67d0f4*/
      (**(void (__stdcall ***)(int, IID *, int *))ppstgOpen[0].q010)( /*0x67d107*/
        ppstgOpen[0].q010,
        &stru_83D598,
        &ppstgOpen[0].q004);
    (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].q010 + 8))(ppstgOpen[0].q010); /*0x67d110*/
  }
  if ( !ppstgOpen[0].q004 ) /*0x67d119*/
    sub_7DC720(-2147467261); /*0x67d120*/
  if ( (*(int (__stdcall **)(int, int))(*(_DWORD *)ppstgOpen[0].q004 + 12))( /*0x67d136*/
         ppstgOpen[0].q004,
         ppstgOpen[0].q008) < 0 )
  {
    Debug::Log(); /*0x67d13d*/
    if ( ppstgOpen[0].q004 ) /*0x67d14b*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].q004 + 8))(ppstgOpen[0].q004); /*0x67d150*/
    if ( ppstgOpen[0].q008 ) /*0x67d159*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].q008 + 8))(ppstgOpen[0].q008); /*0x67d15e*/
    if ( *(_DWORD *)ppstgOpen[0].q000 ) /*0x67d167*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)ppstgOpen[0].q000 + 8))(*(_DWORD *)ppstgOpen[0].q000); /*0x67d16c*/
    return 0; /*0x67d17b*/
  }
  ppstgOpen[0].q00C = 0; /*0x67d182*/
  if ( ppstgOpen[0].q004 ) /*0x67d188*/
  {
    v6 = Game::validateScenario((Game *)&ppstgOpen[0].q00C, &ppstgOpen[0].q004); /*0x67d193*/
    if ( v6 < 0 && v6 != -2147467262 ) /*0x67d1a1*/
      sub_7DC720(v6); /*0x67d1a4*/
  }
  v7 = SaveGame::Start((SaveGame *)ppstgOpen[0].q00C); /*0x67d1b4*/
  if ( !ppstgOpen[0].q004 ) /*0x67d1bc*/
    sub_7DC720(-2147467261); /*0x67d1c3*/
  if ( (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)ppstgOpen[0].q004 + 16))( /*0x67d1d5*/
         ppstgOpen[0].q004,
         0) < 0 )
  {
    if ( ppstgOpen[0].q00C ) /*0x67d1dd*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].q00C + 8))(ppstgOpen[0].q00C); /*0x67d1e2*/
    if ( ppstgOpen[0].q004 ) /*0x67d1eb*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].q004 + 8))(ppstgOpen[0].q004); /*0x67d1f0*/
    if ( ppstgOpen[0].q008 ) /*0x67d1f9*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].q008 + 8))(ppstgOpen[0].q008); /*0x67d1fe*/
    if ( *(_DWORD *)ppstgOpen[0].q000 ) /*0x67d207*/
      goto LABEL_9; /*0x67d207*/
    return 0; /*0x67d207*/
  }
  if ( !ppstgOpen[0].q008 ) /*0x67d228*/
    sub_7DC720(-2147467261); /*0x67d22f*/
  (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].q008 + 8))(ppstgOpen[0].q008); /*0x67d23b*/
  ppstgOpen[0].q008 = 0; /*0x67d23e*/
  if ( !*(_DWORD *)ppstgOpen[0].q000 ) /*0x67d248*/
    sub_7DC720(-2147467261); /*0x67d24f*/
  if ( (*(int (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)ppstgOpen[0].q000 + 36))( /*0x67d261*/
         *(_DWORD *)ppstgOpen[0].q000,
         0) < 0 )
  {
    if ( ppstgOpen[0].q00C ) /*0x67d269*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].q00C + 8))(ppstgOpen[0].q00C); /*0x67d26e*/
    if ( ppstgOpen[0].q004 ) /*0x67d277*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].q004 + 8))(ppstgOpen[0].q004); /*0x67d27c*/
    if ( ppstgOpen[0].q008 ) /*0x67d285*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].q008 + 8))(ppstgOpen[0].q008); /*0x67d28a*/
    if ( *(_DWORD *)ppstgOpen[0].q000 ) /*0x67d293*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)ppstgOpen[0].q000 + 8))(*(_DWORD *)ppstgOpen[0].q000); /*0x67d298*/
    return 0; /*0x67d2a7*/
  }
  Debug::Log(); /*0x67d2b1*/
  if ( ppstgOpen[0].q00C ) /*0x67d2bf*/
    (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].q00C + 8))(ppstgOpen[0].q00C); /*0x67d2c4*/
  if ( ppstgOpen[0].q004 ) /*0x67d2cd*/
    (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].q004 + 8))(ppstgOpen[0].q004); /*0x67d2d2*/
  if ( ppstgOpen[0].q008 ) /*0x67d2db*/
    (*(void (__stdcall **)(int))(*(_DWORD *)ppstgOpen[0].q008 + 8))(ppstgOpen[0].q008); /*0x67d2e0*/
  if ( *(_DWORD *)ppstgOpen[0].q000 ) /*0x67d2e9*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)ppstgOpen[0].q000 + 8))(*(_DWORD *)ppstgOpen[0].q000); /*0x67d2ee*/
  return v7; /*0x67cf57*/
}
}