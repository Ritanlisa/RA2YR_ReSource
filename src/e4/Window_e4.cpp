// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4A5110
bool Window::IsVisible()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall Window_IsVisible(_BYTE *this)
{
  return *(this + 24) && *(this + 25); /*0x4a5120*/
}
}

// 0x776D80
char Window::ClampToScreen(int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall Window_ClampToScreen(int *a1)
{
  char v1; // bl
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx

  v1 = 0; /*0x776d86*/
  v2 = *a1; /*0x776d89*/
  if ( *a1 < 0 ) /*0x776d8d*/
  {
    v3 = a1[2]; /*0x776d8f*/
    *a1 = 0; /*0x776d92*/
    v1 = 1; /*0x776d9a*/
    a1[2] = v3 - v2; /*0x776d9c*/
  }
  v4 = a1[1]; /*0x776d9f*/
  if ( v4 < 0 ) /*0x776da4*/
  {
    v5 = a1[3]; /*0x776da6*/
    a1[1] = 0; /*0x776da9*/
    v1 = 1; /*0x776db2*/
    a1[3] = v5 - v4; /*0x776db4*/
  }
  if ( a1[2] > GetSystemMetrics(16) ) /*0x776dc4*/
  {
    *a1 += GetSystemMetrics(16) - a1[2]; /*0x776dd5*/
    a1[2] = GetSystemMetrics(16); /*0x776dd9*/
    v1 = 1; /*0x776ddc*/
  }
  if ( a1[3] <= GetSystemMetrics(17) ) /*0x776de5*/
    return v1; /*0x776e08*/
  a1[1] += GetSystemMetrics(17) - a1[3]; /*0x776df7*/
  a1[3] = GetSystemMetrics(17); /*0x776dfc*/
  return 1; /*0x776e01*/
}
}
