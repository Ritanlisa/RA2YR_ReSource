// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/StaticButtonClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/SpawnManagerClass_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x6C6880
namespace gamemd {
StaticButtonClass * StaticButtonClass::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 12)));
  *Block = (unsigned int)(&vt_StaticButtonClass);
  if ( v3 ) /*0x6c688e*/
    RA2_OPDEL(v3); /*0x6c6891*/
  Vector::Clear((int)(Block + 9)); /*0x6c689c*/
  GadgetClass::Dtor(Block); /*0x6c68a3*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x6c68ad*/
    RA2_OPDEL(Block); /*0x6c68b0*/
  return (StaticButtonClass *)Block; /*0x6c68ba*/

}
} // namespace gamemd