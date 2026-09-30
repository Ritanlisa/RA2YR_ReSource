// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Gadget_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x600630
namespace gamemd {
unsigned int * Gadget::InitProperties()
{
  unknown_libname_74(&this-((unsigned int *)(>m_1))[3]); /*0x600636*/
  unknown_libname_74(&this-((unsigned int *)(>m_5))[3]); /*0x60063e*/
  *(unsigned int *)this->__pad_0 = 0; /*0x600646*/
    *((unsigned int *)this + 12) = -1;
    *((unsigned int *)this + 20) = -1;
    *((unsigned int *)this + 16) = 0;
  return this; /*0x60065b*/
}
}