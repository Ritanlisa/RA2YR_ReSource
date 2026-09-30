// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Selection_e4.hpp"
#include "e4/classes/ScrollClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x731D00
namespace gamemd {
void Selection::SetCurrent()
{

  g_abs_B0FE54 = (int)this; /*0x731d00*/
  g_abs_B0FE58 = 0; /*0x731d06*/

}
} // namespace gamemd
// 0x732D00
namespace gamemd {
bool Selection::GetFlag()
{

  return g_abs_B0FE65; /*0x732d05*/

}
} // namespace gamemd
// 0x734270
namespace gamemd {
int Selection::ClearGlobals()
{

  int result; // eax

  result = 0; /*0x734270*/
  if ( this ) /*0x734274*/
  {
    if ( this == (void *)g_abs_B0FE5C ) /*0x734287*/
    {
      g_abs_B0FE5C = 0; /*0x734289*/
    }
    else if ( this == (void *)g_abs_B0FE60 ) /*0x734295*/
    {
      g_abs_B0FE60 = 0; /*0x734297*/
    }
  }
  else
  {
    g_abs_B0FE5C = 0; /*0x734276*/
    g_abs_B0FE60 = 0; /*0x73427b*/
  }
  return result; /*0x734280*/

}
} // namespace gamemd