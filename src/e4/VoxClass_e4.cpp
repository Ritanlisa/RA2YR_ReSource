// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/VoxClass_e4.hpp"
#include "e4/e4_protos.h"

// 0x752700
namespace gamemd {
void VoxClass::FindAndPlay(int a2, int a3)
{
  int v3; // esi

  if ( a3 ) /*0x752708*/
  {
    v3 = 0; /*0x752710*/
    if ( g_InfantrySelectState <= 0 ) /*0x752714*/
    {
  LABEL_5:
      UpdateThemeManager(a3); /*0x752736*/
    }
    else
    {
      while ( _strcmpi(a3, *((const void **)g_InfantryRenderPool + v3)) ) /*0x75272a*/
      {
        if ( ++v3 >= g_InfantrySelectState ) /*0x752734*/
          goto LABEL_5; /*0x752734*/
      }
      UpdateThemeManager(a3); /*0x752754*/
    }
  }
}
} // namespace gamemd