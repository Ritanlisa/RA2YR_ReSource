// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"

// 0x7AD2F0
namespace gamemd {  // G42.18 ns repair
void ** SessionClass::ResetSystemWOL_Reset(char a2)
{

  DeleteAndZero(this); /*0x7ad2f3*/
  if ( (a2 & 1) != 0 ) /*0x7ad2fd*/
    __3_YAXPAX_Z(this); /*0x7ad300*/
  return &this->AbstractClass; /*0x7ad30a*/

}
} // namespace gamemd
