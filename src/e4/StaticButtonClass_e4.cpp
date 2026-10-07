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
namespace gamemd {
StaticButtonClass * StaticButtonClass::QueryInterface(char a2)
{

  void *v3; // eax

  v3 = (void *)*((unsigned int *)this + 12); /*0x6c6883*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_StaticButtonClass;
  if ( v3 ) /*0x6c688e*/
    __3_YAXPAX_Z(v3); /*0x6c6891*/
  ((Vector *)((int)this + 36))->Clear((int)((Vector *)((int)this + 36))); /*0x6c689c*/
  ((GadgetClass *)((ShpButtonClass *)this))->Dtor(); /*0x6c68a3*/
  if ( (a2 & 1) != 0 ) /*0x6c68ad*/
    __3_YAXPAX_Z(this); /*0x6c68b0*/
  return (gamemd::StaticButtonClass *)(this->__pad_0); /*0x6c68ba*/

}
} // namespace gamemd