// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6107E0_e4.hpp"

// 0x610570
namespace gamemd {
BOOL DestroyDialogChildWindow(HWND hWnd, LPARAM a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall DestroyDialogChildWindow(HWND hWnd, LPARAM a2)
{
  void *v2; // eax
  void *v3; // eax
  _DWORD *v4; // ecx
  _DWORD *v5; // edx
  _DWORD *v6; // eax
  int v7; // esi
  HWND *v8; // ecx
  HWND v9; // edi
  double v10; // st7
  HWND *v11; // eax
  void *WindowLongA; // eax
  __int64 v14; // [esp+8h] [ebp-208h] BYREF
  void *v15[128]; // [esp+10h] [ebp-200h] BYREF

  DynamicArray::Resize(&MEMORY[0xAC1B48], (int *)&hWnd, &v14); /*0x61058a*/
  memset(v15, 0, sizeof(v15)); /*0x6105a0*/
  v15[26] = (void *)11; /*0x6105a4*/
  v15[25] = (void *)aP0; /*0x6105ac*/
  v2 = __2_YAPAXI_Z(4u); /*0x6105b0*/
  if ( v2 ) /*0x6105bc*/
    v3 = (void *)unknown_libname_74(v2); /*0x6105c0*/
  else
    v3 = 0; /*0x6105c7*/
  v15[15] = v3; /*0x6105c9*/
  v15[16] = 0; /*0x6105df*/
  v15[23] = 0; /*0x6105e3*/
  v15[36] = (void *)-1; /*0x6105e7*/
  Dialog::BindGadgetData(&MEMORY[0xAC1B00], (int *)&hWnd, (char *)v15); /*0x6105f2*/
  if ( v15[10] ) /*0x6105fd*/
  {
    __3_YAXPAX_Z(v15[10]); /*0x610600*/
    v15[10] = 0; /*0x610608*/
  }
  v4 = v15[13]; /*0x61060c*/
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
        v6 = (_DWORD *)*v6; /*0x610622*/
        if ( !v6 ) /*0x610626*/
          goto LABEL_16; /*0x610626*/
      }
      if ( v6 ) /*0x61062c*/
      {
        if ( v5 ) /*0x610630*/
          *v5 = *v6; /*0x610634*/
        else
          v15[13] = *(void **)v6; /*0x61063a*/
        __3_YAXPAX_Z(v6); /*0x61063f*/
        v4 = v15[13]; /*0x610644*/
      }
LABEL_16:
      ;
    }
    while ( v4 ); /*0x61064d*/
  }
  if ( v15[15] ) /*0x610655*/
    DeleteAndZero::OrFree((void **)v15[15], 1); /*0x610659*/
  if ( MEMORY[0xAC18C4] ) /*0x610666*/
  {
    v14 = (unsigned int)(MEMORY[0xAC18C4] - 1); /*0x610671*/
    *(float *)&v14 = (double)v14 / (double)MEMORY[0xAC18C8]; /*0x610691*/
    v7 = MEMORY[0xAC18D8](&hWnd) & ((1 << MEMORY[0xAC18CC]) - 1); /*0x6106af*/
    v8 = (HWND *)*((_DWORD *)MEMORY[0xAC18C0] + v7); /*0x6106b1*/
    if ( v8 ) /*0x6106b6*/
    {
      if ( *v8 == hWnd ) /*0x6106c7*/
      {
        v9 = v8[2]; /*0x6106c9*/
        __3_YAXPAX_Z(*((void **)MEMORY[0xAC18C0] + v7)); /*0x6106cd*/
        v10 = *(float *)&v14; /*0x6106db*/
        *((_DWORD *)MEMORY[0xAC18C0] + v7) = v9; /*0x6106df*/
        --MEMORY[0xAC18C4]; /*0x6106ee*/
        if ( v10 > MEMORY[0xAC18E0] ) /*0x6106f8*/
          goto LABEL_31; /*0x6106f8*/
        goto LABEL_30; /*0x6106f8*/
      }
      v11 = (HWND *)v8[2]; /*0x6106fc*/
      if ( v11 ) /*0x610701*/
      {
        while ( *v11 != hWnd ) /*0x610705*/
        {
          v8 = v11; /*0x610707*/
          v11 = (HWND *)v11[2]; /*0x610709*/
          if ( !v11 ) /*0x61070e*/
            goto LABEL_29; /*0x61070e*/
        }
        v8[2] = v11[2]; /*0x610716*/
        --MEMORY[0xAC18C4]; /*0x610720*/
        __3_YAXPAX_Z(v11); /*0x610726*/
      }
LABEL_29:
      if ( *(float *)&v14 <= MEMORY[0xAC18E0] ) /*0x61073d*/
LABEL_30:
        HashTable::Shrink2(&MEMORY[0xAC18C0]); /*0x61073f*/
    }
  }
LABEL_31:
  WindowLongA = (void *)GetWindowLongA(hWnd, -21); /*0x610749*/
  if ( WindowLongA ) /*0x61075c*/
    __3_YAXPAX_Z(WindowLongA); /*0x61075f*/
  SetWindowLongA(hWnd, -21, 0); /*0x610772*/
  Object::RemoveObjectArray(hWnd); /*0x61077f*/
  return 1; /*0x610784*/
}
}
} // namespace gamemd

// 0x610810
namespace gamemd {
char sub_610810(int a1, const wchar_t * a2, CoordStruct * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_610810(int a1, const wchar_t *a2, CoordStruct *a3)
{
  wchar_t *StringCSF; // eax
  CoordStruct *v6; // ecx
  const wchar_t *v8; // [esp+0h] [ebp-30h]
  CampaignScore *v9; // [esp+4h] [ebp-2Ch]
  _DWORD v10[2]; // [esp+10h] [ebp-20h] BYREF
  __int64 v11; // [esp+18h] [ebp-18h]
  _QWORD v12[2]; // [esp+20h] [ebp-10h] BYREF

  if ( *(&g_MatrixTransformState + 3055) ) /*0x610829*/
  {
    if ( *(&g_MatrixTransformState + 3056) != (CoordStruct *)1 ) /*0x610835*/
    {
      if ( !*(&g_MatrixTransformState + 2990) ) /*0x61083f*/
      {
LABEL_7:
        *(&g_MatrixTransformState + 2990) = 0; /*0x6108a9*/
        *(_QWORD *)(&g_MatrixTransformState + 3055) = 0; /*0x6108af*/
        goto LABEL_8; /*0x6108af*/
      }
      v12[0] = *((_QWORD *)&g_MatrixTransformState + 1493); /*0x61085b*/
      v12[1] = *(_QWORD *)&(&g_MatrixTransformState)[249]; /*0x610875*/
      v10[0] = 0; /*0x610879*/
      v10[1] = 0; /*0x61087d*/
      v11 = *(_QWORD *)&(&g_MatrixTransformState)[249]; /*0x610881*/
      (*(void (__thiscall **)(_DWORD, _QWORD *, _DWORD, _DWORD *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22520] /*0x61088c*/
                                                                              + 8))(
        *(_DWORD *)&stru_87C374.__pad_579C[22520],
        v12,
        *(&g_MatrixTransformState + 2990),
        v10,
        0,
        1);
      *(&g_MatrixTransformState + 3056) = (CoordStruct *)1; /*0x610894*/
    }
    if ( *(&g_MatrixTransformState + 2990) ) /*0x6108a2*/
      (*(void (__thiscall **)(_DWORD, int))(*(&g_MatrixTransformState + 2990))->X)(*(&g_MatrixTransformState + 2990), 1); /*0x6108a7*/
    goto LABEL_7; /*0x6108a7*/
  }
LABEL_8:
  *(&g_MatrixTransformState + 5810) = (CoordStruct *)time(0); /*0x6108bb*/
  StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[15768], 0, &stru_830620.__pad_14B0[7264], 7457); /*0x6108da*/
  swprintf((wchar_t *const)&g_MatrixTransformState + 5982, (const size_t)StringCSF, v8, v9); /*0x6108e5*/
  if ( a2 ) /*0x6108ef*/
    wcscpy((wchar_t *)&g_MatrixTransformState + 5982, a2); /*0x6108f7*/
  *((_QWORD *)&g_MatrixTransformState + 1493) = *(_QWORD *)a1; /*0x610901*/
  *(&g_MatrixTransformState + 2988) = *(CoordStruct **)(a1 + 8); /*0x610917*/
  v6 = *(CoordStruct **)(a1 + 12); /*0x61091c*/
  *(&g_MatrixTransformState + 3055) = (CoordStruct *)1; /*0x61091f*/
  *(&g_MatrixTransformState + 2989) = v6; /*0x610925*/
  *(&g_MatrixTransformState + 3057) = a3; /*0x61092d*/
  return TriggerClass::FindByEventType(1); /*0x610938*/
}
}
} // namespace gamemd

// 0x610B50
namespace gamemd {
char sub_610B50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_610B50()
{
  _DWORD v1[2]; // [esp+4h] [ebp-20h] BYREF
  __int64 v2; // [esp+Ch] [ebp-18h]
  __int128 v3; // [esp+14h] [ebp-10h] BYREF

  if ( !MEMORY[0xAC1DCC] ) /*0x610b5d*/
    return 0; /*0x610b5f*/
  if ( MEMORY[0xAC1DD0] == 1 ) /*0x610b6d*/
    return 0; /*0x610b6f*/
  if ( !MEMORY[0xAC1CC8] ) /*0x610b7e*/
    return 0; /*0x610b80*/
  v1[0] = 0; /*0x610b9e*/
  v1[1] = 0; /*0x610ba2*/
  v3 = MEMORY[0xAC1CB8]; /*0x610bab*/
  v2 = *((_QWORD *)&MEMORY[0xAC1CB8] + 1); /*0x610bc8*/
  (*(void (__thiscall **)(int, __int128 *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x610bd3*/
    MEMORY[0x887308],
    &v3,
    MEMORY[0xAC1CC8],
    v1,
    0,
    1);
  MEMORY[0xAC1DD0] = 1; /*0x610bd6*/
  return 1; /*0x610b61*/
}
}
} // namespace gamemd

// 0x610BF0
namespace gamemd {
char sub_610BF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_610BF0()
{
  _DWORD v1[2]; // [esp+4h] [ebp-20h] BYREF
  __int64 v2; // [esp+Ch] [ebp-18h]
  __int128 v3; // [esp+14h] [ebp-10h] BYREF

  if ( !MEMORY[0xAC1DCC] ) /*0x610bfd*/
    return 0; /*0x610c05*/
  if ( MEMORY[0xAC1DD0] == 1 ) /*0x610c0d*/
    goto LABEL_6; /*0x610c0d*/
  if ( MEMORY[0xAC1CC8] ) /*0x610c17*/
  {
    v3 = MEMORY[0xAC1CB8]; /*0x610c35*/
    v1[0] = 0; /*0x610c53*/
    v1[1] = 0; /*0x610c57*/
    v2 = *((_QWORD *)&MEMORY[0xAC1CB8] + 1); /*0x610c5b*/
    (*(void (__thiscall **)(int, __int128 *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x610c66*/
      MEMORY[0x887308],
      &v3,
      MEMORY[0xAC1CC8],
      v1,
      0,
      1);
    MEMORY[0xAC1DD0] = 1; /*0x610c69*/
LABEL_6:
    if ( MEMORY[0xAC1CC8] ) /*0x610c7c*/
      (**(void (__thiscall ***)(int, int))MEMORY[0xAC1CC8])(MEMORY[0xAC1CC8], 1); /*0x610c82*/
  }
  MEMORY[0xAC1CC8] = 0; /*0x610c84*/
  MEMORY[0xAC1DCC] = 0; /*0x610c8a*/
  MEMORY[0xAC1DD0] = 0; /*0x610c90*/
  return 1; /*0x610c01*/
}
}
} // namespace gamemd

// 0x612930
namespace gamemd {
void sub_612930()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_612930()
{
  unsigned int v0; // eax
  unsigned int i; // edi
  _DWORD *v2; // esi
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

  v0 = MEMORY[0xAC1860]; /*0x612930*/
  for ( i = 0; i < MEMORY[0xAC1860]; v0 = MEMORY[0xAC1860] ) /*0x61293d*/
  {
    v2 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1858] + i); /*0x612944*/
    while ( v2 ) /*0x612949*/
    {
      v3 = v2; /*0x61294b*/
      v2 = (_DWORD *)v2[3]; /*0x61294d*/
      __3_YAXPAX_Z(v3); /*0x612951*/
    }
    *((_DWORD *)MEMORY[0xAC1858] + i++) = 0; /*0x612964*/
  }
  v4 = MEMORY[0xAC1888]; /*0x612975*/
  MEMORY[0xAC185C] = 0; /*0x61297b*/
  if ( v0 > MEMORY[0xAC1888] ) /*0x612987*/
  {
    do /*0x612a3a*/
    {
      if ( MEMORY[0xAC186C] || v0 <= v4 ) /*0x61299d*/
        break; /*0x61299d*/
      v5 = (int *)MEMORY[0xAC1858]; /*0x6129a9*/
      v6 = v0; /*0x6129af*/
      MEMORY[0xAC1860] = v0 >> 1; /*0x6129b4*/
      --MEMORY[0xAC1864]; /*0x6129c0*/
      MEMORY[0xAC1858] = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x6129d9*/
      memset(MEMORY[0xAC1858], 0, 4 * MEMORY[0xAC1860]); /*0x6129e1*/
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
              v10 = MEMORY[0xAC1870](v9) & ((1 << MEMORY[0xAC1864]) - 1); /*0x612a05*/
              v11 = *((_DWORD *)MEMORY[0xAC1858] + v10); /*0x612a0c*/
              *((_DWORD *)MEMORY[0xAC1858] + v10) = v9; /*0x612a0f*/
              v12 = *(_DWORD *)(v9 + 12); /*0x612a12*/
              *(_DWORD *)(v9 + 12) = v11; /*0x612a15*/
              v9 = v12; /*0x612a1a*/
            }
            while ( v12 ); /*0x612a1c*/
          }
          ++v7; /*0x612a1e*/
          --v8; /*0x612a21*/
        }
        while ( v8 ); /*0x612a22*/
      }
      __3_YAXPAX_Z(v5); /*0x612a25*/
      v4 = MEMORY[0xAC1888]; /*0x612a2a*/
      v0 = MEMORY[0xAC1860]; /*0x612a30*/
    }
    while ( MEMORY[0xAC1860] > (unsigned int)MEMORY[0xAC1888] ); /*0x612a3a*/
  }
  __3_YAXPAX_Z(MEMORY[0xAC1858]); /*0x612a46*/
}
}
} // namespace gamemd

// 0x612A60
namespace gamemd {
HGDIOBJ sub_612A60(HWND hWnd, UINT Msg, HDC hdc, LPARAM lParam)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HGDIOBJ __stdcall sub_612A60(HWND hWnd, UINT Msg, HDC hdc, LPARAM lParam)
{
  LRESULT (__stdcall *v4)(HWND, UINT, WPARAM, LPARAM); // esi
  int v5; // eax
  HWND v6; // ecx
  LRESULT (__stdcall **v7)(HWND, UINT, WPARAM, LPARAM); // eax
  int v8; // eax
  HWND v9; // ecx
  HDC v10; // esi
  struct tagRECT v12; // [esp+4h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+14h] [ebp-10h] BYREF

  v4 = 0; /*0x612a69*/
  if ( MEMORY[0xAC1B4C] /*0x612a93*/
    && (v5 = *((_DWORD *)MEMORY[0xAC1B48] + (MEMORY[0xAC1B60](&hWnd) & ((1 << MEMORY[0xAC1B54]) - 1)))) != 0 )
  {
    v6 = hWnd; /*0x612a95*/
    while ( *(HWND *)v5 != hWnd ) /*0x612a9b*/
    {
      v5 = *(_DWORD *)(v5 + 8); /*0x612a9d*/
      if ( !v5 ) /*0x612aa2*/
        goto LABEL_10; /*0x612aa2*/
    }
    v7 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v5 + 4); /*0x612aaa*/
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
  if ( MEMORY[0xAC1B04] /*0x612aff*/
    && (v8 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1)))) != 0 )
  {
    v9 = hWnd; /*0x612b01*/
    do /*0x612b11*/
    {
      if ( *(HWND *)v8 == hWnd ) /*0x612b07*/
        break; /*0x612b07*/
      v8 = *(_DWORD *)(v8 + 516); /*0x612b09*/
    }
    while ( v8 ); /*0x612b11*/
  }
  else
  {
    v9 = hWnd; /*0x612b15*/
  }
  if ( Msg != 307 ) /*0x612b22*/
    return (HGDIOBJ)CallWindowProcA(v4, v9, Msg, (WPARAM)hdc, lParam); /*0x612b5b*/
  v10 = hdc; /*0x612b2a*/
  SetTextColor(hdc, MEMORY[0xAC18A4]); /*0x612b30*/
  SetBkMode(v10, 1); /*0x612b39*/
  return GetStockObject(5); /*0x612b47*/
}
}
} // namespace gamemd

// 0x61D6D0
namespace gamemd {
int NetworkLobbyPaintProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall NetworkLobbyPaintProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  HWND v4; // ebp
  int result; // eax
  _DWORD *v6; // esi
  unsigned int v7; // eax
  int v8; // eax
  _DWORD *v9; // edi
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // ecx
  int v13; // eax
  struct tagRECT Rect; // [esp+18h] [ebp-30h] BYREF
  _DWORD v15[4]; // [esp+28h] [ebp-20h] BYREF
  _DWORD v16[2]; // [esp+38h] [ebp-10h] BYREF
  int v17; // [esp+40h] [ebp-8h]
  int v18; // [esp+44h] [ebp-4h]

  v4 = hWnd; /*0x61d6d4*/
  ScreenDialogToClient(hWnd, &Rect); /*0x61d6df*/
  hWnd = v4; /*0x61d6e9*/
  if ( !MEMORY[0xAC1B04] ) /*0x61d6ef*/
    return 0; /*0x61d6ef*/
  result = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x61d714*/
  if ( !result ) /*0x61d719*/
    return 0; /*0x61d719*/
  while ( *(HWND *)result != hWnd ) /*0x61d725*/
  {
    result = *(_DWORD *)(result + 516); /*0x61d727*/
    if ( !result ) /*0x61d72f*/
      return result; /*0x61d72f*/
  }
  v6 = (_DWORD *)(result + 4); /*0x61d741*/
  if ( result == -4 ) /*0x61d746*/
    return 0; /*0x61d746*/
  if ( a2 > 0x402 ) /*0x61d755*/
  {
    if ( a2 == 1175 ) /*0x61d938*/
      *(_DWORD *)(result + 240) = 100; /*0x61d93a*/
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
      v8 = *(_DWORD *)(result + 20); /*0x61d7b4*/
      v16[0] = 0; /*0x61d7ba*/
      v16[1] = 0; /*0x61d7c2*/
      v18 = Rect.bottom - Rect.top + 1; /*0x61d7ca*/
      v15[0] = Rect.left; /*0x61d7ce*/
      v15[1] = Rect.top; /*0x61d7d2*/
      v15[3] = v18; /*0x61d7d6*/
      if ( !v8 ) /*0x61d7da*/
      {
        v9 = __2_YAPAXI_Z(0x20u); /*0x61d7e7*/
        if ( v9 ) /*0x61d7ee*/
        {
          v10 = Rect.bottom - Rect.top + 1; /*0x61d802*/
          v11 = Rect.right - Rect.left; /*0x61d803*/
          v9[2] = v10; /*0x61d805*/
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
        v6[4] = v12; /*0x61d83c*/
        ++MEMORY[0xAC48B4]; /*0x61d847*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *, int, _DWORD *, _DWORD, int))(*v12 + 8))( /*0x61d860*/
          v12,
          v16,
          MEMORY[0x887310],
          v15,
          0,
          1);
      }
      (*(void (__thiscall **)(int, _DWORD *, _DWORD, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))( /*0x61d87d*/
        MEMORY[0x887310],
        v15,
        v6[4],
        v16,
        0,
        1);
      UI_Helper_6217E0(255 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0], (v6[60] << 16) / (v6[59] - v6[58])); /*0x61d8e3*/
      ValidateRect(v4, 0); /*0x61d8eb*/
      return 0; /*0x61d8f3*/
    case 0x401u: /*0x61d75b*/
      v7 = HIWORD(a4); /*0x61d77d*/
      v6[58] = (unsigned __int16)a4; /*0x61d780*/
      v6[59] = v7; /*0x61d786*/
      return 0; /*0x61d793*/
    default:
      return 0; /*0x61d76b*/
  }
}
}
} // namespace gamemd

// 0x61ECA0
namespace gamemd {
int RenderDialogSurface(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall RenderDialogSurface(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  UINT v4; // edi
  LRESULT (__stdcall *v5)(HWND, UINT, WPARAM, LPARAM); // esi
  int v6; // eax
  HWND v7; // ecx
  LRESULT (__stdcall **v8)(HWND, UINT, WPARAM, LPARAM); // eax
  int result; // eax
  int v10; // edi
  _DWORD *v11; // esi
  int v12; // eax
  int v13; // ecx
  _DWORD *v14; // ecx
  LRESULT v15; // eax
  int v16; // eax
  struct tagRECT Rect; // [esp+28h] [ebp-B4h] BYREF
  HWND v18; // [esp+38h] [ebp-A4h] BYREF
  int v19[2]; // [esp+3Ch] [ebp-A0h] BYREF
  int v20; // [esp+44h] [ebp-98h]
  int v21; // [esp+48h] [ebp-94h]
  _DWORD v22[4]; // [esp+4Ch] [ebp-90h] BYREF
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
      if ( MEMORY[0xAC1B04] ) /*0x61edbe*/
      {
        result = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v18) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x61ede3*/
        if ( result ) /*0x61ede8*/
        {
          while ( *(HWND *)result != v18 ) /*0x61edf4*/
          {
            result = *(_DWORD *)(result + 516); /*0x61edf6*/
            if ( !result ) /*0x61edfe*/
              return result; /*0x61edfe*/
          }
          v10 = result + 4; /*0x61ee13*/
          if ( result != -4 ) /*0x61ee18*/
          {
            if ( !*(_DWORD *)(result + 20) ) /*0x61ee1e*/
            {
              v11 = __2_YAPAXI_Z(0x20u); /*0x61ee2c*/
              if ( v11 ) /*0x61ee33*/
              {
                v12 = v21; /*0x61ee35*/
                v13 = v20; /*0x61ee39*/
                v11[2] = v21; /*0x61ee3d*/
                v11[1] = v13; /*0x61ee45*/
                v11[3] = 0; /*0x61ee4e*/
                *v11 = &XSurface_Vtable; /*0x61ee55*/
                v11[4] = 2; /*0x61ee5b*/
                Buffer::Init(v11 + 5, 0, 2 * v13 * v12); /*0x61ee62*/
                *v11 = &BSurface_Vtable; /*0x61ee67*/
                v14 = v11; /*0x61ee6d*/
              }
              else
              {
                v14 = 0; /*0x61ee71*/
              }
              *(_DWORD *)(v10 + 16) = v14; /*0x61ee73*/
              ++MEMORY[0xAC48B4]; /*0x61ee7e*/
              (*(void (__thiscall **)(_DWORD *, _DWORD *, int, int *, _DWORD, int))(*v14 + 8))( /*0x61ee97*/
                v14,
                v22,
                MEMORY[0x887310],
                v19,
                0,
                1);
            }
            v15 = SendMessageA(hWnd, 0x402u, 0, 0); /*0x61eeab*/
            FormatHotkeyDisplayString(v15, String); /*0x61eeb7*/
            v16 = *(_DWORD *)(v10 + 16); /*0x61eebc*/
            if ( v16 ) /*0x61eec1*/
              (*(void (__thiscall **)(int, int *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))( /*0x61eeda*/
                MEMORY[0x887310],
                v19,
                v16,
                v22,
                0,
                1);
            DrawDialogGradient((int *)MEMORY[0x887310], v19, 2, -1); /*0x61eeeb*/
            if ( wcslen(String) ) /*0x61eef5*/
            {
              Rect.left += 4; /*0x61ef16*/
              Rect.right -= 4; /*0x61ef22*/
              Rect.top += 4; /*0x61ef2c*/
              Rect.bottom -= 4; /*0x61ef30*/
              Surface_Render((int)&Rect, *(_DWORD *)(v10 + 100), MEMORY[0xAC18A4], 36); /*0x61ef4a*/
            }
            ValidateRect(hWnd, 0); /*0x61ef59*/
          }
        }
      }
      return 0; /*0x61ef60*/
    case 0x14u: /*0x61ecb4*/
      return 1; /*0x61ed5b*/
    case 0x85u: /*0x61ecb4*/
      return 0; /*0x61ecc6*/
  }
  v5 = 0; /*0x61ecd1*/
  if ( MEMORY[0xAC1B4C] /*0x61ecfe*/
    && (v6 = *((_DWORD *)MEMORY[0xAC1B48] + (MEMORY[0xAC1B60](&hWnd) & ((1 << MEMORY[0xAC1B54]) - 1)))) != 0 )
  {
    v7 = hWnd; /*0x61ed00*/
    while ( *(HWND *)v6 != hWnd ) /*0x61ed09*/
    {
      v6 = *(_DWORD *)(v6 + 8); /*0x61ed0b*/
      if ( !v6 ) /*0x61ed10*/
        return CallWindowProcA(v5, v7, v4, wParam, lParam); /*0x61ed10*/
    }
    v8 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v6 + 4); /*0x61ed18*/
    if ( v8 ) /*0x61ed1d*/
      v5 = *v8; /*0x61ed1f*/
  }
  else
  {
    v7 = hWnd; /*0x61ed23*/
  }
  return CallWindowProcA(v5, v7, v4, wParam, lParam); /*0x61ed43*/
}
}
} // namespace gamemd

// 0x61EF70
namespace gamemd {
int FormatHotkeyDisplayString()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __usercall FormatHotkeyDisplayString@<eax>(__int16 a1@<cx>, wchar_t *a2@<edx>, CampaignScore *a3@<edi>)
{
  int result; // eax
  __int16 v4; // kr1C_2
  UINT v5; // eax
  UINT v6; // eax
  UINT v7; // eax
  UINT v8; // eax
  CHAR String[32]; // [esp+Ch] [ebp-214h] BYREF
  wchar_t Format[250]; // [esp+2Ch] [ebp-1F4h] BYREF

  result = HIBYTE(a1); /*0x61ef7c*/
  v4 = a1; /*0x61ef84*/
  LOBYTE(Format[0]) = 0; /*0x61ef88*/
  *a2 = 0; /*0x61ef8d*/
  if ( (a1 & 0x800) == 0 ) /*0x61ef92*/
  {
    if ( (a1 & 0x400) != 0 ) /*0x61efaa*/
    {
      v5 = MapVirtualKeyA(0x12u, 0); /*0x61efb0*/
      GetKeyNameTextA((v5 << 16) | 0x2000001, String, 32); /*0x61efc2*/
      strcat((char *)Format, String); /*0x61efe8*/
      strcat((char *)Format, &stru_830620.__pad_53E0[52]); /*0x61f014*/
      LOBYTE(result) = HIBYTE(v4); /*0x61f016*/
      LOBYTE(a1) = v4; /*0x61f021*/
    }
    if ( (result & 2) != 0 ) /*0x61f027*/
    {
      v6 = MapVirtualKeyA(0x11u, 0); /*0x61f02d*/
      GetKeyNameTextA((v6 << 16) | 0x2000001, String, 32); /*0x61f03f*/
      strcat((char *)Format, String); /*0x61f065*/
      strcat((char *)Format, &stru_830620.__pad_53E0[52]); /*0x61f091*/
      LOBYTE(result) = HIBYTE(v4); /*0x61f093*/
      LOBYTE(a1) = v4; /*0x61f09e*/
    }
    if ( (result & 1) != 0 ) /*0x61f0a4*/
    {
      v7 = MapVirtualKeyA(0x10u, 0); /*0x61f0aa*/
      GetKeyNameTextA((v7 << 16) | 0x2000001, String, 32); /*0x61f0bc*/
      strcat((char *)Format, String); /*0x61f0e2*/
      strcat((char *)Format, &stru_830620.__pad_53E0[52]); /*0x61f10e*/
      LOBYTE(a1) = v4; /*0x61f117*/
    }
    v8 = MapVirtualKeyA((unsigned __int8)a1, 0); /*0x61f124*/
    GetKeyNameTextA((v8 << 16) | 0x2000001, String, 32); /*0x61f136*/
    strcat((char *)Format, String); /*0x61f15c*/
    return swprintf(a2, (const size_t)&stru_830620.__pad_14B0[15780], Format, a3); /*0x61f174*/
  }
  return result; /*0x61f180*/
}
}
} // namespace gamemd

// 0x61F210
namespace gamemd {
char Dialog_InitCountryIcons(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char __fastcall Dialog_InitCountryIcons(int a1, int a2)
// {
//   int v2; // edx
//   int v3; // edx
//   int v4; // edx
//   int v5; // edx
//   int v6; // edx
//   int v7; // edx
//   int v8; // edx
//   int v9; // edx
//   int v10; // edx
//   int v11; // edx
//   int v12; // edx
//   int v13; // edx
//   int v14; // edx
//   int v15; // edx
//   int v16; // edx
//   int v17; // edx
//   int v18; // edx
//   int v19; // edx
//   int v20; // edx
//   int v21; // edx
//   int v22; // edx
//   int v23; // edx
//   int v24; // edx
//   int v25; // edx
//   int v26; // edx
//   int v27; // edx
//   int v28; // edx
//   int v29; // edx
//   int v30; // edx
//   int v31; // edx
//   int v32; // edx
//   int v33; // edx
//   int v34; // edx
//   int v35; // edx
//   int v36; // edx
//   int v37; // edx
//   int v38; // edx
//   int v39; // edx
//   int v40; // edx
//   int v41; // edx
//   int v42; // edx
//   int v43; // edx
//   int v44; // edx
//   int v45; // edx
//   int v46; // edx
//   int v47; // edx
//   int v48; // edx
//   int v49; // edx
//   int v50; // edx
//   int v51; // edx
//   int v52; // edx
//   int v53; // edx
//   int v54; // ... [20523 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x6107A0
namespace gamemd {
int sub_6107A0()
{
{
    DataGlobal_AC1CB8 = 0u;
    DataGlobal_AC1CC8 = 0;
    DataGlobal_AC1CCC = 0;
    DataGlobal_AC1DCC = 0;
    DataGlobal_AC1DD0 = 0;
    DataGlobal_AC1DD4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6107E0
namespace gamemd {
unsigned int * E4Recv_6107E0::sub_6107E0()
{
{
    *(void**)this = 0;
    this->M4 = 0;
    this->M8 = 0;
    this->M12 = 0;
    this->M16 = 0;
    this->M20 = 0;
    this->M276 = 0;
    this->M280 = 0;
    this->M284 = 0;
    return this;
}
}
} // namespace gamemd

// 0x612910
namespace gamemd {
void sub_612910()
{
{
    g_ComboBoxState = 0;
    __3_YAXPAX_Z(DataGlobal_AC1DE8);
}
}
} // namespace gamemd
