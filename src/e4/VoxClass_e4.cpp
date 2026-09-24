// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x752700
void VoxClass::FindAndPlay(void * this, int a2, int a3)
{
  int v3; // esi

  if ( this ) /*0x752708*/
  {
    v3 = 0; /*0x752710*/
    if ( g_InfantrySelectState <= 0 ) /*0x752714*/
    {
  LABEL_5:
      UpdateThemeManager(a2); /*0x752736*/
    }
    else
    {
      while ( _strcmpi(this, *((const void **)g_InfantryRenderPool + v3)) ) /*0x75272a*/
      {
        if ( ++v3 >= g_InfantrySelectState ) /*0x752734*/
          goto LABEL_5; /*0x752734*/
      }
      UpdateThemeManager(a2); /*0x752754*/
    }
  }
}