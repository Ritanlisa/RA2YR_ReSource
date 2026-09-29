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

// 0x6C6880
namespace gamemd {
StaticButtonClass * StaticButtonClass::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)((unsigned int)((gamemd::StaticButtonClass *)((void *)this->q00C)));
  *(unsigned int *)this->__pad_0 = (void*)&StaticButtonClass_vftable; /*0x6c6886*/
  if ( v3 ) /*0x6c688e*/
    RA2_OPDEL(v3); /*0x6c6891*/
  Vector::Clear((int)&this->q00C6); /*0x6c689c*/
  GadgetClass::Dtor(); /*0x6c68a3*/
  if ( (a2 & 1) != 0 ) /*0x6c68ad*/
    RA2_OPDEL(); /*0x6c68b0*/
  return this; /*0x6c68ba*/
}
} // namespace gamemd