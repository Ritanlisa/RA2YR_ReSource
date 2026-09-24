// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x67C0B0
VectorClass * SmudgeTypeVector::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x67c0b3*/
  *this = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67c0b6*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x67c0c0*/
  {
    __3_YAXPAX_Z(v3); /*0x67c0c8*/
    *(this + 1) = 0; /*0x67c0d0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x67c0db*/
  *(this + 2) = 0; /*0x67c0e1*/
  if ( (a2 & 1) != 0 ) /*0x67c0e8*/
    __3_YAXPAX_Z(this); /*0x67c0eb*/
  return this; /*0x67c0f5*/
}