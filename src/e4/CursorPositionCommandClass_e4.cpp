// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CursorPositionCommandClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x537E70
namespace gamemd {
_DWORD * CursorPositionCommandClass::Constructor()
{

  *(unsigned int *)this->CommandClass = (unsigned int)(&vt_CursorPositionCommandClass); /*0x537e72*/
  return this->CommandClass; /*0x537e78*/

}
} // namespace gamemd