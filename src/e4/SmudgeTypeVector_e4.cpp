// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SmudgeTypeVector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x67C0B0
namespace gamemd {
VectorClass_flat * SmudgeTypeVector::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x67c0b3*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_VectorClass;
  if ( v3 && BYTE1(this->m_C) ) /*0x67c0c0*/
  {
    __3_YAXPAX_Z(v3); /*0x67c0c8*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x67c0d0*/
  }
  BYTE1(this->m_C) = 0; /*0x67c0db*/
  this->m_8 = 0; /*0x67c0e1*/
  if ( (a2 & 1) != 0 ) /*0x67c0e8*/
    __3_YAXPAX_Z(this); /*0x67c0eb*/
  return (gamemd::VectorClass_flat *)(this->__pad_0); /*0x67c0f5*/

}
} // namespace gamemd