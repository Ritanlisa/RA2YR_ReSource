// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"

// 0x4A3370
int DDraw::ReleaseSurfaces()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DDraw::ReleaseSurfaces(int *this)
{
  int v2; // eax
  int result; // eax

  v2 = *(this + 29); /*0x4a3373*/
  if ( v2 ) /*0x4a3378*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2); /*0x4a337d*/
    *(this + 29) = 0; /*0x4a3380*/
  }
  result = *(this + 28); /*0x4a3387*/
  if ( result ) /*0x4a338c*/
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(*(this + 28)); /*0x4a3391*/
    *(this + 28) = 0; /*0x4a3394*/
  }
  return result; /*0x4a339b*/
}
}

// 0x4A3640
void DDraw::Init()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_4A3640(_DWORD *this)
{
  this->q18000 = 0; /*0x4a3640*/
}
}

// 0x4A3E40
int DDraw::CapabilityCheck()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int DDraw_CapabilityCheck()
{
  const char *v0; // eax
  int v2; // [esp+8h] [ebp-44h] BYREF
  int v3; // [esp+Ch] [ebp-40h]
  int v4; // [esp+10h] [ebp-3Ch]
  int v5; // [esp+14h] [ebp-38h]
  _DWORD v6[4]; // [esp+18h] [ebp-34h] BYREF
  int v7[9]; // [esp+28h] [ebp-24h] BYREF

  DSurface::Construct((char *)v7, 64, 64, 0, 0); /*0x4a3e51*/
  Debug::Log(DataGlobal_81FD18); /*0x4a3e5b*/
  g_DDraw_UseHWBlit = 1; /*0x4a3e67*/
  XSurface::Fill(v7, 0); /*0x4a3e6f*/
  v2 = 5; /*0x4a3e82*/
  v3 = 5; /*0x4a3e86*/
  if ( XSurface::GetPixel(v7, &v2) ) /*0x4a3e8a*/
  {
    g_DDraw_UseHWBlit = 0; /*0x4a3e93*/
  }
  else
  {
    XSurface::Fill(v7, 1); /*0x4a3ea1*/
    v2 = 5; /*0x4a3eaf*/
    v3 = 5; /*0x4a3eb3*/
    if ( XSurface::GetPixel(v7, &v2) == 1 ) /*0x4a3ebf*/
    {
      v0 = g_INI_Key_OK; /*0x4a3ed0*/
      if ( g_DDraw_UseHWBlit ) /*0x4a3ed5*/
        goto LABEL_7; /*0x4a3ed5*/
    }
    else
    {
      g_DDraw_UseHWBlit = 0; /*0x4a3ec1*/
    }
  }
  v0 = DataGlobal_81FD0C; /*0x4a3ed7*/
LABEL_7:
  Debug::Log_0(g_Str_Trace__s, v0); /*0x4a3edc*/
  Debug::Log(DataGlobal_81FCE0); /*0x4a3eec*/
  g_DDraw_AllowOverlayBlit = 1; /*0x4a3ef8*/
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
  DSurface::BlitPart(v7, (int)v6, (int)v7, (int)&v2, 0, 0); /*0x4a3f66*/
  v2 = 0; /*0x4a3f74*/
  v3 = 5; /*0x4a3f78*/
  if ( XSurface::GetPixel(v7, &v2) ) /*0x4a3f7c*/
  {
    Debug::Log_0(DataGlobal_81FCD4); /*0x4a3f8a*/
    g_DDraw_AllowOverlayBlit = 0; /*0x4a3f96*/
  }
  else
  {
    Debug::Log_0(DataGlobal_81FCD0); /*0x4a3fac*/
  }
  return DSurface::Destroy(v7); /*0x4a3fa1*/
}
}

// 0x4A4830
int DDraw::WaitForIdle()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int DDraw_WaitForIdle()
{
  int result; // eax

  do /*0x4a4846*/
    result = (*(int (__stdcall **)(int, int))(*(_DWORD *)g_DDraw_Gray127 + 52))(g_DDraw_Gray127, 2); /*0x4a483a*/
  while ( result && result != -2005532222 ); /*0x4a4846*/
  return result; /*0x4a4848*/
}
}

// 0x4C19B0
int DDraw::CleanupSurfaces()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int DDraw_CleanupSurfaces()
{
  void *v0; // esi
  void *v1; // esi
  void *v2; // esi
  void *v3; // esi
  int result; // eax

  v0 = DataGlobal_8A0E10; /*0x4c19b1*/
  if ( DataGlobal_8A0E10 ) /*0x4c19bc*/
  {
    DDraw::Init(DataGlobal_8A0E10); /*0x4c19c0*/
    __3_YAXPAX_Z(v0); /*0x4c19c6*/
    DataGlobal_8A0E10 = 0; /*0x4c19ce*/
  }
  v1 = DataGlobal_8A0E0C; /*0x4c19d4*/
  if ( DataGlobal_8A0E0C ) /*0x4c19dc*/
  {
    DDraw::ReleaseSurfaces(DataGlobal_8A0E0C); /*0x4c19e0*/
    __3_YAXPAX_Z(v1); /*0x4c19e6*/
    DataGlobal_8A0E0C = 0; /*0x4c19ee*/
  }
  v2 = DataGlobal_8A0E08; /*0x4c19f4*/
  if ( DataGlobal_8A0E08 ) /*0x4c19fc*/
  {
    DDraw::ReleaseSurfaces(DataGlobal_8A0E08); /*0x4c1a00*/
    __3_YAXPAX_Z(v2); /*0x4c1a06*/
    DataGlobal_8A0E08 = 0; /*0x4c1a0e*/
  }
  v3 = DataGlobal_8A0E04; /*0x4c1a14*/
  if ( DataGlobal_8A0E04 ) /*0x4c1a1c*/
  {
    DDraw::ReleaseSurfaces(DataGlobal_8A0E04); /*0x4c1a20*/
    __3_YAXPAX_Z(v3); /*0x4c1a26*/
    DataGlobal_8A0E04 = 0; /*0x4c1a2e*/
  }
  if ( DataGlobal_8A0DFC ) /*0x4c1a3b*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)DataGlobal_8A0DFC + 8))(DataGlobal_8A0DFC); /*0x4c1a40*/
    DataGlobal_8A0DFC = 0; /*0x4c1a43*/
  }
  if ( g_DrawColorState ) /*0x4c1a50*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)g_DrawColorState + 8))(g_DrawColorState); /*0x4c1a55*/
    g_DrawColorState = 0; /*0x4c1a58*/
  }
  if ( DataGlobal_8A0DF4 ) /*0x4c1a65*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)DataGlobal_8A0DF4 + 8))(DataGlobal_8A0DF4); /*0x4c1a6a*/
    DataGlobal_8A0DF4 = 0; /*0x4c1a6d*/
  }
  result = DataGlobal_8A0E00; /*0x4c1a73*/
  if ( DataGlobal_8A0E00 ) /*0x4c1a7a*/
  {
    result = (*(int (__stdcall **)(int))(*(_DWORD *)DataGlobal_8A0E00 + 8))(DataGlobal_8A0E00); /*0x4c1a7f*/
    DataGlobal_8A0E00 = 0; /*0x4c1a82*/
  }
  return result; /*0x4c1a88*/
}
}

// 0x5D2530
char DDraw::HandleSuspend()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DDraw_HandleSuspend(_DWORD *this)
{
  int v1; // eax
  int i; // edi
  int v4; // ecx
  int j; // edi
  int v6; // ecx

  LOBYTE(v1) = g_DDraw_Initialized; /*0x5d2530*/
  if ( g_DDraw_Initialized != 1 ) /*0x5d253b*/
  {
    Debug::Log(aMsenginePausin); /*0x5d2546*/
    for ( i = 0; i < *(this + 10); ++i ) /*0x5d2555*/
    {
      v4 = *(_DWORD *)(*(this + 7) + 4 * i); /*0x5d255a*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x5d255f*/
    }
    while ( !g_DDraw_Initialized ) /*0x5d2571*/
    {
      Debug::Log(aMsengineSleepi); /*0x5d257e*/
      Sleep(0x1F4u); /*0x5d258b*/
      MessageLoop(); /*0x5d258d*/
    }
    Debug::Log(aMsengineResumi); /*0x5d25a0*/
    v1 = *(this + 10); /*0x5d25a5*/
    for ( j = 0; j < v1; ++j ) /*0x5d25af*/
    {
      v6 = *(_DWORD *)(*(this + 7) + 4 * j); /*0x5d25b4*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 12))(v6); /*0x5d25b9*/
      v1 = *(this + 10); /*0x5d25bc*/
    }
  }
  return v1; /*0x5d25c4*/
}
}

// 0x4A3DD0
int DDraw::LogError()
{
{
    int v1;
    int result;
    CHAR Text[80];
    if ( this )
  {
    if ( *(int *)&DataGlobal_89E138[8056] )
    {
    return (*(int (**)(void))&DataGlobal_89E138[8056])();
    }
    else
    {
    sprintf(Text, &g_Str_Trace_DDRAW_DLL_Error_code____08X, (INIClass *)this);
    return MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u);
    }
  }
    else if ( v1 )
  {
    return MessageBoxA( g_hWnd, (LPCSTR)&g_Str_Trace_DDRAW_DLL_Error_code____08X.referenceCount, (LPCSTR)&g_Str_Trace_DDRAW_DLL_Error_code____08X.ambientSoundController[4], 0);
  }
    return result;
}
}

// 0x4A4620
char DDraw::CheckCapabilities()
{
{
    int v0;
    HRESULT v1;
    CHAR Text[80];
    int v4[79];
    if ( g_lpDirectDraw7 )
  {
    memset(v4, 0, sizeof(v4));
    v4[0] = 316;
    v1 = g_lpDirectDraw7->lpVtbl->GetCaps(g_lpDirectDraw7, (LPDDCAPS)v4, 0);
    if ( v1 )
    {
    if ( g_DDraw_ErrorCallback )
      {
    g_DDraw_ErrorCallback(v1);
      }
    else
      {
    sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v1);
    MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u);
      }
    LOBYTE(v0) = 0;
    }
    else
    {
    v0 = (v4[1] & 0x40) != 0;
    if ( SLOBYTE(v4[1]) < 0 )
    LOBYTE(v0) = v0 | 2;
    if ( (v4[1] & 0x10000) != 0 )
    LOBYTE(v0) = v0 | 4;
    if ( (v4[1] & 0x8000000) != 0 )
    LOBYTE(v0) = v0 | 8;
    if ( (v4[1] & 0x4000000) != 0 )
    LOBYTE(v0) = v0 | 0x10;
    if ( (v4[1] & 0x2000000) != 0 )
    LOBYTE(v0) = v0 | 0x20;
    if ( (v4[1] & 0x200) != 0 )
    LOBYTE(v0) = v0 | 0x40;
    }
  }
    else
  {
    LOBYTE(v0) = 0;
  }
    return v0;
}
}

// 0x4BBC90
int DDraw::GetStatus()
{
return g_DDraw_PixelFormat;
}
