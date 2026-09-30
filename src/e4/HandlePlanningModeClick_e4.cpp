// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_63DB20_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x63DB20
namespace gamemd {
BOOL E4Recv_63DB20::sub_63DB20(unsigned int * a2)
{
  void * v2;
  void *vtable1; // edx
  BOOL result; // eax

  result = 0; /*0x63db54*/
    if ( *a2 >= *this && *a2 < *this + *((unsigned int *)this + 8) )
  {
    v2 = (void *)((int)((void *)(a2[1])));
    vtable1 = (void *)(this->M4);
        if ( v2 >= v3 && v2 < v3 + *((unsigned int *)this + 12) )
      return 1; /*0x63db2b*/
  }
  return result; /*0x63db50*/
}
} // namespace gamemd
