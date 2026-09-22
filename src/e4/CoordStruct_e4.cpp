// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CoordStruct_e4.hpp"

// 0x642740
namespace gamemd {
unsigned int * CoordStruct::Set2(IUnknown * aP1, AbstractClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v4 = SLOWORD(aP1->field_0) << 8; /*0x642756*/
  *(this + 1) = (SHIWORD(aP1->field_0) << 8) + 128; /*0x642759*/
  *(this + 2) = aP2; /*0x642766*/
  *this = v4 + 128; /*0x642769*/
  return this; /*0x64276b*/
}
}
} // namespace gamemd
