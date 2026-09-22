// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4A5110
bool Window::IsVisible()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Window_IsVisible(_BYTE *this)
{
  return this->q018 && *(this + 25); /*0x4a5120*/
}
}

// 0x776D80
char Window::ClampToScreen(int * a1)
{
{
    char v1;
    int v2;
    int v3;
    int v4;
    int v5;
    v1 = 0;
    v2 = *a1;
    if ( *a1 < 0 )
  {
    v3 = *((int*)(a1) + 2);
    *a1 = 0;
    v1 = 1;
    *((int*)(a1) + 2) = v3 - v2;
  }
    v4 = *((int*)(a1) + 1);
    if ( v4 < 0 )
  {
    v5 = *((int*)(a1) + 3);
    *((int*)(a1) + 1) = 0;
    v1 = 1;
    *((int*)(a1) + 3) = v5 - v4;
  }
    if ( *((int*)(a1) + 2) > GetSystemMetrics(16) )
  {
    *a1 += GetSystemMetrics(16) - *((int*)(a1) + 2);
    *((int*)(a1) + 2) = GetSystemMetrics(16);
    v1 = 1;
  }
    if ( *((int*)(a1) + 3) <= GetSystemMetrics(17) )
    return v1;
    *((int*)(a1) + 1) += GetSystemMetrics(17) - *((int*)(a1) + 3);
    *((int*)(a1) + 3) = GetSystemMetrics(17);
    return 1;
}
}
