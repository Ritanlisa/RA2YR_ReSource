// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ComStreamClass_e4.hpp"
#include "e4/classes/Com_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/GameLoop_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Struct_e4.hpp"

// 0x7A3D90
namespace gamemd {
int ComStreamClass::Write(void * a1, void * a2, void * a3, void * a4, void * a5)
{
  HWND v5; // esi
  HWND DlgItem; // ebx
  HWND v7; // ebx
  char *v8; // eax
  HWND v9; // eax
  void (__stdcall *v10)(HWND, BOOL); // ebx
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND Current; // eax
  HWND v18; // eax
  bool v20; // [esp+Ah] [ebp-281Ah]
  char v21; // [esp+Bh] [ebp-2819h]
  LPARAM Channel; // [esp+Ch] [ebp-2818h] BYREF
  void* v23;
  int v24; // [esp+14h] [ebp-2810h]
  WPARAM wParam; // [esp+18h] [ebp-280Ch]
  int v26; // [esp+1Ch] [ebp-2808h] BYREF
  char v27; // [esp+20h] [ebp-2804h]
  wchar_t v28[5120]; // [esp+24h] [ebp-2800h] BYREF

  Debug::Log(); /*0x7a3da1*/
  dword_B77DF0 = a2; /*0x7a3dba*/
  if ( a2 ) /*0x7a3dbf*/
    goto LABEL_16; /*0x7a3dbf*/
  String::Assign((char **)&Channel, lParam); /*0x7a3dd3*/
  LoadPlayerProfile(&v23, (const char **)&Channel); /*0x7a3de0*/
  DeleteAndZero((void **)&Channel); /*0x7a3de9*/
  Channel = 0; /*0x7a3df2*/
  v26 = 0; /*0x7a3df6*/
  v27 = 0; /*0x7a3dfa*/
  ReadRegistryOptionsWOL(&v26); /*0x7a3dfe*/
  if ( Flag::IsNot2(&v26) ) /*0x7a3e07*/
  {
    Channel = FindChannelWOL(lParam, (int)a5, 1u, *(unsigned int *)(v24 + 16)); /*0x7a3e2d*/
    SaveConfigWOL((int)g_GameMode_Current); /*0x7a3e31*/
  }
  v21 = 1; /*0x7a3e3b*/
  v20 = 0; /*0x7a3e40*/
  v5 = (HWND)Dialog::FindByHandle((void *)0x10F); /*0x7a3e4a*/
  if ( v5 /*0x7a3e7a*/
    || (v5 = (HWND)Dialog::FindByHandle((void *)0x11D), v20 = v5 != 0, v5)
    || (v21 = 0, (v5 = (HWND, void * a1, void * a2, void * a3, void * a4, void * a5)Dialog::FindByHandle((void *)0x114)) != 0) )
  {
    DlgItem = GetDlgItem(v5, 1576); /*0x7a3e88*/
    if ( v20 ) /*0x7a3e93*/
    {
      SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)lParam); /*0x7a3ea1*/
    }
    else
    {
      wParam = SendMessageA(DlgItem, 0x4BCu, 0, (LPARAM)lParam); /*0x7a3eb5*/
      SendMessageA(DlgItem, 0x151u, wParam, Channel); /*0x7a3ec1*/
      SendMessageA(DlgItem, 0x14Eu, wParam, 0, unsigned int a5); /*0x7a3ed0*/
    }
    if ( v21 ) /*0x7a3ed8*/
    {
      String::Assign_Alt((void **)&g_WebBrowser, lParam); /*0x7a3eeb*/
      String::Assign_Alt((void **)&g_WebBrowserConfig, a5); /*0x7a3efd*/
      v7 = GetDlgItem(v5, 1836); /*0x7a3f0f*/
      v8 = String::GetOrEmpty_Alt(&g_WebBrowserConfig); /*0x7a3f11*/
      SendMessageA(v7, 0x4B4u, 0, (LPARAM)v8); /*0x7a3f1f*/
      IDA_LOBYTE(dword_84A238) = 1; /*0x7a3f29*/
      v9 = GetDlgItem(v5, 1337); /*0x7a3f30*/
      v10 = (void (__stdcall *)(HWND, BOOL))EnableWindow; /*0x7a3f32*/
      EnableWindow(v9, 1); /*0x7a3f39*/
      if ( !v20 ) /*0x7a3f41*/
      {
        v11 = GetDlgItem(v5, 1837); /*0x7a3f4f*/
        EnableWindow(v11, 0); /*0x7a3f52*/
        v12 = GetDlgItem(v5, 1837); /*0x7a3f63*/
        SendMessageA(v12, 0xF1u, 1u, 0); /*0x7a3f66*/
  LABEL_14:
        v15 = GetDlgItem(v5, 1771); /*0x7a3f99*/
        v10(v15, 1); /*0x7a3fa4*/
        String::Assign((char **)&Channel, lParam); /*0x7a3fb2*/
        FillPersonaInfoWOL(v24, v5, (char **)&Channel, (wchar_t **)1); /*0x7a3fc3*/
        DeleteAndZero((void **)&Channel); /*0x7a3fcc*/
      }
    }
    else
    {
      v13 = GetDlgItem(v5, 1791); /*0x7a3f79*/
      SendMessageA(v13, 0xF1u, 0, 0); /*0x7a3f7c*/
      v14 = GetDlgItem(v5, 1791); /*0x7a3f86*/
      v10 = (void (__stdcall *)(HWND, BOOL))EnableWindow; /*0x7a3f88*/
      EnableWindow(v14, 1); /*0x7a3f8f*/
      if (!v20, unsigned int a3) /*0x7a3f97*/
        goto LABEL_14; /*0x7a3f97*/
    }
  }
  ComPtr::Release(&v23); /*0x7a3fdd*/
  LABEL_16:
  if ( a3 ) /*0x7a3fed*/
  {
    BulkCharToWide(v28, a3, -1); /*0x7a3ff5*/
    ShowDialogConfirm(v28, 0, (int)GameLoop::Thunk, 0); /*0x7a4007*/
  }
  else
  {
    ShowDialogConfirm(aUnknownStatus, 0, (int)GameLoop::Thunk, 0); /*0x7a4017*/
  }
  v16 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a4021*/
  if ( v16 ) /*0x7a4028*/
  {
    g_WOL_ChannelList &= ~0x100u; /*0x7a4036*/
    if ( !g_WOL_ChannelList ) /*0x7a403c*/
      CloseDialog(v16, 0); /*0x7a4042*/
  }
  Current = Dialog::GetCurrent(); /*0x7a4047*/
  v18 = GetDlgItem(Current, 1344); /*0x7a4052*/
  if ( v18 ) /*0x7a4058*/
    SetFocus(v18); /*0x7a405b*/
  return 0; /*0x7a4054*/
}
} // namespace gamemd
// 0x7AC820
namespace gamemd {
int ComStreamClass::Release()
{
  LONG v1; // ebx

  v1 = InterlockedDecrement((volatile LONG *)Block + 1); /*0x7ac834*/
  if ( !v1 && Block ) /*0x7ac83c*/
  {
    *(unsigned int *)Block = &off_7F766C; /*0x7ac843*/
    *((unsigned int *)Block + 1) = 1; /*0x7ac849*/
    InterlockedDecrement(&Addend); /*0x7ac84f*/
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8)); /*0x7ac855*/
    RA2_OPDEL(Block, unsigned int a3, unsigned int a2, unsigned int a1); /*0x7ac85c*/
  }
  return v1; /*0x7ac864*/
}
} // namespace gamemd
// 0x7AC870
namespace gamemd {
int ComStreamClass::QueryInterface(void * a1, void * a2, void * a3)
{
  void **v3; // esi
  int result; // eax
  unsigned int *v5; // eax
  BOOL v6; // ebp
  int (__stdcall *v7)(char *, unsigned int *, char **, void *); // eax
  void *v8; // eax
  char *v9; // esi

  v3 = &off_7F7650; /*0x7ac87a*/
  if ( !a3 ) /*0x7ac87f*/
    return -2147467261; /*0x7ac88a*/
  *a3 = 0; /*0x7ac891*/
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 ) /*0x7ac8b3*/
  {
    (*(void (__stdcall **, unsigned int a2)(char *))(*(unsigned int *)a1 + 4))(a1); /*0x7ac8c6*/
    *a3 = a1; /*0x7ac8c9*/
    return 0; /*0x7ac8d1*/
  }
  while ( 1 ) /*0x7ac8dd*/
  {
    v5 = (unsigned int *)(*v3);
    v6 = *v3 == 0; /*0x7ac8e6*/
    if ( !*v3 || *v5 == *a2 && v5[1] == a2[1] && v5[2] == a2[2] && v5[3] == a2[3] ) /*0x7ac910*/
      break; /*0x7ac910*/
  LABEL_17:
    v8 = v3[5]; /*0x7ac933*/
    v3 += 3; /*0x7ac936*/
    if (!v8, unsigned int a1, unsigned int a2, unsigned int a3) /*0x7ac93b*/
      return -2147467262; /*0x7ac93d*/
  }
  v7 = (int (__stdcall *)(char *, unsigned int *, char **, void *))v3[2]; /*0x7ac912*/
  if ( v7 != (int (__stdcall *)(char *, unsigned int *, char **, void *))1 ) /*0x7ac918*/
  {
    result = v7(a1, a2, a3, v3[1]); /*0x7ac925*/
    if (!result || !v6 && result < 0, unsigned int a1, unsigned int a3) /*0x7ac931*/
      return result; /*0x7ac931*/
    goto LABEL_17; /*0x7ac931*/
  }
  v9 = (char *)v3[1] + (unsigned int)a1; /*0x7ac950*/
  (*(void (__stdcall **)(char *))(*(unsigned int *)v9 + 4))(v9); /*0x7ac955*/
  *a3 = v9; /*0x7ac958*/
  return 0; /*0x7ac881*/
}
} // namespace gamemd
// 0x7AE0E0
namespace gamemd {
AbstractClass * * ComStreamClass::readData()
{
  int v2; // esi
  unsigned int *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  if ( *((unsigned char *)v5 + 20) != 1 ) /*0x7ae0e8*/
  {
    v2 = v5->vtable3; /*0x7ae0f0*/
    v3 = (unsigned int *)*v5; /*0x7ae0f3*/
    v4 = v5->vtable4 + 1; /*0x7ae0fc*/
    v5->vtable3 = 2 * v2; /*0x7ae0fd*/
    v3 = v3; /*0x7ae100*/
    v5->vtable4 = v4; /*0x7ae108*/
    v5 = operator new(8 * v2); /*0x7ae113*/
    v6 = 4 * v5->vtable3; /*0x7ae118*/
    *v5 = v5; /*0x7ae11f*/
    memset(v5, 0, v6); /*0x7ae124*/
    if ( v2 > 0 ) /*0x7ae12f*/
    {
      v3 = v3; /*0x7ae131*/
      v2 = v2; /*0x7ae133*/
      do /*0x7ae167*/
      {
        v9 = *v3; /*0x7ae135*/
        if ( *v3 ) /*0x7ae135*/
        {
          do /*0x7ae161*/
          {
            v10 = ((int (__thiscall *)(int))v5->nextArrayIndex)(v9) & ((1 << v5->vtable4) - 1); /*0x7ae14b*/
            v11 = *(unsigned int *)(*v5 + 4 * v10); /*0x7ae14f*/
            *(unsigned int *)(*v5 + 4 * v10) = v9; /*0x7ae155*/
            v12 = *(unsigned int *)(v9 + 72); /*0x7ae157*/
            *(unsigned int *)(v9 + 72) = v11; /*0x7ae15a*/
            v9 = v12; /*0x7ae15d*/
          }
          while ( v12 ); /*0x7ae161*/
        }
        ++v3; /*0x7ae163*/
        --v2; /*0x7ae166*/
      }
      while ( v2 ); /*0x7ae167*/
      v3 = v3; /*0x7ae169*/
    }
    RA2_OPDEL(v3); /*0x7ae16e*/
  }
}
} // namespace gamemd
// 0x7AEF50
namespace gamemd {
void ComStreamClass::flushStream()
{
  unsigned int v2; // esi
  int *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  v2 = v5->vtable3; /*0x7aef55*/
  if ( v2 > v5->u32_30 && *((unsigned char *)v5 + 20) != 1 ) /*0x7aef67*/
  {
    v3 = (int *)*v5; /*0x7aef70*/
    v4 = v5->vtable4; /*0x7aef73*/
    v13 = (int *)*v5; /*0x7aef76*/
    v5->vtable3 = v2 >> 1; /*0x7aef7c*/
    v5->vtable4 = v4 - 1; /*0x7aef84*/
    v5 = operator new(4 * (v2 >> 1)); /*0x7aef8f*/
    v6 = 4 * v5->vtable3; /*0x7aef94*/
    *v5 = v5; /*0x7aef9b*/
    memset(v5, 0, v6); /*0x7aefa0*/
    if ( (int)v2 > 0 ) /*0x7aefab*/
    {
      v3 = v3; /*0x7aefad*/
      v2 = v2; /*0x7aefaf*/
      do /*0x7aefe3*/
      {
        v9 = *v3; /*0x7aefb1*/
        if ( *v3 ) /*0x7aefb1*/
        {
          do /*0x7aefdd*/
          {
            v10 = ((int (__thiscall *)(int))v5->nextArrayIndex)(v9) & ((1 << v5->vtable4) - 1); /*0x7aefc7*/
            v11 = *(unsigned int *)(*v5 + 4 * v10); /*0x7aefcb*/
            *(unsigned int *)(*v5 + 4 * v10) = v9; /*0x7aefd1*/
            v12 = *(unsigned int *)(v9 + 72); /*0x7aefd3*/
            *(unsigned int *)(v9 + 72) = v11; /*0x7aefd6*/
            v9 = v12; /*0x7aefd9*/
          }
          while ( v12 ); /*0x7aefdd*/
        }
        ++v3; /*0x7aefdf*/
        --v2; /*0x7aefe2*/
      }
      while ( v2 ); /*0x7aefe3*/
      v3 = v13; /*0x7aefe5*/
    }
    RA2_OPDEL(v3); /*0x7aefea*/
  }
}
} // namespace gamemd
// 0x7B0220
namespace gamemd {
unsigned int * ComStreamClass::seekToPosition()
{
  unsigned int *v2; // eax
  unsigned int *v3; // eax
  unsigned int v5[2]; // [esp+4h] [ebp-10h] BYREF
  unsigned int v6[2]; // [esp+Ch] [ebp-8h] BYREF

  ComPtr::Set(&dword_B77F58, this->q004); /*0x7b022f*/
  v2 = Audio_Create_76BE90(v6, (int)this); /*0x7b023a*/
  v3 = Audio_Create(v5, (const char **)&g_WebBrowser, (int)v2); /*0x7b0249*/
  ComPtr::Set(&dword_B77F68, v3[1]); /*0x7b0257*/
  ComPtr::Release(v5); /*0x7b0268*/
  return ComPtr::Release(v6); /*0x7b027e*/
}
} // namespace gamemd
// 0x7B02A0
namespace gamemd {
unsigned int * ComStreamClass::getStreamSize()
{
  unsigned int *v2; // eax
  unsigned int *v3; // eax
  unsigned int v5[2]; // [esp+4h] [ebp-10h] BYREF
  unsigned int v6[2]; // [esp+Ch] [ebp-8h] BYREF

  ComPtr::Set(&dword_B77F70, this->q004); /*0x7b02af*/
  v2 = Audio_Create_76BE90(v6, (int)this); /*0x7b02ba*/
  v3 = Audio_Create(v5, (const char **)&g_WebBrowser, (int)v2); /*0x7b02c9*/
  ComPtr::Set(&dword_B77F78, v3[1]); /*0x7b02d7*/
  ComPtr::Release(v5); /*0x7b02e8*/
  return ComPtr::Release(v6, unsigned int a2, unsigned int a3, unsigned int a4); /*0x7b02fe*/
}
} // namespace gamemd
// 0x7A4070
namespace gamemd {
int ComStreamClass::Seek(void * a1, void * a2, void * a3, void * a4)
{
  HWND v4; // eax
  HWND Current; // eax
  HWND DlgItem; // eax

  Debug::Log(); /*0x7a4075*/
  dword_B77DF4 = a2; /*0x7a4083*/
  if ( !a2 ) /*0x7a4088*/
  {
    dword_B77E60 = a3; /*0x7a4092*/
    dword_B77E64 = a4; /*0x7a4097*/
  }
  v4 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a40a2*/
  if ( v4 ) /*0x7a40a9*/
  {
    g_WOL_ChannelList &= ~0x100u; /*0x7a40b7*/
    if ( !g_WOL_ChannelList ) /*0x7a40bd*/
      CloseDialog(v4, 0); /*0x7a40c3*/
  }
  Current = Dialog::GetCurrent(); /*0x7a40c8*/
  DlgItem = GetDlgItem(Current, 1344); /*0x7a40d3*/
  if ( DlgItem ) /*0x7a40db*/
    SetFocus(DlgItem, unsigned int a2); /*0x7a40de*/
  return 0; /*0x7a40e6*/
}
} // namespace gamemd
// 0x7A40F0
namespace gamemd {
int ComStreamClass::ddtor()
{
  if ( g_NetworkLobby_Init && *(unsigned int *)dword_B77780 ) /*0x7a4100*/
  {
    if ( !a2 && a3 < 0x3E8 ) /*0x7a4114*/
    {
      ++*(unsigned int *)dword_B77CE0; /*0x7a4123*/
      return 0; /*0x7a412a*/
    }
    return 0; /*0x7a4114*/
  }
  if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 ) /*0x7a413f*/
  {
    if ( g_WOL_ProcessIdle ) /*0x7a4188*/
      DisplayRankingsWOL(0); /*0x7a418e*/
    return 0; /*0x7a418e*/
  }
  Debug::Log(); /*0x7a4146*/
  if ( ++dword_B736F4 < g_WOL_LoginPool ) /*0x7a4161*/
    return 0; /*0x7a4193*/
  if ( g_WOL_IdleHandler == 4 || g_WOL_IdleHandler == 5 ) /*0x7a4170*/
    UpdateWOLLobbyPings(); /*0x7a4172*/
  ProcessPingRequestsWOL(); /*0x7a4177*/
  return 0; /*0x7a412a*/
}
} // namespace gamemd
// 0x7AC800
namespace gamemd {
LONG ComStreamClass::AddRef()
{
  return InterlockedIncrement((volatile LONG *)(a1 + 4)); /*0x7ac80e*/
}
} // namespace gamemd
// 0x7AED20
namespace gamemd {
void ** ComStreamClass::writeData(char a2)
{
  DeleteAndZero(); /*0x7aed23*/
  if ( (a2 & 1) != 0 ) /*0x7aed2d*/
    RA2_OPDEL(); /*0x7aed30*/
  return this; /*0x7aed3a*/
}
} // namespace gamemd