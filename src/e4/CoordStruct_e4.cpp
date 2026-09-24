// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CoordStruct_e4.hpp"

// 0x642740
namespace gamemd {
unsigned int * CoordStruct::Set2(IUnknown * aP1, AbstractClass * aP2)
{
  int v4; // edx

  v4 = *aP1 << 8; /*0x642756*/
  *(this + 1) = (aP1[1] << 8) + 128; /*0x642759*/
  *(this + 2) = aP2; /*0x642766*/
  *this = v4 + 128; /*0x642769*/
  return this; /*0x64276b*/
}
}