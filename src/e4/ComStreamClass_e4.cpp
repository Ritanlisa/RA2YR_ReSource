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
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ToolTipManager_e4.hpp"

// 0x7A3D90
namespace gamemd {
int ComStreamClass::Write(int a1, int a2, int a3, int a4, int a5)
{

  HWND v1; // esi
  HWND DlgItem; // ebx
  CCINIClass *v7; // ebx
  char *v4; // eax
  HWND v5; // eax
  void (*v6)(HWND, BOOL); // ebx
  HWND eax12; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND Current; // eax
  HWND v14; // eax
  bool v16; // [esp+Ah] [ebp-281Ah]
  char v17; // [esp+Bh] [ebp-2819h]
  LPARAM ChannelWOL; // [esp+Ch] [ebp-2818h] BYREF
  rc_ptr_base v19; // [esp+10h] [ebp-2814h] BYREF
  int v20; // [esp+14h] [ebp-2810h]
  WPARAM wParam; // [esp+18h] [ebp-280Ch]
  int v22; // [esp+1Ch] [ebp-2808h] BYREF
  char v23; // [esp+20h] [ebp-2804h]
  wchar_t v24[5120]; // [esp+24h] [ebp-2800h] BYREF
  int v25; // [esp+282Ch] [ebp+8h]
  unsigned __int8 *v26; // [esp+2830h] [ebp+Ch]
  CCINIClass *lParam; // [esp+2834h] [ebp+10h]
  CCINIClass *aP1; // [esp+2838h] [ebp+14h]

  Debug::Log(); /*0x7a3da1*/
  dword_B77DF0 = v25; /*0x7a3dba*/
  if ( v25 ) /*0x7a3dbf*/
    goto LABEL_16; /*0x7a3dbf*/
  String::Assign((char **)&ChannelWOL, lParam->__pad_0); /*0x7a3dd3*/
  LoadPlayerProfile(&v19, (const char **)&ChannelWOL); /*0x7a3de0*/
  DeleteAndZero((void **)&ChannelWOL); /*0x7a3de9*/
  ChannelWOL = 0; /*0x7a3df2*/
  v22 = 0; /*0x7a3df6*/
  v23 = 0; /*0x7a3dfa*/
  ReadRegistryOptionsWOL(&v22); /*0x7a3dfe*/
  if ( Flag::IsNot2(&v22) ) /*0x7a3e07*/
  {
    ChannelWOL = FindChannelWOL(lParam->__pad_0, (int)aP1, 1u, *(unsigned int *)(v20 + 16)); /*0x7a3e2d*/
    SaveConfigWOL((int)&MEMORY[0xA8B238]); /*0x7a3e31*/
  }
  v17 = 1; /*0x7a3e3b*/
  v16 = 0; /*0x7a3e40*/
  v1 = (HWND)Dialog::FindByHandle((void *)0x10F); /*0x7a3e4a*/
  if ( v1 /*0x7a3e7a*/
    || (v1 = (HWND)Dialog::FindByHandle((void *)0x11D), v16 = v1 != 0, v1)
    || (v17 = 0, (v1 = (HWND)Dialog::FindByHandle((void *)0x114)) != 0) )
  {
    DlgItem = GetDlgItem(v1, 1576); /*0x7a3e88*/
    if ( v16 ) /*0x7a3e93*/
    {
      SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)lParam); /*0x7a3ea1*/
    }
    else
    {
      wParam = SendMessageA(DlgItem, 0x4BCu, 0, (LPARAM)lParam); /*0x7a3eb5*/
      SendMessageA(DlgItem, 0x151u, wParam, ChannelWOL); /*0x7a3ec1*/
      SendMessageA(DlgItem, 0x14Eu, wParam, 0); /*0x7a3ed0*/
    }
    if ( v17 ) /*0x7a3ed8*/
    {
      String::Assign_Alt((void **)&g_WebBrowser, lParam); /*0x7a3eeb*/
      String::Assign_Alt((void **)&g_WebBrowserConfig, aP1); /*0x7a3efd*/
      v7 = (CCINIClass *)GetDlgItem(v1, 1836); /*0x7a3f0f*/
      v4 = String::GetOrEmpty_Alt(&g_WebBrowserConfig); /*0x7a3f11*/
      SendMessageA((HWND)v7, 0x4B4u, 0, (LPARAM)v4); /*0x7a3f1f*/
      LOBYTE(dword_84A238) = 1; /*0x7a3f29*/
      v5 = GetDlgItem(v1, 1337); /*0x7a3f30*/
      v6 = (void (*)(HWND, BOOL))EnableWindow; /*0x7a3f32*/
      EnableWindow(v5, 1); /*0x7a3f39*/
      if ( !v16 ) /*0x7a3f41*/
      {
        eax12 = GetDlgItem(v1, 1837); /*0x7a3f4f*/
        EnableWindow(eax12, 0); /*0x7a3f52*/
        v8 = GetDlgItem(v1, 1837); /*0x7a3f63*/
        SendMessageA(v8, 0xF1u, 1u, 0); /*0x7a3f66*/
LABEL_14:
        v11 = GetDlgItem(v1, 1771); /*0x7a3f99*/
        v6(v11, 1); /*0x7a3fa4*/
        String::Assign((char **)&ChannelWOL, lParam->__pad_0); /*0x7a3fb2*/
        FillPersonaInfoWOL(v20, v1, (ObjectClass *)&ChannelWOL, (wchar_t **)1); /*0x7a3fc3*/
        DeleteAndZero((void **)&ChannelWOL); /*0x7a3fcc*/
      }
    }
    else
    {
      v9 = GetDlgItem(v1, 1791); /*0x7a3f79*/
      SendMessageA(v9, 0xF1u, 0, 0); /*0x7a3f7c*/
      v10 = GetDlgItem(v1, 1791); /*0x7a3f86*/
      v6 = (void (*)(HWND, BOOL))EnableWindow; /*0x7a3f88*/
      EnableWindow(v10, 1); /*0x7a3f8f*/
      if ( !v16 ) /*0x7a3f97*/
        goto LABEL_14; /*0x7a3f97*/
    }
  }
  v19.vfptr = &vt_rc_ptr_PlayerProfile; /*0x7a3fd1*/
  ComPtr::Release(&v19); /*0x7a3fdd*/
LABEL_16:
  if ( v26 ) /*0x7a3fed*/
  {
    BulkCharToWide(v24, v26, -1); /*0x7a3ff5*/
    ShowDialogConfirm(v24, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7a4007*/
  }
  else
  {
    ShowDialogConfirm(aUnknownStatus, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7a4017*/
  }
  v12 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a4021*/
  if ( v12 ) /*0x7a4028*/
  {
    g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFEFF); /*0x7a4036*/
    if ( !g_WOL_ChannelList ) /*0x7a403c*/
      CloseDialog(v12, 0); /*0x7a4042*/
  }
  Current = Dialog::GetCurrent(); /*0x7a4047*/
  v14 = GetDlgItem(Current, 1344); /*0x7a4052*/
  if ( v14 ) /*0x7a4058*/
    SetFocus(v14); /*0x7a405b*/
  return 0; /*0x7a4054*/

}
} // namespace gamemd
// 0x7AC820
namespace gamemd {
int ComStreamClass::Release(int a1, int a2, int a3, int a4, int a5)
{

  LONG v1; // ebx
  char *Block; // [esp+14h] [ebp+4h]

  v1 = InterlockedDecrement((volatile LONG *)Block + 1); /*0x7ac834*/
  if ( !v1 && Block ) /*0x7ac83c*/
  {
    *(unsigned int *)Block = &off_7F766C; /*0x7ac843*/
    *((unsigned int *)Block + 1) = 1; /*0x7ac849*/
    InterlockedDecrement(&Addend); /*0x7ac84f*/
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8)); /*0x7ac855*/
    __3_YAXPAX_Z(Block); /*0x7ac85c*/
  }
  return v1; /*0x7ac864*/

}
} // namespace gamemd
// 0x7AC870
namespace gamemd {
int ComStreamClass::QueryInterface(int a1, int a2, int a3, int a4, int a5)
{

  _UNKNOWN **v1; // esi
  int result; // eax
  unsigned int *v3; // eax
  BOOL v4; // ebp
  int (*v5)(char *, unsigned int *, char **, void *); // eax
  void *v6; // eax
  char *v7; // esi
  char *v8; // [esp+14h] [ebp+4h]
  unsigned int *v9; // [esp+18h] [ebp+8h]
  char **v10; // [esp+1Ch] [ebp+Ch]

  v1 = &off_7F7650; /*0x7ac87a*/
  if ( !v10 ) /*0x7ac87f*/
    return -2147467261; /*0x7ac88a*/
  *v10 = 0; /*0x7ac891*/
  if ( !*v9 && !v9[1] && v9[2] == 192 && v9[3] == 1174405120 ) /*0x7ac8b3*/
  {
    (*(void (**)(char *))(*(unsigned int *)v8 + 4))(v8); /*0x7ac8c6*/
    *v10 = v8; /*0x7ac8c9*/
    return 0; /*0x7ac8d1*/
  }
  while ( 1 ) /*0x7ac8dd*/
  {
    v3 = *v1; /*0x7ac8dd*/
    v4 = *v1 == 0; /*0x7ac8e6*/
    if ( !*v1 || *v3 == *v9 && v3[1] == v9[1] && v3[2] == v9[2] && v3[3] == v9[3] ) /*0x7ac910*/
      break; /*0x7ac910*/
LABEL_17:
    v6 = v1[5]; /*0x7ac933*/
    v1 += 3; /*0x7ac936*/
    if ( !v6 ) /*0x7ac93b*/
      return -2147467262; /*0x7ac93d*/
  }
  v5 = (int (*)(char *, unsigned int *, char **, void *))v1[2]; /*0x7ac912*/
  if ( v5 != (int (*)(char *, unsigned int *, char **, void *))1 ) /*0x7ac918*/
  {
    result = v5(v8, v9, v10, v1[1]); /*0x7ac925*/
    if ( !result || !v4 && result < 0 ) /*0x7ac931*/
      return result; /*0x7ac931*/
    goto LABEL_17; /*0x7ac931*/
  }
  v7 = (char *)v1[1] + (unsigned int)v8; /*0x7ac950*/
  (*(void (**)(char *))(*(unsigned int *)v7 + 4))(v7); /*0x7ac955*/
  *v10 = v7; /*0x7ac958*/
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
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  unsigned int *v13; // [esp+4h] [ebp-4h]

  if ( *((unsigned char *)this + 20) != 1 ) /*0x7ae0e8*/
  {
    v2 = *((unsigned int *)this + 2); /*0x7ae0f0*/
    v3 = (unsigned int *)*this; /*0x7ae0f3*/
    v4 = *((unsigned int *)this + 3) + 1; /*0x7ae0fc*/
    *((unsigned int *)this + 2) = 2 * v2; /*0x7ae0fd*/
    v13 = v3; /*0x7ae100*/
    *((unsigned int *)this + 3) = v4; /*0x7ae108*/
    v5 = __2_YAPAXI_Z(8 * v2); /*0x7ae113*/
    v6 = 4 * *((unsigned int *)this + 2); /*0x7ae118*/
    *this = v5; /*0x7ae11f*/
    memset(v5, 0, v6); /*0x7ae124*/
    if ( v2 > 0 ) /*0x7ae12f*/
    {
      v7 = v3; /*0x7ae131*/
      v8 = v2; /*0x7ae133*/
      do /*0x7ae167*/
      {
        v9 = *v7; /*0x7ae135*/
        if ( *v7 ) /*0x7ae135*/
        {
          do /*0x7ae161*/
          {
            v10 = ((int (*)(int))*((unsigned int *)this + 6))(v9) & ((1 << *((unsigned int *)this + 3)) - 1); /*0x7ae14b*/
            v11 = *(unsigned int *)(*(unsigned int *)this + 4 * v10); /*0x7ae14f*/
            *(unsigned int *)(*(unsigned int *)this + 4 * v10) = v9; /*0x7ae155*/
            v12 = *(unsigned int *)(v9 + 72); /*0x7ae157*/
            *(unsigned int *)(v9 + 72) = v11; /*0x7ae15a*/
            v9 = v12; /*0x7ae15d*/
          }
          while ( v12 ); /*0x7ae161*/
        }
        ++v7; /*0x7ae163*/
        --v8; /*0x7ae166*/
      }
      while ( v8 ); /*0x7ae167*/
      v3 = v13; /*0x7ae169*/
    }
    __3_YAXPAX_Z(v3); /*0x7ae16e*/
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
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  v2 = *((unsigned int *)this + 2); /*0x7aef55*/
  if ( v2 > *((unsigned int *)this + 12) && *((unsigned char *)this + 20) != 1 ) /*0x7aef67*/
  {
    v3 = (int *)*this; /*0x7aef70*/
    v4 = *((unsigned int *)this + 3); /*0x7aef73*/
    v13 = (int *)*this; /*0x7aef76*/
    *((unsigned int *)this + 2) = v2 >> 1; /*0x7aef7c*/
    *((unsigned int *)this + 3) = v4 - 1; /*0x7aef84*/
    v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x7aef8f*/
    v6 = 4 * *((unsigned int *)this + 2); /*0x7aef94*/
    *this = v5; /*0x7aef9b*/
    memset(v5, 0, v6); /*0x7aefa0*/
    if ( (int)v2 > 0 ) /*0x7aefab*/
    {
      v7 = v3; /*0x7aefad*/
      v8 = v2; /*0x7aefaf*/
      do /*0x7aefe3*/
      {
        v9 = *v7; /*0x7aefb1*/
        if ( *v7 ) /*0x7aefb1*/
        {
          do /*0x7aefdd*/
          {
            v10 = ((int (*)(int))*((unsigned int *)this + 6))(v9) & ((1 << *((unsigned int *)this + 3)) - 1); /*0x7aefc7*/
            v11 = *(unsigned int *)(*(unsigned int *)this + 4 * v10); /*0x7aefcb*/
            *(unsigned int *)(*(unsigned int *)this + 4 * v10) = v9; /*0x7aefd1*/
            v12 = *(unsigned int *)(v9 + 72); /*0x7aefd3*/
            *(unsigned int *)(v9 + 72) = v11; /*0x7aefd6*/
            v9 = v12; /*0x7aefd9*/
          }
          while ( v12 ); /*0x7aefdd*/
        }
        ++v7; /*0x7aefdf*/
        --v8; /*0x7aefe2*/
      }
      while ( v8 ); /*0x7aefe3*/
      v3 = v13; /*0x7aefe5*/
    }
    __3_YAXPAX_Z(v3); /*0x7aefea*/
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

  ComPtr::Set(&stru_B77F58, *((char *)this + 1)); /*0x7b022f*/
  v2 = Audio_Create_76BE90(v6, (int)this); /*0x7b023a*/
  v3 = Audio_Create(v5, (const char **)&g_WebBrowser, (int)v2); /*0x7b0249*/
  ComPtr::Set(&stru_B77F68, v3[1]); /*0x7b0257*/
  v5[0] = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x7b0260*/
  ComPtr::Release(v5); /*0x7b0268*/
  v6[0] = &vt_rc_ptr_WorldDominationTour_CampaignProperties; /*0x7b0271*/
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

  ComPtr::Set(&stru_B77F70, *((char *)this + 1)); /*0x7b02af*/
  v2 = Audio_Create_76BE90(v6, (int)this); /*0x7b02ba*/
  v3 = Audio_Create(v5, (const char **)&g_WebBrowser, (int)v2); /*0x7b02c9*/
  ComPtr::Set(&stru_B77F78, v3[1]); /*0x7b02d7*/
  v5[0] = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x7b02e0*/
  ComPtr::Release(v5); /*0x7b02e8*/
  v6[0] = &vt_rc_ptr_WorldDominationTour_CampaignProperties; /*0x7b02f1*/
  return ComPtr::Release(v6); /*0x7b02fe*/

}
} // namespace gamemd
// 0x7A4070
namespace gamemd {
int ComStreamClass::Seek(void * a1, void * a2, void * a3, void * a4)
{

  HWND v1; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  int v5; // [esp+8h] [ebp+8h]
  CampaignScore *v6; // [esp+Ch] [ebp+Ch]
  int v7; // [esp+10h] [ebp+10h]

  Debug::Log(); /*0x7a4075*/
  dword_B77DF4 = v5; /*0x7a4083*/
  if ( !v5 ) /*0x7a4088*/
  {
    dword_B77E60 = v6; /*0x7a4092*/
    dword_B77E64 = v7; /*0x7a4097*/
  }
  v1 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a40a2*/
  if ( v1 ) /*0x7a40a9*/
  {
    g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFEFF); /*0x7a40b7*/
    if ( !g_WOL_ChannelList ) /*0x7a40bd*/
      CloseDialog(v1, 0); /*0x7a40c3*/
  }
  Current = Dialog::GetCurrent(); /*0x7a40c8*/
  DlgItem = GetDlgItem(Current, 1344); /*0x7a40d3*/
  if ( DlgItem ) /*0x7a40db*/
    SetFocus(DlgItem); /*0x7a40de*/
  return 0; /*0x7a40e6*/

}
} // namespace gamemd
// 0x7A40F0
namespace gamemd {
int ComStreamClass::ddtor(void * a1, void * a2, void * a3)
{

  int v2; // [esp+8h] [ebp+8h]
  unsigned int v3; // [esp+Ch] [ebp+Ch]

  if ( g_NetworkLobby_Init && dword_B77780 ) /*0x7a4100*/
  {
    if ( !v2 && v3 < 0x3E8 ) /*0x7a4114*/
    {
      dword_B77CE0 = (ObjectClass *)((char *)dword_B77CE0 + 1); /*0x7a4123*/
      return 0; /*0x7a412a*/
    }
    return 0; /*0x7a4114*/
  }
  if ( MEMORY[0xA8B244] != 3 && MEMORY[0xA8B244] != 1 && MEMORY[0xA8B244] != 2 ) /*0x7a413f*/
  {
    if ( g_WOL_ProcessIdle ) /*0x7a4188*/
      DisplayRankingsWOL(0, 0); /*0x7a418e*/
    return 0; /*0x7a418e*/
  }
  Debug::Log(); /*0x7a4146*/
  if ( ++dword_B736F4 < (int)g_WOL_LoginPool ) /*0x7a4161*/
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

  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x7ac80e*/

}
} // namespace gamemd
// 0x7AED20
namespace gamemd {
void ** ComStreamClass::writeData(char a2)
{

  DeleteAndZero(Block); /*0x7aed23*/
  if ( (a2 & 1) != 0 ) /*0x7aed2d*/
    __3_YAXPAX_Z(Block); /*0x7aed30*/
  return Block; /*0x7aed3a*/

}
} // namespace gamemd