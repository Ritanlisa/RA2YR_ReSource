// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7AECD0_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x7AECD0
namespace gamemd {
unsigned int * E4Recv_7AECD0::sub_7AECD0(int a2, int a3)
{
  this->Items = (unsigned int)(0);
  this->Capacity = (unsigned int)(a2);
  this->IsInitialized = (unsigned int)(1);
  this->IsAllocated = (unsigned int)(0);
  this->vtable0 = (unsigned int)((void*)&VectorClass_tConnInfoStruct___vftable);
  if ( a2 ) /*0x7aecee*/
  {
    if ( a3 ) /*0x7aecf6*/
    {
      this->Items = (unsigned int)((void *)a3);
      return &this->vtable0; /*0x7aecfe*/
    }
    this->Items = (unsigned int)((void *)RA2_OPNEW(4 * a2));
        *((unsigned char *)this + 13) = 1;
  }
  return &this->vtable0; /*0x7aecfd*/
}
} // namespace gamemd
