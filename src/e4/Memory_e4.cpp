// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_623E00_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x53EC40
namespace gamemd {
int sub_53EC40(unsigned char a1, char a2)
{
{
  int result; // eax

  result = unk_AA0444; /*0x53ec40*/
  if ( unk_AA0444 )
    unk_AA0168[a1] = a2 != 0 ? 0 : 0x8000;
  return result; /*0x53ec67*/
}
} // namespace gamemd
}

// 0x6149B0
namespace gamemd {
void Memory_Helper_6149B0(HWND hWnd, WCHAR * a2, int cchWideChar, size_t * a4)
{
{
  LRESULT (__stdcall *v4)(HWND, UINT, WPARAM, LPARAM); // ebx
  LRESULT (__stdcall **v7)(HWND, UINT, WPARAM, LPARAM); // eax
  size_t v8; // esi
  const wchar_t *v9; // ebx
  LPWSTR v13; // edx
  WCHAR *v14; // ecx
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
  if ( g_DialogHashMap_Grow ) /*0x6149cb*/
  {
    int v5 = g_DialogHashMap_Insert(&hWnda); /*0x6149d1*/
    hWnd = hWnda; /*0x6149e4*/
    int v6 = *((_DWORD *)g_DialogHashMap_Entries + (v5 & ((1 << g_DialogHashMap_Insert) - 1))); /*0x6149f0*/
    if ( v6 ) /*0x6149f5*/
    {
      while ( *(HWND *)v6 != hWnda ) /*0x6149f9*/
      {
        v6 = *(_DWORD *)(v6 + 8); /*0x6149fb*/
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
    *a4 = _mbsnccnt((const unsigned __int8 *)lParam, v8); /*0x614a8a*/
  if ( cchWideChar > 0 ) /*0x614a8e*/
    v9[cchWideChar - 1] = 0; /*0x614a90*/
  signed int v10 = wcslen(v9); /*0x614a9d*/
  AbstractClass *v11 = __2_YAPAXI_Z(2 * v10 + 6); /*0x614aab*/
  memset(v11, 0, 2 * v10 + 6); /*0x614ab9*/
  int v12 = 0; /*0x614abd*/
  if ( v10 > 0 ) /*0x614ac6*/
  {
    v13 = lpWideCharStr; /*0x614ac8*/
    v14 = (WCHAR *)v11; /*0x614acc*/
    signed int v15 = v10; /*0x614ace*/
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
      wcscat((wchar_t *)v11, DataGlobal_835950); /*0x614af6*/
  }
  v17 = lpWideCharStr; /*0x614afe*/
  wcscpy(lpWideCharStr, (const wchar_t *)v11); /*0x614b04*/
  __3_YAXPAX_Z(v11); /*0x614b0a*/
  return wcslen(v17); /*0x614b18*/
}
} // namespace gamemd

// 0x58C6F0
namespace gamemd {
double Memory_Helper_58C6F0(IUnknown * aP0, short * a1, double a3)
{
{
    double v3;
    double v4;
    char v6;
    int v8;
    double v9;
    int a1a;
    double v11;
    v8 = *a1 - SLOWORD(aP0->field_0);
    a1a = *((int*)(a1) + 1) - SHIWORD(aP0->field_0);
    v9 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(v8 * v8 + a1a * a1a)));
    if ( v8 )
  {
    v3 = Math::ArcTan(-((double)a1a / (double)v8));
    if ( v8 < 0 )
    v3 = v3 + 3.141592653589793;
  }
    else
  {
    v3 = 1.570796326794897;
  }
    v4 = fabs(v3 - a3);
    v11 = v4;
    if ( !v6 )
  {
    do
    v4 = v4 - 6.283185307179586;
    while ( v4 >= 6.283185307179586 );
    v11 = v4;
  }
    if ( v4 > 3.141592653589793 )
    v11 = 6.283185307179586 - v4;
    return (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10 * 2.5 + 1.5 * v11 + 0.15 * v9;
}
}
} // namespace gamemd
}

// 0x5C0E90
char Memory::FreeConditional(int a1, int a2, void * Block, int a4, short a5, int a6, int a7, int a8, int a9)
{
{
    if ( Block && HIBYTE(a5) )
    __3_YAXPAX_Z(Block);
    return 0;
}
}

// 0x5C0FA0
char Memory::FreeConditional2(int a1, void * Block, int a3, short a4, int a5, int a6, int a7)
{
{
    if ( Block && HIBYTE(a4) )
    __3_YAXPAX_Z(Block);
    return 0;
}
}

// 0x731CE0
int Memory::Alloc76()
{
{
    return System_Handle(76, 0);
}
}
