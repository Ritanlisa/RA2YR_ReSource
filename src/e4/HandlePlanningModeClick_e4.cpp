// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_63DB20_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x63DB20
namespace gamemd {  // G42.18 ns repair
BOOL E4Recv_63DB20::sub_63DB20(unsigned int * a2)
{


  BOOL result = 0; // eax /*0x63db54*/
  if ( *a2 >= (int)this->AbstractClass && *a2 < (int)((int)this->AbstractClass + (unsigned int)this->M8) ) /*0x63db36*/
  {
    int v2; // eax
    v2 = a2[1]; /*0x63db38*/
    void *vtable1; // edx
    vtable1 = (void *)(this->M4); /*0x63db3b*/
    if ( v2 >= (int)vtable1 && v2 < (int)((int)vtable1 + (unsigned int)this->M12) ) /*0x63db49*/
      return 1; /*0x63db2b*/
  }
  return result; /*0x63db50*/

}
} // namespace gamemd
