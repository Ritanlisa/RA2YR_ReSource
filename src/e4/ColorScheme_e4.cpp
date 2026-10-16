// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ColorScheme_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x68C8D0
namespace gamemd {  // G42.18 ns repair
int ColorScheme::Destructor(void *a1)
{
  void (***v2)(unsigned int, int); // ecx
  int result; // eax
  ColorScheme *v4; // [esp+4h] [ebp-4h] BYREF

  if ( a1->q304 ) /*0x68c8d4*/
    free((void *)(&a1->data)[193]); /*0x68c8df*/
  v2 = (void (***)(unsigned int, int))a1->u32_30C; /*0x68c8e7*/
  (&a1->data)[193] = 0; /*0x68c8ed*/
  if ( v2 ) /*0x68c8f9*/
    (**v2)(v2, 1); /*0x68c8ff*/
  a1->data[195] = 0; /*0x68c905*/
  v4 = (gamemd::ColorScheme *)(a1); /*0x68c91b*/
  result = (*(int (**)(_VectorClass_PAVColorScheme *, ColorScheme **))(*(unsigned int *)ColorScheme_Array + 16))( /*0x68c91f*/
             &stru_B054D0,
             &v4);
  if ( result != -1 && result < *(int *)g_AnimClass_SaveState ) /*0x68c930*/
  {
    --*(unsigned int *)g_AnimClass_SaveState; /*0x68c935*/
    for ( ; /*0x68c93b*/
    result < *(int *)g_AnimClass_SaveState;
    *(unsigned int *)(*(unsigned int *)&BuildingTypeClass_AnimTable + 4 * result - 4) = *(unsigned int *)(*(unsigned int *)&BuildingTypeClass_AnimTable
    + 4 * result) )
    {
      ++result; /*0x68c943*/
    }
  }
  return result; /*0x68c925*/
}
}  // G42.18 ns repair