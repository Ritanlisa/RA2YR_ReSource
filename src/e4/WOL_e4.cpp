// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WOL_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/WDTState_4_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/E4Recv_76C6E0_e4.hpp"

// 0x76EFE0
namespace gamemd {
void * WOL::QueryInterface(char a2)
{

  SelectionInitializeWOL((int)this); /*0x76efe3*/
  if ( (a2 & 1) != 0 ) /*0x76efed*/
    __3_YAXPAX_Z(this); /*0x76eff0*/
  return this; /*0x76effa*/

}
} // namespace gamemd