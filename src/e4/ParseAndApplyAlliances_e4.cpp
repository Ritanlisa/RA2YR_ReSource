// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_69D870_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x69D870
namespace gamemd {
unsigned int * E4Recv_69D870::sub_69D870(int a2, int a3)
{
  this->Items = (unsigned int)(0);
  this->Capacity = (unsigned int)(a2);
  this->IsInitialized = 1; /*0x69d881*/
  this->IsAllocated = 0; /*0x69d885*/
  this->vtable0 = (void*)&VectorClass_HouseClass___vftable; /*0x69d888*/
  if ( a2 ) /*0x69d88e*/
  {
    if ( a3 ) /*0x69d896*/
    {
      this->Items = (unsigned int)((void *)a3);
      return &this->vtable0; /*0x69d89e*/
    }
    this->Items = (unsigned int)((void *)RA2_OPNEW(4 * a2));
    this->IsAllocated = 1; /*0x69d8b0*/
  }
  return &this->vtable0; /*0x69d89d*/
}
} // namespace gamemd
