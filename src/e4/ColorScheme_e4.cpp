// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ColorScheme_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x68C8D0
namespace gamemd {
int ColorScheme::Destructor()
{

  void (***v2)(unsigned int, int); // ecx
  int result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  if ( *((unsigned int *)this + 193) ) /*0x68c8d4*/
    free(*(void **)((char *)this + 772)); /*0x68c8df*/
  v2 = *(void (****)(unsigned int, int))((char *)this + 780); /*0x68c8e7*/
  *((unsigned int *)this + 193) = 0; /*0x68c8ed*/
  if ( v2 ) /*0x68c8f9*/
    (**v2)(v2, 1); /*0x68c8ff*/
  *((unsigned int *)this + 195) = 0; /*0x68c905*/
  v4 = this; /*0x68c91b*/
  result = (*(int (**)(int *, int *))(g_abs_B054D0 + 16))(&g_abs_B054D0, &v4); /*0x68c91f*/
  if ( result != -1 && result < (int)((int))((int))(g_abs_B054E0) && (int)(result) < --g_abs_B054E0 ) /*0x68c93b*/
  {
    do /*0x68c953*/
    {
      ++result; /*0x68c943*/
      *((unsigned int *)g_abs_B054D4 + result - 1) = *((unsigned int *)g_abs_B054D4 + result); /*0x68c947*/
    }
    while ( result < (int)((int))((int))(g_abs_B054E0) ); /*0x68c953*/
  }
  return result; /*0x68c925*/

}
}