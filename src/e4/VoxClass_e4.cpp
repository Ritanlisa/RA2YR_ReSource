// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/VoxClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Voice_e4.hpp"

// 0x752700
namespace gamemd {
int VoxClass::FindAndPlay(int a3)
{
  int v2; // edx
  int v4; // ebx
  int v5; // esi
  int result; // eax

  v4 = v2; /*0x752704*/
  if ( this ) /*0x752708*/
  {
    v5 = 0; /*0x752710*/
    if ( g_InfantrySelectState <= 0 ) /*0x752714*/
    {
      return UpdateThemeManager(-1, v4, a3); /*0x752736*/
    }
    else
    {
      while ( _strcmpi((char *)this, *((char **)g_InfantryRenderPool + v5)) ) /*0x75272a*/
      {
        if ( ++v5 >= g_InfantrySelectState ) /*0x752734*/
          return UpdateThemeManager(-1, v4, a3); /*0x752734*/
      }
      return UpdateThemeManager(v5, v4, a3); /*0x752754*/
    }
  }
  return result; /*0x752746*/
}
} // namespace gamemd