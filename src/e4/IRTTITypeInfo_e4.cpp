// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/IRTTITypeInfo_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x71D150
namespace gamemd {  // G42.18 ns repair
unsigned int IRTTITypeInfo::GetOffset()
{
  return *(unsigned int *)&this-((unsigned int *)(>__pad_C0))[8]; /*0x71d156*/
}  // G42.18 ns repair
} // namespace ra2

// 0x4105E0
namespace gamemd {
int IRTTITypeInfo::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
  
  AbstractClass *v3; // ecx
  return AbstractClass::QueryInterface(v3);
}
} // namespace gamemd

// 0x74F6A0
namespace gamemd {
unsigned int * IRTTITypeInfo::loc_74F6A0(unsigned int *Block, char a2)
{
  
  
  void *v3; // eax
  v3 = (void *)*(Block + 1); /*0x74f653*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass) */  /*0x74f656*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x74f660*/
  {
    RA2_OPDEL(v3); /*0x74f668*/
    *(Block + 1) = 0; /*0x74f670*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x74f67b*/
  *(Block + 2) = 0; /*0x74f681*/
  if ( (a2 & 1) != 0 ) /*0x74f688*/
    RA2_OPDEL(Block); /*0x74f68b*/
  return Block; /*0x74f695*/
  
}
} // namespace gamemd
