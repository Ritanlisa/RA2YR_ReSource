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

  unknown_libname_74( (void *)(&this->m_1[3])); /*0x600636*/
  unknown_libname_74( (void *)(&this->m_5[3])); /*0x60063e*/
  *(unsigned int *)this->__pad_0 = 0; /*0x600646*/
  this->u32_C = -1; /*0x60064c*/
  this->u32_14 = -1; /*0x60064f*/
  this->u32_10 = 0; /*0x600652*/
  return this->__pad_0; /*0x60065b*/

}
}