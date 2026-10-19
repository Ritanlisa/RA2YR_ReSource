// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_69D870_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ParasiteClass_e4.hpp"

// 0x69D870
namespace gamemd {  // G42.18 ns repair
unsigned int * E4Recv_69D870::sub_69D870(int a2, int a3)
{

  this->Items = 0; /*0x69d87b*/
  this->Capacity = a2; /*0x69d87e*/
  this->IsInitialized = 1; /*0x69d881*/
  this->IsAllocated = 0; /*0x69d885*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x69d888) */
  if ( a2 ) /*0x69d88e*/
  {
    if ( a3 ) /*0x69d896*/
    {
      this->Items = (void *)a3; /*0x69d898*/
      return &this->u32_0; /*0x69d89e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x69d8ad*/
    this->IsAllocated = 1; /*0x69d8b0*/
  }
  return &this->u32_0; /*0x69d89d*/

}
} // namespace gamemd
