// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/DDraw_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/XSurface_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "core/ddraw_init.hpp"
#include "core/ddraw_init.hpp"
#include "core/ddraw_init.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CursorPositionCommandClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"

// 0x4A3370
namespace gamemd {  // G42.18 ns repair
int DDraw::ReleaseSurfaces()
{

  int v2; // eax
  int result; // eax

  v2 = *((unsigned int *)this + 29); /*0x4a3373*/
  if ( v2 ) /*0x4a3378*/
  {
    (*(void (**)(int))(*(unsigned int *)v2 + 8))(v2); /*0x4a337d*/
    *((unsigned int *)this + 29) = 0; /*0x4a3380*/
  }
  result = *((unsigned int *)this + 28); /*0x4a3387*/
  if ( result ) /*0x4a338c*/
  {
    result = (*(int (**)(unsigned int))(*(unsigned int *)result + 8))(*((unsigned int *)this + 28)); /*0x4a3391*/
    *((unsigned int *)this + 28) = 0; /*0x4a3394*/
  }
  return result; /*0x4a339b*/

}
}  // G42.18 ns repair
} // namespace gamemd
// 0x4A3640
namespace gamemd {
void DDraw::Init(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{

  *((unsigned int *)this + 24576) = 0; /*0x4a3640*/

}
} // namespace gamemd
// 0x4A3E40
namespace gamemd {
int DDraw::CapabilityCheck()
{

  const char *v0; // eax
  int v2; // [esp+8h] [ebp-44h] BYREF
  int v3; // [esp+Ch] [ebp-40h]
  int v4; // [esp+10h] [ebp-3Ch]
  int v5; // [esp+14h] [ebp-38h]
  unsigned int v6[4]; // [esp+18h] [ebp-34h] BYREF
  int v7[9]; // [esp+28h] [ebp-24h] BYREF

  DSurface::Construct((char *)v7, 64, 64, 0, 0); /*0x4a3e51*/
  Debug::Log(aCheckingHardwa); /*0x4a3e5b*/
  byte_8205D4 = 1; /*0x4a3e67*/
  XSurface::Fill(v7, 0); /*0x4a3e6f*/
  v2 = 5; /*0x4a3e82*/
  v3 = 5; /*0x4a3e86*/
  if ( XSurface::GetPixel(v7, &v2) ) /*0x4a3e8a*/
  {
    byte_8205D4 = 0; /*0x4a3e93*/
  }
  else
  {
    XSurface::Fill(v7, 1); /*0x4a3ea1*/
    v2 = 5; /*0x4a3eaf*/
    v3 = 5; /*0x4a3eb3*/
    if ( XSurface::GetPixel(v7, &v2) == 1 ) /*0x4a3ebf*/
    {
      v0 = (const char *)(g_INI_Key_OK);
      if ( byte_8205D4 ) /*0x4a3ed5*/
        goto LABEL_7; /*0x4a3ed5*/
    }
    else
    {
      byte_8205D4 = 0; /*0x4a3ec1*/
    }
  }
  v0 = aFailed_1; /*0x4a3ed7*/
LABEL_7:
  Debug::Log_0((void *)("%s\n"),(void *)(v0)); /*0x4a3edc*/
  Debug::Log(aCheckingOverla); /*0x4a3eec*/
  byte_8205D5 = 1; /*0x4a3ef8*/
  XSurface::Fill(v7, 0); /*0x4a3f00*/
  v2 = 0; /*0x4a3f13*/
  v3 = 0; /*0x4a3f17*/
  XSurface::SetPixel(v7, &v2, 255); /*0x4a3f1b*/
  v5 = 63; /*0x4a3f29*/
  v6[3] = 63; /*0x4a3f2d*/
  v2 = 0; /*0x4a3f42*/
  v3 = 0; /*0x4a3f46*/
  v4 = 64; /*0x4a3f4a*/
  v6[0] = 0; /*0x4a3f52*/
  v6[1] = 1; /*0x4a3f56*/
  v6[2] = 64; /*0x4a3f5e*/
  ((DSurface *)(v7))->BlitPart((int)v6, (int)v7, (int)&v2, 0, 0); /*0x4a3f66*/
  v2 = 0; /*0x4a3f74*/
  v3 = 5; /*0x4a3f78*/
  if ( XSurface::GetPixel(v7, &v2) ) /*0x4a3f7c*/
  {
    Debug::Log_0(aFailed_2); /*0x4a3f8a*/
    byte_8205D5 = 0; /*0x4a3f96*/
  }
  else
  {
    Debug::Log_0(aOk_1); /*0x4a3fac*/
  }
  return (int)(((DSurface *)(v7))->Destroy()); /*0x4a3fa1*/

}
} // namespace gamemd
// 0x4A4830
namespace gamemd {
int DDraw::WaitForIdle(void *a1)
{

  int result; // eax

  do /*0x4a4846*/
    result = (*(int ((int)(**))(int, int))(*(unsigned int *)g_DDraw_PrimarySurface + 52))(g_DDraw_PrimarySurface, 2); /*0x4a483a*/
  while ( result && result != -2005532222 ); /*0x4a4846*/
  return result; /*0x4a4848*/

}
} // namespace gamemd
// 0x4C19B0
namespace gamemd {
int DDraw::CleanupSurfaces()
{

  StructTable *v1; // esi
  DDraw *v2; // esi
  DDraw *v3; // esi
  AudioStream *v4; // esi
  int result; // eax

  v1 = (gamemd::StructTable *)(dword_8A0E10);
  if ( dword_8A0E10 ) /*0x4c19bc*/
  {
    DDraw::Init((DDraw *)dword_8A0E10); /*0x4c19c0*/
    __3_YAXPAX_Z(v1); /*0x4c19c6*/
    dword_8A0E10 = 0; /*0x4c19ce*/
  }
  v2 = (gamemd::DDraw *)(dword_8A0E0C);
  if ( dword_8A0E0C ) /*0x4c19dc*/
  {
    ((DDraw *)(dword_8A0E0C))->ReleaseSurfaces(); /*0x4c19e0*/
    __3_YAXPAX_Z(v2); /*0x4c19e6*/
    dword_8A0E0C = 0; /*0x4c19ee*/
  }
  v3 = (gamemd::DDraw *)(dword_8A0E08);
  if ( dword_8A0E08 ) /*0x4c19fc*/
  {
    ((DDraw *)(dword_8A0E08))->ReleaseSurfaces(); /*0x4c1a00*/
    __3_YAXPAX_Z(v3); /*0x4c1a06*/
    dword_8A0E08 = 0; /*0x4c1a0e*/
  }
  v4 = (gamemd::AudioStream *)(dword_8A0E04);
  if ( dword_8A0E04 ) /*0x4c1a1c*/
  {
    ((DDraw *)((DDraw *)dword_8A0E04))->ReleaseSurfaces(); /*0x4c1a20*/
    __3_YAXPAX_Z(v4); /*0x4c1a26*/
    dword_8A0E04 = 0; /*0x4c1a2e*/
  }
  if ( HIDWORD(g_DrawColorState) ) /*0x4c1a3b*/
  {
    (*(void (**)(unsigned int))(*(unsigned int *)HIDWORD(g_DrawColorState) + 8))(HIDWORD(g_DrawColorState)); /*0x4c1a40*/
    HIDWORD(g_DrawColorState) = 0; /*0x4c1a43*/
  }
  if ( (unsigned int)g_DrawColorState ) /*0x4c1a50*/
  {
    (*(void (**)(unsigned int))(*(unsigned int *)g_DrawColorState + 8))(g_DrawColorState); /*0x4c1a55*/
    LODWORD(g_DrawColorState) = 0; /*0x4c1a58*/
  }
  if ( dword_8A0DF4 ) /*0x4c1a65*/
  {
    (*(void (**)(int))(*(unsigned int *)dword_8A0DF4 + 8))(dword_8A0DF4); /*0x4c1a6a*/
    dword_8A0DF4 = 0; /*0x4c1a6d*/
  }
  result = dword_8A0E00; /*0x4c1a73*/
  if ( dword_8A0E00 ) /*0x4c1a7a*/
  {
    result = (*(int (**)(int))(*(unsigned int *)dword_8A0E00 + 8))(dword_8A0E00); /*0x4c1a7f*/
    dword_8A0E00 = 0; /*0x4c1a82*/
  }
  return result; /*0x4c1a88*/

}
} // namespace gamemd
// 0x5D2530
namespace gamemd {
int DDraw::HandleSuspend(void *a1)
{

  int result; // eax
  int i; // edi
  int v4; // ecx
  int j; // edi
  int v6; // ecx

  LOBYTE(result) = *((unsigned int *)((char *)&stru_A8EB00 + 412)); /*0x5d2530*/
  if ( *((unsigned int *)((char *)&stru_A8EB00 + 412)) != 1 ) /*0x5d253b*/
  {
    ((Debug *)this)->Log(); /*0x5d2546*/
    for ( i = 0; i < *((unsigned int *)this + 10); ++i ) /*0x5d2555*/
    {
      v4 = *(unsigned int *)(*((unsigned int *)this + 7) + 4 * i); /*0x5d255a*/
      (*(void (**)(int))(*(unsigned int *)v4 + 8))(v4); /*0x5d255f*/
    }
    while ( !((unsigned int *)&stru_A8EB00)[412] ) /*0x5d2571*/
    {
      ((Debug *)this)->Log(); /*0x5d257e*/
      Sleep(0x1F4u); /*0x5d258b*/
      MessageLoop(); /*0x5d258d*/
    }
    ((Debug *)this)->Log(); /*0x5d25a0*/
    result = *((unsigned int *)this + 10); /*0x5d25a5*/
    for ( j = 0; j < result; ++j ) /*0x5d25af*/
    {
      v6 = *(unsigned int *)(*((unsigned int *)this + 7) + 4 * j); /*0x5d25b4*/
      (*(void (**)(int))(*(unsigned int *)v6 + 12))(v6); /*0x5d25b9*/
      result = *((unsigned int *)this + 10); /*0x5d25bc*/
    }
  }
  return result; /*0x5d25c4*/

}
} // namespace gamemd
// 0x4A3DD0
namespace gamemd {
void DDraw::LogError(void * a1, void * a2)
{

  int result; // eax
  CHAR Text[80]; // [esp+0h] [ebp-50h] BYREF

  if ( uType ) /*0x4a3dd5*/
  {
    if ( g_DDraw_ErrorCallback ) /*0x4a3dfd*/
    {
      return g_DDraw_ErrorCallback(uType); /*0x4a3dff*/
    }
    else
    {
      sprintf(Text, "DDRAW.DLL Error code = %08X", uType); /*0x4a3e10*/
      return MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u, unsigned int a2); /*0x4a3e2a*/
    }
  }
  else if ( a2 ) /*0x4a3dd9*/
  {
    return MessageBoxA((HWND)(g_hWnd),(LPCSTR)(::Text), Caption, 0); /*0x4a3dec*/
  }
  return result; /*0x4a3df2*/

}
} // namespace gamemd
// 0x4A4620
namespace gamemd {
char DDraw::CheckCapabilities()
{

  int v0; // eax
  HRESULT v1; // eax
  CHAR Text[80]; // [esp+Ch] [ebp-18Ch] BYREF
  unsigned int v4[79]; // [esp+5Ch] [ebp-13Ch] BYREF

  if ( g_lpDirectDraw7 ) /*0x4a462e*/
  {
    memset(v4, 0, sizeof(v4)); /*0x4a4645*/
    v4[0] = 316; /*0x4a464b*/
    v1 = g_lpDirectDraw7->lpVtbl->GetCaps(g_lpDirectDraw7, (LPDDCAPS)v4, 0); /*0x4a4659*/
    if ( v1 ) /*0x4a465f*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4669*/
      {
        g_DDraw_ErrorCallback(v1); /*0x4a466d*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v1); /*0x4a4683*/
        MessageBoxA((HWND)(g_hWnd), Text,(LPCSTR)(g_Str_Direct_X), 0x30u); /*0x4a469e*/
      }
      LOBYTE(v0) = 0; /*0x4a466f*/
    }
    else
    {
      v0 = (v4[1] & 0x40) != 0; /*0x4a46b8*/
      if ( SLOBYTE(v4[1]) < 0 ) /*0x4a46c0*/
        LOBYTE(v0) = v0 | 2; /*0x4a46c2*/
      if ( (v4[1] & 0x10000) != 0 ) /*0x4a46ca*/
        LOBYTE(v0) = v0 | 4; /*0x4a46cc*/
      if ( (v4[1] & 0x8000000) != 0 ) /*0x4a46d4*/
        LOBYTE(v0) = v0 | 8; /*0x4a46d6*/
      if ( (v4[1] & 0x4000000) != 0 ) /*0x4a46de*/
        LOBYTE(v0) = v0 | 0x10; /*0x4a46e0*/
      if ( (v4[1] & 0x2000000) != 0 ) /*0x4a46e8*/
        LOBYTE(v0) = v0 | 0x20; /*0x4a46ea*/
      if ( (v4[1] & 0x200) != 0 ) /*0x4a46ef*/
        LOBYTE(v0) = v0 | 0x40; /*0x4a46f1*/
    }
  }
  else
  {
    LOBYTE(v0) = 0; /*0x4a4630*/
  }
  return v0; /*0x4a4632*/

}
} // namespace gamemd
// 0x4BBC90
namespace gamemd {
int DDraw_GetStatus()
{

  return dword_8205D0; /*0x4bbc95*/

}
} // namespace gamemd