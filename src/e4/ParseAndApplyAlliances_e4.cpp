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

  *((unsigned int *)this + 1) = 0; /*0x69d87b*/
  *((unsigned int *)this + 2) = a2; /*0x69d87e*/
  *((unsigned char *)this + 12) = 1; /*0x69d881*/
  *((unsigned char *)this + 13) = 0; /*0x69d885*/
  *this = &vt_VectorClass_HouseClass; /*0x69d888*/
  if ( a2 ) /*0x69d88e*/
  {
    if ( a3 ) /*0x69d896*/
    {
      *((unsigned int *)this + 1) = a3; /*0x69d898*/
      return this; /*0x69d89e*/
    }
    *((unsigned int *)this + 1) = __2_YAPAXI_Z(4 * a2); /*0x69d8ad*/
    *((unsigned char *)this + 13) = 1; /*0x69d8b0*/
  }
  return (unsigned int *)(this);

}
} // namespace gamemd
