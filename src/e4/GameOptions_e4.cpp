// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/GameOption_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x682780
namespace gamemd {
void sub_682780(int a1, int a2, wchar_t * String)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _UNKNOWN **v5; // ecx
  int v6; // esi
  size_t v7; // eax
  int v9; // [esp+30h] [ebp-4h] BYREF

  v9 = 0; /*0x682786*/
  v3 = 0; /*0x68278e*/
  v4 = &unk_83D658; /*0x682790*/
  while ( *v4 != a2 ) /*0x682797*/
  {
    v4 += 2; /*0x682799*/
    ++v3; /*0x68279c*/
    if ( (int)v4 >= (int)g_INI_Key_GameType ) /*0x6827a2*/
    {
      v5 = 0; /*0x6827a4*/
      goto LABEL_5; /*0x6827a4*/
    }
  }
  v5 = (&off_83D65C)[2 * v3]; /*0x6827db*/
  LABEL_5:
  v6 = (*(int (__stdcall **)(int, _UNKNOWN **, int, _DWORD, _DWORD, int *))(*(_DWORD *)a1 + 12))(a1, v5, 18, 0, 0, &v9); /*0x6827a6*/
  if ( v6 >= 0 ) /*0x6827c4*/
  {
    if ( !v9 ) /*0x6827e6*/
      WinAPI::Wrapper(-2147467261); /*0x6827ed*/
    v7 = wcslen(String); /*0x682803*/
    v6 = (*(int (__stdcall **)(int, wchar_t *, size_t, _DWORD))(*(_DWORD *)v9 + 16))(v9, String, 2 * v7 + 2, 0); /*0x682815*/
    if ( v6 >= 0 ) /*0x68281f*/
    {
      if ( !v9 ) /*0x682834*/
        WinAPI::Wrapper(-2147467261); /*0x68283b*/
      v6 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v9 + 32))(v9, 0); /*0x68284c*/
      if ( v6 >= 0 ) /*0x682854*/
      {
        if ( v9 ) /*0x682869*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x68286e*/
      }
      else if ( v9 ) /*0x682858*/
      {
  LABEL_18:
        (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x68285a*/
        return v6; /*0x682864*/
      }
    }
    else if ( v9 ) /*0x682823*/
    {
      goto LABEL_18; /*0x682823*/
    }
  }
  else if ( v9 ) /*0x6827c8*/
  {
    goto LABEL_18; /*0x6827c8*/
  }
  return v6; /*0x6827d6*/
}
}
// 0x6829A0
namespace gamemd {
void sub_6829A0(int * a1, int a2, int a3)
{
  int v3; // eax
  int v4; // esi
  int v6; // [esp+2Ch] [ebp-1Ch] BYREF
  _DWORD v7[2]; // [esp+30h] [ebp-18h] BYREF
  __int16 v8[4]; // [esp+38h] [ebp-10h] BYREF
  int v9; // [esp+40h] [ebp-8h]

  v6 = 0; /*0x6829ac*/
  if ( (*(int (__stdcall **)(int *, void *, int, int *))(*a1 + 16))(a1, &unk_7F7D10, 18, &v6) >= 0 ) /*0x6829c4*/
    goto LABEL_7; /*0x6829c4*/
  if ( v6 ) /*0x6829cc*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x6829d1*/
  v3 = *a1; /*0x6829d4*/
  v6 = 0; /*0x6829ea*/
  v4 = (*(int (__stdcall **)(int *, void *, _DWORD, _DWORD, int, int *))(v3 + 12))(a1, &unk_7F7D10, 0, 0, 4114, &v6); /*0x6829f5*/
  if ( v4 >= 0 ) /*0x6829f9*/
  {
  LABEL_7:
    v7[1] = a2; /*0x682a1a*/
    v7[0] = 1; /*0x682a24*/
    v8[0] = 31; /*0x682a2c*/
    v9 = a3; /*0x682a33*/
    if ( !v6 ) /*0x682a37*/
      WinAPI::Wrapper(-2147467261); /*0x682a3e*/
    v4 = (*(int (__stdcall **)(int, int, _DWORD *, __int16 *, int))(*(_DWORD *)v6 + 16))(v6, 1, v7, v8, 2); /*0x682a5b*/
    if ( v4 >= 0 ) /*0x682a63*/
    {
      if ( v6 ) /*0x682a7a*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x682a7f*/
    }
    else if ( v6 ) /*0x682a67*/
    {
      goto LABEL_6; /*0x682a67*/
    }
  }
  else if ( v6 ) /*0x682a01*/
  {
  LABEL_6:
    (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x682a03*/
    return v4; /*0x682a0f*/
  }
  return v4; /*0x682a0b*/
}
}