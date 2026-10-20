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
#include "e4/classes/TechnoClass_e4.hpp"
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int Map_Save_681080(int p0); }  // x4:signals@0x681080
namespace gamemd { int Map_Save_681110(int p0); }  // x4:signals@0x681110
namespace gamemd { int Map_Save_681130(int p0); }  // x4:signals@0x681130
namespace gamemd { int Map_Save_681280(int* p0); }  // x4:signals@0x681280
namespace gamemd { int Map_Save_681200(int* p0); }  // x4:signals@0x681200
namespace gamemd { int Map_Save_681240(int* p0); }  // x4:signals@0x681240
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int Map_Save_6812C0(int p0);  // x4:signals@0x6812c0
} // namespace gamemd

// 0x67CEF0
namespace gamemd {  // G42.18 ns repair
char SaveScenarioClassGame_AdjustMPSaveFileName(LPCCH lpMultiByteStr, wchar_t * Source, int a3)
{
  int v6; // eax
  char v7; // bl
  ComPtr ppstgOpen[4]; // [esp+50h] [ebp-490h] BYREF
  wchar_t v9[506]; // [esp+ECh] [ebp-3F4h] BYREF

  Debug::Log(); /*0x67cf05*/
  *&ppstgOpen->__pad_0.__pad_0 = 0; /*0x67cf1b*/
  MultiByteToWideChar(0, 0, lpMultiByteStr, -1, (LPWSTR)&ppstgOpen[0].ComPtr_field_0x1C, 64); /*0x67cf1f*/
  ComPtr::ReleaseSimple(ppstgOpen); /*0x67cf29*/
  *&ppstgOpen->__pad_0.__pad_0 = 0; /*0x67cf3e*/
  if ( StgCreateDocfile((const WCHAR *)&ppstgOpen[0].ComPtr_field_0x1C, 0x1012u, 0, (IStorage **)ppstgOpen) < 0 ) /*0x67cf4a*/
  {
    ComPtr::ReleaseSimple(ppstgOpen); /*0x67cf50*/
    return 0; /*0x67cf61*/
  }
  ((GameState *)((GameState *)v9))->Reset(); /*0x67cf6b*/
  ((ObjectClass *)(ObjectClass *)v9)->Map_Save(dword_83D560); /*0x67cf7d*/
  Map_Save_6810A0((ObjectClass *)v9, Source); /*0x67cf8a*/
  Map_Save((ObjectClass *)v9, 1); /*0x67cf98*/
  Map_Save_6810D0((ObjectClass *)v9, *((wchar_t **)dword_A83D4C->relatedTagsCapacity + 24)); /*0x67cfb1*/
  Map_Save_681110((ObjectClass *)v9, ((unsigned int *)(dword_A8B230))[375].uniqueId); /*0x67cfca*/
  Map_Save_681130((ObjectClass *)v9, (int)((unsigned int *)(dword_A8B230))[130].ptr_C); /*0x67cfe2*/
  Map_Save_6811C0((char *)v9,(char *)(aSunExe)); /*0x67cff3*/
  ((TechnoClass *)(ObjectClass *)v9)->Map_Save_6812C0(*(int *)&dword_A8B238); /*0x67d006*/
  CoFileTimeNow((FILETIME *)&ppstgOpen[0].ComPtr_field_0x14); /*0x67d010*/
  ((TechnoClass *)(ObjectClass *)v9)->Map_Save_681280(&ppstgOpen[0].ComPtr_field_0x14); /*0x67d022*/
  ((TechnoClass *)(ObjectClass *)v9)->Map_Save_681200(&ppstgOpen[0].ComPtr_field_0x14); /*0x67d033*/
  ((TechnoClass *)(ObjectClass *)v9)->Map_Save_681240(&ppstgOpen[0].ComPtr_field_0x14); /*0x67d044*/
  GameOptions::SaveLoad((int *)((int)v9), *&ppstgOpen->__pad_0.__pad_0); /*0x67d055*/
  ppstgOpen[0].ComPtr_field_0x08 = 0; /*0x67d05a*/
  if ( !*&ppstgOpen->__pad_0.__pad_0 ) /*0x67d064*/
    sub_7DC720(-2147467261); /*0x67d06b*/
  if ( (*(int (__stdcall **)(unsigned int, void **, int, unsigned int, unsigned int, int *))(**&ppstgOpen->__pad_0.__pad_0 + 12))( /*0x67d08d*/
         *&ppstgOpen->__pad_0.__pad_0,
         &off_83D5A8,
         4114,
         0,
         0,
         &ppstgOpen[0].ComPtr_field_0x08) < 0 )
  {
    if ( ppstgOpen[0].ComPtr_field_0x08 ) /*0x67d095*/
      (*(void (__stdcall **)(int))(*&ppstgOpen->__pad_0.ComPtr_field_0x08 + 8))(ppstgOpen[0].ComPtr_field_0x08); /*0x67d09a*/
    if ( *&ppstgOpen->__pad_0.__pad_0 ) /*0x67d0a3*/
    {
      LABEL_9:
      (*(void (__stdcall **)(unsigned int))(**&ppstgOpen->__pad_0.__pad_0 + 8))(*&ppstgOpen->__pad_0.__pad_0); /*0x67d0a9*/
      return 0; /*0x67d0bb*/
    }
    return 0; /*0x67d0a3*/
  }
  ppstgOpen[0].ComPtr_field_0x04 = 0; /*0x67d0c2*/
  ((Game *)&ppstgOpen[0].ComPtr_field_0x04)->readIniSettings(); /*0x67d0c6*/
  if ( CoCreateInstance((const IID &)(&stru_7E9540), 0, 7u, &riid, (LPVOID *)&ppstgOpen[0].ComPtr_field_0x10) >= 0 ) /*0x67d0e5*/
  {
    if ( OleRun((LPUNKNOWN)ppstgOpen[0].ComPtr_field_0x10) >= 0 ) /*0x67d0f4*/
      (**(void (__stdcall ***)(int, IID *, int *))ppstgOpen[0].ComPtr_field_0x10)( /*0x67d107*/
        ppstgOpen[0].ComPtr_field_0x10,
        &stru_83D598,
        &ppstgOpen[0].ComPtr_field_0x04);
    (*(void (__stdcall **)(int))(*&ppstgOpen->__pad_0.ComPtr_field_0x10 + 8))(ppstgOpen[0].ComPtr_field_0x10); /*0x67d110*/
  }
  if ( !ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d119*/
    sub_7DC720(-2147467261); /*0x67d120*/
  if ( (*(int (__stdcall **)(int, int))(*&ppstgOpen->__pad_0.ComPtr_field_0x04 + 12))( /*0x67d136*/
         ppstgOpen[0].ComPtr_field_0x04,
         ppstgOpen[0].ComPtr_field_0x08) < 0 )
  {
    Debug::Log(); /*0x67d13d*/
    if ( ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d14b*/
      (*(void (__stdcall **)(int))(*&ppstgOpen->__pad_0.ComPtr_field_0x04 + 8))(ppstgOpen[0].ComPtr_field_0x04); /*0x67d150*/
    if ( ppstgOpen[0].ComPtr_field_0x08 ) /*0x67d159*/
      (*(void (__stdcall **)(int))(*&ppstgOpen->__pad_0.ComPtr_field_0x08 + 8))(ppstgOpen[0].ComPtr_field_0x08); /*0x67d15e*/
    if ( *&ppstgOpen->__pad_0.__pad_0 ) /*0x67d167*/
      (*(void (__stdcall **)(unsigned int))(**&ppstgOpen->__pad_0.__pad_0 + 8))(*&ppstgOpen->__pad_0.__pad_0); /*0x67d16c*/
    return 0; /*0x67d17b*/
  }
  ppstgOpen[0].ComPtr_field_0x0C = 0; /*0x67d182*/
  if ( ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d188*/
  {
    v6 = Game::validateScenario((Game *)&ppstgOpen[0].ComPtr_field_0x0C, &ppstgOpen[0].ComPtr_field_0x04); /*0x67d193*/
    if ( v6 < 0 && v6 != -2147467262 ) /*0x67d1a1*/
      sub_7DC720(v6); /*0x67d1a4*/
  }
  v7 = SaveGame::Start(ppstgOpen->__pad_000.ComPtr_field_0x0C); /*0x67d1b4*/
  if ( !ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d1bc*/
    sub_7DC720(-2147467261); /*0x67d1c3*/
  if ( (*(int (__stdcall **)(int, unsigned int))(*&ppstgOpen->__pad_0.ComPtr_field_0x04 + 16))( /*0x67d1d5*/
         ppstgOpen[0].ComPtr_field_0x04,
         0) < 0 )
  {
    if ( ppstgOpen[0].ComPtr_field_0x0C ) /*0x67d1dd*/
      (*(void (__stdcall **)(int))(*&ppstgOpen->__pad_0.ComPtr_field_0x0C + 8))(ppstgOpen[0].ComPtr_field_0x0C); /*0x67d1e2*/
    if ( ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d1eb*/
      (*(void (__stdcall **)(int))(*&ppstgOpen->__pad_0.ComPtr_field_0x04 + 8))(ppstgOpen[0].ComPtr_field_0x04); /*0x67d1f0*/
    if ( ppstgOpen[0].ComPtr_field_0x08 ) /*0x67d1f9*/
      (*(void (__stdcall **)(int))(*&ppstgOpen->__pad_0.ComPtr_field_0x08 + 8))(ppstgOpen[0].ComPtr_field_0x08); /*0x67d1fe*/
    if ( *&ppstgOpen->__pad_0.__pad_0 ) /*0x67d207*/
      goto LABEL_9; /*0x67d207*/
    return 0; /*0x67d207*/
  }
  if ( !ppstgOpen[0].ComPtr_field_0x08 ) /*0x67d228*/
    sub_7DC720(-2147467261); /*0x67d22f*/
  (*(void (__stdcall **)(int))(*&ppstgOpen->__pad_0.ComPtr_field_0x08 + 8))(ppstgOpen[0].ComPtr_field_0x08); /*0x67d23b*/
  ppstgOpen[0].ComPtr_field_0x08 = 0; /*0x67d23e*/
  if ( !*&ppstgOpen->__pad_0.__pad_0 ) /*0x67d248*/
    sub_7DC720(-2147467261); /*0x67d24f*/
  if ( (*(int (__stdcall **)(unsigned int, unsigned int))(**&ppstgOpen->__pad_0.__pad_0 + 36))( /*0x67d261*/
         *&ppstgOpen->__pad_0.__pad_0,
         0) < 0 )
  {
    if ( ppstgOpen[0].ComPtr_field_0x0C ) /*0x67d269*/
      (*(void (__stdcall **)(int))(*&ppstgOpen->__pad_0.ComPtr_field_0x0C + 8))(ppstgOpen[0].ComPtr_field_0x0C); /*0x67d26e*/
    if ( ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d277*/
      (*(void (__stdcall **)(int))(*&ppstgOpen->__pad_0.ComPtr_field_0x04 + 8))(ppstgOpen[0].ComPtr_field_0x04); /*0x67d27c*/
    if ( ppstgOpen[0].ComPtr_field_0x08 ) /*0x67d285*/
      (*(void (__stdcall **)(int))(*&ppstgOpen->__pad_0.ComPtr_field_0x08 + 8))(ppstgOpen[0].ComPtr_field_0x08); /*0x67d28a*/
    if ( *&ppstgOpen->__pad_0.__pad_0 ) /*0x67d293*/
      (*(void (__stdcall **)(unsigned int))(**&ppstgOpen->__pad_0.__pad_0 + 8))(*&ppstgOpen->__pad_0.__pad_0); /*0x67d298*/
    return 0; /*0x67d2a7*/
  }
  Debug::Log(); /*0x67d2b1*/
  if ( ppstgOpen[0].ComPtr_field_0x0C ) /*0x67d2bf*/
    (*(void (__stdcall **)(int))(*&ppstgOpen->__pad_0.ComPtr_field_0x0C + 8))(ppstgOpen[0].ComPtr_field_0x0C); /*0x67d2c4*/
  if ( ppstgOpen[0].ComPtr_field_0x04 ) /*0x67d2cd*/
    (*(void (__stdcall **)(int))(*&ppstgOpen->__pad_0.ComPtr_field_0x04 + 8))(ppstgOpen[0].ComPtr_field_0x04); /*0x67d2d2*/
  if ( ppstgOpen[0].ComPtr_field_0x08 ) /*0x67d2db*/
    (*(void (__stdcall **)(int))(*&ppstgOpen->__pad_0.ComPtr_field_0x08 + 8))(ppstgOpen[0].ComPtr_field_0x08); /*0x67d2e0*/
  if ( *&ppstgOpen->__pad_0.__pad_0 ) /*0x67d2e9*/
    (*(void (__stdcall **)(unsigned int))(**&ppstgOpen->__pad_0.__pad_0 + 8))(*&ppstgOpen->__pad_0.__pad_0); /*0x67d2ee*/
  return v7; /*0x67cf57*/
}
}  // G42.18 ns repair