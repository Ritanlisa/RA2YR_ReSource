// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSPrintAnim_e4.hpp"
#include "e4/classes/MSPCXAnim_42_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x7B7110
namespace gamemd {
wchar_t MSPrintAnim::GetCharAt(size_t a2)
{

  if ( a2 >= wcslen(*this) ) /*0x7b7124*/
    return 0; /*0x7b7130*/
  else
    return (*this)[a2]; /*0x7b7129*/

}
} // namespace gamemd