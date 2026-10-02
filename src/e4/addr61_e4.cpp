// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6107E0_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TriggerClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/DynamicArray_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/Init_e4.hpp"

// 0x610570
namespace gamemd {
AbstractClass * * DestroyDialogChildWindow(HWND hWnd, LPARAM a2)
{
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
  void *v2; // eax
  void *v3; // eax
  unsigned int *v4; // ecx
  unsigned int *v5; // edx
  unsigned int *v6; // eax
  int v7; // esi
  HWND *v8; // ecx
  HWND v9; // edi
  double v10; // st7
  HWND *v11; // eax
  void *WindowLongA; // eax
  int64_t v14; // [esp+8h] [ebp-208h] BYREF
  void *v15[128]; // [esp+10h] [ebp-200h] BYREF

  DynamicArray::Resize(&dword_AC1B48, (int *)&hWnd, &v14); /*0x61058a*/
  memset(v15, 0, sizeof(v15)); /*0x6105a0*/
  v15[26] = (void *)11; /*0x6105a4*/
  v15[25] = (void *)g_FogOfWarState; /*0x6105ac*/
  v2 = RA2_OPNEW(4u); /*0x6105b0*/
  if ( v2 ) /*0x6105bc*/
    v3 = (void *)unknown_libname_74(v2); /*0x6105c0*/
  else
    v3 = 0; /*0x6105c7*/
  v15[15] = v3; /*0x6105c9*/
  v15[16] = 0; /*0x6105df*/
  v15[23] = 0; /*0x6105e3*/
  v15[36] = (void *)-1; /*0x6105e7*/
  ((Dialog *)(&dword_AC1B00))->BindGadgetData((int *)&hWnd, (char *)v15); /*0x6105f2*/
  if ( v15[10] ) /*0x6105fd*/
  {
    RA2_OPDEL(v15[10]); /*0x610600*/
    v15[10] = 0; /*0x610608*/
  }
  v4 = (unsigned int *)(v15[13]);
  if ( v15[13] ) /*0x610612*/
  {
    do /*0x61064d*/
    {
      v5 = 0; /*0x610614*/
      v6 = v4; /*0x610618*/
      if ( !v4 ) /*0x61061a*/
        break; /*0x61061a*/
      while ( v4 != v6 ) /*0x61061e*/
      {
        v5 = v6; /*0x610620*/
        v6 = (unsigned int *)*v6; /*0x610622*/
        if ( !v6 ) /*0x610626*/
          goto LABEL_16; /*0x610626*/
      }
      if ( v6 ) /*0x61062c*/
      {
        if ( v5 ) /*0x610630*/
          *v5 = *v6; /*0x610634*/
        else
          v15[13] = *(void **)v6; /*0x61063a*/
        RA2_OPDEL(v6); /*0x61063f*/
        v4 = (unsigned int *)(v15[13]); /*0x610644*/
      }
  LABEL_16:
      ;
    }
    while ( v4 ); /*0x61064d*/
  }
  if ( v15[15] ) /*0x610655*/
    DeleteAndZero::OrFree((void **)v15[15], 1); /*0x610659*/
  if ( unk_AC18C4 ) /*0x610666*/
  {
    v14 = (unsigned int)(unk_AC18C4 - 1); /*0x610671*/
    *(float *)&v14 = (double)v14 / (double)dword_AC18C8; /*0x610691*/
    v7 = dword_AC18D8(&hWnd) & ((1 << dword_AC18CC) - 1); /*0x6106af*/
    v8 = (HWND *)*((unsigned int *)g_DialogPool + v7); /*0x6106b1*/
    if ( v8 ) /*0x6106b6*/
    {
      if ( *v8 == hWnd ) /*0x6106c7*/
      {
        v9 = (HWND)((unsigned int)(v8[2]));
        RA2_OPDEL(*((void **)g_DialogPool + v7)); /*0x6106cd*/
        v10 = *(float *)&v14; /*0x6106db*/
        *((unsigned int *)g_DialogPool + v7) = (unsigned int)(v9); /*0x6106df*/
        --unk_AC18C4; /*0x6106ee*/
        if ( v10 > dbl_AC18E0 ) /*0x6106f8*/
          goto LABEL_31; /*0x6106f8*/
        goto LABEL_30; /*0x6106f8*/
      }
      v11 = (unsigned int)((HWND *)v8[2]);
      if ( v11 ) /*0x610701*/
      {
        while ( *(unsigned int)((unsigned int *))(v11) != hWnd ) /*0x610705*/
        {
          v8 = (HWND *)((unsigned int)((HWND *)(v11)));
          v11 = (unsigned int)((HWND *)((unsigned int *)(v11))[2]);
          if ( !v11 ) /*0x61070e*/
            goto LABEL_29; /*0x61070e*/
        }
        v8[2] = (HWND)(((unsigned int *)(v11))[2]);
        --unk_AC18C4; /*0x610720*/
        RA2_OPDEL(v11); /*0x610726*/
      }
  LABEL_29:
      if ( *(float *)&v14 <= dbl_AC18E0 ) /*0x61073d*/
  LABEL_30:
        HashTable::Shrink2(&g_DialogPool); /*0x61073f*/
    }
  }
  LABEL_31: WindowLongA = (gamemd::AbstractClass **)((void *)GetWindowLongA(hWnd, -21));
  if ( WindowLongA ) /*0x61075c*/
    RA2_OPDEL(WindowLongA); /*0x61075f*/
  SetWindowLongA(hWnd, -21, 0); /*0x610772*/
  Object::RemoveObjectArray(hWnd); /*0x61077f*/
  return 1; /*0x610784*/
}
}
// 0x610810
namespace gamemd {
char sub_610810(int a1, const wchar_t * a2, CoordStruct * a3)
{
  wchar_t *StringCSF; // eax
  int v6; // ecx
  const wchar_t *v8; // [esp+0h] [ebp-30h]
  unsigned int v9[2]; // [esp+10h] [ebp-20h] BYREF
  int64_t v10; // [esp+18h] [ebp-18h]
  __int128 v11; // [esp+20h] [ebp-10h] BYREF

  if ( dword_AC1DCC ) /*0x610829*/
  {
    if ( dword_AC1DD0 != 1 ) /*0x610835*/
    {
      if ( !dword_AC1CC8 ) /*0x61083f*/
      {
  LABEL_7:
        dword_AC1CC8 = 0; /*0x6108a9*/
        dword_AC1DCC = 0; /*0x6108af*/
        dword_AC1DD0 = 0; /*0x6108b5*/
        goto LABEL_8; /*0x6108b5*/
      }
      v11 = dword_AC1CB8; /*0x61085b*/
      v9[0] = 0; /*0x610879*/
      v9[1] = 0; /*0x61087d*/
      v10 = *((unsigned long long *)&dword_AC1CB8 + 1); /*0x610881*/
      (*(void (**)(int, __int128 *, int, unsigned int *, unsigned int, int))(*(unsigned int *)g_DSurface_Primary + 8))( /*0x61088c*/
        g_DSurface_Primary,
        &v11,
        dword_AC1CC8,
        v9,
        0,
        1);
      dword_AC1DD0 = 1; /*0x610894*/
    }
    if ( dword_AC1CC8 ) /*0x6108a2*/
      (**(void (***)(int, int))dword_AC1CC8)(dword_AC1CC8, 1); /*0x6108a7*/
    goto LABEL_7; /*0x6108a7*/
  }
  LABEL_8: dword_AC48D8 = (unsigned int)(time(0));
  StringCSF = (unsigned int)(GetStringCSF(aGuiTooltip, 0, g_Str_File_ownrdraw_cpp, 7457));
  swprintf(word_AC1CCC, (const size_t)StringCSF, v8); /*0x6108e5*/
  if ( a2 ) /*0x6108ef*/
    wcscpy((wchar_t *)(word_AC1CCC), a2); /*0x6108f7*/
  *(unsigned long long *)&dword_AC1CB8 = *(unsigned long long *)a1; /*0x610901*/
  DWORD2(dword_AC1CB8) = *(unsigned int *)(a1 + 8); /*0x610917*/
  v6 = *(unsigned int *)(a1 + 12); /*0x61091c*/
  dword_AC1DCC = 1; /*0x61091f*/
  IDA_HIDWORD(dword_AC1CB8) = v6; /*0x610925*/
  dword_AC1DD4 = (unsigned int)(a3); /*0x61092d*/
// 0x610950
  return TriggerClass::FindByEventType(1); /*0x610938*/
}
}
// 0x610B50
namespace gamemd {
char sub_610B50()
{
  unsigned int v2[2]; // [esp+4h] [ebp-20h] BYREF
  int64_t v3; // [esp+Ch] [ebp-18h]
  unsigned long long v4[2]; // [esp+14h] [ebp-10h] BYREF

  if ( !*(unsigned int *)&g_DialogPool.__pad_208[772] ) /*0x610b5d*/
    return 0; /*0x610b5f*/
  if ( *(unsigned int *)&g_DialogPool.__pad_208[776] == 1 ) /*0x610b6d*/
    return 0; /*0x610b6f*/
  if ( !*(unsigned int *)&g_DialogPool.__pad_208[512] ) /*0x610b7e*/
    return 0; /*0x610b80*/
  v2[0] = 0; /*0x610b9e*/
  v2[1] = 0; /*0x610ba2*/
  v4[0] = *(unsigned long long *)&g_DialogPool.__pad_208[496]; /*0x610bab*/
  v4[1] = *(unsigned long long *)&g_DialogPool.__pad_208[504]; /*0x610bc4*/
  v3 = *(unsigned long long *)&g_DialogPool.__pad_208[504]; /*0x610bc8*/
  (*((void (**)(DSurface *, unsigned long long *, unsigned int, unsigned int *, unsigned int, int))g_DSurface_Primary->DSurface_field_0x0 /*0x610bd3*/
   + 2))(
    g_DSurface_Primary,
    v4,
    *(unsigned int *)&g_DialogPool.__pad_208[512],
    v2,
    0,
    1);
  *(unsigned int *)&g_DialogPool.__pad_208[776] = 1; /*0x610bd6*/
  return 1; /*0x610b61*/
}
}
// 0x610BF0
namespace gamemd {
AbstractClass * * sub_610BF0()
{
  unsigned int v2[2]; // [esp+4h] [ebp-20h] BYREF
  int64_t v3; // [esp+Ch] [ebp-18h]
  unsigned long long v4[2]; // [esp+14h] [ebp-10h] BYREF

  if ( !*(unsigned int *)&g_DialogPool.__pad_208[772] ) /*0x610bfd*/
    return 0; /*0x610c05*/
  if ( *(unsigned int *)&g_DialogPool.__pad_208[776] == 1 ) /*0x610c0d*/
    goto LABEL_6; /*0x610c0d*/
  if ( *(unsigned int *)&g_DialogPool.__pad_208[512] ) /*0x610c17*/
  {
    v4[0] = *(unsigned long long *)&g_DialogPool.__pad_208[496]; /*0x610c35*/
    v4[1] = *(unsigned long long *)&g_DialogPool.__pad_208[504]; /*0x610c4f*/
    v2[0] = 0; /*0x610c53*/
    v2[1] = 0; /*0x610c57*/
    v3 = *(unsigned long long *)&g_DialogPool.__pad_208[504]; /*0x610c5b*/
    (*((void (**)(DSurface *, unsigned long long *, unsigned int, unsigned int *, unsigned int, int))g_DSurface_Primary->DSurface_field_0x0 /*0x610c66*/
     + 2))(
      g_DSurface_Primary,
      v4,
      *(unsigned int *)&g_DialogPool.__pad_208[512],
      v2,
      0,
      1);
    *(unsigned int *)&g_DialogPool.__pad_208[776] = 1; /*0x610c69*/
  LABEL_6:
    if ( *(unsigned int *)&g_DialogPool.__pad_208[512] ) /*0x610c7c*/
      (***(void (****)(unsigned int, int))&g_DialogPool.__pad_208[512])(*(unsigned int *)&g_DialogPool.__pad_208[512], 1); /*0x610c82*/
  }
  *(unsigned int *)&g_DialogPool.__pad_208[512] = 0; /*0x610c84*/
  *(unsigned int *)&g_DialogPool.__pad_208[772] = 0; /*0x610c8a*/
  *(unsigned int *)&g_DialogPool.__pad_208[776] = 0; /*0x610c90*/
  return 1; /*0x610c01*/
}
}
// 0x612930
namespace gamemd {
void sub_612930()
{
  unsigned int v0; // eax
  unsigned int i; // edi
  unsigned int *v2; // esi
  void *v3; // eax
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = dword_AC1860; /*0x612930*/
  for ( i = 0; i < dword_AC1860; v0 = dword_AC1860 ) /*0x61293d*/
  {
    v2 = (unsigned int *)*((unsigned int *)stru_AC1858 + i); /*0x612944*/
    while ( v2 ) /*0x612949*/
    {
      v3 = v2; /*0x61294b*/
      v2 = (unsigned int *)v2[3]; /*0x61294d*/
      RA2_OPDEL(v3); /*0x612951*/
    }
    *((unsigned int *)stru_AC1858 + i++) = 0; /*0x612964*/
  }
  v4 = dword_AC1888; /*0x612975*/
  dword_AC185C = 0; /*0x61297b*/
  if ( v0 > dword_AC1888 ) /*0x612987*/
  {
    do /*0x612a3a*/
    {
      if ( byte_AC186C || v0 <= v4 ) /*0x61299d*/
        break; /*0x61299d*/
      v5 = (int *)stru_AC1858; /*0x6129a9*/
      v6 = v0; /*0x6129af*/
      dword_AC1860 = v0 >> 1; /*0x6129b4*/
      --dword_AC1864; /*0x6129c0*/
      stru_AC1858 = (unsigned char)(RA2_OPNEW(4 * (v0 >> 1))); /*0x6129d9*/
      memset((void *)(stru_AC1858), 0, 4 * dword_AC1860); /*0x6129e1*/
      if ( v6 > 0 ) /*0x6129e3*/
      {
        v7 = v5; /*0x6129e5*/
        v8 = v6; /*0x6129e7*/
        do /*0x612a22*/
        {
          v9 = *v7; /*0x6129e9*/
          if ( *v7 ) /*0x6129e9*/
          {
            do /*0x612a1c*/
            {
              v10 = dword_AC1870(v9) & ((1 << dword_AC1864) - 1); /*0x612a05*/
              v11 = *((unsigned int *)stru_AC1858 + v10); /*0x612a0c*/
              *((unsigned int *)stru_AC1858 + v10) = v9; /*0x612a0f*/
              v12 = *(unsigned int *)(v9 + 12); /*0x612a12*/
              *(unsigned int *)(v9 + 12) = v11; /*0x612a15*/
              v9 = v12; /*0x612a1a*/
            }
            while ( v12 ); /*0x612a1c*/
          }
          ++v7; /*0x612a1e*/
          --v8; /*0x612a21*/
        }
        while ( v8 ); /*0x612a22*/
      }
      RA2_OPDEL(v5); /*0x612a25*/
      v4 = dword_AC1888; /*0x612a2a*/
      v0 = dword_AC1860; /*0x612a30*/
    }
    while ( dword_AC1860 > (unsigned int)dword_AC1888 ); /*0x612a3a*/
  }
  RA2_OPDEL(stru_AC1858); /*0x612a46*/
}
}
// 0x612A60
namespace gamemd {
AbstractClass * * sub_612A60(HWND hWnd, UINT Msg, HDC hdc, LPARAM lParam)
{
  LRESULT (__stdcall *v4)(HWND, UINT, WPARAM, LPARAM); // esi
  int v5; // eax
  HWND v6; // ecx
  LRESULT (__stdcall **v7)(HWND, UINT, WPARAM, LPARAM); // eax
  int v8; // eax
  AbstractClass ** v9;
  HDC v10; // esi
  struct tagRECT v12; // [esp+4h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+14h] [ebp-10h] BYREF

  v4 = 0; /*0x612a69*/
  if ( dword_AC1B4C && (v5 = *((unsigned int *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1)))) != 0 ) /*0x612a93*/
  {
    v6 = hWnd; /*0x612a95*/
    while ( *(HWND *)v5 != hWnd ) /*0x612a9b*/
    {
      v5 = *(unsigned int *)(v5 + 8); /*0x612a9d*/
      if ( !v5 ) /*0x612aa2*/
        goto LABEL_10; /*0x612aa2*/
    }
    v7 = (LRESULT (**)(HWND, UINT, WPARAM, LPARAM))(v5 + 4); /*0x612aaa*/
    if ( v7 ) /*0x612aaf*/
      v4 = *v7; /*0x612ab1*/
  }
  else
  {
    v6 = hWnd; /*0x612ab5*/
  }
  LABEL_10:
  ScreenDialogToClient(v6, &v12); /*0x612ab9*/
  GetClientRect(hWnd, &Rect); /*0x612acc*/
  if ( dword_AC1B04 && (v8 = *((unsigned int *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1)))) != 0 ) /*0x612aff*/
  {
    v9 = (gamemd::AbstractClass **)(hWnd);
    do /*0x612b11*/
    {
      if ( *(HWND *)v8 == hWnd ) /*0x612b07*/
        break; /*0x612b07*/
      v8 = *(unsigned int *)(v8 + 516); /*0x612b09*/
    }
    while ( v8 ); /*0x612b11*/
  }
  else
  {
    v9 = (gamemd::AbstractClass **)((HWND)((gamemd::AbstractClass **)(hWnd)));
  }
  if ( Msg != 307 ) /*0x612b22*/
    return (HGDIOBJ)CallWindowProcA(v4, v9, Msg, (WPARAM)hdc, lParam); /*0x612b5b*/
  v10 = hdc; /*0x612b2a*/
  SetTextColor(hdc, dword_AC18A4); /*0x612b30*/
  SetBkMode(v10, 1); /*0x612b39*/
  return GetStockObject(5); /*0x612b47*/
}
}
// 0x61D6D0
namespace gamemd {
AbstractClass * * NetworkLobbyPaintProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  HWND v4; // ebp
  AbstractClass ** result;
  unsigned int *v6; // esi
  unsigned int v7; // eax
  int v8; // eax
  unsigned int *v9; // edi
  int v10; // ecx
  int v11; // eax
  unsigned int *v12; // ecx
  int v13; // eax
  struct tagRECT Rect; // [esp+18h] [ebp-30h] BYREF
  unsigned int v15[4]; // [esp+28h] [ebp-20h] BYREF
  unsigned int v16[2]; // [esp+38h] [ebp-10h] BYREF
  int v17; // [esp+40h] [ebp-8h]
  int v18; // [esp+44h] [ebp-4h]

  v4 = hWnd; /*0x61d6d4*/
  ScreenDialogToClient(hWnd, &Rect); /*0x61d6df*/
  hWnd = v4; /*0x61d6e9*/
  if ( !dword_AC1B04 ) /*0x61d6ef*/
    return 0; /*0x61d6ef*/
  result = *((unsigned int *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x61d714*/
  if ( !result ) /*0x61d719*/
    return 0; /*0x61d719*/
  while ( *(HWND *)result != hWnd ) /*0x61d725*/
  {
    result = (gamemd::AbstractClass **)((int)((gamemd::AbstractClass **)(*(unsigned int *)(result + 516))));
    if ( !result ) /*0x61d72f*/
      return result; /*0x61d72f*/
  }
  v6 = (unsigned int *)(result + 4); /*0x61d741*/
  if ( result == (gamemd::AbstractClass **)(-4) ) /*0x61d746*/
    return 0; /*0x61d746*/
  if ( a2 > 0x402 ) /*0x61d755*/
  {
    if ( a2 == 1175 ) /*0x61d938*/
      *(unsigned int *)(result + 240) = 100; /*0x61d93a*/
    return 0; /*0x61d945*/
  }
  switch ( a2 ) /*0x61d75b*/
  {
    case 0x402u: /*0x61d75b*/
      v13 = a3; /*0x61d8fc*/
      if ( a3 < v6[58] ) /*0x61d908*/
        v13 = v6[58]; /*0x61d90a*/
      if ( v13 > v6[59] ) /*0x61d914*/
        v13 = v6[59]; /*0x61d916*/
      v6[60] = v13; /*0x61d91d*/
      InvalidateRect(v4, 0, 0); /*0x61d923*/
      return 0; /*0x61d92a*/
    case 0xFu: /*0x61d75b*/
      v17 = Rect.right - Rect.left + 1; /*0x61d7ac*/
      v15[2] = v17; /*0x61d7b0*/
      v8 = *(unsigned int *)(result + 20); /*0x61d7b4*/
      v16[0] = 0; /*0x61d7ba*/
      v16[1] = 0; /*0x61d7c2*/
      v18 = Rect.bottom - Rect.top + 1; /*0x61d7ca*/
      v15[0] = Rect.left; /*0x61d7ce*/
      v15[1] = Rect.top; /*0x61d7d2*/
      v15[3] = v18; /*0x61d7d6*/
      if ( !v8 ) /*0x61d7da*/
      {
        v9 = (unsigned int *)(RA2_OPNEW(0x20u));
        if ( v9 ) /*0x61d7ee*/
        {
          v10 = (unsigned int)(Rect.bottom - Rect.top + 1);
          v11 = (unsigned int)(Rect.right - Rect.left);
          v9[2] = (unsigned int)(v10);
          ++v11; /*0x61d808*/
          v9[3] = 0; /*0x61d809*/
          v9[1] = v11; /*0x61d810*/
          *v9 = &XSurface_Vtable; /*0x61d81e*/
          v9[4] = 2; /*0x61d824*/
          Buffer::Init(v9 + 5, 0, 2 * v10 * v11); /*0x61d82b*/
          *v9 = &BSurface_Vtable; /*0x61d830*/
          v12 = v9; /*0x61d836*/
        }
        else
        {
          v12 = 0; /*0x61d83a*/
        }
        v6[4] = (unsigned int)(v12);
        ++g_GameScreenState; /*0x61d847*/
        (*(void (**)(unsigned int *, unsigned int *, int, unsigned int *, unsigned int, int))(*v12 + 8))( /*0x61d860*/
          v12,
          v16,
          DSurface_Alternate,
          v15,
          0,
          1);
      }
      (*(void (**)(int, unsigned int *, unsigned int, unsigned int *, unsigned int, int))(*(unsigned int *)DSurface_Alternate + 8))( /*0x61d87d*/
        DSurface_Alternate,
        v15,
        v6[4],
        v16,
        0,
        1);
      UI_Helper_6217E0(255 >> g_BitShift_Green_0 << g_BitShift_Red, (v6[60] << 16) / (v6[59] - v6[58])); /*0x61d8e3*/
      ValidateRect(v4, 0); /*0x61d8eb*/
      return 0; /*0x61d8f3*/
    case 0x401u: /*0x61d75b*/
      v7 = IDA_HIWORD(a4); /*0x61d77d*/
      v6[58] = (uint16_t)a4; /*0x61d780*/
      v6[59] = v7; /*0x61d786*/
      return 0; /*0x61d793*/
    default:
      return 0; /*0x61d76b*/
  }
}
}
// 0x61ECA0
namespace gamemd {
AbstractClass * * RenderDialogSurface(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  UINT v4; // edi
  LRESULT (__stdcall *v5)(HWND, UINT, WPARAM, LPARAM); // esi
  AbstractClass ** v6;
  HWND v7; // ecx
  LRESULT (__stdcall **v8)(HWND, UINT, WPARAM, LPARAM); // eax
  AbstractClass ** result;
  AbstractClass ** v10;
  unsigned int *v11; // esi
  int v12; // eax
  int v13; // ecx
  unsigned int *v14; // ecx
  LRESULT v15; // eax
  int v16; // eax
  struct tagRECT Rect; // [esp+28h] [ebp-B4h] BYREF
  HWND v18; // [esp+38h] [ebp-A4h] BYREF
  int v19[2]; // [esp+3Ch] [ebp-A0h] BYREF
  int v20; // [esp+44h] [ebp-98h]
  int v21; // [esp+48h] [ebp-94h]
  unsigned int v22[4]; // [esp+4Ch] [ebp-90h] BYREF
  wchar_t String[64]; // [esp+5Ch] [ebp-80h] BYREF

  v4 = Msg; /*0x61eca8*/
  switch ( Msg ) /*0x61ecb4*/
  {
    case 0xFu: /*0x61ecb4*/
      ScreenDialogToClient(hWnd, &Rect); /*0x61ed69*/
      v19[0] = Rect.left; /*0x61ed7a*/
      v20 = Rect.right - Rect.left + 1; /*0x61ed88*/
      v22[2] = v20; /*0x61ed8c*/
      v21 = Rect.bottom - Rect.top + 1; /*0x61ed95*/
      v22[3] = v21; /*0x61ed99*/
      v19[1] = Rect.top; /*0x61eda4*/
      v22[0] = 0; /*0x61edaa*/
      v22[1] = 0; /*0x61edb2*/
      v18 = hWnd; /*0x61edba*/
      if ( dword_AC1B04 ) /*0x61edbe*/
      {
        result = *((unsigned int *)dword_AC1B00 + (dword_AC1B18(&v18) & ((1 << dword_AC1B0C) - 1))); /*0x61ede3*/
        if ( result ) /*0x61ede8*/
        {
          while ( *(HWND *)result != v18 ) /*0x61edf4*/
          {
            result = (gamemd::AbstractClass **)((int)((gamemd::AbstractClass **)(*(unsigned int *)(result + 516))));
            if ( !result ) /*0x61edfe*/
              return result; /*0x61edfe*/
          }
          v10 = (gamemd::AbstractClass **)((int)(result + 4));
          if ( result != (gamemd::AbstractClass **)(-4) ) /*0x61ee18*/
          {
            if ( !*(unsigned int *)(result + 20) ) /*0x61ee1e*/
            {
              v11 = (unsigned int *)(RA2_OPNEW(0x20u));
              if ( v11 ) /*0x61ee33*/
              {
                v12 = (unsigned int)(v21);
                v13 = (unsigned int)(v20);
                v11[2] = (unsigned int)(v21);
                v11[1] = (unsigned int)(v13);
                v11[3] = (unsigned int)(0);
                *v11 = (unsigned int)(&XSurface_Vtable);
                v11[4] = (unsigned int)(2);
                Buffer::Init(v11 + 5, 0, 2 * v13 * v12); /*0x61ee62*/
                *v11 = &BSurface_Vtable; /*0x61ee67*/
                v14 = v11; /*0x61ee6d*/
              }
              else
              {
                v14 = (unsigned int)(0);
              }
              *(unsigned int *)(v10 + 16) = v14; /*0x61ee73*/
              ++g_GameScreenState; /*0x61ee7e*/
              (*(void (**)(unsigned int *, unsigned int *, int, int *, unsigned int, int))(*v14 + 8))( /*0x61ee97*/
                v14,
                v22,
                DSurface_Alternate,
                v19,
                0,
                1);
            }
            v15 = SendMessageA(hWnd, 0x402u, 0, 0); /*0x61eeab*/
            FormatHotkeyDisplayString(v15, String); /*0x61eeb7*/
            v16 = *(unsigned int *)(v10 + 16); /*0x61eebc*/
            if ( v16 ) /*0x61eec1*/
              (*(void (**)(int, int *, int, unsigned int *, unsigned int, int))(*(unsigned int *)DSurface_Alternate + 8))( /*0x61eeda*/
                DSurface_Alternate,
                v19,
                v16,
                v22,
                0,
                1);
            DrawDialogGradient((int *)DSurface_Alternate, v19, 2, -1); /*0x61eeeb*/
            if ( wcslen(String) ) /*0x61eef5*/
            {
              Rect.left += 4; /*0x61ef16*/
              Rect.right -= 4; /*0x61ef22*/
              Rect.top += 4; /*0x61ef2c*/
              Rect.bottom -= 4; /*0x61ef30*/
              Surface_Render((int)&Rect, *(unsigned int *)(v10 + 100), dword_AC18A4, 36); /*0x61ef4a*/
            }
            ValidateRect(hWnd, 0); /*0x61ef59*/
          }
        }
      }
      return (gamemd::AbstractClass **)((gamemd::AbstractClass **)((gamemd::AbstractClass **)(0)));
    case 0x14u: /*0x61ecb4*/
      return 1; /*0x61ed5b*/
    case 0x85u: /*0x61ecb4*/
      return 0; /*0x61ecc6*/
  }
  v5 = 0; /*0x61ecd1*/
  if ( dword_AC1B4C && (v6 = *((unsigned int *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1)))) != 0 ) /*0x61ecfe*/
  {
    v7 = hWnd; /*0x61ed00*/
    while ( *(HWND *)v6 != hWnd ) /*0x61ed09*/
    {
      v6 = (gamemd::AbstractClass **)((int)((gamemd::AbstractClass **)(*(unsigned int *)(v6 + 8))));
      if ( !v6 ) /*0x61ed10*/
        return CallWindowProcA(v5, v7, v4, wParam, lParam); /*0x61ed10*/
    }
    v8 = (LRESULT (**)(HWND, UINT, WPARAM, LPARAM))(v6 + 4); /*0x61ed18*/
    if ( v8 ) /*0x61ed1d*/
      v5 = *v8; /*0x61ed1f*/
  }
  else
  {
    v7 = hWnd; /*0x61ed23*/
  }
  return (gamemd::AbstractClass **)(CallWindowProcA(v5, v7, v4, wParam, lParam));
}
}
// 0x61EF70
namespace gamemd {
void FormatHotkeyDisplayString(void * a1, void * a2)
{
  int result; // eax
  void * v3;
  UINT v4; // eax
  UINT v5; // eax
  UINT v6; // eax
  void * v7;
  CHAR String[32]; // [esp+Ch] [ebp-214h] BYREF
  wchar_t Format[250]; // [esp+2Ch] [ebp-1F4h] BYREF

  result = IDA_HIBYTE(a1); /*0x61ef7c*/
  v3 = a1; /*0x61ef84*/
  IDA_LOBYTE(Format[0]) = 0; /*0x61ef88*/
  *(unsigned int *)(a2) = 0; /*0x61ef8d*/
  if ( ((unsigned int)(a1)& 0x800) == 0 ) /*0x61ef92*/
  {
    if ( ((unsigned int)(a1)& 0x400) != 0 ) /*0x61efaa*/
    {
      v4 = (unsigned char)(MapVirtualKeyA(0x12u, 0));
      GetKeyNameTextA((v4 << 16) | 0x2000001, String, 32); /*0x61efc2*/
      strcat((char *)Format, String); /*0x61efe8*/
      strcat((char *)Format, asc_835A34); /*0x61f014*/
      IDA_LOBYTE(result) = IDA_HIBYTE(v3); /*0x61f016*/
      IDA_LOBYTE(a1) = v3; /*0x61f021*/
    }
    if ( (result & 2) != 0 ) /*0x61f027*/
    {
      v5 = (unsigned char)(MapVirtualKeyA(0x11u, 0));
      GetKeyNameTextA((v5 << 16) | 0x2000001, String, 32); /*0x61f03f*/
      strcat((char *)Format, String); /*0x61f065*/
      strcat((char *)Format, asc_835A34); /*0x61f091*/
      IDA_LOBYTE(result) = IDA_HIBYTE(v3); /*0x61f093*/
      IDA_LOBYTE(a1) = v3; /*0x61f09e*/
    }
    if ( (result & 1) != 0 ) /*0x61f0a4*/
    {
      v6 = (unsigned char)(MapVirtualKeyA(0x10u, 0));
      GetKeyNameTextA((v6 << 16) | 0x2000001, String, 32); /*0x61f0bc*/
      strcat((char *)Format, String); /*0x61f0e2*/
      strcat((char *)Format, asc_835A34); /*0x61f10e*/
      IDA_LOBYTE(a1) = v3; /*0x61f117*/
    }
    v7 = (void *)(MapVirtualKeyA((uint8_t)a1, 0));
    GetKeyNameTextA(((unsigned int)(v7)<< 16) | 0x2000001, String, 32); /*0x61f136*/
    strcat((char *)Format, String); /*0x61f15c*/
    return swprintf(a2, (const size_t)g_Str_Trace__hs, Format); /*0x61f174*/
  }
  return result; /*0x61f180*/
}
}
// 0x61F210
namespace gamemd {
char Dialog_InitCountryIcons(int a1, int a2)
{

  LoadPaletteFromFile((int)g_DialogHashTable, a2, DataGlobal_833654, 2, 0);
  int v2; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v2, DataGlobal_008363C4, 2, 0);
  int v3; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v3, DataGlobal_008363B8, 2, 0);
  int v4; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v4, DataGlobal_008363AC, 2, 0);
  int v5; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v5, g_Str_File_usai_pcx, 2, 0);
  int v6; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v6, g_Str_File_japi_pcx, 2, 0);
  int v7; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v7, g_Str_File_frai_pcx, 2, 0);
  int v8; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v8, g_Str_File_geri_pcx, 2, 0);
  int v9; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v9, g_Str_File_gbri_pcx, 2, 0);
  int v10; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v10, g_Str_File_djbi_pcx, 2, 0);
  int v11; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v11, g_Str_File_arbi_pcx, 2, 0);
  int v12; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v12, g_Str_File_lati_pcx, 2, 0);
  int v13; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v13, g_Str_File_rusi_pcx, 2, 0);
  int v14; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v14, DataGlobal_00836334, 2, 0);
  int v15; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v15, DataGlobal_00836328, 2, 0);
  int v16; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v16, DataGlobal_00836318, 2, 0);
  int v17; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v17, DataGlobal_00836308, 2, 0);
  int v18; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v18, DataGlobal_008362F8, 2, 0);
  int v19; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v19, DataGlobal_008362E8, 2, 0);
  int v20; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v20, DataGlobal_008362DC, 2, 0);
  int v21; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v21, DataGlobal_008362CC, 2, 0);
  int v22; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v22, DataGlobal_00835A00, 2, 0);
  int v23; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v23, DataGlobal_008359C8, 2, 0);
  int v24; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v24, DataGlobal_008359E4, 2, 0);
  int v25; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v25, DataGlobal_008359AC, 2, 0);
  int v26; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v26, DataGlobal_008359D4, 2, 0);
  int v27; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v27, DataGlobal_008359F0, 2, 0);
  int v28; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v28, DataGlobal_008359B8, 2, 0);
  int v29; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v29, DataGlobal_008362C0, 2, 0);
  int v30; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v30, DataGlobal_008362B4, 2, 0);
  int v31; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v31, DataGlobal_008362A8, 2, 0);
  int v32; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v32, DataGlobal_0083629C, 2, 0);
  int v33; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v33, DataGlobal_00836290, 1, 0);
  UI_Init_6BA120(DataGlobal_00836284);
  int v34; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v34, DataGlobal_00836278, 2, 0);
  int v35; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v35, DataGlobal_0083626C, 2, 0);
  int v36; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v36, DataGlobal_0083625C, 2, 0);
  int v37; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v37, DataGlobal_0083624C, 2, 0);
  int v38; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v38, DataGlobal_0083623C, 2, 0);
  int v39; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v39, DataGlobal_0083622C, 2, 0);
  int v40; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v40, DataGlobal_00836220, 2, 0);
  int v41; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v41, DataGlobal_00836214, 2, 0);
  int v42; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v42, DataGlobal_00836208, 2, 0);
  int v43; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v43, DataGlobal_008361FC, 2, 0);
  int v44; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v44, DataGlobal_008361F0, 2, 0);
  int v45; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v45, DataGlobal_008361E4, 2, 0);
  int v46; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v46, DataGlobal_008361D8, 2, 0);
  int v47; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v47, DataGlobal_008361CC, 2, 0);
  int v48; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v48, DataGlobal_008361C0, 2, 0);
  int v49; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v49, DataGlobal_008361B4, 2, 0);
  int v50; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v50, DataGlobal_008361A8, 2, 0);
  int v51; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v51, DataGlobal_0083619C, 2, 0);
  int v52; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v52, DataGlobal_00836190, 2, 0);
  int v53; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v53, DataGlobal_00836184, 2, 0);
  int v54; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v54, DataGlobal_00836174, 2, 0);
  int v55; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v55, DataGlobal_00836164, 2, 0);
  int v56; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v56, g_Str_File_wouact_pcx, 2, 0);
  int v57; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v57, g_Str_File_wodact_pcx, 2, 0);
  int v58; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v58, g_Str_File_wouref_pcx, 2, 0);
  int v59; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v59, g_Str_File_wodref_pcx, 2, 0);
  int v60; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v60, g_Str_File_tab_tlu_pcx, 2, 0);
  int v61; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v61, DataGlobal_00836128, 2, 0);
  int v62; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v62, DataGlobal_0083611C, 2, 0);
  int v63; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v63, DataGlobal_00836110, 2, 0);
  int v64; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v64, DataGlobal_00836104, 2, 0);
  int v65; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v65, DataGlobal_008360F8, 2, 0);
  int v66; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v66, DataGlobal_00835908, 2, 0);
  int v67; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v67, DataGlobal_008358FC, 2, 0);
  int v68; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v68, DataGlobal_00835920, 2, 0);
  int v69; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v69, DataGlobal_008358E4, 2, 0);
  int v70; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v70, DataGlobal_008358F0, 2, 0);
  int v71; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v71, DataGlobal_00835914, 2, 0);
  int v72; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v72, DataGlobal_0083592C, 2, 0);
  int v73; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v73, DataGlobal_00835938, 2, 0);
  int v74; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v74, DataGlobal_008360EC, 2, 0);
  int v75; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v75, DataGlobal_008360DC, 2, 0);
  int v76; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v76, g_Str_File_woltrny_pcx, 2, 0);
  int v77; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v77, DataGlobal_008360C4, 2, 0);
  int v78; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v78, DataGlobal_008360B4, 2, 0);
  int v79; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v79, g_Str_File_wolpriv_pcx, 2, 0);
  int v80; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v80, g_Str_File_wolacpt_pcx, 2, 0);
  int v81; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v81, g_Str_File_wolhost_pcx, 2, 0);
  int v82; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v82, g_Str_File_wolclan_pcx, 2, 0);
  int v83; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v83, g_Str_File_wolob_pcx, 2, 0);
  int v84; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v84, DataGlobal_831DD0, 2, 0);
  int v85; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v85, g_Str_File_wolrslkob_pcx, 2, 0);
  int v86; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v86, DataGlobal_0083607C, 2, 0);
  int v87; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v87, g_Str_File_gt18_pcx, 2, 0);
  int v88; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v88, DataGlobal_00836064, 2, 0);
  int v89; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v89, DataGlobal_00836054, 2, 0);
  int v90; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v90, DataGlobal_00836044, 2, 0);
  int v91; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v91, DataGlobal_00836034, 2, 0);
  int v92; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v92, DataGlobal_00836028, 2, 0);
  int v93; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v93, DataGlobal_0083601C, 2, 0);
  int v94; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v94, DataGlobal_00836010, 2, 0);
  int v95; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v95, DataGlobal_00836000, 2, 0);
  int v96; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v96, DataGlobal_00835FF4, 2, 0);
  int v97; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v97, g_Str_File_comchief_pcx, 2, 0);
  int v98; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v98, g_Str_File_cooperat_pcx, 2, 0);
  int v99; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v99, g_Str_File_number0_pcx, 2, 0);
  int v100; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v100, g_Str_File_number1_pcx, 2, 0);
  int v101; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v101, DataGlobal_00835FB0, 2, 0);
  int v102; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v102, DataGlobal_00835FA4, 2, 0);
  int v103; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v103, DataGlobal_00835F98, 2, 0);
  int v104; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v104, DataGlobal_00835F8C, 2, 0);
  int v105; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v105, DataGlobal_00835F80, 2, 0);
  int v106; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v106, DataGlobal_00835F74, 2, 0);
  int v107; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v107, DataGlobal_00835F68, 2, 0);
  int v108; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v108, DataGlobal_00835F5C, 2, 0);
  int v109; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v109, DataGlobal_00835F4C, 2, 0);
  int v110; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v110, DataGlobal_00835F3C, 2, 0);
  int v111; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v111, DataGlobal_00835F2C, 2, 0);
  int v112; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v112, DataGlobal_00835F1C, 2, 0);
  int v113; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v113, DataGlobal_00835F0C, 2, 0);
  int v114; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v114, DataGlobal_00835EFC, 2, 0);
  int v115; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v115, DataGlobal_00835EEC, 2, 0);
  int v116; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v116, DataGlobal_00835EDC, 2, 0);
  int v117; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v117, DataGlobal_00835A1C, 2, 0);
  int v118; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v118, DataGlobal_00835A28, 2, 0);
  int v119; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v119, DataGlobal_00835A10, 2, 0);
  int v120; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v120, DataGlobal_00835ECC, 2, 0);
  int v121; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v121, DataGlobal_00835EBC, 2, 0);
  int v122; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v122, DataGlobal_00835EAC, 2, 0);
  int v123; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v123, DataGlobal_00835E9C, 2, 0);
  int v124; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v124, DataGlobal_00835E8C, 2, 0);
  int v125; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v125, DataGlobal_00835E7C, 2, 0);
  int v126; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v126, DataGlobal_00835E6C, 2, 0);
  int v127; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v127, DataGlobal_00835E5C, 2, 0);
  int v128; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v128, DataGlobal_00835E50, 2, 0);
  int v129; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v129, DataGlobal_00835998, 2, 0);
  int v130; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v130, DataGlobal_00835E44, 2, 0);
  int v131; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v131, DataGlobal_00835974, 2, 0);
  int v132; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v132, DataGlobal_00835980, 2, 0);
  int v133; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v133, DataGlobal_0083598C, 2, 0);
  int v134; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v134, DataGlobal_00835E34, 2, 0);
  int v135; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v135, DataGlobal_00835E24, 2, 0);
  int v136; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v136, DataGlobal_00835E14, 2, 0);
  int v137; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v137, DataGlobal_00835E04, 2, 0);
  int v138; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v138, DataGlobal_00835DF4, 2, 0);
  int v139; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v139, DataGlobal_00835DE4, 2, 0);
  int v140; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v140, DataGlobal_00835DD4, 2, 0);
  int v141; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v141, DataGlobal_00835DC4, 2, 0);
  int v142; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v142, DataGlobal_00835DB4, 2, 0);
  int v143; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v143, DataGlobal_00835DA4, 2, 0);
  int v144; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v144, DataGlobal_00835D94, 2, 0);
  int v145; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v145, DataGlobal_00835D84, 2, 0);
  int v146; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v146, DataGlobal_00835D74, 2, 0);
  int v147; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v147, DataGlobal_00835D64, 2, 0);
  int v148; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v148, DataGlobal_00835D54, 2, 0);
  int v149; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v149, DataGlobal_00835D44, 2, 0);
  int v150; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v150, DataGlobal_00835D34, 2, 0);
  int v151; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v151, DataGlobal_00835D24, 2, 0);
  int v152; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v152, g_Str_File_wolreslk_pcx, 2, 0);
  int v153; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v153, DataGlobal_00835D04, 2, 0);
  int v154; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v154, DataGlobal_00835CF4, 2, 0);
  int v155; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v155, DataGlobal_00835CE4, 2, 0);
  int v156; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v156, DataGlobal_00835CD4, 2, 0);
  int v157; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v157, DataGlobal_00835CC4, 2, 0);
  int v158; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v158, DataGlobal_00835CB4, 2, 0);
  int v159; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v159, g_Str_File_pingg_pcx, 2, 0);
  int v160; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v160, g_Str_File_pingy_pcx, 2, 0);
  int v161; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v161, g_Str_File_pingr_pcx, 2, 0);
  int v162; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v162, DataGlobal_00835C7C, 2, 0);
  int v163; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v163, DataGlobal_00835C68, 2, 0);
  int v164; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v164, DataGlobal_00835C54, 2, 0);
  int v165; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v165, DataGlobal_00835C40, 2, 0);
  int v166; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v166, DataGlobal_00835C2C, 2, 0);
  int v167; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v167, DataGlobal_00835C18, 2, 0);
  int v168; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v168, DataGlobal_00835C04, 2, 0);
  int v169; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v169, DataGlobal_00835BF0, 2, 0);
  int v170; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v170, DataGlobal_00835BDC, 2, 0);
  int v171; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v171, DataGlobal_00835BC8, 2, 0);
  int v172; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v172, DataGlobal_00835BB4, 2, 0);
  int v173; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v173, DataGlobal_00835BA0, 2, 0);
  int v174; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v174, DataGlobal_00835B8C, 2, 0);
  int v175; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v175, DataGlobal_00835B78, 2, 0);
  int v176; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v176, DataGlobal_00835B64, 2, 0);
  int v177; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v177, DataGlobal_00835B50, 2, 0);
  int v178; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v178, DataGlobal_00835B3C, 2, 0);
  int v179; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v179, DataGlobal_00835B28, 2, 0);
  int v180; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v180, DataGlobal_00835B14, 2, 0);
  int v181; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v181, DataGlobal_00835B00, 2, 0);
  int v182; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v182, DataGlobal_00835AEC, 2, 0);
  int v183; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v183, DataGlobal_00835AD8, 2, 0);
  int v184; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v184, DataGlobal_00835AC4, 2, 0);
  int v185; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v185, DataGlobal_00835AB0, 2, 0);
  int v186; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v186, DataGlobal_00835A9C, 2, 0);
  int v187; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v187, DataGlobal_00835A88, 2, 0);
  int v188; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v188, DataGlobal_00835A74, 2, 0);
  int v189; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v189, DataGlobal_00835A60, 2, 0);
  int v190; // edx
  LoadPaletteFromFile((int)g_DialogHashTable, v190, DataGlobal_00835A4C, 2, 0);
  int v191; // edx
  return LoadPaletteFromFile((int)g_DialogHashTable, v191, DataGlobal_00835A38, 2, 0);
}
} // namespace gamemd

// 0x6107A0
namespace gamemd {
int sub_6107A0()
{
  dword_AC1CB8 = 0u; /*0x6107a2*/
  dword_AC1CC8 = 0; /*0x6107b6*/
  word_AC1CCC = 0; /*0x6107bb*/
  dword_AC1DCC = 0; /*0x6107c1*/
  dword_AC1DD0 = 0; /*0x6107c6*/
  dword_AC1DD4 = 0; /*0x6107cb*/
  return 0; /*0x6107d0*/
}
} // namespace gamemd

// 0x6107E0
namespace gamemd {
unsigned int * E4Recv_6107E0::sub_6107E0()
{

  this->AbstractClass = 0; /*0x6107e4*/
  ((unsigned int *)this)[0] = 0; /*0x6107e6*/
  ((unsigned int *)this)[0] = 0; /*0x6107e9*/
  ((unsigned int *)this)[0] = 0; /*0x6107ec*/
  ((unsigned int *)this)[0] = 0; /*0x6107ef*/
  LOWORD(((unsigned int *)this)[0]) = 0; /*0x6107f2*/
  *((unsigned int *)this + 69) = 0; /*0x6107f6*/
  *((unsigned int *)this + 70) = 0; /*0x6107fc*/
  *((unsigned int *)this + 71) = 0; /*0x610802*/
  return &this->AbstractClass; /*0x610808*/

}
} // namespace gamemd

// 0x612910
namespace gamemd {
void sub_612910()
{
  dword_AC1DE0 = 0; /*0x612915*/
  RA2_OPDEL(dword_AC1DE8); /*0x612920*/
}
} // namespace gamemd
