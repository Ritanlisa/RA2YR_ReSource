// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7AECD0_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x7AECD0
namespace gamemd {  // G42.18 ns repair
unsigned int * E4Recv_7AECD0::sub_7AECD0(int a2, int a3)
{

  this->Items = 0; /*0x7aecdb*/
  this->Capacity = a2; /*0x7aecde*/
  this->IsInitialized = 1; /*0x7aece1*/
  this->IsAllocated = 0; /*0x7aece5*/
  this->vtable0 = (unsigned int)(&vt_VectorClass); /*0x7aece8*/
  if ( a2 ) /*0x7aecee*/
  {
    if ( a3 ) /*0x7aecf6*/
    {
      this->Items = (unsigned int)((void *)a3);
      return &this->vtable0; /*0x7aecfe*/
    }
    this->Items = (unsigned int)((void *)__2_YAPAXI_Z(4 * a2)); /*0x7aed0d*/
    this->IsAllocated = 1; /*0x7aed10*/
  }
  return &this->vtable0; /*0x7aecfd*/

}
}  // G42.18 ns repair
} // namespace gamemd
