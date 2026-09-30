// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Window_e4.hpp"
#include "e4/classes/WinsockInterfaceClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4A5110
namespace gamemd {
int Window::IsVisible()
{

  return *((unsigned char *)this + 24) && *((unsigned char *)this + 25); /*0x4a5120*/

}
} // namespace gamemd
// 0x776D80
namespace gamemd {
char Window::ClampToScreen(int * a1)
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
} // namespace gamemd