// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/StaticButtonClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/SpawnManagerClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ControlClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x6C6880
namespace gamemd {  // G42.18 ns repair
StaticButtonClass * StaticButtonClass::QueryInterface(char a2)
{


  void *v3; // eax
  v3 = (void *)this->u32_30; /*0x6c6883*/
  /* X11: ptr_0 install elided (implicit via StaticButtonClass virtuals 0x6c6886) */
  if ( v3 ) /*0x6c688e*/
    __3_YAXPAX_Z(v3); /*0x6c6891*/
  ((Vector *)(int)&this->u32_90)->Clear(); /*0x6c689c*/
  ((ShpButtonClass *)this)->Dtor(); /*0x6c68a3*/
  if ( (a2 & 1) != 0 ) /*0x6c68ad*/
    __3_YAXPAX_Z(this); /*0x6c68b0*/
  return this->__pad_0; /*0x6c68ba*/

}
} // namespace gamemd