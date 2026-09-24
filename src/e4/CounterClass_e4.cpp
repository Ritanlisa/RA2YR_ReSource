// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x49FCE0
namespace gamemd {
CounterClass * CounterClass::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x49fce3*/
  *this = &VectorClass<int>::`vftable'; /*0x49fce6*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x49fcf0*/
  {
    __3_YAXPAX_Z(v3); /*0x49fcf8*/
    *(this + 1) = 0; /*0x49fd00*/
  }
  *((_BYTE *)this + 13) = 0; /*0x49fd0b*/
  *(this + 2) = 0; /*0x49fd11*/
  if ( (a2 & 1) != 0 ) /*0x49fd18*/
    __3_YAXPAX_Z(this); /*0x49fd1b*/
  return this; /*0x49fd25*/
}
} // namespace gamemd
