// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_623E00_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Memory_e4.hpp"
#include "e4/classes/Menu_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/MixFile_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/MissionClass_e4.hpp"

// 0x53EC40
namespace gamemd {
int sub_53EC40(unsigned char a1, char a2)
{
  int result; // eax

  result = dword_AA0444; /*0x53ec40*/
  if ( dword_AA0444 )
    ((unsigned int *)(word_AA0168))[a1] = a2 != 0 ? 0 : 0x8000;
  return result; /*0x53ec67*/
}
}
// 0x6149B0
namespace gamemd {
void Memory_Helper_6149B0(HWND hWnd, WCHAR * a2, int cchWideChar, size_t * a4)
{
  LRESULT (__stdcall *v4)(HWND, UINT, WPARAM, LPARAM); // ebx
  int v5; // eax
  int v6; // eax
  LRESULT (__stdcall **v7)(HWND, UINT, WPARAM, LPARAM); // eax
  size_t v8; // esi
  const wchar_t *v9; // ebx
  signed int v10; // ebp
  void *v11; // ebx
  int v12; // esi
  LPWSTR v13; // edx
  WCHAR *v14; // ecx
  signed int v15; // edi
  WCHAR v16; // ax
  const wchar_t *v17; // esi
  WCHAR *v19; // [esp-8h] [ebp-428h]
  HWND hWnda; // [esp+10h] [ebp-410h] BYREF
  LPWSTR lpWideCharStr; // [esp+14h] [ebp-40Ch]
  LPARAM v22; // [esp+18h] [ebp-408h] BYREF
  WPARAM wParam; // [esp+1Ch] [ebp-404h] BYREF
  CHAR lParam[1024]; // [esp+20h] [ebp-400h] BYREF

  v4 = 0; /*0x6149bd*/
  lpWideCharStr = a2; /*0x6149c3*/
  hWnda = hWnd; /*0x6149c7*/
  if ( dword_AC1B4C ) /*0x6149cb*/
  {
    v5 = dword_AC1B60(&hWnda); /*0x6149d1*/
    hWnd = hWnda; /*0x6149e4*/
    v6 = *((unsigned int *)dword_AC1B48 + (v5 & ((1 << dword_AC1B54) - 1))); /*0x6149f0*/
    if ( v6 ) /*0x6149f5*/
    {
      while ( *(HWND *)v6 != hWnda ) /*0x6149f9*/
      {
        v6 = *(unsigned int *)(v6 + 8); /*0x6149fb*/
        if ( !v6 ) /*0x614a00*/
          goto LABEL_8; /*0x614a00*/
      }
      v7 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v6 + 4); /*0x614a08*/
      if ( v7 ) /*0x614a0d*/
        v4 = *v7; /*0x614a0f*/
    }
  }
  LABEL_8:
  v8 = 0; /*0x614a11*/
  lParam[0] = 0; /*0x614a27*/
  CallWindowProcA(v4, hWnd, 0xDu, 0x400u, (LPARAM)lParam); /*0x614a2c*/
  if ( a4 ) /*0x614a37*/
    v8 = (unsigned int)CallWindowProcA(v4, hWnda, 0xB0u, (WPARAM)&wParam, (LPARAM)&v22) >> 16; /*0x614a52*/
  v9 = lpWideCharStr; /*0x614a5c*/
  v19 = lpWideCharStr; /*0x614a61*/
  *lpWideCharStr = 0; /*0x614a6d*/
  MultiByteToWideChar(0, 0, lParam, -1, v19, cchWideChar); /*0x614a72*/
  if ( a4 ) /*0x614a7a*/
    *a4 = _mbsnccnt((const uint8_t *)lParam, v8); /*0x614a8a*/
  if ( cchWideChar > 0 ) /*0x614a8e*/
    v9[cchWideChar - 1] = 0; /*0x614a90*/
  v10 = wcslen(v9); /*0x614a9d*/
  v11 = RA2_OPNEW(2 * v10 + 6); /*0x614aab*/
  memset(v11, 0, 2 * v10 + 6); /*0x614ab9*/
  v12 = 0; /*0x614abd*/
  if ( v10 > 0 ) /*0x614ac6*/
  {
    v13 = lpWideCharStr; /*0x614ac8*/
    v14 = (WCHAR *)v11; /*0x614acc*/
    v15 = v10; /*0x614ace*/
    do /*0x614aea*/
    {
      v16 = *v13; /*0x614ad0*/
      if ( *v13 != 13 && v16 != 10 ) /*0x614add*/
      {
        *v14 = v16; /*0x614adf*/
        ++v12; /*0x614ae2*/
        ++v14; /*0x614ae3*/
      }
      ++v13; /*0x614ae6*/
      --v15; /*0x614ae9*/
    }
    while ( v15 ); /*0x614aea*/
    if ( v10 != v12 ) /*0x614aee*/
      wcscat((wchar_t *)v11, L"\r\n"); /*0x614af6*/
  }
  v17 = lpWideCharStr; /*0x614afe*/
  wcscpy(lpWideCharStr, (const wchar_t *)v11); /*0x614b04*/
  RA2_OPDEL(v11); /*0x614b0a*/
  return wcslen(v17); /*0x614b18*/
}
// 0x58C6F0
namespace gamemd {
double Memory_Helper_58C6F0(IUnknown * aP0, short * a1, double a3)
{
  double v3; // st7
  double v4; // st7
  char v6; // c0
  int v8; // [esp+Ch] [ebp-10h]
  double v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+24h] [ebp+8h]
  double v11; // [esp+28h] [ebp+Ch]

  v8 = *a1 - *aP0; /*0x58c71d*/
  v10 = a1[1] - aP0[1]; /*0x58c725*/
  v9 = Math::Sqrt((double)(v8 * v8 + v10 * v10)); /*0x58c735*/
  if ( v8 ) /*0x58c73e*/
  {
    v3 = ((Math *)(-((double)v10 / (double)v8)))->ArcTan(); /*0x58c754*/
    if ( v8 < 0 ) /*0x58c75e*/
      v3 = v3 + 3.141592653589793; /*0x58c760*/
  }
  else
  {
    v3 = 1.570796326794897; /*0x58c7f4*/
  }
  v4 = fabs(v3 - a3); /*0x58c76b*/
  v11 = v4; /*0x58c773*/
  if ( !v6 ) /*0x58c77c*/
  {
    do /*0x58c78f*/
      v4 = v4 - 6.283185307179586; /*0x58c77e*/
    while ( v4 >= 6.283185307179586 ); /*0x58c78f*/
    v11 = v4; /*0x58c791*/
  }
  if ( v4 > 3.141592653589793 ) /*0x58c7a0*/
    v11 = 6.283185307179586 - v4; /*0x58c7aa*/
  return (double)(unsigned int)Random::State(&unk_ABE890) * 2.328306437080797e-10 * 2.5 + 1.5 * v11 + 0.15 * v9; /*0x58c7ee*/
}
} // namespace gamemd
}

// 0x5C0E90
char Memory::FreeConditional(int a1, int a2, void * Block, int a4, short a5, int a6, int a7, int a8, int a9)
{
  if ( Block && IDA_HIBYTE(a5) ) /*0x5c0e9e*/
    RA2_OPDEL(Block); /*0x5c0ea1*/
  return 0; /*0x5c0eab*/
}
// 0x5C0FA0
char Memory::FreeConditional2(int a1, void * Block, int a3, short a4, int a5, int a6, int a7)
{
  if ( Block && IDA_HIBYTE(a4) ) /*0x5c0fae*/
    RA2_OPDEL(Block); /*0x5c0fb1*/
  return 0; /*0x5c0fbb*/
}
// 0x731CE0
int Memory::Alloc76()
{
  return System_Handle(76, 0); /*0x731cee*/
}