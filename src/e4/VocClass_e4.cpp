// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/RefCount_e4.hpp"
#include "e4/classes/Voice_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4052F0
namespace gamemd {
int VocClass::Release()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4052F0)
}
} // namespace gamemd
// 0x751590
namespace gamemd {
char * VocClass::GetSampleNameByIndex(int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x751590)
}
} // namespace gamemd
// 0x753250
namespace gamemd {
int VocClass::FindByName()
{

  int v3; // esi

  if ( !this ) /*0x753255*/
    return -1; /*0x753257*/
  v3 = 0; /*0x753262*/
  if ( g_InfantrySelectState <= 0 ) /*0x753266*/
    return -1; /*0x753288*/
  while ( _strcmpi((char *)this, *((char **)g_InfantryRenderPool + v3)) ) /*0x75327c*/
  {
    if ( ++v3 >= g_InfantrySelectState ) /*0x753286*/
      return -1; /*0x753286*/
  }
  return v3; /*0x75325a*/

}
} // namespace gamemd