// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/EMPulseClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Cell_e4.hpp"

// 0x4C5AA0
namespace gamemd {
int EMPulseClass::StubReturn52()
{

  return 52; /*0x4c5aa5*/

}
} // namespace gamemd
// 0x4C5AB0
namespace gamemd {
int EMPulseClass::StubReturn55()
{

  return 55; /*0x4c5ab5*/

}
} // namespace gamemd
// 0x4C5AC0
namespace gamemd {
EMPulseClass * EMPulseClass::CopyTo( void * a2, char a3)
{

  int v4; // eax
  AbstractClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(unsigned int *)this->__pad_0 = &vt_EMPulseClass; /*0x4c5ac4*/
  *(unsigned int *)&this-((unsigned int *)(>__pad_0))[4] = &vt_EMPulseClass; /*0x4c5aca*/
  *(unsigned int *)&this-((unsigned int *)(>__pad_0))[8] = &vt_EMPulseClass; /*0x4c5ad1*/
  *(unsigned int *)&this-((unsigned int *)(>__pad_0))[12] = &vt_EMPulseClass; /*0x4c5ad8*/
  if ( HouseClass_Player.__pad_5568[22252] ) /*0x4c5ae6*/
    EMPulseClass::IterateCellsInRadius((int)this); /*0x4c5ae8*/
  IDA_LOBYTE(this) = 1; /*0x4c5aed*/
  ((AbstractClass *)(this))->AnnounceExpiredPointer(this); /*0x4c5af1*/
  v6 = this; /*0x4c5b06*/
  v4 = (*(int (**)(char *, AbstractClass **))(*(unsigned int *)&stru_89E138.__pad_566C[204] + 16))( /*0x4c5b0a*/
         &stru_89E138.__pad_566C[204],
         &v6);
  if ( v4 != -1 && v4 < *(int *)&stru_89E138.__pad_566C[220] ) /*0x4c5b1a*/
  {
    --*(unsigned int *)&stru_89E138.__pad_566C[220]; /*0x4c5b1f*/
    for ( ; /*0x4c5b25*/
          v4 < *(int *)&stru_89E138.__pad_566C[220];
          *(unsigned int *)(*(unsigned int *)&stru_89E138.__pad_566C[208] + 4 * v4 - 4) = *(unsigned int *)(*(unsigned int *)&stru_89E138.__pad_566C[208]
                                                                                        + 4 * v4) )
    {
      ++v4; /*0x4c5b2d*/
    }
  }
  AbstractClass::DTOR(this); /*0x4c5b41*/
  if ( ((unsigned int)(this)& 1) != 0 ) /*0x4c5b4b*/
    RA2_OPDEL(this); /*0x4c5b4e*/
  return (EMPulseClass *)this; /*0x4c5b58*/

}
} // namespace gamemd