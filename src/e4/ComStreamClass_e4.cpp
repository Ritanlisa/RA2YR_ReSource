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
  ObjectClass v22[59]; // [esp+Ch] [ebp-2818h] BYREF
  char *v23; // [esp+2838h] [ebp+14h]

  Debug::Log(); /*0x7a3da1*/
  dword_B77DF0 = (int)a3; /*0x7a3dba*/
  if ( a3 ) /*0x7a3dbf*/
    goto LABEL_16; /*0x7a3dbf*/
  String::Assign((String *)v22, a5); /*0x7a3dd3*/
  LoadPlayerProfile((ObjectClass *)&v22[0].vtable1, (const char **)v22); /*0x7a3de0*/
  DeleteAndZero(v22); /*0x7a3de9*/
  v22[0].vtable0 = 0; /*0x7a3df2*/
  v22[0].uniqueId = 0; /*0x7a3df6*/
  IDA_LOBYTE(v22[0].abstractFlags) = 0; /*0x7a3dfa*/
  ReadRegistryOptionsWOL((ObjectClass *)&v22[0].uniqueId); /*0x7a3dfe*/
  if ( (unsigned __int8)Flag::IsNot2((Flag *)&v22[0].uniqueId) ) /*0x7a3e07*/
  {
    v22[0].vtable0 = FindChannelWOL(a5, (int)v23, 1u, *(_DWORD *)(v22[0].vtable2 + 16)); /*0x7a3e2d*/
    SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x7a3e31*/
  }
  v21 = 1; /*0x7a3e3b*/
  v20 = 0; /*0x7a3e40*/
  v5 = (HWND)Dialog::FindByHandle((Dialog *)0x10F); /*0x7a3e4a*/
  if ( v5 /*0x7a3e7a*/
    || (v5 = (HWND)Dialog::FindByHandle((Dialog *)0x11D), v20 = v5 != 0, v5)
    || (v21 = 0, (v5 = (HWND)Dialog::FindByHandle((Dialog *)0x114)) != 0) )
  {
    DlgItem = GetDlgItem(v5, 1576); /*0x7a3e88*/
    if ( v20 ) /*0x7a3e93*/
    {
      SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)a5); /*0x7a3ea1*/
    }
    else
    {
      v22[0].vtable3 = SendMessageA(DlgItem, 0x4BCu, 0, (LPARAM)a5); /*0x7a3eb5*/
      SendMessageA(DlgItem, 0x151u, v22[0].vtable3, v22[0].vtable0); /*0x7a3ec1*/
      SendMessageA(DlgItem, 0x14Eu, v22[0].vtable3, 0); /*0x7a3ed0*/
    }
    if ( v21 ) /*0x7a3ed8*/
    {
      String::Assign_Alt((String *)&dword_B73E40, a5); /*0x7a3eeb*/
      String::Assign_Alt((String *)&g_WebBrowserConfig, v23); /*0x7a3efd*/
      v7 = GetDlgItem(v5, 1836); /*0x7a3f0f*/
      v8 = String::GetOrEmpty_Alt((String *)&g_WebBrowserConfig); /*0x7a3f11*/
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
        String::Assign((String *)v22, a5); /*0x7a3fb2*/
        FillPersonaInfoWOL(v22[0].vtable2, v5, (char **)v22, (wchar_t **)1); /*0x7a3fc3*/
        DeleteAndZero(v22); /*0x7a3fcc*/
      }
    }
    else
    {
      v13 = GetDlgItem(v5, 1791); /*0x7a3f79*/
      SendMessageA(v13, 0xF1u, 0, 0); /*0x7a3f7c*/
      v14 = GetDlgItem(v5, 1791); /*0x7a3f86*/
      v10 = (void (__stdcall *)(HWND, BOOL))EnableWindow; /*0x7a3f88*/
      EnableWindow(v14, 1); /*0x7a3f8f*/
      if ( !v20 ) /*0x7a3f97*/
        goto LABEL_14; /*0x7a3f97*/
    }
  }
  v22[0].vtable1 = (int)&(void*)(void*)&rc_ptr_PlayerProfile_vftable; /*0x7a3fd1*/
  ComPtr::Release((ComPtr *)&v22[0].vtable1); /*0x7a3fdd*/
  LABEL_16:
  if ( a4 ) /*0x7a3fed*/
  {
    BulkCharToWide(&v22[0].nextArrayIndex, (unsigned __int8 *)a4, -1); /*0x7a3ff5*/
    ShowDialogConfirm((wchar_t *)&v22[0].nextArrayIndex, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7a4007*/
  }
  else
  {
    ShowDialogConfirm(aUnknownStatus, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7a4017*/
  }
  v16 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7a4021*/
  if ( v16 ) /*0x7a4028*/
  {
    dword_B77DC8 &= ~0x100u; /*0x7a4036*/
    if ( !dword_B77DC8 ) /*0x7a403c*/
      CloseDialog(v16, 0); /*0x7a4042*/
  }
  Current = (HWND)Dialog::GetCurrent(); /*0x7a4047*/
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
  char *Block; // [esp+14h] [ebp+4h]

  v1 = InterlockedDecrement((volatile LONG *)Block + 1); /*0x7ac834*/
  if ( !v1 && Block ) /*0x7ac83c*/
  {
    *(_DWORD *)Block = &off_7F766C; /*0x7ac843*/
    *((_DWORD *)Block + 1) = 1; /*0x7ac849*/
    InterlockedDecrement(&Addend); /*0x7ac84f*/
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8)); /*0x7ac855*/
    RA2_OPDEL(Block); /*0x7ac85c*/
  }
  return v1; /*0x7ac864*/
}
} // namespace gamemd
// 0x7AC870
namespace gamemd {
int ComStreamClass::QueryInterface(void * a1, void * a2, void * a3)
{
  char ***v3; // esi
  int result; // eax
  char **v5; // eax
  BOOL v6; // ebp
  char **v7; // eax
  char **v8; // eax
  char *v9; // esi
  _DWORD *v10; // [esp+1Ch] [ebp+Ch]

  v3 = (char ***)&off_7F7650; /*0x7ac87a*/
  if ( !v10 ) /*0x7ac87f*/
    return -2147467261; /*0x7ac88a*/
  *v10 = 0; /*0x7ac891*/
  if ( !*a3 && !a3[1] && a3[2] == (char *)192 && a3[3] == (char *)1174405120 ) /*0x7ac8b3*/
  {
    (*(void (__stdcall **)(_DWORD *))(*a2 + 4))(a2); /*0x7ac8c6*/
    *v10 = a2; /*0x7ac8c9*/
    return 0; /*0x7ac8d1*/
  }
  while ( 1 ) /*0x7ac8dd*/
  {
    v5 = *v3; /*0x7ac8dd*/
    v6 = *v3 == 0; /*0x7ac8e6*/
    if ( !*v3 || *v5 == *a3 && v5[1] == a3[1] && v5[2] == a3[2] && v5[3] == a3[3] ) /*0x7ac910*/
      break; /*0x7ac910*/
  LABEL_17:
    v8 = v3[5]; /*0x7ac933*/
    v3 += 3; /*0x7ac936*/
    if ( !v8 ) /*0x7ac93b*/
      return -2147467262; /*0x7ac93d*/
  }
  v7 = v3[2]; /*0x7ac912*/
  if ( v7 != (char **)1 ) /*0x7ac918*/
  {
    result = v7(a2, a3, v10, v3[1]); /*0x7ac925*/
    if ( !result || !v6 && result < 0 ) /*0x7ac931*/
      return result; /*0x7ac931*/
    goto LABEL_17; /*0x7ac931*/
  }
  v9 = (char *)v3[1] + (_DWORD)a2; /*0x7ac950*/
  (*(void (__stdcall **)(char *))(*(_DWORD *)v9 + 4))(v9); /*0x7ac955*/
  *v10 = v9; /*0x7ac958*/
  return 0; /*0x7ac881*/
}
} // namespace gamemd
// 0x7AE0E0
namespace gamemd {
AbstractClass * * ComStreamClass::readData()
{
  int ComStreamClass_field_0x08; // esi
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

  if ( IDA_LOBYTE(this->ComStreamClass_field_0x14) != 1 ) /*0x7ae0e8*/
  {
    ComStreamClass_field_0x08 = this->ComStreamClass_field_0x08; /*0x7ae0f0*/
    v3 = *(_DWORD **)this->__pad_0; /*0x7ae0f3*/
    v4 = this->ComStreamClass_field_0x0C + 1; /*0x7ae0fc*/
    this->ComStreamClass_field_0x08 = 2 * ComStreamClass_field_0x08; /*0x7ae0fd*/
    v13 = v3; /*0x7ae100*/
    this->ComStreamClass_field_0x0C = v4; /*0x7ae108*/
    v5 = (void *)RA2_OPNEW(8 * ComStreamClass_field_0x08); /*0x7ae113*/
    v6 = 4 * this->ComStreamClass_field_0x08; /*0x7ae118*/
    *(_DWORD *)this->__pad_0 = v5; /*0x7ae11f*/
    memset(v5, 0, v6); /*0x7ae124*/
    if ( ComStreamClass_field_0x08 > 0 ) /*0x7ae12f*/
    {
      v7 = v3; /*0x7ae131*/
      v8 = ComStreamClass_field_0x08; /*0x7ae133*/
      do /*0x7ae167*/
      {
        v9 = *v7; /*0x7ae135*/
        if ( *v7 ) /*0x7ae135*/
        {
          do /*0x7ae161*/
          {
            v10 = ((int (__thiscall *)(int))this->ComStreamClass_field_0x18)(v9) /*0x7ae14b*/
                & ((1 << this->ComStreamClass_field_0x0C) - 1);
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x7ae14f*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x7ae155*/
            v12 = *(_DWORD *)(v9 + 72); /*0x7ae157*/
            *(_DWORD *)(v9 + 72) = v11; /*0x7ae15a*/
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
    RA2_OPDEL(v3); /*0x7ae16e*/
  }
}
} // namespace gamemd
// 0x7AEF50
namespace gamemd {
void ComStreamClass::flushStream()
{
  unsigned int ComStreamClass_field_0x08; // esi
  int *v3; // ebp
  int ComStreamClass_field_0x0C; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  ComStreamClass_field_0x08 = this->ComStreamClass_field_0x08; /*0x7aef55*/
  if ( ComStreamClass_field_0x08 > this->ComStreamClass_field_0x30 && IDA_LOBYTE(this->ComStreamClass_field_0x14) != 1 ) /*0x7aef67*/
  {
    v3 = *(int **)this->__pad_0; /*0x7aef70*/
    ComStreamClass_field_0x0C = this->ComStreamClass_field_0x0C; /*0x7aef73*/
    v13 = *(int **)this->__pad_0; /*0x7aef76*/
    this->ComStreamClass_field_0x08 = ComStreamClass_field_0x08 >> 1; /*0x7aef7c*/
    this->ComStreamClass_field_0x0C = ComStreamClass_field_0x0C - 1; /*0x7aef84*/
    v5 = (void *)RA2_OPNEW(4 * (ComStreamClass_field_0x08 >> 1)); /*0x7aef8f*/
    v6 = 4 * this->ComStreamClass_field_0x08; /*0x7aef94*/
    *(_DWORD *)this->__pad_0 = v5; /*0x7aef9b*/
    memset(v5, 0, v6); /*0x7aefa0*/
    if ( (int)ComStreamClass_field_0x08 > 0 ) /*0x7aefab*/
    {
      v7 = v3; /*0x7aefad*/
      v8 = ComStreamClass_field_0x08; /*0x7aefaf*/
      do /*0x7aefe3*/
      {
        v9 = *v7; /*0x7aefb1*/
        if ( *v7 ) /*0x7aefb1*/
        {
          do /*0x7aefdd*/
          {
            v10 = ((int (__thiscall *)(int))this->ComStreamClass_field_0x18)(v9) /*0x7aefc7*/
                & ((1 << this->ComStreamClass_field_0x0C) - 1);
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x7aefcb*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x7aefd1*/
            v12 = *(_DWORD *)(v9 + 72); /*0x7aefd3*/
            *(_DWORD *)(v9 + 72) = v11; /*0x7aefd6*/
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
    RA2_OPDEL(v3); /*0x7aefea*/
  }
}
} // namespace gamemd
// 0x7B0220
namespace gamemd {
unsigned int * ComStreamClass::seekToPosition()
{
  _DWORD *_76BE90; // eax
  _DWORD *v3; // eax
  rc_ptr v5[4]; // [esp+4h] [ebp-10h] BYREF
  rc_ptr v6[4]; // [esp+Ch] [ebp-8h] BYREF

  ComPtr::Set((ComPtr *)&stru_B77EB0.lineTrailer, this->ComStreamClass_field_0x04); /*0x7b022f*/
  _76BE90 = Audio_Create_76BE90(v6, (int)this); /*0x7b023a*/
  v3 = Audio_Create(v5, (const char **)&g_WindowManager.__pad_EC[684], (int)_76BE90); /*0x7b0249*/
  ComPtr::Set(&stru_B77F68, v3[1]); /*0x7b0257*/
  *(_DWORD *)v5 = &(void*)(void*)&rc_ptr_WorldDominationTour_Campaign_vftable; /*0x7b0260*/
  ComPtr::Release((ComPtr *)v5); /*0x7b0268*/
  *(_DWORD *)v6 = &(void*)(void*)&rc_ptr_WorldDominationTour_CampaignProperties_vftable; /*0x7b0271*/
  return ComPtr::Release((ComPtr *)v6); /*0x7b027e*/
}
} // namespace gamemd
// 0x7B02A0
namespace gamemd {
unsigned int * ComStreamClass::getStreamSize()
{
  _DWORD *_76BE90; // eax
  _DWORD *v3; // eax
  rc_ptr v5[4]; // [esp+4h] [ebp-10h] BYREF
  rc_ptr v6[4]; // [esp+Ch] [ebp-8h] BYREF

  ComPtr::Set((ComPtr *)&stru_B77F68.ComPtr_field_0x08, this->ComStreamClass_field_0x04); /*0x7b02af*/
  _76BE90 = Audio_Create_76BE90(v6, (int)this); /*0x7b02ba*/
  v3 = Audio_Create(v5, (const char **)&g_WindowManager.__pad_EC[684], (int)_76BE90); /*0x7b02c9*/
  ComPtr::Set((ComPtr *)&stru_B77F68.ComPtr_field_0x10, v3[1]); /*0x7b02d7*/
  *(_DWORD *)v5 = &(void*)(void*)&rc_ptr_WorldDominationTour_Campaign_vftable; /*0x7b02e0*/
  ComPtr::Release((ComPtr *)v5); /*0x7b02e8*/
  *(_DWORD *)v6 = &(void*)(void*)&rc_ptr_WorldDominationTour_CampaignProperties_vftable; /*0x7b02f1*/
  return ComPtr::Release((ComPtr *)v6); /*0x7b02fe*/
}
} // namespace gamemd
// 0x7A4070
namespace gamemd {
int ComStreamClass::Seek(void * a1, void * a2, void * a3, void * a4)
{
  HWND v4; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  int v8; // [esp+10h] [ebp+10h]

  Debug::Log(); /*0x7a4075*/
  dword_B77DF4 = a3; /*0x7a4083*/
  if ( !a3 ) /*0x7a4088*/
  {
    dword_B77E60 = a4; /*0x7a4092*/
    dword_B77E64 = v8; /*0x7a4097*/
  }
  v4 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7a40a2*/
  if ( v4 ) /*0x7a40a9*/
  {
    dword_B77DC8 &= ~0x100u; /*0x7a40b7*/
    if ( !dword_B77DC8 ) /*0x7a40bd*/
      CloseDialog(v4, 0); /*0x7a40c3*/
  }
  Current = (HWND)Dialog::GetCurrent(); /*0x7a40c8*/
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
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x7ac80e*/
}
} // namespace gamemd
// 0x7AED20
namespace gamemd {
void ** ComStreamClass::writeData(char a2)
{
  DeleteAndZero(); /*0x7aed23*/
  if ( (a2 & 1) != 0 ) /*0x7aed2d*/
    RA2_OPDEL(); /*0x7aed30*/
  return (void **)this; /*0x7aed3a*/
}
} // namespace gamemd