// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSPrintAnim_e4.hpp"
#include "e4/classes/MSPCXAnim_42_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x7B7110
namespace gamemd {  // G42.18 ns repair
wchar_t MSPrintAnim::GetCharAt(size_t a2)
{

  int result; // eax

  result = wcslen(*(const wchar_t **)this->vtable1); /*0x7b7116*/
  if ( a2 >= result ) /*0x7b7124*/
    LOWORD(result) = 0; /*0x7b7130*/
  else
    LOWORD(result) = *(unsigned short *)(*(unsigned int *)this->vtable1 + 2 * a2); /*0x7b7129*/
  return result; /*0x7b7128*/

}
} // namespace gamemd