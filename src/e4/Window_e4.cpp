// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Window_e4.hpp"
#include "e4/classes/WinsockInterfaceClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/WinModemClass_e4.hpp"

// 0x4A5110
namespace gamemd {  // G42.18 ns repair
int Window::IsVisible()
{

  int result; // eax
  (*((unsigned char *)&(result))) = this->u32_18 && this->u32_19; /*0x4a511e*/
  return result; /*0x4a5120*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x776D80
namespace gamemd {
char Window::ClampToScreen(int * a1)
{

  char v1 = 0; // bl /*0x776d86*/
  int v2 = *a1; // eax /*0x776d89*/
  if ( *a1 < 0 ) /*0x776d8d*/
  {
    int v3 = a1->q008; // ecx /*0x776d8f*/
    *a1 = 0; /*0x776d92*/
    v1 = 1; /*0x776d9a*/
    a1->q008 = v3 - v2; /*0x776d9c*/
  }
  int v4 = a1->__pad_004; // eax /*0x776d9f*/
  if ( v4 < 0 ) /*0x776da4*/
  {
    int v5 = a1->CampaignScore_field_0x0C; // ecx /*0x776da6*/
    a1->__pad_004 = 0; /*0x776da9*/
    v1 = 1; /*0x776db2*/
    a1->CampaignScore_field_0x0C = v5 - v4; /*0x776db4*/
  }
  if ( a1->q008 > GetSystemMetrics(16) ) /*0x776dc4*/
  {
    *a1 += GetSystemMetrics(16) - a1->q008; /*0x776dd5*/
    a1->q008 = GetSystemMetrics(16); /*0x776dd9*/
    v1 = 1; /*0x776ddc*/
  }
  int result; // eax
  result = GetSystemMetrics(17); /*0x776de0*/
  if ( a1->CampaignScore_field_0x0C <= result ) /*0x776de5*/
  {
    (*((unsigned char *)&(result))) = v1; /*0x776e08*/
  }
  else
  {
    a1[1] += GetSystemMetrics(17) - a1[3]; /*0x776df7*/
    result = GetSystemMetrics(17); /*0x776dfa*/
    a1->CampaignScore_field_0x0C = result; /*0x776dfc*/
    (*((unsigned char *)&(result))) = 1; /*0x776dff*/
  }
  return result; /*0x776e01*/
}
} // namespace gamemd