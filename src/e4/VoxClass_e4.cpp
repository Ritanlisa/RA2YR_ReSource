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
void VoxClass::FindAndPlay(int a2, int a3)
{

  int v5; // esi

  if ( a3 ) /*0x752708*/
  {
    v5 = 0; /*0x752710*/
    if ( *(int *)&stru_B1D188.__pad_2B8[112] <= 0 ) /*0x752714*/
    {
LABEL_5:
      UpdateThemeManager(-1, a3, a3); /*0x752736*/
    }
    else
    {
      while ( _strcmpi(a3, *(const void **)(*(unsigned int *)&stru_B1D188.__pad_2B8[100] + 4 * v5)) ) /*0x75272a*/
      {
        if ( ++v5 >= *(int *)&stru_B1D188.__pad_2B8[112] ) /*0x752734*/
          goto LABEL_5; /*0x752734*/
      }
      UpdateThemeManager(v5, a3, a3); /*0x752754*/
    }
  }

}
} // namespace gamemd