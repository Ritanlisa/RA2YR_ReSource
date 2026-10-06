// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_VECTOR_TREE_TRUTH 1  // G57a2: G42.55 tree-truth bridge pulls core/vector.hpp templates
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
#include "e4/classes/E4Recv_77A9F0_e4.hpp"
#include "e4/classes/PushCommandClass_e4.hpp"
#include "e4/classes/Flag_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"

// 0x7A3D90
namespace gamemd {
int ComStreamClass::Write(int a2, unsigned __int8 *a3, const char *lParam, const char *lParama, int a1, int a4, int a5)
{

  HWND v5; // esi
  HWND DlgItem; // ebx
  HWND v7; // ebx
  char *v8; // eax
  HWND v9; // eax
  void (*v10)(HWND, BOOL); // ebx
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

  ((gamemd::Debug*)this)->Log(); /*0x7a3da1*/
  dword_B77DF0 = (int)a3; /*0x7a3dba*/
  if ( a3 ) /*0x7a3dbf*/
    goto LABEL_16; /*0x7a3dbf*/
  ((String *)((String *)v22))->Assign( (const char *)(lParama)); /*0x7a3dd3*/
  LoadPlayerProfile((ObjectClass *)&v22[0].vtable1, (const char **)v22); /*0x7a3de0*/
  j_DeleteAndZero( (void *)(v22)); /*0x7a3de9*/
  v22[0].vtable0 = 0; /*0x7a3df2*/
  v22[0].uniqueId = 0; /*0x7a3df6*/
  LOBYTE(v22[0].abstractFlags) = 0; /*0x7a3dfa*/
  ReadRegistryOptionsWOL((ObjectClass *)&v22[0].uniqueId); /*0x7a3dfe*/
  if ( (uint8_t)((Flag *)((Flag *)&v22[0].uniqueId))->IsNot2() ) /*0x7a3e07*/
  {
    v22[0].vtable0 = (void *)(FindChannelWOL( (const char *)(lParama), (int)v23, 1u, *(unsigned int *)(v22[0].vtable2 + 16))); /*0x7a3e2d*/
    SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x7a3e31*/
  }
  v21 = (unsigned int)(1);
  v20 = (unsigned int)(0);
  v5 = (HWND)((unsigned int)((HWND)((Dialog*)(Dialog *)0x10F)->FindByHandle()));
  if ( v5 /*0x7a3e7a*/
    || (v5 = (HWND)((Dialog*)(Dialog *)0x11D)->FindByHandle(), v20 = v5 != 0, v5)
    || (v21 = 0, (v5 = (HWND)((Dialog*)(Dialog *)0x114)->FindByHandle()) != 0) )
  {
    DlgItem = GetDlgItem(v5, 1576); /*0x7a3e88*/
    if ( v20 ) /*0x7a3e93*/
    {
      SendMessageA( (HWND)(DlgItem), 0x4B4u, 0, (LPARAM)((LPARAM)((LPARAM)lParama))); /*0x7a3ea1*/
    }
    else
    {
      v22[0].vtable3 = SendMessageA( (HWND)(DlgItem), 0x4BCu, 0, (LPARAM)((LPARAM)((LPARAM)lParama))); /*0x7a3eb5*/
      SendMessageA( (HWND)(DlgItem), 0x151u, v22[0].vtable3, v22[0].vtable0); /*0x7a3ec1*/
      SendMessageA( (HWND)(DlgItem), 0x14Eu, v22[0].vtable3, 0); /*0x7a3ed0*/
    }
    if ( v21 ) /*0x7a3ed8*/
    {
      ((String *)((String *)&dword_B73E40))->Assign_Alt( (const char *)(lParama)); /*0x7a3eeb*/
      ((String *)((String *)&g_WebBrowserConfig))->Assign_Alt( (const char *)(v23)); /*0x7a3efd*/
      v7 = GetDlgItem(v5, 1836); /*0x7a3f0f*/
      v8 = ((String *)((String *)&g_WebBrowserConfig))->GetOrEmpty_Alt(); /*0x7a3f11*/
      SendMessageA( (HWND)(v7), 0x4B4u, 0, (LPARAM)((LPARAM)((LPARAM)v8))); /*0x7a3f1f*/
      LOBYTE(dword_84A238) = 1; /*0x7a3f29*/
      v9 = GetDlgItem(v5, 1337); /*0x7a3f30*/
      v10 = (void (*)(HWND, BOOL))EnableWindow; /*0x7a3f32*/
      EnableWindow(v9, 1); /*0x7a3f39*/
      if ( !v20 ) /*0x7a3f41*/
      {
        v11 = GetDlgItem(v5, 1837); /*0x7a3f4f*/
        EnableWindow(v11, 0); /*0x7a3f52*/
        v12 = GetDlgItem(v5, 1837); /*0x7a3f63*/
        SendMessageA( (HWND)(v12), 0xF1u, 1u, 0); /*0x7a3f66*/
LABEL_14:
        v15 = GetDlgItem(v5, 1771); /*0x7a3f99*/
        v10(v15, 1); /*0x7a3fa4*/
        ((String *)((String *)v22))->Assign( (const char *)(lParama)); /*0x7a3fb2*/
        FillPersonaInfoWOL(v22[0].vtable2, v5, (char **)v22, (wchar_t **)1); /*0x7a3fc3*/
        j_DeleteAndZero( (void *)(v22)); /*0x7a3fcc*/
      }
    }
    else
    {
      v13 = GetDlgItem(v5, 1791); /*0x7a3f79*/
      SendMessageA( (HWND)(v13), 0xF1u, 0, 0); /*0x7a3f7c*/
      v14 = GetDlgItem(v5, 1791); /*0x7a3f86*/
      v10 = (void (*)(HWND, BOOL))EnableWindow; /*0x7a3f88*/
      EnableWindow(v14, 1); /*0x7a3f8f*/
      if ( !v20 ) /*0x7a3f97*/
        goto LABEL_14; /*0x7a3f97*/
    }
  }
  v22[0].vtable1 = (void *)((int)&vt_rc_ptr); /*0x7a3fd1*/
  ((ComPtr *)((ComPtr *)&v22[0].vtable1))->Release(); /*0x7a3fdd*/
LABEL_16:
  if ( lParam ) /*0x7a3fed*/
  {
    BulkCharToWide( (unsigned short *)(&v22[0].nextArrayIndex), (uint8_t *)lParam, -1); /*0x7a3ff5*/
    ShowDialogConfirm( (void *)((wchar_t *)&v22[0].nextArrayIndex), 0, (uint8_t (*)(void))GameLoop::Thunk, 0); /*0x7a4007*/
  }
  else
  {
    ShowDialogConfirm( (void *)((void *)(aUnknownStatus)), 0, (uint8_t (*)(void))GameLoop::Thunk, 0); /*0x7a4017*/
  }
  v16 = (HWND)((Dialog*)(Dialog *)0xC4)->FindByHandle(); /*0x7a4021*/
  if ( v16 ) /*0x7a4028*/
  {
    dword_B77DC8 &= ~0x100u; /*0x7a4036*/
    if ( !dword_B77DC8 ) /*0x7a403c*/
      CloseDialog( (HWND)(v16), 0); /*0x7a4042*/
  }
  Current = (HWND)((Dialog *)this)->GetCurrent(); /*0x7a4047*/
  v18 = GetDlgItem(Current, 1344); /*0x7a4052*/
  if ( v18 ) /*0x7a4058*/
    SetFocus(v18); /*0x7a405b*/
  return 0; /*0x7a4054*/

}
} // namespace gamemd
// 0x7AC820
namespace gamemd {
int ComStreamClass::Release(void *a1)
{

  LONG v1; // ebx
  char *Block; // [esp+14h] [ebp+4h]

  v1 = (unsigned int)(InterlockedDecrement((volatile LONG *)Block + 1));
  if ( !v1 && Block ) /*0x7ac83c*/
  {
    *(unsigned int *)Block = (unsigned int)(&off_7F766C); /*0x7ac843*/
    *((unsigned int *)Block + 1) = 1; /*0x7ac849*/
    InterlockedDecrement(&Addend); /*0x7ac84f*/
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8)); /*0x7ac855*/
    __3_YAXPAX_Z(Block, unsigned int a3, unsigned int a2); /*0x7ac85c*/
  }
  return v1; /*0x7ac864*/

}
} // namespace gamemd
// 0x7AC870
namespace gamemd {
int ComStreamClass::QueryInterface(unsigned int *a2, char **a3, int a4, int a1, int a5)
{

  char ***v3; // esi
  int result; // eax
  char **v5; // eax
  BOOL v6; // ebp
  char **v7; // eax
  char **v8; // eax
  char *v9; // esi
  unsigned int *v10; // [esp+1Ch] [ebp+Ch]

  v3 = (char ***)&off_7F7650; /*0x7ac87a*/
  if ( !v10 ) /*0x7ac87f*/
    return -2147467261; /*0x7ac88a*/
  *v10 = 0; /*0x7ac891*/
  if ( !*(unsigned (unsigned int)(int)*)(a3) && !a3[1] && a3[2] == (char *)192 && a3[3] == (char *)1174405120 ) /*0x7ac8b3*/
  {
    (*(void (**)(unsigned int *))(*a2 + 4))( (unsigned int *)(a2)); /*0x7ac8c6*/
    *v10 = (unsigned int)(a2); /*0x7ac8c9*/
    return 0; /*0x7ac8d1*/
  }
  while ( 1 ) /*0x7ac8dd*/
  {
    v5 = *v3; /*0x7ac8dd*/
    v6 = *v3 == 0; /*(char *)(0x7ac8e6)*/
    if ( !*v3 || *(char *)(v5) == *(unsigned int *)(a3) && v5[1] == a3[1] && v5[2] == a3[2] && v5[3] == a3[3] ) /*0x7ac910*/
      break; /*0x7ac910*/
LABEL_17:
    v8 = v3[5]; /*0x7ac933*/
    v3 += 3; /*0x7ac936*/
    if (!v8, unsigned int a2, unsigned int a3) /*0x7ac93b*/
      return -2147467262; /*0x7ac93d*/
  }
  v7 = v3[2]; /*0x7ac912*/
  if ( v7 != (char **)1 ) /*0x7ac918*/
  {
    result = ((int (**)(unsigned int *, char **, unsigned int *, char **))v7)(a2, a3, v10, v3[1]); /*0x7ac925*/
    if (!result || !v6 && result < 0, unsigned int a2) /*0x7ac931*/
      return result; /*0x7ac931*/
    goto LABEL_17; /*0x7ac931*/
  }
  v9 = (char *)((unsigned int)((char *)v3[1] + (unsigned int)a2));
  (*(void (**)(char *))(*(unsigned int *)v9 + 4))( (char *)(v9)); /*0x7ac955*/
  *v10 = (unsigned int)(v9); /*0x7ac958*/
  return 0; /*0x7ac881*/

}
} // namespace gamemd
// 0x7AE0E0
namespace gamemd {
AbstractClass * * ComStreamClass::readData()
{

  int ComStreamClass_field_0x08; // esi
  unsigned int *v3; // ebp
  int v4; // edi
  void *v5; // edi
  void * v6;
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  unsigned int *v13; // [esp+4h] [ebp-4h]

  if ( LOBYTE(this->ComStreamClass_field_0x14) != 1 ) /*0x7ae0e8*/
  {
    ComStreamClass_field_0x08 = (unsigned int)(this->ComStreamClass_field_0x08);
    v3 = (unsigned int *)((void *)(*(unsigned int **)this->__pad_0));
    v4 = (unsigned int)(this->ComStreamClass_field_0x0C + 1);
    this->ComStreamClass_field_0x08 = 2 * ComStreamClass_field_0x08; /*0x7ae0fd*/
    v13 = v3; /*0x7ae100*/
    this->ComStreamClass_field_0x0C = v4; /*0x7ae108*/
    v5 = (void *)__2_YAPAXI_Z(8 * ComStreamClass_field_0x08); /*0x7ae113*/
    v6 = (void *)(4 * this->ComStreamClass_field_0x08); /*0x7ae118*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(v5); /*0x7ae11f*/
    memset( (void *)(v5), 0, (size_t)(v6)); /*0x7ae124*/
    if ( ComStreamClass_field_0x08 > 0 ) /*0x7ae12f*/
    {
      v7 = (int *)(v3);
      v8 = ComStreamClass_field_0x08; /*0x7ae133*/
      do /*0x7ae167*/
      {
        v9 = *v7; /*0x7ae135*/
        if ( *v7 ) /*0x7ae135*/
        {
          do /*0x7ae161*/
          {
            v10 = ((int (*)(int))this->ComStreamClass_field_0x18)(v9) /*0x7ae14b*/
                & ((1 << this->ComStreamClass_field_0x0C) - 1);
            v11 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10); /*0x7ae14f*/
            *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10) = v9; /*0x7ae155*/
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

  unsigned int ComStreamClass_field_0x08; // esi
  int *v3; // ebp
  int ComStreamClass_field_0x0C; // edi
  void *v5; // edi
  void * v6;
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  ComStreamClass_field_0x08 = this->ComStreamClass_field_0x08; /*0x7aef55*/
  if ( ComStreamClass_field_0x08 > this->ComStreamClass_field_0x30 && LOBYTE(this->ComStreamClass_field_0x14) != 1 ) /*0x7aef67*/
  {
    v3 = (int *)((unsigned int)(*(int **)this->__pad_0));
    ComStreamClass_field_0x0C = (unsigned int)(this->ComStreamClass_field_0x0C);
    v13 = (int *)((unsigned int)(*(int **)this->__pad_0));
    this->ComStreamClass_field_0x08 = (unsigned int)(ComStreamClass_field_0x08 >> 1);
    this->ComStreamClass_field_0x0C = (unsigned int)(ComStreamClass_field_0x0C - 1);
    v5 = (void *)__2_YAPAXI_Z(4 * (ComStreamClass_field_0x08 >> 1)); /*0x7aef8f*/
    v6 = (void *)(4 * this->ComStreamClass_field_0x08); /*0x7aef94*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(v5); /*0x7aef9b*/
    memset( (void *)(v5), 0, (size_t)(v6)); /*0x7aefa0*/
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
            v10 = ((int (*)(int))this->ComStreamClass_field_0x18)(v9) /*0x7aefc7*/
                & ((1 << this->ComStreamClass_field_0x0C) - 1);
            v11 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10); /*0x7aefcb*/
            *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10) = v9; /*0x7aefd1*/
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

  unsigned int *_76BE90; // eax
  unsigned int *v3; // eax
  rc_ptr v5[4]; // [esp+4h] [ebp-10h] BYREF
  rc_ptr v6[4]; // [esp+Ch] [ebp-8h] BYREF

  ((ComPtr *)((ComPtr *)&stru_B77EB0.lineTrailer))->Set(this->ComStreamClass_field_0x04); /*0x7b022f*/
  _76BE90 = Audio_Create_76BE90(v6, (int)this); /*0x7b023a*/
  v3 = Audio_Create(v5, (const char **)&g_WindowManager.__pad_EC[684], (int)_76BE90); /*0x7b0249*/
  ((ComPtr *)(&stru_B77F68))->Set(v3[1]); /*0x7b0257*/
  *(unsigned int *)v5 = (unsigned int)&vt_rc_ptr;
  ((ComPtr *)((ComPtr *)v5))->Release(); /*0x7b0268*/
  *(unsigned int *)v6 = (unsigned int)&vt_rc_ptr;
  return (unsigned int *)((ComPtr *)((ComPtr *)v6))->Release(); /*0x7b027e*/

}
} // namespace gamemd
// 0x7B02A0
namespace gamemd {
unsigned int * ComStreamClass::getStreamSize()
{

  unsigned int *_76BE90; // eax
  unsigned int *v3; // eax
  rc_ptr v5[4]; // [esp+4h] [ebp-10h] BYREF
  rc_ptr v6[4]; // [esp+Ch] [ebp-8h] BYREF

  ((ComPtr *)((ComPtr *)&stru_B77F68.ComPtr_field_0x08))->Set(this->ComStreamClass_field_0x04); /*0x7b02af*/
  _76BE90 = Audio_Create_76BE90(v6, (int)this); /*0x7b02ba*/
  v3 = Audio_Create(v5, (const char **)&g_WindowManager.__pad_EC[684], (int)_76BE90); /*0x7b02c9*/
  ((ComPtr *)((ComPtr *)&stru_B77F68.ComPtr_field_0x10))->Set(v3[1]); /*0x7b02d7*/
  *(unsigned int *)v5 = (unsigned int)&vt_rc_ptr;
  ((ComPtr *)((ComPtr *)v5))->Release(); /*0x7b02e8*/
  *(unsigned int *)v6 = (unsigned int)&vt_rc_ptr;
  return (unsigned int *)((ComPtr *)((ComPtr *)v6))->Release(); /*0x7b02fe*/

}
} // namespace gamemd
// 0x7A4070
namespace gamemd {
int ComStreamClass::Seek(int a2, int a3, int a4, int a1, int a5)
{

  HWND v4; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  int v8; // [esp+10h] [ebp+10h]

  Debug::Log(); /*0x7a4075*/
  dword_B77DF4 = (unsigned int)(a3); /*0x7a4083*/
  if ( !a3 ) /*0x7a4088*/
  {
    dword_B77E60 = a4; /*0x7a4092*/
    dword_B77E64 = v8; /*0x7a4097*/
  }
  v4 = (HWND)((Dialog*)(Dialog *)0xC4)->FindByHandle(); /*0x7a40a2*/
  if ( v4 ) /*0x7a40a9*/
  {
    dword_B77DC8 &= ~0x100u; /*0x7a40b7*/
    if ( !dword_B77DC8 ) /*0x7a40bd*/
      CloseDialog( (HWND)(v4), 0); /*0x7a40c3*/
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
int ComStreamClass::ddtor(int a2, int a3, unsigned int a1, int a4, int a5)
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
LONG ComStreamClass::AddRef(void *a1)
{

  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x7ac80e*/

}
} // namespace gamemd
// 0x7AED20
namespace gamemd {
void ** ComStreamClass::writeData(char a2)
{

  j_DeleteAndZero( (void *)((ObjectClass *)this)); /*0x7aed23*/
  if ( (a2 & 1) != 0 ) /*0x7aed2d*/
    __3_YAXPAX_Z(this); /*0x7aed30*/
  return (void **)this; /*0x7aed3a*/

}
} // namespace gamemd